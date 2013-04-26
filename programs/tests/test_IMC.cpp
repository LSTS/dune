//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
    msg.setTimeStamp(0.782352483299);
    msg.setSource(4569U);
    msg.setSourceEntity(14U);
    msg.setDestination(3434U);
    msg.setDestinationEntity(43U);
    msg.state = 212U;
    msg.flags = 17U;
    msg.description.assign("CCBBCBQUTNKDABLCLKHWFHHSWEGIXFHNRYWENDJJZSGWOTUZPPQUCBIXUFGOSCKUOTQKHSDFYFRMVDHKUVWKYQSGGVMXRKUUIBHFMTVZEZJBOOXLMKWRAHJSLRMEANEOLPTIVCRLSPHDJXLOELAJNFWGQP");

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
    msg.setTimeStamp(0.874738364752);
    msg.setSource(47867U);
    msg.setSourceEntity(25U);
    msg.setDestination(48825U);
    msg.setDestinationEntity(43U);
    msg.state = 9U;
    msg.flags = 28U;
    msg.description.assign("NVEHNCJHBTRJQKVQAGYGGZGSPCEUQPKICHAWYTNXYCJJHAUKBAEDTWBWKKINKTRLOTJYOSARMUEEFELOJVZYPECPLQUDFFKGVZQMVUDBYFJXSWKVIDRIRJRMKZB");

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
    msg.setTimeStamp(0.945547400481);
    msg.setSource(714U);
    msg.setSourceEntity(82U);
    msg.setDestination(33567U);
    msg.setDestinationEntity(9U);
    msg.state = 24U;
    msg.flags = 14U;
    msg.description.assign("FNZVBFJXSJPAS");

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
    msg.setTimeStamp(0.099054152755);
    msg.setSource(34288U);
    msg.setSourceEntity(189U);
    msg.setDestination(417U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.440007833281);
    msg.setSource(6513U);
    msg.setSourceEntity(118U);
    msg.setDestination(22819U);
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
    msg.setTimeStamp(0.0987168886764);
    msg.setSource(56925U);
    msg.setSourceEntity(195U);
    msg.setDestination(51659U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.260937146498);
    msg.setSource(8971U);
    msg.setSourceEntity(209U);
    msg.setDestination(18631U);
    msg.setDestinationEntity(40U);
    msg.id = 138U;
    msg.label.assign("UNHSNQXCIUOLUMWBIIGAQWEVIWUWBZNHLNHQMCJBN");
    msg.component.assign("IULZMMBFYXVKZUKCOXXIUODMGMSGENXDRAJNJXYZMWECOUTHOKVBHZCPDJPWEDGQKQFRDMIEYKMKKJEJXYVTPHOQRANAZDLJPLVPCDYHWRWPHOBCYBZQGNCRRURJIWOHLVWQCFGSZIETOBMBQADSXHFUCVOJLDAT");
    msg.act_time = 8951U;
    msg.deact_time = 5121U;

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
    msg.setTimeStamp(0.175454915948);
    msg.setSource(21801U);
    msg.setSourceEntity(96U);
    msg.setDestination(44249U);
    msg.setDestinationEntity(254U);
    msg.id = 56U;
    msg.label.assign("EABCYHYHTZFLTLMEKGNIUDMFHRMBYLYETGVVBYAHHPPWVVZFSTVZXYGMYEGZQICHQQEUKNZWGXUEKZPCHJZIQSKKQEVGXTHRFNWPYOQFBOWWLFWSFBLMOQSDWZUPUPXXCGIXXQRVORJNWSUIIOI");
    msg.component.assign("EQAVFWMPGYUGTMIBKIEUKRZHKLEPEMU");
    msg.act_time = 52166U;
    msg.deact_time = 60127U;

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
    msg.setTimeStamp(0.652738803438);
    msg.setSource(31084U);
    msg.setSourceEntity(150U);
    msg.setDestination(15856U);
    msg.setDestinationEntity(166U);
    msg.id = 12U;
    msg.label.assign("PIRSJHWLGSOOPEBXWFXVSDWTSXZGPANDANSDLEGUXVEIKTZEJGBROWAQJLUUQEDYWAFIUBARMGRDKNMJXFZFFMUFBGYNXANLRHNHBVUMEHCTOUHCOQJYWFORJLHDEZYYKCQZISQZIYKBNPKETXXCVJLKKCCSCPAHKKUZRMRZHBTQROGFCVIOIUT");
    msg.component.assign("EQWJMYDKMILCPNBOFLOPZBRQMWIYXCBHPWPXASGCNCJTZXXIIFSBZFTIUDSTVVQCNWFMXXIDODIGDMTHSKPROVVSRSBKXGNOPWAEU");
    msg.act_time = 54603U;
    msg.deact_time = 36640U;

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
    msg.setTimeStamp(0.676012092025);
    msg.setSource(51495U);
    msg.setSourceEntity(226U);
    msg.setDestination(47920U);
    msg.setDestinationEntity(77U);
    msg.id = 15U;

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
    msg.setTimeStamp(0.496753312281);
    msg.setSource(2710U);
    msg.setSourceEntity(141U);
    msg.setDestination(7037U);
    msg.setDestinationEntity(67U);
    msg.id = 29U;

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
    msg.setTimeStamp(0.0143241849471);
    msg.setSource(30733U);
    msg.setSourceEntity(71U);
    msg.setDestination(63407U);
    msg.setDestinationEntity(151U);
    msg.id = 138U;

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
    msg.setTimeStamp(0.289164149528);
    msg.setSource(53079U);
    msg.setSourceEntity(41U);
    msg.setDestination(35116U);
    msg.setDestinationEntity(139U);
    msg.op = 56U;
    msg.list.assign("CKDCGTKHHOCXVUNKFXZSCWFOTFJYNJPDRORAEWNPSRMQIUCLITAAVCNGQWMIMOFAVUGFRDMEPPPJPKELIYTDZKXMWLWQTDHIVQABRAOZTEAXTUQYGOUNWPKLVVMGXZLJGFBKHBXRNTQDZPZDDQKWLIYUVBNQILLFEGORJXXJDCRWEIRHUHHJSQGHEGVOBIKYAAYQTMMMSWLSFSBYAZPYROSMUXLGHIEZSJCE");

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
    msg.setTimeStamp(0.838244619277);
    msg.setSource(53283U);
    msg.setSourceEntity(31U);
    msg.setDestination(36729U);
    msg.setDestinationEntity(191U);
    msg.op = 118U;
    msg.list.assign("EWXVJDBGOITJYFCOVDKVSHNGAHTVQWLYYFUVSXPMYWZKNDTEUNSJGMRKFKJMPECZSHHQWTPPOXAJXQQDZTYIQVFBWAARZI");

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
    msg.setTimeStamp(0.42576772019);
    msg.setSource(1124U);
    msg.setSourceEntity(129U);
    msg.setDestination(1201U);
    msg.setDestinationEntity(91U);
    msg.op = 89U;
    msg.list.assign("LGKGLMNFNKAXPAFCIJWWBINFESAVYCITNZHTHBNUZUJHGCSLZGSZKXEYRIYLUVJURUHEXILFDSOVKSSQBEORMALWZRLXVOKNGHGJMCTVXPTUFSWRPCKIXPLZWMKQRQJTFUDQTOBUYWXMJDVDZYWBDMYMOHEALCRFNJBBCYPJKTZQXHRPEPKMADUHGIAVXITWYIHCRYRZP");

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
    msg.setTimeStamp(0.15589810638);
    msg.setSource(60401U);
    msg.setSourceEntity(143U);
    msg.setDestination(3082U);
    msg.setDestinationEntity(219U);
    msg.op = 204U;

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
    msg.setTimeStamp(0.00475105816036);
    msg.setSource(33425U);
    msg.setSourceEntity(62U);
    msg.setDestination(6482U);
    msg.setDestinationEntity(21U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.907627468676);
    msg.setSource(22905U);
    msg.setSourceEntity(228U);
    msg.setDestination(39380U);
    msg.setDestinationEntity(9U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.72173335623);
    msg.setSource(52803U);
    msg.setSourceEntity(6U);
    msg.setDestination(55366U);
    msg.setDestinationEntity(10U);
    msg.value = 199U;

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
    msg.setTimeStamp(0.183251108847);
    msg.setSource(48927U);
    msg.setSourceEntity(202U);
    msg.setDestination(46245U);
    msg.setDestinationEntity(112U);
    msg.value = 203U;

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
    msg.setTimeStamp(0.464983255605);
    msg.setSource(55423U);
    msg.setSourceEntity(75U);
    msg.setDestination(60625U);
    msg.setDestinationEntity(72U);
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
    msg.setTimeStamp(0.291014859112);
    msg.setSource(43091U);
    msg.setSourceEntity(221U);
    msg.setDestination(8187U);
    msg.setDestinationEntity(135U);
    msg.consumer.assign("BOUQDAPEJNLXCPOHKTQWHWBKJTIADLBXPZQZZNCNKLQYTXYQECMFNDOVCPSTLLUWJEOGLMKGCERAGNXRDCZWEIYIPAWRHTJKARMVLWUZWFUYIAXGTHFUJVCTQRSQSTGPTAMONUYFIIWEUVGUHOYSYONNGINJFHCFRVISJJHCDMSXSVNFHXZKDXPJVDVWQRERDYSMZIBKXPLBJOMEDBRZSUBYWBKMMBSPZFUGEOXYBFKQVHHAADZKVPRILM");
    msg.message_id = 31733U;

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
    msg.setTimeStamp(0.731859622295);
    msg.setSource(50202U);
    msg.setSourceEntity(80U);
    msg.setDestination(59215U);
    msg.setDestinationEntity(228U);
    msg.consumer.assign("ARIAHLELQZJFJETPQVFIPKNYLLWKQDJHFKCNZDLMOJQGOCTKCHOGRIUWIIGMSLOZEGFYKUYHAGODQVMTWBBYPAMCBHISAUSXVUCXWOVKPRNFBXYCXAMEBMAJIHXGSRXNEWPDYOVQGXPWMTVIOOKN");
    msg.message_id = 51269U;

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
    msg.setTimeStamp(0.139092800264);
    msg.setSource(62298U);
    msg.setSourceEntity(43U);
    msg.setDestination(15982U);
    msg.setDestinationEntity(249U);
    msg.consumer.assign("RIZVQEYTBJNMBMVJOAIGTTTSJGUVKFFUBMFETRVDUTASNFETSUCIWIVSLIFBLWUZDDKYVHXZXHKONNAFZDOWJPQLGGTMSXCRZWPHDYRBZMPSNLCEAGXQZCKMCDIWQWNQRDYROTQGGKNH");
    msg.message_id = 6952U;

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
    msg.setTimeStamp(0.184090691024);
    msg.setSource(60300U);
    msg.setSourceEntity(151U);
    msg.setDestination(14943U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.35295019184);
    msg.setSource(65054U);
    msg.setSourceEntity(140U);
    msg.setDestination(41585U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.580217629799);
    msg.setSource(50159U);
    msg.setSourceEntity(246U);
    msg.setDestination(30577U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.254085110659);
    msg.setSource(54439U);
    msg.setSourceEntity(168U);
    msg.setDestination(23873U);
    msg.setDestinationEntity(16U);
    msg.section.assign("NFPDWGUJFMAMHTMGKEVWOZRQISUWYZTPWUSGSWAQPLULRKRTBTGCIGXGXGWYFKQTSQONQFZVVJBEHPMWIHJDWKDDNBVUJKXLBQ");
    msg.param.assign("PMNJIFTSOGALAFOEACHKOVCLXAZUWYDLMVETLQHQQFMIJQMAWKUCJSGWCVTFHPROPRIYSDAYXLQEUKFZOBGKVGRFGESJXRIDEVKQYIIACYPVBQSPTVCWEKZDBINIKXCWGGOUPSJYVTDZMRXBKNLSHDMEJRVWCHJKRZHNRTLGQSZEOXTPLBIMOPOTBZYWUWKHPDAREMUY");
    msg.value.assign("VXFQQLNXKUGLLEFGJQPPGBTVTFKXTKMZEGFMHGRSDINYCAGHUZUSAKWVTNLOLMGSEIPZISRXRYSFBSQNBUUTUWYHHYPWOFVPQNGMIEOKLRQMBUSOPTQJYEZDDVRFCKTMOALDLNSGUXYNYIXCRXMQZWAPEMBFEWNWLRCOBZHQBJKCIPJLTEHOCHOKRACWVUMYXYSEPDEDAABNJGMJHFVRSWZWJZV");

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
    msg.setTimeStamp(0.889457553718);
    msg.setSource(20644U);
    msg.setSourceEntity(105U);
    msg.setDestination(31437U);
    msg.setDestinationEntity(249U);
    msg.section.assign("LNYHWDOBXQFWXXWWYIRGLFAPNEFKRJTNEXYCTRKRQSZ");
    msg.param.assign("UUXARABZGQJB");
    msg.value.assign("YADJQEFDHUBMLULMWALXPLDSKVDGPVHTOXAISBVLWIOSSVLZHDAXWXQFZTCHMOJWTJENHYMNQRIEHENZIYHTTVNIFNZCMJFOONAJCZGZOGMQPXRBJWYQRLGCSNFMZWRQEPGHKYICBTUSPYOFYFQBQMZMSCXKWSVVTTBXFPUKOBEULUGYRZJOUUGDAIGEVBVAKPWOTDZNCBNVKICRNAAEESUMPXTCKIAURRFKKJQDP");

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
    msg.setTimeStamp(0.808001834537);
    msg.setSource(38427U);
    msg.setSourceEntity(183U);
    msg.setDestination(61685U);
    msg.setDestinationEntity(76U);
    msg.section.assign("ZCSZVUSVEXFOISQNUIZKDXSCDEPWOOZDMTIYHYGAEUSAUHEQXCQHASHENJOCCWWUBLXLBCHIUYLTXZPAOQRNMJBPCUYWFZXTKFBXEYFHADLHKJEBNMBDZSWOQNRGOXLVSKHPGGFWTQGJLLMRRCVDQMTWJABLMYLRVPOMWNUXAPRSNBGA");
    msg.param.assign("TGSIWXQYKCDRYACJUUJWJWQFFNQINNTEUKUVKVOCKRBPFMUOPPAXEPABYZLNIGALUVJGQFRRYHOBYXPQMOBTHWQCXXDHOKNMXSHFLVQRBKMILTCGOWDPURDFZLGNOUMNTYCYAWJFZSSMYEXSBPZKPBIXACGHIARKWBWJUGEUMHOSLTTWDXHQEHJXSFMBDQVAPJHESNQRMZDAEMIWJLKDVSVNZDPIZZFITGAOC");
    msg.value.assign("YMUKQQLSXIBFNTEIRXCHIVEXZMJYHMDRJGMNXAOQXOVRZTEBAZNJABCHFYEKINYOYVSJCCFH");

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
    msg.setTimeStamp(0.953122811867);
    msg.setSource(41422U);
    msg.setSourceEntity(223U);
    msg.setDestination(6405U);
    msg.setDestinationEntity(88U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.272717069172);
    msg.setSource(2558U);
    msg.setSourceEntity(104U);
    msg.setDestination(38091U);
    msg.setDestinationEntity(164U);
    msg.op = 184U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("HAFTOHDJLOBQPJCUSEKFVMNOJHTHDRKOLMUYECZXIENRRMYDDKEZDOGIBOVDYBKCGGRJDYXTQZUXZXFEIASKESPPJCIMOWPJURKHAVBRRPZIKCFUPX");
    tmp_msg_0.param.assign("SMROBWSHLXOKLPAGARJQVZGIHADTQMXOSGJFMWSKRXUDWQ");
    tmp_msg_0.value.assign("CVBKJAXWEOXZHTJDZFDYMCYETASKZITHANGNXWEFBMYBKIWT");
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
    msg.setTimeStamp(0.250993281707);
    msg.setSource(44032U);
    msg.setSourceEntity(20U);
    msg.setDestination(36142U);
    msg.setDestinationEntity(95U);
    msg.op = 91U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("WCMRTNCPZHKSPOTAMRLRIPLWMBSEUUOUJMBTIJONJKDRENSZPUVKRHROZSCQENYIJDHGLOXKMQZIHQAVJEOHFEHFLOEYDUTQCSPVXMQCHIJLXRNSFLFDNCQZJQFAPKAYWYFSYAYGBBU");
    tmp_msg_0.param.assign("BNVVMYVKXMGHSICXSOODOTZDKPZEIASDSTXFXNCKROWLLWKQIETKCMQXUBNCLGPNJBLZGUTFBDHCVHRVJQZWRIHRPMEZACGBQWBUQBOIYROTPAITWNHURVZEHNHZANSDAYHZPUEKMRFATMAGJQFZJOWYCDSYJYKIOJMGXWDFLHFMUCYAQSSENAVNQUPOJZMGBWYGRFFPJDLTWGGTKISOPLDIBBVTARWEUFXUQQHJJLUVLRELSXMEDY");
    tmp_msg_0.value.assign("VDEZZJNDGLVAMLHBUKJDTYIVMXEACOORIC");
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
    msg.setTimeStamp(0.746741280843);
    msg.setSource(40255U);
    msg.setSourceEntity(41U);
    msg.setDestination(4507U);
    msg.setDestinationEntity(39U);
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
    msg.setTimeStamp(0.404790373466);
    msg.setSource(42553U);
    msg.setSourceEntity(144U);
    msg.setDestination(11362U);
    msg.setDestinationEntity(171U);
    msg.op = 117U;

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
    msg.setTimeStamp(0.795870053046);
    msg.setSource(10806U);
    msg.setSourceEntity(150U);
    msg.setDestination(2142U);
    msg.setDestinationEntity(253U);
    msg.op = 247U;

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
    msg.setTimeStamp(0.335952063136);
    msg.setSource(33037U);
    msg.setSourceEntity(21U);
    msg.setDestination(47448U);
    msg.setDestinationEntity(198U);
    msg.total_steps = 175U;
    msg.step_number = 232U;
    msg.step.assign("HQPUSBTALTUKYWNMRDRDXUICSSPFWFAWCEQPRUGEBBNIWHTMHGJDOYUQPIHYLLTG");
    msg.flags = 179U;

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
    msg.setTimeStamp(0.875198357005);
    msg.setSource(50391U);
    msg.setSourceEntity(96U);
    msg.setDestination(5585U);
    msg.setDestinationEntity(126U);
    msg.total_steps = 52U;
    msg.step_number = 31U;
    msg.step.assign("XEMLUVZBLLFATXYAXTMFHCONESCRCHRTJTKAGFYJDEUAFRMKBGMNJQYNHUNMMGCXTSASVSLONQAGDDBTHWFQTRFVZKUWSWJDRGBQRMNIXDFPGZLIYCLSNLKMWKLFQJOPUTZHHOUJDLKPQZDUKIZYSOHICVCVXKPJAFWGLJUEUVEZVODQXARVQICFEXVXSHBNGXYRNNIJIOQCPCYR");
    msg.flags = 190U;

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
    msg.setTimeStamp(0.899625236176);
    msg.setSource(6885U);
    msg.setSourceEntity(8U);
    msg.setDestination(19743U);
    msg.setDestinationEntity(252U);
    msg.total_steps = 188U;
    msg.step_number = 61U;
    msg.step.assign("UXHGMOATUABCUQPHPMFNMFMDRGLEYSPERSRNILHHUDMULZXWLBGEZGAIZJJKCFKL");
    msg.flags = 75U;

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
    msg.setTimeStamp(0.910471300335);
    msg.setSource(26372U);
    msg.setSourceEntity(226U);
    msg.setDestination(56721U);
    msg.setDestinationEntity(77U);
    msg.state = 8U;
    msg.error.assign("LAWSSBYISCMHDEXWUWGYOEXMUWDWEHRRIJSZHOHFVPUQQZLBZGWECSYIENIYIKCFSKJJZBNCHELOMHATAYMCHSVRRRJHQWTI");

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
    msg.setTimeStamp(0.507371564422);
    msg.setSource(48189U);
    msg.setSourceEntity(136U);
    msg.setDestination(40123U);
    msg.setDestinationEntity(209U);
    msg.state = 46U;
    msg.error.assign("DRFFZRZFJGIMXZVALJNOTXSHCVYCRAPGNRRXEDUZVBKSIENTAXYAUBMNSJMPEAQZGCRDCMOKGT");

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
    msg.setTimeStamp(0.547439889273);
    msg.setSource(28476U);
    msg.setSourceEntity(116U);
    msg.setDestination(4267U);
    msg.setDestinationEntity(108U);
    msg.state = 155U;
    msg.error.assign("DGCQNAFWPPIRYEXYKLAEGYFFBKLW");

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.0802783975298);
    msg.setSource(49432U);
    msg.setSourceEntity(189U);
    msg.setDestination(32155U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.282106478556;
    msg.lon = 0.976852944189;
    msg.height = 0.158791184485;
    msg.x = 0.984671575333;
    msg.y = 0.455999208443;
    msg.z = 0.341867617491;
    msg.phi = 0.908239252591;
    msg.theta = 0.675151330666;
    msg.psi = 0.0300355975857;
    msg.u = 0.608355048443;
    msg.v = 0.735870027001;
    msg.w = 0.555305319793;
    msg.p = 0.5484248591;
    msg.q = 0.998436394044;
    msg.r = 0.179438552736;
    msg.svx = 0.52039634937;
    msg.svy = 0.032199648826;
    msg.svz = 0.39807238827;

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
    msg.setTimeStamp(0.489897645242);
    msg.setSource(26911U);
    msg.setSourceEntity(55U);
    msg.setDestination(8041U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.354792942602;
    msg.lon = 0.0630570581596;
    msg.height = 0.471055014116;
    msg.x = 0.929681103661;
    msg.y = 0.584723278683;
    msg.z = 0.892385085723;
    msg.phi = 0.299226298991;
    msg.theta = 0.687846211095;
    msg.psi = 0.487536067508;
    msg.u = 0.656959380603;
    msg.v = 0.499826333761;
    msg.w = 0.824411892734;
    msg.p = 0.136662372519;
    msg.q = 0.504706620496;
    msg.r = 0.843230142856;
    msg.svx = 0.655619241086;
    msg.svy = 0.700954324467;
    msg.svz = 0.235560126955;

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
    msg.setTimeStamp(0.142979971165);
    msg.setSource(25881U);
    msg.setSourceEntity(112U);
    msg.setDestination(64280U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.585408503917;
    msg.lon = 0.519621469269;
    msg.height = 0.550719424086;
    msg.x = 0.0193986286296;
    msg.y = 0.465522015007;
    msg.z = 0.695564276223;
    msg.phi = 0.273681621174;
    msg.theta = 0.690634499356;
    msg.psi = 0.23620917494;
    msg.u = 0.679556688976;
    msg.v = 0.401928244945;
    msg.w = 0.872118255364;
    msg.p = 0.859647648328;
    msg.q = 0.46635576081;
    msg.r = 0.562134718396;
    msg.svx = 0.353926676663;
    msg.svy = 0.642095794783;
    msg.svz = 0.346226116838;

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
    msg.setTimeStamp(0.700305173143);
    msg.setSource(48341U);
    msg.setSourceEntity(15U);
    msg.setDestination(58933U);
    msg.setDestinationEntity(20U);
    msg.op = 159U;
    msg.entities.assign("HCSCOSKJVXQWZYYWVAYIAQBTHAANYGWZNCOYROKKPVAHFJFAUDPOTVYXLWYUMBNHZLIQOQNDCIQJYTLVFVVNNQAQEKPRZIOXTEFXTNDFDUSSRGKHMGQGIZRPGCZMTDHAJLUAUBLKFZSBDHXCWIJWXMCWKGMUVBSMDDJYXIGGQLNNEOJETMGILSLOLERWLMPQZXHRANHKYCFWUDTRPOBR");

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
    msg.setTimeStamp(0.646453765469);
    msg.setSource(8943U);
    msg.setSourceEntity(36U);
    msg.setDestination(11758U);
    msg.setDestinationEntity(23U);
    msg.op = 152U;
    msg.entities.assign("QTRPBDYKFHLNILBWDOWMUJKMZPRWZXFGZGCYYHKXOAUHOSVJYMZSSOWPRVLNYBHYARZMRZWHHJGQKNYPBEQAW");

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
    msg.setTimeStamp(0.352001391997);
    msg.setSource(55036U);
    msg.setSourceEntity(243U);
    msg.setDestination(63850U);
    msg.setDestinationEntity(202U);
    msg.op = 87U;
    msg.entities.assign("YDKQBBXNSXJDEFNWWVHUWRJVTPZDEYZPCQICMUZZQXZVMTRLRVNPZUSMFJZKSWTOUNZ");

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
    msg.setTimeStamp(0.555494741664);
    msg.setSource(43102U);
    msg.setSourceEntity(136U);
    msg.setDestination(49688U);
    msg.setDestinationEntity(40U);
    msg.type = 176U;
    msg.speed = 37244U;
    const char tmp_msg_0[] = {5, -99, -126, -57, 66, -84, -70, -4, -74, 0, 35, -10, 25, -95, -84, -31, -120, -44, 50, -19, 115, -88, -10, -127, 44, -4, 45, -77, -2, 47, -16, -114, -67, 48, -93, -79, -113, 47, 111, 79, -55, 37, -32, 5, 84, -72, 44, 45, 94, 37, -61, -40, 85, 103, -41, -61, 88, -72, -25, -27, 13, -96, -54, 55, 3, 110, -74, -121, -78, 53, -57, -71, -117, -126, 22, 65, -4, -40, 61, 34, 14, -2, 66, 69, -49, -47, -8, 21, -64, -12, -49, 114, -110, -52, -65, -23, -124, 64, 65, 4, 14, -11, 87, -81, -114, -27, 87, -55, 113, 34, 94, 74, 73, -42, -115, 39, -83, -67, 101, 113, -33, 100, 7, 77, 36, -31, 25, 61, 74, -7, -49, 102, 56, 10, 62, 103, -111, -122, 58, 86, -59, -32, -32, -34, 59, -120, -56, 54, 47, 121, 11, -24, 85, -43, -124, 80, 90, 105, -59, 125, 38, -105, -9, 113, -60, -109, -35, 85};
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
    msg.setTimeStamp(0.388760141832);
    msg.setSource(4764U);
    msg.setSourceEntity(60U);
    msg.setDestination(36555U);
    msg.setDestinationEntity(121U);
    msg.type = 51U;
    msg.speed = 17472U;
    const char tmp_msg_0[] = {-11, -81, -88, 41, -104, 117, -49, 77, 118, 111, -52, -19, -112, -122, 38, -125, -5, -71, 117, -93, 122, -44, -107, 25, 126, -58, -12, -84, -36, -86, -98, -63, -125, -15, 16, -25, 68, -35, 73, -65, 15, -115, 101, 126, 37, -7, -62, 9, -70, -115, -28, -99, -108, 25, 0, -118, 45, -7, -31, 104, -124, 121, -20, -101, 59, -18, 113, -23, 4, -12, 34, -99, -8, -59, -74, -113, 54, 28, -126, -48, 18, -70, 109, -123, 34, -118, 28, -76, 17, 106, 118, 104, -118, -99, 113, -12, -55, 119, -97, -11, 39, 90, -93, 40, -1, -113, -107, 122, 28, 47, 88, -12, -60, 48, -2, 91, 16, 68, 89, 76, -105, 114, 90, 25, 32, -115, 22, -21, -87, 104, -63, -128, 77, 86, -14, -103, 34, -34, 40, 14, -94, -11, 16, -71, 107, -84, 0, 20, -121, -63, 20, -53, -37, -105, -45, 97, -77, 66, -40, 70, 27, 32, 7, -88, 73, 84, -114, -51, 38, 81, -51, 23, -125, -98, 106, -12, -92, 53, -3, 30, 10, 86, 23, 123, 109, -16, 91, -80, 94, 112, 17, -13, 40, 68, 87, -91, -95, 121, -58};
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
    msg.setTimeStamp(0.855567536062);
    msg.setSource(54256U);
    msg.setSourceEntity(48U);
    msg.setDestination(2592U);
    msg.setDestinationEntity(189U);
    msg.type = 192U;
    msg.speed = 51566U;
    const char tmp_msg_0[] = {-105, 115, -28, 122, -79, 81, -101, 45, -107, -15, -73, -56, -13, 91, -105, -48, -103, 76, -12, -63, 103, -60, 18, -81, -20, -5, -78, -53, -6, -50, 103, 119, -73, -74, 9, 78, -68, 77, 108, -49, 63, 1, -15, 54, -57, 111, 88, 118, 40, -84, -84, 54, -58, -28, 63, -27, -104, -115, -83, -126, 31, 33, 6, 110, -88, -66, -65, 79, -91, 36, -5, 4, 95, 18, 3, -5, 105, 9, -111, 0, 73, -73, 117, 100, 33, -112, 65, 36, -28, 41, 102, 118, 104, -43, 119, 106, -12, -71, 5, 32, -15, 0, 109, 85, 65, -76, -123, 0, 104, 0, -13, 120, 80, -9, 124, -29, 90, -24, 110, 123, -82, -24, -59, -56, 40, 81, -83, -29, -91, 8, -86, 39, 117, -42, 125, -47, -44, -54, 70, -26, -44, 12, 35, 105, 1, 97, -117, 89, 72, -26, -100, 25, 14, -65, -65, 123, 14, 107, -107, 105, 55, -110, 73, -90, -8, -113, -120, -9, 23, -100, 75, 113, 52, -78, -120, 45, 28, -26, -69, 106, -101};
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
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.292088735242);
    msg.setSource(55501U);
    msg.setSourceEntity(136U);
    msg.setDestination(23643U);
    msg.setDestinationEntity(247U);
    msg.available = 3012146262U;
    msg.value = 119U;

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
    msg.setTimeStamp(0.0265587729542);
    msg.setSource(19208U);
    msg.setSourceEntity(111U);
    msg.setDestination(9312U);
    msg.setDestinationEntity(163U);
    msg.available = 564581250U;
    msg.value = 154U;

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
    msg.setTimeStamp(0.651770802875);
    msg.setSource(31700U);
    msg.setSourceEntity(169U);
    msg.setDestination(64808U);
    msg.setDestinationEntity(170U);
    msg.available = 1044473275U;
    msg.value = 138U;

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
    msg.setTimeStamp(0.350049806927);
    msg.setSource(59079U);
    msg.setSourceEntity(226U);
    msg.setDestination(43749U);
    msg.setDestinationEntity(156U);
    msg.op = 244U;
    msg.snapshot.assign("COQNFJXOMUQPTLDMWZPKKJUPULBMZTGHRBSOPGHWKFTRJWCDMSQMZHFRKOYOVENTLMFRIQTFSBTZRVKHCSIYVAXAILIPUBCGPZJRTKJOBBNBRCCJGUHUSROAZMNLKAUEDINDPZEQWWWCQRGCJ");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("KNLWUCQGOWLDDDRTKPIYLCVJBADVKNDVQYVETATASZQQFFCAHXUYOAUWTDFVXXRAMOPZCPEIGLBRYG");
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
    msg.setTimeStamp(0.174116554978);
    msg.setSource(60302U);
    msg.setSourceEntity(233U);
    msg.setDestination(40549U);
    msg.setDestinationEntity(152U);
    msg.op = 80U;
    msg.snapshot.assign("FJUWBGGTSUHQDMEABMHIEJXTTGGSPMPPEWXWIOITYJUVNFFUCFFXWYNJLPEKQRASCSYXACSRYTVOXJLQHHJHMXZZIOCFXGMWLYQZRNSHXICRVVNWHKDGNKRBNAEEYBVKTAKCZLBGTCYQKNUSGRYEHVVDDABUNFGZULXGZBZNROQDLPDOEAOWEULDCTJMILBVK");
    IMC::ParameterControl tmp_msg_0;
    tmp_msg_0.op = 116U;
    IMC::Parameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.section.assign("XIFFPSDMLLEKHGDEZODIOGPWSPFQFMMTJBGTHQ");
    tmp_tmp_msg_0_0.param.assign("PDYRFTMXDVIVPNHKECTFYBMLTPNIOEIGYFOJAACZVJEINWGUTKUDOWRRQMWQNIWJJGDFGZCJKMNVUPGUIHXPYRSXBPQSHEVLHDVSGCFYUESQMLCZSZIQPUJODJWIALBMSZDHHWWBJXTWKTCRXJBHVHBY");
    tmp_tmp_msg_0_0.value.assign("DJEXAZYNHFQTQYUMMEBLUABCHZKJLBCITRELQZCDJHAJBVORGAVHIMWLKKICIPRSOOHYNEJEBODPVRXCWCPWIUTBKGFNMKMVLXHCRQGQSEFFZFLIRPXNVUJZISAYVGYLPSZSZRUFVWWKTKSUFIMFRFNVTXKEJDVUTPHTGGJETJQDSKZTUIDKGIYHWXJSXLFOGGYCMOWMMQOCDUHNXXQDLZDRWHMNGOYSAP");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.80685467479);
    msg.setSource(57579U);
    msg.setSourceEntity(122U);
    msg.setDestination(24868U);
    msg.setDestinationEntity(83U);
    msg.op = 98U;
    msg.snapshot.assign("QSYHMKRTNUJWTRCDRNPCAEHWYGNJUN");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.30990534781;
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
    msg.setTimeStamp(0.250147374315);
    msg.setSource(11533U);
    msg.setSourceEntity(4U);
    msg.setDestination(10444U);
    msg.setDestinationEntity(46U);
    msg.op = 76U;
    msg.name.assign("OVMRQWOPOWPVLZY");

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
    msg.setTimeStamp(0.468006793911);
    msg.setSource(63398U);
    msg.setSourceEntity(145U);
    msg.setDestination(38196U);
    msg.setDestinationEntity(228U);
    msg.op = 29U;
    msg.name.assign("RZTUZIYQOFFVMTFLHKVSABEISDFGGGLNMGPIIVQDZBQLGXKSRFOJNTKHCYQWMJBCAFZRUXHMJKNZDDJEPNBYPMHSDWSIUCXMUPLUXU");

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
    msg.setTimeStamp(0.115576638412);
    msg.setSource(8405U);
    msg.setSourceEntity(235U);
    msg.setDestination(58609U);
    msg.setDestinationEntity(52U);
    msg.op = 143U;
    msg.name.assign("WLPCOONZDP");

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
    msg.setTimeStamp(0.826681980681);
    msg.setSource(23354U);
    msg.setSourceEntity(198U);
    msg.setDestination(59471U);
    msg.setDestinationEntity(170U);
    msg.type = 108U;
    msg.htime = 0.784901916561;
    msg.context.assign("BLGFRPOQPQPUDCETMGOSAEDOUOMYZLKCFCNUTQRECMCKSEHHPSLPRBXJWRVESLVEEANNVMMRWXOCAGHAEQLMIAHDPYEARRUJFLAKXPRTBVVQKJSJFLLDZSKWYBXBWKJGYVICXFCZNIXNKSMQLHHYJOYCMIGWSVUZSTLGDXU");
    msg.text.assign("TJECKLXBKZBYJTLFTTYFGIGYSOADVZHSESMKYZBWGGRVHTCLTPBHLPAKPQPWFLEGRJUDUKASIXGJRHPNKFHBNWDWTQMQCSDYDFKUDRJVOOQASELOWQJVVTMIG");

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
    msg.setTimeStamp(0.86383713152);
    msg.setSource(15403U);
    msg.setSourceEntity(250U);
    msg.setDestination(5509U);
    msg.setDestinationEntity(64U);
    msg.type = 184U;
    msg.htime = 0.521416902014;
    msg.context.assign("JXIDBUPCEGMBDNCRGFKWYFBUSRYFWCUHEFPRYXMGYOHCVHJHKPBAFRZUJZZFHDIRDNQSCIMVZELCICXOKUWWATFKLNSAYHKNJDHCVTTSSVSNGOXDRPKGMQZEMTQIMOYTALQ");
    msg.text.assign("UIWAWPGJKKSZGEVCABBROWJLQSFYXIRIPBSHPQBNINNLSCWZRDAPQXQHGONZSCHMTXNVMERAJMSMBZBJFEWUIEVPQPBQXWYEAMVVFUOHNZKLUDGDFTWSKTRVJWKTJRMPQQXPIWSVAVGQFVJABPEQEDYJNYUPTGINDLORDYRYAFGBZLMECMXLTLHRTCDLXMHNIOOUYF");

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
    msg.setTimeStamp(0.78513856519);
    msg.setSource(7732U);
    msg.setSourceEntity(150U);
    msg.setDestination(27240U);
    msg.setDestinationEntity(122U);
    msg.type = 172U;
    msg.htime = 0.928120606784;
    msg.context.assign("CCOECMRXRLARJWTOTTVXUZCOBMKDLVLTHOUTAZQLMGWJYYCPCDYFDDFKLAEDHBMMOQEQYUZNYFN");
    msg.text.assign("HVODHGGYNYUFPTOOQSRUNXENLNJJJWCQUFEFICPVMOKTKGWWZDDEFXANALGLATIAVZBZXDRCVQZRTMNFTVVWRBCCDNLCYGHRKVHWDUPQEEYXCXTL");

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
    msg.setTimeStamp(0.382737588439);
    msg.setSource(9304U);
    msg.setSourceEntity(177U);
    msg.setDestination(32603U);
    msg.setDestinationEntity(111U);
    msg.command = 108U;
    msg.htime = 0.034517298027;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 248U;
    tmp_msg_0.htime = 0.189126885764;
    tmp_msg_0.context.assign("RCLJDGNDUDZPNQUDSMHWSUBXHSHMJCWYACAKMLSJDXHYKZBTARVDWIFGOZYNXPUGNPVIXXVVMRWUQNMIFWOOLDFLQAHPRTAGUIYTHAIFOPNOEFYFPOTBVGJRJQONAPEXFUEFLCFYQCQEKZTVAWPIKYVTIIMMBLHLZGCNQDUEREBXGOSXXJNHOQDCCESMYYOEEJMVZCIUHBIZKWGKYE");
    tmp_msg_0.text.assign("ZDXWIBPFQZDTCQQNXKASKYJLZHROYQLJPNZQHWPHOEZAPOMFRAEHEODCECGVNRQMVBVKCUWSOZJJCXLUTJGOCXRWYMKCFDUTMMZYEGAX");
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
    msg.setTimeStamp(0.116397292155);
    msg.setSource(6168U);
    msg.setSourceEntity(51U);
    msg.setDestination(49201U);
    msg.setDestinationEntity(122U);
    msg.command = 190U;
    msg.htime = 0.48794219997;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 97U;
    tmp_msg_0.htime = 0.598024598192;
    tmp_msg_0.context.assign("DMIRGYSZVHESOGBATUNXWGWBLXIYUWHTCVZZJLCODPKFZVLICDIRVWQZZMLISJFOHPGQSNMAEORXMJQKCET");
    tmp_msg_0.text.assign("CXCXPCGLJOKTWXZSRCWQFNAVBQUMAEYJEJULKNKBVETUUQQDFJADUIRHIKDTAXLQOHKHMDWMGKQHROGFRCSULXZBIKXBLYCYJYQZZLIGOEZLNWMGXWYZGTYPDTDLDRMOISIYNHRUEIQDNHSVSOBPISIHVTWFCOJWRSPJTFVAFPZZAVABTUNULSPHMXURHPDBVZGSJMKHVFRPEYPBWBZOCQWJNTA");
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
    msg.setTimeStamp(0.762971335778);
    msg.setSource(2424U);
    msg.setSourceEntity(191U);
    msg.setDestination(32657U);
    msg.setDestinationEntity(117U);
    msg.command = 22U;
    msg.htime = 0.266591129944;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 192U;
    tmp_msg_0.htime = 0.777353661715;
    tmp_msg_0.context.assign("LODRRHTQWWPUFWYEOAYSIFSOTRBGDIBQYWUXVZTGHGSMXVPOQNEDCAPKAJRNILCSPAYAU");
    tmp_msg_0.text.assign("TUXZIPXTDKRSVMEHSTRSDWCCSCCVDYLMOLDEIFEIDGN");
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
    msg.setTimeStamp(0.324093687198);
    msg.setSource(65066U);
    msg.setSourceEntity(107U);
    msg.setDestination(63435U);
    msg.setDestinationEntity(242U);
    msg.op = 225U;
    msg.file.assign("PRNFCZONOTKCWJZAQHORMGRZDKMBCJOUKJPNKCSJBDBFBSGGCAPOGUHTHNKVCNBSVIWDTVEPITRZQYUKRJVVCSDJXUBLKYTAQ");

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
    msg.setTimeStamp(0.457508446149);
    msg.setSource(27601U);
    msg.setSourceEntity(105U);
    msg.setDestination(38187U);
    msg.setDestinationEntity(51U);
    msg.op = 165U;
    msg.file.assign("LVLSLAOBBOYUYJCEPBJLYIEFHWNCXJPSZNCITWAUKTZIFWJRQQOIVGLNDBBIUREFOKNGXFPZTXDUZHJFMNTFQCIZXJSAUEKQRZJMSIYMHMSTPRGAZQWZVSW");

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
    msg.setTimeStamp(0.0793779621122);
    msg.setSource(832U);
    msg.setSourceEntity(84U);
    msg.setDestination(28432U);
    msg.setDestinationEntity(123U);
    msg.op = 156U;
    msg.file.assign("WGPDAUHWXXNDAORESTLAIQLRXSOKRWOWDHVDMGPLQQLFIBYMBDFANZFWGGRKLOIUWCYRJDFUFXJSWXNASWGPHGTYHBTUEMXXPVAOQPVYBENTSUAXMBDIVQUYGZMFTGTUBICUANMJVFVMNZYERTZKSYJPHCUWTOIC");

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
    msg.setTimeStamp(0.125941204476);
    msg.setSource(21437U);
    msg.setSourceEntity(89U);
    msg.setDestination(6464U);
    msg.setDestinationEntity(93U);
    msg.op = 82U;
    msg.clock = 0.0815086279348;
    msg.tz = 104;

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
    msg.setTimeStamp(0.187648454394);
    msg.setSource(30138U);
    msg.setSourceEntity(247U);
    msg.setDestination(44500U);
    msg.setDestinationEntity(123U);
    msg.op = 20U;
    msg.clock = 0.562879099012;
    msg.tz = 45;

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
    msg.setTimeStamp(0.0184306743581);
    msg.setSource(49006U);
    msg.setSourceEntity(161U);
    msg.setDestination(19205U);
    msg.setDestinationEntity(222U);
    msg.op = 39U;
    msg.clock = 0.898059256314;
    msg.tz = 105;

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
    msg.setTimeStamp(0.604459526408);
    msg.setSource(28854U);
    msg.setSourceEntity(83U);
    msg.setDestination(11752U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.982046330883);
    msg.setSource(31477U);
    msg.setSourceEntity(184U);
    msg.setDestination(5662U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.799806284503);
    msg.setSource(35976U);
    msg.setSourceEntity(181U);
    msg.setDestination(43932U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.305122860957);
    msg.setSource(60067U);
    msg.setSourceEntity(145U);
    msg.setDestination(15696U);
    msg.setDestinationEntity(145U);
    msg.sys_name.assign("VPPMGLMHPHBYLNRAGKOJCQTQFEGQDZTPZOXXUTADNILGQYYNWFEMMJQBLKNQDNVBQFEBNUBVYSVLQOWTBQUJUTBURZMYWSYKAARJXIXOTFXIAWWZTXGFYZZRHKLCDKQMRSXIMIBSBGDEZOTKVAXCDSSHLSWHUPTKORMFJCCEIAMAWU");
    msg.sys_type = 175U;
    msg.owner = 43707U;
    msg.lat = 0.188955852753;
    msg.lon = 0.458752752933;
    msg.height = 0.883727959862;
    msg.services.assign("XMSXKYIDZLBZHWEHJRSYDIHL");

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
    msg.setTimeStamp(0.369875507776);
    msg.setSource(60361U);
    msg.setSourceEntity(115U);
    msg.setDestination(31985U);
    msg.setDestinationEntity(112U);
    msg.sys_name.assign("CWXETZZIIQSHPREJTAXTMUPIFSOATVTNYSBBSUSWYTAQDDSUBJMLWUHRQ");
    msg.sys_type = 223U;
    msg.owner = 13244U;
    msg.lat = 0.136450922895;
    msg.lon = 0.0603250083629;
    msg.height = 0.916708264233;
    msg.services.assign("ODIADYWCMXEGKCVRUCVQTQOBFEFNICGZMNBGTEBLMZSQMBXORLADJIRPIOWUCGHSMMHOZOGVTLQXZXRKKANOWWUUNTENNNXBVRURMDIYEYHHVKUFLFGYFYUTYQDUCSJEJHDAISPUAL");

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
    msg.setTimeStamp(0.066954408913);
    msg.setSource(19068U);
    msg.setSourceEntity(132U);
    msg.setDestination(62203U);
    msg.setDestinationEntity(180U);
    msg.sys_name.assign("FYZMKCYSCXCPRVPHEXCVWTJBQUXHEDUKHYIQMGBFZUDINQBRZTKFDITWBJWEHXUKFJOYPYGAEQPOHUJEALEXMFSBKXGJDYBBLRVTXKDWPAGUUGMPLDIDAUYRZXVMNYIDKOOQSVTARACSLPHKMRZZSUNOCHPDZPTQOJSHEARCWOVMQYVENICOFQWSJWMVLOLGEFVDWLAGFIJYSFGALFEQBWTGNMPI");
    msg.sys_type = 181U;
    msg.owner = 58127U;
    msg.lat = 0.182412728712;
    msg.lon = 0.994159074148;
    msg.height = 0.971794625744;
    msg.services.assign("ZZJGDCXJYLQVBABSGXJHWARMTAIECYQTLWHBULIGUGTIKPKUVQKNVXWUPPURSRXDQXZATZZBEREMGXNPNQXJCOOGYHLSNZHYJU");

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
    msg.setTimeStamp(0.929919186534);
    msg.setSource(49446U);
    msg.setSourceEntity(219U);
    msg.setDestination(9808U);
    msg.setDestinationEntity(184U);
    msg.service.assign("OVBDXGVXDKUBWIUDXIAXRVJPICDMRLVBBAGDQYNFIFLJAEKLHOESHFGMAGQDOUCCEYWXFPAUFSJVUYRLWPFPYRNLRMBKXSOCTHNEETVJLTCASPTEAQQXBOKUXQWIJSNTMVYUYZGZ");
    msg.service_type = 104U;

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
    msg.setTimeStamp(0.695422170479);
    msg.setSource(57681U);
    msg.setSourceEntity(105U);
    msg.setDestination(48597U);
    msg.setDestinationEntity(182U);
    msg.service.assign("CKTDKUOKUSVZPMWABXNEPOIEOUFPXWHF");
    msg.service_type = 95U;

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
    msg.setTimeStamp(0.699682155233);
    msg.setSource(49992U);
    msg.setSourceEntity(235U);
    msg.setDestination(18843U);
    msg.setDestinationEntity(122U);
    msg.service.assign("GQLJMGGTRLRXGBYWEVVCSWDQXIAMBXYHNOFESFPJBYNUSCMGYLNLZBDJHHZXTLSWHLQEMYHCFNNLXFFZVADCVTSVXIYDGKEOPRUHFTFSOKBFFTKWPYQMAPGDIEHAMVCNVKKRULAKOAQIXITUJMREWHTKSSXOPXO");
    msg.service_type = 170U;

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
    msg.setTimeStamp(0.0173162424968);
    msg.setSource(37703U);
    msg.setSourceEntity(63U);
    msg.setDestination(34329U);
    msg.setDestinationEntity(221U);
    msg.value = 0.0607459617607;

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
    msg.setTimeStamp(0.294626097571);
    msg.setSource(18298U);
    msg.setSourceEntity(182U);
    msg.setDestination(897U);
    msg.setDestinationEntity(187U);
    msg.value = 0.416074673641;

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
    msg.setTimeStamp(0.273262813679);
    msg.setSource(2864U);
    msg.setSourceEntity(196U);
    msg.setDestination(42927U);
    msg.setDestinationEntity(119U);
    msg.value = 0.252419313851;

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
    msg.setTimeStamp(0.140174277599);
    msg.setSource(63140U);
    msg.setSourceEntity(60U);
    msg.setDestination(12385U);
    msg.setDestinationEntity(80U);
    msg.value = 0.804143627914;

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
    msg.setTimeStamp(0.00660314295895);
    msg.setSource(42976U);
    msg.setSourceEntity(211U);
    msg.setDestination(43387U);
    msg.setDestinationEntity(21U);
    msg.value = 0.335965597876;

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
    msg.setTimeStamp(0.492960965849);
    msg.setSource(10818U);
    msg.setSourceEntity(124U);
    msg.setDestination(1400U);
    msg.setDestinationEntity(172U);
    msg.value = 0.604886664162;

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
    msg.setTimeStamp(0.0629467113042);
    msg.setSource(10351U);
    msg.setSourceEntity(132U);
    msg.setDestination(64952U);
    msg.setDestinationEntity(246U);
    msg.value = 0.909146499527;

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
    msg.setTimeStamp(0.336873720989);
    msg.setSource(26231U);
    msg.setSourceEntity(145U);
    msg.setDestination(15070U);
    msg.setDestinationEntity(53U);
    msg.value = 0.165722680616;

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
    msg.setTimeStamp(0.27423733171);
    msg.setSource(20641U);
    msg.setSourceEntity(234U);
    msg.setDestination(49761U);
    msg.setDestinationEntity(153U);
    msg.value = 0.11397244962;

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
    msg.setTimeStamp(0.959022597076);
    msg.setSource(45344U);
    msg.setSourceEntity(1U);
    msg.setDestination(64681U);
    msg.setDestinationEntity(146U);
    msg.number.assign("EENKYCRCWYGEJKWWAUTJHMXMOLUAXBDHTVSXGFXBGOAJUXWLJQGLFFRYCCKRJSAMWJAKLBTNJHIYKXQCDLVCEEBTQTWEJDFMZURVYDMNEDPCTCCPSSVZAGIPMHQSAWIMTRWIOYMTLBOAITNBLIROSUVIQINDUODZKVHFGBGXKUZLIHFSPXRLVBOSNRTKQ");
    msg.timeout = 27314U;
    msg.contents.assign("XCWQMTIXPCSRI");

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
    msg.setTimeStamp(0.179943904497);
    msg.setSource(25855U);
    msg.setSourceEntity(245U);
    msg.setDestination(42491U);
    msg.setDestinationEntity(179U);
    msg.number.assign("QHEOPARAWLSIPKXTRMCPKYONHIDCCWQMZRPIYXLUNBVVFTJLXWTKQRNEMAKDBDMJRHLBLXFYVIYTGCJWGFJNLHVVDHBKUWYCOPFLDBNNGIZGYNXADWIQNRSVBRMCULMUKDXSKRZTSVTECZAOZJHFNRTUBMUZHUIKBBVYGZNCTEAITPYZEMAPAMOSLIZAFOGGOKWSJQXDPHGGBFOYMUPQFXSSQHJXVAWR");
    msg.timeout = 47362U;
    msg.contents.assign("ETFAOLVQMJUBEKRTPHXAKPIUXPATEJCFEFWFXOFCKCMHCXYJDKEZBYDNQZYJLKNVTULBRLRQSZNEFYKESVZOQTOGYLACGAUCMXMMRHMIBKDHJZIDXJBFSVEVNCBHAAYOGFNBHHNUSDJRBNIFGTULVOZWTWMW");

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
    msg.setTimeStamp(0.164768237558);
    msg.setSource(934U);
    msg.setSourceEntity(11U);
    msg.setDestination(62998U);
    msg.setDestinationEntity(197U);
    msg.number.assign("LCLWTQYGSQBXHLVJIAQBTPOBXOGIKXZJUSAEDWZGPCHRYPNNBPBHQMXEIWIZDNFKSOMKZXVGBWRORWPGPIAKANNOEERHTTBLEAMTSKVFAWCYZMYCVDSPQNQRUAYZYDACMRBRGYVUFPXQWUDPZJFVJZDSJIQFJJMURSESKSOECPFBAXTOVTGFOVIHIHWNVI");
    msg.timeout = 8402U;
    msg.contents.assign("RXZJISUHFRXVQ");

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
    msg.setTimeStamp(0.025911004383);
    msg.setSource(5401U);
    msg.setSourceEntity(19U);
    msg.setDestination(54826U);
    msg.setDestinationEntity(247U);
    msg.seq = 4079279256U;
    msg.destination.assign("JQWSXKEWIBODCPMDVRMIXYNTOXNGQQKVWOOPOCCGWFPDZQJPVHTYHRUDOLRCKFJAABHLVJWERJKYYFXBFPGGZFEZOQKZOUYYYQQTNENJGHPX");
    msg.timeout = 33419U;
    const char tmp_msg_0[] = {-39, 16, -66, 104, 106, 90, 89, 102, -96, -45, -113, -96, -63, -68, -2, 45, -94, -48, -29, -64, 114, 14, 99, 72, 122, -62, 96, 40, 13, 85, 44, 119, -57, -21, 64, 47, 37, 35, 93, -51, -72, -102, 52, -113, -127, -91, 118, -79, -58, -10, 92, -48, -81, 4, -21, -39, -9, -39, 13, -25, 14, 68, -28, -76, -59, -69, -57, 101, 41, -8, 96, 12, 115, -74, -43, -2, -24, -78, -26, -16, 83, -112, -45, 47, -56, -50, 82, 93, -124, -69, 80, 107, 69, -75, 19, 111, -121, -23, -114, 108, 73, -124, 60, 72, -46, -45, 93, -1, 109};
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
    msg.setTimeStamp(0.786020051806);
    msg.setSource(62124U);
    msg.setSourceEntity(27U);
    msg.setDestination(41221U);
    msg.setDestinationEntity(107U);
    msg.seq = 839408572U;
    msg.destination.assign("AKYUNDUIMLQSSBQEHHOKAXVJTPDFABHVENGVOZODYLBTLIDRWD");
    msg.timeout = 35989U;
    const char tmp_msg_0[] = {93, 114, 8, 19, 27, -92, -31, -52, -112, 43, -14, -30, 23, -54, 26, 31, 32, 68, 76, -66, 103, 106, -38, -90, -48, 95, -91, -49, -64, 37, -27, -63, 4, -44, -52, 99};
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
    msg.setTimeStamp(0.329354096741);
    msg.setSource(29363U);
    msg.setSourceEntity(48U);
    msg.setDestination(4124U);
    msg.setDestinationEntity(62U);
    msg.seq = 4258025036U;
    msg.destination.assign("OOXBABKTZKPBMWWWREMGFPRCZQGRKHOL");
    msg.timeout = 44474U;
    const char tmp_msg_0[] = {62, -90, 10, -30, -33, 59, -24, 58, -21, 13, -18, 126, -104, 102, -93, 67, 21, 33, -84, 3, 123, -16, -6, 57, -51, -106, -121, 53, 118, -16, 0, 56, -113, 116, -78, 52, 44, 42, 61, 53, -48, -64, 97, 118, 7, 88, 10, 36, -97, -102, -92};
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
    msg.setTimeStamp(0.798018314594);
    msg.setSource(9665U);
    msg.setSourceEntity(192U);
    msg.setDestination(63591U);
    msg.setDestinationEntity(45U);
    msg.source.assign("UAWXXCDTIOVPTWLVOWYSBMBTMRGHMWCJNWPZUPHDXFGNGAUJBLOLZFNEQMSFORR");
    const char tmp_msg_0[] = {-62, -17, -36, 111, -72, -105, -29, 82, 3, -32, -51, -110, 120, 3, -113, 11, -24, 41, -88, 39, -76, -57, -35, -56, 52, 17, 85, 101, 93, 66, 93, -4, 102, 13, 105, -74, 25, 109, -2, 18, 13, -26, 53, 68, 5, -23, 5, 7, -21, 38, -35, -90, 4, 24, 1, -61, 33, 90, 89, 57, -68, -8, -5, -110, -21, -124, -117, -10, -75, -21, -53, 52, -120, -106, 125, -52, -83, 1, -19, 79, 93, 47, 19, 23, -33, -24, -59, 12, -84, 32, -74, -37, -93, -104, -77, 81, -87, 36, -53, 49, -34, -16, 114, 75, -87, -4, 95, 66, -115, 97, 96, -108, 59, -95, -58, -106, 32, -33, 31, -42, -16, -125, 68, 103, -121, -120, -119, -51, -27, 100};
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
    msg.setTimeStamp(0.701473807112);
    msg.setSource(37523U);
    msg.setSourceEntity(173U);
    msg.setDestination(46090U);
    msg.setDestinationEntity(180U);
    msg.source.assign("HMXHZJWIHPACDUXSZNIHUKSVIGTNJNXMIJUBZOPALJZLWOYRQIVBHTMQJVXEVVEPYKKHDXEFUWGNKCNBZCPWLDJEROCBCZDRKFWLBZSCHHGTENKSFWEJOBFCEBMUEXACOAFPJKBGVGUYOWYSNWFMWKDIUAGITHTSAOPGRSRLPTLJCVAYNMYDAUIXRXLBTYLGJQRDBLOSSHNOXDUGMQRDKFXVAZINUPFMPQT");
    const char tmp_msg_0[] = {-77, 27, 47, -27, 101, 80, -44, 62, 30, -38, 89, 38, -123, -12, -10, 30, -10, -42, -71, -103, 88, -125, 5, 41, -69, -10, -57, 87, 56, 18, 110, 49, -90, -60, -91, -8, 65, -102, 3, 56, -123, -81, -56, 78, -96, -121, 26, -8, -118, -113, -117, 67, -128, 62, 50, 0, 17, -82, -24, 30, -20, 36, 28, -19, 56, -6, -101, 44, -89, -44, 108, 17, 85, 74, 66, 21, -3, 47, -8, 114, -4, -4, -63, -15, -72, -50, 23, 53, 62, 122, -38, -28, 117, -121, -54, 63, -32, -32, -61, 92, 101, -39, -118, -40, 107, -124, 112, 20, 24, -105, 121, 41, -47, 101, 111, -103, 123, 56, 55, -86, 4, -57, 27, 56, 34, 75, -36, -91, 39, -108, -55, -98};
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
    msg.setTimeStamp(0.998534907095);
    msg.setSource(37612U);
    msg.setSourceEntity(51U);
    msg.setDestination(37884U);
    msg.setDestinationEntity(166U);
    msg.source.assign("ZMOGPKRTEEFHKFYGTAPIVEADJHSQOADLBPNNWPDQMQYDJHFVRMIUUXWEZLIARASJWWKEGTBEMTSHKFWPVGMKWIULDRSAKXCFAVNYCJCDXBNFFLAQDHQYRZGPYLYUILPTNVJOXCDWVLEBVVFIKZXTRPIBJQULCRGDOPSXWVKRXJJONUCKTEYZAOLYQBEHHOTGIFIRHSHBHUNYUCT");
    const char tmp_msg_0[] = {-108, 7, -97, -57, -34, -113, 19, 32, -94, -24, -113, 78, -7, 0, -116, 113, 52, 40, 7, 100, -62, 12, 75, -98, 117, -123, -53, 103, -45, -49, -110, -10, -45, -78, -94, -100, 8, -116, 99, -97, 86, 66, -10, 83, -60, -114, 35, 53, -10, -51, -65, -92, -99, 111, 85, 117, -71, 47, 93, -42, -65, 22, 12, -99, -7, -62, -81, 55, -1, -36, 67, -5, 108, -69, -118, -125, -114, 104, 85, -23, -122, 44, -55, -90, -107, -29, -76, -4, -107, -32, -2, -110, -20, -68, -91, 118, 72, 77, -78, 60, 8, -23, 44, -103, 10, -9, 108, 120, 57, -16, -116, -113, 114, 123, 30, 7, 57, -4, -71, 68, -123, -97, 122, -90, 124, -107, 51, 1, -23, -80, 118, 0, 55, 15, -113, -34, -25, -39, 60, -83, 95, -49, -70, 42, -90, 111, 85, -84, 20, -113, 21, 56, 80, -100, -45, -15, -40, -1, 25, -99, 38, 35, 84, -20, 9, 4, 56, 35, 109, 59, 46, -97, -19, 60, 14, 34, -31, 15, 71, -40, -92, 55, 107, 119, -49, 119, 86, -16, 5, 108, -43, 4, -23, -72, -8, -126, 12, -128, 80, 105, 29, -92, 34, 25, 39, -29, 26, 73, -33, -128, 21, 36, 119, -126, 22, -24, 61, -6, 85, 110, 24};
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
    msg.setTimeStamp(0.857592789284);
    msg.setSource(52692U);
    msg.setSourceEntity(150U);
    msg.setDestination(51657U);
    msg.setDestinationEntity(88U);
    msg.seq = 44195662U;
    msg.state = 245U;
    msg.error.assign("BUEQYGOIFMIOKRWHBNFDFXVZEKITGMCJRCBQREZKFPMTCZNNDEQAHXISWQEXQPOFNHSTJDEQSQCMYUZYBKKVJZJKHTMESWKPGQALMHSJAJUWRNIGPWWABOYPMXDRRCIUDJESHHTOFCVGPEPAMLHFJPVWXXTAWOAYGLUFXIDBIL");

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
    msg.setTimeStamp(0.601130109966);
    msg.setSource(42682U);
    msg.setSourceEntity(92U);
    msg.setDestination(63906U);
    msg.setDestinationEntity(77U);
    msg.seq = 3879044486U;
    msg.state = 74U;
    msg.error.assign("EHMGMDILOEWAPGOXJFSVRQLBVIEZHVDNZXUWAYXMKDWYUAOKGTBLMIPGVVKOXNOKIHHNCTCETGZPBFLMDWNAXTEYCAHRSQNCQSNYJYWKBPUMDNXWFATJCPTUQOBIHUJXWNDQUIQTTKDRMUZDFRGOEJHCIJAIYR");

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
    msg.setTimeStamp(0.0441997406847);
    msg.setSource(62731U);
    msg.setSourceEntity(14U);
    msg.setDestination(51359U);
    msg.setDestinationEntity(78U);
    msg.seq = 2077679115U;
    msg.state = 113U;
    msg.error.assign("IABPFPRHHRXCCZFJYNZPETRRMYUSSCIKHJXOIEFGTOUQBPVLZNHYUQZKGCWESHTOYHKXJTIWRDKLEEGOUXSOLDGIMGXXANBRBETE");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.653857118903);
    msg.setSource(8652U);
    msg.setSourceEntity(226U);
    msg.setDestination(47199U);
    msg.setDestinationEntity(82U);
    msg.id = 100U;
    msg.range = 0.0230641137881;

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
    msg.setTimeStamp(0.289211776042);
    msg.setSource(33327U);
    msg.setSourceEntity(221U);
    msg.setDestination(26731U);
    msg.setDestinationEntity(74U);
    msg.id = 114U;
    msg.range = 0.882452315346;

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
    msg.setTimeStamp(0.362648730353);
    msg.setSource(44121U);
    msg.setSourceEntity(125U);
    msg.setDestination(21684U);
    msg.setDestinationEntity(70U);
    msg.id = 215U;
    msg.range = 0.668855045899;

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
    msg.setTimeStamp(0.790723560874);
    msg.setSource(39078U);
    msg.setSourceEntity(242U);
    msg.setDestination(12868U);
    msg.setDestinationEntity(44U);
    msg.tx = 138U;
    msg.channel = 215U;
    msg.timer = 9010U;

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
    msg.setTimeStamp(0.0964868819481);
    msg.setSource(34218U);
    msg.setSourceEntity(8U);
    msg.setDestination(3901U);
    msg.setDestinationEntity(249U);
    msg.tx = 3U;
    msg.channel = 59U;
    msg.timer = 39908U;

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
    msg.setTimeStamp(0.0400404029894);
    msg.setSource(17411U);
    msg.setSourceEntity(174U);
    msg.setDestination(42912U);
    msg.setDestinationEntity(219U);
    msg.tx = 226U;
    msg.channel = 151U;
    msg.timer = 17793U;

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
    msg.setTimeStamp(0.290060206469);
    msg.setSource(2121U);
    msg.setSourceEntity(12U);
    msg.setDestination(53440U);
    msg.setDestinationEntity(71U);
    msg.beacon.assign("AFRXJXMVLXPOJJNZDIYRPQVGQDBUXTBUJBMBCHGIFLSUDKGMPEPYLUTAANRGNUAMYAGEQEORUYHQO");
    msg.lat = 0.224680154987;
    msg.lon = 0.262532186208;
    msg.depth = 0.0898925648163;
    msg.query_channel = 39U;
    msg.reply_channel = 147U;
    msg.transponder_delay = 117U;

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
    msg.setTimeStamp(0.204279348894);
    msg.setSource(19165U);
    msg.setSourceEntity(140U);
    msg.setDestination(28058U);
    msg.setDestinationEntity(155U);
    msg.beacon.assign("MPAQOXJCGGPRNSCPUUNBHXGUOUHTQYUIPKQWYHRKJZRNLWKMLYKFPA");
    msg.lat = 0.43184734004;
    msg.lon = 0.777692785254;
    msg.depth = 0.425308006247;
    msg.query_channel = 115U;
    msg.reply_channel = 8U;
    msg.transponder_delay = 77U;

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
    msg.setTimeStamp(0.359048171725);
    msg.setSource(24914U);
    msg.setSourceEntity(182U);
    msg.setDestination(1442U);
    msg.setDestinationEntity(94U);
    msg.beacon.assign("ELULYKBBXXVCEESVI");
    msg.lat = 0.115241645653;
    msg.lon = 0.668741736628;
    msg.depth = 0.770250540799;
    msg.query_channel = 250U;
    msg.reply_channel = 227U;
    msg.transponder_delay = 152U;

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
    msg.setTimeStamp(0.982157132421);
    msg.setSource(36500U);
    msg.setSourceEntity(223U);
    msg.setDestination(284U);
    msg.setDestinationEntity(105U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.0488846044426);
    msg.setSource(21067U);
    msg.setSourceEntity(236U);
    msg.setDestination(42799U);
    msg.setDestinationEntity(127U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.551614819798);
    msg.setSource(10005U);
    msg.setSourceEntity(101U);
    msg.setDestination(26922U);
    msg.setDestinationEntity(1U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.00144223507732);
    msg.setSource(46210U);
    msg.setSourceEntity(239U);
    msg.setDestination(35713U);
    msg.setDestinationEntity(154U);
    msg.address = 20U;

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
    msg.setTimeStamp(0.413841611247);
    msg.setSource(52186U);
    msg.setSourceEntity(23U);
    msg.setDestination(54304U);
    msg.setDestinationEntity(57U);
    msg.address = 107U;

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
    msg.setTimeStamp(0.629828087197);
    msg.setSource(5266U);
    msg.setSourceEntity(19U);
    msg.setDestination(4689U);
    msg.setDestinationEntity(28U);
    msg.address = 156U;

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
    msg.setTimeStamp(0.261380211967);
    msg.setSource(44373U);
    msg.setSourceEntity(180U);
    msg.setDestination(2071U);
    msg.setDestinationEntity(168U);
    msg.address = 235U;
    msg.status = 18U;
    msg.range = 0.485665920488;

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
    msg.setTimeStamp(0.356094755248);
    msg.setSource(46003U);
    msg.setSourceEntity(123U);
    msg.setDestination(6033U);
    msg.setDestinationEntity(14U);
    msg.address = 29U;
    msg.status = 36U;
    msg.range = 0.878280781684;

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
    msg.setTimeStamp(0.32987353438);
    msg.setSource(44776U);
    msg.setSourceEntity(17U);
    msg.setDestination(11245U);
    msg.setDestinationEntity(215U);
    msg.address = 143U;
    msg.status = 147U;
    msg.range = 0.512675415085;

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
    msg.setTimeStamp(0.758400421214);
    msg.setSource(54831U);
    msg.setSourceEntity(253U);
    msg.setDestination(62353U);
    msg.setDestinationEntity(250U);
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 114U;
    tmp_msg_0.error.assign("EKYSWZVEMKVHCHAKYZKOZGKDPMXHPZVACEYNHLBHVRPSGGFPXXYCRXOLBUXHWIUFZRILTDMDMVGNNGBGYEQETD");
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
    msg.setTimeStamp(0.571409518843);
    msg.setSource(42541U);
    msg.setSourceEntity(228U);
    msg.setDestination(54257U);
    msg.setDestinationEntity(147U);
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 33U;
    tmp_msg_0.clock = 0.251963006571;
    tmp_msg_0.tz = -120;
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
    msg.setTimeStamp(0.962079170636);
    msg.setSource(13275U);
    msg.setSourceEntity(141U);
    msg.setDestination(18060U);
    msg.setDestinationEntity(178U);
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.280927050284;
    tmp_msg_0.lon = 0.101200767945;
    tmp_msg_0.z = 0.576808413959;
    tmp_msg_0.z_units = 5U;
    tmp_msg_0.speed = 0.676403151679;
    tmp_msg_0.speed_units = 11U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.836503301046;
    tmp_tmp_msg_0_0.y = 0.637899532528;
    tmp_tmp_msg_0_0.z = 0.57842741986;
    tmp_tmp_msg_0_0.t = 0.90952369514;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.858524543395;
    tmp_msg_0.custom.assign("KITSAOKLRCXWVCWKYDUYFHNVZAYNTOSSZUBMSVROCYHWAPEBWTNAMYHMBRGPYLNAKPIREEENEKISLKHSDUIRCDBEPDXQJAGDDVGFWZVSXFULXCYOQRQRGCRFVBUJJXKXJLUCAZJT");
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
    msg.setTimeStamp(0.335668165);
    msg.setSource(6048U);
    msg.setSourceEntity(81U);
    msg.setDestination(48219U);
    msg.setDestinationEntity(158U);
    msg.enable = 53U;

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
    msg.setTimeStamp(0.677467622329);
    msg.setSource(4849U);
    msg.setSourceEntity(104U);
    msg.setDestination(10845U);
    msg.setDestinationEntity(13U);
    msg.enable = 207U;

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
    msg.setTimeStamp(0.626457900201);
    msg.setSource(9618U);
    msg.setSourceEntity(190U);
    msg.setDestination(37723U);
    msg.setDestinationEntity(16U);
    msg.enable = 241U;

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
    msg.setTimeStamp(0.326891501997);
    msg.setSource(1297U);
    msg.setSourceEntity(202U);
    msg.setDestination(31039U);
    msg.setDestinationEntity(97U);
    msg.summary = 99U;
    msg.level = 200U;

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
    msg.setTimeStamp(0.0661712978396);
    msg.setSource(26080U);
    msg.setSourceEntity(155U);
    msg.setDestination(59530U);
    msg.setDestinationEntity(18U);
    msg.summary = 82U;
    msg.level = 122U;

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
    msg.setTimeStamp(0.836051389423);
    msg.setSource(54480U);
    msg.setSourceEntity(143U);
    msg.setDestination(2185U);
    msg.setDestinationEntity(224U);
    msg.summary = 84U;
    msg.level = 152U;

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
    msg.setTimeStamp(0.336604129898);
    msg.setSource(22325U);
    msg.setSourceEntity(10U);
    msg.setDestination(63187U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.0633590048625);
    msg.setSource(18408U);
    msg.setSourceEntity(191U);
    msg.setDestination(63330U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.0962390961538);
    msg.setSource(16914U);
    msg.setSourceEntity(163U);
    msg.setDestination(50289U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.530539905176);
    msg.setSource(56691U);
    msg.setSourceEntity(204U);
    msg.setDestination(4131U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.551831434826);
    msg.setSource(1300U);
    msg.setSourceEntity(110U);
    msg.setDestination(15480U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.318525481923);
    msg.setSource(15458U);
    msg.setSourceEntity(186U);
    msg.setDestination(60090U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.258720607865);
    msg.setSource(20944U);
    msg.setSourceEntity(226U);
    msg.setDestination(985U);
    msg.setDestinationEntity(119U);
    msg.op = 122U;
    msg.system.assign("GMXMBGRIPDOMHGYMUNXXDUJKZNPGAXKWBZNSHVENHWCTQTWETFBVTGNICHHYAFAVHAQDXQFPZUAZNQKLFLLUIZMKVAWEFUQYHBRYBDQDLJXCJUPGJVALZCDUFTNMVWJSSODNBLNIUIIQBTIHXSRKYLMCAYPRWSZXWTYVOZISDVGJJMPIXQEGBOCMKJOERXEOFFMQBSWGZVESCRCEHQRUALOCUPEY");
    msg.range = 0.891428058851;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.135173069528;
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
    msg.setTimeStamp(0.567787482385);
    msg.setSource(10158U);
    msg.setSourceEntity(4U);
    msg.setDestination(3246U);
    msg.setDestinationEntity(200U);
    msg.op = 238U;
    msg.system.assign("JMWNZMCXLJLWXNBWSMYKOQQYLOIIPPH");
    msg.range = 0.682166227118;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43900U;
    tmp_msg_0.off_x = 0.711960878545;
    tmp_msg_0.off_y = 0.279093450991;
    tmp_msg_0.off_z = 0.631320295079;
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
    msg.setTimeStamp(0.748574275308);
    msg.setSource(7298U);
    msg.setSourceEntity(212U);
    msg.setDestination(26947U);
    msg.setDestinationEntity(60U);
    msg.op = 122U;
    msg.system.assign("LGRELKZVYNHWRMDITQQPUPPQFQINXUPVTYLMIBETYZWDVYMZZEHOZBLJCGOPSQGIAEXFQDJXFKKBYTOCPJXUALDTGLLRNUFSZGHRUWYGYERCBVFNOHOPTZHFDNTHSNQREOCIKNAGWAYHEKWVIWZHXXCJX");
    msg.range = 0.448265601459;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 63871U;
    tmp_msg_0.lat = 0.723734834682;
    tmp_msg_0.lon = 0.549565021534;
    tmp_msg_0.z = 0.864359219188;
    tmp_msg_0.z_units = 101U;
    tmp_msg_0.duration = 15158U;
    tmp_msg_0.speed = 0.346350443468;
    tmp_msg_0.speed_units = 180U;
    tmp_msg_0.type = 26U;
    tmp_msg_0.radius = 0.470407800406;
    tmp_msg_0.length = 0.991849035717;
    tmp_msg_0.bearing = 0.397771245445;
    tmp_msg_0.direction = 225U;
    tmp_msg_0.custom.assign("EYFLMVXZSNAJJISDMBMJPDAWPMHDHFESQAOSGLPKLANGFGPELJYXOKYIKXNDTVFMHJTCSKLBUGRORDEBOMWCVHZHXRGHBOVKEQPGVJZCCRYBLRTSQYETRZNZLTIWHGBGXCEEOGUDZVVZYPAICUUUQOVECZUWHMMXCVEHSTYAUWDAUWKIMQOQATXNGFRRIZMBQDYPBKSWIUPAPBALUDSNXRBFKSRVI");
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
    msg.setTimeStamp(0.955080336633);
    msg.setSource(55287U);
    msg.setSourceEntity(144U);
    msg.setDestination(11218U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.832738984889);
    msg.setSource(9316U);
    msg.setSourceEntity(209U);
    msg.setDestination(53634U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.478720514131);
    msg.setSource(38410U);
    msg.setSourceEntity(158U);
    msg.setDestination(15072U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.206599382461);
    msg.setSource(61958U);
    msg.setSourceEntity(20U);
    msg.setDestination(56553U);
    msg.setDestinationEntity(248U);
    msg.list.assign("PHFHNPDVDMAGWUKYJNVGPLFRHEMNDZUGYMWBNNXSDEYOOHSTKLOTZOKWUQIXZDVIMTGAKRJNRRONDBSSUKDPWQEROLAZXXANMEGQJQFSAVFRCKMIXJEJYVBCILDCYGQFCRIYUIPRYPDFUTVEQFJDWAJHCVZTJCIUSSHVMGWGJTGMULQBMTKTGALBNSIBVUEWZAXKCARLYKCECEBYBXOOTCVZAXFOQHPQWLPUHFKLBBTMWWYISZFZIP");

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
    msg.setTimeStamp(0.163870082715);
    msg.setSource(48101U);
    msg.setSourceEntity(129U);
    msg.setDestination(40654U);
    msg.setDestinationEntity(88U);
    msg.list.assign("NSVTRTFPMVVNFKFDQZCUFZSSJXOKUYYNSMCWAOXULRJNHMDZXIHJKQEYKCWYMHCZBQFAXBMBEXWHLPLOAYTLNTNFEBDIQOWZLRIEFOSWILMOSDHZWEPNNPKWLDUBBOUBBUR");

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
    msg.setTimeStamp(0.521045985587);
    msg.setSource(14174U);
    msg.setSourceEntity(145U);
    msg.setDestination(47813U);
    msg.setDestinationEntity(9U);
    msg.list.assign("NGOATGDEGIWYWCQXGUCRAUQLPFHHDKYXNNZYTBZXDLDBPAAGPZROZKABRCCEOCPSMFSHFMJEIAQML");

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
    msg.setTimeStamp(0.666878706273);
    msg.setSource(36222U);
    msg.setSourceEntity(60U);
    msg.setDestination(21272U);
    msg.setDestinationEntity(200U);
    msg.value = -19912;

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
    msg.setTimeStamp(0.27051482168);
    msg.setSource(60965U);
    msg.setSourceEntity(134U);
    msg.setDestination(33201U);
    msg.setDestinationEntity(179U);
    msg.value = -23718;

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
    msg.setTimeStamp(0.390111326017);
    msg.setSource(29922U);
    msg.setSourceEntity(131U);
    msg.setDestination(58600U);
    msg.setDestinationEntity(249U);
    msg.value = -1288;

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
    msg.setTimeStamp(0.627136457993);
    msg.setSource(15287U);
    msg.setSourceEntity(140U);
    msg.setDestination(54847U);
    msg.setDestinationEntity(6U);
    msg.value = 0.230039380299;

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
    msg.setTimeStamp(0.89886255528);
    msg.setSource(32428U);
    msg.setSourceEntity(225U);
    msg.setDestination(28915U);
    msg.setDestinationEntity(150U);
    msg.value = 0.183691360313;

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
    msg.setTimeStamp(0.489825523778);
    msg.setSource(5978U);
    msg.setSourceEntity(28U);
    msg.setDestination(63267U);
    msg.setDestinationEntity(204U);
    msg.value = 0.911645084551;

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
    msg.setTimeStamp(0.257530186578);
    msg.setSource(17394U);
    msg.setSourceEntity(175U);
    msg.setDestination(62863U);
    msg.setDestinationEntity(4U);
    msg.value = 0.0708668974905;

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
    msg.setTimeStamp(0.404885307154);
    msg.setSource(39470U);
    msg.setSourceEntity(231U);
    msg.setDestination(41006U);
    msg.setDestinationEntity(102U);
    msg.value = 0.999460596054;

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
    msg.setTimeStamp(0.594776814546);
    msg.setSource(31224U);
    msg.setSourceEntity(34U);
    msg.setDestination(30175U);
    msg.setDestinationEntity(213U);
    msg.value = 0.143447292345;

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
    msg.setTimeStamp(0.766022676542);
    msg.setSource(40292U);
    msg.setSourceEntity(247U);
    msg.setDestination(62826U);
    msg.setDestinationEntity(14U);
    msg.validity = 39733U;
    msg.type = 14U;
    msg.utc_year = 56396U;
    msg.utc_month = 37U;
    msg.utc_day = 104U;
    msg.utc_time = 0.573090472398;
    msg.lat = 0.244871823381;
    msg.lon = 0.294124818427;
    msg.height = 0.761430460975;
    msg.satellites = 79U;
    msg.cog = 0.210157770885;
    msg.sog = 0.78184795956;
    msg.hdop = 0.799417678473;
    msg.vdop = 0.044502288149;
    msg.hacc = 0.448258272024;
    msg.vacc = 0.781858174952;

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
    msg.setTimeStamp(0.0133876201296);
    msg.setSource(65279U);
    msg.setSourceEntity(98U);
    msg.setDestination(56641U);
    msg.setDestinationEntity(115U);
    msg.validity = 43417U;
    msg.type = 179U;
    msg.utc_year = 60259U;
    msg.utc_month = 70U;
    msg.utc_day = 194U;
    msg.utc_time = 0.242592354702;
    msg.lat = 0.538126237931;
    msg.lon = 0.484487122422;
    msg.height = 0.0703812802341;
    msg.satellites = 40U;
    msg.cog = 0.32801256072;
    msg.sog = 0.808017925938;
    msg.hdop = 0.904017538679;
    msg.vdop = 0.864235076621;
    msg.hacc = 0.320716455202;
    msg.vacc = 0.777451317511;

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
    msg.setTimeStamp(0.490237862282);
    msg.setSource(10388U);
    msg.setSourceEntity(139U);
    msg.setDestination(1065U);
    msg.setDestinationEntity(104U);
    msg.validity = 58867U;
    msg.type = 88U;
    msg.utc_year = 60061U;
    msg.utc_month = 208U;
    msg.utc_day = 183U;
    msg.utc_time = 0.18045460507;
    msg.lat = 0.305467154065;
    msg.lon = 0.413067290707;
    msg.height = 0.554243164741;
    msg.satellites = 72U;
    msg.cog = 0.092381298909;
    msg.sog = 0.197487246195;
    msg.hdop = 0.847727410657;
    msg.vdop = 0.703128485739;
    msg.hacc = 0.985667868617;
    msg.vacc = 0.0284617405565;

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
    msg.setTimeStamp(0.600363673432);
    msg.setSource(29441U);
    msg.setSourceEntity(158U);
    msg.setDestination(2751U);
    msg.setDestinationEntity(221U);
    msg.time = 0.59835968192;
    msg.phi = 0.894944953521;
    msg.theta = 3.50616886969e-05;
    msg.psi = 0.322341038096;
    msg.psi_magnetic = 0.623896241033;

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
    msg.setTimeStamp(0.849460206229);
    msg.setSource(16250U);
    msg.setSourceEntity(2U);
    msg.setDestination(59533U);
    msg.setDestinationEntity(34U);
    msg.time = 0.834514545318;
    msg.phi = 0.62004278678;
    msg.theta = 0.0763717982168;
    msg.psi = 0.643743427581;
    msg.psi_magnetic = 0.900288024069;

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
    msg.setTimeStamp(0.560405743583);
    msg.setSource(19047U);
    msg.setSourceEntity(195U);
    msg.setDestination(6031U);
    msg.setDestinationEntity(77U);
    msg.time = 0.962496321241;
    msg.phi = 0.263050217627;
    msg.theta = 0.001702748205;
    msg.psi = 0.264892261994;
    msg.psi_magnetic = 0.495582977582;

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
    msg.setTimeStamp(0.630784849246);
    msg.setSource(60049U);
    msg.setSourceEntity(228U);
    msg.setDestination(49083U);
    msg.setDestinationEntity(116U);
    msg.time = 0.318490732419;
    msg.x = 0.929008608496;
    msg.y = 0.932647792263;
    msg.z = 0.954167356192;
    msg.timestep = 0.481924974836;

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
    msg.setTimeStamp(0.577110550127);
    msg.setSource(2545U);
    msg.setSourceEntity(92U);
    msg.setDestination(35207U);
    msg.setDestinationEntity(161U);
    msg.time = 0.526658575144;
    msg.x = 0.468224921373;
    msg.y = 0.326592209253;
    msg.z = 0.32925647601;
    msg.timestep = 0.966243767011;

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
    msg.setTimeStamp(0.843392486587);
    msg.setSource(47110U);
    msg.setSourceEntity(67U);
    msg.setDestination(11000U);
    msg.setDestinationEntity(122U);
    msg.time = 0.0134258982069;
    msg.x = 0.945393748758;
    msg.y = 0.857238522349;
    msg.z = 0.219908494356;
    msg.timestep = 0.811484494077;

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
    msg.setTimeStamp(0.901999922705);
    msg.setSource(57960U);
    msg.setSourceEntity(34U);
    msg.setDestination(62124U);
    msg.setDestinationEntity(69U);
    msg.time = 0.777072858965;
    msg.x = 0.244069910304;
    msg.y = 0.875080163532;
    msg.z = 0.532911017651;

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
    msg.setTimeStamp(0.110665494368);
    msg.setSource(61591U);
    msg.setSourceEntity(5U);
    msg.setDestination(2683U);
    msg.setDestinationEntity(119U);
    msg.time = 0.87202089382;
    msg.x = 0.36145388052;
    msg.y = 0.832962228005;
    msg.z = 0.0786818608337;

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
    msg.setTimeStamp(0.1659361205);
    msg.setSource(28395U);
    msg.setSourceEntity(142U);
    msg.setDestination(26918U);
    msg.setDestinationEntity(165U);
    msg.time = 0.716450954338;
    msg.x = 0.985921447571;
    msg.y = 0.107732161193;
    msg.z = 0.616286352157;

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
    msg.setTimeStamp(0.276855938625);
    msg.setSource(58602U);
    msg.setSourceEntity(173U);
    msg.setDestination(15907U);
    msg.setDestinationEntity(115U);
    msg.time = 0.728222452308;
    msg.x = 0.3887385162;
    msg.y = 0.99957356807;
    msg.z = 0.429513989453;

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
    msg.setTimeStamp(0.514506080188);
    msg.setSource(55894U);
    msg.setSourceEntity(208U);
    msg.setDestination(10746U);
    msg.setDestinationEntity(233U);
    msg.time = 0.538677209576;
    msg.x = 0.641868662097;
    msg.y = 0.264859619223;
    msg.z = 0.495516967587;

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
    msg.setTimeStamp(0.926788915624);
    msg.setSource(49051U);
    msg.setSourceEntity(43U);
    msg.setDestination(30809U);
    msg.setDestinationEntity(94U);
    msg.time = 0.32936817242;
    msg.x = 0.847753645718;
    msg.y = 0.957018064015;
    msg.z = 0.117379481252;

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
    msg.setTimeStamp(0.0366995068914);
    msg.setSource(52830U);
    msg.setSourceEntity(123U);
    msg.setDestination(53339U);
    msg.setDestinationEntity(176U);
    msg.time = 0.77018070452;
    msg.x = 0.269203651276;
    msg.y = 0.180156545821;
    msg.z = 0.649309026787;

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
    msg.setTimeStamp(0.509859245162);
    msg.setSource(47185U);
    msg.setSourceEntity(103U);
    msg.setDestination(48509U);
    msg.setDestinationEntity(72U);
    msg.time = 0.29240206032;
    msg.x = 0.948187171223;
    msg.y = 0.497367987907;
    msg.z = 0.344975539389;

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
    msg.setTimeStamp(0.170332977547);
    msg.setSource(17002U);
    msg.setSourceEntity(103U);
    msg.setDestination(45298U);
    msg.setDestinationEntity(148U);
    msg.time = 0.293782600025;
    msg.x = 0.771245308959;
    msg.y = 0.380953874935;
    msg.z = 0.40056850489;

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
    msg.setTimeStamp(0.581164310382);
    msg.setSource(41093U);
    msg.setSourceEntity(112U);
    msg.setDestination(44018U);
    msg.setDestinationEntity(92U);
    msg.validity = 9U;
    msg.x = 0.727145937939;
    msg.y = 0.185422933693;
    msg.z = 0.742402402312;

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
    msg.setTimeStamp(0.477682621762);
    msg.setSource(59783U);
    msg.setSourceEntity(154U);
    msg.setDestination(30797U);
    msg.setDestinationEntity(182U);
    msg.validity = 39U;
    msg.x = 0.176131035369;
    msg.y = 0.156030501674;
    msg.z = 0.106089497912;

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
    msg.setTimeStamp(0.0937142774829);
    msg.setSource(14464U);
    msg.setSourceEntity(191U);
    msg.setDestination(19810U);
    msg.setDestinationEntity(187U);
    msg.validity = 119U;
    msg.x = 0.144521857611;
    msg.y = 0.0369472369776;
    msg.z = 0.274037866663;

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
    msg.setTimeStamp(0.140380760449);
    msg.setSource(17636U);
    msg.setSourceEntity(215U);
    msg.setDestination(17833U);
    msg.setDestinationEntity(92U);
    msg.validity = 14U;
    msg.x = 0.569304358549;
    msg.y = 0.346564711314;
    msg.z = 0.862239069362;

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
    msg.setTimeStamp(0.175711196265);
    msg.setSource(44211U);
    msg.setSourceEntity(164U);
    msg.setDestination(17192U);
    msg.setDestinationEntity(136U);
    msg.validity = 186U;
    msg.x = 0.726198642;
    msg.y = 0.600131421666;
    msg.z = 0.278172757726;

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
    msg.setTimeStamp(0.517696442052);
    msg.setSource(27621U);
    msg.setSourceEntity(133U);
    msg.setDestination(48064U);
    msg.setDestinationEntity(88U);
    msg.validity = 224U;
    msg.x = 0.752695270301;
    msg.y = 0.699345838226;
    msg.z = 0.271148017641;

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
    msg.setTimeStamp(0.740147749811);
    msg.setSource(58167U);
    msg.setSourceEntity(141U);
    msg.setDestination(21488U);
    msg.setDestinationEntity(116U);
    msg.time = 0.908131070869;
    msg.x = 0.067221366466;
    msg.y = 0.49681480391;
    msg.z = 0.146912457065;

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
    msg.setTimeStamp(0.767585770974);
    msg.setSource(27301U);
    msg.setSourceEntity(181U);
    msg.setDestination(29766U);
    msg.setDestinationEntity(195U);
    msg.time = 0.382686845457;
    msg.x = 0.984208450464;
    msg.y = 0.65144423877;
    msg.z = 0.206977464681;

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
    msg.setTimeStamp(0.399028191083);
    msg.setSource(13856U);
    msg.setSourceEntity(35U);
    msg.setDestination(54798U);
    msg.setDestinationEntity(33U);
    msg.time = 0.478812589008;
    msg.x = 0.94721794983;
    msg.y = 0.0720242377133;
    msg.z = 0.899113026854;

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
    msg.setTimeStamp(0.65502857397);
    msg.setSource(42293U);
    msg.setSourceEntity(239U);
    msg.setDestination(7770U);
    msg.setDestinationEntity(31U);
    msg.validity = 99U;
    msg.value = 0.302882753337;

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
    msg.setTimeStamp(0.420667490185);
    msg.setSource(41128U);
    msg.setSourceEntity(113U);
    msg.setDestination(16404U);
    msg.setDestinationEntity(209U);
    msg.validity = 50U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.294736911489;
    tmp_msg_0.beam_height = 0.144485258925;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.135731099815;

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
    msg.setTimeStamp(0.604412928892);
    msg.setSource(19094U);
    msg.setSourceEntity(128U);
    msg.setDestination(40785U);
    msg.setDestinationEntity(212U);
    msg.validity = 56U;
    msg.value = 0.738628886474;

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
    msg.setTimeStamp(0.805486010623);
    msg.setSource(39363U);
    msg.setSourceEntity(160U);
    msg.setDestination(29089U);
    msg.setDestinationEntity(249U);
    msg.value = 0.986013580373;

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
    msg.setTimeStamp(0.953754543352);
    msg.setSource(60333U);
    msg.setSourceEntity(209U);
    msg.setDestination(53860U);
    msg.setDestinationEntity(201U);
    msg.value = 0.144336971952;

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
    msg.setTimeStamp(0.841220490193);
    msg.setSource(33479U);
    msg.setSourceEntity(152U);
    msg.setDestination(11501U);
    msg.setDestinationEntity(171U);
    msg.value = 0.851883526389;

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
    msg.setTimeStamp(0.623236402361);
    msg.setSource(16470U);
    msg.setSourceEntity(99U);
    msg.setDestination(16948U);
    msg.setDestinationEntity(219U);
    msg.value = 0.528699693925;

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
    msg.setTimeStamp(0.0532850270515);
    msg.setSource(29128U);
    msg.setSourceEntity(79U);
    msg.setDestination(48675U);
    msg.setDestinationEntity(73U);
    msg.value = 0.512749216009;

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
    msg.setTimeStamp(0.707880134709);
    msg.setSource(59507U);
    msg.setSourceEntity(150U);
    msg.setDestination(19156U);
    msg.setDestinationEntity(130U);
    msg.value = 0.547104029383;

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
    msg.setTimeStamp(0.776458480616);
    msg.setSource(20190U);
    msg.setSourceEntity(189U);
    msg.setDestination(43116U);
    msg.setDestinationEntity(150U);
    msg.value = 0.0902028867206;

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
    msg.setTimeStamp(0.532583961367);
    msg.setSource(6195U);
    msg.setSourceEntity(177U);
    msg.setDestination(16735U);
    msg.setDestinationEntity(233U);
    msg.value = 0.434017234299;

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
    msg.setTimeStamp(0.396747068567);
    msg.setSource(28424U);
    msg.setSourceEntity(34U);
    msg.setDestination(17529U);
    msg.setDestinationEntity(207U);
    msg.value = 0.021666871458;

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
    msg.setTimeStamp(0.985776906654);
    msg.setSource(27527U);
    msg.setSourceEntity(55U);
    msg.setDestination(19538U);
    msg.setDestinationEntity(71U);
    msg.value = 0.587767046874;

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
    msg.setTimeStamp(0.284356591284);
    msg.setSource(51970U);
    msg.setSourceEntity(58U);
    msg.setDestination(65183U);
    msg.setDestinationEntity(80U);
    msg.value = 0.725764130741;

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
    msg.setTimeStamp(0.554912524434);
    msg.setSource(20813U);
    msg.setSourceEntity(224U);
    msg.setDestination(58550U);
    msg.setDestinationEntity(79U);
    msg.value = 0.0447876989909;

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
    msg.setTimeStamp(0.0961359699245);
    msg.setSource(45495U);
    msg.setSourceEntity(42U);
    msg.setDestination(26214U);
    msg.setDestinationEntity(187U);
    msg.value = 0.341712163683;

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
    msg.setTimeStamp(0.302185274696);
    msg.setSource(34747U);
    msg.setSourceEntity(12U);
    msg.setDestination(238U);
    msg.setDestinationEntity(132U);
    msg.value = 0.545805250923;

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
    msg.setTimeStamp(0.0677098346229);
    msg.setSource(11765U);
    msg.setSourceEntity(154U);
    msg.setDestination(35036U);
    msg.setDestinationEntity(147U);
    msg.value = 0.682857270814;

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
    msg.setTimeStamp(0.394138262185);
    msg.setSource(39706U);
    msg.setSourceEntity(74U);
    msg.setDestination(53105U);
    msg.setDestinationEntity(53U);
    msg.value = 0.681084129998;

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
    msg.setTimeStamp(0.488010023919);
    msg.setSource(29469U);
    msg.setSourceEntity(204U);
    msg.setDestination(64595U);
    msg.setDestinationEntity(35U);
    msg.value = 0.517216934938;

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
    msg.setTimeStamp(0.737304402148);
    msg.setSource(43974U);
    msg.setSourceEntity(48U);
    msg.setDestination(37444U);
    msg.setDestinationEntity(83U);
    msg.value = 0.593258916799;

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
    msg.setTimeStamp(0.155271766103);
    msg.setSource(4987U);
    msg.setSourceEntity(135U);
    msg.setDestination(56311U);
    msg.setDestinationEntity(33U);
    msg.value = 0.794553941978;

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
    msg.setTimeStamp(0.527085753659);
    msg.setSource(34955U);
    msg.setSourceEntity(65U);
    msg.setDestination(20028U);
    msg.setDestinationEntity(54U);
    msg.value = 0.0935265961685;

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
    msg.setTimeStamp(0.0355714543659);
    msg.setSource(2824U);
    msg.setSourceEntity(66U);
    msg.setDestination(62118U);
    msg.setDestinationEntity(22U);
    msg.value = 0.902528088087;

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
    msg.setTimeStamp(0.558409186469);
    msg.setSource(57403U);
    msg.setSourceEntity(101U);
    msg.setDestination(25712U);
    msg.setDestinationEntity(43U);
    msg.value = 0.950531263766;

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
    msg.setTimeStamp(0.384111100149);
    msg.setSource(27439U);
    msg.setSourceEntity(192U);
    msg.setDestination(24688U);
    msg.setDestinationEntity(170U);
    msg.value = 0.223502437041;

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
    msg.setTimeStamp(0.128098203824);
    msg.setSource(28851U);
    msg.setSourceEntity(245U);
    msg.setDestination(64056U);
    msg.setDestinationEntity(22U);
    msg.value = 0.176587100862;

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
    msg.setTimeStamp(0.537773252614);
    msg.setSource(42096U);
    msg.setSourceEntity(137U);
    msg.setDestination(57128U);
    msg.setDestinationEntity(234U);
    msg.direction = 0.0320653040651;
    msg.speed = 0.863363029286;

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
    msg.setTimeStamp(0.328951456971);
    msg.setSource(53733U);
    msg.setSourceEntity(1U);
    msg.setDestination(43621U);
    msg.setDestinationEntity(243U);
    msg.direction = 0.788311168513;
    msg.speed = 0.52851856881;

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
    msg.setTimeStamp(0.976604462058);
    msg.setSource(63257U);
    msg.setSourceEntity(248U);
    msg.setDestination(24304U);
    msg.setDestinationEntity(155U);
    msg.direction = 0.608401314645;
    msg.speed = 0.438726963283;

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
    msg.setTimeStamp(0.968006055744);
    msg.setSource(23218U);
    msg.setSourceEntity(0U);
    msg.setDestination(23836U);
    msg.setDestinationEntity(57U);
    msg.value = 0.133651019802;

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
    msg.setTimeStamp(0.667097866052);
    msg.setSource(5385U);
    msg.setSourceEntity(251U);
    msg.setDestination(63984U);
    msg.setDestinationEntity(141U);
    msg.value = 0.938892835066;

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
    msg.setTimeStamp(0.612413409029);
    msg.setSource(64662U);
    msg.setSourceEntity(223U);
    msg.setDestination(59025U);
    msg.setDestinationEntity(38U);
    msg.value = 0.125380168856;

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
    msg.setTimeStamp(0.805099917831);
    msg.setSource(19107U);
    msg.setSourceEntity(148U);
    msg.setDestination(25086U);
    msg.setDestinationEntity(248U);
    msg.value.assign("OOSCYMYHHUFGVZDAAHTWB");

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
    msg.setTimeStamp(0.931291601117);
    msg.setSource(1229U);
    msg.setSourceEntity(127U);
    msg.setDestination(39983U);
    msg.setDestinationEntity(7U);
    msg.value.assign("VHHUIYCJUNMXAWUWRYQYIXXTCZSTCLDKSBQPGTEVWMBGJBLAVRGFYMXCDGTEYNESBDJFOOFHTAZJNUYHJPJ");

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
    msg.setTimeStamp(0.703402638833);
    msg.setSource(58436U);
    msg.setSourceEntity(24U);
    msg.setDestination(1581U);
    msg.setDestinationEntity(102U);
    msg.value.assign("LYMAKBZWBFECMQPUKCJVT");

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
    msg.setTimeStamp(0.487119726631);
    msg.setSource(20137U);
    msg.setSourceEntity(86U);
    msg.setDestination(61517U);
    msg.setDestinationEntity(100U);
    const char tmp_msg_0[] = {-67, -94, 58, -105, -107, 85, 3, 35, 57, 123, -73, -80, 0, -120, 82, 112, 57, -99, 26, 64, 5, -46, -87, -126, 124, -113, -41, -7, 65, -15, 21, -97, -112, 37, -82, 8, 56, -82, 105, 117, 73, -78, 82, 113, -115, 125, 19, -126, -96, 102, -65, 54, -30, 121, -66, 45, 66, -105, 65, 21, -56, -101, 103, -55, -126, -114, 69, -24, -25, 65, 3, 114, -25, 108, 87, -126, -83, -25, 37, -98, 79, 17, 51, -79, 9, 98, 125, 96, -29, 52, 46, -49, -21, 21, 119, -95, 28, -118, 5, 31, 103, 23, 76, 64, -35, 106, -82, 42, 119, -58, -9, 99, -79, 58, -63, -50, 122, 121, -34, 35, -1, 30, -54, -32, 23, 85, 121, 12, -43, 120, 34, -101, 36, 115, 45, -110, 73, 85};
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
    msg.setTimeStamp(0.652680400356);
    msg.setSource(51316U);
    msg.setSourceEntity(36U);
    msg.setDestination(52360U);
    msg.setDestinationEntity(200U);
    const char tmp_msg_0[] = {-71, 69, -80, 124, -95, -67, 28, -123, 94, -14, -16, 41, 112, -36, -44, 120, 58, -118, -19, 50, -59, -75, -44, 124, -64, -104, 58};
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
    msg.setTimeStamp(0.513319762588);
    msg.setSource(35548U);
    msg.setSourceEntity(225U);
    msg.setDestination(13643U);
    msg.setDestinationEntity(226U);
    const char tmp_msg_0[] = {-106, 58, -57, 96, -9, 62, 66, 39, -124, -108, 37, 116, -45, -40, 79, 91, 8, 44, 40, 104, 69, 59, 74, 85, -87, -80, -8, 93, 31, 111, -47, 30, 79, 57, 27, 28, 77, 28, -6, -119, -11, 24, -28, -58, 45, -43, -95, 122, 126, 113, -55, 34, 54, -115, 40, 118, 117};
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
    msg.setTimeStamp(0.595079347292);
    msg.setSource(45058U);
    msg.setSourceEntity(160U);
    msg.setDestination(35111U);
    msg.setDestinationEntity(186U);
    msg.frequency = 461384328U;
    msg.min_range = 15042U;
    msg.max_range = 15180U;

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
    msg.setTimeStamp(0.757694130153);
    msg.setSource(39663U);
    msg.setSourceEntity(110U);
    msg.setDestination(60434U);
    msg.setDestinationEntity(173U);
    msg.frequency = 1318780070U;
    msg.min_range = 18225U;
    msg.max_range = 17112U;

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
    msg.setTimeStamp(0.137081127689);
    msg.setSource(10188U);
    msg.setSourceEntity(222U);
    msg.setDestination(23931U);
    msg.setDestinationEntity(13U);
    msg.frequency = 3825930305U;
    msg.min_range = 37073U;
    msg.max_range = 30298U;

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
    msg.setTimeStamp(0.684443865627);
    msg.setSource(26770U);
    msg.setSourceEntity(18U);
    msg.setDestination(9777U);
    msg.setDestinationEntity(202U);
    msg.type = 2U;
    msg.frequency = 3376591300U;
    msg.min_range = 55662U;
    msg.max_range = 47157U;
    msg.bits_per_point = 222U;
    msg.scale_factor = 0.51747610165;
    const char tmp_msg_0[] = {80, 17, -35, 30, 17, 2, -118, -8, -21, 76, 105, 94, 109, 74, -67, -59, 104, 88, -1, -1, -89, 70, -5, 100, -21, 85, -109, -63, -75, 121, -74, -116, -116, -65, -73, 25, -53, -110, 24, -68, -4, -128, -65, -75, -7, -28, -127, -126, -120, 25, 42, 27, -73, 69, 75, -105, 111, 4, 102, -91, -34, 111, -122, 36, -55, -52, 57, -91, -123, 58, -20, 72, -102, -83, -114, -96, -52, -108, 17, 41, 1, 53, 22, -6, -118, 123, -100, 103, -79, -81, 100, 68, -31, 13, -12, 126, -126, -99, 88, 41, -77, 116, -33, 88, 62, 77, 75, 54, 46, -48, 8, -88, 18, -6, 125, -42, -54, -78, -75, -82, -106, 71, -25, -35, -3, 65, -101, 3, -99, -22, 84, 72, -24, 4, 5, 22, -33, 42, -48, -58, -85, 50, 75, 121, -9, -57, 41, 78, 99, 68, 63, 40, -65, -92, 92, -107, -127, 117, 106, -94, -38, 74, 104, 36, 59, 31, -63, -101, 123, 29, -31, 99, 109, -86, -101, -10, 83, 73, 53, -53, 53, -108, -87, 0, 5, -68, 37, -99, 44, -24, 84, 11, -122, -117, -70, 59, -114, 48, -26, -44, 87, 126, -75, 19, -77, -61, -16, -123, -67, -39, 11, -7, -126, 0, -74, -115};
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
    msg.setTimeStamp(0.945425043937);
    msg.setSource(55505U);
    msg.setSourceEntity(234U);
    msg.setDestination(53884U);
    msg.setDestinationEntity(120U);
    msg.type = 11U;
    msg.frequency = 3085950405U;
    msg.min_range = 58721U;
    msg.max_range = 11046U;
    msg.bits_per_point = 237U;
    msg.scale_factor = 0.355050612768;
    const char tmp_msg_0[] = {-70, -53, 108, -114, 10, 41, 101, -65, 36, -65, -112, -61, 66, -45, -60, 10, -95, -29, 61, -97, 121, -81, 116, 70, 34, 93, 32, 16, 94, -37, 31, -25, 32, -2, -109, 19, 105, -3, 52, 102, -3, 17, 99, 37, 56, 76, -35, 83, -124, 42, 61, -6, -106, 54, -121, 15, 4, -38, 65, -57, 74, -19, 18, -99, 38, 71, -68, 2, 115, -13, 31, -82, 21, -13, 53, 111, -3, -58, 70, 126, -36, -90, -85, -22, -71, 97, -52, -59, 50, -95, -100, 79, 99, 83, -105, -120, -87, 21, -91, -56, 16, -99, -70, -40, -59, 74, -20, -49, -128, -104, -74};
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
    msg.setTimeStamp(0.315034175298);
    msg.setSource(13673U);
    msg.setSourceEntity(146U);
    msg.setDestination(14464U);
    msg.setDestinationEntity(69U);
    msg.type = 17U;
    msg.frequency = 2966228759U;
    msg.min_range = 25873U;
    msg.max_range = 10151U;
    msg.bits_per_point = 31U;
    msg.scale_factor = 0.738070647568;
    const char tmp_msg_0[] = {89, -56, 13, -57, 11, 33, -8, -22, 120, -6, -37, -98, 43, 81, -114, -92, -66, -16, -15, 21, 108, 118, -95, 33, -82, -54, 21, -98, -101, -99, -13, 18, -99, -27, 11, -59, 23, 6, 4, -31, 70, -54, -111, -84, 42, -35, -21, 35, 31, -33, 55, -108, -41, -109, 69, 123, 118, -101, -16, 30, 92, -71, 1, 109, 86, -109, 8, 82, 107, -98, 65, 109, -32, -120, 58, -50, 27, -43, -60, 52, -79, -83, -28, -113, -54, -73, -60, -6, -71, 92, -104, 105, -88, 13, 35, 59, 8, -49, -128, 98, -117, -118, -15, 12, 56, 50, -103, -26, 49, -62, -48, -34, -41, -35, 28, -79, -113, 42, 3, -125, 72, -102, -27, -43, 42, -66, 17, 118, -36, -5, -110, -81, -52, -50, 116, -15, 33};
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
    msg.setTimeStamp(0.619043002828);
    msg.setSource(3240U);
    msg.setSourceEntity(35U);
    msg.setDestination(17076U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.982525041911);
    msg.setSource(19950U);
    msg.setSourceEntity(124U);
    msg.setDestination(36504U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.742124214208);
    msg.setSource(10438U);
    msg.setSourceEntity(68U);
    msg.setDestination(31286U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.593410052687);
    msg.setSource(42036U);
    msg.setSourceEntity(94U);
    msg.setDestination(1198U);
    msg.setDestinationEntity(18U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.0276378342531);
    msg.setSource(21039U);
    msg.setSourceEntity(179U);
    msg.setDestination(8480U);
    msg.setDestinationEntity(218U);
    msg.op = 155U;

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
    msg.setTimeStamp(0.549807139474);
    msg.setSource(21278U);
    msg.setSourceEntity(68U);
    msg.setDestination(32233U);
    msg.setDestinationEntity(103U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.733383668738);
    msg.setSource(48707U);
    msg.setSourceEntity(203U);
    msg.setDestination(815U);
    msg.setDestinationEntity(17U);
    msg.value = 0.857566609144;
    msg.confidence = 0.785329592624;
    msg.opmodes.assign("XOEHVJTSFKWYJXNWQZGLAZRHQEBIIFRMMLCFUJHTVUJUASSBOGRDCYGPCNPFCKLMREBYCLSANQIKRZMYJVEHVKKBYBJACYFHQLAOPQGYIDXLVNAZIUQSFZZPDIOXTZRQKQCROXOAEKYMPATRKUVQSWXBMKRVDUZZVUIQBWFDBJLDWLEBOEYNVMXFAGJB");

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
    msg.setTimeStamp(0.347225256479);
    msg.setSource(63754U);
    msg.setSourceEntity(35U);
    msg.setDestination(41390U);
    msg.setDestinationEntity(133U);
    msg.value = 0.96263416185;
    msg.confidence = 0.622810331301;
    msg.opmodes.assign("CZNYCAZDSAPFGNLJTTEJKEYZEFUZJBYKMWOQGRZCWGNLEKTXBANIJJOHTXDAPPRSXCLXPBSOCFTMVBCVPQQ");

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
    msg.setTimeStamp(0.706645005566);
    msg.setSource(55266U);
    msg.setSourceEntity(20U);
    msg.setDestination(7232U);
    msg.setDestinationEntity(151U);
    msg.value = 0.890023909207;
    msg.confidence = 0.164242382435;
    msg.opmodes.assign("PPNBEEAUADMIQNTOPDVXZRAQNLMYWFTQCYKSNDYZBVGRSTNACEMKJTAEFKKALDBYWCNIGIZFFDVXXYTXWBHTMUGKKPGMTXRZJIERYIRUGBLMJELVOFQGFHLSACHPKZUAKRJRSSOXQIQLUZHVTGSWNQPJEQJGCUBSHNGVB");

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
    msg.setTimeStamp(0.728809513368);
    msg.setSource(4747U);
    msg.setSourceEntity(201U);
    msg.setDestination(24129U);
    msg.setDestinationEntity(94U);
    msg.itow = 3810859414U;
    msg.lat = 0.938861188459;
    msg.lon = 0.564788146471;
    msg.height_ell = 0.985526420392;
    msg.height_sea = 0.0611212377472;
    msg.hacc = 0.16786867751;
    msg.vacc = 0.638126733037;
    msg.vel_n = 0.68423241481;
    msg.vel_e = 0.335306170782;
    msg.vel_d = 0.27922426483;
    msg.speed = 0.91214334349;
    msg.gspeed = 0.0714967300918;
    msg.heading = 0.152654886843;
    msg.sacc = 0.32722707695;
    msg.cacc = 0.467219740234;

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
    msg.setTimeStamp(0.432399898338);
    msg.setSource(36022U);
    msg.setSourceEntity(128U);
    msg.setDestination(8278U);
    msg.setDestinationEntity(77U);
    msg.itow = 688875612U;
    msg.lat = 0.820589390479;
    msg.lon = 0.425810422;
    msg.height_ell = 0.471791580356;
    msg.height_sea = 0.363532859782;
    msg.hacc = 0.134673317032;
    msg.vacc = 0.36357132173;
    msg.vel_n = 0.991420516408;
    msg.vel_e = 0.967846768377;
    msg.vel_d = 0.0765544325911;
    msg.speed = 0.429946108743;
    msg.gspeed = 0.652126605135;
    msg.heading = 0.0292660247655;
    msg.sacc = 0.334646649725;
    msg.cacc = 0.878153854413;

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
    msg.setTimeStamp(0.544245660653);
    msg.setSource(57822U);
    msg.setSourceEntity(69U);
    msg.setDestination(30597U);
    msg.setDestinationEntity(246U);
    msg.itow = 2860424702U;
    msg.lat = 0.62792859659;
    msg.lon = 0.259383929302;
    msg.height_ell = 0.989200586518;
    msg.height_sea = 0.561920223872;
    msg.hacc = 0.618446024067;
    msg.vacc = 0.38154434758;
    msg.vel_n = 0.24620865585;
    msg.vel_e = 0.25355519628;
    msg.vel_d = 0.568296824691;
    msg.speed = 0.213417293345;
    msg.gspeed = 0.925054377527;
    msg.heading = 0.979196560762;
    msg.sacc = 0.873217237042;
    msg.cacc = 0.693299561302;

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
    msg.setTimeStamp(0.743827369776);
    msg.setSource(1685U);
    msg.setSourceEntity(209U);
    msg.setDestination(61284U);
    msg.setDestinationEntity(78U);
    msg.id = 32U;
    msg.value = 0.567018348945;

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
    msg.setTimeStamp(0.276734623679);
    msg.setSource(37121U);
    msg.setSourceEntity(126U);
    msg.setDestination(29346U);
    msg.setDestinationEntity(111U);
    msg.id = 47U;
    msg.value = 0.159877630399;

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
    msg.setTimeStamp(0.25062612183);
    msg.setSource(21076U);
    msg.setSourceEntity(9U);
    msg.setDestination(47421U);
    msg.setDestinationEntity(179U);
    msg.id = 218U;
    msg.value = 0.237155062898;

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
    msg.setTimeStamp(0.266347975884);
    msg.setSource(61061U);
    msg.setSourceEntity(114U);
    msg.setDestination(19660U);
    msg.setDestinationEntity(129U);
    msg.x = 0.447528076403;
    msg.y = 0.424532566569;
    msg.z = 0.724471373195;
    msg.phi = 0.205416134636;
    msg.theta = 0.0404817131002;
    msg.psi = 0.00283139563879;

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
    msg.setTimeStamp(0.748303096955);
    msg.setSource(38548U);
    msg.setSourceEntity(3U);
    msg.setDestination(32551U);
    msg.setDestinationEntity(68U);
    msg.x = 0.744136940727;
    msg.y = 0.410059829116;
    msg.z = 0.569673339204;
    msg.phi = 0.493979142261;
    msg.theta = 0.254354585642;
    msg.psi = 0.0369987822488;

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
    msg.setTimeStamp(0.486326326515);
    msg.setSource(27805U);
    msg.setSourceEntity(117U);
    msg.setDestination(46326U);
    msg.setDestinationEntity(202U);
    msg.x = 0.890667362104;
    msg.y = 0.181196817692;
    msg.z = 0.601231594231;
    msg.phi = 0.154552025818;
    msg.theta = 0.737749945796;
    msg.psi = 0.683786599408;

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
    msg.setTimeStamp(0.406193250001);
    msg.setSource(55638U);
    msg.setSourceEntity(43U);
    msg.setDestination(23399U);
    msg.setDestinationEntity(0U);
    msg.beam_width = 0.833894499577;
    msg.beam_height = 0.145355173077;

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
    msg.setTimeStamp(0.374073082438);
    msg.setSource(32488U);
    msg.setSourceEntity(78U);
    msg.setDestination(61602U);
    msg.setDestinationEntity(12U);
    msg.beam_width = 0.133773639655;
    msg.beam_height = 0.557937800919;

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
    msg.setTimeStamp(0.0593791036561);
    msg.setSource(5464U);
    msg.setSourceEntity(213U);
    msg.setDestination(20443U);
    msg.setDestinationEntity(0U);
    msg.beam_width = 0.223916423925;
    msg.beam_height = 0.124160598489;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.588043902669);
    msg.setSource(22299U);
    msg.setSourceEntity(56U);
    msg.setDestination(48354U);
    msg.setDestinationEntity(120U);
    msg.id = 237U;
    msg.zoom = 189U;
    msg.action = 70U;

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
    msg.setTimeStamp(0.395627215535);
    msg.setSource(18488U);
    msg.setSourceEntity(13U);
    msg.setDestination(15779U);
    msg.setDestinationEntity(239U);
    msg.id = 253U;
    msg.zoom = 249U;
    msg.action = 201U;

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
    msg.setTimeStamp(0.356510486755);
    msg.setSource(62390U);
    msg.setSourceEntity(242U);
    msg.setDestination(61759U);
    msg.setDestinationEntity(64U);
    msg.id = 34U;
    msg.zoom = 71U;
    msg.action = 192U;

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
    msg.setTimeStamp(0.373522997236);
    msg.setSource(2533U);
    msg.setSourceEntity(238U);
    msg.setDestination(46682U);
    msg.setDestinationEntity(28U);
    msg.id = 227U;
    msg.value = 0.792772243781;

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
    msg.setTimeStamp(0.320959858953);
    msg.setSource(21670U);
    msg.setSourceEntity(182U);
    msg.setDestination(61242U);
    msg.setDestinationEntity(147U);
    msg.id = 26U;
    msg.value = 0.530755911454;

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
    msg.setTimeStamp(0.793040094065);
    msg.setSource(30720U);
    msg.setSourceEntity(40U);
    msg.setDestination(61958U);
    msg.setDestinationEntity(164U);
    msg.id = 55U;
    msg.value = 0.746025587296;

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
    msg.setTimeStamp(0.833669245312);
    msg.setSource(61103U);
    msg.setSourceEntity(107U);
    msg.setDestination(4498U);
    msg.setDestinationEntity(242U);
    msg.id = 84U;
    msg.value = 0.0558397815007;

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
    msg.setTimeStamp(0.786788503593);
    msg.setSource(46302U);
    msg.setSourceEntity(108U);
    msg.setDestination(28388U);
    msg.setDestinationEntity(75U);
    msg.id = 206U;
    msg.value = 0.662444593562;

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
    msg.setTimeStamp(0.687159158246);
    msg.setSource(53039U);
    msg.setSourceEntity(14U);
    msg.setDestination(60794U);
    msg.setDestinationEntity(193U);
    msg.id = 135U;
    msg.value = 0.796417274657;

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
    msg.setTimeStamp(0.682681013232);
    msg.setSource(32930U);
    msg.setSourceEntity(162U);
    msg.setDestination(28303U);
    msg.setDestinationEntity(29U);
    msg.id = 191U;
    msg.angle = 0.631313744337;

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
    msg.setTimeStamp(0.588382823651);
    msg.setSource(53006U);
    msg.setSourceEntity(76U);
    msg.setDestination(25558U);
    msg.setDestinationEntity(248U);
    msg.id = 101U;
    msg.angle = 0.0261895777442;

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
    msg.setTimeStamp(0.481842530925);
    msg.setSource(60977U);
    msg.setSourceEntity(202U);
    msg.setDestination(35265U);
    msg.setDestinationEntity(222U);
    msg.id = 61U;
    msg.angle = 0.577154217106;

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
    msg.setTimeStamp(0.909620097742);
    msg.setSource(35825U);
    msg.setSourceEntity(177U);
    msg.setDestination(1187U);
    msg.setDestinationEntity(220U);
    msg.op = 173U;
    msg.actions.assign("MBHHBHRNPYINRTIPYCEFYFVGLOITBLQROTWCJQKVOSSNSMFHCLDXFKWQYVHNDBGYISXZJVCTAPCVDEVACWMKGUSIIOGJDLJCDNXVHUXRTIPMDZPQUYBJZNSVQFXEBKHOBAESBLJFIBZMQZGRECNRWJAIYMOKZUFAWQSZZJMMYWKDRWLHUEXEKGSDXAACRNZXMJKOQBWVO");

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
    msg.setTimeStamp(0.135065321703);
    msg.setSource(62439U);
    msg.setSourceEntity(69U);
    msg.setDestination(55769U);
    msg.setDestinationEntity(226U);
    msg.op = 180U;
    msg.actions.assign("OFSFHMRBHKIMZCVPXLLXZIBXKZOAXBTBLMLFYZJCTHGFVFCWTFEQPSWENCWILMCWBGNWQUCZGMRNKAWEEOEVHJMAQRQDRNHAIZPTOZJAAETJKWODIOSTJOXPMFVDHMPWEAUPIVYYJLSKUGE");

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
    msg.setTimeStamp(0.512099847091);
    msg.setSource(44717U);
    msg.setSourceEntity(212U);
    msg.setDestination(11613U);
    msg.setDestinationEntity(219U);
    msg.op = 201U;
    msg.actions.assign("MJEFEDWFOZCIOMHVAGAUGPFTGJBROHPTNIBWCASYAORUOWQTSRWFXNXMBJUDQPZGLAMNUXCPZLFYMTGIXYIJQRYYEUPWIPTDOURZFPNMZWEEHVNIFKTEDRACERKYCGGDSYLIQNTLQMTWJAONZXQKCNKQTRZNDFATXLROCCUYBBBECDJZVVBLFXSIHSVINBVXJFHS");

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
    msg.setTimeStamp(0.414122386547);
    msg.setSource(13982U);
    msg.setSourceEntity(240U);
    msg.setDestination(48896U);
    msg.setDestinationEntity(97U);
    msg.actions.assign("EIOKXPHEVTPHCETATRHKNRFEDRMBALDBBKIVONNNCUTQSCFSOSGWXFOFNYGVKRFDYKRHWEMUHWQPUIYZZZGYSLVZCLLJHNWLFZLSFXGESYWGJAIYHJXXOQODOCZOPPBDJNSRKEAPHUPFQNILXTZWQBGMYJHBWDUKXJOBAMIGQYKCIQAZBLPBUVCDDWA");

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
    msg.setTimeStamp(0.928353994673);
    msg.setSource(45715U);
    msg.setSourceEntity(1U);
    msg.setDestination(34240U);
    msg.setDestinationEntity(168U);
    msg.actions.assign("VZSHHUJGLKIIMRTKOXAJJCVENXNVHJZMXGDXTBWVGETSEAUDSCXZELFAEVNPTAMROECDNEDHXFXZPLGRCKQJWQWBOSSZUYJOSVHZTKELESNSDRBWMIKWNIRTQBGDDWPLCGWPFPYODAGIUFGUR");

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
    msg.setTimeStamp(0.958579104844);
    msg.setSource(36231U);
    msg.setSourceEntity(63U);
    msg.setDestination(63696U);
    msg.setDestinationEntity(208U);
    msg.actions.assign("XTBARXLRYLKHADDERESSAPPZXOPNLXUQXWQCMSRAKPTQTMXDIQNHZRKSKTSYFEZGTYAYVOUHINAULCFQWTBCJYEWRUXOCVJDHSZMYPCIRLCBMJBFBRIIGZYJHYPSAQUUGGGFJOHKNKMVGZMKTXDBOVIHIXJLSVHDIWFBOHDYEPULDW");

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
    msg.setTimeStamp(0.183005943612);
    msg.setSource(25758U);
    msg.setSourceEntity(200U);
    msg.setDestination(28762U);
    msg.setDestinationEntity(177U);
    msg.button = 121U;
    msg.value = 171U;

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
    msg.setTimeStamp(0.194115809191);
    msg.setSource(27498U);
    msg.setSourceEntity(212U);
    msg.setDestination(8837U);
    msg.setDestinationEntity(25U);
    msg.button = 225U;
    msg.value = 204U;

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
    msg.setTimeStamp(0.0369202341562);
    msg.setSource(51016U);
    msg.setSourceEntity(36U);
    msg.setDestination(38256U);
    msg.setDestinationEntity(81U);
    msg.button = 160U;
    msg.value = 97U;

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
    msg.setTimeStamp(0.663328244118);
    msg.setSource(9733U);
    msg.setSourceEntity(53U);
    msg.setDestination(20443U);
    msg.setDestinationEntity(213U);
    msg.op = 174U;
    msg.text.assign("HRPYBHYRIGEZLUCHMTZHNK");

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
    msg.setTimeStamp(0.500691590939);
    msg.setSource(24797U);
    msg.setSourceEntity(32U);
    msg.setDestination(5290U);
    msg.setDestinationEntity(107U);
    msg.op = 172U;
    msg.text.assign("VOEMQLRXXICRXTUIFMUIRZMKBWYOPVILNEJWGHBYGNQOKMTPXBDOGGOTXVZCQJJFEVANOYYSMSHPYNNCOJVTDGYHYFSPOVLXPVJFLZSQDHCRGNYUZUUSTHJIMFQNPDR");

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
    msg.setTimeStamp(0.348306262804);
    msg.setSource(853U);
    msg.setSourceEntity(140U);
    msg.setDestination(53060U);
    msg.setDestinationEntity(112U);
    msg.op = 51U;
    msg.text.assign("OGWHNVASQKCYQWYXWJZUAGPBWJTSZCIWUWCOJGPBMLXDZAAPU");

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
    msg.setTimeStamp(0.608530609933);
    msg.setSource(57937U);
    msg.setSourceEntity(222U);
    msg.setDestination(64052U);
    msg.setDestinationEntity(205U);
    msg.op = 248U;
    msg.time_remain = 0.721207990008;
    msg.sched_time = 0.216285610202;

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
    msg.setTimeStamp(0.246745097826);
    msg.setSource(5034U);
    msg.setSourceEntity(242U);
    msg.setDestination(9221U);
    msg.setDestinationEntity(149U);
    msg.op = 161U;
    msg.time_remain = 0.95975914388;
    msg.sched_time = 0.915815597541;

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
    msg.setTimeStamp(0.552811334679);
    msg.setSource(37484U);
    msg.setSourceEntity(109U);
    msg.setDestination(49986U);
    msg.setDestinationEntity(133U);
    msg.op = 239U;
    msg.time_remain = 0.221685520884;
    msg.sched_time = 0.274204234709;

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
    msg.setTimeStamp(0.404294047828);
    msg.setSource(39878U);
    msg.setSourceEntity(45U);
    msg.setDestination(12412U);
    msg.setDestinationEntity(40U);
    msg.name.assign("NEIQGJRVSSDRZOPQAPNNISCWNEICZCINJERRGRAQGUQJEWIOLJZWRYGWXKUHJHKZHX");
    msg.op = 122U;
    msg.sched_time = 0.995277223565;

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
    msg.setTimeStamp(0.0464950422043);
    msg.setSource(50767U);
    msg.setSourceEntity(25U);
    msg.setDestination(60674U);
    msg.setDestinationEntity(34U);
    msg.name.assign("HDSTZSRJQIHVBOBYUBNAVGZTAXKAWMVLYGBQRCAFHPTTRGJLVWDYCXEKLVPIKUGHLYGJOVEYGLXNDWWVJNXHESHSRTODMDPDSHIQQFKREAWZBOKONIUUAC");
    msg.op = 223U;
    msg.sched_time = 0.914656699645;

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
    msg.setTimeStamp(0.854512956372);
    msg.setSource(54937U);
    msg.setSourceEntity(171U);
    msg.setDestination(49570U);
    msg.setDestinationEntity(58U);
    msg.name.assign("APQMZSPAETINVYHROAMUNVBOAGOFJYYIVDNWVKDHUCDTRXPADYUWGCDJLGTNYBSQGPBOSUMDDTPPBJXOPDJKFLQWRPMXVQLUZQZSJUAILHSRTZEEXNHWFCTHFJMNOBMGJVEKPZGFKIRZIFLOGIVCURSVHYBQYXUWEZYVMGVWBEMEUOKNMITAXLIXZCYHOIJGWKCAKQRBFEDKHAJTRGYHTJXWLUTSOARDPHFNXEKXSINNMQESFCLBFLLBK");
    msg.op = 106U;
    msg.sched_time = 0.898036010032;

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
    msg.setTimeStamp(0.305241495558);
    msg.setSource(1514U);
    msg.setSourceEntity(187U);
    msg.setDestination(61951U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.346020659374);
    msg.setSource(37166U);
    msg.setSourceEntity(183U);
    msg.setDestination(40730U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.904356317487);
    msg.setSource(15820U);
    msg.setSourceEntity(113U);
    msg.setDestination(38687U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.875806306308);
    msg.setSource(17439U);
    msg.setSourceEntity(125U);
    msg.setDestination(26641U);
    msg.setDestinationEntity(179U);
    msg.name.assign("VMTEZILMPYKDRVQQULBLOZOIJKRKICCSJGUZUNEPKFTBUQLHAHXFSHFUMMGHQXAKCWZEGZHQLFMZYNZKBTICFXAOVPSLEMWCWQQPCAEWP");
    msg.state = 245U;

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
    msg.setTimeStamp(0.849041402626);
    msg.setSource(20953U);
    msg.setSourceEntity(58U);
    msg.setDestination(16754U);
    msg.setDestinationEntity(30U);
    msg.name.assign("RLVBEYCFZUEXGXBDWSKVVZZXHTYHLJAORMVDHTOLYCOVQFAGWKFGZBEVJJZVTXHNNIQBSCWAXBSSLPHDJIBOJNIIDBKCJGADTJUZMOPMJDFL");
    msg.state = 179U;

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
    msg.setTimeStamp(0.255182121978);
    msg.setSource(57743U);
    msg.setSourceEntity(9U);
    msg.setDestination(49335U);
    msg.setDestinationEntity(234U);
    msg.name.assign("RLBIICKPEVUCHHOLZNTVXOYVYAOFLCTTUBQATLFJNYWAHSRINXAMKGJKFMOKLIJNHUQLVLVZXTABOJFKNRQYTDGEELMHERVQOSEUMNDIDRAGCQWMFUXQEGSVSFSUVFIHBXPSWYNZURWMYQGJBJGDERFQQBPIVZRCGWMJZMBDZPOKYHKUPOEIKJNXCGZPAGDYRJYSCBPZUPDRPXHECWSQHAOTWXIXITAWKTPVDALMNGKDSTZ");
    msg.state = 25U;

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
    msg.setTimeStamp(0.549709985478);
    msg.setSource(11718U);
    msg.setSourceEntity(105U);
    msg.setDestination(63007U);
    msg.setDestinationEntity(106U);
    msg.name.assign("XPADHYZKYDGEWJNJZIMVTAMDPPQFGXTYXUOJBRCHOGUWHOTMUYAGNZWMPLSKIDKHINQGROXXHGCLQQEEEICYUZQGSTRTWQFOXYCSADBUYRGKSENHRQDVEDVZPAJHUCLNFKWNBLOAZFCBLSXMIDJYRCPFKAZBWTECSPSSUEBBVZEKWMWYIJVQDBNFFKFLVT");
    msg.value = 4U;

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
    msg.setTimeStamp(0.999746096819);
    msg.setSource(19876U);
    msg.setSourceEntity(203U);
    msg.setDestination(39027U);
    msg.setDestinationEntity(244U);
    msg.name.assign("DTATROJZZABHARYVDQQNCUBUNZJCNWNXWXNXKXOYGUMHGJJLANPPNJUFOHQAXCIPWUNOHOQMRLHPVMTIREHUFYLRFEJUGOGHRSIDVIZGSWCBPBDLYOQLFUQEOWLKSCRNAR");
    msg.value = 245U;

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
    msg.setTimeStamp(0.0235951170516);
    msg.setSource(57275U);
    msg.setSourceEntity(101U);
    msg.setDestination(36805U);
    msg.setDestinationEntity(20U);
    msg.name.assign("DPCKSDDUOJCTRJMENTUHDAFHVMKLUEZMAAXCTXJEOMWPGUANGYVCRYITEEKOTHQRKYJEVANLWKNOCLOCNJKLBYGPFVXBZNTQPLMESFPXBSYWKVHIHJK");
    msg.value = 122U;

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
    msg.setTimeStamp(0.868567083871);
    msg.setSource(55009U);
    msg.setSourceEntity(242U);
    msg.setDestination(46513U);
    msg.setDestinationEntity(146U);
    msg.name.assign("JJCAVXWFEEDKZKWOBQAVGUMQNEOYZHTXHGVWMHTYCHEKJEUTSERBDEGDKUXLMOCCGMRNESAVORAWDFNKFYVGARPIIKHUYQRZYSDQJLBPHIQTASCFVHLXIEUZSZGBNJA");

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
    msg.setTimeStamp(0.290177357422);
    msg.setSource(43517U);
    msg.setSourceEntity(122U);
    msg.setDestination(29125U);
    msg.setDestinationEntity(99U);
    msg.name.assign("YJMKCNXVACLTYYDHFOMCXCJUQQMESMNXMQFDUQZIECYBYKZWRYKKMUSNPIWLLTCCUJOZHSOFFCWNQPATGBBPMRIYFDHEUADIOBMWKAAPIEYTAYGRKLHVHIRRKJZVNUWOIZXSBWSCXIMPOGXVNWWDEJTJJZT");

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
    msg.setTimeStamp(0.888545417427);
    msg.setSource(53165U);
    msg.setSourceEntity(51U);
    msg.setDestination(135U);
    msg.setDestinationEntity(83U);
    msg.name.assign("OWWFFTDYMCVHZXCOKYZCHTXEDABHCVVYGTVQECLZQEXOARVXSYVDCOIPNWKAHEQOAJQFHYXLPJFBDQNMGJGIYNMZCNEQSXLLAZATFIZUOZJNFRAESMWBTNBNOJDUIRPGKREPSKHRYMBSDRKZPFYSOMSTOBUBDGPRAOWZLGMXZTVPRAIWGTSHKUWXPFCDMELYSUUHBKEPUIGLKLJRJIECFVNVTRL");

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
    msg.setTimeStamp(0.277116198009);
    msg.setSource(62016U);
    msg.setSourceEntity(129U);
    msg.setDestination(56512U);
    msg.setDestinationEntity(133U);
    msg.name.assign("QVOQUQHJSDCNONWEIHYATGYNKXARUJEBDYGCWERIQFTSMGTPJZONKMDKZOVFMOZCMTXZHWAQXKCGSRODASFCMGFHJEBUYYZQRBRCWBBPQHRTNOABLNFVNULDSBEDKGWPNVPUUE");
    msg.value = 88U;

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
    msg.setTimeStamp(0.445846667741);
    msg.setSource(37247U);
    msg.setSourceEntity(151U);
    msg.setDestination(10512U);
    msg.setDestinationEntity(56U);
    msg.name.assign("BFJYJDRBHACIKTEPCOLVLIRTIVQOJISH");
    msg.value = 136U;

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
    msg.setTimeStamp(0.665582210735);
    msg.setSource(60747U);
    msg.setSourceEntity(18U);
    msg.setDestination(55167U);
    msg.setDestinationEntity(173U);
    msg.name.assign("UPMVASNUXPNVQJTMDPNMVDNIYFEZFDYRAKBLWCBZRTENAENE");
    msg.value = 180U;

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
    msg.setTimeStamp(0.245269545901);
    msg.setSource(6127U);
    msg.setSourceEntity(93U);
    msg.setDestination(34920U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.734402944819;
    msg.lon = 0.210219127562;
    msg.height = 0.143208211825;
    msg.x = 0.399709449732;
    msg.y = 0.812357898328;
    msg.z = 0.309052364547;
    msg.phi = 0.0171871376417;
    msg.theta = 0.524459695688;
    msg.psi = 0.390270056517;
    msg.u = 0.654789540957;
    msg.v = 0.718197876176;
    msg.w = 0.111088195832;
    msg.vx = 0.951105118221;
    msg.vy = 0.36281360309;
    msg.vz = 0.0974071963972;
    msg.p = 0.68888797249;
    msg.q = 0.198427874978;
    msg.r = 0.869548065593;
    msg.depth = 0.426974036113;
    msg.alt = 0.572959224353;

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
    msg.setTimeStamp(0.27208547214);
    msg.setSource(42425U);
    msg.setSourceEntity(114U);
    msg.setDestination(35613U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.229010207399;
    msg.lon = 0.425744980232;
    msg.height = 0.933099252969;
    msg.x = 0.446248557975;
    msg.y = 0.246346592272;
    msg.z = 0.707538060562;
    msg.phi = 0.467506720826;
    msg.theta = 0.360638713084;
    msg.psi = 0.767249307364;
    msg.u = 0.0114427464547;
    msg.v = 0.364405941503;
    msg.w = 0.0195112912717;
    msg.vx = 0.685543179321;
    msg.vy = 0.877642546111;
    msg.vz = 0.78566131757;
    msg.p = 0.321370607425;
    msg.q = 0.509460517644;
    msg.r = 0.977657017609;
    msg.depth = 0.037418795675;
    msg.alt = 0.638574935823;

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
    msg.setTimeStamp(0.999260206465);
    msg.setSource(54162U);
    msg.setSourceEntity(193U);
    msg.setDestination(22143U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.429620434836;
    msg.lon = 0.410009035794;
    msg.height = 0.576144230999;
    msg.x = 0.708707847445;
    msg.y = 0.820406567723;
    msg.z = 0.0662098222945;
    msg.phi = 0.0740544622764;
    msg.theta = 0.126625064149;
    msg.psi = 0.162560131482;
    msg.u = 0.160164294827;
    msg.v = 0.00377642897892;
    msg.w = 0.800095828892;
    msg.vx = 0.708221621534;
    msg.vy = 0.281698077368;
    msg.vz = 0.434796543356;
    msg.p = 0.996655908051;
    msg.q = 0.654883101035;
    msg.r = 0.926134562713;
    msg.depth = 0.373837428075;
    msg.alt = 0.0514296199396;

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
    msg.setTimeStamp(0.888801352371);
    msg.setSource(30979U);
    msg.setSourceEntity(231U);
    msg.setDestination(18853U);
    msg.setDestinationEntity(78U);
    msg.x = 0.353900409779;
    msg.y = 0.425095635582;
    msg.z = 0.334638417014;

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
    msg.setTimeStamp(0.217975883745);
    msg.setSource(15036U);
    msg.setSourceEntity(192U);
    msg.setDestination(31468U);
    msg.setDestinationEntity(209U);
    msg.x = 0.904990412585;
    msg.y = 0.16827644672;
    msg.z = 0.507835089389;

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
    msg.setTimeStamp(0.965957007173);
    msg.setSource(16516U);
    msg.setSourceEntity(92U);
    msg.setDestination(36610U);
    msg.setDestinationEntity(107U);
    msg.x = 0.0903279295095;
    msg.y = 0.282180318889;
    msg.z = 0.571784728679;

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
    msg.setTimeStamp(0.471043784675);
    msg.setSource(4370U);
    msg.setSourceEntity(12U);
    msg.setDestination(10183U);
    msg.setDestinationEntity(208U);
    msg.value = 0.170184498267;

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
    msg.setTimeStamp(0.234214463855);
    msg.setSource(27070U);
    msg.setSourceEntity(2U);
    msg.setDestination(49280U);
    msg.setDestinationEntity(11U);
    msg.value = 0.639811023306;

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
    msg.setTimeStamp(0.254911215288);
    msg.setSource(24179U);
    msg.setSourceEntity(75U);
    msg.setDestination(9222U);
    msg.setDestinationEntity(176U);
    msg.value = 0.338171091092;

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
    msg.setTimeStamp(0.889885044673);
    msg.setSource(46255U);
    msg.setSourceEntity(191U);
    msg.setDestination(21985U);
    msg.setDestinationEntity(176U);
    msg.value = 0.100519655494;

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
    msg.setTimeStamp(0.453337324266);
    msg.setSource(36761U);
    msg.setSourceEntity(238U);
    msg.setDestination(35124U);
    msg.setDestinationEntity(238U);
    msg.value = 0.0487069751381;

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
    msg.setTimeStamp(0.277320260251);
    msg.setSource(61461U);
    msg.setSourceEntity(239U);
    msg.setDestination(4915U);
    msg.setDestinationEntity(173U);
    msg.value = 0.337085140681;

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
    msg.setTimeStamp(0.842662092088);
    msg.setSource(16334U);
    msg.setSourceEntity(109U);
    msg.setDestination(58986U);
    msg.setDestinationEntity(198U);
    msg.x = 0.211733275208;
    msg.y = 0.637323277647;
    msg.z = 0.501648632807;
    msg.phi = 0.449164266325;
    msg.theta = 0.488963251445;
    msg.psi = 0.519273021427;
    msg.p = 0.39749519458;
    msg.q = 0.895665333669;
    msg.r = 0.431105815676;
    msg.u = 0.959353640317;
    msg.v = 0.294450329286;
    msg.w = 0.220251513248;
    msg.bias_psi = 0.306820100859;
    msg.bias_r = 0.48822589422;

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
    msg.setTimeStamp(0.373855738701);
    msg.setSource(21321U);
    msg.setSourceEntity(206U);
    msg.setDestination(34769U);
    msg.setDestinationEntity(194U);
    msg.x = 0.869121559263;
    msg.y = 0.300140764534;
    msg.z = 0.249937167912;
    msg.phi = 0.33436962566;
    msg.theta = 0.535368562293;
    msg.psi = 0.665838258203;
    msg.p = 0.345860578458;
    msg.q = 0.115450635067;
    msg.r = 0.798592280686;
    msg.u = 0.0761321858075;
    msg.v = 0.307131254555;
    msg.w = 0.607969696471;
    msg.bias_psi = 0.808928332219;
    msg.bias_r = 0.26099390987;

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
    msg.setTimeStamp(0.668249515454);
    msg.setSource(8209U);
    msg.setSourceEntity(167U);
    msg.setDestination(4250U);
    msg.setDestinationEntity(83U);
    msg.x = 0.103546110487;
    msg.y = 0.320982682813;
    msg.z = 0.728239438362;
    msg.phi = 0.556417663963;
    msg.theta = 0.43817539237;
    msg.psi = 0.801320418534;
    msg.p = 0.555515540597;
    msg.q = 0.839097281434;
    msg.r = 0.679182006274;
    msg.u = 0.998082735261;
    msg.v = 0.0370297757233;
    msg.w = 0.39451979448;
    msg.bias_psi = 0.688594025836;
    msg.bias_r = 0.844884596304;

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
    msg.setTimeStamp(0.680460913633);
    msg.setSource(20233U);
    msg.setSourceEntity(219U);
    msg.setDestination(42804U);
    msg.setDestinationEntity(204U);
    msg.bias_psi = 0.219467965491;
    msg.bias_r = 0.104144441068;
    msg.cog = 0.663824741542;
    msg.cyaw = 0.676111262773;
    msg.lbl_rej_level = 0.550616686203;
    msg.gps_rej_level = 0.0755522775836;
    msg.custom_x = 0.606769554298;
    msg.custom_y = 0.950323013429;
    msg.custom_z = 0.41685871861;

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
    msg.setTimeStamp(0.441493083401);
    msg.setSource(11066U);
    msg.setSourceEntity(105U);
    msg.setDestination(60952U);
    msg.setDestinationEntity(236U);
    msg.bias_psi = 0.426017660994;
    msg.bias_r = 0.855638212549;
    msg.cog = 0.866195426512;
    msg.cyaw = 0.250984272408;
    msg.lbl_rej_level = 0.547269527655;
    msg.gps_rej_level = 0.630759853595;
    msg.custom_x = 0.493002817197;
    msg.custom_y = 0.37625593768;
    msg.custom_z = 0.540645585298;

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
    msg.setTimeStamp(0.732291955405);
    msg.setSource(55788U);
    msg.setSourceEntity(179U);
    msg.setDestination(56477U);
    msg.setDestinationEntity(150U);
    msg.bias_psi = 0.19649084826;
    msg.bias_r = 0.788479065861;
    msg.cog = 0.206906595693;
    msg.cyaw = 0.824034802887;
    msg.lbl_rej_level = 0.862247910524;
    msg.gps_rej_level = 0.0774095888647;
    msg.custom_x = 0.400849297122;
    msg.custom_y = 0.543928818775;
    msg.custom_z = 0.199528685114;

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
    msg.setTimeStamp(0.728177740651);
    msg.setSource(57750U);
    msg.setSourceEntity(111U);
    msg.setDestination(58783U);
    msg.setDestinationEntity(235U);
    msg.utc_time = 0.672010102783;
    msg.reason = 7U;

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
    msg.setTimeStamp(0.266716777942);
    msg.setSource(12108U);
    msg.setSourceEntity(163U);
    msg.setDestination(45452U);
    msg.setDestinationEntity(184U);
    msg.utc_time = 0.307369475938;
    msg.reason = 126U;

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
    msg.setTimeStamp(0.410924335499);
    msg.setSource(19349U);
    msg.setSourceEntity(195U);
    msg.setDestination(50000U);
    msg.setDestinationEntity(110U);
    msg.utc_time = 0.498614955266;
    msg.reason = 125U;

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
    msg.setTimeStamp(0.959537252592);
    msg.setSource(42861U);
    msg.setSourceEntity(162U);
    msg.setDestination(12986U);
    msg.setDestinationEntity(126U);
    msg.id = 163U;
    msg.range = 0.0500250338755;
    msg.acceptance = 98U;

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
    msg.setTimeStamp(0.715794243196);
    msg.setSource(15974U);
    msg.setSourceEntity(213U);
    msg.setDestination(21808U);
    msg.setDestinationEntity(76U);
    msg.id = 5U;
    msg.range = 0.656154135414;
    msg.acceptance = 39U;

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
    msg.setTimeStamp(0.885806005627);
    msg.setSource(64497U);
    msg.setSourceEntity(192U);
    msg.setDestination(63907U);
    msg.setDestinationEntity(90U);
    msg.id = 27U;
    msg.range = 0.482659527374;
    msg.acceptance = 211U;

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
    msg.setTimeStamp(0.34706879128);
    msg.setSource(48627U);
    msg.setSourceEntity(9U);
    msg.setDestination(33692U);
    msg.setDestinationEntity(3U);
    msg.type = 140U;
    msg.reason = 219U;
    msg.value = 0.480944802696;
    msg.timestep = 0.698482312013;

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
    msg.setTimeStamp(0.943174642672);
    msg.setSource(1867U);
    msg.setSourceEntity(14U);
    msg.setDestination(18533U);
    msg.setDestinationEntity(208U);
    msg.type = 105U;
    msg.reason = 229U;
    msg.value = 0.714017312133;
    msg.timestep = 0.8638973201;

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
    msg.setTimeStamp(0.926959033151);
    msg.setSource(45232U);
    msg.setSourceEntity(164U);
    msg.setDestination(57126U);
    msg.setDestinationEntity(222U);
    msg.type = 219U;
    msg.reason = 163U;
    msg.value = 0.582710509897;
    msg.timestep = 0.215124834953;

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
    msg.setTimeStamp(0.638966727788);
    msg.setSource(23356U);
    msg.setSourceEntity(244U);
    msg.setDestination(5027U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.00160273711043);
    msg.setSource(44805U);
    msg.setSourceEntity(232U);
    msg.setDestination(9663U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.858968087467);
    msg.setSource(52549U);
    msg.setSourceEntity(254U);
    msg.setDestination(14430U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.50693056172);
    msg.setSource(62307U);
    msg.setSourceEntity(225U);
    msg.setDestination(1151U);
    msg.setDestinationEntity(195U);
    msg.beacon.assign("YVDDJDVTSLRXLGUQMKXENNDLEEAAGQTTVWROJNWSTHAQMWFPREYNULTUUUSVFHZZJCBXXDJTXSXIGLWKUFVOVNFWBGEGZWKBPKWMVRHYMINZOXADRIGZNMMAWYKJNOZCUSPGDRITWHAUSCEFKPKFQPOCQRYYEIGHCSCGQLMCDEOLQARVTMCYVPOONPBDNQBZYAOVBPBJQKUYTIHJFEXRBPHZHDJJHIGSYXLCQOLUSISXPKIRFAFBCL");
    msg.x = 0.193832835804;
    msg.y = 0.450997573994;
    msg.depth = 0.928640762623;
    msg.var_x = 0.220072653187;
    msg.var_y = 0.636770679302;

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
    msg.setTimeStamp(0.810489867393);
    msg.setSource(34455U);
    msg.setSourceEntity(60U);
    msg.setDestination(58172U);
    msg.setDestinationEntity(43U);
    msg.beacon.assign("PVMFJUHFJWGVEZFTMUFMTOQWRQFXLSXZUQRESAAYPQSNZYCQOOQOVKBEMNJBBIOIR");
    msg.x = 0.618773503541;
    msg.y = 0.515345002801;
    msg.depth = 0.996204121362;
    msg.var_x = 0.981771229967;
    msg.var_y = 0.646310833891;

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
    msg.setTimeStamp(0.529751269335);
    msg.setSource(61483U);
    msg.setSourceEntity(99U);
    msg.setDestination(17252U);
    msg.setDestinationEntity(230U);
    msg.beacon.assign("FDSHNXMSLEOMOVUHRMXCLHRCVWXNWDJQXGFPZFCRRYYSEVPYXXYQLCFPPQDOYKHSLTDNBKNPEXOFLZBBBFWJJYNAQWVGYIJABUQENAOGHKUZTBWKPWDKZFQVSGLOFFQRCLSTVJMZNLFWBBNDAYGCISUWOKKHIUPDEKOVRKTDEXYRLEKUHAPAURMEWGCCJIIITI");
    msg.x = 0.537121520275;
    msg.y = 0.899227524526;
    msg.depth = 0.395928433854;
    msg.var_x = 0.91483219998;
    msg.var_y = 0.678977999265;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.894204424126);
    msg.setSource(9084U);
    msg.setSourceEntity(178U);
    msg.setDestination(54910U);
    msg.setDestinationEntity(81U);
    msg.value = 0.891711448387;

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
    msg.setTimeStamp(0.122468063628);
    msg.setSource(59340U);
    msg.setSourceEntity(31U);
    msg.setDestination(64329U);
    msg.setDestinationEntity(154U);
    msg.value = 0.927769647037;

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
    msg.setTimeStamp(0.447306882505);
    msg.setSource(10728U);
    msg.setSourceEntity(79U);
    msg.setDestination(54979U);
    msg.setDestinationEntity(76U);
    msg.value = 0.234357658235;

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
    msg.setTimeStamp(0.879696028176);
    msg.setSource(40529U);
    msg.setSourceEntity(250U);
    msg.setDestination(62693U);
    msg.setDestinationEntity(117U);
    msg.value = 0.330525647271;
    msg.z_units = 139U;

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
    msg.setTimeStamp(0.51956063602);
    msg.setSource(16927U);
    msg.setSourceEntity(196U);
    msg.setDestination(49076U);
    msg.setDestinationEntity(70U);
    msg.value = 0.151666739971;
    msg.z_units = 51U;

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
    msg.setTimeStamp(0.440791823915);
    msg.setSource(55081U);
    msg.setSourceEntity(165U);
    msg.setDestination(54607U);
    msg.setDestinationEntity(110U);
    msg.value = 0.716901234508;
    msg.z_units = 66U;

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
    msg.setTimeStamp(0.0428369847033);
    msg.setSource(55814U);
    msg.setSourceEntity(8U);
    msg.setDestination(21063U);
    msg.setDestinationEntity(196U);
    msg.value = 0.479775428105;
    msg.speed_units = 232U;

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
    msg.setTimeStamp(0.497102633467);
    msg.setSource(56173U);
    msg.setSourceEntity(145U);
    msg.setDestination(4562U);
    msg.setDestinationEntity(131U);
    msg.value = 0.476794619053;
    msg.speed_units = 136U;

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
    msg.setTimeStamp(0.680272535108);
    msg.setSource(40282U);
    msg.setSourceEntity(114U);
    msg.setDestination(57791U);
    msg.setDestinationEntity(226U);
    msg.value = 0.525560338981;
    msg.speed_units = 63U;

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
    msg.setTimeStamp(0.0637033702713);
    msg.setSource(24939U);
    msg.setSourceEntity(94U);
    msg.setDestination(42238U);
    msg.setDestinationEntity(94U);
    msg.value = 0.452232558024;

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
    msg.setTimeStamp(0.835557994595);
    msg.setSource(59954U);
    msg.setSourceEntity(172U);
    msg.setDestination(53877U);
    msg.setDestinationEntity(2U);
    msg.value = 0.797343784301;

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
    msg.setTimeStamp(0.414270893843);
    msg.setSource(47853U);
    msg.setSourceEntity(15U);
    msg.setDestination(33273U);
    msg.setDestinationEntity(39U);
    msg.value = 0.295603046703;

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
    msg.setTimeStamp(0.98176983496);
    msg.setSource(27412U);
    msg.setSourceEntity(230U);
    msg.setDestination(40614U);
    msg.setDestinationEntity(31U);
    msg.value = 0.601838509141;

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
    msg.setTimeStamp(0.489525726771);
    msg.setSource(52259U);
    msg.setSourceEntity(112U);
    msg.setDestination(14770U);
    msg.setDestinationEntity(72U);
    msg.value = 0.770107349981;

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
    msg.setTimeStamp(0.293728941035);
    msg.setSource(43530U);
    msg.setSourceEntity(138U);
    msg.setDestination(32811U);
    msg.setDestinationEntity(229U);
    msg.value = 0.791197052518;

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
    msg.setTimeStamp(0.171065174213);
    msg.setSource(23856U);
    msg.setSourceEntity(245U);
    msg.setDestination(57212U);
    msg.setDestinationEntity(216U);
    msg.value = 0.951084972265;

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
    msg.setTimeStamp(0.993443479435);
    msg.setSource(29877U);
    msg.setSourceEntity(28U);
    msg.setDestination(34835U);
    msg.setDestinationEntity(146U);
    msg.value = 0.194394242472;

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
    msg.setTimeStamp(0.150887743979);
    msg.setSource(48462U);
    msg.setSourceEntity(134U);
    msg.setDestination(50120U);
    msg.setDestinationEntity(183U);
    msg.value = 0.59940307187;

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
    msg.setTimeStamp(0.534370914485);
    msg.setSource(24976U);
    msg.setSourceEntity(216U);
    msg.setDestination(37197U);
    msg.setDestinationEntity(18U);
    msg.start_lat = 0.823504760877;
    msg.start_lon = 0.682035056753;
    msg.start_z = 0.195552623459;
    msg.start_z_units = 212U;
    msg.end_lat = 0.567776987403;
    msg.end_lon = 0.28718347171;
    msg.end_z = 0.269572344335;
    msg.end_z_units = 23U;
    msg.speed = 0.375025169803;
    msg.speed_units = 129U;
    msg.lradius = 0.76942512901;
    msg.flags = 158U;

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
    msg.setTimeStamp(0.0820675908362);
    msg.setSource(25530U);
    msg.setSourceEntity(127U);
    msg.setDestination(21093U);
    msg.setDestinationEntity(194U);
    msg.start_lat = 0.372471059542;
    msg.start_lon = 0.994516778965;
    msg.start_z = 0.737737502045;
    msg.start_z_units = 242U;
    msg.end_lat = 0.37570738474;
    msg.end_lon = 0.407171424013;
    msg.end_z = 0.853578850841;
    msg.end_z_units = 241U;
    msg.speed = 0.597533825554;
    msg.speed_units = 165U;
    msg.lradius = 0.363029270029;
    msg.flags = 185U;

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
    msg.setTimeStamp(0.294682057501);
    msg.setSource(22700U);
    msg.setSourceEntity(6U);
    msg.setDestination(21060U);
    msg.setDestinationEntity(85U);
    msg.start_lat = 0.237265886601;
    msg.start_lon = 0.1612079672;
    msg.start_z = 0.179563270329;
    msg.start_z_units = 118U;
    msg.end_lat = 0.266389826039;
    msg.end_lon = 0.906808493908;
    msg.end_z = 0.897498921353;
    msg.end_z_units = 124U;
    msg.speed = 0.144136659;
    msg.speed_units = 136U;
    msg.lradius = 0.520259591734;
    msg.flags = 45U;

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
    msg.setTimeStamp(0.380294250479);
    msg.setSource(11138U);
    msg.setSourceEntity(240U);
    msg.setDestination(22169U);
    msg.setDestinationEntity(232U);
    msg.x = 0.0228426217017;
    msg.y = 0.842411988001;
    msg.z = 0.842849344312;
    msg.k = 0.671758840566;
    msg.m = 0.731692134211;
    msg.n = 0.37513243988;
    msg.flags = 223U;

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
    msg.setTimeStamp(0.607454731858);
    msg.setSource(2682U);
    msg.setSourceEntity(39U);
    msg.setDestination(17421U);
    msg.setDestinationEntity(88U);
    msg.x = 0.592724814612;
    msg.y = 0.83036710829;
    msg.z = 0.219885838343;
    msg.k = 0.201642861403;
    msg.m = 0.773915002909;
    msg.n = 0.38781593645;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.91174096946);
    msg.setSource(30456U);
    msg.setSourceEntity(220U);
    msg.setDestination(20299U);
    msg.setDestinationEntity(123U);
    msg.x = 0.864894098884;
    msg.y = 0.712219030501;
    msg.z = 0.753691082987;
    msg.k = 0.0512593180295;
    msg.m = 0.0369445848386;
    msg.n = 0.161463868921;
    msg.flags = 5U;

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
    msg.setTimeStamp(0.530719088562);
    msg.setSource(36781U);
    msg.setSourceEntity(185U);
    msg.setDestination(43116U);
    msg.setDestinationEntity(37U);
    msg.value = 0.168702067045;

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
    msg.setTimeStamp(0.953723798972);
    msg.setSource(19992U);
    msg.setSourceEntity(180U);
    msg.setDestination(40075U);
    msg.setDestinationEntity(64U);
    msg.value = 0.281335458501;

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
    msg.setTimeStamp(0.982061599626);
    msg.setSource(14511U);
    msg.setSourceEntity(231U);
    msg.setDestination(18370U);
    msg.setDestinationEntity(64U);
    msg.value = 0.825722714782;

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
    msg.setTimeStamp(0.995919328603);
    msg.setSource(31834U);
    msg.setSourceEntity(20U);
    msg.setDestination(13794U);
    msg.setDestinationEntity(99U);
    msg.u = 0.0732053361424;
    msg.v = 0.410710581304;
    msg.w = 0.687502307128;
    msg.p = 0.121725107592;
    msg.q = 0.814995787321;
    msg.r = 0.670532473891;
    msg.flags = 58U;

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
    msg.setTimeStamp(0.626877723568);
    msg.setSource(1114U);
    msg.setSourceEntity(22U);
    msg.setDestination(35429U);
    msg.setDestinationEntity(231U);
    msg.u = 0.177037231198;
    msg.v = 0.423387048833;
    msg.w = 0.217828701759;
    msg.p = 0.823486986235;
    msg.q = 0.663424139768;
    msg.r = 0.105759956581;
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
    msg.setTimeStamp(0.0584070079562);
    msg.setSource(23082U);
    msg.setSourceEntity(211U);
    msg.setDestination(53947U);
    msg.setDestinationEntity(118U);
    msg.u = 0.900062257889;
    msg.v = 0.914017496814;
    msg.w = 0.582689779109;
    msg.p = 0.662837988509;
    msg.q = 0.451952240421;
    msg.r = 0.109814716106;
    msg.flags = 138U;

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
    msg.setTimeStamp(0.237028441388);
    msg.setSource(13489U);
    msg.setSourceEntity(243U);
    msg.setDestination(57426U);
    msg.setDestinationEntity(44U);
    msg.start_lat = 0.958511948578;
    msg.start_lon = 0.635807146908;
    msg.start_z = 0.309886345639;
    msg.start_z_units = 129U;
    msg.end_lat = 0.961901000948;
    msg.end_lon = 0.868290441006;
    msg.end_z = 0.3549882957;
    msg.end_z_units = 77U;
    msg.lradius = 0.122981334331;
    msg.flags = 199U;
    msg.x = 0.0378499630363;
    msg.y = 0.772499202863;
    msg.z = 0.309930892393;
    msg.vx = 0.696759017584;
    msg.vy = 0.0684199172653;
    msg.vz = 0.805326173818;
    msg.course_error = 0.656504390339;
    msg.eta = 22913U;

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
    msg.setTimeStamp(0.355915892653);
    msg.setSource(37709U);
    msg.setSourceEntity(77U);
    msg.setDestination(8968U);
    msg.setDestinationEntity(185U);
    msg.start_lat = 0.0932519333733;
    msg.start_lon = 0.0558013944677;
    msg.start_z = 0.943422627363;
    msg.start_z_units = 165U;
    msg.end_lat = 0.0770590994817;
    msg.end_lon = 0.285187905709;
    msg.end_z = 0.139478910654;
    msg.end_z_units = 9U;
    msg.lradius = 0.881165798182;
    msg.flags = 13U;
    msg.x = 0.50693429469;
    msg.y = 0.104428226877;
    msg.z = 0.167186639191;
    msg.vx = 0.505470128116;
    msg.vy = 0.593117568942;
    msg.vz = 0.579813682766;
    msg.course_error = 0.415039951656;
    msg.eta = 21740U;

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
    msg.setTimeStamp(0.77099135514);
    msg.setSource(58027U);
    msg.setSourceEntity(246U);
    msg.setDestination(21817U);
    msg.setDestinationEntity(58U);
    msg.start_lat = 0.000670794932952;
    msg.start_lon = 0.0871583803959;
    msg.start_z = 0.170078977141;
    msg.start_z_units = 185U;
    msg.end_lat = 0.496557347358;
    msg.end_lon = 0.421948756266;
    msg.end_z = 0.211968417833;
    msg.end_z_units = 186U;
    msg.lradius = 0.371629952703;
    msg.flags = 31U;
    msg.x = 0.996399963509;
    msg.y = 0.678478549473;
    msg.z = 0.0344017458053;
    msg.vx = 0.440888636246;
    msg.vy = 0.268421033262;
    msg.vz = 0.991805666952;
    msg.course_error = 0.627082879026;
    msg.eta = 27257U;

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
    msg.setTimeStamp(0.372533363368);
    msg.setSource(4418U);
    msg.setSourceEntity(170U);
    msg.setDestination(31944U);
    msg.setDestinationEntity(78U);
    msg.k = 0.469855315429;
    msg.m = 0.709923143509;
    msg.n = 0.896174348823;

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
    msg.setTimeStamp(0.545802713975);
    msg.setSource(3839U);
    msg.setSourceEntity(131U);
    msg.setDestination(1431U);
    msg.setDestinationEntity(35U);
    msg.k = 0.923739159621;
    msg.m = 0.934228038918;
    msg.n = 0.160042876448;

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
    msg.setTimeStamp(0.163639058813);
    msg.setSource(47258U);
    msg.setSourceEntity(155U);
    msg.setDestination(60366U);
    msg.setDestinationEntity(198U);
    msg.k = 0.831250899616;
    msg.m = 0.482907872167;
    msg.n = 0.508692148892;

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
    msg.setTimeStamp(0.964980235088);
    msg.setSource(64284U);
    msg.setSourceEntity(81U);
    msg.setDestination(20859U);
    msg.setDestinationEntity(9U);
    msg.p = 0.660880349032;
    msg.i = 0.19343119537;
    msg.d = 0.427909265645;
    msg.a = 0.752852565537;

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
    msg.setTimeStamp(0.059066897134);
    msg.setSource(44U);
    msg.setSourceEntity(113U);
    msg.setDestination(6066U);
    msg.setDestinationEntity(61U);
    msg.p = 0.861997909744;
    msg.i = 0.936545392888;
    msg.d = 0.153790365683;
    msg.a = 0.897628976568;

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
    msg.setTimeStamp(0.674532138997);
    msg.setSource(30688U);
    msg.setSourceEntity(101U);
    msg.setDestination(35298U);
    msg.setDestinationEntity(43U);
    msg.p = 0.71250334986;
    msg.i = 0.722267163887;
    msg.d = 0.811593721791;
    msg.a = 0.644743048872;

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
    msg.setTimeStamp(0.104122219081);
    msg.setSource(20529U);
    msg.setSourceEntity(140U);
    msg.setDestination(9163U);
    msg.setDestinationEntity(198U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.601753299562);
    msg.setSource(50291U);
    msg.setSourceEntity(247U);
    msg.setDestination(39208U);
    msg.setDestinationEntity(173U);
    msg.op = 117U;

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
    msg.setTimeStamp(0.0930969419542);
    msg.setSource(25175U);
    msg.setSourceEntity(9U);
    msg.setDestination(55231U);
    msg.setDestinationEntity(251U);
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
    msg.setTimeStamp(0.0751013559386);
    msg.setSource(9267U);
    msg.setSourceEntity(90U);
    msg.setDestination(9571U);
    msg.setDestinationEntity(68U);
    msg.timeout = 55381U;
    msg.lat = 0.117865193532;
    msg.lon = 0.254759927633;
    msg.z = 0.208398272273;
    msg.z_units = 172U;
    msg.speed = 0.880837366157;
    msg.speed_units = 53U;
    msg.roll = 0.532585034307;
    msg.pitch = 0.651634150242;
    msg.yaw = 0.75296376421;
    msg.custom.assign("ORBTJSNJFWHDUDUIEFDKYMCQPQSSZRKNMUBQDSEZQGPVWFOTGSBZUBCOKWMIYYKRUHVFBYHBMYWPXGIFTSMGYW");

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
    msg.setTimeStamp(0.0174547707435);
    msg.setSource(56323U);
    msg.setSourceEntity(231U);
    msg.setDestination(28355U);
    msg.setDestinationEntity(54U);
    msg.timeout = 46859U;
    msg.lat = 0.307162105348;
    msg.lon = 0.604036043856;
    msg.z = 0.362041168627;
    msg.z_units = 197U;
    msg.speed = 0.29762867086;
    msg.speed_units = 103U;
    msg.roll = 0.00416308083118;
    msg.pitch = 0.671662101756;
    msg.yaw = 0.889540539059;
    msg.custom.assign("FEYYTPHRQTBJSDLVOPFXHYGOZXIE");

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
    msg.setTimeStamp(0.317687973816);
    msg.setSource(17940U);
    msg.setSourceEntity(213U);
    msg.setDestination(19273U);
    msg.setDestinationEntity(213U);
    msg.timeout = 32442U;
    msg.lat = 0.793566325121;
    msg.lon = 0.327699639117;
    msg.z = 0.316188096566;
    msg.z_units = 11U;
    msg.speed = 0.695309415893;
    msg.speed_units = 124U;
    msg.roll = 0.226551531237;
    msg.pitch = 0.267390791863;
    msg.yaw = 0.571458658427;
    msg.custom.assign("RKECCBUEGAJOXOWKDCPASTAIKNOFMORKSNR");

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
    msg.setTimeStamp(0.101676422502);
    msg.setSource(9958U);
    msg.setSourceEntity(50U);
    msg.setDestination(1341U);
    msg.setDestinationEntity(117U);
    msg.timeout = 15472U;
    msg.lat = 0.822853906834;
    msg.lon = 0.570526590591;
    msg.z = 0.933514350537;
    msg.z_units = 222U;
    msg.speed = 0.381607058081;
    msg.speed_units = 87U;
    msg.duration = 15884U;
    msg.radius = 0.98845879733;
    msg.flags = 210U;
    msg.custom.assign("RLKQXOHXELMDSVKRBLXYCTWMCLVHOCMYTJKGCWZRNPACQYSYCSZUJEAQJGUVMSHUIIWZEZBFKIVZTGSZJRSBJENLYDDJNEQEFQKXLIBNESUDRHNGRDPBEHMKBAIWTCGKBAHFMFYVITAUZFYWLNFUKVDJQMDVBVTGOSTHHIHDZWBDRCYWNFVOPCPTLGXCHAFAPORRQIPNGLGFQUUDFMAXNMSEOMLXWAPPOROTUXJUZIPYNITWKOWAE");

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
    msg.setTimeStamp(0.214708414718);
    msg.setSource(27380U);
    msg.setSourceEntity(121U);
    msg.setDestination(53673U);
    msg.setDestinationEntity(164U);
    msg.timeout = 18418U;
    msg.lat = 0.0326037855916;
    msg.lon = 0.516562039968;
    msg.z = 0.520035257768;
    msg.z_units = 39U;
    msg.speed = 0.0796949538192;
    msg.speed_units = 72U;
    msg.duration = 52743U;
    msg.radius = 0.97160026977;
    msg.flags = 216U;
    msg.custom.assign("NBUAYLKSMBQGFVZYJRGSBITXUVOOLFRWBUPFIWGCJJLUIACPCXUTOXFADEMVNKDGAIWODUHGLSSLZUJROSQMRPOKOHPEBFAEIWKDEUCGXZVASNRHZAGRHDCJVXEORYJUFYYEQWWPAJNEFIFVVMFJEAQQQYBVXDRPKKUNDTIQXWFMWQZ");

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
    msg.setTimeStamp(0.402130857916);
    msg.setSource(55685U);
    msg.setSourceEntity(120U);
    msg.setDestination(27908U);
    msg.setDestinationEntity(47U);
    msg.timeout = 37359U;
    msg.lat = 0.172843675177;
    msg.lon = 0.805619738598;
    msg.z = 0.698800774284;
    msg.z_units = 23U;
    msg.speed = 0.588603731309;
    msg.speed_units = 88U;
    msg.duration = 15317U;
    msg.radius = 0.730902154746;
    msg.flags = 54U;
    msg.custom.assign("KJQLSTHLAPRDDSZHKGUICSOYJZLJDVWKFPQWQGFDYELIYQCTPIBNAPFAJZGFVWBGJNUIIBCAKMIHKSOGHOPSTLVXCWOMAADLUCTOENYTRKUZ");

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
    msg.setTimeStamp(0.14625886647);
    msg.setSource(10835U);
    msg.setSourceEntity(36U);
    msg.setDestination(51962U);
    msg.setDestinationEntity(133U);
    msg.custom.assign("CWEVSFWFLNQHNBMHRSOYZEEISZ");

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
    msg.setTimeStamp(0.865022118144);
    msg.setSource(38633U);
    msg.setSourceEntity(224U);
    msg.setDestination(42576U);
    msg.setDestinationEntity(183U);
    msg.custom.assign("XQRPNKFXUQHEBIQVABMQFUBVHYPDLTVLHDSUXOVMSGUBLCBDVSRQTQRORIWVGEZFEGECMOQFPFFLLPCVIEZZNFSGEYIXCAUMYPIPZLOPIBLKNHC");

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
    msg.setTimeStamp(0.797564938521);
    msg.setSource(42679U);
    msg.setSourceEntity(199U);
    msg.setDestination(20590U);
    msg.setDestinationEntity(152U);
    msg.custom.assign("HELRULPZFPTGGBDMHZAASHDYOCIEMLUABXRQIDKXJJYQTVNGSUMXOPBSCCEGLFLNETIMUWQUEAOHRBIKMPGXFWACJIXOCHFIHPVSSJLJTYMHDQLTNTPEIN");

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
    msg.setTimeStamp(0.550589570133);
    msg.setSource(39928U);
    msg.setSourceEntity(4U);
    msg.setDestination(25411U);
    msg.setDestinationEntity(237U);
    msg.timeout = 26436U;
    msg.lat = 0.280289663543;
    msg.lon = 0.0702766542856;
    msg.z = 0.485601388626;
    msg.z_units = 87U;
    msg.duration = 7109U;
    msg.speed = 0.375008681295;
    msg.speed_units = 158U;
    msg.type = 28U;
    msg.radius = 0.299866000987;
    msg.length = 0.554605552182;
    msg.bearing = 0.0419154594548;
    msg.direction = 183U;
    msg.custom.assign("YAOEIFBOXNBPRVOPMHYRRHTTLEFHMEPWBLFVWTZQYCWZCMGAGYUKHWYBZBXZMQQOIXDXJRYASZBJOHKQPBZFXBANVNDAJNCMVZHQDIBTSJAUWWCXLACOJHSYFETQGSCLMIDRDNSTVKDGDSUDS");

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
    msg.setTimeStamp(0.125501754793);
    msg.setSource(44920U);
    msg.setSourceEntity(225U);
    msg.setDestination(20467U);
    msg.setDestinationEntity(16U);
    msg.timeout = 46740U;
    msg.lat = 0.664821940998;
    msg.lon = 0.134514274679;
    msg.z = 0.979382781239;
    msg.z_units = 96U;
    msg.duration = 46150U;
    msg.speed = 0.40058131945;
    msg.speed_units = 148U;
    msg.type = 27U;
    msg.radius = 0.414426551577;
    msg.length = 0.209966751749;
    msg.bearing = 0.88034781826;
    msg.direction = 31U;
    msg.custom.assign("WCJRGDFCUEYLTFJXRAEWSDQPHCXLQTPIOEAVLMLDFOHEDHGSXVXBYHSZQVIXIBMLVGNAIMBVNNRR");

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
    msg.setTimeStamp(0.776305317392);
    msg.setSource(34405U);
    msg.setSourceEntity(123U);
    msg.setDestination(40757U);
    msg.setDestinationEntity(194U);
    msg.timeout = 47496U;
    msg.lat = 0.873294517368;
    msg.lon = 0.13415817005;
    msg.z = 0.890135741206;
    msg.z_units = 175U;
    msg.duration = 21841U;
    msg.speed = 0.132160840675;
    msg.speed_units = 23U;
    msg.type = 149U;
    msg.radius = 0.171851605761;
    msg.length = 0.695582620233;
    msg.bearing = 0.0418203230961;
    msg.direction = 128U;
    msg.custom.assign("WVZJCUILLTEZPUCJHKKTPRQQHFOUQKFWZMOELDUZSBAXQDDCREUVLKGTGFYPDMVYLCZSA");

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
    msg.setTimeStamp(0.0670243943331);
    msg.setSource(16167U);
    msg.setSourceEntity(166U);
    msg.setDestination(62028U);
    msg.setDestinationEntity(142U);
    msg.duration = 5332U;
    msg.custom.assign("RTIPOAACNETDABAVVVRJCIAIYHOEVGXNDTMNJQOMFXPVSSRUXEAHGDOZHDIHKDNGTUWNMNUOSZYFKFMJACFSDPUJJXDYKABLTCEBYOUDCJVBLUJNTCWFPMNXUIQEUGYCMBGMPQTWQXXOKGQRZLLFESVZTOYNFGHKZGQUCMXRQOJDKLNZMSVIQVJYPBWJLCVIXYHHWFIRWULESEDSIRSZZXHLZBPSZ");

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
    msg.setTimeStamp(0.685364685327);
    msg.setSource(39198U);
    msg.setSourceEntity(47U);
    msg.setDestination(14143U);
    msg.setDestinationEntity(27U);
    msg.duration = 24812U;
    msg.custom.assign("JAQOBGYLUEEPNESGQCMIU");

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
    msg.setTimeStamp(0.789398497574);
    msg.setSource(2274U);
    msg.setSourceEntity(238U);
    msg.setDestination(46947U);
    msg.setDestinationEntity(184U);
    msg.duration = 13362U;
    msg.custom.assign("JHMUEREKKQMLGINPKTSCAOPLPOHYXADCRUZTINWECPBXLDCTPXODOLLPESLXBHNGGNXAHAPZGNUWVGJYRJRZZCYUWSS");

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
    msg.setTimeStamp(0.222803942487);
    msg.setSource(56465U);
    msg.setSourceEntity(160U);
    msg.setDestination(64707U);
    msg.setDestinationEntity(233U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.550489624184;
    msg.control.set(tmp_msg_0);
    msg.duration = 48359U;
    msg.custom.assign("PUVXMMZNDSGHBYRLOHVWXSXBKJYUCQNXLXMJQOUPURBDOZVURAAEISKREYEFULFDATJQMVKEYGAEVODRDGLKCWVMZPJUWQGAQCCMFKSWFEGZZHHFJXLWNIYZNPHFITYCJWFBKLIMUNGNGPRYBOOUDIHDFPAGNTORVVXCANZKDTJSVWAKRAXCYXYOSYZOCIRSECMBWMQJZXOKETEWFHSHUGMCSTRPEQGTAKIITNPNBLLPVI");

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
    msg.setTimeStamp(0.680110297579);
    msg.setSource(42700U);
    msg.setSourceEntity(41U);
    msg.setDestination(61701U);
    msg.setDestinationEntity(58U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.371635894921;
    msg.control.set(tmp_msg_0);
    msg.duration = 16252U;
    msg.custom.assign("OFNXNIZSVWLBFIVTABYMOAPF");

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
    msg.setTimeStamp(0.176477722776);
    msg.setSource(20949U);
    msg.setSourceEntity(190U);
    msg.setDestination(24698U);
    msg.setDestinationEntity(95U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.727071441529;
    tmp_msg_0.start_lon = 0.505468742031;
    tmp_msg_0.start_z = 0.793003659304;
    tmp_msg_0.start_z_units = 120U;
    tmp_msg_0.end_lat = 0.489751660079;
    tmp_msg_0.end_lon = 0.117758229355;
    tmp_msg_0.end_z = 0.889119831207;
    tmp_msg_0.end_z_units = 9U;
    tmp_msg_0.speed = 0.268642469592;
    tmp_msg_0.speed_units = 127U;
    tmp_msg_0.lradius = 0.561801569584;
    tmp_msg_0.flags = 13U;
    msg.control.set(tmp_msg_0);
    msg.duration = 63378U;
    msg.custom.assign("JEHDCHZCBZTKFQHCEOCYRYTHFPODEYVWTUJIPFRTUDGXIMGNWBPJHOJUUMTTMCXTEYLMDLNONZQCXXISOFSWFGKVYRNPLFRNIVWVHKVAANDGNSORDSSVQFCRADTAIWNGYZLMQGJVZPEBAHKQTAVIULUXSKBXOUUUYGDCFRHYDARQEGJMXNLBPOCHYBIZXUDJSFTJEQL");

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
    msg.setTimeStamp(0.0805665526296);
    msg.setSource(955U);
    msg.setSourceEntity(23U);
    msg.setDestination(41163U);
    msg.setDestinationEntity(11U);
    msg.timeout = 40742U;
    msg.lat = 0.59019248189;
    msg.lon = 0.343138353012;
    msg.z = 0.220430037028;
    msg.z_units = 152U;
    msg.speed = 0.639032709525;
    msg.speed_units = 87U;
    msg.bearing = 0.388976251049;
    msg.cross_angle = 0.455481719776;
    msg.width = 0.898386009752;
    msg.length = 0.450057828352;
    msg.hstep = 0.0547689296586;
    msg.coff = 4U;
    msg.alternation = 146U;
    msg.flags = 252U;
    msg.custom.assign("DGHWYQPXTLJNRQWRHNHHSYMFQAFWKCJMIUDXOALCQKTXMZFDAISMSHIBPOMY");

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
    msg.setTimeStamp(0.00374193015944);
    msg.setSource(58037U);
    msg.setSourceEntity(132U);
    msg.setDestination(35604U);
    msg.setDestinationEntity(193U);
    msg.timeout = 63644U;
    msg.lat = 0.423133126989;
    msg.lon = 0.623002370928;
    msg.z = 0.165221661709;
    msg.z_units = 161U;
    msg.speed = 0.618154744038;
    msg.speed_units = 56U;
    msg.bearing = 0.295651493436;
    msg.cross_angle = 0.565359678713;
    msg.width = 0.995012062979;
    msg.length = 0.503154860245;
    msg.hstep = 0.0644578000058;
    msg.coff = 222U;
    msg.alternation = 155U;
    msg.flags = 230U;
    msg.custom.assign("ERIKYMSORCIDIHCDICUXMMMHBLXYUALYJERLTFJCNSPVMZAQVNHFLWWBWOHUSDYQQYKGKGTTGECQCLPKAOFNRWPDIKBACGSOEVNRVAHTBWSJDKJOSNFOWBTUQGWAPMEXAQEJZKOZWZPIIAEGXESYHWMDL");

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
    msg.setTimeStamp(0.00557066232317);
    msg.setSource(14833U);
    msg.setSourceEntity(168U);
    msg.setDestination(24858U);
    msg.setDestinationEntity(236U);
    msg.timeout = 11369U;
    msg.lat = 0.324528970352;
    msg.lon = 0.586967434005;
    msg.z = 0.608700323454;
    msg.z_units = 95U;
    msg.speed = 0.903248356222;
    msg.speed_units = 34U;
    msg.bearing = 0.530420051353;
    msg.cross_angle = 0.695858747106;
    msg.width = 0.0265894846642;
    msg.length = 0.66008264602;
    msg.hstep = 0.486039873204;
    msg.coff = 227U;
    msg.alternation = 32U;
    msg.flags = 51U;
    msg.custom.assign("EHIJGVXVPWEWHEFZPAMQWEOSCZMVWAFUZQRGUIVRUXYEMTUAJXABSYIZNMBMIHFIRKFETUOLYMTKTKXODXZSNHLGITFSMDFQPMVKDARYXJCBDCRUZGYBPJCSPSNCHVRRCOZBJDYMLLIJHGTKNAOOVQXTZKXBGAWILJLJBIXGZESEDPRCFWQKNLTEBFZWQQFDWNAQYTGGHQOSPGWUOULOADKPL");

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
    msg.setTimeStamp(0.168880826544);
    msg.setSource(47953U);
    msg.setSourceEntity(3U);
    msg.setDestination(34277U);
    msg.setDestinationEntity(115U);
    msg.timeout = 48506U;
    msg.lat = 0.387082022059;
    msg.lon = 0.0660088454787;
    msg.z = 0.386249472504;
    msg.z_units = 119U;
    msg.speed = 0.551644414027;
    msg.speed_units = 170U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.245697462982;
    tmp_msg_0.y = 0.414287299667;
    tmp_msg_0.z = 0.689658199457;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RBTBVNSRPOGHZCOSYFPWWPMEFASWJPRLOECMSIPMRICSCITZNQGFBQSXZVZLQNTGAWKDEOWAONVQDGBKCQRPMARHWUMYTGJUIPOMZMHDDKOFAXPHZHQGLAURJYVUZWNDXHFQGAYREJZEKATILDWYFUJIQNFYRVHXULTINTBWJFXSLHWEIOLBDBNFZUCXLGYRIIUKNVCQLJDKBXMVBUEYCTHXBSHVDC");

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
    msg.setTimeStamp(0.215540866641);
    msg.setSource(17126U);
    msg.setSourceEntity(1U);
    msg.setDestination(53998U);
    msg.setDestinationEntity(247U);
    msg.timeout = 40501U;
    msg.lat = 0.783156379567;
    msg.lon = 0.458205798862;
    msg.z = 0.774995943802;
    msg.z_units = 244U;
    msg.speed = 0.0605152570999;
    msg.speed_units = 206U;
    msg.custom.assign("UIFWRSQYVJSEYYFGJXMKBPXBLNMEVI");

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
    msg.setTimeStamp(0.338688452987);
    msg.setSource(7460U);
    msg.setSourceEntity(234U);
    msg.setDestination(26793U);
    msg.setDestinationEntity(106U);
    msg.timeout = 4449U;
    msg.lat = 0.0866528736537;
    msg.lon = 0.282094660073;
    msg.z = 0.0544905032382;
    msg.z_units = 41U;
    msg.speed = 0.956172834847;
    msg.speed_units = 107U;
    msg.custom.assign("IPWOOOMBWU");

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
    msg.setTimeStamp(0.461811623086);
    msg.setSource(16088U);
    msg.setSourceEntity(80U);
    msg.setDestination(22229U);
    msg.setDestinationEntity(184U);
    msg.x = 0.212488343101;
    msg.y = 0.250514087435;
    msg.z = 0.720775590163;

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
    msg.setTimeStamp(0.393509999319);
    msg.setSource(14047U);
    msg.setSourceEntity(203U);
    msg.setDestination(56437U);
    msg.setDestinationEntity(116U);
    msg.x = 0.233921941684;
    msg.y = 0.203977430392;
    msg.z = 0.618425695219;

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
    msg.setTimeStamp(0.377439776221);
    msg.setSource(39809U);
    msg.setSourceEntity(57U);
    msg.setDestination(30130U);
    msg.setDestinationEntity(176U);
    msg.x = 0.13063113946;
    msg.y = 0.0355492615049;
    msg.z = 0.991318045218;

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
    msg.setTimeStamp(0.743154750745);
    msg.setSource(7190U);
    msg.setSourceEntity(125U);
    msg.setDestination(34550U);
    msg.setDestinationEntity(152U);
    msg.timeout = 16030U;
    msg.lat = 0.260798097099;
    msg.lon = 0.444214252238;
    msg.z = 0.729142776003;
    msg.z_units = 82U;
    msg.amplitude = 0.176783083051;
    msg.pitch = 0.199515429461;
    msg.speed = 0.921010540505;
    msg.speed_units = 198U;
    msg.custom.assign("TYHJPAGDBIMMXMIYZXOHKDTUYJRQDFDULYSBAQWXGYTFMPUJSVDWLPQOBIRLFCBLJKCZWEXHMRIZTNUFXAHFZCNEPWARLCRNKKTGCWQHGYGKWWNDUANUP");

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
    msg.setTimeStamp(0.459688435314);
    msg.setSource(8543U);
    msg.setSourceEntity(206U);
    msg.setDestination(50448U);
    msg.setDestinationEntity(144U);
    msg.timeout = 13007U;
    msg.lat = 0.246012150111;
    msg.lon = 0.96616847901;
    msg.z = 0.0308106054178;
    msg.z_units = 184U;
    msg.amplitude = 0.802631096879;
    msg.pitch = 0.872234596059;
    msg.speed = 0.0688957789146;
    msg.speed_units = 127U;
    msg.custom.assign("UPCLDBILIDOIRJQOIMNHSZBQMKZGUFGQQYETQYSHDNJXDTPNBMOIWRFHVPASXDBUZHQTLVNRLOACZLFHANFNYKILPSYCNXWLZTZOWFUIJAJEFTFEWLCUDAOYKQFFGGMDXV");

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
    msg.setTimeStamp(0.77698635676);
    msg.setSource(22341U);
    msg.setSourceEntity(23U);
    msg.setDestination(741U);
    msg.setDestinationEntity(108U);
    msg.timeout = 12873U;
    msg.lat = 0.564062489744;
    msg.lon = 0.58829842763;
    msg.z = 0.0218869257729;
    msg.z_units = 79U;
    msg.amplitude = 0.359828069555;
    msg.pitch = 0.807874244587;
    msg.speed = 0.868059038628;
    msg.speed_units = 0U;
    msg.custom.assign("LHUHZCBEBJAYMEAKTCLPDFQVWBTVAURDLYKWDNKJLFEWMZYEQVWYOPNOALNZSVGEWGYSZJQCSFYBURTHGSNJICIEFYDJLCQCFISGORUPIVXZMMMWJNTEQITMXDRHUXHLIOOLUNJSFEZM");

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
    msg.setTimeStamp(0.594794962831);
    msg.setSource(46663U);
    msg.setSourceEntity(75U);
    msg.setDestination(23776U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.166877048102);
    msg.setSource(44598U);
    msg.setSourceEntity(124U);
    msg.setDestination(59510U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.360790130937);
    msg.setSource(828U);
    msg.setSourceEntity(120U);
    msg.setDestination(54774U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.905654193001);
    msg.setSource(17639U);
    msg.setSourceEntity(250U);
    msg.setDestination(37239U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.0566363176882;
    msg.lon = 0.14361909556;
    msg.z = 0.0170255000037;
    msg.z_units = 9U;
    msg.radius = 0.203448161924;
    msg.duration = 4010U;
    msg.speed = 0.945660887063;
    msg.speed_units = 173U;
    msg.custom.assign("ZEPQJZJPKKWOQKYPROMSSSZPKBJHQBTFCTHYLEMMJHQYUPCSVABFLDFGSPDWLGNHCEAQKNVQMMLRGNZTAEBZBXLCYVUADGPVXWPFLRKWYOTKEQUGCUZGRRHWMYMNCJVXSGDSIKCBTOTRLLFBMQRTIOIVOWOFOXIPAJCKEH");

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
    msg.setTimeStamp(0.649095829382);
    msg.setSource(24919U);
    msg.setSourceEntity(132U);
    msg.setDestination(51845U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.893866167885;
    msg.lon = 0.956573200344;
    msg.z = 0.693241343395;
    msg.z_units = 32U;
    msg.radius = 0.883932359468;
    msg.duration = 25169U;
    msg.speed = 0.797496983278;
    msg.speed_units = 200U;
    msg.custom.assign("YCPQICZQHAEEWEJBFU");

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
    msg.setTimeStamp(0.0707062501859);
    msg.setSource(8251U);
    msg.setSourceEntity(191U);
    msg.setDestination(34384U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.212623150609;
    msg.lon = 0.907920311392;
    msg.z = 0.51428733848;
    msg.z_units = 90U;
    msg.radius = 0.070170641503;
    msg.duration = 53187U;
    msg.speed = 0.947958193905;
    msg.speed_units = 129U;
    msg.custom.assign("EURQPNMCTRDSPGPIBBODPREUDBYZQCACMUNYFMKLBFDXAQWKZZOKNBLYTAWCTKRMTASHWGDETADLLMYMUVAVCXYGHWAWBPTEXSXDCJVLXFRODPIZUETRI");

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
    msg.setTimeStamp(0.0144003581023);
    msg.setSource(5970U);
    msg.setSourceEntity(209U);
    msg.setDestination(23169U);
    msg.setDestinationEntity(248U);
    msg.timeout = 21957U;
    msg.flags = 222U;
    msg.lat = 0.790850057869;
    msg.lon = 0.908777121552;
    msg.start_z = 0.954875205464;
    msg.start_z_units = 204U;
    msg.end_z = 0.52997019101;
    msg.end_z_units = 54U;
    msg.radius = 0.370865579417;
    msg.speed = 0.263850178698;
    msg.speed_units = 106U;
    msg.custom.assign("SCKDXLZXYFVCVZNRMQQMUWGFYYQLDRGSQBCHZIOEIQHWFTTATFSSHRKTIJPGBHPNWJJDEHZVDLLLBUMMPXIKJONBYXCEVLIVUNKHHEAAXIBVSAXLJFCGKDOLVGDBAJAYHXWCMBXKOAKROMCTIOBJVBPBPWZAGOWNQJINSP");

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
    msg.setTimeStamp(0.191848823134);
    msg.setSource(48022U);
    msg.setSourceEntity(8U);
    msg.setDestination(6551U);
    msg.setDestinationEntity(168U);
    msg.timeout = 30562U;
    msg.flags = 80U;
    msg.lat = 0.350981524502;
    msg.lon = 0.283140259008;
    msg.start_z = 0.981916068191;
    msg.start_z_units = 52U;
    msg.end_z = 0.00889310267918;
    msg.end_z_units = 229U;
    msg.radius = 0.308207510715;
    msg.speed = 0.230037661489;
    msg.speed_units = 202U;
    msg.custom.assign("GOYLRCMDQLXEUYKGDNWBDTBKOSDATALKVXMNQEFBLQLUVJCSSSDAHLYGQCVZKRDAESFWJTRAGJWYUQBXFMMHOXBDRFOZWGKJGPSXCBTMMTCKQKJQTAEOFENHYZNOWYSEHEBQAUZIAGWHCBDCTLPITFUGWVGNZVOWZXRIPIRXMTIJPZPAPUKHHRMISZYHDARMVUDKIYKNE");

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
    msg.setTimeStamp(0.942241783949);
    msg.setSource(64849U);
    msg.setSourceEntity(206U);
    msg.setDestination(62144U);
    msg.setDestinationEntity(198U);
    msg.timeout = 48740U;
    msg.flags = 162U;
    msg.lat = 0.107338274216;
    msg.lon = 0.232941863846;
    msg.start_z = 0.206336430762;
    msg.start_z_units = 205U;
    msg.end_z = 0.277923203077;
    msg.end_z_units = 132U;
    msg.radius = 0.717836131749;
    msg.speed = 0.895326012729;
    msg.speed_units = 70U;
    msg.custom.assign("VLRMNEJSCFBTVPUDGQRYGQASNLCNRZZYUENKANNNNFXQTJUTWEMCDYH");

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
    msg.setTimeStamp(0.0747878469943);
    msg.setSource(21888U);
    msg.setSourceEntity(218U);
    msg.setDestination(52329U);
    msg.setDestinationEntity(55U);
    msg.timeout = 64564U;
    msg.lat = 0.624950526472;
    msg.lon = 0.199941023976;
    msg.z = 0.769735807068;
    msg.z_units = 237U;
    msg.speed = 0.597896147015;
    msg.speed_units = 241U;
    msg.custom.assign("XTGVOQALJKXFZAPJYSJIQMEJVPKRYGSGUHFSHAVPBJRDMHMVIRDUIFDWWCHHSFIMTAVNFWQSVORYMLARPBUMCQEMPWCSRFSEIYETUEJEJFZBPUXYNACOKJDZUNITUVFLMNBBGXMZLUPODZBSOLTEXKDYLEZCOSHWKIVX");

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
    msg.setTimeStamp(0.972306903356);
    msg.setSource(50552U);
    msg.setSourceEntity(24U);
    msg.setDestination(37446U);
    msg.setDestinationEntity(114U);
    msg.timeout = 33882U;
    msg.lat = 0.555656839679;
    msg.lon = 0.272387102185;
    msg.z = 0.524481582494;
    msg.z_units = 161U;
    msg.speed = 0.58183690403;
    msg.speed_units = 4U;
    msg.custom.assign("JQDXRMXFBUDBPSDMFXJVDEZKGYMWQGDTDBWSTCHQFCXIWTCUSDVLDAMWVNFCRAM");

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
    msg.setTimeStamp(0.849163848931);
    msg.setSource(1638U);
    msg.setSourceEntity(38U);
    msg.setDestination(4092U);
    msg.setDestinationEntity(11U);
    msg.timeout = 30298U;
    msg.lat = 0.206351925893;
    msg.lon = 0.678249332604;
    msg.z = 0.0202585224401;
    msg.z_units = 65U;
    msg.speed = 0.138888685032;
    msg.speed_units = 70U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.541948630403;
    tmp_msg_0.y = 0.249911771925;
    tmp_msg_0.z = 0.310455380165;
    tmp_msg_0.t = 0.191760910823;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FNDQABQBZSHGVJFSXDZFCVBYYTJBBCUASRKPSPFWDXEBMCZEINTQAMFWNLGWXEPGCAYCUFRUGOL");

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
    msg.setTimeStamp(0.345987109465);
    msg.setSource(44795U);
    msg.setSourceEntity(29U);
    msg.setDestination(5502U);
    msg.setDestinationEntity(182U);
    msg.x = 0.514802011181;
    msg.y = 0.139759840683;
    msg.z = 0.519605478358;
    msg.t = 0.162185733149;

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
    msg.setTimeStamp(0.900282239207);
    msg.setSource(60727U);
    msg.setSourceEntity(191U);
    msg.setDestination(48960U);
    msg.setDestinationEntity(129U);
    msg.x = 0.691903827078;
    msg.y = 0.12268406917;
    msg.z = 0.38252937239;
    msg.t = 0.0381118846058;

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
    msg.setTimeStamp(0.156244266775);
    msg.setSource(26078U);
    msg.setSourceEntity(213U);
    msg.setDestination(2434U);
    msg.setDestinationEntity(219U);
    msg.x = 0.653676837648;
    msg.y = 0.964628299764;
    msg.z = 0.479740680401;
    msg.t = 0.0728004034336;

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
    msg.setTimeStamp(0.995003092365);
    msg.setSource(17378U);
    msg.setSourceEntity(19U);
    msg.setDestination(26670U);
    msg.setDestinationEntity(220U);
    msg.timeout = 44591U;
    msg.name.assign("NQHFGWKWWMICZSLONBJOJEJWQTPENBPLNHMMKMUTLEKKVDTFTFBJRKJMBLXIIBMMJSOHXPNSWCYVJAYTEYCB");
    msg.custom.assign("NLXSVSKSNKVHBOFGVPWAMLUOEXCZDTDPZUGBZUXNPOQBOQQIXUKRALDGXOXHSKUFEXTMNFWASFOJHKMRNTTX");

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
    msg.setTimeStamp(0.467797534719);
    msg.setSource(30607U);
    msg.setSourceEntity(33U);
    msg.setDestination(45206U);
    msg.setDestinationEntity(140U);
    msg.timeout = 52786U;
    msg.name.assign("OCIGIRHXLKKFXWTRIDKWWGPHUWYHWQJBELFJCUHIZQPFMSZCTJDMREDFTTGSJFRNBKOSGKMXZYMPUCIFTYCLXXIPEOJACZGOVHCHNEMQDNEPFQLNDSJHS");
    msg.custom.assign("RGROSLHPDIZAMRKAFDWNTNHVQSFVEJZPESBKMGNZYWWLNBRKMOFCHSSJSKMIXWYANHNCFLHIMRWRTPLTSJEKARCFIXDJEUJTGKVKALZXCSFVWHMLILPONQGQDFDMIMUXHCBBTABYAIUZEXOYUKVZGGVCUCZTYZPQGQI");

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
    msg.setTimeStamp(0.688716481062);
    msg.setSource(5798U);
    msg.setSourceEntity(236U);
    msg.setDestination(46667U);
    msg.setDestinationEntity(89U);
    msg.timeout = 43922U;
    msg.name.assign("WHOVXOHLKEXIZIUZEOTDNMXVRCRICYTRNRQKQIVCJXHTGUGAYQMBWDLFSRTM");
    msg.custom.assign("HJZPZSORNWTTIBEOUCHRHWYRNTTQCNXLMNAGQOSUNHQIMEVTQBPLBDKXWSBUDARRIPLHDOKMGZYYPAKUOVXRKMUXQKGOMBLKWYWGYRBHVBXLXMVMZCFBEOBFQXZQLTRFVJDWUMEGDVNNEVDNKFWYJPVPZCXVIGACPELFCSAESHESCSYAOJEHIT");

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
    msg.setTimeStamp(0.0448870125295);
    msg.setSource(27828U);
    msg.setSourceEntity(69U);
    msg.setDestination(62324U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.671057068797;
    msg.lon = 0.5386593157;
    msg.z = 0.0578142176834;
    msg.z_units = 65U;
    msg.speed = 0.904855604969;
    msg.speed_units = 240U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52167U;
    tmp_msg_0.off_x = 0.387613406667;
    tmp_msg_0.off_y = 0.96108541848;
    tmp_msg_0.off_z = 0.017968872606;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.629671198476;
    msg.custom.assign("OSJTCWPIHYLIGZQEMARCVOOWMZDCLTVSRMNUDY");

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
    msg.setTimeStamp(0.969549637163);
    msg.setSource(8522U);
    msg.setSourceEntity(108U);
    msg.setDestination(48115U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.0767911471527;
    msg.lon = 0.609548888084;
    msg.z = 0.441806693852;
    msg.z_units = 50U;
    msg.speed = 0.847616700972;
    msg.speed_units = 23U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.280891791226;
    tmp_msg_0.y = 0.257893433802;
    tmp_msg_0.z = 0.666009412776;
    tmp_msg_0.t = 0.206737237643;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.293575581421;
    msg.custom.assign("ADARZLAKXQWZUXJBYNBCCFCHLDFAJKRFVMNZSPKMXJFCSYVFEJJGNNYZHRMRSPTTPHOBJUGLGIGUTKXIVMNOTRCLGVGLBUQRFSQEGMVIJDRHATHZODXSLQWDWUUDKCHZRKGWKXAZYPZSMSFUUIITIQYVNMNXVWEQDONCYWKWXEIEVOOXBNWWBAOAL");

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
    msg.setTimeStamp(0.288077099889);
    msg.setSource(11437U);
    msg.setSourceEntity(111U);
    msg.setDestination(32357U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.0740547273716;
    msg.lon = 0.0424994727849;
    msg.z = 0.44715681547;
    msg.z_units = 150U;
    msg.speed = 0.355086873841;
    msg.speed_units = 96U;
    msg.start_time = 0.585069873264;
    msg.custom.assign("SODHBHYGSGI");

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
    msg.setTimeStamp(0.866565091829);
    msg.setSource(39063U);
    msg.setSourceEntity(212U);
    msg.setDestination(60151U);
    msg.setDestinationEntity(201U);
    msg.vid = 63834U;
    msg.off_x = 0.573076931185;
    msg.off_y = 0.336233756671;
    msg.off_z = 0.0540809207459;

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
    msg.setTimeStamp(0.94088820739);
    msg.setSource(40773U);
    msg.setSourceEntity(147U);
    msg.setDestination(64539U);
    msg.setDestinationEntity(65U);
    msg.vid = 56095U;
    msg.off_x = 0.803219245926;
    msg.off_y = 0.646118363633;
    msg.off_z = 0.177432996353;

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
    msg.setTimeStamp(0.131590918764);
    msg.setSource(42429U);
    msg.setSourceEntity(68U);
    msg.setDestination(33431U);
    msg.setDestinationEntity(167U);
    msg.vid = 42590U;
    msg.off_x = 0.53870447274;
    msg.off_y = 0.0145024121398;
    msg.off_z = 0.631032776058;

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
    msg.setTimeStamp(0.480278976345);
    msg.setSource(16842U);
    msg.setSourceEntity(188U);
    msg.setDestination(33650U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.461427930871);
    msg.setSource(12101U);
    msg.setSourceEntity(207U);
    msg.setDestination(24366U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.0612724030535);
    msg.setSource(24218U);
    msg.setSourceEntity(1U);
    msg.setDestination(51984U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.998250319615);
    msg.setSource(24549U);
    msg.setSourceEntity(166U);
    msg.setDestination(21923U);
    msg.setDestinationEntity(251U);
    msg.mid = 54660U;

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
    msg.setTimeStamp(0.107470961168);
    msg.setSource(26861U);
    msg.setSourceEntity(52U);
    msg.setDestination(32061U);
    msg.setDestinationEntity(81U);
    msg.mid = 3642U;

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
    msg.setTimeStamp(0.12101602591);
    msg.setSource(41650U);
    msg.setSourceEntity(155U);
    msg.setDestination(52720U);
    msg.setDestinationEntity(61U);
    msg.mid = 11551U;

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
    msg.setTimeStamp(0.0196492790122);
    msg.setSource(44627U);
    msg.setSourceEntity(196U);
    msg.setDestination(21999U);
    msg.setDestinationEntity(229U);
    msg.state = 59U;
    msg.eta = 23941U;
    msg.info.assign("JRNRMUIQWXTUCXBWRGFCGHLEVASNZLBKKODHXNNVFGRULSOYTCMWLHIRIRKZAFOLOPLCIXJIZCAXPQCAVGQDSFTAGSKRLOETFZTCVKBFZMWDTDNHBOJLBWPVGLMQWEEYSIVUZSYJYPWIPKYGJGMDEVBXVDZNSWBIUGJPYOM");

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
    msg.setTimeStamp(0.532859648074);
    msg.setSource(37801U);
    msg.setSourceEntity(114U);
    msg.setDestination(39868U);
    msg.setDestinationEntity(122U);
    msg.state = 235U;
    msg.eta = 9567U;
    msg.info.assign("LXXSIQDUCGOUACGAKANPFEPRPIPOXBITJZGKTYJYCKENMJCGJWADZLEZMSUQHPJIZSBIFZA");

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
    msg.setTimeStamp(0.432202417387);
    msg.setSource(371U);
    msg.setSourceEntity(90U);
    msg.setDestination(55983U);
    msg.setDestinationEntity(215U);
    msg.state = 211U;
    msg.eta = 17365U;
    msg.info.assign("QUTHIPDEMQKUUELZRDLTUTHICJPPDNSEYJWCXWRVCJBWPSADNKFMAHAVEMXXKZBEEGXJBFYFYQJLFTFIIUPDFHDQPRTCRQQMDBETVXXYGWNMCHZKNUVGKJGVTYHCOWMSXORZIUJSVOZOLSBLZOGRPKHARWBHELMHOZOQWXONTZLVGGBPIBTMBGOSWFQUSKVSILDNAJYLOIAJEAAQCDJTIXCGWGYQKLXDFVRSFENIANWCMBFRNK");

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
    msg.setTimeStamp(0.0935955612759);
    msg.setSource(403U);
    msg.setSourceEntity(50U);
    msg.setDestination(34234U);
    msg.setDestinationEntity(193U);
    msg.system = 30921U;
    msg.duration = 36122U;
    msg.speed = 0.953656420115;
    msg.speed_units = 105U;
    msg.x = 0.924778867069;
    msg.y = 0.494161991359;
    msg.z = 0.464826346862;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.539326387937);
    msg.setSource(51449U);
    msg.setSourceEntity(146U);
    msg.setDestination(40357U);
    msg.setDestinationEntity(36U);
    msg.system = 63568U;
    msg.duration = 32048U;
    msg.speed = 0.89830979028;
    msg.speed_units = 155U;
    msg.x = 0.194448346211;
    msg.y = 0.440058573268;
    msg.z = 0.765078285426;
    msg.z_units = 208U;

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
    msg.setTimeStamp(0.824815868514);
    msg.setSource(23698U);
    msg.setSourceEntity(131U);
    msg.setDestination(48214U);
    msg.setDestinationEntity(86U);
    msg.system = 18190U;
    msg.duration = 34936U;
    msg.speed = 0.445572406527;
    msg.speed_units = 198U;
    msg.x = 0.121137460275;
    msg.y = 0.784859269064;
    msg.z = 0.261341361127;
    msg.z_units = 193U;

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
    msg.setTimeStamp(0.873068516621);
    msg.setSource(29653U);
    msg.setSourceEntity(109U);
    msg.setDestination(38227U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.363520844651;
    msg.lon = 0.503982426097;
    msg.speed = 0.6644126105;
    msg.speed_units = 45U;
    msg.duration = 17758U;
    msg.sys_a = 15435U;
    msg.sys_b = 12310U;
    msg.move_threshold = 0.871681134621;

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
    msg.setTimeStamp(0.731732452566);
    msg.setSource(57936U);
    msg.setSourceEntity(168U);
    msg.setDestination(25677U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.502278856609;
    msg.lon = 0.164480068757;
    msg.speed = 0.711284690857;
    msg.speed_units = 54U;
    msg.duration = 46066U;
    msg.sys_a = 32424U;
    msg.sys_b = 28087U;
    msg.move_threshold = 0.478218286388;

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
    msg.setTimeStamp(0.942529316539);
    msg.setSource(61108U);
    msg.setSourceEntity(181U);
    msg.setDestination(7152U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.721757873761;
    msg.lon = 0.0855888779704;
    msg.speed = 0.598047977445;
    msg.speed_units = 112U;
    msg.duration = 377U;
    msg.sys_a = 3807U;
    msg.sys_b = 47376U;
    msg.move_threshold = 0.617935928157;

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
    msg.setTimeStamp(0.752227079472);
    msg.setSource(4030U);
    msg.setSourceEntity(25U);
    msg.setDestination(48502U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.97286207549;
    msg.lon = 0.0779069181414;
    msg.z = 0.275251470032;
    msg.z_units = 228U;
    msg.speed = 0.283453435037;
    msg.speed_units = 170U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0606064826413;
    tmp_msg_0.lon = 0.154412154265;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZOXTPTSWNDCAFLFPCBNQPLFAEMZEDANBMVLQAQRVVQE");

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
    msg.setTimeStamp(0.136565837968);
    msg.setSource(56727U);
    msg.setSourceEntity(158U);
    msg.setDestination(36378U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.759964430331;
    msg.lon = 0.627960233985;
    msg.z = 0.693106895513;
    msg.z_units = 34U;
    msg.speed = 0.959933891098;
    msg.speed_units = 128U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.899322637574;
    tmp_msg_0.lon = 0.894693840789;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HFBXTXRMFWQMDJNCYXDNYSCWFNSFRNXEZOVHCELOABQKMYIWTLDVRIQEILVAYVPLWSKRGNIOTEWWAULNQPGAQTME");

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
    msg.setTimeStamp(0.678412543509);
    msg.setSource(11904U);
    msg.setSourceEntity(66U);
    msg.setDestination(45355U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.878794605601;
    msg.lon = 0.198072835889;
    msg.z = 0.101432787024;
    msg.z_units = 181U;
    msg.speed = 0.631402626913;
    msg.speed_units = 167U;
    msg.custom.assign("LKAIBPBKMKLRJHSDWZVZNYSLUFNCCEUNVUDOVHWQEKOBYYXBJJBNHJFXHRRXVVMDNMAIZWSRJGTLVRQTPZXQFIACESFFDGDPKMDIVUIDOCMFOGXGERFZI");

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
    msg.setTimeStamp(0.049193896426);
    msg.setSource(45557U);
    msg.setSourceEntity(98U);
    msg.setDestination(39227U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.245443255807;
    msg.lon = 0.801974282839;

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
    msg.setTimeStamp(0.073962719468);
    msg.setSource(16435U);
    msg.setSourceEntity(177U);
    msg.setDestination(32439U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.976047642469;
    msg.lon = 0.494865830086;

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
    msg.setTimeStamp(0.819739345299);
    msg.setSource(54591U);
    msg.setSourceEntity(28U);
    msg.setDestination(36117U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.737118304627;
    msg.lon = 0.0951134577108;

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
    msg.setTimeStamp(0.832944985525);
    msg.setSource(20586U);
    msg.setSourceEntity(51U);
    msg.setDestination(61651U);
    msg.setDestinationEntity(139U);
    msg.timeout = 45152U;
    msg.lat = 0.580158621944;
    msg.lon = 0.217004448807;
    msg.z = 0.577285787076;
    msg.z_units = 135U;
    msg.pitch = 0.313791372532;
    msg.amplitude = 0.0915274528767;
    msg.duration = 26112U;
    msg.speed = 0.213989917119;
    msg.speed_units = 252U;
    msg.radius = 0.0825826061793;
    msg.direction = 111U;
    msg.custom.assign("TGICHOPDIEVUJGCEKQQTWGUAYCYWKZFOMWFOBRQBSWOQSQXJWCBHJQFTEJQKBXVUOACURSTOUXFWYDIYNFKRRSPPYMJAPDTZWIPRCEGWZNUVRLOFVTXYZBJIDBQYDVXYNTOSJZZSJDCRLKRLKBKLMONCNZUTPRLGEQDICAWTLWXHVGNHAMHPLIMMMLAXYM");

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
    msg.setTimeStamp(0.744364189317);
    msg.setSource(15551U);
    msg.setSourceEntity(33U);
    msg.setDestination(4577U);
    msg.setDestinationEntity(47U);
    msg.timeout = 5662U;
    msg.lat = 0.888224385393;
    msg.lon = 0.611466278907;
    msg.z = 0.391431895723;
    msg.z_units = 13U;
    msg.pitch = 0.321347665332;
    msg.amplitude = 0.765643023129;
    msg.duration = 27949U;
    msg.speed = 0.13339420315;
    msg.speed_units = 68U;
    msg.radius = 0.948746695879;
    msg.direction = 33U;
    msg.custom.assign("RIYYLNGZGHZDVVRBGBVEUWCEYWWAIOLUOBUULUVVLCFJTMYMWWSMHZVNRCKEKVKNFMEBQODJOAXZWRSTNNZQYHCMGRYOYFAJDFVLGXGPNIPBZKPQOXUBERJSWAAQCNKRJDHKIQFSKMXWFIZTIYSCBKHHEDZSDUTRCTHKKNZFPACIMWJJOXPCHCFSEZNIPDGDPUQEEXXIYOXBQJMQQGLFHUOTPWSXTYLTQLRGTTDLVOJDJAXAMREIH");

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
    msg.setTimeStamp(0.165132230746);
    msg.setSource(1292U);
    msg.setSourceEntity(33U);
    msg.setDestination(61904U);
    msg.setDestinationEntity(100U);
    msg.timeout = 41103U;
    msg.lat = 0.776558773465;
    msg.lon = 0.578012426229;
    msg.z = 0.206402811674;
    msg.z_units = 45U;
    msg.pitch = 0.294494681372;
    msg.amplitude = 0.840028451578;
    msg.duration = 3279U;
    msg.speed = 0.720025213722;
    msg.speed_units = 140U;
    msg.radius = 0.323245438158;
    msg.direction = 100U;
    msg.custom.assign("CXWWABKSXURZTKHPUPKGHOAPDLQCQKJOOFSVUCVEHUXESENYLEQMJKCYTXMSLBKXIYSQRDFMSCUTPULOMVCEQXWFSVWKQTLZFNAIUNTISRPDULWUIAHDFHTFPNQPLRGRYTAFZ");

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
    IMC::FollowReference msg;
    msg.setTimeStamp(0.173774588853);
    msg.setSource(38254U);
    msg.setSourceEntity(197U);
    msg.setDestination(6478U);
    msg.setDestinationEntity(192U);
    msg.control_src = 63360U;
    msg.control_ent = 65U;
    msg.timeout = 0.0186037782764;
    msg.loiter_radius = 0.284403981169;
    msg.altitude_interval = 0.626185783659;

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
    msg.setTimeStamp(0.833893347976);
    msg.setSource(25028U);
    msg.setSourceEntity(8U);
    msg.setDestination(48949U);
    msg.setDestinationEntity(111U);
    msg.control_src = 48457U;
    msg.control_ent = 70U;
    msg.timeout = 0.131668265836;
    msg.loiter_radius = 0.0116206868624;
    msg.altitude_interval = 0.0979515798196;

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
    msg.setTimeStamp(0.159728756449);
    msg.setSource(19731U);
    msg.setSourceEntity(224U);
    msg.setDestination(17309U);
    msg.setDestinationEntity(120U);
    msg.control_src = 46710U;
    msg.control_ent = 189U;
    msg.timeout = 0.0819649026353;
    msg.loiter_radius = 0.206564959685;
    msg.altitude_interval = 0.0327189454744;

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
    msg.setTimeStamp(0.796578227702);
    msg.setSource(454U);
    msg.setSourceEntity(239U);
    msg.setDestination(361U);
    msg.setDestinationEntity(242U);
    msg.flags = 139U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.776456524844;
    tmp_msg_0.speed_units = 95U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.150511973717;
    tmp_msg_1.z_units = 236U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.721482319392;
    msg.lon = 0.586804639433;

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
    msg.setTimeStamp(0.416436869016);
    msg.setSource(7123U);
    msg.setSourceEntity(53U);
    msg.setDestination(50241U);
    msg.setDestinationEntity(42U);
    msg.flags = 10U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.281315715357;
    tmp_msg_0.speed_units = 213U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.688902305333;
    tmp_msg_1.z_units = 22U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.126021332939;
    msg.lon = 0.816266025839;

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
    msg.setTimeStamp(0.953680537328);
    msg.setSource(2597U);
    msg.setSourceEntity(0U);
    msg.setDestination(42640U);
    msg.setDestinationEntity(129U);
    msg.flags = 147U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.832482735037;
    tmp_msg_0.speed_units = 64U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.257758981391;
    tmp_msg_1.z_units = 238U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.461132157391;
    msg.lon = 0.734840155189;

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
    msg.setTimeStamp(0.443511869397);
    msg.setSource(19620U);
    msg.setSourceEntity(247U);
    msg.setDestination(61494U);
    msg.setDestinationEntity(118U);
    msg.control_src = 6279U;
    msg.control_ent = 221U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 249U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.271391496903;
    tmp_tmp_msg_0_0.speed_units = 105U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.338370382918;
    tmp_tmp_msg_0_1.z_units = 154U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.42701687978;
    tmp_msg_0.lon = 0.305256201998;
    msg.reference.set(tmp_msg_0);
    msg.state = 62U;
    msg.proximity = 86U;

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
    msg.setTimeStamp(0.249154188372);
    msg.setSource(41612U);
    msg.setSourceEntity(81U);
    msg.setDestination(18280U);
    msg.setDestinationEntity(157U);
    msg.control_src = 16338U;
    msg.control_ent = 72U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 125U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.294619811052;
    tmp_tmp_msg_0_0.speed_units = 227U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.300982782906;
    tmp_tmp_msg_0_1.z_units = 140U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.262451226763;
    tmp_msg_0.lon = 0.00253780143194;
    msg.reference.set(tmp_msg_0);
    msg.state = 197U;
    msg.proximity = 169U;

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
    msg.setTimeStamp(0.372461500527);
    msg.setSource(16552U);
    msg.setSourceEntity(47U);
    msg.setDestination(12652U);
    msg.setDestinationEntity(127U);
    msg.control_src = 55657U;
    msg.control_ent = 202U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 231U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.116484060127;
    tmp_tmp_msg_0_0.speed_units = 85U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3526410716;
    tmp_tmp_msg_0_1.z_units = 189U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.956901873398;
    tmp_msg_0.lon = 0.00118918704895;
    msg.reference.set(tmp_msg_0);
    msg.state = 117U;
    msg.proximity = 159U;

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
    msg.setTimeStamp(0.691990269444);
    msg.setSource(9520U);
    msg.setSourceEntity(113U);
    msg.setDestination(65484U);
    msg.setDestinationEntity(29U);
    msg.op_mode = 160U;
    msg.error_count = 46U;
    msg.error_ents.assign("WBLNQZXNZHGRXYGSBXQBXXFSPKFDOLQRZBPJPSNPOLBEUVMJLXQJBLKFKSTLZTQJDKKEANSZDGWYWAUMVRAOYCHNTTVCTENKNOLFHBFKFGYSFREUMAJIUMFHCOUCQRNGSPQJYYCWMUWYID");
    msg.maneuver_type = 23703U;
    msg.maneuver_stime = 0.934244538117;
    msg.maneuver_eta = 32771U;
    msg.control_loops = 3957324166U;
    msg.flags = 33U;
    msg.last_error.assign("PAYNWZLZPHGQEVLNKIARUOBPMYDLZCNJOBCGZTVGIDACQLQKLZEVTUMPLTDKXNSIXOXVYYBEPKKXZWQYBORRWUAVIGJRAOIPIKFMUE");
    msg.last_error_time = 0.496343463204;

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
    msg.setTimeStamp(0.072422410577);
    msg.setSource(16774U);
    msg.setSourceEntity(244U);
    msg.setDestination(5803U);
    msg.setDestinationEntity(98U);
    msg.op_mode = 78U;
    msg.error_count = 90U;
    msg.error_ents.assign("SGSELSQPVSEYCRAUQYVYHSRZBVRRKPOWNNERKBVJGBAAVAYDXHPMYOQKY");
    msg.maneuver_type = 59431U;
    msg.maneuver_stime = 0.62239804196;
    msg.maneuver_eta = 38714U;
    msg.control_loops = 3424886460U;
    msg.flags = 210U;
    msg.last_error.assign("EJGLUYOIZUDDOCDLYJAJPQPJXQASVUOM");
    msg.last_error_time = 0.655725278074;

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
    msg.setTimeStamp(0.423295708611);
    msg.setSource(23749U);
    msg.setSourceEntity(142U);
    msg.setDestination(10362U);
    msg.setDestinationEntity(57U);
    msg.op_mode = 39U;
    msg.error_count = 229U;
    msg.error_ents.assign("WWMWJBQMZNGRBNYKDSFNKBUCOIJAAXNQKBFYCPRTIWPYOLTVUNDOJVHQJAOCCM");
    msg.maneuver_type = 48573U;
    msg.maneuver_stime = 0.963138019178;
    msg.maneuver_eta = 54380U;
    msg.control_loops = 179453940U;
    msg.flags = 30U;
    msg.last_error.assign("CDQTOWXIGSOYGJCVHCITQWFDAUQKVFOWYEPAY");
    msg.last_error_time = 0.0821365409732;

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
    msg.setTimeStamp(0.727333383206);
    msg.setSource(8148U);
    msg.setSourceEntity(38U);
    msg.setDestination(42448U);
    msg.setDestinationEntity(180U);
    msg.type = 38U;
    msg.request_id = 44233U;
    msg.command = 125U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 25769U;
    tmp_msg_0.lat = 0.383967362122;
    tmp_msg_0.lon = 0.869283074791;
    tmp_msg_0.z = 0.405584584934;
    tmp_msg_0.z_units = 239U;
    tmp_msg_0.speed = 0.0808765990257;
    tmp_msg_0.speed_units = 247U;
    tmp_msg_0.custom.assign("FMSIWNZSNDKJRHOBEWHULEXBUHGLZFAGYLXAICFVPNCRNRSHFRPZYLTTCFAJTQBCDZVQTZSAAGQJIOSJJXCJXZZLIUAXMBNXEBR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 29098U;
    msg.info.assign("BDXBRZVOPGJNHPSDAHRXWOTHQLAGEDBHFHVKEZANHJFJCYIROZCTFMUXMJFYNMZCFJKMKYMSWUUJVYUPTONXXPNWPWAIFELKYIKYWIRQUOJCYSEALWDSAQUBZGLMLZTLTQREWCZYGRCNXKFVPTSRVIMJQVRJDUSHADIEXEPONUZZBP");

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
    msg.setTimeStamp(0.180391524532);
    msg.setSource(40308U);
    msg.setSourceEntity(127U);
    msg.setDestination(23437U);
    msg.setDestinationEntity(11U);
    msg.type = 134U;
    msg.request_id = 13796U;
    msg.command = 90U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 6217U;
    tmp_msg_0.lat = 0.367640752967;
    tmp_msg_0.lon = 0.0985988224847;
    tmp_msg_0.z = 0.594877302652;
    tmp_msg_0.z_units = 223U;
    tmp_msg_0.speed = 0.424872238296;
    tmp_msg_0.speed_units = 232U;
    tmp_msg_0.duration = 54439U;
    tmp_msg_0.radius = 0.755234922365;
    tmp_msg_0.flags = 212U;
    tmp_msg_0.custom.assign("WIOFWXEPZKRSDIFVVBTDDPPKUEUZIKMN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7630U;
    msg.info.assign("DSTSTYKNYONVFHJMOMYITJBEQCUKNSEYJXKWGDRUEKFXORLQLYNAXQAFDUATNSMW");

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
    msg.setTimeStamp(0.209988762826);
    msg.setSource(15383U);
    msg.setSourceEntity(208U);
    msg.setDestination(24885U);
    msg.setDestinationEntity(24U);
    msg.type = 210U;
    msg.request_id = 55253U;
    msg.command = 150U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.544519781819;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 53523U;
    tmp_msg_0.custom.assign("IZVQKTZOPDCEXZTOLROMEFGHNNGPHJNFVSCTMIDHZVXCKCDLAZARMRMQXBYJKOXNRTXIEEHDTBFRRBQGLAALMHBQZYTIYQYWYPCDDDDHOKBMG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 42335U;
    msg.info.assign("UPFZRQXFXAQPJHYUCHSKMTLZTWARBGYDDODFHZXMXBFKLUSPQVFSVBWPDMJBNQTMHHIOLIVRMKCVRYVBNH");

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
    msg.setTimeStamp(0.0483811032494);
    msg.setSource(5281U);
    msg.setSourceEntity(173U);
    msg.setDestination(13149U);
    msg.setDestinationEntity(97U);
    msg.command = 240U;
    msg.entities.assign("PTAGDTUSGCAWKVPLYFLVGAZMYQCQEHBWZIDBQLSBGSVYUICDCJYOAHFROMSCYJUNPOCTBCRHHGZHYLBVKLWOEEPQHTTRVAIOONPZJTRONMSWBLDRJGLWBXVIIJMMXIDRPXFKZGXMUVGMNQBKZPKLOYYZXXJPAHXSWUMFWSTT");

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
    msg.setTimeStamp(0.71141666614);
    msg.setSource(12243U);
    msg.setSourceEntity(137U);
    msg.setDestination(58248U);
    msg.setDestinationEntity(204U);
    msg.command = 170U;
    msg.entities.assign("LDSGPWQSCNTRGVHULXVYAHIZZGJOWFBCFDWIJSJIUTKYHODOKSQATEUFIJAKEBAGOCHWYRYMRVBGOKRHWXTQKNDWEHLFKUFXLZMOHNIRJAQYFQPXXWX");

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
    msg.setTimeStamp(0.6513565388);
    msg.setSource(37375U);
    msg.setSourceEntity(32U);
    msg.setDestination(56023U);
    msg.setDestinationEntity(121U);
    msg.command = 25U;
    msg.entities.assign("JUUTPESAVSLGKIEIPOJTKSMQZSGTNKPJPLGYIHBGLNDOHBPKRHGMXSQAEBNGHZNADZFQOLEXRYDUXXSNPHXRRZKAJJHCBHKPKVOTOTAMRCQBAVKWAMREMFJOMXFGWJWEYYVMOATXEJHQVSIMEKDIAFROFPYNEIFVNUNDHGBUFLZQROWAISZLFCZXYVUU");

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
    msg.setTimeStamp(0.42956426093);
    msg.setSource(7804U);
    msg.setSourceEntity(244U);
    msg.setDestination(18018U);
    msg.setDestinationEntity(26U);
    msg.mcount = 137U;
    msg.mnames.assign("ENBMICCQDALJVJFFWPYGFLUDSDWQAOPJBXBFPFTKIWQQBHCWUGBYJVKYNELQEIMWVLJONQKJGGCRCYLEMCVKAWQXGARCOVOYPAYSLCYKMSKTONOHWMZFXUSDDLLPSCFEUCTKTOIRNMIZSZBAGIVRSHXWKPLWIEJOBQTHIDNARLXVYURSZAPSZTXPVMXZEXYEHMETFQSUJONKRFHVDIBRHYDOQXEDRU");
    msg.ecount = 89U;
    msg.enames.assign("CCUHQLVEKLKQNXDYRDTIHMFHVWDXPZLJTGZNMYAMSWXWZBQFRRPLJPLGRDMFIDZLOZSPRTDICOHOVXGABWBLXKGBOAYDEJVIJTYEXOSYDKBMFRWUUIMCNGLQCVNMJHJGRAAVSMNOFJZTFPTUQRQEFELAGTONZJNHYUGQHVAYMZWYFKCPZTSVEUIBDHUECKWZPSRKVUAXRBNSCWUWSPIHNIIXJHBPTXOQSUKMQWYQKEYBGONLXTCOJSEE");
    msg.ccount = 131U;
    msg.cnames.assign("HAJELHTNJVLDLAAPVXBCDIQRQLOZHRAXZQVIVGMEBPOBR");
    msg.last_error.assign("BJBLUBYGALEEZJRUDPZOBGQAPZDPWROIWBQHGAAKSWCLAUXGZRKPRHJCYMVBCHXOTU");
    msg.last_error_time = 0.591869462912;

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
    msg.setTimeStamp(0.631300078245);
    msg.setSource(38145U);
    msg.setSourceEntity(210U);
    msg.setDestination(8359U);
    msg.setDestinationEntity(240U);
    msg.mcount = 70U;
    msg.mnames.assign("ECUBHZRKNONEAKYJYGZ");
    msg.ecount = 157U;
    msg.enames.assign("ORJHHDSYEVLQSQMNRORIJHHNQKFMDTXTDJRKTSZYNZNHLMNBYWBRCJBTCYKBMRLJGWLJYQDTTOTVYBOZEHVEAMSB");
    msg.ccount = 39U;
    msg.cnames.assign("ZRZMBWVCZMGKXUWRCHSALXJITBUUKNKLNLNGXWABJPCAN");
    msg.last_error.assign("AVBHKWYORTIXSMFSNZFPWRAGZCZEHCWBTKXOVYYIPHDHNPYHCQTRHTXRKKJOSSAALMACIMTIXBGTVRRALVIMLZQJOLTFGGQHJRUDPHHWKQCIYYESMADQEZEXCKPNFJJBEMVLKSBLCPLOUWULTEYGJZMAG");
    msg.last_error_time = 0.714592347187;

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
    msg.setTimeStamp(0.48918673203);
    msg.setSource(47204U);
    msg.setSourceEntity(251U);
    msg.setDestination(7920U);
    msg.setDestinationEntity(235U);
    msg.mcount = 37U;
    msg.mnames.assign("VLYPYKXOXYMMTPILKHGFJCBH");
    msg.ecount = 200U;
    msg.enames.assign("GJJJXFVHVLKFPMLPBZZEXDQPCAJTNHCXVJEGOOYCTRNFUDDUBIHOSHJGMDZJPLKDILAYY");
    msg.ccount = 174U;
    msg.cnames.assign("UEPBGYPLTZURSOCNGHJIHASSWXNCWEBNOCBAGQWNWSVMCJZGRDKWMIXJUOTADCPAJBDVHOTNCDARTFLWYDBLYQQIDKDZFZXYVUVZPXGFMRSQIZVLQNRMFQUOETBVZWSRMUVCNHCHWYMOYYJIBPBLIKTPYLFHUYNKJNAPMHXXKKQR");
    msg.last_error.assign("WKZJWAPZFNYEIWGBLOUITCBJINRUBAWVFZTYHNVTODKGMGHCFQSJKNORIPSXYWFJJNQBPYKLGDDJYMTNBRZVTZAMHOBTARDFKPVAASNSDHLMEWELRMGLLMOKQENCZAQYOCBHQVHHGEJDON");
    msg.last_error_time = 0.0825589932055;

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
    msg.setTimeStamp(0.141963585743);
    msg.setSource(48308U);
    msg.setSourceEntity(221U);
    msg.setDestination(231U);
    msg.setDestinationEntity(51U);
    msg.mask = 57U;
    msg.max_depth = 0.224381934919;
    msg.min_altitude = 0.720641778034;
    msg.max_altitude = 0.234994430037;
    msg.min_speed = 0.982993906432;
    msg.max_speed = 0.397169792794;
    msg.max_vrate = 0.807815239714;
    msg.lat = 0.761236904949;
    msg.lon = 0.854825236795;
    msg.orientation = 0.469293842753;
    msg.width = 0.842276219202;
    msg.length = 0.193757209762;

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
    msg.setTimeStamp(0.709348381416);
    msg.setSource(48767U);
    msg.setSourceEntity(142U);
    msg.setDestination(42693U);
    msg.setDestinationEntity(225U);
    msg.mask = 94U;
    msg.max_depth = 0.991909758736;
    msg.min_altitude = 0.131437386519;
    msg.max_altitude = 0.936762507633;
    msg.min_speed = 0.518308867252;
    msg.max_speed = 0.934539745489;
    msg.max_vrate = 0.699532632748;
    msg.lat = 0.136271827931;
    msg.lon = 0.39954723657;
    msg.orientation = 0.519823821676;
    msg.width = 0.357076544176;
    msg.length = 0.759778305397;

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
    msg.setTimeStamp(0.521207235142);
    msg.setSource(46360U);
    msg.setSourceEntity(131U);
    msg.setDestination(23123U);
    msg.setDestinationEntity(119U);
    msg.mask = 3U;
    msg.max_depth = 0.331339202435;
    msg.min_altitude = 0.0261725908239;
    msg.max_altitude = 0.384315189452;
    msg.min_speed = 0.443251463979;
    msg.max_speed = 0.959555397309;
    msg.max_vrate = 0.32657524346;
    msg.lat = 0.558127645774;
    msg.lon = 0.616362598092;
    msg.orientation = 0.703640831465;
    msg.width = 0.702592835627;
    msg.length = 0.566441416766;

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
    msg.setTimeStamp(0.0975763611511);
    msg.setSource(30341U);
    msg.setSourceEntity(3U);
    msg.setDestination(54217U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.409508637809);
    msg.setSource(51804U);
    msg.setSourceEntity(148U);
    msg.setDestination(49765U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.657241557186);
    msg.setSource(21528U);
    msg.setSourceEntity(170U);
    msg.setDestination(38193U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.795891876818);
    msg.setSource(26463U);
    msg.setSourceEntity(50U);
    msg.setDestination(1592U);
    msg.setDestinationEntity(81U);
    msg.duration = 27521U;

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
    msg.setTimeStamp(0.360798900372);
    msg.setSource(34994U);
    msg.setSourceEntity(198U);
    msg.setDestination(57761U);
    msg.setDestinationEntity(88U);
    msg.duration = 33529U;

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
    msg.setTimeStamp(0.344761068378);
    msg.setSource(55501U);
    msg.setSourceEntity(236U);
    msg.setDestination(16658U);
    msg.setDestinationEntity(137U);
    msg.duration = 21885U;

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
    msg.setTimeStamp(0.453121173066);
    msg.setSource(47203U);
    msg.setSourceEntity(34U);
    msg.setDestination(42941U);
    msg.setDestinationEntity(166U);
    msg.enable = 16U;
    msg.mask = 3307682639U;
    msg.scope_ref = 0.350812459867;

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
    msg.setTimeStamp(0.246902718604);
    msg.setSource(56760U);
    msg.setSourceEntity(110U);
    msg.setDestination(14572U);
    msg.setDestinationEntity(207U);
    msg.enable = 244U;
    msg.mask = 2792319498U;
    msg.scope_ref = 0.482912901657;

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
    msg.setTimeStamp(0.453187431181);
    msg.setSource(49549U);
    msg.setSourceEntity(193U);
    msg.setDestination(55894U);
    msg.setDestinationEntity(41U);
    msg.enable = 154U;
    msg.mask = 3624916724U;
    msg.scope_ref = 0.801021688412;

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
    msg.setTimeStamp(0.479616581257);
    msg.setSource(49697U);
    msg.setSourceEntity(158U);
    msg.setDestination(45618U);
    msg.setDestinationEntity(8U);
    msg.medium = 110U;

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
    msg.setTimeStamp(0.227571331779);
    msg.setSource(23117U);
    msg.setSourceEntity(81U);
    msg.setDestination(22587U);
    msg.setDestinationEntity(1U);
    msg.medium = 68U;

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
    msg.setTimeStamp(0.661669561775);
    msg.setSource(61507U);
    msg.setSourceEntity(42U);
    msg.setDestination(45474U);
    msg.setDestinationEntity(226U);
    msg.medium = 81U;

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
    msg.setTimeStamp(0.701198038484);
    msg.setSource(54764U);
    msg.setSourceEntity(85U);
    msg.setDestination(10728U);
    msg.setDestinationEntity(84U);
    msg.value = 0.276768056651;
    msg.type = 163U;

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
    msg.setTimeStamp(0.320380936761);
    msg.setSource(64723U);
    msg.setSourceEntity(216U);
    msg.setDestination(34887U);
    msg.setDestinationEntity(222U);
    msg.value = 0.815304340382;
    msg.type = 8U;

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
    msg.setTimeStamp(0.219736382054);
    msg.setSource(36182U);
    msg.setSourceEntity(6U);
    msg.setDestination(23768U);
    msg.setDestinationEntity(97U);
    msg.value = 0.900475270644;
    msg.type = 26U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.305352955165);
    msg.setSource(48861U);
    msg.setSourceEntity(188U);
    msg.setDestination(17560U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.584464942199);
    msg.setSource(45074U);
    msg.setSourceEntity(8U);
    msg.setDestination(51438U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.865835091473);
    msg.setSource(10822U);
    msg.setSourceEntity(84U);
    msg.setDestination(4232U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.974170177232);
    msg.setSource(32201U);
    msg.setSourceEntity(92U);
    msg.setDestination(6152U);
    msg.setDestinationEntity(55U);
    msg.plan_id.assign("LJVOXZMRJHIZLEDABZVZCEAFHSGMHSCGVASDOSBSLTRCTCTWPQPKXCZOTIHZAPQDRMPKLIPAWDFQDQGWGDLCVRGIBWMUXOFFOCPMRPYWVZIYXDNZEELTAHAOJUEZVGRYBRSOUWHJVQFMBNYBWQFBNMMWTGNUEBHIJUXLJQHXBFCBFTIUYJEODNEKPTIAJTWHUYJUKOYYIKQKXJTPO");
    msg.description.assign("KHFZFNCSZWTQQDZUWRADXKZCXMIADHBFDVKNGPXEZGEHZEJWNHLBQWSOQRVGBKVPEKNCAJJJTCEBUVZQGTOIKNJIPCAKTZWSBRTWSZTJXYIYOMIUTMBRHMAMYEXLIYJFDARUSSETLAPGSYMTSWWHLAVUPIXVOAOPGDVQVIUHEELEGQHVYUXLSKUBTXDOXJAF");
    msg.vnamespace.assign("APDGDZIRVPVDFRBXBYXVLVHASHWTWIKANMLIZUGFWROYABVLJNBHOXGM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RGEFXABVOZCRSGZMQICJBHXKWWLFUVRISYYOLBZYNQQTMTZCWLSRSAHNTTXFAVANRGVQQSMUGKXHDQYDLOXKSJZOCAQOKOJABWOVIFJHWVXGLFZYMCNATCJZHDRQSPRKIWXJMWBFVNYVKIAUHUFBOGWTPZPGEEKBDNSDHYBTTNREXYLIDIJIUHLCBCMEMTZUKUAUUWQHDCLXDPR");
    tmp_msg_0.value.assign("WUPSITSCKAZJQRXKBBJQMVWQEYUDHNHSLXXWPXWMBRJJNNEULMASKHXCGTUTNJCNRYPMSTXGVAJCXSSVPCIDRG");
    tmp_msg_0.type = 63U;
    tmp_msg_0.access = 170U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LGCCBXDJXZEHPTTUXYKALCREJMSDBVPBFWIDUTVINEMSMHSFFXAOTNCTMFVQXBERFAZGYRPGQPMLGUDLJLLKSOPEKTJZOSDMILCRYHKOYUBCXAIBOTXNWZBFVIUIURDNULHUVBPNWYNPMDAZZIZVUNDKLJXC");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("VBQHITWHDCEAREZGBKEKGZSPGHJMZCRNJISOCFRNYSUVYD");
    tmp_msg_1.dest_man.assign("TVLWTBYZKPXWKUBTZITJSDCQLGPHYIFQYWLFPHMARMXZSYUWNMBHUTNLBTKVDHKINNGCQXWUVDLROOVBXFPJMXFEVDKHUVWEKOBNMDRIRZGSAOTIBQSMRJFFEZXRUBZOQRAGACTAVNELBWQALIGPFKYNSZPHLJCYKNGGPZSYUQQORYSLJWCVKNMUEOVBSJSANROHEFCJMDOYIKSEUZHOUXPQAEDMIZEQR");
    tmp_msg_1.conditions.assign("TOYJZEQFFNXWISQCPYLLEKJHVMWNTZFERJXNWFPIGQFYSBIACFOUDOKAUWNIWYBJOHFXBXEBXWDHNBTRJTZSTEGZMVQRQBKXNAGPJQQC");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Current tmp_msg_2;
    tmp_msg_2.value = 0.460015589554;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::CommsRelay tmp_msg_3;
    tmp_msg_3.lat = 0.314745707603;
    tmp_msg_3.lon = 0.362486772082;
    tmp_msg_3.speed = 0.672636654982;
    tmp_msg_3.speed_units = 148U;
    tmp_msg_3.duration = 21466U;
    tmp_msg_3.sys_a = 6493U;
    tmp_msg_3.sys_b = 34239U;
    tmp_msg_3.move_threshold = 0.976028772486;
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
    msg.setTimeStamp(0.253121370063);
    msg.setSource(45592U);
    msg.setSourceEntity(70U);
    msg.setDestination(9471U);
    msg.setDestinationEntity(201U);
    msg.plan_id.assign("EBATLNWZEVQXUVTEJONLTLCWMNEETVFPUECAWHQCZSFOODJJDAGBMICXYRNJWWJLZBIALDAVVQXCNTSPZRKZOKPNYUFQQRKQQLZYWRPWMOSZUKOHRKVDJPYJFOSMYHMCFIAWLKESCFPHTNAUDHKLXIIDUFUUFGIM");
    msg.description.assign("RBIWUETZTJEFOWIKLURAAFIVGIWYZOPYDMCJESDYZHCBXTLQMQIXFWXHKHYTN");
    msg.vnamespace.assign("NXAITBKEKOKXVTLYOJQSNCEPQNOCEHMZFFSCPUZCVRBTXXENZETGGMBPVLFGYBOWLOHQMURHWHYOAJNEUIMKMCY");
    msg.start_man_id.assign("LPZVAUSVGSLBDRBZNHCNXGGHWAIZOLTWQVBODIYAJNYFYQTNUXTVLWQXXLZTBKVRMQVPVBIZRFZJQSTCSHIRD");
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 225U;
    tmp_msg_0.list.assign("XRKQWBWOBGDXOCJNOLWMYRFKGUZSDHCNWMWJUMAVNLVVRJJYICXMNGSIPDLLYXQOZUATKREWNCUVEJZJEHLLHVCGDUPWQOFZZXZVTFSSKIKUITAKDPDQEGLBYMBYHVDTXHAGNIWEDSRNEFBSFQEPHJARYANHDMFAHOZIPBGZBTYSZAUKIXVWNBORGBVAOTWAUQFHQPRCMKJIUTLEXMGRLZTQYSTLBKPXGEFHYOIQ");
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
    msg.setTimeStamp(0.376659050094);
    msg.setSource(64142U);
    msg.setSourceEntity(215U);
    msg.setDestination(21931U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("XCRODFZIMXJOOACURZDALGNPAYNJCIQKJPUKSKNGZECMQNFJT");
    msg.description.assign("UNJJKAJMSMCKPPMIBHRHPMLYGPLWFXXGJWUGADVEHMAWLZGOOMCIBYWNDFIGHMWRIYUQSRBLBKAAEKOD");
    msg.vnamespace.assign("FVBUMTCZPLYJMNDCUIIRFSWPZTUFQCZUPPUTGMGESDAZOMUKROUJXHXIQLGSJZENDBKCIPCQQDVQPSRMGMHJVIGEEPCRTNSRLGDKACEYQKJUBZHVJLLAFTXIVRKFWYGWSWWORSQNCMXYDVXFCNMTIBLEYWBOTHRCRPKAITEZJZYPOLDYWXGXDBXNAXAHNNKHMGYZOASOXWNTBUJTOUBIBWLFDQLAKHVEJVQOARJHI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HJPRHMYUAZFQBUKZGYKABEYIWGQIWILJGZFHYOZBLSFEVFDWKPIUKCFWTZPALHLCXXNKMQNIFULXBJQKBDCRMBUGNTEJNSQKVOMMPRRHTFHHPSIMBVGESCPXWVEAINVJDOAYASDVCTJQHSYWRZWDRXGWOGJLIDMUAOFBIEJUEPGCNJCAULNTKKEYHFOAOBLDSRGQYMVCKYWTWGQOOTUPQX");
    tmp_msg_0.value.assign("VBYBXSDSOARQPYFEFFQTMDFTVIRTZKNCWWHOZKXUNTXMLXUVASRGDSWBDMNJHKLFRWVBJWRRLQAXGMMIPMVCZMUTBACSREEHTKZMGPTPLOEQSIXJDFERWNICXAUUAOVGZOHBEKUPNPHNFBOIYOKYKYEXPPZYHCDCVLJHUKFHDLQZYOQCWUCLCDSGJMMYUBPSGQZILJNWSQBVGDQEHRNDOPOIJXAAVIWZIZYWNHEJLNBAUTQSAXCVJFTERJYTG");
    tmp_msg_0.type = 0U;
    tmp_msg_0.access = 203U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YBGSWDMYUDSENYGDQQWDTVBUNTMOPWLNDJMLNQUJREVHOLCBMGAPZGRQUGWRYAPZHOROHKIUPOOMUNTNUCDOENKPYBBLCZQRQTAFYZOFPDGARFSKQITCDMUMLXZLERDLZVFGLSBSKZEJJCZS");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("GRJKLBMYWNRJZVKRQOZMZHKFFAQEHWIMQVXLYLXRSINUJDODGQPWKCIZSBQYGFTPTDNOCGWCIOAUNETOQHPTPUBXICEWBXGAQHSPCHPNENHUQJIEJLHJQEBULPRJROCFYNVOMOBCYSTIANRUYDUOABWUUDDKWHDRXCNVMVSRJXVKPFYGBYLSRVWMLDTXHXXAKFUVAEWTAGGNKSHAMISWCGFQVXDLSJLSEFCTZTBEL");
    tmp_msg_1.dest_man.assign("JZATPMYJFLOEGKWRDUUPTKNQTAQAACANOSGXSPFVFVVCGKSTPJIKMFDLNXOIIDNLXOVEBWKYORIMXVBZLSDNJYVCGBCLQTBHWWQQYYXPSJFRBZSZCQTXMOQCUEALMTUZTVQZOQRTCAVDJSYFODZGJMXWKNGZRRHCHKZHUROBCWE");
    tmp_msg_1.conditions.assign("DDAWXLEHRBIVNIMFTGFZASFVGRSXZCNEKLMJNDZHVUFPALZWOMEQOHAUTDWPLGRBVDHJFPGXXBZPIKAQBNQCRQEGBMKFDLUXDJSFEOGZJNSLLHGFBTAIOJYKNXVXWRWUHRWWIKJEUDVBYYONIMNCKNJWTSIEZKCLPCOYCETGVOQUTTZCTSVTRHWLQGAC");
    IMC::AcousticNoise tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.summary = 243U;
    tmp_tmp_msg_1_0.level = 44U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.279160694077);
    msg.setSource(28727U);
    msg.setSourceEntity(219U);
    msg.setDestination(31406U);
    msg.setDestinationEntity(73U);
    msg.maneuver_id.assign("BRASGBHDCJQPETDLIPXHHTOMFUVITHPKAQQNTNYVHJIAMHLISDRMYPPILEAXNXGJZYKNBLFUARBLDSESKCGLCSKTWSWDAZWTQOZQPMVUIMJBMITOJOGOKLNWCADUQCAGZXUYNRCGMBCXVEGEWBYNAGKBXOKSUZXULKSKWPZRFVEDIFFHCHSRJMVOWEXNDRTENOFIFTBYOJSZFWRCMQUZ");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.698757255022;
    tmp_msg_0.lon = 0.749949733191;
    tmp_msg_0.z = 0.230675520364;
    tmp_msg_0.z_units = 209U;
    tmp_msg_0.speed = 0.363965696548;
    tmp_msg_0.speed_units = 123U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.958494544476;
    tmp_tmp_msg_0_0.y = 0.682756839773;
    tmp_tmp_msg_0_0.z = 0.625202886064;
    tmp_tmp_msg_0_0.t = 0.576716613463;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 5717U;
    tmp_tmp_msg_0_1.off_x = 0.827830146384;
    tmp_tmp_msg_0_1.off_y = 0.186721571895;
    tmp_tmp_msg_0_1.off_z = 0.374901491454;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.141852893993;
    tmp_msg_0.custom.assign("MMZTYHAWDDVDDVWPXQGBKSZUQTFGMBZNLWCKNPZYJITPSSUYWCBJDTPRRGHNXDGPUTIJADKVFTYEROGSSKLWQOXECWMSKINVMAJANNQSYEJUAKNHOZZRARBBSEFZILVLFHDSFYHKZCYYL");
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
    msg.setTimeStamp(0.127706837531);
    msg.setSource(42496U);
    msg.setSourceEntity(199U);
    msg.setDestination(51577U);
    msg.setDestinationEntity(102U);
    msg.maneuver_id.assign("ZPHWVEUGZWPKCSTHMNIPGLXMPSFXAHRBUQYFPFJHXROTVSDLUREEYMWDWUDYWRXJCOBZCMNJENRHFDICXXQNLOGBANYQMQSZHZMWQWKELIBYXUMPFSIVAGVSDOJNUJJVGKCOSBSQYLTWTJROIKRUZKIAYWBXRKRUKQSHDVUBTIEIZFTTS");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("RHMGOLYGVUJANCHZPPNESZRIHARUHJFXICFDZRQBGKMQPXCMUJUJWZGSKYEYAIXNEUEEPBDXSFMDOJWSIPHWSFBGDXKQYSHPRZN");
    msg.data.set(tmp_msg_0);
    IMC::Conductivity tmp_msg_1;
    tmp_msg_1.value = 0.581621107486;
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
    msg.setTimeStamp(0.624907502949);
    msg.setSource(28231U);
    msg.setSourceEntity(94U);
    msg.setDestination(32173U);
    msg.setDestinationEntity(42U);
    msg.maneuver_id.assign("QQFYGARDOQIVQVPM");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("TBOAUIUNLUJXOCKKURWBXMVZUGCRDFQHAZNHJYETEQZNOPNMHGASJGESBFCGPZMELFNGRMXGKOOSXVPSJJYYCCIAZRGDDVTORTEOZTAONBKEVYSGJWWQFQNTHZXMKSXNUTKWRVFBPQHUKVTASLWVQPQMXAFCQRHFLALWJLTKSPBSBWUYDPWQPHYXVDYJEKFVYHZIPBLEPXFLIDEFCOWSIHNLRMBIJIO");
    msg.data.set(tmp_msg_0);
    IMC::Brake tmp_msg_1;
    tmp_msg_1.op = 46U;
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
    msg.setTimeStamp(0.252230365603);
    msg.setSource(17710U);
    msg.setSourceEntity(124U);
    msg.setDestination(33315U);
    msg.setDestinationEntity(140U);
    msg.source_man.assign("BERLDSMKRHTWZGSXSMTXPFVFAKCONPAIDZZAMNDYABFWWIZJXEWOLXGYLUBZTDQURSMHWOMFFDLXXJJEGCNDSTYYLDIHIQGGWEVTHAGIKVAULO");
    msg.dest_man.assign("PYPCKLZOKENAWSSYQVCRUOVHZBUZBGIYADFUQEKDNVMGWEXYEIHPDEPSHRIULSVSXRLWJOVWKUOPFVZCJXMGJECN");
    msg.conditions.assign("ARFIXSKQZGJVKZSDEGXCBSJHYNODXFTWMRNRFLUAWCCFFLQNDKOEVPKQWRIGKLZGDIYPEARBTPZPQXESFWBBAIOLVHMVTBOCQOFPJRWUBGXHQIYIEAZLGMSXYJVMLTZRVMUUYKCIILVHBSPYUSQIVKXFSNMDHWPKJDLUJBZTDDQRSABEXMHEOGMUVWOHONQEMZWRTVPPNNFIULCZUAKPONOFHYYJSTMCJGTECKNJYJGHWATC");

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
    msg.setTimeStamp(0.360207909519);
    msg.setSource(53941U);
    msg.setSourceEntity(236U);
    msg.setDestination(9793U);
    msg.setDestinationEntity(144U);
    msg.source_man.assign("AMXEDBCDXXNZJSNYLVTPSFCLWUGLVPWRPHCKZLTPYAONDVUGVCFVHCSVPEGIMWPIJRXFNZXMMOQYORUJCOUUDJLRJPUSFSMWHRWRQENMJHAOGJNGGOBTXMWQSECZYDVQDGFQZHKUKXGKYOREUYKBBDTINWQSZATTDZXISERYVIHLCKAIBQZPOIFTJP");
    msg.dest_man.assign("HAXAUMYIHWVOJPCZISE");
    msg.conditions.assign("GBIXFCPIINWQGEUERTEJVRJSPOCVWXXETMKMEZP");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.456340674011;
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
    msg.setTimeStamp(0.372830279478);
    msg.setSource(21654U);
    msg.setSourceEntity(38U);
    msg.setDestination(19691U);
    msg.setDestinationEntity(85U);
    msg.source_man.assign("HQJWLQBXMCHHGQMKYAIXSNHHFLOLMUCUDMKLUJBGYCLGBDZAPQGUXZFRTTSXCJFBIALANLYCCSPVJNFRZTTQUDQNREYUREPKLJMVEIEDFETPNSDWTVGWQWZDFZRPBHXRCQASYXNMVPJWLSSOSJAZYBFOUXUZCVHZXKUOQDWNVDCWWINEVIUAIFPSYRGBBTCSKWDLBAKRKNGMTIXQPAYXDOIZIG");
    msg.dest_man.assign("FDOMHHZTIUKMNPPCSUVMTAXQGFNAOREZZBCJSQOXVLXBSDYHYQAHAUSVKQPDOIMGOUZDZCCUTNXXGSJXMAURBVCFIJADGITFGNLBZZIHAWXORYZMPOGAHSGTNJQCRMJOWXXZTIJTNTKJWDWQECARDSNQYYARBEIDKEVGIHUBFDIEKKLO");
    msg.conditions.assign("ZJQPHAAJRSKSDQSCMGNJVADUPDVROBRXIMIWLPHLWKWYCTAFFRHXOBT");

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
    msg.setTimeStamp(0.991208632265);
    msg.setSource(55540U);
    msg.setSourceEntity(18U);
    msg.setDestination(33649U);
    msg.setDestinationEntity(33U);
    msg.command = 190U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BOLMBNBLJWZJUZCKQUDXTMPELSZFOPVWAKIYHVRTOYEHPJQDGGLDWLZCRCSQGKWMNFEVWXGTXQZDOUCTUNXAHAFGTCUEHBOBRTQQOGNNFIYZGQCMRCPCKHJNRHZIIUYEAIDJUBBEWMQSFHBSABJFQRXWTRWOMKTAAJMXKEHAKPSLTIUZBYRNNP");
    tmp_msg_0.description.assign("ERJSHLYUUVUKXHOYHGVRDXXGFYRKWZVQXZFQLCJIXASPRMBWTGTRUHCYRQGKBMZDCAKCTNFZSZQUQFMSDNVHJWOKNHFAOJUARJCLMVNCWQHBDOBXIJBCDMFYNPXEEVHKYVAMYIWGTTFILIUMCKKXSDGJLMOAECPPMT");
    tmp_msg_0.vnamespace.assign("XCXILDJKHFBOWXUSYTFRTOZLCVSBPFIMKCAAUMXAUGKPZOQOMLFUYEQYRDSGJZJGGDJRYNWVMEKQRIEQKEDXSHVRTSFZZLFBVYMJ");
    tmp_msg_0.start_man_id.assign("QNHWHAMGXNISHEHJOYYNCKMZSTLFWBPGISVOWSQPGTOQFEKEZYIYIXCSIFYEUFPYJRHDPQRXTOLVFBMIZJMOTBXGVFOVXAGDZPTQWHUGQSDEZQCMMJUERJSAKPHNAZCBKNTWDKPDCSHSCKMCUPOLMNEFOAZAOVVQULDJXBTZZNLWDARRFCLWIDRCGNJLYVBTYGFREOHSXJKWJWDUCNXKBBAAYBGMEZAQWPKRRUUTLFQV");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ZKGDEHXLNEKMFDRWAOKAUYJJMLMNGOJNLUQGAPHUPPQJFWEQKXSSLFOEZUCLDJBSHCLWCQDMWVAJAOCQRKAFSECWSJLRXTKSNNRBFVIMJRZJKZRYBETDCPWSOLPOMWAUGGKMNMVRIMOXDZGFNRCDZXTEHKXZTIGYUEVHBXEPIHVHBHGRJBIQTNAGGCTCYKBIWIYFVPUQOWICYLFUFBAXDOORQHDESUNYNVPZFLYBVYTDZ");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 63155U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.827855499467;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.638991591185;
    tmp_tmp_tmp_msg_0_0_0.z = 0.691410485056;
    tmp_tmp_tmp_msg_0_0_0.z_units = 230U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.565837196691;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 107U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("XVAVPMTZMWIFZL");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PopEntityParameters tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.name.assign("JQCFOXAKZLLPVIKWGLMOYWQCVCJJBBBDWMRXRMHEZHNUXHFOOIBGZDPTYPBZOLMQACUEZGXWLTVNDOUHYREOTKXCJGATQMTUYQMDGAVXXUBMCNAYLSTRSAPGGNKJNCNHTYNSG");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::SetLedBrightness tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("TFEDQWDVBOJYATXUVKMJQLYIXGJADZUOSEQVONLBIYSPIPFHNREYZSTGKEDUZHJLGNMBAZKCDVZPRLNSZGGOLOOMIBSYTAYCJNEQLZ");
    tmp_tmp_msg_0_1.value = 229U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SaveEntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("URFTXTSGLZRKVEXYBAZFKXMDLDBOBAWPLEJKFCHJFIKZYDOJOXYBKLOFMGZHWRVFRTSCD");
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
    msg.setTimeStamp(0.755202195735);
    msg.setSource(40138U);
    msg.setSourceEntity(30U);
    msg.setDestination(12754U);
    msg.setDestinationEntity(83U);
    msg.command = 229U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XQLXBWHIWBEUQBOTYPMCPZLWDHRZUFQXWLJJKVDTQBMNDQGFAFKKYVPLGRHGDJFBFLBWTJBKUHLCGCXIFDQSLNRGOZQBSTYHSCYDNTPCSFUE");
    tmp_msg_0.description.assign("VGZLUKLGJLSNAQKQWJYHZBORIDFJMWWSMM");
    tmp_msg_0.vnamespace.assign("FGIWOEKSYAUVVXENGHHHRCKQUDLMAJIXPWGRTNFDXHCPZRZGHXYIOOJCY");
    tmp_msg_0.start_man_id.assign("UJXUHUFMRGQQIDALNQTUSXHVMTSUMCFYRZDNUPFEOIFYLYRZPVQJSQKQWNXGWWJNXLGLHVENXVKUHRXDDSVPRMTWMZYLOXGGUIYEYAUMNPVTVSJXCBKWCCIKEFLZFOIMQOANDYFECTHBLKCFJUBYGSATIBCPRCDDRJSIALKZAZBRWVAWBRCYOLSMBTGPRQSOHHJZGPPVDQZBWDWPNLTNGIMHOC");
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.728552589308;
    tmp_tmp_msg_0_0.y = 0.988187683372;
    tmp_tmp_msg_0_0.z = 0.810295571108;
    tmp_tmp_msg_0_0.phi = 0.647545949259;
    tmp_tmp_msg_0_0.theta = 0.953423057538;
    tmp_tmp_msg_0_0.psi = 0.61459468685;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::RemoteActionsRequest tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 226U;
    tmp_tmp_msg_0_1.actions.assign("JVVHKQMOYIXSGQVYZQAQPGRXDLGQCPQFFERXMIACJZWFAKTVCHBCRICALNQSRTHSYYWGDZWNWTHVYLRDZRYKSZTNFBFVFGGMHTUURIPIXCKKZPIQJFPEUTUFDELRCJPEOYFXKOZDEBYHMEONSQSDL");
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
    msg.setTimeStamp(0.133981399223);
    msg.setSource(54037U);
    msg.setSourceEntity(244U);
    msg.setDestination(45757U);
    msg.setDestinationEntity(212U);
    msg.command = 39U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DVSVLMKRXZKQOELXCBJSYHQMLPMUPUSCLCJFNCLBEIPNHRZOBLIAFFZVXWIUXSDWAFRTGATPUMXMSBWLEHUPVYNQFSLQNZMYTIEGYHOTHIUEOQOBAEKMAENTFTXZYZAIWSDICXBTBKUMNOPQKRDCHVEVCCDYJMJGGOQVLRDSH");
    tmp_msg_0.description.assign("GCYDIGFSWNLQRWTFJPTFUUBNVPNLYQAXAOMORHX");
    tmp_msg_0.vnamespace.assign("BYCXVZGEEDVFPHFNYAJFYLJLGFDBDTITMAHDBQIKIYTYHH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RZWBFKBQIMSFTZTWDGQHRMECWLAFGHARGUVEKLBHCARLOKSZRJNGGLPYTHKSQLMXBPSZXWNCCTQEOUMXEZFTIXJSDJQNQNNJYYEYPFUDMOIHTDLBANM");
    tmp_tmp_msg_0_0.value.assign("ZVOJOESZDHMJYSDQS");
    tmp_tmp_msg_0_0.type = 1U;
    tmp_tmp_msg_0_0.access = 109U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YWAHBPPUTQFMYISXBLBUMEMUEHDRJXVAHGOWOSWN");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("LGQUEDIOWOUSVXCFPHCNHCYLXTSNDTQBUIGZWBYQMHWHPZZUEMMOWXTSAWEFSRCYVIDPGSPQVVJATQEWDPUFVSBCHMKVZJXIHKTUNLXKZCNOUWLBDUFAFFWB");
    tmp_tmp_msg_0_1.dest_man.assign("WUTVAFQRWLZCLSCJZVTFAXIEHDROIJNKJNEFPCXPHABTITPUKPZFXZHRPJBGDGYFZEUOJTIKJSLCLYEXSIYMBDRAAQZELVMMRCNBYNOKLVLIAUTVMFAHYQXSEJGDNJWBXIDXMTVVPDHQVVKBIKNGLLOHRZYHECBQMHSSOTRYHKRYUOMUAMQLKVMWESCDPZCRKYDGDBPSWNIMAKSEXJFFW");
    tmp_tmp_msg_0_1.conditions.assign("NFWVYBUVEBWBCQFGZGCKPNBWPXZIHGLEFPDRMAHKAEIWNMSSJLUHKZNCHQIOTTQWXOVQYPCJXDLAYBLSTOZXKTCMSRXOKNISGBZOZHAPPIDKILFAWY");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::MapPoint tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.392344167211;
    tmp_tmp_msg_0_2.lon = 0.853114893936;
    tmp_tmp_msg_0_2.alt = 0.958610608417;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Map tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.id.assign("CXYZEERGSEKCFMWDKIVTZSFCY");
    IMC::MapFeature tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.id.assign("LCWSNFURSYZKZXLJORVUVGLEWUISFKEMMQCMQUCEOMMWAAAWGTQTNZUUKNSLQMJBHHJRGEXSPJXOAZDHYAJTPHEDBKKXGDIZSFAPMODCHPRYDBIIWSGKBPKRREOKGVOLRDITNPVRBYHFCZGYFBPHVLDEWWVIEQUKJHNZOSIDFQ");
    tmp_tmp_tmp_msg_0_3_0.feature_type = 249U;
    tmp_tmp_tmp_msg_0_3_0.rgb_red = 222U;
    tmp_tmp_tmp_msg_0_3_0.rgb_green = 239U;
    tmp_tmp_tmp_msg_0_3_0.rgb_blue = 40U;
    tmp_tmp_msg_0_3.features.push_back(tmp_tmp_tmp_msg_0_3_0);
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
    msg.setTimeStamp(0.679547542179);
    msg.setSource(62161U);
    msg.setSourceEntity(58U);
    msg.setDestination(11605U);
    msg.setDestinationEntity(127U);
    msg.state = 136U;
    msg.plan_id.assign("HYJLMDBOWDBZBCEWXSPQMGDPYPLVOASZAOXNRFLGGOCQUQWZCLUSWWDZTQJFKAAUTXIIYAIHGAUTINTLKSVBRXHKFJNBOTXUFRKWQPXDCRWBYBSMMIS");
    msg.comm_level = 224U;

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
    msg.setTimeStamp(0.278321716201);
    msg.setSource(52955U);
    msg.setSourceEntity(148U);
    msg.setDestination(1902U);
    msg.setDestinationEntity(218U);
    msg.state = 43U;
    msg.plan_id.assign("ELQFOTMBKKWXRWGVYDUURUVBSLPHFJZZVRCQCPZGYGANIFNRFJHKTYVJQOUWLPJCXEKRYFWFWHLAZVDQSASKXCG");
    msg.comm_level = 81U;

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
    msg.setTimeStamp(0.136956904781);
    msg.setSource(62721U);
    msg.setSourceEntity(113U);
    msg.setDestination(35066U);
    msg.setDestinationEntity(209U);
    msg.state = 13U;
    msg.plan_id.assign("TMCUUHGYYXYKJZKTZFKSVXUKFMRDNBWQDPFPANZCERYAGJBSXSJIIPOLRXORSSHNEZQCYDPWXPFRGISIHQTLMUAKVVXNQRQFDMQLSTGZURJMHTSBULNYTN");
    msg.comm_level = 176U;

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
    msg.setTimeStamp(0.687368992135);
    msg.setSource(2932U);
    msg.setSourceEntity(21U);
    msg.setDestination(37043U);
    msg.setDestinationEntity(239U);
    msg.type = 157U;
    msg.op = 225U;
    msg.request_id = 35533U;
    msg.plan_id.assign("LHMDOAVWKVAPBHCRWNLLNHQILRJVHQOXPJACUATSZWQGQZOZYHSSGLQKUMAEUNGCFTNPBKLRJXMTEGZEEILUIISABRKTPIPRNDML");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 4U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("QQERSZGICVPRPSYPNJVGKDGDKHQGTPBFHZGNSONBVNZHBFKWVEIAULAAZZKTWGVUWOFOYYNYDEPHXXXRNIDLCRXWFGHOIUTGTDWZJYNTEIKSJQQMMDKHEJHUAUJBWBQYPVXWVTXTGLOLOHMIFEDLUFQYPFEJZHSRORRAJDFOLLBMPVQQKTVRPONRRGJBUSCCBUJNDZNIUZIFMATAAMYCVC");
    tmp_tmp_msg_0_0.description.assign("CCFVDJBGVWTMQZJLWLB");
    tmp_tmp_msg_0_0.vnamespace.assign("FYSMQYBUKUPRUAZILZZDJGJCPTFERRIGWWDXWYQYMFDWJQIGURZNQSVVDJSJMOXJXSXLNGESVGOMAOUBPJHRKWWYHZTCUXBHPFQJDFLGYDNFYRHNCKTWVUUSEATOABBQIPPKVHEFVVOMCKKMTMCFKONLTSDPARHNWCHQDEEJIRGLTACLYMLGUTBAZYQROO");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("YVEPWPDYQGTKQIBOENGNPKJTZIIVQOIMBUOLFFYLLURDSPMUGXFHUDHCYRUTOYJZIWPGXZGVUAGVRZFOWOREJMZYXHNNXGKGNJDSSGBJHAJZQJUIRSJKKGKVMCMEFALTXWIVWIUSROWHVSJWLZIMDVPANFZPTKTRODXOASXMBACDKR");
    tmp_tmp_tmp_msg_0_0_0.value.assign("FVQTPZKXRMYNYHQXQATQSPGIKVGUXVSPXYBOZKGBUDDGVPOZWZEJFUDSSRCVYBMJLAGWLTXEIJBJHONKZCXQIIMINJDANNDGGEJAGAORNSTUFUJAJMFLBRTTRGIYXHYDZHJNWLLKQQPEUCWKEYOFUDVDEMMWDJAZBGXPTMROFTNRMEIPCOALSBBCNFISWKTLQUPPOMECSOVDBHKVYAOHHVRLICVCCRSZTWKAQHEZNIXWRHEFBHSMUFFLXQW");
    tmp_tmp_tmp_msg_0_0_0.type = 119U;
    tmp_tmp_tmp_msg_0_0_0.access = 166U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("FUECKLJFYXQEGLZWXETOLHJPZZGOWTHWITXWOSJGDUGWJSAVROVPBHAIMEPUCYRKDNRJXPLXZOWGDBOVLAMHZLZUDU");
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.source_man.assign("WOIBQTJBZVLGETALWHGTHOAGHIPCEURTSJC");
    tmp_tmp_tmp_msg_0_0_1.dest_man.assign("SGPVEAKELSDSREYABUXXRQZKSWXPJPPJKTCXEXUFBZLGOALRVTBNGMFPJTUHYEYEZBADR");
    tmp_tmp_tmp_msg_0_0_1.conditions.assign("WXMXWIXHCQQWHMVFKAGWWKXYVOUMXUTGTPDAKOBGQUZEPILRKRHAQDSTXFGJFSUCHNNYOAPBRGPDBLKWVCGTVDXTJJGZBTYTBJPFQLPTBEQCOIDRHLTCYMEAGEIJEVZKAWPVVRDUKLZO");
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.x = 0.200582248449;
    tmp_tmp_tmp_msg_0_0_2.y = 0.500025876035;
    tmp_tmp_tmp_msg_0_0_2.z = 0.975616767072;
    tmp_tmp_tmp_msg_0_0_2.t = 0.617642848506;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JMWHREDWMDYZLCFRKZHWUPHDFTWSDHADJKAETPNVBFLIOIHVZOISAHAPVHTKUIJGPIKKDXJGEUNQDCHQJQNQEXJNBBPZYGGCRZUOMLCYBPAN");

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
    msg.setTimeStamp(0.896658712681);
    msg.setSource(40119U);
    msg.setSourceEntity(148U);
    msg.setDestination(10164U);
    msg.setDestinationEntity(53U);
    msg.type = 114U;
    msg.op = 235U;
    msg.request_id = 60282U;
    msg.plan_id.assign("JCRAYQLMBAYUHQRVFEHPXJBNZTAHKDTZCOQJCLYLUBBFHTKOVVAIUNFILIJZIJM");
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.806479967933;
    tmp_msg_0.v = 0.108462325774;
    tmp_msg_0.w = 0.580564344138;
    tmp_msg_0.p = 0.992525291105;
    tmp_msg_0.q = 0.593120603777;
    tmp_msg_0.r = 0.0833685699148;
    tmp_msg_0.flags = 17U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MVTIGBPLHXKRKIKUNQODQYLUIGFIPOSTONNUD");

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
    msg.setTimeStamp(0.98958583307);
    msg.setSource(21619U);
    msg.setSourceEntity(235U);
    msg.setDestination(4320U);
    msg.setDestinationEntity(21U);
    msg.type = 136U;
    msg.op = 243U;
    msg.request_id = 54240U;
    msg.plan_id.assign("BKYTZRRIKBKKVINUXHWHPVMZPNISRSVAOGMPIEDRYRNLFDGDMDHYQYUQMEUDJCNGGOCOSLQKYKQAVRFJPTCLCSWSXDSMNKIJFHSRVLTWWNJLAUVDBNQZJHBOIJERYEHFOUZAWSDFLUNWZZQBXO");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 105U;
    tmp_msg_0.file.assign("CTKDQBHEABQMYBPFIEHWNTRONVSJJAYVDURWJDWKSHHMVONWLNGLVFVDAGFETOBARBEBWUJMTDCKZGXQOXCAFPSYZKRNKYGHPRSBXNQVPFBIVDUWOJNWHNUACYHNYLIPDXCFYGZEKYGQOTSUGURHXSDJKPSRSDPAGZTOZXXJQCJIQWZMOFCDAVCKUXQLRBFYGITOZHEMRTAMXUSIIUSYPELFAQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZXBUSDBIZVTFLCFERKAAJSUQYQOPTEQIVGGTNKNLCVOPXZMRFYTFNUIXMFBBOHTJDVYNIDFEIMXGEWIOERRSXEGAGHIPFTXMTSRLJSOAKUKMAQJDAHJKFZOUHVRWZHAHVNWZPPJHECZGYVORWCTRQYZGAHYCWPIYWEYKXLDXLYBNQKAWTUJYNRS");

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
    msg.setTimeStamp(0.636452555839);
    msg.setSource(62919U);
    msg.setSourceEntity(90U);
    msg.setDestination(17864U);
    msg.setDestinationEntity(195U);
    msg.plan_count = 15117U;
    msg.plan_size = 1134715166U;
    msg.change_time = 0.534139637052;
    msg.change_sid = 47144U;
    msg.change_sname.assign("LMMSHQIORLGPFFWOKBHTCRZXJYDSXKWVICZTRLCWOJPYJYTUZRTTRKSSEEZGHXNDLCTPWGLLAEBIAJZHCHTTRVXKDSALCPSQGFFSUCHFDHWDOHYYDGQTCXPBFJEXVDY");
    const char tmp_msg_0[] = {63, -33, 15, 36, -51, 73, -49, -33, -74, 85, -87, 15, -57, -30, 60, 42, -107, -128, -86, 80, -50, -112, -127, -50, -23, 122, 27, -127, -11, -126, -80, -30, 96, -69, 121, -82, 10, 121, -26, -99, 37, -18, 52, -54, -20, -76, -11, 113, 122, 3, 15, -66, -96, -106, -84, -103, -124, -106, 83, -92, 76, -11, -5, -98, 32, 72, -32, -7, -107, -118, 24, 8, 43, 11, 51, -17, -110, 76, 16, -57, 14, 91, -57, -42, 95, 124, -97, 107, 123, -125, -27, 117, -93, -45, -68, 5, 91, 36, 33, 107};
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
    msg.setTimeStamp(0.417575430728);
    msg.setSource(24128U);
    msg.setSourceEntity(114U);
    msg.setDestination(63574U);
    msg.setDestinationEntity(51U);
    msg.plan_count = 61031U;
    msg.plan_size = 1343191489U;
    msg.change_time = 0.407217546271;
    msg.change_sid = 6211U;
    msg.change_sname.assign("SLLRCEQGYKYQIKFOMFZOTLLILUZYQYXUIWISNDOGMPSHSEFMJMUKXKNPOWMSIJDTNDHETQAIXECTTQGJVAFUABJFEXEQNYLDCCEUCGZKVIXLAWZGVDFKOAOGPXKWVYYBXHTWRDOBOVJENMUZAJMRSOBBYVNNAIDEVKFCPRNWBPGUQTMIXZBOSRMUBBAGDWNIJMGZHCHJHZRPJELBAVUHR");
    const char tmp_msg_0[] = {7, 110, -8, 89, 48, -26, 116, 34, 16, -74, 54, 110, -122, 11, 79, -112, -20, -14, 99, 8, 116, -8, -7, -42, 60, -72, 67, -54, -97, 1, -78, 115, 66, 111, 50, -24, -80, 72, -82, 81, 88, -67, -104, 8, -89, -23, 56, 25, 125, 43, 119, 5, -113, 72, 61, -119, 15, 2, -106, 112, 24, -98, 36, 13, -49, 15, -88, 44, -119, -60, 73, 67, -73, 37, 29, 17, 87, -99, -49, 8, -15, -107, -95, -103, 70, 123, -3, -106, 47, 102, -51, 61, 12, -19, 92, -90, -99, -27, -88, 108, 43, -23, -14, -72, -61, -83, 5, 93, 56, 123, 46, -106, -82, 41, -86, -114, 6, 64, -120, 88, 100, -23, 67, -75, 8, 20, -92, -32, -40, -90, 75, -126, -98, -57, 49, -101, 28, -17};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LHKXDGATUJREMIYUORBDGMWZTQJPBNTBIXNCMYRGQRCFUUUXOPGZOZOGWRCESJRHVJIQHDVYGIGIIOSHXFUYCLKLKPMVLSJPNOPPBWEBEWHWVCZZQHTFBYANMZZUDAANFMZWGBWEMDOTIFWTPOSVECHWQJHVTRLEDXQCDVFAGYFKEXWKCANLBPJKUNLVPRNQQQMNLXGOKNSQSJCDZSBKSLYJFVAVIRXPIHITSYUJAX");
    tmp_msg_1.plan_size = 8574U;
    tmp_msg_1.change_time = 0.966826593543;
    tmp_msg_1.change_sid = 54855U;
    tmp_msg_1.change_sname.assign("UNDGLQFHURAKSODINIMQGLVUXGJVXWCBSPSGZYUWDHZOWLJMHYNPDAMJMKTPBCOTPCGRNLCMFRSAJHMIOHWUIQWAKTYPHWULUEIFWLXEZQFWAFQSH");
    const char tmp_tmp_msg_1_0[] = {121, -34, -61, 92, -60, -29, -6, 39, -38, -97, -73, -16, 5, 74, 39, -31, -10, -17, -60, 106, -61, -119, 81, 79, -102, -61, -44, -97, -74, -16, 117, -109, -125, 74, -103, -98, -52, -65, 2, 58, 90, -90, 54, -111, 87, -94, 47, -124, 25, 97, 72, 123, -10, 105, -2, 39, -93, 85, -79, 60, -59, -70};
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
    msg.setTimeStamp(0.420581957927);
    msg.setSource(29920U);
    msg.setSourceEntity(65U);
    msg.setDestination(56791U);
    msg.setDestinationEntity(86U);
    msg.plan_count = 16057U;
    msg.plan_size = 665850971U;
    msg.change_time = 0.646126667887;
    msg.change_sid = 40422U;
    msg.change_sname.assign("IHJGKGZDVWLVJJCKLNUEGZNWDRJBKNNIHUDTWDEQFCQAZLTYEJXAJEVUYLTJBXLPCEMDADLZKEFTVRQBCTPXYGVVUAANMDFGOGSTXWPGQLLUVEYFINIBEYAABWQPEEGQUCXMIVWKROOUTDUYCVFHZQRBRXNAKTORZQMJHYHMPORKZJYQSPRMIKFPHCGSGSHWFWJIPSKSWRBOBIXIYFFUVAICYLPS");
    const char tmp_msg_0[] = {31, 10, -109, 104, 113, -123, -42, 3, 85, 5, 19, -105, -4, 38, -80, -40, -44, 18, -120, -80, -73, 82, 42, -47, 46, 13, -111, -42, 96, 111, 57, 62, 32, 16, -12, 117, 41, 62, 29, -30, -46, -93, 22, 111, -24, -126, -9, 34, 42, -23, 60, -118, 53, 35, 73, -96, -101, 81, 125, 82, 102, -47, -27, 34, -87, -104, -40, -79, 62, -56, 27, 19, 94, -31, -80, -59, -65, -35, 90, 32, 43, -83, -101, 108, 25, 23, 14, 109, -68, -8, 0, 115, 77, 40, 67, 27, -33, 47, -42, 62, 77, -76, 16, -25, 27, -127, -73, -76, 74, 89, 4, 38, -9, 99, -29, -115, -42, 71, -58, -97, 126, 73, -103, -52, -40, 19, 124, -18, 76, 126, -15, 90, -56, -24, 94, 42, -114, 86, -59, -24, -127, 23, -123, 118, -121, 45, -84, 101, 112, 107, -80, -15, -51, 37, -104, 109, 70, 68};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PQCFTDVINBGJIAAJPPMMXMLNLUSURWHGKYCZPHNUMQDREPURPYYKIJPAWLAMRVEJKFJETLNQIDXNXUHGZGOBEVSHVTUASWSFWBFBFRIXGDSZHECSYOKJEAB");
    tmp_msg_1.plan_size = 30040U;
    tmp_msg_1.change_time = 0.523833328362;
    tmp_msg_1.change_sid = 26557U;
    tmp_msg_1.change_sname.assign("AGYPVDBHOTPUYZTLRRQKLMUEQPIOSVCQXJLKHABDWWYISMIXFLMPBXHEFTFJWJZHKOEEPZAXJQGUOYFINGWOBFEIXUKJBTDLAOZMACBTRRJPSVHGTYKSUHZNIOTHSCXDTMPFHHGKHXMEQKCRGFBWAFPDPISQMVUUXRM");
    const char tmp_tmp_msg_1_0[] = {86, 22, -21, 60, -33, 90, 79, 84, 67, -109, -98, 79, -36, 124, 36, -98, -57, 126, -4, -30, -114, 46, -73, -102, -99, -122, -40, 53, -109, 104, 3, 5, -122, -28, 10, -74, -123, -79, -127, 47, 103, -104, 74, 95, 43, 85, 88, 48, 1, 114, 47, -91, -62, -81, 114, -98, 47, -28, -19, 1, 47, -68, -38, 62, -7, 90, -22, 8, 99, 36, -32, -107, 45, 44, -75, -92, -7, 87, 79, 24, 106, -109, 65, 98, -18, 68, -53, -53, -127, -36, -127, 116, -44, -47, 54, -16, -25, -18, -40, -10, -76, -60, 101, 51, -124, -21, -23, -125, -60, -88, -106, -25, -124, 108, 124, 125, 116, 105, -115, 48, 76, 82, -1, 94, 64, 61, -103, -91, -2, -124, -9, 77, -82, -63, -37, 119, 15, -117, -39, 92, -57, -53, 33, -87, 95, -34, -23, 0, -99, -122, 77, -19, 76, -37, -65, -1, -27, -125, -80, 12, 35, 45, 101, -28, 64, -93, -67, 111, 90, -75, 108, 87, -45, 34, 92, -44, -66, 38, 86, -63, -49, -33, -97, -1, -3, 112, -10, 113, 46};
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
    msg.setTimeStamp(0.238835649727);
    msg.setSource(36194U);
    msg.setSourceEntity(37U);
    msg.setDestination(13456U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("IXGIILCHPGJMOUXUDYKEOFESWENZOKRFHGKMNQIVKTMHAEDTHSLTXJANAXLMNIFYDFBESCJGRUXIGUKAXQPUZZRMWBJBZAERQZDYDDXCYSUITPEOSIHPYNMYWZMTVGBCVWOAFNKDCRFZSQYDKSUBSBETKNOVIWZJWXFXVRUQKTNWXQHTGSABMOPTGQJOF");
    msg.plan_size = 1747U;
    msg.change_time = 0.688408737145;
    msg.change_sid = 15968U;
    msg.change_sname.assign("AIATGTDBOSPXCUFHDXPPKBEJFOOVEOWKZNMTZLTFLUMHCJEHWVGNBWMIJYVBQRWIIQUHOAVADLWSEZRYMTWRKRMJZKJLSNWFRJNQXHDIGZCCESWDNDXZPPUUDLWDYIYZBTPZJYXTUNBAVFIFLYKVVOALCNWFAHCFUNQCGGUUNHKJDPXGXTCLEOKEJEQOBSEYGVSHMLMASMTPXQLVKYPGMROZFUYZMSQIGNARDKJ");
    const char tmp_msg_0[] = {29, -69, -121, 10, -24, -34, -4, 96, 118, -39, 71, -48, 93, -123, 53, -123, 86, 60, 126, -92, 119, -106, -122, 104, -71, -51, -19, 61, 79, 10, -97, -39, -40, 106, -18, 63, -3, -126, 11, -25, 7, 7, -124, -111, 5, 74};
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
    msg.setTimeStamp(0.847865096881);
    msg.setSource(29505U);
    msg.setSourceEntity(120U);
    msg.setDestination(31993U);
    msg.setDestinationEntity(217U);
    msg.plan_id.assign("MNTGQAZXOTI");
    msg.plan_size = 26097U;
    msg.change_time = 0.162355951538;
    msg.change_sid = 46535U;
    msg.change_sname.assign("OTEKPTFBQGLONYHHSCYROTLZURFURGPBPDBXPRQYZDFBFTRSPEPIOSTCVZYITYOF");
    const char tmp_msg_0[] = {106, 13, 38, 51, 57, 54, 52, 51, 77, -24, 21, -100, 61, 111, 115, 85, -39, -27, 75, -93, -110, 83, 124, -92, -57, -27, -107, 29, -90, -52, -43, 65, 83, -118, -33, 53, 99, -85, -102, 94, -15, 117, -95, -113, -36, -117, 80, -71, -1, -99, -107, -39, -105, 10, 109, 34, 23, 21, 1, 15, -84, -29, -120, -110, 94, 108, 61, 50, 21, -16, 35, 79, -62, 57, -17, 20, 13, 84, 61, -70, 32, 97, -42, -56, -78, 116, -48, -25, 106, -64, 82, 118, 32, 57, 92, 33, -4, 87, -60, 22, -8, -120, 25, -45, -79, -71, -56, -68, 79, 19, 30, 97, 84, -61, -16, 55, 64, -16};
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
    msg.setTimeStamp(0.624402857607);
    msg.setSource(52287U);
    msg.setSourceEntity(198U);
    msg.setDestination(29510U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("PIXMFTDWHK");
    msg.plan_size = 43719U;
    msg.change_time = 0.208915144265;
    msg.change_sid = 5603U;
    msg.change_sname.assign("CLYUVXGGAEEHTRCJFLVDNAUURXKTFEZKEZZHFLABRSWYEHZGOARKYRTBQUDRASCQUOIHYGCANBIUKGBLIOPT");
    const char tmp_msg_0[] = {27, -99, 120, 106, -46, -65, 81, 63, 43, 15, 67, 15, -52, -17, 32, -95, 104, -107, 17, -40, -64, 120, 2, 75, 81, 90, -62, 112, -65, -102, -95, 117, -51, 84, -111, 65, 74, 14, -49, 30, -19, 90, 90, -29, -49, 71, -46, -44, -3, 18, -119, -99, 65, 47, -73, 30, -91, 81, 2, -18, 36, -108, 80, -98, 68, -95, -120, -65, -70, -106, -17, 103, -35, -44, -78, 72, -16, 35, -6, 105, -42, -101, -78, -48, -27, -122, -25, -90, 78, 95, -73, 36, -89, -83, -124, -125, 52, -35, 50, -106, -53, 91, -13, -36, -7, 99, 58, 67, -42, -51, -121, 10, -85, -39, -61, -82, 56, 55, -29, 87, 41, 2, 94, 87, -24, 4, -122, 55, -122, -82, -14, -51, 47, -116, 123, 44, -103, -19, -86, -108, 25, -126, 15, 14, 56, 7, -14, 55, -116, -107, -106, -107, 70, -81, -49, 49, -16, -127, -102, -123, -9, -5, 31, -30, 42, -96, -28, -72, 0, -74, -36, 50, 32, 0, 65, -17, -128, -91, 124, -98, -128, 87, 126, 20, -102, -44, -38, -111, 81, 91, 102, -92, 0, -61, -103, 78, -12, 102, -61, 81, -28, -13, 123, -13, 98, -99, 94, -126, -68, -84, -2, -75, 123, 14, -26, 52, -74, -57, -110, -103, 28, 77, -21, -44, 27, 34, -43, 79, 17, 6};
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
    msg.setTimeStamp(0.242492501372);
    msg.setSource(40341U);
    msg.setSourceEntity(167U);
    msg.setDestination(22869U);
    msg.setDestinationEntity(41U);
    msg.type = 102U;
    msg.op = 232U;
    msg.request_id = 46454U;
    msg.plan_id.assign("AHNAYMTZMLJGALGIFMGSNRNVFBERETVOGSZICABFQHSUGCVITWYVLXREBYHQZKTPUOTFMMCPJYUASEVUSLBAKKR");
    msg.flags = 12468U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.578981829948;
    tmp_msg_0.lon = 0.972872434677;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MSYDCBDZXZWQEQJCTOWONHVUIDOSKURRDBPNCMTLNYQNXWQKFJGCXVDBQSXUIAXJPJHAENFMSGWRRWONLTJHYZMQGSXVKKYTXUVCBGETQVVLMARVZCASBKODGHMQMDZRFYPVCZWZTAI");

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
    msg.setTimeStamp(0.212174803792);
    msg.setSource(14055U);
    msg.setSourceEntity(64U);
    msg.setDestination(12474U);
    msg.setDestinationEntity(158U);
    msg.type = 244U;
    msg.op = 114U;
    msg.request_id = 51759U;
    msg.plan_id.assign("BGFODKTRBGJNRLTWNQRSFMSCIJZIEUWBJUKMZAUBHDQIGXBYQZNGJJMXCARLCDCKXUEQFZNXYOIBNTSGJJMINLVVHQGYYAWELGWAEFBYPMKHPKTQJUOBHCFGZJZIVKXSOCDDFXXNWHLWVOQHVXNHPMFSTCMPYDUMATVAGOLYSVKOARQGWRWMTTRZCLJORUCBZAFETSZXVRIKUIELDEWXYYEVONPZLWHLMVIISE");
    msg.flags = 53817U;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 1921553321U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QQTHWVJCXIMBCGDNFBLAGAVYMHQHVFJFISULIBEUYOUOPSXKFBJNGOOZBUPSYCGIIPRKJKFCRDJLFTVEHFNAOAQ");

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
    msg.setTimeStamp(0.467237701303);
    msg.setSource(138U);
    msg.setSourceEntity(154U);
    msg.setDestination(4007U);
    msg.setDestinationEntity(30U);
    msg.type = 94U;
    msg.op = 56U;
    msg.request_id = 59802U;
    msg.plan_id.assign("MRESHPKICSZJAGKJBOLQJCPBPYWRCUSUMQHOWAHKSWMRAVWNXS");
    msg.flags = 54806U;
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.474873852645;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BPCASGVEWHHXHMCABDXNGIXAODFFTJLIVJGOVFR");

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
    msg.setTimeStamp(0.759930936241);
    msg.setSource(11933U);
    msg.setSourceEntity(195U);
    msg.setDestination(27632U);
    msg.setDestinationEntity(7U);
    msg.state = 237U;
    msg.plan_id.assign("DJWDADTWAKPHKSMATILKRZFIYKOFNARNHRXKUXIFYYEABPIVJNZCZCHLEWSAUGRNCSHDDZNO");
    msg.plan_eta = 397021360;
    msg.plan_progress = 0.783220204548;
    msg.man_id.assign("PKMZNYYYXEEWZMLKQDMTCZBAJFVXDCRISIJLXQAVAPGDPAQJNPZH");
    msg.man_type = 24749U;
    msg.man_eta = 1978401374;
    msg.last_outcome = 212U;

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
    msg.setTimeStamp(0.189756463177);
    msg.setSource(22088U);
    msg.setSourceEntity(19U);
    msg.setDestination(54713U);
    msg.setDestinationEntity(69U);
    msg.state = 6U;
    msg.plan_id.assign("VFRVIFHRTICBPNLGWQGUINXTSCOUEUYMHPCSXLTXNSCVAYBTQGAHGESCOMUSFKJTOMEGGTSWGWPUJMSHKJJJXYIWOYUUCRYSNAWOBAZJJAINBIHTEIKVXELCWEMPZIFZBDDUFZMGNRFHLXQDEFENWALYFQPZPQWPRKGDPHABXRYUCZFQXTQMTCDOJDBWASSKARDQOROMKDYBVTLAVNE");
    msg.plan_eta = -610526297;
    msg.plan_progress = 0.214052621193;
    msg.man_id.assign("JEBNIQSPYFVTZZUGQPOFOVXXM");
    msg.man_type = 14203U;
    msg.man_eta = 105988495;
    msg.last_outcome = 117U;

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
    msg.setTimeStamp(0.972055665937);
    msg.setSource(43432U);
    msg.setSourceEntity(193U);
    msg.setDestination(56492U);
    msg.setDestinationEntity(101U);
    msg.state = 92U;
    msg.plan_id.assign("UGHJCHCCLMAWVZDKIPIXEXBNUNRHLAHLFIPRKPOAODHUXAOEANCUWFHCZLFMCQWKWXPXDREAULJBJSNTCDZMWVWDQBMUNPBVVQPI");
    msg.plan_eta = 1846352254;
    msg.plan_progress = 0.190582143166;
    msg.man_id.assign("LOPIITJGBAKVPVYHKKFALHINTNEUYMCDXFQQMCXCCSSFRLBYHZJNZFMEUTGRLEYGZSNUXSAJKUNODPOCVRXQLBHXRFUJYTMZFRJWZYZKVSEIEHIBTOWVMXPEAHNWYOR");
    msg.man_type = 48507U;
    msg.man_eta = -921372720;
    msg.last_outcome = 142U;

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
    msg.setTimeStamp(0.427734814812);
    msg.setSource(23250U);
    msg.setSourceEntity(11U);
    msg.setDestination(56305U);
    msg.setDestinationEntity(166U);
    msg.name.assign("VAYYJTRSJRQTGDECUEEQYXKYSZQPAEMBXTRMCVBNFVBJPXVAVNDOWFGKFSNMLYZGRAMLSKVONZONYTTPWOAAYROHVMMJIIKHBDWBXLSIOHNAKXOSAJCRGYJZBLQPLEWKINZNYCZVUPFTCWWNQQMZZFEUWGFUBSUCQQRJHLHBGPSZGUSHHACFDXIIDDKCHKTGHRTPNIJRHQKMWPYSREILUEDOGBMXEWXIVKTBL");
    msg.value.assign("IEUPLZEHLVNPJTPZQRDDUGHQLCGTOMVOHTTCRNMBJXQVOKXGLATBXVBOXNYRDCVQDNKDYAODUIRYSBBMQKNGYSZEIJHLYIUVENOWXYFWHTYIUZVZBHZJACBLKGESPKEFRSIORMSDLHHWLJEGCRPADMFQTMXNDAPNAYU");
    msg.type = 169U;
    msg.access = 81U;

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
    msg.setTimeStamp(0.717740331012);
    msg.setSource(9104U);
    msg.setSourceEntity(80U);
    msg.setDestination(18567U);
    msg.setDestinationEntity(120U);
    msg.name.assign("VOHXBWFJCZTVWEKYDIQUXQPCWPXTKNZPRASLLJMULQLZNQPNKTAPSWGNPBRVBWBBIYFEWKRJMZYSZHGTYQRVMCECUASUSNYVNITTGOYOWEJAIEYFWVWMYIPMACDOXVVEUSGKQ");
    msg.value.assign("LRNTPPPPZGCMLUCYXEOPNDYKEXIAFUIWBXFSDSKPZSBXMKMGLHIVBAKHWYJCJVEIMIJEUBHBHNXQCDMXGLHGNICQFXDAOLLKESIHZRGBGVQKFFLQDOOJWZVWYATHXGNOEAV");
    msg.type = 37U;
    msg.access = 191U;

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
    msg.setTimeStamp(0.589280142713);
    msg.setSource(19322U);
    msg.setSourceEntity(38U);
    msg.setDestination(64223U);
    msg.setDestinationEntity(195U);
    msg.name.assign("GZVMKBOLIDUDXOZCCRZMSPMKACRK");
    msg.value.assign("ZIBQQHBNXAMPLFWKGCQMCCOWQYSHCLUTEQIVVPANITTCVSJBNIVYVHKGCQLJHFGDWGPDBSCBNYRXQXZWIYPDMKHOTAGERZUALVWYQJENDERPKPINZRPGBOFFNTOUDEKHKMFKFKCZISDRGLXJMTNJDHZKRLLAXEHMTCGJDSEMEWTYWUXVJCVSERLROYEOULLUAUSMR");
    msg.type = 171U;
    msg.access = 103U;

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
    msg.setTimeStamp(0.954259474281);
    msg.setSource(56456U);
    msg.setSourceEntity(133U);
    msg.setDestination(18937U);
    msg.setDestinationEntity(100U);
    msg.cmd = 46U;
    msg.op = 202U;
    msg.plan_id.assign("POBREIZRNQVPCMJKVCGBFRPKJBYUKLHTVNLQWOGQVMWEDFLGBNAQKLGTBXIPOWQSPCGIOXDYR");
    msg.params.assign("DMSGKMHRZRBAXPCC");

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
    msg.setTimeStamp(0.187948016868);
    msg.setSource(54095U);
    msg.setSourceEntity(116U);
    msg.setDestination(7391U);
    msg.setDestinationEntity(245U);
    msg.cmd = 150U;
    msg.op = 61U;
    msg.plan_id.assign("QTUXZAFKOWDHFVSNPGEPQYKRSVSRJDSDPRQEMAMGMKOLYBXUCKXHUAGDRYVDVFQFHOOBWSUNOOXICLMVW");
    msg.params.assign("FIWZUIXAFFSZNHHALPZWKAIDCDGLD");

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
    msg.setTimeStamp(0.604207551993);
    msg.setSource(10447U);
    msg.setSourceEntity(189U);
    msg.setDestination(62671U);
    msg.setDestinationEntity(191U);
    msg.cmd = 171U;
    msg.op = 66U;
    msg.plan_id.assign("RAAXWLGIHBLOKNPPOZMXTCMOKZKFWNROAUSOKUITNTCZPPRKLBACVDQFJTYHXWRKPUNMJMJNMDSYESNCYHQLSGFUVGXWVEBLLTRKMSTQDWYUDIHMZPEUXHAFYEFLSFONTEJJJJRXKZVPNLRCNQOFAYOYGAZPPGBCCBQWESIPDEVQMUUUWMBIHCWTVZMWIQBSDXJZVZGLIFRXQBYJTCLGSSHGFBVDWIGAGERABQNTYEKDOCIDH");
    msg.params.assign("NGRDBGUIEYNXLNHCWLDZSTKSJHZLJUMJZSCEBFPWQRYMJVQOJGWBBHTUGQHGBXUNTPAYYGNVXAVPYFD");

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
    IMC::ReportedState msg;
    msg.setTimeStamp(0.813830758849);
    msg.setSource(62629U);
    msg.setSourceEntity(76U);
    msg.setDestination(5222U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.0863255418184;
    msg.lon = 0.259283335227;
    msg.depth = 0.576602047988;
    msg.roll = 0.46412656474;
    msg.pitch = 0.0243705250665;
    msg.yaw = 0.0895280381914;
    msg.rcp_time = 0.50267577943;
    msg.sid.assign("RTKAMWFSOPQORSZMIMSBOJWJPAUQBMDRPUQALHXQFTZQYTHIWKBHWUNLEJFKVMICFTZNAYOXAAPZUNDPJZECKGRZKCCMNYLUOWAWSHUGITNPEXWTVFXBGMGGOBSKSZJBYFBTKAGMC");
    msg.s_type = 35U;

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
    msg.setTimeStamp(0.404107272637);
    msg.setSource(4357U);
    msg.setSourceEntity(81U);
    msg.setDestination(53790U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.866476549215;
    msg.lon = 0.497284823113;
    msg.depth = 0.976600832508;
    msg.roll = 0.210546929655;
    msg.pitch = 0.815440202001;
    msg.yaw = 0.474575419972;
    msg.rcp_time = 0.167339970993;
    msg.sid.assign("JOUUAHAZFWXTYMLJZWTZGIBSXKPIHCQMERKJHJTOIUDQMDCQ");
    msg.s_type = 45U;

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
    msg.setTimeStamp(0.289435253312);
    msg.setSource(62642U);
    msg.setSourceEntity(78U);
    msg.setDestination(32882U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.762850479445;
    msg.lon = 0.579371568707;
    msg.depth = 0.688653408574;
    msg.roll = 0.725293660565;
    msg.pitch = 0.668825631769;
    msg.yaw = 0.666304354953;
    msg.rcp_time = 0.538562155542;
    msg.sid.assign("FEAIGCXKRBPHUNFJVJOKQJUSGTKJLPCBXYSOWKJXEOBCFKNSUHIFMZHEZQNLCKOZEAPOCUDNHVRWKPQUIIAYCCYRETJMEFLGFGDVMRQIXPKJSHWAFPGDIXWRRNUXYKTW");
    msg.s_type = 36U;

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
    msg.setTimeStamp(0.0975289086438);
    msg.setSource(25463U);
    msg.setSourceEntity(224U);
    msg.setDestination(24034U);
    msg.setDestinationEntity(102U);
    msg.id.assign("WHNZMKGTHDKCTACQCFHJQGKSUAPXXWBZQFBINCDQFQIVZGHYVLEXPNPLVSWWCSUKDPVODMHPDXVMOAZPUFUVAEOTTUGNQWLYTFDUUIVQGUBSNFYDCZHSLABTG");
    msg.sensor_class.assign("WCQDOCJYAQVNLGLCJMJPQHZBLXZOAUDIXSEYWUJTL");
    msg.lat = 0.482790066604;
    msg.lon = 0.0880362570626;
    msg.alt = 0.796268233343;
    msg.heading = 0.908543206495;
    msg.data.assign("OSQXNUKVPRJTTUHTBVJCZLHJHACYVOCBCOOAYZXYOYDTU");

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
    msg.setTimeStamp(0.458246383367);
    msg.setSource(45189U);
    msg.setSourceEntity(131U);
    msg.setDestination(11745U);
    msg.setDestinationEntity(61U);
    msg.id.assign("GDQQPWEJYYZKRBFLTCFOAYTFLBNHHNYMLHPITDMSPQSDBMNAFFOWWOUBVSZMQSABFPRPYKWCXKXNWPMLITNCOWIWEXQXSOOBTGXDTGTDXUQFTVKEJKXEUGJRPVDWYEVMYMSULRVSNQSIGQJDSEOUKJVJFHJWUXTYOGQZCVREHIBOIPVLHHHAJJZUXCAPCALLUDAYMIGGCGKCIHRDNVURZKRUAZRZKZBLCCRANIMZXKPTVQBYEDOMEHGNSIEWAJ");
    msg.sensor_class.assign("LXKCGAYIZLNXVSKJCNWCGAHOWNBUSUJMFNDVRECLSOORLBRTGJKPKUZJYDACLGTIOPRZTXIVDRMYJPOQYVIRBTGKNXXSUVHDETFTJNBPFQOMRBDHZHLSDAVILWYYPQCTUPHRMHJAAHIUMXJSZKXCFMBBMZSGVGCZUWPUQKPYANFQHIVBWGEAXAOULEZBTHFZXOJJQDPNCDIIFF");
    msg.lat = 0.0863165040684;
    msg.lon = 0.579239517831;
    msg.alt = 0.57739399138;
    msg.heading = 0.745900039586;
    msg.data.assign("MCKMZREQOHJZSNTHULFJGXLAIKWXBSMVIFTJDGOFLSXKGIPLTBSFKLLYFNNVOZCGVIJMYCEQJHOEQGALZZPEYZCCHBYYBBCOVPMWGHEVILBLXGXIAFR");

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
    msg.setTimeStamp(0.619130226663);
    msg.setSource(24911U);
    msg.setSourceEntity(35U);
    msg.setDestination(7434U);
    msg.setDestinationEntity(247U);
    msg.id.assign("EAULOYVRVAWKLXWXJPZRWICRNFHYRWMYKHQWXQUGCYHUMBFPBYNIPRSJQAAYOSZDGDUGJMHHLTTZFFQINPSITSMJAFAEMDLXJWESVJORZKBSIVTHLKYCGDGKGELEUKKKXOMGPPIAZBQBINCCMXPIQUECJBYDD");
    msg.sensor_class.assign("UHPJVMHZRTOGFJVLCGIYYTRSCZGCMEUDQMSZOTMXHAKKJBCKKSUYRWWZILIVILCAMLKTIQHYBGOPXFBUUIBDSQDPECIDKODWZZVAYNHAJPHJYFJTVRXJZGMBCKLRKUVVQNCXOPONMFYFLXSUIOFPUMXXAQMHZRMGENDFAQJPRIOZKNPFDBWXTBLTQEAZFGNSXYADPAKWEREN");
    msg.lat = 0.871125418026;
    msg.lon = 0.276612515772;
    msg.alt = 0.461809617854;
    msg.heading = 0.150088285045;
    msg.data.assign("OTHWUCCARMXVWNEQLWHNMPQLXOFOUHLJJJDQGDVVUWJMBUNWXNKDQOEVKEIMTOMPXHESLYPSCKDWNPBOX");

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
    msg.setTimeStamp(0.424391118946);
    msg.setSource(54040U);
    msg.setSourceEntity(68U);
    msg.setDestination(64987U);
    msg.setDestinationEntity(171U);
    msg.id.assign("GGSDCXTMMNVDJOXGDUNSIEBXHZVJMCEOTIRMNZENKZPFZWWJAEVQEVIYURXPKNCPZAWGFTRBSNTSEYCPWHGBAGUAJZKWTXQOXECGSPVOINIKHIWFBKPFKQYQZLRHVRAQGMYBFWUVBWJLDDJFHCQGXKRCODWQHOQTYOTSYRFRALTQTPMKHXIBACJXEVJNDLEBYORPPBLBLCUJHIZCOYKLPYSUTWUAFUNMURVHOQLMSLMHMIUL");

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
    msg.setTimeStamp(0.711520551148);
    msg.setSource(35286U);
    msg.setSourceEntity(72U);
    msg.setDestination(45350U);
    msg.setDestinationEntity(191U);
    msg.id.assign("JEHKMJQSLQARIMUCPOTFMNKHGFJSJEEOIVWOLJUVVUHZBXDFBZTFX");

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
    msg.setTimeStamp(0.856502960291);
    msg.setSource(1434U);
    msg.setSourceEntity(155U);
    msg.setDestination(53465U);
    msg.setDestinationEntity(166U);
    msg.id.assign("WLOWTITJISWZNMVISKZTHNUSAWFJCLYQMDCUGSSXRULFGEAZUBUTEPCEXEYHPGZKQMWNGYPWCRQRAHCIYXTKXIMQDVAPPJALNUTVXDDPOPCJQZDYUAGWGMSDKPVOXQCNUMLXCHXSRZGSJZEYFMFNNALGHIBYGAPTVLEVQOBUPYURBXINOBWJIVTHWKMRIHOKKMOVABEJASVMLJRKIQHYDGC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LYQJNAIIEBCKZIOQVHQEZWQNEWMGPURHFPQREOGCYBOCDAAXOINSTHYCZYJCSXEVZIPNSFPYESFRSIZMGVTYRHILDHUOMMOTUDMFXATBPDRPWNGYTOANHDWCJRBGAJXWWVPKBZEMZOJAUUTKBNGHXQM");
    tmp_msg_0.feature_type = 240U;
    tmp_msg_0.rgb_red = 51U;
    tmp_msg_0.rgb_green = 39U;
    tmp_msg_0.rgb_blue = 66U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.241013882821;
    tmp_tmp_msg_0_0.lon = 0.561287482701;
    tmp_tmp_msg_0_0.alt = 0.921970150134;
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
    msg.setTimeStamp(0.169337517856);
    msg.setSource(46429U);
    msg.setSourceEntity(219U);
    msg.setDestination(18347U);
    msg.setDestinationEntity(242U);
    msg.id.assign("XTORJKQXJDJSQOJGIRNMWDWUDYUJTWSHQPGGTVAVXFGNIQADBCCWMYVSJTTFPSPJFXVDWYLTZFQXRRYLDXWHLFKIMZWVNUITGJCFQRRPYSHKUBSAAAUXKVYLKOLIXBZIMQOITPWNSEOBYJBKOZ");
    msg.feature_type = 196U;
    msg.rgb_red = 72U;
    msg.rgb_green = 225U;
    msg.rgb_blue = 131U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.651489687903;
    tmp_msg_0.lon = 0.0274063265234;
    tmp_msg_0.alt = 0.620878692096;
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
    msg.setTimeStamp(0.284491857103);
    msg.setSource(27575U);
    msg.setSourceEntity(228U);
    msg.setDestination(5365U);
    msg.setDestinationEntity(8U);
    msg.id.assign("UOQHZSTYPEPQAIBSVBICDHCDKIYHKFPMRMSMUVHVCNCSUEDOPUXXZEAXWOFHLLSKFJYHKGNMYWZKQVNPFJDYFQVMJYIVWGRGESBVKOLTJGWBCPRIWCZN");
    msg.feature_type = 109U;
    msg.rgb_red = 220U;
    msg.rgb_green = 68U;
    msg.rgb_blue = 63U;

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
    msg.setTimeStamp(0.646633433597);
    msg.setSource(40562U);
    msg.setSourceEntity(126U);
    msg.setDestination(23806U);
    msg.setDestinationEntity(155U);
    msg.id.assign("TRFEZVBSCAZOILMVOKNIWLXYDEATFGKDBAYVFJFOQJIWNQKUYNKNNDSPCWBKZSJCUQULSSMMIPUOBVZZBTNFEYOMEPCSCOAOKTRVFVZORSJZSRXBGVCHHGQVMAVUYGUQMGXXGWSWJAZTTXHEOFUJDIIZCHEAGHCJZGTQQPF");
    msg.feature_type = 159U;
    msg.rgb_red = 212U;
    msg.rgb_green = 201U;
    msg.rgb_blue = 39U;

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
    msg.setTimeStamp(0.342612970841);
    msg.setSource(16639U);
    msg.setSourceEntity(57U);
    msg.setDestination(58993U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.735448167712;
    msg.lon = 0.471796122244;
    msg.alt = 0.772366316371;

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
    msg.setTimeStamp(0.129956063134);
    msg.setSource(13345U);
    msg.setSourceEntity(173U);
    msg.setDestination(3069U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.0226053129098;
    msg.lon = 0.871859958365;
    msg.alt = 0.0947817441059;

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
    msg.setTimeStamp(0.951183484191);
    msg.setSource(49689U);
    msg.setSourceEntity(220U);
    msg.setDestination(38759U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.540898120024;
    msg.lon = 0.628075396619;
    msg.alt = 0.830215938592;

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
    msg.setTimeStamp(0.815492985995);
    msg.setSource(18754U);
    msg.setSourceEntity(35U);
    msg.setDestination(56969U);
    msg.setDestinationEntity(62U);
    msg.type = 148U;
    msg.id.assign("CJFTEERKZCKRWBPJXCW");
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.946270080856);
    msg.setSource(39216U);
    msg.setSourceEntity(171U);
    msg.setDestination(20422U);
    msg.setDestinationEntity(253U);
    msg.type = 233U;
    msg.id.assign("LRPYKFTBYMGQICRJTZNZEZNHXWNLYTEOFKZIRWAVMPLTXADQMMZBIEWBPHOKEDEZM");
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.574492739572;
    tmp_msg_0.x = 0.593676108082;
    tmp_msg_0.y = 0.57069353241;
    tmp_msg_0.z = 0.692192392075;
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
    msg.setTimeStamp(0.116483024264);
    msg.setSource(21596U);
    msg.setSourceEntity(245U);
    msg.setDestination(34859U);
    msg.setDestinationEntity(46U);
    msg.type = 112U;
    msg.id.assign("DFPIWUDDTWKEZCWONQKPYILBGXTFNZPXGWIHSBXFQCNYAVSCMOKWQLSUEAJIWZKNUTYDNELXGRVVASQKVLKUIGXJJVFEABTPAXXAZIJKKDTZTINOQMARLYHGUBMYHNHPOPFFFDNPRESUZHFCDJFOVXOPGSPTJYCSRRRMCRVEZHWVQMCJJIYZMITGOVBLBSEJBRBMZMJNXTGKDUANSKE");
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("WMJRJQNALSDDXAAUGNCJDHKICERKVSYLBMWIJXJVTMUFQGQYWURPONTEQLWNSPRGTCKBZOIOZGLVXJUYWDHOEORNGDTANDMSGGALIOVEZVTVNAMTFWRLEXTQJAIBFBHMHBDFMHZSQAKGPFPJTKBBZ");
    tmp_msg_0.message_id = 12248U;
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
    msg.setTimeStamp(0.668857086894);
    msg.setSource(53453U);
    msg.setSourceEntity(23U);
    msg.setDestination(16652U);
    msg.setDestinationEntity(126U);
    msg.localname.assign("NWHJHSLAGYWEIRUNMPBPAEQGIBUCOQRVNVOKXFWHPGTYDUSRRHRSFEYMNEUWLWKWALOWUBACIADPHVYKIPUUPXGQVVNULYDSMZKQMESLMEZFNFYYBGQPZFTOTORPHKFEKSRCXJBMCOTQOTWFAJSBDZGFRTNCEHHYTDZSJLOQYSKERIBTVJDDGABRLJZZJMHWVZWIEVXDKGYCPLLOJVIXJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VKZRJNXPBMWJRSSGHBTBZVXSOGLMINCYMIVKEXRALQOROLOSSSRFSFCPXYLXCJELNFTUGOTNMDKKATRCEUHWLNMDMQEZXVLYVJEGTACVFYHKUHYNBXHRKFWAVIMNQGCUUYCPJRTZIPRZEGBKCFITNDIODFKAJ");
    tmp_msg_0.sys_type = 93U;
    tmp_msg_0.owner = 28531U;
    tmp_msg_0.lat = 0.973698498857;
    tmp_msg_0.lon = 0.0121877710325;
    tmp_msg_0.height = 0.679261273735;
    tmp_msg_0.services.assign("KRFGKECAOHMCTXGXVYWFTBMVFXNVUIWRMSWZKXBEIUDQJMPKTZGAGYOHEHRJELPIADMIONKLRRQJLKDJBAQQPHCDDTMAMOHJYPFCVFRUZEBRFNBWZUASWVLGYDVQNAAJBDOKBKNLQFSJLTYOFSCOSYJCLAUEMTPEWDGSFCRQNSCH");
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
    msg.setTimeStamp(0.353785834514);
    msg.setSource(14103U);
    msg.setSourceEntity(107U);
    msg.setDestination(36322U);
    msg.setDestinationEntity(114U);
    msg.localname.assign("TCERFCYMSNFYFKXQTWEJJQJKSJISAZTRYBCNBRVQBHSSXKHPIFYYHTALPDUALIQGIQEHDWQXWFEEPMCHIGAUKHKYVOZHBAVCXGDYYUBDYTMDSRRBLUJNHUGMVZACJBXFPRWQSOIBYALLMMJRBLTO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZJSUTADGAGPQVWOYUHSDCIDSWNMPZVLQCNKVHMCYZIMPFBMKNEETLAXLRYUHZYHYKULAQKRWBEFHOCJTOTZNRGDP");
    tmp_msg_0.sys_type = 11U;
    tmp_msg_0.owner = 35074U;
    tmp_msg_0.lat = 0.731703946768;
    tmp_msg_0.lon = 0.168352998961;
    tmp_msg_0.height = 0.0838176486051;
    tmp_msg_0.services.assign("ORSXAORIOAGUODNYLRTPRZDBNQIESPMNHANBGZFLXJUWUFAVJWXQLBSLDAUJWWVJLXQCKXNIGSSYENCIQILTFQRSYLYNZCQPDQOANWIGUTHKOOKJEHDZXMYPKUUEWVBRZXHOHPFTWLZTCVIZFUC");
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
    msg.setTimeStamp(0.476158658855);
    msg.setSource(4189U);
    msg.setSourceEntity(212U);
    msg.setDestination(15774U);
    msg.setDestinationEntity(236U);
    msg.localname.assign("UWBGOUXTKQDPENOSGJIQDVYDTGXGRPEHSARHWFEFVGPADOUCQIAMAELPZKRCLPRQXGZVIRFWVKQHNAEDBRXMSWRMUPDYEOYMJJLBZXQLIJDFPGYILLSDVBZCSTCABHGHIZNZCUHJCKSMRNHLJLHLUCXEQQFZXUNCN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DIFHDERFPXNTYVHOCSJHAKUPLVOJCCQPBVNPJNMBYUEDWCLJLKZVBNMUEMUHXGQTDIJBEJOKLVZQNPKAGGTWFYKVGZYXQVXRFVUPZFQZDNKOFHIIIITBGOAHTBWDXLWCSVNJHIOWLEZJAFRMMKY");
    tmp_msg_0.sys_type = 57U;
    tmp_msg_0.owner = 23203U;
    tmp_msg_0.lat = 0.776466479222;
    tmp_msg_0.lon = 0.259483717011;
    tmp_msg_0.height = 0.757556862919;
    tmp_msg_0.services.assign("YTGWLGLGKGSTXKWIJCDKBSTHPVZWODEEVNIIRUCDKUEMMNEHVRRKFSOXRBTIFIYEOAVPSNBVMYQLXLHGMPDBYDNXEQOYGUMCHYLMTFHAPMHPDMEAKSAKSOFCNWYSEX");
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
    msg.setTimeStamp(0.419138897374);
    msg.setSource(63958U);
    msg.setSourceEntity(96U);
    msg.setDestination(64749U);
    msg.setDestinationEntity(198U);
    msg.timeline.assign("DDAOAHALPRWQJZXSSWSLDEVTPTIAKCRPLYQHMQZTMQJFOKRGGXJNSUYOELGIUPPSGAYBDDJWWVVFSKJBFBRAJTEACBNOHWKSKOUNQGXVGP");
    msg.predicate.assign("KKLCFHIDIYLXYKGNYFSGSESPKRQCJLWUFNHCHWDAAUBBYIUPQRFYMHGGTVKHSEMWULZNCGZOLOPLUUAOVOADAHJRZFNPMSBUJWNBAQTQOCODCYXHKEVRWRZNXPQVVMRKVBLFWDJGIGTWCFXMPRPEHFODNZJIGBBUCL");
    msg.attributes.assign("JRZJKRVCAAKWXSDFHFXTLYKHNQDDWDHRPUXQURFCXACYZBLNCEJMTEEUGSSYTDOWSLKMVTONNEIQPRICSLTWQHVPFINJCZGDOBUMXGBZPRHEJFCBXXBKHLXPNECYLZJRBJIMVGUVVHZLFYUVSEMUPLKQYGBQGRWTUZTBBWUZIGWIPIOQESQKCADDDMACMVAPQFIHTWMOPYREAFEQTANSVGOAXNWYJFPRWSSLMNGIKZJZLVFOOHKOHBT");

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
    msg.setTimeStamp(0.938370634792);
    msg.setSource(54045U);
    msg.setSourceEntity(34U);
    msg.setDestination(21758U);
    msg.setDestinationEntity(163U);
    msg.timeline.assign("XOTHAQBWSQSGYENMWOOIWUCOPNJYCQGBOQQPTAKVBKBGYDVZIMUVTHGAAROPADEVSEOWDVZUCRERIRHENRHRACVPAZNTXEXDFKVFOIZTXGHIPXJJPBIYKLNPDPZSZIFXHTZSCLRFEKYNYXLJCQURCAHMWPDGIUZLBSJFMWSCLEXVNYSJFQMYCILFWDPBLJSGLFOUMDDVJAGEKORWLMNJXYQLTEFMAS");
    msg.predicate.assign("AFWEEXUQUVSIMJDSQMQPJHIFTKKWKNQTHBNKWWHGWDINJNVGGVSDMLCNLSMMSQOWUUBCPXXZUQPROZXKWOTDFKURRPACIYROBIBNIAFTRQGZUEMJMFTSSPBXLVJXPLTJYZOEEEBHFWALGDCFFPORECZTGBAVHKTAYFOZMAILTBRYJCLQNYOUCLHMPYYIHDJCKRNHTEGNOXDAYGNISAFKGRYWLBGRYEXVJPQAKMI");
    msg.attributes.assign("NCVTPHFFMOCVTZESLLYVKFWCNARMQGVWCYPITBYTSGALYXAMZAUBXNXVQZAJXDJQIOBMIFZFWEHKOSSUUJKQMNPPYDOGFTEUJHTDERRALBTJPLZEWNHHZDFLILGGCQIAORSPHEQWXBBYGBAEHHHUXNUGPJANOYUJYGCDKWICZCNOJKROZRXMJLTSMXR");

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
    msg.setTimeStamp(0.998397155614);
    msg.setSource(41110U);
    msg.setSourceEntity(63U);
    msg.setDestination(24661U);
    msg.setDestinationEntity(200U);
    msg.timeline.assign("OETCUBXQRJPSYKWWPYZWVJGIBLNIDXHOHJWSCAWZVVWTAYVXTKJJAMIZVJMDUUDUAZGAHNSGGLUCCTKGFRPZVJBBHWJNZLREIGCKMKSDXEYAINUGYSEMVDLINNITHQTMGMEQXYMLFQREOHREYHGXZJFKLCFTARNQKQWZKMROOS");
    msg.predicate.assign("OCYKZRJYTAZPACDFYNNKIZMPTOXSQDHJSVYKHYTLEFYPVXHMWPPJNGMPCIUBEUTSGXVFOK");
    msg.attributes.assign("VLSOLXLRYCIMHAHPOIBKVCUCBSMIIUPTECYMBPAETGBDDERQZLCSVJOREXZOUJLZVELQFGKIOOEJZWFFRPOFNXXMPGJI");

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
    msg.setTimeStamp(0.0143683086373);
    msg.setSource(8417U);
    msg.setSourceEntity(126U);
    msg.setDestination(2959U);
    msg.setDestinationEntity(91U);
    msg.command = 249U;
    msg.goal_id.assign("XBSKDRNAGIBZEHBYQQJUKSBVHOAXXVJRTXODHTGMUODIQVICPSBLJSCK");
    msg.goal_xml.assign("KRQJUKXOWCUYDWJACGBZSWIETNNCAAPLIAIZSICXJRLGVHOLSSOUFKDRCQEYYMMMWLPOQNTDVSKMPAHMQYAAGKWDYSGEGOHTDTBVGQWQIBFZVFWGCUQEHXEUODUPWRRTFKCVSLBBYDFXIPDXQPEYTHYHHNBRMFTTRSINEZJCKOUZJORILIBAJWGNXZLTRFVNFMOZPLYFUEBFZEKVPKZ");

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
    msg.setTimeStamp(0.895632640914);
    msg.setSource(3051U);
    msg.setSourceEntity(101U);
    msg.setDestination(15109U);
    msg.setDestinationEntity(190U);
    msg.command = 21U;
    msg.goal_id.assign("XHVESPOORKXTLYAYYONWWHFRMZMAFBNQ");
    msg.goal_xml.assign("JTXAIKLEZOJXLBVNMYEGHPROMBFC");

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
    msg.setTimeStamp(0.265078322494);
    msg.setSource(57601U);
    msg.setSourceEntity(214U);
    msg.setDestination(46551U);
    msg.setDestinationEntity(1U);
    msg.command = 165U;
    msg.goal_id.assign("PQBTWRDLRVMMVKNHVWPSLAGVQXLXIWGLKEXOSEDCJQVGNCXWYNCIBKOIPMGVFASEAAKHTHKUFNZEWRGARZPIQUJTYLTMPEFZRYBVKXBFVTZQFEDTQVMDQZOXAATKHDCJUOBHQFASZLNLEYIXFURSZSXYXYSPZMFOWQIUUGLVGWPBIFWOZCRONCZJKUMEBIQYHMMPSBJJINMJDLRHBDTOWJKWHCIYRASTRCOPEFPBSDHEU");
    msg.goal_xml.assign("LPNWONNVWJESOVFVFFOCOSZSLUABETLPCBRBDIHNMLEXBYWENBCHTIUJRKQYZMNKYGVQAYSSVDGCKZSFUFXCIUGBYWKMBUHPXXPWNLKEVHXWNMTRQPDZXPVFLIHZCPAAZJVDRZOLURAPUXFFRMIKKGVCRUZSNOXTTTPJQTFLBHYDTWTTPADWONAZQMYUSJC");

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
    msg.setTimeStamp(0.976507007955);
    msg.setSource(56922U);
    msg.setSourceEntity(206U);
    msg.setDestination(5425U);
    msg.setDestinationEntity(211U);
    msg.op = 171U;
    msg.goal_id.assign("REOEFCCGSATFSYHZMBQZKRBZZUKSNHOTRZXXRGTBFDSNMADICGXCDOGHMNKGUPOBKVVYKJFXPADJTRDQJTPSJIQIQFVPLIZYFEJJCKHMIZACRUBGQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PQHREUGELZVFHFSIKCPKCHOHNOQNCWGKRJDBYZCHLYWKALTIAGFKTUZXBJMIALHLCXX");
    tmp_msg_0.predicate.assign("MLDEQIJLCRLBIROP");
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
    msg.setTimeStamp(0.610755400018);
    msg.setSource(23330U);
    msg.setSourceEntity(101U);
    msg.setDestination(57699U);
    msg.setDestinationEntity(52U);
    msg.op = 249U;
    msg.goal_id.assign("JLKNADNKBUVJPHRAFMCTXILSSMNTSOCDCHWFUGGNWLWEYMKJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VDTHVBILAKVABDCOOBDNWUSGNSBHWDHCGWCUPTMEAXUVLCMBQLUMAFRJCXPUAEVSHDVSWYTETMCXNYYCTROULMPGZSDLVREQCITTFJOFPLMFYKR");
    tmp_msg_0.predicate.assign("JPDJBOSWMSEMFHGRURZBAHFGCCXDNAABIFQJNWBACQLSOYECMXPSVOFQDEPTNMUCABMZQVKJLYMWTXUESHWCPAFKIUZIHXEPVWCXUIBLMIXYVIWREZHQTKNTXRGKKQPFDVBLAVTRFKHPNUAHFYBEVCGOPBNJ");
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
    msg.setTimeStamp(0.742503863495);
    msg.setSource(22117U);
    msg.setSourceEntity(228U);
    msg.setDestination(17692U);
    msg.setDestinationEntity(47U);
    msg.op = 212U;
    msg.goal_id.assign("KEUROXWLZYCQISRIXBHCUYNMT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FLWNUCKDSKUTELFGOTLNKMIGVABQPBWJEJSHWMXPPJXMVVDWNHDPGNUSFLVKERLQZQOECVMYCOIGIIZGYFWTCOJUZSJRZLKCPAZXTRMOJUSXOTEBRQBADXRLSKHZBGHAJRSVKPJAMMERXYTTHOIQTWBAOHDPZIDLWUYWHGM");
    tmp_msg_0.predicate.assign("WTRWZAUKATANVBDGCSSCZIRRWDCSHGNLMBJEAFIPIYHUDEZAOLGHFOCXTNIUYIDMWYETYHMXTRUWTHHQBBPIXOZLMMEYPJULYVEIJNFGMHXVYETXKWJPHGURZFPAKNGEKGXRVOSLKQN");
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
    msg.setTimeStamp(0.130636560736);
    msg.setSource(38433U);
    msg.setSourceEntity(153U);
    msg.setDestination(28060U);
    msg.setDestinationEntity(94U);
    msg.name.assign("IEOQATKLWBUNUTEDAZOZEXBMJFMBIIPAISFYLMCVCLTSBAPGLDXNBFJEFEOGIBGAZUZRJQFQNNWZIMYUUKRHRGSMNSOKVKRZRONXAXRYWWXAOQDRWCFDOZBVCTKTIMRNCWVDJXYWPJIJUHERVKHBQTZSOYKDJOCUUDHXDGVKTGIPEHGGZYQPNSFQWAEPDHOFAQHCBPKMUSNLMBSJLWXRFGYJKCCZPQTFH");
    msg.attr_type = 18U;
    msg.min.assign("VUAAEGZEJCPDVRRFWDJWVOLZZSIMFNRHYHBERFXFRMDHKGPKZOQOLIKDTZDKXSWPUJAJRKAINITLBBFUICYBPDAJHEZUBYJTZDWHOGCSLTLCANVBMINGMESGGVAKJNOQYKXXTQUYXMNQPHIWDFKUPSNDJ");
    msg.max.assign("ECTUNFQZDYKPOQYIURHWIWNSTZYANAHTMUJJRNUSPVPQSGHSOWGCYNKDCUMGWBFXKJYCOCNWKJEFQXSJMFQFQJFYELBLXWJA");

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
    msg.setTimeStamp(0.272462796387);
    msg.setSource(51657U);
    msg.setSourceEntity(220U);
    msg.setDestination(57881U);
    msg.setDestinationEntity(146U);
    msg.name.assign("UXIGAZNQMVTVMFLUAKVWLKHMRUQFPQBRQNTLNHTBHKZJIHOUMIODXQXPGNMGUUCEYWBZHFVRMAXPAPRCSTYYBGRLLYEMRJAJXKZWRXISOIKIPKMVANWADPOOEHIWKFDVLHJVQGGKEFOSRPBWXNBWPFCBGKDCESQHHKNIRJZCYTYHSZDTJXSDMDFVCPDTQLSWTYCUAZQTOJEMCZBNNSNBCRODGVJYDEAGSE");
    msg.attr_type = 21U;
    msg.min.assign("IDALUBBAUFNJDMJHQDXIKTGYOJHKGIYEOOYVWRKWQZQUJRTCTJWGYEHYPECINRLWRGIYFKNLVMREFIKVCPIFMZKJDMA");
    msg.max.assign("YFSDOXEAGLBPRPBEETVPFGHIBZWMZBMWHOJNNKEJJAYXVQLRQJAIIFGOJTNCLXBKSIEZAKNKHGIWKASIOQWCNBKQNYUFQRIPYNPHHRDQOGVWMPUSKXMJPKZLTBZEDOSCUJTUGIVWHAYOTHUCPDXMCLFKEPWMGRVLKYFCOGRTYWTDQVQMSDMDDAFEBXPRQLZLWJVOL");

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
    msg.setTimeStamp(0.117133184237);
    msg.setSource(34298U);
    msg.setSourceEntity(32U);
    msg.setDestination(37537U);
    msg.setDestinationEntity(161U);
    msg.name.assign("BIWXDJERPVVPUDLZTQIJOXKSNDCNCNRINNUJANHPFEQMXCPRICZWVZERGZUNRBIVLUWKWMXBOLMHCHAHJTZJBREZOFCVA");
    msg.attr_type = 18U;
    msg.min.assign("GUMJHPRNFANKQBBPMIANTEJBNUGAROXDUJGYIBVEUCKOSYKFTDCGMFAVKUXEQEUZWLFQRTZRBHOFMJVFPYSXITPXILBCXZGHWNEDXSTRMJRIYTGZHXKEZETSQNRQEDXNLGJIULLPAHALVKYTRYFMTHOMIEKHTIIHOWAAPVWNGSMZYDPXCOCDSWBYXSSZWCCJLVCSOID");
    msg.max.assign("BSZNMEPVBPAOFLRZTMJEMDNSFSRMZSIFJQSNPLVIBUCZAKUXYHJRPGTHZYEJWWWGOMNTRNAQFVNFGEGUBPDEBI");

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
    msg.setTimeStamp(0.822902291126);
    msg.setSource(37325U);
    msg.setSourceEntity(74U);
    msg.setDestination(45616U);
    msg.setDestinationEntity(76U);
    msg.timeline.assign("BTDCFGRMGZYAHHUPSPDDBQNJZWBOYCRFSUSSHTXCJJHALTSFXIKVRAFFDAEMJQMLXUXYOCSGXAVETVTZBTLXLVYVVVIZRDNIBQWKBZEGFFWRMD");
    msg.predicate.assign("OPPOLVSTHKPGTNVCJVZYUKGMKSAHRBLWXMPEYXVJFQLHAJTJOLWSIHGQXUTEMPOAISZBBYXGFUQQNVNJZVYDFXDYAZFEKNGIYPRYXTRVUAQFDGSEDDENVLARMPMYUEQIHIATXIUIHZCFRMSFOTNPWQRNEUKLMOVJJOEIUJZZLVLDDKWOCQBLIRGZADBMKYTFZSCBCWPHCKWDBJCNJFAKAGZCWGSTPLNUSRMCGWH");

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
    msg.setTimeStamp(0.515960193242);
    msg.setSource(36487U);
    msg.setSourceEntity(77U);
    msg.setDestination(35417U);
    msg.setDestinationEntity(105U);
    msg.timeline.assign("CBECCZAVKQROVJNIGSLBUITDQFKHQNPNYVBDXJBZBFXHMFLFDCVBIJZGEHCNXXYJPOSECIERLKWCZZPKKQJOEOXUTWOUILXHWIPUTVTVYENEQKJAQQAAZFGEKLSWLSYPKNAGRMYJMCLDOYITHFQAQGNZPOWFWU");
    msg.predicate.assign("JFLZARROJXCQMBMRVMBUVCFCOELHDJSHDHQXWIMGHYEBEXUMISQGODUKYESZTFLGPSLJOUKCBINVAXERQOPXYNBOHOIBNECXFOIYHIUNNGUSPGXATRWGCYDJIPFHJQTTQTZXTVPKQKWRYQYJZZUSTUBDUGKDDVRVLZRJBTZVWCIBRDEGZMNASZSMDKENNPAXQOVKTAYFGJWVSWFWNYAZAIMHHLWJPFMCHCCKXEWPGFQLYDEKBAPSNI");

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
    msg.setTimeStamp(0.325013350173);
    msg.setSource(46950U);
    msg.setSourceEntity(134U);
    msg.setDestination(44988U);
    msg.setDestinationEntity(130U);
    msg.timeline.assign("MZOWXVHXYGWLYPXQNLZMZFONJKQSEOMLCFYCCBCBWRWEKSOUHSSPDHFAAXHPFRTNPVZEKEJCVVGJIDSKOWYCYLKZDBIDADZGXDRECTMAYGUHRBTRDGPWAVSCFVAIEINJBJTEJFUDIXJUXKUHRPXLGVKYNBSPWOXOEZAMBPNSBXUFOHFJTUMSRIBQOQKQHATIUIRVMDYW");
    msg.predicate.assign("OHOURZADJEZPULGQWFFJPLHQDBMIRBJSDAUVXWCCEMLTNSLMYGFJHKTJMPNCAMHYWQRYAEBVROPXZKFAZXPBJIXHEBGEUVGZTRUTUHOVXKRPLNFKXVSNQVBCIUFVXPJISGPUS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RAHHYXKGQBUVTNOWXNNLZPWJXHXMBUGZHGNKPRGCLZUBRLYFERKASZDEOYKFKRQJJEXCVTLGGAVXKRSLYHFRAMMFKSJTLQTMNYVZKOGXQQASFJYDTDZHTJEWFSNVMDZKIIMCPBOBHMVJ");
    tmp_msg_0.attr_type = 55U;
    tmp_msg_0.min.assign("RWRTUZSCNKNVKGVXOAMDEGNFAYDJTKLUNINBUCIBEKBMDBFHOPGXKPCPLTMSPLYOHYYXAXUGIEWHQXIPUSOPPRZZZOAWDRSCXRRRYYGQZIFJTYUJTGFEHUSMTEDJDFQWHIZWRDIXSBUESDNPWWFMHMXPFITCGWJNOZBVOFVAGBVQMBRVBAJQZDENXVIYHLTYPZHYFJD");
    tmp_msg_0.max.assign("UEKCQPUXXRJDMCQJNADFLXEYBPOVQUJQXHINYFPWQUPFNOQEVSPOJVJHAPVIMGBNDDAVYLWSPTDZDTXQTXWCYMH");
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
    msg.setTimeStamp(0.00186229381633);
    msg.setSource(31393U);
    msg.setSourceEntity(84U);
    msg.setDestination(8497U);
    msg.setDestinationEntity(50U);
    msg.reactor.assign("MUGEQUAJKPRKGTFLIRESKTYPXRDHLTTBWHWVOUYFFYNLORKVUEQAPVMPGDYSCMBKOCQFCZDJDANDZKNUSERIMFHBTNGNJOIWHPQLGUMIXAQIZSHCEXVFTJEOLAZERJYDOWMAJAKT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LSJIFPSUTOMGBGGBWYBKOFJCOZLZFKLJATPDNEADMZGAPTQHMRVYIDLPWVHUUBOXCYYCKKFTFAETMRQCWVNDNEOPIQJYZXUTJXQPMNCZBSGNKRRHEHYRHRGUXFCXKJOWEHRWCCINKFUVLHWHHDETVVJUYPTPGJIOLEEYLSMAQEDFAXIZMAIVIRNRCSJXIVQTLSQCNRBXDQEQWZDDFGWYUPNOTLDSSAYQMZNFZOXSSAGZKIUUMVM");
    tmp_msg_0.predicate.assign("XRZGVDLMIHFWWDMUHESPYAIXXXBKHRLOGQSLSCFKJEFVYMROCESUQNQJQGSWD");
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
    msg.setTimeStamp(0.995828947041);
    msg.setSource(58983U);
    msg.setSourceEntity(215U);
    msg.setDestination(13479U);
    msg.setDestinationEntity(148U);
    msg.reactor.assign("TQOYDVOZKAUDLMKLCJHRYPVFJYVVBJQZDOBAITQARDCXHLLHDSJZAWGLUIWXXCETGAPMBYNXVHMSCMDBISTXUXDAIPGGOBMZFVUYXSRZOUWRPBERZQBWSHUARYVYCKCFYZQWVFPZTCUKRQEIUTIZYWZNAWLNDPOLVHMDSSWFQMNKMMATSOPGMERQINNGQY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QSKGKFIMVUISJVQERBKHBYHMNDDTZUYYWMG");
    tmp_msg_0.predicate.assign("LVYCWWQMSPNXGECIRHYSMVOEGGYCZVKTOZEFALHOGHCTIXNKIQYZDFNGROBSJPULFQAFNWHYLBWIWLRGEDASMRSWZVRJJZKYSIVVHJTFIUDHYJBLZAMMJJAUFYOEWESIBYTZF");
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
    msg.setTimeStamp(0.0874199490079);
    msg.setSource(30222U);
    msg.setSourceEntity(227U);
    msg.setDestination(11866U);
    msg.setDestinationEntity(99U);
    msg.reactor.assign("LDPSNKKBXIVNFBOJHYEAHDVLYCWYXSGRWUZHKOKKWPFDTCHSEADVMAFHEZHTBRDGPWMIFJLJNNSFZRXLCMYIVLQAPHGUMAHDVKBSJQGOGCFQIGSMSWROVIQWHGWKYBOTMQUJKFAUEBCAWSJL");

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
    msg.setTimeStamp(0.849428509964);
    msg.setSource(9181U);
    msg.setSourceEntity(17U);
    msg.setDestination(10107U);
    msg.setDestinationEntity(180U);
    msg.id = 229U;
    msg.width = 52853U;
    msg.height = 30843U;
    msg.widthstep = 41969U;
    msg.channels = 145U;
    msg.depth = 87U;
    msg.finaldata = 65U;
    const char tmp_msg_0[] = {101, 77, -87, -62, 45, -4, 8, 124, 81, 116, 36, -37, 12, 72, -74, 48, -22, 49, -70, 13, 12, -105, -7, -12, -17, -41, -114, -106, 91, -43, -27, -71, -1, 34, -116, -16, 29, -98, 21, -77, 16, -127, 15, -53, 99, -110, -60, -81, -67, -89, -100, -20, 21, -15, -73, 85, 31, 101, 46, -119, 23, -110, -4, 62, 58, 26, -41, -100, 97, -80, -74, -87, -13, -4, 64, -53, -81, -125, -4, 103, 57, 40, 23, 26, 124, 26, 126, -12, -125, 83, 112, -79, -123, -45, -41, -119, 83, 79, -75, -26, 64, -125, 99, -122, -54, -98, 104, 60, -109, 62, 21, -9, -14, -25, -114, -73, -56, 2, -5, -51, 67, -127, -70, -86, -59, 103, -54, -92, -106, -73, 35, 4, -105, -101, 101, 87, -122, 22, -36, 38, 26, 113, 97, -21, -40, 25, 47, 72, -58, 25, -82, 11, 28, 4, -56, 85, 64, -55, 71, 113, -27, 14, 33, -18, -64, 26, -81, -106, 2, 85, 32, 2, -12, 109, 50, -62, -94, 47, 69, -63, 19, 40, -26, -42, -53, -43};
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
    msg.setTimeStamp(0.451734507839);
    msg.setSource(7909U);
    msg.setSourceEntity(79U);
    msg.setDestination(39720U);
    msg.setDestinationEntity(17U);
    msg.id = 60U;
    msg.width = 41117U;
    msg.height = 34153U;
    msg.widthstep = 53422U;
    msg.channels = 209U;
    msg.depth = 120U;
    msg.finaldata = 34U;
    const char tmp_msg_0[] = {-107, -98, -121, 53, -84, -104, -35, 68, -73, 90, 77, -7, -81, -114, 7, 18, 44, -104, -48, 104, -41, -81, -22, -76, 40, 73, -35, -13, -70, 109, -100, 14, 72, -57, -106, 16, 26, -69, -121, 79, -92, 8, -74, -119, -33, 80, 65, 101, -120, 29, -76, -64, 94, 96, 63, 4, -54, 125, -29, 62, 110, 52, -12, -26, -95, -82, 37, 67, -15, 63, -26, 71, -94, -26, -91, -120, -114, 123, 126};
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
    msg.setTimeStamp(0.400528115);
    msg.setSource(48523U);
    msg.setSourceEntity(85U);
    msg.setDestination(48316U);
    msg.setDestinationEntity(14U);
    msg.id = 32U;
    msg.width = 5335U;
    msg.height = 56755U;
    msg.widthstep = 64602U;
    msg.channels = 199U;
    msg.depth = 84U;
    msg.finaldata = 52U;
    const char tmp_msg_0[] = {99, -24, -33, 63, 68, 53, 42, -104, -125, -17, -31, 84, -79, -102, 11, 75, 95, 62, 97, -105, 22, 115, -120, -30, 56, 42, 114, 47, -46, 4, -109, 98, 88, -113, -65, -17, -120, 20, -92, -62, -39, 45, 108, 42, 4, -126, -122, 36, -34, -94, -33, -37, 53, 48, -4, 98, 16, -113, 78, -74, 58, -17, 82, -47, -99, -37, 57, 23, -90, 19, 60, 96, -64, 39, 43, 22, -35, -32, 7, 117, -3, -21, 35, -80, -42, 99, 16, -63, -85, 86, 20, -69, 27, 42, 116, -101, 98, -4, -126, 75, -41, -84, 75, -6, -46};
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
    msg.setTimeStamp(0.460464725833);
    msg.setSource(35120U);
    msg.setSourceEntity(102U);
    msg.setDestination(10218U);
    msg.setDestinationEntity(215U);
    msg.width = 40474U;
    msg.height = 54794U;
    msg.channels = 164U;
    msg.depth = 28U;
    const char tmp_msg_0[] = {-72, 91, 120, 97, 113, 62, -103, 41, 46, -77, -96, 35, 20, -115, 77, -4, 72, -80, -81, 112, 66, -1, 70, -84, 125, 35, 37, 86, 51, -128, -3, 27, -89, 93, -80, -55, -56, -14, -27, -79, 28, 24, -120, 19, -126, -97, -18, -74, -101, 61, 60, 54};
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
    msg.setTimeStamp(0.108471204019);
    msg.setSource(3332U);
    msg.setSourceEntity(115U);
    msg.setDestination(13821U);
    msg.setDestinationEntity(14U);
    msg.width = 44048U;
    msg.height = 40872U;
    msg.channels = 61U;
    msg.depth = 26U;
    const char tmp_msg_0[] = {-33, -18, 115, -115, 116, -95, -43, -29, -37, -94, -104, 44, 17, 64, 61, 48, 108, 66, -97, 109, 58, -124, 113, 117, 27, -53, 34, -66, -12, 20, 22, 31, -8, 94, -74, 94, 14, -92, -17, -4, 44, -118, 39, 106, -122, 77, -56, -16, 37, -48, 20, 12, -51, -59, -43, 37, -3, -45, 26};
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
    msg.setTimeStamp(0.0421543955748);
    msg.setSource(11550U);
    msg.setSourceEntity(111U);
    msg.setDestination(39660U);
    msg.setDestinationEntity(130U);
    msg.width = 50503U;
    msg.height = 28983U;
    msg.channels = 33U;
    msg.depth = 13U;
    const char tmp_msg_0[] = {76, -37, -23, -100, 3, 111, -121, -13, 109, -18, 79, 109, -65, 81, 55, -68, 48, -113, -99, -111, -116, -67, 76, -102, -96, 19, -49, -17, 44, -23, -9, 13, 123, 57, 26, -52, 70, -107, -102, -9, -118, -111, -27, -79, -27, 76, -102, 92, -28, -61, 49, 59, -84, 29, -2, 42, 54, -21, -111, -12, -111, 4, -128, -43, 119, -101, -65, 24, -9, 64, 96, 94, -8, -29, 46, -96, 111, 46, -52, 41, -64, -18, 99, -77, -79, 67, -97, 84, -104, -127, -22, -70, -43, 56, -96, 46, -123, -3, 48, -31, 38, 111};
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
    msg.setTimeStamp(0.145609709889);
    msg.setSource(34900U);
    msg.setSourceEntity(113U);
    msg.setDestination(55852U);
    msg.setDestinationEntity(27U);
    msg.frameid = 155U;
    const char tmp_msg_0[] = {78, -47, -59, -2, 116, -39, 28, -10, -5, -23, -109, 37, 81, -107, 48, 109, -68, -70, -53, -60, 93, 32, 73, 110, -87, 58, 0, 56, 1, -41, 14, -3, -101, -44, 79, -2, -35, 78, -67, 116, 81, 116, -64, -17, 94, -127, 50, 86, -128, -123, 32, 84, 95, -89, -31, -128, 17, -12, 11, 37, -121, 24, 120, 101, -95, 61, 88, 56, 0, 49, -60, -16, -79, -100, 121, 116, -75, -26, -104, 101, -91, -53, -104, 80, 51, 74, -31, 54, 6, -14, 60, 72, -83, 96, -101, 27, 56, 59, -47, 34, 93, -56, 68, -56, 125, 106, 109, 4, 17, -85, 114, 90, -29, -122, -90, 68, -23, 0, -119, -119, -50, -55, 87, 115, 26, -122, 86, -15, -27, 120, -13, 47, -72, -45, -109, -103, 119, -24, -64, -71, -113, 85, -106, 45, -81, -18, 5, -98, 16, 23, 45, 2, 33, 76, 30, -76, -83, 45, 42, 78, -99, -5, -125, -120, -40, -123, 91, 78, -12, 20, -107, -110, 74, -55, -37, -22, -39, -86, -74, 20, -8, -85, -2, 9, 77, -49, 4, -20, 2, -68, 14, 46, 71, 67, -40};
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
    msg.setTimeStamp(0.990372619876);
    msg.setSource(65510U);
    msg.setSourceEntity(63U);
    msg.setDestination(29524U);
    msg.setDestinationEntity(33U);
    msg.frameid = 6U;
    const char tmp_msg_0[] = {65, -22, -43, -42, -19, 81, 36, -39, -80, 100, -29, -56, 15, -115, 41, 91, 97, -15, 11, 114, 124, -95, -50, -52, -113, 53, -53, -56, 101, 87};
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
    msg.setTimeStamp(0.963595498716);
    msg.setSource(4460U);
    msg.setSourceEntity(126U);
    msg.setDestination(4836U);
    msg.setDestinationEntity(227U);
    msg.frameid = 143U;
    const char tmp_msg_0[] = {107, -33, 26, -118, -60, 9, 97, -56, 126, 111, -95, 3, 105, 70, 0, -54, 38, -96, 71, 97, 101, -95, -19, 92, -25, 69, -42, -69, -48, 42, 38, -20, -120, 55, 52, 78, -92, -71, -126, -123, -28};
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
    msg.setTimeStamp(0.761952693785);
    msg.setSource(17581U);
    msg.setSourceEntity(138U);
    msg.setDestination(33222U);
    msg.setDestinationEntity(93U);
    msg.fps = 57U;
    msg.quality = 197U;
    msg.reps = 89U;
    msg.tsize = 8U;

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
    msg.setTimeStamp(0.528603761906);
    msg.setSource(10233U);
    msg.setSourceEntity(209U);
    msg.setDestination(39250U);
    msg.setDestinationEntity(200U);
    msg.fps = 120U;
    msg.quality = 67U;
    msg.reps = 13U;
    msg.tsize = 108U;

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
    msg.setTimeStamp(0.0526492939108);
    msg.setSource(58516U);
    msg.setSourceEntity(106U);
    msg.setDestination(749U);
    msg.setDestinationEntity(13U);
    msg.fps = 133U;
    msg.quality = 67U;
    msg.reps = 10U;
    msg.tsize = 198U;

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
    msg.setTimeStamp(0.628487012042);
    msg.setSource(46576U);
    msg.setSourceEntity(77U);
    msg.setDestination(21726U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.395539671171;
    msg.lon = 0.811634300087;
    msg.depth = 242U;
    msg.speed = 0.796798196077;
    msg.psi = 0.17867028058;

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
    msg.setTimeStamp(0.798689022724);
    msg.setSource(2160U);
    msg.setSourceEntity(186U);
    msg.setDestination(7909U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.639539362193;
    msg.lon = 0.452966497318;
    msg.depth = 113U;
    msg.speed = 0.350951860376;
    msg.psi = 0.525362450999;

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
    msg.setTimeStamp(0.357529674423);
    msg.setSource(39279U);
    msg.setSourceEntity(212U);
    msg.setDestination(49676U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.970602007175;
    msg.lon = 0.941756483939;
    msg.depth = 31U;
    msg.speed = 0.134231286107;
    msg.psi = 0.823595416886;

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
    msg.setTimeStamp(0.698709498884);
    msg.setSource(36364U);
    msg.setSourceEntity(145U);
    msg.setDestination(30742U);
    msg.setDestinationEntity(61U);
    msg.label.assign("JTOZFHLUASTDMVYYWETSXARMSEOQAFOIKVDGDJNALYXLOFASGDBLSDVRPOPDQJNPKHEIIAYKQJVRRKULPRCFGHLFNFKMTORPXESQKWOWUEUXSBCVMJCCGUHUXDTBQCQRTGXMZHIYQQSBQRWFPFPWBZAZMUYCHNUZIEEEZGZNANPUYJXLIRSNWGVWRIEOOLITQXVHCZGWGKFNLFAHSYZTXVCNMXVKBLVBDEYZTTWJPJKDNCDMJBIHBUJ");
    msg.lat = 0.430694399447;
    msg.lon = 0.678550474773;
    msg.z = 0.0214459754898;
    msg.z_units = 95U;
    msg.cog = 0.118984412404;
    msg.sog = 0.801421352627;

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
    msg.setTimeStamp(0.402820368941);
    msg.setSource(26037U);
    msg.setSourceEntity(149U);
    msg.setDestination(18867U);
    msg.setDestinationEntity(221U);
    msg.label.assign("WYAKOGHPEZCKZJKNPNENWIKEASLSITJYYMSBHKWFSCTEMAPHWFIELVUZUEQHCTFNNAPJQZZNWFDVJVJNAGLHRJQHGPDZTXVLTYABVHSWMORRAWOUQICWUMXFKGLSQQIGEULLZKCGBJXLVMSXIMIFSDPRRRCOHYEBTADKFIUWAPXYFLQGOKRRYVLBNQGGUIGBAYDXBFMDPZ");
    msg.lat = 0.445270202998;
    msg.lon = 0.382643835288;
    msg.z = 0.228013677574;
    msg.z_units = 254U;
    msg.cog = 0.206893584156;
    msg.sog = 0.573691734149;

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
    msg.setTimeStamp(0.945979056755);
    msg.setSource(30667U);
    msg.setSourceEntity(41U);
    msg.setDestination(1196U);
    msg.setDestinationEntity(221U);
    msg.label.assign("MSXTMICVNFFENSSQXQ");
    msg.lat = 0.738184131826;
    msg.lon = 0.0871496477658;
    msg.z = 0.600064542278;
    msg.z_units = 207U;
    msg.cog = 0.755385867189;
    msg.sog = 0.737942694106;

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
    msg.setTimeStamp(0.842711065541);
    msg.setSource(50456U);
    msg.setSourceEntity(131U);
    msg.setDestination(35061U);
    msg.setDestinationEntity(116U);
    msg.name.assign("KNMGLTJEOUACVOOYGCHJBDBNZCLUUIGNCZKXFOSHBFZTWSXLIAUYDYRBHISFEIZIPKQXQFXCMERCRNPRDFAZEIVGJARYMDYUFSWGGTUQCPJORSVTVSVXKYRUHQGYKDPDADDMESKISYFCALIILKAPMPOQKRJBBWRHFNFBTAYVLNNLWGTFTTHJEVQJSK");
    msg.value.assign("ABZARHWVCMYJWWZDSEFBYJZIDCPOGRGRUVKFIVBFXRKUCQSLABETRCFTKFQUHYLNOXNPXKDLIUNQWWPUZODKFRNBGCYDIJZVEPSNGQHSTZWDMBHDAIDVHCVTPJJXMTVYSYFMEYGEFCZGQMKCWSJZZOMLELIAETNXOOMEKSNARXSJGIOWJAUYPAHNAKQYUJF");

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
    msg.setTimeStamp(0.637603987088);
    msg.setSource(63842U);
    msg.setSourceEntity(57U);
    msg.setDestination(12613U);
    msg.setDestinationEntity(54U);
    msg.name.assign("HFHZHQLJYCZGEDZA");
    msg.value.assign("FDENAGWWVHKOPBUZRIPKHXRVVZXIFYEMHDSCPZOGXYPSTXBRVPIDMLAFKIOJFRLLBPCHJVPMFZPHNQDLKITFKQVHFPRQSDASGLNCWOVIVGGAVNJRALECNWZSMEEGSAYRTTMZJXYGWBWJENOFXZNTTQCEHYJNOYJXTVEGNAUDNARFUQTACUBYGBKBEZWLJJHTQEMKBHCKTUWQOMDMX");

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
    msg.setTimeStamp(0.467306131055);
    msg.setSource(49097U);
    msg.setSourceEntity(99U);
    msg.setDestination(29973U);
    msg.setDestinationEntity(242U);
    msg.name.assign("PYHXFXLRWZMHEFULQTMWJIXBQTCPBFCCIPTDIDUXKKSZIDSXQLUXRHFHOPIMKENHOGVMTMNVRSXYULFDNHHWAEOMLKVUDRRJDJALFHQKZBOGNRIYVYKFRFQOEWJOJDAOLJSAZYLGTZZLQPUYAXOGFGCIEJQNOATNDCTWPBTLAMNFE");
    msg.value.assign("ZORHGNTOQNYXGLLIYRRIBDUGKPLNBSEHYYDIIUDQXSDMTWEGFZSPOLAFROVZSUWSWQPNWLUPECBFPNSHVFOKYZQQGDAIYTZBNJLWSJGUXUHTBDRPXFWWHQJMZEEKJPGDQHBMETZLTVOSAODJECTQRIGUZVSHOYKAXTVVRJJCVFXVKMCRYRVKCKGJCMTDAKULAMBACEBIKMVJPCZYCOQDHSMNZFRAFBINYJUKUIFLTHIWX");

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
    msg.setTimeStamp(0.374706213007);
    msg.setSource(42904U);
    msg.setSourceEntity(253U);
    msg.setDestination(18252U);
    msg.setDestinationEntity(82U);
    msg.name.assign("NEVHJKOTABXSOUBXCCYFYNSWRXWGNTBDSQVNEFUZMCBSLJMAFLPLMTAGPIFNGOJAKDTHKCNHXDEMVVHRPMCQGIHARNYGTPORGVFYISYQGIPQRZGHZVWSMKDOFXTWWDIVUWGMKSWCLYIEDRQWZDYCXOYOVNGZAFSMUBDYTJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WNQBCLGYJGAVEUQCJFHCIXCYUXMWVLLUSTIJJLMTRBLTBGIGWXEEFNIKECDXBTWXTMIATZPKOYQTFRZOOADSWDEQXVZFGILPBMDFNRSFHGXHIYNYENLDGZMQMVCLGVUSQKSRPTXKUHSDIKPQZVJVLDEUUKUZFLSPMVSBJDOR");
    tmp_msg_0.value.assign("MSGJOFFQPIGZKXWMFJNMTESREACNKMLLTHMVBCJOWNNUSHCZTAWOGRUNGFNYGDVCUSZQFJGSPKWYDAXGDVFZYXYDCPVANQYHUPKFFDBXIWXFE");
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
    msg.setTimeStamp(0.124375700806);
    msg.setSource(46898U);
    msg.setSourceEntity(188U);
    msg.setDestination(9320U);
    msg.setDestinationEntity(208U);
    msg.name.assign("GJENNUXSXAYQFRUVJEZLHSZPCIVCZNYAKWEOHRLCMWGYLJSYFDFYGGBFJDHVPOPUKLJANPSRLLOONPHFFKTOKMAINCJYPCPBAWBULBTGVMRRFPSJTQLZDAIMDCUJOSIDTIWHZQEVUSWAKHKXGDHQNKUTDZTMDCMSTGCWXGWYEFUBMXKVVCNSTBWBSQWLEIYHKQGPOXZERNQMRIERYAUOIXXRFNXHEZGFPRADB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IXGBOPPJXBBYHNARQNHSEXXVGVPUWADQBEDMAZYCDMACVHOLXUIIKLTKNXSVUTJMVANDZKUNSPORIPKYJBLBQPVMASCMGRJDQBHLRKFQRWVUJTJEYXHWCYDIWNSOSCUQNKMWNHCQGGIJFSMJTEZGYOYQRHHIJPEZVCBTYZUADLDPKWXOISYVLZOMFMFDRILQZJTEAFWWANFKMIYEB");
    tmp_msg_0.value.assign("CBMDFRYJACHJABKDFGOSBZXSXMKETDORKWBMWWZLDMRJDOYAOIINQ");
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
    msg.setTimeStamp(0.297139754386);
    msg.setSource(12106U);
    msg.setSourceEntity(161U);
    msg.setDestination(58388U);
    msg.setDestinationEntity(6U);
    msg.name.assign("GEMOMZIQGTAAHWQLUCPHTKDZONDTVCIFPWWPMICYFBFWIKORWTGMQWXSDUMKEAGVJIODUHYKBOKRLATASUTSKBAJWONRIFFNTZMRDHTBEZKUYFLXYXGNVXSNYRCTJBBCNGILYPDJVEDWLQSXLVMEYHJKIUOZHVGSFIQPVXMAHFWYIGJRNMPVQCBVEODGQXCKEXLYFAQZAUSJMPDCLFTXNECJHEBJQDBPSSRZLZPVRRNOX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WHAPODYZVBJCDTZLHESPMXJCLMHDYPJUUHZJOBVHSGZESDZXKWXKJLWBDVSAFWAXKFUFGYVQXIFGBEHQZZIYHTRVABNHLWFSPGZNOJXIFAMSVECYKTTRQJMKURGNMPRMRSDDRNCAKDT");
    tmp_msg_0.value.assign("UBHAUSKGIQNCCBIFUXKIIXHTAPLHRDMQYNXLJAUEZEMGMWCECOTNIRURDBWYGSILZZHFHFUGOCAEJJSDZWKRDMKYFDCSMJOXSPVSLHKMVMKECNBJXETWXKGWYPBZRGVHNLRNGFKBPIWTGZTRHLAQKNXUZBZDQVEYDJPZAFYODABPYCAMHJPNOOVIVTQFGFGXCLQHFPMQQEUSWQDLJAEJUSJQRVBRYOTODVLNYWCSXNRPZV");
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
    msg.setTimeStamp(0.974753854751);
    msg.setSource(12641U);
    msg.setSourceEntity(59U);
    msg.setDestination(49783U);
    msg.setDestinationEntity(49U);
    msg.name.assign("JQMJDISLIWQXCNDGJSMXGCIQNFUBXCALXHJUXIEPBYVJFZGCGDWWTYSMTORFLJESRDBPNQXVXTVQGTFTSKCVRCCGKYVZKPHFHQIAFMPADAROMVRUATOAYLGBODOAOPZYLNNMSU");
    msg.visibility.assign("WMHCBLNGXJREOTRFASBMTNAXTWIYSGWABKNZQJKWJUHECUDVOYGADQUGDZLGSFVNJIDLRGKEQNAOPLWNRUCYSPO");
    msg.scope.assign("JASVPOCPPYPCRRLBQSIZKWOZDV");

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
    msg.setTimeStamp(0.890707120293);
    msg.setSource(29291U);
    msg.setSourceEntity(101U);
    msg.setDestination(38351U);
    msg.setDestinationEntity(190U);
    msg.name.assign("CAFQBVUKMRGNQIXXYZUEHMTNYYXLETPIDPGFZFJHDFQKQNPELWYKTUOCKRNQXWHQSJJEXFHRASENSEAZRESIC");
    msg.visibility.assign("NTJBPBDASNBFLMOIRGYUMEJCBOBJZTHYRAPWFOSHUSJWIYJPNDCLEGGKFXYXKCEQJZTSCSGVTUHDCQHAOSWATHYMJXUXBLFOFLYHUUUVMLMGLENJMVCMOSRZZIXGWXKIVSOIW");
    msg.scope.assign("MDBJKURZWVLXWDVUMELXADDOMUNZYENDTCIDRCVFTAPGCMOBIXGGQLPZLSDTRUKRQKKXAXOBQJJZLUHQVDWXREHWXMZIOIRAGGGAJEUAQHEDFTMQESQUONLPHFRIYCRTSQJZDUFHSQIAILLBCJFEOBCTKSMMCTLTXBNBPFWVVJOONEXNNMBHWHWINYMVHIJAISVYKPOHZYHVQBCYGBZSPPKZREJSZKYCYUFEW");

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
    msg.setTimeStamp(0.798720640207);
    msg.setSource(31294U);
    msg.setSourceEntity(214U);
    msg.setDestination(64157U);
    msg.setDestinationEntity(120U);
    msg.name.assign("SQDSGXLSYBDIMJPQZIOEZQGQBATPHABZJTSYVEZPCFMONRHCXYWCEENHWDDEGJYAMRAGLCMCOZJTBKLJFDHRNARRBTHFFGVGVDRTFOUQSHSEILWFOVGLXURFZELOVSPQHPLKPJITMBYMCOKVLXFBGVVUTHVWPJDUGVNWYNYUJKUNTN");
    msg.visibility.assign("UEXDIPXNOXAURYOAPOUULVOMJVZSIAFMCTKDEAAYJNQFGEKWTWPNCMNNYTPDSJGDKIWVZSLHTBHOHNHRBPLQIUSTLZEAVEBCEYDJJRFXUUFHEJHGELLQTNKTIGOMOBHSCUUWLNYOWGYXSGBZPFCCZBKDVJWCTVWKLVRHI");
    msg.scope.assign("GTVWSXBDNCGXYXVPJPXLROBOZVHGWNIMDIQBLIFFTVAFEWQRYUJNZCBESD");

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
    msg.setTimeStamp(0.716379687128);
    msg.setSource(43113U);
    msg.setSourceEntity(28U);
    msg.setDestination(23535U);
    msg.setDestinationEntity(245U);
    msg.name.assign("EYHNVOUBBMRXGRQXFYZPWQPRZLYOUUORJTVISQPRNSTCKSKOZAEQVNJCSTCXMTJGUYRNMZEAHODMOUSKIEUQMLUPVPNAMHFGJVTALFJZZELETEXTWLABRMBBJRCYMKNWWGVVRBSGIHCDZJDFADUSQPIWUUQBSBCYQXIVAKWKALIHMILYP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FDZHOPGWLCNSOMCZPSHGBZWYYQOLQKJKGQZOVLFUUTTUGNZZSUENHXTKAJBIBXVOAAYCOOBXJMYXKAHYVIWMNLDHBMDIEQPRWUNPKTUVLENFKPZYPSFWAIHOCWLHASYWKBEGIRKYDMQUUNRBADE");
    tmp_msg_0.value.assign("EYCZBTDBVJUFZRNAGKXFBJETOZOHQQPRZRCGWGVMSCPBNVKKKDMRKQBDOHHQPSLEFWCJECMNEKILRHNQOXHPKUDSYHMLWYWBLZFOAAUJRVNUXFTWIGYDFAMENGJOAEIKFMSCKYVYAOIDINEZFQZSXMYCUT");
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
    msg.setTimeStamp(0.577741960497);
    msg.setSource(1543U);
    msg.setSourceEntity(88U);
    msg.setDestination(64771U);
    msg.setDestinationEntity(94U);
    msg.name.assign("TUINSACWUFQIAYWYCNOWMJVNHOYLQUUTLVQLLREETGQXIPZHPJLJPJTDWLOKYFJUHZVISKVNYWZPXTTOUTUXDBHZEEXJZDBDARZMBJEGOSKDSYRLDSBQIPSOMONPZIPKEMXIGMBHBCKMEKKQKNESZPEMXXDAFXAQFFVWSUDT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IJMRHYVAMPBWLNLHQCZMHEKFGVKFEGATUSRTDVOBEVSNJMRBMMHTBXDKOZDPSXYUSGFKYEJUYUUBGEFIPNOIPCUAQUOOQHBGJNSIDLZKWGBSCQGMKTVWYIOBSFXCQPACQONKEIPIADYZLBJTTYFJOHQESHRYVCALNKEIZTLVIEPAKSMFPVORCDILWJXWQWGJNZZJXZWXDRQUGHABRUYXVOYFNMTJ");
    tmp_msg_0.value.assign("APJXWAQJIDSOCYKRFVQYVOTAGBZPXJCEPUFRUAODYLPULQJYABZGIYNBRHTJWFRYZZDVSFRXQEMEVGKWCJHGKPVESGIPVFWIROUAESLMHMZCNKEXBHXNNFROMFIYZEWJZYBJLMCHRNKTDKBYMNXCHBNYQOEVTJLOQSLUV");
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
    msg.setTimeStamp(0.0284516270974);
    msg.setSource(29051U);
    msg.setSourceEntity(180U);
    msg.setDestination(57358U);
    msg.setDestinationEntity(241U);
    msg.name.assign("YPLYPHSLHYWYUISIRVEHIZACIBQDVNFIVOXHUQKBGTBPQMTINSS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YBZNWDVZDJBRKTIUEWFSCDRFKZGSKJXTLLLXKDCNAERDMEVFBUOMGDLMNYTQCUXVWNPZFEIAZDOETQRKHMSAEMA");
    tmp_msg_0.value.assign("ZWQHFNMATIUJWUSWJYNBXMYISFQCGBURIPONYLDJZAVPNMASZSBJNVCAAASBVBHGRFVHECEXRYRGHDHRCUTZNOICRVQAFYWRZLCMMDLMEOOBFZXVFWUIPKZYPNNGPIKTXSXKGFDAXCTDVH");
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
    msg.setTimeStamp(0.483097507428);
    msg.setSource(3034U);
    msg.setSourceEntity(181U);
    msg.setDestination(10172U);
    msg.setDestinationEntity(167U);
    msg.name.assign("PUAGGALGLXNGUFTGAMJUQAPCDWLKXVITKAVDEDTROLRVVBMPQOOMPZQESSOEZHGOCMTUEZZQIUFELYZQMBEOUDSNXSBHKPRDRSPVYUCHRTJTRCDBCPLBAAAQBDMGQHHSHSNKFMNNWELCWJDYMUIFYCHBJYCKWIMZGRIFWLPVYHXTZPBQVOHRNWECKANUWYNXVJHSTCGOLFMOYPKXIIYFVWZFBWKVJISZIJNTKNAETBXR");

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
    msg.setTimeStamp(0.918445458718);
    msg.setSource(39746U);
    msg.setSourceEntity(176U);
    msg.setDestination(27289U);
    msg.setDestinationEntity(42U);
    msg.name.assign("XFDQWSCTSRGLIHGRNVEIIWEKHOUJZYMKKJBXHUYIXYCZVNIBWQINUAMVAONGJCBYEL");

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
    msg.setTimeStamp(0.819987430009);
    msg.setSource(31863U);
    msg.setSourceEntity(177U);
    msg.setDestination(42949U);
    msg.setDestinationEntity(224U);
    msg.name.assign("HRLFPSDXJCVWMYNNLVZYOBLGLCKFVUMTZZHDDUQYWYAMKUMBACRCFZPEVIRMHGAPEGSQDMXJRHGPTMHSGCJBCTUZURWNYSIUKFRLENJSRYSWKNUWDY");

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
    msg.setTimeStamp(0.83835549126);
    msg.setSource(35343U);
    msg.setSourceEntity(15U);
    msg.setDestination(12395U);
    msg.setDestinationEntity(100U);
    msg.timeout = 2242278795U;

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
    msg.setTimeStamp(0.991951924688);
    msg.setSource(29100U);
    msg.setSourceEntity(168U);
    msg.setDestination(31303U);
    msg.setDestinationEntity(102U);
    msg.timeout = 1740583940U;

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
    msg.setTimeStamp(0.989287248914);
    msg.setSource(20815U);
    msg.setSourceEntity(5U);
    msg.setDestination(58813U);
    msg.setDestinationEntity(213U);
    msg.timeout = 2841268777U;

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
    msg.setTimeStamp(0.277664179891);
    msg.setSource(13663U);
    msg.setSourceEntity(108U);
    msg.setDestination(8267U);
    msg.setDestinationEntity(3U);
    msg.sessid = 1746184514U;

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
    msg.setTimeStamp(0.910083703617);
    msg.setSource(20904U);
    msg.setSourceEntity(247U);
    msg.setDestination(18542U);
    msg.setDestinationEntity(199U);
    msg.sessid = 2743201194U;

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
    msg.setTimeStamp(0.210310402339);
    msg.setSource(62175U);
    msg.setSourceEntity(250U);
    msg.setDestination(61234U);
    msg.setDestinationEntity(35U);
    msg.sessid = 2195931379U;

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
    msg.setTimeStamp(0.762405200578);
    msg.setSource(1222U);
    msg.setSourceEntity(189U);
    msg.setDestination(21889U);
    msg.setDestinationEntity(132U);
    msg.sessid = 4233908519U;
    msg.messages.assign("XAAXWCIXJXRCUTTSUJBQCWKXIWAGRAURPIPVDPVXQQMTGMEZNTDVULXLJEQCFODIKGDCHQAZWSFGPFFMSJITGPUOAVLSO");

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
    msg.setTimeStamp(0.148942707482);
    msg.setSource(60609U);
    msg.setSourceEntity(199U);
    msg.setDestination(1279U);
    msg.setDestinationEntity(195U);
    msg.sessid = 2766552201U;
    msg.messages.assign("IIDHNPWGNFWKALVVJABTUIZUMUXDJDIXYNRQEAHVSNIDHTBOZNBLUGSMYPEKBTFDXJSQEHFCIJPKTCLPWROFBMRKS");

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
    msg.setTimeStamp(0.102866524229);
    msg.setSource(38124U);
    msg.setSourceEntity(102U);
    msg.setDestination(10438U);
    msg.setDestinationEntity(247U);
    msg.sessid = 2919263746U;
    msg.messages.assign("TEEXOTAHLIMJXEODEFTBAKVASVOOYGNLNQOPCLGPVZWCVFLRUJTJIVGKMOSRTHQZUNZYWGQSRWCTPTVSNUFEOPHGGWXFBU");

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
    msg.setTimeStamp(0.66379034316);
    msg.setSource(19423U);
    msg.setSourceEntity(143U);
    msg.setDestination(60505U);
    msg.setDestinationEntity(31U);
    msg.sessid = 3830299259U;

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
    msg.setTimeStamp(0.898573344182);
    msg.setSource(60426U);
    msg.setSourceEntity(92U);
    msg.setDestination(37301U);
    msg.setDestinationEntity(97U);
    msg.sessid = 1328349255U;

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
    msg.setTimeStamp(0.0320367062489);
    msg.setSource(9448U);
    msg.setSourceEntity(30U);
    msg.setDestination(19004U);
    msg.setDestinationEntity(157U);
    msg.sessid = 4267433401U;

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
    msg.setTimeStamp(0.122469485542);
    msg.setSource(57243U);
    msg.setSourceEntity(212U);
    msg.setDestination(4586U);
    msg.setDestinationEntity(90U);
    msg.sessid = 3840205188U;
    msg.status = 39U;

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
    msg.setTimeStamp(0.114458279993);
    msg.setSource(59234U);
    msg.setSourceEntity(67U);
    msg.setDestination(12166U);
    msg.setDestinationEntity(140U);
    msg.sessid = 1591163411U;
    msg.status = 135U;

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
    msg.setTimeStamp(0.813103569114);
    msg.setSource(12116U);
    msg.setSourceEntity(163U);
    msg.setDestination(12257U);
    msg.setDestinationEntity(82U);
    msg.sessid = 4196775755U;
    msg.status = 93U;

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
    msg.setTimeStamp(0.660388213207);
    msg.setSource(23615U);
    msg.setSourceEntity(78U);
    msg.setDestination(11079U);
    msg.setDestinationEntity(4U);
    msg.name.assign("UXGMOROYTMTGJCVKIINMCTWOULZBILSUYZGTTFLGHNDFQJSUBZRDFIUVMXEOUYBAGSOHRZUVEKKQEYMNBWQUWRWKFOPVOHXBPXTISEQDWIWNDDNB");

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
    msg.setTimeStamp(0.288613293984);
    msg.setSource(5533U);
    msg.setSourceEntity(7U);
    msg.setDestination(58155U);
    msg.setDestinationEntity(195U);
    msg.name.assign("SXPXGRIPVXYILCEUSGXJHOMYLUQKDTXHNULGDJQSILQNGIVOKMSABDMQOXRWFXJUZWUWAEJPEFYDFEWVNZPRHCTIVCRUIHBHPMUXEZQFPDDSRUNRLEACKMZNZVGGVAHVFCPATFYOTADGJUFCUBSEBDDQHKTNMSAZGNYEFKIECJLOWITOVGYGWXFVKZKJTHMJWALIBRHQWQYBQBDLQKYCSPMFVKOEOSBYTRJIYWN");

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
    msg.setTimeStamp(0.164320357839);
    msg.setSource(9083U);
    msg.setSourceEntity(135U);
    msg.setDestination(52523U);
    msg.setDestinationEntity(29U);
    msg.name.assign("KDRKABKWPZYZLAOFMUDCQCUUSOOCBWXJCLQLGYKMHMZYEKLAORIVSERVWTBQJBDQBKPMAFNEYTCUWVJVWVWIPNUNGRVURCFCSOSLZEOBAEWIYYGKGSEGDLNUXJNEUAGOFVBMFXSXGGCTJVXJFMTPDQXHTXIQNMZJTJHMCHTYLHBAXXSWWAOTZNMVGAFIDXHRZOPLCIOYZU");

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
    msg.setTimeStamp(0.88118654987);
    msg.setSource(31485U);
    msg.setSourceEntity(43U);
    msg.setDestination(26704U);
    msg.setDestinationEntity(14U);
    msg.name.assign("HBIAWNHTVPXGFPEDZQAZFJVTIUXDYINKRCUQQGWHJFXKFCBLKYRPMNMEDIGPHQMPFUEMSVRCNBJNLSYWNQUHETROVYUFMBEYQXBJDPIBVTHSPZVFQMFXEASZYVAKIFETELHMLWCYCSMYJGDOEKNAVVKURHAAXTOCKCEBKCCKLXLGBOS");

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
    msg.setTimeStamp(0.236258251998);
    msg.setSource(42121U);
    msg.setSourceEntity(248U);
    msg.setDestination(3641U);
    msg.setDestinationEntity(66U);
    msg.name.assign("YYOGDQZPTFQNOLIYYWNNIPZPZRYZVMSG");

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
    msg.setTimeStamp(0.359571299733);
    msg.setSource(25010U);
    msg.setSourceEntity(42U);
    msg.setDestination(19959U);
    msg.setDestinationEntity(92U);
    msg.name.assign("RDUESZTTEZMAEWYSQLBQIHJOWFZIYUKSNYHIATUDJWLGBFMVOKGJCMIGDLUUNQRXHRFBMQPVFURJROTUJYZSRNBZMCKARCHNXSPOGBKT");

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

  return test.getReturnValue();
}
