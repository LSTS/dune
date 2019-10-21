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
// IMC XML MD5: 2a5f30dbbf2c8bf48b108c920bd86353                            *
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
    msg.setTimeStamp(0.923041470509);
    msg.setSource(52138U);
    msg.setSourceEntity(67U);
    msg.setDestination(63648U);
    msg.setDestinationEntity(176U);
    msg.state = 192U;
    msg.flags = 58U;
    msg.description.assign("GNKIBHIPELYPOMSCLQPAOKXJWPLMHGZXZSMRHUVVVXSPL");

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
    msg.setTimeStamp(0.293312825499);
    msg.setSource(30132U);
    msg.setSourceEntity(102U);
    msg.setDestination(61845U);
    msg.setDestinationEntity(125U);
    msg.state = 169U;
    msg.flags = 161U;
    msg.description.assign("XDFYYYZVIPPXTBMRJHROWABBGFSIAZEBMVGATPTHUELIJJAEYQSYCKZAQOTICDUJPHVEVGMLUIOEWQHVSPEAPVQYWLHBONQCSQMXSSQKWWXEZCFJUNONDFGILVLYXHUDFMLSVLRHWWNFGUERZPJKUWGFOVNDMTTMKJFZIGBAXINGJCQRYAJWDJPZNEXCDDMGKC");

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
    msg.setTimeStamp(0.164812838743);
    msg.setSource(25495U);
    msg.setSourceEntity(161U);
    msg.setDestination(14079U);
    msg.setDestinationEntity(66U);
    msg.state = 125U;
    msg.flags = 148U;
    msg.description.assign("AYTZXDCGKSHKLEMSICQQEVGFLWFETIGKBRTWKVRRBSQKYXUTCFLKTWPNGJUCWISGOREXUC");

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
    msg.setTimeStamp(0.709736161718);
    msg.setSource(11394U);
    msg.setSourceEntity(168U);
    msg.setDestination(39418U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.442646211827);
    msg.setSource(32659U);
    msg.setSourceEntity(165U);
    msg.setDestination(44949U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.535982318069);
    msg.setSource(25994U);
    msg.setSourceEntity(28U);
    msg.setDestination(15523U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.142452245);
    msg.setSource(21119U);
    msg.setSourceEntity(4U);
    msg.setDestination(12290U);
    msg.setDestinationEntity(33U);
    msg.id = 71U;
    msg.label.assign("FGFHDCHYNXFCRWWMCYLMGJUORLVCYWUKZBBMZGKDGJIQNNCJYXTPGBBTFRRXKTEUIYYMPZPXSWRMOOMZDIHLOCTPEQMHMUGFMKRQQSSQGRQALLIYSPFWAHDMZVDLHKRXKZITEBJJADBPSBURGHUECVLHTNQBSKWVGJULVKUOFEEVPBJYZNWXXJAXLFSAXKSCNSQHEPPTDEVIOCHADDQVIVYIEDWWZJZNSUIWYTFNVJKEBAOAO");
    msg.component.assign("EYDIPTUKZMPARPIOLBOYHBKYKKQDHJPKMDASSZYZTQGMPLZFCENXMECEDZZWYNBNFPUHRUEEDPMCUIDHHRAEORJOCJSFVZAPGKOGXTXXAIQVNBFVBFTSXIRJAHTGRGLTJDOFKDFOYHGARIILGTMDHNWSWNZYMXUPXQFFOUCGLKLMVCRHLSCBBPOMSYJAMBJIWRQWUTQSVBETIQJSOATAWBZEJNCWVRHWWUGXNQVXVNQKLJCLUUSLVWYCV");
    msg.act_time = 37471U;
    msg.deact_time = 45143U;

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
    msg.setTimeStamp(0.153196458092);
    msg.setSource(26355U);
    msg.setSourceEntity(241U);
    msg.setDestination(15612U);
    msg.setDestinationEntity(79U);
    msg.id = 211U;
    msg.label.assign("AZHZEQTXDKOCOTQICHYLJHWGWRTTACVSGBYGBYEVXLOPPUURYOLNDIYKHGNLXUEAKZJOBMQHG");
    msg.component.assign("JVVTDJCMYQAXFXFZAWKJDJTKGKZAIIRTXYNUUBUFNOYYHNPB");
    msg.act_time = 20329U;
    msg.deact_time = 23596U;

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
    msg.setTimeStamp(0.349500318763);
    msg.setSource(57921U);
    msg.setSourceEntity(28U);
    msg.setDestination(14906U);
    msg.setDestinationEntity(178U);
    msg.id = 219U;
    msg.label.assign("WRLIQPDHKBQFUOEVLOIAUDEMRWVLSCKUAUXPWALGNZVTHCZYDWODPIMRIGSXSXQTNBP");
    msg.component.assign("WQVBWYYSSJQIHGGGKCPJWONNDYFNWZKGTYIYMCWGZRMLWVEYEISDJVJLHQFGJAOSEUFUELNSTACCQDLVGXLJRFIGQQNKUBWJOWHR");
    msg.act_time = 14329U;
    msg.deact_time = 28357U;

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
    msg.setTimeStamp(0.35235000815);
    msg.setSource(31449U);
    msg.setSourceEntity(37U);
    msg.setDestination(44907U);
    msg.setDestinationEntity(70U);
    msg.id = 0U;

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
    msg.setTimeStamp(0.370837544564);
    msg.setSource(33667U);
    msg.setSourceEntity(67U);
    msg.setDestination(2431U);
    msg.setDestinationEntity(11U);
    msg.id = 214U;

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
    msg.setTimeStamp(0.0908188031856);
    msg.setSource(55938U);
    msg.setSourceEntity(105U);
    msg.setDestination(4113U);
    msg.setDestinationEntity(40U);
    msg.id = 47U;

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
    msg.setTimeStamp(0.720413029625);
    msg.setSource(62570U);
    msg.setSourceEntity(224U);
    msg.setDestination(49883U);
    msg.setDestinationEntity(197U);
    msg.op = 105U;
    msg.list.assign("TAGPYPWAWLFEGTOYCIVGMAOZUQMGHLUWLQCFKBAZTBMXVICGFSVNXNQKOHNGJOADNEKJDCBCSEYWOKWJXIXIHUVHSMEKRKDSFONXQUKRZBZJWTLKEISAVLIPUHQIYPDPYENUPMTWERLSRNQBJJUBLBKFBNAFZDPOCQFUCJTLTYHJLGOTRMNSEZVACUJYPMVYYFXDHMEYRDZUPRFXBEG");

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
    msg.setTimeStamp(0.67696345167);
    msg.setSource(10325U);
    msg.setSourceEntity(190U);
    msg.setDestination(46585U);
    msg.setDestinationEntity(31U);
    msg.op = 104U;
    msg.list.assign("RSKATWKLVKIMZRUOMHSYZSELPTQBOYUIUFUOTFXTSSCIACWOXQWWCCFJKIFMFVGXYWWYJKHIHNZZEQQUDAJBVSYOXVLNMGKDFPYSQCYMUFDEVQVQJIHNOXYVFTWMEZIXNCXJKPDUTUEICBRPZTEELHAHLBPDEARPQJHJM");

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
    msg.setTimeStamp(0.142653701238);
    msg.setSource(34127U);
    msg.setSourceEntity(45U);
    msg.setDestination(49194U);
    msg.setDestinationEntity(241U);
    msg.op = 50U;
    msg.list.assign("KVWVJPGGRJONBWOVWYQUOXYENEWHKZWUACCTHNIJHJOMXCBISKLIRIUKMAEIVFXLNXSYRALFESTSOZCLBHEZZAFIZQUTABIPNROMPY");

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
    msg.setTimeStamp(0.304427027835);
    msg.setSource(17471U);
    msg.setSourceEntity(77U);
    msg.setDestination(31977U);
    msg.setDestinationEntity(186U);
    msg.value = 123U;

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
    msg.setTimeStamp(0.0300147615509);
    msg.setSource(14461U);
    msg.setSourceEntity(194U);
    msg.setDestination(39072U);
    msg.setDestinationEntity(199U);
    msg.value = 219U;

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
    msg.setTimeStamp(0.451155314131);
    msg.setSource(23998U);
    msg.setSourceEntity(118U);
    msg.setDestination(42565U);
    msg.setDestinationEntity(155U);
    msg.value = 181U;

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
    msg.setTimeStamp(0.255648174028);
    msg.setSource(44681U);
    msg.setSourceEntity(111U);
    msg.setDestination(22882U);
    msg.setDestinationEntity(65U);
    msg.consumer.assign("CDSHRYPDNPLFGNOZCLRTLGIFFGMWSZJEBOKSGLYAH");
    msg.message_id = 54263U;

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
    msg.setTimeStamp(0.97087180741);
    msg.setSource(2721U);
    msg.setSourceEntity(122U);
    msg.setDestination(19514U);
    msg.setDestinationEntity(87U);
    msg.consumer.assign("DQCXKLPRURJEQMMRXZRGJCXWARQBAKTMPUTOYKTUHHZLSJDTAMSVGPHDFRMWDBKVGSZETGKKYHNHWTVFYSIZMLPAVIOFIEGNOHZIZVHWRQECJHCGMBQAOJUNTIEVOUQLXROWFGBDUFAOGSMQUPNBGRBTYFZJSMUWETXWILPBLYQSBRBPCNDFXUEADCFYZFUSDJZDEGVLXVIWOK");
    msg.message_id = 63118U;

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
    msg.setTimeStamp(0.946951530336);
    msg.setSource(6436U);
    msg.setSourceEntity(39U);
    msg.setDestination(32877U);
    msg.setDestinationEntity(171U);
    msg.consumer.assign("OUYWAZVURYHRZUOBQIOJLTFKXZAFVEUMTAYBFVLCWNQWFGKLTTXJDUZXGRINHYCMZDAKRBVHRYDBQVVPIDEIMPHPSQAMKOGFPNALNCTFXRIAXHZKCXVFNIACJRQBENNQAIEUJBGEDQWCZIMNHOPUXGBECSJWOMGTLCQLNRDZYMUGYIOJRLTWOGPNSVZTYUPHSJJDLEKPSWGECOMH");
    msg.message_id = 49694U;

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
    msg.setTimeStamp(0.990994658925);
    msg.setSource(26189U);
    msg.setSourceEntity(235U);
    msg.setDestination(54227U);
    msg.setDestinationEntity(142U);
    msg.type = 247U;

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
    msg.setTimeStamp(0.362468536111);
    msg.setSource(58965U);
    msg.setSourceEntity(113U);
    msg.setDestination(4191U);
    msg.setDestinationEntity(0U);
    msg.type = 225U;

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
    msg.setTimeStamp(0.728630900373);
    msg.setSource(41644U);
    msg.setSourceEntity(121U);
    msg.setDestination(824U);
    msg.setDestinationEntity(122U);
    msg.type = 39U;

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
    msg.setTimeStamp(0.999753699019);
    msg.setSource(24897U);
    msg.setSourceEntity(100U);
    msg.setDestination(15889U);
    msg.setDestinationEntity(199U);
    msg.op = 85U;

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
    msg.setTimeStamp(0.579612342823);
    msg.setSource(36829U);
    msg.setSourceEntity(74U);
    msg.setDestination(53465U);
    msg.setDestinationEntity(121U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.974768021483);
    msg.setSource(38522U);
    msg.setSourceEntity(121U);
    msg.setDestination(41586U);
    msg.setDestinationEntity(123U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.823996828862);
    msg.setSource(36575U);
    msg.setSourceEntity(78U);
    msg.setDestination(9838U);
    msg.setDestinationEntity(8U);
    msg.total_steps = 82U;
    msg.step_number = 169U;
    msg.step.assign("PGGCFVELULDLPFFCCDDQWMKBDGQLLXBNOTIGRLWMUSHUZQYXXJURZWPLOYPHYMFWKIVZVINKEUVNYWKKSMTEBJCNYOGKDUGYQNOBGTBUDTSCMLKSKZQQWDFMJHNJVACFLFAHQJPESHXZPOMBMFPUUDAZMHCTTNYRHZYVPJFVYAXLTRVHRANMSIJTOZJOCSCAGKGRXWIQWIARJIXNRITENSZQETHDEOBXRWOQCSYZJBUSBEERDOXEGXKIHF");
    msg.flags = 80U;

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
    msg.setTimeStamp(0.285152058893);
    msg.setSource(14229U);
    msg.setSourceEntity(112U);
    msg.setDestination(17732U);
    msg.setDestinationEntity(89U);
    msg.total_steps = 191U;
    msg.step_number = 166U;
    msg.step.assign("SIMTQOANTGWDQLWROHPOQBNHXNWZAXLUYZSUVZPPFIGMW");
    msg.flags = 88U;

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
    msg.setTimeStamp(0.946802051536);
    msg.setSource(47677U);
    msg.setSourceEntity(146U);
    msg.setDestination(19947U);
    msg.setDestinationEntity(173U);
    msg.total_steps = 43U;
    msg.step_number = 162U;
    msg.step.assign("VOCYCMZWYEXWNCSYWITKULUNRGZSKGSNLDTMXTLFKNFAYQIWXAPQHDYSZWFAOUIEQIUBMQXZXAYDGPTQHXUANPXVIMOOE");
    msg.flags = 60U;

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
    msg.setTimeStamp(0.797492681623);
    msg.setSource(5535U);
    msg.setSourceEntity(139U);
    msg.setDestination(16555U);
    msg.setDestinationEntity(128U);
    msg.state = 65U;
    msg.error.assign("BNZEGSFHNPVATPODSANFEFJLZLXNEMBMNVMXSLSROCWSVTETPCXIBICCIALKREVDRUHJNRTDFXUARQDKCVWTJFHZMEPKBIPUHWGYHDYNKPLZFAHURZUKHEQXFVTCUCJIQAIMTMGVIOOBVDWIHWLRKTYUDSBJYFLYZQKKXOPSPLPOYNQQSERP");

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
    msg.setTimeStamp(0.370602850307);
    msg.setSource(41915U);
    msg.setSourceEntity(71U);
    msg.setDestination(59564U);
    msg.setDestinationEntity(35U);
    msg.state = 162U;
    msg.error.assign("OUDPAUNMQCFFSBYWFWSZWGVTCHQJORRUHETOAKALXKMPEBRAQLCHNWKSWMSDFMGZIHHFIZWJUPYXYQASMXYHNFOLDIJRLFCJILSXCADLSZEJOLHZITAMLZPXCVTJNKUYMNDBJUKKOZFCUBGGEPRYVATPODLOQNKVAPCEJZECNVGBMTFMDTXVTTWIRRNHHXBYHAXFYSYSE");

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
    msg.setTimeStamp(0.561723533777);
    msg.setSource(23123U);
    msg.setSourceEntity(82U);
    msg.setDestination(45537U);
    msg.setDestinationEntity(212U);
    msg.state = 90U;
    msg.error.assign("KADNBJDCRWHZPCWLZKBOAMYFZBSYCNSAIRPTVGTQKIYULZNMKJMKGFITHJIPSKBEUOEPSTGMNYPGREHTRW");

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
    msg.setTimeStamp(0.115391964787);
    msg.setSource(27698U);
    msg.setSourceEntity(229U);
    msg.setDestination(17315U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.0513653015041);
    msg.setSource(7134U);
    msg.setSourceEntity(205U);
    msg.setDestination(36408U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.0882508768102);
    msg.setSource(11421U);
    msg.setSourceEntity(221U);
    msg.setDestination(42371U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.791251772901);
    msg.setSource(22151U);
    msg.setSourceEntity(52U);
    msg.setDestination(19442U);
    msg.setDestinationEntity(181U);
    msg.op = 252U;
    msg.speed_min = 0.616095125418;
    msg.speed_max = 0.769557522708;
    msg.long_accel = 0.24679114876;
    msg.alt_max_msl = 0.923601629763;
    msg.dive_fraction_max = 0.442658427858;
    msg.climb_fraction_max = 0.474778148296;
    msg.bank_max = 0.914870082758;
    msg.p_max = 0.177501472727;
    msg.pitch_min = 0.423155613169;
    msg.pitch_max = 0.15602572991;
    msg.q_max = 0.876356325013;
    msg.g_min = 0.021426868216;
    msg.g_max = 0.456148506867;
    msg.g_lat_max = 0.678028101544;
    msg.rpm_min = 0.424306353967;
    msg.rpm_max = 0.373244403441;
    msg.rpm_rate_max = 0.0348346795117;

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
    msg.setTimeStamp(0.136659123955);
    msg.setSource(16497U);
    msg.setSourceEntity(68U);
    msg.setDestination(32016U);
    msg.setDestinationEntity(152U);
    msg.op = 235U;
    msg.speed_min = 0.428262422981;
    msg.speed_max = 0.827098972196;
    msg.long_accel = 0.537943223526;
    msg.alt_max_msl = 0.297908447462;
    msg.dive_fraction_max = 0.0500835929666;
    msg.climb_fraction_max = 3.19156646043e-05;
    msg.bank_max = 0.89175612128;
    msg.p_max = 0.484298357432;
    msg.pitch_min = 0.870987957241;
    msg.pitch_max = 0.0285961346816;
    msg.q_max = 0.0995904986749;
    msg.g_min = 0.924857622656;
    msg.g_max = 0.193152518745;
    msg.g_lat_max = 0.477375529883;
    msg.rpm_min = 0.196264421555;
    msg.rpm_max = 0.598230671697;
    msg.rpm_rate_max = 0.385714600429;

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
    msg.setTimeStamp(0.81078527127);
    msg.setSource(14859U);
    msg.setSourceEntity(118U);
    msg.setDestination(54471U);
    msg.setDestinationEntity(113U);
    msg.op = 10U;
    msg.speed_min = 0.249710706137;
    msg.speed_max = 0.320699422464;
    msg.long_accel = 0.486180720641;
    msg.alt_max_msl = 0.492619662359;
    msg.dive_fraction_max = 0.325708947601;
    msg.climb_fraction_max = 0.94933242807;
    msg.bank_max = 0.91423707227;
    msg.p_max = 0.0826579997164;
    msg.pitch_min = 0.209594813179;
    msg.pitch_max = 0.28031702767;
    msg.q_max = 0.391340080522;
    msg.g_min = 0.91376450217;
    msg.g_max = 0.719381640844;
    msg.g_lat_max = 0.99647063635;
    msg.rpm_min = 0.121093968799;
    msg.rpm_max = 0.930844112089;
    msg.rpm_rate_max = 0.858981673871;

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
    msg.setTimeStamp(0.661875250673);
    msg.setSource(3789U);
    msg.setSourceEntity(238U);
    msg.setDestination(36036U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.425358736962);
    msg.setSource(13549U);
    msg.setSourceEntity(216U);
    msg.setDestination(6853U);
    msg.setDestinationEntity(137U);
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 13U;
    tmp_msg_0.speed = 37346U;
    const char tmp_tmp_msg_0_0[] = {63, 61, 27, 119, 13, 63, 126, -67, -5, 81, 91, -4, 20, 14, 74, -108, 76, -43, 66, 106, -125, 54, -32, -16, 123, -94, 5, 24, -110, -6, -70, -104, -38, -31, -7, -32, -27, -65, 19, 9, -125, 31, 37, 17, -120, 79, -127, 64, -43, -120, 26, 100, 68, 95, 17, -113, -67, 87, 86, 123, 66, -55, 81, 46, -50, 54, -114, -57, 8, -80, -89, -3, -29, 96, 71, -127, -29, -16, -12, 26, -93, -71, -128, 58, -79, -104, -45, 25, 8, -78, 77, 17, -10, 66, -111, 109, 52, 109, -16, -68, -81, -66, 117, -117, -10, 11, -55, 9, -76, -115, -125, -87, -71, -38, 57, 41, -117, -22, 77, -74, 10, 62, 110, 119};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.884323804918);
    msg.setSource(33095U);
    msg.setSourceEntity(213U);
    msg.setDestination(10030U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.635184061781);
    msg.setSource(36876U);
    msg.setSourceEntity(169U);
    msg.setDestination(46236U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.317536352436;
    msg.lon = 0.797460219555;
    msg.height = 0.249353700835;
    msg.x = 0.551146110697;
    msg.y = 0.0172105264676;
    msg.z = 0.795362136116;
    msg.phi = 0.927109501862;
    msg.theta = 0.305703302906;
    msg.psi = 0.436259468602;
    msg.u = 0.825578147927;
    msg.v = 0.935840729388;
    msg.w = 0.022754168731;
    msg.p = 0.140594077875;
    msg.q = 0.0160402013879;
    msg.r = 0.550279649149;
    msg.svx = 0.788178104237;
    msg.svy = 0.197216045901;
    msg.svz = 0.727243507206;

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
    msg.setTimeStamp(0.321645253769);
    msg.setSource(3401U);
    msg.setSourceEntity(254U);
    msg.setDestination(30100U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.414685383163;
    msg.lon = 0.743994656214;
    msg.height = 0.798667054064;
    msg.x = 0.625066558254;
    msg.y = 0.050901093609;
    msg.z = 0.820032512103;
    msg.phi = 0.154060154711;
    msg.theta = 0.639065141298;
    msg.psi = 0.533971746069;
    msg.u = 0.53291743787;
    msg.v = 0.189837530403;
    msg.w = 0.593681703938;
    msg.p = 0.793868926104;
    msg.q = 0.574050094372;
    msg.r = 0.0647746207542;
    msg.svx = 0.670593882832;
    msg.svy = 0.0610350444936;
    msg.svz = 0.977095738048;

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
    msg.setTimeStamp(0.391877888841);
    msg.setSource(62871U);
    msg.setSourceEntity(200U);
    msg.setDestination(21175U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.147451220796;
    msg.lon = 0.645995613107;
    msg.height = 0.887400720214;
    msg.x = 0.422644649164;
    msg.y = 0.608090001113;
    msg.z = 0.943521741557;
    msg.phi = 0.000705670990222;
    msg.theta = 0.290332401864;
    msg.psi = 0.0214567133296;
    msg.u = 0.20754503976;
    msg.v = 0.408768030939;
    msg.w = 0.774234510527;
    msg.p = 0.0966627975301;
    msg.q = 0.7807880675;
    msg.r = 0.16833344733;
    msg.svx = 0.0398838760345;
    msg.svy = 0.385941636202;
    msg.svz = 0.713368924881;

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
    msg.setTimeStamp(0.298400722124);
    msg.setSource(15421U);
    msg.setSourceEntity(88U);
    msg.setDestination(27545U);
    msg.setDestinationEntity(158U);
    msg.op = 185U;
    msg.entities.assign("TXMRVESYQNZIBSUWWRKFHOOZRUUKYDNLRRAGTHLZMYANVZJCZZODXALOMAMFMGQIGTEGVYLBNNLIVJYDTASBPRQXODQYHUVDFPPUEGFPSUIDVEIPUDOTTTXWJGFVBMWBGECQQYJJTJNZBAXMKYOMQDTRBFRKJHNLRKXHKLSYAATPHKSFSKQBFPCGCAWOUUSAFWPIYEIMJSVC");

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
    msg.setTimeStamp(0.136900653216);
    msg.setSource(49490U);
    msg.setSourceEntity(70U);
    msg.setDestination(30108U);
    msg.setDestinationEntity(110U);
    msg.op = 196U;
    msg.entities.assign("GSKLWYVJCONFOUITPJSMYJXUBDBRSXOHOADVTJJMMIARLORGVKHCMAOENQBWRTIAERWHHLFQTNRLJBDDQ");

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
    msg.setTimeStamp(0.376062061335);
    msg.setSource(20422U);
    msg.setSourceEntity(156U);
    msg.setDestination(53085U);
    msg.setDestinationEntity(53U);
    msg.op = 39U;
    msg.entities.assign("OEZIGQIBCLBLZFKHROVHQXBDBHEFWPFUWBSDOLAZLGBGOYPKYJFIWXJXDKWCNDXJRDFLOXYQKPSHCTETMZVKSXZMPMHPIGWMPITSLDOSXRPUIYEKCTNWZUIHEUCUBENVXPKZVQRGQMMMATLNJFWTHYHVAKJHHTEASIQNJRVIDINVWCXGTUKJABOVAKFCSPUUJWJPVNLBLGQENFASTD");

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
    msg.setTimeStamp(0.582574500261);
    msg.setSource(10859U);
    msg.setSourceEntity(111U);
    msg.setDestination(35305U);
    msg.setDestinationEntity(25U);
    msg.type = 150U;
    msg.speed = 12277U;
    const char tmp_msg_0[] = {-55, 50, -64, -38, 42, -24, 26, 111, -82, 83, -2, 62, 57, -108, 119, -42, -16, 103, 126, 94, 8, -112, -36, 63, -107, -74, -72, 109, -37, -123, 65, 3, -59, -28, -113, -120, 123, -57, 110, -26, -11, -115, -79, -58, 68, -113, 8, 85, 38, -6, -85, 44, -66, 6, 49, -92, 65, 6, -83, 8, -78, 97, -54, 62, 6, -104, 106, -70, -126, 69, -46, 69, 33, 86, -111, 46, 50, 125, 28, -49, 2, 86, -36, -30, 34, -89, -127, 50, -124, 8, -47, 86, -75, 103, 99, 7, -3, 72, -33, 53, 64, 123, -120, -64, 17, -64, 27, 62, -50, -80, -72, -18, -19, -83, -125, 13, -45, -96, -62, 46, 39, -73, 118, -113, 59, -53, 4, 36, -30, 126, 126, 42, -81, 33, 59, -74, -57, -117, -58, -78, -53, -44, -4, -106, 18, -10, -98, 63, 96, -51, 116, 57, 25, 15, -22, 16, 9, -67, -105, 98, 77, -18, 74, -102, -7, -25, 33, -50, 34, -94, -83, -4, 111, -62, -84, 19, 27, -67, -23, 12, 99, 13, -84, 17, 77, 28, 90, -31, 94, 99, -111, -124, 106, 14, -81, -75, 96, -35, 115, 63, -99, -12, 114, -38, -89, 114, -23, -55, -56, -49, 82, 22, 94, -113, -59, -15, -68, -17, -95, -9, -17, -27, -69, -116, -42, 53, 119, 28, 107, -6, -25, -99, -38, 100, 15};
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
    msg.setTimeStamp(0.760524505403);
    msg.setSource(46247U);
    msg.setSourceEntity(216U);
    msg.setDestination(38733U);
    msg.setDestinationEntity(14U);
    msg.type = 225U;
    msg.speed = 7833U;
    const char tmp_msg_0[] = {95, -29, -65, 125, -120, 120, 47, -22, -24, -91, -41, -76, 46, -45, -120, 50, 102, 28, 124, 4, 119, 3, -65, 37, -107, -81, -12, -51, 77, -84, 95, 28, 126, 65, 91, -2, -14, 87, 121, -106, -127, 51, -67, -81, -71, -78, 96, 101, -78, 17, -42, 0, -3, -59, 111, 71, 60, 57, 14, -94, -91, 31, -120, -3, 91, -73, -32, -53, 125, 106, 29, -63, -92, -15, -113, 63, -99, 36, -68, 107, 87, -114, 5, -73, -117, 68, -121, -41, -72, -100, -43, -56, -74, 75, -107, -19, -36, -2, 29, -71, -118, 66, -106, 33, -106, 54, 47, -19, 18, -117, 78, 28, -23, -68, 96, 111, -73, -63, -87, -99, 27, -49, -69, -82, -22, 43, 41, 79, -47, -116, 124, -53, 121, -21, 115, 7, 53, -117};
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
    msg.setTimeStamp(0.780606536531);
    msg.setSource(51362U);
    msg.setSourceEntity(161U);
    msg.setDestination(18217U);
    msg.setDestinationEntity(75U);
    msg.type = 27U;
    msg.speed = 45519U;
    const char tmp_msg_0[] = {-25, 73, 96, -99, -77, -60, -124, -18, 21, -39, 50, 103, 87, 68, 83, -32, 84, 36, -59, -34, -102, 89, 25, -71, -65, 110, 55, 125, 32, 52, 106, -89, -53, -84, 87, 64, 99, 58, -109, -80, 91, -68, 84, 78, 82, -25, -105, -32, 104, 81, 11, -59, -6, 72, 26, -46, -9, 0, -91, 123, -17, 70, 71, -124, 17, 44, 27, -71, 72, -89, 59, 77, 87, -67, -99, -82, 21, 44, 85, 101, -94, 123, 97, 111, 97, -66, 62, 2, 17, 16, -93, 109, 63, 33, 11, -70, -106, 1, 10, 63, 37, 85, 23, -72, 59, -53, 101, -36, -42, -5, 66, -121, 68, 104, -116, 58, -40, 4, 49, -82, -66, -63, 45, -77, -14, -74, 66, -44, -52, 19, 97, 21, 20, -85, -73, -72, 9, -57, 24, -74, 77, 40, -93, -46, 123, -31, 75, -117, 66, 52, -17, -70, -125, 40, 93, 11, 4, 103, 13, 54, 19, 7, -128, 123, -127, -95, 67, -120, 11, -111, -82, -118, 34, -97, 42, 39, -30, -63, -105, 80, -91, 81, -21, 23, -111, 26, -10, -101, 58, -103, 82, 56, 20, 78, -3, -6, 37, -125, 89, -37, -89, -95, 50, 84, 16, 47, -47, -75, 105, -11, 17, -18, -41, 41, 92, -16, -15, 91, -10, 42, 92, -107, 10, 36, -71, -40, 126, 24};
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
    msg.setTimeStamp(0.878640018618);
    msg.setSource(8172U);
    msg.setSourceEntity(254U);
    msg.setDestination(19739U);
    msg.setDestinationEntity(140U);
    msg.op = 232U;
    msg.tas2acc_pgain = 0.97174037845;
    msg.bank2p_pgain = 0.503012161558;

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
    msg.setTimeStamp(0.973902084871);
    msg.setSource(22919U);
    msg.setSourceEntity(13U);
    msg.setDestination(15944U);
    msg.setDestinationEntity(73U);
    msg.op = 40U;
    msg.tas2acc_pgain = 0.956657657656;
    msg.bank2p_pgain = 0.34307854881;

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
    msg.setTimeStamp(0.365248277663);
    msg.setSource(60416U);
    msg.setSourceEntity(109U);
    msg.setDestination(59076U);
    msg.setDestinationEntity(224U);
    msg.op = 248U;
    msg.tas2acc_pgain = 0.0759544314538;
    msg.bank2p_pgain = 0.420812545448;

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
    msg.setTimeStamp(0.915579072058);
    msg.setSource(23495U);
    msg.setSourceEntity(151U);
    msg.setDestination(48391U);
    msg.setDestinationEntity(235U);
    msg.available = 3419043897U;
    msg.value = 136U;

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
    msg.setTimeStamp(0.0040775105365);
    msg.setSource(31892U);
    msg.setSourceEntity(100U);
    msg.setDestination(61458U);
    msg.setDestinationEntity(153U);
    msg.available = 517966754U;
    msg.value = 29U;

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
    msg.setTimeStamp(0.202114711655);
    msg.setSource(50033U);
    msg.setSourceEntity(72U);
    msg.setDestination(20756U);
    msg.setDestinationEntity(55U);
    msg.available = 3036942455U;
    msg.value = 198U;

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
    msg.setTimeStamp(0.124850641213);
    msg.setSource(33807U);
    msg.setSourceEntity(40U);
    msg.setDestination(46742U);
    msg.setDestinationEntity(109U);
    msg.op = 53U;
    msg.snapshot.assign("PFECMGNRGEIFDJHYSDFDTQQUDILXHCXZBTAOTYDVCNKKAGDKJXQJLCVEZAHIUNFWKCPVYBSEVPARMWZBJLOJEOWRLXPLVTBMZFKGXOZFWGUEZWUSHCXLIMBRXKPPWSHEAPHAURYAXVUGEJZZSWNFNVKMIRFQSHAQEBDTJIGSBIMCESRYBQOTHRNGKJSOMORUFUDWCHTTAQNWMPBOPVUXPXIYLHNKTVCQJCKYZYGSNYOWMVUMRGALLNIYOQQL");
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 161135938U;
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
    msg.setTimeStamp(0.924792695162);
    msg.setSource(11153U);
    msg.setSourceEntity(188U);
    msg.setDestination(25622U);
    msg.setDestinationEntity(201U);
    msg.op = 143U;
    msg.snapshot.assign("PZISMRFTEUXHQEFHDVYLPUHEGITQDDPJFCRYBCNKVJKZWBROXOKOCNJVKWSAFWJWKHPJTCHNIZHGUZEMXNASIYDJCUJLQEVVLTIBZVAJLNQFXPRTNXHENTMZBVMNLUQOQIRFXUJLZSCGWBPGSCAOAZNYOHCIYAKLKQFVCBTEGLFHDRDPUDQRWEFPCWIDBYYWVOZPSUKBZPMADWIBHOM");
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {122, -126, -47, 96, -99, -51, -112, -31, -103, -98, 63, -62, 102, 49, -57, -50, 60, 83, 97, 4, -45, -102, 50, 73, -53, -37, -10, -27, -97, -64, 39, -100, -96, -53, -108, 104, 85, 71, 104, -41, -24, -71, -87, -68, 16, -39, -21, 73, 123, 111, 91, 64, 102, -1, -64, -78, -73, -93, -15, -84, -23, 72, 100, -43, -122, -105, 11, 120, 53, -82, 48, 30, 123, 113, 49, -26, 84, 75, -31, 6, 37, -67, 73, 54, 44, 72, 55, -8, -106, -9, -10, -77, 13, -67, 32, -101, 24, -54, -38, 4, -64, -88, 63, 43, -118, 105, 83, -57, -78, -68, 18, -67, -62, -26, -108, 53, -48, 76, -60, 13, 22, -45, 76, -121, 59, 15, -3, 94, 37, 100, -54, 126, 11, 55, 60, -6, -3, -86, -108, 23, -30, -18, -71, -113, -73, -21, -18, 23, 29, -74, -85, 113, -34, -100, 126, 102, -17, 3, -92, -112, 82, -108, -53, 46, -127, 6, 56, -70, 111, -28, -2, -112, -95, -93, -92, 48, 92, 11, 115, 112, 29, 75, 124, 110, 0, -43, 96, 62, -62, 59, 89, -119, 123, 102, -10, -115, -22, -34, -97, -100, 72};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.240229296987);
    msg.setSource(7598U);
    msg.setSourceEntity(211U);
    msg.setDestination(65379U);
    msg.setDestinationEntity(190U);
    msg.op = 180U;
    msg.snapshot.assign("RNATMNWRWQVURNTXOWVVBLOGYCHYNFIZOQGIYJLWKRGHMYUKSETJXMSAITWLJEKCDZWGDBPUPBEKIQRGDLAYEVSIGZMSDCCPQVANQDSBZYTU");
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.974631339215;
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
    msg.setTimeStamp(0.718988532675);
    msg.setSource(57268U);
    msg.setSourceEntity(161U);
    msg.setDestination(60309U);
    msg.setDestinationEntity(14U);
    msg.op = 99U;
    msg.name.assign("VYWIQLVGHIJORYJFOEHNFZZUXDRLOSXCDMJYDVVKUYJXRQANAFPCSVSDYLLEQGKYRAAVOSZSIPJTIBMCGSHHJYEXBAQMWUPFHVLTDWQJCQMQIF");

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
    msg.setTimeStamp(0.983471153419);
    msg.setSource(39850U);
    msg.setSourceEntity(224U);
    msg.setDestination(11713U);
    msg.setDestinationEntity(45U);
    msg.op = 53U;
    msg.name.assign("EMRSRVPZXVQYQCYBLLCJPGZOZWTYYJPTSXGFSDGEZFERRBDHDOJZIUJARWNSWNPVJJINPCVBEUIIWUCDFJOKWGUYHWTNBNXROUHLZMCDZVJPEQXKAPIQVFEDOTTWDSTMBDQIZHHKYOPRUCMHKSKALQDEZOSBGIQASEMVBNUHNR");

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
    msg.setTimeStamp(0.341412892755);
    msg.setSource(8331U);
    msg.setSourceEntity(185U);
    msg.setDestination(2411U);
    msg.setDestinationEntity(176U);
    msg.op = 45U;
    msg.name.assign("CAQRWCPRBUGCQAYKTULZTBSYYOUTEFXSNOWJKRMDGLBHYZBAUKAOJBGAUIUYSDHDMXMVOWJSVJNQAURXREPRUSZPSFJKHPLNOSWDEELEBKBQTGAUVRICVGTFEWZCOXPQMAIRNZQHFLXJEYGDFPSVRGWGUTFVADGCIWLMNMZXCLVIKYXKJEYWTMDOIJIDNDLNEBVNFQZPNWICOYZGPHZBTHP");

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
    msg.setTimeStamp(0.230497545202);
    msg.setSource(37732U);
    msg.setSourceEntity(125U);
    msg.setDestination(47777U);
    msg.setDestinationEntity(74U);
    msg.type = 69U;
    msg.htime = 0.0446655735131;
    msg.context.assign("CEXKVZWLPJAXBONTQNKFRCDJFLFOSPHPLGBUGRQKMBYO");
    msg.text.assign("LNMHYVAWUCDCRLZUBUYIRYWRQKDARCXLIWLHDXXXZELOZSMPD");

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
    msg.setTimeStamp(0.616922680252);
    msg.setSource(22699U);
    msg.setSourceEntity(113U);
    msg.setDestination(43646U);
    msg.setDestinationEntity(204U);
    msg.type = 10U;
    msg.htime = 0.524278128388;
    msg.context.assign("BZBKIGGDRWEROQHDPAIGQCFHMFPNASNQJHWTLTEDXCUXJSIBHEUZZKBNYZFRZXKIPJADPOEKYAXPSFDVHCCKJHLTLRNKOIOBEQMODMZJHMLFLISIYYLDSLPNVKXWQTVCVXOQWUNFYIUZJJGBNISDMMEZQFVOYLPNJTUSDKARRBVGVNFLYWOJHAXBWDXZGVTCGBWJASMQAWVAQZOGTHQIBSPCAUHCEXKLUEUCEMEFFY");
    msg.text.assign("HQPFKSOHWPLEVMSQLJDZQDETT");

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
    msg.setTimeStamp(0.587910770189);
    msg.setSource(22956U);
    msg.setSourceEntity(198U);
    msg.setDestination(11637U);
    msg.setDestinationEntity(113U);
    msg.type = 154U;
    msg.htime = 0.407282536496;
    msg.context.assign("RXBDZKMSLFSWIAKOYWBLLNYJBYQZFGFRKCEPMUWTQJALOOAMRYQDSBKHMEHYAXTHWPKDZZEDQWCCNDCMIXPVKJQJRNBOPVNXZMKGXZRTDEOOTJNJWPHFATUYTBUOBUIGPPNXZYIOSSIYGWPGVOLRGBEXCHTZNLHLSQSFVAJDTIWACRZRUFFVBQUVVSVDOKAUKZMGPJIHIQNHUEXVGIHJCUTBXMKPEILUCGCMXNF");
    msg.text.assign("NJQDIEGTACGZAYFITKTKQTFVWDWKRBZRQBIGABDPUGKEIOURZOFNLLSTWSYDPUMWPFLHORXXTVNBYEBQDDXZMJPNLIHJTRMUVHSFEESMWTLQJBFDOZKJWHVAJGWCLBAKYTENGGACSPXQGIXPAUALOBBHMWCUZB");

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
    msg.setTimeStamp(0.419259914996);
    msg.setSource(51791U);
    msg.setSourceEntity(178U);
    msg.setDestination(49423U);
    msg.setDestinationEntity(183U);
    msg.command = 210U;
    msg.htime = 0.0641196090229;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 86U;
    tmp_msg_0.htime = 0.264534550339;
    tmp_msg_0.context.assign("PGABIFCLKPCRUVEQGXLZRVQWRBZAWCHOMXDIWKMDSAYBAJKAVPIRAFSQEXYTZSZMAVDILMSZMOLHWNGGGTJPBNPZWZUDCOICHXFQITFJKNNTKNRGRXUQTGXLEIDIYVRXBUCUWKFPGOFJMUTJQZBEFVOBJAFYZY");
    tmp_msg_0.text.assign("AWMTZZYPYWDIZNNUXEVUKTDHHDTVFSXXQQQFDMGJVRISZUWFGUHQUYGORXVLGNFMSKUDBBP");
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
    msg.setTimeStamp(0.239942702553);
    msg.setSource(25600U);
    msg.setSourceEntity(126U);
    msg.setDestination(2266U);
    msg.setDestinationEntity(129U);
    msg.command = 134U;
    msg.htime = 0.866337299427;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 38U;
    tmp_msg_0.htime = 0.781349112358;
    tmp_msg_0.context.assign("WTADILPWWSUAIQYMITZNDGKEFJEMKROFITMLWTKPOLROZPCUHENUSVXCXOGJZYOVYANLHACTYHSPJREC");
    tmp_msg_0.text.assign("AWYGDUKERFBVOSXAZUMHYGDSJHWFDVRTQWYCXMHGDSVDJNEHGESLMIVVNHZEMJKXXADOYJRUIOQUUZXRAHFTCYTELNPMJPLRTICEYYAGBHULJPMPMKZCDSFFXAUMBBTOZTQIYSSFBKKVIBBTKUIMPRFWGFRUAZKXLROIDHZCLGSMWBNVGNICRPVLHFZOQSCYANVOPQWKEONAACTNQTUBJPGEIIYOZXPEWZLXQ");
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
    msg.setTimeStamp(0.944549565795);
    msg.setSource(25995U);
    msg.setSourceEntity(126U);
    msg.setDestination(47063U);
    msg.setDestinationEntity(98U);
    msg.command = 54U;
    msg.htime = 0.727651999591;

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
    msg.setTimeStamp(0.369623536779);
    msg.setSource(8751U);
    msg.setSourceEntity(223U);
    msg.setDestination(38116U);
    msg.setDestinationEntity(12U);
    msg.op = 43U;
    msg.file.assign("RIVNUSIOVRJBLFLIPSUZVCFEQPCASCPCSHVYOHIUPRJZBHQDNLXYEFAOKSRQWVKJHGNUHTEFOXTXOUJDNYHDULWURWGTXKKBWZEIXGPMMYIOESBSEBTEJAXBWTBPJPXZVZZCYGUATVYC");

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
    msg.setTimeStamp(0.00689061556231);
    msg.setSource(40929U);
    msg.setSourceEntity(122U);
    msg.setDestination(17475U);
    msg.setDestinationEntity(143U);
    msg.op = 11U;
    msg.file.assign("FDKWXHYUZRBJOCTZWESPRMEAXUFORPJBMHAGJXPZPUNGHZTFFPFMWYOQGHJTCLFMNM");

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
    msg.setTimeStamp(0.257027528457);
    msg.setSource(24186U);
    msg.setSourceEntity(125U);
    msg.setDestination(3598U);
    msg.setDestinationEntity(141U);
    msg.op = 190U;
    msg.file.assign("ANSBEQHIXQFQBYSAJLHYKXODGYUGCKODGPJNJPELOIQKCMTSZHFWXYBMCWLEMVIJVTSNOGCDBZRTBUDXVRBGWPZDUGXVPROGNAZXTIYZORSLWLNIVDRFCVDKJFMMPHKTFWRTWKWSDLQWDIEATBUGBMQZXARZXUYZUQPKKBUFQHAFGCLJAKPHEVFVITULSMNYLIPOEJBYPWPTYJDWSXNOINTCNREUJQHHZRN");

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
    msg.setTimeStamp(0.882761610716);
    msg.setSource(38552U);
    msg.setSourceEntity(169U);
    msg.setDestination(27817U);
    msg.setDestinationEntity(170U);
    msg.op = 35U;
    msg.clock = 0.384334826636;
    msg.tz = -38;

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
    msg.setTimeStamp(0.00973005928251);
    msg.setSource(63235U);
    msg.setSourceEntity(113U);
    msg.setDestination(50925U);
    msg.setDestinationEntity(196U);
    msg.op = 122U;
    msg.clock = 0.415688503182;
    msg.tz = 106;

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
    msg.setTimeStamp(0.266361401737);
    msg.setSource(48425U);
    msg.setSourceEntity(213U);
    msg.setDestination(47786U);
    msg.setDestinationEntity(92U);
    msg.op = 98U;
    msg.clock = 0.711636221849;
    msg.tz = -55;

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
    msg.setTimeStamp(0.816226507421);
    msg.setSource(51850U);
    msg.setSourceEntity(118U);
    msg.setDestination(54935U);
    msg.setDestinationEntity(89U);
    msg.conductivity = 0.800219569847;
    msg.temperature = 0.290002234585;
    msg.depth = 0.658211955801;

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
    msg.setTimeStamp(0.559796240772);
    msg.setSource(62884U);
    msg.setSourceEntity(140U);
    msg.setDestination(22801U);
    msg.setDestinationEntity(172U);
    msg.conductivity = 0.590337195454;
    msg.temperature = 0.521870990219;
    msg.depth = 0.926221672471;

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
    msg.setTimeStamp(0.245413768034);
    msg.setSource(11383U);
    msg.setSourceEntity(130U);
    msg.setDestination(56198U);
    msg.setDestinationEntity(237U);
    msg.conductivity = 0.848817994478;
    msg.temperature = 0.0585029816877;
    msg.depth = 0.617118031926;

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
    msg.setTimeStamp(0.917304313121);
    msg.setSource(16710U);
    msg.setSourceEntity(98U);
    msg.setDestination(20058U);
    msg.setDestinationEntity(29U);
    msg.altitude = 0.390052578047;
    msg.roll = 22649U;
    msg.pitch = 58343U;
    msg.yaw = 56019U;
    msg.speed = -3812;

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
    msg.setTimeStamp(0.0854584353122);
    msg.setSource(55049U);
    msg.setSourceEntity(183U);
    msg.setDestination(31936U);
    msg.setDestinationEntity(162U);
    msg.altitude = 0.808411332473;
    msg.roll = 47443U;
    msg.pitch = 19930U;
    msg.yaw = 48934U;
    msg.speed = -4293;

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
    msg.setTimeStamp(0.32126169817);
    msg.setSource(25654U);
    msg.setSourceEntity(167U);
    msg.setDestination(10906U);
    msg.setDestinationEntity(137U);
    msg.altitude = 0.273721980805;
    msg.roll = 32502U;
    msg.pitch = 51740U;
    msg.yaw = 28670U;
    msg.speed = -26811;

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
    msg.setTimeStamp(0.883049253084);
    msg.setSource(21419U);
    msg.setSourceEntity(121U);
    msg.setDestination(53372U);
    msg.setDestinationEntity(66U);
    msg.altitude = 0.153697077153;
    msg.width = 0.908134762405;
    msg.length = 0.257131053553;
    msg.bearing = 0.0254661713924;
    msg.pxl = -21229;
    msg.encoding = 116U;
    const char tmp_msg_0[] = {-29, -46, -7, 85, 102, -29, -65, 44, 26, -58, 17, -34, 119, -66, 69, 67, -10, -109, -78, 35, -94, -77, 77, -113, 85, -62, -95, -4, -35, 17, -98, 20, 104, 32, 62, -38, 77, -112, -62, 27, -128, -42, -36, 94, -102, 12, -65, -62, -119, -36};
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
    msg.setTimeStamp(0.109875777258);
    msg.setSource(40791U);
    msg.setSourceEntity(43U);
    msg.setDestination(1005U);
    msg.setDestinationEntity(56U);
    msg.altitude = 0.0401369227487;
    msg.width = 0.15443304676;
    msg.length = 0.262355916124;
    msg.bearing = 0.550473694118;
    msg.pxl = 2252;
    msg.encoding = 24U;
    const char tmp_msg_0[] = {0, -65, -121, -62, 86, 27, 99, 49, -75, -52, -76, -37, 10, 82, 78, 26, -90, 63, -50, -77, -34, 23, -107, 73, 118, 96, 3, 95, 1, -86, 22, 97, -83, -113, 48, 59, 119, -76, 50, -21, -43, 114, -103, 119, 41, -6, -53, -97, 56, -94, 62, -52, 62, 75, 30, -15, 95, -92, -50, -19, -84, 114, -35, 121, 7, -89, 72, -13, -15, -44, -38, 19, -58, 2, -109, -121, -106, 78, -103, 92, 49, -127, 42, 65, 119, -109, 63, 33, -108, -102, 125, -111, 16, 65, -25, 0, -36, 48, -43, 26, -97, -44, -95, -66, -87, -120, -33, -118, -97, -79, -11, -23, 68, -51, 47, 16, -32, -67, 35, -95, 57, 119, 72, 41, 102, -102, 1, 38, 48, 123, 34, -13, 19, 37, 91, 77, 51, -103, 22, -63, -5, -48, -105, 35, 48, 110, -19, -43, -55, -53, 37, 15, 76, -119, 94, -18, -83, 96, -84, 106, 3, -75, -7, 3, -56, 41, 19, -11, -38, -87, -104, 38, -116, 56, -91, 94, 21, -38, 90, -64, -9, -28, 43, 104, 112, 71, 90, 66, -113, -49, 17, -82, -109, 75, -99, 54, -53, -28, 89, -109, -4, 8, -128, 59, 103, -9, -19, -59, -78, 81, -50, 113, 85, 53, 9, -13};
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
    msg.setTimeStamp(0.674680523305);
    msg.setSource(19347U);
    msg.setSourceEntity(129U);
    msg.setDestination(10956U);
    msg.setDestinationEntity(1U);
    msg.altitude = 0.122770944662;
    msg.width = 0.982607458136;
    msg.length = 0.383126615748;
    msg.bearing = 0.812332054666;
    msg.pxl = -1074;
    msg.encoding = 180U;
    const char tmp_msg_0[] = {118, 15, 39, 114, -9, -31, 41, -114, 58, 40, -58, -118, -59, 83, -62, -103, 96, 32, 19, 19, 38, -123, -84, -70, -19, 93, 96, 90, 44, -50, 70, 113, 107, 64, 42, 94, -1, -7, -11, 85, -103, -23, -57, 8, 28, 100, 126, -16, 60, 119, 6, -49, 15, -104, 10, -31, 50, 86, -15, -100, -88, 15, 117, 89, -116, -9, -126, -57, 83, -61, 47, -4, 1, -27, -21, -59, -68, -29, 60, -81, -103, -41, 34, -26, -74, 106, -28, 56, 94, 32, 66, -78, 73, -116, 99, -84, 122, 56, -9};
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
    msg.setTimeStamp(0.0584173643327);
    msg.setSource(8621U);
    msg.setSourceEntity(33U);
    msg.setDestination(21390U);
    msg.setDestinationEntity(224U);
    msg.text.assign("INTUQCAMCERHWRJTWFBPNSXFUCRJVWJAMLZDKJZPVKXEQNEPXBDDEGGOOEWNLHAQJKSUIYIEMDGYKRFVAKOKCZQHOYFFSGVMZZTRQLMNKNCTGRTJOZYABHNLMLQWXMUZYJASMGWRRIYBQBIDIPSIXQKYFBVKPXBZHUELVCDPTARSEUVOMHDZCJLWPNEPGVSFYXBSYXAWDIHAKHTSDZCORDEUIXAX");
    msg.type = 8U;

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
    msg.setTimeStamp(0.170148575065);
    msg.setSource(43879U);
    msg.setSourceEntity(35U);
    msg.setDestination(40827U);
    msg.setDestinationEntity(203U);
    msg.text.assign("DOYVWDSGRMKJTMQPQPJNVREOTPUPWKURAUMWIBF");
    msg.type = 139U;

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
    msg.setTimeStamp(0.576235069633);
    msg.setSource(58275U);
    msg.setSourceEntity(165U);
    msg.setDestination(53881U);
    msg.setDestinationEntity(28U);
    msg.text.assign("SEFDKGUGMJNEJDVHFJGZNJIHFITULVXYNULZKO");
    msg.type = 53U;

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
    msg.setTimeStamp(0.536717216546);
    msg.setSource(6712U);
    msg.setSourceEntity(55U);
    msg.setDestination(22876U);
    msg.setDestinationEntity(87U);
    msg.parameter = 225U;
    msg.numsamples = 92U;
    msg.lat = 0.132650764266;
    msg.lon = 0.840246935099;

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
    msg.setTimeStamp(0.0591257179806);
    msg.setSource(26656U);
    msg.setSourceEntity(60U);
    msg.setDestination(2533U);
    msg.setDestinationEntity(207U);
    msg.parameter = 170U;
    msg.numsamples = 219U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 13463U;
    tmp_msg_0.avg = 0.803993760119;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.891967962503;
    msg.lon = 0.611505116752;

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
    msg.setTimeStamp(0.653404521209);
    msg.setSource(18917U);
    msg.setSourceEntity(187U);
    msg.setDestination(62163U);
    msg.setDestinationEntity(157U);
    msg.parameter = 28U;
    msg.numsamples = 168U;
    msg.lat = 0.120674569305;
    msg.lon = 0.0771457706249;

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
    msg.setTimeStamp(0.889299405493);
    msg.setSource(5975U);
    msg.setSourceEntity(115U);
    msg.setDestination(29291U);
    msg.setDestinationEntity(216U);
    msg.depth = 2799U;
    msg.avg = 0.256902270578;

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
    msg.setTimeStamp(0.965839210325);
    msg.setSource(62456U);
    msg.setSourceEntity(127U);
    msg.setDestination(56513U);
    msg.setDestinationEntity(29U);
    msg.depth = 28182U;
    msg.avg = 0.282229625118;

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
    msg.setTimeStamp(0.295454232999);
    msg.setSource(38588U);
    msg.setSourceEntity(15U);
    msg.setDestination(12617U);
    msg.setDestinationEntity(208U);
    msg.depth = 52446U;
    msg.avg = 0.893738423676;

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
    msg.setTimeStamp(0.119178039959);
    msg.setSource(24931U);
    msg.setSourceEntity(113U);
    msg.setDestination(25849U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.826427248146);
    msg.setSource(1850U);
    msg.setSourceEntity(45U);
    msg.setDestination(51342U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.264933645728);
    msg.setSource(24805U);
    msg.setSourceEntity(46U);
    msg.setDestination(36826U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.471089808977);
    msg.setSource(13643U);
    msg.setSourceEntity(239U);
    msg.setDestination(26809U);
    msg.setDestinationEntity(39U);
    msg.sys_name.assign("MLUXJZQUPMRFHVJBSPTSHGAVVJGDAOAKSWOG");
    msg.sys_type = 24U;
    msg.owner = 56172U;
    msg.lat = 0.76669909458;
    msg.lon = 0.295715208314;
    msg.height = 0.587127391297;
    msg.services.assign("ZBFWBLAFWGLVRYOZDAHSBZXKQJHYVVHHCVIOHIEYQOZMKQAOORDIKPYWSGLXIVPVVYJESAJSBTUGZFZDPYGJNWDNMCACPAKMPRLAJHXVE");

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
    msg.setTimeStamp(0.601663009467);
    msg.setSource(20758U);
    msg.setSourceEntity(224U);
    msg.setDestination(17577U);
    msg.setDestinationEntity(52U);
    msg.sys_name.assign("RMPBJPEMYGEYXVTZAHADHVROUFSMXOKIMEGMKAOCZELRPFOTJJSNZAXFVBILBTHKWUMHYVXIEWEXHKKQPYTXCVHOCJKYGSHDBDICBZHDVSGINGAMS");
    msg.sys_type = 24U;
    msg.owner = 34551U;
    msg.lat = 0.589925490094;
    msg.lon = 0.375339578021;
    msg.height = 0.498745075527;
    msg.services.assign("NTRPXEUAQIHWBKVNJZFUJHMRQFFMFPGVOSMVZDCRNHYDNFQNTBQLBTNEMSRWRJCPAXZOTRGQPMLXUFRLFELXCAJGHKHRUGLSMVEFODMPIQSCDEYAKMYXOJKXKGNGJQNIKPDCFSCISILVTCKBXWOBYBVMGRTXVRSXYABJZSCOZAJKZEABKEZBSWGUDTIBDOLWVKDPEQEZWTHPWQCOWMWPTLWQNYIG");

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
    msg.setTimeStamp(0.273231727698);
    msg.setSource(60039U);
    msg.setSourceEntity(183U);
    msg.setDestination(25705U);
    msg.setDestinationEntity(95U);
    msg.sys_name.assign("THOEOSVGYVWGUISCXLQFKXOUKCXGOAIEUGJGHJDVGAFFJLZMDTIDQJRWTZYITBBFZYANVBFGFIBALRYBQLJSTTSDPRBCEJXZXPUAQMDVCMKATJHLKEQXMKIHOPEXKCQLSOXAIGVNPSAZLGEWSKIMKRPYHHPUOCETNQORKNYENXYWCYINRZBVSMLNNJWXMMIHWRRZPLHQZULTOUHCWMRDDPOAQFFVDPTPZFGSDBUK");
    msg.sys_type = 2U;
    msg.owner = 25505U;
    msg.lat = 0.248325749333;
    msg.lon = 0.37139946171;
    msg.height = 0.407101124768;
    msg.services.assign("KFOCSBMRNIBBEVHJRBFGJBKJQESETIAPCZTBLRUHESLZNTVEMQTNYVQSTUDRPHEJTTYYQCNARPUJCPOKRAXFHKEXZFYWVMSZNZPEWDOOBOXGIVUYGRXWIMBTVTZLJUKQQOAKYACNXKAQMSXWWLUWAFVQZGAERCYI");

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
    msg.setTimeStamp(0.0298901194626);
    msg.setSource(4884U);
    msg.setSourceEntity(43U);
    msg.setDestination(849U);
    msg.setDestinationEntity(253U);
    msg.service.assign("VTCMCDCWXUPICLRXNMHKMTXORREIYFUCNYUZDNEIGAKLZJVFSNXWFDQWAUEJZUYLJRIVSHRJPGPGAPPCZI");
    msg.service_type = 80U;

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
    msg.setTimeStamp(0.338701346807);
    msg.setSource(53836U);
    msg.setSourceEntity(227U);
    msg.setDestination(49112U);
    msg.setDestinationEntity(86U);
    msg.service.assign("YLDSEHNTEIBCCHFRGZQNMSHWBLDPCHCJYSMNPQVOJJVGWCTEKAIPBSOSZIAJMKHZAYOLUGATMKSXE");
    msg.service_type = 245U;

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
    msg.setTimeStamp(0.9345046628);
    msg.setSource(57223U);
    msg.setSourceEntity(61U);
    msg.setDestination(56303U);
    msg.setDestinationEntity(68U);
    msg.service.assign("HXHQPTXXAMNNO");
    msg.service_type = 216U;

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
    msg.setTimeStamp(0.263715960888);
    msg.setSource(58825U);
    msg.setSourceEntity(252U);
    msg.setDestination(13105U);
    msg.setDestinationEntity(68U);
    msg.value = 0.175260326048;

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
    msg.setTimeStamp(0.307738716878);
    msg.setSource(36820U);
    msg.setSourceEntity(46U);
    msg.setDestination(15514U);
    msg.setDestinationEntity(246U);
    msg.value = 0.54750238695;

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
    msg.setTimeStamp(0.895526212739);
    msg.setSource(43542U);
    msg.setSourceEntity(36U);
    msg.setDestination(44646U);
    msg.setDestinationEntity(95U);
    msg.value = 0.183613312151;

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
    msg.setTimeStamp(0.630653564157);
    msg.setSource(58841U);
    msg.setSourceEntity(169U);
    msg.setDestination(40359U);
    msg.setDestinationEntity(239U);
    msg.value = 0.488330040286;

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
    msg.setTimeStamp(0.47574313736);
    msg.setSource(20952U);
    msg.setSourceEntity(170U);
    msg.setDestination(29504U);
    msg.setDestinationEntity(162U);
    msg.value = 0.14466785519;

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
    msg.setTimeStamp(0.896686181938);
    msg.setSource(22072U);
    msg.setSourceEntity(228U);
    msg.setDestination(16038U);
    msg.setDestinationEntity(106U);
    msg.value = 0.948971080249;

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
    msg.setTimeStamp(0.389187735094);
    msg.setSource(12495U);
    msg.setSourceEntity(174U);
    msg.setDestination(18749U);
    msg.setDestinationEntity(185U);
    msg.value = 0.0333395458297;

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
    msg.setTimeStamp(0.585524972663);
    msg.setSource(11875U);
    msg.setSourceEntity(4U);
    msg.setDestination(57851U);
    msg.setDestinationEntity(173U);
    msg.value = 0.997694779522;

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
    msg.setTimeStamp(0.408254535227);
    msg.setSource(7655U);
    msg.setSourceEntity(239U);
    msg.setDestination(22491U);
    msg.setDestinationEntity(41U);
    msg.value = 0.404599308504;

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
    msg.setTimeStamp(0.830847858238);
    msg.setSource(52119U);
    msg.setSourceEntity(93U);
    msg.setDestination(8133U);
    msg.setDestinationEntity(181U);
    msg.number.assign("XGHZRHCPHFESXTNYBLCQQTPWQMEFXXQLPBNWOZKENCMZUSOIRIYOSIIIEXFNJJQSRFGRMWJAGNVJGSXAYBMKOBWHCNYQMOPPZNNEVXBCMSFTDVDLDBNQMHYDGTMMYXUNYLABISLEJKLRLZJUTTJAAADZRVUWFKSUUIEDRAZYKJQCVZAPCDOIPUBJCEKKSPBJFZRDBXFSHUQALIHVOHVLGAHGMWTWGOXKFFKTLVPYGVHUKDTPGR");
    msg.timeout = 50761U;
    msg.contents.assign("TQHTEWRCBEGTQEWXUJHOWLXCRHBHMPETUCNFSUBAJYHWNCDBEQMPJYVIQKYMLEFJDHXNSVVQGRGSNADXLCITXHJAMGQYWVZGUIDZAXDMMIKPSSSHJYEOXBSTZLZYJWIZSTFLUOCZZXJDBAVVUODFKAFRWPHKNXCQBPQBLRKYUOSYYNVGLPOFT");

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
    msg.setTimeStamp(0.632521543834);
    msg.setSource(37437U);
    msg.setSourceEntity(205U);
    msg.setDestination(51157U);
    msg.setDestinationEntity(164U);
    msg.number.assign("BCMXGFOHPEPRJMOQTKM");
    msg.timeout = 11862U;
    msg.contents.assign("XELIGMYMTQYEXKDLWIARVNTYKPGZJVOGXKAGTEMHGXMRBUWLHZDDPOZORASJSTJXEBCONRZNRDTLYTROBJLUCANDCHPBQQHFSNIVEQFJFUOYDLLPIDASFHSGWVJZCWEGLTUXKSSMZRIZRVRIYPQUQCFKDQOXAISXXHCWJTGAQKOQQBAIUVUELBDGFEAMHZYKZVNBUOBMWPEZJIGWTBPXUYYJFSIWDKEVFCWMPJP");

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
    msg.setTimeStamp(0.674760637127);
    msg.setSource(17791U);
    msg.setSourceEntity(140U);
    msg.setDestination(9936U);
    msg.setDestinationEntity(205U);
    msg.number.assign("SUBNLBSWFBGXKIMDDEZBYMAJOYOXLINYFMTCPHOXVLAU");
    msg.timeout = 14772U;
    msg.contents.assign("IUEAJJHBEGKCBBRPHBHNNCTGWACVIGDIXFRLMCXVPJONBDSZHOEADKXAKHPQHGVFLKUNHAZMPMHKRQGEZRYWSAFNKHIEZQTSTFMWBLLVOUNQQEEEOPDPCUHMZRDDCTIJIRIWJGTINTDGXFCORYIGDCPJFARZEOVMTYBZFYWJLOEWTMXTQSAFKSQ");

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
    msg.setTimeStamp(0.726363357758);
    msg.setSource(54811U);
    msg.setSourceEntity(127U);
    msg.setDestination(51245U);
    msg.setDestinationEntity(34U);
    msg.seq = 1908023056U;
    msg.destination.assign("EQKRJLBSMSOCILKVQANRBNKISXEYWFKMGBIBGWZWCRIZSFVP");
    msg.timeout = 27954U;
    const char tmp_msg_0[] = {-12, 101, -77, 34, -32, -123, -6, 4, -35, -61, -18, -70, 103, -11, 72, -102, 50, 76, 119, 42, -116, -75, -101, -64, -58, 120, 116, 25, 102, 41, -48, 122, -61, -10, -51, -27, 100, -80, -82, -27, -116, 69, -13, 121, 7, -110, -47, 120, 9, 50, 19, 41, -44, 41, 81, -1, 15, 111, 86};
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
    msg.setTimeStamp(0.812057887597);
    msg.setSource(20991U);
    msg.setSourceEntity(2U);
    msg.setDestination(60797U);
    msg.setDestinationEntity(233U);
    msg.seq = 3330607765U;
    msg.destination.assign("PDTEICTFOZQFLPCBXXGZTQEOJNHCGIXDJKSDXGJYYRPLYKFACYKTXRLBJMNQEETNGKEPERUAHVULQUNASNURHXVKAOQIFBTMFDHHUSIMSVQPOTCFMMSUCWVLNSERRMRNYEWMCSGHLVWMOWQW");
    msg.timeout = 26596U;
    const char tmp_msg_0[] = {24, -4, 110, 1, 120, 24, -16, 36, -24, 53, 82, 9, 62, 76, 40, 98, 5, 26, 46, -120, 64, 95, -44, 21, 27, 108, 12, 99, -102, 8, -41, -12, -112, -119, -50, 32, 52, -121, -97, 32, -19, -112, 36, 75, 96, -90, 79, 44, 83, 81, -84, 8, -7, -94, -115, -83, 60, 90, 61, 35, -80, 73, 40, -26, -101, -70, -70, -71};
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
    msg.setTimeStamp(0.503440597085);
    msg.setSource(185U);
    msg.setSourceEntity(7U);
    msg.setDestination(40666U);
    msg.setDestinationEntity(118U);
    msg.seq = 4233484958U;
    msg.destination.assign("TOCPPZLKGXAQPIVTJDWPLTHOINSZBYFD");
    msg.timeout = 40336U;
    const char tmp_msg_0[] = {-48, 44, 5, -27, 56, -76, 37, -56, -121, 13, -102, 94, -23, -16, -99, -18, -24, -104, -91, -72, -10, -76, -119, 46, -3, -19, 91, 122, 115, 76, -34, -123, 122, -98, 19, 103, 99, -13, 101, 32, 8, 104, -115, -35, 93, 11, -62, -30, -72, 60, -57, -49, -30, 80, -21, -38, 123, 104, -103, 14, 41, 9, -8, 124, 26, -56, 71, 44, 98, -25, -24, 24, 11, 72, 79, 81, 42, 15, -109, -60, -126, 96, 7, 44, -52, 90, 8, -127, -92, -128, 121, 20, -83, 1, -85, -28, 27, -128, 39, 59, -26, -103, -77, 65, 57, -6, 37, -54, -118, 107, -65, 7, 22, -33, -117, 7, 115, 0, 56, 125, -9, -119, 119, -55, -49, -110, 69, 4, -67, -121, -93, 82, -36, -39, 0, 107, 64, 119, 95, 55, -70, -5, -2, 76, -5, 90, -51, -124, -41, -58, -86, 67, 44, -6, -88, -10, 12, 120, -52, -92, 53, 66, -128, 21, 10, -84, -1, 18, 116, 66, -59, 111, 3, 114, -61, -61, -104, -122, 75, 67, 24, -117, -89, 117, -115, -120, 56, -61, 63, 43, 61, 66, -6, -79, -67, 65, 22, -5, -110, 59, -116, -57, 12, 111, 95, 90, 45, 83, 10, 54, -111, -25, -55, -116, 53, -18, -6, 122, -37, 67, -47, 121, -71, -78, -126, 62, 59, 118, -13, -36, -34, 57, 58, 65, 92, 18, 80, 7, -109, 101, 104, -69, -7, -14};
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
    msg.setTimeStamp(0.34183485511);
    msg.setSource(20435U);
    msg.setSourceEntity(182U);
    msg.setDestination(59615U);
    msg.setDestinationEntity(135U);
    msg.source.assign("IVCKYSOXWJMCQVXGFMNPRGMUYLNPXNGEARNGPDLQSMCBHKWRCJZHBQMOMFUKTXKXBHXJBJDXJPJXYPWWNAEKEDLUVIDDRCZBAOSMUBAFTPHQRMPSREYQRCOFHHGUSPOJTNUCZVISDILVAGCUUZDHVBFKKITLEAYYNMVFNTJEJRIANFKRQZZLGDHBCTMLXFSWTAIU");
    const char tmp_msg_0[] = {-5, 1, -65, -72, 108, -91, 65, -31, -98, -68, -120, -44, 116, 3, -115, -79, 126, -17, -42, -84, 116, 119, -6, 64, -55, 38, -90, -102, 40, 30, 95, -31, 48, 117, 74, 119, -2, -102, -121, -77, -14, 82, -127, 67, 63, -75, 52, -115, -12, -74, -1, -13, 39, -48, -23, -77, -8, -37, -108, -6, 61, 6, -57, 93, -33, -12, -25, 119, -65, -73, -82, -6, -1, -29, 37, -77, -12, 20, -19, 19, -100, 26, 56, -73, -118, 122, -97, -37, 24, -46, -25, -119, 122, 106, -58, 42, -100, -63, 21, 5, -13, 63, 17, -127, -25, 59, 22, 55, -46, 5, -76, -26, 31, 70, -32, 38, 43, 13, -12, -114, -123, -106, -107, 18, -23, 24, -24, 68, 67, -120, -72, 67, 103, -62, 88, 1, 98, 6, -59, -19, 97, 91, 52, 73, -35, -47, -31, 12, 69, 34, -42, 122, -108, -54, -50, -102, -21, -90, -98, 1, -43, -33, -40, 26, 113, -40, -98, 107, 11, 89, 69, 55, 48, 66, -47, 60, -100, -32, -57, 111};
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
    msg.setTimeStamp(0.848234693657);
    msg.setSource(55391U);
    msg.setSourceEntity(31U);
    msg.setDestination(18816U);
    msg.setDestinationEntity(106U);
    msg.source.assign("NIRTJOUUVYHIMCUJQEFMBNKNP");
    const char tmp_msg_0[] = {-5, -42, -126, -9, 68, -29, -100, 64, -43, 12, -59, -62, 17, -23, -106, 126, -38, -103, -12, 8, 15, 70, 63, -92, -49, -26, 100, -63, 56, -12, 82, -6, -16, 39, -48, 8, 51, -89, 3, 62, -4, 40, -94, -85, -95, -60, -111, -76, -112, 117, 124, -89, 88, 5, 70, -92, -59, -98, -74, 65, 16, 124, -31, 114, 3, 104, 55, -113, 8, 99, 100, 25, 73, 106, 100, 7, 61, 94, 21, -51, -126, -79, -53, -36, -69, 12, -19, -49, -6, 50, 50, -71, 119, -99, -126, -73, 34, -11, 107, 90, 88, -22, 125, -92, 56, -118, 109, -86, -69, -84, -82, -119, -116, -102, -127, -12, -63, 57, 104, 55, 54, 35, -20, 44, 2, 20, -112, 9, -21, -43, -42, 96, 107, 44, -118, -41, 5, -45, -59, 116, -91, 20, -49, 109, 105, -59, -73, -53, 62, -112, -122, -17, -110, 122, 119, 73, 84, 76, -90, 78, -124, -98, -94, -10, 51, 81, -40, -91, -25, -81, 118, -23, -20, -62, -127, 106, -41, 67, 104, -26, -2, -58, 53, 38, 32, 10, 70, 7, -126, 94, 122, -62, 6, -93, -92, -37, -124, -121, -24, 27, -8, -26, -50, -112, 107, -31, 79, 28, -118, -18, 98, 108, -14, 79, -18, -90, -92, 38, -3, -123, 79};
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
    msg.setTimeStamp(0.500638932295);
    msg.setSource(57772U);
    msg.setSourceEntity(171U);
    msg.setDestination(63681U);
    msg.setDestinationEntity(244U);
    msg.source.assign("OVYMXQXAPWDLRDMUVLM");
    const char tmp_msg_0[] = {-36, 116, 113, -93, 91, 24, -107, -15, -89, -20, 111, -123, 59, -93, -107, 33, -48, 50, 73, 99, 64, -69, 64, -2, -85, -64, 90, 114, -68, 14, 27, -63, 37, 113, -8, 88, -45, 112, -113, -103, -8, -12, -79, -79, -126, -29, -99, -45, -62, -74, 66, -45, -78, 17, 118, 4, -121, -43, 68, 76, 71, 93, 4, -55, -70, 111, -124, 44, -112, -79, -86, -45, 34, -88, -64, 95, 88, 85, 34, 106, 2, -33, 81, -53, -42, 73, 70, -49, -77, 110, -60, 123, 125, -65, 17, 32, 34, 93, -61, -60, -50, 45, -57, 56, 107, 59, -69, -12, -11, 38, 118, 124, -14, 10, 66, 27, 36, -32, 112, 31, -32, -12, 94, -7, 48, -113, 60, 32, -64, -118, 91, 51, -118, 58, -29, 87, -112, -108, 112, 126, 31, 73, -54, 77, 100, 103, -69, 98, -107, -16, 80, 92, -32, -39, -58, -84, -65, 3, 115, 0, 109, 38, -82, -47, 119, -122, -72, 48, -79, 35, -1, 54, -54, 26, -8, -65, -92, 101, -38, -11, 32, 76, 75, -92, -121, 76, -17, 49, -107, -69, -104, -68, 2, 32, 109, 94, -77, -75, -13, -26, -20, 11, -5, -93, 79, 52, 88, -22, 35, 57, 84, 17, -58, -33, -58, 87, 63, -75, -65, 49, -58, -23, 117, 44, -7, -1, 103, -96, 107, -101, -28, 78, -46, 90, -12, 6, 11, 106, 12, 39, 109, 97, 69, -97, -10, 38, -77, 50, 59, 35, -67, 38};
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
    msg.setTimeStamp(0.596657497694);
    msg.setSource(12899U);
    msg.setSourceEntity(83U);
    msg.setDestination(49648U);
    msg.setDestinationEntity(38U);
    msg.seq = 219500034U;
    msg.state = 100U;
    msg.error.assign("KYTCLLKODCDVQULXAWBICITNKTHRFMDQPINSMYGQGALGGZSYUIEEFVJOCRCUWYXVDTJHAVSHPCULBZTKOUROBKAXGZXGNVVBUSYHRYVMYQOEW");

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
    msg.setTimeStamp(0.815270741642);
    msg.setSource(31997U);
    msg.setSourceEntity(91U);
    msg.setDestination(62387U);
    msg.setDestinationEntity(141U);
    msg.seq = 3975544123U;
    msg.state = 89U;
    msg.error.assign("RIKUSDUBGPCTREIKBCFNVUDYWRQPCMJKGJXQRIMHDGIBUMWXEYVFTJGFUYWMFWQTRCXCLPLUJKYZSIHQDDETFRZASCIBNOMEYOVDOPOWPLMEIZRVBCREHLVLXLPRLJHDLQPNNSOAFFANEZYEJXPSKXSKNNPZAWBTBOSVXFYPKTYBQHNXB");

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
    msg.setTimeStamp(0.227635256725);
    msg.setSource(10613U);
    msg.setSourceEntity(85U);
    msg.setDestination(47362U);
    msg.setDestinationEntity(18U);
    msg.seq = 3406530307U;
    msg.state = 242U;
    msg.error.assign("NBCKPLOWISYTZNKBENOUDTXSSYXPREITJJGSANFRSXRJMVWMOTVATCFKLUYUNCEHHZVOELEYUWHIWVQUMKAGJQJCUZTTWDTGIBRZHNMCXIDLFSHPBNNUJEIMBKWQFVDLLIFUPUIETYGUKPJGZSNBEYLBSHOEYCDGSPZROFIZCBWOKZLBDOWPJLCQVQXXIFOXBHMYMDQDREGVMZPAFRQAKVRJAPFGZXSQADKPVAVC");

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
    msg.setTimeStamp(0.962869247144);
    msg.setSource(61652U);
    msg.setSourceEntity(200U);
    msg.setDestination(24484U);
    msg.setDestinationEntity(138U);
    msg.origin.assign("WYNNYSFQEADDJLJLYOIOLZIRWVMDPUFKGGSTGNJYZXQWKZQXHQUBFBRNN");
    msg.text.assign("GUMOWAUZBPJOXGBWOGSPUHWAYHAABYZIIGCUUQVNWRSJKGCMVKWONRYLZPNRCQXYPQASEEVDMIVHFDGRBYTLPCQOLFMJIKKXUMBATOFLWTTEVJIYYXRTNCFWCHIXFFFOZLRLZHUOYDTFMPOHVDCTNMLISYBSTKARSPUGVGWISKCDKJXLUMXUKRMPDDJBBJEQE");

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
    msg.setTimeStamp(0.512112641678);
    msg.setSource(58081U);
    msg.setSourceEntity(163U);
    msg.setDestination(6112U);
    msg.setDestinationEntity(107U);
    msg.origin.assign("FERDZMATBLDGJNCTPUMTSZGFJTTOEGMQJDWFKRKVHDBAYTVVSIYMIXIXKQVVCBWREQ");
    msg.text.assign("DLMNGHHCXKHNOEWCYRUZYNQCBFGVUEAPXYZWTQQLLOOLETYDGVPSJVUNOWCYBBEWNSRRYPGBWWIXKIFOAPURQGATGVAIMSHBTLZJDLSKQXRAACXJAAGFEHMGFUQVPDSKBBMZVBOCJNSTDAQVREYPMJAFJVXFUOBGQWXJNCOLTSWCIPUPUKLSYNHQXVSWEKDPURZHMREDHLYJIHQTCILKJJTVMRFOGZWMOZITXFMRZIICIKMNKP");

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
    msg.setTimeStamp(0.862701313374);
    msg.setSource(43781U);
    msg.setSourceEntity(241U);
    msg.setDestination(56847U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("EAOFBKVCNJVVBRCULKWDGXSEUMQFGQTCEEROPKVZLRNQDMVFRIOHKIXYKMEAOPNTDMPWJFQWDYBRLAYDXKJFOAOHHYUUWZGSDZTVBRVFUUMGBHXASDBZLCKMQGYCHGXVNBCFR");
    msg.text.assign("AGJIQXFUHKTWBMTPWNWIFFIWNDEYRNMQRVYPXQLFYLEAILWXAGTHIFDPTUTHCWLMSAYTONVJDBVGSLBQSJYSYTSILCGZHZSJQUBOJZTJMBSHWACUNQQCEMKRVYCEHNKBEPZXVLOHXDDMLPHGSZDMROAOFXAESGVQSPCEJLNMMUFRDZTNVRVPUKIFJRPXXG");

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
    msg.setTimeStamp(0.588525437842);
    msg.setSource(58306U);
    msg.setSourceEntity(117U);
    msg.setDestination(62247U);
    msg.setDestinationEntity(165U);
    msg.origin.assign("ZKTFIHVMVWGMSJNOTEKEZSYJJMHOEEPLHERYBRSIPLHWBNSDSQWYOFYFMNOLKXUCAVQWGOXDGIEAAJVLZJRMVCTGNTXKZPPBUGNKDIVYGDLRKHHBDAA");
    msg.htime = 0.767983736617;
    msg.lat = 0.332478032837;
    msg.lon = 0.201797679676;
    const char tmp_msg_0[] = {-39, 55, 4, 120, -22, 75, 40, -30, 89, -39, -45, 44, -27, -107, 18, -128, -19, 67, 1, 104, -48, -27, 45, 118, -107, -44, 32, 29, -29, 39, 87, -99, -25, 126, 113, -94, -98, 117, 109, -39, -128, 68, -36, 62, -15, 77, 7, -31, 29, 125, -27, -81, 50, 31, 22, -49, 38, 80, -61, -16, -36, -119, -126, -119, -29, 28, -12, 22, -4, 25, 61, -76, 109, -69, -4, 65, -111, 80, -36, -100, -40, 25, -80, -7, -68, -32, -23, 62, -83, -64, -13, 123, -123, -84, -99, 10, -77, -24, -35, -34, 21, 106, -17, -70, 29, -128, 62, -65, 1, -52, 59, -96, 43, 17, -83, 13, -25, 38, 2, 65, -5, 57, 30, -76, 52, -91, -40, -17, -116, -17, 109, -124, -33, -10, -21, 115};
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
    msg.setTimeStamp(0.400033390168);
    msg.setSource(61066U);
    msg.setSourceEntity(61U);
    msg.setDestination(7212U);
    msg.setDestinationEntity(120U);
    msg.origin.assign("SOJKVPPYDLOKFEAJCNJPPXGUTWWUFYKVGRRIQVJQRUIJYOQWRULSXDMACZHMKZGFZENOBSKGIKJTYMDIMCEKA");
    msg.htime = 0.0643584488529;
    msg.lat = 0.349651468683;
    msg.lon = 0.755033986513;
    const char tmp_msg_0[] = {7, -119, 15, 5, -93, -98, 14, -32, -26, 52, -3, 71, 118, 4, 13, -109, 94, -53, 103, 102, 102, -90, 76, 53, 32, 58, -42, 58, 101, -94, -37, 42, 57, 116, 63, -76, 100, 111, 49, -67, 79, -34, 70, -95, 95, 41, 35, -89, 27, 12, 104, 100, -17, -23, -119, 104, 35, -88, -78, 105, -31, 17, 60, -60, -68, -26, 60, 82, 70, -24, 23, 26, 25, 101, -96, -90, -49, -72, -127, 90, 65, 68, 85, -1, 5, -107, -15, -63, -75, 15, 15, 50, -99, 41, 83, 25, -72, 85, -61, -116, -50, 72, 122, 28, 38, -66, -100, 117, 105, -42, -90, -13, 106, 61, -79, -84, -29, -113, -109, -32, 106, -87, 78, 40, 121, 83, 122, 94, 8, 106, -101, -111, 0, -37, -85, 21, -80, -38, -113, 83, 69, -25, -101, -55, 96, -80, 113, 68, 126, 41, 14, -47, 70, 121, -27, -72, -105, -107, -41, -108, 84, 74, -14, 107, -108, 55, 91, -13, -102, 64, -48, 28, -40, -51, -38, 53, -97, 104, 71, 115, -17, 93, 71, -81, -30, -115, 41, -44, -98, 29, 20, 59, -72, 115, -16, 94, 53, -12, 73, -50, -15, -101, 21, -92, 70, 40, -64, 88, -3, 117, 69, 15, 73, -69, -30, -94, -42, 48, 125, 118, 89, 29, -24, 116, -26, 124, 30, 13, -119, 37, -74, -28, -11, -124, 99, 91, 39, 56, -1, 98, -57, 1, -41, -30, -5, 64, -28, 44, -47, -25, -8, -91, 33};
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
    msg.setTimeStamp(0.0264236703563);
    msg.setSource(23735U);
    msg.setSourceEntity(131U);
    msg.setDestination(21908U);
    msg.setDestinationEntity(242U);
    msg.origin.assign("JRPIVLFWSOATVVUUVLKQYMUILXJTSOEIBVGDOGSTBGAHEDHWNZLNRAQKCCRJYSBXEORDAYLXESFMTSAQFGLLFEWOSLIMTZTJPUOGNOPQAPPHADB");
    msg.htime = 0.894966276537;
    msg.lat = 0.349213864737;
    msg.lon = 0.788292518058;
    const char tmp_msg_0[] = {51, -78, 82, -122, 2, 44, -41, 25, 23, -37, 5, 92, -17, 99, 98, -56, -9, -14, 75, 119, 31, 10, -95, -58, -8, 111, 68, -47, 25, -52, -50, 15, -33, 91, -26, -17, -57, -122, 121, -75, -54, -103, 11, -29, -33, -49, 38, 70, -10, 21, 29, -62, -89, 73, 25, 32, 75, -25, -1, -10, -116, -128, 121, -49, -50, -60, -20, 120, 11, 51, 26, -41, -26, -4, -52, -72, -107, -102, -42, 8, 5, -13, 77, -93, -56, -66, -73, -63, -71, 114, -15, -100, 61, -69, -95, 23, 67, -90, -62, 0, -29, 27, -6, -118, -28, -90, 102, -41, -64, 39, 46, 105, -45, 40, 110, 78, -112, 6, -119, -98, -35, 107, 86, -12, -42, -39, -84, -22, -3, -15, 98, 1, 104, 16, 126, -25, -111, -109, -56, 104, 60, 98, 6, 98, -118, 55, 66, -111, 33, 17, -46, 117, -109, 11, -53, 17, 73, -17, -18, 92, 50, -58, 83, 88, -13, -117, -99, -88, -77, -11, -22, 103, 13, -104, 86, -63, 125, 64, 125, 17, 64, -73, 68, 75, 110, -92, -86, 115, -77, -52, 120, 31, -4, 21, -118, 68, 14, -63, -17};
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
    msg.setTimeStamp(0.789629546633);
    msg.setSource(46363U);
    msg.setSourceEntity(97U);
    msg.setDestination(49811U);
    msg.setDestinationEntity(11U);
    msg.req_id = 3520U;
    msg.ttl = 36458U;
    msg.destination.assign("JTIIOSTTLESGGLYAWXCPRNDSBEIZQXCSGGUYEEVSYFANKDRXPPNIVKXIJNCFBNGELPFTCKIVCCYTNMAIQDMVP");
    const char tmp_msg_0[] = {-19, -23, -87, 7, -92, 48, 83, -107, 45, -15, 100, 117, 60, 126, 72, 13, -39, -107, -120, 41, 43, -114, 82, -118, 0, 73, -55, -111, -127, -25, 68, -10, 15, -38, -105, 119, -94, -71, 23, 44, -108, -9, 120, -117, 103, -18, 22, 99, 92, 77, -119, -77, -36, -109, 109, -10, 95, -73};
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
    msg.setTimeStamp(0.605358763772);
    msg.setSource(5330U);
    msg.setSourceEntity(72U);
    msg.setDestination(1460U);
    msg.setDestinationEntity(251U);
    msg.req_id = 23136U;
    msg.ttl = 44000U;
    msg.destination.assign("GARTXDFEJDAYWQFRYWGGKYTBXAICDWTVSXHECUHNKCMGNIEQHNDJZPQVUEDIGNHCOZSFQNLZHVRTQMRRZJOYIQPAHSCEHKQWKZAHOBSOYVRLJXBSWVLCFTOOKTNNBUMPEJPAHKZUBTKYYPUEDUCOXSYJULZAZXTIILXWKJSQPVWHBSZFMLBMPVFTDJVWBRSTGJVRFVNORYMBGCFXPXQMURAYWJCGCAKALFKMUDINLFBEDI");
    const char tmp_msg_0[] = {-126, 45, 57, 32, 17, -80, 45, -48, -11, -107, -77, 90, -2, 13, 120, -99, 39, -61, 8, 78, -54, -65, 20, 37, -14, -80, -107, 23, -4, -105, 104, 115, -90, -2, 106, 85, 104, 42, -27, -2, 65, 116, 23, -58, 124, 41, 42, -118, -30, -86, -108, -28, -8};
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
    msg.setTimeStamp(0.280376685612);
    msg.setSource(28886U);
    msg.setSourceEntity(42U);
    msg.setDestination(11779U);
    msg.setDestinationEntity(192U);
    msg.req_id = 53214U;
    msg.ttl = 34385U;
    msg.destination.assign("DEWFPDIXZEPBJDJSTCEIWPGXKHWNNBCIGDQWYWMAUKYWLMKOXUVJJX");
    const char tmp_msg_0[] = {77, -47, 85, -12, 47, 33, 30, 75, -93, 85, 53, 78, -124, 37, 125, 45, -43, -20, -76, 41, -3, -95, 38, 99, 37, 108, -11, 64, 6, -20, -22, -106, -55, 41, 79, 77, 58, 52, -94, -37, 75, 86, 25, 89, 95, -15, -86, -60, 93, 92, -23, 111, -86, 67, 10, -116, 123, 90, -75, -26, 11, -22, -104, 94, 27, 69, 3, -79, 59, -84, -30, -74, 12, -48, -83, 60, 24, -24, 23, -10, -65, 88, -47, -99, -97, -96, 84, -60, 79, -38, 125, 2, 83, -75, 7, -30, -53, 114, -52, -59, -120, 19, -8, -49, -77, -6, -36, -3, -96, 46, -73, -127, 100, 30, 4, 100, 9, -108, -67, 103, 96, -9, -111, 103, 98, -96, -69, -80, -5, -8, -1, 6, -68, -23, 87, -39, 5, -114, -119, 95, 52, 64, 52, -40, -96, 43, -64, 68, -42, 122, -35, 5, -64, -29, 64, -99, -117, 120, -67, -7, 17, -87, 28, -71, 59};
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
    msg.setTimeStamp(0.56534537655);
    msg.setSource(41635U);
    msg.setSourceEntity(16U);
    msg.setDestination(34122U);
    msg.setDestinationEntity(38U);
    msg.req_id = 1732U;
    msg.status = 221U;
    msg.text.assign("BIKJRPQQAAPCOTSYDJDGTTPOWXFIQZDJYKVLGLGERGRIDEVUSKSVZNVMQDJURNNAYAADMBMSCNEMMGJEXNCYPNTEUOVCZDUSQFHXFXIZPHUHUARSTYHMRL");

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
    msg.setTimeStamp(0.552411906127);
    msg.setSource(49356U);
    msg.setSourceEntity(69U);
    msg.setDestination(32103U);
    msg.setDestinationEntity(241U);
    msg.req_id = 45742U;
    msg.status = 107U;
    msg.text.assign("ODRVEUDMIPNTMJJVYFYZEPDQLINQXAAKVUFHYOSZKXWJLPNRFFEGRWMOCHIVPNDKLUWARZHQWBDQHJGFCXDYKONPJUSLCVWTPBSVOAZBKTPMMJQWKCJZJCLSTIFUUKIHOHBGMGPDBJYCOHEFEZYYZBLCGLWKTFBMBTL");

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
    msg.setTimeStamp(0.215700200797);
    msg.setSource(63697U);
    msg.setSourceEntity(55U);
    msg.setDestination(10345U);
    msg.setDestinationEntity(64U);
    msg.req_id = 17721U;
    msg.status = 35U;
    msg.text.assign("VYEDPGBLGBDLFJPYJTNSXHKTFAZKLAHBDDBCOJHQRBWUEDCNIJNRFTTMYYEFVKPMBTCORHHSFSWXJGIYXVYUGKPMOKJEJUXOSNQABDBGCWRWATUGNAZDQQZXOKZJKVWBSLRUMPIEEAWJVIKVQOUNZIOQVNQCELHURVSYQTCRYKCNIPGVHPUWEMZYSYAFMMARHMCLGDLSTLMVZQUZABLIXGKR");

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
    msg.setTimeStamp(0.272145298369);
    msg.setSource(18513U);
    msg.setSourceEntity(207U);
    msg.setDestination(40988U);
    msg.setDestinationEntity(235U);
    msg.group_name.assign("HVIPZIYFMWBPBNYRMWHXXVYMDYQSEVGRNKENNKXHESMMBWBWICASRULPSZNGV");
    msg.links = 1467503478U;

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
    msg.setTimeStamp(0.842360883336);
    msg.setSource(46781U);
    msg.setSourceEntity(53U);
    msg.setDestination(26214U);
    msg.setDestinationEntity(200U);
    msg.group_name.assign("OELYXUFBJSBJIXUHHSVWAFGQYNNQUTGBAM");
    msg.links = 1111468947U;

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
    msg.setTimeStamp(0.0858346122305);
    msg.setSource(6136U);
    msg.setSourceEntity(102U);
    msg.setDestination(26704U);
    msg.setDestinationEntity(58U);
    msg.group_name.assign("KPDIIDFRVRZCXAAEMYQRNXSMNBPTFGKLJTXECMLPQPOATCNSXDGZBZKNDRKFGWVXDQUDMQEUHZFJUPAWWHYCSOHSTPVIBHGGDKJERNSMGRVHSBHEK");
    msg.links = 2063038019U;

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
    msg.setTimeStamp(0.13798687766);
    msg.setSource(25119U);
    msg.setSourceEntity(166U);
    msg.setDestination(13207U);
    msg.setDestinationEntity(117U);
    msg.groupname.assign("CTSVMFINKWLGEBZITMVTLIQAPAWLXHKKFLDHLBJRLDBQICGUYZVNUGPUXQULGBEGWNPRGATNOVFGZZMZJEZXBIIVECPWPWD");
    msg.action = 40U;
    msg.grouplist.assign("SJXMATWHZOECKXVIYFCNDFHHPOSQPQDPMXIZLQRYCSBFWKJNGBKRKUAZRLVHKYMREQSAJIGDYDSFNODUVGXIDYUPVFQZZGPDXZSTWC");

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
    msg.setTimeStamp(0.47863739176);
    msg.setSource(30714U);
    msg.setSourceEntity(234U);
    msg.setDestination(26999U);
    msg.setDestinationEntity(12U);
    msg.groupname.assign("YMFUGGIEKRYPMSGIUMKQSGZLVKVRVWVVBTOQBRLPTWZTDNORBOBTTCEVCUECMNLGDIPXIWAHUKLFJHPDXCODEHJLXHPIEUUSJKYAMQQJZFTQM");
    msg.action = 0U;
    msg.grouplist.assign("VSZNCUJLZPMUJJJXUMRHDTIFJNAMLXTQQBWOGNSQSETKGOHVBFNXXVAGPGMSKEVYSVHOD");

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
    msg.setTimeStamp(0.606396722194);
    msg.setSource(26585U);
    msg.setSourceEntity(205U);
    msg.setDestination(63976U);
    msg.setDestinationEntity(131U);
    msg.groupname.assign("RDAMDYHZDQWKPULGEYLTEXEQWLHHRZNYUGMICIXDCJRCSLKTFJYHPUJEMOZXBKSAXIZWNBJRZPZFFVWULKJMHYRIFWEQRIIZQRSRPXXMJQVAHQYUBKBWUGVTLWQCGTFBYCBXAADQFXNOSPUCOKFKZQGWMHCTQMEJWIPZWKFGEEVDNGMLJONSTEKPLOVVNOCNZSVIAKVSSLVHCB");
    msg.action = 32U;
    msg.grouplist.assign("DUKDQBVSLGPEMMQCOXBMMIOQZRCAPJFJOBIJNHLSLVWXHOIVSGIVVNUWCTKFHRKBAQHWHRUNFDDTPENQEGWXEOQPMUZTXGBNWIMLZGCALMTLGTFUXIUSWELDNADBGYVYYTOBAWYZQXNPSEFUYQSHLHKYZASXLDZRUVTBPTKDKPDYIGEPGZSEUOAMJTTCVORSNMWOZPKQYYQJPWZVFORMXBACJXNIHRFKG");

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
    msg.setTimeStamp(0.891704027619);
    msg.setSource(16416U);
    msg.setSourceEntity(203U);
    msg.setDestination(10567U);
    msg.setDestinationEntity(167U);
    msg.value = 0.388085278122;
    msg.sys_src = 56082U;

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
    msg.setTimeStamp(0.937020341733);
    msg.setSource(43048U);
    msg.setSourceEntity(145U);
    msg.setDestination(41182U);
    msg.setDestinationEntity(73U);
    msg.value = 0.887161552495;
    msg.sys_src = 28485U;

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
    msg.setTimeStamp(0.841927858266);
    msg.setSource(54510U);
    msg.setSourceEntity(193U);
    msg.setDestination(10545U);
    msg.setDestinationEntity(90U);
    msg.value = 0.888436301726;
    msg.sys_src = 2701U;

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
    msg.setTimeStamp(0.722136996071);
    msg.setSource(52243U);
    msg.setSourceEntity(40U);
    msg.setDestination(4990U);
    msg.setDestinationEntity(61U);
    msg.value = 0.922970822391;
    msg.units = 124U;

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
    msg.setTimeStamp(0.264128119681);
    msg.setSource(38137U);
    msg.setSourceEntity(20U);
    msg.setDestination(14025U);
    msg.setDestinationEntity(38U);
    msg.value = 0.780516643172;
    msg.units = 234U;

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
    msg.setTimeStamp(0.99931302646);
    msg.setSource(49584U);
    msg.setSourceEntity(8U);
    msg.setDestination(57413U);
    msg.setDestinationEntity(247U);
    msg.value = 0.435667321752;
    msg.units = 254U;

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
    msg.setTimeStamp(0.7354039537);
    msg.setSource(65232U);
    msg.setSourceEntity(196U);
    msg.setDestination(48529U);
    msg.setDestinationEntity(188U);
    msg.base_lat = 0.615948564384;
    msg.base_lon = 0.000957644998484;
    msg.base_time = 0.397053367387;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 29803U;
    tmp_msg_0.priority = 56;
    tmp_msg_0.x = -12653;
    tmp_msg_0.y = 31081;
    tmp_msg_0.z = -30063;
    tmp_msg_0.t = 26103;
    IMC::Magnetometer tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 1913U;
    tmp_tmp_msg_0_0.lat = 0.36819745873;
    tmp_tmp_msg_0_0.lon = 0.832030205599;
    tmp_tmp_msg_0_0.z = 0.0940958914522;
    tmp_tmp_msg_0_0.z_units = 103U;
    tmp_tmp_msg_0_0.speed = 0.672791553847;
    tmp_tmp_msg_0_0.speed_units = 150U;
    tmp_tmp_msg_0_0.bearing = 0.168986029429;
    tmp_tmp_msg_0_0.width = 0.726758098087;
    tmp_tmp_msg_0_0.direction = 172U;
    tmp_tmp_msg_0_0.custom.assign("DUYACTESDIWURPFNHBDAZYOTOYBHUSCTDHXPJMBRVQXMQTMLHNNTHSAWOXDNKRATYZIEALROQLSXKYSNBZPIIFZDCMBFCVDLPZOKNIRWYJFCZGTDRVXGJAKGKHDZPQANEWEUYWLNLJFFURCCMWMLOJKNQKFIPLEKIPEMWGGME");
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
    msg.setTimeStamp(0.81706515325);
    msg.setSource(65468U);
    msg.setSourceEntity(159U);
    msg.setDestination(44917U);
    msg.setDestinationEntity(100U);
    msg.base_lat = 0.903878205089;
    msg.base_lon = 0.656211797563;
    msg.base_time = 0.132426494566;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 18610U;
    tmp_msg_0.priority = 114;
    tmp_msg_0.x = 19821;
    tmp_msg_0.y = -18480;
    tmp_msg_0.z = 13770;
    tmp_msg_0.t = -17401;
    IMC::MessagePart tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.uid = 183U;
    tmp_tmp_msg_0_0.frag_number = 30U;
    tmp_tmp_msg_0_0.num_frags = 95U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {95, -42, 121, 1, 78, -3, -9, -90, 25, -106, 101, -66, 79, 103, 17, 7, 2, -102, -85, -87, 19, 100, -45, 7, 48, 53, -79, -108, 96, -8, -71, 4, -41, 95, -23, -80, 22, -78, -11, 66, -115, 24, -34, 56, -51, -127, 96, -20, 87, -55, -3, 118, 60, -94, 48, -67, -60, -52, 50, -20, 116, 51, -55, -52, -99, 33, -48, 89, -58, 25, -127, -47, -1, -18, 15, -28, -32, 32, 107, -100, 120, 44, -10, -67, -97, -28, 26};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
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
    msg.setTimeStamp(0.814947541118);
    msg.setSource(2891U);
    msg.setSourceEntity(141U);
    msg.setDestination(55101U);
    msg.setDestinationEntity(243U);
    msg.base_lat = 0.395793758413;
    msg.base_lon = 0.667014441292;
    msg.base_time = 0.356942044936;

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
    msg.setTimeStamp(0.714442464364);
    msg.setSource(37528U);
    msg.setSourceEntity(7U);
    msg.setDestination(50816U);
    msg.setDestinationEntity(234U);
    msg.base_lat = 0.614445691131;
    msg.base_lon = 0.730334848876;
    msg.base_time = 0.933456080883;
    const char tmp_msg_0[] = {-38, -2, -55, 115, -77, 81, 7, 51, 113, -117, 110, -86, -46, 99, 62, -60, 111, 39, 122, 54, -16, -47, -80, -119, -123, 60, 26, -124, -30, 90, -26, 111, 124, -113, -69, -71, 11, 113, 14, -67, 28, -93, 26, 9, 65, 37, -87, -42, -108, -19, -104, 95, 95, -110, 95, 2, 21, 114, -63, -116, -9, -21, 6, -67, 35, 109, 28, 126, -79, -105, -100, 16, 29, 120, 78, -98, -117, 66, 75, -37, 99, -31, 52, -123, 71, 46, 60, -118, 108, -11, -5, -21, -54, -17, 24};
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
    msg.setTimeStamp(0.46880061126);
    msg.setSource(3421U);
    msg.setSourceEntity(236U);
    msg.setDestination(7825U);
    msg.setDestinationEntity(94U);
    msg.base_lat = 0.714667769334;
    msg.base_lon = 0.0697040843165;
    msg.base_time = 0.786112169848;
    const char tmp_msg_0[] = {-12, -65, 114, 0, -72, -125, -103, -83, 68, 39, 31, 50, -63, 2, -24, -27, 84, 24, 17, 27, -59, -95, 105, -34, 38, 37, 21, -74, -20, -32, -79, -122, 109, 26, -1, 10, 111, -91, 14, -6, -48, -13, 26, -19, 80, -51, 120, -38, -51, -93, -99, 8, -42, 110, 28, 46, -14, 97, 49, 99, -51, 124, -39, -14, 106, 23, -98, -16, -74, 6, 2, 27, 124, -106, 83, -102, 81, 72, 20, 116, -42, 69, -119, 114, -25, 94, 85, 58, -75, -79, -57, -4, -61, -110, -19, 103, -93, 32, 37};
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
    msg.setTimeStamp(0.976012169413);
    msg.setSource(49390U);
    msg.setSourceEntity(179U);
    msg.setDestination(1485U);
    msg.setDestinationEntity(70U);
    msg.base_lat = 0.46207137994;
    msg.base_lon = 0.422631634163;
    msg.base_time = 0.570695874381;
    const char tmp_msg_0[] = {104, 30, -87, 93, -69, -11, 8, 65, -5, -122, -96, 40, -92, -90, -98, -89, -68, -35, -95, 25, -30, -20, 57, 10, -35, -52, -52, 9, 20, -1};
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
    msg.setTimeStamp(0.301859635553);
    msg.setSource(27288U);
    msg.setSourceEntity(13U);
    msg.setDestination(17190U);
    msg.setDestinationEntity(66U);
    msg.sys_id = 62141U;
    msg.priority = -78;
    msg.x = 27174;
    msg.y = -20820;
    msg.z = -26315;
    msg.t = -15988;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 25493U;
    tmp_msg_0.duration = 21215U;
    tmp_msg_0.speed = 0.159378137413;
    tmp_msg_0.speed_units = 8U;
    tmp_msg_0.x = 0.044078210994;
    tmp_msg_0.y = 0.436663169184;
    tmp_msg_0.z = 0.370954059372;
    tmp_msg_0.z_units = 133U;
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
    msg.setTimeStamp(0.927769736828);
    msg.setSource(51284U);
    msg.setSourceEntity(51U);
    msg.setDestination(30379U);
    msg.setDestinationEntity(161U);
    msg.sys_id = 20728U;
    msg.priority = -24;
    msg.x = -21583;
    msg.y = 2764;
    msg.z = 13648;
    msg.t = -12718;
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.871256372548;
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
    msg.setTimeStamp(0.727977372755);
    msg.setSource(24435U);
    msg.setSourceEntity(11U);
    msg.setDestination(23405U);
    msg.setDestinationEntity(185U);
    msg.sys_id = 17436U;
    msg.priority = 35;
    msg.x = -25953;
    msg.y = 8784;
    msg.z = 10476;
    msg.t = -13697;
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("KSKHDCFPBOOSKNINDEHVJNWZTQ");
    tmp_msg_0.links = 620365437U;
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
    msg.setTimeStamp(0.22785746469);
    msg.setSource(5719U);
    msg.setSourceEntity(54U);
    msg.setDestination(38502U);
    msg.setDestinationEntity(64U);
    msg.req_id = 28447U;
    msg.type = 46U;
    msg.max_size = 36870U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.382974991523;
    tmp_msg_0.base_lon = 0.679930629448;
    tmp_msg_0.base_time = 0.0666480483501;
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
    msg.setTimeStamp(0.0629790530967);
    msg.setSource(21655U);
    msg.setSourceEntity(110U);
    msg.setDestination(43315U);
    msg.setDestinationEntity(250U);
    msg.req_id = 26211U;
    msg.type = 30U;
    msg.max_size = 4867U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0259088500034;
    tmp_msg_0.base_lon = 0.612903038935;
    tmp_msg_0.base_time = 0.182043777567;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 36548U;
    tmp_tmp_msg_0_0.priority = -87;
    tmp_tmp_msg_0_0.x = 13679;
    tmp_tmp_msg_0_0.y = -22106;
    tmp_tmp_msg_0_0.z = -4036;
    tmp_tmp_msg_0_0.t = 4718;
    IMC::GpsNavData tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.itow = 284328105U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.137387184081;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.281531973251;
    tmp_tmp_tmp_msg_0_0_0.height_ell = 0.323918633692;
    tmp_tmp_tmp_msg_0_0_0.height_sea = 0.901454433882;
    tmp_tmp_tmp_msg_0_0_0.hacc = 0.0198770897736;
    tmp_tmp_tmp_msg_0_0_0.vacc = 0.574419502465;
    tmp_tmp_tmp_msg_0_0_0.vel_n = 0.494018178709;
    tmp_tmp_tmp_msg_0_0_0.vel_e = 0.67306026496;
    tmp_tmp_tmp_msg_0_0_0.vel_d = 0.0862863309198;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.764332005872;
    tmp_tmp_tmp_msg_0_0_0.gspeed = 0.0545177686684;
    tmp_tmp_tmp_msg_0_0_0.heading = 0.973608182822;
    tmp_tmp_tmp_msg_0_0_0.sacc = 0.0218067614575;
    tmp_tmp_tmp_msg_0_0_0.cacc = 0.0117065453664;
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
    msg.setTimeStamp(0.710049533752);
    msg.setSource(55542U);
    msg.setSourceEntity(210U);
    msg.setDestination(18389U);
    msg.setDestinationEntity(5U);
    msg.req_id = 1751U;
    msg.type = 159U;
    msg.max_size = 2760U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.127879386142;
    tmp_msg_0.base_lon = 0.238231182035;
    tmp_msg_0.base_time = 0.633170527119;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 14338U;
    tmp_tmp_msg_0_0.priority = 36;
    tmp_tmp_msg_0_0.x = 18144;
    tmp_tmp_msg_0_0.y = 25176;
    tmp_tmp_msg_0_0.z = -11235;
    tmp_tmp_msg_0_0.t = 22169;
    IMC::SmsState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.seq = 2200580127U;
    tmp_tmp_tmp_msg_0_0_0.state = 171U;
    tmp_tmp_tmp_msg_0_0_0.error.assign("QDRBKZKFACGXPQIBCPMUEENJPYVCSCGHKYIRJHVNYWDNWMZWUIXYAXUAFPWVEOCXSWTXXHKCQQLMVMPQRWMZZRMSPAKERNDDQBRZVKUUGEFSSNDHFHYSOVXPIOHFFMTBCIDVWSLIJGHTB");
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
    msg.setTimeStamp(0.0151143865618);
    msg.setSource(63311U);
    msg.setSourceEntity(18U);
    msg.setDestination(9342U);
    msg.setDestinationEntity(109U);
    msg.original_source = 15007U;
    msg.destination = 19293U;
    msg.timeout = 0.244954256393;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 158U;
    tmp_msg_0.speed_min = 0.769951962728;
    tmp_msg_0.speed_max = 0.975408253424;
    tmp_msg_0.long_accel = 0.644036387099;
    tmp_msg_0.alt_max_msl = 0.0411631675211;
    tmp_msg_0.dive_fraction_max = 0.426116386435;
    tmp_msg_0.climb_fraction_max = 0.597898780476;
    tmp_msg_0.bank_max = 0.961998118111;
    tmp_msg_0.p_max = 0.280640489362;
    tmp_msg_0.pitch_min = 0.388828907749;
    tmp_msg_0.pitch_max = 0.268793085152;
    tmp_msg_0.q_max = 0.798240171891;
    tmp_msg_0.g_min = 0.411390441079;
    tmp_msg_0.g_max = 0.358614012054;
    tmp_msg_0.g_lat_max = 0.197945352171;
    tmp_msg_0.rpm_min = 0.402596361835;
    tmp_msg_0.rpm_max = 0.220026447411;
    tmp_msg_0.rpm_rate_max = 0.506523145019;
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
    msg.setTimeStamp(0.916798564029);
    msg.setSource(991U);
    msg.setSourceEntity(93U);
    msg.setDestination(8054U);
    msg.setDestinationEntity(139U);
    msg.original_source = 42041U;
    msg.destination = 16651U;
    msg.timeout = 0.564614826044;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("XVUTLYDQRBPBCNFMDTFWGMWEAFBKGYNAGPMOFJ");
    tmp_msg_0.op = 235U;
    tmp_msg_0.lat = 0.805701199325;
    tmp_msg_0.lon = 0.714003835177;
    tmp_msg_0.height = 0.335586626114;
    tmp_msg_0.x = 0.873775107533;
    tmp_msg_0.y = 0.287075416294;
    tmp_msg_0.z = 0.693496614938;
    tmp_msg_0.phi = 0.584043763958;
    tmp_msg_0.theta = 0.113146476955;
    tmp_msg_0.psi = 0.978848583474;
    tmp_msg_0.vx = 0.839142548581;
    tmp_msg_0.vy = 0.619616347152;
    tmp_msg_0.vz = 0.216390439176;
    tmp_msg_0.p = 0.477657888882;
    tmp_msg_0.q = 0.00704181281721;
    tmp_msg_0.r = 0.717183215701;
    tmp_msg_0.svx = 0.318069795797;
    tmp_msg_0.svy = 0.468747258272;
    tmp_msg_0.svz = 0.706715633231;
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
    msg.setTimeStamp(0.0252154334342);
    msg.setSource(44965U);
    msg.setSourceEntity(65U);
    msg.setDestination(64307U);
    msg.setDestinationEntity(15U);
    msg.original_source = 61954U;
    msg.destination = 32253U;
    msg.timeout = 0.507904688247;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.260463370235;
    tmp_msg_0.lon = 0.170380995181;
    tmp_msg_0.z = 0.103366927893;
    tmp_msg_0.z_units = 6U;
    tmp_msg_0.speed = 0.843611311785;
    tmp_msg_0.speed_units = 143U;
    tmp_msg_0.custom.assign("BXWEVXKKVQBCNJQWSMXJXOAQWBYVDCQBRKPMLDEGAHFQCCIPRRUMFDQUZGJGGSYTWXBLLFODZPSYQNHMLOUJUXDTNZYIURXQYESHABHOALBITCPYIVLKEAEKNGTYKGNRVTNWLLRIZCZOLXCFMHMTVZFOSSOEWWGSUZCATJDVNRHMDOBMJNMGRIVYDUHQ");
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
    msg.setTimeStamp(0.242608743075);
    msg.setSource(39298U);
    msg.setSourceEntity(150U);
    msg.setDestination(45337U);
    msg.setDestinationEntity(115U);
    msg.type = 31U;
    msg.comm_interface = 60156U;
    msg.model = 25800U;
    msg.list.assign("IZQABCVURTAMNYLKRNUGWOZJZXLDIBFDOKCQUGGRTEZQYLADIWRXWUYMWKNKLEZSPBDNSMFTRSNJMQYYDPJEVJPVSKDKJTRWTFHZEBTHMBPZAAQRYYCISDESCXLEXJKGIODLVJPBSMPGCIOAILXQRFLJUOHJQTGJBSHWUECFANNCHKVHXIWMLXPPDTGAVHXQMAVBRCYVXFOVYDTPYFWHUOWHIEZRQZOLCUEMQWBVGSZTUPOHGIACNENGFMSFNB");

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
    msg.setTimeStamp(0.359996896214);
    msg.setSource(47497U);
    msg.setSourceEntity(145U);
    msg.setDestination(11543U);
    msg.setDestinationEntity(4U);
    msg.type = 2U;
    msg.comm_interface = 56431U;
    msg.model = 33801U;
    msg.list.assign("RRYFWAOBQCCQPASFDSPMILOVALSHKSQCGHQEFETDDXTKSKVCASVYRX");

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
    msg.setTimeStamp(0.482127875244);
    msg.setSource(44573U);
    msg.setSourceEntity(34U);
    msg.setDestination(20417U);
    msg.setDestinationEntity(251U);
    msg.type = 83U;
    msg.comm_interface = 10253U;
    msg.model = 49018U;
    msg.list.assign("LUVDHXXKQPXTZAIBNPHSANJAIWDCOQELIPLZBGDYUUWMAGURDYTLPWJBKXCZPRKJJZYVVMQMOTNBIUGXWSOWSKINIXWPBTENUMRVKRVSPGAAOBZVMTGOJQDWHIEJQZGTFFFNNZLFJLKCQIYBTNOMGCRKYC");

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
    msg.setTimeStamp(0.676835039336);
    msg.setSource(65224U);
    msg.setSourceEntity(244U);
    msg.setDestination(62741U);
    msg.setDestinationEntity(169U);
    msg.type = 20U;
    msg.req_id = 828277565U;
    msg.ttl = 4123U;
    msg.code = 111U;
    msg.destination.assign("PANEZPIJQMPZMKFKQTSGVTOVHBXATQPJEDWBBYHOPRXHSRDYOIBIYRDAVSIVWCUHAEETNCXTNNXCYTDXOAUEUJEBUCWTRTTLBXCQUEMAWYJJFRENOKFKCHUZCBGJCZKXEGNRGSSKGKVZPIELZPJUIKBPDLCBANPIAMDTWFWIMOHIJRVFMOLUMQIZGXNWDDUSWVXORQVSFZJCVLSWMOYWABSMNOKHHSRY");
    msg.source.assign("UWBMBMHVOREPQOJAZLKLQHIWAEKLATIAKKZYPPUJUSYJQHBXZVPYMTJHXGZZWWQFYIBJUNOTAFFTGZLKNIDFQCBB");
    msg.acknowledge = 84U;
    msg.status = 1U;
    const char tmp_msg_0[] = {107, 99, -114, -92, 37, -36, -80, -25, -64, -13, 25, 94, -104, -88, -118, 124, 42, -50, -63, 100, -26, 20, -125, -35, -10, -74, -63, -125, -30, 43, -122, 35, 13, -82, 42, 72, 1, 2, -28, 29, -10, 103, 88, 94, -124, -112, 32, 53, 94, 117, 115, 118, -104, -59, -11, -52, -116, -90, -62, 0, -98, -70, -98, 43, 82, 97, 49, 16, 92, 3, 119, -116, -60, 94, -69, -85, -110, -90, -4, -65, 63, 16, -105, 11, -4, 0, 88, -112, -29, 87, -1, 22, -87, 40, 124, 44, -85, -58, -7, -6, 105, 51, 92, -58, -11, -79, 7, -108, 15, 86, -36, 71, 75, 99, 107, 113, -15, -4, 110, -118, -39, 83, 79, -102, 8, -7, 59, -59, 104, 109, -81, 107, -60, -52, 78, -47, -81, 25, -111, -69, 118, -88, -22, 117, 9, -96, 15, -8, 74, -5, -6, 5, 74, -58, 56, -4, 72, -100, -29, 80, 48, 93, 10, 33, -115, -13, -126, -24, -48, 53, 71, -95, -66, 35, -36, -25, 122, -44, -62, 47, -67, 31, -40, 78, -105, -70, -32, 52, 105, -18, 24, 126, -59, -107, -123, -125, 97, -100, -50};
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
    msg.setTimeStamp(0.59046399971);
    msg.setSource(43178U);
    msg.setSourceEntity(215U);
    msg.setDestination(51994U);
    msg.setDestinationEntity(201U);
    msg.type = 104U;
    msg.req_id = 3077781578U;
    msg.ttl = 101U;
    msg.code = 159U;
    msg.destination.assign("EEVQIVHBRQHPSONYTUUC");
    msg.source.assign("ZVTCRHXPLRHNGWTLOUTWOQXWKXBLOZBGOEHOAMJLKARNYKPWFHTYGDXNHUCRAQHUDZAFSTQXPXBVWIGZCQFVMPYIOQCDASDQNYGEEMHIPZZGNWSLIRQVJXSHKGMKGLJPZKACXCVPEICKFRSLYWZIIYJKJOBAGLBRNNBMPYFXSVEOJFNBDUJAFKFOIAVYHYUJURDTPELZTVKTJZUE");
    msg.acknowledge = 45U;
    msg.status = 86U;
    const char tmp_msg_0[] = {64, -127, 16, 21, 102, 96, 101, 79, -2, -34, -106, 34, -78, 111, 10, 44, 82, -86, 29, -23, 36, -100, 43, 53, -63, 73, -32, 71, -50, -4, -102, 109, -124, 29, 48, 105, 111, 53, -113, 115, -24, 85, 40, 58, 77, 89, -91, 30, 28, 121, 22, -70, 57, -6, 112, -122, 80, -18, 14, 36, -8, 55, 91, -27, -128, 15, -17, 30, -83, 69, 30, 104, 73, -96, 26, -71, 12, 76, -119, 14, -81, -90, -98, -50, 106, 91, 10, -28, -74, -106, 8, 15, -39, 109, 125, -32, 5, 86, -40, 43, -109};
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
    msg.setTimeStamp(0.428460679484);
    msg.setSource(1525U);
    msg.setSourceEntity(63U);
    msg.setDestination(64902U);
    msg.setDestinationEntity(12U);
    msg.type = 200U;
    msg.req_id = 1253646448U;
    msg.ttl = 22843U;
    msg.code = 115U;
    msg.destination.assign("IAZBFUYKZMKMHAKRLVWWULOCIDYOTJAMMPWPLKBPQQMSRGUZWMCGHSIYFPBUSKPXZWBFCEIECVDNHQTCTGYXLTHKSVZHLDXAQNNKGCMJEWVVRSSLVXFFJGINJUOFIGAHIOJXYR");
    msg.source.assign("LBDYNTTUNQSVFM");
    msg.acknowledge = 174U;
    msg.status = 147U;
    const char tmp_msg_0[] = {110, 72, -98, -15, -29, -28, 67, 109, -82, -12, 75, -86, -52, -103, -19, 126, -59, 72, 3, 56, -66, 0, 28, 76, -23, -86, -49, 24, -22, -77, -79, -73, -113, 115, -65, 74, -16, 61, -26, -50, 9, 53, -88, -82, -31, -6, 62, -53, 123, -128, -43, 86, -115, 1, 84, -37, 31, -77, -117, 117, 106, 122, -45, -115, 72, -57, 113, 4, -6, 69, 80, -55, -14, 1, -114, -64, 63, 87, -50, -88};
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
    msg.setTimeStamp(0.771597427161);
    msg.setSource(43948U);
    msg.setSourceEntity(132U);
    msg.setDestination(57127U);
    msg.setDestinationEntity(53U);
    msg.id = 100U;
    msg.range = 0.304488024238;

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
    msg.setTimeStamp(0.165674745427);
    msg.setSource(18994U);
    msg.setSourceEntity(10U);
    msg.setDestination(46881U);
    msg.setDestinationEntity(129U);
    msg.id = 107U;
    msg.range = 0.322334979459;

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
    msg.setTimeStamp(0.991561540082);
    msg.setSource(18784U);
    msg.setSourceEntity(219U);
    msg.setDestination(45025U);
    msg.setDestinationEntity(171U);
    msg.id = 0U;
    msg.range = 0.124617112648;

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
    msg.setTimeStamp(0.592669038666);
    msg.setSource(60565U);
    msg.setSourceEntity(230U);
    msg.setDestination(43078U);
    msg.setDestinationEntity(93U);
    msg.beacon.assign("YEDQBCPDROSFWUYPKQPJGWFSKNEKHIDEPRASEUIHRIHPCBKQDVOBEFYARAODNAVIUELYYLCWYHDWWVOOWNJFAPMXIGJJYJHVGLFXFGNUZZUTBJ");
    msg.lat = 0.514093130462;
    msg.lon = 0.83305338014;
    msg.depth = 0.421988432333;
    msg.query_channel = 163U;
    msg.reply_channel = 57U;
    msg.transponder_delay = 143U;

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
    msg.setTimeStamp(0.362323861634);
    msg.setSource(40047U);
    msg.setSourceEntity(149U);
    msg.setDestination(51733U);
    msg.setDestinationEntity(153U);
    msg.beacon.assign("VMNPPYWNUDVWJZGCBZKVDMFB");
    msg.lat = 0.844973805942;
    msg.lon = 0.260624952541;
    msg.depth = 0.778963559216;
    msg.query_channel = 183U;
    msg.reply_channel = 114U;
    msg.transponder_delay = 223U;

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
    msg.setTimeStamp(0.376215328276);
    msg.setSource(29831U);
    msg.setSourceEntity(46U);
    msg.setDestination(62072U);
    msg.setDestinationEntity(49U);
    msg.beacon.assign("DKIHIKVOYEGYRVCEZIMAXDNGHEERUAJYSHCWFHDPYHWNBEGGQJMKESXTAXZAVDMHXFEJSOHQOWRMDZCIRJCBPNPSSIEPAWNDQTKZ");
    msg.lat = 0.716504214918;
    msg.lon = 0.879270648258;
    msg.depth = 0.953168896752;
    msg.query_channel = 253U;
    msg.reply_channel = 176U;
    msg.transponder_delay = 31U;

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
    msg.setTimeStamp(0.62985552488);
    msg.setSource(16512U);
    msg.setSourceEntity(21U);
    msg.setDestination(46316U);
    msg.setDestinationEntity(163U);
    msg.op = 43U;

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
    msg.setTimeStamp(0.949847402044);
    msg.setSource(26535U);
    msg.setSourceEntity(184U);
    msg.setDestination(42949U);
    msg.setDestinationEntity(149U);
    msg.op = 138U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WAKTHQPMUKLMJWNRXQGAEZUDCV");
    tmp_msg_0.lat = 0.979802818961;
    tmp_msg_0.lon = 0.93258920964;
    tmp_msg_0.depth = 0.419702644641;
    tmp_msg_0.query_channel = 203U;
    tmp_msg_0.reply_channel = 236U;
    tmp_msg_0.transponder_delay = 16U;
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
    msg.setTimeStamp(0.786162686947);
    msg.setSource(56595U);
    msg.setSourceEntity(146U);
    msg.setDestination(36441U);
    msg.setDestinationEntity(38U);
    msg.op = 3U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WRSMFGUMXMDNIRHPJORLXQYTEOVXZYWLEHWWYHDFTHVSDOREGRKGKOYMIBEXIKFZJXLCVLCHBPHOPWGGXZDDUMBWFJTSWQRAAUNMTPGEYIANHESQNNXAFKCXUOALVKBUPCRYCBNIVEPZK");
    tmp_msg_0.lat = 0.594762218248;
    tmp_msg_0.lon = 0.74685822768;
    tmp_msg_0.depth = 0.730967790667;
    tmp_msg_0.query_channel = 5U;
    tmp_msg_0.reply_channel = 174U;
    tmp_msg_0.transponder_delay = 58U;
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
    msg.setTimeStamp(0.801925858639);
    msg.setSource(62518U);
    msg.setSourceEntity(7U);
    msg.setDestination(40514U);
    msg.setDestinationEntity(196U);
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 232U;
    tmp_msg_0.op = 235U;
    tmp_msg_0.err_mean = 0.943675725565;
    tmp_msg_0.dist_min_abs = 0.195519075756;
    tmp_msg_0.dist_min_mean = 0.867504142888;
    tmp_msg_0.roll_rate_mean = 0.518983931688;
    tmp_msg_0.time = 0.130658568967;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 30U;
    tmp_tmp_msg_0_0.lon_gain = 0.691018068204;
    tmp_tmp_msg_0_0.lat_gain = 0.726840362251;
    tmp_tmp_msg_0_0.bond_thick = 0.372188555905;
    tmp_tmp_msg_0_0.lead_gain = 0.308615502258;
    tmp_tmp_msg_0_0.deconfl_gain = 0.25210052665;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.791895759839;
    tmp_tmp_msg_0_0.safe_dist = 0.272932963187;
    tmp_tmp_msg_0_0.deconflict_offset = 0.024469682429;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.784006815419;
    tmp_tmp_msg_0_0.accel_lim_x = 0.263901724282;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.760161976667);
    msg.setSource(7393U);
    msg.setSourceEntity(224U);
    msg.setDestination(1633U);
    msg.setDestinationEntity(55U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("USMTQNJXXTGBEOXFJVVDUHBACEEZHCYWWISYWBGILAJRLTKDYLGFTJGMVWMANTWRVIEQLHHFHPHOTCQGVAXCAOULIUHDQMASMUEQRFGNDXSKFJMOFRGDGCABIOEXKMRKOUWHZKUBTZMGIEFJPNFZX");
    tmp_msg_0.lat = 0.187238753025;
    tmp_msg_0.lon = 0.695940847711;
    tmp_msg_0.depth = 0.398059319065;
    tmp_msg_0.query_channel = 112U;
    tmp_msg_0.reply_channel = 238U;
    tmp_msg_0.transponder_delay = 49U;
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
    msg.setTimeStamp(0.214834512055);
    msg.setSource(40181U);
    msg.setSourceEntity(57U);
    msg.setDestination(31188U);
    msg.setDestinationEntity(207U);
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.408282129606;
    tmp_msg_0.y = 0.348322057211;
    tmp_msg_0.z = 0.998652708833;
    tmp_msg_0.vx = 0.322680868002;
    tmp_msg_0.vy = 0.523174055312;
    tmp_msg_0.vz = 0.282106008079;
    tmp_msg_0.ax = 0.604184766201;
    tmp_msg_0.ay = 0.26024198496;
    tmp_msg_0.az = 0.816825501616;
    tmp_msg_0.flags = 11471U;
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
    msg.setTimeStamp(0.0801968760572);
    msg.setSource(56330U);
    msg.setSourceEntity(126U);
    msg.setDestination(11266U);
    msg.setDestinationEntity(74U);
    msg.op = 54U;
    msg.system.assign("LWORFOUBTCJZJAOLTTPEGMRCDQNYTTQVQMKRCAUEDWABNPODCBLKVRKEUBBNKEZIDDEMHQVQGJMZAVARTWNSZRKKCUUNHCYTFSOTUIXIBHJHAZHRWPNQPJFQNHDEOZSHXWYXYGIXO");
    msg.range = 0.448610864977;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 1419731069U;
    tmp_msg_0.start_lat = 0.369920331916;
    tmp_msg_0.start_lon = 0.68273867795;
    tmp_msg_0.start_z = 0.531911144457;
    tmp_msg_0.start_z_units = 80U;
    tmp_msg_0.end_lat = 0.623836231505;
    tmp_msg_0.end_lon = 0.346242465285;
    tmp_msg_0.end_z = 0.423870275418;
    tmp_msg_0.end_z_units = 168U;
    tmp_msg_0.lradius = 0.533290607629;
    tmp_msg_0.flags = 44U;
    tmp_msg_0.x = 0.18233239776;
    tmp_msg_0.y = 0.278303397936;
    tmp_msg_0.z = 0.423652092331;
    tmp_msg_0.vx = 0.634597918318;
    tmp_msg_0.vy = 0.401038001786;
    tmp_msg_0.vz = 0.357458168083;
    tmp_msg_0.course_error = 0.404482236634;
    tmp_msg_0.eta = 58113U;
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
    msg.setTimeStamp(0.576058122366);
    msg.setSource(35226U);
    msg.setSourceEntity(189U);
    msg.setDestination(41943U);
    msg.setDestinationEntity(158U);
    msg.op = 24U;
    msg.system.assign("ZCFRQZETLJLQFSFUYPVGDTKRUIRBMMJUVGBWMOAJKQWOMBFEYOTWLHFOPDNRKHAGALXWWMMVXOSVVWBLHLSQCCPTCVUKNIHKXCRXHOGTJDZQFVFJUBLNEZQNLZFSAIQXDX");
    msg.range = 0.376166139239;
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("CQUOCNYCELHHKTKNVDDAWJJNEUAPTLEXTUWBSMMDLMCIYOIGZBWEGSNBFXXCCQQUIOZQRPGYPZFKMVSBMKLJDMPDEDYXKJ");
    tmp_msg_0.action = 241U;
    tmp_msg_0.grouplist.assign("EILYIKUKMPXTESLRNDVQVWNLAJDRLLAOTFIGRCPPQBANHRBBOGRGWSTDUSINHWSORLTRAYERPIPWKCBFJEDXGUAXTNEXEOVAMKJZKVGOZCHUMCU");
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
    msg.setTimeStamp(0.851401061785);
    msg.setSource(10102U);
    msg.setSourceEntity(87U);
    msg.setDestination(26644U);
    msg.setDestinationEntity(28U);
    msg.op = 95U;
    msg.system.assign("YXRRPGQRQJWYQBLBVMMAPCQXFEJVIAKTUGQILFDUCUEPGFEHBYPYTYDOYFPHSYDJTGMVSZCFOKMLSNIGHCLDRQUXLGJLAMESDIBOPFDRSHZAWOJHKPFVLOSYWJFGGZFJAXBDXKWQUSIHEHNKNWDCVRMSGOSBJNXIIZCUYMSOPTVIYWDRRVTHZKMIWATLNEXCVNNUAWZNXHWGJDTCKAKCEQ");
    msg.range = 0.290368229945;
    IMC::Redox tmp_msg_0;
    tmp_msg_0.value = 0.194398693498;
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
    msg.setTimeStamp(0.937112208457);
    msg.setSource(36143U);
    msg.setSourceEntity(199U);
    msg.setDestination(37435U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.608669406694);
    msg.setSource(64212U);
    msg.setSourceEntity(168U);
    msg.setDestination(47322U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.224202992157);
    msg.setSource(39665U);
    msg.setSourceEntity(85U);
    msg.setDestination(46841U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.995816568216);
    msg.setSource(3230U);
    msg.setSourceEntity(191U);
    msg.setDestination(42875U);
    msg.setDestinationEntity(219U);
    msg.list.assign("SNKBSJEWZVXCKVKAQYTMOPVJOZEZOFLPCISGFBRGIEDXPNFQEOWSFIRMJCGBEDETVWWDLATNMKCQABWVHRLGFSZXFSAAOXGZUCAMBAIRKXEICRWLLUNADOSCTJZPHLMTUXIITRTGKWXLQPBYXHBWHVYPQLQVKHMPZHFHUUZLINVGNQEJDDCOQSZVRIADNRBGYQTORTVHJMPJYFNJXWQKEUMYPYCKYGCOSJZYNBGMFHUF");

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
    msg.setTimeStamp(0.00740187534026);
    msg.setSource(52633U);
    msg.setSourceEntity(9U);
    msg.setDestination(11332U);
    msg.setDestinationEntity(125U);
    msg.list.assign("GGQKZDKBVKCELDKRUCRTFAIUN");

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
    msg.setTimeStamp(0.278736631486);
    msg.setSource(57706U);
    msg.setSourceEntity(90U);
    msg.setDestination(24244U);
    msg.setDestinationEntity(226U);
    msg.list.assign("CVQNWBKWKGNKFGRIUYPLRZGUYHXZRUAIYOBMIICIKPCFVQATIFVYSNDCLHKQJLQBYGKHPPDRFLGXILHSASSQXEIZJEOUCSCCEVMBVEWXFUQBAIJAXMJPJYDNLRVTDRPIRZDTASYFGGOLJWYHTFKXHBUTNOAB");

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
    msg.setTimeStamp(0.465894706948);
    msg.setSource(53531U);
    msg.setSourceEntity(231U);
    msg.setDestination(38593U);
    msg.setDestinationEntity(178U);
    msg.peer.assign("OIGZDJVGLIIFTUKEHWWUALNSATKNVORYQQCZUESNQNKAGSUAZVFTWHXXBIRBUFDVWNKIVXSFTDGTUMGZVABYNSBFPIBYLHOSDNWMHOSYVTPLXPXCCJXQYQWWNXCCRDGOAKJMJZKDGWOBQKUIKVNFPHDETEYBATHVOUDWLEMZRAEPLLIQHOULHMXRPCCWYTZAGNZBSLSQXFMJEPMF");
    msg.rssi = 0.581173955932;
    msg.integrity = 20707U;

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
    msg.setTimeStamp(0.120528703874);
    msg.setSource(46703U);
    msg.setSourceEntity(101U);
    msg.setDestination(53085U);
    msg.setDestinationEntity(166U);
    msg.peer.assign("KSWPRYHSVUCILNCQEKBFFGERWPISDGLUAGIMYEUZIXZBNLJGATLTKSTWIMRTQLDUDXNTSWAHRAONJVRMXQJEWNZRZYOZMQVOONZF");
    msg.rssi = 0.982235173226;
    msg.integrity = 9579U;

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
    msg.setTimeStamp(0.032395044248);
    msg.setSource(6007U);
    msg.setSourceEntity(29U);
    msg.setDestination(32261U);
    msg.setDestinationEntity(11U);
    msg.peer.assign("VITPESMQXCIJJPRTFFLIHGUUTAEZNLCMAQOGBMRJNIAUSYZHYPKRKCZNONLBQUQEFRGAIOTUVEIJFHDQPLIPJTNRXVDUWKGOZVYLWBQBDHCQZZOGVDXYGSDVOTDRYLFKYWGEHNTMPSWKSDBPRNKSWYSDTFKAHQHBIJCXYEPUMEOZBLXTMSOCWTGAOBFCBQLGZNUYKWIHUKVAWHJGMEWXXDXLYDNWHUCMMVSVQCXPZPCRRARIJNFMVEBAXEJZS");
    msg.rssi = 0.304783790303;
    msg.integrity = 22480U;

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
    msg.setTimeStamp(0.00823843650175);
    msg.setSource(33634U);
    msg.setSourceEntity(251U);
    msg.setDestination(49190U);
    msg.setDestinationEntity(162U);
    msg.req_id = 40192U;
    msg.destination.assign("FOWNYYEITDRIJFTIUQLDPOVLDMWSYQEALVDNLHRIEYXVDNMAIAMBAKRZZIVMZUFNYJPQOUDHEWAMCQJVKPSOVQCPSRZBMLSGKLTDMHTSKGXCOKXLMVESBRSCGWFCOSUXHR");
    msg.timeout = 0.523733246831;
    msg.range = 0.271782230555;
    msg.type = 104U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.766101658782;
    tmp_msg_0.lat = 0.621613609203;
    tmp_msg_0.lon = 0.845504702483;
    tmp_msg_0.z = 0.68683484408;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.travel_z = 0.620404465392;
    tmp_msg_0.travel_z_units = 242U;
    tmp_msg_0.delayed = 135U;
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
    msg.setTimeStamp(0.744502812481);
    msg.setSource(54084U);
    msg.setSourceEntity(81U);
    msg.setDestination(671U);
    msg.setDestinationEntity(121U);
    msg.req_id = 43024U;
    msg.destination.assign("UEBYYXYPDZSIWMXQCZGSMFUQHMPIWPUWMFWLAFHVCLPWKTOHHFJVZ");
    msg.timeout = 0.887450068555;
    msg.range = 0.534237083239;
    msg.type = 78U;
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("WKSVDPCZTHGRMNOTBPNVZIFACAQBEPHQQYUSAAOPVZKFSIVKQYCNUIUGOPONHWBBWNSODULSGZEILDKOUVQYLPNEMPUDTJAJGXWQHGDTBLMIJVHAGCT");
    tmp_msg_0.dest_man.assign("VLOSPIHBVEKTDPCXINZPQUPZGZIGZB");
    tmp_msg_0.conditions.assign("WOBGPESLRCXRAWFHKJOSMNIGPABCWIDHRPMPDCEHYHZXFSRQVUJLRNFPJHIQTZQYTNRPLYGXAZORSRDYBAJOGUMCKFAQVCEVQKFENTSMHWECYOXBANSKPJQ");
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
    msg.setTimeStamp(0.392698241549);
    msg.setSource(7971U);
    msg.setSourceEntity(118U);
    msg.setDestination(54132U);
    msg.setDestinationEntity(132U);
    msg.req_id = 21893U;
    msg.destination.assign("KOPJRMVOOXGSZYVUCELMXPHMHWDZQEKNFUTQPSQPDEJODBOPWZOYLIIVUELRZXXJGBYGGKQQAAFXGHZNADATSBNSBOJPOKDSKUFXAFXIXEWMCEFFQBJRVBSKLJHUAJEVAFUBIMYUIXRYQNGFZTYGRMIEGEDQDNTLQHTLSWUROXTLIPITABRATHNPLNLHCIWRWFSUHJ");
    msg.timeout = 0.501304938181;
    msg.range = 0.362178949174;
    msg.type = 175U;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 2566161764U;
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
    msg.setTimeStamp(0.499923717382);
    msg.setSource(5767U);
    msg.setSourceEntity(68U);
    msg.setDestination(31645U);
    msg.setDestinationEntity(125U);
    msg.req_id = 53516U;
    msg.type = 28U;
    msg.status = 4U;
    msg.info.assign("NMXXNDOSFJELPATFWHBZEMOSHOLKVPZCTSDJQHYIBSMVKDADMBEPRIU");
    msg.range = 0.402330395729;

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
    msg.setTimeStamp(0.584788923173);
    msg.setSource(25440U);
    msg.setSourceEntity(146U);
    msg.setDestination(23068U);
    msg.setDestinationEntity(196U);
    msg.req_id = 30917U;
    msg.type = 37U;
    msg.status = 209U;
    msg.info.assign("XYDDNHWGZDYNJHPOGIUOKYABTSBJLXGGAECRIFJAGXHDMEAOFKKBWVRXJRMJCEPKSPZDWVWSZSGLLWAEISCMPYCVMPNJYWQVDXNMTFKQLUBKKCCMDTZKZOKJ");
    msg.range = 0.404185257026;

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
    msg.setTimeStamp(0.52584572316);
    msg.setSource(13191U);
    msg.setSourceEntity(142U);
    msg.setDestination(60961U);
    msg.setDestinationEntity(1U);
    msg.req_id = 21909U;
    msg.type = 142U;
    msg.status = 94U;
    msg.info.assign("ZXBHXIRPQXKLWCTZJWAZYTNVNQXANNXGKSCSRCBMPFVAUVNBKFMSXEIHYPZUPBATTFBXIRSDGXHNPCTRMMQRVMYYMYLOSUVVIETHOODHNQFLYUHQDQOUCDVWAZZPKZLFLMEENOABWIFBGQCHCPKNFJLXKCEJDDHAERKOLKONRUQWDUOWGIIVJWKOCYSESMBDMTJBERJWGSJBHYIZQLJXYVIOWDTFFGSKGE");
    msg.range = 0.0758137091167;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.639416617295);
    msg.setSource(47774U);
    msg.setSourceEntity(27U);
    msg.setDestination(43418U);
    msg.setDestinationEntity(86U);
    msg.value = -9431;

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
    msg.setTimeStamp(0.986079475747);
    msg.setSource(16398U);
    msg.setSourceEntity(251U);
    msg.setDestination(60998U);
    msg.setDestinationEntity(170U);
    msg.value = -14922;

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
    msg.setTimeStamp(0.208513419599);
    msg.setSource(3408U);
    msg.setSourceEntity(51U);
    msg.setDestination(25097U);
    msg.setDestinationEntity(194U);
    msg.value = 20406;

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
    msg.setTimeStamp(0.149359889062);
    msg.setSource(61388U);
    msg.setSourceEntity(209U);
    msg.setDestination(12551U);
    msg.setDestinationEntity(158U);
    msg.value = 0.0108860102225;

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
    msg.setTimeStamp(0.720354523221);
    msg.setSource(48290U);
    msg.setSourceEntity(120U);
    msg.setDestination(30754U);
    msg.setDestinationEntity(15U);
    msg.value = 0.380008266182;

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
    msg.setTimeStamp(0.427229595013);
    msg.setSource(50309U);
    msg.setSourceEntity(117U);
    msg.setDestination(24632U);
    msg.setDestinationEntity(26U);
    msg.value = 0.586907536624;

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
    msg.setTimeStamp(0.102595096217);
    msg.setSource(9259U);
    msg.setSourceEntity(169U);
    msg.setDestination(54167U);
    msg.setDestinationEntity(94U);
    msg.value = 0.186211806451;

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
    msg.setTimeStamp(0.375370183796);
    msg.setSource(42911U);
    msg.setSourceEntity(48U);
    msg.setDestination(16569U);
    msg.setDestinationEntity(202U);
    msg.value = 0.571896214577;

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
    msg.setTimeStamp(0.83845826);
    msg.setSource(54184U);
    msg.setSourceEntity(10U);
    msg.setDestination(5591U);
    msg.setDestinationEntity(65U);
    msg.value = 0.803778169235;

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
    msg.setTimeStamp(0.457747686685);
    msg.setSource(37779U);
    msg.setSourceEntity(246U);
    msg.setDestination(62079U);
    msg.setDestinationEntity(226U);
    msg.validity = 40963U;
    msg.type = 170U;
    msg.utc_year = 47242U;
    msg.utc_month = 25U;
    msg.utc_day = 37U;
    msg.utc_time = 0.155201007987;
    msg.lat = 0.884130729806;
    msg.lon = 0.898046302091;
    msg.height = 0.30510978268;
    msg.satellites = 19U;
    msg.cog = 0.141928286877;
    msg.sog = 0.539045636294;
    msg.hdop = 0.705630069936;
    msg.vdop = 0.613070802658;
    msg.hacc = 0.449846185105;
    msg.vacc = 0.0440681796005;

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
    msg.setTimeStamp(0.118768083647);
    msg.setSource(5643U);
    msg.setSourceEntity(182U);
    msg.setDestination(60689U);
    msg.setDestinationEntity(208U);
    msg.validity = 31261U;
    msg.type = 250U;
    msg.utc_year = 4978U;
    msg.utc_month = 96U;
    msg.utc_day = 192U;
    msg.utc_time = 0.169786558352;
    msg.lat = 0.205087595784;
    msg.lon = 0.0531871117741;
    msg.height = 0.649722574212;
    msg.satellites = 137U;
    msg.cog = 0.926747817864;
    msg.sog = 0.817906724558;
    msg.hdop = 0.185815502106;
    msg.vdop = 0.908147469152;
    msg.hacc = 0.722906015413;
    msg.vacc = 0.163488913664;

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
    msg.setTimeStamp(0.540077060718);
    msg.setSource(63886U);
    msg.setSourceEntity(188U);
    msg.setDestination(6953U);
    msg.setDestinationEntity(175U);
    msg.validity = 21910U;
    msg.type = 220U;
    msg.utc_year = 28593U;
    msg.utc_month = 240U;
    msg.utc_day = 238U;
    msg.utc_time = 0.954679595275;
    msg.lat = 0.576536086149;
    msg.lon = 0.20413283886;
    msg.height = 0.874276546026;
    msg.satellites = 209U;
    msg.cog = 0.645043856691;
    msg.sog = 0.0595008261896;
    msg.hdop = 0.864918227791;
    msg.vdop = 0.477286844867;
    msg.hacc = 0.482150791986;
    msg.vacc = 0.0556095970457;

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
    msg.setTimeStamp(0.903211175829);
    msg.setSource(49545U);
    msg.setSourceEntity(116U);
    msg.setDestination(30493U);
    msg.setDestinationEntity(101U);
    msg.time = 0.803456603333;
    msg.phi = 0.865918526699;
    msg.theta = 0.439682007419;
    msg.psi = 0.985274795452;
    msg.psi_magnetic = 0.366332526704;

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
    msg.setTimeStamp(0.696208892708);
    msg.setSource(27842U);
    msg.setSourceEntity(250U);
    msg.setDestination(28927U);
    msg.setDestinationEntity(128U);
    msg.time = 0.232879404014;
    msg.phi = 0.306002035306;
    msg.theta = 0.635557366824;
    msg.psi = 0.533855107543;
    msg.psi_magnetic = 0.147869460491;

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
    msg.setTimeStamp(0.585611788451);
    msg.setSource(24763U);
    msg.setSourceEntity(194U);
    msg.setDestination(15011U);
    msg.setDestinationEntity(23U);
    msg.time = 0.100236969991;
    msg.phi = 0.134845502983;
    msg.theta = 0.579195499424;
    msg.psi = 0.531970771747;
    msg.psi_magnetic = 0.16922001012;

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
    msg.setTimeStamp(0.956714929023);
    msg.setSource(56807U);
    msg.setSourceEntity(95U);
    msg.setDestination(64326U);
    msg.setDestinationEntity(221U);
    msg.time = 0.731317848942;
    msg.x = 0.461716748615;
    msg.y = 0.998696889608;
    msg.z = 0.571675374085;
    msg.timestep = 0.585152364095;

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
    msg.setTimeStamp(0.374909922928);
    msg.setSource(6295U);
    msg.setSourceEntity(155U);
    msg.setDestination(13158U);
    msg.setDestinationEntity(54U);
    msg.time = 0.845265487294;
    msg.x = 0.706858165723;
    msg.y = 0.0308350943823;
    msg.z = 0.29578806755;
    msg.timestep = 0.588482091248;

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
    msg.setTimeStamp(0.176872718907);
    msg.setSource(37781U);
    msg.setSourceEntity(32U);
    msg.setDestination(59356U);
    msg.setDestinationEntity(153U);
    msg.time = 0.883368114145;
    msg.x = 0.415035058208;
    msg.y = 0.769366532534;
    msg.z = 0.711985187271;
    msg.timestep = 0.82777789313;

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
    msg.setTimeStamp(0.0451222597418);
    msg.setSource(20136U);
    msg.setSourceEntity(141U);
    msg.setDestination(28584U);
    msg.setDestinationEntity(7U);
    msg.time = 0.139909053992;
    msg.x = 0.437426088447;
    msg.y = 0.75424159787;
    msg.z = 0.650371781144;

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
    msg.setTimeStamp(0.571517106607);
    msg.setSource(43426U);
    msg.setSourceEntity(11U);
    msg.setDestination(53647U);
    msg.setDestinationEntity(207U);
    msg.time = 0.709963213589;
    msg.x = 0.0492469724312;
    msg.y = 0.815333754174;
    msg.z = 0.173653122294;

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
    msg.setTimeStamp(0.20807479549);
    msg.setSource(20718U);
    msg.setSourceEntity(196U);
    msg.setDestination(9783U);
    msg.setDestinationEntity(180U);
    msg.time = 0.350846237328;
    msg.x = 0.952108522203;
    msg.y = 0.909937738844;
    msg.z = 0.265857668752;

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
    msg.setTimeStamp(0.736881641453);
    msg.setSource(20379U);
    msg.setSourceEntity(187U);
    msg.setDestination(15608U);
    msg.setDestinationEntity(44U);
    msg.time = 0.20606818146;
    msg.x = 0.0302584655879;
    msg.y = 0.0311451229897;
    msg.z = 0.8353154283;

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
    msg.setTimeStamp(0.918743410155);
    msg.setSource(51841U);
    msg.setSourceEntity(76U);
    msg.setDestination(46339U);
    msg.setDestinationEntity(228U);
    msg.time = 0.369804705872;
    msg.x = 0.403229527815;
    msg.y = 0.892054045717;
    msg.z = 0.00822165288671;

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
    msg.setTimeStamp(0.307189603173);
    msg.setSource(33250U);
    msg.setSourceEntity(125U);
    msg.setDestination(63266U);
    msg.setDestinationEntity(18U);
    msg.time = 0.556899176247;
    msg.x = 0.423385706367;
    msg.y = 0.822012920946;
    msg.z = 0.215206224654;

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
    msg.setTimeStamp(0.00754257310959);
    msg.setSource(9801U);
    msg.setSourceEntity(52U);
    msg.setDestination(28530U);
    msg.setDestinationEntity(47U);
    msg.time = 0.151648360815;
    msg.x = 0.741906324079;
    msg.y = 0.202341784447;
    msg.z = 0.921511228606;

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
    msg.setTimeStamp(0.931480199085);
    msg.setSource(64527U);
    msg.setSourceEntity(109U);
    msg.setDestination(9667U);
    msg.setDestinationEntity(6U);
    msg.time = 0.809511529954;
    msg.x = 0.876813746693;
    msg.y = 0.383785333284;
    msg.z = 0.807814716803;

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
    msg.setTimeStamp(0.26955907939);
    msg.setSource(35535U);
    msg.setSourceEntity(165U);
    msg.setDestination(53964U);
    msg.setDestinationEntity(169U);
    msg.time = 0.920212322471;
    msg.x = 0.491668829326;
    msg.y = 0.720845896077;
    msg.z = 0.877641868324;

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
    msg.setTimeStamp(0.294470768992);
    msg.setSource(20744U);
    msg.setSourceEntity(101U);
    msg.setDestination(16162U);
    msg.setDestinationEntity(139U);
    msg.validity = 225U;
    msg.x = 0.76870495886;
    msg.y = 0.668083316579;
    msg.z = 0.311616446481;

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
    msg.setTimeStamp(0.808694908324);
    msg.setSource(22921U);
    msg.setSourceEntity(71U);
    msg.setDestination(40884U);
    msg.setDestinationEntity(70U);
    msg.validity = 77U;
    msg.x = 0.949153296528;
    msg.y = 0.0385580631411;
    msg.z = 0.56126829716;

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
    msg.setTimeStamp(0.781017372211);
    msg.setSource(33701U);
    msg.setSourceEntity(59U);
    msg.setDestination(31625U);
    msg.setDestinationEntity(21U);
    msg.validity = 74U;
    msg.x = 0.876178023952;
    msg.y = 0.294906411949;
    msg.z = 0.383304785686;

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
    msg.setTimeStamp(0.143878015583);
    msg.setSource(61305U);
    msg.setSourceEntity(151U);
    msg.setDestination(59899U);
    msg.setDestinationEntity(49U);
    msg.validity = 43U;
    msg.x = 0.679723420012;
    msg.y = 0.591729309562;
    msg.z = 0.534500103192;

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
    msg.setTimeStamp(0.267162704762);
    msg.setSource(11310U);
    msg.setSourceEntity(31U);
    msg.setDestination(32797U);
    msg.setDestinationEntity(215U);
    msg.validity = 34U;
    msg.x = 0.817197037806;
    msg.y = 0.464998252375;
    msg.z = 0.431882234799;

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
    msg.setTimeStamp(0.980963249904);
    msg.setSource(27380U);
    msg.setSourceEntity(157U);
    msg.setDestination(42900U);
    msg.setDestinationEntity(133U);
    msg.validity = 30U;
    msg.x = 0.58302367933;
    msg.y = 0.205525414117;
    msg.z = 0.149163299185;

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
    msg.setTimeStamp(0.204673643474);
    msg.setSource(20984U);
    msg.setSourceEntity(115U);
    msg.setDestination(347U);
    msg.setDestinationEntity(158U);
    msg.time = 0.811093136689;
    msg.x = 0.461432809701;
    msg.y = 0.659099924311;
    msg.z = 0.296265472717;

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
    msg.setTimeStamp(0.0343070642933);
    msg.setSource(12967U);
    msg.setSourceEntity(18U);
    msg.setDestination(56413U);
    msg.setDestinationEntity(190U);
    msg.time = 0.0285639605154;
    msg.x = 0.93777610666;
    msg.y = 0.668671530991;
    msg.z = 0.0549637066724;

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
    msg.setTimeStamp(0.148578544188);
    msg.setSource(49829U);
    msg.setSourceEntity(56U);
    msg.setDestination(549U);
    msg.setDestinationEntity(205U);
    msg.time = 0.77881994352;
    msg.x = 0.904744399487;
    msg.y = 0.551539618568;
    msg.z = 0.0295337142541;

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
    msg.setTimeStamp(0.40157967191);
    msg.setSource(63294U);
    msg.setSourceEntity(177U);
    msg.setDestination(63655U);
    msg.setDestinationEntity(30U);
    msg.validity = 52U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.795872559547;
    tmp_msg_0.beam_height = 0.2519775167;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.661437874754;

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
    msg.setTimeStamp(0.429088231551);
    msg.setSource(8368U);
    msg.setSourceEntity(208U);
    msg.setDestination(8889U);
    msg.setDestinationEntity(202U);
    msg.validity = 40U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.799687741914;
    tmp_msg_0.y = 0.251137833883;
    tmp_msg_0.z = 0.799403137646;
    tmp_msg_0.phi = 0.0305878103873;
    tmp_msg_0.theta = 0.54673667888;
    tmp_msg_0.psi = 0.545608078363;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.155613988138;

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
    msg.setTimeStamp(0.0877219310189);
    msg.setSource(980U);
    msg.setSourceEntity(4U);
    msg.setDestination(51692U);
    msg.setDestinationEntity(196U);
    msg.validity = 154U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.628611679615;
    tmp_msg_0.y = 0.503178581667;
    tmp_msg_0.z = 0.840242297864;
    tmp_msg_0.phi = 0.284614439289;
    tmp_msg_0.theta = 0.65631343054;
    tmp_msg_0.psi = 0.931608961678;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.599766166663;

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
    msg.setTimeStamp(0.361485890748);
    msg.setSource(56270U);
    msg.setSourceEntity(46U);
    msg.setDestination(28791U);
    msg.setDestinationEntity(135U);
    msg.value = 0.604570071478;

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
    msg.setTimeStamp(0.217711028487);
    msg.setSource(47708U);
    msg.setSourceEntity(190U);
    msg.setDestination(8112U);
    msg.setDestinationEntity(81U);
    msg.value = 0.838647669704;

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
    msg.setTimeStamp(0.0791359277075);
    msg.setSource(61965U);
    msg.setSourceEntity(3U);
    msg.setDestination(14768U);
    msg.setDestinationEntity(120U);
    msg.value = 0.272054126662;

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
    msg.setTimeStamp(0.680974756178);
    msg.setSource(63940U);
    msg.setSourceEntity(132U);
    msg.setDestination(34754U);
    msg.setDestinationEntity(214U);
    msg.value = 0.877188023153;

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
    msg.setTimeStamp(0.557118025553);
    msg.setSource(61344U);
    msg.setSourceEntity(66U);
    msg.setDestination(14389U);
    msg.setDestinationEntity(216U);
    msg.value = 0.280967134065;

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
    msg.setTimeStamp(0.0518894633236);
    msg.setSource(50681U);
    msg.setSourceEntity(207U);
    msg.setDestination(53876U);
    msg.setDestinationEntity(51U);
    msg.value = 0.280700807552;

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
    msg.setTimeStamp(0.455841987366);
    msg.setSource(14682U);
    msg.setSourceEntity(164U);
    msg.setDestination(19426U);
    msg.setDestinationEntity(9U);
    msg.value = 0.114506147189;

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
    msg.setTimeStamp(0.744245568007);
    msg.setSource(38076U);
    msg.setSourceEntity(45U);
    msg.setDestination(60719U);
    msg.setDestinationEntity(209U);
    msg.value = 0.826282908919;

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
    msg.setTimeStamp(0.841750190598);
    msg.setSource(10186U);
    msg.setSourceEntity(147U);
    msg.setDestination(63061U);
    msg.setDestinationEntity(76U);
    msg.value = 0.913243741845;

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
    msg.setTimeStamp(0.673374633035);
    msg.setSource(13998U);
    msg.setSourceEntity(160U);
    msg.setDestination(26804U);
    msg.setDestinationEntity(27U);
    msg.value = 0.484680932498;

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
    msg.setTimeStamp(0.106679676306);
    msg.setSource(19564U);
    msg.setSourceEntity(151U);
    msg.setDestination(48746U);
    msg.setDestinationEntity(117U);
    msg.value = 0.423301038417;

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
    msg.setTimeStamp(0.83549004379);
    msg.setSource(55216U);
    msg.setSourceEntity(250U);
    msg.setDestination(63089U);
    msg.setDestinationEntity(82U);
    msg.value = 0.0851090866609;

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
    msg.setTimeStamp(0.857393482636);
    msg.setSource(11210U);
    msg.setSourceEntity(78U);
    msg.setDestination(42062U);
    msg.setDestinationEntity(82U);
    msg.value = 0.382716633495;

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
    msg.setTimeStamp(0.17989332192);
    msg.setSource(49001U);
    msg.setSourceEntity(87U);
    msg.setDestination(20731U);
    msg.setDestinationEntity(219U);
    msg.value = 0.68333112711;

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
    msg.setTimeStamp(0.760642484407);
    msg.setSource(55286U);
    msg.setSourceEntity(31U);
    msg.setDestination(48488U);
    msg.setDestinationEntity(141U);
    msg.value = 0.86809584129;

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
    msg.setTimeStamp(0.141685555452);
    msg.setSource(10667U);
    msg.setSourceEntity(131U);
    msg.setDestination(30640U);
    msg.setDestinationEntity(148U);
    msg.value = 0.82699898257;

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
    msg.setTimeStamp(0.533002076635);
    msg.setSource(61753U);
    msg.setSourceEntity(183U);
    msg.setDestination(54618U);
    msg.setDestinationEntity(98U);
    msg.value = 0.700139116097;

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
    msg.setTimeStamp(0.750499548489);
    msg.setSource(14070U);
    msg.setSourceEntity(102U);
    msg.setDestination(47809U);
    msg.setDestinationEntity(9U);
    msg.value = 0.652132840875;

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
    msg.setTimeStamp(0.71161998364);
    msg.setSource(9495U);
    msg.setSourceEntity(204U);
    msg.setDestination(8992U);
    msg.setDestinationEntity(22U);
    msg.value = 0.316970249996;

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
    msg.setTimeStamp(0.666055398114);
    msg.setSource(298U);
    msg.setSourceEntity(202U);
    msg.setDestination(15460U);
    msg.setDestinationEntity(70U);
    msg.value = 0.112207929265;

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
    msg.setTimeStamp(0.393611027656);
    msg.setSource(20134U);
    msg.setSourceEntity(115U);
    msg.setDestination(35483U);
    msg.setDestinationEntity(45U);
    msg.value = 0.602431041603;

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
    msg.setTimeStamp(0.929866624744);
    msg.setSource(28610U);
    msg.setSourceEntity(94U);
    msg.setDestination(47017U);
    msg.setDestinationEntity(210U);
    msg.value = 0.193244736013;

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
    msg.setTimeStamp(0.971448741339);
    msg.setSource(24562U);
    msg.setSourceEntity(82U);
    msg.setDestination(5246U);
    msg.setDestinationEntity(4U);
    msg.value = 0.0495190989105;

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
    msg.setTimeStamp(0.268684927061);
    msg.setSource(30495U);
    msg.setSourceEntity(62U);
    msg.setDestination(49U);
    msg.setDestinationEntity(134U);
    msg.value = 0.727058749303;

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
    msg.setTimeStamp(0.535434614303);
    msg.setSource(63799U);
    msg.setSourceEntity(51U);
    msg.setDestination(11520U);
    msg.setDestinationEntity(89U);
    msg.direction = 0.131435701708;
    msg.speed = 0.30978826229;
    msg.turbulence = 0.94536504975;

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
    msg.setTimeStamp(0.139623523472);
    msg.setSource(29743U);
    msg.setSourceEntity(68U);
    msg.setDestination(54520U);
    msg.setDestinationEntity(133U);
    msg.direction = 0.620243058687;
    msg.speed = 0.60351823485;
    msg.turbulence = 0.464932412147;

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
    msg.setTimeStamp(0.248822088364);
    msg.setSource(61976U);
    msg.setSourceEntity(109U);
    msg.setDestination(38004U);
    msg.setDestinationEntity(210U);
    msg.direction = 0.4310177971;
    msg.speed = 0.687472646754;
    msg.turbulence = 0.990002611275;

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
    msg.setTimeStamp(0.106363151375);
    msg.setSource(12932U);
    msg.setSourceEntity(140U);
    msg.setDestination(25626U);
    msg.setDestinationEntity(83U);
    msg.value = 0.303098155093;

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
    msg.setTimeStamp(0.271948430858);
    msg.setSource(47336U);
    msg.setSourceEntity(66U);
    msg.setDestination(18892U);
    msg.setDestinationEntity(223U);
    msg.value = 0.798240799386;

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
    msg.setTimeStamp(0.348530042331);
    msg.setSource(25005U);
    msg.setSourceEntity(195U);
    msg.setDestination(62529U);
    msg.setDestinationEntity(84U);
    msg.value = 0.445073682406;

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
    msg.setTimeStamp(0.412588138785);
    msg.setSource(32606U);
    msg.setSourceEntity(109U);
    msg.setDestination(61975U);
    msg.setDestinationEntity(161U);
    msg.value.assign("PYUPKKCBBMWHEZOWFOPUJYEDVHRANIOLGSQHJTJCEKIQTLBLGSQKYTVXRLOFNMLQHLUDJKVCPLVSICBRWHUSZBIHWSNIJWXBGXVFQJZYVOURKEWWRIVAPOLFWSGQWZDJXAVBONIDMMWAPYXTFDRGMAKGRU");

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
    msg.setTimeStamp(0.314275162698);
    msg.setSource(3697U);
    msg.setSourceEntity(23U);
    msg.setDestination(22225U);
    msg.setDestinationEntity(71U);
    msg.value.assign("ODFOMMYFLUVGUQONANVQFTDYBQVRGYBJGYTEZSEJVRWLUIELKQZILWVUIIRHURXKOBXFNBKCVEYMWOHFNPNQPROBMPDTBDCWLKUNDXHTWSMXHGPPZHLIHQZQGCTDJNTINWECSICYTAMCGAUYAFGCKHFVKDDIKAAAPVRXEEM");

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
    msg.setTimeStamp(0.756133375404);
    msg.setSource(56892U);
    msg.setSourceEntity(254U);
    msg.setDestination(45254U);
    msg.setDestinationEntity(189U);
    msg.value.assign("PXCZNFQZYGOJBHVDLHCDTRSHHJBRSJFRMTIIMXRWFIEYXDZQTMDXPUUJNLDTHFVEKUZEABKJQANUQUZXWYASBWOOF");

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
    msg.setTimeStamp(0.669671113778);
    msg.setSource(18243U);
    msg.setSourceEntity(19U);
    msg.setDestination(11924U);
    msg.setDestinationEntity(60U);
    const char tmp_msg_0[] = {-2, -38, -119, -43, -20, -97, -56, 78, -69, 93, -86, -30, -34, -1, 123, -90, 8, 11, 116, 83, 70, 83, -47, 102, -94, -119, 2, -26, -2, -96, -21, 119, 9, -111, -77, 45, 47, 101, -74, -27, -96, 88, -49, -116, -116, -84, 72, -107, -42, 76, 37, 1, 59, -86, 118, -91, -82, -71, 119, 109, 120, -125, -39, -92, 1, -11, 109, 14, 28, 99, 36, -120, -120, -111, 33, 13, -40, 107, 64, -15, 48, -18, -56, 30, 100, -15, 53, 90, -49, -105, -106, -77, -37, -76, -69, 33, -116, 16, -43, 48, 58, -34, -64, 42, 62, -71, 17, 93, 62, 0, -124, 84, 122, 79, 33, 100, 123, 110, 90, 47, -96, -43, 89, 66, 101, -120, 64, 61, 94, -24, 112, -44, 10, -59, -14, -18, -117, -113, 125, -119, -103, -40, -128, -32, 88, 19, 6, 73, -36, 121, -49, 1, -10, 29, -92, 118, 22, 108, -86, 70, 23, 56, 32, -16, 77, -100, 110, -90, 62, -25, 120, -74, -4, -92, 5, 13, 93, -80, 123, -86, -68, 67, -102, 117, 4, -114, -41, 89, -68, -81, 100, -33, 49, -20, 49, 125, -89, 55, -84, -44, 81, 83, 25, -55, 67, 59, 126, 93, 102, 75, -121, -35, -100, 118, -97, 22, -111, -98, -93, 39, -100, -23, 14, 103, 96, -108, 45, 104, -116, 11, -36, 4, 14, 67, 17, -111, 81, -57, -24, 35, -76, 93, -75, 38, 36, 5};
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
    msg.setTimeStamp(0.939018276013);
    msg.setSource(63210U);
    msg.setSourceEntity(149U);
    msg.setDestination(2007U);
    msg.setDestinationEntity(152U);
    const char tmp_msg_0[] = {-44, -71, -61, -1, -97, -117, -99, -65, -84, 78, -84, 93, 16, -58, 101, -115, 36, -53, -92, -88, -46, 117, 35, -120, -26, 108, 103, -86, -122, 7, 40, 8, -97, -106, 126, -42, 17, 42, 7, 62, 84, -45, 30, -7, -103, 9, -78, 95, -41, 19, -15, -42, -117, -46, 75, 2, 104, 54, 41, -51, -78, 104, 46, -8, -45, 118, -41, 13, -120, -17, -78, 23, -66, -8, 110, 105, 35, 41, -49, 96, 123, -58, 19, -28, -36, -57, 27, -79, 10, -111, -107, -30, -31, 72, 68, 71, 53, -94, -124, -96, -42, 57, 86, 41, -96, 2, 73, -113, 5, 58, -65, -89, 88, -100, 88, -57, 51, -7, -18, 27, -97, -124, 4, -51, -104, 89, 107, -91, 2, 2, -40, -23, -87, -4, -26, -26, 55, -94, -1, -89, 47, 65, -89, 76, 72, -98, 78, 87, 108, 107, -113, -100, -63, 109, -48, -110, 83, -49, 33, 99, 77, 2, -41, 41, -33, -124, -116, 90, -57, -118, -49, 11, 82, -86, -40, -108, -43, 60, 19, -113, 115, 5, -91, 31, -118, -73, -124, -106, 123, 76, -10, -98, -11, -9, -17, 81, -114, -85, 89, 52, -85, 24, 121, 10, -26, 10, 22, 15, 75, 101, 3, -16, 63, -75, -9, -56, 73, -25, -32, 36, 97, -94, -102, 126, -111, 61, 88, 74, 118, 117, 11, -72, 13, 42, 80, -65, -37, 10, 15, 40, 51, -98, -85, -95, -118, 64, 7};
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
    msg.setTimeStamp(0.208152438041);
    msg.setSource(34099U);
    msg.setSourceEntity(188U);
    msg.setDestination(43281U);
    msg.setDestinationEntity(92U);
    const char tmp_msg_0[] = {-32, 41, 96, -78, -105, -111, 10, -41, -117, -82, 82, -82, -90, 44, -101, 24, 23, 124, 9, 123, 8, 102, -97, 25, 41, 44, -42, 41, -22, 123, -87, 49, -71, 41, 54, -82, 11, 63, -115, -114, -111, -54, -7, 44, 117, -53, 18, 115, -76, 50, -88, -101, 38, -88, 17, -95, 52, -72, -10, 51, 107, -21, -83, -91, 77, -57, 78, 90, 78, -49, -39, 58, 21, 84, 72, -81, -92, 72, 85, -15, 1, 39, 6, -94, 13, -10, 73, -124, 67, -86, -127, 49, -48, -99, 5, 36, -113, 81, -91, 25, 35, -64};
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
    msg.setTimeStamp(0.0328858196475);
    msg.setSource(6061U);
    msg.setSourceEntity(65U);
    msg.setDestination(20559U);
    msg.setDestinationEntity(87U);
    msg.value = 0.346135299219;

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
    msg.setTimeStamp(0.472859976487);
    msg.setSource(3325U);
    msg.setSourceEntity(230U);
    msg.setDestination(59523U);
    msg.setDestinationEntity(141U);
    msg.value = 0.931912282089;

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
    msg.setTimeStamp(0.446045819017);
    msg.setSource(21162U);
    msg.setSourceEntity(35U);
    msg.setDestination(8448U);
    msg.setDestinationEntity(197U);
    msg.value = 0.729765712122;

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
    msg.setTimeStamp(0.068985889029);
    msg.setSource(16656U);
    msg.setSourceEntity(1U);
    msg.setDestination(5244U);
    msg.setDestinationEntity(251U);
    msg.type = 54U;
    msg.frequency = 2208291185U;
    msg.min_range = 46130U;
    msg.max_range = 55722U;
    msg.bits_per_point = 76U;
    msg.scale_factor = 0.632494409325;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.723507154395;
    tmp_msg_0.beam_height = 0.88999682658;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-80, -58, -9, -47, -10, -33, -69, -9, 92, -117, -26, -64, -12, 15, 15, 73, 84, -45, 10, 20, 25, 92, -33, -34, 26, -78, 20, -110, -71, -2, 17, 111, -37, 50, -125, -117, -7, 17, 112, -107, -5, 77, -120, 118, -93, 50, 62, 124, 117, 70, 46, 15, 58, 23, 124, -84, 113, 27, 32, 112, 89, -114, -19, 61, -120, -90, 63, 70, 116, -69, 123, 88, 109, -17, 3, 91, -76, 95, 47, 91, -98, 40, -58, 58, -65, 10, 31, -77, -117, 93, -93, -35, 109, -65, -104, 124, 123, 20, 88, 66, 16, 78, 64, -68, 79, -96, -91, 39, 0, 92, -28, 125, 38, -101, -116, -62, -81, -1, -12, -127, 80, 46, -110, -77, 10, 17, -33, -42, -53, -19, 63, -15, -104, -91, -7, 97, -35, 53, -48, 37, 86, 17, 43, -28, -101, 86, -2, -96, 101, 26, -117, -32, 34, -64, 25, -16, 15, -122, -122, 59, -101, 107, -76, -31, -120, 99, 10, -21, -38, 113, 101, -94, -8, 9, 97, -59, -86, 19, 84, -83, -5, 1, 86, -39, -73, 109, -70, 16, -109, -126, 3};
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
    msg.setTimeStamp(0.505542821427);
    msg.setSource(16748U);
    msg.setSourceEntity(172U);
    msg.setDestination(7455U);
    msg.setDestinationEntity(241U);
    msg.type = 176U;
    msg.frequency = 840272418U;
    msg.min_range = 12911U;
    msg.max_range = 62717U;
    msg.bits_per_point = 98U;
    msg.scale_factor = 0.486485752116;
    const char tmp_msg_0[] = {55, -87, -85, -51, -50, -60, -109, -78, 99, -68, -114, -28, -26, -54, -119, -85, 123, 103, 84, 122, 126, -40, 5, -19, -40, -109, 62, 94, 86, 76, 18, -112, -41, -112, 59, 0, -52, -57, 93, 50, 99, -78, 121, 83, 37, 40, -31, 111, -53, 35, -81, -52, 120, -48, -20, 73, -33, 15, -121, -68, 119, -18, -75, -50, 59, -62, 47, 2, 47, -15, -53, 76, 12, -28, 72, -106, -16, 100, -66, -96, -44, -113, -27, -110, 46, -10, 19, 42, 27, -72, 34, 65, -98, 59, 110, -101, 106, 51, 96, -105, -10, 35, 110, 114, 52, -67, -81, 96, -99, -108, -61, -71, 27, -23, -72, 75, -94, -124, 78, -82, 44, -2, -71, 115, -98, -9, -91, 26, -119, -98, 88, 4, -59, 19, 76};
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
    msg.setTimeStamp(0.0765548919836);
    msg.setSource(61330U);
    msg.setSourceEntity(135U);
    msg.setDestination(61051U);
    msg.setDestinationEntity(16U);
    msg.type = 170U;
    msg.frequency = 2843074068U;
    msg.min_range = 10886U;
    msg.max_range = 5080U;
    msg.bits_per_point = 195U;
    msg.scale_factor = 0.24684003175;
    const char tmp_msg_0[] = {107, 74, 11, 14, 16, 41, -115, -47, -121, 106, 91, 70, 121, 26, 47, -30, -87, 21, 30, 106, 62, 121, 2, -44, 108, 38, -115, 0, 124, -66, 84, 51, -111, 7, -62, -119, 64, -33, 58, 41, -27, 104, -25, 23, -48, -64, -41, 116, -42, -92, 41, -72, 69, -89, -89, 69, 30, -5, -87, -128, -115, -108, -25, -74, -106, -2, -50, 42, -118, 25, 80, 72, -40, 68, 49, 123, 112, 69, -34, 114, 56, 82, 31, 23, -18, -73, -17, 116, -31, 78, -99, -105, 3, -30, -43, 23, -120, 125, -126, -95, -117, -119, -123, 31, -99, -113, -30, 18, 11, 81, 50, 112, 53, -87, 29, -86, 106, -124, -101, -117, 62, -21, 50, 72, -118, -49, 90, 24, 87, -33, -36, -25, 58, 124, 36, 92, -28, -94, 37, 80, -77, -3, 113, -30, -41, 70, 62, 105, 37, -125, -119, -55, 57, -44, -78, -112, -81, 0, 99, 118, 52, -3, 54, 95, -104, -71, 48, 118, -5, 53, 30, -88, -22, 37, 6, -60, -67, -78, 33, -128, 95, -53, -82, 117, -114, 39, 33, -56, -39, -80, 88, -100, -103, -53, 22, -126, -32, -9, -28, -40, 8, -94, -59, -61, 57, 124, -9, -99, -31, 73, -56, 45, -87, -24, -21, -33, -8, -81, 71, 58, 60, -83, -127, -14, 36, 10, 41, 9, -11, 79, -48, 81, 67, -65, -96, 48, -53, -19, 94, 18, -112, -37, 105, -47, -41, 107};
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
    msg.setTimeStamp(0.657388821753);
    msg.setSource(36054U);
    msg.setSourceEntity(102U);
    msg.setDestination(7003U);
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
    msg.setTimeStamp(0.183057865411);
    msg.setSource(35818U);
    msg.setSourceEntity(54U);
    msg.setDestination(17731U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.549927898526);
    msg.setSource(60058U);
    msg.setSourceEntity(147U);
    msg.setDestination(13809U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.613269526169);
    msg.setSource(58966U);
    msg.setSourceEntity(199U);
    msg.setDestination(22481U);
    msg.setDestinationEntity(189U);
    msg.op = 98U;

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
    msg.setTimeStamp(0.979749435992);
    msg.setSource(22222U);
    msg.setSourceEntity(14U);
    msg.setDestination(54751U);
    msg.setDestinationEntity(76U);
    msg.op = 185U;

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
    msg.setTimeStamp(0.0703198543232);
    msg.setSource(64896U);
    msg.setSourceEntity(241U);
    msg.setDestination(26510U);
    msg.setDestinationEntity(133U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.320964842964);
    msg.setSource(25464U);
    msg.setSourceEntity(215U);
    msg.setDestination(42407U);
    msg.setDestinationEntity(170U);
    msg.value = 0.592938703857;
    msg.confidence = 0.469882940896;
    msg.opmodes.assign("HBAFGDPTJLSIRRLKFXIYEEUAMUWJWINBYUCMPIOJHDPZDHWFPFBJIOHNMYOGLOECPSKZRTUSSCCKJWPGRCGFXAXQCRHYKEFREKLDGDZWVPISIWAKBUDQHUMZFJZCZIYNSGKCEVOLSTXHODERMYXPJLFTQ");

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
    msg.setTimeStamp(0.721100055998);
    msg.setSource(46173U);
    msg.setSourceEntity(6U);
    msg.setDestination(30351U);
    msg.setDestinationEntity(161U);
    msg.value = 0.496805918267;
    msg.confidence = 0.599881829645;
    msg.opmodes.assign("SKGVJXBRSYNIHWCYBERCMSYUWXJ");

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
    msg.setTimeStamp(0.865329791198);
    msg.setSource(53468U);
    msg.setSourceEntity(27U);
    msg.setDestination(23377U);
    msg.setDestinationEntity(139U);
    msg.value = 0.160052296434;
    msg.confidence = 0.787914428216;
    msg.opmodes.assign("FJTHMWDMASHELPRHCOZYPJBUAIAQHACOHKXIUEMEUVNBIVOYHIABFZDUIKBMSTVFMZLCUMQIXANFQLQGOCTPGMDUWDOJJBFJGCQGZZKFCGXFYECMJXKRHBWGZQRIFKVVXXERVGLYPTWBKSEOTSZLTPAAJKWEMRPKFWUBRNZHTCPFXPOIPVHKWOTXYWDHUNLDQWGRSNSYIDJ");

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
    msg.setTimeStamp(0.440367672387);
    msg.setSource(34607U);
    msg.setSourceEntity(26U);
    msg.setDestination(1716U);
    msg.setDestinationEntity(24U);
    msg.itow = 4285279349U;
    msg.lat = 0.417814078469;
    msg.lon = 0.313330562643;
    msg.height_ell = 0.713708766024;
    msg.height_sea = 0.883471742047;
    msg.hacc = 0.52068212818;
    msg.vacc = 0.0790112875821;
    msg.vel_n = 0.407002142375;
    msg.vel_e = 0.878489691607;
    msg.vel_d = 0.0107651826241;
    msg.speed = 0.913000308501;
    msg.gspeed = 0.907126166698;
    msg.heading = 0.439629937801;
    msg.sacc = 0.222118750418;
    msg.cacc = 0.337086940889;

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
    msg.setTimeStamp(0.0683147789114);
    msg.setSource(25529U);
    msg.setSourceEntity(10U);
    msg.setDestination(10931U);
    msg.setDestinationEntity(103U);
    msg.itow = 2327238666U;
    msg.lat = 0.0372783272713;
    msg.lon = 0.612677556188;
    msg.height_ell = 0.268635109468;
    msg.height_sea = 0.635332570119;
    msg.hacc = 0.952370467016;
    msg.vacc = 0.657625367302;
    msg.vel_n = 0.0768095530682;
    msg.vel_e = 0.614900912073;
    msg.vel_d = 0.325471176417;
    msg.speed = 0.572609851048;
    msg.gspeed = 0.0580711802607;
    msg.heading = 0.677548358348;
    msg.sacc = 0.409601942852;
    msg.cacc = 0.545196975371;

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
    msg.setTimeStamp(0.913929064619);
    msg.setSource(56144U);
    msg.setSourceEntity(4U);
    msg.setDestination(11194U);
    msg.setDestinationEntity(93U);
    msg.itow = 2417666097U;
    msg.lat = 0.840181327164;
    msg.lon = 0.489835727641;
    msg.height_ell = 0.227892597947;
    msg.height_sea = 0.360561665192;
    msg.hacc = 0.556572794231;
    msg.vacc = 0.578724218067;
    msg.vel_n = 0.840587854222;
    msg.vel_e = 0.168250989295;
    msg.vel_d = 0.0909876705896;
    msg.speed = 0.123670142112;
    msg.gspeed = 0.440155811496;
    msg.heading = 0.646775551767;
    msg.sacc = 0.992665742567;
    msg.cacc = 0.535974366785;

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
    msg.setTimeStamp(0.958810354406);
    msg.setSource(36516U);
    msg.setSourceEntity(18U);
    msg.setDestination(19799U);
    msg.setDestinationEntity(51U);
    msg.id = 121U;
    msg.value = 0.814125397314;

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
    msg.setTimeStamp(0.105219466717);
    msg.setSource(10131U);
    msg.setSourceEntity(31U);
    msg.setDestination(64974U);
    msg.setDestinationEntity(59U);
    msg.id = 89U;
    msg.value = 0.844230599076;

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
    msg.setTimeStamp(0.0302764847518);
    msg.setSource(34044U);
    msg.setSourceEntity(254U);
    msg.setDestination(56855U);
    msg.setDestinationEntity(212U);
    msg.id = 24U;
    msg.value = 0.671360288228;

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
    msg.setTimeStamp(0.55232997876);
    msg.setSource(35594U);
    msg.setSourceEntity(198U);
    msg.setDestination(35478U);
    msg.setDestinationEntity(162U);
    msg.x = 0.404822542754;
    msg.y = 0.543372633871;
    msg.z = 0.543396381762;
    msg.phi = 0.731214657422;
    msg.theta = 0.209255006477;
    msg.psi = 0.240047982341;

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
    msg.setTimeStamp(0.918649654649);
    msg.setSource(30855U);
    msg.setSourceEntity(139U);
    msg.setDestination(12517U);
    msg.setDestinationEntity(63U);
    msg.x = 0.839223652342;
    msg.y = 0.989403360464;
    msg.z = 0.775701579492;
    msg.phi = 0.622917037944;
    msg.theta = 0.50450329956;
    msg.psi = 0.681546924604;

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
    msg.setTimeStamp(0.623326046547);
    msg.setSource(50505U);
    msg.setSourceEntity(8U);
    msg.setDestination(46149U);
    msg.setDestinationEntity(29U);
    msg.x = 0.373752520218;
    msg.y = 0.25488715295;
    msg.z = 0.390759567963;
    msg.phi = 0.218843133181;
    msg.theta = 0.262608210605;
    msg.psi = 0.528931333178;

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
    msg.setTimeStamp(0.0683436686499);
    msg.setSource(2506U);
    msg.setSourceEntity(60U);
    msg.setDestination(56527U);
    msg.setDestinationEntity(6U);
    msg.beam_width = 0.683589167699;
    msg.beam_height = 0.602073310842;

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
    msg.setTimeStamp(0.581906043628);
    msg.setSource(60398U);
    msg.setSourceEntity(96U);
    msg.setDestination(30050U);
    msg.setDestinationEntity(97U);
    msg.beam_width = 0.946748108488;
    msg.beam_height = 0.0895335889999;

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
    msg.setTimeStamp(0.814712293896);
    msg.setSource(1130U);
    msg.setSourceEntity(143U);
    msg.setDestination(28594U);
    msg.setDestinationEntity(99U);
    msg.beam_width = 0.891786075579;
    msg.beam_height = 0.613253775588;

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
    msg.setTimeStamp(0.0697790528255);
    msg.setSource(44908U);
    msg.setSourceEntity(225U);
    msg.setDestination(59570U);
    msg.setDestinationEntity(96U);
    msg.sane = 182U;

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
    msg.setTimeStamp(0.499945269829);
    msg.setSource(57379U);
    msg.setSourceEntity(91U);
    msg.setDestination(19763U);
    msg.setDestinationEntity(233U);
    msg.sane = 101U;

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
    msg.setTimeStamp(0.584141888149);
    msg.setSource(29205U);
    msg.setSourceEntity(74U);
    msg.setDestination(46488U);
    msg.setDestinationEntity(33U);
    msg.sane = 56U;

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
    msg.setTimeStamp(0.490568723331);
    msg.setSource(58994U);
    msg.setSourceEntity(177U);
    msg.setDestination(40714U);
    msg.setDestinationEntity(123U);
    msg.value = 0.292807419849;

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
    msg.setTimeStamp(0.967059736747);
    msg.setSource(8178U);
    msg.setSourceEntity(220U);
    msg.setDestination(30611U);
    msg.setDestinationEntity(34U);
    msg.value = 0.82905302787;

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
    msg.setTimeStamp(0.537555483145);
    msg.setSource(54635U);
    msg.setSourceEntity(204U);
    msg.setDestination(33159U);
    msg.setDestinationEntity(87U);
    msg.value = 0.778940560667;

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
    msg.setTimeStamp(0.663532872177);
    msg.setSource(56318U);
    msg.setSourceEntity(211U);
    msg.setDestination(3744U);
    msg.setDestinationEntity(216U);
    msg.value = 0.621001149268;

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
    msg.setTimeStamp(0.991057129482);
    msg.setSource(47449U);
    msg.setSourceEntity(119U);
    msg.setDestination(44632U);
    msg.setDestinationEntity(47U);
    msg.value = 0.459570226315;

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
    msg.setTimeStamp(0.840825208096);
    msg.setSource(58353U);
    msg.setSourceEntity(78U);
    msg.setDestination(48061U);
    msg.setDestinationEntity(157U);
    msg.value = 0.0383851143458;

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
    msg.setTimeStamp(0.967110161585);
    msg.setSource(39447U);
    msg.setSourceEntity(171U);
    msg.setDestination(5953U);
    msg.setDestinationEntity(102U);
    msg.value = 0.119524905576;

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
    msg.setTimeStamp(0.377436385736);
    msg.setSource(19885U);
    msg.setSourceEntity(65U);
    msg.setDestination(3904U);
    msg.setDestinationEntity(157U);
    msg.value = 0.356218035696;

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
    msg.setTimeStamp(0.951029977816);
    msg.setSource(61003U);
    msg.setSourceEntity(245U);
    msg.setDestination(57018U);
    msg.setDestinationEntity(153U);
    msg.value = 0.509368395926;

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
    msg.setTimeStamp(0.369400533842);
    msg.setSource(7473U);
    msg.setSourceEntity(175U);
    msg.setDestination(21490U);
    msg.setDestinationEntity(135U);
    msg.value = 0.695785612251;

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
    msg.setTimeStamp(0.123627980732);
    msg.setSource(8272U);
    msg.setSourceEntity(139U);
    msg.setDestination(11427U);
    msg.setDestinationEntity(111U);
    msg.value = 0.0280737297885;

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
    msg.setTimeStamp(0.544647969404);
    msg.setSource(7390U);
    msg.setSourceEntity(62U);
    msg.setDestination(12591U);
    msg.setDestinationEntity(83U);
    msg.value = 0.965749348943;

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
    msg.setTimeStamp(0.347773706099);
    msg.setSource(61687U);
    msg.setSourceEntity(102U);
    msg.setDestination(31381U);
    msg.setDestinationEntity(81U);
    msg.value = 0.77745411465;

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
    msg.setTimeStamp(0.986772572767);
    msg.setSource(7436U);
    msg.setSourceEntity(234U);
    msg.setDestination(19105U);
    msg.setDestinationEntity(88U);
    msg.value = 0.641839406678;

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
    msg.setTimeStamp(0.0191971430714);
    msg.setSource(35911U);
    msg.setSourceEntity(174U);
    msg.setDestination(59698U);
    msg.setDestinationEntity(151U);
    msg.value = 0.0816939062192;

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
    msg.setTimeStamp(0.0380586386848);
    msg.setSource(20532U);
    msg.setSourceEntity(75U);
    msg.setDestination(30741U);
    msg.setDestinationEntity(168U);
    msg.value = 0.95009770204;

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
    msg.setTimeStamp(0.751168946719);
    msg.setSource(9522U);
    msg.setSourceEntity(158U);
    msg.setDestination(47559U);
    msg.setDestinationEntity(68U);
    msg.value = 0.439901571376;

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
    msg.setTimeStamp(0.49048870227);
    msg.setSource(15557U);
    msg.setSourceEntity(69U);
    msg.setDestination(25677U);
    msg.setDestinationEntity(160U);
    msg.value = 0.60521298708;

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
    msg.setTimeStamp(0.690246598105);
    msg.setSource(52874U);
    msg.setSourceEntity(188U);
    msg.setDestination(47933U);
    msg.setDestinationEntity(13U);
    msg.value = 0.516010060572;

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
    msg.setTimeStamp(0.942119645753);
    msg.setSource(49755U);
    msg.setSourceEntity(197U);
    msg.setDestination(3029U);
    msg.setDestinationEntity(191U);
    msg.value = 0.120262810214;

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
    msg.setTimeStamp(0.099089837999);
    msg.setSource(57827U);
    msg.setSourceEntity(171U);
    msg.setDestination(58152U);
    msg.setDestinationEntity(132U);
    msg.value = 0.101828205866;

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
    msg.setTimeStamp(0.559849723462);
    msg.setSource(14860U);
    msg.setSourceEntity(68U);
    msg.setDestination(22744U);
    msg.setDestinationEntity(28U);
    msg.value = 0.70004707177;

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
    msg.setTimeStamp(0.0865474764754);
    msg.setSource(62675U);
    msg.setSourceEntity(69U);
    msg.setDestination(20853U);
    msg.setDestinationEntity(168U);
    msg.value = 0.542754332353;

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
    msg.setTimeStamp(0.0261452396137);
    msg.setSource(21888U);
    msg.setSourceEntity(48U);
    msg.setDestination(51451U);
    msg.setDestinationEntity(0U);
    msg.value = 0.270227904024;

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
    msg.setTimeStamp(0.0904309638178);
    msg.setSource(52087U);
    msg.setSourceEntity(91U);
    msg.setDestination(11524U);
    msg.setDestinationEntity(53U);
    msg.validity = 23854U;
    msg.type = 145U;
    msg.tow = 2202633860U;
    msg.base_lat = 0.107553955828;
    msg.base_lon = 0.246460327376;
    msg.base_height = 0.900138650205;
    msg.n = 0.19177527599;
    msg.e = 0.316762873059;
    msg.d = 0.271500120033;
    msg.v_n = 0.901101463505;
    msg.v_e = 0.12088835836;
    msg.v_d = 0.258071312365;
    msg.satellites = 156U;
    msg.iar_hyp = 42005U;
    msg.iar_ratio = 0.177315708919;

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
    msg.setTimeStamp(0.433902407902);
    msg.setSource(41348U);
    msg.setSourceEntity(178U);
    msg.setDestination(17301U);
    msg.setDestinationEntity(221U);
    msg.validity = 37990U;
    msg.type = 241U;
    msg.tow = 1392969527U;
    msg.base_lat = 0.375777085996;
    msg.base_lon = 0.69929522385;
    msg.base_height = 0.271820531814;
    msg.n = 0.451115748143;
    msg.e = 0.288956372162;
    msg.d = 0.0829254982575;
    msg.v_n = 0.968241677908;
    msg.v_e = 0.895277922017;
    msg.v_d = 0.232309769562;
    msg.satellites = 194U;
    msg.iar_hyp = 11664U;
    msg.iar_ratio = 0.797523953723;

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
    msg.setTimeStamp(0.378475218345);
    msg.setSource(52480U);
    msg.setSourceEntity(232U);
    msg.setDestination(46020U);
    msg.setDestinationEntity(21U);
    msg.validity = 17148U;
    msg.type = 212U;
    msg.tow = 1953895186U;
    msg.base_lat = 0.262666582837;
    msg.base_lon = 0.00702756542098;
    msg.base_height = 0.980966320913;
    msg.n = 0.461529424658;
    msg.e = 0.916620585932;
    msg.d = 0.177636843161;
    msg.v_n = 0.560350905606;
    msg.v_e = 0.18633625047;
    msg.v_d = 0.526831254942;
    msg.satellites = 52U;
    msg.iar_hyp = 32971U;
    msg.iar_ratio = 0.784104350861;

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
    msg.setTimeStamp(0.672050002828);
    msg.setSource(63037U);
    msg.setSourceEntity(164U);
    msg.setDestination(44693U);
    msg.setDestinationEntity(91U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.333140016777;
    tmp_msg_0.lon = 0.285231227745;
    tmp_msg_0.height = 0.680653547796;
    tmp_msg_0.x = 0.655140867006;
    tmp_msg_0.y = 0.0721516800851;
    tmp_msg_0.z = 0.465578748386;
    tmp_msg_0.phi = 0.797430182889;
    tmp_msg_0.theta = 0.391041793295;
    tmp_msg_0.psi = 0.646499379423;
    tmp_msg_0.u = 0.0876925719868;
    tmp_msg_0.v = 0.766015327682;
    tmp_msg_0.w = 0.783476381121;
    tmp_msg_0.vx = 0.832042397196;
    tmp_msg_0.vy = 0.297027715221;
    tmp_msg_0.vz = 0.3504383844;
    tmp_msg_0.p = 0.832715235598;
    tmp_msg_0.q = 0.134322105363;
    tmp_msg_0.r = 0.6574519996;
    tmp_msg_0.depth = 0.87793070383;
    tmp_msg_0.alt = 0.623051327645;
    msg.state.set(tmp_msg_0);
    msg.type = 144U;

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
    msg.setTimeStamp(0.148908291959);
    msg.setSource(2743U);
    msg.setSourceEntity(197U);
    msg.setDestination(9952U);
    msg.setDestinationEntity(28U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.464160446299;
    tmp_msg_0.lon = 0.551573226524;
    tmp_msg_0.height = 0.227640404954;
    tmp_msg_0.x = 0.282472917362;
    tmp_msg_0.y = 0.0562284450848;
    tmp_msg_0.z = 0.526837953194;
    tmp_msg_0.phi = 0.066363747781;
    tmp_msg_0.theta = 0.714796694142;
    tmp_msg_0.psi = 0.254955676494;
    tmp_msg_0.u = 0.0630716259103;
    tmp_msg_0.v = 0.298372544858;
    tmp_msg_0.w = 0.225774773312;
    tmp_msg_0.vx = 0.740815486663;
    tmp_msg_0.vy = 0.639589029525;
    tmp_msg_0.vz = 0.707457406945;
    tmp_msg_0.p = 0.157464815165;
    tmp_msg_0.q = 0.0181671374425;
    tmp_msg_0.r = 0.895755611607;
    tmp_msg_0.depth = 0.868843373861;
    tmp_msg_0.alt = 0.454538001107;
    msg.state.set(tmp_msg_0);
    msg.type = 106U;

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
    msg.setTimeStamp(0.207481920961);
    msg.setSource(20714U);
    msg.setSourceEntity(215U);
    msg.setDestination(2162U);
    msg.setDestinationEntity(173U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0867075803643;
    tmp_msg_0.lon = 0.185672639952;
    tmp_msg_0.height = 0.865592773868;
    tmp_msg_0.x = 0.023169790161;
    tmp_msg_0.y = 0.64020583605;
    tmp_msg_0.z = 0.370497799419;
    tmp_msg_0.phi = 0.0465599409897;
    tmp_msg_0.theta = 0.781739725672;
    tmp_msg_0.psi = 0.112388730798;
    tmp_msg_0.u = 0.514312415755;
    tmp_msg_0.v = 0.199335984096;
    tmp_msg_0.w = 0.401480938113;
    tmp_msg_0.vx = 0.969376594582;
    tmp_msg_0.vy = 0.132421756007;
    tmp_msg_0.vz = 0.306771594538;
    tmp_msg_0.p = 0.719437846973;
    tmp_msg_0.q = 0.798530385287;
    tmp_msg_0.r = 0.832889703214;
    tmp_msg_0.depth = 0.76512098405;
    tmp_msg_0.alt = 0.654488137984;
    msg.state.set(tmp_msg_0);
    msg.type = 96U;

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
    msg.setTimeStamp(0.72859275002);
    msg.setSource(10940U);
    msg.setSourceEntity(207U);
    msg.setDestination(62700U);
    msg.setDestinationEntity(104U);
    msg.value = 0.0844156199744;

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
    msg.setTimeStamp(0.39542828529);
    msg.setSource(46323U);
    msg.setSourceEntity(117U);
    msg.setDestination(47928U);
    msg.setDestinationEntity(228U);
    msg.value = 0.657542918746;

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
    msg.setTimeStamp(0.82741111613);
    msg.setSource(86U);
    msg.setSourceEntity(253U);
    msg.setDestination(37084U);
    msg.setDestinationEntity(44U);
    msg.value = 0.399652923999;

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
    msg.setTimeStamp(0.131098484907);
    msg.setSource(48453U);
    msg.setSourceEntity(59U);
    msg.setDestination(10944U);
    msg.setDestinationEntity(202U);
    msg.value = 0.229012635852;

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
    msg.setTimeStamp(0.401191079412);
    msg.setSource(56721U);
    msg.setSourceEntity(251U);
    msg.setDestination(62776U);
    msg.setDestinationEntity(75U);
    msg.value = 0.323865532749;

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
    msg.setTimeStamp(0.772618925237);
    msg.setSource(23551U);
    msg.setSourceEntity(231U);
    msg.setDestination(50622U);
    msg.setDestinationEntity(220U);
    msg.value = 0.940069483981;

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
    msg.setTimeStamp(0.19389574122);
    msg.setSource(31523U);
    msg.setSourceEntity(234U);
    msg.setDestination(22034U);
    msg.setDestinationEntity(100U);
    msg.value = 0.233759965404;

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
    msg.setTimeStamp(0.895538990816);
    msg.setSource(37424U);
    msg.setSourceEntity(178U);
    msg.setDestination(27730U);
    msg.setDestinationEntity(199U);
    msg.value = 0.726679909786;

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
    msg.setTimeStamp(0.305153794258);
    msg.setSource(52669U);
    msg.setSourceEntity(245U);
    msg.setDestination(60U);
    msg.setDestinationEntity(34U);
    msg.value = 0.107028423816;

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
    msg.setTimeStamp(0.101700662977);
    msg.setSource(35581U);
    msg.setSourceEntity(37U);
    msg.setDestination(4396U);
    msg.setDestinationEntity(122U);
    msg.value = 0.904034659141;

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
    msg.setTimeStamp(0.332813552049);
    msg.setSource(65117U);
    msg.setSourceEntity(194U);
    msg.setDestination(12369U);
    msg.setDestinationEntity(183U);
    msg.value = 0.402755745351;

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
    msg.setTimeStamp(0.500373887307);
    msg.setSource(30120U);
    msg.setSourceEntity(81U);
    msg.setDestination(28706U);
    msg.setDestinationEntity(11U);
    msg.value = 0.101206524806;

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
    msg.setTimeStamp(0.00339805042779);
    msg.setSource(31797U);
    msg.setSourceEntity(221U);
    msg.setDestination(31519U);
    msg.setDestinationEntity(7U);
    msg.value = 0.592744653745;

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
    msg.setTimeStamp(0.432995192632);
    msg.setSource(35931U);
    msg.setSourceEntity(96U);
    msg.setDestination(1795U);
    msg.setDestinationEntity(73U);
    msg.value = 0.510640138308;

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
    msg.setTimeStamp(0.295501342472);
    msg.setSource(11735U);
    msg.setSourceEntity(46U);
    msg.setDestination(332U);
    msg.setDestinationEntity(100U);
    msg.value = 0.459119996544;

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
    msg.setTimeStamp(0.610638454472);
    msg.setSource(27338U);
    msg.setSourceEntity(113U);
    msg.setDestination(6371U);
    msg.setDestinationEntity(244U);
    msg.id = 118U;
    msg.zoom = 120U;
    msg.action = 181U;

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
    msg.setTimeStamp(0.284307027619);
    msg.setSource(19554U);
    msg.setSourceEntity(205U);
    msg.setDestination(20798U);
    msg.setDestinationEntity(0U);
    msg.id = 152U;
    msg.zoom = 38U;
    msg.action = 49U;

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
    msg.setTimeStamp(0.324626851985);
    msg.setSource(22687U);
    msg.setSourceEntity(71U);
    msg.setDestination(58023U);
    msg.setDestinationEntity(85U);
    msg.id = 243U;
    msg.zoom = 1U;
    msg.action = 91U;

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
    msg.setTimeStamp(0.522398496746);
    msg.setSource(59022U);
    msg.setSourceEntity(237U);
    msg.setDestination(2420U);
    msg.setDestinationEntity(162U);
    msg.id = 22U;
    msg.value = 0.792421985626;

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
    msg.setTimeStamp(0.781581479507);
    msg.setSource(36425U);
    msg.setSourceEntity(20U);
    msg.setDestination(44045U);
    msg.setDestinationEntity(1U);
    msg.id = 59U;
    msg.value = 0.0534374074426;

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
    msg.setTimeStamp(0.279874899798);
    msg.setSource(57450U);
    msg.setSourceEntity(2U);
    msg.setDestination(33968U);
    msg.setDestinationEntity(57U);
    msg.id = 212U;
    msg.value = 0.818263840339;

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
    msg.setTimeStamp(0.562337997646);
    msg.setSource(59835U);
    msg.setSourceEntity(106U);
    msg.setDestination(25802U);
    msg.setDestinationEntity(93U);
    msg.id = 1U;
    msg.value = 0.152788007999;

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
    msg.setTimeStamp(0.0356090819424);
    msg.setSource(6398U);
    msg.setSourceEntity(199U);
    msg.setDestination(59138U);
    msg.setDestinationEntity(199U);
    msg.id = 248U;
    msg.value = 0.944955616301;

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
    msg.setTimeStamp(0.415159240723);
    msg.setSource(30410U);
    msg.setSourceEntity(239U);
    msg.setDestination(42748U);
    msg.setDestinationEntity(138U);
    msg.id = 1U;
    msg.value = 0.395054767306;

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
    msg.setTimeStamp(0.939084882038);
    msg.setSource(17453U);
    msg.setSourceEntity(206U);
    msg.setDestination(3760U);
    msg.setDestinationEntity(3U);
    msg.id = 254U;
    msg.angle = 0.384905895634;

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
    msg.setTimeStamp(0.184683167849);
    msg.setSource(22667U);
    msg.setSourceEntity(152U);
    msg.setDestination(39519U);
    msg.setDestinationEntity(214U);
    msg.id = 95U;
    msg.angle = 0.111879230379;

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
    msg.setTimeStamp(0.747441496583);
    msg.setSource(45841U);
    msg.setSourceEntity(46U);
    msg.setDestination(38386U);
    msg.setDestinationEntity(92U);
    msg.id = 144U;
    msg.angle = 0.627950334039;

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
    msg.setTimeStamp(0.472127686621);
    msg.setSource(26532U);
    msg.setSourceEntity(197U);
    msg.setDestination(47490U);
    msg.setDestinationEntity(81U);
    msg.op = 17U;
    msg.actions.assign("SOGZANILGCSQMTDFRRRLXBEGOHQAYHZDVUHEVWBHVZOWVFDHQEUQAKBMGZJHNJXTIXFFIWJSKDIVUPEPYPYHVYTPUBWNFTBUKOMJRSJFAROYLBNGTZXYNBENFQQVCNCWGAAMPKRFEEGNDJLMHKZLC");

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
    msg.setTimeStamp(0.56184236852);
    msg.setSource(25301U);
    msg.setSourceEntity(224U);
    msg.setDestination(41341U);
    msg.setDestinationEntity(69U);
    msg.op = 17U;
    msg.actions.assign("RGEIKXGPKQCHECHOSDSHQZPFZGWADXHWBAMIYPFJYVNWKBPTLEWQHFRBOANFJJZPQTNALIUFZAZDFJP");

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
    msg.setTimeStamp(0.477096689159);
    msg.setSource(8391U);
    msg.setSourceEntity(102U);
    msg.setDestination(46159U);
    msg.setDestinationEntity(171U);
    msg.op = 189U;
    msg.actions.assign("IERDHZRBGJZQASODBVQYQGAPQRACLSJGWWVWFYMTGUKXRNTBEGZHXKROQND");

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
    msg.setTimeStamp(0.670101690485);
    msg.setSource(38175U);
    msg.setSourceEntity(234U);
    msg.setDestination(2092U);
    msg.setDestinationEntity(56U);
    msg.actions.assign("ELVTXFMDWNAUPBQCGRBIYYRWWZZGSVSKNOTRMDCXLFYMUVBWBBXPDEDYYQNROUQKCF");

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
    msg.setTimeStamp(0.0700196133465);
    msg.setSource(11457U);
    msg.setSourceEntity(244U);
    msg.setDestination(35380U);
    msg.setDestinationEntity(5U);
    msg.actions.assign("UFLVCYQZSUSEFTFIKMXIJYYWMGKJIYLLPMSZNOWD");

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
    msg.setTimeStamp(0.827576695894);
    msg.setSource(45515U);
    msg.setSourceEntity(224U);
    msg.setDestination(36602U);
    msg.setDestinationEntity(138U);
    msg.actions.assign("QPIYLNTHRTTGQUMXQDSLHWTJUVBZIJCGTGVPREMGSYOSSVOWDPDWQBSWHQFJACVPSVCKINWHRJSNRXOVXZVCNZKODWLFSFMINPXYNCJFXBXJNTAZHUAUVUDGEIODCWALKEEBGOORHKIYLLJCPKAYDFJEBPZYYTYNJOISHYERBRFBTEAKDGXMQTPWXUUK");

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
    msg.setTimeStamp(0.394645842948);
    msg.setSource(24457U);
    msg.setSourceEntity(56U);
    msg.setDestination(26732U);
    msg.setDestinationEntity(126U);
    msg.button = 9U;
    msg.value = 64U;

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
    msg.setTimeStamp(0.0338083924168);
    msg.setSource(58067U);
    msg.setSourceEntity(68U);
    msg.setDestination(11267U);
    msg.setDestinationEntity(253U);
    msg.button = 197U;
    msg.value = 12U;

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
    msg.setTimeStamp(0.227803414348);
    msg.setSource(55251U);
    msg.setSourceEntity(233U);
    msg.setDestination(25342U);
    msg.setDestinationEntity(16U);
    msg.button = 137U;
    msg.value = 96U;

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
    msg.setTimeStamp(0.765537047798);
    msg.setSource(11197U);
    msg.setSourceEntity(26U);
    msg.setDestination(2755U);
    msg.setDestinationEntity(87U);
    msg.op = 134U;
    msg.text.assign("VALAUYXDCWJQKOXHQSNXOTBDTGITZDGNDLVZNWSCLEIKPDPPCEHUVPPYUASEZDRDVZPVFGRGLHMCLVQTWLNFYTNSZOFUTNQRUBBZCXTJWJHAXOOFNZAFCPISVANTJHVHJBNHUYMPCCATWGISGYXRKRSLEFMCMZKHGUQOEKIYLHFDMBMLMTONLOYAAWRBIJUXIESVQEUFKBFKMHZUS");

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
    msg.setTimeStamp(0.189521977135);
    msg.setSource(8120U);
    msg.setSourceEntity(122U);
    msg.setDestination(4165U);
    msg.setDestinationEntity(254U);
    msg.op = 68U;
    msg.text.assign("YCUADHXGIUFBJSOSCGKBBKSMTQQPATDNPIHWPFMTZXSUIVIXOXRVEIJJSIMVQHPGJOJLZOYFDRDCMRAYMTNCOMLDRJKSWVUYOPMUQAYEBEDNGMGNIUZTLT");

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
    msg.setTimeStamp(0.660099056843);
    msg.setSource(8373U);
    msg.setSourceEntity(254U);
    msg.setDestination(60765U);
    msg.setDestinationEntity(111U);
    msg.op = 149U;
    msg.text.assign("QTLWSYJDHRYFHZOXIUMZNBRSYHRCNWVIWSTYPEPKKUITSBCBLAICLABNMUSKRQRRUPPIXBWUYYEXZNHUNRKSODQXXEJHELLKSVYMGJVDJNOFMIVGXGFYOSZNRZLUXDKQDMQEIKQUIPGZPXNOLVQHRYPJBFGCHJVAKMOTCDZFIVAZCVAELDCZGDHOQWTPCATMEBJVGAJTOWPWBMIWNZXECWXDHUFAMOWBKHGSTCTTQKDUNFFBMAO");

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
    msg.setTimeStamp(0.501992191683);
    msg.setSource(13496U);
    msg.setSourceEntity(126U);
    msg.setDestination(26895U);
    msg.setDestinationEntity(78U);
    msg.op = 210U;
    msg.time_remain = 0.255463357371;
    msg.sched_time = 0.694725314581;

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
    msg.setTimeStamp(0.281057154052);
    msg.setSource(5841U);
    msg.setSourceEntity(231U);
    msg.setDestination(23322U);
    msg.setDestinationEntity(181U);
    msg.op = 94U;
    msg.time_remain = 0.772237970506;
    msg.sched_time = 0.419012573049;

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
    msg.setTimeStamp(0.134806042972);
    msg.setSource(5347U);
    msg.setSourceEntity(249U);
    msg.setDestination(64496U);
    msg.setDestinationEntity(163U);
    msg.op = 108U;
    msg.time_remain = 0.436960691899;
    msg.sched_time = 0.115618354362;

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
    msg.setTimeStamp(0.255729720042);
    msg.setSource(54590U);
    msg.setSourceEntity(79U);
    msg.setDestination(42817U);
    msg.setDestinationEntity(94U);
    msg.name.assign("GETUQYBIRKQUOYEYLTQEXNIVMKZRQVAHWEWGPLKPNHZUTOCCWDWKYCGRWBAZBITGWASLSTDRDKBDYFNVGUCFFOEINXTPGKDVJBPOICJPHVYXMIKKYSFTWHOSZHYBTSNQLRIHGZSZAFZNMFXLQQSNUPEUCRREJVIODXXLTBPBUVSJC");
    msg.op = 101U;
    msg.sched_time = 0.812067792985;

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
    msg.setTimeStamp(0.595663177418);
    msg.setSource(42170U);
    msg.setSourceEntity(108U);
    msg.setDestination(61719U);
    msg.setDestinationEntity(96U);
    msg.name.assign("QBXONKYNQSPTEYABBNPHEWJBTUHBNTIABJKEPAWERDVCPGOTWKRXHUJBMLZEGFJNBQIFCCQMUVDIMUYOVZAJSWJCOCHRGSNMOZPIGPEGFMWFILHQUYCZEZYRYBLQIXBZSXVFQXZKLDSMKPLFDRSJIAWJDKDCQHCKVUFLVGOJMXQYYXXDUVVUFMIALZMMTTNSHRUEUODVCAACRFHFTSTYGLLDRKXPGOENGJP");
    msg.op = 101U;
    msg.sched_time = 0.410395338198;

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
    msg.setTimeStamp(0.980344829759);
    msg.setSource(30767U);
    msg.setSourceEntity(176U);
    msg.setDestination(30440U);
    msg.setDestinationEntity(237U);
    msg.name.assign("QNGVTHMJNGRHQOUQCCTLPHNSRTGGBNCPMKQGYKDEDROMXJBNXVFVLZFYYEYCTIAEWAIOMEIUMHZOHUATWFSIUCDHXYQDJJRNGBOLCTQRAMSZPSHVMIXINVVTRCZZKDDUGEJYIJBLDJSFWKMXTRGABUMAUKVSJK");
    msg.op = 55U;
    msg.sched_time = 0.270041648736;

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
    msg.setTimeStamp(0.495644233582);
    msg.setSource(61509U);
    msg.setSourceEntity(177U);
    msg.setDestination(17740U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.962956842189);
    msg.setSource(38719U);
    msg.setSourceEntity(213U);
    msg.setDestination(19872U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.283073343389);
    msg.setSource(50029U);
    msg.setSourceEntity(40U);
    msg.setDestination(34352U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.713626755293);
    msg.setSource(17091U);
    msg.setSourceEntity(171U);
    msg.setDestination(57961U);
    msg.setDestinationEntity(112U);
    msg.name.assign("IRTKNKQICIFUMLPZGNBFHIGRRYSRTCTEGHTERIYVHNERYXOJWVCXJWTM");
    msg.state = 230U;

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
    msg.setTimeStamp(0.773056336136);
    msg.setSource(15437U);
    msg.setSourceEntity(78U);
    msg.setDestination(25531U);
    msg.setDestinationEntity(136U);
    msg.name.assign("ZSUUTSFLYBWPQCLCZKRRSHKAVQKXDSOXIWYVOYIVVQVIAMJ");
    msg.state = 96U;

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
    msg.setTimeStamp(0.637325210046);
    msg.setSource(49033U);
    msg.setSourceEntity(117U);
    msg.setDestination(24411U);
    msg.setDestinationEntity(166U);
    msg.name.assign("PJFFXIQNNHFADHWFUWYLZBMOMGYIGKYCJKTQEQIOGZCOXSCMAAFTIWDGBUORKUTWXUDHKMPLVCLSXTJKDHENEHOXGEBKRUQQOJSLBZXMNJZSPNRPMPGQUNNAT");
    msg.state = 179U;

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
    msg.setTimeStamp(0.555950119977);
    msg.setSource(49925U);
    msg.setSourceEntity(104U);
    msg.setDestination(28574U);
    msg.setDestinationEntity(239U);
    msg.name.assign("LMRMNKCIYVAJJJNBNXNUSZKJGGAOKKLILXIKYHEMRWEGIOBBGDLWQFDOSZPOPPDCYRSDHEHVQJHEOIEZDAUWUNTXNTQTVUCCIDMLQOTHLYPFONIKTBMGQFU");
    msg.value = 59U;

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
    msg.setTimeStamp(0.349941893364);
    msg.setSource(4254U);
    msg.setSourceEntity(213U);
    msg.setDestination(282U);
    msg.setDestinationEntity(17U);
    msg.name.assign("QZISHJVGAMCSFLWJAILFPDNBCOWJKZNPEHALBPJYBCQRFHPWPLGSQLDCDCYCUPMSQUQUFTICSIIJSKYUEXTCVXJMPXZULFPKNGQQLRAHHUMXDPBEEIMRIDGRQBEKDXEWIBZAVBSJZKUFHOPUQJUTTMYHMTNJCWVVIXONRXOFRTOYXOQKSHRCVBZEZNZYBHRWOAYJLTDFWONYDMFNSUMTEKGAHXTNYODVAVKEEBVTWGRWAOIGKZLVG");
    msg.value = 32U;

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
    msg.setTimeStamp(0.937219699635);
    msg.setSource(53201U);
    msg.setSourceEntity(36U);
    msg.setDestination(35779U);
    msg.setDestinationEntity(181U);
    msg.name.assign("MNULGARSVRVDUNCVBBBXUSZRPPCTXQWBXMDVMQNLAFEAWTJAYOIAVFKZMCHIIUYWGBHBUOKSYOFHEJHOEQLADQYSIQNWJOZUFKVTATREQHCFOEKHLPZYMDVHZABWLNNFFYXTMZKDERZNBLPYRGAHLPSBKOPHMQCPGCW");
    msg.value = 199U;

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
    msg.setTimeStamp(0.924649220097);
    msg.setSource(15170U);
    msg.setSourceEntity(87U);
    msg.setDestination(60586U);
    msg.setDestinationEntity(149U);
    msg.name.assign("LBDDMQBKRLAKCKDPMZIPZIQVFEGTFFXQSRHVPDKZAHRULYJSUNXFNGXAITBJCOWDMK");

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
    msg.setTimeStamp(0.058435734586);
    msg.setSource(50533U);
    msg.setSourceEntity(198U);
    msg.setDestination(48777U);
    msg.setDestinationEntity(23U);
    msg.name.assign("WWIMQFCEZHXQNFCDCDDGLYGZCWEGRKFLQKTOAWWTNMFZKGNMJPLOWOPDMKXJQOPGRIHHLTRQYAEAQIJYMIXAC");

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
    msg.setTimeStamp(0.762149574521);
    msg.setSource(15863U);
    msg.setSourceEntity(43U);
    msg.setDestination(47832U);
    msg.setDestinationEntity(67U);
    msg.name.assign("DCWIOOXGQPEXPFLUJSQROTGCIKTWRCRGTZWVZQWZYIVNKUMKQ");

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
    msg.setTimeStamp(0.940645183223);
    msg.setSource(17963U);
    msg.setSourceEntity(52U);
    msg.setDestination(50921U);
    msg.setDestinationEntity(231U);
    msg.name.assign("PXXFVCDCSBGGWALNLZMUGAYWCBUIOWRRLOTIPHPINBZZDTSSVHXDPMANRXPHOGAKRDAQYCKZGBVISZUPVQGDNETYAAVFGOWFJYKRAZKQFXTXBOGEHEDLOFQFLQAACYQENMRBURFQGCJYJTJKSUSVICDRKQBNKWSTMIJTPVXWWWZEHPQUHQNNLLFMCTDEWBPMIHPMJBJMHXEOMYVJUNEZJLZIMUYJZVDFDCS");
    msg.value = 178U;

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
    msg.setTimeStamp(0.229749392054);
    msg.setSource(18387U);
    msg.setSourceEntity(184U);
    msg.setDestination(587U);
    msg.setDestinationEntity(253U);
    msg.name.assign("PZLZAZQJBIEAYLQUSXQHLHFKOCZVUUVVRUKJPYRH");
    msg.value = 105U;

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
    msg.setTimeStamp(0.278250787657);
    msg.setSource(46719U);
    msg.setSourceEntity(99U);
    msg.setDestination(54342U);
    msg.setDestinationEntity(129U);
    msg.name.assign("ODHOAZVJDSCOWSYRHVAKNANGYUTLURUDPQPUPPWSDYATHISRRHNJVKFVUXGQBCQMCOHMQILMGWCJBKBDFVVXSPXEMUXQKXVMIFCRELIE");
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
    msg.setTimeStamp(0.333052265952);
    msg.setSource(4751U);
    msg.setSourceEntity(120U);
    msg.setDestination(56162U);
    msg.setDestinationEntity(210U);
    msg.id = 94U;
    msg.period = 1969085117U;
    msg.duty_cycle = 971223137U;

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
    msg.setTimeStamp(0.297359354047);
    msg.setSource(25118U);
    msg.setSourceEntity(126U);
    msg.setDestination(24942U);
    msg.setDestinationEntity(158U);
    msg.id = 5U;
    msg.period = 3632916346U;
    msg.duty_cycle = 4277646335U;

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
    msg.setTimeStamp(0.212465471948);
    msg.setSource(40199U);
    msg.setSourceEntity(176U);
    msg.setDestination(60301U);
    msg.setDestinationEntity(226U);
    msg.id = 56U;
    msg.period = 1334270822U;
    msg.duty_cycle = 473841983U;

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
    msg.setTimeStamp(0.100038886814);
    msg.setSource(25983U);
    msg.setSourceEntity(185U);
    msg.setDestination(10186U);
    msg.setDestinationEntity(160U);
    msg.id = 215U;
    msg.period = 72562472U;
    msg.duty_cycle = 3854238405U;

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
    msg.setTimeStamp(0.682214143862);
    msg.setSource(54276U);
    msg.setSourceEntity(165U);
    msg.setDestination(37133U);
    msg.setDestinationEntity(54U);
    msg.id = 6U;
    msg.period = 1815690055U;
    msg.duty_cycle = 2412885866U;

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
    msg.setTimeStamp(0.639785939523);
    msg.setSource(7998U);
    msg.setSourceEntity(196U);
    msg.setDestination(34322U);
    msg.setDestinationEntity(99U);
    msg.id = 207U;
    msg.period = 1744644571U;
    msg.duty_cycle = 897041814U;

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
    msg.setTimeStamp(0.332630843049);
    msg.setSource(42286U);
    msg.setSourceEntity(126U);
    msg.setDestination(5584U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.400994433316;
    msg.lon = 0.81177053296;
    msg.height = 0.0127615753742;
    msg.x = 0.469797188866;
    msg.y = 0.436624189596;
    msg.z = 0.745809125854;
    msg.phi = 0.814132281226;
    msg.theta = 0.0273341613017;
    msg.psi = 0.518806332681;
    msg.u = 0.972812547465;
    msg.v = 0.868126522014;
    msg.w = 0.717674862215;
    msg.vx = 0.171305153897;
    msg.vy = 0.868126244087;
    msg.vz = 0.0510558626666;
    msg.p = 0.766742586292;
    msg.q = 0.535089857317;
    msg.r = 0.778260270722;
    msg.depth = 0.941515473023;
    msg.alt = 0.296537685772;

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
    msg.setTimeStamp(0.352050525542);
    msg.setSource(55619U);
    msg.setSourceEntity(193U);
    msg.setDestination(17279U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.0564663244745;
    msg.lon = 0.513480365594;
    msg.height = 0.318168565099;
    msg.x = 0.9180554383;
    msg.y = 0.77058227455;
    msg.z = 0.203659127863;
    msg.phi = 0.801368688327;
    msg.theta = 0.396202096193;
    msg.psi = 0.945299114723;
    msg.u = 0.313675403219;
    msg.v = 0.792305611999;
    msg.w = 0.183918658136;
    msg.vx = 0.391654850135;
    msg.vy = 0.26434876367;
    msg.vz = 0.690849914198;
    msg.p = 0.119985608015;
    msg.q = 0.306840739396;
    msg.r = 0.826419908776;
    msg.depth = 0.360560367415;
    msg.alt = 0.62990227222;

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
    msg.setTimeStamp(0.0458918128466);
    msg.setSource(18156U);
    msg.setSourceEntity(226U);
    msg.setDestination(60444U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.18524490407;
    msg.lon = 0.258928815182;
    msg.height = 0.0839459308882;
    msg.x = 0.15863371072;
    msg.y = 0.518454432338;
    msg.z = 0.371222525752;
    msg.phi = 0.627931739271;
    msg.theta = 0.135690573564;
    msg.psi = 0.594067229623;
    msg.u = 0.720326621368;
    msg.v = 0.936370878445;
    msg.w = 0.754568911621;
    msg.vx = 0.150470611732;
    msg.vy = 0.281019765971;
    msg.vz = 0.225890604439;
    msg.p = 0.18039509663;
    msg.q = 0.260255488137;
    msg.r = 0.516329024262;
    msg.depth = 0.713113810495;
    msg.alt = 0.996820498982;

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
    msg.setTimeStamp(0.373199274502);
    msg.setSource(46240U);
    msg.setSourceEntity(201U);
    msg.setDestination(60681U);
    msg.setDestinationEntity(81U);
    msg.x = 0.728055632923;
    msg.y = 0.322249108791;
    msg.z = 0.0212659470416;

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
    msg.setTimeStamp(0.374682071234);
    msg.setSource(49878U);
    msg.setSourceEntity(193U);
    msg.setDestination(53735U);
    msg.setDestinationEntity(118U);
    msg.x = 0.66333863719;
    msg.y = 0.876005058182;
    msg.z = 0.838316583376;

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
    msg.setTimeStamp(0.897928237955);
    msg.setSource(31298U);
    msg.setSourceEntity(252U);
    msg.setDestination(21531U);
    msg.setDestinationEntity(18U);
    msg.x = 0.71632131101;
    msg.y = 0.975902538539;
    msg.z = 0.455395745335;

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
    msg.setTimeStamp(0.891568913673);
    msg.setSource(15472U);
    msg.setSourceEntity(226U);
    msg.setDestination(19312U);
    msg.setDestinationEntity(174U);
    msg.value = 0.377576331451;

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
    msg.setTimeStamp(0.590634433091);
    msg.setSource(4644U);
    msg.setSourceEntity(250U);
    msg.setDestination(32354U);
    msg.setDestinationEntity(164U);
    msg.value = 0.201956961256;

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
    msg.setTimeStamp(0.879794896827);
    msg.setSource(52240U);
    msg.setSourceEntity(219U);
    msg.setDestination(25963U);
    msg.setDestinationEntity(71U);
    msg.value = 0.508868263775;

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
    msg.setTimeStamp(0.486158615001);
    msg.setSource(46794U);
    msg.setSourceEntity(119U);
    msg.setDestination(33517U);
    msg.setDestinationEntity(62U);
    msg.value = 0.881575062105;

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
    msg.setTimeStamp(0.103727793231);
    msg.setSource(34128U);
    msg.setSourceEntity(81U);
    msg.setDestination(37954U);
    msg.setDestinationEntity(63U);
    msg.value = 0.0780690534035;

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
    msg.setTimeStamp(0.604483282202);
    msg.setSource(36565U);
    msg.setSourceEntity(9U);
    msg.setDestination(52977U);
    msg.setDestinationEntity(23U);
    msg.value = 0.530647282875;

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
    msg.setTimeStamp(0.0338541282261);
    msg.setSource(42343U);
    msg.setSourceEntity(201U);
    msg.setDestination(12430U);
    msg.setDestinationEntity(189U);
    msg.x = 0.413304101266;
    msg.y = 0.686607101853;
    msg.z = 0.463265279157;
    msg.phi = 0.644032393076;
    msg.theta = 0.0363921172603;
    msg.psi = 0.0808153644159;
    msg.p = 0.235855827584;
    msg.q = 0.797548733271;
    msg.r = 0.179986329214;
    msg.u = 0.880064667204;
    msg.v = 0.931947052096;
    msg.w = 0.392006758291;
    msg.bias_psi = 0.0219273761772;
    msg.bias_r = 0.850925668342;

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
    msg.setTimeStamp(0.663970892879);
    msg.setSource(28577U);
    msg.setSourceEntity(114U);
    msg.setDestination(37645U);
    msg.setDestinationEntity(207U);
    msg.x = 0.653331629249;
    msg.y = 0.788555663643;
    msg.z = 0.837562565642;
    msg.phi = 0.406857678511;
    msg.theta = 0.152344283234;
    msg.psi = 0.642177534717;
    msg.p = 0.977329826572;
    msg.q = 0.653262397546;
    msg.r = 0.840334849443;
    msg.u = 0.106761108169;
    msg.v = 0.877574386226;
    msg.w = 0.581038665035;
    msg.bias_psi = 0.413907710419;
    msg.bias_r = 0.441742285585;

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
    msg.setTimeStamp(0.31718267513);
    msg.setSource(4144U);
    msg.setSourceEntity(192U);
    msg.setDestination(23903U);
    msg.setDestinationEntity(75U);
    msg.x = 0.481526452901;
    msg.y = 0.691305934085;
    msg.z = 0.818632050315;
    msg.phi = 0.986895373719;
    msg.theta = 0.540944261568;
    msg.psi = 0.989203491739;
    msg.p = 0.888545204545;
    msg.q = 0.456283368636;
    msg.r = 0.00143379875523;
    msg.u = 0.249633184676;
    msg.v = 0.960176379535;
    msg.w = 0.882041348511;
    msg.bias_psi = 0.543484699722;
    msg.bias_r = 0.445398140137;

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
    msg.setTimeStamp(0.0981172356653);
    msg.setSource(40921U);
    msg.setSourceEntity(176U);
    msg.setDestination(58217U);
    msg.setDestinationEntity(226U);
    msg.bias_psi = 0.588401135042;
    msg.bias_r = 0.270091121483;
    msg.cog = 0.470530627231;
    msg.cyaw = 0.717173422886;
    msg.lbl_rej_level = 0.449549353257;
    msg.gps_rej_level = 0.0874761232817;
    msg.custom_x = 0.632004647385;
    msg.custom_y = 0.540281138701;
    msg.custom_z = 0.991257921948;

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
    msg.setTimeStamp(0.168714233875);
    msg.setSource(10088U);
    msg.setSourceEntity(84U);
    msg.setDestination(50822U);
    msg.setDestinationEntity(150U);
    msg.bias_psi = 0.657735961049;
    msg.bias_r = 0.0676216951009;
    msg.cog = 0.208318048933;
    msg.cyaw = 0.964996953816;
    msg.lbl_rej_level = 0.413906407687;
    msg.gps_rej_level = 0.0843744421863;
    msg.custom_x = 0.65569102532;
    msg.custom_y = 0.145804386246;
    msg.custom_z = 0.468490479356;

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
    msg.setTimeStamp(0.050020714426);
    msg.setSource(45343U);
    msg.setSourceEntity(36U);
    msg.setDestination(15833U);
    msg.setDestinationEntity(129U);
    msg.bias_psi = 0.685404494219;
    msg.bias_r = 0.185673548053;
    msg.cog = 0.469127011651;
    msg.cyaw = 0.871012507758;
    msg.lbl_rej_level = 0.856031564176;
    msg.gps_rej_level = 0.444555387617;
    msg.custom_x = 0.574026567728;
    msg.custom_y = 0.27746828023;
    msg.custom_z = 0.845110066284;

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
    msg.setTimeStamp(0.829069988635);
    msg.setSource(38625U);
    msg.setSourceEntity(104U);
    msg.setDestination(1236U);
    msg.setDestinationEntity(234U);
    msg.utc_time = 0.737782537392;
    msg.reason = 160U;

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
    msg.setTimeStamp(0.184834458865);
    msg.setSource(49706U);
    msg.setSourceEntity(99U);
    msg.setDestination(44287U);
    msg.setDestinationEntity(253U);
    msg.utc_time = 0.100648953501;
    msg.reason = 142U;

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
    msg.setTimeStamp(0.927640660471);
    msg.setSource(373U);
    msg.setSourceEntity(34U);
    msg.setDestination(3659U);
    msg.setDestinationEntity(183U);
    msg.utc_time = 0.813239017718;
    msg.reason = 74U;

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
    msg.setTimeStamp(0.930108809039);
    msg.setSource(10727U);
    msg.setSourceEntity(190U);
    msg.setDestination(37011U);
    msg.setDestinationEntity(146U);
    msg.id = 16U;
    msg.range = 0.56741595875;
    msg.acceptance = 222U;

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
    msg.setTimeStamp(0.351966704064);
    msg.setSource(24557U);
    msg.setSourceEntity(78U);
    msg.setDestination(10059U);
    msg.setDestinationEntity(221U);
    msg.id = 16U;
    msg.range = 0.0907969526184;
    msg.acceptance = 236U;

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
    msg.setTimeStamp(0.716726465279);
    msg.setSource(9209U);
    msg.setSourceEntity(174U);
    msg.setDestination(19999U);
    msg.setDestinationEntity(21U);
    msg.id = 181U;
    msg.range = 0.838452182312;
    msg.acceptance = 50U;

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
    msg.setTimeStamp(0.937672259713);
    msg.setSource(49005U);
    msg.setSourceEntity(54U);
    msg.setDestination(9099U);
    msg.setDestinationEntity(160U);
    msg.type = 40U;
    msg.reason = 231U;
    msg.value = 0.146495867782;
    msg.timestep = 0.128385725226;

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
    msg.setTimeStamp(0.158488689728);
    msg.setSource(55771U);
    msg.setSourceEntity(139U);
    msg.setDestination(29831U);
    msg.setDestinationEntity(26U);
    msg.type = 89U;
    msg.reason = 192U;
    msg.value = 0.370262435636;
    msg.timestep = 0.815697114966;

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
    msg.setTimeStamp(0.413681268405);
    msg.setSource(45434U);
    msg.setSourceEntity(205U);
    msg.setDestination(4413U);
    msg.setDestinationEntity(3U);
    msg.type = 190U;
    msg.reason = 103U;
    msg.value = 0.131617832579;
    msg.timestep = 0.0284124610167;

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
    msg.setTimeStamp(0.611392945126);
    msg.setSource(58006U);
    msg.setSourceEntity(79U);
    msg.setDestination(46846U);
    msg.setDestinationEntity(43U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RKXGRDESIYJPEGRQPNIZATHVESCVGUIADIUHHMBFCDJLHRBBFFEOOLMNZAJYWKTDUVZCMTJLVYBCOISYQPFVLC");
    tmp_msg_0.lat = 0.137904819689;
    tmp_msg_0.lon = 0.12920824886;
    tmp_msg_0.depth = 0.159584585026;
    tmp_msg_0.query_channel = 169U;
    tmp_msg_0.reply_channel = 91U;
    tmp_msg_0.transponder_delay = 89U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.353327263032;
    msg.y = 0.666317675205;
    msg.var_x = 0.384447528243;
    msg.var_y = 0.495277681962;
    msg.distance = 0.166447404608;

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
    msg.setTimeStamp(0.00562300052869);
    msg.setSource(6474U);
    msg.setSourceEntity(4U);
    msg.setDestination(55773U);
    msg.setDestinationEntity(172U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XPHKVADSHNAIWOGVFLJTBRMZADRTWUZVSVJQUSXKYGDBIIQUFLCDDDQCTDRGAWPEZZSMYSXKOXBKHGJPQIFEFKYTB");
    tmp_msg_0.lat = 0.529733139643;
    tmp_msg_0.lon = 0.327239423726;
    tmp_msg_0.depth = 0.516558015093;
    tmp_msg_0.query_channel = 4U;
    tmp_msg_0.reply_channel = 91U;
    tmp_msg_0.transponder_delay = 242U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.497245098498;
    msg.y = 0.299639734367;
    msg.var_x = 0.230979791788;
    msg.var_y = 0.48821310237;
    msg.distance = 0.745354210069;

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
    msg.setTimeStamp(0.673857656394);
    msg.setSource(39579U);
    msg.setSourceEntity(142U);
    msg.setDestination(49722U);
    msg.setDestinationEntity(104U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PETYTIDPJLOSWBJUZBEZGXFCDGUPMNNHOUHEQOQMEXF");
    tmp_msg_0.lat = 0.141959160947;
    tmp_msg_0.lon = 0.326714875623;
    tmp_msg_0.depth = 0.96239915484;
    tmp_msg_0.query_channel = 203U;
    tmp_msg_0.reply_channel = 236U;
    tmp_msg_0.transponder_delay = 142U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.352812703852;
    msg.y = 0.776606446162;
    msg.var_x = 0.0180564227015;
    msg.var_y = 0.997255541294;
    msg.distance = 0.0959514315037;

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
    msg.setTimeStamp(0.218006986906);
    msg.setSource(52413U);
    msg.setSourceEntity(114U);
    msg.setDestination(57690U);
    msg.setDestinationEntity(28U);
    msg.state = 72U;

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
    msg.setTimeStamp(0.0538546030895);
    msg.setSource(8555U);
    msg.setSourceEntity(164U);
    msg.setDestination(36648U);
    msg.setDestinationEntity(12U);
    msg.state = 221U;

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
    msg.setTimeStamp(0.911003678904);
    msg.setSource(50078U);
    msg.setSourceEntity(170U);
    msg.setDestination(47361U);
    msg.setDestinationEntity(57U);
    msg.state = 108U;

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
    msg.setTimeStamp(0.0042024958454);
    msg.setSource(43399U);
    msg.setSourceEntity(105U);
    msg.setDestination(11901U);
    msg.setDestinationEntity(88U);
    msg.x = 0.527205995784;
    msg.y = 0.432726798919;
    msg.z = 0.483757433532;

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
    msg.setTimeStamp(0.33367450905);
    msg.setSource(34368U);
    msg.setSourceEntity(42U);
    msg.setDestination(14984U);
    msg.setDestinationEntity(250U);
    msg.x = 0.893005462704;
    msg.y = 0.0425509691272;
    msg.z = 0.108465063853;

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
    msg.setTimeStamp(0.422133967202);
    msg.setSource(13556U);
    msg.setSourceEntity(78U);
    msg.setDestination(45221U);
    msg.setDestinationEntity(177U);
    msg.x = 0.070636533244;
    msg.y = 0.916907219819;
    msg.z = 0.0655159816092;

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
    msg.setTimeStamp(0.781674040966);
    msg.setSource(38677U);
    msg.setSourceEntity(67U);
    msg.setDestination(25128U);
    msg.setDestinationEntity(15U);
    msg.va = 0.00728214060746;
    msg.aoa = 0.0650911675072;
    msg.ssa = 0.6436916773;

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
    msg.setTimeStamp(0.800442812337);
    msg.setSource(39093U);
    msg.setSourceEntity(162U);
    msg.setDestination(3306U);
    msg.setDestinationEntity(43U);
    msg.va = 0.658440359618;
    msg.aoa = 0.375064888969;
    msg.ssa = 0.553336574544;

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
    msg.setTimeStamp(0.719672956147);
    msg.setSource(17770U);
    msg.setSourceEntity(63U);
    msg.setDestination(19754U);
    msg.setDestinationEntity(72U);
    msg.va = 0.703101257591;
    msg.aoa = 0.646629756078;
    msg.ssa = 0.599198153104;

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
    msg.setTimeStamp(0.124021607063);
    msg.setSource(59932U);
    msg.setSourceEntity(0U);
    msg.setDestination(25549U);
    msg.setDestinationEntity(59U);
    msg.value = 0.630249842513;

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
    msg.setTimeStamp(0.815005575819);
    msg.setSource(23934U);
    msg.setSourceEntity(163U);
    msg.setDestination(20319U);
    msg.setDestinationEntity(115U);
    msg.value = 0.920892406795;

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
    msg.setTimeStamp(0.814613593872);
    msg.setSource(26425U);
    msg.setSourceEntity(86U);
    msg.setDestination(54322U);
    msg.setDestinationEntity(22U);
    msg.value = 0.432420214539;

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
    msg.setTimeStamp(0.60131140385);
    msg.setSource(10536U);
    msg.setSourceEntity(31U);
    msg.setDestination(64192U);
    msg.setDestinationEntity(87U);
    msg.value = 0.06734414371;
    msg.z_units = 241U;

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
    msg.setTimeStamp(0.278089681143);
    msg.setSource(40783U);
    msg.setSourceEntity(218U);
    msg.setDestination(15327U);
    msg.setDestinationEntity(232U);
    msg.value = 0.973841345108;
    msg.z_units = 224U;

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
    msg.setTimeStamp(0.787123184329);
    msg.setSource(41435U);
    msg.setSourceEntity(57U);
    msg.setDestination(9675U);
    msg.setDestinationEntity(228U);
    msg.value = 0.911852803925;
    msg.z_units = 232U;

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
    msg.setTimeStamp(0.832637201193);
    msg.setSource(4219U);
    msg.setSourceEntity(102U);
    msg.setDestination(28166U);
    msg.setDestinationEntity(111U);
    msg.value = 0.64845114873;
    msg.speed_units = 105U;

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
    msg.setTimeStamp(0.702134898832);
    msg.setSource(57848U);
    msg.setSourceEntity(108U);
    msg.setDestination(7541U);
    msg.setDestinationEntity(0U);
    msg.value = 0.986160323985;
    msg.speed_units = 243U;

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
    msg.setTimeStamp(0.498164434401);
    msg.setSource(46437U);
    msg.setSourceEntity(125U);
    msg.setDestination(51650U);
    msg.setDestinationEntity(69U);
    msg.value = 0.791174830335;
    msg.speed_units = 71U;

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
    msg.setTimeStamp(0.21130289987);
    msg.setSource(31626U);
    msg.setSourceEntity(120U);
    msg.setDestination(31789U);
    msg.setDestinationEntity(217U);
    msg.value = 0.85870609813;

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
    msg.setTimeStamp(0.533817020284);
    msg.setSource(38126U);
    msg.setSourceEntity(249U);
    msg.setDestination(4655U);
    msg.setDestinationEntity(153U);
    msg.value = 0.925381638799;

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
    msg.setTimeStamp(0.663396981475);
    msg.setSource(60029U);
    msg.setSourceEntity(231U);
    msg.setDestination(42796U);
    msg.setDestinationEntity(41U);
    msg.value = 0.374964892238;

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
    msg.setTimeStamp(0.82207925987);
    msg.setSource(24129U);
    msg.setSourceEntity(212U);
    msg.setDestination(4267U);
    msg.setDestinationEntity(14U);
    msg.value = 0.109564013868;

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
    msg.setTimeStamp(0.344157581541);
    msg.setSource(32739U);
    msg.setSourceEntity(107U);
    msg.setDestination(32268U);
    msg.setDestinationEntity(104U);
    msg.value = 0.288955342803;

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
    msg.setTimeStamp(0.885548422961);
    msg.setSource(48613U);
    msg.setSourceEntity(167U);
    msg.setDestination(5140U);
    msg.setDestinationEntity(9U);
    msg.value = 0.946164133095;

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
    msg.setTimeStamp(0.616450911404);
    msg.setSource(34876U);
    msg.setSourceEntity(13U);
    msg.setDestination(6346U);
    msg.setDestinationEntity(101U);
    msg.value = 0.303720541266;

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
    msg.setTimeStamp(0.149636582623);
    msg.setSource(33210U);
    msg.setSourceEntity(68U);
    msg.setDestination(692U);
    msg.setDestinationEntity(176U);
    msg.value = 0.683463289001;

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
    msg.setTimeStamp(0.280281412545);
    msg.setSource(23355U);
    msg.setSourceEntity(251U);
    msg.setDestination(28602U);
    msg.setDestinationEntity(16U);
    msg.value = 0.944627703325;

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
    msg.setTimeStamp(0.885865750466);
    msg.setSource(37995U);
    msg.setSourceEntity(54U);
    msg.setDestination(31880U);
    msg.setDestinationEntity(83U);
    msg.path_ref = 3307673115U;
    msg.start_lat = 0.81417615486;
    msg.start_lon = 0.421434802599;
    msg.start_z = 0.377662399518;
    msg.start_z_units = 128U;
    msg.end_lat = 0.785408427365;
    msg.end_lon = 0.101375093694;
    msg.end_z = 0.235831143418;
    msg.end_z_units = 201U;
    msg.speed = 0.40048875339;
    msg.speed_units = 189U;
    msg.lradius = 0.475572395731;
    msg.flags = 55U;

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
    msg.setTimeStamp(0.446558994909);
    msg.setSource(63547U);
    msg.setSourceEntity(110U);
    msg.setDestination(39844U);
    msg.setDestinationEntity(141U);
    msg.path_ref = 1078060281U;
    msg.start_lat = 0.439224934711;
    msg.start_lon = 0.0801713490167;
    msg.start_z = 0.75458129731;
    msg.start_z_units = 112U;
    msg.end_lat = 0.858782581204;
    msg.end_lon = 0.302431852946;
    msg.end_z = 0.622986975955;
    msg.end_z_units = 64U;
    msg.speed = 0.348308946143;
    msg.speed_units = 173U;
    msg.lradius = 0.0311688756823;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.140751251503);
    msg.setSource(28957U);
    msg.setSourceEntity(78U);
    msg.setDestination(13220U);
    msg.setDestinationEntity(0U);
    msg.path_ref = 900739787U;
    msg.start_lat = 0.66684823021;
    msg.start_lon = 0.211385115627;
    msg.start_z = 0.356794140203;
    msg.start_z_units = 94U;
    msg.end_lat = 0.185746503357;
    msg.end_lon = 0.520132697752;
    msg.end_z = 0.282800964833;
    msg.end_z_units = 20U;
    msg.speed = 0.589569233402;
    msg.speed_units = 50U;
    msg.lradius = 0.943824033927;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.25532873075);
    msg.setSource(57299U);
    msg.setSourceEntity(39U);
    msg.setDestination(4765U);
    msg.setDestinationEntity(87U);
    msg.x = 0.633235027426;
    msg.y = 0.25247579227;
    msg.z = 0.246563978916;
    msg.k = 0.0281137828334;
    msg.m = 0.125090530901;
    msg.n = 0.790199320913;
    msg.flags = 39U;

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
    msg.setTimeStamp(0.864651478401);
    msg.setSource(29505U);
    msg.setSourceEntity(26U);
    msg.setDestination(42281U);
    msg.setDestinationEntity(110U);
    msg.x = 0.959517194363;
    msg.y = 0.413328393814;
    msg.z = 0.354302799423;
    msg.k = 0.335474523962;
    msg.m = 0.138180752658;
    msg.n = 0.524946011042;
    msg.flags = 155U;

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
    msg.setTimeStamp(0.518745438659);
    msg.setSource(4269U);
    msg.setSourceEntity(153U);
    msg.setDestination(57147U);
    msg.setDestinationEntity(24U);
    msg.x = 0.856331349722;
    msg.y = 0.231449674535;
    msg.z = 0.0971706091884;
    msg.k = 0.247973290668;
    msg.m = 0.629189807766;
    msg.n = 0.670091475116;
    msg.flags = 232U;

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
    msg.setTimeStamp(0.0452215401905);
    msg.setSource(52209U);
    msg.setSourceEntity(197U);
    msg.setDestination(14698U);
    msg.setDestinationEntity(138U);
    msg.value = 0.300347850659;

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
    msg.setTimeStamp(0.665842599437);
    msg.setSource(28526U);
    msg.setSourceEntity(163U);
    msg.setDestination(3807U);
    msg.setDestinationEntity(137U);
    msg.value = 0.941635364306;

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
    msg.setTimeStamp(0.784279469648);
    msg.setSource(7591U);
    msg.setSourceEntity(59U);
    msg.setDestination(40396U);
    msg.setDestinationEntity(95U);
    msg.value = 0.57664704166;

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
    msg.setTimeStamp(0.963533940244);
    msg.setSource(19762U);
    msg.setSourceEntity(158U);
    msg.setDestination(36479U);
    msg.setDestinationEntity(79U);
    msg.u = 0.196633522455;
    msg.v = 0.0491221316761;
    msg.w = 0.377344880242;
    msg.p = 0.325244746035;
    msg.q = 0.220465759146;
    msg.r = 0.977772703648;
    msg.flags = 30U;

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
    msg.setTimeStamp(0.336329835559);
    msg.setSource(7818U);
    msg.setSourceEntity(210U);
    msg.setDestination(46734U);
    msg.setDestinationEntity(79U);
    msg.u = 0.211926207798;
    msg.v = 0.541637295125;
    msg.w = 0.615061116474;
    msg.p = 0.273805185326;
    msg.q = 0.757120617522;
    msg.r = 0.292423920097;
    msg.flags = 93U;

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
    msg.setTimeStamp(0.954052519678);
    msg.setSource(19426U);
    msg.setSourceEntity(192U);
    msg.setDestination(39039U);
    msg.setDestinationEntity(247U);
    msg.u = 0.439623172454;
    msg.v = 0.537569820584;
    msg.w = 0.241228188162;
    msg.p = 0.0782631219404;
    msg.q = 0.946028032484;
    msg.r = 0.415750974544;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.779653381907);
    msg.setSource(4779U);
    msg.setSourceEntity(246U);
    msg.setDestination(11184U);
    msg.setDestinationEntity(81U);
    msg.path_ref = 2928806329U;
    msg.start_lat = 0.637260511975;
    msg.start_lon = 0.404327806753;
    msg.start_z = 0.485960555754;
    msg.start_z_units = 244U;
    msg.end_lat = 0.332676985526;
    msg.end_lon = 0.176409958622;
    msg.end_z = 0.771518341457;
    msg.end_z_units = 142U;
    msg.lradius = 0.80439852906;
    msg.flags = 98U;
    msg.x = 0.444310045876;
    msg.y = 0.499743209437;
    msg.z = 0.109487977093;
    msg.vx = 0.855358558175;
    msg.vy = 0.727401456705;
    msg.vz = 0.0197119502922;
    msg.course_error = 0.942266235977;
    msg.eta = 42938U;

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
    msg.setTimeStamp(0.746334011354);
    msg.setSource(2608U);
    msg.setSourceEntity(236U);
    msg.setDestination(45461U);
    msg.setDestinationEntity(244U);
    msg.path_ref = 43002999U;
    msg.start_lat = 0.250092984092;
    msg.start_lon = 0.185551327502;
    msg.start_z = 0.833082063665;
    msg.start_z_units = 228U;
    msg.end_lat = 0.0551734078043;
    msg.end_lon = 0.238758073445;
    msg.end_z = 0.647609496155;
    msg.end_z_units = 122U;
    msg.lradius = 0.307965107951;
    msg.flags = 161U;
    msg.x = 0.467593435593;
    msg.y = 0.643900509062;
    msg.z = 0.309550889021;
    msg.vx = 0.251982796057;
    msg.vy = 0.682565623663;
    msg.vz = 0.694648801488;
    msg.course_error = 0.31809804056;
    msg.eta = 36504U;

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
    msg.setTimeStamp(0.746058201752);
    msg.setSource(35774U);
    msg.setSourceEntity(15U);
    msg.setDestination(55713U);
    msg.setDestinationEntity(70U);
    msg.path_ref = 3480523623U;
    msg.start_lat = 0.877457153139;
    msg.start_lon = 0.230327098466;
    msg.start_z = 0.736997603215;
    msg.start_z_units = 85U;
    msg.end_lat = 0.70271094065;
    msg.end_lon = 0.546226298164;
    msg.end_z = 0.0369704971844;
    msg.end_z_units = 21U;
    msg.lradius = 0.118782271026;
    msg.flags = 168U;
    msg.x = 0.145450925748;
    msg.y = 0.399059333165;
    msg.z = 0.636379731139;
    msg.vx = 0.878802533737;
    msg.vy = 0.727855455846;
    msg.vz = 0.438737408974;
    msg.course_error = 0.292692893306;
    msg.eta = 28548U;

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
    msg.setTimeStamp(0.899439518714);
    msg.setSource(17814U);
    msg.setSourceEntity(105U);
    msg.setDestination(50575U);
    msg.setDestinationEntity(180U);
    msg.k = 0.626266943742;
    msg.m = 0.109615807512;
    msg.n = 0.42428210416;

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
    msg.setTimeStamp(0.71698528001);
    msg.setSource(9709U);
    msg.setSourceEntity(146U);
    msg.setDestination(54969U);
    msg.setDestinationEntity(59U);
    msg.k = 0.356068405107;
    msg.m = 0.785432899809;
    msg.n = 0.368583857571;

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
    msg.setTimeStamp(0.507402813224);
    msg.setSource(63638U);
    msg.setSourceEntity(211U);
    msg.setDestination(28689U);
    msg.setDestinationEntity(188U);
    msg.k = 0.544814970547;
    msg.m = 0.341066714465;
    msg.n = 0.713416018541;

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
    msg.setTimeStamp(0.681199666227);
    msg.setSource(6758U);
    msg.setSourceEntity(91U);
    msg.setDestination(28179U);
    msg.setDestinationEntity(46U);
    msg.p = 0.269845071224;
    msg.i = 0.686353932394;
    msg.d = 0.160115824364;
    msg.a = 0.642091565055;

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
    msg.setTimeStamp(0.313357552479);
    msg.setSource(63892U);
    msg.setSourceEntity(69U);
    msg.setDestination(34937U);
    msg.setDestinationEntity(95U);
    msg.p = 0.485453362902;
    msg.i = 0.721669965105;
    msg.d = 0.754042112802;
    msg.a = 0.508244609485;

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
    msg.setTimeStamp(0.411692093941);
    msg.setSource(11103U);
    msg.setSourceEntity(223U);
    msg.setDestination(64353U);
    msg.setDestinationEntity(230U);
    msg.p = 0.128632379432;
    msg.i = 0.61798250092;
    msg.d = 0.513329997384;
    msg.a = 0.0963846949233;

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
    msg.setTimeStamp(0.686147469754);
    msg.setSource(36238U);
    msg.setSourceEntity(109U);
    msg.setDestination(60074U);
    msg.setDestinationEntity(37U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.299643750548);
    msg.setSource(21748U);
    msg.setSourceEntity(53U);
    msg.setDestination(17483U);
    msg.setDestinationEntity(134U);
    msg.op = 173U;

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
    msg.setTimeStamp(0.738634950094);
    msg.setSource(45464U);
    msg.setSourceEntity(112U);
    msg.setDestination(24846U);
    msg.setDestinationEntity(39U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.867328241514);
    msg.setSource(62737U);
    msg.setSourceEntity(48U);
    msg.setDestination(12604U);
    msg.setDestinationEntity(240U);
    msg.x = 0.284590359641;
    msg.y = 0.770988428375;
    msg.z = 0.368109649325;
    msg.vx = 0.37896579438;
    msg.vy = 0.804742702846;
    msg.vz = 0.0715721573183;
    msg.ax = 0.470059118914;
    msg.ay = 0.629354006012;
    msg.az = 0.750518572198;
    msg.flags = 47117U;

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
    msg.setTimeStamp(0.018555774194);
    msg.setSource(58428U);
    msg.setSourceEntity(108U);
    msg.setDestination(53103U);
    msg.setDestinationEntity(254U);
    msg.x = 0.771723140421;
    msg.y = 0.0417328779711;
    msg.z = 0.0247327529783;
    msg.vx = 0.852798658829;
    msg.vy = 0.781515132209;
    msg.vz = 0.911856323329;
    msg.ax = 0.00395675741998;
    msg.ay = 0.656220042503;
    msg.az = 0.738460564266;
    msg.flags = 65445U;

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
    msg.setTimeStamp(0.240541368661);
    msg.setSource(57117U);
    msg.setSourceEntity(60U);
    msg.setDestination(58907U);
    msg.setDestinationEntity(87U);
    msg.x = 0.399409303189;
    msg.y = 0.60647971661;
    msg.z = 0.515376554897;
    msg.vx = 0.30380910387;
    msg.vy = 0.345485779666;
    msg.vz = 0.241773278909;
    msg.ax = 0.806543279327;
    msg.ay = 0.175261256302;
    msg.az = 0.163163537113;
    msg.flags = 26518U;

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
    msg.setTimeStamp(0.745921574526);
    msg.setSource(36241U);
    msg.setSourceEntity(158U);
    msg.setDestination(26352U);
    msg.setDestinationEntity(39U);
    msg.value = 0.946607246872;

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
    msg.setTimeStamp(0.343711882946);
    msg.setSource(17429U);
    msg.setSourceEntity(101U);
    msg.setDestination(59799U);
    msg.setDestinationEntity(209U);
    msg.value = 0.040015932598;

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
    msg.setTimeStamp(0.100051175532);
    msg.setSource(53842U);
    msg.setSourceEntity(179U);
    msg.setDestination(43953U);
    msg.setDestinationEntity(30U);
    msg.value = 0.346745717832;

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
    msg.setTimeStamp(0.858533306133);
    msg.setSource(12894U);
    msg.setSourceEntity(122U);
    msg.setDestination(34140U);
    msg.setDestinationEntity(165U);
    msg.timeout = 58203U;
    msg.lat = 0.903945881224;
    msg.lon = 0.218360052407;
    msg.z = 0.550088157839;
    msg.z_units = 182U;
    msg.speed = 0.695780112768;
    msg.speed_units = 49U;
    msg.roll = 0.237132722428;
    msg.pitch = 0.705641417121;
    msg.yaw = 0.391407306472;
    msg.custom.assign("RVPCDPUXCYJTWLCMLMBYFGAIFTASEDNLZLBHMSJINTFNRWXQHCVGFHX");

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
    msg.setTimeStamp(0.132144453778);
    msg.setSource(21574U);
    msg.setSourceEntity(142U);
    msg.setDestination(59111U);
    msg.setDestinationEntity(159U);
    msg.timeout = 16824U;
    msg.lat = 0.287324741543;
    msg.lon = 0.338057285678;
    msg.z = 0.261773707343;
    msg.z_units = 56U;
    msg.speed = 0.584976608072;
    msg.speed_units = 52U;
    msg.roll = 0.933612020907;
    msg.pitch = 0.0222224421531;
    msg.yaw = 0.990269911531;
    msg.custom.assign("RLKMMUQYQLJZGTGOWM");

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
    msg.setTimeStamp(0.6488096052);
    msg.setSource(8657U);
    msg.setSourceEntity(220U);
    msg.setDestination(45500U);
    msg.setDestinationEntity(181U);
    msg.timeout = 44899U;
    msg.lat = 0.952206523166;
    msg.lon = 0.566734330274;
    msg.z = 0.19574618351;
    msg.z_units = 65U;
    msg.speed = 0.661415509406;
    msg.speed_units = 125U;
    msg.roll = 0.0608224759085;
    msg.pitch = 0.939730363891;
    msg.yaw = 0.219088014673;
    msg.custom.assign("EMAFVBNRVPEWTHNSKVHLYGSMYHIFNDSSFDOIWEYHKGUNTILGJCQNWFTXBIOPKXIHUJDZAJVRNCMRCYJLCRMLUEDMAAVZAPUZXXFDIRTSLJXOSGOTWPBERIRQALDWYKVIVBFJKUOHLKDONTBSTZFZEGSLMPCGCELBQBJUPKNOABCXGRLPWWQUVQJZUYXNXSRABZIHMPCFAEXVVHZZWGGZYTPMQRFYIGQJXE");

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
    msg.setTimeStamp(0.480842964833);
    msg.setSource(63664U);
    msg.setSourceEntity(203U);
    msg.setDestination(43490U);
    msg.setDestinationEntity(233U);
    msg.timeout = 41085U;
    msg.lat = 0.193776893076;
    msg.lon = 0.957807685537;
    msg.z = 0.549120781217;
    msg.z_units = 15U;
    msg.speed = 0.723903512624;
    msg.speed_units = 191U;
    msg.duration = 20643U;
    msg.radius = 0.792933167277;
    msg.flags = 139U;
    msg.custom.assign("IFLBITWTOMHSGUEUILZQTMXNMVTRRPBPMSCCAYHVTACUYUIGTNGDDAAWDHJHOHFWLSZMGBASQDNNYYPU");

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
    msg.setTimeStamp(0.0584226624267);
    msg.setSource(32331U);
    msg.setSourceEntity(59U);
    msg.setDestination(12353U);
    msg.setDestinationEntity(163U);
    msg.timeout = 29780U;
    msg.lat = 0.359740302316;
    msg.lon = 0.407404770971;
    msg.z = 0.278898993993;
    msg.z_units = 124U;
    msg.speed = 0.163892202487;
    msg.speed_units = 132U;
    msg.duration = 1792U;
    msg.radius = 0.941369490522;
    msg.flags = 55U;
    msg.custom.assign("GEWKBMABDZFVQBOLSBLVGHNKSRATVNQJSXAUGMXSNLOFEIPMB");

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
    msg.setTimeStamp(0.901368779147);
    msg.setSource(1196U);
    msg.setSourceEntity(191U);
    msg.setDestination(51554U);
    msg.setDestinationEntity(138U);
    msg.timeout = 16250U;
    msg.lat = 0.363259733842;
    msg.lon = 0.140589933609;
    msg.z = 0.0309468516271;
    msg.z_units = 229U;
    msg.speed = 0.753287939096;
    msg.speed_units = 5U;
    msg.duration = 55184U;
    msg.radius = 0.712876479412;
    msg.flags = 245U;
    msg.custom.assign("LLKRFSOVLEMRJVRHRLKJIAFQTBQEEMZUZFGNSHGKPHUKEWADNOTDUXIIMZSOZGBCDTJVVLGVYXHBBVYDXYIKFCAYJSWSSTMTAYBCVFQWEQHCIHSMHGFGUOYZJZIODFWBEREFNHGYISJEUIGPROLEPXLUGXQPMBTLXZATUVWDEWKRDMJXCOCFTAPJBUWBOQSXUZXRIGSQNWKKHRONPMDIYPCWNFPOTPRCQNYQTZHNNNMUWACCAKL");

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
    msg.setTimeStamp(0.0165106768654);
    msg.setSource(63157U);
    msg.setSourceEntity(78U);
    msg.setDestination(9251U);
    msg.setDestinationEntity(181U);
    msg.custom.assign("QBXXQJZYYNHUAOHSDDQOYFRXVYIPHZDIKZERSHPBTDDWNFHYUIRKJJYLWEGARFFVUXVOMMTLAVMJZCVNKKZVHSTMEVSLLAGXERBYFFQGDZULIFGJINRFRUQEHJUTUAINNMWASPEPVMPICGTKLCBVRUTLAPTSEINIHBDXXVGHCWPWXWQBJJKUIDYNOZBGGXDQ");

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
    msg.setTimeStamp(0.350564478563);
    msg.setSource(33774U);
    msg.setSourceEntity(169U);
    msg.setDestination(4618U);
    msg.setDestinationEntity(144U);
    msg.custom.assign("CDDWWLWFKXQOZASIMGUJMIMVLYBQXUPAGUVNHH");

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
    msg.setTimeStamp(0.623608713491);
    msg.setSource(27798U);
    msg.setSourceEntity(237U);
    msg.setDestination(46252U);
    msg.setDestinationEntity(7U);
    msg.custom.assign("USLURWPBDNZSUKOIDXODZCKKJCRRKQZRXLZAPSHABXXHQVFIWWCNCQULMFGJOZNSUZFIWSBODSQTFAOQAMHTCKGQDBHPEQRFIAH");

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
    msg.setTimeStamp(0.124219586052);
    msg.setSource(38209U);
    msg.setSourceEntity(212U);
    msg.setDestination(65390U);
    msg.setDestinationEntity(69U);
    msg.timeout = 54135U;
    msg.lat = 0.89875082204;
    msg.lon = 0.70819592317;
    msg.z = 0.271152068633;
    msg.z_units = 72U;
    msg.duration = 8515U;
    msg.speed = 0.526433202606;
    msg.speed_units = 245U;
    msg.type = 236U;
    msg.radius = 0.22506199556;
    msg.length = 0.239076834221;
    msg.bearing = 0.0887405368862;
    msg.direction = 1U;
    msg.custom.assign("JSRHQOSJCPIJHNRGBPELNVOMFLIYKKTPVMLXPDEMSYKXJCMWTIYEJVDTKXDXVCHRBUDHQDQJPBQBAJGHKYAFZQFJZZIVBVOWUGUNGERHOSWYWRVNXSCKGWGHGYKXFPROZYNEBDLSWDIWGZUJFGOMAYIBPAVTKBWQTRCCKUZYXLYAQLFZWCZTKRTQDNAFUSSUTUEAJQQTFOIORCPVHLNH");

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
    msg.setTimeStamp(0.584463953431);
    msg.setSource(3606U);
    msg.setSourceEntity(112U);
    msg.setDestination(63922U);
    msg.setDestinationEntity(227U);
    msg.timeout = 29762U;
    msg.lat = 0.663404557981;
    msg.lon = 0.331401756307;
    msg.z = 0.854773071407;
    msg.z_units = 113U;
    msg.duration = 20010U;
    msg.speed = 0.893131311269;
    msg.speed_units = 183U;
    msg.type = 89U;
    msg.radius = 0.770186969009;
    msg.length = 0.0358353740121;
    msg.bearing = 0.738775693842;
    msg.direction = 152U;
    msg.custom.assign("JFBWUWCDHRMCKPJXPIEFOCUYFIEFBHHRWKDUSTQEQZJMICLNEWJRTNZLMTWZJRUGBTLIZUQLCDFKSLCSLAVELDXNGFYQAFMMYEVOHIQWHDTRDZARNUQNVQBWNCK");

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
    msg.setTimeStamp(0.681629811331);
    msg.setSource(20424U);
    msg.setSourceEntity(232U);
    msg.setDestination(60075U);
    msg.setDestinationEntity(153U);
    msg.timeout = 64098U;
    msg.lat = 0.0645148085125;
    msg.lon = 0.620327940169;
    msg.z = 0.898384121937;
    msg.z_units = 189U;
    msg.duration = 33167U;
    msg.speed = 0.951208700911;
    msg.speed_units = 104U;
    msg.type = 172U;
    msg.radius = 0.654744807302;
    msg.length = 0.341071880573;
    msg.bearing = 0.070575657025;
    msg.direction = 59U;
    msg.custom.assign("RWMTKCUDOUJNLCZKDLSXTYIIZQORKSQBRJLVIUSQFCKUEVHRIXRNCXOWMMTEHDGPRWTPRLBQDALPXVIGYHSFDARYBHOOCGVPGYVAJAMHRVLUXFCSSQLZFMFENMBNZZXKEKEVXBNNEFSTSUAQGTJFQCDLRMHXBBIMNYVPECXUFEZCPOFUPWWWSKDWLZAJGVDIGNYWWHOTJXHGZIZBZOYT");

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
    msg.setTimeStamp(0.320056127976);
    msg.setSource(35681U);
    msg.setSourceEntity(42U);
    msg.setDestination(41065U);
    msg.setDestinationEntity(201U);
    msg.duration = 57670U;
    msg.custom.assign("ZHXHUXFLWAVSRUNYNOMYRLQXXJGZMWYRYFXBAINAUMPUDIPDBPERZKUTGNSGTOGGAZCSQLEPKOPVWXTQHDHBPVEDVRAFSTWWTNJDAOQZOSPYLCQCHSRLBKQJZEOYTVLGLYOCEJFSQNIBBHFLGVJDMUUMHGRADQWOHVXWE");

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
    msg.setTimeStamp(0.870680320329);
    msg.setSource(40967U);
    msg.setSourceEntity(103U);
    msg.setDestination(41936U);
    msg.setDestinationEntity(171U);
    msg.duration = 22659U;
    msg.custom.assign("SZEWCRSOGVXQJPZXMYDJLOONJHKMXRPKPBDMYQUWJALVVLGPHHNFTBPOWPEEYUNRHDOCGWFCPVWWFVVMTUXPQIYSXMRDFS");

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
    msg.setTimeStamp(0.410169476652);
    msg.setSource(23812U);
    msg.setSourceEntity(87U);
    msg.setDestination(32812U);
    msg.setDestinationEntity(218U);
    msg.duration = 55263U;
    msg.custom.assign("RWGFTJJNCYCLRZVQZTXAGWNEHJMZACBEJPVCFEPAYGFIHPLDIEVGVAXMMWFPWATWODTATVIVXJEYGOPOBHUVUNXBQKMLGLTFBQBMDJDYEQBEXKKPZUDUSLKBQNAPXUNIODSMEBAQIZCZZZDNEWMRAHQISFRCLTNBOAOKNSXLRMZEMOFGNJURCSQHFJXJHT");

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
    msg.setTimeStamp(0.3543591274);
    msg.setSource(9689U);
    msg.setSourceEntity(207U);
    msg.setDestination(43854U);
    msg.setDestinationEntity(180U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.135028651626;
    tmp_msg_0.z_units = 197U;
    msg.control.set(tmp_msg_0);
    msg.duration = 13492U;
    msg.custom.assign("ZZEMAWIVDRUXQVTMBYZQCDOJMRZHWXPIMUYFBPRWDCDCAWAKGKPTNJEYQXVYBGQJQMHYGCORXCJDKKNZLLHRNXZGTKUCZTOPXFWFDVDISKVHOVCQUXYEBTKLXSYETMCWJGHQNVOMRLDSPHCGRGOEAWFLOT");

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
    msg.setTimeStamp(0.578282587026);
    msg.setSource(63667U);
    msg.setSourceEntity(79U);
    msg.setDestination(56346U);
    msg.setDestinationEntity(239U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.010706522892;
    tmp_msg_0.z_units = 218U;
    msg.control.set(tmp_msg_0);
    msg.duration = 64040U;
    msg.custom.assign("BPLZFDXMKIHPSPUKDYGL");

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
    msg.setTimeStamp(0.0764200246002);
    msg.setSource(14332U);
    msg.setSourceEntity(222U);
    msg.setDestination(33378U);
    msg.setDestinationEntity(219U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.236062686614;
    tmp_msg_0.z_units = 250U;
    msg.control.set(tmp_msg_0);
    msg.duration = 5286U;
    msg.custom.assign("HQHEZLAAJDOQLAJYAPKJUILRPAVFFQILNWDOSOPKTCEDWRWZSCDCWOXBBJRQWGMAXUTBTFGWHNZAKFLHXSFITRUSUQBZTIBVVBALWSSXPKDACFOMEMJDBBQYNBERGKYLRADJUEZZYYYHGPJCUHSIMNXZQVFJFGVQYVNMVJRFUIHGGKXJTNPLTOGSCCHKTXNTYTPHIIUFE");

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
    msg.setTimeStamp(0.796883732728);
    msg.setSource(64587U);
    msg.setSourceEntity(195U);
    msg.setDestination(33951U);
    msg.setDestinationEntity(147U);
    msg.timeout = 9403U;
    msg.lat = 0.940635478967;
    msg.lon = 0.441240893903;
    msg.z = 0.489955246972;
    msg.z_units = 40U;
    msg.speed = 0.0162218723988;
    msg.speed_units = 196U;
    msg.bearing = 0.0676225674636;
    msg.cross_angle = 0.107599375847;
    msg.width = 0.227293686199;
    msg.length = 0.0599774782882;
    msg.hstep = 0.688664106714;
    msg.coff = 167U;
    msg.alternation = 137U;
    msg.flags = 171U;
    msg.custom.assign("NHPIMAVRXHJVAEMBDJVEWENRTOEKVTPAGGYMWCZBJZRMFOUMAGBLXPTGDIJTTEKUYQHEKFXKCSGKJAVTUIWCYRNEPWZXSQRUJFXKNEABYNZTSKTXZDUICHIMNOCQSLNAFHBIXSOYRLVDICWHECUWOUPYPCAOASFILVEORZZDMADDPZWHUCYQLYXFBWQYJFDDHPUGXTQVKQGJWBMFMHVFJLKWQJPRLLZNXL");

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
    msg.setTimeStamp(0.250606762065);
    msg.setSource(17090U);
    msg.setSourceEntity(58U);
    msg.setDestination(39073U);
    msg.setDestinationEntity(201U);
    msg.timeout = 24394U;
    msg.lat = 0.631739950661;
    msg.lon = 0.183725666352;
    msg.z = 0.217645137431;
    msg.z_units = 128U;
    msg.speed = 0.566288628523;
    msg.speed_units = 128U;
    msg.bearing = 0.588852399466;
    msg.cross_angle = 0.0621682048747;
    msg.width = 0.48841432141;
    msg.length = 0.464893979566;
    msg.hstep = 0.0277190143039;
    msg.coff = 70U;
    msg.alternation = 239U;
    msg.flags = 221U;
    msg.custom.assign("CHOBKZDLIUBGYDVYVPEFASVBQIRHVBJRUNWWTJSQNIRMSEIOANNXGFXKPLDHQYSCVAAPUQZSNKBXCUBVGWJTVSLRGOVWMMHKTUHURXEEWBVONQHRIIKXLFTFRCGQHOBWOSYRDDUJEELCDADMPZJPONLAYOFMOTEDUTQMZFAJUGMQTLNDLWEPGNPAZCYCKHZGRJCGAJWIKBMKPXETNMZDITFKOUFXLTSSXYYCQCGXP");

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
    msg.setTimeStamp(0.364729388567);
    msg.setSource(20136U);
    msg.setSourceEntity(182U);
    msg.setDestination(56702U);
    msg.setDestinationEntity(79U);
    msg.timeout = 12204U;
    msg.lat = 0.693974139473;
    msg.lon = 0.566754665346;
    msg.z = 0.535613469062;
    msg.z_units = 228U;
    msg.speed = 0.168661599783;
    msg.speed_units = 24U;
    msg.bearing = 0.494841877961;
    msg.cross_angle = 0.274504304222;
    msg.width = 0.711736039879;
    msg.length = 0.988407098405;
    msg.hstep = 0.0732146745868;
    msg.coff = 169U;
    msg.alternation = 132U;
    msg.flags = 197U;
    msg.custom.assign("QNDFZDNJUDSSCXWIBNIOLVWQSNJIHJUCKURTFHZZBDVZYLUMZTCFBVNWZNJFOEARECBPPAQCLACDT");

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
    msg.setTimeStamp(0.113591954112);
    msg.setSource(44029U);
    msg.setSourceEntity(30U);
    msg.setDestination(20654U);
    msg.setDestinationEntity(50U);
    msg.timeout = 59125U;
    msg.lat = 0.913262390423;
    msg.lon = 0.328250383979;
    msg.z = 0.134901800129;
    msg.z_units = 152U;
    msg.speed = 0.190264753124;
    msg.speed_units = 115U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.371674325112;
    tmp_msg_0.y = 0.45815676249;
    tmp_msg_0.z = 0.265875893066;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RKZCWWUAWRBYLRDYYQPHSBDQPOLVPRFBIMIGNFXLIDJZGTJJKESXCYXVLYYUZEISFSDAOMWI");

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
    msg.setTimeStamp(0.773337023484);
    msg.setSource(27727U);
    msg.setSourceEntity(96U);
    msg.setDestination(37146U);
    msg.setDestinationEntity(212U);
    msg.timeout = 17640U;
    msg.lat = 0.0470300960863;
    msg.lon = 0.74139518142;
    msg.z = 0.618831990184;
    msg.z_units = 157U;
    msg.speed = 0.35618430563;
    msg.speed_units = 135U;
    msg.custom.assign("YSUVQGWBJBZRAGQXGIERUSTJPUICUBMHJPQAGZNUUPREIQKXZLOJUKYNVOFCTWCCDIHRZZPFEGT");

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
    msg.setTimeStamp(0.525130937804);
    msg.setSource(21316U);
    msg.setSourceEntity(29U);
    msg.setDestination(54576U);
    msg.setDestinationEntity(200U);
    msg.timeout = 35356U;
    msg.lat = 0.87716770791;
    msg.lon = 0.393106541633;
    msg.z = 0.15739651761;
    msg.z_units = 151U;
    msg.speed = 0.669399980982;
    msg.speed_units = 45U;
    msg.custom.assign("YLVFRATLURLJQZPOISIGZVHCPZWTSPSNTYXKEMOOZPNAWLYBJNX");

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
    msg.setTimeStamp(0.0159376263856);
    msg.setSource(15559U);
    msg.setSourceEntity(219U);
    msg.setDestination(34130U);
    msg.setDestinationEntity(17U);
    msg.x = 0.395747041244;
    msg.y = 0.0423827823292;
    msg.z = 0.459665320033;

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
    msg.setTimeStamp(0.063598664624);
    msg.setSource(17863U);
    msg.setSourceEntity(31U);
    msg.setDestination(19413U);
    msg.setDestinationEntity(183U);
    msg.x = 0.269225986409;
    msg.y = 0.584458132275;
    msg.z = 0.631599822593;

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
    msg.setTimeStamp(0.107465587754);
    msg.setSource(35602U);
    msg.setSourceEntity(32U);
    msg.setDestination(63885U);
    msg.setDestinationEntity(94U);
    msg.x = 0.921939545061;
    msg.y = 0.30524153314;
    msg.z = 0.420227276459;

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
    msg.setTimeStamp(0.591025481712);
    msg.setSource(58667U);
    msg.setSourceEntity(160U);
    msg.setDestination(58086U);
    msg.setDestinationEntity(62U);
    msg.timeout = 50989U;
    msg.lat = 0.711194219693;
    msg.lon = 0.959331456829;
    msg.z = 0.935755713315;
    msg.z_units = 31U;
    msg.amplitude = 0.233310957146;
    msg.pitch = 0.114869198574;
    msg.speed = 0.839216814936;
    msg.speed_units = 99U;
    msg.custom.assign("UAHIFKDPEPKQJEQAWHLSHBCWOTNMDXSYUTQTBHICKGAIKVYLPARZXYVCEHPUNIISSIQVWBQEFHPWAZBJFCYUARILMMYFJMOGVHFMERPLSERNQZJHVTRVDDFJUOUGQLNKZKZZBSBDGORXTRABMJAMKRXCJCPTPQGIWOTGLMRZELBWWTNWLUHQFODOCOCCKMZGXYVVESFDDYWJYUAPKPBZYFOYES");

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
    msg.setTimeStamp(0.0687036553335);
    msg.setSource(35803U);
    msg.setSourceEntity(24U);
    msg.setDestination(17224U);
    msg.setDestinationEntity(7U);
    msg.timeout = 6779U;
    msg.lat = 0.270554468507;
    msg.lon = 0.894966618812;
    msg.z = 0.721103025603;
    msg.z_units = 244U;
    msg.amplitude = 0.707154875681;
    msg.pitch = 0.614663020254;
    msg.speed = 0.89774449108;
    msg.speed_units = 162U;
    msg.custom.assign("BFPSNATVBVCJJPRSKEXOPXDPCSUJSAYMYAKNCSGMDHLLSJVHZVPVQFZYHEORHIAUGNSOWULTWGYUUXWWKJQIZHIXTZDWWIMAZBWESBRTZBQGCRDUMPZBAYZZDILOKGUPMOFMONTQYHYOWTNFYBMEGFSCPRNOIWIXDBOTSEQQDFBLRLVKVJHHFJRKGVCTRLFYDAENCQJLRNAP");

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
    msg.setTimeStamp(0.0837634947724);
    msg.setSource(22262U);
    msg.setSourceEntity(223U);
    msg.setDestination(31898U);
    msg.setDestinationEntity(52U);
    msg.timeout = 27522U;
    msg.lat = 0.258231443158;
    msg.lon = 0.710972332333;
    msg.z = 0.731992021678;
    msg.z_units = 77U;
    msg.amplitude = 0.877082611416;
    msg.pitch = 0.754079002;
    msg.speed = 0.77127874068;
    msg.speed_units = 44U;
    msg.custom.assign("WKAZVHAZAPWNZGFIVRADPTOSRYOQFMJHNSEUTTUJYVVAYZFAOIRTWBQTS");

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
    msg.setTimeStamp(0.379845408789);
    msg.setSource(8996U);
    msg.setSourceEntity(102U);
    msg.setDestination(25433U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.536187872997);
    msg.setSource(37101U);
    msg.setSourceEntity(194U);
    msg.setDestination(50733U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.837514360367);
    msg.setSource(32637U);
    msg.setSourceEntity(36U);
    msg.setDestination(38629U);
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
    msg.setTimeStamp(0.713830892181);
    msg.setSource(40902U);
    msg.setSourceEntity(128U);
    msg.setDestination(10891U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.631466722233;
    msg.lon = 0.0826041901368;
    msg.z = 0.760030940855;
    msg.z_units = 74U;
    msg.radius = 0.932949856483;
    msg.duration = 5667U;
    msg.speed = 0.221378411936;
    msg.speed_units = 252U;
    msg.custom.assign("WOWEIBHWIMDCLSCFSJVABCTOSBHGLTYQVWJYRBEZKOTCOBZWZSXYPEORUCVZDKBTMFFGSRLEVNKRKKEM");

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
    msg.setTimeStamp(0.981290876377);
    msg.setSource(26923U);
    msg.setSourceEntity(156U);
    msg.setDestination(5903U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.58951911906;
    msg.lon = 0.473416257791;
    msg.z = 0.720088515932;
    msg.z_units = 183U;
    msg.radius = 0.109047676561;
    msg.duration = 22587U;
    msg.speed = 0.370169474014;
    msg.speed_units = 116U;
    msg.custom.assign("AEIRYYZDBQRFRNHTKYBJUTWJLCBMZRSEPPTRVYWXNFZNTVSVVOEJKFBAQGPGPQFIQWAKUJRAGKJOTDOEAPJDCWIDYDNHMHQAKCLEQUATEWIXCCFGMLHLXLUVPGHJRSNKSTLYBODUIDQCSAZWPNFPSOCOZFTKUURWSLRFBWMJWNEYUVQMCTTVWXNMOIYBMEHIZVIGBHS");

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
    msg.setTimeStamp(0.513856163616);
    msg.setSource(47673U);
    msg.setSourceEntity(223U);
    msg.setDestination(44256U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.914801609413;
    msg.lon = 0.118613485979;
    msg.z = 0.555651813419;
    msg.z_units = 38U;
    msg.radius = 0.996256846004;
    msg.duration = 35604U;
    msg.speed = 0.594200535652;
    msg.speed_units = 51U;
    msg.custom.assign("PBRAUCWQHODSJJLRGPXLXEJZVOGXQQFSWEPSVQYUTNZTKDHSZOJJHOBRWCGHLEDPMBTJESAWCDGAIFGYMHVYGMWXDTFUTZBWFTCZPMNBRNNOVDCZVZVDJPYZICUGGIWANLEYKIVGBPXPILJLAKMNYLIGUEWBYSEUBRQQYSRAHNQKQFNMAQXKIECFFJVTYWIOSULBCC");

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
    msg.setTimeStamp(0.556111407352);
    msg.setSource(38158U);
    msg.setSourceEntity(165U);
    msg.setDestination(5522U);
    msg.setDestinationEntity(239U);
    msg.timeout = 17523U;
    msg.flags = 105U;
    msg.lat = 0.243144215087;
    msg.lon = 0.947253459487;
    msg.start_z = 0.227607944344;
    msg.start_z_units = 37U;
    msg.end_z = 0.0442604623321;
    msg.end_z_units = 48U;
    msg.radius = 0.504414000216;
    msg.speed = 0.90021038634;
    msg.speed_units = 165U;
    msg.custom.assign("NKKJSMCEAPFKRNMLYUSETVRRMUSYLGJYUELXYFSGANTWTTKEHVVWYHXQADVKUEWQJXNSQJALPQRDLXVWBGMXDZTYCQBYOYVBJJDJCCEMXCWDHGNWTPRNBPCLOUZDHEKFQVAEPBGWQUIO");

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
    msg.setTimeStamp(0.143230570274);
    msg.setSource(37392U);
    msg.setSourceEntity(154U);
    msg.setDestination(5580U);
    msg.setDestinationEntity(240U);
    msg.timeout = 46802U;
    msg.flags = 196U;
    msg.lat = 0.155295436779;
    msg.lon = 0.352832640438;
    msg.start_z = 0.216167428639;
    msg.start_z_units = 211U;
    msg.end_z = 0.351512421243;
    msg.end_z_units = 229U;
    msg.radius = 0.74537558747;
    msg.speed = 0.723187338825;
    msg.speed_units = 170U;
    msg.custom.assign("EJOKMKUKOTEGZEOXCSEXZJVLXYGBOSNCUDDTAPZHIWWAJJPWONYJQPHVOOMAEFKIMHJIQEVHEIDLGCAIVQQUDFSL");

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
    msg.setTimeStamp(0.521475061629);
    msg.setSource(24924U);
    msg.setSourceEntity(101U);
    msg.setDestination(44457U);
    msg.setDestinationEntity(129U);
    msg.timeout = 4381U;
    msg.flags = 110U;
    msg.lat = 0.857296534519;
    msg.lon = 0.840458890652;
    msg.start_z = 0.843288750591;
    msg.start_z_units = 210U;
    msg.end_z = 0.848065901394;
    msg.end_z_units = 125U;
    msg.radius = 0.887235726661;
    msg.speed = 0.921502913304;
    msg.speed_units = 108U;
    msg.custom.assign("NNWYVNJLOFBXKCAFPBTKI");

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
    msg.setTimeStamp(0.755220520686);
    msg.setSource(10886U);
    msg.setSourceEntity(11U);
    msg.setDestination(31142U);
    msg.setDestinationEntity(53U);
    msg.timeout = 13723U;
    msg.lat = 0.902006282127;
    msg.lon = 0.432678153965;
    msg.z = 0.0308527907763;
    msg.z_units = 82U;
    msg.speed = 0.0137521130783;
    msg.speed_units = 231U;
    msg.custom.assign("DMLAMEUBPZBRXNGINSCJLYGNQBWTMGDVSRKOSCKAWYRCSVVPULWZWRVEYVLXUNIAQDFZATAXDSUETZOHOUUBPHTDQYMFJWVRYHIFBSZTVRQCPBSLNLQQALLIMTMAFOOUOZOXXMWAQTSKHYJLHKFAQVNXGQKKYCDNRIPWMIETMDKGSJ");

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
    msg.setTimeStamp(0.867122894258);
    msg.setSource(37282U);
    msg.setSourceEntity(152U);
    msg.setDestination(61291U);
    msg.setDestinationEntity(6U);
    msg.timeout = 27348U;
    msg.lat = 0.596762811602;
    msg.lon = 0.201775375163;
    msg.z = 0.0740900357088;
    msg.z_units = 74U;
    msg.speed = 0.162703005981;
    msg.speed_units = 65U;
    msg.custom.assign("XRAMMJQNZMSDSAPOUUJXPEBCGCALLSRPWUBHOBQYKGDDBCYSLJFHTZVLEPIXAVLUVKHIUJGZPGWKREAXWTUIVRHWEHWJFXYJXUIWMJLIDJITFLHEXNPNGIUZDNDONYBOYVNZ");

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
    msg.setTimeStamp(0.484496373688);
    msg.setSource(62858U);
    msg.setSourceEntity(21U);
    msg.setDestination(54978U);
    msg.setDestinationEntity(109U);
    msg.timeout = 15590U;
    msg.lat = 0.212495273628;
    msg.lon = 0.757681085548;
    msg.z = 0.00387492962497;
    msg.z_units = 49U;
    msg.speed = 0.36886277058;
    msg.speed_units = 155U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.171289989034;
    tmp_msg_0.y = 0.313102429226;
    tmp_msg_0.z = 0.615687914256;
    tmp_msg_0.t = 0.57071418484;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LZWVJSDFPTOJBPLITOXQAICTNCPFMYGJCQVCRPOOKXJJXYCWVLZMLECDHYHUAXMDOXUCKMTDGPXUYRILWUYP");

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
    msg.setTimeStamp(0.370467227629);
    msg.setSource(49135U);
    msg.setSourceEntity(173U);
    msg.setDestination(6516U);
    msg.setDestinationEntity(224U);
    msg.x = 0.0520073668414;
    msg.y = 0.913917817102;
    msg.z = 0.347117590869;
    msg.t = 0.155007175464;

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
    msg.setTimeStamp(0.767917725973);
    msg.setSource(55623U);
    msg.setSourceEntity(208U);
    msg.setDestination(30853U);
    msg.setDestinationEntity(154U);
    msg.x = 0.987790610466;
    msg.y = 0.0999465075477;
    msg.z = 0.0120435466298;
    msg.t = 0.544543360224;

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
    msg.setTimeStamp(0.303853615101);
    msg.setSource(43282U);
    msg.setSourceEntity(140U);
    msg.setDestination(63912U);
    msg.setDestinationEntity(24U);
    msg.x = 0.254463969837;
    msg.y = 0.537488122082;
    msg.z = 0.9091885254;
    msg.t = 0.0012627180581;

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
    msg.setTimeStamp(0.221706029276);
    msg.setSource(2338U);
    msg.setSourceEntity(52U);
    msg.setDestination(25796U);
    msg.setDestinationEntity(163U);
    msg.timeout = 49935U;
    msg.name.assign("JDTHGHCPWMBVUNOGRVYYZANLPYVTTPZPFVJZLEFQNWJKLBLFNYGMGIOPLBEGXEUMMTQGJLKOVAICDWUHFMRGYCCOESEOINHQAIWACHSDOTAMWKNDHFXSUCIXIUWDPQOKBJKLSKZSPTYRLQMVYHVV");
    msg.custom.assign("CTAZKTSVGRMITCHNDYVRDRPIBEDHHFPGZIMIUEEGBQYDMRPMWPEZNSRERAJMXKLWUCIBIEFOLQTQGRYMNKJVSJMIOFJYBWEGCVGWKVLSZFZPCPNDYWZO");

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
    msg.setTimeStamp(0.614883492733);
    msg.setSource(19380U);
    msg.setSourceEntity(67U);
    msg.setDestination(6032U);
    msg.setDestinationEntity(171U);
    msg.timeout = 1091U;
    msg.name.assign("ISHJTVCYSWJCUYFZEVAOZUAXOOTXPLKBCQNEFLRCNUIZWEBCXVWYYFSXILEBWMOSNVEGLVFRQJZUDUNDZBTESHQMIFREEPXXJAQQCGDYDSBVHXVTOGFHYMIMRJDYEUKOZTKETABTMISXGJSNRKACMGFRFU");
    msg.custom.assign("IKVWIYXNEZEUVDUEQLCUSWKGACDEYDNPJFKHEZFVPALXBPMYUEBQCKAPTZXVXSHXDDLOCIIHTROQLCDXMPKSRTJAYPGPTQMJVMGQLVAGLDRBBOMEZWOIGYWFTSUNGIWHY");

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
    msg.setTimeStamp(0.577019358247);
    msg.setSource(47618U);
    msg.setSourceEntity(12U);
    msg.setDestination(12141U);
    msg.setDestinationEntity(225U);
    msg.timeout = 59509U;
    msg.name.assign("XJDBIVCGORCGFBHXZPENPTNNREBLMVVYJEYBDLCVSMQHWTLETBLNKZZSAHBYSPCVSGDTCZMJQSREDZLHYGXIWRISDXMHSGUYOAITUBOPDOXMOGKQHUFXFWXRKCPWZCKAIPOXIFWQGFAJZVVF");
    msg.custom.assign("MZUETXUPBRCKQITIFTBKFLDUOHKWNSVGGEMKSFJHWXZYLEQYNJEVTRRGYVEBXMRQFUJMGHAVKLHGCSWGYETIJRALHAAOLXDWSOYFLKMQREFWSCDFYQIMBGLUZZCAJCPAMWSOCGADTPENHLEUCQVCYUIRCLWFOBTMSNNPXSJKDQYIZIHVJUBQQNXBWTPR");

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
    msg.setTimeStamp(0.168009357308);
    msg.setSource(4268U);
    msg.setSourceEntity(78U);
    msg.setDestination(61695U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.444612589036;
    msg.lon = 0.237540633944;
    msg.z = 0.33079770868;
    msg.z_units = 196U;
    msg.speed = 0.61635731674;
    msg.speed_units = 29U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.631152450025;
    tmp_msg_0.y = 0.644064147645;
    tmp_msg_0.z = 0.56764148202;
    tmp_msg_0.t = 0.87303183983;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.447965171799;
    msg.custom.assign("GISCQWHLDYRQKIKAFRPYYDSNUCZIZGX");

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
    msg.setTimeStamp(0.644343075125);
    msg.setSource(37006U);
    msg.setSourceEntity(145U);
    msg.setDestination(51183U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.458591371081;
    msg.lon = 0.00221050582103;
    msg.z = 0.184820950699;
    msg.z_units = 220U;
    msg.speed = 0.67812697768;
    msg.speed_units = 211U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.169985548513;
    tmp_msg_0.y = 0.722874716653;
    tmp_msg_0.z = 0.857460205939;
    tmp_msg_0.t = 0.960391624274;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.25127962047;
    msg.custom.assign("CKGHUZCLKOFFRPRHOEUSWHNICZ");

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
    msg.setTimeStamp(0.729563920884);
    msg.setSource(22043U);
    msg.setSourceEntity(92U);
    msg.setDestination(20887U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.697484547572;
    msg.lon = 0.00591863967594;
    msg.z = 0.803278186745;
    msg.z_units = 90U;
    msg.speed = 0.432511226792;
    msg.speed_units = 41U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.538163008995;
    tmp_msg_0.y = 0.949732997751;
    tmp_msg_0.z = 0.799096629357;
    tmp_msg_0.t = 0.432698542613;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 64339U;
    tmp_msg_1.off_x = 0.200112494523;
    tmp_msg_1.off_y = 0.885659866509;
    tmp_msg_1.off_z = 0.864056253756;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.592175666627;
    msg.custom.assign("HJAANLSLEIHNLVAYQYLFTFQEYUPXGLKOFJBZEWWETVUNFWDXGZRKYTNTEIQDQWZOKSJOQNVPTCKBSCCGFUGCOIULVCKDAGNBXFERCOBPHUFMRARVHZDLUJBRLEPZYNXDKJILPOTHKERUVRZAKNFAVKMAEHCXOPXZRMQLRFJMNVW");

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
    msg.setTimeStamp(0.311238008595);
    msg.setSource(14956U);
    msg.setSourceEntity(103U);
    msg.setDestination(14132U);
    msg.setDestinationEntity(227U);
    msg.vid = 58263U;
    msg.off_x = 0.837329100204;
    msg.off_y = 0.0442658277041;
    msg.off_z = 0.558465182474;

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
    msg.setTimeStamp(0.109889043286);
    msg.setSource(42193U);
    msg.setSourceEntity(7U);
    msg.setDestination(55060U);
    msg.setDestinationEntity(108U);
    msg.vid = 33895U;
    msg.off_x = 0.305803906469;
    msg.off_y = 0.501038122038;
    msg.off_z = 0.410562139898;

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
    msg.setTimeStamp(0.0541902787342);
    msg.setSource(57213U);
    msg.setSourceEntity(154U);
    msg.setDestination(13571U);
    msg.setDestinationEntity(163U);
    msg.vid = 58087U;
    msg.off_x = 0.0932785405942;
    msg.off_y = 0.912552480735;
    msg.off_z = 0.851287011651;

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
    msg.setTimeStamp(0.461103014603);
    msg.setSource(43103U);
    msg.setSourceEntity(202U);
    msg.setDestination(26718U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.546031103694);
    msg.setSource(39928U);
    msg.setSourceEntity(230U);
    msg.setDestination(46774U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.964698824328);
    msg.setSource(44134U);
    msg.setSourceEntity(237U);
    msg.setDestination(50196U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.169784064919);
    msg.setSource(20135U);
    msg.setSourceEntity(181U);
    msg.setDestination(549U);
    msg.setDestinationEntity(248U);
    msg.mid = 43600U;

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
    msg.setTimeStamp(0.474205581092);
    msg.setSource(38468U);
    msg.setSourceEntity(34U);
    msg.setDestination(12385U);
    msg.setDestinationEntity(85U);
    msg.mid = 12575U;

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
    msg.setTimeStamp(0.225926325254);
    msg.setSource(44281U);
    msg.setSourceEntity(99U);
    msg.setDestination(41969U);
    msg.setDestinationEntity(52U);
    msg.mid = 18415U;

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
    msg.setTimeStamp(0.379481683033);
    msg.setSource(48986U);
    msg.setSourceEntity(182U);
    msg.setDestination(5944U);
    msg.setDestinationEntity(123U);
    msg.state = 96U;
    msg.eta = 3784U;
    msg.info.assign("CYAARXDOTBEFHRAFKJANUIZFIOYMPEDPLJKGIWKRXNBUTFCXBMTEARPCNIUYUVUQHTIUQMUMRKFRBVPSEHZGANV");

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
    msg.setTimeStamp(0.848463211712);
    msg.setSource(61715U);
    msg.setSourceEntity(224U);
    msg.setDestination(32863U);
    msg.setDestinationEntity(97U);
    msg.state = 30U;
    msg.eta = 4724U;
    msg.info.assign("ISBVZUOMWGOXSEJNPELRGCAMYVSODNZQCBOIQSLNJFQDGGAQZOARAXLRWSZVGFXCZKPVUYHJGTNWAZHLWPDTTNSCJXPEKPGUOQDVBUXIMBTUDAYOAJAPERIFWLNMADJJGBSLIPBTAFUMFIZQIYXFMWEROQCWHXMRFNSNHKHTBMWNIEVOBTXLDCGWYJTEUDEDVKQKKLBCKGOPHNUMMCLXYFRTQVJXYFUPZKJSHTYVUBHHQRIF");

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
    msg.setTimeStamp(0.50365124183);
    msg.setSource(13018U);
    msg.setSourceEntity(218U);
    msg.setDestination(152U);
    msg.setDestinationEntity(219U);
    msg.state = 125U;
    msg.eta = 19147U;
    msg.info.assign("VWMKCLFYOILKJMJPXQITUAXRIBSAYMQVEFSZXNJCDTMCHDOTV");

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
    msg.setTimeStamp(0.983395263981);
    msg.setSource(656U);
    msg.setSourceEntity(2U);
    msg.setDestination(45961U);
    msg.setDestinationEntity(129U);
    msg.system = 20357U;
    msg.duration = 7124U;
    msg.speed = 0.404058200244;
    msg.speed_units = 181U;
    msg.x = 0.699373463877;
    msg.y = 0.449396774897;
    msg.z = 0.876922584573;
    msg.z_units = 70U;

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
    msg.setTimeStamp(0.653339938426);
    msg.setSource(37444U);
    msg.setSourceEntity(119U);
    msg.setDestination(12998U);
    msg.setDestinationEntity(43U);
    msg.system = 31295U;
    msg.duration = 13020U;
    msg.speed = 0.588702500587;
    msg.speed_units = 218U;
    msg.x = 0.123260286326;
    msg.y = 0.322198242443;
    msg.z = 0.533804326538;
    msg.z_units = 162U;

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
    msg.setTimeStamp(0.366144419915);
    msg.setSource(34388U);
    msg.setSourceEntity(145U);
    msg.setDestination(21501U);
    msg.setDestinationEntity(146U);
    msg.system = 45040U;
    msg.duration = 53998U;
    msg.speed = 0.290538856079;
    msg.speed_units = 20U;
    msg.x = 0.729253457341;
    msg.y = 0.492322438995;
    msg.z = 0.259897131782;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.153683311477);
    msg.setSource(31288U);
    msg.setSourceEntity(174U);
    msg.setDestination(2894U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.000804489367019;
    msg.lon = 0.780919204299;
    msg.speed = 0.786866968657;
    msg.speed_units = 20U;
    msg.duration = 27336U;
    msg.sys_a = 59209U;
    msg.sys_b = 61108U;
    msg.move_threshold = 0.693959880691;

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
    msg.setTimeStamp(0.82747400349);
    msg.setSource(50619U);
    msg.setSourceEntity(34U);
    msg.setDestination(37624U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.86399866656;
    msg.lon = 0.574438445032;
    msg.speed = 0.47177532154;
    msg.speed_units = 214U;
    msg.duration = 41017U;
    msg.sys_a = 54110U;
    msg.sys_b = 9818U;
    msg.move_threshold = 0.126173182933;

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
    msg.setTimeStamp(0.306730019806);
    msg.setSource(19132U);
    msg.setSourceEntity(151U);
    msg.setDestination(7699U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.681417217333;
    msg.lon = 0.653065743233;
    msg.speed = 0.844533590211;
    msg.speed_units = 227U;
    msg.duration = 24998U;
    msg.sys_a = 57411U;
    msg.sys_b = 56128U;
    msg.move_threshold = 0.914061009694;

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
    msg.setTimeStamp(0.670741310664);
    msg.setSource(59810U);
    msg.setSourceEntity(69U);
    msg.setDestination(45895U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.46425023968;
    msg.lon = 0.774910191147;
    msg.z = 0.463378333789;
    msg.z_units = 94U;
    msg.speed = 0.315802486452;
    msg.speed_units = 100U;
    msg.custom.assign("NNSELUGVRAWKWPLNBIEYPWHJYGNIQCUHMQPDVGASPSVMXUGTCTMDYYDUQEZEHQBWYTONRLIWSVIQCLPRBJFKNJIJKMXIFHZIJRNTOFXUUCCTDCWARZNADOBTNDQXSFWKKPVBYALZYC");

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
    msg.setTimeStamp(0.111657631399);
    msg.setSource(22673U);
    msg.setSourceEntity(242U);
    msg.setDestination(7653U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.777774019258;
    msg.lon = 0.866136857383;
    msg.z = 0.76182750071;
    msg.z_units = 193U;
    msg.speed = 0.0940033580882;
    msg.speed_units = 131U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.931733156638;
    tmp_msg_0.lon = 0.181743159859;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CZFYTMYCFQMKHAUPCYJGRJOUMMERDHDCEFQKUVMHJLAXLXOWWHBGIHMDNVXSGFJBCXSDZLRXIJBVQCGUFOTXRHWXREMDYZHINSBPINEQIPJUVWKCUPFYEALRTENMGKVDPEYPEKZDKBENTMKXFFSWUTSWSNTNNIZPJQGBQTASDODHZLSLZGVPVGAWVRHVYRQUZIGIOOANLNXO");

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
    msg.setTimeStamp(0.563115926833);
    msg.setSource(61487U);
    msg.setSourceEntity(250U);
    msg.setDestination(32635U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.591634872834;
    msg.lon = 0.141738394792;
    msg.z = 0.85221990875;
    msg.z_units = 184U;
    msg.speed = 0.177070984846;
    msg.speed_units = 163U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.982749848566;
    tmp_msg_0.lon = 0.555191687878;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZSTCJIMESRSHHUZJTVRWZVFWNKTUKGLJZIOUSXBHUPUCZBQXADBWUJDWDEYQIAYUDFVAYJMPPJDOXGRPPKWZVZPLRFIUJZEMKNGEQHQSATQFWYFQOVAHWVGFHCFXILBONWEGAJGLEGFSSPFCYHUMSTRAE");

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
    msg.setTimeStamp(0.804579605461);
    msg.setSource(58350U);
    msg.setSourceEntity(119U);
    msg.setDestination(9308U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.788470740298;
    msg.lon = 0.530775778987;

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
    msg.setTimeStamp(0.872113530712);
    msg.setSource(45129U);
    msg.setSourceEntity(217U);
    msg.setDestination(40617U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.298454738824;
    msg.lon = 0.897835453531;

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
    msg.setTimeStamp(0.542350478893);
    msg.setSource(47398U);
    msg.setSourceEntity(188U);
    msg.setDestination(33358U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.829794209678;
    msg.lon = 0.785873254729;

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
    msg.setTimeStamp(0.490831383963);
    msg.setSource(13030U);
    msg.setSourceEntity(98U);
    msg.setDestination(7832U);
    msg.setDestinationEntity(90U);
    msg.timeout = 1542U;
    msg.lat = 0.60892129938;
    msg.lon = 0.62386197523;
    msg.z = 0.920850052857;
    msg.z_units = 55U;
    msg.pitch = 0.595625356072;
    msg.amplitude = 0.49190283204;
    msg.duration = 47683U;
    msg.speed = 0.875457317343;
    msg.speed_units = 182U;
    msg.radius = 0.279813189642;
    msg.direction = 38U;
    msg.custom.assign("QDABAGHFPIWRGIDOSXWGSSMENGFLPTOXFTRYOAJIZREYRBPQSWVZJJFQXFPVDUMLEEHLKPFROBJBLNHPYZLECJZNJBCSADHAUKAJYUQNEDQUVBQRXVUFHBYZAYRSOUDMQTGYBOHOXMNIBVLVCJJHSLXOTYIURFHB");

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
    msg.setTimeStamp(0.328618647161);
    msg.setSource(17091U);
    msg.setSourceEntity(200U);
    msg.setDestination(11948U);
    msg.setDestinationEntity(65U);
    msg.timeout = 61585U;
    msg.lat = 0.960534279855;
    msg.lon = 0.53214031291;
    msg.z = 0.29702166418;
    msg.z_units = 50U;
    msg.pitch = 0.262478138044;
    msg.amplitude = 0.171565612383;
    msg.duration = 41830U;
    msg.speed = 0.910904632431;
    msg.speed_units = 6U;
    msg.radius = 0.113392953512;
    msg.direction = 153U;
    msg.custom.assign("XLQRAHGYBLWQHVOGZZDJRKJGFAELMRUKHSMEIJZYPKFOQAHZQAWLSXQDRVETWXBNVUJQNAXMHMTSDKVKBXTXWLNAXBVTYLEVZOCSIRPQCTHBZSFIOQIQGPDKLMSFJLNXEWXODHIWTVHRPUYEGUZCMRYFBPIIOEHD");

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
    msg.setTimeStamp(0.705784502343);
    msg.setSource(32703U);
    msg.setSourceEntity(65U);
    msg.setDestination(7263U);
    msg.setDestinationEntity(250U);
    msg.timeout = 30493U;
    msg.lat = 0.208020163897;
    msg.lon = 0.563983128045;
    msg.z = 0.31203926939;
    msg.z_units = 40U;
    msg.pitch = 0.254984236807;
    msg.amplitude = 0.904556502709;
    msg.duration = 65464U;
    msg.speed = 0.448286128539;
    msg.speed_units = 247U;
    msg.radius = 0.651462277995;
    msg.direction = 36U;
    msg.custom.assign("WJOTTDHQXEKJSDMTELIGOXHIZENXORAVDOPYWNTCHHAMYHDZOSDXLHRKCGATSRFRMKJNIZBCILBZERZLSAQYGFINNQVAUFYOIJWOXTVLICHKOOCILQKDXURNUNYFKHFWEUBQXMAQPJAFRGGSDVCLUXWFLSTAWFEGQGUJVRIMADZYGGYWFZBBNXPSCLESVNPV");

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
    msg.setTimeStamp(0.546138202227);
    msg.setSource(51358U);
    msg.setSourceEntity(181U);
    msg.setDestination(45051U);
    msg.setDestinationEntity(8U);
    msg.formation_name.assign("TKJIMVUJNEXUCSQQAPZNYPQPGHPZXUQMDAFTWDFBUSGOSJBCXKZEIMMPPANKEGODQHQBVVVLSPBUILSEGTMUIJCTOJBAMXOTCHUDASZMZYDKXEX");
    msg.reference_frame = 168U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55053U;
    tmp_msg_0.off_x = 0.935882812491;
    tmp_msg_0.off_y = 0.975068750467;
    tmp_msg_0.off_z = 0.919193679213;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YOTTDEKIFUZGHZXWXHNPRZDVQHHWCBDKVSXLMSOWFVIQFBYSNZZYVTSNLWZJMRRMWROBYBFKUAOIHSUIUDVQBUTJLDTDNIXQJFWJLSRLDZHEEKMAGWZCPP");

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
    msg.setTimeStamp(0.59714920826);
    msg.setSource(61747U);
    msg.setSourceEntity(55U);
    msg.setDestination(46469U);
    msg.setDestinationEntity(89U);
    msg.formation_name.assign("LCMWMQKUOSZOXTMYWSRGXRKWWANLUCPWGQBFMBVPOQNUTZKE");
    msg.reference_frame = 12U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64093U;
    tmp_msg_0.off_x = 0.0990945364843;
    tmp_msg_0.off_y = 0.839998542409;
    tmp_msg_0.off_z = 0.415361815369;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CYTGWSSEZOVQJIGDRSPPMRILQQZWCDOREGITDKQAEUTIGYAUXPOMQVRGWISYKUPNLSIUBTZFLM");

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
    msg.setTimeStamp(0.381946714085);
    msg.setSource(14889U);
    msg.setSourceEntity(211U);
    msg.setDestination(9691U);
    msg.setDestinationEntity(36U);
    msg.formation_name.assign("FQWOFJGYKCTCLLNXYLOSWVZNTKCHVM");
    msg.reference_frame = 212U;
    msg.custom.assign("HHRBFBMZGPWMGILDNDSMHOZRGFFLPYXBAIACQKOJOGDTXXIWLAOJYCTLZHVFVLUZKDQURMFQNWNJPFJKXOOMKUZPPCIATPIEADNPUNOKXJWYUESRDBKMQEBVRYGFWMWEWBOAIICIXHUEZNYTSRGMNAALCXBVMVHOFKQQXFSHEPYCJQ");

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
    msg.setTimeStamp(0.486570159389);
    msg.setSource(65373U);
    msg.setSourceEntity(110U);
    msg.setDestination(17054U);
    msg.setDestinationEntity(235U);
    msg.group_name.assign("KEGWQWJWLYMUKGNJXJRWNMOSMHKPVOLDDTXCBPRYXTGZBWOHUJHLSLLQBXHTZEECXNKFBHDVZNSXJDTPAKQHEUOVBBDQNABVKCLFQCSMUWIYRUOFTWYXFXNKHEQETWHXRJIANOZTFJVCMFMUESRUDJLIPFQCYZZIPSWTCUOYJRSAEOH");
    msg.formation_name.assign("MSDBFUQQQLKRGIZZQORSCFQHRULAMALFLUKQBVFOCEEHRKFTXSBJIBDKTHRMVRUJHJVAEGWELGDHMKTJXNIICWOZWKPVSJANONGWHUATVYOSNTLEZNOOPBZXLWRHEFYDFZIHKPAKNPCCPELEFXIGBYCQYXJJQCTAWVBCUDWJYYKROATHDTMDHZTIIXSFLGXPXMBYQJQNYDWZJYTXVBCR");
    msg.plan_id.assign("EYNMDORRSYBUCZSAHFVWSCJTFIWLXLIVLYORHKDVKWFMOXETXKSHZLHYWAWUGBIBFYLZIZBKNFXRQBFEOUPXOLEPDROVSSHGOXVQAYXBAXAWRZMJTNCQMADQQZTGPMIKGIQFIEPBHZLDPCDSIBFQUPKMJESINJUBHUCKYCYJPVGTZVEEHEEVPHVGANNWRCDUQSDORMIOSJQCDBGLHGXNFOYKZJJGLUWMXQRWT");
    msg.description.assign("WHYAKJLNXTZHIHFMUOHGMXBRBSFTCBQEGWJDBOCBFDRIESHRAVFCJAVZCGULQPDYNIKFAQTELMKLIMSKJHADHDFOEAPLALEXXYBCQQ");
    msg.leader_speed = 0.5235700166;
    msg.leader_bank_lim = 0.438324535601;
    msg.pos_sim_err_lim = 0.16116690071;
    msg.pos_sim_err_wrn = 0.372946137156;
    msg.pos_sim_err_timeout = 31860U;
    msg.converg_max = 0.56875234323;
    msg.converg_timeout = 36278U;
    msg.comms_timeout = 4859U;
    msg.turb_lim = 0.930163253617;
    msg.custom.assign("AKRNVUOGDEISEZUENPGHVRLSTNBWRPTBVKEHBKOMXATQNBNVXFWASACLUQZNHYPFZFKVYJISZKWGLPKDJWOGMHMFLWHPEPEOTURXWZCCUMTXGUYMBVTTIJPHLRHDDIRSGSJUTOYQEMOARUYPZNKBDBVQXWXMTQRLYDYWXAIIPDGXMVXNOXEQCLJUBZGIOELRNHFPOQG");

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
    msg.setTimeStamp(0.15135369398);
    msg.setSource(61936U);
    msg.setSourceEntity(62U);
    msg.setDestination(36961U);
    msg.setDestinationEntity(75U);
    msg.group_name.assign("QQTNEZWXVNRPXGTTJBEQYKUEENUSRXBMWAMFGODNDMDSYYWVUMDRHNROZSCWYJPYAYPRINQCHIBISYAXFZJRDFLQLNHIHBSMIUHTBMKDIDASPQOLOCRXBTYZLLVCCFKFAJXOZBGVLHMTGTUQGQAWJHAWPBJANLEGYPTSKJRSXFVHXTDLLECMVFUZIOOFIIGOGP");
    msg.formation_name.assign("OBANMUSVOZPGARBRHPYFSVVACYVHPCODCKQSPODIAYMYKPLPXIJQQYCRHHDKFZKJXHJUMUGJXGIFSBAANWLPKRNUZUTSWPSDLNTYIEONZMRCQHETBKRMTWDVAMWGJQI");
    msg.plan_id.assign("XTVNORRWYBFIPJVRBGVPMVMHWIAHUKHAOQKVPCYAHBNOSYFSONDVGBXTJJLEIFAQIYAFSFDMOKTPNUVRGSDPGREXBQJEUWACQIEEPOBULHYZFAOTGCGYHZKBL");
    msg.description.assign("YYAANKPGKFKPUTMRQTCUISQKVOAREPUBDKMACCMYXIOBTIYBZSBZWKAGHZPHROADLDEDZIWFWULJYLTAMAGDKEUOVNNJKZOSUCYLOHIFENCBBJPXJJVOMGMGUWNEHWNFADXYQIPOJVVMWLCVPVGHHUOES");
    msg.leader_speed = 0.997678449432;
    msg.leader_bank_lim = 0.618186861829;
    msg.pos_sim_err_lim = 0.0580591945222;
    msg.pos_sim_err_wrn = 0.872415446032;
    msg.pos_sim_err_timeout = 21874U;
    msg.converg_max = 0.58427782604;
    msg.converg_timeout = 28121U;
    msg.comms_timeout = 50289U;
    msg.turb_lim = 0.735071691053;
    msg.custom.assign("IABXEQWZHXUVGFYJDMCWDVFBWSOYHAUSPKMXPNASWIRBLBNAEGXBPUDCYPGIQTSKDUHKZDPGPBWIGKNXRINOCEWAURULHOJKFVORQJDVIFEEHFZQYZZYHEXCCDKSJLBSMOZLEGDNMUAFHC");

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
    msg.setTimeStamp(0.315743058308);
    msg.setSource(48829U);
    msg.setSourceEntity(198U);
    msg.setDestination(16954U);
    msg.setDestinationEntity(65U);
    msg.group_name.assign("RLJNOAGRPQCFWMMOKCKNWAVMCNZEFNWPRATCSBUDPXWENEGRBOHMEPDHPJXYLFZR");
    msg.formation_name.assign("TISHDAOIQNZCZVODKOIBGRKVQRYIGRALUHFGLPTSIMYXSGXULJWFMWEVRVYWOMRXLZEBSYZDBDTBMHIBYLHYZPTVPMFOUCEAJPSVZJNIXMNUZQVWMACKGXJNXFSQCOECWZUNKQYLYKJLDUHXIHOPJOFPPLRYDTJBXMQIADCEYD");
    msg.plan_id.assign("DWYDXUWKHIQRRELMBJGJVQMXGPHLHCLZNKSEOHNHUYPXBPLXHKIFSAEOTKGFEAFQIIZPVWOKMWAOZECRTPLLNROZQZMIGNISANVDMNWRAJSNCQTWNVIHOMKPQSSBHRTAMOZRTJGJIKSZZDBOXWKFTSHTVCUQ");
    msg.description.assign("LINAXGEQBLMDEJVXZNMDQSIPRMYPFOSWPOXFVYHJAQLSVHKUGEDJPTYORGYZWPAUGUMBEKBDLRTYZBLEFODAJMXOGHMYC");
    msg.leader_speed = 0.831993975061;
    msg.leader_bank_lim = 0.386338348532;
    msg.pos_sim_err_lim = 0.416047241931;
    msg.pos_sim_err_wrn = 0.313488174913;
    msg.pos_sim_err_timeout = 51775U;
    msg.converg_max = 0.971827928827;
    msg.converg_timeout = 6415U;
    msg.comms_timeout = 18908U;
    msg.turb_lim = 0.459889010526;
    msg.custom.assign("GIJOKHSMTATCGALIZFBPCREFYPVDBCMQIWGHSQIELMNDXGRLXSVCGQEBKFDHNRXOZRMZPHUHIPBIUPHEXNFUKCKEWLWIGYBNDVXGKAEXTCMAQBYCGYUOHRQGBWOBVODATARYJUZACFCRGTHVEHJPPVDSRKJYPAJSHNSAYWTTWUINAFNONYZLSOIRQUDTQJWJMDQNJTDZIBQUMYFMULWTFFKJCULZSDOEZMNKSLSVXXRVBEWPELZXM");

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
    msg.setTimeStamp(0.83021983637);
    msg.setSource(1117U);
    msg.setSourceEntity(176U);
    msg.setDestination(52889U);
    msg.setDestinationEntity(127U);
    msg.control_src = 56759U;
    msg.control_ent = 114U;
    msg.timeout = 0.177442370059;
    msg.loiter_radius = 0.687034860995;
    msg.altitude_interval = 0.948687192794;

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
    msg.setTimeStamp(0.17014292587);
    msg.setSource(9571U);
    msg.setSourceEntity(176U);
    msg.setDestination(60798U);
    msg.setDestinationEntity(99U);
    msg.control_src = 43122U;
    msg.control_ent = 231U;
    msg.timeout = 0.307056303189;
    msg.loiter_radius = 0.9442243355;
    msg.altitude_interval = 0.265915622555;

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
    msg.setTimeStamp(0.0636589140703);
    msg.setSource(65333U);
    msg.setSourceEntity(111U);
    msg.setDestination(33082U);
    msg.setDestinationEntity(191U);
    msg.control_src = 33913U;
    msg.control_ent = 63U;
    msg.timeout = 0.42489816365;
    msg.loiter_radius = 0.500429557352;
    msg.altitude_interval = 0.439566660334;

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
    msg.setTimeStamp(0.923650368229);
    msg.setSource(8097U);
    msg.setSourceEntity(147U);
    msg.setDestination(7012U);
    msg.setDestinationEntity(11U);
    msg.flags = 26U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.780984812932;
    tmp_msg_0.speed_units = 68U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.535270620225;
    tmp_msg_1.z_units = 218U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.239474795929;
    msg.lon = 0.684791956812;
    msg.radius = 0.52493982605;

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
    msg.setTimeStamp(0.786160899246);
    msg.setSource(63149U);
    msg.setSourceEntity(244U);
    msg.setDestination(12931U);
    msg.setDestinationEntity(247U);
    msg.flags = 93U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.181423845489;
    tmp_msg_0.speed_units = 153U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.402292932913;
    tmp_msg_1.z_units = 154U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.840658377168;
    msg.lon = 0.230573808807;
    msg.radius = 0.406306619842;

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
    msg.setTimeStamp(0.0763645594148);
    msg.setSource(30212U);
    msg.setSourceEntity(65U);
    msg.setDestination(23344U);
    msg.setDestinationEntity(169U);
    msg.flags = 236U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0156335472592;
    tmp_msg_0.speed_units = 29U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.925953509718;
    tmp_msg_1.z_units = 108U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.336830267078;
    msg.lon = 0.57808191126;
    msg.radius = 0.750326430275;

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
    msg.setTimeStamp(0.236204722987);
    msg.setSource(9757U);
    msg.setSourceEntity(221U);
    msg.setDestination(21200U);
    msg.setDestinationEntity(55U);
    msg.control_src = 25819U;
    msg.control_ent = 247U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 99U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.445760318283;
    tmp_tmp_msg_0_0.speed_units = 149U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.216370067269;
    tmp_tmp_msg_0_1.z_units = 40U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.876960537798;
    tmp_msg_0.lon = 0.0548003247662;
    tmp_msg_0.radius = 0.619358188026;
    msg.reference.set(tmp_msg_0);
    msg.state = 101U;
    msg.proximity = 21U;

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
    msg.setTimeStamp(0.868456644978);
    msg.setSource(56787U);
    msg.setSourceEntity(47U);
    msg.setDestination(31885U);
    msg.setDestinationEntity(89U);
    msg.control_src = 226U;
    msg.control_ent = 54U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 115U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0989457150989;
    tmp_tmp_msg_0_0.speed_units = 240U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.498849517354;
    tmp_tmp_msg_0_1.z_units = 27U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.895712383834;
    tmp_msg_0.lon = 0.985710755524;
    tmp_msg_0.radius = 0.170736523964;
    msg.reference.set(tmp_msg_0);
    msg.state = 29U;
    msg.proximity = 107U;

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
    msg.setTimeStamp(0.620648945655);
    msg.setSource(7979U);
    msg.setSourceEntity(128U);
    msg.setDestination(58913U);
    msg.setDestinationEntity(83U);
    msg.control_src = 6140U;
    msg.control_ent = 54U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 16U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.593862074339;
    tmp_tmp_msg_0_0.speed_units = 159U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.840554752721;
    tmp_tmp_msg_0_1.z_units = 254U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.354657421976;
    tmp_msg_0.lon = 0.367959937019;
    tmp_msg_0.radius = 0.413523777373;
    msg.reference.set(tmp_msg_0);
    msg.state = 123U;
    msg.proximity = 242U;

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
    msg.setTimeStamp(0.411895444949);
    msg.setSource(55563U);
    msg.setSourceEntity(25U);
    msg.setDestination(41667U);
    msg.setDestinationEntity(9U);
    msg.ax_cmd = 0.585767241204;
    msg.ay_cmd = 0.979012166007;
    msg.az_cmd = 0.66815461632;
    msg.ax_des = 0.543151033703;
    msg.ay_des = 0.916970170452;
    msg.az_des = 0.499404548809;
    msg.virt_err_x = 0.710338656384;
    msg.virt_err_y = 0.531211415216;
    msg.virt_err_z = 0.583836179469;
    msg.surf_fdbk_x = 0.32677375021;
    msg.surf_fdbk_y = 0.381206705085;
    msg.surf_fdbk_z = 0.470204006453;
    msg.surf_unkn_x = 0.79887388905;
    msg.surf_unkn_y = 0.503431096053;
    msg.surf_unkn_z = 0.465831803596;
    msg.ss_x = 0.613927536934;
    msg.ss_y = 0.444431765356;
    msg.ss_z = 0.814921761895;

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
    msg.setTimeStamp(0.110465906442);
    msg.setSource(43413U);
    msg.setSourceEntity(96U);
    msg.setDestination(41696U);
    msg.setDestinationEntity(54U);
    msg.ax_cmd = 0.331286856894;
    msg.ay_cmd = 0.878737490032;
    msg.az_cmd = 0.478537934464;
    msg.ax_des = 0.448424100318;
    msg.ay_des = 0.55288676362;
    msg.az_des = 0.850523218402;
    msg.virt_err_x = 0.830972442977;
    msg.virt_err_y = 0.542834394681;
    msg.virt_err_z = 0.602664729313;
    msg.surf_fdbk_x = 0.694873899375;
    msg.surf_fdbk_y = 0.670874733127;
    msg.surf_fdbk_z = 0.276202201223;
    msg.surf_unkn_x = 0.313406272822;
    msg.surf_unkn_y = 0.402510322882;
    msg.surf_unkn_z = 0.352840318387;
    msg.ss_x = 0.800551137407;
    msg.ss_y = 0.636211258069;
    msg.ss_z = 0.319819926029;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JOSIPUNUJYEVEXSLCDSDFNTCYTNWXJRXFLJVCTARPDQBSLLXZBZMIDJIFOUATHPYWLMTQRLAIYOSZOOSVSFUHUTNRGPYWCANYANRPHQEOVRC");
    tmp_msg_0.dist = 0.519798662973;
    tmp_msg_0.err = 0.799007177825;
    tmp_msg_0.ctrl_imp = 0.447238302005;
    tmp_msg_0.rel_dir_x = 0.430163459905;
    tmp_msg_0.rel_dir_y = 0.218034579959;
    tmp_msg_0.rel_dir_z = 0.0824807183862;
    tmp_msg_0.err_x = 0.443247712544;
    tmp_msg_0.err_y = 0.615722258564;
    tmp_msg_0.err_z = 0.790615342938;
    tmp_msg_0.rf_err_x = 0.536666742988;
    tmp_msg_0.rf_err_y = 0.790956984602;
    tmp_msg_0.rf_err_z = 0.894169570823;
    tmp_msg_0.rf_err_vx = 0.621941200967;
    tmp_msg_0.rf_err_vy = 0.0301041407568;
    tmp_msg_0.rf_err_vz = 0.55193810006;
    tmp_msg_0.ss_x = 0.284017914614;
    tmp_msg_0.ss_y = 0.191808368488;
    tmp_msg_0.ss_z = 0.674581072293;
    tmp_msg_0.virt_err_x = 0.860139754751;
    tmp_msg_0.virt_err_y = 0.353376147938;
    tmp_msg_0.virt_err_z = 0.708230282076;
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
    msg.setTimeStamp(0.46021307579);
    msg.setSource(1920U);
    msg.setSourceEntity(83U);
    msg.setDestination(33432U);
    msg.setDestinationEntity(33U);
    msg.ax_cmd = 0.901827603675;
    msg.ay_cmd = 0.823158770991;
    msg.az_cmd = 0.155415453189;
    msg.ax_des = 0.396714596238;
    msg.ay_des = 0.841931821795;
    msg.az_des = 0.614205249119;
    msg.virt_err_x = 0.954596434123;
    msg.virt_err_y = 0.12607492362;
    msg.virt_err_z = 0.484741049564;
    msg.surf_fdbk_x = 0.818754534453;
    msg.surf_fdbk_y = 0.364550618883;
    msg.surf_fdbk_z = 0.964259745335;
    msg.surf_unkn_x = 0.266049462798;
    msg.surf_unkn_y = 0.219716426662;
    msg.surf_unkn_z = 0.735970450413;
    msg.ss_x = 0.924321786045;
    msg.ss_y = 0.753859200148;
    msg.ss_z = 0.105276521037;

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
    msg.setTimeStamp(0.332351185724);
    msg.setSource(4057U);
    msg.setSourceEntity(238U);
    msg.setDestination(65356U);
    msg.setDestinationEntity(99U);
    msg.s_id.assign("QTLKMUCNAMCXMUCYNDTVAYBPXWURECAKOXROUIXADXZOHFHKVEEFXJOJJNUZASPWWLCOFWYJTSVEOHOPZEHIECEGQFVWIGM");
    msg.dist = 0.0509965220959;
    msg.err = 0.314104757886;
    msg.ctrl_imp = 0.0984424116248;
    msg.rel_dir_x = 0.820402062807;
    msg.rel_dir_y = 0.637173325798;
    msg.rel_dir_z = 0.483402732557;
    msg.err_x = 0.784176722928;
    msg.err_y = 0.078045943268;
    msg.err_z = 0.257535518873;
    msg.rf_err_x = 0.962638379841;
    msg.rf_err_y = 0.46149258684;
    msg.rf_err_z = 0.0630885432179;
    msg.rf_err_vx = 0.865850780587;
    msg.rf_err_vy = 0.0932261051257;
    msg.rf_err_vz = 0.542007504708;
    msg.ss_x = 0.515984227593;
    msg.ss_y = 0.248936477293;
    msg.ss_z = 0.403579329587;
    msg.virt_err_x = 0.166946864218;
    msg.virt_err_y = 0.621327738814;
    msg.virt_err_z = 0.439354971591;

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
    msg.setTimeStamp(0.476754356446);
    msg.setSource(14358U);
    msg.setSourceEntity(46U);
    msg.setDestination(57867U);
    msg.setDestinationEntity(140U);
    msg.s_id.assign("XXKRKTKFLEFBAEDEFPULXPYLDHTRRQIMQRFMZOWCZHGUIXPBTFVGNNFUJBNZABEQKGJRILRLREIDRJSHVGVMKZUMIUTSETQJWBCWEYQWOBANWM");
    msg.dist = 0.914268714512;
    msg.err = 0.249034315535;
    msg.ctrl_imp = 0.951233475067;
    msg.rel_dir_x = 0.92239429586;
    msg.rel_dir_y = 0.570433465846;
    msg.rel_dir_z = 0.595676523998;
    msg.err_x = 0.556757864178;
    msg.err_y = 0.371184923154;
    msg.err_z = 0.815773640636;
    msg.rf_err_x = 0.418959083573;
    msg.rf_err_y = 0.714182145772;
    msg.rf_err_z = 0.373089141317;
    msg.rf_err_vx = 0.0805051616038;
    msg.rf_err_vy = 0.991517178823;
    msg.rf_err_vz = 0.22576875731;
    msg.ss_x = 0.827808619271;
    msg.ss_y = 0.37530781603;
    msg.ss_z = 0.242231210876;
    msg.virt_err_x = 0.677956841989;
    msg.virt_err_y = 0.515944568327;
    msg.virt_err_z = 0.667487101843;

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
    msg.setTimeStamp(0.644252742232);
    msg.setSource(64404U);
    msg.setSourceEntity(127U);
    msg.setDestination(13670U);
    msg.setDestinationEntity(237U);
    msg.s_id.assign("CPVRJRAKLWFQJXESVLQHFJOPUEMEDJOPVISSKGMTVYDRDOCDOXQGZOXIEFNWBGULSRHBNTHQFFIFGWAGALALGPXGIICWQSKUZLMFSKMNJHJBNPEWBN");
    msg.dist = 0.0972235909784;
    msg.err = 0.501763001817;
    msg.ctrl_imp = 0.598751991643;
    msg.rel_dir_x = 0.579399034184;
    msg.rel_dir_y = 0.372811643095;
    msg.rel_dir_z = 0.523666832898;
    msg.err_x = 0.974016883859;
    msg.err_y = 0.613373938241;
    msg.err_z = 0.318170089376;
    msg.rf_err_x = 0.0788556075503;
    msg.rf_err_y = 0.967188392235;
    msg.rf_err_z = 0.256772133471;
    msg.rf_err_vx = 0.315383073535;
    msg.rf_err_vy = 0.751463450588;
    msg.rf_err_vz = 0.0898913172658;
    msg.ss_x = 0.457978705741;
    msg.ss_y = 0.232212838054;
    msg.ss_z = 0.796445535437;
    msg.virt_err_x = 0.992393000664;
    msg.virt_err_y = 0.972579763937;
    msg.virt_err_z = 0.881789017875;

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
    msg.setTimeStamp(0.576529724857);
    msg.setSource(25863U);
    msg.setSourceEntity(22U);
    msg.setDestination(16038U);
    msg.setDestinationEntity(8U);
    msg.timeout = 28278U;
    msg.rpm = 0.633853921233;
    msg.direction = 1U;
    msg.custom.assign("NTSGHXIKHWAFLSWFGYSBUCISMDXOVKAQXNIEJQMYVSNCPLNIAKXWMXYKUBABAXDNAVFTTGCEEHQIJPSGWVRZYTFJQFLJLTXYDFZISUOMKIREKRXNZPQHXMTZVBQJRDPOOXJCVGEBGOLRYVPQLHPSYBSHDRANKCDRLNHKVWCIBWGWKAYUSDOEDQNBFTUUMEVGWZZDLAJBNPTCFEOPUAULJHBJUGMGORWYMPHFOVZRMCKOCUZQTJZECPYHLDRIQ");

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
    msg.setTimeStamp(0.863394077998);
    msg.setSource(21533U);
    msg.setSourceEntity(28U);
    msg.setDestination(63912U);
    msg.setDestinationEntity(212U);
    msg.timeout = 30368U;
    msg.rpm = 0.824390443812;
    msg.direction = 159U;
    msg.custom.assign("JCGOKROBHVTQNJIIGKKAXDMUAXZPWAXFTOCSRDHRPWWFLLPAADJAUPZVLFOVFBXTPCZTSWTOYJODMQFDKNNWMGXPIHIBDRMXHQXQRLSAPVBDNFUHLSHQKMQJIGFYMGENNJWQZFEMYEPYPORYCWHLMAMAHZOKEYVLUWROILVFAXGQBLRHZXWZSEKJQEDIIVKSJBBGRNNWKCRCTHEZCTMEYBJUBN");

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
    msg.setTimeStamp(0.665119299943);
    msg.setSource(53246U);
    msg.setSourceEntity(59U);
    msg.setDestination(50472U);
    msg.setDestinationEntity(240U);
    msg.timeout = 13443U;
    msg.rpm = 0.977297509597;
    msg.direction = 169U;
    msg.custom.assign("MDOFDAVYSBOILDFRJTJAANXHTLWNWCHLOQBESLHZPVYEGSKGCZKUNWQBCAZUXVSHBFFNBEOGAQQRIRNHUQ");

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
    msg.setTimeStamp(0.354268894433);
    msg.setSource(31562U);
    msg.setSourceEntity(163U);
    msg.setDestination(49323U);
    msg.setDestinationEntity(245U);
    msg.formation_name.assign("AGMUHDKJGDTZZETXYOBTHDTBLRQHIBKPLSRTPLBXDZFJORIALZYXVCRQSXPUCIQWADUEANOUOWVFEGRSTHFVKKEAJXVBDSZOQJLFAQYWBUCNQINSIADBDLJZUMVZXHSOMUIKUGYRENVIWPGQTAPPSRGCFCEAQRNHYFMCWYAROWSKSLJPZGFQHUBCYYXNRJBGVJXTCGKEVIKHNWEOOPFMMZSEIOYNWJFUCVKDGHNLMYEWLXXJQWPLT");
    msg.type = 116U;
    msg.op = 85U;
    msg.group_name.assign("ZPALSIDYZPLWXTGJYQFKVFFDQMVJLUZSWZFNTWFZXKPODQLVESPWJSYCLQBNJDJJDWYEDRHFENATISXFOGGEFSUHEQKBPUVYXARDCUVHUGHYRTLGLWNCEOAWIWGVXAKJZMMYOQZGMMQKBTGZBCUKKPPKOIARLABNTMEHEEYOAAVJOIXYOVCXSBKNHUCRMCBRIPRSGQLPTVDYHKFZJZNTBUGO");
    msg.plan_id.assign("VEEQHBPKJUMJBLBOMITCCAJPSAITUEDSVNWUOFNYOFJNZKPRKDSPMKABTTLTKDPUBZXVBELXTDSGXDKGHKYX");
    msg.description.assign("SSDDEGZXGPWCIDUCYSLPXCFDLZJFINTBOROLINPHKHRMGVYBSAVSCAUQMNFEPJDNALSXIEUVIQKIYAXJITDHNNZAHIKMYKWTOZOJWVYPCBJHELDRKGBCWTNRM");
    msg.reference_frame = 106U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33287U;
    tmp_msg_0.off_x = 0.933930829665;
    tmp_msg_0.off_y = 0.224433801304;
    tmp_msg_0.off_z = 0.285086536895;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.139411515113;
    msg.leader_speed_min = 0.415984013766;
    msg.leader_speed_max = 0.0410357302364;
    msg.leader_alt_min = 0.3967155216;
    msg.leader_alt_max = 0.859932685103;
    msg.pos_sim_err_lim = 0.0295802493789;
    msg.pos_sim_err_wrn = 0.555614571641;
    msg.pos_sim_err_timeout = 23253U;
    msg.converg_max = 0.913026772799;
    msg.converg_timeout = 58383U;
    msg.comms_timeout = 50446U;
    msg.turb_lim = 0.936778361127;
    msg.custom.assign("TJEXYNKLYNMLVOYWVOTYLEZOPMAFKZBVADQQKJFMHFJOAHNAPZHMZOEMAHGIZRGWLURVJQHEIABRNNIXSXYLIPIKSWHQVKCJBEQKSCPXTRTRGCQMZUGICGDPOZCJKFSGMXDXXPPGUEXQZXNFHRLFHUFPDUABYWDNBYWHKWCWIBUUCWYSQLESCPROKMDTWNYTYJIJDLNRSSABCQMAEGUDLJSFEU");

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
    msg.setTimeStamp(0.252522462629);
    msg.setSource(17740U);
    msg.setSourceEntity(148U);
    msg.setDestination(60844U);
    msg.setDestinationEntity(107U);
    msg.formation_name.assign("MQHFXABREMPSVGLXCJECZOWGXGQREEGHKUAPLHRNFKMGJJMZJXEUCOROCICOFKLZVICBYXETADFTDSNQKMECIHSUDFFYPAMAOCRX");
    msg.type = 240U;
    msg.op = 54U;
    msg.group_name.assign("UDXMQEGFXNECTCZXHHGDEWIFMFDULCIWZWLUYQHYHPCHIVHUACTZKZ");
    msg.plan_id.assign("FEPLERGDLBCGYWDVBKOWPOYQZSNOBGMHFGVEVGEAEASWPZCDHKFTFJVJIIXWYATZNGOXVLKZOBRQPCGMZRHANMYESZXIXFTTNDLPXEFRBBICHOSAFZUJSBFUQRTJCUVQZMSAQJNJKFXJNBVOOPUWRUZKWP");
    msg.description.assign("NQWBZBIASMITYQXCTNHFOGNLADBYCXNPGUWMILVSRXRFIWXHVEPELSDRYOKMFRLPJYTLNRIIDOCVZXCESTXKJAFJZISOXEWAPCOIHKLOQMSKDMRNGTWYYKYCVISVQDAVJFPIBEFUPMTXB");
    msg.reference_frame = 8U;
    msg.leader_bank_lim = 0.898636282434;
    msg.leader_speed_min = 0.145111343238;
    msg.leader_speed_max = 0.697625610446;
    msg.leader_alt_min = 0.207139784165;
    msg.leader_alt_max = 0.099295039506;
    msg.pos_sim_err_lim = 0.507469603411;
    msg.pos_sim_err_wrn = 0.184663369678;
    msg.pos_sim_err_timeout = 24543U;
    msg.converg_max = 0.254776954334;
    msg.converg_timeout = 45345U;
    msg.comms_timeout = 42446U;
    msg.turb_lim = 0.0506518907763;
    msg.custom.assign("XLKQECLGMJURJRYFLUAHVHUHMUDHECANASBYXIEPFUQXZFWRGOYXXITNTBEOHJHMETGNITSKNLUDROUFOQBTOYIANHNWBKQIVZPWCQNSDPXHWLJQXEUICYYZJPEHPXLPZKDSWWGTWETVRZCAVSGBVCJDFBCBOQGKKKZLCKEATVDLCMSWKEIYPFFGGRPMVHUDOMDPQYOANQNDSQTSNZLBWLRFYPKWAIJSXMSOZBAJRGMARBVIZFJIDMJV");

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
    msg.setTimeStamp(0.662090975272);
    msg.setSource(4329U);
    msg.setSourceEntity(26U);
    msg.setDestination(53804U);
    msg.setDestinationEntity(117U);
    msg.formation_name.assign("TUUIARZEHNQEBVQOXXTRWIRMMNPTEYFUQCGSADANHZXDBZASIGPKVUZGTKJXEUQIRFXJFLFBSJQACPCEPPXGZKMWWRSRAHHCMGAHBTZCMRYJRVEEXZKVUHFRWFIGXLWSOVJLWSGILYHHBAQDMQYMAL");
    msg.type = 196U;
    msg.op = 215U;
    msg.group_name.assign("RZEYADIBSPHJXJHWQPZLPDZCUMPOYENEDGZPCYTDCRXBAQILTSSACSHVAGIHVWJYHDUIOFWZTPPRICUTVFFOBFMSTFFMNDPERBHFWZRJXWKVUVUXUNJZEFDPXPLZXRFSBDGIWAKVYIXUTZOJHORGDRLLYZIYJKBVGOCHITQXMXHYKOWQXYADGBGOWKNKTHNAQQMQELUUAMBKAGCASLWEBQNKCULJSQEV");
    msg.plan_id.assign("LICYEVPGEDGZROOQNZBWVYQPRJFDGHLDCTDMCJVFNOZLXFKRWCHZYYMPDBELCAWORUIFKVVDFEFY");
    msg.description.assign("IXLIXSIYEBERGWSYNSPMCGHGKOYSSDRZDNZXGCTEKBHOPWAVXIDTMWTUEMLZXUVUNQZMNEEJYEEFDZUWXKKTFWMZIRUOOGPMCYFBALHARVHQFLIIFTCNTKGISXABINRJYJGOOQZHBVNBPKLWVQJBZDNDCVQMJQLNBTTKUAYOZCLZWVUHJRPXFQFMGFKAAUYFSQSALSHUACWRORELYUGPPMGEJWFYPQTVJVTLXHVJDCPMWOPCOHNDISQ");
    msg.reference_frame = 11U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42114U;
    tmp_msg_0.off_x = 0.602481321716;
    tmp_msg_0.off_y = 0.00711384679455;
    tmp_msg_0.off_z = 0.704852447098;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.203271635547;
    msg.leader_speed_min = 0.796120767645;
    msg.leader_speed_max = 0.353818369763;
    msg.leader_alt_min = 0.077942664904;
    msg.leader_alt_max = 0.305771128518;
    msg.pos_sim_err_lim = 0.242700281869;
    msg.pos_sim_err_wrn = 0.162743674417;
    msg.pos_sim_err_timeout = 22160U;
    msg.converg_max = 0.903505300213;
    msg.converg_timeout = 59474U;
    msg.comms_timeout = 49342U;
    msg.turb_lim = 0.165820241699;
    msg.custom.assign("IUOLOGPVWKXGZYETAJYLEYNWLTXHVWGMRKLADXYCYLSDOJWLD");

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
    msg.setTimeStamp(0.676217502135);
    msg.setSource(30195U);
    msg.setSourceEntity(244U);
    msg.setDestination(21103U);
    msg.setDestinationEntity(230U);
    msg.timeout = 56357U;
    msg.lat = 0.817139299826;
    msg.lon = 0.345638159301;
    msg.z = 0.433105147763;
    msg.z_units = 174U;
    msg.speed = 0.893086757474;
    msg.speed_units = 139U;
    msg.custom.assign("KQXMUZJADVKPDWTNXVRBJLPPXPHOKPHBCWQQZMCHWFUEAWXMALLCADEJUARSUZSTWCVXRFNJOINGIVPLJYUUMZHHQEXH");

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
    msg.setTimeStamp(0.157269899096);
    msg.setSource(26144U);
    msg.setSourceEntity(53U);
    msg.setDestination(47969U);
    msg.setDestinationEntity(196U);
    msg.timeout = 54652U;
    msg.lat = 0.233239694053;
    msg.lon = 0.845705636216;
    msg.z = 0.212419795871;
    msg.z_units = 88U;
    msg.speed = 0.948386337279;
    msg.speed_units = 83U;
    msg.custom.assign("LHNURFVIJRHBZSARDZNUHYXIGGMTMMNVSJLTRIZORCUDFQZXBEHXGQGMCZCIQFSQDOITUPOYWKWWUMITXJYXYEBIKTTNGGGSPQQIRUXLBOKYITFQNWFBFJEQCUEFKSABLNTOOSOHNVJPLDDNCGUVULVEA");

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
    msg.setTimeStamp(0.506361450151);
    msg.setSource(7903U);
    msg.setSourceEntity(162U);
    msg.setDestination(39904U);
    msg.setDestinationEntity(48U);
    msg.timeout = 60889U;
    msg.lat = 0.510672223383;
    msg.lon = 0.280586456738;
    msg.z = 0.790565407974;
    msg.z_units = 106U;
    msg.speed = 0.607075823591;
    msg.speed_units = 67U;
    msg.custom.assign("BUTXJLHBFUSFJVGLTHRCAJMQDSWHWRSOLXJXOVFWSMETJVOIFXEEOIALUYNUFSFQZNXISYUQYQPSYOQKRDZMKQHAZNZTBLPGHHDMJCSTWAROAZNELLJIZI");

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
    msg.setTimeStamp(0.702289446406);
    msg.setSource(50468U);
    msg.setSourceEntity(61U);
    msg.setDestination(19511U);
    msg.setDestinationEntity(207U);
    msg.timeout = 46416U;
    msg.lat = 0.80840541923;
    msg.lon = 0.107954818058;
    msg.z = 0.819522573978;
    msg.z_units = 31U;
    msg.speed = 0.141329298923;
    msg.speed_units = 157U;
    msg.custom.assign("KCSURCOFAHFT");

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
    msg.setTimeStamp(0.0807424208504);
    msg.setSource(39015U);
    msg.setSourceEntity(102U);
    msg.setDestination(37688U);
    msg.setDestinationEntity(61U);
    msg.timeout = 49960U;
    msg.lat = 0.820923831388;
    msg.lon = 0.0269143634527;
    msg.z = 0.822500154127;
    msg.z_units = 205U;
    msg.speed = 0.162286581337;
    msg.speed_units = 189U;
    msg.custom.assign("GJYJPQUQSKZRGEDZUXTEWSKTKCBTVMLVKVAANRKMTBIBQIHHXFHNLMNSAWCHDQPMUHARWWEWNODDZCXQELGQCDVZPJAOHTOBIDKCLCQLCFOZWYGFRJXSJMHMOGELZEXUJZYQYSTVUNUSLKPKFIKTBIYERBXSGUYNZNWJ");

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
    msg.setTimeStamp(0.567422889701);
    msg.setSource(53223U);
    msg.setSourceEntity(195U);
    msg.setDestination(3242U);
    msg.setDestinationEntity(148U);
    msg.timeout = 19274U;
    msg.lat = 0.25491125921;
    msg.lon = 0.0696759322487;
    msg.z = 0.391037433979;
    msg.z_units = 169U;
    msg.speed = 0.927914937329;
    msg.speed_units = 5U;
    msg.custom.assign("RBTLQJMQEMDWDAAOEKDPFZQKCU");

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
    msg.setTimeStamp(0.909155588171);
    msg.setSource(5991U);
    msg.setSourceEntity(149U);
    msg.setDestination(5898U);
    msg.setDestinationEntity(96U);
    msg.arrival_time = 0.638367524397;
    msg.lat = 0.990895261601;
    msg.lon = 0.963918807397;
    msg.z = 0.838420263941;
    msg.z_units = 197U;
    msg.travel_z = 0.481415817167;
    msg.travel_z_units = 143U;
    msg.delayed = 215U;

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
    msg.setTimeStamp(0.0530981620329);
    msg.setSource(41339U);
    msg.setSourceEntity(141U);
    msg.setDestination(15339U);
    msg.setDestinationEntity(232U);
    msg.arrival_time = 0.847514401378;
    msg.lat = 0.706762417436;
    msg.lon = 0.149605404652;
    msg.z = 0.862711460386;
    msg.z_units = 209U;
    msg.travel_z = 0.244319987907;
    msg.travel_z_units = 111U;
    msg.delayed = 66U;

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
    msg.setTimeStamp(0.147247495267);
    msg.setSource(39355U);
    msg.setSourceEntity(33U);
    msg.setDestination(5660U);
    msg.setDestinationEntity(125U);
    msg.arrival_time = 0.283223620004;
    msg.lat = 0.761811505974;
    msg.lon = 0.303040574506;
    msg.z = 0.495764237046;
    msg.z_units = 219U;
    msg.travel_z = 0.167351206714;
    msg.travel_z_units = 249U;
    msg.delayed = 231U;

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
    msg.setTimeStamp(0.883194003648);
    msg.setSource(2768U);
    msg.setSourceEntity(251U);
    msg.setDestination(24327U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.820454828579;
    msg.lon = 0.653897652193;
    msg.z = 0.707362303577;
    msg.z_units = 8U;
    msg.speed = 0.414595928094;
    msg.speed_units = 47U;
    msg.bearing = 0.252951882465;
    msg.cross_angle = 0.577402455222;
    msg.width = 0.329764302446;
    msg.length = 0.345941581658;
    msg.coff = 42U;
    msg.angaperture = 0.859172847462;
    msg.range = 30929U;
    msg.overlap = 64U;
    msg.flags = 168U;
    msg.custom.assign("AUPCVVLSFVDUDBPSYFAJXKBVMVZJDOBNSYTWPRYSQURFNZRGPJBGBFDWHMARZEGHEHKTMELASRMMWCYMDHNOTMEPUESDJBQFKAGPYDYNXZCIWMCLEQ");

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
    msg.setTimeStamp(0.521866080136);
    msg.setSource(42598U);
    msg.setSourceEntity(68U);
    msg.setDestination(60267U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.735311030771;
    msg.lon = 0.750341538347;
    msg.z = 0.0625173412334;
    msg.z_units = 143U;
    msg.speed = 0.922881746019;
    msg.speed_units = 216U;
    msg.bearing = 0.776790472448;
    msg.cross_angle = 0.131608008451;
    msg.width = 0.95978619691;
    msg.length = 0.295334060396;
    msg.coff = 44U;
    msg.angaperture = 0.915266760011;
    msg.range = 47814U;
    msg.overlap = 170U;
    msg.flags = 24U;
    msg.custom.assign("CJTNYPLBSVRWUAXCAQLGEWKLLKZXGYFRGRMZBVCYFPQHRMQHCFWKNGTFYZKQXA");

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
    msg.setTimeStamp(0.107064760066);
    msg.setSource(30520U);
    msg.setSourceEntity(88U);
    msg.setDestination(63228U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.0227182764857;
    msg.lon = 0.583854223238;
    msg.z = 0.0934737212263;
    msg.z_units = 149U;
    msg.speed = 0.794760638118;
    msg.speed_units = 214U;
    msg.bearing = 0.642417621335;
    msg.cross_angle = 0.396508003489;
    msg.width = 0.763047248803;
    msg.length = 0.912431060044;
    msg.coff = 103U;
    msg.angaperture = 0.593147576729;
    msg.range = 8756U;
    msg.overlap = 116U;
    msg.flags = 19U;
    msg.custom.assign("RIISQYNXJPMEGNKMTYOWTGELSQXTERWKEALRCNMXXGKHKYWZXLMBJKQCUFGNYLLRNCOZHEADSLTHGEROTIPQROGVYADZFBWZZMWUHHPFXGDHFMMJNQTFKFVICCCTVKRSWXDAJDIQBVKJIPVNESAGHWEVHTUSKDIQODRMWXMOSDNVAWXNBFBUOQYVPIAAOZYZ");

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
    msg.setTimeStamp(0.49616510794);
    msg.setSource(47206U);
    msg.setSourceEntity(99U);
    msg.setDestination(55607U);
    msg.setDestinationEntity(92U);
    msg.timeout = 28441U;
    msg.lat = 0.606349093017;
    msg.lon = 0.281776124128;
    msg.z = 0.00149603821166;
    msg.z_units = 191U;
    msg.speed = 0.827168155228;
    msg.speed_units = 205U;
    msg.syringe0 = 16U;
    msg.syringe1 = 10U;
    msg.syringe2 = 191U;
    msg.custom.assign("ISWBHRYPKATBMDUDBQJOZAKLGOLSJEENDNOKDYCMSJKRWXVWMAJVUAQFOPIMUNAHIMCGGGHYVQOHFPJGQEBHVRVRVAFZMBUSRHOTFGTXNYUMRDUQTFTSPCTAGKILLHAVNEWHYNZSTLOGNYFLVFJWPWIZGSJBEJKFPXBXHSWCSDQDRYIZPXIJDFVYEQLTIPBCULKCLMRETCXZCEZEWBJFWVNYSRDKHUKOIUCAAQNBXMK");

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
    msg.setTimeStamp(0.0385601297666);
    msg.setSource(46486U);
    msg.setSourceEntity(175U);
    msg.setDestination(46470U);
    msg.setDestinationEntity(22U);
    msg.timeout = 10949U;
    msg.lat = 0.913522171065;
    msg.lon = 0.396939356446;
    msg.z = 0.373828724941;
    msg.z_units = 184U;
    msg.speed = 0.1621590733;
    msg.speed_units = 153U;
    msg.syringe0 = 232U;
    msg.syringe1 = 204U;
    msg.syringe2 = 180U;
    msg.custom.assign("AAHOGEWSQWECONKZBFZRDNPTVGOEPGIYOOUNHPYQOOGXIIDQLKOZDYRGGKURISKBMCLFSZJFLCAUDVTXGJFSJPCSNGPDWQMMOHRQANQKYVBLYLZIXLQMBMCVHJUVPMUSORMXUKJKXTTXJHKCUYEXIJEBWWTTTUEVWHRAWVTDQAJWFNDZYJAHHSNERAKFFVYHA");

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
    msg.setTimeStamp(0.403832241086);
    msg.setSource(19605U);
    msg.setSourceEntity(81U);
    msg.setDestination(37543U);
    msg.setDestinationEntity(68U);
    msg.timeout = 63975U;
    msg.lat = 0.156941829233;
    msg.lon = 0.733136580168;
    msg.z = 0.852574837666;
    msg.z_units = 210U;
    msg.speed = 0.599086905256;
    msg.speed_units = 82U;
    msg.syringe0 = 207U;
    msg.syringe1 = 72U;
    msg.syringe2 = 181U;
    msg.custom.assign("EYNDPVBTXP");

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
    msg.setTimeStamp(0.943292531952);
    msg.setSource(65387U);
    msg.setSourceEntity(129U);
    msg.setDestination(28023U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.490701549868);
    msg.setSource(6257U);
    msg.setSourceEntity(115U);
    msg.setDestination(17469U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.888054097681);
    msg.setSource(44869U);
    msg.setSourceEntity(85U);
    msg.setDestination(51579U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.416131311426);
    msg.setSource(15348U);
    msg.setSourceEntity(239U);
    msg.setDestination(55396U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.40768615925;
    msg.lon = 0.605076174497;
    msg.z = 0.563452140494;
    msg.z_units = 162U;
    msg.speed = 0.429679426697;
    msg.speed_units = 11U;
    msg.takeoff_pitch = 0.700636078196;
    msg.custom.assign("UWNSLZSQFHFQZHSRMLLMNJJPRFPXRECSYZMEFHJLVPWGUDXSZNGNCIGYHSEXPBBYOJBPMQCXHKQZWGJYAFEZEHYIVTWRBNRHYKXLIQFCADBOSECTPJDANOIJABXTMDLSKUOTXUEMDAKVWDIQGTFMVHWUESUSJAIJZKF");

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
    msg.setTimeStamp(0.472120030181);
    msg.setSource(9956U);
    msg.setSourceEntity(200U);
    msg.setDestination(985U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.252579720966;
    msg.lon = 0.89260274748;
    msg.z = 0.464344535828;
    msg.z_units = 143U;
    msg.speed = 0.187267362216;
    msg.speed_units = 12U;
    msg.takeoff_pitch = 0.724511769735;
    msg.custom.assign("CUPCTRXDQPTCQRZREJZJSUJSPCYUGSPUKZJNMZIWFIAKWNROWELZBEKHKGODMPOCGJEJPGDSAVQAYLIWBQPFYNMSEBQMLFOCKYOETLKFZBLNRJHPDFGSQDINXUNDKADTBJKYBQBQKMPVMHMQFGQHTEDLIJICWFDVCZSVWKVWYRVXZXXNDUSUNAXTTOHUNGOXOAFNVWETUCHBGMXLFBCGLWRZMHIVAIREOHIYFGVT");

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
    msg.setTimeStamp(0.366764424017);
    msg.setSource(46166U);
    msg.setSourceEntity(35U);
    msg.setDestination(49562U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.887178184921;
    msg.lon = 0.675918078272;
    msg.z = 0.209586805394;
    msg.z_units = 119U;
    msg.speed = 0.207988967041;
    msg.speed_units = 236U;
    msg.takeoff_pitch = 0.360272203209;
    msg.custom.assign("RVCKXZDGHKLOJHOKBYCZBZRHZWPOTMKGJEBJYSFXKXFMHVZGLOGBERMSKUZOFXFIJZNIKROTOPXUCVWAQICMTAANOZJWMJAAXCUYQBFQNAXWWWDRQVCPITLQDQENFEZJDGARUWCDFQEHCLNYLZSQILICTLP");

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
    msg.setTimeStamp(0.200462448789);
    msg.setSource(37288U);
    msg.setSourceEntity(138U);
    msg.setDestination(5795U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.916494348777;
    msg.lon = 0.813815974667;
    msg.z = 0.825761136843;
    msg.z_units = 201U;
    msg.speed = 0.587873514978;
    msg.speed_units = 176U;
    msg.abort_z = 0.446758645396;
    msg.bearing = 0.411388437106;
    msg.glide_slope = 17U;
    msg.glide_slope_alt = 0.837829055704;
    msg.custom.assign("GSVWILEKIRUVPNHEPWZYMCTXEMTAJSGPYQVWUENAIMBREOUPWYVMIPTRSAHZVSOFEQUZXAWNIHOTZIKUCLBBCQKXGITAZSPSFDULG");

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
    msg.setTimeStamp(0.546855500883);
    msg.setSource(42280U);
    msg.setSourceEntity(234U);
    msg.setDestination(48830U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.660136893633;
    msg.lon = 0.81658964868;
    msg.z = 0.0758727873471;
    msg.z_units = 189U;
    msg.speed = 0.450545512698;
    msg.speed_units = 80U;
    msg.abort_z = 0.290772123687;
    msg.bearing = 0.0241402858344;
    msg.glide_slope = 85U;
    msg.glide_slope_alt = 0.515338990828;
    msg.custom.assign("KBUZICOYRNBPUATEJYPCLSSKIKNRLDCPOOQEODRGDOTLWGUNMILTHJQUXRDVWBCFDGYVWBDJUAMTINXNFGFUAEUWSEICUZHXFMFKMJQBNVUZXHVMSQSHFZYWEYKQPMGMWJLHBPEFZXRHCFBVLKTICAXWMYZGALQTGWODXONSDLAPXXBVRONEKKA");

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
    msg.setTimeStamp(0.674574891847);
    msg.setSource(29309U);
    msg.setSourceEntity(215U);
    msg.setDestination(58702U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.396872008261;
    msg.lon = 0.238734938932;
    msg.z = 0.412321775106;
    msg.z_units = 176U;
    msg.speed = 0.941877645725;
    msg.speed_units = 80U;
    msg.abort_z = 0.714634862944;
    msg.bearing = 0.0628683112575;
    msg.glide_slope = 63U;
    msg.glide_slope_alt = 0.381436684542;
    msg.custom.assign("QXIIPDMNFRUNKWMNQNQLHXODZWSQMYTMWYRYUGMQCNGTCIQFZFEACPVJINV");

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
    msg.setTimeStamp(0.178473618338);
    msg.setSource(42800U);
    msg.setSourceEntity(36U);
    msg.setDestination(27720U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.376148848147;
    msg.lon = 0.848500651799;
    msg.speed = 0.800677890329;
    msg.speed_units = 51U;
    msg.limits = 233U;
    msg.max_depth = 0.824967972075;
    msg.min_alt = 0.369593822365;
    msg.time_limit = 0.437765024788;
    msg.controller.assign("BNIBLOLMRGEOVHVXSBUJCCEUTVHMSQQAUYQQXRTHABZAICENWQAPTHPOSDDDAGQVNWWBETNIYSNXUVYGHVSEXKAPFGIUXOBZATQCVSLHJVIZBILRKGCWURRXOBTLUWXTKCUMN");
    msg.custom.assign("ZYIQTCNPANSJVOGFHVBZXBWRHBSSHVWDCRMBZTKDATQAKJZOIVHUVOHVUXTAJXOMDXQTGQUMFVUGRPPBHNRIURCSFFNVQVZFRBFTEQKFDONXKZNHFFJTEEHOUAIBEPLSZRDDQSRYHMVWTUQSXXUXATMLTAYBLIUEWWCYAMKMWHWPKIGAONFIJPLKGGKLDJPSPKYWGLSBRCCKYENINEGWCJSLLMPLEOJJYDPWXZZEQCDZXCOELUAGMNQYYIJ");

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
    msg.setTimeStamp(0.176259507484);
    msg.setSource(26282U);
    msg.setSourceEntity(119U);
    msg.setDestination(42197U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.991345068234;
    msg.lon = 0.154748170141;
    msg.speed = 0.538854753501;
    msg.speed_units = 33U;
    msg.limits = 55U;
    msg.max_depth = 0.481304513799;
    msg.min_alt = 0.33764155574;
    msg.time_limit = 0.870656379263;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.319461786479;
    tmp_msg_0.lon = 0.0344480241049;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PPPLFDCVSCS");
    msg.custom.assign("IRRTJVPDLRXNIACHLYNSWCYIVYFGXEODBHOZLUHQRTJWVOQMEPOMTFDXPIBFZYJBTOEPEFNBNRGLYWGKOADZSGQRHJNWDAHPTPSLFLAYFAMOVKYNYEZCXWXFUBKLVXUBGDDIECIORVSMPTB");

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
    msg.setTimeStamp(0.1141477146);
    msg.setSource(25546U);
    msg.setSourceEntity(54U);
    msg.setDestination(18303U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.896646385822;
    msg.lon = 0.395201549727;
    msg.speed = 0.573391088954;
    msg.speed_units = 198U;
    msg.limits = 120U;
    msg.max_depth = 0.487494012465;
    msg.min_alt = 0.494048098515;
    msg.time_limit = 0.0223870316591;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.758676708231;
    tmp_msg_0.lon = 0.304617391429;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("CQOAZKXYKNNXRTYSFLXKLUTORMXENDMTIYVUFLTIUWEQFXUFRJPWBMFBVQVBYBEHWVZHFSQMXKRLCUTEOGMGWDITGKRFPCCBKHYZDTZWWNIKGDNMSBNMPMJEQIFHPAEYCOCBRLZJZTAANQWSPVVAUDSLJXPLZHYGIVOYOPININTSZUKBURGHOSFHJUQDMDQWQEPCUVFPJEOJRIXDTMLAOIBAQSHACDVYKRGNGLJOEDZVSBJKCWGZHYLC");
    msg.custom.assign("FZCZQWTQRAJOFXVFYYWJKTRIBSOPWMFTBPENMQCKZUEVGGJHZFDUIHQIGKHMKCJMLJZLYBOYDCWIZPRCYEBQKAOSTSKUKGGWQNHXBRLLBPWRXJBBUXLLNMQDSIHWMONOWPUTAAUAPJSEPXOKDALWBDNPDGOCZJSUKLXEXDFMEFXRSDJGHUFUDMEVTVGAICKTYYHRZVRBIZQXHRTYQNVATVCENSQHNXPADPVMFEGVGVHINTNO");

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
    msg.setTimeStamp(0.00192483706327);
    msg.setSource(49128U);
    msg.setSourceEntity(131U);
    msg.setDestination(54614U);
    msg.setDestinationEntity(48U);
    msg.target.assign("TKXRCKDHSLBWHGIUEPCPFWMLWIEOVXHODOMRTBPDFWBAHLHFXUSRZVQXEGAWDCDQOSODOEVSQIPGEOCBDIUSYFTNLCNGIJPRJNKGUCYPFWZMRRKJPZLJZGLNEJOXEZKIQTKZDVRIOAAQQVBIYVCFJBWYVXGREBVKXSDMHHWOMZHCEVUJNGQUBUHLMUSPYJIMAWTFFY");
    msg.max_speed = 0.574370096825;
    msg.speed_units = 138U;
    msg.lat = 0.427737181813;
    msg.lon = 0.555535803725;
    msg.z = 0.916168499419;
    msg.z_units = 74U;
    msg.custom.assign("LVYYMCHQCCPNXCDBGKGJKUAGGODIWRWRQBBFIDUQNOYSSEJMHKVSCAPAUGDHPMQLVYXTVIHJEETIQRDJSWNKLGSHYAGTFPXHNZJXFHKHAXVCSFWYEBAXSVFFTZKRBKJDTYTECBFMPPLZKNIWBOVJUXZOEBANIPEYJFVUTEJSHZQEZNPDIUUESKNIMRUUGWOTOTLMMUOROWDRLWQDXNGHMLSLBZF");

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
    msg.setTimeStamp(0.46739095942);
    msg.setSource(47559U);
    msg.setSourceEntity(219U);
    msg.setDestination(34346U);
    msg.setDestinationEntity(250U);
    msg.target.assign("DEARBYTSUUDUHCAHDVGZPLFXLQTMXXXIXDEYBYUNJEYOJCNPXIANRJABIWXHKDLOMJCHJYOQPKPGFND");
    msg.max_speed = 0.151583039567;
    msg.speed_units = 45U;
    msg.lat = 0.98441069552;
    msg.lon = 0.195121749387;
    msg.z = 0.173286863874;
    msg.z_units = 139U;
    msg.custom.assign("GSPVCAHFZHLZBLHEIZANJHTRQOXHECWAAOCOWQNPURXAJXIUOKVHZHJGALDURYSLBQTPTDQQKUTXCVTQWFVIOIMFVTYLUZUDNUNISFEJANAOKDCMSJPRRRISFWVVKNUBGYBARSVSCTWRMWZFDPBUCHGFFKFKKLJPRMPBLIO");

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
    msg.setTimeStamp(0.867796790647);
    msg.setSource(15945U);
    msg.setSourceEntity(32U);
    msg.setDestination(7303U);
    msg.setDestinationEntity(252U);
    msg.target.assign("GKYRTIYFNVJVZARQGUJFLLBZICAHHUFHHQZBAPNILOXCNKYGGQWFMCEJZXEYDRFIGZSSVYDYRWZDURLDGIVBJCDETSSIVIDANGLBGWAVIPNEMMMFKKP");
    msg.max_speed = 0.519660673069;
    msg.speed_units = 144U;
    msg.lat = 0.434678892576;
    msg.lon = 0.458526257823;
    msg.z = 0.816353707735;
    msg.z_units = 143U;
    msg.custom.assign("WZDORQDSBWKPMAFLCJUPJSMKZLYXQHJOEIPBYNWUQTSEBHGOWVEMDDRKIYQFZVLWKLGBIAGJTJGFABXFNZMDIEUVJJEXXBLIDTUTTOCMKIBDTMHOTODBONPQTQVIFQQCFMCRGCASSSPIUZYLPNLECCOKASG");

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
    msg.setTimeStamp(0.0312948409998);
    msg.setSource(40355U);
    msg.setSourceEntity(138U);
    msg.setDestination(1491U);
    msg.setDestinationEntity(40U);
    msg.timeout = 18386U;
    msg.lat = 0.9492586182;
    msg.lon = 0.858555706869;
    msg.speed = 0.137748651045;
    msg.speed_units = 170U;
    msg.custom.assign("RBRVMBBPBGRDYFWMMLVAMWDDYGJDZALFWMDUPIJUDFYCQZLLNQVEYXZIZVQXNMJCPTRNZTAOMLHSXKQXTQLRVSOURIUVHPVCRPSMFJBECCLAWZACWPX");

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
    msg.setTimeStamp(0.121276517519);
    msg.setSource(949U);
    msg.setSourceEntity(155U);
    msg.setDestination(33611U);
    msg.setDestinationEntity(63U);
    msg.timeout = 55647U;
    msg.lat = 0.289781413438;
    msg.lon = 0.627938756662;
    msg.speed = 0.228548890636;
    msg.speed_units = 37U;
    msg.custom.assign("OCZLEBEIDHCMSZYFKIAIGHTYYTCGVXAQFRAHBYPAMSPNEXS");

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
    msg.setTimeStamp(0.860172169879);
    msg.setSource(14927U);
    msg.setSourceEntity(149U);
    msg.setDestination(12098U);
    msg.setDestinationEntity(184U);
    msg.timeout = 10026U;
    msg.lat = 0.385981226111;
    msg.lon = 0.389061718991;
    msg.speed = 0.515985451259;
    msg.speed_units = 222U;
    msg.custom.assign("HAOJSLKTKHZCXXUIMOUBFXQGCINAAVIOWGJDQUWSRZHPHDZZWGHZTKLIMJOZMNTGQSSURGSULZFNCWJYGJGVJQNWQLOXHBVDIDFFJDXE");

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
    msg.setTimeStamp(0.139907870281);
    msg.setSource(25167U);
    msg.setSourceEntity(207U);
    msg.setDestination(24575U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.776580188543;
    msg.lon = 0.472744741443;
    msg.z = 0.839018725722;
    msg.z_units = 244U;
    msg.radius = 0.166421610594;
    msg.duration = 36752U;
    msg.speed = 0.86182574937;
    msg.speed_units = 206U;
    msg.popup_period = 46175U;
    msg.popup_duration = 60129U;
    msg.flags = 95U;
    msg.custom.assign("TBEZWHDGYYMNOLFYMJZSZYHAJUHXENTVHXAKBFUPPMWWKUBD");

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
    msg.setTimeStamp(0.104542402143);
    msg.setSource(8646U);
    msg.setSourceEntity(65U);
    msg.setDestination(65248U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.3815751723;
    msg.lon = 0.763495854251;
    msg.z = 0.806303653195;
    msg.z_units = 129U;
    msg.radius = 0.0542406259814;
    msg.duration = 44123U;
    msg.speed = 0.499242203047;
    msg.speed_units = 231U;
    msg.popup_period = 14321U;
    msg.popup_duration = 53506U;
    msg.flags = 69U;
    msg.custom.assign("WJTREVIPXBARDPAPSKTSVEONPVZMYOBPUPWYZUFKBKYYBVQUENDKCDHGWSLUJRHYUWSQOZIVOQRKOGMSXCQUMSQQBLMOE");

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
    msg.setTimeStamp(0.651278154115);
    msg.setSource(7130U);
    msg.setSourceEntity(200U);
    msg.setDestination(48546U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.493683792017;
    msg.lon = 0.584194654502;
    msg.z = 0.593109827205;
    msg.z_units = 141U;
    msg.radius = 0.474514030857;
    msg.duration = 3029U;
    msg.speed = 0.725169932403;
    msg.speed_units = 180U;
    msg.popup_period = 54477U;
    msg.popup_duration = 4599U;
    msg.flags = 52U;
    msg.custom.assign("PDTUGJAJIPAHOXODNCUQXGZKSYVGXBPCTDNOTRVYTFEMKGSMXLTGEZYSXABAOBYKHNBHSCNKRBNLQHWXEHWLLUOPSAKMVCCILWPQU");

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
    msg.setTimeStamp(0.764570373143);
    msg.setSource(58191U);
    msg.setSourceEntity(37U);
    msg.setDestination(41901U);
    msg.setDestinationEntity(33U);
    msg.timeout = 19965U;
    msg.lat = 0.139584441293;
    msg.lon = 0.320794069619;
    msg.z = 0.196357192062;
    msg.z_units = 117U;
    msg.speed = 0.900254589639;
    msg.speed_units = 104U;
    msg.bearing = 0.762696938858;
    msg.width = 0.495893553357;
    msg.direction = 181U;
    msg.custom.assign("TWIZNKZVWWKYP");

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
    msg.setTimeStamp(0.880051645494);
    msg.setSource(7836U);
    msg.setSourceEntity(220U);
    msg.setDestination(57934U);
    msg.setDestinationEntity(143U);
    msg.timeout = 31941U;
    msg.lat = 0.469413787075;
    msg.lon = 0.829519664189;
    msg.z = 0.568844098886;
    msg.z_units = 218U;
    msg.speed = 0.0369355695767;
    msg.speed_units = 170U;
    msg.bearing = 0.263075929134;
    msg.width = 0.456734172608;
    msg.direction = 114U;
    msg.custom.assign("PFIXEORQEFINRQUAWCLQYUSMIBIZKTHMRLQSTNVWDRKMUUOXADECDUPKVRDDNJYJAMSHAGTXUSZCVGZCPCIQLYBFMHFEBATGUCYQSKKWCFVWSBTSOFCOLHNWGRLOGAYBPPAG");

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
    msg.setTimeStamp(0.0424823867513);
    msg.setSource(10323U);
    msg.setSourceEntity(225U);
    msg.setDestination(3834U);
    msg.setDestinationEntity(230U);
    msg.timeout = 23784U;
    msg.lat = 0.329314658826;
    msg.lon = 0.640625585309;
    msg.z = 0.664509192274;
    msg.z_units = 220U;
    msg.speed = 0.463149969727;
    msg.speed_units = 225U;
    msg.bearing = 0.395586655449;
    msg.width = 0.270984649891;
    msg.direction = 153U;
    msg.custom.assign("XZWESQOYBEOYKBLTOPJFVLUEKYQWWSXLFMHAYNFZLAQLUUDDLKJSTNGQVMCZMFPEWIRZFRZPBXIQDOGUXACATVOMUFEFL");

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
    msg.setTimeStamp(0.594985081514);
    msg.setSource(16257U);
    msg.setSourceEntity(22U);
    msg.setDestination(12062U);
    msg.setDestinationEntity(140U);
    msg.op_mode = 79U;
    msg.error_count = 20U;
    msg.error_ents.assign("XHUAGMPXIVZTAFSJYXKUHLMJRIHKECNDEATTFAIKPQRYWERMWHLSRYYLLXJFYAU");
    msg.maneuver_type = 16397U;
    msg.maneuver_stime = 0.144520369219;
    msg.maneuver_eta = 45379U;
    msg.control_loops = 2732282241U;
    msg.flags = 22U;
    msg.last_error.assign("KGOCTXIQYLNSDJYHGJOYHWOIYEXZVAZBLOPQCSBSGEUZIXRENPQISKPKTFQUGKRQBENHDJBFYZTVJCLURVQRNERTNYTKUDHWMOJIGIWOPGKESAVDEUHGLDFWYPLBNHUWDLVPTHMFLMZIAGFUOEKISNNZASPYDMBARUZPUHYSXMGTPHNXAEBRFBAWRLBXQKMVWLEPFUNFVSXAJAYJKVJDTFHAGBXWWTOCFCJC");
    msg.last_error_time = 0.860510281173;

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
    msg.setTimeStamp(0.215505276875);
    msg.setSource(3186U);
    msg.setSourceEntity(217U);
    msg.setDestination(25819U);
    msg.setDestinationEntity(130U);
    msg.op_mode = 4U;
    msg.error_count = 74U;
    msg.error_ents.assign("CLSIQVCGUPQXSQXDKPLURYFEVBZBXKQUVAOVQZJDLRDYHDPMHTAUFMUOWAVJIKBJGFMVCSYNOREUTNIIAJSMSNGPMCUKSLONHLTCGVGRBWPEXJMKZEYCKOPWQAFWI");
    msg.maneuver_type = 20509U;
    msg.maneuver_stime = 0.0150535213641;
    msg.maneuver_eta = 58397U;
    msg.control_loops = 1367992338U;
    msg.flags = 130U;
    msg.last_error.assign("GIRPWUHEKKVSILZZUWRLUUCUKFGPVOAEYDNJEEPXCSBSCLKHMKJREIMWPPNAVNBPVDFZJIJVHZTRCNBGZXITWJKCEIKPSMMBTDHNQATJJDXHCWRRQWO");
    msg.last_error_time = 0.107881779008;

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
    msg.setTimeStamp(0.151775371452);
    msg.setSource(62970U);
    msg.setSourceEntity(112U);
    msg.setDestination(9794U);
    msg.setDestinationEntity(88U);
    msg.op_mode = 105U;
    msg.error_count = 26U;
    msg.error_ents.assign("TQKRFLUPJAVQRZJNDGIGWSQFZUBEDAWHRFHKFGAKXPZSRYRPUYMNGYOCGLUSJSDHFJJQMXGKPLNDTYYWTFWJIPTHWQTIAEWWFNHRMSCJUKZFXOEZEDIPEUHSQEYDBZIOUVBZCWADHTHQXENXCLZLROVVIMUGVLATVNOKOAVVDGSSKCPCMQHMRMLACDAUBPOIFOUXTFLNXTT");
    msg.maneuver_type = 46437U;
    msg.maneuver_stime = 0.463175815999;
    msg.maneuver_eta = 13346U;
    msg.control_loops = 1792578125U;
    msg.flags = 91U;
    msg.last_error.assign("TZSKHZDHMSMLCGIWYWJGBQJZQIEXXCXIBCVUXTGJUTFDAHFJLGMHLVDIKRORN");
    msg.last_error_time = 0.0945021739632;

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
    msg.setTimeStamp(0.306702081139);
    msg.setSource(53886U);
    msg.setSourceEntity(95U);
    msg.setDestination(19489U);
    msg.setDestinationEntity(237U);
    msg.type = 240U;
    msg.request_id = 39940U;
    msg.command = 14U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.0182127799601;
    tmp_msg_0.lon = 0.122569229877;
    tmp_msg_0.z = 0.80939356481;
    tmp_msg_0.z_units = 171U;
    tmp_msg_0.radius = 0.936286424244;
    tmp_msg_0.duration = 42776U;
    tmp_msg_0.speed = 0.726218373495;
    tmp_msg_0.speed_units = 19U;
    tmp_msg_0.popup_period = 29191U;
    tmp_msg_0.popup_duration = 3445U;
    tmp_msg_0.flags = 15U;
    tmp_msg_0.custom.assign("SHXCMXUSHXLWFLVCDTXAQPLLTGCPUNCGVDXWCCXNKWREQFECLGVGHGLKTY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58588U;
    msg.info.assign("WOTGCVUGEYNAKBCEMRWYJTZPHNTNERWYBYBXJIXFQFFOHAMQHZLEIRYTFJPFNKHJNQUEZQBSJMBHBDLSHWSFVHVWEKDRDKXJOAOLVUYPMGDULZCGGECOFOOSTQXZCMLUXWXPDEJFM");

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
    msg.setTimeStamp(0.801987427574);
    msg.setSource(27056U);
    msg.setSourceEntity(172U);
    msg.setDestination(40616U);
    msg.setDestinationEntity(73U);
    msg.type = 113U;
    msg.request_id = 58374U;
    msg.command = 128U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 39062U;
    msg.info.assign("WLXMNPNYGIXEDAHSTQTTBVUUGVBSDYJRZMIKOPVHAMEXMKHADOPDLWCQGOPENJGHJWXUZBCABHGWAJPWNXRCKCRKCARMLYOGJZYBTWPYZIRMOUVCLWYCUIABHMYQPYIDQOVHQSLZWUSODZRSTNBZSJSNGVVFDVKNGLSERIEZNLBVFABNOAXFTPSDDJHAMQFFTKXYUQXGTOUFQPDCC");

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
    msg.setTimeStamp(0.922399888591);
    msg.setSource(53997U);
    msg.setSourceEntity(95U);
    msg.setDestination(27636U);
    msg.setDestinationEntity(218U);
    msg.type = 51U;
    msg.request_id = 33815U;
    msg.command = 225U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 56737U;
    tmp_msg_0.lat = 0.449784323092;
    tmp_msg_0.lon = 0.6887629347;
    tmp_msg_0.z = 0.491388810105;
    tmp_msg_0.z_units = 28U;
    tmp_msg_0.speed = 0.31847041625;
    tmp_msg_0.speed_units = 172U;
    tmp_msg_0.custom.assign("JHALVDJLFDAIZWZGGVIKSLQXMHIUIQADHSEEKSTOZGFMPBSESAWDHFKRLWQWRBWOGZVTFVYXPVUOFQGOSKPNOKBVENNBIVRWTYNCLYREBPBHWNWYJNBLKPEZFEIYPCJOZIHGRUSFLUCXDVPTGUEMNGMQUTYKYCBZOQJHMAMULARDRPDFERXZXQJTUPJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 4327U;
    msg.info.assign("YIUJHMNLVLSMQVDCTOHCZCTEBZGWPUBQGVEWPXWIOKIDRFTWLAZGCJAOQPQGUHVEYQPTDMOIBZIKKMEXSKZDFMFNTJOKTQRBYLCRHNLZZDCABNCSPXGPJHMRSAM");

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
    msg.setTimeStamp(0.416419964275);
    msg.setSource(26889U);
    msg.setSourceEntity(190U);
    msg.setDestination(27205U);
    msg.setDestinationEntity(73U);
    msg.command = 162U;
    msg.entities.assign("KXKULMORNMZNKBSLNGHXWVMYQWSUHKMZXMBGTHPNYVJVGWIYBAKSOFXVBBPFBGIJOYTDP");

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
    msg.setTimeStamp(0.090334076976);
    msg.setSource(40570U);
    msg.setSourceEntity(71U);
    msg.setDestination(23509U);
    msg.setDestinationEntity(196U);
    msg.command = 180U;
    msg.entities.assign("PGTBQCUGQUBJKKWDZKXIZOREDBBMVUBQPJWJYAENEAOQCGVZLWTCDSZMMCWEPORZBQTVLODQXSAUCFTIBYIOWFSHNJGTIUUMJZADHTGVRLEHFCTOOXJSENCPLXNYZXDOJHFPZEKZYWFCEHHRFQMCYRLQJGDWNYGNTBBUMTWVBLMPRSRLAGIIUXEFPVAI");

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
    msg.setTimeStamp(0.369167471926);
    msg.setSource(51408U);
    msg.setSourceEntity(159U);
    msg.setDestination(53784U);
    msg.setDestinationEntity(212U);
    msg.command = 127U;
    msg.entities.assign("DFSKGSTKOLT");

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
    msg.setTimeStamp(0.539577378089);
    msg.setSource(62033U);
    msg.setSourceEntity(125U);
    msg.setDestination(41027U);
    msg.setDestinationEntity(100U);
    msg.mcount = 23U;
    msg.mnames.assign("CNFPDORFKIWDCLHLEVMYEMBHRWQNVBTWMKGMYRXRNJZHNUDHCZVYDKJBEXSGWFGLDJHRRPCOHGUMZDKAXEBDTMSCOMSVXUJGWOWATPXOWLAGGQVULPZPZF");
    msg.ecount = 105U;
    msg.enames.assign("GRKYIAKONHBUIBOPTZNSIKGPAJJNSZNGTWIUFMLRTEJJSHBYSVBPURMCQPIXLLAMNJVMCZQDBPECQXFNEVZAIQXTGQHXOVEREOFDWLC");
    msg.ccount = 112U;
    msg.cnames.assign("TLWUDRGEPKJPNAEZJTZAEALWSZVEBNQGOZUBLLJZYXEVFTVCTMPFRLNCGJGUEHKMBKHYJNQIYGEMZTSOCQADUINHZPOYIPXYZVXADTPQCJ");
    msg.last_error.assign("EYDUPEQYCYTJAOVIVMQVHRSYFUXPRMFJKNESZMCJNMWVNCIMADYXKXLYZJQHOZLRZCHMHCGVZNBTRHDQKSXDIDHPTEKSQWLVRETPFIHJKOLDGDZXWISZXFWLITFREIGUFAGPFOJRYNMXBORSGNZRWQKNBCDJTZZUIUEKNOQVLCBJGHBJPGYLALHMAP");
    msg.last_error_time = 0.748236714892;

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
    msg.setTimeStamp(0.128304730289);
    msg.setSource(1444U);
    msg.setSourceEntity(250U);
    msg.setDestination(64336U);
    msg.setDestinationEntity(28U);
    msg.mcount = 250U;
    msg.mnames.assign("ENHPVKIBZAKULSMWDPPZEAHVCZGJQGIILMMNJKVFKSLYEMOWLMUXZE");
    msg.ecount = 194U;
    msg.enames.assign("DGPUQFFNQRVWWJLKWVGOWRHZKQSCQABIQCZIGBUOYDMMXIPBDLZLFBQEDK");
    msg.ccount = 96U;
    msg.cnames.assign("QJPFORYIZBNZEKXGLMJGPQXYZNERDSJPTMHMJSFPVTHTEHVWBOAQAUMEDVSABGULQHPAPBZODXRH");
    msg.last_error.assign("BEJIUYWCBCNYGLBICQLVQPAODYMUATJJEROWLHHWGQVJMDZKRISMNEKQUVKKOXRFJJKKDZASXZMBHKVQUDYQBGWKJPGRNSSENVBWDJCWEHREDSKMQCQIXZRHONRQMGDPOSPHZRBFCVZOTVCUIIDIMFKTAJTFRYPNXHFNHWIALOYPZEHXASTPAOADGGTIYTWCMHPUNOVXLXBQUERSEFESLFXFTUSLCLZPYTFLGIMWWFBAXJNDVGXP");
    msg.last_error_time = 0.815538895771;

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
    msg.setTimeStamp(0.553923135598);
    msg.setSource(35863U);
    msg.setSourceEntity(225U);
    msg.setDestination(5901U);
    msg.setDestinationEntity(232U);
    msg.mcount = 124U;
    msg.mnames.assign("GGJPMYBYYTEJZXZTXODZCVAMSMBDKZOKGAXIFBZYBCPJDZKLODSHBDNVIFISWPHFVCKUATIEVWHUFYDJEXBJAFALEQLEAXCXFELGOBKTOVSXICWCLMCUHZJTJEPWIUKMVYOPRUNMXGWMQWSYMTHMQKILUMQIQILLVHRFGQRPYKHDNOUNPQQSBADIHFGXNEKFAXRBRGYWTRLPDBEVVNALNWPQRRPTNSVFJUCDZSWZAONHRNSGOEGJCYT");
    msg.ecount = 69U;
    msg.enames.assign("UMDSBXZAOJDFNLRXZHYFDAMGNVQRPEBHTKMCKCWSSXHOSKCTSLELBEBAYITSTPUGCHLLQ");
    msg.ccount = 109U;
    msg.cnames.assign("GZTBXIWREXQDAPQHLBWHOJJLPRRBRPXFBMDYCUQWKVKMZOXRSHWUOCOEZEXPTYDQMZOLQHDCFEAMXSWYNAVGJIOAQSRXEIBRQJVNFSCDOQYXTEMKDTPVIJNIALYUVWGCPNQNCAADMJOCLEAJIG");
    msg.last_error.assign("FDTFEGSNPKBRMJRJCGIEWBZMYWOZJHUSVTQVOPFLFLPXZMXNQHKJDKCULEIBVGSNIXWEPFVCHXHXTHQDQEWSHAQTXU");
    msg.last_error_time = 0.808392225384;

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
    msg.setTimeStamp(0.658357605219);
    msg.setSource(39477U);
    msg.setSourceEntity(157U);
    msg.setDestination(41507U);
    msg.setDestinationEntity(233U);
    msg.mask = 11U;
    msg.max_depth = 0.975899276458;
    msg.min_altitude = 0.584244236778;
    msg.max_altitude = 0.947372176237;
    msg.min_speed = 0.90934385753;
    msg.max_speed = 0.986313728097;
    msg.max_vrate = 0.122854982045;
    msg.lat = 0.574792416152;
    msg.lon = 0.425089614564;
    msg.orientation = 0.717506627338;
    msg.width = 0.997034661863;
    msg.length = 0.35649934565;

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
    msg.setTimeStamp(0.257828949075);
    msg.setSource(40586U);
    msg.setSourceEntity(235U);
    msg.setDestination(46669U);
    msg.setDestinationEntity(88U);
    msg.mask = 200U;
    msg.max_depth = 0.168946811098;
    msg.min_altitude = 0.450707083264;
    msg.max_altitude = 0.108356871296;
    msg.min_speed = 0.691690334733;
    msg.max_speed = 0.976173027863;
    msg.max_vrate = 0.98157803112;
    msg.lat = 0.240853882487;
    msg.lon = 0.811773533633;
    msg.orientation = 0.151071172483;
    msg.width = 0.299836525424;
    msg.length = 0.785889229534;

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
    msg.setTimeStamp(0.682386701321);
    msg.setSource(22256U);
    msg.setSourceEntity(135U);
    msg.setDestination(4732U);
    msg.setDestinationEntity(242U);
    msg.mask = 68U;
    msg.max_depth = 0.0233230328715;
    msg.min_altitude = 0.130650170905;
    msg.max_altitude = 0.618233507522;
    msg.min_speed = 0.0938321573606;
    msg.max_speed = 0.123306672301;
    msg.max_vrate = 0.84505870943;
    msg.lat = 0.858956200027;
    msg.lon = 0.177915660394;
    msg.orientation = 0.847150527067;
    msg.width = 0.188366609123;
    msg.length = 0.986110702136;

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
    msg.setTimeStamp(0.84111266341);
    msg.setSource(32203U);
    msg.setSourceEntity(79U);
    msg.setDestination(61289U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.550137052579);
    msg.setSource(20178U);
    msg.setSourceEntity(10U);
    msg.setDestination(12364U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.364608753102);
    msg.setSource(40910U);
    msg.setSourceEntity(18U);
    msg.setDestination(61192U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.117872957375);
    msg.setSource(31323U);
    msg.setSourceEntity(57U);
    msg.setDestination(45885U);
    msg.setDestinationEntity(181U);
    msg.duration = 38341U;

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
    msg.setTimeStamp(0.263257680869);
    msg.setSource(1248U);
    msg.setSourceEntity(40U);
    msg.setDestination(3526U);
    msg.setDestinationEntity(17U);
    msg.duration = 49097U;

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
    msg.setTimeStamp(0.37160165639);
    msg.setSource(9294U);
    msg.setSourceEntity(150U);
    msg.setDestination(19024U);
    msg.setDestinationEntity(76U);
    msg.duration = 23537U;

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
    msg.setTimeStamp(0.923946935229);
    msg.setSource(47549U);
    msg.setSourceEntity(162U);
    msg.setDestination(22692U);
    msg.setDestinationEntity(27U);
    msg.enable = 24U;
    msg.mask = 44355068U;
    msg.scope_ref = 1709227670U;

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
    msg.setTimeStamp(0.0210908248712);
    msg.setSource(39754U);
    msg.setSourceEntity(64U);
    msg.setDestination(12184U);
    msg.setDestinationEntity(179U);
    msg.enable = 222U;
    msg.mask = 1295261659U;
    msg.scope_ref = 2861809030U;

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
    msg.setTimeStamp(0.420342518092);
    msg.setSource(27609U);
    msg.setSourceEntity(76U);
    msg.setDestination(58661U);
    msg.setDestinationEntity(4U);
    msg.enable = 31U;
    msg.mask = 1334813358U;
    msg.scope_ref = 2063320865U;

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
    msg.setTimeStamp(0.533808267203);
    msg.setSource(3764U);
    msg.setSourceEntity(15U);
    msg.setDestination(49187U);
    msg.setDestinationEntity(171U);
    msg.medium = 190U;

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
    msg.setTimeStamp(0.200857223884);
    msg.setSource(53686U);
    msg.setSourceEntity(140U);
    msg.setDestination(35543U);
    msg.setDestinationEntity(116U);
    msg.medium = 98U;

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
    msg.setTimeStamp(0.814165370065);
    msg.setSource(1728U);
    msg.setSourceEntity(211U);
    msg.setDestination(14741U);
    msg.setDestinationEntity(61U);
    msg.medium = 126U;

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
    msg.setTimeStamp(0.900664920675);
    msg.setSource(13888U);
    msg.setSourceEntity(58U);
    msg.setDestination(20317U);
    msg.setDestinationEntity(47U);
    msg.value = 0.908413533185;
    msg.type = 238U;

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
    msg.setTimeStamp(0.139352810337);
    msg.setSource(52836U);
    msg.setSourceEntity(215U);
    msg.setDestination(55922U);
    msg.setDestinationEntity(128U);
    msg.value = 0.544404371049;
    msg.type = 124U;

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
    msg.setTimeStamp(0.52567871551);
    msg.setSource(27998U);
    msg.setSourceEntity(164U);
    msg.setDestination(56148U);
    msg.setDestinationEntity(225U);
    msg.value = 0.559707136638;
    msg.type = 137U;

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
    msg.setTimeStamp(0.105209023245);
    msg.setSource(45784U);
    msg.setSourceEntity(224U);
    msg.setDestination(52081U);
    msg.setDestinationEntity(229U);
    msg.possimerr = 0.928060707358;
    msg.converg = 0.207691909977;
    msg.turbulence = 0.606776117871;
    msg.possimmon = 24U;
    msg.commmon = 91U;
    msg.convergmon = 174U;

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
    msg.setTimeStamp(0.155115077389);
    msg.setSource(5720U);
    msg.setSourceEntity(92U);
    msg.setDestination(10887U);
    msg.setDestinationEntity(240U);
    msg.possimerr = 0.185690498145;
    msg.converg = 0.211212596674;
    msg.turbulence = 0.137780991487;
    msg.possimmon = 128U;
    msg.commmon = 249U;
    msg.convergmon = 167U;

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
    msg.setTimeStamp(0.746598274255);
    msg.setSource(57648U);
    msg.setSourceEntity(150U);
    msg.setDestination(46077U);
    msg.setDestinationEntity(6U);
    msg.possimerr = 0.212838117745;
    msg.converg = 0.577049679846;
    msg.turbulence = 0.416296235944;
    msg.possimmon = 175U;
    msg.commmon = 166U;
    msg.convergmon = 8U;

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
    msg.setTimeStamp(0.578535470764);
    msg.setSource(61078U);
    msg.setSourceEntity(90U);
    msg.setDestination(6790U);
    msg.setDestinationEntity(174U);
    msg.autonomy = 124U;
    msg.mode.assign("THOYSLGXKS");

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
    msg.setTimeStamp(0.840104673414);
    msg.setSource(43031U);
    msg.setSourceEntity(214U);
    msg.setDestination(7800U);
    msg.setDestinationEntity(177U);
    msg.autonomy = 28U;
    msg.mode.assign("NTPIMFIZOZEMBLLRPTLJYBQYFOOTRXBJYKQIXWJZGUGAVUUARHWNTYQRLUATXDMAVEUPFQTZPONSRMMEYDSXFNAPBEDWEUVSPIXLWNTCWVCQTVJZJPFEQBHLKYSLGDOBBFVOXHLJJHQZAUAHKGRIDCIFLFXFGRVGHCKHCVCPYSYAJNWLDKMOHBCXIXQWENCDEDGFUVJVUXYQSCKSHEDMMG");

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
    msg.setTimeStamp(0.169392506634);
    msg.setSource(27244U);
    msg.setSourceEntity(170U);
    msg.setDestination(53043U);
    msg.setDestinationEntity(114U);
    msg.autonomy = 181U;
    msg.mode.assign("ICKWXOWJRAZESVUNLFROZKHGORINLLEVBGYKIVDZCPXOLLHUBTEJWSOLMRMKHETRNJXYUWISUURNYMAQYVFVEGPQQRIGFBLXDQEZJKMAFRIIEEGCMGHPKCJNCFQIJDMCHWPQUSFKSYZD");

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
    msg.setTimeStamp(0.540655599999);
    msg.setSource(55489U);
    msg.setSourceEntity(247U);
    msg.setDestination(49492U);
    msg.setDestinationEntity(109U);
    msg.type = 47U;
    msg.op = 173U;
    msg.possimerr = 0.44469965111;
    msg.converg = 0.524585225129;
    msg.turbulence = 0.749368554972;
    msg.possimmon = 46U;
    msg.commmon = 239U;
    msg.convergmon = 48U;

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
    msg.setTimeStamp(0.00171444362074);
    msg.setSource(61101U);
    msg.setSourceEntity(99U);
    msg.setDestination(62986U);
    msg.setDestinationEntity(54U);
    msg.type = 60U;
    msg.op = 21U;
    msg.possimerr = 0.294684547466;
    msg.converg = 0.431155188062;
    msg.turbulence = 0.723134526039;
    msg.possimmon = 74U;
    msg.commmon = 236U;
    msg.convergmon = 192U;

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
    msg.setTimeStamp(0.772387107346);
    msg.setSource(59532U);
    msg.setSourceEntity(84U);
    msg.setDestination(2395U);
    msg.setDestinationEntity(75U);
    msg.type = 86U;
    msg.op = 235U;
    msg.possimerr = 0.979611846033;
    msg.converg = 0.249683352909;
    msg.turbulence = 0.199375356213;
    msg.possimmon = 7U;
    msg.commmon = 18U;
    msg.convergmon = 156U;

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
    msg.setTimeStamp(0.89160847333);
    msg.setSource(2248U);
    msg.setSourceEntity(39U);
    msg.setDestination(42453U);
    msg.setDestinationEntity(108U);
    msg.op = 34U;
    msg.comm_interface = 10U;
    msg.period = 9244U;
    msg.sys_dst.assign("WJLCPROWPKTLDMDPSPRYPHSJHQLKZUFEOTYFCQWNPOALWIIYIWOXRZJBGGIVWQRHYFCNMSK");

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
    msg.setTimeStamp(0.139262318415);
    msg.setSource(17335U);
    msg.setSourceEntity(243U);
    msg.setDestination(31474U);
    msg.setDestinationEntity(169U);
    msg.op = 88U;
    msg.comm_interface = 240U;
    msg.period = 60911U;
    msg.sys_dst.assign("QKGBQLWKOMURKNYYMAVBZLSHGDPJICVCXJEDXKLGQNZHTTKGRWDQXXQSGKIEGEHVMPNTZEXSANRZATLCJMPFJ");

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
    msg.setTimeStamp(0.0497685592286);
    msg.setSource(59722U);
    msg.setSourceEntity(94U);
    msg.setDestination(31788U);
    msg.setDestinationEntity(199U);
    msg.op = 79U;
    msg.comm_interface = 160U;
    msg.period = 29592U;
    msg.sys_dst.assign("UYCOACIUKHLJVPSDTWJTDATCRSOWDUHPFOFJONQSXSNBUJCKWQHJTRPAMLEAFKGDZCIRBKMCGNLYYODGLZFBIJCHDYSNTIUNWVQKZOXEZXGFBRGZTOTTGMFSKMRVPKQKIBQZSQMHHKUPJNPZVRLVILXYHEMPZSAFNE");

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
    msg.setTimeStamp(0.837495170632);
    msg.setSource(10232U);
    msg.setSourceEntity(165U);
    msg.setDestination(12698U);
    msg.setDestinationEntity(106U);
    msg.stime = 3420449004U;
    msg.latitude = 0.865073656517;
    msg.longitude = 0.0389677386193;
    msg.altitude = 60835U;
    msg.depth = 11031U;
    msg.heading = 44772U;
    msg.speed = 31486;
    msg.fuel = 101;
    msg.exec_state = 48;
    msg.plan_checksum = 5714U;

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
    msg.setTimeStamp(0.503111065792);
    msg.setSource(42254U);
    msg.setSourceEntity(218U);
    msg.setDestination(54950U);
    msg.setDestinationEntity(8U);
    msg.stime = 24553785U;
    msg.latitude = 0.596006801939;
    msg.longitude = 0.654936104304;
    msg.altitude = 44593U;
    msg.depth = 30295U;
    msg.heading = 61151U;
    msg.speed = -14193;
    msg.fuel = -12;
    msg.exec_state = 96;
    msg.plan_checksum = 47630U;

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
    msg.setTimeStamp(0.417910300041);
    msg.setSource(63122U);
    msg.setSourceEntity(143U);
    msg.setDestination(64977U);
    msg.setDestinationEntity(100U);
    msg.stime = 3080339534U;
    msg.latitude = 0.00459767672713;
    msg.longitude = 0.410499515598;
    msg.altitude = 54886U;
    msg.depth = 14476U;
    msg.heading = 30791U;
    msg.speed = 12734;
    msg.fuel = -96;
    msg.exec_state = 73;
    msg.plan_checksum = 38786U;

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
    msg.setTimeStamp(0.10975192818);
    msg.setSource(48290U);
    msg.setSourceEntity(141U);
    msg.setDestination(35628U);
    msg.setDestinationEntity(162U);
    msg.req_id = 26721U;
    msg.comm_mean = 99U;
    msg.destination.assign("AUTUURYPPGLRZODMCKDMLLBSLLNOPKZNRNTFERSYBPTFWTVFQDUQMZIBIZQYTPPEITXXNQEQIGOMXZKCSBKCGNTKHXNMSDPWIRSMBNYNGUENMSIFVCFHJEJZNCBQIFRRUIXGMHVDSLUPPIEEDODOPBJEQSAJHAHVQZXJLGHUFCVVY");
    msg.deadline = 0.808023222415;
    msg.range = 0.332174381845;
    msg.data_mode = 133U;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 19U;
    tmp_msg_0.flags = 88U;
    tmp_msg_0.description.assign("YJCYYPESUBEDZNWWNRXXAHVHKSWVPUAHLFGNHCWGMFPEAFEMMZFVFMQJORDQULQEEGMIBXYRFLOVKJTOIUCOSZWPJPPCKVCTZKKGJLLZGYKQDTECHMAAWALXNZBIIWKXFNODKKGIJGXUZXEZHLJVQESTDAILIUBTJIUOHCQNEHBVCJMPHTURTBMZFQSGTPOB");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JGISQOHERSJEDPBLRZZOUOOUTCJVKAPPCEDEILZWKUXQGSMQCKJTGADHYNBQEMRWVZWIWUJPGMAATIJLHBWSXEFMIJMHZELLYGTYBNXYWXDMTMVXGPHDKVCBMUOXTPNYRKERVQGCUTSDYEXEGNBXIPKCIZGUHBMHFTYKXSRIWFNNSAUPRUJIARKSUDBVGMNO");
    const char tmp_msg_1[] = {53, 42, -83, 89, 17, 120, -33, -59, -90, 76, 119, -61, 28, -32, 4, 29, 32, -82, 115, -118, -50, 92, -66, -63, -1, -29, -68, -80, 42, -20, -15, 66, 15, -98, 125, 54, -55, -37, 55, 12, -63, 62, 59, 56, -121, 101, 122, 29, 61, -19, 45, 41, 105, 70, 62, -75, -109, 21, 32, -3, 47, 21, -81, -33, 56, 58, 24, -24, -40, 115, 112, 56, -111, -80, 16, 106, -11, -17, 38, 3, -38, 110, -76, -3, 120, 22, -11, 23, 125, -109, -98, -119, 43, 112, 7, -36, 61, -114, -97, 115, -33, 75, 117, -3, -91, 9, -93, 53, -34, -4, 106, -113, 82, -119, 123, 114, 23, 59, -87, -48, -88, -103, -87, -85, 120, -58, -1, -111, 117, 5, 120, 10, -128, 51, 33, 6, -12, 24, 107, 118, 58, -73, -54, -7, -11, 22, -56, 32, 115, -98, -101, 22, -128, -44, 70, -62, 67, -34, -29, 10, -67, -38, 1, -43, -21, 68, 29, 92, 75, -98, 97, 2, 16, -45, 96, -11, 71, -12, 121, -47, -1, 4, 72, 109, -23, 106, -123, -56, -102, -10, 49, 48, 24, 109, -34, -31, -97, -29, 32, -64, 42, 52, 43, -32, -54, -97, 88, 67, -47, -44, -102, -102, 53, -97, -6, -96, -106, -111, 14, -34, 62, -49, -86, -13, 106, -51, -67, 3, 23, 121, 126, 55, -113, 26};
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
    msg.setTimeStamp(0.794364926107);
    msg.setSource(21465U);
    msg.setSourceEntity(104U);
    msg.setDestination(20857U);
    msg.setDestinationEntity(27U);
    msg.req_id = 40451U;
    msg.comm_mean = 127U;
    msg.destination.assign("EJEOETVKZHYTREPPBXCVGGCYYQUOWIMRKNLZAFDQQ");
    msg.deadline = 0.887709283857;
    msg.range = 0.733232367301;
    msg.data_mode = 127U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 32445U;
    tmp_msg_0.lat = 0.203844527192;
    tmp_msg_0.lon = 0.134518756779;
    tmp_msg_0.z = 0.63958630757;
    tmp_msg_0.z_units = 53U;
    tmp_msg_0.speed = 0.795715888386;
    tmp_msg_0.speed_units = 101U;
    tmp_msg_0.bearing = 0.382688524393;
    tmp_msg_0.cross_angle = 0.899436956203;
    tmp_msg_0.width = 0.810901649876;
    tmp_msg_0.length = 0.212945553671;
    tmp_msg_0.hstep = 0.76905319153;
    tmp_msg_0.coff = 39U;
    tmp_msg_0.alternation = 108U;
    tmp_msg_0.flags = 207U;
    tmp_msg_0.custom.assign("SQEFGWYKYIEMQOOZPZBBZNIHUDKBHVLSIQEWNRIQJUNJXXZIMKKTGOCWFUIPVDEXMIVDLUBVYDVDFRJGBYBMALYAHJFKXBRFMTXLQDAJMCSSNZFGFOPCDPAWGCELDUWXYEHLKTYZZZANPQOWNYPCCGIJXAWPLAAGSNSJRKXDTMROUXEHTOTVUTGWTVFQLBQJAYHTZUVWURKCJSRSOCNBKRPCGMRXLINPNVEHFBYHLUFTHIEA");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LFYSGPITYBJATKNNRHYCLLGPSBTHISWYSXPCQZBBSIEGBBDCIKYJECTFHXHER");
    const char tmp_msg_1[] = {73, -6, -15, -11, 105, 108, -13, 39, 123, -124, -70, 1, -83, 59, -104, -71, -97, 37, -124, -10, 107, -18, -85, -102, 83, 83, -79, 72, -121, -53, -15, 22, -68, 30, 51, -25, 29, 110, 63, 12, 50, 102, 110, 50, -7, 22, -86, 13, -52, -94, -6, -73, 78, 30, 112, 64, 39, -85, 2, -126, -24, -101, -20, -70, -103, -121, 101, 37, -55, 97, 22, -65, -77, 42, 8, 40, 46, 26, 126, -125, 109, 99, -3, -3, -88, -41, -96, -101, 110, 60, -59, 113, -11, 66, 120, 80, -21, -48, -65, -76, 21, 17, -84, 43, 110, -61, -116, 56, 8, 19, 18, -22, -57, -53, -97, 12, -53, 113, 98, -126, -94, 24, 25, 25, 26, -95, -22, -117, 55, -69, -101, 23, -98, -82, 103, -7, 101, -128, 13, -118, -106, -3, 93, -119, -24, 78, 68, 51, -34, -31, 50, 108, -7, -9, 105, -108, 19, -121, -31, -104, -72, -119, 25, -108, -28, 37, -64, 48, 72, 11, -45, 5, -112, 39, 114, -54, -50, 28, -103, 98, 60, 21, 54, -122, 109, -96, -18, 79, -73, -29, 50, 100, 94, -113, 2, 2, 81, 49, 15, 87, -86, -81, 109, -83, -83, -57, 36, -53, -97, -43, 52, -37, 48, 9, -9, -102, 104, 82, 25, -90, -108, 38, 80, -126, -1, 56};
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
    msg.setTimeStamp(0.924941572115);
    msg.setSource(11592U);
    msg.setSourceEntity(131U);
    msg.setDestination(28087U);
    msg.setDestinationEntity(61U);
    msg.req_id = 55279U;
    msg.comm_mean = 153U;
    msg.destination.assign("TPWXQPWGLSSXEIAQFFUAEEQGNOVKOYLHPTODBEGZ");
    msg.deadline = 0.587174775407;
    msg.range = 0.883010659073;
    msg.data_mode = 48U;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.946723607634;
    tmp_msg_0.x = 0.794356746411;
    tmp_msg_0.y = 0.964992158338;
    tmp_msg_0.z = 0.574380251929;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TUOSZTHKPJTNWKRSMLAINOPSPKEUKTTURPGHBHPNJAJMOMDUDNKSWCWNRDWAMCKYMHLYIXBVCDSNQIZMTANXISVSAZLMQYIEQSDAWSFJJNOQHWNAWVCLUYPBRULJRQQJIZXTVUYXVQECDZCVECBMBYXBGOXZ");
    const char tmp_msg_1[] = {-76, 124, -18, 45, 63, 81, -73, -112, -37, -108, 126, -95, 106, 26, -100, -28, -23, -33, 67, -59, -92, -41, 96, 91, 110, 3, 7, -106, 59, -46, -105, 45, -25, 49, -90, 61, -116, 54};
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
    msg.setTimeStamp(0.587392979699);
    msg.setSource(26853U);
    msg.setSourceEntity(241U);
    msg.setDestination(11718U);
    msg.setDestinationEntity(101U);
    msg.req_id = 39489U;
    msg.status = 168U;
    msg.range = 0.560966038752;
    msg.info.assign("ERPYOJXGTRCNBVPVQUNXUUHIFSKAQI");

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
    msg.setTimeStamp(0.687048984164);
    msg.setSource(59099U);
    msg.setSourceEntity(213U);
    msg.setDestination(55703U);
    msg.setDestinationEntity(50U);
    msg.req_id = 45643U;
    msg.status = 232U;
    msg.range = 0.358665857154;
    msg.info.assign("NCGIGGJCELFSUMLLHKHAOBFTSCSEQXAECGLJJHAPMUXQTWDKBZYUVZNZPEARGIARDDKCZLRVKNDDWLIWZDPSJUGJIUVKIYSMPZREFNFOXNEJRPKJYXMACDFMZWBHFOPHEQTOWNIKYVQBVFUIGWVAMZHZSPKOAEBXOHHQUNSYRFCJGMFYIQUJVCPWXWCDVYDRQMNKYSQAMWBGBNOHTQISLHCTVEJUZPBYTPTRGXKR");

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
    msg.setTimeStamp(0.767171391594);
    msg.setSource(63545U);
    msg.setSourceEntity(79U);
    msg.setDestination(52323U);
    msg.setDestinationEntity(139U);
    msg.req_id = 37519U;
    msg.status = 57U;
    msg.range = 0.71066223625;
    msg.info.assign("IQPNUYZINIYUCCOWVPERWZZQXATCLMRVWFCJGEKHMOWJUCDJELTYKXGXXYGSQWKQGUMZITHALTGQXXBRAAVNMOJOVHSJDUDBJFVWYXSNUPCOJAVPPERWEMHKZAKLPNTNDHJDYLLSYKAGGPLNZ");

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
    msg.setTimeStamp(0.460665654519);
    msg.setSource(32781U);
    msg.setSourceEntity(51U);
    msg.setDestination(28831U);
    msg.setDestinationEntity(69U);
    msg.req_id = 15491U;
    msg.destination.assign("TUYJENWWFMQHHZIKNMABSOTONTXKBOJILVKOSDRDBUWLVSKNRPOCJFNMDIMQACIDMGUPGCPOAHWJBOQEWDJRTYKYLGSFVXHLZZVDTZJMCBMLPDGEPHYJHIYXHKLIUTEQWMWCMYRIAFLSTYHXEOQHNTUCUOWFXIKECADZECK");
    msg.timeout = 0.0374523243517;
    msg.sms_text.assign("DKKOIPFSPCCZFUERALGIJZVNXXBIFQDMYWFAYQNSHVMQWZZNWSCCYQGXSBXUNLPUJZSKULKLPLFGUBDGMEVKWLYVMFUGSDOHNYHAAVFEZNOATPHBHZBSOMIPATHCCFGEPJGKIURGCZCJIKUHIRJNJ");

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
    msg.setTimeStamp(0.162185810121);
    msg.setSource(52683U);
    msg.setSourceEntity(222U);
    msg.setDestination(50057U);
    msg.setDestinationEntity(123U);
    msg.req_id = 28671U;
    msg.destination.assign("XIXCLNXGUIYRQNNBOLDGJQEYUSJJMOCFTVQQISHCEEACPRVYVTFNRIDPZMNKPIVYEBSZYLBDLUMXOWEZOSUATXUEWYURKWCYUSFWZQRTVHLMZQZFAKRHPEWPQSGGBOGHDRBXBGMZFLWLMRNKMDPOSJFDEUSUJQZCHMJCAJOFAMGMJDHHTKBKWQTAWOVXEJZGPEC");
    msg.timeout = 0.350892216709;
    msg.sms_text.assign("DRTKRXPAWJJNGVNIDWKVIGHUQVKRBORHZZLEYFJOMDWCEHNBBPFRQQXCUSYHZKLCVIIEAWGTPBISAESPJGNNSGVYFYETUFGNUYRRLDLZTAOMBIFAVTUNXE");

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
    msg.setTimeStamp(0.203432846409);
    msg.setSource(6586U);
    msg.setSourceEntity(3U);
    msg.setDestination(16759U);
    msg.setDestinationEntity(74U);
    msg.req_id = 8916U;
    msg.destination.assign("PMDQTFXVTEXTVGKIXFZKTZBHERMBXAJTJHZ");
    msg.timeout = 0.0723342269908;
    msg.sms_text.assign("YSHQCFESBEYBLAYRULICRIAEDPQTTGGKRWAQJYRWBHWHUVBDXZKYJKLRJFBZNCYUEUXYNEQUXWKXOGSRISRSDWNTAIZZUXVLJMFLMWUYLELCGEJSFFHMLVWWGOZPSNNRFWMSXBTKDIHAFOIEIMAKHQSGEMBVKAVGHFOVZPXWJZPZCDMCAHMMTAPUNXCUOCDONQZIDRJPOFZADYIJVTFMPOYJJPNKBRGTLGNUNBDVKQGVLXIPTVECTKQB");

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
    msg.setTimeStamp(0.684327440015);
    msg.setSource(12702U);
    msg.setSourceEntity(1U);
    msg.setDestination(39380U);
    msg.setDestinationEntity(116U);
    msg.req_id = 22480U;
    msg.status = 94U;
    msg.info.assign("VTWZTYIOZOIVNZFIAISGKHTJVUPPNFBRGGJEGDEWIDUJEBTTGOAQDRXHILCALSIZLJDBMSXVUHNNLAOKEBHAOEHMXW");

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
    msg.setTimeStamp(0.0537389832153);
    msg.setSource(57108U);
    msg.setSourceEntity(48U);
    msg.setDestination(2986U);
    msg.setDestinationEntity(40U);
    msg.req_id = 21079U;
    msg.status = 21U;
    msg.info.assign("RURKQCZTDESAOMYEAZYETZKVDBCSWNTFSHMRHVQKBYMIJQAPTEYUVCDHGHBWCNMONPXGHPSOQLKYLAWBSIEBRVNOUMDZOWTBRBNJJFSLGRUZGILYVUXNZAQWNDFMATHVKVWXEFTHWDLGYFVPBXGFXILNEDPORQOFEQUIAMDAPJNWLATZIFLRWDTGVHYPBIJ");

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
    msg.setTimeStamp(0.534844988359);
    msg.setSource(23423U);
    msg.setSourceEntity(38U);
    msg.setDestination(53354U);
    msg.setDestinationEntity(235U);
    msg.req_id = 20539U;
    msg.status = 105U;
    msg.info.assign("BQARISRIVIHSHOBKQCKAAZHZRWXBTEHEWYHBLPCFNUINYDLZXJSNYHGGOXRLDJOVWSSXFJUKLSGDWCFUNBZQMITZUWJJEDPCJHEYFJBUXZVXALGVOTOJMWRZDFRXCUYBPNTRAAQODIYEFQLHYABMSEDTCKEMGPACPONPVTHFMFCOWIRZNMLNGKPWDPQGDCLUWJFCITKUHAJAOSGMNEQOFYIVQLQYTE");

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
    msg.setTimeStamp(0.551518450091);
    msg.setSource(620U);
    msg.setSourceEntity(32U);
    msg.setDestination(25790U);
    msg.setDestinationEntity(62U);
    msg.state = 76U;

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
    msg.setTimeStamp(0.164191800926);
    msg.setSource(30985U);
    msg.setSourceEntity(84U);
    msg.setDestination(38633U);
    msg.setDestinationEntity(116U);
    msg.state = 220U;

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
    msg.setTimeStamp(0.785801101413);
    msg.setSource(20295U);
    msg.setSourceEntity(238U);
    msg.setDestination(65086U);
    msg.setDestinationEntity(53U);
    msg.state = 2U;

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
    msg.setTimeStamp(0.612248706017);
    msg.setSource(3618U);
    msg.setSourceEntity(151U);
    msg.setDestination(28722U);
    msg.setDestinationEntity(101U);
    msg.state = 88U;

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
    msg.setTimeStamp(0.773669497784);
    msg.setSource(30913U);
    msg.setSourceEntity(138U);
    msg.setDestination(4589U);
    msg.setDestinationEntity(187U);
    msg.state = 35U;

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
    msg.setTimeStamp(0.956476490108);
    msg.setSource(45328U);
    msg.setSourceEntity(253U);
    msg.setDestination(46417U);
    msg.setDestinationEntity(85U);
    msg.state = 133U;

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
    msg.setTimeStamp(0.418736114371);
    msg.setSource(34168U);
    msg.setSourceEntity(178U);
    msg.setDestination(35781U);
    msg.setDestinationEntity(61U);
    msg.req_id = 30598U;
    msg.destination.assign("XEGIVHEYFRIIKGBOTASFJKQJHNCXSEXVBAQNTKLNXMIQVDWQWKNQHEHRTHMLSDFTDWKFEPORBCPSTSCMFADWJLZBKUTSTCMGCIILLJALPHXUYOWROVJHZOFARWKVGEDDDZOUUNNDXKPYISXTAOVYYYOXWAAOMHHLUVPRCKUAQVRIYACQSZZUESGJPCBLUMLMVDIFBYNXFNGYCHFR");
    msg.timeout = 0.838498115857;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.720483255783;
    tmp_msg_0.base_lon = 0.101255112731;
    tmp_msg_0.base_time = 0.944590775538;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 1463U;
    tmp_tmp_msg_0_0.destination = 58243U;
    tmp_tmp_msg_0_0.timeout = 0.327928253264;
    IMC::ControlParcel tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.p = 0.67905873202;
    tmp_tmp_tmp_msg_0_0_0.i = 0.689406774262;
    tmp_tmp_tmp_msg_0_0_0.d = 0.294429242813;
    tmp_tmp_tmp_msg_0_0_0.a = 0.311417373028;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.343845658177);
    msg.setSource(28270U);
    msg.setSourceEntity(137U);
    msg.setDestination(4020U);
    msg.setDestinationEntity(76U);
    msg.req_id = 62406U;
    msg.destination.assign("LMKBODCKPBGNCSQHOXIUJWBYWUJDHUHFCTJOYQBZIREWUELTRYTCJPHHMBSZBLQRLEKCNITSPBOAQGIZYYVAQZPDIG");
    msg.timeout = 0.14240574977;
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 237U;
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
    msg.setTimeStamp(0.0992178087779);
    msg.setSource(62173U);
    msg.setSourceEntity(249U);
    msg.setDestination(7821U);
    msg.setDestinationEntity(166U);
    msg.req_id = 37792U;
    msg.destination.assign("VAMTXGJYBCDYJCIXMFOHUAFZDEVROSAFWETFAVZUBFPBGWYQQAVGOCZKPOKUXTUMKNMTYJJMZTZSPJZWOLOIWVGDEZPDSDIFCYIBCXRQHGELFZHCKXPLOLUZBDCRYFOWYKABCHJPWHTHVRNWRNSIQSBDMCHQMAXMWGDRPNYIAULBEEEXNLTGTHUNFYIDSGLXKREPOHLNTQKKEBTGQUOQGWQANYVJPDSJKRPNIMSXQUVREHBRZKLVWAXFJS");
    msg.timeout = 0.852341410494;
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 229U;
    tmp_msg_0.plan_id.assign("RBJUYQICMTPIMFKQZKGPSKTWTUJVSKZHTZLCMGOAJSTUFRTSSPNDLZKVGUJIPGMHZJXPSMSNAFQAHQVBXJDMVY");
    tmp_msg_0.comm_level = 219U;
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
    msg.setTimeStamp(0.0630987297003);
    msg.setSource(39463U);
    msg.setSourceEntity(57U);
    msg.setDestination(3129U);
    msg.setDestinationEntity(5U);
    msg.req_id = 60648U;
    msg.status = 13U;
    msg.info.assign("TTZDDSZWGQAGMKDOWBCHYUUIXGSBFVZEKHIAOATJZIXYAJMMBYWYPWLIEEFGYTQKDKBCBSPEFMWMLUTSCTFJXNXGPFYLUMVQOVDRSZORNLOPCOOIQAZKLRJKMHEHSJPRUSIZABVNUKJLTKEVMCXRWCORUXEBOMDOTQGDRXNBIXIEFUCNWQXPH");

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
    msg.setTimeStamp(0.533684485555);
    msg.setSource(42328U);
    msg.setSourceEntity(252U);
    msg.setDestination(18696U);
    msg.setDestinationEntity(193U);
    msg.req_id = 24929U;
    msg.status = 179U;
    msg.info.assign("AAGBVZBEJKQNFKTMFDHVRZPGDQVIURCOXEOSTVPQRVSYOCKGCFZREU");

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
    msg.setTimeStamp(0.53274100571);
    msg.setSource(25137U);
    msg.setSourceEntity(5U);
    msg.setDestination(14332U);
    msg.setDestinationEntity(185U);
    msg.req_id = 3260U;
    msg.status = 170U;
    msg.info.assign("GLSGWQKDXUVRQIIZSUVQKANFX");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.240431845351);
    msg.setSource(7805U);
    msg.setSourceEntity(132U);
    msg.setDestination(63331U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.978944340516);
    msg.setSource(36065U);
    msg.setSourceEntity(109U);
    msg.setDestination(40189U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.81068592464);
    msg.setSource(42144U);
    msg.setSourceEntity(207U);
    msg.setDestination(45037U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.111659792033);
    msg.setSource(11069U);
    msg.setSourceEntity(116U);
    msg.setDestination(56681U);
    msg.setDestinationEntity(240U);
    msg.plan_id.assign("VVZVZACTPYSZXUWCGFQIRVPWKCEZCUJMTAAFTMSWLLBILJMHUPPYOHOPAQGDQZIYSJLUENGCAGRKCHHBNGXXEHIRUOZQNGTUPAOBWKGMUPNGITYMEKJSIEYU");
    msg.description.assign("DMAGQBWMXDCWBAJXZNKBWYGQEZQMOUFSWHJHKOLKAMCHZEVXKLFPCKUHNCOSTVKXNSRBNUEQVECVTVWYSKJJMKETUZZSCASPGTNLNTWHYFVTIODNGYVZRVPSDRIBPHPEAJWMLWOZFILZAULQJGQIFBGPHXODO");
    msg.vnamespace.assign("CZZSJMXDAJVVHWGXZKHRDKKGNAGWDBXWSVUXFVDKAHFGHDMIZMCAEPMVDRVJZRUQVLBVDCBRWFKXZXSALKIHCGJCAMFAXYBHQWCRIILPNUMEIIQGLNPKEFINGFBLYRZPAPPEHDQLXFJNYFLUWITQJRNLFUQJUS");
    msg.start_man_id.assign("XHBHMOQXWEOMGLDVWUZPJJSYPKQMULUMQCFMPSRUHMC");

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
    msg.setTimeStamp(0.430769779432);
    msg.setSource(15355U);
    msg.setSourceEntity(130U);
    msg.setDestination(37248U);
    msg.setDestinationEntity(76U);
    msg.plan_id.assign("CLLNGMZCRGXZBKEYBEYYLNJKCBKWHRMSXFPBMGRLJNZLVVEOKOMAOPWMFBRZNSEKQAYMLFTVFXYGPSZWJRTQCLFBZMIAAKUQIHXYRKSVAPNSSTETSBLBYCPJTQWUGUD");
    msg.description.assign("HDIOEHFKPFANIZMIDVSJGAUNQQVDWPLIWXVKTVAAGHFKLCXYEBDSRQSWJYRKLXHKIJYZBPCTBCGTYYNEYTFRJGGIUASLCESSAINZNAZEFWODXXMKJMOOHDCQXXJSCGFQYUQGZRPMMLOUSUBUIBXKQEEXBTFPPHBWYJWKBREPDNLUVRBQPJHDDVFQMOKMMOAPFTRLONGWIWRNORHZEIWJD");
    msg.vnamespace.assign("GPWALOIPSICBEYAVXVDLGMTPRCACTYY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HIOCAFUAYLYRTXOWKSTNMMLPSGBURHAAFZAQCXVALTHJUMQYVCIHPWYZNZVYOLQSTEWINAOJWUYXKFHZJXCEZPTGRJTKPLMBIKGOKLLDPZOWFFNTEVURVCXAEDIJUDGWKFGOHOQVJWOXFWISNQXYXSLXBQWJFHZZGYSNEYNPZQSIEKSUIRBMFRHCTCYUGOHJRSCBPCKMZEIJKMCGAUMTQEBBXSDDNRETBPPBQFDL");
    tmp_msg_0.value.assign("CPVEKJFBTZMGSOFYSABDNLKECKXBTYZKDZBBQCFJPMGEQRHWHWFIUDEPUVAEYVHJLNBKWO");
    tmp_msg_0.type = 182U;
    tmp_msg_0.access = 27U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PNEEOLTKRJDGZJRBELDVSSPLQJMDSGWZPCPWQYCEMLICLBLZOXIUYPZUJMOCFHN");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("YPPVBQLQPZ");
    IMC::StationKeepingExtended tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.443952436326;
    tmp_tmp_msg_1_0.lon = 0.756919116799;
    tmp_tmp_msg_1_0.z = 0.164603089941;
    tmp_tmp_msg_1_0.z_units = 158U;
    tmp_tmp_msg_1_0.radius = 0.104967455398;
    tmp_tmp_msg_1_0.duration = 33658U;
    tmp_tmp_msg_1_0.speed = 0.0280056768007;
    tmp_tmp_msg_1_0.speed_units = 22U;
    tmp_tmp_msg_1_0.popup_period = 57722U;
    tmp_tmp_msg_1_0.popup_duration = 58424U;
    tmp_tmp_msg_1_0.flags = 232U;
    tmp_tmp_msg_1_0.custom.assign("ZOGTZXDFYWWXMLQVBORPYRMUSOBNFNMWRHOKKIUAMAVRYKGLWPJBTVNYCUBSYJJONCIEQAWDXEFYCHHJABXYAOKRHPTVAGTFKPATJWYPTHOGINDZXFRNNZDCELTFHKVGKLSIUCWHGCOIGQBZQLXAORIUAJNFTVRGZXHUBRHLPJEXDCLKUJAQCQKCQQQEMEBITBGDSSEFSFGVMKSM");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::LcdControl tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.op = 107U;
    tmp_tmp_msg_1_1.text.assign("WPYDGKUVKGYXFRORVPQDSHNBLUGTWSLSNIQMGJLEATYSJPBXDFAOHUVCWOHIMIAHTWWBFVHZSEFDQNFBMHJQACQRJRWQPRTKKIUEPMAXFXLCGUE");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::UsblAngles tmp_msg_2;
    tmp_msg_2.target = 17742U;
    tmp_msg_2.bearing = 0.362654011461;
    tmp_msg_2.elevation = 0.921240223008;
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
    msg.setTimeStamp(0.983162365337);
    msg.setSource(14227U);
    msg.setSourceEntity(179U);
    msg.setDestination(28760U);
    msg.setDestinationEntity(150U);
    msg.plan_id.assign("AJFRYJIVMLMBPNUZQZAXSKMTUCHCHOQWXAP");
    msg.description.assign("DKCWHLBQLARNNLTYKGLUBTTTVHQPZNNTYWSEUOLXDTSMZHWRUPGXSCOXSNCFCUKHTRSIKKGQWVVRYCOGBFESUNZNOQFQALVGWTBMIJJZEKJHOEGZRQODRIDJXMDYANRYKDLSGO");
    msg.vnamespace.assign("EHZZLPDAHSXDNVCIXUZYJMTLBVNRXTXJEEIMWQRBUWWXPSTEJNEBVNXYHCYLPYSSHKCGCQSWYGJHAGLRYTODHQIIAVSKFTMXZSFGHYRSFXRVUPNMOMWHCDLJBZVMZZOANQUJIGMZGARIBVHDEALDDKVDEHCRYRFIUBFEDQE");
    msg.start_man_id.assign("MMWRWVSUJBTPHQOZCHBXQCBEFSOFDNEKCKUDXYPFWNGRRZGDEMNCQLFDQYIKZRAMEGTSEYTQXHQFZHOLAJPTPRVORVVBNAMKBPRNWTVKMWNCAUZOBUIWYNYNMNKISGCILITGIHELBYWEJDJPIJSXXKAZJCVRKFEUVDQFTSBVBXODJXGOATALFOZUMCWZVSGHL");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZOORHGGDKXHGCFFCJKTZBVYFWUHSTYIRTLPQXBOCLZMBIDWYPDVMNGJJGGPA");
    IMC::FormationPlanExecution tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("UHTQDBYAWZ");
    tmp_tmp_msg_0_0.formation_name.assign("EFAUVGKTOCHOFRSGBTPTAMTNIJADFGXHNUZYLGSNHQAQCIZDYWXKOI");
    tmp_tmp_msg_0_0.plan_id.assign("PTXNGJMRMQUBKGDSNALCHHJXXVBOGGZIHEBTJEGTHDOVIAMWFRDAGUNABHWY");
    tmp_tmp_msg_0_0.description.assign("IQHEWDVQDXKYGVYCHOFNYUUXYTJRHCDNMXAEZOIEXXLGQCVBDTYHAVNWODJMPWMRILSIITVUIVOQJNRKFHJBBCRXNKQDLKPBOCSONBFGYJKJULHMQXOBSMRMIKXRGEYKMHTSVBCZEZBPURHKEGDOPDSLLFTPUUALXUFPIN");
    tmp_tmp_msg_0_0.leader_speed = 0.297435576697;
    tmp_tmp_msg_0_0.leader_bank_lim = 0.476517338486;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.256237790942;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.246094510808;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 36212U;
    tmp_tmp_msg_0_0.converg_max = 0.189283525677;
    tmp_tmp_msg_0_0.converg_timeout = 6060U;
    tmp_tmp_msg_0_0.comms_timeout = 52435U;
    tmp_tmp_msg_0_0.turb_lim = 0.194547756361;
    tmp_tmp_msg_0_0.custom.assign("LTUQCGWDIVVUQZNHSKDLYHAMNQPOJIVDMOWKFDAXPZSPOFPORCUKFOEESEDORIGHGXXJUNLBQZKVVZFYCVNLORSPTWSRBLELUTT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SessionStatus tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.sessid = 260720685U;
    tmp_tmp_msg_0_1.status = 167U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::GetParametersXml tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.107932782572);
    msg.setSource(11367U);
    msg.setSourceEntity(100U);
    msg.setDestination(20070U);
    msg.setDestinationEntity(183U);
    msg.maneuver_id.assign("VVWFFDAHQCNIEJPKWLAUZRCRFKRYKYSWFFLSEBJJJTKPYONQTEOZZFJVFGBIWJHXAWEJZMNGZPAXHTMGBUHGBYGXLSTUXYSYDWGOUAECHDQSRABWQCL");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("WBHLUPZMZVTXGAUCDHEISEIKVJVUAGTWRZKTFNEHXLMVDQMKWHXLAYAYMCUOULBDTGOCYKECBAJNLPCBJSUXZAWBDRYPWEMBQGBAINIVOLXKCJKFFLDFUJFGHNIUPRIKR");
    tmp_msg_0.formation_name.assign("SVNOIBDVETIAKYJPSWMUDMSFBBNIIDUZRWYXWQPEMMNVKCGLPQGRSAOJZZROYABAEBAQOGQAJLSKNLTCXWQFKOCCLYTEWKGOSOGLLZUHARXUPYVIDSJTPFYOFVKFFYHTZHHKPENFTFYZRABGPTQDLPDHBRNZDRXWICEIQEPATNZIGUIEODCRFSNAUBEJVXKUMWDISVMHBHPFTMMJUCKJHJMRUYXBNQTQRUQJXJXEGCZSKXHGNYVL");
    tmp_msg_0.plan_id.assign("VBTICQMAIBWBUNGVRWIHCAOYOHNOHRUDMNGZNVAIZYWDGFJQCPXHVTOSMZVZRHIGNPVPUKZTCGWSDCUSVQILRGBLJSAJWTJCOFKHFXXWJMBTYRASIZKCJUTPFFHPJONRDSQEQKBJYOUFQHFNDNMHCOZIZEDVKATMDIKPDLVSXYQXWZEMBBXRAERLJLKWGEQENTY");
    tmp_msg_0.description.assign("WQLRZQLYOGBEOBHFWWTVNQMJICPWL");
    tmp_msg_0.leader_speed = 0.144183454286;
    tmp_msg_0.leader_bank_lim = 0.940492366827;
    tmp_msg_0.pos_sim_err_lim = 0.374683393048;
    tmp_msg_0.pos_sim_err_wrn = 0.0350373157443;
    tmp_msg_0.pos_sim_err_timeout = 21152U;
    tmp_msg_0.converg_max = 0.479063942525;
    tmp_msg_0.converg_timeout = 41114U;
    tmp_msg_0.comms_timeout = 42889U;
    tmp_msg_0.turb_lim = 0.530929006375;
    tmp_msg_0.custom.assign("RCROZJZORDXDHYNSCBREZNDBNDNGTAUILPFCKQITEOCPQYNZWJEHHBYKEKJILGXMSARNFUKWXFFZPDMUAQPNCTGXOTQTXVWLUGKXIDHUCAFZVVQMVXLJFMOMXHXZCDGUCHQLVSYIAELIBKLEOQRKIHOWYOYYASBOCGXBFKLYRLNYPWSPJSKZWVHJIFFTMTWAPDPVRUBBPEMSTRYUEZNFIBIWWVTMRGUJGCQZQJGGDANJBAV");
    msg.data.set(tmp_msg_0);
    IMC::IridiumTxStatus tmp_msg_1;
    tmp_msg_1.req_id = 59725U;
    tmp_msg_1.status = 72U;
    tmp_msg_1.text.assign("QPDJFAWMZNCYFTPZSHGHBPXSRBOAARWIUZYWHCVYGDLLUKHLSVBFGZNNQSQAUQMGKRPXXDZOESQRWJHBBXJRHBMHCVBNBOAENDDRDEKGJUIWKIVITATMPYWXGCRANLJQYZTFTFQAJYWZECAFYJBCOWFCQYPUKLVUOTDUDFRXAIIKTZUYMVGMFSPETWSOMXLLHGTKHCDVLEZIUL");
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
    msg.setTimeStamp(0.734044284264);
    msg.setSource(33204U);
    msg.setSourceEntity(98U);
    msg.setDestination(63137U);
    msg.setDestinationEntity(197U);
    msg.maneuver_id.assign("VMPWOTKGCSNTEXTORCSVCGZHCJDPLGWYEBYAFLQTSFQRAMXBZMEIXTJOQBZCHOLOKJEJGGUBUMXNLWHFKQIFDPRHHJGZYQWPRUSPOTDJACKOUZQCQNEUSHILMEIYIOTVGJFYENOVSKZEKZARBLBEQSIXDFMC");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 47723U;
    tmp_msg_0.lat = 0.74188786691;
    tmp_msg_0.lon = 0.74594676659;
    tmp_msg_0.z = 0.632586579238;
    tmp_msg_0.z_units = 134U;
    tmp_msg_0.speed = 0.483405142354;
    tmp_msg_0.speed_units = 60U;
    tmp_msg_0.roll = 0.298213158869;
    tmp_msg_0.pitch = 0.162828393285;
    tmp_msg_0.yaw = 0.564041133485;
    tmp_msg_0.custom.assign("YUAHUPGOOCJWFCAQYBNTXMSIMXBHDQERMGXEWLFEERWKPUQOITBOZRPBFYPRIEUDNAPYUUTVXTETHZQWYOIKJFHJWJRLAPBINJBAIHRERYGACIHQYZHTHFZHCMVEYVVJZPRFQLFKV");
    msg.data.set(tmp_msg_0);
    IMC::EstimatedState tmp_msg_1;
    tmp_msg_1.lat = 0.460422395725;
    tmp_msg_1.lon = 0.807652689294;
    tmp_msg_1.height = 0.515307372704;
    tmp_msg_1.x = 0.268600694825;
    tmp_msg_1.y = 0.431874359009;
    tmp_msg_1.z = 0.435986811321;
    tmp_msg_1.phi = 0.722309190791;
    tmp_msg_1.theta = 0.708709663054;
    tmp_msg_1.psi = 0.265271127061;
    tmp_msg_1.u = 0.654348457223;
    tmp_msg_1.v = 0.815966045317;
    tmp_msg_1.w = 0.891862382997;
    tmp_msg_1.vx = 0.683673188855;
    tmp_msg_1.vy = 0.320277842158;
    tmp_msg_1.vz = 0.0630529860997;
    tmp_msg_1.p = 0.574946720085;
    tmp_msg_1.q = 0.10951454178;
    tmp_msg_1.r = 0.349506149339;
    tmp_msg_1.depth = 0.147039186373;
    tmp_msg_1.alt = 0.847896613882;
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
    msg.setTimeStamp(0.573702223988);
    msg.setSource(41748U);
    msg.setSourceEntity(176U);
    msg.setDestination(61053U);
    msg.setDestinationEntity(79U);
    msg.maneuver_id.assign("KFLWBHWQFRSQMZBVABAQSTFUYINXJWFTHDRCYENPVLMUGTMCIKEWEAGDRSTVBHVIGRQJSBSQLJUQXFDOYHMDNCKWCYFERUPXQYJRTABAVBUIUTPDKJQMALCHQPIZMYRGHVDAMPPJOPXFWVTCULVDBIUCZKXZGEYOZTCDNEBSHIMOTLNPJAKELXLKMOPBDU");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.0965814469554;
    tmp_msg_0.lon = 0.294725862503;
    tmp_msg_0.z = 0.92103350717;
    tmp_msg_0.z_units = 48U;
    tmp_msg_0.speed = 0.683797227186;
    tmp_msg_0.speed_units = 254U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.273500250982;
    tmp_tmp_msg_0_0.y = 0.400157126397;
    tmp_tmp_msg_0_0.z = 0.864334639678;
    tmp_tmp_msg_0_0.t = 0.168862080729;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.509635776051;
    tmp_msg_0.custom.assign("WLEZDBHBCMVSIDILLNNYELXAYFTVAZHUTVFUSZHELMMNWJJUNHLXSMTGDSUFQKGGAEPDOYRBSDFJMFGEKOKCNEZXVEJNIZPYOOZPXPAOCJUYCCHKAMDYKQEQPBEGRDOAKPWQMWRSJKIXQIFVHXPQLWDSKZWUUXPNREPBTFGHFRQYRITWZXIBHLFYVRNWKQOLVVUXYAQXAISTBN");
    msg.data.set(tmp_msg_0);
    IMC::RowsCoverage tmp_msg_1;
    tmp_msg_1.lat = 0.890089949918;
    tmp_msg_1.lon = 0.162589013068;
    tmp_msg_1.z = 0.659530559323;
    tmp_msg_1.z_units = 20U;
    tmp_msg_1.speed = 0.227619875793;
    tmp_msg_1.speed_units = 198U;
    tmp_msg_1.bearing = 0.138064282265;
    tmp_msg_1.cross_angle = 0.26989697956;
    tmp_msg_1.width = 0.78778271732;
    tmp_msg_1.length = 0.0805984611232;
    tmp_msg_1.coff = 16U;
    tmp_msg_1.angaperture = 0.0702021537864;
    tmp_msg_1.range = 42469U;
    tmp_msg_1.overlap = 12U;
    tmp_msg_1.flags = 101U;
    tmp_msg_1.custom.assign("URCXPKROPSZPVLPJRZZDYIGRBALKPMFKYHGSEIGCVEDQKIWRPDANQNAGZJAXWEFIGJQXQNIEAJFPEZOPOHKTZFYDWHSZOMHJUXCCVDVYLXYWBUAVXKFTWHLAEQRXTBVNQELDLUBQSNRGCTUBLHIYTFHCOTXNUHSQMYGCSOWLBNTLIUWJAFPKEIDAVMSMYFHDNGBMJIYMSZTFJVQWUADPFVNUEHGXBSJBUOLVCKRMTORNYZMSW");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::MessagePart tmp_msg_2;
    tmp_msg_2.uid = 251U;
    tmp_msg_2.frag_number = 121U;
    tmp_msg_2.num_frags = 123U;
    const char tmp_tmp_msg_2_0[] = {16, -48, 70, -119, -17, 92, 85, 28, -32, 26, -36, -2, -55, -82, 22, -63, -62, 40, 110, 123, -40, 125, 21, -37, -67, -2, 56, -5, -111, 101, 36, -28, 19, -96, 98, -79, -104, -18, -124, -95, -56, 41, -87, 99, 74, 2, 68, -22, 49, -89, 68, -57, -59, -103, 48, 91, 29, 102, 91, -11, -64, 51, 122, 103, 76, 43, 49, -75, -103, 111, 26, 60, -106, -7, -120, -2, -13, 23, -87, -87, -49, 77, -121, 42, -38, -5, 48, 99, 93, -63, 65, -51, 121, -99, -41, -7, -122, 111, -42, 39, -61, -35, 116, -36, 16, 31, -83, -26, -85, -66, -85, 123, -121, -7, -54, 117, 117, -72, 78, 103, -7, 68, 83, -86, 89, 60, 28, 94, 111, 116, -94, -119, 11, 107, -37, 114, -109, -109, 49, -103, -6, 46, -81, -99, 48, 7, 90, 49, 27, -117, 93, 94, 70, -6, -85, -90, -55, -55, -114, -82, 11, 19, -40, 98, 118, -72, 69, -52, -92, -128, 56, -81, 21, -69, -72, 72, -19, -126, 104, 91, -83, -27, -118, -5, 75, -86, 44, -17, -44, 81, -57, -82, -20, 109, 76, 3, -80, 100, -110, -88, -23, 114, -52, -110, 27, -103, 25, -90, -88, 83, -77, -46, 59, 110, -57, -113, 109};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.337174923769);
    msg.setSource(8186U);
    msg.setSourceEntity(128U);
    msg.setDestination(55411U);
    msg.setDestinationEntity(139U);
    msg.source_man.assign("QCQFTYHNCNYSERSQOZWWAZKAKFEBSOIVUCUQZZBYUKVIKYEDZFHPWMXCCKNLTCNYLFRLKVVETLFMBAXOJINPEWNKIYIUDWQCAMHPAQULOSVTBDBYUEVSZDGMYREBWJRXTDYPPNTXKVFWQWUCRAHZCTTNJPNBXLHZMWALRGOMOYEIDNQVGSOD");
    msg.dest_man.assign("RHVVTATVXTWIXZIUTQFVXLJZMYGSIWBYXNDHWZDCGNCPCAJEHFEVAENRJZCNHUBLPAPPQMZCFUIWLQKFGEBAGBFEOAVDKQQNZTSIQGKMWSCMINFSLPU");
    msg.conditions.assign("RXKZBRQOWXMQUUIWBDONHVLMMNBP");
    IMC::SoiCommand tmp_msg_0;
    tmp_msg_0.type = 98U;
    tmp_msg_0.command = 237U;
    tmp_msg_0.settings.assign("UGMJDBEYSKEBKLAIAYYVZVUPLDRDWZLDVHGZQTZLHCCXTTAFTFCVPTQPXTODGYMUPWQCASTUFIGEOZIEIMYCYQJQNEEAGNCLLYZFKOBRLASOABODJPJUIEJQNXLGSUPYFUHIOKCNRIOPZCHNQJXOGIIJUVBUOMEDFVBLSHTKFFBNWFKZSRMPHMQNBVORWZELSGND");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 12148U;
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("IXNMDEDWVNEJSCHXKMZERVRKGHBJCMEYPFDITXLTZJPUXEMCVOIHXTSAYECAZPWTESLHTPMLSRIZWCRUJLBYUYDBMWNHLBFIZHFSUOJUPCMNCHWZAGFZLRNHBWVKLKXVLCUAUTLQVTYIIFWTKYGDKVQPRYHZUKAPYFMDIWCMSQONQJDHIFPNRGTYPOSBQJMBOWQVGAEZKGONAKRVSWSYSXRTQOGBJBIGF");
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
    msg.setTimeStamp(0.388727378427);
    msg.setSource(44408U);
    msg.setSourceEntity(163U);
    msg.setDestination(63224U);
    msg.setDestinationEntity(168U);
    msg.source_man.assign("YMNMXQTISQUORXOLBUKZAZOXLJVIDDFXEUJUUIVYIBURDYVBGEHZXOYPVIOKMSGATEUSJWKDKPCLARRGLRPJBIMTKKYPIWLBZATVSWZDCBPZPAHAGXJNAFBYQLZPSTNLJXMAEJXHEWZFCGSSOQPE");
    msg.dest_man.assign("AWYJBNHSGAUGXRDBGIACUJOVJIWTFIMTBXLRYPKRIMIFZJKIDBUDPVDFSCOEJPFLKPBPNIUNDBXNWLOGYEDKLEHTJKTHYQXTZYCNGAKAUPEJHFVNOOLONQIKFILLCQROM");
    msg.conditions.assign("QUVNWSAIBDIQDLJORYJJXZLYMTKLVUFTVRSPBUZMJGNFI");

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
    msg.setTimeStamp(0.95010425294);
    msg.setSource(19233U);
    msg.setSourceEntity(64U);
    msg.setDestination(26996U);
    msg.setDestinationEntity(23U);
    msg.source_man.assign("VBIXHUKBSZVCLJWYGNIGQNGQJLWEDWBBCZYWVQWEEXODFUVMHMEQNHZYMZMYJJIOENIGKAUDNLKGDBOSATZI");
    msg.dest_man.assign("CUODTKKQFVGBDAQYJIEFCMZHYLZXTITAADWTIJQQAFSDFMALSPMJUPKRLZUSYUYIPWSFMAECWWDMBTNLLOOWMEXYLLPHDNKXCXLBYMYUIPPICJKVQNTRXSONJIOVZHGTGFHXSINMUVJHGKWKAZEPWSBTAIVEIOSMVUEEQGOHJZXPBYHBLEDUGNQKM");
    msg.conditions.assign("UHZUBQYGDDDTZMLAFFHJOFPBACNBVIEIIPSAPKVEYZKPRFGSTKVXCHXSMNODXASMWLMEWAAJXTQHCKOQEXBMQRIMXGCOCLHDKDUPDFGOLANYYHRVRFLEKSTGVDMGVRZUCTJSKYTUVGNXBIPZOPPJSJOKEYHWRYQVFNRGADZBKIHQTICURNHWJCYQOA");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 31237U;
    tmp_msg_0.control_ent = 130U;
    tmp_msg_0.timeout = 0.14763675073;
    tmp_msg_0.loiter_radius = 0.935694318726;
    tmp_msg_0.altitude_interval = 0.305083927024;
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
    msg.setTimeStamp(0.571795161184);
    msg.setSource(4002U);
    msg.setSourceEntity(23U);
    msg.setDestination(15656U);
    msg.setDestinationEntity(69U);
    msg.command = 14U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GDXOPRZKNNGWOCSVNCBACMOUWJZKIIVYGRVAYYHCOOZYMFMGMKRISZLEMFEKTKAADTNDZSBLFBUQYQOXVSOCSJUPTUKFVGBLFJWGPZXQIQUZFCPUEQMMIMESLLADPBBRQMGHXGSFOIJ");
    tmp_msg_0.description.assign("LPAQVKEPBPPJBFVGIVWOBOXEIZQFZTCOTEIGXRJKXNCEIGYGLHIWVHBGWLXATKZHOH");
    tmp_msg_0.vnamespace.assign("WIYTHZNZFTLBZFRESVVJUNAKBOGTQQNNIDSZEXREOBZCNOTVGFPJDVLUTWMHAVWBUKSJPMFJQKRFOMCVSHGFCPWCAPSEZXAUOIPVAITFSBMDWWNAUZQAGQZTREMMPMRIKOMHPIRYVLPGNJYXOLICFQRKEJDBCLDMDFYAZKJYUXKBHWLCXRENQYGQNUBLTLOSGCUUHXCTJHWEBSTVIQLSFQEHAC");
    tmp_msg_0.start_man_id.assign("TLHTRJZAYYEGMFYTOQIHDECCQOPOFEVTDVATWSBKWXGYZXQRQJURTUYRRMWBZRJPUMSMDVNUCAHARITUEVKBSMWEMQCNEDJAKUMAVXKEDGJVSHB");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("GLZOHZNUSQGCXKDRRBPSYPTKNVRCBUCZMOYAXWDSNJHERFWWVOWQEDRBOXWULPWDJMGTSAAYLYXVHXBPLVHZ");
    IMC::Alignment tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 38573U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.317459399681;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.391032996866;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.253980327517;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 208U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("MBKLLWKAYVCQFCLGCORYMOCOTXMSMDJNIXXGDTADKEWESVZHZSHUDVHVNUTGEZKOSPYSJUKBPBBMKYAVTHZACTDCQQCHWBRGEXJLUSKVLQEAQO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::GpsFixRtk tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.validity = 48101U;
    tmp_tmp_tmp_msg_0_0_1.type = 9U;
    tmp_tmp_tmp_msg_0_0_1.tow = 3215890233U;
    tmp_tmp_tmp_msg_0_0_1.base_lat = 0.780167318166;
    tmp_tmp_tmp_msg_0_0_1.base_lon = 0.520000214434;
    tmp_tmp_tmp_msg_0_0_1.base_height = 0.286408449889;
    tmp_tmp_tmp_msg_0_0_1.n = 0.219562164281;
    tmp_tmp_tmp_msg_0_0_1.e = 0.0641751728343;
    tmp_tmp_tmp_msg_0_0_1.d = 0.979496955001;
    tmp_tmp_tmp_msg_0_0_1.v_n = 0.669073611739;
    tmp_tmp_tmp_msg_0_0_1.v_e = 0.60795106447;
    tmp_tmp_tmp_msg_0_0_1.v_d = 0.77319736014;
    tmp_tmp_tmp_msg_0_0_1.satellites = 107U;
    tmp_tmp_tmp_msg_0_0_1.iar_hyp = 650U;
    tmp_tmp_tmp_msg_0_0_1.iar_ratio = 0.0112866038521;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::Redox tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.value = 0.959062519012;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::DesiredVerticalRate tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.518695395143;
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
    msg.setTimeStamp(0.601218782657);
    msg.setSource(30518U);
    msg.setSourceEntity(36U);
    msg.setDestination(34684U);
    msg.setDestinationEntity(200U);
    msg.command = 237U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UCIXGZLCZCXJYONNPWNMQZWSCSNOIQBIIGJKLWCTQVHMESWMPGORYUYNFBLXMNFTSPERUNWETYU");
    tmp_msg_0.description.assign("LFODTPHWWDLCGMUMPXLXENOWFNCLFFFRSCTBZOGNJSLEAUKZIOAOULPXVZXCQHYBXMRVJQTNDKPTTBWWPYBODYEWKZGXLKPOJGYWJCJAYIVVBVMBVFUQAWGKHQRLYXYMPIHKSIFQQWDAGUGUPQBFHEXZKSKAISPNXRJILRNCEZDIAPVVOSYNMTUOJJKUGZCQTMRBZRMQWIFXZTCHJBZAEIMELTRNNFNSAYAYUOD");
    tmp_msg_0.vnamespace.assign("INKXWDHJDEHMAPRZGORZEHTVXCISTNIIYJEAFCLCDZKGLOJWGPUIDNWAMIXIBEGZTGFRNFHLKKHZNYHWTNVEJLZGYCLBBWMUXSWOAUTQJEQZLFODWKCRFVJGLYYQBRPUYEAMKNVHZCOPSBCNUAKUKUOBAHETYPEMUJQGQRPMBQZSFGFDNVZJDRFPCDJSHHMIRTC");
    tmp_msg_0.start_man_id.assign("DFHNDBYCUFCPZBGKYBMEVOFNEXLAYZRKQKERHDLBTYGINJZJRR");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("SUMEFRPFRNJFIUNRPLNLMXVDFFTEFI");
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 21592U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.0311847082946;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.725095523892;
    tmp_tmp_tmp_msg_0_0_0.z = 0.267301974792;
    tmp_tmp_tmp_msg_0_0_0.z_units = 155U;
    tmp_tmp_tmp_msg_0_0_0.duration = 27760U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.548992701857;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 211U;
    tmp_tmp_tmp_msg_0_0_0.type = 145U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.401093852816;
    tmp_tmp_tmp_msg_0_0_0.length = 0.887925827571;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.259926277337;
    tmp_tmp_tmp_msg_0_0_0.direction = 55U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("UUQXWGVQVDFJWITNWHEZVOSIPGLEZIHMZUHPALHYZBIWMFUGPPFZQYYHKNWTJVRAHUXNPEWQVBVRNXWYTECJUQKETMCNTXYLNZHOAMLBGNDKLORXFJTPTDILFYCFTDLIPOCTSVRISOOSJADAMYJROZVKPTSECSQKRUOZJJGLNIBRNCGGYDSMGJQSVGHLXVARCUFOPQEYDF");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("TNDLTRKMLXYKWHPWWDBVGRDAFOLSKAWDVUVQBKBMIQGQBTSEVSIURCFYGTAYXPPEZXRCUQIVJLFWXPLHIOESLYOXFEUFBQZMJGYJHTJVIQCICGRZDJWBUNTJRUEMOVTNTUYFIRPNJTDUXPILNKDGSJPCWQRWHYMMKENCNUOAAHSCHRULEMEKZQBWOZCEJPDTOOHISSHDAGCOXXZAGIKZKLDMBQAPVMFRZNSXNGAFCQSBG");
    tmp_tmp_msg_0_1.dest_man.assign("SRKKPYECHLUSOFNLYGWXQXCAFOHWISHCZEGPAXGKLVXT");
    tmp_tmp_msg_0_1.conditions.assign("UFXRAUIYADWKTGOWTKOTRLDGUMICUPTFEQISQYHOGKMTBITYKXGFHKJWCWECDYIKMPMRJT");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::ControlLoops tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.enable = 2U;
    tmp_tmp_msg_0_2.mask = 4193946632U;
    tmp_tmp_msg_0_2.scope_ref = 3784995931U;
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
    msg.setTimeStamp(0.393440926147);
    msg.setSource(34645U);
    msg.setSourceEntity(221U);
    msg.setDestination(39319U);
    msg.setDestinationEntity(86U);
    msg.command = 213U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GSDMTURGIQOYPJPCGZCAVFYXVJS");
    tmp_msg_0.description.assign("IYOSVFZWRNCISFVCFJNQGXFQSBPZEYVCAXBJKBCNJYWSILXERIQHJYIDECCJQWDPSYVSZOWZHZIYEMRYDCVIOZEUNCMFNQTLMFPJQCHULVMBGRATLKGYII");
    tmp_msg_0.vnamespace.assign("RAECYKHQSMELAXWQMKWMADUGSGYLY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NHUGWEHBTPJHWUOGQFYQUUPPDDENSOJKFSCRXVRNXYIPKRVYGFOVLQMQESCIAHOLLYOZCCLOMEXZZPYTZDNNSRUTMYBUPSVDFCFLVFPVLIEOMTFOUIXTZEGPGDCSGOM");
    tmp_tmp_msg_0_0.value.assign("CXYMATLUFCKJRETAMATRDUEWGWDGQGYTANIHJKOQADWSZBXRJFHHQNINJGXWYOQXZWTCDFSBRBFLIVUUYUXZONKNOJIMPDXYTIEBBPNHKIDXOCGSBQMRTVSZVFQBCCEBVHIKRYQWSYBNLYUHKHSOQFFWLXUPKMZOZLACOEZASFULVCXPTTBWGIVIRLYWGPHELLVKMJCSRIEAMDVKHNXDMVPHZLAMEDPFWTRJPSUMZOEVQNFUC");
    tmp_tmp_msg_0_0.type = 192U;
    tmp_tmp_msg_0_0.access = 65U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RULRYWHXAFTBRIGYOQQMTZCYQMDVOJVMQAEVEEOAGYOEPNIINFBWDHKQUDWPVMZJLGFSAEHUMJMXOAWZFTOPTHCBSUIOJRFGCLQPTPTSRBVXBIWSCUYHWMABEJTVDFHRHDZQTLKLMWNIXJXXKSKFPUNNYGWZCIZUCCCAHLORNGEJJPNGWNTIVUCZYSMSDGBXAJVQDFLUKBLARKQEOVJRFZIMLILGYSDEZXKDGBKWFOVKNSUXAHKT");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("WXRHFUJZIBVAFCDFACBRQHJTQXAGCEFPBESLYAIDWIHAZNHMRIGODELWYWEJXOEB");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 7417U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("CSFTQGRJZXHLQDQOKIMRAQJATDZWIBFCTZOFEJUUZYXUWIKLYWJJHYHWXROBIZJQHNZMFAJPLPPWMLIRODNBSPXXCWRFYMETCNLYGYEDNUUNEPICZFEWDPFXCMSQKENKGJXDXGQNUELBQBONDMBVOQQVPVUHPUITFCTYKWYTXCKTOISNHASLSJUPRMDVSEV");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("OICEOHCWXBCNPWVVSNOCRVWEUIKVBPHCCNVTYKYNEFZDTSBGZVWZTXCZXWDUKHPTKBKMGEJEPZAADOSWKEDXWZTKMAJGGREOFSVHB");
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
    msg.setTimeStamp(0.910365892652);
    msg.setSource(35745U);
    msg.setSourceEntity(9U);
    msg.setDestination(18585U);
    msg.setDestinationEntity(135U);
    msg.state = 59U;
    msg.plan_id.assign("KQEMUPWSANZKIFWEBWLUSUVTPYCBRKTHWJZHZOODIVJCYLREORVDOZMKQESYANPGQRQHGCAFVNRBTXCORABSNJGSLNIPUOWJHXYRMIBVBYDXLRFEXDTGABZADMEZLNFKOLVFIIKOMCWFFUUAUVTNMMKXEMXYNIDPJCYVPDECTLSKTCIHPSIVIBFXW");
    msg.comm_level = 235U;

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
    msg.setTimeStamp(0.143276344752);
    msg.setSource(60332U);
    msg.setSourceEntity(87U);
    msg.setDestination(33646U);
    msg.setDestinationEntity(30U);
    msg.state = 191U;
    msg.plan_id.assign("BDJFMXZZTZROSWKKXFGBQIELMDCAII");
    msg.comm_level = 87U;

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
    msg.setTimeStamp(0.94683140574);
    msg.setSource(12681U);
    msg.setSourceEntity(136U);
    msg.setDestination(13111U);
    msg.setDestinationEntity(134U);
    msg.state = 48U;
    msg.plan_id.assign("PXQTKCMEBYJKW");
    msg.comm_level = 62U;

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
    msg.setTimeStamp(0.773177935522);
    msg.setSource(20581U);
    msg.setSourceEntity(194U);
    msg.setDestination(5154U);
    msg.setDestinationEntity(94U);
    msg.type = 181U;
    msg.op = 152U;
    msg.request_id = 19250U;
    msg.plan_id.assign("CYSAMQBAQGVXPNYSTVRWPVRANCYSDHGUCMTPVSYGNYOTGVJZTPOPDJSRCKCPLUTWFBLWQLUFNUWQDDNYKDOSIEBBCEZJNEZJLFPF");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.319459109738;
    tmp_msg_0.lon = 0.829216789314;
    tmp_msg_0.z = 0.123852619785;
    tmp_msg_0.z_units = 64U;
    tmp_msg_0.radius = 0.37941223462;
    tmp_msg_0.duration = 48535U;
    tmp_msg_0.speed = 0.682741049175;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.popup_period = 3581U;
    tmp_msg_0.popup_duration = 29955U;
    tmp_msg_0.flags = 119U;
    tmp_msg_0.custom.assign("CATHOAIXPHZDYJDMSIMAWGODLCHBYUWPVNLJEQAOSXKNEMZYRAUXHTMTNLZNLQPPHHUEBMXHUWKWIRBONZNSRBQEJUGJFJRQQVFFVTAHPJFHMNFVGMKZFRQEMCVJRGXXYCIITAUSLKQIE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GZODCNILTHNPXLGAXSHTJDRBGXFZSVSDNXXUURCDFUCZPMCIVQELGHLRKDJFHAEWRQKWNWGJQSNYWYTWUWEIUVZFAZUWSGRBLLIPALHKQPAONYIXVSFHJQFFYCLMTVEEBMPZZJCSBAPDCQZMJBFOIIKGROPWDJGFVJBYVSAKRLNEHEQECTOYMRDKQPHAOUKCQTOHNQHJWROZZBKEXMVIXAPGILAMVPUBBYYJMOXTUTVTYNNDUKSXY");

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
    msg.setTimeStamp(0.26045276037);
    msg.setSource(14918U);
    msg.setSourceEntity(196U);
    msg.setDestination(8682U);
    msg.setDestinationEntity(228U);
    msg.type = 229U;
    msg.op = 154U;
    msg.request_id = 14698U;
    msg.plan_id.assign("FWLIFNZCWEEORZDKSRYQABWHFCCQEHBJNTNCDELKSKGNNXKSQWAFDVTQYPRHXMAVHLLCXLWNXZUREQLYJUJACGGKTZQYDDHKMUGIUGGPLBMBEVBTYOPVOHCV");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.54089441265;
    tmp_msg_0.converg = 0.0682754280704;
    tmp_msg_0.turbulence = 0.619150510384;
    tmp_msg_0.possimmon = 248U;
    tmp_msg_0.commmon = 122U;
    tmp_msg_0.convergmon = 66U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MWVSAIXYYXNXIHFVGCSZFUJOLFDKZTYIIYIFBIMQGVXYEGLAEORRKVKZOHXHKLQFXSTUXHKDCSLUQSVPROMWEWQDUJMULRMSPNXNUCTM");

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
    msg.setTimeStamp(0.339912828705);
    msg.setSource(49556U);
    msg.setSourceEntity(105U);
    msg.setDestination(37618U);
    msg.setDestinationEntity(241U);
    msg.type = 32U;
    msg.op = 74U;
    msg.request_id = 17921U;
    msg.plan_id.assign("TGLCCRTWNLSWTXSDCDYDKOIMBAXGZWUBQSAPGVQGZXLDWEFVZPESZVHSIMEXXIVBRKAECYJZDURJQYULTKVVIIPDGEJNLLEYXFZQBONC");
    IMC::AcousticSystemsQuery tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XJYBFSPWHZDZOEXEWGKAHOYMMLVAQSCNOUFJVAZGDUSRVGEYCCVLYIHXQUFCMORTLCDXLXSTMEEDYNACKWRNYHIVBNWYIQFSBRBAKXZNCSPCRYBQTIGQNXGFZXOGIWKKPPTHLTJUBIIZPAALQBHS");

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
    msg.setTimeStamp(0.23224526419);
    msg.setSource(56251U);
    msg.setSourceEntity(87U);
    msg.setDestination(58664U);
    msg.setDestinationEntity(46U);
    msg.plan_count = 49933U;
    msg.plan_size = 1750447172U;
    msg.change_time = 0.604345017541;
    msg.change_sid = 41001U;
    msg.change_sname.assign("YIFTNZPHFTQNVFBSAASNXFKOHPFUEFIYGEIDIIQSYILXHGTKJDZCFJYWRRKQOFYENSVVWXUFLXPQWHCYPTDSDWLURHLCOEECZKKZJBEBEAJNHCYCMNJQEVBVNRGJAPXJEZFPWMTRGGCVGUSASBBIQAWMXXLTSYYMINTKDBLUZTMGGOZVMZO");
    const char tmp_msg_0[] = {-51, 2, -12, -123, -78, 3, -30, -87, 57, -53, -57, 106, -104, -116, 18, -41, -110, -59, -57, 58, -51, 106, 91, 111, -33, -55, 16, -38, 7, 40, 79, -91, -2, 109, 70, -114, 16, -113, 69, -121, 60, -106, -86, 103, -47, -69, -4, -99, 38, -78, 80, 60, -74, -106, -53, 125, -14, -50, -5, -87, -19, 34, 82, 59, 47, -38, 78, -84, 2, -77, 88, -125, -19, 28, -87, 35, 22, 35, -65, 32, 113, 80, 72, -104, -47, -53, 65, 44, 100, -105, 70, -108, -80, 5, 108, 48, 104, 16, 55, -37, -2, 14, 80, -112, -48, 93, 46, 126, -76, 123, -25, 117, -54, -46, -62, -99, -94, 87, -38, -63, -84, -105, 25, 73, 9, -38, -46, 42, 81, -84, -119, -104, 22, -119, -32, 76, 105, -31, -63, -12, -114, -80, -23, -86, -84, 68, 51, -112, 68, 125, -20, 114, -84, -93, 36, -2, -13, 59, -49, 123, -70, -21, -54, -61, 31, -38, -68, -13, -9, -92, -42, 91};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FHYPZXBIFQJHAEOSYTTELANWOZKMLZGFPGDODXZNROCGEUVSTQDSOWUHUIMRSLSDQYURCGMBDAQPXEIZMQUDNOLUJWNWZZUIJUYTJGUCMQWRTGXQBAJLQRFTMXVEFGAASHCTEKVIJWYNHZWGRNHSWRLMJMVIMUPCKXSXZSSBVXNROBKGDNCYIFBGWBBOEIFXJNHQKNYCIPZKPVJHFLROKTPOYYAEACKAIVJQEBH");
    tmp_msg_1.plan_size = 47000U;
    tmp_msg_1.change_time = 0.930480179053;
    tmp_msg_1.change_sid = 27085U;
    tmp_msg_1.change_sname.assign("IIVINETASQHABXMWQCSPVOUFOPRCVGYGYZHRJJUJJUCYMRMHEARBIFXFYARXCOKOLJMOGUXVJRPNBZHMBGOXOCPSQGTPKYNTSZSEGMESDIEOOBDZOJHAVWKTTCKMDEMMEDEJMRLWHINW");
    const char tmp_tmp_msg_1_0[] = {46, -68, -121, -10, 21, 115, -38, 112, 90, -91, 85, 14, 68, -58, 19, 125, -14, 37, -56, -47, 74, -28, 12, -53, -50, -61, -78, -39, 83, -51, -61, -36, 68, -87, 75, 17, -100, -17, 125, -92, 34, 36, -54, -14, 61, 94, 20, 50, -71, -42, 16, -32, -29, -85, -62, 78, 69, -30, 74, 114, -31, -65, -104, -51, -62, 59, 24, 50, -46, -80, -50, 12, -54, -41, 50, -4, 53, -128, 123, -74, 5, 33, -83, -80, 86, -56, 21, 109, -93, 110, -94, -18, -119, 45, -120, 46, 54, -69, 39, -125, -70, 75, 20, 106, -4, 98, -95, 38, 64, 29, 122, -11, 33, -16, -115, -87, 110, -39, -75, 70, 35, 100, -10, -81, -52, -114, 99, 69, -72, -9, 47, 84, -21, 1, 65, -95, -9, -87, 96, -63, 99, 101, 47, 4, 37, 58};
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
    msg.setTimeStamp(0.312053743273);
    msg.setSource(37010U);
    msg.setSourceEntity(19U);
    msg.setDestination(37103U);
    msg.setDestinationEntity(159U);
    msg.plan_count = 10920U;
    msg.plan_size = 4171822691U;
    msg.change_time = 0.458988051262;
    msg.change_sid = 60867U;
    msg.change_sname.assign("NMDYRGRDETSKTLNA");
    const char tmp_msg_0[] = {55, -128, -126, -76, -69, 102, 35, -17, -25, 12, -33, -52, 22, 42, -53, -108, 117, -2, 123, -6, 27, 80, -16, -102, 23, 19, -102, -103, -71, 25, 101, -45, 90, -7, 121, 87, -26, -94, 22, -10, 94, 18, -124, -102, 51, 103, 64, 122, 76, 123, 58, -59, -127, -12, 80, -82, 44, -104, 81, 67, 62, -109, -3, -54, -116, -80, 38, 107, 16, 111, -123, 91, 31, 77, 126, -106, 75, -108, 37, 32, 20, 31, -31, 35, 69, -94, -114, 75, -79, 42, 107, -100, -40, 122, -90, 58, -47, -2, 58, 75, -9, 102, 20, -30, -69, -123, 70, 104, -46, 43, -3, 54, -107};
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
    msg.setTimeStamp(0.293729217259);
    msg.setSource(15309U);
    msg.setSourceEntity(177U);
    msg.setDestination(23638U);
    msg.setDestinationEntity(35U);
    msg.plan_count = 14705U;
    msg.plan_size = 1899613506U;
    msg.change_time = 0.32345612021;
    msg.change_sid = 46528U;
    msg.change_sname.assign("EURCBKYQJPG");
    const char tmp_msg_0[] = {102, 4, 91, -94, -20, -2, 80, 112, -14, 76, -114, -126, 67, 18, -128, -16, 100, -121, 96, 87, -79, -113, 35, -54, 25, -45, -107, 6, 72, 31, 64, 100, 63, 1, -119, 90, -93, -79, 80, 23, -70, -1, 53, -58, -96, -10, -86, 78, 68, -38, 117, -35, -6, -114, 0, -26, -89, -123, -68, -23, -34, -56, -59, -41, -27, 34, 1, 77, 42, -95, 2, 125, 7, 29, 54, 79, -96, 57, -121, 106, -18, -63, -105, 70, -45, 76, 103, 38, -111, -94, -77, 91, -40, 19, 7, -116, 17, 100, 28};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VNEGTMJBSGJKNCAYGAKLLAODETQHBPJBDLPKQHXPLSMDYAHUMXXZKDAKJRNXMXNUZOYPFODGCYWEKZMZYSIHKUNBYIUEREHJOLNQGWCTCCEUFQCLVGZLPWVDSMQDXDBTJAYMDGORSRXPPBGWOHSZDWIVCVBMRFQWWVVFQIOJILNPXMJMSOFNUFQLRLZXOIPAUTUERRBFIHH");
    tmp_msg_1.plan_size = 54657U;
    tmp_msg_1.change_time = 0.995846366935;
    tmp_msg_1.change_sid = 54210U;
    tmp_msg_1.change_sname.assign("AKLPDNNHDGYJOMCFWFDOBVIISJPUDRZABGHYYLDNLWJULVXNKBTTVFXWSUULMONJRYWZIOHWGOFIUAHXMZXJLVFBXQEHQAVAGJZTKIWMOSSVREGUSPYAQUGEQUPIMQWEEWXSYWRHLMYLOEAHZFGQAVQRIBRIQHJZRVSXAYCJOKETXM");
    const char tmp_tmp_msg_1_0[] = {43, 46, 49, 42, 13, -64, -79, -87, -16, 26, -51, 84, -124, 126, -49, -96, 76, 89, -8, 76, -118, 8, -106, -76, -112, -53, -90, -75, -23, -24, 49, 86, -127, -51, 119, 49, 54, 52, 53, 84, 17, -10, 18, -32, -40, 63, -107, -23, -65, 96, -101, 75, 33, 29, 41, -95, 125, 62, -104, 38, 61, -57, -34, -64, 63, -84, 95, 80, 90, 53, -20, 85, -16, 40, 8, -117, 112, 64, 95, -68, 49, -98, -2, -101, 12, -22, 106, 79, -5, -86, -24, 88};
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
    msg.setTimeStamp(0.777341130698);
    msg.setSource(20711U);
    msg.setSourceEntity(245U);
    msg.setDestination(17696U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("NWVRKDEQAHXLVBZZHXRPMEZEIRXWSKPUJAXSXFTGJBLAMYAIMVCRMNOHSNOPVAVDALNEQIFSPARAYPYRUDVJTRYJTIK");
    msg.plan_size = 58723U;
    msg.change_time = 0.563370204149;
    msg.change_sid = 4491U;
    msg.change_sname.assign("VJHDBOCAMSFGLZULBLWBEFTKKNKAIDOUHNXPNBWSDIBIWTOFOJJXLKVRJUXLOIIRZJVZTXVPKPQPDENNGWMXWUHMAOMBWPGGVCODHTHNEWKRNGUHSIPMQXITFGQRQYYEZRMTMHKJSYNLEGEBVFKBFDLZXPFJCEEYYKJACHCZKIALDGYVSHBGATYOXEXQT");
    const char tmp_msg_0[] = {-71, -17, -53, 114, -55, -58, -3, -61, -123, -40, 31, 77, -75, -10, -8, 27, -117, 62, 0, 27, 55, 119, -73, -100, -128, -13, 119, 86, -58, -44, 12, -27, -69, 80, -37, 11, 49, -121, 23, -121, 101, 97, -115, -2, 118, -117, 50, -27, 34, -52, 86, 68, 4, 38, -127, 80, -49, 6, -119, -87, 113, -117, -106, 74, -125, 94, 114, 69, 25, -104, 11, 14, -72, 27, -44, -117, 35, -91, -96, -56, -59, -12, 66, 0, -113, -25, 10, -73, -7, 83, -9, 45, -116, 34, 108, 111, 44, -55, 116, -65, -79, -36, -39, -75, 74, -10, -111, 114, 60, 119, 12, -127, -16, 63, 6, 6, -123, 9, -115, -91, 121, 110, -46, 26, -99, 7, -10, 73, 44, 77, -94, 101, 95, -84, -32, -59, -72, -37, -107, 79, 28, 35, -61, 61, -42, -75, -127, -18, -3, 39, -33, -80, -73, 21, -67, 83, 104, -123, -98, 91, 94, -39, 42, 69, -48, 28, -100, 29, -101, 51, -83, -53, 1, 84, 17, -97, -128, -61, -124, -92, -9, 63, -119, 63, 5, -102};
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
    msg.setTimeStamp(0.630256110286);
    msg.setSource(59204U);
    msg.setSourceEntity(145U);
    msg.setDestination(26272U);
    msg.setDestinationEntity(14U);
    msg.plan_id.assign("QCBLOVKSWGZTUPBOVTNETCFCIG");
    msg.plan_size = 47923U;
    msg.change_time = 0.200289994235;
    msg.change_sid = 24450U;
    msg.change_sname.assign("BYEHQZUHCDECKYRPVJXKODWGSFHLITHJPLZIAIZMWAIQNYHVVQPYSQWVNWKXJJBRRZUWTOSUKJAOXCHVQFGYRGJKUBWNLXKZWGNUAICTOBEBMRGDUNGPAMYTRJBFOSCQEELVCEPBPXIRWOSQTJVWURNOXYEVWZKZXXIFSGHFQFSCMDAOZKLYTDQFBRDHCMHMRLPSNIKIALFJXNPPBNTUSUQLZTFOMD");
    const char tmp_msg_0[] = {-78, -33, -86, -61, -13, -36, 9, -119, -26, -87, -50, -91, -48, -46, 9, -106, -55, -4, -45, -32, -60, 72, -42, 73, 34, -113, 109, 41, 30, 22, -72, 25, -30, 48, -89, 77, -93, 20, 40, 95, 55};
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
    msg.setTimeStamp(0.47859421542);
    msg.setSource(36059U);
    msg.setSourceEntity(234U);
    msg.setDestination(18348U);
    msg.setDestinationEntity(122U);
    msg.plan_id.assign("KBXANMDDTYVKGLXAPLSWSGAFJGRFBHLYNJKKCSKZUJBSBKMJZG");
    msg.plan_size = 39614U;
    msg.change_time = 0.427846909392;
    msg.change_sid = 27411U;
    msg.change_sname.assign("LQPTWHGTPNODRSRXPMLGZKDCFSXYREJVGDVJJLKWQQUCFSZIFMAAGUOBCCOMDZKIAYQUDXJYOGYNRAPRGIBDHLAOCIKWOEWJCRVUGFDMIHNVQKFFEPKI");
    const char tmp_msg_0[] = {-11, 119, 55, -15, -82, -91, 11, 105, -87, -99, -115, -33, -23, -59, 71, 0, -28, -71, -71, 21, -99, 45, -31, 34, -20, -103, 74, 20, -36, -95, -34, 54, -115, 111, -94, -118, -15, -105, 79, -116, 51, -15, -21, 117, -67, 16, 121, -69, -78, 19, -103, -123, -49, 12, -33, -8, -43, -58, 13, -36, 39, -87, 79, 44, -76, -98, 3, 62, 73, 89, 21, 46, 24, 44, 16, -17, 18, -66, -44, 86, 37, -44, 19, 4, 30, -59, 46, -123, 10, 121, -81, 3, -27, 42, 90, -120, -7, -20, 35, 30, -21, -120, 23, -67, 115, 13, 23, -50, -55, 27, -70, -36, 22, -71, -84, -76, 106, -50, -45, 117, 4, 39, -19, 23, -62, -115, -10, -87, -58, -93, -127, 38, -58, 86, 39, 48, 98, 105, -56, 119, 44, -32, -112, -5, 71, -25, -13, 75, -72, 31, 123, -20, 37, 75, 1};
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
    msg.setTimeStamp(0.160472656764);
    msg.setSource(27641U);
    msg.setSourceEntity(21U);
    msg.setDestination(27266U);
    msg.setDestinationEntity(2U);
    msg.type = 86U;
    msg.op = 120U;
    msg.request_id = 37673U;
    msg.plan_id.assign("SPHRTXHEKUGUFBVWLAOMTAMLYRLLHYKZIHVXMYTJVTIXOPZKLOCWX");
    msg.flags = 37136U;
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("LOYGYNFSTEFQCVQNDKLJYFJGLMLTPEUZQSBGSTNPVRFEMXWDGWRTLWIJCXWQIVDVIRCHHYSWZPDESISOSJLKUMZIZXKKRVRZFWXPCAFIHCSTHRQAABXAYOPVMDTBDZJJRHFUPUBUNQTZFAXHBVMGUOOKVMJYHBDQLJLJCOLRBZDNWDIEIVK");
    tmp_msg_0.lbearing = 0.0895060431514;
    tmp_msg_0.lelevation = 0.200287871152;
    tmp_msg_0.bearing = 0.0392745347425;
    tmp_msg_0.elevation = 0.262642641716;
    tmp_msg_0.phi = 0.301324106134;
    tmp_msg_0.theta = 0.757175834271;
    tmp_msg_0.psi = 0.902091918933;
    tmp_msg_0.accuracy = 0.608798006283;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RKZHDONJIOLXTOEOZSEPPZGPXHGOYDQMHAQSISFMGVSVDQBAUSFJTKXPERWWBMDTNZLZTJYRCOQMIHXEKUVIJRBXGKCFKXJBALJWBHCCEDSKMGZEUWTWAUGFVNCLNBEQOXDRFEJLYYTRMLSTIWVPXUKARGPUK");

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
    msg.setTimeStamp(0.243561485111);
    msg.setSource(10951U);
    msg.setSourceEntity(21U);
    msg.setDestination(18580U);
    msg.setDestinationEntity(1U);
    msg.type = 87U;
    msg.op = 87U;
    msg.request_id = 21756U;
    msg.plan_id.assign("ISNQZAHNHXRVIPPWKPJWYHDWEMGVSXGDNCMIRUPTDODJBUXNYAYRFBKNUPCHAZSGXZSSQEYVZVKAEPXKMQBSTWTZSCPJMJCOZWJEYKMCYHLGDLLQBLNXVPHTUWUFICELYOEPQRXKDMBFNWQWUKMTATTVFZHDVXOGAKMIKFXDLKOCRLDUIGNIBUARAVHJZJQFLFRNW");
    msg.flags = 43029U;
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("UIVUPUOTOIFVPUAMDZJLMXNQXIAKSCJBYXEQZRZTEPWKKYIDSUDRQOMWYNQFWBFCUFHHGILKFAEHTZAVONFHCACCYYXTCOPYGNTBAQBFQDNFDIPDGZLNTSVHKG");
    tmp_msg_0.data.assign("ZUOWLUNNTPAYRLCSNYV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BUGZDBHKMVRZYGWOJSSHCKBIGNRIJTZJIUDIAOGSQP");

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
    msg.setTimeStamp(0.0846175595318);
    msg.setSource(26195U);
    msg.setSourceEntity(95U);
    msg.setDestination(39064U);
    msg.setDestinationEntity(16U);
    msg.type = 8U;
    msg.op = 7U;
    msg.request_id = 41259U;
    msg.plan_id.assign("PWFMOEGUWYQHRLW");
    msg.flags = 14856U;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 157U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("UPFCAYSKSLIHKHADEWZVLHXAHQSMBIJKXBNGINNBGZJTXSEAQNLNXMIJTMVBYNPZYDPFRTIMTXXDPECCZYXRCJYJGCCVCTMMSKSNURPEFHGGOFKRDODZSHVOLLJBRKCBGZCZAPUFJWILZJROFPSJLOGWDCKAHBVHUDLTDUQHYVYUPQTWYEFXP");
    tmp_tmp_msg_0_0.description.assign("XJMIFODMMBIYDNBWMCMMKFAEJ");
    tmp_tmp_msg_0_0.vnamespace.assign("JHKBCFQWJZRZIQXGEXICQRWNDOEXNHUMDGEIJUASHSYGFTVIRVHEBQFPTKZGJHGHQNVTYVLQNLOUMAHPYVFFDTOMTBYDXRQJSPXRCDZKCBJBKBCVLWHWQYGYUPOLPSUPWDZCPUMPCVTLFCAYNJNTDUQVMRL");
    tmp_tmp_msg_0_0.start_man_id.assign("GAZYEDAOBRGNZFHLEDNMN");
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZEDUQEAQHOVNVYDBHCJGKOVAOIETBDPSRYLXVJKBOGFOADVPDLREYJBLOGQMRLNTZGLBPNCIUIASPBYXUIBFAFBUVCOAAPRIWHEUDXHMKGWWZZIYROEKYCW");

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
    msg.setTimeStamp(0.508183472588);
    msg.setSource(30190U);
    msg.setSourceEntity(161U);
    msg.setDestination(16529U);
    msg.setDestinationEntity(69U);
    msg.state = 100U;
    msg.plan_id.assign("WORFYODOWLPWPQDRSBZZDIQMLUTJRSKPLWEOMBYYEHAZFKLZATUZQKDXAMUKOIYYNIXZCALSDBRPEOBEJUVXTVIYBCXRCNDYMKDVSTGGFXAWMGFQVLHVTJSSABJNBTJHXQTPAOYMVESHWCWSGIHSQVQFDNHUNFSRLWVPQK");
    msg.plan_eta = 1624963479;
    msg.plan_progress = 0.517514424246;
    msg.man_id.assign("XETTDMDIOHKVFUPYXNPGORKJLVEXXSKREJVKCKOFZLFKYALLEDCHJRHMTVKJSIEWWYSRAUZHGEMBIPRYJAOFPXHPVFWWJHCXZZSZARVWUEYQGVDMDOCTKAGQCRZRPNLDZCCBMAQPYNBZSKQPUTIJFURXLFGXLDBLEWSGDCSVBISWYHNQ");
    msg.man_type = 34543U;
    msg.man_eta = -693679258;
    msg.last_outcome = 177U;

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
    msg.setTimeStamp(0.510069553365);
    msg.setSource(13295U);
    msg.setSourceEntity(34U);
    msg.setDestination(41766U);
    msg.setDestinationEntity(68U);
    msg.state = 50U;
    msg.plan_id.assign("PAGYCJBBIPXJNFPASFFPALILORYVGEFWDAYBCOQIOOGLCODHNQPQEARNBPBWVZMBTVZHKZETSWKPDCYHTXKHUBHVYRUQZIIMIHXWUKLNZLPQXJUMBGMSKMKEAFUWAUKWKJOWELBTMNGFFLBDSDIZOCPJTRXWFCXGAKHJZMQVYRYAOIJZGNSYRCCUNTICQDHDJGMEJSXNCTUDKVLRFMVLJQLYWNDXFYDOWEEQEASTHSHUZPNOVS");
    msg.plan_eta = 651581692;
    msg.plan_progress = 0.204195983911;
    msg.man_id.assign("AWCIIUEBHANUATCQAGNVAYJTSBVZWLNESTIGAAQLOOEUZMFPWETKWWDBJJBPDCLRHRBNKRYVZFXXQXRAZTOHHFUEOZOHCVTMBQQPFHLDUYGNYYXTBFCCLZHZSDAWMLIIYFQJGNKOHCSKGKXBUMGOGWUESWDRYJOMTRUXIMSDUKJQMYRFQNVYGNESTRDEJZQVTPZOPOILJBGSXNZFPMILLANPFHCVVVIXWKMRPRGHQI");
    msg.man_type = 29536U;
    msg.man_eta = 428038170;
    msg.last_outcome = 176U;

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
    msg.setTimeStamp(0.477135044439);
    msg.setSource(6487U);
    msg.setSourceEntity(152U);
    msg.setDestination(61698U);
    msg.setDestinationEntity(145U);
    msg.state = 154U;
    msg.plan_id.assign("HGMGYCNZTHIYXPWEYLEBVEZLPQUTIZNJSOVSQKLLVAJXHYVINZROEVCQTSQZBSGUHDKMDCODNIELGOAKVQFFJTAMKAUHNFMZUIAABBHXEFUBCSEKLMZBVGQSLZFJJWCKWCPXRVACGWZYCSXYQUDNRABPJWMTNWRQEXRIJUSOTLDPDWDWYIMTBPRYIPOWUNMFNCOMHNKLDASGOXGSGRXROQHVYTKTXFVJDQTPDRHX");
    msg.plan_eta = 756501050;
    msg.plan_progress = 0.867522809091;
    msg.man_id.assign("KAKPFRYNYUJSFAULJKHFBCKADPXCQUXPATSMASRXSYZMQHPMWMICUBIQFUGSGRNEOHLVOYBTQYHTLQCCCBBGHTDBFSPICGCPBGLYVIVHIPWQJAJMJNUZDTLDIFEOGEIUMLBBZNGVMRNRMGDHMDETFYYTLGXJQBTUEJVRDXYXAOEJCHITC");
    msg.man_type = 40695U;
    msg.man_eta = 625109289;
    msg.last_outcome = 83U;

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
    msg.setTimeStamp(0.246003210825);
    msg.setSource(56432U);
    msg.setSourceEntity(56U);
    msg.setDestination(2961U);
    msg.setDestinationEntity(203U);
    msg.name.assign("VTNBKCJGHLFQQBGZOTEOQKNLYMECBEOXJFUYIPVBLDOSBVKPLERCDDBJZQGKYLOUNHLTORMFWLRFTBXNPPYKCDHESVPMYWSWGYHZDVJZVSSEWUESXFBFERKSWMYQVXEITIARPAVZJVTSXJNDPRKFMUMDUCZHZJCXZQBNXJMOQWZNQDNMGUKSRGIHIAAKJFUHNG");
    msg.value.assign("TJUAEFDRZDLEGHTVCRMZNJHVMDFGSABIGDIMHYOOKRKNLPBBNZAEKMMMMSKIUJSVNQMCAIBIBXRWQGYGVLCZTSLVTHZGIFEOBYQYJJQFWFLEQYFFMUBPOSJBXQPCDRPRTYPBLKVDOFNUJOATFKYGY");
    msg.type = 134U;
    msg.access = 21U;

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
    msg.setTimeStamp(0.575023228465);
    msg.setSource(48510U);
    msg.setSourceEntity(7U);
    msg.setDestination(16487U);
    msg.setDestinationEntity(239U);
    msg.name.assign("OPDIFWPSGDJOBEZOMBITDGANCQJAICLIKHECBRJYTAYZRLWIXLPQDQDZOAXHEVVNXNUWVPQNBDOPUNFCECVRVEWVSARZMVEDJOQHHJYMHZJRUMI");
    msg.value.assign("QMGKBFAPXSNTFCJWLAJIVTSWHNIUDLEEMUMQEWXSDNYKYURYNROWDNQSMARXGUDXZCVLJIZAYCQDFPTFZWUIDMKGKMVHKCJQRZVQLUXTJPCDKENPRDBGHFBRYSGAAOWPTYOXQVCNBIOZMCIUJWB");
    msg.type = 107U;
    msg.access = 214U;

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
    msg.setTimeStamp(0.523527140754);
    msg.setSource(18514U);
    msg.setSourceEntity(162U);
    msg.setDestination(2968U);
    msg.setDestinationEntity(2U);
    msg.name.assign("ZTXIQFNXSBMXKNAWKSUAEHFEHAQXVMLNHWCYIEC");
    msg.value.assign("SCBSSYCPPOIFKXBSWODDLIZYIGPXRMDZMGRAKORVYFWYJVKHDXZEQNMTXWGZPAHMEDTWKQLLWSAKFAKOBYQQEUCRPWZUJOUTIQHESNIGRSLUBIBAXGJJCUBIUNHNBHJV");
    msg.type = 159U;
    msg.access = 32U;

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
    msg.setTimeStamp(0.179374884534);
    msg.setSource(51438U);
    msg.setSourceEntity(46U);
    msg.setDestination(43984U);
    msg.setDestinationEntity(221U);
    msg.cmd = 223U;
    msg.op = 67U;
    msg.plan_id.assign("TMVJOQBIXFBDOSGHDMSSTTJYMXNYMZHIKRAQEGQAZYLIOTBFALGPEIVMQJNTTQUKNLUJCGRDKBPCSVZKYYURNZAMSNOFVZOQEHYLPBTQAATLLFDUPCCWOIHJJPRXJIXSXEGWUIHVIBNNWRKWGIHCTALYPANUF");
    msg.params.assign("KXCFMOFQZQQOFFVLFVVLDHCPXWVXZTMUIJZPZOTVELXEXSREUXNCXEUYNNMWVYDJFDSGBAEPAVDTCQBPTIYBKLJHOQAOBSPHNZWYYWNOGGUZIXSLSMSHIABDZUJZCNKRHCFBNDUIVWHLRYRPJYVETDGXKJGAEQFIIKSGWUSWRLAQINLKHJMTGKHRJDKVWIUWZCZOLCLMAOSFB");

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
    msg.setTimeStamp(0.537837316628);
    msg.setSource(52389U);
    msg.setSourceEntity(184U);
    msg.setDestination(13884U);
    msg.setDestinationEntity(163U);
    msg.cmd = 238U;
    msg.op = 204U;
    msg.plan_id.assign("RDALLGFPGOQGHDPNDOJWVDPCYVNMZGZANQDZQLLAOZWOZSDEGSILQORBEYKHMOKMIJAKCYLNMDPROJIIEXEQWVEPRUCBOSAWMQDUXNHOATAJVTYFSTCYFXVWFPXNFBNTQVHEUGTRCFOUIYBSMFJIGBCMBSWDNKTHNJVWXBRGXSTSMGRQT");
    msg.params.assign("SIOELNLXGISYJTICWJRSPLTDRZKZDVAVNPHEZIREYOE");

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
    msg.setTimeStamp(0.151497672831);
    msg.setSource(36944U);
    msg.setSourceEntity(207U);
    msg.setDestination(42745U);
    msg.setDestinationEntity(243U);
    msg.cmd = 190U;
    msg.op = 244U;
    msg.plan_id.assign("VOUTIYSWCXKADPNRFKZEQRYEQCSHNIHUYGZCIXSWGZDZOFFAATMKIBEWNQCHYBRJPIJVTFLDTDSBMZXMTUVGLOOIP");
    msg.params.assign("TJYZAHSCDVFKIMBYJAIWOIJGLVECWTQDWLFUQJCFUDQRHZQFGPXYSOXDEPDKEEKZQQYNUKIEXLTLMMXUDRLAWDURCMACRJNMUGATBEVCRZLEHZCRTZXORWVQVDSRNHHORHKNLEPJOSOFYHQOJSPGTWAVMLVNAUXIBKTYRIISDIPLUBUMABYZUFCMVIMXQXSWHKNYNXJAIGFPZBGFHKTOZYTXMTDGCWNPLKYOBS");

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
    msg.setTimeStamp(0.841032847876);
    msg.setSource(42481U);
    msg.setSourceEntity(247U);
    msg.setDestination(60455U);
    msg.setDestinationEntity(100U);
    msg.group_name.assign("IFVSEZRJIQOAIOFGCEELQERBAMKZTQVVVDXQMILCGXPTPYLLSOMRZORQICXFYVJKGSWFNEUPNMTMOFRRSDLSJSXFXIXJQEKTZMYCSMWGYCTTYNDQDXWFAABDBYDVKILKUJDZENXLFPLAOXPYHHHNZPTKQAUTUCFJIRGVHDGBHECQCZWSNHYVPIBWAPOBNBWAHBGNTUWTAUGBFKHNRSIGGEJCRJWUYSECZJUXKNUDWDHVZWJZBALMKOQYRP");
    msg.op = 7U;
    msg.lat = 0.0121761557851;
    msg.lon = 0.946370345703;
    msg.height = 0.616747430325;
    msg.x = 0.178781378648;
    msg.y = 0.13184799668;
    msg.z = 0.501785820206;
    msg.phi = 0.116744365402;
    msg.theta = 0.269319114075;
    msg.psi = 0.0972404315776;
    msg.vx = 0.795979052316;
    msg.vy = 0.481187085845;
    msg.vz = 0.0484855654488;
    msg.p = 0.0815305028314;
    msg.q = 0.497550413039;
    msg.r = 0.620454772639;
    msg.svx = 0.987377273664;
    msg.svy = 0.0752606642254;
    msg.svz = 0.669555588279;

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
    msg.setTimeStamp(0.879050341486);
    msg.setSource(19801U);
    msg.setSourceEntity(88U);
    msg.setDestination(1472U);
    msg.setDestinationEntity(110U);
    msg.group_name.assign("OLDWJLGJBJXWQBLRYTEEBWKBYVMKACZNTWEHWXSVFTQYBAVTIYUWAUBGJVGQEKHIBMGTRPYDMDIHHQFLMXZSKPUQXNPKAICNOWUPPVOTRUIQKMXQULPRPRNHKKJDOJBSRIRXZEOCSLPTWYHNMFRGVBEZOQEAPFZDCKUFJDYZHDIOTFGQDOOEGSLJAGIDSZNAVFHGMLGSCBJNFSRTAASNXCNCFHNMCMZQXXAYMDOIVSWVXWYPRUCK");
    msg.op = 20U;
    msg.lat = 0.419820302592;
    msg.lon = 0.371246436608;
    msg.height = 0.00208655909792;
    msg.x = 0.224827881498;
    msg.y = 0.883176154659;
    msg.z = 0.461490242885;
    msg.phi = 0.293053508422;
    msg.theta = 0.177990392612;
    msg.psi = 0.823471043984;
    msg.vx = 0.160602833264;
    msg.vy = 0.0631980027051;
    msg.vz = 0.892896963173;
    msg.p = 0.602777833172;
    msg.q = 0.212074930937;
    msg.r = 0.258540685969;
    msg.svx = 0.849819082871;
    msg.svy = 0.546730806286;
    msg.svz = 0.237271471971;

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
    msg.setTimeStamp(0.646729760522);
    msg.setSource(11895U);
    msg.setSourceEntity(159U);
    msg.setDestination(3170U);
    msg.setDestinationEntity(69U);
    msg.group_name.assign("CHIALPCRMHSKNNIADXDQMDAQAMKDMZIQGCZOPJUFGRWDEMGFJTRJEYLXHVLYXBLONUCBWSBREQKZCSCFVPWFTGBKNJTJWMUPHGJALQPYEVPCXJMEVGUGXSOLD");
    msg.op = 154U;
    msg.lat = 0.604759429412;
    msg.lon = 0.268695578693;
    msg.height = 0.502592757833;
    msg.x = 0.595771954678;
    msg.y = 0.650881705435;
    msg.z = 0.332670689554;
    msg.phi = 0.301599609999;
    msg.theta = 0.170037716883;
    msg.psi = 0.131271552951;
    msg.vx = 0.373199756515;
    msg.vy = 0.386101566329;
    msg.vz = 0.11249480546;
    msg.p = 0.00462010250941;
    msg.q = 0.349894892077;
    msg.r = 0.985593126894;
    msg.svx = 0.986713684746;
    msg.svy = 0.758782289619;
    msg.svz = 0.119846854731;

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
    msg.setTimeStamp(0.0828626065284);
    msg.setSource(25211U);
    msg.setSourceEntity(109U);
    msg.setDestination(38959U);
    msg.setDestinationEntity(203U);
    msg.plan_id.assign("OLLBZBAFZMLWFGONYAPYQFADGSDIVWRRFVXHKHVFMODZUUZRJHNYBAIGVJETC");
    msg.type = 221U;
    msg.properties = 181U;
    msg.durations.assign("UPMVYTWNDHHLIITDXSYKCMDCTGFBZSAQPNDKZVAWVPUSMTKRHOCHQMBGXYKNLYQPRJDPZKPYLIXRQDYLNEAIOFOJFZZGMHHKREHDSCEKPLOIBBFUYIRVJXMIZFDWKSJPPTNFSSTVUQTUWAKVCZDAGAYSOCOBXMAFLGKQWJGVDCTZJXCBVQWMCYXPHNJFVLRBWWAILWGEAMCONORWRFUG");
    msg.distances.assign("SMYUBTFQGSPNFVDPZRSJJAPXNMVIARJQUOJTRLIHKAGOHNRITKVLERIZOHLNSBNCCRFSBQDGZDJDLAPXCEYSMWQUHUCMKNBOAZWZWPHXXEVGFHJKATWEIPNKEKXYDWOAXFBEURSVMTFQVDKXWGNVQZCTGBTUSOOWPNDVUBFXAASHXGFBBCYRLIYQKOGLYGPFOQMCYYEKPCCZTMKIJYPWLLTZULMJVJLMYIBSDIAOFNQDUGH");
    msg.actions.assign("YLGIDXADUALIYPMXQQHYJYKNAMDDPICKTBZXIWLCUFCCPSSUFNDFBVEUZXTAERSJLFAWWESZROKXQHNQUHKBCFJNOMOSXDOZWZRMTFXIYCMJVNWOIGGBKUMUAEO");
    msg.fuel.assign("OZBUCPRZMBTREADEZJMBGHYXOFALLANHCDHVLMIJAOOZBNFWPYLKRZMEVYJJLMPIKSXAUXCESXXUYLHEHZWEQXYTQRQKUQPLDIYPVWULOGXPKOJKWVPMZNHTRNQCVFZARSAIJGFOUWMGUUVSSSBGNPAQXYOYFSURPFNXHJNMWBBIPTOAY");

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
    msg.setTimeStamp(0.681619668739);
    msg.setSource(21196U);
    msg.setSourceEntity(95U);
    msg.setDestination(64634U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("NWPBQTFQUYDGZWJVYXMWNINIPOEAWGTHVGKCJUYFEBCXRELAHCKLYNILMYAEQQSCRIQSPRMGKBJWEOAOFZLTRIWPTSVUUZCFEOCAHXVXYJPBHRXLRBAKZMVCMLAMJUTTXDSIYTSZDWSDKAXZPOIDFDJKNOPBNAXQYGFBSUGKVMBS");
    msg.type = 253U;
    msg.properties = 4U;
    msg.durations.assign("SUMUMLBIQSWYZMFKAMRUPSKYNNAIQXIULQRXQELVCPJHFFQZHPEZLZOXMRADLYZSGEV");
    msg.distances.assign("YEDEGWRTHKNERIKZJERLUZACMENCWPSUFDQDFMSQPEXHMJLRFIWCZKAYSBTBMODVGVZNQDQLMQCCJMUUOXCRIVOIHPQYIBGTGTWPBJYZSTHAYBFKYVMWYRPRFENGTNOZZXTVLXLWYMUNJEAHDIOPLKK");
    msg.actions.assign("WPPLTRNXSCFFJYAQJRLQXKUXEDANSCWZU");
    msg.fuel.assign("JJJXNRKZIZANFLRBKLXOFIZPCAOBHWTKDSYYTRYJXFQCP");

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
    msg.setTimeStamp(0.319634515253);
    msg.setSource(38846U);
    msg.setSourceEntity(127U);
    msg.setDestination(44357U);
    msg.setDestinationEntity(122U);
    msg.plan_id.assign("LOREJEQZFEDHZLKTOD");
    msg.type = 10U;
    msg.properties = 132U;
    msg.durations.assign("ZBIFGXUZPRJMUDMVITHAMKKEQYKTPTANOZWCOWAGOFHIQABHJWQCXFECTHEXCIDMCEYFMTIGBESTPQQHNURUDEBOLDNBLDZLDFDYRBDCOMAF");
    msg.distances.assign("HADSQCXCASLRDWZPQKEHJWNYYPAGSQWIMDNULIBZHOARMYOHTXRUYLGVWUOZKICTZGUCREIDVDFVCXPADKJUBMFRVWWUTPNHGNVEVTKHNPSLIYIUGFKCMEZRFBZADGNCSBLZLPLJTLLUNHMRZJYIQVMSJGHKAXWAOJARYPODEQLFIBXCNUZRNHMEOEVWXXBETQDNDQQZIXKKGI");
    msg.actions.assign("TKUEPBIFQZPJTAGVQJHQSXUYWODLTSEMMPWQNGXYIFXIVFIFYCNGQABKXYIKSCJPOHNYDMDXFEVOZKRBZQPDRHQTEUXVIMBCRLZRHDGWRMUSZGMEBZVJGLONWIJJSOLLRUTHAAPBNCAOYETUBBVAWQYFOAVGIMKSNNSELOGHIWAQDMHLKCWPYXFUD");
    msg.fuel.assign("HMOCIIQQXXBSUFKBLWPYOHTHQNXIJANXSXTAZCRTEMHJCFDKGAQBFUDRFPAKNUMVLHRIFKJELGGCVJAYIZBKWXZATOROAKLJLSTYNCYUZUSLSTEIOKQPPQABFJS");

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
    msg.setTimeStamp(0.478054682962);
    msg.setSource(30760U);
    msg.setSourceEntity(75U);
    msg.setDestination(37221U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.585109332519;
    msg.lon = 0.619541953888;
    msg.depth = 0.120671293473;
    msg.roll = 0.247584926036;
    msg.pitch = 0.603971275551;
    msg.yaw = 0.549566129401;
    msg.rcp_time = 0.158394033829;
    msg.sid.assign("TYEXLFTPRIXBVMPMXGCJKFJEHUPANUJIQ");
    msg.s_type = 222U;

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
    msg.setTimeStamp(0.289671833484);
    msg.setSource(36729U);
    msg.setSourceEntity(14U);
    msg.setDestination(39980U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.0554666627421;
    msg.lon = 0.178840248739;
    msg.depth = 0.0852188130135;
    msg.roll = 0.445264898604;
    msg.pitch = 0.269453770608;
    msg.yaw = 0.951118095852;
    msg.rcp_time = 0.578383814444;
    msg.sid.assign("QKAGUDHLZFWCRQRZEAYBJRYLZPRUTXNSZBXNIZQEYPQXIGSSWYPGBOQKZWHNEKJGXXBBZUSSWNKLVKJIHIFIJLOOHCKMGHNFADMGPRMNTCMTVCDJBVPQMSODDODTPKJAOXHMETEPVLCGWEYZMXNGTNIJUCRMQXVMWFTQLAFICDNVVWACMIUETOEFIQAPUPCXEVOUTWBXTSDAKEJGBOUJHVRUFODKYLFSILHLBSUHYH");
    msg.s_type = 251U;

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
    msg.setTimeStamp(0.901199973418);
    msg.setSource(28415U);
    msg.setSourceEntity(41U);
    msg.setDestination(33420U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.366934487343;
    msg.lon = 0.940483696413;
    msg.depth = 0.845241180634;
    msg.roll = 0.556056176857;
    msg.pitch = 0.524758573688;
    msg.yaw = 0.0531927358824;
    msg.rcp_time = 0.0629972339834;
    msg.sid.assign("CXESSUBTVYGJJXGFCJVLMLBNJEATCJACMHSXPRGQBTOBHSHOTJEVQMIUORIXNIUAXERFKCBGZJROOWATCO");
    msg.s_type = 28U;

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
    msg.setTimeStamp(0.678079440374);
    msg.setSource(44970U);
    msg.setSourceEntity(145U);
    msg.setDestination(14311U);
    msg.setDestinationEntity(160U);
    msg.id.assign("NDAKACEQOQHXUMFZTCHJP");
    msg.sensor_class.assign("BAUBKGRRWIEZQTQRESKMKKIZAXRPWAQFVWXCMBRITIJEAKNDQLEVHWSMMDNQOZUFBNJAFFVLDNDMCMKQOHBMUEFGJXWHYJYMZAJOXUQOIFWNTZRYCAYYEFVBXDJQNZHIZLPBRPSVCFWOLPCHGTGCAJSHVDSZQLLUUDKMXRFTIEOIGNNENTGKJPHYIBCVXGCYFWPXPOWMESSKKHGUPDOXSBVIEGLCVSYDNZRTALPXRWBHOVQUYCGOPYSLT");
    msg.lat = 0.933685506307;
    msg.lon = 0.118069680385;
    msg.alt = 0.423999782909;
    msg.heading = 0.887281621306;
    msg.data.assign("JZDORSBMQDDKVFLJPDVRPSCLRQAKFYKXPPGQDDBTABEEHGAGZQQARUAVYZHTPIEBNPRJNTTVGYWMZHSOCHIHOGKKXXIHLMJKTLVIXCMYEWQBVVXWYQTCXBQJUIUUFEFAMPSSWESLDFS");

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
    msg.setTimeStamp(0.903474640917);
    msg.setSource(43310U);
    msg.setSourceEntity(174U);
    msg.setDestination(62158U);
    msg.setDestinationEntity(76U);
    msg.id.assign("CGLZLGPMQBDCNHVYPHWLCFFSJDFUXQKFZMGLIWNGPAXMLSEKUVYOTNXLQZXQIUISHVMYNKJOMAXKLHSIRHAPEDJWLYCWRVZNGRITNUYRWHRJEEATDAMKWBBOJUDZGIAPOITRTXZCNZTOJOXWAFVTUVOFRYE");
    msg.sensor_class.assign("QSBMIPKKVZFRCRWVGAHIJHIJVEOOHIZKMMRXCYWPLUMTTSXJTFZNBNFXPSRTTIWLAGQVXZE");
    msg.lat = 0.778048976722;
    msg.lon = 0.100710091691;
    msg.alt = 0.100710411369;
    msg.heading = 0.408865823644;
    msg.data.assign("PYJOJAKUXTAQGQOBJUVTGCDEKFNWIQSRBWNYBGWHZGLWSVLOZMEIPRVBDQCICLRFFSHGYSNUOCDZQXBQFURDOQIRVESRJNUKZAKZXXMPDKZNVCKODHNTSIZQRMEBYBHAMZLAOIXDHXRJMRUXTBAQFPXGGPDWPTWEKVEKICMIFTBQFFYWZJSIYLTXACJEVOPMUGYGMKFLWYRDCNYAJOLEAEHNKBVXCHNUTMGUAOHCVJHTTZWVNSE");

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
    msg.setTimeStamp(0.623236679879);
    msg.setSource(37868U);
    msg.setSourceEntity(169U);
    msg.setDestination(32654U);
    msg.setDestinationEntity(203U);
    msg.id.assign("IGLVMPZACXOZAOPDNYVVMHVNOCEINEPOWLFFFCRGPWC");
    msg.sensor_class.assign("AJWHPKVTGKMBDERVGKLBWVXWPGETIPRFIOAZDNGYFMBTXKBLYRRXKLUSNOWFCGMFQDOHKIOZDYQIYJBKLVJNBFITUZZCWDXFCAZLVVYMXHGSWHOQODMBGPCBXOXFAUCTHEJPORLIZMPVNRDTGFUZABIMQNXWULCGHUXTUPXVRWMTBFKSYLHSARLRDPAJFCYEZMDYENVNSJJHMTDTYGHALQANRASQIEUQWSC");
    msg.lat = 0.356790241528;
    msg.lon = 0.729109092905;
    msg.alt = 0.847281556063;
    msg.heading = 0.550797771418;
    msg.data.assign("FAJEGWTWCCDJLWPLHDYPIBFHZLTQXLIPHRVAGYHDZPSXJJIDVIUJUNOXCHEUILSKMXWELZEYCWIPTJDGBDSNPFDUBMKQCMUFMAIIHFSZGRQUQYWQOLZQLFNHNCNPYZQMNSLIATGGRYKXZAVVUTYKQEZTYCKSKFMPJUKOQSEVFMZORVRXNWVMMYWGTFXBTERLBFDBCAJDSTBTRBBXGBEXJIJKQKNXD");

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
    msg.setTimeStamp(0.602840594371);
    msg.setSource(40943U);
    msg.setSourceEntity(50U);
    msg.setDestination(29580U);
    msg.setDestinationEntity(114U);
    msg.id.assign("SVJRAGHQHOTORRVZIUOSEXQPVSBKCGXTXKCDWBTVAHNQBGXSNAP");

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
    msg.setTimeStamp(0.624578290118);
    msg.setSource(48339U);
    msg.setSourceEntity(162U);
    msg.setDestination(34894U);
    msg.setDestinationEntity(82U);
    msg.id.assign("MREKNQZAUZHCBPRCUVOAOBONHRIIUXVCNIANGOIIAFEGJVEOYTMMQPVLAXOEHYDLNWKPYEFTZWXHNSSSSMJCIAEPGSDKJAMUSDBGCTATXAPNMGFZGCZAVMJGFGKLKQSXQHUJRDBYWSUWBDBJYNDCROOOXURKBYNKPBWXUXIRPXSCWFILEVWPRJYCMQZTVYJEHGXDDQFTCLQTKFWTE");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ZECVDFKIVLCFXGQKLNTRAFIQYBPVMWLQKICMVNOVBPJUYOWQMCTCTTSHRRKJPBUOPVPWADLLKGFNMSXZSHCNNJZEILGUYNBGTCDEOVBXVQVVFWURXWYAIHLBWECZYHMWBUMLQKOSYAWATFYAJSWJPGRCSIYDERBYZADXOXMJZHDTRDDRSKCZSADQJOAQGPNURJHPKGMPGIOILQGXZUGTXFQNBEKOOEFJNUUMFRZXITHWUYIHAZBHDSXEMFSELH");
    tmp_msg_0.feature_type = 173U;
    tmp_msg_0.rgb_red = 123U;
    tmp_msg_0.rgb_green = 253U;
    tmp_msg_0.rgb_blue = 121U;
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
    msg.setTimeStamp(0.631095938636);
    msg.setSource(13162U);
    msg.setSourceEntity(194U);
    msg.setDestination(41320U);
    msg.setDestinationEntity(22U);
    msg.id.assign("MTDPIIADMKYFIFEQHWTIFLMATKRJRJXUCBWNGJQEHYZRGAHOMTXCVDKBFAAORCBNAVFCQFPBUYYXEN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FBMQAOONCDFRSTQEDPGZSAQBXEVJNCCKRZ");
    tmp_msg_0.feature_type = 240U;
    tmp_msg_0.rgb_red = 6U;
    tmp_msg_0.rgb_green = 14U;
    tmp_msg_0.rgb_blue = 128U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.260909630391;
    tmp_tmp_msg_0_0.lon = 0.59815144237;
    tmp_tmp_msg_0_0.alt = 0.525434785579;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.12902016305);
    msg.setSource(36805U);
    msg.setSourceEntity(107U);
    msg.setDestination(9069U);
    msg.setDestinationEntity(121U);
    msg.id.assign("HUBIHNHSOIUEQSOBOVTAPNTUFVVWWMSLE");
    msg.feature_type = 197U;
    msg.rgb_red = 70U;
    msg.rgb_green = 124U;
    msg.rgb_blue = 87U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.964797550531;
    tmp_msg_0.lon = 0.864184622114;
    tmp_msg_0.alt = 0.329002435987;
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
    msg.setTimeStamp(0.328223063798);
    msg.setSource(42899U);
    msg.setSourceEntity(124U);
    msg.setDestination(32127U);
    msg.setDestinationEntity(155U);
    msg.id.assign("BJYHGOARQRSEGHFXYSVCOELLZIFAINXMBEZDPGMKJSMTGWNUKVQYUCZALOBTJAONDTPPOTGSISXVDPJS");
    msg.feature_type = 195U;
    msg.rgb_red = 164U;
    msg.rgb_green = 45U;
    msg.rgb_blue = 91U;

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
    msg.setTimeStamp(0.250250708056);
    msg.setSource(24239U);
    msg.setSourceEntity(81U);
    msg.setDestination(15909U);
    msg.setDestinationEntity(238U);
    msg.id.assign("WHHQMXSVCCQEAJWPABZKPBQSVUADSZDIJKFCCNXWHQBYEZHQGMHVYCQLKAXLJIKNBGZHJGEZGEPGSZIGDAFJPCFRZIHICSEUESMFHN");
    msg.feature_type = 245U;
    msg.rgb_red = 168U;
    msg.rgb_green = 216U;
    msg.rgb_blue = 127U;

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
    msg.setTimeStamp(0.900547838653);
    msg.setSource(38921U);
    msg.setSourceEntity(33U);
    msg.setDestination(4512U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.0285047402468;
    msg.lon = 0.725344899179;
    msg.alt = 0.358523281961;

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
    msg.setTimeStamp(0.146726720366);
    msg.setSource(41357U);
    msg.setSourceEntity(245U);
    msg.setDestination(32241U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.0237608059552;
    msg.lon = 0.21062440767;
    msg.alt = 0.270437591564;

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
    msg.setTimeStamp(0.82882360055);
    msg.setSource(32735U);
    msg.setSourceEntity(72U);
    msg.setDestination(15690U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.743411710532;
    msg.lon = 0.0438569774996;
    msg.alt = 0.316561401017;

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
    msg.setTimeStamp(0.836113243852);
    msg.setSource(34090U);
    msg.setSourceEntity(83U);
    msg.setDestination(35355U);
    msg.setDestinationEntity(0U);
    msg.type = 3U;
    msg.id.assign("WOVDQVKUVVUIJZILHOUIJKLUOPJCYXYCPJLZSEONQKUWEEHYWRRNFDCQSTQXFFNQDLBVDYHKDGGXNIATBEPTPCSKSLZIMISWBFPUOPBUOERANDKUCAFYYHAILGBFGTOMJWFDKGAFSZNRMPJUBMZXIHKGVSXCFKLGDLJMBBVGWCWNZRARHYZDQJBJDEOEHKWXQRNV");
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 42724U;
    tmp_msg_0.avg = 0.296240291857;
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
    msg.setTimeStamp(0.28129627207);
    msg.setSource(6377U);
    msg.setSourceEntity(3U);
    msg.setDestination(6888U);
    msg.setDestinationEntity(13U);
    msg.type = 172U;
    msg.id.assign("WMTHOQFSWVILIHUWTWRGBMMGZAHXTRGZISMJDCTFKBOXKYGGFLLFDKZMFONWYAOMXAFZQTZEDGCUSHZPFXGCQERNJJIBKLHLYANRXOOKECEQQLWPLSONTTNUEPMECJPCKHYPHSQIFYABXBMRWGAZTINFKRBVEYSJYIIPEPBYHDIKENJAPUWBTS");
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("NZRSHGHFWEWQLVKCNZSNPAQPCIDYZUJDOIKLBS");
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
    msg.setTimeStamp(0.69697880081);
    msg.setSource(50886U);
    msg.setSourceEntity(131U);
    msg.setDestination(19142U);
    msg.setDestinationEntity(223U);
    msg.type = 75U;
    msg.id.assign("HJKWRIOHHNQRGWLLDBSVZYFGPZRUHITUODTTXLUPXXVEKPYJUEAALTWROBQTUNGOCTCDGTFKZJUNSFYJBXYZADOXYIEMFCIAOQQWLKEREHYMSBKMBEZPNGHLVFBNHTIYUEGDFJTKQZREQIZLFCRDBETDOAMIUFFPOWVVJARCZDADSQWGPXCNQYMMMZMVWVIJSGHNKBVNXOXKXSOUXRZWIHP");
    IMC::AcousticMessage tmp_msg_0;
    IMC::AcousticSystems tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.list.assign("ELTMFNBNJWWXFZJJYHYLBRNWUIOFGSOYZNZEVUINDPUZTMDYTFVOPRCRQDHLGSGMVKZRACKRADASPACAUJAEMWMWLPDWTQTXMQRJRXPBEPGCQEFCVABNTFILAJHJGXTHHIOTSNCWEUGVDRHQYZFZZBMUJ");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.10721494926);
    msg.setSource(30021U);
    msg.setSourceEntity(206U);
    msg.setDestination(41803U);
    msg.setDestinationEntity(144U);
    msg.localname.assign("SWJNLTTGTGZCVAPELAQFOFVKPGAHSHYOYRAXYIMQZOMPFVMWNYQODXDUEXMMD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ITGOFKOMJBPXJDQDRGXDTKEDZLOVIGHBZGIIPKTECRJQBKJHTKSNTRBMKQGYHSDAPTSDTMPQIEYOMEVWAZQJUBEQFLXCCFEWQUYMOHAPWQVWPUJGKEELNBILZAVXSNCWCCSAFJVSNZLZPFJXOGWFRLSVILJHHVBXHTTNGVQZARFEKAHDMZQCBUYNKBIUUSYPNXSFHLASDO");
    tmp_msg_0.sys_type = 198U;
    tmp_msg_0.owner = 40609U;
    tmp_msg_0.lat = 0.478297712257;
    tmp_msg_0.lon = 0.0680530671479;
    tmp_msg_0.height = 0.222507739642;
    tmp_msg_0.services.assign("MXKHSLMSLMJFBWXFEAURXY");
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
    msg.setTimeStamp(0.665127446658);
    msg.setSource(39509U);
    msg.setSourceEntity(212U);
    msg.setDestination(26635U);
    msg.setDestinationEntity(14U);
    msg.localname.assign("EJSZRQOTCKAZOMMGIBEACIQTTMLFWUAEZAGAJDPGBSBJBKQZCPLFEQNBEARTAUUEHWGYZGLGMFRJIKGPSGHBUCEHBRMUOWKTKDODNWDXPFYSWORVPJEHWCXIIDOYHZWFCYDLVTNSNXILUOXGCXYRNQOTVJAKYINKPRSTXHVNMLGIMTDJZHNSKBFCXAHVKWRVFZVQFHPPDIQNUSERCCVBVYMQUUZ");

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
    msg.setTimeStamp(0.970370979131);
    msg.setSource(47625U);
    msg.setSourceEntity(125U);
    msg.setDestination(51117U);
    msg.setDestinationEntity(30U);
    msg.localname.assign("RIWUFBWXQTRHIUHNRFZOHKIAYHMNUGHYRESULBNMMSLVKKNMJJTJMAONYNAJYKOTN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FXARMQCDZHKZEFRRLMZYWGJMYNLHDSIVJCDNLNMSPBFBKYGUSGILQTLIKILGWZEJRTUDEUSAPGMJBAKTXDOSCUFTAPZNSEVAEAJWHHSXGVBKTCQHMLRGMYPRKCU");
    tmp_msg_0.sys_type = 16U;
    tmp_msg_0.owner = 8333U;
    tmp_msg_0.lat = 0.333249372971;
    tmp_msg_0.lon = 0.758423117439;
    tmp_msg_0.height = 0.243658017509;
    tmp_msg_0.services.assign("DPVPVSVCIAGIJNORTNEOMUUPLHZCUJWAXMYNQHNXSQBSOJFBVMCQDCEOOJEGKEDFKGKJARDLCRJSKGBVDUPOPQLSJYIWYVAVIKZCQLCZFUZNHEXXKUGITSTBWZSICRFUQAW");
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
    msg.setTimeStamp(0.417685667849);
    msg.setSource(1089U);
    msg.setSourceEntity(89U);
    msg.setDestination(37474U);
    msg.setDestinationEntity(249U);
    msg.timeline.assign("OFZLKPSYRILRNBMQEHDXLJPOWGBQBRZUGQYHGJFXSSRNIKVROCVFKIAAYGBQYGDQRMKSLCCHEZPUGYUMDJTMJDIPFLIMFWLKGCTVDUINFVJPMHANCNZKZXOUWOOQXHAYDOSUFIFREYKJISEUPNTBU");
    msg.predicate.assign("OKRTLSDBTOOYVKWTXPNVLQYJPARFFHNYMFQKTNGXZWUABYMLIFBWBFIVWHUXQNNKAEEJWJOCDRGFIHWACFMAMVHTYEZTJIZEYQOAUVZWJMUMYLDSSGMWREVEKUORQNSBUJZMDCBLHGEDJFTXVIHMDAHVGRAPERVZRCHHLIELOQCPXUYHYTKGKICSJCAFOKNRSSXVGKADWBZXGUQZQBPDDJLNIXPSPUQSL");
    msg.attributes.assign("NUJQYSBUKSMORHHCVJNCCXEYFXTGHCOSYUADXEHGYUVKBWVMGMWOXWLZRKBBFIQZUVHGEDQZGIHERWHLTDFKXXSDJTARNRYRPVNYTKDEQROZPDEPLIXTPLPOPTIZWAFJUIXQBHJKJOQLHJQZBANULACBYWFRFYAMOIZVHQGSLPLANWTDXDIEMFDKFVGKNMLXRZPIRSMSONKBVOGPZWCTJKYIFJNUCTWLAUUSVOCIBNQWBFQMJTGSSEAP");

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
    msg.setTimeStamp(0.120935889844);
    msg.setSource(59068U);
    msg.setSourceEntity(26U);
    msg.setDestination(30183U);
    msg.setDestinationEntity(154U);
    msg.timeline.assign("ILLAKXQGAIHZRCERSQDYVYGXIIURRTIMFNOUHBNJBSOPNGSFYLXMMBHVVQZDOJGWBVYKJWXCJYMUHXDOPDUQFRKZALZELONOBXPMGTHNDIHPLKHVBBKKRWVLNAQPYMVTVREZWPMVUSSWWEDLGLSHWECXPCXZWDTFWTQTMPJTBCHTVSABSJWUEQUHIQT");
    msg.predicate.assign("CNWDDEFYRBAATLJNIGEZQYMOWYWZNFSODBPIRCUQSQHPARQKMZBSFKLOGDRZISWPXQETSTXFWUGRMASJMFRLWAHYLFDNMQHAPVTNGKUUIMVVKWRHNCZALVKJTREPGPZXZGHJFDWSOUGWCECUYDGTHVYST");
    msg.attributes.assign("COJIPBBUTGELQCDJAXAKGRDANVITBDTRVXYDNWZMKXIGOMIHAZJCMISAVOOSXMWWMCMWQCRNRGKPWHRXHYEEPRFOKSIZ");

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
    msg.setTimeStamp(0.340434939897);
    msg.setSource(49068U);
    msg.setSourceEntity(253U);
    msg.setDestination(31364U);
    msg.setDestinationEntity(172U);
    msg.timeline.assign("XBIHKTUOOKUJTGBZKTTGLLDRUOXJKDUYIHHQAYKQLVCHZPUMRVTAOEZEYJYUFPCWBNWIZYEFQLBKZJIJRRMVQRSSGCRFRABJNOFDWWJBNNXSCNPPHXKFPVNMHFQGQDBR");
    msg.predicate.assign("ZGYGCJEACYHBSBDSKUHPJGKKXALHEEDIEDOZWKVOWXBTNBINKZKFFIRAOCLLFPAHQNWYSOZUGURDACMTVKPLVFYURJKSPWQV");
    msg.attributes.assign("NMKYRDJFYEJCVOZTPNEDTNLAMGLHZIKMZDCENMQMCBGODTRJRRYJAXWUIGQSHZWQIVHALJGNHVQSWAFMKWWTAFSUPLOTDRINLCDIJBSUFRLJGBIVOWCYVJVVPRAEKSCZZNKNNBHRAIMEKKPIIHGZPHLSBGFSFQUTUOYCDJIOFMTPP");

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
    msg.setTimeStamp(0.984255875551);
    msg.setSource(1572U);
    msg.setSourceEntity(205U);
    msg.setDestination(21U);
    msg.setDestinationEntity(223U);
    msg.command = 199U;
    msg.goal_id.assign("ARBPAKUKXJFMDULDAKTWDLSDWYLEYOBQZGTNRUFJAUFQIHYCGCJBECLZVOMSIFVSWFKMBHNRYEBXSBZSPQSHOV");
    msg.goal_xml.assign("OGZBAJYFJTARQDWHUQOETFHBTEYTSHETYDUPTUQZKMBFDWNQKOZNJRM");

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
    msg.setTimeStamp(0.203541160133);
    msg.setSource(40687U);
    msg.setSourceEntity(224U);
    msg.setDestination(2990U);
    msg.setDestinationEntity(65U);
    msg.command = 242U;
    msg.goal_id.assign("KEEWYYFMXMRMNCJMOISRHMXYJQVNPHNRYFTJHQLABIXJTASVQCTLTKVJPQZYSRMECDJTKVGIUDCFDPTYFSGCFBRAEUUFBUKLDDGHQACGBXOIEKBMWQHFIDSZKABJKFCROKOQDVAOUXHEFUEMXKRZWFLHINXLOBZYPAJWWHY");
    msg.goal_xml.assign("MPKRFHMZTLIAEFOBUKOBXUJQFCIJWZQOCOZCBJHNUFLEXNDCTNAQRLVKQTVALQEXJEKEXNAWYMQRVEBTAIIZAVGZIHGOFPYOVUNMPLYUDFHQVLWDZYJHQRGDOYPSNGYATYPSSUJVKDCATIRIXOGKBWECGTPSIZBWMXPUOW");

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
    msg.setTimeStamp(0.559040483612);
    msg.setSource(59717U);
    msg.setSourceEntity(250U);
    msg.setDestination(28692U);
    msg.setDestinationEntity(113U);
    msg.command = 243U;
    msg.goal_id.assign("QVCNNZJUHTSUIUGAJBJONEVEWYFIKYTQCPBKIXPAXPDXKRBQJKBMFTNIRMHWOZSIZOSRVSDJGELIRIRWNWCJASLLQTDHRFCGUBPZXCUEMHAKIAYRKHGHC");
    msg.goal_xml.assign("ECAVCSAKNWIRNUQUFYEFFMLDKLOBHSGPWNOIMPHOKKTZCYEDPKXYNZLABPMIPZORFBGEQGAVEJACXHXQNXRJGLCLVZMFCTEBJCJZKLGJTQKGCOEITUMPYHVGLUTZRWAU");

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
    msg.setTimeStamp(0.711820088786);
    msg.setSource(28136U);
    msg.setSourceEntity(217U);
    msg.setDestination(45243U);
    msg.setDestinationEntity(197U);
    msg.op = 209U;
    msg.goal_id.assign("IPZIROZMNAQSIDIOFXCFPUTLDYCN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RDBKUVEQKXHVYJTMMSIRKXZBBJQSLTBNNGQXTBMOYRTLYFOFUKXSIZFZDSCRHGNOATPBRVZGDJDKKQZPYPMRLLWHBSCVVGECQQCANXHGYHZPAOXFOVTWWZIISXKFSWERIPAZPWOIHYSFFFQUGXTJHFIQYLDKUTIVRLJDCDIELLDYYDMBJX");
    tmp_msg_0.predicate.assign("ZISVQFKZVLHRZLPDXHSALAVXFDADUANNSHJNPDWIKOGRLRGIVHGMCVWCCURLQDKJXTCGFUTBSMLJOCRCRYMQLQEFBVXTJBKSIUBAHRNMPEHEOTADXKKPLQGYYFGZQNXPEZBBOFUXSRAYKYMBESGHVUHAIJYEQZQTFUMWIMSGPIETNXOZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GUXIQRWXOGQDJLHEXENGWCYOVMNOZXSLAWGBVNZQDAHKMVIPSLKUCYNNQFHHMRMYFDIUEBHPKMPTKDABJADSNLJPCVKZZOVNUGNSQTVTZHHPSOYIBEPSWQBGMTVGUSLGWRCHYQRMHAIMXWQGXBMWURLJTZGLXRCZFOQSLVEYDNXWDJPYTYRJJICUEZRPFVSFUFPCBIEDKEHBAEWFJJMOCTICBTUDCPETNFADYOYOXXRL");
    tmp_tmp_msg_0_0.attr_type = 141U;
    tmp_tmp_msg_0_0.min.assign("LNQXPEDVGMHXBCGYRSBHDDIQDGHULLTZYXMVEOEUBJOEGIZVQNQBDFCOSKAYGWRUWYBYODBUGFPTHVXK");
    tmp_tmp_msg_0_0.max.assign("MUFVHIXBCUVCTWITFPKCYPVLZOQHHEWLIQFUWXEBYMKAPFEDPNZQWCNKBOCTUFVZKWFJOGHXYSWFNIILZVMYGBIDPNKRRLJJWLTIXTZHYVWBCFANXRGEBPUALJSIDCUYEGSMMJANRRFZGRORQGLDIZYKGEMPURLWSMJYVYUZAOSQXDCXECQSUIOVQSADSTRPABNWFSNGJNAYRODAVHQLBCBEKJTHNXB");
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
    msg.setTimeStamp(0.412137670142);
    msg.setSource(20045U);
    msg.setSourceEntity(154U);
    msg.setDestination(26071U);
    msg.setDestinationEntity(58U);
    msg.op = 143U;
    msg.goal_id.assign("LHFDBMIPQLZTLRXUZWRYRDLEJFEQSKKPAOKMADVOBPRJTUWRUVOPFGTVRVSBHZQUOQKOQLYGTSXTGIUCDVCBUFSVDYHIZDMJDDGNZJOBNWNTBCARAYXIQW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HXZDYDJPJBGOQCLGLYCVIGLKFTNPRIVNSLHPRHBERTPUAFIJCALGCGYYQBLFIWVZAHIEAEMYTKXKHWSTDEYUBFCGAKCGEWHVSZJUDEDRMKMSVPYOJSKGFPZFTP");
    tmp_msg_0.predicate.assign("VTBDMOMXPBKBLPGYTXLPGSPDIRHLMJCOTGMDWERFUGAXCKAZEDRXSRWDQXUNKDSCSKOIFOQSJEKNXOSRQUCJLPJMFCPOHZYIRYMKAQFXLEZLSPZPZJCVXUQWSEGTNQLGOCVNJEIFWGZDWNHIBKTAPPXZKGMFHAYCO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IPUAKYSSCKLHUZVUWADLKHFTOTUPFSLLZLAFHSJGBAFRCOXHMJGNQETAMQ");
    tmp_tmp_msg_0_0.attr_type = 186U;
    tmp_tmp_msg_0_0.min.assign("DGIHENFXKVABKOFLMZUCJUMKOYRWESMNVLEDTKZVTDDWOYNCHXPWPUHJEHYQBVPCLQRHMGUXBNXBRLEZZIGWQAJRBATCWLDGXDDZACPVOYIJFTMWNEPXPFXNJWBLLIPOJZORIZFXKGCBWJPUCSOCYHVPTOAQTCMZUFYEXUSAJMIZQYNZYWNALFQYSCDSFGKRVIODRVSUQMESKTS");
    tmp_tmp_msg_0_0.max.assign("XXMETFQRZAPXQPNMXAISSHWVNBPVYVICHWBLHYGWKJRJKFYVZHYTBIEQAKGBLDFRVNUURESSDYNNJAGVTBHCUSZPOWCWVZQRLTGLLIDOJLNBZLPUKFMEYHRGDLQRHGMTBXKWUHZEPEIFJKUJTIUCCOFTJMWOIMRDQVASDBVOOOOIWDFDXB");
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
    msg.setTimeStamp(0.271859330149);
    msg.setSource(41611U);
    msg.setSourceEntity(70U);
    msg.setDestination(27774U);
    msg.setDestinationEntity(116U);
    msg.op = 121U;
    msg.goal_id.assign("GAYTIEIDGXBIDYDKQOZLRHSPSXHSLOIUDYNNBXRGAWPEUWKCDOUPWOXMNNWVKFQXXCESKAYSKODLTFTLALTURYMPGBRSRSVYHIVQSNNCHDFRAVWLBJMMJZAAERGVXMKPEBGEYFUFCHXOWJWIJHTCHMNJGC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YDHKKPEHDHUPVFC");
    tmp_msg_0.predicate.assign("WELVHILYTZSADLQKZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LJGQUWTYFSIIVVIWTAYZTIQYPKOIYMQEROD");
    tmp_tmp_msg_0_0.attr_type = 81U;
    tmp_tmp_msg_0_0.min.assign("LNSMPOAWJBZNCZJKPILBCRGOWRAITDXFQZJQGIDBHRUYNDHPVMQUTIOAHFLVEEWHAEVVSVXTOZNVRTSEYNUMRPRIBXVWIDZWFAJCQCHKYKKL");
    tmp_tmp_msg_0_0.max.assign("FTOIDKPXELUATTIROTVJUAFWUUKCGZXKFQHKBVSREFMGJRAKTFVOH");
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
    msg.setTimeStamp(0.846432047995);
    msg.setSource(12361U);
    msg.setSourceEntity(173U);
    msg.setDestination(21655U);
    msg.setDestinationEntity(242U);
    msg.name.assign("GTTEJIKWZSWAHKCTANTXBSWYPITVFSFUKVAMSNHDZEGTKMVQRGYFOFVJHCRLPBDMPMMNWXXDMIWAGUNHAMEVRZSOPAXFWXPLVBKQEFHJLDRGIKCHVBFLJKLDXIBEUGNZLBROFUMRMJTXIJPQTZUBQAJQIVKRIHZU");
    msg.attr_type = 135U;
    msg.min.assign("ISXMBUQPUWNDIKWCJNDXONDWAVRKCIUUZUSDNTILQRQGJKPDHZASCCRQRJXBHKQMILVLJWYKHGFPEUTSEBJNYMWHCFKGXLODDVBNJAVVBEAMLROFXQQNOZVCMNAVDAYNXAPASTHREYT");
    msg.max.assign("UCHYGGLATNUWYZBOHQUZSSVSSODREFPHUKUMSHKRIMHBWQZIGWJHEXCDJNBXRGNWIVODZTEWFNNKOLIWUOFJESIKNXVQJKXTCSATMLYGUABTVAOLFPYYQCAAXCJWWGBDEUCBDLGRECSZRDXWZCNPXIPGFOHVHRWOLCIGPGIRUDKVKPQPFAJSVMLNNRALTIIRKZFBEUMBQMKDODHBEQJPFLSJMVPYXVBEMYDMTTPTOJYX");

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
    msg.setTimeStamp(0.188906349962);
    msg.setSource(47245U);
    msg.setSourceEntity(250U);
    msg.setDestination(55558U);
    msg.setDestinationEntity(6U);
    msg.name.assign("POYXGYRHVTPZPWMSFFSEFVNELEBHDZTNIUYMUXXUOVDTMDZQOSYKVCILYDLD");
    msg.attr_type = 224U;
    msg.min.assign("SBKHZZUKBUKRGYQRBPPKOAJAVJTWXDVDZIKHLCUCJMMEROJVJUHLKAAKJSEGWMWEVLJMDVBSIIYRESWPGJWBLEOFBFZHIFJTTDLF");
    msg.max.assign("WSYFBKFWZGBUYZCLG");

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
    msg.setTimeStamp(0.406192241414);
    msg.setSource(36507U);
    msg.setSourceEntity(103U);
    msg.setDestination(32629U);
    msg.setDestinationEntity(116U);
    msg.name.assign("IUTPKFJMZLXUIHBBACJJPBDVUXOGCYCOEEIPNZHBOGXEZTVGMQXLVANZPOFDEPCQQTXKZNUXFEYSDRABKNXOAHCFNSLBUFSDRGCYIKJYFVDQSMTUIMSCYXKJZZSIJVGAWPGPEMGNNZEQIWLPSLTOPMJMREDJCFCSBATQUBIDQRYEVRHG");
    msg.attr_type = 103U;
    msg.min.assign("OXLOQRABSCYMSUEQIWFBXJBJPYSZMWJXDTCXJOREUPASMGZNNAQGEPLTLDBLIHFPCVWSBFTZDBLKIGVAJPHVKPSRRZWCKRVDRMOYLEEEFMTKUGUNUBGPYACKZMJETHVJXKOXYSAFMFDOAAQNHIINIXQIHBCCMHWMRWDXBGUZUGGNQRSQGVZ");
    msg.max.assign("GATJRAJLCZSMMORUTJIGNDVZPFHWFYQTKVBHATRK");

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
    msg.setTimeStamp(0.207386878626);
    msg.setSource(49531U);
    msg.setSourceEntity(179U);
    msg.setDestination(33284U);
    msg.setDestinationEntity(247U);
    msg.timeline.assign("JBNABQBXPJWBTPJQUXALQYHUATYOIEPXJHDKKUQAHONKWPQHFGFJYPVEENPGVXOZKMWYAUUHVRAMMTYGNYNEWIVSECMEZXLIXLNZJMYWIRGFISQLZYTLTSAJDRBLUSSZZZUQRREKFJDIUWIGCOLBVMVHVMXNMKKFBGCPLWAWPODFMUGHSVESBDTSHOGATITDNCDRQBCPEVRYZLKTSZIF");
    msg.predicate.assign("LLDBTKRYRHKIADUIOBISRMOBIPQUIJWUSVBYHSRCNEGJBTVDUEXM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("QBIOZIUQRFORHAUWCCVYIPATHPSXWICSXZMTGJWFDQODFJUEPWDKQQVRGYLQQCUTVTZIJOZZEWRSLPHEVBHKNVRTQNSUFOEFEXXAEJXDFBVYVIOGDSWADLYMBMPWCXBWYKTZBMDKYAYQBRUHMEKCVGMGWORIXAKINTXKCJGNUDSOUJENSRK");
    tmp_msg_0.attr_type = 5U;
    tmp_msg_0.min.assign("QMWOFAAUYNFCAEIEJELEYGFKRUPADMLCLDBNSCOWUIPIDOHNNTISPVXDAJXQVRWXLEEVWXGZTUITJYZZDHNUDYJFRVYGITKTFDQMWOSZDVYN");
    tmp_msg_0.max.assign("MISQNZUEQBJDHJDDAGXZNDRCVSLVGDFUUKAXBCRZSDJHJOIETPMWWOBBGPSTIZLMGSHTGPVKFIJEAOPWEKSVNFAZYUMJWJCUELWWKXGVUNRYJDJMRROKYHNVQKYQYFEORLHTIRLHYCVTQZUVKKOQDXDBFWEGUTFBCHQMCAEXFZLMNCNQTF");
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
    msg.setTimeStamp(0.786426126743);
    msg.setSource(21727U);
    msg.setSourceEntity(42U);
    msg.setDestination(1792U);
    msg.setDestinationEntity(164U);
    msg.timeline.assign("WFMVMBNMYSFATWIPFESNYEEXNDURTIGOZGCGLPECVOAKMNHXIHRXQLXZQBHORPJZAQSZISMYGGUOLMBIBTYAHHKQYYEKFZCNCLJRSZTJMMYRCVNHTKJWLSTZMTGVIFQWKBNBXXEJDITOPDBDUOCBFDGPGFCEYHUFOQDWCKSCITYDLWWZQWGDURAAEVRKVTHHQMXAIEBXSSAQVRZWPUAKJPWVIADL");
    msg.predicate.assign("JCUUVAJXTXTFAWMVRYOBPGFEFSUBCNRCBGRGQXNRPIPZZQQCMZTIQHHPDD");

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
    msg.setTimeStamp(0.555687348468);
    msg.setSource(57166U);
    msg.setSourceEntity(96U);
    msg.setDestination(64229U);
    msg.setDestinationEntity(1U);
    msg.timeline.assign("OJGRKEWUGWDPUVMXNCJQLSBOKDZTZCSUIIOMNYAWXFABDMNINICSZUXTEJPMRZXPKYNAQRYLOVDCTNZYKSYNQHHAHRLLRF");
    msg.predicate.assign("PLRMIXXFZKWSJRLQHGSLTBJFWQZBCLFVAOXODVUANOZQEAUYPQDWXHHEJHFPRZBVYXUEPMPDRMHXWUPATDODAHCXFGGTBKERUPQPLHOYILJUBRLVSUQFEQWXZWINVBAKZNIKGDJUOTBCYOMKJISGJWVICMQXEIYRJRJKLDZSOSNRBAKWCOTMEKLQYNFNRINBKCGLCIUWFNHGYHATECVPCTCYXNZDZSWAEDGY");

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
    msg.setTimeStamp(0.0173484277173);
    msg.setSource(17548U);
    msg.setSourceEntity(217U);
    msg.setDestination(30447U);
    msg.setDestinationEntity(49U);
    msg.reactor.assign("ECNIOYUYXOJJFJENMJKIKIBBZRNVZAQAIDGCFTQTBPGCLMSZMNQFTETKXJAFDYHYXMOFNNXJORBFAWKRNOICICMHFVWEEVAUUYHGMKUROZWVEZBBCVSRUUWBLZEFIWKYCWBXHDULSJLQRQAMSPGYGNTTQOVMKJCLGVPLRSCPTBKWEVUGTIGXHLXSHJIPQATXYZDHXROPMHNYZEDOLHOFAAZEWPJCGYHRSDTXKKPQLRUUWSIZDDSMDFLGQSWPPV");

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
    msg.setTimeStamp(0.642194595354);
    msg.setSource(47893U);
    msg.setSourceEntity(153U);
    msg.setDestination(41638U);
    msg.setDestinationEntity(32U);
    msg.reactor.assign("NDHDNIRPSIPVDAIVJYCKWGSSXBGJTRGEDMWSDJZTKTNQQKIDECHDYMHKCKVYURTXIROUBTFEUIANQSHTWVQKPWUZQXEXAYPPQJNZWKMWYURFNFBWTVXDRFNKJOFLMRUPITXRWZVTMMZREPBJBPHREYWFA");

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
    msg.setTimeStamp(0.528397655194);
    msg.setSource(39911U);
    msg.setSourceEntity(130U);
    msg.setDestination(17514U);
    msg.setDestinationEntity(209U);
    msg.reactor.assign("VUHCWGXJIBDQKZABDBQMZKGPVFFZLLBJZOWXUYDVLMZYFCMHLXKYXURWPEPOGLENPBYUIOUTTHYEVIPSUMKMSUFOMQNCOEGIHTNTHASVBDKIHLRSSUVAWDOTHHZMSRRD");

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
    msg.setTimeStamp(0.701480770246);
    msg.setSource(61483U);
    msg.setSourceEntity(222U);
    msg.setDestination(28226U);
    msg.setDestinationEntity(76U);
    msg.topic.assign("FJMAIYPOIELAMSTSQORQODULPYOXXUHNGHTLPRZJRELCTVONWJIMVKSFKPVFRYCKNYRSMXAPWPZPKLGNJELYVRBHPQFEXZBBGBDMTRUQLDVTWQQFHDUNRPXVEDVHXGCFDVKCGETVIGDMJHQKFOBAHREBCZNSUYLYAOJKLZEHQZRISIFTWBCDHPJQUEFUDUBYKAQJZSVAKDINXHT");
    msg.data.assign("XULYEBCIDJMNQTNSUIWBTCYHVEBDRTSNXNHRCSZZLZKDZXWRJFJVSOMQXFGXAXNONGYMZIAHRIEHFFDCSUPYDSYETYGMSPQOOVWUVKTUOVLOIHQDKLVLONENWQL");

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
    msg.setTimeStamp(0.0823237576906);
    msg.setSource(8855U);
    msg.setSourceEntity(134U);
    msg.setDestination(58739U);
    msg.setDestinationEntity(55U);
    msg.topic.assign("JEMCJADKGRYXSLBWCWSBIYJSVODTFLYPDMPKVHIMLDKNHEZWTXGKPXRRBTWFBRWUUHEKXYJSLKVFROSCSZUXIAZBT");
    msg.data.assign("WPDCAVALOIPWFQMBYQRSZRCJRUXHTVQYTHFSMFTNEULXQYOCMCHHNUVSLSUMZNSYTIIBJDWAQGYVTXKOFPZOPHICWDLSVADJDIGZGKZLVBEKKBDESZCIPEGPXHGGVUJTBFAOCXAJFVBRTDF");

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
    msg.setTimeStamp(0.100756489017);
    msg.setSource(58904U);
    msg.setSourceEntity(147U);
    msg.setDestination(40341U);
    msg.setDestinationEntity(198U);
    msg.topic.assign("EORDSNLFQUVABOEIMNWRBQLKXMPHUOEMRTUFDQXVUSLMHAGWIGRGJLKAXMLYWEIJCFKOQJJCIJMQTKIBVKGJOCLPFMTYPVLSERGUJNHWKFUYMRDYJXUFXCYWAQMAVIGPDYBWKSXNYCHSAFZLHQTYSKZOVAADNHEESBZYHWWQBGTHKNPEDIQDYZVRGOUPCIZVOKGBBORSNOIDJQECZPVBITMZRTNFZCDWLXNFCFRCWDHPH");
    msg.data.assign("YIMDBCGKNFWWVHJRWDBPVDOGZNCWOFFZLIGNCGBQSTIDTKWWXEJDHTRSOEEXJKHTZVT");

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
    msg.setTimeStamp(0.842134256973);
    msg.setSource(13853U);
    msg.setSourceEntity(130U);
    msg.setDestination(1125U);
    msg.setDestinationEntity(203U);
    msg.frameid = 254U;
    const char tmp_msg_0[] = {-4, -92, 15, -31, 6, -95, -108, 87, -15, 21, -30};
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
    msg.setTimeStamp(0.462530852663);
    msg.setSource(28039U);
    msg.setSourceEntity(37U);
    msg.setDestination(42310U);
    msg.setDestinationEntity(147U);
    msg.frameid = 107U;
    const char tmp_msg_0[] = {122, 23, 79, -39, 111, 32, -81, -47, 110, -27, 6, -123, -93, -50, 15, 55, -40, 65, -48, 48, -77, -39, -87, -18, 9, -60, 80, 64, -120, 34, -91, 85, 8, 68, -43, -3, -110, -88, -93, -25, -47, -70, -21, -31, -95, -9, 86, 7, 88, 73, 63, -19, 18, -32, -101, 62, -39, 58, 47, 107, 32, -47, -102, 66, 29, -64, 94, -32, -72, 90, 73, 79, 56, -61, 117, 79, 12, 50, -56, -25, -47, 71, 62, 38, -7, 87, 113, 113, 52, -10, -127, 57, -98, 60, 33, 5, -34, -120, -13, 59, -108, -69, 45, 122, 54, 12, 82, -48, 22, 76, 93, -8, 26, 14, 67, -87, -26, -54, 53, -95, -36, -22, -69, -32, -127, -73, 97, 92, 93, -120, -51, -4, -114, -85, -99, 49, 102, 29, -45, 82, 10, 78, 6, 21, 109, -94, -24, 44, -128, 62, 113, 38, -80, -6, -68, 78, -46, -29, 70, -86, -122, -117, 7, -20, 86, 114, -78, 120, -104, -31, -70, 78, 117, 25, -119, 91};
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
    msg.setTimeStamp(0.504009239635);
    msg.setSource(52446U);
    msg.setSourceEntity(252U);
    msg.setDestination(14186U);
    msg.setDestinationEntity(127U);
    msg.frameid = 106U;
    const char tmp_msg_0[] = {-12, 7, -10, 64, -36, -6, 41, 87, -107, -23, -14, -126, 98, 24, 63, -36, 4, -21, -65, 66, -86, -68, 42, -118, -64, -88, -69, 17, 16, 114, -109, -78, -3, 38, -4, -75, 18, -104, -73, 71, 60, -89, 98, -118, -42, 4, -38, 122, -98, -53, -37, 73, -107, 61, -67, -82, -21, 16, -127, -16, -76, -18, -8, 88, -33, 90, 102, 7, 87, 22, -65, -28, -118, -93, -13, 88, -22, 34, -66, 75, 26, 62, 55, -42, 116, -31, -106, -17, -102, -102, -91, 24, -47, 0, -65, 26, -88, 29, 92, 13, -72, -47, 19, 112, 74, -117, 37, 48, -58, -112, -37, 55, -49, 19, 31, -47, -63};
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
    msg.setTimeStamp(0.968244604381);
    msg.setSource(9983U);
    msg.setSourceEntity(211U);
    msg.setDestination(53652U);
    msg.setDestinationEntity(42U);
    msg.fps = 222U;
    msg.quality = 15U;
    msg.reps = 132U;
    msg.tsize = 222U;

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
    msg.setTimeStamp(0.80466275391);
    msg.setSource(7521U);
    msg.setSourceEntity(95U);
    msg.setDestination(12764U);
    msg.setDestinationEntity(233U);
    msg.fps = 149U;
    msg.quality = 0U;
    msg.reps = 1U;
    msg.tsize = 96U;

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
    msg.setTimeStamp(0.339932380174);
    msg.setSource(36998U);
    msg.setSourceEntity(11U);
    msg.setDestination(48458U);
    msg.setDestinationEntity(178U);
    msg.fps = 242U;
    msg.quality = 75U;
    msg.reps = 174U;
    msg.tsize = 77U;

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
    msg.setTimeStamp(0.140099586657);
    msg.setSource(26662U);
    msg.setSourceEntity(152U);
    msg.setDestination(47891U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.937228834462;
    msg.lon = 0.441682628142;
    msg.depth = 79U;
    msg.speed = 0.702856320741;
    msg.psi = 0.432087628226;

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
    msg.setTimeStamp(0.657870962055);
    msg.setSource(22848U);
    msg.setSourceEntity(109U);
    msg.setDestination(23870U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.135438266164;
    msg.lon = 0.258297937086;
    msg.depth = 187U;
    msg.speed = 0.964819233785;
    msg.psi = 0.943818040434;

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
    msg.setTimeStamp(0.460671709741);
    msg.setSource(11575U);
    msg.setSourceEntity(153U);
    msg.setDestination(7749U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.39992407248;
    msg.lon = 0.381480882354;
    msg.depth = 74U;
    msg.speed = 0.0375507824494;
    msg.psi = 0.664841678694;

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
    msg.setTimeStamp(0.140267743563);
    msg.setSource(48782U);
    msg.setSourceEntity(225U);
    msg.setDestination(56155U);
    msg.setDestinationEntity(58U);
    msg.label.assign("TJCWESACVAKNKBDZATBHSRVTWVBLECQXFCOSNQQAZURNFUXSBPQQ");
    msg.lat = 0.349091348708;
    msg.lon = 0.307133478427;
    msg.z = 0.265998261759;
    msg.z_units = 164U;
    msg.cog = 0.205838983792;
    msg.sog = 0.351623330147;

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
    msg.setTimeStamp(0.193059716639);
    msg.setSource(55793U);
    msg.setSourceEntity(88U);
    msg.setDestination(52917U);
    msg.setDestinationEntity(23U);
    msg.label.assign("EUREAICEZLSFIMNBWAFVLGYIPXFCHYXTVTSGVZDGFKSSNEJGXROJHHLPTAGEYOLHRUYNRYTSKIKAMSBXROWTEFPILPZCDFADWCGPJLVRBZCNPQPWHUJFVKDLIZMZSDBWZYLWCIMTNQMQYHODMUAQJRVJVUWBUXEGOQRVAJDQYTPWV");
    msg.lat = 0.230852314442;
    msg.lon = 0.47801785625;
    msg.z = 0.963548446802;
    msg.z_units = 253U;
    msg.cog = 0.891468418239;
    msg.sog = 0.861329293806;

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
    msg.setTimeStamp(0.743736768763);
    msg.setSource(36150U);
    msg.setSourceEntity(80U);
    msg.setDestination(5571U);
    msg.setDestinationEntity(6U);
    msg.label.assign("AADWOULVGNXEUISPPILQMNVBRUNZMJZBXESCKQMGABJISCXHZPHCAFRLLFVOEROHYHCITENCBLQDNZVGSPEHDFXPHMCCVDONAKTKYWXPZLGFZHCVTSTBRMTEKBJTHKGSFVVLFGLUUGZJKDGQBGET");
    msg.lat = 0.0154206728219;
    msg.lon = 0.00551434421485;
    msg.z = 0.960441810513;
    msg.z_units = 20U;
    msg.cog = 0.0112641385777;
    msg.sog = 0.21569204036;

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
    msg.setTimeStamp(0.850197429944);
    msg.setSource(5009U);
    msg.setSourceEntity(135U);
    msg.setDestination(30164U);
    msg.setDestinationEntity(130U);
    msg.name.assign("IEUWDNAMQFEUFFHVHPWCWUWDWLGBORMLOHDOIFJTWACIXDINKSOIGGGMMHAZSGRLIVCQBGZULMBVEBEOPLHJNYRQCZUHYRAFZVKBYEHVCVYKNERSTKPMJJCPMSFBXZSTKKJZNCWZZZPELBVJNFOULOZECTNRBDFYOQCDGLKOGPYPRXYMQBHXNIXRJAWQCE");
    msg.value.assign("PABUEAUJEXEGELZSLLUDWXMPLDJROLLFNPOOTFVOWLVVWVRKYMJNKIWOVKHEUBDMNCXXBQNQWGVJTPHBUQKQTOTIITKWSTYBFTJKNYLCWPTDNHZCBMDUXQRQNABGRVEJIKZPXZGKHHXPGCHOAAYLAFZCDNMMBZYO");

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
    msg.setTimeStamp(0.073952300324);
    msg.setSource(41464U);
    msg.setSourceEntity(197U);
    msg.setDestination(8072U);
    msg.setDestinationEntity(101U);
    msg.name.assign("LTVCLCMIEAHHJEXYRDWANSIGBRDGEGWZTDNNIRQSXDUSDLOIMMBD");
    msg.value.assign("WTYCTSTMCYNSSGGYPWLECXDVHBXTFNLUH");

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
    msg.setTimeStamp(0.458172396706);
    msg.setSource(4693U);
    msg.setSourceEntity(98U);
    msg.setDestination(22541U);
    msg.setDestinationEntity(232U);
    msg.name.assign("TBJALWALHIOCYPKKFBKVGCNQGBQMTXDGWFBFDIDYAUHWJUWSTAECOGPWBKSFHRJLXVRTZPPHFRUMZVXJINXZDYQD");
    msg.value.assign("HWKZDMUJBIRWLRWZKLHANMCITVOGLEGMZMJRZLEGKASCLQOHSHJFKTCKFRQVCMINBXSRCCATZVFVJXSUVJDJZDZPVXEMQYQATMNRYKROZNITYXDONQFYZXNABAHPSFLWHXPGTGIGCBFXEYIXCHWYQEXSWDFJQZPSQYRMHKAFTPWDYBPUPKGPDMJELBUPKVODEBVUU");

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
    msg.setTimeStamp(0.109571196405);
    msg.setSource(35874U);
    msg.setSourceEntity(35U);
    msg.setDestination(27106U);
    msg.setDestinationEntity(46U);
    msg.name.assign("DMXTKKWAZFDRILFUXZSBVTWAXBQNFBXFXJSHFXLMIMAXYWHMGFUONOTTPRSEIAGMKLGBAQPZZFVGXENNXFOSWHJQZDPWEHKKJIQWUWKSJUCQGCEVHLJAI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NQVGZBRKDVVGP");
    tmp_msg_0.value.assign("SDCZWFIYZXVZINWBRWCGOWADBMYNYZGGTWYVPCMOTEMCWVPBCDLZTSE");
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
    msg.setTimeStamp(0.825636442307);
    msg.setSource(44695U);
    msg.setSourceEntity(188U);
    msg.setDestination(39210U);
    msg.setDestinationEntity(206U);
    msg.name.assign("ZJNGUYXAGXUYFSFGPNDYXVBWDDVFWMLYSVEPVBSZNEYRDVMROLPEQPAPXTFAQPXPTLIECTJWJOOVLLNYHBDMCRKWKSZBXQAHPMWHNLRCEREIPVSOKCHXQQEYUZKZIBTXUZMGTOFUMEOBGSWEMJYMKHSUWLBTTZDDAKCKPIRGFVUAQUTIUXYUMTFKNZDNDAOGFNCABQSYASCZDGBKGEJICHCHHLWBWIJZSLOHKT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MRTQFRKPYSRZMNXFIUQEHQWJIVFOMBGA");
    tmp_msg_0.value.assign("OYXXRYZMXYEGFNEBUUVCKXKQFEPZZFBASEFAGINWYRK");
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
    msg.setTimeStamp(0.513551557696);
    msg.setSource(42073U);
    msg.setSourceEntity(54U);
    msg.setDestination(28930U);
    msg.setDestinationEntity(64U);
    msg.name.assign("TKFUCRZGTRHPOJIFWXQMNUCYIRKIXEIRYXSMZTGRPDQOZOAUGCGNSLVETBBLSRAFSQBGMEMPUFNRDXZLOWUPHWHJNVBXICYCDOLSRDMELCZVJHDAOFGKINKIFSAFHUAKQNKDKLVYQGSY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DAGTRMGYLSWXZSLGOJNLHJSUYBGBAIMBPKNICHGZTTDJRYTUIVIIVONXFDUZI");
    tmp_msg_0.value.assign("EXPFYJRSVZUDIDOEGYMSRWLYCZFDZIKNVKTRZUJNMVGSJGRFLJCHNWIUZIATGWFMDPBXXHBKPWDEXVCMZFJKTQYQBGRFGSQURREHPHWLDMPOEAUUZVD");
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
    msg.setTimeStamp(0.324352831204);
    msg.setSource(31728U);
    msg.setSourceEntity(222U);
    msg.setDestination(2443U);
    msg.setDestinationEntity(110U);
    msg.name.assign("CEAPRZYWHTVWTEDAOKWKQIRWVGHMSBWPEYEWBYBUQHDSTEOSWRAXEHNGQOVZOORYJJPPUIAMNFJIDWANPLUNPXIISPNWAGKRLFEJGTFRIXHFFHUBMSMTSGSTVFFRCYUOXMXJULRGNQLAUSBQOQKKBDW");
    msg.visibility.assign("DWVXOYMQIXBFAFKXNYGABSPZMKXDPZATKTWQNXOSBTLCIDTJOFDWEQJTYYZUMDMPMVQIWLLEONWURZOMGVKDJSSJEMNLFEUHBGZBQSMQVSVIMHUQGTHKIZXYCHHBKDRONNRXBTEPSRRJCIYIJKPMCBRGFGZLCWAFYGEXXUUXWKCHJHJKIQEEUOHFJTLPSHLNBPLSQWASAVPYG");
    msg.scope.assign("PHRNLEWISBGKLAUIKODKSJBTQTMRFOFNQXOUGLSETTIXLLYTOVYAYHWFUCEPBXRPXWCGBAADFTOIQSIDGAOBMUCFNHVDMCKKPBKUDGJYWOLEMXERPKZONPVDFVQRKVWJACMUAANPVJ");

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
    msg.setTimeStamp(0.797367571822);
    msg.setSource(20942U);
    msg.setSourceEntity(22U);
    msg.setDestination(42249U);
    msg.setDestinationEntity(156U);
    msg.name.assign("MIEXRNDJDOGXMNSXSRLLPMICWCTQWFVUYUZEDUBDWKJPLEHVAYJGVEDUAOSVQWFJLFZRZKZENWMKLTPQXSBWPGZVAXOTGEOWNCIJKUFNYCPIATOSPOSAJAFEBFYJLBJCRIWNF");
    msg.visibility.assign("CEKATNOQERYI");
    msg.scope.assign("POBJUDJDYMQZPVZNZVATRQXMFXFMSYJHDHVBAQPCQXOPKTHKLWEIPCFXCMYOGTEDNOBYFZVDGANNUZOMZWJSASXMJRLKYXITORUWEAGJHQNDVGBXWPWHEKXSJVZIIPHQIRIL");

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
    msg.setTimeStamp(0.818519496712);
    msg.setSource(21353U);
    msg.setSourceEntity(167U);
    msg.setDestination(19727U);
    msg.setDestinationEntity(253U);
    msg.name.assign("PXVIMMCGTQPTAGDPW");
    msg.visibility.assign("DXPSUGEXWCHONWFWANRENBRTPJFDQFBXHSFIYIFQLBEQCAWBYETKPFGQKSBSJOKUMJITTHCSJWOWHHZVSRSHMZDHUCPFYRECAYRXLEIIHCDITKAOZTKOANJDNVMMKIMHKNAZDFKRWEDVLXPYIRVGWREQCNOMLJDHZVAPOWOMCFQPVTOLLGTEQMOYUCRNBIGBVLYDGFUXZMPUSGYGGSWRUQKYBLZQGCXJ");
    msg.scope.assign("DHIXKUMQLBJMJRCVSMSYTYRWJEPGDHWWIFVDHRLSHRMTNFGIZUSJCGGDUSWRUHZLPESPBKFUKFMFJCNCLHXKQIXONINAKRDZIMVTGWWGDTEAGNQZGOYNUUVNZRQSPLOQALMXJWTBVXEJERHACAHAECDCMKPIJOXVWFCOZXQOBPFQXJFYAWTEKLWVHLNCPIGSYNCYDVFTUKRUTSADAOBQEVYOTBEMXABIKHEOPGYUMPV");

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
    msg.setTimeStamp(0.254162308422);
    msg.setSource(31992U);
    msg.setSourceEntity(92U);
    msg.setDestination(15333U);
    msg.setDestinationEntity(38U);
    msg.name.assign("LDKYZBKNFBKUOIYIEVDCZXSLGVTHRXPUNJTQPDFECOZAOUSAVZYEPMIWPOLTXVSHPEJZMQISJJUDJYURKSYGQBFYBDVOWT");

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
    msg.setTimeStamp(0.00518557155324);
    msg.setSource(61069U);
    msg.setSourceEntity(108U);
    msg.setDestination(41871U);
    msg.setDestinationEntity(245U);
    msg.name.assign("FWEIBXCKSXHPDWDTKTOUQKAYONWDZRPFRSDAMHOFCHUXNIUMVEYRSIYZQKGEYCBTURYGVXLVWVNUCPLXCANOAPJENOLVHZOEWFDOFGMSJYAAJULULIZVRBOCBZIZFLAFXRJPTUREQDWLMZTGXUTGGZQHSNIKVDECPCMGHLLJTPBJBWATKATYQVIHQGRLNQBJMQPINBZMSKNMGIPQBSJCSYBECYYEOGPH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JVWIPYVAJTUFZKAUZNEKOYZBRCLLQKL");
    tmp_msg_0.value.assign("FKIFDNVLGXWOTACFOGWBQSVYPQNSVZDDLEWGUQYIGSOCEIWTNRPGULTVMMCFNDXIIHKIWTPFESLVKMPAABSRROLQM");
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
    msg.setTimeStamp(0.839362574457);
    msg.setSource(12566U);
    msg.setSourceEntity(251U);
    msg.setDestination(64564U);
    msg.setDestinationEntity(46U);
    msg.name.assign("QJDIJBBMHVAQYEGJCPTUWGKTRYJLMWDHZMSQJVQKONKNCTBL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DJFPKMVTAWSRXKGRCWLZTAQGZKFQNIAMGPUCVIACZXZYWTSOAEGZFRXOTWHDQRZAFAWSWPFQPLMLSOVCKIDJQYZJXYIHLMCHTCXSVYHQIJHBBTHMVBCPNRREGVLCTTDSFLCNXADHFPBLBYBIIJJYFOOUFEUPDDNEMSWFMVNJEYTGGKMNRGCOJOKWXEDMYLHIUUDEKDMKKUVSE");
    tmp_msg_0.value.assign("FYNEJLBSTMAZXZWSCHQRKXAWDKVUWUJGKJBCXQSHVCHIILSGYYRVYPHIBYVGFGIXJSRVQPKMAWIVFUSNDYEQLQZLXVQDKYTTYRWBHGZLUPFTPCZWAICEKGD");
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
    msg.setTimeStamp(0.475973269657);
    msg.setSource(11970U);
    msg.setSourceEntity(142U);
    msg.setDestination(39676U);
    msg.setDestinationEntity(241U);
    msg.name.assign("BXBTHHQREBFVRDFIXCPVWAKOEDYZASVLPIDWEVXTXTPJPBNOAIKKHLPUDAYCLVRQJEXVXQYTHKNRCRJMQEDZLZQVRIYBNSMKGAFHY");

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
    msg.setTimeStamp(0.0863271865805);
    msg.setSource(14342U);
    msg.setSourceEntity(118U);
    msg.setDestination(62560U);
    msg.setDestinationEntity(206U);
    msg.name.assign("VBIYXCVJEQQBWQICCYQOENIWFQYLZNPSPFJQHRDIXTQUSIUPNYWUZNRWPPOJDKPYDOOWAMWPYWCNUPTLFEBWHUBAMFMSMHFTTDRCGPIREHKAUCEYGSLBLHIEDUKCTSGKLEZMRONRAIXFHJLRVTNGQFQQCOLZDVOHKCABBHZEKJOIAJXNUOVTELZACAUSGZKDISXYGPVOBSXFNGJSNGZTMWK");

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
    msg.setTimeStamp(0.867789310335);
    msg.setSource(41030U);
    msg.setSourceEntity(148U);
    msg.setDestination(27877U);
    msg.setDestinationEntity(152U);
    msg.name.assign("KUDFLGHIXWXCUNEDNXRWPDZATCBVQWNTCKCPQOQJBREOFODMKDTYJHWCPYMWJYXBGUFIHFFALOLWEREWYXZMSRRBLEOESQUMCFGTYPY");

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
    msg.setTimeStamp(0.255193203641);
    msg.setSource(19154U);
    msg.setSourceEntity(227U);
    msg.setDestination(26231U);
    msg.setDestinationEntity(0U);
    msg.timeout = 1552391905U;

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
    msg.setTimeStamp(0.8801278054);
    msg.setSource(47155U);
    msg.setSourceEntity(203U);
    msg.setDestination(16388U);
    msg.setDestinationEntity(64U);
    msg.timeout = 2389236742U;

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
    msg.setTimeStamp(0.454702887331);
    msg.setSource(13521U);
    msg.setSourceEntity(37U);
    msg.setDestination(10880U);
    msg.setDestinationEntity(249U);
    msg.timeout = 451741317U;

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
    msg.setTimeStamp(0.254609081031);
    msg.setSource(47555U);
    msg.setSourceEntity(245U);
    msg.setDestination(2912U);
    msg.setDestinationEntity(46U);
    msg.sessid = 1238922602U;

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
    msg.setTimeStamp(0.943139132171);
    msg.setSource(59649U);
    msg.setSourceEntity(118U);
    msg.setDestination(33608U);
    msg.setDestinationEntity(91U);
    msg.sessid = 1785457393U;

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
    msg.setTimeStamp(0.0941950369948);
    msg.setSource(3202U);
    msg.setSourceEntity(204U);
    msg.setDestination(3778U);
    msg.setDestinationEntity(153U);
    msg.sessid = 1648751269U;

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
    msg.setTimeStamp(0.924738563804);
    msg.setSource(12738U);
    msg.setSourceEntity(143U);
    msg.setDestination(37674U);
    msg.setDestinationEntity(231U);
    msg.sessid = 967395277U;
    msg.messages.assign("AUAYAXPYTFBHRGVRFBSHTQGTEHGNJWMRPLYBOOVYHAJPUDLPQQKFVGNCMCRNPZKFGYSEDWXODUHFZXCCMRKGUVRKNAMUXNLECXRMJNVUSLBDQVSSFGWJHBQEOPNQOPDOXLZYHVWYTXKRFCPKYWOISEWWWJJMPTNTVTILXKHYFAAIUOVCUNLJWTTUJKQQSIZEHIQGUMQDEEBIEZYFAIBLMKHCLSDXAZZBTZMDCSBSJIZDGXZCB");

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
    msg.setTimeStamp(0.74214844467);
    msg.setSource(25524U);
    msg.setSourceEntity(91U);
    msg.setDestination(2670U);
    msg.setDestinationEntity(65U);
    msg.sessid = 854310257U;
    msg.messages.assign("PUKOUJPSSIMVDZTCXXPYOTHNISJLMBGDYIGHEMQCBECIGBHZNMQFFPYHDFHMHPRETTBAMTXUHUOZGUBQTQMQLIMRISCJNAVZJQDMAURWOPYALGZONKRDFNWRJDERVRCZAJSHTGUOEVNXSISLKVICOFCAHISTDBTQBNBVLFUTKUWWWSNXKCWEBKXERDCZMGSLNCIVYPRLLJWKBVJQOX");

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
    msg.setTimeStamp(0.7109951593);
    msg.setSource(11068U);
    msg.setSourceEntity(136U);
    msg.setDestination(37716U);
    msg.setDestinationEntity(57U);
    msg.sessid = 2683894931U;
    msg.messages.assign("WVGUTOXNDQVLIOAJFAQKZFURCQTMWJLIIIPLSPSNZYOBHCMKMUCSODBKNYYOAXJWYYZDOXRRP");

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
    msg.setTimeStamp(0.49095563303);
    msg.setSource(62U);
    msg.setSourceEntity(71U);
    msg.setDestination(45651U);
    msg.setDestinationEntity(165U);
    msg.sessid = 1471297499U;

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
    msg.setTimeStamp(0.187535752358);
    msg.setSource(46615U);
    msg.setSourceEntity(181U);
    msg.setDestination(4165U);
    msg.setDestinationEntity(92U);
    msg.sessid = 3464808358U;

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
    msg.setTimeStamp(0.0139424838227);
    msg.setSource(16852U);
    msg.setSourceEntity(62U);
    msg.setDestination(21344U);
    msg.setDestinationEntity(150U);
    msg.sessid = 532369033U;

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
    msg.setTimeStamp(0.538819945256);
    msg.setSource(35121U);
    msg.setSourceEntity(199U);
    msg.setDestination(40707U);
    msg.setDestinationEntity(114U);
    msg.sessid = 198242696U;
    msg.status = 121U;

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
    msg.setTimeStamp(0.892837647833);
    msg.setSource(38093U);
    msg.setSourceEntity(114U);
    msg.setDestination(47431U);
    msg.setDestinationEntity(19U);
    msg.sessid = 1269299113U;
    msg.status = 220U;

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
    msg.setTimeStamp(0.722204213654);
    msg.setSource(63068U);
    msg.setSourceEntity(242U);
    msg.setDestination(5976U);
    msg.setDestinationEntity(174U);
    msg.sessid = 126616644U;
    msg.status = 174U;

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
    msg.setTimeStamp(0.603340947532);
    msg.setSource(31401U);
    msg.setSourceEntity(211U);
    msg.setDestination(34378U);
    msg.setDestinationEntity(252U);
    msg.name.assign("LBUBJHNSDCPWXSXQBPYXPJBUSFHSVEFENUVFKPPUEYRBFARNTOYNZKMQMHNHMDWWLEHAJRONEAJFTPLHOCKVJIJRYCISXNGUWZHHSEKUGFILRQLCJJQPIRGUPYIZKKPEMWWDYCVZURJDQNRCGXDVZGLYKTVXBTKTDKRMFVCGMGZVBLQVIOMIWWEFMNYVZBXDOQMTOSCCESJZLAAGQWGMURAOTAZGKIUXXADODLCLSXHWOAPQZQYAETIYTDOFBN");

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
    msg.setTimeStamp(0.425632248961);
    msg.setSource(2096U);
    msg.setSourceEntity(125U);
    msg.setDestination(2419U);
    msg.setDestinationEntity(165U);
    msg.name.assign("VLMTFJYJDJZUCMLSIJYQIZOOUTLYWGLWEPYPYJPAQEVWLLXKDZJQSBUBBUEZMVHKGOYMYOSDQQNRVKHUAZXVGQCXJEGADATNWJCPOEWDXKRNNGTTGVIXRMSJRQTOGWRHACZIXTFSEESNUFSUBRRIPPQAYFCFLATVISCAPZLLAMMHNOPGSXWFHJRFLAZ");

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
    msg.setTimeStamp(0.252093715609);
    msg.setSource(62273U);
    msg.setSourceEntity(121U);
    msg.setDestination(31060U);
    msg.setDestinationEntity(181U);
    msg.name.assign("NFSMPPOTRLYUVTVDAEUXWTRHUQCFZTNBERHJWCAGOWMTTFDXKZLXXBQMJVLJUKKNVGJVTLHDWSPYBKAAWIRUJDUWIPZWIUFCDIFZMKEXEVNGFPRNIBPGLCKFLIQPRBVBBOZHK");

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
    msg.setTimeStamp(0.29819140291);
    msg.setSource(57098U);
    msg.setSourceEntity(181U);
    msg.setDestination(24122U);
    msg.setDestinationEntity(211U);
    msg.name.assign("ITCVENWWZOBLDJHGXZGKGYTDBAEZPUQRUAYLQIXQKTAPMKIKVMAUNTSBBQRDRTOHQTLWVYMJYXNSXVUAZJLHAUSBIJLAKNGLVYFZEXKSVHDEJCUHTNMIJGUZCXHWERJPBAIYKPDQDDREAGJBDFTWIO");

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
    msg.setTimeStamp(0.983807775816);
    msg.setSource(49007U);
    msg.setSourceEntity(230U);
    msg.setDestination(3036U);
    msg.setDestinationEntity(31U);
    msg.name.assign("GMIQCKWWZQRIVOCKHNEAUXOFYPZNSJATAJHKQLARBWAAJHCKXQGWNLKGMSDFXCPWTVHVKPKXVPEQGJPMUWYOIOQJNIXMUOQLSDPSDHVDZAYSGQVMTJPIDVUMUZXAPUHIVTCFWRDLYPTOXGWNGIYKIC");

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
    msg.setTimeStamp(0.129544929997);
    msg.setSource(53994U);
    msg.setSourceEntity(89U);
    msg.setDestination(11916U);
    msg.setDestinationEntity(206U);
    msg.name.assign("DABOZXPNXMIVMIDUYOAVCLRNKGJLOWVKKRLIPEYBRLJKGGWZMTHPFAERZQYOVXLLAZZCURQTKIEQE");

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
    msg.setTimeStamp(0.720557608185);
    msg.setSource(36098U);
    msg.setSourceEntity(50U);
    msg.setDestination(3094U);
    msg.setDestinationEntity(188U);
    msg.type = 101U;
    msg.error.assign("JVJUOECJYZALFHADUNCQGISGPSOFICBHVSFELOFUNIDVUJNBBPPMHZZXYUEMAOCQGEWNLRKDUQZDAACMVXJYIBTPCRWLMSETHVBZXOKOWQAEBTPFLRSEQYPNGXIERVITDNQMXHGCAKCEKMWZTTLYDHYHFVYZQFBLQGOIZULXBWKHQRBDKCWKYKBNYA");

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
    msg.setTimeStamp(0.69372049644);
    msg.setSource(6917U);
    msg.setSourceEntity(126U);
    msg.setDestination(55337U);
    msg.setDestinationEntity(131U);
    msg.type = 50U;
    msg.error.assign("KPORFXBQOOLQMOKLPTDVVQZKUFCCVGYESTMFNRQPJHWZQVUUOMNBBDAAIKREECXQAQISXTHUKEHWZWFOITLSLJSZVJBRNVTNYMEMNCMNMSSBBUYWRXOUSBRUCEWNAATGLLYYEOSMHHAGZRCQWWHKQEGEEFIYDDJOPQVACWDMTYDBVYRZXOCHFGSKRWYZUDCMZJTFXJAIPTJGXPACDK");

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
    msg.setTimeStamp(0.362890010028);
    msg.setSource(35121U);
    msg.setSourceEntity(142U);
    msg.setDestination(14931U);
    msg.setDestinationEntity(90U);
    msg.type = 73U;
    msg.error.assign("GMSDZUXLSHKAOFQBXIANPXAPLQTSZJAKQFJCTJJFDJWPKDYWHBNLRWKRQXYZVWLZDNBUXNSVKVGOGXBCTISGJTZIBTLMMIBEUGEXVEOEVCHTORBMZGINLSPYHVNFUBLYGHBNVVQFCODYWKLNHFMYKUSHCYWERMACYRRNLAAWRXMVQXSPZUURD");

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
    msg.setTimeStamp(0.540479394165);
    msg.setSource(37240U);
    msg.setSourceEntity(243U);
    msg.setDestination(29814U);
    msg.setDestinationEntity(97U);
    msg.seq = 54154U;
    msg.sys_dst.assign("DNLZRWCGLXDSAQVKVWPGAFOYOVIRNASBWNTIHXAJFXHVREDLWJLRXXMMALRMPUTSISCCAQHKYHIGHRGFMDJVERHYYYUWTBGTXQFXIFQSDFEEMZZ");
    msg.flags = 191U;
    const char tmp_msg_0[] = {-5, 61, -51, -25, 22, 23, -96, 80, -104, -7, -51, -31, 51, -53, 105, 119, 46, -125, -21, -90, -23, 73, -12, -18, -121, -36, 54, 68, 38, 50, 11, 24, -1, -97, 75, -121, -37, -3, 74, 30, -96, -102, 32, -103, -53, 81, -90, -116, -3, 50, -88, -56, 122, -18, -82, 2, -70, -60, -45, 65, 113, 119, 70, -79, 112, 40, -57, 110, 64, -15, 74, -57, 115, -54, 74, 57, -15, 110, 70, 48, 96, -8, 115, -35, 56, -19, -37, -104, 39, -27, 71, 5, -4, 21, -78, -127, 28, -48, -47, 93, 49, -95, 119, -128, -98, -105, 111, 86, 97, -108, -112, 92, 123, -100, -28, 23, -14, -20, 100, 84, -30, 91, -40, -81, -45, -18, 105, -58, 2, -19, 116, -67, 60, 64, -34, 12, -126, -30, 109, -108, 78, -5, -82, 68, -27, 31, -111, 57, 125, -98, 72, 42, 115, -86, 124, 1, -40, 40, 99, -101, 13, 69, 13, -121, -26, 42, -24, 56, -86, -89, -114, -98, 53, 97, -92, -116, -119, -19, 107, 32, -23, 6, 86, 100, -18, 99, 78, -49, -100, 3, 70, 106, 15, 90, 95, -65, 32, 18, 6, -43, 31, -99, 106, -48, 85, 3, -70, -23, -58, -112, -113, 80, -59, 113, -54, -24, -83, 11, 125, 30, -50, 59, -99, -61, 94, -21, 81, -92, -94, 71, -79};
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
    msg.setTimeStamp(0.0553223361402);
    msg.setSource(6695U);
    msg.setSourceEntity(26U);
    msg.setDestination(8882U);
    msg.setDestinationEntity(195U);
    msg.seq = 38306U;
    msg.sys_dst.assign("LHFNEHCPMENIPKFCLPYWOEPAHXWQVVOXOCBTJBIRFUYOWKDELHKXUTCJTZRPIRXFVZQXAPHIMUJWVQWXFSBBMHEQCMZICSAAJDYIGXQ");
    msg.flags = 252U;
    const char tmp_msg_0[] = {104, -11, -30, -75, -13, 88, 116, 123, 98, -12, -121, 82, -119, -114, -29, -74, -1, -28, -41, 49, 3, 87};
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
    msg.setTimeStamp(0.259251859127);
    msg.setSource(12810U);
    msg.setSourceEntity(180U);
    msg.setDestination(11007U);
    msg.setDestinationEntity(244U);
    msg.seq = 2018U;
    msg.sys_dst.assign("XRKCFYGSQPFPRNDVCYLYMEGOGXCELZXYELWXXXLSIGAJUVOSWRTJJLBFJZBUKSFCFQCQFRGOUDQAWTNEOUAVAITBOFR");
    msg.flags = 221U;
    const char tmp_msg_0[] = {-103, 32, 63, 119, 60, 61, 82, -92, 42, -42, 102, 116, -62, 122, -35, 126, -86, 125, 120, 14, 88, -52, 100, -112, -64, -61, -71, -50, -34, 23, -31, -27, 97, -97, -17, 55, 125, -36, -76, 105, -19, 97, 69, 82, -34, 61, -45, 79, -70, 50, 84, 58, 55, 20, -77, 19, 3, 38, -60, -37, -35, -10, -57, -112, 47, 83, -56, -122, 90, 36, 37, 116, 95, -100, 61, -124, 107, -7, -59, 77, 34, -65, 113, -31, 13, 37, 79, 57, -5, -103, -52, 86, -110, -86, 104, -70, 121, -125, -48, 52, 55, 84, -76, -4, 44, 81, -73, -30, -92, -48, 96, -59, 20, 35, 116, -14, -31, -13, 53, -101, 36, 81, -79, -8, 46, 50, -32, -10, -90, -31, -122, 47, -65, -55, 108, -117, 85, -35, 15, -78, 124, -31, -114, -102, -123, -73, 80, -1, -113, -65, 126, -6, -108, -48, -38, -6, -64, -120, -99, -96, -21, -121};
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
    msg.setTimeStamp(0.0295839887435);
    msg.setSource(44342U);
    msg.setSourceEntity(195U);
    msg.setDestination(59736U);
    msg.setDestinationEntity(163U);
    msg.sys_src.assign("GAVXVEZFKHSIOGSPHIWZQCVQLCQVLJITRXULFBSESYBFOHWVTIJFRVAMSFQYLPWXOCAUNWTLTNYCDVJJQRVKAKBYCCZGMUTSEJWUSGIXKLUEPRBXHHLKGRYGKZFOUPVMGQBIYFJOHQDEHMLQMECRNADZOMCRFSIADJJGBNMSYTPDZPBONWZDUJEJHKZVGDQQXSINDXLCPWAXRZWYUKCINFHLENAKEB");
    msg.sys_dst.assign("QNVZPWGTPGTMIEPGLHDTCDOYHVNVITTNJRWTTEGUDYNNKUSYWMMQFUXXJUINIAOSTOEWGQQYODGLQSYCMHWDPLVLCQVKWHBKEKMSUBXWJXBPJOXCFWNFCATOBJYNUYARVKB");
    msg.flags = 144U;
    const char tmp_msg_0[] = {119, 75, 107, -110, -112, 7, -97, -70, 8, -76, -55, -34, 81, -106, -38, 16, 78, -85, -93, 47, 78, -14, 75, 83, -1, -65, 77, 48, -31, 55, -64, 35, 75, -125, -37, -122, -6, -109, 58, 53, 101, -81, -100, 83, 81, 37, 70, 56, -113, 20, 2, -123, -48, 32, 30, -33, 14, -80, 74, 17, -72, 116, 5, 33, -114, -102, -64, -40, 4, -7, 26, -95, -68, -65, -16, -61, 22, -21, 64, 34, -36, 37, -12, 78, 60, -124, 0, 109, 81, -50, -30, -98, -105, 98, -94, -60, -59, -89, -49, 64, 70, 114, -61, -19, -83, 54, -94, 14, -31, -115, 34, -77, 100, -47, -115, 52, -124, 94, 27, -26, -71, -67, 101, 92, 60, -108, -30, 69, -114, -79, -93, -5, 47, 104, -95, -79, 10, 70, 7, 48, 123, -66, 62, 39, 33, 98, -54, 54, 94, -17, -70, -43, -108, 59, 24, -60, 8, 36, 79, -94, 108, -52, 32, 24, -38, 21, -49, 85, -66, -62, -9, 50, -63, -15, -105, -8, -44, -105, 104, 103, 33, -114, -42, 126, 35, -48, -46, -43, -89, -99, 50, 12, 69, 15, 1, -51, 126, 28, -120, 98, -88, -96, -67, -105, 68, -126, -71, -23, 64, -10, -66, -101, 3, 56, -2, 19, 82, -116, -95, 126, 3, -62, -8, 106, 39, -100, -52, 28, 95, -2, 96, -99, -57, 81, -124, 46, 118, -65};
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
    msg.setTimeStamp(0.503712393061);
    msg.setSource(60135U);
    msg.setSourceEntity(126U);
    msg.setDestination(27159U);
    msg.setDestinationEntity(55U);
    msg.sys_src.assign("MBTRZRBIKXGEUOGQELPSSIWSYADKUUUZHJSDKZBBOPDPFUURTZHAJSIEXMKCAGURXCEKLQLNQCNVNRSTWESPE");
    msg.sys_dst.assign("EJVMLWNOZOHVECFHGYFSIYPTHBRLQBDBRGHWKXLCBROPFQYITZRXAOOMAFOFOCDWTPUDYOTYQHMAIYPCRLESMZPGVDQXLTATSSMONUDJQVUKLUPEWIXNJFNHGXQWQUEEKBLZHBKYAGTRUYBKPURIJCNQKDAWINCDWVF");
    msg.flags = 139U;
    const char tmp_msg_0[] = {-94, 123, -35, 32, -113, -29, 91, 18, -92, 61, -10, 92, 62, -86, -56, -125, 62, 117, -124, -3, -24, -14, 124, 18, 14, 123, -77, 39, 63, -31, 34, -30, -41, -13, 103, 59, -1, 26, 78, 77, -44, -108, 7, 15, 106, -13, 115, -9, 68, -76, 21, -29, 123, -112, 6, -13, -85, 47, 111, 85, 115, -29, 119, 61, 124, 35, -21, -99, -19, -13, 58, 49, 62, 5, -70, -71, -95, -15, -64, 38, -124, -66, 61, 9, -116, 5, -112, 108, 13, 57, -29, -57, 95, 92, 33, -47, 36, 17, -49, -73, -82, 73, 103, -82, -13, -127, 126, -3, 72, -84, 14, -50, -95, 59, -34, 62, -45, -85, 94, 77, -23, 95, -104, 44, 115, -28, -20, -96, -62, 80, -90, 30, 22, 1, -75, 69, 58, 1, 70, 68, -123, -52, -116, 78, -1, 58, 4, 124, 76, 34, -40, -50, -39, -88, 2, 79, -4, -67, -68, 100, -39, -106, -39, -54, 53, -104, 30, 29, 37, 10, 53, -32, -7, -98, 70, -44, 60, 86, 88, -118, -62, 85, 6, -128, 41, 116, -41, -42, -114, 33, 67, 2, -49, 44, 91, -25, 71, -82, 18, -80, 126, -50, -28, -91, -19, 59, 110, -101};
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
    msg.setTimeStamp(0.204895057016);
    msg.setSource(4284U);
    msg.setSourceEntity(232U);
    msg.setDestination(370U);
    msg.setDestinationEntity(116U);
    msg.sys_src.assign("LVWZJPUYZADKIWEVYMYOYYFY");
    msg.sys_dst.assign("SQSNFSHPEZQKWRNUNBGLFOZ");
    msg.flags = 60U;
    const char tmp_msg_0[] = {-105, -105, 99, 10, 85, 110, 105, 1, -125, 3, 70, 115, 42, 28, 97, 6, 100, -57, -32, -30};
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
    msg.setTimeStamp(0.383777554798);
    msg.setSource(38374U);
    msg.setSourceEntity(196U);
    msg.setDestination(54050U);
    msg.setDestinationEntity(96U);
    msg.seq = 36810U;
    msg.value = 166U;
    msg.error.assign("OJCIGPWKOYGBKVZKSIMJDDVDHEALOTVQWPHBIWZZIJMFMCBFDGWRUKMSQGHKORTTXHWJSDFBPLMZJAZROCGNQEAACQZTJEIJRUVKXNNLATRPMWDYLWWJKGSATMUBURHEKGEZCSGNSAZROECELVPIXYRYESMNLMPPYWAQCYAFKUFPSLBUZDIUNFNVCQGYFVGTJTITXOUNBBXHHOPPVBILMDQANSVCRYHBQXFFELULHU");

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
    msg.setTimeStamp(0.511352119988);
    msg.setSource(49669U);
    msg.setSourceEntity(90U);
    msg.setDestination(41563U);
    msg.setDestinationEntity(32U);
    msg.seq = 24214U;
    msg.value = 125U;
    msg.error.assign("FCYXSOSEVVPIMQTGVVFRCGDUUYNRBTXLUTCGNPRAJOUXBTCXMZRJJEZOKOANRRKQBQWZCAE");

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
    msg.setTimeStamp(0.876112571125);
    msg.setSource(33499U);
    msg.setSourceEntity(136U);
    msg.setDestination(11401U);
    msg.setDestinationEntity(45U);
    msg.seq = 38345U;
    msg.value = 42U;
    msg.error.assign("VCTYRRLPYZEEHUMFWTZQKTGALBKTJRGIV");

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
    msg.setTimeStamp(0.13298787393);
    msg.setSource(9248U);
    msg.setSourceEntity(111U);
    msg.setDestination(49447U);
    msg.setDestinationEntity(52U);
    msg.seq = 19329U;
    msg.sys.assign("AYRPSRMRFCOGOFDQOWKVPCCUPEBILRDZLUQTUKVJTSETNAMNIUSGEUIYWXEPYIGUBZWZXQBGYFRLOKSRGTIHNMOCIKGNAPCZZDZJLEJBBEHOFIUVTALFAHRVIADFPLGBIMDMVVVKHTLRJSJCXYUBWRTVKZHYNMDWNWXKXYDNOGKUPMBFQGSFJQJMSPLLQWTJHIOZSLMXFDOXHAYTPZDMENAAQXGRKYVQFHB");
    msg.value = 0.61274238989;

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
    msg.setTimeStamp(0.254585232625);
    msg.setSource(56267U);
    msg.setSourceEntity(112U);
    msg.setDestination(14765U);
    msg.setDestinationEntity(245U);
    msg.seq = 21813U;
    msg.sys.assign("VRIIZABLYFIDCOMDVLUGEVUUKPPVEHVRDEJPKRCREOLJZSAPXIYZJBNSJZXDFKCJNZKSGCOJEVIJMDSQLORBRQYOQLFNSOUKDFKSNNNTQZVYLUWLBFFYXAZUYKPKAHMEBNBBCQTNUPMQCSDFXYHQEDMPOIWEWGBMXWWDTGOCDGJKZHUJIVWROYJVEKRHQHGTRXFATATIMWIZAFIWNC");
    msg.value = 0.360466970073;

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
    msg.setTimeStamp(0.842313996315);
    msg.setSource(22610U);
    msg.setSourceEntity(35U);
    msg.setDestination(12081U);
    msg.setDestinationEntity(90U);
    msg.seq = 20407U;
    msg.sys.assign("NNJULLSNSEZBACMXQGFQXPTKHHPGBTEQSMRIOTXEDFNUR");
    msg.value = 0.79964780585;

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
    msg.setTimeStamp(0.622400958948);
    msg.setSource(1290U);
    msg.setSourceEntity(224U);
    msg.setDestination(42598U);
    msg.setDestinationEntity(179U);
    msg.action = 62U;
    msg.longain = 0.741463080986;
    msg.latgain = 0.313025523552;
    msg.bondthick = 219045119U;
    msg.leadgain = 0.948469599693;
    msg.deconflgain = 0.910674852953;

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
    msg.setTimeStamp(0.0212278895475);
    msg.setSource(54129U);
    msg.setSourceEntity(134U);
    msg.setDestination(11937U);
    msg.setDestinationEntity(49U);
    msg.action = 231U;
    msg.longain = 0.426873460201;
    msg.latgain = 0.927921460388;
    msg.bondthick = 2522654079U;
    msg.leadgain = 0.0744406543036;
    msg.deconflgain = 0.692233607802;

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
    msg.setTimeStamp(0.969222109814);
    msg.setSource(23291U);
    msg.setSourceEntity(165U);
    msg.setDestination(31242U);
    msg.setDestinationEntity(233U);
    msg.action = 110U;
    msg.longain = 0.892466206389;
    msg.latgain = 0.582194933003;
    msg.bondthick = 3525810004U;
    msg.leadgain = 0.473652380978;
    msg.deconflgain = 0.309943237305;

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
    msg.setTimeStamp(0.366852672036);
    msg.setSource(20670U);
    msg.setSourceEntity(80U);
    msg.setDestination(41475U);
    msg.setDestinationEntity(77U);
    msg.err_mean = 0.895606618683;
    msg.dist_min_abs = 0.692048108386;
    msg.dist_min_mean = 0.148670932347;

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
    msg.setTimeStamp(0.158771978816);
    msg.setSource(63593U);
    msg.setSourceEntity(222U);
    msg.setDestination(13265U);
    msg.setDestinationEntity(158U);
    msg.err_mean = 0.0885623470476;
    msg.dist_min_abs = 0.542610222348;
    msg.dist_min_mean = 0.347251592863;

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
    msg.setTimeStamp(0.134608707909);
    msg.setSource(45634U);
    msg.setSourceEntity(123U);
    msg.setDestination(51092U);
    msg.setDestinationEntity(104U);
    msg.err_mean = 0.730219392145;
    msg.dist_min_abs = 0.481968453246;
    msg.dist_min_mean = 0.539519765693;

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
    msg.setTimeStamp(0.520128445655);
    msg.setSource(63988U);
    msg.setSourceEntity(49U);
    msg.setDestination(35622U);
    msg.setDestinationEntity(160U);
    msg.action = 102U;
    msg.lon_gain = 0.700864347772;
    msg.lat_gain = 0.279035927221;
    msg.bond_thick = 0.524664100307;
    msg.lead_gain = 0.989426417616;
    msg.deconfl_gain = 0.384229855863;
    msg.accel_switch_gain = 0.472606393071;
    msg.safe_dist = 0.930956039486;
    msg.deconflict_offset = 0.665235774644;
    msg.accel_safe_margin = 0.903164599195;
    msg.accel_lim_x = 0.660434206868;

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
    msg.setTimeStamp(0.705491847139);
    msg.setSource(2305U);
    msg.setSourceEntity(208U);
    msg.setDestination(1587U);
    msg.setDestinationEntity(200U);
    msg.action = 148U;
    msg.lon_gain = 0.322363468189;
    msg.lat_gain = 0.313357084084;
    msg.bond_thick = 0.666230406321;
    msg.lead_gain = 0.258479914111;
    msg.deconfl_gain = 0.148522793713;
    msg.accel_switch_gain = 0.293569033477;
    msg.safe_dist = 0.250823922444;
    msg.deconflict_offset = 0.353442790963;
    msg.accel_safe_margin = 0.15363874459;
    msg.accel_lim_x = 0.629522207506;

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
    msg.setTimeStamp(0.236735168617);
    msg.setSource(37691U);
    msg.setSourceEntity(102U);
    msg.setDestination(15373U);
    msg.setDestinationEntity(61U);
    msg.action = 201U;
    msg.lon_gain = 0.549931098046;
    msg.lat_gain = 0.228223668774;
    msg.bond_thick = 0.278692773991;
    msg.lead_gain = 0.67496237873;
    msg.deconfl_gain = 0.306044540482;
    msg.accel_switch_gain = 0.105996062135;
    msg.safe_dist = 0.235130409291;
    msg.deconflict_offset = 0.861911275425;
    msg.accel_safe_margin = 0.537767783972;
    msg.accel_lim_x = 0.606748638394;

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
    msg.setTimeStamp(0.276663045834);
    msg.setSource(48710U);
    msg.setSourceEntity(139U);
    msg.setDestination(61974U);
    msg.setDestinationEntity(117U);
    msg.type = 127U;
    msg.op = 209U;
    msg.err_mean = 0.649875827979;
    msg.dist_min_abs = 0.399009079723;
    msg.dist_min_mean = 0.215682232805;
    msg.roll_rate_mean = 0.57902991941;
    msg.time = 0.596922521426;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 240U;
    tmp_msg_0.lon_gain = 0.647611690522;
    tmp_msg_0.lat_gain = 0.620422541123;
    tmp_msg_0.bond_thick = 0.905099347545;
    tmp_msg_0.lead_gain = 0.64547958012;
    tmp_msg_0.deconfl_gain = 0.824372220889;
    tmp_msg_0.accel_switch_gain = 0.967713569906;
    tmp_msg_0.safe_dist = 0.44427709002;
    tmp_msg_0.deconflict_offset = 0.359226907772;
    tmp_msg_0.accel_safe_margin = 0.249307000683;
    tmp_msg_0.accel_lim_x = 0.882636659277;
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
    msg.setTimeStamp(0.466783506907);
    msg.setSource(10840U);
    msg.setSourceEntity(253U);
    msg.setDestination(47991U);
    msg.setDestinationEntity(215U);
    msg.type = 50U;
    msg.op = 189U;
    msg.err_mean = 0.121510776771;
    msg.dist_min_abs = 0.662546672668;
    msg.dist_min_mean = 0.716879302754;
    msg.roll_rate_mean = 0.928323808287;
    msg.time = 0.225426660681;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 49U;
    tmp_msg_0.lon_gain = 0.308162927768;
    tmp_msg_0.lat_gain = 0.042933964896;
    tmp_msg_0.bond_thick = 0.175151031391;
    tmp_msg_0.lead_gain = 0.445021107385;
    tmp_msg_0.deconfl_gain = 0.589935433354;
    tmp_msg_0.accel_switch_gain = 0.990393599984;
    tmp_msg_0.safe_dist = 0.241321557718;
    tmp_msg_0.deconflict_offset = 0.0340793598407;
    tmp_msg_0.accel_safe_margin = 0.426055169655;
    tmp_msg_0.accel_lim_x = 0.281434983036;
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
    msg.setTimeStamp(0.709927742315);
    msg.setSource(23980U);
    msg.setSourceEntity(94U);
    msg.setDestination(13390U);
    msg.setDestinationEntity(125U);
    msg.type = 195U;
    msg.op = 171U;
    msg.err_mean = 0.744188297155;
    msg.dist_min_abs = 0.52416547754;
    msg.dist_min_mean = 0.121525699805;
    msg.roll_rate_mean = 0.810366111105;
    msg.time = 0.617007912152;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 31U;
    tmp_msg_0.lon_gain = 0.650048875799;
    tmp_msg_0.lat_gain = 0.327860007831;
    tmp_msg_0.bond_thick = 0.539010810781;
    tmp_msg_0.lead_gain = 0.857161442522;
    tmp_msg_0.deconfl_gain = 0.206550280947;
    tmp_msg_0.accel_switch_gain = 0.790380421604;
    tmp_msg_0.safe_dist = 0.811994073115;
    tmp_msg_0.deconflict_offset = 0.22920008202;
    tmp_msg_0.accel_safe_margin = 0.93817916129;
    tmp_msg_0.accel_lim_x = 0.592237804459;
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
    msg.setTimeStamp(0.301963592681);
    msg.setSource(16225U);
    msg.setSourceEntity(146U);
    msg.setDestination(40289U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.155105221878;
    msg.lon = 0.96163726925;
    msg.eta = 4129229375U;
    msg.duration = 48469U;

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
    msg.setTimeStamp(0.985959380993);
    msg.setSource(48086U);
    msg.setSourceEntity(227U);
    msg.setDestination(56236U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.23715662548;
    msg.lon = 0.711974838815;
    msg.eta = 982221833U;
    msg.duration = 33037U;

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
    msg.setTimeStamp(0.98723824871);
    msg.setSource(20836U);
    msg.setSourceEntity(187U);
    msg.setDestination(50222U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.518917894358;
    msg.lon = 0.699358258129;
    msg.eta = 1887339183U;
    msg.duration = 37431U;

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
    msg.setTimeStamp(0.306960021275);
    msg.setSource(41790U);
    msg.setSourceEntity(201U);
    msg.setDestination(50815U);
    msg.setDestinationEntity(175U);
    msg.plan_id = 7367U;

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
    msg.setTimeStamp(0.192850957791);
    msg.setSource(46834U);
    msg.setSourceEntity(235U);
    msg.setDestination(60146U);
    msg.setDestinationEntity(32U);
    msg.plan_id = 64143U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.105041300452;
    tmp_msg_0.lon = 0.375743795311;
    tmp_msg_0.eta = 3005739283U;
    tmp_msg_0.duration = 2241U;
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
    msg.setTimeStamp(0.480802025087);
    msg.setSource(28098U);
    msg.setSourceEntity(213U);
    msg.setDestination(63319U);
    msg.setDestinationEntity(95U);
    msg.plan_id = 17342U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.989745186666;
    tmp_msg_0.lon = 0.0922119329615;
    tmp_msg_0.eta = 3074279849U;
    tmp_msg_0.duration = 50602U;
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
    msg.setTimeStamp(0.000126660776578);
    msg.setSource(28699U);
    msg.setSourceEntity(214U);
    msg.setDestination(62534U);
    msg.setDestinationEntity(38U);
    msg.type = 212U;
    msg.command = 207U;
    msg.settings.assign("FCMDCUIPZMJLVOYKMDSMDYVWRVKBQFDBMFKCAACICEAWWCAGPDOHUYYRAUGPSJQFBRENXCN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 25670U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NMIIICPGITCFGKPZYGEWOJNUTXLSECNLBBXDBMUXRRRONIFDKDXVMEEIRDZYFGFDNASBJSYQOHQCMAWRYMBHUUPGPLEGMLWYDJQHFHPYUWDHZLZPPJSLRZUHTNWSRVZQOOPTMVOONWEBXNGEAKTKEVDHQZJJXIBCFTRJMG");

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
    msg.setTimeStamp(0.0519249052648);
    msg.setSource(43305U);
    msg.setSourceEntity(23U);
    msg.setDestination(13773U);
    msg.setDestinationEntity(237U);
    msg.type = 220U;
    msg.command = 184U;
    msg.settings.assign("HFMIOQZVDSNJGVPTOXTCPYEYTOPQHTKPZFMTPEZDJCKFGCWRNECYPQMHVJRAFEHVJLSPSOBURDUQCUIDLIZAMMWSPXXOEFJBZBKNCWAKGVRCEROQOLMWBGJJNVSGIJHYYGGAUPBHNRYBUFWVXWBDITNDMKFIGHSZLCUVYLXZPWTRYXLKQAMSJNIUBZDMSNKWXKLMQIQSBHNUBUHYQDTZFZAAXAWJECVNSQGR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 38113U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DNYKHJNFKBZGQQPMNWLTDSVCYEUBKHTPPVNZLBXYAAGDZFAITRHSFKYOCEMXDGFJXQCBYPERZIWPRVHZFEGEIAWFYIUECXVMESQBQFLRQQTPUXTAOBOWZKMOQCLXPVEIFA");

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
    msg.setTimeStamp(0.755743674264);
    msg.setSource(40038U);
    msg.setSourceEntity(223U);
    msg.setDestination(28903U);
    msg.setDestinationEntity(92U);
    msg.type = 50U;
    msg.command = 228U;
    msg.settings.assign("LCJPJLESDGUYLQNEYAUVJBGACRKHRHKBGKKDQDOKRONRETPZQSFPFAKUVJOJPMIEFNMZOOKVKTUGQOXSQAMGQPAIACMMDVJJCOJMYUGPIUTRRZTPHHMYSGDHHYFTMUWXYXQYTAKYVIXNNWSXQRXQZB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 30144U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.527899671279;
    tmp_tmp_msg_0_0.lon = 0.16073710267;
    tmp_tmp_msg_0_0.eta = 1245398120U;
    tmp_tmp_msg_0_0.duration = 25224U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KGQXOXYVCJTIQCGMSXISULMYNINBKHIQDDEYGADNPZDOXQCRRDRIJJNSFYLMUUSNDEEHUZBEELBTLEKDQWBJPOBBKPBAVOWZIVPHHDSONQFEPWPZMVBOMAFT");

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
    msg.setTimeStamp(0.56116977001);
    msg.setSource(20766U);
    msg.setSourceEntity(233U);
    msg.setDestination(28415U);
    msg.setDestinationEntity(108U);
    msg.state = 52U;
    msg.plan_id = 52538U;
    msg.wpt_id = 104U;
    msg.settings_chk = 31002U;

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
    msg.setTimeStamp(0.517721888502);
    msg.setSource(7174U);
    msg.setSourceEntity(219U);
    msg.setDestination(10594U);
    msg.setDestinationEntity(148U);
    msg.state = 25U;
    msg.plan_id = 35724U;
    msg.wpt_id = 41U;
    msg.settings_chk = 15612U;

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
    msg.setTimeStamp(0.910324539624);
    msg.setSource(26199U);
    msg.setSourceEntity(249U);
    msg.setDestination(51037U);
    msg.setDestinationEntity(252U);
    msg.state = 108U;
    msg.plan_id = 1673U;
    msg.wpt_id = 198U;
    msg.settings_chk = 27371U;

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
    msg.setTimeStamp(0.215573959729);
    msg.setSource(11083U);
    msg.setSourceEntity(7U);
    msg.setDestination(16886U);
    msg.setDestinationEntity(24U);
    msg.uid = 2U;
    msg.frag_number = 40U;
    msg.num_frags = 61U;
    const char tmp_msg_0[] = {-125, 20, 43, -109, 115, 62, 104, 83, -29, -96, -71, 29, 37, 94, -52, -51, 11, -35, -66, -115, 89, 89, 65, -32, 13, 84, 99, -42, 84, -21, 116, 7, -40, -45, 118, -39, 24, 93, 73, 3, -99, -3, -27, -116, 49, 55, 59, -122, -99, -55, -95, -104, 125, -108, -94, -105, -2, -1, -24, -27, -53, 12, -59, -29, -113, -74, 22, 84, 89, -92, -102, 52, 123, -93, 1, -52, -45, -78, -74, 16, -65, -50, 81, 7, -105, 81, -109, 20, -43, -88, 1, 60, 24, 94, 49, 76, 7, -99, -8, 101};
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
    msg.setTimeStamp(0.386623362516);
    msg.setSource(64459U);
    msg.setSourceEntity(218U);
    msg.setDestination(7900U);
    msg.setDestinationEntity(160U);
    msg.uid = 193U;
    msg.frag_number = 41U;
    msg.num_frags = 101U;
    const char tmp_msg_0[] = {-113, -48, -48, -123, -36, 10, -46, -35, -85, 22, 29, 13, 34, -21, -9, 102, 116, 81, 66, -3, 3, 30, 88, 21, 49, 24, 119, -112, 47, -51, 101, -12, -115, -128, 95, 58, -76, 116, -43, -61, 54, 47, 71, -56, 5, 87, -59, 23, -101, 55, 48, 33, -60, -77, -50, 43, 30, -47, 27, -71, 109, -75, 22, 32, 70, -32, 49, -62, -7, -126, -23, -11, 55, 36, -107, 45, 58, 13, 15, -110, 31, -119, -22, -128, 80, 28, -98, 62, -27, -83, -56, 28, -82, -64, 67, 73, -124, 56, 42, 35, 64, 50, 117, 104, -49, -117, -59, -107, 79, 30, 11, 22, 30, -13, 21, 10, -125, -40, 68, 90, 69, 5, 29, 52, 32, -58, 43, 13, -1, 68, 4, 70, 24, 62, 5, 117, 111, 69, 32, 98, -34, -81, 119, 80, -108, 8, -67, 114, -91, 121, 39, -104, 22, -3, -79, 94, -40, -11, -18, -33, -13, -33, -87, -115, -78, -26, 79, -40, -34, -43, -2, -69, -66, -35, 76, -51, -46, 108, 113, -81, -108, -14, 87, 123, 88, 38, -61, -83, 64, -120, -29, -49, -64, 90, 40, 89, -74, 86, 87, -114, 46, -39, 53, 26, -107, -62, -86, -65, 86, -93, -108, 100, -22, 23, 54, -71, 124, 57, -101};
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
    msg.setTimeStamp(0.291784329635);
    msg.setSource(33194U);
    msg.setSourceEntity(253U);
    msg.setDestination(26357U);
    msg.setDestinationEntity(104U);
    msg.uid = 36U;
    msg.frag_number = 168U;
    msg.num_frags = 128U;
    const char tmp_msg_0[] = {-91, 58, 87, -56, 38, -103, -81, -67, 73, -102, 4, -30, -53, -60, -24, -83, 104, 93, -52, -80, 69, -123, -95, -26, -89, 68, 69, 59, 35, -42, -55, -28, -63, -122, -93, -76, 106, -33, 86, -122, -117, 20, -104, -71, -99, -79, 97, -19, -70, 104, -88, 9, 105, 112, -17, 49, 115, -86, -120, 103, -29, -109, -107, 13, 86, 2, 51, -50, -77, -59, 13, 90, -107, -111, 84, 96, 109, -111, 36, -73, 64, 43, -14, 81, -54, 3, 53, -5, 121, -96, 54, 104, -29, 37, -78, 109, 114, 95, 123, 28, -66, 39, 2, -88, 4, -8, 10, 88, 27, 55, -99, -93, -34, -20, 112, 10, -33, -49, 57, 85, -69, -50, 69, 62, 100, 64, 9, -36, -125, 71, 54, 17, 24, 60, -32, -24, -53, -11, 103, -73, 121, 102, -83, -94, -23, -46, -29, -58, -82, -113, -108, -13, -9, 20, -103, 97, -25, -104, -33, 111, -85, 12, -112, -50, 122, 45, -43, -41, -36, 20, -47, -34, -95, 69, 4, 34, -27, -23, -124, 54, 107, 103, -75, 21, -26, -116, -103, 26, -128, 104, 40, -31, -92, 82, 58, 99, 25, 47, 77, -115, -18, -64, -64, -52, -10, -115, 40, -12, -34, 114, 78, -41, 53, -124, 46, -54, 87, -90, -81, 105, 30, 37, -46, -20, -75, 92, 18, -42, -69, -84, 36, 20, 106, 116, 19, -71, 25, -108, 45, 2, -95, 52, 60, -63, -21, -55, 27, 81, 43, -70, 120};
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
    msg.setTimeStamp(0.857188585759);
    msg.setSource(30900U);
    msg.setSourceEntity(130U);
    msg.setDestination(39884U);
    msg.setDestinationEntity(197U);
    msg.content_type.assign("JZJANYZIIJEOVHJZRXJJPWADRIMNWOIYVLDUVHUUBTQHCSNJRLOXKWDKVQXYNCNUDQBRIUDRDJZQOSXJYFAYFKQVLAFKTVFAHEHUXVALLHPBPXVGLTNIWRWCNELGKNHTYUCNFGEXRFZOKZYQFGMBOXCXBVPUFRCOKPAACYMGTBDUQPBZ");
    const char tmp_msg_0[] = {-7, -53, -31, 84, 62, -108, 56, 68, -27, 118, 120, -103, 2, -17, -19, -33, -55, -80, -100, 66, -25, 23, 123, 63, 85, 55, -117, 47, -115, -11, 14, 39, -109, 73, 86, 59, -98, 42, -72, -49, -34, 121, -108, 83, -18, 17, -14, 60, -5, 48, 49, -124, 52, -75, 88, -66, 33, 63, -64, -74, -118, -62, 88, -111, -28, -52, -71, 88, -42, 125, 39, 30, 38, 27, -83, -1, 93, -36, -124, -7, 117, 9, 31, -11, -105, -5, 51, -95, 23, 22, 126, 75, -15, -121};
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
    msg.setTimeStamp(0.58476365608);
    msg.setSource(23634U);
    msg.setSourceEntity(79U);
    msg.setDestination(58051U);
    msg.setDestinationEntity(116U);
    msg.content_type.assign("FMBXSDUOTQJSPJGSFKJIVNBTBPKFUUNDRCPYRZPHJAAFRIFMGDCXNOUJBATFWTVBXNGLDOKXOEHYNOWCLKDXYIUMWIFIUDQCADGQRNCFFXCFMEAALWLKSDISOZSYVAVHIKBVWRSZVRMGKUXRVOGTNZPZNHZNBJYQREVUCAMEBZKHJLYTJYLRPVSQWZMEXGSZTCEKECGLWJTMUIQWEXZOPAXNQHCOVWQABRDHYGMPQILOHEK");
    const char tmp_msg_0[] = {82, 24, 126, 59, -40, -105, 26, 117, 111, 20, 18, -49, -55, 76, -95, 66, -41, 34, -100, -69, -70, 66, -34, 116, 13, -104, -17, -126, -52, -74, 107, 99, -65, -10, 72};
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
    msg.setTimeStamp(0.386741274002);
    msg.setSource(56021U);
    msg.setSourceEntity(24U);
    msg.setDestination(58656U);
    msg.setDestinationEntity(195U);
    msg.content_type.assign("FFJWANTSCNYPXQYYOTHTWPZRHJGJPQZSLJWWZHLBIENWUDGITSRCRJALQKZOYFIEKENEYHSILCHWAFNULCZKPZXPMBQSQMJNFVQDMGOAXNRMPBXQJWDAYHDCTQSQXKETOFOGYBCJMXATUUWAXEAZGKHMCZUVKHIPEEVEGYBOOERIVLBDKHMPNIYIJJOXSVMARKRMZSPZUABCCTVBIRVTKUDWDCBXKQLDDRVDPBGFTNNXGYUOLROSFVSGVUFU");
    const char tmp_msg_0[] = {112, -63, -81, 114, -72, -94, 97, 72, 118, 103, 72, 38, 60, -111, -8, -50, 96, 71, 115, -30, 66, -66, -100, 46, 100, 99, 122, 45, 93, -30, 67, 75, 77, 7, -67, -97, -98, -70, -60, 98, 84, 0, 0, -109, -126, 40, 12, -101, -91, -92, 120, -42, 86, -98, -74, -84, 71, 47, 67, -99, -73, -35, 70, -65, -81, -6, -113, 7, 48, -97, -21, -46, 68, -33, -71, 38, 34, 20, -71, -26, 111, 93, -49, -8, 98, 117, 104, -80, 24, -115, -67, -105, -115, -63, 107, 89, -18, 97, 52, 91, -124, 6, -64, -71, 10, 38, 25, 85, -58, 48, -103, -124, 13, -128};
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
    msg.setTimeStamp(0.0253284818883);
    msg.setSource(64312U);
    msg.setSourceEntity(186U);
    msg.setDestination(17106U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.940895066977);
    msg.setSource(20620U);
    msg.setSourceEntity(74U);
    msg.setDestination(17349U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.0392879353722);
    msg.setSource(12240U);
    msg.setSourceEntity(97U);
    msg.setDestination(56522U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.638843277909);
    msg.setSource(19584U);
    msg.setSourceEntity(169U);
    msg.setDestination(47440U);
    msg.setDestinationEntity(161U);
    msg.target = 19197U;
    msg.bearing = 0.0959344710264;
    msg.elevation = 0.263434848936;

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
    msg.setTimeStamp(0.884507394747);
    msg.setSource(13001U);
    msg.setSourceEntity(84U);
    msg.setDestination(41749U);
    msg.setDestinationEntity(83U);
    msg.target = 28363U;
    msg.bearing = 0.621340880601;
    msg.elevation = 0.49232975851;

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
    msg.setTimeStamp(0.698009905079);
    msg.setSource(58137U);
    msg.setSourceEntity(54U);
    msg.setDestination(33483U);
    msg.setDestinationEntity(30U);
    msg.target = 51465U;
    msg.bearing = 0.898817328623;
    msg.elevation = 0.201941860648;

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
    msg.setTimeStamp(0.533314228378);
    msg.setSource(13764U);
    msg.setSourceEntity(111U);
    msg.setDestination(31785U);
    msg.setDestinationEntity(46U);
    msg.target = 28869U;
    msg.x = 0.903334979322;
    msg.y = 0.318975297276;
    msg.z = 0.931912751888;

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
    msg.setTimeStamp(0.220077482917);
    msg.setSource(22023U);
    msg.setSourceEntity(158U);
    msg.setDestination(21669U);
    msg.setDestinationEntity(153U);
    msg.target = 57341U;
    msg.x = 0.657000527747;
    msg.y = 0.90294033284;
    msg.z = 0.0903160510184;

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
    msg.setTimeStamp(0.797213435555);
    msg.setSource(58146U);
    msg.setSourceEntity(65U);
    msg.setDestination(17664U);
    msg.setDestinationEntity(189U);
    msg.target = 34378U;
    msg.x = 0.590796483148;
    msg.y = 0.916816259457;
    msg.z = 0.128090087376;

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
    msg.setTimeStamp(0.327724860769);
    msg.setSource(2901U);
    msg.setSourceEntity(127U);
    msg.setDestination(44937U);
    msg.setDestinationEntity(62U);
    msg.target = 13872U;
    msg.lat = 0.444788022841;
    msg.lon = 0.148908548621;
    msg.z_units = 181U;
    msg.z = 0.495964393796;

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
    msg.setTimeStamp(0.590390997569);
    msg.setSource(31252U);
    msg.setSourceEntity(101U);
    msg.setDestination(16104U);
    msg.setDestinationEntity(118U);
    msg.target = 57725U;
    msg.lat = 0.111914212442;
    msg.lon = 0.505934890293;
    msg.z_units = 14U;
    msg.z = 0.997011211293;

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
    msg.setTimeStamp(0.585673896578);
    msg.setSource(25287U);
    msg.setSourceEntity(239U);
    msg.setDestination(38235U);
    msg.setDestinationEntity(2U);
    msg.target = 161U;
    msg.lat = 0.950384084374;
    msg.lon = 0.110900721993;
    msg.z_units = 162U;
    msg.z = 0.264071910034;

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
    msg.setTimeStamp(0.670028294985);
    msg.setSource(2827U);
    msg.setSourceEntity(149U);
    msg.setDestination(45721U);
    msg.setDestinationEntity(53U);
    msg.locale.assign("SGKRXEOBSVBGESSLTJNDUBKNVECPSGQNCJMWNTXIQVIVJYFRQLPIDMXYRLZPRUBSZIUURLJTDDOMXYSGMRKOFWUVZRTGWMPUZAOZLDRLPHRBEQPNPVUXVSHYDSBNFGLZHADALGXULYWC");
    const char tmp_msg_0[] = {-12, 20, 76, 100, 54, 45, -24, -16, -89, 108, -128, 19, -49, 53, -4, 99, -81, -40, -65, 108, 42, -90, 46, 52, 120, 113, 59, 36, -46, 104, 29, -61, -126, 29, 32, -30, 16, 45, -80, -47, -105, 29, 94, -90, 75, -71, -55, -83, -47, -6, 39, 4, 91, -99, -49, -75, 75, 31, -29, -77, 97, -48, 64, -82, 78, -34, 46, -109, 107, 44, 116, 123, -3, 123, 96, 42, 89, 50, 61, 101, -110, -48, 78, -77, 65, -24, -14, 35, -17, -87, -126, -9, -11, -50, 38, 44, 95, -101, -43, -32, 105, 120, -46, -14, -56, 118, -19, 29, -40, 64, 117, -126, 118, -127, -13, -72, -89, -91, -77, -34, -56, 38, 113, -30, 54, -31, 23, 62, -90, -93, -97, -36, -91, 60, -111, -82, -83, -74, -18, -27, 37, -117, -65, -11, -90, 69};
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
    msg.setTimeStamp(0.405867590119);
    msg.setSource(34892U);
    msg.setSourceEntity(78U);
    msg.setDestination(44087U);
    msg.setDestinationEntity(133U);
    msg.locale.assign("WLWPTMJJNXZVUEZIDFCAQWRTINQEBKFKZSRYHIRHKXRACBUUYFPICHMHAWTSAFSTFOWQWKBTFYTVOPJZQJODDRUPUNKPEVGNLPZRXTNXMXTNCRKTXMLINKCNAUYFOHVLWGEBMRYCLIBHPBWAOBGPIDZHLWUNLEVZKFHCBSVJGEDGAQVLLGSQBT");
    const char tmp_msg_0[] = {11, 125, -46, -5, 77, 93, 0, 57, 8, -22, 99, -8, -22, 117, 8, -101, 93, -42, 88, -74, -100, -119, 90, 125, -34, 24, -103, 22, 57, 100, 69, -95, -97, -4, 102, -97, -28, 69, 29, 58, 110, 41, 32, 50, 5, 36, -35, 72, -92, -14, -90, -22, -102, 78, -102, 105, 100, -75, -102, 12, 8, -19, 15, -24, -49, -43, -108, -8, 89, 13, -104, 65, -6, 65, -11, 98, 73, 63, 111, -22, -73, -107, -81, -78, -16, -81, -15, -72, 104, 62, -108, 76, -3, -98, 111, 43, 90, -102, -46, -37, 20, 14, 26, 12, 57, -30, 21, 104, -29, -88, -16, -71, -46, 117, 54, 2, -70, -81, 45, 95, 47, -126, 36, 108, 39, -28, -119, -85, -11, -55, 28, 16, 5, -67, -109, -59, -6, 75, -35, 27, -15, -2, -100, -64, 64, -1, 94, 3, -31, -103, -53, 76, -55, 117, 2, -2, 64, 115, 49, -17, -87, -22, 63, -58, 70, 67, 18};
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
    msg.setTimeStamp(0.756968413637);
    msg.setSource(41545U);
    msg.setSourceEntity(44U);
    msg.setDestination(32986U);
    msg.setDestinationEntity(223U);
    msg.locale.assign("DDMCNKWNCIYRBSJVQEEAWZVVTIHWPPLLXOCRDGYZORYGCBMCVBHZXODNZAIVWLZPUPBGOYFXXIWXFXQRAEYTBCGGFGUEDFYWATT");
    const char tmp_msg_0[] = {50, -112, 78, 18, -87, -39, -56, -24, -99, -31, -8, -124, -58, -22, -32, -28, -88, 29, -77, -77, -95};
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
    msg.setTimeStamp(0.511104479954);
    msg.setSource(59903U);
    msg.setSourceEntity(89U);
    msg.setDestination(49838U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.998161596266);
    msg.setSource(8673U);
    msg.setSourceEntity(107U);
    msg.setDestination(23443U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.0619545951616);
    msg.setSource(29762U);
    msg.setSourceEntity(25U);
    msg.setDestination(8119U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.29569226802);
    msg.setSource(50853U);
    msg.setSourceEntity(240U);
    msg.setDestination(12313U);
    msg.setDestinationEntity(7U);
    msg.camid = 170U;
    msg.x = 1444U;
    msg.y = 14242U;

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
    msg.setTimeStamp(0.664863086835);
    msg.setSource(54425U);
    msg.setSourceEntity(33U);
    msg.setDestination(46808U);
    msg.setDestinationEntity(220U);
    msg.camid = 193U;
    msg.x = 44672U;
    msg.y = 36186U;

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
    msg.setTimeStamp(0.89382638783);
    msg.setSource(34676U);
    msg.setSourceEntity(88U);
    msg.setDestination(18777U);
    msg.setDestinationEntity(120U);
    msg.camid = 191U;
    msg.x = 19373U;
    msg.y = 9129U;

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
    msg.setTimeStamp(0.0157153096843);
    msg.setSource(53881U);
    msg.setSourceEntity(16U);
    msg.setDestination(22504U);
    msg.setDestinationEntity(133U);
    msg.camid = 12U;
    msg.x = 60626U;
    msg.y = 8982U;

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
    msg.setTimeStamp(0.369789668486);
    msg.setSource(51914U);
    msg.setSourceEntity(80U);
    msg.setDestination(43567U);
    msg.setDestinationEntity(79U);
    msg.camid = 140U;
    msg.x = 57905U;
    msg.y = 29039U;

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
    msg.setTimeStamp(0.0642310877387);
    msg.setSource(62966U);
    msg.setSourceEntity(201U);
    msg.setDestination(1357U);
    msg.setDestinationEntity(120U);
    msg.camid = 31U;
    msg.x = 33467U;
    msg.y = 35942U;

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
    msg.setTimeStamp(0.195453596491);
    msg.setSource(47407U);
    msg.setSourceEntity(209U);
    msg.setDestination(45696U);
    msg.setDestinationEntity(41U);
    msg.tracking = 65U;
    msg.lat = 0.820328167581;
    msg.lon = 0.47327940752;
    msg.x = 0.365090028533;
    msg.y = 0.668708467968;
    msg.z = 0.315232872372;

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
    msg.setTimeStamp(0.891221227497);
    msg.setSource(11854U);
    msg.setSourceEntity(14U);
    msg.setDestination(25021U);
    msg.setDestinationEntity(141U);
    msg.tracking = 75U;
    msg.lat = 0.642726660299;
    msg.lon = 0.231483128826;
    msg.x = 0.929065992328;
    msg.y = 0.312875049196;
    msg.z = 0.464500479837;

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
    msg.setTimeStamp(0.21971672475);
    msg.setSource(55755U);
    msg.setSourceEntity(75U);
    msg.setDestination(19937U);
    msg.setDestinationEntity(109U);
    msg.tracking = 155U;
    msg.lat = 0.548580535426;
    msg.lon = 0.927884399163;
    msg.x = 0.272886083051;
    msg.y = 0.372896347187;
    msg.z = 0.0223522167916;

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
    msg.setTimeStamp(0.262943194172);
    msg.setSource(40664U);
    msg.setSourceEntity(45U);
    msg.setDestination(63013U);
    msg.setDestinationEntity(249U);
    msg.target.assign("GBQRVICDZLUECKTQYYBHDZIL");
    msg.lbearing = 0.261777970727;
    msg.lelevation = 0.635627835065;
    msg.bearing = 0.658080898381;
    msg.elevation = 0.741358609577;
    msg.phi = 0.411626050658;
    msg.theta = 0.944668389979;
    msg.psi = 0.43752512148;
    msg.accuracy = 0.275103735732;

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
    msg.setTimeStamp(0.835159288399);
    msg.setSource(63242U);
    msg.setSourceEntity(118U);
    msg.setDestination(53985U);
    msg.setDestinationEntity(34U);
    msg.target.assign("ZMDYAEZLKCCWDKZMSBAQRKLRWVHWWVENQCIHXGMSMAILYNOHCLJSZJOMVGQIIZNFRKHSROPUIEZFIOLETOYTWJKPAUFSPCQLGNBSGXXEGOUPDMADUUEWQXYTPPNKOEVVSCKZJNTNXDFHJAIPXORCBECICXFTVAHFBEFTYDQUMGUXXWHNHKWDLVUVRUQHBDLKYYHYLIKLJSATGEXYVMWRAGMNDRSPIFQTFWNPZGYBZRFBOVBMBOSAUTDJTJG");
    msg.lbearing = 0.215279646619;
    msg.lelevation = 0.244647944533;
    msg.bearing = 0.270811495117;
    msg.elevation = 0.685539350506;
    msg.phi = 0.76747899586;
    msg.theta = 0.0911986105454;
    msg.psi = 0.86918307629;
    msg.accuracy = 0.724492711884;

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
    msg.setTimeStamp(0.0535631516773);
    msg.setSource(51746U);
    msg.setSourceEntity(175U);
    msg.setDestination(16075U);
    msg.setDestinationEntity(181U);
    msg.target.assign("PTNLFPMWLLGXIPCGMIIHAPKEBANKCEJYXFFHEXJXZVILDQKJQVVIBQGMJTBXRNEIGWZSMABBDDDPALTADVZFOFKRURKDJQJLSQAUGQZOZCMWSAOWUYLYWUXBPKNTSZSBNEXJPYOVCPSJHM");
    msg.lbearing = 0.276276682138;
    msg.lelevation = 0.301034899135;
    msg.bearing = 0.513979680056;
    msg.elevation = 0.0394818078789;
    msg.phi = 0.860648464602;
    msg.theta = 0.0663461969652;
    msg.psi = 0.302511725251;
    msg.accuracy = 0.362619605212;

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
    msg.setTimeStamp(0.82896568503);
    msg.setSource(50418U);
    msg.setSourceEntity(134U);
    msg.setDestination(8624U);
    msg.setDestinationEntity(87U);
    msg.target.assign("GUZQYOJQSGYWTPBVJFCXYUHGQRTETIJWAFJOYLHACCISLPJOIPLADPDDRFRADQEDNBVQVBDDZZBIVGRTAKSXTSWUDCMVUFXRSULJLWKKDWQJAUSFYTETEWKHIDNZOVNGCSJTRSAHZNLXVTPEERQMUNQOPEHXGNWRBKMTSIMGZFABCNNM");
    msg.x = 0.625992694101;
    msg.y = 0.0648042084467;
    msg.z = 0.130336375245;
    msg.n = 0.585832404809;
    msg.e = 0.151274824703;
    msg.d = 0.00601884507205;
    msg.phi = 0.549719919439;
    msg.theta = 0.479812792056;
    msg.psi = 0.545657135399;
    msg.accuracy = 0.829507244554;

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
    msg.setTimeStamp(0.908460229308);
    msg.setSource(1201U);
    msg.setSourceEntity(25U);
    msg.setDestination(6850U);
    msg.setDestinationEntity(62U);
    msg.target.assign("HTDFLWAIDSSUZDCOBMHUORNMWGLOPKRONGOBBTMPGYNYYDZKSYALRCUPIZELVVDECJGZPFTRKAOQRXTUWRPZUCCWLGXKWXXQHKIYCEEKZZLSQAVMHTKGTOJASNMNTRISHQQYDHDUBVOQSGJUKCYJVBCALYFTUCAWHTQMNLBHXTIWSFIEQNKINXWGIVRDIJERSQ");
    msg.x = 0.521580980503;
    msg.y = 0.102996615881;
    msg.z = 0.626837673154;
    msg.n = 0.506074329059;
    msg.e = 0.197304104091;
    msg.d = 0.270261163943;
    msg.phi = 0.89479308379;
    msg.theta = 0.710265917767;
    msg.psi = 0.235999399082;
    msg.accuracy = 0.735170602079;

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
    msg.setTimeStamp(0.50385192428);
    msg.setSource(43718U);
    msg.setSourceEntity(15U);
    msg.setDestination(7881U);
    msg.setDestinationEntity(38U);
    msg.target.assign("AFIFPXFBIC");
    msg.x = 0.228901822661;
    msg.y = 0.922405183669;
    msg.z = 0.637267792478;
    msg.n = 0.471343952423;
    msg.e = 0.000171258459586;
    msg.d = 0.65823704355;
    msg.phi = 0.0772840892282;
    msg.theta = 0.687351747746;
    msg.psi = 0.128138044958;
    msg.accuracy = 0.367745921644;

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
    msg.setTimeStamp(0.820826813167);
    msg.setSource(54942U);
    msg.setSourceEntity(125U);
    msg.setDestination(48462U);
    msg.setDestinationEntity(234U);
    msg.target.assign("GNXEIKTDXVIYFCZGSUQGAYHMRBEVHVTKLCAXFRVXACVCNHKBMXRAGMYCMDBNTXTQCPKSVICGJGISUPSSAYHUJZYUGSPWGXAOLBFQFLNINWZIOWETKODEUYBXFGUEHVLNHOHDKAEGDYOBQPYSUZASCXUDNHSRJVVUFSZLPJTWFKIFKZZCOJRJIWEWPTBEBKVLTRYJZMQEDLNWWPRDLOURNDRHITXP");
    msg.lat = 0.680040021464;
    msg.lon = 0.259555621694;
    msg.z_units = 33U;
    msg.z = 0.843094658266;
    msg.accuracy = 0.192257980479;

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
    msg.setTimeStamp(0.26794221383);
    msg.setSource(47067U);
    msg.setSourceEntity(180U);
    msg.setDestination(7552U);
    msg.setDestinationEntity(175U);
    msg.target.assign("QEHMXILXSKFMVKBQZJCBNLPGINBDHJQOHOIOCYVARHBJUDBAVFZNZVYJIWVXSEAMVRMXCKSESHWQFHJVWGALENADOKCNZITFRIRWYUEPKDXWGINJTI");
    msg.lat = 0.496155133924;
    msg.lon = 0.536807619997;
    msg.z_units = 5U;
    msg.z = 0.479636867489;
    msg.accuracy = 0.404725105202;

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
    msg.setTimeStamp(0.213641817954);
    msg.setSource(6985U);
    msg.setSourceEntity(20U);
    msg.setDestination(49165U);
    msg.setDestinationEntity(231U);
    msg.target.assign("YSTYUSNQFZKUJBPYJSWXJVKSGHYNCIPHZZOUCHAMKTZORPBQXLJQAEUKELJFNVRQEFGORRUQJIDIEWFNSAOMANRWBRHEOLZHZQSDASEYLHETOOJXPPCIYPCINNITHDIXBBQXXPGOCGNKNOELGMIVFLDUCAVXITDMCZFLTZKGMVQVBMURPFEDYBNPLDJCHWRUVKSMGAT");
    msg.lat = 0.025279520352;
    msg.lon = 0.696127127156;
    msg.z_units = 180U;
    msg.z = 0.756084290271;
    msg.accuracy = 0.832455589403;

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
    msg.setTimeStamp(0.146621999175);
    msg.setSource(60108U);
    msg.setSourceEntity(199U);
    msg.setDestination(35583U);
    msg.setDestinationEntity(134U);
    msg.name.assign("NIPDWXVIHGEUPPBFVPNRUXSDXRXZTVOSPAWODMTRIAMPOJKDDNKRUKHFQHBUEYYCHFEGHQLZUNICXDNQGMAYXWJWAEQUGKLAQGBKDJTNQTRJWNCVGFLLZZVBNCFICQLHACVEBAZJFHPBVBSBRWFOFCHXKXXSTBYPYMWOMVDGSJKUWHVTRMKEAPCVWIGYTCMEQNTJKKXSISHYEYIQORZARUZIUOZWOBJFLUTOYEGGSZDZPJNSIDLLQR");
    msg.lat = 0.890878266239;
    msg.lon = 0.872199927528;
    msg.z = 0.821389758706;
    msg.z_units = 8U;

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
    msg.setTimeStamp(0.453787818187);
    msg.setSource(7446U);
    msg.setSourceEntity(90U);
    msg.setDestination(10474U);
    msg.setDestinationEntity(49U);
    msg.name.assign("CPKOIOZHSBCZXDTPWUODVQNYXLFHMUGDICFAZYLCRFGQDTTDQGWUNLWMODWCUXKXDUWSPEAMBHZOBNSSVKFKQIZMKEUNLVMPXTFBGKFRBXXJRXTYHOVETDBJGAUQKLVLYYNWTMUPSYAAMPVDVJMSVWYPWYFIZJZBCDOKGLXNVZJIYMFECYTLMOH");
    msg.lat = 0.464080136964;
    msg.lon = 0.728503747083;
    msg.z = 0.168065285849;
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
    msg.setTimeStamp(0.30881071301);
    msg.setSource(22491U);
    msg.setSourceEntity(106U);
    msg.setDestination(36388U);
    msg.setDestinationEntity(185U);
    msg.name.assign("ZBPMNWUHQGFIEHUMUVTOSIQWDXNDABRYNPCIUASL");
    msg.lat = 0.851290790936;
    msg.lon = 0.772054789693;
    msg.z = 0.299273394829;
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
    msg.setTimeStamp(0.96806912228);
    msg.setSource(46172U);
    msg.setSourceEntity(117U);
    msg.setDestination(8424U);
    msg.setDestinationEntity(100U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.246266504803);
    msg.setSource(20298U);
    msg.setSourceEntity(75U);
    msg.setDestination(59700U);
    msg.setDestinationEntity(101U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.794697252964);
    msg.setSource(24267U);
    msg.setSourceEntity(158U);
    msg.setDestination(55040U);
    msg.setDestinationEntity(57U);
    msg.op = 14U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("YNKNYUDWICFPMFOYKPZDMHXDAXJWWXUDRNHINCNBUNJPGCPZUMSZHFEBOCOQMOXBAOMGDMYAESMCQMVNVAPDTOLHWAOZRRKTURZTF");
    tmp_msg_0.lat = 0.109735772613;
    tmp_msg_0.lon = 0.718003521979;
    tmp_msg_0.z = 0.240986935347;
    tmp_msg_0.z_units = 231U;
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
    msg.setTimeStamp(0.581736251208);
    msg.setSource(54832U);
    msg.setSourceEntity(62U);
    msg.setDestination(19980U);
    msg.setDestinationEntity(241U);
    msg.value = 0.461812358517;
    msg.type = 14U;

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
    msg.setTimeStamp(0.311713348187);
    msg.setSource(35898U);
    msg.setSourceEntity(83U);
    msg.setDestination(9417U);
    msg.setDestinationEntity(63U);
    msg.value = 0.886354840341;
    msg.type = 154U;

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
    msg.setTimeStamp(0.419412229112);
    msg.setSource(52341U);
    msg.setSourceEntity(149U);
    msg.setDestination(4779U);
    msg.setDestinationEntity(13U);
    msg.value = 0.173824917386;
    msg.type = 17U;

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
    msg.setTimeStamp(0.989302214109);
    msg.setSource(18518U);
    msg.setSourceEntity(7U);
    msg.setDestination(40468U);
    msg.setDestinationEntity(12U);
    msg.value = 0.646136653395;

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
    msg.setTimeStamp(0.0573379946642);
    msg.setSource(15380U);
    msg.setSourceEntity(243U);
    msg.setDestination(22582U);
    msg.setDestinationEntity(134U);
    msg.value = 0.0484528757103;

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
    msg.setTimeStamp(0.28619466691);
    msg.setSource(59535U);
    msg.setSourceEntity(17U);
    msg.setDestination(57539U);
    msg.setDestinationEntity(223U);
    msg.value = 0.868507208984;

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
    msg.setTimeStamp(0.179632891055);
    msg.setSource(27647U);
    msg.setSourceEntity(115U);
    msg.setDestination(31028U);
    msg.setDestinationEntity(182U);
    msg.timestamp_last_service = 0.691497846837;
    msg.time_next_service = 0.965279895331;
    msg.time_motor_next_service = 0.649249862288;
    msg.time_idle_ground = 0.0191942012401;
    msg.time_idle_air = 0.798169723899;
    msg.time_idle_water = 0.437442255957;
    msg.time_idle_underwater = 0.818210657665;
    msg.time_idle_unknown = 0.710747375804;
    msg.time_motor_ground = 0.0400118319558;
    msg.time_motor_air = 0.393580644864;
    msg.time_motor_water = 0.484267265917;
    msg.time_motor_underwater = 0.33128428002;
    msg.time_motor_unknown = 0.0464931048542;
    msg.rpm_min = 2003;
    msg.rpm_max = 25853;
    msg.depth_max = 0.988613439697;

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
    msg.setTimeStamp(0.358105993245);
    msg.setSource(3493U);
    msg.setSourceEntity(227U);
    msg.setDestination(7719U);
    msg.setDestinationEntity(25U);
    msg.timestamp_last_service = 0.183286939482;
    msg.time_next_service = 0.220082086046;
    msg.time_motor_next_service = 0.390331897201;
    msg.time_idle_ground = 0.562635948528;
    msg.time_idle_air = 0.382262309246;
    msg.time_idle_water = 0.49955791337;
    msg.time_idle_underwater = 0.864962219335;
    msg.time_idle_unknown = 0.874518634098;
    msg.time_motor_ground = 0.126679986755;
    msg.time_motor_air = 0.76849716485;
    msg.time_motor_water = 0.397796300331;
    msg.time_motor_underwater = 0.622405572669;
    msg.time_motor_unknown = 0.620898147709;
    msg.rpm_min = 16229;
    msg.rpm_max = -24279;
    msg.depth_max = 0.37861470773;

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
    msg.setTimeStamp(0.759304516031);
    msg.setSource(9194U);
    msg.setSourceEntity(247U);
    msg.setDestination(33257U);
    msg.setDestinationEntity(145U);
    msg.timestamp_last_service = 0.0253847131096;
    msg.time_next_service = 0.848254669989;
    msg.time_motor_next_service = 0.971465082595;
    msg.time_idle_ground = 0.814342612137;
    msg.time_idle_air = 0.495781513622;
    msg.time_idle_water = 0.230065725634;
    msg.time_idle_underwater = 0.910468712564;
    msg.time_idle_unknown = 0.664679995419;
    msg.time_motor_ground = 0.810823172183;
    msg.time_motor_air = 0.329045881009;
    msg.time_motor_water = 0.19669777482;
    msg.time_motor_underwater = 0.660664494886;
    msg.time_motor_unknown = 0.304904985581;
    msg.rpm_min = 10159;
    msg.rpm_max = 32697;
    msg.depth_max = 0.115736400358;

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
    msg.setTimeStamp(0.867354364);
    msg.setSource(19629U);
    msg.setSourceEntity(195U);
    msg.setDestination(16206U);
    msg.setDestinationEntity(3U);
    msg.severity = 41U;
    msg.text.assign("IIYDHSWOPTRXWVRZGWWOKBBATMCCYSZEBYFJ");

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
    msg.setTimeStamp(0.670166074529);
    msg.setSource(27193U);
    msg.setSourceEntity(161U);
    msg.setDestination(14708U);
    msg.setDestinationEntity(46U);
    msg.severity = 201U;
    msg.text.assign("KTLBFKZFCDXNABDJHFYRABYJDVXHDCLZAPRFOIYMELCFZCQBZWKHIRGHYEBAGQKNDQNLHHOVSYBUWORZHPTWPVWPLIVLQOFMUSUDDYXYWCSOBEBPFQLKNTZECDRJXETCNGGPFJFICQZLWTIXBNVRZGASMKSEXGWINNMUTMMIMLVZUEXVKXHAYUGWZRRTAHURKXGGYUSJMGFSOOEVPO");

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
    msg.setTimeStamp(0.285929517142);
    msg.setSource(12843U);
    msg.setSourceEntity(66U);
    msg.setDestination(15009U);
    msg.setDestinationEntity(221U);
    msg.severity = 97U;
    msg.text.assign("DYJDOGUSZCHEVLENBHESQLREPJZSUZVANYQEWLFQVMMHRWAENOEVDCKSFDVAWDNYGTRLWGFIXWNDTCYXJKBQFJILTNPRGLSGWTTQJNYQEKYZXAAHCSIXJP");

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
    msg.setTimeStamp(0.994761030879);
    msg.setSource(7648U);
    msg.setSourceEntity(51U);
    msg.setDestination(46135U);
    msg.setDestinationEntity(34U);
    msg.channel = 118;
    msg.value = -329069352;
    msg.gain = 31U;

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
    msg.setTimeStamp(0.400814396594);
    msg.setSource(51265U);
    msg.setSourceEntity(150U);
    msg.setDestination(84U);
    msg.setDestinationEntity(77U);
    msg.channel = 65;
    msg.value = 916030271;
    msg.gain = 164U;

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
    msg.setTimeStamp(0.0999026844423);
    msg.setSource(50904U);
    msg.setSourceEntity(96U);
    msg.setDestination(35124U);
    msg.setDestinationEntity(49U);
    msg.channel = 100;
    msg.value = 1690398729;
    msg.gain = 67U;

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
    msg.setTimeStamp(0.841323562473);
    msg.setSource(4543U);
    msg.setSourceEntity(215U);
    msg.setDestination(1233U);
    msg.setDestinationEntity(21U);
    msg.ch01 = 0.470862190703;
    msg.ch02 = 0.0611878685699;
    msg.ch03 = 0.0448024359248;
    msg.ch04 = 0.964255352189;
    msg.ch05 = 0.835690687953;
    msg.ch06 = 0.460575933019;
    msg.ch07 = 0.61111767776;
    msg.ch08 = 0.865940027212;
    msg.ch09 = 0.522742368626;
    msg.ch10 = 0.0449661782931;
    msg.ch11 = 0.55484710062;
    msg.ch12 = 0.352268916646;
    msg.ch13 = 0.338013004441;
    msg.ch14 = 0.273097303672;
    msg.ch15 = 0.142047583258;
    msg.ch16 = 0.67825038117;

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
    msg.setTimeStamp(0.835657047537);
    msg.setSource(14233U);
    msg.setSourceEntity(90U);
    msg.setDestination(64899U);
    msg.setDestinationEntity(137U);
    msg.ch01 = 0.674957841459;
    msg.ch02 = 0.88197751504;
    msg.ch03 = 0.280891228754;
    msg.ch04 = 0.86317878923;
    msg.ch05 = 0.803344430223;
    msg.ch06 = 0.761405545153;
    msg.ch07 = 0.0793074274116;
    msg.ch08 = 0.550870953169;
    msg.ch09 = 0.307281236235;
    msg.ch10 = 0.515585795471;
    msg.ch11 = 0.676446127485;
    msg.ch12 = 0.241308815972;
    msg.ch13 = 0.734618146233;
    msg.ch14 = 0.254059477626;
    msg.ch15 = 0.898803604657;
    msg.ch16 = 0.442666292215;

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
    msg.setTimeStamp(0.261899017265);
    msg.setSource(64719U);
    msg.setSourceEntity(169U);
    msg.setDestination(21654U);
    msg.setDestinationEntity(226U);
    msg.ch01 = 0.679048176266;
    msg.ch02 = 0.675452215978;
    msg.ch03 = 0.871864659178;
    msg.ch04 = 0.821572223149;
    msg.ch05 = 0.799182031855;
    msg.ch06 = 0.0482166827817;
    msg.ch07 = 0.360638517892;
    msg.ch08 = 0.702280309615;
    msg.ch09 = 0.577996492891;
    msg.ch10 = 0.0258913486187;
    msg.ch11 = 0.147217095778;
    msg.ch12 = 0.10846905118;
    msg.ch13 = 0.878246820734;
    msg.ch14 = 0.0880816388733;
    msg.ch15 = 0.339923597033;
    msg.ch16 = 0.297935074668;

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
    msg.setTimeStamp(0.419695182078);
    msg.setSource(15519U);
    msg.setSourceEntity(158U);
    msg.setDestination(15576U);
    msg.setDestinationEntity(121U);
    msg.value = 0.605870895935;

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
    msg.setTimeStamp(0.069786436924);
    msg.setSource(32733U);
    msg.setSourceEntity(212U);
    msg.setDestination(65363U);
    msg.setDestinationEntity(12U);
    msg.value = 0.320020160162;

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
    msg.setTimeStamp(0.199277588854);
    msg.setSource(13175U);
    msg.setSourceEntity(251U);
    msg.setDestination(46602U);
    msg.setDestinationEntity(125U);
    msg.value = 0.44728647735;

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
    IMC::HomePosition msg;
    msg.setTimeStamp(0.633646954065);
    msg.setSource(2289U);
    msg.setSourceEntity(32U);
    msg.setDestination(22596U);
    msg.setDestinationEntity(223U);
    msg.op = 206U;
    msg.lat = 0.228360533414;
    msg.lon = 0.718357148264;
    msg.height = 0.920148717594;
    msg.depth = 0.314550623322;
    msg.alt = 0.470804205984;

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
    msg.setTimeStamp(0.389216293143);
    msg.setSource(60187U);
    msg.setSourceEntity(26U);
    msg.setDestination(49483U);
    msg.setDestinationEntity(19U);
    msg.op = 145U;
    msg.lat = 0.073695889674;
    msg.lon = 0.430673473145;
    msg.height = 0.948215414428;
    msg.depth = 0.859668511164;
    msg.alt = 0.696482976158;

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
    msg.setTimeStamp(0.165862444837);
    msg.setSource(43879U);
    msg.setSourceEntity(78U);
    msg.setDestination(29850U);
    msg.setDestinationEntity(54U);
    msg.op = 60U;
    msg.lat = 0.979044133742;
    msg.lon = 0.670744529409;
    msg.height = 0.2567062524;
    msg.depth = 0.617809514701;
    msg.alt = 0.103319618769;

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

  return test.getReturnValue();
}
