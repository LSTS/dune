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
// IMC XML MD5: 6ed42ce10f9e69cbd84b1fe2272a8a38                            *
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
    msg.setTimeStamp(0.286175368837);
    msg.setSource(2681U);
    msg.setSourceEntity(85U);
    msg.setDestination(37053U);
    msg.setDestinationEntity(217U);
    msg.state = 45U;
    msg.flags = 150U;
    msg.description.assign("VODQBQKCHZVORQMFRSWEDG");

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
    msg.setTimeStamp(0.828622492431);
    msg.setSource(3753U);
    msg.setSourceEntity(38U);
    msg.setDestination(40427U);
    msg.setDestinationEntity(148U);
    msg.state = 249U;
    msg.flags = 117U;
    msg.description.assign("TMNHGHVTWFKOBZWLPKFUXRYHPTCSQUAVCYNIIJFEKKFPEPIBEMYIDIZFGMSHEGQCKXTMSKWTFNHYLLOMWCSHDAYQBTPTGBADZIETMJUYVMBTEZHJDVHNORCLMAGBPKXWDWKNSJMRABSJZPYWQEIPPTJUQCLIRXNFQUVLZFUOJHDORDRSNFENBGYUFLELZCZRIOWSVXRUCBAPCLSVQKW");

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
    msg.setTimeStamp(0.880767942389);
    msg.setSource(11652U);
    msg.setSourceEntity(49U);
    msg.setDestination(1773U);
    msg.setDestinationEntity(130U);
    msg.state = 31U;
    msg.flags = 242U;
    msg.description.assign("SXTBQIUSQSOLNNHVLNABYWLBTAVTIJMNPZSCBXSHBIORWQGPTKOQVRGHUWTUAIOFBOMBJDJLNHWQMVCJCTLDJQLMDDDDCVGXYRVARWRKUSBPGGRCBXYEVZFQFJUNFNTUKWPDCQECMOTADWAFMSRDHPAGVYIKEKHSEKLVLYIZVOTYCMKNEOFPDIJSNAXQJUEKCKXXYREQMGGFJZRLXHMYFKAHSAIGHUULPUGIOEW");

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
    msg.setTimeStamp(0.578289014975);
    msg.setSource(6682U);
    msg.setSourceEntity(96U);
    msg.setDestination(10538U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.797930599376);
    msg.setSource(47902U);
    msg.setSourceEntity(96U);
    msg.setDestination(17209U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.236578399749);
    msg.setSource(14098U);
    msg.setSourceEntity(195U);
    msg.setDestination(53981U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.211256000093);
    msg.setSource(63398U);
    msg.setSourceEntity(8U);
    msg.setDestination(22874U);
    msg.setDestinationEntity(151U);
    msg.id = 176U;
    msg.label.assign("YRIHOKGTPDJMKQHMJWLDCQGPSFCROCGTDUUTHSZJZDDZNJVQGAUBXSGNUAWTMBVAEEKDGRJZRNWWCMZUJAYKOIWOCUMZEHXBHASXVXQSLFETTPPGHBQFIMTJCUZAUJ");
    msg.component.assign("BSKAHSMFYEWONJKANAZWHDJUZPECZIQJKTKGMLYAUMZBIFKUJIYUELVVSPBTDSVBQMAMGONBXVQLTKABZGCHUUJNRCRPROLZQGYGTFBPPOYEMCSIHCQIRPLQBKOIUOQMYUFVGXHROZRXWXWXNTQLTHCHOVDTJWXEHQTNNTQNPJFLAO");
    msg.act_time = 12729U;
    msg.deact_time = 13755U;

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
    msg.setTimeStamp(0.536345645066);
    msg.setSource(28194U);
    msg.setSourceEntity(16U);
    msg.setDestination(65508U);
    msg.setDestinationEntity(202U);
    msg.id = 233U;
    msg.label.assign("VHGDPBWDHLFVMYNMFIIAIMLCSKSBQMRAMUNSSUEVXRKWJLASFRENZNACLLXZIVBTCSWRGFQEVTOYYVAHBKUCMVUWEJJFCTHFD");
    msg.component.assign("TOVDBUITXHLLQWFXBGEPVTRKMGKYHQJJQATOINCKEDKMOFVKKZLICVHYNSOWTPHPRWSUVCEFOQEVJFWFRCEYZFZOWALNTZFXUHXDIGYSSJNSHJGASASFBPXA");
    msg.act_time = 1746U;
    msg.deact_time = 64216U;

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
    msg.setTimeStamp(0.716761381594);
    msg.setSource(8156U);
    msg.setSourceEntity(218U);
    msg.setDestination(27206U);
    msg.setDestinationEntity(223U);
    msg.id = 232U;
    msg.label.assign("YNHCRWUMAISNFKSNOYQDAKAVXJCAPLTKBMGEWOCVDMZPWNKUXKXQFIGBVVTCSJHLFYWIYYZXECMXPMBJUXAERAMMCPTNGEIGTZVUBASJBBREUBRTLDGDCKYRSPKTSZD");
    msg.component.assign("WSSONVXSKANQJHRYCDIOKGJUUYUYTUBOHTCKRMAEXLOLTWGNZMIFJFMVEFKPLHJNXIOLCRAZJWFSLWGQNQSAMZIZMZSYBHMIHSYIHJWACAKBDTUCJPBARXAPNTVLEWYTIRZJNPMUXSLVCUQGSOONKDHDVURXCBYBSE");
    msg.act_time = 31782U;
    msg.deact_time = 44299U;

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
    msg.setTimeStamp(0.173757867617);
    msg.setSource(39083U);
    msg.setSourceEntity(137U);
    msg.setDestination(59051U);
    msg.setDestinationEntity(156U);
    msg.id = 249U;

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
    msg.setTimeStamp(0.269986453467);
    msg.setSource(46528U);
    msg.setSourceEntity(212U);
    msg.setDestination(21873U);
    msg.setDestinationEntity(57U);
    msg.id = 222U;

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
    msg.setTimeStamp(0.960125972056);
    msg.setSource(38222U);
    msg.setSourceEntity(112U);
    msg.setDestination(11242U);
    msg.setDestinationEntity(48U);
    msg.id = 46U;

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
    msg.setTimeStamp(0.61575894783);
    msg.setSource(25200U);
    msg.setSourceEntity(208U);
    msg.setDestination(22615U);
    msg.setDestinationEntity(3U);
    msg.op = 61U;
    msg.list.assign("VOBVZJIXKNHYIBTTNCWZTOJSTXTBVDBBZLQLXBKRNCPJIDUMAYPYWECVAHQYWLFSFJYSXZTCUNKPUKHJZZUEUUENGMKKQKZTXSLPVGEWOQMVFLMVOHAGCPDBDOQRNGMXLHCTLIUYDGDGWNGFAFEAARFWIJQDOQBBOGFTOJMUWHRLMYSPYJSDEGZVN");

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
    msg.setTimeStamp(0.240879177531);
    msg.setSource(34346U);
    msg.setSourceEntity(195U);
    msg.setDestination(38836U);
    msg.setDestinationEntity(225U);
    msg.op = 73U;
    msg.list.assign("UIOAVRPYMTSI");

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
    msg.setTimeStamp(0.503100521147);
    msg.setSource(37372U);
    msg.setSourceEntity(196U);
    msg.setDestination(29761U);
    msg.setDestinationEntity(121U);
    msg.op = 56U;
    msg.list.assign("ANOQYVITTASWWKLVXDCGAKNZSWTGQJVAHMASCECIXFWXNJYFYJRAUMBOZIYORIXOFEFCLZEGHMZZXRVUBGNSBSHEYLZSCWFKPQADDCXIXBDHVLKWYNQGOWYIHTPKJDJMEMBCSBKNTXILNMDVEJAPFAKRXZLTCFBBFSWDBIIEUOHJVNOWFHUPMYGPZULCHRVLQQVOMAJKZVZUMDOGQTNHTSLOKRHEGRUUQTQRCPLI");

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
    msg.setTimeStamp(0.186196136277);
    msg.setSource(5600U);
    msg.setSourceEntity(55U);
    msg.setDestination(26683U);
    msg.setDestinationEntity(242U);
    msg.value = 214U;

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
    msg.setTimeStamp(0.580633145546);
    msg.setSource(46057U);
    msg.setSourceEntity(111U);
    msg.setDestination(53213U);
    msg.setDestinationEntity(191U);
    msg.value = 74U;

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
    msg.setTimeStamp(0.0491948043144);
    msg.setSource(50935U);
    msg.setSourceEntity(204U);
    msg.setDestination(50819U);
    msg.setDestinationEntity(109U);
    msg.value = 72U;

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
    msg.setTimeStamp(0.600972711177);
    msg.setSource(9442U);
    msg.setSourceEntity(107U);
    msg.setDestination(9180U);
    msg.setDestinationEntity(157U);
    msg.consumer.assign("VWEZKPFTBWYFQGCMWVPXYVPPJVNGLJQDLHFCKRLEZENCOFORUTFGJAAICONSIAKVNSLGDUZJTMAZDLCOPJIMFKHULNQBMTZXAVBQOOCQZRKFKYPJPWCSUCMUIHEGROUJMZNNFYEZUKLTUFDDRUQDWQXWSBGLSYHBEXNCXBAYYJXYISYIKQSJITDTSZIOIHBGOVGQU");
    msg.message_id = 57069U;

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
    msg.setTimeStamp(0.43764280802);
    msg.setSource(4780U);
    msg.setSourceEntity(2U);
    msg.setDestination(54627U);
    msg.setDestinationEntity(20U);
    msg.consumer.assign("ZIJWAFUZRTGXXQNMKEIKEHIMYZVFEJRUONCPAEIFFGUSQCFLVETNUGVEYWLACNQRLDRTMONRTJYMVXIYEOXETCDUJKSUTBLRMWPABZAOOIKHHPFXKLYPMAXKJTSQZJADCMZVDCSSHDRUDNUGHCZLOLVEBWRFQSHQQIWDNUPJ");
    msg.message_id = 58395U;

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
    msg.setTimeStamp(0.446456440758);
    msg.setSource(62411U);
    msg.setSourceEntity(10U);
    msg.setDestination(59774U);
    msg.setDestinationEntity(31U);
    msg.consumer.assign("IEKXKVWTYGTLMFZJIEGFQMGZZPTLHUPCQGOSOSXUDGSWDKRXASNRSPVDENAEJPDQGYHKZUITKSTBPUUGT");
    msg.message_id = 54053U;

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
    msg.setTimeStamp(0.68555094919);
    msg.setSource(26495U);
    msg.setSourceEntity(127U);
    msg.setDestination(32713U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.817972599119);
    msg.setSource(18382U);
    msg.setSourceEntity(91U);
    msg.setDestination(43205U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.3880309462);
    msg.setSource(59689U);
    msg.setSourceEntity(75U);
    msg.setDestination(25534U);
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
    msg.setTimeStamp(0.507389023734);
    msg.setSource(28962U);
    msg.setSourceEntity(38U);
    msg.setDestination(61288U);
    msg.setDestinationEntity(119U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.451405933337);
    msg.setSource(37709U);
    msg.setSourceEntity(236U);
    msg.setDestination(47361U);
    msg.setDestinationEntity(77U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.564207835989);
    msg.setSource(12364U);
    msg.setSourceEntity(1U);
    msg.setDestination(45108U);
    msg.setDestinationEntity(83U);
    msg.op = 202U;

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
    msg.setTimeStamp(0.471454410323);
    msg.setSource(46562U);
    msg.setSourceEntity(140U);
    msg.setDestination(47497U);
    msg.setDestinationEntity(78U);
    msg.total_steps = 66U;
    msg.step_number = 86U;
    msg.step.assign("DQHUEVIOMWBSPEMFAVCVJTJCYIQSYUOXYDHIQAOYWBIWDQPWCUSMPMYLZFXIHYNJTUFSRGKXPGEFBLQHUHXDCJHHDNMPKLP");
    msg.flags = 18U;

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
    msg.setTimeStamp(0.182901304749);
    msg.setSource(48944U);
    msg.setSourceEntity(62U);
    msg.setDestination(32978U);
    msg.setDestinationEntity(116U);
    msg.total_steps = 248U;
    msg.step_number = 188U;
    msg.step.assign("BDZSKHQRXJPBUODVSNVRDMFKYILGEZCBRTDKZAPGNTIIOBSLNQPLXLMBZFHFBLEDGJWOOZWTNHGXEMXBEREAYYLEDKJMQXBKWAEANKQQPCZFAVYOGVSUWLTIGTEUSPCNHJJFNMMCNUVDWVFXZHXQYULRNFDPXQPKEOYTBOIGJIGOSILWRCHEJVIJGONKPYDRYCXUQYSHZFTWCJVSMVATHJFCHDUISMYLZZRURKTHXAPRCKFAWUO");
    msg.flags = 205U;

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
    msg.setTimeStamp(0.851115874336);
    msg.setSource(31776U);
    msg.setSourceEntity(223U);
    msg.setDestination(3231U);
    msg.setDestinationEntity(5U);
    msg.total_steps = 129U;
    msg.step_number = 225U;
    msg.step.assign("LREHSPGBEELSKDYCHDLHIGGIWUANMFR");
    msg.flags = 102U;

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
    msg.setTimeStamp(0.00303101076545);
    msg.setSource(20410U);
    msg.setSourceEntity(140U);
    msg.setDestination(46541U);
    msg.setDestinationEntity(140U);
    msg.state = 216U;
    msg.error.assign("SEHRSSPDPMVRCIJLFBCBPAHXPJUFSMIWWZPHCRSHMTFTXBIWLNOWMWROXVBZ");

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
    msg.setTimeStamp(0.120177588482);
    msg.setSource(23463U);
    msg.setSourceEntity(44U);
    msg.setDestination(3657U);
    msg.setDestinationEntity(14U);
    msg.state = 248U;
    msg.error.assign("TSSZAJUYIJCDKHLVUOONTBXYRYPMBEKVQCADRNXAGRMFYHQMZPAFTKIXPQKGZSAJEQOGCFARMWNJIHTZVVRLDOSEOERPXYXPFADPMINRQVPBOFRPLUZQOUUPCBACFGFIGZEUARGCZSFJSJZOVHNJMSDILKCEIQIWVTTVHWKMRWXDCBSHKBGAMYECNVWSTXNXGPYJLYDJJHTGWOFGNLEBUNBYTY");

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
    msg.setTimeStamp(0.756455875616);
    msg.setSource(37507U);
    msg.setSourceEntity(254U);
    msg.setDestination(44771U);
    msg.setDestinationEntity(79U);
    msg.state = 207U;
    msg.error.assign("EJHKHIQMPOHWQQDGQOSCGUWRHBPECSMRZFDXKKVFIIVZLMPIRYABCSUABOCCHYSKDHHZGXLTVPXNTLAWRZSDGFLNJRDMPJOQFMFOABFUPHOW");

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
    msg.setTimeStamp(0.354896886047);
    msg.setSource(26230U);
    msg.setSourceEntity(127U);
    msg.setDestination(24786U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.49261020724);
    msg.setSource(64581U);
    msg.setSourceEntity(190U);
    msg.setDestination(60438U);
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
    msg.setTimeStamp(0.532642475861);
    msg.setSource(29788U);
    msg.setSourceEntity(6U);
    msg.setDestination(62786U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.0543036948599);
    msg.setSource(5224U);
    msg.setSourceEntity(150U);
    msg.setDestination(37879U);
    msg.setDestinationEntity(130U);
    msg.op = 14U;
    msg.speed_min = 0.980311396833;
    msg.speed_max = 0.658328772203;
    msg.long_accel = 0.211406082573;
    msg.alt_max_msl = 0.129983766495;
    msg.dive_fraction_max = 0.792570169828;
    msg.climb_fraction_max = 0.871244209901;
    msg.bank_max = 0.0934005057011;
    msg.p_max = 0.934881357193;
    msg.pitch_min = 0.0160542947578;
    msg.pitch_max = 0.279507103419;
    msg.q_max = 0.520497886683;
    msg.g_min = 0.563543748749;
    msg.g_max = 0.259762152949;
    msg.g_lat_max = 0.497169913956;
    msg.rpm_min = 0.977783207874;
    msg.rpm_max = 0.839202479772;
    msg.rpm_rate_max = 0.55525753107;

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
    msg.setTimeStamp(0.0207299012759);
    msg.setSource(50694U);
    msg.setSourceEntity(18U);
    msg.setDestination(9416U);
    msg.setDestinationEntity(237U);
    msg.op = 80U;
    msg.speed_min = 0.793891943713;
    msg.speed_max = 0.112324210132;
    msg.long_accel = 0.152126008638;
    msg.alt_max_msl = 0.777156061181;
    msg.dive_fraction_max = 0.920475011961;
    msg.climb_fraction_max = 0.0699563304138;
    msg.bank_max = 0.274980754669;
    msg.p_max = 0.50596010681;
    msg.pitch_min = 0.776088998763;
    msg.pitch_max = 0.389765790891;
    msg.q_max = 0.35003789707;
    msg.g_min = 0.352067493933;
    msg.g_max = 0.126446017987;
    msg.g_lat_max = 0.586714100137;
    msg.rpm_min = 0.982783066553;
    msg.rpm_max = 0.707207816781;
    msg.rpm_rate_max = 0.171669384286;

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
    msg.setTimeStamp(0.624718253846);
    msg.setSource(64837U);
    msg.setSourceEntity(163U);
    msg.setDestination(63437U);
    msg.setDestinationEntity(20U);
    msg.op = 242U;
    msg.speed_min = 0.752193212154;
    msg.speed_max = 0.750494204203;
    msg.long_accel = 0.780357887557;
    msg.alt_max_msl = 0.977891730704;
    msg.dive_fraction_max = 0.860680654932;
    msg.climb_fraction_max = 0.0788309956566;
    msg.bank_max = 0.803428848113;
    msg.p_max = 0.0984078087302;
    msg.pitch_min = 0.45091625493;
    msg.pitch_max = 0.917940263037;
    msg.q_max = 0.950043573586;
    msg.g_min = 0.348534441906;
    msg.g_max = 0.0857708670121;
    msg.g_lat_max = 0.281610233295;
    msg.rpm_min = 0.757488799393;
    msg.rpm_max = 0.654706353508;
    msg.rpm_rate_max = 0.249452831225;

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
    msg.setTimeStamp(0.638213066253);
    msg.setSource(52154U);
    msg.setSourceEntity(38U);
    msg.setDestination(7509U);
    msg.setDestinationEntity(224U);
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.812092630284;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.152908617436);
    msg.setSource(33316U);
    msg.setSourceEntity(74U);
    msg.setDestination(53037U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.0313680845005);
    msg.setSource(50436U);
    msg.setSourceEntity(236U);
    msg.setDestination(49867U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.0498882393697);
    msg.setSource(15840U);
    msg.setSourceEntity(150U);
    msg.setDestination(48465U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.793501361818;
    msg.lon = 0.752623109582;
    msg.height = 0.128955438287;
    msg.x = 0.25675796617;
    msg.y = 0.552796170347;
    msg.z = 0.576325343662;
    msg.phi = 0.534213257815;
    msg.theta = 0.0227217416003;
    msg.psi = 0.38416904843;
    msg.u = 0.146495323891;
    msg.v = 0.0755899473971;
    msg.w = 0.253014338049;
    msg.p = 0.247593830291;
    msg.q = 0.929354051098;
    msg.r = 0.787621102258;
    msg.svx = 0.190400185636;
    msg.svy = 0.419149890115;
    msg.svz = 0.0216781669607;

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
    msg.setTimeStamp(0.880691471699);
    msg.setSource(48565U);
    msg.setSourceEntity(0U);
    msg.setDestination(17723U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.417218493882;
    msg.lon = 0.112403155203;
    msg.height = 0.793497241058;
    msg.x = 0.890189300175;
    msg.y = 0.811201519307;
    msg.z = 0.848262075045;
    msg.phi = 0.221305086686;
    msg.theta = 0.167696187917;
    msg.psi = 0.102435557939;
    msg.u = 0.702736497935;
    msg.v = 0.975783241419;
    msg.w = 0.801658274108;
    msg.p = 0.364515706468;
    msg.q = 0.807697010362;
    msg.r = 0.478913142246;
    msg.svx = 0.211152724688;
    msg.svy = 0.614545006008;
    msg.svz = 0.548650933942;

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
    msg.setTimeStamp(0.291414445683);
    msg.setSource(60594U);
    msg.setSourceEntity(133U);
    msg.setDestination(43881U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.140509832323;
    msg.lon = 0.240445391094;
    msg.height = 0.567200893447;
    msg.x = 0.944272774354;
    msg.y = 0.0445779379189;
    msg.z = 0.995406177996;
    msg.phi = 0.54321929818;
    msg.theta = 0.136499623006;
    msg.psi = 0.980619138671;
    msg.u = 0.277801752843;
    msg.v = 0.846277634722;
    msg.w = 0.486683724086;
    msg.p = 0.307413021685;
    msg.q = 0.33376141725;
    msg.r = 0.324969251484;
    msg.svx = 0.371547391299;
    msg.svy = 0.855069157835;
    msg.svz = 0.972969520505;

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
    msg.setTimeStamp(0.385379765761);
    msg.setSource(40226U);
    msg.setSourceEntity(124U);
    msg.setDestination(34776U);
    msg.setDestinationEntity(137U);
    msg.op = 210U;
    msg.entities.assign("TEPJMQGEPGWJJAMHYSTUWOCBVQRYXLBRDDWNIGKPKSIKOVXGIRLOYPNYYWCZBJNVJGZCCEDJQURSMGIMYRWFUIEWHPAQAKZNSMIIBBSCFVXVXKKNLHMOTWDVHEBQJBWZUOTCXZVFUM");

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
    msg.setTimeStamp(0.64904375);
    msg.setSource(31119U);
    msg.setSourceEntity(136U);
    msg.setDestination(27394U);
    msg.setDestinationEntity(82U);
    msg.op = 230U;
    msg.entities.assign("XITCRZBRONABGVWHZJALEDRENJFAFEHBTUIAQFFUVDXLNQAZEKCFPFMVYFCFPSNQGDCXBAPQDYPTUCJPGUMOSEZREKPWLEKGBIZJRRHIOMTKHQMRLWTXVNICLHVAGKJJZFSRNMZWOLOMTGSGWHSCOYPNYDTSVMQWFOWKIQZCXGVDVTBUTGKHWDDUEUNXQOSLBA");

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
    msg.setTimeStamp(0.069718136853);
    msg.setSource(64182U);
    msg.setSourceEntity(148U);
    msg.setDestination(59208U);
    msg.setDestinationEntity(242U);
    msg.op = 168U;
    msg.entities.assign("FHGMBIJOTFVLWJQUETAKHNFITQBIWNJQPWIHPDPWNKHUDIGZLWHFMWLYXJKMKMMDKQVMWIEEXENMXOKKCDZSXOBPNUUNFPILZXVKXEMKEMBLDRCBTJODRGCZFQCBGVABZRISHOO");

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
    msg.setTimeStamp(0.0800368394173);
    msg.setSource(34242U);
    msg.setSourceEntity(177U);
    msg.setDestination(52988U);
    msg.setDestinationEntity(95U);
    msg.type = 213U;
    msg.speed = 19578U;
    const char tmp_msg_0[] = {-4, -116, 13, 25, -124, 42, 82, 70, -100, -78, -127, 69, 87, -106, -126, -111, -114, -46, -80, 80, 21, 98, 108, 56, 124, 84, 87, 46, 78, -23, 0, 97, -102, 69, -102, 118, 18, 2, 8, -72, -126, -81, -7, -36, 19, -45, 14, 73, -45, 96, 50, -81, 88, -66, -56, 20, -2, -21, 32, -52, 44, 21, -23, 31, 58, -26, 21, 95, 31, 76, -41, 76, 82, 41, 17, 33, -15, 114, -45, -80, -57, -97, -68, -118, 105, -50, -50, 48, 104, -47, -27, 5, -83, -117, -78, 22, -23, 68, -46, -24, 24, -55, 50, 116, -111, 19, 102, 74, 70, 96, 86, -19, -75, 52, -78, -32, -8, 4, 34, 74, 83, -34, -55, 34, 95, 81, -118, 43, 32, -102, -14, -11, -116, -92, 112, -30, 35, 80, 38, -110, -41, -31, 23, -67, -107, -2, 40, -94, 61, -46, 83, -37, -56, -6, -92, -49, -99, -93, 85, -94, 32, -5, 3, -11, 65};
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
    msg.setTimeStamp(0.690198945421);
    msg.setSource(52659U);
    msg.setSourceEntity(0U);
    msg.setDestination(57134U);
    msg.setDestinationEntity(43U);
    msg.type = 31U;
    msg.speed = 9169U;
    const char tmp_msg_0[] = {50, 42, -86, -99, 98, 17, 23, -100, -20, 28, -127, -5, 19, 35, -89, 5, 76, 110, 118, 58, -49, 48, 65, -94, -61, 4, -63, -64, -61, -81, -97, -39, 6, 75, 115, 74, -32, -94, 16, 75, -125, 16, -103, 108, 60, 81, 109, 39, 28, -119, -119, -87, 64, 96, -128, 112, 122, 58, 84, -90, -32, -87, -7, -27, 108, -41, -118, 17, 39, 26, -118, 111, -110, 54, 16, -19, -26, 104, -81, 30, 33, -113, 26, 101, -17, 121, -68, -45, -81, -103, -22, -116, -37, -122, 125, 117, -89, -98, -117, -27, -121, 84, 20, -117, 39, 84, -81, 14, 113, -6, -80, -33, 64, 43, -12, -53, -18, -81, 45, 70, -89, 121, 124, -83, -36, 66, -109, 5, -29, 90, -123, -111, -36, -100, 0, -124, -63, 126, 102, -54, -100, 74, 125, 99, 22, -6, -13, -14, -84, -35, 56, 85, 9, 39, 8, -4, -114, 13, 126, -71, -37, 44, -31, 112, -92, -44, 96, 85, -73, -6, 125, -80, -50, -77, 107, -2, 72, 22, -30, 52, -102, -69, -116, 24, -30, 23, -68, -26, -14, 122, -49, 75, -90, 0, 13, 86, -49, 30, -7, -67, -90, 94, 1, 106, -10, 97, 62, 79, -65, -32, -26, -54, 62, -93, 62, -75, -89, 22, 92, -111, 44, -119, 64, 43, 24, 48, -127, 50, 48, 81, -21, -124, 89, 39, -28, -88, 39, -1, -9, -106, -22, -13, -69, 119, -80, 34, -45, 43, 96, 15, 102, -107, -3};
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
    msg.setTimeStamp(0.849181899662);
    msg.setSource(29025U);
    msg.setSourceEntity(190U);
    msg.setDestination(49181U);
    msg.setDestinationEntity(51U);
    msg.type = 86U;
    msg.speed = 43353U;
    const char tmp_msg_0[] = {60, -115, 45, -6, 30, -42, 59, 49, -12, 12, 88, -67, -60, 15, -117, 20, -100, -9, 2, -17, -7, 49, -8, 27, -73, 5, 115, 114, -79, 56, -58, -123, 85, 10, -88, -25, -117, -75, -16, 45, 38, 79, 118, -117, 120, -126, -85, -67, 61, 59, 22, -4, 37, -125, -78, 125, 6, 117, 122, -1, 27, 29, 18, 14, -107, -119, -60, -120, -32, 78, -50, -19, -46, -64, -21, -47, -40, 79, -18, -50, -116, -119, -92};
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
    msg.setTimeStamp(0.540160668459);
    msg.setSource(45519U);
    msg.setSourceEntity(51U);
    msg.setDestination(4996U);
    msg.setDestinationEntity(97U);
    msg.op = 210U;
    msg.tas2acc_pgain = 0.898605104239;
    msg.bank2p_pgain = 0.94424430593;

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
    msg.setTimeStamp(0.173362720686);
    msg.setSource(11555U);
    msg.setSourceEntity(6U);
    msg.setDestination(57039U);
    msg.setDestinationEntity(79U);
    msg.op = 222U;
    msg.tas2acc_pgain = 0.00457165301822;
    msg.bank2p_pgain = 0.886158674256;

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
    msg.setTimeStamp(0.00875367985324);
    msg.setSource(46739U);
    msg.setSourceEntity(65U);
    msg.setDestination(12785U);
    msg.setDestinationEntity(76U);
    msg.op = 55U;
    msg.tas2acc_pgain = 0.5287243787;
    msg.bank2p_pgain = 0.360084663021;

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
    msg.setTimeStamp(0.775534847747);
    msg.setSource(15438U);
    msg.setSourceEntity(69U);
    msg.setDestination(28838U);
    msg.setDestinationEntity(248U);
    msg.available = 293327230U;
    msg.value = 218U;

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
    msg.setTimeStamp(0.795304254126);
    msg.setSource(42741U);
    msg.setSourceEntity(168U);
    msg.setDestination(50724U);
    msg.setDestinationEntity(189U);
    msg.available = 3892476893U;
    msg.value = 251U;

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
    msg.setTimeStamp(0.0290505862808);
    msg.setSource(60908U);
    msg.setSourceEntity(167U);
    msg.setDestination(54902U);
    msg.setDestinationEntity(60U);
    msg.available = 1442925674U;
    msg.value = 144U;

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
    msg.setTimeStamp(0.955227273132);
    msg.setSource(46713U);
    msg.setSourceEntity(47U);
    msg.setDestination(19202U);
    msg.setDestinationEntity(0U);
    msg.op = 44U;
    msg.snapshot.assign("TELJQQKQAUKJXGGIZVDRWEWYKTGOXRQPCASFWPIZNNBUSZHIWOTQCCYVTMEWIAMOCSXJIMCLOPLHJNGLEGDUZXRNFBMLZBVOLHSVLOFXAKXTRSURJYYCAYXJUJBTZCMYEMRVHBGLHNB");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 54U;
    tmp_msg_0.step_number = 67U;
    tmp_msg_0.step.assign("LEPYUBUSSGBTYSNJRKMBEKSJLJQWXWCQFGADMEDFNLLZGHRXMNAGZDCWUBIFKZTRCGGTLHUOWFLUOOQWFRJXHVAAXONIVHWJGZKXBTPVYVNHWVEB");
    tmp_msg_0.flags = 56U;
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
    msg.setTimeStamp(0.943742336849);
    msg.setSource(13804U);
    msg.setSourceEntity(119U);
    msg.setDestination(40215U);
    msg.setDestinationEntity(211U);
    msg.op = 191U;
    msg.snapshot.assign("OPDTCQBLRKSXMOAMYEDWMSEZPXFZIYMBUCJZFDCJYHMKFHPAFCMIQJVHBSFTHGEBLQZWPLFWFLFXSISSVDCEUDVXZMCJRWIVSIHNGQKPNADCYNHXKNLREOIVAEEIOCJZBMYTBSROKXKHBXPUBOMPKXNTOURUZPRXWWURAZAVEJGKQYJVOCTHLIKNYOGWRLNGLGVITWUNLNCTUTFFYU");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.485423311305;
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
    msg.setTimeStamp(0.3360639927);
    msg.setSource(30666U);
    msg.setSourceEntity(88U);
    msg.setDestination(24922U);
    msg.setDestinationEntity(115U);
    msg.op = 251U;
    msg.snapshot.assign("YLVBAIOHTCASYILZEJBHGLUKPYXQFGEKTZFGBMXASK");
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.427963028115;
    tmp_msg_0.v = 0.18333446384;
    tmp_msg_0.w = 0.212775901942;
    tmp_msg_0.p = 0.613123874979;
    tmp_msg_0.q = 0.757069500697;
    tmp_msg_0.r = 0.898001029707;
    tmp_msg_0.flags = 30U;
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
    msg.setTimeStamp(0.0128048271704);
    msg.setSource(7241U);
    msg.setSourceEntity(143U);
    msg.setDestination(53780U);
    msg.setDestinationEntity(253U);
    msg.op = 7U;
    msg.name.assign("DZYKWBWMGJPNCUPIXYBUHSGVEUPYMTWBMIQLMGADTVFJHSOYEDABFEOSGKIHPKRRBQVKTRLGXOODMPOTAZOAOLJFAKCTLQWKVSAPFGQTPQCUVNNCJGPCHJDUJMCSMRTALQEKIHKUTBWVRDIYRRYDVZFEIFMCNYQRLXFWIOCBQJABFEHIHYZEXLHILEDZUXVZJXHTUZOFRZAQXEPAZRGVSUTSCNNNYNOGYSSGNNXQW");

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
    msg.setTimeStamp(0.556965314412);
    msg.setSource(7934U);
    msg.setSourceEntity(213U);
    msg.setDestination(5312U);
    msg.setDestinationEntity(70U);
    msg.op = 16U;
    msg.name.assign("WCADFGABSTQYZZSFXJMHLDEJMPBGNLJPWXWEJPYNNEMDHKHTFHYVPBPMHKFFRQBUNNQVG");

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
    msg.setTimeStamp(0.616938048213);
    msg.setSource(57341U);
    msg.setSourceEntity(0U);
    msg.setDestination(34446U);
    msg.setDestinationEntity(219U);
    msg.op = 204U;
    msg.name.assign("EYXOTOBKBVNJRQMLKYSZZDMRAIBWFTCLBQGHLIRFJXMUCKQWRAFOREZVAQMLOUJOUZIWTBBPPJCMYAYXVYJUYSCGQTAC");

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
    msg.setTimeStamp(0.582262864189);
    msg.setSource(61855U);
    msg.setSourceEntity(103U);
    msg.setDestination(15365U);
    msg.setDestinationEntity(105U);
    msg.type = 141U;
    msg.htime = 0.583587106737;
    msg.context.assign("EDXWHTLXVPIUDEWKPNXINAGYCAYLOOUCBMTAAEMRMWTVWKWRAOEURWWCKZCTDJIUNLXATSUKTIDFQMXPIDLJQLQAOOHSVPQHDHSQTTIJBDLRIZHRHUFRBNSIDCNBMUGJXGZPIDBBHKJFVWZKYJFZHNQGGPCYHANBFCVGFBJEYVCVFZQFAZZTESVQYQSPVFUNLLGHJO");
    msg.text.assign("ZPEUVSNJQQLHBXGOBJTWNARTBPAQDPCMVCFRIXLJOTVEMKOLANJKCRLMKKLCZFEPBYGSOHYPYIRLIIBDPHFAVYMGJZSQIATFJTNCFPYWDRQPDSUDCZATADVXHIQNONTEWUOPUSCRLCSEMWZHQWBRMCUFCWFHKXYGUGXSI");

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
    msg.setTimeStamp(0.915218686384);
    msg.setSource(36026U);
    msg.setSourceEntity(104U);
    msg.setDestination(3655U);
    msg.setDestinationEntity(25U);
    msg.type = 32U;
    msg.htime = 0.218888139889;
    msg.context.assign("VZMCWONLSEVPGTNSCUOKKBBJMUJOJNMJESLDZWFRJLVIAKDITMGCDYAEIWRKGYHPKRAJAVDKOFVYBWYFDXYMZSINJGQLUQPMLCVGMPXAGLHEXATTQRY");
    msg.text.assign("UVHCHJDCVYRKGYMCBO");

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
    msg.setTimeStamp(0.340273828957);
    msg.setSource(17142U);
    msg.setSourceEntity(16U);
    msg.setDestination(63708U);
    msg.setDestinationEntity(24U);
    msg.type = 218U;
    msg.htime = 0.151521960377;
    msg.context.assign("AVDEAVUMNISBAZOLISNYDKSNWQCQXFPAYMSXSZSBDIBTZWLVVPJUGANBVYRRLAKEQXLPWRPHGUHXLKFDTKYDEEOACHPXKMCUZYJQHZWVCBJBPXZEESUDCIMFRPFUYVLWDUGEMRFMXMKQVBXQRG");
    msg.text.assign("JUQRIORZELPUFZURYKWNCATHUOTKOXRIOTWBTKBMPNVCGYSWSBDVZFQGTAVZANDKJOQENVXXHGRJMHHGQVGEIDORNZGHFQJACDCIATVLPLWHZLYLYTDICUOBQPFHGMMJQPKGBNBWMVBBECVOJMMSRTFFWDCCPCKJMABBNSAO");

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
    msg.setTimeStamp(0.546643192963);
    msg.setSource(14982U);
    msg.setSourceEntity(56U);
    msg.setDestination(48660U);
    msg.setDestinationEntity(154U);
    msg.command = 194U;
    msg.htime = 0.964571441265;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 209U;
    tmp_msg_0.htime = 0.935983261128;
    tmp_msg_0.context.assign("PKCNRVEYNFRXHXBAFKSJOTYGUDJZJHOEIDNQORXNBZMZMYUPMLTQLMBZWBBTZDCLOZXKUFLFWAYGUVJIEJDALBTEWIEXQGSQ");
    tmp_msg_0.text.assign("IHHINSZDCSMAPGEFKGXKSBVFWRHKXZYZVGLOIJWZAKSWLYJBCITWOQAJCEYCTVCVFRCIMPYFXFRZN");
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
    msg.setTimeStamp(0.510652225654);
    msg.setSource(49653U);
    msg.setSourceEntity(161U);
    msg.setDestination(7473U);
    msg.setDestinationEntity(72U);
    msg.command = 25U;
    msg.htime = 0.355478995351;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 122U;
    tmp_msg_0.htime = 0.792415233015;
    tmp_msg_0.context.assign("KNVFCRVSQAVBACGPOUQPGTLLEHJTDOLZCYEAIAOCSHEPQXMWRVYPRSVNJLKPGMJRKNRLXYKZ");
    tmp_msg_0.text.assign("PFNSSQTLETRXXFTWMEEKODEOPWSQDVXVVDXUBNIGOOLFIONXMKQFZSXAHFRKCZCSULBCHKIOOLZRCSUVPFJWWATJLGNEBBOYAZJAVCMJDUYKPIKNZKMMWKAINMAYYBGPNDYLPYAQVWGLJBRHMLNURRSHFGOSJFYDJFRVJDZOTYILYMEDGAGURZYEEUHZJBWRIDCXTPBIZSPXVZCQQHBBSAQHDVTQWIQGCCPNHWCLGMJFTPIKEMU");
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
    msg.setTimeStamp(0.0691798513984);
    msg.setSource(48066U);
    msg.setSourceEntity(118U);
    msg.setDestination(3943U);
    msg.setDestinationEntity(112U);
    msg.command = 218U;
    msg.htime = 0.984958437307;

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
    msg.setTimeStamp(0.212139338016);
    msg.setSource(17155U);
    msg.setSourceEntity(77U);
    msg.setDestination(33791U);
    msg.setDestinationEntity(146U);
    msg.op = 75U;
    msg.file.assign("LFXZAIPXRSJIYCICJHNGEZVSYRYMKPMIUCBXHPZVISXOCSYUDWAQAOURXPQFBTBMG");

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
    msg.setTimeStamp(0.687530749651);
    msg.setSource(55503U);
    msg.setSourceEntity(157U);
    msg.setDestination(32735U);
    msg.setDestinationEntity(162U);
    msg.op = 75U;
    msg.file.assign("DXWRPPOPZNEEJNUKCZJJVYJTBRBMVVYIOPMGRFTQSJNDOAUZKNRUYDASYJLECVZMGFNUFWDWGHPAXQSWCOWNEMEBLPJRAOAXSZKBCSMCSGJXIPCZFBHPVWKTOGNMIIWKFEMAYEIPHGJIJ");

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
    msg.setTimeStamp(0.115742689034);
    msg.setSource(22888U);
    msg.setSourceEntity(99U);
    msg.setDestination(22961U);
    msg.setDestinationEntity(223U);
    msg.op = 104U;
    msg.file.assign("UQFFUNIEKXKWOMOIKMCQTICFWBVHEJAMAQQPX");

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
    msg.setTimeStamp(0.00157707025756);
    msg.setSource(22977U);
    msg.setSourceEntity(147U);
    msg.setDestination(8335U);
    msg.setDestinationEntity(232U);
    msg.op = 91U;
    msg.clock = 0.954711687357;
    msg.tz = -47;

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
    msg.setTimeStamp(0.781806326818);
    msg.setSource(30445U);
    msg.setSourceEntity(254U);
    msg.setDestination(51714U);
    msg.setDestinationEntity(147U);
    msg.op = 140U;
    msg.clock = 0.389704977592;
    msg.tz = 126;

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
    msg.setTimeStamp(0.563164356315);
    msg.setSource(5526U);
    msg.setSourceEntity(29U);
    msg.setDestination(28647U);
    msg.setDestinationEntity(98U);
    msg.op = 245U;
    msg.clock = 0.789494395963;
    msg.tz = 35;

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
    msg.setTimeStamp(0.743466673001);
    msg.setSource(47459U);
    msg.setSourceEntity(40U);
    msg.setDestination(34831U);
    msg.setDestinationEntity(150U);
    msg.conductivity = 0.118958880113;
    msg.temperature = 0.588566140341;
    msg.depth = 0.728100518365;

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
    msg.setTimeStamp(0.747251468721);
    msg.setSource(22221U);
    msg.setSourceEntity(82U);
    msg.setDestination(1540U);
    msg.setDestinationEntity(71U);
    msg.conductivity = 0.295538409731;
    msg.temperature = 0.0194155770199;
    msg.depth = 0.134642684402;

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
    msg.setTimeStamp(0.761187701246);
    msg.setSource(27013U);
    msg.setSourceEntity(192U);
    msg.setDestination(29890U);
    msg.setDestinationEntity(248U);
    msg.conductivity = 0.984021780021;
    msg.temperature = 0.054649231895;
    msg.depth = 0.805179377934;

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
    msg.setTimeStamp(0.660758139454);
    msg.setSource(57919U);
    msg.setSourceEntity(2U);
    msg.setDestination(39000U);
    msg.setDestinationEntity(181U);
    msg.altitude = 0.0838715991411;
    msg.roll = 38489U;
    msg.pitch = 27904U;
    msg.yaw = 43716U;
    msg.speed = 30697;

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
    msg.setTimeStamp(0.757343683913);
    msg.setSource(15875U);
    msg.setSourceEntity(248U);
    msg.setDestination(43319U);
    msg.setDestinationEntity(243U);
    msg.altitude = 0.272454763951;
    msg.roll = 39617U;
    msg.pitch = 42353U;
    msg.yaw = 61916U;
    msg.speed = 28937;

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
    msg.setTimeStamp(0.70663278339);
    msg.setSource(13650U);
    msg.setSourceEntity(211U);
    msg.setDestination(50599U);
    msg.setDestinationEntity(26U);
    msg.altitude = 0.390144902607;
    msg.roll = 1788U;
    msg.pitch = 38965U;
    msg.yaw = 61436U;
    msg.speed = -12377;

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
    msg.setTimeStamp(0.288036910481);
    msg.setSource(37944U);
    msg.setSourceEntity(19U);
    msg.setDestination(58669U);
    msg.setDestinationEntity(194U);
    msg.altitude = 0.539404692982;
    msg.width = 0.209637223424;
    msg.length = 0.702954974762;
    msg.bearing = 0.0600722966615;
    msg.pxl = -20285;
    msg.encoding = 191U;
    const char tmp_msg_0[] = {32, -103, 45, -45, 107, -55, 53, 61, -48, -13, -72, -76, -29, 13, -45, -115, -39, -116, -32, -65, -101, 104, 71, 126, 100, -13, 47, -47, 3, 32, 113, 108, 103, 8, 85, 73, -99, 18, -89, 3, -128, -48, 31, -19, -96, 69, -87, 120, -19, 49, -116, -72, -124, 62, -64, -92, 85, 77, -12, -114, 15, 22, 111, -25, -48, -20, 76, 75, -22, 15, -52, -123, 101, -7, -119, 117, 88, 53, 26, 124, 20, 65, 11, 96, 15, -41, 98, 1, 34, -104, 69, 104, 103, -52, -115, 88};
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
    msg.setTimeStamp(0.519576842895);
    msg.setSource(64493U);
    msg.setSourceEntity(63U);
    msg.setDestination(18262U);
    msg.setDestinationEntity(190U);
    msg.altitude = 0.224256288545;
    msg.width = 0.77318187177;
    msg.length = 0.00672875823589;
    msg.bearing = 0.307693102267;
    msg.pxl = -10071;
    msg.encoding = 104U;
    const char tmp_msg_0[] = {24, 70, 1, -61, -13, 40, 2, 33, 3, -57, 9, -111, 4, -55, -96, -109, 65, -29, -45, 17, 43, 81, -11, -107, 31, 26, 62, -8, 115, 75, -81, 35, 50, -101, 23, -110, 20, 3, 2, -55, -68, -88, -48, 69, 20, 99, 51, -87, -23, 0, -81, -54, -100, 41, 15, -5, -82, 47, 106, -107, -14, -28, -76, -102, 98, 120, 65, -101, -30, -64, 2, 34, -16, -60, -22, 96, 98, -113, -123, 76, -124, 16, -30, 22, -17, 119, -43, 98, 69, -2, 91, 74, -84, -46, -36, 107, -58, -126, -71, 37, -101, 10, -53, -64, 31, 56, -80, -71, -70, 107, -75, 5, 70, 31, -101, 8, 119, -47, 48, -86, 56, 62, -119, -45, 29, 64, -23, -110, 49, -2, 68, -9, 112, -48, 103, 92, -30, 42, -81, -7, -32, 67, -86, 19, 99, -8, 60, 17, 56, -97, -42, -52, 61, 32, 102, 56, -109, -57, -16, 14, -48, -93, -62, -86, 68, 63, -93, -59, 17, 114, -1, -61, 2, 17, 98, 86, -88, -41, 30, 0, -46, -28, 29, -43, 106, -100, -6, 102, 119, -59, 19, 51, -43, -101, -123, 114, 62, -91, -45, 85, 16, 100, 45, 113, -62, -5, -35, -126, -119, -125, 120, -103, -100, -21, 82, -46, -52, -73, 36, -70, 103, 120, -81, 79, 116, -97, 80, -66, 5, 94, -113, 23, -81, -20, -98, 54, 63, -112, 24, 76, 86, 53, 58, -65, -33, 68, 42, -26, 27, 2, 79, 24, -15};
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
    msg.setTimeStamp(0.754992255167);
    msg.setSource(64458U);
    msg.setSourceEntity(4U);
    msg.setDestination(26069U);
    msg.setDestinationEntity(253U);
    msg.altitude = 0.465675241664;
    msg.width = 0.495085779983;
    msg.length = 0.742581717086;
    msg.bearing = 0.488629610551;
    msg.pxl = 843;
    msg.encoding = 135U;
    const char tmp_msg_0[] = {-116, -18, 38, -64, 74, 35, 93, 76, -27, 26, -126, 104, 117, 36, -33, 82, 96, -70, -48, -104, -74, -116, -93, -39, 43, 40, 45, -87, 104, 84, 64, 7, -54, 27, -94, 107, -89, 26, -19, 27, 61, 27, -6, 93, 48, -53, 45, -14, -58, 40, 45, 110, 38, -39, 117, -10, -107, 123, -4, 36, 22, 30, 99, -73, 44, -4, 119, 5, -62, 96, 33, -116, -54, -3, -57, -4, -48, -54, 50, -76, 75, -108, 19, -26, 30, 56, 48, -50, 66, -19, 12, -14, 26, 101, 17, -102, -43, -21, -64, 96, 63, 87, -59, 67, -5, 69, 12, 28, -103, -117, 28, 12, -66, -97, -102, 112, -97, 34, 34, -84, -87, 86, -59, 113, 96, 62, 15, -113, 26, 17, 52, -63, 21, -76, -45, 51, -54, 2, -36, -90, -100, -128, 66, 78, 69, -25, 43, -99, -96, -76, -40, -45, 34, 6, 96, 52, 83, -101, -37, 59, 118, 113, 50, 60, -17, 109, 55, -80, -87, 119, -83, 68, -11, -119, -84, 72, -57, 90, -99, 44, 125, -96, -22, 103, -17, -39, -100, 58, 53, 66, -126, -122, -118, 71, 43, -29, 124, 89, -5, 126, 125, -74, -89, 68, 65, 119, 80, -47, -102, 50, -64, 75, -70, -12, 59, -108, -37, 124, 61, -84, 33, -40, -111, -124, -14};
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
    msg.setTimeStamp(0.782342961864);
    msg.setSource(42392U);
    msg.setSourceEntity(248U);
    msg.setDestination(10347U);
    msg.setDestinationEntity(238U);
    msg.text.assign("IWTTLTXICDRVSUDCKFCJADNXAZLSSEFKHSYYMZBRAYRUWNGGCMJTZOYBKUELFORIVCWDNMNNQGURASEWYGOPCIIQPABMUJQQNCJCLRTNRENJQYLSSOVTHYPWVHZKNWHVIDXXMPKXXDTHXMQWPOSBPGIEOELJIMIVFAHFOZKPQZULEGZOROHRLHXHTFEDNWBUUWLZM");
    msg.type = 176U;

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
    msg.setTimeStamp(0.977221616426);
    msg.setSource(12958U);
    msg.setSourceEntity(214U);
    msg.setDestination(9999U);
    msg.setDestinationEntity(232U);
    msg.text.assign("TIAKSNXHOODDVBTEWAFEFXTBHZKUMTRUNMGGFEVGINCCKYJHLJZAPODPGQURMJLOLBUILZBREMYMFDKQAZZBQYGUBOJHLWQCIICZNFIMJXWP");
    msg.type = 50U;

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
    msg.setTimeStamp(0.739881136251);
    msg.setSource(13373U);
    msg.setSourceEntity(25U);
    msg.setDestination(10597U);
    msg.setDestinationEntity(130U);
    msg.text.assign("NKEXOQVQQSFLKPRCPEJVQIXUVZNVALUDWKEYACJTKPADRFDGKIIPXYNOMEWGIJFRKZZROSNMJXKLGFNBSZQPUUJZWIUPCYWALYJMHFGGXMJVPTWTJWHVTIYLOLNCUTSOXOOFCEQLTGTHDHAHSZDBCMUDUBZPYCQKQGMTRVKQECZBTHBBRMRYABWZSMYHFZIDWHPFFNI");
    msg.type = 114U;

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
    msg.setTimeStamp(0.287735155605);
    msg.setSource(59786U);
    msg.setSourceEntity(62U);
    msg.setDestination(27646U);
    msg.setDestinationEntity(38U);
    msg.parameter = 226U;
    msg.numsamples = 129U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 21895U;
    tmp_msg_0.avg = 0.0462140155727;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.14461237657;
    msg.lon = 0.1861894668;

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
    msg.setTimeStamp(0.506726283279);
    msg.setSource(32061U);
    msg.setSourceEntity(101U);
    msg.setDestination(63206U);
    msg.setDestinationEntity(57U);
    msg.parameter = 245U;
    msg.numsamples = 9U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 59931U;
    tmp_msg_0.avg = 0.555968961914;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.0386233442286;
    msg.lon = 0.573112829197;

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
    msg.setTimeStamp(0.274276463306);
    msg.setSource(8316U);
    msg.setSourceEntity(201U);
    msg.setDestination(55150U);
    msg.setDestinationEntity(167U);
    msg.parameter = 79U;
    msg.numsamples = 131U;
    msg.lat = 0.140904575146;
    msg.lon = 0.598457822249;

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
    msg.setTimeStamp(0.765939385665);
    msg.setSource(44748U);
    msg.setSourceEntity(14U);
    msg.setDestination(23554U);
    msg.setDestinationEntity(64U);
    msg.depth = 30797U;
    msg.avg = 0.603922553673;

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
    msg.setTimeStamp(0.165942304952);
    msg.setSource(23358U);
    msg.setSourceEntity(74U);
    msg.setDestination(18735U);
    msg.setDestinationEntity(201U);
    msg.depth = 50016U;
    msg.avg = 0.748035503401;

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
    msg.setTimeStamp(0.291786345217);
    msg.setSource(13222U);
    msg.setSourceEntity(226U);
    msg.setDestination(18365U);
    msg.setDestinationEntity(180U);
    msg.depth = 51101U;
    msg.avg = 0.542278534566;

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
    msg.setTimeStamp(0.855923251495);
    msg.setSource(21186U);
    msg.setSourceEntity(173U);
    msg.setDestination(43119U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.395339085369);
    msg.setSource(11468U);
    msg.setSourceEntity(232U);
    msg.setDestination(14993U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.702018263924);
    msg.setSource(57858U);
    msg.setSourceEntity(179U);
    msg.setDestination(44697U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.302044799546);
    msg.setSource(44661U);
    msg.setSourceEntity(0U);
    msg.setDestination(62951U);
    msg.setDestinationEntity(25U);
    msg.sys_name.assign("PXAOQICGUUNWIPEOFKVHFKWJN");
    msg.sys_type = 53U;
    msg.owner = 4437U;
    msg.lat = 0.482132588104;
    msg.lon = 0.212239258201;
    msg.height = 0.227987942992;
    msg.services.assign("NQWKXPVVSVTFXCAJEXDGFLMPVYQLCRXQWDXMVYHESLZKFELYCZAHRRDSZPTTRJSMJMICOKCKUBOOMCSNAJDGZELLAMOPDFJWPYDNQDZGSWKAGFPNQUHPYEUSHGBXZIOQXVJBUORFMWXEKTANATQ");

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
    msg.setTimeStamp(0.956849097168);
    msg.setSource(43259U);
    msg.setSourceEntity(55U);
    msg.setDestination(29192U);
    msg.setDestinationEntity(52U);
    msg.sys_name.assign("DDHGYWVPMCLHETDMKLIKMPVZNKHDNUOJYUPCXTDVFMGZNHHQZWEPPKIVJXCONLDETIFSKFQEKOWRURJCCQNXM");
    msg.sys_type = 103U;
    msg.owner = 57120U;
    msg.lat = 0.375378790166;
    msg.lon = 0.698471188833;
    msg.height = 0.543247503251;
    msg.services.assign("UPFMWXMHYXYIMABWFUSYQNHDHDSLTYGJJOTTWAZAPRHJ");

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
    msg.setTimeStamp(0.399964846127);
    msg.setSource(6478U);
    msg.setSourceEntity(78U);
    msg.setDestination(14622U);
    msg.setDestinationEntity(83U);
    msg.sys_name.assign("XACHJEQMABJPDLYPDPVQTBQEQZESDPMQFUFQFPWYAAQBVEUDTICRMVGGRYN");
    msg.sys_type = 177U;
    msg.owner = 4347U;
    msg.lat = 0.363676278422;
    msg.lon = 0.181721928197;
    msg.height = 0.148986122902;
    msg.services.assign("SDINLCWPYZZBRXGUEITQNJRPTTGRZRYRVMVKEMMLCHTRWSALJGHIQBACQIQUZSDMQCCEQTDUHNYPXTYRQLFZOKZEBVOSZAFXHIYVUXCEVWDHICPJWQHGSKMXWUMJRMBAFPIKFBMSSULEAIDXGCOBKPFSWORLYMNZNYHYOZUWUEEVOOHTKZXXPFYTHPEQLJLBXJGT");

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
    msg.setTimeStamp(0.773272506707);
    msg.setSource(9018U);
    msg.setSourceEntity(95U);
    msg.setDestination(52710U);
    msg.setDestinationEntity(200U);
    msg.service.assign("HNKEIWCCOYVFXMPYDBXWHJJYSEBSBSHLOSPYPKFGEUKNBTTRFHUFIKPDRMRMDQWECUUKTOVNJUCNQIMAOTOORIMDGUMJZVDYUCYIILXPDLBIOXIZRSHTRGGYJALFYGPFOTLJABUPPZQRVWAEZFXUEMCRTRHSRWZASHMCKBJNQTONYIZWVZALJCSVQXSBGVZQAWQKTBGXHMPWHLIGFEAGWVGQEAFLMDVLAP");
    msg.service_type = 137U;

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
    msg.setTimeStamp(0.769056477117);
    msg.setSource(28035U);
    msg.setSourceEntity(62U);
    msg.setDestination(21173U);
    msg.setDestinationEntity(70U);
    msg.service.assign("AFPOLSQNURAUFWLJSMUVOBW");
    msg.service_type = 237U;

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
    msg.setTimeStamp(0.184920679129);
    msg.setSource(38197U);
    msg.setSourceEntity(235U);
    msg.setDestination(8796U);
    msg.setDestinationEntity(140U);
    msg.service.assign("BACKFNUWCQNRLQVWFZXQXWNWGNHXYQSZQPNBUCWJIHTAXLMHQEAVMOUYOSYAHGERKJZQLMBLQUGPOKFVETPSPLMRUMFKGCRCJWABTHPDOOJRDDBSSBOHVYGPJWOOIFLSZKYVZUVQATHMXXBZZTAERYCZMXMLAEJVHCIPMKCKRWLHAXTKSOGFGTFUATNBGDJ");
    msg.service_type = 114U;

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
    msg.setTimeStamp(0.325682676929);
    msg.setSource(51909U);
    msg.setSourceEntity(78U);
    msg.setDestination(39417U);
    msg.setDestinationEntity(132U);
    msg.value = 0.709386921761;

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
    msg.setTimeStamp(0.463518478755);
    msg.setSource(28581U);
    msg.setSourceEntity(106U);
    msg.setDestination(29232U);
    msg.setDestinationEntity(92U);
    msg.value = 0.734730558314;

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
    msg.setTimeStamp(0.0401436523323);
    msg.setSource(35400U);
    msg.setSourceEntity(169U);
    msg.setDestination(15554U);
    msg.setDestinationEntity(113U);
    msg.value = 0.901795922868;

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
    msg.setTimeStamp(0.510792624485);
    msg.setSource(43744U);
    msg.setSourceEntity(13U);
    msg.setDestination(34134U);
    msg.setDestinationEntity(146U);
    msg.value = 0.294792667802;

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
    msg.setTimeStamp(0.10596089627);
    msg.setSource(29837U);
    msg.setSourceEntity(4U);
    msg.setDestination(41501U);
    msg.setDestinationEntity(235U);
    msg.value = 0.799983366979;

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
    msg.setTimeStamp(0.336495424404);
    msg.setSource(1476U);
    msg.setSourceEntity(26U);
    msg.setDestination(728U);
    msg.setDestinationEntity(169U);
    msg.value = 0.508934611503;

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
    msg.setTimeStamp(0.761826154265);
    msg.setSource(7575U);
    msg.setSourceEntity(191U);
    msg.setDestination(14914U);
    msg.setDestinationEntity(217U);
    msg.value = 0.852563784887;

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
    msg.setTimeStamp(0.693883137546);
    msg.setSource(14483U);
    msg.setSourceEntity(6U);
    msg.setDestination(58323U);
    msg.setDestinationEntity(95U);
    msg.value = 0.79538535364;

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
    msg.setTimeStamp(0.322266256016);
    msg.setSource(4878U);
    msg.setSourceEntity(7U);
    msg.setDestination(7790U);
    msg.setDestinationEntity(29U);
    msg.value = 0.912585201556;

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
    msg.setTimeStamp(0.50853562118);
    msg.setSource(61706U);
    msg.setSourceEntity(228U);
    msg.setDestination(16296U);
    msg.setDestinationEntity(3U);
    msg.number.assign("MNLJJTPKUXUSLAOJYDVTZYGLNXCFNSARLGGTOFXEAKTQLVHUIQJJUNDYWWTUIXJFVWXDSBLFVRCTGYDIWDNWETDWIJNUWGRSMXBAYAZZTECKBMAPQROMQPXQFHJNJESFHKUKEABDKUZOEFBPBYVYGVRKPZPOVQCLSEOM");
    msg.timeout = 5810U;
    msg.contents.assign("VINJTHPZABSCBCJLTXRUGOLAUVJNGRIKNLEFQBQFWFOFADAWGFODMGZBSWPIVYGFKJASIEX");

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
    msg.setTimeStamp(0.154480262609);
    msg.setSource(20551U);
    msg.setSourceEntity(177U);
    msg.setDestination(14038U);
    msg.setDestinationEntity(135U);
    msg.number.assign("MQZXWDXBGUAMZMBCOSNGRNEADVBXWZ");
    msg.timeout = 28390U;
    msg.contents.assign("VFWDNBKSXERAPSOMURCMJJIJNVZSKBLGLCHRQQC");

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
    msg.setTimeStamp(0.578991245482);
    msg.setSource(29729U);
    msg.setSourceEntity(108U);
    msg.setDestination(6518U);
    msg.setDestinationEntity(208U);
    msg.number.assign("BKHQSIKGMPNOHBIHCJSGDFCRQZHTCRLFXTVEGDDUOGXTXFVDXVXNUWPJETIH");
    msg.timeout = 11921U;
    msg.contents.assign("UFVNLZREJDBEXEMPESACRMTNRSZJODXHAKFOLYAMTCIPURIMCYJRHKAWJSZYVUKLGYQDZBOBIORUPYATFDWMWUUFWRFNNRXNKADHFQNVVXRQNPBKWIVTGEPMGODAAMSZECZWNIVTZCLSLWWHBKVUQIHBFZEOHJLMPGGLDVJSEJFCPHONQQTCZYKBJXRYQGLYCTOVSHUUHKFFIXKYPEOXGIQKNECDGTQWI");

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
    msg.setTimeStamp(0.184020958647);
    msg.setSource(41678U);
    msg.setSourceEntity(105U);
    msg.setDestination(3943U);
    msg.setDestinationEntity(88U);
    msg.seq = 2609758783U;
    msg.destination.assign("LAQEODVPIMAJCACBFSCRTBVXNJACSZSYLUFNHUQCAMELRHMWPOURYCFZGVPIDDLJHVSANCFMSZGOIWKGJVYHSVIDAIVXKGHIKYTYZMORPSMLONGDTAZJRY");
    msg.timeout = 49560U;
    const char tmp_msg_0[] = {-44, -118, -126, 112, 85, 49, -91, 63, -5, -58, -40, -4, -101, -49, 52, -17, -106, -111, -83, 113, -15, 110, 126, -41, -127, 0, -84, -12, 49, -17, -64, -26, -28, -61, 41, 84, 4, 57, 46, -111, -51, -25, 117, -74, -120, 43, 68, -61, -74, 97, 69, -62, 80, 73, 89, -28, 15, 61, 74, 40, 56, -28, 120, 102, 29, -40, 66, 108, -60, 123, -27, 9, -90, 119, 36, -67, -16, -104, -88, 11, 22, -103, 107, 101, -43, 31, -1, 6, -37, -23, -4, 36, 17, -121, -100, 66, 89, -75, 25, -71, -47, -117, -8, 43, 35, -19, 64, -63, 115, -63, -20, 115, -48, -123, 62, 12, 18, 43, -15, 9, -101, -90, 65};
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
    msg.setTimeStamp(0.355002883005);
    msg.setSource(61706U);
    msg.setSourceEntity(130U);
    msg.setDestination(23691U);
    msg.setDestinationEntity(213U);
    msg.seq = 130724613U;
    msg.destination.assign("VKMKAKWIJKVXZRFYDRYPJFGJTOUFKCEGWPHQYOERQIONLLQTDFVQSSVTAWNAURPDATCAKTIWGEPJKZCCFZYSNKIHFPDJSNDYIAPODFUHGOJXHPELGSWFRDRTXTBODQHSHHIRFVVQMIZYBBYKACGBPYWG");
    msg.timeout = 63950U;
    const char tmp_msg_0[] = {-98, -83, 57, 105, -101, 3, -77, -78, 106, -109, -61, 66, 73, 58, 12, 71, -105, 89, -117, 35, -114, -84, 60, 65, 24, 125, -24, 90, 9, 112, 125, 11, -126, -106, -109, 14, -58, 6, 49, 106, -67, -94, 43, 123, 107, -90, 67, -123, -128, -87, 9, 50, 95, -14, 19, 40, 126, 126, -9, 93, -57, 8, -4, 19, 16, -58, -4, -51, 66, 70, 20, 84, -111, -24, -91, -8, 18, -59, 116, -84, -67, 0, -113, 120, -10, 24, 61, -52, 23, 40, -74, -125, 90, -52, 58, -20, -92, 52, -45, 67, -57, -48, -63, 9, -72, 114, -35, -39, -88, 49, 8, 85, 13, -41, -53, 125, 62, -60, 71, 124, 55, -71, 50, 100, -109};
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
    msg.setTimeStamp(0.522631983726);
    msg.setSource(33246U);
    msg.setSourceEntity(30U);
    msg.setDestination(16730U);
    msg.setDestinationEntity(221U);
    msg.seq = 3755804806U;
    msg.destination.assign("YLSKHXMDHCDTAWMPQGCXBLGLMLLDMCGAKWVXOQLZVWQYRGRNQLWUNIXFKXDJFWTOAEAQPZSYYVHZTRUGOSJTVHEKIMWZUFJQVBTAFFSMZFGCIYLRSFPTZDRYBXCZEDROJSJKEGADFYHWUXPQEANVIVTPSEBFG");
    msg.timeout = 56791U;
    const char tmp_msg_0[] = {-92, 15, 28, -63, -128, 6, -74, -94, -90, -79, 100, -28, 21, -103, -42, 46, 50, -47, -99, -71, 0, -89, 21, -104, 0, 121, -9, -40, -14, -49, 99, 49, -38, 78, 44, 65, -113, -45, 35, -128, 91, -76, 119, 68, -32, -36, 102, 24, -13, 76, -12, -19, 31, 47, 92, 123, -128, 35, -28, 38, -116, -33, 57, -73, 97, 99, -39, -54, 82, 16, -71, -45, 102, 111, 114, 94, 125, 90, -36, 70, -109, -110, 26, 121, 110, -33, -116, 115, -85, 96, 105, -82, 89, 66, 16, -51, 65, -96, 44, -126, 1, -122, -110, 83, 29, -115, -115, -48, 87, -113, -123, -37, -89, -76, -123, -128, -100, -62, -62, -34, -95, 74, -112, -70, 79, 82, 22, 8, 123, 86, -28, -62, 41, 83, 35, 10, 83, -101, 25, -10, -40, 74, -7, -30, 9, -46, -21, 94, 75, 21, -22, 2, 83, 54, -1, 48, -41, 41, -35, 100, 59, 67, -113, -78, -119, 108, -81, 93, -6, 80, 18, 47, -115, 5, 35, -66, 22, 37, 33, -121, 50, 54, -123, -115, -77, -44, 5, 32, 106, -82, -111, -100, -128, 21, 83, 27, 114, -37, 81, -84, 46, -96, 90, -24, -121, 91, 16, -47, 4, -36, -7, -105, -48, 56, -60, 2, 60, -124, -87, -12, -21, 38, 53, 16, 41, -49, -81, 78, -102, -51, -61, 44, -112, -34, -82};
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
    msg.setTimeStamp(0.768887201376);
    msg.setSource(8931U);
    msg.setSourceEntity(251U);
    msg.setDestination(43751U);
    msg.setDestinationEntity(125U);
    msg.source.assign("IPVCPNNSPUTCWUWVMHMTMLITRAGHPEQHWOKGYQXLYTNVTCHNZTXUXXXHQZNIAZRQZFICFWKUJUGWSABJWRJGTRYEZAHSBJCOBRBFUJVOFEFTVODUBCYCDAOHYZDKAADYSDMMOALFQEQLXSEJMBDIKMMVBWSHLRSJQSAROBLCIONIGKGVCB");
    const char tmp_msg_0[] = {23, 11, 94, -42, -33, -125, -79, 71, 103, -114, -120, 98, -98, -101, 33, -49, 22, -64, 47, 107, 28, -114, 65, -26, 68, -83, -96, 32, 63, -19, -58, 123, 90, 36, -41, -48, 49, -78, -83, -128, 75, 120, 92, 116, -115, 58, 23, -127, -90, -79, -68, 52, 27, 15, -102, -86, 106, -27, 59, -12, 102, -72, -37, 43, 126, 86, -114, 98, -99, -84, 39, -77, -115, 116, -45, -128, -65, -85, -52, -119, -119, 71, 82, -33, 87, -120, 9, 15, -11, -39, 111, 24, -16, -107, 118, -9, 1, -28};
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
    msg.setTimeStamp(0.356484445794);
    msg.setSource(37446U);
    msg.setSourceEntity(167U);
    msg.setDestination(29442U);
    msg.setDestinationEntity(4U);
    msg.source.assign("GTISHGVAGQTELPXWEROKBOSLOLMMWXHFDEIHUPTDTMOXJGBAYLAVZQPUACOOSAHFGIYYZOIPJXUIPSSHZCHUBIKMIKBMJZBNOUQLXWCEGKNMRELVRQWAJRNEKDFVHOJTKBHQFZISUSYUVNZXWXNCSDEKTDQD");
    const char tmp_msg_0[] = {19, -1, -71, 23, 42, -124, -30, 28, 125, -15, -123, -67, -93, 68, -91, 24, 102, 95, -117, -66, -124, -51, -58, -71, 51, -102, 123, 126, 62, 79, -126, -10, 67, -49, 73, -4, 30, 37, 102, -3, -111, -82, -26, -127, 3, -92, -75, 85, -37, 47, 103, -128, 122, -103, -60, -38, -76, 78, 93, 104, -113, 76, 29, -62, -124, 61, -34, -64, -30, -19, -67, -77, 32, -29, 122, -22, -108, 121, -15, -18, 86, 107, 37, 51, -18, -96, -52, -106, 115, -115, 126, -89, -43, 17, 50, -105, 112, -78, -66, 50, 15, -9, 21, -93, -7, 24, 6, -89, -46, 85, -50, 125, 27, 31, 82, 103, -53, 23, -110, -25, -71, -31, -14, 65, -61, 104, -87, 100, -112, 43, -50, 81, -74, 19, -97, -101, -80, 68, -62, 65, -57, -69, -63, 3, 102, 104, -92, -19, -93, -55, 103, 73, -59, 29, 99, -47, 43, -54, -108, 12, 44, 53, -29, 51, -111, -88, -119, 91, 2, 70, -48, -7, -90, -84, 80, -42, -53, -89, 35, -87, 14, -37, 121, -110, -92, 45, -19, -36, 47, 77, 46, 17, -108, -56, -32, -92, -49, 99, 24, 24, 35, 62, -20, 19, -14, -121, 54, -31, 26, -48, -77, -15};
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
    msg.setTimeStamp(0.345070484307);
    msg.setSource(55579U);
    msg.setSourceEntity(211U);
    msg.setDestination(62819U);
    msg.setDestinationEntity(58U);
    msg.source.assign("UALXMEITMDMMGICBCSZTEKVEWJOQFUOLUHVAJDHFSRGSRHWTUVKZSTVGLTLDOMTKUTWYRBDOJBNIGLCQGPKRXVBFORHBMABJDANWXXCZNSLYLPRHWBGOIGNDIQBHPZZTVLCJISOQKKJJKRNXAISEXRIMZSNYETPGCPJCXEMZKFQSEYBZHFYGHDLCQUUXQNWZYIWWQCVJPFNKVETYMPLUCKUNDYEAGHDOIAPQ");
    const char tmp_msg_0[] = {90, -67, -126, -70, -113, 22, -36, 22, 79, 6, -108, 32, 45, 62, 116, 101, -8, -45, -79, -83, -55, 31, -52, 11, -102, -121, 43, 28, -107, -107, -73, 82, 23, -21, -31, -128, 122, -46, -75, -5, 126, 112, 21, 97, 87, 34, 58, 82, 55, -79, -58};
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
    msg.setTimeStamp(0.541602871228);
    msg.setSource(10269U);
    msg.setSourceEntity(232U);
    msg.setDestination(64122U);
    msg.setDestinationEntity(147U);
    msg.seq = 1103523778U;
    msg.state = 250U;
    msg.error.assign("KIKXVLPDMFYDYVOOKCDKVWTZUTCXQQBAZLGLFEQBTJTHTYYURJSLNFZTSIOEHUKWQYJRAWYQKEQROQCEKSQSPUZIGGIVNZGMVJHKRXQCGPHFFGPPZEQLSJDFBYNYXXCEULXDBSAYMOF");

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
    msg.setTimeStamp(0.437706703006);
    msg.setSource(61958U);
    msg.setSourceEntity(89U);
    msg.setDestination(4607U);
    msg.setDestinationEntity(191U);
    msg.seq = 3557404185U;
    msg.state = 53U;
    msg.error.assign("GTEGVIPWAYBUXNOZCDORNLEPQTYEREKDVZZDJXOVZEMNFWIWFYPGLGFULQOLINHWSBOBTTXATRWRXPMXGQUSPMHMMLYZHKOEHYPHUZWELMAPRUIVVDPEGBGALNYJLJATXNOKHMSADPAJVLSZFXENSCIHYBSTGFOBHQSJRBVCGYZFCKNYTDHXKSBXADQJUFWICUJV");

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
    msg.setTimeStamp(0.863623168492);
    msg.setSource(55494U);
    msg.setSourceEntity(110U);
    msg.setDestination(260U);
    msg.setDestinationEntity(153U);
    msg.seq = 1752283983U;
    msg.state = 225U;
    msg.error.assign("PHIPLDVPAAUVPDBWRBMVDDSSDUIYEBLTGOWBAYOJMURHNPGLYYBTRCHDMISJIRUECTIERLHFFEZUHNDOMTJKWFNZCVGNFMZLKBHVIYZNTXNHSKSPQZTKRQVKSATXGEFBXWNHZZAGYAMWFCPQWJGHCUFVSLVEQKPUWQNXJZUECPC");

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
    msg.setTimeStamp(0.385412070032);
    msg.setSource(28743U);
    msg.setSourceEntity(82U);
    msg.setDestination(41884U);
    msg.setDestinationEntity(208U);
    msg.origin.assign("JDVNHHZLBECXMQAXXPMGYQFFYOGJSKPIJTWZYLZPRUWEPUBUSDKUGQOKFOJXWISMDSKXBYRCPWXROBDWOVYUIFCJHWSNCUIMKRFQJXBQMTAECCLTUVKQOSNHPDODFRDZRSNDNNKGGFFFOTCKEVVQRAMYAACEBYTGLBZKWWBXILEOWWSGQ");
    msg.text.assign("YTSKZOUIRXKSIHRWQSFHBNQTUZDMBUGSPANKOEQPIMTEQFNMTZEMGMUDYDEGCSAYELUQICRWDSXLELKOZKMOPEQWAOPCFBZJHWYNYTRDXWDNKYAPFGQTGVDWKECJZUAQX");

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
    msg.setTimeStamp(0.598629545094);
    msg.setSource(17624U);
    msg.setSourceEntity(111U);
    msg.setDestination(34146U);
    msg.setDestinationEntity(34U);
    msg.origin.assign("NVTRFCMCJHAMEDJNUQPIJXZNKRECFPSHNHRJWGRPSLQDXFGXBCQNUKMNVBYPGBOETQIJWRSKADHGIJSEVMYZOKPYHUPZTWOVGWAYTFGKQTMHFCSMXZKELXUDSXTBUIANSKDMWVCYYWRKSLHGIVCEKRLCOSBTDARWBUIKNDLZRDZNEWIMUOCAQEOOZBVAOFUOZCYHWPBSXLTIFXJZZEOTMYFLLGRHPIFADLDHXUEVA");
    msg.text.assign("OAQWDAXLGTIFT");

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
    msg.setTimeStamp(0.960157803679);
    msg.setSource(10610U);
    msg.setSourceEntity(65U);
    msg.setDestination(23094U);
    msg.setDestinationEntity(220U);
    msg.origin.assign("LLRYRTLATQLNAUXXTHFZNNJSFWQPTDUQIRSVZYDICKDXOYCEUIYEWFPQZQGFGJVOWCDWPCGSNHBIBJYBVBWHXXETZCAMBVTVSIKLYVCILBNOTBIULROUYPASESURAKAAAKZGWHTIGOVHYERUXOQCJNHHMGQGHMRNUZMBFCPGPJWMIJLKGDXJESFPOREZNYMOHLNXFQBVSAXJWIR");
    msg.text.assign("MVVSRFUBGFAWPDDK");

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
    msg.setTimeStamp(0.228711570787);
    msg.setSource(13231U);
    msg.setSourceEntity(182U);
    msg.setDestination(16886U);
    msg.setDestinationEntity(69U);
    msg.origin.assign("WSZTXSOCGZADYGBQVSAPRTWILPPLNAICDQENHFHFTYTAYMHAQXRUGOTGKEKMUMOBIJPSVJXYXXMJEP");
    msg.htime = 0.937444736801;
    msg.lat = 0.170943009886;
    msg.lon = 0.351854900338;
    const char tmp_msg_0[] = {-7, -94, 72, 112, -57, 24, -94, -105, 60, -89, -2, 7, 20, 39, -9, 28, -27, 109, 46, 0, -46, -15, 115, -42, 50, -116, -82, -20, -61, 119, -107, -17, 101, 71, -86, -29, 77, 17, 5, -26, -7, 12, -88, 44, -105, 105, -77, 4, -105, -67, 4, 51, -102, 28, 115, -94, -98, 34, 85, 118, -118, -83, 24, -13, -105, 59, 42, -63, 118, 18, 32, -16, 51, 5, 88, -41, 37, -4, -25, 71, -94, 69, 125, -34, 7, -126, -71, 120, 87, 24, -14, -23, -128, -92, 86, 44, 71, -51, 71, 54, 22, -50, 40, -46, -40, 82, -100, 40, -33, 33, -70, 83, 12, -97, -113, -54, 54, -112, -8, 84, -109, -121, 65, -87, 64, 14, 31, 74, -108, -68, -59, 84, 107, 67, -71, 24, -45, 28, 90, 5, 43, 58, 77, -100, 56, 123, 33, -86, 73, 52, -91, 44, 94, 107, -26, -73, -105, -61, 83, -68, -28, -28, 57, -87, -104, 29, -95, -10, 1, -25, 109, -34, 53, -87, -70, -127, 80, 16, -105, -41, -59, -59, -65, 26, 70, -48, 34, -88, 59, 85, 107, -125, -95, -38, -69, -54, 75, -61, -25, 25, -62, -53, -2, 106, -9, -119, -103, 56, 59, -110, 14, -96, -93, -88, 65, 15, 77, -70, -36, 43, 2};
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
    msg.setTimeStamp(0.282621644182);
    msg.setSource(16394U);
    msg.setSourceEntity(28U);
    msg.setDestination(1667U);
    msg.setDestinationEntity(101U);
    msg.origin.assign("CRSIMXWALABPNADDLSJNWDDG");
    msg.htime = 0.290941290367;
    msg.lat = 0.292393725898;
    msg.lon = 0.43154738113;
    const char tmp_msg_0[] = {-70, 84, -104, -40, 0, -74, -82, -10, -26, -21, -49, -36, -23, 95, -92, 6, -66, -100, -26, 15, 22, 79, 122, 94, -101, -111, 103, 24, -10, -30, -21, 113, 78, 69, -69, 38, -11, -26, 11, -36, -7, 50, 77, 123, 41, -99, 34, 38, 66, -101, 121, 122, -9, -29, 61, -15, 114, 52, -20, 32, -64, -100, 50, 101, 64, -117, 50, -15, -93, -3, 9, -88, -88, -58, -20, 28, -60, 53, 40, 113, 56, -35, -71, -110, -28, 36, -84, 61, 103, 34, -54, -108, 115, 36, 67, -64, 108, 59, -122};
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
    msg.setTimeStamp(0.615532748467);
    msg.setSource(55402U);
    msg.setSourceEntity(85U);
    msg.setDestination(10646U);
    msg.setDestinationEntity(117U);
    msg.origin.assign("STLWJGJHNMNMLXMAZFUWBPRWRKRAOPSAVKLVBPTDKWSVPEHQWRGJSEOPVGCHHAUNLGYMNQWBRQTLSZNANHOQQZFJYOIEMFZRLGNC");
    msg.htime = 0.0345104143586;
    msg.lat = 0.932591753459;
    msg.lon = 0.345844884016;
    const char tmp_msg_0[] = {102, 116, 44, 123, 51, -77, 34, -26, 100, -88, -89, -12, 55, 103, 7, 4, 78, 55, -30, -65, -62, -55, 78, 72, 55, -77, -70, 69, -126, 30, -123, -77, -15, -90, 56};
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
    msg.setTimeStamp(0.582137050779);
    msg.setSource(31181U);
    msg.setSourceEntity(144U);
    msg.setDestination(31245U);
    msg.setDestinationEntity(252U);
    msg.req_id = 57925U;
    msg.ttl = 51419U;
    msg.destination.assign("BSDAVLHWOPYFJWHURENLNJXWGVSUENGIOJIDTNGDUNAZIEBIZIOMIHQGRJEVDTVSVGNWPFAWAMSJVZXGUUDAVXXCSMWNLZOYYKACKBLWI");
    const char tmp_msg_0[] = {-91, -35, -111, -55, 31, -17, -18, 62, -87, -59, -82, -35, 38, -60, 110, 5, -33, -16, -105, 113, -17, 77, -17, 22, -14, -85, -37, 42, 51, -46, -22, 45, -76, 35, -9, 50, -117, 117, -9, -42, -101, -51, 10, -52, -19, 77, 4, 88, 61, -126, -19, 34, 19, 80, 49, 34, 50};
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
    msg.setTimeStamp(0.463003343306);
    msg.setSource(30134U);
    msg.setSourceEntity(230U);
    msg.setDestination(64061U);
    msg.setDestinationEntity(210U);
    msg.req_id = 40631U;
    msg.ttl = 51074U;
    msg.destination.assign("RHCZCQXPHJBSUQHZFSXRABNNWSKFOUBMMLMETJLEZRRMIKIYAGFQJLHTIYEFCAYWOBWELETRBXTPRCNPCIVNYVUTPXKQWYSAKRVVOZHNFCVHSTFGWW");
    const char tmp_msg_0[] = {72, -21, -25, -31, 88, 38, -117, -78, -64, 87, -54, 28, -22, 66, 2, 112, 94, -43, 120, -117, 79, 32, -98, -23, -32, 125, 4, -104, -10, -7, -101, -42, -10, 34, 11, 36, 94, -22, 117, 26, -11, 84, -7, -95, -56, -83, 41, -23, 81, -81, 119, -19, 13, 70, 32, 5, -47, 41, -43, -29, -127, -127, 87, -112, 0, 69, -32, -127, -106, -27, 107, -31, -103, 58, -48, -60, 119, -66, 21, -30, -114, 10, -33, -48, 119, 3, 6, -101, -36, 60, 22, 47, -128, -110, 90, -67, -7, 64, -74, -114, -92};
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
    msg.setTimeStamp(0.338270332602);
    msg.setSource(37093U);
    msg.setSourceEntity(38U);
    msg.setDestination(60250U);
    msg.setDestinationEntity(168U);
    msg.req_id = 17590U;
    msg.ttl = 4470U;
    msg.destination.assign("OTDXZKWVXQQQJNYKCKCHQBODQVKIRXMEZUXATPZANKLQAHABCFIWBBFCYLYXLHUEUAJPEUBNDNLFRNPYWVWJCXEGLGMUMIFJKFSNHKYMBJEFSIIDUUOMDNEFIVNASYYHRQBDYRCLFBPEMVVPZTAVOQDHHZGZPCSPHRISPAFRVJOORHOLKJGPSAIKLDKCUSDIIMESHRXNGSOWZZUGMPWZXSEXWBVECOLMTTGBQGQWGTJLGXTUZWDVJCFTM");
    const char tmp_msg_0[] = {20, 78, 100, 44, -79, 31, 121, 73, 29, -10, -127, 47, -92, -95, 106, 122, -73, -97, -48, 49, 63, -71, 122, 34, 104, -55, 84, -4, 28, -124, -28, -11, 40, -122, -49, 49, 28, -22, -110, -16, 73, -48, 98, 30, 98, 10, 19, 87, 14, 118, -95, -52, 62, 13, -26, -46, -54, 98, 29, 99, -93, -18, 19, -61, 49, 13, 74, -48, 55, -116, -1, 103, -111, -43, -76, -4, 20, 10, 84, 100, 89, -60, -47, -69, 6, -106, 54, 5, 3, 92, 125, -39, 115, 80, 53, 115, 31, 53, -64, 30, 76, 50, -16, -125, -126, 48, -78, -15, -57, 75, -2, -41, 32, -29, -38, 2, -120, -47, 41, -95, 38, -18, -33, 11, 0, 42, -4, -83, 116, 111, 87, 118, 114, 45, 119, -7, -15, -42, -16, -3, -38, 115, 38, 125, 27, -83, 14, 72, -127, -16, 3, -104, 52, -12, -125, 74, -74, 84, 18, -115, 17, 38, -104, -22, -95, 99, 125, 39, 43, -107, -47, 78, -5, 35, -72, -109, -75, -19, 93, -38, 21};
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
    msg.setTimeStamp(0.235337533481);
    msg.setSource(5860U);
    msg.setSourceEntity(190U);
    msg.setDestination(44852U);
    msg.setDestinationEntity(60U);
    msg.req_id = 55339U;
    msg.status = 250U;
    msg.text.assign("OBLVCZHKFBZNNGHJEPAYGRIYGAJDVMEUNJMCFBCSOPSDLYOOZZGFVDQSJQDGPLBDMLIDVJTIXUXHHFJGRZKWGPRKGYKYRXHEEVOERENWJPTFBCAUVPLFHNAUQFQQXEIKPCXBXO");

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
    msg.setTimeStamp(0.762913206601);
    msg.setSource(13104U);
    msg.setSourceEntity(212U);
    msg.setDestination(33069U);
    msg.setDestinationEntity(239U);
    msg.req_id = 36800U;
    msg.status = 36U;
    msg.text.assign("YBJHQRSDZVIDALZHRCDQKLZUWCGSVEDMBSPTQRSWXUTRYZNVUEECIZRROXAEJTVLJNNWOFYSGYEOQLYEIYHFTWSHBNKGHMAMJUMLTXLZCVWUOJSBKPAZOBBVVTUXZDNPFCIPKACFWPBFISRWHGXMHDKQOMCRQLUDPFGDMYORJFNMAWOHGBHYOLHNVXAPEZKJQENXQKMAMIGYVSFKRTAUQXIOCSPGTJFXDCPQIGNCBTJUPKT");

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
    msg.setTimeStamp(0.24542916614);
    msg.setSource(20300U);
    msg.setSourceEntity(126U);
    msg.setDestination(52858U);
    msg.setDestinationEntity(217U);
    msg.req_id = 52985U;
    msg.status = 81U;
    msg.text.assign("NZELMCBCQRTGTPUBCHHQPKIAORYDPAZHNXICJSKOLDHKXXMZZFWWZQHLDMLEVDDIIEUOOQILSVAVFLPZAKYNXOZIFFUEPCVWQDBLXHSWAUJXNOYRCBTS");

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
    msg.setTimeStamp(0.145427849293);
    msg.setSource(47413U);
    msg.setSourceEntity(202U);
    msg.setDestination(55348U);
    msg.setDestinationEntity(145U);
    msg.group_name.assign("FPFXPWNOAFTTHLDZLOVSMURJNRTBLCRLUSNBQHEJEBKBDFMYPHAUDYOPQIWDGEGRADEOHCZRYKXOSNZOIVSXLP");
    msg.links = 4164161126U;

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
    msg.setTimeStamp(0.809087371477);
    msg.setSource(1411U);
    msg.setSourceEntity(14U);
    msg.setDestination(28707U);
    msg.setDestinationEntity(0U);
    msg.group_name.assign("KCCZKWZFRXTOVRDDXAMVCETHRYGYPFUUQHSWNIULYSELWKRP");
    msg.links = 2178964495U;

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
    msg.setTimeStamp(0.54802735431);
    msg.setSource(19746U);
    msg.setSourceEntity(206U);
    msg.setDestination(25890U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("YSWKZYFOGJQZNCTXLKXSQDHGOHLBVNBMJJSGOZTSDKVTRBRUGFEABZHTEFLRXOTJZKMHCRLKQZCAEFKRTNIXUCRGTOVSCONIUYNKWHHOMMLBJCOPDFRPFWIGDHKENWEFFLMDZSGUIQEFMEGRMFJMSAPPQGPNATOINSDWWQYQBAALVDPLBSHXZMEIVXRNPBBWDCMIKAIQSICJUHDVCRYXPLZVLEGXVYZVJATIUATJUWYC");
    msg.links = 2173650505U;

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
    msg.setTimeStamp(0.421709676391);
    msg.setSource(61402U);
    msg.setSourceEntity(120U);
    msg.setDestination(46358U);
    msg.setDestinationEntity(82U);
    msg.groupname.assign("DRFZBQKSMUWYWYSRAFJVSTGEQJUIEFNUZKRQGVCLRLWROEUXKIGGLVAXTAGJCSOIDJENHKLXUMACSOPPEDPEMX");
    msg.action = 85U;
    msg.grouplist.assign("NJHWILTSJIGWKZTKMFDCIFTNTELWNVYPELWMFPYVBYNFBNETLPMMKFLCVEGHTPVOPHRBVIUYCBZQCSQUEKMGEZSYEOCLMZGSBFDAGJBIZPYVJJNZLDGUKNOKXGAMAKBHQZDJLQPLDOATMIANGXSMWKJRZTCHQIXWPTKHSBH");

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
    msg.setTimeStamp(0.5529607847);
    msg.setSource(48425U);
    msg.setSourceEntity(14U);
    msg.setDestination(55659U);
    msg.setDestinationEntity(54U);
    msg.groupname.assign("IQFDIMVEJITXMTIWABPOKBUZDBZKXRCHTWJZEXUAENXSFXFHALKVETVUKOTAVNGLQJBFFJZIUPYDMEFKGZHJYGJDLNZNPLXWTODATYYPGSWXQABABCAFFCAYSUDQXOQSGKNDZEORLTGMYPSOHQPNTSVFRSRKSGKSLWMTMVULWEKCDHQBMPVWRCJLMXHRPZCLUIIRNDGQJPDWOPWHYVHNCRXOAYSNRVFJQRZBOMUOBZIQCGYUVYEEUHCNIGIJ");
    msg.action = 219U;
    msg.grouplist.assign("SZMUUYNWULFGJZQWPMGGOARWPCTFDVLGDFHKOFEDPFQNGSVLAIDOMYMMHBWGNYFIYYCLTSGHZLCCIEKMWSWSPNXMFCAVQTWWYEWRTZQXBIANVMMPJRJEXUQCABGKRYDIPQQJTVPPARVZLXH");

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
    msg.setTimeStamp(0.914736895735);
    msg.setSource(33202U);
    msg.setSourceEntity(193U);
    msg.setDestination(58230U);
    msg.setDestinationEntity(233U);
    msg.groupname.assign("RGXYVEUGVWDEXPOAVBNUTICTFWAOIKDPIIZZJYRSDMJHUUXSNDVQMNFERLYJJGJRZVNSDSPSFTWCOJBQLJBOWMYMEWGUDMEGULQCGVVFRBOHMIYTFNSXWCFPLKGZZUXTTVZTDOCKHEOHXYZHBDROAZFIOHDMKBKSLLFCVBTYPCEJAKNAEXCLXAZIPYBGAMUUJKHKCRPPBNSNTFAGQKQH");
    msg.action = 238U;
    msg.grouplist.assign("MJKXPETDOOKZSLYKUKNFQFPVSPXGLBECPHQNCNQTISFHXHRTXZDAETAYMFPGLWQCBVOMIUYYAPOBYRNRBVIYQIUWHDYGIMIDUMMRCKAZQEWCIVISBUFELAWRREWDNIYQNGOQXUWDXWGLLCJVHXBZGNMLMJWAKCHVTVZDNZ");

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
    msg.setTimeStamp(0.746373858813);
    msg.setSource(37498U);
    msg.setSourceEntity(152U);
    msg.setDestination(40772U);
    msg.setDestinationEntity(23U);
    msg.value = 0.746859659206;
    msg.sys_src = 20441U;

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
    msg.setTimeStamp(0.988295497996);
    msg.setSource(9238U);
    msg.setSourceEntity(125U);
    msg.setDestination(44115U);
    msg.setDestinationEntity(204U);
    msg.value = 0.770742740875;
    msg.sys_src = 42246U;

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
    msg.setTimeStamp(0.0790276623891);
    msg.setSource(49371U);
    msg.setSourceEntity(208U);
    msg.setDestination(47689U);
    msg.setDestinationEntity(23U);
    msg.value = 0.179352481317;
    msg.sys_src = 46672U;

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
    msg.setTimeStamp(0.244013395537);
    msg.setSource(5824U);
    msg.setSourceEntity(102U);
    msg.setDestination(53783U);
    msg.setDestinationEntity(252U);
    msg.value = 0.383851300282;
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
    msg.setTimeStamp(0.85476088996);
    msg.setSource(63155U);
    msg.setSourceEntity(226U);
    msg.setDestination(54305U);
    msg.setDestinationEntity(116U);
    msg.value = 0.531816981316;
    msg.units = 18U;

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
    msg.setTimeStamp(0.508806958204);
    msg.setSource(5221U);
    msg.setSourceEntity(155U);
    msg.setDestination(27889U);
    msg.setDestinationEntity(189U);
    msg.value = 0.401002687183;
    msg.units = 100U;

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
    msg.setTimeStamp(0.517150885517);
    msg.setSource(51090U);
    msg.setSourceEntity(123U);
    msg.setDestination(25696U);
    msg.setDestinationEntity(37U);
    msg.base_lat = 0.881698623844;
    msg.base_lon = 0.0271819581884;
    msg.base_time = 0.148230872627;

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
    msg.setTimeStamp(0.809345868569);
    msg.setSource(62462U);
    msg.setSourceEntity(29U);
    msg.setDestination(34308U);
    msg.setDestinationEntity(241U);
    msg.base_lat = 0.793158416428;
    msg.base_lon = 0.574160722841;
    msg.base_time = 0.0444250603806;

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
    msg.setTimeStamp(0.98163491462);
    msg.setSource(22563U);
    msg.setSourceEntity(90U);
    msg.setDestination(23651U);
    msg.setDestinationEntity(182U);
    msg.base_lat = 0.867352364247;
    msg.base_lon = 0.860226376538;
    msg.base_time = 0.0565005108119;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 60550U;
    tmp_msg_0.priority = 77;
    tmp_msg_0.x = -27258;
    tmp_msg_0.y = 8990;
    tmp_msg_0.z = 6951;
    tmp_msg_0.t = 22430;
    IMC::MessagePart tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.uid = 246U;
    tmp_tmp_msg_0_0.frag_number = 156U;
    tmp_tmp_msg_0_0.num_frags = 120U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {-69, 9, -55, 85, -70, 65, -63, -107, -57, -92, 69, 126, 106, 23, 113, 121, -57, -89, -69, 113, -37, -15, -61, 48, 0, -2, 99, -77, -93, -90, 70, 118, 52, 114, -29, -86, -47, -93, 34, 80, 68, 63, -118, 60, -58, 72, -27, -16, -125, -53, -2, -105, 43, -35, -39, -51, -33, 27, -42, 14, -123, 53, 95, 111, -38, 99, -102, 24, -102, 83, -10, -128, 4, -64, 76, 61, 5, 75, 108, -69, 37, 34, -77, 104, -57, 54, 22, -100, 114, -44, -33, -69, -85, 51, -114, 102, -41, -101, 119, 90, -54, -61, 49, 67, -116, -53, 107, -53, 92, 27, 81, 100, 69, -2, -128, -126, 81, 12, -118, 89, 5, 60, 56, -13, 96, -11, -104, -77, -38, 95, 5, -98, 7, 122, -114, 100, -1, 64, 29, 83, 115, -101, 48, -53, 97, 53, -34, 88, -50, -35, 125, 37, -36, -76, 117};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
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
    msg.setTimeStamp(0.615281651818);
    msg.setSource(34160U);
    msg.setSourceEntity(52U);
    msg.setDestination(7735U);
    msg.setDestinationEntity(29U);
    msg.base_lat = 0.328269233212;
    msg.base_lon = 0.57955371128;
    msg.base_time = 0.508361820863;
    const char tmp_msg_0[] = {66, -113, -27, -4, 64, 41, -106, 121, 98, 78, -99, 21, 99, -92, 115, -29, 43, 73, 68, -14, -110, 102, 126, -12, -46, 36, -24, -78, -108, -73, 75, -48, -67, 123, -5, 119, -77, 124, -73, 22, -68, -87, -75, -65, 4, -56, 107, 94, -36, -104, 39, -91, 24, -98, 53, -28, 5, 93, -84, 84, -56, 88, -47, -47, -26, -111, -123, -115, -103, -86, -70, 83, 31, 16, -5, -36, 114, -30, 41, -64, 69, -79, 9, -127, -105, -34, -108, -98, -35, -27, 12, -108, 67, -123, 88, 52, 87, -43, -108, 87, -27, 59, 47, 79, 50, -120, -42, -26, 24, 110, 24, -81, 107, 109, -90, -51, 1, -20, -72, 16, 53, 125, -84, 87, -83, 119, 100, 90, 41, 106, 26, 93, 51, 8, 70, 16, 39, -8, 69, 67, 72, 39, 107, -117, -56, -122, 64, -85, -119, -110, 0, -73, -23, 14, -100, -123, 81, 88, -23, 64, 30, 116, 23, 13, -31, -110, -15, 64, 42, 37, 45, -53, 75, 16, -13, -85, -122, -33, 103, -86, 41, -78, -113, 105, 109, 31, -19, 120, -71, -111, 28, -32, 60, -12, -47, -27, -111, 38, 2, 114, -119, 41, 76, 101, -47, 14, -12, -20, 23, -49, 47, -15, 122, -103, 117, -74, -107, -116, 118, -90, -62, 123};
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
    msg.setTimeStamp(0.960279751762);
    msg.setSource(49034U);
    msg.setSourceEntity(158U);
    msg.setDestination(61476U);
    msg.setDestinationEntity(238U);
    msg.base_lat = 0.979221069026;
    msg.base_lon = 0.373095337977;
    msg.base_time = 0.220984813524;
    const char tmp_msg_0[] = {26, 123, 107, -69, -67, -46, 115, 106, -53, 108, -96, -118, 19, -7, -121, 115, 80, 90, -13, 48, -127, 22, 125, -91, 26, 22, -33, 53, 8, -9, -10, -39, 30, 79, -23, 121, 56, 56, -38, -73, 122, -118, -54, -79, -78, 18, -111, 27, 57, -93, 61, 87, 59, -57, -126, -14, -81, -61, -77, -54, -110, 109, -106, -116, -31, -97, 66, -7, 80, -30, 125, 110, 66, 66, 103, -100, 76, 87, -69, -126, 25, 113, 52, 57, 84, 83, 60, 48, 61, -112, 81, -126, 89, -90, -51, 79, 85, 29, 56, 71, 110, 77, 49, -112, -28, -94, -35, 53, -47, 112, -1, 56, -63, -53, -83, -30, 19, -117, -80, 91, 49, -75, 72};
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
    msg.setTimeStamp(0.608719376816);
    msg.setSource(19276U);
    msg.setSourceEntity(158U);
    msg.setDestination(51027U);
    msg.setDestinationEntity(150U);
    msg.base_lat = 0.911352466503;
    msg.base_lon = 0.305034193484;
    msg.base_time = 0.952367457525;
    const char tmp_msg_0[] = {-60, 33, -99, 37, 34, -69, 102, -70, 43, -54, -26, 63, 113, 97, -103, 22, 46, 116, -79, 126, 5, -38, 55, 96, -70, 118, 48, 109, 52, 61, 74, 1, 114, -97, 62, -128, -21, -4, 15, 89, -10, 87, -69, -124, 64, 9, -54, 63, -14, -90, -45, -90, -79, -48, -57, 87, 15, 49, 100, 58, -15, -86, -73, -105, -98, -126, 121, -120, -86, -98, 46, 105, -101, -3, -29, -34, -70, 31, 21, 88, 52, -96, -57, 22, 31, 111, -99, 119, 38, 46, 102, -33, -27, -37, 94, -118, 116, 5, 1, -11, 87, 105, -77, -93, -67, -107, 25, -11, 76, 23, 27, 2, 94, 16, -79, -29, -99, 1, -23, 92, 8, 45, 53, -51, -79, -63, -124, 84, 47, 8, -125, 19, -1, -8, -48, 13, -11, -97, 17, 22, 67, 48, -54, 1, -108, -1, 80, 29, 11, 14, 123, 36, -11, 40, 34, 20, -10, -50, -57, -9, 71, 30, 106, 33, 93, 99, -2, 20, -113};
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
    msg.setTimeStamp(0.641612898644);
    msg.setSource(46183U);
    msg.setSourceEntity(20U);
    msg.setDestination(37200U);
    msg.setDestinationEntity(86U);
    msg.sys_id = 62483U;
    msg.priority = 114;
    msg.x = 21085;
    msg.y = 32411;
    msg.z = -14122;
    msg.t = 8522;
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 26U;
    tmp_msg_0.value = 0.57741897196;
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
    msg.setTimeStamp(0.0479419210854);
    msg.setSource(25906U);
    msg.setSourceEntity(223U);
    msg.setDestination(54341U);
    msg.setDestinationEntity(92U);
    msg.sys_id = 46194U;
    msg.priority = 40;
    msg.x = 4670;
    msg.y = -13792;
    msg.z = -10094;
    msg.t = 14648;
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 4106464350U;
    tmp_msg_0.value = 86U;
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
    msg.setTimeStamp(0.971476933887);
    msg.setSource(60476U);
    msg.setSourceEntity(71U);
    msg.setDestination(16548U);
    msg.setDestinationEntity(165U);
    msg.sys_id = 17448U;
    msg.priority = 5;
    msg.x = 10998;
    msg.y = -7075;
    msg.z = -16884;
    msg.t = -10557;
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 144U;
    tmp_msg_0.system.assign("QBMWYKBKMIEYQCSNMSMJWIKOIZQFZWJCJJADFGZJAOBKESTHYLFPNTTIVHEMBAGWSWKELFGBZUQVHLGKNYVTSSDGHEFRUTTOHSLMKREFTPUUSXXXTSIGOGIOLCZEJPEURVVUIDECWNMQABTHYYPRADCCBHWRVFNSQVDVPHEYOA");
    tmp_msg_0.range = 0.110360361653;
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LNEQGIOYXSAVNMQEAJZMANSLFMEXSCGDTBKFFNDHGKIYRBUUWZJVGZJQSJJOAXOWDROQETULDQZPVLRCGZTHSVIBBAIUEDKZXDD");
    tmp_tmp_msg_0_0.value.assign("XSCOOORYCNWKXCBNZBBEPZTMFDQSLBUIHGIHPBKOTSYYQAKGHILNHDDK");
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0982897752901);
    msg.setSource(16572U);
    msg.setSourceEntity(200U);
    msg.setDestination(735U);
    msg.setDestinationEntity(32U);
    msg.req_id = 53404U;
    msg.type = 118U;
    msg.max_size = 54491U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.352382364557;
    tmp_msg_0.base_lon = 0.142301334911;
    tmp_msg_0.base_time = 0.788862275047;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 57221U;
    tmp_tmp_msg_0_0.priority = 30;
    tmp_tmp_msg_0_0.x = -15716;
    tmp_tmp_msg_0_0.y = 18517;
    tmp_tmp_msg_0_0.z = -7760;
    tmp_tmp_msg_0_0.t = -24982;
    IMC::ControlLoops tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.enable = 153U;
    tmp_tmp_tmp_msg_0_0_0.mask = 1968882056U;
    tmp_tmp_tmp_msg_0_0_0.scope_ref = 347621061U;
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
    msg.setTimeStamp(0.881847283135);
    msg.setSource(59594U);
    msg.setSourceEntity(237U);
    msg.setDestination(27867U);
    msg.setDestinationEntity(73U);
    msg.req_id = 2856U;
    msg.type = 98U;
    msg.max_size = 18115U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.324401496812;
    tmp_msg_0.base_lon = 0.1109865993;
    tmp_msg_0.base_time = 0.989829911879;
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
    msg.setTimeStamp(0.959085124758);
    msg.setSource(57424U);
    msg.setSourceEntity(190U);
    msg.setDestination(4184U);
    msg.setDestinationEntity(177U);
    msg.req_id = 5085U;
    msg.type = 198U;
    msg.max_size = 39832U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.225585223319;
    tmp_msg_0.base_lon = 0.0258821951461;
    tmp_msg_0.base_time = 0.607857594566;
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
    msg.setTimeStamp(0.575457444552);
    msg.setSource(27242U);
    msg.setSourceEntity(52U);
    msg.setDestination(27629U);
    msg.setDestinationEntity(76U);
    msg.original_source = 60741U;
    msg.destination = 34360U;
    msg.timeout = 0.524417008281;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.853828968777;
    tmp_msg_0.sys_src = 61992U;
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
    msg.setTimeStamp(0.272510284876);
    msg.setSource(11881U);
    msg.setSourceEntity(70U);
    msg.setDestination(4672U);
    msg.setDestinationEntity(85U);
    msg.original_source = 18256U;
    msg.destination = 21301U;
    msg.timeout = 0.957946804344;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 2468985727U;
    tmp_msg_0.state = 203U;
    tmp_msg_0.error.assign("HEZOMRFLJPENBXSHVZAMTTMLOCLKGTEKNWFPSDJXMACOQGSKICIBHXUAGXYDDWHECGPWHETUMZTLBRYYGYPLIPJLDQUEDXTALVOVNBZNAIIPAKNQQBWSARJWEFDUQVBQIVUSIRPPCMSDKWRHSSOJTOYPKAQGZDRAYZVVLUXCUZQNW");
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
    msg.setTimeStamp(0.717306720261);
    msg.setSource(34370U);
    msg.setSourceEntity(39U);
    msg.setDestination(42071U);
    msg.setDestinationEntity(143U);
    msg.original_source = 19714U;
    msg.destination = 14659U;
    msg.timeout = 0.906754368293;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 63215U;
    tmp_msg_0.lat = 0.223533395422;
    tmp_msg_0.lon = 0.0610480374943;
    tmp_msg_0.z = 0.0261530904768;
    tmp_msg_0.z_units = 47U;
    tmp_msg_0.speed = 0.587764489837;
    tmp_msg_0.speed_units = 146U;
    tmp_msg_0.syringe0 = 136U;
    tmp_msg_0.syringe1 = 23U;
    tmp_msg_0.syringe2 = 126U;
    tmp_msg_0.custom.assign("PMIKGICOMCRGZNRHJTAJOWBNFZ");
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
    msg.setTimeStamp(0.395957215661);
    msg.setSource(25475U);
    msg.setSourceEntity(243U);
    msg.setDestination(21879U);
    msg.setDestinationEntity(238U);
    msg.id = 95U;
    msg.range = 0.143110927068;

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
    msg.setTimeStamp(0.0800293783029);
    msg.setSource(63169U);
    msg.setSourceEntity(141U);
    msg.setDestination(35264U);
    msg.setDestinationEntity(107U);
    msg.id = 254U;
    msg.range = 0.894217367829;

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
    msg.setTimeStamp(0.761168601025);
    msg.setSource(33441U);
    msg.setSourceEntity(61U);
    msg.setDestination(19710U);
    msg.setDestinationEntity(182U);
    msg.id = 45U;
    msg.range = 0.273740401263;

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
    msg.setTimeStamp(0.253171392712);
    msg.setSource(48772U);
    msg.setSourceEntity(196U);
    msg.setDestination(20948U);
    msg.setDestinationEntity(101U);
    msg.beacon.assign("ENAGUXORCJYOOXOISYVBBTMFDDTVGUQOPKYFSZSGLXDWFABAACDTHEVAZYHPLKYSOVTKRWRPVEVGDPJJWNCFHHIPDRSUDCGPTKFLGEQXADDGAQJWLNZLONKWRWLQYFLOMA");
    msg.lat = 0.873993684999;
    msg.lon = 0.505273220298;
    msg.depth = 0.19361397211;
    msg.query_channel = 39U;
    msg.reply_channel = 222U;
    msg.transponder_delay = 202U;

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
    msg.setTimeStamp(0.581506165845);
    msg.setSource(34642U);
    msg.setSourceEntity(192U);
    msg.setDestination(34285U);
    msg.setDestinationEntity(191U);
    msg.beacon.assign("UMHEGUTQUGXJSLBAWAQOUPKICQJIPEVGDCBPCSSXVSGYDETEMZHQGMNDENYFWNVXOQFABCJFBETGRGUNLZFPNCRMRORREKLBYOIGJNTGDTPADLWWPCKDXNSWUBHZVYKBIXMXWVVITSZBDIZHOESIUISYTEZCJPPRFZQONAXVYUHHBKRHPLDUWAMWMIZ");
    msg.lat = 0.733824938651;
    msg.lon = 0.262532140753;
    msg.depth = 0.487500468065;
    msg.query_channel = 164U;
    msg.reply_channel = 124U;
    msg.transponder_delay = 154U;

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
    msg.setTimeStamp(0.689066451735);
    msg.setSource(41460U);
    msg.setSourceEntity(128U);
    msg.setDestination(18775U);
    msg.setDestinationEntity(28U);
    msg.beacon.assign("FDNZVPHQOXANVFYJWVUQWOETPHLDEDMSJDUECHHYUSJEHYXGIMRGCFQECEUAIEASAXWGOKBPBMKSSQFZUAXRUTUZPRTLFQKTBBORORHPLMXV");
    msg.lat = 0.315072909173;
    msg.lon = 0.393311566703;
    msg.depth = 0.595862853275;
    msg.query_channel = 234U;
    msg.reply_channel = 94U;
    msg.transponder_delay = 55U;

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
    msg.setTimeStamp(0.372784439925);
    msg.setSource(59577U);
    msg.setSourceEntity(218U);
    msg.setDestination(37642U);
    msg.setDestinationEntity(61U);
    msg.op = 25U;

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
    msg.setTimeStamp(0.210496554595);
    msg.setSource(5452U);
    msg.setSourceEntity(164U);
    msg.setDestination(56826U);
    msg.setDestinationEntity(241U);
    msg.op = 29U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZUPCHYNFOYLQBNTWPUCLAQBRFRGEREOSUGDVMJKMISRKFJWIRXSKKMZTPKYCWIPTIISMLZHSWJHXXMADQAHXGUNQJTFCBOHLNQFMDYDJAELLOKFGGRORHPEYQMFHUDZYMCHBWIWPSULTXSYVFDJTNRTDLBNWXHCTOHUCBNDXZARWFARAFZBEOGLIYDLZZIVQVGIEOVYJQGKAVNEBGUJSUQBAOTMVMSPEBTJUZGVSCXEYXENZQIOPWKCKJAPV");
    tmp_msg_0.lat = 0.0604414687494;
    tmp_msg_0.lon = 0.147951904013;
    tmp_msg_0.depth = 0.782330384639;
    tmp_msg_0.query_channel = 170U;
    tmp_msg_0.reply_channel = 121U;
    tmp_msg_0.transponder_delay = 172U;
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
    msg.setTimeStamp(0.566231416314);
    msg.setSource(51766U);
    msg.setSourceEntity(246U);
    msg.setDestination(6147U);
    msg.setDestinationEntity(81U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.548064287964);
    msg.setSource(21456U);
    msg.setSourceEntity(96U);
    msg.setDestination(63906U);
    msg.setDestinationEntity(7U);
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.862666633352;
    tmp_msg_0.y = 0.943370068335;
    tmp_msg_0.z = 0.700623556729;
    tmp_msg_0.vx = 0.266091381379;
    tmp_msg_0.vy = 0.417604494661;
    tmp_msg_0.vz = 0.235841305403;
    tmp_msg_0.ax = 0.0043367165802;
    tmp_msg_0.ay = 0.434162350486;
    tmp_msg_0.az = 0.346366781456;
    tmp_msg_0.flags = 11888U;
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
    msg.setTimeStamp(0.091908019169);
    msg.setSource(27999U);
    msg.setSourceEntity(94U);
    msg.setDestination(51486U);
    msg.setDestinationEntity(46U);
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 222U;
    tmp_msg_0.goal_id.assign("UMSWHFFPCKYNHKJWPTPQNNBDUYAHWGYMCJQTRGVKLOCLVMNOMJRPIKMZEEIZJKJZNWMVWMBXFSWVATESUHLFXYFXNGQXZOKOTSRYGCLUBPSAHDJPOGQIRGFAIBZNLFSGXGEVUSLRFBHOELDZJZXSDOOETNJWRFKLOPCYUEVHWDAGTXTDKTZQKI");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("LLWYOPGXXVIDWNPHPFQKTBMJEZWIPJXSBMKRYJAUWUGETXGOIL");
    tmp_tmp_msg_0_0.predicate.assign("MNXFRRQKJVVWLOZSQNWNQDDTHGYBEWCHWTGQTJRJBOKYUDCWSEUUYYZD");
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0997222581833);
    msg.setSource(57549U);
    msg.setSourceEntity(110U);
    msg.setDestination(56657U);
    msg.setDestinationEntity(106U);
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.642681320712;
    tmp_msg_0.units = 57U;
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
    msg.setTimeStamp(0.358098071897);
    msg.setSource(8650U);
    msg.setSourceEntity(195U);
    msg.setDestination(2376U);
    msg.setDestinationEntity(221U);
    msg.op = 187U;
    msg.system.assign("KNCYZKPKCLYRXKHEYJJPADILRGSQEWCHTOMSIGVJTIYCGZMQLB");
    msg.range = 0.258912269773;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 23370U;
    tmp_msg_0.lat = 0.630341190772;
    tmp_msg_0.lon = 0.239665079051;
    tmp_msg_0.z = 0.0514774864428;
    tmp_msg_0.z_units = 55U;
    tmp_msg_0.speed = 0.810139620822;
    tmp_msg_0.speed_units = 108U;
    tmp_msg_0.custom.assign("KUXPUJLHSXVOMBIDAAWOJCFMPPQDASKBANFLGHILYEWZMMRABGZRZENWCLDGEWNKMTKPZOCSRKBMNRVRZFJENLQRMFGXLEWYADIIPPVKSNMIBYTXPBIJGCCQTWQYOHSGCUTTIXRFPJBOUYMSXUIGFGDTOYJKYUCHQCFNGZVAOAQHEZXKPBUCHLQJAHRSZFQHHOCDVXWRXOQVWEQSWVBKMXUZIKLSOPYU");
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
    msg.setTimeStamp(0.0737402675194);
    msg.setSource(20083U);
    msg.setSourceEntity(192U);
    msg.setDestination(1178U);
    msg.setDestinationEntity(218U);
    msg.op = 234U;
    msg.system.assign("PTUDAEQKCZDYISWTSRBGILRBRHUOKTEBHHJJCZNSGLKKVJASGUENZPUINSXVRGEIOPSDQIDNXPHEDJNXSBTYJDXAMWGHFCZQTYMPFYZQNZGWTJBBUGNMAKUVMJUIWQWORKISIVLVKUJOOLXARHFAVESBFQQWQYGLOMTWVEFAPGPZWPCKDYJXMNQ");
    msg.range = 0.755604797256;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 140U;
    tmp_msg_0.lon_gain = 0.309767272066;
    tmp_msg_0.lat_gain = 0.599104443625;
    tmp_msg_0.bond_thick = 0.318623033013;
    tmp_msg_0.lead_gain = 0.357835563045;
    tmp_msg_0.deconfl_gain = 0.593670504876;
    tmp_msg_0.accel_switch_gain = 0.398859887286;
    tmp_msg_0.safe_dist = 0.130905103968;
    tmp_msg_0.deconflict_offset = 0.513008057623;
    tmp_msg_0.accel_safe_margin = 0.683624806852;
    tmp_msg_0.accel_lim_x = 0.115615177607;
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
    msg.setTimeStamp(0.690356391443);
    msg.setSource(30072U);
    msg.setSourceEntity(173U);
    msg.setDestination(46786U);
    msg.setDestinationEntity(141U);
    msg.op = 108U;
    msg.system.assign("FMXHRGSNNHMJABGBPZEUJCNQABYEIWVICEWOZFBWUWLOJOZDCFDHMODRUSJNUHBENCCVEJDLSUPJJKZLABJOMKITYR");
    msg.range = 0.276696169646;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("UBNMSQTEQHGMWPAEGXQZOYQVWEPLOBFREDTLAAJBVZKMCIFHAHLRDKRMYNKKVNOTITACOPWAKFSLZWGCUGDBSBPLJJLIWXQPNNNCIXEQELWMRGXPBMUIYEZXREXJVYJBMYHSJEXOMGWHSOJVYG");
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
    msg.setTimeStamp(0.812622615808);
    msg.setSource(25578U);
    msg.setSourceEntity(210U);
    msg.setDestination(11988U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.30409091519);
    msg.setSource(29866U);
    msg.setSourceEntity(150U);
    msg.setDestination(15747U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.51739349484);
    msg.setSource(47140U);
    msg.setSourceEntity(220U);
    msg.setDestination(30648U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.67579099708);
    msg.setSource(31104U);
    msg.setSourceEntity(42U);
    msg.setDestination(28232U);
    msg.setDestinationEntity(24U);
    msg.list.assign("ZXYZLPLGKYDGTOISILCXUGJBBHSFDYMGYJOHIYQVCGBAPMVSZVIXPYJWMOWIYBQRWMUHWASPTXJFHQGRULUUBRTXLKMFSPMXCIQCDUYELYZJZAQSTDNUNNGRWGKCBIROFVVDEPJMYETKKANHAQXEFTQEFZQHHSMSZANEFNKVTOHXPEDWORTOOBCNCRAEJAPJRPATKDVJUZSMFMBCVVGQLAITFKWHVNK");

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
    msg.setTimeStamp(0.255046521912);
    msg.setSource(31207U);
    msg.setSourceEntity(61U);
    msg.setDestination(34147U);
    msg.setDestinationEntity(102U);
    msg.list.assign("LRBKSBRSGLNGRNHLCMULXCFWPTUQXVSLOXETQBWOZZYCERFMEIJISKDGBQRNHUTZNVHRHEIVEAQPMTJKQICYTDFAYARUFOQPABQXFWDSOBXEJ");

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
    msg.setTimeStamp(0.831948372124);
    msg.setSource(47924U);
    msg.setSourceEntity(240U);
    msg.setDestination(65093U);
    msg.setDestinationEntity(156U);
    msg.list.assign("IILZDCWFEBDOYGYNCFAAWWTSCZSYHGDIFZMPQXMMMPAOO");

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
    msg.setTimeStamp(0.307384297449);
    msg.setSource(20914U);
    msg.setSourceEntity(32U);
    msg.setDestination(38757U);
    msg.setDestinationEntity(149U);
    msg.peer.assign("WWZBFJQBNJHBECRKUJAAFYTKXJGXPMPILEATINNBHSGN");
    msg.rssi = 0.575609107979;
    msg.integrity = 48567U;

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
    msg.setTimeStamp(0.488050105201);
    msg.setSource(59361U);
    msg.setSourceEntity(59U);
    msg.setDestination(23845U);
    msg.setDestinationEntity(146U);
    msg.peer.assign("JCXBQRZQIPZILIGEVDBKTEXQNHHQNETTUHVAWHJKNVCZOTBBAMHHDEAXVMDKIJCTOYCUTJMLPQJRSSDMM");
    msg.rssi = 0.278338043006;
    msg.integrity = 42216U;

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
    msg.setTimeStamp(0.572107667753);
    msg.setSource(40324U);
    msg.setSourceEntity(53U);
    msg.setDestination(32878U);
    msg.setDestinationEntity(250U);
    msg.peer.assign("IKTXBCWEDXOUBGKAQTXFRYDPTUMNVKOOOMGJYEKGZNKLVDIEYWPZOXPEDHBAWMQRUHUIVLYMQSYCLWQFXBNVJVSJWSOZAAIIAEULPIOATQHRLDUFHKTTRMNCDECXZLAHOPKZSGFYGPOKFBITVIQGQZEWIHRBNVLVWLCDLOAJYVHPJJENRJXANHFRHCWNCMDMMRRJZFGMGSXSKPYZFFYPTNTFBLUCECBSBWZNQBTKUSIGCZVDSYGUPMSWJQ");
    msg.rssi = 0.722795775912;
    msg.integrity = 58041U;

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
    msg.setTimeStamp(0.497037854381);
    msg.setSource(13195U);
    msg.setSourceEntity(39U);
    msg.setDestination(6038U);
    msg.setDestinationEntity(211U);
    msg.value = -21228;

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
    msg.setTimeStamp(0.223575585605);
    msg.setSource(14538U);
    msg.setSourceEntity(88U);
    msg.setDestination(41758U);
    msg.setDestinationEntity(78U);
    msg.value = -17420;

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
    msg.setTimeStamp(0.715182600164);
    msg.setSource(14619U);
    msg.setSourceEntity(104U);
    msg.setDestination(47019U);
    msg.setDestinationEntity(54U);
    msg.value = -15247;

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
    msg.setTimeStamp(0.268697168836);
    msg.setSource(4834U);
    msg.setSourceEntity(181U);
    msg.setDestination(58023U);
    msg.setDestinationEntity(242U);
    msg.value = 0.67425312497;

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
    msg.setTimeStamp(0.46747706935);
    msg.setSource(6646U);
    msg.setSourceEntity(40U);
    msg.setDestination(49691U);
    msg.setDestinationEntity(98U);
    msg.value = 0.0772223975957;

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
    msg.setTimeStamp(0.185031060209);
    msg.setSource(64535U);
    msg.setSourceEntity(86U);
    msg.setDestination(16134U);
    msg.setDestinationEntity(56U);
    msg.value = 0.172827520034;

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
    msg.setTimeStamp(0.291061472562);
    msg.setSource(58472U);
    msg.setSourceEntity(137U);
    msg.setDestination(6412U);
    msg.setDestinationEntity(231U);
    msg.value = 0.221092685171;

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
    msg.setTimeStamp(0.743633855825);
    msg.setSource(44728U);
    msg.setSourceEntity(203U);
    msg.setDestination(64916U);
    msg.setDestinationEntity(235U);
    msg.value = 0.95893084932;

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
    msg.setTimeStamp(0.873366916919);
    msg.setSource(37957U);
    msg.setSourceEntity(176U);
    msg.setDestination(51577U);
    msg.setDestinationEntity(147U);
    msg.value = 0.317368426109;

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
    msg.setTimeStamp(0.7701765405);
    msg.setSource(21638U);
    msg.setSourceEntity(91U);
    msg.setDestination(39987U);
    msg.setDestinationEntity(200U);
    msg.validity = 54277U;
    msg.type = 136U;
    msg.utc_year = 31845U;
    msg.utc_month = 137U;
    msg.utc_day = 105U;
    msg.utc_time = 0.680938114503;
    msg.lat = 0.393128743508;
    msg.lon = 0.0246766819804;
    msg.height = 0.0807231831638;
    msg.satellites = 88U;
    msg.cog = 0.936894734015;
    msg.sog = 0.410801695181;
    msg.hdop = 0.578887853376;
    msg.vdop = 0.348663415723;
    msg.hacc = 0.364216293834;
    msg.vacc = 0.698973733203;

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
    msg.setTimeStamp(0.0696356366491);
    msg.setSource(24698U);
    msg.setSourceEntity(183U);
    msg.setDestination(19006U);
    msg.setDestinationEntity(161U);
    msg.validity = 55414U;
    msg.type = 63U;
    msg.utc_year = 51833U;
    msg.utc_month = 69U;
    msg.utc_day = 155U;
    msg.utc_time = 0.459702920192;
    msg.lat = 0.596404685197;
    msg.lon = 0.74969963395;
    msg.height = 0.603437172369;
    msg.satellites = 131U;
    msg.cog = 0.131215518564;
    msg.sog = 0.550478084756;
    msg.hdop = 0.643993372826;
    msg.vdop = 0.74856229705;
    msg.hacc = 0.0398099223659;
    msg.vacc = 0.787844310444;

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
    msg.setTimeStamp(0.763491211675);
    msg.setSource(35697U);
    msg.setSourceEntity(183U);
    msg.setDestination(61454U);
    msg.setDestinationEntity(154U);
    msg.validity = 36275U;
    msg.type = 56U;
    msg.utc_year = 64003U;
    msg.utc_month = 232U;
    msg.utc_day = 67U;
    msg.utc_time = 0.633671537783;
    msg.lat = 0.655439559398;
    msg.lon = 0.995634585586;
    msg.height = 0.560250084512;
    msg.satellites = 18U;
    msg.cog = 0.126224178337;
    msg.sog = 0.129568239682;
    msg.hdop = 0.0447043488038;
    msg.vdop = 0.190133204903;
    msg.hacc = 0.96057089377;
    msg.vacc = 0.556488221399;

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
    msg.setTimeStamp(0.466417888097);
    msg.setSource(23552U);
    msg.setSourceEntity(155U);
    msg.setDestination(19376U);
    msg.setDestinationEntity(23U);
    msg.time = 0.249207947277;
    msg.phi = 0.540185838689;
    msg.theta = 0.63020861707;
    msg.psi = 0.107919589719;
    msg.psi_magnetic = 0.0776628474129;

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
    msg.setTimeStamp(0.0716851560407);
    msg.setSource(38785U);
    msg.setSourceEntity(79U);
    msg.setDestination(41084U);
    msg.setDestinationEntity(23U);
    msg.time = 0.90659917699;
    msg.phi = 0.3113866268;
    msg.theta = 0.928399597151;
    msg.psi = 0.602520662716;
    msg.psi_magnetic = 0.833981568354;

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
    msg.setTimeStamp(0.647904897965);
    msg.setSource(33487U);
    msg.setSourceEntity(135U);
    msg.setDestination(31139U);
    msg.setDestinationEntity(115U);
    msg.time = 0.0154651742534;
    msg.phi = 0.104369030353;
    msg.theta = 0.713206634131;
    msg.psi = 0.568516667906;
    msg.psi_magnetic = 0.652122816163;

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
    msg.setTimeStamp(0.790173807658);
    msg.setSource(36700U);
    msg.setSourceEntity(23U);
    msg.setDestination(40872U);
    msg.setDestinationEntity(196U);
    msg.time = 0.657677818485;
    msg.x = 0.111252184844;
    msg.y = 0.609188148112;
    msg.z = 0.42670389195;
    msg.timestep = 0.119200319093;

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
    msg.setTimeStamp(0.477499504036);
    msg.setSource(63480U);
    msg.setSourceEntity(207U);
    msg.setDestination(9252U);
    msg.setDestinationEntity(66U);
    msg.time = 0.672513977247;
    msg.x = 0.0529125710839;
    msg.y = 0.908333322494;
    msg.z = 0.412887553381;
    msg.timestep = 0.0613680537804;

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
    msg.setTimeStamp(0.880093248058);
    msg.setSource(26996U);
    msg.setSourceEntity(224U);
    msg.setDestination(42173U);
    msg.setDestinationEntity(46U);
    msg.time = 0.486168176442;
    msg.x = 0.063062490931;
    msg.y = 0.923205719194;
    msg.z = 0.434972922595;
    msg.timestep = 0.139819954271;

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
    msg.setTimeStamp(0.111747216923);
    msg.setSource(18504U);
    msg.setSourceEntity(206U);
    msg.setDestination(27301U);
    msg.setDestinationEntity(42U);
    msg.time = 0.495939664073;
    msg.x = 0.743198254846;
    msg.y = 0.727758496237;
    msg.z = 0.724037794689;

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
    msg.setTimeStamp(0.548770018607);
    msg.setSource(42097U);
    msg.setSourceEntity(92U);
    msg.setDestination(30443U);
    msg.setDestinationEntity(81U);
    msg.time = 0.429364268165;
    msg.x = 0.796342635032;
    msg.y = 0.946072802948;
    msg.z = 0.400484999576;

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
    msg.setTimeStamp(0.953030393552);
    msg.setSource(49330U);
    msg.setSourceEntity(188U);
    msg.setDestination(55471U);
    msg.setDestinationEntity(4U);
    msg.time = 0.821287781299;
    msg.x = 0.0203531507756;
    msg.y = 0.0561295047227;
    msg.z = 0.266719586272;

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
    msg.setTimeStamp(0.707812521208);
    msg.setSource(12978U);
    msg.setSourceEntity(0U);
    msg.setDestination(33142U);
    msg.setDestinationEntity(34U);
    msg.time = 0.466431479007;
    msg.x = 0.961883521536;
    msg.y = 0.739996055874;
    msg.z = 0.879202681325;

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
    msg.setTimeStamp(0.957774669155);
    msg.setSource(57486U);
    msg.setSourceEntity(111U);
    msg.setDestination(9444U);
    msg.setDestinationEntity(252U);
    msg.time = 0.658949015887;
    msg.x = 0.350939713667;
    msg.y = 0.956541882958;
    msg.z = 0.00540900064649;

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
    msg.setTimeStamp(0.866178973712);
    msg.setSource(55834U);
    msg.setSourceEntity(113U);
    msg.setDestination(12912U);
    msg.setDestinationEntity(160U);
    msg.time = 0.410444165634;
    msg.x = 0.242172023942;
    msg.y = 0.254676056657;
    msg.z = 0.474792939164;

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
    msg.setTimeStamp(0.84819537208);
    msg.setSource(22722U);
    msg.setSourceEntity(102U);
    msg.setDestination(8357U);
    msg.setDestinationEntity(131U);
    msg.time = 0.450286945216;
    msg.x = 0.654517653698;
    msg.y = 0.802576222508;
    msg.z = 0.152968378066;

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
    msg.setTimeStamp(0.572891403022);
    msg.setSource(60259U);
    msg.setSourceEntity(185U);
    msg.setDestination(21294U);
    msg.setDestinationEntity(13U);
    msg.time = 0.512625997453;
    msg.x = 0.936650686605;
    msg.y = 0.381495865585;
    msg.z = 0.733619123592;

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
    msg.setTimeStamp(0.108866079194);
    msg.setSource(15671U);
    msg.setSourceEntity(207U);
    msg.setDestination(11100U);
    msg.setDestinationEntity(138U);
    msg.time = 0.0954854554145;
    msg.x = 0.763527880014;
    msg.y = 0.663499042098;
    msg.z = 0.824316086582;

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
    msg.setTimeStamp(0.121842971649);
    msg.setSource(57149U);
    msg.setSourceEntity(136U);
    msg.setDestination(5201U);
    msg.setDestinationEntity(0U);
    msg.validity = 125U;
    msg.x = 0.294261071328;
    msg.y = 0.842065209697;
    msg.z = 0.0445979616894;

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
    msg.setTimeStamp(0.626391200533);
    msg.setSource(2955U);
    msg.setSourceEntity(3U);
    msg.setDestination(40599U);
    msg.setDestinationEntity(104U);
    msg.validity = 203U;
    msg.x = 0.669153148399;
    msg.y = 0.533416412064;
    msg.z = 0.631223846158;

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
    msg.setTimeStamp(0.935196701669);
    msg.setSource(46455U);
    msg.setSourceEntity(122U);
    msg.setDestination(48711U);
    msg.setDestinationEntity(245U);
    msg.validity = 80U;
    msg.x = 0.267114142709;
    msg.y = 0.157871180834;
    msg.z = 0.944472205667;

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
    msg.setTimeStamp(0.564208477894);
    msg.setSource(44593U);
    msg.setSourceEntity(206U);
    msg.setDestination(30419U);
    msg.setDestinationEntity(235U);
    msg.validity = 110U;
    msg.x = 0.0279546117406;
    msg.y = 0.0312499228419;
    msg.z = 0.62705514312;

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
    msg.setTimeStamp(0.601357131434);
    msg.setSource(8942U);
    msg.setSourceEntity(125U);
    msg.setDestination(27936U);
    msg.setDestinationEntity(176U);
    msg.validity = 223U;
    msg.x = 0.284162332505;
    msg.y = 0.882343257114;
    msg.z = 0.932463583195;

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
    msg.setTimeStamp(0.526979161787);
    msg.setSource(31896U);
    msg.setSourceEntity(47U);
    msg.setDestination(37608U);
    msg.setDestinationEntity(89U);
    msg.validity = 16U;
    msg.x = 0.318492586179;
    msg.y = 0.707609469591;
    msg.z = 0.369769607881;

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
    msg.setTimeStamp(0.425172413774);
    msg.setSource(23870U);
    msg.setSourceEntity(68U);
    msg.setDestination(29882U);
    msg.setDestinationEntity(100U);
    msg.time = 0.89087044765;
    msg.x = 0.127711873642;
    msg.y = 0.470817648055;
    msg.z = 0.546706195912;

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
    msg.setTimeStamp(0.873332761665);
    msg.setSource(6425U);
    msg.setSourceEntity(217U);
    msg.setDestination(27927U);
    msg.setDestinationEntity(187U);
    msg.time = 0.816052007786;
    msg.x = 0.294953365028;
    msg.y = 0.322721097538;
    msg.z = 0.77889416121;

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
    msg.setTimeStamp(0.869525612624);
    msg.setSource(21262U);
    msg.setSourceEntity(36U);
    msg.setDestination(27590U);
    msg.setDestinationEntity(80U);
    msg.time = 0.849043273269;
    msg.x = 0.627555059378;
    msg.y = 0.356049142753;
    msg.z = 0.231493406205;

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
    msg.setTimeStamp(0.54081223551);
    msg.setSource(25450U);
    msg.setSourceEntity(82U);
    msg.setDestination(13539U);
    msg.setDestinationEntity(217U);
    msg.validity = 135U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.219200182876;
    tmp_msg_0.beam_height = 0.411248081521;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.0962608838772;

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
    msg.setTimeStamp(0.140877310031);
    msg.setSource(6151U);
    msg.setSourceEntity(29U);
    msg.setDestination(3606U);
    msg.setDestinationEntity(234U);
    msg.validity = 59U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.589212371154;
    tmp_msg_0.y = 0.721303550647;
    tmp_msg_0.z = 0.42438056875;
    tmp_msg_0.phi = 0.0378857745294;
    tmp_msg_0.theta = 0.754787516144;
    tmp_msg_0.psi = 0.071501155359;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.850854770811;
    tmp_msg_1.beam_height = 0.753481854167;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.903355889641;

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
    msg.setTimeStamp(0.486052874931);
    msg.setSource(65214U);
    msg.setSourceEntity(124U);
    msg.setDestination(25205U);
    msg.setDestinationEntity(156U);
    msg.validity = 62U;
    msg.value = 0.251497003317;

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
    msg.setTimeStamp(0.0445831342113);
    msg.setSource(25729U);
    msg.setSourceEntity(7U);
    msg.setDestination(52989U);
    msg.setDestinationEntity(230U);
    msg.value = 0.588708815498;

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
    msg.setTimeStamp(0.442746796909);
    msg.setSource(20922U);
    msg.setSourceEntity(209U);
    msg.setDestination(3121U);
    msg.setDestinationEntity(43U);
    msg.value = 0.159939932207;

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
    msg.setTimeStamp(0.783978855747);
    msg.setSource(51271U);
    msg.setSourceEntity(186U);
    msg.setDestination(49138U);
    msg.setDestinationEntity(41U);
    msg.value = 0.789684304237;

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
    msg.setTimeStamp(0.26178115855);
    msg.setSource(59261U);
    msg.setSourceEntity(83U);
    msg.setDestination(5853U);
    msg.setDestinationEntity(152U);
    msg.value = 0.967681979189;

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
    msg.setTimeStamp(0.022299926265);
    msg.setSource(59022U);
    msg.setSourceEntity(202U);
    msg.setDestination(61730U);
    msg.setDestinationEntity(119U);
    msg.value = 0.386776195912;

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
    msg.setTimeStamp(0.125302979467);
    msg.setSource(37549U);
    msg.setSourceEntity(129U);
    msg.setDestination(44730U);
    msg.setDestinationEntity(129U);
    msg.value = 0.0304341779228;

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
    msg.setTimeStamp(0.373995063691);
    msg.setSource(45489U);
    msg.setSourceEntity(74U);
    msg.setDestination(4683U);
    msg.setDestinationEntity(148U);
    msg.value = 0.992882019529;

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
    msg.setTimeStamp(0.809790029913);
    msg.setSource(6010U);
    msg.setSourceEntity(168U);
    msg.setDestination(54139U);
    msg.setDestinationEntity(195U);
    msg.value = 0.990698643893;

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
    msg.setTimeStamp(0.786308646623);
    msg.setSource(3086U);
    msg.setSourceEntity(174U);
    msg.setDestination(1203U);
    msg.setDestinationEntity(170U);
    msg.value = 0.401127028607;

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
    msg.setTimeStamp(0.094327132824);
    msg.setSource(57063U);
    msg.setSourceEntity(222U);
    msg.setDestination(56427U);
    msg.setDestinationEntity(156U);
    msg.value = 0.52164684592;

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
    msg.setTimeStamp(0.78586519766);
    msg.setSource(27307U);
    msg.setSourceEntity(239U);
    msg.setDestination(43551U);
    msg.setDestinationEntity(225U);
    msg.value = 0.51048773787;

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
    msg.setTimeStamp(0.100153523723);
    msg.setSource(61510U);
    msg.setSourceEntity(115U);
    msg.setDestination(9713U);
    msg.setDestinationEntity(151U);
    msg.value = 0.81494334767;

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
    msg.setTimeStamp(0.657439759666);
    msg.setSource(43322U);
    msg.setSourceEntity(238U);
    msg.setDestination(60258U);
    msg.setDestinationEntity(50U);
    msg.value = 0.60133374188;

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
    msg.setTimeStamp(0.430374658711);
    msg.setSource(39309U);
    msg.setSourceEntity(12U);
    msg.setDestination(1295U);
    msg.setDestinationEntity(31U);
    msg.value = 0.393420645584;

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
    msg.setTimeStamp(0.136681280777);
    msg.setSource(17536U);
    msg.setSourceEntity(115U);
    msg.setDestination(55630U);
    msg.setDestinationEntity(10U);
    msg.value = 0.452379819624;

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
    msg.setTimeStamp(0.794202038873);
    msg.setSource(41629U);
    msg.setSourceEntity(8U);
    msg.setDestination(7403U);
    msg.setDestinationEntity(150U);
    msg.value = 0.863865513455;

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
    msg.setTimeStamp(0.0509962718597);
    msg.setSource(21032U);
    msg.setSourceEntity(148U);
    msg.setDestination(41947U);
    msg.setDestinationEntity(137U);
    msg.value = 0.634005860261;

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
    msg.setTimeStamp(0.460143972693);
    msg.setSource(46242U);
    msg.setSourceEntity(130U);
    msg.setDestination(4784U);
    msg.setDestinationEntity(173U);
    msg.value = 0.19938506897;

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
    msg.setTimeStamp(0.326756552054);
    msg.setSource(54569U);
    msg.setSourceEntity(214U);
    msg.setDestination(17221U);
    msg.setDestinationEntity(5U);
    msg.value = 0.713739328026;

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
    msg.setTimeStamp(0.932236740484);
    msg.setSource(43374U);
    msg.setSourceEntity(236U);
    msg.setDestination(42619U);
    msg.setDestinationEntity(47U);
    msg.value = 0.364669539719;

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
    msg.setTimeStamp(0.726791707584);
    msg.setSource(49976U);
    msg.setSourceEntity(48U);
    msg.setDestination(44533U);
    msg.setDestinationEntity(78U);
    msg.value = 0.724210042341;

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
    msg.setTimeStamp(0.150245501352);
    msg.setSource(27914U);
    msg.setSourceEntity(44U);
    msg.setDestination(20556U);
    msg.setDestinationEntity(179U);
    msg.value = 0.685048642658;

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
    msg.setTimeStamp(0.182073219585);
    msg.setSource(25380U);
    msg.setSourceEntity(105U);
    msg.setDestination(56867U);
    msg.setDestinationEntity(97U);
    msg.value = 0.4493272187;

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
    msg.setTimeStamp(0.515058951547);
    msg.setSource(55791U);
    msg.setSourceEntity(169U);
    msg.setDestination(56843U);
    msg.setDestinationEntity(203U);
    msg.value = 0.299272866101;

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
    msg.setTimeStamp(0.188828420534);
    msg.setSource(26271U);
    msg.setSourceEntity(143U);
    msg.setDestination(22177U);
    msg.setDestinationEntity(11U);
    msg.direction = 0.717768321763;
    msg.speed = 0.041517283314;
    msg.turbulence = 0.485015242252;

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
    msg.setTimeStamp(0.993193335451);
    msg.setSource(45574U);
    msg.setSourceEntity(88U);
    msg.setDestination(33957U);
    msg.setDestinationEntity(185U);
    msg.direction = 0.180302176882;
    msg.speed = 0.813915402564;
    msg.turbulence = 0.0724275735923;

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
    msg.setTimeStamp(0.821704815812);
    msg.setSource(12241U);
    msg.setSourceEntity(234U);
    msg.setDestination(27366U);
    msg.setDestinationEntity(167U);
    msg.direction = 0.808033168453;
    msg.speed = 0.0100875285008;
    msg.turbulence = 0.986628092543;

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
    msg.setTimeStamp(0.980664556647);
    msg.setSource(24541U);
    msg.setSourceEntity(49U);
    msg.setDestination(40058U);
    msg.setDestinationEntity(236U);
    msg.value = 0.773297447902;

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
    msg.setTimeStamp(0.501948389317);
    msg.setSource(5976U);
    msg.setSourceEntity(41U);
    msg.setDestination(30303U);
    msg.setDestinationEntity(12U);
    msg.value = 0.683806726758;

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
    msg.setTimeStamp(0.527890464243);
    msg.setSource(38904U);
    msg.setSourceEntity(32U);
    msg.setDestination(46219U);
    msg.setDestinationEntity(233U);
    msg.value = 0.588287142835;

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
    msg.setTimeStamp(0.966657671943);
    msg.setSource(25590U);
    msg.setSourceEntity(13U);
    msg.setDestination(18692U);
    msg.setDestinationEntity(137U);
    msg.value.assign("AHOKZOFDASLMBHIEROAPGZXPGJQHUNKDTATXYFCGTINHGEEPDKDRRHMNBNWMOUYXAUPJFCMREYJCYIGZHKTXOLCFTWTVCNQFBYQSPSKXARSVIPADCFTEJJIXEGBKTNXUDPZVUDYZPQGVDJLKWHMOFBSJBWZIRXUNSTUHWSVZCYDMDICAFILKVIOLZSNRYGAEXLLWKQJFUWGYWEL");

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
    msg.setTimeStamp(0.814482064429);
    msg.setSource(31108U);
    msg.setSourceEntity(85U);
    msg.setDestination(11574U);
    msg.setDestinationEntity(120U);
    msg.value.assign("NDGDOIFCGVDPVLRRXMMCXWZACXJJDIBIQWNNGGCYLHISJLWWAWVSKBXUXHMXMRVFFLQNVMTZZTFXUKGKPIRTONCRQTEOUWLGONMZSAVRDZJHEDYKKZZPNPUBLPPARJVEIYCOEBSZYVKWETFCJNEEHHUPADBCGFUQOTDAOCARFSGMUBYXOYYPKQAICPWMGJTWHLAYVBTDMWLENODYQBASTJGSKUTQXLHFPSXUJJQOZHMQYRHBIEZ");

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
    msg.setTimeStamp(0.539877145331);
    msg.setSource(19175U);
    msg.setSourceEntity(245U);
    msg.setDestination(12885U);
    msg.setDestinationEntity(218U);
    msg.value.assign("ZGAPYSFWIBFPPRFUYZLLBMFIZMGOQLMCMOSLHGUBNRXNTQNOIDWZIKVYBXJYJFOMKHWXYJMTKTHETVVKKAPGGIXASNFQBGKWZVLGPJDRKSAHPXBYHWSWPXAEMCLVEWYXJRROOEGUVDINCUJWSZCSR");

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
    msg.setTimeStamp(0.477796449226);
    msg.setSource(64251U);
    msg.setSourceEntity(242U);
    msg.setDestination(59030U);
    msg.setDestinationEntity(103U);
    const char tmp_msg_0[] = {26, 95, -76, 15, 114, -10, 22, 78, 38, -6, -46, 117, -8, 1, -126, -117, -73, -19, 27, 72, 94, -77, 20, 107, 36, -9, 14, -124, 122, 17, 75, 24, 74, -36, 66, -84, -74, -49, 69, 108, -66, -127, -79, -122, -49, -51, 18, 92, -12, -96, 28, -78, -77, -36, -115, -60, 53, -46, 79, 64, 75, 102, 74, 112, -125, -38, 45, -123, 87, -82, -38, -92, 18, 94, 21, 33, -101, -6, 40, 118, 103, -119, 120, -62, -57, -54, -2, 103, 55, 116, -26, 29, 53, 0, -43, -82, -105, -29, 44, 97, 61, -23, 93, -90, 45, -29, -92, 73, 1, 73, -10, 94, 106, 43, -126, 15, -114, -28, 20, 57, 57, -11, 62, 81, 46, -120, 33, -7, -88, -45, -70, -21, 100, -4, 55, -72, 28, 94, -81, -62, -14, 81};
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
    msg.setTimeStamp(0.652747355784);
    msg.setSource(46912U);
    msg.setSourceEntity(167U);
    msg.setDestination(17516U);
    msg.setDestinationEntity(211U);
    const char tmp_msg_0[] = {-72, 88, 22, 107, -105, 117, 4, -110, 3, -98, -52, -92, 85, -68, 38, 11, -128, -106, -54, 74, 78, 125, 3, -92, -73, -45, 14, 1, 42, -124, 37, 70, -20, 20, -116, 29, 88, 37, -91, 70, 86, -76, -16, 114, -97, 112, -95, -1, -72, -102, 20, -105, -11, -127, -123, 99, -48, -100, 63, -1, 122, -115, -67, -69, 118, -23, 4, -118, 78, -17, -56, 97, 67, 28, 1, 49, -34, -70, -107, -8, 8, -61, 31, 107, 11, 24, 116, -98, -91, 110, 12, 65, 54, -80, 96, 102, -108, -56, 44, 46, 101, 46, -45, -121, -61, -52, 100, 59, 86, 98, -7, 64, 113, 113, -80, -14, 89, 16, 29, -6, 25, -9, -76, -32, 85, -116, -102, -126, -31, 22, 81, -40, -111, 4, 110, 58, -104, 45, 83, -32, -128, 84, -120, -74, -28, -90, -45, -33, -103, -121, -72, 23, -104, 94, 115, -19, -61, -65, 101, -117, 73, -69, -51, 3, -123, -75, -66, -41, 51, 64, -91, -67, 80, 52, -14, -111, -9, -22, 1, -67, 9, -47, -24, 119, -44, -7, 80, 32, -74, 89, -100, -53, -62, -3, -3, 3, -112, -67, 2, 13, -60, -56, 22};
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
    msg.setTimeStamp(0.0389703649161);
    msg.setSource(36105U);
    msg.setSourceEntity(204U);
    msg.setDestination(23266U);
    msg.setDestinationEntity(213U);
    const char tmp_msg_0[] = {-84, -127, 81, 48, -2, 77, -94, -93, 88, -38, -121, 99, 11, -109, -69, 92, -123, -112, 119, -2, 33, -88, 87, 23, 27, -117, 55, 18, 81, -86, 29, -81, 71, 8, -46, -36, 110, 20, -14, 16, 11, -35, 83, 76, -104, -76, -56};
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
    msg.setTimeStamp(0.567985419059);
    msg.setSource(58623U);
    msg.setSourceEntity(151U);
    msg.setDestination(33690U);
    msg.setDestinationEntity(33U);
    msg.value = 0.259362907636;

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
    msg.setTimeStamp(0.0450029487538);
    msg.setSource(24460U);
    msg.setSourceEntity(199U);
    msg.setDestination(58470U);
    msg.setDestinationEntity(72U);
    msg.value = 0.788486693941;

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
    msg.setTimeStamp(0.562246558823);
    msg.setSource(26259U);
    msg.setSourceEntity(211U);
    msg.setDestination(44782U);
    msg.setDestinationEntity(144U);
    msg.value = 0.515488913323;

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
    msg.setTimeStamp(0.0861259004852);
    msg.setSource(30483U);
    msg.setSourceEntity(212U);
    msg.setDestination(49582U);
    msg.setDestinationEntity(66U);
    msg.type = 85U;
    msg.frequency = 2685349694U;
    msg.min_range = 14523U;
    msg.max_range = 46640U;
    msg.bits_per_point = 167U;
    msg.scale_factor = 0.19431924254;
    const char tmp_msg_0[] = {3, 70, 75, -14, -77, 125, 97, 38, 56, -117, 97, -15};
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
    msg.setTimeStamp(0.258955048495);
    msg.setSource(58366U);
    msg.setSourceEntity(166U);
    msg.setDestination(35121U);
    msg.setDestinationEntity(30U);
    msg.type = 97U;
    msg.frequency = 4259584425U;
    msg.min_range = 54568U;
    msg.max_range = 16747U;
    msg.bits_per_point = 89U;
    msg.scale_factor = 0.406360090228;
    const char tmp_msg_0[] = {-19, -12, -89, -63, 124, -66, 7, 102, 40, -125, -41, 19, -61, -110, 17, -3, -16, -115, 8, -67, -82, 69, 51, 66, 96, -17, -123, 12, -40, 14, -89, 7, -31, 13, 56, -81, 68, 70, -98, -57, -44, -92, -80, -69, 103, 58, 88, -52, -44, -36, -10, 45, -5, 60, 71, 114, 87, -29, 0, 64, -83, 77, 41, -4, -28, 116, -86, 80, -1, -65, 109, -6, 41, 78, -31, 43, 78, 86, 48, -111, 70, 112, -54, 48, 72, 13, 49, -93, 107, -42, 123, 35, 59, 94, -41, 107, 8, -6, -76, 31, 53, 31, 97, -32, 93, 124, -52, -5, 46, 87, 80, 116, 25, 74, 108, -123, 75, 98, -40, 96, -5, -74, -85, -58, 83, 63, -90, -29, 96, -105, 58, 81, 25, 25};
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
    msg.setTimeStamp(0.749535492121);
    msg.setSource(2445U);
    msg.setSourceEntity(190U);
    msg.setDestination(58705U);
    msg.setDestinationEntity(44U);
    msg.type = 135U;
    msg.frequency = 1033856364U;
    msg.min_range = 25675U;
    msg.max_range = 6177U;
    msg.bits_per_point = 97U;
    msg.scale_factor = 0.537024020308;
    const char tmp_msg_0[] = {56, 46, -37, 115, 34, -103, 5, -22, -70, 120, 31, -47, -78, -7, 30, 41, 79, -37, -126, -21, 94, -43, 105, 27, -35, 22, -28, 101, -110, -3, -82, -24, 85, -50, 80, 121, 9, 54, -7, 28, -51, 96, 120, -108, 97, -86, -108, 9, -122, -4, -74, -94, 87, 61, -64, 85, -15, -35, -101, -82, 42, -30, 22, 24, -127, -69, -70, -55, -66, -40, 59, 67, 105, 38, 123, -43, -46, 37, 15, -17, 123, 23, 46, 115, -50, 124, -96, -23, -35, 63, 106, 76, -91, 117, 1, -58, -60, 78, -79, -31, 28, 100, -108, -84, -21, 51, 22, -17, -23, 66, 62, 14, -105, 64, -104, 44, -68, 29, 27, -92, 21};
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
    msg.setTimeStamp(0.599942595905);
    msg.setSource(59400U);
    msg.setSourceEntity(105U);
    msg.setDestination(2963U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.551550456796);
    msg.setSource(18107U);
    msg.setSourceEntity(160U);
    msg.setDestination(61835U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.575942084617);
    msg.setSource(30665U);
    msg.setSourceEntity(180U);
    msg.setDestination(8764U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.0183822729507);
    msg.setSource(22216U);
    msg.setSourceEntity(244U);
    msg.setDestination(9574U);
    msg.setDestinationEntity(72U);
    msg.op = 106U;

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
    msg.setTimeStamp(0.869992127167);
    msg.setSource(7898U);
    msg.setSourceEntity(63U);
    msg.setDestination(22875U);
    msg.setDestinationEntity(184U);
    msg.op = 26U;

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
    msg.setTimeStamp(0.523010428303);
    msg.setSource(49994U);
    msg.setSourceEntity(180U);
    msg.setDestination(5919U);
    msg.setDestinationEntity(31U);
    msg.op = 85U;

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
    msg.setTimeStamp(0.0545557377113);
    msg.setSource(45294U);
    msg.setSourceEntity(5U);
    msg.setDestination(533U);
    msg.setDestinationEntity(22U);
    msg.value = 0.969797582494;
    msg.confidence = 0.772831435789;
    msg.opmodes.assign("WFFVMZUHZWPRJJOBZAAJGWNOIMHINYHISHOXMHUPVLTWJBEDUABTULCLGBKXAIOSDUQPVXYKUOYNMIZTCGKYLJAQPBLPHREIHYNSBRERKFTXECRWBXUHCCLYZYDQISMPOBQRVGXMCXMATKWOGIKATQAUXNPEWKGMLOAANGHZHY");

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
    msg.setTimeStamp(0.549511959158);
    msg.setSource(27808U);
    msg.setSourceEntity(143U);
    msg.setDestination(48799U);
    msg.setDestinationEntity(229U);
    msg.value = 0.752717507924;
    msg.confidence = 0.967309518077;
    msg.opmodes.assign("FAFHIIELHVJEUSDQPHBZGXKOFRTYAWGYOIZYSTWNXRMWPQSLFOJNUSYBEZXWCRINCJKHLKNNPCJYIHRQDUEYZMXINXQLQGWEJSBAZDLAQTAPFKRN");

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
    msg.setTimeStamp(0.578855592558);
    msg.setSource(55471U);
    msg.setSourceEntity(219U);
    msg.setDestination(23803U);
    msg.setDestinationEntity(30U);
    msg.value = 0.331818020675;
    msg.confidence = 0.744065376193;
    msg.opmodes.assign("DRRSKZMIYDXBICMORADAOAEVKHHXTVCEDNFKHQLJISVHGFBZXPKUVZLWBUAUXHLKLFGUYMCETZPVKXUNRCXQFBQPWGNAIUENFNMOPYIDCEATRLDALNJWDYJJNRRQHZSVYWZJQRXLFGKQLLGWCQCZVHJMFOMYGVOOLIMISHTVHXEQPPGPKDHM");

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
    msg.setTimeStamp(0.276087857291);
    msg.setSource(28894U);
    msg.setSourceEntity(188U);
    msg.setDestination(16860U);
    msg.setDestinationEntity(103U);
    msg.itow = 2103636006U;
    msg.lat = 0.749661629247;
    msg.lon = 0.73385518179;
    msg.height_ell = 0.21631608663;
    msg.height_sea = 0.291381227118;
    msg.hacc = 0.0656829422404;
    msg.vacc = 0.399089640499;
    msg.vel_n = 0.608931743663;
    msg.vel_e = 0.286445544815;
    msg.vel_d = 0.861955872348;
    msg.speed = 0.627071019216;
    msg.gspeed = 0.404863065292;
    msg.heading = 0.0965354536149;
    msg.sacc = 0.0727071904546;
    msg.cacc = 0.80680587062;

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
    msg.setTimeStamp(0.732459974929);
    msg.setSource(65024U);
    msg.setSourceEntity(27U);
    msg.setDestination(40907U);
    msg.setDestinationEntity(213U);
    msg.itow = 4250273896U;
    msg.lat = 0.850524234552;
    msg.lon = 0.315222218686;
    msg.height_ell = 0.559524703787;
    msg.height_sea = 0.224771320793;
    msg.hacc = 0.731818930379;
    msg.vacc = 0.827304852925;
    msg.vel_n = 0.262033098092;
    msg.vel_e = 0.516442926284;
    msg.vel_d = 0.463913397444;
    msg.speed = 0.413637094957;
    msg.gspeed = 0.0076076458392;
    msg.heading = 0.44775250819;
    msg.sacc = 0.768391672912;
    msg.cacc = 0.87079059577;

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
    msg.setTimeStamp(0.180489533978);
    msg.setSource(60988U);
    msg.setSourceEntity(163U);
    msg.setDestination(13453U);
    msg.setDestinationEntity(4U);
    msg.itow = 48530871U;
    msg.lat = 0.58501065763;
    msg.lon = 0.813750268257;
    msg.height_ell = 0.379954639547;
    msg.height_sea = 0.187052152025;
    msg.hacc = 0.115602634311;
    msg.vacc = 0.562493482935;
    msg.vel_n = 0.361330336199;
    msg.vel_e = 0.48526367108;
    msg.vel_d = 0.472824845256;
    msg.speed = 0.648607117303;
    msg.gspeed = 0.893088493941;
    msg.heading = 0.645417497413;
    msg.sacc = 0.0161333377237;
    msg.cacc = 0.646379596987;

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
    msg.setTimeStamp(0.61939035014);
    msg.setSource(17637U);
    msg.setSourceEntity(148U);
    msg.setDestination(63310U);
    msg.setDestinationEntity(65U);
    msg.id = 112U;
    msg.value = 0.994692792151;

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
    msg.setTimeStamp(0.589107291653);
    msg.setSource(9987U);
    msg.setSourceEntity(1U);
    msg.setDestination(18014U);
    msg.setDestinationEntity(95U);
    msg.id = 58U;
    msg.value = 0.117161133047;

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
    msg.setTimeStamp(0.323976988771);
    msg.setSource(19596U);
    msg.setSourceEntity(183U);
    msg.setDestination(41220U);
    msg.setDestinationEntity(160U);
    msg.id = 228U;
    msg.value = 0.114638016841;

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
    msg.setTimeStamp(0.856958688348);
    msg.setSource(18933U);
    msg.setSourceEntity(47U);
    msg.setDestination(42641U);
    msg.setDestinationEntity(0U);
    msg.x = 0.257709151917;
    msg.y = 0.058289747664;
    msg.z = 0.748938610519;
    msg.phi = 0.219591355971;
    msg.theta = 0.885929907995;
    msg.psi = 0.77467554567;

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
    msg.setTimeStamp(0.44189399973);
    msg.setSource(54264U);
    msg.setSourceEntity(216U);
    msg.setDestination(19669U);
    msg.setDestinationEntity(126U);
    msg.x = 0.532554261424;
    msg.y = 0.163073532628;
    msg.z = 0.884157085643;
    msg.phi = 0.8376612284;
    msg.theta = 0.180035906072;
    msg.psi = 0.421613514259;

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
    msg.setTimeStamp(0.534266262408);
    msg.setSource(45339U);
    msg.setSourceEntity(72U);
    msg.setDestination(15797U);
    msg.setDestinationEntity(104U);
    msg.x = 0.480780476701;
    msg.y = 0.0569487888463;
    msg.z = 0.893064576539;
    msg.phi = 0.882573782028;
    msg.theta = 0.137747351199;
    msg.psi = 0.0681451518298;

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
    msg.setTimeStamp(0.492087932401);
    msg.setSource(8592U);
    msg.setSourceEntity(141U);
    msg.setDestination(26228U);
    msg.setDestinationEntity(47U);
    msg.beam_width = 0.168256546153;
    msg.beam_height = 0.403624532739;

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
    msg.setTimeStamp(0.949030148985);
    msg.setSource(38614U);
    msg.setSourceEntity(228U);
    msg.setDestination(54655U);
    msg.setDestinationEntity(114U);
    msg.beam_width = 0.746683603326;
    msg.beam_height = 0.612491071543;

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
    msg.setTimeStamp(0.772356171853);
    msg.setSource(60419U);
    msg.setSourceEntity(191U);
    msg.setDestination(19237U);
    msg.setDestinationEntity(171U);
    msg.beam_width = 0.609632596338;
    msg.beam_height = 0.0712053076941;

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
    msg.setTimeStamp(0.955965452812);
    msg.setSource(52934U);
    msg.setSourceEntity(124U);
    msg.setDestination(129U);
    msg.setDestinationEntity(11U);
    msg.sane = 249U;

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
    msg.setTimeStamp(0.881133201272);
    msg.setSource(9421U);
    msg.setSourceEntity(32U);
    msg.setDestination(23191U);
    msg.setDestinationEntity(61U);
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
    msg.setTimeStamp(0.145310206959);
    msg.setSource(39292U);
    msg.setSourceEntity(240U);
    msg.setDestination(55324U);
    msg.setDestinationEntity(225U);
    msg.sane = 152U;

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
    msg.setTimeStamp(0.0282867358182);
    msg.setSource(3960U);
    msg.setSourceEntity(2U);
    msg.setDestination(57905U);
    msg.setDestinationEntity(248U);
    msg.value = 0.930194553373;

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
    msg.setTimeStamp(0.19449014878);
    msg.setSource(62549U);
    msg.setSourceEntity(204U);
    msg.setDestination(41193U);
    msg.setDestinationEntity(90U);
    msg.value = 0.64996617287;

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
    msg.setTimeStamp(0.677985174205);
    msg.setSource(27971U);
    msg.setSourceEntity(27U);
    msg.setDestination(13549U);
    msg.setDestinationEntity(154U);
    msg.value = 0.362331715696;

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
    msg.setTimeStamp(0.268935080231);
    msg.setSource(40563U);
    msg.setSourceEntity(40U);
    msg.setDestination(52196U);
    msg.setDestinationEntity(90U);
    msg.value = 0.0359407330201;

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
    msg.setTimeStamp(0.725681453895);
    msg.setSource(1231U);
    msg.setSourceEntity(29U);
    msg.setDestination(37419U);
    msg.setDestinationEntity(133U);
    msg.value = 0.689564055716;

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
    msg.setTimeStamp(0.581019464412);
    msg.setSource(32369U);
    msg.setSourceEntity(79U);
    msg.setDestination(48307U);
    msg.setDestinationEntity(143U);
    msg.value = 0.579022256149;

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
    msg.setTimeStamp(0.16896269601);
    msg.setSource(52790U);
    msg.setSourceEntity(75U);
    msg.setDestination(10767U);
    msg.setDestinationEntity(134U);
    msg.value = 0.488466158557;

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
    msg.setTimeStamp(0.385286899426);
    msg.setSource(15658U);
    msg.setSourceEntity(93U);
    msg.setDestination(16173U);
    msg.setDestinationEntity(207U);
    msg.value = 0.200047535069;

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
    msg.setTimeStamp(0.147265770087);
    msg.setSource(10562U);
    msg.setSourceEntity(132U);
    msg.setDestination(16624U);
    msg.setDestinationEntity(70U);
    msg.value = 0.112397195877;

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
    msg.setTimeStamp(0.927880343916);
    msg.setSource(3753U);
    msg.setSourceEntity(242U);
    msg.setDestination(7593U);
    msg.setDestinationEntity(113U);
    msg.value = 0.285025520223;

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
    msg.setTimeStamp(0.372268217263);
    msg.setSource(53628U);
    msg.setSourceEntity(93U);
    msg.setDestination(41779U);
    msg.setDestinationEntity(73U);
    msg.value = 0.117036699577;

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
    msg.setTimeStamp(0.745592883212);
    msg.setSource(51232U);
    msg.setSourceEntity(72U);
    msg.setDestination(9096U);
    msg.setDestinationEntity(27U);
    msg.value = 0.361732732438;

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
    msg.setTimeStamp(0.675447762358);
    msg.setSource(19991U);
    msg.setSourceEntity(17U);
    msg.setDestination(7879U);
    msg.setDestinationEntity(10U);
    msg.value = 0.157546681355;

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
    msg.setTimeStamp(0.116353314524);
    msg.setSource(21712U);
    msg.setSourceEntity(81U);
    msg.setDestination(59115U);
    msg.setDestinationEntity(152U);
    msg.value = 0.967731606833;

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
    msg.setTimeStamp(0.884247213798);
    msg.setSource(18161U);
    msg.setSourceEntity(46U);
    msg.setDestination(13760U);
    msg.setDestinationEntity(158U);
    msg.value = 0.075417740966;

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
    msg.setTimeStamp(0.052868392447);
    msg.setSource(3944U);
    msg.setSourceEntity(188U);
    msg.setDestination(42809U);
    msg.setDestinationEntity(58U);
    msg.value = 0.915649905681;

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
    msg.setTimeStamp(0.77469810316);
    msg.setSource(36044U);
    msg.setSourceEntity(38U);
    msg.setDestination(7411U);
    msg.setDestinationEntity(81U);
    msg.value = 0.0396843776671;

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
    msg.setTimeStamp(0.82433534208);
    msg.setSource(23791U);
    msg.setSourceEntity(141U);
    msg.setDestination(24268U);
    msg.setDestinationEntity(33U);
    msg.value = 0.0113894627737;

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
    msg.setTimeStamp(0.265183658706);
    msg.setSource(64752U);
    msg.setSourceEntity(125U);
    msg.setDestination(17029U);
    msg.setDestinationEntity(173U);
    msg.value = 0.324185480801;

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
    msg.setTimeStamp(0.00112024872843);
    msg.setSource(7915U);
    msg.setSourceEntity(52U);
    msg.setDestination(55817U);
    msg.setDestinationEntity(210U);
    msg.value = 0.665097273198;

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
    msg.setTimeStamp(0.9127097624);
    msg.setSource(23890U);
    msg.setSourceEntity(155U);
    msg.setDestination(38690U);
    msg.setDestinationEntity(19U);
    msg.value = 0.665983235413;

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
    msg.setTimeStamp(0.0747973393241);
    msg.setSource(30692U);
    msg.setSourceEntity(22U);
    msg.setDestination(62867U);
    msg.setDestinationEntity(128U);
    msg.value = 0.165987789881;

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
    msg.setTimeStamp(0.527268871064);
    msg.setSource(8060U);
    msg.setSourceEntity(10U);
    msg.setDestination(49909U);
    msg.setDestinationEntity(172U);
    msg.value = 0.0995840341633;

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
    msg.setTimeStamp(0.667687963278);
    msg.setSource(37009U);
    msg.setSourceEntity(234U);
    msg.setDestination(28695U);
    msg.setDestinationEntity(14U);
    msg.value = 0.337481920482;

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
    msg.setTimeStamp(0.771215716323);
    msg.setSource(16129U);
    msg.setSourceEntity(40U);
    msg.setDestination(19442U);
    msg.setDestinationEntity(32U);
    msg.validity = 49697U;
    msg.type = 10U;
    msg.tow = 2694582195U;
    msg.base_lat = 0.465061134708;
    msg.base_lon = 0.0117715868916;
    msg.base_height = 0.461465532271;
    msg.n = 0.680235245916;
    msg.e = 0.872558131885;
    msg.d = 0.973368050548;
    msg.v_n = 0.925737331187;
    msg.v_e = 0.671405793442;
    msg.v_d = 0.447146173908;
    msg.satellites = 144U;
    msg.iar_hyp = 64379U;
    msg.iar_ratio = 0.584334415595;

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
    msg.setTimeStamp(0.856207473613);
    msg.setSource(35993U);
    msg.setSourceEntity(21U);
    msg.setDestination(36745U);
    msg.setDestinationEntity(47U);
    msg.validity = 47032U;
    msg.type = 249U;
    msg.tow = 3374802974U;
    msg.base_lat = 0.692183155719;
    msg.base_lon = 0.126201402003;
    msg.base_height = 0.407989386471;
    msg.n = 0.693120344106;
    msg.e = 0.696082292843;
    msg.d = 0.262468848649;
    msg.v_n = 0.783388562029;
    msg.v_e = 0.716864536037;
    msg.v_d = 0.484741566063;
    msg.satellites = 246U;
    msg.iar_hyp = 24635U;
    msg.iar_ratio = 0.455975965724;

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
    msg.setTimeStamp(0.0855693875949);
    msg.setSource(4335U);
    msg.setSourceEntity(108U);
    msg.setDestination(19260U);
    msg.setDestinationEntity(233U);
    msg.validity = 45830U;
    msg.type = 39U;
    msg.tow = 4203806723U;
    msg.base_lat = 0.0875776586928;
    msg.base_lon = 0.156884093909;
    msg.base_height = 0.242343805014;
    msg.n = 0.0870201381615;
    msg.e = 0.158602323099;
    msg.d = 0.574280728214;
    msg.v_n = 0.445939023988;
    msg.v_e = 0.504531326861;
    msg.v_d = 0.168037299385;
    msg.satellites = 151U;
    msg.iar_hyp = 20488U;
    msg.iar_ratio = 0.700529493298;

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
    msg.setTimeStamp(0.381303847549);
    msg.setSource(53071U);
    msg.setSourceEntity(159U);
    msg.setDestination(12870U);
    msg.setDestinationEntity(197U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.406439845699;
    tmp_msg_0.lon = 0.213394948483;
    tmp_msg_0.height = 0.0558639092653;
    tmp_msg_0.x = 0.39836408241;
    tmp_msg_0.y = 0.237589572363;
    tmp_msg_0.z = 0.0967936440844;
    tmp_msg_0.phi = 0.643954862765;
    tmp_msg_0.theta = 0.0393849658549;
    tmp_msg_0.psi = 0.562688208856;
    tmp_msg_0.u = 0.340804986565;
    tmp_msg_0.v = 0.810656540696;
    tmp_msg_0.w = 0.0573122323873;
    tmp_msg_0.vx = 0.516757199875;
    tmp_msg_0.vy = 0.613701492706;
    tmp_msg_0.vz = 0.819946884807;
    tmp_msg_0.p = 0.889784823786;
    tmp_msg_0.q = 0.262266027266;
    tmp_msg_0.r = 0.462820261254;
    tmp_msg_0.depth = 0.901355447503;
    tmp_msg_0.alt = 0.335368110907;
    msg.state.set(tmp_msg_0);
    msg.type = 125U;

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
    msg.setTimeStamp(0.708654863919);
    msg.setSource(43692U);
    msg.setSourceEntity(81U);
    msg.setDestination(35299U);
    msg.setDestinationEntity(62U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.97050013361;
    tmp_msg_0.lon = 0.211434585036;
    tmp_msg_0.height = 0.760224933373;
    tmp_msg_0.x = 0.553660970687;
    tmp_msg_0.y = 0.858181358273;
    tmp_msg_0.z = 0.614331124917;
    tmp_msg_0.phi = 0.52818237489;
    tmp_msg_0.theta = 0.716871748548;
    tmp_msg_0.psi = 0.501048605201;
    tmp_msg_0.u = 0.169730937542;
    tmp_msg_0.v = 0.286409854274;
    tmp_msg_0.w = 0.783019727291;
    tmp_msg_0.vx = 0.382976595596;
    tmp_msg_0.vy = 0.696477082902;
    tmp_msg_0.vz = 0.874090865549;
    tmp_msg_0.p = 0.599063272833;
    tmp_msg_0.q = 0.508171729829;
    tmp_msg_0.r = 0.615372717259;
    tmp_msg_0.depth = 0.129640005249;
    tmp_msg_0.alt = 0.338789950891;
    msg.state.set(tmp_msg_0);
    msg.type = 121U;

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
    msg.setTimeStamp(0.176731815146);
    msg.setSource(64407U);
    msg.setSourceEntity(62U);
    msg.setDestination(28055U);
    msg.setDestinationEntity(178U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.161623222676;
    tmp_msg_0.lon = 0.856641535189;
    tmp_msg_0.height = 0.963615892341;
    tmp_msg_0.x = 0.332590749096;
    tmp_msg_0.y = 0.0263343453637;
    tmp_msg_0.z = 0.552404606985;
    tmp_msg_0.phi = 0.798866932227;
    tmp_msg_0.theta = 0.328292542108;
    tmp_msg_0.psi = 0.0150003953811;
    tmp_msg_0.u = 0.631109627768;
    tmp_msg_0.v = 0.452876840056;
    tmp_msg_0.w = 0.295845127257;
    tmp_msg_0.vx = 0.272292986251;
    tmp_msg_0.vy = 0.165921014185;
    tmp_msg_0.vz = 0.114297896299;
    tmp_msg_0.p = 0.931249703589;
    tmp_msg_0.q = 0.725386049921;
    tmp_msg_0.r = 0.0831597981506;
    tmp_msg_0.depth = 0.11830603855;
    tmp_msg_0.alt = 0.946887749221;
    msg.state.set(tmp_msg_0);
    msg.type = 230U;

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
    msg.setTimeStamp(0.00620006454235);
    msg.setSource(13897U);
    msg.setSourceEntity(114U);
    msg.setDestination(11159U);
    msg.setDestinationEntity(7U);
    msg.value = 0.253340652891;

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
    msg.setTimeStamp(0.963068090521);
    msg.setSource(37704U);
    msg.setSourceEntity(24U);
    msg.setDestination(64416U);
    msg.setDestinationEntity(62U);
    msg.value = 0.463374599419;

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
    msg.setTimeStamp(0.828771906857);
    msg.setSource(19879U);
    msg.setSourceEntity(209U);
    msg.setDestination(48053U);
    msg.setDestinationEntity(201U);
    msg.value = 0.787179264911;

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
    msg.setTimeStamp(0.0360970685115);
    msg.setSource(45003U);
    msg.setSourceEntity(200U);
    msg.setDestination(26308U);
    msg.setDestinationEntity(161U);
    msg.value = 0.504983983778;

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
    msg.setTimeStamp(0.463541292851);
    msg.setSource(46715U);
    msg.setSourceEntity(183U);
    msg.setDestination(50309U);
    msg.setDestinationEntity(238U);
    msg.value = 0.537941163139;

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
    msg.setTimeStamp(0.815269371682);
    msg.setSource(11394U);
    msg.setSourceEntity(43U);
    msg.setDestination(11336U);
    msg.setDestinationEntity(246U);
    msg.value = 0.0923936249153;

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
    msg.setTimeStamp(0.952132990765);
    msg.setSource(47893U);
    msg.setSourceEntity(208U);
    msg.setDestination(57513U);
    msg.setDestinationEntity(77U);
    msg.value = 0.164984498878;

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
    msg.setTimeStamp(0.952481219385);
    msg.setSource(16311U);
    msg.setSourceEntity(146U);
    msg.setDestination(21916U);
    msg.setDestinationEntity(108U);
    msg.value = 0.712761782822;

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
    msg.setTimeStamp(0.128042386352);
    msg.setSource(32008U);
    msg.setSourceEntity(26U);
    msg.setDestination(45509U);
    msg.setDestinationEntity(191U);
    msg.value = 0.583770041343;

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
    msg.setTimeStamp(0.354180318812);
    msg.setSource(43818U);
    msg.setSourceEntity(105U);
    msg.setDestination(59672U);
    msg.setDestinationEntity(66U);
    msg.value = 0.625739599181;

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
    msg.setTimeStamp(0.475420015203);
    msg.setSource(48521U);
    msg.setSourceEntity(2U);
    msg.setDestination(282U);
    msg.setDestinationEntity(85U);
    msg.value = 0.431485386395;

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
    msg.setTimeStamp(0.356905031444);
    msg.setSource(57530U);
    msg.setSourceEntity(170U);
    msg.setDestination(27585U);
    msg.setDestinationEntity(30U);
    msg.value = 0.150768779653;

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
    msg.setTimeStamp(0.531040776415);
    msg.setSource(31606U);
    msg.setSourceEntity(77U);
    msg.setDestination(26481U);
    msg.setDestinationEntity(13U);
    msg.value = 0.135768748726;

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
    msg.setTimeStamp(0.137579604102);
    msg.setSource(38232U);
    msg.setSourceEntity(231U);
    msg.setDestination(30966U);
    msg.setDestinationEntity(166U);
    msg.value = 0.819994758989;

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
    msg.setTimeStamp(0.0397727004917);
    msg.setSource(44248U);
    msg.setSourceEntity(102U);
    msg.setDestination(50717U);
    msg.setDestinationEntity(159U);
    msg.value = 0.568613193321;

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
    msg.setTimeStamp(0.997333916789);
    msg.setSource(39975U);
    msg.setSourceEntity(132U);
    msg.setDestination(5465U);
    msg.setDestinationEntity(125U);
    msg.id = 252U;
    msg.zoom = 109U;
    msg.action = 1U;

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
    msg.setTimeStamp(0.549625362792);
    msg.setSource(34279U);
    msg.setSourceEntity(175U);
    msg.setDestination(22544U);
    msg.setDestinationEntity(62U);
    msg.id = 35U;
    msg.zoom = 244U;
    msg.action = 33U;

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
    msg.setTimeStamp(0.104102132383);
    msg.setSource(258U);
    msg.setSourceEntity(133U);
    msg.setDestination(2014U);
    msg.setDestinationEntity(10U);
    msg.id = 77U;
    msg.zoom = 2U;
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
    msg.setTimeStamp(0.171219352559);
    msg.setSource(40771U);
    msg.setSourceEntity(46U);
    msg.setDestination(45619U);
    msg.setDestinationEntity(174U);
    msg.id = 2U;
    msg.value = 0.300889790406;

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
    msg.setTimeStamp(0.278680636756);
    msg.setSource(21799U);
    msg.setSourceEntity(138U);
    msg.setDestination(30962U);
    msg.setDestinationEntity(1U);
    msg.id = 56U;
    msg.value = 0.899710226753;

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
    msg.setTimeStamp(0.743929872754);
    msg.setSource(44076U);
    msg.setSourceEntity(30U);
    msg.setDestination(19728U);
    msg.setDestinationEntity(0U);
    msg.id = 44U;
    msg.value = 0.00224384653488;

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
    msg.setTimeStamp(0.568428361387);
    msg.setSource(5971U);
    msg.setSourceEntity(136U);
    msg.setDestination(3263U);
    msg.setDestinationEntity(252U);
    msg.id = 33U;
    msg.value = 0.514852648926;

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
    msg.setTimeStamp(0.884479694259);
    msg.setSource(1065U);
    msg.setSourceEntity(234U);
    msg.setDestination(58974U);
    msg.setDestinationEntity(134U);
    msg.id = 33U;
    msg.value = 0.0110643673247;

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
    msg.setTimeStamp(0.990943856591);
    msg.setSource(22009U);
    msg.setSourceEntity(121U);
    msg.setDestination(15937U);
    msg.setDestinationEntity(5U);
    msg.id = 1U;
    msg.value = 0.852401016019;

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
    msg.setTimeStamp(0.301242225731);
    msg.setSource(5639U);
    msg.setSourceEntity(208U);
    msg.setDestination(23903U);
    msg.setDestinationEntity(144U);
    msg.id = 142U;
    msg.angle = 0.687287026597;

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
    msg.setTimeStamp(0.0245584231507);
    msg.setSource(55845U);
    msg.setSourceEntity(98U);
    msg.setDestination(15912U);
    msg.setDestinationEntity(127U);
    msg.id = 153U;
    msg.angle = 0.930244356002;

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
    msg.setTimeStamp(0.0800825204645);
    msg.setSource(11179U);
    msg.setSourceEntity(218U);
    msg.setDestination(51328U);
    msg.setDestinationEntity(32U);
    msg.id = 41U;
    msg.angle = 0.128748628119;

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
    msg.setTimeStamp(0.885261822354);
    msg.setSource(28216U);
    msg.setSourceEntity(82U);
    msg.setDestination(5207U);
    msg.setDestinationEntity(94U);
    msg.op = 9U;
    msg.actions.assign("LBCACNMJPETPJLFICWUSXSRSBOHWULXXTQZLWXZUWRERZZSSNGMVBEHAEMNUAYEHIWTMDZEGSIAPRKYPVHYDHRSCKPDSNDXOJVXZVRARAGWYVLUFAVDQJILONWFYRGBKUWRQJCLAIBYMEJMTIAOQVXT");

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
    msg.setTimeStamp(0.538929363121);
    msg.setSource(26804U);
    msg.setSourceEntity(166U);
    msg.setDestination(12583U);
    msg.setDestinationEntity(6U);
    msg.op = 67U;
    msg.actions.assign("WFOGVAYEZVQOEDSTYIGPDEWFOWCCXMGVAQKNSYHTEAQIWBQNUNCCXBUWTYULN");

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
    msg.setTimeStamp(0.184084082246);
    msg.setSource(6566U);
    msg.setSourceEntity(10U);
    msg.setDestination(52382U);
    msg.setDestinationEntity(179U);
    msg.op = 39U;
    msg.actions.assign("IANLTSHXUYSTMMSDNYHDDFWDUTKNUCIBZJJQXKOSEKQETSZAMHGAWPIWVWZLYRQJHGFFWKIWGPOBVVMEEZEHKIMAPLUZFRQQUCZDWLIXFUNWPKALLQWJPGRFPKBLSBSZXVUMQMNYNLXGQAIYFZBIOTI");

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
    msg.setTimeStamp(0.0248339409583);
    msg.setSource(769U);
    msg.setSourceEntity(170U);
    msg.setDestination(55167U);
    msg.setDestinationEntity(53U);
    msg.actions.assign("BCKNMOJMBEWSUYGNZDBCLWJDSJXLALWMXWGHTBULRFLJAQTXCYSVOSRBMTODEUKSBZXFYSYHSFKIIWOSYJGFGJQMYYWZFTAPFQSEVABNJIVIRXPEPKTQCKKESARMBVOHDVHDVKNXFLCPNCUHIBWIOZDGICXTNFVEFVAZQMU");

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
    msg.setTimeStamp(0.0531259578586);
    msg.setSource(41662U);
    msg.setSourceEntity(25U);
    msg.setDestination(44379U);
    msg.setDestinationEntity(132U);
    msg.actions.assign("XOZGGGUZVCDEBMCSWTTNNOYJASAWZNFUQMOHVMVABUOETIYEXHIGKBCLZALPCAFEDZLYWUFRPOEDACDJCFGKSSLYYCANAWIIQMTWXRPPBBXRFOTUFCCWQXUJHKSKVEKSRKXBVGXHZNBDKFIDMSSQSZQEPHJCNMJMHDILIUJUXRQFDGVPGWKKBOQMVRNWVENUJHFNLAJKRTJQYBVLRPHEZZYTQ");

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
    msg.setTimeStamp(0.446305025671);
    msg.setSource(31672U);
    msg.setSourceEntity(10U);
    msg.setDestination(3038U);
    msg.setDestinationEntity(63U);
    msg.actions.assign("DRSERGXAKSYMICHNCPFBLTGCZACDVHJDCYENYLKQCCTHUGGFIASPMBIPMRVDTOKEECOOOYNJZBJGBWNGSBKFTETYWBJYRJQHI");

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
    msg.setTimeStamp(0.504056807582);
    msg.setSource(61070U);
    msg.setSourceEntity(252U);
    msg.setDestination(13638U);
    msg.setDestinationEntity(233U);
    msg.button = 70U;
    msg.value = 62U;

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
    msg.setTimeStamp(0.327941299063);
    msg.setSource(20038U);
    msg.setSourceEntity(72U);
    msg.setDestination(4315U);
    msg.setDestinationEntity(2U);
    msg.button = 199U;
    msg.value = 135U;

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
    msg.setTimeStamp(0.351920028994);
    msg.setSource(34596U);
    msg.setSourceEntity(162U);
    msg.setDestination(47833U);
    msg.setDestinationEntity(203U);
    msg.button = 186U;
    msg.value = 19U;

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
    msg.setTimeStamp(0.817550556258);
    msg.setSource(57167U);
    msg.setSourceEntity(41U);
    msg.setDestination(49285U);
    msg.setDestinationEntity(93U);
    msg.op = 87U;
    msg.text.assign("RBAOQRHFXOOYKAFEMUQLHGVMSWRHMHOIWUALHYRKCYEADJBOHQEFXAORXJWGIMSGKOJNRUVWTOBSYKJIHNITUJXJEPPPNNPZELJ");

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
    msg.setTimeStamp(0.451200216044);
    msg.setSource(38186U);
    msg.setSourceEntity(116U);
    msg.setDestination(39821U);
    msg.setDestinationEntity(96U);
    msg.op = 29U;
    msg.text.assign("DDEVSWYUSFRKAGVOFLYFVZHNNELNFJQRTAXQQYHJCLUKUJYMOYDOQXLHIBGRVROWGKIWPXPWIZIZPWTVAVESXITGMUWJEPZYGWQFKBAYEZCRKDPEOYQCMFPMOAUNGAQHLXGHIPNSWCKZSAXKHNTCPLTSSRXWDUIZ");

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
    msg.setTimeStamp(0.358910176431);
    msg.setSource(14381U);
    msg.setSourceEntity(115U);
    msg.setDestination(3421U);
    msg.setDestinationEntity(183U);
    msg.op = 168U;
    msg.text.assign("LPLRXYWMAUNYXSCUHWYZOHHCWUTNBTXDOSBNUQLMDARFBNMFZOHENDLIPJJDEQYYWGEUCSFEZQRPMJEQQZJZBHMNYCLGTRCOPTMTULODUHKCBEBAVLBNAFPKSTOTIGZJRATFICVFHKCDQYBZIRFIQPKRFVWQIJOAHKXOEGCMJEINRTXXXDDSGADLSBIWAONXKPKDSJPIVWUESGEJBMYXFZGSYKVKAQSIKGJZFNVPAYTXVZWVPGWMHU");

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
    msg.setTimeStamp(0.613844852899);
    msg.setSource(7225U);
    msg.setSourceEntity(93U);
    msg.setDestination(2939U);
    msg.setDestinationEntity(67U);
    msg.op = 170U;
    msg.time_remain = 0.212157633241;
    msg.sched_time = 0.996404504649;

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
    msg.setTimeStamp(0.508237961381);
    msg.setSource(39788U);
    msg.setSourceEntity(18U);
    msg.setDestination(12453U);
    msg.setDestinationEntity(117U);
    msg.op = 16U;
    msg.time_remain = 0.0364555077814;
    msg.sched_time = 0.500995797062;

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
    msg.setTimeStamp(0.83585115689);
    msg.setSource(60318U);
    msg.setSourceEntity(124U);
    msg.setDestination(38502U);
    msg.setDestinationEntity(61U);
    msg.op = 199U;
    msg.time_remain = 0.234741222002;
    msg.sched_time = 0.291234636352;

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
    msg.setTimeStamp(0.602557490926);
    msg.setSource(35195U);
    msg.setSourceEntity(197U);
    msg.setDestination(26503U);
    msg.setDestinationEntity(77U);
    msg.name.assign("BYQLFNDAHKNYCIGXHEQCAJLVKIXTMGDBHKKIRKMDSZYFYWCLKHMTGPPFERPEMVNQNBOZFUFWLJSCCUVGOAQQMRODKXBPDIDIPVNJLWHAMVHHTKMLWBQXJAQRQZXCFXTSEVNZWJZJDWJGFDCAOITENCMPDGRIBBHRSSYLNVYPWFFEJXOWUROEGTGKAYYQZMETZPRPHURWUNHQPZBITIXLTCNSAVFYSRGBIOG");
    msg.op = 208U;
    msg.sched_time = 0.874542390562;

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
    msg.setTimeStamp(0.726667115222);
    msg.setSource(51921U);
    msg.setSourceEntity(85U);
    msg.setDestination(43451U);
    msg.setDestinationEntity(80U);
    msg.name.assign("NGLRJCKZDXWWCAQBQZIFGIIZUHNJVMOIDJVXDSFLMHIDVVTKXBCSIVVWEFKPAJQFBRCNZLIJFASSTKQFKSNPJRELDTBTSRMYQPGPXKMUXHXBZYFPIXMHKZTMYEXMUQYONFPDERBHTRZAOQUFCRWEBCPGWRQCIYIAMWYUVJPCX");
    msg.op = 245U;
    msg.sched_time = 0.387900801896;

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
    msg.setTimeStamp(0.409071704229);
    msg.setSource(37536U);
    msg.setSourceEntity(27U);
    msg.setDestination(40259U);
    msg.setDestinationEntity(55U);
    msg.name.assign("SVHKBZIFLVBZIKVEMMWEXBXDYROHXTNVTXJRAUFYEGEVSIJLWUCZGTWULQPIDYZGRDFZXIFXATHALAUBAEVKZVYBISLHXWODYCSNCMQEVUXEWOJKJUOOBDRKMCDFBJNHHUCHJVFQLTUQRIRGJAMSOOSQZBKQQNOPSTGDIMYAHUHPLMCCSNWRQIWXTUYSHYZWKGBDJCONQKMEFCPPNTNDTINWJLGPTRFYQYPGRMKPLA");
    msg.op = 166U;
    msg.sched_time = 0.0210127959339;

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
    msg.setTimeStamp(0.299527933426);
    msg.setSource(2744U);
    msg.setSourceEntity(209U);
    msg.setDestination(13313U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.389287945212);
    msg.setSource(60420U);
    msg.setSourceEntity(88U);
    msg.setDestination(63945U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.492043794756);
    msg.setSource(26344U);
    msg.setSourceEntity(37U);
    msg.setDestination(52484U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.163689250274);
    msg.setSource(43860U);
    msg.setSourceEntity(229U);
    msg.setDestination(26128U);
    msg.setDestinationEntity(214U);
    msg.name.assign("YWWCINHGPHNB");
    msg.state = 166U;

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
    msg.setTimeStamp(0.835459945973);
    msg.setSource(44138U);
    msg.setSourceEntity(49U);
    msg.setDestination(11843U);
    msg.setDestinationEntity(117U);
    msg.name.assign("SWAGHGWVBSFKLQEJDEMSKRNVZWDBQZFYAOCNXZIJGPMOUQPCVDBXHFBMRDRTXQUTLKYOHXSHEHAANMJGZLPJQWKUITDMWLZHZVFIAQPSNIVRUXTMJZJQSZXCVBKGZTSCXGEFYIODYGLQYPJUKFFMWFKIIMXLVRWHNPYTICERANJBYPNWLDFJBABROCBEVMUSADPLVYSVCLSTER");
    msg.state = 7U;

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
    msg.setTimeStamp(0.869053194443);
    msg.setSource(29854U);
    msg.setSourceEntity(204U);
    msg.setDestination(5652U);
    msg.setDestinationEntity(17U);
    msg.name.assign("WXDPUTMASRRDYITMTZQAANLMNEVCRJPRMHCLPPTNLZEXSPWBC");
    msg.state = 35U;

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
    msg.setTimeStamp(0.520475174319);
    msg.setSource(24957U);
    msg.setSourceEntity(114U);
    msg.setDestination(62994U);
    msg.setDestinationEntity(58U);
    msg.name.assign("FRGHDOUHAGXQCUEDYUSAKGUTSLFBETMYTZACPMJOFDNLBIRYZRBRYAQYECJJEKKNLEJJOXUBIACFDLYLNLKCUIH");
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
    msg.setTimeStamp(0.042700301072);
    msg.setSource(56491U);
    msg.setSourceEntity(78U);
    msg.setDestination(56129U);
    msg.setDestinationEntity(85U);
    msg.name.assign("GUZNHOVRHSDZWTMNQQJBCJPBFLWSMYZEPEDRJEPPMOTVKINHJTQYOCZNHWKNJAAPSYQBFTZTNWUKUYMRAUASUTHNFTLGWDHUQIWQBRGAFTHPMVADAGQXBJHOOKMWOWDGXXPAVASFGIPIMKCALDFXWZRTBSMUKEFXJXJYNRUVBQHLOCRGOCZVFOEBDXITDGUJUSZGEV");
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
    msg.setTimeStamp(0.805376987673);
    msg.setSource(13757U);
    msg.setSourceEntity(83U);
    msg.setDestination(55924U);
    msg.setDestinationEntity(90U);
    msg.name.assign("SLZPKSBZCTJTHIYDWGLEWWQKMNBYBFEOCPII");
    msg.value = 208U;

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
    msg.setTimeStamp(0.235726418671);
    msg.setSource(40361U);
    msg.setSourceEntity(220U);
    msg.setDestination(13679U);
    msg.setDestinationEntity(57U);
    msg.name.assign("JNYQPOKQSPFRRLIYUC");

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
    msg.setTimeStamp(0.00105483279279);
    msg.setSource(34906U);
    msg.setSourceEntity(40U);
    msg.setDestination(7452U);
    msg.setDestinationEntity(253U);
    msg.name.assign("VYOTBLQHPFXQGVMHWSWBMAJGNKVEPKOCSJNTIPDKWUFCSICRINYUDNIQITEGVZXMQULESRRWHBHHUZEKEMQBKFBGKPKZYFCLHOAOEVDBEGJVGIRWFMIKXHOLAZWPCHTXDGTQJPXOU");

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
    msg.setTimeStamp(0.310575229107);
    msg.setSource(2865U);
    msg.setSourceEntity(254U);
    msg.setDestination(16003U);
    msg.setDestinationEntity(139U);
    msg.name.assign("RXEXMREWGUJGPCXRQUVELOHALCKYWGXVQQGSYPCSKODBXNLGTCAAIMDIKICEWYSFAHPFRDMDFFISZBBXEHYTTCFMTBFVJBEMQVBANDCLYSDWUWYLKAYGZNOKZELIZXWTYUOVMWTTDROZEZGVALGDGFNVBZPBSXJOJYPHLEQRZPSNWMQJUQTMQJYPCNU");

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
    msg.setTimeStamp(0.318217503589);
    msg.setSource(50641U);
    msg.setSourceEntity(242U);
    msg.setDestination(23754U);
    msg.setDestinationEntity(61U);
    msg.name.assign("MNHDHOYDYVSQJSPBPDIJKIFUFNAMRZOGOMSWGDXTFIVXVKEZTXKQWIDYYLFRIWOKRBBZTETVCLTTACGQPFIAZDACVKLXEDAWALKMUDBSZRIOFUSOMFZFXZRQEHGAPFCYTJUVSH");
    msg.value = 146U;

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
    msg.setTimeStamp(0.153221882783);
    msg.setSource(64705U);
    msg.setSourceEntity(9U);
    msg.setDestination(41153U);
    msg.setDestinationEntity(15U);
    msg.name.assign("MOWRISCZWYRXJZLUGWOMKSAQLWPWPOFIXTCLQXAFOTKUTJAHDBETKCVQDWMZYKLHMVVVOIXCDQXFQMHZEUNFKJATDDPBVHOJYEOPUMRTVHXYNCHBRRAYGLBFDVMTGPUMOLSIYZZEGWLSUIRGONSRCRGSFVHZKQHIXHKXJWWDALJNTNJVESGCPBUNXCMFISJJDBXNGZUDMJGSBYWQFEQIRFPLK");
    msg.value = 141U;

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
    msg.setTimeStamp(0.186891016406);
    msg.setSource(35447U);
    msg.setSourceEntity(216U);
    msg.setDestination(18845U);
    msg.setDestinationEntity(170U);
    msg.name.assign("MFDJCLKNZXCZIGEUTQNYLXSCCENOSYBVCTATSEICNAHQAFZWDQGHOIKYRTVJBSHEEORQPKRHYIHKQMZJBWEIKRSKXMJRUQBMSUAHGDUOVMZVTJRXPRGFPEVYGLOOZFEVJFXUTXWFXXADKPATRIJUVXGKLDPWGQZQWFMLYNHZVRBZMANCLSDULNAFUJMBTUISQK");
    msg.value = 84U;

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
    msg.setTimeStamp(0.82271204144);
    msg.setSource(43618U);
    msg.setSourceEntity(129U);
    msg.setDestination(28684U);
    msg.setDestinationEntity(218U);
    msg.id = 18U;
    msg.period = 2193055949U;
    msg.duty_cycle = 3078580335U;

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
    msg.setTimeStamp(0.586210679092);
    msg.setSource(35741U);
    msg.setSourceEntity(11U);
    msg.setDestination(7970U);
    msg.setDestinationEntity(85U);
    msg.id = 115U;
    msg.period = 2115807523U;
    msg.duty_cycle = 2858419102U;

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
    msg.setTimeStamp(0.430609165485);
    msg.setSource(11023U);
    msg.setSourceEntity(120U);
    msg.setDestination(51445U);
    msg.setDestinationEntity(172U);
    msg.id = 53U;
    msg.period = 3047988687U;
    msg.duty_cycle = 4061623444U;

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
    msg.setTimeStamp(0.737432613077);
    msg.setSource(14627U);
    msg.setSourceEntity(34U);
    msg.setDestination(23055U);
    msg.setDestinationEntity(145U);
    msg.id = 149U;
    msg.period = 1150564025U;
    msg.duty_cycle = 4197453623U;

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
    msg.setTimeStamp(0.477444781952);
    msg.setSource(24154U);
    msg.setSourceEntity(231U);
    msg.setDestination(36582U);
    msg.setDestinationEntity(196U);
    msg.id = 83U;
    msg.period = 2203613682U;
    msg.duty_cycle = 4196076397U;

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
    msg.setTimeStamp(0.657117354779);
    msg.setSource(15536U);
    msg.setSourceEntity(157U);
    msg.setDestination(42146U);
    msg.setDestinationEntity(156U);
    msg.id = 79U;
    msg.period = 2611152284U;
    msg.duty_cycle = 3103125259U;

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
    msg.setTimeStamp(0.52399681081);
    msg.setSource(58724U);
    msg.setSourceEntity(213U);
    msg.setDestination(7025U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.999418899889;
    msg.lon = 0.0302373581612;
    msg.height = 0.910850549272;
    msg.x = 0.503473879776;
    msg.y = 0.781881177392;
    msg.z = 0.176943918791;
    msg.phi = 0.270451039559;
    msg.theta = 0.616432211539;
    msg.psi = 0.0821576554388;
    msg.u = 0.851661366336;
    msg.v = 0.119789200956;
    msg.w = 0.0522314210078;
    msg.vx = 0.724371099755;
    msg.vy = 0.668987438378;
    msg.vz = 0.390785577194;
    msg.p = 0.996380917101;
    msg.q = 0.371396670863;
    msg.r = 0.0938415231364;
    msg.depth = 0.639726972587;
    msg.alt = 0.556698087492;

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
    msg.setTimeStamp(0.884693898732);
    msg.setSource(20218U);
    msg.setSourceEntity(115U);
    msg.setDestination(689U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.265601255666;
    msg.lon = 0.605323484821;
    msg.height = 0.976216164509;
    msg.x = 0.393298851995;
    msg.y = 0.483945674918;
    msg.z = 0.543664920438;
    msg.phi = 0.832664566564;
    msg.theta = 0.797990956149;
    msg.psi = 0.866821599524;
    msg.u = 0.860059186961;
    msg.v = 0.335880736478;
    msg.w = 0.297597281707;
    msg.vx = 0.0583402418042;
    msg.vy = 0.92176692757;
    msg.vz = 0.203468217052;
    msg.p = 0.175587158153;
    msg.q = 0.0152010117951;
    msg.r = 0.560193063135;
    msg.depth = 0.509392826152;
    msg.alt = 0.272489898169;

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
    msg.setTimeStamp(0.255214247935);
    msg.setSource(40692U);
    msg.setSourceEntity(135U);
    msg.setDestination(13282U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.750071667649;
    msg.lon = 0.250763247848;
    msg.height = 0.52228226696;
    msg.x = 0.280064644238;
    msg.y = 0.0465166773463;
    msg.z = 0.196416249568;
    msg.phi = 0.493911628483;
    msg.theta = 0.496125127884;
    msg.psi = 0.452345018992;
    msg.u = 0.345619753817;
    msg.v = 0.798969667531;
    msg.w = 0.777791979144;
    msg.vx = 0.0674447558706;
    msg.vy = 0.740320824052;
    msg.vz = 0.491655616689;
    msg.p = 0.119350482096;
    msg.q = 0.10541267266;
    msg.r = 0.766254319215;
    msg.depth = 0.377302975705;
    msg.alt = 0.142992206244;

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
    msg.setTimeStamp(0.131206063569);
    msg.setSource(39799U);
    msg.setSourceEntity(52U);
    msg.setDestination(43017U);
    msg.setDestinationEntity(102U);
    msg.x = 0.867338219977;
    msg.y = 0.0510421972707;
    msg.z = 0.046676620321;

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
    msg.setTimeStamp(0.403262411373);
    msg.setSource(61881U);
    msg.setSourceEntity(239U);
    msg.setDestination(56499U);
    msg.setDestinationEntity(215U);
    msg.x = 0.123979098968;
    msg.y = 0.326768557169;
    msg.z = 0.0713405053378;

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
    msg.setTimeStamp(0.411873881264);
    msg.setSource(35519U);
    msg.setSourceEntity(226U);
    msg.setDestination(32118U);
    msg.setDestinationEntity(65U);
    msg.x = 0.314822479904;
    msg.y = 0.645018869125;
    msg.z = 0.699875331725;

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
    msg.setTimeStamp(0.820669106477);
    msg.setSource(31124U);
    msg.setSourceEntity(103U);
    msg.setDestination(3567U);
    msg.setDestinationEntity(202U);
    msg.value = 0.697610765587;

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
    msg.setTimeStamp(0.912886214352);
    msg.setSource(15396U);
    msg.setSourceEntity(250U);
    msg.setDestination(37090U);
    msg.setDestinationEntity(87U);
    msg.value = 0.544394648825;

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
    msg.setTimeStamp(0.167238380088);
    msg.setSource(32129U);
    msg.setSourceEntity(119U);
    msg.setDestination(42787U);
    msg.setDestinationEntity(182U);
    msg.value = 0.996856182448;

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
    msg.setTimeStamp(0.372276386616);
    msg.setSource(20784U);
    msg.setSourceEntity(78U);
    msg.setDestination(59697U);
    msg.setDestinationEntity(141U);
    msg.value = 0.0612886341918;

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
    msg.setTimeStamp(0.637076594512);
    msg.setSource(4441U);
    msg.setSourceEntity(145U);
    msg.setDestination(19329U);
    msg.setDestinationEntity(139U);
    msg.value = 0.402388836213;

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
    msg.setTimeStamp(0.198811055908);
    msg.setSource(43688U);
    msg.setSourceEntity(72U);
    msg.setDestination(53690U);
    msg.setDestinationEntity(244U);
    msg.value = 0.177403884334;

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
    msg.setTimeStamp(0.0758599686561);
    msg.setSource(52294U);
    msg.setSourceEntity(152U);
    msg.setDestination(57528U);
    msg.setDestinationEntity(238U);
    msg.x = 0.551771136294;
    msg.y = 0.274393479995;
    msg.z = 0.242853115354;
    msg.phi = 0.497768448192;
    msg.theta = 0.990585985739;
    msg.psi = 0.696521383692;
    msg.p = 0.588712409643;
    msg.q = 0.920207344752;
    msg.r = 0.961145027413;
    msg.u = 0.788747788331;
    msg.v = 0.2879435768;
    msg.w = 0.0968340001147;
    msg.bias_psi = 0.271404546983;
    msg.bias_r = 0.57314730809;

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
    msg.setTimeStamp(0.786912108654);
    msg.setSource(58253U);
    msg.setSourceEntity(119U);
    msg.setDestination(29580U);
    msg.setDestinationEntity(38U);
    msg.x = 0.766007419393;
    msg.y = 0.212537524112;
    msg.z = 0.352283373461;
    msg.phi = 0.686082087504;
    msg.theta = 0.576956236237;
    msg.psi = 0.0960812046135;
    msg.p = 0.601900417975;
    msg.q = 0.319227352708;
    msg.r = 0.673539613402;
    msg.u = 0.24213719094;
    msg.v = 0.506788070178;
    msg.w = 0.823498408629;
    msg.bias_psi = 0.202337188758;
    msg.bias_r = 0.295136314748;

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
    msg.setTimeStamp(0.391742049135);
    msg.setSource(22422U);
    msg.setSourceEntity(115U);
    msg.setDestination(9103U);
    msg.setDestinationEntity(96U);
    msg.x = 0.584519009333;
    msg.y = 0.759222696861;
    msg.z = 0.545593173584;
    msg.phi = 0.252503890448;
    msg.theta = 0.240230368955;
    msg.psi = 0.355168158593;
    msg.p = 0.390119216601;
    msg.q = 0.142407973905;
    msg.r = 0.0677198491112;
    msg.u = 0.630379851887;
    msg.v = 0.144037306885;
    msg.w = 0.641790254602;
    msg.bias_psi = 0.574737602972;
    msg.bias_r = 0.918807584315;

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
    msg.setTimeStamp(0.693975581539);
    msg.setSource(1618U);
    msg.setSourceEntity(63U);
    msg.setDestination(26606U);
    msg.setDestinationEntity(101U);
    msg.bias_psi = 0.0593525586014;
    msg.bias_r = 0.760535294992;
    msg.cog = 0.750428352731;
    msg.cyaw = 0.010719096171;
    msg.lbl_rej_level = 0.321732311642;
    msg.gps_rej_level = 0.259883819039;
    msg.custom_x = 0.319119723687;
    msg.custom_y = 0.315126441284;
    msg.custom_z = 0.186249538669;

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
    msg.setTimeStamp(0.891745464544);
    msg.setSource(25218U);
    msg.setSourceEntity(214U);
    msg.setDestination(768U);
    msg.setDestinationEntity(102U);
    msg.bias_psi = 0.455139686712;
    msg.bias_r = 0.276699436817;
    msg.cog = 0.475392913265;
    msg.cyaw = 0.713433673924;
    msg.lbl_rej_level = 0.296355209373;
    msg.gps_rej_level = 0.514268842506;
    msg.custom_x = 0.700384855549;
    msg.custom_y = 0.378417696334;
    msg.custom_z = 0.549145637164;

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
    msg.setTimeStamp(0.194935608377);
    msg.setSource(59227U);
    msg.setSourceEntity(177U);
    msg.setDestination(45447U);
    msg.setDestinationEntity(121U);
    msg.bias_psi = 0.332384756637;
    msg.bias_r = 0.0600439647682;
    msg.cog = 0.829444401577;
    msg.cyaw = 0.524195524148;
    msg.lbl_rej_level = 0.0612637926669;
    msg.gps_rej_level = 0.468041100336;
    msg.custom_x = 0.0544082902547;
    msg.custom_y = 0.287942736935;
    msg.custom_z = 0.535116013615;

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
    msg.setTimeStamp(0.674452627191);
    msg.setSource(40465U);
    msg.setSourceEntity(241U);
    msg.setDestination(40672U);
    msg.setDestinationEntity(246U);
    msg.utc_time = 0.968090754298;
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
    msg.setTimeStamp(0.792143578439);
    msg.setSource(12416U);
    msg.setSourceEntity(182U);
    msg.setDestination(46610U);
    msg.setDestinationEntity(189U);
    msg.utc_time = 0.467572241477;
    msg.reason = 188U;

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
    msg.setTimeStamp(0.415130010802);
    msg.setSource(35964U);
    msg.setSourceEntity(65U);
    msg.setDestination(18697U);
    msg.setDestinationEntity(182U);
    msg.utc_time = 0.83066924905;
    msg.reason = 117U;

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
    msg.setTimeStamp(0.0401865180633);
    msg.setSource(50053U);
    msg.setSourceEntity(207U);
    msg.setDestination(20173U);
    msg.setDestinationEntity(106U);
    msg.id = 79U;
    msg.range = 0.67841355998;
    msg.acceptance = 16U;

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
    msg.setTimeStamp(0.817008839109);
    msg.setSource(13654U);
    msg.setSourceEntity(252U);
    msg.setDestination(57199U);
    msg.setDestinationEntity(3U);
    msg.id = 237U;
    msg.range = 0.0297947815472;
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
    msg.setTimeStamp(0.440312217314);
    msg.setSource(29432U);
    msg.setSourceEntity(38U);
    msg.setDestination(51284U);
    msg.setDestinationEntity(0U);
    msg.id = 206U;
    msg.range = 0.0918482094302;
    msg.acceptance = 230U;

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
    msg.setTimeStamp(0.784612382345);
    msg.setSource(19501U);
    msg.setSourceEntity(244U);
    msg.setDestination(13983U);
    msg.setDestinationEntity(229U);
    msg.type = 103U;
    msg.reason = 48U;
    msg.value = 0.313006339129;
    msg.timestep = 0.271761807872;

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
    msg.setTimeStamp(0.495766817108);
    msg.setSource(42388U);
    msg.setSourceEntity(54U);
    msg.setDestination(26820U);
    msg.setDestinationEntity(180U);
    msg.type = 13U;
    msg.reason = 239U;
    msg.value = 0.125530140319;
    msg.timestep = 0.316499599485;

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
    msg.setTimeStamp(0.0321641767064);
    msg.setSource(58022U);
    msg.setSourceEntity(85U);
    msg.setDestination(29361U);
    msg.setDestinationEntity(129U);
    msg.type = 206U;
    msg.reason = 104U;
    msg.value = 0.332272226571;
    msg.timestep = 0.741971386882;

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
    msg.setTimeStamp(0.721643383);
    msg.setSource(32187U);
    msg.setSourceEntity(96U);
    msg.setDestination(62112U);
    msg.setDestinationEntity(173U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PUSHOONQPVVCSAOOIYUWNMFLEZPCZGKVCHLUYUQCTVWJRHGRAJDTGKEMMWASKIPZARYKJWXFLHPSKFYFTIVZEBJFDLDJBHBZIGAKCDLDBWEFDAMIIMDHEXHNXEEXKEMTJKPISXRIGEWXTBMYFNDSYZUJOQBFAMUYGWZZSPSJW");
    tmp_msg_0.lat = 0.319437498707;
    tmp_msg_0.lon = 0.431670750829;
    tmp_msg_0.depth = 0.9500999239;
    tmp_msg_0.query_channel = 178U;
    tmp_msg_0.reply_channel = 7U;
    tmp_msg_0.transponder_delay = 171U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.522953323146;
    msg.y = 0.52963616576;
    msg.var_x = 0.440587994143;
    msg.var_y = 0.576758406285;
    msg.distance = 0.548125885643;

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
    msg.setTimeStamp(0.624767474222);
    msg.setSource(39084U);
    msg.setSourceEntity(226U);
    msg.setDestination(53325U);
    msg.setDestinationEntity(86U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TLWOYCRJOQNZHUJPIMMDNXITBEPQAGFNZJFUVLTJSAKOFEZFHZDHJNMZETFSGMNNXRKXOPQQHDZSQMZMDPCESMWJLL");
    tmp_msg_0.lat = 0.193965971055;
    tmp_msg_0.lon = 0.379024753901;
    tmp_msg_0.depth = 0.369571825706;
    tmp_msg_0.query_channel = 131U;
    tmp_msg_0.reply_channel = 47U;
    tmp_msg_0.transponder_delay = 15U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.983622047257;
    msg.y = 0.649981593351;
    msg.var_x = 0.347369332751;
    msg.var_y = 0.249742913773;
    msg.distance = 0.967347902986;

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
    msg.setTimeStamp(0.248964017704);
    msg.setSource(45314U);
    msg.setSourceEntity(97U);
    msg.setDestination(64315U);
    msg.setDestinationEntity(29U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SPGECPDROMWRKSZFJHLIEMKINVEYIGWCNQCXFMSAUJCUSHZBSJBPYPVUGAMOTDISADFYENPBDJWAWTMNRXTDFGRPKCILTHXVVBZZMVJBY");
    tmp_msg_0.lat = 0.427930668434;
    tmp_msg_0.lon = 0.995198578479;
    tmp_msg_0.depth = 0.464591649559;
    tmp_msg_0.query_channel = 149U;
    tmp_msg_0.reply_channel = 204U;
    tmp_msg_0.transponder_delay = 181U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.655344145173;
    msg.y = 0.598837778625;
    msg.var_x = 0.144667795903;
    msg.var_y = 0.936081556579;
    msg.distance = 0.387493506846;

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
    msg.setTimeStamp(0.639529540245);
    msg.setSource(6354U);
    msg.setSourceEntity(97U);
    msg.setDestination(50071U);
    msg.setDestinationEntity(101U);
    msg.state = 201U;

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
    msg.setTimeStamp(0.590758644932);
    msg.setSource(12642U);
    msg.setSourceEntity(199U);
    msg.setDestination(52157U);
    msg.setDestinationEntity(179U);
    msg.state = 131U;

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
    msg.setTimeStamp(0.503874618227);
    msg.setSource(15666U);
    msg.setSourceEntity(196U);
    msg.setDestination(2897U);
    msg.setDestinationEntity(182U);
    msg.state = 146U;

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
    msg.setTimeStamp(0.14075978556);
    msg.setSource(63437U);
    msg.setSourceEntity(83U);
    msg.setDestination(31929U);
    msg.setDestinationEntity(99U);
    msg.x = 0.571137457659;
    msg.y = 0.284227558203;
    msg.z = 0.952916336729;

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
    msg.setTimeStamp(0.47615876115);
    msg.setSource(26914U);
    msg.setSourceEntity(167U);
    msg.setDestination(5845U);
    msg.setDestinationEntity(1U);
    msg.x = 0.385233061751;
    msg.y = 0.111581760926;
    msg.z = 0.363768124908;

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
    msg.setTimeStamp(0.205981022006);
    msg.setSource(36404U);
    msg.setSourceEntity(182U);
    msg.setDestination(3345U);
    msg.setDestinationEntity(154U);
    msg.x = 0.0126422865039;
    msg.y = 0.323366450738;
    msg.z = 0.991533103551;

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
    msg.setTimeStamp(0.749610857886);
    msg.setSource(43131U);
    msg.setSourceEntity(199U);
    msg.setDestination(6650U);
    msg.setDestinationEntity(243U);
    msg.va = 0.195612853814;
    msg.aoa = 0.577326353213;
    msg.ssa = 0.818788527212;

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
    msg.setTimeStamp(0.181562197139);
    msg.setSource(51254U);
    msg.setSourceEntity(140U);
    msg.setDestination(46521U);
    msg.setDestinationEntity(37U);
    msg.va = 0.623954142511;
    msg.aoa = 0.332362933902;
    msg.ssa = 0.458356972779;

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
    msg.setTimeStamp(0.396754257951);
    msg.setSource(57342U);
    msg.setSourceEntity(224U);
    msg.setDestination(40194U);
    msg.setDestinationEntity(100U);
    msg.va = 0.731421933765;
    msg.aoa = 0.198697665712;
    msg.ssa = 0.631283841836;

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
    msg.setTimeStamp(0.782595285619);
    msg.setSource(53817U);
    msg.setSourceEntity(73U);
    msg.setDestination(15936U);
    msg.setDestinationEntity(31U);
    msg.value = 0.182108893931;

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
    msg.setTimeStamp(0.19848301817);
    msg.setSource(2604U);
    msg.setSourceEntity(156U);
    msg.setDestination(22708U);
    msg.setDestinationEntity(240U);
    msg.value = 0.354920324202;

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
    msg.setTimeStamp(0.714263401611);
    msg.setSource(4021U);
    msg.setSourceEntity(136U);
    msg.setDestination(30566U);
    msg.setDestinationEntity(26U);
    msg.value = 0.621587298776;

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
    msg.setTimeStamp(0.690458108604);
    msg.setSource(16747U);
    msg.setSourceEntity(217U);
    msg.setDestination(3433U);
    msg.setDestinationEntity(184U);
    msg.value = 0.126530571483;
    msg.z_units = 89U;

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
    msg.setTimeStamp(0.369389061962);
    msg.setSource(16060U);
    msg.setSourceEntity(236U);
    msg.setDestination(56483U);
    msg.setDestinationEntity(3U);
    msg.value = 0.262956111934;
    msg.z_units = 81U;

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
    msg.setTimeStamp(0.919730647922);
    msg.setSource(54871U);
    msg.setSourceEntity(49U);
    msg.setDestination(45945U);
    msg.setDestinationEntity(224U);
    msg.value = 0.914022189491;
    msg.z_units = 206U;

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
    msg.setTimeStamp(0.164761529643);
    msg.setSource(24506U);
    msg.setSourceEntity(247U);
    msg.setDestination(46443U);
    msg.setDestinationEntity(157U);
    msg.value = 0.839538254216;
    msg.speed_units = 166U;

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
    msg.setTimeStamp(0.528702591533);
    msg.setSource(60014U);
    msg.setSourceEntity(209U);
    msg.setDestination(20120U);
    msg.setDestinationEntity(89U);
    msg.value = 0.225310315668;
    msg.speed_units = 115U;

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
    msg.setTimeStamp(0.877962575948);
    msg.setSource(31500U);
    msg.setSourceEntity(149U);
    msg.setDestination(33641U);
    msg.setDestinationEntity(203U);
    msg.value = 0.886153149337;
    msg.speed_units = 140U;

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
    msg.setTimeStamp(0.966073062125);
    msg.setSource(63312U);
    msg.setSourceEntity(7U);
    msg.setDestination(50885U);
    msg.setDestinationEntity(100U);
    msg.value = 0.554871277431;

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
    msg.setTimeStamp(0.771952800604);
    msg.setSource(21288U);
    msg.setSourceEntity(180U);
    msg.setDestination(54104U);
    msg.setDestinationEntity(101U);
    msg.value = 0.940176172329;

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
    msg.setTimeStamp(0.392989139784);
    msg.setSource(15427U);
    msg.setSourceEntity(205U);
    msg.setDestination(45567U);
    msg.setDestinationEntity(226U);
    msg.value = 0.514238983943;

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
    msg.setTimeStamp(0.393610202942);
    msg.setSource(46211U);
    msg.setSourceEntity(43U);
    msg.setDestination(20253U);
    msg.setDestinationEntity(69U);
    msg.value = 0.647731386216;

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
    msg.setTimeStamp(0.8206986545);
    msg.setSource(5300U);
    msg.setSourceEntity(212U);
    msg.setDestination(60530U);
    msg.setDestinationEntity(92U);
    msg.value = 0.128776337301;

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
    msg.setTimeStamp(0.266057840197);
    msg.setSource(18539U);
    msg.setSourceEntity(171U);
    msg.setDestination(52985U);
    msg.setDestinationEntity(1U);
    msg.value = 0.199906650865;

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
    msg.setTimeStamp(0.637910506711);
    msg.setSource(20679U);
    msg.setSourceEntity(190U);
    msg.setDestination(61448U);
    msg.setDestinationEntity(90U);
    msg.value = 0.754298911867;

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
    msg.setTimeStamp(0.796146764867);
    msg.setSource(1027U);
    msg.setSourceEntity(182U);
    msg.setDestination(8726U);
    msg.setDestinationEntity(15U);
    msg.value = 0.270308065887;

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
    msg.setTimeStamp(0.014878929355);
    msg.setSource(7836U);
    msg.setSourceEntity(205U);
    msg.setDestination(51585U);
    msg.setDestinationEntity(80U);
    msg.value = 0.845870139526;

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
    msg.setTimeStamp(0.360735541979);
    msg.setSource(36336U);
    msg.setSourceEntity(60U);
    msg.setDestination(22959U);
    msg.setDestinationEntity(186U);
    msg.path_ref = 243492214U;
    msg.start_lat = 0.437630745934;
    msg.start_lon = 0.390137638811;
    msg.start_z = 0.755564500469;
    msg.start_z_units = 14U;
    msg.end_lat = 0.198714274928;
    msg.end_lon = 0.957771272864;
    msg.end_z = 0.29809102941;
    msg.end_z_units = 141U;
    msg.speed = 0.701866647772;
    msg.speed_units = 107U;
    msg.lradius = 0.287075585019;
    msg.flags = 244U;

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
    msg.setTimeStamp(0.067630625817);
    msg.setSource(47229U);
    msg.setSourceEntity(126U);
    msg.setDestination(31240U);
    msg.setDestinationEntity(214U);
    msg.path_ref = 861969575U;
    msg.start_lat = 0.224930746251;
    msg.start_lon = 0.645845069043;
    msg.start_z = 0.914430791105;
    msg.start_z_units = 189U;
    msg.end_lat = 0.587899981547;
    msg.end_lon = 0.129275180901;
    msg.end_z = 0.289046188222;
    msg.end_z_units = 120U;
    msg.speed = 0.696459453872;
    msg.speed_units = 33U;
    msg.lradius = 0.39967092062;
    msg.flags = 114U;

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
    msg.setTimeStamp(0.374048579994);
    msg.setSource(57455U);
    msg.setSourceEntity(235U);
    msg.setDestination(21408U);
    msg.setDestinationEntity(220U);
    msg.path_ref = 852731055U;
    msg.start_lat = 0.772049585076;
    msg.start_lon = 0.343223276627;
    msg.start_z = 0.623783069283;
    msg.start_z_units = 107U;
    msg.end_lat = 0.387014950254;
    msg.end_lon = 0.370168617373;
    msg.end_z = 0.0411747693016;
    msg.end_z_units = 98U;
    msg.speed = 0.985095545294;
    msg.speed_units = 149U;
    msg.lradius = 0.659713802682;
    msg.flags = 221U;

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
    msg.setTimeStamp(0.214485833019);
    msg.setSource(16343U);
    msg.setSourceEntity(95U);
    msg.setDestination(64985U);
    msg.setDestinationEntity(99U);
    msg.x = 0.968787905473;
    msg.y = 0.547722782983;
    msg.z = 0.873899286121;
    msg.k = 0.0413655850714;
    msg.m = 0.942246357821;
    msg.n = 0.344005041917;
    msg.flags = 13U;

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
    msg.setTimeStamp(0.241099748324);
    msg.setSource(20732U);
    msg.setSourceEntity(208U);
    msg.setDestination(45868U);
    msg.setDestinationEntity(155U);
    msg.x = 0.788409194771;
    msg.y = 0.587513586806;
    msg.z = 0.446205574541;
    msg.k = 0.377061381581;
    msg.m = 0.949975061793;
    msg.n = 0.923496132842;
    msg.flags = 167U;

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
    msg.setTimeStamp(0.305646001831);
    msg.setSource(10347U);
    msg.setSourceEntity(60U);
    msg.setDestination(41709U);
    msg.setDestinationEntity(210U);
    msg.x = 0.498102446425;
    msg.y = 0.120857429139;
    msg.z = 0.680147733437;
    msg.k = 0.429280480053;
    msg.m = 0.431985450795;
    msg.n = 0.641278518628;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.0870792938062);
    msg.setSource(30891U);
    msg.setSourceEntity(138U);
    msg.setDestination(9818U);
    msg.setDestinationEntity(19U);
    msg.value = 0.709169206318;

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
    msg.setTimeStamp(0.737660113498);
    msg.setSource(64357U);
    msg.setSourceEntity(46U);
    msg.setDestination(41950U);
    msg.setDestinationEntity(42U);
    msg.value = 0.279109320175;

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
    msg.setTimeStamp(0.399962298948);
    msg.setSource(63298U);
    msg.setSourceEntity(38U);
    msg.setDestination(22107U);
    msg.setDestinationEntity(247U);
    msg.value = 0.828328337622;

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
    msg.setTimeStamp(0.645175182437);
    msg.setSource(8998U);
    msg.setSourceEntity(192U);
    msg.setDestination(45316U);
    msg.setDestinationEntity(159U);
    msg.u = 0.779068216252;
    msg.v = 0.0854332168456;
    msg.w = 0.959218873393;
    msg.p = 0.058546169824;
    msg.q = 0.682550159694;
    msg.r = 0.250118165094;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.338472498612);
    msg.setSource(21253U);
    msg.setSourceEntity(226U);
    msg.setDestination(64310U);
    msg.setDestinationEntity(189U);
    msg.u = 0.659290911572;
    msg.v = 0.93864635018;
    msg.w = 0.367951453931;
    msg.p = 0.459155798598;
    msg.q = 0.270599406279;
    msg.r = 0.180702736829;
    msg.flags = 147U;

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
    msg.setTimeStamp(0.0409162373631);
    msg.setSource(10903U);
    msg.setSourceEntity(107U);
    msg.setDestination(28939U);
    msg.setDestinationEntity(170U);
    msg.u = 0.0690043174138;
    msg.v = 0.58680557432;
    msg.w = 0.625119387934;
    msg.p = 0.0455041668823;
    msg.q = 0.937257228993;
    msg.r = 0.514691498303;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.866064925797);
    msg.setSource(64240U);
    msg.setSourceEntity(253U);
    msg.setDestination(60333U);
    msg.setDestinationEntity(238U);
    msg.path_ref = 2814367857U;
    msg.start_lat = 0.554319605865;
    msg.start_lon = 0.712973953546;
    msg.start_z = 0.122546370873;
    msg.start_z_units = 6U;
    msg.end_lat = 0.133869168702;
    msg.end_lon = 0.940549760318;
    msg.end_z = 0.515553777261;
    msg.end_z_units = 182U;
    msg.lradius = 0.609597769471;
    msg.flags = 169U;
    msg.x = 0.540848413126;
    msg.y = 0.8980610477;
    msg.z = 0.359016563969;
    msg.vx = 0.459400985619;
    msg.vy = 0.381274221373;
    msg.vz = 0.118200200536;
    msg.course_error = 0.708928538017;
    msg.eta = 22150U;

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
    msg.setTimeStamp(0.129721868538);
    msg.setSource(16445U);
    msg.setSourceEntity(50U);
    msg.setDestination(22250U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 2964079479U;
    msg.start_lat = 0.733667560407;
    msg.start_lon = 0.733736670704;
    msg.start_z = 0.618825962949;
    msg.start_z_units = 198U;
    msg.end_lat = 0.885251429537;
    msg.end_lon = 0.635105961169;
    msg.end_z = 0.295983372345;
    msg.end_z_units = 106U;
    msg.lradius = 0.0584529253427;
    msg.flags = 108U;
    msg.x = 0.355374768994;
    msg.y = 0.710474344192;
    msg.z = 0.391986045909;
    msg.vx = 0.0176372827211;
    msg.vy = 0.868703291468;
    msg.vz = 0.163876369549;
    msg.course_error = 0.0203550863917;
    msg.eta = 2215U;

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
    msg.setTimeStamp(0.66110138177);
    msg.setSource(63957U);
    msg.setSourceEntity(54U);
    msg.setDestination(10748U);
    msg.setDestinationEntity(134U);
    msg.path_ref = 1409899970U;
    msg.start_lat = 0.0355825209811;
    msg.start_lon = 0.334525428119;
    msg.start_z = 0.452816129969;
    msg.start_z_units = 248U;
    msg.end_lat = 0.821983001071;
    msg.end_lon = 0.625172692792;
    msg.end_z = 0.0142320520676;
    msg.end_z_units = 5U;
    msg.lradius = 0.232597666219;
    msg.flags = 101U;
    msg.x = 0.135801052722;
    msg.y = 0.624715643103;
    msg.z = 0.424738203378;
    msg.vx = 0.551160981149;
    msg.vy = 0.659019217327;
    msg.vz = 0.752606532151;
    msg.course_error = 0.494896329089;
    msg.eta = 50855U;

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
    msg.setTimeStamp(0.752681478964);
    msg.setSource(26575U);
    msg.setSourceEntity(222U);
    msg.setDestination(57216U);
    msg.setDestinationEntity(90U);
    msg.k = 0.0650972596131;
    msg.m = 0.929315389549;
    msg.n = 0.154834367515;

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
    msg.setTimeStamp(0.395993697994);
    msg.setSource(51547U);
    msg.setSourceEntity(206U);
    msg.setDestination(30350U);
    msg.setDestinationEntity(78U);
    msg.k = 0.487494522046;
    msg.m = 0.588465051737;
    msg.n = 0.609124252724;

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
    msg.setTimeStamp(0.126334348861);
    msg.setSource(42917U);
    msg.setSourceEntity(119U);
    msg.setDestination(26857U);
    msg.setDestinationEntity(204U);
    msg.k = 0.853128887566;
    msg.m = 0.388440096854;
    msg.n = 0.219281750751;

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
    msg.setTimeStamp(0.732543668163);
    msg.setSource(6010U);
    msg.setSourceEntity(188U);
    msg.setDestination(52598U);
    msg.setDestinationEntity(35U);
    msg.p = 0.933208578783;
    msg.i = 0.767391056014;
    msg.d = 0.377114968419;
    msg.a = 0.561919693065;

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
    msg.setTimeStamp(0.268151776913);
    msg.setSource(48609U);
    msg.setSourceEntity(135U);
    msg.setDestination(63275U);
    msg.setDestinationEntity(55U);
    msg.p = 0.955118238151;
    msg.i = 0.290313564096;
    msg.d = 0.338722896308;
    msg.a = 0.691525116296;

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
    msg.setTimeStamp(0.879911659679);
    msg.setSource(18263U);
    msg.setSourceEntity(117U);
    msg.setDestination(9468U);
    msg.setDestinationEntity(87U);
    msg.p = 0.293704944448;
    msg.i = 0.17930836;
    msg.d = 0.507950175763;
    msg.a = 0.260228281672;

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
    msg.setTimeStamp(0.685839032139);
    msg.setSource(2260U);
    msg.setSourceEntity(216U);
    msg.setDestination(47891U);
    msg.setDestinationEntity(228U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.612593320733);
    msg.setSource(42420U);
    msg.setSourceEntity(119U);
    msg.setDestination(56726U);
    msg.setDestinationEntity(176U);
    msg.op = 83U;

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
    msg.setTimeStamp(0.262008826832);
    msg.setSource(46636U);
    msg.setSourceEntity(53U);
    msg.setDestination(36762U);
    msg.setDestinationEntity(88U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.477633970871);
    msg.setSource(26289U);
    msg.setSourceEntity(227U);
    msg.setDestination(46309U);
    msg.setDestinationEntity(236U);
    msg.x = 0.548315124351;
    msg.y = 0.442579734844;
    msg.z = 0.929456692195;
    msg.vx = 0.0387683021354;
    msg.vy = 0.532101368617;
    msg.vz = 0.118129625661;
    msg.ax = 0.606052105181;
    msg.ay = 0.5088170626;
    msg.az = 0.101841240007;
    msg.flags = 18223U;

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
    msg.setTimeStamp(0.233689451902);
    msg.setSource(10674U);
    msg.setSourceEntity(151U);
    msg.setDestination(31854U);
    msg.setDestinationEntity(164U);
    msg.x = 0.837356235838;
    msg.y = 0.553808978184;
    msg.z = 0.527593547064;
    msg.vx = 0.443882108182;
    msg.vy = 0.0520585130514;
    msg.vz = 0.663901486185;
    msg.ax = 0.610162769553;
    msg.ay = 0.614256513477;
    msg.az = 0.688020501282;
    msg.flags = 62796U;

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
    msg.setTimeStamp(0.138119309733);
    msg.setSource(54819U);
    msg.setSourceEntity(39U);
    msg.setDestination(57245U);
    msg.setDestinationEntity(135U);
    msg.x = 0.0525229590508;
    msg.y = 0.563111161209;
    msg.z = 0.0668510427211;
    msg.vx = 0.784832829509;
    msg.vy = 0.648271082744;
    msg.vz = 0.28537114948;
    msg.ax = 0.807456506804;
    msg.ay = 0.0316863863758;
    msg.az = 0.252121358994;
    msg.flags = 23832U;

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
    msg.setTimeStamp(0.0310578121701);
    msg.setSource(50514U);
    msg.setSourceEntity(58U);
    msg.setDestination(36485U);
    msg.setDestinationEntity(106U);
    msg.value = 0.301576267602;

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
    msg.setTimeStamp(0.39129371363);
    msg.setSource(44475U);
    msg.setSourceEntity(132U);
    msg.setDestination(20102U);
    msg.setDestinationEntity(113U);
    msg.value = 0.83646906999;

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
    msg.setTimeStamp(0.102417008524);
    msg.setSource(10106U);
    msg.setSourceEntity(22U);
    msg.setDestination(14963U);
    msg.setDestinationEntity(197U);
    msg.value = 0.460623164097;

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
    msg.setTimeStamp(0.765002863027);
    msg.setSource(50353U);
    msg.setSourceEntity(132U);
    msg.setDestination(41357U);
    msg.setDestinationEntity(0U);
    msg.timeout = 52373U;
    msg.lat = 0.0761122839882;
    msg.lon = 0.28701927793;
    msg.z = 0.370737915331;
    msg.z_units = 77U;
    msg.speed = 0.495981359246;
    msg.speed_units = 128U;
    msg.roll = 0.0700427096836;
    msg.pitch = 0.287375446398;
    msg.yaw = 0.630464997625;
    msg.custom.assign("YGLPWUXVGHBPTUSRWYCTDWLYIMPWTNZIJZJHMECEGHQVXMESVKTNCPFPYVSKMXESVBCOGOJWEARTLFEKZDJJINAPSBALROTDNAVAIZJXUYFRIKLINRDSHWOZYSXVEQ");

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
    msg.setTimeStamp(0.451581248428);
    msg.setSource(32821U);
    msg.setSourceEntity(88U);
    msg.setDestination(54496U);
    msg.setDestinationEntity(149U);
    msg.timeout = 51477U;
    msg.lat = 0.246776151516;
    msg.lon = 0.79984254671;
    msg.z = 0.0937525494259;
    msg.z_units = 57U;
    msg.speed = 0.673985436139;
    msg.speed_units = 54U;
    msg.roll = 0.966484270811;
    msg.pitch = 0.183179554828;
    msg.yaw = 0.112469467722;
    msg.custom.assign("MFOGMOJWWXJ");

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
    msg.setTimeStamp(0.716810014636);
    msg.setSource(19292U);
    msg.setSourceEntity(208U);
    msg.setDestination(47885U);
    msg.setDestinationEntity(119U);
    msg.timeout = 43444U;
    msg.lat = 0.534749273118;
    msg.lon = 0.605087693764;
    msg.z = 0.813020241635;
    msg.z_units = 155U;
    msg.speed = 0.424921858803;
    msg.speed_units = 65U;
    msg.roll = 0.864447324057;
    msg.pitch = 0.444607218139;
    msg.yaw = 0.479132383137;
    msg.custom.assign("KHBJZKXNBRNONOXCMRNIVXCRLXUIMJBVDZNSAPZQOBHPMCPSYCMXMBYFVZKVWXRQKGFEEXUMFVLFHQJDWCGVQZMEJQALSLOUNFBEGWHQIXGYEYWJJVATABYIPWGZZRN");

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
    msg.setTimeStamp(0.784245572777);
    msg.setSource(54031U);
    msg.setSourceEntity(156U);
    msg.setDestination(31717U);
    msg.setDestinationEntity(24U);
    msg.timeout = 27949U;
    msg.lat = 0.178562869726;
    msg.lon = 0.738963603515;
    msg.z = 0.624980082186;
    msg.z_units = 60U;
    msg.speed = 0.109410929778;
    msg.speed_units = 6U;
    msg.duration = 57032U;
    msg.radius = 0.357323974198;
    msg.flags = 203U;
    msg.custom.assign("YZJZMYSWXFAWHIEOQOCNKMQJCAORV");

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
    msg.setTimeStamp(0.396417424279);
    msg.setSource(34286U);
    msg.setSourceEntity(65U);
    msg.setDestination(42418U);
    msg.setDestinationEntity(76U);
    msg.timeout = 54444U;
    msg.lat = 0.398980997705;
    msg.lon = 0.35999172709;
    msg.z = 0.706567407359;
    msg.z_units = 176U;
    msg.speed = 0.292231741923;
    msg.speed_units = 203U;
    msg.duration = 17813U;
    msg.radius = 0.879516212965;
    msg.flags = 82U;
    msg.custom.assign("OWUAQHIKOHBQSOWWRCQROCUXLDJMMSUTCXQIXEEKMZOFKZXMKYWJHOTAZZYLGABNXRFJYNWPQDIZKTZDBOVTTSNRGYWJNDLIHHKNNMVREABVTIPNBXFXKSWUMFODQWPLEAYMVMXCUVPISHXDBFLCRYJVOVQJRUAASWPDPFECNIDVGBXNUBVYCFLIBLZZCMSGJQTQZGMELWULEFHNP");

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
    msg.setTimeStamp(0.140077892445);
    msg.setSource(47828U);
    msg.setSourceEntity(218U);
    msg.setDestination(50903U);
    msg.setDestinationEntity(44U);
    msg.timeout = 34223U;
    msg.lat = 0.0894287917385;
    msg.lon = 0.0415530071102;
    msg.z = 0.910771299174;
    msg.z_units = 48U;
    msg.speed = 0.379744711236;
    msg.speed_units = 22U;
    msg.duration = 51784U;
    msg.radius = 0.250534258467;
    msg.flags = 162U;
    msg.custom.assign("HBKTPHKBGGEADCJWSOWUHPSAGAARDOVIIBMPYSCWZFZYXRFUXARLDLESYNWSUBHBICVXDLCRDWKENGVXHFAPTEIOOBNYNTQZOZJPURDXJQXNRUNZDFFBLILKRCHTFAVGCYCIEWNJZLKFCHJVDHAVEEHJBEYWTVSMIKMRVIPSMAWSYQQOGBLTQDMXZWNMMQLTVTIGKRHI");

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
    msg.setTimeStamp(0.0838957104437);
    msg.setSource(27882U);
    msg.setSourceEntity(59U);
    msg.setDestination(2783U);
    msg.setDestinationEntity(154U);
    msg.custom.assign("LNIZOVBJHAXBNSQOFRRGHPCCYPUFFCUSAQNLGWXMMFCLFIXJRMPOEWRFEGTLEWJMGUIDHTSZMDMRKBSUBDIBSKSNJYHKOBNBJIPNWKXERDDPKLZJFRYQONZFKDNELTIYVYDXVIZXAOAGDXYMUHRIEBQURCOGOTEMTEHVEPHUCGWOXPDYYCETBTKWWZLLKGTQPHJZQSJSQMAGPTSQWZVYQIJZMRWXUADLJACAZKVNNVUACCVQYWVVGXA");

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
    msg.setTimeStamp(0.807090356961);
    msg.setSource(38407U);
    msg.setSourceEntity(251U);
    msg.setDestination(2134U);
    msg.setDestinationEntity(181U);
    msg.custom.assign("KXMVKBGQNCAXBILOLWVVANPNYTFZBLTVXSDOZQFDXALOOHWDBSVREQJYQFCCGXABITGQOKBGHBVQDDYDUFWEUXISRMETCPMHYNFHTUXYNHZKSQBFAREBMRYMADUWPWCUUNCLIXRKPZQIJLKHHNNPDMVT");

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
    msg.setTimeStamp(0.198024925299);
    msg.setSource(22670U);
    msg.setSourceEntity(26U);
    msg.setDestination(1675U);
    msg.setDestinationEntity(182U);
    msg.custom.assign("SMZILMRSMWJUPXOQKXLHNLFMHGNINVSXHUMDLJWGFCVRGCAODYHLETEKSSJQTBDQNCXHESYVXYGXVTQOQGCWZXDYYRCPRAALWIHWVAFLYZUTBGTMHOYFABRADDAZJNIFKNTRZZBXSYGRPEIQZFMESUQCYNBUOKTZWOFWUOPEPXDRQOKQZSEXWEJVNTMJMTWFZCPEJHHAFCCBITQLGCJPIMNDOUNDIOGKPPUUIKEVVHWBJ");

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
    msg.setTimeStamp(0.740261679339);
    msg.setSource(38083U);
    msg.setSourceEntity(223U);
    msg.setDestination(15714U);
    msg.setDestinationEntity(179U);
    msg.timeout = 48715U;
    msg.lat = 0.255093617946;
    msg.lon = 0.843203362227;
    msg.z = 0.692267979004;
    msg.z_units = 245U;
    msg.duration = 34803U;
    msg.speed = 0.48407713516;
    msg.speed_units = 214U;
    msg.type = 1U;
    msg.radius = 0.427787945287;
    msg.length = 0.254268330294;
    msg.bearing = 0.0634531324863;
    msg.direction = 27U;
    msg.custom.assign("DSCWYGRPREVLAICCUBKVFTHBSSXV");

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
    msg.setTimeStamp(0.843585236338);
    msg.setSource(57855U);
    msg.setSourceEntity(79U);
    msg.setDestination(30988U);
    msg.setDestinationEntity(188U);
    msg.timeout = 47622U;
    msg.lat = 0.675734119552;
    msg.lon = 0.829247353541;
    msg.z = 0.683021947699;
    msg.z_units = 192U;
    msg.duration = 37724U;
    msg.speed = 0.183237455343;
    msg.speed_units = 97U;
    msg.type = 125U;
    msg.radius = 0.265986229472;
    msg.length = 0.316202499517;
    msg.bearing = 0.5874942601;
    msg.direction = 46U;
    msg.custom.assign("UYURRAJIVOVLULMKGYBSSNQSMRKVCMQIGWVLNIWSIIZXWHNEPCAMASMOQHQCDJNHOXSTIGQYNEXYCOYQAYMAJYCIKEVTZEUJPTZVNDLOFYXFHJWFFHYGX");

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
    msg.setTimeStamp(0.284829787618);
    msg.setSource(57506U);
    msg.setSourceEntity(191U);
    msg.setDestination(9124U);
    msg.setDestinationEntity(254U);
    msg.timeout = 57865U;
    msg.lat = 0.359965255456;
    msg.lon = 0.375824689282;
    msg.z = 0.00769330804663;
    msg.z_units = 118U;
    msg.duration = 10675U;
    msg.speed = 0.508762809826;
    msg.speed_units = 197U;
    msg.type = 156U;
    msg.radius = 0.359530789145;
    msg.length = 0.816290657903;
    msg.bearing = 0.177706768727;
    msg.direction = 64U;
    msg.custom.assign("GWBEAKRPHNJROEWWOXQFTYTOLDIDXXMWLPUCYJNXZMQSJZLQWUBXTUDDAIFCBHWCRWDZMLGELWKKHPNAIOXRUQCKWDEDKNVAHIOFZHVPXNNCKRULG");

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
    msg.setTimeStamp(0.837789212046);
    msg.setSource(33794U);
    msg.setSourceEntity(238U);
    msg.setDestination(41901U);
    msg.setDestinationEntity(157U);
    msg.duration = 8415U;
    msg.custom.assign("KOVWPVINCCCXJTZMUIBOPZNYWSYCYCHJROURZVVATETRMUOBDYMEKPGFSWROUEAZSJSHXOFENXMJTIQZDAURTQTDXYCAVXGDIRHFQAWRCUSULNQMALWSBXAPILDPYAIUEKNKTTYEQZLPXHNWPLK");

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
    msg.setTimeStamp(0.773619963747);
    msg.setSource(37740U);
    msg.setSourceEntity(154U);
    msg.setDestination(38632U);
    msg.setDestinationEntity(127U);
    msg.duration = 35628U;
    msg.custom.assign("FGWLCBHWWHAEIRKDXLGZNZSUUYKLDQIHKFMVNLNGBICZKAFBU");

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
    msg.setTimeStamp(0.203673472883);
    msg.setSource(2450U);
    msg.setSourceEntity(152U);
    msg.setDestination(25164U);
    msg.setDestinationEntity(83U);
    msg.duration = 47755U;
    msg.custom.assign("XDGBCIDRDMPXGCNNFIOFQPLZRTKNLBDABLJIBEVZWIDQMRQGZKWSLXIOCMQZRDBORIVVMBLREXEPUZTQHWNHWTYDAALXJRCRYIFTYAQINGHKJELMWTGEUYFJBBSVMECFATUKYAPQJZCGWTZMAUDSNUEEXJELGNMDRTPGLYGVTOSBYAVLGQWQFSHNTWJHSRCHFAYOXVUCUUVJOYFYSFKDUSZHIMXSIPWNEOKJQHUPCOPFX");

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
    msg.setTimeStamp(0.125991000919);
    msg.setSource(14548U);
    msg.setSourceEntity(125U);
    msg.setDestination(46054U);
    msg.setDestinationEntity(23U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.42045829809;
    msg.control.set(tmp_msg_0);
    msg.duration = 17480U;
    msg.custom.assign("JWDCIFDPOOAABKMYQTZGIQQRMOBPICQZOUVCVZMNBAUFGCMVDFBXPCMBUQWVYGYAOJTRTLJGSDZGCHUFOEAJSXTMKIKCMLQEEAGFTIZPHNTGSUVFPVLJMBUDTNVGEGPJLHZRZZWUUUFOHHMNSRRWLYCNMKTXYSYXCEXNLNSSPJHRKNKEBYFQZBDTHALRYINWEBVIXTWJXXERWHODWQEDLAWKCVOKZVDPQWDAYFLX");

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
    msg.setTimeStamp(0.588118731013);
    msg.setSource(50274U);
    msg.setSourceEntity(152U);
    msg.setDestination(25490U);
    msg.setDestinationEntity(93U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.423192644953;
    msg.control.set(tmp_msg_0);
    msg.duration = 10533U;
    msg.custom.assign("IOLGWWVWBZKTFDMBHQMBZBIC");

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
    msg.setTimeStamp(0.0286808033161);
    msg.setSource(26755U);
    msg.setSourceEntity(31U);
    msg.setDestination(63227U);
    msg.setDestinationEntity(161U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.986245148001;
    msg.control.set(tmp_msg_0);
    msg.duration = 1724U;
    msg.custom.assign("WWCITSGRDWRWFXBSPKZXZTKMMHVTUZHJNOENSCLFARLUQHHITXGKVMPHASIODBCYMEXAQIAQXKUBTVOHSBWTOZNUFBETWYILYGCUPOUKFJ");

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
    msg.setTimeStamp(0.579474778793);
    msg.setSource(41062U);
    msg.setSourceEntity(140U);
    msg.setDestination(11587U);
    msg.setDestinationEntity(100U);
    msg.timeout = 4979U;
    msg.lat = 0.276611518564;
    msg.lon = 0.760389203812;
    msg.z = 0.774444347514;
    msg.z_units = 197U;
    msg.speed = 0.607031670038;
    msg.speed_units = 69U;
    msg.bearing = 0.877297736068;
    msg.cross_angle = 0.722497418609;
    msg.width = 0.766600365663;
    msg.length = 0.33221157574;
    msg.hstep = 0.278905659056;
    msg.coff = 250U;
    msg.alternation = 57U;
    msg.flags = 107U;
    msg.custom.assign("MMXCWNDJNCP");

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
    msg.setTimeStamp(0.394883191861);
    msg.setSource(16117U);
    msg.setSourceEntity(131U);
    msg.setDestination(57571U);
    msg.setDestinationEntity(162U);
    msg.timeout = 15772U;
    msg.lat = 0.881772014708;
    msg.lon = 0.865481947603;
    msg.z = 0.730236055899;
    msg.z_units = 51U;
    msg.speed = 0.39954349749;
    msg.speed_units = 161U;
    msg.bearing = 0.46101969579;
    msg.cross_angle = 0.582720635544;
    msg.width = 0.360066809823;
    msg.length = 0.112264632315;
    msg.hstep = 0.106569756486;
    msg.coff = 146U;
    msg.alternation = 144U;
    msg.flags = 225U;
    msg.custom.assign("VXEKDBWFWXSMZTTODUZCZIVHXXLNQNLGTHAKQGRRBPZJAFJLECNHQDTQWXJBIBUSFYBMCQDOPITNOMIFHERDHEVKQNFCCFPGIDYIGQYWOPSBPEDXMMUAZIPYRPOJJQUYPFGCYMFKAYLHTAWBSROYUKOYSURZRNOCZYRXIVMAUVRIIMTLWBVEHZJKHQDVM");

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
    msg.setTimeStamp(0.391087295916);
    msg.setSource(19716U);
    msg.setSourceEntity(141U);
    msg.setDestination(7421U);
    msg.setDestinationEntity(52U);
    msg.timeout = 23125U;
    msg.lat = 0.907755260709;
    msg.lon = 0.325161722197;
    msg.z = 0.6040596407;
    msg.z_units = 164U;
    msg.speed = 0.786221958049;
    msg.speed_units = 225U;
    msg.bearing = 0.692462910884;
    msg.cross_angle = 0.21713020092;
    msg.width = 0.418677109393;
    msg.length = 0.995373146023;
    msg.hstep = 0.0406007879426;
    msg.coff = 175U;
    msg.alternation = 225U;
    msg.flags = 137U;
    msg.custom.assign("IIXBSWONZWG");

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
    msg.setTimeStamp(0.554830877377);
    msg.setSource(41636U);
    msg.setSourceEntity(49U);
    msg.setDestination(26610U);
    msg.setDestinationEntity(199U);
    msg.timeout = 30130U;
    msg.lat = 0.463015516983;
    msg.lon = 0.517933364824;
    msg.z = 0.161623620234;
    msg.z_units = 227U;
    msg.speed = 0.887019299337;
    msg.speed_units = 129U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.107331272686;
    tmp_msg_0.y = 0.935504627316;
    tmp_msg_0.z = 0.553842501507;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PFYUKBQZDNXALKCWO");

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
    msg.setTimeStamp(0.104847995598);
    msg.setSource(4183U);
    msg.setSourceEntity(236U);
    msg.setDestination(46299U);
    msg.setDestinationEntity(30U);
    msg.timeout = 4227U;
    msg.lat = 0.178992013957;
    msg.lon = 0.419430672012;
    msg.z = 0.120992993359;
    msg.z_units = 205U;
    msg.speed = 0.76452894326;
    msg.speed_units = 68U;
    msg.custom.assign("OYVCSRJWFPVYSHOPLGJQLAPCVLTCNGFBFWNYMQOGPCFEBKFXTZTQGTOJCBBFXTWIHJWDGDKEDRMUUWRNIHSZKLYNQDSPWSYLZPIFZVKGXCBIKFWTAGRIVDOQYONGTZLPBKTOAKXAMHMGKZHTYOMXHVPXSXGPKHWIZYAARMEHBRJDWBLTCLDARS");

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
    msg.setTimeStamp(0.898844567254);
    msg.setSource(54691U);
    msg.setSourceEntity(87U);
    msg.setDestination(37055U);
    msg.setDestinationEntity(99U);
    msg.timeout = 19316U;
    msg.lat = 0.662038763993;
    msg.lon = 0.0791971090846;
    msg.z = 0.971563921279;
    msg.z_units = 121U;
    msg.speed = 0.948703443885;
    msg.speed_units = 107U;
    msg.custom.assign("NSKHITUGMWZKIJTKHXXFBYJPXAHUOBFKEHGKVOCBTXHDIJLQTZMLPXYQOPQGFHRWFZENWLGLYVWQULKNTMIILPWACSCFBNVZNQDHSJYBSQQTKANZFUJDRTEOSARPBOHGVFSWCLYAETRJOLCSXZTHMYAPGRIDXVDPWSMCTACIWANMJ");

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
    msg.setTimeStamp(0.923651176646);
    msg.setSource(61752U);
    msg.setSourceEntity(197U);
    msg.setDestination(31661U);
    msg.setDestinationEntity(196U);
    msg.x = 0.543015584904;
    msg.y = 0.195096369911;
    msg.z = 0.915177755477;

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
    msg.setTimeStamp(0.872396844742);
    msg.setSource(39855U);
    msg.setSourceEntity(125U);
    msg.setDestination(58914U);
    msg.setDestinationEntity(83U);
    msg.x = 0.224451600176;
    msg.y = 0.41712957411;
    msg.z = 0.624072378591;

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
    msg.setTimeStamp(0.103049754328);
    msg.setSource(16281U);
    msg.setSourceEntity(175U);
    msg.setDestination(53911U);
    msg.setDestinationEntity(28U);
    msg.x = 0.934285794464;
    msg.y = 0.984329390022;
    msg.z = 0.200623865377;

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
    msg.setTimeStamp(0.200052856442);
    msg.setSource(4829U);
    msg.setSourceEntity(18U);
    msg.setDestination(32794U);
    msg.setDestinationEntity(108U);
    msg.timeout = 39053U;
    msg.lat = 0.197117907118;
    msg.lon = 0.300297143524;
    msg.z = 0.306786633714;
    msg.z_units = 141U;
    msg.amplitude = 0.971289071288;
    msg.pitch = 0.478219073824;
    msg.speed = 0.581619033809;
    msg.speed_units = 219U;
    msg.custom.assign("KDAXSNRXZVKRUFTNXSTDNYGRKEOSCKRGJWQREBNZIPQOPGQIEFRBOPMUIDKZDYFEKZFLYRFVLXZJHSYAAWHGDNDWYUFIZVIHNWOAKCUSEUWZATBOFYCWSTLEGEUBTQUBUQVPXMBHRVCTWPGVGHNAXCMOLSDPMQDFJORIJJQPEJSIEWLENJALKYSBWXXGYHDZCFTKLYQMCHCGTBOPUMCVZROIJIAKXLBU");

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
    msg.setTimeStamp(0.110942097534);
    msg.setSource(56019U);
    msg.setSourceEntity(243U);
    msg.setDestination(18808U);
    msg.setDestinationEntity(133U);
    msg.timeout = 2966U;
    msg.lat = 0.548428191216;
    msg.lon = 0.797421111045;
    msg.z = 0.79397236094;
    msg.z_units = 67U;
    msg.amplitude = 0.802798583173;
    msg.pitch = 0.844847425695;
    msg.speed = 0.490673875173;
    msg.speed_units = 105U;
    msg.custom.assign("EELTMUQOBDHBHJGMMPYNHXWAMWPXEACYWNYKIREFCFWCTSAYLNDUBKPTQGVLFUWOKBFMYWQHMOZHHNZBFNSHKQOOIRAANCYQKJWTBTSUJXXZDXSYCURDLJOOZCBAFZRKRLGJVHPSCSDZBJEFBXCGSDNIUULKGKARIFLOMRYTURIELMPQVJVIPYUEHLNWSSDXCMOIDFDTGVAXZVDSUVEHVVJZOGPMYXPQXPNGWFAIBAQGJ");

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
    msg.setTimeStamp(0.791155404);
    msg.setSource(41117U);
    msg.setSourceEntity(202U);
    msg.setDestination(14157U);
    msg.setDestinationEntity(103U);
    msg.timeout = 35775U;
    msg.lat = 0.664032779826;
    msg.lon = 0.153631645081;
    msg.z = 0.762433964454;
    msg.z_units = 113U;
    msg.amplitude = 0.517794607797;
    msg.pitch = 0.142183260397;
    msg.speed = 0.121093935521;
    msg.speed_units = 15U;
    msg.custom.assign("UESAVKBBCMZJZAAUGGFMNOOENLOOIJLVHAMWVHYBDWSVDTWLMMTYOZAICINAJGKFSXYFNVSGHXEXJLFTWHTCTDICRYFUSPEGXSFFIBPYBYBTRXWNKPGNSGVAOYRWUVLQPZUKOHMUNTLXHTEPTPDZYKJJDGNEXZGOQPQMZHSZRJHCVQDVVYLBDIADKMERQKORBEAIWQQRCGMNFYDHUCLUXXJK");

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
    msg.setTimeStamp(0.776313814751);
    msg.setSource(54609U);
    msg.setSourceEntity(250U);
    msg.setDestination(11325U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.254701885626);
    msg.setSource(61251U);
    msg.setSourceEntity(66U);
    msg.setDestination(58284U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.870271433894);
    msg.setSource(50414U);
    msg.setSourceEntity(151U);
    msg.setDestination(62933U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.898045092848);
    msg.setSource(46127U);
    msg.setSourceEntity(193U);
    msg.setDestination(4824U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.0794143937847;
    msg.lon = 0.84283082183;
    msg.z = 0.392194821212;
    msg.z_units = 113U;
    msg.radius = 0.62752111161;
    msg.duration = 59685U;
    msg.speed = 0.422891683242;
    msg.speed_units = 247U;
    msg.custom.assign("DYKWOAGVVEQLHPMAUFHFPKBNOWEHAGURWRPQSRPUGQDIGTULREZMKFJJCNTBNOJHQQLFQBCTVWTVPUHIQYMEXPZSZNHPISTUDAJNLJCIUPDWHIVZFKIUBZIRDULWWGLKHZMGDNNGCMNEWSIXXKBOHJYJFMSTKNQLZAGLYEXKSDBEQBSLPVCVCOECWABVJKSRTYYXDFHMRUXF");

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
    msg.setTimeStamp(0.181392456913);
    msg.setSource(47806U);
    msg.setSourceEntity(74U);
    msg.setDestination(2730U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.154803972656;
    msg.lon = 0.0518419923449;
    msg.z = 0.511357157455;
    msg.z_units = 243U;
    msg.radius = 0.0244649650443;
    msg.duration = 32304U;
    msg.speed = 0.338444518342;
    msg.speed_units = 242U;
    msg.custom.assign("KAZHYRJANJQCQIQEHDATWYMQVRUOFWFWWLCDGTUVCUAPPEAIMVPCCRAXLYIYNMBYHOFBVBDQWZPGPJLDTBEKRXGEWGSQAUAQZUKEFHVZSGWJLYXOCFGSBOBDSCVURGHHFRDJBRJXKNLBGPXKKYIZDVMPJOWPNOJZNOKTNZVCTPXCVGAQSYLMUINEJFLNBWITMVSMEIDQHWEFSSNUHOPTXDXUDLNLQYC");

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
    msg.setTimeStamp(0.798592808721);
    msg.setSource(64537U);
    msg.setSourceEntity(234U);
    msg.setDestination(62195U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.0388447583799;
    msg.lon = 0.334867396489;
    msg.z = 0.723341317208;
    msg.z_units = 99U;
    msg.radius = 0.255277565459;
    msg.duration = 36415U;
    msg.speed = 0.651132850556;
    msg.speed_units = 46U;
    msg.custom.assign("RHHWKTTIRNEAMQEJSXEQHBOWCZMBKTVNUIHXFYIZQKXSWNSCDHFQHZGLVWOIIXEDQKNKFSYAHVAAOAYGSJIMBXVDALRZGJHTSLUNUWUYCBULXVYQWJRTSLDYAMMBRDUJOSIEDPZLOOPPPIAFCZSLGYKWINXPFDCEZUATDXYWGTELBPCOVKJMFRBPNEGJFQGQKQC");

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
    msg.setTimeStamp(0.0943665209792);
    msg.setSource(45756U);
    msg.setSourceEntity(155U);
    msg.setDestination(31187U);
    msg.setDestinationEntity(185U);
    msg.timeout = 25428U;
    msg.flags = 18U;
    msg.lat = 0.848766421558;
    msg.lon = 0.93967866062;
    msg.start_z = 0.928268304607;
    msg.start_z_units = 55U;
    msg.end_z = 0.303548437284;
    msg.end_z_units = 204U;
    msg.radius = 0.800068561046;
    msg.speed = 0.539015277711;
    msg.speed_units = 156U;
    msg.custom.assign("KVHYVEELJOAHFQKKGNSAMXEMIOIULREMBQXIICAJCLQCMVZGBPKGEVDPGZMUFIFUTTAVBZ");

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
    msg.setTimeStamp(0.308457001852);
    msg.setSource(58588U);
    msg.setSourceEntity(102U);
    msg.setDestination(751U);
    msg.setDestinationEntity(137U);
    msg.timeout = 31205U;
    msg.flags = 42U;
    msg.lat = 0.549423032341;
    msg.lon = 0.959534109254;
    msg.start_z = 0.844677631936;
    msg.start_z_units = 88U;
    msg.end_z = 0.330852979654;
    msg.end_z_units = 135U;
    msg.radius = 0.862554144347;
    msg.speed = 0.0592568026426;
    msg.speed_units = 88U;
    msg.custom.assign("HCGJSTOGKVSCJNHFWKNYBVIUTMQCEWJPEXTSVTSAYCUBUYZDOEXDWDUSDVAXXHYPVDUZAIUDVOERSXRGRLALWHMGMLAHOKMYWPFZXDULNXKWJYPRWYEZGQUYLGMZRSCBGIZQTYABITGALLSQWODJLOCHNJZPRYVXFIINUAQRSK");

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
    msg.setTimeStamp(0.508178143915);
    msg.setSource(12955U);
    msg.setSourceEntity(91U);
    msg.setDestination(45623U);
    msg.setDestinationEntity(74U);
    msg.timeout = 58587U;
    msg.flags = 212U;
    msg.lat = 0.318435562857;
    msg.lon = 0.44861173721;
    msg.start_z = 0.0969728550865;
    msg.start_z_units = 119U;
    msg.end_z = 0.650666782247;
    msg.end_z_units = 229U;
    msg.radius = 0.334223840435;
    msg.speed = 0.391703565207;
    msg.speed_units = 68U;
    msg.custom.assign("XVDVOWBVTDGHCH");

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
    msg.setTimeStamp(0.573061511916);
    msg.setSource(40592U);
    msg.setSourceEntity(146U);
    msg.setDestination(52832U);
    msg.setDestinationEntity(240U);
    msg.timeout = 61881U;
    msg.lat = 0.810642906922;
    msg.lon = 0.86167333609;
    msg.z = 0.983443203688;
    msg.z_units = 145U;
    msg.speed = 0.538994462801;
    msg.speed_units = 238U;
    msg.custom.assign("UXYNCVEOIPAASVFOJSICKOLJYGPNMVQLNCYPQKMCQFSJKJIDSTNQUJJEIENDVBVYRURNWELDZHDCNURFERZIKEYWNVGTPLYWHZTQLIDGTUUQAETWJQRTAUHIBXUTMMRGMCIIYAKFOPERVFOQPPBW");

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
    msg.setTimeStamp(0.00499508129463);
    msg.setSource(46702U);
    msg.setSourceEntity(180U);
    msg.setDestination(53594U);
    msg.setDestinationEntity(217U);
    msg.timeout = 44279U;
    msg.lat = 0.406705840436;
    msg.lon = 0.47891341076;
    msg.z = 0.644871180994;
    msg.z_units = 216U;
    msg.speed = 0.58228728397;
    msg.speed_units = 63U;
    msg.custom.assign("ROKGMXEKDLSIBMDHGIKJQUEEXFKBFXMGWXAPZLRVAQSZFDUWOKIZTZXYVJBKWZWFLJZUEUJNYRCPSGTBAQASJSEHHKPNXYEGWAVBVCWOCOTCPMUSTHYSDGLVPCZMENNRSPQBNPVNDZXACYFEDDRLGQRGUJATUJPIYHDAIF");

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
    msg.setTimeStamp(0.629666336173);
    msg.setSource(61952U);
    msg.setSourceEntity(83U);
    msg.setDestination(45514U);
    msg.setDestinationEntity(231U);
    msg.timeout = 59355U;
    msg.lat = 0.127456115671;
    msg.lon = 0.906534636634;
    msg.z = 0.627445083937;
    msg.z_units = 223U;
    msg.speed = 0.0332822188604;
    msg.speed_units = 88U;
    msg.custom.assign("LWUZBQTTRQVAFOMLJCSDXZJGHQFDWMTITHPGKBEWZXYXRPGOAXHCFYVTAPJIWLLHPCOFZDONBXNFIQJRQYTCDMIYPMTLJLPRMZSCAOKKUXJBOUG");

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
    msg.setTimeStamp(0.103051318355);
    msg.setSource(29516U);
    msg.setSourceEntity(226U);
    msg.setDestination(13397U);
    msg.setDestinationEntity(157U);
    msg.x = 0.202962884572;
    msg.y = 0.832445431247;
    msg.z = 0.00440164825582;
    msg.t = 0.0861482469007;

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
    msg.setTimeStamp(0.857368459302);
    msg.setSource(8675U);
    msg.setSourceEntity(244U);
    msg.setDestination(34752U);
    msg.setDestinationEntity(153U);
    msg.x = 0.441292743842;
    msg.y = 0.411645292621;
    msg.z = 0.831928901636;
    msg.t = 0.73754540997;

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
    msg.setTimeStamp(0.282582691212);
    msg.setSource(7004U);
    msg.setSourceEntity(59U);
    msg.setDestination(46897U);
    msg.setDestinationEntity(236U);
    msg.x = 0.738987532937;
    msg.y = 0.0286281556936;
    msg.z = 0.136160956171;
    msg.t = 0.939167764155;

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
    msg.setTimeStamp(0.302337225943);
    msg.setSource(3961U);
    msg.setSourceEntity(142U);
    msg.setDestination(15842U);
    msg.setDestinationEntity(147U);
    msg.timeout = 51804U;
    msg.name.assign("NOYQUKYSCZTDRIBX");
    msg.custom.assign("DRNOFTOEOYRBVEHMSHQFSAPLSBZOGCZOCCBAFXLGGLPSTTFSOUWTOQPQTKDQYILJWW");

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
    msg.setTimeStamp(0.94090319391);
    msg.setSource(56414U);
    msg.setSourceEntity(195U);
    msg.setDestination(28107U);
    msg.setDestinationEntity(222U);
    msg.timeout = 23035U;
    msg.name.assign("FTORIRRNPSPAKXNVFGIGUBYWKDPYDJWWCTGHAETYOKRMVLWUVHUDEQGCFIYLGZMZJTUVXAHLWOOENAJZBJD");
    msg.custom.assign("PMMQMERYEHPSNPWBWYIZURFQGIIBLTCGYDEYOPFFHHRADGDUXIRERCVMIERKJASXCLLBQVPJQZASTUNOTZZQBWHUGDWTINLRAZUFNBOTZJKPPCGVGBQBNBJERJCHWHXHHJWGJHWFVFIOVTMTDSKQPQPJKUETSPRSAFLKAAVUILMZFWAZDDKORENYOLMGBKCVZXFOXSCNFXASYTMWNDDIYNQOLMVZJYJEDSUSQUMVWECYOKVOBXXTL");

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
    msg.setTimeStamp(0.970432576488);
    msg.setSource(2322U);
    msg.setSourceEntity(188U);
    msg.setDestination(23595U);
    msg.setDestinationEntity(166U);
    msg.timeout = 58237U;
    msg.name.assign("CHOWQXVEKUVTRAQPDZIDPFDSHYHRZBYHYDWLVACWIWDXNPGMPFNEYTSDCXNIRBYJQJZKAMWCRIMZGZXNEEXQRNNKERBRZKOCTLHBYWKWTISYTGOSWPRZLMFFGUQFZUGPVDJIFPXVZFAPHRCSHIOUOUXFEEKLKMTISXIJLTYUWSMQOWUVELOASALPKNOCKCCAQOBHSMSGYUILVMZAGXJQFHXBJALDBQBNKVCYPLGRJQOMVJGBJUNGD");
    msg.custom.assign("CPQVNHKIZRUZTOCUMBCRMIBPJBLSHAQHNJGUWRIBKDZWYDXIOGDRAOATNOEAPICQRGBUHBKDKBIYVEZWENSHIBGQJVMDSFWAVXKKLKLOVRWWYMAWZYLCSTMUJCYPWTEBUFEKXPYEMPQ");

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
    msg.setTimeStamp(0.347621752985);
    msg.setSource(9639U);
    msg.setSourceEntity(155U);
    msg.setDestination(56560U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.695859180043;
    msg.lon = 0.931331048439;
    msg.z = 0.502453851185;
    msg.z_units = 43U;
    msg.speed = 0.695881316411;
    msg.speed_units = 165U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.556330800384;
    tmp_msg_0.y = 0.637922663265;
    tmp_msg_0.z = 0.095457134018;
    tmp_msg_0.t = 0.709531741895;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.698945717397;
    msg.custom.assign("ZRRHGSXWYQIGAHTGCJDBLLZKMMZLSWVXDBXBOENHQKATUVHMFJYLTDMKRMFTYX");

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
    msg.setTimeStamp(0.372257691917);
    msg.setSource(45558U);
    msg.setSourceEntity(74U);
    msg.setDestination(10756U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.454197529764;
    msg.lon = 0.312281254239;
    msg.z = 0.966380578254;
    msg.z_units = 112U;
    msg.speed = 0.530219977236;
    msg.speed_units = 207U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.593986958038;
    tmp_msg_0.y = 0.651613438252;
    tmp_msg_0.z = 0.925015240138;
    tmp_msg_0.t = 0.238055398685;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.354381654553;
    msg.custom.assign("LMKBLHKQVAKRPSSEPRCTQQEYEWOLCPDUANLVPIYOFPWQBSUZNSHEITMNTAUWGLRKIQIPDYKPQJESMGMOIJNIRCCRAZYDVAWZFRXTEBJFVWXMIXHSVFOTIDCRQCTAATOJVNKFNBVJOGCLVUGNGYDJTDUUFYIFPGGUXQGEYSEKXMYRZFSTJNWKEJDOSWGRYCHVH");

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
    msg.setTimeStamp(0.144034019322);
    msg.setSource(8826U);
    msg.setSourceEntity(199U);
    msg.setDestination(39894U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.150242947585;
    msg.lon = 0.203064861017;
    msg.z = 0.303854301673;
    msg.z_units = 206U;
    msg.speed = 0.154105753372;
    msg.speed_units = 177U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.587751726471;
    tmp_msg_0.y = 0.679056121916;
    tmp_msg_0.z = 0.952333892166;
    tmp_msg_0.t = 0.796444665188;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 28367U;
    tmp_msg_1.off_x = 0.207345376113;
    tmp_msg_1.off_y = 0.293774061119;
    tmp_msg_1.off_z = 0.543814695566;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.344525263682;
    msg.custom.assign("SAEXYCXVKOHNIYBJWRNJSXEPVDXDEXMNAWDFBDEHZMMIPNYROKLYAAUEQAHUNCRUZZXQFSCCQZCBTQDWPCTFZGSVXQIPZNUYRXOQWGOBLSGQNZOMMMLLSEPUMSEFKRORSMPTWRJNRSCGLFQUFHYAFVVJQDAFGMTUTHOORBDZNHGBIGCPVUIOLBJRKVSKWIPPHJWYOIKDGETVYXFGFLAJHY");

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
    msg.setTimeStamp(0.368131633951);
    msg.setSource(25875U);
    msg.setSourceEntity(164U);
    msg.setDestination(42486U);
    msg.setDestinationEntity(57U);
    msg.vid = 1616U;
    msg.off_x = 0.948929796294;
    msg.off_y = 0.89905846465;
    msg.off_z = 0.958906363706;

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
    msg.setTimeStamp(0.0237665282124);
    msg.setSource(60665U);
    msg.setSourceEntity(197U);
    msg.setDestination(64029U);
    msg.setDestinationEntity(133U);
    msg.vid = 5280U;
    msg.off_x = 0.422360212047;
    msg.off_y = 0.094581815557;
    msg.off_z = 0.291154338937;

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
    msg.setTimeStamp(0.35898466428);
    msg.setSource(32161U);
    msg.setSourceEntity(152U);
    msg.setDestination(23446U);
    msg.setDestinationEntity(126U);
    msg.vid = 1019U;
    msg.off_x = 0.608853436535;
    msg.off_y = 0.426330677188;
    msg.off_z = 0.863862900115;

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
    msg.setTimeStamp(0.482773362091);
    msg.setSource(12855U);
    msg.setSourceEntity(244U);
    msg.setDestination(25671U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.938296303099);
    msg.setSource(20956U);
    msg.setSourceEntity(27U);
    msg.setDestination(54761U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.874350835828);
    msg.setSource(47220U);
    msg.setSourceEntity(123U);
    msg.setDestination(15209U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.221264738866);
    msg.setSource(5746U);
    msg.setSourceEntity(91U);
    msg.setDestination(26645U);
    msg.setDestinationEntity(161U);
    msg.mid = 352U;

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
    msg.setTimeStamp(0.0167375332308);
    msg.setSource(969U);
    msg.setSourceEntity(236U);
    msg.setDestination(55144U);
    msg.setDestinationEntity(30U);
    msg.mid = 62244U;

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
    msg.setTimeStamp(0.370937530955);
    msg.setSource(13331U);
    msg.setSourceEntity(252U);
    msg.setDestination(3983U);
    msg.setDestinationEntity(131U);
    msg.mid = 32234U;

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
    msg.setTimeStamp(0.844345855358);
    msg.setSource(4371U);
    msg.setSourceEntity(113U);
    msg.setDestination(11771U);
    msg.setDestinationEntity(15U);
    msg.state = 203U;
    msg.eta = 53354U;
    msg.info.assign("MUXABJRORHQLOZQZOHLYVWERYMGFZASGJIBXTXQYJPDKUEMUXABYNLANIDGUSBCQKTGEHXNRRDFSKYTBNSGMCYGUWAVYFMLAOIEAKNGHOVXIUDPKQIVGBJDFRCCC");

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
    msg.setTimeStamp(0.280631444556);
    msg.setSource(28537U);
    msg.setSourceEntity(187U);
    msg.setDestination(43028U);
    msg.setDestinationEntity(243U);
    msg.state = 183U;
    msg.eta = 40743U;
    msg.info.assign("UWQJHUYLPVJIWDQBWUEAOPYAEBWAKATSKOBFFEOSPICHUYSZZXUNXYQZGNJAOWYCHEIDXTTUVLNDGUVQPWYAMLPGELFIKKOSWSNZTMCNWIHVVFQQWYJFZFAUBCGNL");

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
    msg.setTimeStamp(0.50327988318);
    msg.setSource(23213U);
    msg.setSourceEntity(38U);
    msg.setDestination(43834U);
    msg.setDestinationEntity(44U);
    msg.state = 222U;
    msg.eta = 4292U;
    msg.info.assign("STEZSUJDCJDXWVVQIYHVIAWDOEMTINXKMRWCHSRKR");

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
    msg.setTimeStamp(0.327632912059);
    msg.setSource(15778U);
    msg.setSourceEntity(115U);
    msg.setDestination(23565U);
    msg.setDestinationEntity(63U);
    msg.system = 32639U;
    msg.duration = 47884U;
    msg.speed = 0.049144785348;
    msg.speed_units = 107U;
    msg.x = 0.317957435557;
    msg.y = 0.0873495640908;
    msg.z = 0.0643304689861;
    msg.z_units = 174U;

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
    msg.setTimeStamp(0.611319530959);
    msg.setSource(55848U);
    msg.setSourceEntity(199U);
    msg.setDestination(52177U);
    msg.setDestinationEntity(183U);
    msg.system = 56883U;
    msg.duration = 11492U;
    msg.speed = 0.880435835985;
    msg.speed_units = 205U;
    msg.x = 0.407300788496;
    msg.y = 0.553586474361;
    msg.z = 0.539548736901;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.688526159435);
    msg.setSource(32288U);
    msg.setSourceEntity(175U);
    msg.setDestination(40680U);
    msg.setDestinationEntity(31U);
    msg.system = 65109U;
    msg.duration = 22785U;
    msg.speed = 0.243343254647;
    msg.speed_units = 217U;
    msg.x = 0.0145778222123;
    msg.y = 0.0946177852627;
    msg.z = 0.353007998579;
    msg.z_units = 143U;

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
    msg.setTimeStamp(0.994861239545);
    msg.setSource(53756U);
    msg.setSourceEntity(243U);
    msg.setDestination(40398U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.949189225276;
    msg.lon = 0.670982348174;
    msg.speed = 0.468124464879;
    msg.speed_units = 231U;
    msg.duration = 45740U;
    msg.sys_a = 60231U;
    msg.sys_b = 26963U;
    msg.move_threshold = 0.0576338448399;

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
    msg.setTimeStamp(0.794044649376);
    msg.setSource(12086U);
    msg.setSourceEntity(125U);
    msg.setDestination(52026U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.634348968624;
    msg.lon = 0.375118567985;
    msg.speed = 0.301786423154;
    msg.speed_units = 22U;
    msg.duration = 40828U;
    msg.sys_a = 3034U;
    msg.sys_b = 6058U;
    msg.move_threshold = 0.496265977879;

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
    msg.setTimeStamp(0.218260375444);
    msg.setSource(38485U);
    msg.setSourceEntity(110U);
    msg.setDestination(56848U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.441289171578;
    msg.lon = 0.963341479623;
    msg.speed = 0.955453343106;
    msg.speed_units = 49U;
    msg.duration = 54059U;
    msg.sys_a = 39546U;
    msg.sys_b = 52548U;
    msg.move_threshold = 0.807206957583;

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
    msg.setTimeStamp(0.884855251331);
    msg.setSource(61019U);
    msg.setSourceEntity(37U);
    msg.setDestination(61053U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.147906009672;
    msg.lon = 0.530159569567;
    msg.z = 0.784030614495;
    msg.z_units = 39U;
    msg.speed = 0.963648927721;
    msg.speed_units = 228U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.70819674675;
    tmp_msg_0.lon = 0.618702555181;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CGPLTAFDUXSGBSVHPSPYXJAHERAHAIJFFARBRWRQPJOGFBRPMCCJCIIFWBEHEMLMDMVMQCTKXLHUSKKOOIKDGJOVVYCBEWUXJLWPZZVIHUGRJGDXEYCRBENHQFQFZWKDZYXBZNNPQTAYEUQVIVKGLORBYICQLTIGFANZYSTTKDNINWANPAARWJZMDBPKKHIXFUMUDFQYLHDGYTXUEEWKLQQ");

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
    msg.setTimeStamp(0.0389792050091);
    msg.setSource(49843U);
    msg.setSourceEntity(212U);
    msg.setDestination(27494U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.391924856049;
    msg.lon = 0.30424647901;
    msg.z = 0.763648395801;
    msg.z_units = 118U;
    msg.speed = 0.868460038457;
    msg.speed_units = 155U;
    msg.custom.assign("KLHCGTNLVDKTWNHQVCZFUCKBYZEHQRPXYJOGDRKITXUAJXKPNSADIBBQCTSVRFJYIBPQDSPKYQBAPCYQZLHJPYBGVUABPXRGIXTGMSUWQFNIIEEEUMGLLCSZWAWROTYMKBHMSRWXTNWUUJGMLAGRXTOMZZSMSTOYPUDBHFOMLOEVXEPTVPFICQIONWDDFDNCQVAHFCEAIAYENSZZWKKF");

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
    msg.setTimeStamp(0.0430676296004);
    msg.setSource(32500U);
    msg.setSourceEntity(139U);
    msg.setDestination(37732U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.785492195674;
    msg.lon = 0.107313322647;
    msg.z = 0.889661812819;
    msg.z_units = 244U;
    msg.speed = 0.857524515231;
    msg.speed_units = 20U;
    msg.custom.assign("LEPTAJITSDEBEFXRSQOTNHQZUTSZBDKDNNEMLROMOLCVCJWYJQXINOPQHOHRIBSFJPKGAUCWPBBMVKQHDRCQYSTZGOGNMUSFLIQZGWOIGLRUCEKVDJGHGFBNOYYGPMTBZMAFVOWXSFUETU");

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
    msg.setTimeStamp(0.972579910857);
    msg.setSource(11532U);
    msg.setSourceEntity(122U);
    msg.setDestination(49503U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.687122845884;
    msg.lon = 0.300651796631;

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
    msg.setTimeStamp(0.777180578546);
    msg.setSource(46315U);
    msg.setSourceEntity(109U);
    msg.setDestination(64550U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.421683122928;
    msg.lon = 0.294300902229;

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
    msg.setTimeStamp(0.760124736815);
    msg.setSource(45136U);
    msg.setSourceEntity(238U);
    msg.setDestination(65010U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.810292020405;
    msg.lon = 0.92597773639;

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
    msg.setTimeStamp(0.50543639167);
    msg.setSource(12465U);
    msg.setSourceEntity(115U);
    msg.setDestination(45516U);
    msg.setDestinationEntity(66U);
    msg.timeout = 48770U;
    msg.lat = 0.713024294318;
    msg.lon = 0.392930324565;
    msg.z = 0.691165630412;
    msg.z_units = 75U;
    msg.pitch = 0.816734321495;
    msg.amplitude = 0.875758648608;
    msg.duration = 45183U;
    msg.speed = 0.729567220181;
    msg.speed_units = 28U;
    msg.radius = 0.780078277973;
    msg.direction = 118U;
    msg.custom.assign("AFSIBUDKFIDFSXXQIOTECLBJUZXFYCSBYXPPTWRTEJTSHZAAPOVQPHFYD");

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
    msg.setTimeStamp(0.00534482830874);
    msg.setSource(7125U);
    msg.setSourceEntity(87U);
    msg.setDestination(28362U);
    msg.setDestinationEntity(236U);
    msg.timeout = 57882U;
    msg.lat = 0.77236927994;
    msg.lon = 0.564159977374;
    msg.z = 0.626164595946;
    msg.z_units = 199U;
    msg.pitch = 0.423447075405;
    msg.amplitude = 0.59747448125;
    msg.duration = 19021U;
    msg.speed = 0.886640364857;
    msg.speed_units = 238U;
    msg.radius = 0.597876155261;
    msg.direction = 72U;
    msg.custom.assign("KTWZPKWMUDFGSPIFLYAAWAOKAZSDPIETZOGGAQRKQSCEJSGDDTYYYBMRGJNKRRVONALNAYFYKKDRCOZNAXBVWIDGVGITNZZBTNNDOFSEPYHXBLPUCMILWRSXFBKLNKIZVNUUWMKIVBVGJCOMCRMEGOEMHLSVYFRDPFHVLRTCZXHUXUBQDWLVQBPTURQGEADCWBOISWHCJUXEWTUJEN");

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
    msg.setTimeStamp(0.587142017777);
    msg.setSource(36878U);
    msg.setSourceEntity(20U);
    msg.setDestination(35243U);
    msg.setDestinationEntity(117U);
    msg.timeout = 35081U;
    msg.lat = 0.139812007516;
    msg.lon = 0.38964451946;
    msg.z = 0.278894316627;
    msg.z_units = 201U;
    msg.pitch = 0.427294159679;
    msg.amplitude = 0.160396028243;
    msg.duration = 20658U;
    msg.speed = 0.657078298072;
    msg.speed_units = 128U;
    msg.radius = 0.829024218759;
    msg.direction = 117U;
    msg.custom.assign("OCYMSJUBVHAIROFQWCKNJXJLWCSJBPUCRQO");

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
    msg.setTimeStamp(0.453879592033);
    msg.setSource(7739U);
    msg.setSourceEntity(125U);
    msg.setDestination(52567U);
    msg.setDestinationEntity(213U);
    msg.formation_name.assign("MCNNNDUHEHDSISZGQFITG");
    msg.reference_frame = 75U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56225U;
    tmp_msg_0.off_x = 0.606780425753;
    tmp_msg_0.off_y = 0.478785440148;
    tmp_msg_0.off_z = 0.239411139546;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("IBEUNCJQJBSLKIZZYJULOGHYRQCQCSRSFJWXEGIGEXJRRAYSIXVWRDWOHDUGBATCGBUXBMFAQPKMCKEGSZQWEHRSKMHIPKSZIHAHCPHZRQOKFMBMDLJNOYVLQGOQNSYDFKGFYNVBFPXJOUQ");

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
    msg.setTimeStamp(0.955382165394);
    msg.setSource(17902U);
    msg.setSourceEntity(219U);
    msg.setDestination(33095U);
    msg.setDestinationEntity(76U);
    msg.formation_name.assign("LAKGMVIEOOFVFLDAFBGEFHNVFZWPWLGHMOIGBPAXEQZRBGTBCABKXQSFCJQXAYXZIRFAWINWJYAECHUKPEBVHYPYDUFHWELTJSOSUUDIIRFPGHMCIRXDXCZVLWRZIDNDQWMBBMYKNOURSQTDKQJXNKTSBTPQPAGZNUYOSIYTKJGNVJCCTZOPMCBMAIP");
    msg.reference_frame = 7U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39897U;
    tmp_msg_0.off_x = 0.400626006273;
    tmp_msg_0.off_y = 0.0386330424317;
    tmp_msg_0.off_z = 0.842082100751;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BMRMLCTFAZJOWARUCQGDMUNFEJSQIDYSDMPCYGFJWXIPFVOLWWCEYFVANIOHQAKATJZXIZEFCLKUQDCUGHZNYUBSBHTEXXSRAWBSTNILPPZRPYXERBLYVUKYXSMKVQHIMWQHAZOWE");

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
    msg.setTimeStamp(0.334169326182);
    msg.setSource(32280U);
    msg.setSourceEntity(90U);
    msg.setDestination(16904U);
    msg.setDestinationEntity(78U);
    msg.formation_name.assign("ZJQUPGSGUMSFFJNCGVADLJIPCEJEGEZWVKWCGZSZKOZBAZTJHWOKWNDDRYMGKUMYICRC");
    msg.reference_frame = 56U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51277U;
    tmp_msg_0.off_x = 0.74395809823;
    tmp_msg_0.off_y = 0.702762365836;
    tmp_msg_0.off_z = 0.932614695923;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ODAXEROHKXSVQLGESDITRTNZCFMYDEHFQXTMBFAHMFRFLMKVINLWJFOWEUDMUZHLBMSOAIMGVBJKVSTIZRGHZHW");

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
    msg.setTimeStamp(0.650623383413);
    msg.setSource(50229U);
    msg.setSourceEntity(90U);
    msg.setDestination(108U);
    msg.setDestinationEntity(96U);
    msg.group_name.assign("IYWWUPLNGZHOSEJPZXNXHERKWDLZCJUIOYNXRHLMWGSBQWNVPOWKILHQAZGNXVGKMNAAURFQFWBGQBTVSQ");
    msg.formation_name.assign("NTCTBLXEHRORBKDKZHCMYYUCLJUIQMIYPWIDLUNPRXUEPGHEQHVJWOZGSPCLTBFNGCPLUUACINSXCGFJGEFBOJJ");
    msg.plan_id.assign("AZWPJSUQVESFLVVIUVHXPTOAXHDLCKRUCNXIBBZZEPAQUERRCSGAZGNUIYBPRFDEDKKIFNBHYMEQXAWKTCHLWFOOYZSRYCQMQCTKZGAMTJNFVMVMLP");
    msg.description.assign("HKRIAJLDZSUQCLNVVLFELKCMACTHYPYQYTUFQGDTRBFBSOKIMMUSSEOQGYVWPPVENQSOQPCMVUYOMDKBSTGAUXNDPSKVLJYBLNSMOQFXHILSFEDFGIFWTYLWWJZK");
    msg.leader_speed = 0.0362695075531;
    msg.leader_bank_lim = 0.198169643341;
    msg.pos_sim_err_lim = 0.149701363931;
    msg.pos_sim_err_wrn = 0.182947882218;
    msg.pos_sim_err_timeout = 63921U;
    msg.converg_max = 0.576556993849;
    msg.converg_timeout = 12883U;
    msg.comms_timeout = 29783U;
    msg.turb_lim = 0.196762375935;
    msg.custom.assign("CFKHIRMNQAVCRFJYTMGLJRORWDJKNLCGAKZECZQDVJHOBXUPLJNGBQLCZVXRXGSUJFGPAXVTGVMFDTQYPGXDKUFWZDLWAMJUIPMKVUTPEONHIDUHYZNB");

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
    msg.setTimeStamp(0.296807916979);
    msg.setSource(20799U);
    msg.setSourceEntity(116U);
    msg.setDestination(43547U);
    msg.setDestinationEntity(76U);
    msg.group_name.assign("YHEOEEFRPOSMMSZWYVBAWSGDIVMOEGRGQACYWPWZSRCXHAQYNTRPFIIJDTARRUOQGRXJXMJKEQFDBHYKHHFDN");
    msg.formation_name.assign("RMHFRSHXJTRNVUIXKRNNWVKSIISFNGWRVDTYMABZAMKBCQOMQGLGUGEZZOBSXZJZYKHHNZDZATVXHOLHYJPKDVBAFCLCEGVIRCYPMZYSDQGEMYVQVDOHTMOMQUPFYDFUBPGQASQCHTPWLDIAKNCFPEJXJIAJQXELIWTXOIPTDOFCJBKLBXFPAVWOWWHSZJNPK");
    msg.plan_id.assign("PNXRWOTLJMXMKFCKGIEMNYMLFOUBOHJZHPYORFZLVISSVFQOTESCOPJXBBOHNJKEEUFCWY");
    msg.description.assign("SXNVEUXKSJCMGJXKPOKZPVEJZWEOHXWGLKLZPWEJKEOQRBDSVNMOSQYTSZNTGWAHFIPVYTJOUWIZBMNNAUAPNIRPLSCBRPKLMKUYTELXMOMFWWEDJJAEUHDAJMTIVIIDSRAHFADOQFVMCTZSFYQEUUYNZHFXWICSNGYUPKLIBGHBCIVLTRAHHXIPWFQGBOLRJCBKWRFDC");
    msg.leader_speed = 0.969629624341;
    msg.leader_bank_lim = 0.549075823336;
    msg.pos_sim_err_lim = 0.0490100893621;
    msg.pos_sim_err_wrn = 0.607898551506;
    msg.pos_sim_err_timeout = 32056U;
    msg.converg_max = 0.869957242381;
    msg.converg_timeout = 48338U;
    msg.comms_timeout = 38601U;
    msg.turb_lim = 0.327087677428;
    msg.custom.assign("GPFYGXEZLJPZTWECDESPBWNMJYEDNCCCPNQLHHQGYAHARVJYUCSQTVFXDBAOXMNIHCGBBYNOTARFXJRZAUSMWEDAVKHZCIXSRXWQQSFJLJSZCMSBHJOLFTPIYULDNAGMTDEZUVDIZPGTY");

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
    msg.setTimeStamp(0.312841912267);
    msg.setSource(59216U);
    msg.setSourceEntity(218U);
    msg.setDestination(64648U);
    msg.setDestinationEntity(167U);
    msg.group_name.assign("IYRFOOGQWNZUXVWAOSJQHXGSRUSMYAKHTQWDSUDQMIZYVPSHMDTYARYNHJRMWDUPGXRMZUKXQXAMEGKETLFPBOVCIKHICKJATBMDTXQFPNGVSRAVJJRROZBKOCXGUERBVWOEOEMLAWGSIJANHTHSGIZFWWDEYTQMLHDZBJBZVDWXNIOQPNNMGEJCUWHUFPZXFKLFCQCCIZHC");
    msg.formation_name.assign("EXARVCLDHSXNRHZGBDSPESGCBLVAZFEKGYUBRXTMSAIEFLMIKARNPPWKFHWUNZTJOXNYLBMZZOIVUGSIZJFYSUFKOUYBXGMWHPGPBEILJJDQUTQAENGTGCHVEUXZWCJQOLEYAUOCQVDJWEDBTFTJSHPOQLNMFNUQRDYXWXCNKKTMHRXYHDIEHNMQLKTVLHVPVSMJWTG");
    msg.plan_id.assign("TDYPCZUXNMQYWRSQGRQJYWGWBKWSNBRDPGAYLGWNPGOVJFUCVIZHDEWUMSLONPCPQXKOJYCEOHFWALTOOEEXTRMTUDWGTVQILUOTUBWUVOLYTPXIMYKHSCYFAMNCREVFHGMXHFZGPMLKWLZPAJVHHLKKAXMLLBZG");
    msg.description.assign("PKBTFLVSZVESUKFZRGOTCHXQUSDJGIWFRLBARPEUEKRQMTDJPQMUZNFBSTBKMOIRJAVRQWMHJPAUPLXYOTTWGYBKEESHNMJXDAONZFAJFXTWUJSWAWF");
    msg.leader_speed = 0.328249815146;
    msg.leader_bank_lim = 0.464143081959;
    msg.pos_sim_err_lim = 0.124917741283;
    msg.pos_sim_err_wrn = 0.531318256192;
    msg.pos_sim_err_timeout = 7742U;
    msg.converg_max = 0.743658065196;
    msg.converg_timeout = 13213U;
    msg.comms_timeout = 42836U;
    msg.turb_lim = 0.806130514774;
    msg.custom.assign("LKULMNGBYHPNCDGZYJMKT");

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
    msg.setTimeStamp(0.315832123691);
    msg.setSource(17229U);
    msg.setSourceEntity(197U);
    msg.setDestination(51621U);
    msg.setDestinationEntity(151U);
    msg.control_src = 20938U;
    msg.control_ent = 61U;
    msg.timeout = 0.885986092567;
    msg.loiter_radius = 0.879977531429;
    msg.altitude_interval = 0.320033676469;

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
    msg.setTimeStamp(0.631855346013);
    msg.setSource(36430U);
    msg.setSourceEntity(8U);
    msg.setDestination(33472U);
    msg.setDestinationEntity(0U);
    msg.control_src = 47940U;
    msg.control_ent = 30U;
    msg.timeout = 0.801452444221;
    msg.loiter_radius = 0.342753467931;
    msg.altitude_interval = 0.547074007069;

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
    msg.setTimeStamp(0.611269869403);
    msg.setSource(6015U);
    msg.setSourceEntity(18U);
    msg.setDestination(38632U);
    msg.setDestinationEntity(242U);
    msg.control_src = 44986U;
    msg.control_ent = 72U;
    msg.timeout = 0.306792616275;
    msg.loiter_radius = 0.0180043003621;
    msg.altitude_interval = 0.952799765521;

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
    msg.setTimeStamp(0.366942521401);
    msg.setSource(42830U);
    msg.setSourceEntity(174U);
    msg.setDestination(37590U);
    msg.setDestinationEntity(210U);
    msg.flags = 123U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.918624335924;
    tmp_msg_0.speed_units = 180U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.164420507698;
    tmp_msg_1.z_units = 178U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.879179565577;
    msg.lon = 0.0992808379566;
    msg.radius = 0.027577770608;

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
    msg.setTimeStamp(0.233905917608);
    msg.setSource(17530U);
    msg.setSourceEntity(18U);
    msg.setDestination(45844U);
    msg.setDestinationEntity(215U);
    msg.flags = 16U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.940558576928;
    tmp_msg_0.speed_units = 66U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.979624612084;
    tmp_msg_1.z_units = 227U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.503770903162;
    msg.lon = 0.74562661839;
    msg.radius = 0.869202412151;

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
    msg.setTimeStamp(0.746967560784);
    msg.setSource(23910U);
    msg.setSourceEntity(7U);
    msg.setDestination(27776U);
    msg.setDestinationEntity(209U);
    msg.flags = 25U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.993917586463;
    tmp_msg_0.speed_units = 116U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.834123185341;
    tmp_msg_1.z_units = 129U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0272306382382;
    msg.lon = 0.205109503826;
    msg.radius = 0.676649631677;

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
    msg.setTimeStamp(0.497533962818);
    msg.setSource(62559U);
    msg.setSourceEntity(83U);
    msg.setDestination(26497U);
    msg.setDestinationEntity(17U);
    msg.control_src = 7493U;
    msg.control_ent = 17U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 243U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.576306008715;
    tmp_tmp_msg_0_0.speed_units = 249U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.877245295216;
    tmp_tmp_msg_0_1.z_units = 110U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.609531341026;
    tmp_msg_0.lon = 0.0989113709379;
    tmp_msg_0.radius = 0.872629259106;
    msg.reference.set(tmp_msg_0);
    msg.state = 84U;
    msg.proximity = 187U;

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
    msg.setTimeStamp(0.293253181811);
    msg.setSource(32790U);
    msg.setSourceEntity(220U);
    msg.setDestination(25148U);
    msg.setDestinationEntity(104U);
    msg.control_src = 27252U;
    msg.control_ent = 206U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 118U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0891049377597;
    tmp_tmp_msg_0_0.speed_units = 46U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.454245844504;
    tmp_tmp_msg_0_1.z_units = 159U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.265668976015;
    tmp_msg_0.lon = 0.104218864089;
    tmp_msg_0.radius = 0.147510685499;
    msg.reference.set(tmp_msg_0);
    msg.state = 239U;
    msg.proximity = 40U;

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
    msg.setTimeStamp(0.369459460709);
    msg.setSource(43620U);
    msg.setSourceEntity(113U);
    msg.setDestination(64038U);
    msg.setDestinationEntity(61U);
    msg.control_src = 10743U;
    msg.control_ent = 70U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 85U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.556784518204;
    tmp_tmp_msg_0_0.speed_units = 74U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.537271107991;
    tmp_tmp_msg_0_1.z_units = 126U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.280476600296;
    tmp_msg_0.lon = 0.914400273947;
    tmp_msg_0.radius = 0.648240545447;
    msg.reference.set(tmp_msg_0);
    msg.state = 188U;
    msg.proximity = 198U;

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
    msg.setTimeStamp(0.0194396038643);
    msg.setSource(22052U);
    msg.setSourceEntity(117U);
    msg.setDestination(60751U);
    msg.setDestinationEntity(143U);
    msg.ax_cmd = 0.995097455345;
    msg.ay_cmd = 0.197838438656;
    msg.az_cmd = 0.920005236137;
    msg.ax_des = 0.483795782623;
    msg.ay_des = 0.763729134912;
    msg.az_des = 0.47003586303;
    msg.virt_err_x = 0.045134470906;
    msg.virt_err_y = 0.0776708827091;
    msg.virt_err_z = 0.712155664528;
    msg.surf_fdbk_x = 0.692039134688;
    msg.surf_fdbk_y = 0.404723642764;
    msg.surf_fdbk_z = 0.618307920845;
    msg.surf_unkn_x = 0.662538232929;
    msg.surf_unkn_y = 0.841003737835;
    msg.surf_unkn_z = 0.838835460908;
    msg.ss_x = 0.231812347079;
    msg.ss_y = 0.596740738973;
    msg.ss_z = 0.718423652271;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TIVDLBEXHGIUQBBFVEPKAQTLZEYFGZTDYXKBVJKPGSPQLNNXUNOIWMNTHJWPAAZWGHKSHOXGFBLUYIAZJCVGWIBJMWMMMRKQECSDYCDEVWVRSOVSFGCPHUADQBFHNZDRYQTXUKAQRYFSLUOTETWNJKBTDRZTCOCLYQPOOQZEVNLDYWPJXOMJUGV");
    tmp_msg_0.dist = 0.959423474389;
    tmp_msg_0.err = 0.835554263802;
    tmp_msg_0.ctrl_imp = 0.696338871384;
    tmp_msg_0.rel_dir_x = 0.593475997178;
    tmp_msg_0.rel_dir_y = 0.85081302369;
    tmp_msg_0.rel_dir_z = 0.212152254379;
    tmp_msg_0.err_x = 0.931575033629;
    tmp_msg_0.err_y = 0.252970469388;
    tmp_msg_0.err_z = 0.651209555547;
    tmp_msg_0.rf_err_x = 0.228691252335;
    tmp_msg_0.rf_err_y = 0.607762525593;
    tmp_msg_0.rf_err_z = 0.935376427437;
    tmp_msg_0.rf_err_vx = 0.600343168572;
    tmp_msg_0.rf_err_vy = 0.357173106205;
    tmp_msg_0.rf_err_vz = 0.161571813067;
    tmp_msg_0.ss_x = 0.885583433122;
    tmp_msg_0.ss_y = 0.265131537673;
    tmp_msg_0.ss_z = 0.856315060708;
    tmp_msg_0.virt_err_x = 0.843417398688;
    tmp_msg_0.virt_err_y = 0.337990855495;
    tmp_msg_0.virt_err_z = 0.263789005277;
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
    msg.setTimeStamp(0.654907638194);
    msg.setSource(62724U);
    msg.setSourceEntity(206U);
    msg.setDestination(60966U);
    msg.setDestinationEntity(221U);
    msg.ax_cmd = 0.586164034147;
    msg.ay_cmd = 0.969936972194;
    msg.az_cmd = 0.557993300569;
    msg.ax_des = 0.332437079714;
    msg.ay_des = 0.878890104518;
    msg.az_des = 0.859367601175;
    msg.virt_err_x = 0.116051305527;
    msg.virt_err_y = 0.343769203813;
    msg.virt_err_z = 0.748097275268;
    msg.surf_fdbk_x = 0.0799678409827;
    msg.surf_fdbk_y = 0.612269594562;
    msg.surf_fdbk_z = 0.348153239866;
    msg.surf_unkn_x = 0.68350824763;
    msg.surf_unkn_y = 0.48128068249;
    msg.surf_unkn_z = 0.996227029985;
    msg.ss_x = 0.534378825046;
    msg.ss_y = 0.485289291635;
    msg.ss_z = 0.203550322477;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AYWQNLODECMMYYNOXKEROPTCPKRRLMVCZJGLDVIGUVRVBBVNJXIJPBXTCIBKUHOUNCSZQLOFTGDCBTVNARUGOVXWSQAGICG");
    tmp_msg_0.dist = 0.0585387054155;
    tmp_msg_0.err = 0.576534359774;
    tmp_msg_0.ctrl_imp = 0.696705387383;
    tmp_msg_0.rel_dir_x = 0.360389682532;
    tmp_msg_0.rel_dir_y = 0.194983423626;
    tmp_msg_0.rel_dir_z = 0.709970656102;
    tmp_msg_0.err_x = 0.44471370032;
    tmp_msg_0.err_y = 0.200133354524;
    tmp_msg_0.err_z = 0.165211321524;
    tmp_msg_0.rf_err_x = 0.328282451945;
    tmp_msg_0.rf_err_y = 0.668531539129;
    tmp_msg_0.rf_err_z = 0.379377055035;
    tmp_msg_0.rf_err_vx = 0.450298937675;
    tmp_msg_0.rf_err_vy = 0.965687791469;
    tmp_msg_0.rf_err_vz = 0.105425107901;
    tmp_msg_0.ss_x = 0.546966054127;
    tmp_msg_0.ss_y = 0.773295206707;
    tmp_msg_0.ss_z = 0.923749427919;
    tmp_msg_0.virt_err_x = 0.627604249029;
    tmp_msg_0.virt_err_y = 0.222295429589;
    tmp_msg_0.virt_err_z = 0.417344853254;
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
    msg.setTimeStamp(0.0405328559953);
    msg.setSource(39424U);
    msg.setSourceEntity(19U);
    msg.setDestination(31918U);
    msg.setDestinationEntity(204U);
    msg.ax_cmd = 0.627327363498;
    msg.ay_cmd = 0.507306065547;
    msg.az_cmd = 0.292823900988;
    msg.ax_des = 0.437268611041;
    msg.ay_des = 0.83988916769;
    msg.az_des = 0.483857597352;
    msg.virt_err_x = 0.715309578692;
    msg.virt_err_y = 0.537393551983;
    msg.virt_err_z = 0.152304198984;
    msg.surf_fdbk_x = 0.235400553751;
    msg.surf_fdbk_y = 0.247291135215;
    msg.surf_fdbk_z = 0.748674554168;
    msg.surf_unkn_x = 0.163028881232;
    msg.surf_unkn_y = 0.453609405222;
    msg.surf_unkn_z = 0.44069536218;
    msg.ss_x = 0.06446315142;
    msg.ss_y = 0.634718930367;
    msg.ss_z = 0.660599351075;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GSVXQTLHLFUUHCABXPCRJVEQKSRUTOZMBZNFJJEYVIP");
    tmp_msg_0.dist = 0.286869279882;
    tmp_msg_0.err = 0.711345358477;
    tmp_msg_0.ctrl_imp = 0.309607983584;
    tmp_msg_0.rel_dir_x = 0.63112009907;
    tmp_msg_0.rel_dir_y = 0.945848978073;
    tmp_msg_0.rel_dir_z = 0.187801634896;
    tmp_msg_0.err_x = 0.25841594181;
    tmp_msg_0.err_y = 0.24485195828;
    tmp_msg_0.err_z = 0.677384341861;
    tmp_msg_0.rf_err_x = 0.664052135472;
    tmp_msg_0.rf_err_y = 0.319041616438;
    tmp_msg_0.rf_err_z = 0.289251541284;
    tmp_msg_0.rf_err_vx = 0.788024823954;
    tmp_msg_0.rf_err_vy = 0.00932181198652;
    tmp_msg_0.rf_err_vz = 0.0526254687097;
    tmp_msg_0.ss_x = 0.579438843787;
    tmp_msg_0.ss_y = 0.458585427312;
    tmp_msg_0.ss_z = 0.779301038157;
    tmp_msg_0.virt_err_x = 0.29044841664;
    tmp_msg_0.virt_err_y = 0.677167658076;
    tmp_msg_0.virt_err_z = 0.365982453628;
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
    msg.setTimeStamp(0.740268328774);
    msg.setSource(29077U);
    msg.setSourceEntity(76U);
    msg.setDestination(42217U);
    msg.setDestinationEntity(63U);
    msg.s_id.assign("OLYQMJQVRTJHRGLYXKQZTFKABSXAVTRMNHICHJKFNZBNIOQFTUISLXZMNUWOWCPGSWVDYKPQXDJCNVUZFWRZGMLYMSAXRBOMQKIBGJCVFLPEYLGTHBEETWVDAFCTLELUURMHA");
    msg.dist = 0.478541576963;
    msg.err = 0.88098946262;
    msg.ctrl_imp = 0.814170366208;
    msg.rel_dir_x = 0.548109025889;
    msg.rel_dir_y = 0.157162910821;
    msg.rel_dir_z = 0.295951242691;
    msg.err_x = 0.474267571815;
    msg.err_y = 0.156018538028;
    msg.err_z = 0.807990849822;
    msg.rf_err_x = 0.767000675427;
    msg.rf_err_y = 0.813081339383;
    msg.rf_err_z = 0.813530403406;
    msg.rf_err_vx = 0.716142449975;
    msg.rf_err_vy = 0.267062346981;
    msg.rf_err_vz = 0.677374126691;
    msg.ss_x = 0.871471959764;
    msg.ss_y = 0.353895699143;
    msg.ss_z = 0.42301403032;
    msg.virt_err_x = 0.218592243964;
    msg.virt_err_y = 0.6529756855;
    msg.virt_err_z = 0.980043621539;

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
    msg.setTimeStamp(0.374596799937);
    msg.setSource(31307U);
    msg.setSourceEntity(243U);
    msg.setDestination(42000U);
    msg.setDestinationEntity(89U);
    msg.s_id.assign("EMJKTUZHZMHJWXEYA");
    msg.dist = 0.2652822835;
    msg.err = 0.390713530156;
    msg.ctrl_imp = 0.25352821204;
    msg.rel_dir_x = 0.658225696073;
    msg.rel_dir_y = 0.0267748291728;
    msg.rel_dir_z = 0.180633224668;
    msg.err_x = 0.138710457972;
    msg.err_y = 0.676490984199;
    msg.err_z = 0.948218293702;
    msg.rf_err_x = 0.859179626089;
    msg.rf_err_y = 0.166386427743;
    msg.rf_err_z = 0.802558433079;
    msg.rf_err_vx = 0.708568847092;
    msg.rf_err_vy = 0.673174623574;
    msg.rf_err_vz = 0.0647908825049;
    msg.ss_x = 0.423876534718;
    msg.ss_y = 0.587680447388;
    msg.ss_z = 0.513553757286;
    msg.virt_err_x = 0.576706282085;
    msg.virt_err_y = 0.259582512569;
    msg.virt_err_z = 0.175693372994;

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
    msg.setTimeStamp(0.107023877272);
    msg.setSource(14825U);
    msg.setSourceEntity(161U);
    msg.setDestination(13728U);
    msg.setDestinationEntity(70U);
    msg.s_id.assign("EAQWGHADWKUAPZHNRHSHCVDPCBRASLKDOKPEQZCFTOUXELVTMGPOVZAYIRLWMBQXTLTMMWYZDKGTEHMNNVFWEBFQLVDUXLURVALDYFDOFYCOYYURHMSFXORSAEVJAXIKFJZXMYPVJDOBTQBQQPLWJCAICIEFKNOESQNLXNVGHTPQRICJCVNSGZYWPKFBNGYNIGOCGLOEIJAXUTGWEUTJBBKXUMBKHQWMYTINDHZSZRPIXJJFKW");
    msg.dist = 0.698910378138;
    msg.err = 0.917528531143;
    msg.ctrl_imp = 0.0307949734284;
    msg.rel_dir_x = 0.385576757223;
    msg.rel_dir_y = 0.592912992913;
    msg.rel_dir_z = 0.195586228392;
    msg.err_x = 0.84231072522;
    msg.err_y = 0.390612770827;
    msg.err_z = 0.618320188342;
    msg.rf_err_x = 0.638723869571;
    msg.rf_err_y = 0.121709960678;
    msg.rf_err_z = 0.297737262626;
    msg.rf_err_vx = 0.89874447004;
    msg.rf_err_vy = 0.51317664992;
    msg.rf_err_vz = 0.337322324776;
    msg.ss_x = 0.333770707086;
    msg.ss_y = 0.615774187482;
    msg.ss_z = 0.958991199901;
    msg.virt_err_x = 0.225231077337;
    msg.virt_err_y = 0.5329700063;
    msg.virt_err_z = 0.164554709741;

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
    msg.setTimeStamp(0.433184922292);
    msg.setSource(7968U);
    msg.setSourceEntity(208U);
    msg.setDestination(6531U);
    msg.setDestinationEntity(14U);
    msg.timeout = 26538U;
    msg.rpm = 0.0099715012026;
    msg.direction = 195U;
    msg.custom.assign("QHHYMSQPMADIL");

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
    msg.setTimeStamp(0.615095552393);
    msg.setSource(60305U);
    msg.setSourceEntity(233U);
    msg.setDestination(51680U);
    msg.setDestinationEntity(109U);
    msg.timeout = 35484U;
    msg.rpm = 0.381578393967;
    msg.direction = 192U;
    msg.custom.assign("MEIOIUWEAIDQJBNVWVGQXODMYSZYPVFQBWGYXFOSGHNFBVMUXQEUAJNHYXPTINANHPQJKYOODZGCRCWUFIDBRMDYJRSJPQGFUNHTWLZFVWKCTLOYRHLBZCJUUKFBLDIV");

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
    msg.setTimeStamp(0.746408700202);
    msg.setSource(15689U);
    msg.setSourceEntity(195U);
    msg.setDestination(50135U);
    msg.setDestinationEntity(246U);
    msg.timeout = 35391U;
    msg.rpm = 0.437662972429;
    msg.direction = 94U;
    msg.custom.assign("PHXZOPNJHFBUZBHVKYBCDRPLKRTAOMBYAGTFEKBYEINUGLBGUNMVQZWBQVFJEYOQWDKAWVMRLFSTLMIDVZEKDOKPJCGFBXBIEJUFWZZHCCJXPKYTHDHYHJVTXACEHGTQIXUEZCECSZQJLNNGBQVPGLMFTLZUOJKSXAPGNUQOQLKYCWDXISFKRRITATNMNXIJMWDLWSVDSUHOAG");

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
    msg.setTimeStamp(0.331683016485);
    msg.setSource(23607U);
    msg.setSourceEntity(72U);
    msg.setDestination(24510U);
    msg.setDestinationEntity(79U);
    msg.formation_name.assign("JDXJKQRGMFUOPDFMRUFICGRWGFWRPTMIRBDSEWYFKAEDSHVEEZPVBTNIHESIXGSCHZOFHKWNIQZ");
    msg.type = 133U;
    msg.op = 184U;
    msg.group_name.assign("CGDREJCRGQGOJNPIPFCRRYDRBEMUTUMJHOHBUZVFQQSSIBKWBALQTGWDFBRWNBKIFTNWTNOLWVYIHTTEIMRQATRHMYXVMAZXJSOYCBJBWNKOZNZIAOSADLVXUEWCVJKTASYHGFIUMEJAGCYGZOECSQZKTOGXQVQXFYMTWBNQMWIU");
    msg.plan_id.assign("SMYNKHYRYLTVWRHCMGVPFKCDGZTXAPMWYDKUBTHLSYNOHEKUAEPCWQQHXFFIZEGOMQFBGTMJRJKXFCLOYERGAHBQIPWKP");
    msg.description.assign("CVLTBZFAXNYWPMQTHDROXISRBCNQDIAWERRYKNMUZWFYWHEICUOEULECRBRWJVUYHFJMGZGDNOTQMGYQJPAJIWBI");
    msg.reference_frame = 146U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 24621U;
    tmp_msg_0.off_x = 0.183385973545;
    tmp_msg_0.off_y = 0.467288061229;
    tmp_msg_0.off_z = 0.82231291177;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.785753259774;
    msg.leader_speed_min = 0.150943588281;
    msg.leader_speed_max = 0.432097940191;
    msg.leader_alt_min = 0.830105382665;
    msg.leader_alt_max = 0.649429891002;
    msg.pos_sim_err_lim = 0.945576829799;
    msg.pos_sim_err_wrn = 0.134344620219;
    msg.pos_sim_err_timeout = 51458U;
    msg.converg_max = 0.0487474903184;
    msg.converg_timeout = 7987U;
    msg.comms_timeout = 39396U;
    msg.turb_lim = 0.998262243501;
    msg.custom.assign("NMANCKBAFDIVNTTZDDKPPZDWUJOSDOHGMGYLMHUXJJLUVXLWEHVYRPCQGLLVWBAKFGFKUZMPWKCUNESRLEMXVNONZHBJQBCEWFKBTRCKNWYAFQROZSMAYTAHNEPQGQDBPJWSIJTFACRHUFXELQDWZSPYXLVTYIZPDYVXXSOVJBFRZYBTBOYIPGXJRTXIIIGZDMCIUSGDTBGIHFFMAHAPNVSRKHKJEUVIESWJQOORQUTLSENQCHOWMY");

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
    msg.setTimeStamp(0.461639605591);
    msg.setSource(55791U);
    msg.setSourceEntity(166U);
    msg.setDestination(44095U);
    msg.setDestinationEntity(47U);
    msg.formation_name.assign("CRAARXOKXRVDPLEZKBMYQXPIKRVDEDKIQEPQMZLJJAPGCQIDQICTNGQSUALCTRZSAJUJPUPTUJVYGOYMUOWCFEQFAWFDICUIDWSMYGZZIWKDCKPGDLFSCXHXGVSUSSYRGYORBXTUBWOBBPTVJVQFNWAWNMALNPZVXYOGNKANFSERCDBGINHBVMYUKLLOBFQXPOECFZSNMVROHYEEHRAXBMTZQTZOHJFWXYKWTGZIDNEHTWLJMHLHIVKHHJ");
    msg.type = 235U;
    msg.op = 183U;
    msg.group_name.assign("NJEWZKROBXKBHQHLCHBCEBPRJTCVUTYGNBQATWYHGYTIPUEZGYMKVIHWQFTVSNSKDKUMSVANOZJEIDCSXNXEGYPWFRKMTPZMLEQMMAWFJZSZMIHZEIQXVDNJVMBERAQDYYDQGCMMHGCLOXVPKUHJNXTXDFYSLXULDHIBBORK");
    msg.plan_id.assign("QGXUQPTSOUFOPNAVIE");
    msg.description.assign("LDSURRBLZHLEPVOIPKEKDKLYGRTJTZHOAIXUMTUPGVKX");
    msg.reference_frame = 142U;
    msg.leader_bank_lim = 0.782375549496;
    msg.leader_speed_min = 0.662125234865;
    msg.leader_speed_max = 0.879180173326;
    msg.leader_alt_min = 0.401883902538;
    msg.leader_alt_max = 0.149749524023;
    msg.pos_sim_err_lim = 0.650255820748;
    msg.pos_sim_err_wrn = 0.336804381385;
    msg.pos_sim_err_timeout = 35505U;
    msg.converg_max = 0.319186769566;
    msg.converg_timeout = 28299U;
    msg.comms_timeout = 35215U;
    msg.turb_lim = 0.054125332222;
    msg.custom.assign("XFLDJPWLJDYUWVXBHKQYUZTKAIDWMULNJZ");

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
    msg.setTimeStamp(0.215551602668);
    msg.setSource(58773U);
    msg.setSourceEntity(70U);
    msg.setDestination(6294U);
    msg.setDestinationEntity(179U);
    msg.formation_name.assign("PQOOWGGBEAGBPUBIZYKYVOVLWCPBDMAKVXTSEZMDHNYCHOKLZTPDJRPMDKCOIGTMLLRZYXSRYXSOPREDCQWDZMVHJWNULCKFEEAZEUJUGINIWTGVNIAARPVCDCLHSOIWSMTDUKKRHPTIUBRQYUKEOJVVFGNFOFSWELYBEXTKCJXQILMIZNQZXXAHIJYSLHMWNWYBRUAFBUGSDTCPYKMVNQJFTQTNFPQFHXXASZWAQNHLXJGZFJRDASEUBQBR");
    msg.type = 192U;
    msg.op = 164U;
    msg.group_name.assign("EDYNDIECDVYBKPCBJVVROUMQZHHGOKOERGAABGXYEPDKSTNS");
    msg.plan_id.assign("GVNNAJEKGXFGRAEZRLDGSDMKPYTKOJFQUJXEJQWHMKHDTEOQEONVYRAWWNKAYTUFBIAUSYXNPZNZPCDCXUTTBIDPLRK");
    msg.description.assign("XLZZSGIIRHUMSXFLLYJRFLUIKVBBHUDQNGQGMSQNOQTPCVWORAFVEKPXVPCLPHKPDTXAYYFYGBDNDPCRGOBCJRSMGAQLYZTLVRCMMISNJSJHJYKYNLXNRDRETAAUUAPUXTLNSZYOBEWKVWCINVFCVSJQSTTGKOVKUAOCAWQESVDOJUWHHXFLMECDMFZDDFBEEFWCDOYPJTQQKNKHEOBHNBIZIRKGGZ");
    msg.reference_frame = 62U;
    msg.leader_bank_lim = 0.728993969005;
    msg.leader_speed_min = 0.793300421004;
    msg.leader_speed_max = 0.402713971469;
    msg.leader_alt_min = 0.930383929515;
    msg.leader_alt_max = 0.510986625078;
    msg.pos_sim_err_lim = 0.363802460735;
    msg.pos_sim_err_wrn = 0.176837089902;
    msg.pos_sim_err_timeout = 31104U;
    msg.converg_max = 0.662947685666;
    msg.converg_timeout = 26641U;
    msg.comms_timeout = 57417U;
    msg.turb_lim = 0.0140451415356;
    msg.custom.assign("VZQMSTHUWKXEUSKVC");

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
    msg.setTimeStamp(0.501418090208);
    msg.setSource(65227U);
    msg.setSourceEntity(112U);
    msg.setDestination(33097U);
    msg.setDestinationEntity(193U);
    msg.timeout = 65256U;
    msg.lat = 0.508496319673;
    msg.lon = 0.53458932742;
    msg.z = 0.270282360937;
    msg.z_units = 189U;
    msg.speed = 0.292203196387;
    msg.speed_units = 164U;
    msg.custom.assign("HPEHUJMHPORUZBKERMZDJLSITAVJNYFCWEQXIALCSGPLGPNJWIKFYZZMBUBTCQEYYYAGDEOPYVIOHXNDELFXUSLXXEKRTEWBUQHQDBCOGJESKVKSLTTHELJMXNAWSWDJKPCCMRYWYOWVGLFKNUJRQTQGWUFOBIADBWFKMONZMCORIRMNSNUDZBCQAVAMAUGFXGAXNRHSIPTRTVOFZZXHIRGTZIYDOYDHVMHLVACVFUTPQJPFIZNSQKGCSPXQB");

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
    msg.setTimeStamp(0.236004935671);
    msg.setSource(11430U);
    msg.setSourceEntity(214U);
    msg.setDestination(52311U);
    msg.setDestinationEntity(96U);
    msg.timeout = 53997U;
    msg.lat = 0.403162743827;
    msg.lon = 0.545501039934;
    msg.z = 0.233689801213;
    msg.z_units = 249U;
    msg.speed = 0.625095901109;
    msg.speed_units = 108U;
    msg.custom.assign("IEALWJRITQYLXCHXDWXXBXWZKPAOS");

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
    msg.setTimeStamp(0.842093996934);
    msg.setSource(54018U);
    msg.setSourceEntity(198U);
    msg.setDestination(63240U);
    msg.setDestinationEntity(29U);
    msg.timeout = 12113U;
    msg.lat = 0.235382191904;
    msg.lon = 0.231984894932;
    msg.z = 0.130272189726;
    msg.z_units = 54U;
    msg.speed = 0.95417545263;
    msg.speed_units = 80U;
    msg.custom.assign("HSRPEXASJDJUIVKJOKZDNRGTNAGDKRUUFXWDOOXAOKJTBUBEQHHYREZCIAGWBYETWYUEDPNIRSMWJVMNXFRMWAZDHIDNQRNSTLCIMOIYQOQNHMKBLFXUYCSBIFFBZLAQCQHSS");

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
    msg.setTimeStamp(0.114618574863);
    msg.setSource(16815U);
    msg.setSourceEntity(139U);
    msg.setDestination(1449U);
    msg.setDestinationEntity(212U);
    msg.timeout = 46071U;
    msg.lat = 0.737647233219;
    msg.lon = 0.920154212886;
    msg.z = 0.404762510496;
    msg.z_units = 118U;
    msg.speed = 0.576876619466;
    msg.speed_units = 24U;
    msg.custom.assign("UOMNHCYKJLYHZFLJVDGBQHXKAIHNJMMVLFRBTXHTTUXYISRVMXWERWZDTAGBZKIHSXLKXAANNYDFWDPQFECHJOLXOBUIJZQOHEQVUYDKLPPJKBGZTUUQCEJWIYNBCBIGAARIZPLKLURKCTFFMPHDUNFMBRVDVSARUFWZTKMVWSOPNUOYEDKGBSNQNCEIWSNXFAFAJVVOLPQGMSCYMOHEESPRXPGCYTZOJDTPSYEZVZQ");

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
    msg.setTimeStamp(0.602715071119);
    msg.setSource(33111U);
    msg.setSourceEntity(169U);
    msg.setDestination(51546U);
    msg.setDestinationEntity(232U);
    msg.timeout = 60454U;
    msg.lat = 0.973902155389;
    msg.lon = 0.878429802378;
    msg.z = 0.808349764602;
    msg.z_units = 191U;
    msg.speed = 0.767919439679;
    msg.speed_units = 198U;
    msg.custom.assign("WORCLLCPJOHBQUESTBPVRZAOVRXITDJAVGDDWXAMZMZZUYQBKHTQVYCZKATHWUJODIBEYNLINRSHPWGGSKTTMWEFCOZFFRJQOHMQKUXFT");

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
    msg.setTimeStamp(0.87930428715);
    msg.setSource(16046U);
    msg.setSourceEntity(108U);
    msg.setDestination(60993U);
    msg.setDestinationEntity(209U);
    msg.timeout = 54506U;
    msg.lat = 0.869999570986;
    msg.lon = 0.00708596906671;
    msg.z = 0.563007388494;
    msg.z_units = 170U;
    msg.speed = 0.313057028103;
    msg.speed_units = 90U;
    msg.custom.assign("SWQANJWMOBYIZHJKQAMDUEDIWECWSRNTCKHWVTKDNPCKUJUMPMZLMDMVIKGWXHJQRFBOYEOXDQXTSJASLLSVZRJEFLOVYAGNPFUZPLZFXBYFETYDIEFZG");

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
    msg.setTimeStamp(0.407207089045);
    msg.setSource(55777U);
    msg.setSourceEntity(234U);
    msg.setDestination(41436U);
    msg.setDestinationEntity(122U);
    msg.arrival_time = 0.213721140889;
    msg.lat = 0.901928418757;
    msg.lon = 0.112267843883;
    msg.z = 0.198021254253;
    msg.z_units = 40U;
    msg.travel_z = 0.965649953622;
    msg.travel_z_units = 11U;
    msg.delayed = 80U;

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
    msg.setTimeStamp(0.338519416974);
    msg.setSource(24355U);
    msg.setSourceEntity(251U);
    msg.setDestination(56555U);
    msg.setDestinationEntity(147U);
    msg.arrival_time = 0.0847802999976;
    msg.lat = 0.16230759096;
    msg.lon = 0.0310519846235;
    msg.z = 0.0327035581723;
    msg.z_units = 175U;
    msg.travel_z = 0.0294934030898;
    msg.travel_z_units = 159U;
    msg.delayed = 163U;

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
    msg.setTimeStamp(0.628054012822);
    msg.setSource(10067U);
    msg.setSourceEntity(47U);
    msg.setDestination(33210U);
    msg.setDestinationEntity(54U);
    msg.arrival_time = 0.587434157606;
    msg.lat = 0.0246812312676;
    msg.lon = 0.588197295824;
    msg.z = 0.928496911794;
    msg.z_units = 226U;
    msg.travel_z = 0.88361411785;
    msg.travel_z_units = 126U;
    msg.delayed = 3U;

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
    msg.setTimeStamp(0.841472658464);
    msg.setSource(11947U);
    msg.setSourceEntity(141U);
    msg.setDestination(7100U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.868633388117;
    msg.lon = 0.103768530259;
    msg.z = 0.833056722118;
    msg.z_units = 199U;
    msg.speed = 0.0321571853737;
    msg.speed_units = 134U;
    msg.bearing = 0.256429874244;
    msg.cross_angle = 0.35773882683;
    msg.width = 0.393993294513;
    msg.length = 0.308253153752;
    msg.coff = 250U;
    msg.angaperture = 0.627222067345;
    msg.range = 51664U;
    msg.overlap = 18U;
    msg.flags = 99U;
    msg.custom.assign("VZRZWBAQWYQOGGPTVXOGORHYVNVMMDJSLYBYXMCWHFNVROEVUNHFLJUABJGYRYXTHYKTGZPUISPLSRCLRNZBCSHKEFMZEIRBXTPSHOASEXNQIHDFFAMSYCNIDVPJDINIXOKKCCKJMXQBOMJALITUFDOJEQQDGGSVTUMANDWAHAPNEUGWWWFFLMLBHBXGPDTRYLCZAKYVIOPUGTUZUJKBWLKQZZESUQOSIAJPFQCJD");

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
    msg.setTimeStamp(0.44878865706);
    msg.setSource(31620U);
    msg.setSourceEntity(42U);
    msg.setDestination(16036U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.593544349848;
    msg.lon = 0.699905037566;
    msg.z = 0.757595738113;
    msg.z_units = 46U;
    msg.speed = 0.773917266169;
    msg.speed_units = 72U;
    msg.bearing = 0.323587251141;
    msg.cross_angle = 0.458702266957;
    msg.width = 0.652104735511;
    msg.length = 0.501628097848;
    msg.coff = 155U;
    msg.angaperture = 0.984670790445;
    msg.range = 62541U;
    msg.overlap = 153U;
    msg.flags = 231U;
    msg.custom.assign("ABHRMHIZMHTNMOITTBXWITTCELTOFLKORYSEGAALPLHOSIQXLEDQGZEJZUOPQNSKJWVQVBCGZWJVYZJNXGMVEIRBRKBKSZDFECPYDFECFJJBAQGAAXDJMSDUXBSRLVRVMKGFUDYFNBQNIVKEQWZPRSADJZCYKSXFGK");

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
    msg.setTimeStamp(0.171648331579);
    msg.setSource(65506U);
    msg.setSourceEntity(166U);
    msg.setDestination(14892U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.873275611476;
    msg.lon = 0.0314872551849;
    msg.z = 0.208896070224;
    msg.z_units = 124U;
    msg.speed = 0.332556096693;
    msg.speed_units = 90U;
    msg.bearing = 0.923690655025;
    msg.cross_angle = 0.00724261030745;
    msg.width = 0.127245204662;
    msg.length = 0.437620002654;
    msg.coff = 185U;
    msg.angaperture = 0.0240454866673;
    msg.range = 1783U;
    msg.overlap = 167U;
    msg.flags = 236U;
    msg.custom.assign("XIILAELADOJSSWUHPIKHWLRABUVBRHOCVHODAPMNNTYXOJQ");

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
    msg.setTimeStamp(0.390743077108);
    msg.setSource(23585U);
    msg.setSourceEntity(220U);
    msg.setDestination(10953U);
    msg.setDestinationEntity(144U);
    msg.timeout = 62600U;
    msg.lat = 0.22825728899;
    msg.lon = 0.0972982258589;
    msg.z = 0.437322211988;
    msg.z_units = 86U;
    msg.speed = 0.90862330252;
    msg.speed_units = 181U;
    msg.syringe0 = 16U;
    msg.syringe1 = 181U;
    msg.syringe2 = 27U;
    msg.custom.assign("LFXNEJKPFETOIVBYUKYOZH");

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
    msg.setTimeStamp(0.232310932818);
    msg.setSource(59701U);
    msg.setSourceEntity(98U);
    msg.setDestination(3621U);
    msg.setDestinationEntity(214U);
    msg.timeout = 38882U;
    msg.lat = 0.943160397261;
    msg.lon = 0.0132176570467;
    msg.z = 0.0942542008914;
    msg.z_units = 181U;
    msg.speed = 0.477728014527;
    msg.speed_units = 30U;
    msg.syringe0 = 118U;
    msg.syringe1 = 21U;
    msg.syringe2 = 89U;
    msg.custom.assign("XVPHFKMHOHTFLUGQUQWEXFWDJTCAJFTSIVOREZHEHUSMJEBAOGOIGIDAQBPLNDMBYAWJUPQXGPNTKEZBIOYACILZXSANJNNIWUTUZHXYGLFUCLRCLDEZNYVZVYTXQWQRFOEHXMIARLHLWMDNSVWUKNCDBMDRBBFEPENYGISHYJLFJWRZCSRPSTYSGJBVKKKXQUQWQMNGIR");

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
    msg.setTimeStamp(0.450084695899);
    msg.setSource(4278U);
    msg.setSourceEntity(238U);
    msg.setDestination(37437U);
    msg.setDestinationEntity(5U);
    msg.timeout = 42114U;
    msg.lat = 0.334966968185;
    msg.lon = 0.222484405748;
    msg.z = 0.880770252985;
    msg.z_units = 183U;
    msg.speed = 0.0479501470537;
    msg.speed_units = 69U;
    msg.syringe0 = 243U;
    msg.syringe1 = 48U;
    msg.syringe2 = 53U;
    msg.custom.assign("NOVPEGRKIDJYAZAOQHMTPBBXNOGRGPVXWLIEFJTZRMQSTUFKGEN");

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
    msg.setTimeStamp(0.728003669459);
    msg.setSource(2879U);
    msg.setSourceEntity(163U);
    msg.setDestination(34379U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.779040761342);
    msg.setSource(23611U);
    msg.setSourceEntity(102U);
    msg.setDestination(50713U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.745656891156);
    msg.setSource(64561U);
    msg.setSourceEntity(250U);
    msg.setDestination(53434U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.871064256009);
    msg.setSource(46301U);
    msg.setSourceEntity(50U);
    msg.setDestination(55378U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.599375264114;
    msg.lon = 0.16077129684;
    msg.z = 0.86995324716;
    msg.z_units = 83U;
    msg.speed = 0.399506768544;
    msg.speed_units = 180U;
    msg.takeoff_pitch = 0.697390512065;
    msg.custom.assign("HQOJJQAFWZOUWDWXY");

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
    msg.setTimeStamp(0.363794975787);
    msg.setSource(14011U);
    msg.setSourceEntity(78U);
    msg.setDestination(38181U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.0600970034411;
    msg.lon = 0.204143779836;
    msg.z = 0.859822253769;
    msg.z_units = 242U;
    msg.speed = 0.677424964192;
    msg.speed_units = 33U;
    msg.takeoff_pitch = 0.543827457298;
    msg.custom.assign("FLROSVUILWOQCNJY");

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
    msg.setTimeStamp(0.108601220587);
    msg.setSource(34880U);
    msg.setSourceEntity(166U);
    msg.setDestination(21691U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.899841619399;
    msg.lon = 0.000891192217774;
    msg.z = 0.574707163213;
    msg.z_units = 227U;
    msg.speed = 0.0345649477581;
    msg.speed_units = 254U;
    msg.takeoff_pitch = 0.102298198197;
    msg.custom.assign("OFHPOADGWKEIQIUSXRVLMBUFWSGNSAMQWOGBYVUCFEIJAZBMKIOFMXKEPCQAUZFIETEFNSOQLUMKLXOBJKBAHVJGATKAXZJVHGYYKFTKFWJZHJALVDDPPM");

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
    msg.setTimeStamp(0.694727001278);
    msg.setSource(11935U);
    msg.setSourceEntity(251U);
    msg.setDestination(55184U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.104319842873;
    msg.lon = 0.0994198650864;
    msg.z = 0.426638817652;
    msg.z_units = 84U;
    msg.speed = 0.763136915652;
    msg.speed_units = 182U;
    msg.abort_z = 0.944301784995;
    msg.bearing = 0.998183949154;
    msg.glide_slope = 175U;
    msg.glide_slope_alt = 0.0908373382029;
    msg.custom.assign("FARYLCFQCZAUCVZFLEETGYGYMWLPZDBGZRYAPIOEWEKSVIJMZAAMOBNORXGFQHDNLUQNNKJJXASHIJMPUTXPHSVDRWIZQDOHIAIEURDUXLYDHSTLXPKOG");

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
    msg.setTimeStamp(0.663057758828);
    msg.setSource(42243U);
    msg.setSourceEntity(10U);
    msg.setDestination(16523U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.0493399241641;
    msg.lon = 0.450375416539;
    msg.z = 0.521890900364;
    msg.z_units = 109U;
    msg.speed = 0.694744069418;
    msg.speed_units = 244U;
    msg.abort_z = 0.0962298183922;
    msg.bearing = 0.422799746058;
    msg.glide_slope = 105U;
    msg.glide_slope_alt = 0.114811918567;
    msg.custom.assign("PKJGMKRYIMZMTEAWWYXWCZWU");

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
    msg.setTimeStamp(0.717617817953);
    msg.setSource(32847U);
    msg.setSourceEntity(128U);
    msg.setDestination(50230U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.000566976411509;
    msg.lon = 0.491436357237;
    msg.z = 0.600145983514;
    msg.z_units = 60U;
    msg.speed = 0.683327655596;
    msg.speed_units = 168U;
    msg.abort_z = 0.963655622984;
    msg.bearing = 0.578025295886;
    msg.glide_slope = 169U;
    msg.glide_slope_alt = 0.0452873254481;
    msg.custom.assign("IYAJNTCOVPBQQXOKXDTLCWHMJNYMXCIMITLPCRRWKOHJWBCUAFZCNNRXAMHSDRPSQUGFKSJODNBXGTDPHWXPWOZMIZBVFHSNFFEPYNMCSALATBATOWGIVVEAOGGSDWKORUYZHKOIRVJIFDUPQBXWRABMLEQZZJJEKMMYVQKJLFNSZZWMQYXVSLHPRFHGKKGJFF");

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
    msg.setTimeStamp(0.199620253713);
    msg.setSource(42640U);
    msg.setSourceEntity(11U);
    msg.setDestination(65079U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.0478590211006;
    msg.lon = 0.21006963996;
    msg.speed = 0.444358162322;
    msg.speed_units = 32U;
    msg.limits = 37U;
    msg.max_depth = 0.371216216801;
    msg.min_alt = 0.815640911614;
    msg.time_limit = 0.539768433967;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.540838147957;
    tmp_msg_0.lon = 0.904001404179;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("MHRHOMWDKKELLVJFHSIOLUNELNLYEXHQCPIKCDJNSHBQLJDJOWOTMFBGGAKPTFIRVBFIQEOXSGGMGRAYSCQGRXJTWKDWZPHNNAIVFTCMFEEOUVZWOMXOWUAEXFFKRZLCTWZYNMOTPSQWYPBJPVNXGNYKRIUXRQKVPTNTVBSSMZBLDFDCCTNRCBSXGIQZCHQYYZAAUYPDEXVLMGAXZZCYURH");
    msg.custom.assign("SGQEBQJSVCTBPLCIUZEJJKRWOHFVLRASNKALUFEKFGKHLASYAZGEMVBWEVJADSXYKNDOEICBFFUQIPOBVXBLDDONIMW");

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
    msg.setTimeStamp(0.240929783375);
    msg.setSource(44464U);
    msg.setSourceEntity(231U);
    msg.setDestination(23959U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.854951397016;
    msg.lon = 0.866063338479;
    msg.speed = 0.4250551454;
    msg.speed_units = 28U;
    msg.limits = 147U;
    msg.max_depth = 0.257084710371;
    msg.min_alt = 0.640779065819;
    msg.time_limit = 0.235387046444;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0648214831327;
    tmp_msg_0.lon = 0.843048097533;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("NQIZQGLIAOYNCCQXBOCUBTRXNVIQVNUUAVZBTHJXNATYEIXFHSGEWOMEWDVEMJPRPHAKWTRZRAITLFHGCDFYJBKMRCLOMDLPSGCOGLVPAUUEWXQYWOUMLLSMFIMEFPXJRMKYUITZDZHHYFZMNQFHAVBVBQGIBJQZIGWGNUPDYRHKJZBLSLUTEPKKFJZXOPFEYSPKDYDMGBTGWEVASALOWXZCSSECIHTVKVTKDXBUY");
    msg.custom.assign("RAIYNSGWFNLQLQFSYPABIPOGDQPXCDNKVRJUWQPUUYMFQORTYQMHFXXBVCCUNJMYGTOWZEKJWGBUGKRGADEICDHJAAXMLDWFJQBSFOBBMMCIQSHLIYVSUUCCIUDLTKZREMUKHEDHOZYJOMJCFVZKLXEKUTAN");

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
    msg.setTimeStamp(0.779024965144);
    msg.setSource(19917U);
    msg.setSourceEntity(166U);
    msg.setDestination(37520U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.167954503158;
    msg.lon = 0.565016571647;
    msg.speed = 0.727947381172;
    msg.speed_units = 39U;
    msg.limits = 48U;
    msg.max_depth = 0.150147361333;
    msg.min_alt = 0.592403463506;
    msg.time_limit = 0.691072000799;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.467801486522;
    tmp_msg_0.lon = 0.0992396856794;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PZCSEMRARIKUPFIBJDZLTEWRIUUJCUIDDJMAUGROHNJYVEMRSVFGLTPSIFWEBNTTYTMGXABTZOCNNKOMJXBHQLHCHPAVPSAKHSNNZSQOVNDESFMCQALGXYGHXLWQDNRFBTDJIDZYFDYXWSPBWIXDCPZKMNLQKAXETYZYLGMZFBTQQ");
    msg.custom.assign("EMLTQVCOSALAZTOFIBJXSHHWIMPXPTYNLVPOZDGRZBAYWFZUILIOSWPQCJGUYDFCVNAHLKRNKGWJDBFTTWRCLONMVDDPIGFVNLEINARWRSYGOYMXPUKYFFEMRGEEMQNSXGVBJQVARHWJULZMIYELQPUOTSBHPLBDKKCECXQQXPGTVZCBWKMKZBKDMJXXDJYWYZANQQHGAWTINVIFUTRHRAJZARSDCCQTFOSKFEIEBHEZSOGOHUSDHXJPJUCUY");

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
    msg.setTimeStamp(0.37398879353);
    msg.setSource(36869U);
    msg.setSourceEntity(77U);
    msg.setDestination(57887U);
    msg.setDestinationEntity(92U);
    msg.target.assign("KHGICJSTTOWUVBELGAZISYFHESLBTODFKTCVYDCMUXQTZWILGNSSICFYSUZKZBPMRLMQVVEHVESPJJJKSUOHFRRHWQEABZAVDYBAYAGOGDAGRCMTDNINLZVZNOJGPQWJQELCXLWPXGRCRID");
    msg.max_speed = 0.915170645183;
    msg.speed_units = 127U;
    msg.lat = 0.447192159196;
    msg.lon = 0.598913765745;
    msg.z = 0.43191621334;
    msg.z_units = 168U;
    msg.custom.assign("ULHVQUBIIYNOAUOIKJCCNEIMOFXPDPWWXTOHZDYUJLAFBDETKEQWSSVZEJNSTAYBWBYERFBPWMLXGJOSGVVNSQOEDTKCOPZUJYFHHQAKYLDFVUGLJZVPZIGTKVZWRTLYUNRSGHHQAQTJTRZRJDQNCSXBSABVCXXWTDJCCMSYWGKMGSXFJRBHPDQFUMREVHDFHZHEXZQPAIWWNCOOGEIANAOLMKPGKNQAUIUXRVEPIMB");

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
    msg.setTimeStamp(0.698403324416);
    msg.setSource(21672U);
    msg.setSourceEntity(207U);
    msg.setDestination(4429U);
    msg.setDestinationEntity(180U);
    msg.target.assign("XXNUKFSPEJDBGBKIHXCUOMA");
    msg.max_speed = 0.486898049158;
    msg.speed_units = 146U;
    msg.lat = 0.759382588037;
    msg.lon = 0.348704215862;
    msg.z = 0.718719148842;
    msg.z_units = 202U;
    msg.custom.assign("ADQGWZORUSQFXJGCJMYWENLHMEUPDILHVBHZZTVZTQLXMOMJRHAQBETIMIYAFWRKXPPKJAZKLZCNDLXOPSZFSFEYGNEDTSVDONXIVLUUNTLVOUKBLTYXVKCUHSMWBCSKOWGXUVMBXIQVPNHJQCUZGVKWRAYFOWVMYENADFMZDIYDPJOABHGD");

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
    msg.setTimeStamp(0.905796552244);
    msg.setSource(23374U);
    msg.setSourceEntity(235U);
    msg.setDestination(15600U);
    msg.setDestinationEntity(221U);
    msg.target.assign("BZHQWKYHJYCECYEDEIPRPSZTAILUFBSBSAUDBQGDGLIIYQEAFPSFVCIRR");
    msg.max_speed = 0.158041033572;
    msg.speed_units = 200U;
    msg.lat = 0.49964021083;
    msg.lon = 0.37208984452;
    msg.z = 0.0264931069523;
    msg.z_units = 243U;
    msg.custom.assign("MAXFEFBVNCBUQUQWCAVGAWCJTUMJXVQYDEVANOHRYJIVOZRWJMIXJO");

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
    msg.setTimeStamp(0.257736965667);
    msg.setSource(13031U);
    msg.setSourceEntity(172U);
    msg.setDestination(226U);
    msg.setDestinationEntity(140U);
    msg.timeout = 14905U;
    msg.lat = 0.88203576868;
    msg.lon = 0.511446072407;
    msg.speed = 0.837453542955;
    msg.speed_units = 63U;
    msg.custom.assign("DTHAFYSJXMFNFPATPCZFIHFQCJVKNTRWXMBDSIBMRHRAQPCXKAODCVULYZMSERHUGZWLTXNPGG");

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
    msg.setTimeStamp(0.593863476625);
    msg.setSource(25777U);
    msg.setSourceEntity(150U);
    msg.setDestination(53868U);
    msg.setDestinationEntity(38U);
    msg.timeout = 6275U;
    msg.lat = 0.68099007467;
    msg.lon = 0.772162466918;
    msg.speed = 0.597636439795;
    msg.speed_units = 118U;
    msg.custom.assign("QWYIEIHUNTPMGTUCIBVCMFDAQMUIEXXDIPLJUBNZHCSNGXFOTLKKLFMBLQBWDKELYZEPKRJJIOPSLRXXAXODOVYGYNQOTKWAWDGFPHJZASOKMEGQJCTFBUVONCNCBVYFYDTNPZYKCSEIQGDUQKXZUXWZRNRMRWESCZHVSXQWULUABEVPVRPJSRSSYNDTIRLQM");

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
    msg.setTimeStamp(0.762065767131);
    msg.setSource(18233U);
    msg.setSourceEntity(166U);
    msg.setDestination(18526U);
    msg.setDestinationEntity(247U);
    msg.timeout = 55373U;
    msg.lat = 0.605951477698;
    msg.lon = 0.988454157052;
    msg.speed = 0.00679548692455;
    msg.speed_units = 73U;
    msg.custom.assign("AZIXBEFNPHLMMRPGTNIIMZKEQCSOFBJAXQYYOKEFJTLHRCBZMKUERVJBWNPQDTLCOXUHKNBVXDBWMLHUFKRFQDHIBGANPTPFHVOKEHJWJINWEXCOPSPISOUTTBATGXVHXGXNMYDWMZEAZFLVNVCSDMZDLWSYGVKURAILTCRGMGQJEJOQBHZQRAKIPYUFAQHOYDGCLDXZPLTYFIGWQVXAWFSCMUCUJNSOQKYE");

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
    msg.setTimeStamp(0.287286983593);
    msg.setSource(60902U);
    msg.setSourceEntity(173U);
    msg.setDestination(16985U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.275291292952;
    msg.lon = 0.0314107620715;
    msg.z = 0.630173687759;
    msg.z_units = 99U;
    msg.radius = 0.750464535853;
    msg.duration = 47419U;
    msg.speed = 0.721079537466;
    msg.speed_units = 195U;
    msg.popup_period = 52331U;
    msg.popup_duration = 50043U;
    msg.flags = 75U;
    msg.custom.assign("XCJROQIENCRBKJZXULMBSCFBSHXJKOEKHAGYWWF");

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
    msg.setTimeStamp(0.485662664507);
    msg.setSource(19233U);
    msg.setSourceEntity(241U);
    msg.setDestination(34103U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.953363079564;
    msg.lon = 0.992861195267;
    msg.z = 0.595383529445;
    msg.z_units = 158U;
    msg.radius = 0.860997626492;
    msg.duration = 6635U;
    msg.speed = 0.40472352961;
    msg.speed_units = 76U;
    msg.popup_period = 49386U;
    msg.popup_duration = 21388U;
    msg.flags = 153U;
    msg.custom.assign("CDZYIHCVAMGQWBRERLQSACJSPIYKXMUGHUEJDQZNAFXGXBNOLACYUVYLGANXHDVXNOPDMVSECRUOYXZXKPFKHMECZSGPCATLWTYTMTQRSWYMUFSZEFIFZJTIONCZHRJAORJAKUFLKYLVUBUAQLINYIIGMNDWPKRPEDTGJWWBHQTVPBVSICSLCKJENQMZFJDVDSUHFZFBRTBDTT");

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
    msg.setTimeStamp(0.69153116706);
    msg.setSource(62660U);
    msg.setSourceEntity(212U);
    msg.setDestination(3062U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.901007788079;
    msg.lon = 0.192914029487;
    msg.z = 0.569654805776;
    msg.z_units = 45U;
    msg.radius = 0.314660616751;
    msg.duration = 18000U;
    msg.speed = 0.905093264658;
    msg.speed_units = 168U;
    msg.popup_period = 21634U;
    msg.popup_duration = 61275U;
    msg.flags = 181U;
    msg.custom.assign("SAUWYQVRDWPEUGREDIINVJAORYLTFGUJJCOEOBFLOVVMMPSHZUZSCKCCXTSZUQAQGWTSWTVFBOHNKUIQUCYXUFTMPBDRAVHXQYFHJHYCRNZZZDXXSAFYINFTRMNXBMEIWEFJEZAGHMKWOPWZQYSKKFIDXIHNTMPQCJBAIDPSXJHMWGARQCYOGCDGIGUUAQTBOQPBKOJICPLDTJZLVLJLGARXLKRPNY");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.563930730113);
    msg.setSource(53337U);
    msg.setSourceEntity(103U);
    msg.setDestination(61636U);
    msg.setDestinationEntity(75U);
    msg.op_mode = 251U;
    msg.error_count = 136U;
    msg.error_ents.assign("MYNUBQULKMROBHPLIXAWVZTCAQJQAQUZOSRWPCPTAMWTVDASEESJXEOQSZYVNGICGCNDXJEFYKPWWYLGQZNMDYEVGHJAHREGISIIHYGTKEZGRDDBTYKLMFCZNZSPLAQHSCNXFVSVJEFXDTFYDCRZIOHDVBZCNNWGRR");
    msg.maneuver_type = 63883U;
    msg.maneuver_stime = 0.806429369662;
    msg.maneuver_eta = 60853U;
    msg.control_loops = 1356618248U;
    msg.flags = 137U;
    msg.last_error.assign("VVJOJGTPXIRWOPFCCEMEQACALCNXHTQCQPDWUWYZFXGDOHEMLOYFHGBBBUZBNUNIEIQWTYRPUIZDHBCAVZSYNFVJLMKSPJSDMPPJSALOGSQPXGEBTKJMDJYDAEZMRNXCNFTDTBCXDAKTSMWERJVFHMWHFQHCSGVFHAKVIBZGLILOLOKSVZQRNROATAKYQUKZKEPIKFZODIDT");
    msg.last_error_time = 0.620716248915;

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
    msg.setTimeStamp(0.276203475908);
    msg.setSource(14047U);
    msg.setSourceEntity(152U);
    msg.setDestination(2267U);
    msg.setDestinationEntity(174U);
    msg.op_mode = 244U;
    msg.error_count = 186U;
    msg.error_ents.assign("DOFLMEVUQPUTDKZZZJYNIVDNGLFITTAEYLSZKWEOBTSJXMQBUNBFXJXREBJOVLVLAQNGRPBVYTLVQOMHJQDKAKUPSHNRZCPYSAGSUXCTPMIKYHURAYODDQHQLURAWOCSJYNMBCYW");
    msg.maneuver_type = 23614U;
    msg.maneuver_stime = 0.389373699775;
    msg.maneuver_eta = 24433U;
    msg.control_loops = 4011037844U;
    msg.flags = 207U;
    msg.last_error.assign("WGJMCRTFJTNIZHCYPYDKJJTHOQLOFVKQIPNPNHODUSIHVKTGGTOPYEJBPHKAQFTIXXIYDRCQPKKKAYJFSGWZWQGRRUAYNECXNLLMDMRZEROLKQHBCUGAZTLTVFIGJLBVWMVOLEBSSOYNSSMGBHKRVUZHYFZXODWLEMUMDXJFPYIIRWMQWSGNVBYQCCUEWAFPZCEBUAXLLPNJUQWBIAIM");
    msg.last_error_time = 0.123796890326;

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
    msg.setTimeStamp(0.438840382306);
    msg.setSource(31442U);
    msg.setSourceEntity(40U);
    msg.setDestination(15537U);
    msg.setDestinationEntity(188U);
    msg.op_mode = 252U;
    msg.error_count = 56U;
    msg.error_ents.assign("GOSSFZLODQTJRXAHJEJPUWLMKFVGRYIUWGANTYEFHZKVRTZQVBDLSARORWJCBZLMMVMVXFZHTUKUIUIUVWAAOPXDVMNGBPGFVEDGPIONXPHIYBGJBGFSKDBAJABTKCQWAPTTPCEWJMGPOPQLDYSKUOFXMSNAQPUWEQEEZNKQLHWJDZUYDRZVYXKCCTEFASRFCIODDQUIHICJHC");
    msg.maneuver_type = 6487U;
    msg.maneuver_stime = 0.450548462193;
    msg.maneuver_eta = 19663U;
    msg.control_loops = 73548235U;
    msg.flags = 242U;
    msg.last_error.assign("LDGTCPAITHFBZYTFNAWEPXOMMPBDFESKNJCUIQYKNNJOKHKRZYCMLYTSGIBJWRAYMQRBUJCKQERKQNRVGGGZMOPYLZPUSXZSUCAHICLJFMDJAAHBZRZBDHWHDWMPSKGXSVIUVZLXZNXBSDFAYCQOPMMEPLRUXJCWVWYNNGEOQUXIWANPCLILFIYIDXHWGXVQKAWFVQDBBMSUFITZS");
    msg.last_error_time = 0.0189516694763;

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
    msg.setTimeStamp(0.859269464352);
    msg.setSource(26932U);
    msg.setSourceEntity(224U);
    msg.setDestination(49643U);
    msg.setDestinationEntity(97U);
    msg.type = 186U;
    msg.request_id = 61303U;
    msg.command = 45U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 50617U;
    tmp_msg_0.name.assign("BZUIEJLQCRCAKGKIOXTDJHJTWZOIGZERZMJCKGNVZEWZFCYAYXDCYWOPLKRROIGILTAKXVJAJRBBYMHWQJWQRLHMYXHUFEPJTFHHXNSUCAMSGWVODLDSSTQCUQSPCZVQLKODOTNVEFPAFAQPKIXMEKYNMSSJVDRBWV");
    tmp_msg_0.custom.assign("RFMXZQCCTYPDVDKXYYKWUTXLCYNBMXUYVBVZDWSUNISPFBHUQNGTGMVRKFRKIFSDLSPLTVPFLUPEGWCJETAQKFXJMBBBNROGUYIMYXHXVHJCNJPWGWWLWOQILSTDCKTDXMHQGTAYAPZKEOJVIOPAMORQURQCC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 48828U;
    msg.info.assign("RXTRFWBMTRIZCJPFCJFWEVCWOLHBKZJ");

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
    msg.setTimeStamp(0.408540179104);
    msg.setSource(53586U);
    msg.setSourceEntity(49U);
    msg.setDestination(34995U);
    msg.setDestinationEntity(1U);
    msg.type = 177U;
    msg.request_id = 23936U;
    msg.command = 54U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 52858U;
    tmp_msg_0.lat = 0.283258174954;
    tmp_msg_0.lon = 0.721906770469;
    tmp_msg_0.z = 0.59337413483;
    tmp_msg_0.z_units = 252U;
    tmp_msg_0.pitch = 0.593575799048;
    tmp_msg_0.amplitude = 0.630955418396;
    tmp_msg_0.duration = 37U;
    tmp_msg_0.speed = 0.283015503118;
    tmp_msg_0.speed_units = 181U;
    tmp_msg_0.radius = 0.392176348772;
    tmp_msg_0.direction = 71U;
    tmp_msg_0.custom.assign("CVBNFVLUCWXCQKIFGFQJQHWNLGIKWPYATMEHRGWXMRHGRAMMNNSPCZPFYYWAIYSNJMKWMSPEJQAUCPWSUELKTWQTFPKHYBLTDEZHRRUWMLCHQSG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40966U;
    msg.info.assign("EZAQMQMHZKKSGIYKRTPODMHEYOBTNIRKFZXVZEUVCFQDCUULMXEACCYFDZSXWJQPNKWCAQTGUXRVQGWHAZELACPHTZNGTNGIJXCDRHUYJGIKTPQCYHSBXFPORYLSEOHQSVYRXQNPIOTOPWZVUADBFIMWBKRILIGOMYYLPGZDWTMUBMWJFIHCFLJADWUVSBMLAKHZSDMSVPBDBVEKLVYJIXJASQXHOLEOETCPUNNNRLJAFNDURWEWGBKF");

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
    msg.setTimeStamp(0.0176802656729);
    msg.setSource(20615U);
    msg.setSourceEntity(131U);
    msg.setDestination(65215U);
    msg.setDestinationEntity(120U);
    msg.type = 8U;
    msg.request_id = 59923U;
    msg.command = 89U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 18736U;
    tmp_msg_0.rpm = 0.781521172994;
    tmp_msg_0.direction = 197U;
    tmp_msg_0.custom.assign("MATZRQLSRUPTZJBNZPQSCDCTDGISEVMHOFVACWVQEGNBWIHHMKPZXYSLKCMXLFIYGVEIRAKUMZRTOFSQFTJOJOYXARALQDHMNUWKUZACFJFTVLUNGIUVWQHWVCJSXUBCUEZABRHPTXPTIRMWHSFJMLUNSYXZIYENXHQOCBGDZKSVPPBTGLGLDKRXVFTLKJJERXDBIIDBPGEOZJMBNYGNIKEWOCEOJYW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 25866U;
    msg.info.assign("HDMADEIADOYSZYKUXSORMZPROEBIAVOPBIETDOHYNBKGSSOCDKYNUNIQMPOVSIFFLRIZLVQTRGKGVNMAMGVGIMQWEKLTPUSYSODBXTAXGZJKXBGHDKYHADFKEXENBLLMPYYH");

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
    msg.setTimeStamp(0.666295123568);
    msg.setSource(6177U);
    msg.setSourceEntity(33U);
    msg.setDestination(44001U);
    msg.setDestinationEntity(48U);
    msg.command = 137U;
    msg.entities.assign("TWBJMXSAVYDLZNSBYZYOXFCSIQGQUFTYOXCGVELAIRJTZSJNPGARYV");

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
    msg.setTimeStamp(0.46160210347);
    msg.setSource(6191U);
    msg.setSourceEntity(253U);
    msg.setDestination(44166U);
    msg.setDestinationEntity(15U);
    msg.command = 40U;
    msg.entities.assign("ISUJQKTHZRSTQOXANYMRUNWMUJRFVQVKLGOZFAEIYXABFLSDCPBDZYIORDIRKHSVXVPMCUQCGNIZTTHLFKDZAGSBODXYYBOJVMTFPCFSYEHIVQGXJYHEMJCGESITXGIJDHPGLCXLMTNVBAZWMUPJKUWJQWLLZCXKWHQBZK");

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
    msg.setTimeStamp(0.0176743687574);
    msg.setSource(35427U);
    msg.setSourceEntity(176U);
    msg.setDestination(31914U);
    msg.setDestinationEntity(236U);
    msg.command = 222U;
    msg.entities.assign("ITQQIUXVEHBWKGXWIGGCSJOLOZJXNPNJHHDAAEPSHKLUDMNPORJTLEBPQSOHVFGRKEJC");

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
    msg.setTimeStamp(0.870443595981);
    msg.setSource(32868U);
    msg.setSourceEntity(45U);
    msg.setDestination(14546U);
    msg.setDestinationEntity(94U);
    msg.mcount = 78U;
    msg.mnames.assign("XAXAPPUAZYMTCCPVDOHBQHTKAEKHZFZNJPVEZJUVYCFBEJIOLQLZNNPYMLFYBISRGQUFSNRHBVVGESWHFOQKCBHFLYDVPXMYUUSMPNWKTTWEOAONDXCYSOZPJJWKVURBQL");
    msg.ecount = 179U;
    msg.enames.assign("TQLHFEGVVTJBZLLOJAKTPVMYOKJDNOGSLLDAXRIQOECADYLHWGTFNFHWJBPKEMPSDMVRVTKWKBNCEGUNWJMHNBIQRVVHZGGRXYTUCYIDKZBMEBTOSAZXHFRWYSXJWJXZCSRFE");
    msg.ccount = 251U;
    msg.cnames.assign("ZKZNXMWWVIOUSFTNVBPRGWMJTHRYSJSXEMBJBWGVMLZOCATHCBGXMOLDQPKNBAEOJWEXNWVTAXEOKASDLQQTZAXCDIOOGUYADLCSSUEGZCRQUGWPIZORFLVWCFDKTULDWBFRJQLDIEKNTKOJRHUDVFXRRGVHLZHIZWJKVCPNASLFOMYYCJI");
    msg.last_error.assign("OIJEKVCDKPQMCMFZOIAHLGKSLCBABDYIRHYZTNODYOVBAEQWAEUXFEBJFARHVGLCYWGYOSVWUBUMNPFHKAQGIHIAHGVMOEUYCZPFUIJSTLKQPSNIOGDJZQ");
    msg.last_error_time = 0.0894477086385;

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
    msg.setTimeStamp(0.752040772636);
    msg.setSource(60932U);
    msg.setSourceEntity(129U);
    msg.setDestination(36621U);
    msg.setDestinationEntity(252U);
    msg.mcount = 115U;
    msg.mnames.assign("BQYWVJWEOIOJFBQZBGVWRDQCKIDRSMARZTNSLPQLXIBCCGTTXOHUUFSJXXUABWXMHPJYZUPVNBGJXKGV");
    msg.ecount = 129U;
    msg.enames.assign("IKYYLDHCSLJTKCGWNY");
    msg.ccount = 33U;
    msg.cnames.assign("ZJAFSKXVAUDNVZRYORXVOMALTSSKFDIIDJRDKSUSCREEDALAPUJMPVCKIGTWFBZBGBNYFCFMQHKDUXPQBVNBWEPOAYIIGPXWGMQRLVRPQUEDTXBYXWYLTKZGHUUSOWSBRXTCHPYBRSVOOZAOMNIEJLZICMPQBNAJHZGWJECSFXMLQMFRAKIQEKKOKEHHDFOZHWZLDUVPTNWGPDBGULHICFITYVEYGMSJJUNJNAXJQT");
    msg.last_error.assign("CESZJTEAHIBMYJERGEMZIULBLWNHVQSTCUEYNUUGCOOXZEALRHNFRKBWGZKCXUQSPUFCIMNDSCFJDVJKFTPEUFSWGBYQAFPBUMAXNMJWXBJICBGLDDWKVJLMJKVMQPTPDRQKNGTBHSTYPIVHOFAOGUZHHIAMSEQBDSGIJTYIIQ");
    msg.last_error_time = 0.955637780261;

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
    msg.setTimeStamp(0.947807767925);
    msg.setSource(25078U);
    msg.setSourceEntity(54U);
    msg.setDestination(56073U);
    msg.setDestinationEntity(88U);
    msg.mcount = 46U;
    msg.mnames.assign("TCDBKVPSUTSXESBHDCNCCMVSWDUXDQNSBPNYMSZWQZFOFBREFXGYZZJYRRRNAMRKFTLAATBZHOZTJVGCOSEFGAXJBJIIOWMCYCPTVLGKMEUGOKEWHBLWINYFXJZXRUCZLMQKPANUYVHOPVEGIYPXAWMUYQDGTDNVISVQLKHUVNDBJOTSJQIKGUOIWUW");
    msg.ecount = 210U;
    msg.enames.assign("GTOCTSFUBWULJEFBJLBWOISLYFDMBWXGKKGFYRWQVHVWXYEIAZHCPSTUQZYWJNXMXQOKCYJKMIKOEDTTCWEPTDQZJWFVLDGQUJFDAWHSLYZTMSPQBHAEH");
    msg.ccount = 77U;
    msg.cnames.assign("PUFQYMRHXYFIGJWDDWXBZATSMHNYDTNURILFKHQXXPKCWDMEBJJQSEXBILRFPXQNYYZHLNMFTYTRBRPUBKKCRYEDADWVVHHBHUPFIMRAYJ");
    msg.last_error.assign("UIYGMCPIAMFXRJTKAYYWHAESKNUWZQSVARMJDXDBPTEDUDSNVFRLUYZFPNRJSZXYKXKWBXMUZKOIGVTQQFCZAKOINRTHZRJHXSTGIOCFPILLAKESWRLOZFCKOAFLNAHWUDGPOPROWNGFQPPDSECGVTUCXGYYJATUFCBZHODYLOWDQZQMJHEJGTIED");
    msg.last_error_time = 0.543186010348;

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
    msg.setTimeStamp(0.236716173081);
    msg.setSource(16176U);
    msg.setSourceEntity(59U);
    msg.setDestination(26496U);
    msg.setDestinationEntity(250U);
    msg.mask = 7U;
    msg.max_depth = 0.704330996501;
    msg.min_altitude = 0.232776903078;
    msg.max_altitude = 0.660719154842;
    msg.min_speed = 0.429229321165;
    msg.max_speed = 0.0934289656368;
    msg.max_vrate = 0.0694659234147;
    msg.lat = 0.402605399035;
    msg.lon = 0.134932283846;
    msg.orientation = 0.611491442019;
    msg.width = 0.667911634552;
    msg.length = 0.166259901884;

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
    msg.setTimeStamp(0.37080796343);
    msg.setSource(37539U);
    msg.setSourceEntity(217U);
    msg.setDestination(41618U);
    msg.setDestinationEntity(106U);
    msg.mask = 15U;
    msg.max_depth = 0.637391535236;
    msg.min_altitude = 0.0927774399102;
    msg.max_altitude = 0.881648503099;
    msg.min_speed = 0.711424737629;
    msg.max_speed = 0.470601821411;
    msg.max_vrate = 0.774785314663;
    msg.lat = 0.565209948659;
    msg.lon = 0.459564035483;
    msg.orientation = 0.816610001701;
    msg.width = 0.14896872339;
    msg.length = 0.154335327172;

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
    msg.setTimeStamp(0.0922490441451);
    msg.setSource(181U);
    msg.setSourceEntity(129U);
    msg.setDestination(58320U);
    msg.setDestinationEntity(125U);
    msg.mask = 26U;
    msg.max_depth = 0.401500075585;
    msg.min_altitude = 0.823067684364;
    msg.max_altitude = 0.648688224013;
    msg.min_speed = 0.380200909151;
    msg.max_speed = 0.129926078191;
    msg.max_vrate = 0.714010229786;
    msg.lat = 0.488727035052;
    msg.lon = 0.791864177613;
    msg.orientation = 0.409731895129;
    msg.width = 0.0227425826301;
    msg.length = 0.55691810432;

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
    msg.setTimeStamp(0.25178412918);
    msg.setSource(60901U);
    msg.setSourceEntity(123U);
    msg.setDestination(7747U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.403027102408);
    msg.setSource(62226U);
    msg.setSourceEntity(250U);
    msg.setDestination(47449U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.875582374831);
    msg.setSource(43214U);
    msg.setSourceEntity(27U);
    msg.setDestination(48870U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.525183916089);
    msg.setSource(534U);
    msg.setSourceEntity(171U);
    msg.setDestination(50709U);
    msg.setDestinationEntity(237U);
    msg.duration = 41099U;

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
    msg.setTimeStamp(0.509384875521);
    msg.setSource(54116U);
    msg.setSourceEntity(251U);
    msg.setDestination(22199U);
    msg.setDestinationEntity(52U);
    msg.duration = 24526U;

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
    msg.setTimeStamp(0.197573408191);
    msg.setSource(15255U);
    msg.setSourceEntity(216U);
    msg.setDestination(60660U);
    msg.setDestinationEntity(85U);
    msg.duration = 42286U;

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
    msg.setTimeStamp(0.137216448665);
    msg.setSource(34200U);
    msg.setSourceEntity(87U);
    msg.setDestination(2652U);
    msg.setDestinationEntity(224U);
    msg.enable = 52U;
    msg.mask = 3139677874U;
    msg.scope_ref = 2968685274U;

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
    msg.setTimeStamp(0.455222607544);
    msg.setSource(23657U);
    msg.setSourceEntity(164U);
    msg.setDestination(5599U);
    msg.setDestinationEntity(242U);
    msg.enable = 128U;
    msg.mask = 1189015422U;
    msg.scope_ref = 120585920U;

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
    msg.setTimeStamp(0.944849124143);
    msg.setSource(55624U);
    msg.setSourceEntity(84U);
    msg.setDestination(11744U);
    msg.setDestinationEntity(43U);
    msg.enable = 78U;
    msg.mask = 3448456106U;
    msg.scope_ref = 3525694779U;

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
    msg.setTimeStamp(0.337511624665);
    msg.setSource(59318U);
    msg.setSourceEntity(133U);
    msg.setDestination(27443U);
    msg.setDestinationEntity(136U);
    msg.medium = 117U;

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
    msg.setTimeStamp(0.194226604468);
    msg.setSource(17184U);
    msg.setSourceEntity(129U);
    msg.setDestination(8240U);
    msg.setDestinationEntity(249U);
    msg.medium = 53U;

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
    msg.setTimeStamp(0.152757116362);
    msg.setSource(21944U);
    msg.setSourceEntity(242U);
    msg.setDestination(55484U);
    msg.setDestinationEntity(75U);
    msg.medium = 52U;

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
    msg.setTimeStamp(0.217046274812);
    msg.setSource(12589U);
    msg.setSourceEntity(95U);
    msg.setDestination(59948U);
    msg.setDestinationEntity(31U);
    msg.value = 0.193126350319;
    msg.type = 197U;

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
    msg.setTimeStamp(0.116853059661);
    msg.setSource(38408U);
    msg.setSourceEntity(39U);
    msg.setDestination(20672U);
    msg.setDestinationEntity(228U);
    msg.value = 0.18837977985;
    msg.type = 253U;

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
    msg.setTimeStamp(0.947360341312);
    msg.setSource(64882U);
    msg.setSourceEntity(130U);
    msg.setDestination(42297U);
    msg.setDestinationEntity(49U);
    msg.value = 0.17581165516;
    msg.type = 147U;

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
    msg.setTimeStamp(0.540959636524);
    msg.setSource(17056U);
    msg.setSourceEntity(195U);
    msg.setDestination(32294U);
    msg.setDestinationEntity(97U);
    msg.possimerr = 0.596383021932;
    msg.converg = 0.485422704394;
    msg.turbulence = 0.0573649965756;
    msg.possimmon = 94U;
    msg.commmon = 225U;
    msg.convergmon = 211U;

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
    msg.setTimeStamp(0.945524101843);
    msg.setSource(55865U);
    msg.setSourceEntity(43U);
    msg.setDestination(52524U);
    msg.setDestinationEntity(103U);
    msg.possimerr = 0.391866674588;
    msg.converg = 0.812765448583;
    msg.turbulence = 0.26627780231;
    msg.possimmon = 13U;
    msg.commmon = 3U;
    msg.convergmon = 142U;

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
    msg.setTimeStamp(0.38683586692);
    msg.setSource(33681U);
    msg.setSourceEntity(246U);
    msg.setDestination(17063U);
    msg.setDestinationEntity(67U);
    msg.possimerr = 0.760747939465;
    msg.converg = 0.0219126546904;
    msg.turbulence = 0.120896382832;
    msg.possimmon = 23U;
    msg.commmon = 245U;
    msg.convergmon = 100U;

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
    msg.setTimeStamp(0.447688256521);
    msg.setSource(45829U);
    msg.setSourceEntity(15U);
    msg.setDestination(51875U);
    msg.setDestinationEntity(172U);
    msg.autonomy = 234U;
    msg.mode.assign("OPFUKZDOVKYVNHGXTALXMACDEE");

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
    msg.setTimeStamp(0.404303503607);
    msg.setSource(37826U);
    msg.setSourceEntity(106U);
    msg.setDestination(43606U);
    msg.setDestinationEntity(35U);
    msg.autonomy = 190U;
    msg.mode.assign("LXKSILWGSCEYBTWDKJKOIBIFRXJXUVULUSGBZNWOLRZYVKNZNDEZYMEYLZWEJQFUZNTCLYAJOQNYPETUPICLAAJNBQDPRKCXWRKCVXVOUSPEKDBCDOAJMZAZKGRTIRGXVSYPFXDCDJEYRGLMWWGAAOVUMQTFHYQHDSZRBHDQITMCXFPUMFOGGHHFRWPHUFKMQLQQHZIIPBYWUMTEHJFNOVFEBXVVDXNQPSJORMBGTWOSSIHAEP");

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
    msg.setTimeStamp(0.787287554059);
    msg.setSource(56548U);
    msg.setSourceEntity(82U);
    msg.setDestination(26090U);
    msg.setDestinationEntity(66U);
    msg.autonomy = 220U;
    msg.mode.assign("FCSYZVZZFCUJGWKNORRBLXUDKIPTWJGDHLZVLHPRFEQBHTLTLJCAEKAYBDWJGPTQNQHRYLFYOLTYQSEPKCCNUMAITXYGPNRQRMXJADRGKGYGDW");

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
    msg.setTimeStamp(0.949338881296);
    msg.setSource(156U);
    msg.setSourceEntity(183U);
    msg.setDestination(40453U);
    msg.setDestinationEntity(5U);
    msg.type = 22U;
    msg.op = 71U;
    msg.possimerr = 0.00381418544648;
    msg.converg = 0.0472495914587;
    msg.turbulence = 0.373935645082;
    msg.possimmon = 180U;
    msg.commmon = 234U;
    msg.convergmon = 128U;

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
    msg.setTimeStamp(0.540602304494);
    msg.setSource(42615U);
    msg.setSourceEntity(166U);
    msg.setDestination(5478U);
    msg.setDestinationEntity(146U);
    msg.type = 78U;
    msg.op = 253U;
    msg.possimerr = 0.621189046959;
    msg.converg = 0.380817111171;
    msg.turbulence = 0.72719637596;
    msg.possimmon = 107U;
    msg.commmon = 116U;
    msg.convergmon = 242U;

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
    msg.setTimeStamp(0.865672209943);
    msg.setSource(16592U);
    msg.setSourceEntity(151U);
    msg.setDestination(30051U);
    msg.setDestinationEntity(244U);
    msg.type = 159U;
    msg.op = 231U;
    msg.possimerr = 0.544521105529;
    msg.converg = 0.733667437572;
    msg.turbulence = 0.943666492996;
    msg.possimmon = 114U;
    msg.commmon = 49U;
    msg.convergmon = 131U;

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
    msg.setTimeStamp(0.16430842072);
    msg.setSource(9940U);
    msg.setSourceEntity(145U);
    msg.setDestination(42030U);
    msg.setDestinationEntity(218U);
    msg.op = 21U;
    msg.comm_interface = 37U;
    msg.period = 42838U;
    msg.sys_dst.assign("NSQDYKJPVBGRUKWQRWVCZLGZPURUTSJMUGGHECSCTVJLZRILDCYFMYQFEEWMDRVOFFGAYYIVJQEBGFBADNFNWELMCKOCERGPWEZMXAFTYVKYMWYLOLJVHZVOCEZJSBASNBORPDHDPHDGEUDSLBLFABWUPNOPTATXSAQZAOAOSXPQRKQZOHHIWYMEHGTHIMNTCVNSXQKWZFFTIGJIIUABQIKMIUXYXNTDMXJSDVPZQ");

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
    msg.setTimeStamp(0.568490756402);
    msg.setSource(64733U);
    msg.setSourceEntity(125U);
    msg.setDestination(39220U);
    msg.setDestinationEntity(170U);
    msg.op = 50U;
    msg.comm_interface = 7U;
    msg.period = 2233U;
    msg.sys_dst.assign("SLDUGXVWXEGARJWWZKTLVBCXWXSOPKMQFDXSQTRFHMMDNLYHAAUMEOUYWSXQAIBCGQFBBPEADHLV");

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
    msg.setTimeStamp(0.838022457928);
    msg.setSource(52721U);
    msg.setSourceEntity(182U);
    msg.setDestination(54559U);
    msg.setDestinationEntity(74U);
    msg.op = 131U;
    msg.comm_interface = 162U;
    msg.period = 20143U;
    msg.sys_dst.assign("ZCTUMPRKBMWQSTPOYVXHFQFH");

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
    msg.setTimeStamp(0.735337915581);
    msg.setSource(20894U);
    msg.setSourceEntity(254U);
    msg.setDestination(41306U);
    msg.setDestinationEntity(217U);
    msg.stime = 2163540470U;
    msg.latitude = 0.0210870407469;
    msg.longitude = 0.459459750741;
    msg.altitude = 5008U;
    msg.depth = 17541U;
    msg.heading = 32717U;
    msg.speed = 13668;
    msg.fuel = 40;
    msg.exec_state = -73;
    msg.plan_checksum = 422U;

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
    msg.setTimeStamp(0.959578059089);
    msg.setSource(42517U);
    msg.setSourceEntity(24U);
    msg.setDestination(29477U);
    msg.setDestinationEntity(220U);
    msg.stime = 47418743U;
    msg.latitude = 0.0193033423139;
    msg.longitude = 0.217896146016;
    msg.altitude = 18954U;
    msg.depth = 64003U;
    msg.heading = 49803U;
    msg.speed = 2306;
    msg.fuel = 120;
    msg.exec_state = -58;
    msg.plan_checksum = 25871U;

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
    msg.setTimeStamp(0.0397749491916);
    msg.setSource(64474U);
    msg.setSourceEntity(66U);
    msg.setDestination(18508U);
    msg.setDestinationEntity(40U);
    msg.stime = 1574952614U;
    msg.latitude = 0.246810938048;
    msg.longitude = 0.239349674527;
    msg.altitude = 13996U;
    msg.depth = 48839U;
    msg.heading = 37281U;
    msg.speed = -17593;
    msg.fuel = 62;
    msg.exec_state = -19;
    msg.plan_checksum = 55542U;

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
    msg.setTimeStamp(0.526531424835);
    msg.setSource(2435U);
    msg.setSourceEntity(144U);
    msg.setDestination(15788U);
    msg.setDestinationEntity(190U);
    msg.req_id = 57597U;
    msg.comm_mean = 191U;
    msg.destination.assign("FTEFMZKHYCDNAOAUJLUVRGGWVAAVOQJRRXRYNOIWU");
    msg.deadline = 0.813983196577;
    msg.data_mode = 176U;
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.899182939617;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WYDOAGCBXALUPUKDDOTVDJTVVPYLZHCCFYASJUZBZJFGMRTRMEEOIENSXOXNRDLLLFOBEZTBEIPKIXNFJQTORFVSPZISHYEQJVIBQHGMFG");
    const char tmp_msg_1[] = {100, 12, -79, 11, 81, 8, 27, -117, 41, -103, -16, 37, -71, 63, -115, 53, 15, 28, 70, 6, 98, 76, -33, -24, -87, 63, 86, 22, 116, -120, -94, -45, -61, 46, 45, -66, 45, -59, -111, 113, 38, -78, -70, -108, -52, 18, 1, 43, 107, 98, -87, 70, 97, -66, -82, -73, -27, 59, -32, 96, -85, -3, 9, -24, 101, -92, -18, -15, 78, 39, -52, -83, 115, -84, -115, 56, 63, 82, -58, 14, -128, -105, 43, 115, -99, 64, 108, -26, 76, 14, -58, 91, -70, 56, -15, -35, -118, -58, 108, 62, 2, 80, 123, 120, -64, -26, -47, -84, -81, 86, -120, 62, 27, -100, -66, -62, 26, 123, 49, 58, 60, -35, -18, 99, -17, -3, -25, 64, 103, 4, 5, -83, 67, -100, 101, -32, -46, 50, 65, 90, -124, -27, -95, 13, 9, -46, 21, 13, 84, -102, 44, 46, -8, -35, 15, -28, -105, -108, -49, -25, -45, -27, 1, 106, 46, -88, -126, 35, 69, -72, -19, 79, -34, 112, 79, 16, -115, -33, -127, 10, -26, -22, 13, -27, 98, 118, 21, -57, -108, 113, -20, 126, 125, -57, -79, -34, -6, -71, -64, -51, -62, -117, -121, -2, 105, -91, -88, -62, -80, 40, 8, -91, 79, -26, -18, -64, -40, -95, -46, -107, 30, -102, 43, 86, 112, 4};
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
    msg.setTimeStamp(0.581902667384);
    msg.setSource(5672U);
    msg.setSourceEntity(75U);
    msg.setDestination(56990U);
    msg.setDestinationEntity(90U);
    msg.req_id = 45021U;
    msg.comm_mean = 222U;
    msg.destination.assign("MXNVKKWGTRZDWVKDBDJCOSRTKUUEOOQPIJCPFUAQGROHZPMUEOYEJFVCIFEKFHYTJDCBMLWNTNATIPAVHOZUZLYQLVAKIMWNOSLYUGWUAJZFDRRQDNVRZZZLTWJ");
    msg.deadline = 0.45763955866;
    msg.data_mode = 100U;
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 58424U;
    tmp_msg_0.destination.assign("UIQCBHGRKPMROAXMPEKSKZQOKHJZYONDWBQFXYOQWQHLSIXOSEFZCNMYJXVHRAHFTOOYYHHCVNM");
    tmp_msg_0.timeout = 0.98396676899;
    tmp_msg_0.sms_text.assign("RIYXOAGCYBOULPJLJBFVZMDKXSPNTZNKWWWPDAZWWFRGGPFAVYJKEKOSZJIGNBUBOXFGEJVIVTIDMDBAYKNUQTRVFUONDNUFMXXVSIRWTTOHOKBTPOMVQWICASRNYIQCAHTALFGLGYXONYXUSEMZHSQJQVDKPHMDRIXEGYSHRELGCFLKVTZWPHSMLXHZQWJIKLQTNSPRQHCEJBEVMPAACCSBYIHZYUGUDZBBUJWQCFLOPC");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("IOODWOXUCHXILHSUGMCELPYBHMEZINHJJBVAPDNCNRIGWVOMNMALQZYCMMRPO");
    const char tmp_msg_1[] = {-67, -122, 81, -32, 86, -89, -121, 17, 43, 126, 111, 43, -108, 11, 8, 28, 87, 94, -21, -110, 15, -88, -99, 19, -6, 45, -9, -30, -24, -24, 102, -29, -105, -34, -126, 73, -11, -88, 90, 26, 18, 24, -45, -86, 61, 32, 22, -109, -19, -122, -17, 97, 54, -115, 52, -113, -52, 114, -49, -56, -41, -84, -58, -99, -102, -63, -57, -3, 33, 55, -25, 13, 70, -3, 84, -86, 30, 70, -11, 39, 38, -58, -91, 70, -68, 41, 43, -62, 59, -108, -116, 16, -68, 117, -39, -125, -76, 115, -45, 70, 73, -47, 64, -87, 44, 122, 17, 9, 38, 54, 65, 30, -86, -34, -113, 65, 79, -5, -48, 114, 121, -21, -26, -17, -104, 57, 71, -5, 32, -118, -51, 99, 50, 17, -75, -97, -63, -75, -55, 106, -64, -12, -126, -9, -121, 10, -113, -39, -8, 103, 10, -52, 25, -111, 75, -43, 115, -76, 31, 80, -60, 78, 54, -48, 64, 120, -91, 12, -17, -89, 6, 51, 30, 76, 24, -55, 87, -91, 22, -114, -68, 57, 25, 59, -26, -23, 53, 115, 108, 105, 38, 54, 125, 44, 76, 59, -45, -47, -75, 21, -39, 103, 30, 32, -74, 118, -16, -52, 111, -89, -31, 109, -101, 107, -119, -34, 67, -73, -12, -16, -63};
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
    msg.setTimeStamp(0.422119365715);
    msg.setSource(52209U);
    msg.setSourceEntity(81U);
    msg.setDestination(21338U);
    msg.setDestinationEntity(6U);
    msg.req_id = 58831U;
    msg.comm_mean = 180U;
    msg.destination.assign("LLOUHTSXYUNCAWKF");
    msg.deadline = 0.0586536022687;
    msg.data_mode = 122U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.198796607713;
    tmp_msg_0.lon = 0.370280687237;
    tmp_msg_0.z = 0.269534084521;
    tmp_msg_0.z_units = 10U;
    tmp_msg_0.speed = 0.791499002979;
    tmp_msg_0.speed_units = 54U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.442681308876;
    tmp_tmp_msg_0_0.y = 0.59214256987;
    tmp_tmp_msg_0_0.z = 0.74970601583;
    tmp_tmp_msg_0_0.t = 0.993802841419;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 46866U;
    tmp_tmp_msg_0_1.off_x = 0.87948575143;
    tmp_tmp_msg_0_1.off_y = 0.494774992451;
    tmp_tmp_msg_0_1.off_z = 0.124451470482;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.52728986147;
    tmp_msg_0.custom.assign("IPEDGMOYFNUXMUWYOJIUCZQRKMTEADIQIJZNTJJABOFUVETKAMBRKMEBXGLUTQDPPOWCPPZXVSKYHGNXVXNJZWDOYBYWHRZTMTFISWFOBGFAYQCPJRPRQSWULFKBJJMIRVXQPWZTOLHWZGNKZEQLFBTDYVLOFEPNYMHNAQ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QHSWXGJGGZCKEMDDHEUKPJZKIIUVIXYBHGQHOBPATENHNCSBFRLTCHLRMFPOENCBHEJEZNZQVJFKFAJQIDCPRFOXIYCWUXFKPXWDXQUOXSBYCRAROQMXATRIVLNMEDOROVUKSEFNLQVBODEAYWXXT");
    const char tmp_msg_1[] = {21, -85, 112, 74, 24, 40, -111, 12, 61, -60, -85, 83, 50, -81, 77, 90, -38, -27, -58, -35, 115, -124, -31, -113, 86, 23, 35, -116, 105, -122, -12, -91, -56};
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
    msg.setTimeStamp(0.107992619579);
    msg.setSource(15665U);
    msg.setSourceEntity(40U);
    msg.setDestination(64131U);
    msg.setDestinationEntity(97U);
    msg.req_id = 4341U;
    msg.status = 158U;
    msg.info.assign("LBBFSPGEDYKCUGUQJRLGZJPOEJAQIBJPJXPILOLQKHFXKPHWKCCIXQPZJJ");

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
    msg.setTimeStamp(0.206998308653);
    msg.setSource(11653U);
    msg.setSourceEntity(143U);
    msg.setDestination(2262U);
    msg.setDestinationEntity(46U);
    msg.req_id = 35845U;
    msg.status = 124U;
    msg.info.assign("HYOUMOXGMDUNFLPZMTJILDKDJEGXYJZLWPTQJQCBZINEZGQUIAUTSNXSQMAJAWTRBQSRIBAN");

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
    msg.setTimeStamp(0.330337426789);
    msg.setSource(50207U);
    msg.setSourceEntity(204U);
    msg.setDestination(7160U);
    msg.setDestinationEntity(32U);
    msg.req_id = 48463U;
    msg.status = 63U;
    msg.info.assign("HQAROYLIUOQHFWBQYGMXCGAUGUNVJMNRKSHZB");

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
    msg.setTimeStamp(0.399460085604);
    msg.setSource(45845U);
    msg.setSourceEntity(103U);
    msg.setDestination(56316U);
    msg.setDestinationEntity(174U);
    msg.req_id = 60922U;
    msg.destination.assign("LWKKIPONZRDPHCGDRLQBPPDWHIGEYLKXBCAJTWPHZLCITAZABJHDXSFUEUWOPNMWBIRISLEQEMHTUURXRADSAAUOFLTMBXVOVZYVYOGVNOAHJNZFDGLWJCYRCMHLKRHANYJESOIVTEXZMPSVKBOMTQTPZRVCQHFJQQVBLAEUMMTFZXIDEDUFCNVMQY");
    msg.timeout = 0.665136022868;
    msg.sms_text.assign("NQVLSRVPPTQMJWZUJFJNVHPX");

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
    msg.setTimeStamp(0.432138915167);
    msg.setSource(30775U);
    msg.setSourceEntity(184U);
    msg.setDestination(2313U);
    msg.setDestinationEntity(206U);
    msg.req_id = 58180U;
    msg.destination.assign("AMVJKFPZWNWNZAFOYEPGSQGHCBELJKFCIDTYIJLUETXGMHJDWOEPYRLAYIWSWIAXQASSZFJXIGEORWRIHFTGLHWFDXDXJMXLDPECVBAWSQYOAMTLKJNNVTOR");
    msg.timeout = 0.588821740055;
    msg.sms_text.assign("FCVWPAPNGANNGTCQRKPKZGOBBMHFTALZRQXZKITOCBEGMLTYEBUPJLNNIUXXEEKXDNLSSNYBKWLRYCWXVPSJIYWAFFDJECKPDEJWGNPTKQHOIOYVVMBQFJHTIMAJLITUHSEMUVNYRSEYGDJOOGFHHKWBHSDZILYURXJOZHQIIDMCVNDMPHURDXVJAAPLZLTUMESBQOOKJQXKGMHVFCQYQMUFSDATLVUX");

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
    msg.setTimeStamp(0.15267973728);
    msg.setSource(17350U);
    msg.setSourceEntity(189U);
    msg.setDestination(50491U);
    msg.setDestinationEntity(100U);
    msg.req_id = 23518U;
    msg.destination.assign("MFVQGNYXPFTHHMSOMRYMFDDLXDTIJENAEPCLOMXCXPBOUXUURARRMWFNVUOCLWKFSANHQIXWJQCJQCTZSVIQZBLGQAPIRGUEIRBKZWYFZRYBJDKIVJNIQFRHHT");
    msg.timeout = 0.820464536833;
    msg.sms_text.assign("MZOANJIXLACNUCKRSKVTIOFHDRMTDGCYIYJEIMOPMELQVJYUBKDSRTVGVBGWAGTNAQDUXTXWYPFAENMDFPQJTCXPLCHIFWXZZSMHJTWRHVILMIWCRZPYFWUFDCHYMBCWZTEHDLMWLBKAHJQYQXLIUUAPSBYPTPWOQAKZVAZQNJQXHVEHBXTIROOPGNHZKKEOAUNERGDOCJBD");

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
    msg.setTimeStamp(0.0161831389687);
    msg.setSource(30029U);
    msg.setSourceEntity(97U);
    msg.setDestination(4983U);
    msg.setDestinationEntity(252U);
    msg.req_id = 65419U;
    msg.status = 142U;
    msg.info.assign("ABNJNGCMEGMHYVMYYVTTXINXXWVHWBKXLHIQLOMDMCGORNOBFJBZITAHCMOZZNKSYUATNHCPDAYRWQPNGJUFXWPKNUYWPGWKPKXTPLSCFXVSASSJSRLOLZTAIQMOCXEBVFYKAIIHDNUU");

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
    msg.setTimeStamp(0.765868039086);
    msg.setSource(37291U);
    msg.setSourceEntity(41U);
    msg.setDestination(6439U);
    msg.setDestinationEntity(74U);
    msg.req_id = 14912U;
    msg.status = 188U;
    msg.info.assign("RLSQOCKFLWRVMWTLWBJXAITYSLQDIFEWGNTFCYNJJRXBKVFRRYPEQIEQFDCWLEHRZZDNJBMHEKVHLRMVCVPQIXLGMUGGSBDMDSWRWOSAB");

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
    msg.setTimeStamp(0.842910712955);
    msg.setSource(38983U);
    msg.setSourceEntity(235U);
    msg.setDestination(26615U);
    msg.setDestinationEntity(75U);
    msg.req_id = 22050U;
    msg.status = 251U;
    msg.info.assign("EKHITEANWOMHPJARAKPFZFDXNDAXLYBQPKTDLCJKBESVFOCUPWKNCIWKUCETVLESMJAZOGNRVDPTYHRCNWIQMTSUDLIYBOCYUVGQLEXZFQUIWXPFLOXJBIYQQUHIYLJCBZHFBTWHJRZJTUCKVUDYUYGMJLQQLOEHHBRXGNSGVOUQRATXSZNEVFOPZSNKRMASFEYGMVFWDWTCBKAPWJQDFAAHCWXBRTPGXZDZXMVMMKNZBROIDSPNRGHMO");

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
    msg.setTimeStamp(0.372033050891);
    msg.setSource(5796U);
    msg.setSourceEntity(103U);
    msg.setDestination(23280U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.709607981445);
    msg.setSource(63012U);
    msg.setSourceEntity(178U);
    msg.setDestination(57180U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.495253577169);
    msg.setSource(4288U);
    msg.setSourceEntity(163U);
    msg.setDestination(21174U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.938465119632);
    msg.setSource(48377U);
    msg.setSourceEntity(67U);
    msg.setDestination(7677U);
    msg.setDestinationEntity(84U);
    msg.plan_id.assign("TNXQXWMUXBVLXLMOCAEHFICLQQYUVWMRFEETIOTZLVKKRDXOJHZBWZJCHQXKSPJOAPTMCJFGKDNAKLCHYLFGOOEBUARFJVMVPWAFTOPKODGUPDWSIBUACNJBQDIHJHGRSZHZYBMEDFZUOFGRNZYPHZ");
    msg.description.assign("IRYXPDEWPHEZRNQLOKHKFGCUZQXOSNZWUJKGWVYHPAXTWWIHOLRWVBJIIZUHGKSRRBSVCCKOVJIZANHXVNUMLFPEPXCZYTE");
    msg.vnamespace.assign("OTTTIKPQYJNUQEACKFKAJWJNNVZXOUKYYKQJNAGSPGFJZHAXWADCJIPBJSZYFFXHBRGOJSWMLXHTVAHPNVKQYENAPJOICSTAQLECIVDEMHUCCDZXLCLTLSDMUCXVDEGBCNMHPJMZOXFRFXNINXMYHUYLDHWZYEGBYFOWQRIGRDZBBMASSPGVVBRDSKIFWOKTLGBWFLVTZPITMAQRREWEPEDNGURRIFIYEWQVHO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VMHCAXGCGWQDDLRZLWMKZKI");
    tmp_msg_0.value.assign("WOQVYURPJMIOVSVRVYKGRPLUUMBOWUBLRIUFFZRLNCVTQJKYHMATMBMOJMUAYHJTZOZEOWGSSVBEXEFDYLRDJFXAYQEFVMIPHMEXANNQDNBXISDNNDGXILCPGZOXZWFUDEIAHJDCHNBGZA");
    tmp_msg_0.type = 106U;
    tmp_msg_0.access = 5U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FCEBLZFMTVHBMEIDYPYUFJGOZDDIXRVMQWIRMUQLUUXJRGOBEQAIJTYFPCHQQOSNCHAMKGNFTUFITJCJEYECRNCMKZNWNMUHCOHTXWNWKPAPSIXBLFJBNWWDBBJYOWTZGGDGZSPXPKDOVVHOPXYVNUSHXOOVKMJWQTDFZAEISTYKRXNUXZCKWPYATNSVRAAVHDAGJLUQTYERLICQASRG");

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
    msg.setTimeStamp(0.67195224641);
    msg.setSource(22154U);
    msg.setSourceEntity(119U);
    msg.setDestination(44269U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("TKXWWRWARXLFVTQYGZOKRTNBKXVFOEWOGNNIQWHHOQPFTMCWPMCRYYCLFOSTKZTQVXRIDTEOYAZJAGMWYNPPLAASZ");
    msg.description.assign("JATTGRAHIOIGQODBKUGDWRJEAXFLYEONWYLNXUCCPYHTJDRHTTOHUABRPUTIUXLHXKAOVFSGEZHLIOS");
    msg.vnamespace.assign("TKRBDQEOCYAORKLMAUUPDMWQDDXANBAJWYBXCULQZITYHQZRCBFZQDHOFZNBERLXSHMPHFLJGYUWTIXRZLLOINOXXRNVSXTWSRYPZQD");
    msg.start_man_id.assign("ZWMHCGLWFHKNBJGTRSSCPDTPENCFEULDHQAGXKFTSOMFPNEKTKOPBUEUDHQJOVZYUTEARFQNZNYIUQFOXXQKFSYQACOLWVXWTIULBBDMJGMQTCNWNGAEIGRRYDMIWOHBESKLVSBZEBRLMOYDH");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XSHNWAWGLDETKCLFURDUVMVFMCWUJXWAACXWKENNQOIXDIBJQNPAQJNVCXVWBYPSNHYBMSVRMMNLJLRSYJRTBKZTUVTQUWRGZPOZFVMRYSPZIZTOYRSQGYZXVYCBQHNGCLEPIBEOOIQMHORKGFEKGDVLAJDHWTBEMDXFBJXJJKHKRIDCGRYJVHBZUTUZGADQWCHOFOITPCUOPUQAPLCEADEPQAGSSW");
    IMC::Launch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 3507U;
    tmp_tmp_msg_0_0.lat = 0.249372918538;
    tmp_tmp_msg_0_0.lon = 0.346760681893;
    tmp_tmp_msg_0_0.z = 0.453506161237;
    tmp_tmp_msg_0_0.z_units = 57U;
    tmp_tmp_msg_0_0.speed = 0.837731865686;
    tmp_tmp_msg_0_0.speed_units = 236U;
    tmp_tmp_msg_0_0.custom.assign("WDTXOYXISVJQIHDDEIMKHEMNKBOKAENYQROWEGVDABRHTACRXOHSJERQIFXSUGIAPBERUBVWPQSYQTUZZLGYFDOPKNGJQDQSCTGGEKAUUJFGHZCVCVCMMCRDBTXIVSCSBPLHXNRLHFFKOMZLJYMDOCAWVZXZTLVUHCRWLLKSWUCWGJMFJ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Event tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.topic.assign("POSZACTDUXEDUSLVBEZRLVWGBDRYUEICNPSSJMHIRHEYZPCOQGFESJYPZKDVVXVEVZDLNQLTLMGJFEYYNCUNQBC");
    tmp_tmp_msg_0_1.data.assign("YRTNXGGQOULAFHSCXKMUIFKGIKWBEXGUBLVLMWJHYJCVBFIXEZPDTVSAOZQHIXBTVYEGRFSLVMQNUAGBIBECWCAYQJXCEWNMZNJLOIWQRXYRECDZTXFBMDFTVJPETHUCYAKHKJJFCXCTZPPCOERVMWDKRMIPZOONAVGHNGZGJADKPXTSHNDSFJQLAURVDTQNZESNOLZDQBMUJYOQDOIFLRTDYSENMPWKAQWVBK");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::QueryEntityInfo tmp_msg_1;
    tmp_msg_1.id = 35U;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.134127774676);
    msg.setSource(1490U);
    msg.setSourceEntity(208U);
    msg.setDestination(2174U);
    msg.setDestinationEntity(119U);
    msg.plan_id.assign("YFNTXNQGBVNFHOPRDXBYRGWYMBELICEWACPKHOKCNBQHDIULZSXRZEXCAJWZPNGVMBYNXLURFAKGMRLZJOIZMIHMVBAQOHSDVCEHCWQDQUNN");
    msg.description.assign("CSPUHSXTUOVDQWIYYKZUNHUYSROAXIIUEOLQWWWJJPQXQHLLHJBKGQKLGTEAGDJSFJFHWGMRPVASPRERIALSXDOTOUITXVMYFDCTBPNRIDSYMTLZPC");
    msg.vnamespace.assign("ZKHQTMXTEJHDYZRBBERTPSZFZBYCQRPBVVFSDXKDHQUJRUNIKIHGEBAUQZXSUDGCFDUFNOTKGUPAWCEIGOJBGGPJKDEHJNVOSSAQHYPMRUWTPWUMMPXYMSVXIIXIOAWHDVQTRBFOPUCEUVGKTGLRQKCVLNQBJZZCTYODWMYEFWMWVI");
    msg.start_man_id.assign("DEYAXRWGVPZWDJHFSTHJLRIANNWTHJHCUKKZERFTZQPCQXQIOOBDLVROHPUVGESIMTXTSSHBXBPAMTMCRUMJTLXAZONGFYEKWCQYQERPTZANSSBWKLGVMUNZEUCYDBBMPKSFPQGVXXGWMOIMNYKZKVYDHEYIASKTDLOYFVAFCLJEPBTGRXLKDGAWQX");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XDJCZSOYAYFNNVCFVNHLMZUYZUYRSMXHSNYIRONIRHBFNIDXBGRVFBFWBRDTJHLGADWLLPCMUOETAEEGMKQLMBLNVXJWDBUVOSATASDHXICLBSTHZOAMDTIVOPHSLHKDEMHKUQEQFQVFTQJGMEKKWOGWZTBYBGJMUCZWQWYCAPIRZKNOWAVAUQTJNPQYKIGWLIFS");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 40820U;
    tmp_tmp_msg_0_0.control_ent = 223U;
    tmp_tmp_msg_0_0.timeout = 0.592308245187;
    tmp_tmp_msg_0_0.loiter_radius = 0.587076075241;
    tmp_tmp_msg_0_0.altitude_interval = 0.403165568347;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Turbidity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.305477597106;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("WXEIDAHUDZJHNVDKBGPDKSRCGXDZTUAJELGGTQQTWBRMFNYPZKHNGMQPAYDKPHBALLVATICMWJCQNGEFWHZWTOXEEUWFLDLZTJJRWRSFWSIN");
    tmp_msg_1.dest_man.assign("MQFXJLQCMVVVRYYKONQZSLYUDDIDDYFBWTGOSOCAWHPYOGWAWGRLRUZMDUJSBZQNNNLFPWCUSAKVBMHTSBRCVPRIILPWALOETUGHFFLPKWNQETGZBMSHWUHFYSOVLQTRFQZBPACMISPMMTMOIGCYSYIJXCJKXFVVBJNYPXVIJKONRLXCCDFKXWJELQUZADRZAPEVEEFXIKGJGGSZEUUXZEO");
    tmp_msg_1.conditions.assign("DDLUSGDQTZLVHUDRQGTBFDHLFTCMFXLHGNRNRWQJXPRCXDARJVUFLEWNFKVKXOYCAOJPEAVPHWSOJWVTYAUCBIXLSIYWMUPGKM");
    IMC::HistoricEvent tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.text.assign("RGFHFRGAAAPKPFIZEVEESITPJDQGHQPAFYEXHQVXOUIJDBTALWFMITYDUABSZVQJYUYVTQFOZFMTYKDQBXMGSAIZBSYOZHQBNQGDLVOAHLFZSEUJSCVSLX");
    tmp_tmp_msg_1_0.type = 237U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::UASimulation tmp_msg_2;
    tmp_msg_2.type = 62U;
    tmp_msg_2.speed = 38604U;
    const char tmp_tmp_msg_2_0[] = {-6, -10, -107, -101, -119, -21, 20, 53, 16, -54, 102, 40, -5, 53, 123, 3, -80, 43, -107, 85, -33, -70, -12, -31, 41, -77, 121, -70, 59, -30, 16, 93, 93, -8, -60, 107, 14, -52, -106, -83, -23, 76, 18, 13, 6, 103, 9, -112, -33, 117, 24, -98, -121, -63, -51, -122, -30, 107, 35, 3, 65, 27, -44, 38, 44, 102, 126, 87, -50, 14, 82, 66, 114, 81, 32, 59, 15, -34, 64, 45, -25, -58, 68, 82, -82, -125, 122, -52, -103};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.start_actions.push_back(tmp_msg_2);
    IMC::WindSpeed tmp_msg_3;
    tmp_msg_3.direction = 0.320544730581;
    tmp_msg_3.speed = 0.034261756172;
    tmp_msg_3.turbulence = 0.257606510749;
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
    msg.setTimeStamp(0.325858328425);
    msg.setSource(17910U);
    msg.setSourceEntity(127U);
    msg.setDestination(3580U);
    msg.setDestinationEntity(39U);
    msg.maneuver_id.assign("CNXFONOROPTRXWKJSBVBFMJRJKTTTMUNSRMECXJETKWVYUDRPWNMYGUQYFPUYLXKFKEBWSARMJPZWNZFDBZGHHOVSL");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 15436U;
    tmp_msg_0.lat = 0.834306634689;
    tmp_msg_0.lon = 0.216679971004;
    tmp_msg_0.z = 0.798470516207;
    tmp_msg_0.z_units = 100U;
    tmp_msg_0.speed = 0.319395679911;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.syringe0 = 115U;
    tmp_msg_0.syringe1 = 122U;
    tmp_msg_0.syringe2 = 4U;
    tmp_msg_0.custom.assign("IJURHCZKXWTREMYXCWWWAEVZAXEPLRKIQMXQMMABQFXQHVRGNIDDJPIFTHIQGWWKOEDPAPKDZMSUSCUNIPYGWBSOZBNFTK");
    msg.data.set(tmp_msg_0);
    IMC::Force tmp_msg_1;
    tmp_msg_1.value = 0.379512827387;
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
    msg.setTimeStamp(0.522349217841);
    msg.setSource(33982U);
    msg.setSourceEntity(172U);
    msg.setDestination(50384U);
    msg.setDestinationEntity(182U);
    msg.maneuver_id.assign("HIXPNZJLCLDCYXICNBWPQEUBBPMYGWTTOGQJEYXCHWVQZULBOSTBMZCUVJEGEBUMLRYLDAFXIAQANFKOPZGXOVZQGOTKHDPGDRTSHKQAIQFRQTUJXBNG");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.552765433078;
    tmp_msg_0.lon = 0.868467276807;
    tmp_msg_0.z = 0.531305782251;
    tmp_msg_0.z_units = 34U;
    tmp_msg_0.radius = 0.37035872352;
    tmp_msg_0.duration = 16128U;
    tmp_msg_0.speed = 0.262580752459;
    tmp_msg_0.speed_units = 244U;
    tmp_msg_0.popup_period = 29608U;
    tmp_msg_0.popup_duration = 20758U;
    tmp_msg_0.flags = 227U;
    tmp_msg_0.custom.assign("NEUHFVXTHUTXJQOFPOQOVYSSEVSTSKGMKZJLGPGMXJNRZNNRDFXGCBIJEIZZHWUQYCAUWNRKFNBLHAQQAPJSVDYRDCMIUFRMYCWZHKTZISIASVKDKLDTEJLLJGJOVEOPFGBGYOHBSTQUMOQDNQBVLTRXGHCXXCXZPUFCDCETOECUNQVRZSDPYUBRHRAWKAE");
    msg.data.set(tmp_msg_0);
    IMC::GpsFix tmp_msg_1;
    tmp_msg_1.validity = 18346U;
    tmp_msg_1.type = 225U;
    tmp_msg_1.utc_year = 21828U;
    tmp_msg_1.utc_month = 209U;
    tmp_msg_1.utc_day = 63U;
    tmp_msg_1.utc_time = 0.17854753558;
    tmp_msg_1.lat = 0.379713235923;
    tmp_msg_1.lon = 0.984513859257;
    tmp_msg_1.height = 0.414511539041;
    tmp_msg_1.satellites = 161U;
    tmp_msg_1.cog = 0.202540278102;
    tmp_msg_1.sog = 0.755888330463;
    tmp_msg_1.hdop = 0.0928393455719;
    tmp_msg_1.vdop = 0.750023310519;
    tmp_msg_1.hacc = 0.977035179789;
    tmp_msg_1.vacc = 0.850737875106;
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
    msg.setTimeStamp(0.423094685204);
    msg.setSource(17251U);
    msg.setSourceEntity(244U);
    msg.setDestination(3309U);
    msg.setDestinationEntity(42U);
    msg.maneuver_id.assign("PPQYPOCJVAWPCQPQYTGBVRXWCIEKUWSEUTBVDNQNIMLIBGVOHUILNUTJUDAVDRGUFJFLGDXIOLSHWJFUGJBYLQTZKORTKSLZGDMTHYAXDDILVMXNQMZCXVSVZUOXHHNARHQCPESAFHRVPHTWNKYKKWOPCEMUSCZXANJFFGMLMZNKMYBAWARRVUTWOAQEBYEZJTEIRIZRQDABDZMFLCYMWS");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 62219U;
    tmp_msg_0.lat = 0.693421946926;
    tmp_msg_0.lon = 0.136337137394;
    tmp_msg_0.z = 0.0876114641518;
    tmp_msg_0.z_units = 96U;
    tmp_msg_0.speed = 0.356592413077;
    tmp_msg_0.speed_units = 18U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.861646274014;
    tmp_tmp_msg_0_0.y = 0.837080770391;
    tmp_tmp_msg_0_0.z = 0.969776850444;
    tmp_tmp_msg_0_0.t = 0.794003455783;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("OFYNJDBEOJOBPHBHGAUGNJESHEKQKYWNERLSOFZXNLLHQJCEYCRSPTVMFVVDYGBVIUYYWSXVRUELQSGPROSSZUBUOWLF");
    msg.data.set(tmp_msg_0);
    IMC::SoiState tmp_msg_1;
    tmp_msg_1.state = 48U;
    tmp_msg_1.plan_id = 64450U;
    tmp_msg_1.wpt_id = 66U;
    tmp_msg_1.settings_chk = 25540U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CameraZoom tmp_msg_2;
    tmp_msg_2.id = 245U;
    tmp_msg_2.zoom = 211U;
    tmp_msg_2.action = 175U;
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
    msg.setTimeStamp(0.157109653672);
    msg.setSource(21473U);
    msg.setSourceEntity(12U);
    msg.setDestination(36366U);
    msg.setDestinationEntity(36U);
    msg.source_man.assign("ETTFQBCCWSWMEAQUNZPIAVIYXQGVLPLSJDNYCQGYGSSQLYGSZIDEFLPOFYAKXZWPBVPHKNZNJMJUPISYWJKOUABNHGE");
    msg.dest_man.assign("XRNSTPOHQURZZVLYYYDJDMGMWHGBQBJEFKCBWTQDVJGERGKTPFGWQZGZUDRTPFWNMAEBPNIFAYRZQTKBNOCTINZVQQESEPCPAMCMVVOTTFMKWDKYAYJXALIODEDNYHSHOKERSHSIKOCIMHAXPNBSXWUKSRHMB");
    msg.conditions.assign("HJOTUWDSAJCBOXAATWWNCTYIFAPIGFKDVOWXSRLRPZMAIWLMIHJN");
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 4U;
    IMC::UsblModem tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QNCDLBADPCEZWPJHKRFMYSSNUANCQDIPJZSBBHZJOMFODYLFIXSBECXIWOTJDVTYGRWJBIGYCFSBSIWFYFMTGVEVVPQLYVNIVFLLLEVHKZHGAMJFKDRRYOBNUYUAXPWHMJEOXRRPCKHUWKBAJUV");
    tmp_tmp_msg_0_0.lat = 0.624425892691;
    tmp_tmp_msg_0_0.lon = 0.251596865494;
    tmp_tmp_msg_0_0.z = 0.948420045675;
    tmp_tmp_msg_0_0.z_units = 158U;
    tmp_msg_0.modems.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.65421556438);
    msg.setSource(43752U);
    msg.setSourceEntity(252U);
    msg.setDestination(11662U);
    msg.setDestinationEntity(169U);
    msg.source_man.assign("TKJAOQMKDDTXTRNXOFHIMFLXCTOWHVJRAGGGDBYUPWVWZVBDLFYQDOMIMNWJRGIUXSQQLCEJDGSISEQHIRWLSKXEWLOPXCVXHXYASXTEQKCDTQNCVUCHEHDRPKUEYIFZNWTEUUYBG");
    msg.dest_man.assign("FMMZKWKDPGZQBQOOMUALBXFUQZBLUIRPXRJSWYRWLLFXQZIDRITWDEGTAYVUHACABNVNGWTHPCORJFSGVVQTJUQCHCTXCOFBPEQGOKDSMRZMEFIHRFXCMPESWKUNSTROUBPJIGGVYNCQNXJ");
    msg.conditions.assign("OZTMEQQFFKDQYXHCUGHUFXRGSAUIGIQJSLWJEDBCXAFTUGQPBRAFUOVNTGGPLDBYHERXLJWXNWVYZCZBRRFEOIVDJJKVRYIFDVGLJTFQRGSOKWXNTUEYOBKBBSXDKCVXSSLUEGYHHYLVNTVSTATATZIBIKPMLXKAPCUMLRNVU");

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
    msg.setTimeStamp(0.00622708362968);
    msg.setSource(31948U);
    msg.setSourceEntity(101U);
    msg.setDestination(45600U);
    msg.setDestinationEntity(104U);
    msg.source_man.assign("KCUYKPEXUGMQKFSJYBESEHTBPRIZFCWOZNIPYYTVECXEOHZCEMMWCEQYADRKQXNFDVSJNZMVHYTDJVLUGDIRKXUKJUQJFLDLBSMBOJRGIYQHGJZSGDONVNOFLRLLFBEUXGBSDBERDWVPTNRWAFXPOJVRXCPLWCALAOZIRCUXMLTKOHPTPAVXXSBBQGJIICAYWHYKVWMKAWHNNCISUHWKLQV");
    msg.dest_man.assign("BIVWCSPTGIXWYGDVBAYIGMQLEPXBCOOYSDHTEHYXEZBLRNPZQWMGYXWICWNQBSDHTHNWLZBCBJSEXGHMGEMVFQFCZXMFQDIDUVNJNJDZKPWEOMNVASKARJBHIHKQZTDLUHPYIMOTVAGYXXSVWXBMQLKRRATTLAMNOQIKZLLRFZGQHDCXUKBEEREJYOFCDORSLGOYCVPGQJSOPVNAPULCKIN");
    msg.conditions.assign("ZOMUPSTVYOVUAMPHZTEPOJBVZVEXNAVARQUVILDCUBBNAZISOAXMEIPWENQWMSVGFXJEBNOJQOCXLKCTGVCDYTHSAUSLKELEXMFXKODGYLIPYHPPSMJSNJGLZKRFHDWZOJCQRKAWGGZDNNFUJURYNICIMIDOCH");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.983466623794;
    tmp_msg_0.lon = 0.388573195846;
    tmp_msg_0.z = 0.735491532703;
    tmp_msg_0.z_units = 82U;
    tmp_msg_0.speed = 0.10677215436;
    tmp_msg_0.speed_units = 65U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.634033983255;
    tmp_tmp_msg_0_0.y = 0.296288679277;
    tmp_tmp_msg_0_0.z = 0.0749853426404;
    tmp_tmp_msg_0_0.t = 0.384438495409;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 50459U;
    tmp_tmp_msg_0_1.off_x = 0.143185359027;
    tmp_tmp_msg_0_1.off_y = 0.186289260867;
    tmp_tmp_msg_0_1.off_z = 0.624123396715;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.497821504247;
    tmp_msg_0.custom.assign("BPJFLWKXIJZZPSGQOWUEHYATRMGNRCYMHTGZPWVWOLCHFJAKOBTK");
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
    msg.setTimeStamp(0.141500346566);
    msg.setSource(20774U);
    msg.setSourceEntity(31U);
    msg.setDestination(14487U);
    msg.setDestinationEntity(108U);
    msg.command = 134U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HSNCXVNXWVWTXOBTVEVWIEQMPLTBTJICCKWALPGYTGZTOELKIPQEONESHGQUYSDODLCHNBEHAXQYMJRZIAGXZIMIUVPDDRUYINDTYJOMOXDLTABWHFRVPXKZLTYGKSOJQHNDHZEWNNIULHSGJJFXPBZEAUKAIVZMCVYRQWNGJRSRWCGGCCLHDYERLEYFJUQOWT");
    tmp_msg_0.description.assign("FBOSLOGMSIKRRCZYBIUXVNLZHWAPCXISNTEJEZWPEGTAYCYFOCSPGJNSXQJSJPVOGJAQVZPGULTGMFEWRVFUDXWFOAGZWHVUJLKMYQBHRDTLDCQDPANKZQZWLNJBEKCZSKPAI");
    tmp_msg_0.vnamespace.assign("YIBBWRLHAUGZDDOBKZGWIPRHRHZNKCBZVPAEPLZAMMUPDWLBXSGOASZFTOFDLGANOCDQFQPSVUTCJSWHELQIQOYHGKEDMEEKVQNNFERXPKHIMJNTKOXIZILMZRLBWDFGGPSLSLGERZRQJTABSHMXYUTJGDKFHYSVTKNUSYBWPDTIOJAR");
    tmp_msg_0.start_man_id.assign("PBCZDVLLCDVHZEQKZYBRGBEFUASBJSJHNQZETTIAAOYCZCMWDYNXRNAQUHQRNCLRUBUDDSTQQKDEOIWMCGRAFFKXWPCQMLWXTBWMSJLXKIDDTTRYIHOUUVWFVPTMVBZWWGKLPOKRJIVOEEPPOAGPR");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("LXIPTUNYPLHYWJHAKQSEDMIELJDBWVXGQEMPIXXVW");
    tmp_tmp_msg_0_0.dest_man.assign("AHIHEJRRGKOIBHIBSYPKKNOBKXMGQZSGPVEEWUVALTUZXQLPQVZWJZBPEKIMLZSPPGZLTCVDRILWTVXFHRYBEGRMHDBJOFCUEMWNNSXYSXVJZWWFBANUFQHXTODMBTDQALOWTJIFSCMQIXYGLMQTYRTJJDDAGNPZACHUEODUKNVFXPCCGBRANHJBTOLQIQ");
    tmp_tmp_msg_0_0.conditions.assign("CYMZGDZSIAFLSXNMIAKHPOYVFEQWWNEKIOKDAHFXVMPLHGWTVFGWEHDURZHNSBCCAFRCROSNKTRIBHOLSVJLTJAGULLPVPQCYEUDPYWEXVYLPCNIDHNMGPMFTAXKBEKYLZUNFNJOWGVGXXRRQIPQQDWHV");
    IMC::FormState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.possimerr = 0.977680390304;
    tmp_tmp_tmp_msg_0_0_0.converg = 0.663908419392;
    tmp_tmp_tmp_msg_0_0_0.turbulence = 0.921873555724;
    tmp_tmp_tmp_msg_0_0_0.possimmon = 72U;
    tmp_tmp_tmp_msg_0_0_0.commmon = 121U;
    tmp_tmp_tmp_msg_0_0_0.convergmon = 9U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::EmergencyControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.command = 198U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("WUXLIRTQCJXPLXPVXDIKYMAJMQPHEWMSGKEZHJNPEINUXGTZLHFXSQFWFZEUGMLHGBTBYFPJGGSBYOIDNZTCZRQHQEUINCLDNECVZCBKOAVAJISBVWBVBLTMRORDALVIYPMBPODSNYENKQRLECVAAQDYQPOZUJHMBXJOGUXSKQURNCUTJSHJZCXRMCESTOPRG");
    tmp_tmp_tmp_msg_0_1_0.description.assign("EKQJIFOACNUGZIAPOOOZBWMAGVPEFPGTCXKAEHVLTPSIWICAQWYUMFFQSKJLMKPQSDRECMFNTCRNFLRQDOPZUWDGEGLNNTNATOLWDRGXCMRWYROWIMZVDYWAKXCVCQIHNBHGOSDZVRMLHBYJSXOVQXSSRBJDBKSXJQQEZXZYMXHDAEDAYOTFVTBHILTPHENBYHEJGHWJG");
    tmp_tmp_tmp_msg_0_1_0.vnamespace.assign("FPHBVNIVESCUJHQNVBARQVUUWCXCMTFISYYOYLEMJMTNROVGLMSBODQZCSAZOEKAIQNDXZAT");
    tmp_tmp_tmp_msg_0_1_0.start_man_id.assign("FQJBIPHVLYFYJFTVQUFGBQHGHLQNIIPOYTOSEQXXYBKIPVQRUGAAWBSLQLWDEFZFNCBJJXTMPFZLAWZPUWOWKDKKQYNSOTZVPGDWOBCRWJTPFFVIO");
    tmp_tmp_msg_0_1.plan.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.986729811928);
    msg.setSource(49575U);
    msg.setSourceEntity(102U);
    msg.setDestination(22368U);
    msg.setDestinationEntity(36U);
    msg.command = 98U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WKQNPHIBQCENMISLCGJIAETRVDZDALRSWOOYZKIHJFRMBEZYQYUPKZIPYMAOAIECJBQCHSKGGFXVZLXCOZAFXIWBWPGTHYWYXERTLPNQJYPXHMOVVLDNHJSTEMTCHQOQGEITKUYDBXNVQKSFELLUXWNNOGTPHDKSDKAJWVFJDUFFWZAGSKUMPBMFNRJVPZBWTCMEJBSVFCKARPRCYDRRIINBSXL");
    tmp_msg_0.description.assign("GXYQCPUTIDNVAWBJYMFFDUYMSQRJOLSWRPBZKOWCUTAWDBKIAXGZGRVTMAFSOJHIYHGNXCOERNFYXFSCAPLWNIYPVUSVTZBLLEASX");
    tmp_msg_0.vnamespace.assign("FBEHYXSZSQTLCKXHUHMIEULALPUHKRFMOOVIQNSNJAFNLLYPGWWFPHTYPVTLUOQMKGZYNXVTRAYGFIRTBDWIEVDMWYUBZAKDNRSZHCPICXWBXVROCCQSJQREWKDCYDAJUKKXEPLHFTIXKREMFFSINYBZSLOBDWZJQVFBXTPGGCEELXAJOJFUDVAQICVWYGHGQZRZUYRBKKMGUQCNZAGPXSNNTOAGRDOEMVIBJVNIQSEJCAJWPODBZMUHTTP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XTXGQTFBUPWUXPOCZJCHOLESFYXYFZHZDISYKVLNIEJNGKHSZFVETWEDQDPVIZOJASKNNBQYWPQ");
    tmp_tmp_msg_0_0.value.assign("AGBCMRBIGINQUWQMGTPRXAYNQVTTAUGKWCYBQUVWVHMESKKCTHZZNSCMZAKRJDXMFEZYCPSZELHPBPFOWOWSADEVHD");
    tmp_tmp_msg_0_0.type = 232U;
    tmp_tmp_msg_0_0.access = 168U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ASPNUMDAABNETTKQGBCKYRXLFMYCGFIXNWQVBTRNDKVRPIHFHYLGBZXOQDOHXMXQQNDPDYZAYNLKWJUJHDVOUCWAZPKRAJCFOPUSIGTVBZHSPAJHTURSBWHECCEINLVVQILJMWVTLOUPQGIXMCUDRSOIQHLYSQKUYXATFLUTXMBGZMDHSVWXSAKEPXWKFGIYZOFKGGILJJRYBMEWLEDFOBENZBSCWQVRWFRCEGOZKVCMRJJIJNYZEFMSANP");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("BTNNLJBPRRCWIOZCOHQUZVTLUMMJRHUKNQJDXONZCKOGKPPETVBKTJTRLLQAAELWQCSXVPLTUYMXGCRYEGWDQEKIIVBCSLJCZKUXDRGFMNRDYPGOOISSLWJUTEMHJNXKOTOVV");
    IMC::CoverArea tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.695586623644;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.204778540347;
    tmp_tmp_tmp_msg_0_1_0.z = 0.415431483286;
    tmp_tmp_tmp_msg_0_1_0.z_units = 94U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.831971509984;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 141U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("WXZZTIFBJVARRBBFJDLCOUMTXENVCJYPUZXPAVLFHPIWEYIKWBUXFOHUBZNTOVQWTKLRSMQOYPGXUVTRWDJNSRIEFTGBHBZXKEFPSAAYRIVGTYLKRJZGKJTNPIJXXCNEYUBGQPOVXFLSVLHLHAVGDKLESCNQSWHSRAUCZFURDIMWYSDQKMECMFZDKJSOODPEDJQBWJUNNTUQGYAHAPMDOKAAIHTRMNCENODCGMWGVSZHE");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("XZJWJQYMJQTLNYAKVSTCYQTNEHDOBYFODYMILMPFIGPUYYWMAABEFMOWQQNCPZEIWEHTBLTHOHABXGSSXRX");
    tmp_tmp_msg_0_2.dest_man.assign("JQIEQAWZCQRLMVCGAYOPWDGOZYQREZRBIRRYEMXPOQZLDMRGLNTYPEHXKTMKIWCSUKGXBTLUIASBQHDPLBFTIJPEDFBZESAPSYFFHHHGAVJKAPXENTYNJIUMJQXWDDWCVBBEFHLCSDYHCXJOTWKNXZDMVASSCINQVRC");
    tmp_tmp_msg_0_2.conditions.assign("TBZKYJSYOKMMVVAPGWAVHOKWIPMVFVQ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::TransmissionStatus tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.req_id = 54101U;
    tmp_tmp_msg_0_3.status = 247U;
    tmp_tmp_msg_0_3.info.assign("EXAVIMGYHUCUZHYMPRGKLDSNARGJIDKBDQXBWEYPYVEARDQNQDZIPJOTUCXZFTUGWTWDXEOVPRTVBBZMCZLWVYIVYRLLW");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::PushEntityParameters tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.name.assign("OEATZVXOXDPPIGRGFQLXVZRVKJEAEBZQCQQDCLNNPETLVGJVYCQFZWPKNRLPULNHGECQSUXBKIIUSUWGPBCOVQJHAFRBBQURFAJAGMUEYSTASZDUYITYRLITDMXZOHJEZLZCJQWMOMJOFMMXGYXHDKHNITEMXKIAVWVXSCDUBTYYAEBONISMKQHSUZTGMKCPGLBWTMPKIDBHWEHKYRHUJYSBVRXDOFOSTFYLKP");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.493969831436);
    msg.setSource(24327U);
    msg.setSourceEntity(184U);
    msg.setDestination(65342U);
    msg.setDestinationEntity(131U);
    msg.command = 127U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FQNQYJRWYCCJQBTOYAVHWGXJJLFVDMVIAGMMELHCZIHYDXYEQMMXPCXCMSCFDUMVAIZRZZSOOLTWKWIQXLGHEKRAOOPSNPEZDYJPBNKTLOEYABUMO");
    tmp_msg_0.description.assign("HDMVMPBRFWNMLSSECAVBTHBUSZPZXIJLULAYYDETRVUXEJYSORZQTFRECONMMRWHTIWPIMIYEWYQEDYABDTNFJZSAYTVXSXLUBEHQHUFANIIUBSUSCANFXDIUIARLQTPFGPMDQCJUFROGMNLOYEBOAZKIPOCXWPYBPVZZHORDSQTFGNVWQZNCNWJHLWHDGKVRVKGEGGLLKGJPWXKFKSFKOQJAJCHBTOJILHMVQRZMKWYE");
    tmp_msg_0.vnamespace.assign("PPEBHKVNYHKJQEZUWTQAQZSBIUKNKEUFBYZRKISRLRJGPCGVTXFTJZWCRAPHCIENMZUDHIXDPLYFDGWMETSJDAQJFXOZQPOICFHAYSSSCBLSGQYOQCFCUDEIVIOZRWELMYZOOLRXCBVLJXIKEUS");
    tmp_msg_0.start_man_id.assign("HIKTQSLXXTMTIPWPCAUIQYYIIBOUNNRNOUENHSWCCPJOSJDWFBJDCWQRIUFRFEFZMHKWZMSYXWWDRXDLLNNDJBXSWFBISKJQNHGHVREUCNZGLACGSJPXOMAUIVQKCCUCKFYBLYZYSDAVIZRPEMFTLRHPVOGYDTLEUIJQVSAMMZZHVNGHBZEXTZLYMDKASOYYONXXBPTUWKJMHBDRWBVKPOZVPELETVGRHUGFRPTGXKKTVQEABAFFEG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("UYUUZNLQJJGXPBEMHPGIBYWKKWEOOUBXPSXNZKIKMHYZQZPZVJYDYJSNGGRSALQWJFCZCYMVQINPCMUEJWIREOXMSKHKZOLCUSPUBXWFZTUIVYARNFEDSIEHZUTIBRVFOBQGWLDSQCCREWOOGKWLNIDJDBPQOSPTLXMFPGAFARKQTDVHVGTMTALFMCGWEJQJCYKFEXAVWRZRXHNTMDYBAKSTBHFYQRCFUBDVALCSAH");
    IMC::YoYo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 4717U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.637981683692;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.994880631233;
    tmp_tmp_tmp_msg_0_0_0.z = 0.447054492564;
    tmp_tmp_tmp_msg_0_0_0.z_units = 160U;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.633007146012;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.0519500620366;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.742518438563;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 131U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("JOUZAYQVWHRKMXEZCKLQCHEGAEIXZKOAVDYRNVBSFJYPOIQLUZNZNCRKDBMJXSQFBRGAUTAUESSYWRXUOFIAUPGOZHKCXCGECAGBMOVMBLSJ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::FormationMonitor tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.ax_cmd = 0.609774941272;
    tmp_tmp_tmp_msg_0_0_1.ay_cmd = 0.863947674169;
    tmp_tmp_tmp_msg_0_0_1.az_cmd = 0.590214549992;
    tmp_tmp_tmp_msg_0_0_1.ax_des = 0.682973375665;
    tmp_tmp_tmp_msg_0_0_1.ay_des = 0.486991519837;
    tmp_tmp_tmp_msg_0_0_1.az_des = 0.682032299432;
    tmp_tmp_tmp_msg_0_0_1.virt_err_x = 0.342228475433;
    tmp_tmp_tmp_msg_0_0_1.virt_err_y = 0.722506535038;
    tmp_tmp_tmp_msg_0_0_1.virt_err_z = 0.318284239229;
    tmp_tmp_tmp_msg_0_0_1.surf_fdbk_x = 0.617243665446;
    tmp_tmp_tmp_msg_0_0_1.surf_fdbk_y = 0.50703922766;
    tmp_tmp_tmp_msg_0_0_1.surf_fdbk_z = 0.781688046918;
    tmp_tmp_tmp_msg_0_0_1.surf_unkn_x = 0.14279480637;
    tmp_tmp_tmp_msg_0_0_1.surf_unkn_y = 0.10858259495;
    tmp_tmp_tmp_msg_0_0_1.surf_unkn_z = 0.343928180477;
    tmp_tmp_tmp_msg_0_0_1.ss_x = 0.137411238038;
    tmp_tmp_tmp_msg_0_0_1.ss_y = 0.950561781297;
    tmp_tmp_tmp_msg_0_0_1.ss_z = 0.232759670618;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::SaveEntityParameters tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.name.assign("HOVKDGWNMUYMZNBWBWAGVHMUJZAGUJACCFVXYFDLCPFUSNFDXVEIYIHQNSJTBLYCESPTDUZKSWQSZHKKJLOFFMKETXBHAXSNGQKPFJUPCRBAJIMTQCORQXMAOPOYBRTDXPWOEGIDTPEIDQVTDLXYTOUQWEAZHKMKGXYFLSMJQXKZEHDFIGONNZNRWCLNOAIBZWPQVMRYIBJUVRZHUHWIWCRLJXEGVCTMRAPFLEBOSSDKLREIARG");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::TrueSpeed tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0872460365024;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::HistoricDataQuery tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.req_id = 4596U;
    tmp_tmp_msg_0_2.type = 6U;
    tmp_tmp_msg_0_2.max_size = 47556U;
    IMC::HistoricData tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.base_lat = 0.227791296413;
    tmp_tmp_tmp_msg_0_2_0.base_lon = 0.642936130898;
    tmp_tmp_tmp_msg_0_2_0.base_time = 0.181708594923;
    IMC::RemoteCommand tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.original_source = 15393U;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.destination = 34600U;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.timeout = 0.628009234232;
    IMC::EstimatedState tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.lat = 0.907658760363;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.lon = 0.121380280439;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.height = 0.335705122118;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.x = 0.146600637488;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.y = 0.797154967012;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.z = 0.96818604149;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.phi = 0.935430119974;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.theta = 0.861288717693;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.psi = 0.673657494654;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.u = 0.445750776846;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.v = 0.239917389499;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.w = 0.934952092377;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.vx = 0.85961644934;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.vy = 0.519364845172;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.vz = 0.882441278262;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.p = 0.612325437033;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.q = 0.995593262042;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.r = 0.473417448328;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.depth = 0.548882002221;
    tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0.alt = 0.0334772500522;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.cmd.set(tmp_tmp_tmp_tmp_tmp_msg_0_2_0_0_0);
    tmp_tmp_tmp_msg_0_2_0.data.push_back(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    tmp_tmp_msg_0_2.data.set(tmp_tmp_tmp_msg_0_2_0);
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
    msg.setTimeStamp(0.11406944065);
    msg.setSource(58316U);
    msg.setSourceEntity(57U);
    msg.setDestination(35507U);
    msg.setDestinationEntity(223U);
    msg.state = 72U;
    msg.plan_id.assign("AWVGYTJBBQUYKQBLNBSDGQXUXRTLFSMTPWCAOX");
    msg.comm_level = 237U;

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
    msg.setTimeStamp(0.0275193547014);
    msg.setSource(8218U);
    msg.setSourceEntity(16U);
    msg.setDestination(35953U);
    msg.setDestinationEntity(163U);
    msg.state = 139U;
    msg.plan_id.assign("UHUQBCCQSCKIAUIHYKUSWTAIZORVLWMOEHDFXSHXPRCZIPMOXNZFLUPQQLVIDBLHLPMFFVKXTMHWRAVWQYBGHEPZOJFYOANYBDLNZJXFMGIPEDZZODCUKWFBRMPNVXQXPTTBCURVWLGNRQYLISMHTTZNYRHV");
    msg.comm_level = 25U;

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
    msg.setTimeStamp(0.660314075804);
    msg.setSource(36001U);
    msg.setSourceEntity(89U);
    msg.setDestination(55263U);
    msg.setDestinationEntity(245U);
    msg.state = 161U;
    msg.plan_id.assign("FJLSHQGHGHYNPNCYKSYIPICSVHLEGUVXNMJRVDYBIGAXTEQNMFJQAHELUBFDHMOEWUCRSLVPKSKSGKBXFPCARQXIRTCOHLATYFOZRQJNXYFQQITDNKOUGLWIGTUZXQPDWBFLKEEBGZMKINIUWAVAQVOOWABFTYMDPFNZXLJULDRJYUIYWJDPZA");
    msg.comm_level = 222U;

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
    msg.setTimeStamp(0.570407386045);
    msg.setSource(38219U);
    msg.setSourceEntity(122U);
    msg.setDestination(25671U);
    msg.setDestinationEntity(178U);
    msg.type = 166U;
    msg.op = 24U;
    msg.request_id = 17412U;
    msg.plan_id.assign("RMFHWHQBAVWTATJEEWVBMUNUCLMNSEBPOXLTXCLZYQWCSJKQAITDNPSSNMJKEVGXADLBILPOCORTWNCREHYUOPFHAKOEUTFMHLZQQXKJPUBGTSXIRXGGBJQDBQFFJXVIQUTQCBKMFJDSONPVRFDIIYAEJMEMSTWMFUGLVIVOCHKKPFZWZSGYGZSHSZAKYHMDXHUVYWZZDGGJPEHGDBVKFYLLXANZEXRKDANZCJRDOABYOIRVCWTPCRLO");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 23U;
    tmp_msg_0.speed = 54200U;
    const char tmp_tmp_msg_0_0[] = {-97, 87, 116, 73, -127, 109, 45, 115, -96, 55, -11, 91, 10, -49, 13, -86, 35, 102, 89, -71, -92, -94, -73, -13, -38, 53, 78, 24, -12, -93, -46, 63, 9, -72, -98, 8, -39, 81, -40, -65, -105, -110, 40, -24, 12, 28, -97, 26, 52, -64, -52, 110, -102, 93, -61, 85, 28, 106, -45, -125, -32, -77, 18, 38, 118, -48, -109, -7, 94, -113, 1, -60, -26, -120, -57, 123, -119, -103, 62, 67, 44, -47, -42, 52, -124, 6, -86, -43, -103, 22, -65, 37, 35, 1, 82, -18, -2, 2, -42, 108, 97, -111, 72, 4, 115, 12, 107, -58, 98, 32, 104, -12, 34, -116, 103, 108, 98, 26, -103, 5, 84, -95, -68, 71, 7, -24, 78, -102, 84, -121, -29, 82, 14, -84, 58, 40, 101, 50, 116, 26};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LEGMLYVRGFLCVAQAORPDZBKGYWITHXRUWOIBAKHVXVADEFQBSJZDFTSXAXWITKPFAVHAXYQUOOSCFHHOQLNABZZYFNKTTPTSDVMDJGLNRIBQNHOJBYUENLWQDFREVEDOIMLSRECHEJRSAXVCUQPIJGPKNVJNZWGWWFDVKLYDMTKKCIECXMBYEBNGWZZFTMJYPTOOGTLPQIIMPNJWBXKSULYZRHWMCACPGMJKJBUSFOCNCMUGIZ");

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
    msg.setTimeStamp(0.752499356892);
    msg.setSource(1620U);
    msg.setSourceEntity(36U);
    msg.setDestination(29969U);
    msg.setDestinationEntity(12U);
    msg.type = 229U;
    msg.op = 164U;
    msg.request_id = 12733U;
    msg.plan_id.assign("GEZKEWSEPXWXVTBQUTRMBQHUIGHWVJJPDGYEUNMCOQTXNSCGULEQYTZVQICULBBJLVEVXNFNIPPXBOPXSLHBIASXFFNLGGADMJFRMRLKWSBIQPUKDCRCXJSZYOMWDLHRYJQZYWZYTEVGHQUDNJOIUPKKRKFOIPADRSYVSUWWIREZDMOSTGO");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("NKGUXOCVKOHPHLACHUPUOWMOEGOVEKLQNIAZGFIFKRBFQRDTZIINUUXSOWFPJZEWOIAAGCAWIORJXZNJPQGDXFKXEPMZSJSDDEVZALMVFLNQYONXIYRBWHLCQKTVWVBJDXNNMXSEKYBGSWFRATYPMHFRCUUKZRDKQYTBNFMFUEHIBGMVRDS");
    tmp_msg_0.timeout = 28456U;
    tmp_msg_0.contents.assign("TCMFPVMILGKNVYDFIHVZHH");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RFHYTYVQJUNQDYSXMBNGVUD");

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
    msg.setTimeStamp(0.172270732626);
    msg.setSource(1098U);
    msg.setSourceEntity(2U);
    msg.setDestination(51451U);
    msg.setDestinationEntity(77U);
    msg.type = 110U;
    msg.op = 204U;
    msg.request_id = 8541U;
    msg.plan_id.assign("LYMBBEQSBNGWECUKZMYXNEHWTNLRGKKHJJTBLCEFBKNLGEECPQATBFGWQMSFDSZFEASUYNXJUFZDRJOLMPRUBWYFRAGXFJYEFVWTTRQDHKGZPVXNQWOUOKIMGQOMGVBGDPCP");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 44915U;
    tmp_msg_0.lat = 0.995097887817;
    tmp_msg_0.lon = 0.852324760214;
    tmp_msg_0.z = 0.884499776828;
    tmp_msg_0.z_units = 201U;
    tmp_msg_0.speed = 0.711535540404;
    tmp_msg_0.speed_units = 240U;
    tmp_msg_0.duration = 32927U;
    tmp_msg_0.radius = 0.848458045363;
    tmp_msg_0.flags = 13U;
    tmp_msg_0.custom.assign("ALODDZGNDKEREGCYNOIWSVXLVOPLNWJSDIMQKFBVWXUKCDMXQOHGRWGJXWZDXDCLTAPHCKMJRAEMAFKLYDXVBAQOFWPYIEYHOJIZNOVTRMVFSFPXLAWIHUENXCAU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BAOJZLGLHYFIGEFNDFKISTIDCFTNFPZNUCTMLAGVTCQDGXGYSDFCSSWVGMZKATMSHHIKUQLJDPX");

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
    msg.setTimeStamp(0.794615327298);
    msg.setSource(4770U);
    msg.setSourceEntity(220U);
    msg.setDestination(7759U);
    msg.setDestinationEntity(106U);
    msg.plan_count = 7768U;
    msg.plan_size = 1166470419U;
    msg.change_time = 0.0591909420337;
    msg.change_sid = 48376U;
    msg.change_sname.assign("GGTCHZTWBSSUQBIKUCSFYJBGMXQJQIRNEUMFYLWQUGOPNJDPRVUDKAPTIOEDNUQJUBALYCBYEJGVTCZKSXECMIAANAMMXPDHKQBVRDRKXSRNHHVKYTLNERBECBDPDIRQETIUYUZZZTGRQAMAHXVZDFTAOXEXYJYWJHPRAGNLVTNXICBPOGOLZNPIYSLSIWHZOMETFVDWUDESZWJHMZIKFQHCYKPAO");
    const char tmp_msg_0[] = {-12, 6, 46, -93, -103, -27, -2, 71, -35, 42, -61, 32, 109, 106, -67, 2, -90, -16, 96, 86, 39, 11, -95, 33, 101, 70, 1, 57, -30, 13, 34, 113, -53, 72, 94, 2, 17, -123, -3, 105, 72, -91, 114, 39, 30, 23, 72, -16, 31, 50, 3, -123, -22, 33, 40, 64, -54, 69, 14, -103, -125, -112, 48, 12, 70, -99, -99, -31, 62, 44, 111, 96, 15, 101, -109, -54, 22, -100, -55, 59, 76, 66, -65, -47, 18, -91, 110, -92, -97, -73, 75, -38, -109, -85, 63, 16, 90, -39, 4, -47, -72, 32, 61, 70, 100, -8, 80, 23, 110, -106, 42, 62, 84, -68, -38, -58, 49, -27, 97, -111, 13, 2, -2, -120, 73, -78, -51, -68, 69, -24, -103, 75, 98, 40, -113, 92, 52, -36, 38, -1, 75, 19, -98, 18, 14, 58, -74, 16, -48, 72, 4, 60, 66, -103, 23, 21, -113, 33, 85, 114, 60};
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
    msg.setTimeStamp(0.689651205893);
    msg.setSource(23133U);
    msg.setSourceEntity(10U);
    msg.setDestination(35999U);
    msg.setDestinationEntity(176U);
    msg.plan_count = 9485U;
    msg.plan_size = 1265959133U;
    msg.change_time = 0.440152520749;
    msg.change_sid = 30684U;
    msg.change_sname.assign("ETOOVNKTSKHXBNVCLUXIMUSZNPRTCVMJZYMCQBHOFAPIQMHRHHIILTALYACJQRADTQYXPKCZEOXSUTDMSKDMQYRKQBOTUKWFJFZUZGVQSGNDIWLXPUPXRCBOOEEMVJNMHWPVYJCTLIRIBYVFSBUEMAWRVBGFTWGALDWHHKAYGGLFRRLBABNZMYHIGUOUEGENQCPZQFIHXGIJKYZFJSXVSPKZE");
    const char tmp_msg_0[] = {-25, 27, -68, 77, -47, -55, 3, 2, 83, -82, 80, -76, 92, -111, 16, -36, 98, -24, 23, -70, 16, -74, 86, 7, 106, -34, 20, -48, 93, -77, -22, 40, -64, 18, 119, -37, -72, 36, 52, 75, -9, -13, 112, 123, -41, 40, -10, 49, -73, -124, 116, -72, 43, 100, -88, -64};
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
    msg.setTimeStamp(0.256769897378);
    msg.setSource(59612U);
    msg.setSourceEntity(46U);
    msg.setDestination(38346U);
    msg.setDestinationEntity(181U);
    msg.plan_count = 32529U;
    msg.plan_size = 1946768143U;
    msg.change_time = 0.398781603884;
    msg.change_sid = 36989U;
    msg.change_sname.assign("ONJFZLJBATISACMVPVCXWKGVUUDDCRBGTEMZTKTEJWWCMFOWUZGOXXEDBJKETSBKHUFOQBEUQSDDHZIEWXQHYUQNTHBYPXORIKIGKXXXMCMUBTNALLMMVBZNHTWRPYRASIMFBYWLSVHKCITFUJHAFPYURYPAYPVLJSNWVYOTQEXVRQYCSQROIZDFBFRDUNFWHS");
    const char tmp_msg_0[] = {23, -51, 50, 33, -93, 114, -62, 40, -3, 14, 58, -12, -65, 63, -73, -49, -4, 17, 93, -27, 106, 64, 25, 125, 55, 32, 19, -70, 74, -114, -18, -64, 33, -62, -93, 41, 33, -97, -22, 73, -29, 97, -20, -38, -64, -72, -76, -101, 22, -98, 12, -116, 37, -65, -87, 93, 15, -111, 77, 66, -117, 11, 20, -67, 102, -59, -60, 30, -124, -3, 53, 68, 77, 1, 105, 35, 46, 54, -17, 88, 112, 106, 98, 75, 34, 24, -11, -86, 88, 82, 16, -86, 107, 89, -61, 25, 63, -71, 71, -96, -45, -83, -77, 119, 86, 46, 56, 61, 30, -50, 65, 98, -48, 27, -11, -60, 106, 111, -31, 22, -18, 72, 4, 61, 121, 8};
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
    msg.setTimeStamp(0.659620512188);
    msg.setSource(39552U);
    msg.setSourceEntity(62U);
    msg.setDestination(44796U);
    msg.setDestinationEntity(237U);
    msg.plan_id.assign("RATOTLFMIZEVOCIRQOKVWTAXQYHCSLPXJZYZCKISHSKTMBDMGUIWNWSTGNRDNHQGDXKGFAPDRTLVEOCLFCUHHWUPVQUKLDYYGPAONBYEJMVUXDWQDFKCORBHEKOPAKXBWBCUMCGBOYIUMWJOBEH");
    msg.plan_size = 1902U;
    msg.change_time = 0.765196108624;
    msg.change_sid = 56988U;
    msg.change_sname.assign("YQTAPPMJGBCURUUKWOEOAFXMELZRQVECHSERZNVKSPEDORNYCFTLMENOHRKNGXWBVWRBDYVHGUHLWI");
    const char tmp_msg_0[] = {9, 64, -4, 76, 45, 86, -14, -23, 5, -104, -106, -105, 61, -59, -69, 71, 126, 91, -78, 19, 85, 49, -128, 90, 79, -46, -62, -4, 70, -74, 119, 67, -119, -120, -52, -84, 112, -114, 70, -83, 114, -36, 98, -42, 115, 123, -13, 64, -81, -37, 102, -127, 53, 80, 2, 15, 45, -54, -3, 69, 20, -15, -121, -46, 108, -9, 15, -118, -114, 99, 7, -59, -114, 1, -25, 38, -7, 102, 48, 13, -32, -62, -123, -93, -61, -87, -83, 101, -102, 79, -57, -94, 108, -3, -105, 87, -111, -115, -44, 23, 109, -84};
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
    msg.setTimeStamp(0.929030706639);
    msg.setSource(52350U);
    msg.setSourceEntity(101U);
    msg.setDestination(36238U);
    msg.setDestinationEntity(164U);
    msg.plan_id.assign("HBPIYJBEKLJOWQANRGIQUOG");
    msg.plan_size = 59405U;
    msg.change_time = 0.631728150325;
    msg.change_sid = 24193U;
    msg.change_sname.assign("ZYTYPOZRWUSIENBOUGOCZXRYWAWMOEBCSCBRBJTFVETYYSXPXHRLPOUPVIBVQVBLACRFQLLNWTNSHRMJJVSSDJPOKDJTNZCCQVZOCNAOEEGVWTVJNKAKXUSIFALQQXFHSLMISNFYWKBUEHTMXDZQIO");
    const char tmp_msg_0[] = {26, 112, -108, 44, 107, -125, -52, 30, 103, -14, -9, 125, -112, -122, 32, 50, -65, -109, -46, -8, 103, 18, 75, -43, -112, 32, 59, 0, -42, -49, -59, 23, 77, 11, 14, -56, -62, 7, -29, -104, 11, -26, -14, -40, -94, -92, 15, 124, -32, -64, 38, -41, -106, 67, 119, -1, -97, 126, 60, 108, 80, -62, -79, -80, 120, 70, -82, -57, 125, 32, -46, -110, 79, 27, 87, 29, -22, -96, -14, -14, 70, -104, -71, -29, 2, -32, -66, 2, -62, -18, 86, -8, -53, 85, 59, 41, 115, 91, 95, 35, 92, -81, 94, 56, -1, 121, 64, 37, -121, -38, -97, 72, -127, -124, 9, -18, 83, -50, 123, -3, -91, 91, 39, -20, -103, -4, -86, -121, -20, -21, -100, -19, -99, 15, -11, 98, -31, -109, 62, -81, 94, 115, -96, -107, 117, -101, 85, 18, 35, 103, -103};
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
    msg.setTimeStamp(0.579820883402);
    msg.setSource(43344U);
    msg.setSourceEntity(249U);
    msg.setDestination(44867U);
    msg.setDestinationEntity(101U);
    msg.plan_id.assign("UZNMCLNKVNSAPQJXZNGROKGMQFHXUWFUWWAZTGSLYEIKJSNOJHLCVREDITRRJCAFXDJPXHHMCIXBLGGEHMHOUMDQDKKJKORYRIEGUPEGQXFLAIJSJBVTMFPFJOVVJMZMISAWYHQBEBPOLGVYBBSAQWZHFBDWHLPWQNVDVNBHPRDCFUIYCQTMZLUEATVWCUMXXGYLCECRPDDXKUOKAY");
    msg.plan_size = 50158U;
    msg.change_time = 0.0413143413837;
    msg.change_sid = 17835U;
    msg.change_sname.assign("GNARUVZGDMRUAHLWPWUJMSSIMDVKFPBMGHJHCNPDYELSXOOLOADYABXERRDKDIXSQATBBJPNDRALCFDYWFUPILTZNVKVQKHGMENROFYBZGPNBGZIKHUCCAUWHGKHNSUNYEOIJPWJ");
    const char tmp_msg_0[] = {-33, 87, 31, -87, 6, -102, 5, -52, -126, -51, -64, -27, 96, -59, -120, 124, -105, -89, 109, -45, 47, 69, 34, -53, 54, 40, -6, -124, -120, -18, 80, -61, 3, 35, -82, -19, 23, -109, 54, -8, 118, -41, 87, 107, -13, -54, 101, -58, -36, 1, -54, -127, 56, -128, 61, -100, 59, 31, -24, 36, -44, 32, 117, 73, -5, 43, 92, -54, 59, -68, 59, -62, -46, -50, 75, 78, -26, 11, -34, 1, 81, 60, -96, 118, 73, -74, -36, -83, 21, 2, 93, 44, 79, -83, -127, 102, 89, 68, -128, -66, 100, 32, 26, 96, -51, 107, 64, -78, 5, 88, 97, -20, -127, 36, -5, -22, -75, -110, -84, 125, 23, 47, 30, -87, 32, 97, -66, -115, -25, 0, 82, -94, 83, 98, 74, 68, -77, -113, -121, 74, 68, 111, 85, 14, 3, -122, 8, 59, 45, 76, 13, 122, -123, -104, 122, -45, 41, -48, 49, 117, 57, 97, -64, -12, -45, -42, -13, 26, -119, -86, 63, -44, 82, -114, 68, -40, -98, 1, -5, 93, -44, -101, -39, 118, -26, -5, 8, 111, -69, -44, 110, 16, 124, 76, 15, 5, -93, 60, 11, -89, 50, -72, 82, 105, -85, 118, 48, -79, -128, 100, -43, 66, -31, 44, 113, 25, -86, 19, 3, 40, -37, 82, 80, 50, -125, 74, 32, 91, 50, 22, 106, -69, 115, 119, -78};
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
    msg.setTimeStamp(0.982006157035);
    msg.setSource(19419U);
    msg.setSourceEntity(162U);
    msg.setDestination(49502U);
    msg.setDestinationEntity(186U);
    msg.type = 150U;
    msg.op = 98U;
    msg.request_id = 58910U;
    msg.plan_id.assign("WQXCHGZWUDGOEYXYGPNLVCBRSTHVMCYEFFNGMFMVODNHEPHQEGKBNITRWXPDJWHPPIXILITJWZUVNNVLOQRTHPMQUKUOBZWVIUTYYAEKSWLUXODXCBOONIJTFFMHZYCAACEQFVUHUDJKHNXBOCEWQSRJOGQMLHAISFPGZXMFSDTGSMQGZXTDLJRBKRA");
    msg.flags = 35234U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 25041U;
    tmp_msg_0.lat = 0.999600753727;
    tmp_msg_0.lon = 0.310397963543;
    tmp_msg_0.z = 0.579029455721;
    tmp_msg_0.z_units = 228U;
    tmp_msg_0.speed = 0.109961108236;
    tmp_msg_0.speed_units = 232U;
    tmp_msg_0.custom.assign("UBYSZHLMGLZDYYJEFBNZTZTDDIMPH");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QESURJFDBGKWSHPT");

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
    msg.setTimeStamp(0.23425365323);
    msg.setSource(53168U);
    msg.setSourceEntity(84U);
    msg.setDestination(26249U);
    msg.setDestinationEntity(68U);
    msg.type = 31U;
    msg.op = 90U;
    msg.request_id = 55422U;
    msg.plan_id.assign("KICVANOJDMVBDNGWOOVEFUYPYFPXXXSMFBRWSDURQNKGVTHHJAQPKJCUVHQNUYLKTUKKVSWDHTYBV");
    msg.flags = 13355U;
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("OIWHDRZUXSMODOQWATPERYAKGAJQFKMLGZHAUBGGBHMNOZPBOBWRUTHMGJNPXFZCLUPVQMEHEPBMQLUPSVCHSHQTOGYBCRTODEHSJADKYIDBSGDOXRQWQXWZNCYACDKHKURSDMPIJEETNLJPMUXXEITTHJKKVZFNSNLYMSEKIBAJDLWFBGXZFJCKVLGUSNZBFVFLRCNFTUEJNPIQFYIZXGKWUIAJYEVYRDZACFVVPIWSVYO");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("AINJLUSPQJDHDWNECOFGUKGKNVXICRRMHWTGDIUZUSJXUMVOLKWYKELISJZWFRPXJTITYVVKIYS");
    tmp_tmp_msg_0_0.sys_type = 245U;
    tmp_tmp_msg_0_0.owner = 48230U;
    tmp_tmp_msg_0_0.lat = 0.312635365228;
    tmp_tmp_msg_0_0.lon = 0.415086194182;
    tmp_tmp_msg_0_0.height = 0.306040181994;
    tmp_tmp_msg_0_0.services.assign("SSPWAXSLCQJCTUIDTYLZGIEWTXZIMHEKDQMMJJVFKXSLQDBIHDAZKSNQEAFRFUDUOPLDMFNUPRVSYKCEYNZHICCKSQVHXOWFYAKOKFLTRZONPPYBMPDVTGGOSUFZHLPXDNIFBYAOVGEFCQSZCNDGBUBVQTPEXWUKRRZKINGBBHAEWHTWJHYMERIESZIBPHTMQOCWXVJNZRYXJGJNUMBCTAJJGUVKLBXWAAMRDWLJPLQFMUOOQOHWYNVXG");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HMNMOGEPXRENUHYICNDLVFESRWFWEWVZQZKNJXPMVFLRDNAOIRNLKRAUOCVWZXCSLSZSPPCKJZHANXEEXWTUYMMFBFIQITKOYGDKGTYEXGJDLIUUAPACQCDHFLKQJMSURKPQKBWVGEYHRBSGQLJSCLICPUXSNMBPDGBMABLWCRMPRWVXOSTJTIHNGXDBQFKN");

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
    msg.setTimeStamp(0.189758885723);
    msg.setSource(53232U);
    msg.setSourceEntity(174U);
    msg.setDestination(56406U);
    msg.setDestinationEntity(14U);
    msg.type = 26U;
    msg.op = 227U;
    msg.request_id = 40163U;
    msg.plan_id.assign("CKSEGYMQEVZGVCNBBPJPFYFLUWXVTOXMWLHDWLLQLCZSSYITVJNEIHYXRELVFQOQZAWAJNPCKBVTKAOOZXDABZXSMNLOOWUVYDXPHMMWQTCUVABKXHZOEQLCFFMHKGMXSRUGNECYRQABUFJZGUYEBCYQQJSFDR");
    msg.flags = 1232U;
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("AVSHALIGQKKOISRFGAWOXQZTDKLQXODGVOZASCUEKELPQIYPERQIWGRPRFLAGBXHCSSTVRESWVDSRBU");
    tmp_msg_0.x = 0.0501497074617;
    tmp_msg_0.y = 0.568942978665;
    tmp_msg_0.z = 0.520070382408;
    tmp_msg_0.n = 0.96305107865;
    tmp_msg_0.e = 0.984380446343;
    tmp_msg_0.d = 0.899896694135;
    tmp_msg_0.phi = 0.521008632144;
    tmp_msg_0.theta = 0.5726541021;
    tmp_msg_0.psi = 0.814400440241;
    tmp_msg_0.accuracy = 0.833413805844;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZFYATQIEIBLYAAHQJLHTYRJEVXTADNBJDGCTXZKGOORPLKFKAALSCCUTHQQXVDUSXDLXUCWKWHAZVDJLBODRMLXGYCJBMJZMVNZEMUVSIJ");

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
    msg.setTimeStamp(0.158848888896);
    msg.setSource(4307U);
    msg.setSourceEntity(220U);
    msg.setDestination(13120U);
    msg.setDestinationEntity(171U);
    msg.state = 220U;
    msg.plan_id.assign("KEEFZXCTGHQGHIHJJPWLGHRVKXOPMDREBXZOYXWOYSICAHRIYUKMUOQXJSGQSBVTEWDSYXSOCCUNQYHAVFHPRNDYDHVLBGMRZJAELQWABJCTBATPQSUKWRWQJEFBZDXQOIAYPOTWIZVKGMSIKNKUBBKQFIVRNGJFVHSGMLRSAUVWOK");
    msg.plan_eta = -761953434;
    msg.plan_progress = 0.421277909946;
    msg.man_id.assign("MHWRQLTDNJAVHNIVCGGXBUENOMZAASGNOWEPOOTZMXDKBIZHKGFJUZUHNZAQTBOFUOFRQUUGRKPMTYPZJTVDIARKJSHGPMFHXIYJRRQDIIWQLAESSRYIIOWJXDGZPLQNPCCMKLRAEESGVXFVEQYXJYHBDTZECGTMWPFTCZZUONMBAQGCPLAVOPPHNRJEBKIOKYNYVDKDUQWQFYVCRVSMSEYSYBDW");
    msg.man_type = 20726U;
    msg.man_eta = -2083296242;
    msg.last_outcome = 60U;

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
    msg.setTimeStamp(0.0717172150734);
    msg.setSource(27568U);
    msg.setSourceEntity(116U);
    msg.setDestination(4882U);
    msg.setDestinationEntity(146U);
    msg.state = 193U;
    msg.plan_id.assign("KTHAMKZMQXEVVQJZIVXOOSZVEOKVMPKEUBLAPBUSFWDEIJWGLPHCILTTAGJWSRRCKZMZBRXCLUVZDUSHRFDQTRESAOBWFEGJIIMQX");
    msg.plan_eta = -1167176921;
    msg.plan_progress = 0.0645946564663;
    msg.man_id.assign("PTDKZINIONDHVUMVJNBEAWMPBNLCFPPJMTZJIJMIFNDIFUEYUQHCUTYDTLUWWKTISDETKARHFCLSOCKCGVMPSQPRLVWQB");
    msg.man_type = 35491U;
    msg.man_eta = 1587202571;
    msg.last_outcome = 14U;

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
    msg.setTimeStamp(0.679122942664);
    msg.setSource(37716U);
    msg.setSourceEntity(188U);
    msg.setDestination(64019U);
    msg.setDestinationEntity(32U);
    msg.state = 202U;
    msg.plan_id.assign("RXFTKHTPCRCMZAPIGOBZFAPBCKVIKJYBSWLOOZNFUFQDQFWLIMYOWCRHZHEVDGYAIUGLDVIYRJFYXZIZZEAGUDEAOJVHOBKFIWXPCENAIBNMDRDMOXJWPSTCIEXUQGPBHMCPSOWHSYTTPXILJNGXBHRMNEVTQBGJYALNAUVREYMQVLWZVTUDHZPWDJMLZNCTLDOGSGFVKCSUQRKYGQHUAPESQXYVJXNSWFXMJRKUTBKDLBRMJS");
    msg.plan_eta = 1647019695;
    msg.plan_progress = 0.864222191684;
    msg.man_id.assign("JPXYFLRFWRFTNMZHDRRW");
    msg.man_type = 12016U;
    msg.man_eta = 1126097290;
    msg.last_outcome = 125U;

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
    msg.setTimeStamp(0.915058543311);
    msg.setSource(12905U);
    msg.setSourceEntity(214U);
    msg.setDestination(5798U);
    msg.setDestinationEntity(52U);
    msg.name.assign("QUWEPJMVXRRLBWQKRCJFAPLFCGZEHPOIUMLHHRRHQKOZNYOERSEGTQLQJTHFKPXRKGPETMJRPMIXUTLNOXWGAEABNYYWCVSOVCLBBJGXHYXASJDBNLVWLNVGMQEZVJFQDDDKSWQHNMQAGIUOGTKSRJJGZMSTIUFFWCYQUCZIAYHVFUIGPXKBFTYSWBEFIURSCKLCDBMPNBAIXZNYVEJA");
    msg.value.assign("JWBKTPUUNPFHCOFURRSSDPXFANHUJDRZEHBFGYDWGJZGSYOFMZOVINGCBNINTMNANSKQDNISQLTIZRDLBSKUHOTLMEZYOWAJORWRQQVSMJSZYNERTTQKMIEBWRNXHOFXYVVWEWXLXJBJUMHPWCCVYLFIYMXDGLTQXILWCPCCKXACTFEVHRAKKZYWVKUBJEEGZPDJSKTHCIOFLIRAIEDABMDLUHPQXPHUAVYFADZGMZG");
    msg.type = 52U;
    msg.access = 192U;

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
    msg.setTimeStamp(0.26203450557);
    msg.setSource(49594U);
    msg.setSourceEntity(138U);
    msg.setDestination(9224U);
    msg.setDestinationEntity(43U);
    msg.name.assign("FMYKVJAREYSUTYBVTKFP");
    msg.value.assign("PHSKWSHBLHDSFYWMMQQCRKSJUFQCCZZYEATOLKNKKXJGESYJGOXXLLTRBBUVZYNMGNXVUPFGVBXUFDH");
    msg.type = 19U;
    msg.access = 89U;

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
    msg.setTimeStamp(0.869380601062);
    msg.setSource(31648U);
    msg.setSourceEntity(103U);
    msg.setDestination(38275U);
    msg.setDestinationEntity(41U);
    msg.name.assign("DYEFFXVALNUYFLJCKLTLCKTBODZPKBWGAXLULRRZYDKFVJWMSGDVCIMTDHHYIFEJPZPNUCFTJSGAWGGGTUFBZCAOLZDRTKWPEWNRFAUZBZRMQOGUEHTCAOBFKNKZBMSDHITXYEYVJUXVAZWLWPCSHLCOQMSUNNRIMMKJOIIXQSJYOBAJYQGHPHQYPVDNOROHRRJMNNVTGIXSIJYNPEQREVVTPIIOQXLKKZFPQHESADECEUWX");
    msg.value.assign("CCBJPBDIVSFPYXRBCRIBILVSHOYLJSRKZMGFOZKGZXGPVVOSJPJYLSTTNZLFKJDMGWHFIICAUVXFXBANZWEKCRTPKODWQMQMNPBMUMZQEYRWGJTMBUHFZFUEQJWCPUEUXAAAAQODNPOJWVGAEXCYZQVIYMDVLOTQHODSSDMWKOAQRUHXLKRMLPKBVEDDDQWLBFEZIRESIEJYGNITEYWNIGHGHTUOCHNXKRWCTTH");
    msg.type = 94U;
    msg.access = 160U;

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
    msg.setTimeStamp(0.151156825863);
    msg.setSource(54772U);
    msg.setSourceEntity(175U);
    msg.setDestination(13641U);
    msg.setDestinationEntity(181U);
    msg.cmd = 79U;
    msg.op = 86U;
    msg.plan_id.assign("MGTMRYYKDYUJHQGLIBRNPYNVERQPFBLTHTDYENPFDWIBWKKTETVCTSDKTMPKNYGJOXWOSUDWNOVDJJKOZIAUXREJZTBMAADSXVXEXBLGOCUSEHWPFLGDEGBKPWIABQCCDJHUYRSLFWLFQGVANBIMWMAVVHVVMPDOYUQRKSEHQWBHTCFGKJXOQJRGJQCFGLQPIIEUMPSNNNSOHXASZFXWZCRXESZIOZFKCUOZ");
    msg.params.assign("UCMNQGEZSCHFONGJTKHGUUYGSGYNVYOALEBRADIYDNTKNDVTMHHKLUIFJZGORFBYIQKYMITOIVUANGLCMZWFJLVWHWWMSCBXSTIZQZQCSFCATZKBDIVMFDTLBZFPWMWRSKPDAEOZBCQQSDRJOVGBAJIKSNWZBWXYEGLYTXYHFIHVACRXFSCJJSOELOTMPVKMEXJQVNLJAPEERXOUUNPXLD");

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
    msg.setTimeStamp(0.53045887803);
    msg.setSource(35524U);
    msg.setSourceEntity(53U);
    msg.setDestination(44841U);
    msg.setDestinationEntity(211U);
    msg.cmd = 227U;
    msg.op = 232U;
    msg.plan_id.assign("HJSAIYFYKOH");
    msg.params.assign("PCAAFBOTCHTQWUCTUMMJVEZRYQSQEVBSLSRVCHSEAJPQWLYOWIVVFDKMPGGTIXCSEKAKEEDHTQFUIEZYJIBUZNPOLCTUZLZHGIVMWOKBOIYDXAMQPXWVARMTWRDGHPAODRYBFNHGJCYFXMLXOXAEGRGLIDHVQBKRPUIDIILKQTMQQJCNHRNBSLJSVMFUZWYFRKTGNXCAXCWFLWNBXNDFJVODGEZKYHPFGYZUZNRSWKUXZPSNKUSNEDJHPYB");

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
    msg.setTimeStamp(0.409293827357);
    msg.setSource(27294U);
    msg.setSourceEntity(150U);
    msg.setDestination(52077U);
    msg.setDestinationEntity(175U);
    msg.cmd = 202U;
    msg.op = 33U;
    msg.plan_id.assign("LMLXVTBERBTUXGHIKZXIJZCGGIXBCLFZOLSVJDKTZQTUCIFNYQGDYHAVBMIDMSPASGDVZAVKEMUEQYNDGZPSAAZKBSEYAPSSNXJONQBUXYMRDLWDIHOGHPBXMALHRJFXFHWZOIQKGTVWNWENMOOCPWVLJFVCKAWVURVTHGPUSKWFPPKFPRFQLJTNQJJYBUCSARJEBMIHWRTZNNIBZUJEGWCKTDNULQCOKDEYCLMXOUQCRIDXERHOFHSTYYQWP");
    msg.params.assign("AAPLXGCCBBDUSQQKVZTIXDXQHAGOROXWNCHCEZVCICCXLNONWAJNAMIOGVEIKUWGIZMVUUDDYMEWTLQDI");

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
    msg.setTimeStamp(0.61578015419);
    msg.setSource(60482U);
    msg.setSourceEntity(132U);
    msg.setDestination(54787U);
    msg.setDestinationEntity(174U);
    msg.group_name.assign("UKXTUKBRLMOZAWZTPMHZTYDJAENJQOEYWMGJKSNBVWCCFFDCMHBTTNLEOQPDIKAUCIYRAIWNBBJZYCGNRCOFHNSYVDJYEHDWXBEOFMBFVB");
    msg.op = 240U;
    msg.lat = 0.0215215701596;
    msg.lon = 0.974153162795;
    msg.height = 0.110595494825;
    msg.x = 0.504929956955;
    msg.y = 0.359664869949;
    msg.z = 0.584976059162;
    msg.phi = 0.0877843062896;
    msg.theta = 0.481174145517;
    msg.psi = 0.0465821693875;
    msg.vx = 0.491872687237;
    msg.vy = 0.467140933428;
    msg.vz = 0.0805133842937;
    msg.p = 0.643300338159;
    msg.q = 0.484396467946;
    msg.r = 0.623991487314;
    msg.svx = 0.744174826093;
    msg.svy = 0.201696979357;
    msg.svz = 0.0450724944209;

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
    msg.setTimeStamp(0.390091942885);
    msg.setSource(6864U);
    msg.setSourceEntity(126U);
    msg.setDestination(14773U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("CXVQDBROZYXZSBWLJONGHMGWDLHBTRRHVCPMWXKQIMAJVSNTDEXYXLNBAOJSAZEGNVTAPHBPTDLCFYLKTSECBIQAAQAYUQVJFQRWAMEWINCEOBKOITYKWBXAVJSPFUGUPMISYUODGIHXMQMLGGYFHVVKHYKRUKXWYQDNGDESMCJFCNIBUNGHEQFUCVRMRPLDIDWXGZJVEECSTZZJ");
    msg.op = 39U;
    msg.lat = 0.230721308518;
    msg.lon = 0.495984707137;
    msg.height = 0.287968451619;
    msg.x = 0.049286992425;
    msg.y = 0.495775733183;
    msg.z = 0.754524248791;
    msg.phi = 0.149612596165;
    msg.theta = 0.594318594772;
    msg.psi = 0.382398126838;
    msg.vx = 0.202769037843;
    msg.vy = 0.852596022581;
    msg.vz = 0.717120618791;
    msg.p = 0.306875764802;
    msg.q = 0.508892238512;
    msg.r = 0.87171635354;
    msg.svx = 0.248793971174;
    msg.svy = 0.403137428602;
    msg.svz = 0.673354304364;

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
    msg.setTimeStamp(0.0287238229087);
    msg.setSource(25959U);
    msg.setSourceEntity(212U);
    msg.setDestination(40281U);
    msg.setDestinationEntity(217U);
    msg.group_name.assign("BGJAYRHKXCOCSGZBYUNZKTKIVEPRWENZXPIPQKAHCUUHSDDYCMIJXDROYBGVSHHPJFMQQSZFZRGZIMTTEHQVHDLFNPAFHMALOCOQMALXBZ");
    msg.op = 120U;
    msg.lat = 0.0859160998513;
    msg.lon = 0.387072735089;
    msg.height = 0.257843151804;
    msg.x = 0.0578522313297;
    msg.y = 0.155400153286;
    msg.z = 0.878410692153;
    msg.phi = 0.54535990288;
    msg.theta = 0.247258781438;
    msg.psi = 0.723663806375;
    msg.vx = 0.569945099398;
    msg.vy = 0.943260795862;
    msg.vz = 0.644638385103;
    msg.p = 0.665619282857;
    msg.q = 0.824198936474;
    msg.r = 0.126043154057;
    msg.svx = 0.878155993609;
    msg.svy = 0.336003145607;
    msg.svz = 0.657023557499;

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
    msg.setTimeStamp(0.394274625773);
    msg.setSource(24534U);
    msg.setSourceEntity(187U);
    msg.setDestination(20230U);
    msg.setDestinationEntity(79U);
    msg.plan_id.assign("WTSCLEAIVXYCSASPOMRVWHPUNSJVDESZURAZZQTIXICTZNWZYMCRRXKPKOPXNFINQYFBUFJHDMJRXBGXMFYTCEWZOWHMERLCUBUKVBPYMLFPPOHAVZEQZTNGDLWGUIQIAHCHOQXDLWDGGSOYPFVPXCFVHIDGKLJTTBUYISBUJRQKACRKMMLWDBWYNIQEIKNFONZSHEKWGQFJLJVJHPDZEHGQNLDDEGTBQFNGMYMSKTAJJVKARX");
    msg.type = 238U;
    msg.properties = 114U;
    msg.durations.assign("LZOYEHJYVUOCZWZXTELYVAXSMYGKGOIWLSQCQBSFMWWTOTMQGZEBAONHMHOOXFLJDPFYSAMEFERLWDCVDLOANBWJQIARFUAUTEDNIEGQHRTXENWFDTZGTJIYYZQZSCJDCUGILURSQNJVUFHRPVNJXSLHKQZBSMJFXHKAVPB");
    msg.distances.assign("CTDEQKDKWNOPVVMOEVRRYMZLAHOXLTMJXENGTCOFOYVLLSIEBHCUQUHBFAUYQQJDTFQUGZLGTWAZGUFRORFWRYMIRJPXPSEI");
    msg.actions.assign("LDTNTHTDXFYQIICFXKJYFPVWGZAVUVCWODZSEUMHQVPYFJRSAFXGWPSKAXNMBZGRYPMWWBDWPRHKGAIMWBZJTHXWTAYNLFQTPBDDOLQMZIJHPBCOULHQLUALUASRKRDHEKOLVSZIWVSIEZZMNNAATSCKSJIVOHVOSBTVYNFICYXEPUGQGQNEMCNQEPEOZXXJMZUKIXGLCGBAFKMDBHNEVYBYBFPDGFGCOOULQMJHCYXTIKLURCKSDQROW");
    msg.fuel.assign("BVWQTTPGBJYZZIFCDNWDGAOGUOVHSPNARQNFVSLPJYBBLFOHCLWWZLUTKRAXCCDZUCWXVTUJAYONNPYOFGKOYKQSERTLZYSMYWVQUIRBTJMJIKLGIUBEVHV");

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
    msg.setTimeStamp(0.524565241338);
    msg.setSource(58266U);
    msg.setSourceEntity(237U);
    msg.setDestination(37587U);
    msg.setDestinationEntity(54U);
    msg.plan_id.assign("DKXRRZNNGRCNFPCPUMCOMIGRDOAGPUFEPEAQGSHIEFMJWBDWSZKODIFXGTJZLVFPHFKUHXPVEYPEDZEUVWSVLNUAQJZZLVQOVIBRMTLTOSWHUARBYZPYWNNSGOTYCUAH");
    msg.type = 229U;
    msg.properties = 198U;
    msg.durations.assign("IGIPABZLNAJZZQSCYTKDLDNWLRSTORNKRVEVQPVXMHFMMDMCMCFUBCGVOBWT");
    msg.distances.assign("PJRGEWKZCACVAUNUIEZSLOVSKIKRSGHCXJCWZNKNCJIMPKFRZTCTDLDOSLVNVMJUHOMIAXCVNHRFGBLUIQAPDWBSDEAXNKYLNBQORRJJUBZMJLQWOSTQTTOCVMVABDVYFGESQFIVULXMQZSFYHFIUYXPKTYDPBDHEBPBMGXDFGFWBQLU");
    msg.actions.assign("VWKZFKUYQRJATYZSJXXZOXMUEYMBGJMEPWNMHXMZGRCOVXMIQQRFNVEKPXLEHECOICLL");
    msg.fuel.assign("WCGEIRGXGEQGVSMGABTVAHAKGQTBUYSMPLKCMVMNDRLKRJRHSUCDSGVXLMFXZJBPLNQPITDSBHPWAIWWLMQNROBYYTOIHCCTBZCDZFFJFXQOXKLUZEKABATFOTFDTSJZCJIWRXDAL");

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
    msg.setTimeStamp(0.66332372918);
    msg.setSource(13440U);
    msg.setSourceEntity(155U);
    msg.setDestination(24998U);
    msg.setDestinationEntity(44U);
    msg.plan_id.assign("ERAYSZEKJQHXWLJJYKVNEGIILSKFDLUIETQQIGUYUYZPUGWJGOVKDDPBHKXIAROERZQWXYFPQBQNSWLM");
    msg.type = 163U;
    msg.properties = 38U;
    msg.durations.assign("GGBIASJTEREINZ");
    msg.distances.assign("YVQEPNZOCHGJMBWLOUDUBJYPALZCUCRJWWGZSOVTOTNRTQZYETAZOEBGWYBGAWIQCVHURDYLKRQKLADHMJKBKBHHSYINBFIHCDOZVIKTSFSXTRUFFMEGKGFZWXXPPUNLNSVEISCYWHAULUJODDOCKBZXROSKKALFPTNXQPAKPNQMFTFMALXZCDGHEVXVEPM");
    msg.actions.assign("YBGFCZHSPMPQFAIBJUYITAUINGRIQYCZATRKIYSHQHWRRBQVDODTZMYMXTEUIXGEZYXLKKEBJHFPFTYXGBMKRPPLPVKOKMFESRLDSVKYFRJVVTAGXMMJAWWZNOTHSDLUAPWSGSMEFIWACJAVLJVQGDVZICPYHUWRNRBQCQNCOHHUEQDSSUCKEXKJIGGWNPOSNCWXUWNRLQLVXHMAFXGTLKLNCUZJZBPBFOTWZDQJHLUIEDOE");
    msg.fuel.assign("KSLYCDJUGBTBWNTXDCQZTHCWXHSFNVYTVLFWQRZHXOCFDJNSMHNORBQAUVUOMFCRZLA");

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
    msg.setTimeStamp(0.791387517999);
    msg.setSource(14482U);
    msg.setSourceEntity(233U);
    msg.setDestination(38710U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.891117303136;
    msg.lon = 0.682760401014;
    msg.depth = 0.466174064649;
    msg.roll = 0.504505228355;
    msg.pitch = 0.938395461748;
    msg.yaw = 0.267320452563;
    msg.rcp_time = 0.249964099783;
    msg.sid.assign("VKKKAOGRLLWZUDMHDUTGWWFKTIQDYDUQODKQCMTJNXBHNLHEOBEYWEFODQYUCCRHSMFKZOWUVABYSRFBSJCEENDQTTNFJMVYSBQUPOJBBITXUPVARIQEZNZLAMJSWRAXGRP");
    msg.s_type = 24U;

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
    msg.setTimeStamp(0.100994956852);
    msg.setSource(25469U);
    msg.setSourceEntity(57U);
    msg.setDestination(62843U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.74301535144;
    msg.lon = 0.0573990643543;
    msg.depth = 0.734797877369;
    msg.roll = 0.952135104598;
    msg.pitch = 0.845276359473;
    msg.yaw = 0.830605706154;
    msg.rcp_time = 0.351599907603;
    msg.sid.assign("YZUZTCVFPLXUZHKSPPKREWWIKFDUJQRPAILUQODGOMRKJOAWMSQNUYAWFWEJZDVBDRRCGQCZNACXMYTSGZHKAGBAJEXBOCZLVLFTJXNQDXNSZTTFCYIJQBEYTERVWVPXUBSBALXBTXIUDPNHPCECFMT");
    msg.s_type = 36U;

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
    msg.setTimeStamp(0.659857914338);
    msg.setSource(33620U);
    msg.setSourceEntity(47U);
    msg.setDestination(46413U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.430316684783;
    msg.lon = 0.404033955454;
    msg.depth = 0.645655155719;
    msg.roll = 0.675628187151;
    msg.pitch = 0.727215994316;
    msg.yaw = 0.262683317112;
    msg.rcp_time = 0.508125154778;
    msg.sid.assign("JPTQLKUOIHGZKQWKRDQRHSQPAVKRDWQIZTHVWIZCRSJZFBMHDJBVXLUZVAJLQFOSGRBIVPCSYCBRUECGTENXHWYKFGRKXQX");
    msg.s_type = 61U;

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
    msg.setTimeStamp(0.599880802114);
    msg.setSource(8577U);
    msg.setSourceEntity(54U);
    msg.setDestination(32560U);
    msg.setDestinationEntity(3U);
    msg.id.assign("ZXBYJAIZNUYKMFDEZCTWBVPBZRSHSMLGWJEBBZMYADQVICAOBUJDTVNWWHWXXLXEBXJDTHXEFATDPEIUKGPHCGXBUAQPLWUNZUDVIIUSGRKAHKPFRFSAQIIWLNSQWKQE");
    msg.sensor_class.assign("ICYUAJTVTKCJNPKBOSQTKNETWVAAPMSEPYUIBOVZLSCRUXDRSWEHPSEELVXEIBLLDJBPYZFMNZLMGZSZAWCGXTJFV");
    msg.lat = 0.769742507044;
    msg.lon = 0.257373231109;
    msg.alt = 0.500775343489;
    msg.heading = 0.442822658539;
    msg.data.assign("YCEZVJJXRJNIJBXEKCPJEXVGCZRSHGADQNALGBCZAQLTATOOOCNLBSIILXKPCADDSAIKQEARUGUVLKNJEQTHNSGGYLOPVBSCSGZEHMMLQXORLZIKROTRAULMJNOUPTWFPKZWTQWCHVWGRYFFQRBMUHSOFFTBHOHUZPZNKMYXXWFIEWMVFPDGNJEPYMWUYTWUVISWDGWAKIHRNTDPHYXBZOXDBDFFHMFUNSBCSIJMQKCJLTAX");

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
    msg.setTimeStamp(0.415002302821);
    msg.setSource(17446U);
    msg.setSourceEntity(154U);
    msg.setDestination(56723U);
    msg.setDestinationEntity(23U);
    msg.id.assign("MFJKIGYJULFJMHYGKMETZVYHAWMVWNAMJGZCNDSDYNXVNRIHIPNZCOADTDSASYXBTRUUMMXTYXBVEWQWHSWUPLOOLLBGIPLKOQTECRCHBSMUFNBJCJOVGDAKPHRJAWCZRZESH");
    msg.sensor_class.assign("AYLUVPDIVAHUCAGXECCKAILYCUKRQUMWKQRDLMAMWAKTJHXSUNNPLHCJRTKWVZPSOYSOCWZNDTQXPUONBJBMQDGFWOTTVABNYJXEWSHKCFPINESZHTRMPSEFYZPLXWVCVTLQVJGNDRJQNJOEUIXTIXFMQABFZYUIHHFDFERNKRRCOVQIDJJDEPWOGCLUPMRSAUNKDFMEXEYLSGOYTHBZVXESMZGIPIBY");
    msg.lat = 0.528173459117;
    msg.lon = 0.825031644772;
    msg.alt = 0.312194720017;
    msg.heading = 0.302803189279;
    msg.data.assign("YVOEDJJWGVVTJUFIRXJNKPXQAXINHUBNYSTEMGOYLWAVFQKBZBBJOZOLVENXSCZBQDDRTNSREMPBWSDPYKWKGCUYKUETMZQTAPHNOLCDDUIYJCQHSKVERYLFLEUXIHCAMEIWMFGTDTMKJCWZOZEFHGKNVSPQBPAMZOUFQAIMSRTQLDDMCNXASCORKHHPJ");

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
    msg.setTimeStamp(0.514381225765);
    msg.setSource(17868U);
    msg.setSourceEntity(2U);
    msg.setDestination(9155U);
    msg.setDestinationEntity(71U);
    msg.id.assign("MCPEECPZKBSWQEMJWCZJRDSQFEQLNGGPLPABOKIDALOJITZCGTNYNAMXCMOWYPDAFOTYARJWDVFSZDXHIIEGAMHEPRXQNUWOKFKDRDHOLTYQTRNTMU");
    msg.sensor_class.assign("KBDGXUXZSIYQEHRQRRDUGYOEMHAJOJGILODQMPCVDBHZLKBOJWEUMVBMFKNAMXSPKWEWEKTUWDTHSJZLUSYKPBQSJRCFXDMHMHBFYFIDSWLTWZRYJYGIOFZGJENVAYBUWXWNCZTIABOWELEAICQRZLTPQSVZUQRNDWPTVVTFOXS");
    msg.lat = 0.372001207909;
    msg.lon = 0.161018539018;
    msg.alt = 0.574202389515;
    msg.heading = 0.8589916024;
    msg.data.assign("CYZSNVVTXNXGCDBKYPOBAJZQGJJIURXEHKUKMOVBSNYHQAYEOPKFMPCRHITMLXILYQOTWFHCDLUSIZSGBDDELBHSHMRWJDXTQBFYINSPEIMHVEJXUEQBBYJAEZPOPXEQQWGNSTSYPIPTKKHQGROMTAWFWFJNVJRAAYWJGNREZDDVKOBJPEFKZRFTWCLXAAORCUULHZLMUMZCTNOSFWGRAMCOSXIDTZFWDIKQGVCUAXYH");

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
    msg.setTimeStamp(0.524339176909);
    msg.setSource(51372U);
    msg.setSourceEntity(151U);
    msg.setDestination(6003U);
    msg.setDestinationEntity(208U);
    msg.id.assign("UQCPLVHRXPIYRWEJQNMNEBRYLUKGSYKUCYADFHEESTVXCNBNYHRVBWIISRP");

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
    msg.setTimeStamp(0.745574628644);
    msg.setSource(27931U);
    msg.setSourceEntity(222U);
    msg.setDestination(9952U);
    msg.setDestinationEntity(114U);
    msg.id.assign("KAOUQKFCCBVJQJIDXWRBZPGLGFGOCCHODOISABWKDDXDSQDIWPNLRERIDMLJNSYNVFZLTPUAEUVBZRLIEMHIZWUWYEKEFSXTMUQZUAKVCTEOW");

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
    msg.setTimeStamp(0.536418787409);
    msg.setSource(5765U);
    msg.setSourceEntity(211U);
    msg.setDestination(13712U);
    msg.setDestinationEntity(149U);
    msg.id.assign("VGUZFGFZLYQXWBXGTRMBKWMBFKJRFOQJOFJLNNAEEAJDVIXSRNZOKSVWGMXEBYIIMJBLQSVULZFOHXVVRCHIOQKYPZINLEKCPOURNSQSTJTENODFHBDTDIYAIPODORJYZBLXBUQYBCMXTUDFTXXUHHEXDUDYKLLVJANHWUTKZAIJZMPNCSS");

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
    msg.setTimeStamp(0.358322402555);
    msg.setSource(47946U);
    msg.setSourceEntity(55U);
    msg.setDestination(5812U);
    msg.setDestinationEntity(108U);
    msg.id.assign("PYWSEFQLRCNEGDCODIJCVQNFOOLZHIZBIISSAETNZDDPKYITJFBVLZLUJVLALJQTQUDSRXQIKTRPNRAXXUTVNQWGYGNQNPIRVJFRAHYBWOYKIRQHCAVWDAMGUOLBCSTVSEUPSGZ");
    msg.feature_type = 178U;
    msg.rgb_red = 36U;
    msg.rgb_green = 47U;
    msg.rgb_blue = 230U;

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
    msg.setTimeStamp(0.436486436123);
    msg.setSource(46908U);
    msg.setSourceEntity(69U);
    msg.setDestination(8864U);
    msg.setDestinationEntity(47U);
    msg.id.assign("UARXVBOIEUJZTRXQGCXYLHDMVBVLBICEQZLVBUQNKWWYOIIFIAPSTGCTFWGHNRBDLBOXNCMHJURMTJAGJRRMUPHYFQATZPKQBPYJOSLYWPHILDYADETKSRQMWGWIGQIYS");
    msg.feature_type = 228U;
    msg.rgb_red = 175U;
    msg.rgb_green = 166U;
    msg.rgb_blue = 27U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.780599807925;
    tmp_msg_0.lon = 0.0418401920131;
    tmp_msg_0.alt = 0.714558843909;
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
    msg.setTimeStamp(0.561887847797);
    msg.setSource(32817U);
    msg.setSourceEntity(167U);
    msg.setDestination(16228U);
    msg.setDestinationEntity(246U);
    msg.id.assign("TNVKABCSSWEEUEBBFQJXXEYYSVWUYXLOAPZBUCWIRFCRCODRNFFLMKDW");
    msg.feature_type = 42U;
    msg.rgb_red = 18U;
    msg.rgb_green = 252U;
    msg.rgb_blue = 105U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.748373030545;
    tmp_msg_0.lon = 0.783954691906;
    tmp_msg_0.alt = 0.41318630415;
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
    msg.setTimeStamp(0.883915452238);
    msg.setSource(3274U);
    msg.setSourceEntity(24U);
    msg.setDestination(37289U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.150876994835;
    msg.lon = 0.856695936192;
    msg.alt = 0.431715907149;

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
    msg.setTimeStamp(0.115294678784);
    msg.setSource(11497U);
    msg.setSourceEntity(9U);
    msg.setDestination(21700U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.450609996382;
    msg.lon = 0.867254115555;
    msg.alt = 0.434669595215;

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
    msg.setTimeStamp(0.271942250886);
    msg.setSource(34854U);
    msg.setSourceEntity(231U);
    msg.setDestination(2212U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.0035730876159;
    msg.lon = 0.18732150741;
    msg.alt = 0.364906026138;

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
    msg.setTimeStamp(0.652678282196);
    msg.setSource(49662U);
    msg.setSourceEntity(194U);
    msg.setDestination(32339U);
    msg.setDestinationEntity(210U);
    msg.type = 81U;
    msg.id.assign("SRWFFNIWGJKXGCNTBGAYJMJYOLFHCTLUBMYIMQFRPYXDRKODLWBYMPPCFUWVSLGJYQACEBIYUFECPVXJFEDXUGMNRGWUWRWKBSHBLUEZIHDRPNIITOBINNXPAHIVZHJOZUOZLSIUCELSPQZMTKTXOVMGJZBDVJAH");
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.0982061635314;
    tmp_msg_0.v = 0.780288527574;
    tmp_msg_0.w = 0.440476807295;
    tmp_msg_0.p = 0.033165615186;
    tmp_msg_0.q = 0.459631606878;
    tmp_msg_0.r = 0.855829596539;
    tmp_msg_0.flags = 55U;
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
    msg.setTimeStamp(0.69795030259);
    msg.setSource(5671U);
    msg.setSourceEntity(9U);
    msg.setDestination(24176U);
    msg.setDestinationEntity(126U);
    msg.type = 142U;
    msg.id.assign("USVYQYTFMTTMDKEYHQVHGVDZSKJCTZUHHXPIWMVLWOMRENEMXGSGGZLZEEEQRTBUPRUEAGIKF");
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 48U;
    tmp_msg_0.lon_gain = 0.95832288075;
    tmp_msg_0.lat_gain = 0.436732253662;
    tmp_msg_0.bond_thick = 0.236342069465;
    tmp_msg_0.lead_gain = 0.743897817415;
    tmp_msg_0.deconfl_gain = 0.093395824852;
    tmp_msg_0.accel_switch_gain = 0.0705516026331;
    tmp_msg_0.safe_dist = 0.919795625462;
    tmp_msg_0.deconflict_offset = 0.466043959275;
    tmp_msg_0.accel_safe_margin = 0.619773006154;
    tmp_msg_0.accel_lim_x = 0.581385256109;
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
    msg.setTimeStamp(0.579820343977);
    msg.setSource(57575U);
    msg.setSourceEntity(241U);
    msg.setDestination(23U);
    msg.setDestinationEntity(121U);
    msg.type = 77U;
    msg.id.assign("IPLOWSLUFXEOCFBBKDCLVFNTBBWYNGZLWQOIIWWTSXSRWNKIFIMDAAZJHODQCJEUNPHKYZKQDXVPOSEPFMJULJFYRVGKGVJACOWPCUZRHITXZQUIRTYRAOYGTJHJSRVFYGIZYZNAUPQTNOXTNGEPTXLVXEMMRHHIIMUSBMOXRYUPMWBLKYGKUDACHWFVJDCCJQYPQXFTQHVNGBDLEZLN");
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.822767675461;
    tmp_msg_0.dist_min_abs = 0.858053776964;
    tmp_msg_0.dist_min_mean = 0.760003123765;
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
    msg.setTimeStamp(0.389668325964);
    msg.setSource(49027U);
    msg.setSourceEntity(118U);
    msg.setDestination(61277U);
    msg.setDestinationEntity(101U);
    msg.localname.assign("WNENBZARWLWIKNOESGFPLYOZNMFROEDOUVSXFBYZVWJDLQTPHKRPFSQJXYLITDSZWBVNNUJSWWSAUJCKOEXMUGDFJYBPUVIIECJBPEATYFMHWDZMDQVUSFKGTHOIUEYBAKWXTZRAXXXMEEUQRQBPSSLK");

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
    msg.setTimeStamp(0.182639294164);
    msg.setSource(16795U);
    msg.setSourceEntity(144U);
    msg.setDestination(15979U);
    msg.setDestinationEntity(4U);
    msg.localname.assign("XPWBUHDOVWNYQNTOIYADLSYSIUZWVCCMMAEUDCEEHOXFZTNYHXPCO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DJIWYNIFNGZRLXFLIYKPKCTQCJAPDXPBKEIDTXYZEDLDEZTROMRSKDWYSEZSEUOZJWROLAFXJRGVPEOSRSCTWHXUHUOVIUCXVDOVFNQJPNVNIQOYEQQJUUDQUMPDHTTGF");
    tmp_msg_0.sys_type = 64U;
    tmp_msg_0.owner = 56297U;
    tmp_msg_0.lat = 0.731459932356;
    tmp_msg_0.lon = 0.424751894536;
    tmp_msg_0.height = 0.976853262875;
    tmp_msg_0.services.assign("WBEJAGMZCSHAFTLJAAPZZMUYKHXWUIXGKQWLMQBNLJQEHDTZRRRUJMKFQWUHUNUYXMPFKAKGVSCPLEYMDVQUPSDPOGBNVNDUWLMCVKNOGNDYRYZOEZMRUIYRZFLFOQCDCGNHREXBOZVLO");
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
    msg.setTimeStamp(0.134253115975);
    msg.setSource(49906U);
    msg.setSourceEntity(205U);
    msg.setDestination(54055U);
    msg.setDestinationEntity(104U);
    msg.localname.assign("XDDDUNYCNMTMAAVJVFBTCPLTRDELLFCIRXRCXBHJKPCZGQBHIRNSVNQFVEJVONOPPZEJMOERFNDEZHOSMQJRQG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NYHCDZWFLTYPEMTBQHRIXABBAADAPCMSKJTRQMDUSUGNMGXGKQLQTMCXOZJELOUKZEMIORIFYNTMFLVPHZSIHUUVYTDUAJFAVXBKFXBAKGPOHOXEDBYHXVKCYESVPZWNJBUCVWPJJWAQRCJRRPKJOXADRZTWQHIESDFVNBGUFKOEESBWVWQLAZ");
    tmp_msg_0.sys_type = 54U;
    tmp_msg_0.owner = 45834U;
    tmp_msg_0.lat = 0.193101686515;
    tmp_msg_0.lon = 0.569602464151;
    tmp_msg_0.height = 0.972579992964;
    tmp_msg_0.services.assign("QJLCVUQFXTOXBZVCIRSOZGVXPEDCWYSINWUPAAYKQLNHSFNUCIKUSGKRQDTUOFTCXNWXVTPHCAYORICMORLLMLHRDEBIDPWMPCJYOHXHDKDMWMHENMKRSNFBVSSFHXNAWUQOYBGY");
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
    msg.setTimeStamp(0.842549979655);
    msg.setSource(53685U);
    msg.setSourceEntity(244U);
    msg.setDestination(25459U);
    msg.setDestinationEntity(103U);
    msg.timeline.assign("OQTTEHQDLCNXPKKQEMFSLJYVRACWQQVETIUJQJHLUXVDNGXTSOCBLYNFQMBKAGEVSBFWMRRIBGMIOICOPPPTJUTRJHJQXFAUGMHRWOTVXBNZMVWHSZYVYYYCIUFGSRMZFJTYZBAJNIQKBFDULKCELDNUGWOHTTOXUNWXPWZJKYZEYIPLVHGPRKSDLOGRGEHQWLKRC");
    msg.predicate.assign("EYUWRJBLQSTJNXAFJWAUUHICBDIZZVYBNLZWWFXMCUQVYSFZJPPXYEGKKUGZHQYTMOPFGFOURACDWEARSVDUDOZPIHLINIMDEJITHTXXVAXOYVOQZPTQWRAFEXVMBKOWLDEPKYPKJVBMWWSMQHNCNJTQAZUKFGBLQCAFNXRHBRHQKHRLITGTMSGZYNHKXMSDTGVLEELSWPCROCDGSNTBXULUACIM");
    msg.attributes.assign("YXVDNSSKSAPRFCRUGYMNVUOEOSMZGQTWAROKHGCMAHQJNTVOTVUBZCSILRLENEJMZPMNEDPVYFUZBVHMTHKZOVOKUYWBCFTQVILPJBPWSZXWKONULFCDPQFBZGJTXARGNBRHGGIEHIXLUGJZQLBUMIYGQDAFWYCJMJUWSJHIBAHKGKBAFMXENLERSINFKYWLQWQTFDZFOXCOXSCWLRAEWIZQKDJRILEKMRSPYHTXUCAPXOQPT");

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
    msg.setTimeStamp(0.203956231133);
    msg.setSource(43452U);
    msg.setSourceEntity(167U);
    msg.setDestination(11814U);
    msg.setDestinationEntity(125U);
    msg.timeline.assign("GSJUIXRRKFMPZNNYQZZWFMDVTNOCSOQDROMJAJZOGWGPDENDFRXEEAKLFOPITMXUYXWSLQWFPWMQJOAOLTXVRDFNBRHRUSQNCCVGILBAQZDZLAHEUKQUBZAVUYJMVTIXBYRPPCNSTPIMGSGGGDUZRWPFDHXCHJIMQVUWVYHBNOFDXQEJDKBVPCLOLJYEYBMM");
    msg.predicate.assign("FTJIXTVOXMEHZGPHRTL");
    msg.attributes.assign("YHFJRWIEKJMLNFILVDMWRZGIHGFXGWDJEIKUPQDJSKOZDV");

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
    msg.setTimeStamp(0.701120218094);
    msg.setSource(12739U);
    msg.setSourceEntity(81U);
    msg.setDestination(62130U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("DKBKKFWVHKXTLRPBKRHILFMGKPVUZ");
    msg.predicate.assign("JRMGEWWIZENHTFOVMKXFWLCBJLFICDYVMXLLDDEZAJAOFCLPTLSYXUCVDCUXIPCKRLXRQOUMFZLRFJUTXAKQVHIMYFQHSPCIHATZIZHSQIKSSOAPDGOYUGSPAGTRBNBNNUGMZAHMOQBJJYDYRGUN");
    msg.attributes.assign("WKJOZMGMWLTQJPPXWMNA");

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
    msg.setTimeStamp(0.463428269943);
    msg.setSource(57918U);
    msg.setSourceEntity(87U);
    msg.setDestination(23072U);
    msg.setDestinationEntity(60U);
    msg.command = 253U;
    msg.goal_id.assign("HFYBWFFDRSYJFKMWPLXMQUSRPVYIHAOUKYHMZFLVSEARSPLLSCALNRHOWXVHIZVLLRKWNRVLQSVTCOTSYOQKYQSNIKEJYUTIJVYXKHQMWDVRNUSGQXRWUBZAFTZEAGQJIMMUEHJNXHNPW");
    msg.goal_xml.assign("IGECKQLLHRDFTWMLFXBEHTTSFMCMMKAYPKUCYIQYMHZMYCZOMLTVYJQRPNLIUSITGVFKQOXSJSHYZRRUCZQPZUIPCZHMKNGGTPQVTJYOLJBXEWOZSAVQIWDEALBOWNAKA");

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
    msg.setTimeStamp(0.113089755817);
    msg.setSource(14766U);
    msg.setSourceEntity(249U);
    msg.setDestination(16911U);
    msg.setDestinationEntity(125U);
    msg.command = 170U;
    msg.goal_id.assign("QOVAIFAJFKWEPUBCQMDIVZXTXTLBUKBZVJVBHLNEJOIRKZNCGLZDHNBMFF");
    msg.goal_xml.assign("BMMRXTNXKKEIUXWUCIMGITCQBMXBWEQLJUASGFJPVPWCMIWYAJNZHNGZ");

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
    msg.setTimeStamp(0.490922661631);
    msg.setSource(51113U);
    msg.setSourceEntity(100U);
    msg.setDestination(37692U);
    msg.setDestinationEntity(0U);
    msg.command = 101U;
    msg.goal_id.assign("SHVXMAGPSOIIIFYYAVOKRRZTTDKOUYYXPQHLUNLPKTEESCRGGEFBNCAFCULUDZOYKWJCJQHQMMGNMWWBHOPGMGHVVVCHJBKTRLUKEFQWWPBDKFXLSMDEAZWBNNDJJWIUZSALTVFHZXRGAXZNZZNPPVMCHAGAIKDKTNFBTOISDEYVYOJEUFXRVIWQTBKXJYZYQPTMBGOGRLBDMXSFLOWOBE");
    msg.goal_xml.assign("TZSFAGFADMJSNJDQBRKGGUWZBLTYKKIDLOYTVZRWNR");

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
    msg.setTimeStamp(0.213532266496);
    msg.setSource(60379U);
    msg.setSourceEntity(82U);
    msg.setDestination(26424U);
    msg.setDestinationEntity(117U);
    msg.op = 191U;
    msg.goal_id.assign("TBDDGJOSDAXBRASVPYACAGWUKQPWXUEHNDLRPGZNPJEIJULVOQQVANXDERTYTIHVQTWOXMBHJFYASJIMFUKAYTEDCUTULRPZFEPFLBGSIVZCGXYMVBGGKEHVKODWJIYUPQBNWZFAXJPRNLMIXMHAZQLYTCGMQHVWELPXKLNWOBWJRSKUMSVJRURDBWMMECWOAMHHYZZCGFSQKSNLFFNOFKOLIDBECIQKNTXNVRBFDCRYCHTGHYCPZSIQZUISJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ALPYTEWVAVQRKFH");
    tmp_msg_0.predicate.assign("BGWIISLSQTUHWYSTQEN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GUDNTVHEFLZZUMVBAMVQERNDSPHAGSZWUFOWLOKMULLPJVSLBAQKUCYQANKXBWCYTAFLGSOIBNWHIMRIETPDKUGBPGFXCOZMZWALURPKXDSJYNYHZYOWXXYMHRTYFRWTCEOHJVIIXJMBBOWBPKSFQIDJFLMTZJBHDDSTDCPQZIAXAYNVOAPITCUCEWRHDQVOVWDJTGSYSKXKMRQEUOJNHYXKTJCVEBEGPRFVFGZRGNLUEQIXZQJRSACNEGPQMK");
    tmp_tmp_msg_0_0.attr_type = 50U;
    tmp_tmp_msg_0_0.min.assign("TKAUENBJQJYDFLYBYNEUEITUAGUVLOPLHKFZQIZQWJVMUZDZPZKHVHDCFXCUJSYEOYRILXHYQTBDDGIZOEKKVPGORZQIBNQCBTYORHURL");
    tmp_tmp_msg_0_0.max.assign("LRFKSYUTXICKADQGDOWZOXVQCJIBPUHENBNEUZVPFEEGDLIAJYHNEFGHYRPLHRFBVCO");
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
    msg.setTimeStamp(0.880792475102);
    msg.setSource(18291U);
    msg.setSourceEntity(49U);
    msg.setDestination(12308U);
    msg.setDestinationEntity(148U);
    msg.op = 20U;
    msg.goal_id.assign("BWSPAIHQGALTOSPLFZERPJFOEMWCNXFRODSGOLIEMSLUAXBVTYBOAJPIEBSQIHSWLTKGDMYUXMXPKARTQGNHOWHAAWLBFVMTNXJZJCDGNMQYPITVHCZGHKGFWVYWLJGTSE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NDDUNLGCLFIKAOJQEZAYQBAVYWUZSTLAXWQGUBMCWJOTYBRTMECQWREIULQPBXNVQXNKZCIRRTLBWQZSLADRZMJGALXXDIEYHROPYBJGTANYRQBODFMUWKDQSXTNZJEM");
    tmp_msg_0.predicate.assign("YCYQMOPZEGNHAURUITOJCMQBHDWOXWJIABLRIIQRCUT");
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
    msg.setTimeStamp(0.62654019382);
    msg.setSource(40272U);
    msg.setSourceEntity(215U);
    msg.setDestination(249U);
    msg.setDestinationEntity(243U);
    msg.op = 144U;
    msg.goal_id.assign("DOTIPYEZNMDCBHJLFNSBVPGWLHUIAXOYCKUWTRUYQCDSNBSLCNXGKEMUJVOXDJDKEXWMEWJZNBMYRMHSUTZURVEMQLXJKDWOVZICTOEIFAOAPFYRLJNQCQTKBPKOZDGRVRVBWHBECRRXWALCONQIPFUEQAIAFPRZMMJSSSALNHADQUPELZYUQWKXFATTRSCSHYJSFFAGDGGIKZXOI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OTCEBPIPNRCYVNFVJMWIFOJPTXNLMCCKGAJXFUBSHHGSJAAQSKXDBWNRGJTBOSBYAEXYXPWGQVYZXHJIMLMVLFPZPFHABUSQZJCVFKDMEIDRQZTZYURHDOGWJUNEHWEWOJSOI");
    tmp_msg_0.predicate.assign("QIMCSJIWCEEHSFHOUJXJEZZVQNOLZGCPNXBDRETCKYJRLGDMJACEUERQWIBXGTUJPVGLZGFRKVLNDMMYHYCFMWFNSBHERAQUNJVVPRSXITBQDWDOVHAORGNKYCSUJKVPSLVPQTRWJUYTOAITYRZSUSHHHDWFZEFUZKPQABAHDOO");
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
    msg.setTimeStamp(0.942753981336);
    msg.setSource(42675U);
    msg.setSourceEntity(195U);
    msg.setDestination(28424U);
    msg.setDestinationEntity(76U);
    msg.name.assign("TFCROBYMXBVBSJMKYTKLRVSNZGVVNWZXQRTSIRPKIUAQMWVDGXAEQNJOGWXYFHGYAYLNKTECPXHSEPFHTYVNNHCCDUUZXRYQUTPIDGBMQBNMCOAIEDHWKBDFILYGJGOMAOJPCJZPEEJWDTVLXERSIQLXZTAYKJHIOWTULAVYODCLAIJKHKNIMPEBUDEKZFFDQKXESOURPIUAMBCZ");
    msg.attr_type = 70U;
    msg.min.assign("UNNSMKCQLSTRTUEYECAVESIGRNXEUXNLTSTIFFWDHESVJRNGLRMZIOBSCBOBLRLGIJRQQHOYMLZFEXXJKVTQFDDITKTUVWLCGDPRXYKAZAQMVXN");
    msg.max.assign("NWXPFFKMSZCELGIRWJHEVATKHUOMKO");

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
    msg.setTimeStamp(0.144347939819);
    msg.setSource(1785U);
    msg.setSourceEntity(236U);
    msg.setDestination(54114U);
    msg.setDestinationEntity(187U);
    msg.name.assign("NUMZYANQZEKWLEBLDDMEGRLYWMQXVHAVSNGHIHDHYIAHHTNBMYLUMXCKGKTIKDPUOLHPJSOEGTCBSIYCRKVJPNQJPFBVLDLOIXURUACXGWWVTYFMQUZUXQXTFENNXSWUBGRCCEPWILFPIVFWRPRSADIUKTJBMEZRJYSHJBHOSMGSZXXRQSZZNQQKPKYCIWAVJOBRPGOVJCRBLATOOFTDIVWNJTXADQZFDYUFZEOKCSJZWNVDFEKAMGAGTEO");
    msg.attr_type = 97U;
    msg.min.assign("QXAVUAJDIECKXPMVFWSZFYJKULBUVNPPPAJLFDRSPEYVFBUTGWHIFJQKPGCHHHJAYHZCIGEWPJFEAZMBFWRKCQDNQQEJMRNLYZYWBJRHBLZZGNRZIOQ");
    msg.max.assign("WXHBXTPELKRQXFQNARWVHGSLUDSDORAWPCOVJDQILXYWVWPYKOJAQCOTMBMEPXPNBBPDTHVZWGMNKTLYSQEROFZIHXHQHZUDUQSRTARNHKIAMCUGDIKGEQOJRWUGOPFFFY");

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
    msg.setTimeStamp(0.916846677682);
    msg.setSource(58833U);
    msg.setSourceEntity(174U);
    msg.setDestination(20066U);
    msg.setDestinationEntity(12U);
    msg.name.assign("QQGCGLGZEUEMDNWVAMRRRMCJNQXJQJZGRFQESADWBRWMAKHLRLXPKUXXAQPIRBBCOPGVFMUJJCJWZBDATKNHTFUWKKSBKGEUPOYKXCXFSTHOMVWHACPUSKMIYSNYIIPBOCNTGTVPI");
    msg.attr_type = 152U;
    msg.min.assign("OSYYHRHGHNGVBKOGCEFAFJXTIFBJXRRWGKPQYILMFYYUTMIJDNHIORNFQDMDAZWCXESVBXDCZNBDNNIOTVJGYLHKKUPCTRPTJVUROOBEPHUEXQKTVJSAXZNJQOJROMAISAWKECHGMSCQMZMQMCICWGENZLRQZEOXVV");
    msg.max.assign("DVNFUPGPDAXXYSLATWRZZUVVLMPHCKNHJTLIXESXOZTQCXHHKAZPZMZWTOGUWZFEPCDGBDYSJWERWUCHSGGLFPVBJLNVDMRIJTUYXWIHYDPWUFQNKRQMNNUHCGBYCIJNHOTAXXVIFEOFYFYABYHPAQAIBOHELGSTIBR");

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
    msg.setTimeStamp(0.294749657482);
    msg.setSource(56237U);
    msg.setSourceEntity(222U);
    msg.setDestination(46742U);
    msg.setDestinationEntity(207U);
    msg.timeline.assign("XZLSJUAGHTESPNVNGAUNXHBRBHGZDCQKSPEQULPEUUOFVRNOZCBQMOXQTVISYDXWDSUIDXWYVCXMPJOIYFSGCFKQTIWGPRLSCTWCVCPPKVKJJOBIFBNXMQLGWAUAMFNTCDKYNKFBHATRQGJFJTZHIBFZVRTCKIJDYZUFXKLXYEDAZRY");
    msg.predicate.assign("CVECVYUSMGMYHQTZFNDTSSIKRHXDLAOOPHJWDWICYZYDFEPEMWIHPFHZOBOSPLQLOIJVGCXKTXJRCTUBRSF");

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
    msg.setTimeStamp(0.0756064893542);
    msg.setSource(36127U);
    msg.setSourceEntity(226U);
    msg.setDestination(58446U);
    msg.setDestinationEntity(156U);
    msg.timeline.assign("QSKGTAECQWCODFHYPHZMSGFOCKCPYATTMJBWEQIJVYBVGTNBTUAAIOMDPRQQBXXHLXYMXGHRAEJOCWOWXVRSFQPHOARZVEEOWYVKHNYHDKJBUEXKKNFBIRHRSTHYPLJMYKPKZSPFIMQAPVLGDFLBUTUCAOOUKNNINBDAJTFNSTUZLGXIDGPREC");
    msg.predicate.assign("SJBAGJDNIRELFFLFBEFWQQNYDQEMYOTYFYGZUEOUFKE");

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
    msg.setTimeStamp(0.553929383893);
    msg.setSource(10579U);
    msg.setSourceEntity(9U);
    msg.setDestination(16354U);
    msg.setDestinationEntity(0U);
    msg.timeline.assign("PGIOGERFQBTOHTOYIHPIZBKXTXVWITDSRRC");
    msg.predicate.assign("AXWIQUDGLQHNGVZUZYRIWFKDRLISLBHATMMWZKESIZFKWXYCAHJFAZHNSSFCFSUCOPXHNPQHBUZLJQXNMEGZTHIEGAITQQPHFUGSYLGQYTXBDXAOUDZWBSTOTRVBBWJVBPLJNCDKFORJMLLTEGCBAEKBLVKURGMAYPFLKRKCVHXPPENQTIOMRXYBGYOXOREWMWS");

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
    msg.setTimeStamp(0.148384970297);
    msg.setSource(54098U);
    msg.setSourceEntity(89U);
    msg.setDestination(13358U);
    msg.setDestinationEntity(36U);
    msg.reactor.assign("HJCPQJGBSKRNQJZATVBHQZCQHBCQMMVGDOAGCXWZYVJDKYTPBGURRECPMWRPTSWQCWCDRZIZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QOBDYUYGVVNWLPSYZWBDECBPAKSTPSSBABPCQJUOWKGWCRJNKQTEOGELTSVLRNKYLJBUJXWGHUXCKRVEHRTMZHMYFUTQCZVEIONWXMMPCXQKARTQUQFAFNCYOSIDJLVDYZFVAHJGDEBJHHRMG");
    tmp_msg_0.predicate.assign("ZKFEVOFYKEBDAILIDWKQFMNIAGKGNQHLBTWOJXWQBVOPUUJPZVHYGUNSBVEBLUSGKRZQPTWUBORNDISXYTSSFERTLYFQEHSXEAOICNAPSDBFABWDSQXPTLGAOKWPXWCFMHSBIHXRGFYAEUYDQKPKXANVHYVSVLZZWMGXMJRGQHXYFHMIRHAEXQUNDDRNVITKZCMMREJOUCERJTTGLCCLNVDVZDLACCUZTKOLBT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DATVXTFWOQUIREFCPYYSPXSKLHEVETVPMFFBQADOADFSBMKPQSILNVQHGWBUCOXHHGRSPYJJMZKNGSAQPCNMGBRYUQCZGKJKYNBXOLYTQXTDIZRWGNUZFWUEBUYIALLXMFDFHLRMGIVHADZCST");
    tmp_tmp_msg_0_0.attr_type = 249U;
    tmp_tmp_msg_0_0.min.assign("AITNNZSFLXPFOXMRZZPNADSICSUQLGOKOCXJIEOZDRZIHMQQDXVRBVTGRRQQBWCNPJACHQNFSVRJVYNRURTZAYXAJTIMHEUUJSNXMDVQFZYTBHJIZMGUFWLHWADZLYKHKDABVNEOXVLBGPDDWFGLXLQKEMVOCYUUEYTEIHBPNYMHQTPJIYFBKFSKHMMOWFKSWYI");
    tmp_tmp_msg_0_0.max.assign("APIUPSDRVJBFROEJUJPDFEVVPNGIQZKOXCSHDBKLTDUAXGCLWTYUDERSQCEEWTSKRWHAVLYLIFARMMGWDCBMMPCWMNRITPGFGGSCAJETWOUHDZJKHZGXHISVMBZGQWZWIZWBETSOAFZMVBFZACVLTXUAFLINHIBRFQOQOKWXQQNACITVTYJBHRSLYUNHNFYPJCQHDBOEJDKQPRPOMMSXU");
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
    msg.setTimeStamp(0.378568704832);
    msg.setSource(63431U);
    msg.setSourceEntity(57U);
    msg.setDestination(14550U);
    msg.setDestinationEntity(157U);
    msg.reactor.assign("DRGFHCLNQTWTYUBPKDUHZXEFMQPFPSDRFUBWSWEMAANNZPLKRGHADSJTRWJPLNULYRLRFKKGWYQHJBLUGHJTORJQPOIXCENYIASPNCUCTVXNBRDEXQZALSYXCOIIQVGLVANQJGGCQBJAZEXZYGMRHIKDLDFEKFMOAQAMBOZFMUVYIXZEVVRWMKHSWHFBUTFITVCNYMWAVSBZUKQSPEICUDHZJDOOKXCOOGPXOWB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YTSERZLVNJQTVDVSQHPYGTCOXHWFBBJWOYZKKXKTRHGCZHBDRXPTGYYIJFPFUEECAZEJPWACTUSARNLIVNXHLGMLDLDZEJYPVJHCRVEIQYJGGKRQMDQGVQEYDGJFASBNPNKDSAQMFTSOHTAEJIQZ");
    tmp_msg_0.predicate.assign("DICHPPINUZTXDQFQXJIBKNOHHUCCMJLVRCJGANUHBAXZPBZRXZQMPVKALWUVIMQINWYVPGZPNJMEVFMUIZDLXVYEKQZFSVHOYEKYBPAFPDXXJDSSJRKYXQSIJGPTAYIFMTEYCAOBMGYGCZGCKEWJOVFCDJWYUFODYZLUNNLHJHTREVAWHFKBWQLUQFADMRDSFUBUBOEQSWGRDLOLZKISATRWBCLSWGHTNTMSKNIVSBRKAGOXE");
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
    msg.setTimeStamp(0.100898750233);
    msg.setSource(2106U);
    msg.setSourceEntity(88U);
    msg.setDestination(18375U);
    msg.setDestinationEntity(35U);
    msg.reactor.assign("CPMXZUVBPVLFQDZUQLNRPBJGGSXSMGMNHXDDSSAKLEYNQEUFIQRLWKORPYBPUR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RXMTZYWMESXFJUIOCLRCPBAERLUIEYBDULQSIUSEHFDGASCHCFHJNYRIKYCGGXBASHJZIXVRUOCBFHYQYQVKUIVLPLOFNVSDWZPHWTTCGQFQOAQXIHWEEPPGJRNM");
    tmp_msg_0.predicate.assign("YMONPWVXPLWRGKNRLUVEGEVSSQDHGRSQLTWSMBXGUIWVMOYKHTCJHOEFPZDOZXVAB");
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
    msg.setTimeStamp(0.30472430914);
    msg.setSource(21892U);
    msg.setSourceEntity(25U);
    msg.setDestination(35046U);
    msg.setDestinationEntity(167U);
    msg.topic.assign("LTYEVOAAWUKZPNIPRZABTSFLMJZIMPDCPIKMXHIJSXYWLGTHRUVQUBQFGJPUDFCEMJVFJEVKBDFGCHMZETJYRPIEWQYQVFDRLNKRATARX");
    msg.data.assign("XTVPZDHSIGMBYBANSNQYJLCYQAVCVORWETMXOSRNBEJGURYFMUOOHDHHUXHIQIWTUNGKLVBLAWRCZMDPEMVYOFSKEJDPETKCKL");

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
    msg.setTimeStamp(0.448251817332);
    msg.setSource(14967U);
    msg.setSourceEntity(136U);
    msg.setDestination(35191U);
    msg.setDestinationEntity(118U);
    msg.topic.assign("BMJBXIXENCJRKLSUNIRLGYAXWJOYZATPFPKGTAWLTLEZSHVGLRUIBQPGHQNPJGVWOBNWCYYKFZRDQCEXDUGMSYMRSINXIOVWHMKMXKRTRUSQLDQABJHDFEUWTYXVGOYAHEFWWXLCEABMAZGKVGQADLPESSHYFNINBEINKISVMQODDODGHFOUNJLT");
    msg.data.assign("UFSLAQYDZBDCLFAVEIKUDSZTRPHBJHAKXVSRVJW");

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
    msg.setTimeStamp(0.197144017324);
    msg.setSource(24840U);
    msg.setSourceEntity(170U);
    msg.setDestination(53267U);
    msg.setDestinationEntity(55U);
    msg.topic.assign("HKNXKSDOYAEIYSKPGUOFJFVZNXVOTLDJPALFBPKQWMRMMSFHRCANZQYTYLRPQZFRETVAYWPDQNSWYWSCBURBEKQBXEPMILCMXOJJE");
    msg.data.assign("JXXKXUKVADCUQIDFXCQTGPCIIFMBNVUSJYWUR");

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
    msg.setTimeStamp(0.23642481672);
    msg.setSource(22308U);
    msg.setSourceEntity(105U);
    msg.setDestination(51007U);
    msg.setDestinationEntity(236U);
    msg.frameid = 188U;
    const char tmp_msg_0[] = {-52, 99, 60, 60, -75, -57, -22, 61, -118, 40, -35, 55, 126, 45, 34, -30, 19, -97, 109, -65, -39, -15, -46, 63, 18, -59, 117, 27, -34, 81, 42, 89, 103, -95, -50, 4, 69, -77, -86, 13, -63, -18, -3, -71, 73, 94, -34, -11, -31, -18, -108, 18, -36, 111, -125, -69, 85, -44, -90, -109, -66, 82, 80, 72, -128, 81, 29, 71};
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
    msg.setTimeStamp(0.174876466592);
    msg.setSource(16079U);
    msg.setSourceEntity(49U);
    msg.setDestination(23067U);
    msg.setDestinationEntity(150U);
    msg.frameid = 116U;
    const char tmp_msg_0[] = {-1, -51, -44, 8, 53, -121, 23, 98, 73, 8, -24, 11, -22, -76, -66, -88, -34, 5, 58, -22, -118, -18, -124, 104, 36, 68, 46, 67, -90, -126, 44, -82, -113, 86, -121, 22, 101, 88, 16, -99, 48, 90, 96, 24, 53, -59, -116, -1, 114, -46, 42, 46, 33, 74, -32, -107, 1, 104, -59, -73, 103, 22, -72, 108, 27, 14, -53, -57, -108, 99, 124, 46, -63, 117, 66, -67, 66, -52, 120, 116, -24, 74, 38, -23, -33, 116, -106, -4, 22, 37, 108, 69, 109, 90, 76, 30, 8, -125, 61, -99, 5, 122, 49, 92, -97, 35, 61, -102, -33, 9, 108, -84, 19, -89, -120, 65, 70, 25, -94, -28, -17, -77, -110, -68, -120, 106, -17, -80, 95, 69, -14, -76, 117, -102, 116, -63, -56, 46, 80, -3, 25, -80, 64, 42, 28, -70, -88, 54, -86, -117, 79, -59, -59, 64, 33, -17, -3, 100, 115, -9, 77, -102, 74, 32, -108, -85, 120, -108, 23, -82, -46, 45, 34, -43, 117, -92, 89, 10, 5, 104, -57, 93, 98, 119, 10, 64, 93, 43, 41, 119, 116, -91, 24, -9, -46, -78, 44, -45, 44, -112, 95, -53, 124, 54, -47, 18, 32, 96, 23, -71, 56, 53, -38, 122, 64, 6, -23, -1, 110, 65};
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
    msg.setTimeStamp(0.829801858075);
    msg.setSource(45088U);
    msg.setSourceEntity(253U);
    msg.setDestination(34348U);
    msg.setDestinationEntity(205U);
    msg.frameid = 163U;
    const char tmp_msg_0[] = {-95, 116, 125, -13, 41, 85, -13, -57, 44, 101, 70, 81, -78, 67, 67, 32, 123, -121, 66, -48, -20, -77, -99, -119, -102, 126, -12, -47, 75, 36, -118, 8, -58, 91, -115, 54, -85, 38, -90, -79, -69, 18, 99, 118, -90, 89, 90, -65, -21, -111, 123, -116, -102, 8, -116, 88, 37, 106, -67, -111, -18, 63};
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
    msg.setTimeStamp(0.220560645168);
    msg.setSource(54417U);
    msg.setSourceEntity(244U);
    msg.setDestination(31511U);
    msg.setDestinationEntity(145U);
    msg.fps = 13U;
    msg.quality = 172U;
    msg.reps = 109U;
    msg.tsize = 5U;

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
    msg.setTimeStamp(0.487981938274);
    msg.setSource(62202U);
    msg.setSourceEntity(115U);
    msg.setDestination(63192U);
    msg.setDestinationEntity(252U);
    msg.fps = 233U;
    msg.quality = 158U;
    msg.reps = 10U;
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
    msg.setTimeStamp(0.853200509816);
    msg.setSource(44015U);
    msg.setSourceEntity(10U);
    msg.setDestination(16547U);
    msg.setDestinationEntity(67U);
    msg.fps = 242U;
    msg.quality = 230U;
    msg.reps = 64U;
    msg.tsize = 26U;

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
    msg.setTimeStamp(0.134178619968);
    msg.setSource(48290U);
    msg.setSourceEntity(93U);
    msg.setDestination(18604U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.968563951361;
    msg.lon = 0.492859870601;
    msg.depth = 90U;
    msg.speed = 0.42620696981;
    msg.psi = 0.108666088602;

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
    msg.setTimeStamp(0.733160818843);
    msg.setSource(40094U);
    msg.setSourceEntity(65U);
    msg.setDestination(25990U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.682875321746;
    msg.lon = 0.856675482184;
    msg.depth = 138U;
    msg.speed = 0.658466907529;
    msg.psi = 0.129929908589;

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
    msg.setTimeStamp(0.628290081488);
    msg.setSource(26435U);
    msg.setSourceEntity(72U);
    msg.setDestination(17108U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.771021787071;
    msg.lon = 0.81403981064;
    msg.depth = 156U;
    msg.speed = 0.617184192183;
    msg.psi = 0.0581902063587;

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
    msg.setTimeStamp(0.0476084206211);
    msg.setSource(47245U);
    msg.setSourceEntity(56U);
    msg.setDestination(15895U);
    msg.setDestinationEntity(147U);
    msg.label.assign("ZYASYSFJWZUCPDDBZFHPUSMGGGBUFPTNJPWPLOWPRAIHFPVJXOQLYBVVGIZXJZSRMBTWHIEQYWKUQLQUVXRMCCHYMITXFKEEDOCEGEWVXTRPIICUNQLHXTDCZEZTBQFGFMXOAPXSIQNYAEROFKTZXDWVIDJBVHCGYRDYEBKFRBABAJWLLFMKVCOPJOAOSDUQXMTDANMABJSNVGSKNWUEHRTWERCLHOKHLYKJRVSLIUGDSIQNHLGK");
    msg.lat = 0.515192780458;
    msg.lon = 0.588486434697;
    msg.z = 0.3752887401;
    msg.z_units = 214U;
    msg.cog = 0.821805563338;
    msg.sog = 0.871829352731;

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
    msg.setTimeStamp(0.745896548339);
    msg.setSource(56511U);
    msg.setSourceEntity(124U);
    msg.setDestination(34027U);
    msg.setDestinationEntity(131U);
    msg.label.assign("UUHKMAQETGFGSDBUXWWSLRZNQFOZYXHVQYLNKUVDICOWSWIIEPYOJTPZHYJXRPKECTJCDWTDZGITOIVSMEUGPJLPEAGJZQSFXYPFECQGYDHRCOMKRTVAUKNFMBLXUVLLQQBTNDBYQCVSOTWGXVDFE");
    msg.lat = 0.674646442696;
    msg.lon = 0.306099744526;
    msg.z = 0.860835223363;
    msg.z_units = 240U;
    msg.cog = 0.439938974927;
    msg.sog = 0.407104027469;

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
    msg.setTimeStamp(0.00645636718518);
    msg.setSource(34329U);
    msg.setSourceEntity(197U);
    msg.setDestination(8971U);
    msg.setDestinationEntity(52U);
    msg.label.assign("VVODXLILGAJCPRTVQGPOHWYHWIEZWZYCPODBZWETOMUARCQOPBOMSXIAWIRGKOQFPYNXXUKNHBIWSIQVPEZSFMJGYYPXLTLAKEASC");
    msg.lat = 0.682785374593;
    msg.lon = 0.165262047059;
    msg.z = 0.207570105023;
    msg.z_units = 186U;
    msg.cog = 0.903054444978;
    msg.sog = 0.598331744221;

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
    msg.setTimeStamp(0.101967929292);
    msg.setSource(24404U);
    msg.setSourceEntity(133U);
    msg.setDestination(40456U);
    msg.setDestinationEntity(139U);
    msg.name.assign("HAHKFQSDWBFVCWHXYNHSAFQMIIJXMZYREWRRUNWZJQVDKUFOKHNOSZRGATVMRXCMNTPUZHCYQYEPVQBIQYIWMXGSEBLBWKOBPHGGKVXGTEUXIJAYVNOLTEJCSVTMFDVFLWTQBAUKSXQYLBBEJBOLUYQNSCSHRRHBJDUWRVAGNSHKKKLPCFNVMWCZZMPKEPJDO");
    msg.value.assign("IHJRORIDRPPXAZMJUMISVZYSMFHFLJGFEQFSQQVNYSPTEP");

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
    msg.setTimeStamp(0.768317435122);
    msg.setSource(46931U);
    msg.setSourceEntity(5U);
    msg.setDestination(55281U);
    msg.setDestinationEntity(129U);
    msg.name.assign("MCENMLYEWXHHRXXZDRPZBFFEATCONCRFFOYOIQASANXOILKZBRDHXEKMIWQZMAXVQKNOLVFZPEJNIYUDJLGCCSQDXHZBGNJGUSLZRRZUVJQCDVPRXIVBFQKCPDH");
    msg.value.assign("CUDLNQSTLXTOJJNMVGHCZKMUMXFYZNCKXWHFCUPQMQFOAFFPOYEPXAOJVNVJUPTMUURDGKJGAWQVIHYLMVDSGLBONOEONOBFCFTPENJWRUSXHIUUYKTQLVWAKLICALEWRBWIBHOYVROCEQFDBRIPBNWTZAKIJBGQNGZHGRVWMQTSJRTMYDZBYACDITDBSXSESUYDHSI");

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
    msg.setTimeStamp(0.491164797059);
    msg.setSource(32437U);
    msg.setSourceEntity(159U);
    msg.setDestination(38257U);
    msg.setDestinationEntity(165U);
    msg.name.assign("XXHQINDDLKNYZXPZVOHGGJQCTQRCNLWNKOYCHSUEESJTBWQWCNUVMIWPNHYVRSUQMJMKMLVJPIDPMABGPAAIRDNPWYLFUDAEBBMCDSGRYAIGRDXVQBOPKCXQZPKTMLSJWDOIUUNTFVMITSKVHEYKLZIHEFCROTUUSFSTYZEHFJARNOTMCSLKGNUBBKEVFVZEOAQAXFRGVGZDBJEQHKFIWBWPIJFWYPQBJ");
    msg.value.assign("XCGSUYNNSYKWRMBGPQWPSPZPIAVEACJELZQADCHCOGFOVOIIEQQIUFTWEQDXTKNZGJMUFKBBTCJKCAVIMQZXOMZMULSZDKCJFWLOEYYLLALVUTOKMCNUMHWUJFRPGTXGWCSRBASDDLHYMTVDHVTTQX");

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
    msg.setTimeStamp(0.912869540661);
    msg.setSource(11917U);
    msg.setSourceEntity(144U);
    msg.setDestination(35545U);
    msg.setDestinationEntity(158U);
    msg.name.assign("OWMKYAXXAXLJNUUNKHFAMUYHVOQXPXKPMFYTWHUNLJRSBVDDQCCFBEINDISBVHGENFMARDBTCEKOWEMLZZXGVMFHTILWVSIPRLJRXVNMTJCETZSWORQPKCWGYBYTDUYOJQIVEKWHYN");

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
    msg.setTimeStamp(0.724169568423);
    msg.setSource(12734U);
    msg.setSourceEntity(234U);
    msg.setDestination(65241U);
    msg.setDestinationEntity(25U);
    msg.name.assign("CMFSWJFATCNIBAKXDPTVSMGQLGBZCUMOHTYFYPPROTFALSWQUXLWDWLFDDHOCISNEVOGIUJMAFVHBJIKHYROUXEDTNHILRHCWEUMWEBRZMUSGDVNYQZMFRKHIHWJXMJEYOKSYXEKZBYPVBPFXJCTYDL");

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
    msg.setTimeStamp(0.278190170228);
    msg.setSource(31828U);
    msg.setSourceEntity(54U);
    msg.setDestination(2768U);
    msg.setDestinationEntity(163U);
    msg.name.assign("AOWBCVCMQRVFLTLBNGVEZJYTOSDOYFAXSPJMCGGKFHLBWQWT");

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
    msg.setTimeStamp(0.345635108533);
    msg.setSource(17297U);
    msg.setSourceEntity(21U);
    msg.setDestination(26431U);
    msg.setDestinationEntity(174U);
    msg.name.assign("EWQFRQAADDRCHSWLOEFDHYWDE");
    msg.visibility.assign("JHKEMUGLEIDRRXCDVLDADAROXFWDSVUHBGMFOSTUFPQTOIPQTQMQLNOWYVFXQAVZEUNGTPLYIPEPKGTYZAOURVICWUQANNZPRKOLUGYVHEFGNAZOJOTCNKXCWFESTNSHQHFRRPWSDTKJFLZMFZUBMJZYHVJBZNHIWWKBSAMWDISYNJJSXULXBRJEGXQZEWIZXKGAQTCBKX");
    msg.scope.assign("WWOTZIHHLCIBDSTKKRWAYFKPKZDJBQYCTRFJJKEHOLUZYRUAMKHIPVTOJJNVIGZDEPSWPDQWBVBQJXACIHXWRAGMAJTGFNAVAVFYH");

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
    msg.setTimeStamp(0.0646044273634);
    msg.setSource(8369U);
    msg.setSourceEntity(19U);
    msg.setDestination(46168U);
    msg.setDestinationEntity(37U);
    msg.name.assign("XSGYNXIRWTZMBNAFWMUXADLWYVRSSYUFFTBOXPJSVTQYZEJTZVNCNRUDCGFCZHLPSROMFTQVRPFSFCNILANTJFWLGHHVHXGAUOBCIJHADPMAIIVZEKAEPOQBGOWQGSIXUFILBPVKMBYQJJOUHOYHZKPTENWJQJOMGZDEQKXMYAAZLD");
    msg.visibility.assign("TVABDJUEWCYRYNTNXGPSYCLQINBXSZRGOYPAJZJXWJAHNVAVQRQPRLTOEVRWCSYNMUSEGFAIBVFQKUFEZKRNHLTMETKVBCHPPWIBAKVMLCMNKSLXBZSHCJFDQPRKICIFTGILKOBOBLNQCDMQLYCDGWLNHOPDMDWNKHEQAUQMDXAMGYZLXYTGOBOFOUFUEOXSHUP");
    msg.scope.assign("CDNKUWSUGPTSPMJCQXTNUXNXRSWKLE");

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
    msg.setTimeStamp(0.293995298576);
    msg.setSource(61645U);
    msg.setSourceEntity(5U);
    msg.setDestination(58279U);
    msg.setDestinationEntity(129U);
    msg.name.assign("TSGBTBCPQVZBSYAFHGQEOUDIAHLHMWNRKHGFNUMAPLLEITZBNVKFRWWAXLZOWNBYWPESZSCXUIIGXLBPV");
    msg.visibility.assign("FUUFIKFVVXARNYGPDNIDXVTCBGELLWDQMTIQUQSZXPBVWPMKSYTQQGYOQSBHVSIVPKKDUZFSEQSLFLVTLWAZEELEMOVYCSDOFKHOTJYDWRMCLQATNRZEUTZRYBGUHOCZAXIJRAMHEMJPSJXRGPKJOIAJIXJLHBCTDZYLGAPIOOHJHENSNAENFUTTHGCU");
    msg.scope.assign("QQVDQTFDGAIGUMNOTQWKHAWSHWBLYNBMOWBVU");

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
    msg.setTimeStamp(0.525579337858);
    msg.setSource(50758U);
    msg.setSourceEntity(109U);
    msg.setDestination(35796U);
    msg.setDestinationEntity(251U);
    msg.name.assign("FDJGUYSOEWWLMIRYSYURIVDMCHGPFGXBFADEV");

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
    msg.setTimeStamp(0.0636504792074);
    msg.setSource(19116U);
    msg.setSourceEntity(51U);
    msg.setDestination(49753U);
    msg.setDestinationEntity(49U);
    msg.name.assign("OIERBMINZZYJREMPYCYQLCKMMQBTTIJSXWWUYTHPEAZTBUUNVKUSOQQGSHYNVUPRWGNJYDSTRELMXOAGLXDSZBKBKSPUKRGVDFCRNTLNECWGLOALNZUEJMIEXZAZNKSMOQPHPLFWKPFJFDOGWLBQPXVSHGTOWYIZNUYABVDWAEBHHJXVOISGCFOZUAHIDHEWPJVDMRGVKCLCTCMZPRWEUDGFQKIQXOBXDHARNBTQXFJKVRQFMHV");

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
    msg.setTimeStamp(0.477833339852);
    msg.setSource(6132U);
    msg.setSourceEntity(28U);
    msg.setDestination(55896U);
    msg.setDestinationEntity(46U);
    msg.name.assign("UCDAYADXITROWPLZHUCFGEXIARIEDPBYYFCBCJLFERDGNJFTJAZMTPVRZONKDHGGPYCJQSSYAKKHMMGVIDTWXWRBKQOZYOJAHZNNPCNLERSJRPIPEJHXJIUDETYWLBOFCUAHGMDOLHSBKTVFVBGZBIXXJFEDUGMXMOQVRPWVTNMNSOSMWWTBLZSIKQGKUTBXEVNEQVF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HTSKWJNHRTXGFBFSTDKNXKCPFZESOFEQRUILFMCYAZGHHAPWLBWOVQIMWNUSVSZKWTAPDSTXKKAGIPSEJQAUKUHLFZMYJTBJPWHREZUMEYBCZOUHCWDODWSPFKYJCAYPILOBXODORVVJPREQLACJZNKXNGDVIQOURGRPZAGMXICWSDCTRLWNDJQTC");
    tmp_msg_0.value.assign("YOOQEJDYQTXYKFIHJVBOHGGISCJJUBHVHVAJCGMNEEJACEXAKQBUFQOJHPDAIUTOTZSEEPMDWMRLSISWHIUYYQLGJOTERMCIDDPLLPXSWVLNGJIYCADVNYUDTHXXSZO");
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
    msg.setTimeStamp(0.964118971967);
    msg.setSource(26131U);
    msg.setSourceEntity(161U);
    msg.setDestination(3760U);
    msg.setDestinationEntity(26U);
    msg.name.assign("WZZHYWRWFHXCNOYEFHNJIBURXNDDWJEPZIPLMPZUNVUUOTXNOLDVGXBQSWKKSUYGFCUIBFVVRCHZQEWMMHMJBTRDNSGHAGFVXODYYNAASXMGILXHMOEMAAIDIVBICDJTCRBLPBBUYATYLVVSFOEORQTPSPJJLOQCZKT");

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
    msg.setTimeStamp(0.973116939382);
    msg.setSource(38518U);
    msg.setSourceEntity(239U);
    msg.setDestination(47781U);
    msg.setDestinationEntity(37U);
    msg.name.assign("FYFNXDTOGWVDRMKUGCCSTPBCDJDAMYCKQVETGKE");

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
    msg.setTimeStamp(0.31598566924);
    msg.setSource(38623U);
    msg.setSourceEntity(204U);
    msg.setDestination(14938U);
    msg.setDestinationEntity(174U);
    msg.name.assign("NHLUDZNRTOKNUMJLQFFSUKHNNDUPJZWEDWYYEFGKLAHSNGVBWLBXMOVKZPRBXEOXQPQDZEAPFZHMDSRAJLFJFSGSUQVYJEMQEGHKVLDQWSXOFGXCSIIWZHEPXBCXHKTBIGTTSIWNJFCCDOTPDKCWPEURAJRZJRDY");

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
    msg.setTimeStamp(0.119207100265);
    msg.setSource(31187U);
    msg.setSourceEntity(64U);
    msg.setDestination(6050U);
    msg.setDestinationEntity(38U);
    msg.timeout = 3210488990U;

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
    msg.setTimeStamp(0.202388378508);
    msg.setSource(6066U);
    msg.setSourceEntity(219U);
    msg.setDestination(19171U);
    msg.setDestinationEntity(219U);
    msg.timeout = 1288917265U;

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
    msg.setTimeStamp(0.804374919913);
    msg.setSource(63771U);
    msg.setSourceEntity(239U);
    msg.setDestination(47400U);
    msg.setDestinationEntity(21U);
    msg.timeout = 1911581191U;

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
    msg.setTimeStamp(0.751225216485);
    msg.setSource(32916U);
    msg.setSourceEntity(29U);
    msg.setDestination(11100U);
    msg.setDestinationEntity(39U);
    msg.sessid = 293785504U;

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
    msg.setTimeStamp(0.159603587883);
    msg.setSource(44600U);
    msg.setSourceEntity(167U);
    msg.setDestination(25529U);
    msg.setDestinationEntity(57U);
    msg.sessid = 1775019575U;

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
    msg.setTimeStamp(0.782323864686);
    msg.setSource(15855U);
    msg.setSourceEntity(43U);
    msg.setDestination(25270U);
    msg.setDestinationEntity(5U);
    msg.sessid = 3601849177U;

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
    msg.setTimeStamp(0.330201218576);
    msg.setSource(26292U);
    msg.setSourceEntity(21U);
    msg.setDestination(55183U);
    msg.setDestinationEntity(13U);
    msg.sessid = 1399704764U;
    msg.messages.assign("IDJHJQEHAQRUAFMRSKSHXABIBBTDWIVXMUZUORRFSTNALZECWQQUVTKJABHIOELEICUKPQIYXTIMPDYMGYJLCLZDJPGSFRFZCZZGCCA");

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
    msg.setTimeStamp(0.231730384065);
    msg.setSource(50406U);
    msg.setSourceEntity(110U);
    msg.setDestination(52420U);
    msg.setDestinationEntity(143U);
    msg.sessid = 2992999805U;
    msg.messages.assign("NJYJIXHZIGWUDXYLOLXXAZIDXLHAUKDWEEPFFRYOPEZEUOUNAPPTWBKDSKQKRIFGTNGKJLKBOUBNLAVBOYNIQFPBXMPYHTSRJXAMMBKJDZVAHHYQRZRTOUCARHWXVSHMTGESUGNGPVUJSJPCTQMODNUKBVTWTDAQIFRQFSI");

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
    msg.setTimeStamp(0.871628332332);
    msg.setSource(22744U);
    msg.setSourceEntity(22U);
    msg.setDestination(1090U);
    msg.setDestinationEntity(157U);
    msg.sessid = 1572654387U;
    msg.messages.assign("IYDBXTRMAUZYNTBNBCIDCEWNMKOHCLUFTXPZOYAGQLBQVISZXFHNFKVUPHYQIUZETYSWJGRFKZLULZAUWHTEVPWOSQSGOGWIBTWCAPKIRREMJILRDGEKMVMEFTSJDXUEWJGYNG");

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
    msg.setTimeStamp(0.744291336028);
    msg.setSource(15608U);
    msg.setSourceEntity(70U);
    msg.setDestination(55091U);
    msg.setDestinationEntity(149U);
    msg.sessid = 1017312355U;

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
    msg.setTimeStamp(0.246087215852);
    msg.setSource(9505U);
    msg.setSourceEntity(103U);
    msg.setDestination(44801U);
    msg.setDestinationEntity(27U);
    msg.sessid = 2815455786U;

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
    msg.setTimeStamp(0.491683976315);
    msg.setSource(30352U);
    msg.setSourceEntity(173U);
    msg.setDestination(28144U);
    msg.setDestinationEntity(136U);
    msg.sessid = 4153298848U;

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
    msg.setTimeStamp(0.170509876317);
    msg.setSource(5377U);
    msg.setSourceEntity(204U);
    msg.setDestination(4334U);
    msg.setDestinationEntity(7U);
    msg.sessid = 215283128U;
    msg.status = 117U;

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
    msg.setTimeStamp(0.838215853005);
    msg.setSource(6251U);
    msg.setSourceEntity(251U);
    msg.setDestination(25788U);
    msg.setDestinationEntity(130U);
    msg.sessid = 3781162548U;
    msg.status = 55U;

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
    msg.setTimeStamp(0.208507649784);
    msg.setSource(37407U);
    msg.setSourceEntity(15U);
    msg.setDestination(43272U);
    msg.setDestinationEntity(12U);
    msg.sessid = 1647374620U;
    msg.status = 49U;

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
    msg.setTimeStamp(0.467012588791);
    msg.setSource(9924U);
    msg.setSourceEntity(20U);
    msg.setDestination(58888U);
    msg.setDestinationEntity(58U);
    msg.name.assign("PJVRDGSURWGYMYQKKWXWSCYAUZYNHDOMGMELPTSSHXQWAQZHRIRKXGOLLFAFEEZVQNNENOOWXNKQTDTSMCJRFQZBDAWWPLAATRMVFFPTEJALFRXBJNGOCWEOYUJQGIGGVJDTPRKDNFIAKZIUFWYUCFZYRNMYBOKQIIMVKUHEQRBZTHWDKGHXVMZDOCMK");

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
    msg.setTimeStamp(0.258750168528);
    msg.setSource(59184U);
    msg.setSourceEntity(231U);
    msg.setDestination(28915U);
    msg.setDestinationEntity(17U);
    msg.name.assign("JCYTEQILIMBJGSMEAUAWHLBPOZETUDVYPJRAVZOFODCMKPXZPBGRSUMXLIHZEPKVCFGQIRNPPUGJHFETELQIJGXSLBKCTTWYWRJOROIQFVDYPEUMHNDYIYKMWRCWUKHTEGIZUSOVQSXZNNZWVVAWAGWXFJCXYLKAMNNCFSRJCQDBYVNTYCAOTFFHFNGKQDLXHA");

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
    msg.setTimeStamp(0.344918863234);
    msg.setSource(30706U);
    msg.setSourceEntity(180U);
    msg.setDestination(54797U);
    msg.setDestinationEntity(19U);
    msg.name.assign("EEDTYMSMJEXMSLOKXHAFHXFZUJGZYFOWVLKFZEZLLDTVGEJCOEGTBVBGZGRQJBJSRLNPRPYPIRWFIBCPKYTQTNTZCMOKWNQBBHBARPTLTAEQJFXVUJ");

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
    msg.setTimeStamp(0.695519780182);
    msg.setSource(39505U);
    msg.setSourceEntity(152U);
    msg.setDestination(3868U);
    msg.setDestinationEntity(8U);
    msg.name.assign("QCWPIVYFDGNPIBAHNZFHXREDCOOJMMESALZLEEQCDRPWTLPJFYZWOIHHKMLWKVBFEMGDJTPWHWKFQXDQEJJ");

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
    msg.setTimeStamp(0.441394403326);
    msg.setSource(14270U);
    msg.setSourceEntity(171U);
    msg.setDestination(21378U);
    msg.setDestinationEntity(82U);
    msg.name.assign("JJMELLFHHPICHWAHYQYKVRDNFIDOTJGCKQRIRGPPJQNMFLOOXHIZZNEZOQOXKRHXXZOWIPEDJKAWXBUCWQGTGTVMTMJPDOCIUXPSKZRETVFGNYLBDWYSSSZRSFFBJAOUIEYPWSXRNYCEECPUDFMMDABWIVAAAVCKHGFTSX");

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
    msg.setTimeStamp(0.772008103304);
    msg.setSource(7369U);
    msg.setSourceEntity(201U);
    msg.setDestination(17440U);
    msg.setDestinationEntity(173U);
    msg.name.assign("QONRFKJHRVHJRUGUVWUQNCMPBMPEWO");

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
    msg.setTimeStamp(0.119794783475);
    msg.setSource(31880U);
    msg.setSourceEntity(178U);
    msg.setDestination(42154U);
    msg.setDestinationEntity(144U);
    msg.type = 71U;
    msg.error.assign("JQPTIUGDSNFCXAJQPRYEKDXEWYKSMLVULMPAJHKQUXULCCFVNEBSLTGCRLQGEOSVJZVZBNYXWJADSTTYZMXGODOWFDGPMNKLHLVEEMJGVSKDGEITIRPRVOHJGNFYKEAZHUHDCYFTQXHLCORVJITSDJWOHSHUFFHOOKQAYCSILXIRMFBRZZ");

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
    msg.setTimeStamp(0.4812222548);
    msg.setSource(14358U);
    msg.setSourceEntity(104U);
    msg.setDestination(42190U);
    msg.setDestinationEntity(154U);
    msg.type = 213U;
    msg.error.assign("YOELSZZLPFUEVHANMBQGALBPWRZFMEVVDYAMGTHDBOKGKIHZDRMKIZIPFQYXMBSYPPXWLAPUBIZXQHAETUVBRMQOBJUHEJHRRWASJDPZJUOXJWCRTBXRNQOIOKUYJYPCWQGDRLVIKEWOBKMSMT");

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
    msg.setTimeStamp(0.736320163108);
    msg.setSource(51477U);
    msg.setSourceEntity(180U);
    msg.setDestination(53762U);
    msg.setDestinationEntity(201U);
    msg.type = 68U;
    msg.error.assign("KLNQOHBBATGTUMAOWFIKMBYZDXHOAXVCNMZEQMCWQDYQOMCLSCL");

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
    msg.setTimeStamp(0.978206634023);
    msg.setSource(49618U);
    msg.setSourceEntity(84U);
    msg.setDestination(52579U);
    msg.setDestinationEntity(91U);
    msg.seq = 45145U;
    msg.sys_dst.assign("VPXAYFPKTWLORYRNFBLQDXLAYHVQZKYCMFXRVHEZOTMUSRHZDUQWUXVBJGJGOEDLBFBTFLCLKSIRYBBCUMEWZULTMXUHPHWPKQJOBFRNEUFGSFEIDQWCRPGSZPNLNJEMIKCOXNIGOJEWDKVIKGJBOVWADXUOVDACREYGSKTHELAWHDHGDSBWBQ");
    msg.flags = 174U;
    const char tmp_msg_0[] = {8, 22, 3, 44, 12, -114, 122, 94, 1, 12, 89, -16, -70, 110, 2, 29, -98, 92, 40, 33, -77, 36, -57, -32, -70, 89, -18, -22, -61};
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
    msg.setTimeStamp(0.885792533551);
    msg.setSource(29698U);
    msg.setSourceEntity(181U);
    msg.setDestination(3040U);
    msg.setDestinationEntity(253U);
    msg.seq = 36602U;
    msg.sys_dst.assign("WLRYACVJVIYOOVWRGXRQTIYJJULSJY");
    msg.flags = 112U;
    const char tmp_msg_0[] = {-38, -110, 124, -55, -101, -67, 95, 28, 25, 59, -66, -78, -126, 95, -86, -102, -46, -128, -84, -59, 21, 120, 38, -3, -27, 85, 113, -103, 68, 72, 108, 35, -98, -50, -105, -62, -40, -14, 70, -14, -77, -55, 124, -96, 11, 98, -65, -47, 44, -47, 114, 30, -37, 77, 65, 48, 56, -5, -35, -16, -87, -21, -73, -24, 93, 96, -32, 3, 84, -63, -45, -18, 110, 82, 103, 36, 67, -96, -34, -25, -107, 103, -22, 81, -128, 65, -71, -22, -96, 55, 55, -60, -33, -80, 46, 103, -100, -76, -29, -126, -115, 18, -100, -99, 59, -100, -12, -27, -92, 91, -44, -41, 27, 27, 32, 89, 75, -81, -44, 63, -93, 79, 42, -117, 39, -111, 102, 70, -3, 106, -105, 126, 69, 58, 58, 107, 8, -104, 116, 2, 75, 118, -70, 47};
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
    msg.setTimeStamp(0.21632137911);
    msg.setSource(58830U);
    msg.setSourceEntity(5U);
    msg.setDestination(22778U);
    msg.setDestinationEntity(44U);
    msg.seq = 15285U;
    msg.sys_dst.assign("GSLBRYNOQMNOHPQUXRLNAFZAFHVQHSTKVBAPBUQWYSJRKBZSHAAIUTLKIHRGZTXZNWWSGEWXNOJ");
    msg.flags = 172U;
    const char tmp_msg_0[] = {-54, 82, -61, -121, -74, -78, 35, -46, -61, 13, -51, 53, 86, -8, 9, -82, -31, 22, -55, -7, -44, 108, 75, -63, -81, -20, -47, -88, -20, 90, 104, -64, 54, -32, 2, 85, -111, 124, 17, 21, 71, 32, 42, -26, -85, -99, 34, 61, 17, -25, 94, -10, -100, 59, 34, 33, 19, 83, -90, 100, 32, 61, 117, -50, -89, 56, -60, 59, -58, -46, -127, 27, -40, 42, -75, -7, 52, -117, -87, 47, -7, 60, 75, -46, -100, 0, -12, 13, -70, -71, -39, 40, 47, 96, -65, 55, 53, 29, -117, 78, 31, 41, -30, 108, -45, -110, -91, -115, 94, 23, 56, -119, -23, -108, -115, 67, -79, 35, -69, -25, -71, -55, -3, 104, 76, -120, -47, 106, -58, 59, 110, 60, 118, 44, 6, 85, -108, -120, -80, 19, -64, -24, -56, -90, -25, 14, 11, -10, -82, -39, 11, -116, -118, -7, -40, -52, 99, 25, 84};
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
    msg.setTimeStamp(0.915051052035);
    msg.setSource(9512U);
    msg.setSourceEntity(76U);
    msg.setDestination(24104U);
    msg.setDestinationEntity(164U);
    msg.sys_src.assign("SLAAEQBCNVICKIKHAOWHBARMPHXBROPTLWLDUGTVVJXZNBITJHLWHAKWBXNMQAIDYOLJOACRHJHPVQGEWWSZZUQYSTWYSZFVNLWTTWKSOBLHXKQQTEJUPNPVYESDFNOUKNKGYEGZUFXYDXCZSRYNPXMGCFMXPCHUAXYBTTKDFY");
    msg.sys_dst.assign("SYKISOXLCCLYHJXYBVRWKGNZZSNFTOOLCQOXHEXZPJAPDSMNJOELRWQFXSAUPKHQQWXKEDUEAJNEDPUINTLCHZAGVOPCFLVXADMDTWLETZSQFAERYJDLPGKVQEQWSKXKJBWVTQBODILBCXNCBIZAGDITCIRGYVNMYJUBHDAJWSINFVWOSZGVDYGILYWUHQQBMGHMAHFMRNWUVUFOEFRRMYKATXKGNHORPIJCZZTTPJGFIRSVMCYZP");
    msg.flags = 81U;
    const char tmp_msg_0[] = {-37, 24, -35, 88, -85, 117, 11, -63, -27, -99, 19, -20, -118, 98, -117, 75, -61, -42, -49, -123, -106, 112, -18, 102, -79, 103, 88, -40, 41, -12, -48, -125, -26, 6, 21, -42, 109, 68, -105, 56, -20, 125, -92, 50, -87, 92, 4};
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
    msg.setTimeStamp(0.623781957074);
    msg.setSource(24079U);
    msg.setSourceEntity(171U);
    msg.setDestination(41302U);
    msg.setDestinationEntity(43U);
    msg.sys_src.assign("LWJMGTWVVUBCVGFDOJIBJHOKPCFHXHTAAAQMQHDCDUWTPZSNMVBSTZIKQSIWUCKJRMSWARKJXOGSGYDNJRUPJYNZEYAXSCGNTCEOOEHUCXDJTNPDXELHRHQECXLEITEFKXSJAKLGLUUFUVIUROHFLD");
    msg.sys_dst.assign("UOIRMQRIZKCAJPABXXLJJNGSCWVVOUJQKIMBHVPWMWJNRAKXJBUYXTCGKCWSD");
    msg.flags = 48U;
    const char tmp_msg_0[] = {-17, -117, 19, -52, 119, -96, 90, 80, -55, 119, 69, -66, 54, 20, -25, -28, 10, 66, 92, 50, 64, 18, -79, 11, -120, 1, 97, 121, 80, -83, -41, -73, 10, 49, -87, -75, 119, 0, -124, 117, -108, 83, -125, -64, 76, 6, 114, 61, 41, 62, -9, 115, 115, -42, 49, -87, -122, -119, -17, -35, 40, -47, 40, 68};
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
    msg.setTimeStamp(0.163326157538);
    msg.setSource(2065U);
    msg.setSourceEntity(22U);
    msg.setDestination(26443U);
    msg.setDestinationEntity(166U);
    msg.sys_src.assign("ZAYMBOXQDMTSRCXUDOFMKGNZSQQFWXKCVWGBQUHQVAOAIJTBVNHQWWDTCQZCHNDXRBDEUTPUBAPFYSDUKRMCQXRGGSLPZVAEAXBRTXKGMVCWSWWVOOIVGDVZHFIYLYEEIYAXZZWFGDILFBVK");
    msg.sys_dst.assign("OQJJWOTXCEUPXVFMSNEUKDEUTHLQABIYSLMLNDYTKVWYLNRUNDMQVPJDPOFKJIYAXVISKCJGRLXPJTCNAAFFQLQXVZAOYAGSQVERLHZVBTNJIGMFEGPBTGFOZIMQOHUBDZOVDYYOQCATEFMCRQVZBPRXZJUSBMKGYHCSIRKBXWUYXWCTMIKRAUGZISVXSGEKDHK");
    msg.flags = 71U;
    const char tmp_msg_0[] = {115, -5, -21, 76, 43, 33, -45, 116, 8, -48, 13, -30, 63, -87, -70, -91, 16, 119, -123, -11, 66, 32, 3, -75, -115, -98, 118, -59, -24, 124, -17, 41, 56, 14, -3, 38, -40, 30, -95, -87, -24, -75, -123, 46, 121, 74, 38, -119, -103, 10, -36, -77, 119, 34, -7, 74, 49, 15, 53, -85, -113, -94, 106, -20, 28, -11, -27, 14, 109, 31, -123, 85};
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
    msg.setTimeStamp(0.618031062645);
    msg.setSource(17960U);
    msg.setSourceEntity(162U);
    msg.setDestination(55248U);
    msg.setDestinationEntity(134U);
    msg.seq = 33334U;
    msg.value = 104U;
    msg.error.assign("JQWVTNYNKHRQOYJFCXYGKWEMHOQKNFOOZCCFIUQDIUJVYWUIPTIKBZGMDLVABSODGMMNVNPJLJHFTSWQLLADJTTXRVZJQCOYPMXGBHAKKTQVOUXAEBIILGHCLLNVKUCZGHHBLAEKCBISPTMMURJPXHFELSYEFSGOVSDWDNBXRXEBCEOGRAWMDWGDREFDCUPFISP");

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
    msg.setTimeStamp(0.00569153988123);
    msg.setSource(15796U);
    msg.setSourceEntity(29U);
    msg.setDestination(22399U);
    msg.setDestinationEntity(215U);
    msg.seq = 5781U;
    msg.value = 250U;
    msg.error.assign("FGITESNCJUNLLGCXRKUHJHXVMWBDVWBTZXGWXTPDYUQESMZPWHCRTLKDPTRTVMGRBHAWIFBUYRHJVXGEKLLIXKZNAMCTIAGHPOWOBYZCZBMXDNESAGYYNHFPGTMVTYELDFXZUMYFLVNVOQMRJNEDAEFDBUNLQHOJKUOFOQQZVSSFKVKPXYYOQJWTCPFPSQBHQNZOFSWVKUKRIWWEMASAPIJQCRCGBSODCOJJAZBIRPKLAUIHYI");

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
    msg.setTimeStamp(0.178254337047);
    msg.setSource(52444U);
    msg.setSourceEntity(24U);
    msg.setDestination(37892U);
    msg.setDestinationEntity(240U);
    msg.seq = 37063U;
    msg.value = 194U;
    msg.error.assign("YAKYKCYGZKHQXMXRQRARCDLDLSKSIIHYCQPGGMFHJEMIMROAPMBEIJPZENOEMNDSDXOJVGUSGTFNFSROSRWTZ");

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
    msg.setTimeStamp(0.761082459947);
    msg.setSource(43499U);
    msg.setSourceEntity(108U);
    msg.setDestination(59209U);
    msg.setDestinationEntity(107U);
    msg.seq = 19287U;
    msg.sys.assign("QNCQXSHJGYZFSYIHEXMPOVOTFLLVWCJDAYIPBYKXVISXMJKPEBPALEESFHOCPFYOWACHMOMKUJTZSZLWZZVWOLPOQQVSIRGXNARKIBNTFCIN");
    msg.value = 0.801169037558;

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
    msg.setTimeStamp(0.185890126588);
    msg.setSource(2578U);
    msg.setSourceEntity(165U);
    msg.setDestination(14517U);
    msg.setDestinationEntity(109U);
    msg.seq = 25192U;
    msg.sys.assign("CHCIWJXVTDRZERLSXYQETPKPIQADGSHZPIXRKTIQXFWGPAAXQCWSRUBYSVBYCSUZIDDEFKPEAEVDYOSHRARJVF");
    msg.value = 0.353270753538;

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
    msg.setTimeStamp(0.879329323406);
    msg.setSource(19502U);
    msg.setSourceEntity(73U);
    msg.setDestination(21486U);
    msg.setDestinationEntity(150U);
    msg.seq = 21139U;
    msg.sys.assign("QNWFLPATHGLNVHHKIRCHDRVYIJXFRHEVGPKIJSESQAQWJKGWZVZSURTSCDIRTNBOGPETVZQMRNXGNQOORXEHCNQYWCNMRBUYZPELDICJVEMDKMDSGLBWUDIPNMZZKAWWBFJZXFMIPQGECUAUAAOYODIPLHQFEXKLVUHFVFCXYBZXUMSKGYLVNFLKWMIJTPQBTXTJNJYGALKSTYZOH");
    msg.value = 0.795090720126;

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
    msg.setTimeStamp(0.1878822875);
    msg.setSource(7041U);
    msg.setSourceEntity(148U);
    msg.setDestination(19902U);
    msg.setDestinationEntity(207U);
    msg.action = 237U;
    msg.longain = 0.278691315799;
    msg.latgain = 0.174285331844;
    msg.bondthick = 668563366U;
    msg.leadgain = 0.347604876533;
    msg.deconflgain = 0.731051967822;

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
    msg.setTimeStamp(0.449016149314);
    msg.setSource(50016U);
    msg.setSourceEntity(194U);
    msg.setDestination(17968U);
    msg.setDestinationEntity(125U);
    msg.action = 51U;
    msg.longain = 0.363520771034;
    msg.latgain = 0.132183425462;
    msg.bondthick = 3743101444U;
    msg.leadgain = 0.661313183786;
    msg.deconflgain = 0.856808370735;

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
    msg.setTimeStamp(0.283708311944);
    msg.setSource(39193U);
    msg.setSourceEntity(251U);
    msg.setDestination(12930U);
    msg.setDestinationEntity(41U);
    msg.action = 62U;
    msg.longain = 0.910585526594;
    msg.latgain = 0.0720874935663;
    msg.bondthick = 2607252012U;
    msg.leadgain = 0.327005474629;
    msg.deconflgain = 0.823548801886;

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
    msg.setTimeStamp(0.228856534551);
    msg.setSource(18120U);
    msg.setSourceEntity(42U);
    msg.setDestination(64243U);
    msg.setDestinationEntity(3U);
    msg.err_mean = 0.921746723785;
    msg.dist_min_abs = 0.642483472499;
    msg.dist_min_mean = 0.443428059766;

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
    msg.setTimeStamp(0.991000895657);
    msg.setSource(34515U);
    msg.setSourceEntity(39U);
    msg.setDestination(63340U);
    msg.setDestinationEntity(252U);
    msg.err_mean = 0.746055868674;
    msg.dist_min_abs = 0.987672013502;
    msg.dist_min_mean = 0.780365317898;

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
    msg.setTimeStamp(0.0179418401677);
    msg.setSource(32554U);
    msg.setSourceEntity(215U);
    msg.setDestination(175U);
    msg.setDestinationEntity(62U);
    msg.err_mean = 0.277187108222;
    msg.dist_min_abs = 0.773948870823;
    msg.dist_min_mean = 0.0569318287457;

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
    msg.setTimeStamp(0.831388975281);
    msg.setSource(50616U);
    msg.setSourceEntity(12U);
    msg.setDestination(56293U);
    msg.setDestinationEntity(163U);
    msg.action = 169U;
    msg.lon_gain = 0.306017848228;
    msg.lat_gain = 0.481973050071;
    msg.bond_thick = 0.343122422283;
    msg.lead_gain = 0.880078830923;
    msg.deconfl_gain = 0.767635969631;
    msg.accel_switch_gain = 0.419733789214;
    msg.safe_dist = 0.374416210107;
    msg.deconflict_offset = 0.854255630349;
    msg.accel_safe_margin = 0.36754129083;
    msg.accel_lim_x = 0.88249570264;

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
    msg.setTimeStamp(0.0265106558744);
    msg.setSource(36896U);
    msg.setSourceEntity(111U);
    msg.setDestination(65127U);
    msg.setDestinationEntity(54U);
    msg.action = 3U;
    msg.lon_gain = 0.828871018655;
    msg.lat_gain = 0.733868138269;
    msg.bond_thick = 0.445320749012;
    msg.lead_gain = 0.0887862611927;
    msg.deconfl_gain = 0.117659870308;
    msg.accel_switch_gain = 0.713596783174;
    msg.safe_dist = 0.999193698009;
    msg.deconflict_offset = 0.0267452007167;
    msg.accel_safe_margin = 0.1337032732;
    msg.accel_lim_x = 0.261936703619;

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
    msg.setTimeStamp(0.227041441313);
    msg.setSource(36245U);
    msg.setSourceEntity(130U);
    msg.setDestination(54858U);
    msg.setDestinationEntity(213U);
    msg.action = 23U;
    msg.lon_gain = 0.486711895177;
    msg.lat_gain = 0.155541014087;
    msg.bond_thick = 0.490278587676;
    msg.lead_gain = 0.828233615978;
    msg.deconfl_gain = 0.915132806302;
    msg.accel_switch_gain = 0.243640456925;
    msg.safe_dist = 0.42354634092;
    msg.deconflict_offset = 0.477611239215;
    msg.accel_safe_margin = 0.170180583153;
    msg.accel_lim_x = 0.536657560246;

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
    msg.setTimeStamp(0.666376387068);
    msg.setSource(5575U);
    msg.setSourceEntity(151U);
    msg.setDestination(56564U);
    msg.setDestinationEntity(210U);
    msg.type = 170U;
    msg.op = 62U;
    msg.err_mean = 0.790601488461;
    msg.dist_min_abs = 0.682446969528;
    msg.dist_min_mean = 0.342000349411;
    msg.roll_rate_mean = 0.120853775741;
    msg.time = 0.500252322434;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 107U;
    tmp_msg_0.lon_gain = 0.0939954298785;
    tmp_msg_0.lat_gain = 0.648986763719;
    tmp_msg_0.bond_thick = 0.548447697465;
    tmp_msg_0.lead_gain = 0.225633147275;
    tmp_msg_0.deconfl_gain = 0.225959433717;
    tmp_msg_0.accel_switch_gain = 0.33629079965;
    tmp_msg_0.safe_dist = 0.0753106584773;
    tmp_msg_0.deconflict_offset = 0.268324423673;
    tmp_msg_0.accel_safe_margin = 0.0430506154071;
    tmp_msg_0.accel_lim_x = 0.0967270179187;
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
    msg.setTimeStamp(0.283554693967);
    msg.setSource(64457U);
    msg.setSourceEntity(120U);
    msg.setDestination(17516U);
    msg.setDestinationEntity(184U);
    msg.type = 223U;
    msg.op = 228U;
    msg.err_mean = 0.639612962334;
    msg.dist_min_abs = 0.11826581306;
    msg.dist_min_mean = 0.450826557668;
    msg.roll_rate_mean = 0.677458319786;
    msg.time = 0.508626327294;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 23U;
    tmp_msg_0.lon_gain = 0.787686121244;
    tmp_msg_0.lat_gain = 0.598856246598;
    tmp_msg_0.bond_thick = 0.398712321964;
    tmp_msg_0.lead_gain = 0.933554697962;
    tmp_msg_0.deconfl_gain = 0.921646703591;
    tmp_msg_0.accel_switch_gain = 0.437718723024;
    tmp_msg_0.safe_dist = 0.179801367692;
    tmp_msg_0.deconflict_offset = 0.649378224179;
    tmp_msg_0.accel_safe_margin = 0.506251651176;
    tmp_msg_0.accel_lim_x = 0.77530232894;
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
    msg.setTimeStamp(0.123862535357);
    msg.setSource(37302U);
    msg.setSourceEntity(240U);
    msg.setDestination(553U);
    msg.setDestinationEntity(75U);
    msg.type = 130U;
    msg.op = 157U;
    msg.err_mean = 0.211438811512;
    msg.dist_min_abs = 0.513240591153;
    msg.dist_min_mean = 0.96374543271;
    msg.roll_rate_mean = 0.652084163233;
    msg.time = 0.157533395276;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 251U;
    tmp_msg_0.lon_gain = 0.0417719567966;
    tmp_msg_0.lat_gain = 0.640214923182;
    tmp_msg_0.bond_thick = 0.225904568626;
    tmp_msg_0.lead_gain = 0.886690851085;
    tmp_msg_0.deconfl_gain = 0.956156668219;
    tmp_msg_0.accel_switch_gain = 0.375784687829;
    tmp_msg_0.safe_dist = 0.577755507129;
    tmp_msg_0.deconflict_offset = 0.120132706018;
    tmp_msg_0.accel_safe_margin = 0.607440021319;
    tmp_msg_0.accel_lim_x = 0.965334617443;
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
    msg.setTimeStamp(0.886609282658);
    msg.setSource(13418U);
    msg.setSourceEntity(11U);
    msg.setDestination(42207U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.70006420041;
    msg.lon = 0.784566558749;
    msg.eta = 3169169810U;
    msg.duration = 29734U;

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
    msg.setTimeStamp(0.610777368264);
    msg.setSource(30607U);
    msg.setSourceEntity(251U);
    msg.setDestination(57159U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.695823996052;
    msg.lon = 0.194164504842;
    msg.eta = 1294222614U;
    msg.duration = 6163U;

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
    msg.setTimeStamp(0.767915925974);
    msg.setSource(21467U);
    msg.setSourceEntity(110U);
    msg.setDestination(28362U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.837818678454;
    msg.lon = 0.155597312444;
    msg.eta = 3414939275U;
    msg.duration = 207U;

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
    msg.setTimeStamp(0.442049456689);
    msg.setSource(64436U);
    msg.setSourceEntity(132U);
    msg.setDestination(19570U);
    msg.setDestinationEntity(166U);
    msg.plan_id = 18925U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.994613450825;
    tmp_msg_0.lon = 0.716123325519;
    tmp_msg_0.eta = 2597320376U;
    tmp_msg_0.duration = 58194U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.857260008262);
    msg.setSource(9688U);
    msg.setSourceEntity(210U);
    msg.setDestination(19550U);
    msg.setDestinationEntity(7U);
    msg.plan_id = 52349U;

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
    msg.setTimeStamp(0.967292715246);
    msg.setSource(335U);
    msg.setSourceEntity(253U);
    msg.setDestination(9163U);
    msg.setDestinationEntity(58U);
    msg.plan_id = 27111U;

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
    msg.setTimeStamp(0.272853886328);
    msg.setSource(11831U);
    msg.setSourceEntity(243U);
    msg.setDestination(57207U);
    msg.setDestinationEntity(103U);
    msg.type = 208U;
    msg.command = 222U;
    msg.settings.assign("TSVGPYNLZIKYSXWDUNRHVOFNHUINAWBYJKIJUIWMKDRIRRDLBAKKAGUOGVPXCWSYVBOEULVFLBVIJCBKDJXBAWWNVJOL");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 59130U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XFUGKPYCGMEOUXNINYCCRIAGQCTDXNFCSGKHZELHZJTWVIKPCYFXKJXFOOZGQGWTWQBUQLMINPEIRKYKDDCBBVXBHOKAPAQSGG");

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
    msg.setTimeStamp(0.994617338377);
    msg.setSource(24091U);
    msg.setSourceEntity(218U);
    msg.setDestination(6479U);
    msg.setDestinationEntity(176U);
    msg.type = 176U;
    msg.command = 89U;
    msg.settings.assign("VXXWEBZKANSCQVPDDNMFLOAPGKAXMYICRVQIMSHISWHATGERXGZNDYKXQUUVTJPZJKCMHFQZUEYAGKSRWGCPVPVCXZECQCSH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 59657U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.485138395805;
    tmp_tmp_msg_0_0.lon = 0.23118106756;
    tmp_tmp_msg_0_0.eta = 3359256750U;
    tmp_tmp_msg_0_0.duration = 27459U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GLXJGETODWCWJOBBCVIMYRQLIEOEFZSQFDEWUNRKIAPBPQEVFIQLSWUPDROVTQWEJNKAGGLSCXOFATVTCUNCGWOYJYTTNAZFBYMUK");

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
    msg.setTimeStamp(0.8796491766);
    msg.setSource(8005U);
    msg.setSourceEntity(104U);
    msg.setDestination(18633U);
    msg.setDestinationEntity(197U);
    msg.type = 155U;
    msg.command = 62U;
    msg.settings.assign("TUBHPATOSGBKZTONAHWLLIRAPVVCKVFXHXMKMNKYEWFYADYLSULQFAGHPALJRPFDWFKOLULSCIQWZORGJSBHEYKXXMUDVJGTBEDSFXQE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50853U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.179629913261;
    tmp_tmp_msg_0_0.lon = 0.334939230922;
    tmp_tmp_msg_0_0.eta = 949843600U;
    tmp_tmp_msg_0_0.duration = 59889U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BYWTCQUCUCOCDPLIITAERUAMNNGMKDQDATWJPVBFHKOJMHBKJKQYHSSSEAEMTGANIYKCXXAWFOBVGQLNKPGUVUUYZQBTIIMTCPEOSNKNVUWCZAGVWLMTRFYAHJNUNLZXKWDMODRSQXWTZSVFZOGOZZLLGSLQEUREQEOXTSGRFLTKYRVHFAXHQPHVWWLEPHLDCGYSXMZYRIA");

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
    msg.setTimeStamp(0.237955507427);
    msg.setSource(41710U);
    msg.setSourceEntity(202U);
    msg.setDestination(41182U);
    msg.setDestinationEntity(159U);
    msg.state = 157U;
    msg.plan_id = 3108U;
    msg.wpt_id = 199U;
    msg.settings_chk = 54548U;

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
    msg.setTimeStamp(0.505547447867);
    msg.setSource(2141U);
    msg.setSourceEntity(35U);
    msg.setDestination(48988U);
    msg.setDestinationEntity(210U);
    msg.state = 243U;
    msg.plan_id = 35168U;
    msg.wpt_id = 251U;
    msg.settings_chk = 55213U;

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
    msg.setTimeStamp(0.0303894927938);
    msg.setSource(16419U);
    msg.setSourceEntity(75U);
    msg.setDestination(12206U);
    msg.setDestinationEntity(141U);
    msg.state = 57U;
    msg.plan_id = 45823U;
    msg.wpt_id = 86U;
    msg.settings_chk = 38052U;

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
    msg.setTimeStamp(0.0924783694248);
    msg.setSource(1088U);
    msg.setSourceEntity(165U);
    msg.setDestination(12460U);
    msg.setDestinationEntity(85U);
    msg.uid = 147U;
    msg.frag_number = 168U;
    msg.num_frags = 156U;
    const char tmp_msg_0[] = {-75, -26, -76, -57, 25, 87, -26, 73, 9, -77, -18, -19, 121, -126, -72, 77, 12, 102, -32, -47, -9, -46, -101, 28, -74, -2, 30, -11, -32, -19, -83, 115, 106, 41, 68, 98, -72, -111, -73, -12, -115, -100, -8, -1, -99, -120, -58, 31, 106, 64, 97, -124, -96, 69, -63, -23, 105, -25, 61, -109, -128, -55, -111, 106, -36, -71, -58, 68, 110, -68, -118, 73, 29, 18, -108, 3, 41, -85, -34, -103, -92, 45, -4, 61, -54, -44, 87, -57, 15, -19, -70, -111, 67, -20, -28, -80, 1, 74, 42, -29, -101, -117, 66, -99, 89, 91, -25, 4, -62, -119, 117, 66, -19, -39, 126, 19, 6, 99, -44, 72, -92, -106, -58, -12, 8, 26, -117, 95, 84, -128, -49, -41, 30, -45, 122, -47, 62, -20, 123, -102, 49, 18, 39, 14, -79, -61, -81, -45, -27, 37, -80, -63, -45, -55, -57, 29, 116, 23, -101, -35, 19, 70, -45, -17, 24, -60, 27, 30, -93, -93, 118, 50, 93, 51, -45, -61, 12, -125, -73, 67, -96, -84, -49, 123, -78, 118, 31, 31, 47, -23, 84, -17, 99, 39, 37, -88, 89, 113, -33, -15, -118, -104, 50, 85, 58, 120, 0, -101, -100, -41, 71, -43, -46, -8, 61, 65, 73, -99, -44, 53, 68, 74, 81, 59, 95, -44, -20, 72, -57, -106, -83, -85, 37, -109, -32, 117, 113, 112, -125, -13, -70};
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
    msg.setTimeStamp(0.11387354064);
    msg.setSource(36605U);
    msg.setSourceEntity(28U);
    msg.setDestination(49870U);
    msg.setDestinationEntity(67U);
    msg.uid = 18U;
    msg.frag_number = 156U;
    msg.num_frags = 251U;
    const char tmp_msg_0[] = {31, -127, -64, -44, 61, -21, -15, 75, -55, 118, 57, 69, -6, 86, -108, 84, -64, 100, -93, 51, -70, -103, 5, 81, 112, -13, 68, -26, 14, -20, 106, 71, -34, -56, 55, -25, 22, -74, -66, 119, 81, 74, -77, 100, -128, -114, -11, -26, -9, -48, 15, -26, -103, -9, 3, -47, 30, 120, 49, -98, 106, 104, 21, 78, 107, -39, 96, -9, -29, 18, 83, -3, -53, -34, 117, -117, 11, 68, 72, 125, -65, -117, -44, 106, -98, -48, 115, -116, 64, 17, 24, 34, -92, -40, 10, 51, 53, 20, -123, -70, -89, 31, 41, 22, -69, -123, 4, -55, -12, -50, -123, -78, 108};
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
    msg.setTimeStamp(0.747337257152);
    msg.setSource(38572U);
    msg.setSourceEntity(114U);
    msg.setDestination(12190U);
    msg.setDestinationEntity(10U);
    msg.uid = 71U;
    msg.frag_number = 116U;
    msg.num_frags = 160U;
    const char tmp_msg_0[] = {-48, -39, -93, 9, 32, -108, -82, -78, 22, 50, -103, 29, 24, 117, -19, 56, -59, 84, -42, -74, -1, -116, -61, 105, -38, -25, 91, -25, -63, -75, -117, 71, 70, 36, -44, -24, 70, 125, 92, 7, 6, -62, 118, 46, -119, -125, -62, 113, 104, 38, 76, -128, -20, 3, 6, 89, 67, 108, 66, -58, 57, 44, 45, 53, -45, 109, 35, -47, 43, 80, 5, 45, -92, -91, 107, -1, -67, -126, -89, -101, 39, -125, 41, -41, 123, -2};
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
    msg.setTimeStamp(0.320544590857);
    msg.setSource(61809U);
    msg.setSourceEntity(142U);
    msg.setDestination(31410U);
    msg.setDestinationEntity(192U);
    msg.content_type.assign("RJFEJGMQWJZKSOLILNJOPLFTLUORASUSGTBJUWGFFUCWXXKCHRYJIKDCCEZJYWZYGPENDEVNZHFHBCXOVNAFDTWPGEQRIRNFJLNOQVYAHQSUSJMKBMOMCEOCDZBIDYVHMKSXIDXWGUIAYQYOTHEKHWZSBLBEFAOPZMSSHVNBQAFCAX");
    const char tmp_msg_0[] = {-34, -27, 69, 95, 114, 46, -27, -33, 20, -74, 73, 109, -42, -52, -77, 75, -108, -124, 74, -17, 65, -64, -123, -120, 124, 126, 108, 100, -32, 62, -69, 31, 93, -55, -68, 72, -64, -70, -67, -38, 121, -109, -59, -69, 27, -43, -45, -122, -118, -113, 86, -43, -3, 28, -88, 100, -73, -69, -87, -88, 9, -91, -52, -60, 105, -97, 83, 104, -54, 101, -41, -12, -14, 50, -17, 17, 46, 89, -104, -82, -87, 37, 104, -111, -74, 126, 101, -105, 61, 32, 61, 126, -45, 41, -19, 22, 31, -73, 122, 33, -98, -7, -19, -26, -97, -19, -94, -56, 15, -120, -77, 70, -95, -28, -93, -5, 9, -78, 76, -121, -34, -23, -10, 96, 37, -41, 49, -10, -75, 117, 104, 58, 92, 90, -84, -47, 10, 30, 66, -125, -100, -83, 78, -2, -38, -100, 9, -34, 34, 77, -1, -74, -15, -52, 2, 99, 6, 68, -75, 34, 11, 101, 21, -66, 102, 81, -85, 14, 95, -109, -108, -11, 62, 119, -72, 59, 51, 13, 67, -5, 101, 83, -119, -71, -69, -37, 8, -103, -61, -42, -124, -37, -78, -80, 86, 114, -3, -117, 30, 86, 104, -1, -18, -43, 106, -14, -69, -83, -92, 110, -92, 23, 31, 58, 120, -112, 87, -58, -115, -55, 31, 47, -113, -38, -80, -32, -128, -12, 57, 112, -12, -30, 122, -47, 26, 27, 88, 24, 40};
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
    msg.setTimeStamp(0.84607530962);
    msg.setSource(1527U);
    msg.setSourceEntity(237U);
    msg.setDestination(30091U);
    msg.setDestinationEntity(190U);
    msg.content_type.assign("SHMVQLMTMVAGKKISZCUYRGPAOAVVIISKWHPQPLSDNOWEZPGEIYUXODXRTMIUOQXRNOCKHSDULCYMAEQOMRLTXIFFRAGKXYLBDHTXHBBFLRNKZFGAQPPTFTJWNHIUFDLLWNBEDAGYJKQJZUTJGCMCHREYWCSFHRWXIJGXDZXYKGWHQZIPWVDDQVEQZBYXLOUSJTNYCSIJLMJAEBVSUKMZNSRBNWB");
    const char tmp_msg_0[] = {101, -119, 99, 57, 17, -79, -96, 118, -48, -9, 53, 102, 5, -18, 103, 64, 73, -125, -29, -24, 59, -43, 23, -47, -86, -58, 104, -37, -6, -40, -71, 50, 30, -88, 64, 86, -56, -80, -108, -14, -46, -66, 24, -6, -67, 33, -36, 27, -55, 113, 102, -111, 106, -71, -70, 0, -45, -1, -122, -89, 92, 116, 101, 107, 90, 101, -10, 58, -122, 60, 15, 61, -107, 45, -54, 10, -112, -83, 79, 27, -70, -118, -101, -66, 90, -36, -81, -13, -38, 97, 126, -13, 49, -88, 78, 62, 5, -99, -109, 102, 29, 31, 20, 44, 27, 38, -13, -120, 100, -106, 79, -10, 65, -127, 27, 108, 125, -77, 53, -98, -126};
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
    msg.setTimeStamp(0.850099625146);
    msg.setSource(18165U);
    msg.setSourceEntity(70U);
    msg.setDestination(16226U);
    msg.setDestinationEntity(138U);
    msg.content_type.assign("ZTXRTLQHPMCJANHLOUQMDOFQWOTLQFYKWIQSARWMGHGVLBXAGUXNWJSMHXYKYXQKCATHFPBFMUCFYZAXSQLEKNTGFREZWOEHRZZZTNSCTWGGCJIZWENRADQSJABHOGDDDRIANDZSMGOSLIHJMCZQNFYPMHXVYCQNPCSBAUIWIYULXEOBUUJHBWMEDIKXNIEDVVKODVCREKRFYUEJPGLXVPRMJKKIV");
    const char tmp_msg_0[] = {82, -13, 17, 63, 117, 59, -57, 21, -1, 61, -100, 80, -69, -33, 23, -18, -54, -17, -14, -53, 94, -115, 30, 6, 101, 90, -96, -46, 83, -109, -56, 120, 42, 110, 12, -69, -102, -42, 67, 25, -115, 100, 24, -117, -127, 34, -45, -110, -109, -67, -80, -26, 16, 105, -118, -100, -80, 109, 17, -41, -15, 125, -51, 96, -50, -98, -127, 53, 11, -72, -127, 101, -75, -32, 8, 89, -47, 31};
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
    msg.setTimeStamp(0.613687440719);
    msg.setSource(14184U);
    msg.setSourceEntity(83U);
    msg.setDestination(1892U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.833767689577);
    msg.setSource(30903U);
    msg.setSourceEntity(58U);
    msg.setDestination(16940U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.871477793454);
    msg.setSource(44070U);
    msg.setSourceEntity(202U);
    msg.setDestination(10784U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.868322815048);
    msg.setSource(1322U);
    msg.setSourceEntity(213U);
    msg.setDestination(39034U);
    msg.setDestinationEntity(217U);
    msg.target = 36825U;
    msg.bearing = 0.760399476699;
    msg.elevation = 0.0323545776913;

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
    msg.setTimeStamp(0.777455365731);
    msg.setSource(60372U);
    msg.setSourceEntity(136U);
    msg.setDestination(36398U);
    msg.setDestinationEntity(202U);
    msg.target = 859U;
    msg.bearing = 0.103006561218;
    msg.elevation = 0.270270420787;

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
    msg.setTimeStamp(0.470374209355);
    msg.setSource(5588U);
    msg.setSourceEntity(115U);
    msg.setDestination(4292U);
    msg.setDestinationEntity(213U);
    msg.target = 35717U;
    msg.bearing = 0.884759172248;
    msg.elevation = 0.26545060769;

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
    msg.setTimeStamp(0.909003164494);
    msg.setSource(16929U);
    msg.setSourceEntity(148U);
    msg.setDestination(30361U);
    msg.setDestinationEntity(45U);
    msg.target = 34325U;
    msg.x = 0.402871549331;
    msg.y = 0.458229461526;
    msg.z = 0.62949208647;

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
    msg.setTimeStamp(0.484200809712);
    msg.setSource(53391U);
    msg.setSourceEntity(99U);
    msg.setDestination(47647U);
    msg.setDestinationEntity(48U);
    msg.target = 35453U;
    msg.x = 0.0285986733996;
    msg.y = 0.382328766972;
    msg.z = 0.120288100936;

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
    msg.setTimeStamp(0.973335269781);
    msg.setSource(41508U);
    msg.setSourceEntity(67U);
    msg.setDestination(38133U);
    msg.setDestinationEntity(45U);
    msg.target = 18386U;
    msg.x = 0.816950907496;
    msg.y = 0.821140897445;
    msg.z = 0.943017785897;

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
    msg.setTimeStamp(0.200303827459);
    msg.setSource(63547U);
    msg.setSourceEntity(131U);
    msg.setDestination(45768U);
    msg.setDestinationEntity(136U);
    msg.target = 317U;
    msg.lat = 0.0508054262345;
    msg.lon = 0.526284967956;
    msg.z_units = 35U;
    msg.z = 0.475731448644;

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
    msg.setTimeStamp(0.954669045343);
    msg.setSource(34827U);
    msg.setSourceEntity(136U);
    msg.setDestination(40886U);
    msg.setDestinationEntity(50U);
    msg.target = 1962U;
    msg.lat = 0.0504658937198;
    msg.lon = 0.0744750323291;
    msg.z_units = 131U;
    msg.z = 0.146732577822;

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
    msg.setTimeStamp(0.212826319031);
    msg.setSource(62139U);
    msg.setSourceEntity(134U);
    msg.setDestination(38452U);
    msg.setDestinationEntity(116U);
    msg.target = 41043U;
    msg.lat = 0.278982031506;
    msg.lon = 0.565189475315;
    msg.z_units = 62U;
    msg.z = 0.556138687613;

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
    msg.setTimeStamp(0.961919148185);
    msg.setSource(13415U);
    msg.setSourceEntity(50U);
    msg.setDestination(28710U);
    msg.setDestinationEntity(5U);
    msg.locale.assign("ETBDQJGPUOBMQIDDEZDTMZUIWQGVYBRFADIBDZRECUCXSSDPRZOIGJJPGJXUMXUEEZPQRNPOQMIRHAHVGOWHXPMMFYNTLCLCHKEEXKZQHHOKNYSFCTNSSCTPKNYUJAXQEXZJBKMFFY");
    const char tmp_msg_0[] = {-30, 39, -72, -10, -41, 121, 27, -2, 47, -101, -116, 32, -54, 31, 0, 95, 72, -24, -60, -11, 125, -29, -78, 69, 125, -66, 50, -51, -15, -99, 95, -120, 33, 60, -11, -14, -102, 29, 22, -23, -124, -107, -50, -120, -58, -115, 61, -60, -20, 66, -118, -33, 94, 31, -63, 79, 13, -111, -8, -109, -33, 102, -16, 118, 47, -17, -105, -95, -77, 45, 10, 7, 21, 41, -90, 123, -93, -120, -49, 66, 54, 60, -113, -84, -39, 18, 126, 40, 100, 26, 118, -53, 49, -56, 32, 116, -118, -76, 120, -28, -14, 120, -98, 70, -75, 125, -103, -24, 53, -16, -99, 72, -26, 36, -22, -76, 48, 72, -127, -44, -67, -57, -4};
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
    msg.setTimeStamp(0.489344838386);
    msg.setSource(55154U);
    msg.setSourceEntity(8U);
    msg.setDestination(1107U);
    msg.setDestinationEntity(137U);
    msg.locale.assign("DQFFBBJAIYZGJHI");
    const char tmp_msg_0[] = {30, 0, 102, 94, -72, -52, -99, -35, 97, 110, 33, -30, -103, 58, 54, -23, -26, -94, 35, 5, 86, 26, 81, -105, -128, -63, -96, 82, -24, 14, 52, -32, -24, 10, -73, 37, 54, -62, -56, 84, 14, 20, -88, -34, -23, 30, -57, 78, 33, 30, -126, 93, -115, -57, -91, 62, 97, -36, 66, 52, -50, 81, -127, 26, -74, 11, -67, 122, 8, -46, -56, 45, 118, -123, -83, 0, 105, 31, 6, -118, -104, 24, 75, -34, -127, -27, -25, 39, -46, 63, 107, 94, 94, 113, 0, -114, 36, -115, 15, -81, -9, 118, -33, 35, -64, 98, -66, 43, -105, -96, -109, 11, 100, 25, 102, -9, -115, -46, -91, 67, -13, -113, -67, -24, -97, -47, 115, -62, -68, -92, -120, -65, -32, 5, 110, 109, 95, -116, -88, -102, 27, -45, -15, 101, -17, -91, 96, -84, -53, -66, -86, 121, -64, 11, 102, -53, -27, 113, 64, -88, -71, -128, -41, -98, 98, -57, 53, 112, 85, 48, -60, -78, -111, -123, -96, -38, -11, 25, 118, 108, 113, -127, -85, 26, -47, -120, 32, -108, 30, 79, 13, -7, 102, 19, 85, -102, -5, -31, -111, -9, 13, -49, 10, -43, 2, -57, -103, 114, -125, -14, -102, 42, -78, -44, 56, 30, 58, -43, -20, 109, 46, 38, -88, -63, 58, -9, 53, 20, 37, -61, -96, 39, 0, -62, 62, -120, -90, -101, -14, -12, 95, 5, -31, 88, 75, -7, 65, 35, -46, -47, 54, -11};
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
    msg.setTimeStamp(0.0940865571764);
    msg.setSource(34316U);
    msg.setSourceEntity(67U);
    msg.setDestination(5542U);
    msg.setDestinationEntity(89U);
    msg.locale.assign("WARCJQTIEFSQBDZCUPFGDOLLMRPPJCRLEVGAFMBLAZCIXDBMYBDVQNKHJGUBXIEKFQGQESDFUFEDJLLJZMZRWWWNXHXNNHKTZTGPFRROFNDBETTOD");
    const char tmp_msg_0[] = {23, 63, -67, -65, 81, -75, -88, 86, 10, -88, 118, 101, 25, -121, 27, -66, -33, 113, 65, 83, 62, -79, 43, 12, 40, -102, -26, 86, -93, 118, -103, 35, -108, 44, 122, -61, 15, 100, -72, -127, -93, -105, 103, -30, -34, -127, -56, -99, -60, 71, 33, -55, -29, -20, -43, -83, -8, -51, 75, -113, 71, 32, -109, 71, -81, 118, 100, -47, 121, -45, -127, 115, 101, 91, -126, 67, -65, -77, -38, 117, 84, 15, -119, 48, -100, -58, 15, 114, -76, -104, -102, -44, 102, 0, 114, 1, -49, -16, -55, -113, 12, 110, -29, 106, 21, 104, -50, -15, -95, 69, 54, -121, 11, 53, 123, 33, -26, 62, -28, -68, -51, -39, 10, 17, -44, 38, 5, -77, -56, 36, -92, 120, -80, -60, 52, 123, -121, -23, -83, 20, -11};
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
    msg.setTimeStamp(0.751819511083);
    msg.setSource(52408U);
    msg.setSourceEntity(231U);
    msg.setDestination(16411U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.110994726804);
    msg.setSource(53762U);
    msg.setSourceEntity(201U);
    msg.setDestination(39016U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.0773694952192);
    msg.setSource(60375U);
    msg.setSourceEntity(47U);
    msg.setDestination(60313U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.231876623972);
    msg.setSource(19696U);
    msg.setSourceEntity(120U);
    msg.setDestination(54369U);
    msg.setDestinationEntity(134U);
    msg.camid = 45U;
    msg.x = 42472U;
    msg.y = 59412U;

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
    msg.setTimeStamp(0.070730855762);
    msg.setSource(37109U);
    msg.setSourceEntity(153U);
    msg.setDestination(27645U);
    msg.setDestinationEntity(165U);
    msg.camid = 150U;
    msg.x = 48096U;
    msg.y = 24185U;

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
    msg.setTimeStamp(0.299945756323);
    msg.setSource(15313U);
    msg.setSourceEntity(56U);
    msg.setDestination(52901U);
    msg.setDestinationEntity(105U);
    msg.camid = 249U;
    msg.x = 34925U;
    msg.y = 24042U;

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
    msg.setTimeStamp(0.943167488275);
    msg.setSource(37954U);
    msg.setSourceEntity(53U);
    msg.setDestination(21879U);
    msg.setDestinationEntity(137U);
    msg.camid = 114U;
    msg.x = 37849U;
    msg.y = 55334U;

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
    msg.setTimeStamp(0.0274458367757);
    msg.setSource(19395U);
    msg.setSourceEntity(173U);
    msg.setDestination(56891U);
    msg.setDestinationEntity(252U);
    msg.camid = 10U;
    msg.x = 36219U;
    msg.y = 5119U;

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
    msg.setTimeStamp(0.835114138518);
    msg.setSource(47205U);
    msg.setSourceEntity(196U);
    msg.setDestination(61882U);
    msg.setDestinationEntity(159U);
    msg.camid = 209U;
    msg.x = 59656U;
    msg.y = 4744U;

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
    msg.setTimeStamp(0.875096536025);
    msg.setSource(30315U);
    msg.setSourceEntity(135U);
    msg.setDestination(53073U);
    msg.setDestinationEntity(96U);
    msg.tracking = 96U;
    msg.lat = 0.957561002108;
    msg.lon = 0.887859769717;
    msg.x = 0.616644015855;
    msg.y = 0.831221030085;
    msg.z = 0.192114204519;

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
    msg.setTimeStamp(0.559448198398);
    msg.setSource(12679U);
    msg.setSourceEntity(196U);
    msg.setDestination(53288U);
    msg.setDestinationEntity(254U);
    msg.tracking = 125U;
    msg.lat = 0.927411370726;
    msg.lon = 0.97451782965;
    msg.x = 0.0911219281693;
    msg.y = 0.555114750421;
    msg.z = 0.242809508717;

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
    msg.setTimeStamp(0.726713022132);
    msg.setSource(24105U);
    msg.setSourceEntity(171U);
    msg.setDestination(25813U);
    msg.setDestinationEntity(29U);
    msg.tracking = 112U;
    msg.lat = 0.967980330317;
    msg.lon = 0.980970706951;
    msg.x = 0.20708800119;
    msg.y = 0.907868894074;
    msg.z = 0.649649461103;

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
    msg.setTimeStamp(0.30453892575);
    msg.setSource(41124U);
    msg.setSourceEntity(197U);
    msg.setDestination(24838U);
    msg.setDestinationEntity(150U);
    msg.target.assign("QEUYGNMNMKNBCGBQKBFGMTQIGZCEVJMSHQMNTQIVGXCGOLOXVAPKUHESZCPHUZOBQPWXWRWATHBYKIBXMOTXKTWKDOQHSDESQGRVFMFYJLJCFHMAXQMHTTKYTVIOWZNKYNXCLOJDOITAIWLSVOIVGWFJAGDPEXHVRYDBALJZPZZXDJUUUELERHRDMIZPFQAWBUUNLRAFZCFBNSSEKVAWZNPLFEIPCDRPSYCRTJDRJVALY");
    msg.lbearing = 0.530675922733;
    msg.lelevation = 0.331496324507;
    msg.bearing = 0.600470095724;
    msg.elevation = 0.75029900753;
    msg.phi = 0.108733334757;
    msg.theta = 0.797537027044;
    msg.psi = 0.345091112603;
    msg.accuracy = 0.837089866494;

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
    msg.setTimeStamp(0.511767638797);
    msg.setSource(22231U);
    msg.setSourceEntity(51U);
    msg.setDestination(17957U);
    msg.setDestinationEntity(125U);
    msg.target.assign("YYIPGZBOTODHAUYGNKNXKPTDDBMTARWSCAUCFMEAOEBZXZMHTTZPNXIMHFZMZHZSOMGVIEIOZCSBRWYFEQDQVSXVNEUHUXUMVKLQJIJBLCDARVCDNWTRDXVWVDCUMQFPHJNPXNCQRJDGAEMYSGINHUDJBPOLFSVXKSOTKKSLWQJLERAOOHTSEWUPYAUTYJQFUXJFGQCBQQIBYNPPEENBJWWRKHIKVARAYYVWOFLIGTHMWRPL");
    msg.lbearing = 0.970714727634;
    msg.lelevation = 0.972665748357;
    msg.bearing = 0.713465693355;
    msg.elevation = 0.175071753282;
    msg.phi = 0.456637069294;
    msg.theta = 0.641289905095;
    msg.psi = 0.779776709636;
    msg.accuracy = 0.907794364376;

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
    msg.setTimeStamp(0.167972496282);
    msg.setSource(24255U);
    msg.setSourceEntity(1U);
    msg.setDestination(32692U);
    msg.setDestinationEntity(159U);
    msg.target.assign("NOTBVCTSGJIGLPOAWJJDMZBEKZPQDMPDKBYXAWUMKKABWJXLRRFEGBXOGYQQNYZHJMWZFUNVMPXWFRBIMFCNEJIUNXULZYLQRGCNTHIQODUXROQRWEIGZWOLCXHADEFYYIQHSZPFCRAHSLUILHARVMDHPEWTZTSZTHKQVEVLYJVSHOLNCAFCNUISOETTFMFLKZDNBASVQSETCPIDJPSMRTOECBQ");
    msg.lbearing = 0.517229638219;
    msg.lelevation = 0.410604752776;
    msg.bearing = 0.517895042256;
    msg.elevation = 0.41091960736;
    msg.phi = 0.993172408619;
    msg.theta = 0.559334124976;
    msg.psi = 0.49011277173;
    msg.accuracy = 0.0461290109283;

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
    msg.setTimeStamp(0.218476298002);
    msg.setSource(1292U);
    msg.setSourceEntity(24U);
    msg.setDestination(2734U);
    msg.setDestinationEntity(100U);
    msg.target.assign("NPFDFBLWNPBQDW");
    msg.x = 0.481484155036;
    msg.y = 0.978678850851;
    msg.z = 0.22915042152;
    msg.n = 0.0859419039007;
    msg.e = 0.607299724955;
    msg.d = 0.963382584064;
    msg.phi = 0.421039803959;
    msg.theta = 0.679989371364;
    msg.psi = 0.753870399818;
    msg.accuracy = 0.882625379715;

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
    msg.setTimeStamp(0.777055969001);
    msg.setSource(15590U);
    msg.setSourceEntity(17U);
    msg.setDestination(6293U);
    msg.setDestinationEntity(128U);
    msg.target.assign("OPXCJRQEJUMCCLNOCDWHURPUTWIPPQHBNLQGZVXVPRHJAISEGEAFMAWXLLCQHLKSAYUQBMISTHZIFRWEIQHJSEWZDGIZOYASVOXKLVFDCUSBXPXGNOJTPXOMYVEKAI");
    msg.x = 0.881480884196;
    msg.y = 0.021420687938;
    msg.z = 0.61324049229;
    msg.n = 0.427239936676;
    msg.e = 0.25878460079;
    msg.d = 0.489962706148;
    msg.phi = 0.069955353832;
    msg.theta = 0.27025633535;
    msg.psi = 0.848474619078;
    msg.accuracy = 0.502965331106;

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
    msg.setTimeStamp(0.369915294309);
    msg.setSource(20317U);
    msg.setSourceEntity(32U);
    msg.setDestination(1700U);
    msg.setDestinationEntity(130U);
    msg.target.assign("NVEBYGOMVONEZEZYLJHAMZGCUTRYLOZVQERIKBL");
    msg.x = 0.837246695701;
    msg.y = 0.216456639823;
    msg.z = 0.260017922568;
    msg.n = 0.724970053091;
    msg.e = 0.658096170542;
    msg.d = 0.994111265617;
    msg.phi = 0.489131763453;
    msg.theta = 0.623239631323;
    msg.psi = 0.0384156746266;
    msg.accuracy = 0.384200321013;

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
    msg.setTimeStamp(0.778363482774);
    msg.setSource(31899U);
    msg.setSourceEntity(73U);
    msg.setDestination(59045U);
    msg.setDestinationEntity(249U);
    msg.target.assign("RCMSKBIQVQVQMATOXLNAFYSHYIEYZCKLYRWOBVFINHPKGEWAGYAHRPLRAQXFZMXTPRTKFZFUDSJPRQIZRPYSHHBJXXFGEVLSCRFINPVXKECWBHUTZDIOUBMQNAILBJGYAZVRGBZOCWICJTJQINUMNGUSVCKLEJDKFGWLKWIDXBNMDVXCUSULVTSMADFPDBHDZAPJUWCTOOEEKWPNDBTQFOQLKMYZCYGLNTZPGRVUMSHHJYWDXNOAOWEEUTQX");
    msg.lat = 0.469714925266;
    msg.lon = 0.951149361879;
    msg.z_units = 57U;
    msg.z = 0.599411727545;
    msg.accuracy = 0.498493490263;

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
    msg.setTimeStamp(0.232295284075);
    msg.setSource(1160U);
    msg.setSourceEntity(93U);
    msg.setDestination(41625U);
    msg.setDestinationEntity(7U);
    msg.target.assign("XFLTHLYYRHGYINCGJRFQUUZBMFCBDWQDVSLJPXAGGPPDUXSZKFQXELWYHENVQSNCRSQDJLZTSPDCKBTABYNWRANBKXLSMQBREJPYUDXTWFJBOUMKTLTMKZPNIYSMSEJCKAVWFIIWIRUZQT");
    msg.lat = 0.770855573848;
    msg.lon = 0.350673175067;
    msg.z_units = 64U;
    msg.z = 0.245516865666;
    msg.accuracy = 0.979009248878;

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
    msg.setTimeStamp(0.213082064879);
    msg.setSource(7666U);
    msg.setSourceEntity(166U);
    msg.setDestination(55343U);
    msg.setDestinationEntity(236U);
    msg.target.assign("CTYNWYVCRILIEIDGUDSOAEGGBMOFUKHKURJKJNRMWYZLFJESKWFMRFXTBAVBLHZIVNZMYQQNTRAOVEO");
    msg.lat = 0.66468677454;
    msg.lon = 0.779057668135;
    msg.z_units = 114U;
    msg.z = 0.867047300445;
    msg.accuracy = 0.699017010339;

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
    msg.setTimeStamp(0.526819530646);
    msg.setSource(54156U);
    msg.setSourceEntity(110U);
    msg.setDestination(29884U);
    msg.setDestinationEntity(160U);
    msg.name.assign("LPMRCXSAUMTDHXSJNSVMSHBPYQQVIXHJKZNR");
    msg.lat = 0.346220260666;
    msg.lon = 0.463470315101;
    msg.z = 0.454280756515;
    msg.z_units = 205U;

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
    msg.setTimeStamp(0.93177994727);
    msg.setSource(24673U);
    msg.setSourceEntity(220U);
    msg.setDestination(18611U);
    msg.setDestinationEntity(134U);
    msg.name.assign("RMLZBJPGNEBVIYXWIOEXMUCVCIFPXPSRAPYWOCYWXBUYXQBCSHKKTKGRAHGNZILWAHWBEDVNPYHCMZFEOBTVLMMVYZBYAQGAIEGDSIUGYVFOGNDLVVHSHZTUKEVPQRJZCDGDQSDPDUQAKPFTJAFFZCONRLBJDHARNMX");
    msg.lat = 0.597600028896;
    msg.lon = 0.868960700353;
    msg.z = 0.744118443277;
    msg.z_units = 148U;

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
    msg.setTimeStamp(0.586208738745);
    msg.setSource(26709U);
    msg.setSourceEntity(170U);
    msg.setDestination(15563U);
    msg.setDestinationEntity(111U);
    msg.name.assign("WRVFNFIQSWMBFHCXSVNFUUMXDIJZHBYEXHYHHNEJZFGGXGZKYDSKJVOTUXLPKPVGUWMERRROHVWCNZAQOJNKSZURIJZLCBBJDSQMPSTDRHZHILJNYMUCLWHTCYWDVNIBOTMXAYBQJQQVWAUMOLSTMTOKYVTCWKZFTCWPMXAEIILDYJPACBL");
    msg.lat = 0.970388676571;
    msg.lon = 0.0302399701077;
    msg.z = 0.243153178156;
    msg.z_units = 20U;

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
    msg.setTimeStamp(0.592467890446);
    msg.setSource(12541U);
    msg.setSourceEntity(206U);
    msg.setDestination(27126U);
    msg.setDestinationEntity(158U);
    msg.op = 164U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("IAWSEQRGPNSRLQWHMWKGCYUDHXBCZZTKDQZPWEZTNELLNJSYXBTHVNSKUIZYMBKRXBWCLUALFIPGKOMGCHYNBVBGMCXRLGXFEUJFOBYQQKSUDEVYVYNKE");
    tmp_msg_0.lat = 0.277564258364;
    tmp_msg_0.lon = 0.852898511034;
    tmp_msg_0.z = 0.636907197104;
    tmp_msg_0.z_units = 116U;
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
    msg.setTimeStamp(0.366190570167);
    msg.setSource(23597U);
    msg.setSourceEntity(201U);
    msg.setDestination(35021U);
    msg.setDestinationEntity(233U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.525194084575);
    msg.setSource(25824U);
    msg.setSourceEntity(208U);
    msg.setDestination(60003U);
    msg.setDestinationEntity(102U);
    msg.op = 170U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VMSMGXJXPQOOQZDHYEQ");
    tmp_msg_0.lat = 0.10473823436;
    tmp_msg_0.lon = 0.438071798092;
    tmp_msg_0.z = 0.48542958103;
    tmp_msg_0.z_units = 69U;
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
    msg.setTimeStamp(0.905915450224);
    msg.setSource(54677U);
    msg.setSourceEntity(176U);
    msg.setDestination(37815U);
    msg.setDestinationEntity(230U);
    msg.value = 0.920052243137;
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
    msg.setTimeStamp(0.956409405462);
    msg.setSource(46017U);
    msg.setSourceEntity(245U);
    msg.setDestination(42407U);
    msg.setDestinationEntity(221U);
    msg.value = 0.112000728609;
    msg.type = 221U;

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
    msg.setTimeStamp(0.161866993376);
    msg.setSource(64989U);
    msg.setSourceEntity(250U);
    msg.setDestination(52737U);
    msg.setDestinationEntity(39U);
    msg.value = 0.51512393594;
    msg.type = 235U;

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
    msg.setTimeStamp(0.080719250475);
    msg.setSource(28164U);
    msg.setSourceEntity(171U);
    msg.setDestination(27531U);
    msg.setDestinationEntity(162U);
    msg.value = 0.660546445573;

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
    msg.setTimeStamp(0.938526337912);
    msg.setSource(64730U);
    msg.setSourceEntity(62U);
    msg.setDestination(38403U);
    msg.setDestinationEntity(176U);
    msg.value = 0.51878607092;

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
    msg.setTimeStamp(0.600888952715);
    msg.setSource(22497U);
    msg.setSourceEntity(138U);
    msg.setDestination(24457U);
    msg.setDestinationEntity(34U);
    msg.value = 0.660546642719;

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
    msg.setTimeStamp(0.254712120453);
    msg.setSource(47339U);
    msg.setSourceEntity(94U);
    msg.setDestination(17941U);
    msg.setDestinationEntity(43U);
    msg.timestamp_last_service = 0.427387490269;
    msg.time_next_service = 0.263794927751;
    msg.time_motor_next_service = 0.834587566076;
    msg.time_idle_ground = 0.754000678113;
    msg.time_idle_air = 0.515496084417;
    msg.time_idle_water = 0.674207657502;
    msg.time_idle_underwater = 0.324803193742;
    msg.time_idle_unknown = 0.752397502473;
    msg.time_motor_ground = 0.956005929398;
    msg.time_motor_air = 0.0273109022913;
    msg.time_motor_water = 0.140678708441;
    msg.time_motor_underwater = 0.326471246063;
    msg.time_motor_unknown = 0.197877646313;
    msg.rpm_min = 29048;
    msg.rpm_max = 18143;
    msg.depth_max = 0.611694353477;

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
    msg.setTimeStamp(0.0546078134192);
    msg.setSource(56073U);
    msg.setSourceEntity(32U);
    msg.setDestination(60478U);
    msg.setDestinationEntity(240U);
    msg.timestamp_last_service = 0.0851095963049;
    msg.time_next_service = 0.850683842567;
    msg.time_motor_next_service = 0.652646417281;
    msg.time_idle_ground = 0.223370118274;
    msg.time_idle_air = 0.507633949096;
    msg.time_idle_water = 0.779627474357;
    msg.time_idle_underwater = 0.784294050993;
    msg.time_idle_unknown = 0.951995470342;
    msg.time_motor_ground = 0.901449203877;
    msg.time_motor_air = 0.527081000785;
    msg.time_motor_water = 0.985857192797;
    msg.time_motor_underwater = 0.559393677854;
    msg.time_motor_unknown = 0.0593084711027;
    msg.rpm_min = -679;
    msg.rpm_max = -27870;
    msg.depth_max = 0.0408058435533;

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
    msg.setTimeStamp(0.882530708594);
    msg.setSource(21543U);
    msg.setSourceEntity(113U);
    msg.setDestination(41871U);
    msg.setDestinationEntity(163U);
    msg.timestamp_last_service = 0.264084279651;
    msg.time_next_service = 0.417520738677;
    msg.time_motor_next_service = 0.695182660905;
    msg.time_idle_ground = 0.70111096298;
    msg.time_idle_air = 0.249614235951;
    msg.time_idle_water = 0.324302551103;
    msg.time_idle_underwater = 0.944962689792;
    msg.time_idle_unknown = 0.406192439129;
    msg.time_motor_ground = 0.719054851306;
    msg.time_motor_air = 0.456899738889;
    msg.time_motor_water = 0.519425268548;
    msg.time_motor_underwater = 0.878115011713;
    msg.time_motor_unknown = 0.910537824025;
    msg.rpm_min = 21422;
    msg.rpm_max = -23420;
    msg.depth_max = 0.969675919576;

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
    msg.setTimeStamp(0.926557527444);
    msg.setSource(63951U);
    msg.setSourceEntity(74U);
    msg.setDestination(49497U);
    msg.setDestinationEntity(87U);
    msg.severity = 190U;
    msg.text.assign("KGESRLASRPY");

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
    msg.setTimeStamp(0.145108916835);
    msg.setSource(26545U);
    msg.setSourceEntity(232U);
    msg.setDestination(28120U);
    msg.setDestinationEntity(7U);
    msg.severity = 157U;
    msg.text.assign("HANYFDHBCBXKYRPLETEMQKGJQZNWMRAVBGJBSDTNUBLVTPUVQRKUUVPCSJFLKIIJMQAVSOWGSXZPYZGYEXOWLRUXTNDSHADOQBLGWNVTKZIZISZFCKWYEZJWJHPGKMYHKSXCDETIRDOXALYJYMOTRFNAF");

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
    msg.setTimeStamp(0.253878875242);
    msg.setSource(845U);
    msg.setSourceEntity(242U);
    msg.setDestination(5090U);
    msg.setDestinationEntity(143U);
    msg.severity = 62U;
    msg.text.assign("PALZNXVJUGYXGFUAEEQBFSMPIFKDVPJIXJJWHSRTTHLZCHWBXTQMWWEGVOGPNZVUMAMECZLXNHGIJLPJOHKTBTYIFKLCNMBAKDXVJUENOQOHSPXRHYGRIDZJWXVQEUNNDKFNKDWBZOZSASLPRQKSBKEQGSDCLTCMCTNLVRBXFDXTYCIQEGRYVMOQILHH");

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
    msg.setTimeStamp(0.75952221652);
    msg.setSource(18072U);
    msg.setSourceEntity(140U);
    msg.setDestination(5707U);
    msg.setDestinationEntity(129U);
    msg.channel = 117;
    msg.value = -1583668268;
    msg.gain = 225U;

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
    msg.setTimeStamp(0.467930310189);
    msg.setSource(32315U);
    msg.setSourceEntity(94U);
    msg.setDestination(22365U);
    msg.setDestinationEntity(180U);
    msg.channel = 66;
    msg.value = 125384751;
    msg.gain = 167U;

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
    msg.setTimeStamp(0.00545645636329);
    msg.setSource(49991U);
    msg.setSourceEntity(240U);
    msg.setDestination(63059U);
    msg.setDestinationEntity(15U);
    msg.channel = 31;
    msg.value = -1065044062;
    msg.gain = 18U;

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
