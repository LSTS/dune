//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 971b1d246a2548118d0fee2a17f455a2                            *
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
    msg.setTimeStamp(0.7857910345482652);
    msg.setSource(51257U);
    msg.setSourceEntity(18U);
    msg.setDestination(34413U);
    msg.setDestinationEntity(11U);
    msg.state = 96U;
    msg.flags = 162U;
    msg.description.assign("CCUNFEDREKBYTJQZYPSAGHAFRTQHZVFPPCSHIETLOXWUCAQJLOWPSRFRHBIISBULJBALWQGEZBPTVNZKLUFUJMJFUM");

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
    msg.setTimeStamp(0.15036542279249032);
    msg.setSource(39631U);
    msg.setSourceEntity(197U);
    msg.setDestination(24499U);
    msg.setDestinationEntity(222U);
    msg.state = 88U;
    msg.flags = 156U;
    msg.description.assign("TDCORHCOFFFWVTYXHLNINNKDHPGUGECPASQOHKLXRPKAVLQVERBPZTSAYDHIVSCVAIUXYASEEPWBUMNNZHVRZLQDDKEDJHQUQGUKTKROCVJJAMOZXRWAXOKAZPUIYCMISSCNGYZPEMFJNGWSOYKCBDPFMJYFTQBMXRNQMKIIUFJHWXRJOSWUJWYBZZUBLVGGQFCFWPIPXOKJM");

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
    msg.setTimeStamp(0.6404515511995793);
    msg.setSource(31177U);
    msg.setSourceEntity(46U);
    msg.setDestination(16058U);
    msg.setDestinationEntity(203U);
    msg.state = 245U;
    msg.flags = 220U;
    msg.description.assign("NWITWPNIMRXKSFONMHGGFYYZOWPBWJVMLIKQRODXMCGCZULXHVMLMGQOYSUEQNXLGFNYJQZEJUNIZUBYVRJSYEIACQXVDFVMWLWHSSLFJGVCXZGOISDXDBVBVRLTKAEJTUPTRESXHXMUDPWAJOTTMAYSIDKWCVGKCPZEENTRGJBUOPBNSKWQP");

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
    msg.setTimeStamp(0.23818065960911705);
    msg.setSource(45909U);
    msg.setSourceEntity(169U);
    msg.setDestination(41484U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.5531902527550676);
    msg.setSource(44506U);
    msg.setSourceEntity(140U);
    msg.setDestination(8041U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.9761520350305531);
    msg.setSource(32243U);
    msg.setSourceEntity(190U);
    msg.setDestination(52831U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.6726592591377598);
    msg.setSource(54356U);
    msg.setSourceEntity(104U);
    msg.setDestination(39179U);
    msg.setDestinationEntity(64U);
    msg.id = 7U;
    msg.label.assign("YAXNOHUERGBOKOAWHCFHSCHGMGUVWFZAPKSSTKMNJBGPUJUFQXANWQGUQNDJDRHLMWIDTGYAVLEZZEOYSBLTDLJUNSJLKYWKHEAHLBYBMNMZWYHTLZYJSVVSRAFQUKVXYTQTPPPCMCXDRXQWRICEQTPIBF");
    msg.component.assign("GPDAXPEEUUVFYOWXZLVNMYVHBXVEGNYHJFWZFMLRMJPIDOVOJOOHBCMGGQENROHPGCZCPOPJNGFJKNGGWHQCNWAKYS");
    msg.act_time = 52709U;
    msg.deact_time = 56766U;

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
    msg.setTimeStamp(0.9012274322141298);
    msg.setSource(10976U);
    msg.setSourceEntity(234U);
    msg.setDestination(62494U);
    msg.setDestinationEntity(173U);
    msg.id = 93U;
    msg.label.assign("XSHDBMXNZNQ");
    msg.component.assign("UOTBXMTCSNHBAFIUPSXKSYBGBPWMTWVOTYFAAFSTZKZWVIRUJLGQOAAVEVDODISAUGTVBR");
    msg.act_time = 17439U;
    msg.deact_time = 16203U;

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
    msg.setTimeStamp(0.9452905101230232);
    msg.setSource(18515U);
    msg.setSourceEntity(199U);
    msg.setDestination(47557U);
    msg.setDestinationEntity(37U);
    msg.id = 230U;
    msg.label.assign("YOWOVHDLYRSSIEMTDDXOKMIBTCQDKHCUBPVHBRSHZRGMDPFNMESABXWFZDEOROAGPWYHWBHLCVERWANGEDMIJGULQTUUCPXDQYKT");
    msg.component.assign("WXLOGOGVPWLORTCSWTSEUMRHITEHQNJSVJUYEMRZDUPEODBFMAKCGJBATZEZAOCUFHLJAXPVZDZGKBBNUWZBRANNBNUWIXMHCXDQUSYQFXRAMVDJK");
    msg.act_time = 31384U;
    msg.deact_time = 11055U;

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
    msg.setTimeStamp(0.9031580529603762);
    msg.setSource(394U);
    msg.setSourceEntity(240U);
    msg.setDestination(51437U);
    msg.setDestinationEntity(177U);
    msg.id = 168U;

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
    msg.setTimeStamp(0.30609029054906156);
    msg.setSource(38713U);
    msg.setSourceEntity(219U);
    msg.setDestination(26097U);
    msg.setDestinationEntity(152U);
    msg.id = 112U;

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
    msg.setTimeStamp(0.9974197283177387);
    msg.setSource(30559U);
    msg.setSourceEntity(195U);
    msg.setDestination(12090U);
    msg.setDestinationEntity(46U);
    msg.id = 25U;

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
    msg.setTimeStamp(0.7934984226499111);
    msg.setSource(25496U);
    msg.setSourceEntity(45U);
    msg.setDestination(52213U);
    msg.setDestinationEntity(124U);
    msg.op = 201U;
    msg.list.assign("VIMVOLGWMRABSYVJYZWSRNCRNZQUJFDHHBTGAWPKLALTPJSVGYMLAGHCDVMLHMNTNFVENYTIQKBBPQXMELWEDIITKFTEVFUOCSLFONMALDKRQESPUYWXPRFHBIAOFWGEIACEWQMXEAZCKGJITUHTQRJXMUCJKOXOGGHXRFQ");

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
    msg.setTimeStamp(0.10708139546480977);
    msg.setSource(41053U);
    msg.setSourceEntity(12U);
    msg.setDestination(14416U);
    msg.setDestinationEntity(30U);
    msg.op = 196U;
    msg.list.assign("KGQCFAJCXFYASHOTYMIKNOFNHXLRIPFOAENNMOAXBKHWJTKRECWZMZSTTBMVNOOERLXZEMZZQJLGYLEITLSDBUXARZLLKPNUDHYWYDXDTQGRUVEJRTVCNCHGJVQ");

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
    msg.setTimeStamp(0.13415348582739917);
    msg.setSource(42632U);
    msg.setSourceEntity(102U);
    msg.setDestination(624U);
    msg.setDestinationEntity(236U);
    msg.op = 190U;
    msg.list.assign("KVWBGLIPYQSAAGRMKUACSCBBEGALYUQQFZITRUMTHFGETPPRVYPRAJQHPE");

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
    msg.setTimeStamp(0.1847467539075155);
    msg.setSource(65157U);
    msg.setSourceEntity(181U);
    msg.setDestination(54013U);
    msg.setDestinationEntity(109U);
    msg.value = 38U;

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
    msg.setTimeStamp(0.5658401658091515);
    msg.setSource(63596U);
    msg.setSourceEntity(46U);
    msg.setDestination(3033U);
    msg.setDestinationEntity(109U);
    msg.value = 113U;

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
    msg.setTimeStamp(0.93805729028331);
    msg.setSource(17386U);
    msg.setSourceEntity(115U);
    msg.setDestination(54168U);
    msg.setDestinationEntity(101U);
    msg.value = 223U;

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
    msg.setTimeStamp(0.43019404324063126);
    msg.setSource(41619U);
    msg.setSourceEntity(48U);
    msg.setDestination(11302U);
    msg.setDestinationEntity(83U);
    msg.consumer.assign("GRIMCNSSVNIBHRILRMXCPWEXGVWDGSJQTFILPCTVWRCFGRZZPCCGLDOZOCNVAJKQKXYNYABEW");
    msg.message_id = 11978U;

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
    msg.setTimeStamp(0.6016673075397354);
    msg.setSource(37039U);
    msg.setSourceEntity(178U);
    msg.setDestination(2570U);
    msg.setDestinationEntity(115U);
    msg.consumer.assign("EJSTWPKZYRZFFSLBGINZWRASECJQCXETBLPZIMBKYDABRRFMKMZVHGTDFCWKUMAHOVKYDPSRSLHAMUERVTBNJPSMLGTCXALDBSTQLNQDAVOXPNUEGHIDGOHNUVICLZHMSGBFNOAHOKUJHVLBTTDEYNBUYQRKECWUAILNHIDQVFYMWR");
    msg.message_id = 6386U;

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
    msg.setTimeStamp(0.7921605237672488);
    msg.setSource(51941U);
    msg.setSourceEntity(245U);
    msg.setDestination(18916U);
    msg.setDestinationEntity(211U);
    msg.consumer.assign("XCUTQFEAKAOQAZOJWHJLQHCKNKSTUAMFAVCAVTYFPQBZLTJUBEKOEA");
    msg.message_id = 61073U;

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
    msg.setTimeStamp(0.7761737398391605);
    msg.setSource(18039U);
    msg.setSourceEntity(91U);
    msg.setDestination(17707U);
    msg.setDestinationEntity(196U);
    msg.type = 231U;

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
    msg.setTimeStamp(0.180927668971804);
    msg.setSource(18354U);
    msg.setSourceEntity(242U);
    msg.setDestination(26881U);
    msg.setDestinationEntity(183U);
    msg.type = 153U;

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
    msg.setTimeStamp(0.14642798358417541);
    msg.setSource(47043U);
    msg.setSourceEntity(224U);
    msg.setDestination(56956U);
    msg.setDestinationEntity(154U);
    msg.type = 25U;

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
    msg.setTimeStamp(0.9248587859235415);
    msg.setSource(45324U);
    msg.setSourceEntity(223U);
    msg.setDestination(47026U);
    msg.setDestinationEntity(95U);
    msg.op = 239U;

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
    msg.setTimeStamp(0.1457252008441523);
    msg.setSource(38387U);
    msg.setSourceEntity(68U);
    msg.setDestination(9111U);
    msg.setDestinationEntity(136U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.858257351357011);
    msg.setSource(54832U);
    msg.setSourceEntity(47U);
    msg.setDestination(25004U);
    msg.setDestinationEntity(214U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.8770450999723436);
    msg.setSource(5164U);
    msg.setSourceEntity(28U);
    msg.setDestination(27182U);
    msg.setDestinationEntity(43U);
    msg.total_steps = 58U;
    msg.step_number = 212U;
    msg.step.assign("FMDARCVBULBAEMVLXTJKALBKTRZMJBSDPZZDUKZBLPRCWIPUJZRHEPWLTFJDFQVQTJOEKWBUGOOHIKYFONUDIVMJBRNZVXPYLETXEOCZYXGRSQLGITCTVYXGDONXJZONSKMNIMKO");
    msg.flags = 127U;

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
    msg.setTimeStamp(0.6270357309884029);
    msg.setSource(48466U);
    msg.setSourceEntity(227U);
    msg.setDestination(50849U);
    msg.setDestinationEntity(181U);
    msg.total_steps = 30U;
    msg.step_number = 2U;
    msg.step.assign("HOYTCMEINOOHYXLSVVLKAGWAGWFXERMSWVJEKWWGCOUXJZMKBRNBZTRMDTBYZXKYPDXNNEVINVXGFHSPNEQAYKJHGCALJDLYOSRSPAQITFVRCMTPKXEEIRIDDPFZJPFBCUVYMHKWHGRNBQLNWIQXTUXLMUCQHPZILRB");
    msg.flags = 209U;

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
    msg.setTimeStamp(0.1641246181708622);
    msg.setSource(34848U);
    msg.setSourceEntity(3U);
    msg.setDestination(51718U);
    msg.setDestinationEntity(19U);
    msg.total_steps = 11U;
    msg.step_number = 253U;
    msg.step.assign("ZJABKFNDAQCJKEEKTEOHWIDXOUSNPSERWWNLQCYNOKBMTLZTBRHWQQGXPAAJBYMRLMCQYTPEJZLIGVZFTJCRHNBJYLQAAWBUOXPMOHWQRXJNNEZFSMNEJQURCXNUVQFPBO");
    msg.flags = 137U;

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
    msg.setTimeStamp(0.639214826405469);
    msg.setSource(17982U);
    msg.setSourceEntity(63U);
    msg.setDestination(63753U);
    msg.setDestinationEntity(201U);
    msg.state = 112U;
    msg.error.assign("XCAHTGVOQSGAXZLWRQCCHGGMKQWENTXYOUKZQHIVNMHFFFLRKYREBNMKCFKPRUDKGQLPBTUZXDDJPSZTVDVARNIUMJKTBSXZWZAYEYXBVQEQHUIIZURIABTFCXLYONSPFILQUQJJCWLLZWZUJMPCTDVBRLYOSRJVPEKPRSPPIYOLNAVYVNSIFSBZTGIQSOJMGKAONMVJHWDHHXDBBROBOJCWUFFEMAUIWO");

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
    msg.setTimeStamp(0.517529076560172);
    msg.setSource(49209U);
    msg.setSourceEntity(160U);
    msg.setDestination(5425U);
    msg.setDestinationEntity(65U);
    msg.state = 241U;
    msg.error.assign("NODKNVDXWSGNHQSVYYMMKKSLESHBRQLCZGCMEGFZJVJLORREMRABPXYVNILFQSGSFWCSHFGQBDQXTIEZKDGZUINCVBEQYLHFHTQRNKAITVUKHRJDVXKUBKBTHJJXOIXWWBQIPWOBYTCCAVUNAJTENDOUAFFSPHWOOKTZBZMAWYIVIRDOCYIWQKQGVGMYGFYSYTZHZFLXOUZRJPLPALWSPDJDAXIFXLLTUPRANCECMPZWGCHMPJTADEPOXB");

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
    msg.setTimeStamp(0.009035661569848363);
    msg.setSource(46340U);
    msg.setSourceEntity(202U);
    msg.setDestination(40677U);
    msg.setDestinationEntity(159U);
    msg.state = 22U;
    msg.error.assign("MICGMNVUNXAUFUFBWISHONEDVLMEIETREFGPVAXYOQXVGWUGFKMQKPICSSEHGZFZWGQKMBJFXMXNCKADXY");

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
    msg.setTimeStamp(0.24185198508298011);
    msg.setSource(52990U);
    msg.setSourceEntity(0U);
    msg.setDestination(56696U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.8141685504240962);
    msg.setSource(25303U);
    msg.setSourceEntity(205U);
    msg.setDestination(14208U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.8407440835075267);
    msg.setSource(23367U);
    msg.setSourceEntity(159U);
    msg.setDestination(17575U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.5861507378296704);
    msg.setSource(56243U);
    msg.setSourceEntity(99U);
    msg.setDestination(41956U);
    msg.setDestinationEntity(76U);
    msg.op = 156U;
    msg.speed_min = 0.7221096768863489;
    msg.speed_max = 0.9072928972802609;
    msg.long_accel = 0.30977843686789674;
    msg.alt_max_msl = 0.2465940559521015;
    msg.dive_fraction_max = 0.8580819539551748;
    msg.climb_fraction_max = 0.5246295801695022;
    msg.bank_max = 0.7335334244831789;
    msg.p_max = 0.18229186705286715;
    msg.pitch_min = 0.09422191309946082;
    msg.pitch_max = 0.8580130289790866;
    msg.q_max = 0.057076552200683195;
    msg.g_min = 0.25050239126824414;
    msg.g_max = 0.7281379797202784;
    msg.g_lat_max = 0.36169508870274525;
    msg.rpm_min = 0.29803949210315495;
    msg.rpm_max = 0.6468414302366393;
    msg.rpm_rate_max = 0.4329596360144664;

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
    msg.setTimeStamp(0.675000457482046);
    msg.setSource(33537U);
    msg.setSourceEntity(97U);
    msg.setDestination(6328U);
    msg.setDestinationEntity(66U);
    msg.op = 180U;
    msg.speed_min = 0.626509515043426;
    msg.speed_max = 0.36739035516490026;
    msg.long_accel = 0.4753968792076959;
    msg.alt_max_msl = 0.7651161580000838;
    msg.dive_fraction_max = 0.7648734091729043;
    msg.climb_fraction_max = 0.136713359656636;
    msg.bank_max = 0.828072461005448;
    msg.p_max = 0.05972409824235114;
    msg.pitch_min = 0.4257056479026228;
    msg.pitch_max = 0.814533084992163;
    msg.q_max = 0.8900639812985753;
    msg.g_min = 0.8143132190473464;
    msg.g_max = 0.9607611340090177;
    msg.g_lat_max = 0.4990032631235912;
    msg.rpm_min = 0.7538741434993941;
    msg.rpm_max = 0.10904809913355085;
    msg.rpm_rate_max = 0.8173114413221758;

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
    msg.setTimeStamp(0.47457547690175395);
    msg.setSource(41877U);
    msg.setSourceEntity(112U);
    msg.setDestination(12587U);
    msg.setDestinationEntity(240U);
    msg.op = 101U;
    msg.speed_min = 0.6910735544770885;
    msg.speed_max = 0.03767095270348164;
    msg.long_accel = 0.08533092436471146;
    msg.alt_max_msl = 0.03424143685757397;
    msg.dive_fraction_max = 0.7236112410245874;
    msg.climb_fraction_max = 0.3290668372003067;
    msg.bank_max = 0.025998586824832137;
    msg.p_max = 0.4488039754092009;
    msg.pitch_min = 0.6524197632224795;
    msg.pitch_max = 0.25522775107558915;
    msg.q_max = 0.4562304211013206;
    msg.g_min = 0.01721444284887874;
    msg.g_max = 0.9015204871085037;
    msg.g_lat_max = 0.32428638081600525;
    msg.rpm_min = 0.40946956394275147;
    msg.rpm_max = 0.04330675360628922;
    msg.rpm_rate_max = 0.7329725848444933;

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
    msg.setTimeStamp(0.6185260804624415);
    msg.setSource(22647U);
    msg.setSourceEntity(101U);
    msg.setDestination(5723U);
    msg.setDestinationEntity(246U);
    IMC::ManeuverDone tmp_msg_0;
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
    msg.setTimeStamp(0.3528989385656459);
    msg.setSource(39837U);
    msg.setSourceEntity(4U);
    msg.setDestination(42824U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.11179898770626262);
    msg.setSource(34434U);
    msg.setSourceEntity(79U);
    msg.setDestination(21364U);
    msg.setDestinationEntity(83U);
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("PURRPKMTMMBXFCJGPLJWZUIVCPJOCWMYVZBSUEYX");
    tmp_msg_0.state = 132U;
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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.5457086403605944);
    msg.setSource(23041U);
    msg.setSourceEntity(206U);
    msg.setDestination(59754U);
    msg.setDestinationEntity(49U);
    msg.value = 0.9839524893044116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.8011760548134276);
    msg.setSource(51985U);
    msg.setSourceEntity(92U);
    msg.setDestination(42681U);
    msg.setDestinationEntity(10U);
    msg.value = 0.2612381214225292;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.7230863161783813);
    msg.setSource(4335U);
    msg.setSourceEntity(89U);
    msg.setDestination(3200U);
    msg.setDestinationEntity(0U);
    msg.value = 0.7165321816974166;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.10693215761537478);
    msg.setSource(15097U);
    msg.setSourceEntity(42U);
    msg.setDestination(55144U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.4687934339848717;
    msg.lon = 0.6720774736138997;
    msg.height = 0.3930675255091567;
    msg.x = 0.5117401660768663;
    msg.y = 0.11656776015510173;
    msg.z = 0.7451475028616331;
    msg.phi = 0.28037615642818126;
    msg.theta = 0.16664252290555825;
    msg.psi = 0.915290051337143;
    msg.u = 0.40762772598500285;
    msg.v = 0.852004001659773;
    msg.w = 0.5338988488425283;
    msg.p = 0.7357193435943616;
    msg.q = 0.9157161357476813;
    msg.r = 0.17526443017723292;
    msg.svx = 0.8883003065615724;
    msg.svy = 0.3894305477826515;
    msg.svz = 0.6503798112697109;

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
    msg.setTimeStamp(0.9996207044900615);
    msg.setSource(28827U);
    msg.setSourceEntity(140U);
    msg.setDestination(35460U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.5698786342628755;
    msg.lon = 0.42364960114954375;
    msg.height = 0.49360584803290974;
    msg.x = 0.857203926932514;
    msg.y = 0.1367363040789462;
    msg.z = 0.5358098301462106;
    msg.phi = 0.23827568755867368;
    msg.theta = 0.1895423128978615;
    msg.psi = 0.5500282114178026;
    msg.u = 0.7379733274276498;
    msg.v = 0.31565972633684214;
    msg.w = 0.7432551313639446;
    msg.p = 0.01471837120919317;
    msg.q = 0.9942533684702812;
    msg.r = 0.07259050972324477;
    msg.svx = 0.41930625212874995;
    msg.svy = 0.9920615051325757;
    msg.svz = 0.2873511258412673;

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
    msg.setTimeStamp(0.389768370182348);
    msg.setSource(21611U);
    msg.setSourceEntity(49U);
    msg.setDestination(41150U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.42549179433001116;
    msg.lon = 0.17477418105653153;
    msg.height = 0.24100434583923758;
    msg.x = 0.2602978225590027;
    msg.y = 0.9038284979591482;
    msg.z = 0.537970279697701;
    msg.phi = 0.4138670632280361;
    msg.theta = 0.6605766398163597;
    msg.psi = 0.3496847512794079;
    msg.u = 0.8815011701040191;
    msg.v = 0.3240273208466504;
    msg.w = 0.3679821934777271;
    msg.p = 0.5185098579284566;
    msg.q = 0.4514590467479006;
    msg.r = 0.20681505184202598;
    msg.svx = 0.016953765024929512;
    msg.svy = 0.9717988269994441;
    msg.svz = 0.3107230160620068;

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
    msg.setTimeStamp(0.37849697811176763);
    msg.setSource(37444U);
    msg.setSourceEntity(225U);
    msg.setDestination(1142U);
    msg.setDestinationEntity(246U);
    msg.op = 215U;
    msg.entities.assign("RSLUTZSIICFRPZJKTITWD");

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
    msg.setTimeStamp(0.24604499847620842);
    msg.setSource(42891U);
    msg.setSourceEntity(60U);
    msg.setDestination(46353U);
    msg.setDestinationEntity(31U);
    msg.op = 133U;
    msg.entities.assign("UMMTHCGUPSDZQJQGKDYAQVHEOKHFWZJKPILWMXTRARCRFUIDMXVUIDGKUVBGSXFIYRHMFISXOFJKNMTLTEJFHVJLJPHOMYOGSYZBAOCETQNWXRQDGPTJOYDKESQQOEKJBHMZXZXBBPN");

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
    msg.setTimeStamp(0.20519674135879962);
    msg.setSource(11237U);
    msg.setSourceEntity(228U);
    msg.setDestination(9997U);
    msg.setDestinationEntity(29U);
    msg.op = 145U;
    msg.entities.assign("BVCSZXZHIIKUBMPGDSCJZXLFONSNPOAQCMRBEUPUITREDMNALVCOKPBIFTEDMJQILFRGHNWYMCVAVKJLKDPROLKHXWVLGXRHXLTUJWUESQEKGWETKECIQMKODGHPSZUFMWYNIIRAQCEZBASHNCXPNMDHGFTWJJVYLCMO");

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
    msg.setTimeStamp(0.8525653986728589);
    msg.setSource(130U);
    msg.setSourceEntity(68U);
    msg.setDestination(757U);
    msg.setDestinationEntity(253U);
    msg.type = 108U;
    msg.speed = 32089U;
    const signed char tmp_msg_0[] = {102, -16, -84, 83, -26, -62, -37, -102, 122, -77, 71, 77, -74, -87, 69, 59, -93, 9, 14, 97, 73, 46, -31, 60, 84, -95, 29, 42, 80, -63, -127, -42, 117, 33, 67, 49, 40, 47, -94, -79, 66, -122, -111, -36, 124, 106, 58, -47, -21, 30, -91, -27, 11, -19, -81, -124, 43, -23, 98, 53, -102, -48, 115, -45, -117, -16, -95, 94, 114, -54, 72, -40, -109, -45, 75, 46, 59, -89};
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
    msg.setTimeStamp(0.8983319676309531);
    msg.setSource(35741U);
    msg.setSourceEntity(36U);
    msg.setDestination(52097U);
    msg.setDestinationEntity(165U);
    msg.type = 117U;
    msg.speed = 25821U;
    const signed char tmp_msg_0[] = {62, -40, 60, -112, -18, -40, -93, 2, 11, -83, -79, 28, -19, -27, -90, 39, 102, 24, 7, -4, 119, -23, 114, -100, -121, 119, -112, 98, 35, 92, -50, 121, -39, 50, -117, 24, -19, -50, 54, -94, -64, -50, 51, 42, 5, -118, 67, 81, 37, -116, -37, 101, -42};
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
    msg.setTimeStamp(0.9954246904153345);
    msg.setSource(57034U);
    msg.setSourceEntity(10U);
    msg.setDestination(59645U);
    msg.setDestinationEntity(251U);
    msg.type = 126U;
    msg.speed = 23649U;
    const signed char tmp_msg_0[] = {125, -111, 99, -73, 117, -31, 109, -12, 96, -127, -125, -125, 77, 69, 82, 108, -107, 93, 94, -106, 105, -52, 18, -65, -110, 118, 28, 26, 78, -56, -37, 2, 70, -3, 50, -90, -128, 5, 67, 92, 8, 78, -117, 73, 81, -94, 56, -92, -73, 101, -107, -78, 62, 87, -90, 13, 92, -74, 97, 49, 123, -89, -21, -122, -61, -43, -104, 34, -117, -94, -87, -115, -89, 100, -78, 23, -41, -64, 102, 0, -85, -3, 35, -90, 108, -47, 90, -101, -4, 84, 106, 49};
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
    msg.setTimeStamp(0.6069275205814807);
    msg.setSource(46906U);
    msg.setSourceEntity(229U);
    msg.setDestination(33131U);
    msg.setDestinationEntity(51U);
    msg.op = 202U;
    msg.tas2acc_pgain = 0.667898644490364;
    msg.bank2p_pgain = 0.2890021998441552;

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
    msg.setTimeStamp(0.10426673483136817);
    msg.setSource(17854U);
    msg.setSourceEntity(74U);
    msg.setDestination(56821U);
    msg.setDestinationEntity(150U);
    msg.op = 249U;
    msg.tas2acc_pgain = 0.6480260531097467;
    msg.bank2p_pgain = 0.15066624928165107;

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
    msg.setTimeStamp(0.25881099498817073);
    msg.setSource(64970U);
    msg.setSourceEntity(178U);
    msg.setDestination(30514U);
    msg.setDestinationEntity(160U);
    msg.op = 173U;
    msg.tas2acc_pgain = 0.8693302992116716;
    msg.bank2p_pgain = 0.5861143014367232;

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
    msg.setTimeStamp(0.024943294592358);
    msg.setSource(40896U);
    msg.setSourceEntity(185U);
    msg.setDestination(17127U);
    msg.setDestinationEntity(163U);
    msg.available = 1343465782U;
    msg.value = 175U;

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
    msg.setTimeStamp(0.13814220123772425);
    msg.setSource(29516U);
    msg.setSourceEntity(247U);
    msg.setDestination(22359U);
    msg.setDestinationEntity(234U);
    msg.available = 2516475950U;
    msg.value = 139U;

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
    msg.setTimeStamp(0.792665761080505);
    msg.setSource(33889U);
    msg.setSourceEntity(218U);
    msg.setDestination(55768U);
    msg.setDestinationEntity(162U);
    msg.available = 1827331547U;
    msg.value = 8U;

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
    msg.setTimeStamp(0.6344179165366355);
    msg.setSource(5594U);
    msg.setSourceEntity(201U);
    msg.setDestination(22863U);
    msg.setDestinationEntity(206U);
    msg.op = 26U;
    msg.snapshot.assign("YLHCQIXANQEOVHZMVWADCICYBVCLQRYURORQXTSPPZLDBMNKDWENAXEDPZIJFWCPJIKGYEYAZAMHAGRLEGZGRMSBNRLFJOHSTVFFMHDMXRDDMCJDAPBKYVKKTEIORKTUYFXTNGWUJVXGSSBUKROUQRHSIVCTONWSSXGKVJITJAZJOILBG");
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.32840334570670726;
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
    msg.setTimeStamp(0.22671004355869828);
    msg.setSource(39183U);
    msg.setSourceEntity(119U);
    msg.setDestination(33669U);
    msg.setDestinationEntity(232U);
    msg.op = 87U;
    msg.snapshot.assign("KUWPOIGTJDCYIIDXXOGFBFXAZPXZOYPDUGTRECROWYANGFPJFHRRYOQDFDKCYTBHZBNKEQRVALWFUSYSXTLEQZKXTYCIQTTLKHNZTEDPMBIPKFHJCJIEVLMIULIARNLVGBEHQZUZMGSSLJOJYOJYGDHCMSUCUUOKBCMJXSAWBBRWQDMIGNLCNTGMQNAPUJ");
    IMC::Frequency tmp_msg_0;
    tmp_msg_0.value = 0.7121712713718077;
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
    msg.setTimeStamp(0.012987790060838833);
    msg.setSource(12000U);
    msg.setSourceEntity(28U);
    msg.setDestination(45051U);
    msg.setDestinationEntity(97U);
    msg.op = 243U;
    msg.snapshot.assign("TAPNSGVRYLUVMZUFFILBMDJNONOEJTJIHTYLXDCLHSIBXJERYFQZXYKMYVPBKKAPYTCUKWJNLPPLZIMYPGERUBBWKCZETMNJQGJKUQWQHHEMOTUOWWSVXAXYZAAATFPCDRBWDWVDBOHDSQIZBGFUNSECECIOBGIXARFTZQCIQMCUSRZRACOGCMYQLMOFNQHPGJVM");
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.21254857095401503;
    tmp_msg_0.lon = 0.746953371868002;
    tmp_msg_0.eta = 121088634U;
    tmp_msg_0.duration = 24220U;
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
    msg.setTimeStamp(0.4307987633696513);
    msg.setSource(34163U);
    msg.setSourceEntity(31U);
    msg.setDestination(9858U);
    msg.setDestinationEntity(221U);
    msg.op = 238U;
    msg.name.assign("QGUPBOVXWYXHYHIATKUVKQXVXEJOZAVTFJRFZACPYURUUMOJYVBYXJALLVSEDWCPCBWZSTFBWIWCPPVJSURRGKISQMIUTFTRYFASSHIFKFNMMQMLLBCQNSGZGDONMSQHYPLZJMRHKJZLKELUXEQIEDYDPEBNREIGDAWVMLOUNHKOZNUQXSNRYZBTFBDDYONLKTCMQGOKXVHVIFJEDANTBRCMDHQAWXAAJZKJCPBRGSDLHWEPHTEGZPXICWGOIC");

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
    msg.setTimeStamp(0.3988695125137679);
    msg.setSource(31596U);
    msg.setSourceEntity(141U);
    msg.setDestination(23313U);
    msg.setDestinationEntity(159U);
    msg.op = 223U;
    msg.name.assign("LGDLFTMBTOFNWYXPELUZLWIEAISVRUZAGGWIDHTYRTXGNANDOMRQZSUPJQFJRCYDAGBIZNKZPHWPRLZDAOXVKPBCMLABARXNLTTQGKWSSXJAJGHQUHUMXIAJBNSCZEYULX");

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
    msg.setTimeStamp(0.6422225827500173);
    msg.setSource(38436U);
    msg.setSourceEntity(191U);
    msg.setDestination(16837U);
    msg.setDestinationEntity(246U);
    msg.op = 119U;
    msg.name.assign("DQKHLKWJURIDURSTPEEWLDDHNKORYCLAFYULEGAAVFMHJXLIPNNIDVKEGJQHOAJZLXZKXXGKROCQCWWSYHSSMGVCBVNTJBIGOUOENZVIPBWEKVNXTENBCZOHEMLRBJAYWPWWAHZYFOXGJ");

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
    msg.setTimeStamp(0.5124008598541131);
    msg.setSource(18129U);
    msg.setSourceEntity(66U);
    msg.setDestination(44166U);
    msg.setDestinationEntity(216U);
    msg.type = 232U;
    msg.htime = 0.7930158719008755;
    msg.context.assign("XINPGPNXORWGJPIZGXLKUBWDWMVAJRTQVBRASUTIJQYVGXHTKCOVOYEIEYNQAZKHBSJETKMVTCHJVEUDUOAEIEMTFGWFSYNZOUQJGOPDRQQFNADFITRRGSWLSUDHJNRIXHQLBLOLUEBHAKHWYOFMQKNYCG");
    msg.text.assign("DPSPBLQZSNXCJUJKYVIAMDYWWOBDYJJHYMDQEVNCFPNGZEGTSPFILWTMJXOURUJCBNEVFMOJMPGJMDYQGEUFIVTIAVWGQKHAYNIJRHWIGSCLLZOQPLRHZFOAKCEOBASSHCAQXAPKABYWYXNBSRWTIQULOV");

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
    msg.setTimeStamp(0.41570852929849256);
    msg.setSource(50751U);
    msg.setSourceEntity(182U);
    msg.setDestination(26464U);
    msg.setDestinationEntity(86U);
    msg.type = 254U;
    msg.htime = 0.29704352392710087;
    msg.context.assign("TNTVWMFEIBHLJZHILGGNVQSZSLCSOVFEMCSKJVMXVAKONBIASQTVHCSFXFWFIPKZRUQPMVKCQXRRRUDTPYKNZYXCWBQUQTPEQBZFFDIGWGYMOIZSJIDJWDARLUOIFJXBLNDBAYAEBLXHLUMYPOXXDTMJDARNGFUGWE");
    msg.text.assign("EZSNFGLAUTQCKBFVBVHAWYLBPKOVEQZIORBLBTWWPGQLLBLFTVHGQMGXANTJKBYXWWHVVHVWIZXQFOSDCGUNBYYTWYCZMLXZODJRPQTPISDTJWEUSOCADVAGZTRMJXFPLFJHMGJOIPARBYC");

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
    msg.setTimeStamp(0.7730439673564841);
    msg.setSource(5985U);
    msg.setSourceEntity(27U);
    msg.setDestination(39451U);
    msg.setDestinationEntity(254U);
    msg.type = 216U;
    msg.htime = 0.8119374234464428;
    msg.context.assign("WLTUHRSHOFWUJVOCNKOYDYIPLJKRXFLKWUAPHQIGMMWBOSVXSVGFBDHIDEKFSJHNGXNEHKIBLVUJRIPUENYQQZMIJROFPFFGGUYEBSOWVEQRWARLQKJPUWVYTJCNFJRICPHKYLSTLAAMTCMEERVZGHDCBXZMXHDMCMBYIZBNYB");
    msg.text.assign("IRTCOCLNZJICQJIQVITPQYNPYMNGOAAQGFJUAOUBMTOSBFETAITJKWAUMFCCLULVLHXSSAMERCSXWJDXKLOEWBOINEUCEUMGYIYWBHYGCZHFFTQQPHCMVOOVADNFSMUCBKXOYPSDZYKYBPTLPNWFXZXPJ");

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
    msg.setTimeStamp(0.31214413181563927);
    msg.setSource(2854U);
    msg.setSourceEntity(9U);
    msg.setDestination(60490U);
    msg.setDestinationEntity(87U);
    msg.command = 219U;
    msg.htime = 0.6302781998083355;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 182U;
    tmp_msg_0.htime = 0.4962571807043684;
    tmp_msg_0.context.assign("GAOHLGVPEBFXRQHIZUAAEROCKMCGGXQZRQQHRZUSJALIPBTSVAFIIDIWEOBJYTEVYLJGDQAHBWGWIUYVZNVYXQXPHGFYHTLKWNGSLRYHJUFSIKZUSKVIMEJKBXMBOYVMCPRNOHBSSDWXXCOAUNBBIITAHETMXFCJDLPUZZOWCMCUXNULEPNNALAFMBWREFVQEHQPQDGCKKSMKEFCDSOKNRNTRWTZ");
    tmp_msg_0.text.assign("ZTZMPSKNOVRANHOITJVLFQBDGITYPAPIIQZTXKBRSSZFWWBENUSGVTYUNYAPUACHBVGKECPUWORNMFPQIMFWEAMYXERDHLJARYUWPFWKXHRHHCTKXXBQL");
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
    msg.setTimeStamp(0.3051517340240345);
    msg.setSource(34096U);
    msg.setSourceEntity(39U);
    msg.setDestination(51906U);
    msg.setDestinationEntity(241U);
    msg.command = 151U;
    msg.htime = 0.1879480706223905;

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
    msg.setTimeStamp(0.6942143587995738);
    msg.setSource(27390U);
    msg.setSourceEntity(112U);
    msg.setDestination(44492U);
    msg.setDestinationEntity(248U);
    msg.command = 245U;
    msg.htime = 0.23435678650798186;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 251U;
    tmp_msg_0.htime = 0.2213576249159359;
    tmp_msg_0.context.assign("INBXYWVCMFKWOTCGMEKRUXFPWSTIGGQPDVPFLLOTWYDLPRHFENNNXIRCENQASTPZSGAHUOKGDWUSPXEYALGOBFSQPVMPDYKAKHQXXUS");
    tmp_msg_0.text.assign("CRJTBXJPUY");
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
    msg.setTimeStamp(0.3698975274519797);
    msg.setSource(18498U);
    msg.setSourceEntity(48U);
    msg.setDestination(1541U);
    msg.setDestinationEntity(48U);
    msg.op = 58U;
    msg.file.assign("NFCFMZBRTWTBULARPKVCZPNQEKQJHHEUQLBLRMRAWEIOLWKTKATFMXQBYZFUYTAGULMRKERJBOCHXXGBEAXAOPRJODQUMMKAWQKQVKCADITIJHGCZSSQNJPODZBWJHYVV");

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
    msg.setTimeStamp(0.6068349375754779);
    msg.setSource(20274U);
    msg.setSourceEntity(91U);
    msg.setDestination(8113U);
    msg.setDestinationEntity(109U);
    msg.op = 25U;
    msg.file.assign("SXZFBQNLCQHKZLHGJEBXIAUESPORDOWYVQIIJKXVVIFEBPOUTNCHOGVPKTGYTHXCYRFRDUHNPJBMFPDMZUMLEWEEJCCXAWHQLMYZUDFBGIXXJQBVRIMDPPVMMWQKK");

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
    msg.setTimeStamp(0.6423269565860475);
    msg.setSource(38632U);
    msg.setSourceEntity(248U);
    msg.setDestination(26378U);
    msg.setDestinationEntity(88U);
    msg.op = 159U;
    msg.file.assign("KUHEPLPJUJQKOFAZHAHQMLMRGDVDIXGYJCAETJESXKWLEOUNZSRRPORRCTTFYRINXPCNTNKAUVBGRMFUYDSWDGBFOCTZNVKAIIWRIQUQBAAFJVEBHMMUIVNDHACKIDBQWSFXEEUECYPGXMJWVFXBLHOCOALUZGXGSQTBVYO");

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
    msg.setTimeStamp(0.09279312621378799);
    msg.setSource(31570U);
    msg.setSourceEntity(105U);
    msg.setDestination(14197U);
    msg.setDestinationEntity(25U);
    msg.op = 200U;
    msg.clock = 0.7438374916493355;
    msg.tz = 117;

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
    msg.setTimeStamp(0.09943205881880901);
    msg.setSource(25328U);
    msg.setSourceEntity(126U);
    msg.setDestination(7128U);
    msg.setDestinationEntity(70U);
    msg.op = 233U;
    msg.clock = 0.859537851818716;
    msg.tz = -52;

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
    msg.setTimeStamp(0.016100642141016475);
    msg.setSource(41508U);
    msg.setSourceEntity(81U);
    msg.setDestination(42625U);
    msg.setDestinationEntity(91U);
    msg.op = 27U;
    msg.clock = 0.024825363493952812;
    msg.tz = -16;

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
    msg.setTimeStamp(0.8675829447425636);
    msg.setSource(35168U);
    msg.setSourceEntity(30U);
    msg.setDestination(35045U);
    msg.setDestinationEntity(228U);
    msg.conductivity = 0.1035084616822578;
    msg.temperature = 0.3948865442036713;
    msg.depth = 0.6620448165935721;

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
    msg.setTimeStamp(0.5911875542354517);
    msg.setSource(31840U);
    msg.setSourceEntity(44U);
    msg.setDestination(51675U);
    msg.setDestinationEntity(109U);
    msg.conductivity = 0.08040334573544439;
    msg.temperature = 0.13322079918236307;
    msg.depth = 0.5746849486884674;

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
    msg.setTimeStamp(0.746901698269235);
    msg.setSource(18063U);
    msg.setSourceEntity(188U);
    msg.setDestination(6516U);
    msg.setDestinationEntity(189U);
    msg.conductivity = 0.1791549910431155;
    msg.temperature = 0.13676047509219202;
    msg.depth = 0.2574821207128992;

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
    msg.setTimeStamp(0.32681305873815303);
    msg.setSource(65443U);
    msg.setSourceEntity(102U);
    msg.setDestination(24834U);
    msg.setDestinationEntity(157U);
    msg.altitude = 0.40306226695212366;
    msg.roll = 36651U;
    msg.pitch = 60165U;
    msg.yaw = 33592U;
    msg.speed = -13524;

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
    msg.setTimeStamp(0.21807029234568076);
    msg.setSource(61621U);
    msg.setSourceEntity(125U);
    msg.setDestination(22381U);
    msg.setDestinationEntity(190U);
    msg.altitude = 0.7418087832502431;
    msg.roll = 13258U;
    msg.pitch = 22510U;
    msg.yaw = 32863U;
    msg.speed = -29448;

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
    msg.setTimeStamp(0.8245159813332176);
    msg.setSource(29958U);
    msg.setSourceEntity(101U);
    msg.setDestination(64598U);
    msg.setDestinationEntity(84U);
    msg.altitude = 0.3285040329137058;
    msg.roll = 28844U;
    msg.pitch = 33715U;
    msg.yaw = 39671U;
    msg.speed = 32127;

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
    msg.setTimeStamp(0.3580534940918606);
    msg.setSource(15042U);
    msg.setSourceEntity(155U);
    msg.setDestination(11363U);
    msg.setDestinationEntity(189U);
    msg.altitude = 0.21682852996172552;
    msg.width = 0.8361290105589114;
    msg.length = 0.27209524513221583;
    msg.bearing = 0.5395863037902868;
    msg.pxl = -13056;
    msg.encoding = 175U;
    const signed char tmp_msg_0[] = {-78, 77, 62, -26, 88, -46, -89, 88, 47, 83, -101, -6, -83, -30, 59, -55, -61, 118, -16, -40, 14, -2, 56, -122, -110, 5, -113, 90, 51, 89, -50, 25, 65, -13, -62, -20, 35, -112, 104, 120, -100, -36, 43, -20, -81, -46, 4, 70, -11, -105, 93, -21, -5, -7, -24, 58, -48, 51, 105, 125};
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
    msg.setTimeStamp(0.09284440914853809);
    msg.setSource(12852U);
    msg.setSourceEntity(149U);
    msg.setDestination(39805U);
    msg.setDestinationEntity(203U);
    msg.altitude = 0.3902067902827261;
    msg.width = 0.39988574516018405;
    msg.length = 0.8367288581011287;
    msg.bearing = 0.6201251242254436;
    msg.pxl = -6031;
    msg.encoding = 65U;
    const signed char tmp_msg_0[] = {44, 25, 13, 54, 88, 122, -40, 55, 81, 3, -31, -12, 102, 108, -75, 96, -122, 64, 62, -55, -56, -60, 43, 117, -40, 24, 121, 31, 11, 84, -120, -70, 50, -55, -102, 27, -83, 26, -39, -120, -106, 12, 53, -11, -63, 98, -119, -44, -25, 20, -103, -44, 123, -61, 18, 48, -9, -106, 73, -11, -123, 99, 104, -77, -83, -120, -97, -31, 89, -40, 46, 118, -30, 69, 22, 23, -21, 16, 76, 78, 85, 47, 123, -107, -102, 7, -108, 112, 36, -34, 3, -31, 120, 48, -9, 50, -101, 26, -1, 81, 113, -67, -66, -41, 47, -2, 41, 58, -76, -26, -77, 94, -43, 113, 5, -2, 72, -113, -16, -79, -125, 68, 52, -106, 106, -128, 19, -18, 88};
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
    msg.setTimeStamp(0.8134470615354662);
    msg.setSource(26523U);
    msg.setSourceEntity(35U);
    msg.setDestination(60569U);
    msg.setDestinationEntity(146U);
    msg.altitude = 0.10042391396105954;
    msg.width = 0.7117223531841297;
    msg.length = 0.5971084333627419;
    msg.bearing = 0.8351786728994717;
    msg.pxl = -3137;
    msg.encoding = 28U;
    const signed char tmp_msg_0[] = {-27, 45, 94, -14, -56, -89, -126, 50, -85, 83, 56, 106, -113, 121, 24, 116, -5, -47, 64, 76, 97, 22, 104, 45, 57, 92, -20, 101, -82, -103, -72, 89, 33, -17, 116, 91, -113, 68, 34, -16, -88, 47, 32, -116, -39, -23, 75, 17, -71, 41, -109, -31, -113, 90, -104, -57, 81, 59, -90, 10, 65, 15, 108, 36, 30, 113, -4, 16, 38, -113, -6, 32, -88, 81, -32, -121, -65, 124, -40, 2, 43, -14, -33, 116, -6, 110, 118, 18, -95, 28, -94, -23, -85, -2, -32, -93, -35, 30, -59, -21, -126, 76, 6, -62, -37, -70, -11, 103, 113, -22, 85, 4, 73, -69, -120, 89, 30, 49, -61, -52, -111, -63, -126, -9, 58, 15, 42, -103, 71, -42, -106, 86, -124, 75, -99, 119, 63, 96, -63, 45, -31, 49, -123, -111, 107, 92, -93, 39, 31, -35, 22, -34, 85, 113, 20, -34, 113, 81};
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
    msg.setTimeStamp(0.07050036066243837);
    msg.setSource(55709U);
    msg.setSourceEntity(202U);
    msg.setDestination(18361U);
    msg.setDestinationEntity(229U);
    msg.text.assign("REYVCHTCAWRKRVFNZRNKEQAZKKEZMPZMOXNQYFOIPDEETQVNUGZLVJYZGFUAKELVWHCQIKYILWFSLIIWASOMSZQFKDMTCOB");
    msg.type = 50U;

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
    msg.setTimeStamp(0.7110048085258357);
    msg.setSource(20809U);
    msg.setSourceEntity(51U);
    msg.setDestination(7115U);
    msg.setDestinationEntity(114U);
    msg.text.assign("AZUDSREJBBQOJIMUXZDDMYVITHPGQNWUYWJXFSWHUDYEPFZYYPPLHPBFSTACQOVXJSDYCJEVKHQWW");
    msg.type = 41U;

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
    msg.setTimeStamp(0.017493038369939207);
    msg.setSource(50349U);
    msg.setSourceEntity(180U);
    msg.setDestination(7804U);
    msg.setDestinationEntity(249U);
    msg.text.assign("DSKVBBEAOPVHBUUPYDUQJIKRZPYWLMBPSBFVSQHLTWKZHJNDDUXJYXTANRBMGAHDCKVZODACKORLFLPHFIJFXAOWCHNOFKHQJDAWGGZAILJQLVRSCTVPIVCOLDYUJETKCNMXMIQOWGTLGTKURTILWQETNDAPQONEESSXFMRJFRUXJQVHWQRAYBSFSNEXZCGBXHBJKORFHISGAYEM");
    msg.type = 48U;

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
    msg.setTimeStamp(0.9583038611328228);
    msg.setSource(16799U);
    msg.setSourceEntity(230U);
    msg.setDestination(40783U);
    msg.setDestinationEntity(40U);
    msg.parameter = 120U;
    msg.numsamples = 157U;
    msg.lat = 0.2270083498690857;
    msg.lon = 0.24820353062921907;

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
    msg.setTimeStamp(0.3676910980670608);
    msg.setSource(29306U);
    msg.setSourceEntity(166U);
    msg.setDestination(45968U);
    msg.setDestinationEntity(73U);
    msg.parameter = 180U;
    msg.numsamples = 156U;
    msg.lat = 0.40702477293311856;
    msg.lon = 0.3828226585737806;

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
    msg.setTimeStamp(0.8905430663023165);
    msg.setSource(21456U);
    msg.setSourceEntity(94U);
    msg.setDestination(36029U);
    msg.setDestinationEntity(70U);
    msg.parameter = 65U;
    msg.numsamples = 4U;
    msg.lat = 0.6045267068126186;
    msg.lon = 0.8383675275693196;

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
    msg.setTimeStamp(0.22821781675610464);
    msg.setSource(53727U);
    msg.setSourceEntity(180U);
    msg.setDestination(17001U);
    msg.setDestinationEntity(186U);
    msg.depth = 22338U;
    msg.avg = 0.03795990582514208;

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
    msg.setTimeStamp(0.8571752950908984);
    msg.setSource(14912U);
    msg.setSourceEntity(122U);
    msg.setDestination(27222U);
    msg.setDestinationEntity(242U);
    msg.depth = 12131U;
    msg.avg = 0.6186262614692071;

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
    msg.setTimeStamp(0.7516511481351625);
    msg.setSource(29459U);
    msg.setSourceEntity(217U);
    msg.setDestination(460U);
    msg.setDestinationEntity(65U);
    msg.depth = 30197U;
    msg.avg = 0.9387001241983906;

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
    msg.setTimeStamp(0.6325979624177437);
    msg.setSource(2153U);
    msg.setSourceEntity(94U);
    msg.setDestination(21160U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.5211338353604115);
    msg.setSource(30808U);
    msg.setSourceEntity(106U);
    msg.setDestination(11045U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.13748474664223276);
    msg.setSource(43117U);
    msg.setSourceEntity(33U);
    msg.setDestination(2504U);
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
    msg.setTimeStamp(0.9662514442448208);
    msg.setSource(14991U);
    msg.setSourceEntity(20U);
    msg.setDestination(11962U);
    msg.setDestinationEntity(170U);
    msg.sys_name.assign("RFNZDMBBDILIDYEFWTEKYUMBRGXTXFVHFLCRULSYSOGMVWCBSEIIIJCPWSHICJJJONGRDIJFTMCHYMCNCWFXLEHDEUVAABPKYJCSSHUPZWGKBZTERUXSNVEBHPVRONTVCQKLINO");
    msg.sys_type = 8U;
    msg.owner = 39196U;
    msg.lat = 0.9416672910481646;
    msg.lon = 0.6544698401804768;
    msg.height = 0.3342090753822976;
    msg.services.assign("KXVVXKNMRDAWXOZZAAVPYCFSD");

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
    msg.setTimeStamp(0.4176644186403887);
    msg.setSource(13384U);
    msg.setSourceEntity(226U);
    msg.setDestination(46667U);
    msg.setDestinationEntity(188U);
    msg.sys_name.assign("TRCNEKDNJKZGPCECZPHUZCOIOSNJKGEKQJIDYHM");
    msg.sys_type = 230U;
    msg.owner = 1317U;
    msg.lat = 0.743709391018355;
    msg.lon = 0.5781968539736448;
    msg.height = 0.3387697035355334;
    msg.services.assign("POJPJSLSWIZPNSTOTDLPESBAVFYOBCRPROJXBDCDTH");

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
    msg.setTimeStamp(0.08168803071794661);
    msg.setSource(11879U);
    msg.setSourceEntity(34U);
    msg.setDestination(64383U);
    msg.setDestinationEntity(152U);
    msg.sys_name.assign("MHSADXPIIATJLRMXZAZEODXWNVSCDPRLXMVWSSJZTQVBNUPTNSTKQQBAVBIUFNNCOJLGTSQLTTVYIWMNGDOIFSSFUXWLXBEYRBWGBJAPUGHAPKKQDHUOUWTOZORMOEXIJFYCMKGOGICVVDPEFQETCCXVKHPKCEBOZYUHEWXXZFGRGFBPYHDPYCUWNJEIFZUEJHSARLAPRL");
    msg.sys_type = 214U;
    msg.owner = 16174U;
    msg.lat = 0.4313262035828326;
    msg.lon = 0.35358287804123756;
    msg.height = 0.3212514907938291;
    msg.services.assign("MXQBBVYMMICXHRTDGRAODNUCLFTFUJWAXKSTKHCIPIEBXMGIEZKUPMUALGZCVLVUDZGOJYDHVRDWXJXZHEGVNNTAIHMPVNTBUGQUDXZJPZHJMCWQYCYOTFWMISAFOQHSO");

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
    msg.setTimeStamp(0.16444206662103966);
    msg.setSource(48640U);
    msg.setSourceEntity(76U);
    msg.setDestination(27967U);
    msg.setDestinationEntity(41U);
    msg.service.assign("KMPEIRMJYTGWZOLAVFSFIKYZXNAHRTCFBPHTEEZZLZECLIHBVYWGXXSSPREBZIVEVLMVKCACVGLTMGTDNUEMXFOCMQFPTYSHPBUWKRFOSNWIXFJDYFBHAZYULJDAWAUSVLRTWOCDSRYVNEZEBGDBSUGQLWNJHRIDPATKJVIFPPLBUQJAOHXXAURRKQUNBYFMDTHJTQUOWILGJDAXXGDHBPQGMXNDCWMNOJHIGQKIYW");
    msg.service_type = 203U;

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
    msg.setTimeStamp(0.44057059364124795);
    msg.setSource(52996U);
    msg.setSourceEntity(22U);
    msg.setDestination(65079U);
    msg.setDestinationEntity(20U);
    msg.service.assign("TXDOKODJHEHBQEMSDCVPVVNISMPRUFOTFAPVBSKALRTVUCOBXOQWAGJJEQZBZKRJRNWDVQBTIQFDCOHQHGKALFFXISTGDHMPYRKPXXJMADGOUF");
    msg.service_type = 58U;

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
    msg.setTimeStamp(0.24074799290591486);
    msg.setSource(19653U);
    msg.setSourceEntity(248U);
    msg.setDestination(43803U);
    msg.setDestinationEntity(72U);
    msg.service.assign("VRQIWZMSPKTZGGIUFGXICGQJDNFHDKNRYCJCONYBPEDNMLXVXVKSWIODUAMTQZPPACLAOHIMBEZHMYZDYUOCATNPSQBIHEGVGEBEJWBLPMKFAZAWMKJCWXTDIKCNXBPXKOWFEYCTREFRQHJFLSZDMYTMAJJRFTCYVURLLNIMVFQRGBRPVSOAXPBYNDHWUFRNSUWQYTVUOWVRGA");
    msg.service_type = 130U;

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
    msg.setTimeStamp(0.5859153716252927);
    msg.setSource(34197U);
    msg.setSourceEntity(171U);
    msg.setDestination(61934U);
    msg.setDestinationEntity(147U);
    msg.value = 0.3125841270173716;

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
    msg.setTimeStamp(0.5425476462486911);
    msg.setSource(61338U);
    msg.setSourceEntity(125U);
    msg.setDestination(26260U);
    msg.setDestinationEntity(13U);
    msg.value = 0.39976619849922856;

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
    msg.setTimeStamp(0.6735835978791281);
    msg.setSource(60265U);
    msg.setSourceEntity(23U);
    msg.setDestination(7073U);
    msg.setDestinationEntity(55U);
    msg.value = 0.5858651807531674;

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
    msg.setTimeStamp(0.8533974804962042);
    msg.setSource(23637U);
    msg.setSourceEntity(215U);
    msg.setDestination(34040U);
    msg.setDestinationEntity(219U);
    msg.value = 0.7300235191116154;

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
    msg.setTimeStamp(0.46165242167910947);
    msg.setSource(44217U);
    msg.setSourceEntity(189U);
    msg.setDestination(42598U);
    msg.setDestinationEntity(0U);
    msg.value = 0.996114133007847;

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
    msg.setTimeStamp(0.6490815571362026);
    msg.setSource(18296U);
    msg.setSourceEntity(95U);
    msg.setDestination(6788U);
    msg.setDestinationEntity(209U);
    msg.value = 0.5551058954613691;

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
    msg.setTimeStamp(0.9941810316401126);
    msg.setSource(26680U);
    msg.setSourceEntity(91U);
    msg.setDestination(52328U);
    msg.setDestinationEntity(41U);
    msg.value = 0.3925801632839805;

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
    msg.setTimeStamp(0.3788664521512468);
    msg.setSource(57508U);
    msg.setSourceEntity(4U);
    msg.setDestination(32622U);
    msg.setDestinationEntity(180U);
    msg.value = 0.06982218526590467;

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
    msg.setTimeStamp(0.6631421622269582);
    msg.setSource(33460U);
    msg.setSourceEntity(146U);
    msg.setDestination(38276U);
    msg.setDestinationEntity(72U);
    msg.value = 0.30043944000671385;

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
    msg.setTimeStamp(0.4443651202753449);
    msg.setSource(7901U);
    msg.setSourceEntity(88U);
    msg.setDestination(52515U);
    msg.setDestinationEntity(231U);
    msg.number.assign("FKUXREYQNTFJEERBWRSIFMFYBHNASWMEIITDJPFBCJWGRUVLJQYAVYCULWPHSQNSAHXORGMHACSMWALKPOHSTKSRVJMWDAXHZFBJWAIQLEZOJTDECDLDAYMWIEKZYAQCBGURXFHWVOBPPCGPPSISNQPLUOOK");
    msg.timeout = 56744U;
    msg.contents.assign("YAIOHZZNJHWXGTTGTKJJDXUKIXNNVFCZVAFHYKRDODUKQIDCZDICNILBB");

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
    msg.setTimeStamp(0.8153598199811064);
    msg.setSource(29478U);
    msg.setSourceEntity(204U);
    msg.setDestination(8286U);
    msg.setDestinationEntity(21U);
    msg.number.assign("EOVEBTWZUNOUFHRDKDVWLGKYCNJRHQPKWMPJKZZIBILEQONLWIQBHBICTOYHWVSRAVJLXBMUFGJTQTMJSOFEVCCQUFDCZFMPKAXSYHHJJIGXXMOQNAUGWCARKQFUIRJBSXHXGFHGVOISOULHCRTXYDEWIZXRQPMCPBEEKTAVKLPFPNBZVVWPOPYUEDYWAA");
    msg.timeout = 56805U;
    msg.contents.assign("WBQRIUXAPKVIPTFDCXWOIAHJBYRFAROHPPVNXYAQYTTJESVCMJNKMESCG");

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
    msg.setTimeStamp(0.5590712886262642);
    msg.setSource(10545U);
    msg.setSourceEntity(236U);
    msg.setDestination(44893U);
    msg.setDestinationEntity(126U);
    msg.number.assign("CFLLXSMBEVJWWARSIUFXSBSLORYYYGTJCBNLRMRSMGXIZYEUJNGYHWUXXJRHNKQRIGXFUJCZOWEVQHVSPNEZINBKTCYPZIAHRDFUJXXPEKQKI");
    msg.timeout = 50177U;
    msg.contents.assign("CQNYBAIWTSFLYFALYCKFOFMJGSAWDTYUOIMMVNBMIQSGQSGXLERHTFAPAHFKDQXXBNHOZPJZWLCPXWMWKHHWNR");

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
    msg.setTimeStamp(0.46253078739176856);
    msg.setSource(12108U);
    msg.setSourceEntity(115U);
    msg.setDestination(38793U);
    msg.setDestinationEntity(117U);
    msg.seq = 2019094368U;
    msg.destination.assign("DCQTOMAXSADHDNXWIYRGBGNECWBLSUWVLKFIEVHZI");
    msg.timeout = 34599U;
    const signed char tmp_msg_0[] = {105, 59, 109, 26, 88, 100, 18, -29, 42, 84, -29, -8, -49, -55, 124, -96, -42, -30, -35, -35, -110, -81, -63, -24, -107, 85, -24, 69, -97, 113, -30};
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
    msg.setTimeStamp(0.5712783206142695);
    msg.setSource(18002U);
    msg.setSourceEntity(163U);
    msg.setDestination(41172U);
    msg.setDestinationEntity(250U);
    msg.seq = 1509540082U;
    msg.destination.assign("TZQKKEGAMXPXRENJLWTTVHIONZJQJKNADGVWVKMNFJSMDNSAEKAVXKUUOUFRHPLOAPEAWFZULYFHMZVAXCIJGLXLQXRRBOFYJIRVSIJQHWIZUXCYDADOFDECRYQBWLMWESJACFSNBYQMFYKLGPFWWZNDTRMZRXUPPSUOBAORWGJHX");
    msg.timeout = 34789U;
    const signed char tmp_msg_0[] = {-72, -77, 0, -57, -126, 112, -43, 81, 103, 87, -112, 61, 61, -89, -64, 58, 12, 33, -72, 6, 126, 47, -110, 54, -61, -74, 59, 100, 52, -83, 36, -19, 56, 100, 113, 79, 40, -83, 66, -69, -39, -59, -1, 14, 108, -7, -93, -95, -126, -21, -40, 80, -25, 6, -37, -72, -102, 123, -8, -78, -50, -55, -119, -63, -9, -58, -2, 54, 102, -29, 25, -32, 121, 98, -30, -68, 35, 73, 54, 36, 88, 20, 71, -108, -112, 5, -57, -43, 105, -81, -29, -66, 116, -38, 21, 63, -42, 11, 7, -42, -115, -114, -41, -17, -41, -61, -120, 15, -52, -80, 22, -118, -23, -74, -5, 125, 110, -72, -4, -12, 112, -103, -70, 98, -33, -99, -49, -10, -68, -67, -1, 29, -23, 28, -43, 45, -1, 48, 52, -102, 9, -42, 124, -5, -58, 55, 27, -23, -118, 39, -3, 108, 82, 53, 40, -82, -92, -52, -23, -24, -59, -126, -44, -48, 112, 43, 61, -32, -15, -42, 73, -48, 13, -20, 4, 52, -82, 12, 48, 6, 86, 117, -54, 107, -2};
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
    msg.setTimeStamp(0.8198936670900774);
    msg.setSource(12304U);
    msg.setSourceEntity(111U);
    msg.setDestination(8381U);
    msg.setDestinationEntity(132U);
    msg.seq = 277568081U;
    msg.destination.assign("FONEHFCTOIMXPGVAYFUOXLVEYKENLNWACXANEYPPUSTAQCBXRFNJHZAAJHXTDIGQUVSLYZJVGQGRCAANIDSTBLZHJSFDKELLORCZEJDTWQXD");
    msg.timeout = 31816U;
    const signed char tmp_msg_0[] = {-3, -91, -120, -42, 116, 71, -10, -107, -25, -66, 25, 22, 86, 18, 21, 122, 100, -125, -68, 101, -109, -52, -19, -81, -43, -118, -54, -10, -40, 48, -70, 79, -56, -43, -73, 1, -69, 1, 123, -122, -18, 23, 27, -20, 111, -124, -108, -85, 38, 121};
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
    msg.setTimeStamp(0.6273931561628942);
    msg.setSource(15333U);
    msg.setSourceEntity(80U);
    msg.setDestination(57029U);
    msg.setDestinationEntity(171U);
    msg.source.assign("RTEZKQVSTSDYFAZJPARUPWLUIYJJFEVCVKMEWDPUBPNDKTASVKRVQJEKICQCWGPATCCYHFSBNXLNNFTZDMJIAODBHYLHHOFUCZWKQMZOIVCYLIEQFKTVQNOHBMGEQQRIBBTYJKMAJYWYMZBHXUAGO");
    const signed char tmp_msg_0[] = {11, -80, -102, -32, -70, -38, 81, -57, 99, 99, -23, 118, 85, -75, 36, 1, -107, 15, 30, 108, -87, 8, -76, -81, 61, 22, 35, -50, -41, -111, 112, -45, -22, 58, 66, 76, -18, 8, 118, -8, -103, 42, -17, 37, -1, -75, 18, -112, 111, -110, -41, -121, 82, 109, 89, -100, 4, 116, -49, 54, -26, 19, -56, 75, 16, 52, -46, 11, 60, -89, 66, 109, -60, 68, -86, 53, 122, 6, 76, 16, 78, 48, -64, -60, 51, 89, 85, -26, -92, 121, -104, -96, -92, 101, 84, 10, 97, -1, 114, 88, -59, 37, 64, -58, -88, -128, -111, -4, -75, 105, -51, 87, -117, 93, 110, -118, 50, 56, -29, -23, -86, -35, 122, -8, -16, -118, 45, -7, 89, -10, -66, -11, 18, -12, 66, -14, 23, -120, 59, 42, 117, 126, -108, -58, 11, 64, 6, 26, -61, -37, -51, 40, -28, 27, 63, 58, 0, 27, -67, -65, 10, -92, -57, 77, -36, 72, -119, 96, -22, 72, 64, 37, -96, 66, -44, -74, 61, 31, -123, -24, 78, -27, 42, -96, -78, -27, 28, -25, 40, -115, -14, -51, -45, 23, -13, 77, 71, 100, 16, 24, 60, -95, -99, 83, 108, 95, 44, -27, 114, 115, 9, -13, -17, 32, -61, 74, -9, 15, 49, -127, -1, 44, -22, -118, 107, 105, -125, -70, -64, -13, 17, -92, -126, -104, -90, 70, 32, 102, -3, -19, 23, 4, 88, 119, -20, 112};
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
    msg.setTimeStamp(0.9980666055060845);
    msg.setSource(30821U);
    msg.setSourceEntity(84U);
    msg.setDestination(12799U);
    msg.setDestinationEntity(114U);
    msg.source.assign("BLWZTNNOWXORIESYODFWL");
    const signed char tmp_msg_0[] = {-80, 54, 93, -66, -124, 93, 18, 116, -63, 41, 24, 82, 107, -16, 47, -8, -77, -99, -102, 68, -54, -103, -123, 77, 41, -94, 65, -102, 40, -102, -111, -22, -96, 105, 119, 57, 69, -10, 81, 19, 11, -80, -126, -15, 18, -66, 19, -15, -36, -95, 110, -60, 100, -122, 111, 50, -69, -37, -107, 45, -22, 51, 24, -45, -23, 44, -98, 101, 86, 118, -109, 53, -49, 104, 0, 15, -49, -115, -126, 44, -98, -46, -83, 15, 122, 19, -35, -92, -11, 32, 44, -102, 16, 68, 115, -51, -117, 75, 109, 7, 107, 94, -39, -56, -102, 59, -89, -70, 47, 78, 5, 113, -98, -60, -71, 114, 60, 16, -62, 45, -66, -47, -105, -82, 78, -11, -38, -46, -11, -59, 82, -16, -18, -58, -66, 63, 16, -111, -94, -91, -82, -90, -87, 45, 50, 100, 110, 105, -39, 40, -54, 68, 91, -50, -95, 120, -85, 44, -37, -115, -95, -64, 42, 24, 108, 125, 54, -85, 77, 67, -90, 70, -124, 42, -100, 73, -56, 28, -67, 27, -114, 102, 53, -122, -13, 37, 49, -34, 98, 75, -40, -31, -119, -114, 100, -62, -18, 57, 98, -111, -117, 79, 76, 63, 106, -19, 59, 41, -10, -108, -61, -64, -70, -89, 40, 4, 98, 68, 69, -116, -73, -14, -7, -56, -46, -65, -8};
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
    msg.setTimeStamp(0.8545626867565127);
    msg.setSource(40325U);
    msg.setSourceEntity(4U);
    msg.setDestination(17968U);
    msg.setDestinationEntity(29U);
    msg.source.assign("UWQZNZYBUROMUXHMTHDYWIZPDMNLMJXRKSPHGDDQXCAFABXHVMEHIVPRGWBIJZMPARICGFSOUMUHTXPHRSOJRNYKMKGNSEMLDPJKESJJRHONVGAZCYTHISFCCCKNUCYVNCQYUSQSFKMKOBEGRLJBZJZVBWNYZAVLOQATKSOVYAXEYFXQOLTEDBFEEQLIVJLEXOWTOBFPFZDWTKGPPIYWQXUWETNFNDHWUGIQCIDGVQLRBCT");
    const signed char tmp_msg_0[] = {89, 21, 104, 88, -18, -17, 27, 122, -94, 0, 19, -123, 87, 41, -126, 104, 80, -64, 3, 68, 109, 9, 81, -20, -83, 75};
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
    msg.setTimeStamp(0.512556789375826);
    msg.setSource(43920U);
    msg.setSourceEntity(70U);
    msg.setDestination(43837U);
    msg.setDestinationEntity(139U);
    msg.seq = 4088132263U;
    msg.state = 136U;
    msg.error.assign("HTQUDJBCEZOTFIXLMQGXQLMFWWRNIEMPKWQEURLEOKVYKLHAZIXRDPGRSJAQSZKGBJHOZAQYCBOPHTYTDFNWBIXKACANVECDFECSYVDZRMMZESAKLWSCKWUUDMYJAWXCGIQPKFUTSWQPSEXNLEXVTUNAHDBNBLWOMEZZMNRRYRPAHSVJTYJSOYYXCWUKJKXVLHGPODIFIIPUJYFBPVGIMIHPZMFLSFOGHOGVN");

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
    msg.setTimeStamp(0.8653128847163729);
    msg.setSource(56608U);
    msg.setSourceEntity(24U);
    msg.setDestination(25049U);
    msg.setDestinationEntity(162U);
    msg.seq = 2048461772U;
    msg.state = 157U;
    msg.error.assign("KVVJRTMGOJRBJJXBLJOBLNOWDWIACDEFNIWYZZRXNGJCQEKVAYPEUWVZRCC");

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
    msg.setTimeStamp(0.6849116875661299);
    msg.setSource(50105U);
    msg.setSourceEntity(91U);
    msg.setDestination(26659U);
    msg.setDestinationEntity(6U);
    msg.seq = 176069177U;
    msg.state = 158U;
    msg.error.assign("WVIYQAPUCKORDLBEVSQNIFKMQIRMUAVSAUDJXITDDQEJUIRFIFSLKBQJHMQXCBCPNCYZABLKDSTWCGOOHXAQTYEHVZKTXTGPWJFVFDZSAXLMSUUFYEEWGNSEIXLPMNZLJRANFZCLMJBBIYKLEOOYGUBPYUOPWMDUYKMLSRTSQFLRCBMRWFJARHCZHNDVGPSWCORHTIVEVGYDKPKCTWWEBMHHPFOZZHXPGWAIKDZQQBX");

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
    msg.setTimeStamp(0.6949354389784301);
    msg.setSource(25779U);
    msg.setSourceEntity(33U);
    msg.setDestination(3431U);
    msg.setDestinationEntity(5U);
    msg.origin.assign("ZXJSGHDKTDTAKLIGDQFWRPPPWVGXNKYVKLWPCOPIJDDOOIKQGSLZCRHNBPXQWABYZLNNMUYUSEVJNGEQUANXEBKXDRVAETZULYRYFMHHHTBKOPFJCVDLJSUFIYRXVIDGUSSLEUSXVGICLOTWZCQIJCXUHFQAMYTMSJWRGFBEHNQRTRFERMJFCVWLHABAWWNEGSHNOQOXBDH");
    msg.text.assign("CKLWAPDMPIQQKZYDFQVTLDTHLOFCRVNNETTVKYMGRPFSHWJELTRHITYEWIOFENLKZQBSYQDNXSCACWYAUMFCZBIFRYEMBGERQZSSXMPDLIQPCAYXFHGGGBVKYGAHLQXOLOEWRTHONGHUUDZBKDLXKMZZWIJMSUZEJZDOUCOGNJTYNHXXNPSYSJHLAPMIMWMOFUNCCIARQHTJV");

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
    msg.setTimeStamp(0.19435533769980962);
    msg.setSource(29140U);
    msg.setSourceEntity(249U);
    msg.setDestination(31107U);
    msg.setDestinationEntity(150U);
    msg.origin.assign("QDLAYJDWNPOIZJFAKHPUOYLTTUQXUMOVTOCGDWDSMTVVPAVAGJSJULGZGFCWDSQLQJJLAEVUQFWYJVDSQWGKBGCZGSBVXNMJHYKEQULRDEZYRZIRYVFSTHNFVCNBZKFMNEETOMEIISMPXMTPYRFEBCKYAUZLTGNIWUPCTURPLDXRXXIGDQUBLIACHBBPPHKKM");
    msg.text.assign("PSSOSVERJKAQECPDJSSXGZXYBJDUKVEYUFKXDWZXPNHWNKTYYFJWCPADLYMWIQAHKIFYMXCVWPIHFNOXADQEUCRZWEELHMLASUFGHSNKZAPIIVOIZKTTIUNRZZXOKQMFTKBHFNABIQDXMEUUAYEZGELJTRBLSVJCTLKQSJGCYVUNDVCHLUAZFWQBWBWBZRPGHGNHTANDQO");

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
    msg.setTimeStamp(0.12603797812144368);
    msg.setSource(832U);
    msg.setSourceEntity(193U);
    msg.setDestination(60078U);
    msg.setDestinationEntity(46U);
    msg.origin.assign("MOCPCGMXWTJCNBRGIESMLRFLYDHERQOMIOQAGTODYLOVVFYXTOVBWEMMETHJUPKSUSERTIAKTYZWIOXIJJGSYNPGRHWQRHSGGNHCDVSVZZDWBDYTZVHMTCPJKENSNLRFMHSKVPAOZAFEKLPWGXMHIBDPWHQTQF");
    msg.text.assign("CYVXBDTDFMWPZTBZTJUKYXNRCQTORJVEQYINJJOYGFTPJRXZGWSJZKCPGWEYBKPHRUYPUMOGINDHLHRRQEFQDWXGPFFSDUWUEDXZPLSHGQUNJFFLSAJZVECOTHSOTVEQIRVMHAOIIANKHESLEPMAKXWDRVZTMHBAXCIBOMWRXD");

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
    msg.setTimeStamp(0.707190317791568);
    msg.setSource(30708U);
    msg.setSourceEntity(162U);
    msg.setDestination(18170U);
    msg.setDestinationEntity(130U);
    msg.origin.assign("WKUBABMOKNQWTBGSSMEQZPIQKWRXHLFNOPYMJCMUJYRJEFUYNREMALCZTEVWZGCUVOPFNDVUCOBCDHJNPYURLSHFUKBANIIOQHOLDQJC");
    msg.htime = 0.6051705680061356;
    msg.lat = 0.680311418865031;
    msg.lon = 0.027290759679551302;
    const signed char tmp_msg_0[] = {-121, -66, -15, -80, 54, -55, 53, -90, -67, -79, 34, 103, 86, -72, -50, 11, -80, 90, 105, -45, 83, -113, 81, -69, 99, -50, 109, 60, -40, -54, -70, -43, 97, 55, -60, -85, -101, 109};
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
    msg.setTimeStamp(0.3620824249891672);
    msg.setSource(51475U);
    msg.setSourceEntity(3U);
    msg.setDestination(36719U);
    msg.setDestinationEntity(57U);
    msg.origin.assign("UXCTWFUSWYZVHBQIAPZLUBIKNBALCPTTDHDRORMPDLSVZKRSYETKVNIJEHZBXRDTYMINBGIAUEPSRPHFJLRVFKFKWXQCSTVNYSOXWPAKQYJOJNTGNGJXDFYGDQGGEJWIWHIMBOCLEIDUQBSWFQHKALUOMVHRVZTHZOQRHLFEETAJIXAZNURNDVPUKCEDKBFPFEBYVCAIYMXORDZGGAYOJCX");
    msg.htime = 0.5693219450516825;
    msg.lat = 0.8482036923613508;
    msg.lon = 0.3689598335403883;
    const signed char tmp_msg_0[] = {39, 2, 21, 52, -32, -32, -74, 34, 0, 123, -86, 84, 89, 23, 91, 109, 47, -67, 92, 95, -17, -22, -52, -85, -18, 17, -96, -106, -45, -126, -42, 85, -85, 124, -92, 82, 79, 68, 43, -11, -122, 57, -125, -19, -118, 29, 118, -65, 62, 50, -14, -58, -11, 90, -104, -64, 38, 35, 32, -53, -100, 102, -121, 85, 98, -102, -81, -111, -33, 11, 88, 19, -113, -123, 79, -106, -112, -73, 7, 80, 124, -47, 6, -87, 47, 68, -56, -95, 119, 10, 64, 87, -78, 96, 46, -92, -34, -41, -90, -126, -63, 16, -81, -88, 36, 120, 66, 33, -80, 37, 55, -13, -18, 27, 28, 40, 20, 67, -57, 3, 1, -38, 36, -23, -14, -55, 43, 34, 35, -17, 116, -53, 61, 76, -91, 41, 95, -45, 82, -64, -78, -17, 7, -120, 66, 68, -7, -94, -39, 114, 46, 64, -119, 44, -69, -26, 9, -125, 33, -121, 119, 98, 69, -84, -94, -110, 85, -126, -19, -80};
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
    msg.setTimeStamp(0.42779185097231176);
    msg.setSource(42242U);
    msg.setSourceEntity(250U);
    msg.setDestination(18068U);
    msg.setDestinationEntity(140U);
    msg.origin.assign("RSQEYFKGQWK");
    msg.htime = 0.4990699855598484;
    msg.lat = 0.11609617135258743;
    msg.lon = 0.06732747437128839;
    const signed char tmp_msg_0[] = {47, -28, 84, 46, 71, -108, -23, -61, -108, 63, -36, 75, -77, -92, -52, 47, 36, -116, -16, 90, 49, -60, 41, -35, -108, -118, 27, 91, 107, -123, -58, -102, 35, 116, -4, -120, 30, 48, -107, -16, -33, 56, -34, -51, -74, -43, -83, -101, -81, -60, 29, -9, -89, -85, -35, -9, -119, -37, 1, -113, 16, 103, -121, 6, 50, -77, 62, -74, 115, 124, 108, 79, -112, 91, -80, 53, -64, -14, -92, -2, -60, 32, -60, 70, -68, 77, 53, 88, -20, 51, 120, 46, -60, -79, 8, -90, -53, 20, 32, 35, 80, -92, -2, -38, 77, 60, 73, -56, 114, 102, -111, 31, 0, 112, 70, 90, 2, -60, 53, 55, 115, 90, 120, -113, 91, 1, -128, -49, 1, 58, -101, 61, -105, -83, 116, 9, -104, -50, 12, -91, -126, 81, -109, -83, 58, -83, 101, -61, 21, -10, 112, -74, -83, 41, 103, -98, -120, 27, 32, 114, 44, 83, 47, 89, -7, -5, -69, -119, 102, 70, 17, -8, -53, -111, -104, 62, 18, 87, 103, -19};
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
    msg.setTimeStamp(0.341096997537615);
    msg.setSource(45958U);
    msg.setSourceEntity(215U);
    msg.setDestination(63538U);
    msg.setDestinationEntity(25U);
    msg.req_id = 29629U;
    msg.ttl = 4334U;
    msg.destination.assign("IEWAYIAWYFEOZWSDDRDGJLVMUZNTSGAYCAQKDKSHKMGVBGRQWLYBOXARVKHBIEYPPUFRNBQAKTXONRZ");
    const signed char tmp_msg_0[] = {-93, -110, -13, 106, 47, 59, 107, -72, -68, 71, -107, -57, 89, -55, 15, 21, -103, -20, -102, -100, -34, -92, 85, 39, 63, -70, 62, -71, 21, -11, -60, -78, 61, 43, -20, 99, 8, 86, -83, 119, 1, 7, -88, 122, 99, 126, 3, -32, -123, -36, -43, -23, 33, -106, 82, -13, 85, -118, -65, 56, 20, -125, 17, -1, -103, 32, 63, 85, 125, 117, 27, 11, 39, -56, 59, 60, -28, -2, -122, -36, 67, -115, 116, -80, 89, 92, 27, 56, 6, -88, -38, 9, 24, 67, 44, 111, -127, 76, -85, 13, -90, -105, -128, -78, 62, 126, -114, -125, 54, 34, 25, 93, 35, 98, 108, 75, -105, -86, 89, -56, 115, 28, 92, 49, 28, 71, -3, -8, 45, -5, -57, 15, -57, -43, -118, -63, 27, -61, 19, -83, 38, 38, 63, 95, 31, -35, -113, 51, -105, 76, -21, 32, 41, 55, -98, -115, -77, 17, -33, -45, -79, -28, -20, 46, -35, 50, 32, 92, 25, -104, -41, 67, -97, -111, 69, -75, -65, 87, 17, 0, -96, 27, 29, 44, -53, 102, -98, 64, 101, -92, 42, -79, 118};
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
    msg.setTimeStamp(0.09047215804707298);
    msg.setSource(58369U);
    msg.setSourceEntity(95U);
    msg.setDestination(39227U);
    msg.setDestinationEntity(52U);
    msg.req_id = 42476U;
    msg.ttl = 54926U;
    msg.destination.assign("SHNJAWGJLXADVCQQGUIEJJKFUJSPIURYIZDCALTLNBSBOCCLCOFCHFLXKRVBKHSMIZQZAMDOTKXMOBCOQFHSZGSEVCEVMWNPVBAOIHREKGLLXWXJ");
    const signed char tmp_msg_0[] = {56, 120, -2, -23, -13, 108, -94, 120, -96, -22, 27, 81, -66, -116, 53, -49, 73, 88, -32, -1, -114, -50, -58, -4, -27, 49, 101, 4};
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
    msg.setTimeStamp(0.5782089582169413);
    msg.setSource(4673U);
    msg.setSourceEntity(73U);
    msg.setDestination(29215U);
    msg.setDestinationEntity(191U);
    msg.req_id = 21523U;
    msg.ttl = 21793U;
    msg.destination.assign("XHZDXADWXTXQPTBHVBRREFLESCLIIBMNCAZFFYHSCPLULWVCSAWNDIQFAUADRTKQIFUMMZGVOYZXHDEXNHPHYKJONXIRVQVHB");
    const signed char tmp_msg_0[] = {-43, -58, 122, -31, -79, 84, 20, 100, -79, -41, -17, 26, -67, 94, 124, -89, 14, -35, -24, 76, 60, 49, -6, 41, -93, 106, 4, -38, -32, -103, 39, 25, 50, -36, -8, 124, -96, -66, -59, -54, 25, 105, -110, 101, -107, 107, 37, -34, 68, -47, -61, -69, -116, 86, -51, 69, 106, 104, -123, 119, 19, -41, 77, -123, 7, -18, -103, 80, -38, -9, -110, -124, 66, 52, -18, -57, 16, -39, 78, -47, -55, -64, -54, 60, 90, -112, 78, 73, -47, 41, -22, 75, 44, 20, -49, 98, -20, 95, 19, 30, 20, 32, 20, 20, -73, 125, 43, 117, 119, 79, 70, -117, -46, 115, 45, -96, -9, -66, 9, -116};
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
    msg.setTimeStamp(0.6255137303796445);
    msg.setSource(10025U);
    msg.setSourceEntity(53U);
    msg.setDestination(59984U);
    msg.setDestinationEntity(206U);
    msg.req_id = 59832U;
    msg.status = 60U;
    msg.text.assign("PTVVLCXGFDZPTLGOXCWKRXLAVIGYWFMHFIBIAJDELXIONEASYSJRJFTITXHJCPSDTAQQNMAWXCCKPOUYOIDSSJLENUGQHTPAVUKUDXKVCGSWAMTRWOBZHPEYUGMUYIBPUGOBYEAZGZUZOFVKNMTMEYCKHJQP");

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
    msg.setTimeStamp(0.7960669926044306);
    msg.setSource(50452U);
    msg.setSourceEntity(4U);
    msg.setDestination(2964U);
    msg.setDestinationEntity(163U);
    msg.req_id = 17875U;
    msg.status = 59U;
    msg.text.assign("GQEMUBTUKMPKSBNWNXYVIAAWVJOCCZLWULMIZKDGZFCCAYNAKUPZAVSTFONYJ");

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
    msg.setTimeStamp(0.8201727720231732);
    msg.setSource(63322U);
    msg.setSourceEntity(247U);
    msg.setDestination(57810U);
    msg.setDestinationEntity(95U);
    msg.req_id = 64747U;
    msg.status = 235U;
    msg.text.assign("XXQHWZTJLHOURYVORTQPHJCCFGDIBDOBOTUYSYMBWUYIZNSEQFEETNINCVEANNSGPQSBTDFLIKDSGYDEIASFQLXNJPPWXLYOYIGDEOZSERWDKWABLSZCHTLIOVNNPUICBWHBGXKTQTBXKAWMYVLHFSRAZZCQVFLURXRCNTGVWZMRFJVGPVUPKGVYFHAQBKNLZRKPXUBLOCERUCPCGMMKPJFEZMJWADOQVMAKGSHXJ");

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
    msg.setTimeStamp(0.703255960151962);
    msg.setSource(58955U);
    msg.setSourceEntity(61U);
    msg.setDestination(29753U);
    msg.setDestinationEntity(246U);
    msg.group_name.assign("GRQCUVBMUBOIRSSWVEMDWBODCMNXATOBNKVHKHUHNNGIDOEZORTBOTFQYAGUDSHGMOHNRJYGLXKBXBKKLKWDHGGDYIZZPGJJPFO");
    msg.links = 3884862205U;

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
    msg.setTimeStamp(0.49046242976214927);
    msg.setSource(12788U);
    msg.setSourceEntity(57U);
    msg.setDestination(59569U);
    msg.setDestinationEntity(238U);
    msg.group_name.assign("GFIDMTSAGKJMBRQZTIXOHVGYKNIHRHAZYUNBQASWNFRPZHGGBPSSUQTXHJSRWBBZGJAQDGISPPRYFJJMXYOSTJLCCXQLKDIMVXUAVCWZHBVLQCGM");
    msg.links = 3922834416U;

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
    msg.setTimeStamp(0.7058955506774675);
    msg.setSource(7581U);
    msg.setSourceEntity(68U);
    msg.setDestination(41416U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("OXPHMPIYRHDTZGFWMVCVBNOHWQLKATFKEZMEJJMTKISXHLIKRYRFACIGEYRTJQSLCPANLOQSEHILIABOXOSNUDTFGOFFQZVWDEOZMWOJYBBLUENFCPGLPTLNVVXGYNYRIWCRJFAEUOMGWLZHSQAGHTVEDTNCGEPAQYQKGAAJZKKHBDVKFMJMDOXVIPWCPWHCSGSNVUZENUIBZTPSDWCMQNYSB");
    msg.links = 2315903626U;

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
    msg.setTimeStamp(0.2004123742288345);
    msg.setSource(24077U);
    msg.setSourceEntity(25U);
    msg.setDestination(48587U);
    msg.setDestinationEntity(72U);
    msg.groupname.assign("BLZXCUTWGXGDMETDAEHKOIGF");
    msg.action = 28U;
    msg.grouplist.assign("XKOJVTOXAYMSDSJVFARNEMOLWHKMTDVIUXHWRHNNSPYXLXMUMTQREGVPDWQANRWTHIDDFSZEYBMJNARRBZZBZJWEXT");

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
    msg.setTimeStamp(0.7330779186837193);
    msg.setSource(14696U);
    msg.setSourceEntity(247U);
    msg.setDestination(64466U);
    msg.setDestinationEntity(210U);
    msg.groupname.assign("EGVFYRTGGDWHXGLUZJVEGBYXVUURXZODFKNILEVNLMEXBZQFDYWHXETRP");
    msg.action = 90U;
    msg.grouplist.assign("JAMUNZBHVTYNSQJOQCEJTNPFDYCJPDZRWLEKXMIGFNEODVAXORRONRPIVEFQXMTZTLGWTDJRYQCMXYJILSCCWCHDZPIHRUKUQBSZGJYGSZHICYIOSIMCAVPGIBQGQAWPZJEHVFNWMLKHUBPXIRCELTGNDKGAVZ");

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
    msg.setTimeStamp(0.8256353586153328);
    msg.setSource(18579U);
    msg.setSourceEntity(144U);
    msg.setDestination(52591U);
    msg.setDestinationEntity(13U);
    msg.groupname.assign("XLYCDDKYQLBIZXMXJWPXVACNACWUAYONUGRFBWLXAIONLDNPTVRBLCFTWDHKRWZFHCGEAYKTSGKVFAMVDVMZRQFSMVORWNSTSRIVNEAKBIZFMVOHNPPTJISJJICRXQEUAMTGKGAMUBWPMDEKMGPZEHFQQTWRZFYLIWDHNBSPNEKUJORIYEBJNOGHOJDZBOKBILTLZJUHXCXHQCYQVQPCPTOYH");
    msg.action = 229U;
    msg.grouplist.assign("KHFSUXVXJOJYVLOUGIOJMWEGXYTVIUETQQVHPHVZLSJLYNAALOBCOWTKDGMMGFBAPABFCXFNWEYCWSIZZMRDZRVYELGEFDYNUCKYWSTSNJTBUMYQJZPMZQGKPIXOTPRWJKHBYAAEDCEGNLUAJXRPUGAQDKRQWRSWBXZFXVEDFHRRNGNIZTHTLPDAIEFVIKQBDGBTCMMCKJTSJRUVXDHKPFNQOSCSCXWQQIVZFHMPPILNLN");

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
    msg.setTimeStamp(0.9351681402391765);
    msg.setSource(33368U);
    msg.setSourceEntity(167U);
    msg.setDestination(23977U);
    msg.setDestinationEntity(131U);
    msg.value = 0.3563385134079373;
    msg.sys_src = 27613U;

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
    msg.setTimeStamp(0.551640075285313);
    msg.setSource(39215U);
    msg.setSourceEntity(32U);
    msg.setDestination(54872U);
    msg.setDestinationEntity(247U);
    msg.value = 0.3779789323482152;
    msg.sys_src = 9665U;

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
    msg.setTimeStamp(0.62388634064216);
    msg.setSource(49894U);
    msg.setSourceEntity(138U);
    msg.setDestination(4828U);
    msg.setDestinationEntity(250U);
    msg.value = 0.24481677108569588;
    msg.sys_src = 38447U;

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
    msg.setTimeStamp(0.4180238369429643);
    msg.setSource(3501U);
    msg.setSourceEntity(120U);
    msg.setDestination(19455U);
    msg.setDestinationEntity(106U);
    msg.value = 0.9882286601374721;
    msg.units = 201U;

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
    msg.setTimeStamp(0.3193020860907504);
    msg.setSource(9859U);
    msg.setSourceEntity(69U);
    msg.setDestination(49889U);
    msg.setDestinationEntity(142U);
    msg.value = 0.4571694345564893;
    msg.units = 60U;

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
    msg.setTimeStamp(0.32253026684001695);
    msg.setSource(21804U);
    msg.setSourceEntity(111U);
    msg.setDestination(18784U);
    msg.setDestinationEntity(70U);
    msg.value = 0.11583239659725242;
    msg.units = 195U;

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
    msg.setTimeStamp(0.9439423616260038);
    msg.setSource(21193U);
    msg.setSourceEntity(103U);
    msg.setDestination(35598U);
    msg.setDestinationEntity(136U);
    msg.base_lat = 0.23105418396117483;
    msg.base_lon = 0.1436208898801814;
    msg.base_time = 0.624630541804602;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 51850U;
    tmp_msg_0.priority = 13;
    tmp_msg_0.x = 20811;
    tmp_msg_0.y = -257;
    tmp_msg_0.z = -22954;
    tmp_msg_0.t = -16028;
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 33379U;
    tmp_tmp_msg_0_0.lat = 0.03734804328276908;
    tmp_tmp_msg_0_0.lon = 0.49560801766682305;
    tmp_tmp_msg_0_0.z = 0.06272723307184758;
    tmp_tmp_msg_0_0.z_units = 62U;
    tmp_tmp_msg_0_0.speed = 0.28715064007917857;
    tmp_tmp_msg_0_0.speed_units = 205U;
    tmp_tmp_msg_0_0.duration = 8069U;
    tmp_tmp_msg_0_0.radius = 0.6543545684928365;
    tmp_tmp_msg_0_0.flags = 169U;
    tmp_tmp_msg_0_0.custom.assign("QTEEJKIZCRNGEZLGOAYXUNJDUQUJQLAHVDYDSJIFLKCPEYTQGADLMZDIBDJCSAXRFMULNMCCEVAACBXWAWZURSYGBYRPOWIZCTGPHSWBSJKXFHP");
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
    msg.setTimeStamp(0.9264771466683993);
    msg.setSource(203U);
    msg.setSourceEntity(2U);
    msg.setDestination(35725U);
    msg.setDestinationEntity(87U);
    msg.base_lat = 0.48560883830342594;
    msg.base_lon = 0.9563375297954788;
    msg.base_time = 0.5651089722888245;

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
    msg.setTimeStamp(0.34131295552613894);
    msg.setSource(177U);
    msg.setSourceEntity(43U);
    msg.setDestination(40185U);
    msg.setDestinationEntity(254U);
    msg.base_lat = 0.7782718897823622;
    msg.base_lon = 0.12080942442211429;
    msg.base_time = 0.0962279815021696;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 26279U;
    tmp_msg_0.destination = 64581U;
    tmp_msg_0.timeout = 0.15956258710534144;
    IMC::IridiumTxStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 57388U;
    tmp_tmp_msg_0_0.status = 213U;
    tmp_tmp_msg_0_0.text.assign("JURMYDVOTGBAEAALTXOJWTMZBTAMUFURLWYRFTINHSCRDCGUBXGWDMTRRYWWNKJIYKJFPMFFKBAP");
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
    msg.setTimeStamp(0.8787773881240736);
    msg.setSource(61082U);
    msg.setSourceEntity(55U);
    msg.setDestination(54116U);
    msg.setDestinationEntity(102U);
    msg.base_lat = 0.6459777445312382;
    msg.base_lon = 0.39587320912386104;
    msg.base_time = 0.19997602631417066;
    const signed char tmp_msg_0[] = {2, -108, -40, 53, 71, -50, 83, -104, -110, -127, 60, -125, -47, 111, -36, 2, -40, -11, 112, 55, 68, -69, 38, 21, 94, -106, -100, -50, -59, 102, 26, 118, 84, -103, -64, -12, 30, -119, 84, -67, -47, 74, -122, -68, -25, 8, -33, 77, -68, 126, -74, 23, 107, 65, 108, 9, -97, -101, 60, 102, -122, -97, 1, -82, 103, 12, 49, -110, 16, -3, 53, -111, -62, -90, 61, 82, -18, -64, 11, 64, 17, 4, 4, -3, 19, 11, 69, 57, -67, 65, 104, 81, -17, -67, -75, 98, -102, -113, -17, -40, -41, -44, -99, -32, -79, -66, -50, 18, -127, -5, 69, -62, 36, -85, -78, 115, 89, -17, 6, -111, 24, 78, 114, 12, -16, -64, -117, -15, -68, 8, -62, 91, -43, 114, 57, -21, -72, -83, -84, 67, 40, -123, -33, -1, -7, 70, 2, -3, -71, 121, -61, 15, 99, -38, -23, 87, 20, 92, 111, -66, -62, 2, 109, -104, 75, -70, 2, 91, -45, -79, -23, 113, -120, 126, -62, -55, 4, -75, -78, 2, 37, -56, -52, -97, -28, 86, -24, 109, 2, -127, 7, 21, -51, -13, 101, -39, -94, -25, -7, 106, -42, -100, -8, 91, 117, 76, 8, -38, 54, -70, -8, 48, -2, -61, 2, 80, 35, -61, 78, 0, -62, 96, 35, -64, 19, -31, -44, 77, 55, 37, 71, -70, -32, 62, 116, 112, -23, -66};
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
    msg.setTimeStamp(0.39441598828543833);
    msg.setSource(44103U);
    msg.setSourceEntity(105U);
    msg.setDestination(50479U);
    msg.setDestinationEntity(98U);
    msg.base_lat = 0.1598336999992943;
    msg.base_lon = 0.6323369767793192;
    msg.base_time = 0.5619318146483951;
    const signed char tmp_msg_0[] = {66, 27, 74, 97, 12, 101, 63, -45, 101, -64, 92, 122, -13, -101, 57, -87, 1, 109, -33, -13, -10, -98, -55, -37, -27, 34, 86, 26, 123, -107, -113, -59, -110, 87, 92, -37, -103, -60, -24, 103, -23, -114, 54, -69, 13, -71, -80, -34, -12, 56, -97, -117, -65, 45, 33, 108, 31, -77, 41, -126, -61, 125, -108, -23, 7, 25, 39, -52, -16, 1, -118, 61, 119, 62, 20, 123, -73, -108, -37, -81, -87, 55, -1, -123, 10, 7, 62, 32, -59, 112, -20, -7, -106, -80, -77, -18, 98, 16, -87, 38, -12, 70, -51, 59, 41, -127, 88, -110, -96, 6, 117, -45, 59, -3, -123, 43, -104, 104, 85, 3, -20, 82, 72, -124, -119, -106, 45, -84, -114};
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
    msg.setTimeStamp(0.7446788309579834);
    msg.setSource(47877U);
    msg.setSourceEntity(76U);
    msg.setDestination(29893U);
    msg.setDestinationEntity(157U);
    msg.base_lat = 0.025195112473211045;
    msg.base_lon = 0.10330508526709836;
    msg.base_time = 0.8936589764064702;
    const signed char tmp_msg_0[] = {-53, 77, -122, 45, 121, -15, 35, -91, 60, -19, -95, 98, 54, 100, -75, -43, -116, -3, -22, -39, 108, 99, -1, -20, 4, 120, 124, -74, 109, -116, -30, 115, 89, -107, 97, 9, -9, -113, -71, -123, -110, -116, -117, -76, -95, -57, 77, -42, -84, 88, -120, 78, 54, 61, -91, -116, 75, 18, -2, 84, -103, -22, -44, -43, 28, -99, -115, -46, 93, 29, 40, 43, 100, -53, 98, 13, 64, -89, -66, 80, 47, 3, 102, 113, -119, -58, 22, 87, 61, -74, 90, -117, 41, 116, -57, 95, -115, -53, 99, -112, -118, -5};
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
    msg.setTimeStamp(0.8967561422175375);
    msg.setSource(26368U);
    msg.setSourceEntity(121U);
    msg.setDestination(19962U);
    msg.setDestinationEntity(161U);
    msg.sys_id = 21006U;
    msg.priority = 77;
    msg.x = 7743;
    msg.y = -32505;
    msg.z = -27289;
    msg.t = 23400;
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 109U;
    tmp_msg_0.label.assign("NWBXJVFHAPDIDNKGOEPWTKCWAVWFZULAAPSFQAJKXHWBTJVOECPDRHGAJYDYBKXMEDNTHYNURAXFLSBJADDWSNKYRISVIWUCHGKNPUZQRVMYFCVZPJYGLVQGULZJIJZQLCLFRAUECCVLDXUBOWOIKPRWMIYCLYMZIHEYOBISVNBOTPJZEMHFSWJKITGOQBSTCFFNHTRUMEOMLBQKPRGDXVXQNTASLOMQGXRUZ");
    tmp_msg_0.component.assign("BFBOFMCYAZQCWMFMAZZCIPRXTGKYNLLRPPZDGCFECMBDLWJOIZOWXYNNNBZYPKSIZJGDVRSUFQSUKKYAEHNAAPHLKQRJKDQWCCISOTHPBNJUWBXJFMZCKRM");
    tmp_msg_0.act_time = 60897U;
    tmp_msg_0.deact_time = 24492U;
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
    msg.setTimeStamp(0.3406061807995616);
    msg.setSource(24571U);
    msg.setSourceEntity(55U);
    msg.setDestination(32356U);
    msg.setDestinationEntity(253U);
    msg.sys_id = 54636U;
    msg.priority = -1;
    msg.x = 5725;
    msg.y = 4757;
    msg.z = 28299;
    msg.t = 21556;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.42412909929188247;
    tmp_msg_0.lon = 0.34251955895410624;
    tmp_msg_0.eta = 3971589215U;
    tmp_msg_0.duration = 26438U;
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
    msg.setTimeStamp(0.8352414285460924);
    msg.setSource(26191U);
    msg.setSourceEntity(117U);
    msg.setDestination(37902U);
    msg.setDestinationEntity(194U);
    msg.sys_id = 35101U;
    msg.priority = -6;
    msg.x = 30544;
    msg.y = -8864;
    msg.z = 32125;
    msg.t = 11888;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 253U;
    tmp_msg_0.htime = 0.14653883484193275;
    tmp_msg_0.context.assign("JQTSAYYPIARLSTCPFAEMZZJBSMJUOPRGBMHNTOPFCGYDMTQZMPIDOSDRBEGLBOUOVJLXDJSYMYCWJNVIHJTECDSDROLSAPUKQRKIDUUBTVIVPNUJZFJAVXZRLMKNHXWFPIBHEZWHHLKAUIRNCVNTTBEGYELTVOFVEQCNKMGNWWWDWGDZDKIGVOQJKMUSLXXMUXCNCSQWQHXGGQGIFXZECRRIRCAAHFHYBUVBAPTYXOYZPWLBHWLQFFSYKXOE");
    tmp_msg_0.text.assign("EKKFKDAEMCWQNXSTHXAIQERTODUEMMBXFRRLLUGPCNCNBIXMWJZATXXKPYCMUDZGHCQZKQQJCRTLVMALYDFFOZJZSHIAVUNPOTQYAIHRVSIPRHKICSSCFZDYNDVUBLOHWJSTGSNBQWEEKIXFHJSWZYYPVMFDVMGJMKPWJBLSTG");
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
    msg.setTimeStamp(0.7428785797496255);
    msg.setSource(26775U);
    msg.setSourceEntity(152U);
    msg.setDestination(13722U);
    msg.setDestinationEntity(119U);
    msg.req_id = 8821U;
    msg.type = 27U;
    msg.max_size = 38839U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9013230653123926;
    tmp_msg_0.base_lon = 0.5142502118040263;
    tmp_msg_0.base_time = 0.17841259802551468;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 40190U;
    tmp_tmp_msg_0_0.destination = 7939U;
    tmp_tmp_msg_0_0.timeout = 0.04178037618506769;
    IMC::NeptusBlob tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.content_type.assign("MHTXZSMMPCCPWMXWSSKOHDANYOWSLONEFBRBAKCWNGZJFCGYYPQOBVFHNOKIMAVZNHAICQXLDIZWILBVJYKOKMUQB");
    const signed char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {81, -68, -15, 46, 114, 93, -111, 25, 56, 66, 55, -43, 21, -44, 6, 35, -95, -96, 19, -86, 66, 80, 45, -57, -23, -116, 49, -109};
    tmp_tmp_tmp_msg_0_0_0.content.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
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
    msg.setTimeStamp(0.8940633801021809);
    msg.setSource(9231U);
    msg.setSourceEntity(30U);
    msg.setDestination(33256U);
    msg.setDestinationEntity(67U);
    msg.req_id = 45574U;
    msg.type = 28U;
    msg.max_size = 47895U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7575331462695916;
    tmp_msg_0.base_lon = 0.6746901673636301;
    tmp_msg_0.base_time = 0.5572360855069886;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 3949U;
    tmp_tmp_msg_0_0.destination = 44792U;
    tmp_tmp_msg_0_0.timeout = 0.27437695382318017;
    IMC::Goto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 42996U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7039034696622954;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8635236017015697;
    tmp_tmp_tmp_msg_0_0_0.z = 0.26570836704369094;
    tmp_tmp_tmp_msg_0_0_0.z_units = 63U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.27365163816592586;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 83U;
    tmp_tmp_tmp_msg_0_0_0.roll = 0.34962599474614664;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.44672500985398045;
    tmp_tmp_tmp_msg_0_0_0.yaw = 0.2923097535473119;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("CSSLWVPJJDLIWYKWELEBTELENQICHDETRCJUOAOYUCTSGSFYMLRWOPVVXOQBUCMKUOYUKIQGICTJZHWDHYBYVKBAXCCNAJQZW");
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
    msg.setTimeStamp(0.35165587915613317);
    msg.setSource(6936U);
    msg.setSourceEntity(15U);
    msg.setDestination(57293U);
    msg.setDestinationEntity(192U);
    msg.req_id = 33013U;
    msg.type = 132U;
    msg.max_size = 46695U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7446747558986214;
    tmp_msg_0.base_lon = 0.9318818799756865;
    tmp_msg_0.base_time = 0.7606269994519741;
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
    msg.setTimeStamp(0.20451952586918232);
    msg.setSource(10543U);
    msg.setSourceEntity(83U);
    msg.setDestination(12448U);
    msg.setDestinationEntity(155U);
    msg.original_source = 53924U;
    msg.destination = 25024U;
    msg.timeout = 0.49240658964963036;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.23354706244399004;
    tmp_msg_0.x = 0.958305064812555;
    tmp_msg_0.y = 0.00526837330388541;
    tmp_msg_0.z = 0.4818897174077481;
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
    msg.setTimeStamp(0.8069964482656663);
    msg.setSource(35322U);
    msg.setSourceEntity(113U);
    msg.setDestination(47830U);
    msg.setDestinationEntity(141U);
    msg.original_source = 37925U;
    msg.destination = 34692U;
    msg.timeout = 0.2739990828187572;
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.5967086296740433);
    msg.setSource(34383U);
    msg.setSourceEntity(226U);
    msg.setDestination(41499U);
    msg.setDestinationEntity(23U);
    msg.original_source = 15125U;
    msg.destination = 57706U;
    msg.timeout = 0.7026800739042706;
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("EOMQNRECHWGFH");
    tmp_msg_0.visibility.assign("AWGTOKLNDFLJSMZMWAKBUPXLSHYOGBUUPFZHTDDJQEFHPEFZIGMSNHIKBHOOYEWGGMJYXLHSPCXEXPNTKJNAEMBCQOUFPDQURKKGXVCVCGCWJUYIJDSWIURHAYMDBYBNIAJGWSIJOTVQXZXZRLDEERRVSAPQVYAKZYUFMXOZPZRQCLKPMQDZRDENKTSGLANVCSJUUQQBTLQATHOCTKRRIWRYCFLSWYVNINTVVMJNBWIFHEOPHWTLOFAIZ");
    tmp_msg_0.scope.assign("JQYHNZFEGMDVHDPSBNICBTXCRZSVJFHOGNDLSVESNPWJZQVUEOLGFJRTERLGUUPCCPMORMNGMABEMQXJKPLWWNCOEXPUZLJOGACZBUIFOXEKNIBZRNKBAWLTTJWXZIPCWZIXPTWBSDDAYRGBYVLIPQCBLQOVGMYGOSTBIXDIEJDLKHRPUKMRTVYLWUFSCHYHKSAVFKYSEMQWUKRTMAYOX");
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
    msg.setTimeStamp(0.15928627936210993);
    msg.setSource(9168U);
    msg.setSourceEntity(175U);
    msg.setDestination(5321U);
    msg.setDestinationEntity(48U);
    msg.type = 156U;
    msg.comm_interface = 52334U;
    msg.model = 1602U;
    msg.list.assign("LMAFTZBCTAIQYKICZRFYPOJIBRNOANUMHAXRLQYWVMXLLJKILTPVTMESSWPVQRCPPDQNMJVLTIJGXMQWKQGMVJGHODFAXEHKIUXZCUAUYXBBITDDHALNMEZJHGMYBQDLJHRFVODWVPRZCNBFFABPOOVOEZ");

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
    msg.setTimeStamp(0.4248741522674061);
    msg.setSource(29898U);
    msg.setSourceEntity(136U);
    msg.setDestination(34683U);
    msg.setDestinationEntity(173U);
    msg.type = 21U;
    msg.comm_interface = 46431U;
    msg.model = 23142U;
    msg.list.assign("LVIOVEIMSQLEOVPAAMHKDHASEDJJAIAQUOMCPKXVYLTXZGJHUGKKTKDWCARDZTLHUCGLBZFZTXENUTNHFHUCPXPYQTAQVMRIIRESTBQCSMFFGBDSNNVEYRIBXIWOYYPMG");

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
    msg.setTimeStamp(0.32400698709283293);
    msg.setSource(53992U);
    msg.setSourceEntity(226U);
    msg.setDestination(9123U);
    msg.setDestinationEntity(190U);
    msg.type = 68U;
    msg.comm_interface = 22959U;
    msg.model = 1155U;
    msg.list.assign("EXVAFQYRZBDOGWBCTMECDYGXWKZYUMLHIDKKEOMZANVJIZSYZGIODXDBCPFFHGSEEOBWPCJXTOEXTQGTHSASZWSULKYMGXDZNLJLYVDWAFQNJLOIDTDEM");

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
    msg.setTimeStamp(0.3354525610140351);
    msg.setSource(40640U);
    msg.setSourceEntity(32U);
    msg.setDestination(3631U);
    msg.setDestinationEntity(98U);
    msg.type = 72U;
    msg.req_id = 336437360U;
    msg.ttl = 6042U;
    msg.code = 45U;
    msg.destination.assign("IVIUJASCPUXHEOJJHOEKUIFVSQRVMFXJSAXDKFNGDH");
    msg.source.assign("CYPJTYNUBCKWUZTPJNMZNMOIELPDWSODDHUHAXHUFUURTZFCPXOJEUJWQVYTCCNKMBQMOKKVLOZLRGNAGYIEYQAWYAKHBAPIBUXMIDKSXYHSWMEAJLWTNAVPVTHWHGZZRQDCKUZXLEGIXSIYCBRVETLFRSOKYGJZDDGVPBNMGNZFPQBKWJVRIFSCMGBYAXEVSSCTXGELH");
    msg.acknowledge = 82U;
    msg.status = 35U;
    const signed char tmp_msg_0[] = {90, 19, 107, 97, 43, -81, 92, 16, -1, 60, -13, -60, 52, 69, -86, -19, 16, 63, -112, -64, -116, 104, -110, -79, 102, -102, -8, 80, 59, -19, 32, -2, 36, 35, -114, -97, 83, 103, -65, -128, 64, -35, -95, -53, -35, 12, 103, -60, 51, 13, -70, -110, 107, -70, 40, 44, -1, 87, 78, -31, 75, -27};
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
    msg.setTimeStamp(0.9266974150782349);
    msg.setSource(6019U);
    msg.setSourceEntity(127U);
    msg.setDestination(57716U);
    msg.setDestinationEntity(246U);
    msg.type = 102U;
    msg.req_id = 3510884598U;
    msg.ttl = 33230U;
    msg.code = 2U;
    msg.destination.assign("OXZXAGVSUPUYTMXXOPB");
    msg.source.assign("QJXPVFMVDVVERMJLWYRSUUGJJCNCUCPHCUWWYJQAURYTNSAZDOYHSEXBWULUBOGYTHOBBLWBIAPETFJKKSZVWMNASITMYHTDWEDCBKGQSEDCLVONCHQZNMHFUVYEEPVZNNBFTTZOZAOXIFLYJOIKHQMDROVXLGMGJUPFRSWREEAGZRXZNCKWYQHUSINIXTADKMDBCPHRKPRQZIFQB");
    msg.acknowledge = 32U;
    msg.status = 149U;
    const signed char tmp_msg_0[] = {-11, -124, -74, -98, -37, 42, -53, 92, -102, 55, 104, 14};
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
    msg.setTimeStamp(0.05124758507450744);
    msg.setSource(4926U);
    msg.setSourceEntity(208U);
    msg.setDestination(18579U);
    msg.setDestinationEntity(149U);
    msg.type = 13U;
    msg.req_id = 4093214560U;
    msg.ttl = 26699U;
    msg.code = 166U;
    msg.destination.assign("KOJJDXXDNAEVCRMSDGGYWMQCXAGYIWADYPDMPYCLMJNJVDEOUIUQISSOEBPTFHYVRNWJUVQBKABOEGOZQHFKWHHHSFKMLERZJVWIRGWQNMICYBPQMYVRTZKPRV");
    msg.source.assign("KIZUEBJUIKAWAAHF");
    msg.acknowledge = 164U;
    msg.status = 187U;
    const signed char tmp_msg_0[] = {-95, -125, 37, 4, -16, -82, -82, -62, -13, -62, 122, 97, 13, 84, 109, -52, 80, -3, -5, -64, -2, -60, -120, -40, 36, 121, 14, -98, -88, 74, -126, 74, -39, -92, 100, 84, -104, -115, 12, 31, 27, 0, -90, 66, 61, 55, -68, 62, -55, 18, -19, -72, -44, -98, -81, 117, 94, 90, -28, -68, -103, 50, -87, -77, 72, 124, 125, 80, -108, -66, -86, 39, -10, 73, -115, -118, 60, 47, 14, 112, 103, -63, 31, -6, -27, 115, 126, 90, 39, 51, -28, -71, 15, -49, -13, -24, -4, -120, 13, 67, 29, 119, -36, -76, 54, 65, 29, 77, 63, 81, -114, 19, -93, 10, -126, -57, -38, -72, 51, -114, -21, 21, 21, -3, -96, -39, 95, -24, -96, 73, -57, -22, -80, -86, 44, 106, 71, 7, 104, -6, 70, 7, 48, -100, -19, 71, 66, -101, 115, 94, -105, -66, -7, -11, 68, 41, 90, 112, -57, 32, -91, -8, -74, 94, -13, 89, 83, 100, -45, 106, -104, 80, -33, -59, -120, 31, 106, 107, 72, 39, 19, -47, -1, -87, 89, -114, -111, -37, -57, -120, -66, 119, 42, 123, -23, 33, 70, 61, -84, -74, 15, 103, 24, 79, -95, -4, 75, 14, 85, 94, -41, -97, -7, 107};
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
    msg.setTimeStamp(0.6292701100452104);
    msg.setSource(36522U);
    msg.setSourceEntity(195U);
    msg.setDestination(36876U);
    msg.setDestinationEntity(168U);
    msg.id = 208U;
    msg.range = 0.5757453976149232;

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
    msg.setTimeStamp(0.8866078197251773);
    msg.setSource(58579U);
    msg.setSourceEntity(120U);
    msg.setDestination(58056U);
    msg.setDestinationEntity(59U);
    msg.id = 187U;
    msg.range = 0.2462992256616553;

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
    msg.setTimeStamp(0.08238162426875273);
    msg.setSource(27309U);
    msg.setSourceEntity(120U);
    msg.setDestination(7253U);
    msg.setDestinationEntity(199U);
    msg.id = 220U;
    msg.range = 0.8804227944019026;

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
    msg.setTimeStamp(0.884896394371087);
    msg.setSource(28106U);
    msg.setSourceEntity(130U);
    msg.setDestination(22954U);
    msg.setDestinationEntity(184U);
    msg.beacon.assign("EHHAIOSFLJQJGSBOWYHZLCPTWDVKYTOYLBJFWOHJGDKGMWUBZRKHYMCXTXJGVOIARLPPBHJRDZFMEEZRWTCPMVAYDXQGUUPDODDSCLUYOWFMFRFXEEUJCNNUIUQYTOHWELMSHTKFNNGLKMERENKBSAGPQK");
    msg.lat = 0.7882682845682568;
    msg.lon = 0.826830879817708;
    msg.depth = 0.8519156025917342;
    msg.query_channel = 62U;
    msg.reply_channel = 107U;
    msg.transponder_delay = 125U;

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
    msg.setTimeStamp(0.1897337681208655);
    msg.setSource(2366U);
    msg.setSourceEntity(192U);
    msg.setDestination(13165U);
    msg.setDestinationEntity(233U);
    msg.beacon.assign("WTWOYNYTULBGJMVPYPKBMMJMOZXXPFKHLXJQSWYALTGYCNFUOHQQJZMZNWWCIXRDAIGHEBLZYIEKTTIBCQHRBNRTIRJWICLFBUBKLLLWHKPEPCKUMWDSOIKAMZJRPSVPPTCXSITFGZKNXSYVBRXFODZXYCFEAFRXOSQKZGVEOQKRALXUEMTEHFCVBUDWJSPMHEDVRGOMDQGCEZRSOFAHAW");
    msg.lat = 0.27406113947784727;
    msg.lon = 0.459443362192386;
    msg.depth = 0.2972976016021235;
    msg.query_channel = 54U;
    msg.reply_channel = 183U;
    msg.transponder_delay = 18U;

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
    msg.setTimeStamp(0.7409228696059319);
    msg.setSource(57288U);
    msg.setSourceEntity(108U);
    msg.setDestination(45977U);
    msg.setDestinationEntity(165U);
    msg.beacon.assign("UMGAHHFWYGVRKYQZEKONMDMEQBFVKIODNYVQLTNJJUYSGIPPVHKXFARLFSCJVBNXKAMWZXHYHQGYAQFCZIWMPZWPIZBGJTLBUMMMELICSXCRKHTVWOXIQKDPHQEOMXOSJEESREEBWKISNSZBLOWLPRFSWBULJCVFZYH");
    msg.lat = 0.43255474231926216;
    msg.lon = 0.7870439942688576;
    msg.depth = 0.008339953340479878;
    msg.query_channel = 114U;
    msg.reply_channel = 105U;
    msg.transponder_delay = 179U;

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
    msg.setTimeStamp(0.20296239780703496);
    msg.setSource(16685U);
    msg.setSourceEntity(83U);
    msg.setDestination(61661U);
    msg.setDestinationEntity(35U);
    msg.op = 212U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SXSQIKIGHRQZYGMEQSRZIPMLGNENXRVKPRYEVUZUAXMBDUVNZAVVRLEJNXYHDACTKEMLALCYTIOFFQOFJAD");
    tmp_msg_0.lat = 0.9807415658240635;
    tmp_msg_0.lon = 0.3272459137584358;
    tmp_msg_0.depth = 0.8151527337091512;
    tmp_msg_0.query_channel = 251U;
    tmp_msg_0.reply_channel = 133U;
    tmp_msg_0.transponder_delay = 128U;
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
    msg.setTimeStamp(0.3435288139105951);
    msg.setSource(1571U);
    msg.setSourceEntity(17U);
    msg.setDestination(26469U);
    msg.setDestinationEntity(169U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.5354472843119362);
    msg.setSource(48855U);
    msg.setSourceEntity(72U);
    msg.setDestination(20487U);
    msg.setDestinationEntity(5U);
    msg.op = 122U;

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
    msg.setTimeStamp(0.4711152983542638);
    msg.setSource(59570U);
    msg.setSourceEntity(183U);
    msg.setDestination(43775U);
    msg.setDestinationEntity(215U);
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.45635785429066056;
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
    msg.setTimeStamp(0.39631934537127);
    msg.setSource(31933U);
    msg.setSourceEntity(223U);
    msg.setDestination(26208U);
    msg.setDestinationEntity(23U);
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.933824041352809;
    tmp_msg_0.temperature = 0.11610816358306864;
    tmp_msg_0.depth = 0.2575823898379366;
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
    msg.setTimeStamp(0.48438587462167926);
    msg.setSource(26361U);
    msg.setSourceEntity(52U);
    msg.setDestination(10006U);
    msg.setDestinationEntity(36U);
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 26390U;
    tmp_msg_0.plan_size = 2465594073U;
    tmp_msg_0.change_time = 0.8780586506210075;
    tmp_msg_0.change_sid = 16276U;
    tmp_msg_0.change_sname.assign("WGRMIWLZOUNUOYTQDOEVXGNHB");
    const signed char tmp_tmp_msg_0_0[] = {51, -42, -56, -76, -49, 121, -96, 91, 50, -101, 57, -54, -53, -56, 15, 81, -31, 57, 28, -30, -68, -67, 40, 32, 95, 114, 106, -15, -77, 2, -109, -98, -94, 87, -87, 37, 23, -108, 68, -56, -20, -37, -92, -44, -101, -66, 91, 112, 64, -11, 119, 67, 102, 70, -101, -110, 12, 71, 37, 27, -24, 56, -86, -122, -5, 75, 22, 94, -106, -39, -46, 53, -103, 106, 123, 56, 119, -55, -116, 24, -25, -112, -117, 125, 4, 16, -38, -4, -9, 122, -19, -104, -99, -26, -8, -85, 59, 104, -104, -93, 98, 86, 64, -105, 0, 28, -76, -123, 78, 25, 40, -85, 101, 5, -105, 96, 14, -51, -108, -67, -18, -122, 110, -107, 54, -82, 18, -94, 73, -100, -55, -114, 62, -1, 35, -40, -116, 48, -18, -6, -98, 82, 111, 50, 97, 16, -54, -124, -34, 32, -115, -2, -24, -9, -114, -9, 68, 83, 9, -114, -45, -59, -114, 74, -73, -4, -110, 32, -47, -54, -54, 15, 97, -86, -96, -74, 44, 78, 15, -32, 15, -77, 123, -23, -45, 88, 75, 122, -68, 44, 2, -73, -47, -14, 34, 42, -3, 93, 113, 47, -109, 123, -124, -68, -94, 124, 1, 62, 19};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("LNXETHYQUGVUIQWNCDFFHKUNTAGYDYFHTKHYWZPDVIQEAXDXXBBZQUKZWGQEMOGRLHRRFADTOKZAYVOBGSDJQZTOLPGOCJIGGFXKCZVDFXNHWCLCEBJHUCPMQHOBMZIVWOLEDGXKZDKVECIIYFXSAMLJMSXQAYNBPNTRTMQJLULNPBRXGTPEJVIJIRTMFOELWHEVEW");
    tmp_tmp_msg_0_1.plan_size = 65103U;
    tmp_tmp_msg_0_1.change_time = 0.5618489655513809;
    tmp_tmp_msg_0_1.change_sid = 39024U;
    tmp_tmp_msg_0_1.change_sname.assign("XVTXRATUDGFUORBSVFYQNKTPOGRRTLSTTZMJUMUJAKFWWHPCTUCESCXIPQIGODQAAOMVGVYLKESVSTSIYEBHWCYFJDDCIPEAGQKSZFKMLYPUZQDS");
    const signed char tmp_tmp_tmp_msg_0_1_0[] = {9, -99, 59, -27, 119, -76, -43, -34, -43, -21, 8, 122, 59, -69, 26, -33, 70, -7, -28, 64, 72, 101, 9, 67, -18, -18, -56, 54, 59, -72, 75, 47, 54, 119, -10, 40, -108, 44, -90, -49, 5, -59, 13, -56, -9, -37, -112, 25, -4, 24, -99, -74, -32, -71, 81, -98, 100, 68, -55, 107, 3, -77, -3, -8, 53, -73, 81, -73, 49, 2, 54, 35, -28, 25, 55, -99, -67, 4, -37, -5, 112, 29, -5, 102, -10, 23, 5, 85, -84, 33, -126, -106, -124, -8, 95, 37, 79, -70, -44, -56, -120, -69, -10, 95, 22, -114, 38, 97, -82, -16, -56, -99, -30, -51, -83, 97, 1, -10, 60, -125, -125, 23, -49, -48, -104, 77, 14, 26, 65, 125, 64, 34, -55, 115, 104, -53, 73, -42, -64, 44, 86, 36, 82, 64, 41, 30, -107, -46, 107, 82, -108, 65, -36, 113, 16, 82, -42, -17, 117, 107, -79, 9, 67, 92, -63, -41, -49, -25, -10, 126, -4, 93, 86};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.plans_info.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.2931467251172343);
    msg.setSource(51316U);
    msg.setSourceEntity(25U);
    msg.setDestination(47065U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.49973999295964777;
    msg.lon = 0.32352604768650683;
    msg.depth = 0.08771972716885068;
    msg.sentence.assign("HDEOIATRNTSHOCPVNKBCZSREPGJKWOAKZWXRZINYTBIOPKHMDPSWSDRJYCKJCIDLOSRBDGRYVQJCTWZMMFOFQSTSWVLABXJWEONHZLBLUXFBIVUNFLPELYWLCTXTXBVBHDHIIBVEMXQUJIYJLNZAWBROOMTYRUJYFRUGLPMMLXXYMZQSVAJPFXRGQCE");
    msg.txtime = 0.4852666658938565;
    msg.modem_type.assign("KSQMJTUOLRMY");
    msg.sys_src.assign("TBXDAYIREKBEAJPCNMLTMYGEUBZNXKTVYFNEXLOVNXEWIYEARBTSMVIYPULUBRYVEGZGWUQWOBQUZJJRLXDCBNSDUIPQQAHOWNWDFSTKOJADSFCSRYWVNKZJRX");
    msg.seq = 50640U;
    msg.sys_dst.assign("EUPIMFXWNBLHFRCNRJUNZQKSCJFFKDUDEZFDESGJR");
    msg.flags = 203U;
    const signed char tmp_msg_0[] = {-12, 23, -66, -56, -118, -88, -121, 80, 70, -16, -70, -70, 23, 44, 57, -35, 8, -59, 40, -41, 98, 85, 66, -5, -62, 39, 30, -113, 71, 39, -92, 110, -126, -115, -109, 67, 85, 21, 81, 95, -32, -94, 119, -117, -52, 99, -56, 7, 118, 92, 86, 120, 82, 64, -91, -91, 88, -113, 56, -119, -90, 91, 120, -125, -122, 48, 62, 94, -39, 110, 78, 46, -81, 56, -117, -112, 62, -118, 43, 47, 3, -1, 110, -118, 28, 74, -25, -73, 110, 117, -25, -65, 39, -107, 38, 94, 90, 64, -105, -41, 109, -69, 100, 38, -1, -114, -37, 49, 126, -103, 104, 23, 7, 4, -15, -66, -55, -96, -115, 29, -53, -28, -28, -122, -95, 58, -123, 40, 110, -101};
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
    msg.setTimeStamp(0.44639126133894247);
    msg.setSource(34440U);
    msg.setSourceEntity(90U);
    msg.setDestination(48436U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.1813940695193832;
    msg.lon = 0.6063373593832402;
    msg.depth = 0.4008027611453946;
    msg.sentence.assign("GGTLOWWQETUKDEGYFIUYOXPUTICSKBRFMZIVTRIDZHQEPTJXOQKGEJLMZZAFWOOTUBNNKCPIESJNGRMPDLRNTHWMEVMWACQ");
    msg.txtime = 0.7719624044332631;
    msg.modem_type.assign("KHNZPZQXLNZPRSWAHTMCUTYGUHIYGAYDHMJOWJTARSCGGDZTQWKEIOVFLVPXLHBUVBWXEBKZAMMSCCKUCPVSSVENJQQZTQWMBRBLAKPAEJDNRYYMTNODWFALYCDBTQIPKYWEIAFSBUOSBPQFBQUFGZCPIGHGVPUOLVCSVVQGCNNOUMDRXZWYNROUHXFRRPFIKMJIRBXYOKFSMJ");
    msg.sys_src.assign("ELCTXRMAFBJWFSQPTLMSCDNRRGNKQMPCSKQZDLLETKPUCYDOUKRRVILHLRXAVLCWWBWANSXRNQGWHTFAYNJIVESBOS");
    msg.seq = 14130U;
    msg.sys_dst.assign("LSSBHFAFJMARGZROTJXFLYGCONJIMQRQBAEMLNHEQIPXBMCYILXNAVTQDIAGVCBFUUSPBKJTRNKQBWXOEMDXNAMKGECTCVLYBWGFEDIPLJEZFYGLHWTPLABLVCSCUBRUVJTJIODFZYOUDSACOZUREKJDNOPYZMJWVMPENBWRGSOHQVS");
    msg.flags = 166U;
    const signed char tmp_msg_0[] = {-78, -11, 97, -4, -84, -49, 10, 89, -113, 84, -117, -45, -97, 39, 24, -50, -85, 83, -43, -116, 61, 95, 71, 9, -6, -51, 75, -95, -39, 75, 22, 106, -62, -108, 78, 21, 44, -43, 48, -91, 124, 83, 112, -79, 11, -86, -102, 85, 3, 43, 60, -65, -27, 23, 15, 47, -113, 25, -16, 74, 64, -3, 70, 42, -9, -78, 32, 124, -110, 43, -121, 51, -105, 10, -33, -101, -41, -73, -85, -79, 35, 13, 104, -102, 44, 101, -82, -126, -93, -3, 100, -77, -25, 19, 7, 61, -112, -8, 8, -104, 17, -52, -7, -32, -70, -40, 28, 4, -33, 9, 12, 56, 17, -93, -45, 30, 65, -87, -5, 121, 57, 97, 103, -116, -64, -55, 9, 47, -85, 105, -64, -28, -113, 111, -74, -93, 46, 27, -33, -39};
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
    msg.setTimeStamp(0.8550587444551673);
    msg.setSource(57396U);
    msg.setSourceEntity(210U);
    msg.setDestination(19445U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.4924177263692229;
    msg.lon = 0.031948986651253564;
    msg.depth = 0.8095414305018469;
    msg.sentence.assign("BYVJCETPDUTJFZJMGMVYDWEEYTQEVYKXCNXFYQJUZIGGOHQKOZXIBPULASFUXPCTAPVPZWIGDEKADRPAMNQHDYMBKLSFIWKXKPLMKMOVETYOBDURVJMWCGHSOBBLSWBOCPAXGYZYXJRXLSFPGHKCMJNUIIARWOKYCILVHALNGNURWITALQUSRASCZNNAHRHQXFBTMJHNDCSZIDRQONRVPCTQFEUDTNLSZISWGHQHWRODOXFQZEW");
    msg.txtime = 0.9919266082208337;
    msg.modem_type.assign("CQUSINHCTOPFCLZSUMTOZRCWDKGPTSPQGGPQX");
    msg.sys_src.assign("JYCAQZHZXHGFFDSNAFUONJEQSDPSOKGXZTPMBEXHCTZGJBCVJKEYIUABGTYOMBMJBRRXMPKWUZNGKLYQLMMFEGDWRCRZTHWCCBIAQ");
    msg.seq = 11200U;
    msg.sys_dst.assign("YVANFYNNLBRIIBEQUKFGDRXOBUETJNLTNVOLMCJYKFDQADFCZTZYOVFTMQHOHZDAEAUNYOBREWMVWOHUGBSKLULPDFLONKJEPMPH");
    msg.flags = 101U;
    const signed char tmp_msg_0[] = {126, -74, 93, 69, -9, 70, 23, -15, 75, 0, 121, 76, -77, 84, 111, 40, 121, -104, 59, -127, -60, 124, -115, 89, -112, 87, 12, 110, 63, 37, 87, -98, -52, 73, -16, -118, 5, -111, 110};
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
    msg.setTimeStamp(0.961249758652028);
    msg.setSource(32561U);
    msg.setSourceEntity(96U);
    msg.setDestination(33085U);
    msg.setDestinationEntity(201U);
    msg.op = 34U;
    msg.system.assign("WSLJIFDHBSOYNNTLCRONPZGCGPRWVKJBFTQOKVVJANYUGLVZJMIHPMDYZNJFFENQRFIULQTODBAQXLSXORM");
    msg.range = 0.7943468906243746;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.4048562726466901;
    tmp_msg_0.sys_src = 16032U;
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
    msg.setTimeStamp(0.8442434389332834);
    msg.setSource(39968U);
    msg.setSourceEntity(190U);
    msg.setDestination(56082U);
    msg.setDestinationEntity(141U);
    msg.op = 49U;
    msg.system.assign("WLNLJRCTTNHVNCPUDGZUXIMWQDINJMQAOGOLSOHIRLKAGUIXKNOJELQXRXBDAHDFUSQHZYGERVRHJZVIXFJCMGFXMRQKVTZULYTDSZPLTSIFKOBPMRLAW");
    msg.range = 0.7710564447394931;
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("UBBAXFLJMWYJELHRIIHROHCRLTKUYZBYSMGYLNIFKJOHACSFYOMWACVGKXVEHSFJNWNXHGCQPZSOPDUDYQWGGUHQVPMGFQOJAVKFHFETJTZMMQIFIOMOEYPVHNZUEIEAOIBVHOTZXLTCPPABDBYWQATQLOWPLDQDTBDECXBBZZJI");
    tmp_msg_0.text.assign("TMGPYQBBDZSKSMNKDHRAMZMHRXFCMFPIRLDNSJFQRNCXCAGXFOTIYMQDUQRPSNSGEWJTLSOOHTYXHYYNLVCIRPSEWOQUSULQMJOIETBBYBQHUZFNJWVMEVAMERWYRLLTSNZVDVHBKTKDCCGPFANZ");
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
    msg.setTimeStamp(0.8722654516801105);
    msg.setSource(63108U);
    msg.setSourceEntity(127U);
    msg.setDestination(24488U);
    msg.setDestinationEntity(212U);
    msg.op = 152U;
    msg.system.assign("AYQKXBPWWGGRVDZTTXTXEPNAWDXQLEGLUTKJBPQEIFACBGKLFTJLXAISZUBDAZBHFFOZZRZSBPSTFUIXYNZVORMJFRQXOBSQXQHHGWSUCANVJDYYETUYDSNRFLXJHKJMPAOJMQPABELKEIDJKWVSECWWCSTOOUPKOWWLVCRQRGVOCZIMEYDUYHRJRILUNMONEGLVTQKJSQHKAWVPVGISFHDLYUHBGMGZPN");
    msg.range = 0.9788444993806757;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.6822850011309176;
    tmp_msg_0.x = 0.05954486112709756;
    tmp_msg_0.y = 0.19334439975760953;
    tmp_msg_0.z = 0.16012965260184098;
    tmp_msg_0.timestep = 0.02629613780709328;
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
    msg.setTimeStamp(0.5926772990732477);
    msg.setSource(18972U);
    msg.setSourceEntity(222U);
    msg.setDestination(4630U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.05981417501277919);
    msg.setSource(29212U);
    msg.setSourceEntity(53U);
    msg.setDestination(29836U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.013888167613584135);
    msg.setSource(505U);
    msg.setSourceEntity(32U);
    msg.setDestination(49134U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.5779230898918607);
    msg.setSource(27014U);
    msg.setSourceEntity(75U);
    msg.setDestination(43636U);
    msg.setDestinationEntity(20U);
    msg.list.assign("EJUWXCKEAYOELTPHZGVYUNMCHNASPPJIVBXSWOEJFWHGROLOSNBKXQPGZTXSTQNZWZQCMGWDXLHUZRMIQITVWYRPUSBCVMVWJBHOPGJIKEMJBIJXULXDMQRIKVFEDCXTIWYSSZBJBSGFHFCHNGMZZQVAYKRFQEZDASLFZIRTYHPFWUWLDPCAAQKFRUKTQBGCUTERPNUBTMOAO");

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
    msg.setTimeStamp(0.6899523597891204);
    msg.setSource(7063U);
    msg.setSourceEntity(118U);
    msg.setDestination(2984U);
    msg.setDestinationEntity(97U);
    msg.list.assign("IDGVXREVDPJNGSSNTPLCQQJUJANYKMCSQGWAXIWFWQUPPLKDXQHOYZRKDHMEFCYQQXELXABHTDVXNHBTROEUSRFWMUUB");

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
    msg.setTimeStamp(0.22936365508574597);
    msg.setSource(25833U);
    msg.setSourceEntity(165U);
    msg.setDestination(13173U);
    msg.setDestinationEntity(227U);
    msg.list.assign("YSAXYWLFXNKHWFMKUPKVQQBHPBDFOQPHEBHTDAIUVEZKFDCGRCXUEXENYBVDESRIDRBTSTTZJNUMLOFLOREJLWJPYBKHTUICDYOFMKEYEAGMOUITAPAZZWFTMXLNDZJVZAPYQATJWIMPIEKGUIMXYVRBQICLCICSMNKDWHBRSBVGRUQ");

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
    msg.setTimeStamp(0.9808140958481629);
    msg.setSource(43216U);
    msg.setSourceEntity(130U);
    msg.setDestination(26729U);
    msg.setDestinationEntity(122U);
    msg.peer.assign("UFCOIVBEPAONIMLNCLDYQPOMLPMBJNQHRXQJYAQOEHJKANTBV");
    msg.rssi = 0.01223117957509845;
    msg.integrity = 62781U;

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
    msg.setTimeStamp(0.6095075479456142);
    msg.setSource(28455U);
    msg.setSourceEntity(49U);
    msg.setDestination(9400U);
    msg.setDestinationEntity(31U);
    msg.peer.assign("ZIWYGBMZAPTOHBVAFNVIEVXBPTZZNJCYHSRNIXJPGWCFOVIBBQOSPFQVKJGRPNMQKEURMRSSTYBEMQGKZJRQEFDKYKCWMFUGGWTYWKQSGFATPELJBCYFZJKLAQGSNQDSXLIYNLJKPDSLLJHDEZPLARJEHMPFHUVODCHXRYTUCCELHZOPOMXCFXNDHWIYOXZDLDKH");
    msg.rssi = 0.7655931652930903;
    msg.integrity = 12361U;

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
    msg.setTimeStamp(0.47013676466977206);
    msg.setSource(4726U);
    msg.setSourceEntity(119U);
    msg.setDestination(55994U);
    msg.setDestinationEntity(62U);
    msg.peer.assign("UAKVCONXMEXPCJEKNCVMPSRLZMYACZTHRPGYTAQZOFZLEFIXFLXOIBDUPHOXJFGHDDNZKBDSSNXWLGOMSEFKAIMBFUELWUCLHKMNBHHRSWKGKWQSGDVYJRGPYLQPTIYBVPIHIPMZTJRVLKZSIDQIGUASWZDZQZYRTWSERNUORXIXQHVBCGBOYJQWAQLJRAGBSUGEJTHICVODNTVPFKHNDAJBVFVRTUMPAQYYJ");
    msg.rssi = 0.6815074448304126;
    msg.integrity = 49677U;

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
    msg.setTimeStamp(0.3101224640861797);
    msg.setSource(48466U);
    msg.setSourceEntity(175U);
    msg.setDestination(50498U);
    msg.setDestinationEntity(168U);
    msg.req_id = 14743U;
    msg.destination.assign("DJKQZMGUQFOVPAAEWSBDYKRMJRPRXYPZUNXAXGBHQFYTKSHIECTGGNIVFOQMKGUOTPKYDNOF");
    msg.timeout = 0.53092770340268;
    msg.range = 0.1347508880193793;
    msg.type = 29U;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("SLNYGYDATAYOVHUBHLVJMNCLMZEQXTIZYSBAADYOGVGGVKSEXWATICFRNLZOLKKVPWUXKPCNYPHGTCXVDJNERHBTEGVOQVKHOFORUDWUUFFBZDANXCNXBWRPUZWKQMYFJXGAEAJUWHEHTOSRWKFNVLKSKZBXVFBIJEUFODIGJIIHFQWZMJQTTFCCMQQJQIMBZQSCORNPDYWTRJWHYLZRLHAQPMPAPINOEJELIUSMXKSUCZBERCDXRYBTPDGID");
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
    msg.setTimeStamp(0.014733375676333482);
    msg.setSource(41040U);
    msg.setSourceEntity(201U);
    msg.setDestination(16996U);
    msg.setDestinationEntity(80U);
    msg.req_id = 13147U;
    msg.destination.assign("KRZOBDTKLFFFTSQOXTCFEXFSUCUY");
    msg.timeout = 0.6762459140760837;
    msg.range = 0.9634920202288896;
    msg.type = 108U;
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.5244093119329611;
    tmp_msg_0.i = 0.9830031768997453;
    tmp_msg_0.d = 0.4182997933433211;
    tmp_msg_0.a = 0.8458494238693084;
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
    msg.setTimeStamp(0.6254373879970275);
    msg.setSource(62655U);
    msg.setSourceEntity(112U);
    msg.setDestination(11887U);
    msg.setDestinationEntity(63U);
    msg.req_id = 29U;
    msg.destination.assign("BIHMSYINGXVRPZDDUKZBJPBBKGJFMDIXEOZRQSGOPAOVKSYSONDEXIDFQSVIGCMNGLTVWNPVTLLGKBMGQWWPGJWJOQTIOUAMADCZDZXWLMWTCV");
    msg.timeout = 0.44282838184774376;
    msg.range = 0.0678694090359031;
    msg.type = 238U;
    IMC::CommSystemsQuery tmp_msg_0;
    tmp_msg_0.type = 78U;
    tmp_msg_0.comm_interface = 18870U;
    tmp_msg_0.model = 52531U;
    tmp_msg_0.list.assign("EWWQAGKBCLTADNMSQUUYIWJCTRZWZLGPSEWHMCRNHETSDRSDUWXUHQJHZTDEAGIQJRGOPEICNIEIAVDTHGHBXXAKVBFUXPCMKLORUOFOBBALTQMIVUZVLVFGSMLGFMOTRVKKKJWIFNDDNIRNNWYYNERBTAZWYCCPAZBCYAOCKZZVVNIUZYYFRTRJXPGKHQK");
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
    msg.setTimeStamp(0.7314596483067224);
    msg.setSource(34423U);
    msg.setSourceEntity(156U);
    msg.setDestination(1839U);
    msg.setDestinationEntity(53U);
    msg.req_id = 61494U;
    msg.type = 43U;
    msg.status = 206U;
    msg.info.assign("DRBIXXSVBJPBWOHKVYCNUYXGKUUKDCTERRVCGOUJYNEDPHHGDSLWFOZWYCYAXTVWOWYRQEFJRULSAWARIMHGSKQMTQLDZAJTJOXVQPXULOOMTYJFGCQZFICUPHSLLOKPRAXSVIBWAWGPFGNYVZCIVNTM");
    msg.range = 0.2645433015906111;

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
    msg.setTimeStamp(0.8410319889766994);
    msg.setSource(24416U);
    msg.setSourceEntity(137U);
    msg.setDestination(19249U);
    msg.setDestinationEntity(20U);
    msg.req_id = 56719U;
    msg.type = 5U;
    msg.status = 35U;
    msg.info.assign("SDCEPOGUESMDNYIBUGAMIYTBGZTKAXCRWHUZMWHALCFKIWJNYNTIJWRRTTVMHJUBFLXSPOXKZDLGDFIODCAFUJTZLHBMPTHYPPNDGVXONVXCQRFUVPOKQLTMCPLZDEYRWYVRHQBZVJMNWNVVCGJIUYKQGNAOZFYYJLHJKECLEBAAFJHIUPQPESYLCBFSVSAONKWEXQCQURTVXAKPDNZBKFKDRELSWUA");
    msg.range = 0.49384249120301527;

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
    msg.setTimeStamp(0.2291752544019674);
    msg.setSource(19486U);
    msg.setSourceEntity(13U);
    msg.setDestination(14242U);
    msg.setDestinationEntity(61U);
    msg.req_id = 42219U;
    msg.type = 169U;
    msg.status = 188U;
    msg.info.assign("RBYKOWITZKPMQLQENTNXYEFGXJJTSHBARJOOKVPXBRWZGPGVWXJXODMSBMGQLXYBDXTCEUKSUNAQCQYABRLULZUJLFVGAZMKXEMXFWIEBYFPFALGHQHBQBNDZTSLIAISURCDWXHMCPTFVSRVWCUKGGTHLZ");
    msg.range = 0.9415273902985477;

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
    msg.setTimeStamp(0.1912283144039192);
    msg.setSource(25457U);
    msg.setSourceEntity(164U);
    msg.setDestination(58320U);
    msg.setDestinationEntity(66U);
    msg.system.assign("QMXDRFFNTOXOKYMGZIOIBMOJOQHCNSQUQCGXFVTEOJPUZHHEWRIGDAWVSNRZPBIRJUUYQDETPTZHQMSLBZLNMEULYIOKVNVTNBJGYWKUHWQAABUOAPFDDAGKAIXXUGTYLWWJZBCSLMKCSVXYVJWUMFSKJRJUANIPTYCTZSZSKRGOHPXQIBWPNCGLRZGELDLRNCAFGDXONAPDICFXJSVEHWJCTWFZELBXVDMAECKHDIQBBYYHLSVMKQ");
    msg.op = 100U;

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
    msg.setTimeStamp(0.5343998964213997);
    msg.setSource(36231U);
    msg.setSourceEntity(210U);
    msg.setDestination(41751U);
    msg.setDestinationEntity(89U);
    msg.system.assign("LLPHKESSRWTNECIA");
    msg.op = 37U;

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
    msg.setTimeStamp(0.5935342742982047);
    msg.setSource(24641U);
    msg.setSourceEntity(214U);
    msg.setDestination(39720U);
    msg.setDestinationEntity(17U);
    msg.system.assign("PRQJZHTTBIEDJPXIWXCLDSQCGDMURIRFDMXVBCZKSZDWOTYANLHNCIYANFBSBMEKULEPKDRWNXWGCSRTFMVHYRUVTJRIBQGJOCXYYTKGHVWEMLDOYVVQZFITINNCCHZLHALVDFUMWYHHCVDJXOFUSLNHCALQZVIFSPPUYSJWPEZWHBKUMSVBGBUYWGJFMBSTERJJEXAPENMA");
    msg.op = 64U;

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
    msg.setTimeStamp(0.6380658091565843);
    msg.setSource(47226U);
    msg.setSourceEntity(137U);
    msg.setDestination(58253U);
    msg.setDestinationEntity(163U);
    msg.value = -9705;

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
    msg.setTimeStamp(0.5857960375419078);
    msg.setSource(42227U);
    msg.setSourceEntity(229U);
    msg.setDestination(22615U);
    msg.setDestinationEntity(144U);
    msg.value = 16041;

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
    msg.setTimeStamp(0.23251498570738682);
    msg.setSource(64363U);
    msg.setSourceEntity(104U);
    msg.setDestination(49087U);
    msg.setDestinationEntity(117U);
    msg.value = 1424;

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
    msg.setTimeStamp(0.11135309048660635);
    msg.setSource(17169U);
    msg.setSourceEntity(33U);
    msg.setDestination(43448U);
    msg.setDestinationEntity(12U);
    msg.value = 0.6450008527953581;

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
    msg.setTimeStamp(0.37370755820383916);
    msg.setSource(44045U);
    msg.setSourceEntity(159U);
    msg.setDestination(37443U);
    msg.setDestinationEntity(228U);
    msg.value = 0.8642809895640055;

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
    msg.setTimeStamp(0.2958821905139347);
    msg.setSource(4617U);
    msg.setSourceEntity(251U);
    msg.setDestination(5522U);
    msg.setDestinationEntity(37U);
    msg.value = 0.6835555171706794;

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
    msg.setTimeStamp(0.7296818285574924);
    msg.setSource(58012U);
    msg.setSourceEntity(123U);
    msg.setDestination(37839U);
    msg.setDestinationEntity(88U);
    msg.value = 0.7062446673917365;

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
    msg.setTimeStamp(0.792828319379342);
    msg.setSource(2072U);
    msg.setSourceEntity(211U);
    msg.setDestination(23622U);
    msg.setDestinationEntity(162U);
    msg.value = 0.17838477866353808;

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
    msg.setTimeStamp(0.9680938948399653);
    msg.setSource(42692U);
    msg.setSourceEntity(234U);
    msg.setDestination(39899U);
    msg.setDestinationEntity(117U);
    msg.value = 0.7881230226232013;

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
    msg.setTimeStamp(0.2843078454658251);
    msg.setSource(34827U);
    msg.setSourceEntity(225U);
    msg.setDestination(31123U);
    msg.setDestinationEntity(65U);
    msg.validity = 41210U;
    msg.type = 222U;
    msg.utc_year = 45219U;
    msg.utc_month = 17U;
    msg.utc_day = 169U;
    msg.utc_time = 0.8586054325194622;
    msg.lat = 0.12385089708987784;
    msg.lon = 0.4537834003386302;
    msg.height = 0.8503047413645035;
    msg.satellites = 228U;
    msg.cog = 0.04970186102158869;
    msg.sog = 0.9180805438010373;
    msg.hdop = 0.6780905507613568;
    msg.vdop = 0.3263392428547791;
    msg.hacc = 0.9322033920514855;
    msg.vacc = 0.20375675080459799;

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
    msg.setTimeStamp(0.3012830773418179);
    msg.setSource(50284U);
    msg.setSourceEntity(36U);
    msg.setDestination(6590U);
    msg.setDestinationEntity(197U);
    msg.validity = 48601U;
    msg.type = 63U;
    msg.utc_year = 25031U;
    msg.utc_month = 161U;
    msg.utc_day = 94U;
    msg.utc_time = 0.2976644840588234;
    msg.lat = 0.8200399603562754;
    msg.lon = 0.7383149843521111;
    msg.height = 0.7787478912554341;
    msg.satellites = 99U;
    msg.cog = 0.46665049525310154;
    msg.sog = 0.9395285324094693;
    msg.hdop = 0.4911476295244026;
    msg.vdop = 0.38260715857682426;
    msg.hacc = 0.9329782696979348;
    msg.vacc = 0.331709299436035;

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
    msg.setTimeStamp(0.37026830013783374);
    msg.setSource(62472U);
    msg.setSourceEntity(224U);
    msg.setDestination(45625U);
    msg.setDestinationEntity(131U);
    msg.validity = 12048U;
    msg.type = 61U;
    msg.utc_year = 6335U;
    msg.utc_month = 84U;
    msg.utc_day = 242U;
    msg.utc_time = 0.6736287755937628;
    msg.lat = 0.1661231083580229;
    msg.lon = 0.6112771624204765;
    msg.height = 0.10007509475389142;
    msg.satellites = 237U;
    msg.cog = 0.23546453426456848;
    msg.sog = 0.5486633356156909;
    msg.hdop = 0.3330903236592312;
    msg.vdop = 0.16646518529437015;
    msg.hacc = 0.05156477176930363;
    msg.vacc = 0.5231375034934558;

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
    msg.setTimeStamp(0.11221162496512505);
    msg.setSource(35362U);
    msg.setSourceEntity(103U);
    msg.setDestination(50119U);
    msg.setDestinationEntity(12U);
    msg.time = 0.7503548700292944;
    msg.phi = 0.5176088708710854;
    msg.theta = 0.6748642973562149;
    msg.psi = 0.34451414068030417;
    msg.psi_magnetic = 0.00046007938423975325;

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
    msg.setTimeStamp(0.7954783891394404);
    msg.setSource(33099U);
    msg.setSourceEntity(213U);
    msg.setDestination(20904U);
    msg.setDestinationEntity(190U);
    msg.time = 0.9429272710164518;
    msg.phi = 0.2847359878890001;
    msg.theta = 0.24374823272036883;
    msg.psi = 0.9375542034540547;
    msg.psi_magnetic = 0.4509115512142331;

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
    msg.setTimeStamp(0.4697443338363101);
    msg.setSource(26884U);
    msg.setSourceEntity(227U);
    msg.setDestination(34257U);
    msg.setDestinationEntity(70U);
    msg.time = 0.14352464215067573;
    msg.phi = 0.9646646459318768;
    msg.theta = 0.6822302107835024;
    msg.psi = 0.9964232012858902;
    msg.psi_magnetic = 0.13885399783918873;

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
    msg.setTimeStamp(0.5332468865950684);
    msg.setSource(63997U);
    msg.setSourceEntity(186U);
    msg.setDestination(4018U);
    msg.setDestinationEntity(179U);
    msg.time = 0.6985055516307505;
    msg.x = 0.31677099391228714;
    msg.y = 0.7653548321454732;
    msg.z = 0.45653006072624536;
    msg.timestep = 0.10804715261450049;

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
    msg.setTimeStamp(0.15618022951928023);
    msg.setSource(54672U);
    msg.setSourceEntity(220U);
    msg.setDestination(55205U);
    msg.setDestinationEntity(174U);
    msg.time = 0.28967009059897364;
    msg.x = 0.8409922774699049;
    msg.y = 0.4612477621851503;
    msg.z = 0.27674713476544066;
    msg.timestep = 0.45027615828240464;

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
    msg.setTimeStamp(0.1836518292382776);
    msg.setSource(16723U);
    msg.setSourceEntity(27U);
    msg.setDestination(36439U);
    msg.setDestinationEntity(206U);
    msg.time = 0.91764749919501;
    msg.x = 0.828147174085215;
    msg.y = 0.1833210325639899;
    msg.z = 0.7666409120296389;
    msg.timestep = 0.7371392488687947;

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
    msg.setTimeStamp(0.7251485025170606);
    msg.setSource(14183U);
    msg.setSourceEntity(160U);
    msg.setDestination(44248U);
    msg.setDestinationEntity(253U);
    msg.time = 0.012773736431327176;
    msg.x = 0.8339198117070697;
    msg.y = 0.5151435502411746;
    msg.z = 0.6099512520355778;

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
    msg.setTimeStamp(0.2572854859999991);
    msg.setSource(13047U);
    msg.setSourceEntity(66U);
    msg.setDestination(63954U);
    msg.setDestinationEntity(233U);
    msg.time = 0.41678767730551924;
    msg.x = 0.7219826244361097;
    msg.y = 0.739416113445521;
    msg.z = 0.7142433477300958;

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
    msg.setTimeStamp(0.27132930264108646);
    msg.setSource(52284U);
    msg.setSourceEntity(216U);
    msg.setDestination(30051U);
    msg.setDestinationEntity(47U);
    msg.time = 0.8196442134878359;
    msg.x = 0.09821676186154138;
    msg.y = 0.42692357325651387;
    msg.z = 0.1926075809411597;

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
    msg.setTimeStamp(0.515098303442775);
    msg.setSource(18922U);
    msg.setSourceEntity(250U);
    msg.setDestination(40215U);
    msg.setDestinationEntity(117U);
    msg.time = 0.8621125914827832;
    msg.x = 0.06165995179081296;
    msg.y = 0.3451471305680368;
    msg.z = 0.1698768248780953;

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
    msg.setTimeStamp(0.8129938198069433);
    msg.setSource(41223U);
    msg.setSourceEntity(70U);
    msg.setDestination(10499U);
    msg.setDestinationEntity(247U);
    msg.time = 0.2795335010603429;
    msg.x = 0.9314755298887616;
    msg.y = 0.5440544655236341;
    msg.z = 0.7071057873394215;

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
    msg.setTimeStamp(0.2715381303930351);
    msg.setSource(6856U);
    msg.setSourceEntity(23U);
    msg.setDestination(56639U);
    msg.setDestinationEntity(26U);
    msg.time = 0.581087639826708;
    msg.x = 0.9970989139586502;
    msg.y = 0.7672296597722605;
    msg.z = 0.32636489743900265;

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
    msg.setTimeStamp(0.7464531156343749);
    msg.setSource(13325U);
    msg.setSourceEntity(250U);
    msg.setDestination(30850U);
    msg.setDestinationEntity(44U);
    msg.time = 0.1805062284434399;
    msg.x = 0.4234312602774779;
    msg.y = 0.2164993494270403;
    msg.z = 0.8642636850888785;

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
    msg.setTimeStamp(0.7109657457101651);
    msg.setSource(40622U);
    msg.setSourceEntity(153U);
    msg.setDestination(59955U);
    msg.setDestinationEntity(228U);
    msg.time = 0.5317117126993742;
    msg.x = 0.48437544890672;
    msg.y = 0.9216335911760014;
    msg.z = 0.10558325170007554;

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
    msg.setTimeStamp(0.8550432449542869);
    msg.setSource(18898U);
    msg.setSourceEntity(130U);
    msg.setDestination(7270U);
    msg.setDestinationEntity(141U);
    msg.time = 0.8157622258657512;
    msg.x = 0.7658320865879041;
    msg.y = 0.7368556589257071;
    msg.z = 0.3395485303111929;

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
    msg.setTimeStamp(0.6860707969168232);
    msg.setSource(55286U);
    msg.setSourceEntity(35U);
    msg.setDestination(22673U);
    msg.setDestinationEntity(223U);
    msg.validity = 130U;
    msg.x = 0.4511613267510626;
    msg.y = 0.26178450799709885;
    msg.z = 0.3663368947338792;

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
    msg.setTimeStamp(0.7207831894864171);
    msg.setSource(48088U);
    msg.setSourceEntity(125U);
    msg.setDestination(39630U);
    msg.setDestinationEntity(141U);
    msg.validity = 175U;
    msg.x = 0.2610717744897594;
    msg.y = 0.5160184829906198;
    msg.z = 0.42457437842748946;

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
    msg.setTimeStamp(0.8064663554913101);
    msg.setSource(45940U);
    msg.setSourceEntity(163U);
    msg.setDestination(25169U);
    msg.setDestinationEntity(140U);
    msg.validity = 74U;
    msg.x = 0.9754958867534046;
    msg.y = 0.6276217291780308;
    msg.z = 0.6427506956269773;

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
    msg.setTimeStamp(0.19840467713758503);
    msg.setSource(8993U);
    msg.setSourceEntity(110U);
    msg.setDestination(26202U);
    msg.setDestinationEntity(206U);
    msg.validity = 214U;
    msg.x = 0.696544877128762;
    msg.y = 0.8786260797143758;
    msg.z = 0.6724711290572;

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
    msg.setTimeStamp(0.36014714784277);
    msg.setSource(2798U);
    msg.setSourceEntity(158U);
    msg.setDestination(37730U);
    msg.setDestinationEntity(186U);
    msg.validity = 222U;
    msg.x = 0.2494601152832766;
    msg.y = 0.7294349175193967;
    msg.z = 0.08837127294410396;

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
    msg.setTimeStamp(0.8210704975108687);
    msg.setSource(9291U);
    msg.setSourceEntity(210U);
    msg.setDestination(18477U);
    msg.setDestinationEntity(73U);
    msg.validity = 63U;
    msg.x = 0.25444820730225337;
    msg.y = 0.28968226108540585;
    msg.z = 0.4991889688068555;

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
    msg.setTimeStamp(0.5899847283156938);
    msg.setSource(7419U);
    msg.setSourceEntity(63U);
    msg.setDestination(26036U);
    msg.setDestinationEntity(117U);
    msg.time = 0.4389513449416965;
    msg.x = 0.8265833994363158;
    msg.y = 0.6508504395950586;
    msg.z = 0.5292861179986871;

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
    msg.setTimeStamp(0.23968128044521786);
    msg.setSource(17544U);
    msg.setSourceEntity(42U);
    msg.setDestination(27336U);
    msg.setDestinationEntity(43U);
    msg.time = 0.03314837391904013;
    msg.x = 0.7417677648894789;
    msg.y = 0.4020139553436536;
    msg.z = 0.7141595613048293;

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
    msg.setTimeStamp(0.719315851950991);
    msg.setSource(23616U);
    msg.setSourceEntity(241U);
    msg.setDestination(42324U);
    msg.setDestinationEntity(135U);
    msg.time = 0.2504069466431661;
    msg.x = 0.45778787014587097;
    msg.y = 0.647832903850712;
    msg.z = 0.7477376564124237;

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
    msg.setTimeStamp(0.5524316161702935);
    msg.setSource(5382U);
    msg.setSourceEntity(44U);
    msg.setDestination(55999U);
    msg.setDestinationEntity(81U);
    msg.validity = 55U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.43724681206257454;
    tmp_msg_0.y = 0.9729256828177572;
    tmp_msg_0.z = 0.3367950755683031;
    tmp_msg_0.phi = 0.8422815395850083;
    tmp_msg_0.theta = 0.3981328783618959;
    tmp_msg_0.psi = 0.10999931630488391;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.4509447776049158;

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
    msg.setTimeStamp(0.5679918833853538);
    msg.setSource(39752U);
    msg.setSourceEntity(229U);
    msg.setDestination(41048U);
    msg.setDestinationEntity(224U);
    msg.validity = 118U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.22992483809358555;
    tmp_msg_0.y = 0.0019338626213919463;
    tmp_msg_0.z = 0.7815546172166615;
    tmp_msg_0.phi = 0.8786788671600577;
    tmp_msg_0.theta = 0.07391012199054914;
    tmp_msg_0.psi = 0.4312156850915878;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.3681909616593231;
    tmp_msg_1.beam_height = 0.2241904692061375;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.25021403244369567;

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
    msg.setTimeStamp(0.7517939700754478);
    msg.setSource(47244U);
    msg.setSourceEntity(48U);
    msg.setDestination(12669U);
    msg.setDestinationEntity(10U);
    msg.validity = 196U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6839485475492615;
    tmp_msg_0.beam_height = 0.6324595921058791;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.625386167743558;

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
    msg.setTimeStamp(0.047800645127369035);
    msg.setSource(33740U);
    msg.setSourceEntity(96U);
    msg.setDestination(48843U);
    msg.setDestinationEntity(206U);
    msg.value = 0.7661835748792526;

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
    msg.setTimeStamp(0.1635755037140194);
    msg.setSource(5196U);
    msg.setSourceEntity(128U);
    msg.setDestination(65475U);
    msg.setDestinationEntity(241U);
    msg.value = 0.5390910075878982;

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
    msg.setTimeStamp(0.7103184191548355);
    msg.setSource(11378U);
    msg.setSourceEntity(254U);
    msg.setDestination(45218U);
    msg.setDestinationEntity(143U);
    msg.value = 0.1700327823122465;

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
    msg.setTimeStamp(0.3848489004087584);
    msg.setSource(836U);
    msg.setSourceEntity(107U);
    msg.setDestination(23493U);
    msg.setDestinationEntity(99U);
    msg.value = 0.9075505220598243;

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
    msg.setTimeStamp(0.39851082405588645);
    msg.setSource(27996U);
    msg.setSourceEntity(95U);
    msg.setDestination(2368U);
    msg.setDestinationEntity(108U);
    msg.value = 0.06979146957681259;

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
    msg.setTimeStamp(0.7218336688371585);
    msg.setSource(5971U);
    msg.setSourceEntity(123U);
    msg.setDestination(47626U);
    msg.setDestinationEntity(112U);
    msg.value = 0.10122690119720235;

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
    msg.setTimeStamp(0.2620438859642782);
    msg.setSource(59558U);
    msg.setSourceEntity(117U);
    msg.setDestination(20712U);
    msg.setDestinationEntity(100U);
    msg.value = 0.28030824810791033;

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
    msg.setTimeStamp(0.4162760263553801);
    msg.setSource(62781U);
    msg.setSourceEntity(43U);
    msg.setDestination(59291U);
    msg.setDestinationEntity(122U);
    msg.value = 0.1782705356439659;

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
    msg.setTimeStamp(0.2104292088647255);
    msg.setSource(48609U);
    msg.setSourceEntity(158U);
    msg.setDestination(49581U);
    msg.setDestinationEntity(60U);
    msg.value = 0.1369017761293685;

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
    msg.setTimeStamp(0.647700468893767);
    msg.setSource(35761U);
    msg.setSourceEntity(245U);
    msg.setDestination(15877U);
    msg.setDestinationEntity(85U);
    msg.value = 0.18368489403081467;

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
    msg.setTimeStamp(0.10060948304581974);
    msg.setSource(11532U);
    msg.setSourceEntity(243U);
    msg.setDestination(46280U);
    msg.setDestinationEntity(31U);
    msg.value = 0.4741270168816162;

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
    msg.setTimeStamp(0.19597400121790032);
    msg.setSource(45331U);
    msg.setSourceEntity(228U);
    msg.setDestination(9336U);
    msg.setDestinationEntity(21U);
    msg.value = 0.9941716395855087;

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
    msg.setTimeStamp(0.2142544724789932);
    msg.setSource(55115U);
    msg.setSourceEntity(114U);
    msg.setDestination(39886U);
    msg.setDestinationEntity(64U);
    msg.value = 0.1441379559899605;

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
    msg.setTimeStamp(0.2519452153199542);
    msg.setSource(22197U);
    msg.setSourceEntity(81U);
    msg.setDestination(63584U);
    msg.setDestinationEntity(92U);
    msg.value = 0.058419843885499034;

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
    msg.setTimeStamp(0.3668519850653469);
    msg.setSource(19459U);
    msg.setSourceEntity(127U);
    msg.setDestination(52492U);
    msg.setDestinationEntity(191U);
    msg.value = 0.5526521339623076;

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
    msg.setTimeStamp(0.9459988617064342);
    msg.setSource(64226U);
    msg.setSourceEntity(243U);
    msg.setDestination(64299U);
    msg.setDestinationEntity(204U);
    msg.value = 0.27295564000834616;

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
    msg.setTimeStamp(0.8743184626857281);
    msg.setSource(16994U);
    msg.setSourceEntity(94U);
    msg.setDestination(35076U);
    msg.setDestinationEntity(125U);
    msg.value = 0.8932807583642584;

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
    msg.setTimeStamp(0.8684122966879234);
    msg.setSource(56607U);
    msg.setSourceEntity(25U);
    msg.setDestination(6589U);
    msg.setDestinationEntity(27U);
    msg.value = 0.1021108311990685;

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
    msg.setTimeStamp(0.8597040771670774);
    msg.setSource(16722U);
    msg.setSourceEntity(149U);
    msg.setDestination(20831U);
    msg.setDestinationEntity(94U);
    msg.value = 0.3147315941736839;

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
    msg.setTimeStamp(0.837623738931836);
    msg.setSource(40731U);
    msg.setSourceEntity(36U);
    msg.setDestination(48010U);
    msg.setDestinationEntity(213U);
    msg.value = 0.7617603778830662;

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
    msg.setTimeStamp(0.5254204613672698);
    msg.setSource(31698U);
    msg.setSourceEntity(103U);
    msg.setDestination(27302U);
    msg.setDestinationEntity(145U);
    msg.value = 0.6807887525752974;

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
    msg.setTimeStamp(0.49128049646289684);
    msg.setSource(14030U);
    msg.setSourceEntity(39U);
    msg.setDestination(24772U);
    msg.setDestinationEntity(109U);
    msg.value = 0.047903203852958764;

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
    msg.setTimeStamp(0.32409117522395614);
    msg.setSource(37089U);
    msg.setSourceEntity(114U);
    msg.setDestination(7760U);
    msg.setDestinationEntity(69U);
    msg.value = 0.5116350643339588;

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
    msg.setTimeStamp(0.21070204465278441);
    msg.setSource(32482U);
    msg.setSourceEntity(71U);
    msg.setDestination(53089U);
    msg.setDestinationEntity(138U);
    msg.value = 0.30791935231442935;

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
    msg.setTimeStamp(0.992335987049224);
    msg.setSource(45126U);
    msg.setSourceEntity(236U);
    msg.setDestination(59600U);
    msg.setDestinationEntity(102U);
    msg.direction = 0.18616022416925504;
    msg.speed = 0.5899097431358278;
    msg.turbulence = 0.3480897131992533;

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
    msg.setTimeStamp(0.6560045090179936);
    msg.setSource(44696U);
    msg.setSourceEntity(183U);
    msg.setDestination(28261U);
    msg.setDestinationEntity(71U);
    msg.direction = 0.03512036912164895;
    msg.speed = 0.8440957445160667;
    msg.turbulence = 0.7897274666998052;

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
    msg.setTimeStamp(0.3289502903195435);
    msg.setSource(37653U);
    msg.setSourceEntity(189U);
    msg.setDestination(16239U);
    msg.setDestinationEntity(180U);
    msg.direction = 0.9241165389476937;
    msg.speed = 0.7433919641808786;
    msg.turbulence = 0.8599321566448238;

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
    msg.setTimeStamp(0.28352991185522713);
    msg.setSource(23763U);
    msg.setSourceEntity(140U);
    msg.setDestination(54572U);
    msg.setDestinationEntity(181U);
    msg.value = 0.2678912189524968;

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
    msg.setTimeStamp(0.6834334854219424);
    msg.setSource(6823U);
    msg.setSourceEntity(129U);
    msg.setDestination(21311U);
    msg.setDestinationEntity(105U);
    msg.value = 0.20184017603273618;

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
    msg.setTimeStamp(0.9792217380334916);
    msg.setSource(60670U);
    msg.setSourceEntity(180U);
    msg.setDestination(20723U);
    msg.setDestinationEntity(88U);
    msg.value = 0.10667221992197184;

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
    msg.setTimeStamp(0.08567400091258226);
    msg.setSource(10004U);
    msg.setSourceEntity(156U);
    msg.setDestination(62068U);
    msg.setDestinationEntity(132U);
    msg.value.assign("VDMPWUJZLJCVYFZRPOXXNFHPPUCJOYWQSSLSJASHEWKXOEMPCKOSBMYCBNBDZJYKEBTRRRJKRNONVRZQKICPNPONWBYYFITDBXEQXSIYODRQCAAQKIAXDHYFTWIUGJKIDGRAEEBQSZUXQTKTLYWHZQGAHHVMUUEIWCHXSPDCPAGQXVLFUZWCMBZNKGTJTLCVZGTNMLUEDEWMPFIUXJK");

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
    msg.setTimeStamp(0.06966927601949657);
    msg.setSource(19758U);
    msg.setSourceEntity(111U);
    msg.setDestination(10372U);
    msg.setDestinationEntity(246U);
    msg.value.assign("NHEVQSQUBKVYRNSKYZR");

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
    msg.setTimeStamp(0.06462282577677048);
    msg.setSource(27183U);
    msg.setSourceEntity(44U);
    msg.setDestination(55999U);
    msg.setDestinationEntity(157U);
    msg.value.assign("EKBEBQIMWXTJPRUCMWR");

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
    msg.setTimeStamp(0.7625863166017627);
    msg.setSource(36385U);
    msg.setSourceEntity(108U);
    msg.setDestination(53418U);
    msg.setDestinationEntity(97U);
    const signed char tmp_msg_0[] = {104, 37, -48, -78, -47, -26, 97, -76, -109, -59, -55, -122, 71, -126, -90, -92, -120, 62, -109, 61, -73, -68, 59, -76, 83, -119, 31, 110, -31, -86, 80, 68, 83, 40, -114, 13, 67, 29, -21, -57, -76, 90, -30, -35, 30, 34, -35, -103, 28, -53, -66, -47, -8, 113, -118, 58, -126, -28, 14, -104, 17, 113, 16, 39, 61, -83, -92, 28, 57, 12, 83, -49, -77, -7, -84, 61, 96, -50, -22, 125, 99, -110, 32, -70, -87, 49, 21, -12, -25, -122, 83, -20, -100, 37, -24, -112, 7, -73, -66, -34, -67, -111, 45, 42, 67, 109, 66, -112, 40, 41, 80, 34, 49, -48, 92, -103, -59, -63, 105, -56, -108, -118, 79, 36, -1, 21, 10, -34, 35, -128, 100, 114, -47, 28, 28, -13, -52, 36, -37, 104, 103, -36, -102, 22, 64, 66, -46, -13, -39, -127, -97, 44, 98, 74, -108, -22, -58, -114, 59, 53, -32, 11, -9, -5, 11, -107, -19, 97, -23, 14, 56, -46, -90, -94, -72, 2, 17, 47, -11, -17, 94, -63, -80, -85, 24, 1, -73, -74, 104, 19, -85, -50, -41, -25, -23, 34, 14, -77};
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
    msg.setTimeStamp(0.06331618929369942);
    msg.setSource(39771U);
    msg.setSourceEntity(155U);
    msg.setDestination(28546U);
    msg.setDestinationEntity(88U);
    const signed char tmp_msg_0[] = {-74, -45, 103, 26, -23, -21, 77, 48, -80, 94, 93, -25, -30, -32, 86, 19, 53, 69, -18, -22, 47, -49, 12, 94, 66, -77, 58, -59, -125, -119, 84, -1, 68, 122, 21, -48, -86, -18, -85, 86, -40, -84, -15, 11, -93, 80, -37, 125, 16, 36, -48, -52, -82, 71, 3, 9, -92, -10, 14, -26, -22, -32, -7, 121, 23, -29, -119, -73, -13, -58, 7, 78, -13, 101, -17, 11, -14, 99, -91, -57, -53, 122, 48, -95, -99, 58, 60, 2, 120, -126, -103, -118, 1, -83, 11, -63, -112, -85, 75, 46, -96, 48, -42, -30, 56, 5, -48, 101, -31, -87, -110, 114, -47, 122, 1, 118, 16, -87, -69, 56, 103, -34, -85, 8, -104, 102, -128, -37, -22, 65, -22, -127, -56, -93, -112, -79, -102, 123, -48, 5, 5, 59, 117, 12, -17, -22, 74, 79, -62, 24, 52, -112, 82, 31, -84, 118, -19, -90, 9, 115, 84, 42, -40, -86, 108, -92, -35, 87, 29, 59, 82, -71, -1, 81, 64, -125, -14, 30, 50, -3, -9, 60, -75, 49, 46, -105, 117, 82, 80, -5, 51, 103, -12, -99, 18, -12, -88, -67, 117, 121, 64, -126, -29, -10, -75, -66, 2, 122, -119, -15, -29, -16, -47, 123, -1, -19, 81, -30, -50, 88, 60, 106, 15, 74, 97, 42, -72, -38, -76, 76, -83, -65, -12, -25, -17, -111, -64, 86, 83, 62, 98, -26, -106, 69, 125};
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
    msg.setTimeStamp(0.7180220082092521);
    msg.setSource(18767U);
    msg.setSourceEntity(153U);
    msg.setDestination(46693U);
    msg.setDestinationEntity(14U);
    const signed char tmp_msg_0[] = {-25, -50, -77, -84, -38, 104, -4, -34, 103, 62, -83, 98, -111, -43, -108, -12, 109, 53, 63, 62, -102, 35, -124, -23, -75, -15, 120, -87, -67, 84, 85, 114};
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
    msg.setTimeStamp(0.2082502369942737);
    msg.setSource(49957U);
    msg.setSourceEntity(208U);
    msg.setDestination(30453U);
    msg.setDestinationEntity(174U);
    msg.value = 0.8747196021767388;

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
    msg.setTimeStamp(0.33653100955938187);
    msg.setSource(9174U);
    msg.setSourceEntity(190U);
    msg.setDestination(49673U);
    msg.setDestinationEntity(143U);
    msg.value = 0.018051290585018198;

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
    msg.setTimeStamp(0.7016693640975579);
    msg.setSource(9298U);
    msg.setSourceEntity(173U);
    msg.setDestination(59378U);
    msg.setDestinationEntity(139U);
    msg.value = 0.4298267697159972;

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
    msg.setTimeStamp(0.4674319155690301);
    msg.setSource(14460U);
    msg.setSourceEntity(188U);
    msg.setDestination(52957U);
    msg.setDestinationEntity(17U);
    msg.type = 113U;
    msg.frequency = 2133599676U;
    msg.min_range = 54225U;
    msg.max_range = 8562U;
    msg.bits_per_point = 242U;
    msg.scale_factor = 0.6978426463771716;
    const signed char tmp_msg_0[] = {-114, -94, 21, 39, -77, -87, 118, 23, 43, 104, 126, -21, 20, -75, 0, -80, -86, 33, 8, -67, -111, 66, 74, -29, -117, -27, 43, -38, 23, 3, 121, 4, 104, 38, -110, 77, -116, 7, -56, -37, 11, -18, 11, 101, -54, 98, 84, -126, 113, -107, -36, -69, -5, -59, -98, -41, -21, 97, -6, 33, 121, 28, 105, -120, 71, -57, -100, -50, 65, 21, 71, 54, -2, 90, 9, -116, -59, -82, -86, -45, -63, -27, 4, -107, 78, 47, -3, 50, 41, 42, 89, -72, -63, 126, -32, 1, 93, -106, -95, 53, 98, -65, 10, 53, -55, -30, -32, -69, -115, 68, -22, -110, 44, 86, -97, -44, -46, -53, -36, -43, 94, 115, -105, -29, -46, 121, -20, 108, 40, -52, 8, -107, 76, 106, 1, 13, -29, -85, 101, 1, 44};
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
    msg.setTimeStamp(0.11077429756952561);
    msg.setSource(27885U);
    msg.setSourceEntity(72U);
    msg.setDestination(25172U);
    msg.setDestinationEntity(177U);
    msg.type = 74U;
    msg.frequency = 1415065728U;
    msg.min_range = 56479U;
    msg.max_range = 59574U;
    msg.bits_per_point = 190U;
    msg.scale_factor = 0.7081846489038874;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7825810474604101;
    tmp_msg_0.beam_height = 0.8474251296290919;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {41, -25, -73, 31, -84, -18, -118, 85, -107, -60, 54, 81, 59, 119, 81, 110, -8, -124, 82, -105, -44, -75, 16, -34, -113, 105, -91, -57, 89, -56, -111, -57, 20, 68, -40, -55, -40, -41, -59, 121, -83, -62, -1, -85, -110, -31, -45, 46, 43, -39, -77, -61, 8, 39, -51, -58, 56, -27, -81, -64, -44, -21, -20, -26, -20, 64, -57, -7, 93, 126, 68, 121, -76, 44, 2, -19, -34, -70, 62, 123, -53, -58, 121, 1, 108, 32, -89, 93, -35, -95, 47, 28, -46, 38, -69, -22};
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
    msg.setTimeStamp(0.6942787124489991);
    msg.setSource(2335U);
    msg.setSourceEntity(215U);
    msg.setDestination(54676U);
    msg.setDestinationEntity(177U);
    msg.type = 41U;
    msg.frequency = 4085021138U;
    msg.min_range = 18279U;
    msg.max_range = 19635U;
    msg.bits_per_point = 170U;
    msg.scale_factor = 0.44015095419452255;
    const signed char tmp_msg_0[] = {-9, -90, 123, -126, 26, -117, 31, -97, 98, -58, 33, -91, 111, 116, 77, 18, 16, -104, -45, -127, -83, 86, 53, -95, 93, 8, -106, 115, -31, -78, -84, -4, -91, 114, 31, -73, -65, 25, -75, -39, -108, 89, 101, 46, 126, 34, -6, 118, -19, 113, -18, -45, -63, 29, 9, 19, -89, 9, 111, -108, -39, -121, 9, 55, -60, 30, 69, 115, 51, 18, 84, -108, 94, -52, 45, -70, 113, 40, 110, 41, 72, 19, 5, 126, -103, 10, -73, 98, 67, -33, 95, 44, -94, -118, 16, -89, -104, -116, -97, 56, 120, -45, -31, -48, -83, -106, 72, 32, 68, -5, -76, 37, 67, 6, 71, 112, -38};
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
    msg.setTimeStamp(0.2533194395583005);
    msg.setSource(19577U);
    msg.setSourceEntity(201U);
    msg.setDestination(64825U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.9707574416516256);
    msg.setSource(55131U);
    msg.setSourceEntity(43U);
    msg.setDestination(49831U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.29496067770305);
    msg.setSource(64919U);
    msg.setSourceEntity(159U);
    msg.setDestination(3945U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.867454023862324);
    msg.setSource(3413U);
    msg.setSourceEntity(128U);
    msg.setDestination(17661U);
    msg.setDestinationEntity(222U);
    msg.op = 46U;

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
    msg.setTimeStamp(0.826884706747612);
    msg.setSource(19338U);
    msg.setSourceEntity(204U);
    msg.setDestination(45632U);
    msg.setDestinationEntity(110U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.16470013837699937);
    msg.setSource(25735U);
    msg.setSourceEntity(127U);
    msg.setDestination(26269U);
    msg.setDestinationEntity(130U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.9271345336028456);
    msg.setSource(44437U);
    msg.setSourceEntity(1U);
    msg.setDestination(46539U);
    msg.setDestinationEntity(112U);
    msg.value = 0.5290602234745182;
    msg.confidence = 0.5730003242035366;
    msg.opmodes.assign("YRYYREPWCNDHQXOGCFRNVZOLCGJKTEBLXMWQZKBADYXYIQBXDSYTWDVTHNNPQJOSEGAXSXBNBRKBLWMAMAKCFDYWALPVUKQEHZMIDTVWRPFSPGYKXRAJFQHIVJFNFBOHSTMXCTATGGMKHOEQRKOUQAYNBZEPGUPCSFSWAIFFLLNVUCKUVQOZEZJGWDAZSLNBPJTQRMIMVIOPHNMGJPYKIJOSEMXHBDLUEVTCDEILTLUCIUUZVSZWDZRUCRHJIX");

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
    msg.setTimeStamp(0.9166409568561288);
    msg.setSource(10000U);
    msg.setSourceEntity(131U);
    msg.setDestination(45968U);
    msg.setDestinationEntity(187U);
    msg.value = 0.35636147527999207;
    msg.confidence = 0.4611018323878836;
    msg.opmodes.assign("OAWQSGPQDKKVZPBVWPODTKVUYHNOVWGTJTJFNOMQYTWHVKUTLWILVUGOYCXSSSMQGPVGNDBXNMYFBTKGXHCOJGRZMNQGZRANIDHSLNLPXHYQEY");

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
    msg.setTimeStamp(0.4816602335895176);
    msg.setSource(9258U);
    msg.setSourceEntity(209U);
    msg.setDestination(6436U);
    msg.setDestinationEntity(28U);
    msg.value = 0.09404102828801408;
    msg.confidence = 0.8422046551296879;
    msg.opmodes.assign("PHXLCTEFVQKTLXREHZTEFHQBAMYYUYTUGZTNLZPZCKYJCGVDUSSOAYANDO");

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
    msg.setTimeStamp(0.07057921084431895);
    msg.setSource(62596U);
    msg.setSourceEntity(229U);
    msg.setDestination(50616U);
    msg.setDestinationEntity(42U);
    msg.itow = 1899295735U;
    msg.lat = 0.7496343485251269;
    msg.lon = 0.7982131714863697;
    msg.height_ell = 0.11117891174717276;
    msg.height_sea = 0.3848197898876069;
    msg.hacc = 0.9102124807344407;
    msg.vacc = 0.8727511052033174;
    msg.vel_n = 0.7685142056995449;
    msg.vel_e = 0.3143826284531498;
    msg.vel_d = 0.8358730894212993;
    msg.speed = 0.8717248236153428;
    msg.gspeed = 0.41564277650409387;
    msg.heading = 0.6520526981267225;
    msg.sacc = 0.7691965656343476;
    msg.cacc = 0.43472385931125457;

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
    msg.setTimeStamp(0.11480433143310442);
    msg.setSource(64235U);
    msg.setSourceEntity(22U);
    msg.setDestination(12315U);
    msg.setDestinationEntity(15U);
    msg.itow = 3505489034U;
    msg.lat = 0.37853003788883943;
    msg.lon = 0.2457468846785721;
    msg.height_ell = 0.08204223426083224;
    msg.height_sea = 0.1275218630445396;
    msg.hacc = 0.7566652269062711;
    msg.vacc = 0.1084509852897585;
    msg.vel_n = 0.15497514000923163;
    msg.vel_e = 0.4388636991571583;
    msg.vel_d = 0.3625345398492661;
    msg.speed = 0.8490107486867507;
    msg.gspeed = 0.9826474632963608;
    msg.heading = 0.838141030382711;
    msg.sacc = 0.44115618619946184;
    msg.cacc = 0.09790588396746558;

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
    msg.setTimeStamp(0.6707366264648653);
    msg.setSource(50754U);
    msg.setSourceEntity(241U);
    msg.setDestination(14755U);
    msg.setDestinationEntity(82U);
    msg.itow = 3184897858U;
    msg.lat = 0.09334973302483374;
    msg.lon = 0.8134761852407044;
    msg.height_ell = 0.4094190322579704;
    msg.height_sea = 0.9155220175753918;
    msg.hacc = 0.3278155954639639;
    msg.vacc = 0.879854173744581;
    msg.vel_n = 0.049564543864229926;
    msg.vel_e = 0.7563075065696403;
    msg.vel_d = 0.586924739477756;
    msg.speed = 0.46335996559629045;
    msg.gspeed = 0.7653722453731979;
    msg.heading = 0.40262921045302824;
    msg.sacc = 0.1985965746024636;
    msg.cacc = 0.06540946405539538;

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
    msg.setTimeStamp(0.7005440281524002);
    msg.setSource(25989U);
    msg.setSourceEntity(154U);
    msg.setDestination(31742U);
    msg.setDestinationEntity(147U);
    msg.id = 149U;
    msg.value = 0.7640721796860707;

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
    msg.setTimeStamp(0.5197251010492114);
    msg.setSource(47238U);
    msg.setSourceEntity(168U);
    msg.setDestination(64360U);
    msg.setDestinationEntity(80U);
    msg.id = 42U;
    msg.value = 0.6753619859247848;

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
    msg.setTimeStamp(0.2060866874383841);
    msg.setSource(4935U);
    msg.setSourceEntity(212U);
    msg.setDestination(11962U);
    msg.setDestinationEntity(154U);
    msg.id = 118U;
    msg.value = 0.14668329967203797;

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
    msg.setTimeStamp(0.8227025425165386);
    msg.setSource(46706U);
    msg.setSourceEntity(73U);
    msg.setDestination(20237U);
    msg.setDestinationEntity(88U);
    msg.x = 0.7033471486709665;
    msg.y = 0.2506017890965542;
    msg.z = 0.5087621966681585;
    msg.phi = 0.9625749219735196;
    msg.theta = 0.5916430509168076;
    msg.psi = 0.9368557042105835;

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
    msg.setTimeStamp(0.8425347900890015);
    msg.setSource(18353U);
    msg.setSourceEntity(33U);
    msg.setDestination(14453U);
    msg.setDestinationEntity(81U);
    msg.x = 0.8454931618120941;
    msg.y = 0.7981317998890746;
    msg.z = 0.3386796902260659;
    msg.phi = 0.5867209571928629;
    msg.theta = 0.6090107968192888;
    msg.psi = 0.43990135664522334;

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
    msg.setTimeStamp(0.9482350351434166);
    msg.setSource(18357U);
    msg.setSourceEntity(176U);
    msg.setDestination(846U);
    msg.setDestinationEntity(20U);
    msg.x = 0.13421565935468294;
    msg.y = 0.4834123203647478;
    msg.z = 0.19943677747829658;
    msg.phi = 0.45521487366799607;
    msg.theta = 0.41529278302424044;
    msg.psi = 0.7390087674905296;

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
    msg.setTimeStamp(0.7107529740711112);
    msg.setSource(6629U);
    msg.setSourceEntity(5U);
    msg.setDestination(33692U);
    msg.setDestinationEntity(202U);
    msg.beam_width = 0.43220094904684636;
    msg.beam_height = 0.3709269619155019;

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
    msg.setTimeStamp(0.34243721085937373);
    msg.setSource(59492U);
    msg.setSourceEntity(216U);
    msg.setDestination(58617U);
    msg.setDestinationEntity(66U);
    msg.beam_width = 0.9362428586645704;
    msg.beam_height = 0.24329171488780865;

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
    msg.setTimeStamp(0.7592326502035789);
    msg.setSource(39580U);
    msg.setSourceEntity(67U);
    msg.setDestination(47959U);
    msg.setDestinationEntity(118U);
    msg.beam_width = 0.1254844327813418;
    msg.beam_height = 0.7711869143975222;

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
    msg.setTimeStamp(0.4869843820896672);
    msg.setSource(54443U);
    msg.setSourceEntity(148U);
    msg.setDestination(12900U);
    msg.setDestinationEntity(1U);
    msg.sane = 109U;

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
    msg.setTimeStamp(0.5936268584271234);
    msg.setSource(9832U);
    msg.setSourceEntity(160U);
    msg.setDestination(50193U);
    msg.setDestinationEntity(31U);
    msg.sane = 48U;

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
    msg.setTimeStamp(0.6892273090894584);
    msg.setSource(43008U);
    msg.setSourceEntity(5U);
    msg.setDestination(44361U);
    msg.setDestinationEntity(76U);
    msg.sane = 137U;

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
    msg.setTimeStamp(0.5274414226843728);
    msg.setSource(47909U);
    msg.setSourceEntity(51U);
    msg.setDestination(57345U);
    msg.setDestinationEntity(209U);
    msg.value = 0.640307354572733;

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
    msg.setTimeStamp(0.4300722783982699);
    msg.setSource(661U);
    msg.setSourceEntity(124U);
    msg.setDestination(56177U);
    msg.setDestinationEntity(222U);
    msg.value = 0.3453287326966331;

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
    msg.setTimeStamp(0.33690362170323673);
    msg.setSource(63455U);
    msg.setSourceEntity(198U);
    msg.setDestination(12467U);
    msg.setDestinationEntity(8U);
    msg.value = 0.798903121597433;

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
    msg.setTimeStamp(0.4226592938518221);
    msg.setSource(58621U);
    msg.setSourceEntity(82U);
    msg.setDestination(63229U);
    msg.setDestinationEntity(65U);
    msg.value = 0.02009894799979528;

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
    msg.setTimeStamp(0.30059534834251844);
    msg.setSource(33997U);
    msg.setSourceEntity(198U);
    msg.setDestination(13488U);
    msg.setDestinationEntity(112U);
    msg.value = 0.9739738755973287;

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
    msg.setTimeStamp(0.07435206181400245);
    msg.setSource(6760U);
    msg.setSourceEntity(243U);
    msg.setDestination(20482U);
    msg.setDestinationEntity(146U);
    msg.value = 0.4196906271515184;

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
    msg.setTimeStamp(0.04844180455901004);
    msg.setSource(17666U);
    msg.setSourceEntity(221U);
    msg.setDestination(58293U);
    msg.setDestinationEntity(49U);
    msg.value = 0.5968162507230182;

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
    msg.setTimeStamp(0.8048108409202833);
    msg.setSource(51155U);
    msg.setSourceEntity(82U);
    msg.setDestination(3299U);
    msg.setDestinationEntity(11U);
    msg.value = 0.020496006629264873;

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
    msg.setTimeStamp(0.9575881164491318);
    msg.setSource(4121U);
    msg.setSourceEntity(64U);
    msg.setDestination(53794U);
    msg.setDestinationEntity(107U);
    msg.value = 0.3372482563179886;

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
    msg.setTimeStamp(0.9434493348802172);
    msg.setSource(64850U);
    msg.setSourceEntity(53U);
    msg.setDestination(58940U);
    msg.setDestinationEntity(90U);
    msg.value = 0.4948252868806893;

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
    msg.setTimeStamp(0.31912972057551325);
    msg.setSource(33518U);
    msg.setSourceEntity(98U);
    msg.setDestination(64323U);
    msg.setDestinationEntity(98U);
    msg.value = 0.24500622936554606;

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
    msg.setTimeStamp(0.010883714065046624);
    msg.setSource(19535U);
    msg.setSourceEntity(239U);
    msg.setDestination(11591U);
    msg.setDestinationEntity(32U);
    msg.value = 0.49496603112528803;

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
    msg.setTimeStamp(0.8240503703186574);
    msg.setSource(29790U);
    msg.setSourceEntity(159U);
    msg.setDestination(64333U);
    msg.setDestinationEntity(169U);
    msg.value = 0.6788030454221331;

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
    msg.setTimeStamp(0.2585525600784879);
    msg.setSource(42591U);
    msg.setSourceEntity(215U);
    msg.setDestination(6203U);
    msg.setDestinationEntity(59U);
    msg.value = 0.7601058384715116;

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
    msg.setTimeStamp(0.2714942360093425);
    msg.setSource(56359U);
    msg.setSourceEntity(167U);
    msg.setDestination(57097U);
    msg.setDestinationEntity(53U);
    msg.value = 0.7537277730441424;

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
    msg.setTimeStamp(0.27533069255302645);
    msg.setSource(56884U);
    msg.setSourceEntity(71U);
    msg.setDestination(26835U);
    msg.setDestinationEntity(21U);
    msg.value = 0.9612581931516907;

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
    msg.setTimeStamp(0.9737941905846687);
    msg.setSource(33166U);
    msg.setSourceEntity(50U);
    msg.setDestination(19937U);
    msg.setDestinationEntity(102U);
    msg.value = 0.8183315051768689;

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
    msg.setTimeStamp(0.7903887446706533);
    msg.setSource(69U);
    msg.setSourceEntity(47U);
    msg.setDestination(24048U);
    msg.setDestinationEntity(153U);
    msg.value = 0.29479409080401564;

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
    msg.setTimeStamp(0.9810166890393651);
    msg.setSource(44224U);
    msg.setSourceEntity(174U);
    msg.setDestination(60469U);
    msg.setDestinationEntity(66U);
    msg.value = 0.9943411658521139;

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
    msg.setTimeStamp(0.7222998353229028);
    msg.setSource(45955U);
    msg.setSourceEntity(125U);
    msg.setDestination(8226U);
    msg.setDestinationEntity(55U);
    msg.value = 0.725426992388961;

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
    msg.setTimeStamp(0.7542697086123769);
    msg.setSource(53749U);
    msg.setSourceEntity(60U);
    msg.setDestination(16071U);
    msg.setDestinationEntity(106U);
    msg.value = 0.5704747377539433;

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
    msg.setTimeStamp(0.9150633833275117);
    msg.setSource(42612U);
    msg.setSourceEntity(96U);
    msg.setDestination(35823U);
    msg.setDestinationEntity(61U);
    msg.value = 0.41306411700439494;

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
    msg.setTimeStamp(0.8697746830173045);
    msg.setSource(19490U);
    msg.setSourceEntity(164U);
    msg.setDestination(30762U);
    msg.setDestinationEntity(168U);
    msg.value = 0.9169668784299406;

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
    msg.setTimeStamp(0.46785145140685525);
    msg.setSource(30113U);
    msg.setSourceEntity(127U);
    msg.setDestination(11409U);
    msg.setDestinationEntity(99U);
    msg.value = 0.3521166686940065;

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
    msg.setTimeStamp(0.8575967123501858);
    msg.setSource(21364U);
    msg.setSourceEntity(92U);
    msg.setDestination(9802U);
    msg.setDestinationEntity(128U);
    msg.validity = 51723U;
    msg.type = 46U;
    msg.tow = 1412447759U;
    msg.base_lat = 0.7419966104506313;
    msg.base_lon = 0.3207477463749776;
    msg.base_height = 0.582806030940131;
    msg.n = 0.05520015006332546;
    msg.e = 0.14860585169366003;
    msg.d = 0.8560132612109486;
    msg.v_n = 0.006538040987682292;
    msg.v_e = 0.29467303876910567;
    msg.v_d = 0.9534082598568002;
    msg.satellites = 163U;
    msg.iar_hyp = 13005U;
    msg.iar_ratio = 0.49052762409765616;

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
    msg.setTimeStamp(0.8246592866173778);
    msg.setSource(28978U);
    msg.setSourceEntity(67U);
    msg.setDestination(55042U);
    msg.setDestinationEntity(23U);
    msg.validity = 51588U;
    msg.type = 192U;
    msg.tow = 3604496828U;
    msg.base_lat = 0.6792703961475948;
    msg.base_lon = 0.10421626729933375;
    msg.base_height = 0.5173140886421557;
    msg.n = 0.4391180593161669;
    msg.e = 0.3722809256783891;
    msg.d = 0.8444751238051056;
    msg.v_n = 0.46926553580891905;
    msg.v_e = 0.09206076597735169;
    msg.v_d = 0.7715587150843105;
    msg.satellites = 120U;
    msg.iar_hyp = 19675U;
    msg.iar_ratio = 0.2344220388355378;

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
    msg.setTimeStamp(0.7693347546224332);
    msg.setSource(52534U);
    msg.setSourceEntity(35U);
    msg.setDestination(526U);
    msg.setDestinationEntity(32U);
    msg.validity = 50821U;
    msg.type = 76U;
    msg.tow = 1690925323U;
    msg.base_lat = 0.0062559540422063575;
    msg.base_lon = 0.06506843398446882;
    msg.base_height = 0.2706479472333757;
    msg.n = 0.43074207573663537;
    msg.e = 0.05552032747073554;
    msg.d = 0.41617973289668597;
    msg.v_n = 0.8893577038254319;
    msg.v_e = 0.6768238777207333;
    msg.v_d = 0.6446812059012433;
    msg.satellites = 223U;
    msg.iar_hyp = 53639U;
    msg.iar_ratio = 0.364444782593888;

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
    msg.setTimeStamp(0.8753219478830714);
    msg.setSource(26062U);
    msg.setSourceEntity(109U);
    msg.setDestination(8131U);
    msg.setDestinationEntity(0U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5028085885114659;
    tmp_msg_0.lon = 0.601898804741907;
    tmp_msg_0.height = 0.2320705010967774;
    tmp_msg_0.x = 0.5845737047887463;
    tmp_msg_0.y = 0.947478568523048;
    tmp_msg_0.z = 0.0572906360786668;
    tmp_msg_0.phi = 0.816267226027025;
    tmp_msg_0.theta = 0.14691768739715938;
    tmp_msg_0.psi = 0.9814155549824627;
    tmp_msg_0.u = 0.7831047251052768;
    tmp_msg_0.v = 0.12175082839971496;
    tmp_msg_0.w = 0.7884541186473568;
    tmp_msg_0.vx = 0.4997438793296771;
    tmp_msg_0.vy = 0.18517803952484035;
    tmp_msg_0.vz = 0.48752468602459886;
    tmp_msg_0.p = 0.6870923254698429;
    tmp_msg_0.q = 0.9410016329315567;
    tmp_msg_0.r = 0.09231724430968435;
    tmp_msg_0.depth = 0.7550321970883659;
    tmp_msg_0.alt = 0.17668297916148235;
    msg.state.set(tmp_msg_0);
    msg.type = 218U;

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
    msg.setTimeStamp(0.9583456739864561);
    msg.setSource(45841U);
    msg.setSourceEntity(12U);
    msg.setDestination(21905U);
    msg.setDestinationEntity(116U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.24836967226576345;
    tmp_msg_0.lon = 0.8332887758329177;
    tmp_msg_0.height = 0.8472872451317314;
    tmp_msg_0.x = 0.9799696198235601;
    tmp_msg_0.y = 0.22083784106122095;
    tmp_msg_0.z = 0.5211593926969111;
    tmp_msg_0.phi = 0.018312145823558;
    tmp_msg_0.theta = 0.0865603303093414;
    tmp_msg_0.psi = 0.9320151952601888;
    tmp_msg_0.u = 0.2179945023269264;
    tmp_msg_0.v = 0.3360388612036743;
    tmp_msg_0.w = 0.2609636421203205;
    tmp_msg_0.vx = 0.6916967070570083;
    tmp_msg_0.vy = 0.42210623656727486;
    tmp_msg_0.vz = 0.612303450964647;
    tmp_msg_0.p = 0.7744126491266666;
    tmp_msg_0.q = 0.13654814778482915;
    tmp_msg_0.r = 0.18505611977678882;
    tmp_msg_0.depth = 0.1818241968563784;
    tmp_msg_0.alt = 0.4720471034757968;
    msg.state.set(tmp_msg_0);
    msg.type = 182U;

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
    msg.setTimeStamp(0.33594505603017344);
    msg.setSource(52511U);
    msg.setSourceEntity(100U);
    msg.setDestination(63825U);
    msg.setDestinationEntity(9U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6631915183898384;
    tmp_msg_0.lon = 0.45662866232215404;
    tmp_msg_0.height = 0.42502989582342166;
    tmp_msg_0.x = 0.36446383842369756;
    tmp_msg_0.y = 0.2507157315137707;
    tmp_msg_0.z = 0.9908056603999311;
    tmp_msg_0.phi = 0.7038485343026151;
    tmp_msg_0.theta = 0.42083522865504497;
    tmp_msg_0.psi = 0.6494780603303687;
    tmp_msg_0.u = 0.23594592757330757;
    tmp_msg_0.v = 0.033737206361616034;
    tmp_msg_0.w = 0.7744419851361397;
    tmp_msg_0.vx = 0.683404081198159;
    tmp_msg_0.vy = 0.9880410732120132;
    tmp_msg_0.vz = 0.736038482539546;
    tmp_msg_0.p = 0.8313094433108055;
    tmp_msg_0.q = 0.2943791710698025;
    tmp_msg_0.r = 0.0884163391354914;
    tmp_msg_0.depth = 0.606453488220064;
    tmp_msg_0.alt = 0.5188080794846547;
    msg.state.set(tmp_msg_0);
    msg.type = 202U;

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
    msg.setTimeStamp(0.22789600998784088);
    msg.setSource(1389U);
    msg.setSourceEntity(251U);
    msg.setDestination(63530U);
    msg.setDestinationEntity(48U);
    msg.value = 0.8380568159289744;

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
    msg.setTimeStamp(0.0028807398485556357);
    msg.setSource(13704U);
    msg.setSourceEntity(167U);
    msg.setDestination(40145U);
    msg.setDestinationEntity(201U);
    msg.value = 0.8182085028991883;

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
    msg.setTimeStamp(0.6387168944411031);
    msg.setSource(39553U);
    msg.setSourceEntity(235U);
    msg.setDestination(58616U);
    msg.setDestinationEntity(216U);
    msg.value = 0.09471173322460125;

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
    msg.setTimeStamp(0.9652179605156579);
    msg.setSource(56282U);
    msg.setSourceEntity(83U);
    msg.setDestination(19718U);
    msg.setDestinationEntity(203U);
    msg.value = 0.981373240025322;

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
    msg.setTimeStamp(0.9462560403582824);
    msg.setSource(5459U);
    msg.setSourceEntity(219U);
    msg.setDestination(31113U);
    msg.setDestinationEntity(194U);
    msg.value = 0.6663800548774276;

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
    msg.setTimeStamp(0.997553506190604);
    msg.setSource(14687U);
    msg.setSourceEntity(14U);
    msg.setDestination(65089U);
    msg.setDestinationEntity(8U);
    msg.value = 0.04880994855149701;

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
    msg.setTimeStamp(0.11727738164970491);
    msg.setSource(26740U);
    msg.setSourceEntity(177U);
    msg.setDestination(27169U);
    msg.setDestinationEntity(210U);
    msg.value = 0.6062583042661039;

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
    msg.setTimeStamp(0.08301155636795432);
    msg.setSource(58286U);
    msg.setSourceEntity(32U);
    msg.setDestination(16821U);
    msg.setDestinationEntity(99U);
    msg.value = 0.1721387114018803;

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
    msg.setTimeStamp(0.5194699964230606);
    msg.setSource(63162U);
    msg.setSourceEntity(82U);
    msg.setDestination(35859U);
    msg.setDestinationEntity(114U);
    msg.value = 0.6813066136771434;

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
    msg.setTimeStamp(0.8395937328081953);
    msg.setSource(52871U);
    msg.setSourceEntity(161U);
    msg.setDestination(46035U);
    msg.setDestinationEntity(27U);
    msg.value = 0.32114851926531196;

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
    msg.setTimeStamp(0.4235456860445669);
    msg.setSource(24819U);
    msg.setSourceEntity(52U);
    msg.setDestination(60231U);
    msg.setDestinationEntity(80U);
    msg.value = 0.38488349316064085;

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
    msg.setTimeStamp(0.7722417735188093);
    msg.setSource(338U);
    msg.setSourceEntity(88U);
    msg.setDestination(61209U);
    msg.setDestinationEntity(170U);
    msg.value = 0.8695061934545321;

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
    msg.setTimeStamp(0.43934547642501054);
    msg.setSource(50525U);
    msg.setSourceEntity(167U);
    msg.setDestination(28341U);
    msg.setDestinationEntity(171U);
    msg.value = 0.3609553275572799;

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
    msg.setTimeStamp(0.7064038532820962);
    msg.setSource(9151U);
    msg.setSourceEntity(169U);
    msg.setDestination(62319U);
    msg.setDestinationEntity(58U);
    msg.value = 0.25008046020786834;

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
    msg.setTimeStamp(0.07180428108694537);
    msg.setSource(4540U);
    msg.setSourceEntity(156U);
    msg.setDestination(22412U);
    msg.setDestinationEntity(65U);
    msg.value = 0.44366051085746283;

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
    msg.setTimeStamp(0.8848661997538482);
    msg.setSource(50108U);
    msg.setSourceEntity(95U);
    msg.setDestination(27741U);
    msg.setDestinationEntity(173U);
    msg.id = 173U;
    msg.zoom = 141U;
    msg.action = 242U;

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
    msg.setTimeStamp(0.44814643100936324);
    msg.setSource(42340U);
    msg.setSourceEntity(92U);
    msg.setDestination(36736U);
    msg.setDestinationEntity(5U);
    msg.id = 76U;
    msg.zoom = 208U;
    msg.action = 80U;

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
    msg.setTimeStamp(0.22576895499730354);
    msg.setSource(7364U);
    msg.setSourceEntity(109U);
    msg.setDestination(33128U);
    msg.setDestinationEntity(145U);
    msg.id = 206U;
    msg.zoom = 198U;
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
    msg.setTimeStamp(0.33332090597969044);
    msg.setSource(25581U);
    msg.setSourceEntity(211U);
    msg.setDestination(20197U);
    msg.setDestinationEntity(64U);
    msg.id = 142U;
    msg.value = 0.23319329855928217;

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
    msg.setTimeStamp(0.740673495329926);
    msg.setSource(54699U);
    msg.setSourceEntity(229U);
    msg.setDestination(58320U);
    msg.setDestinationEntity(246U);
    msg.id = 41U;
    msg.value = 0.7998751578700667;

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
    msg.setTimeStamp(0.01001174828060214);
    msg.setSource(49884U);
    msg.setSourceEntity(90U);
    msg.setDestination(51609U);
    msg.setDestinationEntity(133U);
    msg.id = 14U;
    msg.value = 0.2470117657990768;

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
    msg.setTimeStamp(0.2614132758909198);
    msg.setSource(48703U);
    msg.setSourceEntity(47U);
    msg.setDestination(48445U);
    msg.setDestinationEntity(170U);
    msg.id = 179U;
    msg.value = 0.39991994918404894;

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
    msg.setTimeStamp(0.25444112238238004);
    msg.setSource(46889U);
    msg.setSourceEntity(123U);
    msg.setDestination(19640U);
    msg.setDestinationEntity(230U);
    msg.id = 224U;
    msg.value = 0.5682476937059978;

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
    msg.setTimeStamp(0.34993049535524623);
    msg.setSource(4112U);
    msg.setSourceEntity(239U);
    msg.setDestination(27363U);
    msg.setDestinationEntity(176U);
    msg.id = 51U;
    msg.value = 0.6174969996770169;

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
    msg.setTimeStamp(0.3145047922821145);
    msg.setSource(51330U);
    msg.setSourceEntity(252U);
    msg.setDestination(11501U);
    msg.setDestinationEntity(64U);
    msg.id = 213U;
    msg.angle = 0.3154606493026889;

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
    msg.setTimeStamp(0.7162017246809776);
    msg.setSource(42836U);
    msg.setSourceEntity(95U);
    msg.setDestination(10316U);
    msg.setDestinationEntity(25U);
    msg.id = 81U;
    msg.angle = 0.08151360862375656;

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
    msg.setTimeStamp(0.4145762163126958);
    msg.setSource(55788U);
    msg.setSourceEntity(51U);
    msg.setDestination(53032U);
    msg.setDestinationEntity(230U);
    msg.id = 66U;
    msg.angle = 0.7351320592109124;

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
    msg.setTimeStamp(0.5265133452224202);
    msg.setSource(64730U);
    msg.setSourceEntity(244U);
    msg.setDestination(16592U);
    msg.setDestinationEntity(135U);
    msg.op = 208U;
    msg.actions.assign("SQLFKZDUNJVCHAAXNCRANQOYMFJAZOORWBDZZDNPCEHEYVMGPBDQKXKVVQVHMFPUKGDYGYFEUWSGMAFPNXXKINAJQIIZIJUTZSBJCB");

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
    msg.setTimeStamp(0.7834457326771973);
    msg.setSource(25976U);
    msg.setSourceEntity(192U);
    msg.setDestination(9915U);
    msg.setDestinationEntity(82U);
    msg.op = 239U;
    msg.actions.assign("HZUWCKRBGDGBFQROETXTEVSTJSMCSBUPCRMAMNJMTILGJAKOXSPZYSVWLWNHBAGIDSCVHMMXURIZOLDJDTXXKYLXVYZDKQCHYRARIHPUGLGANFQXZIWNRCPNIFQYKTFFUEUEQCNOVSTBUXIAGYYMQLUYHAEHHPZSPZFBOYTFWCWLBQWLJJQLBLJDTMFVDKGUKXQXNZNEMFITKABRBIOPEJHVMNVVWDCKCHSWROOPUYNFEDKVJDGWSPAE");

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
    msg.setTimeStamp(0.19835969338980664);
    msg.setSource(20471U);
    msg.setSourceEntity(6U);
    msg.setDestination(24734U);
    msg.setDestinationEntity(152U);
    msg.op = 223U;
    msg.actions.assign("PZOAIYXBPEUQLHJFJVNYNBUOEHVSRGGURAECTWWJMCAWVMTFLZPQLRMGXCORLKCCKWRCTEILSTFXJNEYQLGJVHZXTUAPELFQYGSEZPUHHHRTOUHSDDAVGBVKZUNYKBWZAHZKHNXDZSQ");

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
    msg.setTimeStamp(0.8451299234639399);
    msg.setSource(27468U);
    msg.setSourceEntity(55U);
    msg.setDestination(61566U);
    msg.setDestinationEntity(1U);
    msg.actions.assign("SKUVGTJTNVUUTXDDCRLZVBXXWBHJAAEXPHCJGLEHNHLUFZGIGJSHWUNCNAGQTSEJOIMICJ");

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
    msg.setTimeStamp(0.15891151589607178);
    msg.setSource(32643U);
    msg.setSourceEntity(34U);
    msg.setDestination(1400U);
    msg.setDestinationEntity(66U);
    msg.actions.assign("BAAHUNQXFCWMMLLLUOHZFHPSPPRDHXQKUDRUBDWXHWDOSEXKMARNUQXHYWVTYTKVZGPMEYJEDQGJVGABYCYNKBMOYCFDUOPDISVTCOGZZPABHQVGCOJZFEKHMNWBRTNFFYLXVJRSTLIWCAYQOIDSWANELVUIGBNKMUIKRUKDOFRCNWJFLZACNGETOAQLPJUZETERVSOYMXXRRKFPTYEIIQVFCSIZMTBBCMVGTLNEBAJ");

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
    msg.setTimeStamp(0.7313403968738343);
    msg.setSource(52385U);
    msg.setSourceEntity(200U);
    msg.setDestination(10987U);
    msg.setDestinationEntity(254U);
    msg.actions.assign("LEAQKXHDACIRSVNCZGIYTWTBAYZHYCTAZNQLGEZFFXPJWJFPPESVVMKWBZANQFBEDFXLCPVJH");

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
    msg.setTimeStamp(0.3272029738794012);
    msg.setSource(33053U);
    msg.setSourceEntity(41U);
    msg.setDestination(26979U);
    msg.setDestinationEntity(223U);
    msg.button = 92U;
    msg.value = 248U;

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
    msg.setTimeStamp(0.2598431054924558);
    msg.setSource(29759U);
    msg.setSourceEntity(245U);
    msg.setDestination(64981U);
    msg.setDestinationEntity(43U);
    msg.button = 101U;
    msg.value = 43U;

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
    msg.setTimeStamp(0.3450476369059342);
    msg.setSource(60665U);
    msg.setSourceEntity(195U);
    msg.setDestination(28233U);
    msg.setDestinationEntity(48U);
    msg.button = 247U;
    msg.value = 177U;

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
    msg.setTimeStamp(0.6840418318603584);
    msg.setSource(52189U);
    msg.setSourceEntity(207U);
    msg.setDestination(4312U);
    msg.setDestinationEntity(43U);
    msg.op = 10U;
    msg.text.assign("QKMUUSSEYCKNPGISWDABTGRNTKIOCBLPSTDDPJFKKXMDDWZLDVAOLHNZEHNXRRVCHGJCOUWDQSLRIRJWBAHNFFNAE");

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
    msg.setTimeStamp(0.8951822005854051);
    msg.setSource(64990U);
    msg.setSourceEntity(69U);
    msg.setDestination(45725U);
    msg.setDestinationEntity(157U);
    msg.op = 190U;
    msg.text.assign("GXLQCGSSUZMMWAUQNFERPYUDGYGVWTTMQZAUWWCHXILHXAJLJTBUIFTWISNIZKCOJEUKEUGVDGTMXHKTSHBJPCULORUQFZMPGPMVQKQVFPXDJCRLQRWKCYJDEFLNCPGFBPZISRJZBNYRNZ");

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
    msg.setTimeStamp(0.8066163598664877);
    msg.setSource(11055U);
    msg.setSourceEntity(157U);
    msg.setDestination(16002U);
    msg.setDestinationEntity(17U);
    msg.op = 85U;
    msg.text.assign("SQZZWZVPATVXDDEOJMKEZCRXMVYLBRMCPLYPMSRMGZNUSFSIRGPNDSIBGYRENEZJLTWBPPOKVABMKBFKBBXLVKYUAVRFJDPRLZGFJHRWLEWWHICFCQHTJADEVPDO");

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
    msg.setTimeStamp(0.3190683383082845);
    msg.setSource(42230U);
    msg.setSourceEntity(70U);
    msg.setDestination(25154U);
    msg.setDestinationEntity(181U);
    msg.op = 105U;
    msg.time_remain = 0.08284756847487418;
    msg.sched_time = 0.8136235484860447;

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
    msg.setTimeStamp(0.7187495842615799);
    msg.setSource(37347U);
    msg.setSourceEntity(80U);
    msg.setDestination(6557U);
    msg.setDestinationEntity(30U);
    msg.op = 104U;
    msg.time_remain = 0.15507462124443716;
    msg.sched_time = 0.10913481190332575;

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
    msg.setTimeStamp(0.2992894626244992);
    msg.setSource(23533U);
    msg.setSourceEntity(88U);
    msg.setDestination(7523U);
    msg.setDestinationEntity(230U);
    msg.op = 74U;
    msg.time_remain = 0.5323981922574297;
    msg.sched_time = 0.041889859074533686;

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
    msg.setTimeStamp(0.24061784973321476);
    msg.setSource(37816U);
    msg.setSourceEntity(85U);
    msg.setDestination(50778U);
    msg.setDestinationEntity(180U);
    msg.name.assign("YWPZQAQYHVRINQNRRUDDEBOBANYDMWTLIEDGSSJRAJRZVLYMUKVXNDTZENVZXQFUVGWLECOQAAMQEIJYHGGIYGUGTJJXYXBFCFGCENXQOKZECJOTYEJMTFFOWV");
    msg.op = 147U;
    msg.sched_time = 0.9325024172854582;

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
    msg.setTimeStamp(0.9049136747557014);
    msg.setSource(46790U);
    msg.setSourceEntity(207U);
    msg.setDestination(38359U);
    msg.setDestinationEntity(233U);
    msg.name.assign("VNNTXVLTSJHNERMGK");
    msg.op = 12U;
    msg.sched_time = 0.023104376498938373;

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
    msg.setTimeStamp(0.9059507528451949);
    msg.setSource(692U);
    msg.setSourceEntity(0U);
    msg.setDestination(8922U);
    msg.setDestinationEntity(202U);
    msg.name.assign("DPKSAEICXXROWYWOLSORTMNUZFSMOGGZRIIKDJJTQXWPBUFYQLBPIVMENUZMUVIKEVIOMWIQNGPCVFCKHDACVOTJYVONVSQXCEHFZRCRTSKUBNASUYCLAATBFIGRIDPXEBEJKVNAHYJNSEEPZPDBFPXWHRU");
    msg.op = 103U;
    msg.sched_time = 0.9002651796930025;

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
    msg.setTimeStamp(0.27960750769642007);
    msg.setSource(5478U);
    msg.setSourceEntity(42U);
    msg.setDestination(34678U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.8792685045101595);
    msg.setSource(54845U);
    msg.setSourceEntity(225U);
    msg.setDestination(48806U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.8893602129302596);
    msg.setSource(27944U);
    msg.setSourceEntity(24U);
    msg.setDestination(42974U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.17959440404767557);
    msg.setSource(17035U);
    msg.setSourceEntity(143U);
    msg.setDestination(44346U);
    msg.setDestinationEntity(5U);
    msg.name.assign("SBDJREMUUCWKAGRMDKIFTKPHOCQLGMYOPKWVBFGQNUADGULWMNZPKJDIKALGOOMUCIPFRPHJCZOQIMSYZOMRIDQVPVZQZEDALSJSUTTOSDTJNXFXOVVAESPFETVXHRUQAEKRSXWKRXZYIBSBYUHCWPTOHHJVQRTZLPHFZIJMFLJBIBVYRVDIWCXFSRPWXQCBJGHTLTXKKYDXZEJYQIYFGCB");
    msg.state = 167U;

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
    msg.setTimeStamp(0.2938254587262249);
    msg.setSource(41850U);
    msg.setSourceEntity(178U);
    msg.setDestination(54381U);
    msg.setDestinationEntity(217U);
    msg.name.assign("UZAWSKJDUSFJWRBXIGYOAKLXNMTZPBTSDSBJAYRBATMFFMFPTLVREAUAIFLTEGHNXHHOTRLEJCQBGZMOKBJQIUQNOXJDBOLFEPXIZMTMJSEBNSODHGPCKBCNJUDLKOYQSYOVPQEUVZPUQUPFSUCGFKCTJSHRTLYEYDEINZLLVCSNWCDWNYZYEHYWRUVFDWVDPZJOVKPIHBNQWXRKCRMAVNHGCIGMHXKQ");
    msg.state = 28U;

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
    msg.setTimeStamp(0.2858042597029484);
    msg.setSource(14458U);
    msg.setSourceEntity(142U);
    msg.setDestination(54571U);
    msg.setDestinationEntity(19U);
    msg.name.assign("TJXGWACJIMLPHMEQBQNLPCOOFDOJCEOBIHUMHUZCHFICNEKNNWJEFSGACQSDZWJAOIYRXQQAGZXYVGZBVTXETTIZGDROBJXXYDXHVOYSFHVNGQSLYTZHKMQNLGLVSEILIVGZFXRBOWMQLYRFTHESEWDASLHBKUACVTKKSEYSEGPUPFLROVZTUYWDNKITFCPDFPX");
    msg.state = 104U;

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
    msg.setTimeStamp(0.02646221135857263);
    msg.setSource(20393U);
    msg.setSourceEntity(99U);
    msg.setDestination(22504U);
    msg.setDestinationEntity(36U);
    msg.name.assign("QENZXCKGUUVVZEWOIGMOLJMYFYOYODRXGFPIDKVSWFVUAPCQMEAPRMEQFJNHXSOBVLLCTKPQDIHBDCCGVVCXOIDIXRAZMXSCQUMYGJETSMWZADQTDMNNWDNWBKETIJGIVFBBXPTVECHTJIAESRAWWAHPGXRMKYBBPNAPKZTYPAKLWZUOOEX");
    msg.value = 151U;

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
    msg.setTimeStamp(0.5517008993874581);
    msg.setSource(28245U);
    msg.setSourceEntity(8U);
    msg.setDestination(60844U);
    msg.setDestinationEntity(165U);
    msg.name.assign("YGIEGAZJONWPTCARDNYLKEQQPYFNQUZMLDPJJHBOCEVWONTYGIZGCFNIVYAJIDHGHWIAIVRKMORMZZTMWFPJNQLBTEZQT");
    msg.value = 174U;

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
    msg.setTimeStamp(0.6193919661669487);
    msg.setSource(33338U);
    msg.setSourceEntity(106U);
    msg.setDestination(322U);
    msg.setDestinationEntity(164U);
    msg.name.assign("CMSOWXLCODBERBSKOPNPWFIIGPAWACILULBQUYNHRVGGMJEPN");
    msg.value = 184U;

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
    msg.setTimeStamp(0.7824972804864065);
    msg.setSource(57945U);
    msg.setSourceEntity(6U);
    msg.setDestination(38299U);
    msg.setDestinationEntity(97U);
    msg.name.assign("ACAFSMOYSMNLIDRZEFDAQTENBGOYQNKKOMWJTBKJXAJCDFNPYVJLGZSZANQJLJSRLAWDBNKZXWYTOTUOLQEPIDIJHQYZUHLQNYXMZXGIYWTZDUGHNBVYXENURVHHSGTPKOWFAR");

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
    msg.setTimeStamp(0.5700949045595027);
    msg.setSource(46649U);
    msg.setSourceEntity(110U);
    msg.setDestination(25688U);
    msg.setDestinationEntity(149U);
    msg.name.assign("YGVMHLMNDTVGDENIKWSQAIFJLKCMBNSXUZDSYGEENIJYKGHUQZWCDEIYYKLVXNOISDQLLKRJCOQBEEBTEYQBLHXERXZMWRNQHRYPUPKEZQWUSUEFXAGOZHBIABQHFXTTRXBTJRVNKUSCZKOCFFNBCQMHRJBASOKTGAKOHCZUPVWFGPRHJPLDGGMTRVJDWVRMZJUFILSOJSOVAPIQYXOMTSGPFVDIFCCANTVDMUACWYNYTPMLDWBOIUF");

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
    msg.setTimeStamp(0.34302418466437634);
    msg.setSource(59611U);
    msg.setSourceEntity(83U);
    msg.setDestination(34280U);
    msg.setDestinationEntity(181U);
    msg.name.assign("GJPHZFVZNGNTIAYWSBKFTKZPJHKVIKBWNOWTKMTLUXYAHDDVXZXSSNHTCGBAGVKSLHFQQNQBUIBUVRNZJTCMBMUPGXCMSYJDVXWFZHAEVUADDEJINFKRRFEBRFBOZNGIQBQYOASHFSMIDLM");

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
    msg.setTimeStamp(0.5570040369618456);
    msg.setSource(19488U);
    msg.setSourceEntity(90U);
    msg.setDestination(47470U);
    msg.setDestinationEntity(29U);
    msg.name.assign("FUJVGPEEHRXAKGKGYOQBXSHHFWTPKSFOHCVLCKCQBXXGVAESDPOBLODHUFFBQQKBDDDBAQJYEFDVNSRSUNTIKUTWAJXOTLXGTJMAOFXCMSTMORSIBRNNUJXJJZOZZIWLKIVYPRYHWVPXADRJQWZRTTUKDUWCRRHZU");
    msg.value = 132U;

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
    msg.setTimeStamp(0.3606663733801926);
    msg.setSource(25655U);
    msg.setSourceEntity(6U);
    msg.setDestination(14170U);
    msg.setDestinationEntity(63U);
    msg.name.assign("NODXBZRWTAPCAYWAUSWEHGFQTNTOPHNLOJXTIPFA");
    msg.value = 75U;

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
    msg.setTimeStamp(0.0253199901898703);
    msg.setSource(12699U);
    msg.setSourceEntity(55U);
    msg.setDestination(2046U);
    msg.setDestinationEntity(219U);
    msg.name.assign("LFYBFCAXOEZEHVMWSIXJYIQKVMODMGGPQXIIYMUQLEKCYNFKUFRDBBXMMKZEKCOKWOUXHAQVWKK");
    msg.value = 86U;

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
    msg.setTimeStamp(0.9532890270332125);
    msg.setSource(55827U);
    msg.setSourceEntity(179U);
    msg.setDestination(61018U);
    msg.setDestinationEntity(223U);
    msg.id = 233U;
    msg.period = 2887360063U;
    msg.duty_cycle = 2846641406U;

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
    msg.setTimeStamp(0.9499053935635916);
    msg.setSource(16968U);
    msg.setSourceEntity(83U);
    msg.setDestination(3901U);
    msg.setDestinationEntity(55U);
    msg.id = 41U;
    msg.period = 4283984801U;
    msg.duty_cycle = 2688303975U;

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
    msg.setTimeStamp(0.6861196199659998);
    msg.setSource(15218U);
    msg.setSourceEntity(114U);
    msg.setDestination(1559U);
    msg.setDestinationEntity(49U);
    msg.id = 190U;
    msg.period = 1201685107U;
    msg.duty_cycle = 3313733681U;

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
    msg.setTimeStamp(0.31469600138213005);
    msg.setSource(38699U);
    msg.setSourceEntity(26U);
    msg.setDestination(23619U);
    msg.setDestinationEntity(72U);
    msg.id = 23U;
    msg.period = 3010126800U;
    msg.duty_cycle = 490537589U;

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
    msg.setTimeStamp(0.08195562317126748);
    msg.setSource(1770U);
    msg.setSourceEntity(171U);
    msg.setDestination(2318U);
    msg.setDestinationEntity(168U);
    msg.id = 71U;
    msg.period = 2662852281U;
    msg.duty_cycle = 3201012312U;

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
    msg.setTimeStamp(0.8022781055443389);
    msg.setSource(65422U);
    msg.setSourceEntity(85U);
    msg.setDestination(29017U);
    msg.setDestinationEntity(199U);
    msg.id = 208U;
    msg.period = 3170315341U;
    msg.duty_cycle = 3610364902U;

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
    msg.setTimeStamp(0.8694415866420578);
    msg.setSource(15178U);
    msg.setSourceEntity(98U);
    msg.setDestination(19569U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.8284686939662946;
    msg.lon = 0.6138552149871184;
    msg.height = 0.418254097416094;
    msg.x = 0.6275821631853038;
    msg.y = 0.24214773883825746;
    msg.z = 0.342235766530367;
    msg.phi = 0.763417874966162;
    msg.theta = 0.8153061129729862;
    msg.psi = 0.05312377229054288;
    msg.u = 0.09103572807350147;
    msg.v = 0.51045959401939;
    msg.w = 0.7861435283219415;
    msg.vx = 0.9131679723401843;
    msg.vy = 0.868983599216906;
    msg.vz = 0.38202243579898043;
    msg.p = 0.4028060371320362;
    msg.q = 0.9441506289225913;
    msg.r = 0.2898873027892188;
    msg.depth = 0.3258577083781252;
    msg.alt = 0.566309077752611;

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
    msg.setTimeStamp(0.3049334295118229);
    msg.setSource(37489U);
    msg.setSourceEntity(55U);
    msg.setDestination(38938U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.19033696338476247;
    msg.lon = 0.41221337348809683;
    msg.height = 0.992647310531169;
    msg.x = 0.637564096891019;
    msg.y = 0.9157240762198128;
    msg.z = 0.18727261327546485;
    msg.phi = 0.8051311727939897;
    msg.theta = 0.35922644977664275;
    msg.psi = 0.3452293603536595;
    msg.u = 0.16716056676941815;
    msg.v = 0.5584795233507068;
    msg.w = 0.24273869926095604;
    msg.vx = 0.16050158411905835;
    msg.vy = 0.1980836554217026;
    msg.vz = 0.20617768702597594;
    msg.p = 0.1711744288295315;
    msg.q = 0.17330114702686739;
    msg.r = 0.2841270872535028;
    msg.depth = 0.3689614471918896;
    msg.alt = 0.6099941312163353;

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
    msg.setTimeStamp(0.7901831191586096);
    msg.setSource(25892U);
    msg.setSourceEntity(0U);
    msg.setDestination(40953U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.2053483884122621;
    msg.lon = 0.9851893412901013;
    msg.height = 0.7178495596825717;
    msg.x = 0.9593823139312545;
    msg.y = 0.8926876317164195;
    msg.z = 0.6336547594898412;
    msg.phi = 0.7915926507620377;
    msg.theta = 0.23965905423827305;
    msg.psi = 0.29663211003814494;
    msg.u = 0.4664457762055536;
    msg.v = 0.12891116296930505;
    msg.w = 0.42985890884897715;
    msg.vx = 0.5675240054558548;
    msg.vy = 0.44668679827448543;
    msg.vz = 0.9674031919287905;
    msg.p = 0.29730334691326576;
    msg.q = 0.24732337176942498;
    msg.r = 0.7313290092016492;
    msg.depth = 0.1298057980138807;
    msg.alt = 0.6846391859531265;

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
    msg.setTimeStamp(0.30093300308225845);
    msg.setSource(6128U);
    msg.setSourceEntity(8U);
    msg.setDestination(58042U);
    msg.setDestinationEntity(62U);
    msg.x = 0.8294985065271075;
    msg.y = 0.026280448479142793;
    msg.z = 0.449352505748963;

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
    msg.setTimeStamp(0.9647152374342679);
    msg.setSource(39477U);
    msg.setSourceEntity(27U);
    msg.setDestination(10950U);
    msg.setDestinationEntity(157U);
    msg.x = 0.5994655798507147;
    msg.y = 0.6460069114006832;
    msg.z = 0.8339456867272447;

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
    msg.setTimeStamp(0.37515451305488057);
    msg.setSource(41370U);
    msg.setSourceEntity(249U);
    msg.setDestination(3965U);
    msg.setDestinationEntity(228U);
    msg.x = 0.7646274739640143;
    msg.y = 0.18890095588347233;
    msg.z = 0.3793738989426858;

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
    msg.setTimeStamp(0.9981914431997551);
    msg.setSource(12598U);
    msg.setSourceEntity(110U);
    msg.setDestination(32542U);
    msg.setDestinationEntity(157U);
    msg.value = 0.8736638255272692;

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
    msg.setTimeStamp(0.9008585392171938);
    msg.setSource(56744U);
    msg.setSourceEntity(200U);
    msg.setDestination(56151U);
    msg.setDestinationEntity(204U);
    msg.value = 0.4106781252866848;

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
    msg.setTimeStamp(0.6825610902879892);
    msg.setSource(34997U);
    msg.setSourceEntity(110U);
    msg.setDestination(20256U);
    msg.setDestinationEntity(89U);
    msg.value = 0.560938748574601;

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
    msg.setTimeStamp(0.14164819312574506);
    msg.setSource(29880U);
    msg.setSourceEntity(196U);
    msg.setDestination(65189U);
    msg.setDestinationEntity(22U);
    msg.value = 0.6319992084637671;

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
    msg.setTimeStamp(0.48193459483416);
    msg.setSource(59251U);
    msg.setSourceEntity(93U);
    msg.setDestination(62221U);
    msg.setDestinationEntity(89U);
    msg.value = 0.47189320431520343;

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
    msg.setTimeStamp(0.15592750124293275);
    msg.setSource(6660U);
    msg.setSourceEntity(26U);
    msg.setDestination(10183U);
    msg.setDestinationEntity(57U);
    msg.value = 0.1741239584639629;

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
    msg.setTimeStamp(0.8201021417232837);
    msg.setSource(43778U);
    msg.setSourceEntity(208U);
    msg.setDestination(53910U);
    msg.setDestinationEntity(136U);
    msg.x = 0.42431003479838325;
    msg.y = 0.8291380398723346;
    msg.z = 0.8863070234118975;
    msg.phi = 0.33109271557820286;
    msg.theta = 0.8686961348158448;
    msg.psi = 0.6950069240482603;
    msg.p = 0.6665176677024002;
    msg.q = 0.3001783201479812;
    msg.r = 0.21562314701228225;
    msg.u = 0.2935199186491749;
    msg.v = 0.4717930530893809;
    msg.w = 0.5983884681681066;
    msg.bias_psi = 0.22517445870703234;
    msg.bias_r = 0.328738812539609;

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
    msg.setTimeStamp(0.648881000677742);
    msg.setSource(38153U);
    msg.setSourceEntity(54U);
    msg.setDestination(37160U);
    msg.setDestinationEntity(232U);
    msg.x = 0.6956083093166266;
    msg.y = 0.9336080784086379;
    msg.z = 0.9154390941498044;
    msg.phi = 0.56535962311422;
    msg.theta = 0.05957593135432515;
    msg.psi = 0.5983176962885459;
    msg.p = 0.36278868958726385;
    msg.q = 0.34610852477538323;
    msg.r = 0.6528094109220547;
    msg.u = 0.11566545067446443;
    msg.v = 0.6488830780881502;
    msg.w = 0.40021554990684305;
    msg.bias_psi = 0.7095484484769099;
    msg.bias_r = 0.9690874654052459;

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
    msg.setTimeStamp(0.557800411429991);
    msg.setSource(45082U);
    msg.setSourceEntity(93U);
    msg.setDestination(3647U);
    msg.setDestinationEntity(13U);
    msg.x = 0.8207600106666852;
    msg.y = 0.40773659831934606;
    msg.z = 0.12437363056292017;
    msg.phi = 0.21731709146901146;
    msg.theta = 0.9752289175129805;
    msg.psi = 0.2688638604445108;
    msg.p = 0.7600165050398067;
    msg.q = 0.0022490397111553095;
    msg.r = 0.4481444065476694;
    msg.u = 0.9806851036248373;
    msg.v = 0.13610119888335515;
    msg.w = 0.6842068494245813;
    msg.bias_psi = 0.5850435676883483;
    msg.bias_r = 0.4240062325742142;

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
    msg.setTimeStamp(0.6556226009483017);
    msg.setSource(9994U);
    msg.setSourceEntity(229U);
    msg.setDestination(48675U);
    msg.setDestinationEntity(164U);
    msg.bias_psi = 0.9107741266617213;
    msg.bias_r = 0.7754879979929369;
    msg.cog = 0.5254856214692045;
    msg.cyaw = 0.4260700533984174;
    msg.lbl_rej_level = 0.03858891138187659;
    msg.gps_rej_level = 0.9543909346037042;
    msg.custom_x = 0.16281993536538442;
    msg.custom_y = 0.46468791811395227;
    msg.custom_z = 0.3338460041250383;

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
    msg.setTimeStamp(0.2067999592040468);
    msg.setSource(57893U);
    msg.setSourceEntity(231U);
    msg.setDestination(37908U);
    msg.setDestinationEntity(0U);
    msg.bias_psi = 0.7766435064434354;
    msg.bias_r = 0.9125949031944007;
    msg.cog = 0.9215262299691381;
    msg.cyaw = 0.6280680308352202;
    msg.lbl_rej_level = 0.9490299874310324;
    msg.gps_rej_level = 0.5863341070810638;
    msg.custom_x = 0.9526022519472462;
    msg.custom_y = 0.43267811115400456;
    msg.custom_z = 0.6298981377723308;

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
    msg.setTimeStamp(0.3964231052806383);
    msg.setSource(19312U);
    msg.setSourceEntity(203U);
    msg.setDestination(15704U);
    msg.setDestinationEntity(160U);
    msg.bias_psi = 0.6716689116726203;
    msg.bias_r = 0.7503274223655685;
    msg.cog = 0.41724079950454096;
    msg.cyaw = 0.5835340947941571;
    msg.lbl_rej_level = 0.6977266643561668;
    msg.gps_rej_level = 0.9988260597860235;
    msg.custom_x = 0.8395915882577648;
    msg.custom_y = 0.655989957291232;
    msg.custom_z = 0.6519052345929399;

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
    msg.setTimeStamp(0.9691903855330665);
    msg.setSource(64053U);
    msg.setSourceEntity(110U);
    msg.setDestination(35486U);
    msg.setDestinationEntity(178U);
    msg.utc_time = 0.67251814609517;
    msg.reason = 41U;

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
    msg.setTimeStamp(0.613849750073737);
    msg.setSource(9358U);
    msg.setSourceEntity(229U);
    msg.setDestination(43645U);
    msg.setDestinationEntity(76U);
    msg.utc_time = 0.002955116205798025;
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
    msg.setTimeStamp(0.3769465992593801);
    msg.setSource(28589U);
    msg.setSourceEntity(66U);
    msg.setDestination(21742U);
    msg.setDestinationEntity(84U);
    msg.utc_time = 0.03908661186786666;
    msg.reason = 104U;

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
    msg.setTimeStamp(0.677055469770942);
    msg.setSource(33052U);
    msg.setSourceEntity(251U);
    msg.setDestination(45702U);
    msg.setDestinationEntity(158U);
    msg.id = 36U;
    msg.range = 0.5292970744858558;
    msg.acceptance = 75U;

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
    msg.setTimeStamp(0.6851555854745269);
    msg.setSource(40095U);
    msg.setSourceEntity(199U);
    msg.setDestination(47625U);
    msg.setDestinationEntity(6U);
    msg.id = 98U;
    msg.range = 0.44880294291775136;
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
    msg.setTimeStamp(0.22657216252266432);
    msg.setSource(32258U);
    msg.setSourceEntity(23U);
    msg.setDestination(50413U);
    msg.setDestinationEntity(149U);
    msg.id = 103U;
    msg.range = 0.8404214632074448;
    msg.acceptance = 5U;

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
    msg.setTimeStamp(0.5910914561772479);
    msg.setSource(60069U);
    msg.setSourceEntity(159U);
    msg.setDestination(9886U);
    msg.setDestinationEntity(249U);
    msg.type = 46U;
    msg.reason = 215U;
    msg.value = 0.6540015865034626;
    msg.timestep = 0.24570705641912927;

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
    msg.setTimeStamp(0.8457839276103161);
    msg.setSource(32453U);
    msg.setSourceEntity(248U);
    msg.setDestination(34850U);
    msg.setDestinationEntity(241U);
    msg.type = 158U;
    msg.reason = 1U;
    msg.value = 0.19857739096069127;
    msg.timestep = 0.37458900718739996;

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
    msg.setTimeStamp(0.8119144050188954);
    msg.setSource(10672U);
    msg.setSourceEntity(10U);
    msg.setDestination(16537U);
    msg.setDestinationEntity(51U);
    msg.type = 158U;
    msg.reason = 251U;
    msg.value = 0.07744240441047845;
    msg.timestep = 0.6629743212787547;

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
    msg.setTimeStamp(0.4743708166808255);
    msg.setSource(21669U);
    msg.setSourceEntity(179U);
    msg.setDestination(31853U);
    msg.setDestinationEntity(106U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MKEDCVACYWAXQYLUQEBMPTOWUAXKHAJRXAXXQPWIQWIWYPNJHKMSXFDOANJLMSIKZGZZBQMDZNELCCECBGNEUKQGUHHTHBLTPNJFYOPUFSZRDJ");
    tmp_msg_0.lat = 0.11822370103865121;
    tmp_msg_0.lon = 0.4189580633427338;
    tmp_msg_0.depth = 0.304575362964038;
    tmp_msg_0.query_channel = 228U;
    tmp_msg_0.reply_channel = 231U;
    tmp_msg_0.transponder_delay = 119U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7823115933109307;
    msg.y = 0.5053521525870609;
    msg.var_x = 0.41630900400318616;
    msg.var_y = 0.6996349801170343;
    msg.distance = 0.2842005822385678;

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
    msg.setTimeStamp(0.9518962939952722);
    msg.setSource(40575U);
    msg.setSourceEntity(221U);
    msg.setDestination(62903U);
    msg.setDestinationEntity(177U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ADXOMNNXGRKRJNARW");
    tmp_msg_0.lat = 0.13843686519408116;
    tmp_msg_0.lon = 0.6063544665230903;
    tmp_msg_0.depth = 0.3637464563822197;
    tmp_msg_0.query_channel = 203U;
    tmp_msg_0.reply_channel = 9U;
    tmp_msg_0.transponder_delay = 126U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.25917292786689616;
    msg.y = 0.888669989393817;
    msg.var_x = 0.9784021883835219;
    msg.var_y = 0.8803281213454782;
    msg.distance = 0.3500644664550445;

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
    msg.setTimeStamp(0.5520296963427884);
    msg.setSource(12634U);
    msg.setSourceEntity(29U);
    msg.setDestination(21219U);
    msg.setDestinationEntity(91U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YITVIUKPPRXFFZXFRCNWDPXLNSTRYYIRZMYFBLSHBDWNEMDFIBKYWBAJLSGNZMTAHXWSKKQKHDQQIHVZDWMBUXOJRAOCUWTFGMVEZOOFKSUBBMQYACCXULTCMHWCCVAVDGMRXXGZGQJIQOZAQUPGSBKGSTDGVJYZFJHTYNREAEXNHZUEAPBHLPLJCJEOTNTYVOTVCDIHGCMGRFORPILXLZKKEMWFLLJPDVUUQBPHENOQYNSA");
    tmp_msg_0.lat = 0.2315920548672864;
    tmp_msg_0.lon = 0.8652579380821028;
    tmp_msg_0.depth = 0.029481744859950143;
    tmp_msg_0.query_channel = 18U;
    tmp_msg_0.reply_channel = 172U;
    tmp_msg_0.transponder_delay = 148U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.24053063878177938;
    msg.y = 0.42533689255028195;
    msg.var_x = 0.12701429474154902;
    msg.var_y = 0.2728823799556487;
    msg.distance = 0.8130547203175545;

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
    msg.setTimeStamp(0.5286829588077568);
    msg.setSource(59164U);
    msg.setSourceEntity(121U);
    msg.setDestination(58614U);
    msg.setDestinationEntity(164U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.5317143015221536);
    msg.setSource(33942U);
    msg.setSourceEntity(133U);
    msg.setDestination(57959U);
    msg.setDestinationEntity(152U);
    msg.state = 218U;

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
    msg.setTimeStamp(0.481140626144564);
    msg.setSource(38795U);
    msg.setSourceEntity(124U);
    msg.setDestination(3837U);
    msg.setDestinationEntity(160U);
    msg.state = 251U;

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
    msg.setTimeStamp(0.35086628141711473);
    msg.setSource(61324U);
    msg.setSourceEntity(141U);
    msg.setDestination(54780U);
    msg.setDestinationEntity(216U);
    msg.x = 0.8953245778465292;
    msg.y = 0.5006201322818511;
    msg.z = 0.24036106432801807;

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
    msg.setTimeStamp(0.4398876342702759);
    msg.setSource(18125U);
    msg.setSourceEntity(87U);
    msg.setDestination(37916U);
    msg.setDestinationEntity(160U);
    msg.x = 0.13527502724765705;
    msg.y = 0.26255564394080133;
    msg.z = 0.22786444080767088;

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
    msg.setTimeStamp(0.10131415376477226);
    msg.setSource(41545U);
    msg.setSourceEntity(74U);
    msg.setDestination(21954U);
    msg.setDestinationEntity(116U);
    msg.x = 0.8486677063100991;
    msg.y = 0.31922109708309987;
    msg.z = 0.013070816495274085;

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
    msg.setTimeStamp(0.07072741276028105);
    msg.setSource(57776U);
    msg.setSourceEntity(227U);
    msg.setDestination(23610U);
    msg.setDestinationEntity(94U);
    msg.va = 0.3287419328851433;
    msg.aoa = 0.4138267697233735;
    msg.ssa = 0.19200218259857038;

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
    msg.setTimeStamp(0.033058368937791904);
    msg.setSource(49644U);
    msg.setSourceEntity(1U);
    msg.setDestination(13345U);
    msg.setDestinationEntity(187U);
    msg.va = 0.6468528468321213;
    msg.aoa = 0.6249509019531289;
    msg.ssa = 0.9977318927024509;

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
    msg.setTimeStamp(0.7174040238879497);
    msg.setSource(5198U);
    msg.setSourceEntity(234U);
    msg.setDestination(22282U);
    msg.setDestinationEntity(104U);
    msg.va = 0.9599205478914371;
    msg.aoa = 0.08592106517208764;
    msg.ssa = 0.41470361931278144;

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
    msg.setTimeStamp(0.0704233159582569);
    msg.setSource(45138U);
    msg.setSourceEntity(0U);
    msg.setDestination(42086U);
    msg.setDestinationEntity(88U);
    msg.value = 0.5575906620099337;

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
    msg.setTimeStamp(0.36539091471764673);
    msg.setSource(49494U);
    msg.setSourceEntity(155U);
    msg.setDestination(7731U);
    msg.setDestinationEntity(181U);
    msg.value = 0.28946964267790587;

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
    msg.setTimeStamp(0.27893403860000376);
    msg.setSource(42792U);
    msg.setSourceEntity(144U);
    msg.setDestination(62941U);
    msg.setDestinationEntity(176U);
    msg.value = 0.2078129643778187;

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
    msg.setTimeStamp(0.5252273401221873);
    msg.setSource(2368U);
    msg.setSourceEntity(106U);
    msg.setDestination(31160U);
    msg.setDestinationEntity(76U);
    msg.value = 0.6035280405392636;
    msg.z_units = 47U;

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
    msg.setTimeStamp(0.25712880223789536);
    msg.setSource(46482U);
    msg.setSourceEntity(62U);
    msg.setDestination(8434U);
    msg.setDestinationEntity(248U);
    msg.value = 0.9551893908730389;
    msg.z_units = 210U;

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
    msg.setTimeStamp(0.5366039192786786);
    msg.setSource(42898U);
    msg.setSourceEntity(222U);
    msg.setDestination(14277U);
    msg.setDestinationEntity(14U);
    msg.value = 0.9519186059149192;
    msg.z_units = 60U;

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
    msg.setTimeStamp(0.5794173890153619);
    msg.setSource(20063U);
    msg.setSourceEntity(34U);
    msg.setDestination(1561U);
    msg.setDestinationEntity(102U);
    msg.value = 0.09457618733352702;
    msg.speed_units = 123U;

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
    msg.setTimeStamp(0.4085946553935357);
    msg.setSource(36298U);
    msg.setSourceEntity(148U);
    msg.setDestination(8159U);
    msg.setDestinationEntity(29U);
    msg.value = 0.6215372187321567;
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
    msg.setTimeStamp(0.4981042102607769);
    msg.setSource(40354U);
    msg.setSourceEntity(141U);
    msg.setDestination(31132U);
    msg.setDestinationEntity(208U);
    msg.value = 0.0602641172920525;
    msg.speed_units = 187U;

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
    msg.setTimeStamp(0.46216819712956514);
    msg.setSource(47469U);
    msg.setSourceEntity(157U);
    msg.setDestination(52248U);
    msg.setDestinationEntity(10U);
    msg.value = 0.3372956344993271;

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
    msg.setTimeStamp(0.5196715724379847);
    msg.setSource(63970U);
    msg.setSourceEntity(23U);
    msg.setDestination(38781U);
    msg.setDestinationEntity(228U);
    msg.value = 0.32168064850179023;

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
    msg.setTimeStamp(0.3701471773721581);
    msg.setSource(9831U);
    msg.setSourceEntity(193U);
    msg.setDestination(28559U);
    msg.setDestinationEntity(122U);
    msg.value = 0.37827741463028075;

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
    msg.setTimeStamp(0.5653775876133489);
    msg.setSource(41666U);
    msg.setSourceEntity(245U);
    msg.setDestination(18797U);
    msg.setDestinationEntity(190U);
    msg.value = 0.1735619052366577;

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
    msg.setTimeStamp(0.9651715286845446);
    msg.setSource(21662U);
    msg.setSourceEntity(27U);
    msg.setDestination(59872U);
    msg.setDestinationEntity(111U);
    msg.value = 0.016623369350861283;

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
    msg.setTimeStamp(0.8815234344777992);
    msg.setSource(1131U);
    msg.setSourceEntity(111U);
    msg.setDestination(40804U);
    msg.setDestinationEntity(247U);
    msg.value = 0.26175277598304025;

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
    msg.setTimeStamp(0.10015124157350841);
    msg.setSource(25354U);
    msg.setSourceEntity(210U);
    msg.setDestination(41147U);
    msg.setDestinationEntity(69U);
    msg.value = 0.5602697662160939;

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
    msg.setTimeStamp(0.5448470187030523);
    msg.setSource(13162U);
    msg.setSourceEntity(1U);
    msg.setDestination(41620U);
    msg.setDestinationEntity(114U);
    msg.value = 0.32188997504766836;

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
    msg.setTimeStamp(0.9383077396468957);
    msg.setSource(43559U);
    msg.setSourceEntity(137U);
    msg.setDestination(36905U);
    msg.setDestinationEntity(134U);
    msg.value = 0.26170770386155173;

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
    msg.setTimeStamp(0.9274610609676303);
    msg.setSource(60158U);
    msg.setSourceEntity(28U);
    msg.setDestination(47496U);
    msg.setDestinationEntity(87U);
    msg.path_ref = 2605704141U;
    msg.start_lat = 0.12472229892531184;
    msg.start_lon = 0.4716540497884125;
    msg.start_z = 0.5209661283477385;
    msg.start_z_units = 82U;
    msg.end_lat = 0.41169591480063117;
    msg.end_lon = 0.594582731628771;
    msg.end_z = 0.9622397625210841;
    msg.end_z_units = 126U;
    msg.speed = 0.4527762333465071;
    msg.speed_units = 74U;
    msg.lradius = 0.32990759527289326;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.559022285939038);
    msg.setSource(58369U);
    msg.setSourceEntity(10U);
    msg.setDestination(44235U);
    msg.setDestinationEntity(170U);
    msg.path_ref = 3894501866U;
    msg.start_lat = 0.7920944602664811;
    msg.start_lon = 0.30362785267086756;
    msg.start_z = 0.4577015436723466;
    msg.start_z_units = 163U;
    msg.end_lat = 0.3783295008537657;
    msg.end_lon = 0.46206679620183155;
    msg.end_z = 0.0392621468469847;
    msg.end_z_units = 74U;
    msg.speed = 0.10122549036505668;
    msg.speed_units = 22U;
    msg.lradius = 0.5918788797511794;
    msg.flags = 41U;

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
    msg.setTimeStamp(0.5710173787295872);
    msg.setSource(56534U);
    msg.setSourceEntity(28U);
    msg.setDestination(48861U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 4125580968U;
    msg.start_lat = 0.23633469350377845;
    msg.start_lon = 0.3751166042006405;
    msg.start_z = 0.4968002368182236;
    msg.start_z_units = 244U;
    msg.end_lat = 0.5264880392342979;
    msg.end_lon = 0.8400616883996049;
    msg.end_z = 0.30967996633612804;
    msg.end_z_units = 25U;
    msg.speed = 0.7673141008481223;
    msg.speed_units = 5U;
    msg.lradius = 0.8217309857282378;
    msg.flags = 233U;

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
    msg.setTimeStamp(0.0669740776027602);
    msg.setSource(14365U);
    msg.setSourceEntity(126U);
    msg.setDestination(42338U);
    msg.setDestinationEntity(245U);
    msg.x = 0.2147659019760635;
    msg.y = 0.70241686148805;
    msg.z = 0.6549108409631426;
    msg.k = 0.368989079869386;
    msg.m = 0.9974274617908998;
    msg.n = 0.44509635809559744;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.6325143747729643);
    msg.setSource(51648U);
    msg.setSourceEntity(26U);
    msg.setDestination(3711U);
    msg.setDestinationEntity(236U);
    msg.x = 0.7522611846489239;
    msg.y = 0.4428549948762238;
    msg.z = 0.25200231515457305;
    msg.k = 0.06449068521645163;
    msg.m = 0.7302939234341167;
    msg.n = 0.17880398956341848;
    msg.flags = 17U;

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
    msg.setTimeStamp(0.6206424544528368);
    msg.setSource(26566U);
    msg.setSourceEntity(138U);
    msg.setDestination(56337U);
    msg.setDestinationEntity(15U);
    msg.x = 0.3879204947763235;
    msg.y = 0.8200304626744981;
    msg.z = 0.9260663854296937;
    msg.k = 0.6740022093382011;
    msg.m = 0.0036725100837033953;
    msg.n = 0.31833784433864754;
    msg.flags = 140U;

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
    msg.setTimeStamp(0.12362260207787223);
    msg.setSource(1408U);
    msg.setSourceEntity(132U);
    msg.setDestination(15191U);
    msg.setDestinationEntity(139U);
    msg.value = 0.37689870427901917;

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
    msg.setTimeStamp(0.31795185936877723);
    msg.setSource(13211U);
    msg.setSourceEntity(189U);
    msg.setDestination(14533U);
    msg.setDestinationEntity(236U);
    msg.value = 0.759235800170588;

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
    msg.setTimeStamp(0.19946734701797886);
    msg.setSource(47151U);
    msg.setSourceEntity(130U);
    msg.setDestination(38510U);
    msg.setDestinationEntity(131U);
    msg.value = 0.7275335603320353;

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
    msg.setTimeStamp(0.22916481218500273);
    msg.setSource(45569U);
    msg.setSourceEntity(108U);
    msg.setDestination(62638U);
    msg.setDestinationEntity(143U);
    msg.u = 0.9919560757705738;
    msg.v = 0.5238205797212571;
    msg.w = 0.5478886131503594;
    msg.p = 0.43069320107444775;
    msg.q = 0.7798432766812678;
    msg.r = 0.6595979928788337;
    msg.flags = 197U;

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
    msg.setTimeStamp(0.3922768957618771);
    msg.setSource(63649U);
    msg.setSourceEntity(129U);
    msg.setDestination(65007U);
    msg.setDestinationEntity(1U);
    msg.u = 0.6557098921221167;
    msg.v = 0.7497379881883977;
    msg.w = 0.31130579758227384;
    msg.p = 0.1513057797000189;
    msg.q = 0.5836389388264364;
    msg.r = 0.9980818015934019;
    msg.flags = 229U;

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
    msg.setTimeStamp(0.4215948433369373);
    msg.setSource(17889U);
    msg.setSourceEntity(37U);
    msg.setDestination(57026U);
    msg.setDestinationEntity(159U);
    msg.u = 0.2633659449659539;
    msg.v = 0.9692914960710407;
    msg.w = 0.1717000006587388;
    msg.p = 0.6848064201023373;
    msg.q = 0.7763509929595617;
    msg.r = 0.9038021689466281;
    msg.flags = 19U;

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
    msg.setTimeStamp(0.8174224649015075);
    msg.setSource(61811U);
    msg.setSourceEntity(226U);
    msg.setDestination(30189U);
    msg.setDestinationEntity(94U);
    msg.path_ref = 359752614U;
    msg.start_lat = 0.7670525733811716;
    msg.start_lon = 0.2020803617626602;
    msg.start_z = 0.7526968153976888;
    msg.start_z_units = 180U;
    msg.end_lat = 0.8491909113760786;
    msg.end_lon = 0.8515623248731806;
    msg.end_z = 0.19729045228953468;
    msg.end_z_units = 109U;
    msg.lradius = 0.639065496222437;
    msg.flags = 36U;
    msg.x = 0.4627662575763183;
    msg.y = 0.2922715779433268;
    msg.z = 0.33026001785846826;
    msg.vx = 0.9371626464285062;
    msg.vy = 0.1194155801651775;
    msg.vz = 0.6541638207880586;
    msg.course_error = 0.23303757120431734;
    msg.eta = 35610U;

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
    msg.setTimeStamp(0.6704556965707881);
    msg.setSource(49856U);
    msg.setSourceEntity(8U);
    msg.setDestination(13871U);
    msg.setDestinationEntity(238U);
    msg.path_ref = 811638211U;
    msg.start_lat = 0.6804520837170648;
    msg.start_lon = 0.0668764973260717;
    msg.start_z = 0.9366726374105709;
    msg.start_z_units = 221U;
    msg.end_lat = 0.7561914183144143;
    msg.end_lon = 0.31878866760984426;
    msg.end_z = 0.6153336776839125;
    msg.end_z_units = 124U;
    msg.lradius = 0.061001292751694414;
    msg.flags = 228U;
    msg.x = 0.44226837617509906;
    msg.y = 0.144990191169188;
    msg.z = 0.19682894182547994;
    msg.vx = 0.49505184518234646;
    msg.vy = 0.3761672822010391;
    msg.vz = 0.3328234118089446;
    msg.course_error = 0.2826420041804847;
    msg.eta = 2946U;

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
    msg.setTimeStamp(0.2909458219132812);
    msg.setSource(62676U);
    msg.setSourceEntity(52U);
    msg.setDestination(26832U);
    msg.setDestinationEntity(214U);
    msg.path_ref = 1080191165U;
    msg.start_lat = 0.5351138728834783;
    msg.start_lon = 0.09807266429293049;
    msg.start_z = 0.7669079094726267;
    msg.start_z_units = 253U;
    msg.end_lat = 0.35388588208754523;
    msg.end_lon = 0.2505091232720408;
    msg.end_z = 0.6676112402399266;
    msg.end_z_units = 129U;
    msg.lradius = 0.656425499604275;
    msg.flags = 23U;
    msg.x = 0.3957863503192329;
    msg.y = 0.6416629985625623;
    msg.z = 0.289241717020958;
    msg.vx = 0.4425122443606202;
    msg.vy = 0.3670458584565871;
    msg.vz = 0.723852803575912;
    msg.course_error = 0.6977356340770703;
    msg.eta = 31586U;

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
    msg.setTimeStamp(0.9920621475168433);
    msg.setSource(16475U);
    msg.setSourceEntity(10U);
    msg.setDestination(22998U);
    msg.setDestinationEntity(93U);
    msg.k = 0.551526622933155;
    msg.m = 0.22284783681996045;
    msg.n = 0.7977279232012796;

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
    msg.setTimeStamp(0.20600541396897865);
    msg.setSource(43255U);
    msg.setSourceEntity(225U);
    msg.setDestination(29524U);
    msg.setDestinationEntity(124U);
    msg.k = 0.7775755997274781;
    msg.m = 0.48733599690059637;
    msg.n = 0.45278061103635125;

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
    msg.setTimeStamp(0.5784649894759463);
    msg.setSource(38179U);
    msg.setSourceEntity(238U);
    msg.setDestination(60281U);
    msg.setDestinationEntity(109U);
    msg.k = 0.3807284274161161;
    msg.m = 0.4765043539101196;
    msg.n = 0.8346193504722235;

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
    msg.setTimeStamp(0.7691308531407538);
    msg.setSource(29139U);
    msg.setSourceEntity(86U);
    msg.setDestination(19954U);
    msg.setDestinationEntity(38U);
    msg.p = 0.2890800177469477;
    msg.i = 0.08538041644512984;
    msg.d = 0.5486602356605345;
    msg.a = 0.545796525192798;

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
    msg.setTimeStamp(0.7802964292732264);
    msg.setSource(64625U);
    msg.setSourceEntity(58U);
    msg.setDestination(42682U);
    msg.setDestinationEntity(169U);
    msg.p = 0.023404734067470456;
    msg.i = 0.9091896644944639;
    msg.d = 0.34840186011079066;
    msg.a = 0.249953233861555;

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
    msg.setTimeStamp(0.3532735696711239);
    msg.setSource(30683U);
    msg.setSourceEntity(169U);
    msg.setDestination(49953U);
    msg.setDestinationEntity(22U);
    msg.p = 0.07094156213514469;
    msg.i = 0.012200646416537508;
    msg.d = 0.4347203704584214;
    msg.a = 0.745063953809406;

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
    msg.setTimeStamp(0.4914364115117561);
    msg.setSource(47865U);
    msg.setSourceEntity(149U);
    msg.setDestination(62135U);
    msg.setDestinationEntity(10U);
    msg.op = 120U;

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
    msg.setTimeStamp(0.7108872710953368);
    msg.setSource(30858U);
    msg.setSourceEntity(167U);
    msg.setDestination(45249U);
    msg.setDestinationEntity(173U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.683057683253185);
    msg.setSource(57371U);
    msg.setSourceEntity(103U);
    msg.setDestination(48004U);
    msg.setDestinationEntity(19U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.9546289340468759);
    msg.setSource(55573U);
    msg.setSourceEntity(11U);
    msg.setDestination(16120U);
    msg.setDestinationEntity(3U);
    msg.x = 0.5419067781060724;
    msg.y = 0.010896306957126956;
    msg.z = 0.11558609688555;
    msg.vx = 0.6444317048001414;
    msg.vy = 0.14855712776220076;
    msg.vz = 0.6416178436334459;
    msg.ax = 0.4303913370687047;
    msg.ay = 0.03726701337350802;
    msg.az = 0.6916595929006771;
    msg.flags = 43617U;

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
    msg.setTimeStamp(0.6033541209127399);
    msg.setSource(1329U);
    msg.setSourceEntity(54U);
    msg.setDestination(52794U);
    msg.setDestinationEntity(124U);
    msg.x = 0.3167039891578559;
    msg.y = 0.03500197059839605;
    msg.z = 0.3523010633206556;
    msg.vx = 0.6657852136113697;
    msg.vy = 0.9993866222433025;
    msg.vz = 0.6552814200673853;
    msg.ax = 0.10889725878981604;
    msg.ay = 0.5549655377412469;
    msg.az = 0.38004477768059697;
    msg.flags = 62938U;

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
    msg.setTimeStamp(0.048855240545548906);
    msg.setSource(5873U);
    msg.setSourceEntity(31U);
    msg.setDestination(41689U);
    msg.setDestinationEntity(149U);
    msg.x = 0.31495545928513036;
    msg.y = 0.9853788584402361;
    msg.z = 0.6041366264932062;
    msg.vx = 0.416209480424085;
    msg.vy = 0.4772165822727218;
    msg.vz = 0.3286475786457622;
    msg.ax = 0.8235315608897237;
    msg.ay = 0.745456925182227;
    msg.az = 0.6297277377759847;
    msg.flags = 64724U;

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
    msg.setTimeStamp(0.2976396096910714);
    msg.setSource(39877U);
    msg.setSourceEntity(27U);
    msg.setDestination(61310U);
    msg.setDestinationEntity(195U);
    msg.value = 0.8307612004989648;

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
    msg.setTimeStamp(0.7037645443479685);
    msg.setSource(46604U);
    msg.setSourceEntity(130U);
    msg.setDestination(30826U);
    msg.setDestinationEntity(141U);
    msg.value = 0.6330176410691242;

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
    msg.setTimeStamp(0.7084845711896767);
    msg.setSource(63506U);
    msg.setSourceEntity(26U);
    msg.setDestination(58545U);
    msg.setDestinationEntity(148U);
    msg.value = 0.857471283658964;

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
    msg.setTimeStamp(0.6292005809309154);
    msg.setSource(43798U);
    msg.setSourceEntity(200U);
    msg.setDestination(17378U);
    msg.setDestinationEntity(208U);
    msg.timeout = 38918U;
    msg.lat = 0.9331606776544795;
    msg.lon = 0.5035059563216127;
    msg.z = 0.48498451910092644;
    msg.z_units = 2U;
    msg.speed = 0.406514788064125;
    msg.speed_units = 75U;
    msg.roll = 0.9073854749536481;
    msg.pitch = 0.8812862796731646;
    msg.yaw = 0.17719890571890318;
    msg.custom.assign("XHMGDJEMZZGRTKYQZRLLIE");

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
    msg.setTimeStamp(0.9598950027760139);
    msg.setSource(45684U);
    msg.setSourceEntity(195U);
    msg.setDestination(63994U);
    msg.setDestinationEntity(202U);
    msg.timeout = 24351U;
    msg.lat = 0.5278123076569603;
    msg.lon = 0.9856739432008143;
    msg.z = 0.7203236899824039;
    msg.z_units = 146U;
    msg.speed = 0.660265812329603;
    msg.speed_units = 159U;
    msg.roll = 0.5957194031754346;
    msg.pitch = 0.1494514028001661;
    msg.yaw = 0.548671378971842;
    msg.custom.assign("JOKUZICYQHUFWTOSVAWOBOFENPPWZGVAXLGJXCBNLLRXTBC");

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
    msg.setTimeStamp(0.8977472837374869);
    msg.setSource(46367U);
    msg.setSourceEntity(179U);
    msg.setDestination(27057U);
    msg.setDestinationEntity(150U);
    msg.timeout = 13504U;
    msg.lat = 0.9930561387416322;
    msg.lon = 0.8215567898941649;
    msg.z = 0.2845299536880943;
    msg.z_units = 85U;
    msg.speed = 0.5028455100358336;
    msg.speed_units = 134U;
    msg.roll = 0.51902279570866;
    msg.pitch = 0.2926972801839277;
    msg.yaw = 0.7563339905594766;
    msg.custom.assign("GPBQOOUDVROKRDQODMZNHWRMQFLJQEFRDCWAJTKTSAUCTYOHBKFAFOYXBHXALVXAKMRHGAKGTVTULHMKXXLNZOEFJQBOMOWLGWKXGUIHLDISNCCPIYBWPQTBLXURKUSNBFXZDFYSTYEZWDPDMEBPZSZKGDSVCACNMNEPEPPMEZQIRHNTFDVHZAHYJCIJUJWNIAMWGJBWFGABTGVJMVYLZCILGXRYSE");

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
    msg.setTimeStamp(0.4106162170822303);
    msg.setSource(30096U);
    msg.setSourceEntity(95U);
    msg.setDestination(41301U);
    msg.setDestinationEntity(3U);
    msg.timeout = 27568U;
    msg.lat = 0.14659603162253287;
    msg.lon = 0.27983722050878246;
    msg.z = 0.9577012458108258;
    msg.z_units = 68U;
    msg.speed = 0.3168747004430871;
    msg.speed_units = 228U;
    msg.duration = 28787U;
    msg.radius = 0.44819361297281635;
    msg.flags = 99U;
    msg.custom.assign("TVYSTPRYPHSZBXJTEMZGYYMBASYVXDHTUBPRQHRKNFCOYNYNRELXWWXMZHTIZLDXXMENGOLJURJDWVUDUWIAGMLPEJNOZTVCGGVKVEKSBQISVCEWAIIQLUYADBAYRULSIBZQUHBDOEECXBMCEAKNIIPPQVJMCDNHNOMUHFQUPRJKBZZDQOSTIJARPOMQAAHQOLFMJFCWGKRFTAWLRDBFXCNWLDQGHXUOVWFPGCPGXFKYGTL");

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
    msg.setTimeStamp(0.747986375283665);
    msg.setSource(21932U);
    msg.setSourceEntity(210U);
    msg.setDestination(25305U);
    msg.setDestinationEntity(142U);
    msg.timeout = 22228U;
    msg.lat = 0.9394439121878995;
    msg.lon = 0.43191555935669024;
    msg.z = 0.24116488176049677;
    msg.z_units = 160U;
    msg.speed = 0.7273364543149203;
    msg.speed_units = 8U;
    msg.duration = 15136U;
    msg.radius = 0.626864732744573;
    msg.flags = 228U;
    msg.custom.assign("DEYLBLAXSGJIOPZTFSBIGRPCMQELPCJFBQPNTMBYUPCHUHZIBDMXAKQQAWNCRNNGNFHMHCXYZUBLZWFVKENETDCIGFDAJYOTQVEKJXOCDVCLGCJRHQJTMOPLUOZFSWEWSIQLBQKILDEUCKENTRWJMFNKTSMSVRSMXFGAJZGAVDWYINSKZDTGUPFUVVTHWKOFRUEDWIYJLHYYPEKKOAUXVRGTHRYWYMXJZLIPBAWOOXSQUHNXAXVDOPBMAHZZ");

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
    msg.setTimeStamp(0.7248060759179393);
    msg.setSource(18337U);
    msg.setSourceEntity(192U);
    msg.setDestination(52174U);
    msg.setDestinationEntity(101U);
    msg.timeout = 18532U;
    msg.lat = 0.08614653661550409;
    msg.lon = 0.14197476509415718;
    msg.z = 0.13854462772057474;
    msg.z_units = 4U;
    msg.speed = 0.21604727075374575;
    msg.speed_units = 115U;
    msg.duration = 34748U;
    msg.radius = 0.03036890566108108;
    msg.flags = 82U;
    msg.custom.assign("TGHDXGVOBHWDJKSRWVZKKNALRGTTKFYKYRNRMOFUOINYHQSLKPNDTWLQENPAOESIEQGBWMFXCXAXNTVJCIYEUTQQMLVLPCY");

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
    msg.setTimeStamp(0.5591499958779054);
    msg.setSource(11620U);
    msg.setSourceEntity(41U);
    msg.setDestination(25305U);
    msg.setDestinationEntity(150U);
    msg.custom.assign("DLZPSFJSLXJCW");

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
    msg.setTimeStamp(0.9428642666086943);
    msg.setSource(63410U);
    msg.setSourceEntity(94U);
    msg.setDestination(53316U);
    msg.setDestinationEntity(42U);
    msg.custom.assign("BVHUTNZEMDDXYRJJVHYMOLC");

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
    msg.setTimeStamp(0.9253165938257726);
    msg.setSource(1271U);
    msg.setSourceEntity(95U);
    msg.setDestination(29312U);
    msg.setDestinationEntity(80U);
    msg.custom.assign("NERHYDDIXAZQCJVGZEZSHBLZPTNOUHFUGIYDQVJHHDTVAOICOARKATITLGSCKRCQMGMGWGYMYJLWFIFEUCFXFKNPEDLFSF");

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
    msg.setTimeStamp(0.9843965082714978);
    msg.setSource(24984U);
    msg.setSourceEntity(239U);
    msg.setDestination(36582U);
    msg.setDestinationEntity(77U);
    msg.timeout = 46336U;
    msg.lat = 0.8878967706843396;
    msg.lon = 0.12459163057504763;
    msg.z = 0.2098474788331144;
    msg.z_units = 30U;
    msg.duration = 64478U;
    msg.speed = 0.1270982832254619;
    msg.speed_units = 253U;
    msg.type = 34U;
    msg.radius = 0.8198923017587137;
    msg.length = 0.15268955769038306;
    msg.bearing = 0.3351615016805206;
    msg.direction = 97U;
    msg.custom.assign("FBBXOWOGQMTDUYERYCNSMDGAUVFEUSCRMHNPFARWMSWQFZDQIDMUVZYECX");

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
    msg.setTimeStamp(0.16361114792002007);
    msg.setSource(59466U);
    msg.setSourceEntity(56U);
    msg.setDestination(52838U);
    msg.setDestinationEntity(100U);
    msg.timeout = 21691U;
    msg.lat = 0.6376688827367099;
    msg.lon = 0.9285229363618486;
    msg.z = 0.475412824785045;
    msg.z_units = 176U;
    msg.duration = 9492U;
    msg.speed = 0.30742651365193363;
    msg.speed_units = 172U;
    msg.type = 23U;
    msg.radius = 0.4597931459349929;
    msg.length = 0.09615866863198153;
    msg.bearing = 0.5038528891816182;
    msg.direction = 5U;
    msg.custom.assign("DHAXVJCOLBYONLGIXTTUMEKQEKTYEDVGOGKHDJCYTKFAOFSWRIIAAXQENPSEVJLAKFWSSBYFHLIEIZHZVBSPPZHDASOKEFMWKCGBNLUFYIVJUPUFLTBQWOXGZCCNVQGMRXAFDTTJNMHWVHLKOSWYFJBVNEMYJJETYHNRICMXBXQXFRLSSDXBPKPCIGQNBOHWDUOZMLQZPGIRGYRZRDTVRWMGZZARRYDKVCMOECBNPXNHADJSWLMUUU");

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
    msg.setTimeStamp(0.030273857503620105);
    msg.setSource(17471U);
    msg.setSourceEntity(20U);
    msg.setDestination(1305U);
    msg.setDestinationEntity(34U);
    msg.timeout = 29331U;
    msg.lat = 0.21789206599793365;
    msg.lon = 0.9270349065903842;
    msg.z = 0.48551583116445474;
    msg.z_units = 96U;
    msg.duration = 64201U;
    msg.speed = 0.4312893562058123;
    msg.speed_units = 172U;
    msg.type = 225U;
    msg.radius = 0.93701015811013;
    msg.length = 0.477862893102857;
    msg.bearing = 0.5867194437960753;
    msg.direction = 143U;
    msg.custom.assign("QGLDXGFKPFMSKOCXEEUDNSJLIQAXLRV");

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
    msg.setTimeStamp(0.4156853957101805);
    msg.setSource(8442U);
    msg.setSourceEntity(204U);
    msg.setDestination(45551U);
    msg.setDestinationEntity(37U);
    msg.duration = 47244U;
    msg.custom.assign("ZHNUXVABNPKEXZUZGLIDMJKJOLIPPERZIFRQUIEPVRETOXNBAIYHODGQGMWDRFKFQVKSRXQYMMM");

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
    msg.setTimeStamp(0.8781958283669151);
    msg.setSource(24412U);
    msg.setSourceEntity(142U);
    msg.setDestination(28437U);
    msg.setDestinationEntity(2U);
    msg.duration = 10478U;
    msg.custom.assign("THAKHKGRVCTMPEOWTTJGMXYRBHEIXZGCJLEPVFBPOPDDQETMQQGZKZOAZEXXBVHMDPARY");

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
    msg.setTimeStamp(0.6909075033908101);
    msg.setSource(23426U);
    msg.setSourceEntity(73U);
    msg.setDestination(52090U);
    msg.setDestinationEntity(200U);
    msg.duration = 4505U;
    msg.custom.assign("ETWEEDOOWAFKVYLIJBADISUXYSCZPSATXDUBELMSWDAIJCWFHBNPXODKHXN");

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
    msg.setTimeStamp(0.8661648440680297);
    msg.setSource(16874U);
    msg.setSourceEntity(246U);
    msg.setDestination(55289U);
    msg.setDestinationEntity(251U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.545488786528082;
    tmp_msg_0.z_units = 136U;
    msg.control.set(tmp_msg_0);
    msg.duration = 20663U;
    msg.custom.assign("EJVDMESSYKPTSEYWIVTLKFGCAVCCYXHHALIJNNJOVXUJHNPJZMPZOGMQUQSUDBSCFADAXJXOJLZPITKRISLDLQOYZKCQPLOVOIIBEXGQVZMHJCFGFF");

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
    msg.setTimeStamp(0.6188120080869466);
    msg.setSource(10361U);
    msg.setSourceEntity(187U);
    msg.setDestination(29350U);
    msg.setDestinationEntity(64U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.19536337365681322;
    tmp_msg_0.speed_units = 138U;
    msg.control.set(tmp_msg_0);
    msg.duration = 10952U;
    msg.custom.assign("TICRCONJTMUMKBJKEOTLVNMEBMZKHXWTXBGETBGBHTULFKEDGRUAVKCRZQDQVPSABYDAHXJUQJXGFVPHLNBRIZASNIBMOTQCRNJ");

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
    msg.setTimeStamp(0.9530834380174332);
    msg.setSource(23767U);
    msg.setSourceEntity(24U);
    msg.setDestination(49979U);
    msg.setDestinationEntity(207U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.4308918615293149;
    msg.control.set(tmp_msg_0);
    msg.duration = 18334U;
    msg.custom.assign("HOVBYNQAWEUEPUVYFCVTUWIXYRECNJQDVWLVI");

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
    msg.setTimeStamp(0.487393159846615);
    msg.setSource(3287U);
    msg.setSourceEntity(242U);
    msg.setDestination(24493U);
    msg.setDestinationEntity(107U);
    msg.timeout = 610U;
    msg.lat = 0.5182120960925272;
    msg.lon = 0.9526673152982518;
    msg.z = 0.45800270707716473;
    msg.z_units = 204U;
    msg.speed = 0.808734437395353;
    msg.speed_units = 41U;
    msg.bearing = 0.26431071160161956;
    msg.cross_angle = 0.02100550286443481;
    msg.width = 0.8265945775651108;
    msg.length = 0.4751726555928888;
    msg.hstep = 0.03938077659991979;
    msg.coff = 210U;
    msg.alternation = 45U;
    msg.flags = 15U;
    msg.custom.assign("YHJGMYTQXDHOBOFSTWSRYGDIGINMINULERZMHIFFIQCELGUFQLYKEUWDPLQCHCOPVNWKIKKUTNEIZHXWVBPIEVTEMGGUNVBQMDZMIQIKBPJXNVWNFUUUJJAFCJKLOOGYSQSRFD");

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
    msg.setTimeStamp(0.6104964747859453);
    msg.setSource(12311U);
    msg.setSourceEntity(245U);
    msg.setDestination(30987U);
    msg.setDestinationEntity(189U);
    msg.timeout = 22744U;
    msg.lat = 0.5183280279393724;
    msg.lon = 0.8048921194695028;
    msg.z = 0.4231732168468312;
    msg.z_units = 206U;
    msg.speed = 0.5919021531834431;
    msg.speed_units = 50U;
    msg.bearing = 0.31768134679485205;
    msg.cross_angle = 0.07338195253104285;
    msg.width = 0.9045981800330217;
    msg.length = 0.6464163725821561;
    msg.hstep = 0.1766951160457787;
    msg.coff = 45U;
    msg.alternation = 65U;
    msg.flags = 211U;
    msg.custom.assign("QHESZRXTXRFDPZIMMQYIBVKZZAKTPJRTJHQDFMCFNOULVFDGWVAXDRCVJGYSZYALYPJNBIBQAOWAQLEHGKNXMXOEFFISNSZTPYEQYNACOLHEXFODUJWROFTKOWVDGYDCNWBZITYBQAQCJGIAJHGVKMPJPEPUCBXOWN");

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
    msg.setTimeStamp(0.6267430260912077);
    msg.setSource(58440U);
    msg.setSourceEntity(5U);
    msg.setDestination(23854U);
    msg.setDestinationEntity(143U);
    msg.timeout = 42748U;
    msg.lat = 0.19009480222989694;
    msg.lon = 0.20138905891160208;
    msg.z = 0.21789125061113324;
    msg.z_units = 55U;
    msg.speed = 0.5084922734316031;
    msg.speed_units = 228U;
    msg.bearing = 0.32735728777392104;
    msg.cross_angle = 0.04472530032837474;
    msg.width = 0.24388170603503945;
    msg.length = 0.9739857487259339;
    msg.hstep = 0.2749989653398076;
    msg.coff = 86U;
    msg.alternation = 219U;
    msg.flags = 235U;
    msg.custom.assign("LCJUNIJLNRFYUQOBFPYWTVQJKBKGSXDWEFWWXEKGIQDNTAPNMPAVWSZOFJPHHXVJVAMOQSBNLHLWNEDRYFAGAOUNZVHXZVIIHQ");

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
    msg.setTimeStamp(0.22256872238554826);
    msg.setSource(5073U);
    msg.setSourceEntity(21U);
    msg.setDestination(5194U);
    msg.setDestinationEntity(72U);
    msg.timeout = 10143U;
    msg.lat = 0.4945965423529226;
    msg.lon = 0.7156415416943002;
    msg.z = 0.4252926647701032;
    msg.z_units = 208U;
    msg.speed = 0.6154632456768253;
    msg.speed_units = 70U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9923683721682777;
    tmp_msg_0.y = 0.023405041268799054;
    tmp_msg_0.z = 0.6219656137642735;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NPSPLPGRQWRZYHMHTBCLJTMSWWDZCPBNREZYNTIGKQVUEZFEDCDGPSUJWXILASYJVKSIGKYLDIRKWWGVDPKDZHQAJRXLUCRVKXAYBLOOOHZAYNWVXBWUCBESIPAKBVEOSFVZNBCOAXXAZMTQYHZJBYNTSQEGOOTFKUKNIWKUXEOSTXFILCRLVAHPXCFHVEMMPQIDFUYNVQFCQMTI");

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
    msg.setTimeStamp(0.6754904853705846);
    msg.setSource(57110U);
    msg.setSourceEntity(188U);
    msg.setDestination(17219U);
    msg.setDestinationEntity(102U);
    msg.timeout = 57279U;
    msg.lat = 0.012611823595902516;
    msg.lon = 0.80081540671699;
    msg.z = 0.9066008456951664;
    msg.z_units = 142U;
    msg.speed = 0.8048871969951499;
    msg.speed_units = 204U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.4099996496843159;
    tmp_msg_0.y = 0.7827500225377481;
    tmp_msg_0.z = 0.31510696118903314;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KJVTSRGIXZEWENFPZAOKKJJDGYDPDPSGTSQGOISLMOJTCJZNFPNLXNHFFEHHMJSBWTIMJGHOHDWYDYEPBNQDJUQZCISIHOECAOUTSNQXFUNXWVURMQGKIUZRFFXLBDYJHIAXDMBQOIEPPYLGMBPRZE");

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
    msg.setTimeStamp(0.35828588419011875);
    msg.setSource(11375U);
    msg.setSourceEntity(52U);
    msg.setDestination(65226U);
    msg.setDestinationEntity(32U);
    msg.timeout = 6130U;
    msg.lat = 0.5178205823612959;
    msg.lon = 0.9316115622944025;
    msg.z = 0.995538024924125;
    msg.z_units = 187U;
    msg.speed = 0.07527971899940133;
    msg.speed_units = 182U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7576155435367463;
    tmp_msg_0.y = 0.7596512498592621;
    tmp_msg_0.z = 0.646772540162015;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KNVVPOUKYBGJHLISQRHTRBDBNPOJBDOWWRFVCMISZUMYNUZETSEIKUVPPSFJPJRHQGIGAVYHSMGLZMLGHBFTQALCPJZKFFJIDALNVYSXAYMEHSXVXFXTLXIFBKXDCOZJMLRWAMYVEKILXWQKQCYPLEQYRXGQEBNQKXWAKAGKCDTP");

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
    msg.setTimeStamp(0.1426037934762301);
    msg.setSource(63656U);
    msg.setSourceEntity(253U);
    msg.setDestination(15219U);
    msg.setDestinationEntity(220U);
    msg.x = 0.9885017131399247;
    msg.y = 0.007812554548477402;
    msg.z = 0.919815141971098;

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
    msg.setTimeStamp(0.399573283302488);
    msg.setSource(52236U);
    msg.setSourceEntity(160U);
    msg.setDestination(20959U);
    msg.setDestinationEntity(239U);
    msg.x = 0.6064518316127594;
    msg.y = 0.4026520231594014;
    msg.z = 0.5342899288234245;

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
    msg.setTimeStamp(0.21202553899240983);
    msg.setSource(37645U);
    msg.setSourceEntity(30U);
    msg.setDestination(58831U);
    msg.setDestinationEntity(51U);
    msg.x = 0.7627172398774652;
    msg.y = 0.8083458787151699;
    msg.z = 0.6907249912277867;

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
    msg.setTimeStamp(0.39974418816796886);
    msg.setSource(48353U);
    msg.setSourceEntity(142U);
    msg.setDestination(18194U);
    msg.setDestinationEntity(89U);
    msg.timeout = 33858U;
    msg.lat = 0.8167564469790792;
    msg.lon = 0.8823015128155687;
    msg.z = 0.11672102568126708;
    msg.z_units = 78U;
    msg.amplitude = 0.192088034280816;
    msg.pitch = 0.44234554727768527;
    msg.speed = 0.7494647508174804;
    msg.speed_units = 145U;
    msg.custom.assign("NNKPOILSBKHTYFQSYXRJHLGVGWYBDMTOLZVANGEEQLFBPFCRLFZXPTADTKEADUDEOMBFXWCMVVFQNBRBRIVLPNJ");

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
    msg.setTimeStamp(0.7930812227543335);
    msg.setSource(10410U);
    msg.setSourceEntity(198U);
    msg.setDestination(8247U);
    msg.setDestinationEntity(253U);
    msg.timeout = 24U;
    msg.lat = 0.30986613356103365;
    msg.lon = 0.04890034865476456;
    msg.z = 0.23300619738905504;
    msg.z_units = 59U;
    msg.amplitude = 0.8714232781716718;
    msg.pitch = 0.23086934126029168;
    msg.speed = 0.902810615755995;
    msg.speed_units = 250U;
    msg.custom.assign("UXAXHSAGMOQFZELEEKFUVVABINVIBRFEYFDFBHXELMEBQDMLKPGWEZ");

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
    msg.setTimeStamp(0.3547765997721811);
    msg.setSource(10042U);
    msg.setSourceEntity(4U);
    msg.setDestination(12498U);
    msg.setDestinationEntity(120U);
    msg.timeout = 56740U;
    msg.lat = 0.043039235375588514;
    msg.lon = 0.8258347713913256;
    msg.z = 0.02716157106472472;
    msg.z_units = 76U;
    msg.amplitude = 0.3949778136148139;
    msg.pitch = 0.19934440318883306;
    msg.speed = 0.8131858216981261;
    msg.speed_units = 192U;
    msg.custom.assign("QCNXEXVFFKZNIGWQKZIBPLNCHSLFTNZICHFDFJNUYXIPSXMHLYGDUGKAMAWLSINXGUUQSHUAIRKASHYMKOVJMYQDNQKZJPALMETPFWLVBGXTYUVMCGPPZGPPBYRDVOSHALJJKRNTHNJBAHNOXRBZTSQBDWIOSDCDLKJHDAFPVORYRUJZFSWCGTVJBWMRVITFMGCHIBKJZZDOOYTXYQQGUEROBUWORVEVBOLILWTQMERETEDKCYAQWWE");

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
    msg.setTimeStamp(0.5014994966831943);
    msg.setSource(35733U);
    msg.setSourceEntity(238U);
    msg.setDestination(32864U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.1881304937255398);
    msg.setSource(55767U);
    msg.setSourceEntity(194U);
    msg.setDestination(48425U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.3795263620594138);
    msg.setSource(20009U);
    msg.setSourceEntity(122U);
    msg.setDestination(50646U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.32516207054400414);
    msg.setSource(37209U);
    msg.setSourceEntity(103U);
    msg.setDestination(8096U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.1707188567328337;
    msg.lon = 0.6463321269465776;
    msg.z = 0.8324783832215584;
    msg.z_units = 12U;
    msg.radius = 0.38818805255364797;
    msg.duration = 34736U;
    msg.speed = 0.8137074001119745;
    msg.speed_units = 165U;
    msg.custom.assign("RWDHTUFSUHRKJXUVVWAEZWYGICIMYYLIMFEUPAQVXSDBWHGLCPVRZQPCTJQJUTHGERMOWVQNKYRSLIRMZQBLCPAGJCZFGHDKYSOBPWBXKHIVUQOMDQZTTUZADXROOQCFJRGBGDQVNEAFFZWGWMPWKACNPAOALAWONIIXVLUNFJXXHHMSXISEDNEHXKUNOBBZIESLNXUDEKTLETOFOMR");

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
    msg.setTimeStamp(0.07511703471928144);
    msg.setSource(19664U);
    msg.setSourceEntity(123U);
    msg.setDestination(1322U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.014635980711298457;
    msg.lon = 0.1937703286058562;
    msg.z = 0.4605364737212896;
    msg.z_units = 66U;
    msg.radius = 0.6296426368926518;
    msg.duration = 19620U;
    msg.speed = 0.8382700099013877;
    msg.speed_units = 10U;
    msg.custom.assign("KBWEZVQGWLNVAWOBZSUFDDEIEFPCXYQWURGGPSTKHYVVVOBECNTEZOXBOOFHKRQZXCTZLANDAUTYYXIIAUHGSLLXOLOFUBYIHHRZDEIDTSNXMZHXUCHJKQRGMSOPJYVULARQDTNCLRIWTFRMUYGWCPJJJNOH");

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
    msg.setTimeStamp(0.7386268418877802);
    msg.setSource(30266U);
    msg.setSourceEntity(220U);
    msg.setDestination(23936U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.7305402337059091;
    msg.lon = 0.44439354683182175;
    msg.z = 0.02880666320591352;
    msg.z_units = 36U;
    msg.radius = 0.2791663227681589;
    msg.duration = 62122U;
    msg.speed = 0.5331753843736275;
    msg.speed_units = 211U;
    msg.custom.assign("NRDBKHSMLTLXXGVOEVOXWWOFWLDTDKATVVMVSZJQFQRUCJQTIRLYSNMRAHGHFRCOEAKYPAYIFKAQVFZYMVHOUPILSDXGQUKOIQJBGMEXBSAWTVYGQPSVPJEJPIKVDIXRJRPJGNHWZUWEHNLSELUCRESFKZOZHTPWUXCDUBNZPBBNFBIGRDMJJTKTUEROFDHJIXAGMCEHAKXFLYGKWUMF");

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
    msg.setTimeStamp(0.9525039819568931);
    msg.setSource(16136U);
    msg.setSourceEntity(171U);
    msg.setDestination(38624U);
    msg.setDestinationEntity(52U);
    msg.timeout = 45828U;
    msg.flags = 52U;
    msg.lat = 0.216134830701465;
    msg.lon = 0.817442592715675;
    msg.start_z = 0.432173791521842;
    msg.start_z_units = 28U;
    msg.end_z = 0.3306344301803631;
    msg.end_z_units = 240U;
    msg.radius = 0.9987702604494971;
    msg.speed = 0.6091103499634745;
    msg.speed_units = 37U;
    msg.custom.assign("KRNPOHPEMGZUMNLBELQTVXBNWIDSAFTFIXXPEMWRCTEX");

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
    msg.setTimeStamp(0.9154529101821633);
    msg.setSource(19078U);
    msg.setSourceEntity(71U);
    msg.setDestination(50779U);
    msg.setDestinationEntity(53U);
    msg.timeout = 63198U;
    msg.flags = 79U;
    msg.lat = 0.465688888551235;
    msg.lon = 0.4980308131076282;
    msg.start_z = 0.38085780007472536;
    msg.start_z_units = 162U;
    msg.end_z = 0.1648400123742273;
    msg.end_z_units = 35U;
    msg.radius = 0.5971865682159508;
    msg.speed = 0.45316898582757015;
    msg.speed_units = 200U;
    msg.custom.assign("PRHQSWMJMSVZKVAWWNWLHAXQTYMLCQVEMIZHGTMXVHUNAUASLEDKEORH");

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
    msg.setTimeStamp(0.6576191598637406);
    msg.setSource(55419U);
    msg.setSourceEntity(193U);
    msg.setDestination(15994U);
    msg.setDestinationEntity(204U);
    msg.timeout = 63168U;
    msg.flags = 128U;
    msg.lat = 0.2147298833803094;
    msg.lon = 0.15135662005254735;
    msg.start_z = 0.743268503709562;
    msg.start_z_units = 240U;
    msg.end_z = 0.6485298903445067;
    msg.end_z_units = 226U;
    msg.radius = 0.16911372726351626;
    msg.speed = 0.5513484236811217;
    msg.speed_units = 221U;
    msg.custom.assign("NEANHRAJCEMOWTKCVUNXAMNYAZSSQTOSSQOVCHJNPAKIGWWJLUVZNEFBFLTWZHGJAUTNNOZEFSMRKWIFYXHUHLJGIBPRDHTXMYWJYLPXCRKTOYGAJBVYDAJPDLQL");

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
    msg.setTimeStamp(0.5440472886018013);
    msg.setSource(58400U);
    msg.setSourceEntity(10U);
    msg.setDestination(8877U);
    msg.setDestinationEntity(164U);
    msg.timeout = 5624U;
    msg.lat = 0.3252745324236872;
    msg.lon = 0.4158857810581873;
    msg.z = 0.013230370755361598;
    msg.z_units = 139U;
    msg.speed = 0.15807772986600777;
    msg.speed_units = 64U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.09156290098859876;
    tmp_msg_0.y = 0.25534381542553786;
    tmp_msg_0.z = 0.5579730428492947;
    tmp_msg_0.t = 0.058374912934052614;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LROALEQSKUAGTPZIAIIKPVWYKRZOFRBEZWFIPUZCBLNMQSIXRYKNFIKPOOOBUYNBLQPETZRYJFMCUKOXAPGVTONBSIHJFGJIXWAKD");

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
    msg.setTimeStamp(0.6373935103743814);
    msg.setSource(15728U);
    msg.setSourceEntity(188U);
    msg.setDestination(59997U);
    msg.setDestinationEntity(85U);
    msg.timeout = 23192U;
    msg.lat = 0.2267689392905653;
    msg.lon = 0.7004669678056011;
    msg.z = 0.9752575579529715;
    msg.z_units = 120U;
    msg.speed = 0.915718929123203;
    msg.speed_units = 224U;
    msg.custom.assign("AYIQTEDTLRMOGHRNXIFMWDGWCZBYJMZOJOSVGSJVVNJWLQIBU");

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
    msg.setTimeStamp(0.08375407640559007);
    msg.setSource(19673U);
    msg.setSourceEntity(199U);
    msg.setDestination(49305U);
    msg.setDestinationEntity(170U);
    msg.timeout = 30809U;
    msg.lat = 0.9793288169800094;
    msg.lon = 0.13142397407170336;
    msg.z = 0.45127222902975617;
    msg.z_units = 56U;
    msg.speed = 0.5338255353179141;
    msg.speed_units = 121U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9682789680693195;
    tmp_msg_0.y = 0.32187886759134376;
    tmp_msg_0.z = 0.4991216702589446;
    tmp_msg_0.t = 0.20012668762291685;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AIYTBXONZPJVMCUWMKCFQANDXFUKEUVJFHS");

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
    msg.setTimeStamp(0.3358538172652338);
    msg.setSource(1631U);
    msg.setSourceEntity(34U);
    msg.setDestination(62874U);
    msg.setDestinationEntity(127U);
    msg.x = 0.525184259817237;
    msg.y = 0.20636758474725192;
    msg.z = 0.21495699701840154;
    msg.t = 0.6351211577723017;

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
    msg.setTimeStamp(0.7717126913432841);
    msg.setSource(31391U);
    msg.setSourceEntity(188U);
    msg.setDestination(24381U);
    msg.setDestinationEntity(151U);
    msg.x = 0.4098996986214397;
    msg.y = 0.9082364878980852;
    msg.z = 0.3148853059170734;
    msg.t = 0.28902458529471087;

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
    msg.setTimeStamp(0.5533900742082343);
    msg.setSource(36743U);
    msg.setSourceEntity(97U);
    msg.setDestination(40258U);
    msg.setDestinationEntity(201U);
    msg.x = 0.9124489324771822;
    msg.y = 0.4322806627682053;
    msg.z = 0.057621118230166135;
    msg.t = 0.929183289104451;

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
    msg.setTimeStamp(0.5993850351035527);
    msg.setSource(7466U);
    msg.setSourceEntity(183U);
    msg.setDestination(22463U);
    msg.setDestinationEntity(184U);
    msg.timeout = 60410U;
    msg.name.assign("GLKGDNKTFYUJHGENOYAZCMOWWZQDSXGRIDPKEALZAXNFCK");
    msg.custom.assign("XRWCLODNFFGRLGFTBBRGJRMEDGGRGAAXOIKMFBMIWYIPEDXVMMHJHQAYBKPRZVPUKJQWTLIIQDGPZNDSTSLQXBMBOVZGAHJPSZAKIUHHDWKDNIJHT");

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
    msg.setTimeStamp(0.784026864639451);
    msg.setSource(62276U);
    msg.setSourceEntity(157U);
    msg.setDestination(103U);
    msg.setDestinationEntity(141U);
    msg.timeout = 23623U;
    msg.name.assign("VSTXESSEGJJUIRLIPPAXGSFBHHIKWWQSWKOVXLTFQNZQCGJRNJCVMQHCRIQUMBAPZYFLRDKHVZITPWZLZHOVSEWTOFIJXCPIEAPVDHFYOUSDMRHWSTDMQOCYYFUGZRAMUKDNXANKEMVEPYOLLMFZNBHRYGGDSMXJFGLBEATUNBSWPOCCQKKHBUGWRFJUMDELPKDIYAUBGLNZMBITTVZRAJ");
    msg.custom.assign("KSBQCFZRNFDHKJJAALZSRXFUUTMPLYXXQRSXTJZGYHALBRJXSDFOZLYLWBEEYVANDWGHECGIOWJHYMIPVGBJXZFQXTVPCHSEIMQDKZEDORBNUXCLAUPBUUTBOMPGMQSGFEPZICVIPDTYQWDKVRYVSTJNJAWEHKVOCKAILKDR");

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
    msg.setTimeStamp(0.38669161025223286);
    msg.setSource(50088U);
    msg.setSourceEntity(212U);
    msg.setDestination(53593U);
    msg.setDestinationEntity(56U);
    msg.timeout = 38437U;
    msg.name.assign("WQZCHYGHDNDONWJJDIJTWWERSAGHAFNHICXWXSBFJJXVOIGBPQLKRIZCPALORTACBDML");
    msg.custom.assign("ULRTNEEVHNVCARZBKVJIZUWAYQOQVNUXELRMBPVCSXHRFZCDIAINXTJTWMEWPKSO");

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
    msg.setTimeStamp(0.9035913735763321);
    msg.setSource(928U);
    msg.setSourceEntity(204U);
    msg.setDestination(35702U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.28575045409761657;
    msg.lon = 0.32230434817626374;
    msg.z = 0.471948451813769;
    msg.z_units = 195U;
    msg.speed = 0.16256093381279957;
    msg.speed_units = 136U;
    msg.start_time = 0.1809374560598278;
    msg.custom.assign("GXKQAFWTNFARCRUXEJKJRFPJXVUMJCWQKDKUQVLLEVEJXUTPGRQIMRGOVXTDOBPZBELAPPUVNUVFEHHJHLDIVISEHCYVMWNYCPVWOZOKMMKWUXRTNUSAYEGZMLZCPGWMCHPAGXYCJOBXYBUYDYFLYWRHDZH");

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
    msg.setTimeStamp(0.35148510578692616);
    msg.setSource(38519U);
    msg.setSourceEntity(132U);
    msg.setDestination(43655U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.4749108603917055;
    msg.lon = 0.9220157188258647;
    msg.z = 0.544466844897312;
    msg.z_units = 38U;
    msg.speed = 0.6638243937479968;
    msg.speed_units = 47U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 19814U;
    tmp_msg_0.off_x = 0.6748532259892994;
    tmp_msg_0.off_y = 0.8186865110337959;
    tmp_msg_0.off_z = 0.014324575354891844;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5829578734983003;
    msg.custom.assign("LZIJZEYRPNJVSZYBKIJKVDCGLJOKSDSUPAFEDWHIWWWEUEXTYLSVGFCIVGPSRBNGHGPCFJLQIDDZTAMOKFPBFRKYUIGYZUTSWQURWDGTWDHHMNPARTFYSAAHPXPOFQUORXZ");

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
    msg.setTimeStamp(0.9944953766558503);
    msg.setSource(18560U);
    msg.setSourceEntity(235U);
    msg.setDestination(64540U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.2143067849386565;
    msg.lon = 0.9380572756491942;
    msg.z = 0.13995508146359692;
    msg.z_units = 136U;
    msg.speed = 0.7062507459497973;
    msg.speed_units = 171U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.17471680898191166;
    tmp_msg_0.y = 0.9668645976135912;
    tmp_msg_0.z = 0.09715888303996378;
    tmp_msg_0.t = 0.9457544188006995;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6499546212705103;
    msg.custom.assign("MPFNHLZGMACEAWDKZHYEKXFVXWJSLPRTIHRCVQADVPOAKHSTOLVUZERQLJRCCROZCQSRYYYANNQFNFIOTXOLTWTUDENMNGHNIBZIFRSGJFRJZRQETXUHZDXTQOOULKPGEQRVMGOO");

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
    msg.setTimeStamp(0.30497146482857795);
    msg.setSource(2738U);
    msg.setSourceEntity(44U);
    msg.setDestination(5569U);
    msg.setDestinationEntity(59U);
    msg.vid = 5290U;
    msg.off_x = 0.22913946748540137;
    msg.off_y = 0.5735713606231851;
    msg.off_z = 0.7641503936159579;

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
    msg.setTimeStamp(0.8137755555788235);
    msg.setSource(3487U);
    msg.setSourceEntity(239U);
    msg.setDestination(55175U);
    msg.setDestinationEntity(228U);
    msg.vid = 62658U;
    msg.off_x = 0.9083396359259931;
    msg.off_y = 0.045855194177380265;
    msg.off_z = 0.808779997413528;

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
    msg.setTimeStamp(0.6129837162311159);
    msg.setSource(34294U);
    msg.setSourceEntity(5U);
    msg.setDestination(52595U);
    msg.setDestinationEntity(242U);
    msg.vid = 15754U;
    msg.off_x = 0.6128698662423226;
    msg.off_y = 0.8118456399560989;
    msg.off_z = 0.5107053072136033;

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
    msg.setTimeStamp(0.7223551987381749);
    msg.setSource(29462U);
    msg.setSourceEntity(26U);
    msg.setDestination(23568U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.34866133508464914);
    msg.setSource(60608U);
    msg.setSourceEntity(166U);
    msg.setDestination(44U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.40128901347292223);
    msg.setSource(47343U);
    msg.setSourceEntity(249U);
    msg.setDestination(15964U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.32629082457084624);
    msg.setSource(17021U);
    msg.setSourceEntity(197U);
    msg.setDestination(7614U);
    msg.setDestinationEntity(36U);
    msg.mid = 5027U;

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
    msg.setTimeStamp(0.19401322412088262);
    msg.setSource(212U);
    msg.setSourceEntity(123U);
    msg.setDestination(2032U);
    msg.setDestinationEntity(50U);
    msg.mid = 34963U;

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
    msg.setTimeStamp(0.020442440810291562);
    msg.setSource(62355U);
    msg.setSourceEntity(174U);
    msg.setDestination(3884U);
    msg.setDestinationEntity(172U);
    msg.mid = 33159U;

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
    msg.setTimeStamp(0.023721505394620035);
    msg.setSource(24362U);
    msg.setSourceEntity(0U);
    msg.setDestination(2552U);
    msg.setDestinationEntity(66U);
    msg.state = 42U;
    msg.eta = 55068U;
    msg.info.assign("FLMTLECLFVLUANJTBQLVZEEMXCBFTYGMAUIHWIRYTPRSYPJLXMDXLUYRAVYXCSYJBFKAKSRFJBVIANFIGGKNHIHVHMQPYAJWF");

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
    msg.setTimeStamp(0.33032531116305386);
    msg.setSource(30021U);
    msg.setSourceEntity(145U);
    msg.setDestination(43129U);
    msg.setDestinationEntity(222U);
    msg.state = 39U;
    msg.eta = 38918U;
    msg.info.assign("VZGBBQYNQRQQMVIJRXZAZMLXOIHGC");

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
    msg.setTimeStamp(0.08631077041098945);
    msg.setSource(10999U);
    msg.setSourceEntity(92U);
    msg.setDestination(1387U);
    msg.setDestinationEntity(126U);
    msg.state = 127U;
    msg.eta = 35089U;
    msg.info.assign("ASKXLPUTHYZHTCSNNBSPOTVURGXFVOUUDGCETQOMWDKPBBJGVHFAXFLEOPSDNIQGUPNVJMLZYIMZDCBXLUBOLTJIQCSYXFVQXPROWWNEJWRHGZEYTKZNSMBHUEPFMOCNDRWJICBGWFOKVIMDOIFWWBEICHOKGMQAXJLIKRVQHRJUCHTDNQNAZFMYJSPLVXRK");

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
    msg.setTimeStamp(0.0034143671973484446);
    msg.setSource(65495U);
    msg.setSourceEntity(135U);
    msg.setDestination(63741U);
    msg.setDestinationEntity(50U);
    msg.system = 7945U;
    msg.duration = 52561U;
    msg.speed = 0.6558172383413573;
    msg.speed_units = 8U;
    msg.x = 0.5761747834507153;
    msg.y = 0.04518304592678846;
    msg.z = 0.7954675314547137;
    msg.z_units = 153U;

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
    msg.setTimeStamp(0.5258192667335241);
    msg.setSource(43151U);
    msg.setSourceEntity(61U);
    msg.setDestination(40785U);
    msg.setDestinationEntity(205U);
    msg.system = 20225U;
    msg.duration = 31370U;
    msg.speed = 0.5724296601167013;
    msg.speed_units = 155U;
    msg.x = 0.024146671909571316;
    msg.y = 0.6071863867906324;
    msg.z = 0.3070039129665104;
    msg.z_units = 142U;

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
    msg.setTimeStamp(0.8860292375471917);
    msg.setSource(5997U);
    msg.setSourceEntity(131U);
    msg.setDestination(16197U);
    msg.setDestinationEntity(159U);
    msg.system = 41872U;
    msg.duration = 63606U;
    msg.speed = 0.38996826350471314;
    msg.speed_units = 143U;
    msg.x = 0.9568669182816854;
    msg.y = 0.2022949834741974;
    msg.z = 0.38622111689487193;
    msg.z_units = 203U;

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
    msg.setTimeStamp(0.8192455018040272);
    msg.setSource(7580U);
    msg.setSourceEntity(34U);
    msg.setDestination(13910U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.9996990085225411;
    msg.lon = 0.3669139383365173;
    msg.speed = 0.48321118818565667;
    msg.speed_units = 197U;
    msg.duration = 60118U;
    msg.sys_a = 456U;
    msg.sys_b = 30759U;
    msg.move_threshold = 0.33185460090902463;

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
    msg.setTimeStamp(0.4095732563105341);
    msg.setSource(34342U);
    msg.setSourceEntity(243U);
    msg.setDestination(37791U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.09136168764614028;
    msg.lon = 0.21772984365947978;
    msg.speed = 0.1665420948883084;
    msg.speed_units = 204U;
    msg.duration = 7918U;
    msg.sys_a = 46091U;
    msg.sys_b = 42540U;
    msg.move_threshold = 0.8702746338966761;

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
    msg.setTimeStamp(0.8618592799860065);
    msg.setSource(60077U);
    msg.setSourceEntity(245U);
    msg.setDestination(21021U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.7188506576953271;
    msg.lon = 0.4191645057203798;
    msg.speed = 0.9380148405341565;
    msg.speed_units = 201U;
    msg.duration = 25544U;
    msg.sys_a = 48572U;
    msg.sys_b = 5964U;
    msg.move_threshold = 0.624824611211138;

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
    msg.setTimeStamp(0.0341003195973939);
    msg.setSource(20227U);
    msg.setSourceEntity(220U);
    msg.setDestination(22018U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.1704800660585547;
    msg.lon = 0.3050914224863902;
    msg.z = 0.7011381566999251;
    msg.z_units = 153U;
    msg.speed = 0.48548207760593565;
    msg.speed_units = 167U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9226268572743965;
    tmp_msg_0.lon = 0.8133514919697111;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KIRPHXYKOUHVOSQKJUNQBSDELMFWSQNPMXSXVUBWZENXUKQXBAAMFUCSCNTHQSGAZMBBCLVBKCCCYGRBLIZWJJGSHILIZXHIRPBIUIQRAGPVCRANOWNALAXERAWGPDHLVPTKIGUJOEWSMYYJOPDYOENLHXPAZFMWTEBFCFYFYWTTEUNDLVYTKZCDLOXORRVEDFDGPJAHMFBCLGMDGVVZZFHKUZNWDYTKOMJWPXMJJGJNIV");

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
    msg.setTimeStamp(0.03182217208202642);
    msg.setSource(40893U);
    msg.setSourceEntity(48U);
    msg.setDestination(8785U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.06675301585318949;
    msg.lon = 0.8069592544261799;
    msg.z = 0.7565529971715931;
    msg.z_units = 27U;
    msg.speed = 0.24715707970410017;
    msg.speed_units = 251U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5874179758849084;
    tmp_msg_0.lon = 0.28846488429677;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KKZEEZCAWFXNDJVGVRERFAWSMRCSIKQPMYOVGLZFCRKBWIZAYTCTFTBMYQSMQRNHVPPBTIBRIYN");

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
    msg.setTimeStamp(0.09708314140687335);
    msg.setSource(33655U);
    msg.setSourceEntity(40U);
    msg.setDestination(60027U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.2563907780359219;
    msg.lon = 0.7047158946837245;
    msg.z = 0.42682252604989845;
    msg.z_units = 86U;
    msg.speed = 0.9661914893625071;
    msg.speed_units = 227U;
    msg.custom.assign("ZCMVPQHLMXKKBZCDFQOUHQTRDOEIPXLCDZNNGTYUFIPHSUYKXGYOFGVZJSSADPNGRECJKBCMAUTBWBGQIEZJHZVPCOLHDPKTJPP");

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
    msg.setTimeStamp(0.8247525912737579);
    msg.setSource(65080U);
    msg.setSourceEntity(189U);
    msg.setDestination(24049U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.09998228707619805;
    msg.lon = 0.7667061895049394;

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
    msg.setTimeStamp(0.5018605332094156);
    msg.setSource(33703U);
    msg.setSourceEntity(106U);
    msg.setDestination(19804U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.30224733410675364;
    msg.lon = 0.2664617592150502;

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
    msg.setTimeStamp(0.6679298636780696);
    msg.setSource(13524U);
    msg.setSourceEntity(143U);
    msg.setDestination(8302U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.0775191611195104;
    msg.lon = 0.6434612937195852;

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
    msg.setTimeStamp(0.004189018158579749);
    msg.setSource(9094U);
    msg.setSourceEntity(105U);
    msg.setDestination(25738U);
    msg.setDestinationEntity(91U);
    msg.timeout = 48929U;
    msg.lat = 0.4868962202963274;
    msg.lon = 0.44499960938861804;
    msg.z = 0.37824566804703597;
    msg.z_units = 248U;
    msg.pitch = 0.5466858002540611;
    msg.amplitude = 0.18062116869575828;
    msg.duration = 33427U;
    msg.speed = 0.08291053594478659;
    msg.speed_units = 68U;
    msg.radius = 0.8186318675604953;
    msg.direction = 143U;
    msg.custom.assign("YZZDATITPOXNPQBNWIJWUCGCKOYOWWJJGGTRGJFDECEWLCXQHSPTYHASUKPXEOYXSIMCQHVBBGOHNEVXZPRYJVGIMMPXJPCXWOSBXBFOUINSIRQMLJQAWTFVWLUJRBPMZYCEATVPQIDFAMOKZASBVDM");

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
    msg.setTimeStamp(0.9548097202165752);
    msg.setSource(56609U);
    msg.setSourceEntity(152U);
    msg.setDestination(47016U);
    msg.setDestinationEntity(119U);
    msg.timeout = 32361U;
    msg.lat = 0.38298918380980884;
    msg.lon = 0.4788503571107856;
    msg.z = 0.833431231544635;
    msg.z_units = 235U;
    msg.pitch = 0.7923980388131657;
    msg.amplitude = 0.1630225103278089;
    msg.duration = 45912U;
    msg.speed = 0.8171789192340575;
    msg.speed_units = 95U;
    msg.radius = 0.5011681931341277;
    msg.direction = 131U;
    msg.custom.assign("WJKPLRNZGLCTIJUINQQKTRSOIWRGJDDQPADEXZZYPGXQVTTGOUSAADMVYZFVZAARJUOCOEIXHUIXBLVZCYFJYFRMGLBJXEPNBNDPYUYOTNZLLGFT");

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
    msg.setTimeStamp(0.14347716540677158);
    msg.setSource(64546U);
    msg.setSourceEntity(57U);
    msg.setDestination(42775U);
    msg.setDestinationEntity(210U);
    msg.timeout = 23079U;
    msg.lat = 0.4128724240872642;
    msg.lon = 0.18511357794635042;
    msg.z = 0.5046893111487322;
    msg.z_units = 79U;
    msg.pitch = 0.44057099857756177;
    msg.amplitude = 0.50009983427881;
    msg.duration = 12939U;
    msg.speed = 0.5208875678087608;
    msg.speed_units = 138U;
    msg.radius = 0.24474661412539722;
    msg.direction = 128U;
    msg.custom.assign("ZIASLZSVEN");

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
    msg.setTimeStamp(0.821555848162743);
    msg.setSource(65249U);
    msg.setSourceEntity(184U);
    msg.setDestination(5684U);
    msg.setDestinationEntity(107U);
    msg.formation_name.assign("SXKSLVBQBXCBXAORBYHILOJQFGQMMABNSONRYSDHAYKIUAZDKJRVKWXQVODFVPMVJHFCNSJQGRUGHKPOFUWTQVENYFMELGZUDEDXATXNDHPNLMRGHCGVEJGEMADSOBVDNSVSLHOCWZFIWTTKTIXIIXHYZZRONDAGZKMTITTMSPECXCFLQBRCUWJIOWKEPZUBLLBPUIYNLSAJRJXMFWYGDAWWWLKECQQRPCM");
    msg.reference_frame = 63U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17545U;
    tmp_msg_0.off_x = 0.6458745122426477;
    tmp_msg_0.off_y = 0.20294323255082103;
    tmp_msg_0.off_z = 0.5739419110564479;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RZYBILMRJYRHTHSVZVRJSECTNBDKOWCENXZCGCPMAIXLQBJSHVGKTBAUTMPUQTQPGFWPJXDABDLKUVEGUEIEHFCBWESEFHQNHUKNSBRLCZWPWRXGFAXBJGYVWKZZYQQCNMDIYFKOMYTPQWJWHNLZLIYDCNGDNUJPRNOKSAXVP");

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
    msg.setTimeStamp(0.5303984694581807);
    msg.setSource(8887U);
    msg.setSourceEntity(99U);
    msg.setDestination(56494U);
    msg.setDestinationEntity(186U);
    msg.formation_name.assign("TJVKBJLLCQXMXFNRZDCGSMTAWALBVTRGLFALEWFHOVKDQBRFNZ");
    msg.reference_frame = 116U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54234U;
    tmp_msg_0.off_x = 0.25700052988266475;
    tmp_msg_0.off_y = 0.7553142439283116;
    tmp_msg_0.off_z = 0.5933714654813785;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NRGQGMSVNOUXXSQEEWKSLXLIPCDPUPUYSDZXWKVZPUOLCTXFGWJRRUEQPBQTTWSTNLEVFQAYGBKMRHMLHWZNAVXJZCQBUWOTFKOXSZYFBBHOQVWRAKO");

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
    msg.setTimeStamp(0.23831890608897022);
    msg.setSource(30725U);
    msg.setSourceEntity(235U);
    msg.setDestination(40573U);
    msg.setDestinationEntity(5U);
    msg.formation_name.assign("LACLFBROISTCXVHWGTTJCVHWSZKXHRYDOHDTQTHIMLZEREAOSKTBDUJARHYBXJGJRIZLERVJIDNPZFODNAVVLMIAQYSMIWFQPNBYTPOZZGQCXELDZTSCSOMULYSGWGPUTBXPHHBKPWFCZJPRBWDVNFSYXFEVEFQECRGQNWUKZJMYCNKLOKJPSNGVM");
    msg.reference_frame = 6U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25628U;
    tmp_msg_0.off_x = 0.011138588464990384;
    tmp_msg_0.off_y = 0.3425902140423682;
    tmp_msg_0.off_z = 0.8606823896094653;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DPDOQAUNFVHDIMADOD");

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
    msg.setTimeStamp(0.555424756292408);
    msg.setSource(48857U);
    msg.setSourceEntity(241U);
    msg.setDestination(50711U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("YUOBGOIFVUNCLKNYHZGXZDWRGFRSBPIVFCFMSMGLVJGWAXKFDMONBBTOEMVU");
    msg.formation_name.assign("DKRQPOLSJUHKRRMPPMKALVXZGGIWMFASQFUJZXDWMQOIKRSFHRYJYTQOWYCITBUYBQIVHKNTGMCZWCOQTLNNAJDCZEMAKLULXFOYGFNGRGVLXDERBBOTCCFEZWCQJOTDHYSAUGXIMVYZEBKJBSANPPAUORMPSLXKEPSHVXSWNJPKZQEPQGUNDVSYXJXTFDWFBIAXWITCIFRROJYHMLILAZBCDHPVNU");
    msg.plan_id.assign("VXCYANJNIYMVGHFNJPOUJTQHALTKRKHRJBNYTPYHGSQWLFEARMMFAOBDCFXKZPLBINVEBLJTKXZVHXEMUNBPDEOSGRZRXMCGNGVCGCAAUFBLOFZPOGVAFIYLJCQMEOTJHTQESLUGMIXSMVQHOIPZNFWKKXQUSRJKBXXWDQYP");
    msg.description.assign("ZNCAJAVFBPIGYMFZBVYJBLDGNMSSDKZLNIXRRRYRXKEYKVVRWDOUTYNOPGLKTUOJHPLFYADSSOOHBOEUQQMGHTIECUXSEZEPPEFLPBFSCTAINDGJPHZMCRMXDBEGJYFNJZQASILBCTFQWUJTQJZRWJKVDWCNGXTVKRWKHNQPNOAXWYGZQIHNMBBYTZACGXYKAPROKDUSTHMIQJFQXULWDGOOFIEVHACDMLXHCCMHQVETMLEPUUFIV");
    msg.leader_speed = 0.9088836933406367;
    msg.leader_bank_lim = 0.4382880994375614;
    msg.pos_sim_err_lim = 0.23907504940763946;
    msg.pos_sim_err_wrn = 0.09388086119819683;
    msg.pos_sim_err_timeout = 46398U;
    msg.converg_max = 0.5200616157784111;
    msg.converg_timeout = 16200U;
    msg.comms_timeout = 59878U;
    msg.turb_lim = 0.36093003575083715;
    msg.custom.assign("LMLGGBPUQXJHZLLMGIMVFLNCEJIDPVZOAEMLPAAHSQUZBGMWNOWFKYJSPTRSQHSLKXUHBRCODVGPAPFFZWTEPEAWOJVNDEDKHBQEDMTAHOWOZNMZTMNYXHQSRRK");

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
    msg.setTimeStamp(0.44540414821548646);
    msg.setSource(27402U);
    msg.setSourceEntity(120U);
    msg.setDestination(15717U);
    msg.setDestinationEntity(172U);
    msg.group_name.assign("LVQRSGTQKSDZILCQAEWKZZHGUYLGHMASQQEOMJYIYRHUVUGWGDAPBRUBMVSDSEDFNWGCVIJFFOHSZWWXPBTINIFKTXDNFTVWJWJTAHXDBMOUJHOWJUVAKQFHYQPMNXKXFVGPDOJOEMDLCFFOQGLIAJRETPHCBJRCLNVLYEGVNDBPPYYBALXKZMNMISPAGUOFCUHKCMZETOBRWIXYZTSCAL");
    msg.formation_name.assign("QEPXWUHCAGNTPKVAIGMMWLWXOIXFHTQZJVZSJUMIYESRASDIUUOAJNBALRIVGQNPWFNNDPCWRWLQFDVYSOXGDXBGQBLKVJYPXOOKYVMKWIKYLQOVJBNEPTMGCCTLDRVXIDWMHXSNFSEDJYHKFTCKHHMGATEUWKRTXPVJCHNKDIQIRASAFTQBMZNUHTFCEOWBKSQRSBLBUCUEZYRMJRZBBNHLZDZTVGOSPUY");
    msg.plan_id.assign("KOHISWBVSRTKCRMXJBDMQFMACEHPRTQUNWEVZUYJWDGNPACUPDRLEVVFIWFZVAZIVAUXBJFEGQFYYIJTCOMJHXPRQMOJUENPXNBYGKMDQSRUPXLLGTVHFGBIKYEKNVZKTBEUAZAZRQTPIMJFXSWPBJOBKGUCZSRI");
    msg.description.assign("IFEDEPKUCKXMHMMEADBFAJBLRPBBLEPURFRGRF");
    msg.leader_speed = 0.384762411133186;
    msg.leader_bank_lim = 0.06661483130110579;
    msg.pos_sim_err_lim = 0.7720591927139421;
    msg.pos_sim_err_wrn = 0.9545326744061926;
    msg.pos_sim_err_timeout = 14394U;
    msg.converg_max = 0.3077976330598937;
    msg.converg_timeout = 41741U;
    msg.comms_timeout = 36957U;
    msg.turb_lim = 0.5592705502528189;
    msg.custom.assign("IRQOSEBEBCCUHQWACPUKDTFRBWVOONNGVWWWKVFMLH");

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
    msg.setTimeStamp(0.1479074402983216);
    msg.setSource(55185U);
    msg.setSourceEntity(149U);
    msg.setDestination(16965U);
    msg.setDestinationEntity(172U);
    msg.group_name.assign("QPXSQVGYRQBZRELCOIJLWAUNOZRUMFMWSWFDEBFVYILIBCMBKOVNRNEIOKZHKIXMYYQHJETRJWXBXLIAODVPJJLDOKIXNQHPYMZPHQEOXRWUDZTZAAYAIZTFWQHWETEHNATHDBSADECCVFHPHVXPTWJPSFULKRIMYTNADPUUKGXYYSBSGOICCTMWCLFJUGBMKNSDDLCNPGGUFGPESVZMQGKSNVMRXFJSVBVUOTEJBKJQAXFYHGNCLGARDQTZKU");
    msg.formation_name.assign("YWWHVXBBPROPONAVYMCYNLDQESZXKZGJ");
    msg.plan_id.assign("CHWJMDTNLXWXDYDBCXFSBEQVHFMYRNLKOHQZMXCZAYOLTVKIOSZEIQCTFSBDFLSXHOUPIPTIWCFMUVCRVNCRYTFLLEYYTQUMDCJOUOVBSAZKOWFJNJABWESZ");
    msg.description.assign("MVQNGBDXEXFHVEYJIBDTSYJVQCKUPDYMZVZNHBOEUKCTPCUGHHCCLYSWGEJXUUFQWSXKGATCCZVWCLNXMRGKZPVRXNLOBJWDNPJJEAIAQKKHMIXWODF");
    msg.leader_speed = 0.9764912384503378;
    msg.leader_bank_lim = 0.7455493996135331;
    msg.pos_sim_err_lim = 0.25465854929499554;
    msg.pos_sim_err_wrn = 0.8574261655580989;
    msg.pos_sim_err_timeout = 49031U;
    msg.converg_max = 0.18865747618479067;
    msg.converg_timeout = 46883U;
    msg.comms_timeout = 36896U;
    msg.turb_lim = 0.212823360395344;
    msg.custom.assign("KBZEIHKDQKWZCWPXTLVWGKXGSWDOZUBIHCMYLIHQIROJTLPVIQWPXUAUGKJGNQEMZLHBNKPFTDQZSSJAEZQUHSKVSSEYFRBHGUKYALMJMPCFZDRNFDGQABYEAGVOZS");

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
    msg.setTimeStamp(0.22859320675243333);
    msg.setSource(58650U);
    msg.setSourceEntity(10U);
    msg.setDestination(1640U);
    msg.setDestinationEntity(9U);
    msg.control_src = 50523U;
    msg.control_ent = 240U;
    msg.timeout = 0.3184662358234933;
    msg.loiter_radius = 0.8386899069897849;
    msg.altitude_interval = 0.8239992555834084;

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
    msg.setTimeStamp(0.7154418210332615);
    msg.setSource(12052U);
    msg.setSourceEntity(104U);
    msg.setDestination(31943U);
    msg.setDestinationEntity(65U);
    msg.control_src = 29164U;
    msg.control_ent = 199U;
    msg.timeout = 0.0993298627713145;
    msg.loiter_radius = 0.589791844513983;
    msg.altitude_interval = 0.7469314175326167;

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
    msg.setTimeStamp(0.6170449841910453);
    msg.setSource(55679U);
    msg.setSourceEntity(69U);
    msg.setDestination(1838U);
    msg.setDestinationEntity(121U);
    msg.control_src = 30110U;
    msg.control_ent = 43U;
    msg.timeout = 0.5556728416301495;
    msg.loiter_radius = 0.06615412757784978;
    msg.altitude_interval = 0.24481398161606027;

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
    msg.setTimeStamp(0.17106829583355831);
    msg.setSource(45681U);
    msg.setSourceEntity(2U);
    msg.setDestination(28903U);
    msg.setDestinationEntity(89U);
    msg.flags = 103U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3797467522321162;
    tmp_msg_0.speed_units = 134U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.11263212473455264;
    tmp_msg_1.z_units = 120U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3122525087711724;
    msg.lon = 0.982839420369139;
    msg.radius = 0.7898653576241119;

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
    msg.setTimeStamp(0.7786032311142055);
    msg.setSource(29737U);
    msg.setSourceEntity(83U);
    msg.setDestination(13432U);
    msg.setDestinationEntity(185U);
    msg.flags = 145U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.07469288399369312;
    tmp_msg_0.speed_units = 144U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3539997486081736;
    tmp_msg_1.z_units = 98U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.07069248987963694;
    msg.lon = 0.5832928201259796;
    msg.radius = 0.7495767150640619;

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
    msg.setTimeStamp(0.8610423092884951);
    msg.setSource(19371U);
    msg.setSourceEntity(234U);
    msg.setDestination(41519U);
    msg.setDestinationEntity(7U);
    msg.flags = 211U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8901636481393463;
    tmp_msg_0.speed_units = 66U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5367168498786093;
    tmp_msg_1.z_units = 226U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2271327713010145;
    msg.lon = 0.8257641879987478;
    msg.radius = 0.4862194477332775;

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
    msg.setTimeStamp(0.08407926745710248);
    msg.setSource(43563U);
    msg.setSourceEntity(238U);
    msg.setDestination(44108U);
    msg.setDestinationEntity(181U);
    msg.control_src = 8161U;
    msg.control_ent = 43U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 102U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5177913407870416;
    tmp_tmp_msg_0_0.speed_units = 117U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.03274435000909559;
    tmp_tmp_msg_0_1.z_units = 33U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5268680187308188;
    tmp_msg_0.lon = 0.9507790010159693;
    tmp_msg_0.radius = 0.3717273324345298;
    msg.reference.set(tmp_msg_0);
    msg.state = 78U;
    msg.proximity = 145U;

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
    msg.setTimeStamp(0.4423181094405656);
    msg.setSource(54371U);
    msg.setSourceEntity(198U);
    msg.setDestination(27080U);
    msg.setDestinationEntity(83U);
    msg.control_src = 20606U;
    msg.control_ent = 205U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 121U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5910196634425539;
    tmp_tmp_msg_0_0.speed_units = 248U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2511083903637117;
    tmp_tmp_msg_0_1.z_units = 177U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.26308981732843006;
    tmp_msg_0.lon = 0.5289410510066235;
    tmp_msg_0.radius = 0.20430006772104037;
    msg.reference.set(tmp_msg_0);
    msg.state = 168U;
    msg.proximity = 31U;

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
    msg.setTimeStamp(0.9872266117477546);
    msg.setSource(3634U);
    msg.setSourceEntity(143U);
    msg.setDestination(44059U);
    msg.setDestinationEntity(34U);
    msg.control_src = 53675U;
    msg.control_ent = 173U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 241U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.18723919519001664;
    tmp_tmp_msg_0_0.speed_units = 162U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6255799921467665;
    tmp_tmp_msg_0_1.z_units = 17U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.43265736397027765;
    tmp_msg_0.lon = 0.9161884550654077;
    tmp_msg_0.radius = 0.46687357553863595;
    msg.reference.set(tmp_msg_0);
    msg.state = 171U;
    msg.proximity = 246U;

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
    msg.setTimeStamp(0.3481111690943648);
    msg.setSource(14140U);
    msg.setSourceEntity(198U);
    msg.setDestination(24146U);
    msg.setDestinationEntity(96U);
    msg.ax_cmd = 0.7394769709814704;
    msg.ay_cmd = 0.8046711909499253;
    msg.az_cmd = 0.8929532817298157;
    msg.ax_des = 0.33262628712703934;
    msg.ay_des = 0.36339465440970564;
    msg.az_des = 0.3592032059879332;
    msg.virt_err_x = 0.4714633493605632;
    msg.virt_err_y = 0.5240254895391981;
    msg.virt_err_z = 0.7948096181408646;
    msg.surf_fdbk_x = 0.49964803229080756;
    msg.surf_fdbk_y = 0.029315774614895984;
    msg.surf_fdbk_z = 0.47353101180092694;
    msg.surf_unkn_x = 0.013051613170961818;
    msg.surf_unkn_y = 0.21328031519120905;
    msg.surf_unkn_z = 0.5059112926645055;
    msg.ss_x = 0.1443464063822354;
    msg.ss_y = 0.3893232310147128;
    msg.ss_z = 0.1115737643503325;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("VUVSVLKLNUZCWWASSMEYBPFGHNJXHAGGLH");
    tmp_msg_0.dist = 0.27132150608713057;
    tmp_msg_0.err = 0.7812351023316779;
    tmp_msg_0.ctrl_imp = 0.22984868428460348;
    tmp_msg_0.rel_dir_x = 0.030449466920368318;
    tmp_msg_0.rel_dir_y = 0.8644258827910061;
    tmp_msg_0.rel_dir_z = 0.5875660921470188;
    tmp_msg_0.err_x = 0.22619320764541073;
    tmp_msg_0.err_y = 0.5816707983898243;
    tmp_msg_0.err_z = 0.25309294115677194;
    tmp_msg_0.rf_err_x = 0.5299196628982764;
    tmp_msg_0.rf_err_y = 0.4749746808354005;
    tmp_msg_0.rf_err_z = 0.4133443974892106;
    tmp_msg_0.rf_err_vx = 0.4611252868150434;
    tmp_msg_0.rf_err_vy = 0.34071630110952067;
    tmp_msg_0.rf_err_vz = 0.5565080512789903;
    tmp_msg_0.ss_x = 0.6207199864507028;
    tmp_msg_0.ss_y = 0.7433474986259592;
    tmp_msg_0.ss_z = 0.3826217657749229;
    tmp_msg_0.virt_err_x = 0.8101458584467847;
    tmp_msg_0.virt_err_y = 0.5152211540696603;
    tmp_msg_0.virt_err_z = 0.5316925031190757;
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
    msg.setTimeStamp(0.7803487221868494);
    msg.setSource(11422U);
    msg.setSourceEntity(33U);
    msg.setDestination(59814U);
    msg.setDestinationEntity(176U);
    msg.ax_cmd = 0.8106062358513964;
    msg.ay_cmd = 0.4985329556122645;
    msg.az_cmd = 0.8010052936802877;
    msg.ax_des = 0.4851071861138827;
    msg.ay_des = 0.933726399406433;
    msg.az_des = 0.8530450592414776;
    msg.virt_err_x = 0.8399874855777862;
    msg.virt_err_y = 0.8876508605439625;
    msg.virt_err_z = 0.33696729061148545;
    msg.surf_fdbk_x = 0.29499944238205034;
    msg.surf_fdbk_y = 0.126468827125511;
    msg.surf_fdbk_z = 0.7887425539771109;
    msg.surf_unkn_x = 0.0410172051611446;
    msg.surf_unkn_y = 0.8173922457439778;
    msg.surf_unkn_z = 0.5411288466764821;
    msg.ss_x = 0.5480075388570056;
    msg.ss_y = 0.8753416793434387;
    msg.ss_z = 0.5960100504874338;

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
    msg.setTimeStamp(0.9788326119829112);
    msg.setSource(40866U);
    msg.setSourceEntity(197U);
    msg.setDestination(63494U);
    msg.setDestinationEntity(226U);
    msg.ax_cmd = 0.8826494885312477;
    msg.ay_cmd = 0.31874132740580774;
    msg.az_cmd = 0.8514997242097826;
    msg.ax_des = 0.19961545087228982;
    msg.ay_des = 0.0856304701825148;
    msg.az_des = 0.901553791953312;
    msg.virt_err_x = 0.8966537691490277;
    msg.virt_err_y = 0.2629191213540706;
    msg.virt_err_z = 0.11049592467304947;
    msg.surf_fdbk_x = 0.302809813821572;
    msg.surf_fdbk_y = 0.7440638657530793;
    msg.surf_fdbk_z = 0.48271409820493205;
    msg.surf_unkn_x = 0.34143178375685646;
    msg.surf_unkn_y = 0.44928935595856534;
    msg.surf_unkn_z = 0.26016949733654937;
    msg.ss_x = 0.8370812827448132;
    msg.ss_y = 0.4659197402824403;
    msg.ss_z = 0.6541686193006359;

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
    msg.setTimeStamp(0.30352268940126725);
    msg.setSource(25428U);
    msg.setSourceEntity(71U);
    msg.setDestination(31512U);
    msg.setDestinationEntity(61U);
    msg.s_id.assign("DOOLWMKIRIHFNKCFJUEPTBKHWIJMNHBWRJCCGVYHXOECPFQYOGLSMCMTACDWFACSWGIGANORJTQQNXZDIKZAWBRHXXVKXWRFYDZYSSMVLUESPUAUE");
    msg.dist = 0.5038423443062274;
    msg.err = 0.7230211340432177;
    msg.ctrl_imp = 0.03316928422589471;
    msg.rel_dir_x = 0.6656089229206658;
    msg.rel_dir_y = 0.6589745013359155;
    msg.rel_dir_z = 0.7936070001014187;
    msg.err_x = 0.5544936498938303;
    msg.err_y = 0.5488217356062604;
    msg.err_z = 0.41725828578459345;
    msg.rf_err_x = 0.32883626242986097;
    msg.rf_err_y = 0.018487833525248076;
    msg.rf_err_z = 0.7822577629698133;
    msg.rf_err_vx = 0.5952505604193953;
    msg.rf_err_vy = 0.11085747949519664;
    msg.rf_err_vz = 0.01635914770303759;
    msg.ss_x = 0.28186298577196256;
    msg.ss_y = 0.6177050877863901;
    msg.ss_z = 0.1577079461442482;
    msg.virt_err_x = 0.45624584142109115;
    msg.virt_err_y = 0.04155548524956787;
    msg.virt_err_z = 0.9474031635500992;

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
    msg.setTimeStamp(0.8514528067291696);
    msg.setSource(41745U);
    msg.setSourceEntity(33U);
    msg.setDestination(8255U);
    msg.setDestinationEntity(248U);
    msg.s_id.assign("PYSSHCKTABKEMKZQBRVKLGFGQLYBMITXYJXNJVQXQWFPOSVHFGTSUSWNOTPDRPHHVDZJNWBLZXIMFZJKYJCCTYVEGALAEOMFILGNIFTUTGUTRCRIXQOWECWUBSEUWJUJZNJGHMPFVAZRXADDNBHEOSROCOSNEXQBLVAKYAUZWOVWRBIGHJXZNQZDGOCDPHSIKEXCG");
    msg.dist = 0.2280478830705852;
    msg.err = 0.9068152520694891;
    msg.ctrl_imp = 0.7065072137859056;
    msg.rel_dir_x = 0.3043378440578335;
    msg.rel_dir_y = 0.9153920517317004;
    msg.rel_dir_z = 0.3238293496793734;
    msg.err_x = 0.3327557338724997;
    msg.err_y = 0.36798489163015724;
    msg.err_z = 0.9572494618678956;
    msg.rf_err_x = 0.4459650384242547;
    msg.rf_err_y = 0.7105865628702837;
    msg.rf_err_z = 0.9212279161614383;
    msg.rf_err_vx = 0.2708464329693041;
    msg.rf_err_vy = 0.03971131218310897;
    msg.rf_err_vz = 0.7134716092375546;
    msg.ss_x = 0.3898575012122102;
    msg.ss_y = 0.05143036499929077;
    msg.ss_z = 0.11241538304097642;
    msg.virt_err_x = 0.4863044843302621;
    msg.virt_err_y = 0.08616893960485794;
    msg.virt_err_z = 0.3831495674843587;

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
    msg.setTimeStamp(0.10937273619483145);
    msg.setSource(51378U);
    msg.setSourceEntity(84U);
    msg.setDestination(12179U);
    msg.setDestinationEntity(75U);
    msg.s_id.assign("GCMKZGAQUUMSQRCGDGIMXENGVXGNYIIPWYZNA");
    msg.dist = 0.8618398722920947;
    msg.err = 0.7020646813452125;
    msg.ctrl_imp = 0.3286101953123598;
    msg.rel_dir_x = 0.717454865033508;
    msg.rel_dir_y = 0.5972575231311955;
    msg.rel_dir_z = 0.6726776406023884;
    msg.err_x = 0.3070300599440189;
    msg.err_y = 0.026815512354389948;
    msg.err_z = 0.17905562693541688;
    msg.rf_err_x = 0.8850296825387071;
    msg.rf_err_y = 0.10333176311754833;
    msg.rf_err_z = 0.09974599063186895;
    msg.rf_err_vx = 0.2386227443828146;
    msg.rf_err_vy = 0.3043979548998863;
    msg.rf_err_vz = 0.8999617458173907;
    msg.ss_x = 0.2732191320181533;
    msg.ss_y = 0.24521290732193213;
    msg.ss_z = 0.19974650960281348;
    msg.virt_err_x = 0.9024260676540575;
    msg.virt_err_y = 0.7977577090581905;
    msg.virt_err_z = 0.7786033746030844;

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
    msg.setTimeStamp(0.3408956451719498);
    msg.setSource(62221U);
    msg.setSourceEntity(28U);
    msg.setDestination(49155U);
    msg.setDestinationEntity(23U);
    msg.timeout = 48146U;
    msg.rpm = 0.16303771847986437;
    msg.direction = 243U;
    msg.custom.assign("SBAAJREBGPGEZRBHBZCJCTJMFOWFGCHERMJIQVFMMPIIEWPEVNSJQHLLQTOCSDCPSIGASCSXDLUNYETIFOKNKVUYXGMGSGKKTIXXXZBAQPUKTOXWXRKXHPBYVLBJNTLAWLZVHXZUAEMSTUFHHWZRCVFOANRJCQFNVFUCQRDWYDADYORYQI");

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
    msg.setTimeStamp(0.8071056029109486);
    msg.setSource(27266U);
    msg.setSourceEntity(13U);
    msg.setDestination(62192U);
    msg.setDestinationEntity(251U);
    msg.timeout = 28576U;
    msg.rpm = 0.33169383137128905;
    msg.direction = 156U;
    msg.custom.assign("NGETKBEFUVYJRFZFHZWVCMDIETSAJDPUCSKMEFQQXCIXAYIHFRQZENHBYKBUGRABPN");

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
    msg.setTimeStamp(0.5482955958020295);
    msg.setSource(14604U);
    msg.setSourceEntity(54U);
    msg.setDestination(16829U);
    msg.setDestinationEntity(16U);
    msg.timeout = 17489U;
    msg.rpm = 0.8229936080237046;
    msg.direction = 254U;
    msg.custom.assign("BJCNZLIXMXWOUHPEHNYNRQSM");

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
    msg.setTimeStamp(0.9107450465189119);
    msg.setSource(12274U);
    msg.setSourceEntity(186U);
    msg.setDestination(46977U);
    msg.setDestinationEntity(204U);
    msg.formation_name.assign("PNYDUPJHJVSWMPUMEBQGTXSJKSXSKGQVAPUZERGVBZFCHYWVZWGJGSAWSHLTDVVQCWMFUWCTEKLENODLMGQNOOFDILNAZZTJXDMDCUYKZTDARGQ");
    msg.type = 238U;
    msg.op = 223U;
    msg.group_name.assign("HRZGFWCXQZOT");
    msg.plan_id.assign("COLUYCQHAAJWBHMGXMBBHGFSVPRIQSBJPRI");
    msg.description.assign("WXDXHWJGYWYSEKNZQZRSKVHZNDICWDGZGDHUKD");
    msg.reference_frame = 181U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32058U;
    tmp_msg_0.off_x = 0.8052977612904212;
    tmp_msg_0.off_y = 0.9715690405103957;
    tmp_msg_0.off_z = 0.5143143072815992;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.11743262569027246;
    msg.leader_speed_min = 0.24215440416957212;
    msg.leader_speed_max = 0.3820460807748526;
    msg.leader_alt_min = 0.3093190536754683;
    msg.leader_alt_max = 0.3316043506274008;
    msg.pos_sim_err_lim = 0.49199690340006375;
    msg.pos_sim_err_wrn = 0.6332137127547217;
    msg.pos_sim_err_timeout = 47941U;
    msg.converg_max = 0.9479355874062126;
    msg.converg_timeout = 6397U;
    msg.comms_timeout = 13252U;
    msg.turb_lim = 0.3580260524545462;
    msg.custom.assign("KRNWELJKMRAWJSZCLWMZVQQZAKSAFLVZVKOPKCVVTUXPPCDRVQMQZOBIJCNZKQESGYANAPWPTFTOHBSSDXTOFVXDRXJXNJADAPEIMEBGJCMXFYHFYBCKJCOCWARTUFHGBBWSPXHLETNNAOHDLQEWVLBZIMGYWY");

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
    msg.setTimeStamp(0.30889490314302404);
    msg.setSource(49736U);
    msg.setSourceEntity(132U);
    msg.setDestination(47476U);
    msg.setDestinationEntity(241U);
    msg.formation_name.assign("WZWBWSUANORTLEOJUZICYFXGJYLCABOIKBBVXLIVCXQPRENRATLVFREFJUDRIKR");
    msg.type = 238U;
    msg.op = 154U;
    msg.group_name.assign("PDBCQLCAKVSXSIXKKFQXYOINJSMUBXOGCAOGGHWDZZZPFKWUECSXTMPCDZWUJSITHFUHQZHOARTCMHDZQOOIKJGFYLXNMTNIEWJCEGPRBICGNQTJKEKJLORJTORNBNLPUDADKHVEUENGMGIVXGFWKMABDVNCXYBQMPNTHSBWOZBXPLVWEEVEPVADEFJPTWOLAQURAWDYBWLRSRH");
    msg.plan_id.assign("JHGGADDZRXJGDMBRHXCDTGNGKNYZBVSVUGRCABHGPKIHXPLFIJGCYQCOMIOZYSINJZXMVETUUDQORWVKBMLKIEAALVCSLBVSHMMPUS");
    msg.description.assign("XSWSPVHRYWLRJJMPAONYLNPWOZOLRJGRKHDZUOFUGNMNCJUGHRXYSKSPCQIWJQACIEVBTLFGRIMDHZXVAH");
    msg.reference_frame = 183U;
    msg.leader_bank_lim = 0.004106734954289926;
    msg.leader_speed_min = 0.6551142639377724;
    msg.leader_speed_max = 0.22849074955393645;
    msg.leader_alt_min = 0.39911210190291047;
    msg.leader_alt_max = 0.7277235994949093;
    msg.pos_sim_err_lim = 0.38022478126023185;
    msg.pos_sim_err_wrn = 0.9386864992668212;
    msg.pos_sim_err_timeout = 28600U;
    msg.converg_max = 0.713653781938874;
    msg.converg_timeout = 26767U;
    msg.comms_timeout = 20018U;
    msg.turb_lim = 0.539532493795948;
    msg.custom.assign("YJSWRQJYWXWHLXLMCHIPOAAFBMQCOKBJGGCAIDMNKVHVFGPOQFLJYKDNXTYVEPW");

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
    msg.setTimeStamp(0.25376080102403764);
    msg.setSource(25240U);
    msg.setSourceEntity(241U);
    msg.setDestination(33894U);
    msg.setDestinationEntity(229U);
    msg.formation_name.assign("NAUJYZCFIVPOTRHFPQCJLNVUKBYZGYSIUCQNSYMLFQSNPXLRHPXGBWDJTJUIYFFLJBYSUUMLNQBMSMEXTBRYOAXWITTBWVYEECTQRQVDIKLZRKZYOHWMDKZILWENHCAZSWGBLKUUTJEFUBIVMXPYGTRRHFABESOPAMZIZCVAOPFKTAREHKZAGNXCSVQDRCOWIVOKWNMLCVJLHGXAAXNDFQMGKGHNCT");
    msg.type = 104U;
    msg.op = 90U;
    msg.group_name.assign("RFXBBMXTQJMUXUKROJWERVMTAORUHXSPUBUAPHGNGUVJWLQEZSAPTNKDBJHNFPTYGMOSVCDEYQBWWEKTNPFUKPGOQHSBIWUISZFXSJYOVYSKTQDIFC");
    msg.plan_id.assign("BNODKMMNSJRTQZLACHMKKSFRTYLUOHIJTLPWZWMTSGSEBJTVYFAGHFJRDWSLZVPQKMXCBZIVIHBDUWLFDDADQCUJQLLMQTTUTHAOGIVWWCWSPRBYZNYYOGCIBMPPYUHMCSIQYPKORVWRFXEIAGVLVVQHJFETXHREFNYRVDJEQZKGC");
    msg.description.assign("GIIKPVNVNOFIKPJJSAXNMBDPABMXWOIXFYSEHDNVUZTULKFYPASSLIEDZFRQFEKVIXDLMMLQVPCPRQCLLWTHGBVCMOTVBKNUTBUHYHSBXDCWAQTJACLGZMYLZQKZBNDSLYSJHSOIUELZYTYZODFUOHSWDKXAUCFHIRRAKKMBGHHHOAQNWGOVMCTVGVGQAXFEYEBUCCJNGARJWSXYFUCWJZPYGZERTWDPUQKMNGIZRTOENXRFDJRJMTQQJRXEWP");
    msg.reference_frame = 145U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25409U;
    tmp_msg_0.off_x = 0.9141373439809193;
    tmp_msg_0.off_y = 0.913599994618357;
    tmp_msg_0.off_z = 0.4257978891633667;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.48368251924848193;
    msg.leader_speed_min = 0.9734599540103407;
    msg.leader_speed_max = 0.17335787932850166;
    msg.leader_alt_min = 0.43644565273921565;
    msg.leader_alt_max = 0.4457207971084175;
    msg.pos_sim_err_lim = 0.03360743780410291;
    msg.pos_sim_err_wrn = 0.28597897413443585;
    msg.pos_sim_err_timeout = 64572U;
    msg.converg_max = 0.03189168426272171;
    msg.converg_timeout = 32791U;
    msg.comms_timeout = 44125U;
    msg.turb_lim = 0.16032522516170056;
    msg.custom.assign("ZCDXSSAENIAIPYIRPFIBURCVYLAHMNLTFRIPOEFHDBENGUTCYMUMUZXJLWLVWUDACJLMQGKCNKUMHUJKZGLXXKLSZWXRATOZTFDVKDFCAWMYUHTQBOPVWNOYGHBQBYGDRNMIHJSELKMQJXQABMQFQISDAPGNTCTDHSQTGIJBPMUEVHVCLRBENYAWJOXD");

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
    msg.setTimeStamp(0.49262448108891865);
    msg.setSource(35545U);
    msg.setSourceEntity(243U);
    msg.setDestination(2697U);
    msg.setDestinationEntity(34U);
    msg.timeout = 4594U;
    msg.lat = 0.6880964735432336;
    msg.lon = 0.058649116683692215;
    msg.z = 0.5242045780995285;
    msg.z_units = 129U;
    msg.speed = 0.9726651934964359;
    msg.speed_units = 86U;
    msg.custom.assign("SZSAODEIXBARLMKPWMMZMVHUDWXCOSMLTFNEPTNUZIWRUNLLUXJXGKRSHHUEQQOLWEHEDBGFLCQFARKJVJHMOJNSIIUPIBLGGWYFKZZAH");

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
    msg.setTimeStamp(0.8526002406128597);
    msg.setSource(57524U);
    msg.setSourceEntity(67U);
    msg.setDestination(44200U);
    msg.setDestinationEntity(222U);
    msg.timeout = 39998U;
    msg.lat = 0.9586259628844745;
    msg.lon = 0.3124456959317681;
    msg.z = 0.9814239793862644;
    msg.z_units = 183U;
    msg.speed = 0.9014379494282908;
    msg.speed_units = 155U;
    msg.custom.assign("QLEYUKCAJNAIUZYDGNYSTKLFNSNJDVMCEIZUGLGMESGOBVTPDCZKCVYNBAIRDNYGCPIBJNKHGFOLMYWZAJPHVZZEWNXALWMEFOBIXFYWHOYSGJUXKRZWPAFHOLMLURPOKJOSFJPDSGYTBHFTWBRUTTEVWQHQNVIRSYKHUOURGAMEMZ");

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
    msg.setTimeStamp(0.9173138540928703);
    msg.setSource(65323U);
    msg.setSourceEntity(55U);
    msg.setDestination(20310U);
    msg.setDestinationEntity(19U);
    msg.timeout = 59924U;
    msg.lat = 0.5867549269007986;
    msg.lon = 0.5866737949870738;
    msg.z = 0.503527615078568;
    msg.z_units = 10U;
    msg.speed = 0.8749650530963685;
    msg.speed_units = 153U;
    msg.custom.assign("KTXLHKWKXYBQKPECOWYRPAGHORUWDVTIIQQQBIKELAMZVROQFALSMWSTZDPKFBZRPPEVSQDBAJJSJDZOHHCVFWXFCTLWN");

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
    msg.setTimeStamp(0.08257113942739913);
    msg.setSource(5070U);
    msg.setSourceEntity(131U);
    msg.setDestination(16024U);
    msg.setDestinationEntity(150U);
    msg.timeout = 56424U;
    msg.lat = 0.04647466100345188;
    msg.lon = 0.9564899950708404;
    msg.z = 0.6499134034763018;
    msg.z_units = 63U;
    msg.speed = 0.6563694609393059;
    msg.speed_units = 85U;
    msg.custom.assign("EBZZGZPTCAYNXTMPVQGUHMNSDAFPGMQEWZIHBKEMQGVETDTIXOUBQAIGRJQOWSJFHKDJUOTZMOWECDAXIMDHAKGOLBWUYURSBFVXUO");

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
    msg.setTimeStamp(0.9894003474019932);
    msg.setSource(43943U);
    msg.setSourceEntity(98U);
    msg.setDestination(43573U);
    msg.setDestinationEntity(107U);
    msg.timeout = 16552U;
    msg.lat = 0.3924905917580295;
    msg.lon = 0.981461014496175;
    msg.z = 0.9834770776660974;
    msg.z_units = 159U;
    msg.speed = 0.659563434702703;
    msg.speed_units = 67U;
    msg.custom.assign("UPJMMURDTGFZKQABZRJWNMAEPNASBQTWKIQVPPNHWNEYJZYCCYRZGFXDLYOYTFLABZNOGAAKVBUSCIXUQPILGSOIPFLDOKHDEQAAEHAHYMKBDIWWWFNJLEWUGVIOWGNAOQVMUTQRYMWMNZQSWBYVIVKIMDGJGCRYHGLTKEFXHDMLTTBZUFODOFPRCTNCLURHDJQRJVCRPQXFBCFXCLYEVJSJS");

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
    msg.setTimeStamp(0.20497666426396743);
    msg.setSource(7860U);
    msg.setSourceEntity(89U);
    msg.setDestination(40379U);
    msg.setDestinationEntity(19U);
    msg.timeout = 36285U;
    msg.lat = 0.38241658276740176;
    msg.lon = 0.9150222771563287;
    msg.z = 0.4600029115540555;
    msg.z_units = 134U;
    msg.speed = 0.31950173607332677;
    msg.speed_units = 101U;
    msg.custom.assign("GZUHIBARWIZBBMWCEHJFQOXCATDCMBYELUAJGAHRWEDLIWVCEYDOPNHHSVTOFFEYVRCLFTOYBEAIMYLMSHCSFSXPKTMFHVUTJDZXCVNCQKGDDXKKVKKXNBLGVNIQKJYQEWFQADTGGZZITULKSMRGNCYZGWSQJRLPGWJJKMIJPAXENSNQXPXAZUXBLOTHOFPLTHJSNF");

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
    msg.setTimeStamp(0.08029493194418524);
    msg.setSource(22693U);
    msg.setSourceEntity(97U);
    msg.setDestination(23409U);
    msg.setDestinationEntity(117U);
    msg.arrival_time = 0.2020069045026709;
    msg.lat = 0.9552831504540688;
    msg.lon = 0.7334688229374248;
    msg.z = 0.11393618466520483;
    msg.z_units = 242U;
    msg.travel_z = 0.35206602887086436;
    msg.travel_z_units = 40U;
    msg.delayed = 90U;

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
    msg.setTimeStamp(0.09977744553802703);
    msg.setSource(4566U);
    msg.setSourceEntity(223U);
    msg.setDestination(33337U);
    msg.setDestinationEntity(101U);
    msg.arrival_time = 0.4327709793926765;
    msg.lat = 0.17318527941300843;
    msg.lon = 0.04385331745928378;
    msg.z = 0.2281239381439083;
    msg.z_units = 243U;
    msg.travel_z = 0.5496255846664916;
    msg.travel_z_units = 242U;
    msg.delayed = 141U;

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
    msg.setTimeStamp(0.21041027892975106);
    msg.setSource(42872U);
    msg.setSourceEntity(75U);
    msg.setDestination(24406U);
    msg.setDestinationEntity(120U);
    msg.arrival_time = 0.4501077482253282;
    msg.lat = 0.8175905785885986;
    msg.lon = 0.9712750654513505;
    msg.z = 0.36983314403290724;
    msg.z_units = 81U;
    msg.travel_z = 0.12089428174488115;
    msg.travel_z_units = 224U;
    msg.delayed = 234U;

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
    msg.setTimeStamp(0.00148402407192183);
    msg.setSource(39474U);
    msg.setSourceEntity(218U);
    msg.setDestination(45932U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.48620573817796786;
    msg.lon = 0.061463825000850125;
    msg.z = 0.10590232080806805;
    msg.z_units = 136U;
    msg.speed = 0.24422049739516594;
    msg.speed_units = 159U;
    msg.bearing = 0.142921548166976;
    msg.cross_angle = 0.6342177822811785;
    msg.width = 0.7919951503026573;
    msg.length = 0.7349728049615328;
    msg.coff = 202U;
    msg.angaperture = 0.8976954072492714;
    msg.range = 28566U;
    msg.overlap = 30U;
    msg.flags = 92U;
    msg.custom.assign("AEXREGWHBLHUIANSMYLKDGQJCOQMVJDAAUNCCEGZDYSCPGNSLBSYDXUDIIOXELOKNZFWBVTFQTMUWOHTFTLFRKEDPBKUZIVUJJTENQVMZYORUFITOHBANVLHZEPKITBPGQSJYACHCUVKOCRSPWYZYWBKQJWGDMGXAZMCYNXHEFAEXBVMNZKZISSWUTLFBOCAPPQYQTFTLGFXOKYOQZMVPJGXRIRHFPEM");

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
    msg.setTimeStamp(0.2430541056843858);
    msg.setSource(45853U);
    msg.setSourceEntity(200U);
    msg.setDestination(52120U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.0928072130911789;
    msg.lon = 0.03812273133898458;
    msg.z = 0.6201842065779171;
    msg.z_units = 61U;
    msg.speed = 0.5961911432796629;
    msg.speed_units = 46U;
    msg.bearing = 0.13118600909911526;
    msg.cross_angle = 0.07820307163393203;
    msg.width = 0.8277810951630283;
    msg.length = 0.6423925639028059;
    msg.coff = 172U;
    msg.angaperture = 0.294293541228126;
    msg.range = 53463U;
    msg.overlap = 248U;
    msg.flags = 236U;
    msg.custom.assign("XBZNRXYQMZKPDTYYCNWOVBMUTPBNHQOUF");

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
    msg.setTimeStamp(0.41392415215945877);
    msg.setSource(12916U);
    msg.setSourceEntity(24U);
    msg.setDestination(1923U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.7513666263150097;
    msg.lon = 0.34531615381514846;
    msg.z = 0.6107682544129123;
    msg.z_units = 243U;
    msg.speed = 0.3308377493215877;
    msg.speed_units = 211U;
    msg.bearing = 0.5136756778295547;
    msg.cross_angle = 0.8142196800209369;
    msg.width = 0.7785647356721068;
    msg.length = 0.8649093773216913;
    msg.coff = 68U;
    msg.angaperture = 0.21499393328716587;
    msg.range = 40425U;
    msg.overlap = 45U;
    msg.flags = 137U;
    msg.custom.assign("KJGMKXZVZNFNYYFLMCVOAFLKNMWFLUGHIBLPEEXKBTQPKCHVNSIOADYMHRIUCFQCXDHSMWGVWCFJNUVTCYEETJGRWHJWCJMSZISNKUYVRTRPLRMZEWEBQADZOPSVKCAQRTNDVARGBMASBAYQGJNPQTZREONXAJODLZBQODLIIABJWHLPVFKHFXYXQIHRSGLPDZSXUUBOOGWSDAKGYYXYZOLJKFXNPPPMTZSDJWDIMFVEOBUWRUEGHIITT");

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
    msg.setTimeStamp(0.9690658481798997);
    msg.setSource(18398U);
    msg.setSourceEntity(249U);
    msg.setDestination(46056U);
    msg.setDestinationEntity(47U);
    msg.timeout = 356U;
    msg.lat = 0.2933395055561471;
    msg.lon = 0.9705415018231095;
    msg.z = 0.33437498695173695;
    msg.z_units = 70U;
    msg.speed = 0.131201929331487;
    msg.speed_units = 119U;
    msg.syringe0 = 241U;
    msg.syringe1 = 120U;
    msg.syringe2 = 221U;
    msg.custom.assign("KYLQKTTHJMTHBVCUGELSIFAAWPOEYNAKJPKYTJDQVIDTOXMXXGDRWUWRPJYPSEURDTFKCDMTWJPNFMKZSVWGBMITHKNQZAEXFSLNRHSQXLBCNPNZMRLVMRJCUWHEAXILHXOLSDOQJEGEOGAABYQCBRSTDPPHXXUOBVEVCODJFUWLOJWNPCVZKAUGLLYUFBDCSRUVROFFOYFQZJF");

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
    msg.setTimeStamp(0.7994019649136406);
    msg.setSource(47303U);
    msg.setSourceEntity(28U);
    msg.setDestination(34184U);
    msg.setDestinationEntity(5U);
    msg.timeout = 32483U;
    msg.lat = 0.6930220192352836;
    msg.lon = 0.5805710869720906;
    msg.z = 0.9798837764920829;
    msg.z_units = 10U;
    msg.speed = 0.09363704278453044;
    msg.speed_units = 102U;
    msg.syringe0 = 93U;
    msg.syringe1 = 96U;
    msg.syringe2 = 128U;
    msg.custom.assign("YHJGMVUVVLQYBRDXPQMNACTAJOJOISHKCFWEKCWLLNZRPWJINXESSDHELKUFJOHUXPMIXOLBEOBBKPPMMNTFMNAYUKVSDCUGFDGLFCRDCQVEPIHZPWNDBQEXRBAGDZRCCWYXLHIAEKNVAMUWQZQYTMXLCONHTTQZUZBVMDOASDGGIOAHELUKRPGRCQZEPWY");

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
    msg.setTimeStamp(0.766651804984362);
    msg.setSource(53370U);
    msg.setSourceEntity(190U);
    msg.setDestination(48829U);
    msg.setDestinationEntity(44U);
    msg.timeout = 60025U;
    msg.lat = 0.02853836005402377;
    msg.lon = 0.09542806473339582;
    msg.z = 0.2669288203143031;
    msg.z_units = 98U;
    msg.speed = 0.27913841519440263;
    msg.speed_units = 235U;
    msg.syringe0 = 1U;
    msg.syringe1 = 76U;
    msg.syringe2 = 187U;
    msg.custom.assign("UKTWGVCWYPWD");

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
    msg.setTimeStamp(0.2222264890480128);
    msg.setSource(31134U);
    msg.setSourceEntity(197U);
    msg.setDestination(18391U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.9489908489330138);
    msg.setSource(45130U);
    msg.setSourceEntity(129U);
    msg.setDestination(40532U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.8011642470279645);
    msg.setSource(42671U);
    msg.setSourceEntity(229U);
    msg.setDestination(13728U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.8119565656322391);
    msg.setSource(22286U);
    msg.setSourceEntity(134U);
    msg.setDestination(7555U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.819915960362455;
    msg.lon = 0.7239860072875801;
    msg.z = 0.13425036305699878;
    msg.z_units = 172U;
    msg.speed = 0.039773628764780855;
    msg.speed_units = 4U;
    msg.takeoff_pitch = 0.13674381686022696;
    msg.custom.assign("OYTEQPMYYDPTVSWEUPAKJNRWDEKROQZYKIGFEYBBRZLGJRVWZEKWFRNNDAZILASVQJADCUZHCLQULQYZGHXSLGEHFCMUWRPGXYSNQUQABSFAIFVDBRJFYCDISMVBLOPLRIENIIIFULLHBOFKMRZZCOQKSQXPOJXWXTCCMZOKGKOSTIVVCOPWUBEJZJXFGCMRNHGWTLGSOUNPNGCXMVAJHDHAXN");

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
    msg.setTimeStamp(0.9554200018293744);
    msg.setSource(2060U);
    msg.setSourceEntity(253U);
    msg.setDestination(40880U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.6961880004405067;
    msg.lon = 0.3635698653148637;
    msg.z = 0.09383849686681645;
    msg.z_units = 93U;
    msg.speed = 0.771317561377676;
    msg.speed_units = 24U;
    msg.takeoff_pitch = 0.5340906029567736;
    msg.custom.assign("DWEYTMLNCHNKLIPBLAVJBFPRKEXXDELETPQJDFGTJAKOFOKWZKJDCIUICJUTQGCQTXMUQBJSOYIYQJHWDVESENCNQWYHTGMWKUGALVPOQSQCRIERHUFFHNUADGKPRZGFDXWTOEMNROVDBMOZLRHWYRJUELWXXVKBBMHFBVOISEVZOVHAUZBSMXWISMXCXLIDNNIAAYHPZXSTPDTYZYACNKFNZYO");

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
    msg.setTimeStamp(0.2345424468763263);
    msg.setSource(18192U);
    msg.setSourceEntity(243U);
    msg.setDestination(59911U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.44327931303350343;
    msg.lon = 0.027738203919186355;
    msg.z = 0.055704422145322785;
    msg.z_units = 156U;
    msg.speed = 0.3975365601327877;
    msg.speed_units = 178U;
    msg.takeoff_pitch = 0.18152156800099517;
    msg.custom.assign("OBGYNQLUGFOXMFGSBSNHCYGVMMZBVINPBUPULGQAWZXSHSBBWQVTIBJCENWSJQSMTEVXKNSFRJCFYPCONEAYYIOIPBJKHHLWDMCZDMJVJYNEEHC");

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
    msg.setTimeStamp(0.6004112808194444);
    msg.setSource(63209U);
    msg.setSourceEntity(132U);
    msg.setDestination(60414U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.2258177372759519;
    msg.lon = 0.9622963562202328;
    msg.z = 0.7394131912391798;
    msg.z_units = 191U;
    msg.speed = 0.007152225399496448;
    msg.speed_units = 11U;
    msg.abort_z = 0.4344392581821439;
    msg.bearing = 0.04228059442610088;
    msg.glide_slope = 197U;
    msg.glide_slope_alt = 0.8087209600054721;
    msg.custom.assign("HLIHCXNWUXTBZVYOHHFITBNWUOAABFLFQLRXVFUURYZKIYVUGJPLCCBUDRTTYJEQBUQMASFADNDSOEMLWRCDUIRQWYYEGXCPDFQPNRVEKQVIMSZGGOTPNVODGZSTHNTSBXDJQIUOSARLE");

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
    msg.setTimeStamp(0.2383633377528278);
    msg.setSource(40673U);
    msg.setSourceEntity(220U);
    msg.setDestination(15732U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.35618948491112556;
    msg.lon = 0.6151211180082019;
    msg.z = 0.37985581760478715;
    msg.z_units = 252U;
    msg.speed = 0.641727844728337;
    msg.speed_units = 24U;
    msg.abort_z = 0.6432670156332968;
    msg.bearing = 0.38759184598171115;
    msg.glide_slope = 195U;
    msg.glide_slope_alt = 0.11147082104992045;
    msg.custom.assign("LYKNZMOAAGPJVQQWRKVPSGHNKXOFWRWZFIWSHUXTOEVLWYEFWVWOECJQXPDITREDHHPFDAPRUCOZHTQEYCQQWGVKVFMDIRNJIZIXLHKCTMFBJQJTSVSJGJHOSLUPFJZVIGLBQDBAVCXKGXTERIUONJBTUDB");

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
    msg.setTimeStamp(0.3191915351531216);
    msg.setSource(58306U);
    msg.setSourceEntity(235U);
    msg.setDestination(38224U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.6635018480824653;
    msg.lon = 0.31899906771713726;
    msg.z = 0.027707981664027548;
    msg.z_units = 167U;
    msg.speed = 0.007591147297090539;
    msg.speed_units = 142U;
    msg.abort_z = 0.16409184529170107;
    msg.bearing = 0.8866203385085962;
    msg.glide_slope = 8U;
    msg.glide_slope_alt = 0.14678385499197377;
    msg.custom.assign("PLARUBNVPILMZNHTYTBMLXJRPNH");

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
    msg.setTimeStamp(0.6026926750672956);
    msg.setSource(57061U);
    msg.setSourceEntity(222U);
    msg.setDestination(26072U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.7348073579115563;
    msg.lon = 0.47106209987104186;
    msg.speed = 0.14165089486886429;
    msg.speed_units = 194U;
    msg.limits = 170U;
    msg.max_depth = 0.19422223942958305;
    msg.min_alt = 0.3212743409096581;
    msg.time_limit = 0.43154060302369956;
    msg.controller.assign("OWIEGZIZPLDIRKILQCWXVCQAPVSZKJRKUOSCEVGFZULGUBAMXGLTMBQZ");
    msg.custom.assign("EGAMOTTOVVEIHYUCQDEBDZVLBXSWOYUMMFEJRVXRPRARFZWXCTBIPHULTAKAGHOKSDEFPPUCHRWULQSYZABWIWLIWFRNQDELUMGYCGFQIXQEVZRJFTFYRNEJZWPGMOAICTLHRXIJNIJXUMCKMCSQKUOBJCSCZXCBSNDSYDURVQYLWHVHFVDPVPNPKDGDELULKMAIYBJXTKNHNQOKIMEYPTJFSWPNTWTQGQJABKOGBKZNANMYSHOJGZXVFSD");

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
    msg.setTimeStamp(0.22029359226850742);
    msg.setSource(45250U);
    msg.setSourceEntity(28U);
    msg.setDestination(33342U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.050802596014234536;
    msg.lon = 0.9091829849537412;
    msg.speed = 0.18083837428596428;
    msg.speed_units = 230U;
    msg.limits = 106U;
    msg.max_depth = 0.7995657989602767;
    msg.min_alt = 0.3144722065620451;
    msg.time_limit = 0.6680019793632562;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.38023711918123626;
    tmp_msg_0.lon = 0.7390800249848671;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("IQFEJRNVZIIAVPDCUXANBMSKCCWRQWGMSQPSMFKVZZEAZPONDRFJQGYQNPXOCLKSIBEZHRNLMRVGFCNTXJOIJDOOGBXPMCPZUTZTFDHHIWLWENDTTRKUKVQUOHOLNYZLBWTFSKYCWSNFIDDAHSGLVYGLKEMJQLJFZTXYJEMHYECTSSH");
    msg.custom.assign("XSRRLKQVAOUQNJWTYRVXITTEQNLSJTTUGPVXOAWBJDBVUKCEJOAVUFAYHSCEVKBDUPTEHFZLGWRDOKHLOLHHIYY");

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
    msg.setTimeStamp(0.4580720633805192);
    msg.setSource(28606U);
    msg.setSourceEntity(230U);
    msg.setDestination(23886U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.5779649185794361;
    msg.lon = 0.16828285022742895;
    msg.speed = 0.6766287406717902;
    msg.speed_units = 165U;
    msg.limits = 60U;
    msg.max_depth = 0.03517616271380497;
    msg.min_alt = 0.5961551676657509;
    msg.time_limit = 0.1343859765591785;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7886408684302607;
    tmp_msg_0.lon = 0.5108732074502035;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("FJGBEGJLGJTGNBANSAFMUIAUXMQBDPFFTRXQYJXDSWCOYSZIACEOWHWEGURICDXVVHZMWOZZNKNKPWWJEIBRCYPISSMQBTVQAQGUHLFCHKWTSRNFDYLIBXPRJLZANNMKPZVBQBLHVKRQCHSKEMBZFXXVTEMYUNIQMYCYIMPBTCPXOVDNWEPRDUTXAEAVCFYKQOLZKRLGMNFXHCDJPLOKIRHFEKWTASOADUUJLLUTHGJUVWOES");
    msg.custom.assign("AZQYBOMXNZFSBCYQAPMTBEUATSWSTLIBNEGXKRPCNCVCOGHSOITLFCEIIREHRLIDAMFYTUDGFGZSVNONLBMJVWOSKJKPFUPXNDUDUPZYFECAYKWNSLMXVXOOGIQWDGFTGZKOKZM");

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
    msg.setTimeStamp(0.8574366603874845);
    msg.setSource(31987U);
    msg.setSourceEntity(212U);
    msg.setDestination(42555U);
    msg.setDestinationEntity(25U);
    msg.target.assign("FWZCMBEFVQJAAWGYQFQDOMPZMFIHAKFKTJZDAUAXLGSCVIUAVEQWJRCXBEXWYYJDKYPKRROOMMYMXNZLCQLNLOGUJSBGXOBWPJCQGNZPGGPRNVFIXLEJSRUPPYUIOOTWBPRFALVVYVNVIODXJZIGNDHCWNSBIEEBHTKCQZXNTQYJTPAHLJL");
    msg.max_speed = 0.8749161065382347;
    msg.speed_units = 185U;
    msg.lat = 0.45349252395845174;
    msg.lon = 0.33196586794787486;
    msg.z = 0.7181731684195963;
    msg.z_units = 9U;
    msg.custom.assign("RAYGTFOEITPKDPETIKLLKUOGEGSGRVSGBZWWMUXFQDEZQKGGJXRFBQHKCLWYIIJOHCLWVLPABEPIXBOJVDCLXLQVJXTBVCQWROPSRXUNIPXRVKHMFRHFZFAYMNELFRQWDZRMCJPAUJOV");

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
    msg.setTimeStamp(0.6570168207001605);
    msg.setSource(16833U);
    msg.setSourceEntity(163U);
    msg.setDestination(9463U);
    msg.setDestinationEntity(186U);
    msg.target.assign("NIQMLGRISZIDYMIATYFYRVQDDMREWWLJHLUSXPNWVEEUYLYCISVWFTUQRNVTPNXKNYOPSUZCZWQSGHBINBVOAUQKGXJFBZJZPLNCKVTYCMCAFCYZFEVJHKMVOCOBFXKZTMFVEHKBBVYSONIEKGZUOTASMKKHTQEOONPXA");
    msg.max_speed = 0.0015370781301434766;
    msg.speed_units = 32U;
    msg.lat = 0.027714000220644075;
    msg.lon = 0.7071275483742078;
    msg.z = 0.4105715419183278;
    msg.z_units = 47U;
    msg.custom.assign("FHEYARNJGSDCCZUYGZAQKNLOATMJPECUWXQAEOEGNSLUDBBFTDXZGQZAFXKTBAGKFLPHOHVTYIYPAWMEULYCFSXLXUXFVOMNZKMZVKTPQOIWZAFIDNDRRDSWHNLHYYBWIOCEMWDXGIJQEFVJRPYWKSDLOWPCCTBKRJNDBHJRIJIWJUXYOTGUOTQSWCPONVMMIJTUGQHSZHVVGRERQUMSKBKYVBAHZTRKGMDBUCXPRBFSIIC");

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
    msg.setTimeStamp(0.7128146976881428);
    msg.setSource(26626U);
    msg.setSourceEntity(21U);
    msg.setDestination(25637U);
    msg.setDestinationEntity(114U);
    msg.target.assign("QSKUNXDWSGAZNFVWZHDHLUSNJWRRGJKAEXFZTIAVZJETOMCLWRZCLFDRSEBGQUGNFJYZNBWAQDBKGNMVBJXORMBTJINYIWPFKRHYAAKPTOVMSTLFPLDDWFUCLKOYMQMJUIMRBIXIQPUHPXTPSTLXXGQZQHRAI");
    msg.max_speed = 0.4329958648638669;
    msg.speed_units = 171U;
    msg.lat = 0.12455395377545309;
    msg.lon = 0.6346650623975584;
    msg.z = 0.9670006493045501;
    msg.z_units = 10U;
    msg.custom.assign("SETCTJSGXFOSETLQWIQPFUBUGLPFYNZADZUVPNEQKZSBCOWJLKYPHXMUEPCRJLUAIWIFHREGLDUOSA");

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
    msg.setTimeStamp(0.6367744758879782);
    msg.setSource(41868U);
    msg.setSourceEntity(62U);
    msg.setDestination(30804U);
    msg.setDestinationEntity(41U);
    msg.timeout = 15350U;
    msg.lat = 0.28356494499330986;
    msg.lon = 0.5100548515269483;
    msg.speed = 0.17640159255002874;
    msg.speed_units = 243U;
    msg.custom.assign("JRXMITTHMJWAFRJZRPTFDYWKZXQGGQYDVCMHFNJOZAQGNKEYAISACXFXUBJZHYIPVBNUMSFLTYULCIRVGEJMHNMPTSFZTEZASZBABXJOOWTBHNUDYPFRTPIEWMNKAVDQTSLWLKDOEBAIBZLWTBCSJUQYVCCFDWVSLWGLXSENODAQQUXQJVRQU");

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
    msg.setTimeStamp(0.9512454200500228);
    msg.setSource(53874U);
    msg.setSourceEntity(104U);
    msg.setDestination(33323U);
    msg.setDestinationEntity(193U);
    msg.timeout = 38066U;
    msg.lat = 0.8479866002718339;
    msg.lon = 0.765400104559518;
    msg.speed = 0.4450630520502178;
    msg.speed_units = 175U;
    msg.custom.assign("FYJPTHFNVGOTNCXZEFLBQLKGJNYYDQJRAGUSWYBLZLALOQFZWVFVMNHJPKXWPTQZFTCIVURRXEXIPFDDWGGDOQRSRIIEIKFIECCJVEUCFNDIBHURLXVPJHZNMUJMCOHYARMSLTPWIMWPUSDQHKNEBTZCFOSSRGCBEVJPMYPSVABHYDXIDYKOGQPQWHYZHNKGANKEZRXUUWCJTLUXBRQYLGQDESANXIMTKJSSMZGAKOVA");

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
    msg.setTimeStamp(0.3653692874280722);
    msg.setSource(54377U);
    msg.setSourceEntity(16U);
    msg.setDestination(64036U);
    msg.setDestinationEntity(153U);
    msg.timeout = 24126U;
    msg.lat = 0.8446807607819202;
    msg.lon = 0.7305440703363364;
    msg.speed = 0.028824042401659478;
    msg.speed_units = 120U;
    msg.custom.assign("CYSDXCSSHJPKLIODFGOCVONFTGPZVMPCIGLOANEEQUGUVMNXTCTSDOXYJTFNMMLKUACVGFWIHRAHVIRQUEB");

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
    msg.setTimeStamp(0.17103925896446082);
    msg.setSource(44489U);
    msg.setSourceEntity(39U);
    msg.setDestination(20995U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.7091580617810961;
    msg.lon = 0.7226587858324663;
    msg.z = 0.011614453972574879;
    msg.z_units = 20U;
    msg.radius = 0.16573741980981882;
    msg.duration = 25617U;
    msg.speed = 0.3142482994429129;
    msg.speed_units = 23U;
    msg.popup_period = 21019U;
    msg.popup_duration = 32477U;
    msg.flags = 49U;
    msg.custom.assign("PPOCYGKJWQMZZGCEQBHBRCCTZVJYJWMNEXLAJFDRTCTKFOAASBUWXCCQEEHORWZYOJQITPUUMIZFPVLRBRVSXMNDHHNXQWFZFNTJWNMHVYIYMGUXGFUGOHQHFVFPAJKTJMQOWBUHLSUEMRTXLPVIWZZYGYEITRLDQREIIXSKKKBATCDPCSYXDIDLUQNNICNLEEOKYVWGBDSNODHP");

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
    msg.setTimeStamp(0.8585734672587835);
    msg.setSource(28095U);
    msg.setSourceEntity(125U);
    msg.setDestination(51246U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.21351794447041572;
    msg.lon = 0.12257491285266553;
    msg.z = 0.30562375190857227;
    msg.z_units = 198U;
    msg.radius = 0.756068681337067;
    msg.duration = 2472U;
    msg.speed = 0.5611052972083276;
    msg.speed_units = 143U;
    msg.popup_period = 35700U;
    msg.popup_duration = 27613U;
    msg.flags = 215U;
    msg.custom.assign("CWYGMHHXIAOAWBPWXRUYXSXOZISQNAZNURQSZKKAUURPKVIBJLSVFMJBQPLTJKAQNWVRMLEOXCGACZKMJZQXTTTXWIAZHKIOBGWARFZYMTISJCDFFDIAGNPMKMHBGBXUKRISOWAPGHT");

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
    msg.setTimeStamp(0.7869638317083147);
    msg.setSource(54941U);
    msg.setSourceEntity(85U);
    msg.setDestination(4971U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.44845524438490514;
    msg.lon = 0.7230294001094177;
    msg.z = 0.40520591739341694;
    msg.z_units = 108U;
    msg.radius = 0.06460447166529704;
    msg.duration = 36441U;
    msg.speed = 0.8453652063437446;
    msg.speed_units = 7U;
    msg.popup_period = 3120U;
    msg.popup_duration = 26839U;
    msg.flags = 146U;
    msg.custom.assign("JPMXPAVDOBDBLSZZEHALBYJDGFGGI");

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
    msg.setTimeStamp(0.2406688293523802);
    msg.setSource(42652U);
    msg.setSourceEntity(44U);
    msg.setDestination(37831U);
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
    msg.setTimeStamp(0.9673030207688521);
    msg.setSource(20784U);
    msg.setSourceEntity(20U);
    msg.setDestination(65447U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.22124869311139073);
    msg.setSource(57820U);
    msg.setSourceEntity(160U);
    msg.setDestination(24507U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.8460722602836971);
    msg.setSource(39908U);
    msg.setSourceEntity(150U);
    msg.setDestination(24377U);
    msg.setDestinationEntity(56U);
    msg.timeout = 45339U;
    msg.lat = 0.6453658400168536;
    msg.lon = 0.4752658925530474;
    msg.z = 0.356803728268576;
    msg.z_units = 48U;
    msg.speed = 0.7363866429639797;
    msg.speed_units = 198U;
    msg.bearing = 0.06560342224848825;
    msg.width = 0.09418407226627723;
    msg.direction = 47U;
    msg.custom.assign("IZQZIEWWJRNLXPANAHNLAYIAHQETXRWUOPPUXTCTKOSHXIWBNYKJVCEZJVWRUBLDNOSPYLZDHWKQDNBJNLXJEHPQOBPSRFRAKOEGCLGJGKPKEVJZRQPRMBTCXOUCAAXNTMHRHCTQMYWUDXIISMGUBQB");

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
    msg.setTimeStamp(0.5626007233323675);
    msg.setSource(22754U);
    msg.setSourceEntity(7U);
    msg.setDestination(65100U);
    msg.setDestinationEntity(48U);
    msg.timeout = 48342U;
    msg.lat = 0.4209657573109462;
    msg.lon = 0.039687175968844524;
    msg.z = 0.834486883482136;
    msg.z_units = 66U;
    msg.speed = 0.5070975915719667;
    msg.speed_units = 158U;
    msg.bearing = 0.3810861504216295;
    msg.width = 0.6404849598358097;
    msg.direction = 35U;
    msg.custom.assign("GSDIEPVLKEWKLPDNIOWBAOESWJBUFTWMHXFSYWLPMYPCNYBUHRBQNWGQVLNOLEICKGIAUCVGFAYKRKBGYLMQCMQTQRXHRTXSJYUNZNYXPAYTASANPUABOLSUVJDBMKXJPVFQSZBATRPURRM");

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
    msg.setTimeStamp(0.5205359944919309);
    msg.setSource(55138U);
    msg.setSourceEntity(236U);
    msg.setDestination(17811U);
    msg.setDestinationEntity(234U);
    msg.timeout = 38071U;
    msg.lat = 0.1391241064575941;
    msg.lon = 0.6896591332297356;
    msg.z = 0.32170649194718204;
    msg.z_units = 89U;
    msg.speed = 0.6269015440810324;
    msg.speed_units = 64U;
    msg.bearing = 0.16553618802863213;
    msg.width = 0.4091595164109735;
    msg.direction = 4U;
    msg.custom.assign("VKZRZJHOMHGLUWPUGMBJNUUFDIECNHTKFEWISNFLMSVZPFWTGGEVXDYIOYKCCDEMQBHSUGSBFNQOVQLERXAJTRQTASYSONYXCLQCHNAYKRTJEXOYSWLKAVQBBKSQOYVZYOWJTRGUDJYFFTPZXMNJ");

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
    msg.setTimeStamp(0.9038458542649321);
    msg.setSource(50847U);
    msg.setSourceEntity(46U);
    msg.setDestination(51064U);
    msg.setDestinationEntity(79U);
    msg.op_mode = 147U;
    msg.error_count = 52U;
    msg.error_ents.assign("YBFNZFCTDEUQ");
    msg.maneuver_type = 12540U;
    msg.maneuver_stime = 0.9548706074173783;
    msg.maneuver_eta = 17640U;
    msg.control_loops = 2519303808U;
    msg.flags = 80U;
    msg.last_error.assign("CHYNWCITZLTUOZMNKTQMTUFRJAKMZKKRZTAZNBOQISGVUKLUHPDGNBQWIOVDSTXYGOJYXYSXCPPECMGGHIWXAWQEYGQOWJJPVJYFDDUHBZRYXCASEQNQKDTFTWIERBJBAACZEPNVGVIKTOQFXVNELBLUFVEDMCWIBFAFUHPOYCPFOHZLAFBKSCNWRKCDHLDRPUDUBVHVPAFSVBHXJILNIEXJMMR");
    msg.last_error_time = 0.17168010108321685;

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
    msg.setTimeStamp(0.159956324029649);
    msg.setSource(40308U);
    msg.setSourceEntity(122U);
    msg.setDestination(29658U);
    msg.setDestinationEntity(206U);
    msg.op_mode = 218U;
    msg.error_count = 184U;
    msg.error_ents.assign("SWGAFARSEELCJNUJYCYMLEWIORTDEGOBZMVTFXPSULCTKRJAADKDTYFENSPBBSDBNUPXAPXSEZKLMNCLRKBMZETNWLIQLLRNHOGZOAFJNZGGVGQOYFZSPVKXKVXUWUPZALQOIQQFSUDFOHQ");
    msg.maneuver_type = 136U;
    msg.maneuver_stime = 0.9398542420459809;
    msg.maneuver_eta = 37765U;
    msg.control_loops = 347693286U;
    msg.flags = 208U;
    msg.last_error.assign("EZBECGZTPMDEWCQTDTMCRJOGAMRNSVSZDQLFASIUYULGOHDWHOBHBEZWFQGYOKUMWNDMIDJHQKKRTFHRXBKIEPCPELIVQFXFDVTJCZDBRUPAYZXKBLZUKCVSLYUVUUPYLNIINPEGTANSKSKMLPACRGAHWVWVJJRVXAHYL");
    msg.last_error_time = 0.006125422724042262;

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
    msg.setTimeStamp(0.2658843505321854);
    msg.setSource(59118U);
    msg.setSourceEntity(99U);
    msg.setDestination(62591U);
    msg.setDestinationEntity(237U);
    msg.op_mode = 239U;
    msg.error_count = 32U;
    msg.error_ents.assign("RWEPKLBCYKVSOYYODXBGHZFUQFVSLKQJXTQACTDDQJLZXGYUZSNXSQYXWHEPXOHENAUMOKHFELPKQUZJWSFZMYUXTHWGVGOGPXGTJBOLWUBGDOMUFZDKNBMENSTWCSRBCJAFGRKTNACYSWIMDIUIRRSKUVHZP");
    msg.maneuver_type = 20537U;
    msg.maneuver_stime = 0.18454952007990155;
    msg.maneuver_eta = 27075U;
    msg.control_loops = 2487745125U;
    msg.flags = 81U;
    msg.last_error.assign("BGABXPYLAUDDWXRHYBJQZAAVHDSLZGRNFFTIKKUKGEUCVQHFZNBWDWLMIVPVAVHYBXEETWUSPDLQTCMLQFELBMVTQCNHUYQXMWIKHNBDMREYXCPJYIMFCTMYOOXIVQTJG");
    msg.last_error_time = 0.28211113010752686;

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
    msg.setTimeStamp(0.40761717980119394);
    msg.setSource(19101U);
    msg.setSourceEntity(13U);
    msg.setDestination(52488U);
    msg.setDestinationEntity(55U);
    msg.type = 31U;
    msg.request_id = 57381U;
    msg.command = 196U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("UVRMOVHIFXGUWWUVMDSNZTKYTWJROQMKJIKOIAPBDHWJWRVONDULUPWCCZLOTASFJNYECMLDFBAHDNDCZANNSJGEUVUOHSUPDQSDPEWGWBJUIVZCVZYRMHBOSIIZCZJFGGAYFXKYDXQRCYPHAMTJORAAUMBOIVHEQELSFTEXBZOLQWTADGLXCIMIBLHISRPXKXLQJFGKHXYXYCCXNYKQRPFHAZRQTLPFTGPRNBLGSWSYBJETVEGQQNKKKN");
    tmp_msg_0.formation_name.assign("SNOBSFGHTLYRFUIWTJSLYVPCLRDEGYFJZQXKVQGTHJGWYIZWXHDKGIBUBPJVVQCWLWRLQRJPLOBAKOUSZMRFD");
    tmp_msg_0.plan_id.assign("BZNCWPWBUNVKZLVRNXOJKBHVQJHYKYUFLFKFNYUCONI");
    tmp_msg_0.description.assign("KDKMWKIALCRERFLOLCOULDRJLCSVVYBOGNUJZMYZTTMTBDCXEYFXLDXVYKMWFAGQPESKPYNSPUZORWIYGCLESXBG");
    tmp_msg_0.leader_speed = 0.3466242064176964;
    tmp_msg_0.leader_bank_lim = 0.8559422841992864;
    tmp_msg_0.pos_sim_err_lim = 0.03418418103200438;
    tmp_msg_0.pos_sim_err_wrn = 0.47763598257823503;
    tmp_msg_0.pos_sim_err_timeout = 4258U;
    tmp_msg_0.converg_max = 0.16420715077726833;
    tmp_msg_0.converg_timeout = 44160U;
    tmp_msg_0.comms_timeout = 33763U;
    tmp_msg_0.turb_lim = 0.5972931184658348;
    tmp_msg_0.custom.assign("NQDSNIBKGOFRUAVTVAYZYDAUGVOQZGYKMOVMOFUAQDKAXZVZGHPCPLOHAPQAYWCTRZHMLWFFOPNSJIDKXJXULNTNCRTCJMDPHJNIFQFLXCEXJVWADYQMMWCSXELITRIPXKMETNPHHGTQURKJFPIHIRTQAJTEVKLZGERFJKIUWLTBFNWJDBQDMSSCWBJWZYHSGRSVONCBQIVBELFCDXRXZCIWEHUOXBOBYDLYU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 14053U;
    msg.info.assign("SLLRLWYMTSRPTODNQPHHOSXXVXQKJASLMGKOUOCBLWGFACMHEXIWTBNHJWYOCVFOZQFMBVRMTTIBMJFBQQNQSVWZX");

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
    msg.setTimeStamp(0.0867488684840495);
    msg.setSource(4365U);
    msg.setSourceEntity(175U);
    msg.setDestination(31574U);
    msg.setDestinationEntity(130U);
    msg.type = 185U;
    msg.request_id = 51655U;
    msg.command = 170U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.8625134244511947;
    tmp_msg_0.lon = 0.2217814366251486;
    tmp_msg_0.z = 0.513117418926441;
    tmp_msg_0.z_units = 246U;
    tmp_msg_0.radius = 0.2593885256237186;
    tmp_msg_0.duration = 37646U;
    tmp_msg_0.speed = 0.41885915934684537;
    tmp_msg_0.speed_units = 6U;
    tmp_msg_0.custom.assign("PGIWVDQVATNOIUDVBYMTXRNLECVXELFYGKMUWPRWKMPUMQJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8052U;
    msg.info.assign("HTMXPWQCPYZHZNDWKCSJEGCITDVCTUPUBOJISVRVEPYPCVEVVTROAXBCSQRGBEXTLMSPBZLAJAANLXDNFYMUCKEOLBIHWHBQEJQJYOWCBFIMLKOHLBJP");

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
    msg.setTimeStamp(0.3663999613613317);
    msg.setSource(27700U);
    msg.setSourceEntity(207U);
    msg.setDestination(54779U);
    msg.setDestinationEntity(225U);
    msg.type = 66U;
    msg.request_id = 44764U;
    msg.command = 251U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 62306U;
    tmp_msg_0.lat = 0.5218060034851061;
    tmp_msg_0.lon = 0.810275401120828;
    tmp_msg_0.z = 0.09152092876944462;
    tmp_msg_0.z_units = 178U;
    tmp_msg_0.speed = 0.39254082552661973;
    tmp_msg_0.speed_units = 220U;
    tmp_msg_0.custom.assign("WKASEGHDTFRSIMYVDNOMWUOTXLEGHJCZFQSCKSKFVERDYZIXQLJSONOMGZZJVUNJARMLJZWOPFXHWZPGABIVLLBSREBIDEKTTJXNHLTJXFMXOAUQUFNAEPCQHYJWSQNOSFVIKURQZIVCLPBHVLDBMZHEQJKAPABPRG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 43005U;
    msg.info.assign("KHUPIRFUKQEURHCFZFEMVDQKXTICQYHXNKYFAXVDAOFEQWRHJJUVPZEPCLTVSOBVXCOYDBKCAZWRFGEFNOSKCMYILZQPNOGDTHWETPY");

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
    msg.setTimeStamp(0.9356800277631995);
    msg.setSource(22130U);
    msg.setSourceEntity(188U);
    msg.setDestination(28111U);
    msg.setDestinationEntity(212U);
    msg.command = 57U;
    msg.entities.assign("LMWNLTIZHVIBNCKFTSMASAUQAXRFAZGHQWYAFBVCYFPLWSAJTPIWTCJCPENBDQAOOIPORYTLDFYYYLUFKTVRUPMPHDTCRPV");

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
    msg.setTimeStamp(0.12283879183420099);
    msg.setSource(27912U);
    msg.setSourceEntity(7U);
    msg.setDestination(10224U);
    msg.setDestinationEntity(230U);
    msg.command = 86U;
    msg.entities.assign("UIEJPWUGKQNUDTXZQNQGSSTUKOHXMBRVJBKOFYYKMLDZHMFBCSCRWLUVRAUUZYYHGPEAVRSOJVZXQIOTDXRZAARLSPMJXNKEXXTVFMIYUTPBPWQHVYJZNHRNJUBRDNELZEPDODVCVIZPLPKGFGQIMAEPLXMFCKLWNTGMTCYZCISJTWQFIWCYZBAHOIMWQSEPRLMLOGFFVAKJLIWQ");

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
    msg.setTimeStamp(0.739633322560404);
    msg.setSource(52688U);
    msg.setSourceEntity(171U);
    msg.setDestination(45396U);
    msg.setDestinationEntity(163U);
    msg.command = 94U;
    msg.entities.assign("BFMHKCKDQTICQBMQFEKUUFZZRNIHASTNJLVJDTQRRAYCMMGOAHWCCTOTBPYRGRNXKPALIOFQSSIZFTMSBGNNLRACYEXJIBFPIVGXVOZYDDUDNYZLKDVWSGPRYVUDLOIXPIWWOZYGMSPQAIXJEUSXBWMATHVUCQPKGHQZUSOCEVZFXMNXAHNVSHGHLRVOQONXPDEGWZNEECJWG");

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
    msg.setTimeStamp(0.31697980934312275);
    msg.setSource(59453U);
    msg.setSourceEntity(134U);
    msg.setDestination(45933U);
    msg.setDestinationEntity(254U);
    msg.mcount = 198U;
    msg.mnames.assign("PHJBVOEKROIPTGNRWYHCYNOJUJCGHRLIWGNNBHUUAFRIRHEJHYACFLIPJGWRXLQTYDLDTEHKVBSBQLPXFOUFOBZXSTNBHSMMMPUGMEYPCPXBDIWTVLGAJSMVQYAVNMUIPQVPKTETBCSATADZYGEMBJZUOKXOPARWFWVLXZSKM");
    msg.ecount = 29U;
    msg.enames.assign("MEYDYBKPQREMLDGXNPXETROADDKQWVCMCEMFNOATPAJZTHOWWWTBJKUISSKNGJFUVNPHLZAXBYPWSAYLCIHIAFSWGSINYLMEYQCMFODKSMGLNDJHUKYGERIITNQLWIXZDUPYIVCUMUJGUPSCBGGTOHOQSKFDZCBMZLKXRLZVNJFMYPXERVSWLQVTCAFEJHSQRVVXRHRWHTNABXZGBTOZTXGVIFPEWLCEOJ");
    msg.ccount = 140U;
    msg.cnames.assign("RZIYQMDJQTSIGENEECRATRDYDAJYRJSBWJXNATFYUTMWOFNXVPGOUCQQKLRUDIOEIJLCGFCKPXSRVHKHZPETBXAGFXEXUMXYPMCWBQWVZAPUQGDJIVRBGSMBVZBTCHEYYSDALKVLYVJSWRAPNWPBLDNONTZEBQIIJNPXHOCVWRDLUSAOMGKSYHHUKCIMRBPLMSNCALUFKDZHULNTOFLZKOVUBGKX");
    msg.last_error.assign("FFFEBABSTXDOHTMFVGNHTTKUYAZCKRUWYMAYFIMCVQVVILMUGQQCWMUVJYJJCXEXETYIFORNDVRCNPQOXNEZEBRQDXUKIUZNFCDDNGOU");
    msg.last_error_time = 0.07836777206452228;

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
    msg.setTimeStamp(0.8032497118462538);
    msg.setSource(65403U);
    msg.setSourceEntity(231U);
    msg.setDestination(7290U);
    msg.setDestinationEntity(125U);
    msg.mcount = 192U;
    msg.mnames.assign("VVWPKWIGJMLNGJKUXRZFHYQFESVARXTVGONZJMNLZMRKFAUBNUOZSKDVOWVZNUIDRYJMCSAXOEBTSMRAPIXUPVERQWQBKLHTNDKMOZFZYARLC");
    msg.ecount = 39U;
    msg.enames.assign("HJVEASXYXAIJFDVSKSXQDGZWTYTTCGWTKDNTRYPHYSWSDALUCQIPAQJMTZSAQZNHXMIVDGWOUIDJLQFOOFZFAGGKBJCWKENNUIXLVJJNGMMOMMLODHSUBBGGPQBFXUVLNOMKYDRZNKEXPOBV");
    msg.ccount = 162U;
    msg.cnames.assign("YLHMDLDTGJXMEHJDKCLDHTIYVBEHSNYKAZXLZJORMAABSFFUADAABSXBCUMLDVYVPGUEIHUKMFPYXUUBGRICAKTPWSOHVVSJIQDYSDOLDFQIHMQWVHWFTKGCWORY");
    msg.last_error.assign("PPUOKIFXBMEOQEFCTIWEZAFBLZMEBHBJOETRIYCANODTLBWQHGSPEJNXKKTLSVDINWQSORWUGTSXSGYJIGMYKVYMRWCYCVKRLVKXUKNIZDFJDSAHMXHSIIGOWUFDQEQGLPCAFPNJHEYHFNLJT");
    msg.last_error_time = 0.5900830358174725;

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
    msg.setTimeStamp(0.20886482114456884);
    msg.setSource(11370U);
    msg.setSourceEntity(25U);
    msg.setDestination(7118U);
    msg.setDestinationEntity(204U);
    msg.mcount = 113U;
    msg.mnames.assign("MDGEUWPNESEEJMCPXQLJYPJQHIKZLFOJIAOAZUTTWSMBXYYMATOUSCNFLKBVIQHUOOGRCHBBDYFVKXYWHCZNWONRJPAEGVSFTQNPBMAHH");
    msg.ecount = 66U;
    msg.enames.assign("XEMBCZRXDWLYJRUDJSOFNTUEPJMANLCCQMIZBVXWILLHHVJIATODBTFNKEQNWIQBIJWRVZOGLPMMYLVHZSY");
    msg.ccount = 131U;
    msg.cnames.assign("OIOAHKFJBYCENRCLIJUXUWOZBLSUATFIMZOMVMLUZRDVZKHCHJDAPORWZYYGTPWYNHURKGGYBCSANKMXFBRFLPMMDJAWFWEEUZHOICFVMNALCKXBXXEGVENFQDVGPXKWXUQTYZISLWHDQTILTVXRQNRNJSPROSGTSJOQFRIKGSKSHPQBMWEJUYIOSETGODXDXRPQITVEHTLDCCQZZFEVTKYGJZCEJIPUQBQAML");
    msg.last_error.assign("VWUQEBXOUCZJNESNALFMVNYWRKH");
    msg.last_error_time = 0.023772649931530387;

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
    msg.setTimeStamp(0.7008920648759219);
    msg.setSource(44197U);
    msg.setSourceEntity(172U);
    msg.setDestination(36133U);
    msg.setDestinationEntity(89U);
    msg.mask = 50U;
    msg.max_depth = 0.7737358338542756;
    msg.min_altitude = 0.5162461029900967;
    msg.max_altitude = 0.9464322248107637;
    msg.min_speed = 0.11628017900133014;
    msg.max_speed = 0.9822800686653317;
    msg.max_vrate = 0.14155191145260015;
    msg.lat = 0.8558513919954415;
    msg.lon = 0.7350821427436882;
    msg.orientation = 0.39783257120078475;
    msg.width = 0.3562104907427114;
    msg.length = 0.25167147573011395;

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
    msg.setTimeStamp(0.10053000752481656);
    msg.setSource(37408U);
    msg.setSourceEntity(157U);
    msg.setDestination(52476U);
    msg.setDestinationEntity(11U);
    msg.mask = 50U;
    msg.max_depth = 0.2749126067860638;
    msg.min_altitude = 0.20417330995260052;
    msg.max_altitude = 0.7343074493511522;
    msg.min_speed = 0.0860186686581057;
    msg.max_speed = 0.2638658302960305;
    msg.max_vrate = 0.533614089660704;
    msg.lat = 0.5422061079832851;
    msg.lon = 0.9567392716764928;
    msg.orientation = 0.03863930268020277;
    msg.width = 0.9472830893823144;
    msg.length = 0.790573362652597;

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
    msg.setTimeStamp(0.5105459447779441);
    msg.setSource(51256U);
    msg.setSourceEntity(211U);
    msg.setDestination(12934U);
    msg.setDestinationEntity(5U);
    msg.mask = 159U;
    msg.max_depth = 0.241398905588474;
    msg.min_altitude = 0.09174816667020069;
    msg.max_altitude = 0.623885740945179;
    msg.min_speed = 0.3813140934417111;
    msg.max_speed = 0.5558366555989215;
    msg.max_vrate = 0.5020603046700526;
    msg.lat = 0.1721718433359859;
    msg.lon = 0.9346083144659314;
    msg.orientation = 0.7911753523147084;
    msg.width = 0.46741299136210257;
    msg.length = 0.7370895646187434;

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
    msg.setTimeStamp(0.24341923519109854);
    msg.setSource(63035U);
    msg.setSourceEntity(151U);
    msg.setDestination(43926U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.8639546652006802);
    msg.setSource(25290U);
    msg.setSourceEntity(201U);
    msg.setDestination(29304U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.23175876247102767);
    msg.setSource(38211U);
    msg.setSourceEntity(79U);
    msg.setDestination(58547U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.1149726793201411);
    msg.setSource(28612U);
    msg.setSourceEntity(79U);
    msg.setDestination(53571U);
    msg.setDestinationEntity(28U);
    msg.duration = 40134U;

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
    msg.setTimeStamp(0.6051615060453094);
    msg.setSource(47394U);
    msg.setSourceEntity(180U);
    msg.setDestination(56388U);
    msg.setDestinationEntity(239U);
    msg.duration = 22479U;

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
    msg.setTimeStamp(0.30475681330468984);
    msg.setSource(56135U);
    msg.setSourceEntity(95U);
    msg.setDestination(33687U);
    msg.setDestinationEntity(181U);
    msg.duration = 51225U;

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
    msg.setTimeStamp(0.3030480376285988);
    msg.setSource(65497U);
    msg.setSourceEntity(56U);
    msg.setDestination(58505U);
    msg.setDestinationEntity(91U);
    msg.enable = 218U;
    msg.mask = 590747130U;
    msg.scope_ref = 2948176530U;

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
    msg.setTimeStamp(0.0900358502191323);
    msg.setSource(16164U);
    msg.setSourceEntity(233U);
    msg.setDestination(13935U);
    msg.setDestinationEntity(93U);
    msg.enable = 158U;
    msg.mask = 1313443138U;
    msg.scope_ref = 42363531U;

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
    msg.setTimeStamp(0.40226354418120813);
    msg.setSource(46849U);
    msg.setSourceEntity(121U);
    msg.setDestination(35980U);
    msg.setDestinationEntity(31U);
    msg.enable = 172U;
    msg.mask = 2952075424U;
    msg.scope_ref = 197337323U;

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
    msg.setTimeStamp(0.9469076133764821);
    msg.setSource(40902U);
    msg.setSourceEntity(89U);
    msg.setDestination(3643U);
    msg.setDestinationEntity(237U);
    msg.medium = 115U;

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
    msg.setTimeStamp(0.42128621629375096);
    msg.setSource(25815U);
    msg.setSourceEntity(97U);
    msg.setDestination(16297U);
    msg.setDestinationEntity(141U);
    msg.medium = 51U;

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
    msg.setTimeStamp(0.9860521427573278);
    msg.setSource(30692U);
    msg.setSourceEntity(234U);
    msg.setDestination(63220U);
    msg.setDestinationEntity(81U);
    msg.medium = 11U;

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
    msg.setTimeStamp(0.6603327321125252);
    msg.setSource(27739U);
    msg.setSourceEntity(159U);
    msg.setDestination(34427U);
    msg.setDestinationEntity(61U);
    msg.value = 0.8858892906352289;
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
    msg.setTimeStamp(0.7441138590808161);
    msg.setSource(24205U);
    msg.setSourceEntity(169U);
    msg.setDestination(2150U);
    msg.setDestinationEntity(108U);
    msg.value = 0.8383283865285519;
    msg.type = 223U;

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
    msg.setTimeStamp(0.18546288035252767);
    msg.setSource(921U);
    msg.setSourceEntity(132U);
    msg.setDestination(47527U);
    msg.setDestinationEntity(60U);
    msg.value = 0.10539610750828043;
    msg.type = 50U;

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
    msg.setTimeStamp(0.07933411605698282);
    msg.setSource(39435U);
    msg.setSourceEntity(219U);
    msg.setDestination(56683U);
    msg.setDestinationEntity(10U);
    msg.possimerr = 0.7268444222271015;
    msg.converg = 0.5810417024036506;
    msg.turbulence = 0.3637892290665865;
    msg.possimmon = 12U;
    msg.commmon = 3U;
    msg.convergmon = 159U;

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
    msg.setTimeStamp(0.30706296130701694);
    msg.setSource(13764U);
    msg.setSourceEntity(36U);
    msg.setDestination(44749U);
    msg.setDestinationEntity(72U);
    msg.possimerr = 0.8581712753550883;
    msg.converg = 0.2901850758955059;
    msg.turbulence = 0.45439342322955456;
    msg.possimmon = 11U;
    msg.commmon = 121U;
    msg.convergmon = 192U;

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
    msg.setTimeStamp(0.7885644636021701);
    msg.setSource(35379U);
    msg.setSourceEntity(36U);
    msg.setDestination(61579U);
    msg.setDestinationEntity(185U);
    msg.possimerr = 0.8141322427058187;
    msg.converg = 0.40515385745141297;
    msg.turbulence = 0.8427450339478928;
    msg.possimmon = 190U;
    msg.commmon = 150U;
    msg.convergmon = 76U;

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
    msg.setTimeStamp(0.7553896018819196);
    msg.setSource(4169U);
    msg.setSourceEntity(249U);
    msg.setDestination(5221U);
    msg.setDestinationEntity(97U);
    msg.autonomy = 120U;
    msg.mode.assign("BXCKTUIQAZYSWGQKZOIKQPMJDFAMHCIUPEBSHPVUHLDWARMYNAFGTQZJYEDYERFTXEXOYSOMIVKDOBDASRJGKHULLBPPII");

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
    msg.setTimeStamp(0.16276516227231086);
    msg.setSource(39140U);
    msg.setSourceEntity(136U);
    msg.setDestination(4419U);
    msg.setDestinationEntity(32U);
    msg.autonomy = 241U;
    msg.mode.assign("RAZANACXAXDDYQQHXPLIBULNAMXRBTYZBBMDSQFQRRRZJSYNEMMZFTVRMJCHWMKMICYDRCYJPOAUBJHMEWJTVXXSTDFGLEHHFCFEDCUPEOIBPXKQTGBJXSFKYFNNKSUFGQJBAUKI");

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
    msg.setTimeStamp(0.020790558113095048);
    msg.setSource(4879U);
    msg.setSourceEntity(206U);
    msg.setDestination(30265U);
    msg.setDestinationEntity(95U);
    msg.autonomy = 174U;
    msg.mode.assign("XUXDEXHBDQFVST");

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
    msg.setTimeStamp(0.6834051745317483);
    msg.setSource(37947U);
    msg.setSourceEntity(225U);
    msg.setDestination(42560U);
    msg.setDestinationEntity(51U);
    msg.type = 32U;
    msg.op = 148U;
    msg.possimerr = 0.9560999624560453;
    msg.converg = 0.2801927811845366;
    msg.turbulence = 0.9098656110267258;
    msg.possimmon = 102U;
    msg.commmon = 176U;
    msg.convergmon = 229U;

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
    msg.setTimeStamp(0.7192814296608804);
    msg.setSource(54943U);
    msg.setSourceEntity(20U);
    msg.setDestination(62681U);
    msg.setDestinationEntity(134U);
    msg.type = 175U;
    msg.op = 61U;
    msg.possimerr = 0.14815340313104186;
    msg.converg = 0.8786895343702131;
    msg.turbulence = 0.28410892090507556;
    msg.possimmon = 215U;
    msg.commmon = 203U;
    msg.convergmon = 246U;

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
    msg.setTimeStamp(0.5190756378445206);
    msg.setSource(45249U);
    msg.setSourceEntity(49U);
    msg.setDestination(11992U);
    msg.setDestinationEntity(139U);
    msg.type = 158U;
    msg.op = 173U;
    msg.possimerr = 0.25548167370519437;
    msg.converg = 0.7031058900182706;
    msg.turbulence = 0.6799337729508486;
    msg.possimmon = 230U;
    msg.commmon = 1U;
    msg.convergmon = 135U;

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
    msg.setTimeStamp(0.06652369620768417);
    msg.setSource(63726U);
    msg.setSourceEntity(64U);
    msg.setDestination(10114U);
    msg.setDestinationEntity(237U);
    msg.op = 87U;
    msg.comm_interface = 89U;
    msg.period = 15552U;
    msg.sys_dst.assign("RULZYNVIEAQOPSVBKJFOWLULRHIUAMQTSFQUMSOQVQTIEVOVJZKUCURXCRPKDENRKSBGOHBPKDXZXZNRPVMNMWLIBEHINNXUGPHYCSXZTCEYSEUQNWFHYPDWIGZYJIDEQSDGEUJJYYFRUXXECAGPOBWIHDKOMQSEDYWKWDXKJ");

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
    msg.setTimeStamp(0.3203928497761278);
    msg.setSource(34662U);
    msg.setSourceEntity(105U);
    msg.setDestination(42415U);
    msg.setDestinationEntity(102U);
    msg.op = 91U;
    msg.comm_interface = 44U;
    msg.period = 56044U;
    msg.sys_dst.assign("ICFFHSHDSBSVJYAHBPQHIWQLQUNXWVNISMKFCGBITDRFVQWQODYZGLEFZQNBAPTIPGRWVUOVEJJMWKYFCZASTSAXEXOMKLPYXDTEHDRAMXBYEDLCLYZCPVTQBQBOVPXKMZRUHJWCTVAJDENUNUKOFRGEOPRUXWYKZMGMWXYNGHN");

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
    msg.setTimeStamp(0.0030695380735096256);
    msg.setSource(57672U);
    msg.setSourceEntity(184U);
    msg.setDestination(33574U);
    msg.setDestinationEntity(114U);
    msg.op = 50U;
    msg.comm_interface = 136U;
    msg.period = 60550U;
    msg.sys_dst.assign("YAPDAISWCKQAWQHEFOLJDEKWRHKGBNLDJFIGZMYJHFNSJQUTDQOGUPTATOSNCMLHBZGRSKBMTHYHGSMVMVTJWZZYCLJKOJBTRZQXCBLYOHLZUSYDRZRINIDLTPFZBMINYXTVMJOOSEGNPVEVDQGSWNBAVUWFDEGTSIXSNCFRHYXKIBCIQVCXYUPAXEKFAXDOUUXLNUXOCFEHBFKQVURQWPLPIJDRTAKMOFUNKACJLZCBWPRPG");

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
    msg.setTimeStamp(0.9425788008610623);
    msg.setSource(34537U);
    msg.setSourceEntity(187U);
    msg.setDestination(49045U);
    msg.setDestinationEntity(86U);
    msg.stime = 2810450343U;
    msg.latitude = 0.4835938332966927;
    msg.longitude = 0.7897993469980694;
    msg.altitude = 1692U;
    msg.depth = 57097U;
    msg.heading = 37719U;
    msg.speed = -9128;
    msg.fuel = -30;
    msg.exec_state = 120;
    msg.plan_checksum = 55586U;

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
    msg.setTimeStamp(0.5135925336256898);
    msg.setSource(23798U);
    msg.setSourceEntity(175U);
    msg.setDestination(17791U);
    msg.setDestinationEntity(85U);
    msg.stime = 1280801772U;
    msg.latitude = 0.418736155124519;
    msg.longitude = 0.4859191841256949;
    msg.altitude = 60631U;
    msg.depth = 10109U;
    msg.heading = 62516U;
    msg.speed = 10782;
    msg.fuel = 102;
    msg.exec_state = -91;
    msg.plan_checksum = 5508U;

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
    msg.setTimeStamp(0.6535284164007903);
    msg.setSource(23698U);
    msg.setSourceEntity(101U);
    msg.setDestination(11182U);
    msg.setDestinationEntity(189U);
    msg.stime = 852069612U;
    msg.latitude = 0.8212878847715536;
    msg.longitude = 0.9147926655185055;
    msg.altitude = 15619U;
    msg.depth = 45409U;
    msg.heading = 21160U;
    msg.speed = -15885;
    msg.fuel = -45;
    msg.exec_state = 44;
    msg.plan_checksum = 41453U;

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
    msg.setTimeStamp(0.4801744674510209);
    msg.setSource(39039U);
    msg.setSourceEntity(78U);
    msg.setDestination(62497U);
    msg.setDestinationEntity(123U);
    msg.req_id = 1634U;
    msg.comm_mean = 94U;
    msg.destination.assign("YNPXQJCEEIIYRVSUKOEMPCYRSKKZBMGRVVWTEYZDPUMGPNOIFXCBKKYVSHAQPNKFEDNDLHRYMLEX");
    msg.deadline = 0.8209030119424453;
    msg.range = 0.9039121508783856;
    msg.data_mode = 152U;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.4531372608671822;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UIRMGGHIGOHMAJOLFCYANWPOOWDASXELYHWRFFLALEVZSXYKZSPBSTJJTKTWPDYTTJKIQNICSAOMLUPGJZBEWBUGPGVJGRPDSTJX");
    const signed char tmp_msg_1[] = {-106, -70, 24, -8, 98, -61, -66, 23, 36, -57, 110, -79, 8, 119, -87, 32, -47, 67, 9, -40, -59, -50, -105, 1, -5, -127, 48, -61, -112, 87, -62, -30, -14, 53, -10, -20, 30, -128, 70, 31, 97, 67, -50, -81, 53, 54, -74, 1, -92, -38, 38, 5, 3, 92, 25, 94, 115, -89, -46, 22, -109, -63, -10, 85, -86, 17, 30, -58, -76, -94, 84, -118, -36, 52, -107, -96, 121, 81, 101, -22, -126, 116, 81, 121, -50, -77, -53, 29, 122, 64, -111, -117, -48, -109, 0, -31, -91, 47, 126, 31, -90, -10, 90, 11, -48, 55, -92, -45, 93, -16, 57, -53, -99, 83, 41, -71, 42, -109, -5, -106, 104, -128, -1, -70, 123, -92, -9, -64, -109, 61, -76, -45, 41, 14, -95, -117, -103, -34, 119, 107, 37};
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
    msg.setTimeStamp(0.4172949570671718);
    msg.setSource(51723U);
    msg.setSourceEntity(201U);
    msg.setDestination(65290U);
    msg.setDestinationEntity(203U);
    msg.req_id = 3713U;
    msg.comm_mean = 30U;
    msg.destination.assign("ENNUDCCUTHQVTSGOPLBLNFAIXBYIXSXKOOWLDBYADIBYRQGJQHBKDGROKAWPUGISREXGSHYXJPGCXEEQNNCSWJRFZANVYCULMCCVPIMWYOJDGYTTH");
    msg.deadline = 0.7291698660597763;
    msg.range = 0.17627703848930565;
    msg.data_mode = 219U;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 83U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WKYFSRLCVIKXHQJSZJC");
    const signed char tmp_msg_1[] = {-32, -73, -95, 63, 55, 102, -118, -122, 64, 80, -35, -31, -21, 0, 103, -84, 53, 18, -34, -109, -64, 11, 41, -14, -81, 105, 72, -64, 55, -90, -81, 67, 81, 47, 29, 83, -61, -52, 77, 87, 98, 65, 123, -106, -87, -127, 84, -120, -68, 36, -31, 15, -46, 20, -120, -41, -79, 58, 46, 87, 43, 81, -84, 121, -33, -44, -103, -109, 119, 107, -128, 110, 94, 104, 108, -34, -96, 87, 54, 29, -55, -98, -1, -96, 112, 51, -3, -12, 116, -79, -78, -110, -37, -43, 117, 56, 78, -73, -6, -10, 109, -93, -41, 40, -109, -5, -86, -8, 47, -84, 53, -59, -26, 126, 114, 28, -74, -60, -10, 108, -83, -51, 73, -33, 78, -101, 126, 42, -87, -21, -65, -67, -117, -72, 43, -74, -62, -6, -38, 65, 65, -8, -63, -126, 34, -61, -53, -65, -2, 25, -20, -21, -119, 12, -12, 104, 71, 110, -103, -50, 120, -121, -122, -102, -83, 44, -90, 94, -34, -21, -69, 11, -103, 70, -76, 33, -118, -23, -91, 64, 116, 91, 79, -81, 113, 11, -13, -75, -29, -97, -30, 65, 49, -37, 1, -124, -37, -111, -18, -42, 125, 39, -59, 32, 96, -63, 61, 121, 121, -72, 107, 90, 31, 15, 13, 25, 101, 82, 4, 38, 23, 12, -106, 62, 57, 72, 65, -78, -94};
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
    msg.setTimeStamp(0.5992803426123825);
    msg.setSource(52484U);
    msg.setSourceEntity(253U);
    msg.setDestination(28577U);
    msg.setDestinationEntity(192U);
    msg.req_id = 51040U;
    msg.comm_mean = 163U;
    msg.destination.assign("LNDECJSQMOTMOQOEPMBGJGJABLANTUFYAQRDIHCITZROISYHXEQBJPIDAUULTPTVWWCZQUSCXTIEZUXAEGYSUGSFWHWPKNRLCVATZKMRZDQGSKNNTRIRHVYKDGBNJKZCAGYFIJIWMDTPKZEWZYFDNMXFJMEMNHAWGWDZRBXVOZHSXWVISFOPGOEURFOAPHYPLCLVBJNPJV");
    msg.deadline = 0.5874767265773015;
    msg.range = 0.5946285448250722;
    msg.data_mode = 244U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7971523392701797;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 11822U;
    tmp_msg_0.custom.assign("OWBQLXJQVSZKCLGALEC");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PBSWSFYVODSFMCWLJVDXVCRNGVBAMEUZNZEYUAMVZFGGLZGOBWCKKIUGPCCPXVOIVHPYYXWKYTZWULJLCHZTKJSMIITOMIFHGNNHLHQTABUVDKUQRQNWDUXBWAOEDPXLKIEHIQJTIYQXYAFONYBJQTZWEQPBFADTDAMRRROGZFSIIOJJECFXXAKSPDGSGNPTYFMM");
    const signed char tmp_msg_1[] = {-38, -95, 126, 8, 122, 85, 13, 69, 96, -36, 68, 119, -109, 29, -65, 101, -55, -90, 114, 89, 48, -4, 28, -7, -124, 29, 113, 121, -96, 71, 46, -120, -50, -14, 62, 112, -99, 5, 23, -127, 45, -111, -42, -97, 54, -6, -27, -39, 98, 12, 103, 105, 95, -86, -30, 95, 48};
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
    msg.setTimeStamp(0.04224814816400502);
    msg.setSource(8135U);
    msg.setSourceEntity(17U);
    msg.setDestination(7364U);
    msg.setDestinationEntity(164U);
    msg.req_id = 24535U;
    msg.status = 192U;
    msg.range = 0.09953873488307141;
    msg.info.assign("NSDPHCVREBIXM");

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
    msg.setTimeStamp(0.6989647218620755);
    msg.setSource(64137U);
    msg.setSourceEntity(114U);
    msg.setDestination(7819U);
    msg.setDestinationEntity(157U);
    msg.req_id = 23694U;
    msg.status = 215U;
    msg.range = 0.41921347131553155;
    msg.info.assign("ZSKAIYLFUTPHX");

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
    msg.setTimeStamp(0.9815332079327165);
    msg.setSource(10856U);
    msg.setSourceEntity(94U);
    msg.setDestination(27958U);
    msg.setDestinationEntity(113U);
    msg.req_id = 7141U;
    msg.status = 238U;
    msg.range = 0.0030087784679434515;
    msg.info.assign("UKFOGFXSPCKCBNZFOGFXJCLEZRALCQQSXACJKED");

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
    msg.setTimeStamp(0.7647569749339327);
    msg.setSource(38739U);
    msg.setSourceEntity(162U);
    msg.setDestination(29317U);
    msg.setDestinationEntity(173U);
    msg.req_id = 48165U;
    msg.destination.assign("VFXCRDLZYZZJEWUOXCSWUVYETCVTCBMLYPNSUXDDJKAEXDNNMGFMYHRQVVAPEZHWHEJUMKUZBMCAXHUVWTYYIQOIGLXODSXPFSHACSFTQRQWGIPNKVEFGFLTBOXSTWSLJVWHBPSJEDAILUNQKBAFASOUCXYNEZDHTZPRRRMEQKTNFKMICVXOATBCZIILWGZKQMS");
    msg.timeout = 0.18260235674309278;
    msg.sms_text.assign("LEATBLSNRUWBLMYOVHRFZJIPYJPVBQSSLZPIECQVHDSGMBQZCDXDEEYPBZRZGTFWQDZSKJAKCIOXMYVKKSCFGBQUXMSTMHJOVMVUOYNUGXWZTWOQWHVNHQLKGGEALBXEWXPCPJRFDZRNCPDHDMAQRYXJAGGOOKPAEN");

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
    msg.setTimeStamp(0.48645082511035276);
    msg.setSource(34270U);
    msg.setSourceEntity(13U);
    msg.setDestination(51442U);
    msg.setDestinationEntity(102U);
    msg.req_id = 28683U;
    msg.destination.assign("GJAODOEIXXQBFUIYLIZFBRVLFMOPGDRPWMSCYMRFXHBUABGPHFVARCMGKTPEDHWYRJBGIKCXWBAGTD");
    msg.timeout = 0.5556772052097313;
    msg.sms_text.assign("JSACZEQEMKNEFBIGTPHOVCRWIIWKGQEESLUXMUYYROVEMBWHIMRUAKIRDGCWLNXGYUIYO");

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
    msg.setTimeStamp(0.5823177364779005);
    msg.setSource(38103U);
    msg.setSourceEntity(136U);
    msg.setDestination(47139U);
    msg.setDestinationEntity(239U);
    msg.req_id = 60307U;
    msg.destination.assign("IKHBEVZDWJGEOBMQWMXQDNAHFRSDSYNELUUVARPLSDRSMHPKCJUBRJNKWFRFTKZNZYLUYXYTNPBTTXEAWCZBXFYUGYRQBJGVCJHVNDZPELMQN");
    msg.timeout = 0.6898486813997109;
    msg.sms_text.assign("ZNPJAWDTCSGBIFMGJMKHIVKURDZQBNMPQSHQSVBTKMTUJZPRCUFLYRQPEXEVJPRSUGNOLGYZTFXXWRIBLKNJKNCFOSLIEEOIJOATCUKUBRRKJFZCHMGIEAMQTFKOTCXHVEVSRYMZSQDZVAWSKBYXFWCIIHTDGOPFNOAMLZXCANWEEAPWSNBVQGFHDLRXFWYGDLUXD");

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
    msg.setTimeStamp(0.10694296533449654);
    msg.setSource(22232U);
    msg.setSourceEntity(254U);
    msg.setDestination(8851U);
    msg.setDestinationEntity(166U);
    msg.req_id = 24547U;
    msg.status = 125U;
    msg.info.assign("JQOUAXQJIADRXFZXEFCLSVEBJJHMWKXCWEGNAWGVAPNOZBCZKJIPINFMQSUEBLUZSOTLCHNWNQWSVUVQYAJVKRHWRSAQXLTXRUPUMOPFTVOTYEKQHTDJQUIZVGEKFHF");

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
    msg.setTimeStamp(0.9410807253122874);
    msg.setSource(13085U);
    msg.setSourceEntity(57U);
    msg.setDestination(10178U);
    msg.setDestinationEntity(234U);
    msg.req_id = 50981U;
    msg.status = 28U;
    msg.info.assign("HAKKXVATHDYIIILJNXDFVNNMYUSBHFELOTBOFIVECFITTPNYZQECEAFMMUJYRGWHTSNSDIMABZNVUDPZKBSTQGGQJIJRMAZCEBKUQXLXPJWUXDRABOZQZOKLFTENGHVFIMOKUODHHZVSBCGBKJGABWESPQWTVDWYIYLCWHSQXGMSSJMIPVCNMLRJPRRRJMPZXFLEWKUCRHQHO");

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
    msg.setTimeStamp(0.15297006381491718);
    msg.setSource(45062U);
    msg.setSourceEntity(64U);
    msg.setDestination(16215U);
    msg.setDestinationEntity(232U);
    msg.req_id = 12907U;
    msg.status = 227U;
    msg.info.assign("LAXUJOOFBWUPVCMQMSVTSHUAREBJYWDCJAZCRWFYUKKTVRSZLGOKXVJONGEPPMPQFUYVHPARMGUZLLKREHXDSVFLZLJQBCWFFLAPBNPCNYFEOCTJXFCSAUIXDSIQEPKXHQYRTBEDENMZDYQHJZAWGQESGKDYXTYNZJVTZHRBCMNODWFPSDU");

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
    msg.setTimeStamp(0.8911699287907586);
    msg.setSource(37729U);
    msg.setSourceEntity(26U);
    msg.setDestination(29595U);
    msg.setDestinationEntity(36U);
    msg.state = 137U;

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
    msg.setTimeStamp(0.631791505854153);
    msg.setSource(47418U);
    msg.setSourceEntity(187U);
    msg.setDestination(12470U);
    msg.setDestinationEntity(201U);
    msg.state = 179U;

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
    msg.setTimeStamp(0.7953303271062733);
    msg.setSource(19943U);
    msg.setSourceEntity(146U);
    msg.setDestination(26770U);
    msg.setDestinationEntity(108U);
    msg.state = 199U;

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
    msg.setTimeStamp(0.8633029357241913);
    msg.setSource(19878U);
    msg.setSourceEntity(246U);
    msg.setDestination(58922U);
    msg.setDestinationEntity(142U);
    msg.state = 243U;

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
    msg.setTimeStamp(0.1999705797027932);
    msg.setSource(33399U);
    msg.setSourceEntity(50U);
    msg.setDestination(56506U);
    msg.setDestinationEntity(75U);
    msg.state = 53U;

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
    msg.setTimeStamp(0.7636993736819797);
    msg.setSource(50343U);
    msg.setSourceEntity(85U);
    msg.setDestination(30536U);
    msg.setDestinationEntity(213U);
    msg.state = 201U;

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
    msg.setTimeStamp(0.5779523389516975);
    msg.setSource(13626U);
    msg.setSourceEntity(25U);
    msg.setDestination(49610U);
    msg.setDestinationEntity(249U);
    msg.req_id = 55750U;
    msg.destination.assign("UJNGJQOCKORAHIFMAMYHMRSQNKEDSTLLPDAKSXVGFCUZFXZVFHOQRDDHEWJSVTKNCUPREMHZSXGZEWBGXHVDRKCGPWAVSVTOWJZVZYUXQPBIGNUJCBUIXKYPRTDBIXJBHJONZTRANWENCGIMNMY");
    msg.timeout = 0.5086820754414174;
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 43919U;
    tmp_msg_0.x = 0.4491722817158075;
    tmp_msg_0.y = 0.6569422848923028;
    tmp_msg_0.z = 0.4835981434814486;
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
    msg.setTimeStamp(0.13186557297577972);
    msg.setSource(19077U);
    msg.setSourceEntity(238U);
    msg.setDestination(48949U);
    msg.setDestinationEntity(191U);
    msg.req_id = 29086U;
    msg.destination.assign("UJJAZMJXDNFZYMLFVGEBNIVGOVHMTFKZLCQAIRIWOYTIEKQNLHCIQJEUDPMLWAKCHW");
    msg.timeout = 0.043411729679214583;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("WJSXTJIACQYRBGLSWQVNEGUDMFBIJGCHRYLOJMFOU");
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
    msg.setTimeStamp(0.26439029967077177);
    msg.setSource(12324U);
    msg.setSourceEntity(79U);
    msg.setDestination(49131U);
    msg.setDestinationEntity(130U);
    msg.req_id = 12518U;
    msg.destination.assign("JIGMEPVAQATZNBBHNSNCBDZXBZFLDLSESSYXFGKSORBIUAAGJTXYTKRULFXRZCASWGYPGGDQPFUNPRKWWEQMCSEPHSPQHHDPBZFNE");
    msg.timeout = 0.09106710317127598;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("WDBIFEVYLZVOLPJNNQHXNTQWLTOUSWFBFMPDMCTEOTMNZJQZBOSZNRBHDKYLSWYWHIKCPLMXIJRAWHIUOCLHPPHCGCDMXTAXTQSKXIGUMYD");
    tmp_msg_0.rssi = 0.5760102462629315;
    tmp_msg_0.integrity = 59969U;
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
    msg.setTimeStamp(0.574185158148913);
    msg.setSource(28705U);
    msg.setSourceEntity(197U);
    msg.setDestination(4240U);
    msg.setDestinationEntity(174U);
    msg.req_id = 19902U;
    msg.status = 65U;
    msg.info.assign("VNZJGYPNTXSKDOXFEBDQHGOMCUTZCYEVPRHDUQHBODOZQZRNAWEOHPXIPHADKTBFUJRSDKRAAFMEXUHKCVMYEXYNESWUTVPDMCRAGTGTPHWPBOSNLZQNAURFTXCMIGZDSVKALZIRZKJJYXCQSMWOEUZFGQTTKFPVDEMDBRUBLQEGOOMWYLALUHPWXJNJJNCCB");

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
    msg.setTimeStamp(0.5743652490701305);
    msg.setSource(44326U);
    msg.setSourceEntity(27U);
    msg.setDestination(53355U);
    msg.setDestinationEntity(172U);
    msg.req_id = 12444U;
    msg.status = 202U;
    msg.info.assign("SLJEEKPDOIXVYYTCTDFVIYARXLVNRRCTPFWDQLGWUTRCBEIJMWMLNUARMNZSLATUQHGLPWKRJOMVEBYZA");

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
    msg.setTimeStamp(0.19875981308751633);
    msg.setSource(43299U);
    msg.setSourceEntity(232U);
    msg.setDestination(21398U);
    msg.setDestinationEntity(66U);
    msg.req_id = 55496U;
    msg.status = 20U;
    msg.info.assign("WHVBNOVCKDCADHCOQXUWVAGAOIOVPGVSMFXZIYJSGGIXYWWCLNUBLJYKCNDASOLEPWDNNKOFOXAWHGEURBRDEFHRTRLLJHZDUVNDANGSJKALFHSMDXPPSYDYZYBQBTFIWHBIXPRYMBGXRQGEZSUMQIPHKIKOGFJFNBQMPIKFJCMZWUEPMWGLUZYTJABXQMSEPYTXEJLOUHKYZCJZTWETAFLKRVQJMCTVBRXEFDPZ");

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
    msg.setTimeStamp(0.6487134275579902);
    msg.setSource(12753U);
    msg.setSourceEntity(193U);
    msg.setDestination(18957U);
    msg.setDestinationEntity(61U);
    msg.name.assign("KXGMFPZWFPTFJBKRERYDGQHSKONFUBYYIAJRSNGVUVJSRAIADWFKBCDJHQDQRGWYSZFELHRNNFTRYHESKESMGSXZQLCUWYJPVIAZLAAIZBMCHBPCLNJKOAWJSZBUXEEQOMIZWMDDTYZTVYRJYCTMWXUWYLXQQNKEUGLBDCOPFZUHHHIULAQVUTHBOXQBPANMIGMNKMOPLIOGLGIUNMFATSTCTXDRX");
    msg.report_time = 0.613160662404042;
    msg.medium = 76U;
    msg.lat = 0.43596129621318125;
    msg.lon = 0.9606141949158793;
    msg.depth = 0.9939025451820347;
    msg.alt = 0.6586603353792199;
    msg.sog = 0.8676770990686068;
    msg.cog = 0.6894586318890635;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5165492594965705;
    tmp_msg_0.y = 0.2825701679418323;
    tmp_msg_0.z = 0.3087417939897139;
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
    msg.setTimeStamp(0.8349838310945676);
    msg.setSource(63111U);
    msg.setSourceEntity(224U);
    msg.setDestination(16414U);
    msg.setDestinationEntity(75U);
    msg.name.assign("SDURARUFXSTDKTJHDAUSKGJZVJWTINHSJFXOQYPWQRKXSYCWMBAFPMTCPKTMCEEUAIXPBDORHVXWPGTLJHINIUBBDKAGFJCWWULHEMNPLXXUAGPHZIFQZWTEYDJSBZIWYLKGSYNDLLNTIJOFREGGDFTXSBPOGNFKCMXVGWMSCYAPYIUKNXZVAMEA");
    msg.report_time = 0.5578625369980185;
    msg.medium = 169U;
    msg.lat = 0.3833198337266167;
    msg.lon = 0.141700816800012;
    msg.depth = 0.734319821644703;
    msg.alt = 0.8001981806437373;
    msg.sog = 0.4059971465486393;
    msg.cog = 0.6484002499770661;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 24861U;
    tmp_msg_0.avg = 0.5780135824639328;
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
    msg.setTimeStamp(0.5502224606662945);
    msg.setSource(31351U);
    msg.setSourceEntity(98U);
    msg.setDestination(48026U);
    msg.setDestinationEntity(119U);
    msg.name.assign("JKUKAGNIKEXAFYKZBECRKSCQGOPAJIVBPEAQXUCZIYWSWUHAPAMSWDDLKFUMSLZNCMIYVBOOVJYVBXJHELFYRPVMNTBOQOTHJIVDGNFTDRETPRSQJHCLBSFVKTREDLQROWNPQVHQRRKBRJBYGSKPBQCVEDZYUQXWDNAHJNALXGUCZNMC");
    msg.report_time = 0.8094342444300092;
    msg.medium = 160U;
    msg.lat = 0.8155318734981182;
    msg.lon = 0.015573564379543714;
    msg.depth = 0.9429944650230697;
    msg.alt = 0.7144360245463194;
    msg.sog = 0.3384183216794653;
    msg.cog = 0.7563534068058211;

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
    msg.setTimeStamp(0.3648797472405185);
    msg.setSource(19516U);
    msg.setSourceEntity(177U);
    msg.setDestination(39276U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.602720180323603);
    msg.setSource(57390U);
    msg.setSourceEntity(207U);
    msg.setDestination(19261U);
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
    msg.setTimeStamp(0.13609235852415236);
    msg.setSource(48449U);
    msg.setSourceEntity(190U);
    msg.setDestination(12735U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.6180380039363144);
    msg.setSource(58262U);
    msg.setSourceEntity(140U);
    msg.setDestination(20598U);
    msg.setDestinationEntity(203U);
    msg.plan_id.assign("SPZVGKSFGEWEBDZR");
    msg.description.assign("EBFCPIRUKGLLDVTNVDASQYG");
    msg.vnamespace.assign("SJEZVOJRMUROAOJWABTFZOJXCLSQXWQECSZWULGDJNWUZIJMXZPTOHUYJJSVTBVLGUAAKMQCXOIGKAJVGIYYALHIYNVDDPTAWDUBNDCOSDAMASVUQVMXXIQRHBGONHMSKSAZKKPMLNTBZSIMDXTPVCEWUNZBPMKHUTNKHOCFRGNROEGMTFVKXSRLNETYIRNZWFFFLKYBGZPL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KOJZOXWWQUAQVNNKYRKDFDDTBLCYCXDGQELFISPGLSGPTENGTHYXFFXPZDTJJZSKJSECTALJBOMBBYUHXKMRIGWVASJVFRTURKHLMNZWFYQJXCLUECIATCIMYPXOQEMUAUQGMTP");
    tmp_msg_0.value.assign("QYLIHTZOSHFNSTAVHNFGDDFFRPORANFCESYIQPJEVZCVZMLDCYXSXVCRZNXENMPAKTLNSQWUXJOBQQIUDGDZCRXLLMEKOBFCIZMJGTVPYWUCWZJELTHBOPRBXLABBQXNHDBDLYUOKTUIENUPLPKGFJYJOMUK");
    tmp_msg_0.type = 253U;
    tmp_msg_0.access = 36U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FSWISRYEMJPBPVXGSMQDJHRIOVQMNUXKOIIFTABGZJIWRPHZXLHYJEKGDDQFLYFUY");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("HZYZOLHZUUNIXONHOIJDUMBOKUMFXFKXRPYGBDNGYVPOFGQSENSRFSMXWFQSPEDVNVMMBLJRESBPFLJNO");
    IMC::Elevator tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 13881U;
    tmp_tmp_msg_1_0.flags = 230U;
    tmp_tmp_msg_1_0.lat = 0.23854614840248778;
    tmp_tmp_msg_1_0.lon = 0.4818112558854799;
    tmp_tmp_msg_1_0.start_z = 0.2466770203665739;
    tmp_tmp_msg_1_0.start_z_units = 213U;
    tmp_tmp_msg_1_0.end_z = 0.9019735330856284;
    tmp_tmp_msg_1_0.end_z_units = 249U;
    tmp_tmp_msg_1_0.radius = 0.3121823847647115;
    tmp_tmp_msg_1_0.speed = 0.6370412419070663;
    tmp_tmp_msg_1_0.speed_units = 110U;
    tmp_tmp_msg_1_0.custom.assign("MEOLVCQZDPICSKTPXTDTSSLZOCFZFGXTGUYEUTCGVOYPDJBHIMNWMVXQQRGRIIFJEUEKVRVPTRBYIIUVRDQWWOWMAQLQVCFUUSITGPFHDKDEREMHYQLQSDOPENAJQBNFOBZCWQZSCUMWCOYYMRXVNLJKKFAZLBPOJHFAGIPYCXJPHGSJXRYVBHZLCJHWXAGKWWUNMTNLRBBENNOWTDAZGLIVXSZ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Event tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.topic.assign("CKGLNRXDHEPEQVQOYSVFWYOJENNYCCAVL");
    tmp_tmp_msg_1_1.data.assign("ETRAXBXEPWBDWHRDFWNUNFWXSIQTLWWIBJUJXHKARLOJOYTXZMWCLKQJNQRSHFOPBZUEQZLONMMHDMODEDTBQKSUKYFYGGFILITUCDDCUNJGDUKNCRPZACWVREAAFPXITRABVBKCMIRTINEXVQGFLPQMQLHZFOJDECGNCXFUKPXYXGHIVUIQOSUBVJSSCCOMZNPHL");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::LedBrightness tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.name.assign("UOZOUBKVMFAHADTRLIIKLOSWSEJEADPSPPDXUNWQIAITZXFYBKUEGTGUSRYDSJVSTCBLKFCLFMNRVXGZUZOWBQDRDNBTWLCQOZCILEMJYUWTTEXGHAMRZROYTTSAJIYWBCPWNHLFQNHJEXNPYGCAQLNGGSVFPVWMERIVUPDKMHXBVPJBFLJXLJPFARNMHNY");
    tmp_tmp_msg_1_2.value = 207U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("KGJNQJWBRVIAPDKTGTXPFMVMQSCLZIKNOCCYFLHCHHJTHFTYMXNZBFXPGDBBDXEGIBNWVVLMUNIJFGLDZXHETCOTKFEJKHHRLMLNHEMSYIFEUQWFRJKADUOCLXPYQIEVGURZVNYXLRAMKJUATCYWQBOOOPUQYZLEPKBTWQBTOWSREAPOSDKZOWVG");
    tmp_msg_2.dest_man.assign("SJCYVLYOUIWMZPLCKKOXUEYLKDMHSISEZSYWNRRQLJQITXQWFPXVDULQDHNOEKGAKSPBHBGCFBNWPDOHUHISUOWPZNTOATMZJEGGZGPDNFFFXNDATOJHHSRBFWGTCBJABCAJOQMWVKVUJVMMRQLVADGDEFTNQNQNPRDFJFGMRXTXLPLFWKSECYRAPYWRKSEZUBYLKXTRCUMMIBYHEAQBVLUOVZSVEWOZQMTYHECXIJHYDGIIIBAT");
    tmp_msg_2.conditions.assign("HKEDVBLAUFQHTEWTGQARIRTAXJXXRVRLBMZAWLJPOKAMEDYHZVJTJLBFXUJIYUHFPNYLDPSMUKUBBGLVOPYREFYZQQKSRICWMRVBHXEZBXYDGWROSXCQCIIPWHCENZZVGCCOEIFUYSGJDNUTFTTIMYCALKKMWDMGQUWVURPNCLXBYWVAKOPDDMNEASOIGUQEMJCMVDNAATTHCSRVKKYOJGBQFWOGINNJZXSZIHPONQPFLJNBH");
    IMC::Magnetometer tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeout = 27818U;
    tmp_tmp_msg_2_0.lat = 0.058259589229059716;
    tmp_tmp_msg_2_0.lon = 0.6853469181814746;
    tmp_tmp_msg_2_0.z = 0.45720839869100405;
    tmp_tmp_msg_2_0.z_units = 222U;
    tmp_tmp_msg_2_0.speed = 0.32858234340241865;
    tmp_tmp_msg_2_0.speed_units = 249U;
    tmp_tmp_msg_2_0.bearing = 0.08827585430865559;
    tmp_tmp_msg_2_0.width = 0.8978740755106128;
    tmp_tmp_msg_2_0.direction = 125U;
    tmp_tmp_msg_2_0.custom.assign("OEXNLLXFVUXTOGDXHMYVHNTWDZFTIGOSNHVPWWMCXGYEELNBZVTRZBGJWRQBQEGUCNJSMAVWSJHQBLAFIEPDDHPXFSMIRK");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.3874077557753868);
    msg.setSource(13554U);
    msg.setSourceEntity(149U);
    msg.setDestination(41317U);
    msg.setDestinationEntity(29U);
    msg.plan_id.assign("ADNIQGCENLIOQBUSYMFADDUWMIHKITNVYRFWPMBSTORSIBVCAAJKATSSMXCNPZSFOBPBPRLWOHUNDOZVFB");
    msg.description.assign("LPNDGOWTUHCBLNZCPZUGAXOLPQUJSLHWEURTTLSBYCZFBRZJIVCLJENDPSWWBXO");
    msg.vnamespace.assign("IKZECXDYNHLBKSVVQEPUZOUOGFMPCCGOOSDLAFNQBSSWTPLZXTRMDWEBSMZGYIXISEYNXFZTKCIGGXWBVXHLTYBWDBVJSKVUCJRMCPVJJVOLUDJVFUXAHYHAQGZATFJQHIBYSIQMATXRWUKAWWEHUNKHPQNGEHPNVVUIJYYONE");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YCROPHKNSZGEJMVZQSXBOVCOOUZYZCLPUKGIYIVDAZVSYMTHQXA");
    tmp_msg_0.value.assign("KQNVQXGNZGMSFSXHZDTJANYDRTOLZJUMKYOMZCLGFBOHLKWHRWJYVKXUJROZGEMEOGGLVCESDUKNPCGRFFXCSUBAKSNTDOLPAQKJTKYFYQTTVYYZACDXZQUNMAOVXLBDGMBXUVRSQHARRHDMFVIWASIZPQPBVFNEPSEXHECBIWINPTKOHLATRYVIAIWPJPELWEGPDUSJUFZNIMBRHBJDTWACRVWJFUCGBYCNESLOZIIKHFQLUEXMP");
    tmp_msg_0.type = 69U;
    tmp_msg_0.access = 122U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SVRMGRJDJAKFYTILDYEVDTYRNTDEYODGHCMUUBZUKSOXZOMRFGPYDPNELCCSENWQPNMIAVFWEFFZNKBEXWZNPIZTRWJJHRNLPKXTYMVCIHUWEAAOKSDUXQGYMXDHZCGLOOOIVMBONRLPATKGQUSIOCBCSBKBVMJFUNGCOLIERWLHAHZHHSAFTSIQQUEVHVIWL");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("IHPDROVWCAGNUEVNVUUCJDVPBEGGCJAZISQJQIGIOGRZQEAUDVZZWHZTXMPUOCOSWLAYMQVQQXMLCIGAXJNEMRRZEPFWBUMDYZYYRUKKBMSLOGCQSRCFNEANFVSNRHTGRJLGABHNCEXCIOKOUHRTBQXZXZOSOOMDWLFPAMXAFDHTSEKI");
    IMC::CoverArea tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.7947117091306397;
    tmp_tmp_msg_1_0.lon = 0.9595279504217142;
    tmp_tmp_msg_1_0.z = 0.7960269803747079;
    tmp_tmp_msg_1_0.z_units = 248U;
    tmp_tmp_msg_1_0.speed = 0.007256302491732813;
    tmp_tmp_msg_1_0.speed_units = 87U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.lat = 0.3623125221483907;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.5686339874090757;
    tmp_tmp_msg_1_0.polygon.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("MBETQGWHJHMVCTHZRIBGWFGSLNAEWXZEQTZCXWQDSYGXFNRMMZGPWJUVPJAPUGXNCKSNNSBEPGUNDYWPRTOBVIIYMHURBTVVGEYBT");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::IdleManeuver tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.duration = 16081U;
    tmp_tmp_msg_1_1.custom.assign("TLPIFMLZICUMUGLAGXEJAGJDEHBMPBJOUCZIZSWUJTAHVZKMTKTDVMOWEZYETBIEYOHWNBRCANAYZYRPDAKLXIYWVCWWIPHQJDIIQLUUKRQQVPHQQZJFXVKSOQOSPBWADOKCJEKNYFRGYQMSJFSAVEUTUHCNHDCRUNNRTGSXRCBSVFZWRXPPWNQGNMLKXYOCVFDESTMGDFZPGKJLNBMRXLXXYBTQZLUVTYNFAEGDVLGIXWKPRH");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::DesiredPath tmp_msg_2;
    tmp_msg_2.path_ref = 3855960903U;
    tmp_msg_2.start_lat = 0.5879712907343742;
    tmp_msg_2.start_lon = 0.12251026142574906;
    tmp_msg_2.start_z = 0.35673861202666135;
    tmp_msg_2.start_z_units = 167U;
    tmp_msg_2.end_lat = 0.8333412520910923;
    tmp_msg_2.end_lon = 0.3663157940188556;
    tmp_msg_2.end_z = 0.0421256775905986;
    tmp_msg_2.end_z_units = 152U;
    tmp_msg_2.speed = 0.09474417877161112;
    tmp_msg_2.speed_units = 200U;
    tmp_msg_2.lradius = 0.36334718299675917;
    tmp_msg_2.flags = 127U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::UamRxFrame tmp_msg_3;
    tmp_msg_3.sys_src.assign("SWRMMWHRSLUOZRWSZRYXOTNIRRUKBPYTEDQIJSNBMELTUMUSPOQIPXLCDDUWZCNRBBYIKUFPQVHETBYGSPCFMNUVNCHWCAYOJEFFFWOQUXBDCRYIUMNGZGHZKGNWXBHADXWVHYWGQMALHLPSEQMCDKQHIMTDKIZEVQEXIPUAYTPLLAOPFVVOVVLOJAAPDGKVZNKLXGNZBG");
    tmp_msg_3.sys_dst.assign("JEXYQBWOIBZIYGYLFCMIJMKZFIRTHBXKGWPAZNDYDOXSCGJVTSJWTOJBUDKSTITGIQNHTHQMVFXD");
    tmp_msg_3.flags = 195U;
    const signed char tmp_tmp_msg_3_0[] = {-37, 30, 78, 118, -53, -50, -94, -70, 10, 93, 15, 55, -127, 76, -28, 76, 87, -28, 4, -114, -47, -47, 26, -44, -5, -95, -66, -109, 21, 60, 81, 112, -114, -107, -78, 65, -30, -36, -23, -65, -119, -36, 21, -37, 108, 58, 65, -28, -66, 97, -12, 113, 38, 67, -56, 126, 123, 90, 96, 93, 29, -38, -68, -9, 90, 16, -102, -44, 32, -80, -70, 58, -92, -82, -78, 56, 87, -106, -20, 81, 82, -112, -125, 68, 68, 94, -89, -29, 104, -118, 106, 26, 41, 76, -97, 65, 42, 21, -86, -75, 11, -18, -108, 111, -71, -28, 62, -13, -7, 99, -33, 99, 100, 13, 79, 35, -78, -74, -127, -124, 110, 36, -105, -118, 111, 98, -33, 102, -103, -112, 29, -58, 61, 35, 98, -117, 20, -48};
    tmp_msg_3.data.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.5524268252883829);
    msg.setSource(2801U);
    msg.setSourceEntity(107U);
    msg.setDestination(28106U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("UQQYOFQGCLWQLGFZZQEVGXAXAHCWSUOSQFPXTHR");
    msg.description.assign("DMRRYDGUTWEWQIYSBNRIYOQZOSRCOQPLCDNKGEPKUGZAXCHXNNVSAAIGGIMJWEQVGUDWPHPKHWGEPELZPMCWIZESSBAALTYCLYQVAMBO");
    msg.vnamespace.assign("ZHFNGCCJESUPMMCKWZDLGBKMYEQWTELCEYH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CDEIIHRGUZOQNVZVGOITMMFWLNBELBVXUGCMBXNUWIUNUGWFGLDYZHLWXJOMRRX");
    tmp_msg_0.value.assign("QXVWTOZWBGJXCNVAKVEMJSAHYOJKPKOHSCMUTLCDLIAMYAEGHGXFDWAHMUZQEWXIYYHBBTJZOXPSMCTDMNPUSMJESKVDRCEVLY");
    tmp_msg_0.type = 224U;
    tmp_msg_0.access = 85U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FMXAHPMJWVGJNAWAUCUXQEOJDBCLQQPDAYRXUYBDIKZFGCNLCZWXBRIYHZSKSIQHHXMKKVGOIJPOPBLHOPFANRZRTLTYCYIPT");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("RXLIUUTUJHBQQNZJLWELNHPMKBWMYSTVVJDGICKHPDWIUIGXPTRRFYEJKAZRJBGIHFHZDOLIFAIEWXXUAJFUTZMZBMPWIOSNRCVAMVSLAYBWODCYCNMGVWFZOKVZOQPSBTNLKIWKVCFYOFNSXFISETXHQFHVUCTZYPEOOLVARRJKGATQNGGSRFPCHNDX");
    IMC::FollowPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.target.assign("IVPGKMCCLAWOMGUGMTVDHDBVEUUBBINZYRZQUMKFPRDOBXVJJDJDXBABRRQJJXDYYUTWUGPEEDKSHPGMCZVJSISVOEFEKYJCGYQCKZXRLOIPAUXLSWGRIJQUAPDNNNAHVJHAULZA");
    tmp_tmp_msg_1_0.max_speed = 0.36073623536022337;
    tmp_tmp_msg_1_0.speed_units = 112U;
    tmp_tmp_msg_1_0.lat = 0.28121969215921927;
    tmp_tmp_msg_1_0.lon = 0.3152553479839145;
    tmp_tmp_msg_1_0.z = 0.05005148366677703;
    tmp_tmp_msg_1_0.z_units = 30U;
    tmp_tmp_msg_1_0.custom.assign("TSLJMYSGSPXYAPNFZUAHSBEXIKDNWBSXXYCCOKLFHYTHVLKPTNGTQEBFUJDYWDUZMRKNVDODDURIZDLGHNRFCIJIIAUFENBUMQHVWVJGLOMVXEIKCSPFCCQEWBVJIZYUWAC");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SessionStatus tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.sessid = 482717761U;
    tmp_tmp_msg_1_1.status = 132U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("AKEIWHGZEJQCPFBGYVDEPQOITPOSRPNPDGIBTSZTGPDLRCKIBSKOREOBUBGDEGSXAOGWJUCZUWTVHBVJHWMKSAURUZADGLDJRQTFLOQVPYCINVQFYXXUBHNRCNKWWBKTTXBMDNJFCBHJNXLXMZVOKUVNQISSDYRQZSQNNWYEED");
    tmp_msg_2.dest_man.assign("FQXXCMGIDHUTQUXQTFWPPMJGQSLZVOVYNGZUUTXHZZGMBPKKEFIFPGQIARGSTOCIHBJBDHHRIPZYWXTFSOGZIABDTYJKWNERYRLDUUOQXYMYJAUEPBDSBHVILZGXNNVQWLWACERKTVLRICNVSLUSJCUSCSMHYWZJNKETIANOLPOPFQRSJKVCVQJKKDLC");
    tmp_msg_2.conditions.assign("KVCJYDUWLYVGZZPYMYNKCUHIBHEOFUTDTERWNUAPNTZGOBXRJPKXYBLDRGZHUWHOOELZSAXJBZCJKJOVQHZGQVFYZNUXLNULVXSCLVRTVIEEFCVOZKPIJUHWWRRMSJNMAPORZDCGYXINMFEHXVWSCOAIKHSGTVCBDDITLQNKASQAMQCAPYWATYDEMEKQMSMFAMXSSFWEGGGIFPPBHJKTKLRTCQNJBIPDLP");
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
    msg.setTimeStamp(0.7848038336553975);
    msg.setSource(53944U);
    msg.setSourceEntity(18U);
    msg.setDestination(29443U);
    msg.setDestinationEntity(251U);
    msg.maneuver_id.assign("PKJREFIZMAOZYDZNWMGHNNTSZVDZLLLCPIOOMBLDQMFPGFEWEAGFUHOBWVRBJXWPHOMGJCBQUDFTABUDLDVGBQXDYEVXFXJREAKTDLXNJHUUKMMLPQXKVTSTEPCZIAZLEBNWCTIAZBWNEIIJZCVLFWGBSA");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("YQJGZQQZWLKEIBEKMENDIBRNCPUTZMJPESVOGLJSMAVUHIQLCVOEUKLBPDYBPDMHRFNCLCPQATYWTNBMMRZGVOUDERVLJSXENKKHNGCXZTTAJKAFVMOYKDRWYTHAESLOWLTUWJCSQKLTDM");
    msg.data.set(tmp_msg_0);
    IMC::UamRxFrame tmp_msg_1;
    tmp_msg_1.sys_src.assign("DSGFJKJNAZPLIAJIWCVODSOWSLELOMUUWLFXGCSVNCTNCSXRTENNXHQMETUMANSGTBWGCRUMKPXBAKQFZWVVZLKRTHHPYTQONFVRIBQQWKVZS");
    tmp_msg_1.sys_dst.assign("JVTPGLNDAREYXNITVWWJCVMGYUSDAIMZIUDCXFARDEFEYWFNEJIQLLRBZCQXVOWDPPHFDICZBJYTSNKTBDSXCLMNFGHUJYMRKUQQZPOKFJXFYQXYPMTHEWK");
    tmp_msg_1.flags = 110U;
    const signed char tmp_tmp_msg_1_0[] = {18, -21, 49, -16, -65, 27, -105, 114, 105, -124, 117, -35, 69, 59, 125, -68, -99, -26, -73, 55, -89, -23, 43, -117, 106, -97, -114, 99, 17, 76, 0, 80, -47, -3, 63, -63, 64, 12, -96, 37, 94, 34, -17, -69, 125, 58, 15, 76, -97, 64, -56, 7, 47, -91, -112, -82, 84, 36, -47, -93, -120, -5, -119, -15, 97, -2, -110, 120, 119, -123, 40, 39, 7, -74, 4, 124, 19, -103, 11, -107, -116, 75, -24, 43, -116, 102, -93, -56, -108, 101, -119, 105, -54, -94, -120, -12, -14, 67, -68, -117, -51, 86, 47, 114, -122, -85, -11, -40, -75, -34, -53, -75, 71, 122, -110, -99, 68, 74, 30, 123, -1, -4, -117, -50, -117, 55, 98, -1, -11, 90, 64, -41, 3, -117, 113, -101, 44, -104, -38, -16, 2, 55, 82, 39, 75};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::GetParametersXml tmp_msg_2;
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
    msg.setTimeStamp(0.8167706183872434);
    msg.setSource(48004U);
    msg.setSourceEntity(89U);
    msg.setDestination(63746U);
    msg.setDestinationEntity(221U);
    msg.maneuver_id.assign("VYRFHPUDNENMOQBPZQVRRWBAJHLHQMJVDGZIOCMSXOQKXJMXUTIOHZBKGRIIPNIWSMFGOHCLVEWVHIWWOZEOGFIYATAEJFQYBLVBHCFYYCELOUMZRNFAYCZPHZLUVNUDTWKNLYGJGPYJAZURRXURHOKMWQKDWPQLSRXFSCBBZNKKKXQUGTVPPIEMBSLBOWHK");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("BAGQISPLNWGWGVFYJTZESLPIJGOOXTRIACWCDMBTGOLG");
    tmp_msg_0.max_speed = 0.8409030049216424;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.lat = 0.15503164888023502;
    tmp_msg_0.lon = 0.43092469805453537;
    tmp_msg_0.z = 0.8197134782226911;
    tmp_msg_0.z_units = 9U;
    tmp_msg_0.custom.assign("HZVZFLWTHRGBGIBPBQDLKGDLRZOSLAJANWYIUAQOWXOCECIUWHUXNEOQJHCOCUMJQDKIAUGWAPYZANNIXHYFFABPN");
    msg.data.set(tmp_msg_0);
    IMC::Aborted tmp_msg_1;
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
    msg.setTimeStamp(0.45256964513029885);
    msg.setSource(3911U);
    msg.setSourceEntity(143U);
    msg.setDestination(47860U);
    msg.setDestinationEntity(56U);
    msg.maneuver_id.assign("SRRXWKFGLYDEEXEYZCQFBRHQPCGKSNGHJVGWIHNW");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 8778U;
    tmp_msg_0.custom.assign("QEHQFTJEWPMVWLWYXBWLKLNFDUTFLEIKRTBZFEVXYHYTPTNUTHOYPNMBTUDPXNTISBJLSRQGZGGYJOHZXZAIEXWLUQVIGDYAMQWXHICPQBQGCAEACHBRKZMOZNDCVZNBVYPDKMSWMJUCLAMKPUGSVECVIHADURVZDVOREDJRROFVJIUKYLDWYNHSAAASLXQTRJENNCIXSQFDCHWGMKOFOUZGJGQBJYZMSKEOKKGNXBRL");
    msg.data.set(tmp_msg_0);
    IMC::SmsStatus tmp_msg_1;
    tmp_msg_1.req_id = 51989U;
    tmp_msg_1.status = 107U;
    tmp_msg_1.info.assign("DRDOPNQSGSCAHAWIZPHGEIAKZKYLGTIWHFDREZBMDXYNWTWEFHMMOYZQBYQEGNJLFNAKWEILSTKGUVSALNNPXVSWQNZEVXKNMJCVEXIMJQZOUBCCAUTXOZU");
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
    msg.setTimeStamp(0.9675849810098732);
    msg.setSource(40106U);
    msg.setSourceEntity(248U);
    msg.setDestination(38531U);
    msg.setDestinationEntity(212U);
    msg.source_man.assign("KGDQZPTFQYLMYHTAKYNGXVTFGQWNMYCMEHWNCZSQNSUWXYLVZOYLTFJKMEGAYQFHIJKPUARUMOFUKBXQPUDGLWOZTIJIKMRFFJUSBKVEAHLXDQIHPUHRTMESNVGDWPJIAWRLBVPOSMRHFEKJTZYZLDLJUVBFDXHTQGSPTBVWSGNXZBWCACYIZDRNIBBCODLNGHFAL");
    msg.dest_man.assign("FVHDWGXQIOYGZGSZIMFLVLXLNWJNJHXXRAJFBNCDYCUSLTPKCTPLCFDZWCLMAPEAIEDVRZVKNGDUXTLJTVSOIZMUINGHCHOMQSIVWUCOUQLCKYPKQLRCWRHKDBVTJMZQMMGVYYFPSBHJERWDINXFUETIPGLFHYATUPBSZBBNJYMPAWJKNKAGYKAOTOESNVDRXRTQEUWIPXPQREXUAHEDTZBWFBNHXHOMJVBWQCDOS");
    msg.conditions.assign("RAKKWTBSSVDSNPNIYLHXUOTRFUDZDQFFTOZVQKFPUUPKITLTRVNHNEVCBHNSVRKCOCSDFQZQYIJGXNCEDZLWGQBDJSAYYBRZPDYYIMEOPCAPWBGAZZNGBCNTRIMQCHUTDWSKAJQLWZMSGTRFV");
    IMC::AcousticMessage tmp_msg_0;
    IMC::SetControlSurfaceDeflection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 178U;
    tmp_tmp_msg_0_0.angle = 0.8177678474529506;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6523671985201908);
    msg.setSource(29126U);
    msg.setSourceEntity(154U);
    msg.setDestination(48933U);
    msg.setDestinationEntity(49U);
    msg.source_man.assign("SBFJFXFRKMOCJVIAZOJTTESBWPXVXERLYQCPVVXRD");
    msg.dest_man.assign("WGEHJGZBUOBXMNLKHXVOLHJUKMNJNHJLJCVREDQRQITOPFQGJGTPBFASNECSXLWJMPIGOIPBDVPCJPOKQZDMDHXNCDCIAMEYGGTTKPDYJNAUDYTCNKKZHTVCBWASIQIUARUGQSZX");
    msg.conditions.assign("RLCKKMGUOHSIUVJWUWWFCSTZFNFSDBSZFTUGNEKYNBAPCMAUIJBNRHREXFQOVPTHZKJGDVXIXYOYJKMWWCAJEYQOWHDOWIJAETLSSVNRMOAHBPDSBMFRUMPNKBRZMQADEAVJTPCWYJQVUTDKATVJGRKHLDOCGSEHXITEYTCVCRZMRBLDVELGLLHXR");
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.803208798725437;
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
    msg.setTimeStamp(0.2024897287081776);
    msg.setSource(52876U);
    msg.setSourceEntity(25U);
    msg.setDestination(62663U);
    msg.setDestinationEntity(6U);
    msg.source_man.assign("QKTWPUOGTDDAJDSPOEDYCZPGYIMGJGHZDPUBIABYHTWIJHLNGRPLEMZFOVUWTJFQSOCHLCXJFDVVRNEUWZWZAHLPNSLNQCUHPSORNOQKGLQVWKFTDGJDVVTCZXBLYAWKCXJFZACSFYUWK");
    msg.dest_man.assign("RFLDFYBRYOZHQLTXAVHRITTWMZVTJDAUWCUISHPNTMPHUEWGOAZHLXXYODRCVHMOBDRGAUZNSCNXRTCSBOGAKOFRDPCFAZVMXCWBYGFNWJQUBMUESEYELIJJMSNFKPWGN");
    msg.conditions.assign("YDKWVVUTHAOUEVTIJGZQWGSZTOIEMHJEJHNCYIWKATIBBBKZPYVRVPQXCDUVVNJQRSOADKALIQMLXOWHAGIEBMOCTEFGWKGYFCMCXDNTSOEZKLYACNSYDOLSZVYPRPUHMDHGUJNPPEBEFVEXOEQJMSAMKA");

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
    msg.setTimeStamp(0.6543949215382866);
    msg.setSource(4499U);
    msg.setSourceEntity(181U);
    msg.setDestination(25631U);
    msg.setDestinationEntity(49U);
    msg.command = 31U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SWIRCYSVULNCGOHJKUPRB");
    tmp_msg_0.description.assign("PNONARYTAIRJEEOSDHXQRWLGRPUGYBUNCPOWJTJRCHSWLVMHACBGTKKXLVFDJOFSBJVKOLEYEMMZGAUVTSIZOHKAIKPQHYRVAOADQXBLOGNNYGXISNQIPFXDPZTQPXLGPIFCIQBWVBDRSETCHAMKDNXQUJZWHYSZDOBNFQIXMEZPDUCFMGJPTSVVECKIHCSTRZALMZNHMLTJLOKBANJCXYHCBLRJUVMMF");
    tmp_msg_0.vnamespace.assign("CEZZREPXNGJWMKTCEAPNBHNSLZGKHDSWWWSEJOURONLYJXBGDUMNUPCADSIPKMQKZJPVORJIPMOFQAQJKXITXFPFDSHFRRAQGCOMAVVLGUHENXEAVKBBND");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NPUISIWQRIBMGGLTMUFYBPAEEJFHLGVOZJJHTTWMZJLYRZQRFYLLJUTCYAOZHBGOUTLMKNDOMCOZKIBCERPGZKCXSVPBCKNWMVUSEZJRIZRSQPHXSKVDEQBHWWXRIWX");
    tmp_tmp_msg_0_0.value.assign("BKZHQMGPHSZVRRGFTDEMPLSNZKMDDLNCBQYWTSAVIFKHUXMGEQHZKFLGLUTJOCMGTIJUWIYAINTPPBVQSOYQRJDRDPCWSMASFXMOENAOCUCPRYRJGCEKDACZAOYBKFJPIKSDSBXSVWQKXLRLXQKXLDVJDPNBTGWARVEANHSXVQXAIQNOCPKVYPZIBLOCUFBMJGYWOVEIICJETHGGYVJHROUWTWHREUDAHBFUZZFENLZTIHFYBFWZYMTNL");
    tmp_tmp_msg_0_0.type = 241U;
    tmp_tmp_msg_0_0.access = 59U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UHYZRPYRNJRCSCOUVQKZOMLFMUBXUIHJWLLHQJVEUCDZRZIVZOTTPLSXOZSCHVITRHMWYJKWRUSSWZEXFXVAUTPAIPTDHIRSKXCRAAVVKMHMUG");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("NKBUYMRPXPVATNFIFAFTUNJLTXKMLENPZTCPIZRUXYJPHXHIIBUVAWAJFHZVWDFXNPKDSFLWZCUFWWRQVTUIYOVVGEYSIQDUMZSQBYZIEBKNRZBCHKMQQEGFMJYGESCMTCBNAFHFJLJGWIBBPMSZXHRWDMCHHPQYSUXRLDDONGWAVEKNLOGQSOHXPIZWLKQYGKEUMXMOTECVTYNSODUET");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 26742U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.9525673187429204;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.8016267805000447;
    tmp_tmp_tmp_msg_0_1_0.z = 0.7800039993317596;
    tmp_tmp_tmp_msg_0_1_0.z_units = 9U;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.5142592741977413;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.9871698603072386;
    tmp_tmp_tmp_msg_0_1_0.duration = 43964U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.39761311681513367;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 150U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.6652420686237726;
    tmp_tmp_tmp_msg_0_1_0.direction = 193U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("FFQDHCOSYKCRURHBNGSCTVYRGPPQLAMZEQKGGSIUZHRVNVXQSPMHWWLPAYDZLBOBNAHLWLMINVAKSMIKDXF");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::FormationEvaluation tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.type = 140U;
    tmp_tmp_tmp_msg_0_1_1.op = 34U;
    tmp_tmp_tmp_msg_0_1_1.err_mean = 0.9386349003784188;
    tmp_tmp_tmp_msg_0_1_1.dist_min_abs = 0.9819056218500384;
    tmp_tmp_tmp_msg_0_1_1.dist_min_mean = 0.8232359239591344;
    tmp_tmp_tmp_msg_0_1_1.roll_rate_mean = 0.8725937553318115;
    tmp_tmp_tmp_msg_0_1_1.time = 0.7343063262310223;
    IMC::FormationControlParams tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.action = 10U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lon_gain = 0.1525095104842027;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lat_gain = 0.6048184154475962;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.bond_thick = 0.45709584086682253;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lead_gain = 0.6129508623528899;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.deconfl_gain = 0.6047861998936224;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.accel_switch_gain = 0.45471798691498666;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.safe_dist = 0.3592254843333833;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.deconflict_offset = 0.3624892810525262;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.accel_safe_margin = 0.12970209744839434;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.accel_lim_x = 0.8874871117216881;
    tmp_tmp_tmp_msg_0_1_1.controlparams.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::Elevator tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.timeout = 38840U;
    tmp_tmp_tmp_msg_0_1_2.flags = 139U;
    tmp_tmp_tmp_msg_0_1_2.lat = 0.19598869446040934;
    tmp_tmp_tmp_msg_0_1_2.lon = 0.7050294563756277;
    tmp_tmp_tmp_msg_0_1_2.start_z = 0.07525608930332162;
    tmp_tmp_tmp_msg_0_1_2.start_z_units = 17U;
    tmp_tmp_tmp_msg_0_1_2.end_z = 0.8129836387790476;
    tmp_tmp_tmp_msg_0_1_2.end_z_units = 4U;
    tmp_tmp_tmp_msg_0_1_2.radius = 0.5966991675451483;
    tmp_tmp_tmp_msg_0_1_2.speed = 0.1353900582891132;
    tmp_tmp_tmp_msg_0_1_2.speed_units = 156U;
    tmp_tmp_tmp_msg_0_1_2.custom.assign("KSBAIJCZDNTPYIOLEVSLICNCJUKTHQP");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.04676679613772916);
    msg.setSource(63431U);
    msg.setSourceEntity(178U);
    msg.setDestination(56984U);
    msg.setDestinationEntity(67U);
    msg.command = 122U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WZBBZSGVAUCOURWRBAJZCHXCMYMLKMGQELSTLYKTSIUTUNWFSGIFJPYEJULTWGQNFIMEOQZXLPJYPREVXAXSIKELPUASHYBAPBENZFZDFMVWGKKYORYZNGYLSXINTIDOCBWIHXCMENUOTFYRBDWOHQFNVDNDKUUUFHCOOKPMSTVBJTPQPJJJXQ");
    tmp_msg_0.description.assign("MGILXWQUFQXAOJZDRABPXUEAMAIWKNEPIXRCGNYAWUGSUCAYQZFHUHCPMZPVUYILOHKHKCWCYDIVTFQXRZQDNLINLLVEYVAHMNJDSKIJRHXOQZOFMCEBBNGUSBMVW");
    tmp_msg_0.vnamespace.assign("UPZYTSCMFAZGCTACKGIYOSMVEONTOVRHPWLSPKOIBMXYGVWC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TVTEZAVVLUNVPFVSQTUNTGXFVEZONAXXBMGUHCKSLSOEMKIMXRDPDYJKCPDULEYDIWTIPDXEWQSDFCUKCYWAXYNIGEZDWUTCWFQPMLQWSKUTVWXHEHGQHZBVJYFVWJBRT");
    tmp_tmp_msg_0_0.value.assign("LQYHQORDJUBGLHGQJHLZAOGPVRGCAACEMFIZZBGFRXWDPNZMOHPSUWQPFKNVVYMXAXEITWMPIIUXCSIRS");
    tmp_tmp_msg_0_0.type = 180U;
    tmp_tmp_msg_0_0.access = 119U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ROQPZYGQMTETBFHPFEPFQCECZAPJWAGUTASVBRHGYRZJMVSXNVOOYKBXEHGUJNVIHZODVIAHAANYKAAPSUNEXZRX");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WFNINOYPRXAJZQUKZLASGDFWMEYWPEUGHOZQGCGKMRIFLFKUGOJVJQXHAKSIBNLDEIWIBIGCYQVHBIOXDPVBMBSVULTLTXKCOZTNQZTUFVDLWZQUJBPRQXLXKIRKFAASPVMZMNNPCGEUKMHSQTNWGCMDHYOZPOMOXWEHTJRUZLJKLFPHKCATAGTJBRIISEXVVOJTDZY");
    tmp_tmp_msg_0_1.dest_man.assign("LYCRUIJJYCFVVLCTMJWBBECKNFGYHXBAWPZFEEGVRJRZQJXKWUALIZUCV");
    tmp_tmp_msg_0_1.conditions.assign("GCWYRIUYPFECPLCDEXAGYTARQOFLVIFWYZMDHQYOGXWPTZVRCCADNVKEJNHLOOIFYWQPLBWTJEPIRZAERBFTKNPCOSQKOWIGZIEZFPDKAKVNLSWENAXABBQTZHDQTHUBLPIHTAOSVUQUVTJSGEWCJLNZJ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Distance tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.validity = 95U;
    IMC::BeamConfig tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.beam_width = 0.8242940803758069;
    tmp_tmp_tmp_msg_0_2_0.beam_height = 0.8240268805619062;
    tmp_tmp_msg_0_2.beam_config.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.value = 0.8063210789429734;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Magnetometer tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.timeout = 51812U;
    tmp_tmp_msg_0_3.lat = 0.9475323107357949;
    tmp_tmp_msg_0_3.lon = 0.8190052200860083;
    tmp_tmp_msg_0_3.z = 0.8976973842863213;
    tmp_tmp_msg_0_3.z_units = 169U;
    tmp_tmp_msg_0_3.speed = 0.29322095377770485;
    tmp_tmp_msg_0_3.speed_units = 12U;
    tmp_tmp_msg_0_3.bearing = 0.792455016389714;
    tmp_tmp_msg_0_3.width = 0.7687611872039726;
    tmp_tmp_msg_0_3.direction = 25U;
    tmp_tmp_msg_0_3.custom.assign("ZGKFXQEKSOAPIZCKFPWQXLNTQRDSCIGAWFLQSBXCFJWSMMRPIEMBNHPVMLFELMQCKDEDKTLLJXHALNQMSPVAHEDJGBC");
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
    msg.setTimeStamp(0.18928210016626335);
    msg.setSource(47062U);
    msg.setSourceEntity(180U);
    msg.setDestination(62089U);
    msg.setDestinationEntity(190U);
    msg.command = 178U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TYXRNANEWEKMOVVIXLZAOZUSYETDOBXLQIGJDEMYHHAAOMVZJMBVQKJQILMBAXTKLZJFVQJQFINGWSHQCGMGEOHNWYWFLPYLDCUIBHYKUHWYGOTGCAVUHSDOPZNJEGHDFTSOUBNRDVJUFRZARQCUZITSCJN");
    tmp_msg_0.description.assign("AJWUXYMRPARHBWSZZYXJEBCSXWWOEIQSCHYDWUPJVGQYIDQVIKAHNZOLADRRJKQLBURGGAMLQURVHKJSTNKPLPZINRAFZSKUNCQDETLMDIPCMLFPZQGOTFKSZDRLNRILXBIUNTUMXZCEFOECYDIPKMVOQFTUXIBSHGVGWURXVPVVINVGTTCYFDAZUAOJZDJABEYTBOCOFOFN");
    tmp_msg_0.vnamespace.assign("XDOPQZZJMRZXWGQQTUSIMPCEEJIQPYGXFGYYJMGUWAJKHENRZOMGYJKSKTEJSBVODZRLXYWHKCGQSXNDSBANAWVVXRXSPNCTSRVRSIONLKHHQKCLBVIL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BJJSMVCYZKNADWRRIFKVQBXDDYGNHLVULMZATUFDKVSALMJDIIMFUYZZUZVRHXNDOLGKQXWHQXBKONRLEWQPUVYCSEPEFRUTQOYHUQOGFBKSDXOJJQGLATEIWXXVNETPCGOUOIWYGOHHITLRAPRJJIOETPEAPGVLNMUQSENKFMJTXGYSIRCE");
    tmp_tmp_msg_0_0.value.assign("WMKLCLYNKONCEOAPDEBPKFVOZUGHXVCXZFQMDKQCHLKVPPMJAZVUTNDRRFGBWIVEXUUHBSIOPWLSFVHNQASOTXDZJXWMYPFEVOVOLOYGCBAWYUGBMXJYMUAPNTEJPSGZBSYTLXENWDETGOYCWTJORCDMBRRNWXIRGSAEQQCBIG");
    tmp_tmp_msg_0_0.type = 54U;
    tmp_tmp_msg_0_0.access = 43U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KTDVLKMXONVRRGZTJGPQWCUKGJVBUZLAATDNPLJNQKXBYVQMJMVCJYNHFJAUFSYEYIPZWGDRXTBKEUOHERNHXJGRLFEHAOUTBWPBWVOEQXMSIKDHMTNLCLXDNJFKQHAGGFEHYELZOALWVSIXRZOTTFNFWYKMKYVOURXIWSCKQXBCYDEZIYPBP");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("WFKRULIMSATBYRPKNXNDHWXEJPGJBUGFBEMWBSJGZVIDVEXAILUOVHYUVBDCBUEYZ");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 37880U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.5450651576057229;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.3914672947249246;
    tmp_tmp_tmp_msg_0_1_0.z = 0.03823584357714904;
    tmp_tmp_tmp_msg_0_1_0.z_units = 225U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6538758910865757;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 153U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("OIAUYFBXIINPHVGCFEXMWFLQWNPGWKE");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::AcousticOperation tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.op = 231U;
    tmp_tmp_tmp_msg_0_1_1.system.assign("RJCKUJSGLKXIHEGYHUITWIMSMDMVHVUMHYYDEASIQURZNJVAQWXDJPCO");
    tmp_tmp_tmp_msg_0_1_1.range = 0.2272788373144743;
    IMC::Current tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.value = 0.7156769526921083;
    tmp_tmp_tmp_msg_0_1_1.msg.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("FTCPENUCBIHQBVBXHWGACVNBHUOFXKMFP");
    tmp_tmp_msg_0_2.dest_man.assign("TYIJRFGGDWGXFSREDZEFNDJUGUPNULQPVPWZOBKBXLMNJMNJAHNFPIOTKCSYAXOAEGAUTCEJECMUMETDJEGICFFLJOWJHKIYCVHAFDVCXHOTISLQUORKPSQQVYQBSVDNWQYIHGKOXZJOBIGPSARTVRMVZHLDLBZIYWKDALNMRRW");
    tmp_tmp_msg_0_2.conditions.assign("YUWWUGEAVLEISVTETCPYXFBDCSZQQTFLKLPZNWDMYVOQBZWRKCKTMISZDOJXIKDKZPYKCMHVQPUGHWSVSOLEFIXZKJLOQRKKHDVRCMGGAANQNBFPZXUXSKNMXYXHLAOAYXUNGIBBGNWBRLWTXGORUFOEQMJHOAFPVZNHIQDR");
    IMC::OperationalLimits tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.mask = 189U;
    tmp_tmp_tmp_msg_0_2_0.max_depth = 0.9091119988686027;
    tmp_tmp_tmp_msg_0_2_0.min_altitude = 0.929270612383543;
    tmp_tmp_tmp_msg_0_2_0.max_altitude = 0.8667255307431561;
    tmp_tmp_tmp_msg_0_2_0.min_speed = 0.24751390130799855;
    tmp_tmp_tmp_msg_0_2_0.max_speed = 0.3612351589685021;
    tmp_tmp_tmp_msg_0_2_0.max_vrate = 0.6254084454635388;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.16874252328806172;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.9858171543811232;
    tmp_tmp_tmp_msg_0_2_0.orientation = 0.9140242216723764;
    tmp_tmp_tmp_msg_0_2_0.width = 0.7852530617593797;
    tmp_tmp_tmp_msg_0_2_0.length = 0.6459235627516072;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::LeaderState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.group_name.assign("OSQIYQHABBMUZFCJZPHYHNQVKTKCNLSATFHUFWJACPNQZSWCQFFJLONDLGJPQOEMWIIEQEXJMVULZGCKBASBPLKBCNRNWPJXZRWBGDSZUDMOJTZBSNNXFWUJLGKHCHIBVMXILGEDMTRTFBILYPETARPBSQIOYEPXRJHIGAGVZMNLFPGTXIHUAOQDXFNARSXAKVDYCWEQYMWTVMOHRRVKY");
    tmp_tmp_msg_0_3.op = 232U;
    tmp_tmp_msg_0_3.lat = 0.17758354875073556;
    tmp_tmp_msg_0_3.lon = 0.7331815202179213;
    tmp_tmp_msg_0_3.height = 0.8327734667496769;
    tmp_tmp_msg_0_3.x = 0.41160851865446013;
    tmp_tmp_msg_0_3.y = 0.8842253683688348;
    tmp_tmp_msg_0_3.z = 0.8145492977251904;
    tmp_tmp_msg_0_3.phi = 0.07145351665578614;
    tmp_tmp_msg_0_3.theta = 0.5320636574232408;
    tmp_tmp_msg_0_3.psi = 0.8838536843260353;
    tmp_tmp_msg_0_3.vx = 0.2959698548078086;
    tmp_tmp_msg_0_3.vy = 0.4275643484596696;
    tmp_tmp_msg_0_3.vz = 0.7728173092709599;
    tmp_tmp_msg_0_3.p = 0.4165290310284755;
    tmp_tmp_msg_0_3.q = 0.279306602581296;
    tmp_tmp_msg_0_3.r = 0.8699398576147818;
    tmp_tmp_msg_0_3.svx = 0.29408343762989164;
    tmp_tmp_msg_0_3.svy = 0.38378056482535217;
    tmp_tmp_msg_0_3.svz = 0.723669949458899;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.14689642693177574);
    msg.setSource(65470U);
    msg.setSourceEntity(199U);
    msg.setDestination(17638U);
    msg.setDestinationEntity(43U);
    msg.state = 89U;
    msg.plan_id.assign("CILVEGXKKJSTJLNQXPBDUOMWMKHCMIXENSPAMEODCRVHRHXUNYRYXNVKILTCAJFFBVZCRFGWYRZJDBYPTJGCPZBYHYEQIXUBOQLWGOVCIUZSEZZQRNUEIXTXVHFYYKJZEOZEWIEUHWKJAXOQUGADLQPSZLMWFBNEISRCMLPQMHAFSBBYPAFDSRGHCKCFJAUNTWQWDHODJN");
    msg.comm_level = 28U;

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
    msg.setTimeStamp(0.8123540519327913);
    msg.setSource(45690U);
    msg.setSourceEntity(216U);
    msg.setDestination(40287U);
    msg.setDestinationEntity(133U);
    msg.state = 212U;
    msg.plan_id.assign("QOTWNAAXXQMFDVLCASTUEXNHTYGRRVJCVYUWDIDNEPMBHEEOARWAXGGIPSBXVJGRNWZFDNIJDKEQCRIUYFBJSUQCZSBUTZPYPBNOIPLVJJIXGQCPALKODFUYRGMBLEXVYZNPRXRZLYZPDSTZACSCSFQVKSOHSINIGDKJIDZCDQOMEBNWLJLEOTZJGCHT");
    msg.comm_level = 64U;

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
    msg.setTimeStamp(0.8051034950935251);
    msg.setSource(26472U);
    msg.setSourceEntity(48U);
    msg.setDestination(32505U);
    msg.setDestinationEntity(66U);
    msg.state = 73U;
    msg.plan_id.assign("BQLSGAASOMIYMHLDWUOEYQGXVNHUTLIZVWXKTMKWUZTTFNERLNCPNQDAKOGULBVHZLMZIDIDTZWSFHBHJIQTOXQCPFQJVQ");
    msg.comm_level = 148U;

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
    msg.setTimeStamp(0.5282300535885307);
    msg.setSource(15652U);
    msg.setSourceEntity(184U);
    msg.setDestination(46537U);
    msg.setDestinationEntity(156U);
    msg.type = 170U;
    msg.op = 20U;
    msg.request_id = 39966U;
    msg.plan_id.assign("MDMJFIKCLCXVVBDVGIRJERZJQSSCOAAENLEBMZUCSQICHPBHXSXWDXZHGMGKUUEXWDKVLDAEPHIYSAFZSWNWTFNFPINFAZHVTNZTORRKOGMVTDSKZJCMBOVVNMSWQLGZJIYJWYQOFARKBDJPEONSUDXULCYBHP");
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 85U;
    tmp_msg_0.range = 0.13143130864750752;
    tmp_msg_0.acceptance = 66U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NMRNZPQZMKWSLSOYRUZTBMUDVGZYWDWWDJWWMKEDZGXZKLCGILGJJJRXZFUGGWQXHIXUFABTFXHOBRETVAQLEUIEUBOBUJCKIXQLPMXQSXIOVGNSSPVNNQECRTGBREVMSNP");

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
    msg.setTimeStamp(0.9576481160571593);
    msg.setSource(54542U);
    msg.setSourceEntity(232U);
    msg.setDestination(2560U);
    msg.setDestinationEntity(173U);
    msg.type = 197U;
    msg.op = 35U;
    msg.request_id = 9997U;
    msg.plan_id.assign("LQPHGZSEAAAJOQJTZWLAMIETOWFVOQEXIBWDPZBZJGXVHWXDDHBAMWXLGNFHERTEPSZVYTXYCVLIM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ESZJMZZFIXMJSJMQTQICBVIWWHAPUSQGZPSBLZICYTGTEWTYJRSBGOVHSPX");
    tmp_msg_0.sys_type = 152U;
    tmp_msg_0.owner = 36831U;
    tmp_msg_0.lat = 0.4150965054860858;
    tmp_msg_0.lon = 0.6284703490270171;
    tmp_msg_0.height = 0.71516214142703;
    tmp_msg_0.services.assign("HARRWYJPASHKJOKS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QPYZYZGUKDJIDAOF");

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
    msg.setTimeStamp(0.4603730946611343);
    msg.setSource(31995U);
    msg.setSourceEntity(176U);
    msg.setDestination(56636U);
    msg.setDestinationEntity(183U);
    msg.type = 19U;
    msg.op = 30U;
    msg.request_id = 12779U;
    msg.plan_id.assign("HBMXXRHJSRNEMBUYMIUBQSVCOGWQEZRSSGKNPFEFZGLXIXUTDYWAVZVMABKJIAPRKVJDXCPZIZVZUFEFWQKMJRSODZNFOGANPIAAZTYXWFH");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 139U;
    tmp_msg_0.reason = 97U;
    tmp_msg_0.value = 0.6419070146711642;
    tmp_msg_0.timestep = 0.16357637064308717;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YQBXLCJGPGVJXTTVRWAATEYOCYAHZOFQISJBBWMURTOFJEMKGMGIVKYHNNHUYVZBCQFVSGQXLIEHEMWNAPNWSLNYHNXTEDWHLOYFPZLCZVMWKUDXPPDKYVMURUIDDRBAEXKBYFCWRIKFVYMGUOCWFGLQSJSEKDFK");

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
    msg.setTimeStamp(0.012161001997096688);
    msg.setSource(51985U);
    msg.setSourceEntity(162U);
    msg.setDestination(1933U);
    msg.setDestinationEntity(11U);
    msg.plan_count = 29750U;
    msg.plan_size = 995635873U;
    msg.change_time = 0.44665400224121543;
    msg.change_sid = 55732U;
    msg.change_sname.assign("POZPIBZBCWAMGTARHVAECYNDZHVCILNIWKZOQJTXXMKVSXYOXEUHLBELWCYHFVAWXLMBOHVFLTJKDTZRJSYVAUPYKPVYWERDSQCMAUIMDCRMREFLDJAWIZOXHGSQQUWZETMYQZQX");
    const signed char tmp_msg_0[] = {26, -31, -114, 21, -103, 70, 108, 123, -102, -14, 73, -116, -122, 33, 20, 94, -42, 44, 72, -49, -82, 58, -98, 5, -40, -30, 54, -68, -114, 68, -72, 114, -98, -23, -98, -104, -107, -121, -75, 1, -105, 1, -51, 104, -46, 6, 26, -102, -123, -118, 104, 21, 69, 90, -110, -104, -114, 36, 121, 16, -4, 61, 58, -72, -81, 51, 76, 83, 58, -42, -71, 106, -61, 67, -50, -68, -111, 79, -109, 33, 52, -121, -10, -106, 27, -63, 16, 40, -121, -57, 53, -122, 118, 18, -109, -101, -68, 12, -40, -85, -22, 3, -68, -69, -127, -97, -58, 27, -7, -112, 16, -55, -96, -95, 125, -67, -97, -100, -15, 16, -5, 56, 31, 30, 0, 50, -109, -41, 33, 18, -43, 52, 26, -30, 69, 7, -25, 2, 35};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EJNMMCFJIBQXGVYOSASIDIAPFQEDLEOVAXCUJACTSNEKXMLNCHUZJLTNGCJHERBTRSKVARDTMSEWYAYXSKMOCJRSYDNBQWCDJQJNPHOWKBFGXHVKIMFBHTHGPXAQIGRXGNEXLLOGACQLTXHDRCDGLIKDZLZIBTNYQVVSZUTZYKYYVVTOUOAYPDHXUVEUTFFRLOEPLFJQHGRPKBIKFZWZSUBOPWCMUPFDRW");
    tmp_msg_1.plan_size = 18852U;
    tmp_msg_1.change_time = 0.898998940968829;
    tmp_msg_1.change_sid = 34425U;
    tmp_msg_1.change_sname.assign("IUFGEOQXCIQVPPKCITNACBTMSHAOEYMNQIJGMUINBBOIAOUTVLSWEZJWKUTGRUMYXWISXDVPPZHZCHFVEJLXRRGJBMNRMACEVRIQLZMLVEKHSITYMUZKWIXWJHLNFONGDYVDAQABBJNLAKDZTR");
    const signed char tmp_tmp_msg_1_0[] = {-23, -97, -33, 14, 8, 56, 64, -24, 114, -97, 95, 42, -26, -15, 28, 99, -77, -48, 24, 48, -29, 48, 5, -60, 53, -71, -27, 111, -77, 39, -2, -97, 51, -126, 74, -125, 52, 111, 57, -112, -74, 94, 82, 74, 24, 72, 99, -37, -33, -75, -74, 117, -102, 14, -26, 53, 9, -117, 49, -56, 14, 91, -66, 95, 76, 67, -32, -52, 88, 64, 11, -57, 65, 3, 88, 6, -87, -110, 8, 58, -51, -49, 80, -65, -90, -36, -110, -16, -46, -80, 49, 21, 41, 58, -76, 1, 23, 5, 32, -105, -78, 33, -12, -27, -95, 102, 61, 60, -59, 126, -9, -47, 5, 15, 102, 48, 122, -24, 124, -13, 68, -23, 51, 113, 118, 95, 104, -63, -19, 23, 12, -2, -11, 70, 37, 6, -115, 50, -35, -86, -17, -16, -21, -88, -109, 30, 120, 111, 15, -45, 3, 72, -103, -15, 114, 47, -88, -72, -124, 22, -103, -57, -28, 44, -60, -59, -124, -49, 29, 76, 39, -101, -30, -48, -82, -123, 102, -120, -91, 28, 11, -65, 2, -82, -56, 48, -109, -77, 85, 93, -29, -63, -104, 93, -42, -48, -119, 32, -35, 87, 66, -65, 27, -119, -2, 54, 26, -127, 96, 125, -97, -62, -9, -8, -127, 50, 80, -72, -64, 98, 72, -9, -25, 100, 122, -106, 21, 15, -56, 10, 19, 80, -54, -106, 7, 72, 116, -51, -117, 62, 51, 62, 61, 44, -95, 68, 32, -102, -68, -82, -95};
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
    msg.setTimeStamp(0.064084994996778);
    msg.setSource(20980U);
    msg.setSourceEntity(34U);
    msg.setDestination(63460U);
    msg.setDestinationEntity(207U);
    msg.plan_count = 5600U;
    msg.plan_size = 609278631U;
    msg.change_time = 0.6952485673428872;
    msg.change_sid = 28687U;
    msg.change_sname.assign("CYNRZTHCFQTVMVHVTRFSYM");
    const signed char tmp_msg_0[] = {-93, -107, -24, 53, -88, -96, -1, -26, -71, 50, 29, 16, -33, -45, 10, 48, 118, 23, -102, -107, -46, 16, -72, 79, -126, 86, -59, -54, 94, -126, 102, -32, -38, 35, -51, 2, 92, -47, -120, 21, 77, -94, -94, 11, -4, -72, -33, 7, 123, 1, 53, 26, -96, -88, 8, 62, 52, 84, 86, 101, 79, -37, -92, 86, -9, -27, -26, 41, 11, -77, 20, 64, 115, 35, -122, -65, -113, -99, 81, -40, -27, 49, 59, -50, 21, -90, -115, -82, 106, 43, 22, -14, -93, -84, 123, -79, -62, -16, 42, 78, -9, -36, -25, -2, -74, 67, -57, 97};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FUFSSFQCVZBHQFITNLXCQTVRWSIKTGZTZAYOYJMXQRDKPEZQUURNBTZEPYEOXPIFXCGKBGISSCMESQWWOFNVDBBMDSAEHVRNXUQACNRHOZOEU");
    tmp_msg_1.plan_size = 57921U;
    tmp_msg_1.change_time = 0.3800109996970462;
    tmp_msg_1.change_sid = 27996U;
    tmp_msg_1.change_sname.assign("LTZTGUCEHJSAAXJYSUCEELNSEEPHPDZWMJWCNJOKKWIOHBEGBQWASJHCQYGYUKPLLMFCXIONJGLNQNPXPIDCD");
    const signed char tmp_tmp_msg_1_0[] = {-53, 5, 61, -98, 82, 37, -105, 62, 66, -59, -109, -117, -89, 117, 39, 6, 28, 104, 105, 87, 119};
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
    msg.setTimeStamp(0.46826098568262353);
    msg.setSource(57837U);
    msg.setSourceEntity(82U);
    msg.setDestination(63649U);
    msg.setDestinationEntity(3U);
    msg.plan_count = 9840U;
    msg.plan_size = 2889079466U;
    msg.change_time = 0.6015602794088656;
    msg.change_sid = 24730U;
    msg.change_sname.assign("MTQZEOIDNJGPLYKAWBDBWNGKWRYXTBKUEVGXYGFTARICTVYIRISOHASPSZMFPNEDRHZJVBSNXIJBPXRTDCDBQVKASQZOAFOARZOXLJ");
    const signed char tmp_msg_0[] = {-116, 62, -82, 64, -90, -23, -61, 99, 119, -101, 90, -55, 116, 28, 85, -25, 25, -74, -116, 94, -27, 33, 106, -22, 86, 51, 12, -1, 71, 123, 13, -57, -121, -69, -81, 52, 99, 1, -77, 120, -45, -109, -126, -117, -24, -89, -63, 54, 92, 82, -81, 107, 21, -40, 114, -102, -70, 104, -114, 31, -37, -59, 81, 58, -14, 101, -41};
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
    msg.setTimeStamp(0.030113733061458148);
    msg.setSource(29555U);
    msg.setSourceEntity(200U);
    msg.setDestination(11748U);
    msg.setDestinationEntity(53U);
    msg.plan_id.assign("MMNFKHWBNPQGJABHUFKGWREJWNTFXQIEX");
    msg.plan_size = 11570U;
    msg.change_time = 0.2952313510786233;
    msg.change_sid = 41265U;
    msg.change_sname.assign("XYIQFPXOMBDHYRQEZFAHDZVSQHGBYANRRCQCUIUHFZYKNRJUGTGCLNJISZTDPTDMWXYXZWUOBKGZLNZDQBCOWKXBKKBDZPBOMWCLVUWPBEHIGOPJRUTPRCMJFWAPCGSFIPNHTGOLSZRFSNLUEJYBOBXDJWESIVPQNAHTCDAJOFOGPDYVSYALE");
    const signed char tmp_msg_0[] = {18, 33, -20, -119, 88, -95, 86, 58, 94, -23, -89, 90, 9, 94, -39, 98, -13, -55, 119, -12, -108, 32, -24, 30, -65, -101, -105, -96, -7, 6, -78, -33, -98, -81, -23, -92, -112, -11, -106, -2, -56, 94, 96, -118, 44, 14, -75, -128, -64, -107, -56, -86, 39, 27, -50, 88, -103, 52, 126, 5, -42, -29, -109, 30, -118, 106, 75, 119, -122, 18, -26, -40, 56, -67, 87, -49, 123, 24, 32, 26, 122, 64, 45, 115, -78, -17, -2, -123, 99, 21, -30, 103, 86, 45, 15, -61, -126, -10, 16, 29, 101, -19, -25, -40, 77, -9, -37, -40, -94, 36, -117, -31, 22, -24, 68, 86, 16, 17, 103, -123, -15};
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
    msg.setTimeStamp(0.9424778827735555);
    msg.setSource(61127U);
    msg.setSourceEntity(175U);
    msg.setDestination(2388U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("GZHRXULXWNPQQIHTJDAWBFJIIYMVZNCYOMNLDNRCLOMCZSNBHBUZAVRNAHERIQSWBLPDKVLAGQLXNKZQSHFEPRJPMKSOIMEGYNBHIECQTQOLXQZDEVFGVNWKOFWBUQXSTVFPPZKEJAOTSSFZMFMMOOUVRBYFGEZCSJXREVFGINHOKRGJZYHAWCVHXSYLALFRPBBGTXLYJDYWGRIUCJUMQTWJWTP");
    msg.plan_size = 34915U;
    msg.change_time = 0.46554870697983275;
    msg.change_sid = 9610U;
    msg.change_sname.assign("QWZVDYPJQZUTXKXGBPCZSZDBWITCIIHSWMFLVZRSWOSTJDPQHTRCYHUQYEKGPNYAFCJRCAFUEJXLMNKMCXZIBBBUJVHLJQZVVUAJNSHFLVGBESTEVIZAXNRICPRDDMFYAJFHKSQOVADFSROXAPXBWQTYWYHIJXEXKTSOTVGIOKNUMVTDDNYCEOFEOLEDPKLGZRMNHGXNUISA");
    const signed char tmp_msg_0[] = {-102, -84, -12, -44, 126, -87, 70, -4, 91, 90, 78, -25, -57, 110, -67, -55};
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
    msg.setTimeStamp(0.2710777696943558);
    msg.setSource(38977U);
    msg.setSourceEntity(206U);
    msg.setDestination(61594U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("VFWKLJWCAIQVGOLBIGKVMXJBMQBEMVCDHYYVFQAHNOEZDSLCKEGUJAKUZPYNFVZVGONSDNVCGGJAICHGDXQBAKEKYENKIWEIJWRZQVTDPXJDQ");
    msg.plan_size = 12890U;
    msg.change_time = 0.32032191578261726;
    msg.change_sid = 38882U;
    msg.change_sname.assign("HFCIYYKUDIYMTOMPKDYPZVYTIXEBUXACXFTEKEPJTQXMBRAROOJJLGADADLRIKQNVGRQMRGFFQSCRWUSKXDYDQEGXXSHWLGDNVPZVWLNLLIZCFUTLRUWHOGAVNTCQSUWFZMINPWGARCOZWOZSEDBDYPWQJWNMJZNUXFQKFHEPRTAHQAOCPUKLHXCHEJHMHBSBCTGTWLSVINXSVZSLDPGZHBEKZEJNPJFUBMFJTI");
    const signed char tmp_msg_0[] = {43, 44, 21, -103, 124, -78, 75, -51, -65, 38, 9, 38, 106, -15, 119, 24, 70, 11, 21, -96, 78, -22, 7, 7, -102, 101, 42, 96, -33, -128, -92, 87, 23, -88, 103, 109, -18, 14, -98, -80, -106, 12, 78, -45, 94, -57, 89, -70, 41, -77, 107, 47, 51, 70, 21, -108, -86, 31, 48, 17, 11, 23, -14, 74, 15, 124, -23, -104, -81, -22, -49, 44, -126, 1, -124, -59, 83, 25, 43, -26, 38, 88, -127, 41, -5, -51, -77, 55, 79, -50, -111, 4, -80, 8, 88, 76, 96, 120, 75, -111, -16, 119, 11, 103, 25, 67, 29, 73, 66, 3, -121, -31, 61, 29, -69, -97, 33, -104, 109, 114, -121, -88, 35, -45, 51, 87, -40, -105, -108, -34, 49, 124, -118, 58, -114, 66, 110, -111, -100, -3, 62, 35, -32, -13, 69, 39, 8, -21, -29, -26, -24, 88, -84, 114, 103, -79, -19, -71, -105, -106, -46, -109, 60, -61, -67, 26, 1, 35, -123, 47, 12, 52, 61, -55, 50, -78, -99, -71, -115, -42, 118, 121, -1, -18, 5, -23, 110, 35, 17, -26, -70, 104, -120, -112, 110, -92, -121, -60, -125, 66, 88, -24, -13, 92, 53, 27, -117, 26, -9, 66, -75, 53, -124, -27, -124, -5, 108};
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
    msg.setTimeStamp(0.6541061105977223);
    msg.setSource(30614U);
    msg.setSourceEntity(85U);
    msg.setDestination(18191U);
    msg.setDestinationEntity(157U);
    msg.type = 226U;
    msg.op = 76U;
    msg.request_id = 55287U;
    msg.plan_id.assign("YSVQHJRPGCSFUPXTZMMAPURUTJUOFRFQPIRVEAKLTWTEYODHBGLKSFMSNNIEKILAGGNPIXO");
    msg.flags = 29672U;
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.7703797751850645;
    tmp_msg_0.units = 0U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EASPEWXXYSDEFYKRTBXCYCAWKKKUZNNOPYVVFRURUSGJTNPMTMDDLDMZJGXRZBTLXJMMHJFOFOPWULNNKHFQYBJYNHSQPITHIULGQESYOGZBBQITZMPQZYBOZQRRBHGXJWBDVLBXLSRHFVDWFNIBFGUCUWHAIWYGTEYARDUHOMVEOVPNTCEGDZKKZCHCSDOLRCIEAKDQCLL");

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
    msg.setTimeStamp(0.7228660271645717);
    msg.setSource(30608U);
    msg.setSourceEntity(132U);
    msg.setDestination(58134U);
    msg.setDestinationEntity(84U);
    msg.type = 232U;
    msg.op = 166U;
    msg.request_id = 45915U;
    msg.plan_id.assign("NDYXXAYLCGHUGDUJFJAEQHLAIFHHYWOWNZSVLUGFQNDRAXZCEUIAGPKOTAWUHQLMBBMXSCJCDPTVPEIUBHWZFEGHTJJJCSVOMMIXPQODCVVUBXSGLOOLWZZ");
    msg.flags = 22550U;
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.23256468320628054;
    tmp_msg_0.bias_r = 0.6359246989117721;
    tmp_msg_0.cog = 0.2737159157593497;
    tmp_msg_0.cyaw = 0.5924668372797308;
    tmp_msg_0.lbl_rej_level = 0.5131995091207892;
    tmp_msg_0.gps_rej_level = 0.7860231908275719;
    tmp_msg_0.custom_x = 0.3444561569759642;
    tmp_msg_0.custom_y = 0.23363157762941023;
    tmp_msg_0.custom_z = 0.525085554144583;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DTONMHAVYAFDVLMRYUGUAQMFPXNZVHAOONRERLYIFYZFRNSTWIVJIBVAPCPNZGCMPDZYQNXCSBYHRGMMUSTLDLTEPGTOSSZDFMLKJBRCUKRWERJCMOGAQIIOZSYQUKQBDDBRHKCDFKBZQXLWKSIJAXJFEIVXNZVIPLSAFEOEGPEUBWGTZFWBJPHHMUVHXINE");

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
    msg.setTimeStamp(0.8183750535070503);
    msg.setSource(47852U);
    msg.setSourceEntity(106U);
    msg.setDestination(62237U);
    msg.setDestinationEntity(54U);
    msg.type = 148U;
    msg.op = 80U;
    msg.request_id = 35655U;
    msg.plan_id.assign("BSDENGBJJUJKXABENMSXVIDASDZEGRZLYEIDRHQTLOBMLVUYLHXAJWBKZIMTPPNPQFHKOUIRAGPXDYPUGPKVYCUALMMQXJDMRGTLFAJCRSVTRRFMUTIEPBZKFTPKTLOMFQFVNXWGHAOYQZKHZWVYAKYNCRXWXQWSHJGCOCLZQGSRMPOFEUJADUVJWGCZTICWGCKSCSXLXDFNNJ");
    msg.flags = 29748U;
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.5483553618285597;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AESNOOHTQSKJASRBLVGYSAYAGPXPOFHIWBKOMVMGLWAYEJLCTPSUGZDFNCBIFQIUMULSJIDVWBQUCFUWYOXILTWQSABNTWGPWDYTKYREODMXZGKFFODMZYHTIQGXDHRKIFPRODEKNEQQJVKPLPELJZPNEIRWXFTNZBPNVUEZZZNRYFLMJXXRTXAJMIVQYLHBCYZRXVBRFGIOUKCXGTNKHJEDNCM");

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
    msg.setTimeStamp(0.7643745571774763);
    msg.setSource(20001U);
    msg.setSourceEntity(8U);
    msg.setDestination(27668U);
    msg.setDestinationEntity(213U);
    msg.state = 131U;
    msg.plan_id.assign("GRLPIYBLTSIXAQEZJXBCQTSRSQCOSEHFYAHZGRSSLJUOMKLNIJCSRVCXZNGJKGNXIOFYAUGSVMVOEKBWEOYRSDNZHXFWYQPCBGICIEOLPWDPRHADEPWINRIJPHZ");
    msg.plan_eta = 2068898973;
    msg.plan_progress = 0.8113991137879405;
    msg.man_id.assign("AAEUIJYZCKWQRSIIGYIZXDAKNTHMSLSAULUCIVGLHSUBTXUNPZMDCQTVDTOGOXKKWRACFCTERLEMZGWMCBLZJLEODBLQXFYKJ");
    msg.man_type = 41351U;
    msg.man_eta = 1326048439;
    msg.last_outcome = 24U;

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
    msg.setTimeStamp(0.19320998121499622);
    msg.setSource(31222U);
    msg.setSourceEntity(62U);
    msg.setDestination(60539U);
    msg.setDestinationEntity(48U);
    msg.state = 164U;
    msg.plan_id.assign("EFYRXHAKQUOQODPIXFWWJXGT");
    msg.plan_eta = 921655809;
    msg.plan_progress = 0.5080814863119127;
    msg.man_id.assign("VUHXKNMWEFPTHTYDJCUSNMDYVNLMV");
    msg.man_type = 2496U;
    msg.man_eta = 846924526;
    msg.last_outcome = 172U;

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
    msg.setTimeStamp(0.007706528488623188);
    msg.setSource(63240U);
    msg.setSourceEntity(50U);
    msg.setDestination(63594U);
    msg.setDestinationEntity(182U);
    msg.state = 16U;
    msg.plan_id.assign("JDFIYTGAMCNLUGYQELTUBFNXRUQNNCHCZRYLZRSVBBYPBTVMLABAWEQTLFCWCOKCDTEYHZYMPIPZZKVRHMUKVRBJQQOIZUOBSHJNYGFSVIMSMNZDFNRDHJIUDZGQWHACZWLSXLAQXEERHQJJFGTOCWPHMPSOQJAWTVWHJTLNIFDEGIMHEFQXFEZTPYFALYVGYNUOKTVVOIPSCVSOAXKMDJXKIRRPUUODXBACXGEP");
    msg.plan_eta = 860257480;
    msg.plan_progress = 0.5759187782911945;
    msg.man_id.assign("QULIHQNHPRLZJEFRIXCPDWXXFWMSDCZJABJJRASSMDFGYZTOOAWFVELECIUMWKINIAELGGGXBSHVRODMLPZHRZAWIDEQNCQMXLKARSZGQYPVJRENUQFJKYLDTQPFAMYTCCVYYGAUASZNZWCHNJHUBQHXTXEOVRDPDBOYJWCSVTSJWTMUAZHNXBOIPVOPUNYVPOUSFGNQBNVFJWKCXTLBLBIBFMB");
    msg.man_type = 65434U;
    msg.man_eta = 1764045991;
    msg.last_outcome = 184U;

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
    msg.setTimeStamp(0.03970231358818388);
    msg.setSource(56914U);
    msg.setSourceEntity(67U);
    msg.setDestination(57713U);
    msg.setDestinationEntity(79U);
    msg.name.assign("LXXFAIFQLYEORZXLHBKFVAXHRZNUYNAGCVBLPQRNJCLPHWFOMLRPZEDMCJJGZDFWUXCTJXIOVSNUVIJPYNVIGWFUBYLMLCPRRRLPBPVTDIQTS");
    msg.value.assign("SXUZLUGDYEWZIQEBRARQQFUNXKOWNISPIKOZKIUACVCPYBSZUKLPWNSCVHXXYOAHRUMIEOTAOLQVPGCQAADPKLFPBHJUHYXHRSDSTQFWJTBBGBTLCIJGGPRNTSVWFVEOXLKUFGAZLPHTNYWKCEZNOVOASWTRDPBJFJMZENMILJYCMFMTPHHXWQTLFJXZNWJEKF");
    msg.type = 148U;
    msg.access = 182U;

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
    msg.setTimeStamp(0.8095544546927869);
    msg.setSource(41801U);
    msg.setSourceEntity(215U);
    msg.setDestination(61865U);
    msg.setDestinationEntity(86U);
    msg.name.assign("XUDMZMNKTAHCYYGTJPASUHHLKUHIFCWVECNONJKIGPDWUKQNZOKGPGQXZGSWXRLYXCGXJSRJFDSVDGWYNWYLPCVPNVCHHXZAOSSVNBFTYQMSDMJUCUGUEOLBJHVIUCRADFIWOHMLAITERTEQBSWOIYYZBOWRPLFVBLMIHZQ");
    msg.value.assign("DZYCODINJUDAUBZGSNRWZNNTAHQSXHPREYJQWIDXOODCLACMPVKFCXJLQACJQGHALHFGMFERZHCPFBYVXEIJDQPJFOTELRKQIWKVZBADVREVTMIMGRXSVNLGNTCRBQOXDEEVJKAPGBY");
    msg.type = 89U;
    msg.access = 219U;

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
    msg.setTimeStamp(0.30283648579612577);
    msg.setSource(40315U);
    msg.setSourceEntity(195U);
    msg.setDestination(62088U);
    msg.setDestinationEntity(101U);
    msg.name.assign("XHDVZKZXZDLVPKDENJOHUCIKNFDOQJGQICJDIYXJPNYMLZURWJYCNZFWOWZUQUSYJFFKMXVAICFLGMDYPSOVAHBHQSHWBFBTRRADSEDLQHUGLXBLSKXZALYPMBJTNRGNRMVAAEXTGGAUCNTMPTTRDIQFWFWCAYBJIEPEBCBWIOVQXPNCRYIL");
    msg.value.assign("WPYARXNPKNDSDZXYSJYJBTSFHSHLGFKSLMHOJZYKECKJGCCIFCIMYQOEADWWQQOXXTBUAFOMPAIELFU");
    msg.type = 207U;
    msg.access = 6U;

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
    msg.setTimeStamp(0.017694846679277454);
    msg.setSource(25906U);
    msg.setSourceEntity(44U);
    msg.setDestination(47059U);
    msg.setDestinationEntity(190U);
    msg.cmd = 154U;
    msg.op = 112U;
    msg.plan_id.assign("VBEFYZNNNLOXMGTHGKLYQBOXAVBJEDRJPYVRPRJCJKAGJEAUHUAEKUDIWMIQGRTFQTUNAIGVDEWHONDEHIDBYZFUVTVQFIVZKKHCJNOORICOKLYYVPQMMRRSHMTSPRWCDEPMCIWDGBPXSTPCTHQGBMFDUKBRCSPZIXXJUFNWALYLK");
    msg.params.assign("REWIXYYHCELEOAKOCVQBUAFRYSLRJDIPDRAGLVHNXSIHVIDXQXHAOECZIYHNOPMOBLTUUJPLRWFGNQGTXXDWUJSEHGDKTTKJLISCDMBMEXWEJGCQQGRFI");

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
    msg.setTimeStamp(0.8480963579347618);
    msg.setSource(38051U);
    msg.setSourceEntity(110U);
    msg.setDestination(6699U);
    msg.setDestinationEntity(46U);
    msg.cmd = 173U;
    msg.op = 6U;
    msg.plan_id.assign("OXWTNBXMLDNDJUXDIQNUEHKIPJZYETZYDLGXKMRPNPAUMSVFHUCVLKWMQRTYSJKVPMCPGQONGVDPKYKOIIISCXFVSAAWFJQIYETZAESYYHRLXMXLHHVCIBGQLKRPZHFIQNMEGFZOSSRGMBJQSTSPRKHQJVLWEVOFVCSWTBMTLHZBFRJDRJIVLBXXJGKWYFOBZBZEKHUPWAGCQMEXBNBRPNDTDOOCCDGDFIUWZHFYNWUWCTYE");
    msg.params.assign("BJRAZIQDJVLNDHFPGLFAZVKSXEJDPGQBXZTSORNSINOUZEHYIHPGJQBHTFHDWIAKCFTBTYSUZTAOJFXWDXJKBKMLYDYXBKUNVNKRZCKAQCSGHLWCJGYPTRDZBBURYIBLJFORMZDPUBNQASCVYWXHVVRNQDRNXQSTTINSLKURUMFU");

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
    msg.setTimeStamp(0.3817981471404246);
    msg.setSource(35037U);
    msg.setSourceEntity(32U);
    msg.setDestination(23276U);
    msg.setDestinationEntity(22U);
    msg.cmd = 107U;
    msg.op = 41U;
    msg.plan_id.assign("KFQTBIACZCDPTGRYOLOXCODMNQBKAGWEODUGMNJPRPZCTBFSHSVU");
    msg.params.assign("QTCGQECTCKEPJCNFKBKZHDVAIMODYSUGSBFCHUTFYEPBTXMVAOGFIIMQQHXKFANBVCI");

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
    msg.setTimeStamp(0.007009304974361363);
    msg.setSource(54662U);
    msg.setSourceEntity(250U);
    msg.setDestination(16161U);
    msg.setDestinationEntity(39U);
    msg.group_name.assign("TDSDKEKWIBLATNEFSIWVCDXTEVJZTVVWDTLANHCRIJADIXURPMGBHWOQZUJOFTQIMLBLWYRLUGPSVNTBXBXGNCJCNESWWPBQFFZAKBRAJOLAQBGJZHPTQOOYOHMPZAICGFHIEYZOZUYDOKSLHQPFYXHUYNBMGOWCRDSYYRRZJFSUYXMGGNUPESPFSVVRJPMVHCHRWXXNKVKWVUGPNCBJHYFOSEUKJCQIDMIKFKKMZRLEZ");
    msg.op = 78U;
    msg.lat = 0.8638421116216426;
    msg.lon = 0.6515221149146304;
    msg.height = 0.9817233964890776;
    msg.x = 0.38991996981908883;
    msg.y = 0.8586133770321981;
    msg.z = 0.4155494061216115;
    msg.phi = 0.27513402687150545;
    msg.theta = 0.03089816811418722;
    msg.psi = 0.8685415472394074;
    msg.vx = 0.2137292575312595;
    msg.vy = 0.9911600340325138;
    msg.vz = 0.831114861469762;
    msg.p = 0.4899615773974696;
    msg.q = 0.6244415748884508;
    msg.r = 0.5592973385548319;
    msg.svx = 0.660554811575062;
    msg.svy = 0.3489974298624994;
    msg.svz = 0.6851345169400068;

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
    msg.setTimeStamp(0.5008449600954232);
    msg.setSource(6637U);
    msg.setSourceEntity(32U);
    msg.setDestination(18033U);
    msg.setDestinationEntity(212U);
    msg.group_name.assign("QFAGUUEFBMCSXVYKSWJZHAUWBKJCBKKQVXPQENOLILZRICFNPURDDVVDSDAALUYJBJUSTUKQDWONLJNXPVWWAJCFZLWZLKERMUHSNARSCFUQCBUFONTGTBXGKSYREXIJCKHPRRYTGHNQHBOELHRTRXKZJNG");
    msg.op = 23U;
    msg.lat = 0.3579067893177854;
    msg.lon = 0.7631394049237319;
    msg.height = 0.8444863886725064;
    msg.x = 0.0033430831041966202;
    msg.y = 0.8633484706196128;
    msg.z = 0.24251335886616565;
    msg.phi = 0.8328371205015788;
    msg.theta = 0.2725092299015903;
    msg.psi = 0.2991924738995789;
    msg.vx = 0.5236174692890526;
    msg.vy = 0.25313003872905304;
    msg.vz = 0.08890373955708819;
    msg.p = 0.2548154527688756;
    msg.q = 0.13223597771117246;
    msg.r = 0.4928656927406264;
    msg.svx = 0.08325512209388775;
    msg.svy = 0.12603820911221097;
    msg.svz = 0.13122965128920816;

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
    msg.setTimeStamp(0.7458518595330057);
    msg.setSource(9799U);
    msg.setSourceEntity(40U);
    msg.setDestination(48433U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("ETEXCZISRAHSLJLRVHZNBVUEPKUSXQVDWYRNFDSKEJXCBCPZYFRJJUKCGFHSGUUKFLUAGIPLBXABXBTIXJBAOIKIGDNBR");
    msg.op = 1U;
    msg.lat = 0.6019515374892604;
    msg.lon = 0.06875024442773525;
    msg.height = 0.8450040032849737;
    msg.x = 0.6183321572024945;
    msg.y = 0.15974216803223185;
    msg.z = 0.17368591972160496;
    msg.phi = 0.15052339544672944;
    msg.theta = 0.4329536219255915;
    msg.psi = 0.03066801133165986;
    msg.vx = 0.3348422561624057;
    msg.vy = 0.07242392368884487;
    msg.vz = 0.7058527509919538;
    msg.p = 0.8049684904381185;
    msg.q = 0.20175839536017903;
    msg.r = 0.117134006505484;
    msg.svx = 0.3541040919845445;
    msg.svy = 0.07520488497367739;
    msg.svz = 0.1400473611275942;

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
    msg.setTimeStamp(0.4055719635379459);
    msg.setSource(36366U);
    msg.setSourceEntity(20U);
    msg.setDestination(32444U);
    msg.setDestinationEntity(125U);
    msg.plan_id.assign("DNVPJCQWHCKHGYCAWXYVOOCMSWQGQRDOJDGBYAIYNJSYNLZEFLMHKMSNRHFKBRTXZEMOPVIVDPSZDAMEIOMCPKSFGRSXTJIZEQCZNFOCWNKGTWBASKMNJERUJQXYVSTMSRFBFBPUHDAHQPUXGEXMWGCWFYVAAILHVLCTOBNDWTIGPPQKTKTHUVJEERSUKVJUWBZYOUWEBOZFXILUQQLIANUUTGLZXRLGVZIAB");
    msg.type = 238U;
    msg.properties = 75U;
    msg.durations.assign("GTGBHBNGSPJOKZDMAFEUAIKOGNXXGCKUQTMPEIHVPXLAPYXFXXNLRPRZWUFTZPBDVZXUFLESWNSLDJEQKHLRPJJDPKSYFCDMWOBGAYAHWJIGZRNNZJHTYOVJQHJGIIFESCWXYLNEQIFOBDNAZVWZKVRUDACMKMUSLYACMIYBLURIYRTDIBUDKEVQBSODTTMGHGTVTJWZKMVQOQPXMKCEFNBQCMRCFWPOSWUOHOXJS");
    msg.distances.assign("HPGIUQVBXAHDYDEQWSMHZSQZIHVOXREKUPLXYURPSZOUYXJMMUPFIGAHVTACCKTCGYSPJNBRKAPGLCIBJRQJRYRKJXBWFRGECYTZSRWDWAKOEUMSWWXOMQBRXPQZFNTZZYQXAFLKMTFMNYLDFHBEPSSCWBJOKGXGSYHBQCNVTEVADWTVNZLEJAINAYFCPOVUOBTKHLMITOKNTJD");
    msg.actions.assign("JEVUAAHWDVWUQQMTXSYZZFKROHHSTIOHYCKXEMMICMHQZXYMOLPPYXBDNFDXRWOFEB");
    msg.fuel.assign("IFGJFCWYZSGFPJPJBOVOYAYFUSTXOLMGZZGPVXMWPWQGWJPKSDBHXPYVBSGZFVGFLYCZWVSDVHHJMLJRQMFRCZOEZMADYDKTUQOLKMCCKNSBUCWWKTAYHZAXUDBARYWAOMTLONEXRDTULGEUMKHQWGQYCB");

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
    msg.setTimeStamp(0.4368758039877254);
    msg.setSource(53781U);
    msg.setSourceEntity(210U);
    msg.setDestination(51753U);
    msg.setDestinationEntity(91U);
    msg.plan_id.assign("JWQQSIMCPHVXKKTVMMCQTBCCXBVCXJGOVHEZHFRFAHJMZLDTBALMANNGXTAFZNNJRKJIIFAWKOEGUPGUEINUPTAXWKMOPSVBDSHQMQIFLDDEPTHRRRORUOPKXQNBKPLWJFXXYLXECKRRULPZEQDGAAOYEJUSNQIOUUOPLWEHKDHRGYZOYUSQNBVVTTWYYGJHFDSGAZIKYMHBWLZBNQDYYII");
    msg.type = 254U;
    msg.properties = 175U;
    msg.durations.assign("DCELOGHSENFKMZOUGKEZYIVHBAIOIVVXPXKTMGQEBFPPGKITATJGSZFJMPTITARCUMZSYOUCNLSRLQFHGDBCBWJESTGZQCWAAOPMPOMMFYQJHTLXKJXYNVTJYMXIUPDAUILCWYYRHKXQTFGAWIUQJSANBDJQSGZHIZNSHXVMHQRFFLRPWUNNTNSBWLBDXFROWDYBFDYOZOUHSJCLAZURRAVBEXEGYIVWPCCDEBEQWJKVPXLNK");
    msg.distances.assign("RUYJOQLABLTCNUXBAHQFEANJFEELIMLKTYODLVDQHDXCQKIXYCIVGTHTCTIKMRLUWUVNSVUBOWRYCDDBCBXZQTVUGUDAGIOPSCIRZOLWBEJNHIVYPPEFVUJLPPKNWTRPKUUWZNZWEYHJCDHZZNBMPCXXAQJPXSPQMOFAYPYTHXKEMDROEMLMGGYHIJAQKSOFRGWHGVMBRMNNNSDBMSAFBDTW");
    msg.actions.assign("SWNXFNXHJXKKWYFMVNALRYHDQTGBAWZZGJPCKSEMPDGWSRZWCPXEODMZUASTPYDQHMPNQKFLCJPJZAQKVFJUVOCUOJBATVUOLNDTERYEGPIASLXBVFVGGVHJIFWXITMLCUAJFBDXUEIOABLLIUWZTXIGEZYVT");
    msg.fuel.assign("YDFNMZWFKKZJGAKWKDECCDKCTVXNJDAYPVUYEFLGQCHMFABBEJHOVSRVRAIZNJXNQ");

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
    msg.setTimeStamp(0.5272251273207341);
    msg.setSource(20309U);
    msg.setSourceEntity(140U);
    msg.setDestination(64608U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("ZHLYBNHAYLVEMZQRKYJUODJOMWVZZMAEMTULMKEAXARPKGTYTDICWVRINMJSWISPRYLWKJHESFOCKPCFPDVCDXFQDIVUGQLJHAEIUKOBEZJGKMYHNBKDTSPVJSILBPVUQSSOWXYNZUQLAZBNEFMFGGGEDXFCXASJQZPTXPYRIBQRGILKNHMMUGZDTJWPXFCWNUHYXTQQGZTWELKCBNFNYCRHRGIATVDRAVXBRVJOHPBCUCHOWSSED");
    msg.type = 161U;
    msg.properties = 94U;
    msg.durations.assign("OJDCBSVTWAKNIMRELXVMDBROCLAXZPRNUASAJSIGPTVLLJFJSPQOQADRFFUMCMNSBXUNXSUPOBZAKCMEMTBFOCCLEVPRIPIKHZQOKHGJXPUAWITKEWBYHXOIHRDYGANZOYWUHEBLWNHROGXMTYSITFQJHDWGL");
    msg.distances.assign("GGTAPJMTSZRMDNEECVYLHLOTGVCJJAIMQK");
    msg.actions.assign("ITSSPJGYGMDQHEUSZWIMXGRDSYWODPOIANKTUZDWCELGOAJYCXUQLZJAAQCINHLJJQMELYCELBFEKXOWWAFRRVAAEYJRHHAEIBSNXRWGQUXKAMHPZQQNTPPDUFYWHOFNMUVPTKVUTZRRPRIACZLYKLGCDBHYYTSSICCFOKJGWNDVHFGBUMMTKXNFMEOBZLVSUGVECFVNHX");
    msg.fuel.assign("EXIZZJDRTSACNHWNJSQEWREBNUMVLLPVUYPRBPWCLFZVHMXYAMPBDMFQIOANGYYGMSKBYVEOYUEUGSEHDZIUQGUQBJHITHFORLRCSVAAHSNPGXOQTEMKPMDQCFJDSYWHRKWAQTDLJWJTDPNMBIKKOPJCZWQKTXFLZUDIOCVQFFVBGCTLEUYIZJOAYFSBGX");

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
    msg.setTimeStamp(0.6270266310140716);
    msg.setSource(40573U);
    msg.setSourceEntity(4U);
    msg.setDestination(11396U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.6414596181303874;
    msg.lon = 0.973638984751163;
    msg.depth = 0.8072160578088389;
    msg.roll = 0.2073860282574913;
    msg.pitch = 0.8021117305444996;
    msg.yaw = 0.9357289194804276;
    msg.rcp_time = 0.28024687510972157;
    msg.sid.assign("LEOCUZJVWKUGWQUTXXOGPYRSGOIIREJILHMCAQTPZKWKBPYWEZTZGJYBPURHRNJAMTGBJHNJXYXXPOD");
    msg.s_type = 19U;

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
    msg.setTimeStamp(0.5224687837409561);
    msg.setSource(65087U);
    msg.setSourceEntity(112U);
    msg.setDestination(39384U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.8514139097358068;
    msg.lon = 0.5082118176856887;
    msg.depth = 0.29746220738584617;
    msg.roll = 0.5603415139860275;
    msg.pitch = 0.9806895981520349;
    msg.yaw = 0.12357084602379054;
    msg.rcp_time = 0.614144893824976;
    msg.sid.assign("FQYYWVRLULOCUKBS");
    msg.s_type = 104U;

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
    msg.setTimeStamp(0.18210021830058043);
    msg.setSource(16277U);
    msg.setSourceEntity(231U);
    msg.setDestination(30742U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.3325421411896642;
    msg.lon = 0.05260291723220889;
    msg.depth = 0.4495718248429613;
    msg.roll = 0.289218765530762;
    msg.pitch = 0.3002927052724118;
    msg.yaw = 0.17497327174760569;
    msg.rcp_time = 0.5044372595084656;
    msg.sid.assign("WWMGGXJPDXOVGDWTVIAEDFQOJPBMKYLSKWXEMGMYOZIQZUYUHNN");
    msg.s_type = 82U;

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
    msg.setTimeStamp(0.7606009693500865);
    msg.setSource(24700U);
    msg.setSourceEntity(87U);
    msg.setDestination(63460U);
    msg.setDestinationEntity(178U);
    msg.id.assign("EFYTLQEEUCMEAVPSOK");
    msg.sensor_class.assign("HEGHWBMRCJZBPSDZBBPEGNSOLQKNRBFIROOZCNTHXLPQXJETWDVNGTBBEFAIRZIZOE");
    msg.lat = 0.010461013840191713;
    msg.lon = 0.33139109855053706;
    msg.alt = 0.8820020487827999;
    msg.heading = 0.23235910960801864;
    msg.data.assign("YFWXJYSSTQUMBUTHGFXPFRZYRRGTJECMPHEXHIPMRSWOGGWIJONWMKNLLYIVHAGPDHEURVKMLQBMYDZBQNLSLQDJZCGQWKTFBACZEQBUTAJFPDDSCTMGRWCUSJCBYVBDHRUIGEIZZVKYLAOFQDXXOQOFQNMPZMWFSXHRTQEEKNARE");

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
    msg.setTimeStamp(0.2722574734979445);
    msg.setSource(46451U);
    msg.setSourceEntity(189U);
    msg.setDestination(50955U);
    msg.setDestinationEntity(204U);
    msg.id.assign("OZTBJCTHMYXNULLXUFTYUVMVORJLQNNQOEAWLGPMDTYEKR");
    msg.sensor_class.assign("JLFOUGFDNOGJLURXLSCBLPCHWUSYJNUQXJHOYAJMUDDWWMPILUCOJHVXLHRFPZVOGGLHYVLKOAIKGONKPFZEAZLUYSPBRIDW");
    msg.lat = 0.05020544982648745;
    msg.lon = 0.26508427959022085;
    msg.alt = 0.7874786383154833;
    msg.heading = 0.9589084739823225;
    msg.data.assign("XFJWHTOVGOIMOVRPOUXPEZYLCDJVMUTDCKKJCRBUBOBZJBGPLSHYTXUDMHALQCIXFTRJSZIGJTPSNIMANZSUMAQIQWLSVANKYJUDGWIYPDKUAEDQBYQLBOAWFHHNRBLQ");

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
    msg.setTimeStamp(0.2871438822519008);
    msg.setSource(1140U);
    msg.setSourceEntity(80U);
    msg.setDestination(40210U);
    msg.setDestinationEntity(111U);
    msg.id.assign("ETXDYLWCWPHKDEDMSKLFPOGKEPXOPHOQYQYTPVKUZWTIYXMRXGMMNUUZDLWXMTIBWHBZARVDPVIJREPCUONGTYBYCSSFYZZIHUUFQEJLDAORGIMLHLBOKSVYNWGNWOXGAZGHHFVSUJJFRBOUQZJTCMFVBACOUNAECNFLECZQBTIMKXFGDQYTRBHAPPDNSBFANVQJSJJFEWIRQBAOXCLAZAXRUQHRMETIRZCSCHV");
    msg.sensor_class.assign("FDTBTDCVXULXNIVFFRQLUUNTQITFMTDROLASILPQHOEBKEGPCJZMDVYRYRXWSWOKVBGUCYOPAWXTDHLHHJXOYNFLCGZJDGEKPNBDUFYXXKZJDMIAQZJSHOVGKEQOUMSOLHAEWPDGRZRSYMGNOEZMEZTYJHY");
    msg.lat = 0.25454093223494856;
    msg.lon = 0.1044643254114852;
    msg.alt = 0.8052636891630027;
    msg.heading = 0.45006856613422697;
    msg.data.assign("WWZQLKOKIQRXHMTOZFLVBEFMGTUDYBJYEQEBDKNHEHSNFVVKILTJPAUPYIRMMJAOZCBJBMZTGOVFZFDCEQ");

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
    msg.setTimeStamp(0.8780376224581534);
    msg.setSource(5067U);
    msg.setSourceEntity(183U);
    msg.setDestination(55966U);
    msg.setDestinationEntity(123U);
    msg.id.assign("INADULHJAHAMDNUFYBKIYKIZP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IOVPSPMOWAQXEXLYMSHXOFWLCOFHIGEHJZKNSICXWQLIZAFZDZUTABOKCVJHFTM");
    tmp_msg_0.feature_type = 35U;
    tmp_msg_0.rgb_red = 134U;
    tmp_msg_0.rgb_green = 75U;
    tmp_msg_0.rgb_blue = 4U;
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
    msg.setTimeStamp(0.6835947795592117);
    msg.setSource(12738U);
    msg.setSourceEntity(214U);
    msg.setDestination(11337U);
    msg.setDestinationEntity(195U);
    msg.id.assign("KOJXRGIXSONNWFBZXLRESAILCRGZQAHUVQOAFKPNJDIIMIVVNKMCYGWOMLDATZTFTAFTZDIQVBPLFUFJAQFYYHRBGPCPIWJCSDDKLQULOD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AONDRSLBGLDVMZAWANTJXTCDFTPGGSIFNAIEUMBQNNDFYRMFKCTZXLBKSFSJCHAMFBURTEIRALXQVPXSZLEUGJIIUANNKWQLSTHQSDIUTYIJZXKOQDUZEFGWYLQAXKFMZCBVKTMTVFYEKXOGWZMHJZPWPSDBDURIKOHOEQPNNQVEKHRVDVRCYROLYJOKAJVWHIRGO");
    tmp_msg_0.feature_type = 64U;
    tmp_msg_0.rgb_red = 202U;
    tmp_msg_0.rgb_green = 242U;
    tmp_msg_0.rgb_blue = 127U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5280327688633908;
    tmp_tmp_msg_0_0.lon = 0.5733103555144227;
    tmp_tmp_msg_0_0.alt = 0.5721941333374618;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9733984465231413);
    msg.setSource(13906U);
    msg.setSourceEntity(122U);
    msg.setDestination(2553U);
    msg.setDestinationEntity(208U);
    msg.id.assign("OGWNTYXQWHLSXNVWTSCUTLJZAGSZDAHGRIMXNYHPUJZSPMAAFZDDEKG");

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
    msg.setTimeStamp(0.3128944706030845);
    msg.setSource(60219U);
    msg.setSourceEntity(131U);
    msg.setDestination(40485U);
    msg.setDestinationEntity(127U);
    msg.id.assign("CHXJZKEQSRKIRMSACM");
    msg.feature_type = 131U;
    msg.rgb_red = 210U;
    msg.rgb_green = 111U;
    msg.rgb_blue = 110U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.11487191329487745;
    tmp_msg_0.lon = 0.4353569720454168;
    tmp_msg_0.alt = 0.4759375099844516;
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
    msg.setTimeStamp(0.6640135602606413);
    msg.setSource(7606U);
    msg.setSourceEntity(218U);
    msg.setDestination(34240U);
    msg.setDestinationEntity(45U);
    msg.id.assign("GYHLVLZDIQGYISYJCMRVDWAEYSLVURNLUQNZGOENQMDYIWJMXEZJCWSUGNKXUOJATXZBWDFQMEVJNPEJDUHKATHBPDUBCWVFFKXSJTK");
    msg.feature_type = 140U;
    msg.rgb_red = 101U;
    msg.rgb_green = 223U;
    msg.rgb_blue = 198U;

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
    msg.setTimeStamp(0.6314879432744368);
    msg.setSource(58463U);
    msg.setSourceEntity(41U);
    msg.setDestination(59967U);
    msg.setDestinationEntity(102U);
    msg.id.assign("EOKUECQNHNVXNGVBXCIV");
    msg.feature_type = 53U;
    msg.rgb_red = 167U;
    msg.rgb_green = 209U;
    msg.rgb_blue = 32U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4457355008748496;
    tmp_msg_0.lon = 0.1121193601603635;
    tmp_msg_0.alt = 0.6412298439729558;
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
    msg.setTimeStamp(0.7963232304982396);
    msg.setSource(52172U);
    msg.setSourceEntity(61U);
    msg.setDestination(43577U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.7133945873971984;
    msg.lon = 0.7552203525547103;
    msg.alt = 0.818859617905502;

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
    msg.setTimeStamp(0.25128350556786094);
    msg.setSource(48006U);
    msg.setSourceEntity(239U);
    msg.setDestination(60147U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.9252704712030412;
    msg.lon = 0.3330555834457719;
    msg.alt = 0.9906105195092306;

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
    msg.setTimeStamp(0.2348981513678967);
    msg.setSource(60298U);
    msg.setSourceEntity(110U);
    msg.setDestination(20180U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.5053766329218267;
    msg.lon = 0.0954693157564015;
    msg.alt = 0.9894407833843354;

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
    msg.setTimeStamp(0.1281825914654975);
    msg.setSource(30747U);
    msg.setSourceEntity(176U);
    msg.setDestination(3810U);
    msg.setDestinationEntity(36U);
    msg.type = 245U;
    msg.id.assign("HCODLPCSBOUYHLPNJJVYUNIJIQWAAQTTZMOESYSLUSBLAYQWSCWKFORKNVVIGX");
    IMC::UamTxRange tmp_msg_0;
    tmp_msg_0.seq = 3598U;
    tmp_msg_0.sys_dst.assign("MAIGRAMVXWISDQQQXCGBGNPUMKPNBLILFUNQNKBJSZZKLFIANODSLVUSHSEURTCOMWWXJQFRSVOHWNTKODGHJBDCFWRVHCSZPKKQMEBLPSDAARNFXTPFPVRTGXCBYZEAVXIYFTUMGNCHYCGOFLDTXVLZGLTRYOOYFPAFZCWVEJMJKBTJHZENQYGXQDOUAIZEMEUBEHKCNEKYLJJWDXBDKCQWEAISRLDYRUGPMHBXUIOYWT");
    tmp_msg_0.timeout = 0.6471995939513298;
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
    msg.setTimeStamp(0.2590317269880603);
    msg.setSource(1075U);
    msg.setSourceEntity(125U);
    msg.setDestination(31328U);
    msg.setDestinationEntity(15U);
    msg.type = 17U;
    msg.id.assign("WYJPSYWOUSYCJULLIUJRLHVXXYLVHUMQRVRRXKIVMHTRIRGBOLDNPTCEDDTHXOMCQSTTUYLOZVLBAEAKTQBJANJCPBGPZOHCJWSAPOBF");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("PNZWZPMAPUZUZZLBZCWYRPEEJNZZIEVSOCGCWLOYAFXTGIBQJMUEYMSZJMPIFOTLOBQSUMVYUVWRUDKRORTGDSEQQCKXHODYXBICRYCON");
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
    msg.setTimeStamp(0.4497680778852523);
    msg.setSource(17829U);
    msg.setSourceEntity(250U);
    msg.setDestination(27282U);
    msg.setDestinationEntity(16U);
    msg.type = 127U;
    msg.id.assign("LWFVBRVHQBLFCHWUIWYQVDETTFNMILMNMKQXDYHGHVFOUAMOYGAOLJTYLZMDGWQUCICRMMKRJRSXANRBMMQTWGVSGDONCTIP");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.3001582939172053;
    tmp_msg_0.x = 0.2238290008991649;
    tmp_msg_0.y = 0.23209495549312753;
    tmp_msg_0.z = 0.317261724469307;
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
    msg.setTimeStamp(0.5245601578374811);
    msg.setSource(46674U);
    msg.setSourceEntity(158U);
    msg.setDestination(31258U);
    msg.setDestinationEntity(139U);
    msg.localname.assign("PJEYTPFQMWUXVHVAIJHHXFWMRQYSJFEDEZTNWYMIETRXSYOAITDYCNXNMALRNOVSEFGOSZJWWAMKWDQSVDFLENWSBSZWRVKIOBGINZEIBCXELAHGPICIBKOLBFCXYJKOVZRIGZGHLQAHUYHONODYNDQBOUJVMHMKFLMELFGUPVAUPSLPTJZRTP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FOSWYXRAGTRZQIEWDZTFRJNLGLSYUEFHKFNBNOYAHTMCVSXOHJMUPNSICYTZBEWSPKPBBRJPYLWHNOJFTHYKFMXNPLKTSPWCAVEBPDOVLSQZZGCMQICKZUBIGAARAOYQDXGQEKVPVCZYEWLNRCAXZISJDSMTLDFCFFUDUYOHMQJBRHAHK");
    tmp_msg_0.sys_type = 171U;
    tmp_msg_0.owner = 45447U;
    tmp_msg_0.lat = 0.6830487607873874;
    tmp_msg_0.lon = 0.6524868243494854;
    tmp_msg_0.height = 0.4508546912714504;
    tmp_msg_0.services.assign("RSLEQCZDVQZ");
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
    msg.setTimeStamp(0.9424465286199146);
    msg.setSource(12075U);
    msg.setSourceEntity(99U);
    msg.setDestination(52562U);
    msg.setDestinationEntity(8U);
    msg.localname.assign("SGEPDBVAHHAFGMXQMELHIMYYITBNDEGOYZUXJTRYWSWZNJLUGTAKSYTWVMHNGLGIQFSBSSBFYLDQOKRICXAPDKGEAIFQQCRWHBQHKKMALMLPZLMRDYXDONPQFK");

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
    msg.setTimeStamp(0.1378834156762604);
    msg.setSource(8135U);
    msg.setSourceEntity(208U);
    msg.setDestination(33447U);
    msg.setDestinationEntity(113U);
    msg.localname.assign("PYYAEHTVVLRZKBAOENVHWFTJDAXXKWPAWGDDCVAUHLFCNESBPMSOMQFRPRZYFDLNJPYFILQKYAZQXGTSTCLRLVKHUSVNRMSUMMWRWJGMFHMFZBUJNIGXWKWSWMUGHETENONQGDHLXHNVDBDPGLYLOBJOVOGUMTJIHCSOIQYVPWCSYDJBRXTMNIZKIRFTKPOUJZKQQCGZEBEPKRCAQIQDWSOAYBDITXCCUOAJQCTREPXXNUJ");

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
    msg.setTimeStamp(0.83835350920627);
    msg.setSource(26163U);
    msg.setSourceEntity(14U);
    msg.setDestination(11039U);
    msg.setDestinationEntity(27U);
    msg.timeline.assign("DZGNUOLSEVSIBPXRWCAWQPLECMWXKGHCAINBDUIENTYKDQOVSRXBOLBWNKVMDMGFKZMOMXKCABFQQNMTULLWTWJEQVIUL");
    msg.predicate.assign("CIHTFDJDYERVRDXTKVLYXSWQOPGIKFCMEQWAWAJAWPTVJXMGAGVOIIZIHFDYLCSXPYTLKHZAYKDZLLSLJCNEMFIFDJVMCGGTRCPVSKZRZXXBQSFDLJNRJTS");
    msg.attributes.assign("SQOPDRQBAVDZZEAHTDTILWDDZYCGQTTGAOBGZIZGNILWRNOVPJVSEFWAINVDJRNOCIPWBKRRCKEVKZVWTUMXJBGTZJUDAXFWZERHSOOUPAALOBULFWQBVGEOKIYMYPMDXYHRBHMEEYMNVJWILJYLNQCHSXNCATOMXQMPUFRCVSTMRYJBKYSHPBWTACUXNKBGPSXNQLMIDFQFHQEGKPCCLASXUJGESFKXMISJZTWFLZODFUHYHJLRIEC");

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
    msg.setTimeStamp(0.4103170339535981);
    msg.setSource(56282U);
    msg.setSourceEntity(74U);
    msg.setDestination(35842U);
    msg.setDestinationEntity(163U);
    msg.timeline.assign("QJXNSYBBGDPKETGMFQYZYAGAEFCTVFRIMLVXJTMWLVXBUYDBPNFMJVBTWJQKNVVSMPSCXGIKBMSZZSANDGKHQADDEHRJLY");
    msg.predicate.assign("LGFJSGPXQHVGJNVTSIEQZRMNIBJDFJRTGIUNGQRLJHYUGMCFCKWHQWMNIFVJDHSTNWYAKDYPUBTDXDQTFRTFMKATCGXLOWQGKLXMUCDHSPYFHLDIUEQJIHSXTAXANOEYFKNDVJXUJFBMRSSCVRRXZVNIIKDJEBLPOAYCZWZLPEANPOZWUPTOLEGPZYBXZEWTVVRHQBUCXALZHYMNALWCS");
    msg.attributes.assign("PAARXRDJWQWOKITYJGSAOIOLJDXEAHBEDEBUHMOFCGXVPULCBOCTYHDWCBNRIRS");

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
    msg.setTimeStamp(0.8814485644960303);
    msg.setSource(7198U);
    msg.setSourceEntity(156U);
    msg.setDestination(40798U);
    msg.setDestinationEntity(105U);
    msg.timeline.assign("THLGTALQDDZNREXIXRNCTMAQCZTZXLKTVHADMCLXCAYVMWULCSNOSDKGBSOWJKMQDSZJAJYLOYJJFAWYDOPJAYQJCQGCZHVOQFBUIXHBUDROHEPZNRIBMSIIULYPPPKFDEVSWSRXEKGGIRGKZFTMMRCYHJIXUFZEHIE");
    msg.predicate.assign("ITPBQRVODZNSZJYHXCVESJNYZLUIPWCUIJBMZUNQH");
    msg.attributes.assign("HFVPXZWLYMVQRBIIXNRSGKRQLRBSEEVVBPCXRFVIVUCJICWYWJIOPIHFDZWHAORSHFXGTQMZPRTNGMDGSDXZEXWNZSJFGPBQHYGHECSOTOYEOQRPUNGLCHNDJHMCWJMYXYHGKOABJQDUUMGXVFFPPKZELADSUAEJLCBBWTJNBSUWKNTCDKFDNBBZZVUAVOMIWGKTNTVQORFLEMAYRKPTALTLMXODJAYNKFYTODIZWZYQIISQKLEQMAKSXUC");

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
    msg.setTimeStamp(0.6498527299441103);
    msg.setSource(46450U);
    msg.setSourceEntity(104U);
    msg.setDestination(35019U);
    msg.setDestinationEntity(144U);
    msg.command = 48U;
    msg.goal_id.assign("NEWIIXMJFSQMADAEYECELMDJCVQMDJYXCSPIDXJSWFFZGRKALRBUKJVCGWIYBDYSSOXCQBTPMQBTOUOBYVQNVNHDJUFYCPKIXKZGZXHCIWAFJXBBFVTQHGOHPWQCLPLHOKAODUZIGAEEUG");
    msg.goal_xml.assign("OYMWNLTTMEBLRUAGNS");

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
    msg.setTimeStamp(0.8713028380432252);
    msg.setSource(50846U);
    msg.setSourceEntity(244U);
    msg.setDestination(7899U);
    msg.setDestinationEntity(56U);
    msg.command = 195U;
    msg.goal_id.assign("LQMJDPCFXURONIKMNFGTKPIESANBHAWTBYAYIGKVLRACOYXURCICURHDUFTAOVDTBBVQNLHMXAIGWYEZDSGIZRJQFYMKEKSFUBVBXOJEFCAVXQQUXDKNBMHWMWVLJDHGFJYKRPTCSYNXZEDOTRSEPONWLAZJIYGACLSXVPQODWJPFJSE");
    msg.goal_xml.assign("FQYVXQRXMMEHQXSPOFETITWIOFDLCQNAPYYBRIJDKVOYPKAPRNR");

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
    msg.setTimeStamp(0.894374554318547);
    msg.setSource(60176U);
    msg.setSourceEntity(108U);
    msg.setDestination(40283U);
    msg.setDestinationEntity(13U);
    msg.command = 167U;
    msg.goal_id.assign("ZRAMSHUQCHXJTTTQUJOGMEDMLZZKSLKMFVEIKPBQTIYTONRVDGALOSLVJIXXUMUIGYCIEGJROJDKFGQAOXBCHAYDMWLLLUBIFVWVJIFPEGFYWROJINDPBWWAVXOZHHTFASYQJFXEOIWEEEPWNORKDPDIYUFMGCSCJYPHYJNAZXQSBDHACSPWVGWQUMPQVKXUXUKVANNFOEYBZKQTTRGEMT");
    msg.goal_xml.assign("YFHVLAYMGEAWUJSOSZJNPEUMCWURCYQBSFZGAFOEJMAZZUCBGWSYVKDERIJDBSCDLEGWHHPPIFYKYWJTNODTNEGZDNQTNCQCDBYSIHCZQIMRONXAHGWPUVTRIQCZAOQMFQIJEJPDGAJXXDXRVPLHZKEKMRYNFLIDWQAPL");

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
    msg.setTimeStamp(0.5523175791447836);
    msg.setSource(42324U);
    msg.setSourceEntity(97U);
    msg.setDestination(33393U);
    msg.setDestinationEntity(114U);
    msg.op = 21U;
    msg.goal_id.assign("LZYXJCVGZPUTKBMQHDYDEVKQZRI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MELOJRWJDSBKOWNWGZPIXXHYGJBRQKNUVYWAXLDLYLUUAXNMROEQYNTKFIACPQ");
    tmp_msg_0.predicate.assign("ZSABSLYUWENFNKGJQBCFAMZWHQQRYGTUVIUHLJAMDZBWXVXCSZVIVSVMXXWKMNVTD");
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
    msg.setTimeStamp(0.24526298867068574);
    msg.setSource(58712U);
    msg.setSourceEntity(145U);
    msg.setDestination(59495U);
    msg.setDestinationEntity(139U);
    msg.op = 134U;
    msg.goal_id.assign("EHADAJIRANZFQFGHETOLBDQMNAHFJOTFKLPIMLWVZVNWMYPRDUWQKHXBQJOKOLNZCAOYQRGFHJUCSVRZLGKYIYTCXSTUBIWJZKNMHNHLZVDQSAWCRLDWTYXJRXIQNTNGMPNSQREEUFIEBYVMYFJGTDBJXGHRX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OXPKAILMQBQLLMMDNQYTFWHVRBDUDJTFSVEAUFQCWFMQFCNHYYZOJGUUSPZDPWYTKWDSBOWVGNEVFAZORCKYZTSIARTNGCURPKLZWAYREGKXVQGPPWSMOOXBSKXARGZVMXYRRUCFNCJYEHGHUSTKLDGTYBZCIULHXZNSSKETCQIHVQCEYHVAPVIELIDFVIWHISWEHBQOJBLZJJRDNEJAJNBBMXXKOXTOMHRUOJMQADZFFL");
    tmp_msg_0.predicate.assign("PRXGKROMMAHYNHIDDZCPRVMMOXFJHYCOJDXXNLUOUAUOULGZCJESAXGQYFANPMWBUKAKJIYQBJJMKDIGBTOTMHTRFPZLHPVIDRBKCNDYBSVRAPWEIQJNGQTISXWSEPABIYNZTMXOELJNRX");
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
    msg.setTimeStamp(0.31294145997214085);
    msg.setSource(32352U);
    msg.setSourceEntity(88U);
    msg.setDestination(17242U);
    msg.setDestinationEntity(251U);
    msg.op = 46U;
    msg.goal_id.assign("QVEJOSQJVAWTKDHYTDZBLRTBXQNELWFKEIDKPSLOLVMOXCPZWZXFOYBFVMKRNOIZYBYCEIMFPIPMHPPUWTZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NMZZUMHGCWUBOPXNPDNDGOBYSPUVMITYQWKYJMSQJHPWOQJHZJEMNDJUIZETWQYCRSEWTPHWYPBHTXLIDFIIKYXYFCFCQROZROIC");
    tmp_msg_0.predicate.assign("ZZLDROEVCSWEGSBYANQQIEDOTTMYPGUKDGQOZPXLXAIQIHBFNSCADCVOWZNLDYCCMRJFPCY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EQNQBAEJDDOBKSRYQELFGHMFCHZJCKJLCPEUXXBJCZHAXHUQIMTVTGPWHAHPNCYNWZNXPYALRRMXDMICHMNOFUOJFVDLTGIBQVYWMQRTUWTONFSYPRUBVTNXYRVZGUERNNIXJWUHHOIRWOLNJEAOQXQKVXQYTMIURBFCVWE");
    tmp_tmp_msg_0_0.attr_type = 251U;
    tmp_tmp_msg_0_0.min.assign("JOXLPQNAEZXECABJFMWLOZSMDNOQESMTEOVRSAZHWBYFKBKOTFCDHFLPXGWLNJIZLIKGBBRICNKXTINIDBUZGRWUFEXQUJHZVZEIDDOALTVYXOSFVCPYHQSWTHYKGEZIAGGSBNEOUKAYOHWF");
    tmp_tmp_msg_0_0.max.assign("QEWFLPXAKGXRFEIZXWZVGXVJTUGHSGUQFKHKYCSPWXHJ");
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
    msg.setTimeStamp(0.5246820561058217);
    msg.setSource(56654U);
    msg.setSourceEntity(38U);
    msg.setDestination(5733U);
    msg.setDestinationEntity(200U);
    msg.name.assign("LMRGEQJQEQETONDZUGRINSSMNZQPKDOZWKXOMYYKQMVPZCOPIJARNEJXWIKLUBDOBFGUNPLFRKGRRTZYSQXSZDILTTEBQTUVPKWDADPGBVFNXLSUWSHJHJVWFOZMKCILMIXYHVJBCSC");
    msg.attr_type = 172U;
    msg.min.assign("WKDZKYGBFGLIBMWJYLEV");
    msg.max.assign("SIBKLGJQPREBPWGDRFGIRKQVSNZSNTWIICLULKLTAYTBJUUKFOTQUXDT");

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
    msg.setTimeStamp(0.25694388628101805);
    msg.setSource(54876U);
    msg.setSourceEntity(173U);
    msg.setDestination(47401U);
    msg.setDestinationEntity(129U);
    msg.name.assign("XLSUDLNWIXJHPKZPNWQGKOOUKUQUBRGNXSHWAHSJQHEOCRQBEFUMQKOFJLFLWIDEPCOENQKPAWTIOMDUQTOZPVRQXLTIFYABVAYENSZWYRBOGVBZKPMWPKLGQTBNXUIBIYNGDIKSCANVDFCFTCVZHADSRVJMGTERKGTAZTYTIMEMVRPQGJSHYVFP");
    msg.attr_type = 56U;
    msg.min.assign("KVHYRUWHFELMIZYLTHWQMOUBONAEUHPDQSQIFFMWUSKXKENWORCAPOMXSAAKIUHFEXBJXTERNEYPZGADUFTNUJNIAGWVMIVDBYRBYOCWQUUZABEJNSEGVJQTROIYJDIVNQCWPJCDZGLJCPVLGPFOJDXGVCLCKKQG");
    msg.max.assign("VNJIDIWMVSARGEFQYARPQHOINZYPJEFYKNYMVGCMWWEDHKXOWFZGHHBLUKCISVQTOBFSTDSMZIBGNAEAKGVOOXZRURRFUIBMKZAPHMNFMWOCJXZCDCPKGAUBYWMFKHJDOIRHQYDXWYPVZSBHCNCGVXYRXSTIPGXJDEEYFJSLUQXCABEZEVTSLOIFQVQSRBB");

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
    msg.setTimeStamp(0.3851023248174106);
    msg.setSource(28115U);
    msg.setSourceEntity(13U);
    msg.setDestination(16355U);
    msg.setDestinationEntity(124U);
    msg.name.assign("PPIZICVGYWQEJPFDWLSYCDZIMHTPANUWMUHVGBGFXNOKRJFCTRJGHHXTAEVDECULGHQMYIBZZSTBJDUZFWQNLNBRALFACMTQSHSPKXLIGFWBHISXOWBZGQVEMERQNOOYHF");
    msg.attr_type = 16U;
    msg.min.assign("TPRPLWGOZEQNCRHXDVNQJTRBNBGCEJCULDQLUGOYIK");
    msg.max.assign("IEPQPJTOJDNMUQJJAHTZCDBXGDULLSLAXHUSUYRHMTZOMAXOFTPOBRWVATYNPYTDKHBTDKBEGJDUERSYWVCMVWOPLZSYTMSQFRLHJAXBMENCIYVSOUNDGNMPMLXAQXRWWVICRCWGGMDKCYSCEAKLXEJFGARGXFXOA");

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
    msg.setTimeStamp(0.603100972500188);
    msg.setSource(16525U);
    msg.setSourceEntity(195U);
    msg.setDestination(55713U);
    msg.setDestinationEntity(17U);
    msg.timeline.assign("HTALIEDFIZUOBIUKVGENLRAHLEQHADDWLZONPOCQXQJSGNGJTYNHTMUGQMUPYTEQXSOFUVLQEQAMQHFRSXOLEVXADDDFQWGJPZBORCGURSDUPPCCVSCFYGIJSN");
    msg.predicate.assign("HEWWWJVRIBBORQUOUJIHBYBMTJEZRKQILDVRBTIJYOLOACGM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BQDUBLQGTHKPBNNXSTZDPPHWAOCYTJAMV");
    tmp_msg_0.attr_type = 221U;
    tmp_msg_0.min.assign("USTRWKDCAEKIUCZQUDSKCTYJMNHHGKSRBGPQEMTZVAYHRNITOBOOOKGCVUZMWDPOYFXSEXYYNHZLWMMMOINMTNSDTVQLJMCRNZNAYFAIIPPBEEXALYDWXKLADKUGSPXIPLWJEHCIXRLWFCXVGTQJUAIWFBDCNFRDPFFKKOVPBGAFLQJZWSRHYMG");
    tmp_msg_0.max.assign("GAITQEFIGZXWISGISHAFJNUFUDOZLMMWBGBLSDHOBCFGVMINODPZLCHHDSAKLFTBXGIPVGBYTJJSUMYTKRJOKRKNSEMVNCCPUNFDCUZBXMATWPVMREENHUPRMVLQELLRCNXQRSDCXSEPZXCLYAJKYRQBIHOVZZKYUAN");
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
    msg.setTimeStamp(0.47661851489289686);
    msg.setSource(8174U);
    msg.setSourceEntity(198U);
    msg.setDestination(47579U);
    msg.setDestinationEntity(239U);
    msg.timeline.assign("IQTNOBGUQBKTRJDUNGXPGPVDYGHIMTMXTAQSPWMYWRSHXPMXOUKQLCLGYUPYEWDTPBHQA");
    msg.predicate.assign("AWDXNXRVYAPHQSLMYOURUNCOTNTPUOSJQRUEPOAWHFANQARMQPLWCLSCYFZBRUSQITIJYMUQKQITKNGLHKHMSMUEKBCTFZNKBAED");

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
    msg.setTimeStamp(0.025095196280708887);
    msg.setSource(52105U);
    msg.setSourceEntity(158U);
    msg.setDestination(11147U);
    msg.setDestinationEntity(246U);
    msg.timeline.assign("JRFXIDRWNAHXRZCWYTBWIESQKCROPLEPZGUCFNKUWVSMUHMLALIYXUBTFIYKUFKMRJNPJRTKYNSKEORILVMEHLAEZZZLGQWQJWHUOFEEVTDEZVJHTICVUTAANPAHCVW");
    msg.predicate.assign("WYUBAZRIGBMSGTTDVGIBFHIGQDAEAPCLUEGJXQTCLSZYZISAKNPWQNRRXIHMJOJQOWKUEDHEPYYZUVESIMSKRFNLWRCODMDQQOWGVZFCISJMAKTFX");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MTEKSIIVSKBNVYFMTSJKZBYTRIXBFZKGXVVKWGPIQWBPUPTEQEZMUZNXHLGADPNCCTYRHLDOETAYODKFQOHIHMLMQKMPPADEERGSUZHKGQRVLJCEOJUICNXGJODIJMGSLBZGZFTQVXUXQRXDAEQZTZXKWLCSXNHYBQAPOHNBWVUJPAJNWVEGMWMJMHWOYFWPSHJCTCRDOJLSDCYBBVQFRNSRLURTBUHFWACGFINXIVAFLYDUNRDKZ");
    tmp_msg_0.attr_type = 201U;
    tmp_msg_0.min.assign("PNUKIEQMPETBKYMLWZQTUMKFVAXNTKCIHJQCABWPNWFUMIEVDGBYYRWBHLXUSDHESDVJHUXHPNIQARCPOIFWSNXZWMHRTEMLJZVFJIEKUFYRVRLXUAAZTHGYYPVDROZJEZFOFVQKPJLBVSLAFYDSNECXTNNFOPVWOBZMQNADE");
    tmp_msg_0.max.assign("RVBKAVRFMEDGTVGWCMXEFCRIPHAGTSITHUNGXOWVIYXTONOTYKWICWEVEIMDJNLOMDQGLNUJQBDCQHZLOJPFOIEQWVHDJEWNJKLUWTIZMHUEXNCPBKKMYTBRBFTYFXDKDCRESUZCQVWXJOCCJAYSUENSQPLFYHQUUBZUSVDNGFLRLLYSIFQKUZZKRXHKATMVGGBGFDHOPBAOJPMBXQZSTXDSYQALSYYNMRJREHJPONHAAWVAXAICRIZPFW");
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
    msg.setTimeStamp(0.5823712921736325);
    msg.setSource(36896U);
    msg.setSourceEntity(0U);
    msg.setDestination(39349U);
    msg.setDestinationEntity(75U);
    msg.reactor.assign("ARMIVNQRWDWACCGQAFYMSCQMHGHVKGKGTLBTJQYWZVNKCPIPZATLMXHBPDWOVWKHRTSODLKTDUSWBFAZXALUUBWUJMYIHRJSOVXCCGBPNTLBDCORNZQYEGIXFEGXZKGXAWVUQEGEQUYYOESPRBUGZEFPQNDSLBENONJUJJPVRBLFPXEOUNKACRAIFDPJLASWFHRYZITMYYEQQMPLZTOMDWKBXHFCCXODMKEJSVNSHJMZJINDHIRVVKZFXO");

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
    msg.setTimeStamp(0.21255700550353718);
    msg.setSource(51988U);
    msg.setSourceEntity(153U);
    msg.setDestination(26959U);
    msg.setDestinationEntity(136U);
    msg.reactor.assign("LFZKVNMRYUJSSHOMBNMEZEOUWMKAUOTVPHYHJWWRXAIJJQJVIQZYDCQODSJTULGMRSBHDNQIYKQGFHHGPLWFUIEMTCPQBLWOOHHGUWVMMXVEVSBXQICZWZRNXFRLIATAEENJSZZXDWYGRCXORKFDMYCPGBPVROQLBMIVKQKNFGVYTAGTRYUBETXCCBPX");

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
    msg.setTimeStamp(0.7505759815920404);
    msg.setSource(7468U);
    msg.setSourceEntity(19U);
    msg.setDestination(31696U);
    msg.setDestinationEntity(146U);
    msg.reactor.assign("LZDXCZARCULTTDVAQUSUQAGJMKYHXDPOHYXXLRUSQNOVTPGCTMFEPEAGLHIYZIXJHPIFVNLRPEZSIKREHPOSWUVZXMOBHVWSPBECCBVIOKHTGBMJFTVWNCXRBYHFFDYWFFYOIFAQMNGDXVBIIEGQMRJWGEZKAKEZYDOHJUCSNJETGCUBKZUVNJJXRWOKBJZCXAQHISOQOTAPDLDKLWKSNA");

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
    msg.setTimeStamp(0.018565107581337337);
    msg.setSource(10730U);
    msg.setSourceEntity(30U);
    msg.setDestination(52696U);
    msg.setDestinationEntity(219U);
    msg.topic.assign("TCAIWRFCZJMMXCQGS");
    msg.data.assign("EYCWTNPJGLFAPQEQMLYTEZPLVVVPBLRTPTURZPKLLRQZMXDESZVBBWMJTOQIOYODCYLISDUXFIJGOOZDUYCYFJENJPOGGMGXQTGOJWHBCADREUSCPMKYVWTRNBDMQSXZMHWBACASQFIFIZFZTUKNFHHXZFLTCPWHAIIJQNKCYJP");

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
    msg.setTimeStamp(0.022423734660439343);
    msg.setSource(46757U);
    msg.setSourceEntity(85U);
    msg.setDestination(5153U);
    msg.setDestinationEntity(230U);
    msg.topic.assign("KCDLSWDOPQLSUHCZCGVPHUZDGWFVGRJVQFEFTNPXFOPYTJOB");
    msg.data.assign("XQKBCUGUYDNZZZSDHHNEJFWHWFMASKQLGOWIZMQEFHNEKYWROPTSHFBFTUEGBCGXRFOIKITQDNNOJKLIQPXYCFEYZLMJPPMGTLVBVAEWIFDBKHVFYAQKBAAMRVBGDZPPRJCXJLPAVJAYADXXOEXWSVSYZTTWMDDGNQVUXGEN");

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
    msg.setTimeStamp(0.36805418033211934);
    msg.setSource(11278U);
    msg.setSourceEntity(233U);
    msg.setDestination(9375U);
    msg.setDestinationEntity(237U);
    msg.topic.assign("IKDYGSPVGQQRMSLSLKVZQNQBNUJNKRYMRQJRJTGKCFERACLZZDCRHOWGPDTKQUVTNMCDEEUYHIOPEAWSYUKEOIZPANANYEUHK");
    msg.data.assign("LACLNIVXDZDAOBITYWPZNTUGQPAAQGUISXGEIDONHOYYSDYUWVFBSLWBCEDXOECPSTVCFCNMHOPEKDUWYIKCYRKGHBINXFVJWREKNCVSUBXUBNPLNPFHVGQRLMJMTKRKIQJBMETPTCMNLWQGEZJFZKOXVGFBOCEUYHMSSFKZLHCRFWYJKBARODOLMVWHJTMJQDYYAPPGEU");

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
    msg.setTimeStamp(0.8792554892620695);
    msg.setSource(64241U);
    msg.setSourceEntity(2U);
    msg.setDestination(11283U);
    msg.setDestinationEntity(157U);
    msg.frameid = 60U;
    const signed char tmp_msg_0[] = {19, -118, -112, -52, -61, 60, 54, 43, 20, 67, -101, -106, 28, 78, -89, 62, -33, -40, -60, -80, -13, 30, 35, -60, -47, -92, 125, -109, 85, 120, 46, 18, 84, 80, -102, 24, -111, 79, 28, -90, 122, 74, -68, -124, -124, 40, 47, -30, -4, -37, 18, 125, -36, 24, 94, -93, 61, -17, 21, 57, -62, 31, 64, 50, -36, -85, -113, -75, -26, -90, 32, 119, 56, -13, 89, 124, -55, 26, -105, 116, 78, -121, 40, -35, -49, 0, 37, -39, 41, 121, -65, -89, 15, 73, 3, 7, 125, -109, -21, 106, 7, 23, 72, 46, 9, -17, 51, -89, 23, 123, -50, -10, 102, -110, -101, -55, 91, 83, -26, 92, 8, -25, 111, -71, 15, 70, -10, 87, -56, -22, 9, 103, 16, -43, 98, 92, -37, 56, -70, -101, -116, 50, 44, 102, 109, 10, 121, -11, 57, 86, 86, 29, -56, 108, -121, 26, -99, -49, -45, -125, 32, 90, -66, 113, 66, -32, 23, 18, 77, -21, 95, 49, -56, -7, -7, -77, 12, 64, -117, -18, 100, -65, 95, 74, 80, -95, -23, -17, 9, -22, -29, -43, -44, -40, 109, 36, 58, -105, 50, 64, -103, -111, -63, 83, 14, -72};
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
    msg.setTimeStamp(0.029016619256868936);
    msg.setSource(43850U);
    msg.setSourceEntity(162U);
    msg.setDestination(4966U);
    msg.setDestinationEntity(3U);
    msg.frameid = 8U;
    const signed char tmp_msg_0[] = {27, 44, -108, 4, -82, -123, -68, -98, 85, 5, -12, -112, 108, 35, -61, 4, -84, -42, -119, -23, -93, 42, 122, 46, 4, -88, 88, -42, 81, -99, -23, 54, -73, 43, 73, 90, 89, -30, 124, -33, -14, 117, 90, 44, 60, 33, -31, 72, 108, 71, -72, 12, -9, -57, -48, 109, 30, 72, -57, 120, -86, -108, -20, 1, 91, -61, 105, -60, 49, -40, -100, 99, 107, 95, 64, -72, -52, 0, -97, 126, -2, -1, 51, -91, 38, 117, -68, -82, 121, -63, 7, 12, 85, 15, 124, 121, 104, -85, -39, 24, -97, 55, 46, 18, 9, 74, -86, -57, 34, 111, -18, -111, -31, 96, -77, 8, 47, 80, 50, -78, 75, 104, -50, 27, -48, 23, 25, 89, -117, -99, -18, -115, -123, 123, 32, -22, 114, -50, 79, -1, -65, 120, 41, -46, -36, 7, 111, 96, 21, 52, -74, 118, 18, 20, 68, 79};
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
    msg.setTimeStamp(0.657209116574275);
    msg.setSource(7452U);
    msg.setSourceEntity(12U);
    msg.setDestination(27734U);
    msg.setDestinationEntity(41U);
    msg.frameid = 17U;
    const signed char tmp_msg_0[] = {68, -11, -64, 15, -27, 20, -116, -69, -95, 123, 37, 8, 26, 101, -67, -22, 8, -1, -118, -53, -12, 67, 63, -116, 109, -33, -95, -10, 50, 23, -59, 89, -35, 22, -34, -47, 31, -127, -83, 109, -49, 56};
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
    msg.setTimeStamp(0.41868554769067134);
    msg.setSource(30696U);
    msg.setSourceEntity(39U);
    msg.setDestination(2626U);
    msg.setDestinationEntity(18U);
    msg.fps = 217U;
    msg.quality = 242U;
    msg.reps = 96U;
    msg.tsize = 43U;

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
    msg.setTimeStamp(0.5842834803626052);
    msg.setSource(32137U);
    msg.setSourceEntity(149U);
    msg.setDestination(4925U);
    msg.setDestinationEntity(48U);
    msg.fps = 199U;
    msg.quality = 78U;
    msg.reps = 177U;
    msg.tsize = 234U;

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
    msg.setTimeStamp(0.3772134134438927);
    msg.setSource(36825U);
    msg.setSourceEntity(107U);
    msg.setDestination(25032U);
    msg.setDestinationEntity(98U);
    msg.fps = 7U;
    msg.quality = 172U;
    msg.reps = 22U;
    msg.tsize = 203U;

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
    msg.setTimeStamp(0.8322332532653882);
    msg.setSource(40066U);
    msg.setSourceEntity(224U);
    msg.setDestination(62962U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.8072955444594827;
    msg.lon = 0.10471686734403052;
    msg.depth = 250U;
    msg.speed = 0.0044312973756707175;
    msg.psi = 0.3178829501002136;

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
    msg.setTimeStamp(0.5908873496981188);
    msg.setSource(21832U);
    msg.setSourceEntity(66U);
    msg.setDestination(27954U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.1859266515630532;
    msg.lon = 0.11414540730822331;
    msg.depth = 239U;
    msg.speed = 0.31335854466661583;
    msg.psi = 0.9658978654095159;

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
    msg.setTimeStamp(0.9195160647978018);
    msg.setSource(42647U);
    msg.setSourceEntity(64U);
    msg.setDestination(64647U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.2091461763536554;
    msg.lon = 0.5084766475034428;
    msg.depth = 26U;
    msg.speed = 0.320443408193832;
    msg.psi = 0.8040985347242892;

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
    msg.setTimeStamp(0.7643265712387851);
    msg.setSource(50914U);
    msg.setSourceEntity(53U);
    msg.setDestination(38782U);
    msg.setDestinationEntity(224U);
    msg.label.assign("LFOLQVZIGKDWCPMSBKFVEMSGQXVTMAKKGPEAOCVDCTSDVQRNMTQVFZGPOTUHXIATLRWWDZSJFFBEHBPYHOXSYJDQKQXTPJZWUAAXCEVRCEGAMAOJLNGLSIBCNCJBKRFUZOWCGMAEMYDPWKJZHHYZSIDTDGKYYMXOGSNWRWFIYXFPNHLHEWSJVDYNUJIFRZLUOTPUTLXXYJ");
    msg.lat = 0.19650306412119034;
    msg.lon = 0.6957174526035116;
    msg.z = 0.17626505138504123;
    msg.z_units = 20U;
    msg.cog = 0.7822812806253232;
    msg.sog = 0.4266990834510124;

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
    msg.setTimeStamp(0.9185332304289867);
    msg.setSource(63045U);
    msg.setSourceEntity(125U);
    msg.setDestination(19842U);
    msg.setDestinationEntity(181U);
    msg.label.assign("AVAVVLPHBOFNPSNFTFXFPHCEWCVJYGKUBFHHGTJCXLIHWJBKWUMUMLZOYGXMBAMEDSAVRACOEHWEPUCJEFINAOZOIWERQBGULRIFITTDMRBSYWIOTMRKQBZUPUDYRCMSDHNOWXUTWKXQOMVYLYZIDDZWRVXFEWHVOXVNPTHZSNU");
    msg.lat = 0.6341161273965996;
    msg.lon = 0.5253038770356804;
    msg.z = 0.134855962507215;
    msg.z_units = 94U;
    msg.cog = 0.4644624045915885;
    msg.sog = 0.4241263350398917;

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
    msg.setTimeStamp(0.9134177753566809);
    msg.setSource(56757U);
    msg.setSourceEntity(127U);
    msg.setDestination(7316U);
    msg.setDestinationEntity(18U);
    msg.label.assign("VIEZOFDTOCCULMRLWCODHBNRWMOFITEFTBNMBMEWICHLNRRQEYQGLJNWQIYIUDKXEZDORVTTUKXWURQCAAZMVCBGHRFGPCEYVPFNKKSZYQOEWAZNMUDGSQDZDKRPLWXLGERHJWASYUJLJXPOOGMVJBJIFKSESUGVVQAATKHRDXTQBYOYVJVFKFJBYUAGPSMZHZPSAPITIWBBASMFHZHTEHPYVGNQKPN");
    msg.lat = 0.1403337449614892;
    msg.lon = 0.43791305133728875;
    msg.z = 0.2068855389550064;
    msg.z_units = 108U;
    msg.cog = 0.9435577764696425;
    msg.sog = 0.3140276086352213;

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
    msg.setTimeStamp(0.7165747085144532);
    msg.setSource(25025U);
    msg.setSourceEntity(31U);
    msg.setDestination(54842U);
    msg.setDestinationEntity(253U);
    msg.name.assign("FABCAUIWSIEWYLXQKWITGLOHFCWBXWBHSRDUOEIKZFVQTQSNVBVNPORSNYTHLJGUFADRMNNKTZPXRZYMKKHFLUDUMYHFZPSJKTSCYUHJCCCIEVAECPBHDVOJICLQGJYSJ");
    msg.value.assign("UHHASZJFLPBCXQPWVCRLTUOAFYSPCZNNSDJHBTODCLTULNPGYMJDOKRMKLEYFTLEOOEUQPZFRSOUGZYJGKPZGYZVAAXMNUMHIQYYHVRTEEBFRFJWPXVNVJKCGNDXAIGKTQSEPZSIGXCULQGRXMVEWEQCYYLTBJAARDVBFDBDMRIYKASFSDPMHXTJSKNFHOUCPIHBQKINVGOGTWQHVEHQWZBLKXIFWMQXALVMUTJNOICROWKBRA");

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
    msg.setTimeStamp(0.7339736649527488);
    msg.setSource(48924U);
    msg.setSourceEntity(211U);
    msg.setDestination(49757U);
    msg.setDestinationEntity(181U);
    msg.name.assign("MDNMCFIOTPAUQUXZZXDDUCWLTCNPTQEBJKYSBOPEBGQZLFGFBXLYNQBVHPRTLSJXKOOELJIIIZXDMFQFFYARUZILMVSIYRKHRBZMJEAGKUVTYR");
    msg.value.assign("HUBPKIUNDGGOWUIXYQSKFKBVWFTWUMEPCEPQBQELYPZSTLLIBMAGSHAEQMZIIXXHDTZBZPSOMEMSKDPLIOXPAFDYVNXNQELGJYRFLBVJQOSHKRVQHAADYGZVZVWOLBYUJBKNRQKREIGXGREMAVSRLHHDMIRAYMRFJTGNZEWQFZKIGKNJZNVQNWTUTLRPCZEUOXAYLAJFWRTCPKJXCNJNXOSCTMODHOJFHBTDBUGWIDSCWMCUSVJYXCD");

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
    msg.setTimeStamp(0.8561891941175822);
    msg.setSource(47798U);
    msg.setSourceEntity(150U);
    msg.setDestination(57751U);
    msg.setDestinationEntity(169U);
    msg.name.assign("KGIEKNIPXEYQCPLGHUXQHTJPQUHOIIHCJRUFEZSEYUPDIRATSOVXAVXGSEWMYVFLRJZVPKFCWFRYYKHMXBGZYCMLLAWYGTPNSRNKXZLJAZBOODZMJAHFCTGBNNERQPVVNSMB");
    msg.value.assign("ESLPUSQOZKWVYHELJVYKODFUOBHUWBILEHJYEESZTZNNNQIZWZBRNAQRDZIABURLFCXFIPDIATJHXRKJWMGMOVTOEDKBIBAQHOILZLIXXDGZXGRYQSUJCVBJIMSRBZCTRSDLQKIWOPBWUGCQKFJTTDKCESVFNCNBNGNEJMCAARUCVLPDOHHMMCRSRGWKGXHFADCEPXOKUATVYSVYPFGVHDFEJGPXYPNMFXXTUKNJWWQMULGQFVZPAM");

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
    msg.setTimeStamp(0.7488125529834875);
    msg.setSource(59840U);
    msg.setSourceEntity(116U);
    msg.setDestination(34427U);
    msg.setDestinationEntity(132U);
    msg.name.assign("IGIXFYCXMWLEHHAVWQUOTFQAPXWBKVJAUXQICMPFDNMZUEYXNEKUTNGSBRKOYCWYZWBHSAOSFOCMPBJTFCWAVJTYLTYBTEIHZYQIXHYJCNOOOWWUWLMMKINOC");

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
    msg.setTimeStamp(0.704413143460556);
    msg.setSource(30227U);
    msg.setSourceEntity(209U);
    msg.setDestination(59328U);
    msg.setDestinationEntity(234U);
    msg.name.assign("GOJYKQKYVYQSKDVURJDSPUTAMSCSMTAMCUKZJLILBDRCLMOPWCNGGOVFNUZAQZCHCAFQVMLFTSLRUBQWJOEBWVBZKTXXPXFGBXWUBSGXGEZXYFMETZYFMHSENDJQPLVDNGWRPZQXRNIKHWGMXUOHBGCROKYBADNXUFPYSOWJKQTLSYIQHAWVRSLDVHCDLTTD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OCGABNVSQMUTFIAYEPPEAKHLRBDAXKLRHRGKIYWDDKZSIAGMFIFYHZDUNPTCQPDEXFTTIKIRBZLUNUKVFWYMFRXSNSOQLYMXWSVUXZJXJTBOJDHUHDKPPSHERKAWCVUWPTAIBVYVNFQUERYSMELAYNLMHOGFKQOJFZOMANMTLBZZWCTIWBEWKXJCGBLXLCWPSRZQEV");
    tmp_msg_0.value.assign("MNEAFRTJELHFTVQYUANSXTOWICVUXTZDVPCNDEZFBQURYBBJWKYVBTQEOGKTRGCDDVXAXPOCRGRFGBSQIEXHZRJDISRUXZAGCBBYEKIMPUGPJCCQEYHFOQKLRFNQCCXIYAJZYWQFNKWWGBJRLSFLZWMLAZUWOHAOKOMXPKEKTLWDXZOUJGHJMYXUWKSIR");
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
    msg.setTimeStamp(0.06589112413968645);
    msg.setSource(40849U);
    msg.setSourceEntity(47U);
    msg.setDestination(19542U);
    msg.setDestinationEntity(57U);
    msg.name.assign("AGABYRFSKDPNDBFSXLQYAKWJRICEJUCIARVBEQRDJMPVZZQHEASGHJGNIVIRYQMVBLIFLWFDZKMXZRBBPKQOFOKBWFXJDTEHMOBOFAUDXLAJUC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OTHPNFEIMHYQNVYPLZNRQYJEKOVCBGTLIDNISHBDCAYMBLDGJINHTFUQZSWWIXI");
    tmp_msg_0.value.assign("WTBEOWVKKZOPGAWBSIGETTUXGAHNJMEVMZDIRNPVMLYJUDQGGXNEQUIZUFEGOEZOQXTLGFLFNXLOAJTORALPVHNVTRCMVGBXOBHAOPKYPQDXIUSCFRPWEVTBCPWLCUBJJKXHJPCBWMHMLHDRIYGWAKZQBWRIRVIMLPQJMLCSZNNQQXJASMZQPKSQEUYFKRUHWVX");
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
    msg.setTimeStamp(0.3571690418285681);
    msg.setSource(25294U);
    msg.setSourceEntity(175U);
    msg.setDestination(5949U);
    msg.setDestinationEntity(223U);
    msg.name.assign("CMFPSSUZMTFOFDMLPZYSBKTDVNYYHWEUNVDTKSFBMPYJDFYXIWTRQSAIQJYGHPUNXIGONQUMSALRQCTANDFJQHOYPJUEGXLUVWGYEKWPXDPEHGVEBKHEWACDSCVFAIRGTOVVJBXHHQACGNXYXQIHIDLULSEMRLGKJOTPZFSRIEMRWRODEPBCTICLOULMNKYWHOTVRXBVZPXNUMV");
    msg.visibility.assign("PILUQZNJIAHCFPZKHRYRXMWYLDKMSDNYPXCVUTGFHOBIQMVDYICACUPFRBEGTLJZOWNKFJRWHSATZOCJLQPMQEEVBDCYSZYJQWUPXZGGOMXNTNSHXFLVGNIKAPWFKMXGQYEIXWMGMLQASFZYNXADTKTOIFFZMHEOAKGVEBEWLLVPTCYQUN");
    msg.scope.assign("NAEBWGNOMLGZSFQWQNBCKJJTHGYXSLVWBLULKCLKDBQZPDXSOXKGEEMMUZRVOQEMLXHNOIFBCAGEQWOIJQXNVNALGIZYQIVDPXZSJQVDAEBWTJOFRHTYXWRHHKFYHJYVZCN");

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
    msg.setTimeStamp(0.2734989689515456);
    msg.setSource(36793U);
    msg.setSourceEntity(73U);
    msg.setDestination(63243U);
    msg.setDestinationEntity(253U);
    msg.name.assign("APRNDQUKZBKKGGJLXSBCCNSTCCQFVJXMAIYZBMWPFXZHYQRNEOLDLCINTHZBUCVLEWNJWUXPHATMJSYPHYVFYDVFBEDXMPNMOGPORZWSOWGUBBHZVOJAMFOQKAGELVDUSPTQDJWNHUOMIAMCRTEEWSDXRVCJIGSFQUSHULOEGFIPRMCQWZDIAHNYEQEFTKJKDRLSKSYKWVPYORLAKIYLZBFDRJCX");
    msg.visibility.assign("WTPFFYBHWXOSTLIEISOXULQWYNYPEWDBDPXNTWTTGNLPEIGLVBZGGLNEDERMEOLAQYDNXSWIWQHHPTBSV");
    msg.scope.assign("PVDTHUJEVCPQWUXUJQZTWFRTKNNVMWUTOCOOEAFCYBXSRXBCQKCCPDKOHOKLIKSSBWGTSZRBTIJLOWJMRNEYPJEMEJQFLFGLWBQLDTFGIEESPSCGAJHNQOLRLZDPYWKVNBRZUAOJSKNCQMHHVYTTZERAUJINVXZILDVQFBYUHIASEGDQDMJSBHCOICDRMYROWVMUUXAVUYQMYFXFHXZTKRBKGAPMZIGKWAZADWFGYPMLPFXSL");

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
    msg.setTimeStamp(0.17786222794225426);
    msg.setSource(30839U);
    msg.setSourceEntity(150U);
    msg.setDestination(12255U);
    msg.setDestinationEntity(10U);
    msg.name.assign("UOHNJLKMLAVRTAEPZBKTCWHZQXVGUUBHMJWOSUZEKCIMRMPUFMTZAIPYYMERTJRKDZZ");
    msg.visibility.assign("XYSVCUDNOFBTANUZQZSSUMCCMFLDCXUOJXAEPXGXYRMOVOZOGCQNNKBWJNRVIHWEYTEIUNQQRXEZSFVXZSCDRDPGOOMVJHIEMPEFVCNPALTUARWQDATUKDJEGQCSWZYFRSHWTTKGXHGOCMBYPBHHABBMHLWZEBUOWLNQIPLNCJRAKIZBAMBJBEOJLHUIKPRDFFEPDIHSYRPKPXHSIYMAZXYQLGLTVQJTIAGYVTILVGTDKZDNRL");
    msg.scope.assign("WVHLDLMWHFDRVNJGSLBGZNOUBFJSNRNHCHOOCRUAOTHOPGLIAKPVDLWKTDHWHTTCIJQKWQSWEMQURVSEOAXLFFEQXSTZOQKNKYBRYORYFINCINZJYDJ");

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
    msg.setTimeStamp(0.1551727979304095);
    msg.setSource(25192U);
    msg.setSourceEntity(19U);
    msg.setDestination(44423U);
    msg.setDestinationEntity(64U);
    msg.name.assign("TECJGJRVUHBWKKVSPFLBZQICOHWUTTPZZYGLBEKDXIXKYGBYUWJKLSCYEPMWQIAOAMWASAPSVAKXBNTSUDUVHYXLLXCYBFVESDQRWGDGMQRGRULWDXLPYVXWFDBRRTPHFFQIEKCTNYHKQENFFDATRNPOBNBEJSXZZQOR");

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
    msg.setTimeStamp(0.4623367704305448);
    msg.setSource(65380U);
    msg.setSourceEntity(129U);
    msg.setDestination(3694U);
    msg.setDestinationEntity(148U);
    msg.name.assign("YWWSZDODAXAUDMCEUPTLHAMUJFREVNOKORKCHZRABWNPVCUQHJSHLGYQPWRNFTJYYLQMUZCFGMBMXKILMKASDYEEWQYOSSQETBLKITLDGC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GSYDUCOEACTHQBVWWVBSKFOKLHMHAMBWIGSRJOMFTZMWVOTCRRDMESPBRHCJICBVVFSIICTSNJONZPYLBGRVJDRUPRJFYNECGXXCNQHQMWDAHAPEHAIMAWNPZTPEBESXOIYFXWKDHUSLHNUGLVKBJBZGUZFIZMPXEJPEQAMSFIBPSQNECWKNRWOCQ");
    tmp_msg_0.value.assign("HWSAYMQBMSOHQRGUOYQHSNUSIKKGEZUCADEPHYFIWGFYJMGFEDSMCUXZXHYQJIYRTIEZ");
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
    msg.setTimeStamp(0.7368166234431748);
    msg.setSource(64641U);
    msg.setSourceEntity(236U);
    msg.setDestination(35428U);
    msg.setDestinationEntity(135U);
    msg.name.assign("JZDKTVZOXFCDSQFPELGMUMWNJOUEIANFIKUHRMPEEPVMRPASYLPVAYXTKWYZWJVVLQEGGZWDZORXPPTTDUZA");

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
    msg.setTimeStamp(0.891671072223304);
    msg.setSource(11569U);
    msg.setSourceEntity(62U);
    msg.setDestination(48432U);
    msg.setDestinationEntity(170U);
    msg.name.assign("RLZXGFXNWYIZYARHDUVAZIKSWHZTLSWBQGDNJIQVWBMBEDJCLJLMRUCGVWNAZKHCJVLVCBORYOWSXDBFMCLKDLJLNFKUVUPPYXPGEBRFVIQFMIJDGSZEDFAZACHJOQRTSWYOEPSNPOVJWQQJJKMANPXE");

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
    msg.setTimeStamp(0.07473468619958068);
    msg.setSource(28349U);
    msg.setSourceEntity(155U);
    msg.setDestination(51864U);
    msg.setDestinationEntity(57U);
    msg.name.assign("WYMOULTMUZDHWEKDNZPTAJKCXPYICERNVVCDKNUQRSTOJZSPSQVBWVAFAXLXIPJFQOCPUHUYSNEGRCCQDTXZMJUSMWWFAJSFHOJTQRUATHKHXBCPBWOALJDMOQRKZMBDOBYOZEPVOEFKMVALBILFLFERZMHTUJQAXYNTNGYEXMHITQPZNGVGBKWCGWDFUELCRQGRHSHXGYVRLIZIGVYNKYOIFDCBFZLHSJWBIU");

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
    msg.setTimeStamp(0.433226338537804);
    msg.setSource(38749U);
    msg.setSourceEntity(13U);
    msg.setDestination(52122U);
    msg.setDestinationEntity(220U);
    msg.name.assign("EOYVAJVJACZTBIZNJFAAIELPLPFRTXSMKFHXHAKNJBHEFHBUJMHANRLXDXWDYKBNWKMBJQJNTFUJDJJOTRZXRCZZMVUQUPGXOMYDZPLCVSAWZFEWQUUTBGCBDULKUXYIKELXQQHNFPUAHIFLMPFSKWBSBKZCNRQSFYXYWGOCTCCXREPCRASYWIOTVQKGDDUQOVNLPZYNQSGARHOS");

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
    msg.setTimeStamp(0.8078924130416236);
    msg.setSource(32114U);
    msg.setSourceEntity(43U);
    msg.setDestination(32922U);
    msg.setDestinationEntity(112U);
    msg.timeout = 2452105914U;

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
    msg.setTimeStamp(0.6442170203139386);
    msg.setSource(30168U);
    msg.setSourceEntity(23U);
    msg.setDestination(38782U);
    msg.setDestinationEntity(136U);
    msg.timeout = 1026308834U;

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
    msg.setTimeStamp(0.07286331242781152);
    msg.setSource(5994U);
    msg.setSourceEntity(226U);
    msg.setDestination(4650U);
    msg.setDestinationEntity(228U);
    msg.timeout = 2038941516U;

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
    msg.setTimeStamp(0.5424042694338487);
    msg.setSource(8459U);
    msg.setSourceEntity(223U);
    msg.setDestination(56600U);
    msg.setDestinationEntity(45U);
    msg.sessid = 3025687823U;

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
    msg.setTimeStamp(0.2792758370236824);
    msg.setSource(60496U);
    msg.setSourceEntity(107U);
    msg.setDestination(25149U);
    msg.setDestinationEntity(170U);
    msg.sessid = 3934291631U;

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
    msg.setTimeStamp(0.6939616382999501);
    msg.setSource(35921U);
    msg.setSourceEntity(105U);
    msg.setDestination(9440U);
    msg.setDestinationEntity(88U);
    msg.sessid = 3874099800U;

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
    msg.setTimeStamp(0.2594713234887489);
    msg.setSource(59753U);
    msg.setSourceEntity(150U);
    msg.setDestination(55722U);
    msg.setDestinationEntity(52U);
    msg.sessid = 2991143213U;
    msg.messages.assign("RKGPHIZJSURNJAGDSTAFQQSPRWCMXBGUBMTDJRRXFNUVIICZVBKFJBRAVHHZKQAOQNTCGUFSIXYZHTZXARGFOUDCBDWAMRLNWADWLAOANXQEFBYPPFTEYHEIVXUJWGSEWZKMSKHEZLLFYIIHQXPMYVOELSKNSBTDJXRVGHOORCIQCUEPJCBJ");

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
    msg.setTimeStamp(0.440609599383181);
    msg.setSource(36003U);
    msg.setSourceEntity(7U);
    msg.setDestination(23841U);
    msg.setDestinationEntity(114U);
    msg.sessid = 2760525180U;
    msg.messages.assign("BOVSWZKKTBTZNDXLWIKHONZGXXCNEVRKDUHRPUNAPAQLZBPAQUMVXXWFGYWNMVEEHIDXFBYOUVIOQDGUYQLXEVCFVQVCKLJARLJZAYLMRFHJDBTDAQNEIKOELUGSKZYBCJBEXFBHWZUYLNQMTYMSVFFKTOZCWQHBMLTNHSWIUPIRSIRJTMDSZIKMJ");

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
    msg.setTimeStamp(0.7138634035593772);
    msg.setSource(58480U);
    msg.setSourceEntity(126U);
    msg.setDestination(64247U);
    msg.setDestinationEntity(33U);
    msg.sessid = 2077067797U;
    msg.messages.assign("FFYQRZVSLLJANWXRBNYJPJHEMYRXQFPCPZXHGHNGJGKUQRYBUFHBUUUTMQQIZEEIKWCTTCZNDNCDHPDBGKJSMDQEVTZAUVORVGXLJBIWRNYWSNZXPWKTWGVRLGUAUL");

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
    msg.setTimeStamp(0.5115000882903867);
    msg.setSource(54386U);
    msg.setSourceEntity(188U);
    msg.setDestination(14292U);
    msg.setDestinationEntity(128U);
    msg.sessid = 319965870U;

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
    msg.setTimeStamp(0.6067403670316287);
    msg.setSource(37741U);
    msg.setSourceEntity(51U);
    msg.setDestination(3110U);
    msg.setDestinationEntity(1U);
    msg.sessid = 3644853747U;

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
    msg.setTimeStamp(0.9336057850409875);
    msg.setSource(41851U);
    msg.setSourceEntity(126U);
    msg.setDestination(46443U);
    msg.setDestinationEntity(55U);
    msg.sessid = 3085445849U;

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
    msg.setTimeStamp(0.9679878966689252);
    msg.setSource(21681U);
    msg.setSourceEntity(45U);
    msg.setDestination(43409U);
    msg.setDestinationEntity(93U);
    msg.sessid = 510295198U;
    msg.status = 191U;

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
    msg.setTimeStamp(0.6097196736701771);
    msg.setSource(21343U);
    msg.setSourceEntity(79U);
    msg.setDestination(52956U);
    msg.setDestinationEntity(38U);
    msg.sessid = 2743985446U;
    msg.status = 12U;

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
    msg.setTimeStamp(0.9972064046300708);
    msg.setSource(29055U);
    msg.setSourceEntity(155U);
    msg.setDestination(17382U);
    msg.setDestinationEntity(235U);
    msg.sessid = 2501484668U;
    msg.status = 235U;

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
    msg.setTimeStamp(0.11200869582408168);
    msg.setSource(50376U);
    msg.setSourceEntity(22U);
    msg.setDestination(45138U);
    msg.setDestinationEntity(178U);
    msg.name.assign("TBXJFMNTUNHABRVCNRMZOSWJOKTNMSKQYYAAURZOBVOCMYPBXFLBKGLLZFHJOGCECADIQIPZYOHDTXYSEFFAVOZICJAQZIBYKTKTXMEBVETLWNDPPMDWWQNAWORGCURVGSNUKOBBQKRPSRSCLWRMJYFJCJFFUAHSEQUNTPVRXMNXQVPJXZIULEUUWKQCLRHCPMUDVIEZHEPAGZLYYBTTXDJQSVGNXHXAIKIZDHDFSHPELHQKLGJMIFD");

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
    msg.setTimeStamp(0.07554352807669729);
    msg.setSource(7232U);
    msg.setSourceEntity(165U);
    msg.setDestination(31037U);
    msg.setDestinationEntity(105U);
    msg.name.assign("STMLNFWUMMVCUWMRPOMINTJPUZHVZSSKTISBKQCEUJEVBKZHOPNFG");

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
    msg.setTimeStamp(0.03286291273541364);
    msg.setSource(4393U);
    msg.setSourceEntity(194U);
    msg.setDestination(20354U);
    msg.setDestinationEntity(235U);
    msg.name.assign("YIHRUDFYFLXSWTTCBYILTVYAHTOKZXSEAJRHVPSGOGMNZCZDYOKOJTFPHEIPMSLGGUVFRVIUFIDXGBOQAJKAYLZMPPHKEQDELBMTJUYBRWCTFYKLWWXQACJWKNCBVNDKPQEUCDKVYEUAQFIQXUBNZGGPZREBLWWMACTRLISMITMQTVDHXWSEHOJWNXEZCRNVIMULA");

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
    msg.setTimeStamp(0.4652032576439563);
    msg.setSource(65086U);
    msg.setSourceEntity(206U);
    msg.setDestination(27945U);
    msg.setDestinationEntity(224U);
    msg.name.assign("GMLWXIIAJTPQUULPYTBZVQZMOJQDJBOXRBHWYSWXYKXJHTZRPMCZOXPCKCKLMQUCEMRAWOOAVBQXIALUEZUIYQKIKJUTGBJVIGHWIQEWGAWBRNLDLPNCGTFEVZAIOKVM");

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
    msg.setTimeStamp(0.9074292015877832);
    msg.setSource(1424U);
    msg.setSourceEntity(91U);
    msg.setDestination(8892U);
    msg.setDestinationEntity(166U);
    msg.name.assign("YSCEGOODVAMZVWKPQJDTEHCFSYZDOPAZMXKG");

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
    msg.setTimeStamp(0.17396978343893776);
    msg.setSource(25739U);
    msg.setSourceEntity(197U);
    msg.setDestination(38904U);
    msg.setDestinationEntity(249U);
    msg.name.assign("WNAZASGVJZTXGZISDFYCGMJIFJEACUNTOYPZQSXLXQHHTGMQWYKJUKBJAFTKMBLEOGEKAHDYACTHXSMBFUODXAXXVLXVWNQRAPKIEVBWWKGYHQRIWDORMUGFZFHZPDPDNLLKSLWLKVHOVSIQCQNLQTPIVRMNJCXTDTCDLRBDVMEVYMXGBWRRWQCSDPPOAEFOESHMQGKI");

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
    msg.setTimeStamp(0.7689348297503062);
    msg.setSource(40201U);
    msg.setSourceEntity(171U);
    msg.setDestination(53747U);
    msg.setDestinationEntity(195U);
    msg.type = 236U;
    msg.error.assign("CBCDOPGPNZXCMUZACNAZODETKNZTTATOPCXHTIOLMDVTNKVQATSGLFEHZVRQUGYUJ");

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
    msg.setTimeStamp(0.20829599691214418);
    msg.setSource(26664U);
    msg.setSourceEntity(240U);
    msg.setDestination(41240U);
    msg.setDestinationEntity(245U);
    msg.type = 142U;
    msg.error.assign("RKVHAFHVJEHJCVQNFUGAPTLBCGUPCMSQLDTMKOASYESMGEOZPNOZADXCIENVHIDHCHIKPZBVMDNMATCBOADWCRRZUTMUTJEKQXSWYUMDRUIBWHLPWMLJPTGLIVGWZLFAPYSVYRJBHQMJBKSLOWIZWUBTDUWTSSKRJNXYQCEDBFMKGXOQEBFSUONDYKRSQKNXRGYRY");

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
    msg.setTimeStamp(0.8843207657784331);
    msg.setSource(27399U);
    msg.setSourceEntity(196U);
    msg.setDestination(43015U);
    msg.setDestinationEntity(77U);
    msg.type = 17U;
    msg.error.assign("CZAAZYTAGMWOXYIRQGQDHFQTQOCZSBIOPVBDFFJUFUKHUPFYYVDGMWGXZCECWLVUUETVLSFFZWLVRIEXAHZJKYSHBKSIGLFOCOLKOHBMXDVTGIKAXZWUJPAJMNDXNMCQQPCWTNMSHBMJIYCQNWRXTYLHFJLUNTJRLIXPZBRQSKFMYDDCNBNJGOIVLTVWRRUXBSRANEAOA");

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
    msg.setTimeStamp(0.9516750778251607);
    msg.setSource(39570U);
    msg.setSourceEntity(6U);
    msg.setDestination(53421U);
    msg.setDestinationEntity(3U);
    msg.seq = 30650U;
    msg.sys_dst.assign("PZAYAGFPZTPRWHQISULTXQCNLDRBCWRUZDDUQALKDMGJMHJGMIQEBOQCNZGWZNUXLYLVRSQHVCVNVNFZRODLAEAMUQXFZWVIJQFBNGAFMKUJHOPYRFYYOKGFPDHVCYKDBIXSPKRJNBBRTVSITIKJXOYOWHESOWTFBHXNKWXSMXVUYIVEXLEGPYTFPQZDIKOKRBJECBJVGABUAAWCHMPOIETAPNGSFMQWNTRTTYSDEUCUCZMJMZHDLE");
    msg.flags = 195U;
    const signed char tmp_msg_0[] = {-34, 74, 75, -46, -75, -66, -104, 38, 124, 8, -73, -95, -117, 55, 104, 124, 119, -54, -85, 20, -13, 116, 20, 43, 13, 101, -78, -39, 70, 83, -32, 23, -75, -21, -81, -89, -65, -121, -39, 43, 36, 72, 110, -33, -29, -128, -88, 25, 72, -125, -60, -123, 29, 29, 52, 97, -27, 56, -48, 53, 33, 13, 15, 49, 107, -46, -117, 105, 86, 78, 88, 115, -31, -98, 68, -97, -61, 33, -66, 97, 74, 125, 36};
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
    msg.setTimeStamp(0.742904228018794);
    msg.setSource(44639U);
    msg.setSourceEntity(95U);
    msg.setDestination(4398U);
    msg.setDestinationEntity(214U);
    msg.seq = 64178U;
    msg.sys_dst.assign("XNWYUIZMBLDFPEGZOQBHNVJCCFWZCVATWHSREMXABHFIEAUDFNDROAOVISDSHKTAZSXK");
    msg.flags = 145U;
    const signed char tmp_msg_0[] = {31, 64, 25, 17, -62, -125, 20, -121, 94, -41, 4, 19, 102, -101, -70, -104, 121, 111, 62, -83, -106, -104, -98, -108, 72, 80, -124, 76, 65, 74, -10, 82, 10, 125, -27, 101, 81, 33, -103, 55, -92, -88, -121, -122, 6, 58, 61, 102, -41, 4, 43, 112, 60, -16, 25, -120, 28, 30, 23, 83, -105, 46, 62, -71, 36, -8, 43, -74, 115, -90, 15, -85, -128, -114, -94, -21, 73, 43, 9, -84, 61, -31, 102, -56, -121, -123, 92, 0, 29, 91, 109, 93, -55, -71, 8, -127, 14, -113, 29, 70, 47, 15, 38, -125, -25, 78, 2, 93, -42, 52, 94, 26, 84};
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
    msg.setTimeStamp(0.6534588863292362);
    msg.setSource(7546U);
    msg.setSourceEntity(77U);
    msg.setDestination(25105U);
    msg.setDestinationEntity(1U);
    msg.seq = 35868U;
    msg.sys_dst.assign("DYKASRLBUPABPWLJQECNBDKVZFLMDHYOOVSLLXYJJSWTCMOMPIGPKEYIXPIKQIIKXHXHGEXEGARCEBDUCUU");
    msg.flags = 159U;
    const signed char tmp_msg_0[] = {65, 125, -105, -116, -57, 50, 119, -28, -91, 9, -79, 10, 102, 110, -61, 4, -103, -30, 50, -16, -53, -29, -74, -17, -60, -36, -75, -8, -34, -102, -35, 13, -81, 5, -53, -55, 109, 95, 33, 89, -10, -6, -14, 56, -61, 114, -43, -19, -36, 24, -98, 102, 122, -121, -118, 84, -104, 113, 117, -5, 22, 53, -49, -25, -88, 121, 98, -46, -44, 31, -39, -73, -47, -28, 69, 25, 110, 35, 8, 74, 54, -6, -57, 12, -45, -21, 90, 74, 108, 39, -125, -38, 43, -17, -50, 90, -126, -111, -38, 100, 0, -24, 13, 20, -57, -29, 23, -87, 102, 112, 57, -66, -11, 60, 20, -13, 117, -82, 71, -113, 28, -18, -42, -33, -25, -77, -55, 52, 99, -1, -32, 51, -91, -96, 96, -44, -66, 30, -8, 94, -114, -50, -8, 120, 93, -41, 92, -122, -50, 80, 72, -57};
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
    msg.setTimeStamp(0.2569096407697856);
    msg.setSource(33016U);
    msg.setSourceEntity(113U);
    msg.setDestination(16824U);
    msg.setDestinationEntity(127U);
    msg.sys_src.assign("VUJINMTCVMPWRTRTYKFYPDDECEPYZVUZYXRKZCHNIXIQZEOATWAFEQWGMFEQCWCQKQMCYPNUWOCERTZBULMFBSRXXYFPKALCTPDRHJFVURJVIGYBKZQZLJXHAUIBQVNLSYFPRIANNHLGSOVWOMAIYSDNEPUVHBSLJUVUBSOOHACEXKXOKEKSDQPMONXQFOHATSZITGQTJRIJWHLXDI");
    msg.sys_dst.assign("TYSGRPAIHIDUTULQAKLJEKEYQCIBNSDZYYUQFXHFXIDOZMAGPPNLUQGOTBMBXMDFSASZ");
    msg.flags = 44U;
    const signed char tmp_msg_0[] = {-82, 111, 2, 119, -30, 101, 112, 108, 5, -86, 108, -57, -41, -18, -5, 102, -64, 97, 13, 21, -30, 74, 96, -99, 39, -105, 64, 51, -53, -44, -68, 49, 7, -16, -71, 67, -120, -104, -76, 19, -41, -70, -105, 77, -117, -35, 81, 33, 118, 61, 82, 68, 31, -109, 9, -96, 49, 59, -64, -2, 56, 9, 52, 37, 30, -18, -2, 5, 99, 4, 100, -6, 97, -17, 44, 49, 53, -20, -54, -23, -86, 1, 22, -26, -75, -120, 60, 85, 125, 85, 49, -123, -121};
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
    msg.setTimeStamp(0.6101263935080264);
    msg.setSource(25192U);
    msg.setSourceEntity(91U);
    msg.setDestination(29023U);
    msg.setDestinationEntity(32U);
    msg.sys_src.assign("XZNGRWQVPZKFODPFEZIGVKBSUBGTCPWNNBJKOCVCTJMXPNDTEHWCSEQNYIXJZWBWQJOZYNPORUSHCLJHCMUAYBHPMYXWFKPNEEKDWEGJTJLHUOUMMSSLHKKGZGQFQUGKLTKTFXRSRXYHLFHUMVHQMTZSIPYICRXVYPLREBIRVLROJSMZALDNQLAGVXGDUJDAJICBEFRQQOTYMWFAUIITZRANHLEBUNAVDXPV");
    msg.sys_dst.assign("ONAYLLFMKPPUXKEDSBZSILVYTAIJPWEMJDTU");
    msg.flags = 213U;
    const signed char tmp_msg_0[] = {-73, 25, 40, 76, -17, 29, 41, 2, -11, 52, 45, 52, -124, -103, -43, 70, 106, -99, -97, 99, -90, 79, -104, 47, 52, -112, -73, -42, 50, -82, -90, -75, -31, -17, -105, -16, 76, -82, 105, -55, -35, -93, -58, -50, 43, 64, -45, 40, -128, 118, 100, -34, -5, -19, 69, -10, -73, 72, -24, 91, 92, -12, -32, 118, 98, 112, 1, 64, 114, -107, -103, 73, 40, -57, 17, -122, 113, -101, -72, -10, -56, -88, 57, 4, -78, -117, 95, -41, -107, 97, 12, -5, 122, -60, 113, -120, -122, -118, 75, -116, -11, -49, 109, -92, 18, -127, -67, -70, 86, -21, 11, 121, 82, 15, 55, -88, 20, -87, 115, -11, 65, 104, 104, -35, 75, -11, 20, -97, -123, 36, 21, 17, 85, -2, 63, 80, 17, 117, 109, -82, -48, -44, -109, -87, 118, 80, 92, 101, 82, 46, -86, 19, -11, -26, -123, 9, 103, -24, -67, 47, 2, -9, -35, -71, 11, -105, 91, -94, 100, 3, -52, -16, -83, -42, -68, 14, 30, 117, -45, 81, -40, 115, 77, -31, 118, -81, 0, 45, -35, -45, 106, -9, -110, 91, 52, -32, 53, 101, 76, 6, -69, -62, 46, 88, 6, 85, -71, -78, -77, -64, -26, -82, 88, -71, -113, -109, 107, -73, -103, 72, 61, -35, 14, 13, 50, -127, -108, -84, -52, -92, 88, 115, -14, 55, -100, 108, 68, -35, -36, -6, 7, 108, 63, 66, -107, 33, 26, -69, -41, -20};
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
    msg.setTimeStamp(0.3934855630055242);
    msg.setSource(47567U);
    msg.setSourceEntity(50U);
    msg.setDestination(34786U);
    msg.setDestinationEntity(148U);
    msg.sys_src.assign("HADNSMPFOIECFJTHMLYCOSQDTHQLEZWUOUHJZRXXMCHARSBTYRZXBSLKYSWEAUPUFJIPPPMTJMAXGNAVMVWVCKTKCLUTFFLBQVUTEMPPILQLGSVPMGBKSIGOKURAZPENZEUNXQCGDOXSWDDVXWDCOAAXJ");
    msg.sys_dst.assign("IQNZOOQOPGQBCLMVKOZQUTDFKHVHWRHIOTDKKCAIDLRNBPUTPBUEIMAVQMDBSHTCPGECLSUVERVRUXNZDANDPPYZWAWGYTFHAGL");
    msg.flags = 76U;
    const signed char tmp_msg_0[] = {38, 70, -59, -30, 4, 126, -88, 22, -53, 112, -33, -11, -25, -4, -115, 121, 114, -62, 39, -78, 42, 63, 46, -103, 93, -95, -106, 19, -104, -115, 126, -21, 90, -60, -112, 71, 31, -62, -25, -69, -4, 14, -3, -41, -65, 43, 63, 1, -57, 26, -34, -88, 121, -24, -75, 35, 103, 71, -18, -14, 9, 4, 117, 0, -31, -58, 102, 94, 37, -61, -121, -41, 84, -80, -127, 69, -112, -83, 5, 120, -125, -21, 46, 1, 44, -49, 46, -61, -15, 13, -78, -97, -92, -49, -117, -123, 91, -128, -120, -32, 102, 102, -88, 4, -86, -128, 119, -26, -31, 89, -86, 108, 1, 58, -6, 14, 56, 86, -60, 47, 67, -106, -71, -104, -112, -13, 22, 79, -123, 95, -118, 85, -107, -46, 99, -119, 52, -87, -40, 103, 48, 44, -41, 118, -42, 19, 10, 88, 85, 73, -83, 125, -59, -67, 108, -86, -33, -76, -61, 68, -87, -12, -9, -94, 42, -102, -19, 20, -21, 64, -6, -8, 59, -10, -55, 54, -18, 109, -118, 98, 12, 65, -26, 111, -49, 70, -6, -48, -41, -100, 46, 97, 10, -16, 99, -93, -3, 70, -102, -6, 45, -75, 23, 33, 54, -13, 115, 30, -90, -20};
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
    msg.setTimeStamp(0.6103155901339105);
    msg.setSource(55002U);
    msg.setSourceEntity(176U);
    msg.setDestination(60980U);
    msg.setDestinationEntity(108U);
    msg.seq = 61715U;
    msg.value = 163U;
    msg.error.assign("SQEEPMXWOJMYXCIDHGTRJBGNGYQAAEQTUFRCKWMOMQJBBKHVFSRZTRVAMPLCHDJYHWNLGWEDIERVNHWSYJTBFRAHXOZBLLQZPNAKCVSYVCLYVTRANDQZRZOZXXDTNICLCKHKXJCMONVZHHEJVQJIKIKLTJGBBPP");

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
    msg.setTimeStamp(0.5147758245743765);
    msg.setSource(51812U);
    msg.setSourceEntity(188U);
    msg.setDestination(8062U);
    msg.setDestinationEntity(185U);
    msg.seq = 16445U;
    msg.value = 208U;
    msg.error.assign("GQIWXFSTPUTQHSSEYBZASDQKKCCDNZGTBYAWWDMXXREHVTQNNFXZEFCRJVQLGGRIZZEOOJYUGDTOMNUPRDGIWRXCFTAVIVHADZVCQNJPBGDSSREFVOJZGQKHSGLAXKMJLKOYAPWFHMBNPUVFAMAPSQCWHBNRTEBWBCNEYIEORNWXIHIPJOKKYRSDPSEACXITLFVLWPOKFFDJHNLMWRHKYEBULIJJAXBUUMVMLYGYQPOMIZUYTX");

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
    msg.setTimeStamp(0.2512304019954589);
    msg.setSource(57798U);
    msg.setSourceEntity(124U);
    msg.setDestination(28955U);
    msg.setDestinationEntity(26U);
    msg.seq = 31283U;
    msg.value = 213U;
    msg.error.assign("ZZEXHWKMDDZLDCOZQHTDSLFKPANWOPNJYWSSJWHEQLJCXMYTEWBUAFIJOGTFIAGXNKVQKIBACRCGUTRINRMIFWJQSPYWZCSPDOLQJAQEUNKNTGRXGHJQIMSDHVECFHHAUPEEOQXOZBNAXNTIADGFBTXQHMVVKUGMMSPWCTHLOFPVBVKRCUY");

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
    msg.setTimeStamp(0.5028641012215458);
    msg.setSource(669U);
    msg.setSourceEntity(25U);
    msg.setDestination(50953U);
    msg.setDestinationEntity(75U);
    msg.seq = 24217U;
    msg.sys.assign("ELOEBXPJLSAHZOEZCMZNGPOICMCFIBGHFICNVVOEBWLFDXBEECFMIHVUERYJXTTLMUAZVBBKXQQOGRGZYQBKOWBCSAGOUDNWRDEJWLRZYIROUWTTIGQAXKKPISKPPIRJLZFSYLGQUNFRRDBNHSDWC");
    msg.value = 0.3841937876015896;

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
    msg.setTimeStamp(0.24660182134417286);
    msg.setSource(28912U);
    msg.setSourceEntity(241U);
    msg.setDestination(58848U);
    msg.setDestinationEntity(117U);
    msg.seq = 61315U;
    msg.sys.assign("CQKHVCHSPHUWSWILPEFIQXOSGRTNJRIOTTNEPBBQORGJNTTJHXQKYKYMFS");
    msg.value = 0.4042031956134008;

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
    msg.setTimeStamp(0.713620269509003);
    msg.setSource(43360U);
    msg.setSourceEntity(6U);
    msg.setDestination(49935U);
    msg.setDestinationEntity(77U);
    msg.seq = 13817U;
    msg.sys.assign("YPPVVPTGSBZUOJZHBMSOGASWBJDLVNBVIYNVINBEQQXBATHQSGO");
    msg.value = 0.2723559602805723;

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
    msg.setTimeStamp(0.9933141963548417);
    msg.setSource(12042U);
    msg.setSourceEntity(139U);
    msg.setDestination(37889U);
    msg.setDestinationEntity(173U);
    msg.seq = 9703U;
    msg.sys_dst.assign("NJTWLTWVNCVMCJQHSJEQPMCXNCKSYRWNFGBWZDKKSRODXEAHIPPQCERHBUACFLSTDWXJJYTIOYBWUVAOUCMLSCLVLSHUHUYWQGIOBFTDE");
    msg.timeout = 0.7296189210043632;

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
    msg.setTimeStamp(0.06063103717775886);
    msg.setSource(48181U);
    msg.setSourceEntity(91U);
    msg.setDestination(28729U);
    msg.setDestinationEntity(119U);
    msg.seq = 21209U;
    msg.sys_dst.assign("UGEUOHRVDKYASPQYIOVAOQKHZTWGNCJEWTBFUJCYAUVKYXVDWHVEJTEYVKBFFQTVTSHXFLGMBCSYJQPMALQRAPYZTGKLMCFLSUFQEODRXMBMRVDENAZHTEWZGYLSRCBPIRXNONBXTCNIFKMOJDJWIIMKSDEGQPOZNQCSXRINYVZGDXLZLQGHHXPBAJMSPXGPEJFJEBOFGDQZHRINUSULA");
    msg.timeout = 0.7641277048575531;

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
    msg.setTimeStamp(0.9599312268760577);
    msg.setSource(14307U);
    msg.setSourceEntity(28U);
    msg.setDestination(1764U);
    msg.setDestinationEntity(98U);
    msg.seq = 49986U;
    msg.sys_dst.assign("LMPVJEEYLTGOHNENSGLMRKPPOZFWYIMXTCIWEEDZNIQYDSFVDRXBUNFREYUAUXYBVRYKTWRZJXCTGJHRHDTTCOLGXAESTBQDSNCHJBGJMVFWHVRQWFKPVJKHQBOFJZNXEIVPUKCALLRMTVONFSYMQZMUPXWNUY");
    msg.timeout = 0.7558351481955002;

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
    msg.setTimeStamp(0.8244535671473499);
    msg.setSource(52399U);
    msg.setSourceEntity(3U);
    msg.setDestination(42100U);
    msg.setDestinationEntity(121U);
    msg.action = 93U;
    msg.longain = 0.634115089543472;
    msg.latgain = 0.5780369967067688;
    msg.bondthick = 883880210U;
    msg.leadgain = 0.6875204011649477;
    msg.deconflgain = 0.72649107666824;

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
    msg.setTimeStamp(0.4997179290235527);
    msg.setSource(59231U);
    msg.setSourceEntity(119U);
    msg.setDestination(44578U);
    msg.setDestinationEntity(241U);
    msg.action = 132U;
    msg.longain = 0.9655178030371391;
    msg.latgain = 0.5775681100779226;
    msg.bondthick = 4082764906U;
    msg.leadgain = 0.16731126702392518;
    msg.deconflgain = 0.06522391218516477;

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
    msg.setTimeStamp(0.5670943437382392);
    msg.setSource(33555U);
    msg.setSourceEntity(103U);
    msg.setDestination(45799U);
    msg.setDestinationEntity(237U);
    msg.action = 123U;
    msg.longain = 0.9105124698800041;
    msg.latgain = 0.6682725759927007;
    msg.bondthick = 237470166U;
    msg.leadgain = 0.17306645511540808;
    msg.deconflgain = 0.4645966968560806;

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
    msg.setTimeStamp(0.8280138614251938);
    msg.setSource(37058U);
    msg.setSourceEntity(27U);
    msg.setDestination(46617U);
    msg.setDestinationEntity(18U);
    msg.err_mean = 0.5121980822399279;
    msg.dist_min_abs = 0.6713186433177041;
    msg.dist_min_mean = 0.8499590012238675;

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
    msg.setTimeStamp(0.9770806876937158);
    msg.setSource(8594U);
    msg.setSourceEntity(198U);
    msg.setDestination(11430U);
    msg.setDestinationEntity(4U);
    msg.err_mean = 0.7084544254939755;
    msg.dist_min_abs = 0.37970094136912413;
    msg.dist_min_mean = 0.17756543601308206;

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
    msg.setTimeStamp(0.20102995886336694);
    msg.setSource(15844U);
    msg.setSourceEntity(72U);
    msg.setDestination(4252U);
    msg.setDestinationEntity(137U);
    msg.err_mean = 0.22062204406025032;
    msg.dist_min_abs = 0.5296527975868336;
    msg.dist_min_mean = 0.003414619089110338;

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
    msg.setTimeStamp(0.734881734430629);
    msg.setSource(15945U);
    msg.setSourceEntity(6U);
    msg.setDestination(8539U);
    msg.setDestinationEntity(118U);
    msg.action = 32U;
    msg.lon_gain = 0.8109798020575538;
    msg.lat_gain = 0.1625391723145957;
    msg.bond_thick = 0.13482342795798063;
    msg.lead_gain = 0.6565940122663027;
    msg.deconfl_gain = 0.29325869167323415;
    msg.accel_switch_gain = 0.5053640662186076;
    msg.safe_dist = 0.5893808846521311;
    msg.deconflict_offset = 0.09435991685100076;
    msg.accel_safe_margin = 0.63517071843135;
    msg.accel_lim_x = 0.39603713543297314;

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
    msg.setTimeStamp(0.40467887102887545);
    msg.setSource(27880U);
    msg.setSourceEntity(123U);
    msg.setDestination(50620U);
    msg.setDestinationEntity(193U);
    msg.action = 131U;
    msg.lon_gain = 0.06738152781714712;
    msg.lat_gain = 0.5255842087917212;
    msg.bond_thick = 0.34308062583812027;
    msg.lead_gain = 0.12348553379710181;
    msg.deconfl_gain = 0.5801480228914935;
    msg.accel_switch_gain = 0.5604341609907817;
    msg.safe_dist = 0.8814807070707124;
    msg.deconflict_offset = 0.8696574490795969;
    msg.accel_safe_margin = 0.5795990996350345;
    msg.accel_lim_x = 0.46655717254670914;

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
    msg.setTimeStamp(0.3107939429780504);
    msg.setSource(5855U);
    msg.setSourceEntity(85U);
    msg.setDestination(87U);
    msg.setDestinationEntity(111U);
    msg.action = 97U;
    msg.lon_gain = 0.724610114134165;
    msg.lat_gain = 0.6319138149129044;
    msg.bond_thick = 0.7659885240684668;
    msg.lead_gain = 0.5257535459975672;
    msg.deconfl_gain = 0.3127986695326761;
    msg.accel_switch_gain = 0.8128386195296373;
    msg.safe_dist = 0.16141952839075013;
    msg.deconflict_offset = 0.03630070478852021;
    msg.accel_safe_margin = 0.2551762773469204;
    msg.accel_lim_x = 0.18370777285527173;

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
    msg.setTimeStamp(0.7175259660879478);
    msg.setSource(37524U);
    msg.setSourceEntity(105U);
    msg.setDestination(39297U);
    msg.setDestinationEntity(144U);
    msg.type = 195U;
    msg.op = 231U;
    msg.err_mean = 0.947338842609139;
    msg.dist_min_abs = 0.631987154696778;
    msg.dist_min_mean = 0.8239764591651408;
    msg.roll_rate_mean = 0.7790009289809902;
    msg.time = 0.6096566192450774;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 21U;
    tmp_msg_0.lon_gain = 0.06828030274391328;
    tmp_msg_0.lat_gain = 0.0849756356574749;
    tmp_msg_0.bond_thick = 0.3184474739976558;
    tmp_msg_0.lead_gain = 0.2348131887608117;
    tmp_msg_0.deconfl_gain = 0.7064845308411443;
    tmp_msg_0.accel_switch_gain = 0.9511083195808506;
    tmp_msg_0.safe_dist = 0.2004469960397972;
    tmp_msg_0.deconflict_offset = 0.7182100182531825;
    tmp_msg_0.accel_safe_margin = 0.1418930629189159;
    tmp_msg_0.accel_lim_x = 0.07489640673678233;
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
    msg.setTimeStamp(0.8060325455404096);
    msg.setSource(42557U);
    msg.setSourceEntity(135U);
    msg.setDestination(27727U);
    msg.setDestinationEntity(135U);
    msg.type = 244U;
    msg.op = 170U;
    msg.err_mean = 0.27799380789932826;
    msg.dist_min_abs = 0.32609381175796204;
    msg.dist_min_mean = 0.06023659701601469;
    msg.roll_rate_mean = 0.2540377668185695;
    msg.time = 0.2911645583172856;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 145U;
    tmp_msg_0.lon_gain = 0.17983206540371;
    tmp_msg_0.lat_gain = 0.09277789852252927;
    tmp_msg_0.bond_thick = 0.37109346589904724;
    tmp_msg_0.lead_gain = 0.48052846210604117;
    tmp_msg_0.deconfl_gain = 0.5351195944368172;
    tmp_msg_0.accel_switch_gain = 0.12859138333766074;
    tmp_msg_0.safe_dist = 0.6823610106408412;
    tmp_msg_0.deconflict_offset = 0.69000046183275;
    tmp_msg_0.accel_safe_margin = 0.7325670492628992;
    tmp_msg_0.accel_lim_x = 0.15794348877516717;
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
    msg.setTimeStamp(0.3979307689787219);
    msg.setSource(21028U);
    msg.setSourceEntity(126U);
    msg.setDestination(1134U);
    msg.setDestinationEntity(145U);
    msg.type = 198U;
    msg.op = 86U;
    msg.err_mean = 0.33807146635865826;
    msg.dist_min_abs = 0.7071788254738856;
    msg.dist_min_mean = 0.7225795151503304;
    msg.roll_rate_mean = 0.5131683964582738;
    msg.time = 0.7363137028649844;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 220U;
    tmp_msg_0.lon_gain = 0.06730386179839665;
    tmp_msg_0.lat_gain = 0.7377802222435917;
    tmp_msg_0.bond_thick = 0.8268253818862635;
    tmp_msg_0.lead_gain = 0.8451995596197367;
    tmp_msg_0.deconfl_gain = 0.6376002051801957;
    tmp_msg_0.accel_switch_gain = 0.33207024214878267;
    tmp_msg_0.safe_dist = 0.9511232008558159;
    tmp_msg_0.deconflict_offset = 0.4354763595916875;
    tmp_msg_0.accel_safe_margin = 0.4121803175463359;
    tmp_msg_0.accel_lim_x = 0.13286768480168276;
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
    msg.setTimeStamp(0.906035916795693);
    msg.setSource(43297U);
    msg.setSourceEntity(125U);
    msg.setDestination(23083U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.03801864562497159;
    msg.lon = 0.01545124768994155;
    msg.eta = 2657702680U;
    msg.duration = 38324U;

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
    msg.setTimeStamp(0.26168879410917);
    msg.setSource(60114U);
    msg.setSourceEntity(199U);
    msg.setDestination(48366U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.7530410288210589;
    msg.lon = 0.5721919732959146;
    msg.eta = 859054325U;
    msg.duration = 21083U;

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
    msg.setTimeStamp(0.9719494662519089);
    msg.setSource(28096U);
    msg.setSourceEntity(83U);
    msg.setDestination(25086U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.1484855271153277;
    msg.lon = 0.6511244091121693;
    msg.eta = 4119437767U;
    msg.duration = 25095U;

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
    msg.setTimeStamp(0.5291309703736422);
    msg.setSource(59361U);
    msg.setSourceEntity(122U);
    msg.setDestination(23211U);
    msg.setDestinationEntity(148U);
    msg.plan_id = 53641U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.4276119707440681;
    tmp_msg_0.lon = 0.30153033938729923;
    tmp_msg_0.eta = 503730678U;
    tmp_msg_0.duration = 44745U;
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
    msg.setTimeStamp(0.3258885799531247);
    msg.setSource(54193U);
    msg.setSourceEntity(95U);
    msg.setDestination(3997U);
    msg.setDestinationEntity(230U);
    msg.plan_id = 17033U;

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
    msg.setTimeStamp(0.6516274750443425);
    msg.setSource(24225U);
    msg.setSourceEntity(138U);
    msg.setDestination(12139U);
    msg.setDestinationEntity(188U);
    msg.plan_id = 42415U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.44377114512266824;
    tmp_msg_0.lon = 0.003935887836398644;
    tmp_msg_0.eta = 3432050955U;
    tmp_msg_0.duration = 32537U;
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
    msg.setTimeStamp(0.631566945803689);
    msg.setSource(14591U);
    msg.setSourceEntity(6U);
    msg.setDestination(62804U);
    msg.setDestinationEntity(222U);
    msg.type = 0U;
    msg.command = 211U;
    msg.settings.assign("PMCCSLHJARYMZHGLVESENDKAIFHGLPOAPVJK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 46677U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("MTWNTCBSBXEIVOZTVUPMORUVWSYEXXFOSPUFQIGDGAPKCDLGULCHTRDFLNWUHJJSANQACBLFYNPZOAZHIDMHEKGYK");

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
    msg.setTimeStamp(0.5722966458608025);
    msg.setSource(13999U);
    msg.setSourceEntity(185U);
    msg.setDestination(20969U);
    msg.setDestinationEntity(165U);
    msg.type = 188U;
    msg.command = 57U;
    msg.settings.assign("RSQYTELBSEAXQAOIOVSAUQCDDXGPMHOEHKZSWDKFFLHTIIFSCIVDJKRZARPULRRXJADXNLEONLOKLBOWYFDUQDTNTVDXUEWTUOONVIWPVSLGNTTFKBXYFJAKVDMWMCNPYLVRGKZJNBBQKWUAPPZCVTMWZXUZNUEOTLBRVJSFQPHCEDRCPIPKH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 45319U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4733296964756948;
    tmp_tmp_msg_0_0.lon = 0.20018882943919492;
    tmp_tmp_msg_0_0.eta = 680382394U;
    tmp_tmp_msg_0_0.duration = 14658U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("MGSORDXNLYJOPHWMMGPQGKPLUIFROYFNVVYGCSJL");

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
    msg.setTimeStamp(0.6920246973607529);
    msg.setSource(49744U);
    msg.setSourceEntity(107U);
    msg.setDestination(48112U);
    msg.setDestinationEntity(88U);
    msg.type = 69U;
    msg.command = 114U;
    msg.settings.assign("TYIOWZSJVSGUZESMBJHQNLBKDTOMDJSGMSOLSPEANYZGCYSTCQNJWIJIXHQZPFSXLHYUGTIRBTDONLVKZAQGNLGJYJBYRMYRIFHZOAUFFMNOKPYORABZPWMRVNXXCYVPCHUFVUVBEUETEQPFMUKLEQMRTBCSFAFGKPWOTXKQZBKLVEHBLQUEGIDDDPCGXJINHGYNCWEXHMPCPXXFVDWUV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 9736U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WRJYWDPYCMUDZJMTXUBQODVGRBFCUGRFPXNYXLOOBCYLKIXLVJQXKLCNZVPBZKSCWAYSQIRPKKOEIHQWZFSSSDTBGAQQDDWNKDORZUHUHNTKGHV");

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
    msg.setTimeStamp(0.16810014109308802);
    msg.setSource(49981U);
    msg.setSourceEntity(116U);
    msg.setDestination(62349U);
    msg.setDestinationEntity(36U);
    msg.state = 132U;
    msg.plan_id = 48386U;
    msg.wpt_id = 137U;
    msg.settings_chk = 53061U;

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
    msg.setTimeStamp(0.24232917193492642);
    msg.setSource(36796U);
    msg.setSourceEntity(150U);
    msg.setDestination(19229U);
    msg.setDestinationEntity(90U);
    msg.state = 205U;
    msg.plan_id = 48651U;
    msg.wpt_id = 188U;
    msg.settings_chk = 37729U;

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
    msg.setTimeStamp(0.7379977283410399);
    msg.setSource(23772U);
    msg.setSourceEntity(110U);
    msg.setDestination(23357U);
    msg.setDestinationEntity(8U);
    msg.state = 105U;
    msg.plan_id = 37315U;
    msg.wpt_id = 81U;
    msg.settings_chk = 32550U;

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
    msg.setTimeStamp(0.9981586692429166);
    msg.setSource(49683U);
    msg.setSourceEntity(95U);
    msg.setDestination(29943U);
    msg.setDestinationEntity(41U);
    msg.uid = 11U;
    msg.frag_number = 101U;
    msg.num_frags = 104U;
    const signed char tmp_msg_0[] = {124, -25, 119, 126, -24, 84, -49, -123, -73, -96, -65, 44, -107, 79, -96, 99, -41, 115, 23, -7, 124, -110, -8, 18, 87, 14, -35, 33, 29, -127, 125, 9, 67, -73, -36, -117, 68, 121, -11, 11, -70, -52, 102, 34, 26, -39, -105, 118, -10, 88, 42, 4, 102, 87, -45, 75, -60, 59, 74, 122, -33, -101, -6, 102, -17, -111, 99, -79, 49, 7, -71, -37, 29, 19, 125, -77, -25, 30, -42, -96, -7, 70, -19, -4, 65, 88, -20, 15, 33, -86, -14, -119, 97, 14, -25, -4, 69, -101, 105, -34, -54, -85, -52, 109, -74, 55, -125, -47, 70, 109, -23, -99, -28, 98, -106, 27, 110, -69, 16, 50, -42, 47, -63, -1};
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
    msg.setTimeStamp(0.1658354188060588);
    msg.setSource(18251U);
    msg.setSourceEntity(231U);
    msg.setDestination(58085U);
    msg.setDestinationEntity(203U);
    msg.uid = 44U;
    msg.frag_number = 74U;
    msg.num_frags = 235U;
    const signed char tmp_msg_0[] = {101, -82, 5, -116, 68, 86, 59, 111, 78, -127, 72, -54, 24, -73, 99, -100, 0, 75, 87, -98, -68, 112, 22, 78, 111, -59, -55, 97, 18, 116, 107, 26, 92, -72, 112, 108, 124, -46, -98, 62, 102, -113, 74, 42, -48, 110, -8, 61, -116, 26, -37, -104, -126, 125, 125, 43, 48, -34, -71, -127, 7, -49, -72, 53, -89, 108, -5, 101, -23, -28, -62, 69, -92, -10, -79, -16, -47, 46, 82, 124, 91, -64, 44, -62, 15, 43, -88, -38, 74, -76, 64, 2, 123, 91, 107, 29, -6, 37, -40, -68, -105};
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
    msg.setTimeStamp(0.6126608336747945);
    msg.setSource(43892U);
    msg.setSourceEntity(249U);
    msg.setDestination(17582U);
    msg.setDestinationEntity(190U);
    msg.uid = 151U;
    msg.frag_number = 143U;
    msg.num_frags = 60U;
    const signed char tmp_msg_0[] = {-110, 106, 62, 92, 57, 73, 80, -99, 109, 36, -99, 61, 27, 5, 102, -77, -26, 48, -34, 94, 34, -104, -43, -59, 61, 112, 41, -110, -3, -115, -50, 83, -11, -73, 20, -127, -58, 76, -1, -87, 126, 50, 23, -62, -84, 5, -88, -101, 54, 51, -66, 68, -52, 23, 88, -57, 10, -105, 7, -108, -87, 16, 30, 43, 83, -120, 74, 119, -7, 13, 77, 64, 111, 75, 31, 31, 75, 47, -77, -94, 81, 97, -44, -114, -47, 10, -52, 97, 82, 89, -114, 72, -50, 75, -8};
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
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.7244794114335603);
    msg.setSource(36141U);
    msg.setSourceEntity(59U);
    msg.setDestination(21417U);
    msg.setDestinationEntity(237U);
    msg.uid = 104U;
    msg.op = 219U;
    msg.frag_ids.assign("FDFYEYOYMKTAUVUDWUBZKAEGFYIJMQRKHWFJQSJEYZEWXSFKSRGCTNBSRILWATIDMQOIAYHDLMKEOBMWDLMXLQKUZUIEZOQIACPFTVBXHHVMIVLDRXGZZPGPKHXLDTRNPDYQXBKVKJKNBNBAWPOHUETGJSCQVVTUGGUSJNCSAWPHNWJWEAVUYVCBMRINNOJNDELFRETHLZXRSTBBPJILYOFROWIXFCXOGOGPGACZJUYPQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.050311550344098066);
    msg.setSource(49925U);
    msg.setSourceEntity(69U);
    msg.setDestination(51874U);
    msg.setDestinationEntity(213U);
    msg.uid = 166U;
    msg.op = 147U;
    msg.frag_ids.assign("PXFSKQELXTRYFMVIPZKUPTIDTUEWJODJGDOBVMYZNFNZAKUKJUJYQBCD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.9639670324764613);
    msg.setSource(28663U);
    msg.setSourceEntity(130U);
    msg.setDestination(64523U);
    msg.setDestinationEntity(24U);
    msg.uid = 171U;
    msg.op = 81U;
    msg.frag_ids.assign("LLNGPQDLYJQZNPQOAPZMOFDNCFQOWXZEYROHSAIKUOBYIUJCBISXXIEGJBMJZKVTOHEVKIYJMHRLDEHFCEPKWTPGLVRXPTHMYXAXWSSKQQONZNDASXCCGIMRBJMDKBULHDNSZFWYSZXVZGIPT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.12699879027353078);
    msg.setSource(45631U);
    msg.setSourceEntity(58U);
    msg.setDestination(19367U);
    msg.setDestinationEntity(100U);
    msg.content_type.assign("YQXGRLBJZNZJSLAWURFGEPTQTOEAGLINPJVFTKYFQZPKSQRQPCRXNATAIVXHRCOUKHGKHMUDIXTHLXISQIHHJOIVNWCMAMMPUJBXEXEABLGNFDRMVWBJLBUDQJPYZYFKSYEOATLZNPWFKALTBSWCWVOGVAEYMKZJRTQCLHMDUBNDEKZMSOKREIUVNCBYCDNLIXS");
    const signed char tmp_msg_0[] = {-31, -126, -35, -30, 109, 27, 28, 93, 108, -36, -19, -127, 31, 46, 69, -49, -59, 44, 53, 64, 19, 2, 101, -107, -101, -123, -25, -37, -16, -31, 36, -103, 49, 72, 91, 67, 71, 55, 17, 26, 77, 12, 53, 56, 84, -60, -46, 11, -100, -3, 68, -10};
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
    msg.setTimeStamp(0.5026317077274567);
    msg.setSource(20466U);
    msg.setSourceEntity(42U);
    msg.setDestination(7524U);
    msg.setDestinationEntity(187U);
    msg.content_type.assign("IBHPVKQPNOOLRATOPHMOFDIGYYEYLVZCDXXGSASRNEIQJTXVSLFBHJAZDMBBRUBPSPKBETOJMUPZXCODCNLEESWQVXHDZXEWMROAZHUVKUZOZDUCDCCAJLTVFCEGFFRUSWNHNIFQMAFKUCGKUNNQYAGWKBVFPGGYHIMMWAJRJGIMLKMACLTQRGLNZEIXIZXWS");
    const signed char tmp_msg_0[] = {-106, -71, 86, -53, 126, 30, 89, 18, -124, -9, 47, 7, 3, 75, 62, 48, 13, -65, 32, 63, -44, -66, 28, -119, 69, 14, -47, -122, 98, 101, -97, 103, 22, -97, 28, -9, 65, -29, 118, -81, 84, -118, 63, -90, -46, -58, -52, -78, 82, 103, -35, 90, -35, -24, -80, 63, -16, 61, 99, -10, -33, 49, -103, -33, -128, 11, -98, -15, 72, 10, 108, 102, -98, 30, 66, 71, 10, 98, 14, -81, 124, 33, 4, 22, 63, 93, -76, -98, -99, 89, 78, -48, 17, -69, -66, -46, -37, -120, -121, 21, 5, -60, 47, 7, 76, 73, 11, -27, -58, -29, 124, 85, 59, 18, 87, -123, 126, 104, -71, -71, 107, 104, -96, -1, 105, 62, -107, -116, -26, -67, 94, 8, -45, -125, -27, -22, -59, 104, -31, 49, -100, 23, 30, -94, 110, 89, 27, 0, 0, -25, 48, 90, 6, 44, -65, 17, 26, -60, 106, 53, -107, -31, 119};
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
    msg.setTimeStamp(0.3363971329898995);
    msg.setSource(23610U);
    msg.setSourceEntity(8U);
    msg.setDestination(31446U);
    msg.setDestinationEntity(75U);
    msg.content_type.assign("SRJCCWWDKJKHYKDLMENTQTKQKVXLVYHIUCHERHDUYUWJAFWNEPTVQJYGGMCVEDAADTGMLRSPUCGXNJBLVRYMOSIKVIQTDRXJSHOBWROYLIRPZULFVVZFLVENFKRZWDBSOOXMTBBJNFMOCWKGZMTORGOLDAQXMFNPFHPOFKWIOSBSKCINSAHHTNEXCQXZQEYBJUWZIGHBSGLUZIXIJLAHYGXDAP");
    const signed char tmp_msg_0[] = {-75, -96, 5, -17, -14, -90, -93, 113, -117, 38, 48, -10, 39, -28, -126, -67, -18, 120, -58, -59, 58, 19, 9, 16, -40, 103, 120, -87, 56, -122, 12, -98, -95, -92, 22, -73, -7, -23, -22, -91, -3, -106, 20, 122, 31, 71, 103, -94, 99, -109, 84, 5, 94, -38, -104, -95, 29, -96, -76, -14, 34, 124, 87, -44, -125, 7, 122, 25, 43, -99, 80, -16, -97, -114, -64, -45, -112, 59, -110, 48, -23, -126, -20, -43, -96, -71, 119, 109, -111, -29, 59, -38, 96, 63, 33, -28, -89, -110, -34, -20, -86, -21, 24, 73, -118, 19, 32, 43, 18, 71, 21, -93, -63, 124, -45, -115, -52, 26, 79, 43, -87, -16, 107, 7, 71, -80, 30, 120, -49, 17, 62, 29, -83, -47, -24, 97, -83};
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
    msg.setTimeStamp(0.9570926093460181);
    msg.setSource(49417U);
    msg.setSourceEntity(174U);
    msg.setDestination(54510U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.03068355695511027);
    msg.setSource(57041U);
    msg.setSourceEntity(165U);
    msg.setDestination(64792U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.8349497398590472);
    msg.setSource(45233U);
    msg.setSourceEntity(212U);
    msg.setDestination(62346U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.6462815712924335);
    msg.setSource(41618U);
    msg.setSourceEntity(11U);
    msg.setDestination(42483U);
    msg.setDestinationEntity(51U);
    msg.target = 39294U;
    msg.bearing = 0.10648306798402984;
    msg.elevation = 0.2954838088117492;

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
    msg.setTimeStamp(0.3327597886096737);
    msg.setSource(50373U);
    msg.setSourceEntity(33U);
    msg.setDestination(61174U);
    msg.setDestinationEntity(74U);
    msg.target = 61708U;
    msg.bearing = 0.2979044674568415;
    msg.elevation = 0.6438141326742055;

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
    msg.setTimeStamp(0.7678940639297279);
    msg.setSource(52391U);
    msg.setSourceEntity(213U);
    msg.setDestination(37074U);
    msg.setDestinationEntity(63U);
    msg.target = 28966U;
    msg.bearing = 0.31422664960067115;
    msg.elevation = 0.5887458869293961;

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
    msg.setTimeStamp(0.9493667187700007);
    msg.setSource(52069U);
    msg.setSourceEntity(55U);
    msg.setDestination(29290U);
    msg.setDestinationEntity(169U);
    msg.target = 36833U;
    msg.x = 0.2627932781287101;
    msg.y = 0.5684366236728077;
    msg.z = 0.8061017186461419;

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
    msg.setTimeStamp(0.2590472515536535);
    msg.setSource(9950U);
    msg.setSourceEntity(75U);
    msg.setDestination(1171U);
    msg.setDestinationEntity(245U);
    msg.target = 8508U;
    msg.x = 0.2534311873695301;
    msg.y = 0.6431010311857981;
    msg.z = 0.6247496257022079;

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
    msg.setTimeStamp(0.10496064548181072);
    msg.setSource(45036U);
    msg.setSourceEntity(109U);
    msg.setDestination(8445U);
    msg.setDestinationEntity(197U);
    msg.target = 26882U;
    msg.x = 0.3777753025829499;
    msg.y = 0.41901632793842314;
    msg.z = 0.9787910636344624;

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
    msg.setTimeStamp(0.288900140832444);
    msg.setSource(24659U);
    msg.setSourceEntity(75U);
    msg.setDestination(2856U);
    msg.setDestinationEntity(58U);
    msg.target = 3700U;
    msg.lat = 0.014733343769972373;
    msg.lon = 0.17194264664448267;
    msg.z_units = 217U;
    msg.z = 0.7450736042803856;

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
    msg.setTimeStamp(0.7869169730835052);
    msg.setSource(59472U);
    msg.setSourceEntity(149U);
    msg.setDestination(26411U);
    msg.setDestinationEntity(114U);
    msg.target = 20219U;
    msg.lat = 0.0044250766924149865;
    msg.lon = 0.8213575080520488;
    msg.z_units = 123U;
    msg.z = 0.7464021040525369;

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
    msg.setTimeStamp(0.5000926693829881);
    msg.setSource(35340U);
    msg.setSourceEntity(24U);
    msg.setDestination(15780U);
    msg.setDestinationEntity(181U);
    msg.target = 53575U;
    msg.lat = 0.004683445642748585;
    msg.lon = 0.8476206870847912;
    msg.z_units = 222U;
    msg.z = 0.954486080743787;

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
    msg.setTimeStamp(0.6775890195918567);
    msg.setSource(15473U);
    msg.setSourceEntity(134U);
    msg.setDestination(28156U);
    msg.setDestinationEntity(212U);
    msg.locale.assign("MQQCGOICAQYMPOCQCFRZCLEAVYVZBICBHTMTUXRDIQCNRLOSXJUKGHVOYSWKESXHCLDOFWUNGTOO");
    const signed char tmp_msg_0[] = {-35, 44, -96, 114, -12, 23, 122, 88, 40, -93, 23, 125, 58, 6, 39, 30, 27, -123, 95, -109, 59, -114, 17, 19, 3, -32, -6, -15, -101, -16, 34, 69, 102, -24, -80, 59, -75, 110, -81, -30};
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
    msg.setTimeStamp(0.4914477571200513);
    msg.setSource(18597U);
    msg.setSourceEntity(174U);
    msg.setDestination(16876U);
    msg.setDestinationEntity(191U);
    msg.locale.assign("MUGSWAHRSIRYKBFYIFPZZZSFISJCGJDFLLMSQMZDQEGYWMLLWKEAKMEVZBRCALMXJVTVRQNVHOWELPOUAOBVUVBXIXOUHWVYYLGUUBKZGQDFZNPBQMAXWHURNKNFRBTZFEYGRPNNDSNWXEPAWBVRJYKS");
    const signed char tmp_msg_0[] = {62, 60, 40, -118, 76, 113, 102, -76, -23, 107, 102, 114, -63, -71, -119, -123, 94, -117, 49, -34, 57, -91, -14, -90, 105, -32, 111, -22, -62, -36, 19, 2, -33, -5, 117, 74, -98, -41, 74, 75, -117, 12, 38, -99, 74, 69, 87, 22, -46, 6, -110, -31, -121, -113, 28, 125, -97, -37, 10, -51, -122, -100, 112, 72, 16, 95, 88, -88, -124, 124, 108, 16, 71, -38, 98, -34, 115, -102, 123, -62, 41, 3, 28, -73, 100, -57, 40, -30, 49, 100, 112, 32, -13, -31, 43, -111, -128, 120, 1, -117, 9, -61, -113, 111, 78, 53, -4, 20, -78, -108, -7, -125, 115, 116, -91, -49, -99, -71, 3, 67, -1, -55, -107, 53, -21, -69, -49, 41, -6, -57, -108, 14, -96, 95, -70, 56, -114, 20, -103, -107, -111, 42, -63, 42, 1, 12, 112, 44, 48, 49, 34, 15, 24, 126, -99, -27, 102, -22, -34, 120, -48, -106, -57, 59, -43, -74, 50, -76, -115, 11, -31, 47, -35, -20, 61, -80, 67, 5, 66, -66, 20, 37, 30};
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
    msg.setTimeStamp(0.5351639918764441);
    msg.setSource(43856U);
    msg.setSourceEntity(95U);
    msg.setDestination(31124U);
    msg.setDestinationEntity(26U);
    msg.locale.assign("HSYODGKEPLPINYETZWLXWHGHQAZDHRMIYFPVBVORMFYDVOEUTBLCGDLNUEHEKSSARNPQCJARKKRZMYBBWVNBYUVUWRZLUBYHNJNFTTTGZOFXVYTKDARHAQSQSQZPKJDABMAOCDXONLQIPQTQJJHGXQVLURZCBWFJ");
    const signed char tmp_msg_0[] = {-91, 58, 85, 119, 121, 85, 85, 44, 95, 65, 84, -22, -119, 0, -80, -124, -81, 6, 90, -93, -123, 24, -127, 18, -114, -89, -69, -104, -81, 72, 71, -110, 53, 67, -42, 67, -108, -56, -46, 78, 110, -110, 80, 125, 73, 60, -2, -47, 96, 94, -95, -31, 81, -100, 115, 54, 86, 125, -48, 79, 93, 79, 20, 80, -8, -13, 56, 124, -22, 28, 111, 23, 104, 124, -56, 72, -55, 11, -30, 54, 49, 18, -74, 120, 117, 72, 35, -89, 112, 122, 118, 60, -126, -39, -48, 49, 73, -51, 59, -9, 82, 110, 1, -12, 55, -26, -112, 100, -73, 45, -59, -59, 21, 0, 10, -84, -66, -27, 104, 98, -71, -111, 94, 66, 56, -48, -93, 89, -7, 2, 62, 87, 25, -121, 74, -115, -19, 65, -37, 62, -102, 123, 56, 51, -96, -68, -82, 68, -127, 125, 1, 16, -42, 126, 39, 14, -50, -66, 60, -59, 17, -72, 59, 113, 11, -73, -70, 121, -27, -13, 113, -19, 120, 45, 9, 35, -76, -72, -33, -8, 8, 9, 35, -122, 24, 22, -23, -125, -19, 7, -65, -9, 19, -44, 91, 0, 34, 110, -118, -12, 70, -18, 107, 34, 37, 54, 48, 47, -70, -66, 70, 78, -52, 24, -69, -57, -3, 45, 112, -58, 46, 6, -112, -3, 16, -104, -82, 7, 112, 8, 19, 34, -22, -79, 14, 45, -38, 36, 16, -26};
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
    msg.setTimeStamp(0.6646667511304551);
    msg.setSource(21288U);
    msg.setSourceEntity(207U);
    msg.setDestination(2977U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.8091029328381226);
    msg.setSource(60671U);
    msg.setSourceEntity(42U);
    msg.setDestination(58652U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.3058782694318163);
    msg.setSource(9035U);
    msg.setSourceEntity(242U);
    msg.setDestination(31644U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.23629018716232308);
    msg.setSource(28992U);
    msg.setSourceEntity(203U);
    msg.setDestination(48197U);
    msg.setDestinationEntity(135U);
    msg.camid = 99U;
    msg.x = 6041U;
    msg.y = 16969U;

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
    msg.setTimeStamp(0.48518374098959427);
    msg.setSource(36836U);
    msg.setSourceEntity(102U);
    msg.setDestination(13131U);
    msg.setDestinationEntity(155U);
    msg.camid = 120U;
    msg.x = 4219U;
    msg.y = 13685U;

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
    msg.setTimeStamp(0.021305727685122622);
    msg.setSource(18337U);
    msg.setSourceEntity(125U);
    msg.setDestination(51819U);
    msg.setDestinationEntity(67U);
    msg.camid = 166U;
    msg.x = 48659U;
    msg.y = 23095U;

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
    msg.setTimeStamp(0.6193518045174008);
    msg.setSource(22078U);
    msg.setSourceEntity(22U);
    msg.setDestination(15131U);
    msg.setDestinationEntity(128U);
    msg.camid = 11U;
    msg.x = 65174U;
    msg.y = 4470U;

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
    msg.setTimeStamp(0.7343500350405533);
    msg.setSource(25418U);
    msg.setSourceEntity(17U);
    msg.setDestination(45912U);
    msg.setDestinationEntity(36U);
    msg.camid = 89U;
    msg.x = 58867U;
    msg.y = 56016U;

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
    msg.setTimeStamp(0.03607419556672142);
    msg.setSource(4958U);
    msg.setSourceEntity(47U);
    msg.setDestination(35194U);
    msg.setDestinationEntity(153U);
    msg.camid = 50U;
    msg.x = 55667U;
    msg.y = 61620U;

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
    msg.setTimeStamp(0.1827903800246149);
    msg.setSource(49501U);
    msg.setSourceEntity(199U);
    msg.setDestination(44701U);
    msg.setDestinationEntity(83U);
    msg.tracking = 143U;
    msg.lat = 0.760757976846998;
    msg.lon = 0.19737018061797906;
    msg.x = 0.9676153474956561;
    msg.y = 0.2830257218577691;
    msg.z = 0.3811891180018545;

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
    msg.setTimeStamp(0.8903660198938366);
    msg.setSource(34076U);
    msg.setSourceEntity(247U);
    msg.setDestination(31255U);
    msg.setDestinationEntity(36U);
    msg.tracking = 56U;
    msg.lat = 0.9242889660240114;
    msg.lon = 0.9338510212500044;
    msg.x = 0.6515641759006345;
    msg.y = 0.9564242292604146;
    msg.z = 0.877610945644227;

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
    msg.setTimeStamp(0.1044860194424776);
    msg.setSource(62717U);
    msg.setSourceEntity(14U);
    msg.setDestination(44976U);
    msg.setDestinationEntity(42U);
    msg.tracking = 48U;
    msg.lat = 0.06853644232736811;
    msg.lon = 0.3726596790609451;
    msg.x = 0.8241088358062096;
    msg.y = 0.3432740563693323;
    msg.z = 0.9412941591102286;

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
    msg.setTimeStamp(0.2174274065512779);
    msg.setSource(31997U);
    msg.setSourceEntity(74U);
    msg.setDestination(4447U);
    msg.setDestinationEntity(202U);
    msg.target.assign("LVHOHVEXBNNZNHZRLUAQEKGUARGFIDRVCWQOUYQXZWHCLSABXIRHIDZQGBSMIPXQHRCNVUZZSXDICSTRHXDKBKUTVELLE");
    msg.lbearing = 0.21260874258238494;
    msg.lelevation = 0.8892156076724632;
    msg.bearing = 0.28788241460322017;
    msg.elevation = 0.5215718894261481;
    msg.phi = 0.016967409786893928;
    msg.theta = 0.29156341481692627;
    msg.psi = 0.19600328240375575;
    msg.accuracy = 0.003211701634468933;

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
    msg.setTimeStamp(0.3305528376241581);
    msg.setSource(4044U);
    msg.setSourceEntity(69U);
    msg.setDestination(61845U);
    msg.setDestinationEntity(18U);
    msg.target.assign("JKGNLZPQNHSEUZFDBIHACLIPCVRFZDBMDZSRGOYWYDIJJUUKFXOMBFCBKMHPRZBTNDYUQDQLLYWGOVLYTCEROXWEEWXJVDBCHNECONCGMPQVRAVKMQUYULPLHUVWPXZZAQUZAGPBGMYERJTSFIEPIRMFUVCCSEXVAOXYIPWFTZWWRQF");
    msg.lbearing = 0.9455674215265456;
    msg.lelevation = 0.36243975975665943;
    msg.bearing = 0.3882272717918924;
    msg.elevation = 0.7687115295518709;
    msg.phi = 0.8469208733495931;
    msg.theta = 0.3558920575699741;
    msg.psi = 0.8546037606743936;
    msg.accuracy = 0.7256759091395915;

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
    msg.setTimeStamp(0.5568748099053143);
    msg.setSource(57626U);
    msg.setSourceEntity(232U);
    msg.setDestination(36158U);
    msg.setDestinationEntity(100U);
    msg.target.assign("DBXQKDQYWEXSMSAIYCZTYTSQPLIRBDWFWFIMMJBERVJXLXQPFVALNTCTSCZWGXTJDLYRNNRMCJGNMHKFYKZCTLWTRKHZJUZZOWLRMYZAAKWPOEEZSXOUJOYCASWKSHWVKRLRBEDILONMUFNOQGMDGVUWPONISBUPEXZIPBXHQVBDEGPRMCQIKOGALLBUCQAJYRJHNDUFNHXYIQ");
    msg.lbearing = 0.046280576951506336;
    msg.lelevation = 0.8844850781212229;
    msg.bearing = 0.7984577001348766;
    msg.elevation = 0.060660905844970636;
    msg.phi = 0.8179803811196634;
    msg.theta = 0.7746744414609934;
    msg.psi = 0.3676769214719049;
    msg.accuracy = 0.7929063452111741;

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
    msg.setTimeStamp(0.6621680657919503);
    msg.setSource(51081U);
    msg.setSourceEntity(93U);
    msg.setDestination(24989U);
    msg.setDestinationEntity(224U);
    msg.target.assign("PQUPBRCEKTERUKX");
    msg.x = 0.9345833255976022;
    msg.y = 0.006766017737210084;
    msg.z = 0.4013275527135509;
    msg.n = 0.37273277054052345;
    msg.e = 0.4318905996832454;
    msg.d = 0.10870775804368005;
    msg.phi = 0.629155015655216;
    msg.theta = 0.5685353503175679;
    msg.psi = 0.40284151301449744;
    msg.accuracy = 0.46577195791653303;

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
    msg.setTimeStamp(0.27459554239649475);
    msg.setSource(10593U);
    msg.setSourceEntity(14U);
    msg.setDestination(22391U);
    msg.setDestinationEntity(254U);
    msg.target.assign("ULRLXSLRZTDTUEAQLBQLTJTJFUGODBMQFIEQAWCSSAVXRFKIEYPQNNIDRHXZOPBSDHHWBIMLWJMIKCKVNGPPFLZBEXHXPQIKNBUWOWKIJAQOCKXDFVSUPNYTRWDVKJIZNWLFGZWDYHCWMCREZAAYGNGRVCHDAEDSHMYH");
    msg.x = 0.26580134572186775;
    msg.y = 0.34200865852173934;
    msg.z = 0.5217777129688459;
    msg.n = 0.6049193172414093;
    msg.e = 0.2107793057687466;
    msg.d = 0.9991251466283296;
    msg.phi = 0.11573842315728311;
    msg.theta = 0.31655015029992095;
    msg.psi = 0.579648021666076;
    msg.accuracy = 0.8396946531415581;

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
    msg.setTimeStamp(0.829098349297681);
    msg.setSource(29991U);
    msg.setSourceEntity(92U);
    msg.setDestination(34809U);
    msg.setDestinationEntity(103U);
    msg.target.assign("DJODAZKZSQILDZNDZPUMAKUMNDOBKJCKTIYBOCPQGGNYGAXNWGHPSYVIPWGLOPURQS");
    msg.x = 0.780368651263831;
    msg.y = 0.08809180988800513;
    msg.z = 0.7987107779503255;
    msg.n = 0.462728136091238;
    msg.e = 0.9715486422577438;
    msg.d = 0.9175254780009788;
    msg.phi = 0.04217949961810352;
    msg.theta = 0.776258905507123;
    msg.psi = 0.1939809665849428;
    msg.accuracy = 0.12168093069440278;

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
    msg.setTimeStamp(0.7116822032831097);
    msg.setSource(52033U);
    msg.setSourceEntity(66U);
    msg.setDestination(38055U);
    msg.setDestinationEntity(177U);
    msg.target.assign("XVJJGYWVPQMXVOQZOHQBZWYMJCTKCMGCRGZENMULTWFEFJGATUOHECBAFMBWDPQECNGOKMWQLPZESMJIUIEAARGJDYYDBUVRSDKFSWSPBNSONDRAAGXNTNXSLIHEDSPCPENHYPFYZTIQBWTQDAIFDRKONRVKEHAJYLPFNIGZXBCKBSJYRCHTHMQZDWOBXPJRFAQKWSLGZYTMNF");
    msg.lat = 0.22907417004665365;
    msg.lon = 0.11678978751784641;
    msg.z_units = 52U;
    msg.z = 0.3786484104330661;
    msg.accuracy = 0.5550823165064407;

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
    msg.setTimeStamp(0.7666070943287475);
    msg.setSource(17109U);
    msg.setSourceEntity(154U);
    msg.setDestination(12192U);
    msg.setDestinationEntity(70U);
    msg.target.assign("ORVNWEJAMURQNVXFXLSTTPBRXXJFQWIMHKGDEDRSLKSAEMLZXQVICRTRAYDVBDDOLYXKZTJEQNXUFGVWGMIFHUPTRYHHMNUPPXSYWFIFMCFTZYAUNWKGDBKOJBYPCWUXERWADHPJTNCWQYKVNZTCOHBSJEZYPEVKQAJFORIHILFYGGLZGJEONOMPXCAHZNBSZLSGKNOYHRCPCUAJ");
    msg.lat = 0.010701745128606444;
    msg.lon = 0.752048087110106;
    msg.z_units = 134U;
    msg.z = 0.7997492810661576;
    msg.accuracy = 0.6210021028088054;

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
    msg.setTimeStamp(0.3118137108059119);
    msg.setSource(64147U);
    msg.setSourceEntity(33U);
    msg.setDestination(33106U);
    msg.setDestinationEntity(34U);
    msg.target.assign("PODZAZFAWNRNTDXNFPYIXOZLEYWNIPJKVAUYGBATZNHJHAEDMBWLOKASWRXSGEQIJAHSA");
    msg.lat = 0.9318652188296321;
    msg.lon = 0.11732490757042957;
    msg.z_units = 208U;
    msg.z = 0.536487604093732;
    msg.accuracy = 0.8524334899415931;

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
    msg.setTimeStamp(0.49938302309055105);
    msg.setSource(8222U);
    msg.setSourceEntity(127U);
    msg.setDestination(26763U);
    msg.setDestinationEntity(134U);
    msg.name.assign("YIRVFZIZPSUOARIYWJWARQLTCDTMZQWQLCSQAAIGCDSEMEFSPOJDUNVLHHBATTAMXVMFXKUJOGNHRVJGPMEDTMEDGBXJMKYUZGGKFYIJXCFFSPUVWKIYYFBEUUCWLLOBFJRQWQBOKBCIETPSDMNZKFUXRNYGVHSJADNZLELVVTO");
    msg.lat = 0.4729574376866629;
    msg.lon = 0.8717159338021756;
    msg.z = 0.37014658304081727;
    msg.z_units = 160U;

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
    msg.setTimeStamp(0.3094696081075402);
    msg.setSource(36851U);
    msg.setSourceEntity(76U);
    msg.setDestination(1853U);
    msg.setDestinationEntity(131U);
    msg.name.assign("MODCEBMBFSYDCZRWGGCXFIWULXGLZTVJJQUHEJSULNDXYTPPABSQOGUZUSWVAAZVWCIVRWNYOERTMOBYAJOEBXMAOWSBZGKIDCICIZKPHUOHDZTWKWEUTULATKXTQHVEIHGGXSJKWCDZMGEIFMMSNKRFDJRNBNLVDLKVJORMBVGYXFNJQNPQCUUQQKDIIXSZPOMHBHQABKTHQFHGPVPNJEARPHALYEQ");
    msg.lat = 0.3079253321261315;
    msg.lon = 0.12547217113907339;
    msg.z = 0.8331381217193637;
    msg.z_units = 132U;

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
    msg.setTimeStamp(0.9661498393299448);
    msg.setSource(32403U);
    msg.setSourceEntity(59U);
    msg.setDestination(64362U);
    msg.setDestinationEntity(211U);
    msg.name.assign("SPXRLNCXFIPPAMTCTDHUNLQSAZVOSNWLWALTFTDGKEQDUBEJTZDOUCRHCAWOTMCMAGDRZQGHJYYNVIYLQWOZOQNETQKEWWYBMJQBDCESJBAQXJMIRMXJUX");
    msg.lat = 0.555622419823465;
    msg.lon = 0.41528590513339814;
    msg.z = 0.25787976369454757;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.9043268144607638);
    msg.setSource(5977U);
    msg.setSourceEntity(80U);
    msg.setDestination(36194U);
    msg.setDestinationEntity(213U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.5072566287441044);
    msg.setSource(26446U);
    msg.setSourceEntity(237U);
    msg.setDestination(3860U);
    msg.setDestinationEntity(214U);
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
    msg.setTimeStamp(0.04274372393075476);
    msg.setSource(29093U);
    msg.setSourceEntity(38U);
    msg.setDestination(43005U);
    msg.setDestinationEntity(76U);
    msg.op = 168U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OEYYSKDDWFPWDUKQKAYVNHNSSKBNSLFXNGUTPYYFDTVMZAYWGIAGQPLLNVXOXIAIGWLMQUOIYHGWRNKERFCTIEQCMJHZBBKDPFWFNZLZMCQEYAFOQTUKHUUJNTXBFJZONBCPMLS");
    tmp_msg_0.lat = 0.4288202268279723;
    tmp_msg_0.lon = 0.3043608865019847;
    tmp_msg_0.z = 0.1697945578715777;
    tmp_msg_0.z_units = 39U;
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
    msg.setTimeStamp(0.5422354011325929);
    msg.setSource(27736U);
    msg.setSourceEntity(225U);
    msg.setDestination(31352U);
    msg.setDestinationEntity(174U);
    msg.value = 0.9157960983615449;
    msg.type = 194U;

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
    msg.setTimeStamp(0.04535543798363517);
    msg.setSource(47783U);
    msg.setSourceEntity(227U);
    msg.setDestination(55379U);
    msg.setDestinationEntity(185U);
    msg.value = 0.3643485970587196;
    msg.type = 108U;

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
    msg.setTimeStamp(0.02335412727644326);
    msg.setSource(33499U);
    msg.setSourceEntity(43U);
    msg.setDestination(54709U);
    msg.setDestinationEntity(143U);
    msg.value = 0.28198837105322827;
    msg.type = 27U;

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
    msg.setTimeStamp(0.972626973627282);
    msg.setSource(8336U);
    msg.setSourceEntity(46U);
    msg.setDestination(41338U);
    msg.setDestinationEntity(10U);
    msg.value = 0.6303743493975094;

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
    msg.setTimeStamp(0.9859454446908544);
    msg.setSource(8719U);
    msg.setSourceEntity(248U);
    msg.setDestination(40270U);
    msg.setDestinationEntity(129U);
    msg.value = 0.0718749866767997;

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
    msg.setTimeStamp(0.5434264089365647);
    msg.setSource(45505U);
    msg.setSourceEntity(114U);
    msg.setDestination(40877U);
    msg.setDestinationEntity(214U);
    msg.value = 0.7022256909303397;

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
    msg.setTimeStamp(0.6093181469552282);
    msg.setSource(9809U);
    msg.setSourceEntity(199U);
    msg.setDestination(17661U);
    msg.setDestinationEntity(73U);
    msg.timestamp_last_service = 0.9172076828375804;
    msg.time_next_service = 0.5188971058242843;
    msg.time_motor_next_service = 0.8890353191241853;
    msg.time_idle_ground = 0.1955245378710031;
    msg.time_idle_air = 0.6430075764992171;
    msg.time_idle_water = 0.03261575604030287;
    msg.time_idle_underwater = 0.019659680575142335;
    msg.time_idle_unknown = 0.22000098076470276;
    msg.time_motor_ground = 0.7621959716944143;
    msg.time_motor_air = 0.959259712184275;
    msg.time_motor_water = 0.8453326922805274;
    msg.time_motor_underwater = 0.2986002387690544;
    msg.time_motor_unknown = 0.40522215865251765;
    msg.rpm_min = 11695;
    msg.rpm_max = -4611;
    msg.depth_max = 0.6465340121535481;

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
    msg.setTimeStamp(0.07530292248452453);
    msg.setSource(6956U);
    msg.setSourceEntity(252U);
    msg.setDestination(27595U);
    msg.setDestinationEntity(183U);
    msg.timestamp_last_service = 0.5978447159780349;
    msg.time_next_service = 0.2999686840248922;
    msg.time_motor_next_service = 0.977808907629301;
    msg.time_idle_ground = 0.13790611483037618;
    msg.time_idle_air = 0.6001744844370249;
    msg.time_idle_water = 0.01848045456736014;
    msg.time_idle_underwater = 0.19476840584791622;
    msg.time_idle_unknown = 0.11368533200499109;
    msg.time_motor_ground = 0.733391770195795;
    msg.time_motor_air = 0.05299217931132072;
    msg.time_motor_water = 0.03615661213962584;
    msg.time_motor_underwater = 0.8012190339690448;
    msg.time_motor_unknown = 0.18527698049049945;
    msg.rpm_min = -20460;
    msg.rpm_max = -23340;
    msg.depth_max = 0.3315096916030943;

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
    msg.setTimeStamp(0.7515412668461073);
    msg.setSource(4108U);
    msg.setSourceEntity(201U);
    msg.setDestination(37201U);
    msg.setDestinationEntity(70U);
    msg.timestamp_last_service = 0.7085404882317538;
    msg.time_next_service = 0.39049047239973655;
    msg.time_motor_next_service = 0.4535641262760861;
    msg.time_idle_ground = 0.8807841819113773;
    msg.time_idle_air = 0.5685391848159143;
    msg.time_idle_water = 0.2230476339356332;
    msg.time_idle_underwater = 0.3043651580027805;
    msg.time_idle_unknown = 0.9495628097789405;
    msg.time_motor_ground = 0.9802094385991985;
    msg.time_motor_air = 0.4825242437254098;
    msg.time_motor_water = 0.03877776796197141;
    msg.time_motor_underwater = 0.879833646945728;
    msg.time_motor_unknown = 0.2587778509652946;
    msg.rpm_min = -14852;
    msg.rpm_max = 17814;
    msg.depth_max = 0.7594514406195346;

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
    msg.setTimeStamp(0.2481244598487058);
    msg.setSource(28095U);
    msg.setSourceEntity(74U);
    msg.setDestination(49672U);
    msg.setDestinationEntity(87U);
    msg.severity = 33U;
    msg.text.assign("WCSBMTIYRWJRLXXYTVQDUQLFTUPHONGYZKUEJKMTWTQCBAIUXEIVXAAUXDCOCFXSIGLGRYLAWWBPGEIDCAWJLUYCEDNQOABBNPCJJCRQEIWHOKMGVHDJPHYIPZDPQFMLEMDBKHZTGVKPEVQEVFINMONQWZKXUKVPSXOMMJRPBYVFTGEAROHQNEGTZVGXJBZDVHQRRCHPDGTAYOJR");

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
    msg.setTimeStamp(0.6999702516916252);
    msg.setSource(34252U);
    msg.setSourceEntity(131U);
    msg.setDestination(59335U);
    msg.setDestinationEntity(28U);
    msg.severity = 37U;
    msg.text.assign("XOMLXYDAESIRPUUHOEJPQTBMWUQKUWBJCNFJPGLNUYZGWRSXAFBCSZKKQJFDLESRKNKOVNBBFPVIMCARRCLBLMQHQMAHYCWNJJKVFMDAUREPNIOTNJHSKCXDHGZYPENMBEI");

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
    msg.setTimeStamp(0.13906654705352683);
    msg.setSource(55357U);
    msg.setSourceEntity(184U);
    msg.setDestination(39392U);
    msg.setDestinationEntity(86U);
    msg.severity = 94U;
    msg.text.assign("ZSWWCEVGKGSUHWGYSKJIULNICJLCASNJGXLBUKVNHNOXMEXTEARLYKLYFJGUJHFVPJZQMAASDOMTZD");

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
    msg.setTimeStamp(0.0841511293025381);
    msg.setSource(17005U);
    msg.setSourceEntity(85U);
    msg.setDestination(14196U);
    msg.setDestinationEntity(195U);
    msg.channel = -89;
    msg.value = -197561407;
    msg.gain = 178U;

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
    msg.setTimeStamp(0.05744446206703491);
    msg.setSource(46450U);
    msg.setSourceEntity(102U);
    msg.setDestination(18018U);
    msg.setDestinationEntity(114U);
    msg.channel = -96;
    msg.value = 1802445099;
    msg.gain = 146U;

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
    msg.setTimeStamp(0.2538079871644424);
    msg.setSource(64395U);
    msg.setSourceEntity(80U);
    msg.setDestination(64037U);
    msg.setDestinationEntity(170U);
    msg.channel = -97;
    msg.value = -599352029;
    msg.gain = 156U;

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
    msg.setTimeStamp(0.7589429288632489);
    msg.setSource(36821U);
    msg.setSourceEntity(119U);
    msg.setDestination(21619U);
    msg.setDestinationEntity(22U);
    msg.ch01 = 0.9273690584685556;
    msg.ch02 = 0.6144541444385596;
    msg.ch03 = 0.742491962955621;
    msg.ch04 = 0.6610833691791081;
    msg.ch05 = 0.3983760062073427;
    msg.ch06 = 0.319308590694804;
    msg.ch07 = 0.9619651027009667;
    msg.ch08 = 0.6913709074587924;
    msg.ch09 = 0.6136830333527366;
    msg.ch10 = 0.07626870797858842;
    msg.ch11 = 0.49680139860578376;
    msg.ch12 = 0.8155836884508192;
    msg.ch13 = 0.33841796342321173;
    msg.ch14 = 0.29730875522864253;
    msg.ch15 = 0.4648677322224892;
    msg.ch16 = 0.10787697173118782;

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
    msg.setTimeStamp(0.11515762520692219);
    msg.setSource(17815U);
    msg.setSourceEntity(47U);
    msg.setDestination(21274U);
    msg.setDestinationEntity(94U);
    msg.ch01 = 0.18272293531822348;
    msg.ch02 = 0.35437795373297565;
    msg.ch03 = 0.9578836850829083;
    msg.ch04 = 0.7013092141776537;
    msg.ch05 = 0.7266325403278934;
    msg.ch06 = 0.6987701367138013;
    msg.ch07 = 0.3661678822982375;
    msg.ch08 = 0.5728596105842573;
    msg.ch09 = 0.6605691589164897;
    msg.ch10 = 0.040148387657658824;
    msg.ch11 = 0.7381604474813673;
    msg.ch12 = 0.518905236112103;
    msg.ch13 = 0.6413085223882675;
    msg.ch14 = 0.09362313196731487;
    msg.ch15 = 0.1853072129322857;
    msg.ch16 = 0.15982345202114667;

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
    msg.setTimeStamp(0.6344648565458515);
    msg.setSource(52405U);
    msg.setSourceEntity(252U);
    msg.setDestination(55634U);
    msg.setDestinationEntity(124U);
    msg.ch01 = 0.8969712583011139;
    msg.ch02 = 0.2733242555290525;
    msg.ch03 = 0.4839844351759164;
    msg.ch04 = 0.5602649663128051;
    msg.ch05 = 0.5869575977652791;
    msg.ch06 = 0.9930522657895895;
    msg.ch07 = 0.15565660047825836;
    msg.ch08 = 0.12708947917971725;
    msg.ch09 = 0.5009100680163837;
    msg.ch10 = 0.8020410499935707;
    msg.ch11 = 0.7266420266678054;
    msg.ch12 = 0.07161408515219458;
    msg.ch13 = 0.600796948042584;
    msg.ch14 = 0.5794060766756279;
    msg.ch15 = 0.671438106291591;
    msg.ch16 = 0.2547261380410515;

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
    msg.setTimeStamp(0.8846714718634519);
    msg.setSource(41709U);
    msg.setSourceEntity(77U);
    msg.setDestination(14333U);
    msg.setDestinationEntity(165U);
    msg.op = 159U;
    msg.lat = 0.416855376082805;
    msg.lon = 0.7894163991799823;
    msg.height = 0.030742319269690843;
    msg.depth = 0.2253476854277633;
    msg.alt = 0.6347091972523939;

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
    msg.setTimeStamp(0.5298002182953708);
    msg.setSource(58853U);
    msg.setSourceEntity(172U);
    msg.setDestination(3178U);
    msg.setDestinationEntity(166U);
    msg.op = 205U;
    msg.lat = 0.4383175661252714;
    msg.lon = 0.34583044130800444;
    msg.height = 0.1969657175534839;
    msg.depth = 0.5938130089780271;
    msg.alt = 0.7930522389656733;

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
    msg.setTimeStamp(0.16738210944352627);
    msg.setSource(29249U);
    msg.setSourceEntity(107U);
    msg.setDestination(43480U);
    msg.setDestinationEntity(149U);
    msg.op = 86U;
    msg.lat = 0.22962871599808687;
    msg.lon = 0.8659921514980314;
    msg.height = 0.3518857830317331;
    msg.depth = 0.5321391988570254;
    msg.alt = 0.9916018917398332;

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
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.7892258102146469);
    msg.setSource(8410U);
    msg.setSourceEntity(129U);
    msg.setDestination(59707U);
    msg.setDestinationEntity(37U);
    msg.direction = 0.11003881405001115;
    msg.speed = 0.6236723896007074;
    msg.turbulence = 0.23103742533475224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.9743586825424);
    msg.setSource(40935U);
    msg.setSourceEntity(21U);
    msg.setDestination(3521U);
    msg.setDestinationEntity(89U);
    msg.direction = 0.9559160651340166;
    msg.speed = 0.3187636200364051;
    msg.turbulence = 0.6777392357562979;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.18419179022886456);
    msg.setSource(45634U);
    msg.setSourceEntity(24U);
    msg.setDestination(2086U);
    msg.setDestinationEntity(39U);
    msg.direction = 0.6121150312456856;
    msg.speed = 0.17659965257058208;
    msg.turbulence = 0.28469435853973935;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.6038224172164464);
    msg.setSource(12297U);
    msg.setSourceEntity(89U);
    msg.setDestination(54594U);
    msg.setDestinationEntity(167U);
    msg.msg_type.assign("JKIGSEMNUEMKSIERLQXAQTKNKAWIOQXVRYMYTJAULOERIJYVOBFVSZRTKDUNGEELESGCDFZUJUWIAGSMOBXXHVUZFCERTWMWPRJHMNQQWYGHAIOVVHCDDNZHLMSXYAOBCFFLHIBJBTSRPXBMVIHJOKDFQRB");
    msg.sensor_class.assign("ROGMAEKNALFBANMJIEMNDRZKGPUYSPHVFGGATKCUUFAUPVQCPASIRURBNQRPJJYVKJ");
    msg.mmsi.assign("WPSNAEPDWYZYBYHUAVFSEHCWTWWPCCENZKSVPUMKZOLRWCAUELDWSVULQSBAXEKSIKRJYDVONXVTQSBCAOSGYALFYOKUEFBZDFNMOTGEPDVWKKUVVQGXZMTQRGQLYITJHJOGMHGHJRKTXYO");
    msg.callsign.assign("QEWZXFPGWJAENYXNAOOYSIUNKLJMTQZWJATJCBWABFMWTFZXKUQAJPLQMTGGCZKFFQSVEZOVHOGCRSHVEHMICOHXCLSAUUJYGFWNYDRELMQTPZBGAIGLAQRVRACRGMVEOWKHJSIYJZCG");
    msg.name.assign("WZPWMGSMBJMROSQDNLFNFKGERXEXIJQBEUWAHDKLLWNVPSUWNFAMYKRHFQAAEFDKMTXKKSRPCLXDTOPQPVNBJOHFKKTNXURYGYLCJBOBUZSLIRRICYUOZFYKNXUHGVOEVNIHQQFCVIHZBTPSJYTRCTUERBLQENWGQPMAZWDZCSVYCXMYXZMCOHSWGCEQTJVXFJHIOZRMEPJQIDZAACP");
    msg.nav_status = 166U;
    msg.type_and_cargo = 36U;
    msg.lat = 0.9795725460315615;
    msg.lon = 0.4207820027497876;
    msg.course = 0.12244897143088085;
    msg.speed = 0.281215839857448;
    msg.dist = 0.4419011744538932;
    msg.a = 0.13137749357299866;
    msg.b = 0.6815797540190447;
    msg.c = 0.3909424616944762;
    msg.d = 0.0461882470392756;
    msg.draught = 0.06458010695728722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.9098106936955398);
    msg.setSource(6127U);
    msg.setSourceEntity(132U);
    msg.setDestination(5950U);
    msg.setDestinationEntity(25U);
    msg.msg_type.assign("QWXZUCMSMJIVGXQWMBWODRJLQPGRSEETIVTWGXMSJSZADVJHVZLVHBVWNZYHOPBKOIKWBKTLRCOTZYMDRPNFPPSJZDQRDHNSEYUZYCJCUGOOTCBRFVDXAIDMRPJTQGEWBKKXHUSFCMUWQCYPKCTVVQIRUNKHOLANYNXTWX");
    msg.sensor_class.assign("IAPCIZVGNAXMUZPKXNVEKOLTLRFYFSUUIASQAKNMWNLBCUTMOPZJMEFDMYQQDAVAIQWILJZYRWIPVXEIBTOPXOZJCQQMLYJFHEVUYNDTRPOTWQGNNUHTXDRCLDRGFXREOIEHPUQFSOEEWKTHSHYQQADAXJUBPBGKWFUFCMTZWYGMSSBLGDLYHZMOVBKPVFWGKIPHRHIKDEBRJNXKXNCCTJZODASMGLVHGSRBHVXBOWFNTJDWERJLCYJC");
    msg.mmsi.assign("DYALGUZSSIMOTZHWOOHVALIWPAKBZEWMCQLMNQPBQTXMCEOJXOHHNBBUNLKSPMIRBFMZZPKKJGIRNBGSXEQLYKKMKIPENDANEJMXRFH");
    msg.callsign.assign("ODBPAXVGZSXIRJBOFMCBKKIMSGSOAXQIPVYYBDHEGJACWWDORWTLLGCVVANRRLFXALRXXQAGQZFMDEYJCWIRKMNCBGCNOFGRRFHCTLQFYUZHHLNNAQUKPHKEMD");
    msg.name.assign("LAZNXUCQPWLUYCEGOPOXNZLVKUBCBAFFEGIMFQHYILVFJGMJDSPXJLOOGWRTSQYCTANUWZDRGOOUHTGT");
    msg.nav_status = 12U;
    msg.type_and_cargo = 78U;
    msg.lat = 0.38444779294838927;
    msg.lon = 0.0509873679929288;
    msg.course = 0.1926903615691793;
    msg.speed = 0.3969405953742895;
    msg.dist = 0.20088099504149892;
    msg.a = 0.4382540034620036;
    msg.b = 0.23572375892132047;
    msg.c = 0.6922539236149204;
    msg.d = 0.8500809709214034;
    msg.draught = 0.41360148415040154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.7168707962207205);
    msg.setSource(31886U);
    msg.setSourceEntity(191U);
    msg.setDestination(35647U);
    msg.setDestinationEntity(29U);
    msg.msg_type.assign("BXRSTSOBPHFXBBFOYAGTVIWXLKNTKZOHFZRAHORIMMEEDUJDCPGETIPGOYMKVQOIVVZKWRNWENWNDCZDRTEVHJXUZQTPWO");
    msg.sensor_class.assign("MDSQJYWSIBTOLRBORCVRWIRMNLGURHWFSHGVEUTGIQOUKABSPAOQVISICVOXHXVCINZRLRMCYNNFARYZJLPMHCKXQZXZEVJIVDAXWTMFCPWTYXEQUDHEALXFFXDAHGOCZFYPJJCWOALIEBJCDEGXBFBAYZLSMKEUTWPNFBNFLYMLDOGQUVKENASXVKTDUVZWESGWKRNYTWKBUQEQKMSZTSPJGGBHMJPDAQZILZUROBHOJDP");
    msg.mmsi.assign("HQXZGCHMETFEVQRKWRXTVXQTDNFXORHCPIXSGJYSLHEPLLAJYKULGVNQURZYIUAGSUIGQRDBRWRXTAOUEBTNDDDFTAFJLFXEQVPCPNMMHTBIMSP");
    msg.callsign.assign("ILUIZVVVWMYMGUVVLZJPYIJIBCEYLODGSSBPGTHXWQRKWUROAZHOM");
    msg.name.assign("ZOMWKZTDFZCHCIQEZHDYQLBRQXXBXIDGWJGMWBMFHQOFJJRIGTJROLVVNTXFVVVAYBDYPLGTKJTMSFLTAFMIMRALUKOKZRPRSVEJJVNCONRESUQUGSHOVJXYHCWKABEEGQWKIYASWWOGAHPFP");
    msg.nav_status = 209U;
    msg.type_and_cargo = 31U;
    msg.lat = 0.19146842121753027;
    msg.lon = 0.7164542532742034;
    msg.course = 0.8367604852961508;
    msg.speed = 0.5071351740354783;
    msg.dist = 0.9990226590790003;
    msg.a = 0.6666044826406075;
    msg.b = 0.2509708748610686;
    msg.c = 0.9618440402013666;
    msg.d = 0.1843909582787292;
    msg.draught = 0.022281050457967688;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.44783469793437725);
    msg.setSource(53586U);
    msg.setSourceEntity(13U);
    msg.setDestination(38917U);
    msg.setDestinationEntity(229U);
    msg.depth_at_loc.assign("KBLWNJGMZOXPGIBWNXHJAJKZTGQHFSCVGZLUYETUVGGVNASAQMBFLRR");
    msg.danger.assign("QYKQCIEBYLVEXTMJEXZFZSLPHBPDBDIBCNICEVMYECGGIUXANGHNOARXCAPFF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.12363203146228041);
    msg.setSource(13681U);
    msg.setSourceEntity(88U);
    msg.setDestination(57165U);
    msg.setDestinationEntity(63U);
    msg.depth_at_loc.assign("PPQRUPBHOSVDHJLKQWHWZITGKBXSKIORRVAJZBSBHPROAYTTUTMDXOBKREMHMKUFDEDRVIDEWXNYUKEWPECQQAMDANYECRAKLWJBCV");
    msg.danger.assign("VBWQNZAGLRNABKFLHNACOTJUFRPHMGCFWPEMHHJVMEWTYTKZXKYQDIDLHKZEZXRSRUTGIMWYOOJPDUNTCIFVSZMPVCQBLQPSPNCQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.9149868278117032);
    msg.setSource(34551U);
    msg.setSourceEntity(210U);
    msg.setDestination(17457U);
    msg.setDestinationEntity(188U);
    msg.depth_at_loc.assign("SSHVXJDGPQFLXPDSSCNHXQRLOJFBXIGKKKEUHEYHRRGXPZGVLFNAREQZBWBCIOOXMSBKHQJCYVKCHYZKFRBIIOFVVANVEAHIVXAGHPJUYCWJWGFNFMHLJYITWQMWWU");
    msg.danger.assign("WTYZGYVLXMTAFFZWXFTGPWNNONTEIZIBDBJLELEKCOYMARIHLCDCGIYMBMPIPWTEFMCUJEHRVXAGDEMKDKMXNKPWUJYVYOTHTIKUBHFFLNORKJBOJACQHWNZVOWRRRPXRBGDVQIJASSMCHLLLZKFUDYSIFXQPSZQHZUUSWZXBCSDDVFMQXAOYXNCHPTOVSRIBSIPPPHGSRJTEWDBJVAYCLQNRUZUHGWUQEENAGKJBEGAVANFJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.9882161395828181);
    msg.setSource(1812U);
    msg.setSourceEntity(230U);
    msg.setDestination(51417U);
    msg.setDestinationEntity(21U);
    msg.time = 0.8550674563307298;
    msg.x = 0.8982081345271983;
    msg.y = 0.7390808083991494;
    msg.z = 0.19223339645457027;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.12732276485490357);
    msg.setSource(44755U);
    msg.setSourceEntity(105U);
    msg.setDestination(22995U);
    msg.setDestinationEntity(102U);
    msg.time = 0.2131060315132054;
    msg.x = 0.864824997496888;
    msg.y = 0.24390447738320897;
    msg.z = 0.5950757522976904;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.40461600584639834);
    msg.setSource(30995U);
    msg.setSourceEntity(4U);
    msg.setDestination(19925U);
    msg.setDestinationEntity(126U);
    msg.time = 0.8268609302816229;
    msg.x = 0.5806993322965941;
    msg.y = 0.3408795270273054;
    msg.z = 0.5336435855619596;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #2", msg == *msg_d);
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
    msg.setTimeStamp(0.03304801521526379);
    msg.setSource(52389U);
    msg.setSourceEntity(90U);
    msg.setDestination(24187U);
    msg.setDestinationEntity(236U);
    msg.nbeams = 20U;
    msg.ncells = 138U;
    msg.coord_sys = 135U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.5718231173630514;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.605599998534074;
    tmp_tmp_msg_0_0.amp = 0.3481534194768712;
    tmp_tmp_msg_0_0.cor = 121U;
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
    msg.setTimeStamp(0.7387607378096677);
    msg.setSource(49294U);
    msg.setSourceEntity(77U);
    msg.setDestination(12858U);
    msg.setDestinationEntity(94U);
    msg.nbeams = 79U;
    msg.ncells = 211U;
    msg.coord_sys = 248U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.5896670437309524;
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
    msg.setTimeStamp(0.6419138894040873);
    msg.setSource(49177U);
    msg.setSourceEntity(196U);
    msg.setDestination(3708U);
    msg.setDestinationEntity(168U);
    msg.nbeams = 74U;
    msg.ncells = 10U;
    msg.coord_sys = 85U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.7251654874393928;
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
    msg.setTimeStamp(0.17044006481488605);
    msg.setSource(12979U);
    msg.setSourceEntity(146U);
    msg.setDestination(31467U);
    msg.setDestinationEntity(212U);
    msg.cell_position = 0.45523863225930683;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.8279918877190643;
    tmp_msg_0.amp = 0.06493882473895674;
    tmp_msg_0.cor = 102U;
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
    msg.setTimeStamp(0.46750276685236924);
    msg.setSource(47792U);
    msg.setSourceEntity(74U);
    msg.setDestination(5868U);
    msg.setDestinationEntity(132U);
    msg.cell_position = 0.24492879268838208;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.7070235128981782;
    tmp_msg_0.amp = 0.5839780223258481;
    tmp_msg_0.cor = 86U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8717795790388606);
    msg.setSource(28181U);
    msg.setSourceEntity(79U);
    msg.setDestination(55926U);
    msg.setDestinationEntity(135U);
    msg.cell_position = 0.3289177959232751;

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
    msg.setTimeStamp(0.8061489278447594);
    msg.setSource(52851U);
    msg.setSourceEntity(72U);
    msg.setDestination(14180U);
    msg.setDestinationEntity(83U);
    msg.vel = 0.8904525187301507;
    msg.amp = 0.7164544897696762;
    msg.cor = 76U;

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
    msg.setTimeStamp(0.16926345343138538);
    msg.setSource(9905U);
    msg.setSourceEntity(228U);
    msg.setDestination(50682U);
    msg.setDestinationEntity(149U);
    msg.vel = 0.03859709825826152;
    msg.amp = 0.6492473401149976;
    msg.cor = 94U;

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
    msg.setTimeStamp(0.36694413489929145);
    msg.setSource(32685U);
    msg.setSourceEntity(201U);
    msg.setDestination(30186U);
    msg.setDestinationEntity(39U);
    msg.vel = 0.5206304929899778;
    msg.amp = 0.1958026078118471;
    msg.cor = 205U;

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
    IMC::Frequency msg;
    msg.setTimeStamp(0.0891667227266475);
    msg.setSource(48817U);
    msg.setSourceEntity(250U);
    msg.setDestination(64838U);
    msg.setDestinationEntity(180U);
    msg.value = 0.9621483352671749;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.5138487781229206);
    msg.setSource(64047U);
    msg.setSourceEntity(135U);
    msg.setDestination(32439U);
    msg.setDestinationEntity(215U);
    msg.value = 0.2468591395018096;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.5484314691628422);
    msg.setSource(21680U);
    msg.setSourceEntity(24U);
    msg.setDestination(50154U);
    msg.setDestinationEntity(233U);
    msg.value = 0.49607014321475285;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.4162696558354937);
    msg.setSource(1499U);
    msg.setSourceEntity(24U);
    msg.setDestination(37529U);
    msg.setDestinationEntity(165U);
    msg.sig_wave_height_hm0 = 0.1339245988729061;
    msg.wave_peak_direction = 0.34946184286003745;
    msg.wave_peak_period = 0.1803737684511345;
    msg.wave_height_wind_hm0 = 0.6258182146596248;
    msg.wave_height_swell_hm0 = 0.18262649651273088;
    msg.wave_peak_period_wind = 0.10054099410090267;
    msg.wave_peak_period_swell = 0.47474831098202375;
    msg.wave_peak_direction_wind = 0.3080082909917068;
    msg.wave_peak_direction_swell = 0.20177290655919322;
    msg.wave_mean_direction = 0.13123486974646126;
    msg.wave_mean_period_tm02 = 0.33943613761928315;
    msg.wave_height_hmax = 0.7724068437824282;
    msg.wave_height_crest = 0.9603222458765369;
    msg.wave_height_trough = 0.6790107196044978;
    msg.wave_period_tmax = 0.1579778467453692;
    msg.wave_period_tz = 0.08376018068067759;
    msg.significant_wave_height_h1_3 = 0.8866266187397877;
    msg.mean_spreading_angle = 0.3053056885038772;
    msg.first_order_spread = 0.30594644313738895;
    msg.long_crestedness_parameters = 0.1969543859011894;
    msg.heading = 0.04081422877377694;
    msg.pitch = 0.31579173315310183;
    msg.roll = 0.895314953362732;
    msg.external_heading = 0.1450543487895728;
    msg.stdev_heading = 0.027369265859869985;
    msg.stdev_pitch = 0.059710842640184225;
    msg.stdev_roll = 0.9646755829162466;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.37320130982306676);
    msg.setSource(35265U);
    msg.setSourceEntity(187U);
    msg.setDestination(54379U);
    msg.setDestinationEntity(100U);
    msg.sig_wave_height_hm0 = 0.07775490992822054;
    msg.wave_peak_direction = 0.46911461392667464;
    msg.wave_peak_period = 0.6807152190710631;
    msg.wave_height_wind_hm0 = 0.8961011729890674;
    msg.wave_height_swell_hm0 = 0.5914260034072638;
    msg.wave_peak_period_wind = 0.7412263081926348;
    msg.wave_peak_period_swell = 0.38334341000853334;
    msg.wave_peak_direction_wind = 0.2503590715388485;
    msg.wave_peak_direction_swell = 0.2954530366354372;
    msg.wave_mean_direction = 0.2991970552797011;
    msg.wave_mean_period_tm02 = 0.25697774918435035;
    msg.wave_height_hmax = 0.6360096865000343;
    msg.wave_height_crest = 0.7178646112924347;
    msg.wave_height_trough = 0.1939890534950548;
    msg.wave_period_tmax = 0.9261143922243471;
    msg.wave_period_tz = 0.6366209676664764;
    msg.significant_wave_height_h1_3 = 0.7727399328022391;
    msg.mean_spreading_angle = 0.3863260364921437;
    msg.first_order_spread = 0.8463804519631849;
    msg.long_crestedness_parameters = 0.912652125845273;
    msg.heading = 0.8237537630900862;
    msg.pitch = 0.21216106013500857;
    msg.roll = 0.8880144069333387;
    msg.external_heading = 0.958089148927947;
    msg.stdev_heading = 0.2897124434974061;
    msg.stdev_pitch = 0.34104791265065804;
    msg.stdev_roll = 0.2786828384628093;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.671072854604198);
    msg.setSource(32161U);
    msg.setSourceEntity(78U);
    msg.setDestination(62097U);
    msg.setDestinationEntity(157U);
    msg.sig_wave_height_hm0 = 0.056878345959826104;
    msg.wave_peak_direction = 0.9563497544823261;
    msg.wave_peak_period = 0.0091095484142244;
    msg.wave_height_wind_hm0 = 0.9003563518321073;
    msg.wave_height_swell_hm0 = 0.6987483378305276;
    msg.wave_peak_period_wind = 0.025096521121151127;
    msg.wave_peak_period_swell = 0.556690976507097;
    msg.wave_peak_direction_wind = 0.7151249839476232;
    msg.wave_peak_direction_swell = 0.776858036721478;
    msg.wave_mean_direction = 0.33101753022377856;
    msg.wave_mean_period_tm02 = 0.8915370509494597;
    msg.wave_height_hmax = 0.9845134835880947;
    msg.wave_height_crest = 0.46015487734649774;
    msg.wave_height_trough = 0.5780087242249674;
    msg.wave_period_tmax = 0.9459748524592916;
    msg.wave_period_tz = 0.3909927793051209;
    msg.significant_wave_height_h1_3 = 0.4455223080489763;
    msg.mean_spreading_angle = 0.08586727462689947;
    msg.first_order_spread = 0.7073260673551921;
    msg.long_crestedness_parameters = 0.7304880932857756;
    msg.heading = 0.7207166176132249;
    msg.pitch = 0.6102639010053237;
    msg.roll = 0.8617467368808261;
    msg.external_heading = 0.8845066418625867;
    msg.stdev_heading = 0.36801455465850696;
    msg.stdev_pitch = 0.8837642932595984;
    msg.stdev_roll = 0.4214696595072225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #2", msg == *msg_d);
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
    msg.setTimeStamp(0.825603507063002);
    msg.setSource(26223U);
    msg.setSourceEntity(16U);
    msg.setDestination(38728U);
    msg.setDestinationEntity(118U);
    msg.name.assign("ZPRJLHVPHEHAJQBZEFRRGWZMTUVFSLFRKVPIVEXOEVBEKKTZRMJJGQBCZIVWGQICNWCHGROAWFGNLNUETTIQUXQSZYHUPVAXNOLXXECNDBIODSEYVUYUQDMYBHAFUTDWIOIBEMNNZMWSYASRREFJKXQUAOZMQOZWDPPJKCGQAHFOWDYKNORIKCSSXJUJTGWFPZTGPYFYKMMBLBPLCABIRMFAWTDXCMBHTGTACKNOH");
    msg.value = 79U;

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
    msg.setTimeStamp(0.2987007204179484);
    msg.setSource(49726U);
    msg.setSourceEntity(136U);
    msg.setDestination(7484U);
    msg.setDestinationEntity(122U);
    msg.name.assign("RAFOUSQAWKMBKVZEZXHJRQTBICHSEFPAYVJSWHSRVXPTCKPDMBZOMMNLWDZZNMRYQCPENAITYXWRJOCYDFXDVGDHRSFVPGEGUFGMIMHQCBTJKNBDJOMWNOPIJLNNVNPYEBWSZGLSFOEXCIFFTYXHXMEDEHGCWIQIGUAULJSQITOPASTCKXRROEWUCYEZLTDBHKFZQOTUPUVV");
    msg.value = 145U;

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
    msg.setTimeStamp(0.43381057319702);
    msg.setSource(11610U);
    msg.setSourceEntity(125U);
    msg.setDestination(27611U);
    msg.setDestinationEntity(197U);
    msg.name.assign("HZMGXGPCVKJPUQADNZDHFWKTTNCLJFMSKWAZRVIAGHNFBDOIELFEFUNVPWWHQQBEBTQQWVATMIHXVOHUXRWNCIYXRWKOYMWOEESLPVQGDRPIJRVTEFNSSSQEJNKCYMHNBPRLDKOGYROMZRHLIBBXEPUJUNQCGJQHKXJADGZWZECFUUCZQDAVAGRVYTPAZITJDOWTOFDTT");
    msg.value = 60U;

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
    msg.setTimeStamp(0.6123788724342636);
    msg.setSource(14519U);
    msg.setSourceEntity(82U);
    msg.setDestination(30016U);
    msg.setDestinationEntity(157U);
    msg.name.assign("HVCVMGBQFIIYKAHTTLPNXSLABDBDAMRDGTSBCSYLYO");

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
    msg.setTimeStamp(0.7212176620112021);
    msg.setSource(10997U);
    msg.setSourceEntity(23U);
    msg.setDestination(18415U);
    msg.setDestinationEntity(98U);
    msg.name.assign("TBJLYQOPSISBBGXWFTRPMKPRBQFKMSRUJCPYIVIIUKDXAQYRCACNUTQLFATPEVL");

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
    msg.setTimeStamp(0.890835438121246);
    msg.setSource(19657U);
    msg.setSourceEntity(5U);
    msg.setDestination(37496U);
    msg.setDestinationEntity(22U);
    msg.name.assign("JAFCSOIVKGLTUUFLXNMQNHJRXHBHPDYBEPFORGVABLPILSTZGWWIYXAMXYRFTEBTIITJJBXPYETWDKCYAIMHSCQYKDFISRVNDKGVOLVCUMRGCNAOYZDIZUZOANHWKCOJGSXVMWJXH");

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
    msg.setTimeStamp(0.5770996616353978);
    msg.setSource(34578U);
    msg.setSourceEntity(36U);
    msg.setDestination(7067U);
    msg.setDestinationEntity(13U);
    msg.name.assign("YOZZSMKZXFSXMMNTOQDFBMWOZQYPVZHNADRXJEPOVKBSEWPAWGVOUANAIHRIIPLBBMQFURCGGAJWYQKHIIJZOZM");
    msg.value = 34U;

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
    msg.setTimeStamp(0.8045268964910001);
    msg.setSource(30835U);
    msg.setSourceEntity(84U);
    msg.setDestination(5880U);
    msg.setDestinationEntity(29U);
    msg.name.assign("RCBUWIPRVPSDCPZMKUUMCNLZPJKQGCCBXLQXENEXNOBFGXDUZMSHGQYEDENTWTKFOXUZAGKSIVJISYFPZRTYCWKEWQQANQKHTFJHLVYWPKRMVD");
    msg.value = 202U;

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
    msg.setTimeStamp(0.24444577194266148);
    msg.setSource(63480U);
    msg.setSourceEntity(228U);
    msg.setDestination(43258U);
    msg.setDestinationEntity(60U);
    msg.name.assign("JDOUHKTYVVSKEOLYDCGUVBMHBPCVVUDAUCDVSRFJZCSWPGKNNOOQXKIEOHILUDNTHONROZTEHHFSYUCWFTIJTFQFPZXABRPMQQWUIZXRSCMZVYZCARRMZWVIZEXVLYNDQXXECTPQYLXRDFPHLXKSMIKYHTLBAKGMNLHUWENGPDWPGMRJFIAISQGOXICYPBMTSQKVARZQBEZMYACNEINWJTAGUMOSPGJJGNJELT");
    msg.value = 173U;

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
    msg.setTimeStamp(0.47507954157800547);
    msg.setSource(8632U);
    msg.setSourceEntity(249U);
    msg.setDestination(48578U);
    msg.setDestinationEntity(11U);
    msg.value = 0.775094426052541;

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
    msg.setTimeStamp(0.24417769913150156);
    msg.setSource(39882U);
    msg.setSourceEntity(106U);
    msg.setDestination(59305U);
    msg.setDestinationEntity(175U);
    msg.value = 0.5203765081607605;

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
    msg.setTimeStamp(0.11758281781987001);
    msg.setSource(56124U);
    msg.setSourceEntity(104U);
    msg.setDestination(7954U);
    msg.setDestinationEntity(249U);
    msg.value = 0.39310299761904244;

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
    msg.setTimeStamp(0.8930309095452368);
    msg.setSource(52909U);
    msg.setSourceEntity(196U);
    msg.setDestination(56660U);
    msg.setDestinationEntity(68U);
    msg.value = 0.06283041602535033;

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
    msg.setTimeStamp(0.28065568791609186);
    msg.setSource(2843U);
    msg.setSourceEntity(147U);
    msg.setDestination(18470U);
    msg.setDestinationEntity(4U);
    msg.value = 0.27218751865252544;

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
    msg.setTimeStamp(0.04585773245187863);
    msg.setSource(23889U);
    msg.setSourceEntity(39U);
    msg.setDestination(26162U);
    msg.setDestinationEntity(30U);
    msg.value = 0.4927513489110841;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.17568159349849244);
    msg.setSource(46576U);
    msg.setSourceEntity(61U);
    msg.setDestination(45450U);
    msg.setDestinationEntity(212U);
    msg.value = 0.38700298494559526;

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
    msg.setTimeStamp(0.9024346457770482);
    msg.setSource(52140U);
    msg.setSourceEntity(101U);
    msg.setDestination(15392U);
    msg.setDestinationEntity(177U);
    msg.value = 0.3021327614173791;

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
    msg.setTimeStamp(0.5604180240475979);
    msg.setSource(46885U);
    msg.setSourceEntity(121U);
    msg.setDestination(49842U);
    msg.setDestinationEntity(241U);
    msg.value = 0.2424979655665338;

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
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.9194771470290684);
    msg.setSource(63312U);
    msg.setSourceEntity(192U);
    msg.setDestination(28632U);
    msg.setDestinationEntity(26U);
    msg.restriction = 120U;
    msg.reason.assign("NMNEIJFNHCZDCOTDZJXQPHBQCSRKPLDPORBBAJNDWGCFFQRRBUT");

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
    msg.setTimeStamp(0.5150903331383206);
    msg.setSource(41557U);
    msg.setSourceEntity(96U);
    msg.setDestination(36837U);
    msg.setDestinationEntity(59U);
    msg.restriction = 142U;
    msg.reason.assign("UEASJRXLFIMCTIGIAJVOVDKTGHAFLZSGMIVXUOAWOMSRPMONKAGQKAWHMLZGQTUDNHPRTRYTTLEKLSNPYMYBJBYGXGMZSJLYUXTOWKTBFUIDCQIJGIEJYKOANJSQYCICDYVQPPZZEPVBUOEQHBVEGJWMDE");

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
    msg.setTimeStamp(0.7920838355195625);
    msg.setSource(16618U);
    msg.setSourceEntity(227U);
    msg.setDestination(61668U);
    msg.setDestinationEntity(11U);
    msg.restriction = 125U;
    msg.reason.assign("VVIRIDCCDIPFJVLTWQSLSMKRTXPXMCJGTWPJSOTWNVAZLENTQWNHEOWHBGDGINDQXOGNLDZQUSYHRWZFXHKKAMWQBVMKJFUIFIJKMZLIOBSGFL");

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
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.6269600535969118);
    msg.setSource(9680U);
    msg.setSourceEntity(143U);
    msg.setDestination(35143U);
    msg.setDestinationEntity(69U);
    msg.op = 213U;
    msg.version.assign("DTWROKONHALMDOVOPEQCHLBDLDGUBEOILTSHEMRVKPNKFLZTUMCZOZVCCEDDANIXSGGJZULXTPXMLJFLEYFSDGHYARWFNIHAUZABRWHCOQQSGJIOFWFPYSMCNJVTSEVTGXXEZGVISYQKYJZVIBJXWIRAQNTCFJODKWEWGKPRKBPCIQUJHBCOLPHXBMB");
    msg.description.assign("JIQGZPAYACMTOJLILJMOTXCZPHHGRPKUSXERWIBDQJX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.5958609340572607);
    msg.setSource(50745U);
    msg.setSourceEntity(133U);
    msg.setDestination(39976U);
    msg.setDestinationEntity(211U);
    msg.op = 4U;
    msg.version.assign("CNKHVKNZYWERFEZEHTTBIUQNLHSXCVQKBPVMDQBUNRODZPSKITIEOUTNEALTFQGQLJDOSRTMBAOLUCAYDVXIYKNJYOSNKLHHWUJWHYBSDBSUFMRXADGORSPCIPVYEDZMCFTDFRFGAQXXVJPLQAKKGUZXRFCBJXMUMCTGPCWUHJWPAWNYZEXHYCLFZEDTIM");
    msg.description.assign("MFQSZFUTVCTADVDKUUWPNDWXBSTWSFHDUABEKQTJNGVBNJFZSLIZSQUHMSSFMQYHRYYOKDZOOTLEYERGYLPZFIPGHJVEFJXGKUDRIEPAWDZDVCLQTWAYNBCVERKYNUILLPTRQQATPAKXBCYFMNCXQDXIJCALSMZRNKVFSOGOVZXAXJPOMZY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.4834443271086083);
    msg.setSource(9644U);
    msg.setSourceEntity(46U);
    msg.setDestination(27651U);
    msg.setDestinationEntity(86U);
    msg.op = 98U;
    msg.version.assign("QZDULANDJUEFIBQVJEPPHPRZWYJJMVKENDTHNNWKZIZBTKSUTRJLAQVEGOJCAHQUBLYZYQVXVWXSHVMTUQUABPLYEXWCTEQGHHZDPSTRNPNX");
    msg.description.assign("AAIPMPXPLBEPGPLPOZWJNWGVSRKXVHUUSMFYVMXZPKAMXWGQBZEHSNZQJZUSWWQNDLKRVRTNRTOQKDSDBRSQXRQASKNDHGQIKOMCMUAYCEEOZIYWBFVUXLTIFHIWCUHKDLBZBUDKAUCNSXGCMVSSTFMELI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.38739885023715537);
    msg.setSource(46023U);
    msg.setSourceEntity(170U);
    msg.setDestination(8941U);
    msg.setDestinationEntity(204U);
    msg.value = 0.6747411681553598;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.37668410409282027);
    msg.setSource(61375U);
    msg.setSourceEntity(208U);
    msg.setDestination(11152U);
    msg.setDestinationEntity(11U);
    msg.value = 0.6240574270539492;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.620362310679238);
    msg.setSource(53653U);
    msg.setSourceEntity(44U);
    msg.setDestination(28373U);
    msg.setDestinationEntity(169U);
    msg.value = 0.7200838787296915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #2", msg == *msg_d);
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
