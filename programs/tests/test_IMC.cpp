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
// IMC XML MD5: d292e724592557940354dddbfc5a9d32                            *
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
    msg.setTimeStamp(0.274794768696);
    msg.setSource(5432U);
    msg.setSourceEntity(196U);
    msg.setDestination(56274U);
    msg.setDestinationEntity(94U);
    msg.state = 176U;
    msg.flags = 27U;
    msg.description.assign("PRDOAFXEDKSHAJXPJQSGOPIJOHDXNTVNVGVIRPIKCRHVOEGMSQTPROONQGWNUQEWZRFXUKBPWKDLPTLFVBLVKAYIHMSQZVWCTQ");

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
    msg.setTimeStamp(0.263341271403);
    msg.setSource(15507U);
    msg.setSourceEntity(31U);
    msg.setDestination(34966U);
    msg.setDestinationEntity(204U);
    msg.state = 80U;
    msg.flags = 39U;
    msg.description.assign("HSWXWKDLYIUKSKPNRQUVTOESUZKUVFXNQLD");

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
    msg.setTimeStamp(0.726164618364);
    msg.setSource(46341U);
    msg.setSourceEntity(78U);
    msg.setDestination(110U);
    msg.setDestinationEntity(223U);
    msg.state = 220U;
    msg.flags = 58U;
    msg.description.assign("PUHWSGCXDGVFPMNR");

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
    msg.setTimeStamp(0.294216648307);
    msg.setSource(33194U);
    msg.setSourceEntity(159U);
    msg.setDestination(15120U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.188818215822);
    msg.setSource(46098U);
    msg.setSourceEntity(83U);
    msg.setDestination(669U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.762234158397);
    msg.setSource(4775U);
    msg.setSourceEntity(17U);
    msg.setDestination(13439U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.872308257653);
    msg.setSource(31992U);
    msg.setSourceEntity(177U);
    msg.setDestination(10988U);
    msg.setDestinationEntity(63U);
    msg.id = 249U;
    msg.label.assign("XIJEIVKNSITEZPMVTDOPLABPZXPVRUEGMVGDGSVSSGNBHFIVRHAZQHDAUCWQLKWSBZBGTKZDYDWIRQNGVCHRCMHTEEKKSOPOLXVQMKZQJBNGUIEKMSITQJBRYAFFAJJRZQLCYOUFYQHJOXBXRYWILDSWYLPVSEMOWJUUENAAYCBKZMFGPJULOUTODCHPLMWVMLAAZIIOUFFHCKTZRYDWNCESGUFNJQYHFTXWXFG");
    msg.component.assign("BXOGKZQFEXRVJHJDHLPHXYTIIVVMMUXQZAJJPBTOLKEHNCWJEGCXPPWQBWFRHYBBSAUUAFCTHKYYGPTAGRMKFYFSQDDDSUEKJVWLTYGWRAQYNMBDNECVWXFIZRJFMVBUHKEWROOKGSNVUARRWKRDJLSALNHUGZVCIKHLTFNYNMNCOPLCJAKCBTZOIGBOPPO");
    msg.act_time = 63138U;
    msg.deact_time = 55100U;

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
    msg.setTimeStamp(0.106278881852);
    msg.setSource(7486U);
    msg.setSourceEntity(76U);
    msg.setDestination(8369U);
    msg.setDestinationEntity(143U);
    msg.id = 160U;
    msg.label.assign("WRVBXGIFXOGPIPPFTJODYDHCURATEVOJEHMORCPKTPDYUVZNXCXLQKERJGUAMFBOKQSCRLISLUQLIIZXRNEBNZFJNHWSLXSCXGMSDSHVBLAUG");
    msg.component.assign("PWKUSVKANHSXBIGFGLEYDNCAGQOPEOSWMRLLJVWVZETPUHQUOVJEXDYGANRRIALZDQRSZZMBITFYFWVPUWTJCHIAMFYWMGOXOZPRKJYLKLUKKNCTCBDOUXBRIEFFV");
    msg.act_time = 15825U;
    msg.deact_time = 21109U;

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
    msg.setTimeStamp(0.0632202186606);
    msg.setSource(38245U);
    msg.setSourceEntity(20U);
    msg.setDestination(42838U);
    msg.setDestinationEntity(239U);
    msg.id = 210U;
    msg.label.assign("ZERTQVBHICDVIHYVPGSOWBZAWUTPSVGPQWGETJAZLPITMVXBWOWOFMYGITJKRNOXCSSMYLQLSUEKJJCZKMIZFLQSZKWJHODAXYHRBJUPFPEKIHPHTCCWFRZXEXHMETICANT");
    msg.component.assign("QQWSFKYMFODZBQYQBKIMXFSOOZBBWWMMHEWDYGPHYHEUDPURBWZSGVCUTHYMEIGNKXLGOJTVOTQJWEWFSXZAUNWYVTEYBVNMKLINIOSZKQCBIPRCLRPHJTZGXGNHEIDCJDAKVAMYVTFELVIHCOPBDARURAHJRUGZLQQJALPZSZSGOLKXDRREKBJPLTCMWTXEIUFEYLNPIFAQMODNUADFSRZASVTCACMUWP");
    msg.act_time = 48103U;
    msg.deact_time = 10541U;

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
    msg.setTimeStamp(0.927586443567);
    msg.setSource(17076U);
    msg.setSourceEntity(72U);
    msg.setDestination(24212U);
    msg.setDestinationEntity(60U);
    msg.id = 156U;

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
    msg.setTimeStamp(0.581229648784);
    msg.setSource(36298U);
    msg.setSourceEntity(11U);
    msg.setDestination(49259U);
    msg.setDestinationEntity(70U);
    msg.id = 3U;

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
    msg.setTimeStamp(0.562193803724);
    msg.setSource(32717U);
    msg.setSourceEntity(11U);
    msg.setDestination(53854U);
    msg.setDestinationEntity(66U);
    msg.id = 37U;

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
    msg.setTimeStamp(0.794773027998);
    msg.setSource(3060U);
    msg.setSourceEntity(94U);
    msg.setDestination(40220U);
    msg.setDestinationEntity(32U);
    msg.op = 70U;
    msg.list.assign("XWBKWTCEUMOAGFORPFXVLVICLOXGPYHSNLDXMGYJGKRQSWWABKXEKWOKZDDVTKFZTIQFJFPECCSHVSNCMTTPAWDJZQUYG");

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
    msg.setTimeStamp(0.123032496615);
    msg.setSource(10206U);
    msg.setSourceEntity(214U);
    msg.setDestination(41685U);
    msg.setDestinationEntity(41U);
    msg.op = 162U;
    msg.list.assign("JWEBHHTNPOWCZHGSDHLRUTRBSVMOQOFBTFRNQIUFSKYCNMLWRLKAYAKKHAPVSVJQQOHJWXMMDXYYGNEQAWXZUQRLRUEG");

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
    msg.setTimeStamp(0.718576578818);
    msg.setSource(10912U);
    msg.setSourceEntity(5U);
    msg.setDestination(14240U);
    msg.setDestinationEntity(82U);
    msg.op = 144U;
    msg.list.assign("UDVYMDOBGENMOZMAPDALDOBJIBMQBCOJFALTUSSCAUGOKICTBGUTAXEHJYISQTNMTONWHYGXLXOUKIWVSGKYHEZDELGQFTIJZCBQSCTRWNRVSXVHHYHNCXOKDSFQLZDLNJZHARNZMYPNQOTCKHUYPSMZZYWGJDWOFVIIXRILVEXXGPIARVEJPRPQCFXN");

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
    msg.setTimeStamp(0.831794313468);
    msg.setSource(10600U);
    msg.setSourceEntity(25U);
    msg.setDestination(16138U);
    msg.setDestinationEntity(5U);
    msg.value = 55U;

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
    msg.setTimeStamp(0.30353492613);
    msg.setSource(20012U);
    msg.setSourceEntity(71U);
    msg.setDestination(54820U);
    msg.setDestinationEntity(78U);
    msg.value = 87U;

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
    msg.setTimeStamp(0.998287850239);
    msg.setSource(54115U);
    msg.setSourceEntity(206U);
    msg.setDestination(16645U);
    msg.setDestinationEntity(61U);
    msg.value = 25U;

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
    msg.setTimeStamp(0.526417827011);
    msg.setSource(33362U);
    msg.setSourceEntity(38U);
    msg.setDestination(22914U);
    msg.setDestinationEntity(213U);
    msg.consumer.assign("VLLACJGUSVYUREPIULWEVMUUUNECTOTGHAPJMZOZDLCGYGIYYSL");
    msg.message_id = 2896U;

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
    msg.setTimeStamp(0.525312316276);
    msg.setSource(5729U);
    msg.setSourceEntity(80U);
    msg.setDestination(22356U);
    msg.setDestinationEntity(18U);
    msg.consumer.assign("ZBSFDRXFRWAGTTBAGKADADLQKRZSTYFQEYPXOHUTKUSCEXXNEJMPNOBZNIQFRLCQRKJNEJMKSGIHPDVUPTJQYYUFTXDIGIRDEHFWNDNKCFWKNLVHSUVVOOOZKUAPNWMRTLSWSLMHCRVXFYGOLNRLZOEPLCQASXWFSGECMMYYIJKHLCMBTORQBIKBZJGZAICUIYLM");
    msg.message_id = 3811U;

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
    msg.setTimeStamp(0.0201411946146);
    msg.setSource(1053U);
    msg.setSourceEntity(18U);
    msg.setDestination(17253U);
    msg.setDestinationEntity(163U);
    msg.consumer.assign("LWWYYPVGEXNPVLCTRYJAQYNRSZXGZFBKHNATSMKQUZJLMKYCBHCOPWHUUTVHXOQGREESTFHWBMBDLWGQBDSNFOVJNCYZAUVWFLLGYNILJM");
    msg.message_id = 11867U;

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
    msg.setTimeStamp(0.92596755325);
    msg.setSource(6780U);
    msg.setSourceEntity(58U);
    msg.setDestination(29663U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.446489821105);
    msg.setSource(49734U);
    msg.setSourceEntity(35U);
    msg.setDestination(40301U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.199816800554);
    msg.setSource(5855U);
    msg.setSourceEntity(236U);
    msg.setDestination(57997U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.521771041924);
    msg.setSource(39509U);
    msg.setSourceEntity(83U);
    msg.setDestination(4640U);
    msg.setDestinationEntity(1U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.932823565235);
    msg.setSource(48718U);
    msg.setSourceEntity(47U);
    msg.setDestination(51308U);
    msg.setDestinationEntity(43U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.333518186963);
    msg.setSource(60873U);
    msg.setSourceEntity(189U);
    msg.setDestination(63455U);
    msg.setDestinationEntity(103U);
    msg.op = 99U;

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
    msg.setTimeStamp(0.181999275785);
    msg.setSource(21389U);
    msg.setSourceEntity(227U);
    msg.setDestination(7497U);
    msg.setDestinationEntity(160U);
    msg.total_steps = 136U;
    msg.step_number = 43U;
    msg.step.assign("LHPLPNCXUWXCZNWICYBJQKQJVYMVPSRJHOZQAZRQUIHDICQIZDEBFCACWXSUIYTWALILXHPRTBYSKTMBGHSOMQEDUCWDLBKYVOGYSFNXEXCEABKTFNHHB");
    msg.flags = 173U;

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
    msg.setTimeStamp(0.243344668896);
    msg.setSource(8280U);
    msg.setSourceEntity(172U);
    msg.setDestination(3923U);
    msg.setDestinationEntity(91U);
    msg.total_steps = 249U;
    msg.step_number = 156U;
    msg.step.assign("PFUXNRLGBIHYNYOGYNQAKLHTQBRBMZLWXHWJIORIZZDFNTBVNDDQEKHZEXGACWWWMNOKPJTFYJIEESSGWDQAOPQEUZDUIBBSPJYMNKQRGVTGEHWHARJKTPBDAEVBMP");
    msg.flags = 69U;

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
    msg.setTimeStamp(0.479980496554);
    msg.setSource(3075U);
    msg.setSourceEntity(173U);
    msg.setDestination(9867U);
    msg.setDestinationEntity(136U);
    msg.total_steps = 173U;
    msg.step_number = 102U;
    msg.step.assign("OOIKHNDTFBJPHDQHSNNNMJJTRCQXQHRKWJAUFHVZOOPFBPNCZBLLHIHXMSZGBEAVKNIRWALDGWCJYYZAIATQCJBIZVPMRTEXFJFXXKDXWGDDSEFFGTBLZJACCPSKUYHBDVGCCWTYIPWQMHFNOGLSDSIWRACEKOYIUBYDSQDU");
    msg.flags = 95U;

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
    msg.setTimeStamp(0.983383309553);
    msg.setSource(32964U);
    msg.setSourceEntity(37U);
    msg.setDestination(36286U);
    msg.setDestinationEntity(73U);
    msg.state = 197U;
    msg.error.assign("FEDAREPGXVZHFMDIBCSRLRLLDTYHTSQAUDCNNKRQEAVMCCHBTOJTVVATQ");

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
    msg.setTimeStamp(0.89227088357);
    msg.setSource(64240U);
    msg.setSourceEntity(14U);
    msg.setDestination(24617U);
    msg.setDestinationEntity(177U);
    msg.state = 32U;
    msg.error.assign("EMDZBKJVHFAPAXGUVQUBCMPGHDGMCDGHQOZXDDSONSKOUUWINSWUHWDEFBRICXGBPDQHNZJLMCXFDIVLULRJRYVOVMXTCRBDSTYTCJMRWNBHZPTGVJLUVLYQAIEGXIOLSYPLXYLWOJIYUWBABCXNZWOKWSFGSFAVYRANPVGKZZHFWEYHGLQFUTKKHJXQMTNRSBEEEFRLJTSASZJQKYEMIFQJNZIETAROEIKYPBMHXFWTACPCDINV");

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
    msg.setTimeStamp(0.359827302616);
    msg.setSource(65102U);
    msg.setSourceEntity(226U);
    msg.setDestination(29705U);
    msg.setDestinationEntity(171U);
    msg.state = 47U;
    msg.error.assign("AIZXZRJXSEWNIIPCHJRWOUWTSHEMABUDCNCAZZMVUHARZOVPSXBLFEPPKKWRYOVXXXPWKYYDRIFXBKMYIJXVRDLSHKSLHSVSBHCGH");

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
    msg.setTimeStamp(0.54508342419);
    msg.setSource(47335U);
    msg.setSourceEntity(1U);
    msg.setDestination(29584U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.0971944890443);
    msg.setSource(57989U);
    msg.setSourceEntity(166U);
    msg.setDestination(19698U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.695757153257);
    msg.setSource(16186U);
    msg.setSourceEntity(103U);
    msg.setDestination(9392U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.947199648981);
    msg.setSource(16254U);
    msg.setSourceEntity(247U);
    msg.setDestination(27990U);
    msg.setDestinationEntity(89U);
    msg.op = 250U;
    msg.speed_min = 0.153433915151;
    msg.speed_max = 0.205791531098;
    msg.long_accel = 0.833692433144;
    msg.alt_max_msl = 0.074610714086;
    msg.dive_fraction_max = 0.371933489656;
    msg.climb_fraction_max = 0.499416187105;
    msg.bank_max = 0.569198803072;
    msg.p_max = 0.999675651537;
    msg.pitch_min = 0.935161501181;
    msg.pitch_max = 0.698274648039;
    msg.q_max = 0.35394704284;
    msg.g_min = 0.712559761966;
    msg.g_max = 0.0741664633988;
    msg.g_lat_max = 0.810258706426;
    msg.rpm_min = 0.597625233525;
    msg.rpm_max = 0.315362373833;
    msg.rpm_rate_max = 0.503361382279;

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
    msg.setTimeStamp(0.631492522543);
    msg.setSource(43620U);
    msg.setSourceEntity(6U);
    msg.setDestination(16535U);
    msg.setDestinationEntity(234U);
    msg.op = 74U;
    msg.speed_min = 0.791308726345;
    msg.speed_max = 0.693949628214;
    msg.long_accel = 0.602526007754;
    msg.alt_max_msl = 0.833179972974;
    msg.dive_fraction_max = 0.617828018055;
    msg.climb_fraction_max = 0.440988873016;
    msg.bank_max = 0.390910701804;
    msg.p_max = 0.0370217218249;
    msg.pitch_min = 0.074949247761;
    msg.pitch_max = 0.452126484927;
    msg.q_max = 0.820360905183;
    msg.g_min = 0.640110509861;
    msg.g_max = 0.854196147349;
    msg.g_lat_max = 0.140422862514;
    msg.rpm_min = 0.252237942505;
    msg.rpm_max = 0.254919374268;
    msg.rpm_rate_max = 0.632278219477;

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
    msg.setTimeStamp(0.90971829966);
    msg.setSource(33051U);
    msg.setSourceEntity(105U);
    msg.setDestination(42035U);
    msg.setDestinationEntity(29U);
    msg.op = 229U;
    msg.speed_min = 0.117699596565;
    msg.speed_max = 0.846551149516;
    msg.long_accel = 0.41429504903;
    msg.alt_max_msl = 0.765714011536;
    msg.dive_fraction_max = 0.165032707958;
    msg.climb_fraction_max = 0.00897511372827;
    msg.bank_max = 0.271319695729;
    msg.p_max = 0.463750733715;
    msg.pitch_min = 0.945895356461;
    msg.pitch_max = 0.751830661156;
    msg.q_max = 0.850725198117;
    msg.g_min = 0.642846646257;
    msg.g_max = 0.0762147009653;
    msg.g_lat_max = 0.533874811944;
    msg.rpm_min = 0.878518823021;
    msg.rpm_max = 0.603329068857;
    msg.rpm_rate_max = 0.391956839085;

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
    msg.setTimeStamp(0.619293047012);
    msg.setSource(47210U);
    msg.setSourceEntity(191U);
    msg.setDestination(2442U);
    msg.setDestinationEntity(194U);
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 58343U;
    tmp_msg_0.lat = 0.174303455936;
    tmp_msg_0.lon = 0.591608602236;
    tmp_msg_0.z = 0.596206419125;
    tmp_msg_0.z_units = 3U;
    tmp_msg_0.speed = 0.248309296077;
    tmp_msg_0.speed_units = 226U;
    tmp_msg_0.custom.assign("HJQHTNTOIIDKJMKLRXCGAXXBTUVDRAPNYXSMSZWNYCLMBQEPBMFSBTUMOQHYKNJWZFRIMVZQEYVWJROFGMAYBKYWLFRTSQZPDORAQGQIDLGBLYHVQLHLLUHPCPEJJTZOAFYNREISVCZWVYEWBAZMEKSSKDGFPJUZNNLTFVQWSXNCEAODGHGWDVCROIPCTKUGCARITTIJWXSOVKMWHUZBXPZKBDINAUFQDHELGPCOPAXXCU");
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
    msg.setTimeStamp(0.930202512376);
    msg.setSource(64300U);
    msg.setSourceEntity(248U);
    msg.setDestination(55375U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.722506525755);
    msg.setSource(62909U);
    msg.setSourceEntity(230U);
    msg.setDestination(40513U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.814627740955);
    msg.setSource(17974U);
    msg.setSourceEntity(113U);
    msg.setDestination(56670U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.175133224106;
    msg.lon = 0.729303410758;
    msg.height = 0.464012189109;
    msg.x = 0.26293000223;
    msg.y = 0.702340404532;
    msg.z = 0.209410818304;
    msg.phi = 0.445823037891;
    msg.theta = 0.0832185583304;
    msg.psi = 0.636380688341;
    msg.u = 0.913598550551;
    msg.v = 0.612122149402;
    msg.w = 0.0176204706499;
    msg.p = 0.00554832629142;
    msg.q = 0.357574923863;
    msg.r = 0.779815404613;
    msg.svx = 0.827908334571;
    msg.svy = 0.139475771015;
    msg.svz = 0.582030808248;

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
    msg.setTimeStamp(0.338100239522);
    msg.setSource(12999U);
    msg.setSourceEntity(149U);
    msg.setDestination(35180U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.800470503825;
    msg.lon = 0.0834828005092;
    msg.height = 0.247353439494;
    msg.x = 0.140758337252;
    msg.y = 0.404264859798;
    msg.z = 0.616325640622;
    msg.phi = 0.559446906024;
    msg.theta = 0.850669183697;
    msg.psi = 0.180778243412;
    msg.u = 0.432650115634;
    msg.v = 0.647650747457;
    msg.w = 0.926186447865;
    msg.p = 0.506209470492;
    msg.q = 0.567720275063;
    msg.r = 0.321334046365;
    msg.svx = 0.620225728596;
    msg.svy = 0.86398082326;
    msg.svz = 0.596427230833;

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
    msg.setTimeStamp(0.927591070981);
    msg.setSource(23088U);
    msg.setSourceEntity(157U);
    msg.setDestination(17086U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.403339363802;
    msg.lon = 0.16941736053;
    msg.height = 0.203085364424;
    msg.x = 0.688023202602;
    msg.y = 0.349907398684;
    msg.z = 0.465759363369;
    msg.phi = 0.146916447947;
    msg.theta = 0.109164538247;
    msg.psi = 0.814255396682;
    msg.u = 0.619569948514;
    msg.v = 0.0392802195432;
    msg.w = 0.158602620576;
    msg.p = 0.625007008695;
    msg.q = 0.795595093327;
    msg.r = 0.306130477781;
    msg.svx = 0.417995659163;
    msg.svy = 0.217516962002;
    msg.svz = 0.846703446426;

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
    msg.setTimeStamp(0.914554378597);
    msg.setSource(51490U);
    msg.setSourceEntity(101U);
    msg.setDestination(35734U);
    msg.setDestinationEntity(214U);
    msg.op = 194U;
    msg.entities.assign("PLFPXZXHLBWQBFNHJNZXOVQSSKWTTAAMFNXAPPKRWAXKIRBOXFSKPBPYYTUCBOELHGUOSHVZWITNDKUHETWYFMDKJVJSVTQPJFTRQKPAYSGLMLGLDBXOATIMMFZSGVNUOWZZDVXJTIJSDECEQ");

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
    msg.setTimeStamp(0.800987635702);
    msg.setSource(46546U);
    msg.setSourceEntity(46U);
    msg.setDestination(31553U);
    msg.setDestinationEntity(206U);
    msg.op = 150U;
    msg.entities.assign("UWVHCDTIEYPVFUCFSOZIMTYUMCNTRMWANFSDWQZBAVTQOLPUOGGFJIXIIMMJFZKYZBICNJJHVDESSUCFKQLHAWAHXIKHTGOXDTMRZSNQNYROZVBGOGOJHWKHPWLRBJHUMKYBDVKDCPZTOMPBXECVN");

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
    msg.setTimeStamp(0.379784878721);
    msg.setSource(36128U);
    msg.setSourceEntity(142U);
    msg.setDestination(49502U);
    msg.setDestinationEntity(134U);
    msg.op = 56U;
    msg.entities.assign("OUHQMTSFVECEDCALOXKYUNHTEDFJKEYJAABIOLXFTTSWOCHABHIVQYGVQRJQVBNOSZPLBCQFZPWIHZJEPKZDVLFSRDMKPHHGCGSSWJJCPINAVWDURXRNMCWPKRUGQFEYUJBLOTWHDYEZZOEZLSRDJNGWTLCXIRKGTLNOMQUPPHLB");

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
    msg.setTimeStamp(0.817196927334);
    msg.setSource(9534U);
    msg.setSourceEntity(90U);
    msg.setDestination(3373U);
    msg.setDestinationEntity(226U);
    msg.type = 251U;
    msg.speed = 2738U;
    const char tmp_msg_0[] = {-60, 105, -47, 41, 74, -108, -120, 25, 113, -82, -15, -103, 29, 118, 13, -101, -31};
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
    msg.setTimeStamp(0.343232459505);
    msg.setSource(7682U);
    msg.setSourceEntity(10U);
    msg.setDestination(60563U);
    msg.setDestinationEntity(43U);
    msg.type = 138U;
    msg.speed = 40252U;
    const char tmp_msg_0[] = {-76, -45, 68, 116, -39, 104, 95, 70, -95, 3, -30, 4, 97, 83, 56, 36, 52, -113, 85, -74, 5, 44, 8, -28, -6, 77, -18, 20, -74, -103, -26, -32, -25, -43, -83, 31, -4, -25, 85, 51, 109, -109, 22, -72, 121, -112, -92, 7, 86, -96, -25, -115, -25, 90, -2, 23, -69, -100, 53, -46, 19, -98, -67, -69, 37, 54, 122, 31, 65, -3, -36, 114, 43, -69, -112, 22, -122, -82, 104, -60, -95, 75, 107, -45, 4, 84, -64, 76, 78, -66, 112, -77, 27, -39, 72, 124, -60, -102, 104, 3, -106, 112, -67, -124, 109, 82, -29, 113, -30, -46, -48, 61, 115, 122, 69, -6, -34, -87, 92, -46, 60, 106, 83, -59, 10, -115, -48};
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
    msg.setTimeStamp(0.832866804309);
    msg.setSource(37876U);
    msg.setSourceEntity(195U);
    msg.setDestination(33980U);
    msg.setDestinationEntity(150U);
    msg.type = 27U;
    msg.speed = 9734U;
    const char tmp_msg_0[] = {20, 22, 55, 90, 56, -49, -64, 65, -79, 21};
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
    msg.setTimeStamp(0.047579047336);
    msg.setSource(21876U);
    msg.setSourceEntity(85U);
    msg.setDestination(14402U);
    msg.setDestinationEntity(153U);
    msg.op = 71U;
    msg.tas2acc_pgain = 0.685044729736;
    msg.bank2p_pgain = 0.800216603098;

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
    msg.setTimeStamp(0.716484292073);
    msg.setSource(63861U);
    msg.setSourceEntity(64U);
    msg.setDestination(45106U);
    msg.setDestinationEntity(33U);
    msg.op = 135U;
    msg.tas2acc_pgain = 0.515614557628;
    msg.bank2p_pgain = 0.85789959517;

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
    msg.setTimeStamp(0.793050727719);
    msg.setSource(44434U);
    msg.setSourceEntity(12U);
    msg.setDestination(30712U);
    msg.setDestinationEntity(124U);
    msg.op = 60U;
    msg.tas2acc_pgain = 0.739060024363;
    msg.bank2p_pgain = 0.287531827818;

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
    msg.setTimeStamp(0.0495750407943);
    msg.setSource(31883U);
    msg.setSourceEntity(41U);
    msg.setDestination(8945U);
    msg.setDestinationEntity(89U);
    msg.available = 3127608657U;
    msg.value = 106U;

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
    msg.setTimeStamp(0.0473091964451);
    msg.setSource(46972U);
    msg.setSourceEntity(113U);
    msg.setDestination(32335U);
    msg.setDestinationEntity(216U);
    msg.available = 1889304641U;
    msg.value = 96U;

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
    msg.setTimeStamp(0.501263967247);
    msg.setSource(3691U);
    msg.setSourceEntity(23U);
    msg.setDestination(6462U);
    msg.setDestinationEntity(15U);
    msg.available = 3728561269U;
    msg.value = 28U;

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
    msg.setTimeStamp(0.482084079642);
    msg.setSource(52420U);
    msg.setSourceEntity(123U);
    msg.setDestination(1250U);
    msg.setDestinationEntity(132U);
    msg.op = 187U;
    msg.snapshot.assign("EMHZBRQYPFXTBAGWWMSQMMIXLAKYETQPIKYUISZUNOQDCLEQHCOXXME");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.616915131081;
    tmp_msg_0.converg = 0.157026541923;
    tmp_msg_0.turbulence = 0.781636021882;
    tmp_msg_0.possimmon = 172U;
    tmp_msg_0.commmon = 231U;
    tmp_msg_0.convergmon = 236U;
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
    msg.setTimeStamp(0.433826662833);
    msg.setSource(7043U);
    msg.setSourceEntity(241U);
    msg.setDestination(23198U);
    msg.setDestinationEntity(245U);
    msg.op = 201U;
    msg.snapshot.assign("QLQBHWIIOJFXYWCBAPFJNIZRKXLONSWZIFPHTDHLOEERONMBEW");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("BKWVKUASNSOVYHHUXJKGTWBYBKHGATEYXKQIREYCGYPIKULLPTWQASAXRFDFIDCCRHXXJBPDSNVOOFVWJNAMAYQKVVXLLQHQGVJQGOZZXCBIRPOTRZNRSQGFGEIHNFWDAWCCFEZXKPJFEIMPHLMTIBPNZFZBHYBXIDUMMWLSDMBVELRORNTKZJWQLKWTPJMISIVUJFYHGOMDDEMZNDJSPCUWAEEYHOU");
    tmp_msg_0.service_type = 91U;
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
    msg.setTimeStamp(0.922604141369);
    msg.setSource(11646U);
    msg.setSourceEntity(141U);
    msg.setDestination(21147U);
    msg.setDestinationEntity(251U);
    msg.op = 40U;
    msg.snapshot.assign("NQLSMLUKUGLQNBECOIN");
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.109514245789;
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
    msg.setTimeStamp(0.0527700157238);
    msg.setSource(16871U);
    msg.setSourceEntity(123U);
    msg.setDestination(1903U);
    msg.setDestinationEntity(128U);
    msg.op = 21U;
    msg.name.assign("CLHKPSZOCHLWUFBRITMAEWOTWUVMSKVMAWSKGNMHDGOMZYBKSWFLBOREQQCIADUJIWDYHFZGTZXKUVRQQICSWIRSWHTDJKKZBUJRJ");

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
    msg.setTimeStamp(0.216520384412);
    msg.setSource(47203U);
    msg.setSourceEntity(25U);
    msg.setDestination(2184U);
    msg.setDestinationEntity(65U);
    msg.op = 253U;
    msg.name.assign("YPQJDGJPMXAYCFEWQREAKNVDBDZEBWTTHFPJGYZIPCUGIIYIGGVHQTVXWRDXOEMBBEREDLWDXDUSKIECZBWNTYNVGHDOZDKXXMAXLYKZLIGCYZAPXSQLNLWITLYORJTRJSHUZVQFLUBPKMQCIINFNBJWMHXWSUVPZUJMKJZTHFKJBANGRLQNGHANSF");

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
    msg.setTimeStamp(0.889185399414);
    msg.setSource(8036U);
    msg.setSourceEntity(194U);
    msg.setDestination(32320U);
    msg.setDestinationEntity(233U);
    msg.op = 52U;
    msg.name.assign("VUUWUABCYYTMYWHJHQAIKFPJYMUNTSJSALAGXPCDLWKWYCVTICFNYLMMBQIRWKHBFTOVWVMPFPCAZNZNRKZSHZUIVOCBMNDMPJHTUXERZJDQWXJGQINZEGHTGKCIR");

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
    msg.setTimeStamp(0.42892974979);
    msg.setSource(14132U);
    msg.setSourceEntity(47U);
    msg.setDestination(41549U);
    msg.setDestinationEntity(60U);
    msg.type = 109U;
    msg.htime = 0.993537194561;
    msg.context.assign("BZRYLGYHOHDXNYQUETTJUFDSSXNIYVBSVPRAVAUJKPAARZIOGCAWUHKBEACKHPBGAALOLMFVKRCWPTEUMTVMBPZRZI");
    msg.text.assign("XJELBLCCLFCHKJSVMFMHNYZAQHDMZWWAXCFCKBRLZDOPKNTCYDHOARJBYYUXESRILXNRYHBZUMKATVMOTFBIZEKSHQGYVREMXDZXXKEPKXBWQSOTRGSLRWQNBGSAWPEVDKRTYPTENIIIUWQFJZNYDERZFDJVHTV");

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
    msg.setTimeStamp(0.733889196095);
    msg.setSource(65207U);
    msg.setSourceEntity(213U);
    msg.setDestination(19117U);
    msg.setDestinationEntity(116U);
    msg.type = 30U;
    msg.htime = 0.324910818088;
    msg.context.assign("PMUEGWDIYABEFKZSDTFAFGYNTKNRYYACMLSBMRJOBSUXLGHWCBAXPUQPXKRUNWPAIOCHNCLPJFFCEJOKEFQPZDTYPFBCGVRGQALZXLNJCPJHIIFSX");
    msg.text.assign("PRWEICJWMAJROQFNWIBWFNETXYECAQQCZUSVBESZCHVEKLRYKBMSSKIRJPJZPCFUXAOMDNJUHNRUGYNDJDNEHRVQGMAAFIOYXILWBLFVOMCIUMUDSQLDUZPDGOUMTBIQWLBVXHZACUWSLNKZIDPAEFYGYMYCTOEBSRJCGAFZPXZGIPWETRFKRDHMBQVI");

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
    msg.setTimeStamp(0.06946159919);
    msg.setSource(26289U);
    msg.setSourceEntity(251U);
    msg.setDestination(40005U);
    msg.setDestinationEntity(58U);
    msg.type = 25U;
    msg.htime = 0.194566416904;
    msg.context.assign("QFPBFGCVKEOTRBOBOCOMLRHXZNSBTEJPXZIOWRQYUUQEEMNUGKDLWJJZTMMMUUELHFCVPUWLAAHZPZOSFNWQNVRKHBDKHGYQWMRSNAZYDPBTRXKSDQYCLIVOTHH");
    msg.text.assign("QOLIEYYXMGOGFAZALCQKPJOVQZNWMDIOAYCJPWSFUWGJJBNEUPIMHVLJTZTBQUACTSKJRBMOAWDMJMFAURTOOPXHCJYJDHSHQGQAQOREBKYYCIVXOMIZRCGDDDBUVUOPVILHSHNLZVSKPWAPDVUESMQKLHFCBYPHKDQGLEWHNSWREJXRNPVNKZFBFDTXZGRBEHCGMFLSERXTGUT");

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
    msg.setTimeStamp(0.249829195313);
    msg.setSource(46070U);
    msg.setSourceEntity(4U);
    msg.setDestination(40647U);
    msg.setDestinationEntity(117U);
    msg.command = 141U;
    msg.htime = 0.708468200109;

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
    msg.setTimeStamp(0.780699163454);
    msg.setSource(45874U);
    msg.setSourceEntity(65U);
    msg.setDestination(9159U);
    msg.setDestinationEntity(227U);
    msg.command = 124U;
    msg.htime = 0.0539423393122;

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
    msg.setTimeStamp(0.720330317902);
    msg.setSource(61265U);
    msg.setSourceEntity(251U);
    msg.setDestination(6866U);
    msg.setDestinationEntity(181U);
    msg.command = 226U;
    msg.htime = 0.377431549006;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 48U;
    tmp_msg_0.htime = 0.309877131626;
    tmp_msg_0.context.assign("KBOBKBFRHRMIFHDIYLURCMQYVWFHDAVTLNVZFLNEIROQUCTWYQATVTLSWNMVNEZIRDJTYCPVGMEFAGLGSDPYRTEWEWXGMQQZSDLKHWJAEVBHTRHGCXIRNFC");
    tmp_msg_0.text.assign("WEXQAXIECTSPMHKZRYTGCZMJTFXQYOKQPYUNBNWYZLDNBQPFJQRXDF");
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
    msg.setTimeStamp(0.999295402196);
    msg.setSource(1536U);
    msg.setSourceEntity(22U);
    msg.setDestination(53034U);
    msg.setDestinationEntity(235U);
    msg.op = 104U;
    msg.file.assign("AANRUWEOEADIMVDWCEBYBDCNLJMUTOLRYORLASOLIHZKVKJACQKZFMIBPFTTUJYLVHQWGWVGQQJZBBGGAUDBWDKHIWOPRXCJWCIRLTWKSBQVXIMJSDGSYGKMNRJFQUZQIFPUTDPTXMZNFTPNWJVEDEYNHN");

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
    msg.setTimeStamp(0.614306676809);
    msg.setSource(54142U);
    msg.setSourceEntity(139U);
    msg.setDestination(22387U);
    msg.setDestinationEntity(195U);
    msg.op = 148U;
    msg.file.assign("TDJZNNOPKSVSFOHUZTJQLVWHOKONEVWZPNBXCLPETSTPXTOSNBTYVHMTZHPALMWLFQLKMDZSIKJJGHTKMOXWRFYWBLIGWJXERABVBJDHPSYQFMFRGC");

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
    msg.setTimeStamp(0.602204513771);
    msg.setSource(22612U);
    msg.setSourceEntity(5U);
    msg.setDestination(52084U);
    msg.setDestinationEntity(16U);
    msg.op = 195U;
    msg.file.assign("LBSJRCCCOOWEMWRPICUGPZFVDEMHNADAXDCRYGQQHGTHXIEMPBQVLUFTVPSQJLMIWKRSNPWIZLSGATONGKZOBZFXUVEQKQJXDXWKDHJERXUYYLHTDINBMOCTLMDMAAFPXWTINJKOLYOSVWNPFDFYHUSGKRUVZKJBHZR");

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
    msg.setTimeStamp(0.300697982348);
    msg.setSource(16108U);
    msg.setSourceEntity(10U);
    msg.setDestination(41605U);
    msg.setDestinationEntity(196U);
    msg.op = 48U;
    msg.clock = 0.627107468298;
    msg.tz = -8;

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
    msg.setTimeStamp(0.0300582608597);
    msg.setSource(35782U);
    msg.setSourceEntity(135U);
    msg.setDestination(39637U);
    msg.setDestinationEntity(137U);
    msg.op = 210U;
    msg.clock = 0.121034948413;
    msg.tz = 93;

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
    msg.setTimeStamp(0.0115466047994);
    msg.setSource(41326U);
    msg.setSourceEntity(149U);
    msg.setDestination(1966U);
    msg.setDestinationEntity(222U);
    msg.op = 217U;
    msg.clock = 0.368994430074;
    msg.tz = 88;

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
    msg.setTimeStamp(0.962693647152);
    msg.setSource(57114U);
    msg.setSourceEntity(51U);
    msg.setDestination(9593U);
    msg.setDestinationEntity(23U);
    msg.conductivity = 0.650202796391;
    msg.temperature = 0.920952369645;
    msg.depth = 0.144537844965;

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
    msg.setTimeStamp(0.760722750221);
    msg.setSource(28573U);
    msg.setSourceEntity(197U);
    msg.setDestination(64050U);
    msg.setDestinationEntity(15U);
    msg.conductivity = 0.364065135171;
    msg.temperature = 0.897330920512;
    msg.depth = 0.369197520223;

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
    msg.setTimeStamp(0.489838113319);
    msg.setSource(35649U);
    msg.setSourceEntity(75U);
    msg.setDestination(7536U);
    msg.setDestinationEntity(64U);
    msg.conductivity = 0.62943904852;
    msg.temperature = 0.46222812938;
    msg.depth = 0.885249387628;

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
    msg.setTimeStamp(0.328967549031);
    msg.setSource(27989U);
    msg.setSourceEntity(99U);
    msg.setDestination(58194U);
    msg.setDestinationEntity(156U);
    msg.altitude = 0.424348734278;
    msg.roll = 23180U;
    msg.pitch = 20942U;
    msg.yaw = 39246U;
    msg.speed = 18302;

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
    msg.setTimeStamp(0.851686800464);
    msg.setSource(46758U);
    msg.setSourceEntity(25U);
    msg.setDestination(3844U);
    msg.setDestinationEntity(138U);
    msg.altitude = 0.738556360205;
    msg.roll = 25783U;
    msg.pitch = 29447U;
    msg.yaw = 62046U;
    msg.speed = -7410;

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
    msg.setTimeStamp(0.338153756665);
    msg.setSource(3443U);
    msg.setSourceEntity(120U);
    msg.setDestination(54824U);
    msg.setDestinationEntity(170U);
    msg.altitude = 0.754434766063;
    msg.roll = 43079U;
    msg.pitch = 17006U;
    msg.yaw = 14874U;
    msg.speed = 26818;

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
    msg.setTimeStamp(0.713492506095);
    msg.setSource(16104U);
    msg.setSourceEntity(87U);
    msg.setDestination(47096U);
    msg.setDestinationEntity(160U);
    msg.altitude = 0.578461170177;
    msg.width = 0.808627575515;
    msg.length = 0.0324541670288;
    msg.bearing = 0.763383507975;
    msg.pxl = 593;
    msg.encoding = 11U;
    const char tmp_msg_0[] = {89, -39, -49, 85, 120, 104, -126, 21, -31, 46, -40, -30, -60, 50, 125, -66, -123, 99, -105, -115, 115, 44, 70, -73, -72, 5, 11, -70, -99, 2, -93, -97, -32, 112, 99, 80, -9, -43, -96, 34, 68, -59, -74, 115, 29, 14, 61, -60, -75, 3, 28, -61, -68, 107, -33, 117, 81, -13, -96, -108, 2, -58, 19, 106, -101, -29, -49, -56, 83, 11, 41, -82, -100, 25, -1, 114, 31, 89, -5, 64, 117, -37, -71, -80, -86, -14, 104, -18, -73, 90, -8, 7, -107, -13, -13, -27, 16, 47, 117, -113, 63, 81, -43, -84, 46, 64, -60, -11, -92, -9, -46, 52, -3, 43, 78, -61, 49, 59, 40, -1, -92, 37, -35, 74, -121, -63, 90, -33, -16, -58, 48, -19, -91, -90, -86, -16, -45, 1, -17, -59, -41, 99, -71, 107, -21, -22, 54, -65, -9, 16, -120, -95, -55, 34, -114, -28, -102, 122, 120, -127, 90, 102, 75, 104, -94, -63, 117, -17, -44, 62, 123, 4, 41, 84, -5, -14, -73, 66, 27, -56, 59, 18, -49, 101, -50, -69, 96, 50, -122, 25, -75, 55, -106, -32, 58, 104, -124, 61, 94, 83, -104, 46, -37, 32, -100, -33, 14, 116, -120, 82, -29, 92};
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
    msg.setTimeStamp(0.846439819281);
    msg.setSource(65221U);
    msg.setSourceEntity(51U);
    msg.setDestination(44884U);
    msg.setDestinationEntity(0U);
    msg.altitude = 0.393035263333;
    msg.width = 0.175488462873;
    msg.length = 0.626022562211;
    msg.bearing = 0.498044284055;
    msg.pxl = -3413;
    msg.encoding = 164U;
    const char tmp_msg_0[] = {109, 112, 29, 94, -81, -7, 56, 115, 102, 80, -3, -63, 47, -3, -65, -9, 70, -59, 124, -49, 123, 42, 30, 72, -28, -63, -126, -36, 9, -19, -103, 12, -40, -42, -33, -46, -81, 69, -78, 111, 70, 110, 49, 22, 78, 85, 110, 61, 100, 87, -57, -23, 124, -55, -53, -25, 66, -33, 10, -3, -75, -2, 17, -5, -118, 48, -46, 34, 9, -35, -27, -21, 37, 24, 81, 109, -33, -26, -115, -4, -56, -125, -9, -63, -49, 3, 5, -92, -6, -86, -103, -37, 39, 40, 22, -39, 101, 117, -35, -116, 65, -26, -55, -47, 64, 62, 126, 118, 89, -67, 49, 17, -4, -122, -71, -83, 78, -14, -103, 63, 81, 33, 37, -44, 31, -64};
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
    msg.setTimeStamp(0.146845352083);
    msg.setSource(64578U);
    msg.setSourceEntity(40U);
    msg.setDestination(31742U);
    msg.setDestinationEntity(237U);
    msg.altitude = 0.708286952476;
    msg.width = 0.109962841518;
    msg.length = 0.4570061783;
    msg.bearing = 0.538554331562;
    msg.pxl = -21668;
    msg.encoding = 179U;
    const char tmp_msg_0[] = {-11, -42, -103, -60, -12, 95, 116, 79, 50, -121, -1, -95, -125, -3, -99, -1, 112, -109, -7, -103, -34, 92, 44, -16, 64, 35, -119, -43, 107, 115, 104, -84, 52, 80, 30, -49, -119, 98, 85, -114, -74, 110, -34, 30, 16, 78, -66, 20, -8, -45, -52, -36, -88, -33, 101, 107, 16, -91, -93};
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
    msg.setTimeStamp(0.948817242337);
    msg.setSource(41291U);
    msg.setSourceEntity(242U);
    msg.setDestination(164U);
    msg.setDestinationEntity(120U);
    msg.text.assign("WTEMOQDCOUSIDYRPOTLAPOVXZHUGAYJAYCJPGUIWXFOBCAXJHLAWDZELQMUVWUKEPUQTELICQAIECTJAKQYLYMMPHGKSBWYYHIJNNFQQRMAHWBJMOQGSPKNOFVNRKZEDNWCJXXFKTETUXZSRFQVGFXBVRSHZDFCYMNLDSNKXMDKSDHHY");
    msg.type = 10U;

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
    msg.setTimeStamp(0.456157595114);
    msg.setSource(53549U);
    msg.setSourceEntity(156U);
    msg.setDestination(5761U);
    msg.setDestinationEntity(217U);
    msg.text.assign("ZVIXSPICWBAGMVOLHGNHBYGFVQDKCFHRWGISRYQJDFEUVKDTQDKYTOOGKYYRJWAUHVZECEAFECZFTHQGZEZVXMMCBVUTGLTTLUTCGSIDZUNWAMZCKKSAPPYVXPKAGLWYORZEMPUFRABJNIOQNMASXJEMSDBUDXRBAGWQNNIZEBFNFLFRYBHJSLXMYJKBLNHXN");
    msg.type = 216U;

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
    msg.setTimeStamp(0.617220855948);
    msg.setSource(10710U);
    msg.setSourceEntity(96U);
    msg.setDestination(21694U);
    msg.setDestinationEntity(15U);
    msg.text.assign("QCVSVFGGMPTOFSQFWHSDCVNKUZYKFWYCJSSANWNHZLGIBPKDQHIA");
    msg.type = 59U;

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
    msg.setTimeStamp(0.226112503117);
    msg.setSource(26056U);
    msg.setSourceEntity(33U);
    msg.setDestination(35123U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.746738167585);
    msg.setSource(39968U);
    msg.setSourceEntity(241U);
    msg.setDestination(11767U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.710002432481);
    msg.setSource(323U);
    msg.setSourceEntity(34U);
    msg.setDestination(48463U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.683034461971);
    msg.setSource(14012U);
    msg.setSourceEntity(72U);
    msg.setDestination(49325U);
    msg.setDestinationEntity(200U);
    msg.sys_name.assign("OIIZVZWLRNIEAOOLFPRTVWHRTKQSCPAKWIGFVFMQJJBIMDAQWHWUUZIUKMYRXGUYMYZIJEVPHJPCXGKXLLNBWSHALXYKUCQNROSYAGMADTJQNWNVCIWLMHTVVTOXRUUULAPODHXCLUZQTGCGEMZVFNEJBZPCOMXXOHTBKBJSKAQFGYXSE");
    msg.sys_type = 33U;
    msg.owner = 22460U;
    msg.lat = 0.409046147195;
    msg.lon = 0.105428976079;
    msg.height = 0.687042208002;
    msg.services.assign("ULDLKLEBMEFFHRGDPKVMPDTQCYJZDUPLRCVPEKSFISJWCXRVYFLCMIWDRNTEQAJGFPNFJAOGDAOAQXZSUIGHVRSSWHHXXGRBHXVWBZKJPOTOIUGESUYRXNDFMBJHHJLSWTATZVCZCNNYOFPTQVNQRYWYECKSLJWBGBUZGOVHOUWDBWJXABETKKDMFTNQWSXEIPYQUCAMMOAIVCHYMNQHOBKIKAXZAIXGMOLEIRTFUNQLUTNVPPRQZ");

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
    msg.setTimeStamp(0.336811107399);
    msg.setSource(1967U);
    msg.setSourceEntity(214U);
    msg.setDestination(45360U);
    msg.setDestinationEntity(90U);
    msg.sys_name.assign("YPRFUOKHEFWUCUBWESRTSRYGTVAZGKNJJJCYLJSOFYPWGVRGKXUTWCNHDSBOQQAGCDOBLVFUZWAXBBONTCVBHKKKEU");
    msg.sys_type = 203U;
    msg.owner = 7270U;
    msg.lat = 0.149531430781;
    msg.lon = 0.709501114074;
    msg.height = 0.812636991696;
    msg.services.assign("YAEURNZXUJMASKNFYHFWECNSUXZZYOZQJRLONPTSBRRXWWTOGVPXUWVGIHGKWHTFZHACJQHOHCB");

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
    msg.setTimeStamp(0.90092653162);
    msg.setSource(24455U);
    msg.setSourceEntity(24U);
    msg.setDestination(5262U);
    msg.setDestinationEntity(123U);
    msg.sys_name.assign("LPGWBNMKPODTHELPSQYQTPXNRLFFVEXADTNAGBHXZQFJARGGGPIYPEMGQTKCXVRTZQQJHEYAWUYHFUIHYGXZYHBEKKAWWFTOLZBERAJXZLWHJLZIVCTBJFSDFCVRKOCNACAXGJTKVSWBPJVXMUUCFPGIJUSJUDMIVMJNZUMQIELCHSGYDMUEQLOSZPFDQHBWUFYSOUDIWKNOMMNN");
    msg.sys_type = 240U;
    msg.owner = 17009U;
    msg.lat = 0.122156687597;
    msg.lon = 0.97569044099;
    msg.height = 0.982731846766;
    msg.services.assign("DEUBNCDOHNATQRRVVPEDNFRVZOUQWOXQOQQGFALAZPVEFQVRCVUSOZJNHMMWDMNASJYBTWYKIKVFMWNKJCIDOKTNCGEYHGIBGQNEQSKMLGCTRIUJFKSYUOZLIXZVOLMSJCQFLNKPBUCZHYXZBDAMPRIXXWHUZNBVGIGTBBHBGUOLWJHAPKSUWDTWHAIFXVJELLRZIREYECOKPTMTKRDYUCFJXJRSSAXHDLSMAB");

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
    msg.setTimeStamp(0.128071622801);
    msg.setSource(27504U);
    msg.setSourceEntity(231U);
    msg.setDestination(56933U);
    msg.setDestinationEntity(91U);
    msg.service.assign("QVRGDFTQKJJZBQHQPCKVSKGBPGBBPSZHBVQBAPRLSUDNRLZBCUGWCA");
    msg.service_type = 208U;

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
    msg.setTimeStamp(0.877340160702);
    msg.setSource(50527U);
    msg.setSourceEntity(14U);
    msg.setDestination(28281U);
    msg.setDestinationEntity(106U);
    msg.service.assign("BARSMXCXFQCJVTFXVKTYXLRVORHBKMNBPFHGZGJCYHRMWLSSAZNDGSCWUOJAGH");
    msg.service_type = 86U;

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
    msg.setTimeStamp(0.0776658039469);
    msg.setSource(31246U);
    msg.setSourceEntity(104U);
    msg.setDestination(49292U);
    msg.setDestinationEntity(251U);
    msg.service.assign("SXSFBUHYQJMALUAIBXTGWLTJNOLNMROBOADSCQYCDIBKIVGUADXFMCLXHDBLRIQUFKPZBWPMQPYYXNSTPYTCKVWKZNGNLHGGBMHXKFRLKDDIXTIADPWYKYGWZWZ");
    msg.service_type = 122U;

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
    msg.setTimeStamp(0.994939712724);
    msg.setSource(14899U);
    msg.setSourceEntity(214U);
    msg.setDestination(6503U);
    msg.setDestinationEntity(6U);
    msg.value = 0.741220525349;

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
    msg.setTimeStamp(0.852187213051);
    msg.setSource(61355U);
    msg.setSourceEntity(186U);
    msg.setDestination(53089U);
    msg.setDestinationEntity(61U);
    msg.value = 0.459925994774;

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
    msg.setTimeStamp(0.122695583015);
    msg.setSource(57314U);
    msg.setSourceEntity(251U);
    msg.setDestination(23185U);
    msg.setDestinationEntity(247U);
    msg.value = 0.11876637809;

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
    msg.setTimeStamp(0.784819378677);
    msg.setSource(38393U);
    msg.setSourceEntity(232U);
    msg.setDestination(61872U);
    msg.setDestinationEntity(197U);
    msg.value = 0.975042885083;

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
    msg.setTimeStamp(0.752367921203);
    msg.setSource(13580U);
    msg.setSourceEntity(187U);
    msg.setDestination(42021U);
    msg.setDestinationEntity(72U);
    msg.value = 0.775845572355;

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
    msg.setTimeStamp(0.341767034641);
    msg.setSource(24973U);
    msg.setSourceEntity(169U);
    msg.setDestination(39018U);
    msg.setDestinationEntity(250U);
    msg.value = 0.453331807216;

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
    msg.setTimeStamp(0.304392265463);
    msg.setSource(46965U);
    msg.setSourceEntity(97U);
    msg.setDestination(52169U);
    msg.setDestinationEntity(64U);
    msg.value = 0.991763172663;

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
    msg.setTimeStamp(0.772802061014);
    msg.setSource(49354U);
    msg.setSourceEntity(236U);
    msg.setDestination(16864U);
    msg.setDestinationEntity(59U);
    msg.value = 0.42728863239;

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
    msg.setTimeStamp(0.393981584518);
    msg.setSource(23390U);
    msg.setSourceEntity(205U);
    msg.setDestination(34592U);
    msg.setDestinationEntity(0U);
    msg.value = 0.1887912403;

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
    msg.setTimeStamp(0.430838565658);
    msg.setSource(54614U);
    msg.setSourceEntity(94U);
    msg.setDestination(46308U);
    msg.setDestinationEntity(123U);
    msg.number.assign("MEKLGOLCXUIZJZQTKPGFVJBGDWTIRAMIDYCESHRAJCECCOXGZDVCUFBDWQNEMYXJSVFHPYBAOFVQKRHHOIWTLIMGIRFNZDNNTDHPGTNPWKUQVMEYQCCZLEPBWBJXABHIXOBGEVIDZDSPLHOKPLLPRBGWMXOKFVUSTSLLQXEBEFNWUVGWQCPHFAMORRTNYYYXFVYAURUXHKD");
    msg.timeout = 14592U;
    msg.contents.assign("GEDDFPXQHDNSOFAAEHSQMFNRVZAYLUXCX");

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
    msg.setTimeStamp(0.379057102234);
    msg.setSource(23482U);
    msg.setSourceEntity(221U);
    msg.setDestination(6675U);
    msg.setDestinationEntity(112U);
    msg.number.assign("ZHXKUQJLOGRREPRUYHQFFAUJPZWAJMPWOGAUBPKDZZQDVOIJXMBOHCRJBQJCXWASZWALRTHQHXREEMSZVKQSZLPXQBMGGLFBEXZMDKMGZTBGDWIFHGTNYLLFPKISNKYORQCCCCNVIVNNWYOHAASOMFEFUXEGLNBABIVOOUTYKDSMFTVIUCPYKBWTAPNENXWIFCYYTHJAXSNIOLTFGBTWYDLW");
    msg.timeout = 13836U;
    msg.contents.assign("LQXDUJVCCPDABIGYADKSSREKFWBHHAJEJNIDMURIROXIYQEQGONBIMKICSGZEMDJIVJPSLVQUEZZJKTINTHXZUSWZMWCUWYDWMBNOBNTVCSYAEPBHXMUMPNARWSDAKUVOMTHVLARPYZNWYGWQXORNLOXTNQZEILKGUBGCVXAYOFMCBXGFKY");

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
    msg.setTimeStamp(0.556298932461);
    msg.setSource(43437U);
    msg.setSourceEntity(2U);
    msg.setDestination(34044U);
    msg.setDestinationEntity(138U);
    msg.number.assign("TGNNAJYMSFYZRLQKHMAXZHJVVUZNFJPG");
    msg.timeout = 31881U;
    msg.contents.assign("WFQJLKVHANYUUHCDLYDQILSRKSIWPBVGUSIJPGKYQXRDDWNRFKGOEPEGBYKCFWJABEIESHRFQMSZMQNSVDS");

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
    msg.setTimeStamp(0.356141472379);
    msg.setSource(37132U);
    msg.setSourceEntity(68U);
    msg.setDestination(55251U);
    msg.setDestinationEntity(61U);
    msg.seq = 2031137008U;
    msg.destination.assign("WIRUJZINVTJRBPMPHWDZVPLLNMIYVRISLSXFZMCIBKQXBRMBWXTABHFVRVEG");
    msg.timeout = 55335U;
    const char tmp_msg_0[] = {-96, 18, 14, -1, 20, 48, 10, -51, 44, -76, 23, -58, 98, -7, 12, -125, 38, -32, -54, -94, 9, 86, -18, 56, -100, 118, 87, -10, -103, -63, -65, -58, -89, 76, 49, -28, -50, -24, -128, 79, -9, 33, 43, 78, -102, -102, 110, 120, -108, -85, 60, -124, 97, 58, 8, -1, -66, 71, 33, 18, -7, 56, 50, 115, -100, 32, 13, -96, 85, 111, -123, -46, 68, -100, 116, 40, -85, 32, 7, 73, 93, 82, -121, 61, 34, 113, 0, 87, -3, -41, -43, -9, 34};
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
    msg.setTimeStamp(0.989026377809);
    msg.setSource(50470U);
    msg.setSourceEntity(17U);
    msg.setDestination(26267U);
    msg.setDestinationEntity(129U);
    msg.seq = 4074623881U;
    msg.destination.assign("QYQSXFMFISQIBFVCSKEXTEHWVXESCMHDGZHEXWDFMWUYFAJYCLNURINOPGJUGPAHOARUPIFIIVGWHVOSRLUFVRYVAWNLVDRTGDRKIMBBYJLLUNWQZPVQXLJGJJOIPANMUHRKUGVXZXUDADOHXEPAZIBBKSQCYDZOCMJEZCRNKCNNWHTTOAQLWMPTBCCCZFSXQ");
    msg.timeout = 52368U;
    const char tmp_msg_0[] = {40, 125, -37, 19, 89, -104, -114, 39, -46, 119, -120, 23, -91, -126, 41, -79, 103, 92, -20, -107, -63, -63, -7, -21, -89, 62, 44, 91, 20, 21, -115, -127, -86, -93, 94, -17, 13, -59, -55, -65, -83, 98, -125, -4, 25, -93, 67, 113, 122, -13, 93, -28, 54, 53, 71, -96, -121, 88, -5, 85, -9, 68, -128, 1, 107, 112, 30, -23, -16, 75, 110, 48, 111, 66, 88, 47, 123, -19, 61, 82, -88, -60, -64, 121, -86, 27, -22, 116, -22, 77, 45, 107, 19, -63, -113, 122, 66, 3, -28, -77, -41, 44, 16, -10, -110, -25, -53, 97, 99, -111, 103, 56, -50, -38, -72, -45, 100, 65, -53, -92, -31, -9, 80, 60, -81, 126, -76, -33, -123, 25, -52, -113, -36, 42, 79, -105, -50, -107, -12, -34, -83, 58, 102, -88, -60, 20, -62, -97, 27, -12, 110, 47, -117, 113, -107, -32, -122, 117, -60, 100, -8, 83, 25, -62, -26, -43, -38, -51, 87, 24, -122, -21, 21, -16, 47, 29, -84, -60, 23, -49, -4, -34, -112, 85, 94, 78, 97, -13, -22, -101, 39, -63};
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
    msg.setTimeStamp(0.0903635397548);
    msg.setSource(7000U);
    msg.setSourceEntity(56U);
    msg.setDestination(2950U);
    msg.setDestinationEntity(200U);
    msg.seq = 425404585U;
    msg.destination.assign("ZACIDGYFXBCVQVDPMIJIUWAWGDUMRQQQMHHRCFVRENLCWLPKWNSLKMBYOYZUNPFRFTJDRVBDSQOBYFLMHOGCZGNZCWDSIZZLSJAKJGTIBSHVHHDWQLKZYJYTRLDCQGCMWJUJXVNMIVQYNUQGBAEHMTILXTKVHYFKYRAAZNXGAWLKBJXQXEXBUPOXKPNFZRVAUEUBLCSAOY");
    msg.timeout = 29263U;
    const char tmp_msg_0[] = {111, 64, 77, -73, -22, -126, -25, 93, -15, 31, 15, -61, 126, 90, 41, 103, -112, -75, -86, 81, 82, -53, 91, -15, -50, 95, -103, 97, 92, -38, -22, 32, -11, 122, 98, 57, 66, -95, 79, -97, 68, -65, -86, -123, -97, -91, -32, 74, 45, 66, -78, -86, 107, 66, -68, 27, -2, 126, 5, 44, -76, -95, 85, 114, -26, -128, 72, -39, 23, -126, 106, 72, -114, -101, -80, 111, -115, 19, 110, 19, -115, 78, -39, -78, -126, 111, -112, 40, 17, 87, -16, -38, 65, 62, 65, 67, 2, -111, -30, 125, 76, 43, -101, 57, -124, 59, -22, 5, -8, -5, 80, 89, 22, 32, 101, 18, 62, 6, 73, -37, 114, -116, -19, 19, -101, 81, 6, 12, 21, 7, 27, -75, -76, -111, 83, 33, -49, 54, -33, 86, -46, -3, 94, 60, 7, -39, 62, 85, -86, 94, -53, -127, 14, 31, -52, 26, -37, 115, -49, 80, 95, -62, 87, -94, 70, 124, -110, 70, 126, -40, 89, 104, -88, -39, 32, -14, 2, -3, 84, 11, 51, -76, -116, 58, 32, -68, 0, 32, 64, 119, 120, -30, 74, 79, 18, 10, -123, 39, 116, 10, 16, -13, 57, 86, -98, -47, -117, -113, 12, 84, 52, 71, -39, -88, 62, 90, 76, 59, -12, -72, 3, 107, -8, -4, 120, 93, 74, 10, -70, 90, 32, -38, -31, 21, 14, -118, 68, 100};
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
    msg.setTimeStamp(0.21962694645);
    msg.setSource(22742U);
    msg.setSourceEntity(86U);
    msg.setDestination(56833U);
    msg.setDestinationEntity(131U);
    msg.source.assign("CGWFVMMYANLUZBKSDGZRTXIPVBLEBJLFUUGPYTRLGQIEYBXJTZLMIEJQTKCAHETVPDSYNGPWOJNLHYIUHMQQSXFHZQY");
    const char tmp_msg_0[] = {86, 6, 75, 101, 18, 124, -6, 90, -104, -98, -73, -63, 118, -95, 31, 5, -7, 61, 20, 52, -124, 114, 34, 70, -37, -98, 24, 125, 21, 103, -70, 17, -82, 117, 12, -124, 83, -121, -46, -36, -101, -83, 91, 58, -70, 31, -111, 44, 27, 11, 8, -78, -110, 114, -99, -6, 67, 79, -35, -127, -95, -89, 21, -77, 122, 126, -113, 28, 106, -110, 72, 20, -11, -44, 108, 96, -20, 78, -12, 111, 24, -99, -115, -91, 69, -52, 32, 67, 107, 87, -25, -122, 42, -33, -2, -62, 33, -82, 60, -93, 96, -33, -107, -70, 43, -8, 81, -53, 25, -4, 109, -11, 97, 93, 21, -99, 83, -42, -56, -14, -100, -30, -53, -121, 71, 45, 115, 98, -82, -28, 58, -34, 59, -55, -31, 95, 117, -89, -113, 49, 49, 58, -21, 114, 24, -61, 110, -16, -23, 72, 113, -127, 41, 41, -105, 0, -12, 120, 25, -90, 47, -95, 16, -73, -115, -101, -7, -9, -69, -22, -32, -102, -113, -94, -30, 29, -124, 27, -8, -89, -113, 38, 33, 110, 120, 103, 104, 114, -73, 115, -123, -126, -12, -77, 87};
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
    msg.setTimeStamp(0.900472819593);
    msg.setSource(62388U);
    msg.setSourceEntity(59U);
    msg.setDestination(22972U);
    msg.setDestinationEntity(203U);
    msg.source.assign("OGMNZVDSZHXONJOFVTTYZNEAMSEVXYANKPGKPDXMIOTPRJESEV");
    const char tmp_msg_0[] = {5, -115, 73, 29, -111, 8, -10, 38, 114, -23, 107, -97, 94, -9, 79, 91, -35, -43, -71, -108, 93, -30, 120, -48, -68, -121, 67, -97, -96, -43, 11, 4, 20, -29, 109, 12, -27, 25, 57, -45, -93, -31, 8, -61, 126, -61, -54, -18, -89, 77, -1, -37, -54, 18, -112, -56, 27, 27, -79, -16, -40, 100, 47, 41, -12, -123, 44, 23, 87, -67, 106, 111, -88, 93, -57, -80, -12, -34, 110, -60, 89, -91, -106, 22, 44, 97, -52, 42, 47, 54, -63, -111, 58, 95, -17, -72, -48, -67, 54, 121, 108, -94, 42, 105, 12, -125, 107, 69, -29, 81, -12, -51, 71, 111, 20, -64, -53, -127, -120, 38, 18, -113, -58, 20, -71, 99, 57, 58, 121, 77, -63, 114, 110, 18, 106, 0, 106, -93, 124, -6, -121, -119, -74, -126, -66, -77, 10, -14, -102, 72, 74, 97};
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
    msg.setTimeStamp(0.997913680789);
    msg.setSource(12739U);
    msg.setSourceEntity(96U);
    msg.setDestination(18267U);
    msg.setDestinationEntity(2U);
    msg.source.assign("RJGFUDUWISOSPXGUAJIARTMYTIFUXSYGPHYOLMSGILZRCVSRDAJXDMHWBSIJOWDQKWWCRKHDLFYHRDVTDHJVYPZQTREZFGHNNPJCGNXWYNVCRXAAVLVGIKNBOCDBBBLBQKMIXLOJNBYEAZXQEWRXKUYLIOPGGHAVKHZBTWMHWMQQHKRMUJATWELIOUSFJMQFPNPXKYKYEGZUNEJMLCCAZESQFZDKZNXEDFQTLOCSMBTTVI");
    const char tmp_msg_0[] = {-63, -92, -117, -97, 37, -82, -106, -115, 84, -111, 50, 121, 73, -127, 66, 116, 59, -53, -16, 16, -60, 126, 47, 60, -49, -92, 81, -75, -65, 120, -65, -108, -45, -116, -63, -123, 105, -82, 73, -55, -19, 29, -9, 38, 103, -82, 42, -92, -1, 1, -44, -56, -47, 66, 97, -115, 98, -120, -84, -17, -78, 47, 98, -45, 19, -34, 20, -52, -126, 86, 105, 28, 38, -128, -122, 107, 106, -57, -75, -50, -44, -104, -18, -125, 1, 115, -127, 101, 74, -32, -58, 112, 112, -33};
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
    msg.setTimeStamp(0.131098630406);
    msg.setSource(56457U);
    msg.setSourceEntity(199U);
    msg.setDestination(28603U);
    msg.setDestinationEntity(36U);
    msg.seq = 3982685360U;
    msg.state = 183U;
    msg.error.assign("HMRCBMYJIDWMRHHTONPJL");

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
    msg.setTimeStamp(0.647153244987);
    msg.setSource(50324U);
    msg.setSourceEntity(99U);
    msg.setDestination(6070U);
    msg.setDestinationEntity(118U);
    msg.seq = 1056932170U;
    msg.state = 112U;
    msg.error.assign("RLECTPMVBOIKKHFYNENAHJGETFIENNNUXOKZAGDWDJMZTLJSLQERXSOFVBBWVGKSJBLRJXVGLUOHCEQKYRWNAVZHAYJUTYWJESCRCKNNOOHVSASMGHTMCBMKUZNLZAAOWHFTSGYGQSSMBBZXKTIBHILXUWDPFTIYPQDSRXROPYEUPXZLZKCGWDYAV");

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
    msg.setTimeStamp(0.443709010441);
    msg.setSource(10337U);
    msg.setSourceEntity(80U);
    msg.setDestination(57942U);
    msg.setDestinationEntity(168U);
    msg.seq = 2296695462U;
    msg.state = 246U;
    msg.error.assign("RMORQWLRJHNVCASYKWUHGCEVSGRNEICDOXUWWBZFXVLFPOTZNLKZJABQMLXYNMEVQRIUFRAWAFYDYWYNGJYLKMKZSINSPKITTCUHDXFQBVKJJBGZVYHEWXDSAGRCNMEFTQOXCGZJPFLXBHICVDUSTEIBIEODGGLSFPBBHANMHATQXJTQOQQMXCWVKUODJCRJWNFPVPWLXYOMAYUBKUI");

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
    msg.setTimeStamp(0.888229703249);
    msg.setSource(33472U);
    msg.setSourceEntity(6U);
    msg.setDestination(64380U);
    msg.setDestinationEntity(9U);
    msg.origin.assign("NNKLIJGZECCOQRCEQJEVMEUCUEKDVSMFBYRTXZVABHIHVTMKRMRIEQEBYQMWXVKKUPMGLSZNNFVQHFAJOIHRRAKVVRZCQQHHZAYLATFYEBBKPUUJJQWGTAPXTMIAWDSOGDPPDJWYVY");
    msg.text.assign("EPTOPAMHUDKBCIJ");

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
    msg.setTimeStamp(0.488476560608);
    msg.setSource(63562U);
    msg.setSourceEntity(221U);
    msg.setDestination(40062U);
    msg.setDestinationEntity(166U);
    msg.origin.assign("PBMPSPIYTVXAYKJWCSICBQZVGJYWZACTHVIWLGSSEZEGMPJPGNMWAKHPVNXFACDRIWFUVYONJRWGNRDUFWMEKMCSLFNGEPTMRFVEQDXKKHETJVHQRSZWEHQHISYNQOMRODTATTOBVDFJOOVXLCJURZREGLZZUYBYZBAADDHLMTCGAIJZUPULOTXFCHYSALQIGOOSKUJDVBXTRFLMWPSAKBBXUYHBXXKBWIQZKUQDGJXQHIRUYM");
    msg.text.assign("SLNRUBFWRIBNJAOVSSLCSTRKHYRZZSXIVDPVWGINYDHFCQLVXLTMCQCTSWGPDCBSXDQLPQQYZJBHVUEBUAEBSCTWKFJOWBGAEJTKKOENQHTZFGWZVOHVJBNLPAJXQWEMPOMZRTZVOMGGNFIAQXIJRPDUXPJMPDZMFGHPGSAFUAWKOLIYYXRKCIJCHDCHMKBRMFGEI");

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
    msg.setTimeStamp(0.76445229783);
    msg.setSource(3915U);
    msg.setSourceEntity(135U);
    msg.setDestination(49814U);
    msg.setDestinationEntity(118U);
    msg.origin.assign("XNTYBCYDGWKEAQDINRTZXYZMFAWUVWMENMMRZVYPOIZHOTCMPEPSPHEGHURGOS");
    msg.text.assign("OIUWCDABJZYGNJYUXGVMTGLLDULCMQUCZWSUKMEWBFUESLUMHHVNBVBTWDSFPAOXIMVBXDIXKDXBATOBANETPILGKCJLRFSXZQTMZLPGMIYNOEQCGDWFQYNBQEPNDDICXAHXPHKLQZHHS");

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
    msg.setTimeStamp(0.823459036782);
    msg.setSource(24351U);
    msg.setSourceEntity(237U);
    msg.setDestination(16785U);
    msg.setDestinationEntity(173U);
    msg.origin.assign("INMVGKIHGUUDXWHMWFWXPWHOCBOBCTZABKHAANFRCXDUFAMUELEXOXDJDNYZYH");
    msg.htime = 0.624421183923;
    msg.lat = 0.952332982784;
    msg.lon = 0.165293857821;
    const char tmp_msg_0[] = {15, -3, 42, 18, -53, 78, -50, 43, -80, 103, -43, -76, -85, 58, 115, 49, -84, -94, 97, -36, 19, 98, 124, 94, -63, 97, -121, -37, 80, 99, -58, -62, -107, 59, 32, -86, -44, 47, -45, 84, 65, 100, -101};
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
    msg.setTimeStamp(0.406674528761);
    msg.setSource(28400U);
    msg.setSourceEntity(162U);
    msg.setDestination(48781U);
    msg.setDestinationEntity(12U);
    msg.origin.assign("NVBGWJJCYLTVAXKKQHMAHUSXMWRRTWMCFEFUMTYNAPDWDPKVGOOAEBJIWTLKKQBFRUULCHYBIZRXRIZBDQQCAOCWYHKENAUIJTVQMSPIQHXEAQYONEYKGOXPKV");
    msg.htime = 0.446450487045;
    msg.lat = 0.212204905563;
    msg.lon = 0.239355376801;
    const char tmp_msg_0[] = {54, -34, 59, 7, -95, 16, 40, -69, -60, -47, 77, -30, -11, 120, -67, 58, -46, -118, -128, -42, 106, 61, -37, -105, -119, -24, 20, 42, 63, 90, 61, -120, 73, -66, 120, -79, -58, 67, 109, 45, 94, 37, 9, -119, -118, -120, 78, 66, -9, -105, -3, 126, -26, 93, -52, 54, -18, -110, 26, -53, -34, 123, -94, -10, 27, 114, -56, -38, 118, -113, -40, -31, 51, -38, 119, -71, 3, 32, -100, 110, -19, -75, 15, 76, -12, -124, 48, 101, 29, -102, -104, 63, 115, 30, -58, 56, -33, 88, -114, 19, -79, 50, 38, -105, 81, 64, -87, -13, -54, -23, -23, -13, 21, -85, -87, -46, 110, 28, -127, 94, -2, 31, -72, -22, -18, 79, 42, 102, -19, -100, -63, 9, 98, 44, -91, -126, 64, -95, 43, -103, 107, -38, -38, 17, -5, 100, 66, 107, -83, 123, -51, 18, -68, -35, 102, 77, 67, 18, -54, -123, 69, -110, 3, 97, 22, -122, 56, -25, 20, -97, -86, -35, 82, -47, 22, 55, 17, -8, 88, 9, -69, -91, -68, 55, 19, -32, 105, -94, -116, 21, -35, 42, 99, -126, -3, -106, -11, -88, 21, -65, -110, 11, 59, -1, 59, 95, 59, -10, -20, -119, -2, -57, -99, 7, 109, -42, -89, -8, 29, 102, 11, 101, -103, -18, 117, 71, -4, 17, 96, 39, -125, -65, 80, 113, 123, 9, -41, -26, -46};
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
    msg.setTimeStamp(0.681392301452);
    msg.setSource(9284U);
    msg.setSourceEntity(170U);
    msg.setDestination(17153U);
    msg.setDestinationEntity(125U);
    msg.origin.assign("RLPCLJCTECKXEPUGGWBEFBBYTMOFSIKJZRXYNAJILTHWEGPJUFBYMUWYRTNMWHQVXPUDEVRYQRPQVZKBVKZHHNX");
    msg.htime = 0.85595378469;
    msg.lat = 0.524381072603;
    msg.lon = 0.655997033595;
    const char tmp_msg_0[] = {9, -41, -86, -9, 101, 85, -117, 17, -50, 23, -12, -123, -95, 68, 79, 38, -31, -85, 76, 84, 56, -108, -15, 72, 55, -27, 7, -75, 62, -50, 43, 86, -33, -106, 108, -13, -62, -7, -22, 41, 1, -44, -50, 90, -49, -33, -107, -59, 27, 11, 52, 61, 124, -75, -15, 116, 64, 84, -34, -45, -68, 9, 32, 16, 101, -44, 3, 3, -69, 114, -80, -53, -56, 63, -29, 123, 97, -68, -28, 121, -74, -10, 22, 100, 59, 57, 100, 14, -18, 46, 78, -119, 41, 112, 69, 104, -110, 12, -127, 23, -67, 11, 103, -73, -128, -20, 49, -91, -56, -47, 82, -38, 60, 78, 6, -86, 70, -109, 4, 87, 38, -70, 40, 71, 23, -45, 36, 7, -98, 91, 8, -108, -96, 83, -19, 2, 17, -93, -19, -43, -98, -107, -73, 113, -78, 111, 83, 10, 43, 110, -124, -48, -82, -25, -119, -56, 13, -68, -50, -99, -36, -84, -123, 55, 27, 50, 80, 88};
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
    msg.setTimeStamp(0.336026683993);
    msg.setSource(26482U);
    msg.setSourceEntity(36U);
    msg.setDestination(25811U);
    msg.setDestinationEntity(23U);
    msg.req_id = 64502U;
    msg.ttl = 54633U;
    msg.destination.assign("TXQXDQAQOZUPESEQGWZ");
    const char tmp_msg_0[] = {80, -88, 7, -14, -69, 33, 14, -3, -8, 59, 110, 15, 68, -99, 3, 92, 107, -108, 9, -42, -51, 20, -82, -67, 38, -90, -27, -1, -51, 90, 59, -46, 113, 42, 14, 117, 84, -71, 109, -102, -57, -79, 49, -101, -47, 59, -100, 43, -45, -5, -100, 68, -91, 17, 58, 109, 73, -7, -98, -82, -92, -127, -56, -17, -93, -15, -56, -27, -45, -37, 8, 124, -1, 14, 66, -48, 45, -61, -83, -88, -29, 100, -39, 60, -22, 42, 54, -105, 114, -91, 94, 0, -22, 84, 107, -28, -64, 106, -111, -64, 101, 3, 36, -64, 112, 38, -34, 12, 117, 98, 31, -115, -49, -111, 80, 85};
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
    msg.setTimeStamp(0.971676125907);
    msg.setSource(64854U);
    msg.setSourceEntity(138U);
    msg.setDestination(40872U);
    msg.setDestinationEntity(12U);
    msg.req_id = 26478U;
    msg.ttl = 36180U;
    msg.destination.assign("TEPMPXFGDETJSNSQJQQNGOVXWOGPRYHJKWCQFLNXNRFBCRKNFWDFCYQIGHKCLVEGDA");
    const char tmp_msg_0[] = {126, 33, 92, 48, 29, -2, -21, -44, -11, 75, -72, -76, -87, -114, 22, 3, -63, -66, -36, -23, -35, 79, -124, 1, -118, 76, -123, 88, 63, 121, 2, 25, -11, -87, 45, 80, -106, 5, 61, -40, 52, -1, -83, -117, 75, -86, 109, 43, 120, 35, -112, -61, 68, -65, 123, 54, 30, 114, -126, 90, 20, -98, -119, -88, -12, -18, -18, -6, 32, -56, 17, 60, 104, -18, 118, -86, -48, -125, -99, -75, -81, 95, -112, 110, -126, 47, -90, -5, -23, -74, -106, -107, 47, 122, 13, -17, -89, 41, -119, -18};
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
    msg.setTimeStamp(0.911849048073);
    msg.setSource(37269U);
    msg.setSourceEntity(169U);
    msg.setDestination(56661U);
    msg.setDestinationEntity(183U);
    msg.req_id = 1073U;
    msg.ttl = 56969U;
    msg.destination.assign("YWVJJONXKZNBKVJDZXRNBJTLGMVAQHGBTRWPWRDLCGISYUSFEOEUBAVNIEHNOLKCGTRHQLILLAKRQCEKDMTDMCICQYPQIFOYYWARTFPGTUPTCNSYQMZPYUOXLMVMLOBIBFUIAUJEHCALAJPBHNDUZTWJXMZPSEOHQADXSIJWXPDUDKKXYGVQFCWJOMIQPZWDOJBIDNOHREVSAKZ");
    const char tmp_msg_0[] = {27, -61, -116, -9, -7, 80, 65, -85, 55, 14, -68, -108, -24, -40, -41, 17, -23, 53, 46, -80, -4, 59, -28, -4, 85, 123, 1, -30, 74, -25, 33, -14, -63, 104, 61, -49, 25, -33, 79, 117, -58, 10, 26, 55, 9, -62, 72, 70, -122, -55, 72, 82, 5, -6, -2, -2, 110, 9, 23, 35, 33, 27, 20, -86, -20, -19, 5, 19, 73, 113, -91, 4, 67, 115, -30, 113, -12, 60, 9, 49, -65, -12, 23, 16, -31, -121, -89, -53, -29, 39, 77, -38, -60, -41, -58, 1, -117, 57, -116};
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
    msg.setTimeStamp(0.343552509565);
    msg.setSource(16943U);
    msg.setSourceEntity(194U);
    msg.setDestination(27981U);
    msg.setDestinationEntity(118U);
    msg.req_id = 24069U;
    msg.status = 84U;
    msg.text.assign("ZOQUADHLCFFEKAHEWKBAVLQBDKTLSYWLLJOGACHKHJNSCPKARKXEJUPYBOLWDXMGBUNXCTMWGMKZRFBTFHIMYYOXXDIZWHSGQTVLEJIEVSEYNRFWBUQHTGANUNWXCNPMIFIRWEZKLAIOPDSSMUEZGH");

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
    msg.setTimeStamp(0.382857486336);
    msg.setSource(26669U);
    msg.setSourceEntity(30U);
    msg.setDestination(10273U);
    msg.setDestinationEntity(251U);
    msg.req_id = 597U;
    msg.status = 167U;
    msg.text.assign("CDJHONMMUTBWQJZKQCXATCMLFFWRJAUKCINRBDTURILMOSFQTPMKAWPBTEOULGFPNXHPBEFJXZDCDLOXAHWVVQSSYWXKMJILBMZAGXGIEKWVQDRGHIEWQCGSAPYNFJFRSVZWKHOHDPZRRNAJQVCBSJUVQDBXYYCNPKOEVLOAMAGNHBCTEOIGNSVSRFLKIBVZCZIHGMXUYRPUTYNEJPSGDYFJVEKWIHZXDUKOFXSYPTYGLUUQRBQTLZ");

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
    msg.setTimeStamp(0.790180651338);
    msg.setSource(43555U);
    msg.setSourceEntity(237U);
    msg.setDestination(58379U);
    msg.setDestinationEntity(233U);
    msg.req_id = 12827U;
    msg.status = 40U;
    msg.text.assign("CYWOCUEJRQREDGXJURZDXTUMUNIVAXHAYDHJUCOHWVKDFBWTCBRSQTMBBQHPJTMIBTGXIFAWSSJMZQPSGCEOLHLIVDVMEWLKLOQXHFFJYAOFFLLCJUXDKORSWMDOLRNGTUHDZAAQFLKOYVNVCERUXYCPBAKHWGKUAXVNIIVTQQGNPSDAPZPNMGOKWSSGDYYBSMENLZFZHQPREMJNECKGBNYPIWTLZBGFSYJJXOEKNZZVARTEHI");

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
    msg.setTimeStamp(0.456461367089);
    msg.setSource(49901U);
    msg.setSourceEntity(151U);
    msg.setDestination(63781U);
    msg.setDestinationEntity(8U);
    msg.group_name.assign("SBDROAKUBCKZGKNAKW");
    msg.links = 1442616109U;

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
    msg.setTimeStamp(0.380127384632);
    msg.setSource(53540U);
    msg.setSourceEntity(245U);
    msg.setDestination(16183U);
    msg.setDestinationEntity(35U);
    msg.group_name.assign("WGTCVWKSESOLRRKSNNJDTFHNWNUAMDKBGJWAWEMLAMWSIXTJGQJCZRXIRYYHUKGVGJHLJDZMIQUISUYVKRIYQHXILQHCJVXKUBVEOPTRMUTEUAECTHDWLWAZURYVFBPGPOMFBNMDCJQXMQZFJASIDQPSCQOLODGVTQTXZZYRYESYHEMFDPXQVVFZAXYYPZUTDEBXEAFGBNSKLPPLUXKMHOGVWEDWCOAINRBFNPHFONCH");
    msg.links = 2616604285U;

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
    msg.setTimeStamp(0.631217006586);
    msg.setSource(18401U);
    msg.setSourceEntity(180U);
    msg.setDestination(31348U);
    msg.setDestinationEntity(217U);
    msg.group_name.assign("TJKDOPSMHTOSDOTDZEXPJZJIIBFJWSRULHWKAFLXWXMCWRECEMXUPSRGIROCVBMLQVGGENDGJCYKSYYIOWAIDEAFRTEAHIYJUQMLXOZWVBOZFTCBVCTNLPQKWWRFUAVNHZWQXLKVTY");
    msg.links = 3144954071U;

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
    msg.setTimeStamp(0.21406164522);
    msg.setSource(4662U);
    msg.setSourceEntity(77U);
    msg.setDestination(7261U);
    msg.setDestinationEntity(238U);
    msg.groupname.assign("LCPMBQOKYAJZGHLBABGNTRQKJLD");
    msg.action = 191U;
    msg.grouplist.assign("TMXLVJCMBZNDOOZKFABIOWLOROLPQMPIKSKHZXHGDWLDNYPJTBCIDV");

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
    msg.setTimeStamp(0.36988512846);
    msg.setSource(5814U);
    msg.setSourceEntity(1U);
    msg.setDestination(31484U);
    msg.setDestinationEntity(123U);
    msg.groupname.assign("KUZVSBFOJEDTMDNZNWJWILPNMHPULWDUKMVTVWWMHERVVVKLXNTAGSVAZSXRCCEDPUHHLZQZXCXLRIGONZKITJMRSRHRXYEQABTTIFKJDOCPYMABMYZPSWEAKQGUXHDMTTEFOEONHGYKGHXCJAABRFCIULQOKEGAFGOJJBWBPDQXDISWGUHIRYULECZAYP");
    msg.action = 64U;
    msg.grouplist.assign("VXGQOWYZUZE");

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
    msg.setTimeStamp(0.402061812975);
    msg.setSource(8236U);
    msg.setSourceEntity(103U);
    msg.setDestination(8104U);
    msg.setDestinationEntity(180U);
    msg.groupname.assign("DPWVVYTSHLOQHTGJLICFZJQTVSCZEPWJHWMULNXHAAQXHWVTEGUHYIODJKEXPRGJTRUCIENSICZWBMTXQOZQVKUVLZBSLDFOAKBOBWLPXIFBMKXNVYFDUCORJKISUKMUQLPRRHS");
    msg.action = 25U;
    msg.grouplist.assign("ABAJEGHGUTEYQNGJJXMZTARBQUBETLRTGLUJYDPZWYBSQUCAASHLHKDYDFKUJXPVVTXPAVHHCEZRXSXIYFLNQEHSPAYEZOEMCMJYHXDSDGVRFFBZWQRLJPGCMERXPZMZOKIIMNUCWIIVDODLOZLAFURKSSCSWYPNSTFMTXSHFECKIHYGNWXJIVKCJOZDCZRKNBMBGLRXCAFRUVFKGWDKWVTUNALOFTONNHIKOJUIMBQOWMWGQ");

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
    msg.setTimeStamp(0.848739766412);
    msg.setSource(29504U);
    msg.setSourceEntity(192U);
    msg.setDestination(41356U);
    msg.setDestinationEntity(128U);
    msg.value = 0.816591260029;
    msg.sys_src = 26655U;

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
    msg.setTimeStamp(0.664152188077);
    msg.setSource(29262U);
    msg.setSourceEntity(152U);
    msg.setDestination(23133U);
    msg.setDestinationEntity(183U);
    msg.value = 0.0036031742951;
    msg.sys_src = 13851U;

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
    msg.setTimeStamp(0.265609700781);
    msg.setSource(40038U);
    msg.setSourceEntity(232U);
    msg.setDestination(21649U);
    msg.setDestinationEntity(235U);
    msg.value = 0.715318877422;
    msg.sys_src = 61252U;

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
    msg.setTimeStamp(0.519664584587);
    msg.setSource(33331U);
    msg.setSourceEntity(247U);
    msg.setDestination(19951U);
    msg.setDestinationEntity(163U);
    msg.value = 0.282532793814;
    msg.units = 163U;

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
    msg.setTimeStamp(0.109691969285);
    msg.setSource(55220U);
    msg.setSourceEntity(10U);
    msg.setDestination(62919U);
    msg.setDestinationEntity(204U);
    msg.value = 0.732684411785;
    msg.units = 189U;

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
    msg.setTimeStamp(0.0153996008611);
    msg.setSource(53452U);
    msg.setSourceEntity(74U);
    msg.setDestination(32390U);
    msg.setDestinationEntity(160U);
    msg.value = 0.411879659561;
    msg.units = 240U;

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
    msg.setTimeStamp(0.524791115188);
    msg.setSource(47031U);
    msg.setSourceEntity(75U);
    msg.setDestination(16248U);
    msg.setDestinationEntity(165U);
    msg.base_lat = 0.213446473523;
    msg.base_lon = 0.725789407759;
    msg.base_time = 0.397217565632;

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
    msg.setTimeStamp(0.815215125705);
    msg.setSource(14340U);
    msg.setSourceEntity(253U);
    msg.setDestination(8851U);
    msg.setDestinationEntity(206U);
    msg.base_lat = 0.898253467377;
    msg.base_lon = 0.71486147371;
    msg.base_time = 0.569437763759;

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
    msg.setTimeStamp(0.377484068218);
    msg.setSource(53819U);
    msg.setSourceEntity(86U);
    msg.setDestination(32524U);
    msg.setDestinationEntity(37U);
    msg.base_lat = 0.639575866594;
    msg.base_lon = 0.568678078583;
    msg.base_time = 0.551460443202;

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
    msg.setTimeStamp(0.0913345615185);
    msg.setSource(15868U);
    msg.setSourceEntity(106U);
    msg.setDestination(25341U);
    msg.setDestinationEntity(15U);
    msg.base_lat = 0.864576424577;
    msg.base_lon = 0.427779970716;
    msg.base_time = 0.745489464607;
    const char tmp_msg_0[] = {-72, 36, 7, 124, -37, 53, 126, -67, 41, -100, 104, 9, 75, 61, -35, 116, 14, -92, 4, 113, -111, 111, -87, 0, -88, -102, 124, 117, 74, -99, -113, -107, 77, 42, 83, -18, 24, 54, -42, 35, 117, -103, -50, -15, -127, -58, 4, 105, -14, 10, -74, -17, 56, 53, 7, 19, -29, -112, 8, -32, 114, 34, 104, -91, -101, 24, -48, -44, 49, 14, -4, -123, -44, -90, -47, -65, -98, -71, -12, 75, 119, 55, 4, 109, -117, -50};
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
    msg.setTimeStamp(0.5993519587);
    msg.setSource(38278U);
    msg.setSourceEntity(86U);
    msg.setDestination(41627U);
    msg.setDestinationEntity(63U);
    msg.base_lat = 0.695553226654;
    msg.base_lon = 0.881603176682;
    msg.base_time = 0.973133999216;
    const char tmp_msg_0[] = {-14, 60, -96, -99, 104, -21, -100, -96, -35, -51, -112, -73, -99, 75, -11, 119, 44, -52, 102, 8, -62, 126, -114, -69, -32, 90, -89, 72, 57, -17, 64, -55, -81, 111, -92, 4, 61, -53, 10, -35, -13, 29, -59, -78, 124, -51, -62, -120, -74, -27, 36, -78, 51, 3, -23, 1, 82, 46, -75};
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
    msg.setTimeStamp(0.778826012211);
    msg.setSource(59132U);
    msg.setSourceEntity(212U);
    msg.setDestination(60702U);
    msg.setDestinationEntity(241U);
    msg.base_lat = 0.0938566488406;
    msg.base_lon = 0.718470362986;
    msg.base_time = 0.441661929902;
    const char tmp_msg_0[] = {-37, -99, -54, -96, -25, 27, -3, -3, -7, 55, -127, -28, -18, 38, 90, 20, -52, -11, -49, 73, -24, -62, 74, 116, -8, 65, 121, -107, 16, 12, 54, -24, -102, 92, 107, 0, 99, -91, 51, -19, 28, 103, -94, 64, -87, 66, -119, 100, -119, 95, -7, -73, 125, -120, -80, 99, 36, -45, -106, -2, 4, -82, -46, -50, 124, 94, -126, 81, -59, -62, 6, 66, 1, -59, 85, -102, -9, 68, 20, -96, -125, -11, 2, -43, 21, 85, -80, -75, -118, 77, 74, -11, 32, -113, 18, -74, -109, 70, -29, -23, -41, 106, -111, -1, -28, 93, -6, 104, -45, 16, 81, 33, -114, -100, -95, -42, 109, 105, 73, 110, -125, -94, 119, -53, 37, 59, -6, 18, -8, -110, 45, 46, -67, 93, -100, 11, -38, -94, 76, 115, -93, -72, -55, -62, 74, 104, -96, 71, 91, 31, -48, 105, 115, -51, 58, 90, -68, 109, 112, -73, -112, 15, 78, 35, -17, 12, -65, 112, 46, 96, -4, -3, -3, 79, 33, -50, 29, 126, 90, 66};
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
    msg.setTimeStamp(0.123830018307);
    msg.setSource(189U);
    msg.setSourceEntity(20U);
    msg.setDestination(42819U);
    msg.setDestinationEntity(199U);
    msg.sys_id = 19406U;
    msg.priority = 88;
    msg.x = -15409;
    msg.y = -24923;
    msg.z = 2990;
    msg.t = -22333;
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 2U;
    tmp_msg_0.speed = 47013U;
    const char tmp_tmp_msg_0_0[] = {30, -103, 61, -8, -10, -79, 113, -126, -93, -59, -115, 3, -112, 71, 30, -124, -88, -5, 58, 29, -19, 35, 29, -89, 43, 45, -7, 74, -99, 20, -57, 58, -92, -63, -53, -100, 31, -66, 60, 62, 83, -51, -19, 70, 29, -44, -32, 58, -113, -77, -25, -76, 85, 87};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.105856629017);
    msg.setSource(59455U);
    msg.setSourceEntity(205U);
    msg.setDestination(6868U);
    msg.setDestinationEntity(37U);
    msg.sys_id = 55586U;
    msg.priority = -59;
    msg.x = -21261;
    msg.y = 1294;
    msg.z = -11139;
    msg.t = 28911;
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.0427729646661;
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
    msg.setTimeStamp(0.704913128843);
    msg.setSource(14077U);
    msg.setSourceEntity(50U);
    msg.setDestination(56727U);
    msg.setDestinationEntity(209U);
    msg.sys_id = 23809U;
    msg.priority = 115;
    msg.x = -14337;
    msg.y = 3994;
    msg.z = 14687;
    msg.t = 19133;
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("FJWANUPERABONDQUNMJPQLEOSNLZHNVEQKOWJSLIPVVZFVQYSFJGUGFYUAEBVOIPSPRGMRRIXYWTXYIFCSPTDEXZKKAXJITDPMFWSFOQKWHYJGBEYC");
    tmp_msg_0.action = 211U;
    tmp_msg_0.grouplist.assign("RHLRVYCLQWPIOFZEOSEFWJVGOZYOZJPCZFUSUUQAXHSOCTUNSKCUQZJQOHYGOPEFWSQFDJD");
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
    msg.setTimeStamp(0.705711074092);
    msg.setSource(20875U);
    msg.setSourceEntity(209U);
    msg.setDestination(54692U);
    msg.setDestinationEntity(42U);
    msg.req_id = 58539U;
    msg.type = 181U;
    msg.max_size = 24556U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.780210682861;
    tmp_msg_0.base_lon = 0.756479844803;
    tmp_msg_0.base_time = 0.535186869042;
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
    msg.setTimeStamp(0.85700878838);
    msg.setSource(7295U);
    msg.setSourceEntity(95U);
    msg.setDestination(37562U);
    msg.setDestinationEntity(53U);
    msg.req_id = 3707U;
    msg.type = 98U;
    msg.max_size = 24587U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.744260739741;
    tmp_msg_0.base_lon = 0.814230756654;
    tmp_msg_0.base_time = 0.549733099473;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 25365U;
    tmp_tmp_msg_0_0.destination = 16193U;
    tmp_tmp_msg_0_0.timeout = 0.399170364172;
    IMC::CompressedImage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.frameid = 191U;
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {31, -127, 115, 0, -70, 25, -28, -25, 35, 59, -3, -66, 55, 17, 2, 92, 80, 121, 54, -58, 11, 87, -14, -95, -107, 95, 102, -84, 108, -59, 30, -33, -11, -69, 120, 79, 56, 117, -70, 85, -114, 124, -32, 71, -34, -29, 46, 87, -82, -63, 88, -67, 58, 65, 63, 100, 66, 65, 41, -70, 94, 38, -54, 61, -28, -19, 52, -18, 46, 110, -22, 118, -24, 93, 74, 97, 34, -40, 24, -52, 66, -95, -86, 22, 120, -52, 26, -84, 113, -31, 70, -79, -39, -92, -13, -1, 63, 96, 36, 53, 93, -59, 23, 34, 66, -71, -69, -55, 43, 119, -37, 95, -114, 29, 82, 94, 95, 41, 89, 60, 26, 16, 111, -97, -70, -23, 110, 104, -66, 68, 38, -31, -41, -76, 55, -56, -5, 13, 58, 37, -37, -88, 69, 93, 90, 105, -44, -78, 106, -107, -57, 74, 105, 119, 113, 23, 25, -6, 56, -47, -111, 8, -17, 60, 53, -7, -77, -37, 43, 5, 30, 8, 124, 121, 62, -8, -63, -78, 12, -18, -71, 104, 94, 47, 40, -20, 30, -108, 35, 29, 17, -43, -108, -48, -64, -128, -107, -19, 1, -88, 31, -3, -40, -31, 93, -111, -87, -73, -26, -73, -3, -60, 95, 47, 101, -17, -10, 13, -114, 33, 58, 70, 30, 57, 27, 67, -32, -121, -109, -14, 89, 70, -65, -45, -116, 25, 117, 40, -123, -71, -9, -27, 24, -114, 30, 42, -66, -108};
    tmp_tmp_tmp_msg_0_0_0.data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
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
    msg.setTimeStamp(0.700478505608);
    msg.setSource(48900U);
    msg.setSourceEntity(205U);
    msg.setDestination(14809U);
    msg.setDestinationEntity(202U);
    msg.req_id = 36171U;
    msg.type = 138U;
    msg.max_size = 62173U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.267031006021;
    tmp_msg_0.base_lon = 0.454391960907;
    tmp_msg_0.base_time = 0.707522306913;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 46443U;
    tmp_tmp_msg_0_0.priority = 90;
    tmp_tmp_msg_0_0.x = -30588;
    tmp_tmp_msg_0_0.y = -268;
    tmp_tmp_msg_0_0.z = -7550;
    tmp_tmp_msg_0_0.t = 30920;
    IMC::ButtonEvent tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.button = 248U;
    tmp_tmp_tmp_msg_0_0_0.value = 109U;
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
    msg.setTimeStamp(0.6448608638);
    msg.setSource(21742U);
    msg.setSourceEntity(217U);
    msg.setDestination(58253U);
    msg.setDestinationEntity(70U);
    msg.original_source = 6077U;
    msg.destination = 1911U;
    msg.timeout = 0.121886208944;
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 109U;
    tmp_msg_0.system.assign("KLDIEGWPTASDBRUCUDOBHIZNPNXZPAYIECHGGGBBRVZNNJRYEQPZCFEMENQZXYKPIIAEFSVIUKHDWAFMXVMKCGTYWSVWCQIOJLUUVFLIRQMSYLEFMXCDTFXLAOZIDEEUARWKAXKJKBRVBYPQFSQJTUHPLNKBJVXXEALWNOPKZXLOQM");
    tmp_msg_0.range = 0.253862779891;
    IMC::PopEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZGOVWKQAZXHBQNQGUCAEWPGPPFDNPHYUJJIMSAGNEHHNZLFSAVEDVTITKVWKEOBSIMWRUJDADNOCPRJGJVSWIUXUK");
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.860073199463);
    msg.setSource(3158U);
    msg.setSourceEntity(129U);
    msg.setDestination(61613U);
    msg.setDestinationEntity(157U);
    msg.original_source = 10449U;
    msg.destination = 13712U;
    msg.timeout = 0.916089883826;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.145094757389;
    tmp_msg_0.base_lon = 0.122523585112;
    tmp_msg_0.base_time = 0.0967306675989;
    const char tmp_tmp_msg_0_0[] = {-120, 23, -97, 12, -68, -92, 14, 109, -115, 116, 10, -66, -47, -34, -67, -30, 92, -57, 1, 68, 7, 49, -90};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.586236832992);
    msg.setSource(13609U);
    msg.setSourceEntity(253U);
    msg.setDestination(17828U);
    msg.setDestinationEntity(203U);
    msg.original_source = 31308U;
    msg.destination = 15327U;
    msg.timeout = 0.631958854715;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 96U;
    tmp_msg_0.op = 2U;
    tmp_msg_0.plan_id.assign("MYLWJKKZVMATTOEFYMSZFLZDKZBVLVDILMGAQDXWQFPGGNNNRRWUECJEYIGSKLHCCZHZVCGZMKMMQTFXVOBFCPHQAYBVLVSUQCFIMAJWTSXCHRWDNZGIAPVSGTIWIYQJNPGOJQXAAHWYOSXJRXQAHFHEKEQRUEOXNDWRNHULERAVDIGQZOCBKBTDOPUBTNITXF");
    tmp_msg_0.params.assign("VTGQYNBWRZURJYTYQWDVPBWMIQLFNUZGPRRTPCXGGPZLIQRYZJERVVULFKEHMLULIZGFEYJDCLNHEICBIRHCKQXVUWUXDWUDMTRKBCJVBMHZMBXOZNACJZRLSFVPNOIEEAIOCWYWVLDGHGSXTWADWZCXBJUYHJAFFDPJRKQMTKLYWXQBDKTXGOSEOAFHAAPDKSSOIOAPJKTHEFGCKPITNNABSVVHMMOYTYOGSNCKHESFMDESMUQBUNXLQAS");
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
    msg.setTimeStamp(0.529822382672);
    msg.setSource(24552U);
    msg.setSourceEntity(8U);
    msg.setDestination(6830U);
    msg.setDestinationEntity(232U);
    msg.id = 78U;
    msg.range = 0.994185351278;

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
    msg.setTimeStamp(0.384306095409);
    msg.setSource(62052U);
    msg.setSourceEntity(92U);
    msg.setDestination(8381U);
    msg.setDestinationEntity(72U);
    msg.id = 224U;
    msg.range = 0.326607594153;

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
    msg.setTimeStamp(0.731325772788);
    msg.setSource(13384U);
    msg.setSourceEntity(122U);
    msg.setDestination(17721U);
    msg.setDestinationEntity(1U);
    msg.id = 238U;
    msg.range = 0.355337682946;

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
    msg.setTimeStamp(0.24385315123);
    msg.setSource(40813U);
    msg.setSourceEntity(101U);
    msg.setDestination(37568U);
    msg.setDestinationEntity(159U);
    msg.beacon.assign("ZKAAIMECENEWQFDMNFYEGEJMKKHXWBXAFPXUCHUOMYHELNFOUQLDSRARRBITTITJFSHZESVKAZBCHZMWGBALLXZWJFRVLKIPVFAYJSIVSICATLJUSBPQUYOUDOXJGTXXDCAKRUMEHOYPPLLBVRM");
    msg.lat = 0.41006556601;
    msg.lon = 0.308916069176;
    msg.depth = 0.746518986866;
    msg.query_channel = 129U;
    msg.reply_channel = 113U;
    msg.transponder_delay = 111U;

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
    msg.setTimeStamp(0.0387962960611);
    msg.setSource(57983U);
    msg.setSourceEntity(229U);
    msg.setDestination(28893U);
    msg.setDestinationEntity(102U);
    msg.beacon.assign("HCLVKTINAHEWODXQYDZBTBOQNNHLHBMMFOSCRTRVWRPIZZITGSMTEMOZFQNLNNWSFAWVXLYNBSMBELZPUCDPEJRTZDPMYZGJYVFFULTHKRUKLEUCPKGGAXBGCHJVGRLNIZMJSUGONSUTXOBYQSTXQCAEVDUFHCOBMFCVTEQPFPIYDQAJSORHCJSWDYWIRKNIWLELEIYJWQGBAXQJMIQU");
    msg.lat = 0.338249322219;
    msg.lon = 0.794969531345;
    msg.depth = 0.831575913988;
    msg.query_channel = 19U;
    msg.reply_channel = 215U;
    msg.transponder_delay = 123U;

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
    msg.setTimeStamp(0.0111396928108);
    msg.setSource(16690U);
    msg.setSourceEntity(5U);
    msg.setDestination(51009U);
    msg.setDestinationEntity(76U);
    msg.beacon.assign("LJPQRGGKBONNWORGZUSKRYXEDHFTKPMCSVOCS");
    msg.lat = 0.540849880421;
    msg.lon = 0.104680869771;
    msg.depth = 0.552146451396;
    msg.query_channel = 188U;
    msg.reply_channel = 71U;
    msg.transponder_delay = 17U;

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
    msg.setTimeStamp(0.744000988323);
    msg.setSource(31732U);
    msg.setSourceEntity(202U);
    msg.setDestination(54581U);
    msg.setDestinationEntity(151U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.80705692441);
    msg.setSource(23767U);
    msg.setSourceEntity(62U);
    msg.setDestination(7094U);
    msg.setDestinationEntity(37U);
    msg.op = 97U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JQUCACXUNQITAQIGUHKEJZOVOJWGOUABMJOIPCQGAVNUTYSYNVJATYLRJZXNULGDLKHCUNVXXUZWPLTTGWGVLFHFEORYBLRHLDPRGPEWQWJESSLENDZYDRWFVGQREIBWCYCZKIMAFYKPCTTSMXRNFEKIUORDETNYWLZITKIMBKODTBBMHSSAHZDLCHSNA");
    tmp_msg_0.lat = 0.303496379148;
    tmp_msg_0.lon = 0.736685977318;
    tmp_msg_0.depth = 0.630882018721;
    tmp_msg_0.query_channel = 74U;
    tmp_msg_0.reply_channel = 161U;
    tmp_msg_0.transponder_delay = 194U;
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
    msg.setTimeStamp(0.695997539558);
    msg.setSource(6406U);
    msg.setSourceEntity(70U);
    msg.setDestination(61284U);
    msg.setDestinationEntity(214U);
    msg.op = 222U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LZCERKOPORTRNNONTOMYLUVUCOQZJCAGGWSEBKWEQGSBVXQAAPYFPRKXEYZSRMQWXPUWJSAOZKVYEPZCFLCMFRQLHZPILIVNCYJUJXNCHHHNSWAVOVFNGUVNYDKDUWBLRIBDVQZMORFJXBQEYGTHODGCCTJDKZHEXXTGXIBKPBUYAFZHZWWB");
    tmp_msg_0.lat = 0.383878503151;
    tmp_msg_0.lon = 0.974761391532;
    tmp_msg_0.depth = 0.860975697726;
    tmp_msg_0.query_channel = 17U;
    tmp_msg_0.reply_channel = 37U;
    tmp_msg_0.transponder_delay = 239U;
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
    msg.setTimeStamp(0.612736284481);
    msg.setSource(56708U);
    msg.setSourceEntity(247U);
    msg.setDestination(25117U);
    msg.setDestinationEntity(254U);
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.996289817626;
    tmp_msg_0.width = 0.481595327212;
    tmp_msg_0.length = 0.557859969322;
    tmp_msg_0.bearing = 0.308314517568;
    tmp_msg_0.pxl = -17000;
    tmp_msg_0.encoding = 65U;
    const char tmp_tmp_msg_0_0[] = {-32, -118, -114, -76, -21, 74, -100, 53, -72, 73};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.635875622119);
    msg.setSource(10230U);
    msg.setSourceEntity(173U);
    msg.setDestination(20082U);
    msg.setDestinationEntity(95U);
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("TISDOVLQIAGPRMIEDRFBVXHAKPDKPQATZGILLCPCBOEFSKHBOBBDNLGSLPFSPXMYFJFIUOIUKFZNHVMROUURVOFZTKGKQLQMWQVXYQSERUHVUOCXNLGYGJDNGPAANAZTYKLDJDMVCPLSAVPMEYWOLAANXGRUGXXMI");
    tmp_msg_0.formation_name.assign("TWLUFROJBFYTALEEYZLAGSPCI");
    tmp_msg_0.plan_id.assign("YBPQZEJAGEWVXSWFNEHGSZXSTFIRKDJCFSVDBRIXBTMILDOBKNADWFXSUCCCZVBXIPZDRHOSDVYMLIMTZTLEWEMNHCGCRKKXBWQUKLTXAFRBCJWJBGHVSAJOPHFL");
    tmp_msg_0.description.assign("RBNEFDPHMQWTHPYBZKUXXLIRQFDAXJVQJECHLFGDPQGPHLZYGYGGBGZRDTMDLWHVREZOOMTDQCAFSCVGESEMFXIQKXLDV");
    tmp_msg_0.leader_speed = 0.0793717674403;
    tmp_msg_0.leader_bank_lim = 0.163097145777;
    tmp_msg_0.pos_sim_err_lim = 0.99558022177;
    tmp_msg_0.pos_sim_err_wrn = 0.997946641928;
    tmp_msg_0.pos_sim_err_timeout = 50509U;
    tmp_msg_0.converg_max = 0.331607368568;
    tmp_msg_0.converg_timeout = 57791U;
    tmp_msg_0.comms_timeout = 31735U;
    tmp_msg_0.turb_lim = 0.399775623443;
    tmp_msg_0.custom.assign("KJVYONQTQBSZIWDVNFPWTQUEKUBVYAIJHKJPTUNMHVWWQEBERGAXNCRTXPRGLBZUEFGJNRSUVSFLQMMFDUMZQPVKGKYZUNPXOLCIUNAKWXTCMHOWZEONQHRTGVSATHLZKDWFCEYOIZZKOLWBKXLGMGCCRJYYVIRHNMIDZOAUVIXJ");
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
    msg.setTimeStamp(0.988308709281);
    msg.setSource(18956U);
    msg.setSourceEntity(38U);
    msg.setDestination(31135U);
    msg.setDestinationEntity(25U);
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 149U;
    tmp_msg_0.goal_id.assign("CMHYYUHUKVVHWJLCVZTMXFDRXKBMOOPCTZCAKRDCPFQBWJOQPLLRZSUZONAEMJWMJTQBIQBPBZJEXIGHTYDXJGHRMUDWILIEJHKY");
    tmp_msg_0.goal_xml.assign("PGYNYKOBSFLUBWMPU");
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
    msg.setTimeStamp(0.446649727576);
    msg.setSource(58717U);
    msg.setSourceEntity(171U);
    msg.setDestination(6966U);
    msg.setDestinationEntity(151U);
    msg.op = 222U;
    msg.system.assign("VYSUYATMXYTGONEQCJXHLWWFCXIHAFPWKSDMQNUYKGRTETQKREMFUIDAEGVRJCFGOHSWWRICXPGJQOQLSTJUHKMDPUPRVUOBILFEMUQKBFLXCXGZEYSOIDYZEAKSWXBKHDQELXKDRULDMWVZXEBRLPIVEYCBZZWVNCVHPQYKNFDNYSNGNAMOMARLTDJNAKFZCSILNPVQWAZJZGSRJIDOPYBCBHTRVQNHABXPZAIJ");
    msg.range = 0.834632106176;
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 158U;
    tmp_msg_0.angle = 0.192697187488;
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
    msg.setTimeStamp(0.961611549739);
    msg.setSource(47050U);
    msg.setSourceEntity(68U);
    msg.setDestination(11943U);
    msg.setDestinationEntity(201U);
    msg.op = 203U;
    msg.system.assign("RILFPXUUEFUSYIIGGYQOKHLGFUTSCIHTBXMDTRAVXNRLCJGTCTHESTCVRIPDFNZNYKQYGDMENSAQOKAICKIJRBRMYDKGDHVBCIQFRYPPZWEKGHTBSANLZSVV");
    msg.range = 0.948256721184;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.177474607361;
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
    msg.setTimeStamp(0.721649833942);
    msg.setSource(38047U);
    msg.setSourceEntity(63U);
    msg.setDestination(13081U);
    msg.setDestinationEntity(147U);
    msg.op = 89U;
    msg.system.assign("JVZTFWNAFOHVPAJOEEAHWYQUMTSINJSCBBIWIEIQOBTAUMEFYSDQQDRFLTMDLONCWDLEQKTTKXJSDJUJAFYFCGLKGZJKODNFIUYXKYAQPREHXMHDBBEDACZWLPTQIVVUNCLXRHZXJBRIQFNVXXUKOMOEVRXDCHAKGGOLVPCMWIUDHTIKJSETXUSUZZPBMZRKPRQAPUAMZNRJLFBYCWKSGHMSHYCFPNZVIYBNWLOWEGVSGLC");
    msg.range = 0.75434956101;
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.939840957335);
    msg.setSource(29467U);
    msg.setSourceEntity(230U);
    msg.setDestination(41331U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.0180630051075);
    msg.setSource(6531U);
    msg.setSourceEntity(3U);
    msg.setDestination(4156U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.173214972013);
    msg.setSource(36387U);
    msg.setSourceEntity(59U);
    msg.setDestination(41760U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.373474432949);
    msg.setSource(57356U);
    msg.setSourceEntity(145U);
    msg.setDestination(1531U);
    msg.setDestinationEntity(48U);
    msg.list.assign("TFUUFRINDPSYJBPERXUZHWNYMIUTWMDDSPJGGJSRNRILIHGJMVBQNOJAPZTGAXEANUFTZDZTTVXGQLWCQGBVGEHCBGEOSQNQCKVXPHLKOCRUSWSQNMSXFHMTEKKCKBVYUVOOKPFHNJLYEEVZNQTRIQKXLOFMJYERQYNHCBPEXFG");

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
    msg.setTimeStamp(0.762100743619);
    msg.setSource(36973U);
    msg.setSourceEntity(158U);
    msg.setDestination(40760U);
    msg.setDestinationEntity(112U);
    msg.list.assign("XXNDMWTUAZZELBAOPVUTENVTQAQZKMBCKPSOUKXJODZNSFYMADDRTMXQGHUNOQEKNHHFUSSBJLBVAGPFWWKJSYXIDHRUBPTHQIKIQPDAFFCKFZHLZVDFIGXMLAEDCZXLPXLBYHPIRTFWQFGNMYFWYVCBICCGZRIGHZEVCGECUVCBQ");

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
    msg.setTimeStamp(0.326745376305);
    msg.setSource(24596U);
    msg.setSourceEntity(204U);
    msg.setDestination(43117U);
    msg.setDestinationEntity(178U);
    msg.list.assign("GKICBXDEGBZPZCPWDVYHLDIEKKGRSJSAVMSLRMAUAZDJDHCOWUGQQVGOGCKAVBLVLGQNFKCWNZZXSFTUSFDXEWVJBJ");

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
    msg.setTimeStamp(0.69580911738);
    msg.setSource(39130U);
    msg.setSourceEntity(62U);
    msg.setDestination(43386U);
    msg.setDestinationEntity(65U);
    msg.peer.assign("QAZOFNQFBMYQGESWVDIFVCBMZRJDJEPXRAVRKASTWRGGEUVYKYIOSLQRMASYHUISKSGHVYPUMXQIXQJMPJYLHQIOZWHNXTZLCGSJZUMXZZDXYINAKWLLRFACNIOUDFUSYHIVUIEHTEOUN");
    msg.rssi = 0.349204600934;
    msg.integrity = 824U;

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
    msg.setTimeStamp(0.959113098873);
    msg.setSource(7092U);
    msg.setSourceEntity(57U);
    msg.setDestination(2965U);
    msg.setDestinationEntity(201U);
    msg.peer.assign("OXUDFTSAPMZCKHQMXHQYYIZCQLQJLFEYUGYJPNSNOJVMQUAJZHWMCBYEXOMGHSTDHZWKNQXWXPDJXAQQQJGGXLTZFEMCPJGDTVWSMTZRVPWMCRTLDLASPNUIDNFIAYWCECDBTVFPKAGJUELVQDYRAOKNLEHLGRELZIUTIVRIRBHBICBRYKUVOFJOERFKZSF");
    msg.rssi = 0.150357411053;
    msg.integrity = 54968U;

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
    msg.setTimeStamp(0.989325825221);
    msg.setSource(27849U);
    msg.setSourceEntity(105U);
    msg.setDestination(11419U);
    msg.setDestinationEntity(101U);
    msg.peer.assign("FXCRBEVNOCAQYWDUPSPNOHJVEODBTABCKGDWVSIWLJPEYFGAQWOIXJGRTTHTSUQSGHXOMPRI");
    msg.rssi = 0.330652177563;
    msg.integrity = 46006U;

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
    msg.setTimeStamp(0.223428534596);
    msg.setSource(29894U);
    msg.setSourceEntity(249U);
    msg.setDestination(21887U);
    msg.setDestinationEntity(62U);
    msg.value = 14523;

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
    msg.setTimeStamp(0.933068958932);
    msg.setSource(27472U);
    msg.setSourceEntity(187U);
    msg.setDestination(51025U);
    msg.setDestinationEntity(86U);
    msg.value = 19482;

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
    msg.setTimeStamp(0.917273282592);
    msg.setSource(22755U);
    msg.setSourceEntity(64U);
    msg.setDestination(1386U);
    msg.setDestinationEntity(89U);
    msg.value = 32604;

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
    msg.setTimeStamp(0.191964568877);
    msg.setSource(6230U);
    msg.setSourceEntity(13U);
    msg.setDestination(33582U);
    msg.setDestinationEntity(159U);
    msg.value = 0.408632702115;

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
    msg.setTimeStamp(0.633800455857);
    msg.setSource(887U);
    msg.setSourceEntity(207U);
    msg.setDestination(60338U);
    msg.setDestinationEntity(177U);
    msg.value = 0.133942297524;

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
    msg.setTimeStamp(0.836265670844);
    msg.setSource(60265U);
    msg.setSourceEntity(145U);
    msg.setDestination(31753U);
    msg.setDestinationEntity(110U);
    msg.value = 0.793097957613;

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
    msg.setTimeStamp(0.856134838781);
    msg.setSource(17826U);
    msg.setSourceEntity(38U);
    msg.setDestination(42366U);
    msg.setDestinationEntity(3U);
    msg.value = 0.784686309719;

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
    msg.setTimeStamp(0.471844088876);
    msg.setSource(47377U);
    msg.setSourceEntity(16U);
    msg.setDestination(12664U);
    msg.setDestinationEntity(251U);
    msg.value = 0.456275210184;

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
    msg.setTimeStamp(0.266509362186);
    msg.setSource(19908U);
    msg.setSourceEntity(226U);
    msg.setDestination(34431U);
    msg.setDestinationEntity(215U);
    msg.value = 0.16385290503;

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
    msg.setTimeStamp(0.960774435757);
    msg.setSource(32115U);
    msg.setSourceEntity(168U);
    msg.setDestination(45058U);
    msg.setDestinationEntity(25U);
    msg.validity = 18877U;
    msg.type = 169U;
    msg.utc_year = 45353U;
    msg.utc_month = 169U;
    msg.utc_day = 220U;
    msg.utc_time = 0.442671554297;
    msg.lat = 0.770611017475;
    msg.lon = 0.335491834456;
    msg.height = 0.536978175236;
    msg.satellites = 28U;
    msg.cog = 0.0950203105618;
    msg.sog = 0.098392178641;
    msg.hdop = 0.174342926994;
    msg.vdop = 0.501700964395;
    msg.hacc = 0.326656511704;
    msg.vacc = 0.315446343113;

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
    msg.setTimeStamp(0.0888669986923);
    msg.setSource(25616U);
    msg.setSourceEntity(93U);
    msg.setDestination(53176U);
    msg.setDestinationEntity(232U);
    msg.validity = 48191U;
    msg.type = 170U;
    msg.utc_year = 56051U;
    msg.utc_month = 144U;
    msg.utc_day = 230U;
    msg.utc_time = 0.793719323406;
    msg.lat = 0.645813679736;
    msg.lon = 0.766356252206;
    msg.height = 0.485772161784;
    msg.satellites = 212U;
    msg.cog = 0.520090185125;
    msg.sog = 0.210059702438;
    msg.hdop = 0.370169233158;
    msg.vdop = 0.800843672462;
    msg.hacc = 0.0223237010067;
    msg.vacc = 0.786843985627;

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
    msg.setTimeStamp(0.223508778139);
    msg.setSource(46534U);
    msg.setSourceEntity(93U);
    msg.setDestination(1155U);
    msg.setDestinationEntity(28U);
    msg.validity = 26643U;
    msg.type = 107U;
    msg.utc_year = 64027U;
    msg.utc_month = 4U;
    msg.utc_day = 83U;
    msg.utc_time = 0.449432236421;
    msg.lat = 0.766647157424;
    msg.lon = 0.395748349695;
    msg.height = 0.865092298681;
    msg.satellites = 212U;
    msg.cog = 0.520225043501;
    msg.sog = 0.0650950261996;
    msg.hdop = 0.585157566145;
    msg.vdop = 0.571200918257;
    msg.hacc = 0.644639855943;
    msg.vacc = 0.591872295475;

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
    msg.setTimeStamp(0.445175095692);
    msg.setSource(54753U);
    msg.setSourceEntity(213U);
    msg.setDestination(29697U);
    msg.setDestinationEntity(96U);
    msg.time = 0.493073604286;
    msg.phi = 0.213778595416;
    msg.theta = 0.197244963754;
    msg.psi = 0.726418606597;
    msg.psi_magnetic = 0.216141148255;

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
    msg.setTimeStamp(0.534937936178);
    msg.setSource(38708U);
    msg.setSourceEntity(214U);
    msg.setDestination(29206U);
    msg.setDestinationEntity(21U);
    msg.time = 0.305392262703;
    msg.phi = 0.423758550824;
    msg.theta = 0.255236620566;
    msg.psi = 0.772844707692;
    msg.psi_magnetic = 0.298135412768;

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
    msg.setTimeStamp(0.663510191114);
    msg.setSource(44507U);
    msg.setSourceEntity(224U);
    msg.setDestination(11926U);
    msg.setDestinationEntity(244U);
    msg.time = 0.27296462189;
    msg.phi = 0.818837707701;
    msg.theta = 0.484085210252;
    msg.psi = 0.420296979672;
    msg.psi_magnetic = 0.0885293546783;

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
    msg.setTimeStamp(0.318912925421);
    msg.setSource(1292U);
    msg.setSourceEntity(38U);
    msg.setDestination(19305U);
    msg.setDestinationEntity(12U);
    msg.time = 0.148964519763;
    msg.x = 0.344256935628;
    msg.y = 0.618212498876;
    msg.z = 0.122945965219;
    msg.timestep = 0.256670111374;

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
    msg.setTimeStamp(0.431628757358);
    msg.setSource(44868U);
    msg.setSourceEntity(80U);
    msg.setDestination(16968U);
    msg.setDestinationEntity(39U);
    msg.time = 0.4808515084;
    msg.x = 0.979458771258;
    msg.y = 0.459528607887;
    msg.z = 0.648719840342;
    msg.timestep = 0.969162759806;

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
    msg.setTimeStamp(0.735344588363);
    msg.setSource(31983U);
    msg.setSourceEntity(121U);
    msg.setDestination(18421U);
    msg.setDestinationEntity(220U);
    msg.time = 0.665843702394;
    msg.x = 0.757974058;
    msg.y = 0.601169396034;
    msg.z = 0.449163467297;
    msg.timestep = 0.977986601047;

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
    msg.setTimeStamp(0.819256923329);
    msg.setSource(12758U);
    msg.setSourceEntity(157U);
    msg.setDestination(29890U);
    msg.setDestinationEntity(94U);
    msg.time = 0.836809076344;
    msg.x = 0.486890817491;
    msg.y = 0.985207212186;
    msg.z = 0.207299767202;

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
    msg.setTimeStamp(0.374864163287);
    msg.setSource(59603U);
    msg.setSourceEntity(73U);
    msg.setDestination(10306U);
    msg.setDestinationEntity(195U);
    msg.time = 0.0346015217562;
    msg.x = 0.0770805139343;
    msg.y = 0.729316985454;
    msg.z = 0.347729074522;

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
    msg.setTimeStamp(0.524330899608);
    msg.setSource(14624U);
    msg.setSourceEntity(72U);
    msg.setDestination(55962U);
    msg.setDestinationEntity(109U);
    msg.time = 0.699039355394;
    msg.x = 0.799873420058;
    msg.y = 0.0983028864623;
    msg.z = 0.870762903881;

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
    msg.setTimeStamp(0.44550350907);
    msg.setSource(42993U);
    msg.setSourceEntity(193U);
    msg.setDestination(58108U);
    msg.setDestinationEntity(188U);
    msg.time = 0.0331503040144;
    msg.x = 0.811704635301;
    msg.y = 0.430477690182;
    msg.z = 0.417412957226;

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
    msg.setTimeStamp(0.70878956662);
    msg.setSource(57318U);
    msg.setSourceEntity(70U);
    msg.setDestination(20113U);
    msg.setDestinationEntity(83U);
    msg.time = 0.920541173198;
    msg.x = 0.391430370191;
    msg.y = 0.992689193705;
    msg.z = 0.702274089405;

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
    msg.setTimeStamp(0.383354766885);
    msg.setSource(43087U);
    msg.setSourceEntity(188U);
    msg.setDestination(46872U);
    msg.setDestinationEntity(253U);
    msg.time = 0.863249099372;
    msg.x = 0.0429424438686;
    msg.y = 0.821206697009;
    msg.z = 0.825070831953;

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
    msg.setTimeStamp(0.991856276264);
    msg.setSource(23935U);
    msg.setSourceEntity(240U);
    msg.setDestination(11321U);
    msg.setDestinationEntity(18U);
    msg.time = 0.496462930107;
    msg.x = 0.513114325733;
    msg.y = 0.272101094043;
    msg.z = 0.882140854881;

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
    msg.setTimeStamp(0.278719213924);
    msg.setSource(61523U);
    msg.setSourceEntity(100U);
    msg.setDestination(53076U);
    msg.setDestinationEntity(82U);
    msg.time = 0.742753765771;
    msg.x = 0.569037229268;
    msg.y = 0.321416992332;
    msg.z = 0.803502278223;

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
    msg.setTimeStamp(0.519209001446);
    msg.setSource(50993U);
    msg.setSourceEntity(134U);
    msg.setDestination(42519U);
    msg.setDestinationEntity(199U);
    msg.time = 0.334904889294;
    msg.x = 0.871049201765;
    msg.y = 0.460721733857;
    msg.z = 0.770698946606;

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
    msg.setTimeStamp(0.377663013624);
    msg.setSource(30639U);
    msg.setSourceEntity(99U);
    msg.setDestination(32001U);
    msg.setDestinationEntity(229U);
    msg.validity = 128U;
    msg.x = 0.747130428768;
    msg.y = 0.510072097048;
    msg.z = 0.194868094979;

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
    msg.setTimeStamp(0.623956269765);
    msg.setSource(53140U);
    msg.setSourceEntity(231U);
    msg.setDestination(58695U);
    msg.setDestinationEntity(36U);
    msg.validity = 139U;
    msg.x = 0.621170551496;
    msg.y = 0.534950419594;
    msg.z = 0.323381059445;

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
    msg.setTimeStamp(0.112361228365);
    msg.setSource(34569U);
    msg.setSourceEntity(179U);
    msg.setDestination(42539U);
    msg.setDestinationEntity(84U);
    msg.validity = 231U;
    msg.x = 0.10102454066;
    msg.y = 0.410638294884;
    msg.z = 0.25152474021;

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
    msg.setTimeStamp(0.856705782535);
    msg.setSource(49752U);
    msg.setSourceEntity(183U);
    msg.setDestination(53801U);
    msg.setDestinationEntity(58U);
    msg.validity = 4U;
    msg.x = 0.367159445046;
    msg.y = 0.639288345651;
    msg.z = 0.0343286246786;

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
    msg.setTimeStamp(0.150835394047);
    msg.setSource(63851U);
    msg.setSourceEntity(79U);
    msg.setDestination(6783U);
    msg.setDestinationEntity(146U);
    msg.validity = 244U;
    msg.x = 0.10771185848;
    msg.y = 0.190744814567;
    msg.z = 0.955157946669;

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
    msg.setTimeStamp(0.0284820672485);
    msg.setSource(28649U);
    msg.setSourceEntity(178U);
    msg.setDestination(14163U);
    msg.setDestinationEntity(59U);
    msg.validity = 93U;
    msg.x = 0.717185801369;
    msg.y = 0.912669899741;
    msg.z = 0.566502383605;

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
    msg.setTimeStamp(0.423118354587);
    msg.setSource(23365U);
    msg.setSourceEntity(159U);
    msg.setDestination(59149U);
    msg.setDestinationEntity(158U);
    msg.time = 0.0591407383174;
    msg.x = 0.132649740806;
    msg.y = 0.524304228917;
    msg.z = 0.160698377642;

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
    msg.setTimeStamp(0.496034864129);
    msg.setSource(23522U);
    msg.setSourceEntity(191U);
    msg.setDestination(42263U);
    msg.setDestinationEntity(244U);
    msg.time = 0.553677020444;
    msg.x = 0.956701521102;
    msg.y = 0.137927863684;
    msg.z = 0.531459593919;

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
    msg.setTimeStamp(0.490155292531);
    msg.setSource(17567U);
    msg.setSourceEntity(133U);
    msg.setDestination(40046U);
    msg.setDestinationEntity(136U);
    msg.time = 0.766853464143;
    msg.x = 0.340105358304;
    msg.y = 0.21285140104;
    msg.z = 0.233464975851;

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
    msg.setTimeStamp(0.591768408094);
    msg.setSource(46714U);
    msg.setSourceEntity(12U);
    msg.setDestination(20251U);
    msg.setDestinationEntity(147U);
    msg.validity = 84U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.915524335801;
    tmp_msg_0.y = 0.773656647494;
    tmp_msg_0.z = 0.519807277815;
    tmp_msg_0.phi = 0.470849494799;
    tmp_msg_0.theta = 0.784149285362;
    tmp_msg_0.psi = 0.863476407578;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.451185450616;
    tmp_msg_1.beam_height = 0.946028146738;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.230685763199;

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
    msg.setTimeStamp(0.771208225515);
    msg.setSource(43522U);
    msg.setSourceEntity(23U);
    msg.setDestination(60516U);
    msg.setDestinationEntity(179U);
    msg.validity = 237U;
    msg.value = 0.0648511096656;

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
    msg.setTimeStamp(0.763721550996);
    msg.setSource(30238U);
    msg.setSourceEntity(204U);
    msg.setDestination(15295U);
    msg.setDestinationEntity(66U);
    msg.validity = 226U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0653251396343;
    tmp_msg_0.y = 0.422403339976;
    tmp_msg_0.z = 0.904350369023;
    tmp_msg_0.phi = 0.495731349547;
    tmp_msg_0.theta = 0.439726694304;
    tmp_msg_0.psi = 0.0679381165993;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.226184059192;

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
    msg.setTimeStamp(0.941305184996);
    msg.setSource(20635U);
    msg.setSourceEntity(143U);
    msg.setDestination(31114U);
    msg.setDestinationEntity(136U);
    msg.value = 0.651767666485;

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
    msg.setTimeStamp(0.958202135905);
    msg.setSource(3918U);
    msg.setSourceEntity(215U);
    msg.setDestination(11257U);
    msg.setDestinationEntity(26U);
    msg.value = 0.414050012096;

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
    msg.setTimeStamp(0.62403011729);
    msg.setSource(46060U);
    msg.setSourceEntity(225U);
    msg.setDestination(50007U);
    msg.setDestinationEntity(35U);
    msg.value = 0.261469414442;

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
    msg.setTimeStamp(0.949496119614);
    msg.setSource(47944U);
    msg.setSourceEntity(129U);
    msg.setDestination(36597U);
    msg.setDestinationEntity(28U);
    msg.value = 0.141032485007;

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
    msg.setTimeStamp(0.99435848579);
    msg.setSource(13738U);
    msg.setSourceEntity(205U);
    msg.setDestination(22649U);
    msg.setDestinationEntity(143U);
    msg.value = 0.946639132938;

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
    msg.setTimeStamp(0.544907662689);
    msg.setSource(63204U);
    msg.setSourceEntity(16U);
    msg.setDestination(63963U);
    msg.setDestinationEntity(131U);
    msg.value = 0.817401223497;

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
    msg.setTimeStamp(0.375478287007);
    msg.setSource(58988U);
    msg.setSourceEntity(14U);
    msg.setDestination(56302U);
    msg.setDestinationEntity(188U);
    msg.value = 0.830628853936;

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
    msg.setTimeStamp(0.0592048497408);
    msg.setSource(31895U);
    msg.setSourceEntity(177U);
    msg.setDestination(10996U);
    msg.setDestinationEntity(26U);
    msg.value = 0.717897891711;

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
    msg.setTimeStamp(0.952552921412);
    msg.setSource(28143U);
    msg.setSourceEntity(254U);
    msg.setDestination(27685U);
    msg.setDestinationEntity(192U);
    msg.value = 0.615131687659;

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
    msg.setTimeStamp(0.740262385261);
    msg.setSource(50900U);
    msg.setSourceEntity(103U);
    msg.setDestination(63364U);
    msg.setDestinationEntity(214U);
    msg.value = 0.90473026305;

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
    msg.setTimeStamp(0.0419467733868);
    msg.setSource(22553U);
    msg.setSourceEntity(59U);
    msg.setDestination(50802U);
    msg.setDestinationEntity(183U);
    msg.value = 0.787737221041;

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
    msg.setTimeStamp(0.956762095039);
    msg.setSource(6902U);
    msg.setSourceEntity(31U);
    msg.setDestination(44672U);
    msg.setDestinationEntity(218U);
    msg.value = 0.277474058262;

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
    msg.setTimeStamp(0.88418671675);
    msg.setSource(17661U);
    msg.setSourceEntity(167U);
    msg.setDestination(2668U);
    msg.setDestinationEntity(234U);
    msg.value = 0.504178375082;

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
    msg.setTimeStamp(0.499910382875);
    msg.setSource(56346U);
    msg.setSourceEntity(49U);
    msg.setDestination(40525U);
    msg.setDestinationEntity(185U);
    msg.value = 0.669039876459;

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
    msg.setTimeStamp(0.432371034272);
    msg.setSource(43410U);
    msg.setSourceEntity(47U);
    msg.setDestination(47194U);
    msg.setDestinationEntity(168U);
    msg.value = 0.377119442235;

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
    msg.setTimeStamp(0.100474299732);
    msg.setSource(49804U);
    msg.setSourceEntity(43U);
    msg.setDestination(42802U);
    msg.setDestinationEntity(218U);
    msg.value = 0.318878429204;

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
    msg.setTimeStamp(0.981033412636);
    msg.setSource(47095U);
    msg.setSourceEntity(235U);
    msg.setDestination(8969U);
    msg.setDestinationEntity(103U);
    msg.value = 0.098634416492;

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
    msg.setTimeStamp(0.458627593416);
    msg.setSource(51185U);
    msg.setSourceEntity(242U);
    msg.setDestination(37973U);
    msg.setDestinationEntity(148U);
    msg.value = 0.818103417599;

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
    msg.setTimeStamp(0.445343305936);
    msg.setSource(1168U);
    msg.setSourceEntity(162U);
    msg.setDestination(1896U);
    msg.setDestinationEntity(43U);
    msg.value = 0.735252433383;

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
    msg.setTimeStamp(0.211590001085);
    msg.setSource(56380U);
    msg.setSourceEntity(202U);
    msg.setDestination(55846U);
    msg.setDestinationEntity(201U);
    msg.value = 0.848082015032;

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
    msg.setTimeStamp(0.50467960474);
    msg.setSource(18569U);
    msg.setSourceEntity(181U);
    msg.setDestination(13130U);
    msg.setDestinationEntity(245U);
    msg.value = 0.750358693175;

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
    msg.setTimeStamp(0.38538898326);
    msg.setSource(30692U);
    msg.setSourceEntity(194U);
    msg.setDestination(62500U);
    msg.setDestinationEntity(98U);
    msg.value = 0.788652150217;

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
    msg.setTimeStamp(0.829106532001);
    msg.setSource(27354U);
    msg.setSourceEntity(212U);
    msg.setDestination(57569U);
    msg.setDestinationEntity(121U);
    msg.value = 0.921508391743;

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
    msg.setTimeStamp(0.527178044438);
    msg.setSource(22208U);
    msg.setSourceEntity(95U);
    msg.setDestination(5302U);
    msg.setDestinationEntity(12U);
    msg.value = 0.550777902411;

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
    msg.setTimeStamp(0.433232078546);
    msg.setSource(43591U);
    msg.setSourceEntity(205U);
    msg.setDestination(19365U);
    msg.setDestinationEntity(24U);
    msg.direction = 0.908196606013;
    msg.speed = 0.516543592839;
    msg.turbulence = 0.640357108315;

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
    msg.setTimeStamp(0.863379939733);
    msg.setSource(9768U);
    msg.setSourceEntity(226U);
    msg.setDestination(15054U);
    msg.setDestinationEntity(25U);
    msg.direction = 0.410739594963;
    msg.speed = 0.510630680011;
    msg.turbulence = 0.751961060607;

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
    msg.setTimeStamp(0.0735897467167);
    msg.setSource(34474U);
    msg.setSourceEntity(171U);
    msg.setDestination(32375U);
    msg.setDestinationEntity(194U);
    msg.direction = 0.293900923045;
    msg.speed = 0.817676684493;
    msg.turbulence = 0.354078492453;

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
    msg.setTimeStamp(0.794567389837);
    msg.setSource(49947U);
    msg.setSourceEntity(18U);
    msg.setDestination(10761U);
    msg.setDestinationEntity(99U);
    msg.value = 0.376518356388;

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
    msg.setTimeStamp(0.37177431119);
    msg.setSource(3240U);
    msg.setSourceEntity(244U);
    msg.setDestination(63490U);
    msg.setDestinationEntity(215U);
    msg.value = 0.191710947243;

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
    msg.setTimeStamp(0.874958322901);
    msg.setSource(22287U);
    msg.setSourceEntity(207U);
    msg.setDestination(21454U);
    msg.setDestinationEntity(111U);
    msg.value = 0.329319060559;

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
    msg.setTimeStamp(0.996276829659);
    msg.setSource(31781U);
    msg.setSourceEntity(248U);
    msg.setDestination(58473U);
    msg.setDestinationEntity(219U);
    msg.value.assign("MVQQUEEWRCETLBYMGALSPTNGWAIVHRWISBDSPOMVLCYUQHXVWYVUWWBOLUWNUHNKXKOOILXOSLERJJSOIGQDD");

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
    msg.setTimeStamp(0.635757019599);
    msg.setSource(4334U);
    msg.setSourceEntity(30U);
    msg.setDestination(61633U);
    msg.setDestinationEntity(13U);
    msg.value.assign("KLQJMCXPXUCSQAGDJHUZJYNHTIHGRYAPGNTSUINZCBZUYVPHJEZMGCDQTMSYUVXZIVBRWTGEJTRNJLYFRHPGLNTXEWACZKIWYFMYRARSZSBFCQBDPEAAUKYIWCLIMSFLKEGDDIHNNERDTT");

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
    msg.setTimeStamp(0.240609192662);
    msg.setSource(7901U);
    msg.setSourceEntity(161U);
    msg.setDestination(36940U);
    msg.setDestinationEntity(32U);
    msg.value.assign("DWMUGZBQPEKUNQ");

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
    msg.setTimeStamp(0.471280882419);
    msg.setSource(20418U);
    msg.setSourceEntity(110U);
    msg.setDestination(41608U);
    msg.setDestinationEntity(41U);
    const char tmp_msg_0[] = {-22, -100, -73, 85, 123, 63, 38, -101, -97, 19, -124, -27, 36, -44, 11, 62, 55, -103, 18, -12, 98, -82, 2, 19, 112, -97, -66, 82, 110, -106, -56, -20, 123, 71, 8, -70, -41, 92, -12, 20, 24, -5, 35, 85, -81, 76, -48, 106, 53, -1, -125, 46, 106, -64, 73, -101, 92, -97, 95, 110, 96, -15, 19, 56, 56, 31, -4, 9, 22, -87, 117, -73, -21, -100, 13, 117, 46, 96, 31, -6, -86, -16, 67, 81, -80, 67, -33, 126, 112, 21, -87, -73, -25, -22, 68, 71, -38, 84, 95, 70, 78, -29, 28, 6, -15, -18, -112, 31, 11, -55, -85, -50, 87, 78, 97, 28, -59, -99, -16, -43, 22, 13, -116, -29, 36, -12, 67, 30, 54, -106, 44, -87, -43, 16, 90, 41, 44, -55, 58, 1, 34, -119, -10, 108, 113, -125, -33, 52, -16, 16, -11, 30, 59, -63, -12, -106, -52, -73, 110, -124};
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
    msg.setTimeStamp(0.722600636325);
    msg.setSource(19814U);
    msg.setSourceEntity(171U);
    msg.setDestination(31867U);
    msg.setDestinationEntity(16U);
    const char tmp_msg_0[] = {-63, 1, 78, -9, -79, 46, 25, -83, 77, 31, -42, -28, -22, -92, 19, -30, -35, -59, 51, -21, 70, -91, 3, -47, 12, 115, -73, -49, 5, 118, -31, 94, -76, 116, 64, 2, -61, 96, 90, -89, 95, -84, -90, -124, 30, 90, -114, -29, 79, 106, 109, 100, 110, 92, -8, -24, 13, -105, -59, -128, -102, 8, 103, -110, 23, -2, 101, -33, 47, 30, 40, -59, 10, -104, 4, -5, 18, -66, -96, 21, 117, 114, -38, -88, -114, -122, -62, 52, -8, 54, 116, 15, 26, -97, -84, -22, 42, -128, 36, -59, -35, -9, 1, -116, 67, 102, -33, 108, 0, 84, -125, 113, -8, 46, 37, 115, 120, 76, 47, -98, 26, -53, -106, -67, -66, -10, -29, 8, 69, -50, -57, 85, -122};
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
    msg.setTimeStamp(0.291327491612);
    msg.setSource(15321U);
    msg.setSourceEntity(135U);
    msg.setDestination(40112U);
    msg.setDestinationEntity(112U);
    const char tmp_msg_0[] = {-63, 109, -43, 30, -16, -53, 40, 111, -52, -27, 83, -45, 20, -32, -28, -102, -119, 21, -5, -81, -13, 73, 39, 8, -11, 101, -82, 69, 5, 76, -24, 49, 31, 20, -25, -2, 72, 125, -47, -116, 107, -10, 43, 70, -44, -10, -104, 76, -112, 26, 6, -45, 45, -58, -38, 12, -128, -83, 82, 86, 95, 86, -14, -49, -75, 29, 17, 18, 42, -79, 81, 31, -39, -126, 91, 44, 65, 70, 34, -58, -7, -37, 2, -116, 12, -2, 23, -8, -99, 85, 96, 83, 65, 19, -80, 15, -75, 104, -92, -33, -33, -50, 100, 48, 107, 72, 75, -41, -59, 115, 15, -49, -47, 60, -33, -76, 42, 10, -125, -104, -72, -12, -37, -46, -72, -20, -71, 122, -67, -74, 122, 43, -27, -70, 108, -117, 28, -114, 111, 118, -69, -113, 115, 20, -46, -55, -87, -57, 12, 49, 120, 31, -88, -85, 85, -32, -118, -49, 16, 38, 119, 101, 89, -87, 62, 89, 76, 20, 58, 3, -18, 119, 67, 64, 93, -112, -81, -18, -113, 82, -24, 49, -74, 124, -54, 92};
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
    msg.setTimeStamp(0.293602030832);
    msg.setSource(53230U);
    msg.setSourceEntity(118U);
    msg.setDestination(61873U);
    msg.setDestinationEntity(166U);
    msg.type = 23U;
    msg.frequency = 2807232752U;
    msg.min_range = 24266U;
    msg.max_range = 37332U;
    msg.bits_per_point = 9U;
    msg.scale_factor = 0.992089201553;
    const char tmp_msg_0[] = {18, -49, 90, -108, 88, 12, 29, 56, 70, 32, -91, 24, 15, 41, 34, -41, 60, 61, 33, 68, 56, 6, 2, -100, 94, -58, 70, -31, 16, -69, -58, 0, -8, -36, 124, 120, -66, 16, -16, -81, 101, -8, -106, -54, 122, 32, 41, 23, -54, -55, 112, -127, 46, -121, 61, -35, 89, -41, 41, -36, -107, 22, 42, -27, -81, 114, -110, -53, 31, 46, 117, -52, 62, 75, 16, -4, -53, 27, 109, -127, -5, 78, 50, -62, -76, 24, -31, -31, -122, 38, -12, -78, 75, -41, 33, 113, -65, 4, 69, 48, -15, -5, 125, -123, 99, 29, 119, -100, -69, -87, 0, -55, 8, 110, -19, -52, 53, -112, 118, 2, 121, -127, -8, -11, -87, 63, 37, -117, 78, 73, 93, 104, -104, -123, -36, 67, 76, 10, -93, 104, 0, 108, -13, -91, -68, 66, 6, 58, 46, 20, -57, 41, 113, 118, 53, -9, -38, 105, -76, 100, -44, -65, -34, 58, -76, -120, -16, -98, 114, -63, -56, 0, 79, -48, -36, 10, -126, -67, 65, 20, 69, -69, 54, -3, 99, -24, -40, 96, 24, 103, 90, -44, 22, -112, 34, 1, 109, -5, -53, -80, -10};
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
    msg.setTimeStamp(0.322118100887);
    msg.setSource(35807U);
    msg.setSourceEntity(66U);
    msg.setDestination(5436U);
    msg.setDestinationEntity(73U);
    msg.type = 243U;
    msg.frequency = 897366357U;
    msg.min_range = 18925U;
    msg.max_range = 46976U;
    msg.bits_per_point = 167U;
    msg.scale_factor = 0.137128097812;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.450496853683;
    tmp_msg_0.beam_height = 0.459442649287;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-85, -88, 51, 9, 8, 31, 34, 20, -99, 1, 72};
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
    msg.setTimeStamp(0.0505326365929);
    msg.setSource(1707U);
    msg.setSourceEntity(101U);
    msg.setDestination(35495U);
    msg.setDestinationEntity(30U);
    msg.type = 72U;
    msg.frequency = 1259720337U;
    msg.min_range = 39891U;
    msg.max_range = 63930U;
    msg.bits_per_point = 178U;
    msg.scale_factor = 0.554274646892;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0610641246493;
    tmp_msg_0.beam_height = 0.368536174073;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {84, 51, -123, 79, 84, 28, 82, 52, 74, -4, -15, -116, 89, -103, 83, -86, 74, 61, 122, 121, 124, -84, 61, -2, -32, -55, -82, -2, -46, 125, 84, -81, -25, 43, 23, 85, -19, 33, -53, -96, 106, -49, 98, 124, -30, 64, 52, -45, 9, -48, 27, 99, -29, 28, 15, -71, 89, 31};
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
    msg.setTimeStamp(0.773486680674);
    msg.setSource(5087U);
    msg.setSourceEntity(211U);
    msg.setDestination(39301U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.757914188544);
    msg.setSource(34099U);
    msg.setSourceEntity(221U);
    msg.setDestination(178U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.767896431891);
    msg.setSource(36485U);
    msg.setSourceEntity(23U);
    msg.setDestination(28653U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.178517129661);
    msg.setSource(20506U);
    msg.setSourceEntity(24U);
    msg.setDestination(36459U);
    msg.setDestinationEntity(77U);
    msg.op = 163U;

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
    msg.setTimeStamp(0.515025964691);
    msg.setSource(63498U);
    msg.setSourceEntity(111U);
    msg.setDestination(28429U);
    msg.setDestinationEntity(31U);
    msg.op = 79U;

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
    msg.setTimeStamp(0.106588090555);
    msg.setSource(49795U);
    msg.setSourceEntity(107U);
    msg.setDestination(22062U);
    msg.setDestinationEntity(71U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.242487668725);
    msg.setSource(56154U);
    msg.setSourceEntity(254U);
    msg.setDestination(595U);
    msg.setDestinationEntity(245U);
    msg.value = 0.703263186014;
    msg.confidence = 0.60392194625;
    msg.opmodes.assign("IUMIMNGHYBVGSHLCYKZBWPBWAWQKJTAROZBHIEUUCZTMIEENINWLCXKEFYJMDENQIPTQNZMMUUAJIIFBNLWZRHJZPDZOKDRBFXTFEWRYSCDRCEJBAFXCD");

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
    msg.setTimeStamp(0.825535436497);
    msg.setSource(47340U);
    msg.setSourceEntity(12U);
    msg.setDestination(62368U);
    msg.setDestinationEntity(36U);
    msg.value = 0.540524460098;
    msg.confidence = 0.421652641934;
    msg.opmodes.assign("ROEXRKOHZLBQPXTAZGHUWETZFLJKJCBKYLJGDPOVSXVMUVUDMNENKJWACUVJQQBTHGIEPLSTKYADFEXWXREFNSADZACYILHHKDBRHVWJEZSLUCYJSGDGTJHUZAQPCLWTFLMVRMOWSHUJANSINKFGLPOYFUICMLZPQMBKQZFPNTQTRYBINGRCIMAVTHRPQIVYWMBONMGSGGXWJCDOYWQVYYXCIDFVBNETOPAPNHDQRORBDA");

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
    msg.setTimeStamp(0.721041145147);
    msg.setSource(38187U);
    msg.setSourceEntity(44U);
    msg.setDestination(21027U);
    msg.setDestinationEntity(110U);
    msg.value = 0.0305914785566;
    msg.confidence = 0.283353226807;
    msg.opmodes.assign("CGHKAAMLAKKHRXCGWIFSJGNQIZZUYXTPPYZFSSTSIESSRQTLMXMLENOHEBAEHARNBQMDJIBNRZYTYJM");

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
    msg.setTimeStamp(0.297710650673);
    msg.setSource(49219U);
    msg.setSourceEntity(22U);
    msg.setDestination(23517U);
    msg.setDestinationEntity(50U);
    msg.itow = 2245243975U;
    msg.lat = 0.784787943749;
    msg.lon = 0.8928004062;
    msg.height_ell = 0.00292392372407;
    msg.height_sea = 0.234438861371;
    msg.hacc = 0.00094403560495;
    msg.vacc = 0.546304001971;
    msg.vel_n = 0.521115869941;
    msg.vel_e = 0.123657654295;
    msg.vel_d = 0.3993426776;
    msg.speed = 0.557776569005;
    msg.gspeed = 0.135323587936;
    msg.heading = 0.315468399485;
    msg.sacc = 0.188537070553;
    msg.cacc = 0.466582163925;

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
    msg.setTimeStamp(0.458947243849);
    msg.setSource(35412U);
    msg.setSourceEntity(205U);
    msg.setDestination(45049U);
    msg.setDestinationEntity(26U);
    msg.itow = 3368875045U;
    msg.lat = 0.641771364535;
    msg.lon = 0.783862305992;
    msg.height_ell = 0.47449047699;
    msg.height_sea = 0.097789949234;
    msg.hacc = 0.599698270372;
    msg.vacc = 0.213091862613;
    msg.vel_n = 0.589480790257;
    msg.vel_e = 0.931303246854;
    msg.vel_d = 0.586008439403;
    msg.speed = 0.601482371278;
    msg.gspeed = 0.26690934788;
    msg.heading = 0.215906905624;
    msg.sacc = 0.277360167432;
    msg.cacc = 0.0500502254909;

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
    msg.setTimeStamp(0.62941507184);
    msg.setSource(1053U);
    msg.setSourceEntity(236U);
    msg.setDestination(21815U);
    msg.setDestinationEntity(106U);
    msg.itow = 936639078U;
    msg.lat = 0.46601374835;
    msg.lon = 0.484507375449;
    msg.height_ell = 0.64581763078;
    msg.height_sea = 0.746467346714;
    msg.hacc = 0.125373354134;
    msg.vacc = 0.368415444683;
    msg.vel_n = 0.768429247669;
    msg.vel_e = 0.949567946125;
    msg.vel_d = 0.580308084962;
    msg.speed = 0.0528294635981;
    msg.gspeed = 0.743286307302;
    msg.heading = 0.366162926095;
    msg.sacc = 0.0980605383105;
    msg.cacc = 0.464779725458;

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
    msg.setTimeStamp(0.346298745625);
    msg.setSource(28754U);
    msg.setSourceEntity(102U);
    msg.setDestination(16440U);
    msg.setDestinationEntity(58U);
    msg.id = 170U;
    msg.value = 0.775284706781;

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
    msg.setTimeStamp(0.120346290536);
    msg.setSource(20740U);
    msg.setSourceEntity(24U);
    msg.setDestination(19828U);
    msg.setDestinationEntity(242U);
    msg.id = 78U;
    msg.value = 0.0419897503888;

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
    msg.setTimeStamp(0.931665660276);
    msg.setSource(3718U);
    msg.setSourceEntity(106U);
    msg.setDestination(38900U);
    msg.setDestinationEntity(68U);
    msg.id = 189U;
    msg.value = 0.953466999124;

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
    msg.setTimeStamp(0.903099802131);
    msg.setSource(48339U);
    msg.setSourceEntity(91U);
    msg.setDestination(39064U);
    msg.setDestinationEntity(203U);
    msg.x = 0.109583607719;
    msg.y = 0.167424038645;
    msg.z = 0.0176769700127;
    msg.phi = 0.0403378053972;
    msg.theta = 0.206051599753;
    msg.psi = 0.487552168539;

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
    msg.setTimeStamp(0.979770170461);
    msg.setSource(35731U);
    msg.setSourceEntity(90U);
    msg.setDestination(12959U);
    msg.setDestinationEntity(238U);
    msg.x = 0.672361002646;
    msg.y = 0.767452757715;
    msg.z = 0.559035330504;
    msg.phi = 0.873733098837;
    msg.theta = 0.0410675984385;
    msg.psi = 0.462916004234;

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
    msg.setTimeStamp(0.170676089463);
    msg.setSource(52827U);
    msg.setSourceEntity(148U);
    msg.setDestination(398U);
    msg.setDestinationEntity(252U);
    msg.x = 0.393225110691;
    msg.y = 0.592056083555;
    msg.z = 0.0493515613859;
    msg.phi = 0.285640850815;
    msg.theta = 0.885631635996;
    msg.psi = 0.977644494158;

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
    msg.setTimeStamp(0.0680427515511);
    msg.setSource(29845U);
    msg.setSourceEntity(28U);
    msg.setDestination(63728U);
    msg.setDestinationEntity(53U);
    msg.beam_width = 0.673475715404;
    msg.beam_height = 0.698428323737;

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
    msg.setTimeStamp(0.024027769157);
    msg.setSource(1382U);
    msg.setSourceEntity(209U);
    msg.setDestination(489U);
    msg.setDestinationEntity(177U);
    msg.beam_width = 0.0383726799339;
    msg.beam_height = 0.774337041873;

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
    msg.setTimeStamp(0.535618933844);
    msg.setSource(23626U);
    msg.setSourceEntity(183U);
    msg.setDestination(37126U);
    msg.setDestinationEntity(234U);
    msg.beam_width = 0.510784069422;
    msg.beam_height = 0.837031652307;

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
    msg.setTimeStamp(0.245795209372);
    msg.setSource(29299U);
    msg.setSourceEntity(252U);
    msg.setDestination(62810U);
    msg.setDestinationEntity(76U);
    msg.sane = 254U;

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
    msg.setTimeStamp(0.397391824978);
    msg.setSource(62598U);
    msg.setSourceEntity(62U);
    msg.setDestination(53063U);
    msg.setDestinationEntity(71U);
    msg.sane = 160U;

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
    msg.setTimeStamp(0.895191329128);
    msg.setSource(3245U);
    msg.setSourceEntity(52U);
    msg.setDestination(56566U);
    msg.setDestinationEntity(221U);
    msg.sane = 232U;

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
    msg.setTimeStamp(0.891205210005);
    msg.setSource(61726U);
    msg.setSourceEntity(21U);
    msg.setDestination(45616U);
    msg.setDestinationEntity(146U);
    msg.value = 0.749760499994;

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
    msg.setTimeStamp(0.0837491201897);
    msg.setSource(44392U);
    msg.setSourceEntity(39U);
    msg.setDestination(28281U);
    msg.setDestinationEntity(119U);
    msg.value = 0.582435886116;

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
    msg.setTimeStamp(0.220013387919);
    msg.setSource(53453U);
    msg.setSourceEntity(2U);
    msg.setDestination(5030U);
    msg.setDestinationEntity(200U);
    msg.value = 0.67005544851;

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
    msg.setTimeStamp(0.21309677298);
    msg.setSource(7647U);
    msg.setSourceEntity(217U);
    msg.setDestination(5159U);
    msg.setDestinationEntity(90U);
    msg.value = 0.724659952371;

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
    msg.setTimeStamp(0.0268975536771);
    msg.setSource(4303U);
    msg.setSourceEntity(86U);
    msg.setDestination(2654U);
    msg.setDestinationEntity(93U);
    msg.value = 0.132726149142;

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
    msg.setTimeStamp(0.889958347933);
    msg.setSource(37253U);
    msg.setSourceEntity(98U);
    msg.setDestination(27168U);
    msg.setDestinationEntity(82U);
    msg.value = 0.226559078187;

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
    msg.setTimeStamp(0.0533846301754);
    msg.setSource(62510U);
    msg.setSourceEntity(104U);
    msg.setDestination(52888U);
    msg.setDestinationEntity(164U);
    msg.value = 0.840837093191;

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
    msg.setTimeStamp(0.808289529245);
    msg.setSource(23670U);
    msg.setSourceEntity(119U);
    msg.setDestination(25127U);
    msg.setDestinationEntity(197U);
    msg.value = 0.712131518431;

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
    msg.setTimeStamp(0.879848044765);
    msg.setSource(52974U);
    msg.setSourceEntity(46U);
    msg.setDestination(12013U);
    msg.setDestinationEntity(234U);
    msg.value = 0.738426390861;

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
    msg.setTimeStamp(0.826036472458);
    msg.setSource(38351U);
    msg.setSourceEntity(25U);
    msg.setDestination(53560U);
    msg.setDestinationEntity(156U);
    msg.value = 0.297848335709;

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
    msg.setTimeStamp(0.766013883059);
    msg.setSource(38525U);
    msg.setSourceEntity(38U);
    msg.setDestination(461U);
    msg.setDestinationEntity(27U);
    msg.value = 0.0100598299673;

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
    msg.setTimeStamp(0.717354344396);
    msg.setSource(31758U);
    msg.setSourceEntity(219U);
    msg.setDestination(20104U);
    msg.setDestinationEntity(8U);
    msg.value = 0.0839940547162;

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
    msg.setTimeStamp(0.179909434665);
    msg.setSource(63811U);
    msg.setSourceEntity(163U);
    msg.setDestination(4253U);
    msg.setDestinationEntity(160U);
    msg.value = 0.500705806459;

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
    msg.setTimeStamp(0.120127813293);
    msg.setSource(64082U);
    msg.setSourceEntity(30U);
    msg.setDestination(1710U);
    msg.setDestinationEntity(179U);
    msg.value = 0.687332433356;

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
    msg.setTimeStamp(0.976499312068);
    msg.setSource(44337U);
    msg.setSourceEntity(227U);
    msg.setDestination(7960U);
    msg.setDestinationEntity(19U);
    msg.value = 0.548342686925;

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
    msg.setTimeStamp(0.77894765355);
    msg.setSource(58606U);
    msg.setSourceEntity(26U);
    msg.setDestination(19422U);
    msg.setDestinationEntity(49U);
    msg.value = 0.0797219004653;

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
    msg.setTimeStamp(0.163463060658);
    msg.setSource(63817U);
    msg.setSourceEntity(12U);
    msg.setDestination(7020U);
    msg.setDestinationEntity(170U);
    msg.value = 0.444713269103;

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
    msg.setTimeStamp(0.0312637309489);
    msg.setSource(23739U);
    msg.setSourceEntity(210U);
    msg.setDestination(6464U);
    msg.setDestinationEntity(146U);
    msg.value = 0.115067797859;

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
    msg.setTimeStamp(0.486326244837);
    msg.setSource(41500U);
    msg.setSourceEntity(188U);
    msg.setDestination(64492U);
    msg.setDestinationEntity(222U);
    msg.value = 0.827878224095;

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
    msg.setTimeStamp(0.0231338827699);
    msg.setSource(41608U);
    msg.setSourceEntity(243U);
    msg.setDestination(23325U);
    msg.setDestinationEntity(250U);
    msg.value = 0.728703038435;

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
    msg.setTimeStamp(0.690446180851);
    msg.setSource(41820U);
    msg.setSourceEntity(185U);
    msg.setDestination(15415U);
    msg.setDestinationEntity(144U);
    msg.value = 0.674989737482;

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
    msg.setTimeStamp(0.203878103047);
    msg.setSource(7271U);
    msg.setSourceEntity(242U);
    msg.setDestination(44646U);
    msg.setDestinationEntity(56U);
    msg.value = 0.0859300481924;

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
    msg.setTimeStamp(0.495547890368);
    msg.setSource(65461U);
    msg.setSourceEntity(238U);
    msg.setDestination(42683U);
    msg.setDestinationEntity(204U);
    msg.value = 0.197686287913;

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
    msg.setTimeStamp(0.204665315873);
    msg.setSource(22174U);
    msg.setSourceEntity(113U);
    msg.setDestination(63460U);
    msg.setDestinationEntity(103U);
    msg.value = 0.105374562777;

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
    msg.setTimeStamp(0.838649306482);
    msg.setSource(10411U);
    msg.setSourceEntity(188U);
    msg.setDestination(16844U);
    msg.setDestinationEntity(175U);
    msg.validity = 23214U;
    msg.type = 114U;
    msg.tow = 664589024U;
    msg.base_lat = 0.726149835921;
    msg.base_lon = 0.437969583308;
    msg.base_height = 0.904049750437;
    msg.n = 0.929879869637;
    msg.e = 0.860088095184;
    msg.d = 0.388434555828;
    msg.v_n = 0.357966899476;
    msg.v_e = 0.434720008274;
    msg.v_d = 0.131211941858;
    msg.satellites = 104U;
    msg.iar_hyp = 57013U;
    msg.iar_ratio = 0.21320087564;

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
    msg.setTimeStamp(0.917406012385);
    msg.setSource(61624U);
    msg.setSourceEntity(199U);
    msg.setDestination(40568U);
    msg.setDestinationEntity(52U);
    msg.validity = 21419U;
    msg.type = 171U;
    msg.tow = 3750325581U;
    msg.base_lat = 0.402589042999;
    msg.base_lon = 0.229776238716;
    msg.base_height = 0.904849534606;
    msg.n = 0.616347214604;
    msg.e = 0.656937639901;
    msg.d = 0.884395885188;
    msg.v_n = 0.564611177106;
    msg.v_e = 0.671289014703;
    msg.v_d = 0.433519424375;
    msg.satellites = 223U;
    msg.iar_hyp = 5142U;
    msg.iar_ratio = 0.496047794126;

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
    msg.setTimeStamp(0.426825909607);
    msg.setSource(471U);
    msg.setSourceEntity(184U);
    msg.setDestination(10527U);
    msg.setDestinationEntity(3U);
    msg.validity = 8466U;
    msg.type = 207U;
    msg.tow = 2267244938U;
    msg.base_lat = 0.0779727289142;
    msg.base_lon = 0.301977053478;
    msg.base_height = 0.0161989752064;
    msg.n = 0.718453121737;
    msg.e = 0.0843968533398;
    msg.d = 0.219467726762;
    msg.v_n = 0.704460391646;
    msg.v_e = 0.174662132118;
    msg.v_d = 0.198527505676;
    msg.satellites = 29U;
    msg.iar_hyp = 34779U;
    msg.iar_ratio = 0.181543731343;

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
    msg.setTimeStamp(0.458593193918);
    msg.setSource(58055U);
    msg.setSourceEntity(145U);
    msg.setDestination(39949U);
    msg.setDestinationEntity(164U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.682272266849;
    tmp_msg_0.lon = 0.361360995744;
    tmp_msg_0.height = 0.317018743666;
    tmp_msg_0.x = 0.997491697622;
    tmp_msg_0.y = 0.239021803347;
    tmp_msg_0.z = 0.383934837295;
    tmp_msg_0.phi = 0.440382895054;
    tmp_msg_0.theta = 0.848329543032;
    tmp_msg_0.psi = 0.137013462748;
    tmp_msg_0.u = 0.885284992625;
    tmp_msg_0.v = 0.448611247211;
    tmp_msg_0.w = 0.643905896409;
    tmp_msg_0.vx = 0.228368238013;
    tmp_msg_0.vy = 0.249941340085;
    tmp_msg_0.vz = 0.962728895716;
    tmp_msg_0.p = 0.962843425652;
    tmp_msg_0.q = 0.506276983106;
    tmp_msg_0.r = 0.0412876969097;
    tmp_msg_0.depth = 0.397526616141;
    tmp_msg_0.alt = 0.523945963269;
    msg.state.set(tmp_msg_0);
    msg.type = 105U;

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
    msg.setTimeStamp(0.680989085826);
    msg.setSource(32710U);
    msg.setSourceEntity(176U);
    msg.setDestination(48118U);
    msg.setDestinationEntity(10U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.437206935672;
    tmp_msg_0.lon = 0.168756796782;
    tmp_msg_0.height = 0.574933059721;
    tmp_msg_0.x = 0.737085928692;
    tmp_msg_0.y = 0.36904330748;
    tmp_msg_0.z = 0.522033364487;
    tmp_msg_0.phi = 0.105208994592;
    tmp_msg_0.theta = 0.259501807789;
    tmp_msg_0.psi = 0.849927746366;
    tmp_msg_0.u = 0.864683389276;
    tmp_msg_0.v = 0.533575496236;
    tmp_msg_0.w = 0.624676152797;
    tmp_msg_0.vx = 0.837064100835;
    tmp_msg_0.vy = 0.616676377416;
    tmp_msg_0.vz = 0.630175648439;
    tmp_msg_0.p = 0.00838729755924;
    tmp_msg_0.q = 0.283858621838;
    tmp_msg_0.r = 0.51490630548;
    tmp_msg_0.depth = 0.0921183568017;
    tmp_msg_0.alt = 0.59611235205;
    msg.state.set(tmp_msg_0);
    msg.type = 127U;

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
    msg.setTimeStamp(0.0787078947415);
    msg.setSource(18944U);
    msg.setSourceEntity(145U);
    msg.setDestination(39544U);
    msg.setDestinationEntity(202U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.199295578957;
    tmp_msg_0.lon = 0.317652374425;
    tmp_msg_0.height = 0.201663757242;
    tmp_msg_0.x = 0.361650266678;
    tmp_msg_0.y = 0.487794610656;
    tmp_msg_0.z = 0.550055730428;
    tmp_msg_0.phi = 0.716205703411;
    tmp_msg_0.theta = 0.46679784788;
    tmp_msg_0.psi = 0.78728300681;
    tmp_msg_0.u = 0.0550253445288;
    tmp_msg_0.v = 0.337549661197;
    tmp_msg_0.w = 0.774724285986;
    tmp_msg_0.vx = 0.886669991847;
    tmp_msg_0.vy = 0.328998844458;
    tmp_msg_0.vz = 0.224101844792;
    tmp_msg_0.p = 0.243760927253;
    tmp_msg_0.q = 0.306131831721;
    tmp_msg_0.r = 0.760865026988;
    tmp_msg_0.depth = 0.912734608181;
    tmp_msg_0.alt = 0.428966099864;
    msg.state.set(tmp_msg_0);
    msg.type = 198U;

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
    msg.setTimeStamp(0.339231851728);
    msg.setSource(8223U);
    msg.setSourceEntity(140U);
    msg.setDestination(1711U);
    msg.setDestinationEntity(243U);
    msg.value = 0.325024210034;

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
    msg.setTimeStamp(0.97247853112);
    msg.setSource(32163U);
    msg.setSourceEntity(158U);
    msg.setDestination(17540U);
    msg.setDestinationEntity(119U);
    msg.value = 0.435006390464;

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
    msg.setTimeStamp(0.395884016083);
    msg.setSource(4562U);
    msg.setSourceEntity(151U);
    msg.setDestination(34852U);
    msg.setDestinationEntity(73U);
    msg.value = 0.0760210797798;

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
    msg.setTimeStamp(0.654313689067);
    msg.setSource(48486U);
    msg.setSourceEntity(236U);
    msg.setDestination(14988U);
    msg.setDestinationEntity(251U);
    msg.value = 0.453540472846;

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
    msg.setTimeStamp(0.217881331462);
    msg.setSource(24126U);
    msg.setSourceEntity(61U);
    msg.setDestination(20771U);
    msg.setDestinationEntity(32U);
    msg.value = 0.491179705303;

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
    msg.setTimeStamp(0.24482984382);
    msg.setSource(9182U);
    msg.setSourceEntity(131U);
    msg.setDestination(11287U);
    msg.setDestinationEntity(59U);
    msg.value = 0.537805202745;

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
    msg.setTimeStamp(0.332599833006);
    msg.setSource(49964U);
    msg.setSourceEntity(32U);
    msg.setDestination(3914U);
    msg.setDestinationEntity(47U);
    msg.value = 0.0421462008274;

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
    msg.setTimeStamp(0.991328866696);
    msg.setSource(30956U);
    msg.setSourceEntity(254U);
    msg.setDestination(33421U);
    msg.setDestinationEntity(183U);
    msg.value = 0.15256669159;

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
    msg.setTimeStamp(0.083785078344);
    msg.setSource(10708U);
    msg.setSourceEntity(50U);
    msg.setDestination(10535U);
    msg.setDestinationEntity(12U);
    msg.value = 0.612668725181;

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
    msg.setTimeStamp(0.589843380146);
    msg.setSource(56199U);
    msg.setSourceEntity(40U);
    msg.setDestination(23844U);
    msg.setDestinationEntity(205U);
    msg.value = 0.165712247134;

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
    msg.setTimeStamp(0.678307127894);
    msg.setSource(39615U);
    msg.setSourceEntity(70U);
    msg.setDestination(831U);
    msg.setDestinationEntity(223U);
    msg.value = 0.721279029975;

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
    msg.setTimeStamp(0.398408298359);
    msg.setSource(29022U);
    msg.setSourceEntity(161U);
    msg.setDestination(4157U);
    msg.setDestinationEntity(5U);
    msg.value = 0.242288146491;

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
    msg.setTimeStamp(0.196977336269);
    msg.setSource(49923U);
    msg.setSourceEntity(223U);
    msg.setDestination(1007U);
    msg.setDestinationEntity(224U);
    msg.value = 0.126290389247;

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
    msg.setTimeStamp(0.398465478785);
    msg.setSource(35827U);
    msg.setSourceEntity(6U);
    msg.setDestination(10037U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0268369124991;

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
    msg.setTimeStamp(0.675653307632);
    msg.setSource(53394U);
    msg.setSourceEntity(38U);
    msg.setDestination(2138U);
    msg.setDestinationEntity(21U);
    msg.value = 0.643498102642;

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
    msg.setTimeStamp(0.0859979808115);
    msg.setSource(19614U);
    msg.setSourceEntity(3U);
    msg.setDestination(31981U);
    msg.setDestinationEntity(119U);
    msg.id = 130U;
    msg.zoom = 192U;
    msg.action = 163U;

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
    msg.setTimeStamp(0.319089520878);
    msg.setSource(23105U);
    msg.setSourceEntity(34U);
    msg.setDestination(27080U);
    msg.setDestinationEntity(48U);
    msg.id = 88U;
    msg.zoom = 140U;
    msg.action = 2U;

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
    msg.setTimeStamp(0.0314043635825);
    msg.setSource(39441U);
    msg.setSourceEntity(127U);
    msg.setDestination(31205U);
    msg.setDestinationEntity(225U);
    msg.id = 13U;
    msg.zoom = 180U;
    msg.action = 92U;

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
    msg.setTimeStamp(0.233308892627);
    msg.setSource(60366U);
    msg.setSourceEntity(178U);
    msg.setDestination(31991U);
    msg.setDestinationEntity(45U);
    msg.id = 153U;
    msg.value = 0.951012844419;

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
    msg.setTimeStamp(0.250891783244);
    msg.setSource(33415U);
    msg.setSourceEntity(36U);
    msg.setDestination(30863U);
    msg.setDestinationEntity(199U);
    msg.id = 30U;
    msg.value = 0.606498689723;

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
    msg.setTimeStamp(0.127345564574);
    msg.setSource(52738U);
    msg.setSourceEntity(122U);
    msg.setDestination(14314U);
    msg.setDestinationEntity(167U);
    msg.id = 63U;
    msg.value = 0.978615634982;

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
    msg.setTimeStamp(0.675014759472);
    msg.setSource(23685U);
    msg.setSourceEntity(38U);
    msg.setDestination(16218U);
    msg.setDestinationEntity(52U);
    msg.id = 117U;
    msg.value = 0.58712783128;

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
    msg.setTimeStamp(0.825081962429);
    msg.setSource(30116U);
    msg.setSourceEntity(93U);
    msg.setDestination(13046U);
    msg.setDestinationEntity(164U);
    msg.id = 92U;
    msg.value = 0.926792090702;

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
    msg.setTimeStamp(0.0137109533685);
    msg.setSource(62329U);
    msg.setSourceEntity(73U);
    msg.setDestination(22974U);
    msg.setDestinationEntity(167U);
    msg.id = 229U;
    msg.value = 0.571254271658;

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
    msg.setTimeStamp(0.253481807976);
    msg.setSource(52417U);
    msg.setSourceEntity(166U);
    msg.setDestination(62055U);
    msg.setDestinationEntity(217U);
    msg.id = 169U;
    msg.angle = 0.931569390745;

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
    msg.setTimeStamp(0.0682914515224);
    msg.setSource(34009U);
    msg.setSourceEntity(212U);
    msg.setDestination(28133U);
    msg.setDestinationEntity(143U);
    msg.id = 253U;
    msg.angle = 0.692073208819;

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
    msg.setTimeStamp(0.196521667087);
    msg.setSource(39956U);
    msg.setSourceEntity(163U);
    msg.setDestination(37795U);
    msg.setDestinationEntity(31U);
    msg.id = 136U;
    msg.angle = 0.169675113331;

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
    msg.setTimeStamp(0.741734635066);
    msg.setSource(56759U);
    msg.setSourceEntity(143U);
    msg.setDestination(23359U);
    msg.setDestinationEntity(94U);
    msg.op = 103U;
    msg.actions.assign("OWMASGTNPYNAKNRXMAIQXAECGGHWAIXCNFMFLNZFJSAJOUDFX");

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
    msg.setTimeStamp(0.218077268435);
    msg.setSource(53696U);
    msg.setSourceEntity(118U);
    msg.setDestination(19280U);
    msg.setDestinationEntity(234U);
    msg.op = 33U;
    msg.actions.assign("KETZHCBRXWTHITTQCWMELVFFVYGEJVQOSKUYJYMKPINGUXVNSSIZOMPBJGGVANHDNGSDKOOKBHMBPDTRAUUGDMVQERQXCUISDFWTVNGZCWNJTFWQZPOQRLTNMTXARRWKFRABPXXIFKJKDXREPOJWXHFEMOEUO");

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
    msg.setTimeStamp(0.733737138951);
    msg.setSource(57042U);
    msg.setSourceEntity(173U);
    msg.setDestination(63326U);
    msg.setDestinationEntity(239U);
    msg.op = 156U;
    msg.actions.assign("TXDXWHPBUXACKAJMOWPDBBKIJNDCSVQNSRDOAUFQARZWGOHGGZEPNNUBLDVEQWLRXFNSMHPTHIDLLYOMBIYWUBGSHUYFVFLGEJVTQLZCBHLVWAUUSJCSWDSQFPN");

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
    msg.setTimeStamp(0.836134488361);
    msg.setSource(40172U);
    msg.setSourceEntity(190U);
    msg.setDestination(20127U);
    msg.setDestinationEntity(46U);
    msg.actions.assign("GBYFEDDVUZQGFCXOABLNMYBSOCYZUWTECGMFUHXOFSIZZIZADRTOHHKEPCSXSDJZDDKRUCBBJADELMCPIGULAAWZZOVCSIIQRGITBNIPFFNXMLHEVGNMJNSABXXRXJNVMFOHQYWITVIVKWWOVSRLPUBKNDCJTAOGUQSKRGZJFLCPJURSAQBMVHPHRHFEPNNGGTUPENTXTILU");

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
    msg.setTimeStamp(0.102889204085);
    msg.setSource(35845U);
    msg.setSourceEntity(205U);
    msg.setDestination(39407U);
    msg.setDestinationEntity(116U);
    msg.actions.assign("VSVPXGJHCFBDHZTVADDYXECDNKQGQUCZAEZUWJJMRCMVNLTYAPMWJUMDSPAOL");

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
    msg.setTimeStamp(0.0357341609571);
    msg.setSource(26683U);
    msg.setSourceEntity(0U);
    msg.setDestination(25086U);
    msg.setDestinationEntity(196U);
    msg.actions.assign("LBVDGFOAPLUMJIPKNFKIVRMPUZCRLVSRDCFUUSJNACCBENNSEKPZABAYFZGRBEKZKXOTGIYAWTICFYOYSADKIAEWAYUEYZXRMQBXGTHTFJBIOONJHGZMXUKYPMNHVZVCCPMLGQHJAJTTMZEPGPLDLRWVLWMQOIHWEQVHYRFVBOS");

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
    msg.setTimeStamp(0.564779644715);
    msg.setSource(14810U);
    msg.setSourceEntity(117U);
    msg.setDestination(59605U);
    msg.setDestinationEntity(17U);
    msg.button = 76U;
    msg.value = 80U;

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
    msg.setTimeStamp(0.652219872636);
    msg.setSource(19261U);
    msg.setSourceEntity(150U);
    msg.setDestination(24779U);
    msg.setDestinationEntity(31U);
    msg.button = 185U;
    msg.value = 36U;

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
    msg.setTimeStamp(0.825517259691);
    msg.setSource(45962U);
    msg.setSourceEntity(89U);
    msg.setDestination(34110U);
    msg.setDestinationEntity(28U);
    msg.button = 88U;
    msg.value = 102U;

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
    msg.setTimeStamp(0.244357084588);
    msg.setSource(1923U);
    msg.setSourceEntity(75U);
    msg.setDestination(1226U);
    msg.setDestinationEntity(214U);
    msg.op = 105U;
    msg.text.assign("UEITQPEDUPAFFOADDPHXKLHKCFSRNWNKLJKQBAXBIRMXTZCGSBPUYGZBUIIBZ");

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
    msg.setTimeStamp(0.8535353414);
    msg.setSource(61830U);
    msg.setSourceEntity(164U);
    msg.setDestination(31486U);
    msg.setDestinationEntity(93U);
    msg.op = 66U;
    msg.text.assign("DJEIGMTVEJSPMHBQTLZBVAQWDMSMPFNRLXSWKBRVWIPJCDJXIHNLSEFXJIKYXGNQNHTAWCWCUDKONKFRBTYGVCHKLOIGAGYUFPCIRFJTMAOGSBVWQAXZVUMRYZPTSCXLYTKXCZBBOVAYUYYTEDXPOHGWUAORIISRXIFZNHLGDFMCXQBPOPMOZHKJHEUAOEZDQ");

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
    msg.setTimeStamp(0.558147700565);
    msg.setSource(22644U);
    msg.setSourceEntity(47U);
    msg.setDestination(8901U);
    msg.setDestinationEntity(204U);
    msg.op = 72U;
    msg.text.assign("FIPSQXUAPTQQGOXGINYTPMMRZDUGGVQAASVNVJRFPWIROHUDZ");

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
    msg.setTimeStamp(0.843500282952);
    msg.setSource(28324U);
    msg.setSourceEntity(135U);
    msg.setDestination(34660U);
    msg.setDestinationEntity(25U);
    msg.op = 59U;
    msg.time_remain = 0.727365434997;
    msg.sched_time = 0.809881265677;

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
    msg.setTimeStamp(0.913054130486);
    msg.setSource(57426U);
    msg.setSourceEntity(125U);
    msg.setDestination(6512U);
    msg.setDestinationEntity(44U);
    msg.op = 184U;
    msg.time_remain = 0.0424847739349;
    msg.sched_time = 0.930360463128;

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
    msg.setTimeStamp(0.673508893762);
    msg.setSource(55811U);
    msg.setSourceEntity(28U);
    msg.setDestination(32321U);
    msg.setDestinationEntity(139U);
    msg.op = 96U;
    msg.time_remain = 0.260028307521;
    msg.sched_time = 0.615126655466;

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
    msg.setTimeStamp(0.0771021695394);
    msg.setSource(54687U);
    msg.setSourceEntity(107U);
    msg.setDestination(2955U);
    msg.setDestinationEntity(74U);
    msg.name.assign("LWYJPALARMEESBKNXDISLYZPEFFBAWBYDCCLDOLWQOTWREHPJMZJQVILHDWAYCVLNCUKEYHKXROXBMGBICVXWCSGKTJMMUKXBNSLNIIMFUGJAFDUZOGRPYEMFGZPVFVEZTQNPUMQO");
    msg.op = 146U;
    msg.sched_time = 0.8121711611;

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
    msg.setTimeStamp(0.726756806779);
    msg.setSource(20074U);
    msg.setSourceEntity(217U);
    msg.setDestination(13454U);
    msg.setDestinationEntity(182U);
    msg.name.assign("VPRBJCFKOCKXMDEUPYASRURQBAVENTENDQAYAIZIBTQALQXMHPHPLXOTXFVHS");
    msg.op = 211U;
    msg.sched_time = 0.85106796337;

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
    msg.setTimeStamp(0.0933866561913);
    msg.setSource(3239U);
    msg.setSourceEntity(88U);
    msg.setDestination(39144U);
    msg.setDestinationEntity(138U);
    msg.name.assign("GNSGQMRVYFIGCCXCWMTBMYIRWSFRVOXNPLOFLONOIXAVZSJIPUGOHUZFTKHMIMBBDGLGJIXMOEPZE");
    msg.op = 87U;
    msg.sched_time = 0.548827152116;

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
    msg.setTimeStamp(0.994482676048);
    msg.setSource(43865U);
    msg.setSourceEntity(41U);
    msg.setDestination(9712U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.621643356688);
    msg.setSource(45837U);
    msg.setSourceEntity(167U);
    msg.setDestination(29433U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.069706088374);
    msg.setSource(34418U);
    msg.setSourceEntity(21U);
    msg.setDestination(41678U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.527158893863);
    msg.setSource(35304U);
    msg.setSourceEntity(206U);
    msg.setDestination(52863U);
    msg.setDestinationEntity(236U);
    msg.name.assign("OWBVTWNIOLJXTANAUYCGUWZINCMKHDVSGDKXAOLHMKWAQMV");
    msg.state = 12U;

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
    msg.setTimeStamp(0.667857218678);
    msg.setSource(42949U);
    msg.setSourceEntity(198U);
    msg.setDestination(57910U);
    msg.setDestinationEntity(27U);
    msg.name.assign("AKJDUZGSJHCBFHHGWDYITJPMZGLRVBEMBWXALKTSCQVCUEEN");
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
    msg.setTimeStamp(0.502939724699);
    msg.setSource(38945U);
    msg.setSourceEntity(102U);
    msg.setDestination(29635U);
    msg.setDestinationEntity(200U);
    msg.name.assign("BCXMLNXITTDIEGNPIXMELBWGWQJUIKKFHUCZHVJFTJVVFDJJTYASDAQYZIDQCQTMLTXNWBRWFUCWWSRLLUVQZXOHZAYSFZZGAIKQBLGGTTZSQNKRYJAKVUMNWLOHAOBXPPYKEFCGSUEOWNXPYQPYVOSMXPJOEVDWMIMYYDRRBXGCORGHKFZOHCNRCEEIHJVTHSRUQENDOGVBSRAKMFUKBJPYBNZZPLEHPFJXCQLBAURDMIPWVOSL");
    msg.state = 126U;

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
    msg.setTimeStamp(0.334623971768);
    msg.setSource(15554U);
    msg.setSourceEntity(100U);
    msg.setDestination(49048U);
    msg.setDestinationEntity(14U);
    msg.name.assign("ALHODIZUBEHAJBTKMLQLGAPZHRJKQDIGRGJWQJSAEKNVDWLZZK");
    msg.value = 225U;

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
    msg.setTimeStamp(0.754176010059);
    msg.setSource(29307U);
    msg.setSourceEntity(185U);
    msg.setDestination(17303U);
    msg.setDestinationEntity(208U);
    msg.name.assign("UZDYQGIOEOHNXLXJPUJKRVXBXFXAXZGSQHYSOLSNGVZBCJSPGREJNTAOMLAQESDQDWKVZLDWTCCTYMCHYBFRQVGODAIFJWRPWDHWLUAMTYEHVLVUFZMHISCAWSMKNCRJDNOMIRHLENJCBOPFAATSTUIHPREKVYDPXIPKLAFVUXMBETIINQLZHQYDGQYPACGFLBSYRZTKBDMUGBIWXRVFT");
    msg.value = 116U;

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
    msg.setTimeStamp(0.869668300765);
    msg.setSource(48273U);
    msg.setSourceEntity(16U);
    msg.setDestination(34468U);
    msg.setDestinationEntity(87U);
    msg.name.assign("YDPOIJBWFQAKVMEKCFSIPGRSVXKUEMQAVBCUZYVZKASCXSTWETLRFPTXRIFZFYRUWALEFTXBQWTZHSDSXMLMFCZTOYJKKMNJSVZLJGNWWSEBIVHQJAMCWNRRILGZGHZPBAIZGTYYKRMLONNYDMXMDCKSGNLTYEHVWPQUGDHNFCAXTJVBTIDN");
    msg.value = 24U;

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
    msg.setTimeStamp(0.915795966048);
    msg.setSource(58671U);
    msg.setSourceEntity(161U);
    msg.setDestination(53521U);
    msg.setDestinationEntity(47U);
    msg.name.assign("ALXUGFJQAXBYFUZUISCJBUZEKPTZSHTITZYBGWAEEEJLDQVPPWFHPVMYEWAWOTVFNQSYFHMKIMNIGSODRRMAHFFVEDMWAPPIXJVAZSTKXTYHWYOIGRBDCUVRIWSGPKOVCYDKZNXUUBKFRRQOTEVRZKGBQQUSRPTYLJANMKNXMROSCCWZCUDZHWDGENLTAMLOOQUNCXCOIFNKSLJHLP");

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
    msg.setTimeStamp(0.103158350201);
    msg.setSource(31670U);
    msg.setSourceEntity(186U);
    msg.setDestination(33967U);
    msg.setDestinationEntity(226U);
    msg.name.assign("WTKHJEBSZVZQVDAKNJEAGIHXJRPPPHZQVBRBPRJOAAXGTIGBJDHKRLRLQBMZLGIOJNXNFXOFIQVBXSZTYIWYEGFVIYVTRNMKCAPQUBMIXHVFADZPBMWGCEIZPFCCOUNNYFKUSFYDSROWGENXDKAOWGFRLTEHATHYYWJWTFCFCSUNYYIXTSSZILAZQRME");

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
    msg.setTimeStamp(0.719449543281);
    msg.setSource(4258U);
    msg.setSourceEntity(183U);
    msg.setDestination(23609U);
    msg.setDestinationEntity(77U);
    msg.name.assign("FYOENWKYHEDATIJNXKXGQMWMGRGRFJKSETEGAFIZRCBFNIRGMUYOOLAHIPDVLXSZJKCPXTXDXPTTQSHKJMYFHCOUQICBBNQQTLPTIWSDCSWOAZHXUQGCFCCZOQJSWQJYVHOEVNLEVDVSN");

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
    msg.setTimeStamp(0.721900587156);
    msg.setSource(19343U);
    msg.setSourceEntity(247U);
    msg.setDestination(36191U);
    msg.setDestinationEntity(76U);
    msg.name.assign("FRQTGIMGHMJFQYLRSCFAWNDTWZRBAQHFRT");
    msg.value = 49U;

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
    msg.setTimeStamp(0.258574349241);
    msg.setSource(22397U);
    msg.setSourceEntity(230U);
    msg.setDestination(59959U);
    msg.setDestinationEntity(234U);
    msg.name.assign("WWGJZYDAKUUBQVAJPJBRDAQWOIQAPLOSAZLIHKVHCPVXDCDXYQOJNIMCNNWTEKBYBTRUTFVDZRMNCUGCQRQOSBGLKMPK");
    msg.value = 30U;

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
    msg.setTimeStamp(0.624788476846);
    msg.setSource(31012U);
    msg.setSourceEntity(77U);
    msg.setDestination(19986U);
    msg.setDestinationEntity(74U);
    msg.name.assign("WANKOOKYVOHWLKH");
    msg.value = 110U;

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
    msg.setTimeStamp(0.382779947105);
    msg.setSource(22168U);
    msg.setSourceEntity(205U);
    msg.setDestination(51026U);
    msg.setDestinationEntity(92U);
    msg.id = 88U;
    msg.period = 3541042619U;
    msg.duty_cycle = 3554887416U;

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
    msg.setTimeStamp(0.818698897668);
    msg.setSource(17508U);
    msg.setSourceEntity(229U);
    msg.setDestination(47035U);
    msg.setDestinationEntity(171U);
    msg.id = 226U;
    msg.period = 2020999413U;
    msg.duty_cycle = 107764526U;

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
    msg.setTimeStamp(0.130409602403);
    msg.setSource(30190U);
    msg.setSourceEntity(154U);
    msg.setDestination(37132U);
    msg.setDestinationEntity(243U);
    msg.id = 59U;
    msg.period = 3363978933U;
    msg.duty_cycle = 778034209U;

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
    msg.setTimeStamp(0.991893540916);
    msg.setSource(43146U);
    msg.setSourceEntity(103U);
    msg.setDestination(1769U);
    msg.setDestinationEntity(100U);
    msg.id = 136U;
    msg.period = 3072360788U;
    msg.duty_cycle = 21731486U;

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
    msg.setTimeStamp(0.739930475936);
    msg.setSource(9440U);
    msg.setSourceEntity(140U);
    msg.setDestination(39615U);
    msg.setDestinationEntity(214U);
    msg.id = 242U;
    msg.period = 3511625011U;
    msg.duty_cycle = 3354534521U;

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
    msg.setTimeStamp(0.0840398256071);
    msg.setSource(22478U);
    msg.setSourceEntity(63U);
    msg.setDestination(30433U);
    msg.setDestinationEntity(240U);
    msg.id = 61U;
    msg.period = 2854833247U;
    msg.duty_cycle = 2432944564U;

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
    msg.setTimeStamp(0.836624620643);
    msg.setSource(36858U);
    msg.setSourceEntity(164U);
    msg.setDestination(59907U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.588233155787;
    msg.lon = 0.0378696913107;
    msg.height = 0.866115193002;
    msg.x = 0.693523670638;
    msg.y = 0.579368938037;
    msg.z = 0.62881544576;
    msg.phi = 0.0704848206376;
    msg.theta = 0.926305768933;
    msg.psi = 0.806846429647;
    msg.u = 0.881918112412;
    msg.v = 0.295671346569;
    msg.w = 0.623266652383;
    msg.vx = 0.416158027176;
    msg.vy = 0.878081043179;
    msg.vz = 0.442181266319;
    msg.p = 0.470155827172;
    msg.q = 0.912002221252;
    msg.r = 0.977197120042;
    msg.depth = 0.20512303668;
    msg.alt = 0.241124998204;

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
    msg.setTimeStamp(0.382936903608);
    msg.setSource(61805U);
    msg.setSourceEntity(93U);
    msg.setDestination(48289U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.88391489318;
    msg.lon = 0.948561011893;
    msg.height = 0.949981656884;
    msg.x = 0.643599821009;
    msg.y = 0.13383297229;
    msg.z = 0.377072108378;
    msg.phi = 0.469801389893;
    msg.theta = 0.718164141907;
    msg.psi = 0.341375181639;
    msg.u = 0.656941744528;
    msg.v = 0.759807923281;
    msg.w = 0.080912715769;
    msg.vx = 0.0734424906912;
    msg.vy = 0.0291865241443;
    msg.vz = 0.739676895075;
    msg.p = 0.132286007199;
    msg.q = 0.405410547234;
    msg.r = 0.350624513529;
    msg.depth = 0.72062811425;
    msg.alt = 0.50934379399;

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
    msg.setTimeStamp(0.502188413618);
    msg.setSource(12028U);
    msg.setSourceEntity(163U);
    msg.setDestination(31878U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.842839435349;
    msg.lon = 0.532158905538;
    msg.height = 0.322225211786;
    msg.x = 0.9960581286;
    msg.y = 0.665323394075;
    msg.z = 0.649248391304;
    msg.phi = 0.592200648337;
    msg.theta = 0.794185109109;
    msg.psi = 0.680084256775;
    msg.u = 0.407623801543;
    msg.v = 0.133139765855;
    msg.w = 0.734933237378;
    msg.vx = 0.702536273595;
    msg.vy = 0.976311233523;
    msg.vz = 0.0164945885646;
    msg.p = 0.327283928848;
    msg.q = 0.202171569907;
    msg.r = 0.664343316346;
    msg.depth = 0.630732639881;
    msg.alt = 0.826630975989;

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
    msg.setTimeStamp(0.883475248318);
    msg.setSource(55327U);
    msg.setSourceEntity(3U);
    msg.setDestination(5547U);
    msg.setDestinationEntity(166U);
    msg.x = 0.859696587719;
    msg.y = 0.923580405404;
    msg.z = 0.536041864946;

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
    msg.setTimeStamp(0.027849318579);
    msg.setSource(48601U);
    msg.setSourceEntity(119U);
    msg.setDestination(49725U);
    msg.setDestinationEntity(95U);
    msg.x = 0.678787535518;
    msg.y = 0.856383272641;
    msg.z = 0.683665038545;

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
    msg.setTimeStamp(0.347569055728);
    msg.setSource(4189U);
    msg.setSourceEntity(236U);
    msg.setDestination(35541U);
    msg.setDestinationEntity(106U);
    msg.x = 0.722451704732;
    msg.y = 0.498215680077;
    msg.z = 0.686837366007;

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
    msg.setTimeStamp(0.454679674419);
    msg.setSource(42813U);
    msg.setSourceEntity(108U);
    msg.setDestination(48310U);
    msg.setDestinationEntity(14U);
    msg.value = 0.091664734656;

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
    msg.setTimeStamp(0.909563103612);
    msg.setSource(63696U);
    msg.setSourceEntity(80U);
    msg.setDestination(8805U);
    msg.setDestinationEntity(173U);
    msg.value = 0.980689069278;

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
    msg.setTimeStamp(0.501616172302);
    msg.setSource(31363U);
    msg.setSourceEntity(89U);
    msg.setDestination(30953U);
    msg.setDestinationEntity(88U);
    msg.value = 0.831021542578;

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
    msg.setTimeStamp(0.302550756097);
    msg.setSource(34988U);
    msg.setSourceEntity(186U);
    msg.setDestination(8043U);
    msg.setDestinationEntity(192U);
    msg.value = 0.206274342458;

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
    msg.setTimeStamp(0.838201206986);
    msg.setSource(4286U);
    msg.setSourceEntity(60U);
    msg.setDestination(51290U);
    msg.setDestinationEntity(49U);
    msg.value = 0.57505090455;

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
    msg.setTimeStamp(0.30592710394);
    msg.setSource(30646U);
    msg.setSourceEntity(236U);
    msg.setDestination(47153U);
    msg.setDestinationEntity(129U);
    msg.value = 0.838513382782;

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
    msg.setTimeStamp(0.834968478887);
    msg.setSource(1372U);
    msg.setSourceEntity(55U);
    msg.setDestination(25333U);
    msg.setDestinationEntity(229U);
    msg.x = 0.708629399575;
    msg.y = 0.64440593016;
    msg.z = 0.0647454627156;
    msg.phi = 0.636331869131;
    msg.theta = 0.102143727992;
    msg.psi = 0.220908253434;
    msg.p = 0.612858412008;
    msg.q = 0.884822645177;
    msg.r = 0.384895227839;
    msg.u = 0.269581793481;
    msg.v = 0.0264121151166;
    msg.w = 0.186568142321;
    msg.bias_psi = 0.846723412799;
    msg.bias_r = 0.661012188836;

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
    msg.setTimeStamp(0.922988219372);
    msg.setSource(40739U);
    msg.setSourceEntity(204U);
    msg.setDestination(48434U);
    msg.setDestinationEntity(66U);
    msg.x = 0.339267043656;
    msg.y = 0.510193698131;
    msg.z = 0.907728161903;
    msg.phi = 0.931170382477;
    msg.theta = 0.625499070075;
    msg.psi = 0.335251940936;
    msg.p = 0.243034907268;
    msg.q = 0.200482036889;
    msg.r = 0.458358416771;
    msg.u = 0.150028670556;
    msg.v = 0.888220449122;
    msg.w = 0.0185536222549;
    msg.bias_psi = 0.681494436812;
    msg.bias_r = 0.926854278973;

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
    msg.setTimeStamp(0.344441997944);
    msg.setSource(5994U);
    msg.setSourceEntity(52U);
    msg.setDestination(38187U);
    msg.setDestinationEntity(69U);
    msg.x = 0.00986624701008;
    msg.y = 0.332243497389;
    msg.z = 0.428517817881;
    msg.phi = 0.717316872037;
    msg.theta = 0.0683605941932;
    msg.psi = 0.0407029452539;
    msg.p = 0.34938176022;
    msg.q = 0.7529444881;
    msg.r = 0.871280620381;
    msg.u = 0.203104537736;
    msg.v = 0.0503793768024;
    msg.w = 0.703950022617;
    msg.bias_psi = 0.911534887423;
    msg.bias_r = 0.036352920847;

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
    msg.setTimeStamp(0.972324689984);
    msg.setSource(28026U);
    msg.setSourceEntity(212U);
    msg.setDestination(26810U);
    msg.setDestinationEntity(219U);
    msg.bias_psi = 0.122631550197;
    msg.bias_r = 0.47097301875;
    msg.cog = 0.0542495700727;
    msg.cyaw = 0.0579074277928;
    msg.lbl_rej_level = 0.620885370762;
    msg.gps_rej_level = 0.532332521143;
    msg.custom_x = 0.714455607872;
    msg.custom_y = 0.00347108817487;
    msg.custom_z = 0.982114104582;

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
    msg.setTimeStamp(0.121858767851);
    msg.setSource(9354U);
    msg.setSourceEntity(30U);
    msg.setDestination(12872U);
    msg.setDestinationEntity(44U);
    msg.bias_psi = 0.694663094776;
    msg.bias_r = 0.869249115899;
    msg.cog = 0.421702879857;
    msg.cyaw = 0.818460459891;
    msg.lbl_rej_level = 0.532659846466;
    msg.gps_rej_level = 0.243767814286;
    msg.custom_x = 0.427933518718;
    msg.custom_y = 0.353071971673;
    msg.custom_z = 0.180656985251;

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
    msg.setTimeStamp(0.481598796356);
    msg.setSource(42085U);
    msg.setSourceEntity(190U);
    msg.setDestination(23388U);
    msg.setDestinationEntity(227U);
    msg.bias_psi = 0.0664640617435;
    msg.bias_r = 0.285789808593;
    msg.cog = 0.00694720599657;
    msg.cyaw = 0.854386226282;
    msg.lbl_rej_level = 0.867279167819;
    msg.gps_rej_level = 0.537889193453;
    msg.custom_x = 0.0876222641666;
    msg.custom_y = 0.115584623797;
    msg.custom_z = 0.407471769859;

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
    msg.setTimeStamp(0.00287035806439);
    msg.setSource(12808U);
    msg.setSourceEntity(142U);
    msg.setDestination(35349U);
    msg.setDestinationEntity(125U);
    msg.utc_time = 0.724676644781;
    msg.reason = 18U;

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
    msg.setTimeStamp(0.968066357606);
    msg.setSource(42974U);
    msg.setSourceEntity(32U);
    msg.setDestination(1262U);
    msg.setDestinationEntity(34U);
    msg.utc_time = 0.640122443756;
    msg.reason = 54U;

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
    msg.setTimeStamp(0.0078703951099);
    msg.setSource(12515U);
    msg.setSourceEntity(174U);
    msg.setDestination(42631U);
    msg.setDestinationEntity(125U);
    msg.utc_time = 0.314059523062;
    msg.reason = 11U;

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
    msg.setTimeStamp(0.133804277456);
    msg.setSource(25810U);
    msg.setSourceEntity(201U);
    msg.setDestination(4941U);
    msg.setDestinationEntity(228U);
    msg.id = 93U;
    msg.range = 0.668989542606;
    msg.acceptance = 124U;

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
    msg.setTimeStamp(0.373345747663);
    msg.setSource(25812U);
    msg.setSourceEntity(215U);
    msg.setDestination(22190U);
    msg.setDestinationEntity(158U);
    msg.id = 222U;
    msg.range = 0.157616559472;
    msg.acceptance = 146U;

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
    msg.setTimeStamp(0.308464314782);
    msg.setSource(3088U);
    msg.setSourceEntity(2U);
    msg.setDestination(32787U);
    msg.setDestinationEntity(137U);
    msg.id = 110U;
    msg.range = 0.898334412822;
    msg.acceptance = 152U;

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
    msg.setTimeStamp(0.136266445851);
    msg.setSource(50185U);
    msg.setSourceEntity(47U);
    msg.setDestination(5955U);
    msg.setDestinationEntity(57U);
    msg.type = 0U;
    msg.reason = 30U;
    msg.value = 0.512703467067;
    msg.timestep = 0.638784974119;

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
    msg.setTimeStamp(0.949735855819);
    msg.setSource(41965U);
    msg.setSourceEntity(88U);
    msg.setDestination(13957U);
    msg.setDestinationEntity(183U);
    msg.type = 88U;
    msg.reason = 238U;
    msg.value = 0.401057795315;
    msg.timestep = 0.667230422975;

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
    msg.setTimeStamp(0.548304476502);
    msg.setSource(19496U);
    msg.setSourceEntity(14U);
    msg.setDestination(51759U);
    msg.setDestinationEntity(249U);
    msg.type = 63U;
    msg.reason = 153U;
    msg.value = 0.722238697982;
    msg.timestep = 0.198647134145;

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
    msg.setTimeStamp(0.40831469064);
    msg.setSource(25706U);
    msg.setSourceEntity(227U);
    msg.setDestination(41811U);
    msg.setDestinationEntity(6U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ITCCWHLOGHDMBXXNWNTEYSFOKLYMQTZMHWFEWLLGWGDSEAUPMTVGVKRSRZNUEKDGAOSUUPTXAEVKKKQCODZIJWBIAIYWRNSXSHMPJBGOMUXCFHPEUJCOIWSCTXEZIYKJZDAYLQYZZVUHPXAFZTJTGNTIUADJBMXKJRKUMGJPXBHDBOGOYLBIYTWOCMJGBFFVNQQLQCFRUNCLVQNWDRBSVMJOARXEZZPVEDHRIPNLLSCAREHPYPQQQFNFAIYKH");
    tmp_msg_0.lat = 0.724171776638;
    tmp_msg_0.lon = 0.798067143035;
    tmp_msg_0.depth = 0.227181319206;
    tmp_msg_0.query_channel = 59U;
    tmp_msg_0.reply_channel = 101U;
    tmp_msg_0.transponder_delay = 164U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.569951858401;
    msg.y = 0.0582587012083;
    msg.var_x = 0.47868395799;
    msg.var_y = 0.951951909781;
    msg.distance = 0.193900715913;

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
    msg.setTimeStamp(0.418137074846);
    msg.setSource(35180U);
    msg.setSourceEntity(136U);
    msg.setDestination(18015U);
    msg.setDestinationEntity(25U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SAIYOUTRTFXBNLRTXYNGENROKXQEDCXVBINSCZFOEDZPVPEZKQUFWJLYWUPDFKVKNTVKYVXGVYMELUMQETSLMSZOZEBHGQLHLJRPYJTTFACWAWQSCMBWHYNQDZKVFDTXKUFMYKGHESJZUBWRBPUCQQRIFWCWUTOPDGAHJEVGMDPYMIOOA");
    tmp_msg_0.lat = 0.281592214277;
    tmp_msg_0.lon = 0.528129420208;
    tmp_msg_0.depth = 0.796201945179;
    tmp_msg_0.query_channel = 17U;
    tmp_msg_0.reply_channel = 56U;
    tmp_msg_0.transponder_delay = 130U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.207891072714;
    msg.y = 0.585909393091;
    msg.var_x = 0.0682539569828;
    msg.var_y = 0.061573643251;
    msg.distance = 0.505842461095;

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
    msg.setTimeStamp(0.861898529296);
    msg.setSource(7744U);
    msg.setSourceEntity(77U);
    msg.setDestination(28182U);
    msg.setDestinationEntity(197U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VTPRJJUERWMINTRJCNXFZFMLSCDHHOCYMNEWVWXPQKWAIPJELRFCGBGESRUBNVGQMYAEBNAFEHFQWBBZCTQDZDKJGMNGZOMXWVGBEJSULHMTBQYICCUDEJQKHWXVHYNCZMFYRTXPQUGVOLGMPZSYAOPOZTBIKWPIHNOJFNCOAKMOBDLLTRFXSVLIDXFPKLSOZBXKKRIUQRRVQXKUGE");
    tmp_msg_0.lat = 0.636015325495;
    tmp_msg_0.lon = 0.601203127859;
    tmp_msg_0.depth = 0.934214615689;
    tmp_msg_0.query_channel = 126U;
    tmp_msg_0.reply_channel = 248U;
    tmp_msg_0.transponder_delay = 237U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.147365655193;
    msg.y = 0.873119108978;
    msg.var_x = 0.0172497833036;
    msg.var_y = 0.142391222714;
    msg.distance = 0.837395378847;

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
    msg.setTimeStamp(0.181437866674);
    msg.setSource(9533U);
    msg.setSourceEntity(55U);
    msg.setDestination(18722U);
    msg.setDestinationEntity(170U);
    msg.state = 19U;

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
    msg.setTimeStamp(0.314780644443);
    msg.setSource(15547U);
    msg.setSourceEntity(254U);
    msg.setDestination(39322U);
    msg.setDestinationEntity(150U);
    msg.state = 116U;

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
    msg.setTimeStamp(0.876889863301);
    msg.setSource(9911U);
    msg.setSourceEntity(91U);
    msg.setDestination(11153U);
    msg.setDestinationEntity(251U);
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
    msg.setTimeStamp(0.6937442695);
    msg.setSource(40353U);
    msg.setSourceEntity(190U);
    msg.setDestination(5904U);
    msg.setDestinationEntity(158U);
    msg.x = 0.954866556314;
    msg.y = 0.46728110555;
    msg.z = 0.0867534227458;

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
    msg.setTimeStamp(0.188982987686);
    msg.setSource(28687U);
    msg.setSourceEntity(103U);
    msg.setDestination(11446U);
    msg.setDestinationEntity(71U);
    msg.x = 0.868451542692;
    msg.y = 0.539824816185;
    msg.z = 0.163192437225;

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
    msg.setTimeStamp(0.511413491343);
    msg.setSource(53217U);
    msg.setSourceEntity(105U);
    msg.setDestination(29162U);
    msg.setDestinationEntity(29U);
    msg.x = 0.41529497794;
    msg.y = 0.473968942054;
    msg.z = 0.162024568372;

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
    msg.setTimeStamp(0.00217712345065);
    msg.setSource(56745U);
    msg.setSourceEntity(21U);
    msg.setDestination(29137U);
    msg.setDestinationEntity(209U);
    msg.va = 0.846237447968;
    msg.aoa = 0.347852308456;
    msg.ssa = 0.697029927475;

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
    msg.setTimeStamp(0.986422149707);
    msg.setSource(45856U);
    msg.setSourceEntity(216U);
    msg.setDestination(65444U);
    msg.setDestinationEntity(129U);
    msg.va = 0.54129122737;
    msg.aoa = 0.294203752142;
    msg.ssa = 0.557012788516;

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
    msg.setTimeStamp(0.59046834851);
    msg.setSource(61517U);
    msg.setSourceEntity(97U);
    msg.setDestination(12956U);
    msg.setDestinationEntity(159U);
    msg.va = 0.418116891122;
    msg.aoa = 0.632104566802;
    msg.ssa = 0.874129657524;

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
    msg.setTimeStamp(0.300391995374);
    msg.setSource(14504U);
    msg.setSourceEntity(163U);
    msg.setDestination(24185U);
    msg.setDestinationEntity(148U);
    msg.value = 0.895020530203;

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
    msg.setTimeStamp(0.928352925685);
    msg.setSource(64977U);
    msg.setSourceEntity(96U);
    msg.setDestination(6060U);
    msg.setDestinationEntity(154U);
    msg.value = 0.949455414359;

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
    msg.setTimeStamp(0.926505067406);
    msg.setSource(59997U);
    msg.setSourceEntity(221U);
    msg.setDestination(31141U);
    msg.setDestinationEntity(193U);
    msg.value = 0.815019171695;

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
    msg.setTimeStamp(0.594910804376);
    msg.setSource(54615U);
    msg.setSourceEntity(249U);
    msg.setDestination(63887U);
    msg.setDestinationEntity(105U);
    msg.value = 0.911950718328;
    msg.z_units = 247U;

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
    msg.setTimeStamp(0.843989739139);
    msg.setSource(29833U);
    msg.setSourceEntity(33U);
    msg.setDestination(64766U);
    msg.setDestinationEntity(20U);
    msg.value = 0.505853280452;
    msg.z_units = 196U;

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
    msg.setTimeStamp(0.243414424011);
    msg.setSource(16660U);
    msg.setSourceEntity(222U);
    msg.setDestination(7995U);
    msg.setDestinationEntity(10U);
    msg.value = 0.66652899879;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.246461669068);
    msg.setSource(3198U);
    msg.setSourceEntity(104U);
    msg.setDestination(8364U);
    msg.setDestinationEntity(55U);
    msg.value = 0.62329198728;
    msg.speed_units = 15U;

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
    msg.setTimeStamp(0.115404906378);
    msg.setSource(1152U);
    msg.setSourceEntity(112U);
    msg.setDestination(25861U);
    msg.setDestinationEntity(192U);
    msg.value = 0.0995753739007;
    msg.speed_units = 110U;

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
    msg.setTimeStamp(0.624994662662);
    msg.setSource(54593U);
    msg.setSourceEntity(101U);
    msg.setDestination(64821U);
    msg.setDestinationEntity(170U);
    msg.value = 0.946172045341;
    msg.speed_units = 192U;

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
    msg.setTimeStamp(0.740726392072);
    msg.setSource(3885U);
    msg.setSourceEntity(215U);
    msg.setDestination(42832U);
    msg.setDestinationEntity(183U);
    msg.value = 0.706556887392;

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
    msg.setTimeStamp(0.483467660556);
    msg.setSource(30251U);
    msg.setSourceEntity(130U);
    msg.setDestination(32197U);
    msg.setDestinationEntity(172U);
    msg.value = 0.24275911903;

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
    msg.setTimeStamp(0.812503891468);
    msg.setSource(35326U);
    msg.setSourceEntity(18U);
    msg.setDestination(3014U);
    msg.setDestinationEntity(50U);
    msg.value = 0.865825231415;

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
    msg.setTimeStamp(0.529773823162);
    msg.setSource(41563U);
    msg.setSourceEntity(108U);
    msg.setDestination(15878U);
    msg.setDestinationEntity(71U);
    msg.value = 0.14548294613;

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
    msg.setTimeStamp(0.507798098926);
    msg.setSource(6801U);
    msg.setSourceEntity(164U);
    msg.setDestination(31138U);
    msg.setDestinationEntity(245U);
    msg.value = 0.773502039905;

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
    msg.setTimeStamp(0.471162026829);
    msg.setSource(40486U);
    msg.setSourceEntity(55U);
    msg.setDestination(22999U);
    msg.setDestinationEntity(202U);
    msg.value = 0.611902432272;

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
    msg.setTimeStamp(0.477557181983);
    msg.setSource(58828U);
    msg.setSourceEntity(8U);
    msg.setDestination(9717U);
    msg.setDestinationEntity(95U);
    msg.value = 0.0590055539132;

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
    msg.setTimeStamp(0.493556365649);
    msg.setSource(45941U);
    msg.setSourceEntity(243U);
    msg.setDestination(1557U);
    msg.setDestinationEntity(119U);
    msg.value = 0.798988029549;

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
    msg.setTimeStamp(0.243434420347);
    msg.setSource(37633U);
    msg.setSourceEntity(233U);
    msg.setDestination(37639U);
    msg.setDestinationEntity(213U);
    msg.value = 0.321972150742;

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
    msg.setTimeStamp(0.0380928798752);
    msg.setSource(32696U);
    msg.setSourceEntity(26U);
    msg.setDestination(45380U);
    msg.setDestinationEntity(114U);
    msg.path_ref = 4216051037U;
    msg.start_lat = 0.218783889361;
    msg.start_lon = 0.727608784811;
    msg.start_z = 0.0977961361318;
    msg.start_z_units = 153U;
    msg.end_lat = 0.195687058345;
    msg.end_lon = 0.270926553812;
    msg.end_z = 0.311570371122;
    msg.end_z_units = 43U;
    msg.speed = 0.550769146642;
    msg.speed_units = 228U;
    msg.lradius = 0.294390482317;
    msg.flags = 185U;

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
    msg.setTimeStamp(0.323980516081);
    msg.setSource(49785U);
    msg.setSourceEntity(175U);
    msg.setDestination(27060U);
    msg.setDestinationEntity(43U);
    msg.path_ref = 1867992548U;
    msg.start_lat = 0.898639293702;
    msg.start_lon = 0.4046249994;
    msg.start_z = 0.74585186882;
    msg.start_z_units = 165U;
    msg.end_lat = 0.426476255303;
    msg.end_lon = 0.644649850578;
    msg.end_z = 0.753481322539;
    msg.end_z_units = 179U;
    msg.speed = 0.118100371179;
    msg.speed_units = 64U;
    msg.lradius = 0.518313154906;
    msg.flags = 56U;

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
    msg.setTimeStamp(0.726293217953);
    msg.setSource(50814U);
    msg.setSourceEntity(140U);
    msg.setDestination(23370U);
    msg.setDestinationEntity(182U);
    msg.path_ref = 1535680144U;
    msg.start_lat = 0.025211596212;
    msg.start_lon = 0.944618573417;
    msg.start_z = 0.745834403431;
    msg.start_z_units = 32U;
    msg.end_lat = 0.930647551172;
    msg.end_lon = 0.626249872021;
    msg.end_z = 0.192714516593;
    msg.end_z_units = 143U;
    msg.speed = 0.785297675557;
    msg.speed_units = 229U;
    msg.lradius = 0.215132209453;
    msg.flags = 124U;

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
    msg.setTimeStamp(0.0104399147371);
    msg.setSource(61336U);
    msg.setSourceEntity(200U);
    msg.setDestination(54794U);
    msg.setDestinationEntity(179U);
    msg.x = 0.464442519215;
    msg.y = 0.492662276311;
    msg.z = 0.198804956615;
    msg.k = 0.423381336611;
    msg.m = 0.0202212330561;
    msg.n = 0.511522959961;
    msg.flags = 122U;

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
    msg.setTimeStamp(0.490284687715);
    msg.setSource(42595U);
    msg.setSourceEntity(190U);
    msg.setDestination(44123U);
    msg.setDestinationEntity(169U);
    msg.x = 0.120102316531;
    msg.y = 0.78464856979;
    msg.z = 0.541730178307;
    msg.k = 0.953417527323;
    msg.m = 0.16470284693;
    msg.n = 0.683057566949;
    msg.flags = 27U;

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
    msg.setTimeStamp(0.386928561075);
    msg.setSource(9432U);
    msg.setSourceEntity(209U);
    msg.setDestination(26948U);
    msg.setDestinationEntity(85U);
    msg.x = 0.776508666681;
    msg.y = 0.728444931014;
    msg.z = 0.0134091654658;
    msg.k = 0.475008058148;
    msg.m = 0.678471964871;
    msg.n = 0.753692040515;
    msg.flags = 136U;

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
    msg.setTimeStamp(0.428035031343);
    msg.setSource(36844U);
    msg.setSourceEntity(136U);
    msg.setDestination(54214U);
    msg.setDestinationEntity(45U);
    msg.value = 0.927665040135;

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
    msg.setTimeStamp(0.997118697346);
    msg.setSource(59004U);
    msg.setSourceEntity(224U);
    msg.setDestination(4450U);
    msg.setDestinationEntity(132U);
    msg.value = 0.477571758751;

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
    msg.setTimeStamp(0.0489122179278);
    msg.setSource(21515U);
    msg.setSourceEntity(147U);
    msg.setDestination(37220U);
    msg.setDestinationEntity(152U);
    msg.value = 0.526309286;

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
    msg.setTimeStamp(0.144251933284);
    msg.setSource(31295U);
    msg.setSourceEntity(142U);
    msg.setDestination(20130U);
    msg.setDestinationEntity(175U);
    msg.u = 0.0324699309297;
    msg.v = 0.901050608393;
    msg.w = 0.307726246444;
    msg.p = 0.160992459742;
    msg.q = 0.266472390752;
    msg.r = 0.13810311207;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.61004502097);
    msg.setSource(57920U);
    msg.setSourceEntity(222U);
    msg.setDestination(47361U);
    msg.setDestinationEntity(174U);
    msg.u = 0.178073756286;
    msg.v = 0.318058923382;
    msg.w = 0.291649329514;
    msg.p = 0.948351948615;
    msg.q = 0.400537771721;
    msg.r = 0.964046944813;
    msg.flags = 129U;

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
    msg.setTimeStamp(0.64345527536);
    msg.setSource(53745U);
    msg.setSourceEntity(54U);
    msg.setDestination(64507U);
    msg.setDestinationEntity(252U);
    msg.u = 0.642842630193;
    msg.v = 0.514624862235;
    msg.w = 0.610515143655;
    msg.p = 0.997315753803;
    msg.q = 0.87414509577;
    msg.r = 0.972643890342;
    msg.flags = 253U;

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
    msg.setTimeStamp(0.771970571953);
    msg.setSource(60934U);
    msg.setSourceEntity(1U);
    msg.setDestination(65350U);
    msg.setDestinationEntity(123U);
    msg.path_ref = 2283736703U;
    msg.start_lat = 0.0828821370479;
    msg.start_lon = 0.857291508292;
    msg.start_z = 0.740028168754;
    msg.start_z_units = 121U;
    msg.end_lat = 0.949610468734;
    msg.end_lon = 0.966254088583;
    msg.end_z = 0.34629051915;
    msg.end_z_units = 84U;
    msg.lradius = 0.765302642606;
    msg.flags = 38U;
    msg.x = 0.904458967843;
    msg.y = 0.158407404228;
    msg.z = 0.262786746135;
    msg.vx = 0.452835217166;
    msg.vy = 0.8515498328;
    msg.vz = 0.159179947879;
    msg.course_error = 0.871073703881;
    msg.eta = 12524U;

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
    msg.setTimeStamp(0.216023144297);
    msg.setSource(27256U);
    msg.setSourceEntity(17U);
    msg.setDestination(28725U);
    msg.setDestinationEntity(48U);
    msg.path_ref = 2550891437U;
    msg.start_lat = 0.134640151367;
    msg.start_lon = 0.691386744125;
    msg.start_z = 0.304292228599;
    msg.start_z_units = 114U;
    msg.end_lat = 0.121766137593;
    msg.end_lon = 0.120209774931;
    msg.end_z = 0.45538132262;
    msg.end_z_units = 27U;
    msg.lradius = 0.369500823615;
    msg.flags = 95U;
    msg.x = 0.226019694065;
    msg.y = 0.273971291013;
    msg.z = 0.201970600828;
    msg.vx = 0.206059876815;
    msg.vy = 0.0121472239761;
    msg.vz = 0.560615439486;
    msg.course_error = 0.545693758705;
    msg.eta = 50455U;

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
    msg.setTimeStamp(0.206185361617);
    msg.setSource(35868U);
    msg.setSourceEntity(142U);
    msg.setDestination(28404U);
    msg.setDestinationEntity(95U);
    msg.path_ref = 471283836U;
    msg.start_lat = 0.634579008127;
    msg.start_lon = 0.87746829373;
    msg.start_z = 0.417665306888;
    msg.start_z_units = 160U;
    msg.end_lat = 0.400594419036;
    msg.end_lon = 0.194710966462;
    msg.end_z = 0.768385899947;
    msg.end_z_units = 241U;
    msg.lradius = 0.951847529727;
    msg.flags = 179U;
    msg.x = 0.878596524956;
    msg.y = 0.616707144339;
    msg.z = 0.193269521799;
    msg.vx = 0.904866220344;
    msg.vy = 0.27050668514;
    msg.vz = 0.737913846052;
    msg.course_error = 0.790881341713;
    msg.eta = 3958U;

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
    msg.setTimeStamp(0.365745299989);
    msg.setSource(56090U);
    msg.setSourceEntity(74U);
    msg.setDestination(41904U);
    msg.setDestinationEntity(108U);
    msg.k = 0.149652742069;
    msg.m = 0.709414030692;
    msg.n = 0.590613342731;

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
    msg.setTimeStamp(0.201835644427);
    msg.setSource(37476U);
    msg.setSourceEntity(180U);
    msg.setDestination(59752U);
    msg.setDestinationEntity(100U);
    msg.k = 0.155482230722;
    msg.m = 0.84175532031;
    msg.n = 0.348771070428;

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
    msg.setTimeStamp(0.614291175907);
    msg.setSource(65516U);
    msg.setSourceEntity(216U);
    msg.setDestination(26265U);
    msg.setDestinationEntity(238U);
    msg.k = 0.492259919844;
    msg.m = 0.246515553798;
    msg.n = 0.472003290325;

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
    msg.setTimeStamp(0.885627558324);
    msg.setSource(4220U);
    msg.setSourceEntity(9U);
    msg.setDestination(29838U);
    msg.setDestinationEntity(150U);
    msg.p = 0.98698676142;
    msg.i = 0.797561040909;
    msg.d = 0.892753614684;
    msg.a = 0.580794068346;

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
    msg.setTimeStamp(0.602306772567);
    msg.setSource(15052U);
    msg.setSourceEntity(36U);
    msg.setDestination(64970U);
    msg.setDestinationEntity(244U);
    msg.p = 0.178819188868;
    msg.i = 0.252473167498;
    msg.d = 0.726049003629;
    msg.a = 0.178839635821;

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
    msg.setTimeStamp(0.247680100149);
    msg.setSource(38592U);
    msg.setSourceEntity(25U);
    msg.setDestination(43182U);
    msg.setDestinationEntity(186U);
    msg.p = 0.719038448763;
    msg.i = 0.495838891091;
    msg.d = 0.353049174642;
    msg.a = 0.952612418711;

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
    msg.setTimeStamp(0.168655067479);
    msg.setSource(39916U);
    msg.setSourceEntity(126U);
    msg.setDestination(3369U);
    msg.setDestinationEntity(15U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.854303876154);
    msg.setSource(41430U);
    msg.setSourceEntity(40U);
    msg.setDestination(46594U);
    msg.setDestinationEntity(124U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.789531061187);
    msg.setSource(2629U);
    msg.setSourceEntity(72U);
    msg.setDestination(19290U);
    msg.setDestinationEntity(142U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.977771965671);
    msg.setSource(49260U);
    msg.setSourceEntity(64U);
    msg.setDestination(38040U);
    msg.setDestinationEntity(239U);
    msg.x = 0.735380470707;
    msg.y = 0.553004497857;
    msg.z = 0.883462856742;
    msg.vx = 0.631213098798;
    msg.vy = 0.545781226664;
    msg.vz = 0.470206940436;
    msg.ax = 0.505562498628;
    msg.ay = 0.77174721015;
    msg.az = 0.693911183597;
    msg.flags = 24441U;

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
    msg.setTimeStamp(0.937017615078);
    msg.setSource(53360U);
    msg.setSourceEntity(54U);
    msg.setDestination(41002U);
    msg.setDestinationEntity(32U);
    msg.x = 0.811257427617;
    msg.y = 0.71211945932;
    msg.z = 0.263572022078;
    msg.vx = 0.4891794172;
    msg.vy = 0.586982517254;
    msg.vz = 0.950053223683;
    msg.ax = 0.778249228986;
    msg.ay = 0.563676071501;
    msg.az = 0.643995685523;
    msg.flags = 42836U;

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
    msg.setTimeStamp(0.731013363261);
    msg.setSource(15659U);
    msg.setSourceEntity(101U);
    msg.setDestination(19083U);
    msg.setDestinationEntity(168U);
    msg.x = 0.376564393104;
    msg.y = 0.513568157952;
    msg.z = 0.714743739293;
    msg.vx = 0.885820216809;
    msg.vy = 0.346670795006;
    msg.vz = 0.471734046345;
    msg.ax = 0.473313076376;
    msg.ay = 0.706922447464;
    msg.az = 0.587647647975;
    msg.flags = 60953U;

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
    msg.setTimeStamp(0.315256839807);
    msg.setSource(13750U);
    msg.setSourceEntity(249U);
    msg.setDestination(63413U);
    msg.setDestinationEntity(202U);
    msg.value = 0.668192950808;

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
    msg.setTimeStamp(0.406806440933);
    msg.setSource(36329U);
    msg.setSourceEntity(228U);
    msg.setDestination(18U);
    msg.setDestinationEntity(126U);
    msg.value = 0.486642593827;

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
    msg.setTimeStamp(0.422582247239);
    msg.setSource(65121U);
    msg.setSourceEntity(223U);
    msg.setDestination(55500U);
    msg.setDestinationEntity(80U);
    msg.value = 0.957617064952;

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
    msg.setTimeStamp(0.0633000029698);
    msg.setSource(21906U);
    msg.setSourceEntity(168U);
    msg.setDestination(39109U);
    msg.setDestinationEntity(13U);
    msg.timeout = 54468U;
    msg.lat = 0.912064714323;
    msg.lon = 0.371461452193;
    msg.z = 0.981398275711;
    msg.z_units = 36U;
    msg.speed = 0.948725703933;
    msg.speed_units = 108U;
    msg.roll = 0.218071365082;
    msg.pitch = 0.54537109243;
    msg.yaw = 0.703678528233;
    msg.custom.assign("RDDTMOPJQUZUIIZJCXDWLZALKFYJBXJMWESYSZVDTBCHZZMVQGMQKUQMCGROBANDDYQEVTHBTWLHAXWUFKNAXVLIJSPBOIPYJUVAXNLRWETUQQOXQLOCYGDWHLMCOWPHMGIVIUALJAHCTCDAJTRXETRIVZOEUPBFEPHYKWQXOHCEZEBJAFWYCFVNZILEYMGYFKBBSHRPRGNTSUWNNUSZINNKGD");

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
    msg.setTimeStamp(0.605412443873);
    msg.setSource(34410U);
    msg.setSourceEntity(135U);
    msg.setDestination(13185U);
    msg.setDestinationEntity(124U);
    msg.timeout = 25658U;
    msg.lat = 0.480011003235;
    msg.lon = 0.598836746745;
    msg.z = 0.811226642846;
    msg.z_units = 36U;
    msg.speed = 0.459643450203;
    msg.speed_units = 247U;
    msg.roll = 0.629731341233;
    msg.pitch = 0.432567274607;
    msg.yaw = 0.923111487504;
    msg.custom.assign("OYNWLGXKUBKVLCQYDFKPTVCZUIMIFBRIAQQXIZRNFSXOVUK");

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
    msg.setTimeStamp(0.367141613953);
    msg.setSource(34090U);
    msg.setSourceEntity(69U);
    msg.setDestination(17543U);
    msg.setDestinationEntity(112U);
    msg.timeout = 28286U;
    msg.lat = 0.475139025345;
    msg.lon = 0.802275092582;
    msg.z = 0.947340316317;
    msg.z_units = 80U;
    msg.speed = 0.22400606088;
    msg.speed_units = 245U;
    msg.roll = 0.847208179924;
    msg.pitch = 0.633238568324;
    msg.yaw = 0.459327834327;
    msg.custom.assign("QTJEUKZLPZLKEICZZFAWTNKQCCAEBSNHHDWAOHWUBBDNFLMYVXVODBCRJBYRUUVNGHTOZQSPCUGBDKMD");

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
    msg.setTimeStamp(0.134717320971);
    msg.setSource(43695U);
    msg.setSourceEntity(29U);
    msg.setDestination(40613U);
    msg.setDestinationEntity(173U);
    msg.timeout = 9466U;
    msg.lat = 0.0677244057272;
    msg.lon = 0.202150977429;
    msg.z = 0.107481766703;
    msg.z_units = 122U;
    msg.speed = 0.548926222427;
    msg.speed_units = 101U;
    msg.duration = 25373U;
    msg.radius = 0.649384860446;
    msg.flags = 68U;
    msg.custom.assign("PCGLVHFNOAMQLVAKPJDCLSFPDQRAVEIVNPOEHRIB");

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
    msg.setTimeStamp(0.191115268387);
    msg.setSource(34333U);
    msg.setSourceEntity(206U);
    msg.setDestination(9000U);
    msg.setDestinationEntity(79U);
    msg.timeout = 22503U;
    msg.lat = 0.876426357821;
    msg.lon = 0.953406991406;
    msg.z = 0.839450692841;
    msg.z_units = 102U;
    msg.speed = 0.974065685297;
    msg.speed_units = 107U;
    msg.duration = 4852U;
    msg.radius = 0.843610409984;
    msg.flags = 189U;
    msg.custom.assign("WOTASRBANJHZSLHWHAGBXJHKLVCJIOGOLMRZLLGHXPKAZSNMMQJZQKUHODXWUNWJCNDQPVVFYOCHRAWYBCPUFDUTYGBQXCUEPKSVZKDPLYCPTWTKNGJFRTAWMRXQNBKDBVIHIEUFNVMLZZRRFGGQMMGXSSRNDVWQ");

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
    msg.setTimeStamp(0.686943366736);
    msg.setSource(31173U);
    msg.setSourceEntity(243U);
    msg.setDestination(32796U);
    msg.setDestinationEntity(70U);
    msg.timeout = 19116U;
    msg.lat = 0.168292229895;
    msg.lon = 0.861126885798;
    msg.z = 0.528495058633;
    msg.z_units = 65U;
    msg.speed = 0.517992374652;
    msg.speed_units = 19U;
    msg.duration = 27969U;
    msg.radius = 0.228665769926;
    msg.flags = 215U;
    msg.custom.assign("MOLQRMEFDPBTSJXXUYLAIRCFQXEVAUCGLODMHKQCETUEFRGPWNXJTVYIHQCCEUTTBOASQCTYBHRNKWADXJNPCWKIBBUOFZVBLVHHNSLGUKAWOHGIMEJSNUGEKRVPMJMVLVAEJAIVEDGZYZOBSPSOSDIYLDWANPSGOTSDRVPKHTPFJNMKXUPLYWAQDJKDXBTZHKCYIXPGHZJKZVZDBFQIIWQNWAUFUTLWRLXOYYXOCINNHQEFSGZQJM");

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
    msg.setTimeStamp(0.0909631659104);
    msg.setSource(60469U);
    msg.setSourceEntity(22U);
    msg.setDestination(16178U);
    msg.setDestinationEntity(22U);
    msg.custom.assign("WVYOQOSOBUXEASKWVYVTCQDDZ");

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
    msg.setTimeStamp(0.251380978626);
    msg.setSource(42591U);
    msg.setSourceEntity(223U);
    msg.setDestination(22416U);
    msg.setDestinationEntity(119U);
    msg.custom.assign("HREZWCMGXPWRPKTMCEMUXXXOANNHRLGVTPZJOBFPJRYDZSXDNLUWJSMKVMATARFQYCPRYGZXOLUKXDKWPHLMVNIHDHUOAJCQTHVPRYFTFTDGEDKABGOBTIICBCQVTTFYYJYQQL");

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
    msg.setTimeStamp(0.147333126944);
    msg.setSource(7U);
    msg.setSourceEntity(251U);
    msg.setDestination(22025U);
    msg.setDestinationEntity(44U);
    msg.custom.assign("OEDJUJYTPGTXGWFJHCROGZVUOPZWTASXMDQALAL");

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
    msg.setTimeStamp(0.941378579839);
    msg.setSource(3271U);
    msg.setSourceEntity(113U);
    msg.setDestination(65285U);
    msg.setDestinationEntity(222U);
    msg.timeout = 4265U;
    msg.lat = 0.817759966407;
    msg.lon = 0.580636413426;
    msg.z = 0.830771791412;
    msg.z_units = 104U;
    msg.duration = 55847U;
    msg.speed = 0.538537935499;
    msg.speed_units = 103U;
    msg.type = 56U;
    msg.radius = 0.105989022048;
    msg.length = 0.308282215539;
    msg.bearing = 0.183594236616;
    msg.direction = 107U;
    msg.custom.assign("PLTATWVZQHTFZHFZKXATXHEVWYFKJN");

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
    msg.setTimeStamp(0.665784495894);
    msg.setSource(18923U);
    msg.setSourceEntity(203U);
    msg.setDestination(10572U);
    msg.setDestinationEntity(58U);
    msg.timeout = 65033U;
    msg.lat = 0.921958984523;
    msg.lon = 0.000791239844215;
    msg.z = 0.682891984583;
    msg.z_units = 217U;
    msg.duration = 10401U;
    msg.speed = 0.736143043205;
    msg.speed_units = 30U;
    msg.type = 188U;
    msg.radius = 0.727877581238;
    msg.length = 0.780362382181;
    msg.bearing = 0.88753973788;
    msg.direction = 55U;
    msg.custom.assign("MZEHRUBGJTTHCEFKRSXMOITVTVAPBRVQZHBUWSOZORENCKCOXEREQTMYJZENPNWNQUMBLADUPAXSDPMAOTUMLVKCCBYYEVIYBHSIELFNPKIVHWTGGFWHMHBDNUESRJJBQKQWKLWBFPUDCXCGJRQPHQZVOVKNLIYRDZJXADSAWRYGWSLPLYUDZAXIDGJICPVEWTCCVNRILZFNF");

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
    msg.setTimeStamp(0.957486258099);
    msg.setSource(37654U);
    msg.setSourceEntity(156U);
    msg.setDestination(29494U);
    msg.setDestinationEntity(176U);
    msg.timeout = 29644U;
    msg.lat = 0.780220865516;
    msg.lon = 0.658002537722;
    msg.z = 0.619258591963;
    msg.z_units = 158U;
    msg.duration = 56692U;
    msg.speed = 0.947516813521;
    msg.speed_units = 48U;
    msg.type = 146U;
    msg.radius = 0.324348258402;
    msg.length = 0.656315548932;
    msg.bearing = 0.520133966006;
    msg.direction = 170U;
    msg.custom.assign("TSPGWGBNPYWTEREOBOVSPYSIAXAEUHURSPLTRRFXAGOISCPMJQXNCMPDFKRNIIHTHETMOXJGKBZOFCFPYYBDOOBIOUREVXELGZLF");

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
    msg.setTimeStamp(0.372258342376);
    msg.setSource(63485U);
    msg.setSourceEntity(38U);
    msg.setDestination(31628U);
    msg.setDestinationEntity(99U);
    msg.duration = 6195U;
    msg.custom.assign("FQVZZAOTWHFLYPSOILIDBUKPQNROECBSERHJATOQDAVNUDAIMTUGRUETESKZWUDG");

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
    msg.setTimeStamp(0.319653369901);
    msg.setSource(34629U);
    msg.setSourceEntity(79U);
    msg.setDestination(18551U);
    msg.setDestinationEntity(15U);
    msg.duration = 18202U;
    msg.custom.assign("BVABFXXLZMQOLPPYNSOPZALJPBGUKAJKYDVDNNWJXLWINWTRTWEDQGTQGWORYRULGDCWICKQCCHHMRNAQIHVIJDWGGOKHZOSOFISMEUVXKXFPHCEPNOSOPFRUMZCFTZHPYPYBZ");

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
    msg.setTimeStamp(0.956146275994);
    msg.setSource(84U);
    msg.setSourceEntity(183U);
    msg.setDestination(60424U);
    msg.setDestinationEntity(33U);
    msg.duration = 45283U;
    msg.custom.assign("PJPSLLBRZVEQPYUIKAMTIZEGBYKWFLAETJTBXSIKMSJYTZINLVXBDXVTJHEMJBHAWDGZVFC");

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
    msg.setTimeStamp(0.310757202702);
    msg.setSource(25017U);
    msg.setSourceEntity(189U);
    msg.setDestination(24639U);
    msg.setDestinationEntity(251U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1109216561U;
    tmp_msg_0.start_lat = 0.377061837621;
    tmp_msg_0.start_lon = 0.503795739281;
    tmp_msg_0.start_z = 0.882639516006;
    tmp_msg_0.start_z_units = 81U;
    tmp_msg_0.end_lat = 0.125215757446;
    tmp_msg_0.end_lon = 0.651811858902;
    tmp_msg_0.end_z = 0.283871577207;
    tmp_msg_0.end_z_units = 47U;
    tmp_msg_0.speed = 0.209590280811;
    tmp_msg_0.speed_units = 160U;
    tmp_msg_0.lradius = 0.0807683258572;
    tmp_msg_0.flags = 148U;
    msg.control.set(tmp_msg_0);
    msg.duration = 7991U;
    msg.custom.assign("LWDRRKJKYUNAGQFYNCZALQDWGUUMACZVKQYJEFPCSLGJHOIRMQCYBRFOGIUBDHVNJADCGFASKTZHEDNEDCKJMB");

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
    msg.setTimeStamp(0.379355668016);
    msg.setSource(45843U);
    msg.setSourceEntity(98U);
    msg.setDestination(63500U);
    msg.setDestinationEntity(226U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.344416219818;
    msg.control.set(tmp_msg_0);
    msg.duration = 14586U;
    msg.custom.assign("RHFTPVPNJJVGBDZUNFKPRKXHUKEZRBKLUITHQOIPZXZJTGFTVJACHQCKHVXIDMIULJQVOZUYSMQFPHPLADDLMTPFMECKCANFLYSYDWGVCBNHOIYTQPATFWIZODGOSEHTEDRRVCUREDLWNBOSVQAZWGCZBGKXYQCEFWMXTYWFMMAISKGIJTAOAYSNXOWHDWXLRKCXNSLMGFUBNJGU");

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
    msg.setTimeStamp(0.766523110327);
    msg.setSource(2647U);
    msg.setSourceEntity(122U);
    msg.setDestination(21904U);
    msg.setDestinationEntity(9U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.392332697704;
    msg.control.set(tmp_msg_0);
    msg.duration = 33118U;
    msg.custom.assign("TKGYVFXFFBSGKAHYDXVRUOKIIQOSRKPDKOIZBFLOVCKLODAAOMEIHHYZULATJAWKRRIZMONNBXNHDMNATVZGDZYPNLFAGYUXPWIELPIDWSUTJY");

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
    msg.setTimeStamp(0.970664122462);
    msg.setSource(29070U);
    msg.setSourceEntity(104U);
    msg.setDestination(21135U);
    msg.setDestinationEntity(85U);
    msg.timeout = 21695U;
    msg.lat = 0.881304383467;
    msg.lon = 0.569081286644;
    msg.z = 0.0554303981025;
    msg.z_units = 228U;
    msg.speed = 0.369115402811;
    msg.speed_units = 254U;
    msg.bearing = 0.277560991928;
    msg.cross_angle = 0.270550879169;
    msg.width = 0.91675778275;
    msg.length = 0.496194399224;
    msg.hstep = 0.73370488769;
    msg.coff = 231U;
    msg.alternation = 100U;
    msg.flags = 215U;
    msg.custom.assign("GEDWEQXPJCEQQGFZZVWSHXMPBSTPRCBPBOKGOUJALRFGINVOCE");

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
    msg.setTimeStamp(0.951316892423);
    msg.setSource(11833U);
    msg.setSourceEntity(137U);
    msg.setDestination(35027U);
    msg.setDestinationEntity(134U);
    msg.timeout = 35497U;
    msg.lat = 0.484486801449;
    msg.lon = 0.674639194636;
    msg.z = 0.643061236938;
    msg.z_units = 69U;
    msg.speed = 0.53681095403;
    msg.speed_units = 188U;
    msg.bearing = 0.155751127521;
    msg.cross_angle = 0.60106828322;
    msg.width = 0.448621839869;
    msg.length = 0.428655680063;
    msg.hstep = 0.478050572541;
    msg.coff = 199U;
    msg.alternation = 151U;
    msg.flags = 14U;
    msg.custom.assign("JMUHRDOHGUMMXYUKBJSATPRLDOYRQAIMZHOQQUACPRNRBNTGEDKIUXDGNKJWBZVDOHNIBEGOMVQVCIHTHVPCSXTKAWIBXRLTAYIENNCRSPDHXMMKWFJJFIBZQLFWZERJBKPVZCCEEPPWMTLFQDLQXYSBTGSPPFWMOYQSIEJWZLBAMSVUCIHWNWFFZVKFUCDSALGGUASFTLAVXTZLKOSVXCIBXHVOCEZYRUJPANYNQYELDK");

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
    msg.setTimeStamp(0.95745201982);
    msg.setSource(28429U);
    msg.setSourceEntity(101U);
    msg.setDestination(4846U);
    msg.setDestinationEntity(68U);
    msg.timeout = 39557U;
    msg.lat = 0.492591375748;
    msg.lon = 0.627360903571;
    msg.z = 0.876161792908;
    msg.z_units = 45U;
    msg.speed = 0.332461015369;
    msg.speed_units = 230U;
    msg.bearing = 0.778585081442;
    msg.cross_angle = 0.58514199608;
    msg.width = 0.339664415674;
    msg.length = 0.228637895303;
    msg.hstep = 0.460136849253;
    msg.coff = 163U;
    msg.alternation = 41U;
    msg.flags = 45U;
    msg.custom.assign("HVAPQGVOSJXIARVVEYRSQJMBDSZATSUTWDMGNLWUTBMJZKSKPHTCGADSJDVQLGJYZRHTDAFEOYKMLNYMXFXAOXQJIBKXKYFBSEZYPFXCIZBNRDVCNWMUGZNEUWI");

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
    msg.setTimeStamp(0.560873193363);
    msg.setSource(13258U);
    msg.setSourceEntity(165U);
    msg.setDestination(50773U);
    msg.setDestinationEntity(127U);
    msg.timeout = 54060U;
    msg.lat = 0.205032765356;
    msg.lon = 0.372668490774;
    msg.z = 0.0412140464391;
    msg.z_units = 235U;
    msg.speed = 0.383512073061;
    msg.speed_units = 127U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.452754793911;
    tmp_msg_0.y = 0.0732713024112;
    tmp_msg_0.z = 0.339735574711;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FSLCKNNXTIZGOCFAQGWJOBWXHKFJUIADWSDBJSVDAFVXOXDININKZZGSXHHTLLOUCQQYABCSVPNUJMZWWQROJAVJCLHXPUPMLKWBMPDYFIUAYTCWFOUBEYEUBDUKPVGZXNJIQGDQKMOY");

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
    msg.setTimeStamp(0.176679767913);
    msg.setSource(53674U);
    msg.setSourceEntity(83U);
    msg.setDestination(35994U);
    msg.setDestinationEntity(106U);
    msg.timeout = 63919U;
    msg.lat = 0.152843781769;
    msg.lon = 0.897648923558;
    msg.z = 0.386502316343;
    msg.z_units = 50U;
    msg.speed = 0.755313731236;
    msg.speed_units = 31U;
    msg.custom.assign("FZVPRGORHCNXUENYKFSKTUJDCXBYHMRSWYQYGDPAVDZZXPLMFRZYOEEPQAQTNRZDTWLSYKDFCBDCHDXNRPXWNHKBBHJWRVUVAHJRFEWQGWXVLBGRSWOOZMXQMMUTOWTDLXIKLAZCNEXGNUMGKGOQQIIKDOYLL");

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
    msg.setTimeStamp(0.465837319638);
    msg.setSource(44996U);
    msg.setSourceEntity(58U);
    msg.setDestination(48326U);
    msg.setDestinationEntity(166U);
    msg.timeout = 45738U;
    msg.lat = 0.147057192054;
    msg.lon = 0.998395777715;
    msg.z = 0.276292337621;
    msg.z_units = 138U;
    msg.speed = 0.636886495108;
    msg.speed_units = 217U;
    msg.custom.assign("TKKWIMMDQROIZLEJBQHBBEVDENGYXVWYMBRKGRTRQFCZAVCBSFDXDLLJQOOQFHSZZOIZDAXNUAENKWUGBAJYEUMVOYHUBZJPFPKMFOTUXHHMCVYMVRJAIEMRLHLWQPFERNFKKCGFOBUAXSLMEHFTCPRSMNRJLIQYGZAYZSCKCYVGHSPJWFQWNDT");

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
    msg.setTimeStamp(0.900796536324);
    msg.setSource(21694U);
    msg.setSourceEntity(159U);
    msg.setDestination(2226U);
    msg.setDestinationEntity(228U);
    msg.x = 0.259083798196;
    msg.y = 0.878220412348;
    msg.z = 0.27877407717;

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
    msg.setTimeStamp(0.937272153448);
    msg.setSource(27806U);
    msg.setSourceEntity(142U);
    msg.setDestination(39658U);
    msg.setDestinationEntity(65U);
    msg.x = 0.229429202635;
    msg.y = 0.112976518924;
    msg.z = 0.0133605826608;

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
    msg.setTimeStamp(0.480227263779);
    msg.setSource(54189U);
    msg.setSourceEntity(129U);
    msg.setDestination(50932U);
    msg.setDestinationEntity(222U);
    msg.x = 0.464894459674;
    msg.y = 0.235500699256;
    msg.z = 0.600784934953;

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
    msg.setTimeStamp(0.175361119225);
    msg.setSource(36359U);
    msg.setSourceEntity(208U);
    msg.setDestination(5591U);
    msg.setDestinationEntity(96U);
    msg.timeout = 31865U;
    msg.lat = 0.523056940805;
    msg.lon = 0.609813539546;
    msg.z = 0.773361759613;
    msg.z_units = 186U;
    msg.amplitude = 0.425063836348;
    msg.pitch = 0.92308932727;
    msg.speed = 0.0198999921864;
    msg.speed_units = 121U;
    msg.custom.assign("RUGKDVQQSTKZHEUCCMAYGQJLXSFFIBDGRVITOUCIJTWZAXNOAJJPTZGFSFPPXBHKTHRCBVKRPCNWNOIQSVDNVWEOPTBEWKRWXEZUGRVNZKGPDHNHAELEFPRKIHUXYCIMHLXXDQJDSZJCCCQMLYEOQYNORUTQWJFYISDWLFJIOAVZKEFBWUJMSDMQISZZFMGBXUVLVLYANAZYDVKPYBLERSH");

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
    msg.setTimeStamp(0.661959490145);
    msg.setSource(55810U);
    msg.setSourceEntity(16U);
    msg.setDestination(36700U);
    msg.setDestinationEntity(42U);
    msg.timeout = 9027U;
    msg.lat = 0.560666467721;
    msg.lon = 0.0286525638075;
    msg.z = 0.874493568052;
    msg.z_units = 205U;
    msg.amplitude = 0.562620983227;
    msg.pitch = 0.832369149348;
    msg.speed = 0.56600362995;
    msg.speed_units = 162U;
    msg.custom.assign("LXJLHZZXPZQISOMYDTJFEBOJVWXWCYFJCGEZAYUHQVOWVMJXVJRAIIIKVDSHKBONBKZCKDQTLNWCAUATJEIAHDOOGOZYCSHPWQLQUUGCNLTWUMVANFTYFMVSMLAUCXRRRGWRXFOJEFBIUSRCICYMKMVP");

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
    msg.setTimeStamp(0.664679064439);
    msg.setSource(25821U);
    msg.setSourceEntity(238U);
    msg.setDestination(16531U);
    msg.setDestinationEntity(28U);
    msg.timeout = 49572U;
    msg.lat = 0.363752293811;
    msg.lon = 0.677797206411;
    msg.z = 0.260357460102;
    msg.z_units = 156U;
    msg.amplitude = 0.59241649115;
    msg.pitch = 0.636441600632;
    msg.speed = 0.152913604402;
    msg.speed_units = 27U;
    msg.custom.assign("MPPTKBZOTONJUWKJJBFRZDATCFHQNQKMVNWMTZCAFMXPEEVYYGLQMNYNHSMDWHXXYNLXAKMFXJWWPOCPOWZJSGRWQVRUBGULSZKBEYYHSGYTUTIZZWXHVNJTEHDARFRCPCBCVXFNEMHGLOACDVBOPNGZPZUFOVVSDFNDJEJHCRLKTSTUGOTHRGQGXOISRKLWDIMQSBMUXPYEOJYQUILPUHCDAIXAKIDVKUSLBIQSYBEE");

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
    msg.setTimeStamp(0.719085429915);
    msg.setSource(41816U);
    msg.setSourceEntity(149U);
    msg.setDestination(52948U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.957282327203);
    msg.setSource(55380U);
    msg.setSourceEntity(98U);
    msg.setDestination(22803U);
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
    msg.setTimeStamp(0.378307796393);
    msg.setSource(37594U);
    msg.setSourceEntity(12U);
    msg.setDestination(47797U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.0261811666613);
    msg.setSource(42636U);
    msg.setSourceEntity(12U);
    msg.setDestination(52438U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.598125917469;
    msg.lon = 0.837465846953;
    msg.z = 0.0140324020231;
    msg.z_units = 200U;
    msg.radius = 0.703631823021;
    msg.duration = 25351U;
    msg.speed = 0.452178988193;
    msg.speed_units = 249U;
    msg.custom.assign("XVJZCRWJVKZLKBAYJBLOKUTMYKLATBCOCRTWFUPAFPMMDVMIJHYZPAUTOIFWUCUIICQCHXSEGGLZGIEYSRKLGAVXMJONEYUSMPTTNEFMIBFGNCBSJOAAQNDQCUWDKBO");

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
    msg.setTimeStamp(0.458905308455);
    msg.setSource(21256U);
    msg.setSourceEntity(213U);
    msg.setDestination(46874U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.950234773418;
    msg.lon = 0.0962693744565;
    msg.z = 0.789368078452;
    msg.z_units = 105U;
    msg.radius = 0.0875574071854;
    msg.duration = 36848U;
    msg.speed = 0.00178063302117;
    msg.speed_units = 144U;
    msg.custom.assign("WFCYCOGRNJKAYYXCMVQEPUNARJT");

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
    msg.setTimeStamp(0.0596994623919);
    msg.setSource(3516U);
    msg.setSourceEntity(45U);
    msg.setDestination(63952U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.564214992338;
    msg.lon = 0.0321287030848;
    msg.z = 0.421459997972;
    msg.z_units = 70U;
    msg.radius = 0.21448356418;
    msg.duration = 39445U;
    msg.speed = 0.744567839987;
    msg.speed_units = 31U;
    msg.custom.assign("UIHXKJKUBWFOWEWKLPOPDQVJIBBVRKFHQJZWLOIYDJGAVGVPLTAJBETZGKOMXPILJUARDGIOFDYIUMSZAQFKQCODCNXZSAMBEFQU");

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
    msg.setTimeStamp(0.956322962656);
    msg.setSource(51306U);
    msg.setSourceEntity(196U);
    msg.setDestination(51926U);
    msg.setDestinationEntity(76U);
    msg.timeout = 11450U;
    msg.flags = 130U;
    msg.lat = 0.0356190815391;
    msg.lon = 0.268554666459;
    msg.start_z = 0.754452578637;
    msg.start_z_units = 121U;
    msg.end_z = 0.571641267471;
    msg.end_z_units = 55U;
    msg.radius = 0.574566628519;
    msg.speed = 0.712365756866;
    msg.speed_units = 212U;
    msg.custom.assign("DVXKYKFJSUZTRRCVVIAKULZHBOJZMBOOZYJBWADGAXPNMMASTRKKHIQBJHWMVHXCKQQVZHGZIIGNCOSFBXHNUBCUACUZVOFMAKXA");

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
    msg.setTimeStamp(0.865427750423);
    msg.setSource(26804U);
    msg.setSourceEntity(30U);
    msg.setDestination(9607U);
    msg.setDestinationEntity(247U);
    msg.timeout = 46686U;
    msg.flags = 240U;
    msg.lat = 0.641789106695;
    msg.lon = 0.342788395605;
    msg.start_z = 0.492525706858;
    msg.start_z_units = 123U;
    msg.end_z = 0.94983180012;
    msg.end_z_units = 190U;
    msg.radius = 0.339314013598;
    msg.speed = 0.8831904125;
    msg.speed_units = 75U;
    msg.custom.assign("LSDVYFRIACHNPEXJQLNWKXETVFLIHPODAHZTWD");

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
    msg.setTimeStamp(0.846359274546);
    msg.setSource(9685U);
    msg.setSourceEntity(118U);
    msg.setDestination(53962U);
    msg.setDestinationEntity(167U);
    msg.timeout = 4906U;
    msg.flags = 12U;
    msg.lat = 0.397413968085;
    msg.lon = 0.350284793466;
    msg.start_z = 0.0815968682103;
    msg.start_z_units = 117U;
    msg.end_z = 0.0593314182363;
    msg.end_z_units = 107U;
    msg.radius = 0.880386074971;
    msg.speed = 0.86365511196;
    msg.speed_units = 67U;
    msg.custom.assign("CJKLUWRQSFMKKEYIQCPPVGADMNNIHSBCPSSFBYSLDBCPMUZTGIBXLGWCJXNGOMEJQARYUQGPFITJWEMVHASBZEWQVYHPEOBTLLXBZTRUWNVWNVAFRKMHJJHTDOSUYWHVXZBXHQNYUEFXOXZBWLKOPTVRVTEDRF");

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
    msg.setTimeStamp(0.603217128639);
    msg.setSource(30503U);
    msg.setSourceEntity(244U);
    msg.setDestination(22847U);
    msg.setDestinationEntity(94U);
    msg.timeout = 52178U;
    msg.lat = 0.99281951928;
    msg.lon = 0.134359419309;
    msg.z = 0.572065916329;
    msg.z_units = 221U;
    msg.speed = 0.964948666191;
    msg.speed_units = 130U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.486265166811;
    tmp_msg_0.y = 0.231164274926;
    tmp_msg_0.z = 0.231605674426;
    tmp_msg_0.t = 0.871670608747;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ESKSOMGWTKYGFCXNQQDDBDZHXLQAQYHIUAGKBIIY");

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
    msg.setTimeStamp(0.516832126397);
    msg.setSource(2900U);
    msg.setSourceEntity(202U);
    msg.setDestination(32293U);
    msg.setDestinationEntity(55U);
    msg.timeout = 18548U;
    msg.lat = 0.612312925536;
    msg.lon = 0.973974145897;
    msg.z = 0.635402082033;
    msg.z_units = 192U;
    msg.speed = 0.592098324714;
    msg.speed_units = 26U;
    msg.custom.assign("YEDFGYWNPMVRRX");

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
    msg.setTimeStamp(0.286636084105);
    msg.setSource(12732U);
    msg.setSourceEntity(130U);
    msg.setDestination(35485U);
    msg.setDestinationEntity(193U);
    msg.timeout = 58609U;
    msg.lat = 0.383353027033;
    msg.lon = 0.783991541318;
    msg.z = 0.180279327833;
    msg.z_units = 20U;
    msg.speed = 0.325861139337;
    msg.speed_units = 3U;
    msg.custom.assign("KZASENTKPKXELKYAW");

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
    msg.setTimeStamp(0.747254012036);
    msg.setSource(49633U);
    msg.setSourceEntity(203U);
    msg.setDestination(45355U);
    msg.setDestinationEntity(245U);
    msg.x = 0.684957710907;
    msg.y = 0.0158351900459;
    msg.z = 0.514550035115;
    msg.t = 0.366889141284;

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
    msg.setTimeStamp(0.346585861874);
    msg.setSource(16373U);
    msg.setSourceEntity(249U);
    msg.setDestination(23750U);
    msg.setDestinationEntity(2U);
    msg.x = 0.613362355367;
    msg.y = 0.159501547005;
    msg.z = 0.259978264865;
    msg.t = 0.328741220199;

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
    msg.setTimeStamp(0.0698355797257);
    msg.setSource(20033U);
    msg.setSourceEntity(83U);
    msg.setDestination(47779U);
    msg.setDestinationEntity(19U);
    msg.x = 0.34307011526;
    msg.y = 0.171966571015;
    msg.z = 0.710685326245;
    msg.t = 0.637621563777;

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
    msg.setTimeStamp(0.259591184616);
    msg.setSource(46773U);
    msg.setSourceEntity(69U);
    msg.setDestination(59344U);
    msg.setDestinationEntity(100U);
    msg.timeout = 26536U;
    msg.name.assign("HWOMGBNEEXNKWDZJVZVBYAQABUAMPTOGUNTFSTIDHNDQPKJ");
    msg.custom.assign("ARSSUZBPVCFSRJERFGFNAIMXVI");

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
    msg.setTimeStamp(0.212599040035);
    msg.setSource(21434U);
    msg.setSourceEntity(163U);
    msg.setDestination(34573U);
    msg.setDestinationEntity(232U);
    msg.timeout = 28401U;
    msg.name.assign("SMVNWDEKTJZEKCRZYHUWOGTOPGMCINTTAFKNHNPAYGVBMXRSDLERJEEYVNJWPJNDXIDTYAPESTAIEDGSRQMRJWITOMZMHJPLQMVOKUXBKOFIQKUZIGMTK");
    msg.custom.assign("IODOMLWHXYMRZLYDGYCGQAPSXRBUJBDUUSWMZFXUUEKRKTXBKLDUAMHILOHICTPBGRCJOGTJAEWKYVAHNTNKOPCSTCXSFMYIEKYTZRUISPDWF");

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
    msg.setTimeStamp(0.620306768871);
    msg.setSource(20734U);
    msg.setSourceEntity(37U);
    msg.setDestination(20139U);
    msg.setDestinationEntity(30U);
    msg.timeout = 36129U;
    msg.name.assign("OJHVNVXWNRBDOAVANFYDSGEUZWRXQSPTVAPMQNMIFKTHEMJTZRNWNFQATKWVBZYHHXHWMDYFVHRRSKZDGLKSGAISQVSIQYOFOODGXSGBBIMYMTOLMUJLZLHLYPQJEUJMYXIENLGUWFEYBAOLJEHQCTNQLTKSIBRRXUVXJKVRIKCPOPTEPPLURGZGDBNKJJXCZLPDWIZEAIHHXYQFZ");
    msg.custom.assign("HETSOICKLYFECGIMAYWFSQLNLBRUPZNQTCEQZKJRMQPEJUQRHVNSQLXBCZFAPFHVTGHDDYTWTJGHBGRLBFUVOZZXDOXOTJIRRPYVZXUWAPCKPCYVZKPMYTDEKNYAAJIXIHHRLCQEAYEDBITSJTDNUFCQGJMPCSMAUNUWNXGFBQ");

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
    msg.setTimeStamp(0.107070359334);
    msg.setSource(51160U);
    msg.setSourceEntity(34U);
    msg.setDestination(1741U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.186677551559;
    msg.lon = 0.543186453508;
    msg.z = 0.495999685082;
    msg.z_units = 253U;
    msg.speed = 0.601706136369;
    msg.speed_units = 16U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.291291422941;
    tmp_msg_0.y = 0.908682780514;
    tmp_msg_0.z = 0.663875335715;
    tmp_msg_0.t = 0.466474793691;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 34518U;
    tmp_msg_1.off_x = 0.655164609814;
    tmp_msg_1.off_y = 0.664968023381;
    tmp_msg_1.off_z = 0.440565755473;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.272328819047;
    msg.custom.assign("MNXGXIPBMOSZGBGHQZEJCRUUNQMAPKHXKXWERDBTWZJZPAIDITVNVBGTMQFWODLUVVJOULVXBVDFAVMFXCTDUNMYSMRANKOZGFGJAVDHIZORNQQHDDFWSZOKLDPZLPRQGHUJWUQGTWYNJRHCMUMAZCQCMLHYYCLEBNCOTHKQKXLRPJBNLLAAVSTOPAICTSSIJYFFIXPTWPSIRGZEFBEWSFKEJWGRIBBRCSEFYKCS");

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
    msg.setTimeStamp(0.567127280779);
    msg.setSource(8199U);
    msg.setSourceEntity(104U);
    msg.setDestination(9496U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.536848769261;
    msg.lon = 0.336668725974;
    msg.z = 0.290312195983;
    msg.z_units = 139U;
    msg.speed = 0.0539869858756;
    msg.speed_units = 209U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16282U;
    tmp_msg_0.off_x = 0.301629755383;
    tmp_msg_0.off_y = 0.451875124874;
    tmp_msg_0.off_z = 0.650447590489;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.186631416901;
    msg.custom.assign("OQTGQUQPHVHFZRBFMBXFAZAEOVHMCNSQMZVSDFHKIVFYIJKKYNCLEYAFIDTNYGKSETSNVMDYBWTELEIUIXLVTRXCBSQXTADCBYANJZRVBZULMYCBLUKZTXPSH");

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
    msg.setTimeStamp(0.866256747402);
    msg.setSource(14548U);
    msg.setSourceEntity(77U);
    msg.setDestination(35814U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.307346076992;
    msg.lon = 0.74547746684;
    msg.z = 0.878839533674;
    msg.z_units = 197U;
    msg.speed = 0.253559279143;
    msg.speed_units = 112U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.146134342334;
    tmp_msg_0.y = 0.0122829062345;
    tmp_msg_0.z = 0.700942469864;
    tmp_msg_0.t = 0.483421538714;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 44235U;
    tmp_msg_1.off_x = 0.703103772758;
    tmp_msg_1.off_y = 0.0912499573985;
    tmp_msg_1.off_z = 0.126578039413;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0384156414482;
    msg.custom.assign("WECVBXAREFHGBDLYILVARNSDIDONLAMXRYHYEDEHQYIJNXIWIZWVVKUFGQCMXCZLEVSUKKWSKQCFTRZVS");

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
    msg.setTimeStamp(0.795122378024);
    msg.setSource(29787U);
    msg.setSourceEntity(43U);
    msg.setDestination(22346U);
    msg.setDestinationEntity(94U);
    msg.vid = 9524U;
    msg.off_x = 0.0315293668435;
    msg.off_y = 0.788088201683;
    msg.off_z = 0.560088530684;

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
    msg.setTimeStamp(0.449565366151);
    msg.setSource(31875U);
    msg.setSourceEntity(237U);
    msg.setDestination(19779U);
    msg.setDestinationEntity(193U);
    msg.vid = 26730U;
    msg.off_x = 0.762963637125;
    msg.off_y = 0.609459939276;
    msg.off_z = 0.927500865724;

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
    msg.setTimeStamp(0.303906264546);
    msg.setSource(18543U);
    msg.setSourceEntity(162U);
    msg.setDestination(52985U);
    msg.setDestinationEntity(36U);
    msg.vid = 4545U;
    msg.off_x = 0.798715171815;
    msg.off_y = 0.461440999958;
    msg.off_z = 0.644250965234;

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
    msg.setTimeStamp(0.679062461727);
    msg.setSource(45781U);
    msg.setSourceEntity(195U);
    msg.setDestination(44813U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.260059226043);
    msg.setSource(21644U);
    msg.setSourceEntity(244U);
    msg.setDestination(27353U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.776211850955);
    msg.setSource(57349U);
    msg.setSourceEntity(13U);
    msg.setDestination(36663U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.845895536973);
    msg.setSource(34245U);
    msg.setSourceEntity(238U);
    msg.setDestination(1748U);
    msg.setDestinationEntity(12U);
    msg.mid = 38831U;

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
    msg.setTimeStamp(0.831444642251);
    msg.setSource(54287U);
    msg.setSourceEntity(98U);
    msg.setDestination(38850U);
    msg.setDestinationEntity(37U);
    msg.mid = 52889U;

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
    msg.setTimeStamp(0.602070919622);
    msg.setSource(777U);
    msg.setSourceEntity(80U);
    msg.setDestination(18262U);
    msg.setDestinationEntity(91U);
    msg.mid = 25376U;

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
    msg.setTimeStamp(0.434836302116);
    msg.setSource(26574U);
    msg.setSourceEntity(113U);
    msg.setDestination(56858U);
    msg.setDestinationEntity(113U);
    msg.state = 209U;
    msg.eta = 15446U;
    msg.info.assign("OBKGKRCWUBTOYEEKLWROPWVTEFNJYALULCLVC");

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
    msg.setTimeStamp(0.314391643211);
    msg.setSource(912U);
    msg.setSourceEntity(216U);
    msg.setDestination(37088U);
    msg.setDestinationEntity(209U);
    msg.state = 146U;
    msg.eta = 8956U;
    msg.info.assign("ATNIOZYMDUNELXAJJKQQSMCKNDTBSZTUFQCXJNWGRXYLGEWUCPOQIFYPWSHFDINIAVNYCAMPHQWMTOOLJXUFZKJVVRCJVGUMLVKRSZBHODMSWCBHHXWPAXRQDYELGPOQOCPIKGGKMTTGEKJPRFZFSXEZDTAGDUWIMNWBPBVDCBQZXFNTMVIY");

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
    msg.setTimeStamp(0.471813119951);
    msg.setSource(9850U);
    msg.setSourceEntity(13U);
    msg.setDestination(30288U);
    msg.setDestinationEntity(19U);
    msg.state = 198U;
    msg.eta = 49526U;
    msg.info.assign("RJNBBVJVTVYUKXQIIHEFNOCNWXDZUGSJHDVFALNJMNYKBEDGTXTSPBYYINCJIDKTAPRXILLTADW");

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
    msg.setTimeStamp(0.294534163084);
    msg.setSource(19547U);
    msg.setSourceEntity(202U);
    msg.setDestination(28513U);
    msg.setDestinationEntity(128U);
    msg.system = 2426U;
    msg.duration = 57497U;
    msg.speed = 0.122569684779;
    msg.speed_units = 45U;
    msg.x = 0.398942286264;
    msg.y = 0.420556312593;
    msg.z = 0.714929285448;
    msg.z_units = 183U;

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
    msg.setTimeStamp(0.614446616914);
    msg.setSource(32756U);
    msg.setSourceEntity(221U);
    msg.setDestination(42422U);
    msg.setDestinationEntity(83U);
    msg.system = 10476U;
    msg.duration = 54769U;
    msg.speed = 0.274854358088;
    msg.speed_units = 50U;
    msg.x = 0.29024197145;
    msg.y = 0.0192871204389;
    msg.z = 0.509250629688;
    msg.z_units = 101U;

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
    msg.setTimeStamp(0.336260372863);
    msg.setSource(63416U);
    msg.setSourceEntity(94U);
    msg.setDestination(19899U);
    msg.setDestinationEntity(126U);
    msg.system = 38298U;
    msg.duration = 55232U;
    msg.speed = 0.915659666405;
    msg.speed_units = 59U;
    msg.x = 0.835241174314;
    msg.y = 0.0433111710395;
    msg.z = 0.403030224903;
    msg.z_units = 18U;

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
    msg.setTimeStamp(0.487312335463);
    msg.setSource(14467U);
    msg.setSourceEntity(198U);
    msg.setDestination(54370U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.930539682906;
    msg.lon = 0.9248241052;
    msg.speed = 0.515942570833;
    msg.speed_units = 23U;
    msg.duration = 14422U;
    msg.sys_a = 6397U;
    msg.sys_b = 46820U;
    msg.move_threshold = 0.342307983257;

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
    msg.setTimeStamp(0.886226798508);
    msg.setSource(41034U);
    msg.setSourceEntity(14U);
    msg.setDestination(9066U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.562609612554;
    msg.lon = 0.991032363078;
    msg.speed = 0.321939689308;
    msg.speed_units = 232U;
    msg.duration = 9210U;
    msg.sys_a = 65010U;
    msg.sys_b = 52247U;
    msg.move_threshold = 0.660670357073;

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
    msg.setTimeStamp(0.446477661751);
    msg.setSource(5774U);
    msg.setSourceEntity(238U);
    msg.setDestination(60150U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.369225548718;
    msg.lon = 0.336339971633;
    msg.speed = 0.629906895033;
    msg.speed_units = 117U;
    msg.duration = 33188U;
    msg.sys_a = 48965U;
    msg.sys_b = 48281U;
    msg.move_threshold = 0.240976450016;

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
    msg.setTimeStamp(0.343486930529);
    msg.setSource(34404U);
    msg.setSourceEntity(31U);
    msg.setDestination(55509U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.00475160536674;
    msg.lon = 0.428278692328;
    msg.z = 0.936342328986;
    msg.z_units = 12U;
    msg.speed = 0.898445893349;
    msg.speed_units = 196U;
    msg.custom.assign("DIDCPULFEBOMSNSAMUNYJRVYAINDDEABXHIUHJWXYRMRLFIZESOLOJCKJHDCWQIAWVZMJLQJAOQTFSDIKXVXYYFCELCLAMURPSPMHNHTFQGJVZBXPTQHSPDHKBKTMNGNMTEKVWWYPFRIFLTNPDXTOLVAEKVEVKUXQCNGSYFUDFLRUGZUORKBTBAPRYEZBRIBASHNJQXKYBZCPOWGZVM");

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
    msg.setTimeStamp(0.735859308879);
    msg.setSource(16179U);
    msg.setSourceEntity(225U);
    msg.setDestination(42115U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.146224222196;
    msg.lon = 0.712318190847;
    msg.z = 0.0995226681998;
    msg.z_units = 107U;
    msg.speed = 0.717909152409;
    msg.speed_units = 189U;
    msg.custom.assign("FSWNQXQZCWRCVVNDCNQQQUUHCQDFKLHEVDSROOYCSRGPSHTNEPGYREDIMUKIQOTBNALOGOZNVCOZUUFRKTXHIFZFSABXYVJVKIGXLYTTYLHXZEJKTGNCEHUDGTANBGWLDZGXHBIRQQSKMHPAZIAJ");

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
    msg.setTimeStamp(0.0322710305055);
    msg.setSource(14444U);
    msg.setSourceEntity(139U);
    msg.setDestination(20107U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.369310824155;
    msg.lon = 0.870984240994;
    msg.z = 0.97405281804;
    msg.z_units = 29U;
    msg.speed = 0.433105650515;
    msg.speed_units = 220U;
    msg.custom.assign("HDIOZODRAMOSGWLHVFZBOXNVCMHXSSAVIBSWPQUIIDZWWMSJKNJEKOLBMNAHYWHPLTTUKYIJFUYMXGZPBVPAJCVNQYLYFINUNIAXAHUGCVRZAGNKGSKXDPSZMAHJWQEE");

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
    msg.setTimeStamp(0.444944171028);
    msg.setSource(38756U);
    msg.setSourceEntity(68U);
    msg.setDestination(26182U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.524852398731;
    msg.lon = 0.126115286065;

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
    msg.setTimeStamp(0.729379053485);
    msg.setSource(4155U);
    msg.setSourceEntity(159U);
    msg.setDestination(18332U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.353055766629;
    msg.lon = 0.056396500057;

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
    msg.setTimeStamp(0.351502017052);
    msg.setSource(58045U);
    msg.setSourceEntity(247U);
    msg.setDestination(55027U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.552831089218;
    msg.lon = 0.558324165773;

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
    msg.setTimeStamp(0.111122084649);
    msg.setSource(29303U);
    msg.setSourceEntity(140U);
    msg.setDestination(28972U);
    msg.setDestinationEntity(54U);
    msg.timeout = 15066U;
    msg.lat = 0.549173909143;
    msg.lon = 0.406849427382;
    msg.z = 0.514581517082;
    msg.z_units = 56U;
    msg.pitch = 0.283423512961;
    msg.amplitude = 0.885886836236;
    msg.duration = 19381U;
    msg.speed = 0.665854907989;
    msg.speed_units = 176U;
    msg.radius = 0.56601581409;
    msg.direction = 214U;
    msg.custom.assign("QXNLRLXXVXLBRCUURHHGMUPOTEORJASVBOIWMGEDBJNABXHTZHOSCYTRZS");

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
    msg.setTimeStamp(0.605741297723);
    msg.setSource(28043U);
    msg.setSourceEntity(134U);
    msg.setDestination(44797U);
    msg.setDestinationEntity(19U);
    msg.timeout = 24796U;
    msg.lat = 0.545509368439;
    msg.lon = 0.371208226028;
    msg.z = 0.490881701233;
    msg.z_units = 184U;
    msg.pitch = 0.836207007959;
    msg.amplitude = 0.206316712654;
    msg.duration = 35894U;
    msg.speed = 0.787178908134;
    msg.speed_units = 45U;
    msg.radius = 0.333536122051;
    msg.direction = 86U;
    msg.custom.assign("QAIYBCWOFFELJZHVAQHWYRBJOAOEUMBHPTQWDQUMSIFDRWRSSVGRGMGXSXBYSOZZJUKGUCKCVGFRUKICVJVETKNMYPQMRWTBDPVVTLBUXFFSCK");

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
    msg.setTimeStamp(0.538009993391);
    msg.setSource(27907U);
    msg.setSourceEntity(215U);
    msg.setDestination(60111U);
    msg.setDestinationEntity(104U);
    msg.timeout = 41995U;
    msg.lat = 0.467106808645;
    msg.lon = 0.504391179263;
    msg.z = 0.800023834229;
    msg.z_units = 91U;
    msg.pitch = 0.52980699994;
    msg.amplitude = 0.512009277561;
    msg.duration = 18472U;
    msg.speed = 0.579913358432;
    msg.speed_units = 46U;
    msg.radius = 0.418765479198;
    msg.direction = 142U;
    msg.custom.assign("DGXCRGQJAOMYAVCNSZKVPVUFDITPMSITYTGKOPYFJUZDIWFVXPSEBHCZWRBKUBYMDUEZAJTPIUPTOBDCFSGQALONPWAPQJGJKEWCTHIZWCHLRFKOMKWUVBCJELHFUFIOXUILRUAMRADLNHBUNMREQMQXQLBBWXQZLIJEGKJHLIEOBNTFAWRVDNFJKMDVYZSHKLRTMXCSOFVHJOYHXTIPRGAVNSWTXVHSPLNQZSRNGEZYYZKDECYCEGA");

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
    msg.setTimeStamp(0.672145850771);
    msg.setSource(21199U);
    msg.setSourceEntity(128U);
    msg.setDestination(21271U);
    msg.setDestinationEntity(180U);
    msg.formation_name.assign("ZJSCXQXGEMQRLCRDBQAATKIGHZGNZEZAIHEWXQZROOUJGLVAJRNCEXFOTAXYBHUXPFCUJHYLDLWUBMUTMFPIVQSVVEMEJZBRXOYGHKYPKTBDNCDNQFOUVDYLWFLPRBIIYPAIBDOLPVZVTSJWHJRQOVMZHHMHEJYSOUTNQFGPLAIKUJSNKWZVSFWFARSMYGVUKKKQFPISUS");
    msg.reference_frame = 7U;
    msg.custom.assign("CXHKGBZHSAPEDSLZGG");

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
    msg.setTimeStamp(0.6891783396);
    msg.setSource(7495U);
    msg.setSourceEntity(21U);
    msg.setDestination(61817U);
    msg.setDestinationEntity(161U);
    msg.formation_name.assign("LWSQNLNRKQAJLFUWUCMTHPMVHSSPZPHPMGJRXKJUKWQPVSVTANYDHEZIBYZVISEGONPNBNHHFXMSEEAOTDXGNYRJXPQIXCMVQAKXATMAMOUODFAQSDBINDZKDHHUBDZIUFOTKYLVXKJVOLUOOXKJACEAEWWTXBLXJHELYYJERRGJWBGDBI");
    msg.reference_frame = 65U;
    msg.custom.assign("VZMDNBWARIXFIBYSULNDPLUTTBHZILRMEYKJQJEXFXYSKWSNAXISVMNIYHPBTVZUKFIGGRFAPQHKXEDBUIDHSTRMSISHDRAQMLMMGALEYUPEPOHONCZVLE");

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
    msg.setTimeStamp(0.561621888428);
    msg.setSource(48687U);
    msg.setSourceEntity(236U);
    msg.setDestination(23634U);
    msg.setDestinationEntity(60U);
    msg.formation_name.assign("UZABTPNXZFKDTJFCISVBTEHJQQOOLKFCGXPEBZXGULVAJRMQEWRMAUDLYCYKHMNWIAZREETEXIKIRURAWJMVHBGLNMDNVXQECPCYXOBJSFIQYRGFWQY");
    msg.reference_frame = 125U;
    msg.custom.assign("IOPZPSWLHNEAPETBZEYRPDNQRIBMBIYHRCEGMOBZWNWEUNNTUSMOALAQFYVUBRJFIQVIHEDUDNAKHHBRHJMDCZOWXERUYWZTQBVPHYUXAXKPLADXOSIEFBLERGSZHCL");

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
    msg.setTimeStamp(0.1212706045);
    msg.setSource(40232U);
    msg.setSourceEntity(23U);
    msg.setDestination(30803U);
    msg.setDestinationEntity(226U);
    msg.group_name.assign("OJFEFPZSHJOUPPEBESOHAXZX");
    msg.formation_name.assign("WYWFPGCVPTPORELSTZKONLMMVNJVHRYWYQWYLUXSOLBTQGGPAABGVISHCOCUFVARXYIWEPTAQLRESRHNBAZXWSEUAFHVMGEURKKGZEGSDPDFTYVKNJRFF");
    msg.plan_id.assign("QYJKFABTELWDWQLRWRWTPUMYUXSVRYNLEAHHPCHHCVWJYCECZDXBZWTLKDTBHIRGLOHFGCUTCEGJHBXLWKVOCYHFCNQOKU");
    msg.description.assign("YRGSLUTXZXKGLHJITDBBIRGJPLXPOXAXNFJEIWTHHCJOPVQNUWVREXIDHUCYYYFNOPKNOEKFGZNGLIOJCMJEDNJBLZFMA");
    msg.leader_speed = 0.318988591438;
    msg.leader_bank_lim = 0.896750845779;
    msg.pos_sim_err_lim = 0.855331861448;
    msg.pos_sim_err_wrn = 0.166662923775;
    msg.pos_sim_err_timeout = 37520U;
    msg.converg_max = 0.450082745894;
    msg.converg_timeout = 51741U;
    msg.comms_timeout = 53914U;
    msg.turb_lim = 0.0611888191091;
    msg.custom.assign("XRHOGHADJBCCHJUVWZNVQUKTYHEBAKAZVSUEQAPWXPXQDIPQEJJLVUKDYSSVDZBFFIUOENTPSLTEQVKDYCKSLKWWBPO");

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
    msg.setTimeStamp(0.844365204509);
    msg.setSource(32869U);
    msg.setSourceEntity(253U);
    msg.setDestination(10043U);
    msg.setDestinationEntity(179U);
    msg.group_name.assign("FKJBULPCMISKGMSXAOHJRFWYBVAYHDKQQMGILUGCRNTFWOKBDZFIMLPOZWP");
    msg.formation_name.assign("RHEHZZXPIEUGWFJPJ");
    msg.plan_id.assign("CFKGPREBEWAJXWQFZIWDXUCCAJJHVPSDGSAJYBRSATIURFLMKGWYPCMURDTTNOBNUEUMTEMBODVTIINDGOCMYHKGAQTVVLFBUWPRJAWMXDZWLHHXZOXQZJTYSDQQQXSEOIJNMNLLHURSAGKXWGKYKHVSWZNEGMUKAYLEVPRHEOKZBTRZHTDQBZAZIYYHAWNEPVPXOUOLQSXFPBHFBMM");
    msg.description.assign("YGWEAHRISDQJNGFZBUSKSDKFLJTWTPLDEOIIKXISCGSHCY");
    msg.leader_speed = 0.470672408115;
    msg.leader_bank_lim = 0.239287162207;
    msg.pos_sim_err_lim = 0.589711903485;
    msg.pos_sim_err_wrn = 0.158469790826;
    msg.pos_sim_err_timeout = 12515U;
    msg.converg_max = 0.671157553524;
    msg.converg_timeout = 30051U;
    msg.comms_timeout = 54741U;
    msg.turb_lim = 0.0823289786589;
    msg.custom.assign("YPZMBMDOAMKGUNUDVXVTQRXOKZVPGCKSCPGJMEYIXQBIUEKUTLVPECLEIRGGYHDOTAJINDJRXPZYHFKRSVRXQPGPZCELRYRBVIKUBEWGYNBHFJOTTLLRBUKBDANZEJ");

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
    msg.setTimeStamp(0.484468104734);
    msg.setSource(63784U);
    msg.setSourceEntity(149U);
    msg.setDestination(48587U);
    msg.setDestinationEntity(92U);
    msg.group_name.assign("CAHFLTZQROQNOSKYJULPMVRICSLICMOJFDBKTJKEWQKWCHLVNNTDZUNSXERDHTXKIDUSARFYPGHOGOBXCVGFWXAZESYNPIUVEKEXHQEMGFEIJALSJNXUWTOBUFLUJMUXEUIDOFZCPIMWCSAAAWEYBDVGKHBTJOTJWFVBGYZAPFVHYDGYXPZOWDNYJULLFTRQNPGQQCSQGTMCZJWLLZYRBDR");
    msg.formation_name.assign("WIJUWGXKKGHTGSTJHQNHZUNBMWIKTKSRQWOIEAJAULFJCBHUZPRDLTNKQYTRZJLCTFEGBDREWVCAHVDUADLVRRDTEUSGYTNCPCCOEBELOOWOBGBAIPPADMXWHVNRJODFHXSBZJKQUZQZHCUXNXZBQFMSPWGLFRYMGVDZQPBLDSNNJXCYXPIVNIOPGMSUMHVQFKC");
    msg.plan_id.assign("IJEYHKDVVAWGSEWBZPYWQPUCHYFYZAJGFXIVIPVMXMVZAGTXKEVJPCSSMTYSLDZKSUWEMFRBUTHSTQUGORSRONRBALGXTJYTYENCMQCNRAJCNIKJJYOOHDHDBKSVC");
    msg.description.assign("LGBEWGJDLKNWXAVTKOYTCIYAPQBXPOGVUQDMPDCJPXMBBLPNGFWGMTLSMJOIZYSCWUBNHDXYIHJGXTOJBREZYKTHAVVUHBBOTJSZMPHOMIYKNUXDRKMLAVFMOMQJVJRCAACRXXWQHRDPKPBCNUJKHGYFCGOEULVAHENIPRTZQVZQRKRZEQWVFFSNTAUCIHUMXLTPKSSELNXZELZLBYKYTJESQRIUYWQCZFHSIAWANVZUDSSGFWIEED");
    msg.leader_speed = 0.476687537393;
    msg.leader_bank_lim = 0.909157266478;
    msg.pos_sim_err_lim = 0.0770197870544;
    msg.pos_sim_err_wrn = 0.281731298617;
    msg.pos_sim_err_timeout = 2391U;
    msg.converg_max = 0.889345817231;
    msg.converg_timeout = 44957U;
    msg.comms_timeout = 51987U;
    msg.turb_lim = 0.127812676816;
    msg.custom.assign("YULFCOWIXSHAKAVAXLYXOHUXCBPJJAOUBETDJCFCWSOYJJGTXQBLGDVTLACWEGPEKKHBRKIXJKMVMOABSNXCCHKOQFDVNGOT");

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
    msg.setTimeStamp(0.700935547715);
    msg.setSource(34977U);
    msg.setSourceEntity(247U);
    msg.setDestination(30246U);
    msg.setDestinationEntity(179U);
    msg.control_src = 63913U;
    msg.control_ent = 21U;
    msg.timeout = 0.0774397540784;
    msg.loiter_radius = 0.44710614131;
    msg.altitude_interval = 0.0932143935738;

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
    msg.setTimeStamp(0.617317128115);
    msg.setSource(10990U);
    msg.setSourceEntity(110U);
    msg.setDestination(65448U);
    msg.setDestinationEntity(23U);
    msg.control_src = 45670U;
    msg.control_ent = 61U;
    msg.timeout = 0.51507556671;
    msg.loiter_radius = 0.813760497852;
    msg.altitude_interval = 0.673303867901;

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
    msg.setTimeStamp(0.578349785902);
    msg.setSource(63060U);
    msg.setSourceEntity(20U);
    msg.setDestination(39846U);
    msg.setDestinationEntity(144U);
    msg.control_src = 53575U;
    msg.control_ent = 108U;
    msg.timeout = 0.0734031626263;
    msg.loiter_radius = 0.804884229484;
    msg.altitude_interval = 0.723516404301;

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
    msg.setTimeStamp(0.866570586672);
    msg.setSource(42687U);
    msg.setSourceEntity(241U);
    msg.setDestination(34558U);
    msg.setDestinationEntity(15U);
    msg.flags = 20U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.787367162951;
    tmp_msg_0.speed_units = 85U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0237790267248;
    tmp_msg_1.z_units = 150U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.955486971141;
    msg.lon = 0.310772232478;
    msg.radius = 0.895723107144;

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
    msg.setTimeStamp(0.50235103943);
    msg.setSource(38622U);
    msg.setSourceEntity(94U);
    msg.setDestination(1258U);
    msg.setDestinationEntity(69U);
    msg.flags = 93U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.511921618981;
    tmp_msg_0.speed_units = 33U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.956174094121;
    tmp_msg_1.z_units = 42U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.502896842684;
    msg.lon = 0.582112593124;
    msg.radius = 0.617899197704;

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
    msg.setTimeStamp(0.937853334724);
    msg.setSource(38412U);
    msg.setSourceEntity(145U);
    msg.setDestination(5162U);
    msg.setDestinationEntity(26U);
    msg.flags = 112U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.856584649202;
    tmp_msg_0.speed_units = 201U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.758947193389;
    tmp_msg_1.z_units = 186U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.482323887455;
    msg.lon = 0.945421977537;
    msg.radius = 0.0761956751722;

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
    msg.setTimeStamp(0.170867344502);
    msg.setSource(46892U);
    msg.setSourceEntity(134U);
    msg.setDestination(17121U);
    msg.setDestinationEntity(13U);
    msg.control_src = 5593U;
    msg.control_ent = 220U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 186U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.408617137666;
    tmp_tmp_msg_0_0.speed_units = 7U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.39924889013;
    tmp_tmp_msg_0_1.z_units = 157U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.484453532157;
    tmp_msg_0.lon = 0.984948194465;
    tmp_msg_0.radius = 0.645095722736;
    msg.reference.set(tmp_msg_0);
    msg.state = 7U;
    msg.proximity = 141U;

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
    msg.setTimeStamp(0.737840985325);
    msg.setSource(14557U);
    msg.setSourceEntity(87U);
    msg.setDestination(61762U);
    msg.setDestinationEntity(66U);
    msg.control_src = 1500U;
    msg.control_ent = 185U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 102U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.774510947029;
    tmp_tmp_msg_0_0.speed_units = 216U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.071757800763;
    tmp_tmp_msg_0_1.z_units = 42U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0688140883088;
    tmp_msg_0.lon = 0.230582263383;
    tmp_msg_0.radius = 0.598980460342;
    msg.reference.set(tmp_msg_0);
    msg.state = 43U;
    msg.proximity = 193U;

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
    msg.setTimeStamp(0.582552401087);
    msg.setSource(53311U);
    msg.setSourceEntity(1U);
    msg.setDestination(34109U);
    msg.setDestinationEntity(81U);
    msg.control_src = 39653U;
    msg.control_ent = 158U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 134U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.541934098405;
    tmp_tmp_msg_0_0.speed_units = 110U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.15653229975;
    tmp_tmp_msg_0_1.z_units = 57U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.205251598789;
    tmp_msg_0.lon = 0.927011768562;
    tmp_msg_0.radius = 0.471150303479;
    msg.reference.set(tmp_msg_0);
    msg.state = 90U;
    msg.proximity = 55U;

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
    msg.setTimeStamp(0.291555761144);
    msg.setSource(35096U);
    msg.setSourceEntity(164U);
    msg.setDestination(16417U);
    msg.setDestinationEntity(92U);
    msg.ax_cmd = 0.632798341368;
    msg.ay_cmd = 0.626757041208;
    msg.az_cmd = 0.490804329083;
    msg.ax_des = 0.469936148118;
    msg.ay_des = 0.275337818653;
    msg.az_des = 0.470758927854;
    msg.virt_err_x = 0.282641728371;
    msg.virt_err_y = 0.56934674681;
    msg.virt_err_z = 0.945974661137;
    msg.surf_fdbk_x = 0.0317585077427;
    msg.surf_fdbk_y = 0.0576061819127;
    msg.surf_fdbk_z = 0.883577755553;
    msg.surf_unkn_x = 0.333717830206;
    msg.surf_unkn_y = 0.563542873359;
    msg.surf_unkn_z = 0.561057953769;
    msg.ss_x = 0.758196391359;
    msg.ss_y = 0.20304443304;
    msg.ss_z = 0.946220992101;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IJXUSJUNHBRGMSOYCCHMMYTWFQIDDNBSTWKBNALARYPHPGRJPDNOPBHLWSXCEZBJQSMUFKXYBVUKTKUZFPOGVWZDFQCHYJAVCFWGUVLZFTZOVPDRNLSFLAYEKCQDXRQDJEECJZSOZLCIMPWVZAWYHATBVEDXOBQTHTOIQZDMMNLIRINWMTLSRVSGFGPRYVVHNHERRJOLKTIAXZEXAOCQKFXBAKHJOE");
    tmp_msg_0.dist = 0.456448312282;
    tmp_msg_0.err = 0.391233715362;
    tmp_msg_0.ctrl_imp = 0.213322956573;
    tmp_msg_0.rel_dir_x = 0.59610089407;
    tmp_msg_0.rel_dir_y = 0.551726754816;
    tmp_msg_0.rel_dir_z = 0.690261063976;
    tmp_msg_0.err_x = 0.119817942506;
    tmp_msg_0.err_y = 0.37112888658;
    tmp_msg_0.err_z = 0.749385748188;
    tmp_msg_0.rf_err_x = 0.180618622109;
    tmp_msg_0.rf_err_y = 0.389479767211;
    tmp_msg_0.rf_err_z = 0.825932280018;
    tmp_msg_0.rf_err_vx = 0.57560489329;
    tmp_msg_0.rf_err_vy = 0.421915122325;
    tmp_msg_0.rf_err_vz = 0.729822481504;
    tmp_msg_0.ss_x = 0.173398806154;
    tmp_msg_0.ss_y = 0.793186502851;
    tmp_msg_0.ss_z = 0.690067599815;
    tmp_msg_0.virt_err_x = 0.272741513634;
    tmp_msg_0.virt_err_y = 0.886895066931;
    tmp_msg_0.virt_err_z = 0.835155350108;
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
    msg.setTimeStamp(0.358181005436);
    msg.setSource(33458U);
    msg.setSourceEntity(47U);
    msg.setDestination(53148U);
    msg.setDestinationEntity(49U);
    msg.ax_cmd = 0.630729801574;
    msg.ay_cmd = 0.964783763426;
    msg.az_cmd = 0.385523624307;
    msg.ax_des = 0.0533169498034;
    msg.ay_des = 0.722085183509;
    msg.az_des = 0.226164409844;
    msg.virt_err_x = 0.684760733825;
    msg.virt_err_y = 0.659348777213;
    msg.virt_err_z = 0.375844454119;
    msg.surf_fdbk_x = 0.266491362677;
    msg.surf_fdbk_y = 0.0920565475156;
    msg.surf_fdbk_z = 0.803054701983;
    msg.surf_unkn_x = 0.890871493161;
    msg.surf_unkn_y = 0.870690832499;
    msg.surf_unkn_z = 0.55567237301;
    msg.ss_x = 0.974247620058;
    msg.ss_y = 0.850667673525;
    msg.ss_z = 0.043863600139;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EFREWVGFPACSSHFAESDMVXFHJOBUAPBRIMUUGYZYLDKABOIZMXSTJVDDGVSKPCJKYPXWQZVFFBTQCZRWKDHWQXULXJTGESASCTTQNZPQJFRWZNLXBZBAVMNEUGCISMDBRNDTCSAKUMHARUZRVYXRZIETKCNGMSLNDPOPIXQVL");
    tmp_msg_0.dist = 0.836767857241;
    tmp_msg_0.err = 0.498492167565;
    tmp_msg_0.ctrl_imp = 0.956583602815;
    tmp_msg_0.rel_dir_x = 0.504046319976;
    tmp_msg_0.rel_dir_y = 0.177456107477;
    tmp_msg_0.rel_dir_z = 0.32372143355;
    tmp_msg_0.err_x = 0.183099400908;
    tmp_msg_0.err_y = 0.0335906522426;
    tmp_msg_0.err_z = 0.878603304177;
    tmp_msg_0.rf_err_x = 0.293611178571;
    tmp_msg_0.rf_err_y = 0.475765955527;
    tmp_msg_0.rf_err_z = 0.88926574957;
    tmp_msg_0.rf_err_vx = 0.985727077819;
    tmp_msg_0.rf_err_vy = 0.911561041611;
    tmp_msg_0.rf_err_vz = 0.648098722882;
    tmp_msg_0.ss_x = 0.373595736711;
    tmp_msg_0.ss_y = 0.0892092734746;
    tmp_msg_0.ss_z = 0.820064060911;
    tmp_msg_0.virt_err_x = 0.0882720133515;
    tmp_msg_0.virt_err_y = 0.411660209696;
    tmp_msg_0.virt_err_z = 0.732685279121;
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
    msg.setTimeStamp(0.84147316008);
    msg.setSource(54866U);
    msg.setSourceEntity(97U);
    msg.setDestination(15795U);
    msg.setDestinationEntity(37U);
    msg.ax_cmd = 0.470045203385;
    msg.ay_cmd = 0.729464249559;
    msg.az_cmd = 0.0373287700087;
    msg.ax_des = 0.150392820235;
    msg.ay_des = 0.562479539505;
    msg.az_des = 0.592344805933;
    msg.virt_err_x = 0.429725591472;
    msg.virt_err_y = 0.544077493522;
    msg.virt_err_z = 0.974863971606;
    msg.surf_fdbk_x = 0.249236081162;
    msg.surf_fdbk_y = 0.0880876098867;
    msg.surf_fdbk_z = 0.651091331602;
    msg.surf_unkn_x = 0.59919557793;
    msg.surf_unkn_y = 0.623804926503;
    msg.surf_unkn_z = 0.929547196441;
    msg.ss_x = 0.48241136516;
    msg.ss_y = 0.458267481169;
    msg.ss_z = 0.915772553965;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GLPDGOSBGEDKQOCLQBVBIYFTFJHAWNQDVVPGGBPLAAMGCLHUWHQVDMZKVVYKJONUSJXRUMMZJEZJPBXDTBVJRWIXALATSJCVOFCSJRENXIKISPDDFXFLBEFTEWWPZLOTRGVQSHXTETFNZWEYGDBJU");
    tmp_msg_0.dist = 0.51392265691;
    tmp_msg_0.err = 0.202713954336;
    tmp_msg_0.ctrl_imp = 0.917233903077;
    tmp_msg_0.rel_dir_x = 0.956415712678;
    tmp_msg_0.rel_dir_y = 0.01037723185;
    tmp_msg_0.rel_dir_z = 0.474817865456;
    tmp_msg_0.err_x = 0.63494530483;
    tmp_msg_0.err_y = 0.930202630849;
    tmp_msg_0.err_z = 0.360261768864;
    tmp_msg_0.rf_err_x = 0.943507859469;
    tmp_msg_0.rf_err_y = 0.18341648129;
    tmp_msg_0.rf_err_z = 0.675561679827;
    tmp_msg_0.rf_err_vx = 0.398368293466;
    tmp_msg_0.rf_err_vy = 0.679026870444;
    tmp_msg_0.rf_err_vz = 0.784843823926;
    tmp_msg_0.ss_x = 0.36025902485;
    tmp_msg_0.ss_y = 0.974707231831;
    tmp_msg_0.ss_z = 0.10378507328;
    tmp_msg_0.virt_err_x = 0.515242244839;
    tmp_msg_0.virt_err_y = 0.777859928764;
    tmp_msg_0.virt_err_z = 0.968179837947;
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
    msg.setTimeStamp(0.624260672946);
    msg.setSource(113U);
    msg.setSourceEntity(116U);
    msg.setDestination(37555U);
    msg.setDestinationEntity(10U);
    msg.s_id.assign("ZORUZHVPJLBUHFRSLGQJEGDRPMKCZVCGVWDSOMDHSBXVNLOBFJXUIQWYPDQRUXEOHUIPVXNSBKVAJOMFVGREYQCTVBHGDTJLDCCEEIRFPEAETSLYEYKTMTNZGMJCENZVZXQLTO");
    msg.dist = 0.52079566825;
    msg.err = 0.804000928358;
    msg.ctrl_imp = 0.408633121582;
    msg.rel_dir_x = 0.135492701377;
    msg.rel_dir_y = 0.209543410798;
    msg.rel_dir_z = 0.259302376597;
    msg.err_x = 0.823854229796;
    msg.err_y = 0.730246761056;
    msg.err_z = 0.950533925043;
    msg.rf_err_x = 0.791967998262;
    msg.rf_err_y = 0.874475941944;
    msg.rf_err_z = 0.566960750136;
    msg.rf_err_vx = 0.655389515928;
    msg.rf_err_vy = 0.17296240999;
    msg.rf_err_vz = 0.465933554926;
    msg.ss_x = 0.442081290234;
    msg.ss_y = 0.844670556402;
    msg.ss_z = 0.0431757709242;
    msg.virt_err_x = 0.848266515857;
    msg.virt_err_y = 0.988592200275;
    msg.virt_err_z = 0.54149206824;

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
    msg.setTimeStamp(0.632727795132);
    msg.setSource(50678U);
    msg.setSourceEntity(121U);
    msg.setDestination(20045U);
    msg.setDestinationEntity(214U);
    msg.s_id.assign("LKWGUHGCABZZAGTEUWCOIYVDESRPBLOWPWQJDDHXHNQUTRBZSXSYQFOKXXCOTJKRJXGLJLPVECTIBGNZMPZIWPYFUXRSQGKMXYTYOGKMJLJDDHPEEDSNLWNQOVFBZYUBJAPSPILIFXDUVJLFCSTYIJSPWSVHMEHXRYDNEAVMAHKNNSVYFIZBFGFEYKZHLHCQRWOUVEMZVAFGTCNQCUWBDOU");
    msg.dist = 0.444743179209;
    msg.err = 0.704402798697;
    msg.ctrl_imp = 0.337755244051;
    msg.rel_dir_x = 0.288270197432;
    msg.rel_dir_y = 0.44653810265;
    msg.rel_dir_z = 0.592907697573;
    msg.err_x = 0.440543637078;
    msg.err_y = 0.436583337418;
    msg.err_z = 0.973576947989;
    msg.rf_err_x = 0.567267920185;
    msg.rf_err_y = 0.755639186233;
    msg.rf_err_z = 0.991624894343;
    msg.rf_err_vx = 0.488817599246;
    msg.rf_err_vy = 0.264576993979;
    msg.rf_err_vz = 0.537487146325;
    msg.ss_x = 0.828968809456;
    msg.ss_y = 0.383424014;
    msg.ss_z = 0.297930690612;
    msg.virt_err_x = 0.649075280207;
    msg.virt_err_y = 0.81891815828;
    msg.virt_err_z = 0.975092331151;

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
    msg.setTimeStamp(0.972549934032);
    msg.setSource(5600U);
    msg.setSourceEntity(7U);
    msg.setDestination(39476U);
    msg.setDestinationEntity(101U);
    msg.s_id.assign("KHQRVGHDHOVEFIAMPWGKIGYGPTKTMXESQZTLEKIKRAKCLUZJCOXOXILIGRXIECXDVRMOPASFEPMXVJBMWLFWJBMPUXBKJYDRRMGXCAIWQRUJTZVCEKFPQOCXDTANLCJOSWNULPOGDGCTZZFTYLHEZBMQALMSJUNNSFTMAXFQHNWPLNDUVAJBUENUYRKNSIJTBODDHZGFIIQAVYBDVYOZNWYVQRLSHYUTYNKSSVHFC");
    msg.dist = 0.957101750812;
    msg.err = 0.754143759912;
    msg.ctrl_imp = 0.377878219134;
    msg.rel_dir_x = 0.518294435233;
    msg.rel_dir_y = 0.313084137757;
    msg.rel_dir_z = 0.989258383414;
    msg.err_x = 0.679283307068;
    msg.err_y = 0.288354190628;
    msg.err_z = 0.98868482766;
    msg.rf_err_x = 0.309939651085;
    msg.rf_err_y = 0.893768386046;
    msg.rf_err_z = 0.628138825154;
    msg.rf_err_vx = 0.525973691828;
    msg.rf_err_vy = 0.914299681086;
    msg.rf_err_vz = 0.404004825379;
    msg.ss_x = 0.817347913981;
    msg.ss_y = 0.687174468309;
    msg.ss_z = 0.201505301489;
    msg.virt_err_x = 0.854909041681;
    msg.virt_err_y = 0.613853117718;
    msg.virt_err_z = 0.0332774690162;

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
    msg.setTimeStamp(0.0456640317142);
    msg.setSource(50846U);
    msg.setSourceEntity(0U);
    msg.setDestination(65021U);
    msg.setDestinationEntity(233U);
    msg.timeout = 6835U;
    msg.rpm = 0.666484513299;
    msg.direction = 21U;
    msg.custom.assign("RBHHLOLFQKANYFSUCKTVUYTGTIEVWEUOECGMJYGWBZMRBJGOXFSYZSBJMWGOEVSLGUVOPPXYPXMBZBYFPOPNHKQITKXUXPIOLWZTHDRCNSJWOHIKOEWYCYMESXVSUIQKMNAUWLLAQBW");

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
    msg.setTimeStamp(0.460588085852);
    msg.setSource(32703U);
    msg.setSourceEntity(91U);
    msg.setDestination(42023U);
    msg.setDestinationEntity(154U);
    msg.timeout = 30603U;
    msg.rpm = 0.687765442879;
    msg.direction = 171U;
    msg.custom.assign("CFGKAPOPVPPTQGXRSBBOSZWQPBIKGYUDAUDWXDHCHDGTPRMKPNYKKWPXMNEUOSLVDQJEIABAILDLVVZWLCMYCOCWH");

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
    msg.setTimeStamp(0.474029750383);
    msg.setSource(51613U);
    msg.setSourceEntity(97U);
    msg.setDestination(16126U);
    msg.setDestinationEntity(192U);
    msg.timeout = 44159U;
    msg.rpm = 0.73405588702;
    msg.direction = 35U;
    msg.custom.assign("CMBAXEUZDLBOBKYFCPXRQKTUVIDADZHWJMEZNKGCUCJBJEXNVRAWYRVQUOHMZERAFWIQFPVH");

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
    msg.setTimeStamp(0.735979714844);
    msg.setSource(51258U);
    msg.setSourceEntity(96U);
    msg.setDestination(491U);
    msg.setDestinationEntity(85U);
    msg.formation_name.assign("YQTKGZGYHNGDLHAOTWRQHPGJVCYPBDUPRDFXLENOHNIIXAEHLJMJJGQCTRQFKMOPELYWSA");
    msg.type = 19U;
    msg.op = 60U;
    msg.group_name.assign("QMKVSWYZPMWDFAHYEQEAGABPNGRGJAZMIZZRCFLOWMXBESGOSQQJVOGNXTNNWVCSAPIDVMTZTHEIAXOFTKYZHHLOJ");
    msg.plan_id.assign("JUYDLKUBZBGBXZBELOSLLZIEBSTAZHATRJDPQGHGYWCOSOZQWMLNTGVRISZMONNSCXHIXXCMIEKYUCSDPAJHAPDGTSHMIRELQKERHQQCXVIVPKYRWHZKSMMPLXPEEFQIXOMUBTTYXCLCDUWYFLGVQNOPMAVKWLDFTW");
    msg.description.assign("FGCAXWCSNJIRKNEFXXXYKWUHFOBIRVPTMNWMHFMQBZZBXELBGPSLJCVHIJERVHILMMHHDWDOPZLUEKOVQHNZLPDTYNSGQSJYPDGQPIRLOXTUFNZG");
    msg.reference_frame = 182U;
    msg.leader_bank_lim = 0.501459822855;
    msg.leader_speed_min = 0.605096098965;
    msg.leader_speed_max = 0.797563889045;
    msg.leader_alt_min = 0.103421474784;
    msg.leader_alt_max = 0.354781760294;
    msg.pos_sim_err_lim = 0.574678543068;
    msg.pos_sim_err_wrn = 0.767198764316;
    msg.pos_sim_err_timeout = 52432U;
    msg.converg_max = 0.530776315183;
    msg.converg_timeout = 59739U;
    msg.comms_timeout = 35230U;
    msg.turb_lim = 0.94967409416;
    msg.custom.assign("XACNOVDKEUJVGTUJXCLDNGSJIXTCTJRAYFHRJMERXZHLSRNGYCUVYFSMFIMLKPJBEKALGSNIJXFPIQDBHPCDPARBLDN");

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
    msg.setTimeStamp(0.205678364306);
    msg.setSource(6823U);
    msg.setSourceEntity(42U);
    msg.setDestination(42601U);
    msg.setDestinationEntity(65U);
    msg.formation_name.assign("FXYRQSLGNRPPEIBJJTGWEQIMWNNBVQBBTFPUEOTDWKGDGWDMUF");
    msg.type = 229U;
    msg.op = 130U;
    msg.group_name.assign("LCUIBQKRHSNGQHEEKYXRBCWQVJQXBCFQHVEEOSDFGILOUKKLJJDOQFIFMMGNZXTFTCBIHYLRPTYBHNVWBCSDSHWJCHKSDGFPTZYGEBXCDOWAUSEKZQMOJMXAJVDPLRGZZNAEALSVBFCMWAEAAWUWXRPLNZTAPOVVTV");
    msg.plan_id.assign("QPNJUBCTCZYZJXKAFMFTFUTKYOBPNISXSWPHYBNQRHWIRNMGQMLWIZIUVRJPYHUBXSJQAVBDLWESFRPBXZMEUGABKZSIYXMBZKYVAMHUWESRRFJIJIKEAVQEPNTMTDHOLNEVLSANRCGOUUXKFOVMWAGRLZSGDWOKKVGVWCDTDQAZIDZYD");
    msg.description.assign("KAMXQHQGTGPRAMBVDITUTFVISBXFJNHYINUXVUMIMVPGDKURWAXLNVWJOYVXGZHKEQAORRIPOWWXZFGXZPFJOZDRSEWMMNYYNBCTSSTIPLSSIJJFWUBOGDLPBZ");
    msg.reference_frame = 27U;
    msg.leader_bank_lim = 0.685345573824;
    msg.leader_speed_min = 0.820110573708;
    msg.leader_speed_max = 0.344867322058;
    msg.leader_alt_min = 0.35231061493;
    msg.leader_alt_max = 0.526645347887;
    msg.pos_sim_err_lim = 0.497022066622;
    msg.pos_sim_err_wrn = 0.29834636861;
    msg.pos_sim_err_timeout = 17512U;
    msg.converg_max = 0.81585596746;
    msg.converg_timeout = 27732U;
    msg.comms_timeout = 17155U;
    msg.turb_lim = 0.123792118162;
    msg.custom.assign("OYALTIXZWGDNXMIHPEWRPAPFCZQKGRHTEDXBSGIJYZAKBSAEXLEKRIWNO");

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
    msg.setTimeStamp(0.920223395662);
    msg.setSource(14049U);
    msg.setSourceEntity(22U);
    msg.setDestination(7934U);
    msg.setDestinationEntity(107U);
    msg.formation_name.assign("EIWITGMEEHJDRHQSFVQRRNWRUBABDYMPNPTGYWKVOASXLTWQKVASOQOYDWEGWVEYZFZCJIJVHZNEQDPGLBZUMRUTYFFCIXLXWBPTKUQLXHRSUPNOTPBAEOQOVYTAHSADBHMZJFIELCIBSMZKJSMQJPTCLNDVGXZKRYKSJHHZKLTOJDKARMBCLLDGKIEHMNSVCI");
    msg.type = 100U;
    msg.op = 74U;
    msg.group_name.assign("RAXLLBNPFZPOTZHDCMGWMXADDKWTMKXDFFBFSAPKGBCOUGKOEMWUZARQPBUDRVFZTGEVRTGQQHTJVHNEOYXNIHOVIOQLRWMXCLGVNZQXZDLNNHLKKJYYYSGBTTFOJEAPIQBGESBPPNIISYAR");
    msg.plan_id.assign("AHUEQXPTVAYAMTEFWIHEPKKDCXLNGYHVCSUGQJZZOYDIDTSFQYSRRQCHBBBXIRRUDJEVOSGPBNAGMOHMCKHBRAWVIRHPLUUOVUIPGFWCKXZCDMDMNAZDBLRPXBFTNJOFFIFNIEOBJHMCMSWERRLQSGFPZNTOQSTZEXQVWNMDCUFYLKPJITYIJKKXUMU");
    msg.description.assign("QHIQEARDBPDEEJRLJKIBFFPOGOPMHEMDSHTYEMIZRSJNBTUEKTVIK");
    msg.reference_frame = 48U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6607U;
    tmp_msg_0.off_x = 0.949978724511;
    tmp_msg_0.off_y = 0.129548496376;
    tmp_msg_0.off_z = 0.173825973479;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.996519404016;
    msg.leader_speed_min = 0.423741346579;
    msg.leader_speed_max = 0.801379517221;
    msg.leader_alt_min = 0.536925707352;
    msg.leader_alt_max = 0.279250482146;
    msg.pos_sim_err_lim = 0.494005527661;
    msg.pos_sim_err_wrn = 0.313162050633;
    msg.pos_sim_err_timeout = 2681U;
    msg.converg_max = 0.877453388394;
    msg.converg_timeout = 23011U;
    msg.comms_timeout = 18138U;
    msg.turb_lim = 0.310249160977;
    msg.custom.assign("OIIYOODXDCWEX");

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
    msg.setTimeStamp(0.0625478911186);
    msg.setSource(37904U);
    msg.setSourceEntity(25U);
    msg.setDestination(7798U);
    msg.setDestinationEntity(218U);
    msg.timeout = 48718U;
    msg.lat = 0.920794650291;
    msg.lon = 0.142630682774;
    msg.z = 0.883603530531;
    msg.z_units = 41U;
    msg.speed = 0.160708231358;
    msg.speed_units = 194U;
    msg.custom.assign("QPVLSJYWHGLECVSGAPNWCXMRASSGXDEF");

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
    msg.setTimeStamp(0.610290480307);
    msg.setSource(54073U);
    msg.setSourceEntity(86U);
    msg.setDestination(42409U);
    msg.setDestinationEntity(78U);
    msg.timeout = 6573U;
    msg.lat = 0.794891817261;
    msg.lon = 0.645987274847;
    msg.z = 0.405096848416;
    msg.z_units = 66U;
    msg.speed = 0.0445594106124;
    msg.speed_units = 250U;
    msg.custom.assign("JGPBYXCRXWGACHZHFLGTTAXQYNXZQJPGGVBQSMRDBUAIRMNJLVTQFRHGIZUYZXEUSIOZLRAJJKPVNDYBCNIQKMVARSLAZTCUOFDZCBBWHRQPEJCGPYMLMJBVAUAVJNRMCGRSWHOOXFNSWOOWTUXBIFFEYKUDDMVFPKFXSYPWDDVHIJECTEZOXGID");

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
    msg.setTimeStamp(0.316721593845);
    msg.setSource(5701U);
    msg.setSourceEntity(132U);
    msg.setDestination(25571U);
    msg.setDestinationEntity(23U);
    msg.timeout = 40349U;
    msg.lat = 0.395693676296;
    msg.lon = 0.508559371818;
    msg.z = 0.7154204335;
    msg.z_units = 190U;
    msg.speed = 0.427716539554;
    msg.speed_units = 121U;
    msg.custom.assign("MUYEPTCHCJJYTLFCGMOOSPCZNXHGBNNUJJAVHDUUZHTQSNDVMWOYEVCZHGEDUWFZOILBNIROSLXVJTGAAEEBRLIGOLDLDVRZUHBHITBJFIRWGN");

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
    msg.setTimeStamp(0.715556059215);
    msg.setSource(12498U);
    msg.setSourceEntity(215U);
    msg.setDestination(42059U);
    msg.setDestinationEntity(242U);
    msg.timeout = 56356U;
    msg.lat = 0.979432644806;
    msg.lon = 0.834082357026;
    msg.z = 0.772945763965;
    msg.z_units = 193U;
    msg.speed = 0.773922803945;
    msg.speed_units = 36U;
    msg.custom.assign("WGQFUPIPMRPBAZIPZVWXKQSXVHTNJYBVKSZINFJMGHTHRHCJSUIMVVHJCTUGUKSMRBWJRVRWGKMTVTLFOAQIJFOWQZNQU");

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
    msg.setTimeStamp(0.273512392398);
    msg.setSource(25443U);
    msg.setSourceEntity(135U);
    msg.setDestination(52876U);
    msg.setDestinationEntity(201U);
    msg.timeout = 57580U;
    msg.lat = 0.978923239438;
    msg.lon = 0.433559168481;
    msg.z = 0.416939732583;
    msg.z_units = 79U;
    msg.speed = 0.709068499651;
    msg.speed_units = 147U;
    msg.custom.assign("JZTXWSLAVHCZELORKQBHXKLCWBZEPPVCMGOAHUHRQGLGMKNSWYHHYZSEWUMDXZTXKTGNUUPWFISWBZZNYLLDRNMJYOEOIYDKOLVNERUQTFTBGAKFU");

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
    msg.setTimeStamp(0.614700966733);
    msg.setSource(39648U);
    msg.setSourceEntity(220U);
    msg.setDestination(20702U);
    msg.setDestinationEntity(18U);
    msg.timeout = 57238U;
    msg.lat = 0.996191582951;
    msg.lon = 0.205882523214;
    msg.z = 0.99670578493;
    msg.z_units = 132U;
    msg.speed = 0.684079088059;
    msg.speed_units = 171U;
    msg.custom.assign("SKJNWBEUPWEBHRPNEJFTEBZYZPOPBRGPJAWCIUCSFJJORENAPFCEDNPEYJSVJTFDDQHSJLXLWIZRYGJDLMDDKIAHGSXKKSLGCVXMUKATCVNESJWZXAIVLYBVBORKBOAGNVRGUOGXRZIUWMCLXFWQHBBPSXHALZUFUZCDYUAPTZGZKTPQQOWKHXVYHQNISVBGGXYVCEOMDFFQVKXITTEKLONMAQIYMMIWOHNHURCYZ");

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
    msg.setTimeStamp(0.14424314816);
    msg.setSource(44790U);
    msg.setSourceEntity(19U);
    msg.setDestination(34611U);
    msg.setDestinationEntity(49U);
    msg.arrival_time = 0.699766356497;
    msg.lat = 0.808707661908;
    msg.lon = 0.788312596912;
    msg.z = 0.142518224094;
    msg.z_units = 52U;
    msg.travel_z = 0.59334532361;
    msg.travel_z_units = 212U;
    msg.delayed = 59U;

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
    msg.setTimeStamp(0.184303999343);
    msg.setSource(49745U);
    msg.setSourceEntity(177U);
    msg.setDestination(37992U);
    msg.setDestinationEntity(228U);
    msg.arrival_time = 0.344170168272;
    msg.lat = 0.496745473937;
    msg.lon = 0.809311047138;
    msg.z = 0.95230254372;
    msg.z_units = 127U;
    msg.travel_z = 0.975171693878;
    msg.travel_z_units = 61U;
    msg.delayed = 67U;

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
    msg.setTimeStamp(0.363166446913);
    msg.setSource(21380U);
    msg.setSourceEntity(99U);
    msg.setDestination(59096U);
    msg.setDestinationEntity(226U);
    msg.arrival_time = 0.0448347456579;
    msg.lat = 0.987510446506;
    msg.lon = 0.465936446573;
    msg.z = 0.295574582805;
    msg.z_units = 132U;
    msg.travel_z = 0.82197363066;
    msg.travel_z_units = 87U;
    msg.delayed = 174U;

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
    msg.setTimeStamp(0.0186251341527);
    msg.setSource(53046U);
    msg.setSourceEntity(181U);
    msg.setDestination(30022U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.903476357247;
    msg.lon = 0.17144136588;
    msg.z = 0.331020067984;
    msg.z_units = 56U;
    msg.speed = 0.838381644644;
    msg.speed_units = 22U;
    msg.bearing = 0.202649675125;
    msg.cross_angle = 0.0958197877718;
    msg.width = 0.993892774615;
    msg.length = 0.471411197375;
    msg.coff = 37U;
    msg.angaperture = 0.761955602934;
    msg.range = 53386U;
    msg.overlap = 102U;
    msg.flags = 10U;
    msg.custom.assign("SBQQIPASGBJNQVHCFYHMPIQKSMLLRTDXPBOWIPNTCDVZYJRPIZEJDBLIGXWXAUUAJMNJOGLRDFZCQDHLKPGRJUSQJGGEBWXZFUSAAVIMKSXPSKOWWPUOWRUNLVQHUVSFVZKKRJXABEQFHOTHFZSQALCTTVZKNOJEFHKBCT");

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
    msg.setTimeStamp(0.658335638681);
    msg.setSource(14072U);
    msg.setSourceEntity(219U);
    msg.setDestination(52003U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.187066198741;
    msg.lon = 0.0814239552079;
    msg.z = 0.306278595407;
    msg.z_units = 227U;
    msg.speed = 0.00333088251379;
    msg.speed_units = 156U;
    msg.bearing = 0.763415950679;
    msg.cross_angle = 0.988956770461;
    msg.width = 0.841404347151;
    msg.length = 0.706171759777;
    msg.coff = 152U;
    msg.angaperture = 0.698086381997;
    msg.range = 28849U;
    msg.overlap = 251U;
    msg.flags = 24U;
    msg.custom.assign("AMAQJIJUZDXKTQWSTSCBCFWSVUXWOWDIQNJAIPNJHFDTECIGUEOWPHPNDUPNYPHWPEILXVLVQZMUNVAFJYAZBGFYEADORFMCFGR");

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
    msg.setTimeStamp(0.559019358218);
    msg.setSource(39831U);
    msg.setSourceEntity(30U);
    msg.setDestination(32016U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.893434550383;
    msg.lon = 0.471624220351;
    msg.z = 0.268988579184;
    msg.z_units = 214U;
    msg.speed = 0.0296308049449;
    msg.speed_units = 3U;
    msg.bearing = 0.929721762302;
    msg.cross_angle = 0.771388877616;
    msg.width = 0.254105083449;
    msg.length = 0.614479691489;
    msg.coff = 64U;
    msg.angaperture = 0.701581735863;
    msg.range = 25527U;
    msg.overlap = 163U;
    msg.flags = 192U;
    msg.custom.assign("BFMRGVVNYGESRDLYFNHCZYIFOGTUKHOIDLMWFXEBVGIMSXCAWXTEVRBQRHSPJJCIKAPBJVAYWLZXVVSPKZHZDCMTHBUPBDITFZWBWCTXRFIPMOOTFEGPNWMCLEJATKFZFWORHTJKJSXTYVAEAUNKYDVN");

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
    msg.setTimeStamp(0.0798177487175);
    msg.setSource(33389U);
    msg.setSourceEntity(242U);
    msg.setDestination(29002U);
    msg.setDestinationEntity(233U);
    msg.timeout = 3336U;
    msg.lat = 0.211689497092;
    msg.lon = 0.0728421437398;
    msg.z = 0.755849746688;
    msg.z_units = 68U;
    msg.speed = 0.613962681685;
    msg.speed_units = 171U;
    msg.syringe0 = 11U;
    msg.syringe1 = 5U;
    msg.syringe2 = 32U;
    msg.custom.assign("PCPSVEHXUGDRJECGBBCXKWWMZRAUWLEBNAMZPQJOQNQTDWZKOQOXXYGRDVJZMHGMFAFCYIWLKSIEQSOWFFPLJSFNHTCWUAHFQADPPYNGSEHWJLSKFSHKFNIEASKIRGQIRLBQKVXXBYVLUGSIVTXYZUBQBXKCBTDEFGVJUYUJDKIXVROSMZWMAOUZYQPHTVNDLUGTAJNIMIRRYONZCHCTNYVCWLHGEF");

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
    msg.setTimeStamp(0.521298247155);
    msg.setSource(28579U);
    msg.setSourceEntity(7U);
    msg.setDestination(51421U);
    msg.setDestinationEntity(20U);
    msg.timeout = 21878U;
    msg.lat = 0.650293713601;
    msg.lon = 0.276052075128;
    msg.z = 0.0609032781897;
    msg.z_units = 194U;
    msg.speed = 0.786988984118;
    msg.speed_units = 207U;
    msg.syringe0 = 71U;
    msg.syringe1 = 120U;
    msg.syringe2 = 87U;
    msg.custom.assign("BDODXVCDBAWTCBDUFEZAXGWXUTFOYVAJYQEFLNWCOEBFCNOHWXKCPTRIBIHMMCACGPGSFQZTTMDQOJBYCPUOBZPARLTZIPXKIHENVHKEMMSSXGNTFICNQFRVTWGUOKZWDBUADAZVQJYXGFULLFMZIEZGRPNAWHBJ");

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
    msg.setTimeStamp(0.0878141597493);
    msg.setSource(65410U);
    msg.setSourceEntity(80U);
    msg.setDestination(23702U);
    msg.setDestinationEntity(183U);
    msg.timeout = 20655U;
    msg.lat = 0.361985220188;
    msg.lon = 0.724807169689;
    msg.z = 0.0954651498243;
    msg.z_units = 4U;
    msg.speed = 0.262003929566;
    msg.speed_units = 22U;
    msg.syringe0 = 51U;
    msg.syringe1 = 244U;
    msg.syringe2 = 188U;
    msg.custom.assign("LGECUYCKTBRSXLXAFPMZTXTXDKMGNWHXTUJESOJKNDHWYPMWSPDDBGVUNTPLEIVRILOPIWDMDUFKFSQDKBCEOXYYCDVHBZTEOYGMPCALGNVEKBUKUQJOTBHZOJYVWBXFVIXZFFOEPLPYSAYJGFNAOBCQMWVRUVJNWZHNIRSLRAZESRTZFCRQJNQLCWCMVUM");

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
    msg.setTimeStamp(0.979281267742);
    msg.setSource(27289U);
    msg.setSourceEntity(104U);
    msg.setDestination(12613U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.426437798151);
    msg.setSource(30286U);
    msg.setSourceEntity(45U);
    msg.setDestination(24041U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.587647362862);
    msg.setSource(29667U);
    msg.setSourceEntity(101U);
    msg.setDestination(36666U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.153190133839);
    msg.setSource(22386U);
    msg.setSourceEntity(192U);
    msg.setDestination(1183U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.276355240273;
    msg.lon = 0.333478166692;
    msg.z = 0.691051573983;
    msg.z_units = 97U;
    msg.speed = 0.00228561429991;
    msg.speed_units = 96U;
    msg.takeoff_pitch = 0.621974512924;
    msg.custom.assign("EMZGCLTZABOWLNEHCKMXXZKHMGEBEUQAKHLIVIGROMDCXDUSJWHXWAJOGGQSDMSMVUNSPSFCNBHCFQOSEZILZDDNMDSUJIYBICRJFOLRREGKKVWVCPSAYTFJJTBDTRUUNKUHMNFQPGDWUQVYQCLIOVHJBOUGRHFIXHBXFWTRIAEKLWCBAJLUVZYNKZYVFLXBYYVBSENRQAFDZPQYPWLANGPYAXPRJADZYIVTSTENWPKWZMQQFTOPT");

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
    msg.setTimeStamp(0.564354294493);
    msg.setSource(45586U);
    msg.setSourceEntity(227U);
    msg.setDestination(35093U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.434411434585;
    msg.lon = 0.0409758004304;
    msg.z = 0.506141893824;
    msg.z_units = 191U;
    msg.speed = 0.512642195902;
    msg.speed_units = 54U;
    msg.takeoff_pitch = 0.497055644985;
    msg.custom.assign("OBAYBDGURPXORHDHOFGPBELFVDNVSJYCSHDREBCRCGAKGFQQYSENCSXJYJKSHJIXOMWCXDEQVQKWFDWZIJIVUCNDHNKPWPBKXGOZGPMOPTJEGUUKDYUIYZZGCAIEEFJAINXPMKZAND");

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
    msg.setTimeStamp(0.526940388022);
    msg.setSource(56303U);
    msg.setSourceEntity(3U);
    msg.setDestination(33320U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.866469866606;
    msg.lon = 0.286977098866;
    msg.z = 0.952949492286;
    msg.z_units = 66U;
    msg.speed = 0.515296136002;
    msg.speed_units = 107U;
    msg.takeoff_pitch = 0.631924526616;
    msg.custom.assign("UXVAYQMWTYJHVLNSBXDEIDLJCVXKTFUSQJSIV");

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
    msg.setTimeStamp(0.143260084879);
    msg.setSource(40311U);
    msg.setSourceEntity(224U);
    msg.setDestination(20268U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.0364582647685;
    msg.lon = 0.180845475926;
    msg.z = 0.72859323398;
    msg.z_units = 202U;
    msg.speed = 0.214585024083;
    msg.speed_units = 202U;
    msg.abort_z = 0.678554685359;
    msg.bearing = 0.345243545565;
    msg.glide_slope = 37U;
    msg.glide_slope_alt = 0.918224101284;
    msg.custom.assign("TWLWXYAKHRTAPFGSKCDOFCBDAMRXSECHEOAIOXDYJQYHVUZOGITFOEGVAZEZYUZAJGJZQKYIQJVDODDTUHVKHDERKQSNTIMPQXOYWRTCFWMSVOQAEIHXQUWKFFVTPBRQYDRLSPBOUFIAJSZQMPWMXJZCKMVNHCYTRIGVSATWNHHMLLBWQSZFMGBGBERIEFNAMNCVLNWRBYDICNLGKNUYSOGXJXZHSJUIUDGWRPVTLUXKKU");

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
    msg.setTimeStamp(0.557787116396);
    msg.setSource(8690U);
    msg.setSourceEntity(170U);
    msg.setDestination(48064U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.274956844996;
    msg.lon = 0.85180805603;
    msg.z = 0.907685270469;
    msg.z_units = 162U;
    msg.speed = 0.726884651171;
    msg.speed_units = 75U;
    msg.abort_z = 0.714562327562;
    msg.bearing = 0.306390386103;
    msg.glide_slope = 145U;
    msg.glide_slope_alt = 0.0359343350972;
    msg.custom.assign("HWQRFAUDTPJRYKFZQJYZDMFDWWWYOIFJECOFMPLCTKXIOVDKGVQRNQYKYMBORAPXPUWATQSBHNUZRBGCKHMGUJVXHCVILLFWECENQXQLHLHVQBLUSJMCZTTBLFBSJEEEMAXWVKBLNLIZRAMCUOVAOVKTHSTBIDSPYDGVSUTNZVEEUCCKPWMCPAMKWFTYXJSHNRURQBXIGDZOALHKDIZBSGGTQINXZNJ");

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
    msg.setTimeStamp(0.197694805452);
    msg.setSource(50421U);
    msg.setSourceEntity(82U);
    msg.setDestination(4171U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.52654217502;
    msg.lon = 0.81475476763;
    msg.z = 0.853584545985;
    msg.z_units = 184U;
    msg.speed = 0.86886308683;
    msg.speed_units = 52U;
    msg.abort_z = 0.0430551993132;
    msg.bearing = 0.248797405948;
    msg.glide_slope = 124U;
    msg.glide_slope_alt = 0.920388972732;
    msg.custom.assign("TRSCZHGJLHQRIFOLBTESLLGRATEYJVGZXLHYDWTRNBEKSLAMPSIORJFBNBVMAW");

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
    msg.setTimeStamp(0.880474415446);
    msg.setSource(42944U);
    msg.setSourceEntity(229U);
    msg.setDestination(18238U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.929816538654;
    msg.lon = 0.591807141799;
    msg.speed = 0.800654761974;
    msg.speed_units = 87U;
    msg.limits = 32U;
    msg.max_depth = 0.603463034496;
    msg.min_alt = 0.295258365054;
    msg.time_limit = 0.477634193483;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.921452448383;
    tmp_msg_0.lon = 0.0811592253891;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("MWNWXCCSHLUCEIMJTYSIJKWUOFDLNMCQMLJYCGIISVAQALPBA");
    msg.custom.assign("OMFLRBICNNJLBMLAAZSQGQHGEIPEDEOWFOWAQSTNRUFAWKKJNNYLKEZQVDTZUWLZIDXXUHZPMSVYBACMNZZQECBVYIWHWVJDLVNBDFKEOTCTMGHXBUEKZHOPIKSDCGQHVARJCMXNMCD");

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
    msg.setTimeStamp(0.824560126581);
    msg.setSource(61009U);
    msg.setSourceEntity(57U);
    msg.setDestination(31981U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.803030939318;
    msg.lon = 0.514887668582;
    msg.speed = 0.176009957989;
    msg.speed_units = 237U;
    msg.limits = 49U;
    msg.max_depth = 0.817306746361;
    msg.min_alt = 0.0749618535176;
    msg.time_limit = 0.105834080445;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.850676654734;
    tmp_msg_0.lon = 0.299198404797;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("UPGBMSVCDTWZANJAFKGHASFXTMGMDALXXKORBDRVZCPGYDNSUEMEVO");
    msg.custom.assign("EEZDYJVNMOPVKTDDGBHUUICVL");

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
    msg.setTimeStamp(0.981499288533);
    msg.setSource(27381U);
    msg.setSourceEntity(48U);
    msg.setDestination(50445U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.0356900613589;
    msg.lon = 0.732230354006;
    msg.speed = 0.0194013278676;
    msg.speed_units = 239U;
    msg.limits = 107U;
    msg.max_depth = 0.930610814481;
    msg.min_alt = 0.539349402181;
    msg.time_limit = 0.176276821869;
    msg.controller.assign("LTLOSXSAWIUAUSENEOGODRJJLRCKANQPLCMXMGBIFAQWWRCBIRSPXZTOSNZWCZCWZCFHWVEGFPEEUEDDXJDNKLGTKVAGVXBX");
    msg.custom.assign("FMUCWTNLNWG");

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
    msg.setTimeStamp(0.33014191505);
    msg.setSource(50012U);
    msg.setSourceEntity(225U);
    msg.setDestination(33047U);
    msg.setDestinationEntity(38U);
    msg.target.assign("LBFRGLMZBAYCUODFKEKJPOECIYPETGIRNWYMHGCLCYHMURODFALRCEZLFUGWXMVFJIQWALIJTKPHNGFSGIKCUJXNBCBLNHTDZPKOTONIHVMWSQWWVJZKXNQRQDMQZRIDSYJGGKSZAYAYNEUOPOEOQAUPSEVUFZZTSOXPZCUTJCSJFDMKRSFSWQDXNHYXIVGHILDSYQENKILCPTMVXJQTVKLRADHTRGRFBWABBZXTOBYVNBAVHXXMQWUH");
    msg.max_speed = 0.162909468828;
    msg.speed_units = 175U;
    msg.lat = 0.898041989316;
    msg.lon = 0.465701690161;
    msg.z = 0.659334146276;
    msg.z_units = 230U;
    msg.custom.assign("SOFYDGPMBXWIXNWKWQEBDVMTBCLZALXUNMYW");

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
    msg.setTimeStamp(0.64286664083);
    msg.setSource(16935U);
    msg.setSourceEntity(222U);
    msg.setDestination(44188U);
    msg.setDestinationEntity(213U);
    msg.target.assign("ITDBLFGGZUKYWNIJMBSKPHOOLBMKASBXCFKJLDEMNNOUEZBHWONVGGSGNIOCCUGYLTTJDHLRMWKHMIAYTEPZUJAXFERGTKUNRNROPLEUIFXZOWWPQIZZSQMEPTVETVJQHKQAYDLZQUNQXRDJAHM");
    msg.max_speed = 0.146840303444;
    msg.speed_units = 15U;
    msg.lat = 0.133216496066;
    msg.lon = 0.117490559338;
    msg.z = 0.917643382371;
    msg.z_units = 173U;
    msg.custom.assign("LPTCJVJRVRIYPJLEBANFZAXKSWZUEFDUZESQFYTSMFHCNVJCSRAKHWWGKIHIDUDZOICQXPDPFYJKTWKKYFGBVZUEKDCFAVRUOHHQGCSHTQZEMQJKJLVXWBGVQBKDWBHUJGUPDMM");

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
    msg.setTimeStamp(0.964683230173);
    msg.setSource(8385U);
    msg.setSourceEntity(74U);
    msg.setDestination(36007U);
    msg.setDestinationEntity(47U);
    msg.target.assign("ANCOYVVPGMBEFOHWUNHTAWUOLUHXFWIQSLSIOCNFGVZJLNXZZMZOJBTNZLUYIIQMHUARKSURKADKKZQREVFGRDCMFGPYNAAHTGDBBYRVFCVGAFFNPXIXFWNLJOMMXMKJOVKVPQIEWBPEEQWLBPHXSXZRTUCIDPJMJYYYETGZLKXGIJYHBDQWXKZLWUSSSGINETPCPETQQWUTWS");
    msg.max_speed = 0.792042924353;
    msg.speed_units = 8U;
    msg.lat = 0.165672432179;
    msg.lon = 0.803361504446;
    msg.z = 0.571532834865;
    msg.z_units = 239U;
    msg.custom.assign("BYBLASGFYGIHYPBULOSBPLEMJWIDPCWCQRIEBQRBDKHAAEFYDXZOKLWTDGTCFNFQ");

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
    msg.setTimeStamp(0.842838840615);
    msg.setSource(11297U);
    msg.setSourceEntity(89U);
    msg.setDestination(63367U);
    msg.setDestinationEntity(127U);
    msg.op_mode = 176U;
    msg.error_count = 39U;
    msg.error_ents.assign("ZSVPOFDWCMBYEDRNOMHJJHBATUQEEVCGIGDSMYPBIYDDSIIENVNCHCCATAYGYHZXNIUCWWKXKFPPLPDSBVMOTAJJJTAWMTFRDEXPXWHOBUWABWO");
    msg.maneuver_type = 64442U;
    msg.maneuver_stime = 0.982097971504;
    msg.maneuver_eta = 30456U;
    msg.control_loops = 2466548578U;
    msg.flags = 173U;
    msg.last_error.assign("XRJGTJLDWIBIKGQBTJZEDFLYQMXGUIILBEXGUWUFHANPMUS");
    msg.last_error_time = 0.45632744603;

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
    msg.setTimeStamp(0.350768008327);
    msg.setSource(52070U);
    msg.setSourceEntity(92U);
    msg.setDestination(36273U);
    msg.setDestinationEntity(200U);
    msg.op_mode = 151U;
    msg.error_count = 88U;
    msg.error_ents.assign("OGRNYXLNLMPMMXVQJDGEJUUUYSLJTZUHKHQLZQCBDVRPENQIQQSGTDIEGRGZOEU");
    msg.maneuver_type = 59603U;
    msg.maneuver_stime = 0.111977732871;
    msg.maneuver_eta = 27549U;
    msg.control_loops = 3695950237U;
    msg.flags = 198U;
    msg.last_error.assign("QGXRPCFQPSBTJOBHOZWVCMEKTSBTVAHCFHJQCYEGORHQPVAIDRFFWNXNXOWWKCBRNMYUOKCDJTZZFOSNAQONPSBAOREFAERSVUIKQIYXZIZZEWLJMQELYBVGAUSSHHLDBEVIDBFXMTMRAJJLDBIGQEPXXLFGDUZCPZZMNAYCXXYWVUWTIYIMJD");
    msg.last_error_time = 0.097964057034;

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
    msg.setTimeStamp(0.996544907898);
    msg.setSource(10531U);
    msg.setSourceEntity(94U);
    msg.setDestination(26698U);
    msg.setDestinationEntity(250U);
    msg.op_mode = 29U;
    msg.error_count = 218U;
    msg.error_ents.assign("QIYUECNIHNOJNJEVWHBHUJZXCOTRXRACZSQFJKRVQPMRBDTXPFGSWBFNFGPLJSOULZHUNIEBVGEXZAFDBNIIPTWJZ");
    msg.maneuver_type = 35674U;
    msg.maneuver_stime = 0.920756642174;
    msg.maneuver_eta = 27555U;
    msg.control_loops = 666442757U;
    msg.flags = 66U;
    msg.last_error.assign("DUFPFHLLRSZVSMMGUPFQGGAGULCOIXBKOJKTFHZGRKLIHIANSYCQAVZIKXDOTTDMDMHRTGFNLUYBSDBGZSPGRITBXWCSQGWBUEYEBWKJQNEXCIQHMEXYEHLQWBWVJDSEEVTAPWATAYOJPVUKJAQTUWKSMPUDOLMQODZHNMYZVIJCCRDXIEZNRCYPVFNOZBCKQOBVYLZRIY");
    msg.last_error_time = 0.596324557823;

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
    msg.setTimeStamp(0.365490470947);
    msg.setSource(44593U);
    msg.setSourceEntity(133U);
    msg.setDestination(58279U);
    msg.setDestinationEntity(3U);
    msg.type = 194U;
    msg.request_id = 51498U;
    msg.command = 144U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("OGPFEFOAJHBWZLLWCGMTPKXBKNTAFNMYCSPUNYZVYUEXBYVJECWXLLRXBFVYCJBLSTGHGROXRCSWRDHSKMYEQWWXRFWNODGRSHGVJZJPDUQOHTNFJIDTMLESEZILYIHZNLDUOAIQHKXZPHNWQTPBSBUGPFNLIBRKHRZNZMGXSAMSCSJELMNWVKIQKAXECGQJKFMOAACFEQTUOYYPIEQVZJFDUCD");
    tmp_msg_0.max_speed = 0.709728087282;
    tmp_msg_0.speed_units = 236U;
    tmp_msg_0.lat = 0.509095362049;
    tmp_msg_0.lon = 0.516345364728;
    tmp_msg_0.z = 0.913676411854;
    tmp_msg_0.z_units = 45U;
    tmp_msg_0.custom.assign("WBZPYHTJSANMVRZH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50692U;
    msg.info.assign("LLPGXOUTQWXXHWBNLZNDUPUSMTRFMIINJXGE");

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
    msg.setTimeStamp(0.547219662291);
    msg.setSource(8107U);
    msg.setSourceEntity(240U);
    msg.setDestination(34511U);
    msg.setDestinationEntity(105U);
    msg.type = 133U;
    msg.request_id = 27680U;
    msg.command = 168U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 46193U;
    tmp_msg_0.lat = 0.765544640011;
    tmp_msg_0.lon = 0.66042396488;
    tmp_msg_0.z = 0.727751962025;
    tmp_msg_0.z_units = 52U;
    tmp_msg_0.pitch = 0.647174676357;
    tmp_msg_0.amplitude = 0.929972550889;
    tmp_msg_0.duration = 35546U;
    tmp_msg_0.speed = 0.631977133017;
    tmp_msg_0.speed_units = 84U;
    tmp_msg_0.radius = 0.574209105706;
    tmp_msg_0.direction = 80U;
    tmp_msg_0.custom.assign("IKZPVMXXCQQECZSWABVYGSUOKAPRMLHQPACJSOOPDCXUBLWEJPAXVJHJLWTWDNMFRTWHOVTAOWUVWGRPXZXRWYHHKQEZKDUMDDBMCFBYWFJHDRVXJLTHIGKASEUBOMYLOCMTIQECBYXIZTUIJDEFKGCIUDNZLZTLMKNCJAEJLAHONBEQIVL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 47532U;
    msg.info.assign("GZVPYTWCVZWJRUHGZYBZFVQFKKVHPBNHODANYXQWOVMHLWVSREOTDRIQMYVJQRLEKRFTPKUN");

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
    msg.setTimeStamp(0.381183170992);
    msg.setSource(9256U);
    msg.setSourceEntity(21U);
    msg.setDestination(19507U);
    msg.setDestinationEntity(224U);
    msg.type = 145U;
    msg.request_id = 29886U;
    msg.command = 72U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 22936U;
    tmp_msg_0.custom.assign("CPCIBBRWAKASEPZXVVRSKMICXGMUQHOLMJDMTGDULVJTKXOHMHVCZNDFAUFZYVLJKXCIZWUQTIIQYGEPRBLLAFBDATQWHXJPNKXMEKVZTIRRDZUUUNXBOIOCEHOPBIGSPSGVXARWDPNDENWFOHG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 23850U;
    msg.info.assign("UYPRTAAWJIKBOGNQODYSBOULRBLWGKLJNQFAUYXTUIZIXHVMVTNDVZBXZLJYLUGONYBZFETSELRQJMSXQTSAUTDMWZGRCEGITNVZHFCKGUMFHMCEWFDSXZSVAPIQZUJAJKBELGJFHDDVILVVQPWRCBJKQEXKVYKOISPFBKRRHRYMECWSZCNJBXHOPRBHNTDJOEHEXNMIVWCWNGRICIPKAYOHQTLCKOMWNFSMPL");

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
    msg.setTimeStamp(0.59954439565);
    msg.setSource(41221U);
    msg.setSourceEntity(29U);
    msg.setDestination(6997U);
    msg.setDestinationEntity(0U);
    msg.command = 60U;
    msg.entities.assign("DRFWZCUYASZOBPBQIJENYFSDAQOSWIAOAAFKTGMQHBLPWKQCHBYBTWVNSEERCNTUGOQYZDSICPUGIVHEXLRMNBVGIKPCGNOQMOZFAOAWHLAWLEAMPRQFJKXORICANXKWDGLPJRVDYKEUBDRBCSTYJQUFJHHMXKGXXUTTFZYLSUZBFGCJHNQLXNYEPNZGZOMWZETFYVXDLSLFPTMJGBMVRNDJMT");

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
    msg.setTimeStamp(0.465301533689);
    msg.setSource(44054U);
    msg.setSourceEntity(42U);
    msg.setDestination(6024U);
    msg.setDestinationEntity(183U);
    msg.command = 170U;
    msg.entities.assign("QUNDFJBNDPVPXIFTCYXMGKICCZKVIACTELQSVBQEMKWPEASIUKZFFMDUYJYVJLQBXOHGYCEAHOTBZANMTMQHYJNYFBOVHFHDERIGZAUIJUHSNEZGGFPDWRFYIPLSXSPSBMWIQDMQJFSWVGZRJOZVHKRCRLWVFBUD");

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
    msg.setTimeStamp(0.784061266864);
    msg.setSource(31237U);
    msg.setSourceEntity(101U);
    msg.setDestination(43986U);
    msg.setDestinationEntity(181U);
    msg.command = 174U;
    msg.entities.assign("NCWUVFMJSYLIJDASBRYAPEHJHLQMOZOVKTMOEHPVZXOYRWLJCVZIECCGYADDEPUGRTILFVIINAJQKVTGVHCNKYBFKUJSTHNWWBHPJBPRPTDTEYVDCXNMSXVLKBJXWUIZH");

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
    msg.setTimeStamp(0.0746233054807);
    msg.setSource(17210U);
    msg.setSourceEntity(89U);
    msg.setDestination(25644U);
    msg.setDestinationEntity(228U);
    msg.mcount = 188U;
    msg.mnames.assign("JRXJCREZGOBAMJUEGXXBYBMMYEFVDJTXMUSIPVFIHBLJHASFNEYKAQLNRQOOQIWKBXNODZPQUGVZSBWLWBRLRVQZXPOYPSTFHZFJPJKVQTUYDRUWSILFUKI");
    msg.ecount = 231U;
    msg.enames.assign("CSMNZEIMBLQBGZIIABYUSMFUOLFQZMBKYAEMVGULFDJTBFBCT");
    msg.ccount = 11U;
    msg.cnames.assign("SQIPCXDUAATENYKBSTRIBCNJURISJXJRMSVJEWATHFDLEVHLEOEAMECWGAXBEUQHCGYURWZIFYCDVU");
    msg.last_error.assign("ICDXFUYLCOVSTFHLWZGGBRBYKJTRMVEBZGJJGNAQWUNZPKSGALPGTKCAGYKDYGZWWFFDYBTCNMVQOTWXCBQOEPEIFAIVSFNHXTRZOHRZUAXCSKMHEMTPUEVIRVBDTQSUCXAIHXIAPEKNNXMEDMLCPOOJSKQAVVLWIUIVWFBSKMPUXXESIHWLKPJLLISEWFRBPKOYSPVMZFQADREDOXCZCDYDLQTOBNZDMHYFG");
    msg.last_error_time = 0.576076905399;

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
    msg.setTimeStamp(0.269312357895);
    msg.setSource(51992U);
    msg.setSourceEntity(128U);
    msg.setDestination(8648U);
    msg.setDestinationEntity(233U);
    msg.mcount = 6U;
    msg.mnames.assign("OKSTQTEZYGNLOBIUTDKNMWFORJXEYMAWDIXBONEZUBNCGNWCSVMMGFEZCAVAUJPSETOXBJLCKGTNHBXVDXQRHJEBNSLGTHUHTCSDRUH");
    msg.ecount = 182U;
    msg.enames.assign("IIDAIEZRHUYMEVFHHPL");
    msg.ccount = 42U;
    msg.cnames.assign("KYLQGSBGJIKPZTISPXKDNMCZOOVFUZHIBBCZALJGUOJSLJEFYOWMPARIMUQMWCAWKMDRAODVNDAKLXDKRBFGDPEFVUVZEYXJPXHABSFMZVOWMDNQXCHFBGTLSJKHUTFCVCTVBYLFPTIEJZWQINNGDHJNSAXQHINMWTYZVWRSLOFHZWRKNESQQNQEUEBA");
    msg.last_error.assign("STMPLUIEXTRTKMHORINICFYGRWLQNWTCLYUEENVHGZFIFGUPKCRAESKFHVCWUIANSAXJJZQUKWNWKOBMABTREQAKDWTVZNMLHOWJZJXUEPTQRYODMDQJNSDESCUXBCL");
    msg.last_error_time = 0.281767220296;

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
    msg.setTimeStamp(0.690323295323);
    msg.setSource(35267U);
    msg.setSourceEntity(196U);
    msg.setDestination(40834U);
    msg.setDestinationEntity(19U);
    msg.mcount = 209U;
    msg.mnames.assign("PWRMSEWIBSTJOHIAIMLQWXXKLRCUNUAN");
    msg.ecount = 129U;
    msg.enames.assign("MKXGRNNMLUEMFWFUZQKOCGNAJFQTPCUZNVSWTUDEWFVHMTAQKWRODRBWLBEGZHFJKAPDOSGKBUPSSAIUZIMTBRDPCLEHJDKH");
    msg.ccount = 124U;
    msg.cnames.assign("VZTICRGPDDVSCPCXGWAVNKEKYEQNPZPMABBZPDOIACVGFWTUCIRFQBKORTEJJHEMYWRBXEETFQVSLJOIJKXPNOGLDQ");
    msg.last_error.assign("IPPEMLEOODCVBMGKBLJKVANNFQEYF");
    msg.last_error_time = 0.130628750004;

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
    msg.setTimeStamp(0.296352482632);
    msg.setSource(6082U);
    msg.setSourceEntity(109U);
    msg.setDestination(19231U);
    msg.setDestinationEntity(194U);
    msg.mask = 82U;
    msg.max_depth = 0.571543555118;
    msg.min_altitude = 0.138375196228;
    msg.max_altitude = 0.162831400796;
    msg.min_speed = 0.443852040777;
    msg.max_speed = 0.767886528379;
    msg.max_vrate = 0.348790541057;
    msg.lat = 0.645831618271;
    msg.lon = 0.903249482413;
    msg.orientation = 0.128789997063;
    msg.width = 0.175771871131;
    msg.length = 0.525014062141;

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
    msg.setTimeStamp(0.750631201867);
    msg.setSource(17732U);
    msg.setSourceEntity(92U);
    msg.setDestination(3670U);
    msg.setDestinationEntity(91U);
    msg.mask = 175U;
    msg.max_depth = 0.0386033563905;
    msg.min_altitude = 0.411041109082;
    msg.max_altitude = 0.74733726799;
    msg.min_speed = 0.231510028703;
    msg.max_speed = 0.732240357802;
    msg.max_vrate = 0.148833768436;
    msg.lat = 0.95289467598;
    msg.lon = 0.930578096683;
    msg.orientation = 0.635274451319;
    msg.width = 0.494708387164;
    msg.length = 0.0782728268478;

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
    msg.setTimeStamp(0.554734017952);
    msg.setSource(25282U);
    msg.setSourceEntity(29U);
    msg.setDestination(42633U);
    msg.setDestinationEntity(22U);
    msg.mask = 40U;
    msg.max_depth = 0.347757500067;
    msg.min_altitude = 0.304698371081;
    msg.max_altitude = 0.906414841726;
    msg.min_speed = 0.855811038617;
    msg.max_speed = 0.643755556925;
    msg.max_vrate = 0.808465904123;
    msg.lat = 0.667652593396;
    msg.lon = 0.81690593822;
    msg.orientation = 0.922394843426;
    msg.width = 0.622872754711;
    msg.length = 0.55874162325;

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
    msg.setTimeStamp(0.324453355654);
    msg.setSource(56924U);
    msg.setSourceEntity(5U);
    msg.setDestination(14471U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.614082684907);
    msg.setSource(20148U);
    msg.setSourceEntity(88U);
    msg.setDestination(16955U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.085036128597);
    msg.setSource(887U);
    msg.setSourceEntity(174U);
    msg.setDestination(15283U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.119214107769);
    msg.setSource(53838U);
    msg.setSourceEntity(18U);
    msg.setDestination(51472U);
    msg.setDestinationEntity(98U);
    msg.duration = 36969U;

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
    msg.setTimeStamp(0.962780701125);
    msg.setSource(4559U);
    msg.setSourceEntity(187U);
    msg.setDestination(40151U);
    msg.setDestinationEntity(117U);
    msg.duration = 53579U;

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
    msg.setTimeStamp(0.692039217194);
    msg.setSource(6501U);
    msg.setSourceEntity(241U);
    msg.setDestination(61550U);
    msg.setDestinationEntity(80U);
    msg.duration = 45944U;

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
    msg.setTimeStamp(0.196670303314);
    msg.setSource(41262U);
    msg.setSourceEntity(234U);
    msg.setDestination(13962U);
    msg.setDestinationEntity(150U);
    msg.enable = 85U;
    msg.mask = 1349985552U;
    msg.scope_ref = 3566988146U;

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
    msg.setTimeStamp(0.0356563296193);
    msg.setSource(38504U);
    msg.setSourceEntity(44U);
    msg.setDestination(9242U);
    msg.setDestinationEntity(37U);
    msg.enable = 35U;
    msg.mask = 1927852664U;
    msg.scope_ref = 1802554211U;

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
    msg.setTimeStamp(0.33772887309);
    msg.setSource(48891U);
    msg.setSourceEntity(231U);
    msg.setDestination(6824U);
    msg.setDestinationEntity(180U);
    msg.enable = 50U;
    msg.mask = 144637533U;
    msg.scope_ref = 1647527343U;

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
    msg.setTimeStamp(0.988140223881);
    msg.setSource(59979U);
    msg.setSourceEntity(163U);
    msg.setDestination(57003U);
    msg.setDestinationEntity(192U);
    msg.medium = 9U;

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
    msg.setTimeStamp(0.908621525398);
    msg.setSource(44021U);
    msg.setSourceEntity(183U);
    msg.setDestination(45501U);
    msg.setDestinationEntity(4U);
    msg.medium = 149U;

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
    msg.setTimeStamp(0.671543259092);
    msg.setSource(46288U);
    msg.setSourceEntity(11U);
    msg.setDestination(56522U);
    msg.setDestinationEntity(206U);
    msg.medium = 85U;

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
    msg.setTimeStamp(0.855711038557);
    msg.setSource(38997U);
    msg.setSourceEntity(241U);
    msg.setDestination(31351U);
    msg.setDestinationEntity(172U);
    msg.value = 0.897018103075;
    msg.type = 182U;

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
    msg.setTimeStamp(0.818709053855);
    msg.setSource(51030U);
    msg.setSourceEntity(217U);
    msg.setDestination(3542U);
    msg.setDestinationEntity(91U);
    msg.value = 0.224342019449;
    msg.type = 224U;

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
    msg.setTimeStamp(0.957786728009);
    msg.setSource(53351U);
    msg.setSourceEntity(51U);
    msg.setDestination(10644U);
    msg.setDestinationEntity(167U);
    msg.value = 0.673164912495;
    msg.type = 17U;

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
    msg.setTimeStamp(0.494424438229);
    msg.setSource(43141U);
    msg.setSourceEntity(118U);
    msg.setDestination(43229U);
    msg.setDestinationEntity(44U);
    msg.possimerr = 0.529494633904;
    msg.converg = 0.756160491746;
    msg.turbulence = 0.501514800659;
    msg.possimmon = 91U;
    msg.commmon = 78U;
    msg.convergmon = 246U;

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
    msg.setTimeStamp(0.0932573147223);
    msg.setSource(18584U);
    msg.setSourceEntity(208U);
    msg.setDestination(61090U);
    msg.setDestinationEntity(63U);
    msg.possimerr = 0.000162536633172;
    msg.converg = 0.796529829765;
    msg.turbulence = 0.716775143153;
    msg.possimmon = 85U;
    msg.commmon = 76U;
    msg.convergmon = 135U;

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
    msg.setTimeStamp(0.462776363806);
    msg.setSource(26692U);
    msg.setSourceEntity(52U);
    msg.setDestination(50960U);
    msg.setDestinationEntity(181U);
    msg.possimerr = 0.0727619145594;
    msg.converg = 0.0420714435581;
    msg.turbulence = 0.217850960172;
    msg.possimmon = 98U;
    msg.commmon = 85U;
    msg.convergmon = 99U;

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
    msg.setTimeStamp(0.479008392759);
    msg.setSource(18521U);
    msg.setSourceEntity(127U);
    msg.setDestination(7257U);
    msg.setDestinationEntity(252U);
    msg.autonomy = 107U;
    msg.mode.assign("MKWYOKHWBRHVRNTHGQVYVPMEFQTFQELXXSDFSEHFUEOYRTDHPNUIYHEXPFLWAIMYZTLGZDJPDSBAGCQACUEVHLSOILJMACZKJELKZRJPDUGWNDJYFRAJBTLQWUUKBOZUXFOJJSYHKZOHEHUSSCMFQTXGMXPCTUZCTSAVOBYMDBOOWNRLCPEQIDDAWJXCIZKGKVJQXWVOQLMRBSGTZKRABSYNGWFRIXVKIUPVFWIGXNT");

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
    msg.setTimeStamp(0.811897981787);
    msg.setSource(49977U);
    msg.setSourceEntity(83U);
    msg.setDestination(64913U);
    msg.setDestinationEntity(59U);
    msg.autonomy = 5U;
    msg.mode.assign("SLSBTFULJKHW");

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
    msg.setTimeStamp(0.443791539538);
    msg.setSource(49188U);
    msg.setSourceEntity(110U);
    msg.setDestination(55500U);
    msg.setDestinationEntity(221U);
    msg.autonomy = 55U;
    msg.mode.assign("AQXXXHKDNSNIAHNVKLJZABOBDDIKOGZTARHLPEPMLLNQXMXFITV");

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
    msg.setTimeStamp(0.209940922078);
    msg.setSource(18308U);
    msg.setSourceEntity(179U);
    msg.setDestination(16762U);
    msg.setDestinationEntity(18U);
    msg.type = 119U;
    msg.op = 168U;
    msg.possimerr = 0.407291261017;
    msg.converg = 0.328485985646;
    msg.turbulence = 0.0476572861096;
    msg.possimmon = 67U;
    msg.commmon = 173U;
    msg.convergmon = 114U;

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
    msg.setTimeStamp(0.99646335832);
    msg.setSource(34463U);
    msg.setSourceEntity(164U);
    msg.setDestination(51727U);
    msg.setDestinationEntity(198U);
    msg.type = 80U;
    msg.op = 72U;
    msg.possimerr = 0.342181553834;
    msg.converg = 0.408238470921;
    msg.turbulence = 0.737927131577;
    msg.possimmon = 35U;
    msg.commmon = 237U;
    msg.convergmon = 46U;

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
    msg.setTimeStamp(0.365236879021);
    msg.setSource(7725U);
    msg.setSourceEntity(181U);
    msg.setDestination(65444U);
    msg.setDestinationEntity(116U);
    msg.type = 4U;
    msg.op = 143U;
    msg.possimerr = 0.581339948162;
    msg.converg = 0.0209667096652;
    msg.turbulence = 0.938153492668;
    msg.possimmon = 125U;
    msg.commmon = 155U;
    msg.convergmon = 110U;

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
    msg.setTimeStamp(0.794824065726);
    msg.setSource(17042U);
    msg.setSourceEntity(8U);
    msg.setDestination(26395U);
    msg.setDestinationEntity(224U);
    msg.op = 75U;
    msg.comm_interface = 78U;
    msg.period = 54324U;
    msg.sys_dst.assign("OBXTWGJUAMAFCEAOHVMRDJOKBEKVODITPFUSSTBLXJHNKQSKRRGCVSSCNHRRUUSCFGIKLQTYYLYVYZJTNBPMHFVUBUFEDCZMUFVRZJPAZGABXSXWEXMZLHNWFRTKALNEOOYWDQQOOCLKTFWXNSXERTPDLAXZYIZJTDYYTNEABDEXHXRQVKPPFGLWNVGUNLQHCIKMDWVCRHJPWIMNQPGQBIGMIIQC");

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
    msg.setTimeStamp(0.621248872645);
    msg.setSource(26772U);
    msg.setSourceEntity(178U);
    msg.setDestination(52559U);
    msg.setDestinationEntity(8U);
    msg.op = 168U;
    msg.comm_interface = 211U;
    msg.period = 52902U;
    msg.sys_dst.assign("OCVFZJGNDEUBBGGCUHEJVIYKUFSECYUOSVHMBHGVQFLCXVDKLRTOSGWVZPVNMGFKPBZSZNDGUCQZPKVNCNTQPYPSIEXADTICWRSFVQFOOTARRIORTHWJSEXPUAUY");

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
    msg.setTimeStamp(0.230179056881);
    msg.setSource(6877U);
    msg.setSourceEntity(155U);
    msg.setDestination(28510U);
    msg.setDestinationEntity(42U);
    msg.op = 234U;
    msg.comm_interface = 235U;
    msg.period = 4317U;
    msg.sys_dst.assign("QWFMDVEZMOOAQYTAEBEMPQKWGFYDGFXLQYKROHRNJCUFZHFDZGNDQCZRVAIUQWPLUZENNCCJKBVOUSINVTKLNGQCFRHHUFYJSZWYAUVOHEPEZISLMBMPIGRLOAPIJB");

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
    msg.setTimeStamp(0.895214030811);
    msg.setSource(15654U);
    msg.setSourceEntity(201U);
    msg.setDestination(19995U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.131032853588);
    msg.setSource(63065U);
    msg.setSourceEntity(152U);
    msg.setDestination(7103U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.506359554299);
    msg.setSource(18248U);
    msg.setSourceEntity(152U);
    msg.setDestination(57964U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.258984106225);
    msg.setSource(31243U);
    msg.setSourceEntity(102U);
    msg.setDestination(61423U);
    msg.setDestinationEntity(22U);
    msg.plan_id.assign("YHJVSCDOYGCILBVJJQCPGXZLFMOTMKFNXGTQEVZEENRFQTTOKRYVLLEMKUNPABYRAAVTUZDXMFCPWSBEUBTKLVDZBUROW");
    msg.description.assign("IAPXNEBJRDFLDRPMJHTAJKVTKEFVQDCKPENERRKHZLWCSBAWJIXAWAIUZNGUUNNSFIURHMMLVLALYGZYLMHCOIYBRIZYXQNZTQWVHJVMPITVQCGZYNBRUKYHKQMASQJQPEWVOTQWDOKCBGOFXPJKFCQBBPW");
    msg.vnamespace.assign("XAZJKUUSCHQCZ");
    msg.start_man_id.assign("QYVUFWNUDOSLSLIJFBJMPETSGYBKAXMFZMRQXFKNOBBIPLGHLARCYEA");
    IMC::Pulse tmp_msg_0;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::PathPoint tmp_msg_1;
    tmp_msg_1.x = 0.644452892263;
    tmp_msg_1.y = 0.970442986583;
    tmp_msg_1.z = 0.175988613979;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.463556837956);
    msg.setSource(12330U);
    msg.setSourceEntity(177U);
    msg.setDestination(932U);
    msg.setDestinationEntity(130U);
    msg.plan_id.assign("WEPESZYGHBROOCBTGILYQVQMSZFKA");
    msg.description.assign("OTSEILIJAEPYXOSGYBELOXRCECUROZHFJALTYOFCYZNLBCQAOJCUJUGYSEDUZBKBRLGMHXLKSBWKPWFMMAYVDGMTJYFIFRCSAMPUR");
    msg.vnamespace.assign("PDYJHCCMVXSNJKYFAMTRGJMRUVHGWSRWLVLBKORCDIGPBYNUNSDTSAFPEXQXXUMSAEBOXHAYEMDZPWHNLHUCLOEDUIAVTPQQUZVJKRLVDFFPVPXDTKSZFZRLEBWKTIOYHGBHOBBZODXQWCJVCYPMISJCBFAJEYATHSQNZTYJWLVKTENQLTFFJKFPEJCNHFLGXNRZITCGYBRO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DEPPRGZGHFPYKBHVFPBBNVTVUBOTTCZUBWTDBGIVONA");
    tmp_msg_0.value.assign("YTEBKQRUWXMPLQNGBDWDEQCKHBDBIEPBWFFFKSVOWVRHTAFMCQKQBXZRYGGGDZTHBJEWJBYYNRIKMVFRJXWOSMKCGVLNZIAVYEHHJSFXCEUKRSUZYSILNLHTHLDXITGUTRMSHOCJNIVSHZAZLGFFGWKPRXMBOVAO");
    tmp_msg_0.type = 12U;
    tmp_msg_0.access = 44U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UOWNSWMCGD");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PMTOQELUKBJHFMSIXE");
    tmp_msg_1.dest_man.assign("ZFUHETVYDJRILZNCZGMVCBXDHTGBTTBSNALQOHOQIFEIRBXRMZHFEFJOOJGKVXPJLSNPWKZNZOKKKVXPMCACKORWBMWAQRGBPDNKYNJENSCRCIXMRAHLPLGJGXNGCQXSWIUOVQLVEYUPDHYFFTUTNZZEUDCFEIAXQYVJVF");
    tmp_msg_1.conditions.assign("OZWGNNMFJSBIJGGNDDTWVXYGXX");
    msg.transitions.push_back(tmp_msg_1);
    IMC::AcousticLink tmp_msg_2;
    tmp_msg_2.peer.assign("KPBWBNOVYRZAFCRUDPGDCUWLQXTPYQYBCAVTYOTCFXFSGAOYOQSECOGNBAONKQXLLIPHASUBXHFYLZTRWTHZLGWRFYCINVBQMKQEHVOJAINJREKUELTSPJRUWJBGSHDZAKKNEKMMPDPKWVCDVAGQMTDBVXDNHORKJZTNQLPBFIZWSFTEADSXMECAJSMCTHZEFGL");
    tmp_msg_2.rssi = 0.736607589618;
    tmp_msg_2.integrity = 60617U;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.583480243532);
    msg.setSource(41969U);
    msg.setSourceEntity(4U);
    msg.setDestination(59475U);
    msg.setDestinationEntity(226U);
    msg.plan_id.assign("IWUWNXDWITTDQYQZURAKCWXOKY");
    msg.description.assign("SDKBMHAVOVOCUKSIVGGVMWFTKZWJIGTLIEKTLUKEWSHGEBSDAZENOQTZCOJOXIJNDHBMYMWBHIWGAGDJFNVDRPIPUREBQVUREWTJMYLJYUMLLF");
    msg.vnamespace.assign("KGDZLAOBJGQPKZWWUMAWTSPTLMJPDUDRKSZFJZLYZPULOY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GYCQVPGEUAGAWDWMEEAPJAHAXWCWQBPMEMDWRFJVKLIEFCUYGQVGFKRKVZSLXAQKTWHRLNCRFZNGZKDPZAIJEBIZWDJBZMSYQAIGBPAKEXHRZNBTFNTNYFOXLSGXBOHSBZWPFBXBNMUOCYITOIRHSQPYHADWVFJUXROXUSNDGTJTIWODVURVMSNBLESUMJVHIQMCZUHXHMYJCPHQCEQKOJLYJNYRYNTRFL");
    tmp_msg_0.value.assign("PCUSTMPACHXZNRBXHOUFNAITTUQSPUMWKJECPDXWSGABJHJLXPKBSZXNNJKDBEYWPCPHWIIGVELOUTVVARUPLTNEEZXAWZYMDMABKDVXSVXMQOSRDHDCZTVTYORJCZLMYNTVNYZFWFBUDLOAROO");
    tmp_msg_0.type = 176U;
    tmp_msg_0.access = 250U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OIRBEXCNEGZCTZSVDLTDRVVTKWBFMZVBUCKFRMNRZUOGEXQVYWGAPLKBQQWCUJBMMVWPVLZXOOZPIOTQKDYSZXDXNJEMSPXWSDISICJITSADBJHUGMBWLAHUXSQZJVZ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("VEKWVKTGUFCABQBEHONGNUDUYVBUAANGMBDXYPIUZJRIVXLFQMTOAEIJEJOBTCPJIQZQPAKSGKFADPCLZGRWAJQZRVHXITMWFDEFSPDBDJDXDHYPLKUFIBPVILBKSWLNCMHQWSAGHLVRTQYZPMHNBUNWZEGLRSRFXJEKQWOZWVHT");
    tmp_msg_1.dest_man.assign("UMNBYDESOSYBMSXWQKMGQUFWOMHXGYECIAUFTOICADSYEPOTQICCMGAKPZHAMZJTUDFGUTNYAWNHLNSICVWUKRPNFBLRXEKWXDHBYTJJIKGTOJJXZKTUXUZBNDPBGWAZLIDFOZLSRKJEPRRZCILBOEACYPLDFHMLQQYTZYBMTQKHEFWBJLZERRYVXSLSVPBZOGCH");
    tmp_msg_1.conditions.assign("DJMUYLOQHKXAUOPPZZKZTNYOTCYHEQJHWFSJ");
    msg.transitions.push_back(tmp_msg_1);
    IMC::UsblFixExtended tmp_msg_2;
    tmp_msg_2.target.assign("WGMLCUCNKDOEXQYROJUSIKAPNRBVIGQTHLITCNPZBNHPGLPMIXJPMWNDMQFRKSKZIBUQFEKZDHJCSXXIPOONEEWMWEAVEPKWBSKUGJGLWBQNQXSXNIIYUNBWDDDYLVBJLJTRSTTKEHJYATIZYRMFG");
    tmp_msg_2.lat = 0.593768610186;
    tmp_msg_2.lon = 0.2977772871;
    tmp_msg_2.z_units = 137U;
    tmp_msg_2.z = 0.595619295221;
    tmp_msg_2.accuracy = 0.479290900037;
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
    msg.setTimeStamp(0.679819824288);
    msg.setSource(14285U);
    msg.setSourceEntity(43U);
    msg.setDestination(1764U);
    msg.setDestinationEntity(5U);
    msg.maneuver_id.assign("WFTIXTBIOHCHJBUTVCWEUZCVXFZZRBKSUTIACULZMYDFKXTBLGNEBUPAJLGBVPTUGDXKHLCBWDEYOBNJSDHPEVRKIENWJZEQROAMZEPCOEIHORMLRPCVQCLDSRMDDKWUZWRSVSOXJJTMODYQKMATFFGSNJWUAIQOVFRGFZBPYKXWTLXYZNWHEKPQLPODRNAGGMCCQFHLZASFKNJGVUYEOGWBHQMQSSRMH");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.165999124682;
    tmp_msg_0.lon = 0.355539358966;
    tmp_msg_0.z = 0.208163612756;
    tmp_msg_0.z_units = 9U;
    tmp_msg_0.speed = 0.0904969622837;
    tmp_msg_0.speed_units = 242U;
    tmp_msg_0.abort_z = 0.632723203214;
    tmp_msg_0.bearing = 0.73244002991;
    tmp_msg_0.glide_slope = 100U;
    tmp_msg_0.glide_slope_alt = 0.823472783175;
    tmp_msg_0.custom.assign("LAOHZWIOXNRUSAEQJMLKLIOQCYSAIEJYPIGHGSMYWZTKQPVEWKBJEAHQZIIDCDSIDQKVWMNYTUXYXVOTJCXTXPEBEOSZSJXOGZBQBIUKOUGDJZMCPHWMCQLXDBZAPPFWIRHERFKRVHVGTEUHPKFSFFUBDPRUTMDOGCMZWQQZFBVNPFSRAMKJLWAXBLJKHTTOTNVLSACNGHMLUX");
    msg.data.set(tmp_msg_0);
    IMC::PowerOperation tmp_msg_1;
    tmp_msg_1.op = 190U;
    tmp_msg_1.time_remain = 0.931969074551;
    tmp_msg_1.sched_time = 0.497080204698;
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
    msg.setTimeStamp(0.7291500656);
    msg.setSource(34201U);
    msg.setSourceEntity(120U);
    msg.setDestination(6207U);
    msg.setDestinationEntity(183U);
    msg.maneuver_id.assign("WWBIPLHDKDRCVXLJVZBCMLEPNEJZCDWQGZKMFCRSVZZNGAAUOOQNDHBIVEDKQG");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 43199U;
    tmp_msg_0.name.assign("GQUUFAELRIKSVVESRHVVWBODAQRJKJHIOFVGJZPHZNNGRYEBPDHAESDCWCSJWHYPBXJLUVMUXZIYXBPUMEAVGDXXRDISFZEJWIOXOKZLKTWAKDCGTKLERHQRTBCWKQGJDVZGPPMOIESNRLPRDYPAYQFBICKJWYHSSANUTPDUNRPVLHMFLFNJXFQUSWYYQTLMFEMBXCDNNTCXSOTQCCMBINTTGGMBLKOOWZAMUOHTUHQOLAFGNZXCBIV");
    tmp_msg_0.custom.assign("IZFSEPHUCWKYVSJEYSHKVWOZTFTMPBLZCRHEJWANVOVJCKWQLUCMDJDYKQDVNEVCZXAFZKENAODYRHKHPTGGMRJLZOJEBUBDYFAITSLXLZGHVQGBBLVMKODURQPUISUVDXNMJRBTIWZGHOCLXSBADWBGQXX");
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
    msg.setTimeStamp(0.56320471847);
    msg.setSource(46860U);
    msg.setSourceEntity(249U);
    msg.setDestination(26742U);
    msg.setDestinationEntity(244U);
    msg.maneuver_id.assign("BWIGBZPRVJWFZXUHFGMLSKYHTKLHLNOGWAOMAOLIYHCOQTFNBDHBUCUROHZAEEXLMJDKWQJUXPPDJAEYJYCCLWCGMNNVRQVZIMSQGHNZUOPFSJQVZBRHPXSISYHVADJNWDM");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.906116322988;
    tmp_msg_0.lon = 0.0747889649308;
    tmp_msg_0.z = 0.969039561819;
    tmp_msg_0.z_units = 85U;
    tmp_msg_0.radius = 0.227847224432;
    tmp_msg_0.duration = 25584U;
    tmp_msg_0.speed = 0.825506562349;
    tmp_msg_0.speed_units = 56U;
    tmp_msg_0.custom.assign("JRVYXRKEHIWVUWUBYGWOWUCTRGOJQLTFKBCCNLQEYJXFPSXOQIZDMFQCDLIVUIEPKQHSBBVEBVDIZDEDMBMORNMRFYZOEUSMACGTWVPLDQGTVSNJZQYHPB");
    msg.data.set(tmp_msg_0);
    IMC::QueryEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("RRTFLRCXOHBWQKSCCIJUPJLRCOMKZBJLKJETOTACSMIVKOASFBVCUBFUDPWSHHOZXLGWGNGPUZWQFFSUUZTUBHDDFQBGPMVAMHPGXIFQJVGMOECPFUHXEWREAGYVXYFXRQYAPPVYADHQVKHOWEJRVIINCFXKRLYRZZLPNUOZEYKJTXVDTICITEEKLZDBLJYAKGNEMI");
    tmp_msg_1.visibility.assign("RKLAYFKXMOFVMLHJSDIBYEBNZQVTIZLGYQFEHKQCSAXRQRRIFLSOEJNBRISQQJFTAPVBXEOGCQYUWNWRNJYWUANEVCPQPKACGWUAXHOPHJDRLDCVCSPAXXFTFRUOCVNJEOUHGMYBOTNOIH");
    tmp_msg_1.scope.assign("CHOZVFMXDNGUIBINXBHOQZKDTLURPBAJFONBDTLTHWOWLUJPFRVAVGQWHXMRXNFBAQHDWTSEJZSJAQA");
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
    msg.setTimeStamp(0.233150290386);
    msg.setSource(60729U);
    msg.setSourceEntity(104U);
    msg.setDestination(53911U);
    msg.setDestinationEntity(120U);
    msg.source_man.assign("JLBXALZUYQBAEMVSCOCVAJZRBFMPFNSEUNFBOSDJQWP");
    msg.dest_man.assign("XNCNEICTGCUXCVRHHEFRS");
    msg.conditions.assign("HAADNSJFPQTSOHYZXUDMSIYQWICHGNAKEAYNWLYWGEDLXXOUTSEHUPRXJUOTBTDIRPDRZKCBQOXBIXAWKCEWJDPGWIIQKRVQZGMRSAOAVOGCMZKMCAXOVYVTVQHPDRUN");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.165532929349;
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
    msg.setTimeStamp(0.0477491488578);
    msg.setSource(1143U);
    msg.setSourceEntity(93U);
    msg.setDestination(32537U);
    msg.setDestinationEntity(85U);
    msg.source_man.assign("YYRFMZCJJUACFGGRRSCHOHZTAHEUMPPEXOQ");
    msg.dest_man.assign("TOKGIYPRFEOCVPJXTDHCXIUHNQSDGVLEYIHPMEVFKPSNBLMAASYSAOZJRCQEJTLRGUERJSNBLJJWBVWIMRENPGAGZFDGKDRSKMUJXCZHQQCYNQZOIILHUSTOURYYSCUBBQPHEWRLPDWOKXJXAMAGLFEVZWMZMOCRDDVZXWPNVIOXAKDVDBTTISUSQEQFGGFWNWBPVKTHXBUAYCQXWHHJCYMKV");
    msg.conditions.assign("RFVXYRRHZNZMOEDRGCSHPBFZYCHHOCQYIXXVICSVYQVBKCMBUNFEKQSPTAULIDHPPMYHCKWJJAGRNYTTTTWXMZFVIIOFSTEACKMAOEMYENTUSXAKJ");

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
    msg.setTimeStamp(0.339097126384);
    msg.setSource(32667U);
    msg.setSourceEntity(199U);
    msg.setDestination(37920U);
    msg.setDestinationEntity(138U);
    msg.source_man.assign("ASYRVOTXLMEYWGJKOZFINFHJDVBRKPDRFEJFFLXLTXQYTAEUURQCURODWCDZVPQOYSFGQGMUEZDGTLKHHRJJBIDKTSXLRIAIWXMYOKOHINHVNXESYCRQ");
    msg.dest_man.assign("LQKLZQOMPKAPAVSKIOVCNPNQZWXASCLVBWCGBKGPXOBNBLKWGXLGMZWPFIHNOSMSOBBWFERBSCLHZZXWPBMGTJFZTRUJPMETTEHWXSGHLQUAEWPISCTQKTRHVCUVRUBQQYHIFSJRYVDDMYVGAJYVDIDSRMMVRAAFNLHOIURXFLNGEQUFGCSOJIDMKGZIDHNWQJJYUODAFZTJKDQ");
    msg.conditions.assign("FHXDUDRJNIEAOWYKBUTOODMSKXYFWKBDVLTWHOICCUHILOKMFGQNBHCQGNPZEFSLHUYYZZTLVORQJPXECKRNSLRFUITHGLITDJLFHLASAEYBWQVUCVGXYRZPRZHJLJCGNDMACJBBYBIEJFAVAIWEMJKMNQNNGZBSQCHYRAKSVXOWTWRZBVWQPPSCMKGEZQCFTPOUKFDKMVGPMGVXXQJTMIHZSEUOIGRYDVYPJASSRZTBXUQDUFWLIXNADPWTPO");

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
    msg.setTimeStamp(0.503145808583);
    msg.setSource(10513U);
    msg.setSourceEntity(209U);
    msg.setDestination(9787U);
    msg.setDestinationEntity(47U);
    msg.command = 15U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CCFOXVUGDLZGMOCJCFUKPJEYAHSQANDKRTFTBXSYVUXHA");
    tmp_msg_0.description.assign("GNLKHRMLXYEJRPMDSNBHUYOMGKQFFWLIMQISJDEVTKREPBLZMIXRKZPXOATBQYWSEHJVUJFRRZXCYUNKZGBAPOLLWBPDTQNSLEEPVQYOBZIQTJZGAUCHXPAKVXAQOWEITNKUZMYRTCMIHDSWWUAMQBYRPASNQHJRAYCTYFDPGYHVUOBGBFNDJODOCKOFMSUTHDGGIZLXDWUNZCXJCVFXVKSZSOIAVECBSJVDMWNJHLXIWITRPLCHFETGFAE");
    tmp_msg_0.vnamespace.assign("WCYTLLEHXWCIWHIFOALLGWJZSHOYZENTWBUFUKHRRIJNDXOBZTOZCYYFVAECTHNJQYWOFFFJIQAYRSPIWVNNNUNGPOLMVFACEFQTJCESUSWOXDCNUGSDBHIVXPSQUVDLCIHRMEGPGQVOEXOZEXZJJQUEPRHKXAVBTBIVXXRUKMTQGFPBQQMFADPYTYBYDKPUMPOTKZHLALMVVZEKJGYBHUIGSRGSDJIRGWLAMKN");
    tmp_msg_0.start_man_id.assign("PCWPOAHQQGYKZVMZOOMWQCUNXMRBRZTWLKFBPKNDZSAGURDOVAVPVULRMEQHFTDLGPIYHINQISAPZHJDBFEZXLNSKKWNWCRKEJEI");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("UPVJUZSAAYLDVURKZFIRMWKSMYRFCUHLKVRJZVBTQBXWGUTOYPPIEUCGBDEOZMUKGFNXDOUMYUMRAHPQCGJEFFHDJISPALXWGHQWLMGJQNMFID");
    tmp_tmp_msg_0_0.dest_man.assign("DWLNDUSJXRJJEGORYDMYMIPCBWLMLOAJHUVRZJQKPASBQUMQSKXMKUTHPDMVFKHVQTGPVPHBQRTWGFYWXNQDGOWTLOUPOHICFAKEJYBTHYOXDMYNKLJETUHLPOOJNVTDYLAFSKROFPXERVHQEHNNDCIBEXCARCPLIWTVYRUJXGACBZRWKOEVFIIZVECYLLMGKAWIASFZIBSSZGGQBZYTZKEZWEBCFGHPNFNJMAGWISIRXNXSFTZUZUQDDUXSQC");
    tmp_tmp_msg_0_0.conditions.assign("WZLEXZNVVLYYMKVVBPOELHT");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::GroundVelocity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.validity = 150U;
    tmp_tmp_msg_0_1.x = 0.393978713507;
    tmp_tmp_msg_0_1.y = 0.0681755778108;
    tmp_tmp_msg_0_1.z = 0.323645131729;
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
    msg.setTimeStamp(0.753037901668);
    msg.setSource(17356U);
    msg.setSourceEntity(196U);
    msg.setDestination(40651U);
    msg.setDestinationEntity(37U);
    msg.command = 11U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EQVLRUONXKHUNHMFPMBXFUEKCGREJMPWETBWHABVWXUBTPTKQGRYJWPYDSWCY");
    tmp_msg_0.description.assign("XBJONJLXFTVWVHIZPGLRIOCFYDXQLIUUSBPVIQK");
    tmp_msg_0.vnamespace.assign("FVLYCZIHHIRTHDPYAQBPFQSWAYJRLAOSTDFATDQBUSLGGJZNBJRGOYNUXIEMEDMICVHIOMFTEZXUMXXOPSUETVJCDMLUAPGSQYHBKZQHOMWBYWOPPGSSBDUCQICFBMKAVWWUPZ");
    tmp_msg_0.start_man_id.assign("VNAJEJPSINUCKMLZNUEHJFRRIXZKHCHQJKULMTRDFFYFMNUE");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("INDXKWCVSNYQTRQALSBITAPAHZYIQMZLKUFCACHOJWVCNTMIJLXRKBCCHNFONSLKDPDPKXMYEBFXUIKOPZRAVQZPUETNZJTQXEGUUBANNKGGZEQYVJTDRKJNEIUUMHHFRSQDRDZQVOLZNDHTWSRYXUSOLPWHMVBSRLXAOBFXQHSBXORVOBUCOVACMLGWYBEYGIFFAJR");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.326969415104;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.508209931973;
    tmp_tmp_tmp_msg_0_0_0.z = 0.986135746252;
    tmp_tmp_tmp_msg_0_0_0.z_units = 147U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.480811796897;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 200U;
    tmp_tmp_tmp_msg_0_0_0.start_time = 0.267580700694;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("YPXHNLKIEVNVCG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::AnnounceService tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.service.assign("TMCVRLVQMNBKCHPEHJHPQTUZGOQDHFODJYBWEVQFGFTIGBWILBPMIXWLN");
    tmp_tmp_msg_0_1.service_type = 227U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.671748293617);
    msg.setSource(26097U);
    msg.setSourceEntity(214U);
    msg.setDestination(55399U);
    msg.setDestinationEntity(142U);
    msg.command = 34U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BVWMXOZHCZGQSQRUXJDWVWQVYZVIAIRURPFLBBQTJPLJEQKIDQBCMDCMSWAANLCZNVHYZUEFXINCVFAUIABMXLERFBOFJXYRHMUHUMBWGRNGXIEHPYZWOSTHJYLCYPDNDHULZRTTKDHEHKSUQFFTNDWITMYWTTVDXBCETJDNIRWKLPRMSFPOPOQOSTVZSFBKZGMLOKEYVSGCUPAYNALGMEZJXKIOKCVEOEXUHYXJFB");
    tmp_msg_0.description.assign("DTIGWOZAWAMXIEPRGFGZMDJYAZOMTSBULGKLVDDZYDPSHHLBQYLFFANSCWVXCQSHVJDISVGICXKCHEUTTUASOPEXNCYNWIWBEINYBECCNFOKGVSVGWATJRURMKOMDRPCQJSBVZYBYBRFKAHZQEQUUWAFPGKQTIJPDBJKDWJKHOYGOPRTSFONQLNZPZJZIUIEMJRMREXECLLNMYMVXKXLNQJTHQPUXNVLUTWBHFFSU");
    tmp_msg_0.vnamespace.assign("ILWSMHRIZDZTYPGRERKXTBWLANRCPDZOFLUARFIJOXJBUGGNQYEBSIQXDNQYMCZQVMCFXISALRWZEPIJFXLYDTPJKAMQUZWMWCELKGJGBFFCAZKVVWMUNWUVDXDNSKXRTQIHJLOIWPYOQ");
    tmp_msg_0.start_man_id.assign("YEQJDDFPLXRWCTNLQBYFPRGLNOYCFUHQKSHXGWTSNXZHQGSTMBWTOTTVXCCGJSMIFUMAVJUWAKUPINSVJHZNPODINKHVOQKAAQKAOKQGRLOYQQUPDEYXTJJDYOOZXZDEJLZWLUBATBZBFRCRPKDDVNUIZCO");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TBUPDCORXNMIKAOIYUADOQVQGNKDJVJCTXTDJHMQGGPSULKBGKORCBRVCYAEKDSWMTLQEHRXIZGXPCNZUKSBFVHWAFIHIELSRZRGSGBEYBLZAHOZOJHHYMEWKALWIZSJKFELTBTXDPNMMLNQYWXJOFQCRUQFHDUAPPQYFMWDYNJWNWZOJSMATFHMOCPIMBKEYRCJIVVTPUZCYQDALPRUSUETVWQENXFSBGNVXDFUCXAVJRPL");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_0_0;
    IMC::DesiredPitch tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 0.420566351242;
    tmp_tmp_tmp_msg_0_0_0.control.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.duration = 19631U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OINIRASIFXJJFLBROEXSSKGZNCDGCWRZXNLTDGBMKBSFROHYADKCBEYWCEHPGPHUAKGYUQLBKPFFNIKFUNMJTOTGEMDMMZQLPBUAZCUYUPCIZVRZSQSBEYMXIHMPZVIJEWXWVDRLYNHNAIRFEBKCYVHGEOLKXWKMCOLIAMQBHEOQULCAPNAYNFVWVJVDRWJSPIWZFRPTLXJTPFSEQVDQYDJUHQUATRQZHUSTCOGNVBWXDXJT");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("YNKWCVXYIJHEFMVJGYOUWQVCQYQBKDRQLBHFMPTULOUSLFKIUHWXPAXYYNFTETTXD");
    tmp_tmp_msg_0_1.dest_man.assign("PSOQCHDVHWIDFDSZARCPMBBVQTNRICNZTQEZQSQGBYUZSXLAMOJRSPTVFETUOYXKCKHPPBREPJ");
    tmp_tmp_msg_0_1.conditions.assign("LYYVTPHGNGPWXZSWHHYP");
    IMC::Pulse tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::TrexPlan tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.reactor.assign("BNXMUOIZUEPRXERRKRDOQLKSQATCINTXEUDVDMGONZRVKQXBTMISFXWSYUVKRZASXLDGNWWYKQTIRIHJVVNUWMCVJMICAEFEVDZEZTYOPKGWUQGWOHBILBYPCYTDPCTHHRFKASGQDLDTZXVQVHPQSPYHXAFJAYMPQBAMFTFOJBRJIGCUKGZWQPEEUANLJAIOLBASSWFJJS");
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
    msg.setTimeStamp(0.391140269318);
    msg.setSource(61092U);
    msg.setSourceEntity(244U);
    msg.setDestination(21781U);
    msg.setDestinationEntity(11U);
    msg.state = 204U;
    msg.plan_id.assign("XTNIRNJVEAEFWVTNAQMJOIECZKYBZGOPBGXFBRVAJABUOHMVPPUVJDXWEHURXCKQDKXTFOJFDUZGQCKDGSCWEPOBBFTRQBZNOWSGWZXLAFLMVUQRTNAZQTSNHIGMSFBXAKGSKYPCQWGUJECLJTMIEPWOWMCNJFMCHQDYKOZSOIVNDQFYZAISYKGRMHLLIXCTUDL");
    msg.comm_level = 249U;

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
    msg.setTimeStamp(0.785116635172);
    msg.setSource(55831U);
    msg.setSourceEntity(42U);
    msg.setDestination(15088U);
    msg.setDestinationEntity(144U);
    msg.state = 107U;
    msg.plan_id.assign("LFHABTNACNCRGJCOKYDRMLULWSBKZYXIBFPXTRNMZSBHCLADQBZWCZERTJHIDSFCUOMGHFNDEDWIRDARJOEVJUGHAEQMXQQNWWMURVPJLHPIFNVTVXVZOMKILONPJDRVTBEGMKQVGOVUPVTTGGHNPSRREISYXKAFDZSYKBASJFWUAKFSJTYCTUIMUEIUFZXJILTNEWLCPQOGJZBPOBGNIFSAYQYLDKDWXCWYHZEOYGV");
    msg.comm_level = 210U;

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
    msg.setTimeStamp(0.887692429032);
    msg.setSource(37320U);
    msg.setSourceEntity(191U);
    msg.setDestination(6727U);
    msg.setDestinationEntity(13U);
    msg.state = 55U;
    msg.plan_id.assign("VHRRJTATQOZKZSNCBGGDCZPQWVJDWNBUKKWGIVBYLKMBQKYVQEYLRQDNTQFPAVDCPOVJGRGXTZZCUHMLLFQIVLUBSNHNBWSJSHLJHTSCXAZAEFFFLNTLDBILPYKEHMPDRUBXIQUWDIBCEPCGUESCAORORFOTFQRUG");
    msg.comm_level = 251U;

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
    msg.setTimeStamp(0.574705092136);
    msg.setSource(25906U);
    msg.setSourceEntity(26U);
    msg.setDestination(50605U);
    msg.setDestinationEntity(106U);
    msg.type = 145U;
    msg.op = 179U;
    msg.request_id = 62390U;
    msg.plan_id.assign("FYEEGSEPISFOICOKYLQPRUSGTSDXRKOXXZNRCPJLVHZWBTTMVDVFOUDUGITTMKEAHBEFHDGLPUANLHLGMHYWFBSYURGKYXJRRDNHSKAFZLHPGNASQGUWWSEKCWPJXWDJDIQREMAUALQCLJIXMIXYJQMIZBKXMIYRQZEIACRMZNSTUPVATOXNEAMCBLVAHIZJBEKQWXDGNOPZBVZHOQDYR");
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.787051987368;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZQRHEDCLDGFOYKVJFMMHDZINRPNMSCODQBXPBQIFQMOQVJMSIAMGIMTMELULJNGLPSTVLXCVRBKLAZROJTFUQFIUKSXBZDIODAVGUKUITXWPVJLKXSJZBCRIYKBPPGYUZFNTAOWWCBBZUEE");

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
    msg.setTimeStamp(0.0100726263878);
    msg.setSource(53168U);
    msg.setSourceEntity(146U);
    msg.setDestination(14624U);
    msg.setDestinationEntity(121U);
    msg.type = 11U;
    msg.op = 202U;
    msg.request_id = 2432U;
    msg.plan_id.assign("DBZPVCWIXSALRMJCHOSGZIMXOWJHVYTELVXKWAUBYGIJDRSVCQTKPSFCYVRAQSLHXXWUXXECDQRNQJFTBLDKMOOJGOHBFZUMFNLULZDYUVGEEZQUASQFJNEGZNRETQKWMZSHUTRQPKEINPNYPWWHRGVCVJLIKPOTOXLMMKPCNCEYXWGB");
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 51485U;
    tmp_msg_0.sys.assign("HQDKQHJDPEXUKZSBVCAEXYZQJTTORSFJPGNYYTEVRNYSVSXCUQBCCWOFMAIJSLCPGRZXAWAZBSXZSNRPOKKMKGAUHNCLIGLKLJWIXMYUUESG");
    tmp_msg_0.value = 0.678938689672;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XMIPUTHDDBVQOMTQVD");

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
    msg.setTimeStamp(0.831127551662);
    msg.setSource(45430U);
    msg.setSourceEntity(245U);
    msg.setDestination(63787U);
    msg.setDestinationEntity(198U);
    msg.type = 147U;
    msg.op = 75U;
    msg.request_id = 28614U;
    msg.plan_id.assign("PBPOVETDEVCZDZXZVGH");
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 157U;
    const char tmp_tmp_msg_0_0[] = {-7, 8, 78, 14, 94, -14, 114, -18, 79, -128, 3, 24, -50, -89, -128, 16, -49, -6, -91, 53, -39, -16, 22, -63, 33, -123, -118, 123, -50, 10, -23, 26, -82, -16, 124, -11, -8, -124, 100, 121, -81, -2, 123, -87, -92, 44, -112, -66, 70, 120, -78, 5, 61, 62, 96, 79, -21, 106, 76, 101, 84, 61, 92, 29, 24, 5, -10, -113, 88, 49, 3, -1, -111, -107, 125, -25, -34, 108, -60, -19, -117, -80, -107, -44, 45, -84, 80, -28, -20, -12, 95, 79, 39, -103, 97, -3, 87, -20, -65, 29, 120, -95, 116, -74, 11, -67, 67, 91, -23, 39, 75, 67, 16, 30, -64, -44, -61, -53, 20, -61, -88, -99, -98, 8, 65, 117, 72, -77, -68};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GJNMECEWZKZOJWQOCATXVYRTUYROJHHVRHVINBFKZWDSUMLJFEAXVBVKQGMFZYFKMBBQOAQSCHMUPUXAQSQZTXLVKQYGCAVCYUAWHEDIVTWROGWNIQMMLYLHWENLFXFKOXKRNZLDVZQDHOAGYPPBHEAZLIC");

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
    msg.setTimeStamp(0.889447943903);
    msg.setSource(53908U);
    msg.setSourceEntity(91U);
    msg.setDestination(44699U);
    msg.setDestinationEntity(217U);
    msg.plan_count = 58668U;
    msg.plan_size = 1753216222U;
    msg.change_time = 0.696862590237;
    msg.change_sid = 4502U;
    msg.change_sname.assign("CPCROESVJWTWIJNBQEHZSYUVFCKJDOHRQ");
    const char tmp_msg_0[] = {98, -104, 21, 35, -111, 25, -119, -19, -119, 30, -44, -52, -15, -48, 87, -60, -123, -81, -108, -77, -23, -17, 4, -65, -22, -128, 74, -26, 100, 125, 21, -88, 98, 0, 17, -57, -1, 30, -73, 112, -48, 24, 48, -52};
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
    msg.setTimeStamp(0.213171900348);
    msg.setSource(17848U);
    msg.setSourceEntity(61U);
    msg.setDestination(15531U);
    msg.setDestinationEntity(134U);
    msg.plan_count = 39392U;
    msg.plan_size = 3921312340U;
    msg.change_time = 0.328992362091;
    msg.change_sid = 1748U;
    msg.change_sname.assign("RPMDBKPRPHDISTVOUFVGVDIESOQGORFZHUQYHRXALHLTPWZBVQRCEFIVLKZQTIBSJMVXOGEMUQCITAKPCZADZLGSABJAVSKRHWH");
    const char tmp_msg_0[] = {-19, 1, 28, -42, 51, -42, 92, -112, -83, -98, 95, 78, 84, -52, 8, -79, -90, -4, -40, 10, -92, -60, -73, 108, 7, 59, -110, -86, 92, -126, 76, 103, 100, -36, 40, 81, -21, -70, 81};
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
    msg.setTimeStamp(0.991411946781);
    msg.setSource(26633U);
    msg.setSourceEntity(36U);
    msg.setDestination(55898U);
    msg.setDestinationEntity(85U);
    msg.plan_count = 17755U;
    msg.plan_size = 521850528U;
    msg.change_time = 0.338765252705;
    msg.change_sid = 32912U;
    msg.change_sname.assign("CHUEUMMOKWLSJWBQEUMSZKJQCVYVABNCFXKWTHINODPNYNTVNVBSPYLMVFLSCERLANZHOFSWBDUFOBTIGISWIKZGOAAJXUOKDRRSGYUVZYMEMMHJKDYVTTPDQZKZFXHCXOBWC");
    const char tmp_msg_0[] = {6, -40, -85, 86, -13, -38, 103, -5, -47, -113, 20, -21, 19, 111, -62, -108, 114, 85, -123, -43, -16, 4, 0, 43, 48, 117, -2, -3, 83, 117, 126, -13, -3, -34, -19, -71, 66, 85, 73, -80, 112, -59, 47, -38, -56, -23, -76, 24, -79, -79, -44, 91, -58, 21, 67, 61, -2, 67, 3, 34, -59, -22, -79, -90, -84, 13, -94, -96, 60, -36, -35, 91, 45, -67, -85, -20, 67, -108, -97, -107};
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
    msg.setTimeStamp(0.599574210571);
    msg.setSource(8211U);
    msg.setSourceEntity(142U);
    msg.setDestination(47820U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("MMIZNXDERESXQEGWZXNBUEAYHOIIGLDK");
    msg.plan_size = 4512U;
    msg.change_time = 0.664044172106;
    msg.change_sid = 17308U;
    msg.change_sname.assign("HJUTUDMACNQZIWFWCJZHPCLHBXNNAB");
    const char tmp_msg_0[] = {-82, -70, -6, 34, 93, 9, 28, -16, 83, -93, -122, -69, 41, -23, -127, -48, -104, -99, 78, -13, 95, 117, 43, -89, 94, 109, -38, 9, -75, 31, 43, 94, 41, -22, 57, 62, -62, 39, -14, 73, -44, 59, 67, -27, -110, -36, -90, -33, -125, -1, 112, 29, 69, 42, -12, 99, -26, 82, 100, -125, 47, -83, -55, 18, 37, 38, -94, -89, 70, 74, 11, 38, 20, 99, 118, 4, -56, -15, -62, 56, 62, -76, -62, -51, -16, 87, 98, 119, 109, -118, 50, 17, -66, -115, 57, 70, -65, 23, -44, -113};
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
    msg.setTimeStamp(0.644883602624);
    msg.setSource(23983U);
    msg.setSourceEntity(52U);
    msg.setDestination(12191U);
    msg.setDestinationEntity(218U);
    msg.plan_id.assign("WTBGBDJBWHHKTNPLIMOTMQQLEQLSKCKXUBRSWAXLWZRVQWKYIMUFGYCDECSOCFONOANPXWZMZVSGGNEURGNFXASOPYTANKJYALZPXKWWHQECXUMXJDVPUSAOPNMROJLYHVEIFGGVXBZDMMYRQYISPTBHJCQKUDRZRFKEIGHEMWCFFLRDQIIDFUSBVGVUAYQVZTKPMIDYBDZJTOYVPHBOZEBUXNACOHRATEF");
    msg.plan_size = 54873U;
    msg.change_time = 0.438465184847;
    msg.change_sid = 9143U;
    msg.change_sname.assign("WLYIRKTTDYQHSQGZRROYJSQTBEEJXRXFDKUNVGVYKAXTUUAMOHMQKXSJOECQJOTGPJCUPCZYBODZDJGLXVVIOMCCCDFVFMINRJLMKBURXYZYWMQBALBDLECEIKIPWFR");
    const char tmp_msg_0[] = {-87, -68, -123, -123, -98, -93, -79, -36, 126, 104, 9, 107, 8, 85, -1, 60, -51, 40, -60, 24};
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
    msg.setTimeStamp(0.113645935218);
    msg.setSource(57474U);
    msg.setSourceEntity(21U);
    msg.setDestination(20914U);
    msg.setDestinationEntity(232U);
    msg.plan_id.assign("TSNUEDLAOXEW");
    msg.plan_size = 21833U;
    msg.change_time = 0.965227058276;
    msg.change_sid = 4519U;
    msg.change_sname.assign("IYTJDSVJSDSUJKGMHJFMOBWYZRRDKFIURIUPNXOTAVKTEGWODBDAFKIUGOMRRAELSVEJNWYVRYZHWKGNWOHHOKCNFAMQANTVWGYZEOVUACSSCJLNRGZLRLMTAUWXZQSKEZNZREHTDPKKNXVBUAYOCQUAILLCYZBYANBFFBHC");
    const char tmp_msg_0[] = {-87, 46, 45, 57, 1, 20, -45, 111, -107, 45, 109, 92, 115, -104, 15, -80, -2, -38, 16, -16, 49, -123, 126, -67, -100, -76, -86, -91, -94, -14, -103, 15, -99, -72, 58, -103, -114, -115, -27, -54, -53, -38, 70, 120, -64, 25, -88, -56, 11, 97, -57, -96, 47, -27, -120, 106, 108, 34, 96, 103, 110, 57, -61, 67, -37, 100, -60, 91, -112, -45, -44, -65, 116, 103, 82, 42, -103, 56, 71, -63, -58, 17, -15, 39, 35, -90, -27, -60, -127, 45, -43, 75, 99, 4, -89, -40, 98, -64, -105, 126, 108, 55, 20, 124, 118, -58, -121, -18, -34, 94, 23, -70, 109, 29, -8, -110, 122, 121, 71, 110, -23, -38, 85, 18, 29, -79, -108, -97, -36, -102, -77, -101, -77, 31, -105, -61, 50, -118, 66, 76, -91, 20, 104, 52, -74, 44, 9, 7, -18, -12, 13, -108, 61, 1, 14, -33, -74, 53, 86, -6, 96, 62, 120, 56, -126, -105, -49, 117, 74, -4, -33, 121, 8, -63, 120, 43, -95, -48, 58, 117, -105, 19, 7, 5, -3, -33, 120, -120, 96, 82, -50, -114, -20, 121, 98, 65, -65, -85, 42, 101, -86, 78, -63};
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
    msg.setTimeStamp(0.612833761422);
    msg.setSource(16355U);
    msg.setSourceEntity(166U);
    msg.setDestination(29666U);
    msg.setDestinationEntity(47U);
    msg.type = 21U;
    msg.op = 220U;
    msg.request_id = 33060U;
    msg.plan_id.assign("UBSGOUZQEAYAIWYVXPOVGGILUSRLRXAGMJNSBGJSYLCHHAWQJVPBXFNZMCQZKRVYMRQKWVGESPIWFJJEYDCRMKAPMCWTTZCNAXNXHTJUPHKDMVDBKXXPDHGHZETAITAVRTXSOMMFYCPBSSPROOEFFEDHIQWNNOCEZGGSUVJYANUWYRBPYCFYLOBGEEIFPDTFOHHLRBDUUDXDLDWTWQQQ");
    msg.flags = 62431U;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.899011118251;
    tmp_msg_0.lon = 0.403996511128;
    tmp_msg_0.height = 0.115488855777;
    tmp_msg_0.x = 0.83031742217;
    tmp_msg_0.y = 0.108951639581;
    tmp_msg_0.z = 0.77635057837;
    tmp_msg_0.phi = 0.135640931383;
    tmp_msg_0.theta = 0.21070692887;
    tmp_msg_0.psi = 0.274546225809;
    tmp_msg_0.u = 0.447636319055;
    tmp_msg_0.v = 0.247762556912;
    tmp_msg_0.w = 0.262356301692;
    tmp_msg_0.p = 0.0597205046817;
    tmp_msg_0.q = 0.090906338882;
    tmp_msg_0.r = 0.0582758350331;
    tmp_msg_0.svx = 0.889070794044;
    tmp_msg_0.svy = 0.976488800512;
    tmp_msg_0.svz = 0.823470008258;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AEXSVCZPWWQHQWITRVGCUUERNFJZQFPYYVSUWXCBSIPXLQYSXINEZNYJMKLIMBHFLJOVWROMULTBGZRHDXECBCTIVQIRWGLFGHOSUMGFHCB");

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
    msg.setTimeStamp(0.517215683465);
    msg.setSource(18469U);
    msg.setSourceEntity(146U);
    msg.setDestination(61401U);
    msg.setDestinationEntity(251U);
    msg.type = 141U;
    msg.op = 57U;
    msg.request_id = 10090U;
    msg.plan_id.assign("XAIGJEAXDLACHBSJJSTFHFLWNXDYPNTWFPRIREOHCSYBTZJAKZQVEVFDWHQMCISTKMMGJUMWXUZKNPHJRVDMMXOJMIDLLFKPATIYWUJGXSKOOCAIWLCVQNCYABLRJTONHUEYKRVLYERZJHCQUBDBGCYNNRFYGBDRYGZNIPIQZUZSMGQLYEMGCOPBVBPFVEAUDQKFNKXNKTDLMTWWLHSOUZXIUQQXWPDSTOZOEVAROFEZ");
    msg.flags = 50027U;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 103U;
    tmp_msg_0.error.assign("YSIGLZGDXDCVECRNONON");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XIFZSZYPRELDMAMIOAIEYIVLXPBSAZLQKHQJBBSIYNTHAOEZVAQGPRMSGBNOSKIXHETGYTQWEWSTJSZJHGVTXNXJYWJFSMPFAWFEUPM");

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
    msg.setTimeStamp(0.105418865489);
    msg.setSource(48127U);
    msg.setSourceEntity(130U);
    msg.setDestination(57593U);
    msg.setDestinationEntity(210U);
    msg.type = 159U;
    msg.op = 147U;
    msg.request_id = 21729U;
    msg.plan_id.assign("KTGWBRQFNWGGZODJMFEAJMZUZNTNDNGOAHGEYMLCQCMXHVAKEQLWUPJRPQAOXHDNCUMIOYLBUVPGTIJXQUJNDIFNSWBIJCRYWN");
    msg.flags = 9876U;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 53U;
    tmp_msg_0.longain = 0.932229084602;
    tmp_msg_0.latgain = 0.312878296795;
    tmp_msg_0.bondthick = 2306687418U;
    tmp_msg_0.leadgain = 0.619685722734;
    tmp_msg_0.deconflgain = 0.650889740026;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NBLURAEFJNBJCSKTYLQMWAYVDZUJNMBPVSRHSNYGXEXDNICGOR");

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
    msg.setTimeStamp(0.435401499762);
    msg.setSource(24003U);
    msg.setSourceEntity(140U);
    msg.setDestination(41479U);
    msg.setDestinationEntity(177U);
    msg.state = 213U;
    msg.plan_id.assign("IZCZCSSQHKMR");
    msg.plan_eta = -2118631220;
    msg.plan_progress = 0.804610477827;
    msg.man_id.assign("ZROZEBCHMVINMLOFIQUVBJNPBRBTEUNQCSXCNGPQEJVLYOTGJXGKPRUSWZLDHAJDDPGXAWBMONWFPTYHGZYSGIXKLZVH");
    msg.man_type = 8870U;
    msg.man_eta = -1729337104;
    msg.last_outcome = 224U;

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
    msg.setTimeStamp(0.477764140623);
    msg.setSource(43165U);
    msg.setSourceEntity(125U);
    msg.setDestination(16370U);
    msg.setDestinationEntity(248U);
    msg.state = 117U;
    msg.plan_id.assign("JOYDHWOFNEAZFUGNOHYNYCZGRIIJSNRMAUMJUAKMEZXUNPJLYXFPZOUNZXHTFJHSXWLTCGGWUKBXFLCXGLTQZHIIPWIBBDZXIBEMIWHYKMEETIBOAACQJUDJRFEESIHVVMQDVGFBQZOUTWJCVLAOMRVFQGBYXUSKQXHFBMCTSP");
    msg.plan_eta = -1628534366;
    msg.plan_progress = 0.225509005006;
    msg.man_id.assign("DROQBTPNEJGRNAGTNGPZFOHYNUPCIBFPUALVRXITBPTZIOCKIAKVHSSGXHHLFNUWKMICXDUJNYZTURFMEGKFZX");
    msg.man_type = 27232U;
    msg.man_eta = 2029417694;
    msg.last_outcome = 179U;

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
    msg.setTimeStamp(0.443581176764);
    msg.setSource(45936U);
    msg.setSourceEntity(158U);
    msg.setDestination(1924U);
    msg.setDestinationEntity(223U);
    msg.state = 185U;
    msg.plan_id.assign("BYBCKWZIKXESXFJQWFPUHNZHZXODJGBHSTAOAFBDJQAMBZNNNTBDHSLRRIDTUXRMZCCFQGCGBKHMBFEAPRJUNEZPLUYYHUUNUXXIMXJFOVLYLLLSVYYIAOHIZOVK");
    msg.plan_eta = 1201682701;
    msg.plan_progress = 0.946786045386;
    msg.man_id.assign("PNWSOUXNOXBGHISPNRWGKIIZAAQFDQPGYHAMWKVRSLPLHECITBONYCTEXQIBVHLOEIEKCZXHL");
    msg.man_type = 29806U;
    msg.man_eta = 469952552;
    msg.last_outcome = 26U;

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
    msg.setTimeStamp(0.497326657333);
    msg.setSource(21602U);
    msg.setSourceEntity(140U);
    msg.setDestination(63847U);
    msg.setDestinationEntity(7U);
    msg.name.assign("HKPAXZDUIOMZVQKJKUAXCRPHRBPCAQZUONVGMUTCAHZMHMWSCTBURTFSJGYBRHBBWFGUTNWXTHGFKNWITLCJYJCAGZPAQIEZLNFKQECXOXVIZDLKSKQRVQLPZVNUOFSRUVDFYYMMJBNXDITDOWNEAHMJBOPFQVGDPXJLRNZKWMHJUAEZYQRIDESFVBJWFCA");
    msg.value.assign("ISXXTQPRULIPMHXAYDJRFFTVOL");
    msg.type = 209U;
    msg.access = 141U;

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
    msg.setTimeStamp(0.84664130469);
    msg.setSource(52469U);
    msg.setSourceEntity(55U);
    msg.setDestination(18690U);
    msg.setDestinationEntity(229U);
    msg.name.assign("IHCGAGUHIOUKETPRDBVLVPIOPBKDZMDJLCAKHADUETKVTSBPCWUXTRXLXVFODQSXUXXSCQVFZEZJXHEZJUWCJVAIGVBCQGTEWUSDQRYHKORIKPPQEAYZZLMLAGNWJHJMMJBZYOIYRWRTVYDIJQQWPDGMTGRDWNSFZMVUNHVCOYZSQCKRPMYLXDCIQHEIFAKLJWRSHXNOAYEBNGBMT");
    msg.value.assign("MJQQKCXHYYOBTSTDVVLMKHJZQBTOAOIOBXFIGYSJJSUNFHTFVNLZVQPPSAIBMRUW");
    msg.type = 129U;
    msg.access = 196U;

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
    msg.setTimeStamp(0.847964853284);
    msg.setSource(17679U);
    msg.setSourceEntity(80U);
    msg.setDestination(65396U);
    msg.setDestinationEntity(133U);
    msg.name.assign("FIIRZRNMXUFAHMSBLBSKBESSMSUYEQYFORSQNYPWXOAXLVVFVPSTWIERCDENUYJWOXCBUKSRXGKSVBKWTDWNZNVGPYHQJAYPNYGCAALIKDVWQLUYTDILTWXDCAMTGUCOZRJTVORPPDZGTQVIYAJFEBZZLXQLAOBZMHQTLPEUMFHKYOIHBHIRMZDDTNQFCHEUWPZRHZQCMIC");
    msg.value.assign("WKRDOKIYVIEERXKVRXSSRULNNMINKPRFKBZFZFUNXHZHBQPOEVGWISJPIZNGYPJLRWCFJTATXVCPFAUAKRSPQXOQHVQACSSRVVDIVHYJPTMRJTDMIHZEVBYGECWWJBIUWNBZAPTGUGDOXOELYTAGJBABQLBQMGTDYBYDCHMESXNAKLZVKFGJGRQTDWDCTTCIQEXCJIQFXDJHECWYEHLFQZZHO");
    msg.type = 45U;
    msg.access = 113U;

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
    msg.setTimeStamp(0.959609970102);
    msg.setSource(38798U);
    msg.setSourceEntity(206U);
    msg.setDestination(14651U);
    msg.setDestinationEntity(115U);
    msg.cmd = 18U;
    msg.op = 27U;
    msg.plan_id.assign("RLSMHGMHXHUQWKVEBSVHZQHWJOUIWCTBNMWDGLGOQCOVNDRAWRAXWBSUSJLKJHDTTWXRYTFDPLFYFVKNLOIXSLEUYJYDCLKAPQPNVZURUQSR");
    msg.params.assign("LXFMGTWQSYYSLKQIDDRZJERPJHFZXTFYNPMXJFPNYAMQIQGDLBMGIQSUZFVNTJMKUOLSTAOMCHJVNUFITORJABTIHGBGDKEBVESFNLCGWPPZYXUCDTNOLTGYHQUUPXWRZERAAXVZVBTSLNARCLJBKWRZANWOLZHVFEYZJYRJCYOXWMEIKOXOIEHQQKVPUBKWGRWKCUGKMAAURABKOS");

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
    msg.setTimeStamp(0.728248624058);
    msg.setSource(59670U);
    msg.setSourceEntity(231U);
    msg.setDestination(21277U);
    msg.setDestinationEntity(126U);
    msg.cmd = 207U;
    msg.op = 158U;
    msg.plan_id.assign("SHZJDCSGOMLNAHGYZIGBZB");
    msg.params.assign("GNXKSTLRVDXCBAVABTBYKJPOLLCGERYSMZSUYOFKMFOAXGXOLSDBVQTCQVXXRZOCJMFPZWAMR");

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
    msg.setTimeStamp(0.403391511924);
    msg.setSource(31504U);
    msg.setSourceEntity(227U);
    msg.setDestination(49458U);
    msg.setDestinationEntity(144U);
    msg.cmd = 77U;
    msg.op = 62U;
    msg.plan_id.assign("YXDSZQGQEMEIASSMRTCJUGHYAIGYFGJWOGSBWPWNWVELEHTFNPWPINFCZERKXOFSTZARCPFEBRAAXRCCTUWXZDFDJOSZMHLKMKPAIDTPQQBGTYPLNSQMCIIQSMTJUMZLRBHFJRDVAVMPQKDXCHNCZJKBBYNU");
    msg.params.assign("IBJTLCZYJNCPZMRZBGKNPEDSXBILPWWVUWQRRUTAWJXUMETKKTUFBTRCXDCWMOCEDTYWZEHFHSJJVBDDIPSHNNOQYVUTRALLNOAPXAAMCFTHBOOGQNGFWSSOYIPJJPHLHSKQXKKHXFAXSVZYYSCNQIWEYDWBBFRKQLPVW");

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
    msg.setTimeStamp(0.0985489837203);
    msg.setSource(36910U);
    msg.setSourceEntity(59U);
    msg.setDestination(4483U);
    msg.setDestinationEntity(0U);
    msg.group_name.assign("BGPDASWGHBJXTUVRIAYVZXYUBSXYIAFYNZISIJVFEVLQGREJETERRZKGJOKFPGJINXBDKSQOYXPMLKQWHDMDLCUNMPXPYIXACXCWRIGFNRQLSYTLOSCFVWKICNVZDMSCYFUENNYVYBDOHLHTHKBJWQWAFSIXUGLCQJNMADWTNKMPUECPBSPZTARRZWWHERMCUTZSTKAEMHNOLOKGELZVBMHUTQBWOOJDHCQQVKGJTPODBAFEZAROFXMDHUZF");
    msg.op = 24U;
    msg.lat = 0.0759734169716;
    msg.lon = 0.721724040743;
    msg.height = 0.777118088461;
    msg.x = 0.0484600003043;
    msg.y = 0.94271768566;
    msg.z = 0.324385749212;
    msg.phi = 0.405318092395;
    msg.theta = 0.803158103067;
    msg.psi = 0.282290094034;
    msg.vx = 0.939048195083;
    msg.vy = 0.898313663106;
    msg.vz = 0.293270434677;
    msg.p = 0.427697078124;
    msg.q = 0.58722470571;
    msg.r = 0.287714496779;
    msg.svx = 0.432297244705;
    msg.svy = 0.320992588912;
    msg.svz = 0.772708058483;

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
    msg.setTimeStamp(0.668523212611);
    msg.setSource(48442U);
    msg.setSourceEntity(184U);
    msg.setDestination(30991U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("HVCYUZLHTKQGIDRNIWOXUTVEMVWFIBBLQUPPDNYQEVOVNDFKZKWKJZSTDFUXRMPPXGAUOQEMVAFABFYEBZACGGULWXRRMELSABFF");
    msg.op = 161U;
    msg.lat = 0.0433373350486;
    msg.lon = 0.164751907455;
    msg.height = 0.0292614959605;
    msg.x = 0.861732236966;
    msg.y = 0.541146047938;
    msg.z = 0.446390080763;
    msg.phi = 0.127637043994;
    msg.theta = 0.974815037103;
    msg.psi = 0.460633090742;
    msg.vx = 0.769875122463;
    msg.vy = 0.15851049203;
    msg.vz = 0.547973857525;
    msg.p = 0.728227994581;
    msg.q = 0.013583780387;
    msg.r = 0.952183702093;
    msg.svx = 0.454351845056;
    msg.svy = 0.691538945069;
    msg.svz = 0.493526758944;

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
    msg.setTimeStamp(0.294215900178);
    msg.setSource(186U);
    msg.setSourceEntity(39U);
    msg.setDestination(10649U);
    msg.setDestinationEntity(93U);
    msg.group_name.assign("KBCLOQACYKMOPHMKRGXTQVEKOHVSWYLZWSBAFBCCPOINRMEIIJNVCXZWROVSVQCNLHIXMFJDVTUWDPJEJUQEAOZBYGMINFWPSJZJTWXYAMYFRWHTESGOTEBZQJFRVBFXGYLLHCQJQKSUPTZLOSTDBRHHVZCPRYGVQFFSKIZXDN");
    msg.op = 75U;
    msg.lat = 0.1087620152;
    msg.lon = 0.797350707036;
    msg.height = 0.391075467204;
    msg.x = 0.670188516856;
    msg.y = 0.215783132859;
    msg.z = 0.614047422357;
    msg.phi = 0.828671725557;
    msg.theta = 0.822428653681;
    msg.psi = 0.646259775875;
    msg.vx = 0.577943583113;
    msg.vy = 0.70059739657;
    msg.vz = 0.875996560393;
    msg.p = 0.290358503127;
    msg.q = 0.504387803547;
    msg.r = 0.450512106731;
    msg.svx = 0.79705421203;
    msg.svy = 0.576326110172;
    msg.svz = 0.886031703063;

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
    msg.setTimeStamp(0.809534229325);
    msg.setSource(61155U);
    msg.setSourceEntity(102U);
    msg.setDestination(55298U);
    msg.setDestinationEntity(186U);
    msg.plan_id.assign("ULXDQDBYOWOKGVJRMEUBSARGWF");
    msg.type = 228U;
    msg.properties = 181U;
    msg.durations.assign("HPZMHMVVTPSPSDENGRPYMOMJBZRTWHQFILARBFFWVOJFXWUIXLQDEFCUIWLVSOUH");
    msg.distances.assign("ICVAGRLHARXTILABNGPVRDMETSQMKHYLGYFPWTPLVIMSSACBRQKUWGSMQHFYDNXNBDXDWGYUQQHGMVJFXAZL");
    msg.actions.assign("HSPVTEPPGZTCISRFIJOHNMLCKZYLLXCTNXKNTWWBQLOXOOAIQUJYHGEZROXIVKWPQUJAKZQHQNCVRXXOFKBSSDNUYBAMWNRVMOYLMPRTEBUUDTBUTJVZMWLZKACBJWXIFGPDEYYXHGLVCDFZVISXPLUBECAAVBBOQVERSITDRQWYNFGEGLKNEKXQYCPMZDZPQHOKDTHSFESLMAIFHSNWARVYJMHJWRUDNIDBF");
    msg.fuel.assign("ABWGKBDMGHPEWZRSCIOWNKEODEPHWXJNKNZHWQATWGQOKFISWZNBCPILYLUPABCMKMVETARLBBCFWREJHERPMNAJRJVNOIRKZLQRTHETFOQQIYTJJXGEXUGCNRDUASTBTQZNFHQXOVTQL");

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
    msg.setTimeStamp(0.930333558739);
    msg.setSource(35721U);
    msg.setSourceEntity(93U);
    msg.setDestination(22933U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("WUQIKKDPMPPNOTCZDSPVFKCQIGRFGTQHOHWBRZZTETTIDDTKGUUDLJJCOXAXFBOWNHMJSHCOIGCYLJAQQUXYOLYXILAASVSUBIDYKRVBEBVOXWSZPWOEVNRQTNYZTSKFPEQFHWNPAUI");
    msg.type = 71U;
    msg.properties = 82U;
    msg.durations.assign("IOXEQXGSLNOWLZNBFMUFJGUWWZARPLQBTHQWDVFIVEUCXUOGXDTNLAQRHVLCPKQLBYGPTIIMDZBJSPTJZWPSMFHAYKVWURMEYPOOUDECPFEKFBSNUBAZHJOKTVSCAMOTEMOVJRRCZRKDMZ");
    msg.distances.assign("OXTXBAQTYJEQWIYAYZZBTYJNPDNNEMHPFUKOHVU");
    msg.actions.assign("ZNUZNWSBHUVIMXYQVEGDYQGFMCURRXSJFHXKBKEXSSNKKIKRZUPJHQSICICELEXXPMZSLBE");
    msg.fuel.assign("ZSAMJOVUNCAKPQCEMBWSRGUGXQANHUBNTUINFDXR");

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
    msg.setTimeStamp(0.993772560736);
    msg.setSource(34077U);
    msg.setSourceEntity(16U);
    msg.setDestination(25975U);
    msg.setDestinationEntity(71U);
    msg.plan_id.assign("NDNDJAFMSAYLEWLEJUPJQXWPHCBEKLNAAWPWNSBRGDVKWXUOOQKRRCHTBHUCBQILIVQDSEKBIMCTFVCASOZECBABZUSLK");
    msg.type = 117U;
    msg.properties = 61U;
    msg.durations.assign("JWVTEURZJRKKEZESQIGVYEWRKZCSKZGYGJWSBYXMHLAYSUKMJUEDOIJQBKMHZRTCEXFRJKZPQCRFKSRNADLPUHNLLFNCHXYLMDOLDPFHIBLMBOWTWGVICBMVNXBBVVMCULAMDCZBIVUSFNXNWJTYRPXKNQNDFOWEOSGPVQFTOURCOIQTXYEXLTYZPHNADAICUPGFGJPJTDGKAOURACTSMFXASWNMSHFHYDZHIAVGEAQQ");
    msg.distances.assign("KNJJDWVFWKRAPJQGJYRDZWL");
    msg.actions.assign("SPOTEEEFKDSBQDSXILYYYOWPQSYFOIRZNWJSPSAHLVUNQPQPMXLLWYSARQIVGIXNVUXAKQMFEGCAUPTDTDNOGCIMRJCDPFHFJXUWSYKZEOHIMIVZZHZOUJXYQGGLAWNNITIHATMVFTVDALHHWQRSGNHRUCBXHQNBBUKMLOBIWEMKSABCHWPZAJOJEFNLJX");
    msg.fuel.assign("LRAFZDHCRDXVVYXTDJZPTMIJQRLGROZUZUFTZFUSQECIKCKPMICSBARXXKAKLNPILQGMUUGBVHILDIOZXTNHYVWWWWUSJUHVCGAANENWOVFLAMWFBEZXYOQMRUOTPKJOGTGWHVOERMPVYNGGAMFBWOKGJWPPLTDOTEJIPDBTNBYCKEKQSZYQHDNHPSYFRYYOHCDXQENQFYAXSIEICBMUMKLCEXADJVWTEQQKZAIBUPBSRZJNRHHBFL");

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
    msg.setTimeStamp(0.424207901306);
    msg.setSource(19U);
    msg.setSourceEntity(225U);
    msg.setDestination(55445U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.0162634079763;
    msg.lon = 0.356176609932;
    msg.depth = 0.926746060922;
    msg.roll = 0.297210545391;
    msg.pitch = 0.871453551187;
    msg.yaw = 0.747317502053;
    msg.rcp_time = 0.939351093544;
    msg.sid.assign("VEIISHYGLPSZIFSUCULQCINVATVBNJFJUWNXGNZZDWBIGGRCOYPNVHSAGKKQOBZRDXTGGMOBWMWKVYQFEDUZQJPHOKMTAMROERHEGYQNTWCYNZMXVUJWSFORRIAENPBVHGYAARTHJIDSCSAEBWOYBLIUFZWMHFYPFSOTRKMTYIYXLXEDXRCSLI");
    msg.s_type = 241U;

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
    msg.setTimeStamp(0.311462461821);
    msg.setSource(29431U);
    msg.setSourceEntity(222U);
    msg.setDestination(17949U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.830815044549;
    msg.lon = 0.909569460621;
    msg.depth = 0.49941603734;
    msg.roll = 0.727529282312;
    msg.pitch = 0.689603046849;
    msg.yaw = 0.121385862043;
    msg.rcp_time = 0.772411789401;
    msg.sid.assign("QZBHPZXZRZXEBFFSGLZEEK");
    msg.s_type = 197U;

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
    msg.setTimeStamp(0.552218566452);
    msg.setSource(45590U);
    msg.setSourceEntity(253U);
    msg.setDestination(29306U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.162683562931;
    msg.lon = 0.826925850513;
    msg.depth = 0.521516755973;
    msg.roll = 0.822317388102;
    msg.pitch = 0.65725784858;
    msg.yaw = 0.717714848219;
    msg.rcp_time = 0.315007873567;
    msg.sid.assign("QVTSSKCYZKMUXKADZWAGEHGADNFWEUHZCRVDKMAYRDOKILUXUPPGYFOQFCWGNPBXSHITBOCRATGVMZTHMTUBNEK");
    msg.s_type = 96U;

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
    msg.setTimeStamp(0.179393399376);
    msg.setSource(50954U);
    msg.setSourceEntity(25U);
    msg.setDestination(31201U);
    msg.setDestinationEntity(147U);
    msg.id.assign("QMEDHZAGUDAOJSJWRVZSHUCHDQLWMVXWXINEJIGVZWFLCZSRKTKKAVHFRXFCWAMGOLYKYICBOFYPCPOMVMTDCYGHPPSJKSYOBABRQLPPUUGQGMGHPZXEDHETUJREGZHIDYONBRTXOADPTVSYFEJUTFMKBXZJSQNFZAXNTBXBCLNJFPDYNMNVYXSVJIFUILUBQQNFQMORNXAVICVHTOSZEYJEZQBM");
    msg.sensor_class.assign("MUCFOPPOQGEQJEHONOOTAVXRFYJDFKDCLSWKHLJHZVKGNAEMFMBLEBSFZJVOPTRWSJMBDNNWQPYCCAIGIVGPCEGDKEXRAPZYYVSGJCVANINDHQWQCAKCNTKSLRSLMTVRA");
    msg.lat = 0.477346654862;
    msg.lon = 0.563920446825;
    msg.alt = 0.596581700426;
    msg.heading = 0.880304425381;
    msg.data.assign("WGVHLXWQBKWOJAHHFHASQKDOASKQVISSMPOVQOIUXRMWFROCMDSBTVGIRGYHBTFPQOJESIPXQPKCQ");

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
    msg.setTimeStamp(0.368140546958);
    msg.setSource(12893U);
    msg.setSourceEntity(162U);
    msg.setDestination(52419U);
    msg.setDestinationEntity(198U);
    msg.id.assign("PFCYRJWVJOOAANIUGBGXUMMHPENDPOPXBSDRWSWMZYISPBFFYPVSEKNFVWBLANDNUJTYTPIJRGXSKNMAOIQHLIQMQGOLBTQHMSYWBNGKESCEGHTFEGHQAIIAJXOZNLCTHMDVGDUQCAIAZBEQUVXFSWZMYMZCIXCYNKUXKQHTLKPVLZCUCRIDXVYZGRLVKFQRRKQU");
    msg.sensor_class.assign("LDIQZGZNXPVQGAZYXTZHZNYIXRROHQQCXTHRAZYPDAWXLWNITALETOVYBNMTZRHBCMVJNWBVEGOSDBQKJVIUICSJFLWKFWZLBFHJPEVDVFXCURKF");
    msg.lat = 0.797935002481;
    msg.lon = 0.769610956887;
    msg.alt = 0.326373322906;
    msg.heading = 0.267090371756;
    msg.data.assign("AXYKFNWGUCVUTOFBMGIANXUBRKVQDWLZMHJVEKBXXFYHQYVDNGPXMCDPZVDZRZKSUPBBWLFEREUCGMOWJMKLTTHASBUIGQPTONQMVQRZICFFBRCPABTDIYHFJZJPNUFQAHIMFKZJXYGDEIHYLXDDW");

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
    msg.setTimeStamp(0.616392026952);
    msg.setSource(11419U);
    msg.setSourceEntity(122U);
    msg.setDestination(12721U);
    msg.setDestinationEntity(159U);
    msg.id.assign("QLXCXHZRMWHYMQNMFSFECPYBUYPQDWIUUOFZVSVSGENJAFDDIERPBOTUSSDHQRFHTWNWUGKSZXTPBGXNCSPXLVNNJCQYBMFK");
    msg.sensor_class.assign("GCZQMBZBPTLCYQDFCUZKUHUHSTWFNNXQNBDITLXHRCSVF");
    msg.lat = 0.610120953831;
    msg.lon = 0.468529895223;
    msg.alt = 0.507934953173;
    msg.heading = 0.355330116611;
    msg.data.assign("HQDVNXONUGPETWZSXAOAQSEWSKEJCJENYXIPZGHIIMPTPLWCCRSQEMNDMAOKCYTUJHHYDBLLUZTFRHPXBPFYWUKKEXVOFVNQXDHBLWVPRDMLSHBVJXMLUWAZLEIYKRGOSJJZGPSBRTZFCNOKPDYEAHVGQBGFOXCEVZFCLRHGIJLISYGAAJBDNLWQMNRBWCFROZMADIJTIIZOZKVDFKIUWCXUGVRWTUDQFBMMNQOKK");

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
    msg.setTimeStamp(0.376665767269);
    msg.setSource(43588U);
    msg.setSourceEntity(121U);
    msg.setDestination(14306U);
    msg.setDestinationEntity(75U);
    msg.id.assign("VALLJDUCIZRCXLPXHSVQDRVSEVIKOQPIGKTNAANRBVTJUPNGPSVWYSJFPWJHAFMFEWQBAYKDJREDJKURUBWZPIVHSQGKFWOZSHSWBDQVYUEUKTRLHDBGFJVHMBBENYVRZGNOZQNOGGCCBXMKDDEYME");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LLOIDFOVUYQYALRIKXNFKAFKYWRWAFIGGQSXBDOOIXSFZJPNHQPVRWOKNGCVJABKAGQZYQEGLDMQJUMRHBZUCMXUNBYRQRTZDARZTTHIXCPWHGCFTMKUEBECTFJBCGBVUDPFISKDQIMGCQPSEECLUHPYQXJEIVJVYTJXAZHNZMGAZETHGTJWYSYODVIMLPLIYWVFKESHWAOMCMWOLDJTHTPVFDHVBXREPBKZWSUDNNMKCPLJLAEOSXZOBRR");
    tmp_msg_0.feature_type = 6U;
    tmp_msg_0.rgb_red = 224U;
    tmp_msg_0.rgb_green = 168U;
    tmp_msg_0.rgb_blue = 230U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.342533334418;
    tmp_tmp_msg_0_0.lon = 0.736451061125;
    tmp_tmp_msg_0_0.alt = 0.15175930065;
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
    msg.setTimeStamp(0.18810698973);
    msg.setSource(18971U);
    msg.setSourceEntity(8U);
    msg.setDestination(19030U);
    msg.setDestinationEntity(175U);
    msg.id.assign("TXRDGJWBZHPOFRYFUTGCPNQFVBIGEDAPPTPMKPZEPOXABUTVIGTLYQQSTOBOAESENYKXQHWVSBXJSNQHBBLUSVXCDQJPSWPAVZIMMNHRFYLZKOYDKKYMOXFUYSRYHRCFOMNKLCCDRZJDSGSQKMGZWIUGAPBUFKRJURLERIVKNMXHONTJDWLQTZGKCDZHABHWZODUVNNSEXHIIRCZWMOFCVETMTFUAH");

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
    msg.setTimeStamp(0.864373149127);
    msg.setSource(22342U);
    msg.setSourceEntity(218U);
    msg.setDestination(58942U);
    msg.setDestinationEntity(174U);
    msg.id.assign("OOKCWIEJKGYDPQKJHQHDSUEYHDENQFSYGTJFFLQGMGIKATDYVQTRBRWTLDIBOEGXPRKXHKNGMAOATMURYNVCCFPZPISJVLCKF");

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
    msg.setTimeStamp(0.477085253851);
    msg.setSource(53683U);
    msg.setSourceEntity(74U);
    msg.setDestination(33385U);
    msg.setDestinationEntity(174U);
    msg.id.assign("ZFUTQMGROOISERJNFHTGYFTPHDITVNMQHPLB");
    msg.feature_type = 144U;
    msg.rgb_red = 145U;
    msg.rgb_green = 174U;
    msg.rgb_blue = 243U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0662573846184;
    tmp_msg_0.lon = 0.353584883189;
    tmp_msg_0.alt = 0.631854644163;
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
    msg.setTimeStamp(0.410378345644);
    msg.setSource(57181U);
    msg.setSourceEntity(197U);
    msg.setDestination(21495U);
    msg.setDestinationEntity(249U);
    msg.id.assign("VBNHYTSULNQMYLPLXFJFXENADLHWYASZDKOIBZXISPEBSDBCUHDMOMMZNMRBEARKRVNPDWVJTBFUQQQJTWSJRPYUFXUGGOREVBWNHNWAYXPMEHGTYUZFWXYZAXCBMGBAYRZFEEOKFWYDSOUGPRFEFSZIHHVQVHAODCLYETQJLSKRCTKNQZGLRCMCOKJWGCKTIAIMIPVUCOKNZFDXLCLSPJCKSIGQXAP");
    msg.feature_type = 201U;
    msg.rgb_red = 246U;
    msg.rgb_green = 166U;
    msg.rgb_blue = 155U;

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
    msg.setTimeStamp(0.437170209816);
    msg.setSource(2404U);
    msg.setSourceEntity(210U);
    msg.setDestination(22448U);
    msg.setDestinationEntity(47U);
    msg.id.assign("LKWPQJFPQHJBSAJWYWZAXMZGLLETWIVXIZPGNTOCUBIESKYBDWMDNVUVIFTALBTLHSMSGDINDWKOFXKDZPLWKTRFBZUYRQHCAZURAVLOEWPATDFICEJXCNPEVCRBROAMDMTAJBHHUDHRUDQZGXXRSVGEIOYCPZMLXYKTAKUUEIWRGZNQXQFOCHKRIBHHXLNGJSQNFYOBHDTIZSFVBMYCXJARPVLMSYEFPO");
    msg.feature_type = 137U;
    msg.rgb_red = 11U;
    msg.rgb_green = 80U;
    msg.rgb_blue = 165U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.787153237859;
    tmp_msg_0.lon = 0.0668666236676;
    tmp_msg_0.alt = 0.496662273764;
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
    msg.setTimeStamp(0.0739400638704);
    msg.setSource(2952U);
    msg.setSourceEntity(161U);
    msg.setDestination(8275U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.889508916474;
    msg.lon = 0.275202859223;
    msg.alt = 0.979318293077;

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
    msg.setTimeStamp(0.861385824175);
    msg.setSource(49298U);
    msg.setSourceEntity(58U);
    msg.setDestination(44389U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.0860085561111;
    msg.lon = 0.793561801524;
    msg.alt = 0.025918494702;

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
    msg.setTimeStamp(0.0054276873232);
    msg.setSource(58828U);
    msg.setSourceEntity(249U);
    msg.setDestination(40915U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.968668387639;
    msg.lon = 0.355977223876;
    msg.alt = 0.6033422785;

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
    msg.setTimeStamp(0.446080054345);
    msg.setSource(62791U);
    msg.setSourceEntity(132U);
    msg.setDestination(60102U);
    msg.setDestinationEntity(40U);
    msg.type = 49U;
    msg.id.assign("MVCGFZFYJFVZMPMWTRHCZGHVTDRNPYVDSWWBLMODPSULOJHRXYANFCCZYYCWJTOBRQFHRTDSDTVIQVXBMKRLKIEOIOKNGHXIYZSKROVXAYCBXYWLZWWLIPHIXCJSAOEIEQSMUULUETTFNKWIDADNGKQZCJIVGBFUQGMABCJOTEYPNJAQWMEPGHJNMXLMLNXZJPDDGUHCLKHEPXSNBA");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 105U;
    tmp_msg_0.tas2acc_pgain = 0.864493294842;
    tmp_msg_0.bank2p_pgain = 0.588214318262;
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
    msg.setTimeStamp(0.814592175897);
    msg.setSource(56271U);
    msg.setSourceEntity(220U);
    msg.setDestination(41647U);
    msg.setDestinationEntity(139U);
    msg.type = 165U;
    msg.id.assign("QLULQEXUVLLVIMVJHKJKOWTMICDTAGRPQVMONQUCPCANHZNFPFCXUNRGACGBYAKTFZXKFOZRRPXJNXEGIOIXRFQYTSIZHQUSRTTFNMKGSISMKHAIYGOCSVTWLBLEZNNDJHWEWHDMHAHWVVTUDOEOEXJMBIYYWPNXLGYDDKUWWZBJUAJEBBJAXT");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("ZPOOPPFBBEVKBGLXFVNVRIHTPMAKFJUEOYPTESKPQQRHQEXGASNPBXCLTJLJTAUOYIGKMVOEKFXIJNFAAUPCDL");
    tmp_msg_0.value = 246U;
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
    msg.setTimeStamp(0.292921410446);
    msg.setSource(60192U);
    msg.setSourceEntity(97U);
    msg.setDestination(14294U);
    msg.setDestinationEntity(108U);
    msg.type = 106U;
    msg.id.assign("TEGZBKWSSWYOHMKUULCUNXEWHZDAOVBAOIHGZLMJYUGBLSGVMTXFQLSLGVJWUVOHDODEWEXNRQCLPRYEKMGQTIIAKXRFAPKQNAREPSKJ");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.0684486250767;
    tmp_msg_0.lat = 0.458167225324;
    tmp_msg_0.lon = 0.212607276338;
    tmp_msg_0.z = 0.325805898441;
    tmp_msg_0.z_units = 228U;
    tmp_msg_0.travel_z = 0.205883793724;
    tmp_msg_0.travel_z_units = 106U;
    tmp_msg_0.delayed = 217U;
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
    msg.setTimeStamp(0.737058776268);
    msg.setSource(60195U);
    msg.setSourceEntity(22U);
    msg.setDestination(1911U);
    msg.setDestinationEntity(143U);
    msg.localname.assign("BPUBRFJQBMBMAXWGSHTZWGGVLDYIPIANFUWOTSEZLTHKTYVRIXIQYYWDXUXYQCNZBMDJRMHXIUSOOSPHLWHFQPAOEPIULQECEBLCLKVXWDKFZCSJFKGDQSDNXAZOBFFGYUZJACJDHYAAJGZBPRMECXGENTGNCVYXMFWDTLIUNRZVCPEQCGPPLVYTQMRSNROKWKOBLJVAICOHVKMJDUVTHXOTSNKRMZWSZRDHEABYUVAOMEPUNIJQHKRFEKQS");

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
    msg.setTimeStamp(0.600769690866);
    msg.setSource(61464U);
    msg.setSourceEntity(108U);
    msg.setDestination(18741U);
    msg.setDestinationEntity(146U);
    msg.localname.assign("XSSVJLCQJEPBIMRXBTKEPYKRLPGGKIPQDQSUAWENXUVJRBMJRPXDMVCAHNGJYRVNQKTCIHQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JHHLMEEXTAYBUKSVNLGSU");
    tmp_msg_0.sys_type = 175U;
    tmp_msg_0.owner = 53965U;
    tmp_msg_0.lat = 0.840400389152;
    tmp_msg_0.lon = 0.173325654326;
    tmp_msg_0.height = 0.381308597873;
    tmp_msg_0.services.assign("SMDGRQGETRVAQXYTGRSUKCVGBEJAXGODJODNZYJLTDKNJKKBWEZMKTVWQVWFLKGJUCYTNIZWGOYYFTNUHVPHI");
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
    msg.setTimeStamp(0.413479506052);
    msg.setSource(7891U);
    msg.setSourceEntity(10U);
    msg.setDestination(23384U);
    msg.setDestinationEntity(29U);
    msg.localname.assign("TCZJSILESIZDXFEGRXFAPYRQGZIKWUYUBKDABJMSAWIWBKOCALRCPLTYYTHRJCWUIFWIKMAYYSVOGRJKKEVSXHTXQEDUOMUGAJWLFQXKOHLVOMKOIVVLHMMHEOAMZVREJEDUYVAWXJTCDRIDTHCXXQGQMUEGOJIIKPUVDGYROPZBFSRNNCWBFLTDAVJNZNNAPBNZMUGLGQFLYPVCJSFQBEOKXQNNEBDBHZHMZRNTSLPQGFXYTSPP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MUNZJDXKEXFSPQSZTXPLTUNOAVJDRGGJGHRCYIBRMEVBQCVCWGDIKOYPOEUQKGUVOHZSCFOUUQHJPWDVLXFMGJDVYBEFQNNRJEWPCQA");
    tmp_msg_0.sys_type = 247U;
    tmp_msg_0.owner = 5303U;
    tmp_msg_0.lat = 0.413199566795;
    tmp_msg_0.lon = 0.613469177904;
    tmp_msg_0.height = 0.868022581732;
    tmp_msg_0.services.assign("JZTNIQTBBDMWMPGPEFRGTZXADPOUAMSJEZVWGVJALGPFOAWSWLJVATKPCLRDPUIPXQYNCQYNBRHCOYRGVIIFJHWZWQZFEGJQTEDPQBFUEVINSXUCDORYGUDSAHAMAPXLIJDECBVCHKXXTVJTYQLQYD");
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
    msg.setTimeStamp(0.66358612868);
    msg.setSource(37521U);
    msg.setSourceEntity(101U);
    msg.setDestination(49884U);
    msg.setDestinationEntity(38U);
    msg.timeline.assign("HJJTDXUSDUQPXANVBLQNTXHYHAZAQQKEVBCAOSAYBWGWAUJMHYTRJQOAYRBKZXEXBWXCSMZZBOVSLOWCDNEZOQHMMLPNJQPBPUENGUWLYRGL");
    msg.predicate.assign("VJVWKITNTHDKHWGSGXPCKBAZSGWXCQXBSFZAQETFIJBDYCOEYFUGBCVDHXPXLCYFVJHHINRDPMOTRIRAAKIMUUOJXURPLMEHDJEFSNNLXRYWUULYNPMEWBIQICKTGMBFWJDVCZVYFEMYSFHZLLPFOHKEAGTWHBJXPOARLUQIZNARTOWCQDBALQTAKJADWYRGISMLOMXZYJMVZRZGWVNQLNYPPUZNIRU");
    msg.attributes.assign("BKUVMCOQPHZLSIMCQKDPNJFJGXVHOAIGDLUYKGYXQSEZQSMJJSKNWKOCCDZZPDQNFKMRKTNNENXVHHQWHZPWECOUEGKJXVUFFYFAGDLOQBRXOBFEBRDUYTZMSUSGJZRPDSDIYABNVNLNPTGXJYRZLGTITJOKZSWEWIBTKLILLBCYUMPSAUWRYRPREFOMFARHCJVGPSIWWHEQMHFVXPVWMXY");

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
    msg.setTimeStamp(0.336690797558);
    msg.setSource(51482U);
    msg.setSourceEntity(66U);
    msg.setDestination(44536U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("YBSIVGDKRJBUKSSFFCREHYSZBGWLIYIYNURCVBABAZGAZIFXNNQFKMWWBTRVDGAQGAOUJRDSVYPZQFWEOLENXHNMSRVLKLXYDXNLKQLUYULPJMSBQEWTETPFPVRCIDZIOQJCSXKMWMJWUHVIMQFUOSKHBZYODACPPFWTOQTHAPAJMIXVTGEPETIRBEOVKHNSCW");
    msg.predicate.assign("EMQFNULUXKTKGTWNETKW");
    msg.attributes.assign("JWCYTVVFNBDEWEPQCDKCCTITNOJHUFXYZPNXZVOZVMONPULECYFRIDQCMNUEXGAAOSGRCSZNFYGQXRURUNBVRLOFXIUIAYERIWNRAMJKCOQGMBIUKSQBHDBWTZXMHWKLVIIDAOPLKDILJFDJPOGTQFVEEOZCPZTHRHSLPSJLDGKPWTVKLQYBGDYKJBUGHAFWXEKAWRTEYQQNBPBN");

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
    msg.setTimeStamp(0.338838985346);
    msg.setSource(58938U);
    msg.setSourceEntity(172U);
    msg.setDestination(13218U);
    msg.setDestinationEntity(139U);
    msg.timeline.assign("PDUSWGXWJBHOIUEXUNIDEWXKPIEYIBUOHSWLFWQHORMQNVDBDDHKLOSJCGGLVINGKVUBZTVGWXBKJIRHIZFIJRMACKCCSUATGQMKHYOXMZCDCBUYNUYTGCDLJOWBRFJMVZPOLMMAZGELIAAQSLZTCYCAKYRLNOJEAPLNVGPNQJZEFBSDTMZVXMFEAXQQFCHTNSFHRFPOUWIEJTHJPAMPBSKRUKZPFTYDVAXFSBRYQNTRROQWZELS");
    msg.predicate.assign("KTAHBMDVFJPPNKZZCMCBOJLRIWVUNLYJYNBBHZGUYEHXSZGTAGQORIVATGPQTOFVIISAMSXPMOHRUSIDCLGIAUUWTOQNMLQWMPWYMIJNWBSAVUNVZKWCWLLHXXCEPDDGRTHGFFEABFSOIVPOFHUDYKYABZCKHCFBAYKYFBJTJQWCQEEDJLMMKECMXOJZYEPGSWSGUTKPTXDJREFRJWNQDOCYARZRQUDHIHVSXVDZKNVRBXXLGULTXKFR");
    msg.attributes.assign("FEVANHYVDXBFLGDEPVQRIGHJFPCRYVKPLWPAIOXPRQZCNMNUUDGIJHZRMRMJTXGUIQMMBAWGTBEOTSKZYBFJUNEXSNWCFSLRVVTCIZOQNSHULUXTLVZZTLHWATNAHSKJCXYDRGKDSAIWFCOVJTKDIOJCKEEZKNLWR");

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
    msg.setTimeStamp(0.748711956512);
    msg.setSource(10693U);
    msg.setSourceEntity(92U);
    msg.setDestination(7754U);
    msg.setDestinationEntity(251U);
    msg.command = 33U;
    msg.goal_id.assign("LGYJJMIOOMEPRELXFOTAZBNBAX");
    msg.goal_xml.assign("MNECVIDZHISMXQZSCCXLKOAXCFHDQUWVNYCDJEXNXAIESAHKNBXUSKMGGUXFBFZYXVYOCKKFYVMKTJFCDWEQHCAGVOYUYOJWYZLHBDSURJIGOMAIRNRPZAEPDRW");

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
    msg.setTimeStamp(0.820009955373);
    msg.setSource(16125U);
    msg.setSourceEntity(106U);
    msg.setDestination(42544U);
    msg.setDestinationEntity(253U);
    msg.command = 215U;
    msg.goal_id.assign("NLUDHLAIVZPJUVRTTXF");
    msg.goal_xml.assign("EMTIIPOGUTUQHUQYKZKHDDDJAHRONVBMOUFFPWSAVDRVHGESFOGIMAVXVGAYPYMWELYZATUXQJBCNYUCSKMYAKBSYCDJV");

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
    msg.setTimeStamp(0.051876799274);
    msg.setSource(62862U);
    msg.setSourceEntity(182U);
    msg.setDestination(59616U);
    msg.setDestinationEntity(40U);
    msg.command = 57U;
    msg.goal_id.assign("KBDMDJSBADHJKMQHLVUILBQFXNIJQUPGPNWRXGQEDV");
    msg.goal_xml.assign("JQWVINHHOCWPOJVQIHXKEZJYKZDLMKBFKHXQEIGNTKSNLPEKYIGRRVNAEUTRGAWAPMVNMNFPPOSURDRLOOXUDZXKSTDJRRICTZLAGHBYQHRQEVACBPLAUAWYATGFSDHIRIWFMJCFDMWMABGSOXPNPGPUTMPSLZYSFTSVQJUWFCMEFVZOUBQXGIBEOBIDEBXLOBCSXLLFBECWLYWZDAZJOYTVYCXFRJUTZHVNQYEIHYUXNHTZKGQKSJDKW");

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
    msg.setTimeStamp(0.0513879561665);
    msg.setSource(11408U);
    msg.setSourceEntity(64U);
    msg.setDestination(56259U);
    msg.setDestinationEntity(246U);
    msg.op = 219U;
    msg.goal_id.assign("METVCXYGOJXYKYHUVRPIZTLRNCZUBSOLVWZUOUPJGZZPVBWQCJVURTNERPYEDVALDOQHRJPAZQNAIXEGPPGEENRLYOZWKSWHIOPLCHLINHKGXUMKSYFKGGFRAQWDFBQQDAJATCCRPQQNMTXMFIGHRJC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HKDXANNPODMSGITUTTKJDFONRDJXLFWHQHVBSAGZGZYIVIQMSSXQSSMOEEZEDGPVFMENBRQOGUUTPAOBKKQNYOWLURXCMYLJQGWMFLBPWWCARYTIZDGANYVFNJJCEAHDMBRUUOIUWHVELWWXERYJKDWSKAHVIJMDOXLTGCBKYHGIAUPVZLZWZHKEALXMQQFZZCXPOKHBRPBXUGUQBPKCRXTYTTTENZFFSRYVMLPPJAINNSLHERCFVBFQC");
    tmp_msg_0.predicate.assign("REBVFEXDDPZXUHMXARKDTDGJCOBNFTDQWBZTBWULQBIU");
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
    msg.setTimeStamp(0.44968383242);
    msg.setSource(5766U);
    msg.setSourceEntity(222U);
    msg.setDestination(48101U);
    msg.setDestinationEntity(226U);
    msg.op = 43U;
    msg.goal_id.assign("GRBRXEDVNXSFOHRDTNFQRPAWQMKOJCZSJSZWFGEZUFLPLCSYEYZYCVPYRKGIFHCLBKGJASHEDWWUIDQTTTKCEPXUXNRBAQAKHRDITADCUVXWGINQROUTQQXOIPBWFOVTPMSWOKIGDHMOAEKPIFBLHSBHLQKJWLGTPSTRFVZJMHQDJMUZEGFIVALBMRFZKUXVHWAGDGZEYNA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FQFBVOAFGAKJLYEXFGDZNETONGPSZAYRRJZZIQKKBYCWWXBWJBTBQIOSYVJYLBEHYLJJEUVHCFNUCRJRHWJGDNOAHALIDUHTGEZBHSQDOFQTPOISAPWGHHPNMMYP");
    tmp_msg_0.predicate.assign("FHDBUATLTWRHBMXEFLVNMUSMSSIEAKKYWGXCOJAUUUBHZRQVPKIGZNQEWCSTTXKPFVOHSGGPVRIPYGSZMCIZRVUJNQXBKZZDOCTWLEJXPBCKWLFZTGIWDLYBHTUOFDCIBGTMYJBRYPERASDXDJNRVMEWYTFWXBMAAONELUOOUCRKFMMTDOHRCMZPKNEVNVYFZHWDGSVPQHBOWKFZGNYDJCNYGXJIN");
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
    msg.setTimeStamp(0.243744553191);
    msg.setSource(34685U);
    msg.setSourceEntity(16U);
    msg.setDestination(12796U);
    msg.setDestinationEntity(137U);
    msg.op = 19U;
    msg.goal_id.assign("ARQKZRXYQGJDFMLJTUXYDUIRASTDEKBNVZHHDCZLJLFJZEKPVXWKIFCLVYXEDKINAYHNTEZQVHOVJFPBPTWWSHKBWEMGBMBCSNVH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TVRQQGRFLXAUUXHUWNHYEMPNYBGRTMOAKBDBYHKEDVCTGYMEANORNMXIZGYXSCGDGPVPUAVQDDTQWODPNSTFKMZNIUZONLHJIJXQWFBRSTTWSENLIKOHLAAFXLLMZWDEJOCHVSKTKVVMEQGLMYZBLRMGCYOUWSHFTOXRTIYIQWEKZDRACFJKHBPJMR");
    tmp_msg_0.predicate.assign("HARNNLQHKYGOIGSGWMRGDBVKAGAHPPNJIKVCJNAIROXMOPUUTYSDYXKQWEXCBYOFYZFFSBVTKZBYZTEDOCYD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FLEBMUSSLVVTCWCWTOQRHSFBKVCPPSCCQQKIFYVJUQJIHNIYDOEEZAQCJJPWSAJXIJBNJHKVWQPBNRZPEPQPBHUZZOESRROSNLYD");
    tmp_tmp_msg_0_0.attr_type = 231U;
    tmp_tmp_msg_0_0.min.assign("TFPMSRXDECVZCFSZUUVMBWCFIBMGWWIVJOGMOLTUFNOEHQXRDVGPUDQARLMOQZBJATEEEHACNJFWZPDUICYGGOAKCTPJVRGDIZQLHGDCXWPZVDHMKXKKWTLZYLHBKQDXGKCYFIBBZXLX");
    tmp_tmp_msg_0_0.max.assign("UXFDGGIISLFPYIRLXFQPEFCHSBZEYTKVZQTTLCSYOXNYUEODGLBGYEIWVDWTXWRFTBDDKZZZMQUNNUCLWNEAI");
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
    msg.setTimeStamp(0.797473209723);
    msg.setSource(52821U);
    msg.setSourceEntity(3U);
    msg.setDestination(12206U);
    msg.setDestinationEntity(230U);
    msg.name.assign("KETOIFKHJARLECYYZIZUSJZBQQBUZIDPQQPJKQRTHLVALOVISNFYOWJDNWDJQRWRSPQCFVLMZOARGBDYDYXMNISVXJGOFBHWYAJGSHQCVLOEGVHXFHTUCMLTUPZTAGPCXBGDPRERCXBOXEFUZKGBNFOMEVMPIGAKMVINWADIZURJOTCNSYLSVDSPWPHNFREC");
    msg.attr_type = 78U;
    msg.min.assign("DHEUCTDRBHCXEBYKDJHKHZXPQDWARIMLEPCDEAHA");
    msg.max.assign("IDXOWQTYRJGVRYUBZFWRIDFEJOKGXGNPLINWKUHAJESEHGBSZZLHWXWCSYDGLWCKMKZXLZEOZSQMISUOBYVLHVJKDTOPPLOCHVBPVRSXJZBMTJFCAEEGKTMMACQNPDNFMDYYBWIPENAAIOCPYFLHAZCJSUWDKRLIPYXQQXGLFVYDHXJUMRQSVFBRZTYVSBTKPRFOBGOEHOQEBMZADNUEAGNAPFTQTUUXMKUMGJTNCXDUINWRJCCVWTVSQ");

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
    msg.setTimeStamp(0.10443837191);
    msg.setSource(13564U);
    msg.setSourceEntity(129U);
    msg.setDestination(34090U);
    msg.setDestinationEntity(77U);
    msg.name.assign("CRSXVDZFDOBLALKVM");
    msg.attr_type = 218U;
    msg.min.assign("IOBYPNWVGJVOHGNOWDNQWROQQRJUFWKDWCBOBURYYZTLTTNCBBFKKP");
    msg.max.assign("FCFQSVPRVPSOIKPCJFMLFPTSLTBQNANCNXAAXNGTJRKQKLQNDDOUDIHYARVTHVXDMWRETODHWBCNSFEMUAXGLSHWUVXNWXDYYQPHEAITGZIZTSKEIALMHJMJXRKMGOZJUBBBQDOKIEZCHBQMJUUCHAFGYHIGYZKCPANUQWBLLZGZJEEXYIOSTUVHGWODKWBBMTRSJPALMRK");

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
    msg.setTimeStamp(0.488742224801);
    msg.setSource(19731U);
    msg.setSourceEntity(105U);
    msg.setDestination(13290U);
    msg.setDestinationEntity(110U);
    msg.name.assign("GTNZMVXYXVIXFSIBLNIXGWBDADQWZPFOAGABPXDSQKSJLWZFXTIMSMFJMUICNNNERNTYHKCJRXFPMCIYZQAAEGYKCHBLJWNFYGBTKFNUYKKEUOVWEUMHHCHVFJ");
    msg.attr_type = 63U;
    msg.min.assign("SBJYDAJWXMEOHCNWLJMHZMRQJPXCEYDNXRQDIXFGVJTTMSMWEAGSTNIETJMSULAHOOAETKXEYGHDXDWDHEZLYBXZNPYSHURHLFIBPLIFDPZIDIGAWXRQUOYJRUFSUXKOCKKKZNCZSIVZJJELWQTAHTNGBCOAZEGGPBGFM");
    msg.max.assign("WKISDORCTBPYBLDVETZJNDFFRQUXGBMVVUALEZCRUMYEQGKZVYWYDPTYYHRYZPHVODNBBLKBFXHKJKUBALFBECSBSVQXSKUJZZPSONGIMUWPNEQCQESISPZKTGMZWPXZJVF");

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
    msg.setTimeStamp(0.83717144209);
    msg.setSource(53125U);
    msg.setSourceEntity(136U);
    msg.setDestination(28753U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("MTQKIFDARQQXELBVWVITMWA");
    msg.predicate.assign("UEMFGMAFRAXFVEGGLVSZGEDKDBVGQNLYZMNKRGFQYRUKWAQKDEXMTNAFFEHBXJDWTSMUKOROQTYWZPELTJOTQCWFJNHCIVPYWHCFGPTRMSWZIOLWTYTQSBRSKHUHLAQMQIKCRZELJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SEOVDQGUYFXORSGDYWCEMDOFNMJVQPURZNNLAVWCTATPCAXQEXJXIQUZBRHXSKCXHDCNRKLRCVOLTMJVPRJDZJGWDRKHCLEVPOFAYHOQKEVWMOYQGDCTQFBHTFVLLPYPKKUIXHHAY");
    tmp_msg_0.attr_type = 18U;
    tmp_msg_0.min.assign("FXFPCLBXAJHBZOOOBBBKGNSWYNSSOJMNDVJWQEDQHPBRBWKZYRUNIVMMFRFJGHLIHWDVWTZKWARQUEXSDZOCYHKSFVRQUNXKYWFILSQKRXPJRDT");
    tmp_msg_0.max.assign("OBDZEKRDSPIXWPLGELLFXYAY");
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
    msg.setTimeStamp(0.147941281227);
    msg.setSource(7224U);
    msg.setSourceEntity(97U);
    msg.setDestination(42854U);
    msg.setDestinationEntity(244U);
    msg.timeline.assign("AVHBWNWQSAICSGQRARRBKMRCYTGBBDDAQYSMJJWANHINJKSRWUZUBTLGQFRUFPGXYOJLKGCKLLQNEKZQTUFOVXOXZROXPCPOBTDUEVXELHPCUEMZQVWMGHBVIOGIMAUXZZMCKTDWVYLIFKOYBQUYIDOIJC");
    msg.predicate.assign("MFMONHCOMJYLCGUSECEZTMFETHEE");

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
    msg.setTimeStamp(0.777044257464);
    msg.setSource(17247U);
    msg.setSourceEntity(155U);
    msg.setDestination(41814U);
    msg.setDestinationEntity(92U);
    msg.timeline.assign("RTBOBGOMTCUAQIPYYDUAPPKNXVQNJQJXGNWKLOMUCVPNFHCAWIRSMVLJLRFXAGOGTRWEXGUIMXPQZCDQSAJSZXDOOMHKXCBLSEKWSLJOTKQIXIGIIYYZHKNHBGVFOMFITZWHTOE");
    msg.predicate.assign("OZKNCKFCBBSANVXXTJDWSKZWJUOSXNNSITJVAQUZYLIQXXEBZROERDOOJQACJXWUADRYVPIVMNKAIHTRJUXVMNNLSYPIHYZPBGZMRHL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XNTGFCXZNHKPEFZXBQQEWIAZZRIIFSVWJWURMMACHDCVFQYUIEBLBXCCQVUKXRMGKATSGOKVYIEJZJWLMFSWSTXFNQMZTYUYEMUXFQGPVIDJPTZCD");
    tmp_msg_0.attr_type = 49U;
    tmp_msg_0.min.assign("CSPWNUPTYBWDXTVWPEORXHOLGEYJMLIFEDOWWQAMRJTOZKAFONMAUJKFSGLOLPDRMJBVVDWTUNHYRHAPQPSJWZDMEIHGKYEVSZBFDTYYINVUKFQNRCVZXTMDUPQHOPYKEZUUMPSHZCZEEUGJSJBWYASKIQSXAMBVYNHGZCFVNM");
    tmp_msg_0.max.assign("NOKEFAENUGGZJOXVK");
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
    msg.setTimeStamp(0.882163917033);
    msg.setSource(23884U);
    msg.setSourceEntity(191U);
    msg.setDestination(13470U);
    msg.setDestinationEntity(16U);
    msg.reactor.assign("JFPNRZTBMJHNIOSSAXVOEVMLZPDBMJKHJEGPADHPLMJHECOPYGEEQCYEPTUXQGZJWVBISYIYWZUDCNNK");

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
    msg.setTimeStamp(0.562376947946);
    msg.setSource(29527U);
    msg.setSourceEntity(168U);
    msg.setDestination(7847U);
    msg.setDestinationEntity(168U);
    msg.reactor.assign("IKSTQVNMYLYCAOYRADDGKRLEXDVTVPJIUHMQKWXGZAZWVBKMPZNXMOMBIELYVFLQJHPRNHPONJJUSOVWQMCDUJZBRNGOUXGSPFYHROCLXTDWMQRVMTTIRZYCFYOITZPSTZMTBJWYKIEJ");

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
    msg.setTimeStamp(0.542780757538);
    msg.setSource(49840U);
    msg.setSourceEntity(5U);
    msg.setDestination(31033U);
    msg.setDestinationEntity(130U);
    msg.reactor.assign("JHAZLUDSXAPCVXKBNWMJNQLBJIEZOFEZGDDJNHZRKAKREXGDXVUWENTFUQIDHIXIUJCMPZQYGVHO");

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
    msg.setTimeStamp(0.327665823326);
    msg.setSource(44560U);
    msg.setSourceEntity(36U);
    msg.setDestination(28240U);
    msg.setDestinationEntity(217U);
    msg.topic.assign("AEVNSRYLKRUGGEFWGLAAAHMIDNWQCTKHVDPYQXOBDKUMIYSBARKJUCTYFDDZYIVAFGAJAVDTJUUEZRZLKWGWMPQIEXMUJLX");
    msg.data.assign("JCPBIFGOJDTGMYKOBXLIZPSHXJVCQKEINMIKZFPDBDSPXHOKHSCFEKMXRRUAPXGWGDIBRFJQPHSH");

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
    msg.setTimeStamp(0.271268997063);
    msg.setSource(4023U);
    msg.setSourceEntity(198U);
    msg.setDestination(5649U);
    msg.setDestinationEntity(232U);
    msg.topic.assign("PLHWQNQRJUAFISVLEXNOEFNPZNBBWASBGJEVISGBMBTUJGCYVLLJPYEJXCFFRTVCDCPCMFHIRFYDHXUEUHPKDXAUTWNNSMBZRXPMMXOBKOIQPZKVNEJQUNDDGUKRSJEQWG");
    msg.data.assign("HCCQHDUZVISADWOXAWBBDMFTAHJLTONJKTZGBEOYVLJXMDZGNYGIRTPYNNHVHVDLXMYPWTICQYDPEWFZNWKNLWOEXZSFUPSIAQBZLRXRGTMDPOICEMISUKQMSGLHQXAMFXQEZWZEGEYMJFRJRORUFFWXIMBRDMYHGQUBOAKWKCSCCIOLICKUSETYAUYPZVXQXKQHTSVEJLRCJDUFBTKNHVQBNPKGRYCBLTIKFAZVWGJ");

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
    msg.setTimeStamp(0.141437972257);
    msg.setSource(11194U);
    msg.setSourceEntity(106U);
    msg.setDestination(51039U);
    msg.setDestinationEntity(25U);
    msg.topic.assign("XSEEITOJCULBILZAZWXMXOXPPZTIGYWATTNFOGMBCBDJJIYLZXNMDMDXXHZTGPLJIBFGWUDOEJHHBKRRKFFYAMQOPFKCCPCILZTYXSTVUAABGIVKDGFDESIYCEJNMTSRSZQR");
    msg.data.assign("EESDWIQJLKOBRMZSPVRIZSCQQMWWDGIEVJBVKXBULBYXAGAMIZQLPQFISAHGTYNHGRMMUGDYNVXHTGNJQHLOSFNYPLCDRNURWMOXJRKZSBZKXEJZQFKBMADHWCQDFKAOLINTFUYUYATXZFCCZKOCEZGWXXNKVVBFSFVYRXFONMPMIAOBTSWUXHETHTYTVCBOVAKJJINLRAWZBUQ");

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
    msg.setTimeStamp(0.248744110055);
    msg.setSource(62736U);
    msg.setSourceEntity(6U);
    msg.setDestination(705U);
    msg.setDestinationEntity(113U);
    msg.frameid = 241U;
    const char tmp_msg_0[] = {62, -28, 25, 79, -58, 38, 114, 55, -123, 54, -38, 31, 25, -89, -64, -49, -18, 9, 42, -37, -10, 13, -38, 38, -10, -54, 67, 18, 0, 51, 110, 94, -62, -30, 104, 66, -50, -10, -110, -50, -107, -34, 66, -123, 26, 95, 46, 100, -65, 23, -121, 16, 78, 103, 12, -117, -81, -3, -18, 99, -9, -74, -15, -43, -36, 19, -94, -11, 68, -66, -74, 116, 71, -88, -32, -107, -13, -114, 58, -119, 39, -11, 20, -76, 93, 96, 85, 85, -21, -101, 106, 90, 113, 75, 125};
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
    msg.setTimeStamp(0.57647879185);
    msg.setSource(16191U);
    msg.setSourceEntity(46U);
    msg.setDestination(5733U);
    msg.setDestinationEntity(203U);
    msg.frameid = 154U;
    const char tmp_msg_0[] = {51, 38, -96, -89, 81, 6, -107, -125, 0, -105, 65, -77, 40, -33, 49, 61, -77, -25, 90, -108, 58, 73, -46, 3, -68, 106, 2, -47, 67, -101, 88, -127, -2, 2, -51, -123, 28, 76, -112, -98, 45, 51, -87, -80, -26, -73, -37, -116, -90, -84, -39, 49, -41, -55, -6, 109, -122, 31, -37, 25, 29, -115, -31, 82, 30, 8, -22, 48, 23, -95, -47, -11, 37, 32, 78, 18, 108, 88, 15, 14, 80, -126, -73, -52, 96, -113, 105, -44, -52, 105, -4, -118, -109, -120, 83, 40, 39, 53, 44, -23, -43, 6, 96, 101, 117, 61, 70, -48, -85, 116, -1, 122, 23, 97, 108, 51, -102, 2, -53, -2, -30, -105, 102, 35, -54, -35, -98, -124, -76, -126, 49, 43, 84, 55, -82, 43, 1, -13, 62, -63, 71, 115, -80, -117, -34, -108, 66, 19, 77, -53, -105, -67, -85, -57, -56, -108, -117, 55, -98, -37, -7, -79, 24};
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
    msg.setTimeStamp(0.653303569596);
    msg.setSource(23116U);
    msg.setSourceEntity(83U);
    msg.setDestination(48932U);
    msg.setDestinationEntity(251U);
    msg.frameid = 175U;
    const char tmp_msg_0[] = {14, -79, -27, 47, 22, 13, 40, -127, 90, -125, 76, 120, -61, -21, 68, -99, -60, 125, -83, -73, 31, 28, 79, -47, -32, 85, -12, -46, -47, -1, 101, 58, 1, 56, 19, -54, -32, 42, -95, -20, -18, -121, -82, 61, -16, -89, -62, -16, -81, 55, -106, -83, 125, -30, 7, 58, 46, 88, -62, 99, -121, -14, -106, 125, 28, -102, 57, 90, 20, -39, -111, -88, 104, -37, -24, 46, 95, -92, -114, 62, -120, 71, 49, -105, -52, -69, -101, -37, 49, 112, -46, 83, 26, -102, -39, 57, 100, -61, 88, 97, 107, 94, -122, -96, 70, -94, -81, 57, 8, -61, -29, 13, 73, -116, 71, 40, 45, -42, -125, -89, -73, 9, -49, 103, -86, 95, -58, -56, -90, 123, -39, 63, 49, -7, -100, 35, -31, 89, -78, -105, -49, 5, -90, 28, -12, 52, 93, -27, 18, 83, 105, 63, -70, -38, 97, 27, -33, -71, 67, -48, 88, 11, 64, 94, -46, -120, 91, -74, 106, -122, -2, 66, -1, 82, -84, -42, 3, -15, -97, -38, -94, -81, -113, -5, 71};
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
    msg.setTimeStamp(0.887114996947);
    msg.setSource(24928U);
    msg.setSourceEntity(22U);
    msg.setDestination(35900U);
    msg.setDestinationEntity(180U);
    msg.fps = 78U;
    msg.quality = 89U;
    msg.reps = 152U;
    msg.tsize = 28U;

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
    msg.setTimeStamp(0.66159511712);
    msg.setSource(25747U);
    msg.setSourceEntity(150U);
    msg.setDestination(3652U);
    msg.setDestinationEntity(70U);
    msg.fps = 118U;
    msg.quality = 195U;
    msg.reps = 229U;
    msg.tsize = 209U;

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
    msg.setTimeStamp(0.774372658616);
    msg.setSource(38157U);
    msg.setSourceEntity(211U);
    msg.setDestination(6916U);
    msg.setDestinationEntity(211U);
    msg.fps = 1U;
    msg.quality = 138U;
    msg.reps = 188U;
    msg.tsize = 54U;

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
    msg.setTimeStamp(0.338473252671);
    msg.setSource(56136U);
    msg.setSourceEntity(51U);
    msg.setDestination(26854U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.806861599152;
    msg.lon = 0.182067785492;
    msg.depth = 24U;
    msg.speed = 0.239924446673;
    msg.psi = 0.508178343267;

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
    msg.setTimeStamp(0.724429431438);
    msg.setSource(61946U);
    msg.setSourceEntity(2U);
    msg.setDestination(51713U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.251163306725;
    msg.lon = 0.523161555681;
    msg.depth = 21U;
    msg.speed = 0.587925350906;
    msg.psi = 0.761639217679;

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
    msg.setTimeStamp(0.248404573159);
    msg.setSource(768U);
    msg.setSourceEntity(102U);
    msg.setDestination(18051U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.142811448128;
    msg.lon = 0.415559411187;
    msg.depth = 107U;
    msg.speed = 0.200061677556;
    msg.psi = 0.415720663566;

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
    msg.setTimeStamp(0.326381188755);
    msg.setSource(17030U);
    msg.setSourceEntity(142U);
    msg.setDestination(16424U);
    msg.setDestinationEntity(186U);
    msg.label.assign("GHHHBZGVWFGFUVSCYKBLFUXEUTAYGGDMESARRYGCOCBYZIEAXCIDOGWMCBLDKBQBLSYUZZOIXXJPFJBWDOKPIQTNPWATCTNN");
    msg.lat = 0.262085418616;
    msg.lon = 0.255827346152;
    msg.z = 0.879172514802;
    msg.z_units = 254U;
    msg.cog = 0.043481375145;
    msg.sog = 0.471444470304;

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
    msg.setTimeStamp(0.605139452933);
    msg.setSource(36543U);
    msg.setSourceEntity(133U);
    msg.setDestination(23088U);
    msg.setDestinationEntity(168U);
    msg.label.assign("AVOKHCIOHNBUFDWVXKDYLHUFCCAPKEYWMWNGPQNJFCNQZJHXBAVEDMWPOJLLRACPTLARQBYSKJLYGPGXKECTRPQODBHWVDEVSLAZCQTJSYNFKRSAGUYQRUKYVJGGSTAZZCGDQIJTXHOXNCTWFWDQKEBURDIOIFLTVIEUMLEZROHTRMCPZONVPFRNBTAWPIRJIESGMEHMIGISQBWHNFQONVEDDUBXUUIPLYYYWXXFJKSZMSHMFKXGVZLU");
    msg.lat = 0.683111093854;
    msg.lon = 0.264263314913;
    msg.z = 0.556906775729;
    msg.z_units = 49U;
    msg.cog = 0.54357992501;
    msg.sog = 0.449338089936;

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
    msg.setTimeStamp(0.335232287515);
    msg.setSource(25716U);
    msg.setSourceEntity(192U);
    msg.setDestination(23539U);
    msg.setDestinationEntity(77U);
    msg.label.assign("VAIGSNUPMWZQJUTYQULKLJGIBEXTZHPSPNTZMMAPXGRECKPSMWQZQHOJCJOBAERDILGLVBFZFOXJUEGOWHTYVKNKQCWQIPJRATBVRJUVGPDMQNLCWKRIIIFNAGXHGSESWDIUSBZHMSATJCFDQXTWMWRJREFEVLDZQL");
    msg.lat = 0.800700209428;
    msg.lon = 0.671255144728;
    msg.z = 0.642317186885;
    msg.z_units = 47U;
    msg.cog = 0.839665777132;
    msg.sog = 0.391674097217;

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
    msg.setTimeStamp(0.321049938837);
    msg.setSource(45443U);
    msg.setSourceEntity(14U);
    msg.setDestination(5145U);
    msg.setDestinationEntity(222U);
    msg.name.assign("EWQEYWSNUQ");
    msg.value.assign("KWJXUZJFWKRYCEJTFRRUUURTNERDYZDNISGTYNOWGWWAXNVQZZVQEPMIBTRLSLMQDGXNFIIBKXHJYIOPSNBWRUDDHQKKQBNYLAHLPSTQKKSEIMKSO");

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
    msg.setTimeStamp(0.173401014759);
    msg.setSource(7895U);
    msg.setSourceEntity(83U);
    msg.setDestination(43960U);
    msg.setDestinationEntity(35U);
    msg.name.assign("UNBLWFNYXAVVSKFIXJQDMUUULUROSBTTHVKADVJOGDCXLYJGBBGQMKILBYQYRSYYDEOPNXIHCMZGSPVIVKHPDUREZBNKJITCFSTKFGDUZZNMJAFYCSWCIVUINQGWERELFNHZWXRMHFLYUZMPCLMMHFVPKXCEGXPEDJPMJBHZQGOIOKOXDOKEXRBGRRWOWQSQSLPJTPWHSM");
    msg.value.assign("OMAMFPIXXIDZKNTDZORRQSTENDIDCFPZGKSWPFTTWOMULPIAGWJTLMSXXHSLRAJCKDYQGFUZKFYXDWJBVLLERYTKLYBNWOOFMNQFBNZKBSXUCBDZVUHCHNPZGLMTJJNOQHXCEYQVQCRYIENJSUDEGEOAAUTAKHPWDBAQVGYPXQGGCAFEVYPJSMVQOIHAIMIJ");

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
    msg.setTimeStamp(0.0726380724355);
    msg.setSource(28358U);
    msg.setSourceEntity(251U);
    msg.setDestination(30123U);
    msg.setDestinationEntity(217U);
    msg.name.assign("OIJAYOMOLKFEZBJBOSRNQVWSRKNPCAFDCVZLB");
    msg.value.assign("OPJDZRZRHEZSLDUGPEHHWWJMWGNJCBBEDOMCOALZMKSSTKIZXJJHONYGSGZLPEVMYGFAXUBXLTSRWPSTVAEIMFSMSXJCMERRWENVJGNJABIGFRGQULZKPBNULFVQRDDBTVMNRCUGCQYDFRZYOYAFTYKXKPWFYDAIKEZPIWXJWLOIHXUTLTSXMPGCHBPUHIV");

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
    msg.setTimeStamp(0.672389716721);
    msg.setSource(40544U);
    msg.setSourceEntity(156U);
    msg.setDestination(38094U);
    msg.setDestinationEntity(98U);
    msg.name.assign("MQMXWCRSFMRBZJRFUFJUTYGPJNXJEMKSQOSCZZVAVDAHTYECJENLVTDONOAMTEBOHHXEEMBGJKKVYFTFLCIEKUZOQGDMBHPZZFUQXXQVDRXCKNZYTCJWYBXYISSLKRQLAWILABWWLNMPZGNWIXFOYRDHLIDHPBRYADBKHTGSPHTPWSBWLKPIACWPQFGCETQFLRSTJVGOOMFPNIURMSVGLAIARUKJDYCOOQEUUZD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SRQZLVFXEIGHUIVKKUCPPKBTCYIVEBZYKTOWSNMKCTWMIAJHHVDENJOTNEAQAUCDUAZQQEKFLMLOJXDCPZPWMMLSREYNCXRGZZPZBYTFFRNPC");
    tmp_msg_0.value.assign("OWDKJOKVBOYQFBWJYVEUKOEIGQEWOGWZHMVUXHCHNYTQADUAGOZSBHLTBCLUSNPHWCBPRTEIRCYZWZUYPKPGYPKINDTQGLUUPTCKRWLBRMLXRQNKZJJFQBGZIPSGNQCNNVHHXEAUZFKLYXSZRALMHFAYIKDEFTAISWIBDGBRFPJDANYMMJXYCMZDUAWLORQJXDNQIXCMLJKAWLRVFRDZCFVIOJTHTSSXNJEFTEOFMEOSBXXC");
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
    msg.setTimeStamp(0.393443790069);
    msg.setSource(31333U);
    msg.setSourceEntity(140U);
    msg.setDestination(48075U);
    msg.setDestinationEntity(220U);
    msg.name.assign("NRERHWWKPQJJFGUBEARMLCAGRXVIVMEPTFIZOXEYDTLUJCPKEGTXPCIDKCWJBGWYKFJOCZSYMQOHQMZUITLRNZYLNQIJOUGFIZRRENABJABMSCVQZQAOCEHOVDWXBWSIALAVHSJNVTLDUDOXDPGHZMNOHHUSKXGPTFITPKSQUYRXYNAQZUOEBKXZDBJXVLWYZBJCLYQMBNQTGMRDEHNVKFWLYPVCTXWFO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FCNSYNVEYZOFNOBSLOCFZGWXPYSREGQOGUSMWKRPSXHJCCMJZNMVGLEHPWDWRCYCHHAGTMGCHQAAUNRDFRJKSNSUPGXBUWETLKIJFEOQGUPWMQETLYADZRBXTHYVVBFMLHNJFQXCNZIDDLKDKHLVGXDOBTPKJZCVRMWZVYIBZBMVJM");
    tmp_msg_0.value.assign("RSJSMZHAFPNDQJAMZZBCGOPAHAFIBXBJATHRNOWGSKWLQYCIZVVPLVRTDARUEMEPPONAODMWQTDUKOCYENPGFJTDYHZNVGTFQCFUCYKHGJNQBFLBOJVKXVRIFIHMPPHCVMTTJKIKJEWYEDNZWWAUZNMVIBMLXSJLDZOXZKQKJQYSEMSXXEMAORLVQPFIXFQBLEFWREGAH");
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
    msg.setTimeStamp(0.402137484965);
    msg.setSource(321U);
    msg.setSourceEntity(210U);
    msg.setDestination(35890U);
    msg.setDestinationEntity(119U);
    msg.name.assign("ZNMPLQJYBPDIJMCDID");

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
    msg.setTimeStamp(0.92874138437);
    msg.setSource(45184U);
    msg.setSourceEntity(18U);
    msg.setDestination(63693U);
    msg.setDestinationEntity(1U);
    msg.name.assign("OIWPWLTUVHDFPDLFVSYBQBNNQNXGJHLCRQIQFCLPGMBKQKOJKFZCVKNBGQXCXTMMPAVMNJKDPFTVYGIHXFMSUFSJSELKLUMLXOEUUMUFOLDCBERQAAZMEGZPKECBEZYKZEDWWYYAHZMLUOJBVPXVLQPYSNTTOCYZYJQHRVRXCBTRIZHSMWDCOJUODWWEDNIEPXUIAIRNBOSNHHJKNRJJHR");
    msg.visibility.assign("UZXVPYNLYPXNLWINYZ");
    msg.scope.assign("IGRRCIUSAQMFSBFNDWNABZKMHYZXLVWBCQEZZECRIXLBMRWMBXGVKYVFIHQIWGDAKCDJQNMESOHTEPOZTFBWJGAIJZLYAZXXRUDBXBYDFODTXWRTVUHWVFSGNUPQEFNYOLCYPTVLYPRRHQHGIUMNSUPICASLRSDCCZKBMOEAHUKTUQBZTJTRZUKFCIUQKVHMSGTHVJDEOFWDLLKOKNWJACPMOXMNJNJNVJGQKHPEPPY");

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
    msg.setTimeStamp(0.41716500892);
    msg.setSource(31187U);
    msg.setSourceEntity(180U);
    msg.setDestination(63020U);
    msg.setDestinationEntity(169U);
    msg.name.assign("MBRPAKAUGCILLFMLKQBNUHPZGVUEXVGWDMJSXSYLYBBICUPRATEEBZUVAYYO");
    msg.visibility.assign("GZJVEJLTMLKRDBKYPTVOTCPNNLZDDCGGRGUIVXIKINILGVNXSZAOGSBVMDGBUCPHTOLPQRYHSWWZSRAAQWPBENMPSJRBSFYAMYTQZZZAJEXDFFLHMCOMMLSUHRFNZPGBLNEUQAIJNYYKDXNZCTONFAKPUEYCDHAMXLQGXVW");
    msg.scope.assign("KLABDLDEDHSMKZPUXXMJMFHJOXPFGHIUGSTIFTYNKCYPJAOPDFLRFEQUFWEYEJMMVHAEHXGHXKWMYVVCOUCHWRGMPZQXKWQNDUDKQRDAEYGPRSELJRKTDOKBMBIIVGVOQZYNZVERXSTDBTSFRHVXXTZASRUMAUNMOJTQGQWJBFZWNWNASACPJLYXZCSWFIIQTLJ");

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
    msg.setTimeStamp(0.497948382567);
    msg.setSource(59400U);
    msg.setSourceEntity(139U);
    msg.setDestination(57250U);
    msg.setDestinationEntity(197U);
    msg.name.assign("IVHZSINOMXDJIHPJJJIVSFRHCTAZQIAPJBRYSKOWEBPTJOAQCUCTKJEKTLGDXVQSTYURUAEEBXSZWEWFIKEFNXFOVRACWMQJCUHXOCOFCZTPIHUNJJLPTXQZQWOCMDNNHYKRUPXPZDAQGDKHIWAUGXSTLMIVDBC");
    msg.visibility.assign("MGMXUTSFFOURGZNSEGBAAVDQCPGZCYLEXWTPWWDEAFGNMDOJUDINGJUXRIMFPTNPBKTOC");
    msg.scope.assign("HTDIXRZPCISJXKWGZSFYOWGYGIMAVNYUZZHMUVNDVHCCDLAULWIVYAZRPLYGOGKOLJLDIUINDATIFSZEMAJGVNSQZMATXWOAPFCXFMAGUKQCDORLHTBSCJRWDXNKZJJWRRHS");

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
    msg.setTimeStamp(0.743122925254);
    msg.setSource(21146U);
    msg.setSourceEntity(114U);
    msg.setDestination(8090U);
    msg.setDestinationEntity(171U);
    msg.name.assign("NXZRJQFGQJVCADBDVJIILGDBWSGASBXSHBDFRKIGMHNBUTLNLRQQTVUPHVIMOESDXLAGUWVTNZPOVCNFHIHTSBTHLUXCAOFYNDADWCIZKFQTZCMKZEMURBJCTYGJKPOIMEHEQQJXBODUDZJJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GJDFKVOJHUOCZBQSSCXUUTQZTNWMPSTQUWIFGLRRVSXOYKOVLDUHSKMOMQRTIVYRRDCLMLWODDTUIFAWPXFZEGHGKTQLGNNPMRWTAADLEXCRCNGFLQXEYBEULJKLAGVKJIHRPNCAZWKWJWYANSPRSTBCMLVBPMQGXJINQVKXXNHFBUCMTYFJHCBVONYEEHMNIAYOSTHXWZOUZSAEVQZDZPBVIXJIHGFYGFQKZE");
    tmp_msg_0.value.assign("DPSXQLHOAJJKTNSPCALPLITIBPUMWRNGDHTODNZPZOFKYYLELWOYZDRMKUGMUQJUZLPHTXJYFQNMOFEZTQRZMTJVAGCIWSOVVXYCYQCCCFBEFERDVFRWBBNKIUKDSLUQAFIFWBQPMBHNTSGIDKAMJPVKKSJAZRYCIPXGVRKHWYEBEYI");
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
    msg.setTimeStamp(0.162821612996);
    msg.setSource(23433U);
    msg.setSourceEntity(80U);
    msg.setDestination(28884U);
    msg.setDestinationEntity(0U);
    msg.name.assign("JGSONAJDKTVSWHQQDGQGNXAGTERMXRXUKQUHBOJCQSDCFOM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FXZHYMUSMRWLQZHPSYERDHLXAYVZDWWKXJELZOLBAUSBJUCDPJXUDKEPIWTQOTMVOTYKQZUICCVNNEQFCJLWR");
    tmp_msg_0.value.assign("HUKXNKPYQSWVDSRUTBAFQYRDIXOCRAXLXCOOOIHBJVQXHCQPMXHJJVDUCGVRWYWPRHALOTZEEPAYXEFVQFIP");
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
    msg.setTimeStamp(0.549871775876);
    msg.setSource(11468U);
    msg.setSourceEntity(58U);
    msg.setDestination(3871U);
    msg.setDestinationEntity(37U);
    msg.name.assign("VAVJAAUDDIUAVTAQHGIVHPRFHNBGQWKDHMRSRMCWPLJKFAHXQYYPCLFLBBAYMDDUSOQGKOVFHJDWHRKBMRBDTBRFSSTCIIIWMBFSRTZOXLNSUOOZOJJRKBJPZLCDUUINAXQXPKJSMZUTYJRGLREPBVAVOOPWQXQLMMETGMDCUTKDIKQVHIGHGAZEYTXVMWGLSEPEFEZQILVWOCCWQFGUEXNJNYEYXCZBZYENUSZPGFOHIN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WHXSGXMOYIEJBDKESLXQYVZVTKSBGNSXDAJNJOPAPGHOZDJSAGNZWGRVQUTZNSKCTCLTTTGAAJXRSONBVQMWTRFUYHOMBCWHKYMHXFHECMKOESZKUDIFXEBQILFOBFAVQYQKNGT");
    tmp_msg_0.value.assign("UFBEUFLJXIQEZQXLEFCUZORHDITHSDALVEARRIEJPRWMSRTJJGOCXXKVTXQGNCRIJAPDXIZQPUZCYRNHTTQONSCFEXECLEPBVGJDHYNLEXWYVBWLWMSWHDLPQHHGTKAJA");
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
    msg.setTimeStamp(0.229076482911);
    msg.setSource(64553U);
    msg.setSourceEntity(78U);
    msg.setDestination(64955U);
    msg.setDestinationEntity(201U);
    msg.name.assign("AXVJILMHBTAGXZLDDSBSMSNEMPFIFXAXQJCMVRPIQHSIXKMXOZSZRGECMMUOKTHZOAKPMJCRUVMVLAUCGGGWICCZFYBWQIBLVWYUZAIDNNKWEERDFGKBNOYFQDQWZUGAYVFIKHNQHXPFWHWVYVUJKETCEVLXRNFUDTISLPTHBUBYJRXS");

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
    msg.setTimeStamp(0.00352923093875);
    msg.setSource(45094U);
    msg.setSourceEntity(159U);
    msg.setDestination(46921U);
    msg.setDestinationEntity(0U);
    msg.name.assign("EWXRBTKIVCFOIYARZVSOUQYKUVFUBNXFJLMGOODXMHRGBQPLYFUMFRUAUCHPQEBOKNRJNPGU");

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
    msg.setTimeStamp(0.925823277462);
    msg.setSource(20981U);
    msg.setSourceEntity(2U);
    msg.setDestination(58339U);
    msg.setDestinationEntity(95U);
    msg.name.assign("YPRAKPFSBRVYUQTWSCKFLSMJZYIKPFYGJOHFRVDFUBTEFAOYXWKNGRIGHTVXBKPLSCVPILWAQNIDOAXEINCGTNMNVMBWKZZRNKLBSXAQFLRJHXUJBXOQIDDUXGJSNWLGGQKHZVMWACYCACHHERWDRWZ");

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
    msg.setTimeStamp(0.412940338528);
    msg.setSource(63026U);
    msg.setSourceEntity(37U);
    msg.setDestination(40121U);
    msg.setDestinationEntity(186U);
    msg.timeout = 1623725789U;

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
    msg.setTimeStamp(0.894557693512);
    msg.setSource(49078U);
    msg.setSourceEntity(186U);
    msg.setDestination(22021U);
    msg.setDestinationEntity(103U);
    msg.timeout = 2547890545U;

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
    msg.setTimeStamp(0.182612353377);
    msg.setSource(12236U);
    msg.setSourceEntity(93U);
    msg.setDestination(54852U);
    msg.setDestinationEntity(53U);
    msg.timeout = 3427534556U;

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
    msg.setTimeStamp(0.415904062475);
    msg.setSource(46311U);
    msg.setSourceEntity(76U);
    msg.setDestination(5013U);
    msg.setDestinationEntity(169U);
    msg.sessid = 1193071327U;

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
    msg.setTimeStamp(0.833037527186);
    msg.setSource(36334U);
    msg.setSourceEntity(231U);
    msg.setDestination(949U);
    msg.setDestinationEntity(43U);
    msg.sessid = 1844327970U;

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
    msg.setTimeStamp(0.185608754636);
    msg.setSource(57511U);
    msg.setSourceEntity(148U);
    msg.setDestination(10195U);
    msg.setDestinationEntity(106U);
    msg.sessid = 1268340872U;

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
    msg.setTimeStamp(0.837594184367);
    msg.setSource(61147U);
    msg.setSourceEntity(9U);
    msg.setDestination(27426U);
    msg.setDestinationEntity(38U);
    msg.sessid = 1410708505U;
    msg.messages.assign("BFANNSZHIDUKULIZZQIAYBBYPTYLMUNWBSBGLFGXAKZIYWJJODAMEDOUJVNMDFMAJEHEOUCKTNCGRQZTGXRBCDELKEJTSATPNOAYLXQYCOAPMTYMHWUFVKOVBGCRYCEFXWULQJPSEFWVKOVJISCNRXFVMJUCQZQGHNBWRJVCKXFTWDHHBYMESELFQLOMZQXTPXSPONIRXVMPZZ");

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
    msg.setTimeStamp(0.256025998673);
    msg.setSource(47341U);
    msg.setSourceEntity(237U);
    msg.setDestination(55525U);
    msg.setDestinationEntity(16U);
    msg.sessid = 1898616555U;
    msg.messages.assign("UIXHFOBUNXBMTUOKNPHYKSTVQJYDPEWTZEVAUZIRGBYGTPSCDRAJKCMEFQDHXVXGSYLEBZYZWAMKZFJAFVIWSYWZMYXVCYAKKBZDCQNHRFJHTBOWWNDREFVVDQAOOMMBIUKDSS");

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
    msg.setTimeStamp(0.90784866951);
    msg.setSource(23311U);
    msg.setSourceEntity(188U);
    msg.setDestination(5263U);
    msg.setDestinationEntity(162U);
    msg.sessid = 3418967313U;
    msg.messages.assign("RIHRPLWEAUCHDUYTOYTPARJVRFUMMUZWKNTFDTDFUOSSZBZPXCTFQLXCGWAHDKLHURMQYDTESQEDFUGWCBOUHBOWMOZCNRETOYKGMISXQYNVIVVMEONKIYL");

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
    msg.setTimeStamp(0.0291680943728);
    msg.setSource(1711U);
    msg.setSourceEntity(222U);
    msg.setDestination(8393U);
    msg.setDestinationEntity(25U);
    msg.sessid = 323953218U;

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
    msg.setTimeStamp(0.352197279127);
    msg.setSource(27850U);
    msg.setSourceEntity(159U);
    msg.setDestination(19586U);
    msg.setDestinationEntity(78U);
    msg.sessid = 2581858483U;

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
    msg.setTimeStamp(0.722715036678);
    msg.setSource(57698U);
    msg.setSourceEntity(90U);
    msg.setDestination(32508U);
    msg.setDestinationEntity(119U);
    msg.sessid = 4048942142U;

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
    msg.setTimeStamp(0.539572018445);
    msg.setSource(54921U);
    msg.setSourceEntity(51U);
    msg.setDestination(12615U);
    msg.setDestinationEntity(56U);
    msg.sessid = 924725505U;
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
    msg.setTimeStamp(0.0808365266309);
    msg.setSource(41064U);
    msg.setSourceEntity(251U);
    msg.setDestination(61221U);
    msg.setDestinationEntity(115U);
    msg.sessid = 1822970040U;
    msg.status = 160U;

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
    msg.setTimeStamp(0.0409697702878);
    msg.setSource(8437U);
    msg.setSourceEntity(133U);
    msg.setDestination(38022U);
    msg.setDestinationEntity(203U);
    msg.sessid = 1607952386U;
    msg.status = 136U;

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
    msg.setTimeStamp(0.0631081294462);
    msg.setSource(1361U);
    msg.setSourceEntity(145U);
    msg.setDestination(10041U);
    msg.setDestinationEntity(33U);
    msg.name.assign("KFTLSEIJXCOBNANOPNNQXXVOEQJZFEGMICZTSQESVLRALPPBFVUPNZHUNQAYAPEXTWRTCQFJYAUHYYZWXMPGSJSXCQHRUGDGKQLMRJADWWXNYTQ");

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
    msg.setTimeStamp(0.841005422874);
    msg.setSource(12814U);
    msg.setSourceEntity(130U);
    msg.setDestination(11887U);
    msg.setDestinationEntity(19U);
    msg.name.assign("BZRSELWFRBLXFWQFPWPFJMHNRYVHKALFDAUPNCVPYZYHQDNHDBCGGIAOXCACBSEATTEBDMKPSRYYD");

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
    msg.setTimeStamp(0.757733207942);
    msg.setSource(4311U);
    msg.setSourceEntity(79U);
    msg.setDestination(31891U);
    msg.setDestinationEntity(142U);
    msg.name.assign("PNXUADRPMLCEVLGBQUXNOECRRSSKJMLCMKXISEVBXVPIEZIWKGKCHEEGORRQQVIBYHFDRNKIJBPWYMZHHATNBJRXFXOTIIIEJRACGXHSLGILUQBUTZVSWPOHGVPAZVBUMFLVTQZOKAPCEYSFNMNPHQTEWLAOZETHDMOKPBSDOZDJWMRLUKWWFWHVFZYRQYNTTXATAFNYJUXBJAUUCPSGFDMBGFCFSWDYNYYJUIMQOYKCSZGQCDKLQGJDXNW");

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
    msg.setTimeStamp(0.646970477982);
    msg.setSource(18650U);
    msg.setSourceEntity(201U);
    msg.setDestination(14494U);
    msg.setDestinationEntity(63U);
    msg.name.assign("BJWLLITEZUBCKUDLNZPHRRYYHIGYFGYCZSQVOMIOAEMNJFBGGQRXMBICEVUPVVOLCHSZTHDRKUYHDBATQITLVZTHFWFGRBBQDASPALNSONVKJGJALENKBFWAUYFTPXTHXYDEWOCCPTQKYDPYFYWQTJNTDQOWDNZSHSDMIKKNGNORRJMMBIGKECEIEGXZMWVAZPJFCJXIUOEZQHKSBQUOVWGVMEXX");

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
    msg.setTimeStamp(0.324383909462);
    msg.setSource(53784U);
    msg.setSourceEntity(176U);
    msg.setDestination(33101U);
    msg.setDestinationEntity(216U);
    msg.name.assign("UMAXFLGYJWPUADXMJCPHDKJRVEFJQJWHZTZBIIAFRVLYKXEZHHWMSMRWRIQKPVVLUAUORCYACTHYPYURKNNOOBYQKSFKLSRPNTBFXQDMORQEJPTDLGYCVFNNONPRHIKZDIXGBVMLXNSSIBNBFBHMGWZVEVMACBKRIGWWCE");

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
    msg.setTimeStamp(0.655811238396);
    msg.setSource(2782U);
    msg.setSourceEntity(80U);
    msg.setDestination(40019U);
    msg.setDestinationEntity(134U);
    msg.name.assign("VFJHOKAYTGWLSVEOOFAJYBFCMKUNFSGUTATXRKBUKGKYDVXSHZSZAAMDCRHAHRCGKFHPBYXOVBGJFEBSBIZLVPTZLDJIVRLENNOTOIITWADQQQSLHMKCYDRWZPYVOYNVPBNQUSZPPURMNDDUUOQFMUHGUWUDERCXDNM");

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
    msg.setTimeStamp(0.342959064644);
    msg.setSource(43935U);
    msg.setSourceEntity(176U);
    msg.setDestination(23817U);
    msg.setDestinationEntity(180U);
    msg.type = 84U;
    msg.error.assign("KQTFGHEGPSWOQVCXZSACRECKQSCRUAHNDLECRULWXTHGVOZMDEVMZKFEOFIMPBUVTENJPEXZJSOKFAWUPXXTOLPYJQVHWAKCYHQKGUJTYPAPQCRLYGKFIPUZOTILBFYKQBCARIRVMINDVDJMNFULSNBTPNXWUYFDXZKDHSPYI");

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
    msg.setTimeStamp(0.615466387655);
    msg.setSource(61189U);
    msg.setSourceEntity(145U);
    msg.setDestination(37739U);
    msg.setDestinationEntity(114U);
    msg.type = 45U;
    msg.error.assign("QSACJIUPQMFJRVSXGVHLSBLFAVVFIBPBAZWQPXNDCNFOWHTRTJETLLTFTFXUMJWQJBNNGVUNUKOADZQMZCRYRKESEWWB");

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
    msg.setTimeStamp(0.64204980253);
    msg.setSource(55103U);
    msg.setSourceEntity(33U);
    msg.setDestination(56340U);
    msg.setDestinationEntity(225U);
    msg.type = 210U;
    msg.error.assign("KWAOPZKGMBMKBCMKGHEMNQZCJPQAIRDJJJYOXIVDAQGOC");

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
    msg.setTimeStamp(0.667581065039);
    msg.setSource(35284U);
    msg.setSourceEntity(211U);
    msg.setDestination(40U);
    msg.setDestinationEntity(132U);
    msg.seq = 42095U;
    msg.sys_dst.assign("YQZGOLIIXISBIWERHSUHNLCROJKLCKPSFAJMHHYPOGVIBWXNNIIUJ");
    msg.flags = 118U;
    const char tmp_msg_0[] = {38, 52, -113, -34, 95, 85, 85, -74, 89, -81, 60, -64, 77, -60, -127, 121, 98, 115, -127, 27, 58, 106, -71, -51, 66, -106, 113, 49, 22, 14, 32, 62, -56, -23, -111, -113, 71, -108, 12, 84, 92, 103, 7, 92, 25, 39, -51, -115, 90, -91, 32, -35, -84, -20, 31, 86, -32, 93, -62, -105, -69, -28, -63, 41, 82, 82, -3, 126, 9, -34, -38, -48, -122, 37, -96, 37, 50, -120, -89, 98, -112, 85, -68, -91, -78, -10, -22, -2, -40, -84, -112, 68, -110, -25, -16, -110, -31, 1, 2, 97, 58, -7, -74, 15, -78, -122, -36, -74, -126, 107, -114, 63, -116, -114, -101, -70, -37, -86, 21, 94, 42, 112, 91, 112, -56, -76, -49, 9, -107, -58, 90, 110, -55, 78, -90, 112, 38, -101, 62, -49, 110, 94, 49, 15, 67, 71, -16, -56, 92, 45, -27, -71, -102, -30, 31, -10, -67, -105, -67, 50, -122, 19, -91, -12, 7, -116, 123, -114, 41, 31, -17, -103, 75, 59, 124, -72, -22, -38, 118, -17, 117, -118, 47, 123, -7, 49, -84, -40, -14, -44, -95, -4, 45, 51, -9, -34, 88, -54, 3};
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
    msg.setTimeStamp(0.647679992179);
    msg.setSource(58753U);
    msg.setSourceEntity(249U);
    msg.setDestination(39201U);
    msg.setDestinationEntity(124U);
    msg.seq = 20547U;
    msg.sys_dst.assign("SOVCSJESYMCNFDNBSHTQROWBPZXESUPJPDGAZJXGHABCFITBLWTJHXAJFFACXKWQPBLROCMEXEZZHIRKOUSAYKHAUNQKVIBRCZYIYFCLUJAMMHWTPRBWXMGLUIWNLDZMQIZGKXBWWCKTRGRKWTIQHAEOYTZCGUEZDOUZQTAOPUDBYSBKMQVEYJLSLJRHDHRSOFVULVWOTYNTVENFKDXALEPJVNDGV");
    msg.flags = 55U;
    const char tmp_msg_0[] = {-56, -84, 4, 107, 58, -31, -90, 27, -115, 28, -53, 106, -122, 13, -105, -61, -5, 6, -109, 92, 81, 121, 125, -9, 66, 13, -28, 14, -119, -45, -24, -57, -127, 23, -111, -17, -13, 65, -25, -38, 2, 57, -95, -75, -57, -49, 32, 121, 71, -4, 27, 63, -79, 119, 6, 19, -73, -84, 86, -97, 34, -87, -32, -9, 111, -50, 10, 53, -34, -84, 64, 123, -63, 75, 104, -80, 21, -35, 12, -56, -57, 100, -48, 71, 31, 12, -102, 111, 66, -40, 6, -46, -36, 102, -24, 46, -86, 27, 112, -117, -59, 86, -100, 20, -12, -34, 105, 45, -5, 59, 18, -40, -62, -34, -42, 59, 117, 71, 65, -39, -13, -38, -56, 57, 98, 18, -92, -66, -127, 26, -119, 41, 35, 53, -89, -45, 94, 60, 93, -4, 22, -71, -78, 41, -59, -94, 93, -42, -115, -92, 25, 57, -5, -108, 89, -43, 95, -109, -3, 11, 93, 89, -108, 25, 100, -26, 16, 88, 67, -91, 11, 29, -60, 11, 17, 39, -128, -124, -82, -47, -45};
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
    msg.setTimeStamp(0.203897352614);
    msg.setSource(1860U);
    msg.setSourceEntity(129U);
    msg.setDestination(36192U);
    msg.setDestinationEntity(163U);
    msg.seq = 59781U;
    msg.sys_dst.assign("LJDXFMUSNOAEUBGGOITSUTCNJIQDYQLIBMJHOHGCGZWTVVTCFZGLMDGXPMVJNPEZCRBPAXZCTQJJUWRIENYQPPWCYYQTUZTICOVAFWCYDUOSTIQRXHJFQUABZFUXWJRKMEDPLKSPOHSKNBXKMXBNXMYETELDKNLOEWLWFGJAFNREHKKFHEVFSXBZTEGHAPIKLALRIGPSDQNAWZFIJ");
    msg.flags = 203U;
    const char tmp_msg_0[] = {91, 1, 105, -22, 20, 38, -70, -25, 8, -100, 32, -83, 125, -76, 6, -40, -12, 35, -84, 18, -1, -104, 5, -99, 32, 27, -23, -126, 28, -51, 0, 64, 14, -4, 36, 35, 67, -87, -61, 97, 35, -69, 6, 61, 13, -87, 123, -77, -25, 10, 74, -125, 15, 119, -2, -6, 69, 78, -95, 80, 49, -97, -39, 46, -112, -74, -47, -15, 10, -19, -56, -119, -23, -88, -85, -111, -71, 21, -14};
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
    msg.setTimeStamp(0.934918373103);
    msg.setSource(283U);
    msg.setSourceEntity(161U);
    msg.setDestination(34296U);
    msg.setDestinationEntity(174U);
    msg.sys_src.assign("FALRYJAOKEXPNQZBIIYXGLEPRFOPCRNPCLIUWWUNOFCZUTDKIZAOBYGMURS");
    msg.sys_dst.assign("LLXWVPAMWIMZSTRCZHEQOJQKYMZFNAMSUQDRRPSUZXCFTVJIJACDDXMBHYYOGOQXFOXHAWDTPVYNEYHVEKVWSOIV");
    msg.flags = 151U;
    const char tmp_msg_0[] = {85, -92, -29, -5, 60, -82, 116, 91, -29, -44, 5, -58, -79, 70, -47, -81, -33, 122, -87, 105, 122, 94, -42, 44, -65, 54, -46, 33, -42, -112, 98, -75};
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
    msg.setTimeStamp(0.593788728693);
    msg.setSource(12319U);
    msg.setSourceEntity(29U);
    msg.setDestination(43348U);
    msg.setDestinationEntity(32U);
    msg.sys_src.assign("FAQRQZVCTMLIWRDZGTTJUOJAMBGTXDMSIYMRPDCYGIYMVPBDUPWXAWOTSDGJEEEPUBHQDISVPTNGFZMI");
    msg.sys_dst.assign("RPCNYCNXXQQSLUIUHMKQWDYHJOLNHLLCJKDEWFXVPKEBKDHOITBRJD");
    msg.flags = 69U;
    const char tmp_msg_0[] = {46, 37, -51, 50, 69, 47, -76, 26, -8, -124, 93, -112, -42, 102, -55, 126, 5, 104, 86, -87, -114, -87, -60, -56, -104, -45, 126, -123, 67, 16, -126, -94, -1, 94, 111, 57, -104, 103, -7, -76, 34, 22, -30, -93, -18, 8, -56, 72, -73, 69, 4, -56, -26, -52, 93, 57, -14, 91, 8, -32, 90, -3, 88, 99, -45, 33, 76, -127, -52, 1, 6, -34, -24, 114, -6, 124, 13, -16, 104, -96, 28, 32, 67, -5, 8, 16, -116, 101, 85, 72, -67, -82, -99, -94, -128, -111, 32, 53, 20, -13, 97, 62, -32, 62, -53, -37, -20, 67, 91, 8, 19, 32, -98, -108, 112, 99, -54, -85, 106, -9, -44, -53, 16, 4, -1, 60, -52, -96, -100, -107, 3, 90, -84, -82, 49, -11, -33, -57, 25, 46, -21, 43, -86, 7, -52, 111, 82, -95, -9, -62, 67, -92, 44, 112, -32, 100, 82, -119, 113, -51, -33, 22, -62, -3, 35, -123, -114, -82, 64, 73, 79, 54, -72, -81, 75, -25, 39, -118, -65, 9, -57, -111, 46, -20, 120, 6, -127, 15, 13, 92, -55, 21, -30, 43, 65, 106, -82, -42, 12, 15, 86, 59, -45, 25, 34, 24, 78, 65, 90, -3, 102, -49, 31, -40, 71, -107, 10, -120, 9, -117, 42, 115, -30, -18, -21, 74, 59, 120, 17, -33, -117, -38, 3, 101, 59, 7, -113, -30, -51, 120, -102, 125, -126, 70, -53, -6, 86, -106, -117, 24, 107, 76};
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
    msg.setTimeStamp(0.374491908981);
    msg.setSource(54724U);
    msg.setSourceEntity(179U);
    msg.setDestination(13659U);
    msg.setDestinationEntity(30U);
    msg.sys_src.assign("MWLUCSEDYSKDZZUUOSIPOUOXMCQRLFWQOOCCFNRKXWLJIAEVESZIFPGQGVVYTNY");
    msg.sys_dst.assign("HEYYFGYFVCTDEUHTXRWQBOFKBMLQWNBRZNOYDPPRBWNCZFCTBIITQTLZDSDPKEQINOBVAGFCDWOCAIKBWRHOLUJKLQVXRJIFDASSBTKHIEYSMEORGFSKYZUMSXPI");
    msg.flags = 116U;
    const char tmp_msg_0[] = {70, -23, -7, -27, -29, -71, 9, 76, -109, -39, -32, 60, 78, -41, 13, -40, 61, 122, -19, 113, 80, -78, -70, 58, -126, -39, 48, 55, -70, 49, 83, 49, -2, -86, -100, 58, 18, -43, -54, -48, -88, 4, 41, -57, -96, 59, -38, -3, -11, 55, -96, -70, 32, 125, -91, 1, 35, 45, -44, -125, 35};
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
    msg.setTimeStamp(0.708747305167);
    msg.setSource(56686U);
    msg.setSourceEntity(234U);
    msg.setDestination(9056U);
    msg.setDestinationEntity(62U);
    msg.seq = 11750U;
    msg.value = 240U;
    msg.error.assign("TRBWQCIXYMHNEIWGPZUYWDQXSLEQJDZMTUYVBDM");

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
    msg.setTimeStamp(0.391218502787);
    msg.setSource(62849U);
    msg.setSourceEntity(230U);
    msg.setDestination(7444U);
    msg.setDestinationEntity(179U);
    msg.seq = 23278U;
    msg.value = 85U;
    msg.error.assign("RDZOTQZQZXPWUJGYAULAXADYIEYHFKWNTLDNZASLKRJTPNCHBUUOKBJIWYSNOBGWOUTXWKVSVRWSUVCUZEDSMEGGWINZPFKVOQQOVLJTQXHV");

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
    msg.setTimeStamp(0.478496280526);
    msg.setSource(45776U);
    msg.setSourceEntity(90U);
    msg.setDestination(47782U);
    msg.setDestinationEntity(197U);
    msg.seq = 48044U;
    msg.value = 115U;
    msg.error.assign("JJAIZPOZQTZDCXDBRJOJLKBDCGKDOSXGFLPNVVUFFSBUWGLOTGBBRUSWGB");

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
    msg.setTimeStamp(0.0326081187353);
    msg.setSource(14907U);
    msg.setSourceEntity(184U);
    msg.setDestination(28624U);
    msg.setDestinationEntity(10U);
    msg.seq = 29667U;
    msg.sys.assign("NNZSXOEGRLZAKYKQUNOCEPBEHBSFVIXKJVCXIEAZQWKJYYXJRMVSNGWOOGAAQBKCTBECHDTCREHBBMUPXMPXMUNSYGUXHOHWNIAYQDNDDRPFJEFRSLHSKPTRGLJWGUIMLOCFMWOPYWZATVQRJCUENFAHYTJFVFLPPURVTZDZYWTCQBBNZNQEIA");
    msg.value = 0.694665783158;

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
    msg.setTimeStamp(0.428962289353);
    msg.setSource(41566U);
    msg.setSourceEntity(232U);
    msg.setDestination(16211U);
    msg.setDestinationEntity(71U);
    msg.seq = 19823U;
    msg.sys.assign("XCDNBTWKGNOPSAEMDNUDEGNPBLMVTJTHFTWKYCFBAPHDRBIQOIDMEVYILXJZGFH");
    msg.value = 0.855815213511;

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
    msg.setTimeStamp(0.410108472346);
    msg.setSource(14480U);
    msg.setSourceEntity(52U);
    msg.setDestination(6137U);
    msg.setDestinationEntity(232U);
    msg.seq = 29636U;
    msg.sys.assign("HBVUOEHKEUNGRBUTDWWGZJLANTPJJNECUKCLVOSEAUTKFGDVUVCARFCULZZNSPYCJ");
    msg.value = 0.828626336334;

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
    msg.setTimeStamp(0.0853571591213);
    msg.setSource(64631U);
    msg.setSourceEntity(36U);
    msg.setDestination(43572U);
    msg.setDestinationEntity(235U);
    msg.action = 32U;
    msg.longain = 0.202513308249;
    msg.latgain = 0.468994812949;
    msg.bondthick = 142277416U;
    msg.leadgain = 0.865951770787;
    msg.deconflgain = 0.429595183456;

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
    msg.setTimeStamp(0.433755254329);
    msg.setSource(32334U);
    msg.setSourceEntity(195U);
    msg.setDestination(56805U);
    msg.setDestinationEntity(24U);
    msg.action = 114U;
    msg.longain = 0.536083136242;
    msg.latgain = 0.217899177004;
    msg.bondthick = 583275541U;
    msg.leadgain = 0.168337622336;
    msg.deconflgain = 0.890115024616;

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
    msg.setTimeStamp(0.746867474164);
    msg.setSource(28098U);
    msg.setSourceEntity(168U);
    msg.setDestination(1433U);
    msg.setDestinationEntity(160U);
    msg.action = 162U;
    msg.longain = 0.79670640076;
    msg.latgain = 0.0183717793527;
    msg.bondthick = 754649630U;
    msg.leadgain = 0.17593534239;
    msg.deconflgain = 0.643024758461;

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
    msg.setTimeStamp(0.75400179707);
    msg.setSource(41056U);
    msg.setSourceEntity(176U);
    msg.setDestination(44556U);
    msg.setDestinationEntity(102U);
    msg.err_mean = 0.951707631389;
    msg.dist_min_abs = 0.534250173185;
    msg.dist_min_mean = 0.311481431409;

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
    msg.setTimeStamp(0.183407543968);
    msg.setSource(35282U);
    msg.setSourceEntity(230U);
    msg.setDestination(55015U);
    msg.setDestinationEntity(187U);
    msg.err_mean = 0.761487916197;
    msg.dist_min_abs = 0.1765715065;
    msg.dist_min_mean = 0.753649655748;

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
    msg.setTimeStamp(0.0205423278054);
    msg.setSource(35308U);
    msg.setSourceEntity(75U);
    msg.setDestination(62605U);
    msg.setDestinationEntity(212U);
    msg.err_mean = 0.583306236704;
    msg.dist_min_abs = 0.278965084935;
    msg.dist_min_mean = 0.954292715486;

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
    msg.setTimeStamp(0.647454414593);
    msg.setSource(44238U);
    msg.setSourceEntity(185U);
    msg.setDestination(28829U);
    msg.setDestinationEntity(214U);
    msg.action = 230U;
    msg.lon_gain = 0.500585191126;
    msg.lat_gain = 0.996800176009;
    msg.bond_thick = 0.881815171738;
    msg.lead_gain = 0.67691249203;
    msg.deconfl_gain = 0.0371557827181;
    msg.accel_switch_gain = 0.865943827977;
    msg.safe_dist = 0.988580999563;
    msg.deconflict_offset = 0.710758768183;
    msg.accel_safe_margin = 0.981876827851;
    msg.accel_lim_x = 0.141373089153;

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
    msg.setTimeStamp(0.429576954735);
    msg.setSource(62972U);
    msg.setSourceEntity(56U);
    msg.setDestination(48862U);
    msg.setDestinationEntity(181U);
    msg.action = 72U;
    msg.lon_gain = 0.393501925273;
    msg.lat_gain = 0.396571610111;
    msg.bond_thick = 0.632263728593;
    msg.lead_gain = 0.994217813529;
    msg.deconfl_gain = 0.168880088369;
    msg.accel_switch_gain = 0.0915869953742;
    msg.safe_dist = 0.194524845267;
    msg.deconflict_offset = 0.17919843556;
    msg.accel_safe_margin = 0.0982854227646;
    msg.accel_lim_x = 0.266415259261;

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
    msg.setTimeStamp(0.770847287132);
    msg.setSource(59365U);
    msg.setSourceEntity(204U);
    msg.setDestination(53551U);
    msg.setDestinationEntity(186U);
    msg.action = 162U;
    msg.lon_gain = 0.992996268882;
    msg.lat_gain = 0.546842588255;
    msg.bond_thick = 0.561339475758;
    msg.lead_gain = 0.275088201238;
    msg.deconfl_gain = 0.678113116406;
    msg.accel_switch_gain = 0.641235439894;
    msg.safe_dist = 0.305700872104;
    msg.deconflict_offset = 0.75955341397;
    msg.accel_safe_margin = 0.956088923099;
    msg.accel_lim_x = 0.117945027914;

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
    msg.setTimeStamp(0.889944342395);
    msg.setSource(32657U);
    msg.setSourceEntity(23U);
    msg.setDestination(17712U);
    msg.setDestinationEntity(230U);
    msg.type = 2U;
    msg.op = 208U;
    msg.err_mean = 0.509950505741;
    msg.dist_min_abs = 0.599223361239;
    msg.dist_min_mean = 0.240013897386;
    msg.roll_rate_mean = 0.895859387568;
    msg.time = 0.0632941092342;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 212U;
    tmp_msg_0.lon_gain = 0.90514666381;
    tmp_msg_0.lat_gain = 0.383804608839;
    tmp_msg_0.bond_thick = 0.683233537322;
    tmp_msg_0.lead_gain = 0.934280884477;
    tmp_msg_0.deconfl_gain = 0.761693318191;
    tmp_msg_0.accel_switch_gain = 0.114584135379;
    tmp_msg_0.safe_dist = 0.624397416639;
    tmp_msg_0.deconflict_offset = 0.127920795381;
    tmp_msg_0.accel_safe_margin = 0.857408905575;
    tmp_msg_0.accel_lim_x = 0.345624881682;
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
    msg.setTimeStamp(0.758773681353);
    msg.setSource(42919U);
    msg.setSourceEntity(144U);
    msg.setDestination(46919U);
    msg.setDestinationEntity(110U);
    msg.type = 88U;
    msg.op = 168U;
    msg.err_mean = 0.974236026577;
    msg.dist_min_abs = 0.595918185134;
    msg.dist_min_mean = 0.742640573343;
    msg.roll_rate_mean = 0.902569384849;
    msg.time = 0.670137805906;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 29U;
    tmp_msg_0.lon_gain = 0.285273835716;
    tmp_msg_0.lat_gain = 0.217180661559;
    tmp_msg_0.bond_thick = 0.602678988618;
    tmp_msg_0.lead_gain = 0.959170829443;
    tmp_msg_0.deconfl_gain = 0.657019383611;
    tmp_msg_0.accel_switch_gain = 0.745867602041;
    tmp_msg_0.safe_dist = 0.178386610624;
    tmp_msg_0.deconflict_offset = 0.643918900276;
    tmp_msg_0.accel_safe_margin = 0.237044667287;
    tmp_msg_0.accel_lim_x = 0.673245762262;
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
    msg.setTimeStamp(0.842374871373);
    msg.setSource(43307U);
    msg.setSourceEntity(142U);
    msg.setDestination(63581U);
    msg.setDestinationEntity(87U);
    msg.type = 233U;
    msg.op = 189U;
    msg.err_mean = 0.618020458529;
    msg.dist_min_abs = 0.0451454197717;
    msg.dist_min_mean = 0.742140355825;
    msg.roll_rate_mean = 0.446931561104;
    msg.time = 0.483732297601;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 41U;
    tmp_msg_0.lon_gain = 0.716275016656;
    tmp_msg_0.lat_gain = 0.923665944045;
    tmp_msg_0.bond_thick = 0.0752335097039;
    tmp_msg_0.lead_gain = 0.890732912628;
    tmp_msg_0.deconfl_gain = 0.755851318263;
    tmp_msg_0.accel_switch_gain = 0.249378651382;
    tmp_msg_0.safe_dist = 0.0315396039888;
    tmp_msg_0.deconflict_offset = 0.18596737169;
    tmp_msg_0.accel_safe_margin = 0.238309665555;
    tmp_msg_0.accel_lim_x = 0.038967760918;
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
    msg.setTimeStamp(0.92639659287);
    msg.setSource(46516U);
    msg.setSourceEntity(20U);
    msg.setDestination(55299U);
    msg.setDestinationEntity(122U);
    msg.uid = 235U;
    msg.frag_number = 110U;
    msg.num_frags = 16U;
    const char tmp_msg_0[] = {58, -80, 78, -2, 41, -59, -91, -51, -59, -70, -54, 23, -7, 26, 31, 6, -97, 8, -42, 98, -7, -44, 20, 104, -48, 84, 40, 18, -13, 115, 60, 111, 30, -71, -114, 24, -68, -39, -40, -68, 45, 116, 30, -126, 64, -121, -33, -48, 46, 87, 14, 10, 7, -63, -51, 68, 97, 112, -23, -48, 41, 73, -71, -85, -80, 32, 97, 75, 0, 109, 73, 90, -19, 87, 98, -8, -59, 83, 95, 92, 65, 78, 60, -97, 14, 97, -58, -23, -89, 99, -44, -9, -64, 79, -88, 82, 67, -83, 95, 93, 12, 99, 3, -124, 0};
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
    msg.setTimeStamp(0.979358809447);
    msg.setSource(40048U);
    msg.setSourceEntity(150U);
    msg.setDestination(57539U);
    msg.setDestinationEntity(138U);
    msg.uid = 37U;
    msg.frag_number = 220U;
    msg.num_frags = 7U;
    const char tmp_msg_0[] = {-100, -9, 0, 53, -89, -68, 110, 56, 109, 55, -110, -117, 46, 93, -13, -76, -94, -20, 126, 59, -114, 45, -105, -31, -82, -85, -52, -75, -122, 12, -94, -30, -31, -7, 13, -58, -63, -6, -14, 55, -105, -63, -16, 118, -59, -21, 71, -48, 104, 118, 37, -48, -58, -38, 65, -11, 76, -6, 70, -5, -120, -106, 48, -117, -73, 98, 14, 72, 76, -111, 92, -122, 88, 88, -67, 65, 14, -77, 11, 114, 7, -116, -82, 44, -91, 114, 122, 66, 20, -107, -16, 98, 80, -36, 16, -43, 46, 41, 24, -122, 115, 54, 79, -98, 116, -53, 88, 84, 75, -9, -39, 115, 119, -111, 39, -46, -4, 77, 43, 92, -73, -58, -97, 103, -43, -42, -107, -43, 25, 39, 105, -21, -33, -89, -46, 90, 61, 45, 7, -70, 106, -112, 97, -5, -114, -115, -61, -39, -57, 51, 91, -118, 24, -4, -34, 4, -79, 101, 2, -53, -21, -94, 102, 109, 93, 122, -116, -112, -122, -102, 73, -117, -96, -89, -2, -25, 116, 103, -34, 96, 87};
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
    msg.setTimeStamp(0.999129474947);
    msg.setSource(56402U);
    msg.setSourceEntity(184U);
    msg.setDestination(22006U);
    msg.setDestinationEntity(97U);
    msg.uid = 19U;
    msg.frag_number = 47U;
    msg.num_frags = 216U;
    const char tmp_msg_0[] = {-35, 54, 18, 120, -108, 105, 54, -37, 78, 71, 7, -65, 85, -58, -96, 53, -67, 85, -72, 51, 74, 75, -20, 124, -21, -91, 30, -56, 105, 113, 55, -92, -89, 106, 101, 44, -65, 39, -97, -61, -84, 41, 80, 97, -12, -70, 120, 87, -84, -38, -53, -71, -28, -20, -20, -89, -40, 10, -64, 50, -115, 112, 9, -117, -37, -24, 108, -47, 63, -98, 51, 20, 122, -92, 17, 96, 33, -10, -126, 42, -81, -96, -59, -71, -114, -23, 98, 0, -122, -119, 70, -123, 123, -73, 23, -42, -72, 41, 10, 91, 92, -43, -122, 94, 45, 88, -40, 124, 58, -70, -40, -70, 48, -36, -66, -23, 73, -32, 72, -106, -43, -110, 99, -108, -59, 89, -24, -41, -43, -54, 80, 64, -47, 122, 121, -94, 5, 60, 85, -93, 108, -61, -90, -106, -32, 53, 2, 42, -27, -7, 117, 56, 73, -55, 13, -31, -42, 78, -14, 115, 71, 16};
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
    msg.setTimeStamp(0.64623832306);
    msg.setSource(12382U);
    msg.setSourceEntity(90U);
    msg.setDestination(57361U);
    msg.setDestinationEntity(219U);
    msg.content_type.assign("VCGHPYXOFFSISFOTCBCVKRZDTNDJQZDOXLVINTYORZRRFXTGTIEXTWXAVSCAMCNDYVYPOCGTOXXQBEBESQKONRLLALHALBAWUGNPBQGDNZOUSSNQSJKSYZLRMEUFMXBPUNWHPLUQTYLAQLDIJGHCFTJFVEDUXOBKZABRJEKVJKMHQNNKADICAQAJUIPIBFGKHGJKHVI");
    const char tmp_msg_0[] = {48, 49, -98, 66, 55, -22, -122, 108, -47, 44, -88, -124, 17, -119, 123, 70, 93, 29, -121, -59, 87, -93, 106, 38, 69, -51, 40, -98, 25, 73, 73, -100, -74, 101, 104, -29, 39, -63, -105, 41, -97, 58, -106, 123, -13, -22, 95};
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
    msg.setTimeStamp(0.286895884126);
    msg.setSource(23664U);
    msg.setSourceEntity(131U);
    msg.setDestination(39252U);
    msg.setDestinationEntity(182U);
    msg.content_type.assign("ILAJDAWCSAKYSZGPJNQSKFGCODMQVNVGTVQAMKZZLMURUHYINAJGDMCZOVYFPNTWHMDFUYMPDQTTYIAJVWKJWSCTGPHBEEIUFIAGXHEOWELVXBOILWULNOPFFKKMAJYHZYWJSPCZBENBNHCSZUFPSCDEVSGDRVDIOAVTXCPROTRVERNPOXBBWQORRHUIFXBQSGKIXGXSDTTJPWYYORLKZRXTGMFYFULLNQKNXZHELBMWZUCQIMCJQHUEEBB");
    const char tmp_msg_0[] = {20, -69, -67, -40, -78, -28, -90, 121, 42, 38, -81, -60, -21, -78, 11, 79, 95, 51, 96, 59, 44, -3, -55, -69, 58, 111, 103, -35, -8, 40, 27, 61, -14, 119, 75, -84, -65, 94, 79, 24, -21, -124, 6, -27, -91, 60, -52, 18, -64, -90, -11, -27, 24, 21, 39, 29, -86, -28, 110, -76, -87, 40, -76, -95, -110, -6, -2, -112, 32, 18, -59, 63, -120, 125, 27, -128, 84, -99, -48, -17, 116, -77, 71, -68, -65, 48, -16, -30, -25, 22, -98, -79, 24, -60, 43, -44, -99, -66, 63, -29, 19, 77, -65, 116, -109, 6, -104, 92, -114, 8, -13, 1, 44, 16, -20, -104, 122, -5, -83, 64, -81, -100, -82, 20, -118, -100, 71, 11, 125, 57, -127, 29, -119, 0, -68, -68, 88, 96, 19, 41, 108, 30, 110, -21, -86, -1, 15, 100, -44, -68, 1, -28, 77, -119};
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
    msg.setTimeStamp(0.436389777383);
    msg.setSource(14135U);
    msg.setSourceEntity(198U);
    msg.setDestination(25216U);
    msg.setDestinationEntity(57U);
    msg.content_type.assign("HFOBSIVWKISYKMJIJASWOYGNUZXTAWXHKYDPURBECCAIBZQELCLZMSBVCAAORDHUXGENDUGSUFQKEIYIWMTWKBYMBZXRVAOTDFAPMQRVPRZECZ");
    const char tmp_msg_0[] = {-65, 66, -123, 77, 96, 56, -33, -44, 99, -127, 93, 22, -80, 115, -60, 86, -108, -91, 31, -13, -67, 120, 40, 20, -88, 6, 37, 21, 15, -35, -107, -91, -2, 44, -94, -114, 92, -97, -59, 92, 34, -40, -100, 69, 75, -86, -82, -75, 47, -80, 13, 34, -127, 9, -50, -55, -88, -125, 119, -4, -23, 86, 91, -99, 64, 110, -111, -36, -60, -85, 42, -37, -33, -92, -121, 47, 123, -99, -40, 54, 108, 41, 82, -108, -104, -122, -124, 23, -74, 125, -63, 58, -64, 98, 18, -103, 32, -57, -124, 43, -60, -6, -58, -94, -69, 111, -115, -32, -30, 33, -75, 18, -110, -19, 92, -89, 100, -108, 121, -123, 2, 116, 91, 99, 32, 20, 124, 93, -86, 114, 123, 38, -26, -83, 21, 33, -85, -57, 50, -117, 103, 91, 107, 113, -115, 113, -10, -63, -39, -64, 41, 89, 97, -61, 11, -108, 21, -49, -54, -60, -46, 59, 11, 32, -60, -122, 100, -125, 21, 121, -2, -78, -25, 58, -50, -100, -51, 31, 18, 30, 20, 91, 56, -67, 1, -52, 37, 123, 96, -42, 61, -111, -102, 15, 75, -121, 116, -127, -86, 16, -85, 98, -64, -43, -11, 5, -60, 19, -104, -25, -92, 70, 115, -39, 5, 61, -111, -116, 73, -120, 36, 12, 91, 6, 84, 8, -45, -93, 84, -115, 71, 13, 126, -35, 51, -95, 78, -3, 8, -33, 88, 35, -22, -6, -126, 114, 8};
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
    msg.setTimeStamp(0.589517396668);
    msg.setSource(35267U);
    msg.setSourceEntity(206U);
    msg.setDestination(57946U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.72280199822);
    msg.setSource(16358U);
    msg.setSourceEntity(216U);
    msg.setDestination(35063U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.655624882358);
    msg.setSource(35676U);
    msg.setSourceEntity(236U);
    msg.setDestination(17123U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.418040528522);
    msg.setSource(38959U);
    msg.setSourceEntity(61U);
    msg.setDestination(58018U);
    msg.setDestinationEntity(57U);
    msg.target = 44525U;
    msg.bearing = 0.680876959502;
    msg.elevation = 0.102949844895;

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
    msg.setTimeStamp(0.268543767078);
    msg.setSource(23311U);
    msg.setSourceEntity(156U);
    msg.setDestination(24401U);
    msg.setDestinationEntity(68U);
    msg.target = 16870U;
    msg.bearing = 0.66470812183;
    msg.elevation = 0.732665407045;

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
    msg.setTimeStamp(0.885486968803);
    msg.setSource(62815U);
    msg.setSourceEntity(153U);
    msg.setDestination(10630U);
    msg.setDestinationEntity(91U);
    msg.target = 53896U;
    msg.bearing = 0.930941861494;
    msg.elevation = 0.286862970904;

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
    msg.setTimeStamp(0.962985326336);
    msg.setSource(13471U);
    msg.setSourceEntity(105U);
    msg.setDestination(11563U);
    msg.setDestinationEntity(157U);
    msg.target = 39864U;
    msg.x = 0.674523125996;
    msg.y = 0.0853043687025;
    msg.z = 0.277672366246;

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
    msg.setTimeStamp(0.326401072815);
    msg.setSource(54051U);
    msg.setSourceEntity(198U);
    msg.setDestination(58339U);
    msg.setDestinationEntity(54U);
    msg.target = 4290U;
    msg.x = 0.981551821421;
    msg.y = 0.442619206508;
    msg.z = 0.137988776544;

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
    msg.setTimeStamp(0.933583585817);
    msg.setSource(63032U);
    msg.setSourceEntity(170U);
    msg.setDestination(64737U);
    msg.setDestinationEntity(106U);
    msg.target = 42732U;
    msg.x = 0.399095702252;
    msg.y = 0.474350330161;
    msg.z = 0.171130458689;

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
    msg.setTimeStamp(0.198086503739);
    msg.setSource(60260U);
    msg.setSourceEntity(213U);
    msg.setDestination(23662U);
    msg.setDestinationEntity(220U);
    msg.target = 36038U;
    msg.lat = 0.314246232673;
    msg.lon = 0.474577293612;
    msg.z_units = 195U;
    msg.z = 0.576304992301;

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
    msg.setTimeStamp(0.83436018148);
    msg.setSource(3809U);
    msg.setSourceEntity(136U);
    msg.setDestination(3770U);
    msg.setDestinationEntity(231U);
    msg.target = 1765U;
    msg.lat = 0.39013895399;
    msg.lon = 0.824791671305;
    msg.z_units = 235U;
    msg.z = 0.219176022411;

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
    msg.setTimeStamp(0.437372663312);
    msg.setSource(15644U);
    msg.setSourceEntity(164U);
    msg.setDestination(37654U);
    msg.setDestinationEntity(197U);
    msg.target = 46438U;
    msg.lat = 0.723286661692;
    msg.lon = 0.336982749301;
    msg.z_units = 194U;
    msg.z = 0.089132254737;

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
    msg.setTimeStamp(0.0686258496663);
    msg.setSource(1751U);
    msg.setSourceEntity(83U);
    msg.setDestination(50527U);
    msg.setDestinationEntity(23U);
    msg.locale.assign("PXVEJXEISPMFETESAWMQUTYXHQRZGNOIPLUNQMKWCYRKEIHXIUYZND");
    const char tmp_msg_0[] = {-21, 95, -117, -114, -62, 87, -48, 76, 12, 104, -82, 59, 86, 75, -1, -83, -92, 29, -24, 23, 99, -92, -47, -105, -73, 119, 121, 54, -53, 75, 102, 117, -78, -10, 34, -18, -77, 34, -5, 71, -66, 104, -9, 100, 83, -77, -86, 112, -15, 56, 0, -37, 114, -125, -65, -81, -78, 14, 57, -9, -104, 82, -114, 60, 34, 72, -40, 116, -70, -24, -31, -111, 27, 52, 12, 25, -34, 101, 80, 28, 29, -128, -80, 30, 8, -117, -125, -23, 29, 97, -90, 49, 76, 35, -62, -15, 95, 59, 50, -1, 126, 101, 66, 56, -59, -87, 118, -95, 80, 119, 68, 87, -20, -70, -11, 113, -33, -52, -4, -101, -93, 65, -67, -91, 17, -124, 69, -118, -29, -91, -28, -69, -72, -96, -80, 90, -39, 40, 0, 55, -114, -28, 28, 11, 31, -6, -3, -106, 126, 100, 91, 50, 97, -29, -109, 121, -36, -102, 3, -103, 29, 35, -106, -83, 74, 48, -99, -52, -69, -118, -44, 58, 51, -41, -120, -30, -36, 38, 88, 49, -44, 31, 45, -19, -64, -2, -52, 13, 86, 77, 91, -3, -41, 57, 65, 66, 30, -58, 87, 117, 117, -1, 110, 113, -6, -79, -114, 61, 34, 23, 30, -113, 110, 100, 52, -96, -121, 37, -57, 89, -80, 9, -6, 13, 100, -90, -77, -2, -105, -70, 7, -89, -122, -123, -125, -31, 101, 17, -91, -45, 89, 88};
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
    msg.setTimeStamp(0.428493975427);
    msg.setSource(58431U);
    msg.setSourceEntity(30U);
    msg.setDestination(51049U);
    msg.setDestinationEntity(218U);
    msg.locale.assign("POFWBPNAAJLZXVJJUGOQFLYLTEYRSCQPYIJHTZHWMLICUOEDTIKMXEGWS");
    const char tmp_msg_0[] = {20, -77, -55, 101, 1, -9, -40, -124, 111, -125, 79, -106, -65, 85, -51, -27, -31, 37, 119, 84, 78, -38, 54, -45, 57, -15, -38, -75, 50, 8, -122, 87, 76, -93, 83, 13, 35, 13, 124, 34, 50, -35, 35, 26, -2, -73, 101, -11, 42, -10, -43, 9, -63, 46, 116, -80, -55, 75, -112, 4, -39};
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
    msg.setTimeStamp(0.295346969039);
    msg.setSource(5234U);
    msg.setSourceEntity(54U);
    msg.setDestination(47562U);
    msg.setDestinationEntity(90U);
    msg.locale.assign("QSSNTYKHIJYFPQOPKDFVUOIVOYAUVMKMXTTXQZQMOOZGBN");
    const char tmp_msg_0[] = {-105, -73, -5, 102, 86, 94, 63, 49, 62, 57, -104, -1, -97, 114, -70, 115, 46, 93, 86, -64, 81, -24, -121, -118, -114, -59, 110, 10, 125, 65, -127, 70, 59, 93, -81, -79, -44, 42, 84, 49, -74, -52, -53, -100, -90, -80, -111, 107, 86, 73, -30, -80, -71, -88, -106, -33, -28, -34, -25, -113, -4, 103, -42, 20, -111, 56, 13, 49, 109, -90, 24, -4, -66, 48, -105, -98, 52, -67, 58, -46, -90, -3, -52, -19, -84, -57, 79, 87, -102, -74, -69, 77, 97, -10, -53, 53, -126, -61, 33, -95, -20};
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
    msg.setTimeStamp(0.706767836523);
    msg.setSource(54141U);
    msg.setSourceEntity(39U);
    msg.setDestination(8355U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.997509128093);
    msg.setSource(51714U);
    msg.setSourceEntity(131U);
    msg.setDestination(8711U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.868045801194);
    msg.setSource(45341U);
    msg.setSourceEntity(240U);
    msg.setDestination(18150U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.855464822145);
    msg.setSource(45613U);
    msg.setSourceEntity(69U);
    msg.setDestination(50286U);
    msg.setDestinationEntity(151U);
    msg.camid = 181U;
    msg.x = 3135U;
    msg.y = 45705U;

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
    msg.setTimeStamp(0.217010772719);
    msg.setSource(41300U);
    msg.setSourceEntity(202U);
    msg.setDestination(14693U);
    msg.setDestinationEntity(52U);
    msg.camid = 113U;
    msg.x = 57739U;
    msg.y = 28694U;

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
    msg.setTimeStamp(0.27044601753);
    msg.setSource(54183U);
    msg.setSourceEntity(97U);
    msg.setDestination(60142U);
    msg.setDestinationEntity(104U);
    msg.camid = 158U;
    msg.x = 27987U;
    msg.y = 28722U;

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
    msg.setTimeStamp(0.667971715648);
    msg.setSource(56949U);
    msg.setSourceEntity(210U);
    msg.setDestination(56888U);
    msg.setDestinationEntity(57U);
    msg.camid = 48U;
    msg.x = 36042U;
    msg.y = 11108U;

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
    msg.setTimeStamp(0.989052432243);
    msg.setSource(45442U);
    msg.setSourceEntity(7U);
    msg.setDestination(42721U);
    msg.setDestinationEntity(97U);
    msg.camid = 58U;
    msg.x = 61758U;
    msg.y = 41664U;

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
    msg.setTimeStamp(0.43439547681);
    msg.setSource(65258U);
    msg.setSourceEntity(253U);
    msg.setDestination(14204U);
    msg.setDestinationEntity(77U);
    msg.camid = 149U;
    msg.x = 30035U;
    msg.y = 13660U;

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
    msg.setTimeStamp(0.374099512977);
    msg.setSource(63751U);
    msg.setSourceEntity(22U);
    msg.setDestination(47716U);
    msg.setDestinationEntity(157U);
    msg.tracking = 214U;
    msg.lat = 0.826724397583;
    msg.lon = 0.0270388111872;
    msg.x = 0.146279202083;
    msg.y = 0.855408722061;
    msg.z = 0.784984894321;

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
    msg.setTimeStamp(0.312180800371);
    msg.setSource(33471U);
    msg.setSourceEntity(140U);
    msg.setDestination(12386U);
    msg.setDestinationEntity(166U);
    msg.tracking = 12U;
    msg.lat = 0.271094845108;
    msg.lon = 0.959847388357;
    msg.x = 0.27252910144;
    msg.y = 0.0625135707308;
    msg.z = 0.327582226523;

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
    msg.setTimeStamp(0.52159674908);
    msg.setSource(37151U);
    msg.setSourceEntity(224U);
    msg.setDestination(12544U);
    msg.setDestinationEntity(65U);
    msg.tracking = 104U;
    msg.lat = 0.191228845652;
    msg.lon = 0.761190051264;
    msg.x = 0.84439013793;
    msg.y = 0.740519368561;
    msg.z = 0.108632821846;

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
    msg.setTimeStamp(0.113621275349);
    msg.setSource(43424U);
    msg.setSourceEntity(204U);
    msg.setDestination(25003U);
    msg.setDestinationEntity(107U);
    msg.target.assign("COCYXDJVYSAQFSJVHCAMKGZUNHPWHCMYLIRGMUICKBTMRSQWFWZPALRZBAOKVEXNDTRSDHJFOIVCJYOIQZMISLPBAHLQVETSFYHBWECPDEUSXIOSJJUZVWFJHKHJKVBNWFTTGTLPYA");
    msg.lbearing = 0.470111854564;
    msg.lelevation = 0.0835261807645;
    msg.bearing = 0.515378208876;
    msg.elevation = 0.115953436886;
    msg.phi = 0.723801352483;
    msg.theta = 0.600551148249;
    msg.psi = 0.027514230642;
    msg.accuracy = 0.610605070292;

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
    msg.setTimeStamp(0.745215303898);
    msg.setSource(63233U);
    msg.setSourceEntity(234U);
    msg.setDestination(11452U);
    msg.setDestinationEntity(23U);
    msg.target.assign("WRDTIIFJFCYXTZMQVPDJFKEAMPGNTPJFDSFJLCIQIGSQIOSGDNY");
    msg.lbearing = 0.253832496856;
    msg.lelevation = 0.956037091014;
    msg.bearing = 0.0839549451268;
    msg.elevation = 0.127812871564;
    msg.phi = 0.57514519884;
    msg.theta = 0.742818519417;
    msg.psi = 0.512194246956;
    msg.accuracy = 0.420748881677;

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
    msg.setTimeStamp(0.619595374456);
    msg.setSource(8562U);
    msg.setSourceEntity(75U);
    msg.setDestination(61007U);
    msg.setDestinationEntity(198U);
    msg.target.assign("TQBDUUWLOYRRNDCAMTNZJMGAQSKEOJDGGRKVDTZNQLLPFIRCUOMMKZLARKSGXPNIZFAOWZHHNVLCXMPYQUOAYEIFEKWAXKBDQDNCHGDWJIHEWUQXCHXVQGTJVYBQBRGEVMHLCXMSCRSPE");
    msg.lbearing = 0.761920240006;
    msg.lelevation = 0.933736505538;
    msg.bearing = 0.177602980822;
    msg.elevation = 0.986892126684;
    msg.phi = 0.00939827158527;
    msg.theta = 0.583459704809;
    msg.psi = 0.200844134575;
    msg.accuracy = 0.436986041297;

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
    msg.setTimeStamp(0.249385923282);
    msg.setSource(7546U);
    msg.setSourceEntity(244U);
    msg.setDestination(15224U);
    msg.setDestinationEntity(119U);
    msg.target.assign("ZKMNQKYSIJQRFELQHNZRLHFXPOJPHMAODACVXUCMJWEXLZSPICUTWBSXTPKOFXQLSSCOYTBWGUJCOKMCGTYVNISBOLERVVWKCHIFRVLESQYIZERDJNIIZYBAGTXDWWSKRDTPYULVTKOUAVZEUDZWQGBDDFJJDYMRYKAUVNIVMEYOKKHPOPTGCXAALUBDQXQFHBHDCSVIHJINCSYGHNAAWMFPBLZNPEURMMGPBJGXGTEWMZL");
    msg.x = 0.127859345949;
    msg.y = 0.492205832001;
    msg.z = 0.0630953994968;
    msg.n = 0.0692041358109;
    msg.e = 0.860726783676;
    msg.d = 0.286576648869;
    msg.phi = 0.331376699927;
    msg.theta = 0.451145665297;
    msg.psi = 0.621362159401;
    msg.accuracy = 0.115231770158;

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
    msg.setTimeStamp(0.296732857654);
    msg.setSource(33689U);
    msg.setSourceEntity(13U);
    msg.setDestination(42768U);
    msg.setDestinationEntity(61U);
    msg.target.assign("VTISOTSBTRFUQVDBWEHMLNANYHOMGFPEDWPAOZNXPGQUCZYLMHTDRNWCHSMHPECDFFKNJPTTLJTENKVLBEWHYAXGZDSCVOTXDURZLDAJAQOYKIEWAQHBWBRXVKPJVCLOUFOJPOUJUGPKHCAALXQXKFTKZGIGMEGKSEUEYRIQEBBBMRXFQNOW");
    msg.x = 0.763161460673;
    msg.y = 0.0457818864557;
    msg.z = 0.930144456612;
    msg.n = 0.766739260493;
    msg.e = 0.433272285605;
    msg.d = 0.471427416392;
    msg.phi = 0.110630926645;
    msg.theta = 0.0552132080421;
    msg.psi = 0.478288974559;
    msg.accuracy = 0.416797581432;

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
    msg.setTimeStamp(0.655749245708);
    msg.setSource(8627U);
    msg.setSourceEntity(176U);
    msg.setDestination(8240U);
    msg.setDestinationEntity(10U);
    msg.target.assign("NAPEPLXLEJYELMQRAOVCTDRTPEZMMHMJTAINB");
    msg.x = 0.156158885396;
    msg.y = 0.846375534291;
    msg.z = 0.249073211329;
    msg.n = 0.814639763947;
    msg.e = 0.318914286639;
    msg.d = 0.586785317386;
    msg.phi = 0.484610933047;
    msg.theta = 0.945226173238;
    msg.psi = 0.00356155554771;
    msg.accuracy = 0.924947042923;

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
    msg.setTimeStamp(0.92335646767);
    msg.setSource(12333U);
    msg.setSourceEntity(170U);
    msg.setDestination(46496U);
    msg.setDestinationEntity(149U);
    msg.target.assign("IHUCJLFYLFFPCQLHGGTZRQWFOYNSXLAYAWFHAQLXOCJPOAMLMESXZJCHCBHBUDNOAEGSDJKTBYUVIVEDOCOCUFYJULPNIEDNPTZDHNVMANNGKPGPWZVPGCWEKHSSQYSMILTKUEHYRQIKWLNXGBSYQBZVRUKZEQDECVMKXIFIMOWDRXDKUGQUBETGIVNBQWJYDRKBFSTWUSLZTMOZJAHJWBZEMJPPIAQRTIOSX");
    msg.lat = 0.513785435511;
    msg.lon = 0.236988005404;
    msg.z_units = 204U;
    msg.z = 0.783597626017;
    msg.accuracy = 0.0157693480854;

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
    msg.setTimeStamp(0.335349968648);
    msg.setSource(16327U);
    msg.setSourceEntity(248U);
    msg.setDestination(36899U);
    msg.setDestinationEntity(78U);
    msg.target.assign("CGFEQXOXWOST");
    msg.lat = 0.297466299345;
    msg.lon = 0.832882367579;
    msg.z_units = 245U;
    msg.z = 0.0908629029381;
    msg.accuracy = 0.595671951823;

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
    msg.setTimeStamp(0.827599850234);
    msg.setSource(45279U);
    msg.setSourceEntity(192U);
    msg.setDestination(19385U);
    msg.setDestinationEntity(165U);
    msg.target.assign("BRAWFPIBNHENYKAAOLGUHOQLIDOSEVEBEGYJZVFQKJWWWMZTUWCOIERICPMYGYFZVXJBWZLSRTPNHSOBTBNUPZUNHXTQIRODBVPNYJWLURXDDKXOIPQWFKSZDJLQIALHYYOLUAZGMNCKGFNQGMMEAHPBINREDFNGJSYCOBFHYKVWRCGUFAQXDKETFVXQHIJFVJRQUJTMUCDRHCSSSXEWMZPOMHIBLXVLSZQPMGGRVAVYJXZKCKAXSCLTU");
    msg.lat = 0.492744747654;
    msg.lon = 0.893949333535;
    msg.z_units = 183U;
    msg.z = 0.84719060428;
    msg.accuracy = 0.250804682374;

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
    msg.setTimeStamp(0.606293327663);
    msg.setSource(40603U);
    msg.setSourceEntity(42U);
    msg.setDestination(41986U);
    msg.setDestinationEntity(98U);
    msg.name.assign("KOMTFJYKNZICSVVORUSDHVTOXLEUEOKQPAAHWVJFBJREGSQHMKTEDPINAPASWLYKCTFJNFDURFDEGRNPDCTDUHBMEXCFQYGXBZGBTNLKVMZMQGQMDCIUZFSJRVWAPKZLYUKWIAWICSEBBJPPNUVMZS");
    msg.lat = 0.223402621938;
    msg.lon = 0.311097474685;
    msg.z = 0.90874785459;
    msg.z_units = 121U;

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
    msg.setTimeStamp(0.540663895411);
    msg.setSource(36109U);
    msg.setSourceEntity(133U);
    msg.setDestination(16794U);
    msg.setDestinationEntity(46U);
    msg.name.assign("IILICLEVUFBYDXQBSGYKWDD");
    msg.lat = 0.428643332259;
    msg.lon = 0.813805968024;
    msg.z = 0.526936000456;
    msg.z_units = 197U;

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
    msg.setTimeStamp(0.750313851274);
    msg.setSource(51320U);
    msg.setSourceEntity(36U);
    msg.setDestination(15382U);
    msg.setDestinationEntity(161U);
    msg.name.assign("XYLCLNFUAGMHHBSGMXUUFNPMPIPCBFETYEZWSQARAJFVSGERRTOMHQQCFBGEVMIOASEAJYCLWFYBTIDBTPQJWWGXWGUIGYOHGLZZNJHQTAMVJLKYVQJPRGDICHENUVKQOPKNUXMFBKKOVFKMKPIDWWUDGCRKLBOEANLHZJETJROKSRTHYIYQATDNNFYXCEZPPEZDRUXUTOW");
    msg.lat = 0.287689510962;
    msg.lon = 0.354692119459;
    msg.z = 0.983228840953;
    msg.z_units = 83U;

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
    msg.setTimeStamp(0.565534614794);
    msg.setSource(56910U);
    msg.setSourceEntity(192U);
    msg.setDestination(20429U);
    msg.setDestinationEntity(78U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.282490503278);
    msg.setSource(17396U);
    msg.setSourceEntity(148U);
    msg.setDestination(8320U);
    msg.setDestinationEntity(57U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.384979555877);
    msg.setSource(29419U);
    msg.setSourceEntity(172U);
    msg.setDestination(51051U);
    msg.setDestinationEntity(8U);
    msg.op = 150U;

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
    msg.setTimeStamp(0.359988731445);
    msg.setSource(62779U);
    msg.setSourceEntity(52U);
    msg.setDestination(56269U);
    msg.setDestinationEntity(22U);
    msg.value = 0.816431750183;
    msg.type = 178U;

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
    msg.setTimeStamp(0.100231235481);
    msg.setSource(49349U);
    msg.setSourceEntity(224U);
    msg.setDestination(50693U);
    msg.setDestinationEntity(71U);
    msg.value = 0.647298337344;
    msg.type = 179U;

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
    msg.setTimeStamp(0.990409250375);
    msg.setSource(47180U);
    msg.setSourceEntity(91U);
    msg.setDestination(43658U);
    msg.setDestinationEntity(62U);
    msg.value = 0.415082324044;
    msg.type = 158U;

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
    msg.setTimeStamp(0.457520264184);
    msg.setSource(28351U);
    msg.setSourceEntity(96U);
    msg.setDestination(56627U);
    msg.setDestinationEntity(204U);
    msg.value = 0.198802433482;

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
    msg.setTimeStamp(0.687517908798);
    msg.setSource(15038U);
    msg.setSourceEntity(33U);
    msg.setDestination(14434U);
    msg.setDestinationEntity(181U);
    msg.value = 0.982121048065;

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
    msg.setTimeStamp(0.0410691426017);
    msg.setSource(29184U);
    msg.setSourceEntity(239U);
    msg.setDestination(31796U);
    msg.setDestinationEntity(174U);
    msg.value = 0.185574358249;

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
    msg.setTimeStamp(0.0352705764773);
    msg.setSource(11008U);
    msg.setSourceEntity(177U);
    msg.setDestination(21093U);
    msg.setDestinationEntity(167U);
    msg.timestamp_last_service = 0.234424596024;
    msg.time_next_service = 0.00113581555275;
    msg.time_motor_next_service = 0.11808363707;
    msg.time_idle_ground = 0.839107139569;
    msg.time_idle_air = 0.617394021562;
    msg.time_idle_water = 0.908850266566;
    msg.time_idle_underwater = 0.262286649884;
    msg.time_idle_unknown = 0.585938370605;
    msg.time_motor_ground = 0.351542177933;
    msg.time_motor_air = 0.311508067675;
    msg.time_motor_water = 0.781289106865;
    msg.time_motor_underwater = 0.0240315350009;
    msg.time_motor_unknown = 0.988308623385;
    msg.rpm_min = 23266;
    msg.rpm_max = 15239;
    msg.depth_max = 0.623970554145;

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
    msg.setTimeStamp(0.752480343738);
    msg.setSource(28205U);
    msg.setSourceEntity(51U);
    msg.setDestination(7048U);
    msg.setDestinationEntity(151U);
    msg.timestamp_last_service = 0.930399221687;
    msg.time_next_service = 0.196062160246;
    msg.time_motor_next_service = 0.416890392791;
    msg.time_idle_ground = 0.788079983168;
    msg.time_idle_air = 0.334604207563;
    msg.time_idle_water = 0.816590142667;
    msg.time_idle_underwater = 0.599355166623;
    msg.time_idle_unknown = 0.19004612548;
    msg.time_motor_ground = 0.201892987055;
    msg.time_motor_air = 0.0784608523362;
    msg.time_motor_water = 0.505686643735;
    msg.time_motor_underwater = 0.0687088501371;
    msg.time_motor_unknown = 0.974977252642;
    msg.rpm_min = 18485;
    msg.rpm_max = -26313;
    msg.depth_max = 0.444433220813;

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
    msg.setTimeStamp(0.369856055604);
    msg.setSource(20990U);
    msg.setSourceEntity(191U);
    msg.setDestination(50307U);
    msg.setDestinationEntity(120U);
    msg.timestamp_last_service = 0.212435968196;
    msg.time_next_service = 0.612945951835;
    msg.time_motor_next_service = 0.946598488532;
    msg.time_idle_ground = 0.357611417413;
    msg.time_idle_air = 0.960066116526;
    msg.time_idle_water = 0.307563357757;
    msg.time_idle_underwater = 0.900646569263;
    msg.time_idle_unknown = 0.572685174162;
    msg.time_motor_ground = 0.183476871761;
    msg.time_motor_air = 0.922125935884;
    msg.time_motor_water = 0.385570529832;
    msg.time_motor_underwater = 0.883971182777;
    msg.time_motor_unknown = 0.962857802524;
    msg.rpm_min = -2477;
    msg.rpm_max = -26405;
    msg.depth_max = 0.910225336512;

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
    msg.setTimeStamp(0.0499361912581);
    msg.setSource(57742U);
    msg.setSourceEntity(127U);
    msg.setDestination(41575U);
    msg.setDestinationEntity(67U);
    msg.severity = 23U;
    msg.text.assign("KPKWNUUHAOXKWGWKTHFHXXLGHNGTVMCTNWQYGLMJRUIPFBAAHQMSRUKQCWFQGDOBHQCYODSXZBWINBEXKAFUZGYILPRRYVDDVRZLCDXEPIZDPEQSQMZBEBNOOXCFXNGWUJYYHWBMMNPU");

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
    msg.setTimeStamp(0.556808635393);
    msg.setSource(15958U);
    msg.setSourceEntity(139U);
    msg.setDestination(22228U);
    msg.setDestinationEntity(109U);
    msg.severity = 58U;
    msg.text.assign("UQWFOYTUDXTUMHOONMDZJQHXPIJOWQORHHHNPSVSJEOVHTDXLKKVPOXUZDKBLEAQMKLZWQXFWOJPQJIAFZIMKGUEEYLZGFCTXELJKDCGNTLBBRWGWYUOEKSRYVAPYRDQPXLCMKRXDJVCD");

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
    msg.setTimeStamp(0.255566262639);
    msg.setSource(26963U);
    msg.setSourceEntity(178U);
    msg.setDestination(62610U);
    msg.setDestinationEntity(147U);
    msg.severity = 92U;
    msg.text.assign("CRJDMKDYWINLLBAZLZBXQIOJDBTHHMVWYADXFWIBEPSHWPYGYBBDHNXXFSENASTWUJCSDZEDLXADMFCZLSJSHUTYFZXCUUJONBKACLIPPCCMGUAHPQNHVOOAGVGRMKLKVSGQWVC");

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
    msg.setTimeStamp(0.861519710472);
    msg.setSource(52958U);
    msg.setSourceEntity(83U);
    msg.setDestination(61228U);
    msg.setDestinationEntity(247U);
    msg.channel = 44;
    msg.value = 1319739654;
    msg.gain = 151U;

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
    msg.setTimeStamp(0.764638068073);
    msg.setSource(61792U);
    msg.setSourceEntity(130U);
    msg.setDestination(5262U);
    msg.setDestinationEntity(37U);
    msg.channel = 49;
    msg.value = -969213033;
    msg.gain = 99U;

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
    msg.setTimeStamp(0.32578256308);
    msg.setSource(59071U);
    msg.setSourceEntity(3U);
    msg.setDestination(16035U);
    msg.setDestinationEntity(107U);
    msg.channel = 90;
    msg.value = -1402789353;
    msg.gain = 64U;

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
