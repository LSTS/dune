//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: cdc4c6dfe2baed8395138f0b1b8e1910                            *
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
    msg.setTimeStamp(0.00390351682227);
    msg.setSource(52843U);
    msg.setSourceEntity(86U);
    msg.setDestination(56277U);
    msg.setDestinationEntity(172U);
    msg.state = 88U;
    msg.flags = 89U;
    msg.description.assign("CVTTUHYMERXAWPPGWZMVPBDODJKHYRJIGUHFDONIVULHFDYRQIDPKT");

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
    msg.setTimeStamp(0.134103972944);
    msg.setSource(17547U);
    msg.setSourceEntity(47U);
    msg.setDestination(59508U);
    msg.setDestinationEntity(49U);
    msg.state = 9U;
    msg.flags = 17U;
    msg.description.assign("FIERFYDSTHNOURELRZVPMIXTFGROSPGSIQKEZCXOVJLCPAIDATWYEUVNCVQWHZOBNGKSWZXHNYUW");

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
    msg.setTimeStamp(0.757359434656);
    msg.setSource(20306U);
    msg.setSourceEntity(100U);
    msg.setDestination(64458U);
    msg.setDestinationEntity(46U);
    msg.state = 32U;
    msg.flags = 171U;
    msg.description.assign("ODYUKPMYLCAEHBJMSTJPXGZAZNKACBSXECYTSUIDCZWBZDVPRTMPLYVVBDNYJBOESZWQJUYAZFDCQPHLDYULOQGBBWSKIGGTASSSRQNZQYOFHRSPRLOERGIFTMFITBJQRNXNMTAQ");

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
    msg.setTimeStamp(0.213799359141);
    msg.setSource(31431U);
    msg.setSourceEntity(139U);
    msg.setDestination(65235U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.862687888992);
    msg.setSource(39844U);
    msg.setSourceEntity(178U);
    msg.setDestination(40350U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.902809071991);
    msg.setSource(40220U);
    msg.setSourceEntity(157U);
    msg.setDestination(10331U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.901634836976);
    msg.setSource(15225U);
    msg.setSourceEntity(31U);
    msg.setDestination(44508U);
    msg.setDestinationEntity(72U);
    msg.id = 183U;
    msg.label.assign("UHWGNRQBXTYHUAUQNIWMSDCVBRZXIDYBTKTZLLNEHHKIUOTHDWFQTREVKKETLCGQYLXLSGAVYQWGQWCKMIYBGOEUTZTUGJZYINKISNOFHNRUJAHNSIUQBWIBAXOBSQRDOAFMAJORPPSNVNCEOOPOSIBJSVYWDVFAPXCPPCVYGHVDCXNEWXHYRZTZMOPKYTXAPFKWJMBJFLVJDKAQBJZAUMWDRQRECEJVLF");
    msg.component.assign("WQJUYFUXHIWBVPJKKKHYUYBGAVWA");
    msg.act_time = 39581U;
    msg.deact_time = 268U;

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
    msg.setTimeStamp(0.723167777669);
    msg.setSource(43410U);
    msg.setSourceEntity(45U);
    msg.setDestination(64368U);
    msg.setDestinationEntity(221U);
    msg.id = 243U;
    msg.label.assign("NHCDYJTPABJBAGCUAJMXFGPEYISZZQCVMCUZLOJSNCBEMGSBXVQMEKNSTIVRYULGXIUWMPKTUTKZASXHKYHJSLUTHJLUEZKZILGGDHK");
    msg.component.assign("DAANXVFEONYMFUWYRZFVGMKUSVKJAEXDMRWOBGGLSXZKNNGIMQXHETQAOCYLCMCARUQTDEJMNZXGBPKQPYANZLLJTDFAFXXYQDZRYHTHWKSGJPCIVGIUAFGMYBQXOFQIQLOSAWSWMNIMITNKLZDFRLBQWLPVJMSEDPVUGRBPCEUXZSEBHIRCEJNBQYJ");
    msg.act_time = 64126U;
    msg.deact_time = 16479U;

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
    msg.setTimeStamp(0.410059298683);
    msg.setSource(62492U);
    msg.setSourceEntity(227U);
    msg.setDestination(52791U);
    msg.setDestinationEntity(91U);
    msg.id = 97U;
    msg.label.assign("FEXRDBKALLZGHYHAJWURDPYHNISWQGCXRRTIPMXOIUJETTJHOTONQ");
    msg.component.assign("HYDQVLYBVOPYHVIKNUNAFWSEYHJKKMNQGQCPWDIASMFBBOOLAEQRCYPDUJGRBNIKEEJFUIUMEANNJXBUOXFZURRZHMCXMSLFNDCXZMFFPNZHPIQVWTUTGAGSEJLCKGFCKWJERSQZTASKEARVSCAOOZGPWMQYHVHHXDRPLZULZBDZDOKGHTWBWSEWVAJGRGEOWKXLJITZIYXMRNCBNPTDBYLTXDCJHLIVDUVQWTTKGSJRIB");
    msg.act_time = 20329U;
    msg.deact_time = 15927U;

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
    msg.setTimeStamp(0.609862911355);
    msg.setSource(36526U);
    msg.setSourceEntity(204U);
    msg.setDestination(52574U);
    msg.setDestinationEntity(132U);
    msg.id = 42U;

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
    msg.setTimeStamp(0.670876476404);
    msg.setSource(12757U);
    msg.setSourceEntity(225U);
    msg.setDestination(5300U);
    msg.setDestinationEntity(232U);
    msg.id = 194U;

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
    msg.setTimeStamp(0.662430462717);
    msg.setSource(9930U);
    msg.setSourceEntity(19U);
    msg.setDestination(5467U);
    msg.setDestinationEntity(163U);
    msg.id = 129U;

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
    msg.setTimeStamp(0.43020208449);
    msg.setSource(29635U);
    msg.setSourceEntity(51U);
    msg.setDestination(11932U);
    msg.setDestinationEntity(69U);
    msg.op = 113U;
    msg.list.assign("YUOKPQCAHDFLKEIDBKAKQLVNJHPURDXMGOXBNZGWSGKSBWRWOAZCHEPQHNSEPYVYWTIVYRHGHPBFCFEMCRKGOXIGZRXJHHOJAIMBVNX");

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
    msg.setTimeStamp(0.205792216421);
    msg.setSource(55353U);
    msg.setSourceEntity(106U);
    msg.setDestination(14457U);
    msg.setDestinationEntity(241U);
    msg.op = 76U;
    msg.list.assign("LHZJOLXHCTVXJZBRANRFGYAFJJQQMXBXZESZVTBVAZCCINABOUUIOUBKBZVINUMTMMECIYFRKUEAMLV");

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
    msg.setTimeStamp(0.17365634281);
    msg.setSource(57132U);
    msg.setSourceEntity(193U);
    msg.setDestination(17172U);
    msg.setDestinationEntity(49U);
    msg.op = 156U;
    msg.list.assign("ECHMVVDIZMOTSFVZHKMILOBGFRYXNDKMICYMTSHFYXIJCYUSJQLWLJOXANVHNWWPOKXTJDVCYEHYGTUIQXEVXCTCMSAELNULDQNPQBPFBGGGLNQXCZQMFWESBIMURZZKJUGQWAKRTRRZTTAPASOEGDWBWRHHBVAJGROPPYUKBFNFSVPDLKFTMSYRJQURGPSLYNQBWFWDDSGOMZEAWTHHEOBLUKDFXNYRCVEOAICZPIDKNVPOJLACJ");

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
    msg.setTimeStamp(0.0284806256905);
    msg.setSource(61978U);
    msg.setSourceEntity(146U);
    msg.setDestination(34620U);
    msg.setDestinationEntity(141U);
    msg.value = 217U;

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
    msg.setTimeStamp(0.342158699437);
    msg.setSource(17594U);
    msg.setSourceEntity(167U);
    msg.setDestination(58521U);
    msg.setDestinationEntity(221U);
    msg.value = 201U;

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
    msg.setTimeStamp(0.97195094036);
    msg.setSource(46526U);
    msg.setSourceEntity(2U);
    msg.setDestination(38027U);
    msg.setDestinationEntity(166U);
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
    msg.setTimeStamp(0.481791721121);
    msg.setSource(48179U);
    msg.setSourceEntity(194U);
    msg.setDestination(64747U);
    msg.setDestinationEntity(22U);
    msg.consumer.assign("FZDBKLWHRXDXKJAZASKCNLSPMGMCXIYCNANVZQCLOXGQOIYYUXOBGJECMSVMGDOXRQDFDUETQOANVGVQZTWUCLSPWEPAELADPSKWCEFSUB");
    msg.message_id = 6693U;

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
    msg.setTimeStamp(0.327135556631);
    msg.setSource(11473U);
    msg.setSourceEntity(149U);
    msg.setDestination(15010U);
    msg.setDestinationEntity(193U);
    msg.consumer.assign("YSFVYCPBERTLSFVBOQEKCLSSTOWVMAIJBMJSDBJTXPGEBYVJIGEGXUMGNUTCXLVNTMFNNQQULHBAOWNWZOFIIGHQYDZKRZEXTEOCPPRODLUCOHYGVOIDHNAWJMGFKJIXTYQHQBLAAWHSCAHUNIEYQCVKQYROREUWYAKFHHUZZPSANSKJZMXWEKZRIDBDMBGZLWQLNM");
    msg.message_id = 6961U;

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
    msg.setTimeStamp(0.496212718104);
    msg.setSource(51932U);
    msg.setSourceEntity(154U);
    msg.setDestination(61271U);
    msg.setDestinationEntity(64U);
    msg.consumer.assign("HJWSHZMACYMZWAJLATKIALOZKFUCCOVUGJGXZEMJWPXMGCKLLDNRYZZZWYVDQVUTFZGPSIDETFRKYXPYUMPABRBDBLBNKILHLACXHNOGHPTQMBIGBMBRSIADRFNBCKTFWYPIUFRVPWJEH");
    msg.message_id = 21854U;

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
    msg.setTimeStamp(0.622550941033);
    msg.setSource(29424U);
    msg.setSourceEntity(3U);
    msg.setDestination(62352U);
    msg.setDestinationEntity(173U);
    msg.type = 49U;

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
    msg.setTimeStamp(0.431663657363);
    msg.setSource(11683U);
    msg.setSourceEntity(165U);
    msg.setDestination(62193U);
    msg.setDestinationEntity(88U);
    msg.type = 145U;

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
    msg.setTimeStamp(0.2388739276);
    msg.setSource(26613U);
    msg.setSourceEntity(119U);
    msg.setDestination(26196U);
    msg.setDestinationEntity(197U);
    msg.type = 63U;

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
    msg.setTimeStamp(0.164690715979);
    msg.setSource(22288U);
    msg.setSourceEntity(122U);
    msg.setDestination(14929U);
    msg.setDestinationEntity(84U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.666384549858);
    msg.setSource(40105U);
    msg.setSourceEntity(148U);
    msg.setDestination(38025U);
    msg.setDestinationEntity(22U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.190513714272);
    msg.setSource(53957U);
    msg.setSourceEntity(196U);
    msg.setDestination(18829U);
    msg.setDestinationEntity(87U);
    msg.op = 15U;

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
    msg.setTimeStamp(0.293537455654);
    msg.setSource(61301U);
    msg.setSourceEntity(53U);
    msg.setDestination(43588U);
    msg.setDestinationEntity(67U);
    msg.total_steps = 214U;
    msg.step_number = 24U;
    msg.step.assign("KMPEVXBYYSJJKPOCHLYGBTRFRXEYAWHYNVUSXWDGIWCYNDECZAZNQTTVCMIFKGULWTUNBFFFPIUSBYHEHYYCASDWOGQVLSFCKPIEASNEBKZRBLARJXIORQACXUVJHUWEZTDQSNVZOETHLGUJQVFRVRDXWMPKONKJTZAEDWEQMMJQXZKZLNTHPGPYSOGHRVQWNUOJBMGACIROXDHRMXUMPIIJPGTSCOKB");
    msg.flags = 72U;

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
    msg.setTimeStamp(0.283958088763);
    msg.setSource(45905U);
    msg.setSourceEntity(213U);
    msg.setDestination(17526U);
    msg.setDestinationEntity(90U);
    msg.total_steps = 247U;
    msg.step_number = 221U;
    msg.step.assign("ZJFSGESQCXURWLC");
    msg.flags = 233U;

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
    msg.setTimeStamp(0.779798962405);
    msg.setSource(43214U);
    msg.setSourceEntity(21U);
    msg.setDestination(37549U);
    msg.setDestinationEntity(122U);
    msg.total_steps = 0U;
    msg.step_number = 225U;
    msg.step.assign("SBMDAYCMYWSMLQDKZUXQWVBRXKXYIQRDMYSGQAIOPFTXTZZRRDZTEWOWKQGVJEFNBSJUYKMDUKJLGAZEGWUIYYVPUCWTTR");
    msg.flags = 68U;

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
    msg.setTimeStamp(0.0414005362852);
    msg.setSource(65362U);
    msg.setSourceEntity(167U);
    msg.setDestination(34106U);
    msg.setDestinationEntity(63U);
    msg.state = 3U;
    msg.error.assign("CUVKCSFVPNLSIPFFUTGWFHVXYUKGDCEYSPJTWJKQWMABOWGJJDYLHZCYFRGAHDCOQSQZZXZEQLUYEGGUQIANXZZLOVGERIFGQJAPPMNSWMOTINESUPKFNABNBRHHADRJXVOWKDEKTXIYOTUDIWHFUELLMFEPJGMFDGPBRBKJXIVYBKRHAVHBAHLZABEOQSMLTWMDYKCVNNBPSOTIZMQWTMPRCV");

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
    msg.setTimeStamp(0.441501726054);
    msg.setSource(55023U);
    msg.setSourceEntity(20U);
    msg.setDestination(65113U);
    msg.setDestinationEntity(213U);
    msg.state = 52U;
    msg.error.assign("ATWSSCUGBZVBQUDUPMNXYYKNV");

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
    msg.setTimeStamp(0.287556225715);
    msg.setSource(8932U);
    msg.setSourceEntity(58U);
    msg.setDestination(28745U);
    msg.setDestinationEntity(153U);
    msg.state = 71U;
    msg.error.assign("WGRLIXDZFZESESPMVDCMFPFQLLXMPKBXJKKZJBWVGYHLFUVVFTEGJCNXOJIHDPURNBYDQAZTDGUJRJBNXLIOCXSBYSPCBEOHSQIRBRUIURNZKHIEUVALYAQUPPZKMTYGVOCNHGJKBNVOMCSQXWSVCDQUOFTIZGFUWWSYNJHWYWLAOYKFBHZRKOZXEPAGH");

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
    msg.setTimeStamp(0.532840315887);
    msg.setSource(3488U);
    msg.setSourceEntity(117U);
    msg.setDestination(35543U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.573718091747);
    msg.setSource(10036U);
    msg.setSourceEntity(41U);
    msg.setDestination(63462U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.766293105495);
    msg.setSource(51589U);
    msg.setSourceEntity(40U);
    msg.setDestination(52666U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.221277125457);
    msg.setSource(24173U);
    msg.setSourceEntity(93U);
    msg.setDestination(29366U);
    msg.setDestinationEntity(170U);
    msg.op = 20U;
    msg.speed_min = 0.202765663847;
    msg.speed_max = 0.890632229425;
    msg.long_accel = 0.755301649043;
    msg.alt_max_msl = 0.402432773941;
    msg.dive_fraction_max = 0.00454599306874;
    msg.climb_fraction_max = 0.779466575229;
    msg.bank_max = 0.355738063805;
    msg.p_max = 0.738713503751;
    msg.pitch_min = 0.599554305542;
    msg.pitch_max = 0.778016249667;
    msg.q_max = 0.630409929717;
    msg.g_min = 0.87944006882;
    msg.g_max = 0.890162290227;
    msg.g_lat_max = 0.908178705935;
    msg.rpm_min = 0.379916209636;
    msg.rpm_max = 0.607908077914;
    msg.rpm_rate_max = 0.604372742776;

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
    msg.setTimeStamp(0.38605822967);
    msg.setSource(18847U);
    msg.setSourceEntity(103U);
    msg.setDestination(34024U);
    msg.setDestinationEntity(115U);
    msg.op = 123U;
    msg.speed_min = 0.128178831744;
    msg.speed_max = 0.0498835802197;
    msg.long_accel = 0.782372892015;
    msg.alt_max_msl = 0.986574081201;
    msg.dive_fraction_max = 0.257906699576;
    msg.climb_fraction_max = 0.66785736526;
    msg.bank_max = 0.0794759482016;
    msg.p_max = 0.233444074523;
    msg.pitch_min = 0.0681309701432;
    msg.pitch_max = 0.284649516006;
    msg.q_max = 0.865110686273;
    msg.g_min = 0.691241060424;
    msg.g_max = 0.261729506121;
    msg.g_lat_max = 0.707633558839;
    msg.rpm_min = 0.578231511077;
    msg.rpm_max = 0.506874506082;
    msg.rpm_rate_max = 0.329326693473;

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
    msg.setTimeStamp(0.212616325189);
    msg.setSource(7817U);
    msg.setSourceEntity(7U);
    msg.setDestination(9412U);
    msg.setDestinationEntity(125U);
    msg.op = 225U;
    msg.speed_min = 0.963591635826;
    msg.speed_max = 0.847150596978;
    msg.long_accel = 0.77774377103;
    msg.alt_max_msl = 0.380130262554;
    msg.dive_fraction_max = 0.529402370463;
    msg.climb_fraction_max = 0.635775340179;
    msg.bank_max = 0.624808201743;
    msg.p_max = 0.137501198319;
    msg.pitch_min = 0.320194815151;
    msg.pitch_max = 0.958658521918;
    msg.q_max = 0.297741025003;
    msg.g_min = 0.0448188420344;
    msg.g_max = 0.509689742387;
    msg.g_lat_max = 0.0598453954087;
    msg.rpm_min = 0.481370322275;
    msg.rpm_max = 0.732156324855;
    msg.rpm_rate_max = 0.138617826867;

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
    msg.setTimeStamp(0.851993217836);
    msg.setSource(29070U);
    msg.setSourceEntity(108U);
    msg.setDestination(22735U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.615328813365);
    msg.setSource(3873U);
    msg.setSourceEntity(201U);
    msg.setDestination(35100U);
    msg.setDestinationEntity(174U);
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 65246U;
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
    msg.setTimeStamp(0.90688983053);
    msg.setSource(3128U);
    msg.setSourceEntity(126U);
    msg.setDestination(34502U);
    msg.setDestinationEntity(69U);
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("LZMMBGRBNKAXFKVWRFTUQEFHTOYRURFUVJWYOEDEYNGHIXPONCJZCSEJWZIMSWGJTNTVIGWGQGGCYAMFITSKUPRJB");
    tmp_msg_0.plan_size = 63340U;
    tmp_msg_0.change_time = 0.255536032721;
    tmp_msg_0.change_sid = 4920U;
    tmp_msg_0.change_sname.assign("VPRKYXLMMVTJZCQGBWGNSPASVCJOWEE");
    const char tmp_tmp_msg_0_0[] = {-5, -83, -45, 40, -106, -33, 92, 3, 82, 23, 125, -70, 61, -58, 122, 35, -73, 90, 73, 4, -119, 77, -29, -95, 43, -33, -91, 64, 10, 54, 51, -65, -7, 43, -82, -84, -127, 53, -83, 30, 42, 82, -75, -26, -21, -65, 31, 116, -127, -80, 103, -64, -96, 50, 117, 86, 78, -71, -57, -112, 94, 101, -20, 112, 34, -33, 18, -2, 42, -75, -27, 87, -25, 89, -39, 4, -88, -44};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.18116574091);
    msg.setSource(17374U);
    msg.setSourceEntity(204U);
    msg.setDestination(1586U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.529023568913;
    msg.lon = 0.991787204081;
    msg.height = 0.960612946902;
    msg.x = 0.676912718425;
    msg.y = 0.531537550432;
    msg.z = 0.667437818384;
    msg.phi = 0.0902157109894;
    msg.theta = 0.388252397504;
    msg.psi = 0.232925870287;
    msg.u = 0.517128351737;
    msg.v = 0.288485201812;
    msg.w = 0.49744478075;
    msg.p = 0.0526409940337;
    msg.q = 0.721639177317;
    msg.r = 0.998351587924;
    msg.svx = 0.184027632967;
    msg.svy = 0.484754984465;
    msg.svz = 0.264520200122;

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
    msg.setTimeStamp(0.603313204051);
    msg.setSource(8434U);
    msg.setSourceEntity(123U);
    msg.setDestination(33549U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.578087662633;
    msg.lon = 0.914501689154;
    msg.height = 0.224476904371;
    msg.x = 0.475555808929;
    msg.y = 0.140356803745;
    msg.z = 0.412057552381;
    msg.phi = 0.530646142301;
    msg.theta = 0.0145693879715;
    msg.psi = 0.640439288144;
    msg.u = 0.764266604411;
    msg.v = 0.289912860961;
    msg.w = 0.58853482787;
    msg.p = 0.691607910576;
    msg.q = 0.7608193627;
    msg.r = 0.061301565112;
    msg.svx = 0.507007711461;
    msg.svy = 0.73050419959;
    msg.svz = 0.593331464035;

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
    msg.setTimeStamp(0.965712528143);
    msg.setSource(48053U);
    msg.setSourceEntity(82U);
    msg.setDestination(9923U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.0164081941642;
    msg.lon = 0.166963554884;
    msg.height = 0.230607699355;
    msg.x = 0.262998551658;
    msg.y = 0.0409889323402;
    msg.z = 0.885422050368;
    msg.phi = 0.749387927255;
    msg.theta = 0.469636430009;
    msg.psi = 0.76850533728;
    msg.u = 0.659716297044;
    msg.v = 0.180903452726;
    msg.w = 0.569308524329;
    msg.p = 0.149912766795;
    msg.q = 0.858413549046;
    msg.r = 0.785212538722;
    msg.svx = 0.638377821832;
    msg.svy = 0.209049641814;
    msg.svz = 0.379956028892;

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
    msg.setTimeStamp(0.746287488643);
    msg.setSource(24466U);
    msg.setSourceEntity(85U);
    msg.setDestination(18993U);
    msg.setDestinationEntity(103U);
    msg.op = 38U;
    msg.entities.assign("LKSKVVZBPCXQWZDNBJEUUYJXPOFUICIKNWAAIJQAHMVXDRYRJITMCKRTEGVAXOYAVGNTUH");

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
    msg.setTimeStamp(0.575444488321);
    msg.setSource(9560U);
    msg.setSourceEntity(181U);
    msg.setDestination(31664U);
    msg.setDestinationEntity(59U);
    msg.op = 186U;
    msg.entities.assign("RMZXESGFCMTCCUJCIYBHBSDRHPMOELDYPNMYQQHDDFAVRBILKTYKQSEHPQUVRRZJWJCFVIUSGLXDFOZOSWWENSZXYNRXPIVUINLITHGSDLXQWOCWYBOZFYYYNXPHKASGXZEAQZLZGWRFSGOMATKLKWMTBBNF");

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
    msg.setTimeStamp(0.217368392237);
    msg.setSource(38035U);
    msg.setSourceEntity(8U);
    msg.setDestination(36480U);
    msg.setDestinationEntity(20U);
    msg.op = 42U;
    msg.entities.assign("QYHPPWLXLPIJQHNWVMNYBGRWVDNFIRZWCHMEMVUVKTSWOUVZVNTYKKHZDLHFBQPTDSXKIXXPAIEXSCCGUYVQCRDKMLBUIZJBJGFMTKLZOLCOUEJCOSUTJPKHGESJGXSFJPSRXTRPLRBUDJHQRYPGERWVFCNTIWLHTQOYQMUXLQREUNDYHJOCJKFDSZCFZYNGBTEAKGMEAFADEOBBRYDGWZSAHWFLNEXXAOGZVFZKIADABOPNBAMIWANYISCV");

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
    msg.setTimeStamp(0.514267221831);
    msg.setSource(46161U);
    msg.setSourceEntity(218U);
    msg.setDestination(10614U);
    msg.setDestinationEntity(213U);
    msg.type = 128U;
    msg.speed = 65125U;
    const char tmp_msg_0[] = {-13, -118, -57, 106, 20, -98, -67, 12, 41, -64, 83, 39, 19, -101, -31, -50, 8, -92, 26, -126, -38, -110, -84, 61, 50, -119, -36, -20, 83, -73, 66, 88, 5, 52, 91, 106, -7, -7, -77, 107, 100, -83, -48, -117, 60, -35, 66, 47, -125, -74, -64, -120, -82, -4, 41, -124, -51, -61, -109, 32, -59, 108, 109, -109, 12, 86, -12, -13, -27, -73, -14, -32, -83, -21, 14, -112, -61, -106, 54, -77, 92, 125, -30, 1, -102, 38, -77, -71, 48, -121, -123, -118, 29, -86, -69, -4, -78, -78, 52, 82, 16, -52, 9, 100, -65, -122, -19, 32, -39, 97, -70, 37, -77, 5, -83, -71, -18, -49, 6, -59, -111, 95, 44, 3, 12, 92, 30, -27, 16, -101, 30, -118, -120, 33, -80, 14, 72, -72, 86, 47, 80, -98, -60, -58, 59, -40, -101, 62, -38, 19, -19, -7, 67, 104, 14, 117, -22, 34, 20, 16, 124};
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
    msg.setTimeStamp(0.483531077957);
    msg.setSource(50403U);
    msg.setSourceEntity(74U);
    msg.setDestination(6791U);
    msg.setDestinationEntity(245U);
    msg.type = 111U;
    msg.speed = 30383U;
    const char tmp_msg_0[] = {-109, 6, -20, 102, -116, -18, 3, -97, -6, -62, 59, -117, -8, 91, 48, -38, -16, 12, 77, -94, -128, -8, 66, 73, -71, 126, 123, -70, 3, 101, -100, 103, -105, 35, 61, -97, -31, -25, -127, -41, 60, -121, 45, 110, -92, -22, 107, -97, -80, 15, -2, -76, 48, 61, 13, 118, -26, -16, -127, 92, -115, 5, -86, 17, -125, -80, -70, 57, 0, 108, -114, -1, -98, 17, -88, -42, -39, 34, -91, -122, 21, 114, -62, 55, 51, -106, 105, 42, -91, -81, 36, 15, -107, -77, -81, -82, -13, 105, -3, 15, 31, 98, 42, -64, 84, -38, -67, 68, 113, -15, 111, 68, -104, 82, 92, -77, -33, -33, -4, -7, -60, 80, 15, 70};
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
    msg.setTimeStamp(0.93986654321);
    msg.setSource(3516U);
    msg.setSourceEntity(90U);
    msg.setDestination(15895U);
    msg.setDestinationEntity(92U);
    msg.type = 187U;
    msg.speed = 49414U;
    const char tmp_msg_0[] = {-12, 106, 104, 16, -124, 118, -47, -39, -7, 3, 38, -5, 85, 98, 53, -73, -120, 28, 54, 126, -39, 6, -35, -126, -24, -71, 57, 6, -50, -70, -18, -99, 44, 12, -2, 103, 0, 67, 88, 94, -12, 9, 69, -62, 8, -30, 104, -19, -67, 94, 96, -18, -105, 28, 90, 99, -44, 20, 102, -105, 89, -51, -51, 72, -41, -100, -77, -49, 23, -7, 71, -76, 25, -4, 39, -11, -66, -93, -18, 8, 35, 12, 7, 37, -46, 4, -109, 88, 70, -2, 63, -88, -2, -109, -24, 12, -13, 114, 104, 109, -4, 28, 55, -61, 34, 98, 41, 14, -87, 15, -93, -91, 52, 95, 99, 63, 11, -23, 79, 75, -38, 69, 92, -110, -64, 80, -26, -101, -104, -14, 124, 23, 73, -17, -112, 59, 57, 106, -87, -7, -79, -123, -94, 103, 117, 38, -32, -88};
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
    msg.setTimeStamp(0.621729347356);
    msg.setSource(61500U);
    msg.setSourceEntity(252U);
    msg.setDestination(64540U);
    msg.setDestinationEntity(167U);
    msg.op = 42U;
    msg.tas2acc_pgain = 0.954369113657;
    msg.bank2p_pgain = 0.300288662004;

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
    msg.setTimeStamp(0.733394231919);
    msg.setSource(23878U);
    msg.setSourceEntity(121U);
    msg.setDestination(13325U);
    msg.setDestinationEntity(94U);
    msg.op = 222U;
    msg.tas2acc_pgain = 0.900035696749;
    msg.bank2p_pgain = 0.8500537403;

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
    msg.setTimeStamp(0.243812072923);
    msg.setSource(43057U);
    msg.setSourceEntity(130U);
    msg.setDestination(11231U);
    msg.setDestinationEntity(8U);
    msg.op = 173U;
    msg.tas2acc_pgain = 0.101494272604;
    msg.bank2p_pgain = 0.602117704586;

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
    msg.setTimeStamp(0.0439330026776);
    msg.setSource(57720U);
    msg.setSourceEntity(179U);
    msg.setDestination(17205U);
    msg.setDestinationEntity(197U);
    msg.available = 4102260355U;
    msg.value = 54U;

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
    msg.setTimeStamp(0.415216524738);
    msg.setSource(61133U);
    msg.setSourceEntity(251U);
    msg.setDestination(49991U);
    msg.setDestinationEntity(117U);
    msg.available = 2594860993U;
    msg.value = 56U;

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
    msg.setTimeStamp(0.397920959677);
    msg.setSource(29430U);
    msg.setSourceEntity(19U);
    msg.setDestination(2385U);
    msg.setDestinationEntity(131U);
    msg.available = 3408032668U;
    msg.value = 23U;

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
    msg.setTimeStamp(0.801773842385);
    msg.setSource(47625U);
    msg.setSourceEntity(0U);
    msg.setDestination(24763U);
    msg.setDestinationEntity(220U);
    msg.op = 219U;
    msg.snapshot.assign("JZBPVTHPNCB");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.709826703375;
    tmp_msg_0.lon = 0.467591590041;
    tmp_msg_0.depth = 0.441922647241;
    tmp_msg_0.roll = 0.104734154532;
    tmp_msg_0.pitch = 0.563670548707;
    tmp_msg_0.yaw = 0.668503353495;
    tmp_msg_0.rcp_time = 0.218698600061;
    tmp_msg_0.sid.assign("TASKVGMCLZYBYPVKFDBTVDSQHSCVCNWFZKRBPVVEPDUAKUQKWEGZBUSFMCKAOMCRIFXMPVMFBPUW");
    tmp_msg_0.s_type = 248U;
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
    msg.setTimeStamp(0.83612024361);
    msg.setSource(44975U);
    msg.setSourceEntity(57U);
    msg.setDestination(33348U);
    msg.setDestinationEntity(252U);
    msg.op = 163U;
    msg.snapshot.assign("SKCBHYKLCYGMMTWZUSDLWCQEXDXJOVKUKJRWHFVZVGRQWSDFFMLCJKIILUFUOAPJXYYYRFCNASIRPVIGUVORKECNHT");
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("APMSCVFTKBVQOTZOHOHFTUTGBXLCIFKLJVHISLMVYMHDXYEWBGLPRBLOCFVEDNNIWYUYBJQYUALFFVTQXVCADOTUHPQXYZXTZHHCUXKGFURCNTGITXJGZPDIDARDSOCKRJOQVIZEMKBPWNALWLLJEPZBTGKEAJROQWAXPJKDSNMUQYHZBZGJGESMPFURGHIJANXMXPYMUMGEFQURKVOQRHWMCZISYAAB");
    tmp_msg_0.type = 60U;
    tmp_msg_0.op = 107U;
    tmp_msg_0.group_name.assign("NRCYDAPSIVMQJRKOUPDZGVBXQRXEZGRETGSMZACAWHNKSOVYEDXJEJKYBXNNVIMVWPQNCSVFKSETXUYFKCOIDNWMBYESLBCRTOROHQUGCJKXERATXUHMHICDMHVQVTSYXUWPHULVZOWUJKJCJXEFDBLZOIQZYSQJWPZYGUGNXFSITIMQDHPSABABLGYWZPTLLDKIJRBIGHGLFGHYQAKZTZDKFABNNNJVTPRUUTLFWWCIFMLFHLOMWRAEEMO");
    tmp_msg_0.plan_id.assign("ZNKGXFREPSCBMJKKXNDIEXKDYSTYYLTHIIVINBUURPQVREAXCJCVNGCMACRSFHRUDUGFAOJVCQSOKTRHXIQSNFJLLWLADAEEBQLIXTDKZHEBPRWUTOHIBBWNJCZDXZBIZEXAURRDUNTITHZYQFGWWQWGYAMWJOSNGVIOZBKPCQPFKGOVETTRCMYKSSFKJYV");
    tmp_msg_0.description.assign("ECDIFPBOMDJCUKQKOBSZTUFFFGCEHEQWEYKOGOVWOTNROHNUKRLAVPYOXDCTUIGZNHCJLACRJTBSAIMPKVNHUNBRG");
    tmp_msg_0.reference_frame = 180U;
    tmp_msg_0.leader_bank_lim = 0.0440566331067;
    tmp_msg_0.leader_speed_min = 0.379720699341;
    tmp_msg_0.leader_speed_max = 0.503055507145;
    tmp_msg_0.leader_alt_min = 0.0842152839569;
    tmp_msg_0.leader_alt_max = 0.609379811906;
    tmp_msg_0.pos_sim_err_lim = 0.948831629677;
    tmp_msg_0.pos_sim_err_wrn = 0.847171295685;
    tmp_msg_0.pos_sim_err_timeout = 49372U;
    tmp_msg_0.converg_max = 0.360968655065;
    tmp_msg_0.converg_timeout = 36709U;
    tmp_msg_0.comms_timeout = 52574U;
    tmp_msg_0.turb_lim = 0.176909884947;
    tmp_msg_0.custom.assign("TUNTSCTLIMOAVXKMGADFJHJHGZQAZNRPYKXRAFXBJXLNEFED");
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
    msg.setTimeStamp(0.324697175113);
    msg.setSource(19760U);
    msg.setSourceEntity(238U);
    msg.setDestination(11321U);
    msg.setDestinationEntity(9U);
    msg.op = 162U;
    msg.snapshot.assign("GLDNYQLOEAKXMVWDTKJSNFVPQCCCZNDIELZRYNSOQZAAXHSAFMUDGPIRIDPRGVUXJQXMESTGRBHTMHNFCRWIQGPTPMLBFAQGEZGQXVEBLSWSRZZXPQGUXUOJYXUHAWRRWYBEMPJDHAYOFUWFCEEYTHISJLMVETDBNBXLHUU");
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.940875167441);
    msg.setSource(43629U);
    msg.setSourceEntity(189U);
    msg.setDestination(52625U);
    msg.setDestinationEntity(56U);
    msg.op = 45U;
    msg.name.assign("VSUAISQISNJZWLGEQPTPVZYMVQDOQONKXKKXLGATJRGDFULCZJFNFEMZSAPNKZHBUVVTMAOWNQSHOBPPCGYADBKMEMXYYFWKDIODIXDRHVCOIIRVGZEJKMUHOOQIPFRSTNUWHCINXNBUGZIMDXWCRCAXH");

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
    msg.setTimeStamp(0.690114679742);
    msg.setSource(51373U);
    msg.setSourceEntity(208U);
    msg.setDestination(26452U);
    msg.setDestinationEntity(116U);
    msg.op = 134U;
    msg.name.assign("LJRNZIYHDLTFNIMEPEVIKZJPCSWWTFSLXHPUMNQQHLWWBFYIFQMVOZCYOQTXEEUCUZYKFQUSXMTSGHPGXILYDQUOGDQJVLRFVIUNRLROGPO");

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
    msg.setTimeStamp(0.983626223458);
    msg.setSource(41878U);
    msg.setSourceEntity(67U);
    msg.setDestination(22210U);
    msg.setDestinationEntity(73U);
    msg.op = 94U;
    msg.name.assign("PBILTWKEOESQJFEKXEAPNOTDLZWBCODVJJNOOXWURMOSSJIPIHYDWBDPMKHHUFRKUINOBPDZULOKXXEVTTTYZRZFUPJASRSQTHAZIYFWLENRQGYLZTCGWKHLBNTGVJBACBELQAIAGFNDRNBBKYZGCBNZHRMMVRIKCDXUACFYNCCMMJDYUQELKPCQFIFZMYGNAGWOWHIKOVTXYJSPGJDMVFVZSVUQVJWPSQGIEUPHMXXTXWSQ");

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
    msg.setTimeStamp(0.129940851984);
    msg.setSource(7625U);
    msg.setSourceEntity(160U);
    msg.setDestination(399U);
    msg.setDestinationEntity(206U);
    msg.type = 203U;
    msg.htime = 0.0432515890826;
    msg.context.assign("FVCSWIUHIZGPYGZEEUGNRWYGDIHXZILZLCRQUCXTJGKYISUQSUKOOGFPAJBHFMTQTALAIWYPGAQSUJRXRZTTFEMSGMBAJXFLDYDUOTJVFXHFBLTIIVEJOLUPVNZLHBRKHNWZBVWKRLHCZVBZOCENAPODDCGONCSWRMGPBBNHESYHJLSYAYVCULQRADIDQPXEBDMOXMKYETMVODECMMETWFKKJOZPQHXPACRUJWFQVQIWVJBNYADF");
    msg.text.assign("TCSSBROAHPSQJGMFOXOIPUETPURPNMDNQLKFWPRZMJTAKYULVMFVOBFACBUADQBCGXRIZEGWKFXCZRHIEIBIYTLUALFPCSDQONZBKJRBKRFAJCVCYYOTHYMVIXNFDDQQHXVYZJYMUEIZ");

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
    msg.setTimeStamp(0.163295704769);
    msg.setSource(6452U);
    msg.setSourceEntity(195U);
    msg.setDestination(64959U);
    msg.setDestinationEntity(88U);
    msg.type = 156U;
    msg.htime = 0.0296587551032;
    msg.context.assign("YJRECSPTLDRQLYIFRC");
    msg.text.assign("KJDSIPCNWXCMOOXLCKLHTBFPFWWSIQYYMJUJKXRG");

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
    msg.setTimeStamp(0.698504457568);
    msg.setSource(16926U);
    msg.setSourceEntity(180U);
    msg.setDestination(17442U);
    msg.setDestinationEntity(27U);
    msg.type = 239U;
    msg.htime = 0.843375382729;
    msg.context.assign("YPTUPPRHWWIGKMJYJGEKNRGIMJOBMEUXVOCEFMHQNBSSYWRALOSHLV");
    msg.text.assign("BGLVAVMCZBHIXTGJYGKWYKPJUXTPPMFMFFNLYZPDVCRGXBLJZXDUVUIURHDVIPFEZRMUWHQUSPZIGMRLDKEWJABYSAJOBQJSKEQBGEENHKIFRAWHDMWGHZEKFSUXCYRXA");

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
    msg.setTimeStamp(0.759922820008);
    msg.setSource(5067U);
    msg.setSourceEntity(212U);
    msg.setDestination(60412U);
    msg.setDestinationEntity(90U);
    msg.command = 172U;
    msg.htime = 0.08473853828;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 63U;
    tmp_msg_0.htime = 0.575337958569;
    tmp_msg_0.context.assign("KDTGAPABIMDFQUMNWGODZBHLFWHVGGYIXXUQJKJGRPSPNOHFQJBEKENTXZWEDAMRJURVVXQZVIBYTARPWDUDGFPGSBJTCYKYYKGVHDAMCTQNBUMGJODIRPZIFPTGXZICUWUBLHCNLSOBUKX");
    tmp_msg_0.text.assign("MSONQNBZMKOQNMNXETCOOWPSMLATSYRLQWVRYMVTMLTFFCPBNREBAJZIULUDSVGWNZJISJQDQSRVVEKPJMCYDERCQCDGZHSEKJZXWDVDVXGPLKAHXMKEHBRPTWPHIFIXIFXUGCUPSBXYICZBAIRUFKJJDELQXDPLYZEVEYOXTSNPEAWNQSDBPBCKKF");
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
    msg.setTimeStamp(0.434469339912);
    msg.setSource(57626U);
    msg.setSourceEntity(237U);
    msg.setDestination(16232U);
    msg.setDestinationEntity(185U);
    msg.command = 172U;
    msg.htime = 0.824824119919;

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
    msg.setTimeStamp(0.894805831012);
    msg.setSource(11771U);
    msg.setSourceEntity(40U);
    msg.setDestination(47331U);
    msg.setDestinationEntity(252U);
    msg.command = 45U;
    msg.htime = 0.963328068596;

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
    msg.setTimeStamp(0.958068840249);
    msg.setSource(61511U);
    msg.setSourceEntity(192U);
    msg.setDestination(36537U);
    msg.setDestinationEntity(68U);
    msg.op = 64U;
    msg.file.assign("CFHRMEXUJHLVI");

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
    msg.setTimeStamp(0.133698278787);
    msg.setSource(59U);
    msg.setSourceEntity(168U);
    msg.setDestination(11032U);
    msg.setDestinationEntity(201U);
    msg.op = 194U;
    msg.file.assign("HHVRGMXETAGLYEFUOEEFUYQKNNMFAOBXHWMQASCZUYKKNXQDQSZDXANBETPVGIJQTZUSRIQJAFVYLCRRUJNFPDWRGFJOSBDCIRHAQZTBHGCSVX");

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
    msg.setTimeStamp(0.3948550507);
    msg.setSource(44115U);
    msg.setSourceEntity(148U);
    msg.setDestination(39273U);
    msg.setDestinationEntity(250U);
    msg.op = 35U;
    msg.file.assign("YZIGGDBFTIGMXUYDDFZXCKBRITYDCZVLONGFVFHYQKWICIKKEWXMUMINTANSDCBAIVZKAWGBYLAKLUYBQZPESMYLRGQKJ");

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
    msg.setTimeStamp(0.962938797633);
    msg.setSource(23245U);
    msg.setSourceEntity(132U);
    msg.setDestination(11579U);
    msg.setDestinationEntity(178U);
    msg.op = 196U;
    msg.clock = 0.250851552364;
    msg.tz = -126;

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
    msg.setTimeStamp(0.166788609902);
    msg.setSource(47382U);
    msg.setSourceEntity(251U);
    msg.setDestination(18213U);
    msg.setDestinationEntity(109U);
    msg.op = 57U;
    msg.clock = 0.382398218214;
    msg.tz = -118;

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
    msg.setTimeStamp(0.250754758404);
    msg.setSource(15434U);
    msg.setSourceEntity(34U);
    msg.setDestination(46969U);
    msg.setDestinationEntity(25U);
    msg.op = 108U;
    msg.clock = 0.58654232336;
    msg.tz = 60;

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
    msg.setTimeStamp(0.227623646225);
    msg.setSource(18955U);
    msg.setSourceEntity(223U);
    msg.setDestination(23639U);
    msg.setDestinationEntity(58U);
    msg.conductivity = 0.122044508538;
    msg.temperature = 0.53156458901;
    msg.depth = 0.78158358454;

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
    msg.setTimeStamp(0.289525148805);
    msg.setSource(11916U);
    msg.setSourceEntity(239U);
    msg.setDestination(31369U);
    msg.setDestinationEntity(61U);
    msg.conductivity = 0.229927283996;
    msg.temperature = 0.326785043283;
    msg.depth = 0.886376685773;

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
    msg.setTimeStamp(0.523723669299);
    msg.setSource(49876U);
    msg.setSourceEntity(18U);
    msg.setDestination(32177U);
    msg.setDestinationEntity(46U);
    msg.conductivity = 0.0343206077088;
    msg.temperature = 0.356180489776;
    msg.depth = 0.723314977852;

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
    msg.setTimeStamp(0.832736987992);
    msg.setSource(59802U);
    msg.setSourceEntity(12U);
    msg.setDestination(58269U);
    msg.setDestinationEntity(69U);
    msg.altitude = 0.824367288954;
    msg.roll = 49966U;
    msg.pitch = 47447U;
    msg.yaw = 38831U;
    msg.speed = 516;

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
    msg.setTimeStamp(0.817959262752);
    msg.setSource(45750U);
    msg.setSourceEntity(108U);
    msg.setDestination(17359U);
    msg.setDestinationEntity(236U);
    msg.altitude = 0.962384431385;
    msg.roll = 46978U;
    msg.pitch = 59526U;
    msg.yaw = 22052U;
    msg.speed = -15828;

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
    msg.setTimeStamp(0.500774645017);
    msg.setSource(25415U);
    msg.setSourceEntity(170U);
    msg.setDestination(5643U);
    msg.setDestinationEntity(6U);
    msg.altitude = 0.00651864753722;
    msg.roll = 21079U;
    msg.pitch = 49931U;
    msg.yaw = 40142U;
    msg.speed = 27224;

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
    msg.setTimeStamp(0.458560775767);
    msg.setSource(14453U);
    msg.setSourceEntity(232U);
    msg.setDestination(20163U);
    msg.setDestinationEntity(39U);
    msg.altitude = 0.565090788099;
    msg.width = 0.386277580227;
    msg.length = 0.909723509475;
    msg.bearing = 0.135560972349;
    msg.pxl = -21474;
    msg.encoding = 71U;
    const char tmp_msg_0[] = {33, -54, 49, -57, -113, -124, -90, -128, 31, 116, -117, -54, 102, -19, 51, 16, 63, -82, -45, 24, -55, -20, 124, -12, -13, 52, 67, -48, -15, -101, 46, -123, 90, -84, 16, -17, 41, -72, 88, -103, 14, 96, -115, 70, 60, -35, -125, 15, 18, 16, -100, -106, 44, 14, 76, -69, 44, 20, -113, -78, -56, -60, -114, 64, -58, -11, 110, -14, -53, -101, -115, -69, -25, 82, -48, 90, -15, 0, 25, -7, 52, 67, 4, -3, -46, -114, -27, 83, 42, -91, -92, 55, -56, -46, 25, -119, -55, 11, 38, 56};
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
    msg.setTimeStamp(0.736971644162);
    msg.setSource(310U);
    msg.setSourceEntity(0U);
    msg.setDestination(50396U);
    msg.setDestinationEntity(90U);
    msg.altitude = 0.150756512647;
    msg.width = 0.444454339182;
    msg.length = 0.603168058072;
    msg.bearing = 0.495656707618;
    msg.pxl = 16178;
    msg.encoding = 23U;
    const char tmp_msg_0[] = {-22, -60, -127, 55, 14, -122, -10, 75, 74, 59, 86, -82, -16, -80, -94, 13, 71, 122, -125, -21, -58, -99, 4, -125, 20, -93, -22, -32, 58, -40, -108, -77, 49, -80, 92, 88, 113, -83, 42, 61, 37, 88, 110, -75, -11, 109, -35, 3, 74, -120, -68, 9, -112, 6, -6, -106, -17, -108, 21, -6, 102, 103, 85, -117, 67, 106, 73, 93, -8, -61, -31, -101, 89, 5, 23, 88, 29, 59, -53, -85, 83, 69, -97, 75, -77, -70, -89, 64, 27, -51, -53, 59, -8, -81, -62, -12, 41, 122, 33};
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
    msg.setTimeStamp(0.968602120387);
    msg.setSource(13641U);
    msg.setSourceEntity(38U);
    msg.setDestination(11655U);
    msg.setDestinationEntity(167U);
    msg.altitude = 0.659187464339;
    msg.width = 0.746515560328;
    msg.length = 0.562863181383;
    msg.bearing = 0.281727575273;
    msg.pxl = 28751;
    msg.encoding = 66U;
    const char tmp_msg_0[] = {113, 93, 89, -125, -38, -59, 114, 64, -77, -95, 30, -81, -19, 27, -81, 41, -55, 47, -120, 106, -128, 4, 116, 60, -18, -41, 74, -36, 45, 76, 30, 43, -34, 103, 37, -104, 31, 90, 57, -114, 40, 68, -94, 71, -4, -76, -9, 36, -37, -96, 21, -114, 37, 44, -10, 63, -62, -46, -59, 98, 103, -90, 40, 90, 124, 71, -42, -65, 11, 3, -64, -124, -58};
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
    msg.setTimeStamp(0.548297204959);
    msg.setSource(13961U);
    msg.setSourceEntity(165U);
    msg.setDestination(21444U);
    msg.setDestinationEntity(224U);
    msg.text.assign("NQIPFYIWYXYNWKQCJTISVBNGLOCDKAZL");
    msg.type = 80U;

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
    msg.setTimeStamp(0.174544558729);
    msg.setSource(51512U);
    msg.setSourceEntity(68U);
    msg.setDestination(60452U);
    msg.setDestinationEntity(144U);
    msg.text.assign("KRTZXOYWMAJENIQCDTIKRRHLXTDAARTMYUHEYNRRXPCPFYITQHMPXIHVSEAFFOHUJGUIFVZPWJTIDKOSRLHRNUSWSOVDAMNPAITIKSLEIPQCJSSDOEYGBJQWOZAAHBBBUDXEGZBKXZQVTXMJKHJQKULJFFNQGE");
    msg.type = 161U;

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
    msg.setTimeStamp(0.372107603802);
    msg.setSource(43120U);
    msg.setSourceEntity(66U);
    msg.setDestination(44900U);
    msg.setDestinationEntity(90U);
    msg.text.assign("VVUQUQGIRUMHPFSIN");
    msg.type = 89U;

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
    msg.setTimeStamp(0.718170232485);
    msg.setSource(35876U);
    msg.setSourceEntity(8U);
    msg.setDestination(47781U);
    msg.setDestinationEntity(74U);
    msg.parameter = 224U;
    msg.numsamples = 110U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 60625U;
    tmp_msg_0.avg = 0.569552913785;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.900302863227;
    msg.lon = 0.724519391271;

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
    msg.setTimeStamp(0.0266751985252);
    msg.setSource(50968U);
    msg.setSourceEntity(61U);
    msg.setDestination(29834U);
    msg.setDestinationEntity(25U);
    msg.parameter = 109U;
    msg.numsamples = 167U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 3240U;
    tmp_msg_0.avg = 0.381700835107;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.534024060175;
    msg.lon = 0.279201335384;

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
    msg.setTimeStamp(0.906983558043);
    msg.setSource(22725U);
    msg.setSourceEntity(34U);
    msg.setDestination(51392U);
    msg.setDestinationEntity(158U);
    msg.parameter = 63U;
    msg.numsamples = 80U;
    msg.lat = 0.362375542093;
    msg.lon = 0.245857151442;

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
    msg.setTimeStamp(0.0283541651079);
    msg.setSource(7151U);
    msg.setSourceEntity(31U);
    msg.setDestination(51616U);
    msg.setDestinationEntity(241U);
    msg.depth = 64970U;
    msg.avg = 0.779418961721;

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
    msg.setTimeStamp(0.293434762574);
    msg.setSource(12790U);
    msg.setSourceEntity(134U);
    msg.setDestination(52064U);
    msg.setDestinationEntity(29U);
    msg.depth = 34484U;
    msg.avg = 0.0830816706523;

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
    msg.setTimeStamp(0.247968082622);
    msg.setSource(12861U);
    msg.setSourceEntity(244U);
    msg.setDestination(27290U);
    msg.setDestinationEntity(142U);
    msg.depth = 36220U;
    msg.avg = 0.627311577176;

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
    msg.setTimeStamp(0.374531370908);
    msg.setSource(47781U);
    msg.setSourceEntity(128U);
    msg.setDestination(10998U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.347367529201);
    msg.setSource(59437U);
    msg.setSourceEntity(199U);
    msg.setDestination(49690U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.58769112669);
    msg.setSource(55080U);
    msg.setSourceEntity(111U);
    msg.setDestination(61415U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.227354913018);
    msg.setSource(34390U);
    msg.setSourceEntity(87U);
    msg.setDestination(40489U);
    msg.setDestinationEntity(120U);
    msg.sys_name.assign("VNOBTAWCXBSFQJFSCHNPPEKLIFTEZZXNXBGOQLVGQVAQMAWGWIFOQY");
    msg.sys_type = 49U;
    msg.owner = 26540U;
    msg.lat = 0.182064598403;
    msg.lon = 0.423761728432;
    msg.height = 0.550041443798;
    msg.services.assign("IXUUFEDACSCBNMNTZYROSXEFHJXSPVKQWVOODJLWYXHIKGZRMNIUBFDSIHTOETBACNYRTLWEJXMFVUYAECKVXNLTJFDGEHBKLSQBXYEPWGCQFSQOWTMIGGCNFPKTMYVHZYGZGMSDUEVUXKLXHJVMSRCIATMHAJBMRRZRNBWSTMKINYLQPQDLWUVHYWPOORIOAERUJDPIAYZFGHGOADLNTZKAUCPUJQHKWXQAZLN");

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
    msg.setTimeStamp(0.24979216441);
    msg.setSource(13466U);
    msg.setSourceEntity(173U);
    msg.setDestination(44522U);
    msg.setDestinationEntity(52U);
    msg.sys_name.assign("WDNXRLSAQEOUIZQKYIVPMJUQGWCYWYMI");
    msg.sys_type = 154U;
    msg.owner = 32455U;
    msg.lat = 0.530198339556;
    msg.lon = 0.940627660923;
    msg.height = 0.327193482597;
    msg.services.assign("EPFTTNYQXCFLUPKYSYZSEXMAWWFZCJBKOIIPOYHPALZGQXOGSLGBRVTBYOPWTGDHCKAZCQNYKVZOOVIWAJIWRFNTELWDVHWUERRPKWJZLXNQFHXXDQVSHHFWZQRJTHEEBXMMHIISYISTCREBSOGQGUKJEBIKCHNGTUSOAEPLVETPNJKZYUINNCODC");

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
    msg.setTimeStamp(0.676266331169);
    msg.setSource(59825U);
    msg.setSourceEntity(3U);
    msg.setDestination(50072U);
    msg.setDestinationEntity(130U);
    msg.sys_name.assign("XMSEMWWIDQGBVTLLCHQWFZVPROAQHRWQUUPYOKRJKOSJGHNTJKGYMCDDXZKNGWEDAPGXCJEAZISVPORFZBNHOYLJIFKXGVIFJRYCJWPZSBUWIQPWYHUJS");
    msg.sys_type = 119U;
    msg.owner = 62693U;
    msg.lat = 0.539588623398;
    msg.lon = 0.312597398975;
    msg.height = 0.174298299504;
    msg.services.assign("WSVLSQTAEAZDIDNQUXYGHUHIPXISGFPJVSPDPRZDCJSGBOEIJSRULMZKQAWSMSWIRKQZRNTYJNXFKLLJTJOEKWVWKYF");

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
    msg.setTimeStamp(0.00367957184106);
    msg.setSource(39878U);
    msg.setSourceEntity(113U);
    msg.setDestination(33795U);
    msg.setDestinationEntity(235U);
    msg.service.assign("MBQCVUSPBPVZRFMGLSRIIDPMDJFAKYVYHYTISFBZIOPERVLDLQDFMXNWPBRKCWJEPNHNYZXUIYMNCOVCFAJIDVZKHOFGZWAURLGYUEUTWEBJLOERDJZZRFWHCSTASNCARSYGHBRQPZDFDNXXTJWWZEJHCVSQGELUGPMHQQVJTIOKXCWOYEXKIURNCATSTWYELUOSQUXXQTVWOFGBHKPIK");
    msg.service_type = 52U;

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
    msg.setTimeStamp(0.535731225579);
    msg.setSource(35412U);
    msg.setSourceEntity(253U);
    msg.setDestination(37156U);
    msg.setDestinationEntity(172U);
    msg.service.assign("TCLQCVEMYHEVZINSPOQPXWDVMAEBUHECJNAWZGTMBQBNTULHVAMUDMFSSCLDYHQZGQAOUJHWBWLFYPTCFJJSXALTXVXNRJHWQAIUUAMWEHZKWMSWDJKHTUGVPCKIGVPKINYXADRZMTOPTQWMSFKVZIUVBDCTIZYBDBRKSGCOBLSJ");
    msg.service_type = 121U;

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
    msg.setTimeStamp(0.867277417166);
    msg.setSource(45244U);
    msg.setSourceEntity(222U);
    msg.setDestination(42973U);
    msg.setDestinationEntity(48U);
    msg.service.assign("GOWSNGETXQXJNMIRNDPMRMGYEQILLDFCILXRQPHWDZEEVADDPCTNKOWNUYIXCPJTZKTHGKULZJPJWYUTQNKPCXCZSWQCOJHAELBJOCURKMHGZABHWBJDIWRHUSMVCTZAQOMIBRHILOOXISDVOSWAINAESETGCOYDYKBDGNFVPJVFPTWLUMUBAKFQRKHQHSTVAEPFVURYYKLFRSTMKGJMVNGQHQZXGSVDBYAJMONVXFSRZEUPFYFIXUFZWYEL");
    msg.service_type = 204U;

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
    msg.setTimeStamp(0.538889867917);
    msg.setSource(51888U);
    msg.setSourceEntity(123U);
    msg.setDestination(40211U);
    msg.setDestinationEntity(90U);
    msg.value = 0.920767162518;

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
    msg.setTimeStamp(0.56167430936);
    msg.setSource(46158U);
    msg.setSourceEntity(168U);
    msg.setDestination(52999U);
    msg.setDestinationEntity(109U);
    msg.value = 0.231906713971;

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
    msg.setTimeStamp(0.105692818307);
    msg.setSource(30907U);
    msg.setSourceEntity(231U);
    msg.setDestination(12424U);
    msg.setDestinationEntity(125U);
    msg.value = 0.667168886778;

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
    msg.setTimeStamp(0.583133676742);
    msg.setSource(62837U);
    msg.setSourceEntity(206U);
    msg.setDestination(4623U);
    msg.setDestinationEntity(95U);
    msg.value = 0.0559251459646;

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
    msg.setTimeStamp(0.76371553805);
    msg.setSource(22540U);
    msg.setSourceEntity(219U);
    msg.setDestination(48354U);
    msg.setDestinationEntity(199U);
    msg.value = 0.828239500492;

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
    msg.setTimeStamp(0.153732101678);
    msg.setSource(17479U);
    msg.setSourceEntity(83U);
    msg.setDestination(15007U);
    msg.setDestinationEntity(221U);
    msg.value = 0.855350372924;

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
    msg.setTimeStamp(0.609532475715);
    msg.setSource(29051U);
    msg.setSourceEntity(75U);
    msg.setDestination(60252U);
    msg.setDestinationEntity(233U);
    msg.value = 0.671497543291;

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
    msg.setTimeStamp(0.314410934154);
    msg.setSource(38061U);
    msg.setSourceEntity(39U);
    msg.setDestination(34061U);
    msg.setDestinationEntity(155U);
    msg.value = 0.5845147914;

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
    msg.setTimeStamp(0.991031320469);
    msg.setSource(33646U);
    msg.setSourceEntity(224U);
    msg.setDestination(8748U);
    msg.setDestinationEntity(90U);
    msg.value = 0.988472218776;

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
    msg.setTimeStamp(0.0931420622553);
    msg.setSource(3793U);
    msg.setSourceEntity(205U);
    msg.setDestination(15778U);
    msg.setDestinationEntity(150U);
    msg.number.assign("BCRMWZLTIJXNECKXEVFULCSTEQKYEMIWAMSKIWLEGHOVANNRORNNTOUATGCFQIPZELZOQIRKWBDURXQYHCQBPYJHPCBJPHWPTVFIYBNALTGSLWWSHXQJXVOTXYUYJRTAD");
    msg.timeout = 25821U;
    msg.contents.assign("LBROUGWCMOEKUTKLHQWGICRDHJJIKJPRINNAQSAAZDXEWHZZSENZCNLWCJYLKPKRPKTXDSOBVBZGGIHSNJRQQQMINLZTALQBBYZGOAGESMFBXGBFNYTLEYGZMFRAUXPLWYVACUQMZMCVTDFVRMVEPPQHMTMCKLYHWWSRUUWFJUCSXBXLKIVITAORUFJESVHHHQZ");

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
    msg.setTimeStamp(0.702320262091);
    msg.setSource(57763U);
    msg.setSourceEntity(111U);
    msg.setDestination(63593U);
    msg.setDestinationEntity(248U);
    msg.number.assign("ICTWZYZXOLCWLLNYAIBJUGSYHEEIBJINEMFWGGWKOGFDHAKWOVKXJESSHVMDTAEZENVHJTQFTYFPPKIEFLIORPPTDCMABPZDRRQYALJZUTWLVCRUCSUFPZBWBWSXNQUMLGAAYXZGZH");
    msg.timeout = 42782U;
    msg.contents.assign("SFZKCMLRXJUAXBGBMYHGOFWQUWVZHYDIMSRZXQIVEIEDMLXWXHWKBMTGKGFDPKBLUYQGTMZNPHGPYEJLACHVLZTLFBNFMZJYQWODMBOPVDAICSCRQSPQYMUPECUTOCLRJCYQTZONFVTGNIRHOAARISDVPTYFUUDEVUFCBWRWMHKZYVZRAELSYKTGKIBXSIEWXONNKEAVPRWJCN");

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
    msg.setTimeStamp(0.572700569484);
    msg.setSource(2871U);
    msg.setSourceEntity(191U);
    msg.setDestination(50697U);
    msg.setDestinationEntity(23U);
    msg.number.assign("RPPJOSSRQVDVVGVZFNZRICFFKHDRYILOREFXCVEFKJMJXOEQOBNXJYPDTPZHTQACGWBMSPUKJZYXEANXUWTZLMJHGMXYBGNCPRGDSHVMZWQYWIQXHWTHTALFELYBIEOTJKKCPKPQUECCYIZBONUUANQ");
    msg.timeout = 55301U;
    msg.contents.assign("DVGENJAUPTKFQQGLWWSWBCIEHCHRJQTYIRQYBNTKLSPPZIVPCDLYUGXPYFMDTSHOONWSTCXORJGDESHIBZNSNCMVOHZTJKKZNCPZTHGCFMMOKYZFBMWBXIZLMJ");

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
    msg.setTimeStamp(0.301304902941);
    msg.setSource(27983U);
    msg.setSourceEntity(235U);
    msg.setDestination(59682U);
    msg.setDestinationEntity(54U);
    msg.seq = 2005991097U;
    msg.destination.assign("VIQIGXRIJEACTCFBACUAGNYYZZIJPGMODBAWNOQSNXCDAPUWUDLWVHPKVDQSNHFPINUQUQTXKTZEVVOHDKOVBRMCWRORSCPFWLVFFYVPOWRJYMMEUKJDMOUBNXGWZEGSRQOSFUMJFTGZBBWDTLEGWBZTHDANMSRNHZHINLXYWHCECESZAJPGJLRTXYYKJFBORKLDHBLRFPXIQQGBSVOKIAMKQGMYPLYCFSTZTTUPLDQAHZENES");
    msg.timeout = 4465U;
    const char tmp_msg_0[] = {-97, 107, 25, 2, -92, -42, -45, -49, -59, -23, -82, -62, -25, 121, -67, -118, 44, -9, 68, 1, 29, 16, -1, -7, -20, 84, 81, 57, 6, -94, -125, 41, 69, -4, 10, 117, -91, -92, -68, 92, 116, -7, 64, -57, -36, -17, -123, 2, -9, -101, -61, 25, -56, 53, -52, 93, 4, -22, 23, 90, 7, 112, 91, 36, -127, 49, 15, -32, 69, 24, -80, 96, 16, -50, -77, 7, -100, -47, -85, 34, 27, -47, -91, -60, 32, -125, 18, -52, -84, 108, -120, -118, 7, 97, -2, 38, 56, -89, -42, -117, 62, -118, 11, -33, 52};
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
    msg.setTimeStamp(0.581284175683);
    msg.setSource(48116U);
    msg.setSourceEntity(224U);
    msg.setDestination(22611U);
    msg.setDestinationEntity(80U);
    msg.seq = 1025872714U;
    msg.destination.assign("RYNCYQWWLJJPFGULBUGOINZDNIFTUNOYHPEVKXAVQPUSONXGVQWDNKDTFCEISOJUQOXXAGLOSARWHPELKKEXJYSFFVENUXMLHMBAEMNOZTBGWMCBPICAVZZYYVHTRGHTHPWATCRDMDWFTVSKJTROHFSIRSNUZRFJILPYZKAWJQZAXB");
    msg.timeout = 11813U;
    const char tmp_msg_0[] = {30, -22, 13, -78, -39, -64, 110, 5, 3, -15, -23, 46, 43, -32, -81, 117, 78, -101, 64, 7, 118, -127, 60, -1, 64, 120, 122, -3, 88, 76, -47, 0, 115, -125, -85, -29, -24, -10, -28, -127, 41, -122, 121, 56, -47, -65, 83, -84, 120, 114, -100, 76, 88, 48, -128, -60, -107, 59, 93, -80, -27, -64, 119, -93, -84, -5, 21, 26, 106, 13, -105, 92, -125, 122, -68, 90, 46, 8, 71, 99, 98, -71, -66, -60, -58, 104, 31, -23, 37, -18, -56, 98, 14, -62, 35, 67, 116, -43, -43, 105, 30, -34, 119, 115, 84, 25, 65, -4, 84, -13, 104, -109, 66, -24, -81, 107, 4, 62, -80, -126, 14, -77, 83, 45, -72, 99, 74};
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
    msg.setTimeStamp(0.328028276162);
    msg.setSource(8309U);
    msg.setSourceEntity(218U);
    msg.setDestination(58975U);
    msg.setDestinationEntity(246U);
    msg.seq = 355024995U;
    msg.destination.assign("XDELUZKDLYONSHQAWGCSHJHURMBQVBUAWQVNSAKYQBDFCBFPXZXBRMKMIUJAGNTAJOOLXXDOTREIPVGEZZNAQIQIMYRQTHYJVEFSMJCLLGPLFIZHDJVBESPSOFGUKXRRTZCJNCZRVOLHGAWWJEWNPFEGDPHYISMUXDKPIAYSVXSLRNYCGULFIONCKD");
    msg.timeout = 33671U;
    const char tmp_msg_0[] = {0, 110, 35, -48, 23, -128, -79, -77, 115, -66, 78, -17, -102, 42, -44, -20, 83, 93, 0, 78, 65, 81, -99, 34, -43, 98, -118, 93, -96, 47, 91, 30, -117, -90, -83, 95, 30, 50, -6, 40, 86, 110, -103, -102, -3, -115, 106, -81, 55, 53, 65, -124, -30, 106, 94, -113, -33, -15, -23, -35, 123, 17, 32, 5, -75, -65, 46, 28, 10, 122, -16, -39, -39, 99, -19, -101, -63, -4, -79, 49, -57, 100, 42, 43, -65, -109, 115, 36, -78, 67, 125, 84, 9, 102, -1, 119, -79, -51, -102, -16, -110, -102, 45, 104, 23, -92, -73, 121, 3, 105, 104, -34, -123, -120, 8, -38, 44, 33, -3, -26, 125, -66, 63, 109, 89, 83, 14, 63, 2, 90, -93, -6, 47, 61, -61, -121, 41, -18, 114, 21, 82, 49, -53, -87, 10, 11, 17, -39, 92, 64, -36, -26, -90, -1, 101, -63, -47, 93, 54, -27, -17, 117, 83, -9, -98, 125, 86, 77, 116, 36, 36, -56, 36, 6, -114, 35, 44, 72, 45, 49, -12, -43, -92, -93, -70, -43, -88, 74, -18, 67, 26, -63, 91, 2, -98, 29, 56, -54, 102, 118, -15, -126, -70, 65, -43, -35, 122, -61, 97, 114, 90, 81, -11, -86, -15, -34, -2, -58, 72, 9, -16, -40, 12, -46, 65, -30, 76, 65, -100, -13, -93, 65, -94, 14, 44, -46, -6, -128, 91, -111, -74, -3, 2, -44, 10, 117, -108, 58, 64, 114};
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
    msg.setTimeStamp(0.0418088911333);
    msg.setSource(12367U);
    msg.setSourceEntity(156U);
    msg.setDestination(62540U);
    msg.setDestinationEntity(128U);
    msg.source.assign("DJMETYDNGDSIUYNMQEVQJXWOMFLUNTQKZRUHPEMTJDZZAYBGEURVTDIFUNWXJVZBFBWVPPPZKKBPRPNLSUKEWLZOGYAXIQCJBDCRVULIONWODUSKCAAOKLHCWTL");
    const char tmp_msg_0[] = {-58, 119, -92, 25, -118, 34, 66, -107, -13, -1, 43, 15, 125, 104, -59, -82, -128, 35, 85, -6, 25, 34, -12, -106, 125, -44, 125, -6, -23, 48, 55, -70, 106, -17, -109};
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
    msg.setTimeStamp(0.12936694072);
    msg.setSource(59508U);
    msg.setSourceEntity(232U);
    msg.setDestination(37122U);
    msg.setDestinationEntity(14U);
    msg.source.assign("SHMGHPQHYWBLWZAWEUBAJOLLROFSUNKXUVQBVKHTUININRKSEMVTKPQAGJSPEDIPRVAWLPWQNGOWUYAQZTMMOYQAOGZXGVHUAAXNDYPNRLCBGDTNMTCQLUZZFCWYRICXFJCACJYNQMTKG");
    const char tmp_msg_0[] = {-65, 15, 32, 38, 32, -13, 80, -59, 9, 86, 7, 31, -64, 49, -56, 77, 11, -66, 101, 2, 64, 40, -81, 106, 90, -55, -126, -95, 67, 44, -128, 5, 95, 13, -91, 105, -92, -123, -26, 11, 80, -46, -121, 124, 41, 29, -77, -22, 30, -20, -72, 47, -21, -54, -75, -65, 113, -76, -103, 20, -72, 29, 29, 69, -97, 18, 13, -90, -103, 89, -128, -72, -6, -65, -93, -37, 26, 28, -114, 106, 90, 17, 9, -87, -101, 6, 28, 76, -23, -109, 86, -24, -91, 45, 21, -31, 12, 89, -93, 21, -118, 65, -13, 86, -40, -106, 95, -85, 123, -9, 24, -14, -84, 99, 59, -21, -81, 50, -88, -98, 83, 15, 82, -14, -29, -45, -70, 20, 75, 20, 3, -88, -65, 93, 32, 38, -43, -112, 87, -26, 60, -107, -3, 16, -69, -56, 31, 1, 21, 85, 122, -65, 121, -8, -2, -75, -29, 113, 29, -64, 116, 5, -30, -3, -49, 0, 83, -120, 2, 72, -19, -102, -52, -72, -128, 79, 33, 81, -1, 21, 72, 57, -77, -97, -121, 14, 3, 81, -12, 40, 86, 89, -13, -88, 5, 62, -62, 33, 48, -123, -88, -79, 68, -126, -27, -24, -49, 116};
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
    msg.setTimeStamp(0.11184469837);
    msg.setSource(58238U);
    msg.setSourceEntity(55U);
    msg.setDestination(24378U);
    msg.setDestinationEntity(155U);
    msg.source.assign("HPTAKNEUWVWYVVRGTIZOAXYCMYIXBNEGIBGBMVBQZKQLOCLKMPJEHIZNLKIXYCFFLFAGALUTHWXCGFEKTTSYURVSFYQUEWMHZFQLBLARDYPQDRASZTZKBQXBOTSPCQQWFZEHOGJWZCXRGYZCLPWVGUUTLTWKMVUNFMXOADKNIJCSUOGSBSPDNEHVKJPMDRWZDHETJNMRSR");
    const char tmp_msg_0[] = {-105, -33, -103, 98, -20, -62, -114, -15, -102, 105, 17, -10, 23, 30, -29, -84, -24, 126, -54, -17, 28};
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
    msg.setTimeStamp(0.860319703605);
    msg.setSource(10990U);
    msg.setSourceEntity(102U);
    msg.setDestination(23051U);
    msg.setDestinationEntity(95U);
    msg.seq = 1804459942U;
    msg.state = 119U;
    msg.error.assign("ZFOBUZJSQKDYIDEPCSMMSNOLHMEVHDWUVKILPIWENARIOSVVQVYQARAVTVWOJXXLBFEGAMMOLNSWZNQKUSHEQTJPLERDDGHBRCRTYXDHSNGELDMHBZVXYAOJYNTSJCFGYKQKCLGNOAZCJFZOLUWJPUJEZFXKFMUKBLXXUNTHGRUBPIKBQMJSIOUSPRMITBCDFQAM");

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
    msg.setTimeStamp(0.206991103338);
    msg.setSource(49624U);
    msg.setSourceEntity(208U);
    msg.setDestination(2625U);
    msg.setDestinationEntity(62U);
    msg.seq = 1158329255U;
    msg.state = 236U;
    msg.error.assign("IWAVRDDTWRYRJSOVOAHIIFTCMZHXMPVTKPJIJDRVMKBYNIPGOIBXNFMRBZMCDDQCCORYNZJZWCAGOKRPZQ");

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
    msg.setTimeStamp(0.834433000175);
    msg.setSource(25553U);
    msg.setSourceEntity(213U);
    msg.setDestination(1797U);
    msg.setDestinationEntity(113U);
    msg.seq = 967566274U;
    msg.state = 177U;
    msg.error.assign("IJAIXECZGVKSEXAPXGYLPBJUTVPRQFALXKENLBIDLQADKNLPDGFCIAFZNZJDGCOCYBYMOHYATCVMJHURLZCDQYZBMOKVUWRLXQAJDNKZTSKFMJQRCJJHUOTITOZRWQABGDQOYGUTSDLDYYMMCWHWEROTXOFAPULNBWIXLYIXZSKSANFVFVNBDEVWFPYVWEMSMWBNITRBZVGXOQOTGFJTSPRPHVURIFURSWNKNEHS");

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
    msg.setTimeStamp(0.407633118043);
    msg.setSource(55583U);
    msg.setSourceEntity(151U);
    msg.setDestination(30208U);
    msg.setDestinationEntity(54U);
    msg.origin.assign("ZCLLAJGZYRYYQXXEORKMWDLCRTFEJWFTQQANCWXEIIYMOHBFYXQPJBESBNKTZZGAWFZYPMUKOWVNPJNVSILHHQDDNFOLFOPZVUKZHKHNQHLNKAKHMIHMAUQFSCTXXLGGDBDGVFSCRIMERMVGRPHPLOTIAEYSUXFNTTYPYFJUUJINZMMWWXSAJEDLCUDOOHCPRVRBPMCANEPTQVXXYTDRBSREBJBWKVKVWGSIBWEUUGQZDGAKOIBG");
    msg.text.assign("OXVQABUKYSBMAWPWTUCDFONRGEWOMGZRPAOLRQVVHTSEGAEDTVWRCBKPSOKIDDGYXCLRRNHDPYEKYTEVZPJJDSLTXXWNNOTCJMHGYIKNNVEJQWAIZCMKEBFNFMGYGCQBVGPRHISEHMNFVCMEJXUWRTCADPSBOWDZQORMLH");

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
    msg.setTimeStamp(0.634049880555);
    msg.setSource(56747U);
    msg.setSourceEntity(148U);
    msg.setDestination(6510U);
    msg.setDestinationEntity(250U);
    msg.origin.assign("NPGRUSVXXWHJKPRZZYHBCNMQCGVBCYZQRDUQJFUUBQSQNBYZQABVNOIEKYZWOWKYDDWUAAHSTFJWXSTJSURMXJCMIDANANCADIJQTFJBEVPZOOIKGQZNKLOMSPOKFTMXOFFEDHEFVLRLFYKIHELZIMOKIJ");
    msg.text.assign("FMQEZXWEBMGINDYOPFBEO");

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
    msg.setTimeStamp(0.390991577819);
    msg.setSource(65113U);
    msg.setSourceEntity(180U);
    msg.setDestination(9200U);
    msg.setDestinationEntity(37U);
    msg.origin.assign("JADQTODQKMDAZBLBXTNSHKHWWOUEZAYOMXNIMKXTXURVDRCLTEAFHEPAZYCJPPLUZIIORZWHNRMPKQQNXFALOLJSEWQBCKGJVUFGSPIFTDKVRLCCAXUCBTOZBOQSHSGDSETRAZWIQYOGVDQQVGWPVFNMISIAHVNGTBETHCBKKLU");
    msg.text.assign("GMYGVOALUPQJWWXZAUDXLYPGGBTEOPHKKBIPLXAHUEHQIDHEIAQTMDVPCBFOIYKPSHLZLHGXSSWOEGLOXURRNFNLRPJTVIFBURGTBZUWCFKJWSCDBJSBOMJIBLFKIUWHMFNXQEXZUMFQKICKHZNASWVJDYWBZZRLYVCZVFEXGQTDSXSMGTQPAOAFMIHBXYFGYZCV");

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
    msg.setTimeStamp(0.000796926292995);
    msg.setSource(31292U);
    msg.setSourceEntity(160U);
    msg.setDestination(6518U);
    msg.setDestinationEntity(143U);
    msg.origin.assign("JKCVATEKLTWQBEGQRMCDVGWRIYSEBOBFWYOWKITSDQFMZLREUNMUOLSVAGWRLBXPQQDJXTHYZMDWIZODOTYCTVQNOGNFTEUTIRQZMQEHFIMDFNEVKWUNALNSGAFDXPGNLDKXQYIHRDKLBLJSOMJSWDYPKCOVYWSABBPPOVUXUPJZACWNYUJPRBMGAKV");
    msg.htime = 0.0317382022537;
    msg.lat = 0.169486256986;
    msg.lon = 0.605524654728;
    const char tmp_msg_0[] = {20, 69, -9, 93, -28, -34, -100, -127, -99, 122, 118, 50, 99, 126, -20, 4, -111, 102, -3, 109, 82, -46, 65, -70, 33, 2, 70, 90, 99, 24, 24, -107, 22, -106, -48, -48, 27, 68, -13, 75, 109, 16, 23, 121, -9, 84, -23, -84, 85, -93, 82, -10, -51, -38, -18, 28, -21, -22, 21, -46, -10, 12, 55, -39, 29, -13, 58, -77, 96, 123, -106, 112, 84, 70, -120, -81, 89, -65, 18, 22, 81, -120, -109, -49, 104, 36, 25, 16, 105, -79, -41, -104, -76, 45, -118, -101, 24, -128, 13, -72, -62, 9, 90, 11, -19, -88, -65, 8, 53, -14, -98, -33, 86, -47, -90, -88, 116, -41, 62, -6, 116, 20, 44, -41, 71, -42, -80, 24, -77, 31, -8, 24, -12, -58, -17, -81, 121, 61, 95, -71, -35, -86, -26, 13, -122, -32, 113, -34, 22, -79, 72, -122, 19, -65, -80, 91};
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
    msg.setTimeStamp(0.453306442213);
    msg.setSource(18514U);
    msg.setSourceEntity(141U);
    msg.setDestination(26738U);
    msg.setDestinationEntity(253U);
    msg.origin.assign("DNQZAWQZDFSBLHYAAZZKDMZPUDCKTWEGDPUEDMMYAUOPBOQSKCXWZYTVGLMIYTQIHHXTJXVUOQMTDKYNRHOKJYXCRWSQKHIPNZSBYMDWOLGBHCVEOUVAITMCRAXQIFFZHWPFXPFJTNRQSPPFVBIBEGGEBGBWOONBBEMRDGCHLEXISGSJRPGUQOFSCCJTLAUKIRWMUNTEVAKJU");
    msg.htime = 0.777458140129;
    msg.lat = 0.774323419706;
    msg.lon = 0.421382542903;
    const char tmp_msg_0[] = {-10, -13, -80, 68, 112, 11, 6, 5, -124, -114, -16, -109, -96, 95, -50, 126, -38};
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
    msg.setTimeStamp(0.606785745525);
    msg.setSource(49086U);
    msg.setSourceEntity(240U);
    msg.setDestination(14106U);
    msg.setDestinationEntity(135U);
    msg.origin.assign("XSAEXLFYCWBUHIXRHPRRNSZUZUNBMDPRRVFEJGFOYTFOKPMSFCXGCZMIDVLGTMDEMGVEVTSTNHILSTMIYEQAIJKQVFUKICVSUGQZXOKXYPBHTOEDURWJVTYORHKBPCMNSSAALC");
    msg.htime = 0.0310989264949;
    msg.lat = 0.233822449879;
    msg.lon = 0.17502093041;
    const char tmp_msg_0[] = {103, -82, 25, 19, -51, -117, 126, 22, 78, -24, 7, 111, 65, -16, 109, -119, 31, -24, 21, 51, -14, -80, -125, 126, 80, 37, 118, 13, 9, -102, -57, 73, 26, 100, -114, 93, 106, 81, -73, -3, -73, -69, 49, -94, -108, 95, -24, -47, -102, 11, 58, 54, 10, -10, -117, -65, 23, -30, 82, -113, -121, 111, -9, 27, -117, 85, 15, -27, 22, 10, 79, 67, 8, 22, 67, -56, 23, -19, 53, 29, 15, 119, -8, -51, 22, 54, 82, -34, -119, -85, -80, 69, -100, 41, -73, -88, -24, 113, 86, 96, 77, -40, 74, 72, -29, 45, -45, -124, -58, -57, 61, 93, 126, 13, -118, 5, 94, 1, 96, -103, -98, -14, -89, 51, 66, 7, -89, -90, -2, -79, -125, 105, 111, -54, 93, -118, -23, -44, 64, -4, 16, 21, 12, -1, 49, -15, -76, -81, 34, -117, -97, 40, -54, -57, -42, -35, 24, 120, 45, -32, 22, -121, 50, 4, -111, 64, -42, 37, 86, -110, -71, -70, 0, 43, 37, 66, -28, 39, 14, -63, -42, 42, -3, 80, 122, -92, -121, 39, 62, 75, -84, 22, 102, -73, -72, -128, -23, -113, 14, 29, 6, -107, -113, -70, -123, 47, 66, 0, -22, -124, -27, 43, 15, 111, 117, 23, 21, 105, 93};
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
    msg.setTimeStamp(0.117102740229);
    msg.setSource(22132U);
    msg.setSourceEntity(238U);
    msg.setDestination(40403U);
    msg.setDestinationEntity(184U);
    msg.req_id = 19606U;
    msg.ttl = 24285U;
    msg.destination.assign("GECNOAIPEMMIUPKLNLXRIFOGAWSUSVQRLZXDVXBMDNHIOWHYZXPZVHFFKWNXYMSKURYVTMUSBHYFTCMRQRDUIZDCALNHIPTLGYMTWZWAGJIGERSOXYFSD");
    const char tmp_msg_0[] = {-33, 124, -71, 66, 78, 47, -20, -42, 69, -109, -102, -91, 103, 116, -68};
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
    msg.setTimeStamp(0.571192851944);
    msg.setSource(44714U);
    msg.setSourceEntity(133U);
    msg.setDestination(13709U);
    msg.setDestinationEntity(144U);
    msg.req_id = 2768U;
    msg.ttl = 61423U;
    msg.destination.assign("RKHCPFUEJAMWGLSOPNZLKSEBLKKHDJZCSPXWEQPKFIBGMSKGLIZOXDDFTEPWFERNCLDETUQXBPFEZAYVUPSXOTSVWYWTTJEYGYWJBGHVMSVRDQVXYAPOYKRHIGVICIYRRSAOAQJLXJXNWUJYNRAMWYZTBUBPZNMVEAOHQDAIMLEFFUXOHM");
    const char tmp_msg_0[] = {-86, -11, -22, 76, -115, -36, -75, 72, -96, -77, -51, 23, -31, 87, 40, 12, -19, -90, -51, 40, -106, -85, 120, 19, -39, -83, 73, 107, -126, 1, 55, -8, -10, 83, -121, -74, 79, -106, 88, -110, -39, -105, -21, 8, -22, 81, 40, 40, 124, 43, 124, -16, -11, 77, 104, -86, -81, 1, 16, 83, 103, -100, -56, 118, -109, 75, 79, -105, 26, -101, 105, 64, -86, 82, -83, 49, -67, 98, 18, 9, 91, -15, 43, -67, -99, 94, 10, -99, 124, 52, -28, 114, -62, -61, -96, 21, -90, 13, 4, 117, -47, 31, -59, -13, -120, -32, 23, -53, -70, -14, 24, -76, -97, 58, 65, -65, -21, 35, 41, 125, -37, 96, 121, -56, 66, 19, 126, 14, -91, -33, -58, 91, -11, 51, -33, -4, 117, 62, 98, -32, 112, 16, -85, 25, -121, 80, -60, -110, -17, -100, -40, 64, 77, -74, -40, 11, 67, 119, 70, -101, 50, 59, -14, 86, -83, -115, -89, -5, -86, 2, -45, -71, -49, -48, 2, 67, -121, -86, 30, -56, 36, -85, -105, -97, -97, 117, -13, -27, -94, -59, 64, -42, 58, 47, -66, -5, 83, -36, 64, -38, 20, -12, 0, -13, 15, 49, 69, -12, 93, -5, 34, -77, 27, -9, -43, -104, -82, 52, 35, 82, 25, -6, -18, 24, 20, -64, 121, 58, 120, -16, 19, 35, -1, 66, -91, -11, 88, 65, -118, -85, -18};
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
    msg.setTimeStamp(0.484720542616);
    msg.setSource(29555U);
    msg.setSourceEntity(194U);
    msg.setDestination(50371U);
    msg.setDestinationEntity(188U);
    msg.req_id = 43457U;
    msg.ttl = 17876U;
    msg.destination.assign("RRTJJTUVPJGEAWYTAIWRWEGBCKAEJTFUOZCPFHCQAGBNTHTMANCOMREUWZVXZVYVJFQWLBQJGMKJVRVMNTSAGOKXQGIYAZJNEISVMIXGA");
    const char tmp_msg_0[] = {-1, -106, -127, 52, 0, -66, 2, 59, -34, -67, 26, 30, -124, 92, -15, -113, -57, -105, 126, 10, -67, 43, 19, 8, -67, -23, -33, 115, 37, 81, -58, 87, -29, 63, -103, 99, -110, 110, 45, -48, -126, 67, -122, -110, -68, 29, 68, 68, 17, -91, -127, -51, 18, 42, 0, -18, -60, 21, -77, 23, 49, 16, 72, -3, -47, -47, 14, -97, 74, -99, -59, -81, -87, 57, -20, 124, 113, 27, -82, -92, 59, 62, 35, 29, 34, 69, 99, -10, 77, -70, 38, 73, 13, -67, 119, 68, -19, 73, 116, -8, 100, 122, 64, -51, 19, 93, -69, -14, -113, 92, -63, 95, -16, 60, -113, 74, -109, -117, -74, -53, 58, 2, 4, -21, 95, -96, 103, -90, -106, 36, 47, -37, -65, 92, 15, -31, 56, -2, -112, -5, 46, 96, -68, 61, -56, 30, -10, -78, -108, -27, 114, -49, -123, 55, -115, -101, -47, 90, -106, 56, -110, -49, 72, 112, 99, -103, -64};
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
    msg.setTimeStamp(0.923527934162);
    msg.setSource(52144U);
    msg.setSourceEntity(36U);
    msg.setDestination(11849U);
    msg.setDestinationEntity(72U);
    msg.req_id = 11131U;
    msg.status = 154U;
    msg.text.assign("UNSDUKBGEJLSJJWARCAVFHRQLHWBYCIDAMXKNRABBXFDTFPMPLMXRYAYCTIIFHQOENLOMEBNKPBSSUUDUXHCAPGKWNFZHRZPZZRQYTZVDGUFYSNKJHQBPGXOCFU");

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
    msg.setTimeStamp(0.593733816858);
    msg.setSource(40550U);
    msg.setSourceEntity(119U);
    msg.setDestination(64932U);
    msg.setDestinationEntity(172U);
    msg.req_id = 55508U;
    msg.status = 87U;
    msg.text.assign("MBWCUPMTHDQGNTXBFFLXJKAVCWADGWNRUBATMZVCWXTCZJJCKRIAXPQZECSYPGAPQIVOKGKNAGANFEBOSGTJUFNZNINOREITTBISDAIVHWRZJLJVCSFKDHSMCMQKPOEGOIDWBEQVPYKAQGWVSYYBYFSEEZVFGVOREWURUBLSCJODQLNBZJUKKCPNJHDDUYQWQPMHZTVOMXUXYLZGIYRRLHMIRFMKUX");

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
    msg.setTimeStamp(0.0270051565404);
    msg.setSource(54667U);
    msg.setSourceEntity(237U);
    msg.setDestination(10475U);
    msg.setDestinationEntity(250U);
    msg.req_id = 45516U;
    msg.status = 74U;
    msg.text.assign("HOQLTFVEHXRQKXJVXMFYOPZNZRCUBUPZSDAEMMKGTDVBRNJNJMBYQVPQLOPGRGAMTWPBDAUNSIQITCFUQCFYOUAKCGWYZG");

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
    msg.setTimeStamp(0.505678046423);
    msg.setSource(27887U);
    msg.setSourceEntity(82U);
    msg.setDestination(37674U);
    msg.setDestinationEntity(64U);
    msg.group_name.assign("JSZPWZNHSSAZMEHVHYUUITAUQXQHPOAKLAMWUKYEDIEJXSOQEKGXKKNIMKBIPEERSSUOCNBYMCCZDDJTUSLXDNWZD");
    msg.links = 1752619600U;

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
    msg.setTimeStamp(0.543987409248);
    msg.setSource(56921U);
    msg.setSourceEntity(13U);
    msg.setDestination(10253U);
    msg.setDestinationEntity(76U);
    msg.group_name.assign("TENBRHGOJMGUEAZJQSOZXCBJRWXXFKHOYLALDKLKNQADFJMWNLRTXHMSPGJCVGTAVUJYXXYCPOWPCZUHRUUEGBBHSXMBZPFIDFBAHZ");
    msg.links = 1032387501U;

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
    msg.setTimeStamp(0.351485097974);
    msg.setSource(16390U);
    msg.setSourceEntity(84U);
    msg.setDestination(34026U);
    msg.setDestinationEntity(33U);
    msg.group_name.assign("UGZUACKTJETBESAPHNDWBJXDOBGYPBNHYUJVFOXKPALSZIUUQTTBBLPJMDML");
    msg.links = 2152923033U;

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
    msg.setTimeStamp(0.491644787757);
    msg.setSource(7942U);
    msg.setSourceEntity(93U);
    msg.setDestination(11824U);
    msg.setDestinationEntity(225U);
    msg.groupname.assign("CZLPRNPBOAFLIGJABSNGRAZGDHEDWSJFXVMXXHLOWPXVOSKTGMYULSBCTKMDYXPFZAQHBRCIRQFWPLPARUJRBYGFEFOHJFKUULVQXYGRCZMZWUDMFXEXCRLQTUBZQVJOFNSIUJVEJWIZCYYUUWZOPTEWBSAKTHLINOKCWMNTZNALQHDEMMTNDVOIJ");
    msg.action = 237U;
    msg.grouplist.assign("TGXLFNDEJIRGZYWTWQRBTMIBOTJZZXKWOBTSJKGLQGSZCMGNINYSGADXLPHRXOWSAHJVRLTIRBINHXUMUKHGNDROABJQMMYZNEHMYNZNGFUDCWLOFLEGCEWKCVKZRLCEYCARVONBGAFZDNDXPDXSFKUPTBJUMEHKHSAFPVPWAMWRVCYZVKCFRYBQKUHATXMZSXEOJQD");

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
    msg.setTimeStamp(0.7920140861);
    msg.setSource(4802U);
    msg.setSourceEntity(14U);
    msg.setDestination(40540U);
    msg.setDestinationEntity(249U);
    msg.groupname.assign("VDQPEMYJTGRPQNQBSCKRGYENEWANXGREIUECIQRHPJMKZLTKMSIZFWIVFKUCHPVLIXAVXNMJOUSQXBXMOWJGLMWSTXVGHHTNAZJSKZRBOYWLDFTPWHOSNXXDGCRLLZIUAZATZAWXQRAUJCWGFCSYUNUOBUWTBSEHNOAHKJNFVTIIYPGIFFRBZMHQSYPDAGEDVQCSKIPDKDEYORPYBGOJOCHMADQJWMUUVEVXMZKLCRTYFHPYBTBDOFQLCF");
    msg.action = 197U;
    msg.grouplist.assign("LVILRHTGFLNSQHTOCWZMGDXDDXKWQVAXTPXTBRAWHOMMFOXHEMNNMULGPOUVQREYTTIJJSDYVRGOCDPANJSCEOZPREIXYAZIMNFULAKTGUWHKPQGWEFJCKFYUXYPYSJXEEBQK");

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
    msg.setTimeStamp(0.924108813141);
    msg.setSource(1576U);
    msg.setSourceEntity(251U);
    msg.setDestination(53167U);
    msg.setDestinationEntity(115U);
    msg.groupname.assign("HUYUJXKJYDJUVTTFEKLSOVXWEEKYFCBIYMGMRXMH");
    msg.action = 179U;
    msg.grouplist.assign("JDJXVHPEAAITXZLZVNWEAUREFIQEDLYDRYSTUSWILNAULNTLGKMFGFVYOZXIEHH");

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
    msg.setTimeStamp(0.556173116156);
    msg.setSource(3308U);
    msg.setSourceEntity(130U);
    msg.setDestination(15236U);
    msg.setDestinationEntity(238U);
    msg.value = 0.332998285825;
    msg.sys_src = 61785U;

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
    msg.setTimeStamp(0.565456493545);
    msg.setSource(16500U);
    msg.setSourceEntity(192U);
    msg.setDestination(7634U);
    msg.setDestinationEntity(50U);
    msg.value = 0.671629439224;
    msg.sys_src = 27561U;

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
    msg.setTimeStamp(0.177091500142);
    msg.setSource(45317U);
    msg.setSourceEntity(42U);
    msg.setDestination(38228U);
    msg.setDestinationEntity(149U);
    msg.value = 0.981182654938;
    msg.sys_src = 22205U;

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
    msg.setTimeStamp(0.99662128121);
    msg.setSource(58365U);
    msg.setSourceEntity(223U);
    msg.setDestination(21731U);
    msg.setDestinationEntity(94U);
    msg.value = 0.592995820301;
    msg.units = 180U;

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
    msg.setTimeStamp(0.916822145878);
    msg.setSource(32691U);
    msg.setSourceEntity(237U);
    msg.setDestination(65458U);
    msg.setDestinationEntity(253U);
    msg.value = 0.942152878685;
    msg.units = 130U;

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
    msg.setTimeStamp(0.236527579875);
    msg.setSource(45366U);
    msg.setSourceEntity(184U);
    msg.setDestination(41319U);
    msg.setDestinationEntity(133U);
    msg.value = 0.328927491809;
    msg.units = 173U;

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
    msg.setTimeStamp(0.774945435779);
    msg.setSource(16738U);
    msg.setSourceEntity(210U);
    msg.setDestination(61629U);
    msg.setDestinationEntity(53U);
    msg.base_lat = 0.00289523305368;
    msg.base_lon = 0.0653512570716;
    msg.base_time = 0.761989757342;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 18076U;
    tmp_msg_0.priority = -86;
    tmp_msg_0.x = -20135;
    tmp_msg_0.y = 16503;
    tmp_msg_0.z = 680;
    tmp_msg_0.t = 536;
    IMC::TransportBindings tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.consumer.assign("LFSGISDWXALPIWLYSZSGKSXWHKNTJIYUZXTQQFCRKPIEXTFRNZVCWOWUHLDITOPDUELTMJIZJYARKHTQYAIGONUZZYECVNFAJNOHGGKINXZJVUCNEZCSJBGBDCUOETERPLWEDPMYAPAFURDBFKBPMMQESMJXOAUYVSEHMHHICBQYNFIBKOROCHTUKLPSYBFRVPMVWELKSMQQJRGWAXQFTCYLVDQNXDCVOJLGNXTGBDVZWBZKPWRDFBAXMGRA");
    tmp_tmp_msg_0_0.message_id = 52700U;
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
    msg.setTimeStamp(0.0380011301898);
    msg.setSource(29245U);
    msg.setSourceEntity(211U);
    msg.setDestination(39416U);
    msg.setDestinationEntity(14U);
    msg.base_lat = 0.610692183275;
    msg.base_lon = 0.0759560289024;
    msg.base_time = 0.519528336029;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 2899U;
    tmp_msg_0.priority = -114;
    tmp_msg_0.x = -32324;
    tmp_msg_0.y = 15113;
    tmp_msg_0.z = 18183;
    tmp_msg_0.t = 17143;
    IMC::LedBrightness tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OVEHSBWAKKROXWFFUHDENMAIIPMSSTDXKOOLPUJXQREAUFUFDJQLRXYYXTRAKMCGCRVNAXJSMGQXTRMDCCGZUVPPKFITEJEJONDODKJUFRCTZPIYXLDABZLTHHVMRVSUDCJZIGBHNVTAUDTPIEBSYFZHJCWYQKPELOZBKFJZCIFQWNWNIJDLCSHWGSZ");
    tmp_tmp_msg_0_0.value = 219U;
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
    msg.setTimeStamp(0.982270450509);
    msg.setSource(36254U);
    msg.setSourceEntity(187U);
    msg.setDestination(8908U);
    msg.setDestinationEntity(252U);
    msg.base_lat = 0.286584339802;
    msg.base_lon = 0.135910780956;
    msg.base_time = 0.410193831453;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 32201U;
    tmp_msg_0.priority = -9;
    tmp_msg_0.x = 16290;
    tmp_msg_0.y = 1793;
    tmp_msg_0.z = -5232;
    tmp_msg_0.t = 11282;
    IMC::EstimatedStreamVelocity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.0753072913509;
    tmp_tmp_msg_0_0.y = 0.758054431267;
    tmp_tmp_msg_0_0.z = 0.499345242439;
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
    msg.setTimeStamp(0.773653468224);
    msg.setSource(30248U);
    msg.setSourceEntity(0U);
    msg.setDestination(33188U);
    msg.setDestinationEntity(222U);
    msg.base_lat = 0.868647325258;
    msg.base_lon = 0.852203286241;
    msg.base_time = 0.748459421984;
    const char tmp_msg_0[] = {6, 20, -32, -99, -20, -111, 111, -18, 116, -35, -3, 80, 63};
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
    msg.setTimeStamp(0.467086293412);
    msg.setSource(34243U);
    msg.setSourceEntity(12U);
    msg.setDestination(27571U);
    msg.setDestinationEntity(46U);
    msg.base_lat = 0.897258397661;
    msg.base_lon = 0.280645957702;
    msg.base_time = 0.508627113966;
    const char tmp_msg_0[] = {28, -65, 82, -78, 33, 9, 14, 4, 34, -126, 25, 88, -35, 120, -119, 97, -52, 100, -42, -119, 71, -76, -90, 115, 14, 4, -45, -82, 92, -62, -23, 92, -16, -23, -123, -32, -107, -104, 34, -70, 102, 25, 91, 93, -122, -58, -86, -15, 107, -26, -59, 43, -58, 68, -81, 4, 82, 57, -8, 111, 100, 106, -111, 111, -88, 43, 67, 60, 79, 23, 109, 124, -47, 17, 110, -54, 99, -21, 22, -127, 94, 97, -113, -2, 109, 54, -57, -79, -14, -123, 41, -10, 86, 59, -45, -6, 30, 86, -90, 73, -23, -75, 5, 89, -28, 10, -90, 45, -12, 53, -112, -86, 71, 64, -41, -123, 93, 102, 29, -78, 44, -14, 106, 73, 111, 49, 60, 96, 86, 70, 40, 110, -118, -34, -78, -55, -61, -33, 7, -124, 80, 126, 28, 87, -47, -106, 11, -99, 49, -45, -89, -2, 18, 38, 54, -50, 58, 75, -74, -65, 86, -104, -110, -68, 67, 12, -29, -96, 125, -124, -110, 33, -93, -63, -61, -30, -125, -42, -97, 73, 18, -41, -104, 81, -78, -12, -78, -102, 11, 15, -86, 13, 27, -118, 48, -100, -31, -56, -17, 12, 80, -127, 37, 8, -61, -128, -78, -56, -19, -78, 75, 112, 37, -57, 27, -127, 110, 92, 10, 85, 88};
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
    msg.setTimeStamp(0.154436451584);
    msg.setSource(44221U);
    msg.setSourceEntity(7U);
    msg.setDestination(26339U);
    msg.setDestinationEntity(80U);
    msg.base_lat = 0.444099503754;
    msg.base_lon = 0.499202150665;
    msg.base_time = 0.386493004138;
    const char tmp_msg_0[] = {38, -72, -49, -41, -107, -124, 17, -112, 18, 103, -28, -43, -128, -15, 61, 34, -24, 63, -3, 112, -16, 81, -115, 36, 28, 101, -104, 95, -7, 29, 98, -78, 7, -2, 13, 102, 27, 40, -99, -25, -110, 64, -79, 41, 20, -48, -39, -89, -26};
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
    msg.setTimeStamp(0.18532926082);
    msg.setSource(31318U);
    msg.setSourceEntity(0U);
    msg.setDestination(51602U);
    msg.setDestinationEntity(55U);
    msg.sys_id = 25299U;
    msg.priority = -81;
    msg.x = 19438;
    msg.y = -563;
    msg.z = 11732;
    msg.t = 1422;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 37934U;
    tmp_msg_0.status = 155U;
    tmp_msg_0.text.assign("VZAIOZVAMZDNECIGHFEPCUBJZHUYGCNCOIXBLKYTDIVVBWHYDQOXUGLTTFZOILUCLMUXPMPSRSCHROEEWSMJJBHNYJXDBFJHNGYADRWEVNKAMBSVFYJRKVSWXYPWMLVQXCXZFSQYRJSCRFPWW");
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
    msg.setTimeStamp(0.697467313767);
    msg.setSource(34355U);
    msg.setSourceEntity(248U);
    msg.setDestination(58946U);
    msg.setDestinationEntity(87U);
    msg.sys_id = 16354U;
    msg.priority = -117;
    msg.x = 28954;
    msg.y = 21397;
    msg.z = -23840;
    msg.t = 24618;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.41174303511;
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
    msg.setTimeStamp(0.35136647164);
    msg.setSource(53735U);
    msg.setSourceEntity(55U);
    msg.setDestination(3230U);
    msg.setDestinationEntity(55U);
    msg.sys_id = 34025U;
    msg.priority = 34;
    msg.x = -28289;
    msg.y = -28480;
    msg.z = 32756;
    msg.t = -25545;
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("HKBCMUOMKOQDEXYVIJWTNDOGNGOETSTNISOWGXZKFSLQGPZCRQSPGCNPRDEROZYQRLITIKIOTOUBTMUGDKBJUWSXYKUCTGVYPZVXKDUVMLHNFNAPACTXACJATHPUGMKFGUATQOWFARZHYMCCXUMCBRAJYIZLAIWDSSHYBAJQFVESDKWJFJLOSWIQCBMFXFEUHMGEHMKWNJFDWPHRE");
    tmp_msg_0.lat = 0.508888937901;
    tmp_msg_0.lon = 0.167403089373;
    tmp_msg_0.z_units = 65U;
    tmp_msg_0.z = 0.466501878701;
    tmp_msg_0.accuracy = 0.923522943802;
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
    msg.setTimeStamp(0.146092969199);
    msg.setSource(50360U);
    msg.setSourceEntity(103U);
    msg.setDestination(36886U);
    msg.setDestinationEntity(229U);
    msg.req_id = 1910U;
    msg.type = 206U;
    msg.max_size = 60308U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.712275861067;
    tmp_msg_0.base_lon = 0.996466466253;
    tmp_msg_0.base_time = 0.0546768046773;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 2372U;
    tmp_tmp_msg_0_0.priority = -109;
    tmp_tmp_msg_0_0.x = -16499;
    tmp_tmp_msg_0_0.y = -8458;
    tmp_tmp_msg_0_0.z = 10983;
    tmp_tmp_msg_0_0.t = 3021;
    IMC::GroundVelocity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.validity = 138U;
    tmp_tmp_tmp_msg_0_0_0.x = 0.708870611218;
    tmp_tmp_tmp_msg_0_0_0.y = 0.0718265759713;
    tmp_tmp_tmp_msg_0_0_0.z = 0.032352762812;
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
    msg.setTimeStamp(0.288871927295);
    msg.setSource(12778U);
    msg.setSourceEntity(98U);
    msg.setDestination(19281U);
    msg.setDestinationEntity(52U);
    msg.req_id = 35288U;
    msg.type = 10U;
    msg.max_size = 42062U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.398129189692;
    tmp_msg_0.base_lon = 0.624934732779;
    tmp_msg_0.base_time = 0.294791153764;
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
    msg.setTimeStamp(0.71948138777);
    msg.setSource(28016U);
    msg.setSourceEntity(53U);
    msg.setDestination(18257U);
    msg.setDestinationEntity(144U);
    msg.req_id = 18611U;
    msg.type = 110U;
    msg.max_size = 50341U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.994392888122;
    tmp_msg_0.base_lon = 0.78551024815;
    tmp_msg_0.base_time = 0.127507813184;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 53547U;
    tmp_tmp_msg_0_0.priority = -49;
    tmp_tmp_msg_0_0.x = 21116;
    tmp_tmp_msg_0_0.y = -11939;
    tmp_tmp_msg_0_0.z = 22216;
    tmp_tmp_msg_0_0.t = -17743;
    IMC::Sms tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.number.assign("ITQEFUKSGZPDQREEIFLIGPRICWMQMZYEOXDMGHYCUAZPWXSKRVUWJNKAVYODAOOOHJUSMJJDQXIKGCNINRDTBMRTWALPYCPTLSLBSPBDQAYUMCDFJIABKKCHSPTURNSWZFOMLMMVBFECBJOOYSBHVYDSFGHKGZZWTLSBAUULJXANNONXFAWUHZIHGEFVFVXRJNIEHXTY");
    tmp_tmp_tmp_msg_0_0_0.timeout = 22246U;
    tmp_tmp_tmp_msg_0_0_0.contents.assign("IGGOJPOOTQB");
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
    msg.setTimeStamp(0.279286296983);
    msg.setSource(56568U);
    msg.setSourceEntity(201U);
    msg.setDestination(33329U);
    msg.setDestinationEntity(117U);
    msg.original_source = 50131U;
    msg.destination = 56860U;
    msg.timeout = 0.407639466562;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.0333765969216;
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
    msg.setTimeStamp(0.705023942753);
    msg.setSource(50291U);
    msg.setSourceEntity(184U);
    msg.setDestination(41856U);
    msg.setDestinationEntity(217U);
    msg.original_source = 29186U;
    msg.destination = 59340U;
    msg.timeout = 0.468771084907;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.00952957314275;
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
    msg.setTimeStamp(0.818921688311);
    msg.setSource(280U);
    msg.setSourceEntity(161U);
    msg.setDestination(31815U);
    msg.setDestinationEntity(98U);
    msg.original_source = 44973U;
    msg.destination = 59712U;
    msg.timeout = 0.461530129196;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 170U;
    tmp_msg_0.mode.assign("DBOXVZAGIRJFOHHWKBTVXIXVZ");
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
    msg.setTimeStamp(0.0438323984511);
    msg.setSource(53044U);
    msg.setSourceEntity(209U);
    msg.setDestination(58417U);
    msg.setDestinationEntity(0U);
    msg.type = 89U;
    msg.comm_interface = 24904U;
    msg.model = 15442U;
    msg.list.assign("RSCUKYCVZZGDXAGXLKSVMZDWLRWOTKVPADKJYWNOPHCQSTUSDXLAQCDATNJLNZZJGCHBBOFFPFYBLQGHRDXHFJHLMQJYCOEEZIOUZILDWAIUASYWWIGEQTGBXKGRRCDYMWNBTZONNBMIQ");

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
    msg.setTimeStamp(0.0162744214214);
    msg.setSource(23403U);
    msg.setSourceEntity(60U);
    msg.setDestination(31008U);
    msg.setDestinationEntity(167U);
    msg.type = 82U;
    msg.comm_interface = 46507U;
    msg.model = 25200U;
    msg.list.assign("RKIYWULMQFCTCJDDHMEMYJHLYECNAXQV");

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
    msg.setTimeStamp(0.442634852192);
    msg.setSource(11313U);
    msg.setSourceEntity(77U);
    msg.setDestination(17666U);
    msg.setDestinationEntity(160U);
    msg.type = 97U;
    msg.comm_interface = 12340U;
    msg.model = 64806U;
    msg.list.assign("IUKPGLSDWTRGDRBWEEYUPAKNBLKHOSOQZWJEJNTWCTISRCPHXLDSGGYNYBUEIMITPVLJMEHBNPHJXLRUDNRIJBPSALCGACSCMXGAXXWDFTKHOKMYQVYNBJCOZ");

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
    msg.setTimeStamp(0.340655276748);
    msg.setSource(23761U);
    msg.setSourceEntity(158U);
    msg.setDestination(39105U);
    msg.setDestinationEntity(55U);
    msg.type = 233U;
    msg.req_id = 333143515U;
    msg.ttl = 55080U;
    msg.code = 125U;
    msg.destination.assign("RIXTAZEGNRPERUEPACSKVRRTOFUFZWZNDGWVWCQFMIMGFZKJOQVPDCYODVXJXLUZOWEIJUAYWTQCAZFLBXIZQYIKXVYDWLVHHIOHNPFRBOIZAOTGQXXUJMWZMOJSZDBFSHMSSTKRAVBMHCBHVUMEJAK");
    msg.source.assign("OVTYJXTROENUUXULNJJQLZWQRHFCMVPOIPPVDECUPRG");
    msg.acknowledge = 170U;
    msg.status = 247U;
    const char tmp_msg_0[] = {-96, -64, -101, -108, 20, -12, 83, 64, 48, 0, 32, -28, 34, -12, 124, 36, -45, 27, 2, -84};
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
    msg.setTimeStamp(0.403759504232);
    msg.setSource(50422U);
    msg.setSourceEntity(99U);
    msg.setDestination(16708U);
    msg.setDestinationEntity(191U);
    msg.type = 66U;
    msg.req_id = 3462847767U;
    msg.ttl = 9814U;
    msg.code = 138U;
    msg.destination.assign("OSQBGKBSQZCHHVDJYOASHFVJEKODFHOTLACOLJHOUZBIBCSJHS");
    msg.source.assign("OXJJWVERSNHTQA");
    msg.acknowledge = 233U;
    msg.status = 212U;
    const char tmp_msg_0[] = {125, 23, -34, 114, 26, 57, -75, 40, -36, -80, 29, -125, 33, 118, 116, -5, -110, 49, -87, -117, -69, -70, 21, 124, -22, 43, 64, -88, -92, -73, -126, 116, -72, -89, -20, -7, -63, 47, 74, 40, 20, 64, -32, -79, 1, -99, -35, -48, -122, 65, 62, 121, 104, 7, 46, -43, 54, -18, 56, 115, -117, -121, -7, 89, 58, 119, 84, 64, 37, -101, 48, 6, 24, -105, 54, -99, -87, 1, -64, -33, 126, -39, -113, -97, -18, 44, -91, -90, 58, -15, 22, -123, 73, 2, -37, 52, -98, 54, -92, 67, -30, 16, 71, 53, -8, 71, 101, 61, -33, 5, -10, 77, 75, -75, 38, -123, -38, -2, 45, 60, -5, -111, -56};
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
    msg.setTimeStamp(0.775880477135);
    msg.setSource(63035U);
    msg.setSourceEntity(122U);
    msg.setDestination(47157U);
    msg.setDestinationEntity(99U);
    msg.type = 201U;
    msg.req_id = 4178099063U;
    msg.ttl = 52278U;
    msg.code = 142U;
    msg.destination.assign("RMSVUPSSLKPGRLDQPVGABGVBYBIZQZGXPCEAEUOCPUBVITCYJTYYKVIEASHCMJKLNFXTFCUNWYOOKUWFWDKRGTQSTDQHURVWQIAAZVWPORBLAILJXMVLYBWNHRQJTLXKPSQXXIHYCMZL");
    msg.source.assign("KUKYOFFOECMBGUMLPMLCTBAZUXXGJXCSQFCMLKTMPDXWDJXQJNNEEBOFOKXKQKMDXLSWRUWAFNF");
    msg.acknowledge = 148U;
    msg.status = 190U;
    const char tmp_msg_0[] = {-114, 18, 67, -11, -82, -16, -100, 113, 106, 89, -65, -50, 81, -115, 97, -90, -67, 91, 115, 105, -67, -19, 58, -33, 49, -29, 27, -14, -83, -67, -63, 94, -62, 76, -89, 21, -97, -44, 53, -18, 18, 15, -79, -34, 124, -52, -79, -106, 32, 70, -95, 67, -22, 71, 114, -68};
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
    msg.setTimeStamp(0.565957002985);
    msg.setSource(2695U);
    msg.setSourceEntity(42U);
    msg.setDestination(4355U);
    msg.setDestinationEntity(82U);
    msg.id = 100U;
    msg.range = 0.647915442302;

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
    msg.setTimeStamp(0.484205734909);
    msg.setSource(43303U);
    msg.setSourceEntity(230U);
    msg.setDestination(35237U);
    msg.setDestinationEntity(134U);
    msg.id = 116U;
    msg.range = 0.826249443447;

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
    msg.setTimeStamp(0.920215793562);
    msg.setSource(56550U);
    msg.setSourceEntity(224U);
    msg.setDestination(37399U);
    msg.setDestinationEntity(132U);
    msg.id = 131U;
    msg.range = 0.878703553246;

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
    msg.setTimeStamp(0.22476027652);
    msg.setSource(41823U);
    msg.setSourceEntity(199U);
    msg.setDestination(38877U);
    msg.setDestinationEntity(58U);
    msg.beacon.assign("BSBRXNDCWIYNONYHHZMQEKMWGCZUHZNJYSNSQRJPNTIRHUXFYBZDAPCQKKHKQXQMXRGEAGAYEUVTOIUOZYMRJOPWRRVIZBEDFBUYMNELFLLTYGOADFMNZATCQWWRFBCMVAGBCOCOXKKBVQB");
    msg.lat = 0.95711525029;
    msg.lon = 0.0442286434982;
    msg.depth = 0.0264754576327;
    msg.query_channel = 200U;
    msg.reply_channel = 104U;
    msg.transponder_delay = 31U;

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
    msg.setTimeStamp(0.847837074023);
    msg.setSource(9662U);
    msg.setSourceEntity(220U);
    msg.setDestination(36787U);
    msg.setDestinationEntity(123U);
    msg.beacon.assign("ZURXCHTDIETLYJBUKRNHGQFHQMEXCWALAUNBIOMAMEKYTFJSOVJPTZTRLDNGVOJMWIFFNYCFPFOVBUOBAAGZXTXRONPKWHKOZASYVLSJXGCENNVRRZLWHQSKINUCYLWNVLMKUZNJUWZJTBSZPWAERJYDRYZQEQJTYEGXIHDSDSTRHBQVOFIDRPKCMXKMIESILMYPILFBFWQCIDXWPCXBTUDQBAUZP");
    msg.lat = 0.0848520678261;
    msg.lon = 0.160389109859;
    msg.depth = 0.664088817145;
    msg.query_channel = 48U;
    msg.reply_channel = 81U;
    msg.transponder_delay = 189U;

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
    msg.setTimeStamp(0.726353032316);
    msg.setSource(27125U);
    msg.setSourceEntity(180U);
    msg.setDestination(3715U);
    msg.setDestinationEntity(89U);
    msg.beacon.assign("UBUHBQYJOJALKDCCHEUSFJRWMBRKPKVWGEDANCBAONAZDQIBJVLLNFIJFRILVHIQGXTSXLVRHKZWYYSITXYJBPTNWOERMEKUCCYEEPQMQXHAVTDTNGLOEBSIWPXTUPNOGZVVKBQZLVQMUTAVAPYHSSMOWUXSFEPDNIXWDPEPHSGQZNZHDLMJCYVAKDLQUFGCFKMKRZZOYXZFROGRGLCQIRRNCEAHTYJTIMBXWDPYIHJOJBUFG");
    msg.lat = 0.506775896008;
    msg.lon = 0.094908190806;
    msg.depth = 0.926014126607;
    msg.query_channel = 146U;
    msg.reply_channel = 231U;
    msg.transponder_delay = 85U;

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
    msg.setTimeStamp(0.0247790333538);
    msg.setSource(1977U);
    msg.setSourceEntity(202U);
    msg.setDestination(54463U);
    msg.setDestinationEntity(50U);
    msg.op = 45U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QYTFFFBIDLGXVYZZDNFBOHNIGCDSBBIQHEECLYHTIJKKEPMJFKNHOPOWTLBCNSVFWIAPHHPOMJSRLZJXATWROIRTLGTQEOXGYDNUEBPSPGOQFRMXWXZCXKTDISDANJVDVAMMQQEHSJXPBSJIDFWXWVKHGLBXVRSHYZTUAVIWXQLURRBWCZZCYMYRIUNKQKEPZHOCKLKNCUEFEMPGASACMUUBGCVOJKWZYYWJMVDNMUQOAFGUSREVTDTJAN");
    tmp_msg_0.lat = 0.317516754478;
    tmp_msg_0.lon = 0.297475152419;
    tmp_msg_0.depth = 0.901077311265;
    tmp_msg_0.query_channel = 186U;
    tmp_msg_0.reply_channel = 196U;
    tmp_msg_0.transponder_delay = 24U;
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
    msg.setTimeStamp(0.575484231174);
    msg.setSource(35139U);
    msg.setSourceEntity(178U);
    msg.setDestination(46835U);
    msg.setDestinationEntity(129U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.194097130006);
    msg.setSource(40566U);
    msg.setSourceEntity(95U);
    msg.setDestination(50287U);
    msg.setDestinationEntity(114U);
    msg.op = 168U;

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
    msg.setTimeStamp(0.881762881512);
    msg.setSource(43657U);
    msg.setSourceEntity(154U);
    msg.setDestination(9894U);
    msg.setDestinationEntity(174U);
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.231535519436;
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
    msg.setTimeStamp(0.252645184914);
    msg.setSource(25200U);
    msg.setSourceEntity(201U);
    msg.setDestination(46714U);
    msg.setDestinationEntity(53U);
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("BXGCWRFIHCKKKMCRVZJGGXBPPYZWIUOZEMNCHYOYCSNTDVJJQFBKKSOEGEOLSAAOFXRBVNTVAHVFDQDWGCXLLBRMNYSTLGPMJZRNMSXMSVPQHYTRDJWIIPCNIGAQJULLEUTJJLWRMJTSEZKEXENPTAHOXABIKEQQFDKHLRVJPGVQOUDIOFBZLFVFWYIDNYYXSUIFOUHBGHZWDWW");
    tmp_tmp_msg_0_0.lat = 0.395484956364;
    tmp_tmp_msg_0_0.lon = 0.706518273886;
    tmp_tmp_msg_0_0.depth = 0.878769399025;
    tmp_tmp_msg_0_0.query_channel = 58U;
    tmp_tmp_msg_0_0.reply_channel = 33U;
    tmp_tmp_msg_0_0.transponder_delay = 89U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.479910825267;
    tmp_msg_0.y = 0.664581001646;
    tmp_msg_0.var_x = 0.199059267434;
    tmp_msg_0.var_y = 0.516935681118;
    tmp_msg_0.distance = 0.617156518704;
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
    msg.setTimeStamp(0.476270910954);
    msg.setSource(46351U);
    msg.setSourceEntity(43U);
    msg.setDestination(54256U);
    msg.setDestinationEntity(164U);
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.956638064209;
    tmp_msg_0.beam_height = 0.143543508551;
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
    msg.setTimeStamp(0.0314188975491);
    msg.setSource(30392U);
    msg.setSourceEntity(236U);
    msg.setDestination(32186U);
    msg.setDestinationEntity(163U);
    msg.op = 176U;
    msg.system.assign("VNOKXHUCHFSULSAARA");
    msg.range = 0.885492289468;
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 140U;
    tmp_msg_0.mask = 3901785871U;
    tmp_msg_0.scope_ref = 669275530U;
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
    msg.setTimeStamp(0.847788860538);
    msg.setSource(33455U);
    msg.setSourceEntity(71U);
    msg.setDestination(43093U);
    msg.setDestinationEntity(38U);
    msg.op = 3U;
    msg.system.assign("JNKPJEYYLXHYSWQFIUWKBISCAEHUEALGVQVYHPQMJVNJIUHFQYGLGDOQGEXXCEZFAZOJVRSVBHEKVIUFBHWMPDXCKOSFIJBTALWCHKDTUVVBLDBSTJONMCMIRGIFKLLBNRBNRGMQU");
    msg.range = 0.235794286601;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.70440050766;
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
    msg.setTimeStamp(0.49493508655);
    msg.setSource(62462U);
    msg.setSourceEntity(61U);
    msg.setDestination(27409U);
    msg.setDestinationEntity(162U);
    msg.op = 119U;
    msg.system.assign("WJQJKUPTUOQIXNAGFQLRXSWVCLLNSD");
    msg.range = 0.374675883402;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 1U;
    tmp_msg_0.snapshot.assign("AKSZSBYOUMFRDZEWCRRMLWOPANNJDCLQIRVBWJSBUXKNLTVSPGUPYSAFMDVXXAJDQPOGYHJLOEPYUZIAQJRRHCVKLFBHEEJMUETHZUVDJXZMXQEILKFAKMFNGBZIDNWJGABOIYSTZNGVCMKNBG");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 442U;
    tmp_tmp_msg_0_0.lat = 0.883066782346;
    tmp_tmp_msg_0_0.lon = 0.0742402768527;
    tmp_tmp_msg_0_0.z = 0.842266627848;
    tmp_tmp_msg_0_0.z_units = 86U;
    tmp_tmp_msg_0_0.speed = 0.865906855491;
    tmp_tmp_msg_0_0.speed_units = 156U;
    tmp_tmp_msg_0_0.duration = 60530U;
    tmp_tmp_msg_0_0.radius = 0.667523262766;
    tmp_tmp_msg_0_0.flags = 240U;
    tmp_tmp_msg_0_0.custom.assign("RHGROUBIVVPQMCJZJSWQDCTJPORYIADQRQMBVLBVKRUMJO");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.935432718878);
    msg.setSource(9256U);
    msg.setSourceEntity(2U);
    msg.setDestination(3715U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.49249500331);
    msg.setSource(29552U);
    msg.setSourceEntity(55U);
    msg.setDestination(60076U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.236476976403);
    msg.setSource(41732U);
    msg.setSourceEntity(198U);
    msg.setDestination(49048U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.00518273435725);
    msg.setSource(16856U);
    msg.setSourceEntity(232U);
    msg.setDestination(26037U);
    msg.setDestinationEntity(213U);
    msg.list.assign("MOMEKHUIMVRHGXNUJWHJAQPZOCXJAQTZIJMQED");

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
    msg.setTimeStamp(0.132575174455);
    msg.setSource(29087U);
    msg.setSourceEntity(15U);
    msg.setDestination(18309U);
    msg.setDestinationEntity(131U);
    msg.list.assign("RIHDOZMJVVGIHTAXZRICIGFFDKMBMJFMVSRWRRFDNXCYZDNBOOXQKIYMEITAMAQBGFWGQZFLXUSJSTWSKBPLCGKHHMTSCGCOUYNHWDSYOYHYAZNMEVRBZECUSBQTKPQRAVBU");

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
    msg.setTimeStamp(0.0716597783014);
    msg.setSource(61100U);
    msg.setSourceEntity(236U);
    msg.setDestination(32021U);
    msg.setDestinationEntity(17U);
    msg.list.assign("XVSXTSGPHKDYSCRFODXYHRISAASVDDNEZHFXFSWLQDEUOHCTHLGFOLVAWTHCWIQWMEDYZGCPNIVQROHWLHIHKAKUXFBIRPLONGGVZBEJBDEZWXOBNNMZKCAFTBBPKMEZIYCWJZSJTTNLXUMMRPTCNIIASENTAYBRXEGMWXGPHFBJUYTMUREKLTPARDQQJWKYQCDJRIYQYKSN");

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
    msg.setTimeStamp(0.36578571823);
    msg.setSource(19250U);
    msg.setSourceEntity(124U);
    msg.setDestination(58747U);
    msg.setDestinationEntity(160U);
    msg.peer.assign("ECOOKWXQIMNSCKDYFTDCWBCQPPTEXXSOZAHLSDFIYSWTQWMTPJ");
    msg.rssi = 0.995296319381;
    msg.integrity = 4286U;

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
    msg.setTimeStamp(0.662563335598);
    msg.setSource(56266U);
    msg.setSourceEntity(139U);
    msg.setDestination(19830U);
    msg.setDestinationEntity(245U);
    msg.peer.assign("JZAVZPWRGQWNPKZKXJQDGWTSXCBECOAXCFTRYQCPZSWPFRVQOFUDYVZIIMZMEJCSPONALNS");
    msg.rssi = 0.26436931629;
    msg.integrity = 39000U;

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
    msg.setTimeStamp(0.933654878894);
    msg.setSource(28174U);
    msg.setSourceEntity(155U);
    msg.setDestination(36675U);
    msg.setDestinationEntity(113U);
    msg.peer.assign("ICMZJBLAUIBO");
    msg.rssi = 0.177418793792;
    msg.integrity = 19560U;

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
    msg.setTimeStamp(0.975875367047);
    msg.setSource(16165U);
    msg.setSourceEntity(108U);
    msg.setDestination(64488U);
    msg.setDestinationEntity(188U);
    msg.value = 12154;

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
    msg.setTimeStamp(0.195405004638);
    msg.setSource(36478U);
    msg.setSourceEntity(217U);
    msg.setDestination(48745U);
    msg.setDestinationEntity(151U);
    msg.value = -24693;

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
    msg.setTimeStamp(0.45806696689);
    msg.setSource(25655U);
    msg.setSourceEntity(39U);
    msg.setDestination(16120U);
    msg.setDestinationEntity(233U);
    msg.value = 4755;

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
    msg.setTimeStamp(0.666568127543);
    msg.setSource(49207U);
    msg.setSourceEntity(30U);
    msg.setDestination(38575U);
    msg.setDestinationEntity(105U);
    msg.value = 0.0464593956906;

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
    msg.setTimeStamp(0.0606517037381);
    msg.setSource(24934U);
    msg.setSourceEntity(0U);
    msg.setDestination(47659U);
    msg.setDestinationEntity(201U);
    msg.value = 0.245511726487;

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
    msg.setTimeStamp(0.638400523946);
    msg.setSource(25016U);
    msg.setSourceEntity(157U);
    msg.setDestination(52255U);
    msg.setDestinationEntity(163U);
    msg.value = 0.899870755222;

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
    msg.setTimeStamp(0.948715385595);
    msg.setSource(41848U);
    msg.setSourceEntity(243U);
    msg.setDestination(36335U);
    msg.setDestinationEntity(126U);
    msg.value = 0.33529114573;

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
    msg.setTimeStamp(0.355490334683);
    msg.setSource(35745U);
    msg.setSourceEntity(100U);
    msg.setDestination(63039U);
    msg.setDestinationEntity(224U);
    msg.value = 0.760490413353;

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
    msg.setTimeStamp(0.957123453264);
    msg.setSource(355U);
    msg.setSourceEntity(100U);
    msg.setDestination(35487U);
    msg.setDestinationEntity(126U);
    msg.value = 0.507166346643;

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
    msg.setTimeStamp(0.359297178524);
    msg.setSource(22562U);
    msg.setSourceEntity(197U);
    msg.setDestination(53626U);
    msg.setDestinationEntity(97U);
    msg.validity = 15357U;
    msg.type = 14U;
    msg.utc_year = 40740U;
    msg.utc_month = 231U;
    msg.utc_day = 180U;
    msg.utc_time = 0.595542706437;
    msg.lat = 0.642369325422;
    msg.lon = 0.117997272027;
    msg.height = 0.219536898141;
    msg.satellites = 120U;
    msg.cog = 0.396083108677;
    msg.sog = 0.0245204642004;
    msg.hdop = 0.0564084876434;
    msg.vdop = 0.0269410741776;
    msg.hacc = 0.537966745415;
    msg.vacc = 0.489685581326;

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
    msg.setTimeStamp(0.846522708363);
    msg.setSource(32556U);
    msg.setSourceEntity(39U);
    msg.setDestination(18828U);
    msg.setDestinationEntity(228U);
    msg.validity = 64104U;
    msg.type = 76U;
    msg.utc_year = 13274U;
    msg.utc_month = 36U;
    msg.utc_day = 7U;
    msg.utc_time = 0.611599862627;
    msg.lat = 0.331966539671;
    msg.lon = 0.327392381092;
    msg.height = 0.158937851033;
    msg.satellites = 16U;
    msg.cog = 0.791006079266;
    msg.sog = 0.741295454911;
    msg.hdop = 0.724287962671;
    msg.vdop = 0.893309623725;
    msg.hacc = 0.947659791796;
    msg.vacc = 0.236776637082;

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
    msg.setTimeStamp(0.590296923172);
    msg.setSource(29409U);
    msg.setSourceEntity(10U);
    msg.setDestination(52821U);
    msg.setDestinationEntity(230U);
    msg.validity = 33117U;
    msg.type = 252U;
    msg.utc_year = 65444U;
    msg.utc_month = 1U;
    msg.utc_day = 26U;
    msg.utc_time = 0.317709433568;
    msg.lat = 0.531930163434;
    msg.lon = 0.391205341153;
    msg.height = 0.657266947717;
    msg.satellites = 12U;
    msg.cog = 0.689208763479;
    msg.sog = 0.545924436747;
    msg.hdop = 0.652423599832;
    msg.vdop = 0.684186114781;
    msg.hacc = 0.720787683306;
    msg.vacc = 0.661299406776;

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
    msg.setTimeStamp(0.854170173004);
    msg.setSource(576U);
    msg.setSourceEntity(72U);
    msg.setDestination(21390U);
    msg.setDestinationEntity(88U);
    msg.time = 0.371749113774;
    msg.phi = 0.340228057649;
    msg.theta = 0.139814516553;
    msg.psi = 0.777068620782;
    msg.psi_magnetic = 0.740631802677;

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
    msg.setTimeStamp(0.20280711405);
    msg.setSource(1484U);
    msg.setSourceEntity(86U);
    msg.setDestination(58305U);
    msg.setDestinationEntity(80U);
    msg.time = 0.566092080288;
    msg.phi = 0.875136231552;
    msg.theta = 0.554262717262;
    msg.psi = 0.974394819732;
    msg.psi_magnetic = 0.930829689494;

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
    msg.setTimeStamp(0.798358633207);
    msg.setSource(19427U);
    msg.setSourceEntity(96U);
    msg.setDestination(8354U);
    msg.setDestinationEntity(64U);
    msg.time = 0.419004896166;
    msg.phi = 0.755821394635;
    msg.theta = 0.460140582433;
    msg.psi = 0.207939849185;
    msg.psi_magnetic = 0.55831154476;

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
    msg.setTimeStamp(0.857639283466);
    msg.setSource(59441U);
    msg.setSourceEntity(112U);
    msg.setDestination(22721U);
    msg.setDestinationEntity(55U);
    msg.time = 0.729072581585;
    msg.x = 0.900906020417;
    msg.y = 0.902563602831;
    msg.z = 0.247069033365;
    msg.timestep = 0.131928049055;

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
    msg.setTimeStamp(0.599281363885);
    msg.setSource(30370U);
    msg.setSourceEntity(182U);
    msg.setDestination(5019U);
    msg.setDestinationEntity(74U);
    msg.time = 0.831773330702;
    msg.x = 0.298161830665;
    msg.y = 0.938969520437;
    msg.z = 0.709282571468;
    msg.timestep = 0.085588615285;

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
    msg.setTimeStamp(0.195775259032);
    msg.setSource(61300U);
    msg.setSourceEntity(124U);
    msg.setDestination(40146U);
    msg.setDestinationEntity(193U);
    msg.time = 0.0127735658583;
    msg.x = 0.412477718909;
    msg.y = 0.115284857097;
    msg.z = 0.14044985746;
    msg.timestep = 0.466346451936;

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
    msg.setTimeStamp(0.782677728938);
    msg.setSource(22013U);
    msg.setSourceEntity(32U);
    msg.setDestination(11670U);
    msg.setDestinationEntity(61U);
    msg.time = 0.604188099846;
    msg.x = 0.855748336981;
    msg.y = 0.447917542548;
    msg.z = 0.246568987632;

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
    msg.setTimeStamp(0.605367541676);
    msg.setSource(43909U);
    msg.setSourceEntity(129U);
    msg.setDestination(36075U);
    msg.setDestinationEntity(121U);
    msg.time = 0.490130478057;
    msg.x = 0.605113574864;
    msg.y = 0.907694912198;
    msg.z = 0.349377936557;

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
    msg.setTimeStamp(0.948005979754);
    msg.setSource(2297U);
    msg.setSourceEntity(179U);
    msg.setDestination(21887U);
    msg.setDestinationEntity(186U);
    msg.time = 0.522939797794;
    msg.x = 0.451997645033;
    msg.y = 0.00331254256085;
    msg.z = 0.258181477695;

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
    msg.setTimeStamp(0.380478871155);
    msg.setSource(32785U);
    msg.setSourceEntity(108U);
    msg.setDestination(51730U);
    msg.setDestinationEntity(132U);
    msg.time = 0.394448617817;
    msg.x = 0.265305116681;
    msg.y = 0.107150396532;
    msg.z = 0.385339135565;

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
    msg.setTimeStamp(0.451255344216);
    msg.setSource(53733U);
    msg.setSourceEntity(31U);
    msg.setDestination(24483U);
    msg.setDestinationEntity(187U);
    msg.time = 0.610846785226;
    msg.x = 0.556386020027;
    msg.y = 0.542385905562;
    msg.z = 0.380341063161;

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
    msg.setTimeStamp(0.281313114133);
    msg.setSource(34159U);
    msg.setSourceEntity(133U);
    msg.setDestination(28690U);
    msg.setDestinationEntity(90U);
    msg.time = 0.614834265093;
    msg.x = 0.899382559694;
    msg.y = 0.723452756766;
    msg.z = 0.604961508803;

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
    msg.setTimeStamp(0.820287543415);
    msg.setSource(2229U);
    msg.setSourceEntity(162U);
    msg.setDestination(63501U);
    msg.setDestinationEntity(70U);
    msg.time = 0.595655405867;
    msg.x = 0.381710491494;
    msg.y = 0.711351976745;
    msg.z = 0.0331243969951;

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
    msg.setTimeStamp(0.492543999694);
    msg.setSource(55023U);
    msg.setSourceEntity(148U);
    msg.setDestination(25119U);
    msg.setDestinationEntity(102U);
    msg.time = 0.439166827435;
    msg.x = 0.926364043142;
    msg.y = 0.545537025474;
    msg.z = 0.60542054683;

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
    msg.setTimeStamp(0.00519851490087);
    msg.setSource(12863U);
    msg.setSourceEntity(248U);
    msg.setDestination(4121U);
    msg.setDestinationEntity(149U);
    msg.time = 0.47865458094;
    msg.x = 0.499746008999;
    msg.y = 0.123956178987;
    msg.z = 0.0676480902693;

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
    msg.setTimeStamp(0.365489605218);
    msg.setSource(12983U);
    msg.setSourceEntity(241U);
    msg.setDestination(17006U);
    msg.setDestinationEntity(106U);
    msg.validity = 109U;
    msg.x = 0.214867228105;
    msg.y = 0.344459609342;
    msg.z = 0.214414672717;

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
    msg.setTimeStamp(0.0278624518146);
    msg.setSource(23221U);
    msg.setSourceEntity(43U);
    msg.setDestination(37660U);
    msg.setDestinationEntity(208U);
    msg.validity = 32U;
    msg.x = 0.527880560688;
    msg.y = 0.970507073187;
    msg.z = 0.199243155391;

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
    msg.setTimeStamp(0.222928665914);
    msg.setSource(23557U);
    msg.setSourceEntity(140U);
    msg.setDestination(58620U);
    msg.setDestinationEntity(179U);
    msg.validity = 60U;
    msg.x = 0.164814302654;
    msg.y = 0.514462818457;
    msg.z = 0.18114047192;

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
    msg.setTimeStamp(0.406879266936);
    msg.setSource(54217U);
    msg.setSourceEntity(244U);
    msg.setDestination(43885U);
    msg.setDestinationEntity(156U);
    msg.validity = 188U;
    msg.x = 0.73616020267;
    msg.y = 0.209832792539;
    msg.z = 0.714388912473;

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
    msg.setTimeStamp(0.275184144634);
    msg.setSource(15170U);
    msg.setSourceEntity(68U);
    msg.setDestination(57339U);
    msg.setDestinationEntity(62U);
    msg.validity = 194U;
    msg.x = 0.317534369941;
    msg.y = 0.185607870743;
    msg.z = 0.462920069079;

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
    msg.setTimeStamp(0.681748822703);
    msg.setSource(24614U);
    msg.setSourceEntity(240U);
    msg.setDestination(49659U);
    msg.setDestinationEntity(183U);
    msg.validity = 123U;
    msg.x = 0.257568106837;
    msg.y = 0.32122184424;
    msg.z = 0.0503930571496;

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
    msg.setTimeStamp(0.68892218312);
    msg.setSource(18501U);
    msg.setSourceEntity(38U);
    msg.setDestination(1862U);
    msg.setDestinationEntity(69U);
    msg.time = 0.729066705845;
    msg.x = 0.0592254199073;
    msg.y = 0.379164365006;
    msg.z = 0.532972630512;

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
    msg.setTimeStamp(0.397489452695);
    msg.setSource(3563U);
    msg.setSourceEntity(158U);
    msg.setDestination(56608U);
    msg.setDestinationEntity(148U);
    msg.time = 0.87652809185;
    msg.x = 0.261920806667;
    msg.y = 0.0254614353088;
    msg.z = 0.915651066492;

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
    msg.setTimeStamp(0.835574046069);
    msg.setSource(61136U);
    msg.setSourceEntity(71U);
    msg.setDestination(61702U);
    msg.setDestinationEntity(47U);
    msg.time = 0.0396780299969;
    msg.x = 0.0795811975745;
    msg.y = 0.124100230864;
    msg.z = 0.371122389766;

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
    msg.setTimeStamp(0.136073270798);
    msg.setSource(22362U);
    msg.setSourceEntity(199U);
    msg.setDestination(15937U);
    msg.setDestinationEntity(241U);
    msg.validity = 66U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.219912888058;
    tmp_msg_0.beam_height = 0.857775459938;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.113224329889;

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
    msg.setTimeStamp(0.52781528405);
    msg.setSource(60215U);
    msg.setSourceEntity(251U);
    msg.setDestination(32852U);
    msg.setDestinationEntity(13U);
    msg.validity = 104U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.778588951799;
    tmp_msg_0.y = 0.0027298752036;
    tmp_msg_0.z = 0.75846227016;
    tmp_msg_0.phi = 0.00307045364469;
    tmp_msg_0.theta = 0.778727763064;
    tmp_msg_0.psi = 0.657092022051;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.978241680856;

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
    msg.setTimeStamp(0.212963356202);
    msg.setSource(45925U);
    msg.setSourceEntity(222U);
    msg.setDestination(34418U);
    msg.setDestinationEntity(156U);
    msg.validity = 0U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.701684989381;
    tmp_msg_0.beam_height = 0.384451454675;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.596161654289;

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
    msg.setTimeStamp(0.543512760083);
    msg.setSource(29569U);
    msg.setSourceEntity(13U);
    msg.setDestination(42622U);
    msg.setDestinationEntity(9U);
    msg.value = 0.0442916590208;

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
    msg.setTimeStamp(0.0925869215396);
    msg.setSource(60101U);
    msg.setSourceEntity(175U);
    msg.setDestination(15308U);
    msg.setDestinationEntity(70U);
    msg.value = 0.460460832436;

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
    msg.setTimeStamp(0.445781965241);
    msg.setSource(11450U);
    msg.setSourceEntity(223U);
    msg.setDestination(49679U);
    msg.setDestinationEntity(103U);
    msg.value = 0.348281046945;

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
    msg.setTimeStamp(0.617704435529);
    msg.setSource(59706U);
    msg.setSourceEntity(172U);
    msg.setDestination(33026U);
    msg.setDestinationEntity(123U);
    msg.value = 0.154599714685;

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
    msg.setTimeStamp(0.824655723929);
    msg.setSource(50484U);
    msg.setSourceEntity(197U);
    msg.setDestination(7128U);
    msg.setDestinationEntity(155U);
    msg.value = 0.210125538046;

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
    msg.setTimeStamp(0.0875722765537);
    msg.setSource(62020U);
    msg.setSourceEntity(17U);
    msg.setDestination(16811U);
    msg.setDestinationEntity(26U);
    msg.value = 0.591386553847;

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
    msg.setTimeStamp(0.726565419008);
    msg.setSource(35592U);
    msg.setSourceEntity(161U);
    msg.setDestination(42268U);
    msg.setDestinationEntity(121U);
    msg.value = 0.0823392286071;

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
    msg.setTimeStamp(0.404232738581);
    msg.setSource(1036U);
    msg.setSourceEntity(63U);
    msg.setDestination(24137U);
    msg.setDestinationEntity(220U);
    msg.value = 0.0782632694032;

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
    msg.setTimeStamp(0.492957520307);
    msg.setSource(19101U);
    msg.setSourceEntity(108U);
    msg.setDestination(59000U);
    msg.setDestinationEntity(33U);
    msg.value = 0.781179654161;

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
    msg.setTimeStamp(0.855722499202);
    msg.setSource(40889U);
    msg.setSourceEntity(132U);
    msg.setDestination(17218U);
    msg.setDestinationEntity(21U);
    msg.value = 0.109224446804;

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
    msg.setTimeStamp(0.497754977805);
    msg.setSource(18653U);
    msg.setSourceEntity(72U);
    msg.setDestination(22068U);
    msg.setDestinationEntity(226U);
    msg.value = 0.701806422507;

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
    msg.setTimeStamp(0.856941661456);
    msg.setSource(31944U);
    msg.setSourceEntity(11U);
    msg.setDestination(26421U);
    msg.setDestinationEntity(144U);
    msg.value = 0.0942161061314;

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
    msg.setTimeStamp(0.278011373939);
    msg.setSource(44529U);
    msg.setSourceEntity(134U);
    msg.setDestination(41337U);
    msg.setDestinationEntity(247U);
    msg.value = 0.652941631284;

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
    msg.setTimeStamp(0.416163602888);
    msg.setSource(40222U);
    msg.setSourceEntity(193U);
    msg.setDestination(44420U);
    msg.setDestinationEntity(214U);
    msg.value = 0.356445515922;

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
    msg.setTimeStamp(0.631751929446);
    msg.setSource(3589U);
    msg.setSourceEntity(40U);
    msg.setDestination(23124U);
    msg.setDestinationEntity(232U);
    msg.value = 0.427642250021;

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
    msg.setTimeStamp(0.757051263646);
    msg.setSource(40182U);
    msg.setSourceEntity(241U);
    msg.setDestination(10812U);
    msg.setDestinationEntity(224U);
    msg.value = 0.349983900145;

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
    msg.setTimeStamp(0.834472919035);
    msg.setSource(1971U);
    msg.setSourceEntity(76U);
    msg.setDestination(62319U);
    msg.setDestinationEntity(235U);
    msg.value = 0.675386899165;

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
    msg.setTimeStamp(0.243629544509);
    msg.setSource(57771U);
    msg.setSourceEntity(18U);
    msg.setDestination(51908U);
    msg.setDestinationEntity(56U);
    msg.value = 0.708581472852;

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
    msg.setTimeStamp(0.106841545817);
    msg.setSource(41596U);
    msg.setSourceEntity(163U);
    msg.setDestination(39873U);
    msg.setDestinationEntity(189U);
    msg.value = 0.484694935201;

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
    msg.setTimeStamp(0.446909133853);
    msg.setSource(16889U);
    msg.setSourceEntity(113U);
    msg.setDestination(60149U);
    msg.setDestinationEntity(115U);
    msg.value = 0.576813053886;

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
    msg.setTimeStamp(0.017936622942);
    msg.setSource(25767U);
    msg.setSourceEntity(237U);
    msg.setDestination(14534U);
    msg.setDestinationEntity(61U);
    msg.value = 0.783089631127;

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
    msg.setTimeStamp(0.343481297158);
    msg.setSource(11562U);
    msg.setSourceEntity(25U);
    msg.setDestination(10262U);
    msg.setDestinationEntity(195U);
    msg.value = 0.49588497836;

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
    msg.setTimeStamp(0.413696752977);
    msg.setSource(56423U);
    msg.setSourceEntity(48U);
    msg.setDestination(51062U);
    msg.setDestinationEntity(234U);
    msg.value = 0.308278441434;

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
    msg.setTimeStamp(0.902845800643);
    msg.setSource(36673U);
    msg.setSourceEntity(182U);
    msg.setDestination(31619U);
    msg.setDestinationEntity(100U);
    msg.value = 0.644143889161;

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
    msg.setTimeStamp(0.250664754476);
    msg.setSource(55285U);
    msg.setSourceEntity(50U);
    msg.setDestination(43066U);
    msg.setDestinationEntity(112U);
    msg.direction = 0.0341109156017;
    msg.speed = 0.430392543486;
    msg.turbulence = 0.440787048536;

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
    msg.setTimeStamp(0.5999643418);
    msg.setSource(24691U);
    msg.setSourceEntity(242U);
    msg.setDestination(28042U);
    msg.setDestinationEntity(117U);
    msg.direction = 0.874619984234;
    msg.speed = 0.0277979872094;
    msg.turbulence = 0.600955764794;

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
    msg.setTimeStamp(0.9704736981);
    msg.setSource(26048U);
    msg.setSourceEntity(248U);
    msg.setDestination(34763U);
    msg.setDestinationEntity(174U);
    msg.direction = 0.514652326676;
    msg.speed = 0.638971374629;
    msg.turbulence = 0.700798097978;

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
    msg.setTimeStamp(0.840792629488);
    msg.setSource(35747U);
    msg.setSourceEntity(151U);
    msg.setDestination(54244U);
    msg.setDestinationEntity(126U);
    msg.value = 0.0688025277056;

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
    msg.setTimeStamp(0.254904336087);
    msg.setSource(56210U);
    msg.setSourceEntity(139U);
    msg.setDestination(1944U);
    msg.setDestinationEntity(14U);
    msg.value = 0.999138878314;

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
    msg.setTimeStamp(0.437021935284);
    msg.setSource(29551U);
    msg.setSourceEntity(9U);
    msg.setDestination(36269U);
    msg.setDestinationEntity(216U);
    msg.value = 0.259782228269;

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
    msg.setTimeStamp(0.731067656201);
    msg.setSource(31130U);
    msg.setSourceEntity(253U);
    msg.setDestination(53043U);
    msg.setDestinationEntity(235U);
    msg.value.assign("EZHWRMQYJTNCSMZULPQPXWYYRHYJOTZOXLQKWFNIUKVAKIZQYUEUMEYUWXTGEAEJVUNHTJFOCMCXGJDCOMFTRIBHJMJVBQESPFDOVBPAGYXKWVVBHAF");

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
    msg.setTimeStamp(0.970548742065);
    msg.setSource(21361U);
    msg.setSourceEntity(72U);
    msg.setDestination(48651U);
    msg.setDestinationEntity(29U);
    msg.value.assign("SYSZBWLXNKOHRJPTJQSYGBFBFGEYNNNRSWJSCRSCCZURYJRFFRGATDBIXWHIBMKUXGXCMHWRXIXGTIEDXDLULVITQOLOSMAJVPYNXDOAQCNYKAOXALTENGJMBFKVHGZKVOHVEKXQYOGSZDHMBL");

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
    msg.setTimeStamp(0.842133079895);
    msg.setSource(3060U);
    msg.setSourceEntity(241U);
    msg.setDestination(14811U);
    msg.setDestinationEntity(111U);
    msg.value.assign("XJPYZZXIOIKIDUYXHHCVAVWLWGDMZDNAOIXRUFQAIWMFKDFJCZFRANNWNGHOEBBQOMJPMLICKLIUUTYQMXRTKNHKQDTRQDDRMZBUFOWBAPSHPKQVVIEGDCGFYQNNJ");

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
    msg.setTimeStamp(0.494999889028);
    msg.setSource(10002U);
    msg.setSourceEntity(58U);
    msg.setDestination(38810U);
    msg.setDestinationEntity(67U);
    const char tmp_msg_0[] = {-84, -37, -122, 86, -59, 32, -42, 34, 33, 55, -58, 5, 107, -28, 93, 11, 110, -64, 86, 75, -30, -97, 1, -10, -6, -83, 76, 1, 74, 101, 83, 5, -79, 71, -5, 88, -81, 71, -97, -7, -7, -107, -26, 117, -9, -76, -101, 120, -104, 103, -40, 46, -79, -4, 59, -26, -118, 95, -128, -11, 112, -82, 44, -41, -5, 124, -111, 49, -10, 25, -39, -17, 84, 122, 47, -2, -10, 95, -48, -78, 59, 73, 105, -84, 113, -45, 4, -70, 41, -105, 111, -116, 47, 116, 26, 34, -15, 62, -93, -4, 76, 3, -128, 43, 1, 30, 41, 51, -61, 108, -27, 59, 12, 59, 51, -12, 110, 9, -56, 24, 2, -46, -49, -126, -40, 114, 4, -94, 101, 13, -119, -59, -43, 93, -56, -79, -51, 126, 39, 17, -125, 55, -4, -39, -9, 107, -87, -65, 44, -92, -26, 101, 4, -5, -46, -84, -111, 0, -36, 28, -28, 20, 27, -100, -116, 83, 91, 41, -20, 29, 40, 84, -49, -63, 107, -62, -68, -16, 121, -110};
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
    msg.setTimeStamp(0.737602430893);
    msg.setSource(46944U);
    msg.setSourceEntity(207U);
    msg.setDestination(5820U);
    msg.setDestinationEntity(64U);
    const char tmp_msg_0[] = {46, 20, 64, -2, 122, -26, 39, -57, -18, 68, -13, 57, 42, -36, 116, 53, 99, -81, -103, 61, -34, 40, -84, 47, -117, -46, 31, 75, 13, 78, -18, 87, -114, 75, 70, -116, 126, -27, 65, 37, 74, -100, -7, 113, 98, -24, 37, -60, 89, -14, 111, 20, -19, 117, -51, 75, -1, -123, 111, 23, -123, -17, -27, 73, 36, 119, -110, 2, 66, -124, 90, -41, 13, 21, -81, 40, 67, -122, -124, -87, 80, 88, 76, -49, 63, -128, 98, 53, 4, 87, -102, 26, 94, 89, -51, 46, -102, -65, -11, -2, -25, 21, -47, 44, 21, 95, -89, 123, -62, -36, 19, 58, -113, -85, -120, -65, -78, 113, -105, -63, 25, -48, -93, 16, -107, 122, -43, 31, -106, 51, 10, 125, -55, -34, -94, 36, -64, 7, 33, -87, -103, -52, -4, -112, -19, 87, -54, 35};
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
    msg.setTimeStamp(0.206315283591);
    msg.setSource(64026U);
    msg.setSourceEntity(188U);
    msg.setDestination(28802U);
    msg.setDestinationEntity(87U);
    const char tmp_msg_0[] = {-91, 29, 25, 93, 74, -30, 59, -32, 97, 15, -97, -28, -96, -108, 89, 53, 98, -21, 90, 23, -11, 87, 51, 12, -37, -60, -85, 89, -100, 6, -64, 89, 87, -98, -3, -61, -124, 29, 50, -35, -13, -117, 114, 7, -71, 60, 30, -127, 10, -59, -111, 90, -105, 99, -120, 16, -52, -66, -84, -9, 123, 75, 48, 106, -44, 120, -119, 62, -116, 17, -66, 23, 28, 118, -9, -119, -91, -2, -67, 57, -113, -120, -50, 53, -92, 46, -15};
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
    msg.setTimeStamp(0.152326391538);
    msg.setSource(53581U);
    msg.setSourceEntity(43U);
    msg.setDestination(40602U);
    msg.setDestinationEntity(193U);
    msg.value = 0.382861024891;

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
    msg.setTimeStamp(0.158002271709);
    msg.setSource(20972U);
    msg.setSourceEntity(74U);
    msg.setDestination(20364U);
    msg.setDestinationEntity(25U);
    msg.value = 0.147989144508;

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
    msg.setTimeStamp(0.976073526631);
    msg.setSource(58115U);
    msg.setSourceEntity(117U);
    msg.setDestination(37853U);
    msg.setDestinationEntity(27U);
    msg.value = 0.203014953233;

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
    msg.setTimeStamp(0.218055278872);
    msg.setSource(61107U);
    msg.setSourceEntity(175U);
    msg.setDestination(133U);
    msg.setDestinationEntity(125U);
    msg.type = 43U;
    msg.frequency = 2208346148U;
    msg.min_range = 42291U;
    msg.max_range = 63199U;
    msg.bits_per_point = 103U;
    msg.scale_factor = 0.165088162816;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.856429123899;
    tmp_msg_0.beam_height = 0.564156667831;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-16, -89, 79, 34, -96, -13, -14, 116, -59, -111, -103, -117, -3, -101, 114, -37, -62, -112, 107, 0, -109, -87, 8, -81, 17, 24, 114, 36, -87, -71, -11, 104, -80, 57, -23, -21, -116, -33, -74, 8, 66, 95, -10, 35, 79, 27, 73, 6, -94, 83, -90, -40, -55, 65, 116, 42, -66, 100, -23, -113, 113, 42, -14, 122, -43, -6, -97, 91, 13, -114, -111, 67, -62, 22, -24, 46, -5, -110, -39, -66, 93, 51, -27, -87, -58, -6, 28, 92, 54, 103, 34, 117, -53, -8, 105, -47, -29, -37, 100, -112, -40, -103, -103, 75, 88, -56, 104, 76, 6, -76, 5, 117, 50, -47, 88, 102, 119, -16, -100, -89, -127, 91, 121, -21, 57, 119, 36, 70, 118, 6, 125, -6, 121, 99, 94, 121, -96, -10, 109, 123, -47, -44, -19, 31, 82, 9, -82, -58, -91, -126, 54, 77, -6, -52, -127, -123, 32, 71, 92, 72, 6, -118, 50, -112, 63, -109, 7, -51, 23, 106, 122, -106, -36, 16, -2, -73, 125, -86, -115, 59, 10, 125, 42, -7, -8, -116, 49, -51, 1, -80, 6, 72, -9, -117, -65, -16, 112, 67, -35, 63, -104, -9, -86, -71, -30, -100, 115, -76, -1, 0, -62, 100, 47, 36, 97, -1, 58, -124, 63, -15, -51, -77, 119, 73, -2, -126, -125, -79, 10, 9, -25, -32, -58, -49, -37, 61, 42, 25, 54, 117, -60, -89, -73, -31, 41, -99, -106};
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
    msg.setTimeStamp(0.246602173873);
    msg.setSource(37501U);
    msg.setSourceEntity(150U);
    msg.setDestination(18203U);
    msg.setDestinationEntity(67U);
    msg.type = 134U;
    msg.frequency = 3370648475U;
    msg.min_range = 761U;
    msg.max_range = 48915U;
    msg.bits_per_point = 11U;
    msg.scale_factor = 0.864049820168;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.918503959511;
    tmp_msg_0.beam_height = 0.338814985925;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-97, -106, 117, 120, -78, -63, 0, 113, 106, 50, -112, -128, 31, 31, 12, -54, 11, -49, 74, 56, 88, -122, -76, 123, 71, 14, -25, -95, -4, -33, 70, 34, -125, -113, 54, 2, -59, 42, -13, 31, 9, 20, -100, 69, 95, -34, 99, -126, -21, -15, 32, 82, -120, 8, 48, -6, 97, -46, 24, 0, -98, 42, -78, 33, -12, -8, -96, 109, 68, 99, 103, 39, 107, 45, 65, 90, -117, -13, 8, 38, -65, -116, 66, 108, 50, -107, -114, 125, -6, -117, 26, 53, 118, -15, 37, -55, -34, -97, -88, 67, -98, -8, -28, -117, -69, 36, -81, 99, 118, 55, -22, 77, -110, 40, -90, 90, -100, 117, -73, -53, 58, -43, -26, -27, -45, -38, 118, -51, -107, 60, 63, 97, 83, 71, 116, -98, -94, -92, -95, -34, 26, -61, -101, -103, 125, -43, -88, 24, 8, -127, 57, 59, 13, -59, 104, 45, -24, 89, 83, 75, -67};
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
    msg.setTimeStamp(0.698495882045);
    msg.setSource(19046U);
    msg.setSourceEntity(111U);
    msg.setDestination(61589U);
    msg.setDestinationEntity(47U);
    msg.type = 34U;
    msg.frequency = 56980411U;
    msg.min_range = 5393U;
    msg.max_range = 55000U;
    msg.bits_per_point = 195U;
    msg.scale_factor = 0.809098342633;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.429737270518;
    tmp_msg_0.beam_height = 0.0254062571118;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {30, -97, 48, -50, 116, 23, -75, 22, -23, 86, 29, -68, 90, 73, -83, 12, 94, 12, 11, 20, 108, -91, -26, -87, -18, -42, -47, 86, -99, 34, -89, 36, 22, 39, -68, 119, -96, 120, 12, -118, -72, -75, 104, -36, -90, -2, -83, 107, 11, 116, 70, -120, 20, 77, 88, -48, -104, -118, 123, -23, 70, 59, -10, 98, 56, 34, 33, 77, 106, 32, 29, 59, 4, -74, 11, 23, 116, 10, 34, 111, -112, 110, 17, 1, 11, 66, 30, -89, -57, -77, 91, 32, 52, 46, 43, 34, 12, -36, -110, 30, 50, 75, 83, 102, -15, 114, 29, 123, 49, -48, -68, 90, -92, 83, 103, -66, -90, 4, 12, -41, -3, 15, -112, 100, 75, 109, -1, 91, 54, 29, -123, 55, 56, 19, 111, -15, -80, 65, -123, -43, -90, -102, 78, -59, 77, -10, -2, 27, -101, 74, -99, 122};
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
    msg.setTimeStamp(0.273135738359);
    msg.setSource(38514U);
    msg.setSourceEntity(107U);
    msg.setDestination(52959U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.579978002969);
    msg.setSource(34125U);
    msg.setSourceEntity(156U);
    msg.setDestination(913U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.00911346121022);
    msg.setSource(26464U);
    msg.setSourceEntity(206U);
    msg.setDestination(3439U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.297227000184);
    msg.setSource(31795U);
    msg.setSourceEntity(19U);
    msg.setDestination(31310U);
    msg.setDestinationEntity(72U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.586231025666);
    msg.setSource(14468U);
    msg.setSourceEntity(51U);
    msg.setDestination(20963U);
    msg.setDestinationEntity(230U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.820482529415);
    msg.setSource(34969U);
    msg.setSourceEntity(154U);
    msg.setDestination(61270U);
    msg.setDestinationEntity(222U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.417401978286);
    msg.setSource(35891U);
    msg.setSourceEntity(146U);
    msg.setDestination(18038U);
    msg.setDestinationEntity(123U);
    msg.value = 0.705337013094;
    msg.confidence = 0.525178275704;
    msg.opmodes.assign("MJBIOVGMXVWMJLKRKJHRVQXUNCSPNILSGKRXFBPIAYSLOXLTIJUWAQDTVGEIHNCHBLEFBZTXTPTMGLNZIVPFPKW");

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
    msg.setTimeStamp(0.71655956605);
    msg.setSource(50094U);
    msg.setSourceEntity(237U);
    msg.setDestination(44989U);
    msg.setDestinationEntity(187U);
    msg.value = 0.349020039218;
    msg.confidence = 0.741577747901;
    msg.opmodes.assign("BPZWOJBKEEZKGUJTHVDAVZLOIJTBOGINRTFUVCLZZSYVUXPNWYEMMJPSPELCXDGWFQNUCTEWIVXAJSEXPHJTMVQYBOOXUAKVHLBWEHLPOGUCALKKDZIQKCQCHEKBUSCACBZILGSJMTMUHDNMXFMQQLAWQRZPPGFHYPGDRNCKHFIOOB");

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
    msg.setTimeStamp(0.33379582382);
    msg.setSource(45795U);
    msg.setSourceEntity(63U);
    msg.setDestination(65309U);
    msg.setDestinationEntity(126U);
    msg.value = 0.910368765218;
    msg.confidence = 0.0558999781634;
    msg.opmodes.assign("UJRBBEXJFDITXHEHCIYRNDQMQ");

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
    msg.setTimeStamp(0.319303023356);
    msg.setSource(46282U);
    msg.setSourceEntity(26U);
    msg.setDestination(12432U);
    msg.setDestinationEntity(241U);
    msg.itow = 1787702301U;
    msg.lat = 0.982408288576;
    msg.lon = 0.619969214919;
    msg.height_ell = 0.637449744633;
    msg.height_sea = 0.597074234195;
    msg.hacc = 0.253645175327;
    msg.vacc = 0.583133501391;
    msg.vel_n = 0.331212379934;
    msg.vel_e = 0.966198252962;
    msg.vel_d = 0.503501786866;
    msg.speed = 0.753379839605;
    msg.gspeed = 0.291849547752;
    msg.heading = 0.876429920927;
    msg.sacc = 0.428815434817;
    msg.cacc = 0.319173987322;

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
    msg.setTimeStamp(0.360898154784);
    msg.setSource(21120U);
    msg.setSourceEntity(82U);
    msg.setDestination(55073U);
    msg.setDestinationEntity(210U);
    msg.itow = 475684560U;
    msg.lat = 0.950296089635;
    msg.lon = 0.693280937035;
    msg.height_ell = 0.28215919115;
    msg.height_sea = 0.922158106227;
    msg.hacc = 0.23879432968;
    msg.vacc = 0.377147253175;
    msg.vel_n = 0.0410410247024;
    msg.vel_e = 0.292841100322;
    msg.vel_d = 0.0404942555601;
    msg.speed = 0.418109836392;
    msg.gspeed = 0.691333530116;
    msg.heading = 0.184943491757;
    msg.sacc = 0.0837974444106;
    msg.cacc = 0.639594332763;

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
    msg.setTimeStamp(0.563771940372);
    msg.setSource(44884U);
    msg.setSourceEntity(92U);
    msg.setDestination(3722U);
    msg.setDestinationEntity(54U);
    msg.itow = 541172976U;
    msg.lat = 0.884245057292;
    msg.lon = 0.565306644355;
    msg.height_ell = 0.922994054056;
    msg.height_sea = 0.141896836233;
    msg.hacc = 0.0415587839092;
    msg.vacc = 0.0619976674891;
    msg.vel_n = 0.483893847277;
    msg.vel_e = 0.447157516737;
    msg.vel_d = 0.85311760418;
    msg.speed = 0.892159277112;
    msg.gspeed = 0.598054044221;
    msg.heading = 0.973486687922;
    msg.sacc = 0.904450666207;
    msg.cacc = 0.891986351037;

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
    msg.setTimeStamp(0.544722087837);
    msg.setSource(8984U);
    msg.setSourceEntity(57U);
    msg.setDestination(63673U);
    msg.setDestinationEntity(43U);
    msg.id = 105U;
    msg.value = 0.788446222459;

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
    msg.setTimeStamp(0.490504621677);
    msg.setSource(5085U);
    msg.setSourceEntity(218U);
    msg.setDestination(48370U);
    msg.setDestinationEntity(4U);
    msg.id = 84U;
    msg.value = 0.194377604422;

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
    msg.setTimeStamp(0.239367534775);
    msg.setSource(33812U);
    msg.setSourceEntity(124U);
    msg.setDestination(17771U);
    msg.setDestinationEntity(144U);
    msg.id = 240U;
    msg.value = 0.0901847980048;

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
    msg.setTimeStamp(0.00816115723702);
    msg.setSource(1707U);
    msg.setSourceEntity(125U);
    msg.setDestination(7986U);
    msg.setDestinationEntity(20U);
    msg.x = 0.148141379373;
    msg.y = 0.136359886475;
    msg.z = 0.24631804815;
    msg.phi = 0.785577612659;
    msg.theta = 0.180494080773;
    msg.psi = 0.748471763789;

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
    msg.setTimeStamp(0.862701866748);
    msg.setSource(63794U);
    msg.setSourceEntity(13U);
    msg.setDestination(46698U);
    msg.setDestinationEntity(65U);
    msg.x = 0.690124135466;
    msg.y = 0.590822628581;
    msg.z = 0.00859231302257;
    msg.phi = 0.94939498637;
    msg.theta = 0.5794525553;
    msg.psi = 5.33979218355e-05;

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
    msg.setTimeStamp(0.705743690023);
    msg.setSource(6541U);
    msg.setSourceEntity(153U);
    msg.setDestination(47911U);
    msg.setDestinationEntity(179U);
    msg.x = 0.260837833747;
    msg.y = 0.670457934977;
    msg.z = 0.619995210578;
    msg.phi = 0.723922188876;
    msg.theta = 0.513708783579;
    msg.psi = 0.819547765281;

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
    msg.setTimeStamp(0.831085047658);
    msg.setSource(4913U);
    msg.setSourceEntity(215U);
    msg.setDestination(14151U);
    msg.setDestinationEntity(50U);
    msg.beam_width = 0.00586850661061;
    msg.beam_height = 0.616684839867;

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
    msg.setTimeStamp(0.932957079378);
    msg.setSource(11279U);
    msg.setSourceEntity(235U);
    msg.setDestination(23533U);
    msg.setDestinationEntity(218U);
    msg.beam_width = 0.532766248778;
    msg.beam_height = 0.872797579738;

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
    msg.setTimeStamp(0.131727739139);
    msg.setSource(50336U);
    msg.setSourceEntity(236U);
    msg.setDestination(47049U);
    msg.setDestinationEntity(193U);
    msg.beam_width = 0.993897489306;
    msg.beam_height = 0.343052427395;

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
    msg.setTimeStamp(0.739743892197);
    msg.setSource(7418U);
    msg.setSourceEntity(36U);
    msg.setDestination(40147U);
    msg.setDestinationEntity(253U);
    msg.sane = 230U;

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
    msg.setTimeStamp(0.980749442278);
    msg.setSource(27139U);
    msg.setSourceEntity(54U);
    msg.setDestination(41443U);
    msg.setDestinationEntity(68U);
    msg.sane = 42U;

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
    msg.setTimeStamp(0.621693846778);
    msg.setSource(5596U);
    msg.setSourceEntity(216U);
    msg.setDestination(19713U);
    msg.setDestinationEntity(62U);
    msg.sane = 120U;

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
    msg.setTimeStamp(0.964058307973);
    msg.setSource(19811U);
    msg.setSourceEntity(78U);
    msg.setDestination(56041U);
    msg.setDestinationEntity(224U);
    msg.value = 0.380654649917;

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
    msg.setTimeStamp(0.355124302374);
    msg.setSource(10349U);
    msg.setSourceEntity(223U);
    msg.setDestination(13178U);
    msg.setDestinationEntity(81U);
    msg.value = 0.687173550989;

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
    msg.setTimeStamp(0.848780379522);
    msg.setSource(54940U);
    msg.setSourceEntity(15U);
    msg.setDestination(23864U);
    msg.setDestinationEntity(217U);
    msg.value = 0.212572405982;

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
    msg.setTimeStamp(0.460957703212);
    msg.setSource(5543U);
    msg.setSourceEntity(100U);
    msg.setDestination(53643U);
    msg.setDestinationEntity(187U);
    msg.value = 0.941693484923;

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
    msg.setTimeStamp(0.848215130844);
    msg.setSource(28238U);
    msg.setSourceEntity(77U);
    msg.setDestination(4309U);
    msg.setDestinationEntity(157U);
    msg.value = 0.272496686583;

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
    msg.setTimeStamp(0.206258611773);
    msg.setSource(51552U);
    msg.setSourceEntity(117U);
    msg.setDestination(57133U);
    msg.setDestinationEntity(5U);
    msg.value = 0.681585527277;

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
    msg.setTimeStamp(0.987056865001);
    msg.setSource(45707U);
    msg.setSourceEntity(75U);
    msg.setDestination(43443U);
    msg.setDestinationEntity(178U);
    msg.value = 0.191027019031;

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
    msg.setTimeStamp(0.114143217098);
    msg.setSource(57457U);
    msg.setSourceEntity(118U);
    msg.setDestination(37657U);
    msg.setDestinationEntity(180U);
    msg.value = 0.621100309555;

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
    msg.setTimeStamp(0.526195471569);
    msg.setSource(13835U);
    msg.setSourceEntity(34U);
    msg.setDestination(65067U);
    msg.setDestinationEntity(31U);
    msg.value = 0.0147668865793;

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
    msg.setTimeStamp(0.961454297781);
    msg.setSource(27003U);
    msg.setSourceEntity(242U);
    msg.setDestination(65481U);
    msg.setDestinationEntity(252U);
    msg.value = 0.256852972758;

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
    msg.setTimeStamp(0.658694597408);
    msg.setSource(16190U);
    msg.setSourceEntity(72U);
    msg.setDestination(22350U);
    msg.setDestinationEntity(127U);
    msg.value = 0.758064551271;

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
    msg.setTimeStamp(0.999494192645);
    msg.setSource(12847U);
    msg.setSourceEntity(75U);
    msg.setDestination(49495U);
    msg.setDestinationEntity(38U);
    msg.value = 0.320873238546;

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
    msg.setTimeStamp(0.76788536046);
    msg.setSource(9248U);
    msg.setSourceEntity(75U);
    msg.setDestination(48001U);
    msg.setDestinationEntity(31U);
    msg.value = 0.274180031848;

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
    msg.setTimeStamp(0.867010813819);
    msg.setSource(19871U);
    msg.setSourceEntity(31U);
    msg.setDestination(40049U);
    msg.setDestinationEntity(197U);
    msg.value = 0.966576367092;

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
    msg.setTimeStamp(0.487092737463);
    msg.setSource(53328U);
    msg.setSourceEntity(45U);
    msg.setDestination(30433U);
    msg.setDestinationEntity(37U);
    msg.value = 0.782156516076;

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
    msg.setTimeStamp(0.808740500832);
    msg.setSource(24285U);
    msg.setSourceEntity(59U);
    msg.setDestination(5276U);
    msg.setDestinationEntity(38U);
    msg.value = 0.721801156958;

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
    msg.setTimeStamp(0.941846838879);
    msg.setSource(42922U);
    msg.setSourceEntity(98U);
    msg.setDestination(42829U);
    msg.setDestinationEntity(250U);
    msg.value = 0.870050396154;

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
    msg.setTimeStamp(0.214593162515);
    msg.setSource(5169U);
    msg.setSourceEntity(155U);
    msg.setDestination(37448U);
    msg.setDestinationEntity(228U);
    msg.value = 0.805331552219;

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
    msg.setTimeStamp(0.486809620945);
    msg.setSource(26463U);
    msg.setSourceEntity(23U);
    msg.setDestination(39267U);
    msg.setDestinationEntity(33U);
    msg.value = 0.315779563444;

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
    msg.setTimeStamp(0.682309839055);
    msg.setSource(29075U);
    msg.setSourceEntity(205U);
    msg.setDestination(43266U);
    msg.setDestinationEntity(187U);
    msg.value = 0.0589094360564;

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
    msg.setTimeStamp(0.266752084793);
    msg.setSource(11666U);
    msg.setSourceEntity(158U);
    msg.setDestination(10284U);
    msg.setDestinationEntity(67U);
    msg.value = 0.792437565831;

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
    msg.setTimeStamp(0.935969002265);
    msg.setSource(49361U);
    msg.setSourceEntity(16U);
    msg.setDestination(5342U);
    msg.setDestinationEntity(147U);
    msg.value = 0.776831176381;

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
    msg.setTimeStamp(0.60086994245);
    msg.setSource(3809U);
    msg.setSourceEntity(115U);
    msg.setDestination(37941U);
    msg.setDestinationEntity(161U);
    msg.value = 0.929667861615;

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
    msg.setTimeStamp(0.669198879596);
    msg.setSource(7915U);
    msg.setSourceEntity(18U);
    msg.setDestination(43091U);
    msg.setDestinationEntity(84U);
    msg.value = 0.0982202336122;

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
    msg.setTimeStamp(0.689473503439);
    msg.setSource(41847U);
    msg.setSourceEntity(94U);
    msg.setDestination(54711U);
    msg.setDestinationEntity(142U);
    msg.validity = 42432U;
    msg.type = 253U;
    msg.tow = 4236203556U;
    msg.base_lat = 0.842270320485;
    msg.base_lon = 0.502338397529;
    msg.base_height = 0.0268060201583;
    msg.n = 0.430414039374;
    msg.e = 0.322788396482;
    msg.d = 0.347823307928;
    msg.v_n = 0.614578208707;
    msg.v_e = 0.243686264456;
    msg.v_d = 0.453081569691;
    msg.satellites = 191U;
    msg.iar_hyp = 18327U;
    msg.iar_ratio = 0.509991622011;

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
    msg.setTimeStamp(0.19472604981);
    msg.setSource(13425U);
    msg.setSourceEntity(163U);
    msg.setDestination(58116U);
    msg.setDestinationEntity(34U);
    msg.validity = 11850U;
    msg.type = 189U;
    msg.tow = 3438308204U;
    msg.base_lat = 0.17702542993;
    msg.base_lon = 0.185805349602;
    msg.base_height = 0.543917943811;
    msg.n = 0.602586374888;
    msg.e = 0.711020973207;
    msg.d = 0.731179217635;
    msg.v_n = 0.672082725768;
    msg.v_e = 0.35551217005;
    msg.v_d = 0.868571448708;
    msg.satellites = 57U;
    msg.iar_hyp = 62074U;
    msg.iar_ratio = 0.981860467683;

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
    msg.setTimeStamp(0.824518846608);
    msg.setSource(63116U);
    msg.setSourceEntity(132U);
    msg.setDestination(59488U);
    msg.setDestinationEntity(199U);
    msg.validity = 46122U;
    msg.type = 137U;
    msg.tow = 4126535454U;
    msg.base_lat = 0.480459505855;
    msg.base_lon = 0.479266406122;
    msg.base_height = 0.475521904138;
    msg.n = 0.460139494565;
    msg.e = 0.563651908554;
    msg.d = 0.237359601336;
    msg.v_n = 0.50958018112;
    msg.v_e = 0.0997864824142;
    msg.v_d = 0.664362067457;
    msg.satellites = 245U;
    msg.iar_hyp = 2295U;
    msg.iar_ratio = 0.230014602461;

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
    msg.setTimeStamp(0.659779816543);
    msg.setSource(41645U);
    msg.setSourceEntity(41U);
    msg.setDestination(27455U);
    msg.setDestinationEntity(121U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.29190226263;
    tmp_msg_0.lon = 0.966399956497;
    tmp_msg_0.height = 0.0717159570897;
    tmp_msg_0.x = 0.0515702918788;
    tmp_msg_0.y = 0.987373221042;
    tmp_msg_0.z = 0.25529923011;
    tmp_msg_0.phi = 0.360233855027;
    tmp_msg_0.theta = 0.145378059283;
    tmp_msg_0.psi = 0.807610147151;
    tmp_msg_0.u = 0.553859331222;
    tmp_msg_0.v = 0.334401419505;
    tmp_msg_0.w = 0.617484580029;
    tmp_msg_0.vx = 0.768194085523;
    tmp_msg_0.vy = 0.333311826472;
    tmp_msg_0.vz = 0.159077193785;
    tmp_msg_0.p = 0.0691444390364;
    tmp_msg_0.q = 0.830005023505;
    tmp_msg_0.r = 0.780603808161;
    tmp_msg_0.depth = 0.236538927731;
    tmp_msg_0.alt = 0.638353860435;
    msg.state.set(tmp_msg_0);
    msg.type = 227U;

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
    msg.setTimeStamp(0.202282645298);
    msg.setSource(10358U);
    msg.setSourceEntity(242U);
    msg.setDestination(31153U);
    msg.setDestinationEntity(39U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.260283647007;
    tmp_msg_0.lon = 0.654371831074;
    tmp_msg_0.height = 0.595141812951;
    tmp_msg_0.x = 0.226536322297;
    tmp_msg_0.y = 0.9607471512;
    tmp_msg_0.z = 0.539250646303;
    tmp_msg_0.phi = 0.550185741327;
    tmp_msg_0.theta = 0.659773575788;
    tmp_msg_0.psi = 0.220837212969;
    tmp_msg_0.u = 0.843754675268;
    tmp_msg_0.v = 0.198991799519;
    tmp_msg_0.w = 0.409768658631;
    tmp_msg_0.vx = 0.640850400004;
    tmp_msg_0.vy = 0.793217389179;
    tmp_msg_0.vz = 0.709172413806;
    tmp_msg_0.p = 0.227675719821;
    tmp_msg_0.q = 0.622703872901;
    tmp_msg_0.r = 0.937933168393;
    tmp_msg_0.depth = 0.800244781581;
    tmp_msg_0.alt = 0.211934893373;
    msg.state.set(tmp_msg_0);
    msg.type = 21U;

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
    msg.setTimeStamp(0.180580797347);
    msg.setSource(274U);
    msg.setSourceEntity(141U);
    msg.setDestination(17807U);
    msg.setDestinationEntity(170U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.333697386238;
    tmp_msg_0.lon = 0.910419090417;
    tmp_msg_0.height = 0.480012590996;
    tmp_msg_0.x = 0.627698225772;
    tmp_msg_0.y = 0.428269159594;
    tmp_msg_0.z = 0.200818312176;
    tmp_msg_0.phi = 0.75706480962;
    tmp_msg_0.theta = 0.916143868038;
    tmp_msg_0.psi = 0.107651082099;
    tmp_msg_0.u = 0.0918162474071;
    tmp_msg_0.v = 0.98514083602;
    tmp_msg_0.w = 0.858081029975;
    tmp_msg_0.vx = 0.618030446743;
    tmp_msg_0.vy = 0.0140005451153;
    tmp_msg_0.vz = 0.204455006343;
    tmp_msg_0.p = 0.680659306017;
    tmp_msg_0.q = 0.591728745559;
    tmp_msg_0.r = 0.00640739155053;
    tmp_msg_0.depth = 0.0539950822596;
    tmp_msg_0.alt = 0.588650751442;
    msg.state.set(tmp_msg_0);
    msg.type = 94U;

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
    msg.setTimeStamp(0.228615357461);
    msg.setSource(41852U);
    msg.setSourceEntity(228U);
    msg.setDestination(6842U);
    msg.setDestinationEntity(126U);
    msg.value = 0.843478921102;

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
    msg.setTimeStamp(0.334718516815);
    msg.setSource(7181U);
    msg.setSourceEntity(254U);
    msg.setDestination(13122U);
    msg.setDestinationEntity(42U);
    msg.value = 0.149456287871;

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
    msg.setTimeStamp(0.441975452283);
    msg.setSource(62149U);
    msg.setSourceEntity(24U);
    msg.setDestination(457U);
    msg.setDestinationEntity(135U);
    msg.value = 0.990238192968;

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
    msg.setTimeStamp(0.0404065093998);
    msg.setSource(43446U);
    msg.setSourceEntity(40U);
    msg.setDestination(65400U);
    msg.setDestinationEntity(247U);
    msg.value = 0.616540500036;

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
    msg.setTimeStamp(0.735395178472);
    msg.setSource(63229U);
    msg.setSourceEntity(186U);
    msg.setDestination(47083U);
    msg.setDestinationEntity(224U);
    msg.value = 0.0605783834303;

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
    msg.setTimeStamp(0.7414065692);
    msg.setSource(33326U);
    msg.setSourceEntity(251U);
    msg.setDestination(3275U);
    msg.setDestinationEntity(19U);
    msg.value = 0.212833746415;

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
    msg.setTimeStamp(0.975178371964);
    msg.setSource(41106U);
    msg.setSourceEntity(23U);
    msg.setDestination(57951U);
    msg.setDestinationEntity(111U);
    msg.value = 0.784394788624;

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
    msg.setTimeStamp(0.155046036215);
    msg.setSource(6759U);
    msg.setSourceEntity(192U);
    msg.setDestination(34873U);
    msg.setDestinationEntity(110U);
    msg.value = 0.436031679882;

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
    msg.setTimeStamp(0.529059868598);
    msg.setSource(33033U);
    msg.setSourceEntity(81U);
    msg.setDestination(55737U);
    msg.setDestinationEntity(11U);
    msg.value = 0.745902126175;

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
    msg.setTimeStamp(0.880711860875);
    msg.setSource(30969U);
    msg.setSourceEntity(191U);
    msg.setDestination(30341U);
    msg.setDestinationEntity(26U);
    msg.value = 0.383924812323;

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
    msg.setTimeStamp(0.307730163138);
    msg.setSource(56141U);
    msg.setSourceEntity(112U);
    msg.setDestination(32875U);
    msg.setDestinationEntity(40U);
    msg.value = 0.941775271276;

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
    msg.setTimeStamp(0.116319103351);
    msg.setSource(28156U);
    msg.setSourceEntity(51U);
    msg.setDestination(35796U);
    msg.setDestinationEntity(83U);
    msg.value = 0.839541782704;

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
    msg.setTimeStamp(0.552619731271);
    msg.setSource(8789U);
    msg.setSourceEntity(223U);
    msg.setDestination(37516U);
    msg.setDestinationEntity(214U);
    msg.value = 0.0103271185043;

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
    msg.setTimeStamp(0.356723032717);
    msg.setSource(62280U);
    msg.setSourceEntity(184U);
    msg.setDestination(19501U);
    msg.setDestinationEntity(244U);
    msg.value = 0.0692902603045;

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
    msg.setTimeStamp(0.601018851311);
    msg.setSource(1851U);
    msg.setSourceEntity(93U);
    msg.setDestination(49209U);
    msg.setDestinationEntity(45U);
    msg.value = 0.653282611136;

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
    msg.setTimeStamp(0.155647041395);
    msg.setSource(50877U);
    msg.setSourceEntity(224U);
    msg.setDestination(51921U);
    msg.setDestinationEntity(210U);
    msg.id = 170U;
    msg.zoom = 8U;
    msg.action = 184U;

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
    msg.setTimeStamp(0.852198161793);
    msg.setSource(21472U);
    msg.setSourceEntity(157U);
    msg.setDestination(19321U);
    msg.setDestinationEntity(113U);
    msg.id = 224U;
    msg.zoom = 46U;
    msg.action = 169U;

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
    msg.setTimeStamp(0.117498639534);
    msg.setSource(64877U);
    msg.setSourceEntity(62U);
    msg.setDestination(28780U);
    msg.setDestinationEntity(177U);
    msg.id = 0U;
    msg.zoom = 29U;
    msg.action = 55U;

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
    msg.setTimeStamp(0.432789518099);
    msg.setSource(37800U);
    msg.setSourceEntity(0U);
    msg.setDestination(47382U);
    msg.setDestinationEntity(2U);
    msg.id = 201U;
    msg.value = 0.639431120939;

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
    msg.setTimeStamp(0.00782002032568);
    msg.setSource(5676U);
    msg.setSourceEntity(13U);
    msg.setDestination(43869U);
    msg.setDestinationEntity(71U);
    msg.id = 181U;
    msg.value = 0.138520815551;

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
    msg.setTimeStamp(0.669162133923);
    msg.setSource(54298U);
    msg.setSourceEntity(81U);
    msg.setDestination(60599U);
    msg.setDestinationEntity(252U);
    msg.id = 232U;
    msg.value = 0.516087344799;

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
    msg.setTimeStamp(0.863087227113);
    msg.setSource(56637U);
    msg.setSourceEntity(218U);
    msg.setDestination(35944U);
    msg.setDestinationEntity(127U);
    msg.id = 29U;
    msg.value = 0.732320223097;

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
    msg.setTimeStamp(0.596864594487);
    msg.setSource(16275U);
    msg.setSourceEntity(177U);
    msg.setDestination(25079U);
    msg.setDestinationEntity(14U);
    msg.id = 208U;
    msg.value = 0.456213468794;

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
    msg.setTimeStamp(0.773098162359);
    msg.setSource(17850U);
    msg.setSourceEntity(125U);
    msg.setDestination(55765U);
    msg.setDestinationEntity(84U);
    msg.id = 172U;
    msg.value = 0.365726159799;

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
    msg.setTimeStamp(0.0768883443512);
    msg.setSource(31289U);
    msg.setSourceEntity(43U);
    msg.setDestination(21114U);
    msg.setDestinationEntity(86U);
    msg.id = 139U;
    msg.angle = 0.258515678058;

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
    msg.setTimeStamp(0.0849343013262);
    msg.setSource(18908U);
    msg.setSourceEntity(70U);
    msg.setDestination(58625U);
    msg.setDestinationEntity(175U);
    msg.id = 29U;
    msg.angle = 0.64086012622;

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
    msg.setTimeStamp(0.409144004549);
    msg.setSource(46370U);
    msg.setSourceEntity(253U);
    msg.setDestination(21114U);
    msg.setDestinationEntity(178U);
    msg.id = 26U;
    msg.angle = 0.0115399867779;

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
    msg.setTimeStamp(0.16598467919);
    msg.setSource(19708U);
    msg.setSourceEntity(15U);
    msg.setDestination(54448U);
    msg.setDestinationEntity(186U);
    msg.op = 85U;
    msg.actions.assign("UGOKXSSMVKSKCPCEPTEVDSKKYRXDGNOCUSOJXKIPZCTTWOFMLATGTPIEQVPARWSIQZLBHNHSEBZGXCIIDXNOFYANYENQZGPYSVEINDMZVLVUUJYKWCWLHBRJWLBWAFUHNFQLXKIZWOJJJVMRAZYHWYFUEPFGTDQFYQYYRWGBNUEFZCCKTAXAQMIETLMMMPTRCWVDRQIMXIJJGQPZH");

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
    msg.setTimeStamp(0.0853056977063);
    msg.setSource(64208U);
    msg.setSourceEntity(152U);
    msg.setDestination(3075U);
    msg.setDestinationEntity(61U);
    msg.op = 231U;
    msg.actions.assign("XLRSFTFIYKQMZVVCYGQQTOWBEYVSCKZKQRYQMOBUOHKZQPRJBUTBJESMNQHQCTZIOCKFVNTOSDDDL");

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
    msg.setTimeStamp(0.851723057982);
    msg.setSource(61347U);
    msg.setSourceEntity(172U);
    msg.setDestination(19644U);
    msg.setDestinationEntity(128U);
    msg.op = 163U;
    msg.actions.assign("UMRHGBFMIANSCBBLRLNQARQYZCBWAHZQLVJMYMWMJRZKPKILXMIZIXDZKDSMDOCJWZYFPELAWYWUWWRPTXTTYHENMLVRDXNEKFPARSIVBIJBSFLXYJTWQOFOOEYR");

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
    msg.setTimeStamp(0.762582628947);
    msg.setSource(54866U);
    msg.setSourceEntity(166U);
    msg.setDestination(62013U);
    msg.setDestinationEntity(148U);
    msg.actions.assign("JMTBZSZXORAJXJHJTMAYPHBVLQPWGXLJADCFYHAKLPXPJMENKYCSLMOYXTQEUNDGQNEOXOHOMISCQQUAIKPZVIRNPRXYLEFSYMJUHEFGFRHXWWINMCOYDZNWCUCTJIVZRBT");

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
    msg.setTimeStamp(0.385665980394);
    msg.setSource(56768U);
    msg.setSourceEntity(190U);
    msg.setDestination(48239U);
    msg.setDestinationEntity(229U);
    msg.actions.assign("ABMAKIVMKEBNUONAPURBOQSOQZVHNTNGYPLPSSPVUQPJWWXRTKBMUQGRHZOBZMUWRJCCECIDZPGXSLDFYCFYNHOLSHJUCZUWX");

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
    msg.setTimeStamp(0.494247251099);
    msg.setSource(57678U);
    msg.setSourceEntity(171U);
    msg.setDestination(57723U);
    msg.setDestinationEntity(56U);
    msg.actions.assign("AGHHHGXVMEXJMZAJKXLE");

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
    msg.setTimeStamp(0.725360561871);
    msg.setSource(17438U);
    msg.setSourceEntity(126U);
    msg.setDestination(14747U);
    msg.setDestinationEntity(74U);
    msg.button = 80U;
    msg.value = 46U;

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
    msg.setTimeStamp(0.942562138683);
    msg.setSource(64457U);
    msg.setSourceEntity(210U);
    msg.setDestination(13505U);
    msg.setDestinationEntity(138U);
    msg.button = 134U;
    msg.value = 136U;

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
    msg.setTimeStamp(0.386445830833);
    msg.setSource(54296U);
    msg.setSourceEntity(185U);
    msg.setDestination(23070U);
    msg.setDestinationEntity(241U);
    msg.button = 36U;
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
    msg.setTimeStamp(0.950073542024);
    msg.setSource(33386U);
    msg.setSourceEntity(145U);
    msg.setDestination(42567U);
    msg.setDestinationEntity(72U);
    msg.op = 104U;
    msg.text.assign("NVNYFOHWUALVHBIJRZCRJKSJQPGTGSBFNVQKSXRHOZLESGEFXRJPTUMWWBNXIFILHGNIOMABMVTTQGXOMPVACGMZEDEANWRHQTJXWYWULKHSLDF");

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
    msg.setTimeStamp(0.328304722694);
    msg.setSource(36091U);
    msg.setSourceEntity(85U);
    msg.setDestination(19819U);
    msg.setDestinationEntity(68U);
    msg.op = 93U;
    msg.text.assign("TWNYUXYOZFQTPSXLZZBZBWHPZYLIRCINLQJYAFAOMNVIKFKYBIWAMJDPFDRQJUKLZABNMKUFPCLIXMIHMCEFVCQTEZBRKBHNJINJLXMBDWGTGMDHWTDGGDFRHCWAZWQGTRUVDAAYXQYZHUKEYHEEVTOOTSCEVCGBIOOOKBVSCYPGSGWRSUSRJYITAXDQOPRUELVESWUMKCQNLDSEUJVGBSNPXSXQDIRTEJLOLVAMKHXGOHVRMNPCJQNFAK");

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
    msg.setTimeStamp(0.216602982706);
    msg.setSource(32537U);
    msg.setSourceEntity(205U);
    msg.setDestination(38443U);
    msg.setDestinationEntity(211U);
    msg.op = 118U;
    msg.text.assign("CFMRNXRSQHUSPJFUJYZWKKOSYWEXHBTUQEIEBKIFTVPINAFLWPTSKSNLOAQJVYSDLXEFUYDZXXWNKTCSNJYFMHGDMALPMUGCVCPJOGNLDVZLLDBCXQTWOQYZWVRGVNTTONDOJHUPYOHPNRBLPFUNVEUAQCSCMIMGQQTHREAZZHVDDHVTLHCXUWIARRZQIMMYGBBWASVOCGZXFZEFLGPGOBDHYXTEOABKPFKJBDMJCIXUJEBKQSAEWRJZI");

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
    msg.setTimeStamp(0.79116705124);
    msg.setSource(28831U);
    msg.setSourceEntity(178U);
    msg.setDestination(45565U);
    msg.setDestinationEntity(22U);
    msg.op = 201U;
    msg.time_remain = 0.297598888631;
    msg.sched_time = 0.253792082518;

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
    msg.setTimeStamp(0.547388695654);
    msg.setSource(24675U);
    msg.setSourceEntity(141U);
    msg.setDestination(59197U);
    msg.setDestinationEntity(88U);
    msg.op = 204U;
    msg.time_remain = 0.776362877836;
    msg.sched_time = 0.587430731703;

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
    msg.setTimeStamp(0.47764897118);
    msg.setSource(2260U);
    msg.setSourceEntity(195U);
    msg.setDestination(48244U);
    msg.setDestinationEntity(211U);
    msg.op = 236U;
    msg.time_remain = 0.23794589178;
    msg.sched_time = 0.543330541313;

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
    msg.setTimeStamp(0.0396786431596);
    msg.setSource(9413U);
    msg.setSourceEntity(205U);
    msg.setDestination(22409U);
    msg.setDestinationEntity(78U);
    msg.name.assign("KVURPEWQFABKJUNWQCUSOLOZUVRQIDOWOKTREEELNHHRMSQAVISJFTZXDTIILDGPRBGDVAITACZXBGYNEKJFMZUHEJIJB");
    msg.op = 187U;
    msg.sched_time = 0.757120236693;

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
    msg.setTimeStamp(0.677878566486);
    msg.setSource(1372U);
    msg.setSourceEntity(142U);
    msg.setDestination(16357U);
    msg.setDestinationEntity(227U);
    msg.name.assign("KAHDGGSEJRFNCLMHGZAAHYOGDSNTLDUPUDOBQGCJAFHGDYTREFIBVZBGASIOLNSWIFYTXUWLQPELPFUKDVVDZZEZHHBTHQABEXWOKISDALTUKUAQOOWXKZUOYXSDNCWSHRXJPVKZNRTSRHLEYZRIRVALMCBTQCQYQPMRJMNYKPVBPLMFXQGNYDCKVINIRFEMCVCWQSEWJJXOTBLTYOVHPBZKNNPFFJUEVPYMCJWAUKIRXUWJTMGSECXJMWI");
    msg.op = 244U;
    msg.sched_time = 0.0149848163132;

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
    msg.setTimeStamp(0.380735959395);
    msg.setSource(764U);
    msg.setSourceEntity(112U);
    msg.setDestination(60621U);
    msg.setDestinationEntity(119U);
    msg.name.assign("OZOSWQOVIAIXBFXYQEPSJEEONNZMMAQVNBUAULJSAFKALRNEPJUBRJWFISTMNQQQWEZYXPSMOWEBUNXOPTSAWNRBLLZPYBHVTNCCCGXNTKWURFQLMGBEFS");
    msg.op = 100U;
    msg.sched_time = 0.403817429552;

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
    msg.setTimeStamp(0.264034567719);
    msg.setSource(17250U);
    msg.setSourceEntity(114U);
    msg.setDestination(40829U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.244790002824);
    msg.setSource(18754U);
    msg.setSourceEntity(131U);
    msg.setDestination(63101U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.913408007776);
    msg.setSource(49183U);
    msg.setSourceEntity(115U);
    msg.setDestination(33642U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.174056879888);
    msg.setSource(36441U);
    msg.setSourceEntity(33U);
    msg.setDestination(53425U);
    msg.setDestinationEntity(99U);
    msg.name.assign("MYKZLKOZBQXIEDHNMYGJOVPTLQGCRCJZHJHHQBOHOTCMSWWSXGQMUXHYJTMVKVFEVSZFYXHWBZGFLVRBRPLENONQPCDGPFUTNKIBVOLAWNISZCOJIDDJUWXTKKIMPVUVEINCLXPDLJGXTUAABENVKUWBGHYWOPYB");
    msg.state = 195U;

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
    msg.setTimeStamp(0.0996015167908);
    msg.setSource(65448U);
    msg.setSourceEntity(181U);
    msg.setDestination(38728U);
    msg.setDestinationEntity(12U);
    msg.name.assign("VQHXDUHPRIQZUGNVDFPWGMLGVLJFKAXKEZTUTPRVKIWJNHWTWSBEROVQSOXAHPEYKFEADSKTNABDCDSEUOBFWAZLTGUBHQXIDGBNWXSTRRHCYKFLJPJCELAYCGLQPMQCURPZKCHVSJYPXZYOGJDUWPJENLWYBMJZHKNUMMTFEPGFYYWRVMIFVGCUCSDDJZRIMKDLCYIOBQFZQNTVNHAQLUOTXGEZVOICMIRBFIXZIBJOAKBMXAS");
    msg.state = 215U;

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
    msg.setTimeStamp(0.899710285701);
    msg.setSource(46151U);
    msg.setSourceEntity(200U);
    msg.setDestination(14661U);
    msg.setDestinationEntity(239U);
    msg.name.assign("OPKLVJWZTYIFNOPQNONDCRAHRWZVDXYIHFXDTJNGVFGLQASUGDBRRFEPDKEIIJEIUAPTVXDHSDUWKUKSTAEWWILCJLNKTYVGSNSULMQHXECGULNRYZUPGJHUQ");
    msg.state = 204U;

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
    msg.setTimeStamp(0.0742426674689);
    msg.setSource(33334U);
    msg.setSourceEntity(179U);
    msg.setDestination(31910U);
    msg.setDestinationEntity(47U);
    msg.name.assign("FXKNHBCGANJCMFQLSSWGHQRWNFZQJLVADIDMOINQVLBEYJTJLFXXPTMPDCCKNUTOUEHENKUFGNBZRKMTPVWIXGQOUMTHPUEAPCROHBHWOOSFKNLLNRTWCJGJDACQULLWLXPXRIWMFUFTQQMVARCBRLHYVZYBEYOSSDAKEPSWODDKWRFCXJXJYSTXPSAZYCKPAWEUVUYGDPYZMIDEZ");
    msg.value = 50U;

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
    msg.setTimeStamp(0.603681485117);
    msg.setSource(38849U);
    msg.setSourceEntity(76U);
    msg.setDestination(40086U);
    msg.setDestinationEntity(184U);
    msg.name.assign("WLWUHMSQLIQHFGCELACMOXZRIAJKKJXOOCNGKMVWNNAIONHVZFGRDFCBTCIOPJNYZISNTCMBLFTJTJGHWJTUFBIBATSYYVGMYDXYHVKPOCLRHECYPSHSZBXGHKMRDFVAQGRXNKYUXEGSMOTDPREISKVUTXYVVPAUEHBLJZKSTTPZQPNIJUKPAVWALACXOBRF");
    msg.value = 186U;

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
    msg.setTimeStamp(0.423128404329);
    msg.setSource(60860U);
    msg.setSourceEntity(128U);
    msg.setDestination(50791U);
    msg.setDestinationEntity(23U);
    msg.name.assign("PTUVCSNDPRJQYPKKJ");
    msg.value = 153U;

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
    msg.setTimeStamp(0.0326061178782);
    msg.setSource(27011U);
    msg.setSourceEntity(90U);
    msg.setDestination(29516U);
    msg.setDestinationEntity(31U);
    msg.name.assign("DKUOEMOUUAAUZRRXZTQNDBXYVBTFSLSNQJKHTFYILEGOVMWJKQOIVQUPECSI");

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
    msg.setTimeStamp(0.138517850386);
    msg.setSource(53073U);
    msg.setSourceEntity(192U);
    msg.setDestination(43860U);
    msg.setDestinationEntity(209U);
    msg.name.assign("LHESSYADUIBCAQGEKWWRVBUALPMEUYNJUHTTRVIQSNSYBGDOMOXZIXQGLNGNVALQRJOXHASZWPZFETAMWBJRRPFZWJCVGDQCGVBKKGLHBHFNMNVXJHKVGLCDMYDJRIBWWJUOELTQFGSDASFBROJRXMFGFMTCXQADZBIOERHIHZKZCKNCSOPUTESXFNEMIUVWYHPCTOUAXJYZKLWSQZZIUEPPMOTQQYIYB");

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
    msg.setTimeStamp(0.812622084165);
    msg.setSource(9642U);
    msg.setSourceEntity(101U);
    msg.setDestination(12845U);
    msg.setDestinationEntity(217U);
    msg.name.assign("BIXEMCPLYVXNPSWGSPLRCFAYZKCSDIDQXAODBWGOQHLAZERPRYAZIEVISEKVOTWDOGOPHVBHSWIVWULTBFYDYNLFEUTDVHUYLVOFACHMQFSOORJMVWBFMMKBZUGTIYNIGJECIRQQUHPFJXHAZCF");

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
    msg.setTimeStamp(0.248734737092);
    msg.setSource(22938U);
    msg.setSourceEntity(153U);
    msg.setDestination(24368U);
    msg.setDestinationEntity(64U);
    msg.name.assign("JJQSXWWRYZASFCRZZPYUZHFFPMUYILESKRQJBAGVNUBVSVEOPXCLGILTLGYVUNDHXNDXSKZNTXPBJAOWGWKTQBYDTRRJFGMNXXVTMYGUEJQHOOTRQPVBMNECRZFPQQKPUXSFPKEFHTWSLOJTEZKWUSDEC");
    msg.value = 245U;

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
    msg.setTimeStamp(0.467228383125);
    msg.setSource(25656U);
    msg.setSourceEntity(251U);
    msg.setDestination(23725U);
    msg.setDestinationEntity(253U);
    msg.name.assign("DGUYFIPAQIQPOKOXHEBKDWEWPWBULYDKTOBNEEUGRIGCPZHJLVFVCLRXISHJNOWASKZWXWYCBZQMHWQCSVILDCCJLCGYGXEHNZPNLFUYSCJTKALZJOXNJXQABWDXAMGUBSRQJPITAVKVEUWXSEMIJUYBRQBZXGEYSADLCMMTKRFSVZFHZTPBIRPREIFLQDUO");
    msg.value = 230U;

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
    msg.setTimeStamp(0.578055370299);
    msg.setSource(60719U);
    msg.setSourceEntity(48U);
    msg.setDestination(5440U);
    msg.setDestinationEntity(24U);
    msg.name.assign("HGJWQKXVRQMJXFLZAGTNGTADOEPOBKAYIWPTPFOENEDXLEKEYKKRKYIVBKEVLXNXGBDPINTRWYBTDSUTVXNAUBUNWRZGCPHCCUSBMZRJSXLSAYENOCGQIOAHMIQGMCFHDWCDSFVZAIPCRZPTINBTWUYNYMFXQYFGACSPASUZOSCQFPLJRJOMJOKAMNDVLHLQHJKE");
    msg.value = 221U;

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
    msg.setTimeStamp(0.831788716515);
    msg.setSource(59626U);
    msg.setSourceEntity(110U);
    msg.setDestination(33562U);
    msg.setDestinationEntity(159U);
    msg.id = 185U;
    msg.period = 1233409121U;
    msg.duty_cycle = 285784473U;

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
    msg.setTimeStamp(0.688644106098);
    msg.setSource(54458U);
    msg.setSourceEntity(79U);
    msg.setDestination(31975U);
    msg.setDestinationEntity(232U);
    msg.id = 206U;
    msg.period = 1850340986U;
    msg.duty_cycle = 1212592950U;

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
    msg.setTimeStamp(0.820313743258);
    msg.setSource(64855U);
    msg.setSourceEntity(211U);
    msg.setDestination(34532U);
    msg.setDestinationEntity(222U);
    msg.id = 106U;
    msg.period = 3007123806U;
    msg.duty_cycle = 3554898424U;

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
    msg.setTimeStamp(0.0153869106781);
    msg.setSource(21830U);
    msg.setSourceEntity(70U);
    msg.setDestination(16735U);
    msg.setDestinationEntity(194U);
    msg.id = 34U;
    msg.period = 2812392886U;
    msg.duty_cycle = 3948947915U;

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
    msg.setTimeStamp(0.933052148242);
    msg.setSource(56110U);
    msg.setSourceEntity(239U);
    msg.setDestination(34474U);
    msg.setDestinationEntity(143U);
    msg.id = 135U;
    msg.period = 3774303301U;
    msg.duty_cycle = 3346236136U;

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
    msg.setTimeStamp(0.454862845244);
    msg.setSource(22481U);
    msg.setSourceEntity(206U);
    msg.setDestination(34234U);
    msg.setDestinationEntity(166U);
    msg.id = 134U;
    msg.period = 3830087465U;
    msg.duty_cycle = 3004869770U;

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
    msg.setTimeStamp(0.410338531968);
    msg.setSource(19217U);
    msg.setSourceEntity(155U);
    msg.setDestination(62418U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.568855136795;
    msg.lon = 0.475666456378;
    msg.height = 0.449072647074;
    msg.x = 0.180911847358;
    msg.y = 0.476593181599;
    msg.z = 0.21995966962;
    msg.phi = 0.729363257251;
    msg.theta = 0.32464083227;
    msg.psi = 0.134190313504;
    msg.u = 0.719479294773;
    msg.v = 0.271520694211;
    msg.w = 0.84450506059;
    msg.vx = 0.0345221775424;
    msg.vy = 0.762502299939;
    msg.vz = 0.621320912161;
    msg.p = 0.137273401305;
    msg.q = 0.342360822718;
    msg.r = 0.58971274609;
    msg.depth = 0.665993365194;
    msg.alt = 0.913041198774;

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
    msg.setTimeStamp(0.225887051792);
    msg.setSource(33149U);
    msg.setSourceEntity(70U);
    msg.setDestination(40758U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.978017090331;
    msg.lon = 0.487096466005;
    msg.height = 0.353116080194;
    msg.x = 0.600530997146;
    msg.y = 0.799875684872;
    msg.z = 0.658612070641;
    msg.phi = 0.655029612422;
    msg.theta = 0.676399895209;
    msg.psi = 0.901842125393;
    msg.u = 0.440945970568;
    msg.v = 0.902395102328;
    msg.w = 0.1680829628;
    msg.vx = 0.577981714822;
    msg.vy = 0.266585887204;
    msg.vz = 0.531696692977;
    msg.p = 0.705194063959;
    msg.q = 0.150543495661;
    msg.r = 0.0819520126343;
    msg.depth = 0.720871815644;
    msg.alt = 0.200922937031;

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
    msg.setTimeStamp(0.536091109121);
    msg.setSource(47232U);
    msg.setSourceEntity(166U);
    msg.setDestination(56993U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.853929302135;
    msg.lon = 0.267262283472;
    msg.height = 0.976213080127;
    msg.x = 0.231937405188;
    msg.y = 0.925032737733;
    msg.z = 0.325066193682;
    msg.phi = 0.499721532107;
    msg.theta = 0.785783496951;
    msg.psi = 0.292801393418;
    msg.u = 0.409608900682;
    msg.v = 0.696639954088;
    msg.w = 0.252977548877;
    msg.vx = 0.855716975473;
    msg.vy = 0.826777484691;
    msg.vz = 0.49122195038;
    msg.p = 0.0812003614738;
    msg.q = 0.667446760992;
    msg.r = 0.769753604719;
    msg.depth = 0.724129726179;
    msg.alt = 0.242448569776;

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
    msg.setTimeStamp(0.691152497692);
    msg.setSource(63626U);
    msg.setSourceEntity(90U);
    msg.setDestination(41252U);
    msg.setDestinationEntity(159U);
    msg.x = 0.658855714586;
    msg.y = 0.0992463012304;
    msg.z = 0.939381662302;

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
    msg.setTimeStamp(0.275447208089);
    msg.setSource(19809U);
    msg.setSourceEntity(57U);
    msg.setDestination(7885U);
    msg.setDestinationEntity(35U);
    msg.x = 0.723837358022;
    msg.y = 0.867982035284;
    msg.z = 0.777281678252;

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
    msg.setTimeStamp(0.705887447743);
    msg.setSource(17921U);
    msg.setSourceEntity(224U);
    msg.setDestination(47598U);
    msg.setDestinationEntity(241U);
    msg.x = 0.634658329318;
    msg.y = 0.172364633101;
    msg.z = 0.260329085016;

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
    msg.setTimeStamp(0.0852397305349);
    msg.setSource(40297U);
    msg.setSourceEntity(92U);
    msg.setDestination(15203U);
    msg.setDestinationEntity(150U);
    msg.value = 0.0885454556243;

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
    msg.setTimeStamp(0.744349996782);
    msg.setSource(46693U);
    msg.setSourceEntity(154U);
    msg.setDestination(9279U);
    msg.setDestinationEntity(166U);
    msg.value = 0.910123910291;

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
    msg.setTimeStamp(0.91910108756);
    msg.setSource(42321U);
    msg.setSourceEntity(45U);
    msg.setDestination(53762U);
    msg.setDestinationEntity(90U);
    msg.value = 0.622399131877;

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
    msg.setTimeStamp(0.773255495467);
    msg.setSource(48467U);
    msg.setSourceEntity(221U);
    msg.setDestination(64462U);
    msg.setDestinationEntity(233U);
    msg.value = 0.119660839406;

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
    msg.setTimeStamp(0.00356774492979);
    msg.setSource(48871U);
    msg.setSourceEntity(111U);
    msg.setDestination(37095U);
    msg.setDestinationEntity(200U);
    msg.value = 0.85534243949;

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
    msg.setTimeStamp(0.405588861179);
    msg.setSource(4340U);
    msg.setSourceEntity(98U);
    msg.setDestination(26941U);
    msg.setDestinationEntity(222U);
    msg.value = 0.0843400041003;

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
    msg.setTimeStamp(0.499391227643);
    msg.setSource(63138U);
    msg.setSourceEntity(202U);
    msg.setDestination(45705U);
    msg.setDestinationEntity(127U);
    msg.x = 0.47675261064;
    msg.y = 0.653680401365;
    msg.z = 0.921224093862;
    msg.phi = 0.255939234889;
    msg.theta = 0.984393296095;
    msg.psi = 0.988689894617;
    msg.p = 0.0629920149378;
    msg.q = 0.577948819106;
    msg.r = 0.660715673414;
    msg.u = 0.845987228221;
    msg.v = 0.324490282419;
    msg.w = 0.369854639198;
    msg.bias_psi = 0.454673071109;
    msg.bias_r = 0.313352931044;

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
    msg.setTimeStamp(0.602160946375);
    msg.setSource(28328U);
    msg.setSourceEntity(148U);
    msg.setDestination(7600U);
    msg.setDestinationEntity(254U);
    msg.x = 0.318163346003;
    msg.y = 0.460733319183;
    msg.z = 0.481378182785;
    msg.phi = 0.000698690663436;
    msg.theta = 0.666508721854;
    msg.psi = 0.601061735102;
    msg.p = 0.238389925059;
    msg.q = 0.340934352072;
    msg.r = 0.496785573424;
    msg.u = 0.793035983722;
    msg.v = 0.223472216072;
    msg.w = 0.689853434296;
    msg.bias_psi = 0.268262443924;
    msg.bias_r = 0.0279976814416;

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
    msg.setTimeStamp(0.700718479639);
    msg.setSource(18136U);
    msg.setSourceEntity(143U);
    msg.setDestination(42575U);
    msg.setDestinationEntity(228U);
    msg.x = 0.0601713700023;
    msg.y = 0.568856779869;
    msg.z = 0.726659422309;
    msg.phi = 0.0789933254209;
    msg.theta = 0.602989025782;
    msg.psi = 0.671681032273;
    msg.p = 0.217577827303;
    msg.q = 0.0498897868574;
    msg.r = 0.797772700524;
    msg.u = 0.847350908251;
    msg.v = 0.00650154931269;
    msg.w = 0.8302607812;
    msg.bias_psi = 0.489695158219;
    msg.bias_r = 0.541693328527;

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
    msg.setTimeStamp(0.624993078361);
    msg.setSource(56384U);
    msg.setSourceEntity(239U);
    msg.setDestination(32151U);
    msg.setDestinationEntity(79U);
    msg.bias_psi = 0.688875502752;
    msg.bias_r = 0.352831118931;
    msg.cog = 0.43846458761;
    msg.cyaw = 0.333851417242;
    msg.lbl_rej_level = 0.426269983492;
    msg.gps_rej_level = 0.348380419903;
    msg.custom_x = 0.614821291071;
    msg.custom_y = 0.158706710254;
    msg.custom_z = 0.722855641344;

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
    msg.setTimeStamp(0.356740508671);
    msg.setSource(53619U);
    msg.setSourceEntity(159U);
    msg.setDestination(33149U);
    msg.setDestinationEntity(126U);
    msg.bias_psi = 0.464216467552;
    msg.bias_r = 0.545802863477;
    msg.cog = 0.740383413404;
    msg.cyaw = 0.379129998476;
    msg.lbl_rej_level = 0.346854734403;
    msg.gps_rej_level = 0.0302410925333;
    msg.custom_x = 0.102965426609;
    msg.custom_y = 0.967549949579;
    msg.custom_z = 0.183784030931;

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
    msg.setTimeStamp(0.685279217151);
    msg.setSource(13054U);
    msg.setSourceEntity(86U);
    msg.setDestination(41997U);
    msg.setDestinationEntity(52U);
    msg.bias_psi = 0.338726875344;
    msg.bias_r = 0.22475590499;
    msg.cog = 0.392165225845;
    msg.cyaw = 0.376433698756;
    msg.lbl_rej_level = 0.420404803668;
    msg.gps_rej_level = 0.365420466881;
    msg.custom_x = 0.108326268242;
    msg.custom_y = 0.62488263015;
    msg.custom_z = 0.846867502222;

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
    msg.setTimeStamp(0.708297077127);
    msg.setSource(62326U);
    msg.setSourceEntity(100U);
    msg.setDestination(25104U);
    msg.setDestinationEntity(188U);
    msg.utc_time = 0.191312281683;
    msg.reason = 159U;

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
    msg.setTimeStamp(0.955430520053);
    msg.setSource(25567U);
    msg.setSourceEntity(233U);
    msg.setDestination(40229U);
    msg.setDestinationEntity(223U);
    msg.utc_time = 0.521023224636;
    msg.reason = 57U;

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
    msg.setTimeStamp(0.0796028141451);
    msg.setSource(61858U);
    msg.setSourceEntity(175U);
    msg.setDestination(48900U);
    msg.setDestinationEntity(99U);
    msg.utc_time = 0.977066474903;
    msg.reason = 207U;

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
    msg.setTimeStamp(0.791171943584);
    msg.setSource(39102U);
    msg.setSourceEntity(194U);
    msg.setDestination(23134U);
    msg.setDestinationEntity(177U);
    msg.id = 92U;
    msg.range = 0.722523552855;
    msg.acceptance = 218U;

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
    msg.setTimeStamp(0.0760340161143);
    msg.setSource(15488U);
    msg.setSourceEntity(154U);
    msg.setDestination(2192U);
    msg.setDestinationEntity(16U);
    msg.id = 67U;
    msg.range = 0.00796514450313;
    msg.acceptance = 153U;

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
    msg.setTimeStamp(0.955544382368);
    msg.setSource(42393U);
    msg.setSourceEntity(106U);
    msg.setDestination(31595U);
    msg.setDestinationEntity(126U);
    msg.id = 126U;
    msg.range = 0.698686296932;
    msg.acceptance = 106U;

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
    msg.setTimeStamp(0.0802163667775);
    msg.setSource(54698U);
    msg.setSourceEntity(254U);
    msg.setDestination(12899U);
    msg.setDestinationEntity(106U);
    msg.type = 54U;
    msg.reason = 64U;
    msg.value = 0.243698068046;
    msg.timestep = 0.544021156737;

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
    msg.setTimeStamp(0.473621306623);
    msg.setSource(53372U);
    msg.setSourceEntity(77U);
    msg.setDestination(28965U);
    msg.setDestinationEntity(250U);
    msg.type = 65U;
    msg.reason = 7U;
    msg.value = 0.666548480547;
    msg.timestep = 0.276111289999;

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
    msg.setTimeStamp(0.451671835241);
    msg.setSource(29489U);
    msg.setSourceEntity(179U);
    msg.setDestination(896U);
    msg.setDestinationEntity(102U);
    msg.type = 219U;
    msg.reason = 197U;
    msg.value = 0.70543342346;
    msg.timestep = 0.279202709482;

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
    msg.setTimeStamp(0.0693646871279);
    msg.setSource(54044U);
    msg.setSourceEntity(193U);
    msg.setDestination(12159U);
    msg.setDestinationEntity(156U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YCYYMSLZLJYODISOQYWGSBFHFCOBKDDAHQHURE");
    tmp_msg_0.lat = 0.000955900966617;
    tmp_msg_0.lon = 0.272128061443;
    tmp_msg_0.depth = 0.8091829563;
    tmp_msg_0.query_channel = 0U;
    tmp_msg_0.reply_channel = 211U;
    tmp_msg_0.transponder_delay = 40U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.448041600544;
    msg.y = 0.150133712923;
    msg.var_x = 0.382105042551;
    msg.var_y = 0.227080387473;
    msg.distance = 0.912222238;

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
    msg.setTimeStamp(0.18216186906);
    msg.setSource(16066U);
    msg.setSourceEntity(192U);
    msg.setDestination(8584U);
    msg.setDestinationEntity(113U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SJPODUIBDTLIMAKQORSEVTPKDDTNMGOVJLAIYYSUPVMEZWZQHSBBWNBQJOEMKRXXVQRRQEDNEHEZEJKHKTIFSDAZSCFKFZZSUXRXCIBOCGIFZPAAVBGYPTCUXLDFJEWTFZHWZXYUVDJNMRTPQNPWQRXUEYPCGHZCAVCFQOLQFTTMAXYINLUBICDBNXLRBGK");
    tmp_msg_0.lat = 0.594668628416;
    tmp_msg_0.lon = 0.684430285305;
    tmp_msg_0.depth = 0.299921895087;
    tmp_msg_0.query_channel = 148U;
    tmp_msg_0.reply_channel = 71U;
    tmp_msg_0.transponder_delay = 217U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.644746461699;
    msg.y = 0.585667551485;
    msg.var_x = 0.562186825362;
    msg.var_y = 0.389783749301;
    msg.distance = 0.0801648114383;

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
    msg.setTimeStamp(0.905857536152);
    msg.setSource(17162U);
    msg.setSourceEntity(175U);
    msg.setDestination(58202U);
    msg.setDestinationEntity(136U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YDLEQCBGTNEAOVKXVZLDJJXUREUNGYMNFJUSZHSDKQRBJQMBDQOHGLBOQQGHPHWRPYVCXKWMCYQLLSDLORFIFSOAZBUQZIFCKAYUSUNJGTWREMBZVAJZWXAYIHWE");
    tmp_msg_0.lat = 0.0899356513355;
    tmp_msg_0.lon = 0.411723394993;
    tmp_msg_0.depth = 0.512372729302;
    tmp_msg_0.query_channel = 133U;
    tmp_msg_0.reply_channel = 10U;
    tmp_msg_0.transponder_delay = 83U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.261728641148;
    msg.y = 0.546316744132;
    msg.var_x = 0.622016238174;
    msg.var_y = 0.0255649864506;
    msg.distance = 0.00205711295264;

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
    msg.setTimeStamp(0.66158439012);
    msg.setSource(46358U);
    msg.setSourceEntity(205U);
    msg.setDestination(27878U);
    msg.setDestinationEntity(112U);
    msg.state = 111U;

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
    msg.setTimeStamp(0.245551397192);
    msg.setSource(14774U);
    msg.setSourceEntity(206U);
    msg.setDestination(44904U);
    msg.setDestinationEntity(17U);
    msg.state = 106U;

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
    msg.setTimeStamp(0.658213154819);
    msg.setSource(28469U);
    msg.setSourceEntity(201U);
    msg.setDestination(30721U);
    msg.setDestinationEntity(210U);
    msg.state = 224U;

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
    msg.setTimeStamp(0.00559625011525);
    msg.setSource(52890U);
    msg.setSourceEntity(32U);
    msg.setDestination(63212U);
    msg.setDestinationEntity(135U);
    msg.x = 0.481535806132;
    msg.y = 0.753728703443;
    msg.z = 0.317537270997;

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
    msg.setTimeStamp(0.514838937604);
    msg.setSource(50314U);
    msg.setSourceEntity(163U);
    msg.setDestination(13576U);
    msg.setDestinationEntity(235U);
    msg.x = 0.281230204389;
    msg.y = 0.448359610801;
    msg.z = 0.854617068593;

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
    msg.setTimeStamp(0.351341484721);
    msg.setSource(61422U);
    msg.setSourceEntity(76U);
    msg.setDestination(46341U);
    msg.setDestinationEntity(31U);
    msg.x = 0.88311132854;
    msg.y = 0.746233390748;
    msg.z = 0.659569946349;

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
    msg.setTimeStamp(0.140447586005);
    msg.setSource(5263U);
    msg.setSourceEntity(48U);
    msg.setDestination(52877U);
    msg.setDestinationEntity(32U);
    msg.va = 0.268144991484;
    msg.aoa = 0.738809117198;
    msg.ssa = 0.418034265917;

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
    msg.setTimeStamp(0.380641033094);
    msg.setSource(36680U);
    msg.setSourceEntity(6U);
    msg.setDestination(17109U);
    msg.setDestinationEntity(13U);
    msg.va = 0.00632707398136;
    msg.aoa = 0.0096111175156;
    msg.ssa = 0.694266980076;

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
    msg.setTimeStamp(0.0811327397743);
    msg.setSource(40102U);
    msg.setSourceEntity(5U);
    msg.setDestination(26657U);
    msg.setDestinationEntity(100U);
    msg.va = 0.866392828831;
    msg.aoa = 0.550909622735;
    msg.ssa = 0.654569846957;

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
    msg.setTimeStamp(0.0523877712366);
    msg.setSource(38664U);
    msg.setSourceEntity(73U);
    msg.setDestination(36013U);
    msg.setDestinationEntity(214U);
    msg.value = 0.789806118055;

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
    msg.setTimeStamp(0.532564395577);
    msg.setSource(27236U);
    msg.setSourceEntity(85U);
    msg.setDestination(50681U);
    msg.setDestinationEntity(130U);
    msg.value = 0.857118662938;

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
    msg.setTimeStamp(0.629929017334);
    msg.setSource(53193U);
    msg.setSourceEntity(218U);
    msg.setDestination(7379U);
    msg.setDestinationEntity(200U);
    msg.value = 0.756334499625;

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
    msg.setTimeStamp(0.581643157151);
    msg.setSource(60464U);
    msg.setSourceEntity(233U);
    msg.setDestination(54595U);
    msg.setDestinationEntity(205U);
    msg.value = 0.512704796352;
    msg.z_units = 220U;

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
    msg.setTimeStamp(0.539839471903);
    msg.setSource(61488U);
    msg.setSourceEntity(251U);
    msg.setDestination(55790U);
    msg.setDestinationEntity(90U);
    msg.value = 0.605033751222;
    msg.z_units = 93U;

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
    msg.setTimeStamp(0.711331222863);
    msg.setSource(50510U);
    msg.setSourceEntity(150U);
    msg.setDestination(5135U);
    msg.setDestinationEntity(158U);
    msg.value = 0.499870525895;
    msg.z_units = 192U;

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
    msg.setTimeStamp(0.0255391160395);
    msg.setSource(63380U);
    msg.setSourceEntity(62U);
    msg.setDestination(45729U);
    msg.setDestinationEntity(117U);
    msg.value = 0.510675914843;
    msg.speed_units = 113U;

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
    msg.setTimeStamp(0.265765138229);
    msg.setSource(37256U);
    msg.setSourceEntity(145U);
    msg.setDestination(59558U);
    msg.setDestinationEntity(62U);
    msg.value = 0.855294827535;
    msg.speed_units = 108U;

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
    msg.setTimeStamp(0.167009043891);
    msg.setSource(48158U);
    msg.setSourceEntity(166U);
    msg.setDestination(16063U);
    msg.setDestinationEntity(3U);
    msg.value = 0.348314761314;
    msg.speed_units = 129U;

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
    msg.setTimeStamp(0.755420171286);
    msg.setSource(38122U);
    msg.setSourceEntity(138U);
    msg.setDestination(44808U);
    msg.setDestinationEntity(102U);
    msg.value = 0.984812118176;

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
    msg.setTimeStamp(0.0658169991709);
    msg.setSource(29759U);
    msg.setSourceEntity(177U);
    msg.setDestination(44616U);
    msg.setDestinationEntity(102U);
    msg.value = 0.671459947459;

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
    msg.setTimeStamp(0.25637028061);
    msg.setSource(35146U);
    msg.setSourceEntity(203U);
    msg.setDestination(56683U);
    msg.setDestinationEntity(198U);
    msg.value = 0.278450953298;

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
    msg.setTimeStamp(0.815256594758);
    msg.setSource(63613U);
    msg.setSourceEntity(194U);
    msg.setDestination(23448U);
    msg.setDestinationEntity(199U);
    msg.value = 0.617169071681;

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
    msg.setTimeStamp(0.847597930268);
    msg.setSource(60634U);
    msg.setSourceEntity(175U);
    msg.setDestination(11622U);
    msg.setDestinationEntity(207U);
    msg.value = 0.331787132495;

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
    msg.setTimeStamp(0.653228591417);
    msg.setSource(17086U);
    msg.setSourceEntity(175U);
    msg.setDestination(36552U);
    msg.setDestinationEntity(186U);
    msg.value = 0.95111842365;

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
    msg.setTimeStamp(0.662772780219);
    msg.setSource(2209U);
    msg.setSourceEntity(13U);
    msg.setDestination(40083U);
    msg.setDestinationEntity(164U);
    msg.value = 0.654167105374;

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
    msg.setTimeStamp(0.20737387001);
    msg.setSource(62500U);
    msg.setSourceEntity(236U);
    msg.setDestination(18635U);
    msg.setDestinationEntity(131U);
    msg.value = 0.960325513391;

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
    msg.setTimeStamp(0.381590386754);
    msg.setSource(19418U);
    msg.setSourceEntity(16U);
    msg.setDestination(61339U);
    msg.setDestinationEntity(245U);
    msg.value = 0.0175880075088;

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
    msg.setTimeStamp(0.268152912629);
    msg.setSource(44111U);
    msg.setSourceEntity(253U);
    msg.setDestination(24396U);
    msg.setDestinationEntity(230U);
    msg.path_ref = 216464370U;
    msg.start_lat = 0.127320358548;
    msg.start_lon = 0.986148063088;
    msg.start_z = 0.198804605257;
    msg.start_z_units = 22U;
    msg.end_lat = 0.996439729101;
    msg.end_lon = 0.971274425047;
    msg.end_z = 0.0546511397185;
    msg.end_z_units = 33U;
    msg.speed = 0.133505210098;
    msg.speed_units = 161U;
    msg.lradius = 0.319228496786;
    msg.flags = 149U;

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
    msg.setTimeStamp(0.221331148589);
    msg.setSource(37141U);
    msg.setSourceEntity(1U);
    msg.setDestination(33438U);
    msg.setDestinationEntity(102U);
    msg.path_ref = 784034169U;
    msg.start_lat = 0.803232754469;
    msg.start_lon = 0.477906383907;
    msg.start_z = 0.74338131784;
    msg.start_z_units = 40U;
    msg.end_lat = 0.276594864158;
    msg.end_lon = 0.520324084393;
    msg.end_z = 0.272134841208;
    msg.end_z_units = 32U;
    msg.speed = 0.383392670511;
    msg.speed_units = 149U;
    msg.lradius = 0.572178517661;
    msg.flags = 187U;

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
    msg.setTimeStamp(0.268209818498);
    msg.setSource(63323U);
    msg.setSourceEntity(173U);
    msg.setDestination(37866U);
    msg.setDestinationEntity(207U);
    msg.path_ref = 67355163U;
    msg.start_lat = 0.761745476898;
    msg.start_lon = 0.438594153269;
    msg.start_z = 0.626563195333;
    msg.start_z_units = 98U;
    msg.end_lat = 0.200761210984;
    msg.end_lon = 0.252649639741;
    msg.end_z = 0.809183617002;
    msg.end_z_units = 65U;
    msg.speed = 0.434074645225;
    msg.speed_units = 118U;
    msg.lradius = 0.848573453387;
    msg.flags = 17U;

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
    msg.setTimeStamp(0.0771962339391);
    msg.setSource(16393U);
    msg.setSourceEntity(81U);
    msg.setDestination(44264U);
    msg.setDestinationEntity(183U);
    msg.x = 0.770957339704;
    msg.y = 0.28505470111;
    msg.z = 0.475663258745;
    msg.k = 0.0391529303869;
    msg.m = 0.473449934023;
    msg.n = 0.643506395424;
    msg.flags = 178U;

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
    msg.setTimeStamp(0.768310512932);
    msg.setSource(57190U);
    msg.setSourceEntity(161U);
    msg.setDestination(36790U);
    msg.setDestinationEntity(158U);
    msg.x = 0.327099154677;
    msg.y = 0.7893904267;
    msg.z = 0.39817674146;
    msg.k = 0.831582640641;
    msg.m = 0.836955061996;
    msg.n = 0.0215379527309;
    msg.flags = 120U;

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
    msg.setTimeStamp(0.143522136191);
    msg.setSource(18805U);
    msg.setSourceEntity(71U);
    msg.setDestination(41288U);
    msg.setDestinationEntity(48U);
    msg.x = 0.653395840654;
    msg.y = 0.64111543035;
    msg.z = 0.925653110514;
    msg.k = 0.613768295674;
    msg.m = 0.482333363104;
    msg.n = 0.961862245457;
    msg.flags = 93U;

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
    msg.setTimeStamp(0.438246435978);
    msg.setSource(41772U);
    msg.setSourceEntity(130U);
    msg.setDestination(59258U);
    msg.setDestinationEntity(26U);
    msg.value = 0.546847535495;

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
    msg.setTimeStamp(0.605414061609);
    msg.setSource(1132U);
    msg.setSourceEntity(243U);
    msg.setDestination(21234U);
    msg.setDestinationEntity(53U);
    msg.value = 0.649664997744;

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
    msg.setTimeStamp(0.29910804671);
    msg.setSource(13872U);
    msg.setSourceEntity(166U);
    msg.setDestination(23081U);
    msg.setDestinationEntity(32U);
    msg.value = 0.910751415718;

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
    msg.setTimeStamp(0.583474396109);
    msg.setSource(30121U);
    msg.setSourceEntity(161U);
    msg.setDestination(3186U);
    msg.setDestinationEntity(191U);
    msg.u = 0.936148833313;
    msg.v = 0.325478354515;
    msg.w = 0.321874109835;
    msg.p = 0.271876309272;
    msg.q = 0.850579566562;
    msg.r = 0.697817645771;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.10420036155);
    msg.setSource(48411U);
    msg.setSourceEntity(69U);
    msg.setDestination(46188U);
    msg.setDestinationEntity(155U);
    msg.u = 0.926903617958;
    msg.v = 0.15626127699;
    msg.w = 0.224940208805;
    msg.p = 0.402715655908;
    msg.q = 0.618425279291;
    msg.r = 0.15091935984;
    msg.flags = 227U;

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
    msg.setTimeStamp(0.642260560658);
    msg.setSource(14535U);
    msg.setSourceEntity(251U);
    msg.setDestination(7935U);
    msg.setDestinationEntity(245U);
    msg.u = 0.302093977548;
    msg.v = 0.557279946979;
    msg.w = 0.383652527065;
    msg.p = 0.00770835216004;
    msg.q = 0.265435164744;
    msg.r = 0.211455125848;
    msg.flags = 107U;

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
    msg.setTimeStamp(0.889081531054);
    msg.setSource(16537U);
    msg.setSourceEntity(120U);
    msg.setDestination(44724U);
    msg.setDestinationEntity(27U);
    msg.path_ref = 2332474122U;
    msg.start_lat = 0.237364243652;
    msg.start_lon = 0.253164619306;
    msg.start_z = 0.483291661627;
    msg.start_z_units = 195U;
    msg.end_lat = 0.831366797258;
    msg.end_lon = 0.072958335437;
    msg.end_z = 0.480594913836;
    msg.end_z_units = 19U;
    msg.lradius = 0.273176109532;
    msg.flags = 110U;
    msg.x = 0.356466231476;
    msg.y = 0.33906102852;
    msg.z = 0.413060097212;
    msg.vx = 0.454787851193;
    msg.vy = 0.634560318618;
    msg.vz = 0.193058558473;
    msg.course_error = 0.983711940362;
    msg.eta = 20715U;

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
    msg.setTimeStamp(0.902332371476);
    msg.setSource(14211U);
    msg.setSourceEntity(224U);
    msg.setDestination(46687U);
    msg.setDestinationEntity(55U);
    msg.path_ref = 1334760492U;
    msg.start_lat = 0.988652542778;
    msg.start_lon = 0.572362087528;
    msg.start_z = 0.262295073953;
    msg.start_z_units = 42U;
    msg.end_lat = 0.361599123348;
    msg.end_lon = 0.582467455572;
    msg.end_z = 0.245636530441;
    msg.end_z_units = 63U;
    msg.lradius = 0.287480623168;
    msg.flags = 222U;
    msg.x = 0.531561220688;
    msg.y = 0.348253067355;
    msg.z = 0.0888235850778;
    msg.vx = 0.0151153915045;
    msg.vy = 0.672330930365;
    msg.vz = 0.858043258469;
    msg.course_error = 0.596969660207;
    msg.eta = 52530U;

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
    msg.setTimeStamp(0.631018542689);
    msg.setSource(16124U);
    msg.setSourceEntity(91U);
    msg.setDestination(44791U);
    msg.setDestinationEntity(195U);
    msg.path_ref = 1961388884U;
    msg.start_lat = 0.670839283529;
    msg.start_lon = 0.416974342885;
    msg.start_z = 0.924388942378;
    msg.start_z_units = 71U;
    msg.end_lat = 0.87981818497;
    msg.end_lon = 0.540819099956;
    msg.end_z = 0.54940558344;
    msg.end_z_units = 101U;
    msg.lradius = 0.581355888879;
    msg.flags = 113U;
    msg.x = 0.230210132441;
    msg.y = 0.864171042831;
    msg.z = 0.245461116658;
    msg.vx = 0.276029617324;
    msg.vy = 0.756676641953;
    msg.vz = 0.703678894728;
    msg.course_error = 0.411071793209;
    msg.eta = 9397U;

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
    msg.setTimeStamp(0.909272269731);
    msg.setSource(50921U);
    msg.setSourceEntity(160U);
    msg.setDestination(21245U);
    msg.setDestinationEntity(147U);
    msg.k = 0.991335277222;
    msg.m = 0.162774205971;
    msg.n = 0.0496204490974;

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
    msg.setTimeStamp(0.7113439747);
    msg.setSource(57254U);
    msg.setSourceEntity(47U);
    msg.setDestination(43022U);
    msg.setDestinationEntity(170U);
    msg.k = 0.578394921633;
    msg.m = 0.329709256735;
    msg.n = 0.911354434686;

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
    msg.setTimeStamp(0.873269892996);
    msg.setSource(5499U);
    msg.setSourceEntity(215U);
    msg.setDestination(21776U);
    msg.setDestinationEntity(254U);
    msg.k = 0.494451834785;
    msg.m = 0.844949432862;
    msg.n = 0.590341162422;

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
    msg.setTimeStamp(0.62449226156);
    msg.setSource(52562U);
    msg.setSourceEntity(47U);
    msg.setDestination(13451U);
    msg.setDestinationEntity(110U);
    msg.p = 0.0312547339476;
    msg.i = 0.460176205015;
    msg.d = 0.283817065059;
    msg.a = 0.172527618496;

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
    msg.setTimeStamp(0.417744519952);
    msg.setSource(20523U);
    msg.setSourceEntity(192U);
    msg.setDestination(34008U);
    msg.setDestinationEntity(139U);
    msg.p = 0.402467883409;
    msg.i = 0.457379997616;
    msg.d = 0.0526032149002;
    msg.a = 0.664917862348;

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
    msg.setTimeStamp(0.0274296554761);
    msg.setSource(27766U);
    msg.setSourceEntity(130U);
    msg.setDestination(56742U);
    msg.setDestinationEntity(171U);
    msg.p = 0.423541439876;
    msg.i = 0.0374425294664;
    msg.d = 0.387796675802;
    msg.a = 0.618550046688;

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
    msg.setTimeStamp(0.269078056298);
    msg.setSource(36476U);
    msg.setSourceEntity(222U);
    msg.setDestination(29892U);
    msg.setDestinationEntity(253U);
    msg.op = 152U;

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
    msg.setTimeStamp(0.924368219088);
    msg.setSource(26527U);
    msg.setSourceEntity(34U);
    msg.setDestination(60819U);
    msg.setDestinationEntity(84U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.957207049639);
    msg.setSource(11127U);
    msg.setSourceEntity(234U);
    msg.setDestination(21212U);
    msg.setDestinationEntity(96U);
    msg.op = 243U;

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
    msg.setTimeStamp(0.624891483869);
    msg.setSource(63004U);
    msg.setSourceEntity(123U);
    msg.setDestination(44039U);
    msg.setDestinationEntity(166U);
    msg.x = 0.013837182391;
    msg.y = 0.945505635344;
    msg.z = 0.140366389738;
    msg.vx = 0.545269934015;
    msg.vy = 0.246638104594;
    msg.vz = 0.522068362028;
    msg.ax = 0.516399032282;
    msg.ay = 0.637449575842;
    msg.az = 0.784285406134;
    msg.flags = 60677U;

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
    msg.setTimeStamp(0.0549896035781);
    msg.setSource(3013U);
    msg.setSourceEntity(3U);
    msg.setDestination(40038U);
    msg.setDestinationEntity(94U);
    msg.x = 0.446655990102;
    msg.y = 0.421155268357;
    msg.z = 0.936608432047;
    msg.vx = 0.523894739457;
    msg.vy = 0.86496976849;
    msg.vz = 0.187043131217;
    msg.ax = 0.895564683235;
    msg.ay = 0.0708936459552;
    msg.az = 0.609661622393;
    msg.flags = 19921U;

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
    msg.setTimeStamp(0.559955646359);
    msg.setSource(4111U);
    msg.setSourceEntity(213U);
    msg.setDestination(42557U);
    msg.setDestinationEntity(132U);
    msg.x = 0.813391668413;
    msg.y = 0.932727051282;
    msg.z = 0.748917412524;
    msg.vx = 0.972641784558;
    msg.vy = 0.592306736517;
    msg.vz = 0.726581022621;
    msg.ax = 0.860219831754;
    msg.ay = 0.573544297435;
    msg.az = 0.245439760743;
    msg.flags = 50918U;

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
    msg.setTimeStamp(0.128897677772);
    msg.setSource(17514U);
    msg.setSourceEntity(14U);
    msg.setDestination(15842U);
    msg.setDestinationEntity(1U);
    msg.value = 0.0537681414645;

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
    msg.setTimeStamp(0.863000684589);
    msg.setSource(4402U);
    msg.setSourceEntity(177U);
    msg.setDestination(29827U);
    msg.setDestinationEntity(10U);
    msg.value = 0.0478259339459;

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
    msg.setTimeStamp(0.136188673763);
    msg.setSource(45656U);
    msg.setSourceEntity(111U);
    msg.setDestination(31684U);
    msg.setDestinationEntity(235U);
    msg.value = 0.954623445989;

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
    msg.setTimeStamp(0.253470320435);
    msg.setSource(24518U);
    msg.setSourceEntity(103U);
    msg.setDestination(60943U);
    msg.setDestinationEntity(237U);
    msg.timeout = 29179U;
    msg.lat = 0.735289277929;
    msg.lon = 0.727565176716;
    msg.z = 0.748192745311;
    msg.z_units = 207U;
    msg.speed = 0.0125701471442;
    msg.speed_units = 118U;
    msg.roll = 0.027662656099;
    msg.pitch = 0.409651172202;
    msg.yaw = 0.247757187919;
    msg.custom.assign("LQPNEWKKCBMTLUGPMRFCHETUQLPCLUZGOBJWAFDQYKFWGBCNZCHDHCIUDIEVCWWKJBHZRHMWUBSWEZNRFOMMAPRYXGJYAQSEILNANTEKOJRPTSVFDELVVRVJQEZPXWO");

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
    msg.setTimeStamp(0.23847550487);
    msg.setSource(34235U);
    msg.setSourceEntity(207U);
    msg.setDestination(28713U);
    msg.setDestinationEntity(155U);
    msg.timeout = 1953U;
    msg.lat = 0.470548545496;
    msg.lon = 0.210609850362;
    msg.z = 0.658705267712;
    msg.z_units = 70U;
    msg.speed = 0.628776588808;
    msg.speed_units = 224U;
    msg.roll = 0.77686880877;
    msg.pitch = 0.174458754712;
    msg.yaw = 0.65671397864;
    msg.custom.assign("NVKZNFPIYYWWJVZRAITYAXHTWBBTWZLFKUWHSCRQWYMYNCXHCPMPNPZCBKQSSWBUGVOFMEZUPJJOXBOZMHQIDHAFQRWIKHNMWGLFZGHFOYJAYCLSYTIUYOIVVMQOSCEJVRLQDSSDLKXBMXNPAHITRUCDYEVGJRLEDCITBENFMFVVWGUEKUITOARAVPEJDNUTBRPJ");

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
    msg.setTimeStamp(0.241156007436);
    msg.setSource(45817U);
    msg.setSourceEntity(212U);
    msg.setDestination(15007U);
    msg.setDestinationEntity(4U);
    msg.timeout = 60695U;
    msg.lat = 0.874323974295;
    msg.lon = 0.398116761196;
    msg.z = 0.978829544385;
    msg.z_units = 225U;
    msg.speed = 0.205073184081;
    msg.speed_units = 141U;
    msg.roll = 0.891944323161;
    msg.pitch = 0.0204536381464;
    msg.yaw = 0.902311070106;
    msg.custom.assign("QQRQGMSQBCBQXMESMTGLOESXEPNRCZSNJCKSYAPDRSIFUYCRQPOYXMKBBHGKPADFLNALOHVXTWTIIAWJZZYCBWDWHMIDHFZCIVWHGXLORNATKDCEEGTXWOYFOAKCZDUVQ");

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
    msg.setTimeStamp(0.314711327545);
    msg.setSource(8144U);
    msg.setSourceEntity(212U);
    msg.setDestination(38500U);
    msg.setDestinationEntity(196U);
    msg.timeout = 57800U;
    msg.lat = 0.655770456494;
    msg.lon = 0.281390887385;
    msg.z = 0.570029694102;
    msg.z_units = 53U;
    msg.speed = 0.654964198268;
    msg.speed_units = 183U;
    msg.duration = 39398U;
    msg.radius = 0.718397824559;
    msg.flags = 229U;
    msg.custom.assign("WZEHOYOMJLHDNKYMLEMTQRUEEALADAKPEAWINHSRYWXSYYNXNDWKPGPRFSWUBJEJGFINHRXKQSIIDCCPFFABOURPNGUCKIEUDSMGCAHGUBWLFXCZGJTCZQTGLPYQSTNZUYMLXOAWLQNRZVYTAXZFHTJ");

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
    msg.setTimeStamp(0.989222130841);
    msg.setSource(61337U);
    msg.setSourceEntity(187U);
    msg.setDestination(27841U);
    msg.setDestinationEntity(12U);
    msg.timeout = 25206U;
    msg.lat = 0.594759057664;
    msg.lon = 0.494688973307;
    msg.z = 0.389540039514;
    msg.z_units = 119U;
    msg.speed = 0.621821472932;
    msg.speed_units = 187U;
    msg.duration = 12146U;
    msg.radius = 0.814868073401;
    msg.flags = 89U;
    msg.custom.assign("UBKYTNXHXMTFZFXGDTEPSICVLFGTQEZVAOMCVRINOGTUIOOMGAKZAKCMKLLWYYFBNFPPDLTLQTIKPGSRHATKQADQFKXLYUMTSVXZPWQOSSANHHBKYEARWQJZNRXBAEJOSREPHHMOFIXQBKKUHZIMHDPGWDGUEEJQVJBZWILYPEMZNNOUXXYJCHEUCOMRRDIP");

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
    msg.setTimeStamp(0.708120924108);
    msg.setSource(42195U);
    msg.setSourceEntity(136U);
    msg.setDestination(7311U);
    msg.setDestinationEntity(142U);
    msg.timeout = 62305U;
    msg.lat = 0.275480448053;
    msg.lon = 0.539678193157;
    msg.z = 0.787538544576;
    msg.z_units = 21U;
    msg.speed = 0.655324689928;
    msg.speed_units = 143U;
    msg.duration = 22037U;
    msg.radius = 0.405636051854;
    msg.flags = 46U;
    msg.custom.assign("XEOEIKXRHGSPQIVXHZIFUQJAQBLGVGUPSDPLMKEVXONNZDCECKOOYBJJVYBDSQJRXHJRKMZSWODJCXVXHKAEFAZWDVUPLSEWVLBEYYPLUFJPOUNRHFZKDNAORMBMTBRMEUZXJKPNQCPKSMNQDCQVGIRSQYZNEDZLIYRALFWLOAQUTLATFDGTWTGGGACBYUYZDTKTTTHNPZBOXRCGWJBWIWMYICKASHIHRUULJWFVNIMQWHBS");

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
    msg.setTimeStamp(0.338337719485);
    msg.setSource(36658U);
    msg.setSourceEntity(93U);
    msg.setDestination(37291U);
    msg.setDestinationEntity(124U);
    msg.custom.assign("WRXRBROLKXQFUHVZJKYBZJGHKFCLXDVNEOSFBRPKQYRMWWHPTSOQQZEVKNNQFOVPDRTIZNCPIJXDPQWFFGZGEQAWYCPGUTBOYENYRDAVTKYAEKPCHBROYNAHJVMHECJSOVMAYBMBZOMWDAXMGISLIIPKJCJFTVFPDNYXQMAJWBNGDKU");

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
    msg.setTimeStamp(0.719954224258);
    msg.setSource(24298U);
    msg.setSourceEntity(67U);
    msg.setDestination(4032U);
    msg.setDestinationEntity(253U);
    msg.custom.assign("ZVDCOGEXSQGYKXFWRAAIHLSXQAJGZDLINIKCHWICNVQBRZEV");

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
    msg.setTimeStamp(0.230559588126);
    msg.setSource(61048U);
    msg.setSourceEntity(232U);
    msg.setDestination(16372U);
    msg.setDestinationEntity(51U);
    msg.custom.assign("FXVDVJHOPHRELVNNQIMZGHITWZSPAPATSXXFDQCCWNLLQTJNUCSTPOTFKZOUNJWZESGNTFUIGUBWWXGOZSPWLQGVYLEXMHVKMJQSDIKPCBMROCKFMFOMQRYBYAJLDKGIYNDUTZOTKDPKJGZWRUNLGXGLEEIQLHAWUBQYEIDZEOCKBRUDVEMOCVKADEXFPUBJITBNWH");

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
    msg.setTimeStamp(0.620521447535);
    msg.setSource(9493U);
    msg.setSourceEntity(179U);
    msg.setDestination(29593U);
    msg.setDestinationEntity(242U);
    msg.timeout = 19391U;
    msg.lat = 0.218730360595;
    msg.lon = 0.84578746299;
    msg.z = 0.764223283767;
    msg.z_units = 86U;
    msg.duration = 49034U;
    msg.speed = 0.0297988133551;
    msg.speed_units = 152U;
    msg.type = 144U;
    msg.radius = 0.990348078225;
    msg.length = 0.932905122018;
    msg.bearing = 0.936814570465;
    msg.direction = 84U;
    msg.custom.assign("HTKHRYJYFLGXPBVFWALJBTCEFMKYOIEMCZPOKKHUZOSLXDDHDZLWEBTVFYTDGVGCHICNUYHURMKDWQPSGECMAYUXORJCVSWZFDJUFQQREKLXNSAKDLEWZIFUKNIMXAJYKABMTHMWAJRFNEWSVJPPNZLEDCFOOLJRVTLJCXIOBHPBUWNSGSLUPXCPMSPNISVRTVEVXXGAMIYQAYBBFDUDNTURQQQOBGIJGOCATOQP");

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
    msg.setTimeStamp(0.0220771652267);
    msg.setSource(10908U);
    msg.setSourceEntity(73U);
    msg.setDestination(10072U);
    msg.setDestinationEntity(179U);
    msg.timeout = 11289U;
    msg.lat = 0.24593072268;
    msg.lon = 0.738539756319;
    msg.z = 0.422778290711;
    msg.z_units = 3U;
    msg.duration = 43425U;
    msg.speed = 0.765742979829;
    msg.speed_units = 189U;
    msg.type = 203U;
    msg.radius = 0.932813416279;
    msg.length = 0.561729633104;
    msg.bearing = 0.155935947986;
    msg.direction = 17U;
    msg.custom.assign("HPWXEYOAJYVQDWRCAOOTSNOGQHKXIVURPPWILJLNRFMHDMIQXNYPBFDMGFH");

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
    msg.setTimeStamp(0.120180870069);
    msg.setSource(16968U);
    msg.setSourceEntity(69U);
    msg.setDestination(22892U);
    msg.setDestinationEntity(202U);
    msg.timeout = 22423U;
    msg.lat = 0.990337894255;
    msg.lon = 0.0312099168654;
    msg.z = 0.699429336297;
    msg.z_units = 85U;
    msg.duration = 59516U;
    msg.speed = 0.519645693808;
    msg.speed_units = 215U;
    msg.type = 142U;
    msg.radius = 0.46122983924;
    msg.length = 0.788949377339;
    msg.bearing = 0.965673845826;
    msg.direction = 206U;
    msg.custom.assign("YEEXTDUXJNWPBKOBDLWAZAEONUZTRXIGYYMSI");

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
    msg.setTimeStamp(0.291646979843);
    msg.setSource(29436U);
    msg.setSourceEntity(246U);
    msg.setDestination(39973U);
    msg.setDestinationEntity(76U);
    msg.duration = 30827U;
    msg.custom.assign("PCICLMDOCYUYBEJDZQYQMMGBMFDVVDYNFGXSKRREEJTZCCAEXDKMFHIBAJBPLKXLHGAUJNIVQDTUFPYOWLCQTAVIBKZKBSGMZTOKBWWISLVCNCPSBT");

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
    msg.setTimeStamp(0.044362760228);
    msg.setSource(58794U);
    msg.setSourceEntity(224U);
    msg.setDestination(59849U);
    msg.setDestinationEntity(117U);
    msg.duration = 14154U;
    msg.custom.assign("TSYXIIVSEMGYYTAWBLFONHSHTSAOCIEZZHCVSYMCHBMCFHCJUGPOHLCXLWLTKSAAEQYWBUENNQOVBZRLQDTXWUUPXZDMCFHZARPUDQVIQBVKIGKXOUVGKTGRFVFWNEJYJXLMYBABDFGGUUEKTMXNBOWRZDPEPXKDVXUMCTRNVBHJWAMPFMTIKCZRTJZADYZRIBKZUIPVCIMLALLPOOQPSJNG");

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
    msg.setTimeStamp(0.135293634565);
    msg.setSource(34962U);
    msg.setSourceEntity(156U);
    msg.setDestination(6837U);
    msg.setDestinationEntity(158U);
    msg.duration = 52001U;
    msg.custom.assign("LERTUGMGBAGEUCPDHULULJOCNYYHJDPEFFYWCVNUXTOUKGODFMWCNECXJHLNHKJHUSMKEBPCJQRFQAOXPYZFHWFWXIZJZQLDDSRTFPFIAUDGQDYQABKIARBWZZWZPOIGNYSHJWKIVBEGPMQHAWVQODTDXSYSYXJKFDEVTVQBJRQCSZFSSZNEPAVKCTPNAOLMTIZNRAHRWMESBSLVKMUUQ");

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
    msg.setTimeStamp(0.999587932964);
    msg.setSource(10342U);
    msg.setSourceEntity(8U);
    msg.setDestination(63867U);
    msg.setDestinationEntity(242U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2328800452U;
    tmp_msg_0.start_lat = 0.490530630131;
    tmp_msg_0.start_lon = 0.758954875763;
    tmp_msg_0.start_z = 0.123936204779;
    tmp_msg_0.start_z_units = 4U;
    tmp_msg_0.end_lat = 0.356474080948;
    tmp_msg_0.end_lon = 0.261076938627;
    tmp_msg_0.end_z = 0.0851952207364;
    tmp_msg_0.end_z_units = 16U;
    tmp_msg_0.speed = 0.893451820307;
    tmp_msg_0.speed_units = 10U;
    tmp_msg_0.lradius = 0.538625775188;
    tmp_msg_0.flags = 44U;
    msg.control.set(tmp_msg_0);
    msg.duration = 46561U;
    msg.custom.assign("QXUHVVMQKPGXNMZVKTHIMBOPESNCZHMIWVJZCHVGZQGEUEVACPGPBVAMOTWBXBFKDRBAGIDVLCUJYRAAPDADIEQSYMPMR");

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
    msg.setTimeStamp(0.0813475766013);
    msg.setSource(4472U);
    msg.setSourceEntity(172U);
    msg.setDestination(10245U);
    msg.setDestinationEntity(40U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.970911693372;
    msg.control.set(tmp_msg_0);
    msg.duration = 26087U;
    msg.custom.assign("LKCYBOOWUREPZPUARFOESNEGBPWKAENBMTYUYDAPFXGEKIHZUETHNFUINLIHGJCQYVOSDCZTDMPAOYIVEZOUSFCVFYSSGBCMNHYVHLTTTRWZGHWAJVDMGPZIQUNZFKUANIXGLNWKILXQHFJEJMSDNQYZEJLZOTWICKXWDXCOCFBLST");

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
    msg.setTimeStamp(0.776830203941);
    msg.setSource(53042U);
    msg.setSourceEntity(151U);
    msg.setDestination(42695U);
    msg.setDestinationEntity(205U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1742983112U;
    tmp_msg_0.start_lat = 0.326091368822;
    tmp_msg_0.start_lon = 0.943294081071;
    tmp_msg_0.start_z = 0.989245296344;
    tmp_msg_0.start_z_units = 215U;
    tmp_msg_0.end_lat = 0.908578399975;
    tmp_msg_0.end_lon = 0.35842959783;
    tmp_msg_0.end_z = 0.171316677201;
    tmp_msg_0.end_z_units = 8U;
    tmp_msg_0.speed = 0.330140093486;
    tmp_msg_0.speed_units = 15U;
    tmp_msg_0.lradius = 0.498607547066;
    tmp_msg_0.flags = 6U;
    msg.control.set(tmp_msg_0);
    msg.duration = 55552U;
    msg.custom.assign("SDSORIFIIGDP");

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
    msg.setTimeStamp(0.837015116239);
    msg.setSource(14963U);
    msg.setSourceEntity(73U);
    msg.setDestination(61480U);
    msg.setDestinationEntity(9U);
    msg.timeout = 39363U;
    msg.lat = 0.0941366282937;
    msg.lon = 0.105236306695;
    msg.z = 0.931364298973;
    msg.z_units = 251U;
    msg.speed = 0.140083909018;
    msg.speed_units = 124U;
    msg.bearing = 0.932635133847;
    msg.cross_angle = 0.327980075294;
    msg.width = 0.860199879628;
    msg.length = 0.904962721249;
    msg.hstep = 0.898163123881;
    msg.coff = 181U;
    msg.alternation = 162U;
    msg.flags = 47U;
    msg.custom.assign("UJTZNDOMQNLBGCRDAFDBNXXJKVNTUHCNOIYQKZYCEDWKHZLHGDXDMIIF");

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
    msg.setTimeStamp(0.29234170063);
    msg.setSource(6539U);
    msg.setSourceEntity(113U);
    msg.setDestination(53723U);
    msg.setDestinationEntity(180U);
    msg.timeout = 5744U;
    msg.lat = 0.922000629357;
    msg.lon = 0.33280567614;
    msg.z = 0.0347059393977;
    msg.z_units = 118U;
    msg.speed = 0.906275194104;
    msg.speed_units = 60U;
    msg.bearing = 0.261114426769;
    msg.cross_angle = 0.626039431223;
    msg.width = 0.172543571365;
    msg.length = 0.914707538052;
    msg.hstep = 0.0128987969461;
    msg.coff = 6U;
    msg.alternation = 245U;
    msg.flags = 79U;
    msg.custom.assign("GMTUHWGRSAZEDWGDFNUJZUPXKLBKYHFGDAIQCUVGNCWTJOOPRIEZPWYTRZIGTVBGAEVQIQHMDABNRYVLBHMWAIVCBKFPKZBLQYYHABWNLCCZPGEQWTMYBVTXSIFQSYJXHKOJWVLPOAOJPFNXJJAGUUFXHSUCIESGDTUDOQHVCSAXLKZSWEIQXNCWMBXDNUZKIKEJJEYHF");

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
    msg.setTimeStamp(0.451914277851);
    msg.setSource(53825U);
    msg.setSourceEntity(114U);
    msg.setDestination(55754U);
    msg.setDestinationEntity(13U);
    msg.timeout = 55992U;
    msg.lat = 0.707835720467;
    msg.lon = 0.712542224164;
    msg.z = 0.0915530433651;
    msg.z_units = 205U;
    msg.speed = 0.2802520834;
    msg.speed_units = 36U;
    msg.bearing = 0.363748556337;
    msg.cross_angle = 0.371975709472;
    msg.width = 0.01694813406;
    msg.length = 0.503740489718;
    msg.hstep = 0.277327099065;
    msg.coff = 217U;
    msg.alternation = 118U;
    msg.flags = 166U;
    msg.custom.assign("WWPFHWAGLLWVFTDIMNTKEGGK");

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
    msg.setTimeStamp(0.816962921296);
    msg.setSource(2168U);
    msg.setSourceEntity(83U);
    msg.setDestination(58404U);
    msg.setDestinationEntity(124U);
    msg.timeout = 48553U;
    msg.lat = 0.863306908539;
    msg.lon = 0.40470460467;
    msg.z = 0.0721872899046;
    msg.z_units = 43U;
    msg.speed = 0.449411183676;
    msg.speed_units = 14U;
    msg.custom.assign("ODUTTHTHWEAXRSIKOHNGNQCIBFRSXTDIXYAFVDVQAAQNKVRRCSAWLHHAGSNLIRYYMQFJVNVSFJWBHHDATPTZZZMOOYYVDTMGUPOGEOEUYTWNKJDCLJBTJYCUHKCNXEDQHZEKAJEVGQFQQNCCZXIJGPYCFEUABGBAUPQWPXGHZULVFMJLKKUXLKUBORBCRLWENWSPOVYTLWBDVGWIYNIR");

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
    msg.setTimeStamp(0.121615930742);
    msg.setSource(19045U);
    msg.setSourceEntity(220U);
    msg.setDestination(63461U);
    msg.setDestinationEntity(174U);
    msg.timeout = 52457U;
    msg.lat = 0.939744806578;
    msg.lon = 0.371686830771;
    msg.z = 0.821251414002;
    msg.z_units = 158U;
    msg.speed = 0.423018497306;
    msg.speed_units = 245U;
    msg.custom.assign("BKTYCGYVSUJHWYBVSARYNJZLAJHYBRWCWJLHOTZUHDGOONMNPAYODBCPTPEPIBNNQARNNOEVXCPKJLXHIYWUVRXBRSKQHNPYMLSZSRRSAFWMFSGZJTTEIHQWDFPFVQFQXAVJPLFOEMAJGAVUQSLWFKBDXDJATYNFCSODLMGIERXZWQGUJGOZIKQCMBMITXMFKKCTMLOWZDXWICKHFUUEGIZXDZDEP");

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
    msg.setTimeStamp(0.288289021085);
    msg.setSource(56707U);
    msg.setSourceEntity(157U);
    msg.setDestination(10752U);
    msg.setDestinationEntity(113U);
    msg.timeout = 19669U;
    msg.lat = 0.522238646669;
    msg.lon = 0.891543350915;
    msg.z = 0.460760784299;
    msg.z_units = 190U;
    msg.speed = 0.258894297041;
    msg.speed_units = 125U;
    msg.custom.assign("JMURXAQVLRXWEYIQALBMVPDQCIDDUEDQPFHAUFSMISWUSHEPGHJPQOAUJIGGJMYNYGDTLXQQUKLGFNHNZWXENOVPPBDJSVIQWSXPMGHYUVHAEKVTIXKCBOVSLORAAXWCCRZZVLDTPSWFRFYMNZZEDRGTBNTKOGYRKJEBTNWOLOMMSTCYKJUEINZBSCJQHYBFYJWDRH");

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
    msg.setTimeStamp(0.623347371508);
    msg.setSource(17670U);
    msg.setSourceEntity(116U);
    msg.setDestination(32230U);
    msg.setDestinationEntity(82U);
    msg.x = 0.315630999051;
    msg.y = 0.624856914129;
    msg.z = 0.137997014219;

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
    msg.setTimeStamp(0.25823674707);
    msg.setSource(364U);
    msg.setSourceEntity(186U);
    msg.setDestination(3861U);
    msg.setDestinationEntity(180U);
    msg.x = 0.748379052788;
    msg.y = 0.658966525553;
    msg.z = 0.0489460672398;

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
    msg.setTimeStamp(0.0556444462149);
    msg.setSource(53918U);
    msg.setSourceEntity(89U);
    msg.setDestination(61057U);
    msg.setDestinationEntity(43U);
    msg.x = 0.426983931953;
    msg.y = 0.316271456722;
    msg.z = 0.0795132216935;

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
    msg.setTimeStamp(0.317982085991);
    msg.setSource(24143U);
    msg.setSourceEntity(17U);
    msg.setDestination(45424U);
    msg.setDestinationEntity(161U);
    msg.timeout = 47140U;
    msg.lat = 0.84946953192;
    msg.lon = 0.584746708844;
    msg.z = 0.37509087068;
    msg.z_units = 222U;
    msg.amplitude = 0.122354259667;
    msg.pitch = 0.845129397624;
    msg.speed = 0.676300121963;
    msg.speed_units = 112U;
    msg.custom.assign("CAWFUHUDOHKEKWYDVOCESU");

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
    msg.setTimeStamp(0.142561590108);
    msg.setSource(39057U);
    msg.setSourceEntity(144U);
    msg.setDestination(26675U);
    msg.setDestinationEntity(62U);
    msg.timeout = 62972U;
    msg.lat = 0.90143523765;
    msg.lon = 0.909868525726;
    msg.z = 0.0785669227141;
    msg.z_units = 231U;
    msg.amplitude = 0.60873199394;
    msg.pitch = 0.944693354485;
    msg.speed = 0.109780729956;
    msg.speed_units = 36U;
    msg.custom.assign("YTRNODADSLLCWGZIKJTAQQCSQVRRLZTVNJODNIENZMYRUPFZICKXBKXGJJLBKVLZWDMVIGXIKGMTBCEUQWFVKYKUUEZFMKMOJ");

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
    msg.setTimeStamp(0.0691246134429);
    msg.setSource(25791U);
    msg.setSourceEntity(180U);
    msg.setDestination(3547U);
    msg.setDestinationEntity(62U);
    msg.timeout = 539U;
    msg.lat = 0.420879732418;
    msg.lon = 0.307326675745;
    msg.z = 0.107749129902;
    msg.z_units = 82U;
    msg.amplitude = 0.994906527244;
    msg.pitch = 0.136642421235;
    msg.speed = 0.0547216462878;
    msg.speed_units = 242U;
    msg.custom.assign("NKIRTOEOZXOVAIFTAWUEMZYQJJILFCAHURQEORMSTYSKCAGFUKHPWZVMCWDDFWJEKYYAPDPCOSBTSWLHXCFSRAIJJNQPNMYSYCNLWPUKKLTOIWZDWLNPEOQWHKUNRTJBBKGXBRJIFLOXJKO");

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
    msg.setTimeStamp(0.845315755571);
    msg.setSource(8082U);
    msg.setSourceEntity(35U);
    msg.setDestination(45814U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.0585081380629);
    msg.setSource(25064U);
    msg.setSourceEntity(63U);
    msg.setDestination(48030U);
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
    msg.setTimeStamp(0.243886575809);
    msg.setSource(32923U);
    msg.setSourceEntity(136U);
    msg.setDestination(8512U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.88397121147);
    msg.setSource(59550U);
    msg.setSourceEntity(159U);
    msg.setDestination(63912U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.315702318173;
    msg.lon = 0.111713848907;
    msg.z = 0.556414742093;
    msg.z_units = 24U;
    msg.radius = 0.351764603741;
    msg.duration = 61318U;
    msg.speed = 0.553644161038;
    msg.speed_units = 211U;
    msg.custom.assign("BIETGJBGIUMVSFJBDIUNHNOYLJSTVAYPNAPMOKQOOFNKMDJICCQGKEFYXTYZCGSBBWDPUYWRSVLJAQZAKIPSYXG");

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
    msg.setTimeStamp(0.118874881981);
    msg.setSource(64879U);
    msg.setSourceEntity(126U);
    msg.setDestination(19836U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.776805789054;
    msg.lon = 0.216683162902;
    msg.z = 0.0241227855245;
    msg.z_units = 111U;
    msg.radius = 0.852798133217;
    msg.duration = 55871U;
    msg.speed = 0.765341335216;
    msg.speed_units = 64U;
    msg.custom.assign("CTWFFYCBGOXQJIXBUVSHQCZFKHUZGPBZPLEUURMQVJWSRSALGWKSNYHRPGRLRHFKUKZKFEUZHMJOSQYQVPVBZLBAPVBYR");

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
    msg.setTimeStamp(0.864212623296);
    msg.setSource(14979U);
    msg.setSourceEntity(113U);
    msg.setDestination(56882U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.703766084419;
    msg.lon = 0.793163173419;
    msg.z = 0.785647813157;
    msg.z_units = 149U;
    msg.radius = 0.967416390628;
    msg.duration = 51228U;
    msg.speed = 0.354494801337;
    msg.speed_units = 58U;
    msg.custom.assign("MWGWIMCQUUVRSRYSISTNGGWRTPMOEXRNGAULXHLDODUMTLGOIXOBVQPCEAJMHPZYVKBIBWQCBJTGDJSINNHTYYSMVHWVOQGFLSEJWEVYGBKUHFJBATFWOHDQUXHFVEFMWEKIWYBEQKFQPZWDZBTAJUXCRXPMKKKAAGJRJPQBPZDJDECHATFZLS");

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
    msg.setTimeStamp(0.0118524957477);
    msg.setSource(21622U);
    msg.setSourceEntity(169U);
    msg.setDestination(35376U);
    msg.setDestinationEntity(150U);
    msg.timeout = 59693U;
    msg.flags = 18U;
    msg.lat = 0.824501594051;
    msg.lon = 0.921587092016;
    msg.start_z = 0.519541036554;
    msg.start_z_units = 21U;
    msg.end_z = 0.0760384564974;
    msg.end_z_units = 57U;
    msg.radius = 0.727649977526;
    msg.speed = 0.830998525064;
    msg.speed_units = 35U;
    msg.custom.assign("UVJIMTHBOQJFQZRNPKRNSIBUPNKWGYIVMDAMMMRQSAKNDYOYERUJYHTODCDURAZGDTNCTECFUHHTGKEFGSGJLBUOAIEYVBMLEVFARMLVHYKIQUFBLCABYMHHQSMVXTIXHXKTRDPUIZCXJCSGQCWAYDWWXIY");

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
    msg.setTimeStamp(0.680797418089);
    msg.setSource(362U);
    msg.setSourceEntity(52U);
    msg.setDestination(31395U);
    msg.setDestinationEntity(97U);
    msg.timeout = 26843U;
    msg.flags = 33U;
    msg.lat = 0.0964495420293;
    msg.lon = 0.818243142856;
    msg.start_z = 0.968506363037;
    msg.start_z_units = 178U;
    msg.end_z = 0.0194916530938;
    msg.end_z_units = 113U;
    msg.radius = 0.175497397073;
    msg.speed = 0.322923256525;
    msg.speed_units = 198U;
    msg.custom.assign("TFWRNXZUTMPTMHEUMOVHHONPHZBYKPNOKKUFCZKFKGHQGTIVECYRDTXFUOLXKZVWOMACYDBKYJLMRYLDSXRGQXJIUARKTWACJDGYQQX");

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
    msg.setTimeStamp(0.401855959392);
    msg.setSource(28372U);
    msg.setSourceEntity(214U);
    msg.setDestination(45218U);
    msg.setDestinationEntity(140U);
    msg.timeout = 38052U;
    msg.flags = 6U;
    msg.lat = 0.822631877255;
    msg.lon = 0.0223304264928;
    msg.start_z = 0.182222162517;
    msg.start_z_units = 2U;
    msg.end_z = 0.406778553065;
    msg.end_z_units = 207U;
    msg.radius = 0.856727402323;
    msg.speed = 0.30475075341;
    msg.speed_units = 244U;
    msg.custom.assign("GNSEIVZQZAPOMMBBDBNVHCZCUDNZQJFWGFAJIREFGAJBJUNMWSSVVUTGAWKIORUVCGOCGZRBJMHXZKBEQPKXAKQOMTIDPBVSFOYCSLTGGLKKAEHEIOMNLFWTYWQDYFFUPUIQDPIVDCISVXTXWQLFJCXMTZEMHKYSAHELZASHRVRSRJGPDTXZDTMFPFTNAIRLYYKWHKAEWUCPVYUEXYLROWUTLKRESLQYPDQCBXZBNMGOHNNDJNJXCXOW");

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
    msg.setTimeStamp(0.371989059588);
    msg.setSource(41261U);
    msg.setSourceEntity(11U);
    msg.setDestination(64989U);
    msg.setDestinationEntity(57U);
    msg.timeout = 15025U;
    msg.lat = 0.747272120956;
    msg.lon = 0.371731167506;
    msg.z = 0.261384301066;
    msg.z_units = 185U;
    msg.speed = 0.201262553927;
    msg.speed_units = 251U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.867676740717;
    tmp_msg_0.y = 0.439041632195;
    tmp_msg_0.z = 0.206351673434;
    tmp_msg_0.t = 0.335894736404;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KILHWXVHYMAHIEDVHVGKIZLWHNAPUIGDBHWGECGXEBJKLFZXNEGSREFMZTPSFQZDLNHGPVKUPAIVPMDYQBNQDPKVWNZKKFUUCNFIYEAOODKSCGXSOITSTJIYMAQJFOCJOTOPRGXPRDTCMWVOCFSEBAVTRSZZBXTGMWNQPKSUTBMWBWEGMQCJWYQHEYJUIAFNQUOORLJWYHRMDJRXBSTZ");

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
    msg.setTimeStamp(0.0488918323602);
    msg.setSource(11733U);
    msg.setSourceEntity(22U);
    msg.setDestination(61712U);
    msg.setDestinationEntity(55U);
    msg.timeout = 49508U;
    msg.lat = 0.901433720241;
    msg.lon = 0.00895205607295;
    msg.z = 0.248400719994;
    msg.z_units = 203U;
    msg.speed = 0.931564698999;
    msg.speed_units = 216U;
    msg.custom.assign("XSIXELLRAGHCUOBFJVVGQZYLYWTOSFFODUIPHHJCUEXPUKRRMUJQNGIWTKXCINHYPGEXFZLIKVERMCLSNCFEAKQYOZKNDGRTWXZDDMHKASCTJUOMPWYJXXNBMOERZEQFNSPMOWQBGLZBNQAOCFPXOYZGPRTJYKHVHBFFTNWAGPMHMBUVMAGWVSWJEPBYBVSISVCLJDIQEFVDTUJMDOVBANLYDXIJLRSKALCHQQPKWUZWRDZZIKYER");

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
    msg.setTimeStamp(0.365340496826);
    msg.setSource(65433U);
    msg.setSourceEntity(51U);
    msg.setDestination(40862U);
    msg.setDestinationEntity(213U);
    msg.timeout = 20953U;
    msg.lat = 0.128825962215;
    msg.lon = 0.704966985138;
    msg.z = 0.737335697436;
    msg.z_units = 91U;
    msg.speed = 0.960686291235;
    msg.speed_units = 225U;
    msg.custom.assign("SDSXYHFNIUFKWNXJRVUQPDLTVXQPCTZVETPGXWQJNXPUHFFKLDJKMABJKEKIYGGIKBHDMEJFHTYCMEBARNIXLGACQMPNSSTCTUXIMAFCGBLYVGZXLFK");

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
    msg.setTimeStamp(0.123523246499);
    msg.setSource(25890U);
    msg.setSourceEntity(218U);
    msg.setDestination(22785U);
    msg.setDestinationEntity(159U);
    msg.x = 0.765448868853;
    msg.y = 0.255188487378;
    msg.z = 0.00283785068125;
    msg.t = 0.617194133618;

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
    msg.setTimeStamp(0.477796946715);
    msg.setSource(1511U);
    msg.setSourceEntity(69U);
    msg.setDestination(31947U);
    msg.setDestinationEntity(37U);
    msg.x = 0.933200433448;
    msg.y = 0.136147595362;
    msg.z = 0.945924045305;
    msg.t = 0.458730420452;

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
    msg.setTimeStamp(0.581179436543);
    msg.setSource(36709U);
    msg.setSourceEntity(134U);
    msg.setDestination(113U);
    msg.setDestinationEntity(6U);
    msg.x = 0.175000412618;
    msg.y = 0.268429210688;
    msg.z = 0.376513148398;
    msg.t = 0.277186378038;

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
    msg.setTimeStamp(0.704552119778);
    msg.setSource(28772U);
    msg.setSourceEntity(13U);
    msg.setDestination(10551U);
    msg.setDestinationEntity(88U);
    msg.timeout = 37395U;
    msg.name.assign("YDIJQFGAYACPFUBXITKAEBJZOAHYMLBUSXHSGAUYVHPCDGAIEFEZPX");
    msg.custom.assign("HULKSUUAYYZBURFRTHAVWQMSHXPTIGMCAJXCIHGFKACDYEFBHGDQGKQNPQZFIONHWCRIMQRXRSUFABLBUZDIMLSRPNLMMJDJXNTFHPTSLOYZJSONJMVECGVFBDNVYEKTHTBESSPTPUVJOEADUCQWSPKKJBNYCIVQQMGESNN");

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
    msg.setTimeStamp(0.39648024792);
    msg.setSource(62071U);
    msg.setSourceEntity(116U);
    msg.setDestination(49046U);
    msg.setDestinationEntity(212U);
    msg.timeout = 5519U;
    msg.name.assign("HDSPCBKRVKQAOPLMFAYTHCDNQBUWHNZYAGMARYTERDCNJOHYEAQIEVFWFPVTFSKEPXSXGQUIPZJTSGUYPFQRGFOJHLWOYQNZDEXNVRYLNJESTWTNMLMTBIVJMXDMGOGVTWUCMOSUACXUXHBAYWOLIPOFGDTDZCPLQSKXVKIJLUVVXUMBLDHZJKOBQLESEKWZRQJTGBFZPORWZCNPZUGKRKYBAAWFJMNHCG");
    msg.custom.assign("ZUTRJTPIGFCHCJENZXYHDZYJWFZTRNRHNGPHBEVRQLAPWHKEKKIK");

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
    msg.setTimeStamp(0.0950218240636);
    msg.setSource(22681U);
    msg.setSourceEntity(190U);
    msg.setDestination(60072U);
    msg.setDestinationEntity(235U);
    msg.timeout = 64178U;
    msg.name.assign("JWFWHYFAFNZWGTLDMWKNCZARZBHYSVRQBSPVVWEDIQOBOJOHSFJLEECUFPGXJMDISTICUTKHQPDRZRUWSVITROWRAXYSYDRADGQECZLIZBUKIZCQEIMMXUKDTWKMVAUFTBLMBUZXQ");
    msg.custom.assign("CIQGKVWXNMZSYKHGPBOVQIFYWOWPSJIUAHNNOCHXMJVDHKNBENUXFIHVRYYMVAUXDGRMLXSBNRJCOUBXMZDFCCTXFLQAPQZENMAGFEWZHLWFDOWQVNBJSYBEJPQDMGKKEQBBIEIYUMVIUJNRHLKCCLSOSAYIYAHTCUMILSKYQZZWWPQTHNMBAOSDXWTUDVHGZQXOAZFCJRRZSFKJVPTVGPUZLTAWEFOJFPRETDTPGLICRABRL");

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
    msg.setTimeStamp(0.519491666752);
    msg.setSource(54965U);
    msg.setSourceEntity(2U);
    msg.setDestination(12532U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.0433019778745;
    msg.lon = 0.175930961863;
    msg.z = 0.407193090645;
    msg.z_units = 54U;
    msg.speed = 0.246225105502;
    msg.speed_units = 198U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27774U;
    tmp_msg_0.off_x = 0.631090149055;
    tmp_msg_0.off_y = 0.626734357023;
    tmp_msg_0.off_z = 0.60780117118;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.622840444756;
    msg.custom.assign("BUKOOBNEKERWZMMYIVZEBSJKHXUCRJBQINEWQWELRYOJLCSTVSQKUJRYBQTCRFZIABLQYDCSTFGTBCLVOXLZVSTAODSFBVMIHEYIFIFNGWZDNGNVHUHROUVRKCXBP");

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
    msg.setTimeStamp(0.0713490234846);
    msg.setSource(37451U);
    msg.setSourceEntity(162U);
    msg.setDestination(14423U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.177763484763;
    msg.lon = 0.073566658662;
    msg.z = 0.942914419916;
    msg.z_units = 157U;
    msg.speed = 0.610080827923;
    msg.speed_units = 17U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14202U;
    tmp_msg_0.off_x = 0.309988218754;
    tmp_msg_0.off_y = 0.648608815027;
    tmp_msg_0.off_z = 0.214818738786;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.531409528016;
    msg.custom.assign("ZOICTOBYBPSLXDCUVJZGXBZXAPAZPGHLBGDOFTBCPRFFNCWIFXBWAKYMAYEWINWJQJRTQSMPJSKPETGTNXFMHJYVNDOJ");

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
    msg.setTimeStamp(0.124882758483);
    msg.setSource(45650U);
    msg.setSourceEntity(201U);
    msg.setDestination(15102U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.829071983736;
    msg.lon = 0.501150644404;
    msg.z = 0.766093866038;
    msg.z_units = 250U;
    msg.speed = 0.518425603661;
    msg.speed_units = 31U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.847369155764;
    tmp_msg_0.y = 0.187367794925;
    tmp_msg_0.z = 0.692200717528;
    tmp_msg_0.t = 0.577332409165;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.734396313598;
    msg.custom.assign("WPJYFGGLVTHXSVYJSDKZCRWTRWHRTONADXLGSEFKAYAKTBOMOBHCKTBPVPGEQFNQHFIUHPQPQEUEZCPTOTWRAONSCVQYIECJAIJROPLXYHRSLCNPIUUYXHLGXQDKASURBPJXUTBIEDKAJIQJJWEJLGCMYLWQND");

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
    msg.setTimeStamp(0.64725981967);
    msg.setSource(28267U);
    msg.setSourceEntity(147U);
    msg.setDestination(17465U);
    msg.setDestinationEntity(189U);
    msg.vid = 42312U;
    msg.off_x = 0.280357698686;
    msg.off_y = 0.617763971674;
    msg.off_z = 0.157789720764;

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
    msg.setTimeStamp(0.33818008514);
    msg.setSource(50885U);
    msg.setSourceEntity(250U);
    msg.setDestination(44938U);
    msg.setDestinationEntity(246U);
    msg.vid = 26252U;
    msg.off_x = 0.171559358258;
    msg.off_y = 0.693949571195;
    msg.off_z = 0.334298065932;

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
    msg.setTimeStamp(0.249413846469);
    msg.setSource(5263U);
    msg.setSourceEntity(36U);
    msg.setDestination(35102U);
    msg.setDestinationEntity(72U);
    msg.vid = 55387U;
    msg.off_x = 0.209276922838;
    msg.off_y = 0.706163364996;
    msg.off_z = 0.54906776672;

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
    msg.setTimeStamp(0.0375611573981);
    msg.setSource(36173U);
    msg.setSourceEntity(14U);
    msg.setDestination(22236U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.174316525106);
    msg.setSource(43278U);
    msg.setSourceEntity(67U);
    msg.setDestination(24157U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.529300172879);
    msg.setSource(63506U);
    msg.setSourceEntity(202U);
    msg.setDestination(60505U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.0842662131762);
    msg.setSource(32724U);
    msg.setSourceEntity(225U);
    msg.setDestination(59716U);
    msg.setDestinationEntity(252U);
    msg.mid = 11383U;

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
    msg.setTimeStamp(0.0491908333795);
    msg.setSource(15598U);
    msg.setSourceEntity(15U);
    msg.setDestination(13439U);
    msg.setDestinationEntity(139U);
    msg.mid = 21611U;

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
    msg.setTimeStamp(0.758026308913);
    msg.setSource(28505U);
    msg.setSourceEntity(67U);
    msg.setDestination(10107U);
    msg.setDestinationEntity(65U);
    msg.mid = 42730U;

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
    msg.setTimeStamp(0.61159501975);
    msg.setSource(1280U);
    msg.setSourceEntity(19U);
    msg.setDestination(54865U);
    msg.setDestinationEntity(218U);
    msg.state = 211U;
    msg.eta = 16987U;
    msg.info.assign("YGOZJMPPJHWLIXPXACLMJORYASNZLCIKEJTJRAVAHDPKRIENPMTPYMCZNLGFWEZKWJOIHTSVDPCGWKRHMPTKXLZDCWBTYQQRGLTKJUHNWOPHRTKNCY");

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
    msg.setTimeStamp(0.65447137724);
    msg.setSource(28985U);
    msg.setSourceEntity(148U);
    msg.setDestination(5844U);
    msg.setDestinationEntity(15U);
    msg.state = 149U;
    msg.eta = 25627U;
    msg.info.assign("ZNTIEVVJPGRWBYZPPMMSURTEELYFHPHSEZXAWSXZNESOFNPIXMJIMZCKWEHOWUUJTMTL");

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
    msg.setTimeStamp(0.9546668207);
    msg.setSource(59910U);
    msg.setSourceEntity(109U);
    msg.setDestination(51133U);
    msg.setDestinationEntity(200U);
    msg.state = 129U;
    msg.eta = 14715U;
    msg.info.assign("YJTPYKCPRIFVIFHEUEKMXGHDCTURUXCSUAFNIAMSYTARQORBXYWSHNSVTMGKKKDJBPLBGJRDAKJDVHAAIMOZMXQZWCMVUOIJDKPVOLVXKTAWOLDBWWIMQFSEQHTOYQSZFPGYVUPFNUTQIKWSZZOBDETCPEYVATRPFRVHQNJBNYGBBUZJMKVCURHDFGCFOSBRZPDYJLLNWENDATEXNLZQWXFGHQAWWYMUMOXZBXRLSINECEGJOLZLQEI");

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
    msg.setTimeStamp(0.166135729614);
    msg.setSource(14555U);
    msg.setSourceEntity(139U);
    msg.setDestination(29139U);
    msg.setDestinationEntity(162U);
    msg.system = 3929U;
    msg.duration = 56951U;
    msg.speed = 0.160249149621;
    msg.speed_units = 53U;
    msg.x = 0.729187190817;
    msg.y = 0.949920313767;
    msg.z = 0.0159515852801;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.159328121456);
    msg.setSource(1549U);
    msg.setSourceEntity(23U);
    msg.setDestination(22334U);
    msg.setDestinationEntity(146U);
    msg.system = 49739U;
    msg.duration = 3668U;
    msg.speed = 0.229732124;
    msg.speed_units = 143U;
    msg.x = 0.230368161476;
    msg.y = 0.755193383974;
    msg.z = 0.513178293791;
    msg.z_units = 168U;

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
    msg.setTimeStamp(0.808210083636);
    msg.setSource(21056U);
    msg.setSourceEntity(220U);
    msg.setDestination(64865U);
    msg.setDestinationEntity(66U);
    msg.system = 32864U;
    msg.duration = 38614U;
    msg.speed = 0.891993951347;
    msg.speed_units = 107U;
    msg.x = 0.724751080229;
    msg.y = 0.895203833122;
    msg.z = 0.887714260107;
    msg.z_units = 77U;

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
    msg.setTimeStamp(0.149221864102);
    msg.setSource(8274U);
    msg.setSourceEntity(107U);
    msg.setDestination(10671U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.78087630279;
    msg.lon = 0.307259015259;
    msg.speed = 0.617222982458;
    msg.speed_units = 247U;
    msg.duration = 24647U;
    msg.sys_a = 20435U;
    msg.sys_b = 49400U;
    msg.move_threshold = 0.125536580377;

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
    msg.setTimeStamp(0.291399937531);
    msg.setSource(41424U);
    msg.setSourceEntity(243U);
    msg.setDestination(24135U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.139377186927;
    msg.lon = 0.223048294794;
    msg.speed = 0.46930388649;
    msg.speed_units = 50U;
    msg.duration = 18809U;
    msg.sys_a = 61196U;
    msg.sys_b = 60500U;
    msg.move_threshold = 0.542725703807;

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
    msg.setTimeStamp(0.149682532227);
    msg.setSource(42365U);
    msg.setSourceEntity(12U);
    msg.setDestination(2191U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.221571347716;
    msg.lon = 0.921996483882;
    msg.speed = 0.192234835192;
    msg.speed_units = 56U;
    msg.duration = 3969U;
    msg.sys_a = 31709U;
    msg.sys_b = 14054U;
    msg.move_threshold = 0.878085086707;

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
    msg.setTimeStamp(0.71568416268);
    msg.setSource(58025U);
    msg.setSourceEntity(198U);
    msg.setDestination(21384U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.658073276954;
    msg.lon = 0.717231136003;
    msg.z = 0.331959326288;
    msg.z_units = 42U;
    msg.speed = 0.0219376175472;
    msg.speed_units = 93U;
    msg.custom.assign("YZVIEWVQZGOTOGBMXHDGPUBVIIMXYMQDHSYTGBDZOKIQZE");

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
    msg.setTimeStamp(0.53424743025);
    msg.setSource(6449U);
    msg.setSourceEntity(1U);
    msg.setDestination(37092U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.506109397289;
    msg.lon = 0.683036080827;
    msg.z = 0.896122648756;
    msg.z_units = 8U;
    msg.speed = 0.308749237601;
    msg.speed_units = 140U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.712786999668;
    tmp_msg_0.lon = 0.159420026708;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HMXIXJJYMNJAGQELDTAJZFKHPKXTOXWYRBTVYDOBXINUZFMPAXUJFBQDWJSRETTAQVHLQQHMWODGCILWOBZFBNSYELTOXKNIYJBPZMCCSUJXACMEEDZMYERTSQVIOGXNRGWAZSKUVZPWBUSFOLCQFCMLCOQKHKMSWZDNADJGFBNOYU");

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
    msg.setTimeStamp(0.509028877271);
    msg.setSource(25699U);
    msg.setSourceEntity(102U);
    msg.setDestination(34114U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.358230703251;
    msg.lon = 0.34057749575;
    msg.z = 0.951160982799;
    msg.z_units = 31U;
    msg.speed = 0.0530704378262;
    msg.speed_units = 221U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.378845488902;
    tmp_msg_0.lon = 0.525570443164;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZWSZNATHCNVFRXQKBWMILWEYLCURLVBKINROURGHZYWVVCYYWGFPBIAUSJNDTAVAGRLEHRQDEIJGEPMKXAXQFZHNBYTBSSPUSHTCFTSSVTDZEOJOGLOUM");

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
    msg.setTimeStamp(0.844820824366);
    msg.setSource(3455U);
    msg.setSourceEntity(66U);
    msg.setDestination(13554U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.113274809884;
    msg.lon = 0.0301469306809;

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
    msg.setTimeStamp(0.296787212599);
    msg.setSource(38991U);
    msg.setSourceEntity(3U);
    msg.setDestination(43856U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.720502976623;
    msg.lon = 0.710062488923;

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
    msg.setTimeStamp(0.820380348529);
    msg.setSource(17097U);
    msg.setSourceEntity(195U);
    msg.setDestination(9673U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.146662353593;
    msg.lon = 0.710134502726;

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
    msg.setTimeStamp(0.180709842046);
    msg.setSource(14524U);
    msg.setSourceEntity(83U);
    msg.setDestination(61528U);
    msg.setDestinationEntity(91U);
    msg.timeout = 39966U;
    msg.lat = 0.0153429088981;
    msg.lon = 0.811363285482;
    msg.z = 0.588296871536;
    msg.z_units = 40U;
    msg.pitch = 0.180581434298;
    msg.amplitude = 0.337154828244;
    msg.duration = 31976U;
    msg.speed = 0.946536148088;
    msg.speed_units = 9U;
    msg.radius = 0.720159391118;
    msg.direction = 222U;
    msg.custom.assign("DENYYPSDJHKRZNZWOADYBCLIBGZBSDGQJSHKSCNBBAEFJIFWOWVCRSGHFKGYQRMJCXRNTTLMLGINOBZXUGULPARSZMYMPXNENKDQCGTIGHDFOIXDPUKAYAEHEXOCEJXBPZWMOOLVPQYAGTMTFRWJRFUZYCPJTFSBHHPPLSBAEVZISLQYXXDNYTWRTKMTMIVQCKKVK");

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
    msg.setTimeStamp(0.77024723974);
    msg.setSource(34208U);
    msg.setSourceEntity(102U);
    msg.setDestination(45074U);
    msg.setDestinationEntity(225U);
    msg.timeout = 34649U;
    msg.lat = 0.973246278509;
    msg.lon = 0.0900431741935;
    msg.z = 0.294716070748;
    msg.z_units = 165U;
    msg.pitch = 0.470930654518;
    msg.amplitude = 0.316168178288;
    msg.duration = 49592U;
    msg.speed = 0.852637046753;
    msg.speed_units = 253U;
    msg.radius = 0.25292957376;
    msg.direction = 142U;
    msg.custom.assign("RDWUXIRUJNUGYDBTECTUFCMGKNMDIABBACFDWNWHUDBRQWHECUOBRXKSNPXKGXLOZDGRKOIMYPABCAOCSQALL");

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
    msg.setTimeStamp(0.984266367642);
    msg.setSource(56415U);
    msg.setSourceEntity(171U);
    msg.setDestination(4903U);
    msg.setDestinationEntity(90U);
    msg.timeout = 17854U;
    msg.lat = 0.0282154089195;
    msg.lon = 0.23758018688;
    msg.z = 0.399808102814;
    msg.z_units = 10U;
    msg.pitch = 0.164330992172;
    msg.amplitude = 0.86512773749;
    msg.duration = 29432U;
    msg.speed = 0.631470592338;
    msg.speed_units = 59U;
    msg.radius = 0.788544446901;
    msg.direction = 162U;
    msg.custom.assign("PPOZFGUHKVMADRMATPVADBNYIKSJVXNGL");

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
    msg.setTimeStamp(0.201614187721);
    msg.setSource(31407U);
    msg.setSourceEntity(64U);
    msg.setDestination(14621U);
    msg.setDestinationEntity(127U);
    msg.formation_name.assign("HGSRJSIIOYFDUEYAQZRFCNQZUITVTOLCBXPNSEHESTGELRPOUDUCHXISNBWNBNRGDACDVUMUVGKDQDW");
    msg.reference_frame = 25U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44025U;
    tmp_msg_0.off_x = 0.507649215015;
    tmp_msg_0.off_y = 0.631197010094;
    tmp_msg_0.off_z = 0.210817598175;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZATELMZDOQEUOHBWCCVRVCZJU");

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
    msg.setTimeStamp(0.452910821474);
    msg.setSource(4384U);
    msg.setSourceEntity(244U);
    msg.setDestination(32563U);
    msg.setDestinationEntity(15U);
    msg.formation_name.assign("CSZYMVITFLVWUONZPXVNEDRWPQEAEXSNKKWRBGTDPHBZVBYEOJMTTODEGEXTKB");
    msg.reference_frame = 63U;
    msg.custom.assign("SCJNDLUSFQRDVPCYBECTUFXYPFIEKWSSYSZXDVENIZJXSLQRDWVYHAJDPJKUWNITDPWOLVEJNHTQJOADXZEGEUYHCWOPKBGILTLFWCGLCZBSJWOJMVQEURMQRLQSXAROLVIQGN");

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
    msg.setTimeStamp(0.134444196714);
    msg.setSource(56635U);
    msg.setSourceEntity(71U);
    msg.setDestination(42908U);
    msg.setDestinationEntity(209U);
    msg.formation_name.assign("WSLGUXRLFBRWMFJJEUIZJAQYDXPXTXSXNYNXIBRGAYBKQBVXCLASEQUFOOFYPGTGCVVDYMMTPWMTCEEEYTDCPRBOQAGMOJQAHJVPARKWIBCKHCZYSKKEBWIJWTOZHUYCZWD");
    msg.reference_frame = 32U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 343U;
    tmp_msg_0.off_x = 0.646951189471;
    tmp_msg_0.off_y = 0.996160915536;
    tmp_msg_0.off_z = 0.998779722891;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WVESGLYGNSFAKASWJOOQRPYXWITLWOUZIOJIVOBYHVZGN");

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
    msg.setTimeStamp(0.590139560267);
    msg.setSource(11863U);
    msg.setSourceEntity(199U);
    msg.setDestination(6218U);
    msg.setDestinationEntity(139U);
    msg.group_name.assign("DRPXLDZQCIACNJSFIWMNAGZSYURAALBAKYGLHTRUEXPMQFWFLHIUNMWMFHFUSOKPVWBXHCJNRVCDLDRMLONTDCZIPCSPPKZCLJDJRPEUTLBOTEARYKQUBASVYCGTVAHOIYCERUSRJKQKZLEXGS");
    msg.formation_name.assign("ASMDQYXWCUUWRECKITYVLUASFFUMZNNAV");
    msg.plan_id.assign("LMYJVMNMLEEACCBFKOPSWDFKYDPPMXSWOWZFTOLJUDOYPVRSVFRMCIGVPEHNMJUEXGWFMEIKTFXUXHBBZUTRFRBWTHINTWYZQJJCXIJXZBBKRUVSGNTDJVGFIBADWYEKSLGGALUW");
    msg.description.assign("BRWUOZXYXOOLIRAEZPWDSYACHBUKLIGPURGXJFJTLILVQQVTXPMVHFBQOHRWQNWTMZCTONPLQVAYQRWIHVZZKJKKSJFDJXCIMHDHCOEIAARIPYUCJLUAJBELPDIVBMSXBXWYTKGUTNZRDFUYADGMVJWSQZCISYTCMXQE");
    msg.leader_speed = 0.116111500464;
    msg.leader_bank_lim = 0.508995456941;
    msg.pos_sim_err_lim = 0.282275769926;
    msg.pos_sim_err_wrn = 0.00327946122131;
    msg.pos_sim_err_timeout = 42856U;
    msg.converg_max = 0.366326097121;
    msg.converg_timeout = 65115U;
    msg.comms_timeout = 62649U;
    msg.turb_lim = 0.845902600225;
    msg.custom.assign("EIXQDGTMBDOMQGRWVKJEKLLUICTDFEPAGGSMHAWUOBNMQJHKKOFXYHCKKWIZWWOCKAEIXUTZSLBFPZSFVCYKUMLNXGSPUFIOEZJXNDJSZWEVA");

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
    msg.setTimeStamp(0.86644494316);
    msg.setSource(2677U);
    msg.setSourceEntity(134U);
    msg.setDestination(41445U);
    msg.setDestinationEntity(241U);
    msg.group_name.assign("SKZFUQSQXMHUTBZUHYKVBMHAGQVBFNVXJOPGNTXARQIWIKKMMNISCTWAYNJGANIOBZLDCNZOXOSNTHEBLSLCGMPPAADVUEVHJACYLDFWVOI");
    msg.formation_name.assign("OGFBVLIKCTBVS");
    msg.plan_id.assign("NQOVEBNHTDMXUKLNRTVHTMQNDXCYPXQDFNHRBBCCKHUPFEXLQOGEQNRDWNMKSCGMAWITYHQPFGSTOAOBMIOODWGMWAIJZKHDTVGCHPJIRDUXUVPAYBJTVAFBIDYCQZRYFLKXVMUOZILIW");
    msg.description.assign("DWQRFDBRQIAINIPMODSJYLSNVFYBKIKIKMQVANOOEQIKMRGBSTJLAWOEEEKMIWPWJCLCXSGAPOHWZPVXZGHXURAVTMAUBBPRESCBFSLJHULZRBFWWQNQDYWNKYFDTQEZYTHOCXZUJMJJGJDGDPPCVVSFWAKQKSZOPERUKNDWBZT");
    msg.leader_speed = 0.168630667789;
    msg.leader_bank_lim = 0.599684126596;
    msg.pos_sim_err_lim = 0.436537790973;
    msg.pos_sim_err_wrn = 0.701827058333;
    msg.pos_sim_err_timeout = 54121U;
    msg.converg_max = 0.288764316956;
    msg.converg_timeout = 59949U;
    msg.comms_timeout = 15133U;
    msg.turb_lim = 0.711653402291;
    msg.custom.assign("DLKZWEHLZOOGPIFIOOFPBQPWVHDIQTEXCAPEETHPBULWECXRBSJWTMRSJXLIYOAUGDVWMMPRPINMBBBCUEPZBZXFZYPWYUORDCUMEVCFOEKRTMBKYKFULQMHTRFDJFTSELKWTUXHWMVAMUWBUXJRVNJHSFRZPGGMGCAJHQNUAZNTDIJKNAYIJCHGSKFDXYWNOVLLOCVVSQDG");

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
    msg.setTimeStamp(0.371842028891);
    msg.setSource(13959U);
    msg.setSourceEntity(206U);
    msg.setDestination(60224U);
    msg.setDestinationEntity(157U);
    msg.group_name.assign("RXYBMNKUWWSESSMSNPMHIWJWVEZVLDHDMPLZKNGGJGKPCRWKXHDDOZGZWUOVPPTLAFCNBLRLAMXAFXXTDBSIBHZERSNTFQN");
    msg.formation_name.assign("MSDNOUFWIHBDGHEPRRZQHAXIKWKCDAWSIRXUCEJMGBMGTLWYLECGWONYXEVGKPTYSORNJLVNQKQKMNIJZTLAYOUPVPZZSCROOBLPNPOHVTTVHXEIEKNAZXGGJJMXKYWCSFQBLDILGQKVXTTNORYEBCRNUDFJVJCHUUVBGQCAAWOZUMWIDBOIAR");
    msg.plan_id.assign("EEAPNYPFHCOOWVBHRSLYQVVYWPRDINSMLBCKRWLZPJQOZQWWDWFHHQLSPFAXMUFPOCAUCDTDXUZNBSGF");
    msg.description.assign("GVRXHEJXWCCVSETSRKRYXWQSVONVRBOLJNZCFXGFCFGCWSTNKVQIGUUZECELGXDXLUDAXFOSRNFOFIW");
    msg.leader_speed = 0.772319422906;
    msg.leader_bank_lim = 0.621564466729;
    msg.pos_sim_err_lim = 0.643082758742;
    msg.pos_sim_err_wrn = 0.430462832314;
    msg.pos_sim_err_timeout = 63086U;
    msg.converg_max = 0.608017505527;
    msg.converg_timeout = 40234U;
    msg.comms_timeout = 64451U;
    msg.turb_lim = 0.405344801312;
    msg.custom.assign("IPSSSYQLAWJRDWGVRGBDBNOHBXPKINSYJKOHRRVFAAOVCQUTCDBTUSZDMRQUULEZLEURPQDMKIBNSUMREYZMVAGIHGXKVDXGALQRYMEJAVBGZBTQYFTDJMINYUCLHXBWAFBMHXYLMVPKIZIQILEPNJWVCQOGFFVCFFVOZEBNFZJTWJCEXHKXWEKJFTDSNRAXZJPEOSXOHYAPKC");

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
    msg.setTimeStamp(0.555975641862);
    msg.setSource(13089U);
    msg.setSourceEntity(75U);
    msg.setDestination(53190U);
    msg.setDestinationEntity(236U);
    msg.control_src = 34043U;
    msg.control_ent = 154U;
    msg.timeout = 0.550282939299;
    msg.loiter_radius = 0.693523288753;
    msg.altitude_interval = 0.633761247656;

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
    msg.setTimeStamp(0.695187493641);
    msg.setSource(51079U);
    msg.setSourceEntity(230U);
    msg.setDestination(38309U);
    msg.setDestinationEntity(212U);
    msg.control_src = 27452U;
    msg.control_ent = 13U;
    msg.timeout = 0.314796959715;
    msg.loiter_radius = 0.0186333225866;
    msg.altitude_interval = 0.125751092248;

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
    msg.setTimeStamp(0.845708881435);
    msg.setSource(2841U);
    msg.setSourceEntity(112U);
    msg.setDestination(35017U);
    msg.setDestinationEntity(141U);
    msg.control_src = 17336U;
    msg.control_ent = 245U;
    msg.timeout = 0.962393941025;
    msg.loiter_radius = 0.561647232217;
    msg.altitude_interval = 0.866854227969;

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
    msg.setTimeStamp(0.698220786867);
    msg.setSource(48630U);
    msg.setSourceEntity(155U);
    msg.setDestination(54599U);
    msg.setDestinationEntity(2U);
    msg.flags = 89U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.414227631823;
    tmp_msg_0.speed_units = 134U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.402637735364;
    tmp_msg_1.z_units = 151U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.206740292206;
    msg.lon = 0.366383513962;
    msg.radius = 0.826179733503;

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
    msg.setTimeStamp(0.267190763147);
    msg.setSource(44650U);
    msg.setSourceEntity(151U);
    msg.setDestination(43607U);
    msg.setDestinationEntity(3U);
    msg.flags = 155U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.562091209012;
    tmp_msg_0.speed_units = 76U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.438577997187;
    tmp_msg_1.z_units = 99U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.800124345626;
    msg.lon = 0.337378418837;
    msg.radius = 0.330191319326;

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
    msg.setTimeStamp(0.350517619726);
    msg.setSource(15372U);
    msg.setSourceEntity(40U);
    msg.setDestination(7518U);
    msg.setDestinationEntity(26U);
    msg.flags = 127U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.999877226291;
    tmp_msg_0.speed_units = 121U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.082565491118;
    tmp_msg_1.z_units = 54U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0439793183082;
    msg.lon = 0.272287224944;
    msg.radius = 0.434076353526;

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
    msg.setTimeStamp(0.140532024823);
    msg.setSource(46901U);
    msg.setSourceEntity(113U);
    msg.setDestination(21801U);
    msg.setDestinationEntity(8U);
    msg.control_src = 49058U;
    msg.control_ent = 152U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 56U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.77687953068;
    tmp_tmp_msg_0_0.speed_units = 195U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.938640879887;
    tmp_tmp_msg_0_1.z_units = 242U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.658381666724;
    tmp_msg_0.lon = 0.629081352747;
    tmp_msg_0.radius = 0.822303196425;
    msg.reference.set(tmp_msg_0);
    msg.state = 250U;
    msg.proximity = 169U;

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
    msg.setTimeStamp(0.127644907859);
    msg.setSource(20434U);
    msg.setSourceEntity(55U);
    msg.setDestination(10499U);
    msg.setDestinationEntity(79U);
    msg.control_src = 44705U;
    msg.control_ent = 54U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 84U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.864023475329;
    tmp_tmp_msg_0_0.speed_units = 102U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.540915455007;
    tmp_tmp_msg_0_1.z_units = 102U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.936860794506;
    tmp_msg_0.lon = 0.896032167249;
    tmp_msg_0.radius = 0.32819842584;
    msg.reference.set(tmp_msg_0);
    msg.state = 33U;
    msg.proximity = 209U;

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
    msg.setTimeStamp(0.996026153984);
    msg.setSource(28886U);
    msg.setSourceEntity(134U);
    msg.setDestination(61853U);
    msg.setDestinationEntity(113U);
    msg.control_src = 23294U;
    msg.control_ent = 164U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 204U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.799239524449;
    tmp_tmp_msg_0_0.speed_units = 88U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0118609635561;
    tmp_tmp_msg_0_1.z_units = 212U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.218784796924;
    tmp_msg_0.lon = 0.385651736984;
    tmp_msg_0.radius = 0.145634850932;
    msg.reference.set(tmp_msg_0);
    msg.state = 103U;
    msg.proximity = 243U;

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
    msg.setTimeStamp(0.648462834018);
    msg.setSource(41213U);
    msg.setSourceEntity(126U);
    msg.setDestination(6071U);
    msg.setDestinationEntity(190U);
    msg.ax_cmd = 0.413607167249;
    msg.ay_cmd = 0.369878793977;
    msg.az_cmd = 0.980758209917;
    msg.ax_des = 0.589077655844;
    msg.ay_des = 0.62127960277;
    msg.az_des = 0.0161604727593;
    msg.virt_err_x = 0.138209639872;
    msg.virt_err_y = 0.942387028136;
    msg.virt_err_z = 0.0536317118944;
    msg.surf_fdbk_x = 0.387354415762;
    msg.surf_fdbk_y = 0.647653545405;
    msg.surf_fdbk_z = 0.926886332744;
    msg.surf_unkn_x = 0.0540565099003;
    msg.surf_unkn_y = 0.651359220145;
    msg.surf_unkn_z = 0.884537034873;
    msg.ss_x = 0.958335714539;
    msg.ss_y = 0.424746699716;
    msg.ss_z = 0.284716732386;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BXCFJGNPQUWFWEWIRUSSYIFNRPGPCLUSAEEGIVMTZKIOKRBXEMRHEHQTPYTLEVWFMBJCXESMULHWCXLYAQDCFECLXRHSLOZJOASJNXMZCAIKDJAATOWQVYNDBUQQSZRWQOZUCVHHMPCVYDAJNTSBOMDJWFPTXZKKOHIGTHYPQGKSZDGFDAIJPBVNGJTWFLGBIXDSBNLRDULZRJMFPOVRZMNXBNKCDUIIUXOYETVZYK");
    tmp_msg_0.dist = 0.107793780886;
    tmp_msg_0.err = 0.805297509769;
    tmp_msg_0.ctrl_imp = 0.0806739468324;
    tmp_msg_0.rel_dir_x = 0.618198820652;
    tmp_msg_0.rel_dir_y = 0.864635161854;
    tmp_msg_0.rel_dir_z = 0.111723212657;
    tmp_msg_0.err_x = 0.799745891919;
    tmp_msg_0.err_y = 0.487072441911;
    tmp_msg_0.err_z = 0.346334993934;
    tmp_msg_0.rf_err_x = 0.428822471563;
    tmp_msg_0.rf_err_y = 0.669694875404;
    tmp_msg_0.rf_err_z = 0.456675353098;
    tmp_msg_0.rf_err_vx = 0.684662091154;
    tmp_msg_0.rf_err_vy = 0.0620665330188;
    tmp_msg_0.rf_err_vz = 0.171652198399;
    tmp_msg_0.ss_x = 0.908538172609;
    tmp_msg_0.ss_y = 0.777111593732;
    tmp_msg_0.ss_z = 0.728393991099;
    tmp_msg_0.virt_err_x = 0.75717868438;
    tmp_msg_0.virt_err_y = 0.844058348948;
    tmp_msg_0.virt_err_z = 0.979659104372;
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
    msg.setTimeStamp(0.585046602979);
    msg.setSource(37786U);
    msg.setSourceEntity(103U);
    msg.setDestination(33635U);
    msg.setDestinationEntity(128U);
    msg.ax_cmd = 0.329744941826;
    msg.ay_cmd = 0.715631289211;
    msg.az_cmd = 0.239999977436;
    msg.ax_des = 0.988480142412;
    msg.ay_des = 0.176595777906;
    msg.az_des = 0.918007896391;
    msg.virt_err_x = 0.6731763668;
    msg.virt_err_y = 0.936397793051;
    msg.virt_err_z = 0.354306826308;
    msg.surf_fdbk_x = 0.0604096335288;
    msg.surf_fdbk_y = 0.772963401338;
    msg.surf_fdbk_z = 0.899934758484;
    msg.surf_unkn_x = 0.691906073999;
    msg.surf_unkn_y = 0.0757403061098;
    msg.surf_unkn_z = 0.173709375766;
    msg.ss_x = 0.774421614024;
    msg.ss_y = 0.568364594534;
    msg.ss_z = 0.621933195457;

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
    msg.setTimeStamp(0.938077939215);
    msg.setSource(59774U);
    msg.setSourceEntity(165U);
    msg.setDestination(35072U);
    msg.setDestinationEntity(49U);
    msg.ax_cmd = 0.154535742039;
    msg.ay_cmd = 0.266690061632;
    msg.az_cmd = 0.898270785253;
    msg.ax_des = 0.36531103204;
    msg.ay_des = 0.568737055752;
    msg.az_des = 0.215054950433;
    msg.virt_err_x = 0.0510522753039;
    msg.virt_err_y = 0.916889794765;
    msg.virt_err_z = 0.18055743031;
    msg.surf_fdbk_x = 0.730271042869;
    msg.surf_fdbk_y = 0.00195396560029;
    msg.surf_fdbk_z = 0.648765425539;
    msg.surf_unkn_x = 0.780180292238;
    msg.surf_unkn_y = 0.0186521950636;
    msg.surf_unkn_z = 0.50686675265;
    msg.ss_x = 0.496608186916;
    msg.ss_y = 0.516719574995;
    msg.ss_z = 0.946921958282;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GLWXYKEYPZJSPHZHDEESQOCKIYNUGNSWFEVCQPOFEBGTZQDUVSBAMNRFHRTPRATWYOVSL");
    tmp_msg_0.dist = 0.489844187225;
    tmp_msg_0.err = 0.904438248417;
    tmp_msg_0.ctrl_imp = 0.6761359575;
    tmp_msg_0.rel_dir_x = 0.683296099075;
    tmp_msg_0.rel_dir_y = 0.443377395362;
    tmp_msg_0.rel_dir_z = 0.0926430555874;
    tmp_msg_0.err_x = 0.511808998931;
    tmp_msg_0.err_y = 0.274272436357;
    tmp_msg_0.err_z = 0.0675333339164;
    tmp_msg_0.rf_err_x = 0.0464181296533;
    tmp_msg_0.rf_err_y = 0.768456103916;
    tmp_msg_0.rf_err_z = 0.456062952084;
    tmp_msg_0.rf_err_vx = 0.478954647099;
    tmp_msg_0.rf_err_vy = 0.261465645159;
    tmp_msg_0.rf_err_vz = 0.714190861051;
    tmp_msg_0.ss_x = 0.768713363924;
    tmp_msg_0.ss_y = 0.0722915010374;
    tmp_msg_0.ss_z = 0.669356747348;
    tmp_msg_0.virt_err_x = 0.0988298714179;
    tmp_msg_0.virt_err_y = 0.957207458704;
    tmp_msg_0.virt_err_z = 0.0103316090617;
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
    msg.setTimeStamp(0.0805422399955);
    msg.setSource(10201U);
    msg.setSourceEntity(112U);
    msg.setDestination(36020U);
    msg.setDestinationEntity(8U);
    msg.s_id.assign("EMPNHVIQSJDZQXZHTOWZVNDXTVNYPWAEMHNLCTFDNCPBAKXMKMRQJZIOXVVNCTUPVVZOKMPAWFEFBYQLRSKIZEGHGITUXDFAYXRGFGIPDJWAILUFLMATJSMSPLHLKYUNJSVTOBEEWOIASZCENNUCHRUJFETTLKWTVFDDSYDHWRDQKHGQWCK");
    msg.dist = 0.565444251708;
    msg.err = 0.577891881729;
    msg.ctrl_imp = 0.246762691311;
    msg.rel_dir_x = 0.934269866041;
    msg.rel_dir_y = 0.70161805562;
    msg.rel_dir_z = 0.19180439711;
    msg.err_x = 0.774871004344;
    msg.err_y = 0.616132934235;
    msg.err_z = 0.540806476127;
    msg.rf_err_x = 0.810687592138;
    msg.rf_err_y = 0.0632273898111;
    msg.rf_err_z = 0.0891274266427;
    msg.rf_err_vx = 0.543780098681;
    msg.rf_err_vy = 0.345637485853;
    msg.rf_err_vz = 0.0967656273548;
    msg.ss_x = 0.592497825934;
    msg.ss_y = 0.754814741875;
    msg.ss_z = 0.930095480171;
    msg.virt_err_x = 0.00656183788451;
    msg.virt_err_y = 0.0511005799088;
    msg.virt_err_z = 0.675114459517;

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
    msg.setTimeStamp(0.116191804139);
    msg.setSource(37790U);
    msg.setSourceEntity(109U);
    msg.setDestination(44917U);
    msg.setDestinationEntity(139U);
    msg.s_id.assign("EFLBCIBELDYQJJMHXNJTASYLYDTKRWHZ");
    msg.dist = 0.108114194253;
    msg.err = 0.30786924543;
    msg.ctrl_imp = 0.110953208325;
    msg.rel_dir_x = 0.394841723861;
    msg.rel_dir_y = 0.227204985693;
    msg.rel_dir_z = 0.228229322574;
    msg.err_x = 0.366553425514;
    msg.err_y = 0.709315257402;
    msg.err_z = 0.0841703974425;
    msg.rf_err_x = 0.773010643354;
    msg.rf_err_y = 0.0351978526329;
    msg.rf_err_z = 0.31921861392;
    msg.rf_err_vx = 0.63423295063;
    msg.rf_err_vy = 0.345711525971;
    msg.rf_err_vz = 0.523360868698;
    msg.ss_x = 0.538763234731;
    msg.ss_y = 0.755358819782;
    msg.ss_z = 0.36607101369;
    msg.virt_err_x = 0.186300296833;
    msg.virt_err_y = 0.718220061242;
    msg.virt_err_z = 0.338875919797;

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
    msg.setTimeStamp(0.349654903569);
    msg.setSource(15853U);
    msg.setSourceEntity(63U);
    msg.setDestination(28461U);
    msg.setDestinationEntity(224U);
    msg.s_id.assign("RRWLYXMXWDMGOBCYORKPQPEJPTGFAQYIFIZREFTGKJBSMLVKRBSDJSDHRTNEJ");
    msg.dist = 0.650905861032;
    msg.err = 0.266979666553;
    msg.ctrl_imp = 0.0465462419884;
    msg.rel_dir_x = 0.900554932099;
    msg.rel_dir_y = 0.295314710813;
    msg.rel_dir_z = 0.384318126472;
    msg.err_x = 0.563947388678;
    msg.err_y = 0.99393477224;
    msg.err_z = 0.672720551506;
    msg.rf_err_x = 0.0687684477193;
    msg.rf_err_y = 0.189771290366;
    msg.rf_err_z = 0.659661623841;
    msg.rf_err_vx = 0.959314509453;
    msg.rf_err_vy = 0.692639722384;
    msg.rf_err_vz = 0.0691792269883;
    msg.ss_x = 0.51617285752;
    msg.ss_y = 0.575549488553;
    msg.ss_z = 0.626931212214;
    msg.virt_err_x = 0.479752504702;
    msg.virt_err_y = 0.0226824803575;
    msg.virt_err_z = 0.116423712386;

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
    msg.setTimeStamp(0.487699277567);
    msg.setSource(36460U);
    msg.setSourceEntity(199U);
    msg.setDestination(51531U);
    msg.setDestinationEntity(191U);
    msg.timeout = 500U;
    msg.rpm = 0.0121438302815;
    msg.direction = 151U;
    msg.custom.assign("HTSIGVSMQFQDDNFGWMOYTPXMHKLPJKYDYUNJMUQBODZLELNXBKEQAOPZNZXFTLKAUQQGFVVOTKMGZTWLWHKFKCWBGNTWQMVAVSOPWZSTEOSWRPSCXKSHXYDNDIOMAJRXVBHNPRXRVZOCUNECPVEICYRKSYQBHFAF");

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
    msg.setTimeStamp(0.850193634777);
    msg.setSource(51420U);
    msg.setSourceEntity(187U);
    msg.setDestination(6098U);
    msg.setDestinationEntity(96U);
    msg.timeout = 57552U;
    msg.rpm = 0.427506762455;
    msg.direction = 254U;
    msg.custom.assign("SVCLDOHYQNEJEQOUV");

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
    msg.setTimeStamp(0.73528607802);
    msg.setSource(8578U);
    msg.setSourceEntity(239U);
    msg.setDestination(49174U);
    msg.setDestinationEntity(240U);
    msg.timeout = 18774U;
    msg.rpm = 0.41899841869;
    msg.direction = 248U;
    msg.custom.assign("RZAZPXRNQHCRUFXECEY");

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
    msg.setTimeStamp(0.839670080872);
    msg.setSource(2279U);
    msg.setSourceEntity(9U);
    msg.setDestination(57882U);
    msg.setDestinationEntity(121U);
    msg.formation_name.assign("QRJIWLRISDECPJPGUXDKSKJPEPWKJMJHFMQSMDCVOIYNAWBFRYCCXBWZXSGBYZGXXYNRFDQTTLFAXEVLUBHWZRTSPUVXSXHOMQTTGSTSMIHTNMJQJZBCXUNWANCBRPHMDAUYAWIKHHPINTLCNAWMEBDDGAIGAOJUOXJRQZBERLUROGVFOOFZVPOLAVZELELNSYVMKHZTIKDWCEQAIOHZKHVCTEICYQFUFBYBDY");
    msg.type = 251U;
    msg.op = 229U;
    msg.group_name.assign("XCBDVPUVUWMBZXVQARSECKBCUNWLJVCWODKTEBREQWDUBOUIJNGYVIJAQSYSEJWTQGNZJFUKMFATYQPIDMHPNCVOZEUHBNWGFZTQEHMEADAIRMTWFYUXJWAIFQIGGPDCPSIFPVWSDGZLXYDPZGTKCZLQBUVOWHFSNOMLSYVJHLOEPRQHPNCKKZNDASRXXJGFSABSRPEMCYZGGTKHQXZIROOLMKJHLTXXOHHYTXYLYKDLORE");
    msg.plan_id.assign("DBLXJDEOKINTGCOBLCATKXHALNSJXUJYTFHTRSJGCNNUFGRPYVUHMNSTAMBTYDDJDODRVQKFLHZAVZQCXGHGNRFSUMWAUFTWMJVJRFITMBIHXGQVUBENMRFAVKHRDCQRXOGBWDMBSZJJVQLND");
    msg.description.assign("TDXBTVMCQYPNIEGYJCHAYXFNVWFRWXLUXQKFCSIKWTETLTMUZKXCAUXQRHEXDROOLBVGQSWUOYAPZGBWZDASVWLIWVBTQKSPFRNGVPIZOEMCHM");
    msg.reference_frame = 114U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43718U;
    tmp_msg_0.off_x = 0.294100230504;
    tmp_msg_0.off_y = 0.33783792525;
    tmp_msg_0.off_z = 0.936245427027;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.948800195558;
    msg.leader_speed_min = 0.058243913618;
    msg.leader_speed_max = 0.122646379413;
    msg.leader_alt_min = 0.864214153116;
    msg.leader_alt_max = 0.620227895159;
    msg.pos_sim_err_lim = 0.73390247153;
    msg.pos_sim_err_wrn = 0.554177534388;
    msg.pos_sim_err_timeout = 34274U;
    msg.converg_max = 0.322390888128;
    msg.converg_timeout = 13811U;
    msg.comms_timeout = 38456U;
    msg.turb_lim = 0.0840235971474;
    msg.custom.assign("MYSDFBTANCAAICUEVNSAYTWQYXKQDEFEZAMIWOLUMUMYKQUVDPRGBNKBKKTNRZCDVMGMEQIGJEWEYDGNFJYVCICSWOBEIUPKO");

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
    msg.setTimeStamp(0.876231439838);
    msg.setSource(4770U);
    msg.setSourceEntity(102U);
    msg.setDestination(30382U);
    msg.setDestinationEntity(48U);
    msg.formation_name.assign("VFETJVEFXHZLNCYVBAAZFGBCZOFUUT");
    msg.type = 74U;
    msg.op = 212U;
    msg.group_name.assign("HZHSTYSDBUJAQZOSEWCRLKNMTXWEVRU");
    msg.plan_id.assign("ETWSVSLIHPWXPWSWJVAXHJPAOWZKKQKGSQMXGPVQOMMVCONPJFFCMHQFENTHQBGJGCDTH");
    msg.description.assign("BYGWMBDEPRQHEZIEJJURKJO");
    msg.reference_frame = 180U;
    msg.leader_bank_lim = 0.898242520772;
    msg.leader_speed_min = 0.943680218757;
    msg.leader_speed_max = 0.215931930312;
    msg.leader_alt_min = 0.568829486481;
    msg.leader_alt_max = 0.804614846833;
    msg.pos_sim_err_lim = 0.467623720286;
    msg.pos_sim_err_wrn = 0.809775385157;
    msg.pos_sim_err_timeout = 17084U;
    msg.converg_max = 0.875149310637;
    msg.converg_timeout = 50226U;
    msg.comms_timeout = 37814U;
    msg.turb_lim = 0.229589525185;
    msg.custom.assign("QOEQERNBTOMPGVHMACALSLWKHYTTNHEDJBGMLTQWYLQKNDMHWCBMGRLKOS");

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
    msg.setTimeStamp(0.698975296656);
    msg.setSource(35420U);
    msg.setSourceEntity(83U);
    msg.setDestination(19806U);
    msg.setDestinationEntity(105U);
    msg.formation_name.assign("AVYMMSEAWUOUAFXGMLLUPDIFZPGKBWQ");
    msg.type = 14U;
    msg.op = 135U;
    msg.group_name.assign("LEYIZEQREPOJAKGGYYKWVFQXZMLGSEJHZBFMVRBGVIPFXZPWGXQOENBEOTUPMYBAQLDKQ");
    msg.plan_id.assign("QGKVXIQFWJETKPTSRWVTSDMSZUEGKHJZLGEUXXZDWOBMLQAPBWKRMQOXGHBVCAYLJTRJNAIVAGYEWPZQVWQGNWOCSNIOISQGVZSOYJWMECAPQCZDIJWB");
    msg.description.assign("ZGEWCOIOYMPHZCPRLHQBPSTSOXDGBTQBGQPMTBJIRKFYGDNMZFJPRSUDZVUVLUWQDFDNEBJMOFPUGHUYQJKAZEKSOHKRSSFXESWMBDMWXGSZ");
    msg.reference_frame = 42U;
    msg.leader_bank_lim = 0.787580802282;
    msg.leader_speed_min = 0.296822688056;
    msg.leader_speed_max = 0.38215040388;
    msg.leader_alt_min = 0.480044135442;
    msg.leader_alt_max = 0.242918923347;
    msg.pos_sim_err_lim = 0.761743227684;
    msg.pos_sim_err_wrn = 0.0204116938517;
    msg.pos_sim_err_timeout = 51223U;
    msg.converg_max = 0.860030717236;
    msg.converg_timeout = 9299U;
    msg.comms_timeout = 9325U;
    msg.turb_lim = 0.480913501059;
    msg.custom.assign("PFNKJAQTWPDOVHR");

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
    msg.setTimeStamp(0.458880748506);
    msg.setSource(44959U);
    msg.setSourceEntity(204U);
    msg.setDestination(48000U);
    msg.setDestinationEntity(79U);
    msg.timeout = 3098U;
    msg.lat = 0.103381369528;
    msg.lon = 0.937517655653;
    msg.z = 0.262292657425;
    msg.z_units = 112U;
    msg.speed = 0.286428875593;
    msg.speed_units = 214U;
    msg.custom.assign("NCTEIGEZRMTESPFWQZNRNPAOPNISNLZODYKIHOUWVSBLKPCDTKKECYPKGGXYXLHQUDBMUHVVDCHKRXRMOTLCGFPAAQJUPICPKOMAGFZRZBDDFGPLRVWJVMGVAFAUZEEVZIWCJPMMDYQSIFWQEDBMNJXSWHOAGAKRTH");

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
    msg.setTimeStamp(0.861257950183);
    msg.setSource(40284U);
    msg.setSourceEntity(146U);
    msg.setDestination(65436U);
    msg.setDestinationEntity(229U);
    msg.timeout = 45877U;
    msg.lat = 0.211991718265;
    msg.lon = 0.789838982304;
    msg.z = 0.746724973879;
    msg.z_units = 94U;
    msg.speed = 0.201480706811;
    msg.speed_units = 193U;
    msg.custom.assign("ADTRTXOPYZKPUCVAJFPBBUFKYIIXOZQJLPCELZC");

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
    msg.setTimeStamp(0.633748022578);
    msg.setSource(16478U);
    msg.setSourceEntity(111U);
    msg.setDestination(10578U);
    msg.setDestinationEntity(44U);
    msg.timeout = 49950U;
    msg.lat = 0.0793414856216;
    msg.lon = 0.631016768277;
    msg.z = 0.299487881696;
    msg.z_units = 200U;
    msg.speed = 0.507310614414;
    msg.speed_units = 78U;
    msg.custom.assign("ADKSOLLPSPBYZYVOELRZDRHTWZGQKUVVJKEDUATLGWCIEMIQOWBKIVDRNVBWOEG");

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
    msg.setTimeStamp(0.500036505137);
    msg.setSource(34533U);
    msg.setSourceEntity(77U);
    msg.setDestination(24785U);
    msg.setDestinationEntity(97U);
    msg.timeout = 62172U;
    msg.lat = 0.378051589553;
    msg.lon = 0.14472443066;
    msg.z = 0.67644069196;
    msg.z_units = 118U;
    msg.speed = 0.531635076312;
    msg.speed_units = 108U;
    msg.custom.assign("PFSJCADKJVXN");

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
    msg.setTimeStamp(0.518532092226);
    msg.setSource(2587U);
    msg.setSourceEntity(164U);
    msg.setDestination(65431U);
    msg.setDestinationEntity(59U);
    msg.timeout = 42049U;
    msg.lat = 0.460946163529;
    msg.lon = 0.931128737313;
    msg.z = 0.96247071973;
    msg.z_units = 173U;
    msg.speed = 0.662917940219;
    msg.speed_units = 79U;
    msg.custom.assign("WSBRQTOWAFDZLNDJJFSLNBULEILPTQHEZOAKPYKEURIGFTBFXOMCPEWCSIWTMZVAIFBNRPYYQDRTMQGQDBBVYRGFKMPXZYOZQLCYHXHBJQXJXYOHWPFGOMEHMLPOEUOJISCRVKWNWKUTCYDNEXHIAVRLKLBVJHXLUJDHKWNZLWQXSITIZEBCNEAJZPGCPTRV");

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
    msg.setTimeStamp(0.612337396046);
    msg.setSource(9U);
    msg.setSourceEntity(230U);
    msg.setDestination(62272U);
    msg.setDestinationEntity(123U);
    msg.timeout = 61381U;
    msg.lat = 0.401808241126;
    msg.lon = 0.651735035789;
    msg.z = 0.585995414622;
    msg.z_units = 8U;
    msg.speed = 0.543183514778;
    msg.speed_units = 184U;
    msg.custom.assign("VVSJPKRHFYNKOOXKFEJJVERONJCBAAUSH");

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
    msg.setTimeStamp(0.31136603737);
    msg.setSource(5323U);
    msg.setSourceEntity(52U);
    msg.setDestination(28774U);
    msg.setDestinationEntity(191U);
    msg.arrival_time = 0.881428052404;
    msg.lat = 0.0817227365475;
    msg.lon = 0.567798141926;
    msg.z = 0.209440183793;
    msg.z_units = 92U;
    msg.travel_z = 0.793698769335;
    msg.travel_z_units = 237U;
    msg.delayed = 51U;

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
    msg.setTimeStamp(0.434576172665);
    msg.setSource(3776U);
    msg.setSourceEntity(205U);
    msg.setDestination(12250U);
    msg.setDestinationEntity(240U);
    msg.arrival_time = 0.672034193117;
    msg.lat = 0.715167259611;
    msg.lon = 0.677935224115;
    msg.z = 0.189892249004;
    msg.z_units = 83U;
    msg.travel_z = 0.808581244012;
    msg.travel_z_units = 102U;
    msg.delayed = 168U;

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
    msg.setTimeStamp(0.357170297152);
    msg.setSource(3946U);
    msg.setSourceEntity(71U);
    msg.setDestination(3941U);
    msg.setDestinationEntity(30U);
    msg.arrival_time = 0.819927671601;
    msg.lat = 0.931036747113;
    msg.lon = 0.987771932668;
    msg.z = 0.274570873694;
    msg.z_units = 108U;
    msg.travel_z = 0.363792057343;
    msg.travel_z_units = 187U;
    msg.delayed = 36U;

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
    msg.setTimeStamp(0.856339365549);
    msg.setSource(22942U);
    msg.setSourceEntity(113U);
    msg.setDestination(22729U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.909701046732;
    msg.lon = 0.651657021025;
    msg.z = 0.948178258123;
    msg.z_units = 38U;
    msg.speed = 0.239518855678;
    msg.speed_units = 182U;
    msg.bearing = 0.114896332909;
    msg.cross_angle = 0.384141642734;
    msg.width = 0.329172290307;
    msg.length = 0.471108813379;
    msg.coff = 126U;
    msg.angaperture = 0.0286359020641;
    msg.range = 25584U;
    msg.overlap = 19U;
    msg.flags = 33U;
    msg.custom.assign("EUKQMYBSNJUAUGRMLAUQPCUWXOERGEHDETDNJIRRJBTSONPBIKCWMOLIAVHYSKJSRCWOHOVPAVIGWKMTCKUTTQBTCARRQYYXHSKMYQSAVHEGFPLZFEUJHHTMWLDLECVKGWZEYGZRJBVXOZJBQBMBNDIFYMFEJKSGVWQPJGTCKJINNWFKDWIFFLNZPXIYPLM");

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
    msg.setTimeStamp(0.363162033834);
    msg.setSource(52580U);
    msg.setSourceEntity(30U);
    msg.setDestination(41066U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.437043051865;
    msg.lon = 0.871590297999;
    msg.z = 0.710140473427;
    msg.z_units = 75U;
    msg.speed = 0.0329927646335;
    msg.speed_units = 171U;
    msg.bearing = 0.474149842647;
    msg.cross_angle = 0.468750074036;
    msg.width = 0.980827555512;
    msg.length = 0.0283795853621;
    msg.coff = 188U;
    msg.angaperture = 0.253331670751;
    msg.range = 45475U;
    msg.overlap = 204U;
    msg.flags = 38U;
    msg.custom.assign("YJBBVIKTGTHRCPCSFGDTTVXUXVFLYIHLTUKZLAPZMFGQCMFIWOIEYIPXVZONYTGCVOBQDJQXZBBECLHGRHPFLIHPRISAEDQZPRCZYPOMCJYZASNFWEBWAUNLSLCGSXGSNDPRQOPUEENKZHKLVIWNMGDXKRKTOSMDBHQXPXDSZAUJJLYNXUARNARRMEQHTWGJGSWYEMJQKKRBKFVOSNUDFTMIEVQEMATW");

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
    msg.setTimeStamp(0.912028371994);
    msg.setSource(32283U);
    msg.setSourceEntity(147U);
    msg.setDestination(62178U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.542415393273;
    msg.lon = 0.842980594263;
    msg.z = 0.0475139794583;
    msg.z_units = 92U;
    msg.speed = 0.371871767765;
    msg.speed_units = 233U;
    msg.bearing = 0.797678291744;
    msg.cross_angle = 0.575504876625;
    msg.width = 0.717088778766;
    msg.length = 0.53025799653;
    msg.coff = 66U;
    msg.angaperture = 0.956467652557;
    msg.range = 39476U;
    msg.overlap = 73U;
    msg.flags = 170U;
    msg.custom.assign("AYQMNJSDKTRDGMFXHQLITXHUZUROGGEIJOSPEHLYHAELWWBYBIOAAYAFLNKNSKWDPZGDUOMTXWVJPSIJXCDSUHDPVOGNWASABKRSTYHTRDKYVLOYJOFGODMVQQWEZECNQXZXUSZTEGMCNGGMNFJUCADCUVCAPVWZDVPFFMLJLMIEBFKOHBSGQPJROBNFCZSBIUJQXVWIZPVUMXZNXHIKZE");

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
    msg.setTimeStamp(0.475920636656);
    msg.setSource(15160U);
    msg.setSourceEntity(17U);
    msg.setDestination(22461U);
    msg.setDestinationEntity(222U);
    msg.timeout = 1716U;
    msg.lat = 0.75932860384;
    msg.lon = 0.864576699097;
    msg.z = 0.502499790714;
    msg.z_units = 156U;
    msg.speed = 0.788018071483;
    msg.speed_units = 4U;
    msg.syringe0 = 18U;
    msg.syringe1 = 209U;
    msg.syringe2 = 194U;
    msg.custom.assign("MHCDHBZQLKHRMNGUINKWYXRZJEBLFRTAQZPCNKSVYOXFUJBEMTKZADDJMINLASTIXTZFUGWQYBOGFTJLSWEWTLUVDMUYLWW");

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
    msg.setTimeStamp(0.54350245031);
    msg.setSource(12010U);
    msg.setSourceEntity(114U);
    msg.setDestination(10759U);
    msg.setDestinationEntity(92U);
    msg.timeout = 10925U;
    msg.lat = 0.869820860974;
    msg.lon = 0.177882946778;
    msg.z = 0.0504021497771;
    msg.z_units = 141U;
    msg.speed = 0.322903640734;
    msg.speed_units = 104U;
    msg.syringe0 = 152U;
    msg.syringe1 = 198U;
    msg.syringe2 = 36U;
    msg.custom.assign("IHJAAJJGYAFKDIFKRFYRUIFSHRWEZYTAVGXWCCTCWSTDWLXNSNFDAIBTEHYVUEKBNTKMUOUHQHSCWMCLICBNABDBROIZDQW");

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
    msg.setTimeStamp(0.868389415666);
    msg.setSource(60500U);
    msg.setSourceEntity(141U);
    msg.setDestination(3730U);
    msg.setDestinationEntity(19U);
    msg.timeout = 15782U;
    msg.lat = 0.466050123575;
    msg.lon = 0.048018665651;
    msg.z = 0.001352881456;
    msg.z_units = 71U;
    msg.speed = 0.410244437866;
    msg.speed_units = 122U;
    msg.syringe0 = 242U;
    msg.syringe1 = 11U;
    msg.syringe2 = 165U;
    msg.custom.assign("LFROZIDFDTCRTCSPHRYUXWJTBAHXITJXUBPZBAQPJEQSYYEAPGBQAQRLTVVSWROPEPICVAMELDUUXVDXVRKUAKPFEFAZCLFJGRBXWWGIJFDQRLXOMKSYZOUJTNNNGHJWYJCTVBZYOMUGKSASQLMNDFLXMTBVWHQ");

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
    msg.setTimeStamp(0.297328017558);
    msg.setSource(33861U);
    msg.setSourceEntity(188U);
    msg.setDestination(29271U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.495860281608);
    msg.setSource(47739U);
    msg.setSourceEntity(47U);
    msg.setDestination(64302U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.832681960591);
    msg.setSource(42949U);
    msg.setSourceEntity(245U);
    msg.setDestination(41483U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.185433887532);
    msg.setSource(174U);
    msg.setSourceEntity(246U);
    msg.setDestination(21486U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.990814346456;
    msg.lon = 0.0259290580955;
    msg.z = 0.397721925042;
    msg.z_units = 188U;
    msg.speed = 0.388102219269;
    msg.speed_units = 42U;
    msg.takeoff_pitch = 0.335386903924;
    msg.custom.assign("NINVSMXIBOWPRKSENQFMXNLXJSAKAKDRJZYGFHOSQVEWWHZIPXPSAHIBTSAFLXDEZHTYMYMNZAZWPUXCDYPRIENHCKMUWUYQOMZJYNTHCGGOWZGBURQLNVDIBORTQLCPFRFXQUHBPOGLHNYQDSRAWOMKLLDPXIKUDDCJMUVZEYNCJLUFTVFSJEFOGWKOJREVTGTCAIPHKBEITCQZCKGRBDVBWVGAEAUAJIUCVBVLEXQQTMFR");

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
    msg.setTimeStamp(0.523916109818);
    msg.setSource(62379U);
    msg.setSourceEntity(213U);
    msg.setDestination(56260U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.392299096089;
    msg.lon = 0.375248592073;
    msg.z = 0.97364116162;
    msg.z_units = 71U;
    msg.speed = 0.706024703779;
    msg.speed_units = 202U;
    msg.takeoff_pitch = 0.369173666355;
    msg.custom.assign("ZFUXMBAFSGKQHZLTJGXXGQATBATXQQYPZPJPWSTZMDNAQOMRHHNTOLELMUBFMHZYRCSEAJJKSRMZGFWIEVOIRDTKCHJHRQLKV");

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
    msg.setTimeStamp(0.49778501587);
    msg.setSource(2064U);
    msg.setSourceEntity(93U);
    msg.setDestination(41132U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.770768184272;
    msg.lon = 0.335452220444;
    msg.z = 0.505150855486;
    msg.z_units = 138U;
    msg.speed = 0.575305726722;
    msg.speed_units = 170U;
    msg.takeoff_pitch = 0.632872965336;
    msg.custom.assign("LGTDVMFKSSSBUUIHHBPXKJELVFOFWWIECYACUNXALUUWEWRZNPGNEJJRZUOCIKSPWDKDDYMUFGECPPCCD");

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
    msg.setTimeStamp(0.0185722268571);
    msg.setSource(22383U);
    msg.setSourceEntity(235U);
    msg.setDestination(48504U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.669178370874;
    msg.lon = 0.232392431015;
    msg.z = 0.576743879202;
    msg.z_units = 239U;
    msg.speed = 0.787835710815;
    msg.speed_units = 56U;
    msg.abort_z = 0.181153036371;
    msg.bearing = 0.424523078036;
    msg.glide_slope = 17U;
    msg.glide_slope_alt = 0.351548889968;
    msg.custom.assign("DBNGNXVXRVTBMTBUAZGRGAJHLHPFTRZIHKCSUWLAYKLSDCPYFOHRDAWVMXHGCKWIBQWSYZKTIPHQUUQPCFWSOWUIYHKQFIC");

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
    msg.setTimeStamp(0.366647025005);
    msg.setSource(42217U);
    msg.setSourceEntity(219U);
    msg.setDestination(64434U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.0346126718511;
    msg.lon = 0.902453686937;
    msg.z = 0.290415818292;
    msg.z_units = 102U;
    msg.speed = 0.789665838037;
    msg.speed_units = 100U;
    msg.abort_z = 0.0506284330649;
    msg.bearing = 0.636933318878;
    msg.glide_slope = 26U;
    msg.glide_slope_alt = 0.433108103515;
    msg.custom.assign("XNVKYGBWGQHLFDBOYHXMKADRJPOCUFSOUISTIUEYCLDDBKWINZQCPYXREHJPIDAVIJUIWCZLLXNVOUVSJANCXWGWPIFTPSPUZJYSGQAQTIGWIMC");

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
    msg.setTimeStamp(0.421930604634);
    msg.setSource(56568U);
    msg.setSourceEntity(154U);
    msg.setDestination(61064U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.00896424423075;
    msg.lon = 0.677276825134;
    msg.z = 0.63380535867;
    msg.z_units = 2U;
    msg.speed = 0.528580058605;
    msg.speed_units = 166U;
    msg.abort_z = 0.697454321564;
    msg.bearing = 0.659012732443;
    msg.glide_slope = 241U;
    msg.glide_slope_alt = 0.0445697100004;
    msg.custom.assign("SVIMLIKMTQPYFVKRJGSHOODTOIMWECNXVSDCGEETLTLBDQMRCMAVOSRUUTJTZHUBZZNNGWALWEEAADOSLRPCVHXQUYYNHYKHNCVNWUQQDSAXIPHQKSMBVSJXFUGCEDHFOWVBCZOFLKQAZMFXBGSHHYUWPJCZPJJYBTDIORYRTPRWGVIEKRZVRO");

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
    msg.setTimeStamp(0.514137318581);
    msg.setSource(54466U);
    msg.setSourceEntity(99U);
    msg.setDestination(39248U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.92086383817;
    msg.lon = 0.397552031207;
    msg.speed = 0.614928628091;
    msg.speed_units = 146U;
    msg.limits = 60U;
    msg.max_depth = 0.447402890134;
    msg.min_alt = 0.230493195351;
    msg.time_limit = 0.62620352926;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.331911819376;
    tmp_msg_0.lon = 0.91325184655;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("UOYYUMUWNMAXNOPZUZWLQTNJRAGRCTNAOILZDCHLXHLDKHURNAPNWISZXCUKCQYTFVKQRACIVFSEBCSXV");
    msg.custom.assign("DWRNJQVRFWEDBEIJGWUXG");

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
    msg.setTimeStamp(0.360531272584);
    msg.setSource(50432U);
    msg.setSourceEntity(100U);
    msg.setDestination(45435U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.892545625033;
    msg.lon = 0.808683448483;
    msg.speed = 0.109555172881;
    msg.speed_units = 26U;
    msg.limits = 58U;
    msg.max_depth = 0.521170622043;
    msg.min_alt = 0.264980950351;
    msg.time_limit = 0.561819888348;
    msg.controller.assign("IJTYYBWNTAZPWVBTYWDWCGBDMSHICFIXFPPFDQFLGYTEXKNVAVMSCUURBNZHKNCYQLHACDPMKOHFHXJAZENXUHPJJFKRXDQQKDJMSJWMXURIOOVNEWZCVKRRSLJHREDHDGKOFILCUPLXBEOUWMUMODILESYIGIZAUTTYFZMWQLTJGSGORCTTGQNHPNGRNAHVFABQBVXDQFEZPLSYKYOZZQX");
    msg.custom.assign("DWUGEJQLDQJUAWKXLKCIXKHESODOIPXBVXZMLZUBCKHMXZGLVKBMQEQXFEDAVBZISBLKSCCNJOVNTISHISNVYIRASVGJTPNGOTYSFTLUERGYNDMRDVKSWDBWWNOMFWQVIFQAPOJRUIMJLRPCWIMUMPLTIREKHRPLRZUXSYCABFWHHAHVFKTJNOMFOUJZZBREPYXCFOPDXWNYDHBYGGBEYGERPACJUDCYKT");

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
    msg.setTimeStamp(0.231092709508);
    msg.setSource(38875U);
    msg.setSourceEntity(89U);
    msg.setDestination(17575U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.170546596996;
    msg.lon = 0.336401457831;
    msg.speed = 0.921241274326;
    msg.speed_units = 22U;
    msg.limits = 42U;
    msg.max_depth = 0.354278575619;
    msg.min_alt = 0.498766784041;
    msg.time_limit = 0.22270793442;
    msg.controller.assign("DBTMZTXCLQWBKEYNTITUXGPIYYMBAAFOPCOPMGQLKVTNZNQ");
    msg.custom.assign("VVCRREAHUYDZRQKGFUAODHLSQENYWTPAJNMSTKECOWTENEIICDTIGBRLCUQYBBYNFJOWEZZMQVDQXTZQ");

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
    msg.setTimeStamp(0.870389515968);
    msg.setSource(57939U);
    msg.setSourceEntity(19U);
    msg.setDestination(34171U);
    msg.setDestinationEntity(27U);
    msg.target.assign("DIJIZPMSIXDODKVAQFECWGATQMNXTRIXZYSTDURVEAEEZMHELWFPUYYPIYBFPOBECKTNOXHKUYIQDZHRLSKJURVFZBLLSVRPZQBWLXZSGDSMMROJVORVHGMPEA");
    msg.max_speed = 0.870975321455;
    msg.speed_units = 40U;
    msg.lat = 0.759788221419;
    msg.lon = 0.0400798306867;
    msg.z = 0.273980639398;
    msg.z_units = 130U;
    msg.custom.assign("CGZEXDJGYMFAQXOWAVRWSCUIZQTSUYIDYSRGTKZXRZGLS");

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
    msg.setTimeStamp(0.326557640194);
    msg.setSource(55257U);
    msg.setSourceEntity(239U);
    msg.setDestination(62229U);
    msg.setDestinationEntity(18U);
    msg.target.assign("WJBCWPRKXLQSQCZKUUIJVYREBEKXAZTGMPDFXCVHVWIOHNQUASIRSOGGPXPAFNEXVVKRHHNGKZRCWMIUXZFADDAFNUTKFKRDJHVVYJHTXDTBQOJOTWKOSIMANCWNEXUCHGNUNEIMBDSKEGJPBPILDOSBQFBTSAUVINYJRLZQYGOBVCMLCYXDJTMYLACHZRQFSMMALHBQEDMGZCFIZOSPUWPLQJDESGK");
    msg.max_speed = 0.855344609085;
    msg.speed_units = 164U;
    msg.lat = 0.807636694854;
    msg.lon = 0.22603812727;
    msg.z = 0.280100282497;
    msg.z_units = 222U;
    msg.custom.assign("HORYONMZBSEOGZSIDFFYQWSXCBAVUNIMPCCDTMJRZWKDOKHJQFVTBKLQNGIZXYYUOXJWKUXBEWDQHQTLEMJUWZWOJJPHBRVMJJESXMCEMBSGNNLADFAVRIXQSZGHUPPCUTXTIFSAGTGDOQRPIVKPACV");

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
    msg.setTimeStamp(0.992268138799);
    msg.setSource(12817U);
    msg.setSourceEntity(238U);
    msg.setDestination(57374U);
    msg.setDestinationEntity(13U);
    msg.target.assign("IRVNKBDFGMOYCAPNQBTVBGNQXSKBIBYHVHXDJCPKHTSVYYZLCIIJZKYIFVZMXPQQFBQAPCIADGTFWBWKXRCFSBVVORSGETNYMHJNATSLHSPOSAWLWLEMXUULKUUKUWIPHIQASENWZEZQCZTYNPTRMGZOORLWDVVGZXNXQEBEHUUUDWETGDDMOTLLWHAFSBAJGEIOOZXEIQUJRGXVAM");
    msg.max_speed = 0.747753411706;
    msg.speed_units = 206U;
    msg.lat = 0.917520475659;
    msg.lon = 0.420760886099;
    msg.z = 0.372282736771;
    msg.z_units = 10U;
    msg.custom.assign("TLQPAKPSEVFLNVRRVZEVEQIXWZBCMTHKJXKTUBTAZPPKTUAGFUBGSANTIBPKBJRGFYEOGDRDRXZDUIIMMXHEHSNXNVDYOCSHKCIIQRCEWXZMMUJTEYKXWGGNZAFLFVPWWJMLSLLFZOHOQMHQIIMQPTWCYZOOLSKEROCABJCCRXBUNSDNOXCKRULHHLPJOQVJZDFNA");

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
    msg.setTimeStamp(0.234228851488);
    msg.setSource(38730U);
    msg.setSourceEntity(34U);
    msg.setDestination(62316U);
    msg.setDestinationEntity(250U);
    msg.timeout = 10558U;
    msg.lat = 0.325446750487;
    msg.lon = 0.606120549137;
    msg.speed = 0.979892090246;
    msg.speed_units = 182U;
    msg.custom.assign("UTSTLPAWCQAAADOQIQVICUWMYADXIJFSUSKYDDNEQWOXTNGWRBXIZBGNXOHHXBWRREAFHGFLJNSLHWOYUHPRPCCXRDUJECXMTWWWZZKBYMVFLJLBQJNVQRECQSHEDOEVSIMGCWIAPPKBZIMFOUYDLQKHUXYGJETUIFVZMOVGOFTEFIZVQYAYZQBMRHLDGNBE");

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
    msg.setTimeStamp(0.786766834016);
    msg.setSource(23276U);
    msg.setSourceEntity(34U);
    msg.setDestination(23832U);
    msg.setDestinationEntity(231U);
    msg.timeout = 47493U;
    msg.lat = 0.154734836433;
    msg.lon = 0.201177427605;
    msg.speed = 0.301950861862;
    msg.speed_units = 232U;
    msg.custom.assign("KQXETEWPDPVLQIBUQWGVKCZNXGXRDGRYJRJRDCVDGDAOZ");

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
    msg.setTimeStamp(0.373515158637);
    msg.setSource(707U);
    msg.setSourceEntity(77U);
    msg.setDestination(29595U);
    msg.setDestinationEntity(97U);
    msg.timeout = 41524U;
    msg.lat = 0.801729974492;
    msg.lon = 0.740939340532;
    msg.speed = 0.528734424988;
    msg.speed_units = 71U;
    msg.custom.assign("HWHHXDOGDQHIYHIOVMVOWCBTEJQUNAMZORGVDGEQUKCEYMKVBKEYJYRYDMOFRKIUVTZPEJXCCUUWQBRCCWAQGMJCDSDOVMHZGFDXNASNFRFCPNPBXUEDJRLAGPWXAKXYHABMPMXAVLBEIZEFPNFUKTSSPQSQSJZTIQWJYNPKETJB");

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
    msg.setTimeStamp(0.614795841921);
    msg.setSource(40491U);
    msg.setSourceEntity(57U);
    msg.setDestination(31520U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.19167019124;
    msg.lon = 0.14080183458;
    msg.z = 0.234156812867;
    msg.z_units = 46U;
    msg.radius = 0.32380335892;
    msg.duration = 17757U;
    msg.speed = 0.758252569696;
    msg.speed_units = 188U;
    msg.popup_period = 65161U;
    msg.popup_duration = 32578U;
    msg.flags = 69U;
    msg.custom.assign("HEZZGPIFUTDVTOQQJXHPLFGMCDZNWLQ");

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
    msg.setTimeStamp(0.624780471007);
    msg.setSource(18722U);
    msg.setSourceEntity(96U);
    msg.setDestination(13276U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.0483486880874;
    msg.lon = 0.50312838986;
    msg.z = 0.689072623344;
    msg.z_units = 123U;
    msg.radius = 0.556693173412;
    msg.duration = 11584U;
    msg.speed = 0.632407029132;
    msg.speed_units = 181U;
    msg.popup_period = 17363U;
    msg.popup_duration = 19966U;
    msg.flags = 182U;
    msg.custom.assign("BEVMBEPJDXMXASPRREFEOTJIEGSHCFJQXNIOQZAOHQKZPBJGCOKPWVSHRDANRIJZHKNGFBCZKHZOPUKMICSYROXOZBUBWDASOACHWKMIOVDEZVMVEKHNISHQGHSDGTZMEGTUAZGIDFRUQEDCYNIGLLKUV");

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
    msg.setTimeStamp(0.83468514114);
    msg.setSource(46396U);
    msg.setSourceEntity(236U);
    msg.setDestination(50065U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.360582244659;
    msg.lon = 0.757243223367;
    msg.z = 0.373127869492;
    msg.z_units = 48U;
    msg.radius = 0.866531658303;
    msg.duration = 12594U;
    msg.speed = 0.73921648957;
    msg.speed_units = 251U;
    msg.popup_period = 35366U;
    msg.popup_duration = 63968U;
    msg.flags = 26U;
    msg.custom.assign("QGMUXKARONRHSHXFZNZGSWFFWUNJNJPTLXBLEPQCSUVIEPZEQEJUZBCDESLFWQLKSJXWHRLMAYOJETWZYNISRZCQAKIVTOTWHWDCVSITPSBYZHJBAFWECGGUMHYGPENPZVBYTNOIM");

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
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.361834668546);
    msg.setSource(52071U);
    msg.setSourceEntity(75U);
    msg.setDestination(48169U);
    msg.setDestinationEntity(121U);
    msg.timeout = 40880U;
    msg.lat = 0.209023068137;
    msg.lon = 0.77620529186;
    msg.z = 0.377125681038;
    msg.z_units = 46U;
    msg.speed = 0.377280343208;
    msg.speed_units = 193U;
    msg.bearing = 0.905777002904;
    msg.width = 0.185023808565;
    msg.direction = 78U;
    msg.custom.assign("RRDCQUJFZJOMCDMOIFNJGGJRPZGBYCYSMZGNSOHWSLVPLNNKIVGEDQFVTRBKNQRAUKXCVBYKVZIUGEOAURIKRCUSYQVMVBBPMGWJPPFOWYMKLCWVKHMPTSRLTHSWCWYBSLZUHDTJYMJWHEQUTZXBNFEKLFZCHTZWIO");

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
    msg.setTimeStamp(0.0176858879292);
    msg.setSource(2619U);
    msg.setSourceEntity(160U);
    msg.setDestination(21441U);
    msg.setDestinationEntity(167U);
    msg.timeout = 6248U;
    msg.lat = 0.56066004572;
    msg.lon = 0.0234451393657;
    msg.z = 0.333579504305;
    msg.z_units = 200U;
    msg.speed = 0.959561046386;
    msg.speed_units = 48U;
    msg.bearing = 0.124708330089;
    msg.width = 0.859644798192;
    msg.direction = 140U;
    msg.custom.assign("WBOYGPHSFKGMXQKXMCPIUXKQMQFUDCKHNDOPIVPZFBKAIBPMCAMYDVQPCRRKJUETMVBYKLGBGSCEZVKYRKTDLXMLSVWZJLAJMFWNANZCENEOJTUVGARHWTXVSZHCSLROOTFALSHBQAJHD");

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
    msg.setTimeStamp(0.502196207251);
    msg.setSource(51051U);
    msg.setSourceEntity(229U);
    msg.setDestination(60518U);
    msg.setDestinationEntity(14U);
    msg.timeout = 59621U;
    msg.lat = 0.937379967925;
    msg.lon = 0.0919695079635;
    msg.z = 0.802717451917;
    msg.z_units = 111U;
    msg.speed = 0.902413282199;
    msg.speed_units = 87U;
    msg.bearing = 0.258885636468;
    msg.width = 0.208604550943;
    msg.direction = 36U;
    msg.custom.assign("MMFYQOAVXYFLSBXIDVTARMHVTJUVMRBTKRUYSGKULLWFIHVBMQKYKUONJKPIDDHKZRXLZVABSJHBWOTLEISAEDQRFZJOCFTICABQMKULXHPCZFPPCYXSGDOLTXMXAVZWEPDFFAKXGLCEENWRQKIYGZWVUPIWCDYXWCZWPHOJWEQTYFIJKAEOWTAR");

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
    msg.setTimeStamp(0.763090007058);
    msg.setSource(57382U);
    msg.setSourceEntity(238U);
    msg.setDestination(6913U);
    msg.setDestinationEntity(106U);
    msg.op_mode = 136U;
    msg.error_count = 4U;
    msg.error_ents.assign("GKOUAYWWOXKFYPLVSBXNWJYHQXBMFYEZUBJOYVGQHGIOXDUGFIKDCYXPMWAORNAWTEJITXQCVTPJLOMQMFVLFGYJGELCDKEQZOHUXZXJPFZFDIBCNH");
    msg.maneuver_type = 64121U;
    msg.maneuver_stime = 0.523776967803;
    msg.maneuver_eta = 13766U;
    msg.control_loops = 3801148592U;
    msg.flags = 12U;
    msg.last_error.assign("SAUSOXHIBZGZENAAVPVYHCQMDYLTOFNO");
    msg.last_error_time = 0.050956975578;

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
    msg.setTimeStamp(0.76050587716);
    msg.setSource(40494U);
    msg.setSourceEntity(110U);
    msg.setDestination(42282U);
    msg.setDestinationEntity(100U);
    msg.op_mode = 53U;
    msg.error_count = 105U;
    msg.error_ents.assign("CLNDVVYTZIBENBGKFCXELMIKBDRZVUSFOVMVTSYWWOSHAIMCQBJGHEOGWYYLUZDVENXYSMUGTGPAIPTIZFUTTLQLIHLFGOXQNMAWZSAFUZCRFYPEPEVQGCWESDYZPKHHBTJFREJMTYDKRAXQZKUOMXNLNONBDHQWNWH");
    msg.maneuver_type = 41818U;
    msg.maneuver_stime = 0.736273714745;
    msg.maneuver_eta = 56749U;
    msg.control_loops = 643584148U;
    msg.flags = 166U;
    msg.last_error.assign("BQTJMBFOSQRECKWMAIEUSPBQZPCCOEVHKUXUPHIK");
    msg.last_error_time = 0.626574443077;

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
    msg.setTimeStamp(0.512729146738);
    msg.setSource(31218U);
    msg.setSourceEntity(124U);
    msg.setDestination(23853U);
    msg.setDestinationEntity(37U);
    msg.op_mode = 76U;
    msg.error_count = 58U;
    msg.error_ents.assign("XNYVBIGASTGO");
    msg.maneuver_type = 53297U;
    msg.maneuver_stime = 0.788199693099;
    msg.maneuver_eta = 12106U;
    msg.control_loops = 3271706725U;
    msg.flags = 163U;
    msg.last_error.assign("GJBWFHZCLCZFSDMWWIHETBXCNNPDJ");
    msg.last_error_time = 0.623084210796;

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
    msg.setTimeStamp(0.0279443068341);
    msg.setSource(6549U);
    msg.setSourceEntity(74U);
    msg.setDestination(38913U);
    msg.setDestinationEntity(151U);
    msg.type = 200U;
    msg.request_id = 1732U;
    msg.command = 148U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 54659U;
    tmp_msg_0.lat = 0.405712804271;
    tmp_msg_0.lon = 0.399178219919;
    tmp_msg_0.z = 0.373133973733;
    tmp_msg_0.z_units = 129U;
    tmp_msg_0.speed = 0.473040066053;
    tmp_msg_0.speed_units = 30U;
    tmp_msg_0.duration = 21107U;
    tmp_msg_0.radius = 0.515105607323;
    tmp_msg_0.flags = 74U;
    tmp_msg_0.custom.assign("ZUJCSRYGWGMEJMSNOKHENXEWAGMYYHUDPUFVKTBOSQVLYCTJDGTSAXQSEMFXRLFADFOCUZFVRHGQDGILNCGUNAQABPDTPANHEEEQPKPHJJOYEUKCWOQRYKOY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47724U;
    msg.info.assign("NLCLKSTKPYACKDGTCUFXWGQIGKIGQTCSGKGROWQRBNFBEVJRSSLYRYBSHJUTNOVUXERSULFDWWESYBATDYUCYWGQFVDBNIYCEXNCRZHZZIDBPOAORIZEGHCMVALXRIDAQKPUOOJWYEUKOWLELQXHNVFGJZVHWJXJHXJHBIUYDFHNHMIJRPCBQXNKMFVQKCOJISDAPZTZOTAPLBAMMPMUTLZMFVEPBDTZIYMUEMWSRPNTV");

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
    msg.setTimeStamp(0.747207594803);
    msg.setSource(35797U);
    msg.setSourceEntity(136U);
    msg.setDestination(6904U);
    msg.setDestinationEntity(214U);
    msg.type = 226U;
    msg.request_id = 44143U;
    msg.command = 14U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 50981U;
    tmp_msg_0.lat = 0.200102633712;
    tmp_msg_0.lon = 0.818815760081;
    tmp_msg_0.z = 0.617109878372;
    tmp_msg_0.z_units = 187U;
    tmp_msg_0.amplitude = 0.938625901253;
    tmp_msg_0.pitch = 0.106717306937;
    tmp_msg_0.speed = 0.529123922923;
    tmp_msg_0.speed_units = 212U;
    tmp_msg_0.custom.assign("ZTLUPCIUALBGLPOGKGKTEJSHBXRZYHIGRSMUDAKRHEADXHEYNATXCOMUBXSDDKSFBENWQQRHAWLJKDWFVYFZICOJQRDKOJIJMVWYQLANIMYSPNRGCQSGJRVUSWIJFAEHCUQDBVZIBQAYIEZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34129U;
    msg.info.assign("KKFRRRHFINBOLKOSIUPWEALIASXHTOCXHGGPSHEPSTSPPGASFUNCOVUMVXVYLDSTITBXMUBUDNDICLQOJMPVGONQXJRMRBMJQHMBQGKSIJRAZUWNHWUKEFEUNLALXFZQJIYPDGXCDAJMDKQCZAWUBYWCZGCYZVNGNDKZYGZEORWBFVQZAMWMIQQYEDEFIOJYETVIQYTSRFLTRXFGKKZHHLJATXHPYWUCVCNJOLXNPVBYBRTHEDDZOTKLVPJWM");

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
    msg.setTimeStamp(0.674579066287);
    msg.setSource(21561U);
    msg.setSourceEntity(173U);
    msg.setDestination(44246U);
    msg.setDestinationEntity(82U);
    msg.type = 215U;
    msg.request_id = 209U;
    msg.command = 168U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 13876U;
    tmp_msg_0.control_ent = 248U;
    tmp_msg_0.timeout = 0.38626678584;
    tmp_msg_0.loiter_radius = 0.118919271089;
    tmp_msg_0.altitude_interval = 0.451994399884;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 9764U;
    msg.info.assign("LQTBBPKIGEYYXGUFHZPJDSDACNOBIZMQCQZJQRPERHBLWSGPMLZCKEAJVQYNNMYBHTDAHPWNQAOKBCAACDMWRRSIFKFTDKBGXMXWXJUETEQPXSNAGOYIBYCNAFKYOVWEOIKDTXZFGTIWVFFLFJVNTIDGVHQGYRXYPAVUCBRNHWDOUCGHNZLDWSIMQUFTVLJXPZLEHGJLKEUCMWULEZQRFVMMXPKUTUZSJOI");

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
    msg.setTimeStamp(0.668431679883);
    msg.setSource(25960U);
    msg.setSourceEntity(213U);
    msg.setDestination(12621U);
    msg.setDestinationEntity(202U);
    msg.command = 131U;
    msg.entities.assign("KAYOZUTFBAEFLNIWNYRMBWCPXIVUHXQSIZVTLKTVEOOTKBMFPPSSQYFIRRGHDIRGTHQRAPSYPMZYEEFXGRVOLJUCQTVUAWXQZDBVIYOSMTQAIJFVXMOKKXH");

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
    msg.setTimeStamp(0.871585028121);
    msg.setSource(15189U);
    msg.setSourceEntity(187U);
    msg.setDestination(37614U);
    msg.setDestinationEntity(133U);
    msg.command = 67U;
    msg.entities.assign("NMAKEEFRBQTPZFDTXBUHSXHTNGNMKAJLCPDYKYQYSVXUCLZNXQEKOTTXLGPLALTCOWIRTXLXWKPHVCEYQFOMMKMONSJCJUQQCBFSAUIDGVJUWIWUPJQVNV");

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
    msg.setTimeStamp(0.784422292561);
    msg.setSource(58255U);
    msg.setSourceEntity(166U);
    msg.setDestination(44121U);
    msg.setDestinationEntity(126U);
    msg.command = 205U;
    msg.entities.assign("KWUZTXYIMPLTXCABDKXUMVNLESNLPLQHIFSFTQIKIIPARLYCHRBNHODQPHJTBKKXASXTZXAYDUBCWALSWIGUFVUGGJXPENSGTDPCYHRGSWCKWPSAFUGOGVAQGBLYMNSRMAYIKQETZVFXQIMWVMNHZXHJHDOVRITCVRBWEIFHBQGNYGJJRUBZZBVMQCUYQRJFJUXEJLWFWVEWLEUREPNSLDK");

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
    msg.setTimeStamp(0.00779080701697);
    msg.setSource(7418U);
    msg.setSourceEntity(171U);
    msg.setDestination(5010U);
    msg.setDestinationEntity(132U);
    msg.mcount = 64U;
    msg.mnames.assign("PZCGUVXIZIZYBXUGCMRJZKCSUNEKQAHULNOQ");
    msg.ecount = 217U;
    msg.enames.assign("BBTPZRHOCUDGEGHNFPIRZTYLGCAYJCLDWUPMBYLDVJXSNLTOVRVUJLFZHWSHKNDRPGWGRFTQPJMMZKLCQGMOEPIVKTFPWZMCJWAQYQOSNQEXRQVZEDQDJCPQCWGYOXJHBEVSSKGKKUFAE");
    msg.ccount = 151U;
    msg.cnames.assign("TJZXMTSHMRUEIWUXSXVNNSKOMGVXPHCIRAEPPQSUPVXUMJQAAKYZEXKLROCZTRDPWMJKMAALBYXJYFUQNEBIW");
    msg.last_error.assign("VSHNMLGGVMJHYVZZPGWQDAKWXMDZVJSNQSMAQFFOTUWVGEPQFGJBHLRKWXDHOTZTDEQXKPSKGORVLCIZUSEHXEJLHXLKYCNZWSXMMKXNEVKJQUWHXREYZYFICFFBZYZARLYKMPARCGPOQALBJIOCWBUCIAOEONQEGFKSFDCLBKITAIRIADYCBMAWVPCTTNGUJPRMOIRRBQUDDRVSIBUOBUUFAEX");
    msg.last_error_time = 0.917416604892;

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
    msg.setTimeStamp(0.296844686191);
    msg.setSource(28942U);
    msg.setSourceEntity(35U);
    msg.setDestination(29176U);
    msg.setDestinationEntity(146U);
    msg.mcount = 112U;
    msg.mnames.assign("KFMUFEEWNBCASMVYIJLRNLAREIWVFWKERDOCUUSVBDIWBVQMTJCPYYNVXKMPUTSXCECSFRGQJBOJFKIPCFYYOBJTCUILSXGWASYXZGGTYORQKFUHONWLHHTAKLD");
    msg.ecount = 201U;
    msg.enames.assign("ODNHYWMGRBWPOAYDPXAUYAKJTSQTAMMMHZKMJKABLGUBHLLEVIORTOUAUKUHHXVIGNSFYRHDIQOSSIENGSXXINEPAAZKFULOBZXMSNPKNEQBGBLTJDPXRQJUXMQCPVQIWCVIBEYJZEFUOQWWFCGOVPHNSKZRPWLJ");
    msg.ccount = 88U;
    msg.cnames.assign("HVXGSBRXIRHUZHDGMQWZJDCYAUHTPJADWFTTUSUBQEEPQRINMSPPWZUIJQCCEKDVLUHKLZ");
    msg.last_error.assign("BMYQIMYEDXWJUORTTNAYFKXPCLPNSFPQBCTAIYVHZZHGQICZUSWCPWBAK");
    msg.last_error_time = 0.198498729562;

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
    msg.setTimeStamp(0.549044026216);
    msg.setSource(15403U);
    msg.setSourceEntity(197U);
    msg.setDestination(9185U);
    msg.setDestinationEntity(27U);
    msg.mcount = 35U;
    msg.mnames.assign("IAGHEHYWJNXKISSUQRLKNBVDKWUNCPZICCKQMZSVOQNOQASUXBFWERPJLDLYRUDBXJCMF");
    msg.ecount = 54U;
    msg.enames.assign("BBLUNNENBLXJFNCAXMRPPUQGDSGAIZLWYRSYEIIHMTKSQGHJLWROPNCKPQSIENWFUCRIZTADZTCOHTUUDXMIDVVPMJBGYJCOWTXJGZDEWYISCZALYREGKBTYFIVWUVTHYJFVVYKHROCVSBGKRALDPKEFDQMTNGTWDRZLVWFQXEZUNEHUQHUAACYSFLBQPOQILAK");
    msg.ccount = 57U;
    msg.cnames.assign("FELZHCWOSIYPCJUCJHUZZTEAGGHQSMHWHENKRAXI");
    msg.last_error.assign("HBPCIPVFIJSKHZFGFIRGNAO");
    msg.last_error_time = 0.379262887164;

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
    msg.setTimeStamp(0.142049302398);
    msg.setSource(61449U);
    msg.setSourceEntity(26U);
    msg.setDestination(51408U);
    msg.setDestinationEntity(73U);
    msg.mask = 110U;
    msg.max_depth = 0.945860734282;
    msg.min_altitude = 0.357514868224;
    msg.max_altitude = 0.208923180126;
    msg.min_speed = 0.324303682505;
    msg.max_speed = 0.503652293205;
    msg.max_vrate = 0.554370903021;
    msg.lat = 0.870538597686;
    msg.lon = 0.567210137383;
    msg.orientation = 0.152316429347;
    msg.width = 0.643718635664;
    msg.length = 0.396884500069;

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
    msg.setTimeStamp(0.0639509203402);
    msg.setSource(2874U);
    msg.setSourceEntity(153U);
    msg.setDestination(16513U);
    msg.setDestinationEntity(105U);
    msg.mask = 63U;
    msg.max_depth = 0.636909202747;
    msg.min_altitude = 0.403953113602;
    msg.max_altitude = 0.588021161036;
    msg.min_speed = 0.933476826294;
    msg.max_speed = 0.630192867434;
    msg.max_vrate = 0.110711914863;
    msg.lat = 0.0174102714535;
    msg.lon = 0.605090488883;
    msg.orientation = 0.997036105257;
    msg.width = 0.780657139127;
    msg.length = 0.75880894614;

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
    msg.setTimeStamp(0.660692305238);
    msg.setSource(25777U);
    msg.setSourceEntity(53U);
    msg.setDestination(34561U);
    msg.setDestinationEntity(240U);
    msg.mask = 167U;
    msg.max_depth = 0.146179447161;
    msg.min_altitude = 0.579655625675;
    msg.max_altitude = 0.582584745618;
    msg.min_speed = 0.389051950944;
    msg.max_speed = 0.824007622611;
    msg.max_vrate = 0.570842283298;
    msg.lat = 0.501817960455;
    msg.lon = 0.726560809327;
    msg.orientation = 0.123087027338;
    msg.width = 0.702725747847;
    msg.length = 0.440153163043;

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
    msg.setTimeStamp(0.788726346043);
    msg.setSource(35010U);
    msg.setSourceEntity(13U);
    msg.setDestination(54041U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.903871362838);
    msg.setSource(54U);
    msg.setSourceEntity(123U);
    msg.setDestination(24326U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.914749728717);
    msg.setSource(21042U);
    msg.setSourceEntity(146U);
    msg.setDestination(30575U);
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
    msg.setTimeStamp(0.888584894813);
    msg.setSource(20161U);
    msg.setSourceEntity(75U);
    msg.setDestination(4253U);
    msg.setDestinationEntity(162U);
    msg.duration = 22497U;

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
    msg.setTimeStamp(0.253963267434);
    msg.setSource(52020U);
    msg.setSourceEntity(132U);
    msg.setDestination(7966U);
    msg.setDestinationEntity(91U);
    msg.duration = 45985U;

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
    msg.setTimeStamp(0.7035322351);
    msg.setSource(41039U);
    msg.setSourceEntity(213U);
    msg.setDestination(7394U);
    msg.setDestinationEntity(19U);
    msg.duration = 64864U;

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
    msg.setTimeStamp(0.854311554417);
    msg.setSource(36004U);
    msg.setSourceEntity(91U);
    msg.setDestination(38953U);
    msg.setDestinationEntity(234U);
    msg.enable = 197U;
    msg.mask = 3971667540U;
    msg.scope_ref = 804604902U;

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
    msg.setTimeStamp(0.407491956);
    msg.setSource(46053U);
    msg.setSourceEntity(107U);
    msg.setDestination(5335U);
    msg.setDestinationEntity(36U);
    msg.enable = 212U;
    msg.mask = 1609614757U;
    msg.scope_ref = 3135062643U;

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
    msg.setTimeStamp(0.448968577492);
    msg.setSource(55380U);
    msg.setSourceEntity(172U);
    msg.setDestination(57971U);
    msg.setDestinationEntity(240U);
    msg.enable = 87U;
    msg.mask = 3383335192U;
    msg.scope_ref = 2900875800U;

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
    msg.setTimeStamp(0.722228474992);
    msg.setSource(53941U);
    msg.setSourceEntity(237U);
    msg.setDestination(14259U);
    msg.setDestinationEntity(194U);
    msg.medium = 182U;

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
    msg.setTimeStamp(0.630444396064);
    msg.setSource(7037U);
    msg.setSourceEntity(19U);
    msg.setDestination(63504U);
    msg.setDestinationEntity(57U);
    msg.medium = 50U;

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
    msg.setTimeStamp(0.757708422976);
    msg.setSource(61910U);
    msg.setSourceEntity(202U);
    msg.setDestination(52942U);
    msg.setDestinationEntity(166U);
    msg.medium = 78U;

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
    msg.setTimeStamp(0.875421160838);
    msg.setSource(26430U);
    msg.setSourceEntity(155U);
    msg.setDestination(60526U);
    msg.setDestinationEntity(248U);
    msg.value = 0.042266988038;
    msg.type = 177U;

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
    msg.setTimeStamp(0.880698653187);
    msg.setSource(43713U);
    msg.setSourceEntity(44U);
    msg.setDestination(31992U);
    msg.setDestinationEntity(218U);
    msg.value = 0.605980131527;
    msg.type = 75U;

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
    msg.setTimeStamp(0.838620737966);
    msg.setSource(33701U);
    msg.setSourceEntity(239U);
    msg.setDestination(64764U);
    msg.setDestinationEntity(213U);
    msg.value = 0.956408798823;
    msg.type = 143U;

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
    msg.setTimeStamp(0.142581036894);
    msg.setSource(33862U);
    msg.setSourceEntity(56U);
    msg.setDestination(52594U);
    msg.setDestinationEntity(223U);
    msg.possimerr = 0.970138728943;
    msg.converg = 0.590830358476;
    msg.turbulence = 0.862846995953;
    msg.possimmon = 207U;
    msg.commmon = 97U;
    msg.convergmon = 197U;

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
    msg.setTimeStamp(0.00274153670936);
    msg.setSource(11842U);
    msg.setSourceEntity(121U);
    msg.setDestination(15889U);
    msg.setDestinationEntity(178U);
    msg.possimerr = 0.258299136472;
    msg.converg = 0.96259060093;
    msg.turbulence = 0.862222620078;
    msg.possimmon = 113U;
    msg.commmon = 15U;
    msg.convergmon = 206U;

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
    msg.setTimeStamp(0.502302396778);
    msg.setSource(25003U);
    msg.setSourceEntity(36U);
    msg.setDestination(49291U);
    msg.setDestinationEntity(120U);
    msg.possimerr = 0.777314764139;
    msg.converg = 0.998176111032;
    msg.turbulence = 0.128466547562;
    msg.possimmon = 146U;
    msg.commmon = 230U;
    msg.convergmon = 162U;

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
    msg.setTimeStamp(0.862366106099);
    msg.setSource(30334U);
    msg.setSourceEntity(152U);
    msg.setDestination(54461U);
    msg.setDestinationEntity(235U);
    msg.autonomy = 134U;
    msg.mode.assign("ZYJPTRDRNNOONOGCTUWIMLAKQNJCCVBREEFKSBKQAFYTDCRJZDBEUAXEBGWAZVXZPWKXJLCUHFLSAANEAGAJSSUHDMJLRSMMVPVEVRQXLFYHSIWOIYFOYOPKGIWSPCJWCWTPHBTEKFXKZYVGFNXIYANYFGUWUFBUDNPMZIMLQIGHHLAHRPQSCEWNMYHWKBUOT");

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
    msg.setTimeStamp(0.943140404671);
    msg.setSource(33601U);
    msg.setSourceEntity(73U);
    msg.setDestination(48218U);
    msg.setDestinationEntity(22U);
    msg.autonomy = 12U;
    msg.mode.assign("LZHYZBVXOUXRYCIAZQVQDSIUTMLRAFYTJAPMASIPLNGCERTLINUBEBPIEVZCUOKNBJDFKEWFCHHAONFITNRAEOMGXXOUEUJMNSHQFS");

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
    msg.setTimeStamp(0.972277899321);
    msg.setSource(3510U);
    msg.setSourceEntity(27U);
    msg.setDestination(55905U);
    msg.setDestinationEntity(230U);
    msg.autonomy = 171U;
    msg.mode.assign("ASJXBWHRXVKCQTKHZMKJNWCHQTYGPIJZVSHJVUUKVHCIPGJMWTKTBLYDORIVNKBIGKRHQSPPSUCAQHADPSAZXBGQLDJBMLNKUEXTUDRMKJZMOMLSCOLKFJSNEYCYODUUHZZAPFEGFLFOWIVQCFVSPFTRB");

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
    msg.setTimeStamp(0.87880701202);
    msg.setSource(8477U);
    msg.setSourceEntity(102U);
    msg.setDestination(35503U);
    msg.setDestinationEntity(153U);
    msg.type = 20U;
    msg.op = 188U;
    msg.possimerr = 0.164407895629;
    msg.converg = 0.946493127554;
    msg.turbulence = 0.622372189103;
    msg.possimmon = 233U;
    msg.commmon = 66U;
    msg.convergmon = 28U;

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
    msg.setTimeStamp(0.407492011756);
    msg.setSource(15313U);
    msg.setSourceEntity(185U);
    msg.setDestination(63140U);
    msg.setDestinationEntity(126U);
    msg.type = 25U;
    msg.op = 72U;
    msg.possimerr = 0.738331293181;
    msg.converg = 0.0353132873569;
    msg.turbulence = 0.392429565786;
    msg.possimmon = 200U;
    msg.commmon = 12U;
    msg.convergmon = 1U;

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
    msg.setTimeStamp(0.124948724424);
    msg.setSource(12568U);
    msg.setSourceEntity(109U);
    msg.setDestination(39898U);
    msg.setDestinationEntity(53U);
    msg.type = 48U;
    msg.op = 254U;
    msg.possimerr = 0.37579760837;
    msg.converg = 0.0190963437128;
    msg.turbulence = 0.870864429999;
    msg.possimmon = 54U;
    msg.commmon = 78U;
    msg.convergmon = 7U;

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
    msg.setTimeStamp(0.574196928338);
    msg.setSource(14921U);
    msg.setSourceEntity(116U);
    msg.setDestination(60395U);
    msg.setDestinationEntity(194U);
    msg.op = 142U;
    msg.comm_interface = 213U;
    msg.period = 5209U;
    msg.sys_dst.assign("WBCMWDHRKIGPYHHXACYWJAXLHGZRZCOEDQRDJFAWQFKHEMYWSUCRODUTFHFVKUAJFMCYVXKIPOIUBAKQXGCGXGFSJNXVXLUFVMMUPRDWTNZMNNBXLFDSJGEEQOHMQBKBXGBNYSAGPPMZQFUNWVWLKEMITZVGCPLBYBPMTTJUOOKRNISLTDPCXLCYSRTSLJIHWP");

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
    msg.setTimeStamp(0.147616760699);
    msg.setSource(218U);
    msg.setSourceEntity(208U);
    msg.setDestination(29087U);
    msg.setDestinationEntity(106U);
    msg.op = 104U;
    msg.comm_interface = 66U;
    msg.period = 62859U;
    msg.sys_dst.assign("WXVIFKCHNWSQOWEBLBFNMERKWIPBKVHXYRSPTJXENXWLPCYYQKBXMTIZMJBIFLLRURZKNLGNEPXVGETGOHGRSUUEHUWCNDLKXCVBYGZSDTXHBZBZOKAWHJSCTVGMOOFBRQESVMUZAMQOJFNOPTAPTIFAZWVDHLSNHDGFJRYYYP");

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
    msg.setTimeStamp(0.0138742989215);
    msg.setSource(35703U);
    msg.setSourceEntity(51U);
    msg.setDestination(35195U);
    msg.setDestinationEntity(2U);
    msg.op = 224U;
    msg.comm_interface = 211U;
    msg.period = 50870U;
    msg.sys_dst.assign("COSLYWPAREAIBLFSJRLQHNITZUDZYUPBPHCJPZPGNATLJRDCDQCDVNTDYPDKSLABOEBRVVFQMBTEKKLWIVQMQEIBZWJY");

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
    msg.setTimeStamp(0.744085750724);
    msg.setSource(19382U);
    msg.setSourceEntity(19U);
    msg.setDestination(32086U);
    msg.setDestinationEntity(87U);
    msg.stime = 1706143079U;
    msg.latitude = 0.334047520316;
    msg.longitude = 0.32210629302;
    msg.altitude = 18195U;
    msg.depth = 16178U;
    msg.heading = 56704U;
    msg.speed = -13758;
    msg.fuel = 86;
    msg.exec_state = -36;
    msg.plan_checksum = 8488U;

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
    msg.setTimeStamp(0.706876411825);
    msg.setSource(26626U);
    msg.setSourceEntity(35U);
    msg.setDestination(17230U);
    msg.setDestinationEntity(0U);
    msg.stime = 537983200U;
    msg.latitude = 0.0642851271892;
    msg.longitude = 0.438329127214;
    msg.altitude = 46776U;
    msg.depth = 37664U;
    msg.heading = 44901U;
    msg.speed = -10166;
    msg.fuel = 125;
    msg.exec_state = -125;
    msg.plan_checksum = 50445U;

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
    msg.setTimeStamp(0.125347603319);
    msg.setSource(15055U);
    msg.setSourceEntity(90U);
    msg.setDestination(42795U);
    msg.setDestinationEntity(60U);
    msg.stime = 4185191168U;
    msg.latitude = 0.0315747312759;
    msg.longitude = 0.181382668005;
    msg.altitude = 40568U;
    msg.depth = 62960U;
    msg.heading = 7325U;
    msg.speed = 14738;
    msg.fuel = -23;
    msg.exec_state = -121;
    msg.plan_checksum = 49404U;

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
    msg.setTimeStamp(0.0409483487554);
    msg.setSource(46385U);
    msg.setSourceEntity(13U);
    msg.setDestination(48318U);
    msg.setDestinationEntity(8U);
    msg.req_id = 40618U;
    msg.comm_mean = 140U;
    msg.destination.assign("LEHJQNOCWSXPVLXLCHXXFOHMXINMCCWSGMGISTIREIIEOKQAHMRSHCIOVOMKFQTNHEZVQBDPRYLOJDSXHWZUCFPZRLUMALJRBIGDWELQAOQLYZFNHMOGCOVBBNYDVEFWYTIDYVAQLQTYTBHJTGKUYWVJXEVPIJSFZWTMDCDPTYGZIUAPLWOJRHVCXPDWGADERZFMYUJKFKPKJFUKASEXRBAFBSBGYAKUSDABKQGUURBRNGNQNZXTZEK");
    msg.deadline = 0.189219873419;
    msg.data_mode = 215U;
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 22396U;
    tmp_msg_0.lat = 0.574589615862;
    tmp_msg_0.lon = 0.410928441359;
    tmp_msg_0.z_units = 199U;
    tmp_msg_0.z = 0.980210491035;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("VBERQLVAQOGCNTVZHJLPDROKKBKUMYAEHHMAHLBNHBKRJAHVONNZUQURGIRNKZHLPJSPJRKKDNEFQUXXCWPHPKTTOFZBEUYOTJZQXZFWTBQXUPAOESOKZRRFGOTDWVASDUTMDUCSJFBEZVCYFVWXLYLVMPTISSCBSDXYYJJYOMRLADQXYJLQNAXZHBVZEYGWGKIALSXIGUAQEGCMVBXDMPCYIWMS");
    const char tmp_msg_1[] = {-86, -114, 24, 111, -122, 26, -22, -10, -105, -70, 10, 7, 12, -69, 14, -32, 122, 108, 5, 89, -124, 58, -112, -94, 73, -34, 20, 97, -77, -63, -20, -10, 111, 74, -7, -25, 41, -125, -11, 97, -63, -93, -24, 115, -14, -87, 105, -122, 46, -31, -18, -119, 121, 67, -128, 15, 90, -32};
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
    msg.setTimeStamp(0.703766940323);
    msg.setSource(32359U);
    msg.setSourceEntity(20U);
    msg.setDestination(24850U);
    msg.setDestinationEntity(100U);
    msg.req_id = 53533U;
    msg.comm_mean = 184U;
    msg.destination.assign("TXGJSCADDFYUSMVMIYSMSWFTTQFYMXJVFPRZIQZYGKLWFDABUPHCVLYUNDQCAGVESBUAZWOJOMLVWGBDNOITKRFIPQOAXBQSXMDXJ");
    msg.deadline = 0.632668928375;
    msg.data_mode = 118U;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("BUPFZRWVMIRRDRLEMTUGAFDITTBEXWDBCBIANZMCKIJYASLBKLGYJXWMUJYVFDFXQCLDVPQVMQZTQNXRMCUQLUTZOHAFRJQYXHPGSZLCCYVPAYCXZTDICNCIJELZGOWHWQMSHVPYOQFHROOOFESHFXNMDIJWGKOSHLWSSUNOAYUYSINEBFPHIOGASNKUZPKTCVNAVWKSQAJZXLWJTLEPEOEJDURD");
    tmp_tmp_msg_0_0.lat = 0.603670002919;
    tmp_tmp_msg_0_0.lon = 0.152619342208;
    tmp_tmp_msg_0_0.depth = 0.512011103975;
    tmp_tmp_msg_0_0.query_channel = 182U;
    tmp_tmp_msg_0_0.reply_channel = 252U;
    tmp_tmp_msg_0_0.transponder_delay = 75U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.396373308964;
    tmp_msg_0.y = 0.568302596074;
    tmp_msg_0.var_x = 0.0213658104563;
    tmp_msg_0.var_y = 0.903919435144;
    tmp_msg_0.distance = 0.454461533972;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GPGUGFMVCHKIZFAFDOAYVINHTIVGYLBGCOJPBRYCFVDQZYSWXHWZNQGPHEFWVNFDDTNGSXSNSJZMABRSNAHKAUVTYHWHYMETLNTNTACSKEUDJQZCAIKROEPUNEIHBIDMXBXRQAZMCTKRETXYNERUJKZBZYCJLCRTMBSEGUIAOQPLHILZDXWFWOZFHOWPUJSYOPDXKQKJMQLBAJLWELOXDPQBSJEQPMURLVWUOUFMCGVKPQRDVLIRJB");
    const char tmp_msg_1[] = {-100, 14, -74, -100, -27, 16, 109, -19, 59, 59, -78, 102, -122, 35, 95, -65, -111, -55, -69, 92, -118, -37, -74, -87, -14, 122, 24, 111, -120, 61, -23, -83, 39, 3, 121, -122, -3, 118, 109, -100, -49, -11, 105, 13, -22, -54, -121, 53, -13, 5, -110, -124, -12, 111, -106, -50, -80, 54, 7, -25, 91, 99, -123, -12, 54, -107, 53, -87, 35, -77, -16, 94, -55, 96, -64, -54, -108, -18, -10, 53, 27, -94, 103};
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
    msg.setTimeStamp(0.227136028415);
    msg.setSource(42261U);
    msg.setSourceEntity(20U);
    msg.setDestination(58535U);
    msg.setDestinationEntity(202U);
    msg.req_id = 33778U;
    msg.comm_mean = 33U;
    msg.destination.assign("JXOAMRQNVOEOZFGNKIEBAQKVKYAJTXMIKSYIGWJHXGWVGUEXRDZHWRQXLBJSVUYUHCBCCFTHTTNPUVFVFSRSTMQBNWGVWQNCFKPUDNLIWNUYAXAKCMPYLHOBFEXIIIEBPCQXDBBLOYBKHOZEAPPSOXGYJQOGEJOHYNGTMWXPYLSZAULMIE");
    msg.deadline = 0.756818413572;
    msg.data_mode = 42U;
    IMC::QueryEntityState tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TLQQVHHJYFUZHQVUOALTVAUJKLPSBBFHLPYIDLZGVR");
    const char tmp_msg_1[] = {-1, 22, -35, 125, 0, -115, -33, 5, -69, -85, -50, 70, 83, -111, -95, -126, 25, 83, -34, 63, 70, -33, -25, 42, -4, 108, -52, -67, 70, 13, -122, 57, 121, 61, -23, -62, 23, 61, -20, 36, 23, -40, 28, -88, -115, 123, 39, -4, -29, 16, 51, 125, -33, 47, -34, 80, 74, -44, -110, -113, -126, 48, -106, 6, 24, 42, 91, 99, 36, 29, -51, -83, 77, -73, 102, 121, 97, 67, 95, 94, -95, 126, 77, -79, -114, -11, 27, 31, 99, -68, -117, 43, -77, 113, -67, -99, -105, -71, 41, -107, -49, -122, 65, 103, 105, 48, 121, 92, -49, -126, -43, -16, 63, -126, -11, 61, 69, 94, -122, -121, -107, -80, -28, -92, 33, -102, -99, 87, 27, 36, -103, -74, -91};
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
    msg.setTimeStamp(0.247491624444);
    msg.setSource(49479U);
    msg.setSourceEntity(135U);
    msg.setDestination(49130U);
    msg.setDestinationEntity(141U);
    msg.req_id = 53400U;
    msg.status = 71U;
    msg.info.assign("MNKQGOPBFWBYFFZMYIHMWSBDNNLFDRFMAHAJAJKCIGACGMIJFRJXGXQXXIURKRESCZHVUSLIDURZEVGBKCCUKEOHRDOEWCEQWPWJJNQDDYBTNLEVTTFJPYEAQCEMWMZPUIDXSKYTLISXIPZHOGPOQEVWCTSATXYPCLUAXVJNLOZJ");

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
    msg.setTimeStamp(0.0138431917982);
    msg.setSource(27729U);
    msg.setSourceEntity(17U);
    msg.setDestination(47900U);
    msg.setDestinationEntity(20U);
    msg.req_id = 59614U;
    msg.status = 180U;
    msg.info.assign("FBPISFYSJLVSHNJJPGUOVRDFWVDLNUZZABEFXDTBSSIXVMQWBIAWOSDVGHSKZGNHHLWQCBVKQKVEOZYCXBXNRCWYELZOQPJCFAYVXTDIRICOOPNTAHMKTXITZKXKZPCB");

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
    msg.setTimeStamp(0.606986311702);
    msg.setSource(61596U);
    msg.setSourceEntity(249U);
    msg.setDestination(23177U);
    msg.setDestinationEntity(251U);
    msg.req_id = 64550U;
    msg.status = 242U;
    msg.info.assign("YEQZQILFUMTGBSGMBXNTEPDOGTDWVIDOIAHROQMIWNUNMGJDRKV");

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
    msg.setTimeStamp(0.146854794615);
    msg.setSource(15941U);
    msg.setSourceEntity(184U);
    msg.setDestination(31711U);
    msg.setDestinationEntity(212U);
    msg.req_id = 32515U;
    msg.destination.assign("ASUREKWNHWFEXIMSDCOXNFLJPRCUTZPFUGBXYEYRQAJKQWBBIHBBRYJBFWECQHOSF");
    msg.timeout = 0.679378507088;
    msg.sms_text.assign("GXPCDZULCNBFTHGIUKYVJQFRTHMXLKODLBZNNFZCUUDY");

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
    msg.setTimeStamp(0.271505390395);
    msg.setSource(30456U);
    msg.setSourceEntity(61U);
    msg.setDestination(22229U);
    msg.setDestinationEntity(252U);
    msg.req_id = 11302U;
    msg.destination.assign("JKLGPSTYHITJCQWETDNKGSCPFZOGGOIPLWVDEMOJWZGNSCHWLIYUXQEACSBFFDQLEYVRGNIKNODUNOPFZOMSVFYUJBZKPSYXJZUGKQTXXBRSEAXCWXRLRMNNARYPFYCLURVWHKGPFBLDQIHZTCANMHLRXWGQIVIEGMNFJPMZBAWTNWOZAUVYSJKEL");
    msg.timeout = 0.638833202033;
    msg.sms_text.assign("DODRXRXQJPUMYSGRNDQAAVDZQHZXWLVFIRHGKZFKGFKSGRWCANKHNAJJZCXEWEKBCJVCZWIPDWXSTQVHVWGYNUIJZBEPTLEGRPOZGNXQYCRUDKFYXVXMFUVTGDSENPAIBGLCOKZYNMNNTQCVSITSGSAREOBHLUPJWFMBHHNXOIIPEKVFUMOIUJTKTL");

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
    msg.setTimeStamp(0.786084033378);
    msg.setSource(54870U);
    msg.setSourceEntity(40U);
    msg.setDestination(49742U);
    msg.setDestinationEntity(220U);
    msg.req_id = 7707U;
    msg.destination.assign("EIOCSRDRRZQAUNKHPMINMOEJOJTZIVGAECRZVHKOXUVBSBHTFGPDAHXNRLFFBVAMUC");
    msg.timeout = 0.41931185594;
    msg.sms_text.assign("EIHVZXCCMKTDIGWHTDTQKCXFYPJYAOEFUXWMEZLMSHTCYHEFHZROKGNMTAEOOGPDIQYZULLSWLMFVIMLBPSRCJIJFNSUGYBAGICPZVWERKTBBKXH");

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
    msg.setTimeStamp(0.88651026461);
    msg.setSource(21303U);
    msg.setSourceEntity(27U);
    msg.setDestination(37815U);
    msg.setDestinationEntity(168U);
    msg.req_id = 39053U;
    msg.status = 168U;
    msg.info.assign("BVCWJFMZOILASLQCNEMNLQATGEYPGOAYNSBNJZHWBGKMSPCFRQBUELUFXKISNKODDOQZFK");

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
    msg.setTimeStamp(0.198744783407);
    msg.setSource(43797U);
    msg.setSourceEntity(125U);
    msg.setDestination(41857U);
    msg.setDestinationEntity(37U);
    msg.req_id = 7192U;
    msg.status = 143U;
    msg.info.assign("FOTFADGSVSVXYMJIPKQSPXKDXWNXBFNTNKUZCTBMNRCQEKUPHNZJVYRHVNVREBARZJOFUAOBNHVBRPESLDIKLMTJGQUQQQRNBFEXORQDLHXWLMPSYHXFEXEZEMGGAOJIXZQIALWFZAOMUDS");

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
    msg.setTimeStamp(0.676619063402);
    msg.setSource(45259U);
    msg.setSourceEntity(5U);
    msg.setDestination(21176U);
    msg.setDestinationEntity(52U);
    msg.req_id = 36648U;
    msg.status = 187U;
    msg.info.assign("OWBMAJJUCLSKGIIGLLDXMDNEGHNJWASD");

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
    msg.setTimeStamp(0.926475815203);
    msg.setSource(43465U);
    msg.setSourceEntity(58U);
    msg.setDestination(48524U);
    msg.setDestinationEntity(36U);
    msg.state = 239U;

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
    msg.setTimeStamp(0.556574195751);
    msg.setSource(44390U);
    msg.setSourceEntity(118U);
    msg.setDestination(40511U);
    msg.setDestinationEntity(187U);
    msg.state = 196U;

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
    msg.setTimeStamp(0.408964897431);
    msg.setSource(44241U);
    msg.setSourceEntity(227U);
    msg.setDestination(20529U);
    msg.setDestinationEntity(238U);
    msg.state = 33U;

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
    msg.setTimeStamp(0.698959828003);
    msg.setSource(24198U);
    msg.setSourceEntity(247U);
    msg.setDestination(51266U);
    msg.setDestinationEntity(49U);
    msg.state = 197U;

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
    msg.setTimeStamp(0.674445612214);
    msg.setSource(65165U);
    msg.setSourceEntity(110U);
    msg.setDestination(59443U);
    msg.setDestinationEntity(239U);
    msg.state = 23U;

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
    msg.setTimeStamp(0.942375806757);
    msg.setSource(51953U);
    msg.setSourceEntity(100U);
    msg.setDestination(7030U);
    msg.setDestinationEntity(124U);
    msg.state = 15U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.861841745657);
    msg.setSource(65426U);
    msg.setSourceEntity(139U);
    msg.setDestination(11121U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.250953641159);
    msg.setSource(36935U);
    msg.setSourceEntity(134U);
    msg.setDestination(36800U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.849718449417);
    msg.setSource(25373U);
    msg.setSourceEntity(120U);
    msg.setDestination(22138U);
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
    msg.setTimeStamp(0.448757782081);
    msg.setSource(33317U);
    msg.setSourceEntity(11U);
    msg.setDestination(24035U);
    msg.setDestinationEntity(90U);
    msg.plan_id.assign("ZTRPBYZAXJNYEZXNRBEADZKCHTUZASSWWUOGWBJTTQLELJDGIGZLPRIUEOKLCNOIJOPOXUFMIKLTLNXOGJNHRNWXQFJACXERTOSIMPVVNZMUYHJNYQUQEMHSEQNTPZBKBEVGGPNFDCEMULVAMBPJVKKQBDTFDRMGCKMXIOHEIYWJFUHXYDFHGUKFBSQGSYACWLFO");
    msg.description.assign("ONHPKYKLSECFPUMWGYDXFABHNDBEECFVWNDXIHAYFDZALNZQZSFTDHIRMQYXDTJPJXGUWCFDMWGLMKRIISZBTYYRAWQGOBPMISGJTZBRAZPNVNRCVOCHMTJJULXKGSKVMJLOXRT");
    msg.vnamespace.assign("GMESHBDVVHMGOKTPIWOQXPYBDGKHFUSYLONELXNTBVJAXQYOOMGZDSMZDMATZGLJQRSWSSNMGAURXZWUQIWEMAPQVBUWVINAMWPCBBCHCDOBUYPTXXGRICWXPLIVZCXSQQEFMBUJJNIFRYVLDGEPTQIZPEOWTFRKQLMEIYVZIOENHCJXFEGQINKNHHETOUAURKRCZSDAPJSHYCJNLDGKCRYSDFFJHKFPKOAKRLUJ");
    msg.start_man_id.assign("ERFRRXIWJYBOWGPVXOCVJAFXZNHNJJMZVPYCOFCSZWLMAIULSYQYNJHTETVELWQRUFWVNZASSUQRVCWH");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FVSNMDRIEUSSJMCRZMDXKXBDIEXIFTSFEKXUOFFXYVOYNBUWATJMEYLMMHJRLVFEBOKPGUKOXQBJSLJCFJLCSPOSRVZODQDTNMGANPYWLANKCMFYKVD");
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("QXBMGNDBSLOFJEHBNVDBYASWHFSJNDYDICKKHHQRHOUMLHXQEGPOYQTXRMYENBFWJGTUTJJITBGIYNMLVOSPLOJCSPZCAAPXKLZTBLUPIQKAMWRCPWHTBLRANQZJNJEEUFHZIYEGLIQRPJMNTFVMMNDXAYWGHSEXCFBNFUKQTACBKOWVRPDTQGYWSGSWGHJUICZVAVKXUWUZDIRKRPEZVVEDXOQMUIIMFRZPOCXDOLEDC");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EntityState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.state = 248U;
    tmp_tmp_msg_0_1.flags = 206U;
    tmp_tmp_msg_0_1.description.assign("HHYCZIBUWFNMTIRPTHQMLMTGPLSEARANETFZJJRBFXANCBAYKUKRTEGSGCCJIOREXOFFXHQFSIVDXNPWNVVKSVKHGHRBBSQIZJCKKZPYESUEDZYLALWSBGELQYQDXKGFJVCXNJWJPBXPOMDMZIZCHTWPWUAASOVNYGDJOJMODFKWVPNUMGKLLPLURACJWZ");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::UsblModem tmp_msg_1;
    tmp_msg_1.name.assign("JRXQOCTNHQMUUYHHRSBSKPXBFVERSFKQPOXMWPYLLGNUACTWGJKYSNXCELDZQCCUGTSPDEKRUMAVATIOIVLUENRSUIF");
    tmp_msg_1.lat = 0.395600424951;
    tmp_msg_1.lon = 0.805540428536;
    tmp_msg_1.z = 0.411183878589;
    tmp_msg_1.z_units = 45U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::VehicleCommand tmp_msg_2;
    tmp_msg_2.type = 209U;
    tmp_msg_2.request_id = 9459U;
    tmp_msg_2.command = 85U;
    IMC::Loiter tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeout = 23927U;
    tmp_tmp_msg_2_0.lat = 0.488375803407;
    tmp_tmp_msg_2_0.lon = 0.537798759903;
    tmp_tmp_msg_2_0.z = 0.223903526389;
    tmp_tmp_msg_2_0.z_units = 251U;
    tmp_tmp_msg_2_0.duration = 56272U;
    tmp_tmp_msg_2_0.speed = 0.688598743038;
    tmp_tmp_msg_2_0.speed_units = 136U;
    tmp_tmp_msg_2_0.type = 85U;
    tmp_tmp_msg_2_0.radius = 0.875031752008;
    tmp_tmp_msg_2_0.length = 0.286844206041;
    tmp_tmp_msg_2_0.bearing = 0.494994752373;
    tmp_tmp_msg_2_0.direction = 11U;
    tmp_tmp_msg_2_0.custom.assign("GNNRVCMVDLYSFYZQNWDNBKJMPWSTLQHBNQMETBCQHTKJCPPOJQRGXFSFSWVNGWOJVIKEEGWABMDHXAEMIQESHACKOECZUIYPUYAGQPYBUSZKMYGSRPUOXXTXXZWDRWNCJLJPFMBANUFRIVWHVMHQADDLCVXYZGGYPDUMLLMJFRHZJVUFRRITHGDDHCRFITLDUOKIAJLQNBSJHABWCEYKZKTQXLIIIVBRFUFOKPSSOWVTOEOXL");
    tmp_msg_2.maneuver.set(tmp_tmp_msg_2_0);
    tmp_msg_2.calib_time = 8427U;
    tmp_msg_2.info.assign("IDTASMITKYRIEZXBHUZVMWTWEFTDXYYDDLFWXVZEXEBHOQLOITYUHBKMIJFDRVGHMMHROLSBDUYJUQZNCHKAAGFCTJJJQPKXBFORDZRBFVZUCOPZPURIOXTNDRDKSLKVKOR");
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
    msg.setTimeStamp(0.8269402528);
    msg.setSource(64469U);
    msg.setSourceEntity(184U);
    msg.setDestination(29687U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("BTPVLSCKWWFQUQKUZHBSPWOUFCGYAELCPNCYKFPTJRAQYHLBQDDJFWFJDNSYVDKPERNAGSMMAXREJWGVFNYBIKVRPKLIUZDMGUQXHHNQDYYUCVQPNOBUZIOTEWCUZEIOPKLVJLIIMJVZWZSRRXOCNUOESTZJETTULHZGMHCYMKYDHRFKNRXLLEMANABQTDJFEVRLSBPGAOJNMMFCYBAOFCZDIIXTXTRWXHWS");
    msg.description.assign("LKLPMOUDAXWFCKRVQNAZKUIGAMDJQCJHTCAJMXLYPGNRBCEUEXDBUFNRIHEYHMBVXHXYQSNZHMIVEJYBSZGKKSMWJOT");
    msg.vnamespace.assign("ATSQJLOUEWTMEATFNWVOXIWJFIOXFMXDVLKIWVAVHZCUEPJJRSOCZQCNZQHPRZFBQQCMVTYYWDBRKWBBFRDRIAHVRYNTMNORXIXAPUSBHNWZOITKZLKUEMDRGPQMKMNPFYMLJNTBCYDLPAHUZVYZEUKVQZVEVLAIELULCOXXPNESHPKKSFWACMLSGOLTJYMBJGSXPBWGIDAEAYKDKQJNXICSFCSXGGCWHTDDRHJU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CVSUGMWYUWFMUXLOVZLKLTKTBIXSMAODLTQEVNHGGTWUIPIQBIAYLVPGAPS");
    tmp_msg_0.value.assign("FFISAVWMEWZERTATKYBXECAKULNCTEAMAPJZFQSJHHMJSXDACHZWIFVGSSXPXVNFVOIXPKZGONONHWMBKKPRMOZSQLRTMISPGDDIMYZDLIXTYBZRHKHFNJBYQZREFVGEBVCUVYDDOVOINLXADFGQXYWLTDUEOXQTAIUQSUKWBIHQWKRYWAAVFCPDUPMNCTJEDZPUXQIGCHLRLCETLNLLJOJSUGKOUFJYMPHQYGBBSZVGCRNWT");
    tmp_msg_0.type = 150U;
    tmp_msg_0.access = 245U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GTNPYVRBUZOAYEIXNDSMZQWEBIOXOJDKKCURYJILNKBZMNFJWHLMVNWHRCQUQPXKRDHXOTXVLPISBRKCDGTFBSPOGGYSZQVHYMONHQWXYCMRZZWCKXTIAZEMQUUAWQWSGRDGJFFCLKURIVKGSOVHWUDBWJEDKFYNQLBHXQCJLFXAAIBVESYAPPEPZATEMTCAESFIGZLTGCLUHTDVMWOBFVKXDROLNPUTNMROJDSJYSLPVJTM");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("RZEMTBXILPIODDZQKUMUFGPSQDZTIUAMEGQNSUAMUXWUWTFYFGDIDMVLPVKILGKCNWMQONCCKXANLDBLWRNYZIONAXHDAWICRRFKBEHGRYJJHWHPJMCGPONTQZUQYVFNAVZKEEDMABLJTBEVSYTCOZBOHQFBGLCSCAZHK");
    IMC::FollowTrajectory tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 22224U;
    tmp_tmp_msg_1_0.lat = 0.825808891951;
    tmp_tmp_msg_1_0.lon = 0.865958023859;
    tmp_tmp_msg_1_0.z = 0.551146150794;
    tmp_tmp_msg_1_0.z_units = 195U;
    tmp_tmp_msg_1_0.speed = 0.79201894733;
    tmp_tmp_msg_1_0.speed_units = 21U;
    tmp_tmp_msg_1_0.custom.assign("FOESKGQXZTOTNFMLXVHATMABPFBQAJANEQSPSPCMBCDHYIVPQORHJCWHQVTIXQ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DevDataBinary tmp_tmp_msg_1_1;
    const char tmp_tmp_tmp_msg_1_1_0[] = {60, -66, -104, 34, -100, -17, 96, 25, -64, 8, -121, 91, -27, -114, 23, -128, -18, -109, 48, 19, -128, 109, 57, 98, -66, 20, -4, 116, 96, -28, 59, -100, -66, 12, 22, 61, -7, -46, 86, -54, -47, 84, -43, -19, -92, 116, 12, 63, -67, 40, 109, -47, 92, -90, 68, -113, -16, -118, 61, 6, -114, -90, 43, 46, -29, -36, -22, 25, 95, 115, 5, -61, -76, -88, -51, -59, -86, -61, -107, 63, -23, 7, 102, 96, 120, 85, -30, -74, -32, 13, 27, 59, 80, 47, -59, -70, -2, -101, -99, 29, -98, 73, -81, -70, 96, -81, -58, -20, -48, -96, 61, 20, -60, -57, -36, 42, 26, 40, -75, -45, -16, -16, -65};
    tmp_tmp_msg_1_1.value.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("BUNAJPFBURIHACOJONBDMGFGRCEPDCKGMFPVPVUYHNWMNLVIEDEPKS");
    tmp_msg_2.dest_man.assign("GHGRLIQNFBRZEJSMXRLPIYONHESMXBYBLKFZFAZFFREUMEOLLTDKUPQWXWPWCJPCBAZMIHAUUVNXSSCHDDMWYOABITGTVRVNYMCRIZHUFKKQGCITSFNHQEDBDALTJQWIGQWXVSYUCOLDVVJOVQROGTYBNNTINMJWDSDARGULIPAALZWSZZZVCAMZFBDUBWFHHYEXJPOJLOXURBXRKGSOYEFDKNECVGTQMPPXKQTP");
    tmp_msg_2.conditions.assign("FSJFHZSCZWFYWBHU");
    IMC::UsblPosition tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.target = 30506U;
    tmp_tmp_msg_2_0.x = 0.910017429333;
    tmp_tmp_msg_2_0.y = 0.44054076431;
    tmp_tmp_msg_2_0.z = 0.14481597899;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::SadcReadings tmp_msg_3;
    tmp_msg_3.channel = 23;
    tmp_msg_3.value = 175272821;
    tmp_msg_3.gain = 31U;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.247203298206);
    msg.setSource(38349U);
    msg.setSourceEntity(204U);
    msg.setDestination(41029U);
    msg.setDestinationEntity(104U);
    msg.plan_id.assign("GHXLOWKPYWURQEKFTTORGKSRGTAPPUDWXQAASZIRFJSHCVNMIYXNTFBWJGFCVFHMVGHJBTZEOKDCAPQIDGDXOVQTMMIBFLBNXWQATQNZJKVEOIMPEMACHXLU");
    msg.description.assign("XNWBIVAKEUQQYKBWFDLMAJIDMUXKHOPPYYGCUAXHEEFKRC");
    msg.vnamespace.assign("QDJLELETTKJKYKFWEHIWFZAHDYZWWMJNJQIPVMKVRXFUOZVYSUZEMTKIORYXWRRSUTDLHI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TSHFVPWALLKYMYTWCBGEHYXVRNDGYRFLKNDUVCICWZTUNZWDZFSKBUVYIEHCICQX");
    tmp_msg_0.value.assign("FUCQGBRDEJMWJZATRFFHCRTVAFMNPIGSVGNTFCCNEDXMDVJWEPVGHNKSHSXDHGLGLBHVEWTKCMOQFSMYUKPNBWZUHFYJIMBVZGQYPCJOHYGRLIATKSOGZRULZAYOXTLPJGSIDYQIHTKURKAO");
    tmp_msg_0.type = 188U;
    tmp_msg_0.access = 250U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JJZMNBLTFLUTYOARWIIJFQQWGKXUNEIVKXWYNNOAHXEBYOVHOXEHZOYFZGPCHQCGKAPFZCEUAHZZIZVEXLNTEEUIZPRBMPDTXRIFGFYCOMWSPAKVKKKUVGOQSCVRTJELAMJNMRZDULXPAXUGLDHAYWIGLLGWXLBPRPSVQTE");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("AQGRMGJZJOSXNOOEFDBKUNAKECFDGQCDFDRCTTVTYFWTLESEWMODQLNFHVCALRSZMJCCHYSEULBSDGVTAEAJNHVTABMIIPLIVTDIQHYIUUPIGSOAZJYNZTPEPMDGOOWTXQEYGJCMFSKKWVORRMLYQWZVIQVKDBFHALUHVJXXHUJZWZKDIXPBEVOFURBYQWPBWPONTNSQBMFCBIGRNAJJKGXUZUKXNHYEAQZZIXMRSUHCLCHWLYNWKYFK");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.750068138734;
    tmp_tmp_msg_1_0.lon = 0.859847770756;
    tmp_tmp_msg_1_0.z = 0.72682001015;
    tmp_tmp_msg_1_0.z_units = 106U;
    tmp_tmp_msg_1_0.radius = 0.0124365050607;
    tmp_tmp_msg_1_0.duration = 51721U;
    tmp_tmp_msg_1_0.speed = 0.820730285264;
    tmp_tmp_msg_1_0.speed_units = 81U;
    tmp_tmp_msg_1_0.custom.assign("TJFKBJBTWUMMSZKNOAFALWNKZDCTGUXUFTFRWTUHBGPRHSIRBQRHEWDJSEIVJLYAQFVLSQOOXJRYJVCXARDPPJIFNDCBDUGHXQBNYAKLSPXIQSMIZKWNZYVOQPGWKIDIKLIGZEAKYKHELLEWZOWYMMORJVUDPHTRDFVJOUEZOQCBR");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DepthOffset tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.289579722133;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::UamTxStatus tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.seq = 15401U;
    tmp_tmp_msg_1_2.value = 9U;
    tmp_tmp_msg_1_2.error.assign("JOVOGGSCDJDNDMCPXGJTCRJGNKAENYIEMOZPBJBTLERDMIUXGFRYBZSFZLHVXCSJWQPWYSRBXNQIHTUYUHEXHMLVLATHDFUQWARSUEL");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::ParametersXml tmp_msg_2;
    tmp_msg_2.locale.assign("NKMPCPGMCIGSHUZHPBCDPAERCKTENGQFGCIYXLQAMTWZKKJEXTGVXVGADZVISHNWAKBDZWZFXUJUMESX");
    const char tmp_tmp_msg_2_0[] = {-6, -21, 3, -122, -50, -31, -15, -81, 115, 96, 61, 39, -116, -120, -32, 41, -60, 49, 66, -102, 76, -109, 25, -77, 21, 107, -30, -26, -119, -5, -66, 80, 30, 76, -63, -10, 20, 81, -71, 17, -62, 41, -107, -24, -33, -9, -48, 10, 47, -123, 102, -28, 125, 101, 120, -99, -110, 60, -27, -59, 71, 81, -19, -24, 56, -85, -105, 125, 95, 78, 125, 112, 121, -26, -5, -32, 1, 106, 96, -14, -100, -101, -47, -68, -120, 116, -107, 56, -63, -126, 63, -118, -36, -45, -8, 46, 78, 98, -41, 67, 9, 54, 26, -104, 41, -82, 65, 28, 123, -25, -86, 121, 76, 34, -90, 116, -46, -57, 103, -19, 10, -102, -23, -63, -77, 3, 126, 104, 88, -61, -76, 6, -114, -53, 45, -117, 39, -100, 69, -11, -20, -57, -71, -89, -108, -122, -43, -74, -14, -22, 113, -33, 5, -5, 19, -78, 114, -34, 36, 5, 24, -75, -93, -92, 107, 16, -51, -12, 26, 109, -2, 21, -48, -5, 119, 62, 16, 100, 18, -94, 26, 99, -36, -50, -48, 10, -93, 15, 114, 118, -125, -122, -18, 102, 76, 65, 10, 90, -40, 62, 63, 64, 79, 75, 48, 48, 10, 21, -30, -36, 1, 27, 70, -116, 105, 105, 109, 7, -38, 64, -102, -62};
    tmp_msg_2.config.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.347999226518);
    msg.setSource(4646U);
    msg.setSourceEntity(66U);
    msg.setDestination(29126U);
    msg.setDestinationEntity(236U);
    msg.maneuver_id.assign("HDFPXWARPAXRCTEFRCWKRP");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("LQCMRKXUHHYWAFKEQXXCIZWOFYZYWBGVVDBEFKAHQHJAUCGYZEGACNJNLNQVRWZBUVHOOIZUJSYALVPTWWNTTSAKVDEILWJAEJAUYCVZYZDJUMRPDNLBHPRIPQVEIUROUYXDOSQFSMGNBRIJVTKDPBVQHLBHSWDFLBIYKSFQOEEGGKGXYMFTCTBQWCXKPARLCRZMHZEEITSFICKNXSZOSKBMAONJTXPRMOJGDRTPPPNUGLLOH");
    tmp_msg_0.formation_name.assign("BTMCDSTVALFSBIYOIUNKTJCPPHXZAXD");
    tmp_msg_0.plan_id.assign("IBVFNZXSTZWPLQJVNXEDUDHXHIMZVSGRRHLWYAJTIHRCDMKBWHZBHVAJKODZPTXMNSTGJDQPTJMZOHJUVEPXXRTAJQUVGPWUOMVLPSDDYFTICFCEKYLZFKQXBRWFORUAECNPKKZKIDSESNAIEAVQAFCQBHFOYNHOBIQGQWYHFSYLLTIUBGEKBOCQDVCCYCRVYXKGOFXPEJINUWD");
    tmp_msg_0.description.assign("FRSPJDOONIVFPX");
    tmp_msg_0.leader_speed = 0.596316182028;
    tmp_msg_0.leader_bank_lim = 0.888426770749;
    tmp_msg_0.pos_sim_err_lim = 0.66132768948;
    tmp_msg_0.pos_sim_err_wrn = 0.151495422428;
    tmp_msg_0.pos_sim_err_timeout = 28226U;
    tmp_msg_0.converg_max = 0.212439222625;
    tmp_msg_0.converg_timeout = 63283U;
    tmp_msg_0.comms_timeout = 5250U;
    tmp_msg_0.turb_lim = 0.134107615716;
    tmp_msg_0.custom.assign("QZWBKZJXYXFAIUXLCHAZHFUWMQQAZEBDYTCNRFIKKAWTGMGVLUC");
    msg.data.set(tmp_msg_0);
    IMC::CameraZoom tmp_msg_1;
    tmp_msg_1.id = 53U;
    tmp_msg_1.zoom = 101U;
    tmp_msg_1.action = 1U;
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
    msg.setTimeStamp(0.00416521735269);
    msg.setSource(6551U);
    msg.setSourceEntity(176U);
    msg.setDestination(14748U);
    msg.setDestinationEntity(137U);
    msg.maneuver_id.assign("RJZDAKGDEWFXMPFXTOQEDQJWCVWQHHGNGUOERZVHVPBJGMQNKZSFUECAQQIEPMSCWAOMTTLVHBVTIXNBTZRCEV");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 57623U;
    tmp_msg_0.control_ent = 38U;
    tmp_msg_0.timeout = 0.647139258779;
    tmp_msg_0.loiter_radius = 0.277386939587;
    tmp_msg_0.altitude_interval = 0.156928085341;
    msg.data.set(tmp_msg_0);
    IMC::Phycoerythrin tmp_msg_1;
    tmp_msg_1.value = 0.590475084182;
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
    msg.setTimeStamp(0.849873053585);
    msg.setSource(12117U);
    msg.setSourceEntity(143U);
    msg.setDestination(55047U);
    msg.setDestinationEntity(2U);
    msg.maneuver_id.assign("QOHLNYZBMEEMFHKHAHMYZBDVIRIZHQFYFLZRQPSBQZJGUUFSJWEISPVRTTSKXBBTHFCTQLAPROTBPJXPGXOVADMBKOOXOSUNHPQYXRCSLRQBEGELYGJPMGHBFVNRYIKAATIVQJAWOGUWOOVTTWNCEPIMKDVN");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::Magnetometer tmp_msg_1;
    tmp_msg_1.timeout = 21837U;
    tmp_msg_1.lat = 0.51356999092;
    tmp_msg_1.lon = 0.993730710508;
    tmp_msg_1.z = 0.310275986404;
    tmp_msg_1.z_units = 116U;
    tmp_msg_1.speed = 0.10783716344;
    tmp_msg_1.speed_units = 177U;
    tmp_msg_1.bearing = 0.0359852594299;
    tmp_msg_1.width = 0.483233272175;
    tmp_msg_1.direction = 251U;
    tmp_msg_1.custom.assign("CKTBLJBJWTDVKGMHUMRQIWIHNOVTTTPUZGRXISTNAASLYYSIWYHFBGKPOCIFLAPZYFKGHWBASMOUZKNQUOESQVAEYYRUHBMMOHOJUTPRXPRFTYWWZYVGJACMCGUIFQBOZMVQNEZYXVFHLMEXHUCDCCLQDFYVNRWESMOUUEHOABGXNRMKFGINVZWALEODNGJERZADILDKERBQQJNFSIXJLTKJDKNEXVQPZPJFDRCDHTP");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Abort tmp_msg_2;
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
    msg.setTimeStamp(0.909623322513);
    msg.setSource(46848U);
    msg.setSourceEntity(195U);
    msg.setDestination(62806U);
    msg.setDestinationEntity(235U);
    msg.source_man.assign("BGOFLOKWJZRLYIGLFFGCEVZDZPTPBBEANPCAZAVWJTSYOKUUIPEHREEZQOYKWICLIWIEIFLSJPDRDPSBGYAKDBXUZFSYVFHMTDVDXAKJXSIXNDNGXYYHNRQNLROVNEOCIHAG");
    msg.dest_man.assign("VIMSOUKMZLBYKVHVMUNCQDTEWOWRFPXGHJAJLGNAWWFTBMEULRBLDVXCARCLVLNQXOMAIUXSGMPMSQCNXFDGBCNPSQNMQQSUUVWAPEZEECGDNSSSRBUXCTGHBFPRPYHWJAEFAJLOYLGTYDHZHJZSVZJBEIZXAHOOYQZKXDPHHFHQFILKENTGYBDOKMCLIOAEORITWXCDTWPKWCMGSUKYDEFFU");
    msg.conditions.assign("PSKOEFKLYFINGBZGWMXKAMMDGNYTASUALIVFJOZTHMIUQJFMRUKAFSPZPOTTHAZYZGKKKVQNRWLEXGQYBSNMTPSDXXCPLMPCBBVFYYIIHHBFVUYEKZXVSREVOYLWCIDUPGDKYJJEJAHECLLBTNWXHMOBTIDNACWDFOSRSWWUJPLHSHGUDDZPRVIOMGZCTCRBXJTLZADWWECQJBURNOEMEYQDUQXLINPAIWGZVHX");
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.519457190212;
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
    msg.setTimeStamp(0.811580752704);
    msg.setSource(18382U);
    msg.setSourceEntity(199U);
    msg.setDestination(8237U);
    msg.setDestinationEntity(94U);
    msg.source_man.assign("JURTRALIVZGOXBKKUVSVVPPQOKRWYLNABGZVPOLGVJXJGXFYURZISHWNQFKVKQJFUJIHFYENOVRQAYKHTDUEXCSCOLELPNCRGHFKDGFDFNEBPTCNBFQALZIJHHHCBCOOSFUSNATRJQUYGDRHRTQCSPXEMMQXWNTTWQABKLHXSVPBDLZTMFQYMUCZNXJXKETAUZDARYIBIEINUMTSYIEMZOGMIXDOZCLWBMODSJCWWWSWA");
    msg.dest_man.assign("OYZVJCLVMFWIODBQRULBYCGMDFHLGNSBGLFUZRCUYRBNOYSQCNWZZVKZIXNVHKOEAPHYPHCGITNXGGVFHJBDEPHZXFTOXURY");
    msg.conditions.assign("KXIHNOMRYCDQHFJLAAWBLSFENESOBWXUXGXSFBACFZHLXEWJYBPFAEUCCKZIEBQAFFABNXUGLFCIHNLQHOVTRCRLSXDCQQQOICYEVDTZUNBMIGZZXLUABOKUEWALAVKTIDRQVDKCPFZRKJDWULMVPYTDGISTSEOGPVMVYETJHTGRDMJJYREYMJIQDUYKWQOSGMHWJJNPYSNBRUMZUHZNVIBSAXYOTTSMOPIHHNNKTLVGZPPXRWKKPFGJDRZP");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -13341;
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
    msg.setTimeStamp(0.160802628006);
    msg.setSource(6884U);
    msg.setSourceEntity(192U);
    msg.setDestination(9036U);
    msg.setDestinationEntity(203U);
    msg.source_man.assign("UEWLOHDVOXPDBQVGTSLZYRLLGITVMQIZGYLTIZSBJKTKBUIKRHUARWSAZKCFPHH");
    msg.dest_man.assign("OWTAGXFSCSNWQAOIPQAHLHPEXFCJHSBBQUQIDMQVBYLGKDSBGFUJHKUUYRWCYPHFWKYSFHOLYAGGSCWBJDROKGXTKMSBLUKVNZWZXNCOMADZPNMOXNFGQMMIHDVZSWOINKXQXCMJLANYCMGTLAIHSBPDJIIGENKBPWVRACIYVCRCPDTLWD");
    msg.conditions.assign("LXCBMNUDWBHWDOPXPGHOTSOACFDWYKEXUESLHRJOADVZWNNXCADTGNMMOXYXKEVVUNSYIBIJLMLLYMQPMZZQVCRGNMZFSVWFUZFCGNPTJHTXFSQEJHWSGMRJTJNIYYKPHSBJDSUKPNFHIRKEIKPTKPROLOXRGIPCGURPGQVELAQGZFRUVUEYTGMWELOJWFXOFSQBDZADNBRLAQBQVXCZABLQKCUQAWATEWTAOVKSDHBCIHFCVEIZBKUYHZTYID");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 47308U;
    tmp_msg_0.control_ent = 61U;
    tmp_msg_0.timeout = 0.345310149362;
    tmp_msg_0.loiter_radius = 0.112152900107;
    tmp_msg_0.altitude_interval = 0.775302447715;
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
    msg.setTimeStamp(0.712335203344);
    msg.setSource(34519U);
    msg.setSourceEntity(85U);
    msg.setDestination(14217U);
    msg.setDestinationEntity(69U);
    msg.command = 211U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UPQAPRNHZMEUHJBNAMXVAWGZMXBZQIBHQWRWWWUZQPKBZSUCROKDJTDNNFPMRACOTRRTELSSMHFQFDGFQGGSSBITLNIPKVOSYBXJGZQRCOYHCFLHAIJVNGVZFKLPDVUIADNUCOYYNUHHOTTIFEQZCVLRYBMKCVECVBQXRJSJXGDYAOLJBEPCOLELAYDPYSXWAKUGFSXTUCMEFIVKDMADTNLOKYPJZOXZTKHFMQNBIWGHUSXMJDLIKEERWEX");
    tmp_msg_0.description.assign("GUGYTVTOAEOYBJRDOVXWJHUXTFQRPILESZGCIMEKCXJQ");
    tmp_msg_0.vnamespace.assign("YRGYODZRSLALRQKWQRYTTZUPJJQEJDJHCZPXNICWOHJFCWUDUQPBNTBZCCTNBGVJRHRGZXFEXAFCOUOYAYVOQHSYPJXXWDPPBTSXUVDBGSXWERUSMBXHZMLIYIQTQKEMEKWVWCXBRMXMONFLMIOIRONSKSPABMMVAIHCKCNUDFVQHLEHEMGAG");
    tmp_msg_0.start_man_id.assign("QAXKTCHPQDTNKUSSCHGVQSPEICKMZTWIMHXIJMHCDOVVGGCLOIEBER");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("LMXNWCYQJSLQQDAUKZKWUSLIVXUUTTDJEVYFRNHMODHRCLWWERABEUYTBPACWTLGILLQKRTIPQGIRVZNGSEAFKEJYOEVCKPQLXOODYONJQPYFHTYFEEJXWOBGOKKNGDDVZRFQCPPCHIIMVSTSMVREMHBCYCNBOVMNZGYWZITTOXNWSIJFAMAXDWYRPHBBFJPVXSMKZOBGHFPEQUCMVGZZUUTRDHNRHSBKIFBXDWMXAJIJ");
    tmp_tmp_msg_0_0.dest_man.assign("GUOQBKALQVRBMFYPXYEJKKKCYOTDRCFXCQQWVILNSVGFYFJRPVWRGKRWTJFDIRUHHOQRKYRPONINWSUFHBSLGAIFTVJOPQXGXBTNGUBRCLWYLPTVAIHIYJIQEK");
    tmp_tmp_msg_0_0.conditions.assign("OPIICKUIGSXRHINPZKKEWPZSRHUFHAWQDDVGCGGSCBTCZYMDJYIFVYWQDHBNJRUNVOLWGURFSPFWHNOGTCMDLCNBNODQRUSVCHHMSIXWOMALNYBUAPWFYMAOMSRICTAMWNXTRJEBSFD");
    IMC::NavigationData tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.bias_psi = 0.530548404638;
    tmp_tmp_tmp_msg_0_0_0.bias_r = 0.293065096243;
    tmp_tmp_tmp_msg_0_0_0.cog = 0.129844354301;
    tmp_tmp_tmp_msg_0_0_0.cyaw = 0.306550679136;
    tmp_tmp_tmp_msg_0_0_0.lbl_rej_level = 0.239171676365;
    tmp_tmp_tmp_msg_0_0_0.gps_rej_level = 0.491062922512;
    tmp_tmp_tmp_msg_0_0_0.custom_x = 0.675852557768;
    tmp_tmp_tmp_msg_0_0_0.custom_y = 0.558497199116;
    tmp_tmp_tmp_msg_0_0_0.custom_z = 0.718858245131;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::CompassCalibration tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 55729U;
    tmp_tmp_msg_0_1.lat = 0.191652436932;
    tmp_tmp_msg_0_1.lon = 0.10939886208;
    tmp_tmp_msg_0_1.z = 0.652015295134;
    tmp_tmp_msg_0_1.z_units = 47U;
    tmp_tmp_msg_0_1.pitch = 0.814575625283;
    tmp_tmp_msg_0_1.amplitude = 0.432882948442;
    tmp_tmp_msg_0_1.duration = 30108U;
    tmp_tmp_msg_0_1.speed = 0.40722377356;
    tmp_tmp_msg_0_1.speed_units = 27U;
    tmp_tmp_msg_0_1.radius = 0.891078968997;
    tmp_tmp_msg_0_1.direction = 1U;
    tmp_tmp_msg_0_1.custom.assign("ETTMZYJRICOYFHOJMPVGBDXJYBSLUQECTXJYNZNOFKSGLAIDODKDWZVSAWOQPDGSRXRXLPXIQLLQCQNQMJKWXBHVTUMPFTLEGRAAVAPECQLOXLAHIUMKIUMNJBIIDCGNNWQGUBIGVSSFSVMXOIXCOFTCQIDZUWKRMFVHSENANTWBLJHTNPZJPFZWWEEZVZFKKAECMBDGMATAUXYYOHGWPVKRSYUQUDTFHROBCRNGSHZYZJL");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Rpm tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 6262;
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
    msg.setTimeStamp(0.175272266868);
    msg.setSource(6981U);
    msg.setSourceEntity(67U);
    msg.setDestination(30004U);
    msg.setDestinationEntity(25U);
    msg.command = 98U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WNJRDGGDWXOZGRNIPGVAVHORSEKHPLBAMCMZEDXOIUGTMARKSZJEXCKMFIEEWPZAXQMRDECYOQWISOCIYYCSGVSBJHQFYPGZZFNAQWBQMSJTUQCHFUYQALNTUGGVLTOMADQOLYRRBBPOYWYLBLEHSKM");
    tmp_msg_0.description.assign("VCCIZUSYPIUZCBJAKKGUJINEGIJEAWZTZWNMFJDFDMROZWAWDMIDGBPSBGMTZPNRIVXRELYJQENLTXAGKMZMGOIYAQTOLHQZJMQICQPKBGKLUUFERYZWSKPHWFUOQFTDOYRFCTCPTXWTOFUATYRJQCXOPVBHSNVCSSXKLNVWADBRJFSMHFHRPKBDBTUVCNHBHWLWSUEGLXMZOQXRNRNYE");
    tmp_msg_0.vnamespace.assign("IWSZVZSPAXGLLTOWYXPHEOZBGSZDLNBKIOAHKSZFWNRAMGAJPIJYCQGZUTHQTEPEMYMCZQGEIFVRBPLHSBJKFKVEJDUQZCEURDLKMQNNJXCLCXCVIPBFSRLNVMSTAIKOQVWDEGXHYTVHDXFGSARGUUWOFR");
    tmp_msg_0.start_man_id.assign("AFHEMRSDHGCGLNWPBDZLLDZEKAQINHVOAIPGWTOIZMRSFTUMIROVKCOSNUQFZAYHTMEVJSQBOHYRAFMQGXXHNPUQEJDXSKWIVLVQNNQBPTWWDPLVNGIDEJPYNG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("IFEKZUNJUZIVJXCYLDALKLHSXCPVHOHYRLHVIGIKOODPFTWZMUZWUTON");
    IMC::Takeoff tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.732529415408;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.828644526103;
    tmp_tmp_tmp_msg_0_0_0.z = 0.449491999434;
    tmp_tmp_tmp_msg_0_0_0.z_units = 68U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.0568715118779;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 126U;
    tmp_tmp_tmp_msg_0_0_0.takeoff_pitch = 0.299442364752;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("JELKUPEBRKXNRDUFTEQDAQRMUQOQSMNFSGZREGAVZKXLWHNMVYYFNSYHEPGHOBIMAZZZATFILPRPXFFKHPMBJNIIJTSFHJIDKQPXJWUTOLEQYNHTFRWAOTCJYWXOYUALKVBHRBAEAVJZSUUYVDFBBJQRPGMSXS");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::TelemetryMsg tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.type = 58U;
    tmp_tmp_tmp_msg_0_0_1.req_id = 4045043958U;
    tmp_tmp_tmp_msg_0_0_1.ttl = 3687U;
    tmp_tmp_tmp_msg_0_0_1.code = 158U;
    tmp_tmp_tmp_msg_0_0_1.destination.assign("KIROYETUHEOKPWCAYZGXRGVIHNLOIFMMUTDUIBKZITWNWLRHIOPEJQXKTOVJEBSDEZTQSCAQXCUGZYQFEVZHTUNWIXNDHUPHMKJIPMJVQGMPKAKZNJYBERCGWAHHEBXNSXTDCNCDZTCKQHBZVFYJFLTYLNAPUDLFOMJUEKUISPWBX");
    tmp_tmp_tmp_msg_0_0_1.source.assign("WSHJXEGTZIJVDTKGXJLGCKVYIOXXHZPTYUMQNZSYGGQKEFBKFDUOXWVRETGAAWDYQPROMNBQQNIBOSDFRBDZDOTTZWFJKEDLPFINKPGALSUFHHSVVASMWPCRWHLKVNSGNHLIRMAWNBCEK");
    tmp_tmp_tmp_msg_0_0_1.acknowledge = 184U;
    tmp_tmp_tmp_msg_0_0_1.status = 43U;
    const char tmp_tmp_tmp_tmp_msg_0_0_1_0[] = {-113, -59, -128, 9, 56, -119, -93, -71, -30, 55, 7, -39, 83, -80, 125, -23, 107, 27, 117, -60, -91, -106, 12, 83, -41, 62, 40, 35, -44, 58, 52, 93, -85, -102, 45, 126, -76, 66, -25, 80, -93, 36, 32, 101, -34, 84, 8, 119, 47, 31, -72, -16, 79, 88, 10, 103, 69, 103, 62, -115, 51, 7, 52, 73, 4, -42, -85, 31, -103, -97, -74, -110, -95, -39, -91, -82, -2, -25, -118, -54, -78, -38, 27, 28};
    tmp_tmp_tmp_msg_0_0_1.data.assign(tmp_tmp_tmp_tmp_msg_0_0_1_0, tmp_tmp_tmp_tmp_msg_0_0_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_1_0));
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
    msg.setTimeStamp(0.469356551435);
    msg.setSource(13479U);
    msg.setSourceEntity(74U);
    msg.setDestination(23820U);
    msg.setDestinationEntity(219U);
    msg.command = 21U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EZBWTBGAOKEQTFPPQWYGOJBAVNTAAYLPIPZPJGH");
    tmp_msg_0.description.assign("CSUEINNXWCFSLQAQYVRZXPHDUIKQLDWBTPRQKSXZSYYKRHVBEFDBKPAFZUFNTHGNKROYXCOLABVUJFJJECODLNZCNONZBRADBZVDXIWGYWHVKILAGEHTFWNUTLGTSES");
    tmp_msg_0.vnamespace.assign("KBAFRFAVTEUMVNYVJRKLIFXEJOJGHOCMIAVYTHRDWMQJLZXWTUOKXDHEGNMFCRWCIYHDOXZZSGTKJQERSDEZCWFULEXICPUAOHGUZBVRWEWDHUJLLTZKMFCAKJBNCGGSNAWBYNBYVUAMPBTROOTLDEZYMJIFTMAMOQYLCPZQYKX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZCEWAFHQXUNDDQWKWHKFCSLZPOQXYNCRYFMNEQGADIAOGOEKNTVIISYSSBMQVBOFSDU");
    tmp_tmp_msg_0_0.value.assign("YZKOIHPBDAFLBTRYRQUDRMTXLQGEDXWJKYIONAOVSRPQYOCBRTJWGKFVETCSVQGQFNVEYDDJTBXMSKQUBNIDIXQWPLFNUBGBIHYTMVO");
    tmp_tmp_msg_0_0.type = 177U;
    tmp_tmp_msg_0_0.access = 144U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FPWWUEFMEVBHHGJLYBPMGFEKCHLDBTUYJSJTCDGKMFFAEFHNCRDJCRZRQAUEXPDYXGNOAHO");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("WKSBDQUUXKNYPHNRMXDUTMZALJCBMHOHIASKNPYETJDQGZXOQUPUBKAYIFGESCXQQVWFNPGWHJWDPFIVGUYBB");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("IWUNMVYBDLLZWPDOMCRMHRAPLCPVVICRQVYZASNIZRHSXFNMRKMQXAUFWKVDUPTGNVKKAFQZMCPBQGJHYWHLAIWHRCUVDTEGESMYEUKIMEWZOTOVHTJSJYIEXPSRMPEAZSYBKJJDORLVQNPKGXUBSCTHLLNQJTPUOTLDTTHNCFZGWOPDXODDEQFYITQIYBYUX");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::ButtonEvent tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.button = 202U;
    tmp_tmp_tmp_msg_0_1_1.value = 37U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::LblConfig tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.op = 153U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("XVWVKBPSJQYVUJJUMGPTAKRIICIUMZOEEYKWJRNLOCGHAXGXGGUYJCRDBPVBNWTYGXAEPOIFWHDOHBGTBIPQQSBKROXVJRVHPRJIPAIWSQIGHHYOCCFAFSQKDFU");
    tmp_tmp_msg_0_2.dest_man.assign("XDZGWIVBVEWCUOZLYAMEENWLXSWAMSATKOAIVSUPROIITWGUVTAYQJBTPNVXXKREYQCVFLYBMTDDEMPCUJMJWTRBCXZMXFKJNNCXHXLGIDBPQ");
    tmp_tmp_msg_0_2.conditions.assign("RTIKXWHTRIQMJEWVCJXTGQCHYPDPDAQLSWTYYSLCEBASBRWNHU");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::SmsState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.seq = 1740166398U;
    tmp_tmp_msg_0_3.state = 33U;
    tmp_tmp_msg_0_3.error.assign("SQUNOPCZQBTPZRXFNRDTBIEROELLYYBQZMRHKVXIYQCXIOFEAWWGHWLKVZKMUDNQLQLIDZXVJNFPVMDNZXVUJGGGUUKCLVXLWSSATJJFFOCEXEBENHRJTIKAUKKYDOWCJGBEBSZIUWMLNVTSPCTHYDPRGJVVUXCLGKAPMTYAAUHCDUNBEFWLPCDRJDHHMYYXSJFOPOCNIMWRFAYTBBGGQKJOAZMYSWNEHFAET");
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
    msg.setTimeStamp(0.390312835495);
    msg.setSource(13113U);
    msg.setSourceEntity(10U);
    msg.setDestination(21254U);
    msg.setDestinationEntity(59U);
    msg.state = 125U;
    msg.plan_id.assign("OOOTCSGBASMMZXQIADYEFXULKBCCXEURPXIMETCDOLSWDVNYWOLKOWLXMZGNPNMDQBVDYSCEMPZJYFTDOPSWWAUTQHPUJKLPBRQUBQNXZEUFTG");
    msg.comm_level = 41U;

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
    msg.setTimeStamp(0.993056747438);
    msg.setSource(28967U);
    msg.setSourceEntity(150U);
    msg.setDestination(12472U);
    msg.setDestinationEntity(230U);
    msg.state = 219U;
    msg.plan_id.assign("GICVITKPLTEJBIIPBBVJEUAMFUZUXOAHZXLSPASEXATTXSMFAGIVRTABXSVDOMULEKXNWDJQDVPMWXGBBFMDEYHWCNQDRKANIHWWCRJR");
    msg.comm_level = 116U;

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
    msg.setTimeStamp(0.187681265841);
    msg.setSource(28477U);
    msg.setSourceEntity(36U);
    msg.setDestination(4098U);
    msg.setDestinationEntity(21U);
    msg.state = 10U;
    msg.plan_id.assign("KRYYBFGLWTMDWFGHPCYIWUTOAEJFAKSLMFFNSZUJYQVTTATUODVJXVIQXRCIOYCKZENEBVUJLOCJZGLEAPYOXSJGDWOUKRQINMHESTEAYXISGWTUWGVM");
    msg.comm_level = 42U;

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
    msg.setTimeStamp(0.365043440044);
    msg.setSource(24975U);
    msg.setSourceEntity(155U);
    msg.setDestination(59033U);
    msg.setDestinationEntity(145U);
    msg.type = 131U;
    msg.op = 31U;
    msg.request_id = 33483U;
    msg.plan_id.assign("XRXCESYROEQLRUJPBFKOBWPOIYGTLIKVSTPTDWSHXXDNLGKHCVAUQZELIGDTSJMAKLCZMNEBMBWWEVOFEGCICAFVUIZNQVOKFDZQJATVHYBFIZWMIAQNDEJMOEYXBQFEBIXYJUXSCEKGLLZBPAHXVHNMJJDPMZPHQSR");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 3U;
    tmp_msg_0.tas2acc_pgain = 0.696140249003;
    tmp_msg_0.bank2p_pgain = 0.529173240923;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BCAKDPFCTJZWUWGHGHRXZHLEEOCUNVMSIBFHRF");

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
    msg.setTimeStamp(0.262694998919);
    msg.setSource(31434U);
    msg.setSourceEntity(144U);
    msg.setDestination(17941U);
    msg.setDestinationEntity(179U);
    msg.type = 35U;
    msg.op = 51U;
    msg.request_id = 42617U;
    msg.plan_id.assign("DXMEPXWCAMJMFXVGEWSNFRCSULNVRIOPTQQWMGDSFKOVTUKOHNCFVSEGDEFBCWVPBJQOYSZWKKJIVFBOIGBGGPGZJBZCYCHIMLPYDKAPXAYXPNOJLKYRXSEDCFHLSXSEIETZIDWQOYVJLMPRRXTJRUMWDPFVCBUCQOAYRHNRZDCYLIFBMGAHTHFJVQXAEHAIESULYNZXWKIPD");
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("LARLJESEDROGEQVIZIJWNBJLFMTZFFHNCMFYIMZFUNJGDP");
    tmp_msg_0.op = 88U;
    tmp_msg_0.sched_time = 0.773564900907;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AZHFNTOFFJGRWLEOQBKQTSITXGNYAVLACFXLNVOOCWKSKPIXJCWLOTFCEQPPBFZKQVWUJZLDJRJGPGMDYLVTRQOCKOSBLTSQUNIUWZOZQCDUNYHDCGRRVTZUWMWAWRMDTNPMAXHPEFNMQFTREKPJYFUKPVYZGBENCXEVJXWEHUBOKEMAARVPBIIGJBDKEIYWZHYHSAXSVCMEKA");

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
    msg.setTimeStamp(0.343913195782);
    msg.setSource(18809U);
    msg.setSourceEntity(78U);
    msg.setDestination(62089U);
    msg.setDestinationEntity(193U);
    msg.type = 118U;
    msg.op = 160U;
    msg.request_id = 29463U;
    msg.plan_id.assign("VVLFZEPUMKGPVLOGRHXLFYZNUFIBFMDMXKJQTZKVCMLOBIMJNXDEOIUXIGRFNPPYHFZBNEHESYZKBTRYHSUVTOFKGBBMGQOZWELECZJKRLYAAUIP");
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 63251U;
    tmp_msg_0.status = 168U;
    tmp_msg_0.info.assign("VCYDHAIPNTXXOSQBKQUZFPTPHMJSIKKHMGLHZTKVURBQNATRPDJAQUFOTQAYELLJZSSTJEQGCMUFLZQFIIEZXUXURGAFW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ICRQVIMTZASPVQXFFLZYJGUSSVNOKXGXEUVHFITXNCYSTMNXDHLSMFFXOIAWWAQYDWZFZXQMWWBLVHHVLUKGPTSTBQFRRQKDCELSERBDHPDZELPHWHZTVJIUQKYKWIVBACZLTVRGJTOM");

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
    msg.setTimeStamp(0.927149284697);
    msg.setSource(2340U);
    msg.setSourceEntity(207U);
    msg.setDestination(64441U);
    msg.setDestinationEntity(59U);
    msg.plan_count = 49600U;
    msg.plan_size = 2786372148U;
    msg.change_time = 0.995266665972;
    msg.change_sid = 28487U;
    msg.change_sname.assign("LQCJPQKDADNAYWVKKMIPXRJTFFKBTHEBCVWGZCFVGZCLVWNEPCNTYFVBZWHHYMFESGMUSCDZWATIFALMYOOKYAZLRYUGLUSOOW");
    const char tmp_msg_0[] = {-114, -104, -32, 95, 114, 109, -75, -93, 36, 111, 31, 119, -10, 29, 93, 124, 98, 9, -122, -97, -12, 46, 94, 67, -122, 47, -27, -27, 9, 3, 34, -24};
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
    msg.setTimeStamp(0.354326618551);
    msg.setSource(9649U);
    msg.setSourceEntity(216U);
    msg.setDestination(33038U);
    msg.setDestinationEntity(132U);
    msg.plan_count = 13221U;
    msg.plan_size = 1261806755U;
    msg.change_time = 0.931800547227;
    msg.change_sid = 47062U;
    msg.change_sname.assign("DHWHKLGSJANDCXGXRYBZNBKEUOSKZTADVTKREORLBIFTIXUGQHOLBDEHMCWLKTFWGXSZNDSLIIEJINVNCWOZYJEVHUKHVCGIAEMUCYQPTKIVRCFYGQVZVFHVGGWNHNDTMLAMDUFUNWOHKQQXWPWDXZPRDJKPYEFSZECOCM");
    const char tmp_msg_0[] = {-63, -31, -96, 115, 4, -89, 97, 82, 55, -62, 51, -39, -78, 114, -53, 54, -28, -115, 89, 86, 75, -43, -55, 60, -99, 60, -5, -14, 101, -68, -9, -112, -19, -51, -36, -68, -32, -25, 59, 71, 100, -42, -18, 93, -32, -67, -14, -9, -99, 85, -95, 27, 17, -21, 67, 120, 58, -53, -42, -38, 53, -56, 32, 5, -42, -28, -44, -101, -70, 86, -99, 83, -61, 108, 28, 53, 38, -21, 15, 12, 56, 54, -6, -105, -35, 65, 87, -19, 62, 120, -73, 86, 62, 5, -98, -70, 44, -83, -35, 30, -97, -41, -93, 83, 28, -74, 58, -54, -7, 44, 61, -70, 70, -29, 88, 110, -2, -18, -95, -54, 25, 88, -90, 8, -87, 74, 37, -16, 18, 1, 60, 20, 3, 29, -2, -55, 4, -127, 48, -32, 104, -33, 33, -10, -84, 123, -114, 27, -54, -32, 91, 43, -73};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ODKJYSHTUTPKNAJIRMAHIUVMYDVTZUBZZONPLIOVLDCTJAEWVJBGDAODSBMCRKORGLKTWSPTECRDNVESFDPEFXQWALGXFZARXKBVCHFKJUTYHBHGYWLKQFQKRPDZYZISOFMULUUPNXENPXCSBLXZHAGIIXWNJGRHRXHKIFJQFCBAQSKWPBVCCMVNNYDZPA");
    tmp_msg_1.plan_size = 4142U;
    tmp_msg_1.change_time = 0.576767525694;
    tmp_msg_1.change_sid = 54350U;
    tmp_msg_1.change_sname.assign("UFJSOJVYDZPAWSSUHLVJLQHDWVQFZNQRGFFFXJRZIUMDTACZGPDQRNSHMXIFLGRTNGRBFZXYFNLANDZZMOYHXLUKJYMKUQMCNDIEQTXYWWBXWCKJOMEGMGSVSZDMTOTKLPJ");
    const char tmp_tmp_msg_1_0[] = {32, 92, -11, 126, -41, 110, -100, -127, -15, 100, -58, 79, 29, 88, 4, -23, -57, -43, 8, 96, 85, 72, 48, -12, -15, 97, -38, 85, 47, 45, -4, -42, 65, -74, -4, 67, -89, -128, -14, -53, -126, -86, -8, 69, 118, 9, -25, 60, -5, -5, -56};
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
    msg.setTimeStamp(0.274661976276);
    msg.setSource(60686U);
    msg.setSourceEntity(129U);
    msg.setDestination(37303U);
    msg.setDestinationEntity(16U);
    msg.plan_count = 7346U;
    msg.plan_size = 3828750155U;
    msg.change_time = 0.158317811592;
    msg.change_sid = 61624U;
    msg.change_sname.assign("JLDQZYAFGJTYPJKEYIOADEQOBJMETXFNYQPDJRFNMSGLZUVCVFBDGLFEMNHIUWVKWRFDOXTWUCVXXOPYCUMZIZGLRTRCWPURPBQXOOTARHKVZHUZKLZNSFNKLUGBVKOWEVWIERIBTLNDXQEBLPCNIGHWTDSJE");
    const char tmp_msg_0[] = {-86, -51, -64, 59, 6, 0, -81, 12, 112, -70, 2, -56, -19, -21, 115, 50, 16, 121, -66, -44, -71, 74, 100, 108, 24, 45, 19, 58, -27, -93, -58, -54, -102, 86, -31, 66};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IRMFPBSLJZPICVKLWHFJVICADLWVFVYXZCKHBUYUKACNRXNOGWFGEDUHZNCCQRYXL");
    tmp_msg_1.plan_size = 18794U;
    tmp_msg_1.change_time = 0.0582128750342;
    tmp_msg_1.change_sid = 19935U;
    tmp_msg_1.change_sname.assign("HGXAFCTVPNFEXWFOLYQUGFTTCOKYEWTBLRWVSENMUDEIAPMKNYTKXIXVLDNZVVBSEDMZBWUY");
    const char tmp_tmp_msg_1_0[] = {-123, 123, -100, 64, 14, 103, -113, 17, -9, -28, -51, -72, 113, 17, -115, 5, 61, -20, 9, -33, -4, -64, 95, 38, 78, -16, 45, -10, -87, -75, -52, 83, -120, 12, -2, 51, -8, -94, 35, -126, 12, 32, -111, -102, 39, -104, 23, 88, -73, -57, -67, -101, 4, 61, 51, 98, 94, 15, -26, -51, -3, -69, -104, -121, -41, -88, 72, 99, 36, -57, 70, 10, 4, 30, 103, -77, -113, -30, 70, -17, -24, -21, -35, 6, -41, -13, -37, 110, -127, -4, -58, 81, -63, -80, 52, -105, 39, 6, 82, 84, -73, -102, -29, -85, -7, -88, 102, -25, -105, 123, 52, -106, 33, 101, 114, -18, -56, -100, -124, 47, 21, 70, -118, 39, 9, -96, -4, -17, 113, 54, -47, 35, -115, -59, -122, 67, -102, -77, -27, 104, 77, 56, -53, -49, -58, 116, 119, -40, -91, 66, -57, -39, 89, -90, 7, 72, -52, 68, -42, -85, 90, 60, 73, 101, 108, -96, 32, -68, -117, -99, -74, 67, -120, -79, -92, 46, -24, 56, 106, 124, -100, 0, 57, 8, -125, -76, 48, 88, -111, -100, 14, 92, 98, 118, -68, -43, -25, -88, 43, 48, 14, 73, 21, -85, -108, 120, -49, 92, -63, 89, -118, 10, 3, 89, -45, -114};
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
    msg.setTimeStamp(0.607611850176);
    msg.setSource(54285U);
    msg.setSourceEntity(195U);
    msg.setDestination(51160U);
    msg.setDestinationEntity(78U);
    msg.plan_id.assign("FNGOAIDRRWISWGGBPQISKRVYQIAWBPFTTPZSVYXZVILRVFAFNPWDMXKJRKYTVHENKZSLJVXQNSGRXXJYVSJIAOUILFUBRCGPPOBWPYDPEUXMMKJGUJJYCL");
    msg.plan_size = 27135U;
    msg.change_time = 0.501735796136;
    msg.change_sid = 10347U;
    msg.change_sname.assign("JRVLVFGFXYBNOGEHMDSF");
    const char tmp_msg_0[] = {-57, -89, 119, 12, 54, -36, -98, 103, -119, 34, 16, -83, 62, 92, 87, -46, 63, -77, -123, 38, 15, 31, 79, -22, 33, 47, -32, -47, 75, -44, 81, -77, -74, 114, -74, 47, -84, 116, -95, -94, -39, -3, -121, 77, -102, 3, -110, 12, -44, -34, -61, -24, 77, 101, -51, -62, -90, -10, 29, -21, -56, -109, 119, 72, -123, -24, 105, 42, 74, -93, 35, -35, 64, 6, -122, 75, -92, 31, -74, 34, -67, 0, 84, -93, -39, -57, 36, 90, 26, 12, -86, -79, 6, -36, -75, -103, 120, 75, 44, -56, -62, -35, -33, 73, -3, -124, -47};
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
    msg.setTimeStamp(0.224098549146);
    msg.setSource(7102U);
    msg.setSourceEntity(245U);
    msg.setDestination(60752U);
    msg.setDestinationEntity(5U);
    msg.plan_id.assign("OBSIHCBTCVMIBUPDLIGYVMXNXRETHLUPKYVNKNGYQQKZTQOEBOTLLLVLLRAVNUUGANDMDNWBCPDHUJSKZROWERMGPT");
    msg.plan_size = 15302U;
    msg.change_time = 0.933127912749;
    msg.change_sid = 12052U;
    msg.change_sname.assign("BEWJHKSQRWBDQYNKIKTPDGPJMCZFSJATAUFIC");
    const char tmp_msg_0[] = {-99, 28, -117, -111, -55, -78, 106, -22, 98, 4, -82, -59, -74, 55, -31, -81, 60, 116, 49, 120, -84, -57, 126, 44, -57, 28, -65, 90, 39, 111, 14, 86, -83, -100, 13, -46, -29, -18, -54, -2, -91, -13, 36, -44, 85, -11, 126, -19, 71, -114, -125, -72, -122, 113, 11, 98, -10, 78, -61, -101, -86, -103, 4, 86, 32, -21, 36, 59, -9, 11, 80, 126, 2, 87, -86, -127, 10, 45, -102, 45, -50, -77, 97, -34, -73, -65, 29, -72, -114, 19, 24, -85, -72, -7, 12, -123, 64, 115, -118, -90, 88, 4, 44, -41, -35, 67, 59, 59, -9, 116, -102, -122, 20, -75, 99, 33, -27, -78, 105, 38, -91, -61, 121, -119, 114, -69, -80, -36, -63, 72, 122, -75, 115, -29, 6, 55, -72, -77, -109, 4, -119, 57, 74, 92, 119, -72, -54, 76, 50, -127, -41, 118, 61, -110, -68, 74, 62, 110, 38, -56, -60, 89, 111, -104, 118, 113, 80, 16};
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
    msg.setTimeStamp(0.145071084356);
    msg.setSource(3376U);
    msg.setSourceEntity(191U);
    msg.setDestination(4267U);
    msg.setDestinationEntity(154U);
    msg.plan_id.assign("CSXZPACPEWCPAGVEGYGQHWEZ");
    msg.plan_size = 39118U;
    msg.change_time = 0.979908409986;
    msg.change_sid = 9397U;
    msg.change_sname.assign("MQFPXWXFUDGJOQLKYSTUEAUSPAVKAFTDVYOPSSDRTPIZQMINBHHMLHQTOCYWUKSKACLEXLFWKCQOFHIVRNKKYDJRSUTZAXZZAQNPZVLMXSUHMNTIJNHBBLYGNIR");
    const char tmp_msg_0[] = {123, 105, -119, -25, -75, -74, -108, 14, -1, -105, -10, -43, -97, -77, -125, 66, 73, -86, 52, -39, 74, -17, 122, 61, -80, 9, 106, -48, -92, -33, 8, 108, 120, -52, 122, 56, -73, 38, -2, 70, -94, -120, 70, -88, 25, 47, 123, -72, -51, 7, 3, 84, 58, -71, -54, 100, -2, 10, -89, 63, -57, -113, 89, 7, -31, 30, 46, 126, 62, -15, -82, 26, -81, 58, -102, -65, -55, 105, -74, -56, 55, 68, -104, 23, -119, -100, 1, -79, 66, 77, -56, 111, 30, 107, -23, -77, 84, 99, -64, -44, 86, 15, 78, -28, 62, 12, 119, 73, -85, -47, -32, 41, 74, 48, 77, 34, -20, -94, -120, 124, -16, -1, 43, 108, -104, 87, 74, 116, -10, 51, -90, 21, 107, 87, -57, -12, 35, -123, -80, 99, -56, 39, 92, -17, -99, 15, -44, 7};
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
    msg.setTimeStamp(0.654624605932);
    msg.setSource(40723U);
    msg.setSourceEntity(141U);
    msg.setDestination(18376U);
    msg.setDestinationEntity(101U);
    msg.type = 248U;
    msg.op = 25U;
    msg.request_id = 23927U;
    msg.plan_id.assign("SMQWVLRRHOBKMFVJRESVCNJNZZNURRAXNUDWJPLJMTQXATLGTZQBAOPRHARQCOSWYWSKBDPWHLMHYFFPPFTKKXYGJEYVCZEMFZLAKRGMSTAZYEFPEQUSJIBMGEJOUIODZHYHEDUSQODCWWEPDBXSKYYFTNCXANCNSUIUBTAKVPZCALJXBREAEBNHIIGQHTFYLZXGVTWCSMJODBIZUMQ");
    msg.flags = 61700U;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.488829773034;
    tmp_tmp_msg_0_0.lon = 0.408370715538;
    tmp_tmp_msg_0_0.height = 0.0412087018025;
    tmp_tmp_msg_0_0.x = 0.653284379653;
    tmp_tmp_msg_0_0.y = 0.835421404065;
    tmp_tmp_msg_0_0.z = 0.0905850802665;
    tmp_tmp_msg_0_0.phi = 0.855009882492;
    tmp_tmp_msg_0_0.theta = 0.772749740056;
    tmp_tmp_msg_0_0.psi = 0.366287342603;
    tmp_tmp_msg_0_0.u = 0.619635784855;
    tmp_tmp_msg_0_0.v = 0.63493803881;
    tmp_tmp_msg_0_0.w = 0.331495125375;
    tmp_tmp_msg_0_0.vx = 0.103516033323;
    tmp_tmp_msg_0_0.vy = 0.77969584793;
    tmp_tmp_msg_0_0.vz = 0.162883463631;
    tmp_tmp_msg_0_0.p = 0.38097195674;
    tmp_tmp_msg_0_0.q = 0.600929561443;
    tmp_tmp_msg_0_0.r = 0.836869638436;
    tmp_tmp_msg_0_0.depth = 0.912862337498;
    tmp_tmp_msg_0_0.alt = 0.870586929416;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 121U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ODMLBYHIOCAUKGHQMVZDNNJLECRGKPBOHOXRAFRFJWZODUFBDXYYGRTTQJWQSZWHHSLLCLEAUBDSKFGEIFJNRKIXEYBFVHRWHRSXQNWPLOANIE");

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
    msg.setTimeStamp(0.0744412702509);
    msg.setSource(27729U);
    msg.setSourceEntity(52U);
    msg.setDestination(6368U);
    msg.setDestinationEntity(122U);
    msg.type = 204U;
    msg.op = 63U;
    msg.request_id = 59621U;
    msg.plan_id.assign("VVAIZJTSREHXGCMPVMQTLQTNUNUVXPACYENBRLPHUXGSOSKOXFADCMFOFCSOBRTQOZCOEQZZKJRSBHBVXKIWJFPYQJLLTYFIHAJSQMIIHXNUQPJKVAENEIIDZKFBGRKOEWNTAHSRDICOSFLAIWOGEGDLZCSUGIECUKXMWQRHJHTXGRWUKVNPWYYWZMRVFUGJLLLCZW");
    msg.flags = 13185U;
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 134U;
    tmp_msg_0.value = 0.236415768655;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PZLNGEPBJGGUTOTVUUHYKTTKCGKSQGJOBJOLYKNXZUJOEBHTTREYFZBBBOWOSDWMHZBZFSBUIPJCISRXCVXNAKEARJFSLFX");

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
    msg.setTimeStamp(0.627965143044);
    msg.setSource(31161U);
    msg.setSourceEntity(29U);
    msg.setDestination(13589U);
    msg.setDestinationEntity(185U);
    msg.type = 218U;
    msg.op = 60U;
    msg.request_id = 31317U;
    msg.plan_id.assign("CEBNPDIONKAAYDYELBZHWDLITGUSQAJVOFKJXFZCBFRWMTIQQXJMV");
    msg.flags = 50692U;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 82U;
    tmp_msg_0.frequency = 1175543431U;
    tmp_msg_0.min_range = 39346U;
    tmp_msg_0.max_range = 16106U;
    tmp_msg_0.bits_per_point = 102U;
    tmp_msg_0.scale_factor = 0.355064073244;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.53891650722;
    tmp_tmp_msg_0_0.beam_height = 0.0126086774525;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    const char tmp_tmp_msg_0_1[] = {-90, 60, 33, 40, -69, -57, 94, -58, -106, -5, -127, -56, -23, 73, 23, -60, 59, -57, 77, 22, 89, -106, 91, -112, -83, -80, 90, 96, 107, -2, 13, 41, -99, -81, -99, 45, 21, 19, -63, -16, 58, -68, -59, 93, -109, -20, -20, -89, -30, -53, -12, 89, 113, -40, 64, 59, -100, 115, -91, -18, -77, 65, -76, -11, 31, 51, 93, -123, 86, -102, -70, -19, -46, -117, -46, 43, -117, -80, 53, -52, 25, -54, -51, 126, 33, -27, 51, 47, -99, 20, 81, 44, -117, 41, 114, -37, -24, 111, -23, 12, 107, -91, -85, -40, 76, 66, 111, -115, -49, 80, -100, 88, 49, -22, -62, 4, -111, -23, 6, 8, 10, -63, -92, -100, 114, 42, -33, -95, -55, -66, 45, 110, -61, 38, -86, -14, 3, 27, 83, 14, -47, 124, -43, -117, 114, -9, -33, 65, -46, -108, -33, -70, -123, -57, 58, -85, -99, 43, 90, 120, 44, 42, -26, -48, -50, -3, 47, 54, -62, -87, -73, -127, 10, 101, 67, -16, -40, -79, -66, -55, 79, -88, 30, -18};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TUUKTHMDNELYEGRCDLAAVLZXUGEVSQYKUYJKJVWBTXCNLGDZXXGRVPKBWFZBYNMZBEEOWEQUDMCPSFREEOHRTLVVAOHQDYWXRKIXMWSNFOWABQQBTGNRRMNYDATAUYQFHAIOUCCLSQNMTKZKXZIHHSBAGVMTBFSZISGXLAJWTCLXGHPBREJGRZJFCQNRUWUMPMGOPTJSQSPUJJIKICIYFVOXLDHYLJCPVHOKPFFIIWNVE");

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
    msg.setTimeStamp(0.588451037057);
    msg.setSource(34729U);
    msg.setSourceEntity(13U);
    msg.setDestination(49595U);
    msg.setDestinationEntity(151U);
    msg.state = 17U;
    msg.plan_id.assign("CEAOKBJBAIQZCPRLGZWGJESPPQRVKUSGVFIKAGFMGXDTJTRHSUCAPBPRUDYTBJMXUMB");
    msg.plan_eta = 1152906733;
    msg.plan_progress = 0.596926456104;
    msg.man_id.assign("SFLDDRUDMWODCJSUCYMZIOKIAGGAGGCBRXEDVQPXNWBKSAZPYWOMBFLJBZWSTKCFIBSHMVLRCNSVNJVGCLENHUTYWIRFYHZIUINGOFPRPLQOQOALTVQJJFDLXHUWTHJCDERXBWFQQZVXMJKHIGNGPQGAQDYBXTPYCSLPFSKGRPMZVPRLAHKSMFXEEVXRSMZEEURAUZIWKJTYQHZAE");
    msg.man_type = 61524U;
    msg.man_eta = 1085115943;
    msg.last_outcome = 30U;

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
    msg.setTimeStamp(0.117569785548);
    msg.setSource(31493U);
    msg.setSourceEntity(120U);
    msg.setDestination(29357U);
    msg.setDestinationEntity(209U);
    msg.state = 95U;
    msg.plan_id.assign("EOGNFSVLBAPPTBUGGEYQUFWRXBRWIQZTKNFTCHURRNCRNLXSGAFSATVCESEIP");
    msg.plan_eta = 185894935;
    msg.plan_progress = 0.877406540475;
    msg.man_id.assign("RHOEWPSTLGPMSNJORGTAUKGMPOXDROIHZAZGNSBWMFBLQQLF");
    msg.man_type = 5002U;
    msg.man_eta = 1014365658;
    msg.last_outcome = 196U;

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
    msg.setTimeStamp(0.535367399296);
    msg.setSource(2707U);
    msg.setSourceEntity(144U);
    msg.setDestination(7160U);
    msg.setDestinationEntity(245U);
    msg.state = 168U;
    msg.plan_id.assign("IEQPKYZSKTSRPOEAYKLQJDIFGRUPJBJYTBUCXTOUNFFJLVJYPORVBXOGQPPFPZLEBQUSDLXGLRYQZZHKUKKIMCTSSWOOSIRGWXWGFEHVFEWDOJULBDBIHJTCRTXZJQDSUGVIMSHLDAAICRHNGBJMRGLVNVQEBNMQRCUNNVNAYPZMZYYAHZUWWYAZMXWSEVFYIPISFETAETAOOMVGWZUMKOWCRGFAAWXH");
    msg.plan_eta = -1980784149;
    msg.plan_progress = 0.655468936928;
    msg.man_id.assign("ZUOVNLSJNNSYQXJHKOLDYOWJFNUXMUZZLJPAVCTGCZSMDZLEEHDBWATXKHISYAUTIUFLYKQM");
    msg.man_type = 1256U;
    msg.man_eta = 185931955;
    msg.last_outcome = 62U;

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
    msg.setTimeStamp(0.0404027945048);
    msg.setSource(57336U);
    msg.setSourceEntity(191U);
    msg.setDestination(57420U);
    msg.setDestinationEntity(104U);
    msg.name.assign("GNMFYGVHYOEHPXRGWRISQRQSDRQYIZBNQVZCKMPDFHJUFEBIXMONWDAJUVCDVHFGL");
    msg.value.assign("MIDILUZOUNYHKJNCAYFCENQAAOHGABMETYPRODWBRMGTSHELDQCUOETDTJJYZRQOWAGLKXXTLIPFKRSXHIEFKSITVQZNUVBNDRWUTPWIDCACCQOTAWWNGCCZRZLLUTQPKOGMPGFMBEIWBPBESBUBDPMKDEVKXUYYSBJTHZHRPHARJMFPDLEAHEBYQFVZUQOJVRYCSZVQNZFGNSXSXGNAKLGRVMMPOXGF");
    msg.type = 83U;
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
    msg.setTimeStamp(0.337699680935);
    msg.setSource(59937U);
    msg.setSourceEntity(54U);
    msg.setDestination(49707U);
    msg.setDestinationEntity(173U);
    msg.name.assign("MTDUUQBAKRDOPJBWEVRIQZHDICZDNAUPAGFWZQSFMSIWYCIHLATDRGLYUCIBXYGHPEVBYTRQEMGXBGYZKDMNQPKNSTKZRZLFXORWLCFUAUMMYVUNTMNQXVPNOVRUQZKFRSRAUBMCEIHFGBJUQFXXBHWSFEKJKGONGEYTJTJKBOAHLVIHZTZXOEAQIVPJTBS");
    msg.value.assign("OWCBFNGEJLKFLCJAIUIYQGQKSDUIRTBTXSSBXKJAWOIRRATKCKNFMMPXCPFFSKNRMSLMUZTTNYPTSGJNIYHUAQGRYJWHYMHZMYIOAGNWHUXEVDDUVIXVOJSRUIMLEFRVBAHWAYVNPQSEIMPEKVNSEFQPGPTGLJCFPQJWWCZOXCDLHQZVKEBEYMHOCJJAYWTCEUHALBUZRRDYLQBZXQXFZDILBGOXPDKAV");
    msg.type = 230U;
    msg.access = 19U;

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
    msg.setTimeStamp(0.263597419227);
    msg.setSource(60309U);
    msg.setSourceEntity(38U);
    msg.setDestination(9963U);
    msg.setDestinationEntity(100U);
    msg.name.assign("OLJZYIPGLQTMFIQNLZDKIWNCQXFDXSCIZOESDQPZRFNMPUAHACKWYXUPJAWVMHEQDUBOFXKTQILVEBGVLTNHMSASCGRNPMFZMWDGBPAIIPTSGSCBBAMSXJNHZJXKETYXVERGTEDVBLIPY");
    msg.value.assign("PKZTFGUXPHYLEYRIBPMDLYGZRKSVRXXQKOUFSRGHLXTWWUCVEJVOXCGISAUJVPJEBDIHCKODMRTNRQBWBEZCMWSQDJXNKUSIMTAPZQBOYPCUZINPVIUHGWHTAGGRTNTAYUHCQHHTAROVZPFZFNSWFEGPVDZCMIPIHNOWXQDJBBXNJMSVOSCYKLLQLDUJCBVOAJKIXRDBMZSEEOAWVNFWJASUJTYMKAFXQHDMIMAKZBYQEOTLDWL");
    msg.type = 251U;
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
    msg.setTimeStamp(0.322372530184);
    msg.setSource(58412U);
    msg.setSourceEntity(74U);
    msg.setDestination(38944U);
    msg.setDestinationEntity(33U);
    msg.cmd = 133U;
    msg.op = 217U;
    msg.plan_id.assign("ZVQYXZZQCNPANSSDSLSTLHRHPUDBJGJZQLCDVPAINBOTFTIWXNYGVSVRWMVULABKUGZXEYWKVQBUJHENERSOXFVSAGXNQOJDVENJYCWFZWTUSQPEYOGTGMLCOEVLVCNIMIKAPZPRTBTNURUDIAOJJHRHXLWIRUACCEIRJSQJEIUKPXHCBMIFXOXEMOYLEKSGYYFHILU");
    msg.params.assign("ZOPFJWAZSNABYYYMBSYZEODRQTHHSPJPFKNDREDAGDSTNRTUWBACLSQKIEUGWVIVONEVVGTUILKMTJLPVPMPUTWJDJCXRNGVZXTENSFOFBNRJEKYPBFQHKJXDRWOZJWHGBGHYTZZ");

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
    msg.setTimeStamp(0.784832605586);
    msg.setSource(31975U);
    msg.setSourceEntity(94U);
    msg.setDestination(11954U);
    msg.setDestinationEntity(91U);
    msg.cmd = 31U;
    msg.op = 144U;
    msg.plan_id.assign("JDRBGJRGJAOZOEDTKMGSZCLLSQZWSUJRLGWMYXARSHBYZMTLHVIECNSLKADTTITQJPBOMFGRGKUPXKUQLKHXWOYHMYANODSIVWUGCWYIXVXYMWNVDHZZLNHBPTVSNUCXAHTXWPAQNPUOPRQOXXPMYLQGEPVN");
    msg.params.assign("HLOHNDYYTOCWKCEPTMTZMSRAJXJCXQTSRSATDISKAJVHMNMJLCNGMYAYOAKICGJZVEPLUZGZJVNJRIWQF");

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
    msg.setTimeStamp(0.298745423684);
    msg.setSource(57331U);
    msg.setSourceEntity(200U);
    msg.setDestination(11159U);
    msg.setDestinationEntity(248U);
    msg.cmd = 128U;
    msg.op = 183U;
    msg.plan_id.assign("YDLHZDFNVASJHMRZAYYSENMTRTLHXRPVPNKWVFOMBFHJVXCOBNNSXMJIJQCCEGSKUWPQFFHTXVQNSZIHQLTCWCMRLQKRUEEAUKYUBULMOWKPOEHASONDSIVWYDOITNDEDGXRKLAZXDXBCIDEQKOVPD");
    msg.params.assign("OZFIWIGNIYMAFDTNQBXZRCLHKXREHXWXDDKHM");

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
    msg.setTimeStamp(0.903031815938);
    msg.setSource(57518U);
    msg.setSourceEntity(40U);
    msg.setDestination(57692U);
    msg.setDestinationEntity(45U);
    msg.group_name.assign("VCGFDOFATNRWJTSRFVZZVYMJHSUQXYHNXXKGYAZHUCPRTBQGZDBQGTKTUUMQIMDATZFMEHSZOPNSTPWPGVBXYYWCKTGTCIDMLPWCEDPXCWJLMIHAAYVGNBILWOQRIERKNSRRBLLFUSGXUZDVIUYOTGAXPZKCAKVMDBUBGLXQEEEOKIZQWRBDVJSHNBUEJFYPU");
    msg.op = 48U;
    msg.lat = 0.257204238351;
    msg.lon = 0.756399244462;
    msg.height = 0.182997561498;
    msg.x = 0.136326549403;
    msg.y = 0.304798156299;
    msg.z = 0.448011326136;
    msg.phi = 0.234618476042;
    msg.theta = 0.0395626457875;
    msg.psi = 0.216082407497;
    msg.vx = 0.0929758599968;
    msg.vy = 0.286216630795;
    msg.vz = 0.741457501188;
    msg.p = 0.422033240369;
    msg.q = 0.964985531666;
    msg.r = 0.359148954883;
    msg.svx = 0.429281664432;
    msg.svy = 0.0774462826548;
    msg.svz = 0.72834834354;

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
    msg.setTimeStamp(0.0272734376326);
    msg.setSource(34740U);
    msg.setSourceEntity(145U);
    msg.setDestination(32342U);
    msg.setDestinationEntity(238U);
    msg.group_name.assign("LKPRWZNLXNQPHKUJQVLCZWZOKTGFRFWYHVEMWMMJOXXANQSRSCYLWIQOLEVICHVPQBJLQEKOJSAGPNVTPUNAHQABTEDMUPNGIWIYFHZWXWUZFSNQAOOKMBTOXJALXDZZYXIMKGHKGBYEPFDVJFLRMRPSBSCJEBIXXPVHEUNVDTYAAFODMRBDWMXVITLRCCGYJKYHDIMLCRBRSOEJBWNGGQDUCFTFHIKZZUPQAYZCNHE");
    msg.op = 114U;
    msg.lat = 0.688661246986;
    msg.lon = 0.675234120399;
    msg.height = 0.330152655504;
    msg.x = 0.763078974104;
    msg.y = 0.433327770915;
    msg.z = 0.449852777563;
    msg.phi = 0.170102108296;
    msg.theta = 0.230754233826;
    msg.psi = 0.459188446306;
    msg.vx = 0.670906728272;
    msg.vy = 0.819331816238;
    msg.vz = 0.874910135919;
    msg.p = 0.0937885449351;
    msg.q = 0.985678370717;
    msg.r = 0.569502350382;
    msg.svx = 0.246378271606;
    msg.svy = 0.820726053286;
    msg.svz = 0.652602918549;

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
    msg.setTimeStamp(0.442118464981);
    msg.setSource(52995U);
    msg.setSourceEntity(200U);
    msg.setDestination(22998U);
    msg.setDestinationEntity(200U);
    msg.group_name.assign("PRMDQCUACTTEXAQDENACSRTLFTYHYQEMLFWLMNYJHWZZPUCACYAXJLDPLXMHWIRSSJTFYJXNEQDWTGRZIGRMVDDFQQVFAGCVQFVJDWBAUELHFXARVYDXRVAZNGCTFGMPSMBNXYVOGBHRHLXNYJKZOVZIVEBAUWQQUOTFEBYYNWOOCKZXSPUSLKJKPNBRBLGKRWOPGIENWUCEWHMSLTKP");
    msg.op = 168U;
    msg.lat = 0.0996845298214;
    msg.lon = 0.881803431765;
    msg.height = 0.816627336366;
    msg.x = 0.156701924485;
    msg.y = 0.624006099135;
    msg.z = 0.870678006616;
    msg.phi = 0.24721015728;
    msg.theta = 0.779821807354;
    msg.psi = 0.908253598623;
    msg.vx = 0.934184415179;
    msg.vy = 0.597065263145;
    msg.vz = 0.524519694907;
    msg.p = 0.0319281304037;
    msg.q = 0.200084055304;
    msg.r = 0.99645930519;
    msg.svx = 0.326311806943;
    msg.svy = 0.230281381095;
    msg.svz = 0.882390444456;

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
    msg.setTimeStamp(0.709658830016);
    msg.setSource(60179U);
    msg.setSourceEntity(47U);
    msg.setDestination(38456U);
    msg.setDestinationEntity(113U);
    msg.plan_id.assign("QSDDTKZHBQGTPVZFUOB");
    msg.type = 52U;
    msg.properties = 252U;
    msg.durations.assign("CBRAKRDNMWAEZOIBOIMRUVOUVMNXBD");
    msg.distances.assign("ICGKGDUWQBQSCKEYZEFPHWISNHBSBLMULJVQXARUHCLULRVFJLEDFQUSPIVPQXIYOMOLTPMFIWYOBTXYUPADRGTNKUTLYXZBNAZJDXQSRJTKMJHDEWTQHCGAJFOJORNGDZHIBKAUCKPCGZXEUAIRHTEVMVEXNXFZZYSJWNDEDVJYHFARCMIRTQAXFWFBPUKSJXOLHYWQZ");
    msg.actions.assign("RABPMREKGNNOGLYGCPNEBGLZSXPOMJFMARZZTVDYWTVXXHLWTUVIJJKDCCLJYYMVJCQWEAJSOCGQWVOWGISXFYQAIBPFWRHVBNFJCSNEMXHNYRRNFDHYUPDEXQJYCIPEMKULITMGXSVK");
    msg.fuel.assign("JXYJKCCSBVLQRTORHUJSNKOGVKZNATDJDGANVKTCFYUXRTBDWZTDLWJLQSCQEAJHZARTYJRIXUZZCNTUIBJQOLM");

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
    msg.setTimeStamp(0.5551541784);
    msg.setSource(55717U);
    msg.setSourceEntity(143U);
    msg.setDestination(6205U);
    msg.setDestinationEntity(214U);
    msg.plan_id.assign("UWVXFISHYQANTBLSNJJQLWBAXPYZPBVGSIBELAUOVKVEKFZWGOWKEQTXSIZGOCPMYFNZHSCPTFCHAVRQUCLNLTHIZNYRJZVRVJTVBYAMXRLSROZYIWSGGADHXFQYLMTQFPCKZOBNKQXCRUYJSCPQDGJHEHDQWXEWQGICERRDMUNMEMDBIAAHJIGMYBUHIOLOUSFEBKPWWZPUGMXFEZETTAJDRKIFXKTMBONLDKCUC");
    msg.type = 121U;
    msg.properties = 78U;
    msg.durations.assign("RMNXIPQWBCHKBAFNOSOYSGDRFKLGYSJELEIUKOBQTUEFRJTYIPCPKOTIWVWVLXLEXLJYJRFXTOBSSOAHDCAGWGJNUHXJPZORFBDWGXPSXDHVCSLTTZWBP");
    msg.distances.assign("IGWPYXPMVWTMXJFBYUEXTICTUHZFGQWSVJZEMKOXATWVBWBKUMCUYBIACQVNLFDALGKDHDIYPAQJZUZPZZQEMBLQUDLGMTVZOKFSVNVWXRJEPLBGMOPOTNEPWELTENOYD");
    msg.actions.assign("JDIGRBTRKNCQFWKOFPNRVZSMQVPLYSLOASETGIHJSBNIYCTSMYWHUDAFFYCYUYLHODKDIQQECTEXATGBQKRD");
    msg.fuel.assign("TQOBTAMMXEPJCRAFTSEGZEPJBVJHYRGLCLUXUXJKCYXRLFNKLYLVBAOQEJXPURFDPEHV");

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
    msg.setTimeStamp(0.248057093307);
    msg.setSource(14882U);
    msg.setSourceEntity(251U);
    msg.setDestination(23901U);
    msg.setDestinationEntity(177U);
    msg.plan_id.assign("VVIOGRVJMDSWMNEWELSETBSTEVRJYAPVJJXZFKASEPORGMIVQUWZUOZX");
    msg.type = 236U;
    msg.properties = 73U;
    msg.durations.assign("ZMNOFBNSDCFEPIQPHHRRIWUGQMNTIUUPZVCLRHPSGRQMXUHUFHJQBVCKVKLKIMJJBWLLQZGSGZBJNHWWIDXWLBVXTUEMLDQAOSHCLFOAAUYJDZDGYASRWWXYOMMECTEZQDJAAYHEDEAEXDMIAPTVVMPJCCVFXOICBYTIYYNNQVUNKFKYKPTRZ");
    msg.distances.assign("XSFFRBJXLIESSWGEGCCCUWLBXVKYJXGSBMRUQJANFUYKSIYZSZBRAFSBHVUDPMPOWEHDKJEDNCNDZHLCMKZQMWJRJJQPYICAPIRUZRKVTPTWOWYRLREWVLZDPICTNHETLTQTLAFAVJHYYUNGZRQYYOXZGTAPVIN");
    msg.actions.assign("QVHWBKGLLQCEIKVWGS");
    msg.fuel.assign("LCDSVHDBFNPILUOCAPBSHPXIEIWPWGYNREAXSLJOYZNHMOPTAODRQROEYKGLFTPXYEDAKJKMNIKW");

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
    msg.setTimeStamp(0.960712283119);
    msg.setSource(26044U);
    msg.setSourceEntity(93U);
    msg.setDestination(47905U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.665825118451;
    msg.lon = 0.135777444553;
    msg.depth = 0.127224382203;
    msg.roll = 0.036201450422;
    msg.pitch = 0.188673049616;
    msg.yaw = 0.707499360282;
    msg.rcp_time = 0.46270786478;
    msg.sid.assign("ECHICHREMFDNSSYQLVYVCZJOQGNWIFZKPFATJNQNXWE");
    msg.s_type = 218U;

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
    msg.setTimeStamp(0.00420710610658);
    msg.setSource(47571U);
    msg.setSourceEntity(103U);
    msg.setDestination(63447U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.372665649507;
    msg.lon = 0.705346180134;
    msg.depth = 0.971645633363;
    msg.roll = 0.288844135129;
    msg.pitch = 0.0331771862391;
    msg.yaw = 0.0970361207016;
    msg.rcp_time = 0.427847608776;
    msg.sid.assign("CGHBEFMDOSOIWSNQCHVTPMORBWZHJPMLFGXWRYBCVBCVFUZHQRWSRYLKSIPIYDVWEWDADMTWTAWSNEJLAOSCETHAAXXVSUZVGLHXOPHKUKQXEIPBRXFZRUYPNMRTCTNNBYXVREKOSGFNLQMAQOSZTGJYEDAJJUQJZTMJKIFPBADCCMIHH");
    msg.s_type = 252U;

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
    msg.setTimeStamp(0.349666732445);
    msg.setSource(59865U);
    msg.setSourceEntity(53U);
    msg.setDestination(33367U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.63534198302;
    msg.lon = 0.936021829947;
    msg.depth = 0.155362834871;
    msg.roll = 0.11946018722;
    msg.pitch = 0.738276338067;
    msg.yaw = 0.493466089546;
    msg.rcp_time = 0.811114255143;
    msg.sid.assign("ARTBFHZOURVKPBASPTUDAYXSHRJGVTLJLSZVEFWTKECFECBEWRXXMGDTIEBALDQFROJBSWYMDYQXRVOXYIPKQDUTWKKVMMNNALYAEJXRCGNQDHUNPGRLZBDMQPMARES");
    msg.s_type = 37U;

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
    msg.setTimeStamp(0.106346915752);
    msg.setSource(41048U);
    msg.setSourceEntity(190U);
    msg.setDestination(23340U);
    msg.setDestinationEntity(61U);
    msg.id.assign("KDXASMUZUFGIDZRLENUAJKMPXSGQRIONKLHAFTYQFJDERQEXKJQSWKRWUQLBTTIPHEPJBSMSDETBISVTTIMJZFEQYVXYZGSSMPMZDNWXBYZXOYWJGBMXECBGMBBFRIULAKYPHGODLQOUDKRGYBRJBHYVVDKCOCPFZGHAATSZVHCCFRNMYONNWXRFOHGIQNEQRVNOZUJIUHCVSWCAWLNVGXELKPPZWFTWCWINDE");
    msg.sensor_class.assign("MIVQMAGLKYAJYLNYFMUOXEQITRPWUBKUOCPLVAILLYZDFBEODDWHGZURCKCNXXBWLVHGPQTNNXIGESODPSTEPITMSMHOBTNPDJAUVHDGSMWSRZAQDVGCFRSDQMVQWVIVJEFEWYJVYIGNSUWDPARZZWGKFLMEJEUWRPOTQZACLZRBMHQNZXRGJOAP");
    msg.lat = 0.987978114724;
    msg.lon = 0.303203556618;
    msg.alt = 0.0353799071813;
    msg.heading = 0.46030455891;
    msg.data.assign("LZUHOEBYCYPDHGNHOHZCSULWWAXUSEPNGUXEGPINFOXKGJIRNMMLBXIGVTDKYQPGRZJELDBCSWCZIPRAQZDKI");

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
    msg.setTimeStamp(0.836166739265);
    msg.setSource(612U);
    msg.setSourceEntity(46U);
    msg.setDestination(49444U);
    msg.setDestinationEntity(124U);
    msg.id.assign("LCEBOBWHTINSNOYOWUWFTFQAKAEGZCHOOEMWGCPLZGKVXURVAEFEFAVWTNRWFPWQCLKAHBGOGPQKYUKVNNDEMZNRPIXDMXQBERPDUZAHEMCLCKATCERFZKRUDDVYOKDJISVMMISVMKSICURNQJHOZBSWZXLZOJFDJTUBYJXT");
    msg.sensor_class.assign("LTNXWUYCXXMGGZQSMEPWV");
    msg.lat = 0.242487391324;
    msg.lon = 0.924797298301;
    msg.alt = 0.686854246298;
    msg.heading = 0.657896539964;
    msg.data.assign("HWPFAOSSRDBUXPFVTJYWZWBWGAFGDFYLMQOIYCZXASCSPHIYRHDXATAHIHCUOCJEBEYZACFTPQLIXLWHPRYJHQSFTJBKMNANSUXMVO");

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
    msg.setTimeStamp(0.617638120734);
    msg.setSource(45632U);
    msg.setSourceEntity(153U);
    msg.setDestination(44715U);
    msg.setDestinationEntity(45U);
    msg.id.assign("BSARBIMLRKYWJXOUAPOAGAKJSVVZNDUHXEKCPSMQFTYYJQDMIWULABUSTZBPVNRMQRXTPXFRXPSMRLGNHTJDHFHYIKRCLQCTKCLRNFYGTXDMKUFZYUVNYSXFIWJJVZZEFOKXPDABSWEGOZATEZOLYWUTHTCQIWBHSPDCSCNCNOZAAGQLUHLRDHJBTUVLXFHZWUCPDYQNEOBQEECXIGIMKWVOGJIGGGZRMAYPD");
    msg.sensor_class.assign("SKIHPOQMBXFKUJFJQ");
    msg.lat = 0.275932369796;
    msg.lon = 0.119710863806;
    msg.alt = 0.159029536374;
    msg.heading = 0.145250308782;
    msg.data.assign("XYIKIAEOFFYCJFGCVTSRJYKBMXFEEKRITYMLUQDFOXACQNFFBNPROWVCRJSEBUIMUKQWENNRBQSNGDLVCEWSJVCZVJ");

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
    msg.setTimeStamp(0.425402862233);
    msg.setSource(10784U);
    msg.setSourceEntity(124U);
    msg.setDestination(1927U);
    msg.setDestinationEntity(10U);
    msg.id.assign("TMTGFKUYUBVAHIGTGDQDBQMLGTJHXTUQMHPJXIMACJNEEEBKVBZSEZYQFEYRURSZDTSHXJCOCDICXXNIYKLWAKVEVKSNPIHYOKTWAPXKVLUFGSOWOHSUCWIWDJYMRHWMPNCDPASBSRHHQLRBFZFLRFOFKPJWKVLRVVMTX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PJPHQOCHPWUQXVOGNKXBNGUTBCILMBHTJDLDNRAYNERHIMHNZKEXB");
    tmp_msg_0.feature_type = 86U;
    tmp_msg_0.rgb_red = 70U;
    tmp_msg_0.rgb_green = 107U;
    tmp_msg_0.rgb_blue = 78U;
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
    msg.setTimeStamp(0.447142093386);
    msg.setSource(59220U);
    msg.setSourceEntity(55U);
    msg.setDestination(40734U);
    msg.setDestinationEntity(250U);
    msg.id.assign("DKNPWURSVXLEMQIPAMUOSTDZAESLNBVMTHOHEJNERIDJCSVGWNTZXMUFQGBZDZFYIAZQJEYWLPXQQEHXIUBROKXUCKRKPIXEHWYYCEFGMVMJPCSWLTZKONURIYVAYOKVJFHMQDGKTFSSINMQVYDLBIWQSIHNML");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("TVFNPXRWCYNLHVGDBPOOEHNBLQCMIPFAEONWLSXTGBGAMEGRNOKGHXTPTLKACPIRDPVRXMWOUKBBWJWYFCSTSTZCFMMOLAHVDKISXKCFNVHFUJZBKWPSYDIRSYREIUABZJAEYRHNRRBIJXYOZQBGVXMEAOIQOPWTFVDCHQXYVFCVMQSTNCHYJQZXVZUGKEUE");
    tmp_msg_0.feature_type = 91U;
    tmp_msg_0.rgb_red = 176U;
    tmp_msg_0.rgb_green = 170U;
    tmp_msg_0.rgb_blue = 234U;
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
    msg.setTimeStamp(0.634487559467);
    msg.setSource(19555U);
    msg.setSourceEntity(188U);
    msg.setDestination(31611U);
    msg.setDestinationEntity(225U);
    msg.id.assign("SWZMBBKORGJNVCELZGBMZQSTVXMBXNFEAUWECZRCURLJJYUHXTJSWHJGYRXGTBLFWSPYDPNPXRGVLOSXBLAVPLQPZRYOVPYOVHUXFKVFTAWCIMAUTPBAHSQZINDYQLMKOHJDOMUQDUOQNGNTRS");

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
    msg.setTimeStamp(0.716547822237);
    msg.setSource(20605U);
    msg.setSourceEntity(189U);
    msg.setDestination(10362U);
    msg.setDestinationEntity(95U);
    msg.id.assign("JVFEMBUVVJSTKOPITZVVAWAUNNMZRGKCLKXZUFBLGOHSYEXEXKXUUETTMFRQQAQHYJAJJROSSANTNLVJNDWGKYA");
    msg.feature_type = 214U;
    msg.rgb_red = 236U;
    msg.rgb_green = 51U;
    msg.rgb_blue = 102U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.594249075393;
    tmp_msg_0.lon = 0.513832901401;
    tmp_msg_0.alt = 0.0401181789662;
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
    msg.setTimeStamp(0.0153560219769);
    msg.setSource(43308U);
    msg.setSourceEntity(253U);
    msg.setDestination(37558U);
    msg.setDestinationEntity(71U);
    msg.id.assign("EDDKXZXHEMEOWRIXMAJRLNOCNEDFEWTEJGEAPYTGICNXXPHNUHASL");
    msg.feature_type = 2U;
    msg.rgb_red = 162U;
    msg.rgb_green = 175U;
    msg.rgb_blue = 194U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.496779124415;
    tmp_msg_0.lon = 0.938098727707;
    tmp_msg_0.alt = 0.602752191082;
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
    msg.setTimeStamp(0.782564186314);
    msg.setSource(26106U);
    msg.setSourceEntity(47U);
    msg.setDestination(8450U);
    msg.setDestinationEntity(171U);
    msg.id.assign("QBPJSLKVRVQIPAADACLBKJXWOUHUFRBYHSWJPOSNYCXTIFDKTGSZRFOSHJWVXQSEUYFUMLRARXGRCKDQOXDRFIQBPDDFPAAWZKJRGVNWTTTCLILKEVNIZWE");
    msg.feature_type = 86U;
    msg.rgb_red = 49U;
    msg.rgb_green = 158U;
    msg.rgb_blue = 106U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.485185836142;
    tmp_msg_0.lon = 0.310251471662;
    tmp_msg_0.alt = 0.236702045954;
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
    msg.setTimeStamp(0.855290569928);
    msg.setSource(53788U);
    msg.setSourceEntity(239U);
    msg.setDestination(38443U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.511843426088;
    msg.lon = 0.200662418552;
    msg.alt = 0.578388903357;

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
    msg.setTimeStamp(0.702076144742);
    msg.setSource(42621U);
    msg.setSourceEntity(221U);
    msg.setDestination(39138U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.780331322147;
    msg.lon = 0.883545377359;
    msg.alt = 0.619890729968;

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
    msg.setTimeStamp(0.762814700442);
    msg.setSource(30362U);
    msg.setSourceEntity(33U);
    msg.setDestination(46652U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.697289194096;
    msg.lon = 0.145287428359;
    msg.alt = 0.597200663698;

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
    msg.setTimeStamp(0.550003460797);
    msg.setSource(51888U);
    msg.setSourceEntity(68U);
    msg.setDestination(39965U);
    msg.setDestinationEntity(253U);
    msg.type = 221U;
    msg.id.assign("KXYNSYMDQCFHZEXGWCFRLMRKSWXNUZUXHIOGMCBYGCAKPJRODZCSIUICPBOKPYFNDAXSMRZVFPELSHWTIWOVTEABISHKK");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.617452993071;
    tmp_msg_0.lon = 0.051315765358;
    tmp_msg_0.depth = 64U;
    tmp_msg_0.speed = 0.29403815454;
    tmp_msg_0.psi = 0.76843891801;
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
    msg.setTimeStamp(0.41893297909);
    msg.setSource(60355U);
    msg.setSourceEntity(120U);
    msg.setDestination(34266U);
    msg.setDestinationEntity(160U);
    msg.type = 1U;
    msg.id.assign("MTAKVZSUQZIJOGTJAIBKTWDKQJQBODADKHLTRHLJSRRMGQPEXZYGHHRBHFSKYNRJVLDYPMPXOIONQMHUOHFLUUBGDNCEBRVKGMUWMAOEQXWVZIWWPCFOMJTGIKEBCZZOWYIFFCEPCHDPUVVELDTCBZFENMRRLHOKEUTSDGDACYNTXWSOTGAXPNVZVEVLAURNQUSMLZIIBQXXLMCIJTXAB");
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.938952041087;
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
    msg.setTimeStamp(0.13501307434);
    msg.setSource(13661U);
    msg.setSourceEntity(173U);
    msg.setDestination(16559U);
    msg.setDestinationEntity(82U);
    msg.type = 199U;
    msg.id.assign("EJDMTPVYTCJMPKLIQQPIMVDFNTVNSVGBTHQESFXJCHIRXJHBHXKPFPHXIJLQIOQBBRFAWLAOYFDMHUUAGRHXFSRYKZ");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 12U;
    tmp_msg_0.value = 0.13450043689;
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
    msg.setTimeStamp(0.884852721538);
    msg.setSource(13210U);
    msg.setSourceEntity(5U);
    msg.setDestination(40823U);
    msg.setDestinationEntity(169U);
    msg.localname.assign("JATSVREGRASKYPQBBDJWSTFTMRSUFMXMTDBUWTUBIUIHOLHGDGMOMNBLZNDCYXJIXLSPAFYIZZVWZXMRMYDYWEOYHNYHJSQFOZFXKEDJHRCJVNNRPPAGZMLKKGWAAHXWDGLTEKFCERIL");

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
    msg.setTimeStamp(0.633820015845);
    msg.setSource(35255U);
    msg.setSourceEntity(146U);
    msg.setDestination(41978U);
    msg.setDestinationEntity(138U);
    msg.localname.assign("ICRBZFAVIPGXMFCDNIPMRTWTQPHVOBCMJNJFBAHMYLWCJDGLRVKWVLGXWAKAYKTHULCUDNTVMOYOIRQTXTRRSETEUNQGIDSKRBCPBGSSNSWKOGUAIPLAHHKBFLQSYWSSAOFIEATH");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DUCYGKSNBAJPCVLNEWUTLTFVIMCTTZHLURFOGHIOIDYOFXMBXMZWIIYBBXKRPDQAWXJXKSKSXXNBQFBLFLNCOPKJRLTTXPMIWMTMNFNOVAPEKTBVPSYGQVOLRGUHQMGPEKDPRBLZRDXDFJUAOZAMACLZKTCLJNFWHFRHZHHGKEWJQYIEJZZZFQYWKWOYWYJQCNSDVHOQSJAZYUEVRSUMEAIWIXQQGUJUDSANTUADCENCESYGHPPM");
    tmp_msg_0.sys_type = 126U;
    tmp_msg_0.owner = 41252U;
    tmp_msg_0.lat = 0.953316099264;
    tmp_msg_0.lon = 0.911021335383;
    tmp_msg_0.height = 0.0645808402557;
    tmp_msg_0.services.assign("HVTTFNNFYSEMXCKQSQAUXSLGJTCQJABRAVXWUGZGZCHMPDUWQZUGGKBDSTVLJVMXNKVZRWRYWIKHNISPZIOSHFQLMEEEPUSYECXDCJAYFGCHZAVYOTNMILUXBSIMOPGLJGNJDRLQFTYGBBAHVDLDEFKVAWGRBILNBEEUVRKCZPMQTRWYTNQOBJQXURDIJODTFRYPPOMVQMEPAYCHFIHDLLFOAZNFYWKPP");
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
    msg.setTimeStamp(0.484098256577);
    msg.setSource(10655U);
    msg.setSourceEntity(202U);
    msg.setDestination(19072U);
    msg.setDestinationEntity(93U);
    msg.localname.assign("KWCRYGDPZVNFUJJJKREPKTMXRGPWVAPMNSXFEFDBFPCKDVFKSHKQQAOTXWOCSMMRFZGHNPGBQHILWOYYCRVBEAOWCDXJCGVIQLWKONHROIID");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BKDEWWZORKBRWNTGQETNZZQYBRHMCJBCSJRJFUQVE");
    tmp_msg_0.sys_type = 149U;
    tmp_msg_0.owner = 1330U;
    tmp_msg_0.lat = 0.964852242314;
    tmp_msg_0.lon = 0.900912103014;
    tmp_msg_0.height = 0.82662016882;
    tmp_msg_0.services.assign("LEPDHCUICRFXGJSHTZMLAOAUOVPUCMTAARFWQXTWETIVYZLQYJIEXQYGOSZLVGOEUSUJCDHJTHRQYKYQPSIXBZWGIQOGWXVRTCSDKHSXVBPGKXMDNDAHFNNHVCBJFLUNURDLAQJEJLZIKTLRZIQKODMMUMXRQOWCGVNQVONDNMLBAOCKNFBTKEEYNACZUDZSWHWGZEURGPJZKLGXHYOYAYRKFASYCBITMBPWFJWPFBFKPS");
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
    msg.setTimeStamp(0.924031442299);
    msg.setSource(37492U);
    msg.setSourceEntity(222U);
    msg.setDestination(5027U);
    msg.setDestinationEntity(241U);
    msg.timeline.assign("THYCFQPFVHSZQVVKREYLYOWELCOLKAMYTFXMRFRLDJUWXPACJCWTVNLABZICSR");
    msg.predicate.assign("WKLWVYWUKTQIYRZLTODCGJBPAFDISXSWVDJTFREECSZRDUDNZNNRYHEAFBXUOHHNKTCQPKEGZBODYGJGSPCQVBZCSFUPIIQFXMSYGHLMFLRNKHJAQMVMCGQSAKIEREBAJWYUKBGMSJMGWVOICOKHKSZXLREGQRBXLTEIAMNZVIMTPTPXRAYVYMGENOKWI");
    msg.attributes.assign("GHCFDYDTJNDIINLZIXRPCFTGVOXABZUTLKKSSETWUBAOPYZVGJLTXADTTKV");

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
    msg.setTimeStamp(0.751503976877);
    msg.setSource(49316U);
    msg.setSourceEntity(54U);
    msg.setDestination(42586U);
    msg.setDestinationEntity(77U);
    msg.timeline.assign("VCGJYFLZOPQTXXPBHHZHNLKODYNSICVHMLAYQFYKFETUHLYJGRQOVFQFIIBFNFVMIRTGWAARAKMOCSKDXWLVAXXDYXXTARUDQMDZRUSTLEHUUOPAUJGBEENHKAHJRBTRZSWEJXWBRIGZKKQFDUSKPDPRWHYGCIHCIGOY");
    msg.predicate.assign("MSIRFGNJWPLMXZIEITQKCSNAFWQEHJXIJURGCKRLPEUQWXKSSYKDJBONMHAONBFTBNSCMFCMLBTDVCPVHYQYKKRTXHSKGZNXVTR");
    msg.attributes.assign("KXZRVPKECMTWFTGVCRUHMBXJJOSHSMYXRFJDSJFNZCZSQVRFKKNKUCGITZBUNGHSWBCFILDFHAFSONWHRBZZKEVQBEZDTWROCBHFQYITAKHNXJTEWJGOZPITMBEXJJMCOLVLVIQQZMSYEUOYGBCVKPOHYUGEFCPKPISEUENKPFAOPVBIJLDRTDQWYIQOHLGAVWATPWNQIRWEGXDANDHYRMAYSQADVZULGLNGOACIRMMLLTUMULXWXUBPNPAYJQ");

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
    msg.setTimeStamp(0.821217496943);
    msg.setSource(30383U);
    msg.setSourceEntity(186U);
    msg.setDestination(50182U);
    msg.setDestinationEntity(197U);
    msg.timeline.assign("LRVIDMMHEQKXQMOHGHYBICLYASHCDRSHMDZCDXTGAWJFPKPTOTIXMHETJPVLUNJOHPLJGONWFAKAYUAVQEEKBRNDBUXXOUFWMCXOURGPSHEEXRWLPVFAVODGZLRGRVTKTSWICBYFRYTJFJZQUQZUXDNOPIRLEKUVEVKBWKPCENBYCQIAGGJZUMVSASTHDNRGNQSNKWCMQWVEBMAPQZJZLHYMAXNYZOCBLYUXWDJFBD");
    msg.predicate.assign("GBNCHNHGYRFWYXZBDXLJLHZIXFAQRCXXKQJMUKJEVJFZAQSYWCZPQKSLELACBQPBVDIOFUISOGGIAFYMLTVLKOHYYMXIUW");
    msg.attributes.assign("MQIMYYUKVPAXDHVQVTYNCSBQYLOGKAGJPRQUEMPYHNUOQDKMZZYJQJLLOUIXHHSIGDYPVBADBWONAEWNOBVAJHRFDXZYTMUKNLPLWSAXTJIFRCLCHQDZHTRFTBVHGFGVIRXSBPGRCLQVZLWSDOBCKZGDJVJXYY");

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
    msg.setTimeStamp(0.0639417897066);
    msg.setSource(34230U);
    msg.setSourceEntity(204U);
    msg.setDestination(30176U);
    msg.setDestinationEntity(65U);
    msg.command = 137U;
    msg.goal_id.assign("XUDMKLPMPKUMZSGBMSSHQCQLAJFAEIRVTWWGOQOVKIGMEEEYWNYFXLYARDFEEWMQRCNWILJZYVTVLHWCEIRTSNPGIXOTHAIBAJKCCTLCDOTZLONRGCHNZSJRYBXEUSEABYMDVYNJJBPFNSPYPYXJLFHIFRJACTKZVVHKQDWFSQHWOKIYNXDMXUTGGUOWIJWIOMCBNLZBTROUOCAZZZBPUDXXJVDDHLKKQQ");
    msg.goal_xml.assign("AHWFUQTUTSNOTUA");

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
    msg.setTimeStamp(0.829534190242);
    msg.setSource(27456U);
    msg.setSourceEntity(243U);
    msg.setDestination(50958U);
    msg.setDestinationEntity(32U);
    msg.command = 217U;
    msg.goal_id.assign("JGWLTWBHUQADMKYOMKDDRHLXQVQPRTZKPRVNVZAXEFYEDQZPLXNTIOYVUNCZHXLVJVQOFEJCTXJCHAAFAYRGNCYCNEOYDMUEXYUIKNSTTEWFGBCJOHRRCFZEFEBBQHQIGNBKMSZPGDPSDOSSLWILMZRPDOSYFUXKCEULWAPKFFAITSSMOKBAZOWKNNVPUSBJZVRT");
    msg.goal_xml.assign("YSSXOGXMLKLJORTMMWLSFWCPEJUKDSQORDVSLUUXBINZIHCPIOJETHPSFPONWOQOXDEANYAGJQHQHCMPJYECULJAKPYQGQBASUDJQYXFVXRMFRIEGUCXOKABKFRPCCBVFPDEYZQUGGVXNTCTTDDZWYILFFZRZWSKHWKVDFAONHMQMCVIMHYNWHFEHBIMNAZIYDEMWSNOILGQZGTLIZYBEWX");

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
    msg.setTimeStamp(0.278189307757);
    msg.setSource(60721U);
    msg.setSourceEntity(238U);
    msg.setDestination(49289U);
    msg.setDestinationEntity(44U);
    msg.command = 120U;
    msg.goal_id.assign("DJIJXXRUIQODHXWNORKVTCAIINAWZGJHMCPHIEQKDBQBFPSIDJNCHVZXHGTZBSJEWSVVRFBTEGDMHNJKKZLARFPGCRNEGVGANOAFFHUCYYWPDPKMKAGFEESWZLDSABTEXOXUSMBZLTVPXOVYEHVWLYQXUFQHGOKDAZCUQ");
    msg.goal_xml.assign("KOGPIUYZWQAZTEJSNZBEOQZVZGBIMBFZIAFDUXDLRXAKDLLKTVEVIFOEMLSSYWJLVMKSXIDPSOPIYWRLAIRUAEJFWETUSIPVFYFFRNMXVERQRKITMSVAJQCJNDGHPQXUKOCYVK");

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
    msg.setTimeStamp(0.56059733057);
    msg.setSource(35215U);
    msg.setSourceEntity(127U);
    msg.setDestination(21875U);
    msg.setDestinationEntity(142U);
    msg.op = 99U;
    msg.goal_id.assign("WONAPVGNUBDELZESZMNWXUSKFSXZYKNXIMTLHDNFJEHDRMSKAVNLGGANQWFWCEBYJDIAYIKKVHFOAQUILUJSPGIQVBCOVXJYKVLEYZWGGLTAZYDRJDZZAKHRPHHLICAXEGROBUFBOEETMUTIULHJTYQWFXGBWMSYOQMXDCJQQJSXODJZARNNTPZHSWOPITRKBHHQTBLOBKGPOSPNQCPYJPCFMMRUXPTDCFWVAFTVBSWURKQVECLRCVFIUYMZX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FQXTECDWQOSIURNPYVNKXLGIUQGDXQFSPRABYBTZZXWFCLMYWHIJKRUOASVCEDBQLKYKRPSFJBPXOPNKGRYGWRWLXGZRUGNWISPHMQYZMZNJEFVDOZJVKAODYOTDEEVONTEIYMSUOUSCRWLQMAMLCETKPFXZHUFUKUTFVMBEZJARWDHHMHCOHBHBODGFJRYCV");
    tmp_msg_0.predicate.assign("RAIRKEKUIFDZWUYXQPCTCHLFLICYAKLSXVNXNRDNWYOVGMLYIFDKBSVQGCQZTMPYSJGKANNOTHJIECGKQUIXIMEOCEVBSMWRHQNRFFCLDMOVTEQFOERUGJHPPACWABSALHYRSDMJEGQMBGX");
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
    msg.setTimeStamp(0.399839686718);
    msg.setSource(747U);
    msg.setSourceEntity(235U);
    msg.setDestination(4769U);
    msg.setDestinationEntity(214U);
    msg.op = 91U;
    msg.goal_id.assign("AEKCQMZBZOBXCJWMMCEVRRVENLLSYTRPIKMLRWPNJCSLBIHGBCUSUYIFHMHNYBMJROPJEYETFDKKJUDBAVGHVKPCKYCMQJDGURJFSGGDKRAYQDWOWZQEEHSWONVDQLQNIDYRAVRBKXIXSQITXPHEGJEFHTWAOOWBKANPUMCCULZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XBVSXJHZYWJLGIWDRKVUT");
    tmp_msg_0.predicate.assign("BEHVZFBMANOHTQMXEGDNRRETEXHQUXGFSLYVOHEIZJNGORNWJIWDJAGMVDCQFYINPKUGLUHLKOPNOKVJFAWPDRNISJJBXKTZDXCVZPRDOIEVJAWODRQYNAYZWWALSXNNJPIVWHMQIMLSYBBZGWLAPDRUPLLQMXXVXKGOTFEKSYRYKVZHAUWQMWKIXSBEKJHZRAGSKPDZEMPCTSUQTFLTCGBUTCFTTUSQJVHPIBFRFSC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NFLGCQJVFBCEKMZIIVKJWVRSHMPCLXASTVLOBNVAEHQNZGESBZFVIZQUEKOAUAWQTZGSQFLUDOMRYIMBE");
    tmp_tmp_msg_0_0.attr_type = 209U;
    tmp_tmp_msg_0_0.min.assign("YUZJTPJVNUFJVLJGCGFSXGHJEDCAHTFXSSIYBBDHXOMWWQGIOBSRMERTIAXMNQAKIRZKSPTORJWFHZDYMCTEFMNNWWUMHPRQFLUWVYFYZOAYJCUGXGBELPKABXRANSXOVULQAKVQMRHYBZC");
    tmp_tmp_msg_0_0.max.assign("GYAKHIEZWXFPLASNYJYQUCOAAXIONCMPKYKAZXLTIFDIVCSWBAVWGUHSGXEEGCPSUYVWRBDKHLYVJNOSVUHOLCSPRGPEUGQTMWKOKXVWFXDUMXDUNXUBJQDQLFMJUNDITFCOVFEJBLFFPYYQIZHHNTBVQTMRUTADOGJYXLMOQQJKLIWJZKGBRZBPTGTNTYIMWJVSAFEPDLHRDEIAVSROFQEDKPBNIATNXHZBOE");
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
    msg.setTimeStamp(0.0574139514328);
    msg.setSource(46878U);
    msg.setSourceEntity(76U);
    msg.setDestination(26084U);
    msg.setDestinationEntity(14U);
    msg.op = 216U;
    msg.goal_id.assign("QFUCKXGRIBWUCQEYVMHIUQHRTTJCKAKGFHOJSPPOINBINVUMFVGZSNHPEQWLQAKLCOHNCJFBYRBPZSXPRDWJOW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OVORCKTXVEYDILEYFPOJQWALTNTRNBUTFTBCROANWIHQNKSIFZRLBEQYUJSOBBCNPAKJPLXEZUHCLXHTAMZ");
    tmp_msg_0.predicate.assign("LQVHFTBYDNPKPCFDKYGRFOBRTKBGCXUEXRYIFOVSYVLIZAVTFUQQCXWHLSEKGLJRPEREHDBNUHXDGXTQYP");
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
    msg.setTimeStamp(0.93137212157);
    msg.setSource(45554U);
    msg.setSourceEntity(209U);
    msg.setDestination(38073U);
    msg.setDestinationEntity(19U);
    msg.name.assign("RCAPFMPMEVFCHBXTSOTIMUJOKWOCTISOZMUFXWRY");
    msg.attr_type = 198U;
    msg.min.assign("HSOSUQCVGEJFKKZDTZBHJGEAIPILOCSWTPUYSODRHYWDHRUXRUVNHGPBOUQGZYZKTOSPWRCPW");
    msg.max.assign("JPAUTVCGXYSAOFPNMCTVGHCJTIVLXETNPGPTNBVMFDJVEEIIBYMDYUSRKYATYFBSQLBHEOFPNNILNIRRJKHZBNHYDCRMPBOZEWOKDVAAEZORSVOMMPWNQAKLIZOUSCKBRNHUYQCTIUQQYSCDUZGFPDSWRZTBBJAKWWXLLOQZTWIWFLXGMDGYDZHXUUAXUSRKRGFPZDVMXPJVJQIAJCKGJHKGWSLHQZXARQNEO");

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
    msg.setTimeStamp(0.717773597665);
    msg.setSource(64759U);
    msg.setSourceEntity(195U);
    msg.setDestination(38915U);
    msg.setDestinationEntity(6U);
    msg.name.assign("HNCCAZXTMFHZIOGKDLEXMLCJCSNSALDNEGUDWKVQSJBSPMFERTXCGXBAUBRYTRDXWHOHZRUQOYLWKNETOGKDEPHBRMYKJCLWAFIAJOOKMUGSQJNDXTNQNITICQVBB");
    msg.attr_type = 242U;
    msg.min.assign("DKUUOQVCYWTGCUDYFBYQDJMBWZYNYBTELQUHWMZNOQMCQCAERAHKSNKJDUPOTFAZZUHQXLFOZIIVIYUWCLTLIMCSJSZSOWJAOQZLAENWQERCVNQPMLMGFHGRMUPNBNLBKYTHISDIVXRWDNILSXLPPDMXZKCXMFOXZHEXSHPVEGLRBZJVJQMKRXIIPBGWGFJHGFRFYEAEJAHHEKARGABKCSPAXEJYOKPVORTXURTUBPBGK");
    msg.max.assign("KNQHFAYCWVKFNSGJRSKAWDDIOAILLQPNOHYAHUNPBYPJIVFGANHUKKRSXYFZORYWKLJGMVPPPJQSTZGMDCLIEAXQIHZPQABOVNWYBHSXBJRU");

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
    msg.setTimeStamp(0.321205642204);
    msg.setSource(51313U);
    msg.setSourceEntity(184U);
    msg.setDestination(40380U);
    msg.setDestinationEntity(179U);
    msg.name.assign("TSBKURGDDLQRTPZLBOMLOISZDDQKNXJNCGFFEMCCQWUMXUAUELPSCQAWKODRLEHQYWMXGEEJUZPNXIFZLSNTHPJUPHYIGVWJMAXFNNKPIIZYNGHSFQVIGRYHUNTMVDXSTLXUWTJGOCBAIUEMSBMFVOWQHYQGWCIFCYDBXAPAAIKCLKXYVMQJROFGVSVEZFHEV");
    msg.attr_type = 242U;
    msg.min.assign("VLFNEHSMPETWRSQZUWODAVAIWJSNGRGZOLZIWAMOQMGLHCETAKYOXVFJCEXKXBKUHRXIBNJCYZTGIQWKAIDXLXDTQFLDUBUGEXBYFAUIPSBQJGKDWQPYBPMDOONOVAGLNEKSLVCMRPTGFZZPR");
    msg.max.assign("NYEYZOGUIDLDDFQTVHEVVGTCKIJVOXSSHHBOJXOJLZLJFXBANGIHPLZGESKQHXWPNWVOEINFFXIYPNPXFTDWJPALSLUQKWRWKZRAWLTBQX");

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
    msg.setTimeStamp(0.170051890241);
    msg.setSource(44570U);
    msg.setSourceEntity(190U);
    msg.setDestination(41525U);
    msg.setDestinationEntity(210U);
    msg.timeline.assign("BDUPENONCMTO");
    msg.predicate.assign("HZKNOYIPVNEAIIOSSOJOWBWMHDXUNQWQRUTDKBSMLADGJODVQQXDELPQCBEYYRBOVFNEQJMUCGPWQGHTBZLHXPC");

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
    msg.setTimeStamp(0.895534458747);
    msg.setSource(54370U);
    msg.setSourceEntity(40U);
    msg.setDestination(52219U);
    msg.setDestinationEntity(6U);
    msg.timeline.assign("ZIKCKFAAAERQMHJQEZEECLLUYKTBRXZZPUODSCFOIDSLMIVFWWHKSROWJRNXNXRXVQOFZMDFNQAGLMXQMGLWJTWRTZLBZCHLGGAAAXIEDKZEDGTYIMLMUDOQBGPASPOPGD");
    msg.predicate.assign("DLYLGNOIJSKWDLHNEGTHWTIBKJVQUAMLCMUXNGTDSUYEDGRNCBCFLNWZQBMYNSSXIQQLNAFBIJZXJLBVNLMKTLICOQGFYZZEYIYCZTJZQPKWQBUEIKAWF");

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
    msg.setTimeStamp(0.716218972457);
    msg.setSource(10506U);
    msg.setSourceEntity(153U);
    msg.setDestination(21781U);
    msg.setDestinationEntity(197U);
    msg.timeline.assign("PKIEKTBFFNIIOPCBFYLCPSZWJWXQDYEJIFGMJZDXAKQAILEUMLSVYCCYKLUBKQRVLHBMMGLFONYZMLKBMOSXVCXWQNCUPNKGTEQDTXONDUDHYEDQSJBFDEDPXACTZFAOLBYVGPRWXWGMUTAGBYQZGRJCEORTERANJXWUVYLZCZLSPNKJPIRNPWHHWHOUTSWUKFMAEVZOIRWONIJIXPVSAHGVBMQTIRKDTGZCXHSERJMQRHGUV");
    msg.predicate.assign("JNTEHUQAQAQNSWRWPSIQAOEGFGFBOOZABYJGILZNXNCLGJWZPLKUMKHRFAORLDKCOJFSWPSNBUDTZTDGYETX");

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
    msg.setTimeStamp(0.320577121556);
    msg.setSource(10758U);
    msg.setSourceEntity(28U);
    msg.setDestination(15243U);
    msg.setDestinationEntity(110U);
    msg.reactor.assign("BFPOIARSFUIRLEIJXXFBRWOQVARVBZOAOSJFVYHHCETASOJYTHOZXKNSLMYFNOQQJIRGCPMALGNKODKXJPPHGBMZESBUPWBHRYUTDWKRDQUEEDQQIMNBTSSZNHAUWVTWHIDTWZQKMAELACPUDXOYRRAQKXTEVZCLHSFDZKCLPJELJFVXQVBUSGZDGBFYCUWXA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KPELNENBSJPIJETFCWNMZGUBXLVNYCOUJQILFBDUKZXRFEGTERQEXWFZAHMOEGJCXMAYWUGAQBAHYDSEGZQ");
    tmp_msg_0.predicate.assign("OXJDJJEWIHNBYPGTFUGUETULDYROPYUHTZQQCUJCNRHWNKSMRSAZYMMGMQMPKLRAOUUYSPWYZJFFIFVIBPCMCGVVKTPADWSHGNIHVAILAEVZALIRVJNHVWYBRAVSXXOXUWJPBBQDKOJNLICMTNOINEKJCKWBUKICTSBTRGHLBLDHLEQMXLTZYZOUQDFCBGBGEACFRVEOASXSFXZQAJRNPXMHYIDYGSOEFKDDEHWZVTQQFPCKLZFDXEKTNW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DQIMLAXVGPUZEGPTOVXTYKGDCQALVJJXSWTENBCVOBJZRDMEUZSOLHKUNOTRIVGDSWALFQPVHVHSEHPTQPRUAOAWSNWTSCLZSLROBTVKSZIFTWFEEBFPGHBWHMUYTZX");
    tmp_tmp_msg_0_0.attr_type = 148U;
    tmp_tmp_msg_0_0.min.assign("UQHTFPCTHHRYTLSOXVZHQXCHYWJNXGYWPMLJSKLXDBBMNOSJGRPQYSKRFIFYUNELEMYEDFKOAOTRCDMAZCLFVVBFOWVYDCYGJIXUBWBGIKBNSEIGQPVHKSPDFULINYEVDQDUXIHBOFZOUKWUJQLAWAKWECJOJXGSJTEBHQDDUNFEBSSRNPUNSMNXHIKPAZWVZZMQGRXRLVPTCPXIGOICATEHCMZ");
    tmp_tmp_msg_0_0.max.assign("HGIJFNELCLRTQGKNWCVBARYPZANOKNECMTPYFPDPCJEKEFMHPZDVAKWXJXLCDZQBIYUVCUQZBJLASDTIEMLKIDEZRORKVDKDZMORGWH");
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
    msg.setTimeStamp(0.761364266162);
    msg.setSource(42055U);
    msg.setSourceEntity(180U);
    msg.setDestination(44632U);
    msg.setDestinationEntity(52U);
    msg.reactor.assign("XVXDPYVMXLSASDGAVRVILWADUXKUAZENSFQPQRIZSOWQDDBCQPPJYQMSFPTEVRZXZLHMJFKSWRCFTTGEYKWNZNNVWBMWGYHJAVQALGBCGCUXUOZUNQANOGHGMJCMEMBYRDKDUISBQHNJAFQLHEYOBVKMCJCLYRWUBWAPITSUKGHPYOLETPOKTXJZPICDKIZFWZLPCFRISJEHHXXIRYOJLCFHGIWOOJFDDKUTXTNRIBYZERQEKVNVAONBSEFTT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BYNIMOBZWMRPEEQXFKEVEGUGDDZYUKFKCRUSRNHIFRFTUVQYXXHULJCVDNYZMJOMRAGOIYPQEEOSNWIWLZNPXPMRURRXJWHAUVVKGFBQWIPZSLPCAZMJKXHTYODSAAKHRWPGYDJHQDHOTZVBYUQVJE");
    tmp_msg_0.predicate.assign("ADHOXGYAMLCTWISPBGASGDZUVVRCXIYRVJYMAKKLBWVFPDMHWXATMVTJIWSSJMGYIRSOLJBQTEPDKCJZOQNTCMXEQADPCCTIK");
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
    msg.setTimeStamp(0.353215544789);
    msg.setSource(18408U);
    msg.setSourceEntity(229U);
    msg.setDestination(51448U);
    msg.setDestinationEntity(57U);
    msg.reactor.assign("MKOIWFGPMTWXOXCKGJKDAYHAUZBUPFFMWXLMCSIRVHVGFZJNLUVQHNZOGOADZWUBTQKRUAJWQMPFNPFLTRYRNMTSQCVTYUPSSXQPEYRKBZTZDHLWBZYELBBDHJZLFSDEQYGQ");

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
    msg.setTimeStamp(0.304998883318);
    msg.setSource(11125U);
    msg.setSourceEntity(92U);
    msg.setDestination(52282U);
    msg.setDestinationEntity(253U);
    msg.topic.assign("HMOITGTQZLCCPVSBOMYMOUVNRROBMOBVIQMBUJFNYJZELBQYFFNZHPFGEPAGFVUKJEZURLWHRYTWGONMXSMTDKSHIFIKGPSORCYYJNCSEEPTXAOLEKMWZXUTOQSGVNESVXNJDXPTEMPYWLIAWWISCAWSHZSGBZXXXDLYADRCAPGCUADMKKABICYKH");
    msg.data.assign("PRZGGNVUXSMSPSDTTIMTAHNSEFLCEXWNUADTIFAOFTIRGCTJESXVVUVHIWMKKCOWUAIOSNQYJMAKGSAFJARVLXQWVDGBOZBIUBDGEMWFVJLOUKECWDFREODCYAOXPUQQJXMPYHLDBHBZYILPJSZDWDPPOTREYSNRFZOBBHMXLJLNEZZUFJIQHBHIFDUXMVTKNJZOKYV");

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
    msg.setTimeStamp(0.334360169417);
    msg.setSource(43804U);
    msg.setSourceEntity(225U);
    msg.setDestination(27986U);
    msg.setDestinationEntity(144U);
    msg.topic.assign("TYCXAFLRCVJUOMPEVTYRAVRCLCNFXDZAEFVUUFKZGPJWNLZCPIKKEOYSHKTTOGFTVAWQIAMZURLBQGYSOJBOQDGLGABZHXWOSFIUCD");
    msg.data.assign("ESUGTGNVQLOWFTHAZJTKFPZGHODPTQ");

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
    msg.setTimeStamp(0.58164750499);
    msg.setSource(21833U);
    msg.setSourceEntity(105U);
    msg.setDestination(41931U);
    msg.setDestinationEntity(61U);
    msg.topic.assign("RJVBMAMMFAXMFVJLXLGIFSLFDTHHTOUPQUGGDJCKNSHIZTAZDVMUVETXKBYLHVZDUKOPLPHQDNTZEKPXAEBUDWAPKTYRKJMXUWCNJIOMSWGSJILNYMQROYOQIUNPKYGJXEFUJKYETXJTPZBLPSZLROIBUWXFNPPWBKQCOGNSCYHVEQOGHXSCQFCJEAIDDIRGWGGZVMRBM");
    msg.data.assign("YAFPXDNDEZAMLVNAGWZPRJIDEL");

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
    msg.setTimeStamp(0.784704739922);
    msg.setSource(17682U);
    msg.setSourceEntity(8U);
    msg.setDestination(49760U);
    msg.setDestinationEntity(171U);
    msg.frameid = 26U;
    const char tmp_msg_0[] = {82, -80, 35, -27, 72, -9, -31, -86, -66, 105, 37, -63, 8, -51, -120, 60, 26, 122, 36, -102, 80, 54, 90, 113, -123, -74, 90, 108, 96, -14, -49, -107, -58, 15, 27, 53, 121, 8, -4, -15, 51, 18, 13, 83, 57, -13, -112, -77, -41, -28, 20, -8, -37, 40, -80, -126, 43, 118, 7, 102, 83, -58, -51, 22, -2, -43, 29, 88, 120, -126, -42, 33, -43, -9, 104, 98, 95, -31, 42, -56, -35, 103, 16, -68, -86, -124, -20, -115, -87, -29, -54, -87, -18, 47, -95, 105, 24, -32, -87, -74, 78, 71, -100, 17, 40, -114, -43, 36, 119, -56, -123, -24, -94, -98, -108, 94, -113, -119, -8, 30, -125, 61, -126, 38, 77, 112, 81, -61, -4, -84, 92, -18, 63, -12, -103, 3, -68, -7, 117, 79, -74, 41, -121, 46, -6, 31, -20, 73, -41, -40, 75, -49, 36, 78, 45, -123, 43, 119, -9, -93, 75, 125, -78, 125, -2, -89, 72, -20, -91, 48, 106, 33, -68, 116, 76, -115, 98, -52, -67, -3, -41, -105, 109, 89, 19, 67, -98, 63, 62, -12, -3, -84, -114, 24, -125, -24, 96, -79, -35, -9, -77, 15, -63, -48, -63, 68, -18, 91, 78, 8, -19, -61, -102, 99, -13, 119, -102, -118, 9, -106, -72, 102, 74, -50, -16, 84, -60, -26, 10, 87, 11, -41, 83, -81, 30, 33, 24, -99, 122, -60, -28, -81, 88, -82, 34, 74, 34, 21, 124, -113, 25, 80, -21};
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
    msg.setTimeStamp(0.179414616562);
    msg.setSource(33628U);
    msg.setSourceEntity(140U);
    msg.setDestination(20227U);
    msg.setDestinationEntity(221U);
    msg.frameid = 96U;
    const char tmp_msg_0[] = {27, -93, -20, -61, -125, 67, -73, -50, -60, 0, 2, -90, 100, 16, -45, -1, 120, 73, 37, -97, -89, -81, -71, -103, 52, 79, 80, -125, -17, -58, -69, 88, 48, 25, -12, -84, -75, -5, 45, 66, 94, -89, -75, 118, 71, -28, 118, 24, -94, -68, 62, 123};
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
    msg.setTimeStamp(0.780613741626);
    msg.setSource(11538U);
    msg.setSourceEntity(236U);
    msg.setDestination(9463U);
    msg.setDestinationEntity(125U);
    msg.frameid = 213U;
    const char tmp_msg_0[] = {89, 75, 8, -120, -65, 104, -50, -88, -17, 87, 50, 58, -11, -10, 111, -72, 94, -22, -93, 47, -7, -117, -112, -68, 59, 22, 76, -93, 44, -89, -98, -82, -104, -72, 123, 61, -77, 43, 28, -19, -34, -73, 39};
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
    msg.setTimeStamp(0.137893941969);
    msg.setSource(6884U);
    msg.setSourceEntity(245U);
    msg.setDestination(64941U);
    msg.setDestinationEntity(190U);
    msg.fps = 49U;
    msg.quality = 212U;
    msg.reps = 83U;
    msg.tsize = 89U;

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
    msg.setTimeStamp(0.305364667271);
    msg.setSource(47041U);
    msg.setSourceEntity(20U);
    msg.setDestination(42181U);
    msg.setDestinationEntity(133U);
    msg.fps = 247U;
    msg.quality = 241U;
    msg.reps = 236U;
    msg.tsize = 33U;

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
    msg.setTimeStamp(0.4056588038);
    msg.setSource(42180U);
    msg.setSourceEntity(58U);
    msg.setDestination(63769U);
    msg.setDestinationEntity(76U);
    msg.fps = 77U;
    msg.quality = 223U;
    msg.reps = 191U;
    msg.tsize = 146U;

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
    msg.setTimeStamp(0.732732980584);
    msg.setSource(2145U);
    msg.setSourceEntity(143U);
    msg.setDestination(1067U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.0557020743546;
    msg.lon = 0.186177679065;
    msg.depth = 177U;
    msg.speed = 0.796541521903;
    msg.psi = 0.856416302988;

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
    msg.setTimeStamp(0.984972608172);
    msg.setSource(26412U);
    msg.setSourceEntity(156U);
    msg.setDestination(19458U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.885636228015;
    msg.lon = 0.146348055361;
    msg.depth = 183U;
    msg.speed = 0.405037067298;
    msg.psi = 0.743209217542;

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
    msg.setTimeStamp(0.48378016983);
    msg.setSource(7836U);
    msg.setSourceEntity(187U);
    msg.setDestination(31579U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.289134883012;
    msg.lon = 0.681823395588;
    msg.depth = 44U;
    msg.speed = 0.385485674422;
    msg.psi = 0.558546496456;

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
    msg.setTimeStamp(0.391144618435);
    msg.setSource(58947U);
    msg.setSourceEntity(189U);
    msg.setDestination(36268U);
    msg.setDestinationEntity(135U);
    msg.label.assign("PHTNHLJXZMEHMRRHIYTKOZRXFOPSBGWVLGETUXJPSZIOTSIOVRGYWEAJLAQIDWANVWHQCXRKLSOKKJLGXMIHJDLNEYQCEFQTMQPVRVACJNBZLFCWYECWTCYDMGRPFMBBWYNSHPYSWNUAETCHZNQ");
    msg.lat = 0.430652220717;
    msg.lon = 0.505283708338;
    msg.z = 0.745432993534;
    msg.z_units = 136U;
    msg.cog = 0.0975527321498;
    msg.sog = 0.022870892193;

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
    msg.setTimeStamp(0.647865211097);
    msg.setSource(7261U);
    msg.setSourceEntity(79U);
    msg.setDestination(56197U);
    msg.setDestinationEntity(151U);
    msg.label.assign("OVXEDTXZWBSNERFQJQCEQFWXJYAOHKPPNVYUZJTXVVZZITZHGBYIGBSYDKKMAIKHPXRFXPLVSMFRUEMRYGHLZNXUQSNAWHMBWJIIXBDGBVCLIKYVPELUIUUCFOSEEVQDBQQQFBPAGZTBAUFJFOWWTSORGTELGMDZHGJNWLJYLPLLEPINJS");
    msg.lat = 0.0336191362683;
    msg.lon = 0.389687496939;
    msg.z = 0.99403694042;
    msg.z_units = 202U;
    msg.cog = 0.613973223742;
    msg.sog = 0.0260626913775;

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
    msg.setTimeStamp(0.506992448733);
    msg.setSource(56425U);
    msg.setSourceEntity(104U);
    msg.setDestination(64733U);
    msg.setDestinationEntity(32U);
    msg.label.assign("SQQUOMUBNNXMYHJSHQPGPCZLMZKSAPKAEEAIUNVXOTFJFGINSDHDYXAWWJLRBQVFMIZDKZSYDACCPILWFVEIARFUVYWFWQRFPLFWYBTTCVOTCMCEKYOYNJATWQKSRTRNESBGPWROWVGTAMCNVMVVIZUGVZMGROXXCHKNURUPYEYHOLDEOBWJLGRIJ");
    msg.lat = 0.739559217116;
    msg.lon = 0.627893037878;
    msg.z = 0.789857334748;
    msg.z_units = 162U;
    msg.cog = 0.700843677462;
    msg.sog = 0.274422121242;

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
    msg.setTimeStamp(0.381711328217);
    msg.setSource(43710U);
    msg.setSourceEntity(143U);
    msg.setDestination(4157U);
    msg.setDestinationEntity(62U);
    msg.name.assign("YLNYNFFTXPZUNSRWUYXAZGUIAGHJGRCVJUIMHZLCHCDIQBLWYQAORHOEKUKHTPWFKUBOKLAMZSBQMDHDESJCNLDJCBLXWGNOTDOMJUQXALHWHAIONOQWTVWBIRLPFFMQATREUEDIJASOFZNVCYPGZMREGXTQXVGQMZSRBKWGDXAKVIPAPEIKFLKXBIC");
    msg.value.assign("GKJVQBJOIDFLGOTEMANABEWVRYKQMBRMNGFIPBFPPCDSPKFWGSQBXVADIXRRADMFRYLECSEJZFLALFUUUQGQJZWLNGZPHWWIVMHIZUDHXGOYSQTPIXIMZZTHHYHGVJVHOCQMWWBPETELPEGEOCHUOPXMSYLYOCWZALTTCNTIUVXMJBQUDLNKJUHJJTRJXMX");

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
    msg.setTimeStamp(0.704711479195);
    msg.setSource(38232U);
    msg.setSourceEntity(99U);
    msg.setDestination(64774U);
    msg.setDestinationEntity(217U);
    msg.name.assign("WHVQYXXBGRYRTGQQCGDZMWZJDXKXEVZKZZTWBBUPFFFYODXVADMIFCHMZAOYYWLDPLQETPXHSIGFZUEUJTGRLCBP");
    msg.value.assign("ZLITQPBVBTFRLVLVYONGOQDZNJFXHMXNPTITAZCZUKPPWKKUUWWERKCYNYYODI");

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
    msg.setTimeStamp(0.207583488496);
    msg.setSource(14186U);
    msg.setSourceEntity(110U);
    msg.setDestination(18975U);
    msg.setDestinationEntity(199U);
    msg.name.assign("PXPJXLMYVVXDMNPPQEIPUKEBJPHORGVDRITCUCVAEWGYUWNZIQTYDIBKYCHJTMCLYNICVTFELAAYFZTAZXSWUSSAZTDJUZJVIHCGASWRVRDXHZGBETYMUWDNAFBHWJZNWKK");
    msg.value.assign("UALJNWEMLOITGDCWQPYDLFLSCDRHSHUOXLLZWXMJHCRTNQVXDXCJRNGKGTMVXHHYYGSAKHTTYOBWRPDCZBJGCVUJFAUHRSUFOCIKSHBKDGCIUWMUEZXVBLGYMVWAYY");

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
    msg.setTimeStamp(0.278992652944);
    msg.setSource(16236U);
    msg.setSourceEntity(198U);
    msg.setDestination(4318U);
    msg.setDestinationEntity(6U);
    msg.name.assign("OAUNGHNDBNCYEDTQYRHACQRCSLPGRBLQOXXJYXBIWREMNNVDXKPSAVPWIEVMIZXUAJWOGNCHZMFYHFKHSBJICRBFOJFCUPCGOKADKXUUREICXXTEZBVHPPZPOCYQLTQHCWYERQZWVUZJMIIMEMLQNSFISVOWKWNUWVBAVZFGTRKUJBSYJSQYLO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KJTJQCUIZAWSGHXDZQOWPQCEKZDUWBPEGTIJOFZRUAOYPAYUNQMPIKEXUGDNYLJYDLVBECMYHTUVZCTDNBJMKLWQCBSWARWSRXZHAAPDCHOMNSKSJOOLKPPJSVBQTPSQMMKLFWOBVCUJICDXSCKVMALUGBFZIUTT");
    tmp_msg_0.value.assign("RYYLIPKDUERSBITKQFUQRPMCEBOFMDJETJXNGEKUUTFVDOWTZAYVANSWJGBWNXOYZVXJINJBGYJOYHFHTOMBCKSLIZFLBQIDGKHEDZKCNSAXYQYKGAPZMASGQLXRRAHTMDLQJLCMQQNPQEBVPLVJZHHDXCWITLMGVSZ");
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
    msg.setTimeStamp(0.576006762779);
    msg.setSource(1254U);
    msg.setSourceEntity(175U);
    msg.setDestination(61478U);
    msg.setDestinationEntity(241U);
    msg.name.assign("TWLCWQNSXEYQIDTHSTUCFKMEZZGBDREXUSFRTAOCBXFEQOUIMRZEVFHDKKXXMGVRVBIOYWGANGFJUIKQKGEITJ");

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
    msg.setTimeStamp(0.472446855759);
    msg.setSource(7383U);
    msg.setSourceEntity(134U);
    msg.setDestination(20632U);
    msg.setDestinationEntity(157U);
    msg.name.assign("BPRSTMPLXFETZWEKPTXIUVCVJWLPPWYEAOUKJVAAJUWYMIEINZIGFYDRGEVWSNBZHJFPBXZNEQPKZDHJHPCJGGFXYCLUDHWHRXVGWNYSQDSIULJXQFKJTEYLMVDSGHBJZSSUNQKCJBRMRXZAVGTHYRVSTVRRMCQIGMSLQOXBKFYEONLALPQKOEHYBACNTBAFEKCDMSUNIDTHODXAW");

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
    msg.setTimeStamp(0.539683994029);
    msg.setSource(27489U);
    msg.setSourceEntity(107U);
    msg.setDestination(4462U);
    msg.setDestinationEntity(228U);
    msg.name.assign("BKZTKYTKSBRMLICJRIEMXJAOYWNTPMMOXPLENNZEOYIGKVBLFWHJOUDJJDKMJPKIDMWWYAYNOMUWRZFNGQLEDGQSXNSCXQHDDUGKRZUCCRIVDLAVUTQRFZLBQGVFGHBYLUEJPJDS");
    msg.visibility.assign("HJBXCBFSSULASHCTYZTEHOFDGELVKPYXMPKIOAYEQJVOOLHHAIDCMZKWGQONRNWGYSVRTVLUCLIKPWRQPDHISIKVNDFANLVXAMRIEFDIIYNUOOOTQXUVDYKQMEICJGDXAGMCUUUJZSGAPQBTBGOFVGDBHYXELZMBRJFWNLRPCEHZEJXJKQGKRYUCMKJTCFSSTWXNESPLZPNA");
    msg.scope.assign("JVHUBRIPZERHATWTWMDGHAXBYFYEUIGZGTAGIAZZAQOFDWVLALNXXPUGTZLMKVDGTTYOYMCUYWWSQJQGYWGCVMEORKSKHOZOSIXHVLSHKIXPSLBIFUIZOXJUBMANUZKJUYIHHSWYDCJNLBPXPAQACKKER");

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
    msg.setTimeStamp(0.157819612623);
    msg.setSource(39352U);
    msg.setSourceEntity(7U);
    msg.setDestination(54779U);
    msg.setDestinationEntity(130U);
    msg.name.assign("LVPYDQOBCGBJKBTHTZRBGFZPELNUVOSFJDCESEPPKMUMAOJLPPHQZFSQOYGRKUXZWGFGFLBDRXRKJLPDGSJNSXSDCSOYTAXGBXMNXVHHVHTBLUWFUPEHCVXTTMICXYVJYWZYNXEQDYSKQEEOFIMSALCJPQKZNMLKIUBCWWWIAKCRMNHKDVJFWFNSCYCEIURIAYRLWOGFIAGQOTZTRVOMXNREYAWZQJZBNDTQLBAMUVK");
    msg.visibility.assign("PRIWRCSWELNHPVMTRDIZPVHQMZVNOBOZBBIMKSTZICRHWBTLZXJNUARCJMLIOAESXYNYGVUHDBOUVCTBTHSKASPPDKJMNZXFFVLPXTDQHXHAGSRFQMOSDQBGNNKAQXEVWVFEPCIBZRAJUKTAMXIUYCDDHRFYXMLUEKPOLCETQKQUVICDWNLYKGQGOHYDGZROLCF");
    msg.scope.assign("MFLCVJFWJIYVMFPAYQJNZKBOGYJQPOBWHOMYSPWURUALLTACBCLQBYINKDGHROECWYQRQDWXBLDTASGRPGXVTQJRBFJWEYOUESHRWMQYXMCSICVWAZATOZJBEVPEGDEQUMWT");

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
    msg.setTimeStamp(0.491207386025);
    msg.setSource(1367U);
    msg.setSourceEntity(52U);
    msg.setDestination(5442U);
    msg.setDestinationEntity(5U);
    msg.name.assign("ISNERHKMNTFLVJODGWOPRBFFAXBLNLBIAVIYCTSBRXLRCMIUVDOFQQHKDUBDMASDDYSXKRCFUECKSPGMZTPQUUGPGHSZVROFANBHELVSKCGDEINRYWQPMQMPVYQJNZTH");
    msg.visibility.assign("XDFQIZWTRTJUHHDGLNVQBWLUEJITGNBQAFPJNRSINSWECNFOX");
    msg.scope.assign("RZHBZPPMFVQRVPZMRFFY");

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
    msg.setTimeStamp(0.27401600818);
    msg.setSource(27013U);
    msg.setSourceEntity(13U);
    msg.setDestination(10267U);
    msg.setDestinationEntity(113U);
    msg.name.assign("FYWFXCGGEQONEHTDABSFICIINTENBFVUURLDIEANPAAODEVVSYDYRFBAGVGKZOJPSAXXMDJHJNMZHXILPQOZCRBZSLMCEYUQIRXTPWPOGUDNVPTKZSTQYVQELGDTXWCCQIKMQNCWJXSKBZOJEHLMZLUQFPGIYFHTVUPBWSAAHENKEUHOVKWMSYPYGR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SMPLSQQDKWCYDBPUEKVJOMSUGVJSQYGGXBTXFBKSDZEREZIGQOWZXCLTJNLPWPNHMJJLIARVRPEOZTBFKVVKKEGABCKKQXDTUHNUIMFHACVRFTEUGSZNDOUZALFSBQODRJHWXWVLGXQMCORUJHCXYYHLHWGMLFIZPEWBSQEXZOTYKIROMQCDUXHTWBTFRNCMMBEFXSGMHADONLKVQVPCBITAYFDWNJINLJINYVYAPHP");
    tmp_msg_0.value.assign("AELLUXXBIUXWPEIAWBERQZKJUZHJMDSBVKTUYETMOMGSHYDGDT");
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
    msg.setTimeStamp(0.538644376704);
    msg.setSource(37847U);
    msg.setSourceEntity(239U);
    msg.setDestination(25062U);
    msg.setDestinationEntity(17U);
    msg.name.assign("KJMJRGGAOCBLTXHZZAVBI");

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
    msg.setTimeStamp(0.253705094828);
    msg.setSource(8501U);
    msg.setSourceEntity(93U);
    msg.setDestination(41102U);
    msg.setDestinationEntity(158U);
    msg.name.assign("HUWHCUPPMDX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WJPWFFGVUSXRUXLQMZFRAQMMCOVGRWYTPIZDJIAZGBJTFAKAQWANWMESZXHQBXFYEVKPNUTEXNKAYVTINZODVCGQDLOHOCJQIETJKVSDEKAGDFRRHCUALETBILBSCVZFLELDTWZYNRIHKO");
    tmp_msg_0.value.assign("CRERCQOHMHUULGWMLYEFHAJQRGQPKHKBDZDFVPGIYSMENOVXTRZUGYNVHQOSENAXSFXXDBHTZBOVJGPKDXNGQZLHEYOMNJDSKGXAIFJGFQJJMAPMSVRFVCXY");
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
    msg.setTimeStamp(0.957605487818);
    msg.setSource(17133U);
    msg.setSourceEntity(200U);
    msg.setDestination(25223U);
    msg.setDestinationEntity(247U);
    msg.name.assign("XDBBBIPLLRCJEDBQYMDKBLGVSAFRDEHSVIZEYZNVHSKOAAEVFIRNVWBVWLOVKMWSNQZ");

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
    msg.setTimeStamp(0.388161007334);
    msg.setSource(15274U);
    msg.setSourceEntity(205U);
    msg.setDestination(1057U);
    msg.setDestinationEntity(225U);
    msg.name.assign("APJUOKTQSBPFDOVCKCQSIQMWIACKVBWJOEEHDOSPPIADNBIAUNEBWHKKNJQLQJSMJZKICUBTJPOZTLVDSCYBXXXGJGPGYEJKGFPCCHUFAFCQZNUURYNBRIBHNKSGQSPZMLHHKLWXWQZAX");

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
    msg.setTimeStamp(0.356899292525);
    msg.setSource(38279U);
    msg.setSourceEntity(223U);
    msg.setDestination(31074U);
    msg.setDestinationEntity(31U);
    msg.name.assign("OMJLYWAMUYBJIYJPDXIGRUCTHAGOFLEFADKOALZYCHWDNGOJEXQCPEKWGGYYUTHSIKSKP");

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
    msg.setTimeStamp(0.787354030036);
    msg.setSource(38373U);
    msg.setSourceEntity(139U);
    msg.setDestination(59143U);
    msg.setDestinationEntity(229U);
    msg.timeout = 1652689939U;

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
    msg.setTimeStamp(0.183097908591);
    msg.setSource(3451U);
    msg.setSourceEntity(25U);
    msg.setDestination(17138U);
    msg.setDestinationEntity(244U);
    msg.timeout = 1699670323U;

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
    msg.setTimeStamp(0.613947019658);
    msg.setSource(31509U);
    msg.setSourceEntity(97U);
    msg.setDestination(50862U);
    msg.setDestinationEntity(182U);
    msg.timeout = 2502954043U;

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
    msg.setTimeStamp(0.317346035094);
    msg.setSource(6054U);
    msg.setSourceEntity(43U);
    msg.setDestination(7688U);
    msg.setDestinationEntity(161U);
    msg.sessid = 694627341U;

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
    msg.setTimeStamp(0.357333099509);
    msg.setSource(26889U);
    msg.setSourceEntity(159U);
    msg.setDestination(18925U);
    msg.setDestinationEntity(91U);
    msg.sessid = 3877541192U;

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
    msg.setTimeStamp(0.776494845503);
    msg.setSource(12683U);
    msg.setSourceEntity(171U);
    msg.setDestination(49848U);
    msg.setDestinationEntity(246U);
    msg.sessid = 1803706676U;

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
    msg.setTimeStamp(0.131983302695);
    msg.setSource(26510U);
    msg.setSourceEntity(28U);
    msg.setDestination(28688U);
    msg.setDestinationEntity(54U);
    msg.sessid = 946821937U;
    msg.messages.assign("ACWDVXBLREMTJCMGNIGRBYBZHGRNHARQAQHLGRCWIFDOALTNYNPHLIWPSIKZTMMBJCYJWFDKOLRYPFJATEMELFEWQUTNDJYXXFZVUOPFDPMUSFTSXNNXTFOLALZAIZCLXTZOZSVEXDUPCZMMRQWX");

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
    msg.setTimeStamp(0.510477191209);
    msg.setSource(25401U);
    msg.setSourceEntity(193U);
    msg.setDestination(21172U);
    msg.setDestinationEntity(93U);
    msg.sessid = 2510957468U;
    msg.messages.assign("UZADPQYXHBHETBARHNMBHJRPZLPINALWAWLVPGNGPTIPKACMXRQOGOVYEMKRLHIPSUPWVREVCJOGODOBTSZTYFWIKBUZNCWSEGKVFEEQZFCVMMNTGBDGSZLGADXURFTDEMKGTLSKWIDTJIYEXULNDCIAWYUQMUQXRRHYVAQSILVRCZKYXUTDRVAQFNIJBBOHQEU");

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
    msg.setTimeStamp(0.538859847879);
    msg.setSource(40255U);
    msg.setSourceEntity(2U);
    msg.setDestination(8828U);
    msg.setDestinationEntity(55U);
    msg.sessid = 3652654020U;
    msg.messages.assign("QRHICSNMBLTXUHPVOFPLQGVAKLYRJADB");

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
    msg.setTimeStamp(0.474093443207);
    msg.setSource(14391U);
    msg.setSourceEntity(250U);
    msg.setDestination(18221U);
    msg.setDestinationEntity(151U);
    msg.sessid = 3121330911U;

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
    msg.setTimeStamp(0.728764347038);
    msg.setSource(50199U);
    msg.setSourceEntity(108U);
    msg.setDestination(21844U);
    msg.setDestinationEntity(244U);
    msg.sessid = 3665035780U;

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
    msg.setTimeStamp(0.0861866101345);
    msg.setSource(29044U);
    msg.setSourceEntity(15U);
    msg.setDestination(50658U);
    msg.setDestinationEntity(240U);
    msg.sessid = 3356496796U;

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
    msg.setTimeStamp(0.952771056613);
    msg.setSource(47233U);
    msg.setSourceEntity(200U);
    msg.setDestination(39849U);
    msg.setDestinationEntity(128U);
    msg.sessid = 83679991U;
    msg.status = 73U;

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
    msg.setTimeStamp(0.613604565566);
    msg.setSource(10289U);
    msg.setSourceEntity(53U);
    msg.setDestination(42566U);
    msg.setDestinationEntity(202U);
    msg.sessid = 2778235493U;
    msg.status = 111U;

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
    msg.setTimeStamp(0.587257507598);
    msg.setSource(18823U);
    msg.setSourceEntity(175U);
    msg.setDestination(26975U);
    msg.setDestinationEntity(76U);
    msg.sessid = 2235154977U;
    msg.status = 19U;

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
    msg.setTimeStamp(0.27520606958);
    msg.setSource(20712U);
    msg.setSourceEntity(171U);
    msg.setDestination(55608U);
    msg.setDestinationEntity(35U);
    msg.name.assign("XMBKBPEBTNQVZOQDU");

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
    msg.setTimeStamp(0.533933331524);
    msg.setSource(48987U);
    msg.setSourceEntity(185U);
    msg.setDestination(30974U);
    msg.setDestinationEntity(111U);
    msg.name.assign("LBPFYFJJLCNXQVGHUBBZTXHCKJWVMECXCZRVHKSVFSOLTKXMYVOFRIXFZPV");

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
    msg.setTimeStamp(0.122156752443);
    msg.setSource(56012U);
    msg.setSourceEntity(132U);
    msg.setDestination(59545U);
    msg.setDestinationEntity(9U);
    msg.name.assign("GDBUBVCBSSNUIVOMCYBWMZPLTEJGMFPKDLJMNBHKEDUFDQOQJGFHMFAWEIELPIQNUAEHWOGJSFLTOZKXLSUVXGWWAIAFHTDJICZZVMFQEROQBQRADKAEKCYKTWXJRUIQTRDXKFTRVMULCXIPJISUOFNALQXOGXSTR");

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
    msg.setTimeStamp(0.279660855948);
    msg.setSource(3561U);
    msg.setSourceEntity(116U);
    msg.setDestination(37178U);
    msg.setDestinationEntity(156U);
    msg.name.assign("CVTQQYKERVUSRBAHUXBHJPR");

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
    msg.setTimeStamp(0.291267408845);
    msg.setSource(14767U);
    msg.setSourceEntity(33U);
    msg.setDestination(30151U);
    msg.setDestinationEntity(177U);
    msg.name.assign("ABLAQLLSTRDJOZOGXHOPVCRWRWXZQMKDSBLTHYYMXPYRUHDEC");

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
    msg.setTimeStamp(0.24191385549);
    msg.setSource(25756U);
    msg.setSourceEntity(159U);
    msg.setDestination(36855U);
    msg.setDestinationEntity(83U);
    msg.name.assign("KENWYCELKTORGSHDZCPVMNBNIZNMVUTYGLDJZKJDNIFMPOTWWUGDSRXWSMDDCRBPTPAUXPGIWCGJZDGJJJITVSBLPTOKHXREFTOCAURKFSJAXEZFTYYGULDQDQHSHXVNIVHVHVMROBUKYIIBAYMRSEBMJBECKOFHZBSKLYQLBCLNISCGOUNZQRYRZEXTNJAFLWLNMIEFARUPFBQZGPVVVYLQQGAXJOWSOHEQMXHUOEUF");

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
    msg.setTimeStamp(0.676709177738);
    msg.setSource(14459U);
    msg.setSourceEntity(221U);
    msg.setDestination(28901U);
    msg.setDestinationEntity(62U);
    msg.type = 254U;
    msg.error.assign("LNXZFINYNMPNKVBIDZKDFZCMBAQDQAUSVYUHAJYWWSNGFYFXCAYNMLSNQXTGGGGNDEHOQBIBLWROJCVKPIEPBDOFACYORBSCTBOJHPOFITEUXAWRREIKQLKRVNJQMMZTNXMOIWUWQETYCWVZWHWOEXRDVHSTTZYJJLYUPDXUILSTQZRYGHKPWSSUCJDMACCCJTXLGVFBEP");

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
    msg.setTimeStamp(0.408500548726);
    msg.setSource(9773U);
    msg.setSourceEntity(166U);
    msg.setDestination(26747U);
    msg.setDestinationEntity(60U);
    msg.type = 152U;
    msg.error.assign("OYKTIDOWBRMFJXUSKELMTTWBBDQVBEPKYRPGKJNFOUEVLUEOLKWOEJFNZHMUXMSDYYRUILIVEWZWYSCNUPCBTBSDPPWVG");

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
    msg.setTimeStamp(0.527303421606);
    msg.setSource(58382U);
    msg.setSourceEntity(99U);
    msg.setDestination(34194U);
    msg.setDestinationEntity(116U);
    msg.type = 203U;
    msg.error.assign("YIITAXOESLBZKRCSSRBGJAPNEECTUKGVDPWLPPOUNTESLKJZWIMSAVXCVDHZQZMQEJEACNUWOSIPLRMFWUCLJPQBJIYYFRKORVNDZRMAGALGZHPQNKAWQZOADQVXVHEWCGRDYEMGYUXEQFLZGFIFSCBNYIXUIUVFNOOGMTNHBYFRQVLNHKUNCDTKGMYSAFTZKQHTHXYPIHCSXRBTBDCBFWHJSJHEMMDZMOBJOTJDVUOTWAPIJFXXYGVX");

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
    msg.setTimeStamp(0.748222803915);
    msg.setSource(54860U);
    msg.setSourceEntity(178U);
    msg.setDestination(45482U);
    msg.setDestinationEntity(92U);
    msg.seq = 13935U;
    msg.sys_dst.assign("TMPPEJDFACHSXLKCSORBTQDJYKFPJZWDILEEETXECPSGCWNYOWHJXMWJMADZWJKDTNAFXBNVNQHUOYMFYTUYVIJBHGMLWUPZOSGLOMUHRKLNQVONKQAKBUYHAITHVRUBTYCQI");
    msg.flags = 178U;
    const char tmp_msg_0[] = {-77, 16, -87, -114, 106, 105, -80, 121, 62, -74, -43, -60, -94, 47, -96, 31, -1, 58, -53, -61, 13, 123, -103, 5, -13, -125, 124, 108, 95, -77, -107, 105, 119, -43, 82, 2, -112, -119, 126, 108, -114, 75, -46, -15, -84, 29, -47, -93, 115, 0, -1, -46, -106, -41, 30, 101, 53, -45, 41, -126, 63, 125, 22, -70, -92, 29, -47, 82, 65, 26, -16, -110, -104, -3, -127, 116, 58, 66, -8, -46, 51, 59, 113, 3, 22, -27, -126, 93, -113, -36, 63, 78, -120, -63, 67, 13, 49, -113, -79, -81, -3, -95, -121, 60, 15, -69, 93, -105, 28, 69, -66, -127, 57, 114, 43, -5, 25, -64, 42, 67, -63, 64, 62, 107, -68, -32, -16, -52, 27, 32, 118, -109, 27, -100, 40, 7, -109, -91, -83, -8, -127, 42, 85, -73, -127, -124, 49, 29, -85, -81, 28, 74, 114, -82, 57, -118, 19, -87, -127, -64, 4, -99, -34, 28, 86, 90, -121, 43, 100, 11, -89, -40, -71, 44, 40, 114, 96, -72, -97, -17, -61, 119, 78, -76, 85, 66, 98, -24, 98, 98, -57, 59, 57, 82, -49, -1, -100, 116, -100, 27, 100, -12, -91, -30, 5, 79, -41, 34, -121, -27, -30, -126, -11, -96, -113, 9, -23, 72, -101, -22, 48, 49, -103, 49, 61, -53, 1, 20, 28, -31, 69, 8};
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
    msg.setTimeStamp(0.849735107309);
    msg.setSource(20078U);
    msg.setSourceEntity(73U);
    msg.setDestination(26331U);
    msg.setDestinationEntity(4U);
    msg.seq = 58226U;
    msg.sys_dst.assign("DGHFEWIDKMEJZORYQFVANDJLJYBNATUAQVATXIMKFGOGDRZRPBHCZO");
    msg.flags = 3U;
    const char tmp_msg_0[] = {-56, 51, -16, 84, 57, 120, 36, -121, -43, 39, 111, -119, -5, 86, -18, 41, 60, 82, 115, -62, 83, -56, 119, -71, 24, 67, -75, 79, 46, 19, 117, 89, -123, 20, -113, -6, 45, -99, -83, 58, -76, 109, 15, -44, -104, -113, -35, 99, -22, -32, 78, -45, -26, -89, -95, -70, 27, 98, -77, -117, 118, -37, 97, 58, -23, 102, -111, 72, 123, 111, 115, 17, -36, -11, -106, -108, -57, -122, 125, -117, -115, 39, -6, 59, -79, -48, 122, 83, -125, -43, 94, -66, 69, -74, -17, -105, -45, 64, -51, 96, -49, -119, 36, -118, 123, 5, -51, 60, 5, -45, 30, 15, -69, -41, -11, -28};
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
    msg.setTimeStamp(0.569954372427);
    msg.setSource(17244U);
    msg.setSourceEntity(185U);
    msg.setDestination(28856U);
    msg.setDestinationEntity(183U);
    msg.seq = 33772U;
    msg.sys_dst.assign("RRKUPYRDXWBQRMENETHLNKVGUJAKDYQDPWTQJNSEBOVYCJPZCDCUIONJJSTYKFXQWQCTHOEUBZHATACNQWHOPFQGOLOZMRRKBIWDMUFWAZHBYVTINTSDHVWIXMQFYDJZMMGAIPMUQMESCLGBNCVNXGGSBSGYIHZXGELFNSUTLFKBWLOABEVOSRRIOVAIZXGOPYIPPRUDCCEALKTDJSLVHICYKMYHVJBUKDJFW");
    msg.flags = 196U;
    const char tmp_msg_0[] = {21, -67, 94, -92, 88, 20, 103, 120, -118, -106, 116, 49, 91, 117, -23, 43, -20, 98, 38, -54, 40, 95, -52, -57, 119, 76, -93, -38, 24, -60, -46, -13, 88, -114, 113, 11, -50, 7, 61, 94, -113, 25, 93, -50, -73, 39, 35, -79, 109, 89, 117, 62, 74, 79, -88, -11, 49, 6, 116, 51, 55, -34, -39, -119, 31, -19, -119, -49, 122, 7, 26, 33, 82, -42, -52, -18, -31, 90, 74, 62, -96, -60, -79, -120, 108, 35, 68, -31, -2, -59, -109, -58, 66, 83, -97, 47, 72, -17, -58, -70, -61, 18, -47, 98, 53, 100, 115, -65, 13, 89, 5, 43, -75, 2, -9, 78, -1, 4, 47, 64, 11, -120, -125, -31, 58, -25, 44, -104, 112, -66, -99, -100, 15, -4, 71, -86, -99, -121, -37, -57, -46, -30, 82, 107, -47, -15, -91, 45, 35, 51, -32, -19, 86, -69, 89, -15, 48, 17, -78, 119, 48, -53, -58, -100, -117, 53, -76, 66, 1, 23, 125, -20, 111, -79, 101, 7, -18, -20, 46, 34, -128, -86, 60, -30, 117, 113, 57, -82, -102, -95, 88, 125, -84, -60, 34, -82, -73, 1, 38, -29};
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
    msg.setTimeStamp(0.129648536496);
    msg.setSource(23650U);
    msg.setSourceEntity(80U);
    msg.setDestination(30255U);
    msg.setDestinationEntity(102U);
    msg.sys_src.assign("ATACQEQTJFGZOKJCKJVLZUPLGSWINUUYKURUBHZIDLSAQSDJANSESMZOCONOFPUWGZJYGPWXBPDRWVCKKOXIMXVNTZWOBNALFPPDFQYMBANXREXYRFYQVFXVETALZDIGXZDEPAQYJEBJMEHVYTRWMRFIKBSRPOFCMWVMMJTWNPRUJTLCOKXIHLYDITIJSXXLLTNUBHUWVONGIYADSDFMLCEESKMSCTIUHABHGQCRZHORHGVNKDBQCZHKYBG");
    msg.sys_dst.assign("DJAWWTUFTYXSZIELOJJMUMPNBEBAUMEZRVJHJYSRYCZACYRCOAQUGJDHGVHGJVYQPOQNWCTAXIIIEPCZKQDDWQKPQDYXGCHYOWPFBKCPLQVOFTBBSFPTPMREJPHMZZXLJXHKVFUVITFSDHTVVMEQINWZXWSSPRBTCLGDTVKSLUEWRDNCKHOQITXGGYLBKNLBNVUJELIFNROGKSHCULFMBAEMNMKFZIRUXOKQSMF");
    msg.flags = 141U;
    const char tmp_msg_0[] = {75, 65, -117, 30, 3, -63, -37, 78, 51, 79, 50, 3, 6, -77, 31, -43, -51, 65, -54, 67, 55, 108, 10, -57, 34, -112};
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
    msg.setTimeStamp(0.743284888857);
    msg.setSource(1683U);
    msg.setSourceEntity(35U);
    msg.setDestination(12677U);
    msg.setDestinationEntity(170U);
    msg.sys_src.assign("QWDRNSKEEGZPYFACBLGIRFNJADWVLXKOJVOEGRANWZTKJPLRHNPZDKMEUOXXJUTBXWBMRHPTUYKTKWDVWCJTHFAMCOIITILMFJTGIYFZFLDWTGQSEBDWZMBVKIYZXAOFGKLPVXNILSOBQGFZVQUUXOHHQKQDWUAMRRNCVYFQUROYLSJSQSCRWCZYDAZINUHCGYAFLBNPVEGTTDJJSVGB");
    msg.sys_dst.assign("WFHJTZZBIRGFJRAYXMEMUBLMALXHEWZNNVLXXFPZQLMDGWIYLUYTIIXACMETLRQROGZWCSMDSBOSJNPJXHVRGJDBRKAWCDTFOPQRRKKPOIYSGYTPCKUBVLZCQKN");
    msg.flags = 68U;
    const char tmp_msg_0[] = {122, -17, 56, -117, -57, 94, 19, -128, -19, -16, -32, 17, -82, -21, 40, -54, -65, -42, 100, 99, -89, 59, 39, 95, 39, 81, -19, -36, 122, 67, 54, -82, 94, -49, 108, -13, 108, -53, 19, 57, 113, -86, -53, -90, -38, 38, -69, -110, -95, 124, -128, 16, -34, 70, 112, 116, 64, -17, -73, -34, -76, 81, -98, 87, -79, 41, 9, 75, 11, 118, -33, -15, -31, -25, -71, -119, -69, 4, 57, -49, 103, -5, -13, -70, 39, -92, -66, -91, 84, 55, -9, 104, -120, -20, 46, 126, -11, -7, -52, -54, 100, 7, 10, -98, -3, 31, -128, 29, 52, -76, 70, -30, 29, -44, -57, 25, 86, 17, 19, -110, 4, -64, 47, -116, -63, -99, -44, -41, 53, 31, -48, 80, 3, -100, 66, 44, 109, -45, 62, -26, 98, -11, 71, -117, 91, 87, -125, -38, -85, -114, -118, -64, -86, 25, 97, 21, 78, 25, 7, -71, 87, -29, -95, -26, -40, 83, 85, 62, -118, 44, -111, -7, -94, -30, -56, -91, -71, 23, -116, 75, 57, -53, -4, 20, -93, 72, -76, -16, -123, 71, 56, 112, 81, 82, -125, 6, -52, 112, 62, 64, -28, 89, -83, 55, 1, -17, -64, 119, 21, -95, 66, -64, -11, 86, -42, 30, 12, 97};
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
    msg.setTimeStamp(0.0405909816628);
    msg.setSource(24171U);
    msg.setSourceEntity(40U);
    msg.setDestination(56701U);
    msg.setDestinationEntity(182U);
    msg.sys_src.assign("ESUXEYKQBTTSEWGSAFPUYHPGQMKVKLCSXTURUFZCVDKGTHWMXBIEBFGUYOJSDIYUETHJWRZYNPPOTLOLHJBYBVTWZIUTCXXXTSDAVPDJXVMKSSDNJAWQGMZNEOCOGMADANLZFGIMFILRAIEYFCPOP");
    msg.sys_dst.assign("XSXZTERCRNTPFNMFVYRGWUMD");
    msg.flags = 19U;
    const char tmp_msg_0[] = {-84, 48, 32, -69, 13, -28, 55, -118, -101, -116, -77, 79, 12, -76, -11, -22, -34, -30, -20, 109, 21, 75, -79, 22, -75, -43, 113, -126, 70, 17, 106, -128, -82, -108, -78, 77, 114, -107, -103, -18, -64, -71, 0, -33, 93, 64, 17, 21, -87, 9, -34, 85, 102, -20, -118, 109, -79, -66, 1, 33, -113, 17, -77, -125, 34, 45, -38, 0, 93, 38, -75, -36, 12, 24, 93, -26, -119, 90, -57, 97, -66, -7, -63, 69, -10, -29, -19, 56, 18, -109, -68, 62, 0, 90, 62, -4, -8, -84, 60, 22, -54, 74, 46, 15, 61, 89, 11, -34, -91, -33, 91, -1, 93, 107, 40, -96, 95, 43, 105, -95, -84, -63, 105, -114, -109, 59, 126, 33, 45, -91, 105, -50, -99, 57, -90, -54, 29, -61, 118, 32, 51, 60, -66, -69, 73, 68, 55, 50, 22, 10, -50, 78, -23, 84, 12, 16, -14, -88, 18, 7, 32, 84, 124, 82, -42, 30, -42, 120, -55, -89, -96, -36, 54, -3, 7, -99, 118, -98, -102, 75, -78, -117, -125, -28, -118, 23, -3, 12, -47, 27, 80, 7, -58, 16, 79, 123, 2, -88};
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
    msg.setTimeStamp(0.885801434164);
    msg.setSource(18547U);
    msg.setSourceEntity(29U);
    msg.setDestination(9827U);
    msg.setDestinationEntity(182U);
    msg.seq = 48131U;
    msg.value = 138U;
    msg.error.assign("EKJRMILOXHIHMQDEHIKZZRAEYCNGTQUBHSELPIMAVJSIAEBZVQOTKFWCCJNWZPUXDTXPRYFWBWTJDMCAOEDSUYOFQXSLDGUNXFONQPMHIJBOTPAANAUSSYFLNJQRBKKBGVCGIVV");

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
    msg.setTimeStamp(0.698919154362);
    msg.setSource(13985U);
    msg.setSourceEntity(58U);
    msg.setDestination(19688U);
    msg.setDestinationEntity(218U);
    msg.seq = 44032U;
    msg.value = 159U;
    msg.error.assign("NSNBXSLAOYUKERTMUMGLWPXRGLXYTKOEUWRKDPEZECQFWYFJTKUOZBAVYDDPMCWBQIKEJJ");

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
    msg.setTimeStamp(0.783735299505);
    msg.setSource(20212U);
    msg.setSourceEntity(61U);
    msg.setDestination(63466U);
    msg.setDestinationEntity(143U);
    msg.seq = 37221U;
    msg.value = 83U;
    msg.error.assign("OJQTRLTKGPBCHGKXDZASSAACTFDJERMWLZXAPJRNTVEEUQNRYJWPVOJSYKHMBJFEFQBYQNKUKGZRCUDZCFASMRTUINZFEHXOCLZMDHGIQYABTUVXQAOPSPHLWH");

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
    msg.setTimeStamp(0.875527055479);
    msg.setSource(25314U);
    msg.setSourceEntity(66U);
    msg.setDestination(36660U);
    msg.setDestinationEntity(89U);
    msg.seq = 20519U;
    msg.sys.assign("HRLCXQXCIDYTMJWTOTUPFVHRYHKKDCMZYFI");
    msg.value = 0.446436662949;

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
    msg.setTimeStamp(0.799388419869);
    msg.setSource(22883U);
    msg.setSourceEntity(148U);
    msg.setDestination(27313U);
    msg.setDestinationEntity(196U);
    msg.seq = 40301U;
    msg.sys.assign("JXSWBRHMISZZBSRCWTQEVLSKJCIVUVTWVTCHZPIKXFBPCXOMNGQTQDGOQEKMPUWPICEATDYGDKBWFLAVNHFXPYCLNFZNMKPXXGLSCZVGFNWSFCJKFJXJMQNMNUSUTWGLCWQUDPKWRPONDYIOLDBUAUAEYAMLBGTZPKEXTZJXKMHFI");
    msg.value = 0.23873254901;

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
    msg.setTimeStamp(0.885324619535);
    msg.setSource(42055U);
    msg.setSourceEntity(106U);
    msg.setDestination(35704U);
    msg.setDestinationEntity(209U);
    msg.seq = 449U;
    msg.sys.assign("FFYMOPXATIVYHTESAWZCKBPOMGTEKQTHZRZMCUXSNSKDPQOLRYLFLFTNEGEJRJOYBJBVALPHDUPXIVFPCQNUMVFZGGXGAAQMICNGZWSTNBQPRKOOGHNYWHYPBIUQCLCQCWEYKXIDTOLEUOLXJKVRICMFPGCNFHBTWMAYWZHIEEDK");
    msg.value = 0.0401597782383;

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
    msg.setTimeStamp(0.13654924606);
    msg.setSource(25657U);
    msg.setSourceEntity(194U);
    msg.setDestination(23605U);
    msg.setDestinationEntity(134U);
    msg.action = 195U;
    msg.longain = 0.162141986593;
    msg.latgain = 0.7167459889;
    msg.bondthick = 1136965080U;
    msg.leadgain = 0.933018125911;
    msg.deconflgain = 0.346255162761;

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
    msg.setTimeStamp(0.194820302967);
    msg.setSource(34209U);
    msg.setSourceEntity(133U);
    msg.setDestination(15913U);
    msg.setDestinationEntity(145U);
    msg.action = 204U;
    msg.longain = 0.963161804263;
    msg.latgain = 0.437909286575;
    msg.bondthick = 45678868U;
    msg.leadgain = 0.918206310477;
    msg.deconflgain = 0.0685180667147;

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
    msg.setTimeStamp(0.713320226915);
    msg.setSource(28877U);
    msg.setSourceEntity(201U);
    msg.setDestination(15072U);
    msg.setDestinationEntity(179U);
    msg.action = 225U;
    msg.longain = 0.542514320394;
    msg.latgain = 0.332950799866;
    msg.bondthick = 3475390321U;
    msg.leadgain = 0.662578208087;
    msg.deconflgain = 0.104083424081;

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
    msg.setTimeStamp(0.660382937499);
    msg.setSource(44231U);
    msg.setSourceEntity(77U);
    msg.setDestination(62602U);
    msg.setDestinationEntity(247U);
    msg.err_mean = 0.0436799550258;
    msg.dist_min_abs = 0.439577337589;
    msg.dist_min_mean = 0.172814438933;

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
    msg.setTimeStamp(0.647217775331);
    msg.setSource(15294U);
    msg.setSourceEntity(212U);
    msg.setDestination(22281U);
    msg.setDestinationEntity(99U);
    msg.err_mean = 0.36268080296;
    msg.dist_min_abs = 0.143378799873;
    msg.dist_min_mean = 0.882770771992;

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
    msg.setTimeStamp(0.825610038118);
    msg.setSource(8466U);
    msg.setSourceEntity(119U);
    msg.setDestination(19271U);
    msg.setDestinationEntity(172U);
    msg.err_mean = 0.200975377424;
    msg.dist_min_abs = 0.864325200308;
    msg.dist_min_mean = 0.550092938598;

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
    msg.setTimeStamp(0.569325980466);
    msg.setSource(40200U);
    msg.setSourceEntity(47U);
    msg.setDestination(46337U);
    msg.setDestinationEntity(13U);
    msg.action = 236U;
    msg.lon_gain = 0.729358730697;
    msg.lat_gain = 0.223168107596;
    msg.bond_thick = 0.168511767733;
    msg.lead_gain = 0.0800662183532;
    msg.deconfl_gain = 0.471212113442;
    msg.accel_switch_gain = 0.615975708286;
    msg.safe_dist = 0.893738479832;
    msg.deconflict_offset = 0.628415895184;
    msg.accel_safe_margin = 0.246881796121;
    msg.accel_lim_x = 0.414902327784;

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
    msg.setTimeStamp(0.944662309798);
    msg.setSource(23068U);
    msg.setSourceEntity(26U);
    msg.setDestination(54653U);
    msg.setDestinationEntity(216U);
    msg.action = 21U;
    msg.lon_gain = 0.521308532045;
    msg.lat_gain = 0.128737366827;
    msg.bond_thick = 0.935876029508;
    msg.lead_gain = 0.837687857952;
    msg.deconfl_gain = 0.969713508816;
    msg.accel_switch_gain = 0.578978269867;
    msg.safe_dist = 0.283345266079;
    msg.deconflict_offset = 0.918315748237;
    msg.accel_safe_margin = 0.164130885061;
    msg.accel_lim_x = 0.128798511475;

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
    msg.setTimeStamp(0.526164355315);
    msg.setSource(48082U);
    msg.setSourceEntity(252U);
    msg.setDestination(53830U);
    msg.setDestinationEntity(138U);
    msg.action = 64U;
    msg.lon_gain = 0.540988135374;
    msg.lat_gain = 0.646915965046;
    msg.bond_thick = 0.628612292706;
    msg.lead_gain = 0.143830022446;
    msg.deconfl_gain = 0.689029619105;
    msg.accel_switch_gain = 0.979566748402;
    msg.safe_dist = 0.428459699902;
    msg.deconflict_offset = 0.134627882776;
    msg.accel_safe_margin = 0.799624124514;
    msg.accel_lim_x = 0.435160211002;

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
    msg.setTimeStamp(0.712135304925);
    msg.setSource(5514U);
    msg.setSourceEntity(184U);
    msg.setDestination(28557U);
    msg.setDestinationEntity(113U);
    msg.type = 62U;
    msg.op = 237U;
    msg.err_mean = 0.0840793102944;
    msg.dist_min_abs = 0.346145168179;
    msg.dist_min_mean = 0.127041812258;
    msg.roll_rate_mean = 0.433895700441;
    msg.time = 0.156283216273;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 15U;
    tmp_msg_0.lon_gain = 0.24234946274;
    tmp_msg_0.lat_gain = 0.00133914856884;
    tmp_msg_0.bond_thick = 0.872793211795;
    tmp_msg_0.lead_gain = 0.766261517771;
    tmp_msg_0.deconfl_gain = 0.117604752099;
    tmp_msg_0.accel_switch_gain = 0.64296503064;
    tmp_msg_0.safe_dist = 0.84005517631;
    tmp_msg_0.deconflict_offset = 0.479109164588;
    tmp_msg_0.accel_safe_margin = 0.500748933654;
    tmp_msg_0.accel_lim_x = 0.227268896101;
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
    msg.setTimeStamp(0.953092893587);
    msg.setSource(49854U);
    msg.setSourceEntity(45U);
    msg.setDestination(16424U);
    msg.setDestinationEntity(172U);
    msg.type = 42U;
    msg.op = 167U;
    msg.err_mean = 0.492244919289;
    msg.dist_min_abs = 0.564214115643;
    msg.dist_min_mean = 0.81035828855;
    msg.roll_rate_mean = 0.090969879113;
    msg.time = 0.0828223628189;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 25U;
    tmp_msg_0.lon_gain = 0.214437434636;
    tmp_msg_0.lat_gain = 0.494364965627;
    tmp_msg_0.bond_thick = 0.645926975709;
    tmp_msg_0.lead_gain = 0.745125057069;
    tmp_msg_0.deconfl_gain = 0.698444414019;
    tmp_msg_0.accel_switch_gain = 0.840046242726;
    tmp_msg_0.safe_dist = 0.0915160048304;
    tmp_msg_0.deconflict_offset = 0.846266173643;
    tmp_msg_0.accel_safe_margin = 0.417323442023;
    tmp_msg_0.accel_lim_x = 0.892059278633;
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
    msg.setTimeStamp(0.679149297961);
    msg.setSource(17788U);
    msg.setSourceEntity(44U);
    msg.setDestination(53811U);
    msg.setDestinationEntity(219U);
    msg.type = 35U;
    msg.op = 237U;
    msg.err_mean = 0.167226041346;
    msg.dist_min_abs = 0.663074263385;
    msg.dist_min_mean = 0.697352606164;
    msg.roll_rate_mean = 0.198898759816;
    msg.time = 0.78134453858;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 211U;
    tmp_msg_0.lon_gain = 0.102022771455;
    tmp_msg_0.lat_gain = 0.52480117006;
    tmp_msg_0.bond_thick = 0.361733722059;
    tmp_msg_0.lead_gain = 0.0933076381768;
    tmp_msg_0.deconfl_gain = 0.313224676461;
    tmp_msg_0.accel_switch_gain = 0.30479850376;
    tmp_msg_0.safe_dist = 0.037557162094;
    tmp_msg_0.deconflict_offset = 0.0396073849265;
    tmp_msg_0.accel_safe_margin = 0.451135121637;
    tmp_msg_0.accel_lim_x = 0.0243771219482;
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
    msg.setTimeStamp(0.520430112218);
    msg.setSource(17928U);
    msg.setSourceEntity(11U);
    msg.setDestination(11399U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.823572965579;
    msg.lon = 0.836693009355;
    msg.eta = 617899830U;
    msg.duration = 43072U;

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
    msg.setTimeStamp(0.599602867843);
    msg.setSource(1124U);
    msg.setSourceEntity(243U);
    msg.setDestination(59350U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.941647657057;
    msg.lon = 0.466212877539;
    msg.eta = 1292042897U;
    msg.duration = 33135U;

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
    msg.setTimeStamp(0.980645819514);
    msg.setSource(2759U);
    msg.setSourceEntity(71U);
    msg.setDestination(30945U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.754244274971;
    msg.lon = 0.68581571955;
    msg.eta = 1594957030U;
    msg.duration = 54939U;

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
    msg.setTimeStamp(0.777040532388);
    msg.setSource(60670U);
    msg.setSourceEntity(214U);
    msg.setDestination(63883U);
    msg.setDestinationEntity(68U);
    msg.plan_id = 11881U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.193463321723;
    tmp_msg_0.lon = 0.0355887190342;
    tmp_msg_0.eta = 1279082529U;
    tmp_msg_0.duration = 24658U;
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
    msg.setTimeStamp(0.8250843802);
    msg.setSource(45920U);
    msg.setSourceEntity(13U);
    msg.setDestination(27412U);
    msg.setDestinationEntity(65U);
    msg.plan_id = 3272U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.092113330503;
    tmp_msg_0.lon = 0.033970848728;
    tmp_msg_0.eta = 378539347U;
    tmp_msg_0.duration = 28965U;
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
    msg.setTimeStamp(0.859233011761);
    msg.setSource(4470U);
    msg.setSourceEntity(117U);
    msg.setDestination(4342U);
    msg.setDestinationEntity(71U);
    msg.plan_id = 1014U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0973139734624;
    tmp_msg_0.lon = 0.334448094876;
    tmp_msg_0.eta = 3243583626U;
    tmp_msg_0.duration = 6471U;
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
    msg.setTimeStamp(0.978570629034);
    msg.setSource(11137U);
    msg.setSourceEntity(58U);
    msg.setDestination(1177U);
    msg.setDestinationEntity(196U);
    msg.type = 175U;
    msg.command = 149U;
    msg.settings.assign("HFSGLXRZQLPAPMZKXUXLJNWPOXAZDJQCSVZXJGSSOJJRSMPADVYYIYBCT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 1805U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CTZLKQKBHYHLREJHRDHCISQKAMZIWETTLSUZTEQYXFPIOPGIRTRNCNNKYSIFPBAAXVDOYVJGGKSUISPJHUCXH");

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
    msg.setTimeStamp(0.265516898706);
    msg.setSource(55806U);
    msg.setSourceEntity(110U);
    msg.setDestination(1423U);
    msg.setDestinationEntity(157U);
    msg.type = 115U;
    msg.command = 152U;
    msg.settings.assign("ULMBLFKRTWHQQSZMUFEBYSUNEYCTHESROTRFYUFZKINDXNTLMOQWCZABJJUOORRSEDXMNGWDSJHXAXXH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 16652U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.223898435008;
    tmp_tmp_msg_0_0.lon = 0.613091038636;
    tmp_tmp_msg_0_0.eta = 3746231758U;
    tmp_tmp_msg_0_0.duration = 19884U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LSTNJVCHANNHDGEDPJUIHPEZIREYOVFXODLGOBNMUQTBTZYSUTIWFKZGFVMIXWNWWVETHYOQRXOGBIFFZVBLVAVMYVRSIWIBGMCPLDMZCVGAQDCONKIQKETJXPEPLSXUWJLAGLYRTQCJQWPYPDQZNPSFBXAEKUKJIZTMSWNBARAAJDZACMAUKKQFOJBOKBSROSGUHLKPRVRFFQDMCDJXCTXHTJQWDWYZKEXSFHGYMUYGLI");

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
    msg.setTimeStamp(0.839334598448);
    msg.setSource(57849U);
    msg.setSourceEntity(222U);
    msg.setDestination(45162U);
    msg.setDestinationEntity(101U);
    msg.type = 9U;
    msg.command = 214U;
    msg.settings.assign("UGRSLIMWJUAOBEJZGRVYGVNOETPMIRSNSUQJBPXMPFDQZNVHPCAXFTJLUWSJBBYMAZFQCNKLFVVPESSGCHMLTJFBXINPWDDOITW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 53741U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZLFHLYWPOPRKRNBMMBQJPKMFLITTQNKLLYUHRXSACDRUMFHQNQVOGSYDUUBJEEPJDHATHBJTHIRXJIXWFZHBJJOVRYIVPAFZKPASNPFUOFXOKFBKTXYTLYVCJ");

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
    msg.setTimeStamp(0.561556024339);
    msg.setSource(35717U);
    msg.setSourceEntity(184U);
    msg.setDestination(24297U);
    msg.setDestinationEntity(52U);
    msg.state = 37U;
    msg.plan_id = 43294U;
    msg.wpt_id = 33U;
    msg.settings_chk = 2962U;

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
    msg.setTimeStamp(0.904343768609);
    msg.setSource(29374U);
    msg.setSourceEntity(34U);
    msg.setDestination(4018U);
    msg.setDestinationEntity(140U);
    msg.state = 71U;
    msg.plan_id = 33422U;
    msg.wpt_id = 252U;
    msg.settings_chk = 22411U;

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
    msg.setTimeStamp(0.129644474004);
    msg.setSource(44299U);
    msg.setSourceEntity(252U);
    msg.setDestination(13726U);
    msg.setDestinationEntity(164U);
    msg.state = 68U;
    msg.plan_id = 16848U;
    msg.wpt_id = 71U;
    msg.settings_chk = 35912U;

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
    msg.setTimeStamp(0.682433810312);
    msg.setSource(15596U);
    msg.setSourceEntity(197U);
    msg.setDestination(56490U);
    msg.setDestinationEntity(53U);
    msg.uid = 236U;
    msg.frag_number = 130U;
    msg.num_frags = 131U;
    const char tmp_msg_0[] = {90, -27, -2, -27, 101, 51, 27, -15, 115, -61, 97, 63, 21, 115, 74, 25, 115, 36, 59, -82, -70, 71, -65, 93, 125, -117, 50, -44, 104, 40, 106, -86, -50, 118, 45, -124, -67, 45, -41, 112, -94, -122, 104, -115, -75, -90, -37, -87, 126, -11, -54, -12, 12, 54, -67, -126, -59, -66, -105, -92, -127, 94, -14, 93, -73, 96, -126, -123, 30, 89, -74, -12, -115, -5, 75, -2, 58, -126, 28, 31, 71, 29, -11, 106, 75, 107, -46, -4, -128, 84, -29, 113, -98, -49, 95, -7, -128, 82, 54, -5, -119, 28, 7, 42, 74, -13, -52, 40, -53, -120, -13, 53, -21, 5, -36, 116, -124, 46};
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
    msg.setTimeStamp(0.825654894546);
    msg.setSource(6562U);
    msg.setSourceEntity(179U);
    msg.setDestination(34309U);
    msg.setDestinationEntity(195U);
    msg.uid = 93U;
    msg.frag_number = 198U;
    msg.num_frags = 154U;
    const char tmp_msg_0[] = {-93, 24, 121, 63, -19, -63, 96, 43, -55, -99, 12, 121, -17, 19, 87, -14, -78, 36, 3, 36, 90, 106, -57, -17, -44, -53, 20, -33, -36};
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
    msg.setTimeStamp(0.571778484841);
    msg.setSource(7557U);
    msg.setSourceEntity(27U);
    msg.setDestination(45163U);
    msg.setDestinationEntity(216U);
    msg.uid = 27U;
    msg.frag_number = 222U;
    msg.num_frags = 227U;
    const char tmp_msg_0[] = {38, 75, 118, -6, -119, 121, -66, -52, 70, 54, -121, -31, -84, -40, -15, 82, -7, 11, 3, 58, 89, 122, 11, 42, -56, 88, -86, 75, -4, 62, -19, 84, -75, -39, 20, -31, -22, -50, -25, 119, -124, -36, -126, 82, -99, 92, 67, -45, 72, -47, 61, 97, -81, 67, 8, -17, 109, 113, -92, -37, 34, 10, -94, 74, 53, 13, -28, -52, -98, 24, -79, 76, 79, -62, -28, -20, 97, 114, -41, 109, 64, 50, 34, 81, -39, -89, 87, -15, -3, -74, 62, 64, -96, 123, 42, 97, 40, -84, -2, 33, -6, 72, -93, 45, 71, -122, -91, 40, -62, -99, -97, 60, -42, 90, 22, -30, -66, -49, 74, 66, 19, -47, -62, -52, -53, -12, 91, 50, 121, 19, 64, -39, 21, -60, -93, -53, 121, 11, -108, -84, 67, -35, -24, -116, -86, -29, -101, -39, -101, 84, 37, -39, 91, -44, 56, 33, 97, -85, 38, 3, 58, -73, -38, -25, -38, -123, -78, 120, -85, 45, 36, -119, -52, 111, -107, -78, -28, 22, -23, -11, -113, -119, 101, -125, -108};
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
    msg.setTimeStamp(0.968503866491);
    msg.setSource(62523U);
    msg.setSourceEntity(126U);
    msg.setDestination(20684U);
    msg.setDestinationEntity(134U);
    msg.content_type.assign("SLAVRQHIPRUVSUOWLJZKDWLOHOHFJIYNSFSYVMFCZCIYTRLNZUCHZIGHLQEVULAJBUAODJRSTYMDIXBEXPDHEFGQUQDPQDAJQSPKKLCLNJMMCEWWVMENJOBXWOCFYTZKEYDMEUCGSRPAGRFQFMKDMBGDQAXQWNN");
    const char tmp_msg_0[] = {102, 106, -53, -43, 4, 21, 68, -74, 17, -69, -128, -107, -43, -79, -15, -124, -122, 65, -111, -40, -6, -13, 52, -7, 105, -83, 80, -9, -64, 79, 26, -67, 40, -54, 31, 1, -95};
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
    msg.setTimeStamp(0.817129274744);
    msg.setSource(49978U);
    msg.setSourceEntity(104U);
    msg.setDestination(37894U);
    msg.setDestinationEntity(86U);
    msg.content_type.assign("FFYARHHNZMJYEYLGPWBKFHYSHBLWDKCQDJVSUXGBOICRCCMJPOXNLAQJCGOINJIYRBPHHCTQZLK");
    const char tmp_msg_0[] = {5, -42, 7, 117, -93, 85, -10, -113, -110, 121, -113, -91, 16, -79, -49, 6, -80, -128, 72, -52, 35, -5, -126, 108, 96, -7, -54, -115, -19, -12, -68, 85, 75, 100, -78, -22, -126, -75, -109, -85, -21, -27, -72, 13, 106, -32, 95, -110, 40, 104, 124, -6, 22, 115, 110, -59, -32, -14, -16, -33, -5, -118, -24, -128, -64, -15, 53, -99, 44, 25, 96, 79, 70, 101, 61, -72, 74, 72, 39, 6, -55, -34, -119, 17, -55, 55, 41, -73, -98, -75, -14, 31, -40, 63, -99, -37, -53, -2, 75, 110, -4, 113, -30, 48, -116, -83, 124, 114, 54, -16, 49, 95, 58, 30, -50, 77, 73};
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
    msg.setTimeStamp(0.333213411406);
    msg.setSource(25309U);
    msg.setSourceEntity(186U);
    msg.setDestination(57619U);
    msg.setDestinationEntity(44U);
    msg.content_type.assign("IYXKBTEYCRDQUFBDCTUNQGJEXFRZNZUAOTNAFXVYXGGRGIPXIFJTKQCGSBKXQAXHLGQMCWHFPBMTIUJYKEBYE");
    const char tmp_msg_0[] = {-27, -115, 58, 48, 50, -20, -100, 98, -35, 74, 116, -7, -38, -54, -41, -6, -25, -27, 5, 119, -4, -127, 48, 12, -59, 52, 5, 48, -8, 109, 86, 28, -20, -125, -76, 37, -53, 33, -59, -126, -77, -18, 47, -65, -16, -83, 64, 52, 55, 116, -54, 67, -19, 122, 47, -92, -11, -32, 66, 103, -59, 22, -30, 3, -14, -29, 83, -68, 44, -109, -82, 13, -95, 66, -38, -109, 109, -87, -42, -128, 103, 48, -32, -70, 52, 114, 31, 92, -31, 43, -100, -18, 21, -51, 66, -112, -113, 11, 25, 76, -128, 83, -123, 81, -78, 25, 60, -47, 57, 58, -60, 37, -95, -127, 36, -23, 105, 7, -9, 115, 27, -12, -76, 44, -63, -66, 27, -7, 39, -92, -93, -57, -42, -2, 123, -24, -59, -38, 69, -17, -51, -34, 92, 42, 32, 15, 96, 28, -19, 122, 24, 82, -56, -83, 23, 55, 115, -39, -9, 85, -99, 49, -102, 97, -6, 103, 25, 99, -61, 3, -20, -22, 80, -29, -30, -88, 102, -40, 81, 2, -61, 16, -111, 118, 96, 72, 51, -56, 63, -120, -128, 98, -16, 112, 36, 73, -13, 76, 31, -68, -1, 16, -109, 120, -43, 103, -95, 112, -123, 13, 15, 55, -114, 94, 120, -57, -31, -59, 104, -82, -48, 51, -100, -85, -1, 90, 78, 66, 22, -102, 125, 73, -69, -96, -86, -9, -107, -23, 12, 24, -18, 82, 26, 77, 79, 114, -113, 26, 39, 30, 79};
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
    msg.setTimeStamp(0.621934723053);
    msg.setSource(15455U);
    msg.setSourceEntity(98U);
    msg.setDestination(12511U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.468904868473);
    msg.setSource(47706U);
    msg.setSourceEntity(116U);
    msg.setDestination(36690U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.377105291511);
    msg.setSource(40589U);
    msg.setSourceEntity(81U);
    msg.setDestination(60325U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.0696100037754);
    msg.setSource(41168U);
    msg.setSourceEntity(109U);
    msg.setDestination(3048U);
    msg.setDestinationEntity(170U);
    msg.target = 58116U;
    msg.bearing = 0.542455567395;
    msg.elevation = 0.512172174725;

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
    msg.setTimeStamp(0.538982026922);
    msg.setSource(3233U);
    msg.setSourceEntity(97U);
    msg.setDestination(662U);
    msg.setDestinationEntity(62U);
    msg.target = 53090U;
    msg.bearing = 0.167292925067;
    msg.elevation = 0.714380624686;

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
    msg.setTimeStamp(0.983871889745);
    msg.setSource(33503U);
    msg.setSourceEntity(177U);
    msg.setDestination(9144U);
    msg.setDestinationEntity(110U);
    msg.target = 24932U;
    msg.bearing = 0.777541767736;
    msg.elevation = 0.312928498063;

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
    msg.setTimeStamp(0.84818680166);
    msg.setSource(33914U);
    msg.setSourceEntity(158U);
    msg.setDestination(6679U);
    msg.setDestinationEntity(247U);
    msg.target = 53474U;
    msg.x = 0.884020945769;
    msg.y = 0.392814953762;
    msg.z = 0.0293808426831;

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
    msg.setTimeStamp(0.286333008821);
    msg.setSource(14961U);
    msg.setSourceEntity(123U);
    msg.setDestination(42165U);
    msg.setDestinationEntity(151U);
    msg.target = 49787U;
    msg.x = 0.0611858122239;
    msg.y = 0.648627504252;
    msg.z = 0.0138214527925;

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
    msg.setTimeStamp(0.445947996973);
    msg.setSource(30036U);
    msg.setSourceEntity(238U);
    msg.setDestination(50767U);
    msg.setDestinationEntity(40U);
    msg.target = 39198U;
    msg.x = 0.906820695089;
    msg.y = 0.205665885244;
    msg.z = 0.970981217301;

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
    msg.setTimeStamp(0.115108497222);
    msg.setSource(52628U);
    msg.setSourceEntity(230U);
    msg.setDestination(58333U);
    msg.setDestinationEntity(70U);
    msg.target = 45957U;
    msg.lat = 0.398741102214;
    msg.lon = 0.425805311522;
    msg.z_units = 45U;
    msg.z = 0.12074252277;

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
    msg.setTimeStamp(0.444587508727);
    msg.setSource(29582U);
    msg.setSourceEntity(109U);
    msg.setDestination(59491U);
    msg.setDestinationEntity(73U);
    msg.target = 61915U;
    msg.lat = 0.184588403489;
    msg.lon = 0.32657621107;
    msg.z_units = 92U;
    msg.z = 0.229629067321;

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
    msg.setTimeStamp(0.805426212106);
    msg.setSource(43312U);
    msg.setSourceEntity(121U);
    msg.setDestination(49263U);
    msg.setDestinationEntity(7U);
    msg.target = 2156U;
    msg.lat = 0.26615852757;
    msg.lon = 0.0860472765357;
    msg.z_units = 46U;
    msg.z = 0.630558312283;

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
    msg.setTimeStamp(0.97684953353);
    msg.setSource(42434U);
    msg.setSourceEntity(178U);
    msg.setDestination(9038U);
    msg.setDestinationEntity(6U);
    msg.locale.assign("XDCVCNLKATXJGHBIAWZCUWZFMJLQQJRJP");
    const char tmp_msg_0[] = {-1, -6, -111, -68, -46, 10, 99, 37, -115, 74, -116, -1, 112, -36, -77, -11, 43, -77, 122, 125, 61, 95, 93, 15, -111, -92, 27, -74, 113, 118, 40, 82, -55, -79, 126, -27, -115, 76, -117, 70, 112, -82, -45, 48, -71, -26, -1, -62, -125, -59, 37, 32, -22, 111, -81, -46, 88, -128, -125, 82, -47, 8, 91, -61, -107, 11, -113, 5, 89, 64, 76, -60, 80, 111, 68, 31, 16, 83, 44, 45, -49, -83, 50, -125, 69, -127, -102, -93, -31, 21, -8, -113, 33, -19, 7, -55, 122, -22, -13, 66, -62, 20, -12, -110, -39, -97, -18, 104, -76, 100, -60, 53, -104, -100, 38, 76, -127, 83, -95, -31, 64, 31, -101, 73, 53, -117, 26, -116, 26, 104, 11, -124, 78, 101, 39, -82, -67, -123, -34, 22, -57, -116, -82, -95, -59, -33, -94, 28, -105, -112, -28, 62, -17, -13, 113, -89, 110, -125, -53, -22, 10, -72, 26, 104, -53, -84, -47, 81, 81, -93, 21, -86, 112, 3, -28, -119, 72, 118, 58, 15, -70, 47, 38, 54, -121, -117, -54, -39, -103, -44, -82, -60, -37, -57, 59, -46, 37, 80, 52, 42, -61, -54, -120, -92, 98, -24, 107};
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
    msg.setTimeStamp(0.370667770003);
    msg.setSource(57051U);
    msg.setSourceEntity(251U);
    msg.setDestination(9049U);
    msg.setDestinationEntity(69U);
    msg.locale.assign("RLBKANIVIZKGPTGMSPEGIYRFXPTHTYOQJTZTSEOGJSOKYRHSPUPIQWUAEYPUIKJJAZVAE");
    const char tmp_msg_0[] = {-109, -74, 72, 46, 99, -37, 45, 72, 43, 83, 37, -80, -42, -102, -18, 99, -128, 63, -16, 116, -71, 104, 71, 121, -119, 53, -49, 65, 108, 44, -106, 77, -18, -58, 90, 122, -90, -66, 79, -96, -85, -109, -89, 2, 56, 61, 25, 126, -9, -111, 105, 37, -85, 30, -75, -124, 95, 24, -105, -41, -33, -121, -27, 7, -80, -15, 126, 42, -107, -83, -94, 31, -12, 75, 95, -119, -71, 17, 73, 71, -4, 72, 60, 106, 22, 0, -87, 94, 100, -69, -1, -44, -58, -123, 53, 119, -123, -25, -104, 21, -25, -75, 41, 109, -121, -82, 39, 29, -24, -45, -3, 12, -69, 76, -6, -111, -13, 18, 79, -95, 95, 46, -87, 11, -128, -106, -106, 99, 73, 60, -79, -112, -85, -92, 28, 14, 61, -128, 10, -112, -76, -60, 88, 111, 61, 81, 85, -45, 55, 27, -16, 38, 105, -54, 48, -127, 21, -86, -111, -85, -100, 42, 87, 3, 70, 112, 70, -86, -33, -36, 96, -14, -20, -99, 117, -40, -6, -101, 87, 114, -20, 119, 104, -42, -106, -41, 94, -85, -50, -88, 92, 59, -104, -113, 85, 20, 90, 21, -47, 19, -17, -88, 113, -88, -102, 68, -116, -69, 29, 54, 43, -128, -17, 86, 81, -80, 79, -27, 36, -25, -126, -2, -116, 15};
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
    msg.setTimeStamp(0.774889898228);
    msg.setSource(11398U);
    msg.setSourceEntity(238U);
    msg.setDestination(63836U);
    msg.setDestinationEntity(21U);
    msg.locale.assign("DHWRUQMSSNIGCIZPPBGOOZBSFFLIXKUTTUODMIOGVPVRRDFNLEREETWTMORQXXIVOMRYERZUYBEAFMHYCKWQOYTNIEUAUBSDXZJJPAZNVDSNKEWLGNCEQFEKSVBIZMNBGU");
    const char tmp_msg_0[] = {-61, -62, -48, 52, 87, -49, 21, 100, 97, 56, 75, -29, 12, 47, -55, 12, -109, 81, 110, -48, -99, -68, -128, 90, 24, 101, -59, -29, -115, 59, 101, 79, -112, -47, -16, 40, -64, 113, 62, 4, 73, 31, 114, 87, 123, 53, -45, -119, -5, -38, 41, 94, -80, 44, 74, 13, 64, 40, -63, -49, -96, 75, 10, -27, -94, -105, 103, -121, 34, -74, 111, 115, -75, 30, 49, -21, 79, -52, -11, 107, 41, 38, -52, -10, 73, 106, 26, 90, -49, 60, -83, 71, -87, 56, -36, -89, 62, 101, -101, -81, -101, 123, 74, 5, 53, 56, 2, 93, -47, 2, -57, 110, 87, -60, -27, -4, 69, 31, 4, -3, 98, 54, 70, 5, 59, 34, -122, -20, 59, 10, -23, 31, -122, 68, -36, 95, 104, 74, 94, -105, 49, 32, 117, 94, 111, 27, -5, 50, -40, -67};
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
    msg.setTimeStamp(0.68146727221);
    msg.setSource(9974U);
    msg.setSourceEntity(118U);
    msg.setDestination(57073U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.0890563334442);
    msg.setSource(19709U);
    msg.setSourceEntity(52U);
    msg.setDestination(29578U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.950571985093);
    msg.setSource(31546U);
    msg.setSourceEntity(69U);
    msg.setDestination(37863U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.993866231277);
    msg.setSource(9405U);
    msg.setSourceEntity(248U);
    msg.setDestination(58162U);
    msg.setDestinationEntity(130U);
    msg.camid = 54U;
    msg.x = 10006U;
    msg.y = 21704U;

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
    msg.setTimeStamp(0.0409431499476);
    msg.setSource(12013U);
    msg.setSourceEntity(203U);
    msg.setDestination(29503U);
    msg.setDestinationEntity(60U);
    msg.camid = 42U;
    msg.x = 64396U;
    msg.y = 1901U;

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
    msg.setTimeStamp(0.1901194234);
    msg.setSource(17687U);
    msg.setSourceEntity(210U);
    msg.setDestination(55253U);
    msg.setDestinationEntity(221U);
    msg.camid = 125U;
    msg.x = 23583U;
    msg.y = 45088U;

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
    msg.setTimeStamp(0.828720699565);
    msg.setSource(6362U);
    msg.setSourceEntity(143U);
    msg.setDestination(39107U);
    msg.setDestinationEntity(170U);
    msg.camid = 223U;
    msg.x = 40948U;
    msg.y = 48769U;

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
    msg.setTimeStamp(0.774502654848);
    msg.setSource(36104U);
    msg.setSourceEntity(211U);
    msg.setDestination(61777U);
    msg.setDestinationEntity(99U);
    msg.camid = 119U;
    msg.x = 61721U;
    msg.y = 32903U;

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
    msg.setTimeStamp(0.215599738364);
    msg.setSource(32956U);
    msg.setSourceEntity(219U);
    msg.setDestination(12501U);
    msg.setDestinationEntity(169U);
    msg.camid = 115U;
    msg.x = 53053U;
    msg.y = 37033U;

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
    msg.setTimeStamp(0.218837550566);
    msg.setSource(42357U);
    msg.setSourceEntity(209U);
    msg.setDestination(14770U);
    msg.setDestinationEntity(47U);
    msg.tracking = 139U;
    msg.lat = 0.863567299504;
    msg.lon = 0.273551595982;
    msg.x = 0.361527911386;
    msg.y = 0.100552106608;
    msg.z = 0.420488552899;

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
    msg.setTimeStamp(0.599522577867);
    msg.setSource(14820U);
    msg.setSourceEntity(254U);
    msg.setDestination(48190U);
    msg.setDestinationEntity(28U);
    msg.tracking = 14U;
    msg.lat = 0.995814993433;
    msg.lon = 0.76016853689;
    msg.x = 0.370048575412;
    msg.y = 0.238431142239;
    msg.z = 0.0926172488245;

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
    msg.setTimeStamp(0.312994495177);
    msg.setSource(53437U);
    msg.setSourceEntity(12U);
    msg.setDestination(34741U);
    msg.setDestinationEntity(210U);
    msg.tracking = 105U;
    msg.lat = 0.630999856942;
    msg.lon = 0.715204577806;
    msg.x = 0.944779976972;
    msg.y = 0.148268549412;
    msg.z = 0.992428082101;

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
    msg.setTimeStamp(0.546671875338);
    msg.setSource(16030U);
    msg.setSourceEntity(209U);
    msg.setDestination(50912U);
    msg.setDestinationEntity(96U);
    msg.target.assign("OCJBBTZLZHYXWHFQRSMVIMIRERYCWVDRHANMPDSOMAAOLKGADYQINXDUAHNETGSXVFPWBDEIOJRDLRQLHWZCVBJTCUKJYTIHKZJNQXMNPDWKFTZYAUTIPAGPGUQNZHUWPPJWSFTJBKKCVUSLCDSZPGEVTXOYGBHOKUPQFEHCXCB");
    msg.lbearing = 0.872976440929;
    msg.lelevation = 0.00355043245785;
    msg.bearing = 0.523344259369;
    msg.elevation = 0.978726535843;
    msg.phi = 0.140839103882;
    msg.theta = 0.265222745535;
    msg.psi = 0.17698862675;
    msg.accuracy = 0.138098596371;

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
    msg.setTimeStamp(0.857846078629);
    msg.setSource(7059U);
    msg.setSourceEntity(89U);
    msg.setDestination(58348U);
    msg.setDestinationEntity(229U);
    msg.target.assign("SOZWHBRQJVOUUBRARHMIOKOFCNORMCSIJYZZCDJIMAPFUDLRNN");
    msg.lbearing = 0.131971095424;
    msg.lelevation = 0.682014791635;
    msg.bearing = 0.639154103397;
    msg.elevation = 0.343855105312;
    msg.phi = 0.308998693656;
    msg.theta = 0.00337426871298;
    msg.psi = 0.667470198723;
    msg.accuracy = 0.930808277456;

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
    msg.setTimeStamp(0.0575004857791);
    msg.setSource(25185U);
    msg.setSourceEntity(110U);
    msg.setDestination(14602U);
    msg.setDestinationEntity(91U);
    msg.target.assign("CGXVNIWEBNZVVPHOGMFYTHGPXKMKPCITDPAYNZAFEQWSBDFPTXRBRKTYUHVEQMCAVTCIMIPHRHBJUBSOVTXDMOJWXUBENRERCXSDLDMZYYOVSEWCDZTWWULSCFHQEUWZYUVAJGNLOIBBQFZTA");
    msg.lbearing = 0.105355384599;
    msg.lelevation = 0.854107995832;
    msg.bearing = 0.886745869716;
    msg.elevation = 0.448887771857;
    msg.phi = 0.361867729992;
    msg.theta = 0.840083004475;
    msg.psi = 0.665471027627;
    msg.accuracy = 0.974507113395;

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
    msg.setTimeStamp(0.919872647437);
    msg.setSource(8908U);
    msg.setSourceEntity(196U);
    msg.setDestination(23065U);
    msg.setDestinationEntity(48U);
    msg.target.assign("FMBHBQRQNKKPBYYDMVOLPBRSHALDEYNFVYGOHQRTPWLSDZSVDUIMGFGXRJNJUKJJWDWDCYTCWGHTWEPIZQPSAFVOGZLLNLQQIZTYPUOKSBKKNVTXXYPXXCKRLVJDXRILIEASXC");
    msg.x = 0.860956846445;
    msg.y = 0.637412708508;
    msg.z = 0.901866790809;
    msg.n = 0.983617470452;
    msg.e = 0.952251957245;
    msg.d = 0.852044445089;
    msg.phi = 0.105983274642;
    msg.theta = 0.898327034821;
    msg.psi = 0.931570000089;
    msg.accuracy = 0.448066038642;

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
    msg.setTimeStamp(0.0882084367602);
    msg.setSource(36458U);
    msg.setSourceEntity(167U);
    msg.setDestination(32612U);
    msg.setDestinationEntity(88U);
    msg.target.assign("QEKZLPANJUUUQYPEKBQRPJBCWLCZZDYRHQBVDSOVXEWDANBKGNFCSLAKGDIHOLAHXMAZXKGNVQFZIOWREFVYXRFQFVGTMJMISAOTTRHDLPIPVHWKIPTGCJTJBHGIVRBY");
    msg.x = 0.111960085174;
    msg.y = 0.151101248564;
    msg.z = 0.118588983351;
    msg.n = 0.73722460023;
    msg.e = 0.832327335485;
    msg.d = 0.363333928241;
    msg.phi = 0.0838426429745;
    msg.theta = 0.880212490109;
    msg.psi = 0.770294319671;
    msg.accuracy = 0.0264151472793;

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
    msg.setTimeStamp(0.117176744529);
    msg.setSource(37705U);
    msg.setSourceEntity(215U);
    msg.setDestination(34751U);
    msg.setDestinationEntity(25U);
    msg.target.assign("UBRETRLVLHCSPXHXPCCXQVIVYKWTZQFKNTGDYDAJMEZZOMBQZXXLCFRNGGHSYVSEJNUAYHYNFJGGILPCJOWDKFGHQAACNBNUPWFIRQIMLSJRCOVIIRXBUFMWQGJRTHKIFDADJIKSVNFLUKLJEWPORKQSJSDKAUZTPNROAIUZDYOQKZBCFEISOYRMOTEQYEBGLZUTFDUKAOBXDMZMLLAVTHVQWPJMMBVWEDVSWPHEMCNPZYGU");
    msg.x = 0.739406823406;
    msg.y = 0.363230804544;
    msg.z = 0.634105507333;
    msg.n = 0.152650037868;
    msg.e = 0.702480146483;
    msg.d = 0.171546805267;
    msg.phi = 0.177168820651;
    msg.theta = 0.629579361474;
    msg.psi = 0.0860702569644;
    msg.accuracy = 0.742728958624;

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
    msg.setTimeStamp(0.265087178762);
    msg.setSource(32459U);
    msg.setSourceEntity(180U);
    msg.setDestination(233U);
    msg.setDestinationEntity(116U);
    msg.target.assign("COQJGYRIDSTBAWLWDVHFEMPFIFTXRSJQZWXVTKCZEZQTMPCOPHGCJSPXJTMNYAMTUOGR");
    msg.lat = 0.128513126628;
    msg.lon = 0.680155608614;
    msg.z_units = 173U;
    msg.z = 0.466109776399;
    msg.accuracy = 0.49180947681;

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
    msg.setTimeStamp(0.60466684404);
    msg.setSource(52246U);
    msg.setSourceEntity(251U);
    msg.setDestination(13937U);
    msg.setDestinationEntity(201U);
    msg.target.assign("XGEOTZAHBXGOCGEXHPVGESJQCXJYHOFDRNCTPLYNVMSVLQJCDRIHYFFWCRGHPNYFIGRLJIRFIMJSBVRRZPSQFNOENEOYZCBXWCECNUZMQANQETMQWVINYXHUBKDVTVQUKAUPFJTVKNEUZYJMOESBIRFKZLOMLQARBWOKHATZTDAPJVOXUWIKZJLNPDXMSKAADLHWIBGPRTLSWDFSPGKBOZAWMAGCGBMXJUUSMCUI");
    msg.lat = 0.149967450231;
    msg.lon = 0.323228417202;
    msg.z_units = 15U;
    msg.z = 0.00133160449084;
    msg.accuracy = 0.911663942488;

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
    msg.setTimeStamp(0.892309040255);
    msg.setSource(37994U);
    msg.setSourceEntity(40U);
    msg.setDestination(10718U);
    msg.setDestinationEntity(114U);
    msg.target.assign("YKVOWETLBXMIHKZPTALXIGJEKIUTGWXXMFMBAJFWOKSQIJQEJNKDBVSQVZADCLTSPZIWBCYTZUDUOJEPRPFXHIMN");
    msg.lat = 0.160073198553;
    msg.lon = 0.341086561547;
    msg.z_units = 3U;
    msg.z = 0.794107921581;
    msg.accuracy = 0.659617675533;

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
    msg.setTimeStamp(0.351673975736);
    msg.setSource(49113U);
    msg.setSourceEntity(39U);
    msg.setDestination(29929U);
    msg.setDestinationEntity(164U);
    msg.name.assign("KEUWZRIBJQQKHWLVAABPXRYJFWAHTIFLUHYRMBTLJZDUCOQOJVUOOXQEDAPZSUDICOMXYDACDMJWCMVXESLPKPBCDYZBIHDFUGAOSXWVNHSLFWPDGWSXARITOOHYWNRSSHINMEEFJSKERMUFPUTZBMTOQVPUTNZGBTLFLVRCYTP");
    msg.lat = 0.585158358694;
    msg.lon = 0.82828278174;
    msg.z = 0.651367030972;
    msg.z_units = 17U;

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
    msg.setTimeStamp(0.381471237743);
    msg.setSource(49086U);
    msg.setSourceEntity(123U);
    msg.setDestination(65207U);
    msg.setDestinationEntity(2U);
    msg.name.assign("VYPZJUTZCJIFZZNMVNRWPNHWETMBMXEUICCKTOQGYNWWEFECBQCLJWHKINMIPUDCIXDEEZXLHSDVBUPEANAZBRFDNSSDQZHABOUXOYLAJGOCWTALRSBYZTSCBTAMMFKFPDLGQXMCKAVKDULLXYZSRI");
    msg.lat = 0.407350594238;
    msg.lon = 0.377487050609;
    msg.z = 0.371338699313;
    msg.z_units = 193U;

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
    msg.setTimeStamp(0.163353981215);
    msg.setSource(55792U);
    msg.setSourceEntity(157U);
    msg.setDestination(50336U);
    msg.setDestinationEntity(87U);
    msg.name.assign("PADEUOKFAFLRCDHROZDUMPYVYNVWMJLSICOESMAODJLIGVBFPZCPHWQDPGUVKJPGDSBMXDXZMLIRLMIFTCGZRBIZNTKKLOANVSFITWDWGQRQQVXYFDMWGBJFQENAMPTFQTRFTNKHSCHYYIJJGWLEUTTSV");
    msg.lat = 0.177348481661;
    msg.lon = 0.0821198283764;
    msg.z = 0.113635359041;
    msg.z_units = 111U;

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
    msg.setTimeStamp(0.128361162817);
    msg.setSource(10711U);
    msg.setSourceEntity(57U);
    msg.setDestination(16836U);
    msg.setDestinationEntity(189U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.232462540812);
    msg.setSource(55482U);
    msg.setSourceEntity(210U);
    msg.setDestination(7379U);
    msg.setDestinationEntity(83U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.0619524037472);
    msg.setSource(14843U);
    msg.setSourceEntity(249U);
    msg.setDestination(14917U);
    msg.setDestinationEntity(115U);
    msg.op = 6U;

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
    msg.setTimeStamp(0.719135145283);
    msg.setSource(65462U);
    msg.setSourceEntity(15U);
    msg.setDestination(37595U);
    msg.setDestinationEntity(155U);
    msg.value = 0.437325056809;
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
    msg.setTimeStamp(0.204997300938);
    msg.setSource(30555U);
    msg.setSourceEntity(24U);
    msg.setDestination(46075U);
    msg.setDestinationEntity(196U);
    msg.value = 0.860396772699;
    msg.type = 35U;

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
    msg.setTimeStamp(0.494652490459);
    msg.setSource(46688U);
    msg.setSourceEntity(83U);
    msg.setDestination(30328U);
    msg.setDestinationEntity(72U);
    msg.value = 0.175076767613;
    msg.type = 39U;

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
    msg.setTimeStamp(0.333299317258);
    msg.setSource(24911U);
    msg.setSourceEntity(69U);
    msg.setDestination(22284U);
    msg.setDestinationEntity(56U);
    msg.value = 0.617451349627;

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
    msg.setTimeStamp(0.852169872478);
    msg.setSource(10693U);
    msg.setSourceEntity(56U);
    msg.setDestination(64275U);
    msg.setDestinationEntity(70U);
    msg.value = 0.327708205071;

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
    msg.setTimeStamp(0.135837815608);
    msg.setSource(41670U);
    msg.setSourceEntity(77U);
    msg.setDestination(38441U);
    msg.setDestinationEntity(98U);
    msg.value = 0.388457775115;

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
    msg.setTimeStamp(0.653895308221);
    msg.setSource(59990U);
    msg.setSourceEntity(11U);
    msg.setDestination(46825U);
    msg.setDestinationEntity(65U);
    msg.timestamp_last_service = 0.926221998925;
    msg.time_next_service = 0.41126534563;
    msg.time_motor_next_service = 0.972162970189;
    msg.time_idle_ground = 0.00134261910499;
    msg.time_idle_air = 0.0463349870885;
    msg.time_idle_water = 0.0936121724935;
    msg.time_idle_underwater = 0.905650000859;
    msg.time_idle_unknown = 0.580586173123;
    msg.time_motor_ground = 0.169890035464;
    msg.time_motor_air = 0.253483847755;
    msg.time_motor_water = 0.089269299092;
    msg.time_motor_underwater = 0.599876456663;
    msg.time_motor_unknown = 0.516400554556;
    msg.rpm_min = 28903;
    msg.rpm_max = 20162;
    msg.depth_max = 0.609310712004;

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
    msg.setTimeStamp(0.891149138241);
    msg.setSource(59413U);
    msg.setSourceEntity(118U);
    msg.setDestination(19612U);
    msg.setDestinationEntity(122U);
    msg.timestamp_last_service = 0.302345962427;
    msg.time_next_service = 0.268586606551;
    msg.time_motor_next_service = 0.718309306527;
    msg.time_idle_ground = 0.0878126240245;
    msg.time_idle_air = 0.506806839946;
    msg.time_idle_water = 0.602395744526;
    msg.time_idle_underwater = 0.261692119855;
    msg.time_idle_unknown = 0.607167929944;
    msg.time_motor_ground = 0.949383982968;
    msg.time_motor_air = 0.565521640456;
    msg.time_motor_water = 0.549565820079;
    msg.time_motor_underwater = 0.991650125548;
    msg.time_motor_unknown = 0.233853987804;
    msg.rpm_min = 22891;
    msg.rpm_max = -29156;
    msg.depth_max = 0.0333209438344;

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
    msg.setTimeStamp(0.158980386572);
    msg.setSource(22970U);
    msg.setSourceEntity(117U);
    msg.setDestination(12825U);
    msg.setDestinationEntity(127U);
    msg.timestamp_last_service = 0.562099280329;
    msg.time_next_service = 0.121131529382;
    msg.time_motor_next_service = 0.0543295734199;
    msg.time_idle_ground = 0.675782158284;
    msg.time_idle_air = 0.640081219453;
    msg.time_idle_water = 0.099714788142;
    msg.time_idle_underwater = 0.514191371754;
    msg.time_idle_unknown = 0.189908370337;
    msg.time_motor_ground = 0.985553971004;
    msg.time_motor_air = 0.436253884522;
    msg.time_motor_water = 0.860544942641;
    msg.time_motor_underwater = 0.207507278141;
    msg.time_motor_unknown = 0.758301403897;
    msg.rpm_min = -20026;
    msg.rpm_max = 23638;
    msg.depth_max = 0.614771238378;

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
    msg.setTimeStamp(0.988402946198);
    msg.setSource(40266U);
    msg.setSourceEntity(38U);
    msg.setDestination(12002U);
    msg.setDestinationEntity(139U);
    msg.severity = 120U;
    msg.text.assign("SGUGLCXHBKNRQMCJDVFDWHTAYLBTIIMWEERVSXIWBNWYNSEYXOYHQENXVGMJCOAQRPTRAJRPVZFGBHUATLYGYWFCUPRCIIITEMXGBVQJDAEFGPBFHZMKPZJEMYRQZVUYQNLNPGFRPSFAMOTOPDVTCMLKACJKAIQHDUFKYVUNUDOLRSRVONMMHZTSOWFKKBXETZJZBXLKHON");

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
    msg.setTimeStamp(0.917635572054);
    msg.setSource(40022U);
    msg.setSourceEntity(22U);
    msg.setDestination(30668U);
    msg.setDestinationEntity(129U);
    msg.severity = 12U;
    msg.text.assign("HTNXOKOWZKDOWIWSPGCWEXHDFDCCGUKQUJATZKXJCJURNZUETKYFYBDBTQFFNFGEPSWDRRBXQJJGRYOTLENLQLEVKVJBQMVEVCUYQIRTNHBVGRUFCZTOG");

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
    msg.setTimeStamp(0.240313874136);
    msg.setSource(62495U);
    msg.setSourceEntity(215U);
    msg.setDestination(30925U);
    msg.setDestinationEntity(41U);
    msg.severity = 151U;
    msg.text.assign("FORLGQZJZVNFHAGOOSNXNLMLHVHNQHXBSPKBMLX");

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
    msg.setTimeStamp(0.196191080893);
    msg.setSource(22691U);
    msg.setSourceEntity(185U);
    msg.setDestination(35705U);
    msg.setDestinationEntity(32U);
    msg.channel = -124;
    msg.value = -1954070315;
    msg.gain = 166U;

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
    msg.setTimeStamp(0.636433842944);
    msg.setSource(6171U);
    msg.setSourceEntity(217U);
    msg.setDestination(32973U);
    msg.setDestinationEntity(116U);
    msg.channel = 48;
    msg.value = -1922235865;
    msg.gain = 67U;

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
    msg.setTimeStamp(0.252885580175);
    msg.setSource(3449U);
    msg.setSourceEntity(182U);
    msg.setDestination(23172U);
    msg.setDestinationEntity(161U);
    msg.channel = 101;
    msg.value = -732851686;
    msg.gain = 194U;

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
    msg.setTimeStamp(0.792459924956);
    msg.setSource(49932U);
    msg.setSourceEntity(155U);
    msg.setDestination(35349U);
    msg.setDestinationEntity(233U);
    msg.ch01 = 0.430187051803;
    msg.ch02 = 0.274792877017;
    msg.ch03 = 0.868401182946;
    msg.ch04 = 0.494159753678;
    msg.ch05 = 0.553463754207;
    msg.ch06 = 0.328430219279;
    msg.ch07 = 0.224334657849;
    msg.ch08 = 0.293222491088;
    msg.ch09 = 0.855919925929;
    msg.ch10 = 0.459496580608;
    msg.ch11 = 0.436447396077;
    msg.ch12 = 0.745408930981;
    msg.ch13 = 0.889795945912;
    msg.ch14 = 0.618882836624;
    msg.ch15 = 0.711186009129;
    msg.ch16 = 0.329400016228;

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
    msg.setTimeStamp(0.639519256436);
    msg.setSource(29906U);
    msg.setSourceEntity(217U);
    msg.setDestination(19541U);
    msg.setDestinationEntity(235U);
    msg.ch01 = 0.813858219067;
    msg.ch02 = 0.523573504987;
    msg.ch03 = 0.999015782213;
    msg.ch04 = 0.586341353971;
    msg.ch05 = 0.228803956476;
    msg.ch06 = 0.581559854938;
    msg.ch07 = 0.138567145314;
    msg.ch08 = 0.253664340689;
    msg.ch09 = 0.622314369904;
    msg.ch10 = 0.133597242415;
    msg.ch11 = 0.412564681596;
    msg.ch12 = 0.229983193717;
    msg.ch13 = 0.284823086755;
    msg.ch14 = 0.412904063585;
    msg.ch15 = 0.0673660962287;
    msg.ch16 = 0.739108033261;

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
    msg.setTimeStamp(0.212382727453);
    msg.setSource(42840U);
    msg.setSourceEntity(103U);
    msg.setDestination(65531U);
    msg.setDestinationEntity(188U);
    msg.ch01 = 0.633748103562;
    msg.ch02 = 0.0839150028489;
    msg.ch03 = 0.753429525412;
    msg.ch04 = 0.584048687008;
    msg.ch05 = 0.813532156532;
    msg.ch06 = 0.692930386546;
    msg.ch07 = 0.415830218483;
    msg.ch08 = 0.993977355339;
    msg.ch09 = 0.6847864982;
    msg.ch10 = 0.630937902585;
    msg.ch11 = 0.215655130921;
    msg.ch12 = 0.0671675432134;
    msg.ch13 = 0.450676507165;
    msg.ch14 = 0.870397619158;
    msg.ch15 = 0.816892828843;
    msg.ch16 = 0.0342516333744;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.85623892435);
    msg.setSource(159U);
    msg.setSourceEntity(127U);
    msg.setDestination(58371U);
    msg.setDestinationEntity(123U);
    msg.value = 0.402638560038;

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
    msg.setTimeStamp(0.845130772836);
    msg.setSource(40795U);
    msg.setSourceEntity(118U);
    msg.setDestination(85U);
    msg.setDestinationEntity(129U);
    msg.value = 0.084902827552;

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
    msg.setTimeStamp(0.0385218403117);
    msg.setSource(42862U);
    msg.setSourceEntity(32U);
    msg.setDestination(65074U);
    msg.setDestinationEntity(62U);
    msg.value = 0.194185489795;

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
