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
    msg.setTimeStamp(0.7328312769304892);
    msg.setSource(29303U);
    msg.setSourceEntity(180U);
    msg.setDestination(2855U);
    msg.setDestinationEntity(229U);
    msg.state = 158U;
    msg.flags = 194U;
    msg.description.assign("YPTVRJVNGUCOZXFKYUZKKQCRVJKXUWHROHWITFDRMTNABJGZMUPVRHPJADALQSFLPQLZQVCXGENWITNZRVDYGHBUXFDBHEJSUAAXQOEBPLHFOSXAAKYPGZSVDWPSKBLJPZQBRO");

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
    msg.setTimeStamp(0.017631814927218437);
    msg.setSource(38369U);
    msg.setSourceEntity(124U);
    msg.setDestination(6974U);
    msg.setDestinationEntity(113U);
    msg.state = 59U;
    msg.flags = 72U;
    msg.description.assign("WIUHKKHXGMYJHAVYBFMWGPTAOUPKCNAOQIYXRKSUMQOAXUKATQIMS");

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
    msg.setTimeStamp(0.47652103738151974);
    msg.setSource(52213U);
    msg.setSourceEntity(32U);
    msg.setDestination(22690U);
    msg.setDestinationEntity(171U);
    msg.state = 14U;
    msg.flags = 33U;
    msg.description.assign("PWPSBBPLIJNGJKMUXRQUCTRTQMKXGGNSOSFUTZTRQATJDEAYCKBEZFNLCZZZVVWSEJO");

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
    msg.setTimeStamp(0.2942887020755097);
    msg.setSource(62406U);
    msg.setSourceEntity(52U);
    msg.setDestination(62538U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.3808277728562157);
    msg.setSource(56947U);
    msg.setSourceEntity(167U);
    msg.setDestination(47353U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.3884218884198595);
    msg.setSource(45646U);
    msg.setSourceEntity(14U);
    msg.setDestination(39219U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.33969417966611637);
    msg.setSource(1992U);
    msg.setSourceEntity(217U);
    msg.setDestination(57617U);
    msg.setDestinationEntity(18U);
    msg.id = 40U;
    msg.label.assign("JVGBMWPVEPSZZRBAEWGLFNGPNNRNZOYZDQPBETKCADFJLXPMRFXOWMLITYLYAYOMJICKIHHHBSHVEVWQZUKAJFWTULUHJJYBBOQDLQEJFSWSRKAKVDOTXUEVOYZNWFRSUFDVCRTJKMBUPMMXPGAGKRQKW");
    msg.component.assign("ZXJMDHHXXLPFANLYTDCLZDPRVMJLTMLIGCOEXEBKZGCRCMHNQAAVREIYCXGEDTPNAFJRFPRXRSENBMFVWMDOWFFLVXUZYKUBSKXZHJTWAVRLEDDBOZOCLLUGIUMFRTTPJYPWQFHPOAVKGGWCHHAANRZVWSPNKSOYQELGYZJOQGVYSNUUCVKCIZMTR");
    msg.act_time = 21410U;
    msg.deact_time = 61951U;

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
    msg.setTimeStamp(0.13204336008895856);
    msg.setSource(49930U);
    msg.setSourceEntity(0U);
    msg.setDestination(63291U);
    msg.setDestinationEntity(119U);
    msg.id = 13U;
    msg.label.assign("VUETHNKCBGLDJQJBMSSFCDMXKZXLQYJUFPEZJSANHXCLDDLMLKWAONHQQ");
    msg.component.assign("FHVKKEQKVNIGSJWCYDYVLRGBUTAPDMTNWUTNFUDGQTYFKFBGWJLSARELDFRWCSBHXJZJCAVZEHHYXZGENNRRHYPYPCRILMT");
    msg.act_time = 52346U;
    msg.deact_time = 17360U;

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
    msg.setTimeStamp(0.5907084464615243);
    msg.setSource(39328U);
    msg.setSourceEntity(142U);
    msg.setDestination(62367U);
    msg.setDestinationEntity(106U);
    msg.id = 74U;
    msg.label.assign("QDHCWWWLHHPHQJKGGUNDJEROOKLYYCHNTZXWBEVELXRLOAMLEYZFNIMXVFEWRJIDBCAOQGVYUBFIGYYZAMQLFBNCQIUIVGKILPQMHHZTOBRIIYUVQSAGREITSWXRKUWHNOZFXPRUSPEFWXOPZENBOCBUSMBHULYRUCVAAAJOGFXXJNHATMEDCACTFTNXDATMQMMTRKK");
    msg.component.assign("LQNBTVNOHYFUXHDRFCFCAJLDRFSAFOABAGPGUYPIQQYMSAVNQOPYMKUKMTNRQUFJIGKDXVRUHTCFSBKCVIQEPAWKBCTZWYWPECOBUMZEIWREKSVPSBMVSDLCBOJXLTAPYRWGOQUJGBDZK");
    msg.act_time = 62647U;
    msg.deact_time = 14045U;

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
    msg.setTimeStamp(0.8369485796139449);
    msg.setSource(40477U);
    msg.setSourceEntity(101U);
    msg.setDestination(38829U);
    msg.setDestinationEntity(237U);
    msg.id = 24U;

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
    msg.setTimeStamp(0.012951102075337562);
    msg.setSource(62121U);
    msg.setSourceEntity(130U);
    msg.setDestination(39935U);
    msg.setDestinationEntity(38U);
    msg.id = 11U;

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
    msg.setTimeStamp(0.495185679564073);
    msg.setSource(21178U);
    msg.setSourceEntity(61U);
    msg.setDestination(45081U);
    msg.setDestinationEntity(173U);
    msg.id = 185U;

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
    msg.setTimeStamp(0.09048938333667833);
    msg.setSource(47556U);
    msg.setSourceEntity(182U);
    msg.setDestination(36391U);
    msg.setDestinationEntity(228U);
    msg.op = 76U;
    msg.list.assign("ESQOKMUROSHBPHBPBNTEYMHZOTJNVHIBTYYGOJQSUZCGUFRBPFJUXJIQVFDGMXWQQVZZXFYLKEIUSITEERCVZUAEIFKASSNNJXSMWKPLAGACAIRDDYFNYWPKSGMWCCTHTCZLLLUEEDVIANQKGKTFVBZPPUYMDDDGBEDWKYAOTHNHDRLSPFLAROCTYRWFMDJPJHXANHOMXV");

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
    msg.setTimeStamp(0.5424727466140548);
    msg.setSource(771U);
    msg.setSourceEntity(234U);
    msg.setDestination(39620U);
    msg.setDestinationEntity(110U);
    msg.op = 97U;
    msg.list.assign("WHNYCRFTYNGMRJCICBFHWCIZHTFTPJQHJBPBYIJZUDNAUPKMBABAUNHVQFSFRZEOIRGOREDWSKSWVSFKKVJNPRXPLAHOXXCMVNKLZEOEKWQMNVPCLJQZGMZWGXQRFTGGZXHKRPEUOIDAYUSWY");

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
    msg.setTimeStamp(0.9548019728104958);
    msg.setSource(38927U);
    msg.setSourceEntity(110U);
    msg.setDestination(6937U);
    msg.setDestinationEntity(155U);
    msg.op = 228U;
    msg.list.assign("UOIIKVPTBYTNNZLSVQBJILGEOCVOZMMQNKVSTFSLWAPX");

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
    msg.setTimeStamp(0.5162227307839132);
    msg.setSource(28764U);
    msg.setSourceEntity(57U);
    msg.setDestination(27590U);
    msg.setDestinationEntity(164U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.5526678783069521);
    msg.setSource(42047U);
    msg.setSourceEntity(126U);
    msg.setDestination(40989U);
    msg.setDestinationEntity(235U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.41552055461099224);
    msg.setSource(40610U);
    msg.setSourceEntity(176U);
    msg.setDestination(17815U);
    msg.setDestinationEntity(153U);
    msg.op = 239U;

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
    msg.setTimeStamp(0.822297498598995);
    msg.setSource(61539U);
    msg.setSourceEntity(79U);
    msg.setDestination(48342U);
    msg.setDestinationEntity(17U);
    msg.value = 182U;

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
    msg.setTimeStamp(0.8087967533581438);
    msg.setSource(23489U);
    msg.setSourceEntity(194U);
    msg.setDestination(3521U);
    msg.setDestinationEntity(240U);
    msg.value = 28U;

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
    msg.setTimeStamp(0.2771492889876356);
    msg.setSource(35910U);
    msg.setSourceEntity(139U);
    msg.setDestination(35930U);
    msg.setDestinationEntity(161U);
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
    msg.setTimeStamp(0.8439082837105458);
    msg.setSource(50203U);
    msg.setSourceEntity(120U);
    msg.setDestination(49394U);
    msg.setDestinationEntity(134U);
    msg.consumer.assign("GKHXKIYPXQXQNCRVKMCIFNSHYGAYQLM");
    msg.message_id = 19681U;

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
    msg.setTimeStamp(0.24896603348945778);
    msg.setSource(54878U);
    msg.setSourceEntity(222U);
    msg.setDestination(2458U);
    msg.setDestinationEntity(147U);
    msg.consumer.assign("TESLYQMAOGYZHUHSSKZMDFLAVWGTDXVIPJQUTNMEUGSCKODDYTVBLBEPGRRHIEAUHOBUXBKIMJNJZWWPROTECQWCEQBYGQRKOSPLPDLTHTMFFNBRDGPJNHYYAOBWGLMCFAXQVNALSGYOTUEGYAPRXVEWUJ");
    msg.message_id = 202U;

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
    msg.setTimeStamp(0.9449524612754173);
    msg.setSource(50503U);
    msg.setSourceEntity(155U);
    msg.setDestination(25162U);
    msg.setDestinationEntity(187U);
    msg.consumer.assign("NLBVTOVUTWXAVCIHKIKYPDAUDDRXYTWLPUEYKQZZMNJDNZGSBSSZBP");
    msg.message_id = 39215U;

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
    msg.setTimeStamp(0.03781117014061841);
    msg.setSource(45651U);
    msg.setSourceEntity(162U);
    msg.setDestination(18668U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.3393878583634572);
    msg.setSource(2654U);
    msg.setSourceEntity(128U);
    msg.setDestination(36974U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.05611238731235624);
    msg.setSource(61535U);
    msg.setSourceEntity(121U);
    msg.setDestination(62613U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.5046308560687329);
    msg.setSource(46576U);
    msg.setSourceEntity(98U);
    msg.setDestination(3227U);
    msg.setDestinationEntity(39U);
    msg.section.assign("TZHODAZKFNLXYWBYQUPTWEJRKVEZBMPXKWRTOFUIIEHLEBEVJEBIKUIEQNHWEMCXOUGYMGBVLOLSJJVRXLNGRHQJABIHSSGEQGIZSVDJISZWSUPKPWDPSANSDACWZSBKTMGVCQWTDZMQQKHFGZYVFOFFWQYGAIAHKUUNBVONXJAKPXBNSPHIBCLEQMLHAUUFVPTAGYNJVXXN");
    msg.param.assign("XLSDEHUFNIBYCTORQCMWFDOCJPVQNSLNXTKHHHEGMBDWNUBCJCKNR");
    msg.value.assign("EEPSTZRZAZCKALQXFZJYVWGJQMWMBLISCGKDYHIUAEBLOTSNIFKCMXWWJXPHQPPNUOHGJMUNPYGUXHINKADZUFVHDCTTYPAJHMBVMDSVVVOEBWLXXJEFUQSQXBDOZHAYNWUWQPQACTLSRYYRJDCSGNGQEZVTXFYGNWEQLEORFBINVRBCLUMNZOM");

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
    msg.setTimeStamp(0.10153632086043918);
    msg.setSource(48503U);
    msg.setSourceEntity(55U);
    msg.setDestination(23627U);
    msg.setDestinationEntity(197U);
    msg.section.assign("AJZRSOITHTQCDGGNESKTJABBCXGPNDQUWOCOUZELWWHXEB");
    msg.param.assign("FYNHVWKSUUJJWHRNICEBYMAXYEQTNURIFEMJYSOKPDOBLIUAZUWMPVKRZKGZJXMRZESIADGNIFXXSFOQFVIHCVPJ");
    msg.value.assign("WAJFGINRHFKSDBXCFUMKZZLDIOQBUAMJNJAANGNUHPAKVRGPXBTRWDFRKVIGEWMZAKFGSYWRJRDCTCDYTTJZLJUUTKZZOGSJMVFHBXTNDHLPLYIWQQUSLXBSMNJWZUVWXJOLYFBDIORMVPCMCAXIKLSMDOCQPTWNGSFJANVEYEBHYESROEYIATAXXGTVZOECULLPQHWWHKTUCKPCEHPPOFEIMOZQVBQFVSMDDH");

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
    msg.setTimeStamp(0.5822672320786456);
    msg.setSource(27289U);
    msg.setSourceEntity(203U);
    msg.setDestination(13124U);
    msg.setDestinationEntity(26U);
    msg.section.assign("MECTVYDZDHTXNDVVVRNGEZYNJKPAMLSH");
    msg.param.assign("TWYWXRUEFOZNWQOERMQYUVAHSPJCULNWKNDSQHFTFXXMBOQFMJEUPBLDZKCQHMRNSUJYVJFUPINAAXFZDVMQSZBIDZSAYWBGXGXIELDWIXVUESBIGNDGSKEJTAKTLNVOAOJ");
    msg.value.assign("BVCSLOJCTFMYXDWJRTJTLYIQDFWZWQFYQRWAKXOFXJPBTGKIY");

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
    msg.setTimeStamp(0.42560806097448856);
    msg.setSource(59647U);
    msg.setSourceEntity(16U);
    msg.setDestination(22658U);
    msg.setDestinationEntity(163U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.4412883116726165);
    msg.setSource(37807U);
    msg.setSourceEntity(16U);
    msg.setDestination(1408U);
    msg.setDestinationEntity(224U);
    msg.op = 240U;

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
    msg.setTimeStamp(0.47445392658169827);
    msg.setSource(21042U);
    msg.setSourceEntity(134U);
    msg.setDestination(56398U);
    msg.setDestinationEntity(110U);
    msg.op = 253U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("RNZECAZBSMDNTBJWLLQOUVFPKLMPBYAKDLBRMTSTQTRTODVCGEJJTIWVSAACIWBDPSRMXTZMUMXEVDLDJOYHYHKPUXQUYFMJINROEYNMBXOPISGTRYIBCIUCJBJOWZFMIQNNGITZYAKOUSXGJZDWOUXPUIGSQHAVD");
    tmp_msg_0.param.assign("UTQSDXOBZIBPFLSIFXCXNGTWMGKXQAKBLACWAWLXMEFZCRHUS");
    tmp_msg_0.value.assign("JDYZTHGDJLKBSKTRRFICEATMMYCDGTWAZJATSIEQGZFPDFHOPZYNNIGBUVVXXPLFLJJWKACTOQKHYBFIZNDXYCAKJURXDNSKVOAOCDUUWQCUIXZMEVJJEITMQSKVPGXSBQLZNLWCLRWMLSDSYTIKNFEOVQARRPZOYFVEMOUYWPOBMXUYOK");
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
    msg.setTimeStamp(0.5057219193120689);
    msg.setSource(36171U);
    msg.setSourceEntity(230U);
    msg.setDestination(22781U);
    msg.setDestinationEntity(175U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.6994594202465493);
    msg.setSource(25209U);
    msg.setSourceEntity(227U);
    msg.setDestination(5617U);
    msg.setDestinationEntity(151U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.20130002214716136);
    msg.setSource(30998U);
    msg.setSourceEntity(12U);
    msg.setDestination(59537U);
    msg.setDestinationEntity(100U);
    msg.op = 204U;

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
    msg.setTimeStamp(0.5076984688628269);
    msg.setSource(6333U);
    msg.setSourceEntity(200U);
    msg.setDestination(28408U);
    msg.setDestinationEntity(131U);
    msg.total_steps = 49U;
    msg.step_number = 49U;
    msg.step.assign("VLPLUFAHHEIFRMZSYORATOZFGQKQTPBWWVJXUOLEXGOJYFGMYMEYENWBCYVLKCDWKWKNDHGNWALJ");
    msg.flags = 102U;

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
    msg.setTimeStamp(0.5095907297777472);
    msg.setSource(50023U);
    msg.setSourceEntity(114U);
    msg.setDestination(17514U);
    msg.setDestinationEntity(88U);
    msg.total_steps = 80U;
    msg.step_number = 254U;
    msg.step.assign("EJXPKFKINGQDJXISONMRCUDEDQDIS");
    msg.flags = 49U;

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
    msg.setTimeStamp(0.43094335896469893);
    msg.setSource(24908U);
    msg.setSourceEntity(140U);
    msg.setDestination(55378U);
    msg.setDestinationEntity(159U);
    msg.total_steps = 7U;
    msg.step_number = 95U;
    msg.step.assign("GCVBKSMLUJCHKQWGHSMDAGJFIPPHHCVZOMCOPNFZBXNHPVBLFWTWCDLKEOIBUCRKABENJNJWPDFYAOQVIKIFDRACPTSOHLJHTHRLUZIBOMXTJTQ");
    msg.flags = 210U;

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
    msg.setTimeStamp(0.4182909367691595);
    msg.setSource(53314U);
    msg.setSourceEntity(27U);
    msg.setDestination(60715U);
    msg.setDestinationEntity(164U);
    msg.state = 16U;
    msg.error.assign("YLIWZWRNGOREZYEBUVASJLRXHBPTXZOISAFMLBLQPVZCRFEGXTYZDMYYSXPML");

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
    msg.setTimeStamp(0.854443359612862);
    msg.setSource(58199U);
    msg.setSourceEntity(251U);
    msg.setDestination(39931U);
    msg.setDestinationEntity(129U);
    msg.state = 50U;
    msg.error.assign("CDHAZLIIXRQMUDDGHKXODMUJEYTUVVJPSMDEEBZNIPKMFWXFKLJWIWMZKKJTFZWCUPJXGSQDLYUNVUXAOAXDFAYEPXRKNGECOMSWLDZQTJAZKKVKCHVQVAYGIEEXNSDBQVTZMFKCEWXRSWVBQUQUBSFOSDENMZTCNRUZPPTHRYRQTLVBYJIJSIGAWTEBBOBWHGCQI");

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
    msg.setTimeStamp(0.8407458659257074);
    msg.setSource(31307U);
    msg.setSourceEntity(41U);
    msg.setDestination(8635U);
    msg.setDestinationEntity(155U);
    msg.state = 72U;
    msg.error.assign("WDULRIRSWSZYKYFCTMNPSPSYFEDEEMXMSL");

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
    msg.setTimeStamp(0.9518873524515308);
    msg.setSource(22225U);
    msg.setSourceEntity(178U);
    msg.setDestination(2582U);
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
    msg.setTimeStamp(0.5594766819502602);
    msg.setSource(10597U);
    msg.setSourceEntity(149U);
    msg.setDestination(44417U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.06323865653631267);
    msg.setSource(38389U);
    msg.setSourceEntity(102U);
    msg.setDestination(57272U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.1610425434249838);
    msg.setSource(26824U);
    msg.setSourceEntity(225U);
    msg.setDestination(15222U);
    msg.setDestinationEntity(21U);
    msg.op = 79U;
    msg.speed_min = 0.5152262415342738;
    msg.speed_max = 0.3564152240367744;
    msg.long_accel = 0.64656965711391;
    msg.alt_max_msl = 0.7334962042975999;
    msg.dive_fraction_max = 0.942478902777271;
    msg.climb_fraction_max = 0.162593020672819;
    msg.bank_max = 0.29842396611796373;
    msg.p_max = 0.6928360256407349;
    msg.pitch_min = 0.4857391092219988;
    msg.pitch_max = 0.6316221346848173;
    msg.q_max = 0.5663431450036428;
    msg.g_min = 0.14894111855337622;
    msg.g_max = 0.10209700243013942;
    msg.g_lat_max = 0.47170776370332;
    msg.rpm_min = 0.5310893367305446;
    msg.rpm_max = 0.33222329019317676;
    msg.rpm_rate_max = 0.3370777321545223;

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
    msg.setTimeStamp(0.33986537211933854);
    msg.setSource(34892U);
    msg.setSourceEntity(208U);
    msg.setDestination(380U);
    msg.setDestinationEntity(142U);
    msg.op = 64U;
    msg.speed_min = 0.8303781449451539;
    msg.speed_max = 0.01756065060323231;
    msg.long_accel = 0.3610410748172165;
    msg.alt_max_msl = 0.5592135826981203;
    msg.dive_fraction_max = 0.8238155294315641;
    msg.climb_fraction_max = 0.6916076145698873;
    msg.bank_max = 0.9705610335844748;
    msg.p_max = 0.1199270455665834;
    msg.pitch_min = 0.3917504142181496;
    msg.pitch_max = 0.8403878072175333;
    msg.q_max = 0.1695164316681136;
    msg.g_min = 0.26006277815400225;
    msg.g_max = 0.5951770004748977;
    msg.g_lat_max = 0.479570803636702;
    msg.rpm_min = 0.8425043154080087;
    msg.rpm_max = 0.4783795428365799;
    msg.rpm_rate_max = 0.5247034231425538;

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
    msg.setTimeStamp(0.9237339273843289);
    msg.setSource(35097U);
    msg.setSourceEntity(34U);
    msg.setDestination(35912U);
    msg.setDestinationEntity(221U);
    msg.op = 57U;
    msg.speed_min = 0.6152245799860296;
    msg.speed_max = 0.9035809300033201;
    msg.long_accel = 0.1403699336832358;
    msg.alt_max_msl = 0.408864272841051;
    msg.dive_fraction_max = 0.2494689297243151;
    msg.climb_fraction_max = 0.3407522198929407;
    msg.bank_max = 0.43857841120131313;
    msg.p_max = 0.58283554512397;
    msg.pitch_min = 0.25731787090500846;
    msg.pitch_max = 0.8484648609345254;
    msg.q_max = 0.6046828516676338;
    msg.g_min = 0.32855939002467915;
    msg.g_max = 0.6805010894180227;
    msg.g_lat_max = 0.48523244883319017;
    msg.rpm_min = 0.3611758708472351;
    msg.rpm_max = 0.9718015510392403;
    msg.rpm_rate_max = 0.5077935852784368;

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
    msg.setTimeStamp(0.21991262829808766);
    msg.setSource(61680U);
    msg.setSourceEntity(209U);
    msg.setDestination(11471U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.11030314896748517;
    msg.lon = 0.5517713365529974;
    msg.height = 0.24838705062946087;
    msg.x = 0.305971760917068;
    msg.y = 0.9873943328562517;
    msg.z = 0.49548257753832936;
    msg.phi = 0.6904805134248695;
    msg.theta = 0.05178581396292958;
    msg.psi = 0.20191037183421;
    msg.u = 0.9098491708032165;
    msg.v = 0.546782756434053;
    msg.w = 0.5945125087845614;
    msg.p = 0.16880311333335407;
    msg.q = 0.21078614032566667;
    msg.r = 0.6709649153463475;
    msg.svx = 0.06429214871375888;
    msg.svy = 0.8442862757246015;
    msg.svz = 0.002533821426906724;

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
    msg.setTimeStamp(0.16198920393554228);
    msg.setSource(20297U);
    msg.setSourceEntity(232U);
    msg.setDestination(64254U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.3539764469401131;
    msg.lon = 0.8257487962159241;
    msg.height = 0.5705007029609099;
    msg.x = 0.1473595993632837;
    msg.y = 0.6846642308687931;
    msg.z = 0.8947518773416869;
    msg.phi = 0.1691411967111942;
    msg.theta = 0.8418589950619019;
    msg.psi = 0.7912771774830674;
    msg.u = 0.11265238807340361;
    msg.v = 0.3889642426919082;
    msg.w = 0.5314815640715828;
    msg.p = 0.21414030215857904;
    msg.q = 0.14398811202605855;
    msg.r = 0.9744469605414029;
    msg.svx = 0.2990304374885019;
    msg.svy = 0.10187167526275509;
    msg.svz = 0.8693410019251442;

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
    msg.setTimeStamp(0.007776061437092974);
    msg.setSource(11404U);
    msg.setSourceEntity(123U);
    msg.setDestination(5231U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.0009156737205212595;
    msg.lon = 0.08799060787784518;
    msg.height = 0.4310023476039443;
    msg.x = 0.03869138855548504;
    msg.y = 0.33722191054299777;
    msg.z = 0.42244734589034805;
    msg.phi = 0.37250772007052646;
    msg.theta = 0.3084597943289502;
    msg.psi = 0.56098037264806;
    msg.u = 0.5348521442234802;
    msg.v = 0.6555783569270383;
    msg.w = 0.3460922892124654;
    msg.p = 0.2538998847427034;
    msg.q = 0.9705936035352868;
    msg.r = 0.7082501233988591;
    msg.svx = 0.08970961629650065;
    msg.svy = 0.3354881316319118;
    msg.svz = 0.4266203885827309;

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
    msg.setTimeStamp(0.4554254106476032);
    msg.setSource(52589U);
    msg.setSourceEntity(165U);
    msg.setDestination(10302U);
    msg.setDestinationEntity(21U);
    msg.op = 153U;
    msg.entities.assign("KKQSWDUEWNXMIBVHGCNBWC");

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
    msg.setTimeStamp(0.5665541575923962);
    msg.setSource(1715U);
    msg.setSourceEntity(30U);
    msg.setDestination(51527U);
    msg.setDestinationEntity(224U);
    msg.op = 99U;
    msg.entities.assign("CORRSJPFBWOMLRNXZCU");

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
    msg.setTimeStamp(0.6186672654550157);
    msg.setSource(58423U);
    msg.setSourceEntity(157U);
    msg.setDestination(43216U);
    msg.setDestinationEntity(243U);
    msg.op = 215U;
    msg.entities.assign("HTFYKPYVZYQZAUBJNJXBJXNPTVCFFVNGRYOIXAKTNHPNZLFREAVETKOGCHMLOKLBMNXPSQYRBXEASKWQRMPDTREIPGWVQDANGTKJCMEIGPTLKSHEQICECYTCQNZEUILLOWHHGCWMOSZHDCDJSMUHFBWQEFRRDUVUXCASIWUJWMZOVWMDIZPAVYXYZSYUDNRLVGBDBJATLKNEFHKOUAGDSRPDQUBSPTIOJWBQGULZXWBQXCAFHGRX");

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
    msg.setTimeStamp(0.007960136646933846);
    msg.setSource(60950U);
    msg.setSourceEntity(104U);
    msg.setDestination(53677U);
    msg.setDestinationEntity(167U);
    msg.type = 5U;
    msg.speed = 24450U;
    const char tmp_msg_0[] = {-93, -87, 73, 80, 107, 23, 68, 48, 64, 18, 20, 61, -108, -64, 112, 1, 97, 5, -100, -36, -25, -67, 45, -46, 84, -85, -78, -100, -127, -62, -70, -85, -57, 126, 60, 87, -58, 10, -11, -78, -78, 90, 50, -79, 69, 120, -45, 99, 53, 22, 71, -61, -54, 51, 43, -69, -54, -112, 100, 38, 45, -46, 1, 10, -41, -43, 50, -42, -78, 105, 48, 43, -20, -116, -4, -111, 23, 67, 85, 21, 23, 64, -71, -13, 47, 120, 93, -18, -118, -34, 71, -2, 108, 3, 74, -28, -33, 5, 70, 53, -57, -33, -43, 89, -104, 124, 92, 96, -14, -96, -90, -23, -37, -83, 71, -117, -42, 8, -95, -87, 41, -85, 0, 43, -14, -92, 116, 96, 102, 52, 69, 126, 14, 37, -45, -76, 116, 21, 65, -33, -74, 37, 62, 42, 61, 4, 126, 2};
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
    msg.setTimeStamp(0.008208190815376715);
    msg.setSource(61671U);
    msg.setSourceEntity(185U);
    msg.setDestination(25356U);
    msg.setDestinationEntity(58U);
    msg.type = 135U;
    msg.speed = 49383U;
    const char tmp_msg_0[] = {-27, 60, 28, 81, 125, 12, -10, -118, 81, -76, -78, -125, -43, -43, 122, 73, 68, 29, 74, -123, 51, 85, 91, 84, 29, -87, 12, 124, 20, 0, 53, 80, -8, 84, -2, -38, 11, 31, 13, 63, 6, 10, -43, 60, 103, -88, -84, -16, -8, -76, 59, -10, -99, -120, -89, 52, -69, 33, -122, 53, 2, 55, -4, 27, -17, 11, -39, -40, -102, -26, -67, 4, 60, -39, -104, 11, 126, -47, -24, -10, -40, -90, 116, 103, 69, -32, 51, 53, 91, 29, -11, -127, -113, -44, 8, 77, 49, -80, 74, -114, 86, -22, -125, 11, 20, 90, -61, 113, -87, 49, 19, 57, -79, 69, 68, 101, 85, -58, 73, 83, -123, 42, -128, -8, 106, 122, 116, -127, 89, -104, -91, -2, 19, 83, -126, 46, -51, -76, -83, 90, -2, -102, 79, -28, -44, -63, -124, 4, 25, 31, 75, 34, 29, 126, -14, -77, 81, 106, -64, -96, 45, -116, 96, 67, 110, -95, 95, 96, 124, 25, -102, 79, -15, -53, 12, -100, -75, 115, 77, 6, -89, -60, 4, 105, 102, 63, -89, 42, 58, -49, 79, 71, 34, 102, 76, 28, -37, -64, 46, 56, 0, 55, -56, 73, -28, -112, 48, 50, 67, -49, -123, 83, -112, 41, 24, 28, 125, 49, -32, -93, 96, 5, 82, 5, -85, 92, -88, 70, 105, -79, -54, -105, 15, -123, 118, -45, -49, -43, -115, -23, 73, -95, -38, -12, 24, 38, 32, -5, 126, -33, 14, -44, -106, 14};
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
    msg.setTimeStamp(0.7850439701266917);
    msg.setSource(24392U);
    msg.setSourceEntity(136U);
    msg.setDestination(9485U);
    msg.setDestinationEntity(154U);
    msg.type = 82U;
    msg.speed = 39941U;
    const char tmp_msg_0[] = {17, -45, 116, 118, -24, 91, 66, 48, 69, 42, -118, 9, -35, -124, 26, -43, 104, 51, -12, -34, -5, 96, -96, 115, -70, 62, -112, 71, -22, 93, 116, 101, 90, -93, 105, -23, 61, 104, 78, 35, 105, -70, 120, -11, -49, 101, -74, 12, -61, -78, -62, -111, -38, -43, -47, -97, -3, 34, -112, -124, -121, -87, 17, -111, 67, 52, 22, 15, -97, -106, 20, -22, 63, 31, -87, -73, -33, 118, -75, -96, 96, -55, 95, 94, 61, 6, 112, 21, -37, -39, -80, 27, -106, -7, -40, 51, 26, -74, -47, 113, 66, 87, 91, -48, -122, -14, 75, -72, -126, -78, 95, 75, -98, 92, -25, 32, -27, -22, 32, -80, 40, 11, -18, -6, -40, 45, -103, -126, 50, -95, 57, 1, -87, -65, 38, 117, 121, 37, -47, -49, 72, -116, 87, 43, 0, -18, -78, -106, 27, -8, 105, -34, 64, -3, 11, 6, 115, 55, -99, 17, -62, 72, -107, 89, -128, -113, -55, 10, 90, -92, 120, -72, -13, 96, 40, -115, 94, -75, -14, 39, -120, -125, -65, 107, 14, -63, -4, 1, -33, 83, -91, 83, -14, 83, 18, -56, -57, 76, 83, -10, -108, -113, 31, -97, 37, -33, 34, -45, -52, -118, 23, 68, -63, -114, -30, -79, -101, -18, 5, 75, -49, 107, 2, -28, 34, -37, 2, -87, 95, -41, 115, -6, -79, -83, 123, 5, 52, -69, 37, 13, 97, -93, 103, -92, -6};
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
    msg.setTimeStamp(0.24860769059274856);
    msg.setSource(41752U);
    msg.setSourceEntity(206U);
    msg.setDestination(41860U);
    msg.setDestinationEntity(72U);
    msg.op = 111U;
    msg.tas2acc_pgain = 0.6096259763665892;
    msg.bank2p_pgain = 0.5902157617921243;

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
    msg.setTimeStamp(0.054684740506331764);
    msg.setSource(57511U);
    msg.setSourceEntity(158U);
    msg.setDestination(40338U);
    msg.setDestinationEntity(25U);
    msg.op = 112U;
    msg.tas2acc_pgain = 0.46118491882329293;
    msg.bank2p_pgain = 0.6046153034658799;

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
    msg.setTimeStamp(0.9625140352472001);
    msg.setSource(38322U);
    msg.setSourceEntity(236U);
    msg.setDestination(45824U);
    msg.setDestinationEntity(217U);
    msg.op = 253U;
    msg.tas2acc_pgain = 0.7432793392972613;
    msg.bank2p_pgain = 0.9016635521281097;

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
    msg.setTimeStamp(0.7322882238058843);
    msg.setSource(36122U);
    msg.setSourceEntity(216U);
    msg.setDestination(56029U);
    msg.setDestinationEntity(19U);
    msg.available = 2653116043U;
    msg.value = 217U;

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
    msg.setTimeStamp(0.3131989467273214);
    msg.setSource(36012U);
    msg.setSourceEntity(75U);
    msg.setDestination(16459U);
    msg.setDestinationEntity(45U);
    msg.available = 3239148852U;
    msg.value = 195U;

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
    msg.setTimeStamp(0.8200018101016275);
    msg.setSource(44676U);
    msg.setSourceEntity(96U);
    msg.setDestination(26667U);
    msg.setDestinationEntity(160U);
    msg.available = 920685600U;
    msg.value = 102U;

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
    msg.setTimeStamp(0.846787045963713);
    msg.setSource(24497U);
    msg.setSourceEntity(3U);
    msg.setDestination(35263U);
    msg.setDestinationEntity(21U);
    msg.op = 80U;
    msg.snapshot.assign("KJKSCHCDLOQSCIYEVQDXMRRKRJ");
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.6084592267666686;
    tmp_msg_0.y = 0.5261385419535388;
    tmp_msg_0.z = 0.4432700878013922;
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
    msg.setTimeStamp(0.465571021576485);
    msg.setSource(53983U);
    msg.setSourceEntity(85U);
    msg.setDestination(3854U);
    msg.setDestinationEntity(60U);
    msg.op = 213U;
    msg.snapshot.assign("QMQWMPNUTECRSNWPORVYWQZHDXTRJIKSWBAJLYYNSDKMBIFOEUIWPPGBENVDBKCZMHTFRKJORNYSXLZG");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("HRQRKXVSUYVVLDXWOUVCRWYYJMPEDGCRXJKOIFCVOXFCABCWUBMTKCGUDELCRWOMLBTWGZEASLQJTEANPECSPTGRWSQGPJFVZWNHHNEVSXRNBMESVBFILJRFUCPOOQDOSZBZNWUAYZSMIEZJKVGJPAFFEUUGYTLKBWXAMCTXYNHBHHEMLJD");
    tmp_msg_0.plan_size = 63601U;
    tmp_msg_0.change_time = 0.73986937566454;
    tmp_msg_0.change_sid = 16323U;
    tmp_msg_0.change_sname.assign("GLPCAXYLJEEYXOJLBIAZPJVRYZFHWLVEGQZDUDQSLCFNRGXADUMOABVMONOKCCKWOWTTYLDCXORRSIVHOOUYLHVMIJLZPCBFBFUZSQWJHI");
    const char tmp_tmp_msg_0_0[] = {-63, 107, -116, 86, -114, -13, -114, 69, 27, -109, -11, -38, 119, -121, -83, -104, -80, -99, 56, -57, 57, 69, -95, -91, -57, 83, -43, -64, 116, -43, -111, 15, 63, 0, 86, -102, 122, -32, -14, 69, 42, 3, 43, 35, -29, -122, -59, 115, -96, -4, 19, 12, 119, -9, 33, -23, -96, 77, 37, -88, 63, -47, -69, -62, -31, -69, -114, -10, 39, -10, -11, 7, 19, -103, 84, -68, -41};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7835985588090032);
    msg.setSource(22813U);
    msg.setSourceEntity(61U);
    msg.setDestination(49760U);
    msg.setDestinationEntity(25U);
    msg.op = 15U;
    msg.snapshot.assign("EVKNZXNYFMKDNLVMAQLZHEJCGICDKSJWBCVTVNKHXMVZLBHV");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9076762328296331;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 60291U;
    tmp_msg_0.custom.assign("RFRYSLCJFKLZHJN");
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
    msg.setTimeStamp(0.5091854827043859);
    msg.setSource(52695U);
    msg.setSourceEntity(213U);
    msg.setDestination(48918U);
    msg.setDestinationEntity(233U);
    msg.op = 21U;
    msg.name.assign("TOJXTRMCXCGADJSMKFRAGJOSWYIHOAWCVLIRUIBEWLSPQGSDSNVOKSDVISNUUYCDDMEFHYIMPJBAIUYKBFJQWQRHENPXJORLRXCAOAJQXREBMKVHZFZA");

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
    msg.setTimeStamp(0.7387012064590348);
    msg.setSource(19093U);
    msg.setSourceEntity(153U);
    msg.setDestination(45966U);
    msg.setDestinationEntity(182U);
    msg.op = 222U;
    msg.name.assign("RAMKWIKLWPROFVEYCATPNXZXTDSGKYQETUITNBGUFLXKSWEZFFQCSXHWFZTILBCVVJQXRNDXQNIAMNY");

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
    msg.setTimeStamp(0.477605309303202);
    msg.setSource(8492U);
    msg.setSourceEntity(95U);
    msg.setDestination(40943U);
    msg.setDestinationEntity(108U);
    msg.op = 241U;
    msg.name.assign("ZDBUNEZMALGASSBLCHPIREVWVZWTXRYECVCWJDKDQIRMPNOHZBKQOARUGEQIAQZHLMLGBNXFYDXARSPIODQFOEKCMYOWPWRYBLNSAHKHNQEJUIYVWYRTUTKZOUVHAYQGTEMJFNOMEJIDMEW");

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
    msg.setTimeStamp(0.4392455147884152);
    msg.setSource(8327U);
    msg.setSourceEntity(253U);
    msg.setDestination(31420U);
    msg.setDestinationEntity(223U);
    msg.type = 164U;
    msg.htime = 0.5069331084054358;
    msg.context.assign("XEUMBZPKZCRNBYQNWWIOGXUMXJZRTBZGOSSCLPPDCPZVBSKNDQLRFZNFOROQQCKMWRXSOCEQ");
    msg.text.assign("HQWZRMLIATRIAITOJFLJBMUMTYLIBNRZTFVSHCIQNPWSWEYFVFRAFQQKSGDLOHMJKHVGKLLSYORNUKKVDHSNZXZHGXJPNODVGXJQCPZOCTNDUOQDPYKPWXPRYBJZ");

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
    msg.setTimeStamp(0.01596072019754624);
    msg.setSource(58038U);
    msg.setSourceEntity(161U);
    msg.setDestination(36982U);
    msg.setDestinationEntity(25U);
    msg.type = 55U;
    msg.htime = 0.6609678048105909;
    msg.context.assign("MQEJICMSXRTZKUWLHAGSONMFTNGVXUZFVRYIFEVQJOZHKISYPIOHFABJVONSMFGAAKTRSKSCJEVCRQZYPEGDCZAGDIWXOTOCLUBPXOMMCNJUHDBLBJQGMSHWQFQCWLZULEYHZQNQNHZPTXRDVNVGIPQJBFKTKOCAGCALFVW");
    msg.text.assign("BABGYOAOZJLBKWWISNLBUTJYSDPARYDOCMFCREGQDWGXIEFWBGHVEZSTGCMCQWQIZSXSCRIVVZGWQYZLRJHJXIPESLYFYUMSMBIPDAROGMTGTCSDZEM");

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
    msg.setTimeStamp(0.08890773998222767);
    msg.setSource(48207U);
    msg.setSourceEntity(175U);
    msg.setDestination(57248U);
    msg.setDestinationEntity(15U);
    msg.type = 182U;
    msg.htime = 0.3244641012029773;
    msg.context.assign("MMQHPHBNEVDZLKERSDWFEPGNVRUKZIETMFIYBHMBKTHMIUJOTIGZORQHOCWWOLOLU");
    msg.text.assign("XNCAPIHEHBETSJWHFTHXRKRZWHUWAQSHPBOQBMYZWWFUWEMQULLUIKARIYJLTRZXNAMYIUELEXGCGSDVJPTDKYXZQHTTIPJMKHQGAOQBFFGCKENWFFES");

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
    msg.setTimeStamp(0.6813431114506344);
    msg.setSource(47902U);
    msg.setSourceEntity(87U);
    msg.setDestination(4512U);
    msg.setDestinationEntity(97U);
    msg.command = 22U;
    msg.htime = 0.7982280602990717;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 138U;
    tmp_msg_0.htime = 0.20235954007974588;
    tmp_msg_0.context.assign("BHXFEWVBAHTFXUQSLYQWPCSGMLWULYYJVDSSUBXNONZNZLGMKOHME");
    tmp_msg_0.text.assign("POAUKUMLTOBXSIJXQMBTWDPVMVUDEHKONMRSZGCXVOFMUIFFXJKYMGLPYNOKQBPVXNHZSTNRWCYYYMETKAJTRRHRGXADSSJHZLIPZZNUKNUVJESCZEMKACSWTQIUABMFQDJPLKTIAWKSDJZRLPOFXOKBTCBVBQOHADSHIRGGWVYEWEFWTHQEPQNGYSCLUDGYFLDERZQATHWNIEECYAVFOBRALHIGMJDRZDFIZWLUUOPFCXIVVNJJNPCGWHGBBX");
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
    msg.setTimeStamp(0.4762559049371604);
    msg.setSource(53041U);
    msg.setSourceEntity(90U);
    msg.setDestination(21194U);
    msg.setDestinationEntity(100U);
    msg.command = 65U;
    msg.htime = 0.559856356307305;

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
    msg.setTimeStamp(0.9997383313801055);
    msg.setSource(64323U);
    msg.setSourceEntity(133U);
    msg.setDestination(20322U);
    msg.setDestinationEntity(12U);
    msg.command = 228U;
    msg.htime = 0.2162958556896234;

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
    msg.setTimeStamp(0.5388936234438223);
    msg.setSource(27017U);
    msg.setSourceEntity(84U);
    msg.setDestination(44157U);
    msg.setDestinationEntity(151U);
    msg.op = 235U;
    msg.file.assign("HVPGEUFZSEASIHNWKAPHIYVGEKNMCMEKADTFBDDBNPWOWOWSJBYDOAKZFYKGZUUZCVLFGUENXXPMYPVOJSYKBBLCQTXXFSONYSMRCWUKEZQT");

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
    msg.setTimeStamp(0.5894906928950702);
    msg.setSource(63521U);
    msg.setSourceEntity(227U);
    msg.setDestination(51016U);
    msg.setDestinationEntity(80U);
    msg.op = 218U;
    msg.file.assign("EFUEPKJLRPVHEKOQQZSNSBTKACNNIRJTQBIBPHCDKCMKZQRRPQVELFZWJMDLMAAXGVUNDPSVWFOQBRHIVTRZIWCZAISFWFTBDNVOKUGHZHCMOGEXUGSYNWFVVYMLMPCEWKXMVLYXGYAFOGYKETRWDJZLRYNKUXIHZNTFPQTQYUWXBGCCDBAFPYAHUIXLDYPMIAJMAASCBJNUIJOSSDDGZVOHGIERQNTJKROJWOTXOFESPYLUL");

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
    msg.setTimeStamp(0.28710619104941015);
    msg.setSource(40711U);
    msg.setSourceEntity(173U);
    msg.setDestination(64648U);
    msg.setDestinationEntity(171U);
    msg.op = 75U;
    msg.file.assign("OWRLHFIYCYPIZQVKWHHAUNCURWWSXYOOWJJDLXTAMEDXHAQMLTCMIAIDOLSVZSUILFBRRCGPULASRPSVEJGZYFNCVSUBEIWRJZQTTYBXMJYXXVDEQXTDKNAUWPZICPLSNSECHHMEOMEVBJNLOVPBZKBGYKOQPZJVGIPCFTYJFNUFDBGKUUFIILXFOUGFBJQLGERDYRKXMQENRXKCBTAZNTHMQFOWZMVJHTDTHGPHVWGWDBGSQEAADNMK");

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
    msg.setTimeStamp(0.5409246012560572);
    msg.setSource(24614U);
    msg.setSourceEntity(242U);
    msg.setDestination(55151U);
    msg.setDestinationEntity(220U);
    msg.op = 199U;
    msg.clock = 0.9186070430445947;
    msg.tz = 65;

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
    msg.setTimeStamp(0.7751905246992231);
    msg.setSource(28562U);
    msg.setSourceEntity(21U);
    msg.setDestination(39702U);
    msg.setDestinationEntity(83U);
    msg.op = 60U;
    msg.clock = 0.8264742451869149;
    msg.tz = 112;

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
    msg.setTimeStamp(0.4678249867227562);
    msg.setSource(19931U);
    msg.setSourceEntity(22U);
    msg.setDestination(6862U);
    msg.setDestinationEntity(254U);
    msg.op = 23U;
    msg.clock = 0.17748028031311736;
    msg.tz = -30;

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
    msg.setTimeStamp(0.38982505464982675);
    msg.setSource(4047U);
    msg.setSourceEntity(166U);
    msg.setDestination(21344U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.08142241201893197);
    msg.setSource(5470U);
    msg.setSourceEntity(107U);
    msg.setDestination(63187U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.838057002525674);
    msg.setSource(62846U);
    msg.setSourceEntity(146U);
    msg.setDestination(18645U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.9222422021763091);
    msg.setSource(22838U);
    msg.setSourceEntity(116U);
    msg.setDestination(44925U);
    msg.setDestinationEntity(52U);
    msg.sys_name.assign("ZBWPXPFWSWUADTUHNJHCPWGRLNGHMNGUJRELDFSLJYUZWRMTHACOQAEEVRYIYBDEOQSRBMAKMCTVDGTLIUKOIEXXGYRQSYKBJNZVPOEWOKJQNHSPWJDYTGRNSCUKBJHEUIMWKJQLCTDEHPCUIFAXYFVIJ");
    msg.sys_type = 159U;
    msg.owner = 49505U;
    msg.lat = 0.8296041844661464;
    msg.lon = 0.2312456960732655;
    msg.height = 0.4175074451213394;
    msg.services.assign("BEPIEUHBSQAKGYODDIDIWEHSYNDKJDNZJRKTFDKNANXXGGJKPFCVVUVYRVLHYJYUWMIFAFPZSAPIURFFVYNFLUDITYWSQCQTMRXLFXAGMJSGRJOMBBZTPVKBIMMHTALWPNOCEXLDVVEUXYOPEPHSQGMDDKOKSFSYBEQXLUCGWEQHAOPZWTQCNQKGZJMHMULVCARRNJWMTLTJWEOQYBCCLZBZBNCAX");

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
    msg.setTimeStamp(0.9441894755044833);
    msg.setSource(24499U);
    msg.setSourceEntity(98U);
    msg.setDestination(31903U);
    msg.setDestinationEntity(32U);
    msg.sys_name.assign("OVNMSMYJDHAFQYUPTOYGVURQDOUAVRQLITNCAEBVSBZUOTIIBJLGPUQPTWBBDITSYBQWCCHSLEGHEJNDMLBEUSYPPOKWSTLFJAVBEWPCXZGIJENONDNUJHCB");
    msg.sys_type = 68U;
    msg.owner = 14776U;
    msg.lat = 0.7443160934733127;
    msg.lon = 0.4321120509033166;
    msg.height = 0.08630435324870878;
    msg.services.assign("PQPWJBYDTTUMTOALOIWBIXCPLZGZCESHJCDURHNUXMUWMZAPYOKETVYNYPGMEVXYNREYYSZSCAALZEEQVPIHBWNFULDEUIKUJL");

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
    msg.setTimeStamp(0.3605564420513636);
    msg.setSource(22058U);
    msg.setSourceEntity(202U);
    msg.setDestination(24459U);
    msg.setDestinationEntity(108U);
    msg.sys_name.assign("NGQNPQAXDULRMLSHTOYXRSVOUSKNGWGRKFWMRTMODKPRPABWBCBPPX");
    msg.sys_type = 63U;
    msg.owner = 23038U;
    msg.lat = 0.5158155007851407;
    msg.lon = 0.8910072995772635;
    msg.height = 0.5875899648299311;
    msg.services.assign("HPMZBCINQMBGLJULOTRZSLUZIYLYVLUNPWESBOZVXWBWCEAWMFAMOLLJDFBWSRKSYIECVWFNRWAFSGMZSAPKHXYYMGGCQQLHXVHYNDNUAIOFNTVNFHOJAPKFCMJOTXXDUDWBQOSUEQXUJYWQZTYJGIHSGXTMVJODVZEPKUCJEGTRSXUPBDPFTGIERKXEPDC");

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
    msg.setTimeStamp(0.08608239549889973);
    msg.setSource(20594U);
    msg.setSourceEntity(120U);
    msg.setDestination(26273U);
    msg.setDestinationEntity(160U);
    msg.service.assign("AJBNIHNECTSVEHKCGQLFIMQXZOHYOBWHBJEFSKEYOUSVFLDZ");
    msg.service_type = 84U;

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
    msg.setTimeStamp(0.14244912594313808);
    msg.setSource(6799U);
    msg.setSourceEntity(161U);
    msg.setDestination(38261U);
    msg.setDestinationEntity(154U);
    msg.service.assign("DLEUPYQEAMQAXIHTJPUSDEINIXNDTQGWFZTFXGAUFGOHVCKSUKBQQPVROSSMBQHGAPNRYMYOKMYDIEBHJRJGPFZLTGDDSNDOVNWEWUVJEVUBKCNUYLLJNIJUVOFFVUHOPTLRCXCYBICYOBTXEQQKJFALVGCAJIYIEKLSUMKSZCFYGLCZBWHFGPDFXZRHRQXPSYDMHDPEVZLXCM");
    msg.service_type = 228U;

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
    msg.setTimeStamp(0.10128604363731342);
    msg.setSource(17654U);
    msg.setSourceEntity(231U);
    msg.setDestination(21008U);
    msg.setDestinationEntity(20U);
    msg.service.assign("ILMOHAZOLSMPZQAAGMZJWRQUEELPMUTYHVZYMZIXXIAAGEOOICRXYBKKBDAJMFXADFVBPLTZKTOSHXBTWRNDVCUVVBEWBRCSCVNQMFQFUDYEJQIOVQSAXWKXHJHKCJSGJUTGNMDRIRBVFWHDATYFZLRUFYQWNCGQIK");
    msg.service_type = 222U;

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
    msg.setTimeStamp(0.3261345230737549);
    msg.setSource(17885U);
    msg.setSourceEntity(251U);
    msg.setDestination(36485U);
    msg.setDestinationEntity(169U);
    msg.value = 0.2153369066396107;

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
    msg.setTimeStamp(0.36355337046680913);
    msg.setSource(27527U);
    msg.setSourceEntity(33U);
    msg.setDestination(35329U);
    msg.setDestinationEntity(207U);
    msg.value = 0.3811653297481197;

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
    msg.setTimeStamp(0.972902658605592);
    msg.setSource(14645U);
    msg.setSourceEntity(29U);
    msg.setDestination(58668U);
    msg.setDestinationEntity(99U);
    msg.value = 0.27626622090166775;

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
    msg.setTimeStamp(0.5824788369895999);
    msg.setSource(59281U);
    msg.setSourceEntity(81U);
    msg.setDestination(48115U);
    msg.setDestinationEntity(92U);
    msg.value = 0.4501076528913277;

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
    msg.setTimeStamp(0.7344915863540291);
    msg.setSource(17U);
    msg.setSourceEntity(104U);
    msg.setDestination(54360U);
    msg.setDestinationEntity(182U);
    msg.value = 0.2644407050786174;

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
    msg.setTimeStamp(0.03425915966822157);
    msg.setSource(12561U);
    msg.setSourceEntity(237U);
    msg.setDestination(21601U);
    msg.setDestinationEntity(188U);
    msg.value = 0.8014114620536402;

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
    msg.setTimeStamp(0.5961887123013303);
    msg.setSource(52753U);
    msg.setSourceEntity(41U);
    msg.setDestination(16464U);
    msg.setDestinationEntity(116U);
    msg.value = 0.09764987337519193;

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
    msg.setTimeStamp(0.7354147146043936);
    msg.setSource(28915U);
    msg.setSourceEntity(168U);
    msg.setDestination(56645U);
    msg.setDestinationEntity(228U);
    msg.value = 0.21683534095502366;

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
    msg.setTimeStamp(0.17751263381196325);
    msg.setSource(14486U);
    msg.setSourceEntity(198U);
    msg.setDestination(13744U);
    msg.setDestinationEntity(51U);
    msg.value = 0.6308973436325535;

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
    msg.setTimeStamp(0.15202577700833375);
    msg.setSource(29603U);
    msg.setSourceEntity(231U);
    msg.setDestination(25249U);
    msg.setDestinationEntity(126U);
    msg.number.assign("YLGKUCOKTZYGGXBJBSHUWSXANZQSXZOXQPCPLJOJCVVESYFENRSHIUQAVBRDNBWPIXPAFTBDBMLDYAJTWOTDIDSDUBLFQRLRQVJDEACZKOVUSOWRGBHDLZLSJCBONEUUJFDMYEKSRWXMCLQHAGHLFBHMWRWUZMPITNNWRJIFTMAFZMCEMXQPAC");
    msg.timeout = 27425U;
    msg.contents.assign("BCIHZSNIENSYGLHJQCJCTTWUVSZULOTOLYDJYNAOTYLZUMPAKRMIWEHSXBBLZEIXLQBEVQJPZRTAPKKNKQYULMUHXNOVRVYKBQJWYKVTQWPDMNZOKFHVWPIWTSVHXZXAGETFWKAFOFR");

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
    msg.setTimeStamp(0.05030375313220925);
    msg.setSource(22118U);
    msg.setSourceEntity(179U);
    msg.setDestination(38893U);
    msg.setDestinationEntity(109U);
    msg.number.assign("JUTPBBXXPQPVHLRWWZGGVQXKJSRYTBWDDBDNZMYCCMGWKQFMCUJSABXMQATGEYUACLWICXNOFVURLSKDPESNWPPRECJYZQMIOFCVMNYZADUIWKZIJFJPWFSMNGFLEBMVKZGOLRKLSRTXSVVNKPYIECHRSKIHVXUWPOUIYSQTDZLRAARGZNASNHLJXUEJNVHLDAZWTTOLAEGEXBDYIHTZIGFEQFOUGHQXITEPBOHOQK");
    msg.timeout = 26940U;
    msg.contents.assign("IHPHXRBUBITEZPELBYLIQHWFZYQMBMQL");

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
    msg.setTimeStamp(0.9309264808010623);
    msg.setSource(61357U);
    msg.setSourceEntity(142U);
    msg.setDestination(36278U);
    msg.setDestinationEntity(163U);
    msg.number.assign("BJMYFOFEJMEMKVFIAQAPZCRPXVYDTUZO");
    msg.timeout = 43918U;
    msg.contents.assign("VCLKAAZWVGDWHWMTGRSYZEEHAAAXSWBYEZOQPUFXEQPGRPYSYKVKTDEJJBJOFMJWLQBKRPHTRLMPKMYPRXCBHMSZGXDZQFHDAVDMXTUIUCIYI");

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
    msg.setTimeStamp(0.6969150071659405);
    msg.setSource(24183U);
    msg.setSourceEntity(204U);
    msg.setDestination(36159U);
    msg.setDestinationEntity(158U);
    msg.seq = 3229823964U;
    msg.destination.assign("CPLEPZFNNAEUKBQNKCYVEOIFLFZOKVXSSLTFFWGDQYDNKQGOZTJVWRMZQVBLVEWXWXVUVEUHAAWELXJIIMRCUKKKEBHTTOWRUOGGQRA");
    msg.timeout = 65334U;
    const char tmp_msg_0[] = {70, 4, -65, -9, 17, -5, 121, -120, 123, -33, -73, 2, 112, 116, 18, -118, -120, 67, 119, -103, 73, -51, 35, 106, 39, -70, -87, 113, -8, 118, -55, -2, 28, -60, 98, 70, -36, -121, -106, -9, 57, -57, -36, 73, -105, 53, 114, 89, -93, -95, -74, 45, -23, 55, -17, 51, -22, 34, -55, -44, -27, 86, -14, 116, 126, 115, 83, -41, -28, -110, 102, 95, 46, 109, 7, -82, 48, -77, -99, -124, 69, 110, -79, -118, -49, 95, -117, -39, 70, -29, 25, -78, -55, 46, 75, 86, 120, -85, 65, 25, -37, -27, 37, -1, 59, 90, 0, -5, 125, 69, -15, 29, 105, 69, 2, -8, -122, -101, 4, -46, 100, -90, -105, -120, 77, 28, 70, 53, -4, 0, -23, -69, -11, 23, 86};
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
    msg.setTimeStamp(0.7343642056715305);
    msg.setSource(22023U);
    msg.setSourceEntity(149U);
    msg.setDestination(3312U);
    msg.setDestinationEntity(176U);
    msg.seq = 352493250U;
    msg.destination.assign("IUXVZQRXJQWMHKOEMKGZYDBOGXCYGPUZUDJBBAMEDSAKZUPFOAZLRPNEQCVSLBLTBZPRQYXLENWYFUSRYTBJOXRWYEDMSVAKHBTXHLACSWSHHPIYOTNHMSMNLOVRSXNFMYHDGJUAGSUOTJAWRJCWIWAPZMFNDQ");
    msg.timeout = 18359U;
    const char tmp_msg_0[] = {18, 101, 14, 3, -9, 97, 109, 16, -86, 77, 15, -28, -35, 92, 96, -20, -66, -48, -56, -23, 25, 104, 42, 44, 100, -105, 49, 118, -39, -21, 23, 80, 26, -33, -120, -28, -12, -74, 81, 124, -8, 97, -8, -41, 46, 45, 33, 9, 84, -81, 97, -36, 102, 76, 125, -112, 82, -65, -7, -38, -96, -111, -25, 124, 95, -66, 27, 114, -12, 60, 100, 70, -15, -1, -126, 58, 10, -92, 87, -128, -100, -12, 114, 109, -84, 66, -61, -40, -36, -114, 92, 4, -59, 65, 39, 27, -93, 110, 42, -37, 22, 67, -96, -97, 49, -27, 86, 83, 124, 40, 42, 94, -102, -6, 14, 101, 97, 17, -22, 121, 8, -85, 121, -82, 103, 82, -57, -65, 25, 92, 5, 63, 112, -30, -122, 20, -29, 89, -110, 74, 67, -36, -49, -72, 121, -105, -111, 113, 107, -75, -41, 106, 108, -59, 74, 77, 24, -85, 17, -128, -122, -89, -112, 12, -87, -77, 2, -75, -114, -71, -67, 3, -71, 78, -23, 125, 13, -47, 119, 41, -85, 111, 15, -25, 67, 122, -84, -98, 67, -82, -9, -39, 41, 95, -9, -11, 0, -99};
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
    msg.setTimeStamp(0.02451290632481995);
    msg.setSource(18097U);
    msg.setSourceEntity(18U);
    msg.setDestination(813U);
    msg.setDestinationEntity(250U);
    msg.seq = 3824372170U;
    msg.destination.assign("LGHDEFZAMVGFKFPGIWPZCWGJWRXTCQSOIFRYOSUCCHTWXSXCJVYIOVUWVRQOAKPVSAWIXHBJPHZNBJINCUVFZAQNTQLWGIKSJYQUZKLYBMMQPLRVTXZSSQPIBJODEFZXHRNHDAHQCBLMYPVATGDLXJJJZEQCWVDDFLEIVHTTNBSKYADEKSKOXNMENURQDOOGFPU");
    msg.timeout = 21796U;
    const char tmp_msg_0[] = {28, 39, -90, -2, -10, -94, 82, 123, -121, 113, 30, -34, 126, -126, 5, -64, -21, -87, -45, -21, 112, -31, 31, -95, -7, -92, 27, 37, 31, -49, 75, -115, -4, -75, -42, -94, -77, 113, 14, -11, -98, 88, 115, -120, -87, -35, 90, 125, 109, -73, -119, -110, 54, -30, -30, 15, 86, -98, -124, -59, -113, -35, -111, -73, -16, 95, 114, -106, 47, -23, -81, 89, 21, 52, -115, 97, 107, 108, 90, 58, 30, -28, 91, -89, -23, 75, 7, 67, 5, 27, -113, 0, 102, -107, 67, 91, 28, 72, 118, 101, -128, 33, 73, 75, 61, -80, -61, 15, -70, 91, -106, -111, 19, 15, 66, -24, -15, 4, -30, -106, 101, -64, 59, 23, 48, -3, -119, 31, -17, -88, -16, 103, -93, 119, 69, 35, -60, -111, 35, -44, -19, 44, 119, 73, -72, 18, -22, 40, 23, 46, 106, -112, 89, 51, -126, 104, -46, -58, -119, 109, -89, -82, -65, 22, -53, 102, -85, -45, -89, 70, -114, -69, -99, -51, -80, 44, 36, -78, 62, 55, -4, -37, 87, -73, -21, 63, -122, 92, -37, 99, -2, -68, -59, -76, -18, -11, -25, 123, 101, 68, 87, -100, -84, -38, 61, 79, 45, 78, 75, 38, 77, -77, 6, -69, -100, -7, 37, 45, 57, 21, 65, 109, 101, -124, 37, 26, -102, -28, 80, 117, -15, 92, -3, 4, 49, 95, -33, 36, -60, 61, -120, 122, -119, 11, 114, -31, 93};
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
    msg.setTimeStamp(0.8142667045400293);
    msg.setSource(30392U);
    msg.setSourceEntity(166U);
    msg.setDestination(58428U);
    msg.setDestinationEntity(76U);
    msg.source.assign("TVLCCVXQORYSRBIPNNDAAULVNDRZITR");
    const char tmp_msg_0[] = {57, -90, 58, 82, 71, 46, 13, 49, -2, 78, -90, -121, -16, 25, 17, 27, 118, -14, -10, -73, 122, -111, -29, 44, 56, -72, 109, -116, 71, 102, 11, -24, -123, 78, 101, -40, -47, -58, 85, -6, 118, 119, -112, 103, -54, -93, 64, 61, 126, -57, -121, -51, -83, -82, 106, -117, 30, 117, 81, 69, -67, 47, 124, -50, 24, 62, 12, 3, -70, -125, 15, -70, 33, 62, -13, -102, 107, 64, -100, 31, 21, -121, 118, -111, -24, 3, 72, 92, -67, 92, -102, 21, -81, 82, 23, -89, 88, 78, -35, 90, -97, 36, 46, -80, -30, -26, -112, 46, -18, -16, 110, 115, 26, 118, -78, 13, -35, 75, 31, -55, -27, 89, -72, 110, -12, 111, -39, 24, 4, -59, -17, 82, -94, 31, -69, -72, -38, 76, 56, -23, -25, -91, 29, 24, -1, -116, 68, -118, -30, 97, 38, -82, -33, -83, 119, -45, -103, -62, -12, -66, -37, 95, -101, 25, 77, 100, -58, 103, -50, 120, -100, -68, 84, -66, 111, 71, 65, -51, 126, 95, -36, 77, 48, -77, -43, -14, 38, 118, -102, -62, -78, 7, -125, -49, 45, -79, 59, -12, -29, -52, 63, -93, 49, -107, 26, -49, -66, 125, -100, 82, 98, 66, 54, -23, -98, -46, 16, 28, 27, 70, -45, -80, 4, 101, -88, -64, 23, 76, -44, -36, 4};
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
    msg.setTimeStamp(0.49651580288792374);
    msg.setSource(61446U);
    msg.setSourceEntity(33U);
    msg.setDestination(10554U);
    msg.setDestinationEntity(117U);
    msg.source.assign("PQYTABLFLZDQOWPVFRAGMMQINFAKSCNNRKCWZASMVVSTKWPEQIXWPZSGLZNSQQKJANYOYFIUKXOTEVXFIZMMYWCGLAUHRCTTDDKDHMMVIPJOEKKYCUVROMVEGXORJONZBSCRPRSPWDPSAOWBSHVDEQELOWLXZERUTYIGMQCXGIEYMHOKRVGLDCHBEJGZJBFAIU");
    const char tmp_msg_0[] = {79, 66, -5, 22, -48, 117, -100, -33, 100, -24, -57, 17, 24, -109, -26, 101, -30, -48, -109, 46, -21, -47, 44, 31, 26, 73, -105, 31, 77, 22, -126, 70, 73, 116, -124, 3, -7, 97, -22, -123, 11, -6, -65, -66, 86, 98, -42, 13, 65, 90, 5, -10, -89, 70, -22, 124, 6, 31, 46, -128, -6, 62, -65, -66, 63, -86, -36, 73, -71, -102, 92, 119, -125, 60, -108, -57, -17, -93, -109, -53, 123, 92, 126, -48, -81, 81, -40, 103, 60, 29, 104, -122, 47, 76, 61, 113, -32, -43, 96, -54, -17, 77, 76, -115, 10, -97, 82, 64, -42, -91, -10, 59, 20, -10, -41, -38, 51, -101, -44, -41, -121, 105, 61, -91, -73, -118, -110, 23, 82, -60, 16, -83, -34, -48, 72, -34, -69, -83, -20, -21, -67, -30, -58, -39, -44, 103, 73, -79, -14, 78, 69, 14, 114, 58, 9, 26, -5, 20, -24, 65, 6, 98, 9, -14, -112, 25, 89, -32, -113, -88, -99, 71, -110, 18, -67, -23, 46, -64, 48, -30, 117, 68, 64, 86, 32, -47, -113, 117, -106, -22, -10, -47, -12, -120, -35, 117, 35, -38, 122, 68, 55, -22, -51, -41, -106, 3, -89, 22, -24, 97, 51, -88, 21, 98, -47, -24, 54, 76, -49};
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
    msg.setTimeStamp(0.7164137185335318);
    msg.setSource(41274U);
    msg.setSourceEntity(28U);
    msg.setDestination(65482U);
    msg.setDestinationEntity(40U);
    msg.source.assign("MMGBPJEEWSDQFQEUFHPGRTIHGKDFOXKGOOGBZQBJJTFKUEMSAMXJGSRVIIAEVADCJAYJCBDKSUOQTMPKZPEHHLVKCSQLXLJKYKZBNSRTHBZKNYNMCQHVRYLAFIBBNTYBVVTJGCVWIAQOHGOZNTALQCUWXQLORYIIZPNDLSNXWNDBFCFUUYOUCWPHVZZUCDYJNNOPIFMUQ");
    const char tmp_msg_0[] = {124, 85, -117, 52, -68, -13, -103, 63, -110, -122, -117, 64, 68, 13, 74, -97, 23, -8, 72, -100, 38, -7, -24, -38, -5, -61, -114, 29, -120, 92, -50, -83, -93, 24, -2, -84, 70, 71, 30, 122, 54, 87, 105, -8, 70, -126, -84, 81, 18, 98, -43, 109, -108, 75, 54, 54, 48, -94, 70, -78, 93, 81, -25, 60, 120, -54, 110, -45, 37, -54, -34, 100, 59, -86, -44, 114, -108, 99, 117, -40, -44, -30, -44, 65, -124, 15, -120, 101, -47, 77, -113, -40, -2, 60, 11, -20, 121, -46, 4, 23, -64, 23, 68, -112, -52, -99, 122, -54, 32, -113, 51, -54, -34, -23, -123, 24, -92, -25, 94, 13, 66, -57, 78, 109, 20, 108, -123, -63, 124, -6, -46, -35, -64, 59, -99, 43, 34, -69, 85, 120, 86, 7, 58, -38, 32, -49, 43, -62, -23, 125, 89, 94, -43, -30, -14, -108, -111, -93, 28, 42, 57, 72, 41, 91, 106, 116, -45, -6, -103, -23, 47, 123, -111, -118, 2, -51, 13, -46, -127, -48, -25, 76, -27};
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
    msg.setTimeStamp(0.943897026165999);
    msg.setSource(15381U);
    msg.setSourceEntity(145U);
    msg.setDestination(18686U);
    msg.setDestinationEntity(91U);
    msg.seq = 2819289735U;
    msg.state = 221U;
    msg.error.assign("WUNZTRFROWNPJTNJCPXATCIZUAJXEUOXTQZBHEAMHQRKOJCKVQUVOFADBAXTBGGQXJPKPXYOMSSZZDBEIUNBKQKWSDOZFPLIUBROGGRJVVIOIVGSIBGWDQPPMBCHLFYYSVFVYIEZDYFJEHLYKHJNUDGTMUFDBRNICELHTGSREPRMNBODGZWFESVXKYXMKHXLCFAAOVHVGQCTMNCDKWYCYE");

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
    msg.setTimeStamp(0.47899573022528674);
    msg.setSource(34474U);
    msg.setSourceEntity(134U);
    msg.setDestination(15694U);
    msg.setDestinationEntity(64U);
    msg.seq = 983623551U;
    msg.state = 41U;
    msg.error.assign("XYTISNLRSRVCFBTYIHJLHFEKZGDGKUIIPMWHCMENKNKHZEBXDZYXHKOCUDADAOEPTPMAYOJGEYLFJTXOXKSJDYJBENAIVBRCAOJBSDFWKCMTLGPHFMUUNRUFVXWZKCGREXLFFWQVLW");

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
    msg.setTimeStamp(0.19679397953034405);
    msg.setSource(49530U);
    msg.setSourceEntity(141U);
    msg.setDestination(7044U);
    msg.setDestinationEntity(127U);
    msg.seq = 2117660298U;
    msg.state = 111U;
    msg.error.assign("HQTRCGLNDEZPAAWWIRKQCYEUZNJBTSOSBPVROGFIFUCMWGVMQJMKCF");

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
    msg.setTimeStamp(0.8973280498108294);
    msg.setSource(48319U);
    msg.setSourceEntity(87U);
    msg.setDestination(53885U);
    msg.setDestinationEntity(100U);
    msg.origin.assign("GQHJWHVRDIBDXZRSVCEOIGBFAUPUOXEBSMHJWCLXJWNXFCWMBVOPBHCYEMOGHFXKETRQLYYMKDNPSXPSKZELPEMMUABQGVNFWLQWNCQNOYBBDTFDHOYVULTUFGIUVVMADHTKBTPVYZOFTSETKIVNIKRPMNRJJCISXIUHHFXPZYFW");
    msg.text.assign("QKAHEEPOZELLQTDQCWHFCNLBDN");

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
    msg.setTimeStamp(0.42225953070194966);
    msg.setSource(13334U);
    msg.setSourceEntity(196U);
    msg.setDestination(6481U);
    msg.setDestinationEntity(239U);
    msg.origin.assign("BNZUHXXQEYPSETNZGVFSLYVDTTJUALRZSWABJROBVVMALTBIQTSPNHEUPMWCJGIRLBJWZPCAHBIXEBYIVHZSLGPBMKEMDTDTZSWGKVCQTGRMPLEELCSSNLRTUJZDPCGOQNFEWWODUVINFHHASH");
    msg.text.assign("VLXQJMAPAAJCUAMZATH");

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
    msg.setTimeStamp(0.7303812880836311);
    msg.setSource(56320U);
    msg.setSourceEntity(182U);
    msg.setDestination(25391U);
    msg.setDestinationEntity(171U);
    msg.origin.assign("FHHWLZRDFUZFEIYWATEZGRWQRWCCCIBDTPHODMQLPQNIOLBOIHMTLJKVAGEDHXGKVIYOOMZAKRWCIQFSYXLTVOHBNXJAIQFPNXXTK");
    msg.text.assign("GWXIWEOPJZANYSAXTALKYIWUXCAAPCDSAKIDCGWZHJCRCCODQWZJINVEGYNJJABTKYMTLYFHJSMMQQXHFQJBGIKEUZDRASZVOLLKRFCXPMPLXEKKFSLIGFNTPAVRQHXRPLQUNNZISEYDZVYQQGUEXJFNSKGRKWFMIGBBLLDHPPBHDCMD");

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
    msg.setTimeStamp(0.13202942033710197);
    msg.setSource(61502U);
    msg.setSourceEntity(198U);
    msg.setDestination(65483U);
    msg.setDestinationEntity(184U);
    msg.origin.assign("HVIRCDFRPAVDKGBNTTXAUMZPLVAKORSOENQKAMXT");
    msg.htime = 0.9974854632183112;
    msg.lat = 0.7299636384267355;
    msg.lon = 0.20555696110450927;
    const char tmp_msg_0[] = {96, -9, 20, 0, 22, 103, -102, 55, 69, -49, 105, -95, 38, -117, -37, -76, -56, -124, 36, -62, -72, -4, -64, 107, -96, 7, -58, 54, -36, -86, 68, 44, 65, 51, -54, 75, -63, 98, 19, -104, -20, -81, -66, 23, 11, 122, 56, 75, -107, 16, 108, 41, -65, -53, -112, -120, -46, 32, -119, 109, 73, -38, 51, 68, -5, -22, -23, -58, -4, -116, -68, -81, 104, -110, 34, 58, 114, 57, -111, -103, -37, -114, -88, 86, 74, 3, -98, 80, 40, -63, -74, 8, 50, -24, -48, 5, -70, -103, 75, -126, 50, 43, 113, 81, 40, 20, -1, 14, -12, -7, 75, 30, -114, 63, 67, -113, 66, -61, 83, -30, 63, 75, 35, -120, 42, 75, 9};
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
    msg.setTimeStamp(0.46780933905193933);
    msg.setSource(16639U);
    msg.setSourceEntity(117U);
    msg.setDestination(63006U);
    msg.setDestinationEntity(27U);
    msg.origin.assign("EYCUVCAMLAEJJPGNVNSUGAGAUQIHBJNCPKMGPTFXGVWZUPUDWQRROQBYFFJALEPJFHFOQRIOBLLGDMDTUIKBHYMEWO");
    msg.htime = 0.09469455268065208;
    msg.lat = 0.4723332930041241;
    msg.lon = 0.7230247003902833;
    const char tmp_msg_0[] = {19, 77, 62, 95, -53, -90, -29, 15, 32, -103, 86, 118, -29, 124, -31, 124, -66, -127, 87, -111, -101, -11, 102, -46, 44, 74, 82, 94, -104, -46, 79, -30, -128, 61, -13, 79, 4, -86, 75, 33, 61, 87, 13, -80, -89, 112, 110, 105, -66, 33, 14, 84, -92, -92, -127, -54, -26, -49, 79, -117, -74, -57, 96, 39, -114, -12, 77, 34, 119, 21, -64, -86, -38, 10, 45, -10, 87, -122, -43, -95, 118, 55, -99, 51, -36, 13, -108, 22, 115, -123, 70, -24, -58, 85, 23, -94, -69, -113, 4, -82, 97, 50, -80, -29, 22, -57, -105, -128, -2, -31, -38, -100, 74, 36, -5, 97, -36, 9, -48, 68, 109, -52, -61, 6, -6, 122, 92, 24, 107, 11, -81, 45, 35, 55, 85, -101, 91, 106, 73, -56, -65, 103, -12, -11, -94, -69, 11, -128, 108, -84, -43, 54, -36, -102, 28, 117, 31, 14, -36, -54, -8, -43, 93, 13, 90, -83, 77, 61, -98, 67, -125, 60, 114, -65, 86, -46, -20, -2, 26, -2, -26, 112, -126, -62, 5, -6, 55, -127, 73, 28, 0, -10, -83, 44, 99, 84, -42, -16, 95, 31, -20, 45, 87, 124, -3, -71, -28, -11, -28, -59, -83, 10, 105, -38, 123, -91, 86, -15};
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
    msg.setTimeStamp(0.7829508018866556);
    msg.setSource(3304U);
    msg.setSourceEntity(243U);
    msg.setDestination(60024U);
    msg.setDestinationEntity(50U);
    msg.origin.assign("MOFQWDEJLSMOTRAEWSDVFRRRMBGQNSXFJBDPBVLPFIEUBZCQQHIGYVIZCCETNBQUPMXMJAKCVSSMPOHJYTSVGLZHTFIHZCTLUOZJCJXDVCMSGEWXHJQKUVXHRNNAGHLXVDWSWNKOUUOUJTKTPKDXUKWNAIFDLLFCQCOLXZBAQOYANGRVORYSMESHPJKFYZWGHRDEQ");
    msg.htime = 0.9613660610762468;
    msg.lat = 0.09834974611775149;
    msg.lon = 0.5994386243219315;
    const char tmp_msg_0[] = {73, -124, 68, -61, -82, 83, -44, -37, 57, -114, -72, 100, 68, 22, 87, -18, 5, -30, -124, -8, 28, 3, 2, 107, -59, 82, -11, -73, -51, -37, 97, -104, -81, 112, 87, -102, 125, -27, -49, -39, 81, -36, 28, -109, 41, -2, 80, 28, 110, -114, 39, 26, -16, 34, 61, 85, 82, -89, -34, 75, 46, 15, 67, -68, -90, 42, 75, 88, 83, -31, 21, 66, 27, 5, -84, -105, 68, -37, 65, 61, -16, 48, 116, 103, 33, -37, 16, 49, -95, -37, -18, 99, -81, 58, -54, -50, 90, -116, -89, -115, 88, 3, -55, 121, 96, -119, 111, -107, 11, 58, -38, 93, 36, -117, 32, -52, -3, -55, 11, 63, 103, 45, -75, -83, -59, -120, 31, -15, -71, 47, -26, 76, -122, -74, -42, 4, 4, 120, -68, 113, -14, -73, -25, -72, 89, 28, -125, 57, 60, -54, 26, -40, 78, -97, -33, 124, 16, -62, -63, -55, 21, -119, -13, -33, -7, 94, 18, -87, 15, -55, -84, -2, -29, 58, 71, 80, 83, 46, 7, -20, -25, 10, 51, 38, -43, -92, 64, -9, 122, -61, -23, -125, 30, 101, 104, -112, 19};
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
    msg.setTimeStamp(0.46688020993505586);
    msg.setSource(18722U);
    msg.setSourceEntity(179U);
    msg.setDestination(54316U);
    msg.setDestinationEntity(89U);
    msg.req_id = 28562U;
    msg.ttl = 22555U;
    msg.destination.assign("EKDABBKKGCNHOUUPRSOXWSPROXFGUOZUSRKMBOLGCNZSTXPGIRDTATHTCQKVIKNPYHJNJGPBNLCFXCCDRFHMWYOJGQVFKWCLTJPSQVBBPSWAKF");
    const char tmp_msg_0[] = {94, 94, -11, 10, -87, 29, 37, 125, 51, 119, 126, 100, -84, 101, -75, 107, 87, 83, 28, -4, 90, 114, 10, -71, -64, 119, 90, -48, 49, -70, -126, -78, 29, 50, 21, 112, 3, 5, 83, 25, 48, -69, 7, 5, -61, 98, -51, 42, 5, 40, -74, -110, 114, -88, 44, -43, -36, 123, 47, 95, 9, -108, 101, -47, -90, 19, -65, -67, 82, -87, -28, -110, -86, 93, 101, 94, 106, -21, 68, 80, 1, -56, 64, -124, -7, -123};
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
    msg.setTimeStamp(0.5357496170373949);
    msg.setSource(26715U);
    msg.setSourceEntity(128U);
    msg.setDestination(54328U);
    msg.setDestinationEntity(244U);
    msg.req_id = 54205U;
    msg.ttl = 101U;
    msg.destination.assign("PJFWENIWNXJQGHGRZISCRKUGQSOERBRQNACXRSFCYMSIQDRLYJVAOIOFUTTNVWZJCUETVUBBYVKPAWQSEDMQTNZQZGXYTENFVXGSWPYVVDBHCAUMLLSLZIPRFAFIOJDXCGZQWPAOUUGBDMCHBSYXRIWLDBKFDYHASYVMNFGJWSCJEIGQJBNMOVTDXLEDAKTHNLKWFUZRAMLENPCPOKFTEY");
    const char tmp_msg_0[] = {84, 38, -28, -21, 69, -5, -41, -25, -119, 122, -32, -16, 88};
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
    msg.setTimeStamp(0.5590901399400909);
    msg.setSource(38354U);
    msg.setSourceEntity(196U);
    msg.setDestination(64558U);
    msg.setDestinationEntity(2U);
    msg.req_id = 31132U;
    msg.ttl = 52038U;
    msg.destination.assign("QZZWKJDWFJECOCTYEYIFTVUHXCUOJIJWDHRUYURFYVAWAVRYZVJIJM");
    const char tmp_msg_0[] = {-4, 15, 36, 28, 99, -7, 27, 32, 28, 75, -76, -39, -34, -66, -29, 17, 61, -15, -28, -87, 110, -63, 61, 103, 87, 107, -18, -37, 90, -59, -30, 65, -82, -48, -5, 108, 60, -54, 31, 105, 34, 4, 39, -10, 21, -37, -65, 71, -28, -78, -12, 13, -86, -49, 126, -109, 7, 19, 24, 54, -78, 94, 86, 59, -69, -1, 124, -83, 36, 76, -1, -66, -49, -92, 99, 83, 45, 91, -92, -115, -25, 111, 46, -42, -105, 5, -46, 17, 102, -97, 23, 23, 75, -35, -27, -1, -12, -54, -74, 17, -69, 46, 40, -50, -59, -78, -18, 90, -38, 118, -69, 93, 6, 11, 36, -46, -108, 6, -54, 48, 55, 76, 56};
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
    msg.setTimeStamp(0.19530775734895633);
    msg.setSource(33918U);
    msg.setSourceEntity(233U);
    msg.setDestination(44975U);
    msg.setDestinationEntity(77U);
    msg.req_id = 38263U;
    msg.status = 103U;
    msg.text.assign("AUVQYDZNYOFEUWYPEVJHHTBXXNOULXYCNTZHISSJGNQPGZEHZDVUIQUVGECIO");

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
    msg.setTimeStamp(0.4565538856037864);
    msg.setSource(53013U);
    msg.setSourceEntity(151U);
    msg.setDestination(16903U);
    msg.setDestinationEntity(88U);
    msg.req_id = 3131U;
    msg.status = 213U;
    msg.text.assign("VFZLHZKJIMNCAYRDSKWXQOTOFGZOTORLNIAVVBBFUUXJDUYH");

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
    msg.setTimeStamp(0.6532783776258095);
    msg.setSource(10660U);
    msg.setSourceEntity(244U);
    msg.setDestination(2815U);
    msg.setDestinationEntity(78U);
    msg.req_id = 20371U;
    msg.status = 172U;
    msg.text.assign("PCYRPGKLAFTQJMIOPFAPXPHRYWYNWMPGHJDSZPAUQGBOGZYRFNSEQBSNRUBXJQSHHQQMLTBILEUDGTHMVVIYJOBMQAWZFY");

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
    msg.setTimeStamp(0.36130121053460784);
    msg.setSource(17167U);
    msg.setSourceEntity(76U);
    msg.setDestination(64938U);
    msg.setDestinationEntity(22U);
    msg.group_name.assign("NQKOGKBWLOPSGSVUUQJHRDFMJVDYTSFDHLLCQYFRHNZVBNMEFQXTDWGLKDROTRPBTOHEDCIILAALKZKCJBNRWJRFQVJYTSNXKVMAFJWYEVHAPPUUOZQGQBMZCNPMVDJYFFMYDBAWBHOFACEEIECUWRQXSGGAUXIJGRCLBHCAYXZJTPZLXZMSLXXKLQ");
    msg.links = 1250139246U;

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
    msg.setTimeStamp(0.807309910037298);
    msg.setSource(28278U);
    msg.setSourceEntity(133U);
    msg.setDestination(46411U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("CJRBRYUZUAVTSKUGDICFUAYCS");
    msg.links = 570082685U;

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
    msg.setTimeStamp(0.28056912836079095);
    msg.setSource(11639U);
    msg.setSourceEntity(49U);
    msg.setDestination(64472U);
    msg.setDestinationEntity(190U);
    msg.group_name.assign("FTMDHROPJARCCHUJEDASMKBXDLOXFGLODVXRVAEEITPPJTJVEQSWBGZGGIBVFHGLHUIAGVWGGSYAPCXUJDOSBNNYDJMLOWTJLZSHMIHCYIMSNGLRVMPSSZDUPKZUIMSTOBYQMKFFCCWDXYYBXPWECVAJKFZQHWQNHWCLPLUBWZRULQYVKOXQICARHJQXINDYLC");
    msg.links = 1781953131U;

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
    msg.setTimeStamp(0.7171475414098992);
    msg.setSource(58337U);
    msg.setSourceEntity(133U);
    msg.setDestination(1370U);
    msg.setDestinationEntity(217U);
    msg.groupname.assign("QVBOBSZQKPAIUTJGHIMOTVQVOKVJWQWQAOHCMYKPQXEIUDFQXFZRCBGXFLYCVGRDPXMRULUZLUFWYLVHPJWGKREKXOUPEHTNLJJCFNGEAFNKUNEISSDCELXXXNDAJZRFCVXDUZGAJMHCPRLTVZLVEPUPAKEZYZNHAEIMZSTFISRPHOVCNDBEHAZRYBIR");
    msg.action = 218U;
    msg.grouplist.assign("YMFVJWPSHUJAHJQSCSVGFAMWFKKBUCFYWNNJCQGNOCDZXLXNHHIOLMINGHVEPYRRNQZJVQMEYAWCOGMQESBGASDDECYZFORJANNTCVIUHURNSVKVYAUTTGFWFKTSZDTZDLTBZZMTFPTGITXJVXKRWLDFRMIUEQNSPITOMKVOGOUWEXJXJQZGOXJDA");

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
    msg.setTimeStamp(0.2763667296866785);
    msg.setSource(17534U);
    msg.setSourceEntity(231U);
    msg.setDestination(33212U);
    msg.setDestinationEntity(246U);
    msg.groupname.assign("VZGMCGQBGSHFWBYCQBXZOJCJNICSMCZNFDIDFPRKLQSSGRZLHKTTGWMHTWKMEOIMHGMDFYLCPOEEKIVRNYTNVDSXAHQXAIKOGAVVCBYYKKMJCHHQGASUBURQFG");
    msg.action = 245U;
    msg.grouplist.assign("HCGFBPPZAWHSW");

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
    msg.setTimeStamp(0.7734293432609594);
    msg.setSource(12510U);
    msg.setSourceEntity(118U);
    msg.setDestination(26774U);
    msg.setDestinationEntity(160U);
    msg.groupname.assign("CXFUAHZURRGQMQVGZWFLRQHYWRSRSHTPVLJQKIDMTYKEXKNYWWJUPCIAGVHKBQDJECZYUCPOKXGMSMPFKHGIDZKZPOPXXVCVSYALHYIPOEFZMXUWMLCVDRJNULBFBENMAKSNSMZITHUXDBVCBFYQAFINUSNQDKLVCIJABDOJFOLWASOUAFYGANGLGOIOOZQXYNPOYFZMSJKWEWZTPRLHQPVRILTHRBJC");
    msg.action = 51U;
    msg.grouplist.assign("NMQQTHYVADGECEHMKFKISPROJVDXSHDRPZLLAFCFGYAEABGPGHRUJSHJYFMUALVLROIASBWPOFTMUSCLZTKTEJBQNMDIGSKPWQNOMEGSOUQCKHDJWQXCLNUYWWRJPHVGTZTKKJRHZAFOQUTVANFGURLYOIULXFYYHUK");

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
    msg.setTimeStamp(0.7084130818658966);
    msg.setSource(20781U);
    msg.setSourceEntity(148U);
    msg.setDestination(42096U);
    msg.setDestinationEntity(65U);
    msg.id = 170U;
    msg.range = 0.8632375588859772;

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
    msg.setTimeStamp(0.647232725918017);
    msg.setSource(46570U);
    msg.setSourceEntity(238U);
    msg.setDestination(22626U);
    msg.setDestinationEntity(245U);
    msg.id = 231U;
    msg.range = 0.7662158298490351;

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
    msg.setTimeStamp(0.8659945240138249);
    msg.setSource(53720U);
    msg.setSourceEntity(142U);
    msg.setDestination(63516U);
    msg.setDestinationEntity(80U);
    msg.id = 67U;
    msg.range = 0.21982373016113987;

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
    msg.setTimeStamp(0.607344847450419);
    msg.setSource(26632U);
    msg.setSourceEntity(250U);
    msg.setDestination(29681U);
    msg.setDestinationEntity(56U);
    msg.tx = 2U;
    msg.channel = 81U;
    msg.timer = 23861U;

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
    msg.setTimeStamp(0.5957630916271718);
    msg.setSource(40910U);
    msg.setSourceEntity(175U);
    msg.setDestination(22515U);
    msg.setDestinationEntity(166U);
    msg.tx = 242U;
    msg.channel = 46U;
    msg.timer = 56355U;

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
    msg.setTimeStamp(0.887745617775139);
    msg.setSource(30469U);
    msg.setSourceEntity(179U);
    msg.setDestination(53483U);
    msg.setDestinationEntity(223U);
    msg.tx = 195U;
    msg.channel = 230U;
    msg.timer = 30858U;

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
    msg.setTimeStamp(0.3872229013089391);
    msg.setSource(1491U);
    msg.setSourceEntity(200U);
    msg.setDestination(57642U);
    msg.setDestinationEntity(110U);
    msg.beacon.assign("TXIGLTTJXWVWKEVJDMPDAVJWUKIAGZULCPIMIQLROFPYCMTBYNAKHZXONDBMLTAAPEYHQJROEHEUNXPVHOPHHCWSSQOJBFBTPBTQACNXHHNYUQMQQZOKKYAKMRCVBCOWMCAFAJLYWWPDZXGZPPEDKZSSUUVQIZUHEENCGOYXCKFFLIBIOG");
    msg.lat = 0.5478064294999826;
    msg.lon = 0.06102619772497453;
    msg.depth = 0.391253307261079;
    msg.query_channel = 39U;
    msg.reply_channel = 49U;
    msg.transponder_delay = 161U;

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
    msg.setTimeStamp(0.5556343020451976);
    msg.setSource(56843U);
    msg.setSourceEntity(119U);
    msg.setDestination(13502U);
    msg.setDestinationEntity(185U);
    msg.beacon.assign("NRCKGAZBTRHOCNXCHALJHZTMMLNCMFNAFPDGKPUOXWJHZAEBAI");
    msg.lat = 0.33411110437680414;
    msg.lon = 0.8848691998953363;
    msg.depth = 0.8948870443797304;
    msg.query_channel = 29U;
    msg.reply_channel = 56U;
    msg.transponder_delay = 208U;

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
    msg.setTimeStamp(0.6747227818603919);
    msg.setSource(11735U);
    msg.setSourceEntity(72U);
    msg.setDestination(12078U);
    msg.setDestinationEntity(51U);
    msg.beacon.assign("KADXABGIZMFDURKMIHVUBLBSYOSRKRDOSXXREBPSXSECPWDDHDZEAFEGEOVMBUNJOIIQAJCWIOTWREWFHNZNERJQRVGKKLNORXEGWRQQXJZEDYLDBHCMNWJIFGIFLZIXVTBTNPXPMPUSQPZUULVACOZKYSMSKXCDLEBCPZHSMYJJHJORTATGJKHUUACQHZKGYKHMMVFUGYTAYABVLIGUVNQIWFYJMWDCHZXWFGNOQLVVPYPT");
    msg.lat = 0.15852228889514497;
    msg.lon = 0.2548379717830267;
    msg.depth = 0.8972235334223009;
    msg.query_channel = 149U;
    msg.reply_channel = 36U;
    msg.transponder_delay = 201U;

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
    msg.setTimeStamp(0.278299623006384);
    msg.setSource(24485U);
    msg.setSourceEntity(13U);
    msg.setDestination(40411U);
    msg.setDestinationEntity(173U);
    msg.op = 37U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QRKFZWEXSJBGSYXIFAUXEXAVWRHDTFZOQGLCLTRFWYUMKIVJQCDFVTTHFYAPWUHSRLCFZRBQEJSGLKABNPAWXOVPMCESJVVPYBZIIYPWYNUFKZYQAHJUNLUPOIMDVOMMTVJBONXMNHNCXNBEUECJTOIJGCYUUWOFKGRNISLCOCWKYSURVHIDKDEGDJGPLKTNOXQXHBQAMLQNRAHDHMOQ");
    tmp_msg_0.lat = 0.2768108986429272;
    tmp_msg_0.lon = 0.3157811993221773;
    tmp_msg_0.depth = 0.768673314794288;
    tmp_msg_0.query_channel = 236U;
    tmp_msg_0.reply_channel = 64U;
    tmp_msg_0.transponder_delay = 200U;
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
    msg.setTimeStamp(0.7343531497162745);
    msg.setSource(57686U);
    msg.setSourceEntity(212U);
    msg.setDestination(34641U);
    msg.setDestinationEntity(141U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.039721383424669354);
    msg.setSource(23067U);
    msg.setSourceEntity(231U);
    msg.setDestination(55328U);
    msg.setDestinationEntity(16U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.05652803111861959);
    msg.setSource(58165U);
    msg.setSourceEntity(218U);
    msg.setDestination(60175U);
    msg.setDestinationEntity(83U);
    msg.address = 189U;

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
    msg.setTimeStamp(0.6257145375564038);
    msg.setSource(23098U);
    msg.setSourceEntity(135U);
    msg.setDestination(61902U);
    msg.setDestinationEntity(253U);
    msg.address = 227U;

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
    msg.setTimeStamp(0.534847837594675);
    msg.setSource(35328U);
    msg.setSourceEntity(122U);
    msg.setDestination(65490U);
    msg.setDestinationEntity(21U);
    msg.address = 14U;

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
    msg.setTimeStamp(0.3780306796955687);
    msg.setSource(41530U);
    msg.setSourceEntity(211U);
    msg.setDestination(51517U);
    msg.setDestinationEntity(130U);
    msg.address = 58U;
    msg.status = 126U;
    msg.range = 0.35995700793153895;

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
    msg.setTimeStamp(0.5745318393289627);
    msg.setSource(30337U);
    msg.setSourceEntity(32U);
    msg.setDestination(7216U);
    msg.setDestinationEntity(152U);
    msg.address = 146U;
    msg.status = 211U;
    msg.range = 0.9352672579675648;

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
    msg.setTimeStamp(0.41062142991265627);
    msg.setSource(3830U);
    msg.setSourceEntity(152U);
    msg.setDestination(17877U);
    msg.setDestinationEntity(237U);
    msg.address = 58U;
    msg.status = 62U;
    msg.range = 0.20634087177239024;

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
    msg.setTimeStamp(0.9653090649566087);
    msg.setSource(21521U);
    msg.setSourceEntity(9U);
    msg.setDestination(53205U);
    msg.setDestinationEntity(78U);
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 240U;
    tmp_msg_0.request_id = 14993U;
    tmp_msg_0.command = 185U;
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 48649U;
    tmp_tmp_msg_0_0.lat = 0.500719187966625;
    tmp_tmp_msg_0_0.lon = 0.7366363387076262;
    tmp_tmp_msg_0_0.z = 0.6974221609102148;
    tmp_tmp_msg_0_0.z_units = 106U;
    tmp_tmp_msg_0_0.amplitude = 0.5025270486495151;
    tmp_tmp_msg_0_0.pitch = 0.5468173681257962;
    tmp_tmp_msg_0_0.speed = 0.5283090255389573;
    tmp_tmp_msg_0_0.speed_units = 36U;
    tmp_tmp_msg_0_0.custom.assign("YLWHGESZMPSFJBWYCHATSSJZIREVAIFTBYWPSQYPWCOMNVFEDXQPUKCSZYVDNNRFHOZSTGKNGZFPNQKLJAMRHGFRJLIQUKWLDGZTUQMEAUJHAVNIDFAISYTTIWEQHTSUOLDTCCBNKROMCPJQWVGILLKCOHXBBHVXBDIOYKTYNOEUPKMUXCLPDQFFNAZJXGKXUMVHBDGRZDEBGOZVPPRAX");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 35854U;
    tmp_msg_0.info.assign("WASNFGTMQQMXJIVICSRWFPIZCSVOCNJW");
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
    msg.setTimeStamp(0.8564698821024188);
    msg.setSource(1744U);
    msg.setSourceEntity(122U);
    msg.setDestination(19488U);
    msg.setDestinationEntity(223U);
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.2548011348587772;
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
    msg.setTimeStamp(0.0015926178335712304);
    msg.setSource(36632U);
    msg.setSourceEntity(55U);
    msg.setDestination(28372U);
    msg.setDestinationEntity(57U);
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 3275455768U;
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
    msg.setTimeStamp(0.024661350545250205);
    msg.setSource(39665U);
    msg.setSourceEntity(150U);
    msg.setDestination(57089U);
    msg.setDestinationEntity(114U);
    msg.enable = 232U;

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
    msg.setTimeStamp(0.00569288801584944);
    msg.setSource(6934U);
    msg.setSourceEntity(126U);
    msg.setDestination(12528U);
    msg.setDestinationEntity(59U);
    msg.enable = 144U;

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
    msg.setTimeStamp(0.9418655972516137);
    msg.setSource(34387U);
    msg.setSourceEntity(192U);
    msg.setDestination(47598U);
    msg.setDestinationEntity(100U);
    msg.enable = 132U;

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
    msg.setTimeStamp(0.14226547498289033);
    msg.setSource(2349U);
    msg.setSourceEntity(78U);
    msg.setDestination(3817U);
    msg.setDestinationEntity(62U);
    msg.summary = 207U;
    msg.level = 124U;

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
    msg.setTimeStamp(0.66210593245974);
    msg.setSource(2758U);
    msg.setSourceEntity(119U);
    msg.setDestination(15231U);
    msg.setDestinationEntity(27U);
    msg.summary = 77U;
    msg.level = 100U;

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
    msg.setTimeStamp(0.8330662553910336);
    msg.setSource(51634U);
    msg.setSourceEntity(87U);
    msg.setDestination(60918U);
    msg.setDestinationEntity(243U);
    msg.summary = 164U;
    msg.level = 175U;

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
    msg.setTimeStamp(0.9992615732605169);
    msg.setSource(41256U);
    msg.setSourceEntity(218U);
    msg.setDestination(57417U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.25441545649469277);
    msg.setSource(30561U);
    msg.setSourceEntity(4U);
    msg.setDestination(32232U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.6612222955520847);
    msg.setSource(54186U);
    msg.setSourceEntity(68U);
    msg.setDestination(46655U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.3491257681984071);
    msg.setSource(19402U);
    msg.setSourceEntity(179U);
    msg.setDestination(51247U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.18491259933176318);
    msg.setSource(3649U);
    msg.setSourceEntity(65U);
    msg.setDestination(31580U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.722565817107726);
    msg.setSource(63587U);
    msg.setSourceEntity(217U);
    msg.setDestination(48424U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.6539159335515634);
    msg.setSource(22675U);
    msg.setSourceEntity(125U);
    msg.setDestination(41072U);
    msg.setDestinationEntity(163U);
    msg.op = 56U;
    msg.system.assign("XBIEVHZFFHOGBUKEACACCOBIGLDZVPAYJUNABLJSTSWXOAEMQMKVRC");
    msg.range = 0.8221187171292055;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3883682324161686;
    tmp_msg_0.beam_height = 0.9184975989308205;
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
    msg.setTimeStamp(0.9128610577354157);
    msg.setSource(52218U);
    msg.setSourceEntity(157U);
    msg.setDestination(10299U);
    msg.setDestinationEntity(197U);
    msg.op = 240U;
    msg.system.assign("CQGTHTEHORQZLAOWBPKFLIFQVHOZAGXITCAWGIUFBBPXSEAMVZXXZCGQUWMNPXTORKXSMYTQSUA");
    msg.range = 0.694028971766196;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 2876162909U;
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
    msg.setTimeStamp(0.6216706223247238);
    msg.setSource(54283U);
    msg.setSourceEntity(67U);
    msg.setDestination(62783U);
    msg.setDestinationEntity(37U);
    msg.op = 33U;
    msg.system.assign("VRLKLWYPMNQPKSWENAMVWRJXKRXSSHCAHJLELYQYOUQJAZOZOUPTGZZYORWVKLCGIVXSFGHXSFGERNGMVQRJ");
    msg.range = 0.29807082378636984;
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.09899768800357212;
    tmp_msg_0.y = 0.7748391023784763;
    tmp_msg_0.z = 0.49148978632141993;
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
    msg.setTimeStamp(0.8953727081384145);
    msg.setSource(57228U);
    msg.setSourceEntity(28U);
    msg.setDestination(57451U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.24364532102250058);
    msg.setSource(57606U);
    msg.setSourceEntity(254U);
    msg.setDestination(26377U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.42700590778249625);
    msg.setSource(26491U);
    msg.setSourceEntity(177U);
    msg.setDestination(5880U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.42945105471341016);
    msg.setSource(43326U);
    msg.setSourceEntity(235U);
    msg.setDestination(53715U);
    msg.setDestinationEntity(110U);
    msg.list.assign("FUNTDRPCEDDNDAIPFCYJPSIBEWPORZHVXZQBPCFCRACHTAWKLJOFBKGQRBBXRGTIKGDGVQUTXBLHSNSYELNAPPDIKMARZCNMXYGLSEQYVXMUIVZKVMIELVQQGAWFQSOWZKWTHCORZUYRFYIWYPLS");

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
    msg.setTimeStamp(0.5048738793916463);
    msg.setSource(3777U);
    msg.setSourceEntity(56U);
    msg.setDestination(26531U);
    msg.setDestinationEntity(169U);
    msg.list.assign("SRCJZBEEYUTLQEKKRLGQRKFVIPABHWNUFEBDUZIXXOZLOULYPVJJTNMQJTYQMISDRGHHPFNOOSNGOCIYAMZYWBWCDAPDTHE");

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
    msg.setTimeStamp(0.6814657056526019);
    msg.setSource(32636U);
    msg.setSourceEntity(44U);
    msg.setDestination(13445U);
    msg.setDestinationEntity(140U);
    msg.list.assign("LBCSLKQETMBNRSHYPZWIBNQOCZSUGVYGJRSDVAPWIMFTFRFVQGUXJKZJMCHFGELTXANCTXAKQDJEVTQWEWUHVDILNIGPD");

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
    msg.setTimeStamp(0.6234042813535127);
    msg.setSource(5744U);
    msg.setSourceEntity(83U);
    msg.setDestination(52126U);
    msg.setDestinationEntity(247U);
    msg.value = -4310;

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
    msg.setTimeStamp(0.33306623179226114);
    msg.setSource(17344U);
    msg.setSourceEntity(34U);
    msg.setDestination(44985U);
    msg.setDestinationEntity(113U);
    msg.value = -8523;

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
    msg.setTimeStamp(0.21470816707160467);
    msg.setSource(9737U);
    msg.setSourceEntity(87U);
    msg.setDestination(33861U);
    msg.setDestinationEntity(247U);
    msg.value = 23104;

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
    msg.setTimeStamp(0.1359343335236628);
    msg.setSource(45498U);
    msg.setSourceEntity(220U);
    msg.setDestination(16190U);
    msg.setDestinationEntity(189U);
    msg.value = 0.8315201939159063;

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
    msg.setTimeStamp(0.283583620411762);
    msg.setSource(22774U);
    msg.setSourceEntity(156U);
    msg.setDestination(34566U);
    msg.setDestinationEntity(27U);
    msg.value = 0.5961440721690181;

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
    msg.setTimeStamp(0.9719165853794142);
    msg.setSource(43295U);
    msg.setSourceEntity(121U);
    msg.setDestination(50846U);
    msg.setDestinationEntity(127U);
    msg.value = 0.5581134658507079;

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
    msg.setTimeStamp(0.0878671859290805);
    msg.setSource(3836U);
    msg.setSourceEntity(27U);
    msg.setDestination(19258U);
    msg.setDestinationEntity(99U);
    msg.value = 0.6344826996304781;

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
    msg.setTimeStamp(0.6920368214664041);
    msg.setSource(56703U);
    msg.setSourceEntity(88U);
    msg.setDestination(50546U);
    msg.setDestinationEntity(210U);
    msg.value = 0.6864095247178901;

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
    msg.setTimeStamp(0.10989100934862694);
    msg.setSource(58917U);
    msg.setSourceEntity(12U);
    msg.setDestination(33126U);
    msg.setDestinationEntity(125U);
    msg.value = 0.1865796238454137;

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
    msg.setTimeStamp(0.08881961361802837);
    msg.setSource(41049U);
    msg.setSourceEntity(149U);
    msg.setDestination(45428U);
    msg.setDestinationEntity(131U);
    msg.validity = 1018U;
    msg.type = 55U;
    msg.utc_year = 46670U;
    msg.utc_month = 68U;
    msg.utc_day = 23U;
    msg.utc_time = 0.5513884954278028;
    msg.lat = 0.19755073577529814;
    msg.lon = 0.7454199135416715;
    msg.height = 0.9967688227330985;
    msg.satellites = 55U;
    msg.cog = 0.49799466568278206;
    msg.sog = 0.6385606907175955;
    msg.hdop = 0.21659670775557627;
    msg.vdop = 0.807406814322547;
    msg.hacc = 0.9607936518274949;
    msg.vacc = 0.6418006580164343;

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
    msg.setTimeStamp(0.824216976563521);
    msg.setSource(12432U);
    msg.setSourceEntity(215U);
    msg.setDestination(22307U);
    msg.setDestinationEntity(153U);
    msg.validity = 30915U;
    msg.type = 177U;
    msg.utc_year = 38677U;
    msg.utc_month = 152U;
    msg.utc_day = 155U;
    msg.utc_time = 0.38703147528073656;
    msg.lat = 0.8085594352846363;
    msg.lon = 0.00958942517180894;
    msg.height = 0.5853919411911703;
    msg.satellites = 97U;
    msg.cog = 0.7058548145711677;
    msg.sog = 0.750472637392025;
    msg.hdop = 0.680019056477644;
    msg.vdop = 0.18084792498350422;
    msg.hacc = 0.6355565024757309;
    msg.vacc = 0.32247888854219775;

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
    msg.setTimeStamp(0.3160788825460322);
    msg.setSource(35021U);
    msg.setSourceEntity(98U);
    msg.setDestination(26680U);
    msg.setDestinationEntity(229U);
    msg.validity = 27968U;
    msg.type = 37U;
    msg.utc_year = 46351U;
    msg.utc_month = 189U;
    msg.utc_day = 194U;
    msg.utc_time = 0.5541586106521706;
    msg.lat = 0.5459343153032207;
    msg.lon = 0.12376303575294167;
    msg.height = 0.5480101519947147;
    msg.satellites = 163U;
    msg.cog = 0.7505405339124119;
    msg.sog = 0.25222621256398137;
    msg.hdop = 0.7982596648913495;
    msg.vdop = 0.46438891516084446;
    msg.hacc = 0.03205727897783017;
    msg.vacc = 0.8078970586680957;

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
    msg.setTimeStamp(0.12492789468564192);
    msg.setSource(15770U);
    msg.setSourceEntity(167U);
    msg.setDestination(38164U);
    msg.setDestinationEntity(250U);
    msg.time = 0.4765771427081015;
    msg.phi = 0.6709781256491566;
    msg.theta = 0.36750533556284215;
    msg.psi = 0.30087961809067654;
    msg.psi_magnetic = 0.13181554475767054;

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
    msg.setTimeStamp(0.05533982102726276);
    msg.setSource(24287U);
    msg.setSourceEntity(128U);
    msg.setDestination(24637U);
    msg.setDestinationEntity(199U);
    msg.time = 0.05916251997881994;
    msg.phi = 0.9851903730787063;
    msg.theta = 0.44375426804946805;
    msg.psi = 0.42866839136037127;
    msg.psi_magnetic = 0.93172327059014;

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
    msg.setTimeStamp(0.4670752987587209);
    msg.setSource(32677U);
    msg.setSourceEntity(7U);
    msg.setDestination(14977U);
    msg.setDestinationEntity(148U);
    msg.time = 0.38706888027511654;
    msg.phi = 0.4464450784304068;
    msg.theta = 0.26108928072707804;
    msg.psi = 0.8635765876545444;
    msg.psi_magnetic = 0.050565827149005926;

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
    msg.setTimeStamp(0.0811033132807456);
    msg.setSource(63704U);
    msg.setSourceEntity(81U);
    msg.setDestination(20647U);
    msg.setDestinationEntity(210U);
    msg.time = 0.38947380387014174;
    msg.x = 0.670170302166307;
    msg.y = 0.023484381031246393;
    msg.z = 0.684533521202644;
    msg.timestep = 0.3734124981114906;

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
    msg.setTimeStamp(0.9035800284167651);
    msg.setSource(16973U);
    msg.setSourceEntity(202U);
    msg.setDestination(4137U);
    msg.setDestinationEntity(37U);
    msg.time = 0.2495849701611138;
    msg.x = 0.7571281049374071;
    msg.y = 0.5928077831431913;
    msg.z = 0.7978776766374913;
    msg.timestep = 0.4203525252031173;

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
    msg.setTimeStamp(0.752089522346283);
    msg.setSource(22135U);
    msg.setSourceEntity(85U);
    msg.setDestination(30818U);
    msg.setDestinationEntity(178U);
    msg.time = 0.7670275111178326;
    msg.x = 0.4215279717470244;
    msg.y = 0.14965279735425974;
    msg.z = 0.36897171670482976;
    msg.timestep = 0.0696450403198402;

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
    msg.setTimeStamp(0.24616760517458647);
    msg.setSource(46994U);
    msg.setSourceEntity(135U);
    msg.setDestination(7149U);
    msg.setDestinationEntity(113U);
    msg.time = 0.06860140052704877;
    msg.x = 0.14693528422666446;
    msg.y = 0.6883466025897689;
    msg.z = 0.45316638315123914;

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
    msg.setTimeStamp(0.3340386272500656);
    msg.setSource(2289U);
    msg.setSourceEntity(86U);
    msg.setDestination(19606U);
    msg.setDestinationEntity(248U);
    msg.time = 0.8644864634031363;
    msg.x = 0.7792362433175729;
    msg.y = 0.8127641155966686;
    msg.z = 0.051859657377730684;

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
    msg.setTimeStamp(0.7036223849179575);
    msg.setSource(48904U);
    msg.setSourceEntity(144U);
    msg.setDestination(58061U);
    msg.setDestinationEntity(106U);
    msg.time = 0.8800125057370636;
    msg.x = 0.5913476005981191;
    msg.y = 0.69244194191342;
    msg.z = 0.04395484321022536;

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
    msg.setTimeStamp(0.39359222928140125);
    msg.setSource(16432U);
    msg.setSourceEntity(225U);
    msg.setDestination(2516U);
    msg.setDestinationEntity(63U);
    msg.time = 0.14867516619270782;
    msg.x = 0.15206758967203504;
    msg.y = 0.9631437682249298;
    msg.z = 0.5069247016292259;

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
    msg.setTimeStamp(0.21723041997893267);
    msg.setSource(9005U);
    msg.setSourceEntity(126U);
    msg.setDestination(5143U);
    msg.setDestinationEntity(9U);
    msg.time = 0.3308723466688309;
    msg.x = 0.959408608518598;
    msg.y = 0.313853061015;
    msg.z = 0.42070080320866166;

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
    msg.setTimeStamp(0.6105944977904244);
    msg.setSource(65176U);
    msg.setSourceEntity(5U);
    msg.setDestination(62011U);
    msg.setDestinationEntity(146U);
    msg.time = 0.23104326828329202;
    msg.x = 0.7186240382774945;
    msg.y = 0.20475515993584747;
    msg.z = 0.9299046545244328;

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
    msg.setTimeStamp(0.22621324050019365);
    msg.setSource(58592U);
    msg.setSourceEntity(81U);
    msg.setDestination(11099U);
    msg.setDestinationEntity(179U);
    msg.time = 0.33040061015450184;
    msg.x = 0.8586571956879584;
    msg.y = 0.7994761698555582;
    msg.z = 0.39143136809901635;

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
    msg.setTimeStamp(0.014356442846013118);
    msg.setSource(53016U);
    msg.setSourceEntity(245U);
    msg.setDestination(44620U);
    msg.setDestinationEntity(0U);
    msg.time = 0.4980089723515404;
    msg.x = 0.9540766246067228;
    msg.y = 0.5472810564648894;
    msg.z = 0.8007277099400537;

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
    msg.setTimeStamp(0.17514787893751582);
    msg.setSource(22644U);
    msg.setSourceEntity(77U);
    msg.setDestination(14187U);
    msg.setDestinationEntity(144U);
    msg.time = 0.7360109561333736;
    msg.x = 0.9381526549040787;
    msg.y = 0.13409647935913416;
    msg.z = 0.6727038239637735;

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
    msg.setTimeStamp(0.30532753063188556);
    msg.setSource(50181U);
    msg.setSourceEntity(139U);
    msg.setDestination(3415U);
    msg.setDestinationEntity(154U);
    msg.validity = 99U;
    msg.x = 0.6183119921857024;
    msg.y = 0.3334225153338374;
    msg.z = 0.5362868777773728;

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
    msg.setTimeStamp(0.0528413450579962);
    msg.setSource(36997U);
    msg.setSourceEntity(155U);
    msg.setDestination(40358U);
    msg.setDestinationEntity(251U);
    msg.validity = 184U;
    msg.x = 0.9136568393101018;
    msg.y = 0.27847862077220764;
    msg.z = 0.443671592872656;

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
    msg.setTimeStamp(0.27369788209579016);
    msg.setSource(15426U);
    msg.setSourceEntity(177U);
    msg.setDestination(53824U);
    msg.setDestinationEntity(164U);
    msg.validity = 184U;
    msg.x = 0.877565556545422;
    msg.y = 0.8089461358876974;
    msg.z = 0.3332591854768385;

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
    msg.setTimeStamp(0.7949326782170271);
    msg.setSource(45609U);
    msg.setSourceEntity(121U);
    msg.setDestination(35511U);
    msg.setDestinationEntity(149U);
    msg.validity = 219U;
    msg.x = 0.5403300681274836;
    msg.y = 0.6335806026762713;
    msg.z = 0.42703898148104946;

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
    msg.setTimeStamp(0.769307345472996);
    msg.setSource(37744U);
    msg.setSourceEntity(253U);
    msg.setDestination(4016U);
    msg.setDestinationEntity(32U);
    msg.validity = 158U;
    msg.x = 0.9161803634584939;
    msg.y = 0.2032396471595801;
    msg.z = 0.592357434734627;

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
    msg.setTimeStamp(0.5103297971506874);
    msg.setSource(34150U);
    msg.setSourceEntity(71U);
    msg.setDestination(25773U);
    msg.setDestinationEntity(157U);
    msg.validity = 65U;
    msg.x = 0.520612007283525;
    msg.y = 0.9442091269187286;
    msg.z = 0.4619729085515548;

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
    msg.setTimeStamp(0.8020046298691026);
    msg.setSource(6615U);
    msg.setSourceEntity(216U);
    msg.setDestination(27730U);
    msg.setDestinationEntity(75U);
    msg.time = 0.7070365834027289;
    msg.x = 0.7902452388909886;
    msg.y = 0.09065122040189877;
    msg.z = 0.27940880136399227;

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
    msg.setTimeStamp(0.020118746444098945);
    msg.setSource(11982U);
    msg.setSourceEntity(79U);
    msg.setDestination(27200U);
    msg.setDestinationEntity(76U);
    msg.time = 0.5107286163398501;
    msg.x = 0.5990097773824183;
    msg.y = 0.4342471444181907;
    msg.z = 0.6860348220913444;

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
    msg.setTimeStamp(0.08813877685867777);
    msg.setSource(23347U);
    msg.setSourceEntity(108U);
    msg.setDestination(15261U);
    msg.setDestinationEntity(154U);
    msg.time = 0.09911028943702749;
    msg.x = 0.12975959816459426;
    msg.y = 0.6245414996211265;
    msg.z = 0.5852620507864277;

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
    msg.setTimeStamp(0.7460240801729447);
    msg.setSource(22501U);
    msg.setSourceEntity(197U);
    msg.setDestination(39236U);
    msg.setDestinationEntity(239U);
    msg.validity = 5U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6708696591677595;
    tmp_msg_0.y = 0.8123489381551561;
    tmp_msg_0.z = 0.8433072536563151;
    tmp_msg_0.phi = 0.05554105817495436;
    tmp_msg_0.theta = 0.5297942208292898;
    tmp_msg_0.psi = 0.8683820090014238;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.17852899978952785;

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
    msg.setTimeStamp(0.8517904093211646);
    msg.setSource(22496U);
    msg.setSourceEntity(128U);
    msg.setDestination(36256U);
    msg.setDestinationEntity(48U);
    msg.validity = 160U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.20248907498281832;
    tmp_msg_0.beam_height = 0.5832382355730755;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.3009582752432861;

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
    msg.setTimeStamp(0.632006418307529);
    msg.setSource(44231U);
    msg.setSourceEntity(245U);
    msg.setDestination(56896U);
    msg.setDestinationEntity(188U);
    msg.validity = 191U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.1874354696520334;
    tmp_msg_0.y = 0.3470858875811037;
    tmp_msg_0.z = 0.3092867901941805;
    tmp_msg_0.phi = 0.1667175283772292;
    tmp_msg_0.theta = 0.5640310242022237;
    tmp_msg_0.psi = 0.2977171384876369;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.751598610908466;

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
    msg.setTimeStamp(0.3532547113923534);
    msg.setSource(19429U);
    msg.setSourceEntity(181U);
    msg.setDestination(9149U);
    msg.setDestinationEntity(71U);
    msg.value = 0.17183124678000594;

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
    msg.setTimeStamp(0.6201777702748702);
    msg.setSource(52171U);
    msg.setSourceEntity(54U);
    msg.setDestination(32753U);
    msg.setDestinationEntity(66U);
    msg.value = 0.9326614095012403;

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
    msg.setTimeStamp(0.2654257658316882);
    msg.setSource(44118U);
    msg.setSourceEntity(221U);
    msg.setDestination(45334U);
    msg.setDestinationEntity(198U);
    msg.value = 0.6378843841861745;

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
    msg.setTimeStamp(0.982882202508825);
    msg.setSource(30713U);
    msg.setSourceEntity(30U);
    msg.setDestination(11710U);
    msg.setDestinationEntity(42U);
    msg.value = 0.21478391972200428;

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
    msg.setTimeStamp(0.6594545381069206);
    msg.setSource(29421U);
    msg.setSourceEntity(74U);
    msg.setDestination(24776U);
    msg.setDestinationEntity(249U);
    msg.value = 0.4380300656405377;

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
    msg.setTimeStamp(0.39521459905755607);
    msg.setSource(40194U);
    msg.setSourceEntity(33U);
    msg.setDestination(16104U);
    msg.setDestinationEntity(250U);
    msg.value = 0.13908585298556375;

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
    msg.setTimeStamp(0.03136104071521717);
    msg.setSource(36768U);
    msg.setSourceEntity(125U);
    msg.setDestination(42216U);
    msg.setDestinationEntity(116U);
    msg.value = 0.06545990006635694;

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
    msg.setTimeStamp(0.11918366353329846);
    msg.setSource(23223U);
    msg.setSourceEntity(204U);
    msg.setDestination(46583U);
    msg.setDestinationEntity(85U);
    msg.value = 0.9427858547746686;

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
    msg.setTimeStamp(0.9214975924442694);
    msg.setSource(46748U);
    msg.setSourceEntity(96U);
    msg.setDestination(53621U);
    msg.setDestinationEntity(95U);
    msg.value = 0.2911204960990392;

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
    msg.setTimeStamp(0.15386344944566566);
    msg.setSource(10616U);
    msg.setSourceEntity(211U);
    msg.setDestination(11274U);
    msg.setDestinationEntity(15U);
    msg.value = 0.3090804137526364;

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
    msg.setTimeStamp(0.07158938404324289);
    msg.setSource(10153U);
    msg.setSourceEntity(140U);
    msg.setDestination(41430U);
    msg.setDestinationEntity(29U);
    msg.value = 0.3382783091884577;

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
    msg.setTimeStamp(0.11260665120899094);
    msg.setSource(14206U);
    msg.setSourceEntity(124U);
    msg.setDestination(22376U);
    msg.setDestinationEntity(37U);
    msg.value = 0.5602893456658128;

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
    msg.setTimeStamp(0.2662578304638219);
    msg.setSource(32849U);
    msg.setSourceEntity(198U);
    msg.setDestination(45266U);
    msg.setDestinationEntity(197U);
    msg.value = 0.1498744561498322;

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
    msg.setTimeStamp(0.2106334778780794);
    msg.setSource(30753U);
    msg.setSourceEntity(24U);
    msg.setDestination(43514U);
    msg.setDestinationEntity(241U);
    msg.value = 0.19342353486816966;

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
    msg.setTimeStamp(0.552207084453702);
    msg.setSource(57370U);
    msg.setSourceEntity(195U);
    msg.setDestination(3369U);
    msg.setDestinationEntity(37U);
    msg.value = 0.262231092541085;

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
    msg.setTimeStamp(0.1276063702223854);
    msg.setSource(26950U);
    msg.setSourceEntity(22U);
    msg.setDestination(50550U);
    msg.setDestinationEntity(146U);
    msg.value = 0.41728869112376565;

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
    msg.setTimeStamp(0.46592111957211535);
    msg.setSource(42356U);
    msg.setSourceEntity(137U);
    msg.setDestination(60006U);
    msg.setDestinationEntity(182U);
    msg.value = 0.8385324396464392;

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
    msg.setTimeStamp(0.3952124622255361);
    msg.setSource(34936U);
    msg.setSourceEntity(65U);
    msg.setDestination(11062U);
    msg.setDestinationEntity(105U);
    msg.value = 0.5367330733850003;

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
    msg.setTimeStamp(0.8726867196279109);
    msg.setSource(60539U);
    msg.setSourceEntity(73U);
    msg.setDestination(37857U);
    msg.setDestinationEntity(84U);
    msg.value = 0.43346234735782097;

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
    msg.setTimeStamp(0.6511186684319183);
    msg.setSource(48665U);
    msg.setSourceEntity(120U);
    msg.setDestination(248U);
    msg.setDestinationEntity(24U);
    msg.value = 0.07932921945897264;

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
    msg.setTimeStamp(0.6515187763633293);
    msg.setSource(36079U);
    msg.setSourceEntity(142U);
    msg.setDestination(24179U);
    msg.setDestinationEntity(88U);
    msg.value = 0.38987050136445744;

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
    msg.setTimeStamp(0.25932556047681055);
    msg.setSource(8110U);
    msg.setSourceEntity(67U);
    msg.setDestination(55899U);
    msg.setDestinationEntity(247U);
    msg.value = 0.8959814475818133;

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
    msg.setTimeStamp(0.5066928884533175);
    msg.setSource(27643U);
    msg.setSourceEntity(206U);
    msg.setDestination(37187U);
    msg.setDestinationEntity(118U);
    msg.value = 0.8266750308324698;

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
    msg.setTimeStamp(0.9282219357317757);
    msg.setSource(38196U);
    msg.setSourceEntity(211U);
    msg.setDestination(31495U);
    msg.setDestinationEntity(143U);
    msg.value = 0.7574940014514291;

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
    msg.setTimeStamp(0.07647477805454939);
    msg.setSource(34173U);
    msg.setSourceEntity(190U);
    msg.setDestination(100U);
    msg.setDestinationEntity(20U);
    msg.direction = 0.715004475025448;
    msg.speed = 0.35799420794667813;
    msg.turbulence = 0.8441450032750493;

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
    msg.setTimeStamp(0.5820523327612);
    msg.setSource(30268U);
    msg.setSourceEntity(23U);
    msg.setDestination(43003U);
    msg.setDestinationEntity(251U);
    msg.direction = 0.20346679641246312;
    msg.speed = 0.6091232558817793;
    msg.turbulence = 0.35133581789181634;

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
    msg.setTimeStamp(0.917640743754967);
    msg.setSource(31692U);
    msg.setSourceEntity(57U);
    msg.setDestination(59102U);
    msg.setDestinationEntity(203U);
    msg.direction = 0.6952599020478952;
    msg.speed = 0.03195836682729969;
    msg.turbulence = 0.24970566462538157;

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
    msg.setTimeStamp(0.8324210906871488);
    msg.setSource(2422U);
    msg.setSourceEntity(111U);
    msg.setDestination(34317U);
    msg.setDestinationEntity(193U);
    msg.value = 0.6308470528565248;

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
    msg.setTimeStamp(0.2980146064273632);
    msg.setSource(14631U);
    msg.setSourceEntity(151U);
    msg.setDestination(43579U);
    msg.setDestinationEntity(162U);
    msg.value = 0.06364863954381927;

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
    msg.setTimeStamp(0.12267687599988408);
    msg.setSource(28510U);
    msg.setSourceEntity(10U);
    msg.setDestination(52979U);
    msg.setDestinationEntity(154U);
    msg.value = 0.5711409716213951;

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
    msg.setTimeStamp(0.4270356093108236);
    msg.setSource(53216U);
    msg.setSourceEntity(113U);
    msg.setDestination(31538U);
    msg.setDestinationEntity(178U);
    msg.value.assign("TBEYINVRDZJAUWRCEGVHBYOTCTPZDMUUZZMSMFKFKLUDIYTQGWCP");

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
    msg.setTimeStamp(0.11616391757799382);
    msg.setSource(47677U);
    msg.setSourceEntity(162U);
    msg.setDestination(2612U);
    msg.setDestinationEntity(64U);
    msg.value.assign("YSHFMHENKFLQKCODSPNLUAGVWNLXOSGEUBEMWFWHRWZSQJJMGCMXBIGJTTYPRDRONHZYIXNTPYAUTDHZIUJDCQLRMGSVMZNAXYUPXYAGJWIBCLYFXXVLZFBHCTHCJPKAHKQAYFIC");

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
    msg.setTimeStamp(0.31443488025583355);
    msg.setSource(31358U);
    msg.setSourceEntity(180U);
    msg.setDestination(22127U);
    msg.setDestinationEntity(145U);
    msg.value.assign("MLUQHKIWWQYCEK");

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
    msg.setTimeStamp(0.9980785440483552);
    msg.setSource(49479U);
    msg.setSourceEntity(232U);
    msg.setDestination(8757U);
    msg.setDestinationEntity(188U);
    const char tmp_msg_0[] = {-52, 0, -59, -34, 80, 46, 16, -38, -74, 97, -82, 24, 13, -5, 115, 88, 99, -58, -37, -111, -32, 66, 104, 100, 117, -25, -52, -81, -8, 63, 96, 73, -26, 101, 94, 95, -26, -54, -98, 114, 4, -126, -10, -72, -116, 63, 16, 3, 12, 104, 21, 7, 113, 42, 28, 104, 54, 102, -97, -25, 98, -43, -11, 87, -124, -123, 53, -67, 30, 112, -111, 116, -96, 6, -25, -4, 123, -23, 98, -127, 70, -56, 38, -83, 24, 41, -11, -78, -94, -14, 24, 113, -52, -15, 57, -46, 73, -103, -7, 13, -100, 73, 126, 62, -95, 76, 87, -98, -29, -86, -39, -57, -17, 67, 121, -78, 29, -7, 53, -69, -68, 16, -12, -81, -126, -81, -40, 57};
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
    msg.setTimeStamp(0.00857616476867551);
    msg.setSource(54163U);
    msg.setSourceEntity(168U);
    msg.setDestination(48438U);
    msg.setDestinationEntity(116U);
    const char tmp_msg_0[] = {31, -103, 74, 70, 88, -71, -2, -63, -58, -65, 4, 56, -61, 49, 113, -57, -126, 88, -46, -118, -70, -21, -33, 31, -42, -117, -62, -64, -29, -33, -94, 77, 80, -85, 11, -70, 34, -114, -40, 81, -17, 115, -119, -19, -20, -98, 31, 48, 104, 4, -79, 44, 40, -34, 101, -103, -120, -40, 122, -111, -93, 98, 84, 78, 2, 116, 48, 117, 70, -127, 72, 97, 64, 56, 24, -72, -92, 76, -45, 32, 45, 99, -63, 18, -67, 54, 87, -91, 73, -11, 42, 65, -65, -14, -1, 18, 54, -81, -58, 13, 45, -86, 63, -77, -43, -34, -37, -48, 124, -69, -28, 20, -65, 98, -24, 36, -4, 43, 28, -78, -9, -63, -51, -104, 92, -118, -1, 119, 85, -10, 98, -18, -63, 99, -107, -84, 120, 86, 61, -123, 19, -124, 62, 70, -22, -107, -57, -60, -111, -50, -52, 56, -50, 100, 91, -1, 100, 63, -8};
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
    msg.setTimeStamp(0.41764375174622936);
    msg.setSource(2835U);
    msg.setSourceEntity(75U);
    msg.setDestination(33670U);
    msg.setDestinationEntity(131U);
    const char tmp_msg_0[] = {-99, 17, 59, -69, 123, -127, -28, 95, -127, 56, 107, -118, 126, -73, -13, -82, 0, -4, 92, -43, 29, -78, -117, 111, -51, -19, -87, 32, 6, -4, -50, -60, -45, 24, 105, -20, -26, 78, -102, 31, 111, -41, 123, -112, -25, 105, -79, -36, -70};
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
    msg.setTimeStamp(0.4969910124427711);
    msg.setSource(16413U);
    msg.setSourceEntity(80U);
    msg.setDestination(47800U);
    msg.setDestinationEntity(203U);
    msg.frequency = 714642470U;
    msg.min_range = 60446U;
    msg.max_range = 56339U;

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
    msg.setTimeStamp(0.47684142328908286);
    msg.setSource(64234U);
    msg.setSourceEntity(4U);
    msg.setDestination(51241U);
    msg.setDestinationEntity(216U);
    msg.frequency = 3889049810U;
    msg.min_range = 1316U;
    msg.max_range = 40902U;

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
    msg.setTimeStamp(0.36548736295025364);
    msg.setSource(24705U);
    msg.setSourceEntity(159U);
    msg.setDestination(5314U);
    msg.setDestinationEntity(123U);
    msg.frequency = 3152822570U;
    msg.min_range = 53409U;
    msg.max_range = 60305U;

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
    msg.setTimeStamp(0.33656966091502116);
    msg.setSource(21187U);
    msg.setSourceEntity(197U);
    msg.setDestination(7497U);
    msg.setDestinationEntity(36U);
    msg.type = 206U;
    msg.frequency = 4276212801U;
    msg.min_range = 59940U;
    msg.max_range = 59330U;
    msg.bits_per_point = 27U;
    msg.scale_factor = 0.2050063611136047;
    const char tmp_msg_0[] = {-100, 47, 87, -77, -91, 11, -110, 16, 74, 108, -98, 70, -34, -53, 63, 122, 30, -119, -87, -69, -30, 102, -77, -75, -27, -49, 23, -29, 10, -111, 6, -25, 7, 108, -106, -117, 43, 26, -37, -83, 3, -25, -18, -8, 66, 53, 86, 63, 4, -15, -38, 81, 125, -41, 60, -31, 95, 126, 63, 96, -46, 114, 31, 20, 30, -116, 27};
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
    msg.setTimeStamp(0.9743955079428552);
    msg.setSource(14287U);
    msg.setSourceEntity(197U);
    msg.setDestination(35565U);
    msg.setDestinationEntity(72U);
    msg.type = 20U;
    msg.frequency = 3670454194U;
    msg.min_range = 21078U;
    msg.max_range = 2353U;
    msg.bits_per_point = 42U;
    msg.scale_factor = 0.1505276225790374;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.2077089735260852;
    tmp_msg_0.beam_height = 0.03462565365542147;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {18, 101, -63, 50, -60, -6, 10, 45, -6, 109, 53, -39, 124, -18, -93, -18, -24, -90, -42, -67, -113, -76, 31, -21, -128, 73, 96, -3, 58, 83, -117, 61, 117, 6, 27, 44, -10, -75, 44, -108, 21, -104, -87, -26, 59, 56, -56, 114, -15, 15, -124, -128, 56};
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
    msg.setTimeStamp(0.042052558486196046);
    msg.setSource(18702U);
    msg.setSourceEntity(8U);
    msg.setDestination(17981U);
    msg.setDestinationEntity(104U);
    msg.type = 15U;
    msg.frequency = 3184345101U;
    msg.min_range = 1634U;
    msg.max_range = 6529U;
    msg.bits_per_point = 109U;
    msg.scale_factor = 0.9072569649521478;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.740679743132287;
    tmp_msg_0.beam_height = 0.8046777555591305;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {72, 85, 70, 42, 10, -76, -34, -104, 86, 38};
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
    msg.setTimeStamp(0.275661092135126);
    msg.setSource(5349U);
    msg.setSourceEntity(195U);
    msg.setDestination(58310U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.281357638400909);
    msg.setSource(34596U);
    msg.setSourceEntity(249U);
    msg.setDestination(60760U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.967765553260204);
    msg.setSource(33141U);
    msg.setSourceEntity(24U);
    msg.setDestination(2078U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.5951724598112494);
    msg.setSource(44484U);
    msg.setSourceEntity(124U);
    msg.setDestination(39302U);
    msg.setDestinationEntity(195U);
    msg.op = 59U;

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
    msg.setTimeStamp(0.4310424140237987);
    msg.setSource(20533U);
    msg.setSourceEntity(204U);
    msg.setDestination(55631U);
    msg.setDestinationEntity(98U);
    msg.op = 159U;

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
    msg.setTimeStamp(0.032762579694525784);
    msg.setSource(56104U);
    msg.setSourceEntity(235U);
    msg.setDestination(48985U);
    msg.setDestinationEntity(140U);
    msg.op = 108U;

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
    msg.setTimeStamp(0.864452948828839);
    msg.setSource(52144U);
    msg.setSourceEntity(169U);
    msg.setDestination(6947U);
    msg.setDestinationEntity(149U);
    msg.value = 0.3927095519909001;
    msg.confidence = 0.3968126542234556;
    msg.opmodes.assign("MGACOOGEEYKPMZGGKRHPWAQBFNKGMCIUITJRSRATVIDJYEWEWZNTBFHDSZ");

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
    msg.setTimeStamp(0.21653683211778763);
    msg.setSource(65090U);
    msg.setSourceEntity(195U);
    msg.setDestination(2785U);
    msg.setDestinationEntity(83U);
    msg.value = 0.8329468700264495;
    msg.confidence = 0.7443114311292169;
    msg.opmodes.assign("RVIVTUOWYTVIKAEWGFQSJBTPRKALNTSOJNHCRDAHOAVDBIQYMBWNMZMYSWJUBEBTUQRHPGVHVZAVGVEDXLTALRPYNILSKCNBOXGXIPGMVEUMJZZTCPFVEKLQMCWHLERJRQAXYYHCSKLJFCHKCGDYXYIBQNWXASXFOSPIF");

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
    msg.setTimeStamp(0.9439054022108071);
    msg.setSource(47914U);
    msg.setSourceEntity(245U);
    msg.setDestination(6364U);
    msg.setDestinationEntity(164U);
    msg.value = 0.21217075508399275;
    msg.confidence = 0.9097972055311632;
    msg.opmodes.assign("OXARFWFVTAEFCAXTUGLAQKIDXJUYPDJNUZTJIBMHDMLZNFOYRCSLEDYBHZDYWHWGVGECWPMRQJQPXXWFHIVQZBYEBSMNEJGBUXTFQLML");

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
    msg.setTimeStamp(0.9583069685656477);
    msg.setSource(24807U);
    msg.setSourceEntity(186U);
    msg.setDestination(38152U);
    msg.setDestinationEntity(245U);
    msg.itow = 800072501U;
    msg.lat = 0.6209323658679431;
    msg.lon = 0.13269128878790248;
    msg.height_ell = 0.7503065932562023;
    msg.height_sea = 0.6873368475818643;
    msg.hacc = 0.15130396822182912;
    msg.vacc = 0.8321433702542024;
    msg.vel_n = 0.5898502808374387;
    msg.vel_e = 0.48339477588207624;
    msg.vel_d = 0.726951462601559;
    msg.speed = 0.24270412394537544;
    msg.gspeed = 0.11165519562214221;
    msg.heading = 0.8701961831146416;
    msg.sacc = 0.5666938719700818;
    msg.cacc = 0.2851510627326409;

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
    msg.setTimeStamp(0.5397243383133485);
    msg.setSource(16156U);
    msg.setSourceEntity(98U);
    msg.setDestination(44722U);
    msg.setDestinationEntity(189U);
    msg.itow = 2633261116U;
    msg.lat = 0.9772536089563545;
    msg.lon = 0.039241008320594406;
    msg.height_ell = 0.10503449985659197;
    msg.height_sea = 0.7842644174830097;
    msg.hacc = 0.43595406102320966;
    msg.vacc = 0.5479926469634873;
    msg.vel_n = 0.45510793985906994;
    msg.vel_e = 0.2225285852509511;
    msg.vel_d = 0.5194071102729436;
    msg.speed = 0.8388795811514074;
    msg.gspeed = 0.9453795209494358;
    msg.heading = 0.679200292522857;
    msg.sacc = 0.6221448657223481;
    msg.cacc = 0.2369848641694584;

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
    msg.setTimeStamp(0.3100847603055962);
    msg.setSource(49886U);
    msg.setSourceEntity(168U);
    msg.setDestination(44312U);
    msg.setDestinationEntity(145U);
    msg.itow = 2623230788U;
    msg.lat = 0.8152985958723006;
    msg.lon = 0.9403835011154156;
    msg.height_ell = 0.620366935419132;
    msg.height_sea = 0.7623612047064378;
    msg.hacc = 0.1113346249465782;
    msg.vacc = 0.20464391883049093;
    msg.vel_n = 0.42829178502699994;
    msg.vel_e = 0.6558360227459294;
    msg.vel_d = 0.7288626667341025;
    msg.speed = 0.9696604583420322;
    msg.gspeed = 0.0901960947105731;
    msg.heading = 0.8672746973258321;
    msg.sacc = 0.337502216097302;
    msg.cacc = 0.4015985505416442;

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
    msg.setTimeStamp(0.09653243120133126);
    msg.setSource(32549U);
    msg.setSourceEntity(1U);
    msg.setDestination(50420U);
    msg.setDestinationEntity(64U);
    msg.id = 176U;
    msg.value = 0.2098422764946669;

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
    msg.setTimeStamp(0.02411293526882674);
    msg.setSource(60627U);
    msg.setSourceEntity(72U);
    msg.setDestination(21105U);
    msg.setDestinationEntity(51U);
    msg.id = 59U;
    msg.value = 0.2880585274443215;

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
    msg.setTimeStamp(0.9226409108715812);
    msg.setSource(34171U);
    msg.setSourceEntity(113U);
    msg.setDestination(36492U);
    msg.setDestinationEntity(118U);
    msg.id = 25U;
    msg.value = 0.5760177514792922;

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
    msg.setTimeStamp(0.8137987129508878);
    msg.setSource(41852U);
    msg.setSourceEntity(7U);
    msg.setDestination(57471U);
    msg.setDestinationEntity(107U);
    msg.x = 0.9878484736792663;
    msg.y = 0.838660317505647;
    msg.z = 0.5626745435175213;
    msg.phi = 0.6744180020592434;
    msg.theta = 0.6478257100955606;
    msg.psi = 0.06974676401932134;

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
    msg.setTimeStamp(0.8459200283315331);
    msg.setSource(15450U);
    msg.setSourceEntity(152U);
    msg.setDestination(55745U);
    msg.setDestinationEntity(80U);
    msg.x = 0.6166059945460685;
    msg.y = 0.478060266424681;
    msg.z = 0.7678058391506004;
    msg.phi = 0.46954778153153975;
    msg.theta = 0.8346684750715478;
    msg.psi = 0.965989658889254;

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
    msg.setTimeStamp(0.8181956254566768);
    msg.setSource(61013U);
    msg.setSourceEntity(103U);
    msg.setDestination(57461U);
    msg.setDestinationEntity(151U);
    msg.x = 0.5595604062880378;
    msg.y = 0.5145776900297024;
    msg.z = 0.4883787671452152;
    msg.phi = 0.1150676220796244;
    msg.theta = 0.33891407697519904;
    msg.psi = 0.7159787189968237;

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
    msg.setTimeStamp(0.2892758155658076);
    msg.setSource(573U);
    msg.setSourceEntity(163U);
    msg.setDestination(9350U);
    msg.setDestinationEntity(41U);
    msg.beam_width = 0.7752767122881995;
    msg.beam_height = 0.45166107032273395;

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
    msg.setTimeStamp(0.749110009480903);
    msg.setSource(7089U);
    msg.setSourceEntity(146U);
    msg.setDestination(23862U);
    msg.setDestinationEntity(61U);
    msg.beam_width = 0.9709583309908946;
    msg.beam_height = 0.8052586973077369;

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
    msg.setTimeStamp(0.7627371822066431);
    msg.setSource(56430U);
    msg.setSourceEntity(47U);
    msg.setDestination(2404U);
    msg.setDestinationEntity(16U);
    msg.beam_width = 0.4716019328882648;
    msg.beam_height = 0.7079390356013191;

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
    msg.setTimeStamp(0.7043794431268292);
    msg.setSource(53881U);
    msg.setSourceEntity(97U);
    msg.setDestination(23976U);
    msg.setDestinationEntity(128U);
    msg.sane = 197U;

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
    msg.setTimeStamp(0.4488327957360091);
    msg.setSource(59925U);
    msg.setSourceEntity(239U);
    msg.setDestination(56939U);
    msg.setDestinationEntity(146U);
    msg.sane = 23U;

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
    msg.setTimeStamp(0.3661024294766818);
    msg.setSource(312U);
    msg.setSourceEntity(121U);
    msg.setDestination(63158U);
    msg.setDestinationEntity(247U);
    msg.sane = 219U;

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
    msg.setTimeStamp(0.838009486240097);
    msg.setSource(3203U);
    msg.setSourceEntity(178U);
    msg.setDestination(36161U);
    msg.setDestinationEntity(53U);
    msg.id = 236U;
    msg.zoom = 236U;
    msg.action = 113U;

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
    msg.setTimeStamp(0.8782537391626939);
    msg.setSource(57956U);
    msg.setSourceEntity(168U);
    msg.setDestination(50452U);
    msg.setDestinationEntity(59U);
    msg.id = 39U;
    msg.zoom = 177U;
    msg.action = 95U;

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
    msg.setTimeStamp(0.09369979610729218);
    msg.setSource(33557U);
    msg.setSourceEntity(70U);
    msg.setDestination(39304U);
    msg.setDestinationEntity(39U);
    msg.id = 29U;
    msg.zoom = 13U;
    msg.action = 114U;

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
    msg.setTimeStamp(0.6673755338541781);
    msg.setSource(60489U);
    msg.setSourceEntity(8U);
    msg.setDestination(61961U);
    msg.setDestinationEntity(15U);
    msg.id = 160U;
    msg.value = 0.9088639959330214;

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
    msg.setTimeStamp(0.5843587276665327);
    msg.setSource(64641U);
    msg.setSourceEntity(187U);
    msg.setDestination(60686U);
    msg.setDestinationEntity(111U);
    msg.id = 232U;
    msg.value = 0.021327880209407013;

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
    msg.setTimeStamp(0.4682168118808273);
    msg.setSource(2075U);
    msg.setSourceEntity(213U);
    msg.setDestination(50960U);
    msg.setDestinationEntity(122U);
    msg.id = 104U;
    msg.value = 0.2749420982660985;

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
    msg.setTimeStamp(0.05350414861379926);
    msg.setSource(42862U);
    msg.setSourceEntity(97U);
    msg.setDestination(37064U);
    msg.setDestinationEntity(22U);
    msg.id = 42U;
    msg.value = 0.4471733800040202;

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
    msg.setTimeStamp(0.5651922103596877);
    msg.setSource(13911U);
    msg.setSourceEntity(175U);
    msg.setDestination(42043U);
    msg.setDestinationEntity(126U);
    msg.id = 32U;
    msg.value = 0.602972343635887;

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
    msg.setTimeStamp(0.3103254635670878);
    msg.setSource(47850U);
    msg.setSourceEntity(31U);
    msg.setDestination(36701U);
    msg.setDestinationEntity(253U);
    msg.id = 201U;
    msg.value = 0.3990299325162654;

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
    msg.setTimeStamp(0.5522436260809082);
    msg.setSource(30301U);
    msg.setSourceEntity(29U);
    msg.setDestination(54184U);
    msg.setDestinationEntity(150U);
    msg.id = 51U;
    msg.angle = 0.5656107610351621;

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
    msg.setTimeStamp(0.7255112177254233);
    msg.setSource(4320U);
    msg.setSourceEntity(178U);
    msg.setDestination(21990U);
    msg.setDestinationEntity(69U);
    msg.id = 193U;
    msg.angle = 0.28612281281146434;

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
    msg.setTimeStamp(0.3490951019172899);
    msg.setSource(37371U);
    msg.setSourceEntity(253U);
    msg.setDestination(58107U);
    msg.setDestinationEntity(89U);
    msg.id = 183U;
    msg.angle = 0.25015376547702617;

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
    msg.setTimeStamp(0.5793923901131285);
    msg.setSource(35901U);
    msg.setSourceEntity(123U);
    msg.setDestination(51775U);
    msg.setDestinationEntity(125U);
    msg.op = 120U;
    msg.actions.assign("RXCWTOGMBOLFSYSNUCNQBIOFOXJCLUXIGYLNUUBNGUFJDPBA");

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
    msg.setTimeStamp(0.8159740965169592);
    msg.setSource(58741U);
    msg.setSourceEntity(147U);
    msg.setDestination(1217U);
    msg.setDestinationEntity(230U);
    msg.op = 103U;
    msg.actions.assign("GVNTPGMKEZYIJHQZCLLXADVZCIMGIZWLSUDPHOLLGEWNWQPMRDBVZEVRIASMKELMJSZKPSEAINFHJRTHBOOEKEDCSYHLFTUOPRJBFMFKIFTFOJQYYVQDBCHABBDNVJACUBXLFBNIYEXRUJ");

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
    msg.setTimeStamp(0.20828014879333234);
    msg.setSource(18698U);
    msg.setSourceEntity(38U);
    msg.setDestination(26407U);
    msg.setDestinationEntity(103U);
    msg.op = 28U;
    msg.actions.assign("DMVMTYGRXPABRYJCPWGLPHFFUVBPUIKXZRGQGKSRFTCYNOAFAIVYZRVZCRVWRHELZTIJDDUEWKBQUNRHSDGHPWMIAUMQMQDOYYQJBXSTPISEUJBXTNWPOTCSAFUKMVLEMTCMLSLJCZNQXOIHOCGNSHPXAYIWD");

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
    msg.setTimeStamp(0.1720565996509763);
    msg.setSource(20779U);
    msg.setSourceEntity(248U);
    msg.setDestination(26687U);
    msg.setDestinationEntity(55U);
    msg.actions.assign("QGZGJKBOPFXPGLAZNUECKPECILCRFLYXBCDXDWMJZUNVPSRITCLNHNJGUGDGVHRJERTJSJQSWEDTTFAPBTBIQRTNVQXTIUJORPKIQVAXKDKQYCZSBLNWUHGIZWRQKMFUFYTC");

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
    msg.setTimeStamp(0.24218808374988576);
    msg.setSource(7661U);
    msg.setSourceEntity(156U);
    msg.setDestination(52378U);
    msg.setDestinationEntity(237U);
    msg.actions.assign("QCSXMZNGHBVUFXJRCZJKTADIREEGGDQOLTPGNDWISJLFRVKOPYZTOWBNDVCOKSJOALLXJHNZUNXYQTFEETXHVAVHWIXSYKMUWDYRAEUXEFNBYFUFUKCKMKHMAQIOUWUZRMLMKYJZHHDQPJRWPRAEBZOCIXJNMJSNBLCNHZGYDULBTCHR");

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
    msg.setTimeStamp(0.1479896926920925);
    msg.setSource(55487U);
    msg.setSourceEntity(146U);
    msg.setDestination(7158U);
    msg.setDestinationEntity(113U);
    msg.actions.assign("DKBFCAUKBKUJNSCJYRFUAIMZVYYBJFRNYVGWMGMJWPMOLRIHXRZKNGUPIHYZPSYICQLKSXIPFGYNDQQLCCAAOXUDPJEIXZENMJWDBRCEEQWEAHKZTTAKSOMGQCWPLIWXTPGFLT");

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
    msg.setTimeStamp(0.659359253076041);
    msg.setSource(6545U);
    msg.setSourceEntity(77U);
    msg.setDestination(7844U);
    msg.setDestinationEntity(150U);
    msg.button = 241U;
    msg.value = 74U;

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
    msg.setTimeStamp(0.21514188286048475);
    msg.setSource(44231U);
    msg.setSourceEntity(186U);
    msg.setDestination(59561U);
    msg.setDestinationEntity(138U);
    msg.button = 218U;
    msg.value = 31U;

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
    msg.setTimeStamp(0.6655204508679639);
    msg.setSource(10265U);
    msg.setSourceEntity(115U);
    msg.setDestination(63063U);
    msg.setDestinationEntity(74U);
    msg.button = 224U;
    msg.value = 245U;

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
    msg.setTimeStamp(0.1466893400737791);
    msg.setSource(23882U);
    msg.setSourceEntity(60U);
    msg.setDestination(44647U);
    msg.setDestinationEntity(150U);
    msg.op = 203U;
    msg.text.assign("RZFKLJQRDQFLGXGFJRZKVJEVWHOEF");

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
    msg.setTimeStamp(0.6143767984228248);
    msg.setSource(30472U);
    msg.setSourceEntity(252U);
    msg.setDestination(23079U);
    msg.setDestinationEntity(177U);
    msg.op = 165U;
    msg.text.assign("IBKCJPDDAGRHBBBSRODOTNLTMBRIAQRCDAOYNMIDYLZKYLAVVXUKLNULXFVCSUVSQIFUXHBAUDTWMMCSFF");

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
    msg.setTimeStamp(0.959574403465087);
    msg.setSource(45936U);
    msg.setSourceEntity(36U);
    msg.setDestination(17068U);
    msg.setDestinationEntity(30U);
    msg.op = 21U;
    msg.text.assign("SJEJKPUWPUWHMGVJHWNROTVYEVSOQUYLEPQBKVXNCJHBILTGTMUKIUKGXZFZDVCXZBAECWZWXBTVTPWYZOCQIOTUIOPHGDRMYGDRNFFMJHBIYYKNLFCEMOXBQZYECDQFFAZEQPTOJPNMBANDNOSDAMKHWWSLDJYVKNMWIJFPHVEAMGJOXVFUNTZBSLCFCJEILDTSLKARXUTCRQAGAKS");

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
    msg.setTimeStamp(0.7569606027845108);
    msg.setSource(7347U);
    msg.setSourceEntity(180U);
    msg.setDestination(9351U);
    msg.setDestinationEntity(76U);
    msg.op = 218U;
    msg.time_remain = 0.06348928670644816;
    msg.sched_time = 0.3653580028463833;

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
    msg.setTimeStamp(0.6634031574066063);
    msg.setSource(15680U);
    msg.setSourceEntity(203U);
    msg.setDestination(15459U);
    msg.setDestinationEntity(243U);
    msg.op = 197U;
    msg.time_remain = 0.7028295929007893;
    msg.sched_time = 0.03182646667014433;

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
    msg.setTimeStamp(0.5089166299189122);
    msg.setSource(28345U);
    msg.setSourceEntity(53U);
    msg.setDestination(26815U);
    msg.setDestinationEntity(247U);
    msg.op = 119U;
    msg.time_remain = 0.8548894536880394;
    msg.sched_time = 0.5870124066440957;

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
    msg.setTimeStamp(0.8520464974712552);
    msg.setSource(37304U);
    msg.setSourceEntity(94U);
    msg.setDestination(35726U);
    msg.setDestinationEntity(107U);
    msg.name.assign("JLBVYGGDQPSQJGKPNYWEFGXHBEBISYZMALX");
    msg.op = 248U;
    msg.sched_time = 0.5696771595207476;

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
    msg.setTimeStamp(0.26586319264214797);
    msg.setSource(47020U);
    msg.setSourceEntity(26U);
    msg.setDestination(36990U);
    msg.setDestinationEntity(125U);
    msg.name.assign("RGAPXOWJBEQDMNCPPECZCATNXLVXCZNAAZNAXABSSYZHJJDBDYPMLJBZJLTYEQJESTGLGMLOHMPBFUAAVQSTFVNMUEZYQWXVKLVKZTPLXOCEUOGRPPRMWVQDHOWQULMHRIBNHXPSCRLMFIPIBGFYFXRGHVYSJYWCEOMWBIVUDIKWOSFOXFEKGDF");
    msg.op = 46U;
    msg.sched_time = 0.19917794641557918;

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
    msg.setTimeStamp(0.721137939015473);
    msg.setSource(28344U);
    msg.setSourceEntity(223U);
    msg.setDestination(56854U);
    msg.setDestinationEntity(231U);
    msg.name.assign("ABSWKLWIGXYIMLOGKEQPKECKPHVQQWSYGSPZBUMKAEOMPIDKLFYPJTBVO");
    msg.op = 18U;
    msg.sched_time = 0.42268482434245847;

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
    msg.setTimeStamp(0.3496536420800923);
    msg.setSource(52745U);
    msg.setSourceEntity(82U);
    msg.setDestination(922U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.49983266062292075);
    msg.setSource(45441U);
    msg.setSourceEntity(80U);
    msg.setDestination(10804U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.02985068168705518);
    msg.setSource(53787U);
    msg.setSourceEntity(7U);
    msg.setDestination(30278U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.007578749557603515);
    msg.setSource(22890U);
    msg.setSourceEntity(37U);
    msg.setDestination(24007U);
    msg.setDestinationEntity(167U);
    msg.name.assign("VVIRSLRKMUCYRHJKBHXPSFIHEVYJGWGAWCHSFGXHYNRBMWIWEQOGFPADSDQEUCDFFCDLWFHLAJZRKJRKZNLQOPVANELGLVDABSZL");
    msg.state = 75U;

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
    msg.setTimeStamp(0.8978781761891527);
    msg.setSource(23748U);
    msg.setSourceEntity(66U);
    msg.setDestination(34279U);
    msg.setDestinationEntity(227U);
    msg.name.assign("MBBOHKAQFDFGSZZMLAEOURKRBSZHUIZSBOTZRKYFWNPSSTVIUCRJWHXRJQICWQOUYMHAMQUXZTTWRXYOGOBTCLKLJGPNANVHECMUIXYTAPDENVMUFWDVGUVBZ");
    msg.state = 11U;

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
    msg.setTimeStamp(0.8839995470830917);
    msg.setSource(15899U);
    msg.setSourceEntity(31U);
    msg.setDestination(5372U);
    msg.setDestinationEntity(99U);
    msg.name.assign("EJZOGFVHLNMVLSJRTTEEMYCIPJZVZRHDYTG");
    msg.state = 102U;

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
    msg.setTimeStamp(0.3486999709281625);
    msg.setSource(917U);
    msg.setSourceEntity(142U);
    msg.setDestination(17086U);
    msg.setDestinationEntity(86U);
    msg.name.assign("VAQAPHOLUJEOJSLFHRTISAMHUQINEMNQAEQCLHCZBBXPJMCUUOUIGFPXGKOIXWRUJDDAMFJCWDYPCUKOQJHIQSEHJDTLYSVDIYWEBBESELDQDPNBJUWSFRQXBJDATCTZMLVYORPCGGLNXYMXPIRVYZSEUATKTGFYGPVWZNRVQFIZGSZOYSJFILELNHKPZWKWTWAGHVRIFBSFRKPOXYVXWXMBYNZVAOGKNX");
    msg.value = 91U;

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
    msg.setTimeStamp(0.1689364555766305);
    msg.setSource(3821U);
    msg.setSourceEntity(57U);
    msg.setDestination(9164U);
    msg.setDestinationEntity(105U);
    msg.name.assign("LDYHABVQMDHXAQXLUYLZKHPDFGKGWNDRRPXCGKMXNFRWROEKITCOQOWMAMQJQYDVONUNTLIFMVQKWXOIRJZWJWQKOSEFRTYBWRHHRVLGZCFULEOJNUOGVYTPKSRQBHPIBTGZUBAY");
    msg.value = 214U;

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
    msg.setTimeStamp(0.7398794120271996);
    msg.setSource(53601U);
    msg.setSourceEntity(124U);
    msg.setDestination(55999U);
    msg.setDestinationEntity(120U);
    msg.name.assign("EOWRRBUVFZYBTVCLVCKRKYEWUPATCRJEA");
    msg.value = 183U;

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
    msg.setTimeStamp(0.09046745852394977);
    msg.setSource(61511U);
    msg.setSourceEntity(52U);
    msg.setDestination(27275U);
    msg.setDestinationEntity(107U);
    msg.name.assign("IPFUBRBVJIZVGXGXTIUWOSDSPJYEOQKVUUKKIHCMVJCMXEOANQFAPAIUTNVAQJCTJLWPPIWWYVGNQVUHLQXWOXPLMDSYXCSHJYBKBHEWMWAOSREQIEDMVSSBRBQDWF");

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
    msg.setTimeStamp(0.24583929727892595);
    msg.setSource(3580U);
    msg.setSourceEntity(112U);
    msg.setDestination(48161U);
    msg.setDestinationEntity(214U);
    msg.name.assign("DONFQHRXUJUXAGEJRAVKFZDYEGOWWMJLDITNIOKNPQODOPCBOLMOZLCPIQBDFUWXXTECTGTRKPLFYYHAZCDBSSSYERTBWDXCJVGQPSIVZENVRUVALLYPSJWRUGYJQQWGMFNHXYEYRCEVMZFPFMVDYAGTHGUCPWQBBRBWNNHCHHBLUZDIIZXUMJNFAAJAPTTLAGEEUIZOSHKNKQCXXIJSSIFCBMOVKYLTWJ");

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
    msg.setTimeStamp(0.2298713320142638);
    msg.setSource(38051U);
    msg.setSourceEntity(226U);
    msg.setDestination(55753U);
    msg.setDestinationEntity(61U);
    msg.name.assign("VPKZBYRMJYBVIJOTYGBTCXDGMUWCOVXINRGFHIBRDY");

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
    msg.setTimeStamp(0.037665224764118266);
    msg.setSource(40039U);
    msg.setSourceEntity(199U);
    msg.setDestination(15942U);
    msg.setDestinationEntity(49U);
    msg.name.assign("BATQXDSINPXPIXIYHCNSMZRVGCGFBZVOTJMGOUCLPZMAYVZNXPRDIGBIATFJVKLSMYWRSYTWXLGUWXAKPKKSRCSZEMHUOLLYMYYWPZTIMJRHLGEWJSUXDRCOEBOENLCPWHFFRARHUEIRKVMNEGZHNQQVFDMBQSQBCHLTPQNBJTEMSDZNOFCKDLZKKCDUIZJQWYJWQTOPHUKWFCBFESGLQUUXUBAGVWPNXVTVFOXOA");
    msg.value = 197U;

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
    msg.setTimeStamp(0.20365762640284446);
    msg.setSource(13725U);
    msg.setSourceEntity(69U);
    msg.setDestination(61216U);
    msg.setDestinationEntity(80U);
    msg.name.assign("ESXMYFQPVOFFTOCHGLUKVJEKOOULCDVZZXQSJJKBYOVHDAAUPRFCYPWMLBMMIJIBJMMSGPQWANVBUWTKNSEWTAHDCXLKNUHUOJNXGHFYVBCNTLLTBPRZGZARQQBGDVVEHQWDZYGQVPICAMSEHEFNGWQTXMMSNPRDEIXROFNRYWRINUXITUTSAZAEKZFYSJLAVEPYOIDWSPQY");
    msg.value = 117U;

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
    msg.setTimeStamp(0.1319896246348905);
    msg.setSource(6149U);
    msg.setSourceEntity(166U);
    msg.setDestination(42555U);
    msg.setDestinationEntity(147U);
    msg.name.assign("JZHBWQIEFJUIDACVFWARSUQLHZCOKEQEFBZIULKTQMOKMNDTTNCW");
    msg.value = 130U;

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
    msg.setTimeStamp(0.7948468372211341);
    msg.setSource(25294U);
    msg.setSourceEntity(70U);
    msg.setDestination(24534U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.34170124822052406;
    msg.lon = 0.9759345611128963;
    msg.height = 0.07242139283550442;
    msg.x = 0.4396629053204043;
    msg.y = 0.13563133356432333;
    msg.z = 0.15174513341632567;
    msg.phi = 0.7320383245623778;
    msg.theta = 0.3410820656870326;
    msg.psi = 0.5003838259953678;
    msg.u = 0.8243103245706718;
    msg.v = 0.34660594046510307;
    msg.w = 0.5096895266590287;
    msg.vx = 0.8418267730544784;
    msg.vy = 0.21330008919410703;
    msg.vz = 0.7122082479644112;
    msg.p = 0.19196288588240285;
    msg.q = 0.806067574842755;
    msg.r = 0.9581933181922265;
    msg.depth = 0.8883190620609924;
    msg.alt = 0.8082174869752481;

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
    msg.setTimeStamp(0.1964421123195409);
    msg.setSource(13013U);
    msg.setSourceEntity(248U);
    msg.setDestination(36896U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.23175866482490048;
    msg.lon = 0.4206564119174211;
    msg.height = 0.7213382322768368;
    msg.x = 0.994806650847206;
    msg.y = 0.6205199523349731;
    msg.z = 0.6486287866749122;
    msg.phi = 0.06793045330019742;
    msg.theta = 0.7376930952303545;
    msg.psi = 0.32508874999057646;
    msg.u = 0.40224563095931776;
    msg.v = 0.5077346931569565;
    msg.w = 0.8936885150851908;
    msg.vx = 0.7934926959669443;
    msg.vy = 0.29933618794288197;
    msg.vz = 0.2262383613562866;
    msg.p = 0.20314932441537348;
    msg.q = 0.7818369889515533;
    msg.r = 0.9237595819756911;
    msg.depth = 0.6644434041088537;
    msg.alt = 0.8573953023466642;

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
    msg.setTimeStamp(0.9314563124936927);
    msg.setSource(52752U);
    msg.setSourceEntity(178U);
    msg.setDestination(1393U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.2088428010615292;
    msg.lon = 0.42783492405380663;
    msg.height = 0.7259413350385069;
    msg.x = 0.26596922795454636;
    msg.y = 0.03297061824635383;
    msg.z = 0.029949285678920745;
    msg.phi = 0.5839014690489004;
    msg.theta = 0.816841679202129;
    msg.psi = 0.043230537041096584;
    msg.u = 0.36930261609274184;
    msg.v = 0.9809736813147026;
    msg.w = 0.5505462119908843;
    msg.vx = 0.030578268862647695;
    msg.vy = 0.9110708689467522;
    msg.vz = 0.7117639294159086;
    msg.p = 0.39192238501553145;
    msg.q = 0.7862808787607788;
    msg.r = 0.20643977974768013;
    msg.depth = 0.6166182567503157;
    msg.alt = 0.2568638625534143;

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
    msg.setTimeStamp(0.816035579552303);
    msg.setSource(37666U);
    msg.setSourceEntity(243U);
    msg.setDestination(16066U);
    msg.setDestinationEntity(149U);
    msg.x = 0.3113491623202902;
    msg.y = 0.9041461942991849;
    msg.z = 0.013087816804771002;

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
    msg.setTimeStamp(0.18966223619781242);
    msg.setSource(60739U);
    msg.setSourceEntity(167U);
    msg.setDestination(53875U);
    msg.setDestinationEntity(25U);
    msg.x = 0.30210093764394075;
    msg.y = 0.4594499224030224;
    msg.z = 0.5138574589416627;

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
    msg.setTimeStamp(0.7845905986069079);
    msg.setSource(10883U);
    msg.setSourceEntity(137U);
    msg.setDestination(64955U);
    msg.setDestinationEntity(142U);
    msg.x = 0.11480405714791886;
    msg.y = 0.9165423675240812;
    msg.z = 0.2935366905260831;

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
    msg.setTimeStamp(0.8409829122964078);
    msg.setSource(16580U);
    msg.setSourceEntity(63U);
    msg.setDestination(144U);
    msg.setDestinationEntity(72U);
    msg.value = 0.06920982510324947;

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
    msg.setTimeStamp(0.6221939678459819);
    msg.setSource(19544U);
    msg.setSourceEntity(118U);
    msg.setDestination(53477U);
    msg.setDestinationEntity(157U);
    msg.value = 0.21844653311836826;

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
    msg.setTimeStamp(0.03300490331820616);
    msg.setSource(51547U);
    msg.setSourceEntity(220U);
    msg.setDestination(44053U);
    msg.setDestinationEntity(208U);
    msg.value = 0.9675215662872726;

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
    msg.setTimeStamp(0.5470304510151828);
    msg.setSource(1527U);
    msg.setSourceEntity(134U);
    msg.setDestination(4570U);
    msg.setDestinationEntity(93U);
    msg.value = 0.10328563555412396;

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
    msg.setTimeStamp(0.648294894379445);
    msg.setSource(40138U);
    msg.setSourceEntity(171U);
    msg.setDestination(43365U);
    msg.setDestinationEntity(11U);
    msg.value = 0.7737944342688835;

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
    msg.setTimeStamp(0.8909432316359727);
    msg.setSource(22711U);
    msg.setSourceEntity(70U);
    msg.setDestination(58952U);
    msg.setDestinationEntity(40U);
    msg.value = 0.19850408671487407;

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
    msg.setTimeStamp(0.23370801584117262);
    msg.setSource(21158U);
    msg.setSourceEntity(116U);
    msg.setDestination(54642U);
    msg.setDestinationEntity(87U);
    msg.x = 0.011411717976059221;
    msg.y = 0.9906602654150216;
    msg.z = 0.8198098988123205;
    msg.phi = 0.9966620644987694;
    msg.theta = 0.6261072801105296;
    msg.psi = 0.612843948272545;
    msg.p = 0.9087680378215002;
    msg.q = 0.8919268117928855;
    msg.r = 0.7875102608735975;
    msg.u = 0.014775725525218886;
    msg.v = 0.6494367299533873;
    msg.w = 0.2815824705738731;
    msg.bias_psi = 0.7234785897307201;
    msg.bias_r = 0.6923668806309247;

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
    msg.setTimeStamp(0.31692836882409336);
    msg.setSource(32355U);
    msg.setSourceEntity(102U);
    msg.setDestination(37801U);
    msg.setDestinationEntity(173U);
    msg.x = 0.34404141556337;
    msg.y = 0.8600617462894251;
    msg.z = 0.21237207172663963;
    msg.phi = 0.7428384107911731;
    msg.theta = 0.7103442969387869;
    msg.psi = 0.5108268121736237;
    msg.p = 0.6053675883082885;
    msg.q = 0.5786413653516524;
    msg.r = 0.6071195163117403;
    msg.u = 0.08080907858080366;
    msg.v = 0.8607266957734908;
    msg.w = 0.8913879452234907;
    msg.bias_psi = 0.7707512721879353;
    msg.bias_r = 0.8682270413701617;

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
    msg.setTimeStamp(0.7994699466813585);
    msg.setSource(19994U);
    msg.setSourceEntity(247U);
    msg.setDestination(11309U);
    msg.setDestinationEntity(185U);
    msg.x = 0.744118830987581;
    msg.y = 0.8508173717855443;
    msg.z = 0.7162948214833602;
    msg.phi = 0.9877781525187687;
    msg.theta = 0.31518669702002955;
    msg.psi = 0.2984761058276707;
    msg.p = 0.03656470440662585;
    msg.q = 0.8837071084420043;
    msg.r = 0.5908049215766492;
    msg.u = 0.64481586543243;
    msg.v = 0.4781354462620986;
    msg.w = 0.3635760587991892;
    msg.bias_psi = 0.06940645955021052;
    msg.bias_r = 0.10162140783085827;

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
    msg.setTimeStamp(0.4718220777758175);
    msg.setSource(1287U);
    msg.setSourceEntity(232U);
    msg.setDestination(10226U);
    msg.setDestinationEntity(23U);
    msg.bias_psi = 0.7699762572849898;
    msg.bias_r = 0.3161621462429599;
    msg.cog = 0.06000343034585531;
    msg.cyaw = 0.8891862348775194;
    msg.lbl_rej_level = 0.7388181200471251;
    msg.gps_rej_level = 0.3515061980624692;
    msg.custom_x = 0.08081493814253438;
    msg.custom_y = 0.8212635703925689;
    msg.custom_z = 0.38483340743567374;

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
    msg.setTimeStamp(0.029463022188993437);
    msg.setSource(710U);
    msg.setSourceEntity(235U);
    msg.setDestination(21146U);
    msg.setDestinationEntity(160U);
    msg.bias_psi = 0.1960583240053;
    msg.bias_r = 0.14566478706946384;
    msg.cog = 0.5567431674377746;
    msg.cyaw = 0.7090484701850727;
    msg.lbl_rej_level = 0.7117558846101448;
    msg.gps_rej_level = 0.4988464913146943;
    msg.custom_x = 0.04556524040073162;
    msg.custom_y = 0.09435083583990367;
    msg.custom_z = 0.22014240712636957;

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
    msg.setTimeStamp(0.0688749323410126);
    msg.setSource(4824U);
    msg.setSourceEntity(112U);
    msg.setDestination(12628U);
    msg.setDestinationEntity(219U);
    msg.bias_psi = 0.16169621410616486;
    msg.bias_r = 0.7106870335180754;
    msg.cog = 0.39070563289215543;
    msg.cyaw = 0.17065971930220225;
    msg.lbl_rej_level = 0.6555742737239956;
    msg.gps_rej_level = 0.9531398407705134;
    msg.custom_x = 0.17280002013744178;
    msg.custom_y = 0.48992162717716214;
    msg.custom_z = 0.3235347256147848;

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
    msg.setTimeStamp(0.3744204347957979);
    msg.setSource(34419U);
    msg.setSourceEntity(210U);
    msg.setDestination(64760U);
    msg.setDestinationEntity(49U);
    msg.utc_time = 0.13315111594109164;
    msg.reason = 35U;

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
    msg.setTimeStamp(0.6816987272445724);
    msg.setSource(39226U);
    msg.setSourceEntity(7U);
    msg.setDestination(36505U);
    msg.setDestinationEntity(19U);
    msg.utc_time = 0.9517708726620302;
    msg.reason = 216U;

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
    msg.setTimeStamp(0.04799990728328529);
    msg.setSource(59719U);
    msg.setSourceEntity(118U);
    msg.setDestination(36488U);
    msg.setDestinationEntity(178U);
    msg.utc_time = 0.6744027249504593;
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
    msg.setTimeStamp(0.6345647221532635);
    msg.setSource(28931U);
    msg.setSourceEntity(59U);
    msg.setDestination(63014U);
    msg.setDestinationEntity(230U);
    msg.id = 29U;
    msg.range = 0.43389940042454;
    msg.acceptance = 74U;

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
    msg.setTimeStamp(0.5560485219496242);
    msg.setSource(51039U);
    msg.setSourceEntity(86U);
    msg.setDestination(15505U);
    msg.setDestinationEntity(60U);
    msg.id = 96U;
    msg.range = 0.05713879864600002;
    msg.acceptance = 6U;

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
    msg.setTimeStamp(0.5102133828319388);
    msg.setSource(64801U);
    msg.setSourceEntity(17U);
    msg.setDestination(11948U);
    msg.setDestinationEntity(217U);
    msg.id = 240U;
    msg.range = 0.7357817778074582;
    msg.acceptance = 112U;

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
    msg.setTimeStamp(0.7863864803490017);
    msg.setSource(26829U);
    msg.setSourceEntity(64U);
    msg.setDestination(52117U);
    msg.setDestinationEntity(74U);
    msg.type = 91U;
    msg.reason = 195U;
    msg.value = 0.23066072920192582;
    msg.timestep = 0.20197811942346544;

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
    msg.setTimeStamp(0.8613879109031616);
    msg.setSource(2628U);
    msg.setSourceEntity(218U);
    msg.setDestination(64212U);
    msg.setDestinationEntity(189U);
    msg.type = 75U;
    msg.reason = 96U;
    msg.value = 0.1284343870108925;
    msg.timestep = 0.6219273873161106;

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
    msg.setTimeStamp(0.5998132085531159);
    msg.setSource(4790U);
    msg.setSourceEntity(179U);
    msg.setDestination(26625U);
    msg.setDestinationEntity(8U);
    msg.type = 29U;
    msg.reason = 63U;
    msg.value = 0.9733128763085869;
    msg.timestep = 0.3078709977564965;

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
    msg.setTimeStamp(0.35726066086704655);
    msg.setSource(60362U);
    msg.setSourceEntity(76U);
    msg.setDestination(61556U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.7176528398859086);
    msg.setSource(17961U);
    msg.setSourceEntity(157U);
    msg.setDestination(26895U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.7826110169686167);
    msg.setSource(12573U);
    msg.setSourceEntity(231U);
    msg.setDestination(18727U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.6589677707438143);
    msg.setSource(46677U);
    msg.setSourceEntity(57U);
    msg.setDestination(26283U);
    msg.setDestinationEntity(153U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OZZNCDXCMXICQAUOKWFRQCWAOAPJYYRYVHOZTIHDFRRCSZWMIRSKUU");
    tmp_msg_0.lat = 0.7409407679769766;
    tmp_msg_0.lon = 0.46225537612656087;
    tmp_msg_0.depth = 0.3031580638555589;
    tmp_msg_0.query_channel = 114U;
    tmp_msg_0.reply_channel = 50U;
    tmp_msg_0.transponder_delay = 28U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9195469600771815;
    msg.y = 0.7232048894954625;
    msg.var_x = 0.7853235171393121;
    msg.var_y = 0.4343546158317416;
    msg.distance = 0.17242887724929634;

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
    msg.setTimeStamp(0.14383267544860734);
    msg.setSource(398U);
    msg.setSourceEntity(83U);
    msg.setDestination(13352U);
    msg.setDestinationEntity(188U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YMZJUGIQBNKNUQPNUQECUBUNIMWRODWTKKJCGBAWJDVEJGCKEIDEFQSMHVUTNLYLGPXFSKGQPNKWHRLZAJPPVLCFYUAMVTYMRFTXQR");
    tmp_msg_0.lat = 0.9196656614125834;
    tmp_msg_0.lon = 0.5198853048321709;
    tmp_msg_0.depth = 0.9475436764787162;
    tmp_msg_0.query_channel = 42U;
    tmp_msg_0.reply_channel = 187U;
    tmp_msg_0.transponder_delay = 25U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6432522429836235;
    msg.y = 0.49227101015282293;
    msg.var_x = 0.5667420188009256;
    msg.var_y = 0.37268359158267006;
    msg.distance = 0.46448879384491004;

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
    msg.setTimeStamp(0.7450676138195502);
    msg.setSource(33855U);
    msg.setSourceEntity(65U);
    msg.setDestination(22072U);
    msg.setDestinationEntity(67U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HYRZXUSDTHGRDGNDLCQPNVWZZWBACWBAQLDSEAJPNDJHIMNMMUXPOKIJDOIBPMVEQHCUGJSPLLRQMPHWVGVCVGXENXRQIHXBJMDKIGTFU");
    tmp_msg_0.lat = 0.23950431396699812;
    tmp_msg_0.lon = 0.6235060908699003;
    tmp_msg_0.depth = 0.9678564159041133;
    tmp_msg_0.query_channel = 63U;
    tmp_msg_0.reply_channel = 247U;
    tmp_msg_0.transponder_delay = 73U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8908025078236391;
    msg.y = 0.7415587743210452;
    msg.var_x = 0.770635241085568;
    msg.var_y = 0.007996537732477216;
    msg.distance = 0.7090156305748543;

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
    msg.setTimeStamp(0.13863641028116147);
    msg.setSource(46174U);
    msg.setSourceEntity(93U);
    msg.setDestination(9956U);
    msg.setDestinationEntity(173U);
    msg.state = 234U;

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
    msg.setTimeStamp(0.040686168352960794);
    msg.setSource(5003U);
    msg.setSourceEntity(27U);
    msg.setDestination(11062U);
    msg.setDestinationEntity(107U);
    msg.state = 75U;

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
    msg.setTimeStamp(0.05272391461717951);
    msg.setSource(5962U);
    msg.setSourceEntity(23U);
    msg.setDestination(24149U);
    msg.setDestinationEntity(246U);
    msg.state = 26U;

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
    msg.setTimeStamp(0.818373320940385);
    msg.setSource(14341U);
    msg.setSourceEntity(67U);
    msg.setDestination(31322U);
    msg.setDestinationEntity(142U);
    msg.x = 0.12702821726798974;
    msg.y = 0.40417128170175176;
    msg.z = 0.07518274859643548;

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
    msg.setTimeStamp(0.3812295978375284);
    msg.setSource(2759U);
    msg.setSourceEntity(102U);
    msg.setDestination(42994U);
    msg.setDestinationEntity(194U);
    msg.x = 0.6664197872038644;
    msg.y = 0.4805820777925406;
    msg.z = 0.3190372650051583;

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
    msg.setTimeStamp(0.06008058945441275);
    msg.setSource(37901U);
    msg.setSourceEntity(57U);
    msg.setDestination(14324U);
    msg.setDestinationEntity(179U);
    msg.x = 0.60693748036009;
    msg.y = 0.31396721000936867;
    msg.z = 0.7019387168989218;

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
    msg.setTimeStamp(0.3805666541186493);
    msg.setSource(54265U);
    msg.setSourceEntity(237U);
    msg.setDestination(8577U);
    msg.setDestinationEntity(116U);
    msg.value = 0.7410635538553423;

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
    msg.setTimeStamp(0.8310160284222314);
    msg.setSource(30024U);
    msg.setSourceEntity(79U);
    msg.setDestination(46536U);
    msg.setDestinationEntity(190U);
    msg.value = 0.8864647914715886;

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
    msg.setTimeStamp(0.1281111051910626);
    msg.setSource(16539U);
    msg.setSourceEntity(252U);
    msg.setDestination(27453U);
    msg.setDestinationEntity(107U);
    msg.value = 0.37341228574567875;

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
    msg.setTimeStamp(0.15653282538161417);
    msg.setSource(29200U);
    msg.setSourceEntity(0U);
    msg.setDestination(23450U);
    msg.setDestinationEntity(113U);
    msg.value = 0.6050266494089434;
    msg.z_units = 153U;

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
    msg.setTimeStamp(0.9747226597171484);
    msg.setSource(36182U);
    msg.setSourceEntity(76U);
    msg.setDestination(63273U);
    msg.setDestinationEntity(61U);
    msg.value = 0.04423437585281931;
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
    msg.setTimeStamp(0.6236599727358857);
    msg.setSource(45291U);
    msg.setSourceEntity(175U);
    msg.setDestination(30174U);
    msg.setDestinationEntity(213U);
    msg.value = 0.6744255406954652;
    msg.z_units = 215U;

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
    msg.setTimeStamp(0.6146567983252819);
    msg.setSource(65019U);
    msg.setSourceEntity(135U);
    msg.setDestination(35280U);
    msg.setDestinationEntity(176U);
    msg.value = 0.1070940054270677;
    msg.speed_units = 77U;

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
    msg.setTimeStamp(0.89559580232533);
    msg.setSource(48222U);
    msg.setSourceEntity(120U);
    msg.setDestination(9542U);
    msg.setDestinationEntity(190U);
    msg.value = 0.4279807893398093;
    msg.speed_units = 23U;

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
    msg.setTimeStamp(0.14422905954037868);
    msg.setSource(6096U);
    msg.setSourceEntity(192U);
    msg.setDestination(7436U);
    msg.setDestinationEntity(81U);
    msg.value = 0.4981099734914165;
    msg.speed_units = 150U;

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
    msg.setTimeStamp(0.37335632769888505);
    msg.setSource(46608U);
    msg.setSourceEntity(2U);
    msg.setDestination(9460U);
    msg.setDestinationEntity(83U);
    msg.value = 0.7501911795886596;

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
    msg.setTimeStamp(0.9285029920274225);
    msg.setSource(53537U);
    msg.setSourceEntity(118U);
    msg.setDestination(22691U);
    msg.setDestinationEntity(14U);
    msg.value = 0.28680083492301034;

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
    msg.setTimeStamp(0.03543035633014935);
    msg.setSource(49836U);
    msg.setSourceEntity(49U);
    msg.setDestination(28016U);
    msg.setDestinationEntity(12U);
    msg.value = 0.06871655996747927;

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
    msg.setTimeStamp(0.4364511585748463);
    msg.setSource(38898U);
    msg.setSourceEntity(73U);
    msg.setDestination(49239U);
    msg.setDestinationEntity(152U);
    msg.value = 0.888396982712905;

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
    msg.setTimeStamp(0.42086767610566944);
    msg.setSource(64176U);
    msg.setSourceEntity(203U);
    msg.setDestination(40037U);
    msg.setDestinationEntity(27U);
    msg.value = 0.25403750910449285;

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
    msg.setTimeStamp(0.1216448256947037);
    msg.setSource(37876U);
    msg.setSourceEntity(85U);
    msg.setDestination(3352U);
    msg.setDestinationEntity(125U);
    msg.value = 0.17892224706803106;

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
    msg.setTimeStamp(0.8450536250616318);
    msg.setSource(37344U);
    msg.setSourceEntity(219U);
    msg.setDestination(6010U);
    msg.setDestinationEntity(159U);
    msg.value = 0.3463873261100522;

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
    msg.setTimeStamp(0.8377536183035059);
    msg.setSource(35750U);
    msg.setSourceEntity(10U);
    msg.setDestination(43916U);
    msg.setDestinationEntity(31U);
    msg.value = 0.27973569972687173;

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
    msg.setTimeStamp(0.6463124858303928);
    msg.setSource(2600U);
    msg.setSourceEntity(251U);
    msg.setDestination(46777U);
    msg.setDestinationEntity(227U);
    msg.value = 0.41789305009027156;

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
    msg.setTimeStamp(0.5190673193980015);
    msg.setSource(417U);
    msg.setSourceEntity(17U);
    msg.setDestination(26416U);
    msg.setDestinationEntity(187U);
    msg.start_lat = 0.623173933769518;
    msg.start_lon = 0.7580769365130712;
    msg.start_z = 0.10592891250172642;
    msg.start_z_units = 221U;
    msg.end_lat = 0.2779649164776955;
    msg.end_lon = 0.7111608544209607;
    msg.end_z = 0.8059051814833106;
    msg.end_z_units = 103U;
    msg.speed = 0.5482330919142868;
    msg.speed_units = 123U;
    msg.lradius = 0.016369857822466805;
    msg.flags = 24U;

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
    msg.setTimeStamp(0.2647377313727377);
    msg.setSource(13620U);
    msg.setSourceEntity(239U);
    msg.setDestination(42142U);
    msg.setDestinationEntity(221U);
    msg.start_lat = 0.21734511309181503;
    msg.start_lon = 0.9591477558322574;
    msg.start_z = 0.5318586406428554;
    msg.start_z_units = 79U;
    msg.end_lat = 0.14127794582031183;
    msg.end_lon = 0.16155328902842392;
    msg.end_z = 0.31087416824499803;
    msg.end_z_units = 79U;
    msg.speed = 0.3028732898613138;
    msg.speed_units = 74U;
    msg.lradius = 0.07601651385029817;
    msg.flags = 107U;

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
    msg.setTimeStamp(0.7533177530877724);
    msg.setSource(29668U);
    msg.setSourceEntity(231U);
    msg.setDestination(59771U);
    msg.setDestinationEntity(60U);
    msg.start_lat = 0.02378835033788551;
    msg.start_lon = 0.9586288095004957;
    msg.start_z = 0.20068537000369524;
    msg.start_z_units = 113U;
    msg.end_lat = 0.007137002606371956;
    msg.end_lon = 0.26792791402153615;
    msg.end_z = 0.37725248996503224;
    msg.end_z_units = 38U;
    msg.speed = 0.23769244316380522;
    msg.speed_units = 11U;
    msg.lradius = 0.12225680530896732;
    msg.flags = 168U;

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
    msg.setTimeStamp(0.50059835254183);
    msg.setSource(16502U);
    msg.setSourceEntity(39U);
    msg.setDestination(41505U);
    msg.setDestinationEntity(19U);
    msg.x = 0.04469411980248117;
    msg.y = 0.9832474237367707;
    msg.z = 0.9856808377818304;
    msg.k = 0.41251586975839605;
    msg.m = 0.1391540707590101;
    msg.n = 0.8488813358940935;
    msg.flags = 76U;

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
    msg.setTimeStamp(0.7148748746291451);
    msg.setSource(32968U);
    msg.setSourceEntity(187U);
    msg.setDestination(46795U);
    msg.setDestinationEntity(27U);
    msg.x = 0.4865523095162543;
    msg.y = 0.23496162848795332;
    msg.z = 0.7126621169484245;
    msg.k = 0.9652750411042794;
    msg.m = 0.7422246001368138;
    msg.n = 0.7296208200699232;
    msg.flags = 217U;

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
    msg.setTimeStamp(0.10248715537770581);
    msg.setSource(44393U);
    msg.setSourceEntity(96U);
    msg.setDestination(48700U);
    msg.setDestinationEntity(199U);
    msg.x = 0.003967526811837319;
    msg.y = 0.38929573322369193;
    msg.z = 0.07992153069098229;
    msg.k = 0.3130112950030993;
    msg.m = 0.932495002959511;
    msg.n = 0.8315911362915611;
    msg.flags = 75U;

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
    msg.setTimeStamp(0.2891891092542952);
    msg.setSource(20173U);
    msg.setSourceEntity(210U);
    msg.setDestination(22227U);
    msg.setDestinationEntity(8U);
    msg.value = 0.03709909594037064;

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
    msg.setTimeStamp(0.09634498225320154);
    msg.setSource(30971U);
    msg.setSourceEntity(0U);
    msg.setDestination(41622U);
    msg.setDestinationEntity(218U);
    msg.value = 0.3930611724467816;

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
    msg.setTimeStamp(0.9964506493288885);
    msg.setSource(44727U);
    msg.setSourceEntity(57U);
    msg.setDestination(11144U);
    msg.setDestinationEntity(254U);
    msg.value = 0.3426193855940435;

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
    msg.setTimeStamp(0.06802171818162872);
    msg.setSource(46711U);
    msg.setSourceEntity(92U);
    msg.setDestination(14220U);
    msg.setDestinationEntity(116U);
    msg.u = 0.2600623683642346;
    msg.v = 0.8965963020556769;
    msg.w = 0.314626817460238;
    msg.p = 0.9453881128976551;
    msg.q = 0.6693892729069082;
    msg.r = 0.42332181616687325;
    msg.flags = 185U;

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
    msg.setTimeStamp(0.6255571465767181);
    msg.setSource(20125U);
    msg.setSourceEntity(9U);
    msg.setDestination(9215U);
    msg.setDestinationEntity(145U);
    msg.u = 0.35426040711022366;
    msg.v = 0.9287137503041285;
    msg.w = 0.7032236772572783;
    msg.p = 0.16358648368502815;
    msg.q = 0.4436848641286737;
    msg.r = 0.4181364614565888;
    msg.flags = 187U;

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
    msg.setTimeStamp(0.256660653302791);
    msg.setSource(22306U);
    msg.setSourceEntity(160U);
    msg.setDestination(19162U);
    msg.setDestinationEntity(219U);
    msg.u = 0.7316374022295896;
    msg.v = 0.996605481696296;
    msg.w = 0.421283579997602;
    msg.p = 0.8159107588109978;
    msg.q = 0.49374959187308165;
    msg.r = 0.1892551532826876;
    msg.flags = 148U;

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
    msg.setTimeStamp(0.28548651184480767);
    msg.setSource(26214U);
    msg.setSourceEntity(79U);
    msg.setDestination(26773U);
    msg.setDestinationEntity(146U);
    msg.start_lat = 0.16639982393262853;
    msg.start_lon = 0.2971704715522173;
    msg.start_z = 0.41107591367319085;
    msg.start_z_units = 55U;
    msg.end_lat = 0.9361481321090301;
    msg.end_lon = 0.16495248056548217;
    msg.end_z = 0.2753077491165755;
    msg.end_z_units = 0U;
    msg.lradius = 0.6029248908135973;
    msg.flags = 58U;
    msg.x = 0.01653917422344564;
    msg.y = 0.4383582464079603;
    msg.z = 0.3409531600706531;
    msg.vx = 0.8580680798316712;
    msg.vy = 0.7238421691233327;
    msg.vz = 0.7297277696400271;
    msg.course_error = 0.5569051849777568;
    msg.eta = 11390U;

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
    msg.setTimeStamp(0.7190047744194322);
    msg.setSource(41248U);
    msg.setSourceEntity(82U);
    msg.setDestination(40384U);
    msg.setDestinationEntity(227U);
    msg.start_lat = 0.45939367577306023;
    msg.start_lon = 0.11236528882219055;
    msg.start_z = 0.47377370080320014;
    msg.start_z_units = 98U;
    msg.end_lat = 0.912801225152939;
    msg.end_lon = 0.6916103969529985;
    msg.end_z = 0.36986748074957143;
    msg.end_z_units = 11U;
    msg.lradius = 0.8047413468123829;
    msg.flags = 213U;
    msg.x = 0.16811207473160994;
    msg.y = 0.7724261820351147;
    msg.z = 0.2223224878984431;
    msg.vx = 0.3693216409255925;
    msg.vy = 0.8903871435282018;
    msg.vz = 0.03787268488498896;
    msg.course_error = 0.5014221236595799;
    msg.eta = 30568U;

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
    msg.setTimeStamp(0.1676948792637446);
    msg.setSource(3791U);
    msg.setSourceEntity(134U);
    msg.setDestination(18189U);
    msg.setDestinationEntity(161U);
    msg.start_lat = 0.4653738055961265;
    msg.start_lon = 0.6471486801722273;
    msg.start_z = 0.7723401828192653;
    msg.start_z_units = 53U;
    msg.end_lat = 0.07042762235477507;
    msg.end_lon = 0.4768772222907308;
    msg.end_z = 0.2573765062707054;
    msg.end_z_units = 137U;
    msg.lradius = 0.07167354488096167;
    msg.flags = 78U;
    msg.x = 0.7913707575871509;
    msg.y = 0.5000101230109665;
    msg.z = 0.9991047615776544;
    msg.vx = 0.0017938955432668102;
    msg.vy = 0.8247468230492615;
    msg.vz = 0.6321202372026893;
    msg.course_error = 0.32446330951536595;
    msg.eta = 43799U;

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
    msg.setTimeStamp(0.3791638746645082);
    msg.setSource(18982U);
    msg.setSourceEntity(114U);
    msg.setDestination(47304U);
    msg.setDestinationEntity(185U);
    msg.k = 0.5754545149456415;
    msg.m = 0.7196278502469081;
    msg.n = 0.1433232092972363;

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
    msg.setTimeStamp(0.12629936040253475);
    msg.setSource(61262U);
    msg.setSourceEntity(58U);
    msg.setDestination(21847U);
    msg.setDestinationEntity(62U);
    msg.k = 0.4767634370322775;
    msg.m = 0.0947918088035905;
    msg.n = 0.44236948664377684;

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
    msg.setTimeStamp(0.22590901264667707);
    msg.setSource(47328U);
    msg.setSourceEntity(100U);
    msg.setDestination(82U);
    msg.setDestinationEntity(164U);
    msg.k = 0.6096745756510786;
    msg.m = 0.30938624173847207;
    msg.n = 0.602209604224006;

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
    msg.setTimeStamp(0.6298989954841326);
    msg.setSource(54833U);
    msg.setSourceEntity(247U);
    msg.setDestination(45042U);
    msg.setDestinationEntity(87U);
    msg.p = 0.43062436148026506;
    msg.i = 0.16944422037508156;
    msg.d = 0.34982039976517165;
    msg.a = 0.01690606583984755;

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
    msg.setTimeStamp(0.25454015422463616);
    msg.setSource(33102U);
    msg.setSourceEntity(210U);
    msg.setDestination(61801U);
    msg.setDestinationEntity(187U);
    msg.p = 0.9140615756943705;
    msg.i = 0.24001162220277827;
    msg.d = 0.158269397581828;
    msg.a = 0.682441820150326;

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
    msg.setTimeStamp(0.6077873674288312);
    msg.setSource(19720U);
    msg.setSourceEntity(7U);
    msg.setDestination(35517U);
    msg.setDestinationEntity(162U);
    msg.p = 0.8538117736315334;
    msg.i = 0.39332436045234886;
    msg.d = 0.3280042300415199;
    msg.a = 0.6079647481525116;

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
    msg.setTimeStamp(0.48267525262709665);
    msg.setSource(54423U);
    msg.setSourceEntity(94U);
    msg.setDestination(54830U);
    msg.setDestinationEntity(226U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.36577586057902933);
    msg.setSource(33440U);
    msg.setSourceEntity(71U);
    msg.setDestination(268U);
    msg.setDestinationEntity(6U);
    msg.op = 89U;

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
    msg.setTimeStamp(0.9162089063596517);
    msg.setSource(60009U);
    msg.setSourceEntity(66U);
    msg.setDestination(49984U);
    msg.setDestinationEntity(157U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.23245483626950358);
    msg.setSource(30790U);
    msg.setSourceEntity(230U);
    msg.setDestination(31145U);
    msg.setDestinationEntity(99U);
    msg.timeout = 1063U;
    msg.lat = 0.1736982577040055;
    msg.lon = 0.628737551556335;
    msg.z = 0.1382639727921795;
    msg.z_units = 119U;
    msg.speed = 0.4776536044769194;
    msg.speed_units = 73U;
    msg.roll = 0.4905450673093611;
    msg.pitch = 0.6803263400322848;
    msg.yaw = 0.1347972701402741;
    msg.custom.assign("VOJCLFXMIGMERZUPDEGRZTAZKZOPXUSADPPFSGFZBOOCPUWCYBNGAGBKSYQVADJZKDPWHAILXIXHVYTKKKYCSDNYYMNNTSCJIRDXSMNZCOXAOWJXUGIEMQRDVJVPTOTRLEAFHWVFTCKAMSPBMBYHGLOWE");

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
    msg.setTimeStamp(0.033646878984255);
    msg.setSource(21975U);
    msg.setSourceEntity(212U);
    msg.setDestination(46498U);
    msg.setDestinationEntity(148U);
    msg.timeout = 1727U;
    msg.lat = 0.875921917727457;
    msg.lon = 0.8146951779530563;
    msg.z = 0.9225571061161623;
    msg.z_units = 88U;
    msg.speed = 0.6956089461976805;
    msg.speed_units = 225U;
    msg.roll = 0.11803236173765663;
    msg.pitch = 0.485521844532694;
    msg.yaw = 0.8595790286609514;
    msg.custom.assign("HVTRDFSPDYDZTAHLJGCFDYMUYN");

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
    msg.setTimeStamp(0.8563215203326622);
    msg.setSource(41505U);
    msg.setSourceEntity(29U);
    msg.setDestination(59775U);
    msg.setDestinationEntity(7U);
    msg.timeout = 22051U;
    msg.lat = 0.8359864028995426;
    msg.lon = 0.5166705992490247;
    msg.z = 0.15373633276240806;
    msg.z_units = 155U;
    msg.speed = 0.06297034050177064;
    msg.speed_units = 225U;
    msg.roll = 0.7822022434355154;
    msg.pitch = 0.602701693155573;
    msg.yaw = 0.28139405234486536;
    msg.custom.assign("XDNUFGLPDYDFMEACOKASQSBINMHEUMOQRMHHPGGMXOQWRKPXYEKCOTVDVHJTHFFYNMNDIRSUUCSATHVKAJAOOPUJXVLDABWWTOLWFHYULKUWNSXQZXZDZBERHCEVYIDJKAGLPTLCJJUTRQQMVTYJASZBYBZOKIGZCGEMNXFLWNTFWIRRANLGTDPS");

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
    msg.setTimeStamp(0.17949834999468706);
    msg.setSource(58928U);
    msg.setSourceEntity(213U);
    msg.setDestination(17017U);
    msg.setDestinationEntity(188U);
    msg.timeout = 42205U;
    msg.lat = 0.6948671697373668;
    msg.lon = 0.3321589522952805;
    msg.z = 0.6321300526528626;
    msg.z_units = 105U;
    msg.speed = 0.5573642356493558;
    msg.speed_units = 115U;
    msg.duration = 44792U;
    msg.radius = 0.3295732614881478;
    msg.flags = 26U;
    msg.custom.assign("YVBTSAKWPQLOLAMTUMEZJXG");

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
    msg.setTimeStamp(0.7298494452663894);
    msg.setSource(53074U);
    msg.setSourceEntity(188U);
    msg.setDestination(4152U);
    msg.setDestinationEntity(147U);
    msg.timeout = 60771U;
    msg.lat = 0.21075311114443485;
    msg.lon = 0.4257686243240648;
    msg.z = 0.13301510498248215;
    msg.z_units = 143U;
    msg.speed = 0.30358792257542;
    msg.speed_units = 170U;
    msg.duration = 38085U;
    msg.radius = 0.19818895018923632;
    msg.flags = 0U;
    msg.custom.assign("PQCJLVTLMCDMMSEZJWPHCLINULBFGQAUVTETQSIVAVANDEGTOLIZVXNFGXGDKTZYNSZBDFTICQYXRYRZPAFTHOQHECMWXJKJUIBYJPOHMRJRASQXVVYHXKQCPOIAMMGPHRCLENFCOSENUECWJDYBKDTLGUWIHDBHPWUKBQFZLHWYPASWCMGEIRPKJSVBMTELYRVGRRJVZQWDHBEKSUTLXAGFUYBFFAWMZOKAXDSYGIOXZOBNSI");

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
    msg.setTimeStamp(0.2109612890379703);
    msg.setSource(61458U);
    msg.setSourceEntity(40U);
    msg.setDestination(54288U);
    msg.setDestinationEntity(81U);
    msg.timeout = 13553U;
    msg.lat = 0.4452484648933148;
    msg.lon = 0.6659929095275666;
    msg.z = 0.04765408419149675;
    msg.z_units = 7U;
    msg.speed = 0.46369241407669004;
    msg.speed_units = 20U;
    msg.duration = 13313U;
    msg.radius = 0.16162142573219562;
    msg.flags = 236U;
    msg.custom.assign("XQBGXRCMFHUYBIAWVLJKDEAICRNZBVFPKFDBMVIXZCGIELEHZTNPRTFAGOSTGMEWPVXVJQPBDNIBZDKLKDQSHEHDTUIQZGAQASSYOFKDQYWXPSNUWYHQJLIUI");

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
    msg.setTimeStamp(0.15370210443851995);
    msg.setSource(62214U);
    msg.setSourceEntity(1U);
    msg.setDestination(30123U);
    msg.setDestinationEntity(127U);
    msg.custom.assign("OKFXKDMERMFFWJKRLVQKJRIHXNMKZSYIRUPEAXKGKATVGCGLMAXDBEGFVTJH");

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
    msg.setTimeStamp(0.481198840780518);
    msg.setSource(14638U);
    msg.setSourceEntity(26U);
    msg.setDestination(22564U);
    msg.setDestinationEntity(65U);
    msg.custom.assign("VOHQZWLXVJXDNMWFECSCQEPCRCCUNYHAEBVVEMAHWJBNAAYVYRBV");

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
    msg.setTimeStamp(0.17115283876105114);
    msg.setSource(53821U);
    msg.setSourceEntity(115U);
    msg.setDestination(28588U);
    msg.setDestinationEntity(92U);
    msg.custom.assign("CWCPJLBKAUHBFILWBETHSGGKXNCEDYKANSRFYQVLIWNPSEVITKPIWWAXEHXCHYQORTRJQAHDDGARDCVUYDNTDZWMNETPKNINRORQVJFLESOWJBLEDWDFMYFQUPTVEXOGPGTGOCHIOZDPKEJKCXMGSUJZRJAOKUHUPLEYZFVJIXFKTQHTZIVFBAOXHXFCAS");

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
    msg.setTimeStamp(0.4570344717379955);
    msg.setSource(28359U);
    msg.setSourceEntity(90U);
    msg.setDestination(6222U);
    msg.setDestinationEntity(155U);
    msg.timeout = 473U;
    msg.lat = 0.6203503875726585;
    msg.lon = 0.534745505833779;
    msg.z = 0.8463427585547401;
    msg.z_units = 145U;
    msg.duration = 22701U;
    msg.speed = 0.7875769971068183;
    msg.speed_units = 22U;
    msg.type = 40U;
    msg.radius = 0.9785499384733427;
    msg.length = 0.6597281897443422;
    msg.bearing = 0.5454382574263842;
    msg.direction = 47U;
    msg.custom.assign("FXRIFPXQLHNBREQJEQFCQLMUOLCLEASRZYJYBYRBRXBYZLVJPTBRUEZIOOSJGQYXTKYWXCWFONVPYHHNDRTRJCBIHKJZRUG");

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
    msg.setTimeStamp(0.9106301225304744);
    msg.setSource(16955U);
    msg.setSourceEntity(41U);
    msg.setDestination(20351U);
    msg.setDestinationEntity(41U);
    msg.timeout = 37231U;
    msg.lat = 0.850362966609573;
    msg.lon = 0.6548911424107274;
    msg.z = 0.2699472737058848;
    msg.z_units = 54U;
    msg.duration = 43300U;
    msg.speed = 0.6025386533032121;
    msg.speed_units = 137U;
    msg.type = 234U;
    msg.radius = 0.37511251367604415;
    msg.length = 0.04272698024213328;
    msg.bearing = 0.980578840252435;
    msg.direction = 191U;
    msg.custom.assign("VCWHNRMBSYBOLPQSGYXVOMAUDGJFEEZHYYNIENQOKRIGXYCABXMMIVQGNPSHTNDAUKMPWVZSILRCRCDCOHTRWKGMZZUZEDBLLZXSXWVTNLMLFDYTVI");

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
    msg.setTimeStamp(0.2190692457343283);
    msg.setSource(15503U);
    msg.setSourceEntity(192U);
    msg.setDestination(47457U);
    msg.setDestinationEntity(137U);
    msg.timeout = 6976U;
    msg.lat = 0.8938791827914906;
    msg.lon = 0.14133011700396103;
    msg.z = 0.25696561781451344;
    msg.z_units = 172U;
    msg.duration = 62475U;
    msg.speed = 0.4838296602516907;
    msg.speed_units = 212U;
    msg.type = 39U;
    msg.radius = 0.3718360621531477;
    msg.length = 0.9809564424862147;
    msg.bearing = 0.45668642186258523;
    msg.direction = 86U;
    msg.custom.assign("LXNTCBATBUSODNUGCKMIBLWWOOBV");

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
    msg.setTimeStamp(0.9817140694889178);
    msg.setSource(29777U);
    msg.setSourceEntity(159U);
    msg.setDestination(28627U);
    msg.setDestinationEntity(190U);
    msg.duration = 35220U;
    msg.custom.assign("LLDJIBPWWKRBJMISEXXTJGBDISPLWVNMHEHYLOCFWKBLYXFCJUPYEVOFZPAVMVFZUJBMXTGKEXSDDMGCMBUOGGSYHFQMJEZRDOLHCIVNNASRJRIYSOYQT");

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
    msg.setTimeStamp(0.9791343748466649);
    msg.setSource(14623U);
    msg.setSourceEntity(17U);
    msg.setDestination(33529U);
    msg.setDestinationEntity(39U);
    msg.duration = 31195U;
    msg.custom.assign("TQOWJIZXRIVMDVBXPZPBXEKKQF");

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
    msg.setTimeStamp(0.45616069072719523);
    msg.setSource(40648U);
    msg.setSourceEntity(55U);
    msg.setDestination(17299U);
    msg.setDestinationEntity(199U);
    msg.duration = 38742U;
    msg.custom.assign("GMKUCDWLYZJIIMVNPYTXFSPCPP");

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
    msg.setTimeStamp(0.27961432689542054);
    msg.setSource(49095U);
    msg.setSourceEntity(195U);
    msg.setDestination(48189U);
    msg.setDestinationEntity(211U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.8542954595840986;
    tmp_msg_0.start_lon = 0.5443113169752857;
    tmp_msg_0.start_z = 0.2666247529963244;
    tmp_msg_0.start_z_units = 62U;
    tmp_msg_0.end_lat = 0.5434477213369049;
    tmp_msg_0.end_lon = 0.8581449053003393;
    tmp_msg_0.end_z = 0.7503599416612712;
    tmp_msg_0.end_z_units = 169U;
    tmp_msg_0.speed = 0.9013454276375729;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.lradius = 0.7527595380754736;
    tmp_msg_0.flags = 103U;
    msg.control.set(tmp_msg_0);
    msg.duration = 38321U;
    msg.custom.assign("TNSZBMOESIBTWVQTPQWJNTWNSPGROYWXYXYUSQSHJKUECSLZKSRCBCCFBYTTAYTPCWAHZMFRYIOIPJVFXMSKUGACVCKRERVQGBUVAUAHPDNCMXMYODG");

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
    msg.setTimeStamp(0.1958879689002042);
    msg.setSource(59996U);
    msg.setSourceEntity(78U);
    msg.setDestination(12416U);
    msg.setDestinationEntity(241U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.39338269831543526;
    msg.control.set(tmp_msg_0);
    msg.duration = 17248U;
    msg.custom.assign("IXQWCJOWBHHKVWQVCIIESKOYHKSUROAKMKCYGUUPCSZFOXQQWLKGNVMIIBPQTZMFVHXQYCXQQSVLZPRRRSMWKBPUNJGJNHAAGJWDRJGZZOFOPNKMDLCBNAZLGYEGFQDTBAANUIFXUDPAVTYLAUDWDEKZXMNIHDVYPLPVTGYUGEGZLX");

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
    msg.setTimeStamp(0.878024178438199);
    msg.setSource(15917U);
    msg.setSourceEntity(10U);
    msg.setDestination(62367U);
    msg.setDestinationEntity(197U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.786298779733064;
    tmp_msg_0.speed_units = 62U;
    msg.control.set(tmp_msg_0);
    msg.duration = 28943U;
    msg.custom.assign("TZKTJBAJWTOKRKRRDZQY");

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
    msg.setTimeStamp(0.35158586041157214);
    msg.setSource(47180U);
    msg.setSourceEntity(167U);
    msg.setDestination(57609U);
    msg.setDestinationEntity(224U);
    msg.timeout = 50663U;
    msg.lat = 0.9954989641338953;
    msg.lon = 0.16255390910789713;
    msg.z = 0.4608209421937963;
    msg.z_units = 102U;
    msg.speed = 0.8381434279603536;
    msg.speed_units = 22U;
    msg.bearing = 0.04693974613465335;
    msg.cross_angle = 0.4962145528533426;
    msg.width = 0.2667833896984493;
    msg.length = 0.3958339433378274;
    msg.hstep = 0.694975769695644;
    msg.coff = 134U;
    msg.alternation = 212U;
    msg.flags = 248U;
    msg.custom.assign("EPHCKLZGTLAWUBIEZCLQHYODTDHYVPURGGIBZYLUFMMOBEOWJHVYRZHYMBGOJVRDNPIVQJIECFILUPICRECONFFMHLPNUPXJOHVACPFNXDXVTJTERGSUTZAIYBRSZQSHDGQDSOQLWFOAOGWMNNYDKVCXBPLKDYCQTSXQN");

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
    msg.setTimeStamp(0.8971172170145665);
    msg.setSource(56293U);
    msg.setSourceEntity(95U);
    msg.setDestination(31265U);
    msg.setDestinationEntity(112U);
    msg.timeout = 30403U;
    msg.lat = 0.2043271159159774;
    msg.lon = 0.8875902979913837;
    msg.z = 0.7024165253565794;
    msg.z_units = 110U;
    msg.speed = 0.49004065076229064;
    msg.speed_units = 112U;
    msg.bearing = 0.20280786272003437;
    msg.cross_angle = 0.26696928732972247;
    msg.width = 0.5800614691280349;
    msg.length = 0.022199331987509785;
    msg.hstep = 0.5642089282061669;
    msg.coff = 162U;
    msg.alternation = 157U;
    msg.flags = 8U;
    msg.custom.assign("LBJKWSSXXDRAKM");

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
    msg.setTimeStamp(0.8461976575245275);
    msg.setSource(45504U);
    msg.setSourceEntity(70U);
    msg.setDestination(33978U);
    msg.setDestinationEntity(3U);
    msg.timeout = 50658U;
    msg.lat = 0.23793581400300423;
    msg.lon = 0.7434279303667876;
    msg.z = 0.5014292036550825;
    msg.z_units = 224U;
    msg.speed = 0.13685423721878687;
    msg.speed_units = 225U;
    msg.bearing = 0.12587097079630305;
    msg.cross_angle = 0.6743250382373221;
    msg.width = 0.2675757469179715;
    msg.length = 0.3986478863217724;
    msg.hstep = 0.5634226304224603;
    msg.coff = 167U;
    msg.alternation = 74U;
    msg.flags = 115U;
    msg.custom.assign("JFYFRHAQZTEONTHVDLZVHMFXZYXOPDDDQNLMWYEKWSANYJOMUUJCDRWHSBIAUKOIKCIJFBNREFPHTRGFOVQOBSNPMNPIDLCULSGGJPWWMQFXGWMSMCXPIHNWKZVCJQVPOQABVRLSWTAVCIQENIKDOCYRLYSKTVUXVNOEFZKAODLCRIWAJLJHFMT");

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
    msg.setTimeStamp(0.5962080886970688);
    msg.setSource(9571U);
    msg.setSourceEntity(173U);
    msg.setDestination(4749U);
    msg.setDestinationEntity(161U);
    msg.timeout = 52086U;
    msg.lat = 0.038443128042151775;
    msg.lon = 0.5813084890683089;
    msg.z = 0.32098237860468626;
    msg.z_units = 174U;
    msg.speed = 0.08121868448209302;
    msg.speed_units = 146U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5127662378152226;
    tmp_msg_0.y = 0.43615063127819587;
    tmp_msg_0.z = 0.4141000127115587;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IEIVJFWIMJLTGQBZVGEFKWGBUPAUIHCWYGOMILLDDDXSYAWUCQLKZWWOJCKRVGZXFOHZVXOKEOLCBLOYXTXWTASEPRVVXPZQDFMAQDUWXGZREGJQPRFUJBVNLSKTFOKYQCJXHJHVNKNQNLKRKZEPOENCTHVPRSGDNAUIRCAIMXZIRTHSPYVMDUNACBOBJSDXFMAODAT");

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
    msg.setTimeStamp(0.038909596146276426);
    msg.setSource(19535U);
    msg.setSourceEntity(105U);
    msg.setDestination(5999U);
    msg.setDestinationEntity(96U);
    msg.timeout = 62866U;
    msg.lat = 0.5391498512085118;
    msg.lon = 0.30512648115941987;
    msg.z = 0.6822055066444451;
    msg.z_units = 193U;
    msg.speed = 0.42487555165064883;
    msg.speed_units = 146U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.2890576016972649;
    tmp_msg_0.y = 0.428842997805023;
    tmp_msg_0.z = 0.1077422274184977;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UQPLSAPJOELPEZFCDANUOKFMHAQHMGMCBQSPMDBSKGSRTFGOLYBRZLXJVXTVNDRCFDAFVENSEEVEPYPOHMSXLQYLXGSTIIXYBBJLIDGCDLRXNVQSXNNNKRGVJFUZKMAGAWGHWGEYCJUPZNUYJVWTRPAQHAIWSCBCWKUPHYJSXKCOLOLTQHFXN");

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
    msg.setTimeStamp(0.739207839606886);
    msg.setSource(29826U);
    msg.setSourceEntity(230U);
    msg.setDestination(50139U);
    msg.setDestinationEntity(69U);
    msg.timeout = 47617U;
    msg.lat = 0.39290177832409867;
    msg.lon = 0.9370769525484157;
    msg.z = 0.5890594960507041;
    msg.z_units = 171U;
    msg.speed = 0.7005335775511411;
    msg.speed_units = 82U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.1293826300588572;
    tmp_msg_0.y = 0.7002117262207852;
    tmp_msg_0.z = 0.7458445976861882;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PZJOJXXNQHBUHPVNHWQSDOVOPAAOKLOYJBWBTATCFAUTQXCGSGAETVQTRKMVJOGWREDCYECCIJJPRYHFHTIQSJAZVCKWIIYQVRCRCUFLJHDGUXSDUEHTDMJTMHPZQPAKB");

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
    msg.setTimeStamp(0.38923182424461333);
    msg.setSource(29682U);
    msg.setSourceEntity(50U);
    msg.setDestination(44134U);
    msg.setDestinationEntity(198U);
    msg.x = 0.5218149962534284;
    msg.y = 0.2807124655158153;
    msg.z = 0.43296154440756573;

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
    msg.setTimeStamp(0.7025720289231474);
    msg.setSource(16472U);
    msg.setSourceEntity(49U);
    msg.setDestination(28802U);
    msg.setDestinationEntity(82U);
    msg.x = 0.986727102161446;
    msg.y = 0.8983916540974332;
    msg.z = 0.6743129031496202;

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
    msg.setTimeStamp(0.03432308174203891);
    msg.setSource(8609U);
    msg.setSourceEntity(250U);
    msg.setDestination(62787U);
    msg.setDestinationEntity(49U);
    msg.x = 0.16772423024608085;
    msg.y = 0.7486526779495104;
    msg.z = 0.20064567665341093;

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
    msg.setTimeStamp(0.43768784851527964);
    msg.setSource(37370U);
    msg.setSourceEntity(126U);
    msg.setDestination(24656U);
    msg.setDestinationEntity(208U);
    msg.timeout = 61704U;
    msg.lat = 0.7391305900457591;
    msg.lon = 0.5184418729437461;
    msg.z = 0.9608471679698086;
    msg.z_units = 180U;
    msg.amplitude = 0.6244212356801554;
    msg.pitch = 0.26060016642439565;
    msg.speed = 0.7591528253540607;
    msg.speed_units = 135U;
    msg.custom.assign("TUMSIWAJQPHPYMOYUZLUVJJTGGUWYLFFGAOKUQZIGJZCQQSSQZCSFJWMVDZXZVVXXCNCPZOQJKIHHBPFFEO");

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
    msg.setTimeStamp(0.8505513925478465);
    msg.setSource(51982U);
    msg.setSourceEntity(103U);
    msg.setDestination(58264U);
    msg.setDestinationEntity(161U);
    msg.timeout = 37962U;
    msg.lat = 0.11145006820165915;
    msg.lon = 0.7310458447497313;
    msg.z = 0.6954740893770763;
    msg.z_units = 219U;
    msg.amplitude = 0.18075110252101279;
    msg.pitch = 0.7918088753271083;
    msg.speed = 0.8465264330850382;
    msg.speed_units = 251U;
    msg.custom.assign("AJQWHDPVERSTITUCBHMYRLWGXLLENVUYEMDMWQGRXXMIBTMQJOVPCJYUSSDRNCIOARZZIRURZSJOBXDXPMPHEHVAFIKGWBWEQHGHVWIAETKFDNBIFVZNBHVAJTOKYWAWRFONAXZNYFL");

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
    msg.setTimeStamp(0.9706029280110262);
    msg.setSource(18296U);
    msg.setSourceEntity(119U);
    msg.setDestination(26343U);
    msg.setDestinationEntity(164U);
    msg.timeout = 16924U;
    msg.lat = 0.42150571873669107;
    msg.lon = 0.8785795554662524;
    msg.z = 0.6244535784304913;
    msg.z_units = 180U;
    msg.amplitude = 0.740915776237358;
    msg.pitch = 0.02091052194444043;
    msg.speed = 0.18452198107317797;
    msg.speed_units = 144U;
    msg.custom.assign("DIBPSADYKWLNEKMPNXEGQHTVTFQAUBJUXOZCGSHTSMOFYHRGKJCCWXFZDRQFLSBVKDBQYTQFWDIZAWBMRABPXZBVGFEIIEVVURIKYCZFQRJPTAYNRYBSVNDWMOONAQXUCWYMVSZTUYBPLXPCKLPTCURZLDWMUAPJAEFVECTQILHEGNSHKJZNMMEHJX");

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
    msg.setTimeStamp(0.3464597955351266);
    msg.setSource(7999U);
    msg.setSourceEntity(13U);
    msg.setDestination(41550U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.207068225007062);
    msg.setSource(21892U);
    msg.setSourceEntity(36U);
    msg.setDestination(38351U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.7398817636550715);
    msg.setSource(6550U);
    msg.setSourceEntity(199U);
    msg.setDestination(49145U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.8266944665533377);
    msg.setSource(57286U);
    msg.setSourceEntity(101U);
    msg.setDestination(49930U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.8796254194030599;
    msg.lon = 0.5527420683608238;
    msg.z = 0.9082789478193944;
    msg.z_units = 225U;
    msg.radius = 0.5745687063989939;
    msg.duration = 59085U;
    msg.speed = 0.30610775536165946;
    msg.speed_units = 131U;
    msg.custom.assign("QAWWWFRYKBTAXNDRECHRWEPOGZDAVIALZSPHIQBDRLYCSJDSGTBSHCXREXGGUKGUPXYELPKQAWLTMQJXNUVEOSHCTOZFFYFXNBJORWEBSZPXUKYOZWEQVTVFXCMVSCFBBHMIQWXTD");

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
    msg.setTimeStamp(0.49913571034973303);
    msg.setSource(41776U);
    msg.setSourceEntity(108U);
    msg.setDestination(59639U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.8180022609971074;
    msg.lon = 0.6884138749804438;
    msg.z = 0.004465778004011822;
    msg.z_units = 83U;
    msg.radius = 0.16841325351879566;
    msg.duration = 8216U;
    msg.speed = 0.41243688793588673;
    msg.speed_units = 5U;
    msg.custom.assign("EXZCNUSJSRNYKPSHSGJNITXAHTRBESMUPLCDSDXRGWGWDGJPYSJIXGKQDIUQCRZHVFPMILIGNVFKYIAHZWEUEVHXDVZQVUDTMLMHTAXYDRPBATTLRLGQKQBYBUOOUWKQXPFNOBUSFCWQECFQMEONZZPAYXHUWBMZCGASRVHNCRQEDRCWORLYNTLTWXDFXIZLBOTMISFVLNPQIOGW");

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
    msg.setTimeStamp(0.38188462231455444);
    msg.setSource(3533U);
    msg.setSourceEntity(141U);
    msg.setDestination(46224U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.8688137531775303;
    msg.lon = 0.9872094178461005;
    msg.z = 0.6726253227510652;
    msg.z_units = 250U;
    msg.radius = 0.41010613487845604;
    msg.duration = 54712U;
    msg.speed = 0.03777419386339331;
    msg.speed_units = 112U;
    msg.custom.assign("HHEGJMAUWQNISOKZHPFVCWLRXSCPFWQBJOICNAYZBESOZZHZUNYDJHTWFDJVQLLOGFJYOCWHPDRDXBURMVIEFKERPUIUNQWTIVWT");

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
    msg.setTimeStamp(0.29898345431569573);
    msg.setSource(1021U);
    msg.setSourceEntity(117U);
    msg.setDestination(60142U);
    msg.setDestinationEntity(7U);
    msg.timeout = 38561U;
    msg.flags = 237U;
    msg.lat = 0.12144223833806123;
    msg.lon = 0.9995551095514442;
    msg.start_z = 0.3696070849793994;
    msg.start_z_units = 44U;
    msg.end_z = 0.5654851411888153;
    msg.end_z_units = 129U;
    msg.radius = 0.283835199301377;
    msg.speed = 0.30000070856696104;
    msg.speed_units = 26U;
    msg.custom.assign("ILJZOPKQRELPTIU");

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
    msg.setTimeStamp(0.13813668449918037);
    msg.setSource(56898U);
    msg.setSourceEntity(46U);
    msg.setDestination(13086U);
    msg.setDestinationEntity(249U);
    msg.timeout = 49345U;
    msg.flags = 226U;
    msg.lat = 0.8304270181596137;
    msg.lon = 0.8952778241885012;
    msg.start_z = 0.5382947112985405;
    msg.start_z_units = 70U;
    msg.end_z = 0.6136974970495608;
    msg.end_z_units = 66U;
    msg.radius = 0.3898864424930444;
    msg.speed = 0.47794563451966043;
    msg.speed_units = 160U;
    msg.custom.assign("WOFXZFJYXCYLZLHVOWCSRALBFEBWSHMUGDAB");

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
    msg.setTimeStamp(0.8025726870816688);
    msg.setSource(16132U);
    msg.setSourceEntity(195U);
    msg.setDestination(41090U);
    msg.setDestinationEntity(69U);
    msg.timeout = 34582U;
    msg.flags = 105U;
    msg.lat = 0.35931522979060415;
    msg.lon = 0.04240677156731043;
    msg.start_z = 0.061412894720299205;
    msg.start_z_units = 104U;
    msg.end_z = 0.36068284197222644;
    msg.end_z_units = 228U;
    msg.radius = 0.41275047813143473;
    msg.speed = 0.013498697464920273;
    msg.speed_units = 120U;
    msg.custom.assign("BWLDPSVUETEJOVPMPSZRYTGIVZMFGKUODMBMADXKOBSEJTIFWRWHZCFXYFETUQCHPXQZNCWTTVPNVJCXXDNYFAOMTBNJWHQTRQFJHHESPIRAIRUMYIFGDDYKIXAEKRGJALGVVILWVPXGXJIASVUNHWGC");

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
    msg.setTimeStamp(0.3118404117134892);
    msg.setSource(10958U);
    msg.setSourceEntity(71U);
    msg.setDestination(63635U);
    msg.setDestinationEntity(212U);
    msg.timeout = 64612U;
    msg.lat = 0.8714387011129516;
    msg.lon = 0.44781038176534926;
    msg.z = 0.8185525870041391;
    msg.z_units = 216U;
    msg.speed = 0.9614752398449166;
    msg.speed_units = 129U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5872801789892031;
    tmp_msg_0.y = 0.7003684243747541;
    tmp_msg_0.z = 0.9447743157032926;
    tmp_msg_0.t = 0.3921122288079707;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GQFCCJPHXAPHOJNKRHGSZODZORLMJLHUKCGHTTRCHTOFMXGIONYRWXEXDVZFRNXBSTUASLPTBQRIBLJTPCIQKRZKAQVRLKXKBKVVOGDCDFBYEUGXHTJNBWLNIEKVAVS");

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
    msg.setTimeStamp(0.24461953658953994);
    msg.setSource(49726U);
    msg.setSourceEntity(35U);
    msg.setDestination(47248U);
    msg.setDestinationEntity(172U);
    msg.timeout = 16099U;
    msg.lat = 0.9612741259167716;
    msg.lon = 0.3310389899884062;
    msg.z = 0.4074941869791684;
    msg.z_units = 231U;
    msg.speed = 0.7047660297678511;
    msg.speed_units = 69U;
    msg.custom.assign("EAPQHGLMRFNXPRTTCJZEULJEXVNGFLCOJXEDISNBZSLMDBJMEMXKDWBEUFYBCSOKWBOJBAHJUOYZODJFWMCVJAQXVHI");

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
    msg.setTimeStamp(0.6721921838443833);
    msg.setSource(3664U);
    msg.setSourceEntity(226U);
    msg.setDestination(51865U);
    msg.setDestinationEntity(79U);
    msg.timeout = 15602U;
    msg.lat = 0.6715272721446739;
    msg.lon = 0.5441926661052944;
    msg.z = 0.3733368671829028;
    msg.z_units = 21U;
    msg.speed = 0.039208477490733196;
    msg.speed_units = 151U;
    msg.custom.assign("JYHSRINXDTSXIRAAHVUOKGJVAMMNMGBZCEABGSHLVLNWRJIPCPXSWZPFFHOHBPCNVNBQOOHFGRUBXATCCWCYPQKQQUEPQYTNMEFGZUKJILZRBUMDCNUOIQZMP");

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
    msg.setTimeStamp(0.8767203716841905);
    msg.setSource(56045U);
    msg.setSourceEntity(1U);
    msg.setDestination(54261U);
    msg.setDestinationEntity(152U);
    msg.x = 0.010538080097042268;
    msg.y = 0.3972645731216966;
    msg.z = 0.838440707451683;
    msg.t = 0.10777188439809637;

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
    msg.setTimeStamp(0.12772313627417398);
    msg.setSource(54270U);
    msg.setSourceEntity(60U);
    msg.setDestination(48456U);
    msg.setDestinationEntity(43U);
    msg.x = 0.8349433086823228;
    msg.y = 0.7709482159735213;
    msg.z = 0.036693999245256514;
    msg.t = 0.9986277694362243;

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
    msg.setTimeStamp(0.6093414741765569);
    msg.setSource(64433U);
    msg.setSourceEntity(95U);
    msg.setDestination(34068U);
    msg.setDestinationEntity(182U);
    msg.x = 0.2675402456289844;
    msg.y = 0.9918787056068805;
    msg.z = 0.6733960304551785;
    msg.t = 0.12393378353220164;

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
    msg.setTimeStamp(0.7004786036092732);
    msg.setSource(44555U);
    msg.setSourceEntity(35U);
    msg.setDestination(40768U);
    msg.setDestinationEntity(218U);
    msg.timeout = 31153U;
    msg.name.assign("OXXOLJDIIBSYVTQITKSRSHFKZHIQZAZJWHDWDBFDVRPPHYJEJICKMLZATWIXBWYUMNWUKFFNSGJUBJAKXPQHGHAGTLMDOOTMNRFNIRNMPQQDDQXEWLHSGTSVXGSZRKAPOMBPEOPAGTRVUMXSSEZXEDTRXCRRFVDQVPOBECQPIXJWUJUAI");
    msg.custom.assign("BVQKYBNBMUMSVTHWJXJOXCWKCFNUOVULRADMSBLBCLLVNANAYKQHGUCNUOGTIWJRUOJLFWLSPFNNMICYOZMECZSUZYPRDJMCYOATIRDZWRQHFIWFYJQMOWGQHEDSSEAGIMKUYTQJPKNRXFGTNEFQDJVXBEZQGPEXVEHDHPIPBPVCHHD");

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
    msg.setTimeStamp(0.620060072099101);
    msg.setSource(14544U);
    msg.setSourceEntity(162U);
    msg.setDestination(28022U);
    msg.setDestinationEntity(49U);
    msg.timeout = 18479U;
    msg.name.assign("NAGJOVFVETUEPEOHCSHICBHWXSVGSLZPNEKMRCTZNAXYUNASYZKOSXKBDAJFUBTHDDTQVJDUOVPOZHUGCGVUJWBDILEHZYJWKSSTRNFXPQYVVYFADXPKLEORJTJABXQQLBQNHJWOWDZKL");
    msg.custom.assign("YESZVZNPAOBYSVSCBYWAIIOPFSUGMXBRECSZCDIGAOJJQLBUHPDPLRZDUPJUEDHXMWEJPAUXWJXVHWINVWYAZKJQEGXHRLCNGTCWBUFNJFPTEKKKENVCVRMTALKBUZWDZGQSSJQKEGRYBGQAOXDRKJNFBJQCINIWETGWRADXKZYRHFINOXTMDFNTDUXVURMAQP");

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
    msg.setTimeStamp(0.6716778063390035);
    msg.setSource(62819U);
    msg.setSourceEntity(79U);
    msg.setDestination(20906U);
    msg.setDestinationEntity(225U);
    msg.timeout = 32725U;
    msg.name.assign("UEIVOPHBZODEKXUCPXFQGXYPUAMKCXCCOWNBUNBLZPK");
    msg.custom.assign("JNPGVPWWDRBJWBAZCILPKVSBDJWGHIACNGZXFMBSTVPUVYUBMHTJQHJALHLQEPZEABRQUIHCFLANBXXYXCYLOSODIOLPOCUZFDOOAGHKCDRKEXLPYTDHZGBIOXXAFNWFEMQJKPMK");

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
    msg.setTimeStamp(0.8903392058279378);
    msg.setSource(12923U);
    msg.setSourceEntity(104U);
    msg.setDestination(59584U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.9841057420569151;
    msg.lon = 0.6853838887267678;
    msg.z = 0.627398109871668;
    msg.z_units = 108U;
    msg.speed = 0.9216030342121186;
    msg.speed_units = 190U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7532527573292273;
    tmp_msg_0.y = 0.3065378371319122;
    tmp_msg_0.z = 0.3178100145540972;
    tmp_msg_0.t = 0.11233708081021665;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.10826954449941428;
    msg.custom.assign("LDAXYUAHFOQHHXNQYELOVPPOWECTWAJQKNKEASPFZSKBEAKNCIRJHPUZJDDSUGRFSGIZVLLVWNIZUFJPBZIBOWXFOEWIVDKBPMGHXETPWIVETMWPKARILHXYOMDJTECJLJGNWQIGSTCHJDIMCEQNMXRTVCYMTNBOWYFVRKVZOYGUJSPZCUHFTZUAQALBUMCQFXPNCGBWLSOADUKMKXRYNZLBXNHKFQMFGSTVIBYRDHSAYXRBSQR");

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
    msg.setTimeStamp(0.39799027780302);
    msg.setSource(44622U);
    msg.setSourceEntity(213U);
    msg.setDestination(26032U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.21299787761967637;
    msg.lon = 0.5929145558639255;
    msg.z = 0.9516918644667608;
    msg.z_units = 155U;
    msg.speed = 0.8614617200736883;
    msg.speed_units = 188U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40441U;
    tmp_msg_0.off_x = 0.22583337438034834;
    tmp_msg_0.off_y = 0.3234830079174187;
    tmp_msg_0.off_z = 0.7077446067979626;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.015993822095250576;
    msg.custom.assign("DDZFYCMECJDPGWJZQTXTALHWYCSGVOHPJTQNDNISURAXQZLNZNHUMFILSWYWLBNGMKQGGXHNXEEDZFIEPTSVPNDLCXLEVVRCRGGMWSZOZTOYFAAKMFOXVFAVESHJIJNAZCYTTIKCPBBUOHEPVDXRBOVSUHAIJBPIRTUWOO");

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
    msg.setTimeStamp(0.6440873242269366);
    msg.setSource(42181U);
    msg.setSourceEntity(73U);
    msg.setDestination(51764U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.3159739703295832;
    msg.lon = 0.15196840424673186;
    msg.z = 0.23454767552081557;
    msg.z_units = 242U;
    msg.speed = 0.8680861468671275;
    msg.speed_units = 215U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.05795545461171203;
    tmp_msg_0.y = 0.787827382185448;
    tmp_msg_0.z = 0.6365021000923673;
    tmp_msg_0.t = 0.49237360993893686;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.49432142427141534;
    msg.custom.assign("BUWHYJJNBQFMBUAOEADMQSJEXVVHQPIUHEYCQITVQQNRVZXDOTDWFKAPSEUWNPUWVSKBZRPXRLKZIOZERFUDWNPDCCKOAIZQWOJSBKJBSZBXTWYRTFTWWAIGTFNDHJLKOQLYISVMGOXSRXHDUTLXERXVLUV");

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
    msg.setTimeStamp(0.5313350798471145);
    msg.setSource(44676U);
    msg.setSourceEntity(33U);
    msg.setDestination(52024U);
    msg.setDestinationEntity(43U);
    msg.vid = 32727U;
    msg.off_x = 0.3412093797694974;
    msg.off_y = 0.9764738691258538;
    msg.off_z = 0.5563803643323725;

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
    msg.setTimeStamp(0.01687499820367988);
    msg.setSource(46727U);
    msg.setSourceEntity(60U);
    msg.setDestination(29515U);
    msg.setDestinationEntity(188U);
    msg.vid = 10890U;
    msg.off_x = 0.2612048101470996;
    msg.off_y = 0.8141579013787745;
    msg.off_z = 0.6949257402915165;

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
    msg.setTimeStamp(0.06479430393978625);
    msg.setSource(32318U);
    msg.setSourceEntity(150U);
    msg.setDestination(26255U);
    msg.setDestinationEntity(51U);
    msg.vid = 57845U;
    msg.off_x = 0.21941584879680343;
    msg.off_y = 0.16148857218486723;
    msg.off_z = 0.3547925477401539;

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
    msg.setTimeStamp(0.919478338762094);
    msg.setSource(54699U);
    msg.setSourceEntity(133U);
    msg.setDestination(24136U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.12592758665405446);
    msg.setSource(35201U);
    msg.setSourceEntity(40U);
    msg.setDestination(29927U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.8591114560908771);
    msg.setSource(22415U);
    msg.setSourceEntity(206U);
    msg.setDestination(3022U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.2206618062587251);
    msg.setSource(329U);
    msg.setSourceEntity(24U);
    msg.setDestination(50981U);
    msg.setDestinationEntity(160U);
    msg.mid = 42522U;

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
    msg.setTimeStamp(0.11730612601745571);
    msg.setSource(57359U);
    msg.setSourceEntity(98U);
    msg.setDestination(56751U);
    msg.setDestinationEntity(140U);
    msg.mid = 44504U;

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
    msg.setTimeStamp(0.8771231382665379);
    msg.setSource(57543U);
    msg.setSourceEntity(96U);
    msg.setDestination(33781U);
    msg.setDestinationEntity(42U);
    msg.mid = 61270U;

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
    msg.setTimeStamp(0.601999582532104);
    msg.setSource(47745U);
    msg.setSourceEntity(151U);
    msg.setDestination(34826U);
    msg.setDestinationEntity(236U);
    msg.state = 9U;
    msg.eta = 25410U;
    msg.info.assign("QXHJIJNEMPZBILUFGCOHXITJMYEMWLRQOKPBVSTAHZAPSHIZPKYWNNXWNDLC");

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
    msg.setTimeStamp(0.9298429371245057);
    msg.setSource(25665U);
    msg.setSourceEntity(144U);
    msg.setDestination(17686U);
    msg.setDestinationEntity(4U);
    msg.state = 234U;
    msg.eta = 56309U;
    msg.info.assign("MFQVSKJAHTFRIPJIVMOQQICKWRDSNDHZBYNGYHCSUDNSOZQBWIGVJODYNSRWPWSQEEULZTOAGTWHVXEGRPVVRJQWKEMWUMSKZPXBZENZWHAFIFCLJZKHYXBFJQUUJTLZYXVYIBUGEWBCBROAMZGKAXTLAAKNS");

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
    msg.setTimeStamp(0.43124847830779434);
    msg.setSource(38378U);
    msg.setSourceEntity(155U);
    msg.setDestination(38789U);
    msg.setDestinationEntity(93U);
    msg.state = 234U;
    msg.eta = 64045U;
    msg.info.assign("FZFUMPAIXMJKPPGNIRWSRUPXCNLRMYJBOHCXDHMIYDXQSQOYXHQPNFBBOBEGZCILYVUUQDKVHHBNJRTRGLZJOUFRXNLDSUIBTWAIAYZNSGBEASQUDKQEVQLZE");

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
    msg.setTimeStamp(0.9813990959496867);
    msg.setSource(34839U);
    msg.setSourceEntity(186U);
    msg.setDestination(28405U);
    msg.setDestinationEntity(59U);
    msg.system = 48348U;
    msg.duration = 21850U;
    msg.speed = 0.12517762121442755;
    msg.speed_units = 245U;
    msg.x = 0.8624953646733678;
    msg.y = 0.7233023249998918;
    msg.z = 0.10400524477003514;
    msg.z_units = 55U;

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
    msg.setTimeStamp(0.6712501680467882);
    msg.setSource(45851U);
    msg.setSourceEntity(184U);
    msg.setDestination(31610U);
    msg.setDestinationEntity(48U);
    msg.system = 61742U;
    msg.duration = 53459U;
    msg.speed = 0.9404086191749753;
    msg.speed_units = 246U;
    msg.x = 0.05075593615535712;
    msg.y = 0.9813622047933421;
    msg.z = 0.9804450972583558;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.14865595036905388);
    msg.setSource(43916U);
    msg.setSourceEntity(159U);
    msg.setDestination(12756U);
    msg.setDestinationEntity(72U);
    msg.system = 7923U;
    msg.duration = 40658U;
    msg.speed = 0.8085365744989472;
    msg.speed_units = 72U;
    msg.x = 0.17017872302496317;
    msg.y = 0.04844287145123871;
    msg.z = 0.8485224205833407;
    msg.z_units = 89U;

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
    msg.setTimeStamp(0.012642930267822039);
    msg.setSource(26227U);
    msg.setSourceEntity(54U);
    msg.setDestination(50944U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.5172067634926776;
    msg.lon = 0.009165947814028241;
    msg.speed = 0.6921110301484009;
    msg.speed_units = 157U;
    msg.duration = 49253U;
    msg.sys_a = 40667U;
    msg.sys_b = 50022U;
    msg.move_threshold = 0.1633803995010853;

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
    msg.setTimeStamp(0.4699847304638497);
    msg.setSource(20108U);
    msg.setSourceEntity(178U);
    msg.setDestination(8529U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.20523716675633663;
    msg.lon = 0.5446755913517756;
    msg.speed = 0.47338595478401213;
    msg.speed_units = 148U;
    msg.duration = 16584U;
    msg.sys_a = 18992U;
    msg.sys_b = 6997U;
    msg.move_threshold = 0.9289258970573171;

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
    msg.setTimeStamp(0.18489219714001204);
    msg.setSource(29591U);
    msg.setSourceEntity(186U);
    msg.setDestination(23362U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.18588686401050425;
    msg.lon = 0.07999565842357692;
    msg.speed = 0.1878799761362796;
    msg.speed_units = 4U;
    msg.duration = 50462U;
    msg.sys_a = 37777U;
    msg.sys_b = 49056U;
    msg.move_threshold = 0.9272723302283811;

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
    msg.setTimeStamp(0.08955741321776112);
    msg.setSource(43908U);
    msg.setSourceEntity(201U);
    msg.setDestination(27142U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.7709195603188059;
    msg.lon = 0.44739447277012667;
    msg.z = 0.08363732428155635;
    msg.z_units = 111U;
    msg.speed = 0.19353112004600226;
    msg.speed_units = 182U;
    msg.custom.assign("WORUWLQHNTZIUPECQLMNXRQLVEYFCOEQOBWYMRGCXAYS");

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
    msg.setTimeStamp(0.2763097241812975);
    msg.setSource(49676U);
    msg.setSourceEntity(87U);
    msg.setDestination(45507U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.9730295165934905;
    msg.lon = 0.5834264490227244;
    msg.z = 0.2665349719282305;
    msg.z_units = 28U;
    msg.speed = 0.5801248995120517;
    msg.speed_units = 161U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8175743437733393;
    tmp_msg_0.lon = 0.42397839689961336;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SXXGVKMQZBKFOZITDAWCIPPTXWEKSXQGFUJHCCKSMIDHAWDJRFWWHYWPZMDQTPLQBYUYNUDEPM");

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
    msg.setTimeStamp(0.021659900285314504);
    msg.setSource(15460U);
    msg.setSourceEntity(248U);
    msg.setDestination(16661U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.0626893386772076;
    msg.lon = 0.8214825043411774;
    msg.z = 0.7788253648337743;
    msg.z_units = 217U;
    msg.speed = 0.6834537351757124;
    msg.speed_units = 76U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8053404846572644;
    tmp_msg_0.lon = 0.9059256054611242;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DENOXZILZLKAVOQDCYIYUALXISFNDFBNXHHHNUJGTZRARKUQAOHFCSZCOJJOVPHOJYDWRXRLTLVMJQBKNTGSBYFSKEKPISYNKUGZKEICSPMMRXTBSAWBHYDXPCOQTSHEQSLQJFGENRPBNZMZBWMFRHRXIQWPVGYLKUMGBDFTWMDLLCUWORWMIPDANWYPURYEDFMYHJGXZ");

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
    msg.setTimeStamp(0.0219893818052872);
    msg.setSource(27850U);
    msg.setSourceEntity(244U);
    msg.setDestination(13640U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.9095356023653338;
    msg.lon = 0.6139357110705626;

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
    msg.setTimeStamp(0.06564036714894916);
    msg.setSource(49771U);
    msg.setSourceEntity(58U);
    msg.setDestination(47381U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.12145838286293154;
    msg.lon = 0.2532410588640679;

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
    msg.setTimeStamp(0.5790217422926978);
    msg.setSource(28131U);
    msg.setSourceEntity(103U);
    msg.setDestination(4137U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.528562879522242;
    msg.lon = 0.7577044589564209;

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
    msg.setTimeStamp(0.986052426184162);
    msg.setSource(51182U);
    msg.setSourceEntity(199U);
    msg.setDestination(41143U);
    msg.setDestinationEntity(98U);
    msg.timeout = 47737U;
    msg.lat = 0.74131896689589;
    msg.lon = 0.2080970088598707;
    msg.z = 0.8029858146380371;
    msg.z_units = 36U;
    msg.pitch = 0.30579588440384753;
    msg.amplitude = 0.4030783952059145;
    msg.duration = 2524U;
    msg.speed = 0.22937362823660734;
    msg.speed_units = 40U;
    msg.radius = 0.12431309605002072;
    msg.direction = 184U;
    msg.custom.assign("NCKTRVMRDHMPZQBRRBQKRHMYQZYNSKEXHNFGMOZDEKKRVAUUWJKXTVCMCQNDLBAJSTMOWEYOLNFYUEVBXOPAQHITQHSPLPFEPIGKICTXNEDUFYGIHKXXWUNDFJALTWJAZGOLSLNJOB");

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
    msg.setTimeStamp(0.37063724232542006);
    msg.setSource(44092U);
    msg.setSourceEntity(48U);
    msg.setDestination(12232U);
    msg.setDestinationEntity(126U);
    msg.timeout = 25361U;
    msg.lat = 0.9945119122597599;
    msg.lon = 0.8387148261104285;
    msg.z = 0.37251324492313287;
    msg.z_units = 234U;
    msg.pitch = 0.8130584324377849;
    msg.amplitude = 0.6722580938689123;
    msg.duration = 44010U;
    msg.speed = 0.29100653248743524;
    msg.speed_units = 130U;
    msg.radius = 0.020598602212975603;
    msg.direction = 242U;
    msg.custom.assign("XOBUIQQPCDFNJRXMIEKOHLZMCZYFWRRNNLGAVICOCNASIUWQSURKITQUABMAQQAPBPDZETMZPIOCXKLKZJFBAPRMNVH");

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
    msg.setTimeStamp(0.716074094106745);
    msg.setSource(53637U);
    msg.setSourceEntity(221U);
    msg.setDestination(12734U);
    msg.setDestinationEntity(98U);
    msg.timeout = 53216U;
    msg.lat = 0.6660664028671357;
    msg.lon = 0.8242121741030688;
    msg.z = 0.19837526757184898;
    msg.z_units = 38U;
    msg.pitch = 0.8370480661862223;
    msg.amplitude = 0.10943381235278471;
    msg.duration = 64525U;
    msg.speed = 0.27625349204184224;
    msg.speed_units = 110U;
    msg.radius = 0.260218405438704;
    msg.direction = 102U;
    msg.custom.assign("GAZVGHILDDAQGSRVAZNGBTFE");

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
    msg.setTimeStamp(0.4242641445565878);
    msg.setSource(35300U);
    msg.setSourceEntity(73U);
    msg.setDestination(50086U);
    msg.setDestinationEntity(254U);
    msg.formation_name.assign("MOKPJIIMLWHEUNDFTRUUJSHGTJJGHWWOTJHWOFNHQWYSCEZACFKXSBZXNKRVWXFDBRLODNRIPQLERBYVFQCLHMSUDECPABPMMMDHCCPHGPTZBUTBYWUZBIYNKUOPGILIIJTDLZSLVORFOYVPTFWJKXAPQAFQBCUPTJVFACJSGYKMDTTSRCRQUYIBNAGGAXKOX");
    msg.reference_frame = 50U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44282U;
    tmp_msg_0.off_x = 0.11097439348000093;
    tmp_msg_0.off_y = 0.6058034344941664;
    tmp_msg_0.off_z = 0.8019542715477108;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YGZAWDTPNDPKAIGVWRLXQWECJNYFKWHEOTYXMEPHIWMBYBXUUTAMSHZYPDSISROABSZJIQKPWTSGXFLQBGENTEEAVPREUMOXXWJLRMHBVZSTANUAOIXRJMVSFKLRZGKQVUJYUFQTRCOCKMWTDPYALJBKFXNFACWQOHVBPSIOXIDEKFBOTXNUAQHSZH");

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
    msg.setTimeStamp(0.6669766881607989);
    msg.setSource(10555U);
    msg.setSourceEntity(190U);
    msg.setDestination(12399U);
    msg.setDestinationEntity(14U);
    msg.formation_name.assign("FHUSVDHZCNTPGDLQAERFPKFBYTKODMTWHZMBJNIEXJIAKWIVQQXNALOUZWXOJUYEGOZBUFSKAPLHMSAFMYSRTGEIINMWDPXMCXNGHQGCCWLYDBORLCZFKAYDOGROKEVFPLWPXXETJJQWZQRZKLGBFVBDSBSAPPQEPDOTQJNJDYCFKQIWVHYBSALIMUGNYULTLMZYHUMRXWBVUICUDTW");
    msg.reference_frame = 149U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 147U;
    tmp_msg_0.off_x = 0.20170605029453625;
    tmp_msg_0.off_y = 0.012290430070118652;
    tmp_msg_0.off_z = 0.8001652993225565;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("KDCBDLOHIVNKXWYEKJTWNKZJMALGWUMJOHMLTNRUPVVTSLFPSNYZGWTWRACDPZFTGRYDCLDSEQMGLVALADGZWYPCOWRDZPFZAXOYOFSRMGVKSUHXHNIQLFZXXXTBDEXQYUGMKTWJUCQKIQWNRHOCTYIRDKQXYXBAEKBQFBMVYRCUSMJOQPVNHNNHFJILZETJOWFEPPYFUAKHU");

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
    msg.setTimeStamp(0.8345673230708005);
    msg.setSource(49636U);
    msg.setSourceEntity(149U);
    msg.setDestination(3817U);
    msg.setDestinationEntity(118U);
    msg.formation_name.assign("PUQBOVXHFOKTQFKSGBFCPCJXIDBOGVHELXUVCNFMLLRFIDHDKRTGQFOCAXZIPOBORHPITMFNHCBJGRAHVMSYBBISKTVGNETUOFEYHJAZHMWPETPEEEMPUCXTZLYVPZCCUFWSOLQNBBOLKAXQJYRLAJVWRWKKNSJUQDRXWDSIZNZIHYGNMUFYGCDBSJUMTCWDMZVJMWUAUXQEPLGQDNZXSTIADVYWWQLVSGXMRSQ");
    msg.reference_frame = 253U;
    msg.custom.assign("SERMHKZAGRHDTAVGKQYBYLCEWIKSTLNPYWWGJDAZJZMOQPNINJHIKHCUPIXSWCBKQDBDKEQUOAHQLBNGXDDAYFMLWWYGMTXPGRDEXPGPYISITV");

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
    msg.setTimeStamp(0.6701536554787186);
    msg.setSource(10702U);
    msg.setSourceEntity(194U);
    msg.setDestination(52458U);
    msg.setDestinationEntity(49U);
    msg.group_name.assign("SKRFNLICETLLYACUPFBMIEETGVNZBVDQJGHGCYCQSBHUGLDPCDURPKJAGWZUQNEVDCKZAAEYGFVNYAXBDHNZFYHTETXGLUOIPOIWRVOWIWCNXUPSNDSKNCJOEUTNTPPZWOZISZJFKTFZXAMEGFELDQXDCMBRS");
    msg.formation_name.assign("ZANQCPOYRZQIPKGMPVFVBRISOGTVDYYJROGNSRWJZDBKGNZPUMWRDWXWQHWVBTTXJPLEMDVAXIHWSGMOIBCYYOUYIPQRYHLEUFCHGSBBJLYLOZFIHXNLLJOSMAESDVEFQNHMPQEDGWWLUITPSNFNVEJMCCKUPBFZRCTQIKDLDOAOUXTINRYTUDFSXUERKAGXCBKTXUEZCTHMHJQEVNMIYJGOLKBQCWRWFHKMFXDAJUAAZJCA");
    msg.plan_id.assign("NQXLMUBLOQZGVCWLAABDNIPZBOEKJPOWGKMULTMTXKYMHKCIORDFOTIBLZVUMORRRDSCYEWNEZYVTYFQWKHBEWUGFFTOPNGDSIZXUIDSSNHBTFXJZSWALKNPQOLLSFMWMZIFUWXPQXTNEAGGPVKPGXVAYHGZVXJMGCHWGAUXDHIPMCRFACSTTYJENQAZCTAEYSFNRVKLEMBCQCHPXJCNLVZVOIYVHDJYHJRKUQKOJUSWHUJBIDARBIBJFDSPE");
    msg.description.assign("LQSCLPWVRKCKQUFHSZVPZATHBGSCMZTWDBDAPUDUEYMVMDMBWOXSOFJCFEYTEUHGBJKDFOFNGAWCDXNXTOXIXGQAGGZGWELRBKSNFLWMXTCBMJJUHOYFINVERVCAIPIIMHJNZTBNETCRHSHOUQZJKEMQFAQLPLD");
    msg.leader_speed = 0.05636759762755439;
    msg.leader_bank_lim = 0.3064154159740716;
    msg.pos_sim_err_lim = 0.689002843674594;
    msg.pos_sim_err_wrn = 0.9610014019421396;
    msg.pos_sim_err_timeout = 27648U;
    msg.converg_max = 0.7880451091286044;
    msg.converg_timeout = 61794U;
    msg.comms_timeout = 48318U;
    msg.turb_lim = 0.14371635734489485;
    msg.custom.assign("ELRYATENFHZWKPJORMGDGEOFDVJMPVXQLYIKYILEDUOCVJFXLQRDSRDGWYCPZAVXBDBTPKLUNERYUAGMUOPXFIHJFOINVFZTOAAQXXLMWXGOSCLLKUDTKOKJIMUBDANOHEXZYDCQEPSIQSANZBMQTKSHUVXRQXRUWPJEUYJ");

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
    msg.setTimeStamp(0.22228404354201603);
    msg.setSource(46041U);
    msg.setSourceEntity(156U);
    msg.setDestination(51296U);
    msg.setDestinationEntity(39U);
    msg.group_name.assign("NEUERWOKZKANPKLQRRATGDYIVTZYQYFLFNNLBPMNQHHSJWWMHSINFNZRUILDEOPETAASBUZANIFTFQUYXHKJELELDRGCDUQIHZJVUXOADVAXLJXCMJWRPYJBSOUHGZCT");
    msg.formation_name.assign("WSCKFFZSCWDXHXINXJPPIFLZ");
    msg.plan_id.assign("TUCAHGRLYPMVRCQCTOOFTZBSVZJRWLRBRYBHXQOXABLDZANVCISPZNHNONVDUEGOAVYDLOMGMTPADOHZTMAYNTMNHNDKUT");
    msg.description.assign("DEDBNLNOXIRAUWHWLFJXWBZQYCSGVSQYQJSFOBXVNQEPJVAOLJVZIZIOCKRPRIFXVCIGAMALKHGGLFKPJMZTHOKDEEJTPWEUMRLEMWFDRQOKKKIKQUKLZETAMYADFNYJMZTSCOWXUFFIPNSZJCREYVWSSTMDULPMBONAHEBASSUMLINHPNYHCRYGCDDFUOTXYIHNXPKYDZIZPXWHBQPMZDATJWBGQOLXGRVVUBNSTFWRTQGJXUCGQHBUCG");
    msg.leader_speed = 0.14274219004508948;
    msg.leader_bank_lim = 0.46346506748189986;
    msg.pos_sim_err_lim = 0.6971102645659607;
    msg.pos_sim_err_wrn = 0.8181827145504477;
    msg.pos_sim_err_timeout = 19515U;
    msg.converg_max = 0.12386137284054999;
    msg.converg_timeout = 23454U;
    msg.comms_timeout = 65079U;
    msg.turb_lim = 0.6664571980752569;
    msg.custom.assign("PTTDDZYUIKPSZWMMSIOJKZLPGUBJNGMSBHSGNUTMYBMKAACVSQMOTRJODRHQYNXKRZHXZUGEBPEYGFNEADWJIUKZJHAAVGMZFIOPVDAXNCCEWCRLBSKNFIQHDWCVPIFUXXFTBOQFLRUXVTCWYAFPHWQGQFSJWVJICORYQBBENDULHENLDPYAT");

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
    msg.setTimeStamp(0.7268857896231016);
    msg.setSource(13738U);
    msg.setSourceEntity(118U);
    msg.setDestination(53613U);
    msg.setDestinationEntity(148U);
    msg.group_name.assign("XXEVCSFZPEWVMKEYKXUNQOTUORWKEKXQBNCEZLZQHMLJKPXBENYYFUQPTVTPBHEIXAGCCLMSYSUQYLVUSWRRRSOMUSOAZLNHTIMIYSIJHMJYUBTGZODFIMDPDJCALIQNQROYTKABVWPMAGWWHAOVBADVBAGGGISHWEZUKGLKEXBLIFJVHBQZZPIXN");
    msg.formation_name.assign("KMTXSVYUWBQ");
    msg.plan_id.assign("OXRSWRJWBJYVVKQBPEDPOPMVQANZCSTWNNPFGCZSNPDXWGTIFUOYMCIVMKUDCOBHIKHEIEFJTHXLDLMLWEMJULTEDICXQJXFKUAJDGMUVRGPHRCFMNUYWFXIPTVYPAEKKLRTWURCSYGUXTORQKDVAUGBBHAKQTEQGHWSHLBQOWTFXZDSNQYLOJAENLVCVSQGSJAOSICLNKBFUENZPXAMHBFNRMWLPZZRZVBIODIOHDEYYMZXZTCZSBKR");
    msg.description.assign("CXPADIKPKQMAYCWGVBEDNMYNKCESZUSAEJRGVQDCBIHLLKAXJNFCDRESHLFGXRQHCKLXMRNWKEAFDEQRVRLXYCWLBDCNPBFHMZRJOPQSNTFLNWIAYIHSODZWVORWYMOMVUHURXPLTIOGXGGEKAEYRUDFIHDGISVWPTYZYJHUEUIOMJTGFBBBKTOGNVJZMPOVCTUWONUSZTXZGZMKQFEBQZHQWUPQHTJKZFXLDO");
    msg.leader_speed = 0.720453800474043;
    msg.leader_bank_lim = 0.6361539354563109;
    msg.pos_sim_err_lim = 0.9473703708026642;
    msg.pos_sim_err_wrn = 0.27266960909975424;
    msg.pos_sim_err_timeout = 41012U;
    msg.converg_max = 0.09672011181813644;
    msg.converg_timeout = 27257U;
    msg.comms_timeout = 57512U;
    msg.turb_lim = 0.8912291030445554;
    msg.custom.assign("PZMZIYVIHNBYDCJSMSBXUCGLVFDEIWYVYRMUTJQEPHEOWNTHRAHOTUFTLMQHWIEMVSBTZKTNFXVHQOMKAIOIBXFWQKDTGGQZOSLNHSCURACGYKBNBPJFQLRVLLKWZMOCRCQSNCDGAZFFPMMPLSXZNAUTEPJXPPBFEMNKIKUZWUHRGUJJFAEQLXJXKBQRGCGRVXPJZAOYJCVHYPNNAIHKBEGYFEDYDUAYWDTVSRLARVEZXDOCWISKXG");

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
    msg.setTimeStamp(0.8438942061532564);
    msg.setSource(42619U);
    msg.setSourceEntity(99U);
    msg.setDestination(61082U);
    msg.setDestinationEntity(105U);
    msg.control_src = 35894U;
    msg.control_ent = 131U;
    msg.timeout = 0.8718956707547072;
    msg.loiter_radius = 0.3093940059243542;
    msg.altitude_interval = 0.7105855734395478;

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
    msg.setTimeStamp(0.6722330446167665);
    msg.setSource(23377U);
    msg.setSourceEntity(107U);
    msg.setDestination(44995U);
    msg.setDestinationEntity(93U);
    msg.control_src = 60840U;
    msg.control_ent = 48U;
    msg.timeout = 0.03319194801147518;
    msg.loiter_radius = 0.972515053031779;
    msg.altitude_interval = 0.8760553291310273;

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
    msg.setTimeStamp(0.0197599256893356);
    msg.setSource(33700U);
    msg.setSourceEntity(250U);
    msg.setDestination(24844U);
    msg.setDestinationEntity(144U);
    msg.control_src = 22932U;
    msg.control_ent = 9U;
    msg.timeout = 0.3138163124716863;
    msg.loiter_radius = 0.25378672260628;
    msg.altitude_interval = 0.9186710851033285;

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
    msg.setTimeStamp(0.9099163864197929);
    msg.setSource(32916U);
    msg.setSourceEntity(209U);
    msg.setDestination(13797U);
    msg.setDestinationEntity(79U);
    msg.flags = 69U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.20130685471387222;
    tmp_msg_0.speed_units = 94U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.17111033357671068;
    tmp_msg_1.z_units = 185U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5064402790946986;
    msg.lon = 0.6632296860634072;
    msg.radius = 0.9245869567885163;

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
    msg.setTimeStamp(0.9295690593921772);
    msg.setSource(39408U);
    msg.setSourceEntity(43U);
    msg.setDestination(20437U);
    msg.setDestinationEntity(198U);
    msg.flags = 217U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2700340520003327;
    tmp_msg_0.speed_units = 108U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5641137928848843;
    tmp_msg_1.z_units = 106U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7989655439515346;
    msg.lon = 0.9906496205075082;
    msg.radius = 0.5845040415803191;

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
    msg.setTimeStamp(0.5940400616546659);
    msg.setSource(58139U);
    msg.setSourceEntity(154U);
    msg.setDestination(55283U);
    msg.setDestinationEntity(116U);
    msg.flags = 173U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4190935955213595;
    tmp_msg_0.speed_units = 74U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.03261743608226808;
    tmp_msg_1.z_units = 163U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.08215751697659757;
    msg.lon = 0.23486072996561047;
    msg.radius = 0.6393060603047255;

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
    msg.setTimeStamp(0.36941757878730563);
    msg.setSource(49439U);
    msg.setSourceEntity(197U);
    msg.setDestination(5846U);
    msg.setDestinationEntity(14U);
    msg.control_src = 24185U;
    msg.control_ent = 136U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 76U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.15597500536704134;
    tmp_tmp_msg_0_0.speed_units = 181U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8963320327085978;
    tmp_tmp_msg_0_1.z_units = 8U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7727918313070183;
    tmp_msg_0.lon = 0.2593015785975191;
    tmp_msg_0.radius = 0.1273850458613971;
    msg.reference.set(tmp_msg_0);
    msg.state = 111U;
    msg.proximity = 244U;

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
    msg.setTimeStamp(0.3354956424188198);
    msg.setSource(24144U);
    msg.setSourceEntity(79U);
    msg.setDestination(32086U);
    msg.setDestinationEntity(10U);
    msg.control_src = 1656U;
    msg.control_ent = 5U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 33U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3772635425699461;
    tmp_tmp_msg_0_0.speed_units = 205U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2871984105399543;
    tmp_tmp_msg_0_1.z_units = 190U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6906059566332903;
    tmp_msg_0.lon = 0.8389576137993124;
    tmp_msg_0.radius = 0.9328206573268859;
    msg.reference.set(tmp_msg_0);
    msg.state = 213U;
    msg.proximity = 236U;

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
    msg.setTimeStamp(0.6264301545934583);
    msg.setSource(39152U);
    msg.setSourceEntity(223U);
    msg.setDestination(48892U);
    msg.setDestinationEntity(101U);
    msg.control_src = 4006U;
    msg.control_ent = 110U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 50U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8369248520269412;
    tmp_tmp_msg_0_0.speed_units = 32U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7645149674435626;
    tmp_tmp_msg_0_1.z_units = 247U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3329068461285951;
    tmp_msg_0.lon = 0.2987481262380598;
    tmp_msg_0.radius = 0.8465261933216153;
    msg.reference.set(tmp_msg_0);
    msg.state = 153U;
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
    msg.setTimeStamp(0.33451735234388635);
    msg.setSource(64187U);
    msg.setSourceEntity(247U);
    msg.setDestination(52628U);
    msg.setDestinationEntity(210U);
    msg.op_mode = 124U;
    msg.error_count = 129U;
    msg.error_ents.assign("LHCPYVJZASTWCIXBSISYMLNTVVEDXYNOFOZATVTXDJYXQNZLMBYGILUCMUHPCOQNSIYGVPYDFKLMFTUWIRKOZKJUYXQXHBHIPGVGYMOQEQKWHIRXBGXQCELVDCFPMQPFELVKMAZHKDTSXOMCZXNUKZLDUGZPWRTRBPHFSIEAZGGVUMDPWQODYKHRKWAJEDERFQJOEKS");
    msg.maneuver_type = 49376U;
    msg.maneuver_stime = 0.3451554083732309;
    msg.maneuver_eta = 60631U;
    msg.control_loops = 1149446595U;
    msg.flags = 59U;
    msg.last_error.assign("JHTQMYXWMOWBFETTAVDNNTBFVOBITYXUGNGKDEWURRUNKZHZNYCCKHOEEXG");
    msg.last_error_time = 0.07509685311046266;

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
    msg.setTimeStamp(0.5059192219779879);
    msg.setSource(7983U);
    msg.setSourceEntity(95U);
    msg.setDestination(57607U);
    msg.setDestinationEntity(5U);
    msg.op_mode = 8U;
    msg.error_count = 42U;
    msg.error_ents.assign("BXVCLQIVFYNGVUCUGLDTPUINZSHMXBNGZEYGFMNXRLGOYDASPJLPGYACDVOISWJIAILZXKKDQRIXOMJKDYWVEWUFJPQZUNJWAFFBXHGUJAGEYTREVASTRBWTYODPANQLAKPTMVCIQNUXXWQZZOBLERCRAVFQQUEDPHHJWGL");
    msg.maneuver_type = 8179U;
    msg.maneuver_stime = 0.6515453043297399;
    msg.maneuver_eta = 47014U;
    msg.control_loops = 1215661722U;
    msg.flags = 142U;
    msg.last_error.assign("EONTAQOMXWCIBEPCSNQLHDJQUVRBLNHKSZYWCHVFCYUUTFGAZWXMCRKHHUMTSQTUQZHIFMLLNMWWTZWCCEPSOWDYOFVKJUGSNGKNZUHMZAEVYVDGYMVMSSXOJBGEVFXHGGAPHTCQAIZKIDSQLVNQLKPUDASYJBXEEPN");
    msg.last_error_time = 0.9672308108586396;

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
    msg.setTimeStamp(0.7290580009010201);
    msg.setSource(52792U);
    msg.setSourceEntity(98U);
    msg.setDestination(33599U);
    msg.setDestinationEntity(133U);
    msg.op_mode = 11U;
    msg.error_count = 168U;
    msg.error_ents.assign("IEDHCHKDPALAPSNQZEOBDWEGYVRXAXBTEPCWVKRCOGEIGZCZTXRGNPNQIXJDLUBMOTLDFYEAARUQWXMFWJUSSZBFIZUIVSWSCIPIPCGDFSNUTDKYUFWGMFEHONJNNSREFIHQJCAHSBMUFDWMLBVTCFJJOTKSBGCPYVEBYOYFHLPEVWRHYAWDXCTTRXKUILGKOBJN");
    msg.maneuver_type = 9813U;
    msg.maneuver_stime = 0.3433761581560978;
    msg.maneuver_eta = 24845U;
    msg.control_loops = 3723934156U;
    msg.flags = 7U;
    msg.last_error.assign("WAOLURGLERXCMSPPBKGUNQYUVSXVKYDBLAZJJNYDIOOZKKLRQDWDBQFNBEEOWCFZLDQYEGCAIDJUFRGVXKEXMFNYPBWTHTFZVTMNJLPJXCFTMHFHWPVPSILWQCDKWSLEHCYCAZDHCZRBSUXGGUVENQ");
    msg.last_error_time = 0.024207340256602206;

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
    msg.setTimeStamp(0.04762688056583941);
    msg.setSource(10147U);
    msg.setSourceEntity(75U);
    msg.setDestination(60954U);
    msg.setDestinationEntity(10U);
    msg.type = 253U;
    msg.request_id = 912U;
    msg.command = 65U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5275077821100529;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 24382U;
    tmp_msg_0.custom.assign("FEHVLPRRQBQBVMSQVARZDOOYWPMKZMHGZFTWEQOQDYDEHLULLJXPLARJGFHIAOKYISTQSEEBPVXPFVPHMXJMBKGXBIXXAYOLVKSZYPULHZGNGKCSIYUQQOEGQMAWLJCGFVNGDXTCWNHSIQDDRNKBPATSDUDEKCZNVXIAGJNIMUHCUIBWSCTZJKRYWFTPWNEZNRBCMIEXLYAZOKVTXACKJANVUJFBORTPRUFUJWOB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7887U;
    msg.info.assign("KJPWSRVUOLHDFGYDRTLKHONXLSKTECPRGOGLXTCAMBZVZWENRKFPHUNXSQJVXUKHNRUIHSTLEAMIMMCNTWQGJFYMNQJFVUCIIAEUDFXOMXSYZJQDO");

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
    msg.setTimeStamp(0.8127444084711296);
    msg.setSource(51535U);
    msg.setSourceEntity(140U);
    msg.setDestination(24682U);
    msg.setDestinationEntity(52U);
    msg.type = 92U;
    msg.request_id = 33136U;
    msg.command = 169U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 39903U;
    tmp_msg_0.lat = 0.8463617059573199;
    tmp_msg_0.lon = 0.18823332901490852;
    tmp_msg_0.z = 0.572232217173269;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.duration = 41321U;
    tmp_msg_0.speed = 0.21530354744026237;
    tmp_msg_0.speed_units = 40U;
    tmp_msg_0.type = 73U;
    tmp_msg_0.radius = 0.11131833173130146;
    tmp_msg_0.length = 0.29324682650314715;
    tmp_msg_0.bearing = 0.29426634741255486;
    tmp_msg_0.direction = 182U;
    tmp_msg_0.custom.assign("EOASNOLTBLDLWCFPYWHNPOUUFRDSPTZMRQEVIVJKNDRUGEIWHCAVPTSPGFFBGGOZTZCZJRYYWXACSILJNNQQDDXWKLAVB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32492U;
    msg.info.assign("DNBZUNIBGBQUPHGTOSRMUPWBERFBMFSDSLZTSMCITAYCPSY");

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
    msg.setTimeStamp(0.2340695921465955);
    msg.setSource(6792U);
    msg.setSourceEntity(194U);
    msg.setDestination(34731U);
    msg.setDestinationEntity(254U);
    msg.type = 130U;
    msg.request_id = 3684U;
    msg.command = 65U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 28445U;
    tmp_msg_0.lat = 0.2201620828543034;
    tmp_msg_0.lon = 0.8485801287325232;
    tmp_msg_0.z = 0.0890333899864042;
    tmp_msg_0.z_units = 243U;
    tmp_msg_0.pitch = 0.8703717553687547;
    tmp_msg_0.amplitude = 0.23380891311292917;
    tmp_msg_0.duration = 123U;
    tmp_msg_0.speed = 0.07174275229463978;
    tmp_msg_0.speed_units = 203U;
    tmp_msg_0.radius = 0.2100988284929639;
    tmp_msg_0.direction = 21U;
    tmp_msg_0.custom.assign("TMMDJYBWFKDMSWGDZUQYHLXOLIBFHYTLKSRAOESJPKMLFWBENTFQHGUZYKHTGDRVAULGQEEZNERQBOUHMURVIXHKKUYDWXLVFRZEPXLEKYPLXCWMPSGGGRBABNRZWBETWJJFAYAOLUSBOACUHVIRXDCCBDONSFGITCOPOSQAVJWHQNQFOVHDNGRUICQZDKZKPRLJFYVDFHTXIY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20553U;
    msg.info.assign("AOPVZDZWYESUQLSWHODVAWDIZLFJCITBPRHADFLSPRMVGXLNIHHEOPHOYKCMSMUDYSFOVEYICQREUBSGFRKKEXHHRHZJBUKWGTQQMXMJBREXSAAQV");

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
    msg.setTimeStamp(0.7056723233244095);
    msg.setSource(27142U);
    msg.setSourceEntity(133U);
    msg.setDestination(13659U);
    msg.setDestinationEntity(101U);
    msg.command = 205U;
    msg.entities.assign("GJDCPHVVSARIXUYUEOTBJCRATIZSJDDZBFYMLKEZHXRINMTNUYIQNYFJZGBNWCALJPK");

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
    msg.setTimeStamp(0.8620605112577682);
    msg.setSource(49812U);
    msg.setSourceEntity(59U);
    msg.setDestination(61390U);
    msg.setDestinationEntity(139U);
    msg.command = 189U;
    msg.entities.assign("XIPQAWNSYERUWUXPJUPRBZTATAKHJTIVNESMCLLBBKSTIDYYLQFGGEUIZSHWTWEHCMZBIOJOFUGQSWJBKD");

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
    msg.setTimeStamp(0.9754120245679724);
    msg.setSource(4195U);
    msg.setSourceEntity(154U);
    msg.setDestination(53649U);
    msg.setDestinationEntity(110U);
    msg.command = 46U;
    msg.entities.assign("LSVPDQKESIOAUYEWJJMAFXZOEHESUQDVJVFGSTBFEOPOYPBZPNKXNODARFTAWXMZPYMJCCEPJMHMYIQKBFAPF");

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
    msg.setTimeStamp(0.9201396374843427);
    msg.setSource(4406U);
    msg.setSourceEntity(182U);
    msg.setDestination(22143U);
    msg.setDestinationEntity(189U);
    msg.mcount = 46U;
    msg.mnames.assign("SOQJSBMJHBBRUQLYRTPGHSVOFFCKRLXXMBOQVOXICYNMAQBLAAWELCQZECLLONDTLFOABLVVYGIQVYIWWRKHRBAAGRWXKLOKSTIDTSNXYPUGV");
    msg.ecount = 138U;
    msg.enames.assign("DHMXMFSCPBAJYJJHIFGFQNLBSURIDJGQJZTZSNJIBTZZFZMAOVVNFTINIVXPFZUMCCAMIHPXDXKOCEMDYOBHTYBITUEUTMKQFBXLEWSXDERCLAAEHHJYGINFWJKNYUOWVMVZLGRHQZLBDWHULRPHDPASRKVKQSTM");
    msg.ccount = 82U;
    msg.cnames.assign("SLNXQKNIZYXJSSDWECEVDOESQHOZHCMGXDXRZQGPFFUWQCGGNRNEOTITZLOVYZUFTASUZBKAFIKKWKQWPSBMJGOQURBXTMUGYQZYDABPODRIJRNVZPSRTMYDYNHOIUONTSPZFIAIXIAGDKCPDKMWAVSEPHLBXYRLLJWMVRJWXELLBUUYEBCPMXOMCPBA");
    msg.last_error.assign("OMZQYXNUXMNLEOUZHPFNUKIWQBKKRTIUSFWOLYZJGIOCMCYV");
    msg.last_error_time = 0.20463702043853682;

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
    msg.setTimeStamp(0.20178208138071485);
    msg.setSource(27176U);
    msg.setSourceEntity(187U);
    msg.setDestination(29838U);
    msg.setDestinationEntity(250U);
    msg.mcount = 215U;
    msg.mnames.assign("RTOWKWGSBNTNSOAMDGDQETBUFSANYIJPFDIMJDPJIPYWGISIJVDLFDWUZGDJYZSEQIFOBVXQQLNXMUBCKBSJKMZUCEHLAGJHQAQPXJYJIKANBLHAWYIXJXVPZZSYRYTLYPCYCRHECTNKMXKHRWLSOMQMFNAMAUEKHVXVFBEOMFPSBOVETUFTQHPXITBOUVWFPLQLVRWLTRHDBQARFONKOCXEGINRZCRAVWLUPOCSMYUTZGKUHKEVRZZZ");
    msg.ecount = 58U;
    msg.enames.assign("CSXSNCGIZLLBUBLLHBSYIQUXFMVVBWEBIJJONGG");
    msg.ccount = 234U;
    msg.cnames.assign("WNNVFRIDATSTQVMBOIJMVDFEEDSWVTCGXNSOTMHAHJQOCZKAHGRXGKRSYQTSBTMEJAGPPDZINOCBNBOTKBVHGPYMPZTENCXUFKJIPVGTZCXVJJJDHDHYIQUPLZIPXFEDECLURZASXKMYZM");
    msg.last_error.assign("ZDRRQVDHZDWZCKHEABBSBRWBKUHXRKKCYVULQXPPGJEGMVCHGLHKYULWYIJBXXZSUWRQL");
    msg.last_error_time = 0.765465660551497;

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
    msg.setTimeStamp(0.07430216210539786);
    msg.setSource(50186U);
    msg.setSourceEntity(155U);
    msg.setDestination(5702U);
    msg.setDestinationEntity(244U);
    msg.mcount = 116U;
    msg.mnames.assign("RZXCJOVJVQNGYKGHXPZVKZTWIGRYKSVEOAZDTUBXWPFIKMGXQYENNIWSBFKXKTFJJUBTLICSTXJMINFEOWEULYXSBFIGGABNMUJVOZJTCKYKDODUVYTOGGIQAJBXWQXPYQWMZQHQXWOYHWLV");
    msg.ecount = 176U;
    msg.enames.assign("IUBIHLFFUHMXYIDWXZWKWZNZGLAEYJHLJLQLGXHHYZBMTLSJXAKUSKOPZIOPTEXGEGQDLSQCNRVVOOWNRLHATBMYIVCZXEDSRUWDPKXHGHGVIORAVLNSDKZOKMD");
    msg.ccount = 194U;
    msg.cnames.assign("DICRDQYRZEUQXUFLKEXQHSPEDGPVGZBPGOWBZVIIYUUVWKTUAFKCSJXGNXAOUYHIJRSDEMOPNORNVFVEMCWORQTG");
    msg.last_error.assign("HFCKDZELPUORZSDVRLMBOLPGAMXPLLSGWHMHQKQJROCWXTXOYMHQSPMIAPSXIZODSEBEAZNQIEHSXRRUMYDOTJQJYIHIFCIJZQDEBUJKAMXDXNHKLDPYOYEIMQAXTBBLKVYMIKJETYFKFGGTNPVWEWGLVUCFLJHBFZXKVRPWRLQAWDYNAUGQTKWTBZCBUYIPFNSRZNSVNRWUDZCBJUWUCGVQTPEGASFKM");
    msg.last_error_time = 0.013866983956712597;

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
    msg.setTimeStamp(0.6725043824697009);
    msg.setSource(31349U);
    msg.setSourceEntity(71U);
    msg.setDestination(20753U);
    msg.setDestinationEntity(238U);
    msg.mask = 121U;
    msg.max_depth = 0.3227919124877614;
    msg.min_altitude = 0.3675814323163864;
    msg.max_altitude = 0.48434998791242867;
    msg.min_speed = 0.6991029612903304;
    msg.max_speed = 0.7284926552403693;
    msg.max_vrate = 0.03703807209623278;
    msg.lat = 0.2848936120284027;
    msg.lon = 0.44016193225370115;
    msg.orientation = 0.13019088577989946;
    msg.width = 0.2044976986431063;
    msg.length = 0.5420059353136145;

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
    msg.setTimeStamp(0.44698126010392614);
    msg.setSource(56684U);
    msg.setSourceEntity(143U);
    msg.setDestination(62920U);
    msg.setDestinationEntity(97U);
    msg.mask = 248U;
    msg.max_depth = 0.2986613131511515;
    msg.min_altitude = 0.4881224663574494;
    msg.max_altitude = 0.4411226886563939;
    msg.min_speed = 0.3427973399623434;
    msg.max_speed = 0.6788150350431515;
    msg.max_vrate = 0.7713857676841142;
    msg.lat = 0.2845002275617241;
    msg.lon = 0.2690707236092601;
    msg.orientation = 0.5679214275530223;
    msg.width = 0.6089754355242162;
    msg.length = 0.056352631932211295;

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
    msg.setTimeStamp(0.3635226306587783);
    msg.setSource(42093U);
    msg.setSourceEntity(231U);
    msg.setDestination(70U);
    msg.setDestinationEntity(73U);
    msg.mask = 155U;
    msg.max_depth = 0.645372360459472;
    msg.min_altitude = 0.5830666396027113;
    msg.max_altitude = 0.31751267942650185;
    msg.min_speed = 0.8632397237288955;
    msg.max_speed = 0.7246878363940276;
    msg.max_vrate = 0.22733041369161044;
    msg.lat = 0.1747607877179307;
    msg.lon = 0.9686320952410686;
    msg.orientation = 0.6486824831473201;
    msg.width = 0.3751918598608375;
    msg.length = 0.059207996047272116;

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
    msg.setTimeStamp(0.0254933723551114);
    msg.setSource(64090U);
    msg.setSourceEntity(152U);
    msg.setDestination(17676U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.640609052519415);
    msg.setSource(33982U);
    msg.setSourceEntity(187U);
    msg.setDestination(26080U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.052629831953423745);
    msg.setSource(55765U);
    msg.setSourceEntity(47U);
    msg.setDestination(30944U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.45109676670256504);
    msg.setSource(7765U);
    msg.setSourceEntity(105U);
    msg.setDestination(44422U);
    msg.setDestinationEntity(69U);
    msg.duration = 33939U;

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
    msg.setTimeStamp(0.20034421806749902);
    msg.setSource(10101U);
    msg.setSourceEntity(85U);
    msg.setDestination(40178U);
    msg.setDestinationEntity(146U);
    msg.duration = 56487U;

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
    msg.setTimeStamp(0.7101675176830474);
    msg.setSource(51662U);
    msg.setSourceEntity(25U);
    msg.setDestination(26450U);
    msg.setDestinationEntity(215U);
    msg.duration = 43594U;

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
    msg.setTimeStamp(0.6755472528908477);
    msg.setSource(54135U);
    msg.setSourceEntity(133U);
    msg.setDestination(1102U);
    msg.setDestinationEntity(135U);
    msg.enable = 183U;
    msg.mask = 103565975U;
    msg.scope_ref = 597555324U;

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
    msg.setTimeStamp(0.5737640208626988);
    msg.setSource(62039U);
    msg.setSourceEntity(161U);
    msg.setDestination(55087U);
    msg.setDestinationEntity(198U);
    msg.enable = 30U;
    msg.mask = 1488033767U;
    msg.scope_ref = 4200727220U;

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
    msg.setTimeStamp(0.47314639865263897);
    msg.setSource(38704U);
    msg.setSourceEntity(97U);
    msg.setDestination(1072U);
    msg.setDestinationEntity(253U);
    msg.enable = 126U;
    msg.mask = 679823628U;
    msg.scope_ref = 1133242671U;

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
    msg.setTimeStamp(0.16773492086076558);
    msg.setSource(35678U);
    msg.setSourceEntity(242U);
    msg.setDestination(10436U);
    msg.setDestinationEntity(68U);
    msg.medium = 140U;

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
    msg.setTimeStamp(0.8348740936143301);
    msg.setSource(26232U);
    msg.setSourceEntity(124U);
    msg.setDestination(54021U);
    msg.setDestinationEntity(197U);
    msg.medium = 198U;

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
    msg.setTimeStamp(0.5151548287265402);
    msg.setSource(32960U);
    msg.setSourceEntity(130U);
    msg.setDestination(40624U);
    msg.setDestinationEntity(11U);
    msg.medium = 61U;

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
    msg.setTimeStamp(0.5588369549569668);
    msg.setSource(15314U);
    msg.setSourceEntity(205U);
    msg.setDestination(4250U);
    msg.setDestinationEntity(21U);
    msg.value = 0.8364424069148593;
    msg.type = 223U;

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
    msg.setTimeStamp(0.4373120701014296);
    msg.setSource(29075U);
    msg.setSourceEntity(164U);
    msg.setDestination(40554U);
    msg.setDestinationEntity(13U);
    msg.value = 0.3432358141745979;
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
    msg.setTimeStamp(0.4642606460579497);
    msg.setSource(35191U);
    msg.setSourceEntity(46U);
    msg.setDestination(32358U);
    msg.setDestinationEntity(127U);
    msg.value = 0.9059618675755683;
    msg.type = 11U;

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
    msg.setTimeStamp(0.9745472928789906);
    msg.setSource(56720U);
    msg.setSourceEntity(232U);
    msg.setDestination(41916U);
    msg.setDestinationEntity(16U);
    msg.possimerr = 0.8643503738440459;
    msg.converg = 0.6968990839871563;
    msg.turbulence = 0.6476984821448415;
    msg.possimmon = 200U;
    msg.commmon = 97U;
    msg.convergmon = 138U;

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
    msg.setTimeStamp(0.12365931099533412);
    msg.setSource(5409U);
    msg.setSourceEntity(185U);
    msg.setDestination(4678U);
    msg.setDestinationEntity(105U);
    msg.possimerr = 0.30678598539782664;
    msg.converg = 0.5107913419288269;
    msg.turbulence = 0.19624485345832;
    msg.possimmon = 206U;
    msg.commmon = 155U;
    msg.convergmon = 236U;

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
    msg.setTimeStamp(0.49831538555156196);
    msg.setSource(22250U);
    msg.setSourceEntity(1U);
    msg.setDestination(817U);
    msg.setDestinationEntity(212U);
    msg.possimerr = 0.38265388370860687;
    msg.converg = 0.8125117578164556;
    msg.turbulence = 0.9034027431205666;
    msg.possimmon = 50U;
    msg.commmon = 7U;
    msg.convergmon = 85U;

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
    msg.setTimeStamp(0.02469822166394464);
    msg.setSource(9477U);
    msg.setSourceEntity(217U);
    msg.setDestination(41238U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.9060099792259896);
    msg.setSource(19365U);
    msg.setSourceEntity(210U);
    msg.setDestination(63487U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.15514000353475532);
    msg.setSource(5574U);
    msg.setSourceEntity(136U);
    msg.setDestination(3068U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.4577659445380545);
    msg.setSource(16467U);
    msg.setSourceEntity(253U);
    msg.setDestination(25814U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("QWERWBSOYNRDTOCDRQVXAVQVXXUDHUZDBOPPFIZBWIKOGLKRYJGJYWKHPXDZXICIYTLLAXYZVGBHXNKQEUFOTHWRSOQDPDGYPITMEMYVJFWCBLTYRFM");
    msg.description.assign("AWPIQHZKRFMFGFEHINXIZWXJWEKNDOPTANXXUPPCCUKKHJZZQTACOXUWISPRHCFPVQQWUPUJQIMSADUZOLLWFWCUZTBSBANYPZQIKEBRVXQRHZTIEUDRGJEVML");
    msg.vnamespace.assign("SJWQOUJLSORCXNLNTQXYJAJWGJZAAUSXNFLEUBTFULDCRKUXPTLMUPHKZIGOBQEPUHRNMZFCTQYZEPDEYLKOLHRMOEVEDWVFKCCADAWIHVPXCYDGAOGPEQDFJAOID");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JGIHCAWIJNKYSECVRZHXRDWBXQBAPBSORTRPWVUJOPQGUPGCAFYAVZOKSQFEEFRLEXHAIHDOUVFLJGMFJEKWZSIBZWSROQTDOECJ");
    tmp_msg_0.value.assign("RKDXRIBLSLHFFVEWSUIMIPJDHXFKFTGGWXDAHHFBODLEZ");
    tmp_msg_0.type = 68U;
    tmp_msg_0.access = 97U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SXLIMCTDXCGAESZJQBYQBGUTUDBCNLRQKKUGEQOXKOGGBCJWLLKPLYSEGENXEWQNYNVKWLVMWUOMJQDKHH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MGGSGMNKBHPINVAMADODYRMEXLYRKXYIFAWTHQPJBLFOZVMKOLNAPSRYAQVFJRNKIRMXEBVHFTEXKTRTPQGUZHWSWWBZCMQAYULULHLCDXZXEGPJUIECFODAZKVEUDSLNOFSUADJBEITBRMEBUDAGTQNHSMDZGVWWNZWEJXHVOGBPZOQIHXJITOCSDWWSCRGZIPIOEPTCJKXJPV");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 23161U;
    tmp_tmp_msg_1_0.lat = 0.32294031792322364;
    tmp_tmp_msg_1_0.lon = 0.21005134149381877;
    tmp_tmp_msg_1_0.z = 0.290910846800039;
    tmp_tmp_msg_1_0.z_units = 91U;
    tmp_tmp_msg_1_0.speed = 0.12265888070265829;
    tmp_tmp_msg_1_0.speed_units = 46U;
    tmp_tmp_msg_1_0.duration = 38821U;
    tmp_tmp_msg_1_0.radius = 0.29261000637097656;
    tmp_tmp_msg_1_0.flags = 195U;
    tmp_tmp_msg_1_0.custom.assign("GJGEUCHHPTESKDQHQPDKOTABVOIVUKVHAWKPRVNXBTQTQGPXQSITREXXZVLTCZYALIMZKGY");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::EstimatedState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.lat = 0.6796607852251308;
    tmp_tmp_msg_1_1.lon = 0.7656257397661471;
    tmp_tmp_msg_1_1.height = 0.7094014737143997;
    tmp_tmp_msg_1_1.x = 0.4569778834478997;
    tmp_tmp_msg_1_1.y = 0.5707757813690073;
    tmp_tmp_msg_1_1.z = 0.010997093870052321;
    tmp_tmp_msg_1_1.phi = 0.051553838328579626;
    tmp_tmp_msg_1_1.theta = 0.05931836711306526;
    tmp_tmp_msg_1_1.psi = 0.0833231464297215;
    tmp_tmp_msg_1_1.u = 0.8638843481393;
    tmp_tmp_msg_1_1.v = 0.5574430123052013;
    tmp_tmp_msg_1_1.w = 0.7090055120180236;
    tmp_tmp_msg_1_1.vx = 0.3435708156865491;
    tmp_tmp_msg_1_1.vy = 0.4975356583751168;
    tmp_tmp_msg_1_1.vz = 0.8428589814101068;
    tmp_tmp_msg_1_1.p = 0.9488595848882007;
    tmp_tmp_msg_1_1.q = 0.048016798761635004;
    tmp_tmp_msg_1_1.r = 0.6670467508748936;
    tmp_tmp_msg_1_1.depth = 0.9599450214149005;
    tmp_tmp_msg_1_1.alt = 0.23585055051507664;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("NEUXPZPYJDHEZQVOZRYGVCIJNJUVQTNGZEFFSHNQMLNJWDVXRHAXDKCOFSFOQONADEPJBCXOKKLWOPLYUHAAAFQKIGCHMUVLTUGBDRMPIOYDNLSNTFVPRKT");
    tmp_msg_2.dest_man.assign("VOCEZLDCGEJKXVDNLOTJULMHPNZPXEIUTUFYCLKWNFGYMPUOWUCCNQIQWEXDQJKVGFMATDPBBIPEHXRQIDMWECSJGFKYPZOJHQSWFUYRQNMMEZTIAQHDWDIJYBSUACS");
    tmp_msg_2.conditions.assign("TDZKOGPOWLITPBCABFQSJFOLTJXSCVPBTSFACIYX");
    IMC::EulerAnglesDelta tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.time = 0.6793974350184345;
    tmp_tmp_msg_2_0.x = 0.27538670824479317;
    tmp_tmp_msg_2_0.y = 0.4174751798185916;
    tmp_tmp_msg_2_0.z = 0.8137667545956263;
    tmp_tmp_msg_2_0.timestep = 0.11822189699389174;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::AcousticDiagnostic tmp_msg_3;
    tmp_msg_3.enable = 21U;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::SmsState tmp_msg_4;
    tmp_msg_4.seq = 2473428497U;
    tmp_msg_4.state = 150U;
    tmp_msg_4.error.assign("BOHQZQJIKKMKVYIKXVFYJKDLQGPSPRMYCYUEVMHFRNLCSEMBWXAWVCHTDLYSTXDSNKVHRNBAEVJYNAROOOIFAPGLMDUJDWQZNHSPGPWONWARWLUZETCPGBHELVVOFKCHTWFJENRRXFIDOYO");
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
    msg.setTimeStamp(0.5091805519692352);
    msg.setSource(22902U);
    msg.setSourceEntity(150U);
    msg.setDestination(244U);
    msg.setDestinationEntity(86U);
    msg.plan_id.assign("MBSNJWMLMDFAKPIUOTIHPOFESCMPSHQZPJBTQFRLGQGYXIZDXRVYDSZJQAHVMDUKYEUFLPZI");
    msg.description.assign("KWTTNNCIYSJDSMLHBOBMZWGAIEQCSRBZERPIHENXMTJLZUFSOBTOMBRYSXNLQSUKUTZVUPKJAQZPQURMZTCPTXHVDYOXGSEAMRYSLVWIPRCMEWKPHXGJMNHNJKVOFKAFGOLBWRDFVCABISYENWFCNDBQYMLGLUUJHEVLKDTWYGRCARUVEPDXAZHIWWCXJQUKOOFGASCWFIQGJHVVQFKIOTDYGMFDEPXJRIAJEDPVDXHNY");
    msg.vnamespace.assign("JUFGGEPYMQVGPNAMDWAXPROZJHNIZTRSHFCZQKLSBTFLGMPDSCJGMVKLQKTAOYMDYVZBURUIJIMSPDOOZCBWIPKFHSKKGWWZZVIMGZXWNVJBTUIQOTHTBACQQXDRWKNSHAREHLGGACVBYRAWITYVNPQOIFINDYEBUJEJOLUOAZJXRRMABEDCEMXDNTQWKHYRBVEFT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XIJDNVYXWBMFKDQUNVAEGOALORPXCEIPXSNOOLHMSRVHRYJJHRXGYCHEBKAFZHYMLPIMXJOVLDGGSSATYGWLBPGNSS");
    tmp_msg_0.value.assign("UNZUVKTITOPSEZILUYPUSASIZDDWRWVBCLVZSIWCHGSYNANISFOWXRAOVLENIQKFNIKQXRQXTXEDWPDSGGFMADKYVTEKJKOIVBXOIJZJEHMOBMWAQUUOJXDVYQUNPCQQCRHDYGZWLAAFABHCCRFPDQCOMNXJWQTBJXLFLHAEHGZMVTNKBPTLXVGMYGLUSFBTTHSAZFBHMJNWOSBNFYGDRLCCOPRMKGPZMRYMELTIURJCYHJ");
    tmp_msg_0.type = 243U;
    tmp_msg_0.access = 253U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XFVFADYGZSBWOUYQCWPTQGJKEHYYNOJUBRJKTRPTRIPVNKQLYTVCRHZGSIWPHYTGHNPZNYQORVUUFXICDJBKVFKXLSXWXEIQDRTUNLZVZYCLFAQNUSOLEGKSBADDCUCWTWXGSUAOARPCJZDMQNXISJCHZVCVOYLFKDWHXDMGAIONMISQLBFLHPCMKRWEETADLSBMBGJIRMBRPKIFOJGFETZNPAAEVBUWLHMIHDQGZZBNJEWMOOPSKVXEXJU");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PVXWVKHUIDRTAVUKCVAPIGFRGYRIZWXJTPCTGSHGCRTHOBAVKNMQYZCJKEYAZALCFRNWSDDASTJMVDMNPJZUXBSLEKUPPKKOSQOEFHPYIDPMGAFJSKMDXLFINXYLTGRVQHLSOOFYBGEQGYWLWNOHE");
    IMC::Loiter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 45905U;
    tmp_tmp_msg_1_0.lat = 0.8733117553376777;
    tmp_tmp_msg_1_0.lon = 0.909929150222622;
    tmp_tmp_msg_1_0.z = 0.32013019273950594;
    tmp_tmp_msg_1_0.z_units = 84U;
    tmp_tmp_msg_1_0.duration = 19655U;
    tmp_tmp_msg_1_0.speed = 0.5340928701481568;
    tmp_tmp_msg_1_0.speed_units = 210U;
    tmp_tmp_msg_1_0.type = 95U;
    tmp_tmp_msg_1_0.radius = 0.010435898429036472;
    tmp_tmp_msg_1_0.length = 0.2727279921113904;
    tmp_tmp_msg_1_0.bearing = 0.6341610777419942;
    tmp_tmp_msg_1_0.direction = 83U;
    tmp_tmp_msg_1_0.custom.assign("FGLRFBZEQHTIGVXGMXDSUXTLSHWOGOCSEIOABROMEWQHJDVHFGLNKAPZQQBGRDTNAASPZJXSHVSIACPTZ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SessionStatus tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.sessid = 3760630427U;
    tmp_tmp_msg_1_1.status = 113U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("OZDIOKJNLYQERHSDNGUNOSJKURCIJYAZ");
    tmp_msg_2.dest_man.assign("AZIQSFNKHARGXATZUERVFJJWATOSSZLCJCRWJLTGRHVRLEEXLCSDLLDPKTIPFWXRQZOWJMZABFNZLGPUVVJEQMHGTCVELKCBDVWBGMADPIUQUZGFQKRGQYVURBPPMDMOPGSXNDOBEZUEXLBUIKYZOXUSQIMDUYYCBMCMHTAFYOQHNPVBOWIAIXOWHCEFETXCIHSXDNXTBENJBSPGAYPFQFNHOJLACWKNK");
    tmp_msg_2.conditions.assign("QUSVWFYIPGGBHGOHJRAYTENXRKZXZFOUCWBMIYUVAECMFIYTZBUEKMHDPZQOMBFSGFLWIZRXYCKZCDBFVLOKGSFOTBYJLVWRBAGMYJYVEXMVWUWLZQJEIODNCOPUFQWCNGCMRONGNTSNLTQJMJFTXESGINDYISE");
    IMC::EntityParameter tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.name.assign("IXKVRUTMEHCJCMNHBYSRCFELEYKKDZJDGEDGXWDQCSOHYIXQUTNLTSJPFWTHXNJBIQFFECNERUBMRGLFAHRNIJBXJRKVDMRSPYOVTWQHVOLHOGYGQZLMJZQPHZAALUQNARXUVFINKPIMEEDXAOOPAXFMRUWVWMVFSYYWNJOAKBITITPGFZEKDIQJVDTGABURGPEXSGVMNGTLZCTSMCXSKUZDZKAKPHQUBOBUYWZLF");
    tmp_tmp_msg_2_0.value.assign("QWLZGTMKZAZPHOHVMNRDBYRYLKJDPRJXZYPASCQMSRUQHQSLQFLSNPXIVLXZHJOXTWKXQCYTOWTLUKJDVWWMIKONCCUSLCJIQJNKAIKGFNCOIASGADERBUYDPUSHMBHTVOMLPWASTKFWDIXDWRERZGRFBUIVKOJOXMPSQZCGEEHBBDVANXJZFDVFCP");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::PlanControlState tmp_msg_3;
    tmp_msg_3.state = 128U;
    tmp_msg_3.plan_id.assign("FQMPEBAWFNLWVUHSSSNFJXFYORMHKQDTRVRILWZGHAASFEFXPUMLHKROAOSYRDJUZGSMYDOMHXYPDQGPAXPFMLHUWKWQTTTXTJEBYQXDOEXIDCYIGGLZUBPZQYDUCVRMOIZOZS");
    tmp_msg_3.plan_eta = -39803905;
    tmp_msg_3.plan_progress = 0.5289148036725149;
    tmp_msg_3.man_id.assign("OPEFERVFUEPEZPNLDMLEPURJBJ");
    tmp_msg_3.man_type = 63207U;
    tmp_msg_3.man_eta = -249352978;
    tmp_msg_3.last_outcome = 74U;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::CommsRelay tmp_msg_4;
    tmp_msg_4.lat = 0.2074285704060278;
    tmp_msg_4.lon = 0.5410732926833189;
    tmp_msg_4.speed = 0.10938535342495737;
    tmp_msg_4.speed_units = 118U;
    tmp_msg_4.duration = 57268U;
    tmp_msg_4.sys_a = 59678U;
    tmp_msg_4.sys_b = 18637U;
    tmp_msg_4.move_threshold = 0.25195098772671876;
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.03650577358761775);
    msg.setSource(38095U);
    msg.setSourceEntity(60U);
    msg.setDestination(1912U);
    msg.setDestinationEntity(122U);
    msg.plan_id.assign("FKATHAWKCAIRILEFTQNJONPYPQPJPMWRYAFXVMDNCEDXFWSWDFSDWAMGPBUTSHLXJKDFV");
    msg.description.assign("CTLVPSRMHNMQDKIKCGI");
    msg.vnamespace.assign("BVPNURGSBQHZEHRXPSKONZVRAIXZGQQFSXEYFMGIEAWWIBZO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IXUKACEEBHOEMJTXTWVEODGGVGQLBVWUGWBGCBWNYIXTLCSFNHASNDQKWSVOPDKAPGZTXWPYWIQVLZFUKYCRTJYYKYONTZIAFZHSUWVUYULQIMRKWKIJQUNUJDMDHMDZOMENZIQKX");
    tmp_msg_0.value.assign("SVDAUPEPJXGKBPJGLWZBZAAMPHBZHOLJFTCWCGYICJKDCASMAHMTVSWWJGCPWPDSFAJHRVHZEMENXFKYVVDFFBWLVRINDGFUVDGOLMLFRYYQYBKEOQXIYSWSZYTJIEHYXCGVXWQSBYUNRQQJEMNLIFNNOXYXCMGPWXTJRBOIEURBRFTAPUBLWQKHMLOZECZANXCCDSTOTUFPLUK");
    tmp_msg_0.type = 202U;
    tmp_msg_0.access = 202U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HKIEPZYRTJRWRXBNBYHPFOGPRGXHWNTEBBIYHCPPLKPUDTKEUZSLAKTMMQVQHLAXPMMTJOSWSGGXHHOIIPISJBQVTVDXYHRKOXGJZAWODNESGSUAXHWYDZUEALXVLZ");

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
    msg.setTimeStamp(0.6838750939015892);
    msg.setSource(35662U);
    msg.setSourceEntity(210U);
    msg.setDestination(44066U);
    msg.setDestinationEntity(131U);
    msg.maneuver_id.assign("LOHTORYGBCIDGUGMVJEBZCGUQPAYXZIHXGANDMZDUKYNTDBNBALRZETZYKVJSSIUCGPFVHGDKEIJOEDQIROXZRCYLKPQRWWMQVLEMJJQPNQWPDAFJSRLSMMPNKUFISQKKVLTAWILAJDGOUUYEXDEGRTCBQWHXSKZXEVBXTMUIHBIYGZIBONWHMOSN");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 25984U;
    tmp_msg_0.lat = 0.9210647572266992;
    tmp_msg_0.lon = 0.1515934838366395;
    tmp_msg_0.z = 0.3003865274065691;
    tmp_msg_0.z_units = 32U;
    tmp_msg_0.speed = 0.9775228544019071;
    tmp_msg_0.speed_units = 147U;
    tmp_msg_0.custom.assign("TGRAJZHDNWPZCJLXUOGCMRAHEDURZISPPLXXRQXGYVFBNZKCEIVNHHFKX");
    msg.data.set(tmp_msg_0);
    IMC::QueryEntityState tmp_msg_1;
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
    msg.setTimeStamp(0.7796253720621457);
    msg.setSource(1562U);
    msg.setSourceEntity(196U);
    msg.setDestination(8898U);
    msg.setDestinationEntity(160U);
    msg.maneuver_id.assign("TMZVYGVZODJUNIFHYBLQAVOGJNSVNBDKDRDGXZNXMQAARLITBMMOWDBQOCRUNSDLJLWTKIAQKKGYJNWSYHQTVNWVEFXQWJFCQNQLEOPIHWVIF");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("MHYQGGLBXLZK");
    tmp_msg_0.reference_frame = 173U;
    tmp_msg_0.custom.assign("RZPXWGPZDWTHLPKANLQEBCGQUGMP");
    msg.data.set(tmp_msg_0);
    IMC::ImageTxSettings tmp_msg_1;
    tmp_msg_1.fps = 9U;
    tmp_msg_1.quality = 73U;
    tmp_msg_1.reps = 80U;
    tmp_msg_1.tsize = 188U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::IridiumTxStatus tmp_msg_2;
    tmp_msg_2.req_id = 36929U;
    tmp_msg_2.status = 253U;
    tmp_msg_2.text.assign("UFECJPDTHDEIQKZRLMSVWRKDHVBUHVSLPQYGJGDILZEWNYMSKVYFYNBDUHURGWKRXSBFNVUTXMLEAUALAWOTSQDIYODZOPTHUWRNQDSZNMGZJJCLOEPWWWFZMEXQUNHVBCWBXTBKJJBCBRIJSTXZOECGRBNYTMIOYAFICHARUOKGYQJFOGVAIIPQNYALDGADPUTXI");
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
    msg.setTimeStamp(0.49109484122847036);
    msg.setSource(56160U);
    msg.setSourceEntity(117U);
    msg.setDestination(40993U);
    msg.setDestinationEntity(182U);
    msg.maneuver_id.assign("GSURZVDEYDIVSLUQNKLYSSTIRAMPXPGCPHQZDOZTHJQXOWIINJMFASFRWQNFOFQYRKBBJVBLMXCQCYQLEKLURMPFEHESADCDJLHPGIPZJMWFDVIYWZGGDFZDJKBPBVTHJJSIVYGXUXOJNBXUHZZXVITIMETKDJEYQUITTUHAKHNCNLYNAKNUXTFOMGBQWYNCGCRWWGAHWVLZLUDEWFACOZAVCRSQPOSKW");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.7761690341983228;
    tmp_msg_0.lon = 0.833356979475493;
    tmp_msg_0.z = 0.8071990406050632;
    tmp_msg_0.z_units = 172U;
    tmp_msg_0.speed = 0.20268829362284435;
    tmp_msg_0.speed_units = 53U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 26146U;
    tmp_tmp_msg_0_0.off_x = 0.5406377781170082;
    tmp_tmp_msg_0_0.off_y = 0.15618742215180992;
    tmp_tmp_msg_0_0.off_z = 0.2013538148100794;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.3548229015647646;
    tmp_msg_0.custom.assign("GQVBDBVOQNBUBWCCWOIJTFUPIWSLOTPUCIDAWSANXFURYEMRUIQJJJXCYNEHNNMKRKZGABOYQVOHLSUPXAPOTEJAXCGQYGLLGGUQIAPDMLCFSZLJWAPRTWRSFMBBNSTRITAHBVDYEDFNMRZKZZGEMWDKLMFSIEZLPRMUFEVVCKBILWYAXDHWVICXMKQPQYQIKROF");
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
    msg.setTimeStamp(0.2983788086339699);
    msg.setSource(42614U);
    msg.setSourceEntity(32U);
    msg.setDestination(47120U);
    msg.setDestinationEntity(201U);
    msg.source_man.assign("BNXLXYXKAHQFKGVRN");
    msg.dest_man.assign("BCFTFWTLSPVKOPAAFHSMUFMRZSPBJNGALVMKTYFRFBHIUEGNBZYIMMHLVSEH");
    msg.conditions.assign("EKBLAUQZDXENTBVCSFPMQLSIZTAFYKIYWQUAFVIIGLWZVRGQCRPPLGHAIGUFHXUZBLSWSJXSYEVUOSIOFMVRMENCHRKWRBTLAPQDDYEOFISTYHLFNODGPKHKJJAAJTXDWVVGWLLTVBOTMRDYYOKMNPXIUXHPPQCPWOGVKCJBSNDTFIEJJCCBXYGQYFHMJOCDZYSQJCXQBZZUERVXGRNFOZDOTNBHNMBUHKWEUEDLMAWMAZRCQGS");

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
    msg.setTimeStamp(0.05822224327107772);
    msg.setSource(10110U);
    msg.setSourceEntity(19U);
    msg.setDestination(51097U);
    msg.setDestinationEntity(126U);
    msg.source_man.assign("BSLNQHKVZRMKEUXACFIDPAQPPGONGQSHISLEGCISYIZHYPTXEXOTBJUNFNTNYG");
    msg.dest_man.assign("MZHESQPDFQHMUUZIYDDPVTGKZMVJTFWJVTQOKXENGOUKEIRICYBHZMEBESMAIPDZUDPYNFAGPWHTJQFKZLAQZFQUSCSLBFSLBUBLKYXIPBEGHTAUTADOXRVIHQWNNSRRNDOQNKLXQUMEHUYCOWCXDZDRIOYGIAVVRWWYQOSJBYJXSMDJBLHAVZVVVRFPFHTTJIWGWELXOPWNXCEOG");
    msg.conditions.assign("RHSAILXNENHOVUFZXUHEASORBKICAMXYLHUUQMYCEJXDHWXZWUJXZNEGRHIJQPIBZTQEDDLRCCQAIGEPCLMKYKYKVEIWSCRMFAPZLYKDTKBBJCQVBAGHTVKNTXJQMGYAFUTPVSOXUDPSCRCFHOTODJY");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 153U;
    tmp_msg_0.system.assign("BIRGHTAFJFBLFBRHNCYOGSITUYDTQCBPYCAXBEXWPDEFQRFRHJUSVMDVXLWVRMYOHD");
    tmp_msg_0.range = 0.2535610578440003;
    IMC::Current tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.30706987601213653;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3430791496684673);
    msg.setSource(16026U);
    msg.setSourceEntity(78U);
    msg.setDestination(15751U);
    msg.setDestinationEntity(225U);
    msg.source_man.assign("TYRNYQMSBXEKTWJAAIOJYEYCRIIZVEZHWXJRMCZIFXKERFXJQMLYMVJQFBYHPOHKVVNZWXDCFLBNVWNVBELSWHUPOTLPBHHEVUUSSMXQFOQVZMDGGCNBSZUGRBCWDJBYMWEMFSGJHPKTFYXCDLTHXDAEBRLNIPCMQWAFLNUOEGMUARGAJTXZSPULDORBCDLGLNGOQIK");
    msg.dest_man.assign("LIHXRLPHSLPFGFQRXPIENAZKFKOPWWBYEZBKJCUEEIUYSQHSOLSDZJHVDXMEKUFTBKGINTNVYTPUALJHHFEXWUVCBSIRGUBQFMASDRXTQDASKWKOXIZWPYXTJQCEGUXCNSHQTOHWBVVPCAGRQCYRJBZJJSBLDBYCNGTVDZIPJYMPRVFKVMQN");
    msg.conditions.assign("SXUMTTSHBNTCVJOASAQDOYNUHMAGXAYMZIWQSUTFUFNYKCBQKSRXQKRDKLDGNTPVKCGWCHZOLXEELZKCBZUOIRWFMIFBHHPTZOCPDXGATMYBJOEGUPPYWTZIQPPKSAHDNJYYGZWIAMKIENDIFDPVRLLRXRJMYNEUZXWVEKWIBCQUWARQFRHXQUBHZRHAYLJVALEGLDNBFENFSJBVSMEJYKBCQOOSVQSDFJOWDFUTIRVVCLPITMJLWMGEHXX");

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
    msg.setTimeStamp(0.6513785287590375);
    msg.setSource(20805U);
    msg.setSourceEntity(152U);
    msg.setDestination(55412U);
    msg.setDestinationEntity(204U);
    msg.command = 47U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UEHPYCFQWVXEMUFRZDIDKNIGTFVTPKPRMILUHCKAPALSHQQPMNEUCUMJINGQGPSHKEFRXXJLZBZWLBQYSAPHWNRDKSJLVOPUHADFYJWOYIENNVTLFAONMTVJHMMZMBLGYBSCWOCQCLUFZXWIVUXMDXZZLQKTFQKVXEAGGHDTTUHDNCBZWKYROBPXIBMHOAJGKRPSC");
    tmp_msg_0.description.assign("GRUDQEPJWTLRVVNSGGQGKORWCZDQGKUXLKBCLPSLZPSFYLVCDNXMJKBAEHOUXGWAQGNDZXZEWNSUDOIAVYUEFYRQIPFNYLJPUKPFSGEWXIHPLEUXBOMKIKECMVUJIRYRTRGHHIQKXXBVPMONQCTYYZBUTDWXMAADRXKVQACCFBQWWEIJOSLJVTAOMDQALZHEMZNWFJDADTITSRCRIEPTJSOZUMYJVCCNPBYHH");
    tmp_msg_0.vnamespace.assign("RMCSWNPIBQVUNWQXJNNBHRPJVALSLXFROGSTAPLYKTBZKLSCHGCTEEGHVMMJWVEITFRFEWKFDPHZSFAJVOIJUYXNAYJOMYAPIOWHJQLGXDOBELVTXFTJWWNDVMMGSSFYNSYWMQASERHJKQWWDZTQRQGUOEOBPHFATUNDDBPFQVYITPAQUMIKBZHKKKXDXGECAZNRJQXUDRZCYDCHVRIIIUUXKROBHGYYD");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RGNZIUQOQKJEAAOLKLWOULPEHALIPLMKNTQNYWJVXTVALJVXNTQYLGCRKBWVPECSVFSMNZMCZDTVVJXHOFPMOBLQGAPMQICFEHRCWSNXO");
    tmp_tmp_msg_0_0.value.assign("ZUVTZLFQFZRH");
    tmp_tmp_msg_0_0.type = 135U;
    tmp_tmp_msg_0_0.access = 181U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DLKMDGXUYQVPYURBZNAUKLAWASMQENBLJGUAQPDLGCSLHSEHNOZVTPHQBZJIZJGSVYKCVHSOJUIOGFTNKOEFPQWOEDKTZBPHWLUXFMMGKXESEYHPCIQMWJMAJNCUMKXRVVSZXWQZVEDHAIRBSHBIYITYWDTDFXDITZCMLNEMRFAQ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("DEIOJTJGAXLBDSGTEWDQPYSHPVJULTBKHAGXZIBYVIUYKMWGQVVBEJONMCCNLMFZDNCOUAUNKSNWGRMFMZLEDVQISRPJTHZSIWRKETYCWRWJSZZCTESUZZMWJBOTXVVNPKFLFHDEFIHBTVGF");
    tmp_tmp_msg_0_1.dest_man.assign("XINWCYQXFHRBSQJDWGVCWJPSGEKMQWXOAVGELDRTNNMKMPOAKVWKJNXPBXZOGARNPXPZXSIMTVTHUCBFXZTIAKEJPHQCJKYDLRBVWNUCZYWMTTGRUNIDENUQTCTQJYFDVZSYLVYLEIAGICJPQYJL");
    tmp_tmp_msg_0_1.conditions.assign("ETDKARCSGGQQMJHRWLUMZLBSX");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.u = 0.42408537253042755;
    tmp_tmp_msg_0_2.v = 0.23798118309145744;
    tmp_tmp_msg_0_2.w = 0.44947342525261014;
    tmp_tmp_msg_0_2.p = 0.2950785074149169;
    tmp_tmp_msg_0_2.q = 0.32479878946731133;
    tmp_tmp_msg_0_2.r = 0.18299026678354768;
    tmp_tmp_msg_0_2.flags = 44U;
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
    msg.setTimeStamp(0.010705658209621882);
    msg.setSource(57928U);
    msg.setSourceEntity(68U);
    msg.setDestination(12905U);
    msg.setDestinationEntity(207U);
    msg.command = 144U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LBDSWUENGDSPEVRSUUTKWZVXPIMGDTHUAYBJCDPGVTOMPLMPFVNQOLKIZWRPUBQLFMVAYMOTOBYCGOCPCYNFWLFRSRGYQYWZCTAJILXOHRDMFYLPUZEHUNDINHFGZYVJKAHHSBKJFYHZTBHVQLVJWSRH");
    tmp_msg_0.description.assign("HWRQCLNFSDCSSHVLABRPTDDZPGZSOWQYXLGADLYBFJCFXFNEIUQOTCLSYDLBZYYPAXLXXBPBKVFYXABMSKUENAINUJKWVRUGHLPRPHFYIECWGGTSKVORPTHJCNVITOMUPZIKKYRMYMRCXVMTDBKSWOFLWBTHOUUQNEITFUUOMMGMXFFEJRRGEQ");
    tmp_msg_0.vnamespace.assign("SOABVARBHAGPWCCPKGPFKKCPTJXBOHVZYDWBVJUMMXNJZCOZLGUTQYNRRXGTDARFAEOZRTAZWOLOUBJSFNUNDKQKLLSZGIINSDGJPCRMRIKJCJTDNVQDSZBDWCHWBUWXMIMXKIILKXFRRKEDHTMAWIFMHEXMDKMNCQENIQLYYUOLUCPZETWGRYXB");
    tmp_msg_0.start_man_id.assign("BOLQQIOMLTJDOYDCNFISBAQGXQWUTEKBPPAG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("KWDYLGCUGQHNTVEAPATEQUCZJGLPMBZRTKHZEKYXLAPYKMJNAOOSSSSUPWSCPWBGRJYRDNHDJYBPBFHNWOOBEKUBLITYWPBNOHVXSLXDWOIFUCDZSZCCUXUIRLFXY");
    IMC::CoverArea tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0877093482506851;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.37985413984054517;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7361362206796462;
    tmp_tmp_tmp_msg_0_0_0.z_units = 112U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.38921865420960966;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 242U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("MAYPWZFIVHPDGBULCWMIGMGRWRCTDGDIITPPBXFKNLDAPPSAJZLEJYGFXGNXFLESMSAZZSKMVWQSXPBVXJMFUXEHRXBFRJLRPQKTTDJSDNTQBOZEVLKWOVRXNQCUYBVDYFVAIMJKPNJYALGPNNE");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("PBXDDVLQGHFNNXOSNLJDGF");
    tmp_tmp_msg_0_1.dest_man.assign("RRNQRUQCUPADHMZIGTIIXZWAJWAIHOMEYTVOWCFNRUTMURAICJCICCDXOFUPIRQXDBNKDEZZZWCAXVMRHLTHGYANLXLADVFUUZFFRBVVCLKGEJMGYJKHHKTYEOSSQKDTMKSVKKLIBDJEAFUGHDHWBJQSSGPGEMILWMSWWZPBGOPHAOGPLTOCFXKQGJJEWONTCMNWZNNJXUMYTPOIFXYSYNPXVB");
    tmp_tmp_msg_0_1.conditions.assign("ZSTIWPIWWISOZZMLXBYPCOBPHTVXDDRTBTUDTDGJMQOWVABBGEKSSJIDZNVPVWJEZSQTFOIQHOEAXBAXQUCUFNRJLKFVZGNUXTSCLNSLJGYABFKOKHJMKFKIKOFYHTMHRYREBEXQYZJBAEKUNDPMAHQYRMWJ");
    IMC::SimulatedState tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.46046224544229863;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.5854635196047924;
    tmp_tmp_tmp_msg_0_1_0.height = 0.6793185005126212;
    tmp_tmp_tmp_msg_0_1_0.x = 0.30014781351269604;
    tmp_tmp_tmp_msg_0_1_0.y = 0.46104694560841564;
    tmp_tmp_tmp_msg_0_1_0.z = 0.7516568215792312;
    tmp_tmp_tmp_msg_0_1_0.phi = 0.8236408778492548;
    tmp_tmp_tmp_msg_0_1_0.theta = 0.7052850238902513;
    tmp_tmp_tmp_msg_0_1_0.psi = 0.3736140323557683;
    tmp_tmp_tmp_msg_0_1_0.u = 0.536492993659521;
    tmp_tmp_tmp_msg_0_1_0.v = 0.05230209228829108;
    tmp_tmp_tmp_msg_0_1_0.w = 0.9486075934811814;
    tmp_tmp_tmp_msg_0_1_0.p = 0.3051142118650787;
    tmp_tmp_tmp_msg_0_1_0.q = 0.2145771108402812;
    tmp_tmp_tmp_msg_0_1_0.r = 0.2779238771160829;
    tmp_tmp_tmp_msg_0_1_0.svx = 0.6049031773119716;
    tmp_tmp_tmp_msg_0_1_0.svy = 0.4654812889813845;
    tmp_tmp_tmp_msg_0_1_0.svz = 0.6668959384922212;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CompassCalibration tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 24622U;
    tmp_tmp_msg_0_2.lat = 0.39358436782615636;
    tmp_tmp_msg_0_2.lon = 0.8907074150159416;
    tmp_tmp_msg_0_2.z = 0.9163584218379957;
    tmp_tmp_msg_0_2.z_units = 15U;
    tmp_tmp_msg_0_2.pitch = 0.9263330157048129;
    tmp_tmp_msg_0_2.amplitude = 0.08750608805045246;
    tmp_tmp_msg_0_2.duration = 60260U;
    tmp_tmp_msg_0_2.speed = 0.4610738759354682;
    tmp_tmp_msg_0_2.speed_units = 216U;
    tmp_tmp_msg_0_2.radius = 0.1612983338246734;
    tmp_tmp_msg_0_2.direction = 99U;
    tmp_tmp_msg_0_2.custom.assign("PBGEPUPUOVBCRQKRGOYZVLNCIFWARYTKMQTUZDJIRMOCRZWPTCYJXOPBQJAITSSHYMKNODHBPLLPBCIUHLAJKCYJFDFDNTXJITSVVEOHXBKQRGKZNWFFFWMCVNXSNGYWGZXBLJUEPOEHNVOWHBDWNECOFYG");
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
    msg.setTimeStamp(0.17273015726260954);
    msg.setSource(3692U);
    msg.setSourceEntity(165U);
    msg.setDestination(64279U);
    msg.setDestinationEntity(130U);
    msg.command = 190U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JPAVXGXPSCNWQEWOKHTGUJTRERZHYRDDYMNXAXOLZVXJFFESIRUMTMBDRKUDBBKHSWQGCDJIBYFVWRZTQTNJFHPSDBCFFTHBJIWFMYNALMDKRMFITBRMLEPWCNQGDYCOWUGCWSSIKEKTMEEZUAYTQLFMPDHRWFUQKNAALNSQNXHJHVVEZGDUGBOPVIISELVNUKOGYXPOLPONYZQGGZSALZIAEPRVIVTXAQMKLICZSHJLPYQXBCUHVOUBJOKYJ");
    tmp_msg_0.description.assign("QDETQXGPOIIUFHCWTTISXKYUVIB");
    tmp_msg_0.vnamespace.assign("THPRPPZZERWMMFKRNAFPCZOLDPEMLQLHMIMRUVYEZJWHTEJGWSSQEERLMJSBBNOCNNBSYKZOXNNNPKSVSQVHWAXSYYLNPLROIBRCIYGNSAUCTDXQQCKZGIMHQXTUVVZTFFXXYBTZCPIUEYFKTEWPWABQAOHVKRXZMFFFHHAIKGKFDXDCYB");
    tmp_msg_0.start_man_id.assign("VEZZRRRLLVTFXPDFKWNYNTDORJASCGWUFLGNTBJETPKYHXNDTUZPIDLOJWZFZVIPOYKTEEMNCCWDKCIARSQWZEUXUBGHHSKYXDJAAUFGECWUMGOPWYAO");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("CQZGJRIVVWDPKJLCRIAIPDLYQSBMPGRPMOMCSFAMYSOIUEDTHXOYTKOMCDHYRIDNBHZSNVRXLISL");
    IMC::Elevator tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 49114U;
    tmp_tmp_tmp_msg_0_0_0.flags = 234U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.3317609948413197;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.3593488290725465;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.642175252508704;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 59U;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.7538174541513983;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 139U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.36093260708860286;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.13133292551916298;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 184U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("LWZYIXBZGHDVVLTAXPXKSQNNLETLRDLJUESRKTKHQOKRYDJZCGZPCPBTVLVBGTHNNYWYAMBYHGGLDVNYBXRJOGHJXGFNPJFESZHPQQTBLMRAUQAIVQBKIZMTYZEBCOSRGTWPKSCP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("IEFUFARAHRZJTJQYEVOMEZBFYCJTZKLQDKFOVIHQNHYWMPEMLUHNKAWDVVYSROZCSFMQDCHVNBBRHCWKWPZRZVDGWACVOXHDAJJEQCKPCNONUXBKQTIEFDTPAIHRQMGHZJGLNPFXNFEQSUYYSDYPXNBLRJGLYBWEISGUJDXXICSKMWIRDUWSIFXVAFQMNQLPSAOMRBZMGOEBPWOPLHULZVY");
    tmp_tmp_msg_0_1.dest_man.assign("JFXUXJJUHTEIMOZYSGNRSHKXPKJQYNTFTTGMEMKYTVUPYOEQLLE");
    tmp_tmp_msg_0_1.conditions.assign("HYHKBCWMPTTQUEZZAHWQVIILPSOUNRYOMNEKHBIZSNXLIMSKAULTEDKPJFVDEWCRTWODDGAFJNANYOVRUSSFMYGH");
    IMC::UamTxFrame tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.seq = 21108U;
    tmp_tmp_tmp_msg_0_1_0.sys_dst.assign("LBNILGQAPJYJXEPPZUFIZRHZVSITHJIKJTZYVFYZOFWDDJHBTWLWERPITBXWLEEWXSKCKBCONCSM");
    tmp_tmp_tmp_msg_0_1_0.flags = 221U;
    const char tmp_tmp_tmp_tmp_msg_0_1_0_0[] = {13, 91, -65, 37, 23, 56, 84, 14, 36, 39, 55, 112, -107, 74, -82, 41, 26, -69, -47, 124, -40, -77, -39, 11, 121, 106, 121, -12, 54, -40, 94, -90, 95, -79, 114, -114, -53, 60, -6, 11, -52, 16, -122, -84, 47, 75, -62, 103, 94, -27, -86, -120, -88, 43, -55, -29, -101, -116, -34, 76, 120, -72, -61, -9, -56, 14, -19, 1, 78, -85, 78, -123, -79, 105, 38, -24, -75, -98, -54, -89, -35, -11, -115, 103, -70, -44, -112, -56, 98, -35, -59, 36, -76, 78};
    tmp_tmp_tmp_msg_0_1_0.data.assign(tmp_tmp_tmp_tmp_msg_0_1_0_0, tmp_tmp_tmp_tmp_msg_0_1_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_0_0));
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.6705573735629399);
    msg.setSource(28415U);
    msg.setSourceEntity(145U);
    msg.setDestination(18954U);
    msg.setDestinationEntity(51U);
    msg.state = 106U;
    msg.plan_id.assign("SWCEJPUQMZDVSFZABCWUHZFXFSXNAAKELMJOYQBPBHXSIGWZPJYBLWDDTIQNJVLOGXPRGDRKHWSXBRNHWPOFHFSADKMHGGSYBCVENMTCZQYOJVUUTHMDEUFCXVMRTAXPIIOOIGSEUDYKWMLYUAYWJFQRIWTLDQZBLTAFYPHKAEJTGCQHLFRYBGEA");
    msg.comm_level = 92U;

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
    msg.setTimeStamp(0.8257785504485231);
    msg.setSource(31016U);
    msg.setSourceEntity(28U);
    msg.setDestination(59153U);
    msg.setDestinationEntity(190U);
    msg.state = 96U;
    msg.plan_id.assign("IRFQLXHFGXJXFCXULICHTBAQZSJWHMNBQNALZCCLCMLHIXBJYGIEPVHEMOCEYWNYPDAUQEPTLKRSJYVGHZOQOBKVJFXCWGEEAQSAKRIPXYMQFDD");
    msg.comm_level = 152U;

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
    msg.setTimeStamp(0.29696611101557846);
    msg.setSource(62854U);
    msg.setSourceEntity(4U);
    msg.setDestination(35366U);
    msg.setDestinationEntity(222U);
    msg.state = 57U;
    msg.plan_id.assign("TEYVNDJBNKAELPKROMBRLOHNIGQUKMIYTNXNCBGUWPMWSMYZORJFKUPIFJSXMPQXIGTYTZTDDWEAUOJFSLJEDSBBVOJABWXPXZXRM");
    msg.comm_level = 3U;

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
    msg.setTimeStamp(0.8681257226185134);
    msg.setSource(54529U);
    msg.setSourceEntity(224U);
    msg.setDestination(37927U);
    msg.setDestinationEntity(83U);
    msg.type = 50U;
    msg.op = 90U;
    msg.request_id = 50514U;
    msg.plan_id.assign("KABGLJBVOVWGBIPKSUHKHXLCWTOUNDLJHNSKHWRIRIPYYKSAKQQMYRJZDTCZUWHDYXZVXKVEFAOEPEQWPEIIBFLDYXBRRPBQWMWSMQFHMTXSLPKTGBGVDMACVJJIOUJDAZTNCTNOUYCLQHZIV");
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 74U;
    tmp_msg_0.op = 237U;
    tmp_msg_0.request_id = 513U;
    tmp_msg_0.plan_id.assign("NJXCRYLETQESWOREOLLJQYRHRJUMRZCZJNFAOGHEROMTWAKOBISVRINLDBTODLJEWEXBQBFAWPFXMVHQDTIEWSOIZZQFPJFCABUKJTLVBATYKVJPKFGZHIXAHHSLABSYCTPFQVGUPOWHTZAFBFPCMCVEXZCURRVJPWVBEZZISMMLH");
    IMC::Heartbeat tmp_tmp_msg_0_0;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("EPKJFOLEGZHUWNPPUIOWEQOVLNXTZLXTRLSUZFIANFWXNTWBEKVJHOATSBLQCDXIYZJXAOLRGHKYDDTWURJQWAPCALAXPIGKNJFKGXCOJAGWDXGCABYSSCIYQRMVRIQCVPVILTMMYBFRCUCBBWHDGUBSNHCHFYSMEXANFDHKYAEGDZRKMVHONMISTETJZLPFZMDZFUVUERCSVGZOHJWKJIYNQEKMBQVHRGFTXYDSSZMPQQEIQUBPJTRDUOP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FRRHLBEWDSYRGXXQVHYBGWFCLTDXOQCGWIHQSHECESABUWZIWDGTTTTHBPENFQALEGUAUSYMRQPWBPXJXFSOKJRVXCDPCFNNVZIJQKRUGSVMUJAPCLJJDYYMNWURDKFXFZLAWEBEPIUOJXIVMNIKOLPBIWODNFQCZYNHXDNKMOWAOZURFPLLGFMSTTJYTIVBDOTLZMZZKSJYVGKMLRAXIRHYEPGOVKYBVSKDKHJQANOQEG");

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
    msg.setTimeStamp(0.7827004777603287);
    msg.setSource(55646U);
    msg.setSourceEntity(136U);
    msg.setDestination(59979U);
    msg.setDestinationEntity(116U);
    msg.type = 155U;
    msg.op = 231U;
    msg.request_id = 45836U;
    msg.plan_id.assign("ZCLJTDSYASUEQWDVUIIYUJPKDEIXPQXHQMOGBMAXDEZDVEJQRSIBMSWV");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 247U;
    tmp_msg_0.system.assign("NITMJPNGRNSCEWSYIOKKZNJTOWOEDIHNAHRSE");
    tmp_msg_0.range = 0.9511765672871985;
    IMC::VehicleLinks tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.localname.assign("SGYZJUZYJNUXABEHWEBLSCWIZMFTSRLAXTQWDP");
    IMC::Announce tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sys_name.assign("ZGGXRQYAUBYOUSGSVOWKCQWVGDLMSPPSPRWOSDXAUYYRHEQCCM");
    tmp_tmp_tmp_msg_0_0_0.sys_type = 211U;
    tmp_tmp_tmp_msg_0_0_0.owner = 29921U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.14387829838483213;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.44950713864821723;
    tmp_tmp_tmp_msg_0_0_0.height = 0.5521269406665336;
    tmp_tmp_tmp_msg_0_0_0.services.assign("BBKTARQJFGXQLFWCTJKDXLJYCCJNQOHSONWTSKWHSXPRGPVGYHPIXYBRNGCQXMOTMKACLZVTDXDVBAOENUGUKWHTIVRWNUUMYNDWSPCZQOBVUODPHHERFDOPMXKENUVNIXZEQCDGLAAJGUZEZEACPLJETERLKPHRYTZAKXNSHGMZQBIYVGIIMQKLJOFRTSLUPWQRDVIFXAJMZFUYOEIYKVNJTSWP");
    tmp_tmp_msg_0_0.links.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EJNKJETRPGHEKEYTZSHRWISTGQXUXPMWDOIOCAZXWHFPVGCMNNSWQAINLPRGMTMXSBDCIIDLOXQOFGDGUSXKYJTKZDGRBLEYWQMBYRLAQVQFZHFZTYC");

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
    msg.setTimeStamp(0.5918290211658813);
    msg.setSource(63585U);
    msg.setSourceEntity(44U);
    msg.setDestination(10947U);
    msg.setDestinationEntity(140U);
    msg.type = 20U;
    msg.op = 227U;
    msg.request_id = 27727U;
    msg.plan_id.assign("JXDKGLDAUZDREQOUNGQEWKPIKTIRRVLYIFRZCIWOWGUCHDMRLRFJRRVMLGRJGUDTCMYDLKNPGNZJVPTGIHTVJZNUBWDTSEXYOQXXBCHSYWXMQGGSJFLJJBXNXTIDTQCSXPGQOHTHWABMOWAQBEZLPNKOVUIUBCBKLHAF");
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 165U;
    tmp_msg_0.eta = 39409U;
    tmp_msg_0.info.assign("JQENEWLGCHSPVFXZMAFSPBZNFRXPOCHSPUZWONOYUBCEOTLFZKKHEYRTRJRIMGJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FEBHDJUYWLLBOGRRCBWKFJGESRTNNMBIEWLPGMDKHSLIAGFSIHPWZKAQCIZXGYNHVQAFNKTKHMCFPPNSIYKMGRJOUOJITPQYBHSUXCJWIWVSYFDJDYEFTRXNONMLQIWAUHEXDMFNJELVAPOMYPOBTVQCEMZDVGODZFVHZJPXMSKYELGKYAOQR");

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
    msg.setTimeStamp(0.4026283277504136);
    msg.setSource(46512U);
    msg.setSourceEntity(50U);
    msg.setDestination(52151U);
    msg.setDestinationEntity(14U);
    msg.plan_count = 31237U;
    msg.plan_size = 3077918521U;
    msg.change_time = 0.13073846919759202;
    msg.change_sid = 34965U;
    msg.change_sname.assign("XXNZNXORDDCZAMDDOPBVXHPEHDCAQBLWEGGJRNNHHLYUTMKFTKRAZZYCODBYSMPEWXMQPCIZZVIIBACUCKLYAJXJEQJLMFBWTOXSGOJTWIAMKOUNFKANPMI");
    const char tmp_msg_0[] = {-19, -44, -9, -64, 98, 3, 82, -93, -47, 7, 121, 50, 7, 84, -3, 119, 29, 20, 106, 105};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OURBFXDYRCRAQFLVCDLZGZFXHTSJTIPGIKNRHHZUAJNTIWBMQDJTLFYZQUGXTPYWRRMSZFOCUGWAINOLUOKNCQSJHKZIHYJWWSYLQQNQPHXWMPDC");
    tmp_msg_1.plan_size = 25722U;
    tmp_msg_1.change_time = 0.665271942226789;
    tmp_msg_1.change_sid = 12962U;
    tmp_msg_1.change_sname.assign("ZVOIAKHLPUFXBCSYCJHMIUCEDOMEWHJBYIDBMFQCAZLZOCQJPFJHJOQPQCLNPRXMHFFWAIVQSQDRELRSRGHKDZXNVJXEIAWBZZIBOLXWOHTATKGKEIJXOQGMKNCDYAGSDVYYCGVWTQLYTDBGAPXXPRUSEYVFVUFUKPEHNJHCIBZGOMBASDUZHSTZNPQBNMDWMWTULRFYNGWRKPMOTIAERVGBVDNGKUWNROVTZTEECPKTQLFSXASIJXUFYWRUYN");
    const char tmp_tmp_msg_1_0[] = {15, -37, -45, 74, -67, 33, -68, -112, -54, -12, -87, 73, 123, 46, -86, 70, -78, -77, -54, -20, 113, -59, -62, -70, -38, -54, -86, 59, -9, 5, 55, 15, 90, 118, 9, 126, -16, -122, -43, -123, -72, 126, 39, 44, -127, 96, 21, 61, 12, -29, -37, -81, 61, 95, 45, -90, -100, -77, -106, 118, -52, 29, 30, 48, 92, -27, 102, -2, -93, 76, -115, -101, -103, 15, 25, 22, 52, -11, -126, -107, 53, -67, 74, 57, 7, 26, -38, -55, -38, 15, 121, 41, -39, -98, 44, -32, 104, -24, -40, -40, -125, -91, 3, -40, 112, 109, -7, 42, -61, -1, -80, 8, -16, -82, 125, -19, -83, 123, 37, -12, 113, 4, 77, -38, 84, 9, -117, 124, -23, 23, 34, -91, -36, -123, 21, -14, -84, 41, 54, -8, -17, -103, 37, 37, 5, -58, -14, -112, -32, 37, 124, 10, 116, -30, -53, 95, -63, -80, -15, -112, -26, -55, 44, -48, -64, 73, -107, 17, 9, 20, -45, 119, 125, 62, -7, -123, -44, -45, 58, -117, -96, 114, -97, -107, 102, -46};
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
    msg.setTimeStamp(0.5537230689481355);
    msg.setSource(3084U);
    msg.setSourceEntity(176U);
    msg.setDestination(27041U);
    msg.setDestinationEntity(6U);
    msg.plan_count = 30702U;
    msg.plan_size = 3437332776U;
    msg.change_time = 0.3353653495295911;
    msg.change_sid = 28488U;
    msg.change_sname.assign("JTEIXHCDTABIIKXFGXWRZFLLJKXHIFFPOWUSIMLTPGEDYYSLKVEQKSPMDPEMADBGHNQQJUDIAMSNCRCZFOPANHRGPMCYRMTFOKSZXUOFLANCCTFHDBYORCYGOTVHURLRCWQIHDAKMZMOXVWJJG");
    const char tmp_msg_0[] = {-75, -27, -117, -91, 61, -100, 94, 88, 123, 21, 61, -17, -39, -60, -41, 24, 72, 5, -42, 60, 30, 1, -2, 78, -51, 45, 60, 23, -93, -6, -26, -12, -8, -76, -14, 44, -126, 53, -65, -24, -126, -32, -117, -70, 96, 85, -38, 95, 42, -112, 80, -36, -53, -10, 9, -41, -119, 42, 42, -35, 92, 42, 123, -106, 90, 103, -33, -65, 18, 59, 82, 110, 8, -63, 107, 108, 76, 72, -49, -11, 94, -107, 21, -64, -103, 40, -27, 95, 125, -76, -33, 22, -17, 91, 59, -119, -85, 73, 25, 62, -111, 85, -48, -25, 108, 27, -2, -108, -1, -49, 78, 65, 66, 66, -116, -23, -11, -69, 68, -125, -63, -104, 54, 69, -85, -97, 50, 119, -108, 37, -43, -73, -82, -82, 97, 97, -61, 120, 35, 116, -62, 38, -93, -107, -105, -93, 45, -1, 35, 19, 75, -60, 119, 104, 10, 82, 11, -33, -119, 89, 86, 16, 125, 55, 50, -124, 51, 96, -120, -21, 120, 22, -64, -104, -106, -28, 63, 84, 6, 100, 53, 33, -118, 22, 40, -8, -25};
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
    msg.setTimeStamp(0.5051445494730521);
    msg.setSource(29329U);
    msg.setSourceEntity(53U);
    msg.setDestination(41353U);
    msg.setDestinationEntity(88U);
    msg.plan_count = 12484U;
    msg.plan_size = 3365468785U;
    msg.change_time = 0.7014862442915575;
    msg.change_sid = 24954U;
    msg.change_sname.assign("HLNXCFJMTLPOOQJMOXFDFCOFCMRKPMGHDERGTKAQNYJGISZZTJDJHULFINBIGSWHFKZXZKOENMMLTTHRCAUIKJTAYUBXDRAVVBYYZWDII");
    const char tmp_msg_0[] = {59, -30, 54, -34, -50, 45, -33, 112, 116, -46, 92, -54, 98, -120, 74, 3, -72, 32, 78, -109, 5, -85, 78, 82, -117, -123, -74, 68, 76, -27, -52, -86, -52, 85, -84, 12, -2, 64, 83, -108, -60, -26, 67, -123, 16, -17, 106, 15, -97, -93, -39, -80, 0, -6, -102, 51, 77, 23, -64, -104, -64, -87, 101, 83, -95, 90, -68, 7, 0, -1, -74, -94, -76, 78, -109, 124, -85, -39, -15, -72, 103, 10, 126, 15, -52, -30, -25, 57, -37, 77, -92, -122, 13, -90, -87, 87, 39, -105, -64, 56, 8, 89, -113, -96, -17, -126, 100, 120, 17, 94, 24, 49, -10, -31, -24, 113, 94, 95, 42, 95, -30, 54, 125, 118, 86, 3, 35, -99, 63, 53, -19, -92, -52, -40, -126, 9, -3, 54, -97, -111, 40, 68, 95, 35, -86, -104, 51, -47, -99, 94, 44, 25, -92, 32, 9, -3, -88, -102, -14, 6, 91, -42, 14};
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
    msg.setTimeStamp(0.32668357656607516);
    msg.setSource(50702U);
    msg.setSourceEntity(144U);
    msg.setDestination(65478U);
    msg.setDestinationEntity(179U);
    msg.plan_id.assign("VKENQLIFBTEGAAJCEFPOYBUSAXECOPSGKDPFLXLUIBWGEWZMPHFZUSDEVMDYYKKQDSLDMZAGIQYHMCXRDKPTNWMQPVOPXQZIRVUODGVLQRHBHCDKNRWBDFUXRIXYNSTLKUYMKNFIVTRBWAGNCJWUNOTAXAQTDBWZXFUAGHJIBJESCQKOZIMCSFGWENECGFOKPJXREZNPOTBHWRBJFVLHJLWUZVUOHHISMYAJCSZRHGIJCTVMRLJTZAQNPY");
    msg.plan_size = 29783U;
    msg.change_time = 0.14450726537283887;
    msg.change_sid = 19973U;
    msg.change_sname.assign("VNZNPCALGSZJHLVNOGBXBQNJJSBKAEGMIKCOICLKLDYDSFTYHHQGBTFLXTUIHPRWPWEGXEOCIPAUEQNANMVGSIPUTIRBHUZJIOWWEDAAUCCYAJWSTRRGKMESCDIOPXGBJSYRRGHMYLRZMVZMXTFKYZBOGRUCAQQDXFOKXENMIEXHDHOV");
    const char tmp_msg_0[] = {20, -105, 39, 79, -114, 23, 120, 24, 32, -51, -67, 95, 47, -92, 62, -5, -87, 31, 44, 101, -122, -33, -46, 8, 47, -24, -127, -59, -128, 57, -120, 22, -27, 10, -50, 64, -121, 52, 52, 66, 123, 125, 1, 37, 49, 68, 16, -71, 72, -121, 73, -37, 115, -11, -35, -93, 100, -99, -76, 22, 32, 125, -110, 20, 98, 54, 34, -79, -100, 126, -101, -105, -23, 65, 101, -61, 97, -89, -9, -69, -4, -37, -87, 87, 60, -85, -51, 13, -35, -120, -11, -92, 68, 39, -76, 2, -65, -22, 24, 119, -106, -64, 64, -30, 121, 96, 99, 61, -93, 76, -26, -49, 108, -50, -2, 22, -97, -38, 23, -67, -119, 32, -59, 116, 21, -72, 81, 88, -125, 97, -32, -6, 114, 67, 116, 10, -78, 51, 15, -15, -92, -61, -96, 125, -86, 4, -83, 27, 37, -18, -63, 32, -98, 89, 78, 63, 120, 37, 116, -62, 95, -125, 72, 92, -53, -91, 118, 1, -107, -102, -127, 51, 77, 84, 99, -116, -82, -81, 105, -5, 101, -86, 53, 49, -68, -13, 44, 4, -114, 33, -117, 76, 104, -18, 47, -60, 72, 72, 13, -52, 93, -76, 8, -52, 112, -68, -12, 94, 57, 32, -53, -13, 45};
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
    msg.setTimeStamp(0.900266511420448);
    msg.setSource(31061U);
    msg.setSourceEntity(125U);
    msg.setDestination(10175U);
    msg.setDestinationEntity(59U);
    msg.plan_id.assign("ISUVYSPEYHFRAIUVHTXUTLGBKKPIROJNXBJPFEMOMOTHCHOAMRVEVHAMAEQDTQNBUSEGTNMNZGSOQXDQBNVLHWKSBOADBIKWUAYCQIZZGSJTJJNIOXLDIGNRGKLUWYSWQDCCCKMJZDPUOPXBAZZDFCMWLKREXRNXPNXJCYYCWIFZXGOFTVHMVRMIQDUUWDC");
    msg.plan_size = 12343U;
    msg.change_time = 0.09238703690154049;
    msg.change_sid = 61665U;
    msg.change_sname.assign("LUDQVHMSPSSTPPGEFHAJXEMQYTBIQZDMHKMOCAYQPYKEEQBEPYHXJNUDFKFVTVXFZGPEDBMXUPPOVNLOMGNIGXIBBKOCHTARCZBCXNKZNZWEZAILELSUWACCSHROYATPSZEKWJAKVLKQGUDJGWCMRYXMCFUJQBUWOHAYWJDVIZULZYOLYHVTNRSLHQYIJDRWSJIFINFHARWXIOTKVVSBDIPLZMGJGUMDOTNGGDKAR");
    const char tmp_msg_0[] = {-25, -108, -123, -38, 26, 107, 101, -39, 68, -113, 36, 85, 72, -74, 124, 0, -9, -12, -124, -102, 25, -107, -127, 77, -72, 54, -120, 61, 66, 44, 112, -101, 67, -7, -77, 82, 37, 107, -9, -103, -12, -52, 91, -2, -33, 62, 4, -45, 111, 26, -1, 126, 14, -114, 58, -98, 124, -8, 0, -60, 24, 63, -94, -44, -10, -72, 40, -98, -16, 46, -88, -115, 101, 85, 22, 116, -22, -122, 97, -60, -104, 80, -104, 71, -104, 104, 113, 97, 50, -91, -126, -17, 107, 117, -64, -100, 35, 74, -85, -116, -124, -74, 64, -27, 52, 100, 100, 33};
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
    msg.setTimeStamp(0.765513700513453);
    msg.setSource(7967U);
    msg.setSourceEntity(88U);
    msg.setDestination(19255U);
    msg.setDestinationEntity(123U);
    msg.plan_id.assign("LLOXBHJOLELMXBWNGVHKCQJSQSUH");
    msg.plan_size = 64276U;
    msg.change_time = 0.7812039167036837;
    msg.change_sid = 36537U;
    msg.change_sname.assign("IZDHYQZYBJGVMJNGLCSMBVPPFATWWUFSGGLQTSSLZBXJTXUEJWXVRCSBZNBBXQAMZCIXGKXOBVRNHKVEEXOOVFKWLAHGEVZYPXIFACZPTUEKKRNQXMFPZWUXY");
    const char tmp_msg_0[] = {88, 54, -113, -65, 29, 16, -12, 66, 105, 3, 24, -76, 40, 44, -89, -68, 80, 108, 19, 107, 41, 72, 8, 19, 125, -122, -50, 78, -113, 62, -78, -110, 125, 46, 3, -53, -11, 47, 68, -24, -89, -30, -102, -36, -24, -99, 106, 81, 4, -65, -67, 44, -107, -97, -120, 113, 108, 27, -85, -59, 5, -89, 71, -128, -79, 103, 6, 93, -76, -79, -21, 16, -6, 102, 9, 111, 30, -77, -89, 63, -123, 78, 98, 96, 70, 37, 113, 62, -47, 3, 2, 88, 90, -126, 30, 27, 79, -6, -61, -61, -67, -14, 41, 3, 26, -110, -118, -106, 97, 44, -32, 61, 34, -51, -12, 54, -75, 60, -124, -122, -78, -61, 38, -35, 83, 102, 79, -37, 55, 100, 5, -3, -78, 89, 32, -28, -64, -22, 64, 54, -90, -93, 8, 108, -16, 27, 63, -102, 69, -113, 36, -110, -104, -41, -46, 105, -85, 122, -79, -60, -89, 71, 111, 6, 125, 116, 15, -96, -44, 30, 32, -90, -49, -41, -39, -56, -41, 24, -125, 2, -72, 71, 27, -36, -65, -91, -24, -126, -26, 106, -87, -104, 18, 51, 14, 80, -102, 125, 28, 120, -83, 57, 18, 89, -18, 85, -42, -116, -117, 20, -29, 29, -46, 17, -99, -128, -77, 57, -43, -14, -84, 10, 69, 98};
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
    msg.setTimeStamp(0.8528262061605295);
    msg.setSource(3967U);
    msg.setSourceEntity(11U);
    msg.setDestination(13494U);
    msg.setDestinationEntity(209U);
    msg.type = 161U;
    msg.op = 231U;
    msg.request_id = 27589U;
    msg.plan_id.assign("QFONAEQFCIOKOGSRVGXQFHLZGYKCXEWMPRBHELNDKFDWDQPJNBYUGJTLPPWIYWIQNCVFONKXQLFFKPTOWSJ");
    msg.flags = 60032U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 11651U;
    tmp_msg_0.lat = 0.1931096266100899;
    tmp_msg_0.lon = 0.7926128774112743;
    tmp_msg_0.z = 0.518332073340644;
    tmp_msg_0.z_units = 127U;
    tmp_msg_0.pitch = 0.4699140801313959;
    tmp_msg_0.amplitude = 0.009006113776583335;
    tmp_msg_0.duration = 59047U;
    tmp_msg_0.speed = 0.42463726455003126;
    tmp_msg_0.speed_units = 216U;
    tmp_msg_0.radius = 0.3227802846683552;
    tmp_msg_0.direction = 41U;
    tmp_msg_0.custom.assign("XRVABYXWIFRAGKSIEPLBQYZJYILFJUKNTDGQNQBUWHDDMHRCXRXDECKZALBMSXZMKUGCOLRUFVAU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CJBCBMTVGSPPGZUVYMUTHLWIDGTMJRUZUAWTLCJFKVBADNSQYEZREISCPNVDSDLBWZRXLLKFWXJQMSKBFKWTNIVGU");

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
    msg.setTimeStamp(0.9114192935808894);
    msg.setSource(62134U);
    msg.setSourceEntity(79U);
    msg.setDestination(144U);
    msg.setDestinationEntity(101U);
    msg.type = 202U;
    msg.op = 126U;
    msg.request_id = 60765U;
    msg.plan_id.assign("ZMWEDNWIOUZTXEAFHDAUVUTQDQJAQUDXOZRPTPXMJWBJGJLEYRHXLETPSIFHIENILGHGAKNBQGPNSTEIZUZIIHVKGDQPKGSOGCYPOILMCYLLVIGJDQWZPDJASROSVQUHHQBCSWOMYXRNARADQMTKKWTJTKBNBCSZOCYWRPMHMCCFJSFHBJRSVNAECMWXTOLQXWYNOMFKFYYUNLKZEYRWAVHUKOULFBDF");
    msg.flags = 25017U;
    IMC::AcousticRangeReply tmp_msg_0;
    tmp_msg_0.address = 146U;
    tmp_msg_0.status = 1U;
    tmp_msg_0.range = 0.9056667918620322;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PGHBXHFZUFVMPCLEBXRDWBILXGZQFFSRHJOQLSSDUQWXSZROYUAJWGMKIBJNTWHHKEALJDBURCCJYZFBJVFZNMNDXESECOCYAIBMHNVZNDGLMZCNXAYPNWURGSCOOYAFRVVJEINGPIEKTHVXCWKZMWPDAWPLYAQHPOFLAZBFBBRTRWQYGNTKTJVHEKFVLSDQAOECMVDQAUOXOKIPCJMTEWJHXIKQSNITULQKXTRGSGDMOIYUZLSPIM");

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
    msg.setTimeStamp(0.8340874027544188);
    msg.setSource(6007U);
    msg.setSourceEntity(154U);
    msg.setDestination(61045U);
    msg.setDestinationEntity(65U);
    msg.type = 180U;
    msg.op = 84U;
    msg.request_id = 16359U;
    msg.plan_id.assign("QVFYGOLJZZULCGSFAXLXMIIINDCPVNBVYYUMKWDXVUWSKMAMNTSGHNAZQXCKPRSRIPZHLJIRNJAHJYHULVEDZBZZOVVSPJRTAOSCWPMQYRXMWHHYEUMCGLCCTESHGPGQXKDAEADDWNUDEKWEPRLONEKHHFPYFGQQNLFTJMZ");
    msg.flags = 56358U;
    IMC::LblDetection tmp_msg_0;
    tmp_msg_0.tx = 184U;
    tmp_msg_0.channel = 37U;
    tmp_msg_0.timer = 44687U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NBYRUODENBAGCJOCHPJKWZOJYMYYYPBJSOOIZINEVPKKFOEVAUXUXSZHDJLEVHIUMGEXVAGDWRSCQDWEQNPAWXMWQ");

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
    msg.setTimeStamp(0.21638058768627877);
    msg.setSource(33609U);
    msg.setSourceEntity(70U);
    msg.setDestination(59618U);
    msg.setDestinationEntity(235U);
    msg.state = 117U;
    msg.plan_id.assign("SDPBEKGZTGNXHBVCWCFFX");
    msg.plan_eta = 31432393;
    msg.plan_progress = 0.5363423917898393;
    msg.man_id.assign("UDFNSWLNEBJVLHXQJPKPDVFDMNPPYOZCTVMYPGEHIHJONRNDYBIWZYQLZANRTGBZCRGFTJAMIGQDVBBLXCZXCZOOWCABKUCTLAHQFBZLMWLOSAEFAHCHRQRKQTUSMUVEAKSWUOTGOADUFWRBWJHROENNYZMVLBSYYBNCFSINVZIKGKMKJSPGVXQWIFSTQASPKRUGMUFWKLXMHRXEEDEQUQCXTVZTYJPPIRYLMHYJEXGXWATJFIDOE");
    msg.man_type = 6332U;
    msg.man_eta = -533445151;
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
    msg.setTimeStamp(0.6180140780088882);
    msg.setSource(64687U);
    msg.setSourceEntity(83U);
    msg.setDestination(57846U);
    msg.setDestinationEntity(164U);
    msg.state = 55U;
    msg.plan_id.assign("DCSYHKHDTKECGDDTGJHJFGFSOWJQXAZVMLIUXXHYAIPRAEHTYFWUZZSTQWOEDTDUDUCSXYFKCLJKSPRRKQRIMEHQUWEYBVGVXTKEBNOPRENMOKXWPBSKGANFXYBCOILQBVM");
    msg.plan_eta = 1126717235;
    msg.plan_progress = 0.3628519285395355;
    msg.man_id.assign("VTECKOXFJEPLPNZKLRLCIHCSKXXNTBHDIFWTGSGYQJLPPCZUJQKQYOMGHOYHPUZHEMAXLEZIJQBPHAOSHNKBIICGBU");
    msg.man_type = 15617U;
    msg.man_eta = -592503791;
    msg.last_outcome = 36U;

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
    msg.setTimeStamp(0.04680222109607457);
    msg.setSource(50540U);
    msg.setSourceEntity(223U);
    msg.setDestination(8568U);
    msg.setDestinationEntity(139U);
    msg.state = 196U;
    msg.plan_id.assign("ROPNKOPSKZDULMOYNZAZXWUCWXWMBLTWAHAEQAJKOEQLIHQGRHVYCTEBGLVWPFYRRLZVKUQUYKSVLXHHMQBXFGSEYMUSVELWHINGANKBFEDYITETLDQVKFQDQBQYGDXGPJGXFHXNBHEMZIUDTAMPCZTBIGCCOWLKRRRPIZOBBSMGDSEJAYMVUEDBWIIIUSCPVXVTYDARHJFZJVJXXNYOCCTNSTRJJZCPNKRFL");
    msg.plan_eta = -633436217;
    msg.plan_progress = 0.3529712232768646;
    msg.man_id.assign("ZXMXVCFDYXBRQUWRLQSGGGDYFHCELMNOSZQFWGJDUJORTJFYPNTGWTAVXIOLEOUIBHBCOVYXPFDDGNZZNRCLTWUMLGHFTMIMOWHFSPNSTKASMPQZOKZPPQCDDAXFM");
    msg.man_type = 12251U;
    msg.man_eta = 1457091531;
    msg.last_outcome = 132U;

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
    msg.setTimeStamp(0.13607853948727833);
    msg.setSource(52586U);
    msg.setSourceEntity(105U);
    msg.setDestination(31440U);
    msg.setDestinationEntity(253U);
    msg.name.assign("CXBYXOTKGPALTNJX");
    msg.value.assign("HZAXJZCWLWEDRDKZFGJSFPRCWCYMYBLHMTVIYHUP");
    msg.type = 156U;
    msg.access = 228U;

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
    msg.setTimeStamp(0.9185874856023077);
    msg.setSource(53452U);
    msg.setSourceEntity(93U);
    msg.setDestination(52933U);
    msg.setDestinationEntity(233U);
    msg.name.assign("UQCXMHKOQRKAMUZZMDXCOPTYGBMNSSHJYOCBBTRILBTLJJPSLADHROWYDDHSNOUMJXAQAZUXPYAGSAETCLICGHNVFZZSVFIEFOVIRERPIUDHLEQDNQGBQDTHSJXTWUMGEELGWFTGBNMPQHOLXECDKJMYTWVVCA");
    msg.value.assign("QZWTTCLYBATORHCVMYZAURSDWLQFSVBVEKGBVJCBMIZAPAEPEDVUEPWCRDSSONXNYVYNHLMUXYTNDJSZUMJIHRUOFCOCDPATBQQYBHEXUCFBZQJKZ");
    msg.type = 40U;
    msg.access = 249U;

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
    msg.setTimeStamp(0.7751587662159378);
    msg.setSource(39822U);
    msg.setSourceEntity(28U);
    msg.setDestination(62123U);
    msg.setDestinationEntity(16U);
    msg.name.assign("WDQIYMBIVWOPJYAQRQZSYDNINBCJKUNGUUZEDNWXGZXXZEWSDELNJTHSFHOIQOKSERBXPEUMCATUTYAXIVATWWMHMZHUQFFDFSOPVLYDUSVQUDJMTDKZVRGAICVQZFKWIFAYRHVMMMOLPVLGHBTTSGNPZGWHGFIZCZJBGEBJODNGWHAPLJOBYX");
    msg.value.assign("RWBYFDSVETYGQUHQVWMJUSSVWHMDVCAEECDBOSETHEABXCHUFNKULXRPKIWAAMVZJKLRNHNEZYIEATVYIOLZOZPMPZNGZKQYDKPCQJJRDFYWXSSLNUQCUD");
    msg.type = 238U;
    msg.access = 236U;

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
    msg.setTimeStamp(0.4499599603551343);
    msg.setSource(14444U);
    msg.setSourceEntity(130U);
    msg.setDestination(43548U);
    msg.setDestinationEntity(24U);
    msg.cmd = 129U;
    msg.op = 101U;
    msg.plan_id.assign("TSPGZHYBQKAJNESMREMWWJSTEEZWWVCDLJLFDIDCYIOOYEXUYNXSUBRCVCRTBYUAASWMO");
    msg.params.assign("IEYWVQDOKOUMWSRNCVAULSAWTSEHNQXLXLSGRSGTGCNEPMFVPEDAGEBPOHDSVRTBJKRJVWKHKXRFVHEFWLWIMYLLYTRVJQQRM");

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
    msg.setTimeStamp(0.503792773128718);
    msg.setSource(47644U);
    msg.setSourceEntity(12U);
    msg.setDestination(57468U);
    msg.setDestinationEntity(156U);
    msg.cmd = 6U;
    msg.op = 54U;
    msg.plan_id.assign("UQGOQSHQUNKWDREKBFCOMFURITTKIPUITPZQGAMWJGGKUSXNAOGOWZBXJXJOTZCIITMBGCLSSHMJMXQMRROUDZYMZGVDSNDVBULAGEUVAMKZTRVJEANAQUBXOATUDVLDNWABXRLHFPHEREPBMWRWOYLACHCCQLOJJCWFTFKDPVQQJNFSCYFEIBVIWYXQPSBHV");
    msg.params.assign("NLNAFXNTAWYKIJDUCDGOHWBBVFZGGZSIYVKTQJUEPNEEBTRZFUCHWURGUYXHDNWYOHVTGFMUSZ");

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
    msg.setTimeStamp(0.5535240914592628);
    msg.setSource(49588U);
    msg.setSourceEntity(236U);
    msg.setDestination(1058U);
    msg.setDestinationEntity(133U);
    msg.cmd = 46U;
    msg.op = 58U;
    msg.plan_id.assign("JRXASZMWZOQTEWGWGJIOHSJFKYITEOAXUAVJNCBIANVCPXXGLMPWZIEHDLYYIELOHONFGKIBGUKVTOTHKCBAGXJAQDZRCLTGDWGWXLZPNEQZAURDRFNQKWRSVQBTXWUFBYLMMUEPSNTUHCDRHJFKBKFUDOQSTQCPPLXOJPFARRKLPISKEQMUPXFAHCCOVXKSB");
    msg.params.assign("BVMGXSDBTYUXFTIJEASEKIIPEGWOCNRVJQKOUPTXDHKYXLGGUJLOPNDEUOJJKZDGUFLSWWMMWBYNWJMAJETOAZZKCSIXFARBNMVLSSRRGWQKVSUAPENHPKORRCVAEKDJQNIHDUWEIPELTKSHOMZASFLNNNQDDXCIRXAFZZOPYJCCIBMPBOFBFLVGCOQQYBYBXWRYVFUUZVZTWXBZHGTQQGMHH");

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
    msg.setTimeStamp(0.9155218117396895);
    msg.setSource(36084U);
    msg.setSourceEntity(99U);
    msg.setDestination(40344U);
    msg.setDestinationEntity(60U);
    msg.group_name.assign("SNQNMVDYCLNWTBTQBIJJROQGGFMMJVSVCRAWTENFDCQGWRUGFHUIXQFGVVDEUYAIVL");
    msg.op = 52U;
    msg.lat = 0.9459386317191074;
    msg.lon = 0.9117533365577405;
    msg.height = 0.6099101655866321;
    msg.x = 0.9934962631209079;
    msg.y = 0.408005983549414;
    msg.z = 0.5878711427159198;
    msg.phi = 0.7241156743955206;
    msg.theta = 0.7853956343419779;
    msg.psi = 0.31574131534946825;
    msg.vx = 0.49944879761613503;
    msg.vy = 0.09398570677588358;
    msg.vz = 0.7745331443262338;
    msg.p = 0.21950633791227325;
    msg.q = 0.8364798249555723;
    msg.r = 0.8334287373765674;
    msg.svx = 0.31392096657261037;
    msg.svy = 0.39882304316591866;
    msg.svz = 0.1851705808303058;

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
    msg.setTimeStamp(0.5991046337508537);
    msg.setSource(37672U);
    msg.setSourceEntity(197U);
    msg.setDestination(24908U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("XSZUCUQDBQJFRRGXFCBBHEXXSBSYVYMKYFCIRNOTNSTXVWSKIWQNEXZWOOGGMDQWJFTJTRINPGZCGUQROEUQLCHRAWGBPBGTJUTLAGEBJTQNNHNYFPOZPWULEDKIHPEZOLKBIFAUAOFCUACAQULFMHCNOAQDLZTTDZZVKDYNVPQBWSLHNMYWYDVVEMODJYXYFIRJJMKAEVZRCSSGHJHYLVMFGDKIOHKXDBPEKPLMLJIMSEVPXWSPUHKTIWAIZX");
    msg.op = 135U;
    msg.lat = 0.6782889934937181;
    msg.lon = 0.037691745297131596;
    msg.height = 0.20385391532180652;
    msg.x = 0.9190356845591464;
    msg.y = 0.6184271925602735;
    msg.z = 0.18767388927806428;
    msg.phi = 0.17766476464398528;
    msg.theta = 0.8493727386685052;
    msg.psi = 0.9921946467340691;
    msg.vx = 0.40950308957950576;
    msg.vy = 0.37887735407264334;
    msg.vz = 0.9662927437676254;
    msg.p = 0.7936988212687195;
    msg.q = 0.9853130789220708;
    msg.r = 0.508836708729606;
    msg.svx = 0.749358882594428;
    msg.svy = 0.06272963189132752;
    msg.svz = 0.3860346312413505;

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
    msg.setTimeStamp(0.4505368852577136);
    msg.setSource(1768U);
    msg.setSourceEntity(167U);
    msg.setDestination(25419U);
    msg.setDestinationEntity(122U);
    msg.group_name.assign("FACGXMFQAKKASSEEGWRFXZZFWUIQGQMCVJBMQCGTMAQLWRZKLHODCXAUKNRKOGDWFIKETHESTVIOEXOARADKZNBSZIHPLIRRWPPJMNHYDHZEIUSWGLOUMY");
    msg.op = 200U;
    msg.lat = 0.1554313964227515;
    msg.lon = 0.3952619513957899;
    msg.height = 0.24021609111654607;
    msg.x = 0.2610791965478778;
    msg.y = 0.5643813620754692;
    msg.z = 0.55772783212145;
    msg.phi = 0.93429633823657;
    msg.theta = 0.9003142596940938;
    msg.psi = 0.7336698071217495;
    msg.vx = 0.8199343343915098;
    msg.vy = 0.1406118577246963;
    msg.vz = 0.05193767233351265;
    msg.p = 0.4754982250239578;
    msg.q = 0.07712540955677638;
    msg.r = 0.1451440401692754;
    msg.svx = 0.3347960837767331;
    msg.svy = 0.6349973151522592;
    msg.svz = 0.3158316128164731;

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
    msg.setTimeStamp(0.8773785642717147);
    msg.setSource(54821U);
    msg.setSourceEntity(233U);
    msg.setDestination(9746U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.1505328388136422;
    msg.lon = 0.26383661887698007;
    msg.depth = 0.9471629616606932;
    msg.roll = 0.3501106446445561;
    msg.pitch = 0.5903031370466009;
    msg.yaw = 0.11669703887775695;
    msg.rcp_time = 0.7197242947339859;
    msg.sid.assign("DAZNWJWRYQMZQYUVFGLEOZDAXKKBWHCDQCIMJIPIAUOAHYXFHTBUYGKYRJTANTOKWGDRNNRSYJJGEZNBVLCVUXWGTQPRTSXFNMFRUQSSSSQDJIRECSMNMJKUAFLGJEWHPBXCVODWIGHFXXMIOQTZMSWPYYEOTMEKCS");
    msg.s_type = 111U;

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
    msg.setTimeStamp(0.7159619833699309);
    msg.setSource(18732U);
    msg.setSourceEntity(209U);
    msg.setDestination(28630U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.4970782529714529;
    msg.lon = 0.2062435948424276;
    msg.depth = 0.003634144690440766;
    msg.roll = 0.3513918825749258;
    msg.pitch = 0.45251311926283444;
    msg.yaw = 0.3692880104143599;
    msg.rcp_time = 0.8517189532266007;
    msg.sid.assign("FYDMTWZFXKUETDCBMQFGHEDEMSHNOHSAJXKBUUMNNMPOVUFHJIFENDQACTDEVZBRMNLNGDLWVRWBLRR");
    msg.s_type = 67U;

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
    msg.setTimeStamp(0.45666210380810257);
    msg.setSource(9654U);
    msg.setSourceEntity(171U);
    msg.setDestination(134U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.4707309992269929;
    msg.lon = 0.8796106985474812;
    msg.depth = 0.10426499647867593;
    msg.roll = 0.07267447624886758;
    msg.pitch = 0.9577920015661278;
    msg.yaw = 0.5524625279632817;
    msg.rcp_time = 0.05562858753052158;
    msg.sid.assign("LUFRFIHMVPOHQOQGMBLMAQTKLJGPTYGJXNIEBMAYWLFCBPMWKGXZOEHWTOSXDRAHDIBIHNOCHNFNCWECIIMDSUZUUHDLXAJRPXIANCOYVKQOFLQVJDQEBDNWXDEKXMABRSXVKVBACFYUVKMPTLHLAZOSJYJTRQWZVNRKPPHQRCTZCDZQEUWKZIZYGTJUAMSRPXFEDMQGR");
    msg.s_type = 88U;

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
    msg.setTimeStamp(0.8684750126075484);
    msg.setSource(18002U);
    msg.setSourceEntity(194U);
    msg.setDestination(56266U);
    msg.setDestinationEntity(62U);
    msg.id.assign("TMZKGDEKATLFTXIIA");
    msg.sensor_class.assign("CIQCBICBDTJROTVHJGGYLOHYEFZWRJPBQNKUXEETDJSFQPXFIQQNVXGAFZGGDNYNZNIKPEVCBWZSLKHNRLBSPDLQXMMUEQTWKEICNJWWPRGN");
    msg.lat = 0.37398405373740495;
    msg.lon = 0.18548995082401842;
    msg.alt = 0.13179391495725;
    msg.heading = 0.3214678148492103;
    msg.data.assign("FYCTTGZRPFAMHKIYGUBBPHXZOHVCVESGZBMOYOOGMTMMQZSJFZKQKMLDFMI");

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
    msg.setTimeStamp(0.2370616627042833);
    msg.setSource(61524U);
    msg.setSourceEntity(92U);
    msg.setDestination(39593U);
    msg.setDestinationEntity(220U);
    msg.id.assign("CNKELGUXYOBGCHLWHTHMTBTGLLYKJSXQWAPFVLUJXQDNI");
    msg.sensor_class.assign("UZIRJQODBHLAMYMGKLGLTVNFWYMTUUIHIKBQKKHSRHKHCDEYYXOMALIYMVLERZWBARUPETMKXDKNNIHIFGNUSZYQGSWUBCLYXQSFDTAIXCPLVGDWKJSGQSUQPMZNFPRQJGVPQAZVSDNDOOSLEZZZGBCZQGJBEBFCXRXFNFHLEVCFBWPJERDDWZWOVACMCYYPQHGXVMJSANCJTHPATIA");
    msg.lat = 0.9016839661535678;
    msg.lon = 0.7236999416440526;
    msg.alt = 0.3801952624232475;
    msg.heading = 0.20535846225124854;
    msg.data.assign("JCMMVIMRURAZVKENBEWZEOQECWLHLFYOBJUPGNEQQCHNMXKZPJSZDVTZAUYBIYKWSUZTTHOCXKLOADURBBAKYZMVZTMLKFVMWQFVDYFRSNPHNJFPYLSSRBAICBORNYXELZDXKUHRNQQKLACOUWPJTFQMJPDSIJQIDFBFTKY");

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
    msg.setTimeStamp(0.033062177077790356);
    msg.setSource(35399U);
    msg.setSourceEntity(30U);
    msg.setDestination(1623U);
    msg.setDestinationEntity(216U);
    msg.id.assign("YLOUSCUVGMWJCLMXVKRZVZEDCOITRVHSNJ");
    msg.sensor_class.assign("HKCNVPVLFSHIFGURBJWSUDPVEDEYUTWOFKZULEOYHTMXQGMZSZRIRQNCXFTWTAKPVKFVJPBCHSHYHKXKINBLPYQHBTILLNDDXIVRZNQHPTZBJPBZJVGLJHMFJOXRWOLBKRCAWBWIJPWVDGYM");
    msg.lat = 0.9750342393794184;
    msg.lon = 0.4506271357956372;
    msg.alt = 0.9909896367344474;
    msg.heading = 0.8970866448266565;
    msg.data.assign("HQIUAQZUDTTUIJGEJTPKCVMXOFAYKQPEOYLQHFLAGGPJRMCBLSZZJFBYKGTKPDIOXYQCTNQXMOYSSFVWDCLNBNBYIXGQXURIVHBBFJURTRALVDEHZTELWKFOUIFZRMSYSDREKXHEHKDALNLFPWAMTWGWSCOGPSXVAGZMCJHCZOOMYIJMTIWZMIXNDFENZRKNQVTYAFUWPEPVJOSBXDAPAWEQJCURYZQUSKLMKJSCNROBCUHXWBVDHNVH");

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
    msg.setTimeStamp(0.632802780060249);
    msg.setSource(48823U);
    msg.setSourceEntity(144U);
    msg.setDestination(55366U);
    msg.setDestinationEntity(47U);
    msg.id.assign("HKACWBYAKMYHJYEDMQJXFUZO");

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
    msg.setTimeStamp(0.014221591203980366);
    msg.setSource(27136U);
    msg.setSourceEntity(204U);
    msg.setDestination(37969U);
    msg.setDestinationEntity(226U);
    msg.id.assign("UYXLTRCNDWANRLNYWCJKQJNLHJOKJPHQVHZPKSGLSTGMWBOPNKFVIHDHDAHXCDPKZNCLTPOMSYGYYYBNBSQI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WESXFKDGHZADDNKDWBJCXVAZEKFYWDQVOTONNKVYXMJEMFQARHDZQXAXUOWNJXBRSWLNEGBITSCJIHGMMCB");
    tmp_msg_0.feature_type = 80U;
    tmp_msg_0.rgb_red = 182U;
    tmp_msg_0.rgb_green = 157U;
    tmp_msg_0.rgb_blue = 54U;
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
    msg.setTimeStamp(0.7687170251658091);
    msg.setSource(14679U);
    msg.setSourceEntity(203U);
    msg.setDestination(62166U);
    msg.setDestinationEntity(115U);
    msg.id.assign("EIHKPXZDJPGUYEXORCNRVCGSKCFDZGZFRODQPYICLGISHESXMBEJAGWUTOXGNNLBTAVNRWCLOQEXFIVMTIDOSFDGVRPLKRRQOIZFNWMMQJLZMDYYUWBNSKGU");

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
    msg.setTimeStamp(0.4383570299412378);
    msg.setSource(25531U);
    msg.setSourceEntity(140U);
    msg.setDestination(7318U);
    msg.setDestinationEntity(3U);
    msg.id.assign("LICWOISPLDQZXSJOVEBHGROMPOZWYKZPESJNAIFKPAPCGDOFFHLONYESHAMZECRUVGQDAVLGDBQXTYCKMYRESKXBWJSDRIYHLJPLRUABFXLTLYRCIANNAGVGPJMBEXNWUMWBUDIUZFHKRLSPSDHWCDPEZFUWTMBRXHLWGKZMIOTKJVKSUCBOVQWFHQJDPAHJNBXZQVG");
    msg.feature_type = 76U;
    msg.rgb_red = 1U;
    msg.rgb_green = 77U;
    msg.rgb_blue = 187U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5266033801669516;
    tmp_msg_0.lon = 0.8787025872661877;
    tmp_msg_0.alt = 0.6785117625553387;
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
    msg.setTimeStamp(0.15998332306752028);
    msg.setSource(26379U);
    msg.setSourceEntity(78U);
    msg.setDestination(19907U);
    msg.setDestinationEntity(59U);
    msg.id.assign("ZKVTMPCJHLAYLPHKJBEPMSDNJJVRAUIVDWGFISXNZXRPFUHJVWBJHNKSSAZLROYYTXXGRMQKZTVIHYFOHBNVACIJAZLWXOIMARKEQCHWMNROXWTGXUEYTVFQGDOQQUGWLTJULOYUJGYHCDSKDIUYFZQLBUJLWCVUNBSHSDTENEDWKHIPGSOVZBTILAYKDOZWMKUMODQEVGSZRKMFSR");
    msg.feature_type = 138U;
    msg.rgb_red = 68U;
    msg.rgb_green = 91U;
    msg.rgb_blue = 141U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8816692447076124;
    tmp_msg_0.lon = 0.39392967663593725;
    tmp_msg_0.alt = 0.022929830871253554;
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
    msg.setTimeStamp(0.5353865316894871);
    msg.setSource(8156U);
    msg.setSourceEntity(27U);
    msg.setDestination(6026U);
    msg.setDestinationEntity(149U);
    msg.id.assign("KDPXEOILHNWBVEFEFFCKGBAZHRTRMDDZABEOTOARUSEXKNWLGIMXCGGKYTBFUNDHNETECD");
    msg.feature_type = 48U;
    msg.rgb_red = 97U;
    msg.rgb_green = 225U;
    msg.rgb_blue = 238U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.04964596119958997;
    tmp_msg_0.lon = 0.6109711432016957;
    tmp_msg_0.alt = 0.3030999459212246;
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
    msg.setTimeStamp(0.7836829785434231);
    msg.setSource(36295U);
    msg.setSourceEntity(33U);
    msg.setDestination(51694U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.22132542053744586;
    msg.lon = 0.6583550321747408;
    msg.alt = 0.08836152805788589;

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
    msg.setTimeStamp(0.5736414969864413);
    msg.setSource(50141U);
    msg.setSourceEntity(75U);
    msg.setDestination(629U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.6067385252526464;
    msg.lon = 0.5257584438306856;
    msg.alt = 0.1363301058679678;

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
    msg.setTimeStamp(0.2491093730620837);
    msg.setSource(51704U);
    msg.setSourceEntity(193U);
    msg.setDestination(55648U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.13218957634834538;
    msg.lon = 0.1497774481359354;
    msg.alt = 0.3736598365420467;

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
    msg.setTimeStamp(0.4423782020081811);
    msg.setSource(38331U);
    msg.setSourceEntity(57U);
    msg.setDestination(10563U);
    msg.setDestinationEntity(159U);
    msg.type = 237U;
    msg.id.assign("BMZCRKGSIBBDEVZMPZRSHHIMJWLHIAMQNODZOXF");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 55624U;
    tmp_msg_0.lat = 0.08846964611307184;
    tmp_msg_0.lon = 0.6138070920161396;
    tmp_msg_0.z = 0.41314064170452536;
    tmp_msg_0.z_units = 80U;
    tmp_msg_0.speed = 0.0967169986777694;
    tmp_msg_0.speed_units = 115U;
    tmp_msg_0.custom.assign("CFYBSIGAYQCPXRSYMIFPERMFLVVDGN");
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
    msg.setTimeStamp(0.0610072829663838);
    msg.setSource(51119U);
    msg.setSourceEntity(61U);
    msg.setDestination(26235U);
    msg.setDestinationEntity(118U);
    msg.type = 199U;
    msg.id.assign("OWWRHIQQFFAQXWGIIWLAGKYNJWVNVBMFBPZRMMAGFPCHWUT");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.2344029642844363;
    tmp_msg_0.confidence = 0.6727656214293913;
    tmp_msg_0.opmodes.assign("EXFMAKMQOVDUNGWSUJPXJMQLYIXONSDAOPUOTZLPGUPRLDAZUJCVAQUCCWEJNAYOCURBRUHQFAXGKWLMJIARPCLQKTDRHWWG");
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
    msg.setTimeStamp(0.058142887064395854);
    msg.setSource(17976U);
    msg.setSourceEntity(145U);
    msg.setDestination(15075U);
    msg.setDestinationEntity(140U);
    msg.type = 61U;
    msg.id.assign("FTAGNAAXGZOJKQAOHBGQIVRIOCNPICHLIQDGVXTGFSLPIDVXKPKPMTJRYMLSLQEYYIURGJAAKBJEYISWOSEGYUJZTSWLEADVBONJNJDKDBNWWUTMQJESCQWHYXRDKKOHXHFHACQBOREFNPNWFROIMLNEMUBKYBNTKCCLAITZGGUD");
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.40299355975081785;
    tmp_msg_0.i = 0.10883246589940099;
    tmp_msg_0.d = 0.7490237500612164;
    tmp_msg_0.a = 0.20320741346392013;
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
    msg.setTimeStamp(0.6411364012634625);
    msg.setSource(4437U);
    msg.setSourceEntity(137U);
    msg.setDestination(26804U);
    msg.setDestinationEntity(24U);
    msg.localname.assign("FPKUHWASDBCYSPXCOHMGVIWWTFISGMSZKQPLYDTQLTEMBOAENSKVOLAPVEYOVVAUQZJ");

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
    msg.setTimeStamp(0.8554236940810558);
    msg.setSource(63166U);
    msg.setSourceEntity(211U);
    msg.setDestination(31954U);
    msg.setDestinationEntity(127U);
    msg.localname.assign("AMKWFLNPBOBQLOTHDKPUZWLGSPCFZGXLGCDNWEMXFXYLRIMIJUGRNSEPOAPONJADUNSTCHNAPCMCGQLQSXODIMBKVAGGZQVYISGERKVYNIROIXCVRJBQDWTPCJIETYYZLBVRTZKCUQSTQFZLKAXWVUHHSTHJJUQVFDAYOONRIXURPEJCMHKRPXHOZD");

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
    msg.setTimeStamp(0.9879533437366327);
    msg.setSource(44157U);
    msg.setSourceEntity(186U);
    msg.setDestination(1610U);
    msg.setDestinationEntity(144U);
    msg.localname.assign("UJXBIWGQXRJXUNRECJHIWKNBHLNWUVIBYGREWKAZPEVFAFZZIZHKMETRULCDT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TIIALNJTQOVWBTHBEJMQKIPXFMQYTAAQAMGLMSHYBLPXPHOVDBEATNTCSJEACQURMCTYYRPXANWWZXFGOZWNAKPCKUCMILMLUNKUDSHMESURIJLGEHIWDUXURNVJVEMZKEFGFOCXTEPKVLGGNYFYBLXPIDOXDZHGQBBFSAJDNJIVQCFWQGSSVBSLFVD");
    tmp_msg_0.sys_type = 159U;
    tmp_msg_0.owner = 21829U;
    tmp_msg_0.lat = 0.9298486278944221;
    tmp_msg_0.lon = 0.38008471498226093;
    tmp_msg_0.height = 0.3841892412394614;
    tmp_msg_0.services.assign("DPCWFTIRYCUUBNQBBMNUUWFBTSQNONZIPBFJHPCUDTWAVOTPSVHYMAJUDIDXGZOTDHYRPLPTRLEJWTYBPSWTDKNQJLSTUCZVFMSKJUKIVRUWXOEZIBGGNNMGLVWEVRGHSLIEYNILYKGQPHAQFBCVDSKZAYJQEBOVZZZNCGVEXXAJMSMBXSDMHPWUOOHAJQYX");
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
    msg.setTimeStamp(0.37780008264964815);
    msg.setSource(61943U);
    msg.setSourceEntity(237U);
    msg.setDestination(24685U);
    msg.setDestinationEntity(191U);
    msg.timeline.assign("DHJXUPYLSEKPMLDEYQZMTYNBOSCUSUYXSSJKIARVLCQNQVRNBXHXCVEJZHLFGDRFUWFOAVRZVGDWRVXWMKFQVQAOXATGCFELIMUHJDDEGDSTMMRYGCWWNRZKELCKPQNKWIJPNGBDWFTROYVNNZJEPSSPUAPBUKVHPMKIBMJFCNZATDJAGBQLQEQPBDHGFVOTJLYX");
    msg.predicate.assign("DQCPNZBGCZMHPHXFGTVOSIZUBQLDBXAYZETXOQTTTMKLYOEGBMYDWWNKBLPVVBORIJQQITJAGQVOZNZDIDOPKLODQYAFFMLVRKDPVFBOKUKHCARZJMBZXMKSABJGFCLUNQSASUKXCSUAHSHUSJRSUWNGSJMPEYWIXLXRMXIIEAAYPDSVVZPBEVNJJHC");
    msg.attributes.assign("YODLITEUNKCUKRTURPDBAUTECNLSRAPWYDGRTXFWYHBAGRHHFAFXPYGQCIVIVCGZRMSXNLNYWAVNZOMNSXOTDOHOWRPYKIOPKEIZCGAQHQBVPXOANGKMNFMRJVFLLPSBLILCSLBGBVQKMHVMWUQJUBQQXXVEWMDOJVACYWHHYPSGULFIOTJZEHJYNKIMSMRIEWECJJZSPLMJXZDEZ");

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
    msg.setTimeStamp(0.6910885844446742);
    msg.setSource(13816U);
    msg.setSourceEntity(32U);
    msg.setDestination(44530U);
    msg.setDestinationEntity(14U);
    msg.timeline.assign("TUQWFIGEUZDSHWZKQGCJNHPTRLMJTKD");
    msg.predicate.assign("IULMHFCQVCDFIIVGXHRAPKWXFCBDIPNQQJBOBUCNBDDEAGVREDKPTIKTGEYQIMILUEBXCBAFDZEJTNYMQVARWWAKTABLNCLGOTHJKWVLYQOFQCOPLQOLYASSSMMVBZZHUXKNRUZJRKYPXJXTHVPXTMRZGUIJKAOHNWSN");
    msg.attributes.assign("NWCBDLNQMFDZYXKRAFGXCDUMBIZGJYWPYBJOZNYWQZFMGEMJSVFSILCEJRZLAKCBFLDBEDBDVGWLUOAN");

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
    msg.setTimeStamp(0.24120162498921482);
    msg.setSource(11148U);
    msg.setSourceEntity(201U);
    msg.setDestination(21043U);
    msg.setDestinationEntity(244U);
    msg.timeline.assign("ICXBFZZQXVNOSOPUWUQDLVTZSXZSBJCMFBQIIWXDNMWMRKNTNFIJOFZTAUICQFWTABANEGUZVSYXKFOAMHEJQDSNGKTOLXJBXKKFXDRRGJHSZGSHBQGYFDHSQVDVBEVLXMCUMPHMCLYCITAOYUVT");
    msg.predicate.assign("YGSWSODVHBJMSSCJZBUMCFJHPZPBQXUWNILBTYXMAULXXNLTQVQSKOTAPLLLRDUPDOIMCGCBIDTFHYA");
    msg.attributes.assign("LZDGDJRFSKMPOESJEUYCDZJZDFMARWLQNZLVCTEFATGEPQPXLZTCNRKHXBWCBOUEBANVRBMHIKPUWGYCOJSRGXEMPCROKFLYMBFXSPNQMXQVIAINAUQUYYY");

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
    msg.setTimeStamp(0.5001932776311099);
    msg.setSource(35909U);
    msg.setSourceEntity(175U);
    msg.setDestination(28767U);
    msg.setDestinationEntity(163U);
    msg.command = 154U;
    msg.goal_id.assign("YXISNFMVDAEUQBGFLJQWTVZPEJBVAGYPRGDZYXIFCDUHFELMTBXKBTVAGYEDUGIAUWMQJCRXHMVCSRPWRBOMZLSZITHAHQAOJJXTQNWLSUVRZGSVCBMOXNRFFCLLUNSLIPHEPZNZDYOAAJFGJVSYCBDAYDUBWEXWIWH");
    msg.goal_xml.assign("SDEOZRWQIAJYMWYVDHXIDUBKXUZKYUONGPUVLXBMPKBHOGCFPQGDVQSLTBSISVSTUXUAEQLJFJXUEWLISZKBTADWPYDSACVIQMXKTJCNECZCMQLYQHHVZNNIQTPRHYVKTLDMPAHKXJOFKAWAFYHDCWDUCYAJQGXVMHZQDEFWPVFMGWBKRTRFTBVUS");

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
    msg.setTimeStamp(0.4505116499075815);
    msg.setSource(63073U);
    msg.setSourceEntity(129U);
    msg.setDestination(58685U);
    msg.setDestinationEntity(126U);
    msg.command = 34U;
    msg.goal_id.assign("WRMLROALKROTGUAVFWGWADHJO");
    msg.goal_xml.assign("GZFIPGSWGFVZCUFGOZTGANCVMWDBKRXUHHRMXSFDAEWIFIHUALQPOTSXJGTYPQYJVTKOKLNICPBJDVEX");

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
    msg.setTimeStamp(0.15496127522634628);
    msg.setSource(3312U);
    msg.setSourceEntity(32U);
    msg.setDestination(45646U);
    msg.setDestinationEntity(3U);
    msg.command = 55U;
    msg.goal_id.assign("ZCNQASPVAFPXYTOYDIGCNLJPTWWAISEVTVVGFLEJTHCHTIGHONVSRNDXQXGTEOQPAOMFRMAFMFLSLVWUSDBYRVSKCHZUKSZOVUXPUVRHCNWLDOYBOKZRKQNIOJHJGAGYJHDFJMQZQXPLNULIDRT");
    msg.goal_xml.assign("JAGMOWNMSJSSBZDUVIMYQWQSEHRTMMKCTGFZFZVBUBSGZZRERBUQGMTLBLTIKJWPYVQRZEITXPYNVYPUKYEQMC");

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
    msg.setTimeStamp(0.8480891746435393);
    msg.setSource(59814U);
    msg.setSourceEntity(204U);
    msg.setDestination(46232U);
    msg.setDestinationEntity(173U);
    msg.op = 21U;
    msg.goal_id.assign("ZOFTYUIYAYUVXZJNQCKFGVCQWAHNCDTWTDLNZSAOURKTZHJCPRLLVCXSWQSEFCWSQUSRJIRXGFOLJEMIJTLVEKXZKMGZMAKUPMUMEPXZJVPCBYTNXFDPSDWFXEEROYAHWNEGCZRCREMDOMTKIMOGPNAVRTJHRJVPHQNFAVSBDTEZHREBYUIQNVNOBPLJBWGGPIWBYBSNBAOUHVYITLYYDFPQOQLODXU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ATLCQHYGVEBYBVDZBLDOPZGRKJONUZZKVVITEB");
    tmp_msg_0.predicate.assign("NSEZLJSMBIEGERRXZUAGVIIYZSUDTDTJHZPWWDENILIJGORNMFOOXHCFHZVBDTFBPENKMHPMXXKMATYAQJFOUJACWACQPREZWLRZUHTAFSOWAWVEWGTMGQQUNYWIETUXTSRFQOGLOWCDKVLIKLPYMMKEQLUYIPRVFACCIDDQELNXSOCPOTBZJCFCOSKHS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CDFVVNUNELKHFGURK");
    tmp_tmp_msg_0_0.attr_type = 192U;
    tmp_tmp_msg_0_0.min.assign("GCAIKBDUEFQXASYIEXPNROCZKPGCZOEOSNGZSJGOFTNUKMKPGOSVDZVNIHEOZDRPKMHAHSOYEHJZENDHQNKTEC");
    tmp_tmp_msg_0_0.max.assign("BNQEMKJRAHHUOQHXSRHLCNYPACHBILWNOGJWOFRVSHFSQKQRSZGTRZZLPWGABMRKSIKMBNCEEZIDTUPLCANSWSIDVOPZWUXNDUCAPUAKQYLKOMOXDTYXJODZUTCVCGQPDANDEHOXBJFGWEKEOGBINVALPWYEJVJVWPITTCEYIFWHBTFPMGQFYLWEHZVZGXMYBVXYMXZCVFAGICUMHTOKJUIRJEV");
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
    msg.setTimeStamp(0.8957420960827172);
    msg.setSource(2434U);
    msg.setSourceEntity(172U);
    msg.setDestination(38542U);
    msg.setDestinationEntity(10U);
    msg.op = 38U;
    msg.goal_id.assign("HUGSPAJYJYMPHXGEJMTXDLEMOHGSTJKGPPSLCFFWQWDBZQYVHIFYIUGUTTYANXTFCPXBSIMKVZVQLJUZWHWUMRAUYLEPXJQOYHKZFNQXEEHNVWWBDRVNQNKBFPEMMNADBIISF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JUXKFDUJTEFWXTEW");
    tmp_msg_0.predicate.assign("VHDGTBKHDMHOEFLUIEQSHWPBVORTNHPTEGIPEZUOJZYLYDOBMKEXDKAHGJSJXIRRZWMYCKWZXGWFCNOBGITODJYPYZREZWPWYRDBCWCXYJHXIMLFQVLBAA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RLMKHPNECPYRPRJSGYHWUKFAXCIEVYKMLVHVCEUUXZQTGGIIFFAWPIYAZFUCWNKLBXJLEOXGHVWWDQHJUFNIMKQTOAEQSXYHMEOHDPFTZLGMZZFFMEEXCIZIJVQOAKAXBEWNAIKRMGPXNHQPZKUDBWDBSYDVHLGRONQBEBTJJFWLWPXJMSTPKJBZZTRSYBSDBGYGKUAVNHOGTISDCOQYSUFRNOTSVMCROAXINVLQUSJQVUDDPWCCL");
    tmp_tmp_msg_0_0.attr_type = 56U;
    tmp_tmp_msg_0_0.min.assign("RNJICECBEXHSKTHABDVWJFTAA");
    tmp_tmp_msg_0_0.max.assign("CZFHUEUWALCFMETCCCGNAOCOVRBTDHLJKRFGRNICKYPKAPFZBWWMQESJUVOHPEKORJWZBDYLE");
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
    msg.setTimeStamp(0.6258978205720005);
    msg.setSource(58249U);
    msg.setSourceEntity(191U);
    msg.setDestination(46621U);
    msg.setDestinationEntity(126U);
    msg.op = 128U;
    msg.goal_id.assign("WXQLHVNUNYHAFAMJKABLGWFDDWNECNQYQUYGYUOAOUBCHSGDUZMYWBRPJQIKGIUQPSVFLVFIEABZMSRPSQHHPDSGKPUQZUOHTBZBIXRSOCTSZDNTCEWFGCFPNAYEWPZJOYSILFKNOOBKWTNHHJRFLKKTGXNPQAYWSDAAIBIONLURFDXHDRGZZRRVYTTEMMLPGWSPJMJVCCLZGXBKLIJXBVXVXFVXEQUIMWZKCRO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VNLQVPHKPSNHJWOFONQMIUTVECIDCAMXUXUBUZJAUCAKMHCMLZNFJBMYGXLMTFDOSTDUAXBCVOGCYSQZFQLNNEEGULQBMKQGBICEAUEQIGBMYNSBDHNGXAKUJWPWDOLAPYZAKJTWGBLRERHIXYWVFLRTRORVIKWWNSMDHLTTSJGZFEXDYSFTPOKI");
    tmp_msg_0.predicate.assign("UDZLYENXHNLGJMHOGKODZSCVKRZKUHMGWEZTGBCXYNYITECAHQWNBNBVQZOLPAPYEZIKYROTKCFYHZXAOJ");
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
    msg.setTimeStamp(0.5664372266224305);
    msg.setSource(31534U);
    msg.setSourceEntity(167U);
    msg.setDestination(25995U);
    msg.setDestinationEntity(199U);
    msg.name.assign("FGAIVQQKUNITUXPBEDEZQEZORZMYJNHRIYUPAVJLGWJFTURAZVKQGFFIVBCUFBEFESKZRFTAURBDNCSJGLHWEUKMCXLNYXWRSXRMIZGYBTOJDCOTTQOSTLBRXNPWAMWVBKJWOOENWTKWUCRMBLYHXPNEYLQJXSNDDMBPAPLYFPAYCUISKQLWAHZBHUFNSGOGDOAHKSKWZDHMVSCPGLXQRIQIMPCCZKHHVYDOMILTJDZGASQPVEVI");
    msg.attr_type = 0U;
    msg.min.assign("MNKZXZPPITXBVQGUACJMDOHZS");
    msg.max.assign("OTMMVBVDSYMEKTSKKRCENBIUBVTHJZUTTAFLLQMMAWYMEFORWLLRNYUPFCIWXTDDQCYHYLOJOCPUMNDBSJVTRIRPDAXQVVKCGHAXRFBIZOCVHGMLEZNLUHLGXXVYHIFJTEGCDIZOGKYBHUKOZAVOWRAXQAHKHRSCCSBQZXJSFXXQBIJWF");

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
    msg.setTimeStamp(0.34768730613335763);
    msg.setSource(10624U);
    msg.setSourceEntity(220U);
    msg.setDestination(32608U);
    msg.setDestinationEntity(147U);
    msg.name.assign("MQJFLWFHCEQXGMZCBCFAITCLZNNGLSBMVJWWGYNIBHKQIKLSPYEMZOVJUIMUXSHAJORKLKLVAMHWIUUTEARUNNMHVZTVDWWSFOEODFOMOFJPCJFWECYZITAHDWVXVDDPPYSPKESQGNQDBGTSUYJAYPXQHKIDIZXKSIVPGLARQUYMYHBBGGXJGD");
    msg.attr_type = 61U;
    msg.min.assign("ENLPZRITYFXOOXTFAKNMDITBJMSYKWXIYGJUCZMVENOPEBVHVQMGOTKMUNRDEPKKZRGLDITLBQNMTQJDOQWNUQMVDABWIITBWYIHGBCCORNSSADUAYVYXNEHPRLOVDPHJAXOXUZYGEFPZLUCEAZFHCNZFPYZSJWLXQLAFXJWCSTVWFR");
    msg.max.assign("NASCCBPTOGALVFMWOTHAUPXVNHRQUTSCIJNDKIGUZHWJBEQVSUORDLYTLOMVTHGP");

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
    msg.setTimeStamp(0.39614598746385554);
    msg.setSource(7464U);
    msg.setSourceEntity(245U);
    msg.setDestination(5625U);
    msg.setDestinationEntity(90U);
    msg.name.assign("MXUJXORSHNJCCLZKJGIFSWBEATYIAQJXTLTBGRFUOLTELAIDQDCMKVNQTGWDBMHLXARVCJVWSGNUZTBJFJCDPBIMRDUKKEVMOZVJLKTTHYWGTOLKPQWEDHZQJEBTMMXYPIUYSKIAALREEDXOAYIQLPVHNWCUKSYUOVQAUPGJRFNVCHGFKQMFMQIESRNFBHWFUEIDHBSZOSDFXYGQYVDSIHHNKWAYPNNAOYWPCGEVPPSCURNZGFPBXRZZO");
    msg.attr_type = 116U;
    msg.min.assign("EPIQJOHJXKCWWQZWVGLNEBDOXCPTCYXMVAZZQEVYBITVAVLBNQDWUTFHBKUWAKSKGDJCNUFDVTMCQDZPMUBOZGBYTINIFXMLAJGDTUNKZIVBLJFAGWUWHZMGSKOYFPXNMCRQIALBROEJI");
    msg.max.assign("CXYVZNLBHCEGYQBRYLERYGMBSKHOOKPAZBORESXSOISXQYTYKRIOXUCSIJPAWZXAXLAUJQAUCVGWVJXPIAZCBQDKPIHTKMHWLHSBQCLHOMFWENUKNSQRVFYJQINBHBXKMFJMLZDKLOTPNRKWQLAJPLSVMVMMOGRRGLPOFVGFZJTCADFWMFDYCUAIEDTWTHVXUWBYUVWEUQEYBNWZDPDFEIDEESUCJIFHTVGQIAJRUXNTPZHJGZTMOZSNNNTGFD");

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
    msg.setTimeStamp(0.33381388755398045);
    msg.setSource(36391U);
    msg.setSourceEntity(176U);
    msg.setDestination(36919U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("SFUGSKQCUIILAMHDKHGYTVPVUPMAZWWOZQODVTFJIYWAC");
    msg.predicate.assign("DHBWDZLRSZZWOQENQSLXHZMLQLGCVGHBRYIQFODMVNBFVXDHCUACNXOWNADWIIJJFEEUYPKALQKWHZOHORBBTUBZPNLSAIBFKKJHPDXJSVKDYYKS");

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
    msg.setTimeStamp(0.5155995937124256);
    msg.setSource(41424U);
    msg.setSourceEntity(78U);
    msg.setDestination(36309U);
    msg.setDestinationEntity(119U);
    msg.timeline.assign("YDSIAXYLDZMBCNFOCVXYXDLXXTWSTEHSCLLPUOMWTLEODNEZADCDRHXFROPRKWZPVUYQIJZNZDAJPNKFFJBQIIBASBSHKTLRZPBJQDUKQGOMNUUIZHP");
    msg.predicate.assign("LRSCKGHEVXPFRAAXAMZECEXUVLJUWQYAOJDIVHCFXIBVQCHKWNGPKUMPOWMAYNQFWXTJTGLZZYCHGFTVWBQDJFPBJNHRJGXCTOJLLIEXFGJISPFNVCVKQYSOLCHRVRGBDXEHZBMYIGALURLSYJTWBVSOBBRYZKRKITBQBONTKUSXWZOIMRUACEZOHTZRYNDYWOKPMNPWSQILDMTSXYNAQLZPFHNEQDMEFQU");

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
    msg.setTimeStamp(0.5807243383668993);
    msg.setSource(61528U);
    msg.setSourceEntity(111U);
    msg.setDestination(62840U);
    msg.setDestinationEntity(39U);
    msg.timeline.assign("BMMSGYVRUPOVGZPUCZLSENUUECEQGF");
    msg.predicate.assign("XPHMNANMIHEWHTSNUFXXILMDESOYYFCTCFPXFWHNPQNHVATURGRUONGSWDIYKMOPJRILZHBGUOTNKASWTRZFMXQKZNTJKUHRWTSWGMTBBKZIMBGZFPAVBIWOVGDNVRFSCEGLXYLFAUKWXPMEGQYXBYVCCOQQBKAEYBZH");

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
    msg.setTimeStamp(0.8062873385946788);
    msg.setSource(47573U);
    msg.setSourceEntity(21U);
    msg.setDestination(57948U);
    msg.setDestinationEntity(225U);
    msg.reactor.assign("WWKSAADHWOSCGX");

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
    msg.setTimeStamp(0.3082193067829583);
    msg.setSource(44488U);
    msg.setSourceEntity(34U);
    msg.setDestination(53513U);
    msg.setDestinationEntity(32U);
    msg.reactor.assign("CDXGOKCLSBKICWLTMYLSITEKMJSWRCWFZLDPTRDWXLJIHXLPRGYSGI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PGKYPSJLONQZNAOMRJHOWTYXLURBFRVMBVYJRSXXLDXMJBRWCIVCFMNAIOMDEUMPSTOAOUYYHGWWWTFEHKPRDMMTOUUFPEZTKLXEGZHEVAGIXDIUBWFZRNNENLZNCFRHFSCKGYHFACBIEQAFSPTKBAZ");
    tmp_msg_0.predicate.assign("QCSSZCJAEU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NHXTNEVPMBMIBUZUMXSEIPRIPGUKWAHSHERJJDPOQTSUDDWUPEXYCJCTDUEECQKRNHXIYASEFQBYMXPGNLOBRJYWBKYIYMIRTJZITGFZZPKTLERRWFHXOGTAFOBQPQNOACLSRFVAFJSLWJUIXD");
    tmp_tmp_msg_0_0.attr_type = 101U;
    tmp_tmp_msg_0_0.min.assign("OZFSVYOXGYPCXNAAPQDZYFFSICZRURUFBMAZRBIJDQNQLPKRSQOSSOBLUKFMVWQKEYJAPXNUEBFQTRBMBOYYGNROTDAUGZVGHKXPFJNSNFWMXBJNVUHQHGRTMGSCLTISJEIRWIVCVXHIHDXAYZCYWMTDBIGZJUOPOLNVVCUAEMMNYBCUKJFDRDHGFSGAPNKAMZHLWCTKDKPXIWQVPTOXEAZQCLWTBLEMKXLIJWEDEWJCIZHEHYHKWGETJ");
    tmp_tmp_msg_0_0.max.assign("QNLESEZTCJPJFSMTJIKHGBUOBRDXECXAOEOHJPFOOSKILSROERRPHYVGVGAIZIPGLCUHSATXZKTKPCGMWDGURXZZFSFYZPXVBDUDUIFEJQJWAKXSANRVDRQTEYQDOYJDRYN");
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
    msg.setTimeStamp(0.8603812186068863);
    msg.setSource(37699U);
    msg.setSourceEntity(91U);
    msg.setDestination(4716U);
    msg.setDestinationEntity(158U);
    msg.reactor.assign("MURSYMZJIHRRNOUMMXOPHHRCLCMXNZFCAFGDUKOWSXUBEYOOBBXNHLNQAUEYLQXLOVSQAOZUTNZWXUSTFYLYTZWFQCFTAMLFKEPHFVWIIIGZJUDTMRYQTTHDQEWICEEYCVJIIUQJVDOERQGBDNCBJJOVRPEFZFVVWMSGNIXSYVPKVHEPAYDSCNXAHZDTDBPJJOKNLSSAZLDCRBSQGUNXEAYKJIHMW");

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
    msg.setTimeStamp(0.3242457320923873);
    msg.setSource(62872U);
    msg.setSourceEntity(56U);
    msg.setDestination(5745U);
    msg.setDestinationEntity(45U);
    msg.id = 28U;
    msg.width = 41920U;
    msg.height = 47538U;
    msg.widthstep = 49808U;
    msg.channels = 69U;
    msg.depth = 57U;
    msg.finaldata = 140U;
    const char tmp_msg_0[] = {89, -61, -17, 38, 116, -126, -111, 93, 116, -89, -68, -115, 91, -123, -15, 89, 84, 64, -92, -105, -55, -85, -79, 83, 113, -89, 21, 113, 75, -43, 1, 37, -99, 10, -123, 42, -61, 103, 56, -71, -19, 3, 122, 108, -29, -15, -18, 67, 80, -52, 68, 91, -88, 49, -15, -64, 12, -91, 8, 37, 113, 92, -20, 44, -115, -123, 91, -80, 94, -128, 6, 39, 9, 50, 27, -55, 71, 94, 58, 74, 91, 13, -50, 83, 67, 77, -101, -123, -124, -47, -36, 33, 98, -39, 121, 56, -95, -74, 73, -118, -7, 126, -127, -31, 94, 49, 81, 120, 68, -73, -64, 73, 110, -51, -32, 98, 61, 92, 76, -110, 4, -92, 90, 55, -37, -53, 52, 46, 70, -118, -5, 14, -107, -33, -18, -19, 121, -99, 88, -33, 60, 71};
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
    msg.setTimeStamp(0.04960946431429136);
    msg.setSource(29140U);
    msg.setSourceEntity(251U);
    msg.setDestination(55732U);
    msg.setDestinationEntity(3U);
    msg.id = 196U;
    msg.width = 15456U;
    msg.height = 19563U;
    msg.widthstep = 64536U;
    msg.channels = 134U;
    msg.depth = 76U;
    msg.finaldata = 24U;
    const char tmp_msg_0[] = {67, 48, -8, 110, 120, 2, 36, 90, -65, -121, -69, -112, -41, 40, 5, 18, -27, 124, 110, -118, -67, -36, -5, -55, -44, -80, -119, -125, -11, -1, -68, -33, 81, -2, -123, -18, -43, -108, -118, -16, 86, 49, 36, 118, -59, 27, 88, 56, -62, 47, -109, 122, 102, -13, 27, 82, -82, 63, -65};
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
    msg.setTimeStamp(0.3883275444506581);
    msg.setSource(40757U);
    msg.setSourceEntity(110U);
    msg.setDestination(50624U);
    msg.setDestinationEntity(27U);
    msg.id = 135U;
    msg.width = 39477U;
    msg.height = 13853U;
    msg.widthstep = 17747U;
    msg.channels = 195U;
    msg.depth = 151U;
    msg.finaldata = 157U;
    const char tmp_msg_0[] = {101, -54, 25, -63, 28, -62, -58, 57, 94, -12, -57, -111, 117, -96, -15, 78, -84, -30, 102, -82, 117, 10, -107, 61, -21, -96, 108, -58, 121, -36, 79, 80, -92, 61, -59, -103, -45, -31, 69, 78, 115, -8, 74, 65, -29, 88, 13, -7, -79, -27, 101, 92, 106, 82, 6, -78, 97, -23, 67, 71, -86, -46, 114, 26, -69, -84, 46, 1, 10, -128, 71, -53, -45, 20, -127, -70, 14, -94, -28, -122, 48, 118, -71, 125, -115, -89, -49, 76, -115, -70, -82, -9, 121, -64, -75, 123, 54, 53, 73, -100, 94, -109, 15, 106, -5, 33, -86, 26, -10, -113, -29, 76, -1, 79, -128, 124, -30, 116, 36, 34, 35, 67, -121, 46, 75, 4, 108, 58, 71, 86, 102, 48, -60, 49, 87, 79, 33, 81, -60, -101, 21, 89, -45, -84, -99, 94, 23, -107, -87, -52, -89, -55, 29, 35, -27, -128, 96, -55, 65, -14, -69, 64, 115, -15, 75, 68, 21, -49, -14, -37, -29, 66, -56, -64, -67, -45, -68, 115, 43, -80, -103, -94, -54, 31, 22, 73, 6, -108, -18, -105, -114, -90, -90, 70, -84, -88, 107, 72, -91, -47, 19};
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
    msg.setTimeStamp(0.002439154345019734);
    msg.setSource(51855U);
    msg.setSourceEntity(238U);
    msg.setDestination(15051U);
    msg.setDestinationEntity(146U);
    msg.width = 15304U;
    msg.height = 8974U;
    msg.channels = 130U;
    msg.depth = 178U;
    const char tmp_msg_0[] = {-58, 96, -80, -38, -109, 61, 100, -1, 7, -106, -35, -94, -42, 78, 3, -58, -102, 31, -70, -45, 48, 88, -64, -126, 75, -96, -78, -53, -88, 47, 32, 110, 7, -69, -23, 28, -106, -32, -82, -37, 33, 15, 122, -112, -67, -17, -48, 38, -70, -82, -94, 1, -51, 113, -78, 25, 100, 51, 91, -113, -121, 105, -11, 109, 45, -86, 52, -27, -103, 41, -79, -46, -97, -42, 69, 56, 59, 82, -34, -120, 91, 23, 75, 83, 21, -1, -62, 58, 115, 118, -113, -64, 115, -31, 115, -28};
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
    msg.setTimeStamp(0.862316698710958);
    msg.setSource(56862U);
    msg.setSourceEntity(50U);
    msg.setDestination(44160U);
    msg.setDestinationEntity(163U);
    msg.width = 61799U;
    msg.height = 23324U;
    msg.channels = 235U;
    msg.depth = 25U;
    const char tmp_msg_0[] = {13, 30, 11, -81, -60, 76, 56, -73, -79, 100, 76, 99, -100, -11, -86, 59, 52, 26, 22, -23, 68, -68, -76, -104, -54, 67, -113, 6, 59, 88, -40, -80, -42, -60, 71, -38, -124, 117, 82, -74, 117, -110, -13, 20, 112, -115, 9, -48, -4, -86, -39, -94, 18, -74, 29, 15, -29, -40, -127, 40, -70, -16, 10, -21, -87, -16, -30, -25, -25, -44, -50, 50, -10, -101, 86, -124, -33, 99, -18, 80, 13, -29, 21, 94, 120, -98, -17, -104, 115, -78, 2, 38, 115, 97, 115, -19, 124, -127, -34, 78, -93, -26, 99, 34, 109, 96, -16, -29, -102, 52, -10, -94, 46, -122, -11, 38, 64, 126, 2, -29, -38, 38, 87, 71, 113, -6, -73, 86, -30, 69, -70, 63, -11, -63, 98, -92, 65, 42, -53, 122, -99, -84, 94};
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
    msg.setTimeStamp(0.12618669663064086);
    msg.setSource(25269U);
    msg.setSourceEntity(188U);
    msg.setDestination(9222U);
    msg.setDestinationEntity(114U);
    msg.width = 5052U;
    msg.height = 7098U;
    msg.channels = 84U;
    msg.depth = 58U;
    const char tmp_msg_0[] = {107, -36, -125, 47, -49, -9, 33, 121, -88, -90, -34, 42, -121, 80, -116, 81, -1, -124, -94, 23};
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
    msg.setTimeStamp(0.7406531777073035);
    msg.setSource(18229U);
    msg.setSourceEntity(136U);
    msg.setDestination(17211U);
    msg.setDestinationEntity(99U);
    msg.frameid = 134U;
    const char tmp_msg_0[] = {2, -87, 25, -64, -71, -109, -99, -41, 42, 4, -109, 57, -8, -113, -2, 17, 98, 30, -39, 125, -77, -41, -28, -38, 40, -66, 33, 53, -65, 57, 89, -46, -118, -81, 26, -86, -110, 27, -118, -103, 68, 120, -128, -33, -20, 0, 1, -65, 110, -32, 116, 54, 87, -5, 125, 55, 33, -57, -92, 52, 93, -83, 59, -94, -100, -55, -51, -7, 69, -55, -101, 30, -10, -89};
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
    msg.setTimeStamp(0.27459300303604217);
    msg.setSource(40512U);
    msg.setSourceEntity(204U);
    msg.setDestination(12899U);
    msg.setDestinationEntity(166U);
    msg.frameid = 40U;
    const char tmp_msg_0[] = {-53, 17, -57, -69, 122, -99, 99, -24, 76, -80, 9, -100, -66, 56, -63, -126, -76, -42, -56, -107, -83, -45, -60, -26, 10, 117, -50, 69, -31, -25, 97, 82, 105, 57, 91, 33, -13, 58, 82, 38, -28, -20, -53, -6, -32, 93, -95, 41, 27, -69, 95, -33, -18, 125, 114, 34, -72, 92, -17, 47, -18, 109, -64, -26, 34, -123, 83, 22, -31, -32, 87, -95, 23, 122, 109, -97, -84, -99, 98, 40, -104, -52, -55, -25, -59, 34, 95, -61, -121, 88, -28, 78, 88, 40, -1, 12, 65, 23, 5, 57, 26, 109, 38, 17, 96, 69, -20, -3, -54, -119, 44, -55, 106, 60, 89, -101, 77, -48, 42, 88, -48, 73, 24, -64, 121, -75, 126, 121};
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
    msg.setTimeStamp(0.16365823474176133);
    msg.setSource(11543U);
    msg.setSourceEntity(180U);
    msg.setDestination(48092U);
    msg.setDestinationEntity(94U);
    msg.frameid = 174U;
    const char tmp_msg_0[] = {18, -80, -66, -29, 126, -22, 85, 43, -121, -128, -20, 115, 121, 104, -127, -88, 13, 70, -89, -14, 81, -41, -121, 94, -81, 8, 107, -98, 26, 32, -125, 106, -55, -56, -22, 115, -94, -26, -37, -119, -46, 65, 34, 63, -4, 107, -39, -121, 13, -80, -69, 116, 9, -89, 60, 58, -54, 76, -102, -115, 98, -108, 115, -127};
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
    msg.setTimeStamp(0.9863914753785966);
    msg.setSource(56916U);
    msg.setSourceEntity(15U);
    msg.setDestination(3068U);
    msg.setDestinationEntity(17U);
    msg.fps = 245U;
    msg.quality = 71U;
    msg.reps = 132U;
    msg.tsize = 15U;

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
    msg.setTimeStamp(0.9027165384258447);
    msg.setSource(17921U);
    msg.setSourceEntity(29U);
    msg.setDestination(2260U);
    msg.setDestinationEntity(231U);
    msg.fps = 129U;
    msg.quality = 195U;
    msg.reps = 123U;
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
    msg.setTimeStamp(0.9294446164458616);
    msg.setSource(37504U);
    msg.setSourceEntity(77U);
    msg.setDestination(64637U);
    msg.setDestinationEntity(117U);
    msg.fps = 155U;
    msg.quality = 65U;
    msg.reps = 105U;
    msg.tsize = 110U;

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
    msg.setTimeStamp(0.19895637985682602);
    msg.setSource(28722U);
    msg.setSourceEntity(171U);
    msg.setDestination(44173U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.3791919666618222;
    msg.lon = 0.8063539786055148;
    msg.depth = 148U;
    msg.speed = 0.32650730326064914;
    msg.psi = 0.15369291762576864;

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
    msg.setTimeStamp(0.6133962830207731);
    msg.setSource(5969U);
    msg.setSourceEntity(84U);
    msg.setDestination(34315U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.6756176347997807;
    msg.lon = 0.9462779010204515;
    msg.depth = 220U;
    msg.speed = 0.8266193122190016;
    msg.psi = 0.1970075870202077;

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
    msg.setTimeStamp(0.8081605992734509);
    msg.setSource(4617U);
    msg.setSourceEntity(190U);
    msg.setDestination(26253U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.1676231233246167;
    msg.lon = 0.04518354208955411;
    msg.depth = 220U;
    msg.speed = 0.6139649024377305;
    msg.psi = 0.5900277636831742;

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
    msg.setTimeStamp(0.8376239316702441);
    msg.setSource(18830U);
    msg.setSourceEntity(225U);
    msg.setDestination(48344U);
    msg.setDestinationEntity(50U);
    msg.label.assign("VPGZYOBCFZHGSBNDHBRTHCPUAZBBPMXVLGWEYTCZIQKFITQIHDQWONKJUBEOVFHJSRSELAEADPMZJMKRINVDZUENISTIXTLLOXKSICEMZWUPJAJNGAQOYAHEKPXHPFVNSDCXVGWFFDJTUTLRBEWYLXJAHFXZKNMBCWYEUOPARYGWXVDGORUEALLPVNXJWTKGMIMYOZLBIFKMZYUQSRRQCF");
    msg.lat = 0.9023895508070803;
    msg.lon = 0.6849751577485714;
    msg.z = 0.14384501629520874;
    msg.z_units = 214U;
    msg.cog = 0.7951658660885514;
    msg.sog = 0.8364652114658528;

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
    msg.setTimeStamp(0.5104848119234818);
    msg.setSource(21395U);
    msg.setSourceEntity(128U);
    msg.setDestination(23465U);
    msg.setDestinationEntity(233U);
    msg.label.assign("WMFCHIJGKHMZQRJFEANQKFPZRMJEUSXDSJCTVBDXTNBZLEWFFJNGIZATLLLJSIPMMQFPWLOKBECVPVALCKRWIRKXYRAUTUXYYLS");
    msg.lat = 0.9597548068442655;
    msg.lon = 0.13789024710116327;
    msg.z = 0.7982133422435193;
    msg.z_units = 193U;
    msg.cog = 0.8589592399858569;
    msg.sog = 0.06569059822548262;

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
    msg.setTimeStamp(0.8523113738363965);
    msg.setSource(22474U);
    msg.setSourceEntity(247U);
    msg.setDestination(5324U);
    msg.setDestinationEntity(145U);
    msg.label.assign("HZZVATQUGAXCGTITIUEZRGJUNXOPNRHEBDQRDCIYMTHMTRZSGCGPJWNYLWDUUOHWLQWROZWSMEUQCJHPVFGFSVCTIMQBXEPRRHMQIXAKYNBWILVFGSJOXVRGRKRQFKDVLOJ");
    msg.lat = 0.8894376947374757;
    msg.lon = 0.8496893260132126;
    msg.z = 0.8246106406050334;
    msg.z_units = 185U;
    msg.cog = 0.25513106405492514;
    msg.sog = 0.7909248323042379;

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
    msg.setTimeStamp(0.5704991404252295);
    msg.setSource(23516U);
    msg.setSourceEntity(39U);
    msg.setDestination(56147U);
    msg.setDestinationEntity(210U);
    msg.name.assign("QIABWLLQUEDIDNQRMFYOBTBNHCPMWBBVSOYUAGUJZIWKFWNDTAHUOZNCLKEDPESAXIFWXTTCIQKQRHKHPPXCKWPIGEGMKOZRSWSYRUALXGSMUUSJFIGJVNFHTPKJMJDLYZZSRFYZLROHHTMISVLLGVSOBRXU");
    msg.value.assign("CRHYGMLGRAHBJODIZSYNOFCXPVOLTJJQQROZNL");

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
    msg.setTimeStamp(0.4132898307274989);
    msg.setSource(29619U);
    msg.setSourceEntity(67U);
    msg.setDestination(6299U);
    msg.setDestinationEntity(97U);
    msg.name.assign("DPXBHZPDUSSLFMNTDNTBNGURHVHTUSXPTYSMGRYMABSCSQWERFLTPJOLZEJGKLCPAEOHUAYVGRFWQNLJEAIFPMCEKKYXVIMQBAMHQYZXPXZAZFBFPNJIDQDDOXQRTIGMLKCBHHMWDHITASBEQYWIUNACCRBJRWWAJJSDFWVBFRKCOUOGZGIRVFIVFKBOVOLYYZNZYJGXLT");
    msg.value.assign("AXVHXPUBGZBJTAQMAJICFAMSAYMCYWKERKTFMKSTDHCDCMEIGQFWSYRVNYZFAGFRHMNISCPPPYDSDVQYLRSZCWONJLGLQQIQOEHSUVLWRNTYFPAHUQPZLXCODOTHVGNJEXUCTVKGYZWQFFBONRELJGLWVYXDPZPKDULHEBUXAKJOKHMZUIEVSKENWFENODYCZIGMTZUJATPXULXDRETIRINGTBLQWOHRKVAIKSMJRFXUWOVBBBB");

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
    msg.setTimeStamp(0.6629911251152187);
    msg.setSource(15881U);
    msg.setSourceEntity(17U);
    msg.setDestination(35900U);
    msg.setDestinationEntity(194U);
    msg.name.assign("DEONMJDMFYQHRHMBHXZOKBIOSLMVLUCLHTVWPUPQDLGPXHFRWSFIEKBMCGZJRUJTBGLBPOFUBNCBWRNZJOHBGYXSZGKHTITPQTDIWLUAFYPBVFMAESDXLOEANTOPWEOSXCWUZKJXMAPNRVQXAKGRSCREGQGSKGFKMCJYWPV");
    msg.value.assign("GXYHPNJIBLTEGIBVNSTJVLDLXHWOZDSWMQNCXTIMXWVNZYYZAYLMDMJREPAEOAVXQNTSLSSPFWJNFKUDVGZMYHFAOHUMUIEGSJEQGHGCEN");

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
    msg.setTimeStamp(0.6564228036581238);
    msg.setSource(47342U);
    msg.setSourceEntity(243U);
    msg.setDestination(36150U);
    msg.setDestinationEntity(60U);
    msg.name.assign("SESFZFTJCCVKEVXAXRMOPGDLMTJYIICDJXOCAOWKZEUHZVRIXSKWWTMFKUPSVGDRBTBARKSHNPFCQFTINZUXDONKLIZHYDJKGHLESAVDELFJAQJYSPELXFSPGBYDWDRAZBIFRETJWBRBPABQWLEYPHKPXFKRMXQQINNGUMZAINLSNVOBIGPOHOHULLWLAPJJQVHZWBYVZYGQNCCTRHSQGOUUMRHGJFDY");

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
    msg.setTimeStamp(0.18558115632120553);
    msg.setSource(45050U);
    msg.setSourceEntity(114U);
    msg.setDestination(25876U);
    msg.setDestinationEntity(231U);
    msg.name.assign("WBVXSTDKOCDBJGNOOACJGGYHIDYWZNMHPSUPBKNFPQHYLSXVAXAQOEVOTFBWYIRHYKZKXQLZOFPHTZFIVCXRTUHSGAMDMQTVXTANYJGUDXGATJVFLWMARNFHOZEBHQRDKERNNDGLIHERMWXCZRLJMBOCRIJBBCWDYACEVPWGHIUAMCGVZQANYETNQYNQUIDUULQCUPPZVJKFSTOVQMFEEFJIXPSBOPCMSKDZRIJXMULL");

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
    msg.setTimeStamp(0.7291777703692518);
    msg.setSource(31837U);
    msg.setSourceEntity(160U);
    msg.setDestination(18271U);
    msg.setDestinationEntity(140U);
    msg.name.assign("GKGQJHUTJGBHVHAJLU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MCLNRCKSJHBHMZOCMBFTRJXHOADHXVQTHMKTIWVJXLDQQVHRJVRLZONJD");
    tmp_msg_0.value.assign("ZDSJMCWVYHAMQNNYBNBVDOZTUGDTKSOUGGARQZYVEAENFWHEZUCCFIASDGARCPLOBVXXSFJXJWSGUSPKNQJGCPQBIMYKDZGMYFYWIONDZOELBYLXBSMFGVEIFRQUYESEWZTQVXOUPECCHZVCLBKXHFUSLATKKZTPVLDTPRKWHRTIXQSGWJWMOQRNHHJROIIYRGAXADJOKJYPMWHRXNEPCBJUOFLAIWTPHFKIKQLPTQU");
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
    msg.setTimeStamp(0.8159419257730427);
    msg.setSource(55254U);
    msg.setSourceEntity(100U);
    msg.setDestination(62935U);
    msg.setDestinationEntity(189U);
    msg.name.assign("ABYUQZNSNYJKYDRYTZAVUMFWPJWFYZVIEZYQLPPGAEZSNQFXFKJNWTAIYEMUPMVDGDISCSJTDEUTLCDCJTUHBCYLVQOIJWREJXQPKHHBXWUJIAEXLHIBGTVCGPMLI");
    msg.visibility.assign("YOBVWGBBJBLJUFXCDHADQDSHLPXNUBVUPSIIGGOYTFOFWTDELYHZBSEJMWLPBTECDRPFRCQQUDQMXDOLPZKPIDLAKHNSKEUXMFYVVEUTHYCJHQPSEIDEORIMAQEQVNTATPMUHOICSQXGASJIOBYHGWNZAZCRK");
    msg.scope.assign("XNHLHDJJHXDWYIVYDZDZINSTUHCBUBENCCJDVTFGXZGIQYKNRUFOMMTFXKUVJRIZRVLQOFWSPHZSWDQAMFRYLFQIKAMWUDYOGXGXCQKZEPVERBMLUQEOBESACVAAHYNTNIOPPVGYETJRJTQMYYSULUGBGJKPFWPZSCGCTHJQLOQMAVVMBNSDWCPFAKF");

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
    msg.setTimeStamp(0.640716613580847);
    msg.setSource(60973U);
    msg.setSourceEntity(5U);
    msg.setDestination(36394U);
    msg.setDestinationEntity(237U);
    msg.name.assign("CFGXKYYOGNSRDRFCKCNSAQHLDTORMPRDBYNLPWNGKIOSTCWWNYODQYWLPFHHAXGVNVZSKPGIUPMZTOVFWQUDRLTBABADJMSAJNWQGOCEYCUHWJHUDLJNTGKLOOXUVJNFEUFXGEXXKSHXYPUQTXJZWTFXICZFLIJKREHQSVXFSZWMTYMHDAQBWEFLBMAPZ");
    msg.visibility.assign("KPBKQBRJZVFOUYJOSTJTSFDELFNQYJUXAWTXMZBVLAPOIFRNGZYPLRHTEKNPWEZLAY");
    msg.scope.assign("JUOSRRZFNUITHEQPWFFQJOVZWLZBMIBFIAWLKPDKWUFEVDYGHYQDCBNUBMOQNCNWYZCESAOEAGBYVSAJFHKLKKQULPPATEWIRHRPVNZSVSRCMWVUQATIHEVYMEBNLIGBTUDWOOGCXEMMWKIJHZFZASJGKLBU");

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
    msg.setTimeStamp(0.7086778940633981);
    msg.setSource(57525U);
    msg.setSourceEntity(101U);
    msg.setDestination(23651U);
    msg.setDestinationEntity(11U);
    msg.name.assign("GJIRJOSMUHMMUKLUAKQQXAVBZQDFOAEKEZRRGWUBVMPHHNEDBXHSGUBLKKINCCWWNMFXVSOHTSGRTNLISEHFYONLJYPGBEEVDEMSVNNFNSRFXICYRZBZBCTWXAKVGPQUVKXCGHPUTYRBYWPQIDYTWXFGA");
    msg.visibility.assign("QKPCZGCIGEKISXHRRUUTJPJQPVEBOTHNKCFLPXGIZAATLYHEOMRHIKGLTNCYQECFVAKFXJUQTTUNUWPVSFGFHNOKKSPFGZABSRMWSGDLVDFY");
    msg.scope.assign("THNVCQVUDTLBEPHYBAIIFIINCDGYXTRMXHRJWAFURYDLJNUKVFISCERTVKQSBUMNHOQHDKZBBJVIQXVALRYTZWCJGVMOAPHSZNQVMQEPHMIGZEDGXMYWCJGENUQZGYLHUSZLSXQYODMRFSBOLMOJKN");

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
    msg.setTimeStamp(0.7371023717936771);
    msg.setSource(20346U);
    msg.setSourceEntity(236U);
    msg.setDestination(28746U);
    msg.setDestinationEntity(113U);
    msg.name.assign("HHVNNQJHSIENBQZEYMGHFGTMAINXKBXCPUVTEIMQQFELPDRMWRZTFFGZDITFKXHXSRBAMSFVYVGUNNVXCTMBAJUCWSWMWTNISPVGZDLWEQCDAUTXIOTZUKRJQXUDAKYFNALFUFJWIYQMIYRSJRDPPHKQCOTYOUALLOJRDGZLVJZTRGVSVJFKAQYSXDLMYQHGBJPEPLAKBRSOWONBBPBZEIECHDEVNK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GDHEETACXUMLPOEAYZQWMXLIOFWBTOUNRCREIJCBXBNXHSBFQKVTBFAQKVJHLBEDRJBKWDEGUCOBNNIHBGWOFMESDQZSZNQJKUFVMDZWCAMIANLPEASUCYOJPK");
    tmp_msg_0.value.assign("GXDZLJPEFXETNASZSHIXMSLMQDZTUOMHSBCEOREVWATRORTMTDHXNXMYZUHWISKXBYQ");
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
    msg.setTimeStamp(0.8611957173917784);
    msg.setSource(53678U);
    msg.setSourceEntity(59U);
    msg.setDestination(39322U);
    msg.setDestinationEntity(47U);
    msg.name.assign("GBSYZPPYUSGMAROLVRKPPOPQWLOANNBYPRHFEKXVSYJBIOXLERYIDC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OXESJOSKGBQWPGQZOGHSYGYDKSIWJZIBRPUVNTPVKJJRMXQCWIENIHAXMOVMECDVAOTBHIRLBQWCWREWTPJUKMOTHZZLDFEACAAZLRFNNPLUOYYCGBGRXBHUGVZKCQBODFHSLSEKLVVSWFQMGYACISLTWYXTDNRAMDSMRHBBIVMYNUYFHFQSPXNQEKFUTPLDUJLQTRICGU");
    tmp_msg_0.value.assign("PRBQYHKIPPVQFVQJLROJPKIARZJAKEJKPZMIIMLBDEMGHTDXDBMOANZTRLFFAUXPUTDRBICSDVXMYLGXVEKLWHRCWAKAWYDBIJUNHAZZCCODDRWFFRTOQGOXJYBPZCGQKSXFCNXWYWUANEYCSVULYGIELTROXABXKSUNSTBCGHEZMHLEAHESNYS");
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
    msg.setTimeStamp(0.38440196638792135);
    msg.setSource(35423U);
    msg.setSourceEntity(16U);
    msg.setDestination(42375U);
    msg.setDestinationEntity(185U);
    msg.name.assign("ANWEDBTRPQNMZJNWIVNYASICWNPLVYGBORXIQVUYJQSFBVWLSSBRGRTFJKSXEGNKZEMBRIZDXEADFEXLMFNMIVPOKGICGDMMJHJFDHQOZDKFVCLTOTIZSTZBSWYWCPCEQXJQFUKIFOYHE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CGXBPOWIOLBZHGUPWNUZPHYOOQRYIDKAMWAUTZTVLBLKXILBBFPUOMDHOWSVVWFKSSXXCTZEMOQVQWLBWEMWKFSHDSSQMIHXBONCRUNYXWR");
    tmp_msg_0.value.assign("SZVEZGHNCMCMKWOKKFNQAVXRIXRJATHTKWK");
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
    msg.setTimeStamp(0.6544285073476517);
    msg.setSource(435U);
    msg.setSourceEntity(26U);
    msg.setDestination(22907U);
    msg.setDestinationEntity(38U);
    msg.name.assign("LVAUWKJFDRKWASXRGPDOUSKXOWNRAXPOEZFJHASGASNEMLBOFOJIFSYWCZGBIYUADUZNTCXLRRDIJAGDFTBVNSHEMKFQVAAKSUOPQQZUZEJCCMEENMTKBOQWJXHBCPHSPCMABFDNWPVRGGQKOPFBSVRLOTKBHDYDTVEQLMVLYKTE");

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
    msg.setTimeStamp(0.07511027220619604);
    msg.setSource(46044U);
    msg.setSourceEntity(204U);
    msg.setDestination(33623U);
    msg.setDestinationEntity(254U);
    msg.name.assign("AWEODSHOVIFWNTTRUUTIEVFWUSBRFCTGALAYLCJNWMKFGPDIGRZLGEBSZOHUOLXLUGQEZZVFZHSGJCXLEJHMVNXBWPJNWHRTKOAIPWDJKOMCVKQDJDAQHTAWAPIYSQ");

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
    msg.setTimeStamp(0.940347044395361);
    msg.setSource(2544U);
    msg.setSourceEntity(213U);
    msg.setDestination(22885U);
    msg.setDestinationEntity(73U);
    msg.name.assign("CNFCSEKKHEXJNRMPLHDKXMPBXVEZWHMSKEGYIJECAXQCKDFBZNGDHLNZOYVWMUFAGZCIZTKISOHGIAQSBAWMEBZWCLDGSVHVQXJFBYAHUDLHPBCCXPMDRWNRDXNVQGZSUOAUGMMFKRIUCI");

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
    msg.setTimeStamp(0.14452958541270133);
    msg.setSource(64588U);
    msg.setSourceEntity(50U);
    msg.setDestination(34253U);
    msg.setDestinationEntity(37U);
    msg.timeout = 3154287895U;

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
    msg.setTimeStamp(0.0107204216457214);
    msg.setSource(19463U);
    msg.setSourceEntity(79U);
    msg.setDestination(10025U);
    msg.setDestinationEntity(229U);
    msg.timeout = 2615299639U;

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
    msg.setTimeStamp(0.23043344406707045);
    msg.setSource(46422U);
    msg.setSourceEntity(107U);
    msg.setDestination(19314U);
    msg.setDestinationEntity(28U);
    msg.timeout = 3905626198U;

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
    msg.setTimeStamp(0.3805106170088446);
    msg.setSource(10248U);
    msg.setSourceEntity(120U);
    msg.setDestination(17211U);
    msg.setDestinationEntity(65U);
    msg.sessid = 292855858U;

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
    msg.setTimeStamp(0.6276602658555929);
    msg.setSource(56961U);
    msg.setSourceEntity(102U);
    msg.setDestination(54980U);
    msg.setDestinationEntity(33U);
    msg.sessid = 443536161U;

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
    msg.setTimeStamp(0.15746045933679842);
    msg.setSource(49596U);
    msg.setSourceEntity(193U);
    msg.setDestination(8538U);
    msg.setDestinationEntity(190U);
    msg.sessid = 2114124504U;

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
    msg.setTimeStamp(0.5191095556876447);
    msg.setSource(40762U);
    msg.setSourceEntity(9U);
    msg.setDestination(47177U);
    msg.setDestinationEntity(12U);
    msg.sessid = 1001246710U;
    msg.messages.assign("DMEIPROWJLXOHWDZOKZQYZHUNHGSNXMWXLLXCRBXMIFIHQETWIPIFDINXBRZQANPMXTAZJRZADTVSEABLR");

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
    msg.setTimeStamp(0.9278873705570144);
    msg.setSource(59622U);
    msg.setSourceEntity(199U);
    msg.setDestination(45841U);
    msg.setDestinationEntity(22U);
    msg.sessid = 4154252701U;
    msg.messages.assign("AZNDMWAIBOYVXCKGKRRMYIQCEOCTXFPHWZVJNUCYEUYPVMCGTIMYKLQAAZTJTCSIGFGEGMEZUF");

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
    msg.setTimeStamp(0.736153349372065);
    msg.setSource(3351U);
    msg.setSourceEntity(246U);
    msg.setDestination(45126U);
    msg.setDestinationEntity(136U);
    msg.sessid = 1939445029U;
    msg.messages.assign("FYDLNSYLLHUBVXDEEKOKXDIQOYDVDARIPAVWMBAKIZHJSDZNRQRJMEWXUGRDQPIMVCTGBAWSNJHCZREAKBYXNICOBCYTKEBIZOVUWRFODNEJGUFLHDXFJSRVPIQAXEBPMUQCWIGPSEFIFPLWQAPLOSRJPWCEOYULANKAVKKPTWSWVGYUXMZBXHUHMCGDJZONTJNOJMCTXZWMGPZYGYTSMQNVLUVQFJHRYGCSQTFINMTBZSCBAQRGKH");

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
    msg.setTimeStamp(0.3939941846601166);
    msg.setSource(19865U);
    msg.setSourceEntity(114U);
    msg.setDestination(467U);
    msg.setDestinationEntity(160U);
    msg.sessid = 3709831945U;

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
    msg.setTimeStamp(0.2630916062969567);
    msg.setSource(9054U);
    msg.setSourceEntity(82U);
    msg.setDestination(22359U);
    msg.setDestinationEntity(219U);
    msg.sessid = 1286541187U;

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
    msg.setTimeStamp(0.27193810114249695);
    msg.setSource(2515U);
    msg.setSourceEntity(41U);
    msg.setDestination(5868U);
    msg.setDestinationEntity(149U);
    msg.sessid = 3020298305U;

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
    msg.setTimeStamp(0.749795647148082);
    msg.setSource(17583U);
    msg.setSourceEntity(211U);
    msg.setDestination(51320U);
    msg.setDestinationEntity(5U);
    msg.sessid = 432032632U;
    msg.status = 151U;

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
    msg.setTimeStamp(0.8908457556141618);
    msg.setSource(6313U);
    msg.setSourceEntity(235U);
    msg.setDestination(30700U);
    msg.setDestinationEntity(149U);
    msg.sessid = 3628403287U;
    msg.status = 185U;

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
    msg.setTimeStamp(0.19829673619007615);
    msg.setSource(58808U);
    msg.setSourceEntity(201U);
    msg.setDestination(10041U);
    msg.setDestinationEntity(31U);
    msg.sessid = 2383618527U;
    msg.status = 172U;

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
    msg.setTimeStamp(0.868238047858997);
    msg.setSource(19850U);
    msg.setSourceEntity(247U);
    msg.setDestination(17539U);
    msg.setDestinationEntity(164U);
    msg.name.assign("POLILVJEZSFPBUWYMNUMCAAMWHHTOFFPHEMDIRKCIUUFGYXDTKJQSCPYEHCANVLZNWGDUGJNDFTTORENTHLH");

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
    msg.setTimeStamp(0.24396858746037708);
    msg.setSource(16496U);
    msg.setSourceEntity(236U);
    msg.setDestination(29833U);
    msg.setDestinationEntity(6U);
    msg.name.assign("SBLJEKZZNZBYPRHOHOUILBPLKTIMFNWAOSXWNJXCSCGQHH");

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
    msg.setTimeStamp(0.8275858910757998);
    msg.setSource(604U);
    msg.setSourceEntity(38U);
    msg.setDestination(9325U);
    msg.setDestinationEntity(21U);
    msg.name.assign("LIDEXWFYXJNVNPZXFQKTARXXYCATEBAVSLUZTWSYQNXKFILXLFUYRHNMHQZGMUIPSAELDPQKUDGTYICORHQIINVMGKOOHEYJMBAJPGFCOSYRZTOTEMKAQAHXEGRYFSSBLSZLVTYQVREGRCZHJCKDZWPQWHODQOIDNJSUHPOFJJCJODMKKEPBSRPZRWCLDAKMMGBLZVNVNVPWDHSTOTBUBWCTWMPXUNGBQEWCCMUVVZNJIFUEHFFKJI");

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
    msg.setTimeStamp(0.5480146814106246);
    msg.setSource(28404U);
    msg.setSourceEntity(6U);
    msg.setDestination(43065U);
    msg.setDestinationEntity(1U);
    msg.name.assign("IKIRWPUBAJBSQFPLNKWXVACXLREZXUKULHAUVOOLRDRMBPFGRPLYBZXSQXBERWSWOHBODWSLEOTBBSDYQZVLNRMYKIPKTPVJGPQAAJKASYDNMTZHNIVTFAQHEYCMVCSOGBFMJCBUNPUUDKCOZIVNZUWXWMFPSHZJQGYXMG");

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
    msg.setTimeStamp(0.27086120363225563);
    msg.setSource(40172U);
    msg.setSourceEntity(100U);
    msg.setDestination(59554U);
    msg.setDestinationEntity(16U);
    msg.name.assign("MLZAXIRJVFGZZFCEEURVSWCVBUYHFWSZDBGYUNAJPSUVRLUBZHYGNEOCOPKPRDIBWTNCNKHSFMQSUMHJABKSIRAQLUELVDTLWCRMISGQMTRJKOJYPKCNJUFKIMHJYXMEWEGHICJZTVLXDQRLWNKGPAHNYP");

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
    msg.setTimeStamp(0.9432246064948548);
    msg.setSource(29078U);
    msg.setSourceEntity(176U);
    msg.setDestination(16292U);
    msg.setDestinationEntity(66U);
    msg.name.assign("JSUUQWDIDAKLFYWUKTPROGLNMAKUZWKYMZFRKXCOGJZVKMNNICGKCQPGAUAIYPFBKBFXBNHTOCXCLATLBVVFNMSVPTGTFSYMNTZSYQCNJIWYWRBJBQWVLVFHWMBFZPPBOKXNJIXDRNJSSTLMHIAECUAJESIHEVODPJEPHXVJUTUZTYERLUQSODRFOVCCRIHNQODYWIKQEWEXMPZLGYWRFZQXVIDRLPCAZAGQURJOBTQEDEMGGG");

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
    msg.setTimeStamp(0.10443383427942887);
    msg.setSource(45056U);
    msg.setSourceEntity(123U);
    msg.setDestination(31918U);
    msg.setDestinationEntity(138U);
    msg.type = 220U;
    msg.error.assign("TPHABYEJCTYVHJQWMVJNUSWRYLHDMTEDGQODKWKIMHXPZCGQMOOAALICGHWYZQZBNNGILRMWGBVYEXAZXLXRMBUVTOAXWXOKPXVQRDJHMXVVPSRGDSOLVURCZNGFKBFFPPYPBEUEZIVKIWENTUQHNUOCCJ");

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
    msg.setTimeStamp(0.7655802013165752);
    msg.setSource(55784U);
    msg.setSourceEntity(81U);
    msg.setDestination(43475U);
    msg.setDestinationEntity(148U);
    msg.type = 18U;
    msg.error.assign("KZLLMNZCDPMWPBPNHRMQLNFPZWOBBUTDHKITFAFZPECQJIXRSMLLXRRZJEBWDVZTGJOYHPVZMATWTWRILFTAPWUTQSCKAUDLRUFIGCUMQQNEBGGOGNAESFXSOYYHGUMUFKXQIMUDONSFRUGEIVOKRDHHZSJYPKIXDCWVBLPDFYGWRXXRMDLBHTJJCCBSBEHYAHBGFYVYZXVQVTMWJGOEXCSNWLQVNCEOYVEEIQZODOSAJNNHVIJXQKAIP");

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
    msg.setTimeStamp(0.17030784267101373);
    msg.setSource(29032U);
    msg.setSourceEntity(16U);
    msg.setDestination(26078U);
    msg.setDestinationEntity(6U);
    msg.type = 89U;
    msg.error.assign("ZWCRWMCEAGXC");

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
    msg.setTimeStamp(0.39537933552844373);
    msg.setSource(13U);
    msg.setSourceEntity(18U);
    msg.setDestination(27608U);
    msg.setDestinationEntity(171U);
    msg.seq = 29852U;
    msg.sys_dst.assign("QDFBAAWMIYRUOVFMMRJDHAPJHFWVSPTPRLZNTWBDKZSJAMENCSMHSCQZAEKEXBLKSORCQMDNNUXQANHIQTOUYXOKCILFFMCDWKCJUOGYTVBNXEPYJPZENKTBBVSVPFPIGUGHBTPMMRNMTIBRWRTRPSHZEZPGJXTZ");
    msg.flags = 93U;
    const char tmp_msg_0[] = {123, 13, 102, -39, -66, 6, -64, 95, -56, 0, 8, 0, 15, -7, -119, -83, -10, -90, -64, 125, -122, -31, 114, 85, 103, -117, 58, 119, 125, 4, -40, 38, -53, 44};
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
    msg.setTimeStamp(0.14227176443060074);
    msg.setSource(58740U);
    msg.setSourceEntity(160U);
    msg.setDestination(27749U);
    msg.setDestinationEntity(147U);
    msg.seq = 12236U;
    msg.sys_dst.assign("YVGZSEYBPQBNJT");
    msg.flags = 43U;
    const char tmp_msg_0[] = {38, 11, 75, 82, 115, -48, -19, -46, -88, -13, -10, 81, -14, -74, -5, -35, -117, -37, 115, 71, -12, -101, 14, -124, -46, -91, 72};
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
    msg.setTimeStamp(0.5255810155761949);
    msg.setSource(30164U);
    msg.setSourceEntity(68U);
    msg.setDestination(10327U);
    msg.setDestinationEntity(76U);
    msg.seq = 11735U;
    msg.sys_dst.assign("PNXAKBCNKDGYVCNXXPUFYTEMWURRIGTZVXIQPRRWIWQENQTPZHW");
    msg.flags = 49U;
    const char tmp_msg_0[] = {-122, 109, 112, -107, 106, 87, -82, 26, -82, -120, 0, -46, -68, -92, 124, 60, 18, -21, 9, -60, -107, -62, -36, 22, -103, -124, -75, -47, 84, 76, 23, -35, 97, -127, -104, 78, -111, 43, -99, -102, -106, 85, -61, -62, -105, -35, -114, 56, -29, -101, 7, 46, 112, 14, 99, 6, 105, 13, -2, -120, -82, 64, 81, -5, -75, -82, -41, -33, 81, 100, -99, -55, -113, -68, 34, 39, -45, -18, -106, 69, 52, -12, 54, -82, 39, 23, -107, 56, 107, 25, 124, 75, -113, -6, -98, -21, 25};
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
    msg.setTimeStamp(0.9644268841048701);
    msg.setSource(15390U);
    msg.setSourceEntity(35U);
    msg.setDestination(33575U);
    msg.setDestinationEntity(160U);
    msg.sys_src.assign("WVNUGXWPMZCYVWQZWZTVPUBEWAQVPOMUTVZEZJSCOJQEXPSETVDYRDDJUKCOMBGP");
    msg.sys_dst.assign("CKOEEBSKIUHNJJOLQAKLKAGKRVZZXLTOVJR");
    msg.flags = 85U;
    const char tmp_msg_0[] = {43, -11, -101, -11, 19, -52, 104, -91, 119, 35, -108, -50, -12, 125, -12, -7, -23, 77, -15, 53, 123, 83, 15, 86, 67, -95, -26, 22, 92, -46, 100, 42, 47, -93, -32, 79, -50, 30, -118, 25, -19, 14, -1, 93, -68, -52, 75, 60, 40, 1, -73, 22, -114, 107, 12, 27, 17, -28, 57, 54, -59, -28, 80, -66, -66, -126, 91, 103, -57, -68, -22, -51, -125, 0, 41, 15, -107, -19, -23, -106, 69, -25, 47, -31, 122, 14, -112, 26, -4, -50, -42, 62, -113, 92, 35, -12, 22, 77, 47, -14, -16, -95, 14, 104, 107, 5, -105, -84, -74, -81, 18, 85, 10, 56, -18, -4, -29, 26, 82, 112, -22, -35, -9, 112, -83, 84, 43, 73, 61, 75, -111, 59, -126, 119, -2, 17, 6, 44, 61, -74, 114, 6, 121, -28, 91, 11, 123, -45, -51, -34, 83, 112, -115, -40, -61, 54, 1, 110, 43, 74, 6, 9, 121, 96, 68, -17, 120, -47, -47, 9, 50, 92, -32, 24, -23, 28, 30, 124, -124, 112, 75, 39, 85, 116, 122, 58, 72, -117, -2, 32, 2, 62, 115, -75, 60, 21, -49, -91, 106, -64, 115, -114, -61, -84, -49, -120, 22, 102, -89, -95, 64, -74, 114, 125, -28, 93, 125, -108, -108, 106, 22, 84, -8, 88, -21, -85, -3, -89, -52, -108, 76, -72, 118, 91, 66};
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
    msg.setTimeStamp(0.8605416120162708);
    msg.setSource(15344U);
    msg.setSourceEntity(45U);
    msg.setDestination(41750U);
    msg.setDestinationEntity(79U);
    msg.sys_src.assign("HNBPMAWUKAPLWLENGZOJFWJCGKLOOQPXMTDNQUVBJZZQCGGRZFNUXZGBMAYCTASAXPEBMSJTKFVVOIWOLCENPPMRBUOVLJWQYRCZRJTVBRRVHVIANNSJIXWPDPHPWFIRKMSGKZHUKVZXORIQFMGLVXITYBTCWQKHDDASPLCDTOFTIJSSCURSSXUFBYYXTDYQAQCY");
    msg.sys_dst.assign("VUHPSHSXWCCTMNCJTUQNYKRHXHHPTLIFYWFZMUCRUADKRVYUVJAVWLDKTMTJBOMNIIDXQUZVDERZDGZEHJQOMWTMSLIRSYTYIQFQBJXKXGJGLZEAKMSUDZAJHAISB");
    msg.flags = 145U;
    const char tmp_msg_0[] = {-122, 103, 41, 3, -45, 58, -86, 24, -109, 40, 105, 57, 88, 94, 1, -82, -23, 66, -109, 58, -34, 34, -124, 86, 98, 41, -95, -87, 89, -55, -103, 91, 85, -98, -83, -44, 64, 88, -101, -48, 40, 69, -36, -64, -49, -63, 90, 13, 102, -33, -67, -11, -113, -128, -119, -123, 14, 23, -86, -122, 107, -67, -71, -115, 30, -96, 114, -113, 40, 8, 23, -24, 57, -70, -11, 92, -50, 42, -105, -125, 98, 92, 46, -23, -120, -121, 20, -79, -78, -82, 67, 59, -31, 52, -65, -115, 46, -56, -78, -56, -56, -61, 38, 54, -96, 106, 76, -7, -28, -60, 71, -116, 16, -53, 79, -37, -97, -27, 9, 87, -80, 36, 89, -7, -62, 65, -105, 54, 14, -66, -33, 98, -20, -70, 32, 8, -118, -73, -20, 25, 96, -103, 124, 72, -92, -85, 15, -56, -99, -30, -62, 72, -102, -37, -76, -100, -47, -29, -45, 111, -25, 80, 9, 19, -102, -83, -51, -117, 89, 55, 98, 23, 77, 59, 97, -3, -105, 51, 109, 79, -63, -89, 66, -87, -6, 37, 81, -12};
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
    msg.setTimeStamp(0.976100967436971);
    msg.setSource(45605U);
    msg.setSourceEntity(233U);
    msg.setDestination(42063U);
    msg.setDestinationEntity(149U);
    msg.sys_src.assign("IXBEKYXJFCORCUUZPKGKPSAMWLXVOWZRVOPQLOWXUHNJANVVQW");
    msg.sys_dst.assign("ILMYCPWUATHNFNKMYASCDBNTOHOVYZWSQMRZTJNPGLJPIZSHEZUGGNTWH");
    msg.flags = 138U;
    const char tmp_msg_0[] = {126, 53, -12, 123, 58, -82, -55, -48, -121, 84, 17, -62, 43, 3, -24, -115, 97, 0, -116, 82, -39, 17, 94, -118, 125, 66, -7, -33, 15, 100, 27, 102, 17, -67, 39, -45, 104, 16, 44, 15, 10, 5, -85, -68, -7, 6, -44, 37, -38, 42, -32, -3, 49, 28, -20, -127, -124, 111, 108, -121, -48, -104, 33, -126, -114, 13, 43, -28, -126, -37, -72, 74, 7, 103, -67, 21, 34};
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
    msg.setTimeStamp(0.6266072873497046);
    msg.setSource(10381U);
    msg.setSourceEntity(32U);
    msg.setDestination(53378U);
    msg.setDestinationEntity(93U);
    msg.seq = 62058U;
    msg.value = 160U;
    msg.error.assign("CQJKDXQCCDXZWUNXTISANFJQLSEURVZYROCNRTTLDGIEEBZKFTQHIOLNXRCNCRXMQKBIVNCNQFMJSAEMUUSNTVFJREVDUVFZTNFWIQSJYQAEBJPOZKPYKYZWOGDPKMSGXILWKOBHCHWPQLGUZSSKPPFZFMGEHWHHYYBRUMDKOWILIESDUPHRBOMOXYTLAAUTYWFRFTQGABWMXNHVUHAELBPAVBBGJXGCI");

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
    msg.setTimeStamp(0.6242861733861205);
    msg.setSource(56974U);
    msg.setSourceEntity(47U);
    msg.setDestination(20233U);
    msg.setDestinationEntity(15U);
    msg.seq = 50745U;
    msg.value = 27U;
    msg.error.assign("SJHMIPNDGBGUHYDNEBKLWUSEAOHFEPOZCNTLCBNXBLGLZNPKVZSRYQPDWCVRGUTBMMHGNQCEAGJKSJOZXLJPAYJNAGMHXQORFTJZGUW");

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
    msg.setTimeStamp(0.9563269223651811);
    msg.setSource(22183U);
    msg.setSourceEntity(13U);
    msg.setDestination(26844U);
    msg.setDestinationEntity(231U);
    msg.seq = 56070U;
    msg.value = 84U;
    msg.error.assign("PRGLXTJLVYXSQRWPITONJQHWBWNNLIHBPPZAVNEFBUZMCIGZIRQZWTGFUDKPJDSACTXFJLZMXETCASFBTDEWVCSAABAQFLCGZHOWEMUPQALMAUBBJNGUZROZTYUIJAMMJIQMOIKFYEZFZYWHKGHOGRQPIENFHRCUOOOPVHSEAVYPJGDKSUMJTPRHXMGYVSSLBQWDHODCUCSECHDVBVNXKRQUYEKXKDVDLNYJGYTKMOWDFNFQXVWBCXKYRXEL");

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
    msg.setTimeStamp(0.4890524089213215);
    msg.setSource(44779U);
    msg.setSourceEntity(84U);
    msg.setDestination(20091U);
    msg.setDestinationEntity(78U);
    msg.seq = 31880U;
    msg.sys.assign("JALNVMUPLHAMCIJXLKYLDMKHZOFCPEBRBYYMGSOBBEVWNTJIVFTUOHUWFQXWFVCGDEDFSAJPFUEQXPJEPVSJXAUYZHHNSOBXRLALIJDNRGXKRGLTQGTWMNRDCPDZMP");
    msg.value = 0.01405757919238737;

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
    msg.setTimeStamp(0.24028908220756973);
    msg.setSource(62094U);
    msg.setSourceEntity(82U);
    msg.setDestination(58126U);
    msg.setDestinationEntity(170U);
    msg.seq = 24492U;
    msg.sys.assign("TVGYLOUURGWGKPJEFZBJRNDBQCRFTBCEEWDFCMGALDIGPYUYUKOIBWVQQDHXFAH");
    msg.value = 0.3532154413921508;

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
    msg.setTimeStamp(0.997677943186955);
    msg.setSource(44681U);
    msg.setSourceEntity(168U);
    msg.setDestination(33549U);
    msg.setDestinationEntity(103U);
    msg.seq = 46532U;
    msg.sys.assign("NIAMGWDSCAIOZQVPAWCVKOAGQUUFGNGFWDBVBNTIMI");
    msg.value = 0.37732318385045105;

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
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.11664191574482319);
    msg.setSource(63805U);
    msg.setSourceEntity(108U);
    msg.setDestination(2687U);
    msg.setDestinationEntity(37U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.131387724952572);
    msg.setSource(8404U);
    msg.setSourceEntity(137U);
    msg.setDestination(49421U);
    msg.setDestinationEntity(222U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.1541828455805081);
    msg.setSource(25602U);
    msg.setSourceEntity(201U);
    msg.setDestination(35891U);
    msg.setDestinationEntity(180U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #2", msg == *msg_d);
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
    msg.setTimeStamp(0.061676488329005186);
    msg.setSource(15987U);
    msg.setSourceEntity(229U);
    msg.setDestination(35250U);
    msg.setDestinationEntity(234U);
    msg.action = 39U;
    msg.longain = 1153597652U;
    msg.latgain = 2514134503U;
    msg.bondthick = 3508441735U;
    msg.leadgain = 545599735U;
    msg.deconflgain = 4225745505U;

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
    msg.setTimeStamp(0.9642720956638617);
    msg.setSource(64797U);
    msg.setSourceEntity(72U);
    msg.setDestination(5556U);
    msg.setDestinationEntity(249U);
    msg.action = 234U;
    msg.longain = 160688934U;
    msg.latgain = 724713042U;
    msg.bondthick = 3712662137U;
    msg.leadgain = 2745012032U;
    msg.deconflgain = 3451234071U;

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
    msg.setTimeStamp(0.5980185949904724);
    msg.setSource(39705U);
    msg.setSourceEntity(153U);
    msg.setDestination(42854U);
    msg.setDestinationEntity(220U);
    msg.action = 10U;
    msg.longain = 1677392179U;
    msg.latgain = 1694514904U;
    msg.bondthick = 2300529255U;
    msg.leadgain = 732484530U;
    msg.deconflgain = 4054231940U;

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
