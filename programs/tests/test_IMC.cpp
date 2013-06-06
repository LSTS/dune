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
    msg.setTimeStamp(0.948871471286);
    msg.setSource(54797U);
    msg.setSourceEntity(21U);
    msg.setDestination(54455U);
    msg.setDestinationEntity(215U);
    msg.state = 18U;
    msg.flags = 73U;
    msg.description.assign("TTHOKUBSLVEYRKSZUAQQNUQTQSPBVNKETKMTRFMBCSOGLVJQPEKCLPGQXBVBDZTYZJSRLCONTYOEDGHMMZUYCYISGBBBANGVAHBETFGPDHSXKCSAOJLHOYSWFOVDDORKVQFQDMIGQCXMYXUPDEWOIAEPWXFTFKOVPNZXUZFRUTEZAIMWZCDYJWNWMYCNPWELIXKCJRJNIIIUWVFPGXHIZMLNLSFYHBXRIUJDFJGAHQZKNL");

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
    msg.setTimeStamp(0.126310520656);
    msg.setSource(55520U);
    msg.setSourceEntity(98U);
    msg.setDestination(53359U);
    msg.setDestinationEntity(60U);
    msg.state = 153U;
    msg.flags = 90U;
    msg.description.assign("LLXKKPVTUYVUZNCNILAZHFPOOYAGMLBOQWIEBPQFNYVPDJKCBISOJHEWBNYZJTADMJTXDQQVXL");

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
    msg.setTimeStamp(0.933227057976);
    msg.setSource(16133U);
    msg.setSourceEntity(127U);
    msg.setDestination(38695U);
    msg.setDestinationEntity(46U);
    msg.state = 173U;
    msg.flags = 47U;
    msg.description.assign("BULTEKPCQIKBBNLCZPMCRUKSJVSNU");

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
    msg.setTimeStamp(0.503530939417);
    msg.setSource(37139U);
    msg.setSourceEntity(72U);
    msg.setDestination(49835U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.175753506443);
    msg.setSource(60307U);
    msg.setSourceEntity(45U);
    msg.setDestination(61198U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.262379437726);
    msg.setSource(36352U);
    msg.setSourceEntity(211U);
    msg.setDestination(60954U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.756613392403);
    msg.setSource(58054U);
    msg.setSourceEntity(184U);
    msg.setDestination(44725U);
    msg.setDestinationEntity(179U);
    msg.id = 223U;
    msg.label.assign("ZTVBMGHOUQWXKDGIHYWZH");
    msg.component.assign("UYMKUMEEKJEJQXAQHAZHBKPOBDLCBRSPFRJWCKCDNOIGXLO");
    msg.act_time = 33755U;
    msg.deact_time = 35285U;

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
    msg.setTimeStamp(0.173553521195);
    msg.setSource(34828U);
    msg.setSourceEntity(24U);
    msg.setDestination(28068U);
    msg.setDestinationEntity(215U);
    msg.id = 89U;
    msg.label.assign("GXEXZSEGIYAYKOVCIHJDUWHMDEITPUCFZYBNHKSEHNSQIUCNZKNENMHBVFBEMNGJIPZVYFRZKMKLJQRBOFIOUXSGFZSRWQWFRIPZYAAAQEOOAHNBFMXSBKVJTREPLQYBUOZNTUDTWWQWHFOHBMLCILUDMACWRXXAIPJVRUVGNODDXJVPXZMTDYJ");
    msg.component.assign("CTUYCXKLFJDAOHKKFYVTMXNWUZRWTIUQZJQMQJLRRGVFGNEAPYUYPTDDLTASHASONAEECQMQNWBDIRUYVMBCMVDZHPHOBIGGWMEIVNSIOFZYNSJSZCPQOVENABRNQIJPAYJHKIHSLAGTCCZRZSUWKPEYIJRXXWXJFCRWKEKVRYOEDOBOXDQXFKLLWDXGIPHDTUPTHFFJPLZYXGCUALTJKHGB");
    msg.act_time = 24755U;
    msg.deact_time = 12406U;

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
    msg.setTimeStamp(0.501559681593);
    msg.setSource(14063U);
    msg.setSourceEntity(59U);
    msg.setDestination(42131U);
    msg.setDestinationEntity(68U);
    msg.id = 195U;
    msg.label.assign("FMJSNFEBIWDMANPZWLXYDEZWISGBKRHWIHGUCOHSBWFDKEURNCKTFLBOAPQZTCYGWPCBXMUTQULACXARMYXVXUIQAVVLUZFCETJDFUHNPEODVAIVKDDZBQKLSWZSJAKYHEDLXCBQRYCPTQMCTHWJROFKSUYBRGGLJVNQNIJSGPKEGOORGRTWPVRMKMHHCNM");
    msg.component.assign("ZKUBUIBESNLVKFRZBSPNZFDNBYLRMVICOVQNBPTL");
    msg.act_time = 49923U;
    msg.deact_time = 42858U;

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
    msg.setTimeStamp(0.985641266841);
    msg.setSource(47770U);
    msg.setSourceEntity(99U);
    msg.setDestination(16820U);
    msg.setDestinationEntity(23U);
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
    msg.setTimeStamp(0.512073344587);
    msg.setSource(5986U);
    msg.setSourceEntity(153U);
    msg.setDestination(35794U);
    msg.setDestinationEntity(91U);
    msg.id = 252U;

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
    msg.setTimeStamp(0.268036505066);
    msg.setSource(30892U);
    msg.setSourceEntity(82U);
    msg.setDestination(37561U);
    msg.setDestinationEntity(142U);
    msg.id = 36U;

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
    msg.setTimeStamp(0.58518121026);
    msg.setSource(57443U);
    msg.setSourceEntity(62U);
    msg.setDestination(54412U);
    msg.setDestinationEntity(167U);
    msg.op = 218U;
    msg.list.assign("EAOGMGCVRZRGXWUQJOJLXIPJBSNIVFBPBLULAZSOHWWEPCWDHRMFPBRYGFHQKNCALIYLGUTSVJGVFMDSUSLZSZVNEXGDWKQUCIIUJZGQHDOCVGWHTWRWXJJNOZHFTLBNRKPXZTKJYDDISVPZPCEDMMMYOQUKBEOYIILKNVKEYRGLETFADMFNLJRAZXWQAXHBFHQAERQBOHYKKAQSDUJTYC");

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
    msg.setTimeStamp(0.891206639926);
    msg.setSource(54558U);
    msg.setSourceEntity(59U);
    msg.setDestination(13264U);
    msg.setDestinationEntity(145U);
    msg.op = 168U;
    msg.list.assign("CZKKEQWTGRXIICNHAPYXJHOGOPJSVIJXYPGUDNVNUYMCRVGMWVZNQNIMYCXRHLSIBGATCTBNRDRWHGLSQPEMB");

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
    msg.setTimeStamp(0.0958548630479);
    msg.setSource(41775U);
    msg.setSourceEntity(151U);
    msg.setDestination(50342U);
    msg.setDestinationEntity(79U);
    msg.op = 120U;
    msg.list.assign("FFLYAGKRXLJRAZZQKAJJSPVTOLALOOZERRIBDSYNKNJUQPBEDWQMYCJNGNBTTAQJNTIHJFJYXDEHORCGBCNZOFWDJHBNOCCVSLVRWXLSPGUOPPOKEFEFIQGXUKQCUJPMSRSALMGMUVTHCELNUDCBISBMPGFFYTFAMDDWUPVMXUBNXWMKQHCHIDBQZZVZAHTWPKQCVHGTYLPWEIIYMTUOWVTREHSZYAXSILIFDMIGXBEKWYDEXZYKRQRWAV");

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
    msg.setTimeStamp(0.793455690424);
    msg.setSource(48286U);
    msg.setSourceEntity(184U);
    msg.setDestination(19236U);
    msg.setDestinationEntity(149U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.720486219056);
    msg.setSource(39085U);
    msg.setSourceEntity(102U);
    msg.setDestination(37861U);
    msg.setDestinationEntity(10U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.614244099151);
    msg.setSource(52264U);
    msg.setSourceEntity(6U);
    msg.setDestination(14503U);
    msg.setDestinationEntity(42U);
    msg.op = 27U;

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
    msg.setTimeStamp(0.00871402026362);
    msg.setSource(22097U);
    msg.setSourceEntity(228U);
    msg.setDestination(44300U);
    msg.setDestinationEntity(58U);
    msg.value = 61U;

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
    msg.setTimeStamp(0.0465455169022);
    msg.setSource(63898U);
    msg.setSourceEntity(163U);
    msg.setDestination(33083U);
    msg.setDestinationEntity(43U);
    msg.value = 56U;

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
    msg.setTimeStamp(0.567835225754);
    msg.setSource(10850U);
    msg.setSourceEntity(157U);
    msg.setDestination(42739U);
    msg.setDestinationEntity(79U);
    msg.value = 114U;

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
    msg.setTimeStamp(0.267066667087);
    msg.setSource(34595U);
    msg.setSourceEntity(221U);
    msg.setDestination(19688U);
    msg.setDestinationEntity(54U);
    msg.consumer.assign("JZOMMHUQMTJUQVPJUCGELIUFFINHKWQRNRZTNYTBIJSHPVALRZQAEXCDSGWZEWBVVRHCIMZSBZBOQYGEGFJHKNLHXRKOXFVOSHZFQNOFGUREW");
    msg.message_id = 51951U;

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
    msg.setTimeStamp(0.6424757748);
    msg.setSource(27236U);
    msg.setSourceEntity(145U);
    msg.setDestination(37046U);
    msg.setDestinationEntity(96U);
    msg.consumer.assign("KMYERRYCKSRUQZSUKOAQFEORLKECLGIWLFGJDOYMVIFPBDFXZVIGCXZUCMAHVCRKPJJBOUXOKLLYOZIETXMHZXJSYYNNSOGUNQRGIAOAZXAZRCVAGVVBDQRHFWFWXSUOCTFCUKIQHJHIHXQFTNHWYWTXN");
    msg.message_id = 43602U;

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
    msg.setTimeStamp(0.773193126922);
    msg.setSource(40412U);
    msg.setSourceEntity(144U);
    msg.setDestination(32844U);
    msg.setDestinationEntity(218U);
    msg.consumer.assign("AOLJXOMYSKUTFYFAZVXFDMABLVDQCYSCRJHGACWDVPXEJMNCMMQTNOGGWLFVLDIYJFAHBUWORKO");
    msg.message_id = 55375U;

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
    msg.setTimeStamp(0.617312705747);
    msg.setSource(58560U);
    msg.setSourceEntity(95U);
    msg.setDestination(64755U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.114542001272);
    msg.setSource(3932U);
    msg.setSourceEntity(198U);
    msg.setDestination(36690U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.848142578387);
    msg.setSource(34732U);
    msg.setSourceEntity(143U);
    msg.setDestination(55207U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.995367376342);
    msg.setSource(58985U);
    msg.setSourceEntity(64U);
    msg.setDestination(52618U);
    msg.setDestinationEntity(184U);
    msg.section.assign("QGESXSYHTSDHNCRIBFDABNTEBUIOFWYMWYPNWZXPRXUTQMTXEIJLSBKEGVCRFRBKTNGXZAEVSVJUQXVXKWOMFDCCRZAUHMLHGGQMKOCHMLJNJYPHRQWKELLJOZNZIUKFIRLUSWAQD");
    msg.param.assign("QRFLSQNGHAHNTHNUCCMWIATMYYYEZWUAPQKYOGKMEBXRKILVSIOFVSAICKZXLHKVRTWVYHFDJDPIJUHECCMSIUZBDRXUDT");
    msg.value.assign("JHDBNMDUJWWKXRHSSUGOMLSLBDNMOCRYFIZWIAJTTSTCGLIHNXAKYFAWJLVSPSOXZYOXYORZQNNBPQTMUIRNYGHRLDWFBSHKMEKZDUIKHWNGIGTGOPJZJVBLKDRJIYZWOFMUPBMDVVRTDPFXFIVSJXWXFPBEOGYPRQBUCKCECKQTTCEVIIFPUAMJAXEMAQSKOCKZAOPE");

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
    msg.setTimeStamp(0.460623794607);
    msg.setSource(49439U);
    msg.setSourceEntity(169U);
    msg.setDestination(36858U);
    msg.setDestinationEntity(167U);
    msg.section.assign("IONMJNBMWTFCMXIABEHSPVPVZDOLEZTJAJPWTUMEIRKD");
    msg.param.assign("MWRYQLWRADKKYXNWYJUWTAYULNIJZCBJSBFODLDXZNFJOQUGEIVHZCVXNGIKKFPADRPQDPNTHXTRZVGBNWQPMFSAIFMXXVESWTNYGFMSTSADURBWQYQAESGCXLWKIHGXGQPVUQCP");
    msg.value.assign("LWWNPGSMGHZREUAQKPVXYTBHNJRQWFLNYORMEWPVCUEYYPRTXABDZINWPKQEIYKVSMVESOUZBGGDDOVWFGFTOCMGIOYVSMVFPONBMJSQRIYIKPFJISUXZNUWDZMJWMGHHSDZTVQZNBJBDUPKQZQXAEYAHIAJXRHFHRPJLAFJXKCZOLQTLEAHQLTUONPTSKSACEGWHXDUYROGKBLXCGYWFDCBTVNHTXDZIUNSL");

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
    msg.setTimeStamp(0.490292809399);
    msg.setSource(26769U);
    msg.setSourceEntity(202U);
    msg.setDestination(17327U);
    msg.setDestinationEntity(147U);
    msg.section.assign("SGYNKVEZBBMHSCOZUYFAETXLGZHEBLPBXANOKFFADPXXADVDQOGGJKWKRUYYUHYKIPYEPZDIFRLKIHAQAOXWSDJRBPFIGVPNHANUUUTGJEUUJTSJVJOKYWSWHIQQJCIJWSJDTQRMMHBCNSCEZBWQMZNPPMHCOWYGTATVEKSGXZPDHNVNDJNVNGAMWRFLXOERBKMRXTCGPQSIEFOAMIL");
    msg.param.assign("NEVLLQUONPLEBAFVHXJDVUSJGKQMJZZNNTRYALGBTMZXFNQTTECCDWPLVBKEYMSIWTSNFJXRBGCOBDQUWEIIMWPKWEFDAPSVTWCYRSDJHVHILIQOZXTRSQMGPMMCCSYBURQELTCOPHIMKUWDTISRXQHEKZBIPPCHLYVXYADGGRUZUDYKFNYEDZVAJOFWAMPBXZHKCOQJNX");
    msg.value.assign("HJFBIDXNUVODODZSGXR");

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
    msg.setTimeStamp(0.109440623387);
    msg.setSource(40188U);
    msg.setSourceEntity(72U);
    msg.setDestination(3091U);
    msg.setDestinationEntity(131U);
    msg.op = 33U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("XIPKVHKKKNJZFQZSOHCTIFYROJBXFPUHVFNWAMGYSNPCERCROJQUBCPXGKHJYFGBYVLWYRVMMMCEVUOZXCYMVHSMFTIYTUULQEWCDDJRREAIBLGJKKT");
    tmp_msg_0.param.assign("UTDYXZMROHVUZOWMVRQMHSLYYQKFERCODZIBKMFOGKKEAUIXZKNDVB");
    tmp_msg_0.value.assign("MPOTWVQTPGRZGJCEZXAPXKVSQWULZTORDDCVYRZDG");
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
    msg.setTimeStamp(0.546592674386);
    msg.setSource(7809U);
    msg.setSourceEntity(154U);
    msg.setDestination(18681U);
    msg.setDestinationEntity(112U);
    msg.op = 151U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("CYVKWDSMOLWRJHBFOTTZAIXUOTPTSBRP");
    tmp_msg_0.param.assign("GTGYUASBLIXJNIWLVRYEABGQAGJIZMKPXDZJIABVKILYHUQSCKFPDKXZMDYLYMVRPHOOQPOXYCUCSGUTUVXFMKOEB");
    tmp_msg_0.value.assign("WGBXQPYUTWMXBONILHPXKLBXSEBBCGEWUMHPRQJBUJKNLRZNLNLHFLFNTSXQIPNPZREZGFTLENUFSWRZHFSWAIHYTHYVQPDQKLQMKKZTU");
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
    msg.setTimeStamp(0.719098975758);
    msg.setSource(30607U);
    msg.setSourceEntity(6U);
    msg.setDestination(3143U);
    msg.setDestinationEntity(11U);
    msg.op = 217U;

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
    msg.setTimeStamp(0.63342027287);
    msg.setSource(12931U);
    msg.setSourceEntity(159U);
    msg.setDestination(29371U);
    msg.setDestinationEntity(60U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.151869386112);
    msg.setSource(31667U);
    msg.setSourceEntity(242U);
    msg.setDestination(4492U);
    msg.setDestinationEntity(235U);
    msg.op = 148U;

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
    msg.setTimeStamp(0.386404600498);
    msg.setSource(31969U);
    msg.setSourceEntity(43U);
    msg.setDestination(39201U);
    msg.setDestinationEntity(74U);
    msg.op = 67U;

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
    msg.setTimeStamp(0.876306143641);
    msg.setSource(36985U);
    msg.setSourceEntity(189U);
    msg.setDestination(20173U);
    msg.setDestinationEntity(163U);
    msg.total_steps = 22U;
    msg.step_number = 76U;
    msg.step.assign("ZJLFTLCIDNMBJRARNYRSVKDUZOYONZQNHGSSPIXSEOILPWDXYXQJJGODGZOORETUZVVBDZFWHXEFHGQKCGGPQBLELUXFJSFBNQIEHWLVHXOJDFK");
    msg.flags = 204U;

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
    msg.setTimeStamp(0.961171834141);
    msg.setSource(30458U);
    msg.setSourceEntity(122U);
    msg.setDestination(65458U);
    msg.setDestinationEntity(62U);
    msg.total_steps = 235U;
    msg.step_number = 207U;
    msg.step.assign("CLLWLGYPQCAGEFEVSSUNOSOUTNNHIUXBVMPJPRWEERXPTSLHNVLKZGFYWVYLSXJACJMHTGJMTVQWDAFXVRAOXPIDWBKWUDTITCFHVNLJYZJHEKHOWMNSEDGZMYGH");
    msg.flags = 242U;

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
    msg.setTimeStamp(0.119015042833);
    msg.setSource(21056U);
    msg.setSourceEntity(121U);
    msg.setDestination(47474U);
    msg.setDestinationEntity(211U);
    msg.total_steps = 22U;
    msg.step_number = 75U;
    msg.step.assign("BUGAWRYDSYKTQVQIXNPIVCDLGGXGDBHCXKVEOLLZFQNJZZRLIAYOEUMULWWACEMBARSWOVVZNRVTXTOUKOKTDZCCUIPRPYOWJLMFPKTXFGGAPITDAVNZRPRSAHCZSOEYGNHBQSTVHFNNYQYUFBW");
    msg.flags = 48U;

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
    msg.setTimeStamp(0.622289037329);
    msg.setSource(5932U);
    msg.setSourceEntity(99U);
    msg.setDestination(40403U);
    msg.setDestinationEntity(21U);
    msg.state = 116U;
    msg.error.assign("DJKDFAEKWEBRATDNISRXKPLAPGAPFGCOQKSSZMHN");

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
    msg.setTimeStamp(0.632299532967);
    msg.setSource(15401U);
    msg.setSourceEntity(103U);
    msg.setDestination(35960U);
    msg.setDestinationEntity(39U);
    msg.state = 25U;
    msg.error.assign("URRKWMQHAWXLQRED");

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
    msg.setTimeStamp(0.413237678528);
    msg.setSource(31471U);
    msg.setSourceEntity(156U);
    msg.setDestination(18199U);
    msg.setDestinationEntity(232U);
    msg.state = 108U;
    msg.error.assign("IARUGTPQJAFZBRAUOROKVZSMHXHKMXMGKGAHQYKLVWMHCIWHMXPNTTJNRKQSCPOZWQYXLXJPLDBCSYRUGLVXTVKMBWTYGZQOUDGNVGSQXQBZMISHUSECJJZGWMDSTNJLLVAIYUCXIBFDEYBPUHTHOULEIEIOELJFKDQREQYIFWRWEBSMZXFVFTUHAEAXAGNCKBLWWJYHFR");

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
    msg.setTimeStamp(0.42784091486);
    msg.setSource(31479U);
    msg.setSourceEntity(253U);
    msg.setDestination(17113U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.731428903809;
    msg.lon = 0.225134533136;
    msg.height = 0.245832077239;
    msg.x = 0.191862703083;
    msg.y = 0.592533598704;
    msg.z = 0.339215713533;
    msg.phi = 0.813325650364;
    msg.theta = 0.738045847808;
    msg.psi = 0.204271574767;
    msg.u = 0.294726652128;
    msg.v = 0.226751720196;
    msg.w = 0.0130487771947;
    msg.p = 0.043943797855;
    msg.q = 0.595016769601;
    msg.r = 0.154979653584;
    msg.svx = 0.944949347678;
    msg.svy = 0.0099436374964;
    msg.svz = 0.298191396553;

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
    msg.setTimeStamp(0.00625885427078);
    msg.setSource(29044U);
    msg.setSourceEntity(102U);
    msg.setDestination(27483U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.452398285842;
    msg.lon = 0.623971960081;
    msg.height = 0.353767346414;
    msg.x = 0.126910530363;
    msg.y = 0.401293269342;
    msg.z = 0.227680641661;
    msg.phi = 0.183657932286;
    msg.theta = 0.427568100391;
    msg.psi = 0.0235234985726;
    msg.u = 0.677917906184;
    msg.v = 0.787746823686;
    msg.w = 0.77233179136;
    msg.p = 0.316112038966;
    msg.q = 0.500177740749;
    msg.r = 0.831586870262;
    msg.svx = 0.5160126051;
    msg.svy = 0.103329723661;
    msg.svz = 0.141037710291;

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
    msg.setTimeStamp(0.692917466999);
    msg.setSource(39679U);
    msg.setSourceEntity(148U);
    msg.setDestination(62164U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.385608738403;
    msg.lon = 0.161920154404;
    msg.height = 0.263368312054;
    msg.x = 0.573331194155;
    msg.y = 0.937730981015;
    msg.z = 0.834756341862;
    msg.phi = 0.14730793418;
    msg.theta = 0.817301136479;
    msg.psi = 0.0666834773578;
    msg.u = 0.435963372041;
    msg.v = 0.425600178195;
    msg.w = 0.238762559345;
    msg.p = 0.887991252227;
    msg.q = 0.0997974579788;
    msg.r = 0.177181905568;
    msg.svx = 0.127640166896;
    msg.svy = 0.833432125023;
    msg.svz = 0.196041200505;

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
    msg.setTimeStamp(0.226360520309);
    msg.setSource(31213U);
    msg.setSourceEntity(177U);
    msg.setDestination(23294U);
    msg.setDestinationEntity(32U);
    msg.op = 82U;
    msg.entities.assign("SJBLZTHUULHIIUWSNVPOAOJTBECUNZKUTYYBXZUGRYWYVWQANDKPXLOSWYQRPPRISHBOYSABJ");

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
    msg.setTimeStamp(0.312716402555);
    msg.setSource(53940U);
    msg.setSourceEntity(241U);
    msg.setDestination(44468U);
    msg.setDestinationEntity(242U);
    msg.op = 13U;
    msg.entities.assign("HPCNRTRFSIOEZTLDGYHUQPWMDQZZFBGZCPSNCKQNVBQBCOYWWCVTVJEYKSUKSUAGSBWMEJNPIEHQFIBSKALHMXASWRLRAOKMNGLEYLTHTBODDLFDPTGAMOGMYMRHKPILWKEZJTNYRCDYDOIJJESTEKZDUKQUGAMSVHYSZVXHQFJAALQZJTBEBAFNZNNOUOJBKJBUIPXIOEGWVXCIFXIPYOIRRMRVUGAMFLUVPFXRQWXYWCHU");

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
    msg.setTimeStamp(0.446559062296);
    msg.setSource(3670U);
    msg.setSourceEntity(231U);
    msg.setDestination(23473U);
    msg.setDestinationEntity(48U);
    msg.op = 210U;
    msg.entities.assign("ELLMZCVOZMARCTHNICULHS");

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
    msg.setTimeStamp(0.0183178425817);
    msg.setSource(53435U);
    msg.setSourceEntity(206U);
    msg.setDestination(3589U);
    msg.setDestinationEntity(143U);
    msg.type = 219U;
    msg.speed = 59636U;
    const char tmp_msg_0[] = {25, -29, -27, -123, 25, 69, 8, -14, -42, -11, -58, -60, 71, -54, 6, -33, -15, -69, 60, -74, 56, 118, -1, -124, -115, 49, -82, 25, 72, 31, -26, -6, 13, 74, 9, 75, 89, 8, -38, -7, -29, -57, 25, 68, -118, -116, -19, -36, -63, 13, -44, 49, -21, 0, -113, -18, 76, 91, -93, 111, -55, -42, 92, -38, 44, -9, 118, 27, 100, -87, 1, -124, 53, -101, -29, 19, 76, 32, -109, 65, 19, -33, -120, 102, -76, -34, 101, 71, -26, -123, -81, -28, -116, -31, 102, -32, 70, -12, -60, -96, 105, 13, 54, -116, 2, -82, 9, 53, 99, 74, -42, -112, 106, 37, 84, -99, 42, 2, -15, -97, 101, 8, 43, -47, -61, 8, -112, -91};
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
    msg.setTimeStamp(0.0887039065225);
    msg.setSource(33084U);
    msg.setSourceEntity(244U);
    msg.setDestination(17612U);
    msg.setDestinationEntity(163U);
    msg.type = 124U;
    msg.speed = 52558U;
    const char tmp_msg_0[] = {10, -28, -24, 26, -103, -13, 15, 29, 11, 24, -116, 68, -123, -49, 121, 14, 1, -108, 40, -50, 100, 107, 51, 28, 74, -23, -7, -31, -35, 69, 37, 37, 43, 75, -101, -50, -37, -36, 57, -99, 69, 4, -123, -110, -38, -36, -58, 109, 72, 107, -68, -77, 38, 101, 104, -98, 115, -77, 41, -23, 64, -78, -56, 53, -31, 99, -40, -34, -64, 114, -86, -47, -3, -89, -86, 51, -46, 68, -73, -5, -102, -11, 36, -90, 75, -94, 63, -21, -25, -84, -127, 27, -66, 53, -102, 74, 38, 85, 108, -119, -111, 38, -16, 9, -76, 45, -34, 75, 15, -21, -39, -87, -23, -56, 7, 70, -120, -29, 13, 65, -81, -75, -87, -123, 90, 64, -95, -102, -123, 110, -63, -83, 124, -60, -70, 118, 43, 11, -7, -114, -52, -121, -81, -49, -54, 17, -114, -103, -52, -59, -71, -127, -77, -78, 22, -66, 28, -96, -78, 90, 44, -69, -118, -97, 72, -82, -95, -119, -53, 102, 64, 72, -2, -41};
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
    msg.setTimeStamp(0.900214770948);
    msg.setSource(19363U);
    msg.setSourceEntity(248U);
    msg.setDestination(64058U);
    msg.setDestinationEntity(109U);
    msg.type = 37U;
    msg.speed = 40365U;
    const char tmp_msg_0[] = {-93, 75, 57, 16, 52, -87, -66, -92, -99, 124, 99, 42, -57, -69, -6, 86, -92, 71, -92, -81, 102, -51, -87, -95, -118, 70, 15, 65, -46, 54, -40, -86, -101, -121, 4, -101, 1, 97, -33, 114, -52, -8, -57, 88, 125, -83, 31, -12, -107, -93, -110, 6, 55, 116, 45, -55, 53, 117, 60, -79, 121, 106, 120, -77, -48, -37, -112, 69, 101, -30, 38, -91, -33, 88, 123, -95, 82, 13, 35, 0, -40, 120, 86, 58, 38, -42, 95, -20, 24, 54, -115, -53, 122, -83, 84, -84, -22, -123, 23, 46, -17, -71, 68, 19, 102, -67, 121, 27, 96, -91, -14, 51, 109, 53, 4, -94, 52, 79, 43, -55, 6, -85, -108, 87, 97, -45, 63, 80, -98, 49, 123, 54, -12, 103, 42, -84, 93, 54, -62, 71, -9, 104, 94, -101, 25, 71, -92, 53, -30, -59, 63, -75, -23, 54, 125, -40, 105, -56, 126, -69, 40, -7, -8, 51, 123, 85, -81, -109, -123, -101, -126, -23, -112, -78, -45, -24, 120, -121, 116, -66, -86, -70, -78, -4, 86, 82, 61, -59, 32, 105, -61, 126, -57, 53, 33, -46, 18, 50, 78, -126, 83, -30};
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
    msg.setTimeStamp(0.1800721637);
    msg.setSource(1576U);
    msg.setSourceEntity(24U);
    msg.setDestination(49602U);
    msg.setDestinationEntity(166U);
    msg.available = 825529344U;
    msg.value = 74U;

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
    msg.setTimeStamp(0.951259530461);
    msg.setSource(48098U);
    msg.setSourceEntity(95U);
    msg.setDestination(39340U);
    msg.setDestinationEntity(228U);
    msg.available = 3433493198U;
    msg.value = 5U;

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
    msg.setTimeStamp(0.545826153444);
    msg.setSource(20564U);
    msg.setSourceEntity(153U);
    msg.setDestination(40237U);
    msg.setDestinationEntity(236U);
    msg.available = 221469079U;
    msg.value = 230U;

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
    msg.setTimeStamp(0.79683337097);
    msg.setSource(5230U);
    msg.setSourceEntity(34U);
    msg.setDestination(59471U);
    msg.setDestinationEntity(254U);
    msg.op = 11U;
    msg.snapshot.assign("CWHQAGRMRGLNVKKKIFCHBJVWVBNBCDEZAHAWQD");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 201U;
    tmp_msg_0.actions.assign("LBETUQAPDHBYACWNKAEZOTTXWENHUOJISXQFOIQTPRUCGAMWAHBKUQIIBDHVDMYGSVXZFHVQTYSGHLHZRYRBPSICKLNXMHUUUKEEILJRYEPXFE");
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
    msg.setTimeStamp(0.658748114779);
    msg.setSource(33906U);
    msg.setSourceEntity(106U);
    msg.setDestination(22143U);
    msg.setDestinationEntity(173U);
    msg.op = 9U;
    msg.snapshot.assign("FBGSFACFIABSCJDQAOQZKZSULAHXNTXLGMJCBNYRVDAZZEJPEYXCHCIIHYOJMOVNPHDJOUMPBVJQQXNIUWVMCKGRKEBASJOULJRXEHFPEMWPRTVLGHARLTZGYXKKPFHE");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 60U;
    tmp_msg_0.goal_id.assign("DUSYAYSRVHWJOPGNFWXMMQZRKLUQQFSPSKKKFPOEKFANECXZPNCAERRLVXVFHCWKRDOLWBDMKZTUHNIUDIMOAUJTASBBJSUAZILCTYJZTJJNXXAVZEWBZGLXVYYSBPGTOWWCBOQHGRFIFOEAMDYMHZSEMJJEJGYQCSADSVIPIURWMGTXLIYQGPKHIDGBHTXHICGWOTKURTPDXN");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("FGUDQARVMYHBWTFZUWZZAHDQXOYXHQZUCMNLVGJJAITWXIVRQRUSKZHNBSHFFMGSYWMRENKHELINCLKIKYESPCDWIFZSXGMEILBTDHQNXTAVAFHATOAEOGRMBMLFUKQOMLOJCEKENBTYAHKKUSPCOOIIRJJNMDLMSOYVXUPIXIJBERNBWJQYWCEZVOUPSDUKRNWPFZKEUCXTPAPCPWSGNLBGCVQHDVDJQQBCLGTVLDYTZZRDPJ");
    tmp_tmp_msg_0_0.predicate.assign("XZMPQJGTXDLGSSTVNRQOYOHOCPAZHDNEGGFSXJBDIWHPHIDWCWGSJRZBWMYEFFXMFTDKILWYBYLEMHDSXJILFXSBMBMVECSNGNPJPUHWTYYRZCRAULAKEGZDSPNKRGMRTQXKQLUIRTQFSDUUJKINYKICANKQUVJQRGPJQQHOXENCFADTPLXMNZOVZUEYVVBN");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("LPPKJHJAFREAGTGDHWJXDOGIHEYTNDIVCFGXXNNLYWXXSECZUBZXEAWHPLJTBQIRIPPCXRMYDOONQQSHXHQSCMHPTHSNPZTPLAPBBGQUAFFZUCLXYZNVUWSCKRSOFVIKSNXKWJKGKYQAVVKTLLBYLOIQAOBQMJNVTJVBDAUGYZUGVFEBJDTIZSRELBVWUZKVKNMEPQDHHBCYTFIZQRDROWRMFJUWMMKMADGFYSCMIDRERYGZEJIWT");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 17U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("UMESSNFZAIUYLJFKKXZQZMVIUALHYGDKTDAVRBKWROCJOYUDXMHRQLOVQMRITJHRJNLIXCFEEONHRGJBKQIAWSQCHTBTKEOLCJBDOLYUVWPMKBQSWYLOUQGFMDDWXSXYNOKGZGBIRHJJGYVUOBWPQSMFNPARPNGPSFAARICWCNPIFGOXTEYAVVYLSBZ");
    tmp_tmp_tmp_msg_0_0_0.max.assign("IZGYGSVTULZAZDXUDGOCBFQHLDAVDTSQMDAKEYHVQEVFDJVMMGCYZEFHWWSJUUKVDXTBFBJXJMUCAFHRHFOAPJBDQHWNRQKTOHRNAAQSOPLMCZKELSNMPOGVONLXYTKJIJNFLVIYPAURZEBOQFNPUPPXMBCSUZGILBBDITGFSVCNSYMYTPHOZYEKKWDENQQXIEECGPI");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.499754375848);
    msg.setSource(16098U);
    msg.setSourceEntity(16U);
    msg.setDestination(46544U);
    msg.setDestinationEntity(51U);
    msg.op = 162U;
    msg.snapshot.assign("GIFDDXLVNFDMB");
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 2708678898U;
    tmp_msg_0.destination.assign("WFMAEJDWRKAXHIZCXWVXSEUHOJDUKVAHY");
    tmp_msg_0.timeout = 53988U;
    const char tmp_tmp_msg_0_0[] = {-34, -69, 124, 117, 30, 48, -107, 126, 23, 17, -106, 18, 89, -124, -101, 13};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.621808762111);
    msg.setSource(48570U);
    msg.setSourceEntity(194U);
    msg.setDestination(31032U);
    msg.setDestinationEntity(137U);
    msg.op = 51U;
    msg.name.assign("TGRLVJMSCMJYUAMRUBENPEFUGTJCMWIJLMOOHMCUNFBZLYYEBXAKOORIYXEHWCWJUWSEOSBVKFVPJJZDRKUXVRLSXLPERBWGELKPYRWNRFMCQFYYZWOIAIECPQGHZKNBKYVDHTUWXWZTLQXBTFPBSFQZKLAXOXPCYMIIQLYTESTASGNZFVUCAPRHITZDOAHNDGSIQNUIH");

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
    msg.setTimeStamp(0.749029437274);
    msg.setSource(45527U);
    msg.setSourceEntity(25U);
    msg.setDestination(8869U);
    msg.setDestinationEntity(249U);
    msg.op = 221U;
    msg.name.assign("EKXXEIRBJLUHNKSYEQJKMSKSVAYBHLXTLLSLRHCYWBPYCDHIJQRVDVTZKXFHQOJEXKDNERHIFNDCIRJLJQSNFITIZACUKLFWHVOBLNZYBJUYQDFEPRRVPSGNUISYAQWTPOVDSMMPJVPCYGWEJRZPUYOKQSTAEUVFAFBGHQUHGDKONXTGZDHBUPCAGXMXWCRNWVZOAOZW");

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
    msg.setTimeStamp(0.045426587946);
    msg.setSource(27720U);
    msg.setSourceEntity(72U);
    msg.setDestination(209U);
    msg.setDestinationEntity(117U);
    msg.op = 51U;
    msg.name.assign("VODYDBYJGEDCCSZICFOXOWAWISNIXTRWUFPZBORSLHPLJMUYJTSFCAUNHNEOJDRBOKBEHVGJMUSQ");

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
    msg.setTimeStamp(0.828128673329);
    msg.setSource(41608U);
    msg.setSourceEntity(102U);
    msg.setDestination(6900U);
    msg.setDestinationEntity(167U);
    msg.type = 254U;
    msg.htime = 0.642140660177;
    msg.context.assign("DLPBOKONTRUXGJRPMVEKKMDCRDQUGLHNEFGSBASFMWGPNQSZBPXYZM");
    msg.text.assign("FLLUNDZVPRVWNNUYPPCAEWFHHRVQGDEXYANOGRBHOLNZZTGKPDKWIMUPKXWCTHXFUWVOKZSGBIRICADZJOSWIXKLIAGUCB");

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
    msg.setTimeStamp(0.790894546268);
    msg.setSource(35199U);
    msg.setSourceEntity(151U);
    msg.setDestination(63949U);
    msg.setDestinationEntity(146U);
    msg.type = 3U;
    msg.htime = 0.422549077204;
    msg.context.assign("XHIKJYDQDEZBVADOZEWRUBVEAZYFHQDQMYHZWHPXMLWOPUXTURDLPKSMAAHJUMBPHTNJJSCJFUBPXOCVBBSQSCDFOXQPVOCKEGIGFGWEWVCWMGKLLSVPCIYNTWUFKUXDJKYHYFDWCOBFNSAIIRLR");
    msg.text.assign("LUETNHAZFAGVEIUSXDYQRLHCXIJSSKFPZNETINYCNFYLMEUMODUHLXIADENAGCUSFXZTPSSXNOGWGPCIEMPDQYWVFJTYSZGIQFMQKAGCZBOPKDLV");

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
    msg.setTimeStamp(0.624095436911);
    msg.setSource(26218U);
    msg.setSourceEntity(59U);
    msg.setDestination(32349U);
    msg.setDestinationEntity(156U);
    msg.type = 17U;
    msg.htime = 0.60630881086;
    msg.context.assign("CBUXYGXTZOAWBJXVKZTMAGTLBIVAPGEUSNAUXLPYKVOSQSROOUCBRDRQTDAHDMETMJCCUJOTAVPWSKNEDRMJKSGQSBIKJTPOSMWYHDFBBNZSEUMMEPWKYWCAZCVIQGLJBTQOIXH");
    msg.text.assign("HKMGCRUHZYPDWEHZKGTNDMOVJ");

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
    msg.setTimeStamp(0.524131535669);
    msg.setSource(55820U);
    msg.setSourceEntity(152U);
    msg.setDestination(28219U);
    msg.setDestinationEntity(63U);
    msg.command = 49U;
    msg.htime = 0.20521657772;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 249U;
    tmp_msg_0.htime = 0.246511921298;
    tmp_msg_0.context.assign("PIYHNVXYAANESEVCBPBBZWMQHRWMEDFVECVOTBPSHGYWIQURNBCXJGZZILGGBFQUBKNRKXWPZHBOAEYHBJUFGFPZDQSARYFNAUCBDKSXJQMGPXPUFWH");
    tmp_msg_0.text.assign("TXGAUHDODKNZXILTUPYKCHQRAPYKWKEUDHTYQSVIXZCHEBKQIFLXWSFBGMOBMGWYKNYVTTOIRARFBDLGSLO");
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
    msg.setTimeStamp(0.939493321219);
    msg.setSource(58146U);
    msg.setSourceEntity(29U);
    msg.setDestination(14389U);
    msg.setDestinationEntity(198U);
    msg.command = 92U;
    msg.htime = 0.497300200439;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 57U;
    tmp_msg_0.htime = 0.626872460553;
    tmp_msg_0.context.assign("VNVYDIKRCBLCPYSKNNROBPCTYQBXUUFZGMJKZRZMSXBVKPGWTNGLQXOZAUVKUCYUQDABXKAAJDVNCOYLQKDUDPM");
    tmp_msg_0.text.assign("EDPDPCDAGKSUPVBKCCFETRBFDGDMEGVOPZZSQXWKBFFRPILJIBQBMNJPCLZSSSXXOXETWYYHGBNDBGIAOPPCNQJHCLQFMCIX");
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
    msg.setTimeStamp(0.140226292961);
    msg.setSource(26567U);
    msg.setSourceEntity(120U);
    msg.setDestination(55783U);
    msg.setDestinationEntity(244U);
    msg.command = 115U;
    msg.htime = 0.824910158985;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 139U;
    tmp_msg_0.htime = 0.51256298968;
    tmp_msg_0.context.assign("TBMTAOMHBCYKMXJFXHKXKGMKJKEULAGWTNRT");
    tmp_msg_0.text.assign("XYJWFKATZMAKXJVRYDBEECVHUFNKJCNZFIWTLFCPARXZTBDEMDVPNIVULQIGYHLSLUDDUEED");
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
    msg.setTimeStamp(0.403188454847);
    msg.setSource(25179U);
    msg.setSourceEntity(107U);
    msg.setDestination(42206U);
    msg.setDestinationEntity(117U);
    msg.op = 65U;
    msg.file.assign("CWZEONRPFVGWWFZLMNXMTIPWUJMGJBAQDNDPMBKPNHANCLSBBKCSRSVNQMBKIQLURAQUYRFXLUKMQSGJJYHZNENFGGKPXIADDAFXCR");

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
    msg.setTimeStamp(0.933618472737);
    msg.setSource(47439U);
    msg.setSourceEntity(58U);
    msg.setDestination(6138U);
    msg.setDestinationEntity(21U);
    msg.op = 99U;
    msg.file.assign("BQBRBJMRGEIHPUEAOZARWEAGWCOOXTKVINHNGZFKYWHVLWSNXCZMRSZHYKXHSVUPPQTKZWEVOETT");

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
    msg.setTimeStamp(0.657028830586);
    msg.setSource(50009U);
    msg.setSourceEntity(228U);
    msg.setDestination(33107U);
    msg.setDestinationEntity(41U);
    msg.op = 43U;
    msg.file.assign("NXXYOCTWVACLFKPOJGSVNZQPACGMHHIDAQDQASGLHUZQCJYWCGNITWSURJEOVBOFEQZCXYMOMQTBFLSQFCCBXNJFSF");

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
    msg.setTimeStamp(0.15185409873);
    msg.setSource(52356U);
    msg.setSourceEntity(169U);
    msg.setDestination(37181U);
    msg.setDestinationEntity(248U);
    msg.op = 117U;
    msg.clock = 0.600641053022;
    msg.tz = -118;

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
    msg.setTimeStamp(0.240718972985);
    msg.setSource(60205U);
    msg.setSourceEntity(102U);
    msg.setDestination(39360U);
    msg.setDestinationEntity(198U);
    msg.op = 163U;
    msg.clock = 0.109174458157;
    msg.tz = -58;

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
    msg.setTimeStamp(0.845812359076);
    msg.setSource(38540U);
    msg.setSourceEntity(113U);
    msg.setDestination(26333U);
    msg.setDestinationEntity(12U);
    msg.op = 87U;
    msg.clock = 0.906517628214;
    msg.tz = 17;

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
    msg.setTimeStamp(0.827769320552);
    msg.setSource(43188U);
    msg.setSourceEntity(76U);
    msg.setDestination(8512U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.36473546906);
    msg.setSource(62878U);
    msg.setSourceEntity(154U);
    msg.setDestination(12111U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.310835205994);
    msg.setSource(39487U);
    msg.setSourceEntity(54U);
    msg.setDestination(37751U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.816539354174);
    msg.setSource(28199U);
    msg.setSourceEntity(238U);
    msg.setDestination(48990U);
    msg.setDestinationEntity(78U);
    msg.sys_name.assign("SETLPTHXIUTRBHPHHEAACCGIJRGCSLUKMJCV");
    msg.sys_type = 79U;
    msg.owner = 4065U;
    msg.lat = 0.387204329344;
    msg.lon = 0.805570063522;
    msg.height = 0.680815993958;
    msg.services.assign("INIHQRUILGTUSDREEBROEHCMZWIBTAAHOWSLZRPAXUXCYJMOYBUYAFKSVXRXFWAWBCSFJFZILPIDGMYKTHPKDQMRWLTGBWSOXODONKIQOGVNZRMQ");

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
    msg.setTimeStamp(0.52110157992);
    msg.setSource(33281U);
    msg.setSourceEntity(172U);
    msg.setDestination(53437U);
    msg.setDestinationEntity(165U);
    msg.sys_name.assign("SIACLKXIVHYKMCBEQUAFRIHMRYXICZGWDOLZRYWHPPCYQDFVQVHDPWKNNFOOBHIGVDBFCYWHMKDZIUQFLXAJTSWMKBUOTGSVTSSRWNVDYYNTAPPMCIMOIJCUEVWDZOSCWVKEOLKALTXEWOFEUENHWPUHGXMHXGEQJRSLXZKOXNRQVPIKXNTPZFDLUJBDCRZRSJQYGA");
    msg.sys_type = 193U;
    msg.owner = 41407U;
    msg.lat = 0.521695347417;
    msg.lon = 0.840148683211;
    msg.height = 0.450393300051;
    msg.services.assign("ICYXKBXVSRXMGJVHNHRULFZXADWBIBAEVXYPIVIPMZHGWACLARANLDQRIEYSLUYMBSFKGCBWVJWOHMUTQQUPHCGCYHQEANVXHGJREWBZGKYTQBOZQDHPXRTZDYDLWPSTKNZKLSKRDMYDBAJEQCEXJRBUSUFGZJNMLIDEQFOKTJEKFWZAOVOACUMSFJESPHTVXPCPWKFAIDGOMXRNFIYSFGBONLKPMGPTENULQ");

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
    msg.setTimeStamp(0.0541441815043);
    msg.setSource(38431U);
    msg.setSourceEntity(145U);
    msg.setDestination(40384U);
    msg.setDestinationEntity(29U);
    msg.sys_name.assign("LTMYADYBKWLMBHVWEIYGPYZDUKKECAZVJVCJRGFPHMSBLSRPOJOANOCLKGEMLVPEZJYWGAYNRIWLIMDDHMXQBZNBRXXAVUJNJCCHQN");
    msg.sys_type = 208U;
    msg.owner = 46608U;
    msg.lat = 0.703752697133;
    msg.lon = 0.583100064771;
    msg.height = 0.696086675482;
    msg.services.assign("DZRGFDREFNRMEHGWIPZQPHFMJQFDXSACLZYKTPRVZYTJMKBWVEROCBOFVIPHLGPUIMJCKJDXYNAFAJARCKTMOQAAUDSIWAKHVJDMQVNWQTPPUXPWVEITNBYRNWUGVUFCNEUSHLQCIWCKJSLMJ");

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
    msg.setTimeStamp(0.703121599882);
    msg.setSource(44443U);
    msg.setSourceEntity(78U);
    msg.setDestination(47871U);
    msg.setDestinationEntity(94U);
    msg.service.assign("VXUQHHVWCWFAFTVJZPXAUBTWNDYGMBIJBAYQEUEKJGGFJUQYHPRLJSROLEKFSYSCOMLELKTEKXGLWEPQZCVVJPZIQIEHHZZDOSMRHPCIVZJWPBTAAGDXIZZYOKTNVTFRFFONTTDUXBSVUDJWSOXZBRDMOMLGYSKMFLNAXJCMLWCSNUCBIGJNQKKRDVUHGAYSIMHHERDUTGPCEQIQCFLRZAXQVYXDWT");
    msg.service_type = 47U;

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
    msg.setTimeStamp(0.119502751419);
    msg.setSource(61324U);
    msg.setSourceEntity(161U);
    msg.setDestination(4792U);
    msg.setDestinationEntity(18U);
    msg.service.assign("PJXBFYCUYKPCPZKFIVAMOAAPJBKKWSZUHFSOSHMHOHFZZGJCVLKUETPLVXBWPVLSFCXLGZNRXHSFQUDTIVFJWARBSMEPEWIYLQOMLWKNRAQSACBILUFRKNT");
    msg.service_type = 90U;

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
    msg.setTimeStamp(0.0444340973889);
    msg.setSource(35365U);
    msg.setSourceEntity(7U);
    msg.setDestination(57053U);
    msg.setDestinationEntity(221U);
    msg.service.assign("VASOEQIGSHDXKIBWCUFHKPDPWDHNLMGVLRGYVTGMIAZAIJXCAODVAAZBVNWRYQSKWECBFZAGLCQPPFTOMBHMNNRTRZRMIYHNFFRDCFNQIWQOEFJUKMHHJYXYZZJRGGPOCNI");
    msg.service_type = 173U;

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
    msg.setTimeStamp(0.836583759526);
    msg.setSource(39064U);
    msg.setSourceEntity(124U);
    msg.setDestination(360U);
    msg.setDestinationEntity(109U);
    msg.value = 0.292435611053;

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
    msg.setTimeStamp(0.264255549998);
    msg.setSource(39824U);
    msg.setSourceEntity(249U);
    msg.setDestination(16011U);
    msg.setDestinationEntity(207U);
    msg.value = 0.0740319376038;

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
    msg.setTimeStamp(0.250487260872);
    msg.setSource(55234U);
    msg.setSourceEntity(107U);
    msg.setDestination(41763U);
    msg.setDestinationEntity(35U);
    msg.value = 0.271865778219;

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
    msg.setTimeStamp(0.430680288242);
    msg.setSource(9761U);
    msg.setSourceEntity(178U);
    msg.setDestination(12299U);
    msg.setDestinationEntity(183U);
    msg.value = 0.862201530118;

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
    msg.setTimeStamp(0.0436444026031);
    msg.setSource(16365U);
    msg.setSourceEntity(61U);
    msg.setDestination(60217U);
    msg.setDestinationEntity(163U);
    msg.value = 0.808431810338;

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
    msg.setTimeStamp(0.0415755277037);
    msg.setSource(59729U);
    msg.setSourceEntity(143U);
    msg.setDestination(25761U);
    msg.setDestinationEntity(104U);
    msg.value = 0.988119259869;

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
    msg.setTimeStamp(0.252570100537);
    msg.setSource(20053U);
    msg.setSourceEntity(112U);
    msg.setDestination(29473U);
    msg.setDestinationEntity(207U);
    msg.value = 0.237412740836;

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
    msg.setTimeStamp(0.101985513056);
    msg.setSource(3127U);
    msg.setSourceEntity(207U);
    msg.setDestination(23296U);
    msg.setDestinationEntity(224U);
    msg.value = 0.896618415268;

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
    msg.setTimeStamp(0.158832353977);
    msg.setSource(51535U);
    msg.setSourceEntity(91U);
    msg.setDestination(61832U);
    msg.setDestinationEntity(88U);
    msg.value = 0.237323048101;

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
    msg.setTimeStamp(0.412462210296);
    msg.setSource(15963U);
    msg.setSourceEntity(80U);
    msg.setDestination(53430U);
    msg.setDestinationEntity(8U);
    msg.number.assign("TSFXEEQMWLGVBYWVFWCUQDITDBPVRATKYGBUAFHGZLFEBVKYMQSTUBMMMNQZSNZEIAWOJXJZCSEQWSRYOYNSBYFKCEBFHGMEMYRXZKZAVLHRHVROOCKSMRIXJPATPHSEJDXSGQDWBQJYOHMBHAGKVAIGZOOUDPPIFXFDEATALNCNSLDUJGRVPCPRQUOYPZHXKVLIZCKUOPUTOCNYXDDVXIFKNJJNTZRDQWGTICPHKNM");
    msg.timeout = 12461U;
    msg.contents.assign("LYCKLAVUHYXYROPQJGHZQRDGFOOGHPCKETQWVNWMSXTBAYYVAZQPFTCIQOCEEBKXPWJXNNYPCRMANSRXLVHINUSYOIYIKHACFZEFRTYQZIHBAOJPUXRAXVMSZMBWAETQCBPOJFNGNHGLPARWVDHDBSZ");

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
    msg.setTimeStamp(0.695280764117);
    msg.setSource(13205U);
    msg.setSourceEntity(194U);
    msg.setDestination(63717U);
    msg.setDestinationEntity(60U);
    msg.number.assign("REHRAZZXIQYCDSIOKEIEEFMYUNNBFVFLGYDBBKIXMGGHACVZSUDYOEAQDPOUBNCUJYJMMEFVORGJHBWLUNYEIGSXAYHNBOSVPXLNNTIQAHMRXWPDJPLCLEHIUMTVTPGWFZATHRAALTPCZRVPTRLLFVKZ");
    msg.timeout = 51861U;
    msg.contents.assign("LBOUNAUXRBFCQUDZPSKZRHQTPVCCSAOTFKCSXLVSUJCMFFTTTDNLDXMMJPVPRZHPMCDYKHWXRFJTGHESBMQXNZXQONHNWDKOMYRNGUYKECUILVKXRBPJBEQAAUVEZQPJJDJINFGD");

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
    msg.setTimeStamp(0.977300329023);
    msg.setSource(42048U);
    msg.setSourceEntity(154U);
    msg.setDestination(40132U);
    msg.setDestinationEntity(49U);
    msg.number.assign("YRMHXMFYDWZCBFPNCGOBNFOTVUUETSSIBDEZIVPTGLQISZKGMRWYZBCVONEQIKTTCDEGTQPMKGSHNCHKIPWVFTZHOHZOROFZSTGWUACUGGDMYBDCWUKLZQKNPWAHIODNKPRPXUDYEEELLVJWFSLXRXVIEHZJYTDIHBFNAUJJCRYQAOYLSXQGNJSMVFLUAPXPKLUXBBJJRDYMJQQAUJJLHSBRMEWIF");
    msg.timeout = 52347U;
    msg.contents.assign("KQXPKRKQMVIPOTLAWUFOUZTKYWRIZPLDTLYIURWDASIDDXHSWVAFOXRCZZTUPBVVMEGRVQFJNNASKXBOZSPEXFMTJFHLUJPEISSCECWHKIWZSAHMMVESJMRBTMCODEWHFNZLYGBVRBYFPOJTMHLLFCTPONMYXAHNVGQDKBJBLIUZPAKHUYCGQEXGVMURXASQJJQPIYGJDNGBKATLNEDRFHO");

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
    msg.setTimeStamp(0.50799146948);
    msg.setSource(58969U);
    msg.setSourceEntity(193U);
    msg.setDestination(10226U);
    msg.setDestinationEntity(60U);
    msg.seq = 3049130084U;
    msg.destination.assign("FXJRFAGQBEFDAVLEFEEVCTJPKCVZVNJFELYDFITESKJWJTOGUJOBSXUHSKNCQUWGXYJLIZMJOYSWOEBDVYPBRYMOCSYBQLHMZGQCOABZITRDFLTKQMSLILDXHEPGIURDAXCKRXVQJDIFNLIUMHNSRTBVONRAMISZGXAZONSPOWBUXACZNZCTLQKCGVHYRWHHTUUUBGBEDPMHMZIPGKRNFJHWUYHACQMYASTWEVAXRQFWLDMNPNZODV");
    msg.timeout = 9204U;
    const char tmp_msg_0[] = {-17, -25, -66, 88, -90, -14, -114, 85, -53, 49, -30, 2, -82, 2, 28, -114, 20, 66, 104, -8, -8, -41, -26, -42, 70, 37, -12, 30, 21, 72, 39, -37, 41, -70, -47, -4, -107, 81, -82, -77, 21, 97, -94, 78, 31, 67, 5, -83, -78, -60, 109, -60, 64, -13, 33, 27, -114, 75, 30, -4, -35, 2, 17, -46, 91, -106, -127, 120, -20, -64, -102, 91, 2, 79, 28, -33, 96};
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
    msg.setTimeStamp(0.581959566934);
    msg.setSource(18516U);
    msg.setSourceEntity(187U);
    msg.setDestination(44737U);
    msg.setDestinationEntity(219U);
    msg.seq = 3918381073U;
    msg.destination.assign("EMSJZELABORVQHWPRUTODRYICAIURISDQYYEXVXEQBWDEMQSPCZHLBPQYZPCKFNZMWRFUAXGBTCTRIGETPINLCVYYHMFFYAGTWDBUBDRKVWXVHRUVZCDJIQHMQKAUWLIBNATYGJFQEIHJUQKEBHAZMKPZCFPNJOAFGQZIANOSEGCNJFIONDRMAXWKOWKGXPLGNOSLVHOESDLKLLGBTUFHDJVMGOXMSRSJXYYD");
    msg.timeout = 24074U;
    const char tmp_msg_0[] = {-22, 111, 52, 44, 63, -43, -9, -43, 118, -76, -104, -97, -55, -11, -85, 28, -63, -58, -32, 58, -17, -24, 2, 120, 75, -83, -83, -15, 63, 97, 31, 62, 6, 21, -57, 62, 115, 26, -46, 52, -47, -10, 15, 126, -25, 59, -121, 121, 77, 52, 33, -127, 88, 115, -119, -126, 1, 20, 45, -62, 112, 119, -91, -53, 49, 6, -8, 83, -23, -59, -89, -109, 95, 93, -11, -9, 108, 119, -76, -69, -43, 24, -64, -32, 66, -89, -4, 123, -16, -116, -1, 30, -37, 93, -69, 95, -6, -121, 21, -27, 84, 3, -90, 27, 112, 16, -17, -60, 31, 111, -61, 123, 17, 120, -91, 4, 23, -12, -39, 17, 34, 90, 2, 79, 89, 42, 114, -111, -118, -117, 94, -118, -99, -45, 14, -61, 94, -72, -88, -123, 6, -127, 103, -41, -53, -58, -106, 114, 115, -38, 90, -20, 6, -116, -112, -98};
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
    msg.setTimeStamp(0.454234200796);
    msg.setSource(60687U);
    msg.setSourceEntity(121U);
    msg.setDestination(19606U);
    msg.setDestinationEntity(156U);
    msg.seq = 2640371744U;
    msg.destination.assign("VJWSTOWSJSWWKALDQVGBMDZGDPOPNCPJAZVULCKFXGTIEPAURRYHDLQTRFOHJWQUVCVUHZKNTOSYJRBTJSZVHQEFJTFLLDXJKPAWMQEDIGCCOZFHSWGRAGUOMEWFRGGXDLGMUCUZHFKQNKKYRPCPQBHENSINMQYZLAXOPIKWXIEQPVYHWYLURECMZBFBUAOMIMIBAEXTXYDCKBAPIVDTQFBYNUZJCKFNNIGONMSTBTXIMEDHSERVVAYLBSZJYX");
    msg.timeout = 53062U;
    const char tmp_msg_0[] = {-61, 11, -91, -118, 5, 117, -76, 109, 104, -74, 99, -57, 59, -49, -90, -6, -57, -127, 92, 6, -41, -81, 48, -121, -8, -87, -5, -58, -75, 72, -89, 16, 48, 97, 24, 76, -33, -44, -59, -98, 42, -74, 5, -62, -8, -94, 20, -12, -68, -19, -114, -102, 19, 24, 80, -88, -107, -101, 91, -37, 12, -61, -81, 18, -114, 101, -128, -52, -125, -61, -24, -54, -3, -84, -29, -69, 47, -123, 94, -87, -45, -23, -21, -128, 58, -101, -25, -37, -7, -20, 32, -106, -32, 112, -69, -34, -114, -107, 58, 102, -45, -90, -54, -90, -52, 98, 120, -116, 55, -5, 85, 115, 25, 112, 24, -8, 66, 78, 118, 33, -95, -12, 93, 13, -18, -20, -68, -16, 11, 42, -120, 2, 76, -36, 106};
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
    msg.setTimeStamp(0.284492279653);
    msg.setSource(43018U);
    msg.setSourceEntity(138U);
    msg.setDestination(43743U);
    msg.setDestinationEntity(101U);
    msg.source.assign("AVCCVZCRAQGODWEUNLCQNHPDEDFCSNADRZSVTWCPGUFKYJYENVPGIKGFUFLXAQUBCAUQSV");
    const char tmp_msg_0[] = {125, 68, -117, 125, 8, 8, -36, -108, -17, -24, 69, 99, -38, -102, 18, 36, -22, 65, 80, 116, 39, -78, -17, -23, -23, -86, 7, -92, 13, -1, 99, 91, 115, -56, 110, -125, 22, 52, 37, -44, 70, -77, -51, -120, 124, 58, 40, 42, -112, -106, 110, -15, 58, 123, -2, 125, 105, 79, 26, -83, 123, 27, 1, -51, 14, -60, -35, 74, 68, 69, -93, -120, -80, -49, 65, 47, 54, 1, -22, 82, 20, 72, -30, 17, 45, 33, 88, -106, -96, 18, 48, -110, -63, -40, -73, -122, -124, 42, 55, 34, -117, -83, 12, 36, -110, 10, 81, -85, -80, -69, 71, -76, -61, -83, 102, -68, -124, -69, -117, -109, 38, 2, 31, 2, 10, -110, 0, -1, 44, 126, -38, 68, -56, 2, 118, -102, -82, 95, 6, -90, 20, 55, -38, -48, 64, -30, -59, 43, -58, -59, 59, 63, -39, -60, 27, -97, -87, -61, 100, -57, 22, 4, -120, -101, 0, -35, -82, 67, 36, -77, 64, -107, -73, -98, -40, 74, 8, 101, -114, -48, 49, 56, 67, 119, -64, -37, -115, 29, -124, -11, 77, 23, 121, -22, -34, -117, 51, 88, 20, 49, 106, 12, -114, 125, 105, -6, 90, -49, -51, 109, 64, -77, -99, 26, 98, 5, 3, 80, 58, 99, 7};
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
    msg.setTimeStamp(0.42712594566);
    msg.setSource(45489U);
    msg.setSourceEntity(38U);
    msg.setDestination(21749U);
    msg.setDestinationEntity(169U);
    msg.source.assign("BPGXEINGWMJLXVMBZJGIDBLJHCSRGLOMIDLXYCUAJDLAEERNXQLNGORQSIJTMUVNAXFWAGQQSICWTFFHAEYMAQFVMFMSUUHBVSHHDTRKPWIYRQJDJLDIGLKZTUKJCNCMHOADRSBPCOQVPPYAZENZKUONHXWMPXKWOVKTPYJPOIEWYXCVUJPSFGHCSQYTELZ");
    const char tmp_msg_0[] = {-17, 72, 40, 84, -17, 10, 92, -77, 40, -3, 99, -77, -5, -111, 26, 72, 22, -24, 18, 60, -17, -62, -82, -126, -73, 11, -20, -123, -77, 105, -28, 96, -6, 106, 93, 71, 99, -47, -19, 33, -26, -1, 63, 20, -85, -2, -126, 113, 14, 13, -106, -81, 61, -26, 39, -60, -121, -42, -35, 115, 53, 108, -35, 67, -54, 53, -10, -24, 80, -11, -39, -50, 1, 105, -4, -127, -75, -120, -120, -25};
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
    msg.setTimeStamp(0.427665598288);
    msg.setSource(57785U);
    msg.setSourceEntity(200U);
    msg.setDestination(36395U);
    msg.setDestinationEntity(253U);
    msg.source.assign("PXPLMDLDQETJUFZUBWGFNFIDWXWJEDDQYOITJMISUIEHOYOFIMVCFLBMAMNRHPGYLWJQAUWDSOYXYGCBTVWLQPJSZWTLOWRCFKCDBIFCPLEUZGEGZEJBEEGZOKWXKEQQLKCMBYGRCNZNJAXGHVZMANCSSQHIVYIJKSMSUXPXFLODSAHTDOHPCOPKXXQHTSUHBYUPVJTRKFGZKUHKEANMZBNTKIRUBLIQRRDYOPZR");
    const char tmp_msg_0[] = {119, 23, -88, -55, 99, -24, 94, -18, -70, 96, -93, -121, -83, 11, -33, -36, -91, 86, 93, 120, 125, -70, 41, 31, 56, -87, 77, -16, 112, 80, -124, -69, 114, -25, 24, -124, 57, 47, -97, 42, 115, -52, -31, -91, -43, -42, -38, 66, -30, -6, -107, 71, 53, 40, -18, -75, 5, 11, 126, 106, 48, 19, -120, -3, 125, -115, 2, 27, 18, -82, -42, -75, 83, 3, 61, 70, -57, 98, 104, -8, 75, 70, 77, -110, 36, 1, 78, 116, -109, 69, -122, -3, -67, -36, 89, 66, 81, 99, -117, -5, -120, 32, -31, -104, 110, -66, -112, -95, 91, -25, 82, -62, 40, -124, 57, -121, 30, -85, 67, 122, -101, -88, 101, -31, -62, -121, -125, -90, 1, 5, -23, -78, 25, -90, -9, 79, 10, -128, 120, 115, 54, 12, 12, 16, 23, -5, -37, 52, 58, -57, 20, -99, -113, -72, 113, 12, 118, 9, 43, 63, -111, -92, -17, -47, 108, -81, -89, -65, 17, 82, 35, 69, 66, 93, 10, -53, 123, 99, 29, -88, -28, 75, -66, -49, 3, -57, 105, -66, -43, 125, 13, -40, -49, 71, -99, 0, 42, 57, -72, 65, -76, 84, -87, -42, 40, -61, 63, -79, 58, 62, -95, -113, 48, -78, -36, -9, 122, 37, -70, 87, -44, 124, -65, -102, 24, 77};
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
    msg.setTimeStamp(0.664606465102);
    msg.setSource(52050U);
    msg.setSourceEntity(40U);
    msg.setDestination(7294U);
    msg.setDestinationEntity(124U);
    msg.seq = 2088388553U;
    msg.state = 157U;
    msg.error.assign("AHREVBMSYOPAHEGCRGSUSXCFMUCUHZKBJVOZKZJZPKJDPBZITIUVDCOYOQRONXTJWGPFIOSLBIIYNMISYQZQZFWZXJWWVXPYMAYAEHDLLRBTQDPVMVKMAGROSJHPYKQJCXDMNXGTSGUXAQNSCCQJPIBGAVENKPMYNIULPFUCISEWANEBQWTFDVNVJRXLWHHTQRHDTRKGUTOHKFNTNWJL");

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
    msg.setTimeStamp(0.244394164656);
    msg.setSource(3598U);
    msg.setSourceEntity(64U);
    msg.setDestination(35751U);
    msg.setDestinationEntity(103U);
    msg.seq = 4049663806U;
    msg.state = 45U;
    msg.error.assign("AADRPBYNMWHZEKNJAJCGMYXEESDDZMIBIUONPAAGLEFOCQCZROTYVFJFFIHSOQBVYAVPDGFQNHLRBQVQLUVQCZMPOOKIULVRURZTIREWHYLZKDYFBAJEVKGLSTYZPCBBRMXWKTAOWRE");

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
    msg.setTimeStamp(0.0832998641022);
    msg.setSource(40740U);
    msg.setSourceEntity(22U);
    msg.setDestination(22504U);
    msg.setDestinationEntity(130U);
    msg.seq = 577886244U;
    msg.state = 17U;
    msg.error.assign("JEYNRPAGOAOMOQELGMSESVXERFNQAMDEOEYOIOKKDVQHWBCQYKWLZRSCUUXTWKKLFZUVWNQNPNGIKDDHWSZRZJTTZBJYBBIKZJGLYHOITSFHYCMWHCDEACTQIGWWZMCBXFETPBXHBN");

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
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.500453004619);
    msg.setSource(23147U);
    msg.setSourceEntity(166U);
    msg.setDestination(32426U);
    msg.setDestinationEntity(49U);
    msg.origin.assign("EABCUESPOFPNJVNPSPVCSZTREKMSRZVWWNUBRLELODVHPIBHCJHFLDUKFROJKEKSCWABFHLFUYDTXGKVYXFORAXMNORVN");
    msg.htime = 0.63535599882;
    msg.lat = 0.580307353091;
    msg.lon = 0.581111943322;
    const char tmp_msg_0[] = {-14, -84, 57, -98, -16, -90, 7, 11, -116, 77, 93, 112, -34, 92, -40, -89, -17, -58, -15, 108, 61, -25, 105, -70, -43, 113, 76, 31, -85, -74, -48, 108, -9, 37, -105, -48, -96, -79, 50, -1, 100, 50, -121, -64, 16, 108, 20, 123, -6, 24, -93, 2, -101, 56, -52, 50, 97, 66, -110, -92, 90, -75, -76, 1, 18, 31, -106, -55, 108, -93, -59, -99, 105, -97, 91, -77, -82, 103, 83, 33, -28, -101, -80, 98};
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
    msg.setTimeStamp(0.146084587414);
    msg.setSource(44682U);
    msg.setSourceEntity(223U);
    msg.setDestination(20419U);
    msg.setDestinationEntity(173U);
    msg.origin.assign("BTUCLWTXOIQZBPEAUUVVNSYKRKMSAOOGQGIQHLRPNXYUEFLGJKEDMEVBPICVSAKPKSEFYCLAROWZOUHGDQJRXDQGOSRFCCTJVQXBLTUTAXFNURMMZHALWZJIIRGAH");
    msg.htime = 0.263959268558;
    msg.lat = 0.868028339755;
    msg.lon = 0.159878946225;
    const char tmp_msg_0[] = {22, -91, 44, 32, -40, -105, -31, -85, 90, -120, -20, 111, 67, -21, 80, -49, -128, 13, -82, 120, -11, 117, 54, -70, -28, -18, -47, 18, 45, -31, 30, 25, -106, 21, -126, -40, -109, 4, -69, -17, 1, -21, 5, 79, -59, -79, 93, -95, 12, -36, 78, 110, 2, 99, -100, 81, -112, 24, -12, 84, -45, 4, -17, -60, -104, -118, 125, 107, -46, 92, -110, 83, -107, 80, -110, 64, -93, 75, -116, -55, 94, 102, 83, 48, 12, 6, 0, -90, 29, -64, 123, 114, -111, -128, -11, 80, -64, -40, 105, -78, 34, -35, -110, 14, -63, 34, -52, -36, 14, 72, 9, 99, -72, 111, 54, -51, -16, -22, -18, 115, 1, 20, 105, 50, 100, 122, 93, -108, 27, 72, -92, -85, -5, 20, 102, -23, -57, 93, 77, 89, -15, 97, 65, 97, -91, -5, 48, -56, 52, -15, 89, -80, -13, -39, 117, 24, -103, 104, 70, -110, 14, 63, 79, -26, 21, -60, 104, 13, -110, 63, 1, -25, -81, 6, 61, 16, -70, 73, -25, -117, -122, -55, -48, 51, -72, -25};
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
    msg.setTimeStamp(0.890244475295);
    msg.setSource(23980U);
    msg.setSourceEntity(62U);
    msg.setDestination(51969U);
    msg.setDestinationEntity(102U);
    msg.origin.assign("MKUAEDPODOJEMWYZTVCSGBFMOYKWDLIZXLLWABHLICVKKJCSEQEYOJAWDRHODKGOLWBXXHDASVNELCGNXPIDRBMXVZMTAPRBZMHCGGGAFIJLJFELSEDNFEVCWVMFNXRQYRWEYBQDNOCPTYUXFDIPPHLUIIAFEWPSZLIHWTHTPVVISMCQUAVQSBUJHRIRAFFTKZTUQTTYWSUORNGGF");
    msg.htime = 0.347007702688;
    msg.lat = 0.109260347421;
    msg.lon = 0.633302628906;
    const char tmp_msg_0[] = {73, 15, 28, -57, -124, -105, 44, -125, -42, -110, 113, 7, 77, -37, -1, 54, 120, -43, 19, 96, -102, -71, 106, 64, 2, -70, 84, 2, -67, 23, -71, -124, 96, -75, -64, 106, 117, 103, 97, -101, -11, -97, -124, -121, -43, 103, -31, -26, 113, 6, 25, 112, 50, 105, -65, -93, 51, 84, 84, -11, -25, 44, -82, -83, 84, -33, 2, 32, -91, 14, 67, 55, 57, -30, 88, -22, -61, -89, 11, 112, -128, 76, 26, -81, 14, -45, -116, -69, 114, 85, -80, 66, -79, 24, 114, 2, 109, -22, 37, -51, 118, -83, 59, 115, -6, -116, -62, -117, -2, 104, -8, 21, 108, 88, 29, -62, -19, 125, 81, -16, 78, -109, -110, 30, 101, -96, 55, 78, -98, 48, -38};
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
    msg.setTimeStamp(0.617909503642);
    msg.setSource(17318U);
    msg.setSourceEntity(173U);
    msg.setDestination(54220U);
    msg.setDestinationEntity(162U);
    msg.req_id = 10006U;
    msg.destination.assign("CRVPENFAGRZQLMRRUOJETTWVJFEZUISKTNCHOEXTXAGXSCIMGXDYGGDVEDLSYVCNNKBEBXAQWISHAWCDZBP");
    const char tmp_msg_0[] = {-100, -23, 81, 125, -33, -8, -81, -50, 45, -79, 68, 122, 24, -117, 63, -51, 46, 108, 67, -103, 121, 69, 94, 20, 34, -5, -93, -90, 33, 77, 98, 37, 33};
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
    msg.setTimeStamp(0.10465854418);
    msg.setSource(1904U);
    msg.setSourceEntity(21U);
    msg.setDestination(40004U);
    msg.setDestinationEntity(32U);
    msg.req_id = 61306U;
    msg.destination.assign("MRMOMMPMLFUBJNPXZSGXYSDPIYDXNFUWBKMCWNTWGDUHCIOIFNZLBDHT");
    const char tmp_msg_0[] = {-1, -79, 57, 34, -66, 117, -24, 6, -99, 104, 116, 23, -60, 79, 117, 79, 78, 121, -18, -76, -57, 69, -13, -97, 94, 74, -41, 59, 57, -128, 56, -75, 91, 55, 101, -52, 114, -15, 8, -10, 74, 87, -29, 78, 30, 24, -80, -121, -32, 13, 56, 85, 39, -13, -74, -81, 5, -76, 51, -72, -76, -19, 63, -76, 58, 102, -81, -9, -100, 62, -48, 87, -87, -72, 125, 46, 5, 84, -124, 89, -111, 63, 106, 36, 112, 125, 61, -96, -79, 99, -63, 62, 101, -67, -122, 22, -15, 109, 48, 117, 64, 37, -46, -92, 109, -60, -87, 67, -62, 58, 110, -110, 30, -31, 66, -79, -19, -88, 21, 59, -117, -100, -104, -90, 118, 46, -11, 8, -92, 109, -123, -43, 18, 4, 28, -76, 6, -28, -127, -77, -52, 38, 112, 92, -45, 114, -83, 126, 92, 86, 101, -122, -19, -99, 7, -6, -105, -7, -14, -93, 111, -60, 125, 100, 19, 47, 78, -60, 123, 13, -127, 54, 64, 84, -9, -56, -13, -16, -1, 49, 78, 97, 54, -110, 114, 20, -124, 86, 37, 13, -49, -42, 94};
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
    msg.setTimeStamp(0.00732653684133);
    msg.setSource(40793U);
    msg.setSourceEntity(30U);
    msg.setDestination(48508U);
    msg.setDestinationEntity(117U);
    msg.req_id = 29003U;
    msg.destination.assign("AEGJPQNBKHFFBZLURVNLRXFTDBTUXSVBQUU");
    const char tmp_msg_0[] = {-19, -90, -127, 58, -81, -33, 80, -68, -76, -79, -62, -55, 39, 62, -63, 126, 33, 62, -128, 28, 97, 46, 63, -22, -6, -123, 94, -57};
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
    msg.setTimeStamp(0.450254255052);
    msg.setSource(42943U);
    msg.setSourceEntity(198U);
    msg.setDestination(45116U);
    msg.setDestinationEntity(236U);
    msg.req_id = 59312U;
    msg.status = 120U;
    msg.text.assign("WBMSIRQCWIXCDIOJIAGHADCJAYAYTOMOPNYVAWPKXLCNJZBAHOOHOWFSJTKXLDQRKPBGZFNXEEFXESVGVIYSBUXKKTJBAEHNYPXLMPSZXRFGNNGLYBKDUWJMHAEACVCNLPBSVYSUIVHFUNIQPFRZVCQNGJJGXSWVFTCRZLTLYEAUNQWOMZRUEQDLHPMOXTIHRQFTJODFUMRBTRZDZT");

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
    msg.setTimeStamp(0.339413668821);
    msg.setSource(46504U);
    msg.setSourceEntity(184U);
    msg.setDestination(9615U);
    msg.setDestinationEntity(86U);
    msg.req_id = 44347U;
    msg.status = 121U;
    msg.text.assign("ZJMXHJXLPRYAOKFBBVORGVDQYACWICSILOBMWHQOJVVPKPKYRVTIORKWYDMAWNLXMTLXZAAXXYOPQTTDHBWWHGNDOIFTDXUASUUMPJAKSSCHVMFSEIESOBEENYTUZCUHAMVYCGOZPNEREAEUHSGMKEIKYSQFEDZSLSHICUCCPXLRGTPFFPBFVZ");

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
    msg.setTimeStamp(0.380192014031);
    msg.setSource(38781U);
    msg.setSourceEntity(18U);
    msg.setDestination(43525U);
    msg.setDestinationEntity(242U);
    msg.req_id = 29915U;
    msg.status = 30U;
    msg.text.assign("KRCYYSRLDUPTJXGNFTOEQNCWCYUQOXAVONGUFWFXZBFRKXLQDHBSATWPWUYKPJEIKCKOIGLHAXFDRVULHZVOYBHBSMZTWLBGSLNWBWKTRMCOBDIMIJQASNCOCZZQILPAUAXSF");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.712787957123);
    msg.setSource(34797U);
    msg.setSourceEntity(87U);
    msg.setDestination(15285U);
    msg.setDestinationEntity(45U);
    msg.id = 220U;
    msg.range = 0.581960613985;

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
    msg.setTimeStamp(0.744109100571);
    msg.setSource(13030U);
    msg.setSourceEntity(60U);
    msg.setDestination(45850U);
    msg.setDestinationEntity(14U);
    msg.id = 46U;
    msg.range = 0.94810470499;

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
    msg.setTimeStamp(0.679015273079);
    msg.setSource(64985U);
    msg.setSourceEntity(217U);
    msg.setDestination(13847U);
    msg.setDestinationEntity(164U);
    msg.id = 110U;
    msg.range = 0.885786804833;

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
    msg.setTimeStamp(0.873062358651);
    msg.setSource(20585U);
    msg.setSourceEntity(56U);
    msg.setDestination(7414U);
    msg.setDestinationEntity(228U);
    msg.tx = 202U;
    msg.channel = 213U;
    msg.timer = 35713U;

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
    msg.setTimeStamp(0.331782024567);
    msg.setSource(18416U);
    msg.setSourceEntity(165U);
    msg.setDestination(4683U);
    msg.setDestinationEntity(163U);
    msg.tx = 226U;
    msg.channel = 75U;
    msg.timer = 21717U;

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
    msg.setTimeStamp(0.426412834046);
    msg.setSource(27503U);
    msg.setSourceEntity(214U);
    msg.setDestination(22399U);
    msg.setDestinationEntity(67U);
    msg.tx = 226U;
    msg.channel = 155U;
    msg.timer = 34020U;

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
    msg.setTimeStamp(0.577452630989);
    msg.setSource(16305U);
    msg.setSourceEntity(188U);
    msg.setDestination(25002U);
    msg.setDestinationEntity(133U);
    msg.beacon.assign("QSQFKBHVYSINKDBCDWJUMVODGALSRWLGZSUXWXTWCFJEFFDNNHPHWLMHQPCCOMPRGXUCQXIRWBODPLGYZNURZDLKUGOSDWIZYQ");
    msg.lat = 0.819869785477;
    msg.lon = 0.71184525817;
    msg.depth = 0.937199352605;
    msg.query_channel = 229U;
    msg.reply_channel = 58U;
    msg.transponder_delay = 19U;

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
    msg.setTimeStamp(0.429790085445);
    msg.setSource(22179U);
    msg.setSourceEntity(81U);
    msg.setDestination(8294U);
    msg.setDestinationEntity(169U);
    msg.beacon.assign("ERQNRBDNZLUMMTYGIIZDXYYXUXXVPOHHEARZKUTZSNKBDQZKGDATFDWGXDXERMEWZLCPIPLIXPBYMJHSWQMNCUGQJYOFZLSBRQDLCWCBMBUYFAKWRRFCTVPIXKPKKEKXNHVGTLYCBTYOFGQSWUWEGIFLJYISHBZFRZQSCOCWMPVFTGAHEUVKWVAIANFJJZTLLIMWKOHMJJURXSNQESNPQNFQJIA");
    msg.lat = 0.290373786584;
    msg.lon = 0.751884668253;
    msg.depth = 0.822259551863;
    msg.query_channel = 184U;
    msg.reply_channel = 80U;
    msg.transponder_delay = 200U;

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
    msg.setTimeStamp(0.258457328554);
    msg.setSource(55934U);
    msg.setSourceEntity(223U);
    msg.setDestination(19038U);
    msg.setDestinationEntity(227U);
    msg.beacon.assign("DYKYGNRYOXTUKSFXUIXHVKTUXJWLZFZFNIAGXOUVRBCRYEMSEQVIOIBUICWZJPBACHYM");
    msg.lat = 0.167452343513;
    msg.lon = 0.500825873485;
    msg.depth = 0.326587025669;
    msg.query_channel = 22U;
    msg.reply_channel = 199U;
    msg.transponder_delay = 181U;

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
    msg.setTimeStamp(0.378200999317);
    msg.setSource(22293U);
    msg.setSourceEntity(231U);
    msg.setDestination(59807U);
    msg.setDestinationEntity(45U);
    msg.op = 112U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NQJZVSOCHFCSMEKEKWQPUORQGIOKRVEICWLDWCTZBUKCAFIZJZTJEYWMWQXDYVQNVOYMOLLXSYGCZRDWOPMULRIURODLNDCXBEAXBBWVLKARTWPJALZDITMZSFS");
    tmp_msg_0.lat = 0.582283486734;
    tmp_msg_0.lon = 0.411212588939;
    tmp_msg_0.depth = 0.380589727986;
    tmp_msg_0.query_channel = 172U;
    tmp_msg_0.reply_channel = 53U;
    tmp_msg_0.transponder_delay = 232U;
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
    msg.setTimeStamp(0.541605965292);
    msg.setSource(43478U);
    msg.setSourceEntity(86U);
    msg.setDestination(11007U);
    msg.setDestinationEntity(241U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.813364179001);
    msg.setSource(18314U);
    msg.setSourceEntity(97U);
    msg.setDestination(18635U);
    msg.setDestinationEntity(46U);
    msg.op = 175U;

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
    msg.setTimeStamp(0.560106696567);
    msg.setSource(42303U);
    msg.setSourceEntity(4U);
    msg.setDestination(4531U);
    msg.setDestinationEntity(236U);
    msg.address = 125U;

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
    msg.setTimeStamp(0.911743644643);
    msg.setSource(60809U);
    msg.setSourceEntity(12U);
    msg.setDestination(2598U);
    msg.setDestinationEntity(188U);
    msg.address = 215U;

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
    msg.setTimeStamp(0.524261618533);
    msg.setSource(45287U);
    msg.setSourceEntity(98U);
    msg.setDestination(10083U);
    msg.setDestinationEntity(120U);
    msg.address = 31U;

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
    msg.setTimeStamp(0.238696688148);
    msg.setSource(29149U);
    msg.setSourceEntity(245U);
    msg.setDestination(57101U);
    msg.setDestinationEntity(199U);
    msg.address = 5U;
    msg.status = 55U;
    msg.range = 0.411169989431;

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
    msg.setTimeStamp(0.534223415175);
    msg.setSource(44911U);
    msg.setSourceEntity(68U);
    msg.setDestination(36787U);
    msg.setDestinationEntity(171U);
    msg.address = 235U;
    msg.status = 92U;
    msg.range = 0.0752360308453;

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
    msg.setTimeStamp(0.108664632099);
    msg.setSource(9850U);
    msg.setSourceEntity(211U);
    msg.setDestination(35336U);
    msg.setDestinationEntity(228U);
    msg.address = 132U;
    msg.status = 0U;
    msg.range = 0.078765856699;

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
    msg.setTimeStamp(0.579862828701);
    msg.setSource(58211U);
    msg.setSourceEntity(194U);
    msg.setDestination(9101U);
    msg.setDestinationEntity(21U);
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 174U;
    tmp_msg_0.mask = 3049655409U;
    tmp_msg_0.scope_ref = 0.799988060983;
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
    msg.setTimeStamp(0.913230609556);
    msg.setSource(17794U);
    msg.setSourceEntity(10U);
    msg.setDestination(26144U);
    msg.setDestinationEntity(83U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.779711138352;
    tmp_msg_0.speed_units = 151U;
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
    msg.setTimeStamp(0.704331254555);
    msg.setSource(47959U);
    msg.setSourceEntity(105U);
    msg.setDestination(17648U);
    msg.setDestinationEntity(12U);
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 175U;
    tmp_msg_0.value = 0.481229551675;
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
    msg.setTimeStamp(0.504295705916);
    msg.setSource(47873U);
    msg.setSourceEntity(55U);
    msg.setDestination(42493U);
    msg.setDestinationEntity(184U);
    msg.enable = 121U;

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
    msg.setTimeStamp(0.981346194905);
    msg.setSource(36820U);
    msg.setSourceEntity(40U);
    msg.setDestination(17446U);
    msg.setDestinationEntity(219U);
    msg.enable = 18U;

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
    msg.setTimeStamp(0.765892898199);
    msg.setSource(53569U);
    msg.setSourceEntity(55U);
    msg.setDestination(60616U);
    msg.setDestinationEntity(44U);
    msg.enable = 114U;

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
    msg.setTimeStamp(0.55897350551);
    msg.setSource(65193U);
    msg.setSourceEntity(199U);
    msg.setDestination(1580U);
    msg.setDestinationEntity(9U);
    msg.summary = 196U;
    msg.level = 76U;

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
    msg.setTimeStamp(0.122230181815);
    msg.setSource(12736U);
    msg.setSourceEntity(224U);
    msg.setDestination(62339U);
    msg.setDestinationEntity(115U);
    msg.summary = 122U;
    msg.level = 221U;

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
    msg.setTimeStamp(0.142618336775);
    msg.setSource(61202U);
    msg.setSourceEntity(78U);
    msg.setDestination(56083U);
    msg.setDestinationEntity(28U);
    msg.summary = 248U;
    msg.level = 170U;

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
    msg.setTimeStamp(0.966071993457);
    msg.setSource(43817U);
    msg.setSourceEntity(38U);
    msg.setDestination(31187U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.264721248052);
    msg.setSource(31464U);
    msg.setSourceEntity(151U);
    msg.setDestination(37213U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.894913584199);
    msg.setSource(25182U);
    msg.setSourceEntity(59U);
    msg.setDestination(40013U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.815620556489);
    msg.setSource(1618U);
    msg.setSourceEntity(216U);
    msg.setDestination(28458U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.740143953471);
    msg.setSource(32123U);
    msg.setSourceEntity(212U);
    msg.setDestination(7301U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.214787569456);
    msg.setSource(6247U);
    msg.setSourceEntity(178U);
    msg.setDestination(4196U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.967604506425);
    msg.setSource(37136U);
    msg.setSourceEntity(78U);
    msg.setDestination(4095U);
    msg.setDestinationEntity(32U);
    msg.op = 197U;
    msg.system.assign("KPIFUSMPXCIOMJSWLRDDXFGIBQOLJMQYXXNAFQSGVWAKMYIZTYHAEFYULPEWBGKUJCEHCOAZJDAVIXVKGEDO");
    msg.range = 0.308695211756;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.840599262461;
    tmp_msg_0.x = 0.123938375048;
    tmp_msg_0.y = 0.761031464507;
    tmp_msg_0.z = 0.0262046196091;
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
    msg.setTimeStamp(0.564912635495);
    msg.setSource(38612U);
    msg.setSourceEntity(198U);
    msg.setDestination(61369U);
    msg.setDestinationEntity(82U);
    msg.op = 229U;
    msg.system.assign("RROWARIQKDUN");
    msg.range = 0.567500466679;
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.251115180277);
    msg.setSource(17121U);
    msg.setSourceEntity(241U);
    msg.setDestination(13513U);
    msg.setDestinationEntity(149U);
    msg.op = 134U;
    msg.system.assign("XYMUZVBAODXZVBFOTGEUBUEXVHIRWCSRYFUFOWRYKAJHAZKDYTKZNHTNLOUJTOTWYPGBHPCBZDOLXULDSIVYEBHMWLIJVRSMSSJYJHQQMIFVCJLVPMNLYSWTGMAVAAXCDFUWCLYTOIBUEDIETYZAQXZZFUQQNTSCQLVVSIEBHXTXGIQWGNRKJ");
    msg.range = 0.692478211733;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48416U;
    tmp_msg_0.off_x = 0.263782401296;
    tmp_msg_0.off_y = 0.157701776489;
    tmp_msg_0.off_z = 0.679336267584;
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
    msg.setTimeStamp(0.202088521984);
    msg.setSource(28734U);
    msg.setSourceEntity(187U);
    msg.setDestination(20512U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.833163514317);
    msg.setSource(36190U);
    msg.setSourceEntity(129U);
    msg.setDestination(53107U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.246824913348);
    msg.setSource(35597U);
    msg.setSourceEntity(212U);
    msg.setDestination(29838U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.0864316063265);
    msg.setSource(36441U);
    msg.setSourceEntity(32U);
    msg.setDestination(63525U);
    msg.setDestinationEntity(5U);
    msg.list.assign("EBCSDREMTQSCLVGLXOARZUNDPQLGOFZSDBPRAQMXEIDRPHOPOUNWWOFEUXFZCHVYNJKNGMHJXKLGLSVIQWZILGSGHGCRPTZOAYBLJTHYHKLWOVIBEICNVFJCWQUMWZCLTICUERYJZQDFSBTVMTGBEVPAUMAPFXWNUQIYHYKBXKJOAIFHUJXFMTHKTDGWZRSAIGUBMXUYZTR");

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
    msg.setTimeStamp(0.237315993956);
    msg.setSource(37795U);
    msg.setSourceEntity(69U);
    msg.setDestination(54866U);
    msg.setDestinationEntity(217U);
    msg.list.assign("LKZMJFFUBIHTLAYTVGPPTJRBAZFHLGFASFKDECAPEOMCOANMXILAOBRVDFEXIOPURDDMUXDIGHCDLPEWXJZRWZNNCSQDYUSEEFPTHARJWYTKXXMBEMEHJHQRZNCKWMBVVDGWDKXPXFIWTFYOVQUQVKVILSYLXYJGRKEUOUZVGGLHWQLTUINYVOJSUDSHBBZMIPTCCAMQRIBUQCHYNWGRZYQKWSOKLSRJGQWZNAMNQBJITGCCJVSNTEBO");

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
    msg.setTimeStamp(0.621181872616);
    msg.setSource(51431U);
    msg.setSourceEntity(118U);
    msg.setDestination(42846U);
    msg.setDestinationEntity(42U);
    msg.list.assign("OOQHMVZHFFWJOLKVKGWKELBTINXUPDUBXNLLEDUKIWJHOWVNTJKNSHSJLTLXQGFFMD");

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
    msg.setTimeStamp(0.488575556112);
    msg.setSource(27488U);
    msg.setSourceEntity(97U);
    msg.setDestination(36295U);
    msg.setDestinationEntity(82U);
    msg.value = 25818;

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
    msg.setTimeStamp(0.46940906352);
    msg.setSource(51241U);
    msg.setSourceEntity(81U);
    msg.setDestination(62074U);
    msg.setDestinationEntity(114U);
    msg.value = -30925;

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
    msg.setTimeStamp(0.628190426902);
    msg.setSource(22328U);
    msg.setSourceEntity(22U);
    msg.setDestination(19986U);
    msg.setDestinationEntity(231U);
    msg.value = 15703;

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
    msg.setTimeStamp(0.727617007477);
    msg.setSource(58773U);
    msg.setSourceEntity(243U);
    msg.setDestination(8317U);
    msg.setDestinationEntity(111U);
    msg.value = 0.953288647547;

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
    msg.setTimeStamp(0.906027924051);
    msg.setSource(15055U);
    msg.setSourceEntity(226U);
    msg.setDestination(56480U);
    msg.setDestinationEntity(173U);
    msg.value = 0.365033786085;

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
    msg.setTimeStamp(0.125987855376);
    msg.setSource(40027U);
    msg.setSourceEntity(20U);
    msg.setDestination(32857U);
    msg.setDestinationEntity(252U);
    msg.value = 0.941723469845;

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
    msg.setTimeStamp(0.607426637138);
    msg.setSource(39708U);
    msg.setSourceEntity(210U);
    msg.setDestination(12554U);
    msg.setDestinationEntity(199U);
    msg.value = 0.875888696299;

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
    msg.setTimeStamp(0.879634345872);
    msg.setSource(1729U);
    msg.setSourceEntity(40U);
    msg.setDestination(20964U);
    msg.setDestinationEntity(151U);
    msg.value = 0.0914336443974;

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
    msg.setTimeStamp(0.992510991772);
    msg.setSource(20260U);
    msg.setSourceEntity(154U);
    msg.setDestination(61936U);
    msg.setDestinationEntity(42U);
    msg.value = 0.414140291591;

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
    msg.setTimeStamp(0.679463424878);
    msg.setSource(45211U);
    msg.setSourceEntity(107U);
    msg.setDestination(52225U);
    msg.setDestinationEntity(222U);
    msg.validity = 21811U;
    msg.type = 78U;
    msg.utc_year = 2199U;
    msg.utc_month = 199U;
    msg.utc_day = 40U;
    msg.utc_time = 0.835050231697;
    msg.lat = 0.101268520497;
    msg.lon = 0.588606546333;
    msg.height = 0.948517546725;
    msg.satellites = 133U;
    msg.cog = 0.0209890519433;
    msg.sog = 0.905214194294;
    msg.hdop = 0.507631465962;
    msg.vdop = 0.898147434978;
    msg.hacc = 0.705377909512;
    msg.vacc = 0.0667860247063;

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
    msg.setTimeStamp(0.489965637564);
    msg.setSource(60023U);
    msg.setSourceEntity(41U);
    msg.setDestination(34140U);
    msg.setDestinationEntity(50U);
    msg.validity = 63031U;
    msg.type = 142U;
    msg.utc_year = 63180U;
    msg.utc_month = 85U;
    msg.utc_day = 98U;
    msg.utc_time = 0.323175611217;
    msg.lat = 0.648623951672;
    msg.lon = 0.0479794978851;
    msg.height = 0.903074978001;
    msg.satellites = 44U;
    msg.cog = 0.0119683965415;
    msg.sog = 0.462134882165;
    msg.hdop = 0.339555980634;
    msg.vdop = 0.174496913193;
    msg.hacc = 0.651054744107;
    msg.vacc = 0.504792175247;

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
    msg.setTimeStamp(0.648989654373);
    msg.setSource(49543U);
    msg.setSourceEntity(159U);
    msg.setDestination(39403U);
    msg.setDestinationEntity(146U);
    msg.validity = 2873U;
    msg.type = 144U;
    msg.utc_year = 2008U;
    msg.utc_month = 131U;
    msg.utc_day = 78U;
    msg.utc_time = 0.307468881833;
    msg.lat = 0.720683015088;
    msg.lon = 0.126675355395;
    msg.height = 0.723022600016;
    msg.satellites = 250U;
    msg.cog = 0.0776160576754;
    msg.sog = 0.676291197591;
    msg.hdop = 0.481706369684;
    msg.vdop = 0.248224403065;
    msg.hacc = 0.885697006242;
    msg.vacc = 0.474302143164;

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
    msg.setTimeStamp(0.423655077868);
    msg.setSource(443U);
    msg.setSourceEntity(142U);
    msg.setDestination(24802U);
    msg.setDestinationEntity(235U);
    msg.time = 0.549599229229;
    msg.phi = 0.757035475946;
    msg.theta = 0.109559252688;
    msg.psi = 0.225820067841;
    msg.psi_magnetic = 0.615278339345;

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
    msg.setTimeStamp(0.134319687004);
    msg.setSource(34908U);
    msg.setSourceEntity(101U);
    msg.setDestination(3268U);
    msg.setDestinationEntity(148U);
    msg.time = 0.794233534677;
    msg.phi = 0.220063904824;
    msg.theta = 0.944704879341;
    msg.psi = 0.0225064791186;
    msg.psi_magnetic = 0.575280809708;

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
    msg.setTimeStamp(0.274994610016);
    msg.setSource(30615U);
    msg.setSourceEntity(108U);
    msg.setDestination(38417U);
    msg.setDestinationEntity(128U);
    msg.time = 0.821254980834;
    msg.phi = 0.845831938617;
    msg.theta = 0.708735830508;
    msg.psi = 0.712543329995;
    msg.psi_magnetic = 0.840643160672;

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
    msg.setTimeStamp(0.501801901377);
    msg.setSource(6957U);
    msg.setSourceEntity(127U);
    msg.setDestination(12448U);
    msg.setDestinationEntity(169U);
    msg.time = 0.186021865602;
    msg.x = 0.729267429878;
    msg.y = 0.19247535811;
    msg.z = 0.0286237885709;
    msg.timestep = 0.261592708044;

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
    msg.setTimeStamp(0.338298845105);
    msg.setSource(8708U);
    msg.setSourceEntity(2U);
    msg.setDestination(29678U);
    msg.setDestinationEntity(153U);
    msg.time = 0.17339890406;
    msg.x = 0.0714533825507;
    msg.y = 0.887940993943;
    msg.z = 0.971568436095;
    msg.timestep = 0.430480291344;

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
    msg.setTimeStamp(0.96271824637);
    msg.setSource(60242U);
    msg.setSourceEntity(247U);
    msg.setDestination(29535U);
    msg.setDestinationEntity(74U);
    msg.time = 0.788797780748;
    msg.x = 0.369435032437;
    msg.y = 0.469242015811;
    msg.z = 0.267477969874;
    msg.timestep = 0.00882203998568;

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
    msg.setTimeStamp(0.699927324108);
    msg.setSource(31748U);
    msg.setSourceEntity(132U);
    msg.setDestination(24433U);
    msg.setDestinationEntity(207U);
    msg.time = 0.285352100287;
    msg.x = 0.561139174559;
    msg.y = 0.195237427219;
    msg.z = 0.0659829589427;

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
    msg.setTimeStamp(0.620927765179);
    msg.setSource(65461U);
    msg.setSourceEntity(169U);
    msg.setDestination(6341U);
    msg.setDestinationEntity(79U);
    msg.time = 0.0614595201498;
    msg.x = 0.83303169995;
    msg.y = 0.484448833418;
    msg.z = 0.432883989587;

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
    msg.setTimeStamp(0.397160811572);
    msg.setSource(51281U);
    msg.setSourceEntity(101U);
    msg.setDestination(43370U);
    msg.setDestinationEntity(199U);
    msg.time = 0.129631000979;
    msg.x = 0.623901552766;
    msg.y = 0.938171354105;
    msg.z = 0.0527462542886;

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
    msg.setTimeStamp(0.99676895623);
    msg.setSource(54465U);
    msg.setSourceEntity(43U);
    msg.setDestination(32515U);
    msg.setDestinationEntity(61U);
    msg.time = 0.0244120971564;
    msg.x = 0.280697480911;
    msg.y = 0.880729422851;
    msg.z = 0.715400362388;

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
    msg.setTimeStamp(0.50425550482);
    msg.setSource(27694U);
    msg.setSourceEntity(202U);
    msg.setDestination(62855U);
    msg.setDestinationEntity(157U);
    msg.time = 0.276138757901;
    msg.x = 0.868785691357;
    msg.y = 0.0796276534246;
    msg.z = 0.27778568629;

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
    msg.setTimeStamp(0.99720684614);
    msg.setSource(15147U);
    msg.setSourceEntity(218U);
    msg.setDestination(4791U);
    msg.setDestinationEntity(112U);
    msg.time = 0.604015525894;
    msg.x = 0.5716618191;
    msg.y = 0.798269620395;
    msg.z = 0.122101125807;

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
    msg.setTimeStamp(0.301430782055);
    msg.setSource(50326U);
    msg.setSourceEntity(96U);
    msg.setDestination(41931U);
    msg.setDestinationEntity(90U);
    msg.time = 0.786533485284;
    msg.x = 0.0111086835488;
    msg.y = 0.592708729034;
    msg.z = 0.101057469731;

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
    msg.setTimeStamp(0.33406422259);
    msg.setSource(32169U);
    msg.setSourceEntity(62U);
    msg.setDestination(2526U);
    msg.setDestinationEntity(47U);
    msg.time = 0.98429508426;
    msg.x = 0.218383500572;
    msg.y = 0.131862157664;
    msg.z = 0.975963367604;

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
    msg.setTimeStamp(0.0950572735989);
    msg.setSource(9252U);
    msg.setSourceEntity(7U);
    msg.setDestination(43784U);
    msg.setDestinationEntity(222U);
    msg.time = 0.940962897811;
    msg.x = 0.130628280749;
    msg.y = 0.391319688164;
    msg.z = 0.891396155219;

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
    msg.setTimeStamp(0.0259142826533);
    msg.setSource(2251U);
    msg.setSourceEntity(186U);
    msg.setDestination(59058U);
    msg.setDestinationEntity(122U);
    msg.validity = 246U;
    msg.x = 0.898283842316;
    msg.y = 0.399387295742;
    msg.z = 0.531464927415;

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
    msg.setTimeStamp(0.452620721233);
    msg.setSource(11546U);
    msg.setSourceEntity(233U);
    msg.setDestination(9092U);
    msg.setDestinationEntity(244U);
    msg.validity = 5U;
    msg.x = 0.110567056391;
    msg.y = 0.0478266351828;
    msg.z = 0.490753122535;

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
    msg.setTimeStamp(0.624736693756);
    msg.setSource(20266U);
    msg.setSourceEntity(172U);
    msg.setDestination(16294U);
    msg.setDestinationEntity(174U);
    msg.validity = 132U;
    msg.x = 0.785636475109;
    msg.y = 0.108741297664;
    msg.z = 0.869721451147;

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
    msg.setTimeStamp(0.818583690002);
    msg.setSource(12630U);
    msg.setSourceEntity(149U);
    msg.setDestination(36593U);
    msg.setDestinationEntity(3U);
    msg.validity = 58U;
    msg.x = 0.82682933529;
    msg.y = 0.108696323661;
    msg.z = 0.509039707759;

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
    msg.setTimeStamp(0.165597059196);
    msg.setSource(55190U);
    msg.setSourceEntity(23U);
    msg.setDestination(26707U);
    msg.setDestinationEntity(61U);
    msg.validity = 184U;
    msg.x = 0.107105926076;
    msg.y = 0.68926424395;
    msg.z = 0.159603634425;

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
    msg.setTimeStamp(0.593338422525);
    msg.setSource(46253U);
    msg.setSourceEntity(216U);
    msg.setDestination(12198U);
    msg.setDestinationEntity(107U);
    msg.validity = 65U;
    msg.x = 0.589385989867;
    msg.y = 0.753366794723;
    msg.z = 0.0779053521146;

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
    msg.setTimeStamp(0.199691030324);
    msg.setSource(38793U);
    msg.setSourceEntity(41U);
    msg.setDestination(41228U);
    msg.setDestinationEntity(121U);
    msg.time = 0.0863082046238;
    msg.x = 0.0114070269748;
    msg.y = 0.280684581218;
    msg.z = 0.637294064312;

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
    msg.setTimeStamp(0.843913136931);
    msg.setSource(36827U);
    msg.setSourceEntity(125U);
    msg.setDestination(38058U);
    msg.setDestinationEntity(64U);
    msg.time = 0.700992319314;
    msg.x = 0.741110031522;
    msg.y = 0.980765502085;
    msg.z = 0.512155836994;

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
    msg.setTimeStamp(0.718127531751);
    msg.setSource(38887U);
    msg.setSourceEntity(143U);
    msg.setDestination(22504U);
    msg.setDestinationEntity(25U);
    msg.time = 0.827785091891;
    msg.x = 0.296889991788;
    msg.y = 0.170918018645;
    msg.z = 0.974511140455;

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
    msg.setTimeStamp(0.185854937815);
    msg.setSource(60879U);
    msg.setSourceEntity(192U);
    msg.setDestination(13124U);
    msg.setDestinationEntity(148U);
    msg.validity = 249U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.225777173451;
    tmp_msg_0.beam_height = 0.891145699858;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.0857069804189;

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
    msg.setTimeStamp(0.544681094276);
    msg.setSource(37562U);
    msg.setSourceEntity(254U);
    msg.setDestination(56247U);
    msg.setDestinationEntity(49U);
    msg.validity = 118U;
    msg.value = 0.173329011772;

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
    msg.setTimeStamp(0.350224436708);
    msg.setSource(10016U);
    msg.setSourceEntity(7U);
    msg.setDestination(5686U);
    msg.setDestinationEntity(6U);
    msg.validity = 154U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.767812637441;
    tmp_msg_0.y = 0.57009197562;
    tmp_msg_0.z = 0.357352997754;
    tmp_msg_0.phi = 0.235639953788;
    tmp_msg_0.theta = 0.649874371034;
    tmp_msg_0.psi = 0.689849413794;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.0759178861591;

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
    msg.setTimeStamp(0.642208341989);
    msg.setSource(11053U);
    msg.setSourceEntity(57U);
    msg.setDestination(30285U);
    msg.setDestinationEntity(118U);
    msg.value = 0.164537765592;

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
    msg.setTimeStamp(0.222885739547);
    msg.setSource(52531U);
    msg.setSourceEntity(128U);
    msg.setDestination(18945U);
    msg.setDestinationEntity(189U);
    msg.value = 0.908080771822;

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
    msg.setTimeStamp(0.0170629932924);
    msg.setSource(796U);
    msg.setSourceEntity(165U);
    msg.setDestination(62202U);
    msg.setDestinationEntity(36U);
    msg.value = 0.178994888427;

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
    msg.setTimeStamp(0.26438737823);
    msg.setSource(10559U);
    msg.setSourceEntity(59U);
    msg.setDestination(57326U);
    msg.setDestinationEntity(89U);
    msg.value = 0.79568131594;

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
    msg.setTimeStamp(0.623379386149);
    msg.setSource(35366U);
    msg.setSourceEntity(171U);
    msg.setDestination(21125U);
    msg.setDestinationEntity(193U);
    msg.value = 0.436788833114;

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
    msg.setTimeStamp(0.20371485934);
    msg.setSource(34050U);
    msg.setSourceEntity(182U);
    msg.setDestination(44263U);
    msg.setDestinationEntity(122U);
    msg.value = 0.259323616722;

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
    msg.setTimeStamp(0.206610352975);
    msg.setSource(34125U);
    msg.setSourceEntity(91U);
    msg.setDestination(7145U);
    msg.setDestinationEntity(201U);
    msg.value = 0.873844842947;

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
    msg.setTimeStamp(0.483035107853);
    msg.setSource(44053U);
    msg.setSourceEntity(211U);
    msg.setDestination(48373U);
    msg.setDestinationEntity(136U);
    msg.value = 0.604617292795;

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
    msg.setTimeStamp(0.388090889073);
    msg.setSource(58821U);
    msg.setSourceEntity(86U);
    msg.setDestination(14118U);
    msg.setDestinationEntity(21U);
    msg.value = 0.121880139425;

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
    msg.setTimeStamp(0.356544181346);
    msg.setSource(10107U);
    msg.setSourceEntity(225U);
    msg.setDestination(46446U);
    msg.setDestinationEntity(196U);
    msg.value = 0.35424311265;

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
    msg.setTimeStamp(0.0757733757542);
    msg.setSource(58545U);
    msg.setSourceEntity(160U);
    msg.setDestination(54151U);
    msg.setDestinationEntity(15U);
    msg.value = 0.568996272145;

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
    msg.setTimeStamp(0.054681760067);
    msg.setSource(55162U);
    msg.setSourceEntity(29U);
    msg.setDestination(50782U);
    msg.setDestinationEntity(29U);
    msg.value = 0.736200143606;

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
    msg.setTimeStamp(0.69339038867);
    msg.setSource(47554U);
    msg.setSourceEntity(245U);
    msg.setDestination(12908U);
    msg.setDestinationEntity(12U);
    msg.value = 0.425025476451;

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
    msg.setTimeStamp(0.358435534669);
    msg.setSource(43235U);
    msg.setSourceEntity(4U);
    msg.setDestination(54684U);
    msg.setDestinationEntity(162U);
    msg.value = 0.443415736679;

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
    msg.setTimeStamp(0.504608387771);
    msg.setSource(1730U);
    msg.setSourceEntity(230U);
    msg.setDestination(51619U);
    msg.setDestinationEntity(215U);
    msg.value = 0.110692460235;

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
    msg.setTimeStamp(0.579860600719);
    msg.setSource(16851U);
    msg.setSourceEntity(207U);
    msg.setDestination(5276U);
    msg.setDestinationEntity(182U);
    msg.value = 0.571812963902;

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
    msg.setTimeStamp(0.473686234099);
    msg.setSource(58098U);
    msg.setSourceEntity(76U);
    msg.setDestination(27241U);
    msg.setDestinationEntity(243U);
    msg.value = 0.907595658762;

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
    msg.setTimeStamp(0.885976258569);
    msg.setSource(61393U);
    msg.setSourceEntity(225U);
    msg.setDestination(43949U);
    msg.setDestinationEntity(98U);
    msg.value = 0.774673124319;

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
    msg.setTimeStamp(0.623068065419);
    msg.setSource(45617U);
    msg.setSourceEntity(253U);
    msg.setDestination(56250U);
    msg.setDestinationEntity(5U);
    msg.value = 0.917841125068;

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
    msg.setTimeStamp(0.74008212498);
    msg.setSource(8286U);
    msg.setSourceEntity(94U);
    msg.setDestination(38689U);
    msg.setDestinationEntity(25U);
    msg.value = 0.197726565884;

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
    msg.setTimeStamp(0.619126803838);
    msg.setSource(2670U);
    msg.setSourceEntity(35U);
    msg.setDestination(19748U);
    msg.setDestinationEntity(157U);
    msg.value = 0.261498030022;

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
    msg.setTimeStamp(0.940473987915);
    msg.setSource(61184U);
    msg.setSourceEntity(76U);
    msg.setDestination(41903U);
    msg.setDestinationEntity(79U);
    msg.value = 0.684385487894;

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
    msg.setTimeStamp(0.168798504456);
    msg.setSource(9311U);
    msg.setSourceEntity(70U);
    msg.setDestination(21043U);
    msg.setDestinationEntity(197U);
    msg.value = 0.944295094297;

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
    msg.setTimeStamp(0.360533195703);
    msg.setSource(35422U);
    msg.setSourceEntity(76U);
    msg.setDestination(4924U);
    msg.setDestinationEntity(70U);
    msg.value = 0.990252889094;

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
    msg.setTimeStamp(0.2244431151);
    msg.setSource(62114U);
    msg.setSourceEntity(240U);
    msg.setDestination(58850U);
    msg.setDestinationEntity(182U);
    msg.direction = 0.115608727746;
    msg.speed = 0.336209700346;

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
    msg.setTimeStamp(0.170237823164);
    msg.setSource(8688U);
    msg.setSourceEntity(5U);
    msg.setDestination(7728U);
    msg.setDestinationEntity(51U);
    msg.direction = 0.175227076879;
    msg.speed = 0.212469188623;

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
    msg.setTimeStamp(0.303479810578);
    msg.setSource(17749U);
    msg.setSourceEntity(29U);
    msg.setDestination(31861U);
    msg.setDestinationEntity(73U);
    msg.direction = 0.546108091527;
    msg.speed = 0.699322149562;

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
    msg.setTimeStamp(0.218821241234);
    msg.setSource(16569U);
    msg.setSourceEntity(112U);
    msg.setDestination(54889U);
    msg.setDestinationEntity(101U);
    msg.value = 0.526833320175;

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
    msg.setTimeStamp(0.621675475621);
    msg.setSource(60918U);
    msg.setSourceEntity(73U);
    msg.setDestination(37600U);
    msg.setDestinationEntity(155U);
    msg.value = 0.119574503995;

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
    msg.setTimeStamp(0.675279052871);
    msg.setSource(13968U);
    msg.setSourceEntity(149U);
    msg.setDestination(46763U);
    msg.setDestinationEntity(210U);
    msg.value = 0.543936172325;

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
    msg.setTimeStamp(0.932169066628);
    msg.setSource(29390U);
    msg.setSourceEntity(139U);
    msg.setDestination(28330U);
    msg.setDestinationEntity(149U);
    msg.value.assign("ILKTUJHOIRCRHCSGBOAQOLAEOHJGFEKZJQDLOZDYDAFKDSBCCVLEHNIATQIWHSWMUGUUTZFBKINCXTMEGPYDNSUQSBGPJEYUJBIMZZFLEUDEBQNVCESHBLAMZJUJGXRLAQEWRAZVVKOOOMRJQMQAQTTUKA");

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
    msg.setTimeStamp(0.69946292604);
    msg.setSource(56508U);
    msg.setSourceEntity(170U);
    msg.setDestination(39681U);
    msg.setDestinationEntity(86U);
    msg.value.assign("OACNECEVPXWNEWKJNAUEFJFXTGDBQGWVTUGUZBRLXMSSAVDPORXIBOTIBCKM");

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
    msg.setTimeStamp(0.504196796996);
    msg.setSource(35051U);
    msg.setSourceEntity(46U);
    msg.setDestination(19892U);
    msg.setDestinationEntity(82U);
    msg.value.assign("XSFLFWKUTHQHPQNASJDDAAGQLYDKNZOWBQBNSXWWRJWUMUJLNUEQCNTUWIADGMPZOOMHDQOZIOLURSKAIOKDJYOGPFHWCUJDBVYNBJZCEFTFRMKBMICNIGAHUHEVMJEFARLTGDGWIPIYCEKPAFOYDZCZYQSMZRRFBCFEQEPYCNEJXRHZSXXTYQKLYGATKPRGVHXNIWZOSJMTCLBXFHNVHEMCTJAUUKBOWXIQRXYMGEVPLRIK");

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
    msg.setTimeStamp(0.623629173813);
    msg.setSource(26146U);
    msg.setSourceEntity(234U);
    msg.setDestination(32209U);
    msg.setDestinationEntity(123U);
    const char tmp_msg_0[] = {83, 32, -95, -107, 32, 0, 44, -126, -55, -128, -111, -113, -70, 26, -128, -7, -55, -119, -100, -46, -113, -29, 81};
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
    msg.setTimeStamp(0.590173869548);
    msg.setSource(42655U);
    msg.setSourceEntity(252U);
    msg.setDestination(65053U);
    msg.setDestinationEntity(102U);
    const char tmp_msg_0[] = {109, -44, 82, -44, -76, -82, -91, -16, -11, -33, 115, -85, -101, 91, -93, -107, 13, 97, 126, 40, 26, -112, 117, -36, -104, -99, -123, -86, 13, -98, -51, 52, -57, 37, -6, 35, 40, -87, -81, -34, -41, 59, 74, -30, -34, -97, -120, 111, 23, -55, 56, 36, -27, 44, 0, -58, -83, -18, -113, 104, -94, 114, 31, -87, -125, 104, -106, 26, -112, -15, 31, 105, 56, -41, 68, 82, -128, -117, -63, 48, 23};
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
    msg.setTimeStamp(0.488192918327);
    msg.setSource(7769U);
    msg.setSourceEntity(235U);
    msg.setDestination(12831U);
    msg.setDestinationEntity(153U);
    const char tmp_msg_0[] = {-119, -123, -91, -62, -50, -103, 106, 48, 116, -105, -69, -76, -95, 107, -114, 103, -61, 91, -85, -40, -103, -26, -4, -95, 89, -13, 124, 22, 16, -41, 39, -24, 108, -64, -63, -96, -120, 116, 14, 57, -107, 101, -22, -9, -39, -98, -16, -90, 56, -51, -76, -61, -28, 86, 53, -77, 45, 119, 81, -66, -88, -123, -126, -14, 80, 1, -4, -122, 33, 37, -103, 37, -102, 76, 19, -43, 63, -13, -74, 123, 9, 106, -116, -13, 31, 45, -2, 0, 75, 88, -78, -120, 67, -14, 43, -34, -23, 62, -55, 109, -108, -23, -96, -122, 72, 109, 32, -96, 61, 49, -110, 52, -6, -16, 121, -98, -43, -107, 80, -78, 18, 4, 111, -64, 37, -21, 7, 22, -39, -104, 92, -64, -70, 17, 105, -107, 119, 57, 80, -54, 115, 44, -59, -87, -125, 16, 46, -110, -85, 4, 67, 43, 51, 83, 75, 2, 114, 17, -115, 113, 87, 29, 120, -30, 35, 20, 75, 51, 24, 81, -34, -123, -27, -49, -50, 53, -25, -71, -13, -91, 105, -128, 5, 125, -94, 87, -8};
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
    msg.setTimeStamp(0.308890826593);
    msg.setSource(22527U);
    msg.setSourceEntity(57U);
    msg.setDestination(64308U);
    msg.setDestinationEntity(46U);
    msg.frequency = 3320635743U;
    msg.min_range = 37729U;
    msg.max_range = 23670U;

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
    msg.setTimeStamp(0.945591742004);
    msg.setSource(43520U);
    msg.setSourceEntity(72U);
    msg.setDestination(44034U);
    msg.setDestinationEntity(223U);
    msg.frequency = 3002710399U;
    msg.min_range = 9400U;
    msg.max_range = 19827U;

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
    msg.setTimeStamp(0.619196380055);
    msg.setSource(45711U);
    msg.setSourceEntity(230U);
    msg.setDestination(18925U);
    msg.setDestinationEntity(39U);
    msg.frequency = 2135789533U;
    msg.min_range = 26284U;
    msg.max_range = 58907U;

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
    msg.setTimeStamp(0.384061498608);
    msg.setSource(27558U);
    msg.setSourceEntity(95U);
    msg.setDestination(53621U);
    msg.setDestinationEntity(183U);
    msg.type = 239U;
    msg.frequency = 1022268071U;
    msg.min_range = 42389U;
    msg.max_range = 43476U;
    msg.bits_per_point = 36U;
    msg.scale_factor = 0.805477496938;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.840495032257;
    tmp_msg_0.beam_height = 0.374761267533;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-66, -88, 109, 71, 63, -83, 93, -5, 0, -107, -74, -119, -127, -1, 18, 20, -86, 11, -119, 121, -25, 123, 126, 61, -102, 80, -26, -31, 95, 117, 103, 27, 101, 74, -24, -13, -90, -56, 41, -7, -70, -88, -15, -5, 48, -100, 28, 109, -125, 94, -100, 113, -117, 58, -91, -2, 67, -84, 126, 44, 82, 50, 81, -94, -22, -11, 90, -76, 2, 119, 0, -120, -22, 120, 4, 111, 87, -7, -2, -13, -84, 68, 88, -119, -78, -101, -30, 90, -16, 92, 120, -42, -37, 121, -25, -32, -82, -19, -56, 101, -110, -94, -5, -113, 5, 81, -89, 81, 90, -108, 64, -4, -127, -126, 37, 44, 123, 72, 100, 27, 6, -41, -6, 5, -105, 115, 44, -14, -17, -126, 90, 3, 120, -110, -38, 23, 23, -18, 45, 92, -108, 84, -37, 107, -60, 124, -5, -54, 55, 33, 125};
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
    msg.setTimeStamp(0.499815923265);
    msg.setSource(37093U);
    msg.setSourceEntity(14U);
    msg.setDestination(5539U);
    msg.setDestinationEntity(107U);
    msg.type = 51U;
    msg.frequency = 513085169U;
    msg.min_range = 44380U;
    msg.max_range = 54769U;
    msg.bits_per_point = 76U;
    msg.scale_factor = 0.542678706198;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.552707304233;
    tmp_msg_0.beam_height = 0.994001388384;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {30, -99, -53, -38, 11, -110, 102, 59, -1, -26, 85, 78, 8, 90, -62, 70, 37, -104, 113, 100, 63, -23, -54, 123, 123, 89, -68, 90, -45, -82, -46, -89, -71, 37, -31, -49, 53, -87, 31, 111, -83, 76, 12, -125, 26, -70, 100, -93, 8, -24, 55, 59, -43, 32, 74, 94, 1, 36, -97, 2, -65, 40, -80, -89, -75, 68};
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
    msg.setTimeStamp(0.971993411558);
    msg.setSource(48870U);
    msg.setSourceEntity(94U);
    msg.setDestination(60486U);
    msg.setDestinationEntity(147U);
    msg.type = 60U;
    msg.frequency = 1871358887U;
    msg.min_range = 64395U;
    msg.max_range = 11897U;
    msg.bits_per_point = 42U;
    msg.scale_factor = 0.0678480769457;
    const char tmp_msg_0[] = {-44, 108, 85, 101, 73, 58, 23, 50, 62, -57, -39, 65, -58, 121, -82, 81, -90, -123, 23, 99, -62, -59, -69, -20, 60, -74, -125, 7, 83, 40, -116, -12, -71, 17, 9, 81, 122, 0, 86, -85, -49, -101, -23, -82, -37, -65, 36, -68, 87, -127, 111, -47, 69, -89, -73, 114, -90, 108, -43, 104, 26, 9, -103, -65, -106, 80, -128, -97, 89, -82, -34, 104, 37, -87, -7, 107, 35, 71, -31, 51, 22, 61, -125, 46, 104};
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
    msg.setTimeStamp(0.0460905104339);
    msg.setSource(20675U);
    msg.setSourceEntity(146U);
    msg.setDestination(48598U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.692473977756);
    msg.setSource(17698U);
    msg.setSourceEntity(136U);
    msg.setDestination(58980U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.783552004046);
    msg.setSource(1073U);
    msg.setSourceEntity(250U);
    msg.setDestination(45941U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.756389557698);
    msg.setSource(58405U);
    msg.setSourceEntity(11U);
    msg.setDestination(68U);
    msg.setDestinationEntity(160U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.410691715271);
    msg.setSource(1234U);
    msg.setSourceEntity(12U);
    msg.setDestination(55860U);
    msg.setDestinationEntity(65U);
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
    msg.setTimeStamp(0.441376587996);
    msg.setSource(22759U);
    msg.setSourceEntity(117U);
    msg.setDestination(45001U);
    msg.setDestinationEntity(56U);
    msg.op = 208U;

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
    msg.setTimeStamp(0.886192379446);
    msg.setSource(3742U);
    msg.setSourceEntity(195U);
    msg.setDestination(25285U);
    msg.setDestinationEntity(127U);
    msg.value = 0.7950282653;
    msg.confidence = 0.700094417017;
    msg.opmodes.assign("YHBRKJTRZPZEXFGUIAJJNXLETLTDQXSGNWBCTVBMLZACGFHXUKKOFANKMMDQNSXHFUBLZELLYPWFCVMNLUGOEUSSQDCWTPQMRAAGKORXKDPFSGZSAMIVIIAEQTMXCQCTVEOPFUZLWBLQOUIISGYSSBREGDFZUGNNODFOXPHDAWRWWNVWJTYQGEAJKKYNYTQICEWJRCDUVVZQNIYCKAVXUESJKIDYZO");

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
    msg.setTimeStamp(0.375478557707);
    msg.setSource(15217U);
    msg.setSourceEntity(49U);
    msg.setDestination(60534U);
    msg.setDestinationEntity(208U);
    msg.value = 0.70333750655;
    msg.confidence = 0.100876348667;
    msg.opmodes.assign("LFVIPTPSZYHNCNPEZAPQROIKPTAGJCXHQMHDNMRMXICXODYOYZRKZSUMUQMCINSHWUHGIBGLGTXRXXTDBRMGPWYZMFYEVLOHEXARCAQNDLUNKTNCCLGFOVVPWCIJOFVQFIKYIXDERTENMMEEXSPAKXYSGAEJ");

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
    msg.setTimeStamp(0.0478316599749);
    msg.setSource(60463U);
    msg.setSourceEntity(132U);
    msg.setDestination(33262U);
    msg.setDestinationEntity(160U);
    msg.value = 0.624301564566;
    msg.confidence = 0.761635760355;
    msg.opmodes.assign("HYCIOELNGETAFSCXHWDYZKQKLLJJXFBIXTUAUEXMUFTSTVQDJSYSVPVCIRNZDOANZJRIOEYMTWQLSRWHUFBBAIXYJTEQGBDMVOGSQBQZSFTMVINCJKOVPJGJEUKKCTGPGHRFDIGDPWVUJAMCSEORENPBQLWSLGZYCGQCZBCPHHLHEWGSLPZTFIARIMNFDOK");

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
    msg.setTimeStamp(0.0744565916837);
    msg.setSource(5343U);
    msg.setSourceEntity(127U);
    msg.setDestination(62749U);
    msg.setDestinationEntity(113U);
    msg.itow = 3631416630U;
    msg.lat = 0.422487667397;
    msg.lon = 0.799903868257;
    msg.height_ell = 0.15851671354;
    msg.height_sea = 0.786211709302;
    msg.hacc = 0.537753446873;
    msg.vacc = 0.456019276331;
    msg.vel_n = 0.595279340807;
    msg.vel_e = 0.567605956977;
    msg.vel_d = 0.512004360252;
    msg.speed = 0.872971866534;
    msg.gspeed = 0.152981126543;
    msg.heading = 0.130336507192;
    msg.sacc = 0.781759816649;
    msg.cacc = 0.584825002179;

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
    msg.setTimeStamp(0.0279799281462);
    msg.setSource(3901U);
    msg.setSourceEntity(218U);
    msg.setDestination(15932U);
    msg.setDestinationEntity(76U);
    msg.itow = 2814454768U;
    msg.lat = 0.652562748067;
    msg.lon = 0.0329196986543;
    msg.height_ell = 0.838167951377;
    msg.height_sea = 0.778956824006;
    msg.hacc = 0.449359140765;
    msg.vacc = 0.722606511562;
    msg.vel_n = 0.655630884954;
    msg.vel_e = 0.640946578173;
    msg.vel_d = 0.561450395611;
    msg.speed = 0.705413182882;
    msg.gspeed = 0.0126442278669;
    msg.heading = 0.927372711486;
    msg.sacc = 0.534887112596;
    msg.cacc = 0.321792311257;

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
    msg.setTimeStamp(0.896329253088);
    msg.setSource(22076U);
    msg.setSourceEntity(118U);
    msg.setDestination(17465U);
    msg.setDestinationEntity(178U);
    msg.itow = 1308703412U;
    msg.lat = 0.698481968294;
    msg.lon = 0.162899575634;
    msg.height_ell = 0.608606600072;
    msg.height_sea = 0.546028899065;
    msg.hacc = 0.84562407885;
    msg.vacc = 0.944692383731;
    msg.vel_n = 0.959894465211;
    msg.vel_e = 0.616417442344;
    msg.vel_d = 0.989205074444;
    msg.speed = 0.858981746049;
    msg.gspeed = 0.818522989234;
    msg.heading = 0.0379056760983;
    msg.sacc = 0.365340569723;
    msg.cacc = 0.801129763732;

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
    msg.setTimeStamp(0.729759597667);
    msg.setSource(3490U);
    msg.setSourceEntity(83U);
    msg.setDestination(10971U);
    msg.setDestinationEntity(202U);
    msg.id = 21U;
    msg.value = 0.627844041018;

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
    msg.setTimeStamp(0.842212160018);
    msg.setSource(57021U);
    msg.setSourceEntity(173U);
    msg.setDestination(44905U);
    msg.setDestinationEntity(18U);
    msg.id = 159U;
    msg.value = 0.137270035251;

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
    msg.setTimeStamp(0.884595806671);
    msg.setSource(17901U);
    msg.setSourceEntity(169U);
    msg.setDestination(2205U);
    msg.setDestinationEntity(30U);
    msg.id = 149U;
    msg.value = 0.643434588702;

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
    msg.setTimeStamp(0.756221190157);
    msg.setSource(5809U);
    msg.setSourceEntity(126U);
    msg.setDestination(18530U);
    msg.setDestinationEntity(221U);
    msg.x = 0.612824466683;
    msg.y = 0.430579130198;
    msg.z = 0.419106746484;
    msg.phi = 0.330813473836;
    msg.theta = 0.0996336322152;
    msg.psi = 0.878251340857;

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
    msg.setTimeStamp(0.0109419602997);
    msg.setSource(65313U);
    msg.setSourceEntity(81U);
    msg.setDestination(22181U);
    msg.setDestinationEntity(79U);
    msg.x = 0.881523495145;
    msg.y = 0.280325364253;
    msg.z = 0.555460362106;
    msg.phi = 0.740420504331;
    msg.theta = 0.701454871619;
    msg.psi = 0.146567121307;

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
    msg.setTimeStamp(0.778399852007);
    msg.setSource(60894U);
    msg.setSourceEntity(216U);
    msg.setDestination(51522U);
    msg.setDestinationEntity(147U);
    msg.x = 0.124772525036;
    msg.y = 0.640336071269;
    msg.z = 0.462157075621;
    msg.phi = 0.601391256606;
    msg.theta = 0.438400339413;
    msg.psi = 0.845694247455;

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
    msg.setTimeStamp(0.461788684447);
    msg.setSource(51673U);
    msg.setSourceEntity(88U);
    msg.setDestination(53694U);
    msg.setDestinationEntity(103U);
    msg.beam_width = 0.780222633432;
    msg.beam_height = 0.526227283076;

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
    msg.setTimeStamp(0.933865265877);
    msg.setSource(41585U);
    msg.setSourceEntity(98U);
    msg.setDestination(59754U);
    msg.setDestinationEntity(75U);
    msg.beam_width = 0.977327045759;
    msg.beam_height = 0.240793444571;

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
    msg.setTimeStamp(0.932583266209);
    msg.setSource(54935U);
    msg.setSourceEntity(181U);
    msg.setDestination(12380U);
    msg.setDestinationEntity(215U);
    msg.beam_width = 0.0750721093055;
    msg.beam_height = 0.816086847024;

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
    msg.setTimeStamp(0.512536351135);
    msg.setSource(61406U);
    msg.setSourceEntity(194U);
    msg.setDestination(1478U);
    msg.setDestinationEntity(168U);
    msg.id = 61U;
    msg.zoom = 151U;
    msg.action = 32U;

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
    msg.setTimeStamp(0.615047782144);
    msg.setSource(3884U);
    msg.setSourceEntity(146U);
    msg.setDestination(21855U);
    msg.setDestinationEntity(75U);
    msg.id = 198U;
    msg.zoom = 202U;
    msg.action = 210U;

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
    msg.setTimeStamp(0.972580488678);
    msg.setSource(56233U);
    msg.setSourceEntity(249U);
    msg.setDestination(23644U);
    msg.setDestinationEntity(235U);
    msg.id = 99U;
    msg.zoom = 132U;
    msg.action = 41U;

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
    msg.setTimeStamp(0.676486473595);
    msg.setSource(27459U);
    msg.setSourceEntity(121U);
    msg.setDestination(50534U);
    msg.setDestinationEntity(206U);
    msg.id = 177U;
    msg.value = 0.329525786893;

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
    msg.setTimeStamp(0.336619056701);
    msg.setSource(24095U);
    msg.setSourceEntity(172U);
    msg.setDestination(23142U);
    msg.setDestinationEntity(44U);
    msg.id = 28U;
    msg.value = 0.268565028255;

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
    msg.setTimeStamp(0.137558865145);
    msg.setSource(18634U);
    msg.setSourceEntity(152U);
    msg.setDestination(22308U);
    msg.setDestinationEntity(199U);
    msg.id = 118U;
    msg.value = 0.851996625403;

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
    msg.setTimeStamp(0.411058736395);
    msg.setSource(41020U);
    msg.setSourceEntity(164U);
    msg.setDestination(57596U);
    msg.setDestinationEntity(33U);
    msg.id = 68U;
    msg.value = 0.35191845269;

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
    msg.setTimeStamp(0.212341838903);
    msg.setSource(36258U);
    msg.setSourceEntity(56U);
    msg.setDestination(64162U);
    msg.setDestinationEntity(231U);
    msg.id = 231U;
    msg.value = 0.503586794714;

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
    msg.setTimeStamp(0.153437127237);
    msg.setSource(4424U);
    msg.setSourceEntity(192U);
    msg.setDestination(17107U);
    msg.setDestinationEntity(119U);
    msg.id = 63U;
    msg.value = 0.0718543138987;

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
    msg.setTimeStamp(0.3915098838);
    msg.setSource(4084U);
    msg.setSourceEntity(107U);
    msg.setDestination(6741U);
    msg.setDestinationEntity(147U);
    msg.id = 204U;
    msg.angle = 0.126663060873;

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
    msg.setTimeStamp(0.752085039592);
    msg.setSource(32461U);
    msg.setSourceEntity(236U);
    msg.setDestination(42440U);
    msg.setDestinationEntity(194U);
    msg.id = 245U;
    msg.angle = 0.792826309704;

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
    msg.setTimeStamp(0.889541752232);
    msg.setSource(21816U);
    msg.setSourceEntity(214U);
    msg.setDestination(21105U);
    msg.setDestinationEntity(228U);
    msg.id = 104U;
    msg.angle = 0.696207732939;

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
    msg.setTimeStamp(0.560793394113);
    msg.setSource(3726U);
    msg.setSourceEntity(201U);
    msg.setDestination(33402U);
    msg.setDestinationEntity(56U);
    msg.op = 237U;
    msg.actions.assign("SSSJBTAYNBJQVKFRCCYDWQQQNJHVGNFXYKANSDFTBJRYADPGEGUPPVWCZPELDJYBVCJUWTRMPXAXHSUCLIBPUFBMUMXLTMPJGOQDWYHZHAEKVFAZNFYLFHEGYGNRQTLBLIGEHKISPCXIDPWALKYXIEFZOTSYLJWUHGCIEJTBTSXWRXVODABVRKNDCOMQCIOMRGZFWQAMNRMZKKSQEMMXHLOPZUDZTNRZVKUQWHGKVOZHSBLOUXEIIOOUI");

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
    msg.setTimeStamp(0.37025631196);
    msg.setSource(15634U);
    msg.setSourceEntity(254U);
    msg.setDestination(11295U);
    msg.setDestinationEntity(72U);
    msg.op = 111U;
    msg.actions.assign("GPRSJHVEMGZYYXBYWCAVKREFUQWLUDASWMYXOTLDNSRONSQEKNBUASIYIUKROCEZTBJANHTOMKWCQGWRELEKOLBFJMJFLOKX");

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
    msg.setTimeStamp(0.604823745484);
    msg.setSource(18967U);
    msg.setSourceEntity(47U);
    msg.setDestination(45815U);
    msg.setDestinationEntity(145U);
    msg.op = 68U;
    msg.actions.assign("AVFXSOCCZQKFPNVTLFJRNIGAHZLLMXSALXATZNVHSXBOZPYEABUDFTXOYCILOLHGJEYWVUVQPCMKYIONNRRENUJHDHBIYFRSREIUJMSKFETSFOUBJQGJJHOLIPCHQFXSEWAMLGIROTYDUNBWVDYKDQXXSZPKHGYABXJUUKPIMWXKWPMGUELZJCMZDZWKQTQZPRESZVUAMEWKLHCJEFRTBCVCYWBMGCSAGG");

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
    msg.setTimeStamp(0.903850171133);
    msg.setSource(34564U);
    msg.setSourceEntity(208U);
    msg.setDestination(27286U);
    msg.setDestinationEntity(149U);
    msg.actions.assign("BONXRYCDBBVINEVFYGEMLNNZLWQIFOGZNWBWKMJKLRNCIVCUUXSJAEBWRUFSECATQGSDLAMOHIKGBBHUELSOIHFTWTYATAEVLPYRQXMTJLVADOFOQLDI");

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
    msg.setTimeStamp(0.81103818652);
    msg.setSource(47697U);
    msg.setSourceEntity(196U);
    msg.setDestination(45773U);
    msg.setDestinationEntity(218U);
    msg.actions.assign("IAXUKSHPQAHWOABWZBVPTMCJJVYDEAPMXNNQX");

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
    msg.setTimeStamp(0.207013049947);
    msg.setSource(63394U);
    msg.setSourceEntity(86U);
    msg.setDestination(32747U);
    msg.setDestinationEntity(108U);
    msg.actions.assign("KLBPCDNBOZXVIVKKVYMYGVCTDQMBIFAGLXSQFLSLPJ");

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
    msg.setTimeStamp(0.0412635132706);
    msg.setSource(53233U);
    msg.setSourceEntity(249U);
    msg.setDestination(36400U);
    msg.setDestinationEntity(227U);
    msg.button = 161U;
    msg.value = 97U;

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
    msg.setTimeStamp(0.942709895486);
    msg.setSource(32372U);
    msg.setSourceEntity(114U);
    msg.setDestination(19766U);
    msg.setDestinationEntity(48U);
    msg.button = 69U;
    msg.value = 171U;

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
    msg.setTimeStamp(0.442022693333);
    msg.setSource(5967U);
    msg.setSourceEntity(113U);
    msg.setDestination(32984U);
    msg.setDestinationEntity(3U);
    msg.button = 4U;
    msg.value = 49U;

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
    msg.setTimeStamp(0.71219545492);
    msg.setSource(804U);
    msg.setSourceEntity(95U);
    msg.setDestination(45191U);
    msg.setDestinationEntity(120U);
    msg.op = 199U;
    msg.text.assign("LJLHAXKNQZIIWPRFKKHMLZMGSPHOFVANXQQGGEICRARTEMPFYUPRWESBXCNBYDWFXDOICWRHQOLYFJZTJJSFFREYUUYIKDNQDGVWMNZLIDSUTHPWUBTRVEUWZSUZPDAWEMAZAFSCBGJWJEVKBFVGNEPMSHFSHCVCAJDENIOQMOSDJKNXQBXVTCBMANQCTEYNXYHXJXKIZW");

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
    msg.setTimeStamp(0.495722917485);
    msg.setSource(63705U);
    msg.setSourceEntity(21U);
    msg.setDestination(26313U);
    msg.setDestinationEntity(159U);
    msg.op = 163U;
    msg.text.assign("ZRZMAFOPYDNJKLMVKDKWMLGHBREGRFYWQOZEIDFCZENJBQPMNEICNVITQZXJNYCTLAEGYHJRUSJMJPHKQSXWZSQRJCGFYKTFBQWFVXBLHICUYKHLLLOATLSQWZAZDUVMDOOBAGYFKHXKSUEVJLUIXBCABFZTGRTIEERMEWDGWSDHNCVTXN");

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
    msg.setTimeStamp(0.336481058797);
    msg.setSource(38003U);
    msg.setSourceEntity(42U);
    msg.setDestination(10894U);
    msg.setDestinationEntity(253U);
    msg.op = 168U;
    msg.text.assign("DVMICCIGRRKUYSIPTBPUEPMFSFXWAVVZRSJXUOKBTNEDSHCDQXCGISBMJXNYLUXFOBKRYVNVLZXGYHEVZRCXFCNTTYALAXMHOQOOCUYMFWCEFCJDOOIJSAVTURDLNESGKZGHHNOLZWMTIQFNQLMWHJYHTWJJZEKDOSIQVZLBYAZWEQBFPIDRUARKQGMSXLNFPNGDMIMNRAKPAIRAQKLVHWBGFYJ");

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
    msg.setTimeStamp(0.939124074866);
    msg.setSource(52120U);
    msg.setSourceEntity(155U);
    msg.setDestination(51187U);
    msg.setDestinationEntity(184U);
    msg.op = 235U;
    msg.time_remain = 0.405247693797;
    msg.sched_time = 0.666670161005;

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
    msg.setTimeStamp(0.0125293325495);
    msg.setSource(33982U);
    msg.setSourceEntity(74U);
    msg.setDestination(27066U);
    msg.setDestinationEntity(184U);
    msg.op = 43U;
    msg.time_remain = 0.0438519109217;
    msg.sched_time = 0.703260565972;

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
    msg.setTimeStamp(0.281399906088);
    msg.setSource(63648U);
    msg.setSourceEntity(244U);
    msg.setDestination(15018U);
    msg.setDestinationEntity(170U);
    msg.op = 91U;
    msg.time_remain = 0.539114083182;
    msg.sched_time = 0.598794826781;

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
    msg.setTimeStamp(0.397611738242);
    msg.setSource(11424U);
    msg.setSourceEntity(165U);
    msg.setDestination(62785U);
    msg.setDestinationEntity(117U);
    msg.name.assign("ENHOJSMFCROGCETLYKPAFOHLRYCMONRUGSDMTJZPENVZTBXCMTLKZPQNITTLEPZTZXYVYFALPAEJWAWBRIGKLJPKYDUADJ");
    msg.op = 200U;
    msg.sched_time = 0.935246735982;

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
    msg.setTimeStamp(0.80640395658);
    msg.setSource(47208U);
    msg.setSourceEntity(21U);
    msg.setDestination(30384U);
    msg.setDestinationEntity(59U);
    msg.name.assign("URHNABKCQIJHOFMCOZDZABWRAZSTXHCQEBPNIVAPGWEFNQGKOBXJCWBISYDLFLZFCXOFAAYBJOOAQPOWZYFNPBCQGLTRIIATDKIJLDLUDEUQVVPNXMMMXOATTGRGCVYMDEMJFOVBKXVDQYUJFETRDWKNVHJCLXDS");
    msg.op = 235U;
    msg.sched_time = 0.938629266426;

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
    msg.setTimeStamp(0.545982248212);
    msg.setSource(53129U);
    msg.setSourceEntity(232U);
    msg.setDestination(31214U);
    msg.setDestinationEntity(66U);
    msg.name.assign("XVMPFUEGCHEPUZNRTPYGEZUOFFNJVSOZNYUTLKEKXJAIOAAAGJPQLPXVHNOTMEUPHYVOEKGLLBDKWBQJMRJOCUTDCWRSRDYAYDJTNSHOILKPAUVJABZLVKFXUDFDVNCHZKICICZQFGPKKISHNRL");
    msg.op = 130U;
    msg.sched_time = 0.812972431066;

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
    msg.setTimeStamp(0.0643177343506);
    msg.setSource(29035U);
    msg.setSourceEntity(23U);
    msg.setDestination(24324U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.80696861024);
    msg.setSource(1056U);
    msg.setSourceEntity(157U);
    msg.setDestination(18526U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.0776943023169);
    msg.setSource(24382U);
    msg.setSourceEntity(135U);
    msg.setDestination(53893U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.119178398252);
    msg.setSource(16238U);
    msg.setSourceEntity(188U);
    msg.setDestination(54187U);
    msg.setDestinationEntity(130U);
    msg.name.assign("TZCFYEAAQPLJZLFTCBTLMCQWFLNVBJQJGBDYYGZXFDQNAQEBICLVJIGKXPJMTIBRUKERLSTLZIJENSDYRBQHBXWUVAHEOATDMFGHSPMOPDRWUPFBGCWNHXHSUIIFORHJEVCVNPKGXHCGLWONVPOZAQWNARRGSIVSWYMKZOKXKXUKSPIBCWULZSDZTJILRNAEFOECYMEXUEQHPRXUKYTOHZJIBTZFYNCAGDXROQOUMMDKMSVQJDNFSD");
    msg.state = 48U;

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
    msg.setTimeStamp(0.828187367266);
    msg.setSource(37029U);
    msg.setSourceEntity(86U);
    msg.setDestination(3555U);
    msg.setDestinationEntity(76U);
    msg.name.assign("UUTZGBZLTCPBJVKUSAPHDJQWWVBMEYADIVZQZXPEWLIVDRCSMLICXFKMVSRRVFGTDDUYJISYBORQVOEEJONNXIGKZQGKTHTKQNYBRGWHTAGBPGIYODPYNNUXLKAODLPEWJIKPEOUHLCBTMIKJJTHVTRM");
    msg.state = 168U;

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
    msg.setTimeStamp(0.44206999798);
    msg.setSource(20810U);
    msg.setSourceEntity(72U);
    msg.setDestination(44961U);
    msg.setDestinationEntity(234U);
    msg.name.assign("YTYHRWFRQECWOEYHEVMUTFJXXCTDGVJQPJBSBMSJXDPVIKSZGUZNGLYVCRAEPXZMFAYFPGSGGXUBLZLFYCSBXRABSTNNHKRERMCAIKHZKDIMSADVGBIEJQGTGOHKLOANGNAIOBDTBHYLPUCMZJTBCWEBMQECFPXNAINLJKCIIDCNRQQXOOUDLOLPZUQTXZYKHLVDOLPWUWYFMQSYPTNNQHUQIFHIRKAWV");
    msg.state = 24U;

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
    msg.setTimeStamp(0.205701381721);
    msg.setSource(28411U);
    msg.setSourceEntity(16U);
    msg.setDestination(31018U);
    msg.setDestinationEntity(170U);
    msg.name.assign("XHWXEGVSOLEVDOJFHDQKUGFGNKWLWRIXZZFABULSHJMPRJRGLQEAEHICLDOJZWOVXOWMSQFEZTNCQLAGBHQSIQBCRTUUVZRSTPFTYJXWIOXPNODVRSKBKTIZSRPVPFBJNUJPXPAYYDVDIYRUKFSNPIICOISBCBQDIVELANKFDRCLXCGUMVHHZKYLWGHKJWBYJ");
    msg.value = 232U;

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
    msg.setTimeStamp(0.273296111363);
    msg.setSource(13666U);
    msg.setSourceEntity(10U);
    msg.setDestination(23356U);
    msg.setDestinationEntity(81U);
    msg.name.assign("WAGEGENWBFEYNUCLQVIOARYLDPOUNUCJSMJLZEPQRZBWWMZOVKYLTLWFOOECDSAGRXGWHAHKDLXKHJNORBAPKNINPOVQRTFGQMOUJQIUFMNIEEBHNAWSZVTSWTETTHJRSELGZWHSLMXHCBVRVKLSQSPXFMNCAPYFUUFCJBFZXKZ");
    msg.value = 46U;

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
    msg.setTimeStamp(0.179126041714);
    msg.setSource(22113U);
    msg.setSourceEntity(104U);
    msg.setDestination(30968U);
    msg.setDestinationEntity(99U);
    msg.name.assign("HCCLSLFPOCEMNGYEXEWZYORZFYPUYXOCVYDSFHCTSYIWAJNEJSPODZDYGJCWFPWDAIIVMQEVQQATSMDUBJUGGEEHLKFNWQSBBBTVLJAQSYHLQXIXYJVAMNPPJITZVMUGKGMFAHMHOLZWWGODKXBRCLZCSVZZEQJPRPNHNBQUKJRCKRLXTDDRIILXSGMWUPTBUJRQTVXCVHMTBFOZHSKGAWXENDARBFIOFUDPIFAMBEOHKOLRITQGZV");
    msg.value = 45U;

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
    msg.setTimeStamp(0.301260106681);
    msg.setSource(13956U);
    msg.setSourceEntity(53U);
    msg.setDestination(6784U);
    msg.setDestinationEntity(219U);
    msg.name.assign("XFZAPJIRTILJOOXVEEHKXQFMGNJVMTBOSTBSHAWGTUPYWVXSKACPAQEHVRBXBRHCOXEMIDRJDZLVCZVQQQZTEPIUHULUBJBDRSUITQYTRQ");

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
    msg.setTimeStamp(0.226041561261);
    msg.setSource(63766U);
    msg.setSourceEntity(217U);
    msg.setDestination(48553U);
    msg.setDestinationEntity(123U);
    msg.name.assign("RHGXHTCKUJPPFFOIKPSFSJHSNALVONBTKFUQJPTUTZCAPKPMBZXDMQIDDRAE");

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
    msg.setTimeStamp(0.991311188369);
    msg.setSource(13692U);
    msg.setSourceEntity(96U);
    msg.setDestination(8667U);
    msg.setDestinationEntity(196U);
    msg.name.assign("HFEZIVLWFYVQCVEAGHKLBJJFEJCNAMNTYURGCAXAHINETYVHDEJPBCT");

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
    msg.setTimeStamp(0.498863797471);
    msg.setSource(30405U);
    msg.setSourceEntity(137U);
    msg.setDestination(1892U);
    msg.setDestinationEntity(88U);
    msg.name.assign("FRAEAOPGLBBYGIXCFIKPLIQLHGJIVJRLYNLODGDCGYXKXUJUTPQ");
    msg.value = 111U;

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
    msg.setTimeStamp(0.0702988847066);
    msg.setSource(30638U);
    msg.setSourceEntity(115U);
    msg.setDestination(3995U);
    msg.setDestinationEntity(201U);
    msg.name.assign("GTZESMZEPYOXBSEQEHCAWRVPILXZVAJFHWWOXZQDGEDQIAIFQBMERDPYMNXTJQXA");
    msg.value = 226U;

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
    msg.setTimeStamp(0.305336832692);
    msg.setSource(53557U);
    msg.setSourceEntity(219U);
    msg.setDestination(36243U);
    msg.setDestinationEntity(236U);
    msg.name.assign("FAHYFXAGMOZEKDVDDPJPFQBPPXFASMOZZMTSSQNJHSWMRWWDCTVRZPPNGBCSSIWNFADYCMLLERDIGMNBFIMNAXQXRYYCXTLZGSOTIEIUCVLXIOATTZQGPTWUEQHCFFVKACYCJYBWEDKLMXBHEARROBJJGHKIKYZRKYGUPTWVQUQHPEHOENZIHXUHNVUDIJLV");
    msg.value = 24U;

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
    msg.setTimeStamp(0.138289403389);
    msg.setSource(37792U);
    msg.setSourceEntity(45U);
    msg.setDestination(6590U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.930640547815;
    msg.lon = 0.903065831827;
    msg.height = 0.802853312348;
    msg.x = 0.736150805315;
    msg.y = 0.408382372416;
    msg.z = 0.290384432136;
    msg.phi = 0.408013021152;
    msg.theta = 0.344521548361;
    msg.psi = 0.880131128626;
    msg.u = 0.112142697714;
    msg.v = 0.728862135862;
    msg.w = 0.697912319807;
    msg.vx = 0.904413869291;
    msg.vy = 0.510027932;
    msg.vz = 0.492220658273;
    msg.p = 0.659178385873;
    msg.q = 0.986373566243;
    msg.r = 0.955205203156;
    msg.depth = 0.370611728937;
    msg.alt = 0.87848889446;

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
    msg.setTimeStamp(0.255726723058);
    msg.setSource(58633U);
    msg.setSourceEntity(197U);
    msg.setDestination(58608U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.932944255084;
    msg.lon = 0.398119615351;
    msg.height = 0.115676837493;
    msg.x = 0.281710170504;
    msg.y = 0.486861610542;
    msg.z = 0.442675366321;
    msg.phi = 0.994111043985;
    msg.theta = 0.140582590857;
    msg.psi = 0.397693667453;
    msg.u = 0.697658882792;
    msg.v = 0.980939201955;
    msg.w = 0.977358063502;
    msg.vx = 0.475392888552;
    msg.vy = 0.917884081889;
    msg.vz = 0.697088508569;
    msg.p = 0.0644262626207;
    msg.q = 0.23714046505;
    msg.r = 0.489532418553;
    msg.depth = 0.8571630019;
    msg.alt = 0.827327030741;

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
    msg.setTimeStamp(0.128128031874);
    msg.setSource(42502U);
    msg.setSourceEntity(242U);
    msg.setDestination(11755U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.878701780637;
    msg.lon = 0.14553888467;
    msg.height = 0.630804868972;
    msg.x = 0.730451382309;
    msg.y = 0.314725322911;
    msg.z = 0.52209642801;
    msg.phi = 0.433507153663;
    msg.theta = 0.26683547848;
    msg.psi = 0.294688347608;
    msg.u = 0.973763979964;
    msg.v = 0.459907860017;
    msg.w = 0.17759379161;
    msg.vx = 0.558199454946;
    msg.vy = 0.686174024515;
    msg.vz = 0.372185432661;
    msg.p = 0.84584676738;
    msg.q = 0.847375190445;
    msg.r = 0.136297256802;
    msg.depth = 0.828140241821;
    msg.alt = 0.64489226997;

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
    msg.setTimeStamp(0.353497872903);
    msg.setSource(54085U);
    msg.setSourceEntity(33U);
    msg.setDestination(27338U);
    msg.setDestinationEntity(160U);
    msg.x = 0.615563557354;
    msg.y = 0.722760296491;
    msg.z = 0.819149174656;

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
    msg.setTimeStamp(0.0679092694842);
    msg.setSource(5U);
    msg.setSourceEntity(73U);
    msg.setDestination(7227U);
    msg.setDestinationEntity(22U);
    msg.x = 0.255886351858;
    msg.y = 0.588430959395;
    msg.z = 0.169870449717;

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
    msg.setTimeStamp(0.969275163541);
    msg.setSource(29535U);
    msg.setSourceEntity(162U);
    msg.setDestination(61213U);
    msg.setDestinationEntity(72U);
    msg.x = 0.487907132221;
    msg.y = 0.968964007019;
    msg.z = 0.0890012007023;

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
    msg.setTimeStamp(0.882217993427);
    msg.setSource(40965U);
    msg.setSourceEntity(137U);
    msg.setDestination(34919U);
    msg.setDestinationEntity(67U);
    msg.value = 0.824401440901;

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
    msg.setTimeStamp(0.646683745908);
    msg.setSource(62861U);
    msg.setSourceEntity(249U);
    msg.setDestination(61852U);
    msg.setDestinationEntity(214U);
    msg.value = 0.8145684853;

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
    msg.setTimeStamp(0.673553107271);
    msg.setSource(4052U);
    msg.setSourceEntity(38U);
    msg.setDestination(14366U);
    msg.setDestinationEntity(34U);
    msg.value = 0.565327391692;

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
    msg.setTimeStamp(0.164801365319);
    msg.setSource(53142U);
    msg.setSourceEntity(162U);
    msg.setDestination(11670U);
    msg.setDestinationEntity(120U);
    msg.value = 0.486491511043;

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
    msg.setTimeStamp(0.509939499275);
    msg.setSource(58342U);
    msg.setSourceEntity(218U);
    msg.setDestination(42326U);
    msg.setDestinationEntity(90U);
    msg.value = 0.981280687868;

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
    msg.setTimeStamp(0.675686225641);
    msg.setSource(9310U);
    msg.setSourceEntity(40U);
    msg.setDestination(23142U);
    msg.setDestinationEntity(199U);
    msg.value = 0.579822926495;

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
    msg.setTimeStamp(0.551183854819);
    msg.setSource(5702U);
    msg.setSourceEntity(110U);
    msg.setDestination(32290U);
    msg.setDestinationEntity(207U);
    msg.x = 0.665866354362;
    msg.y = 0.700111521612;
    msg.z = 0.976170750194;
    msg.phi = 0.139967717308;
    msg.theta = 0.943328573593;
    msg.psi = 0.888214019906;
    msg.p = 0.636595448107;
    msg.q = 0.765326850711;
    msg.r = 0.681159087185;
    msg.u = 0.953688839103;
    msg.v = 0.923720038068;
    msg.w = 0.719615757404;
    msg.bias_psi = 0.658357130284;
    msg.bias_r = 0.320820558;

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
    msg.setTimeStamp(0.584220851597);
    msg.setSource(48002U);
    msg.setSourceEntity(251U);
    msg.setDestination(52486U);
    msg.setDestinationEntity(84U);
    msg.x = 0.788634634115;
    msg.y = 0.687207098388;
    msg.z = 0.944843354237;
    msg.phi = 0.527219327594;
    msg.theta = 0.352960585486;
    msg.psi = 0.0664621609826;
    msg.p = 0.970312320416;
    msg.q = 0.860652428797;
    msg.r = 0.447092358933;
    msg.u = 0.403053323975;
    msg.v = 0.396654132048;
    msg.w = 0.0769830874653;
    msg.bias_psi = 0.533764725714;
    msg.bias_r = 0.29745682472;

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
    msg.setTimeStamp(0.350523297463);
    msg.setSource(5612U);
    msg.setSourceEntity(210U);
    msg.setDestination(8108U);
    msg.setDestinationEntity(136U);
    msg.x = 0.00065639860611;
    msg.y = 0.963761301163;
    msg.z = 0.0790125582296;
    msg.phi = 0.26493688553;
    msg.theta = 0.158107368196;
    msg.psi = 0.127298960185;
    msg.p = 0.946464694643;
    msg.q = 0.294015430401;
    msg.r = 0.149715274639;
    msg.u = 0.183842755402;
    msg.v = 0.117134865668;
    msg.w = 0.561002788768;
    msg.bias_psi = 0.997664540816;
    msg.bias_r = 0.7315591148;

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
    msg.setTimeStamp(0.243777338276);
    msg.setSource(54918U);
    msg.setSourceEntity(61U);
    msg.setDestination(91U);
    msg.setDestinationEntity(93U);
    msg.bias_psi = 0.206711983704;
    msg.bias_r = 0.757028027408;
    msg.cog = 0.810060548288;
    msg.cyaw = 0.465263507491;
    msg.lbl_rej_level = 0.26902877041;
    msg.gps_rej_level = 0.240574595438;
    msg.custom_x = 0.366132044555;
    msg.custom_y = 0.977526165865;
    msg.custom_z = 0.252784792291;

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
    msg.setTimeStamp(0.389618165246);
    msg.setSource(11268U);
    msg.setSourceEntity(124U);
    msg.setDestination(61271U);
    msg.setDestinationEntity(229U);
    msg.bias_psi = 0.700868831464;
    msg.bias_r = 0.837690155455;
    msg.cog = 0.335972068054;
    msg.cyaw = 0.572323960188;
    msg.lbl_rej_level = 0.821404707818;
    msg.gps_rej_level = 0.304925673117;
    msg.custom_x = 0.838012609399;
    msg.custom_y = 0.314726051884;
    msg.custom_z = 0.801811370765;

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
    msg.setTimeStamp(0.787239611811);
    msg.setSource(47332U);
    msg.setSourceEntity(26U);
    msg.setDestination(36127U);
    msg.setDestinationEntity(87U);
    msg.bias_psi = 0.101724098206;
    msg.bias_r = 0.771055980555;
    msg.cog = 0.833437235919;
    msg.cyaw = 0.482578611691;
    msg.lbl_rej_level = 0.902195998587;
    msg.gps_rej_level = 0.364126705898;
    msg.custom_x = 0.423130124179;
    msg.custom_y = 0.659103571627;
    msg.custom_z = 0.595630346631;

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
    msg.setTimeStamp(0.963923931005);
    msg.setSource(44416U);
    msg.setSourceEntity(3U);
    msg.setDestination(59879U);
    msg.setDestinationEntity(52U);
    msg.utc_time = 0.3890417881;
    msg.reason = 29U;

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
    msg.setTimeStamp(0.396823576771);
    msg.setSource(25418U);
    msg.setSourceEntity(49U);
    msg.setDestination(9372U);
    msg.setDestinationEntity(47U);
    msg.utc_time = 0.272556109181;
    msg.reason = 179U;

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
    msg.setTimeStamp(0.90060673087);
    msg.setSource(49414U);
    msg.setSourceEntity(193U);
    msg.setDestination(23494U);
    msg.setDestinationEntity(9U);
    msg.utc_time = 0.649857065378;
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
    msg.setTimeStamp(0.148738371801);
    msg.setSource(28137U);
    msg.setSourceEntity(1U);
    msg.setDestination(41667U);
    msg.setDestinationEntity(89U);
    msg.id = 234U;
    msg.range = 0.309450825456;
    msg.acceptance = 248U;

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
    msg.setTimeStamp(0.493371893567);
    msg.setSource(15632U);
    msg.setSourceEntity(82U);
    msg.setDestination(21510U);
    msg.setDestinationEntity(185U);
    msg.id = 116U;
    msg.range = 0.980088710156;
    msg.acceptance = 218U;

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
    msg.setTimeStamp(0.280262110958);
    msg.setSource(53936U);
    msg.setSourceEntity(93U);
    msg.setDestination(58342U);
    msg.setDestinationEntity(195U);
    msg.id = 34U;
    msg.range = 0.513961355198;
    msg.acceptance = 86U;

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
    msg.setTimeStamp(0.780205353379);
    msg.setSource(50533U);
    msg.setSourceEntity(187U);
    msg.setDestination(30124U);
    msg.setDestinationEntity(65U);
    msg.type = 46U;
    msg.reason = 127U;
    msg.value = 0.115606607657;
    msg.timestep = 0.160417784686;

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
    msg.setTimeStamp(0.460966974763);
    msg.setSource(26305U);
    msg.setSourceEntity(213U);
    msg.setDestination(39716U);
    msg.setDestinationEntity(138U);
    msg.type = 180U;
    msg.reason = 55U;
    msg.value = 0.037090522915;
    msg.timestep = 0.0821766468834;

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
    msg.setTimeStamp(0.289554792587);
    msg.setSource(53555U);
    msg.setSourceEntity(127U);
    msg.setDestination(15711U);
    msg.setDestinationEntity(245U);
    msg.type = 132U;
    msg.reason = 229U;
    msg.value = 0.842320872803;
    msg.timestep = 0.351945211592;

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
    msg.setTimeStamp(0.939892695554);
    msg.setSource(44608U);
    msg.setSourceEntity(5U);
    msg.setDestination(11203U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.481514665188);
    msg.setSource(44808U);
    msg.setSourceEntity(24U);
    msg.setDestination(22406U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.673932888473);
    msg.setSource(42558U);
    msg.setSourceEntity(253U);
    msg.setDestination(58384U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.294596786696);
    msg.setSource(58385U);
    msg.setSourceEntity(98U);
    msg.setDestination(64900U);
    msg.setDestinationEntity(111U);
    msg.beacon.assign("DVZIIKNOXIAFXPAEXDBIKSRHFGNMTDBYTCNJQGKCZYSVYWBECLAXXNULNLWMFMRTFFNIEEPUVGKFYYWYZHZDAMSCWVNRUOHYJOUJQHPLLWPLVCWGZQDAHPFAWGZOSZBEOJTOLFGYQHCNMWSBMRLUZQHXSCRMETVOTXNMPCZJADKVDPTMTFHQKEBVRIRA");
    msg.x = 0.189948127211;
    msg.y = 0.662695120149;
    msg.depth = 0.000267824783271;
    msg.var_x = 0.872173199755;
    msg.var_y = 0.494970186018;

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
    msg.setTimeStamp(0.862465582421);
    msg.setSource(28369U);
    msg.setSourceEntity(79U);
    msg.setDestination(37226U);
    msg.setDestinationEntity(35U);
    msg.beacon.assign("PRDBZCABBECBIHJVVCKSUFHGUWZK");
    msg.x = 0.484060040463;
    msg.y = 0.654571835529;
    msg.depth = 0.201366638444;
    msg.var_x = 0.32082876446;
    msg.var_y = 0.878143707137;

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
    msg.setTimeStamp(0.229732513519);
    msg.setSource(57528U);
    msg.setSourceEntity(100U);
    msg.setDestination(17415U);
    msg.setDestinationEntity(137U);
    msg.beacon.assign("TQZLSMZYNZCJRNXZBXVLTFXPBWUWNXYAOHYUNGREFGAJDEPWLIFFDBOJ");
    msg.x = 0.888676844977;
    msg.y = 0.674468529892;
    msg.depth = 0.666592278948;
    msg.var_x = 0.206536824282;
    msg.var_y = 0.283382876021;

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
    msg.setTimeStamp(0.509711311702);
    msg.setSource(48549U);
    msg.setSourceEntity(123U);
    msg.setDestination(15499U);
    msg.setDestinationEntity(43U);
    msg.value = 0.136108772843;

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
    msg.setTimeStamp(0.274868651075);
    msg.setSource(20861U);
    msg.setSourceEntity(94U);
    msg.setDestination(62449U);
    msg.setDestinationEntity(38U);
    msg.value = 0.850737975402;

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
    msg.setTimeStamp(0.122030222099);
    msg.setSource(33148U);
    msg.setSourceEntity(120U);
    msg.setDestination(38803U);
    msg.setDestinationEntity(194U);
    msg.value = 0.449259014532;

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
    msg.setTimeStamp(0.446665059948);
    msg.setSource(24794U);
    msg.setSourceEntity(82U);
    msg.setDestination(27283U);
    msg.setDestinationEntity(5U);
    msg.value = 0.52542531227;
    msg.z_units = 148U;

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
    msg.setTimeStamp(0.00188344785683);
    msg.setSource(10547U);
    msg.setSourceEntity(71U);
    msg.setDestination(58349U);
    msg.setDestinationEntity(246U);
    msg.value = 0.351097485993;
    msg.z_units = 245U;

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
    msg.setTimeStamp(0.989165400694);
    msg.setSource(42476U);
    msg.setSourceEntity(221U);
    msg.setDestination(30652U);
    msg.setDestinationEntity(233U);
    msg.value = 0.437046193313;
    msg.z_units = 235U;

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
    msg.setTimeStamp(0.275147680471);
    msg.setSource(61399U);
    msg.setSourceEntity(130U);
    msg.setDestination(64732U);
    msg.setDestinationEntity(211U);
    msg.value = 0.354883389445;
    msg.speed_units = 215U;

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
    msg.setTimeStamp(0.582071948161);
    msg.setSource(20080U);
    msg.setSourceEntity(207U);
    msg.setDestination(1092U);
    msg.setDestinationEntity(248U);
    msg.value = 0.861535335399;
    msg.speed_units = 16U;

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
    msg.setTimeStamp(0.949257323601);
    msg.setSource(63063U);
    msg.setSourceEntity(167U);
    msg.setDestination(24024U);
    msg.setDestinationEntity(158U);
    msg.value = 0.963417678521;
    msg.speed_units = 141U;

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
    msg.setTimeStamp(0.723013070729);
    msg.setSource(19842U);
    msg.setSourceEntity(122U);
    msg.setDestination(32173U);
    msg.setDestinationEntity(236U);
    msg.value = 0.975647669416;

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
    msg.setTimeStamp(0.364106758705);
    msg.setSource(7160U);
    msg.setSourceEntity(206U);
    msg.setDestination(17680U);
    msg.setDestinationEntity(130U);
    msg.value = 0.796733164337;

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
    msg.setTimeStamp(0.0678628965082);
    msg.setSource(59183U);
    msg.setSourceEntity(66U);
    msg.setDestination(63705U);
    msg.setDestinationEntity(214U);
    msg.value = 0.422029309682;

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
    msg.setTimeStamp(0.429701013993);
    msg.setSource(53060U);
    msg.setSourceEntity(49U);
    msg.setDestination(52106U);
    msg.setDestinationEntity(151U);
    msg.value = 0.522087396407;

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
    msg.setTimeStamp(0.700439780542);
    msg.setSource(59906U);
    msg.setSourceEntity(123U);
    msg.setDestination(30495U);
    msg.setDestinationEntity(179U);
    msg.value = 0.97888837507;

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
    msg.setTimeStamp(0.469987557993);
    msg.setSource(4829U);
    msg.setSourceEntity(25U);
    msg.setDestination(38422U);
    msg.setDestinationEntity(227U);
    msg.value = 0.516822033315;

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
    msg.setTimeStamp(0.417494062779);
    msg.setSource(31636U);
    msg.setSourceEntity(185U);
    msg.setDestination(765U);
    msg.setDestinationEntity(247U);
    msg.value = 0.91982019244;

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
    msg.setTimeStamp(0.361888279758);
    msg.setSource(61225U);
    msg.setSourceEntity(196U);
    msg.setDestination(62635U);
    msg.setDestinationEntity(220U);
    msg.value = 0.744287356037;

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
    msg.setTimeStamp(0.263454147326);
    msg.setSource(3920U);
    msg.setSourceEntity(99U);
    msg.setDestination(23166U);
    msg.setDestinationEntity(192U);
    msg.value = 0.415976124088;

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
    msg.setTimeStamp(0.359606641552);
    msg.setSource(24351U);
    msg.setSourceEntity(121U);
    msg.setDestination(60021U);
    msg.setDestinationEntity(211U);
    msg.start_lat = 0.875631055646;
    msg.start_lon = 0.677676652211;
    msg.start_z = 0.451789835556;
    msg.start_z_units = 8U;
    msg.end_lat = 0.542036103706;
    msg.end_lon = 0.846040405905;
    msg.end_z = 0.0348035972964;
    msg.end_z_units = 123U;
    msg.speed = 0.144859521678;
    msg.speed_units = 58U;
    msg.lradius = 0.780320860757;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.143333314235);
    msg.setSource(22738U);
    msg.setSourceEntity(152U);
    msg.setDestination(5385U);
    msg.setDestinationEntity(19U);
    msg.start_lat = 0.890797515909;
    msg.start_lon = 0.8447233923;
    msg.start_z = 0.0485987851032;
    msg.start_z_units = 60U;
    msg.end_lat = 0.926642214804;
    msg.end_lon = 0.186304336792;
    msg.end_z = 0.506266457611;
    msg.end_z_units = 4U;
    msg.speed = 0.498495347556;
    msg.speed_units = 213U;
    msg.lradius = 0.850636151262;
    msg.flags = 59U;

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
    msg.setTimeStamp(0.111779456982);
    msg.setSource(23212U);
    msg.setSourceEntity(181U);
    msg.setDestination(8212U);
    msg.setDestinationEntity(62U);
    msg.start_lat = 0.949409554341;
    msg.start_lon = 0.286157772635;
    msg.start_z = 0.200679999522;
    msg.start_z_units = 157U;
    msg.end_lat = 0.0852800277405;
    msg.end_lon = 0.514091329853;
    msg.end_z = 0.771192900773;
    msg.end_z_units = 34U;
    msg.speed = 0.41564035749;
    msg.speed_units = 151U;
    msg.lradius = 0.396101965003;
    msg.flags = 83U;

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
    msg.setTimeStamp(0.287510183458);
    msg.setSource(12231U);
    msg.setSourceEntity(195U);
    msg.setDestination(56901U);
    msg.setDestinationEntity(177U);
    msg.x = 0.553957476795;
    msg.y = 0.228562422904;
    msg.z = 0.822350154474;
    msg.k = 0.524324691273;
    msg.m = 0.680151061918;
    msg.n = 0.95268308981;
    msg.flags = 44U;

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
    msg.setTimeStamp(0.872232016986);
    msg.setSource(38226U);
    msg.setSourceEntity(122U);
    msg.setDestination(4555U);
    msg.setDestinationEntity(240U);
    msg.x = 0.368950772255;
    msg.y = 0.226333222755;
    msg.z = 0.647162301801;
    msg.k = 0.778265221623;
    msg.m = 0.185933707967;
    msg.n = 0.416973133425;
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
    msg.setTimeStamp(0.860944055133);
    msg.setSource(62698U);
    msg.setSourceEntity(47U);
    msg.setDestination(3417U);
    msg.setDestinationEntity(64U);
    msg.x = 0.807144674453;
    msg.y = 0.417473265959;
    msg.z = 0.628938512033;
    msg.k = 0.898306142093;
    msg.m = 0.508109307747;
    msg.n = 0.920274769967;
    msg.flags = 199U;

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
    msg.setTimeStamp(0.119593559726);
    msg.setSource(59908U);
    msg.setSourceEntity(30U);
    msg.setDestination(18406U);
    msg.setDestinationEntity(245U);
    msg.value = 0.814264884668;

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
    msg.setTimeStamp(0.941502590184);
    msg.setSource(21744U);
    msg.setSourceEntity(36U);
    msg.setDestination(27368U);
    msg.setDestinationEntity(26U);
    msg.value = 0.16009271437;

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
    msg.setTimeStamp(0.294535006396);
    msg.setSource(62865U);
    msg.setSourceEntity(216U);
    msg.setDestination(54573U);
    msg.setDestinationEntity(139U);
    msg.value = 0.155655248398;

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
    msg.setTimeStamp(0.538602865515);
    msg.setSource(16471U);
    msg.setSourceEntity(216U);
    msg.setDestination(54959U);
    msg.setDestinationEntity(216U);
    msg.u = 0.952423861895;
    msg.v = 0.18950428266;
    msg.w = 0.153429003973;
    msg.p = 0.100278650758;
    msg.q = 0.927497587946;
    msg.r = 0.208031482012;
    msg.flags = 166U;

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
    msg.setTimeStamp(0.47001644842);
    msg.setSource(64947U);
    msg.setSourceEntity(115U);
    msg.setDestination(35197U);
    msg.setDestinationEntity(111U);
    msg.u = 0.930585273;
    msg.v = 0.421527726584;
    msg.w = 0.210487997673;
    msg.p = 0.518054171446;
    msg.q = 0.683451124479;
    msg.r = 0.246572234734;
    msg.flags = 92U;

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
    msg.setTimeStamp(0.0936970839073);
    msg.setSource(10957U);
    msg.setSourceEntity(218U);
    msg.setDestination(53623U);
    msg.setDestinationEntity(58U);
    msg.u = 0.925086081359;
    msg.v = 0.803879250253;
    msg.w = 0.0291652926613;
    msg.p = 0.173668632721;
    msg.q = 0.396515702374;
    msg.r = 0.21760255197;
    msg.flags = 146U;

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
    msg.setTimeStamp(0.332493277326);
    msg.setSource(48606U);
    msg.setSourceEntity(126U);
    msg.setDestination(20570U);
    msg.setDestinationEntity(7U);
    msg.start_lat = 0.215651724279;
    msg.start_lon = 0.885970963695;
    msg.start_z = 0.182804323466;
    msg.start_z_units = 211U;
    msg.end_lat = 0.916474992215;
    msg.end_lon = 0.221615186114;
    msg.end_z = 0.165947548737;
    msg.end_z_units = 253U;
    msg.lradius = 0.00222945659452;
    msg.flags = 160U;
    msg.x = 0.816940887847;
    msg.y = 0.537221966119;
    msg.z = 0.952377207112;
    msg.vx = 0.816265684238;
    msg.vy = 0.84245102931;
    msg.vz = 0.225762505174;
    msg.course_error = 0.426734926428;
    msg.eta = 25715U;

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
    msg.setTimeStamp(0.280496620794);
    msg.setSource(37158U);
    msg.setSourceEntity(251U);
    msg.setDestination(5056U);
    msg.setDestinationEntity(157U);
    msg.start_lat = 0.199912249723;
    msg.start_lon = 0.208398801839;
    msg.start_z = 0.0576640611836;
    msg.start_z_units = 25U;
    msg.end_lat = 0.609286077058;
    msg.end_lon = 0.927272814568;
    msg.end_z = 0.462739385526;
    msg.end_z_units = 49U;
    msg.lradius = 0.425580677066;
    msg.flags = 187U;
    msg.x = 0.450392062624;
    msg.y = 0.460175886458;
    msg.z = 0.692401732824;
    msg.vx = 0.0219897598086;
    msg.vy = 0.286789719411;
    msg.vz = 0.693158478565;
    msg.course_error = 0.115832461101;
    msg.eta = 48020U;

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
    msg.setTimeStamp(0.669304369567);
    msg.setSource(46029U);
    msg.setSourceEntity(254U);
    msg.setDestination(15961U);
    msg.setDestinationEntity(92U);
    msg.start_lat = 0.847630900448;
    msg.start_lon = 0.201002978436;
    msg.start_z = 0.613718985689;
    msg.start_z_units = 135U;
    msg.end_lat = 0.46683448475;
    msg.end_lon = 0.0706195909994;
    msg.end_z = 0.283517543423;
    msg.end_z_units = 192U;
    msg.lradius = 0.0459182536035;
    msg.flags = 36U;
    msg.x = 0.675863536112;
    msg.y = 0.611786955748;
    msg.z = 0.285393121139;
    msg.vx = 0.0731784766501;
    msg.vy = 0.309077818917;
    msg.vz = 0.183692403294;
    msg.course_error = 0.45096000545;
    msg.eta = 23006U;

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
    msg.setTimeStamp(0.214061427767);
    msg.setSource(33900U);
    msg.setSourceEntity(90U);
    msg.setDestination(24480U);
    msg.setDestinationEntity(62U);
    msg.k = 0.901890207942;
    msg.m = 0.947238296406;
    msg.n = 0.214051856329;

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
    msg.setTimeStamp(0.853426619144);
    msg.setSource(57094U);
    msg.setSourceEntity(165U);
    msg.setDestination(53130U);
    msg.setDestinationEntity(9U);
    msg.k = 0.431806857888;
    msg.m = 0.200619154885;
    msg.n = 0.557706202445;

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
    msg.setTimeStamp(0.0861780805157);
    msg.setSource(57122U);
    msg.setSourceEntity(139U);
    msg.setDestination(22437U);
    msg.setDestinationEntity(167U);
    msg.k = 0.271574844703;
    msg.m = 0.424880784229;
    msg.n = 0.12943226948;

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
    msg.setTimeStamp(0.924703869633);
    msg.setSource(60634U);
    msg.setSourceEntity(182U);
    msg.setDestination(49044U);
    msg.setDestinationEntity(241U);
    msg.p = 0.719322111399;
    msg.i = 0.822565831417;
    msg.d = 0.779699888757;
    msg.a = 0.448681888462;

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
    msg.setTimeStamp(0.786369600743);
    msg.setSource(10874U);
    msg.setSourceEntity(18U);
    msg.setDestination(28148U);
    msg.setDestinationEntity(38U);
    msg.p = 0.401638233951;
    msg.i = 0.712435632261;
    msg.d = 0.562957945401;
    msg.a = 0.25185156043;

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
    msg.setTimeStamp(0.974409404951);
    msg.setSource(53111U);
    msg.setSourceEntity(189U);
    msg.setDestination(12154U);
    msg.setDestinationEntity(34U);
    msg.p = 0.312974589764;
    msg.i = 0.144540630307;
    msg.d = 0.954871999731;
    msg.a = 0.347436475474;

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
    msg.setTimeStamp(0.298728642975);
    msg.setSource(10103U);
    msg.setSourceEntity(165U);
    msg.setDestination(24418U);
    msg.setDestinationEntity(207U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.969798221667);
    msg.setSource(15388U);
    msg.setSourceEntity(147U);
    msg.setDestination(42819U);
    msg.setDestinationEntity(102U);
    msg.op = 157U;

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
    msg.setTimeStamp(0.626207316629);
    msg.setSource(26864U);
    msg.setSourceEntity(150U);
    msg.setDestination(17924U);
    msg.setDestinationEntity(104U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.641373508225);
    msg.setSource(62100U);
    msg.setSourceEntity(35U);
    msg.setDestination(1237U);
    msg.setDestinationEntity(3U);
    msg.timeout = 30988U;
    msg.lat = 0.173248511856;
    msg.lon = 0.770695873205;
    msg.z = 0.211694205892;
    msg.z_units = 86U;
    msg.speed = 0.00578606777586;
    msg.speed_units = 68U;
    msg.roll = 0.194678681254;
    msg.pitch = 0.206338844881;
    msg.yaw = 0.440197978894;
    msg.custom.assign("MVGFMHIDSTKCDZAYACLYUILBECDCRHIZDLENOJTOLWWRQKRKUJBPZBHXEQCIGXOVPAUULBEUGNHYMSPSCXQSRZAHWPEDTFBPNXGAYGAKLENRZXMGVFMQBUAWELNKNOIHTXPJKVCXUJPBVCWAKTZOSLF");

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
    msg.setTimeStamp(0.783913757576);
    msg.setSource(25375U);
    msg.setSourceEntity(240U);
    msg.setDestination(54608U);
    msg.setDestinationEntity(149U);
    msg.timeout = 64003U;
    msg.lat = 0.176509368703;
    msg.lon = 0.621528021477;
    msg.z = 0.532294258903;
    msg.z_units = 82U;
    msg.speed = 0.336302760352;
    msg.speed_units = 194U;
    msg.roll = 0.252567345298;
    msg.pitch = 0.538393547687;
    msg.yaw = 0.233474999514;
    msg.custom.assign("SDOJOYZKLGBGHXBZYAHHDMOSLVZWJAWTTNXGHWDGKWVVRUUMIQOBTHFRMPYXKCBAZIBEXLDTTWJDHXZXKRQMWLPZACHITGNUIUPENNANLESEQRJRSEKDPGLIQWRDVEIPRVGHFOPXUVYXYNTRXFKGFYCYCAEQVKTLAJYIXSBMVQGASNLIFCFPJZPSPHBHZEOFVJDEJSOFMBJLY");

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
    msg.setTimeStamp(0.448558705148);
    msg.setSource(35059U);
    msg.setSourceEntity(246U);
    msg.setDestination(52003U);
    msg.setDestinationEntity(208U);
    msg.timeout = 28420U;
    msg.lat = 0.0291770891971;
    msg.lon = 0.51462663605;
    msg.z = 0.192523574608;
    msg.z_units = 63U;
    msg.speed = 0.0672230219695;
    msg.speed_units = 11U;
    msg.roll = 0.978150638262;
    msg.pitch = 0.633158918543;
    msg.yaw = 0.438291947178;
    msg.custom.assign("YGUDRHEOJEYJOGW");

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
    msg.setTimeStamp(0.957345679473);
    msg.setSource(47060U);
    msg.setSourceEntity(8U);
    msg.setDestination(6242U);
    msg.setDestinationEntity(162U);
    msg.timeout = 56304U;
    msg.lat = 0.772626423897;
    msg.lon = 0.0935345618487;
    msg.z = 0.835343487758;
    msg.z_units = 233U;
    msg.speed = 0.175568142186;
    msg.speed_units = 6U;
    msg.duration = 64010U;
    msg.radius = 0.858297258602;
    msg.flags = 195U;
    msg.custom.assign("HOIIYWLQQROMVFZUJSNORZTIOTNJWFSZQREKXUVHXJAHGINMPBYJJYYZGDKACCRCTDYQZXBYJKBWHQLFYBFHLAUFLEPNIRGIMWPBEYSZJACBNPUGANHKUTOUFWAADJSAVZGSQNUNKOZJTQWVVLHEZPVMSQPIWELRXSDLXDJUBFPFSKXOOVCDCCWEXGMFNCIWCXZWVELRMS");

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
    msg.setTimeStamp(0.307684826012);
    msg.setSource(24085U);
    msg.setSourceEntity(20U);
    msg.setDestination(61759U);
    msg.setDestinationEntity(35U);
    msg.timeout = 1079U;
    msg.lat = 0.535937790964;
    msg.lon = 0.333678473576;
    msg.z = 0.0703343376503;
    msg.z_units = 170U;
    msg.speed = 0.237718124087;
    msg.speed_units = 7U;
    msg.duration = 7664U;
    msg.radius = 0.35774123688;
    msg.flags = 239U;
    msg.custom.assign("QSKZEQAIZKWRBAMXOFJOZKDAOVWIBUQGMLRJYPFIIJOQRNMETQENUFJHNXIPAXIKQUWJZVTNGCHYMSCRWLDAKFSJORLXMPFZZDHIPLEDTWLHNSTPXAUJXQTXKRVQRFHWLRPYSTEZOHWOTWMXRFFBLNYNKBPDMVNRTDZGTBMDMHYJHSSYGCSPUJEYQISHGZC");

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
    msg.setTimeStamp(0.209890826639);
    msg.setSource(60544U);
    msg.setSourceEntity(207U);
    msg.setDestination(39232U);
    msg.setDestinationEntity(253U);
    msg.timeout = 64135U;
    msg.lat = 0.442106107312;
    msg.lon = 0.919763913585;
    msg.z = 0.0700247293209;
    msg.z_units = 211U;
    msg.speed = 0.160098130477;
    msg.speed_units = 191U;
    msg.duration = 45738U;
    msg.radius = 0.394508915139;
    msg.flags = 216U;
    msg.custom.assign("XKRHAXLEKRROVEQTBUQACZNOKQSTTVPKMTOSKSNRVDQJQMXPWEVCEAPDJHJJWZBFILNPDIPMBHVXGMEIJTBOGXTJIQOQFNDOGEWZHSRAITNUZNCXKYBJVWBGGMUXTPGECSCURUEZYVDLWCYTISLGFRVWPZRCMAAYOHOWDGFDTRNLFZUJHFSPKCYDKBRUPNFWVOLFYOYHNVS");

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
    msg.setTimeStamp(0.073251439279);
    msg.setSource(8160U);
    msg.setSourceEntity(196U);
    msg.setDestination(36006U);
    msg.setDestinationEntity(116U);
    msg.custom.assign("SVSVAAJUHWNVCKCYBMMTLFMHPKKWLCPBFYRWULEYQZYOSEJOLBIRFOQWGUQSOOBEOVUUYLAMKMCKIHYWNIQWVSAXVSXJHHWDCCORYYTLOBNUITMGKMVHTF");

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
    msg.setTimeStamp(0.308052508901);
    msg.setSource(3716U);
    msg.setSourceEntity(27U);
    msg.setDestination(63021U);
    msg.setDestinationEntity(247U);
    msg.custom.assign("OGYHUYEBNSREEUKGPDNYXKWGEBFLFMVLXGYICWXNDJNEHHVJSDZNVWOSSBIIFWCNPTITVVPZGPYKMFQJBKTQQMCONDVAQFCEQBYCQMFKHKXREZJFIWRFDJUKJMYBVUSHHPBIDUDZUHUZPLLWXMRLVLJCDZPSATZKFYAEYXW");

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
    msg.setTimeStamp(0.271608843997);
    msg.setSource(61494U);
    msg.setSourceEntity(194U);
    msg.setDestination(21652U);
    msg.setDestinationEntity(201U);
    msg.custom.assign("KZMIKKRLGQIBYRJUZOVHTRXYBNXLTVSJWEBEFWECLUEKJCJPSGATWXAPPDQQSPOPGUNUBFICZLGXPADWIHJGDXXYZRGXGVMOMSNQTFEIYNVEHTIWPOZICVUAUOMHXYGKZDIPZSXDCYHESTGXWDMMBKTLWQOCCVYOBVYRQOTMUNJASSLMYGNZKAQVOKWZNELIIAHSBDMCZJENHREFVFLDVTFFPHBRAYNJCFHSLPBFAFLQMJJAKQRRBWRQ");

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
    msg.setTimeStamp(0.885927151783);
    msg.setSource(10963U);
    msg.setSourceEntity(230U);
    msg.setDestination(22278U);
    msg.setDestinationEntity(137U);
    msg.timeout = 27670U;
    msg.lat = 0.0503345555329;
    msg.lon = 0.183645201475;
    msg.z = 0.0170780791401;
    msg.z_units = 223U;
    msg.duration = 15482U;
    msg.speed = 0.464189461387;
    msg.speed_units = 73U;
    msg.type = 128U;
    msg.radius = 0.65346462577;
    msg.length = 0.922759512293;
    msg.bearing = 0.0555566505718;
    msg.direction = 41U;
    msg.custom.assign("WUBGJDPHPOZKYBOSEUNIPQUWKIOYIZXFZXLMJPKOLKLKCUJSGHFYTSMNHWEPOBDRCGZRJCHUMOFYWBCWCQAYITSOFBYIMAXPNIPYMJXAMTIUJVSXRGRZEEQARLDWGKSCHACVRVXDQAZYHVXSPQQJRMQPVNEADOKRKUNFDDDTDYFFHTFGILETLGUQGICBLMQUXCDJANRBNSSVWMFLZVLGPEZTVCIZBMAH");

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
    msg.setTimeStamp(0.407866682028);
    msg.setSource(24228U);
    msg.setSourceEntity(88U);
    msg.setDestination(20880U);
    msg.setDestinationEntity(9U);
    msg.timeout = 20874U;
    msg.lat = 0.213910451504;
    msg.lon = 0.223656479466;
    msg.z = 0.835688635588;
    msg.z_units = 198U;
    msg.duration = 41959U;
    msg.speed = 0.84263926568;
    msg.speed_units = 216U;
    msg.type = 89U;
    msg.radius = 0.748874213747;
    msg.length = 0.30332090532;
    msg.bearing = 0.943288622667;
    msg.direction = 220U;
    msg.custom.assign("HLJDTAJMJKPEAJDIGUXRFQDLOUNXXZEJHQVCBHPWRMOFPZUUVYVUPFSKIBPVAUCOTFBNGEBYCITFILHYHLDNMASELEALBASJRXIQCRWOXZLABYTFCGYENRCHCGDWIAZIQSSEBTJTOLWGWNRHDWNDNZDSQOKNOHVMAGLWXUNVQMKJITXOVYJDYUSPXCYKGKRFBSKEKSTFCWJMPXXEWYBHZVUTGMZCVRROOGIPPVSAZFQ");

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
    msg.setTimeStamp(0.209832678068);
    msg.setSource(29713U);
    msg.setSourceEntity(237U);
    msg.setDestination(2497U);
    msg.setDestinationEntity(165U);
    msg.timeout = 17767U;
    msg.lat = 0.575615240387;
    msg.lon = 0.341225776066;
    msg.z = 0.985739339618;
    msg.z_units = 152U;
    msg.duration = 58205U;
    msg.speed = 0.215886985808;
    msg.speed_units = 225U;
    msg.type = 73U;
    msg.radius = 0.127609386823;
    msg.length = 0.674577312506;
    msg.bearing = 0.0535113539611;
    msg.direction = 84U;
    msg.custom.assign("ESUNFKCXKKGQCIBGDEJTBHANFLKLFHKDZPBZGMOTOQGTLHYPMDIJDRIRSMIFRXQVAHJTTTTEUSPFNOVBDAARNVWKBPVLVUYWNWRDSVIXUSQCCLXEOFTQUUZNYNILSRCCMYBKZUPXHHFMWEZIZSLQYUYNEWBMYKDYKEQHAJATLXOGEOGGXLSJOJFHPUNHDQMFISBPZXWPMGKRAXNGOWIOWWFBPVVE");

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
    msg.setTimeStamp(0.0249820885548);
    msg.setSource(43019U);
    msg.setSourceEntity(3U);
    msg.setDestination(13490U);
    msg.setDestinationEntity(8U);
    msg.duration = 930U;
    msg.custom.assign("BAOBCPQCYITZRPZPJAVNGPLXFYESMENBOUYJEOIQUVGGFIZHGATDQZPKVHNMDRHSYLRDDEGVWNUMJVLPMMKQEEFYGRLMUOZPTSLFLUGQUZQZLJDQLXIXTYR");

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
    msg.setTimeStamp(0.726947073235);
    msg.setSource(11134U);
    msg.setSourceEntity(186U);
    msg.setDestination(20659U);
    msg.setDestinationEntity(187U);
    msg.duration = 3037U;
    msg.custom.assign("VQVHKCFSQGBIVKKEJOJIISZHUANOBPOAXPNYQAZCFMKQDZYEWLMIGCPUXIELALZTGREOHMUHJQZFTDIDYUVYZNZAKTVHTWSQCHMMCBHDJGXEZZIIVEYRVDBJDPKCGBMMBBKLGUXJQMRXCQLDUFGAGSDLVLBSNDSEHWPNJPWWJFRNOLJQKRXKQWYXTEWYMATAHKFRWTOTYXTMFUYRIXJCSPLVEIRNGSULOOBCFPUPECPOZWADTANNUBFXW");

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
    msg.setTimeStamp(0.919589717791);
    msg.setSource(34225U);
    msg.setSourceEntity(155U);
    msg.setDestination(49457U);
    msg.setDestinationEntity(225U);
    msg.duration = 49838U;
    msg.custom.assign("FYMHATAIXIMPEATVRNQEKJAYVIDJRCTXAWOGIJHWSDTBQOQWQERPLZMXLUOBSGVXXCMNAVLHSGUSPSFOKXCUYMCGALUMITZGMFKOGZLBVUNIKKKWNRYWFHOQROZXLDEHKVUPBBILYNMZCEAFGWHOPRFFAJHJZWFTKPHDRZSWNLINJQVPKQAYEWETXDKDDPZECSPTGBZ");

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
    msg.setTimeStamp(0.754292764808);
    msg.setSource(33907U);
    msg.setSourceEntity(137U);
    msg.setDestination(60744U);
    msg.setDestinationEntity(221U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.894264896234;
    tmp_msg_0.z_units = 69U;
    msg.control.set(tmp_msg_0);
    msg.duration = 53239U;
    msg.custom.assign("TZVILQPLTPMNHNZABQVOSMPOSVCDKYHKPYWJOAPPRHVWHRKBEZFLEEOJEIFAFXAMCJJCBVANUXGUAZCEZDUMSBMNFQLSJNIDZVGAITGOUKLNONSCQDJXRLTUHXBRWMJMVALPYKNXGVXMZTDUIVQXCWTJPFESXOINOTULGHXJUKYKAOZHWDCBCMSVUYZR");

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
    msg.setTimeStamp(0.185113407609);
    msg.setSource(7465U);
    msg.setSourceEntity(110U);
    msg.setDestination(16756U);
    msg.setDestinationEntity(126U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.210940969574;
    tmp_msg_0.z_units = 126U;
    msg.control.set(tmp_msg_0);
    msg.duration = 8062U;
    msg.custom.assign("LWMZAJKUNMQFMTTDRRHPMHEZXIXYYDTBCYWWQAJCLDNBDFBHIJRYHXXSZFYOKRB");

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
    msg.setTimeStamp(0.2317469484);
    msg.setSource(60524U);
    msg.setSourceEntity(126U);
    msg.setDestination(20971U);
    msg.setDestinationEntity(142U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.430757190181;
    msg.control.set(tmp_msg_0);
    msg.duration = 14328U;
    msg.custom.assign("VHYNKEBCGDWBKWFLTLJJPIZCXKTOCOWEHLYIMUFGPJYHDIQXQSZHPLKYUSB");

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
    msg.setTimeStamp(0.389802985579);
    msg.setSource(34849U);
    msg.setSourceEntity(237U);
    msg.setDestination(871U);
    msg.setDestinationEntity(196U);
    msg.timeout = 15916U;
    msg.lat = 0.765193512294;
    msg.lon = 0.110544142295;
    msg.z = 0.0841612442449;
    msg.z_units = 32U;
    msg.speed = 0.515373446385;
    msg.speed_units = 33U;
    msg.bearing = 0.679952638268;
    msg.cross_angle = 0.518508582608;
    msg.width = 0.326571101573;
    msg.length = 0.856162691954;
    msg.hstep = 0.627854087121;
    msg.coff = 61U;
    msg.alternation = 170U;
    msg.flags = 111U;
    msg.custom.assign("XCHBEBANPWKFEVMDKBDBUKPPHZXRVWBBPYZSRAIPGSJWDMKFOYXRYUEAVGYTXAPLUZROATXMTQJAWIJBGRPBGCSLOOKXWENTLTVCRUYHESZNUDMRGCFGDVYSDNWXIOKVLSLMXQZSICSUDQKZJNKJIFQORABPN");

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
    msg.setTimeStamp(0.793239353441);
    msg.setSource(55272U);
    msg.setSourceEntity(170U);
    msg.setDestination(4917U);
    msg.setDestinationEntity(23U);
    msg.timeout = 56935U;
    msg.lat = 0.822056372303;
    msg.lon = 0.165380640481;
    msg.z = 0.561093984574;
    msg.z_units = 224U;
    msg.speed = 0.0962441372674;
    msg.speed_units = 55U;
    msg.bearing = 0.231612475864;
    msg.cross_angle = 0.395926856572;
    msg.width = 0.471397798469;
    msg.length = 0.24354924976;
    msg.hstep = 0.715947587359;
    msg.coff = 143U;
    msg.alternation = 236U;
    msg.flags = 234U;
    msg.custom.assign("TBFZLRXSGLSEPRMOMZUJQNQTWLBIARYZNGUXRTOIYHWHRDPYPHSBQURDDXR");

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
    msg.setTimeStamp(0.583131941676);
    msg.setSource(64469U);
    msg.setSourceEntity(245U);
    msg.setDestination(28022U);
    msg.setDestinationEntity(109U);
    msg.timeout = 15988U;
    msg.lat = 0.0818662057078;
    msg.lon = 0.218133391893;
    msg.z = 0.087904647;
    msg.z_units = 71U;
    msg.speed = 0.796188699426;
    msg.speed_units = 209U;
    msg.bearing = 0.07759213074;
    msg.cross_angle = 0.875095883601;
    msg.width = 0.474464529861;
    msg.length = 0.987027968582;
    msg.hstep = 0.292442182546;
    msg.coff = 101U;
    msg.alternation = 37U;
    msg.flags = 176U;
    msg.custom.assign("MUZKYAJEHUMFPVOLQJSGOVZQAMYDEIJKLXWPLCZFEVWMTMWEIWYGRBLILXIZWRFUBCNGQATADRKSIYCUJCNEUVXFJSBESFGTEDNPMJGQOVDAWXONIKRWFYTLFGHERKTPCJXBPKCRGANDCLXIZBVBNBHWQPXHNAZTWYQSRKPZNMYQMKD");

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
    msg.setTimeStamp(0.309867008523);
    msg.setSource(12638U);
    msg.setSourceEntity(245U);
    msg.setDestination(57526U);
    msg.setDestinationEntity(170U);
    msg.timeout = 13082U;
    msg.lat = 0.97212985322;
    msg.lon = 0.326831181116;
    msg.z = 0.366264592537;
    msg.z_units = 104U;
    msg.speed = 0.294723519134;
    msg.speed_units = 128U;
    msg.custom.assign("FQZCUDZIFWJLGAGNARNYBXRIWHJTOOSENXRCAVSVEKEJXBVTGCMGKXHHJZKQAUDSTPSQHXUYWSBQQSFJRSHNRGUODOMFGLNSEIVKAUREBDOWTFWUDLZADJMWQTLWFKZPLBVPAGDQHACYYLRXUFMLPDQBUOCNTX");

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
    msg.setTimeStamp(0.847786568081);
    msg.setSource(12357U);
    msg.setSourceEntity(128U);
    msg.setDestination(47404U);
    msg.setDestinationEntity(234U);
    msg.timeout = 31536U;
    msg.lat = 0.084468449827;
    msg.lon = 0.833564902274;
    msg.z = 0.135048920368;
    msg.z_units = 118U;
    msg.speed = 0.0058682564798;
    msg.speed_units = 34U;
    msg.custom.assign("TWJZIOFOHCCKABXTVPRAKUPKTCXFPABQQRPEKWZYLDMJQLYJNOOOYRCZNLJYVQUZAUNIVNDAFGGDDHLUBWLZVKXGLEJMPXZXIBBITNJQOWFGFYUGXVDJTFZAGVVASEQHYIELWYYXEVQPMRCMBWKZCELTHTSAJCRNBUWSFUUNZHTPWYJPHTVGSSEIMTXKBMLWSIDMQYKQCCGRDPLEDOOKHMRKVDXFSSINEAOMISRXUOIFRDGHA");

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
    msg.setTimeStamp(0.346949823633);
    msg.setSource(61420U);
    msg.setSourceEntity(160U);
    msg.setDestination(16397U);
    msg.setDestinationEntity(150U);
    msg.timeout = 3680U;
    msg.lat = 0.590151349798;
    msg.lon = 0.258234237208;
    msg.z = 0.738667287338;
    msg.z_units = 167U;
    msg.speed = 0.271005983955;
    msg.speed_units = 161U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.103570179677;
    tmp_msg_0.y = 0.593138228119;
    tmp_msg_0.z = 0.0143530038197;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UTHDYORIMVQNBEZLXRUPZMHUXPLRYKLJMVBMEJXJUEDDUSPFNHSEPCOLSKWSXJOIJXQPGTHWGWKXIHRNFBUEALHQGIWCJWHRZVSCRAUVCEOVGGBWIKBZXUNUHDLDTSOGYDYCGF");

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
    msg.setTimeStamp(0.0322082034849);
    msg.setSource(53059U);
    msg.setSourceEntity(21U);
    msg.setDestination(26412U);
    msg.setDestinationEntity(158U);
    msg.x = 0.0905448517609;
    msg.y = 0.192030300056;
    msg.z = 0.152109656886;

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
    msg.setTimeStamp(0.993971861498);
    msg.setSource(39475U);
    msg.setSourceEntity(204U);
    msg.setDestination(43775U);
    msg.setDestinationEntity(19U);
    msg.x = 0.584747346543;
    msg.y = 0.22487779906;
    msg.z = 0.409850049043;

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
    msg.setTimeStamp(0.594809997764);
    msg.setSource(6859U);
    msg.setSourceEntity(4U);
    msg.setDestination(49498U);
    msg.setDestinationEntity(164U);
    msg.x = 0.89492503492;
    msg.y = 0.0409856500504;
    msg.z = 0.404574445021;

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
    msg.setTimeStamp(0.257436899423);
    msg.setSource(51409U);
    msg.setSourceEntity(68U);
    msg.setDestination(40865U);
    msg.setDestinationEntity(28U);
    msg.timeout = 12088U;
    msg.lat = 0.501847236864;
    msg.lon = 0.950411050664;
    msg.z = 0.69839049663;
    msg.z_units = 135U;
    msg.amplitude = 0.929024927945;
    msg.pitch = 0.692558487493;
    msg.speed = 0.00758009012348;
    msg.speed_units = 2U;
    msg.custom.assign("XCNKYMDAPPHQIVWDRHLYKFQARJSZCDEQOBQJSYPMIMSKKTBWWMWJOMWPAMHFVFUORRAOYHYIXNOGPPWCSSTDSKECJQECHMNVKYGUTERYIELLZLQFPNIOUGGKFSPDQYIVBXHXBUVEHLNWDZRBRPGNYCHGUVVNKKZXPJBRUAFOBNSXTQGTLGADJOIKSSFZTLJUGGFUAAUMODDAMINBWOTWZJIEAYZJUHHJMEWFQVIRXBCDQRLTEL");

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
    msg.setTimeStamp(0.3345438361);
    msg.setSource(28488U);
    msg.setSourceEntity(220U);
    msg.setDestination(3623U);
    msg.setDestinationEntity(58U);
    msg.timeout = 2218U;
    msg.lat = 0.778650681978;
    msg.lon = 0.520216325537;
    msg.z = 0.483641606213;
    msg.z_units = 205U;
    msg.amplitude = 0.0799780135702;
    msg.pitch = 0.633605887772;
    msg.speed = 0.604841407629;
    msg.speed_units = 207U;
    msg.custom.assign("LBQTQHLTEJOUCSRKD");

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
    msg.setTimeStamp(0.17813087222);
    msg.setSource(11653U);
    msg.setSourceEntity(118U);
    msg.setDestination(40242U);
    msg.setDestinationEntity(13U);
    msg.timeout = 54447U;
    msg.lat = 0.297091697048;
    msg.lon = 0.391247596934;
    msg.z = 0.779459523747;
    msg.z_units = 62U;
    msg.amplitude = 0.625095572762;
    msg.pitch = 0.673382886586;
    msg.speed = 0.341133878774;
    msg.speed_units = 254U;
    msg.custom.assign("KZRSVVMQAYGOAPQSEQQEKLBDLWYJDQNOUWXGYTFUURBTCLXYSESIMTHBXLTBIHAONCPIPGUGRVKWHZJWHSMBOOMGUACJKAVIFDPMXWPLFJEYNKRJSUIOHXTAXXEGNCQZUNJHDEHODYFVAFNRPBWGZIDTQWHYZQSEDRWZZIBFKZUVCPOMGRHJMTFOEKMCFXVFSQCPSUAPLJIYLLBTEAJDGZKHWOQYTLTBYRNCDJKRSIMINCD");

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
    msg.setTimeStamp(0.692645407186);
    msg.setSource(22607U);
    msg.setSourceEntity(125U);
    msg.setDestination(26739U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.618777743608);
    msg.setSource(19333U);
    msg.setSourceEntity(174U);
    msg.setDestination(22642U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.631412476596);
    msg.setSource(53806U);
    msg.setSourceEntity(200U);
    msg.setDestination(21082U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.979067908457);
    msg.setSource(63569U);
    msg.setSourceEntity(1U);
    msg.setDestination(10800U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.194371701855;
    msg.lon = 0.0881931563739;
    msg.z = 0.729036022862;
    msg.z_units = 40U;
    msg.radius = 0.636011827091;
    msg.duration = 46689U;
    msg.speed = 0.229867682354;
    msg.speed_units = 117U;
    msg.custom.assign("KTZOCWPEYJQBRNRCEFEUWJVDJQBABMZGWSUMAANZNRLPHBOIIDDGBAULZEUDJQKFYUUGVIAEBHOMYQOKLIRXCCMQCDVZTBFTWLYMKJFWPRDYYPVTXROMHSELQHJPPEPRTZYJAOJSWIAISLNIUUCSXJSCXLUNVXHKZCMBBWKLNVXGXATTQAISWRQQVVDSKGGPIPGRXKXOGBMKVZXKSHVDFGOWNHTDZFALYGOMFUSFDWECHHCQZNLEY");

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
    msg.setTimeStamp(0.447582942893);
    msg.setSource(37423U);
    msg.setSourceEntity(62U);
    msg.setDestination(38419U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.551073810927;
    msg.lon = 0.989363508955;
    msg.z = 0.867598552197;
    msg.z_units = 126U;
    msg.radius = 0.479987117952;
    msg.duration = 9910U;
    msg.speed = 0.906468435114;
    msg.speed_units = 187U;
    msg.custom.assign("ZAIMPIAFVEHMYPCUPVXNJLCUEMCLO");

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
    msg.setTimeStamp(0.819577341271);
    msg.setSource(36239U);
    msg.setSourceEntity(224U);
    msg.setDestination(52530U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.550105268753;
    msg.lon = 0.502566158061;
    msg.z = 0.828118579133;
    msg.z_units = 148U;
    msg.radius = 0.59256624694;
    msg.duration = 28103U;
    msg.speed = 0.984450779324;
    msg.speed_units = 27U;
    msg.custom.assign("ZHELTSFZMFXTDBWBTLFJRBDWUUQHEISDNRJPMGAIUBZQHXEOXAVSWTMACAUYUYYPG");

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
    msg.setTimeStamp(0.765089667013);
    msg.setSource(31456U);
    msg.setSourceEntity(206U);
    msg.setDestination(25793U);
    msg.setDestinationEntity(37U);
    msg.timeout = 15502U;
    msg.flags = 55U;
    msg.lat = 0.92900633667;
    msg.lon = 0.166063389354;
    msg.start_z = 0.14827327112;
    msg.start_z_units = 179U;
    msg.end_z = 0.201646686901;
    msg.end_z_units = 236U;
    msg.radius = 0.1297444188;
    msg.speed = 0.524842573345;
    msg.speed_units = 15U;
    msg.custom.assign("LFPFDIGNTTQANVZBHWDGLCGNKNMZRKNYSVFUMKWMTIUYQYTZEUWABAUWILWXSQORUXAWPVLLYUJGXOCCHEZKKFMRBFJVHQRCQPIDEPWBZJQFKCEUTHVCJPQYTPPXQPXVFZOMEEOINBIGEXXSRRRGASSOIWNSBDNJGYFCDTZBQJFGYQMWNNF");

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
    msg.setTimeStamp(0.58087311355);
    msg.setSource(5426U);
    msg.setSourceEntity(173U);
    msg.setDestination(46777U);
    msg.setDestinationEntity(235U);
    msg.timeout = 25156U;
    msg.flags = 116U;
    msg.lat = 0.163669861007;
    msg.lon = 0.969688257491;
    msg.start_z = 0.3707545303;
    msg.start_z_units = 194U;
    msg.end_z = 0.424686490698;
    msg.end_z_units = 190U;
    msg.radius = 0.557767020773;
    msg.speed = 0.25489869481;
    msg.speed_units = 75U;
    msg.custom.assign("HJVHKXLUATBNQWNVMYRMFDUZMLXLPTNHBUABDSOLTKBCMUQGWENKPGGEUHZIJCEXSBKYCKQYOCOVDKFVQPOWFGTMHIROPUJGQSOPYRQINFZKULOISVYCBUUSFWXBQXXGIWRIITTJEJNMFOEFHKUJZHNZZAXLLAJEEPT");

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
    msg.setTimeStamp(0.393171942063);
    msg.setSource(46512U);
    msg.setSourceEntity(87U);
    msg.setDestination(24953U);
    msg.setDestinationEntity(121U);
    msg.timeout = 61668U;
    msg.flags = 249U;
    msg.lat = 0.521195048406;
    msg.lon = 0.500759814714;
    msg.start_z = 0.776829418298;
    msg.start_z_units = 143U;
    msg.end_z = 0.381188079869;
    msg.end_z_units = 112U;
    msg.radius = 0.185512641644;
    msg.speed = 0.0655728068054;
    msg.speed_units = 222U;
    msg.custom.assign("DKALFQNUUJISYLKFJRBZBLKOWUZLYYXRTVZUAVTYECTNRHCFYODGBZMNLZNEQPJD");

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
    msg.setTimeStamp(0.0436287520289);
    msg.setSource(13386U);
    msg.setSourceEntity(239U);
    msg.setDestination(25747U);
    msg.setDestinationEntity(57U);
    msg.timeout = 23069U;
    msg.lat = 0.0299879130167;
    msg.lon = 0.068960035375;
    msg.z = 0.782666965886;
    msg.z_units = 58U;
    msg.speed = 0.767457847484;
    msg.speed_units = 170U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.903518536259;
    tmp_msg_0.y = 0.29284051974;
    tmp_msg_0.z = 0.146323297467;
    tmp_msg_0.t = 0.279830615308;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AASKDWTXYGDFJLVGJWKTWKQCLSYMLDSMXFXFOZRSRJXFCKKFPWTRDUZOHEHVJRWWBBGHBJHIHBHAGVTQYNJYIBMZNOCNYMXOVLNECPONGOPCPCNDVUKDLYNGLPIWEBLATQWMCQSUCHKSZLEVFQMXJRRTAGJPEMURXFQEWEZXCAFABGUWUBUIHIOTSDVEPASZKTDHYHKTFQTLXZAQVUCSVPQIORZYEODYG");

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
    msg.setTimeStamp(0.0939295759841);
    msg.setSource(46609U);
    msg.setSourceEntity(230U);
    msg.setDestination(31391U);
    msg.setDestinationEntity(37U);
    msg.timeout = 27721U;
    msg.lat = 0.487391267272;
    msg.lon = 0.583157930461;
    msg.z = 0.161025273609;
    msg.z_units = 149U;
    msg.speed = 0.664257082742;
    msg.speed_units = 28U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.665760987819;
    tmp_msg_0.y = 0.567500314109;
    tmp_msg_0.z = 0.819218123194;
    tmp_msg_0.t = 0.455151885605;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SXSYPPEBHANMAFOSZVFBSUHJHIGOMRQZBWRMRPRYWCAWGRUEVSETXCEZMXGULIMQCVTCDYFORLQCLKYTWZYDJMSYBPDOQLHQBJRWFUILITPSPCDAELDGFHJOVZEDXITNUOAUFREKKT");

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
    msg.setTimeStamp(0.123195797342);
    msg.setSource(15878U);
    msg.setSourceEntity(14U);
    msg.setDestination(62179U);
    msg.setDestinationEntity(130U);
    msg.timeout = 37993U;
    msg.lat = 0.459487613407;
    msg.lon = 0.19072051867;
    msg.z = 0.76614830912;
    msg.z_units = 160U;
    msg.speed = 0.284504867005;
    msg.speed_units = 171U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.269840490526;
    tmp_msg_0.y = 0.578189045303;
    tmp_msg_0.z = 0.631044735202;
    tmp_msg_0.t = 0.248612377722;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IXEHETTHVPEPQZRUWFIQHBKVDFNZRMUXMFOSLEKAAQJVGUJSWBAMXBCODVWOUJZFFWDRZUIRXDQGMMAAKXSRHXLSMYSADSBYPCCVRLOQFQENDOIQKPXBGBZOYKLTXACETQTWPFUNZTKBDWAJQSRHICLGTZLWDCWHUIVYPHESIDENGOLFPELBKNMEWTJBJAIMPTRYZCJVMVYCVRROK");

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
    msg.setTimeStamp(0.95581531762);
    msg.setSource(54665U);
    msg.setSourceEntity(241U);
    msg.setDestination(13693U);
    msg.setDestinationEntity(30U);
    msg.x = 0.793970020261;
    msg.y = 0.00905409844071;
    msg.z = 0.274929635406;
    msg.t = 0.245942537266;

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
    msg.setTimeStamp(0.334089832848);
    msg.setSource(16561U);
    msg.setSourceEntity(4U);
    msg.setDestination(29360U);
    msg.setDestinationEntity(232U);
    msg.x = 0.391909506927;
    msg.y = 0.474607098029;
    msg.z = 0.022282921226;
    msg.t = 0.25581668251;

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
    msg.setTimeStamp(0.306917588833);
    msg.setSource(39356U);
    msg.setSourceEntity(99U);
    msg.setDestination(60138U);
    msg.setDestinationEntity(108U);
    msg.x = 0.0808319082295;
    msg.y = 0.840588787943;
    msg.z = 0.360203075555;
    msg.t = 0.820211813366;

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
    msg.setTimeStamp(0.184227234619);
    msg.setSource(27728U);
    msg.setSourceEntity(96U);
    msg.setDestination(31966U);
    msg.setDestinationEntity(127U);
    msg.timeout = 47399U;
    msg.name.assign("OCDXJWDDZLIOVI");
    msg.custom.assign("WAKTIAFRBATNPVOQKDOOPIEPLHXJMIGNMMFVDOXWNPQYJJJRDDQHBFSRASHIIVEBCXMZMZEEDWRVWNACML");

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
    msg.setTimeStamp(0.554558396781);
    msg.setSource(672U);
    msg.setSourceEntity(4U);
    msg.setDestination(60527U);
    msg.setDestinationEntity(47U);
    msg.timeout = 57608U;
    msg.name.assign("SXLUMLXVPZAFTPHWDVIARQQZBMRHJDOFI");
    msg.custom.assign("XHRSVYUOKADQRPXVICXCEHRJBLWMRWQSSVMGWOTNMATWOPZIFFUFBFCHOOKCQLUIDMLEUGTWKYRGRCYXIJJDWLFGFWSUAXAQHYIZCTZLALFSOAVAHBKLDYSUNINIYTHZTSKOVEXGNNPIYIKSUKURJBDUTQZRZYBPMVOPDXGYFQELNAPOMCGTHMUGJZKWEWDHFDBDBEXSAPOVXMLBJJQGNRECJNHGCZPZ");

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
    msg.setTimeStamp(0.801213450155);
    msg.setSource(8815U);
    msg.setSourceEntity(248U);
    msg.setDestination(16059U);
    msg.setDestinationEntity(138U);
    msg.timeout = 52305U;
    msg.name.assign("MZMDHABDSLHJJYKIIUAO");
    msg.custom.assign("BJWKPCPYODUNIBZOJLREHQLLSVSQGDWBTYCSEQVYHHZXZALNLYIECKNNTRBKFAECRHHDNQIAIVGFCOXFUMXJFZVBVQDMDWPR");

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
    msg.setTimeStamp(0.0244650465756);
    msg.setSource(47733U);
    msg.setSourceEntity(86U);
    msg.setDestination(10101U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.383830577211;
    msg.lon = 0.629974355131;
    msg.z = 0.445597611509;
    msg.z_units = 124U;
    msg.speed = 0.787170118529;
    msg.speed_units = 42U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27904U;
    tmp_msg_0.off_x = 0.937830686493;
    tmp_msg_0.off_y = 0.321087557485;
    tmp_msg_0.off_z = 0.3322410555;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.174866972474;
    msg.custom.assign("ULNZEDEVLTGCTZWKIXKIIUONLTOWLXKYUXPTNIRCPYGJHGLKVMMZPESCUZHDVOFCZNGCWANVAZILIEMTZNVMUJWLYXHLOVILYPPZUZDDYVFDQXAAJKRGPRJTHSDTWRDMQDMNBYBJNVXYSBEGSKFINOR");

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
    msg.setTimeStamp(0.385465748054);
    msg.setSource(26985U);
    msg.setSourceEntity(230U);
    msg.setDestination(27081U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.791382427667;
    msg.lon = 0.429890359612;
    msg.z = 0.707011824694;
    msg.z_units = 141U;
    msg.speed = 0.621661030537;
    msg.speed_units = 56U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.11220270113;
    tmp_msg_0.y = 0.270788474349;
    tmp_msg_0.z = 0.754039017456;
    tmp_msg_0.t = 0.236510050602;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 26272U;
    tmp_msg_1.off_x = 0.739376023847;
    tmp_msg_1.off_y = 0.63770879284;
    tmp_msg_1.off_z = 0.361214550679;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0537146753246;
    msg.custom.assign("ULUQSMVRGXMYRNOVGPVNPPJFDURVJCLQETBICNRHLVEMFNQTZIVTHFYJBCLLZAEZSGMEVTKMKLUDULTFJACZSAYJNNDEMWHKCDYWKTSKNCFOPILVZBWNFBXKYVDYHBOPAGRHXCBAJKTIBDYTPJKWIRGBSGAMIYAQFZZRPEHCRUHQESQXDKTREQSCWEIUPMCDFQMXPRYSHWOZSNXGSDIIXJVUFZOXBGTOUYMJXAWOFLOXWLHN");

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
    msg.setTimeStamp(0.0450964566131);
    msg.setSource(21529U);
    msg.setSourceEntity(1U);
    msg.setDestination(24637U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.546670604099;
    msg.lon = 0.200191276188;
    msg.z = 0.0127471835677;
    msg.z_units = 183U;
    msg.speed = 0.662515813959;
    msg.speed_units = 64U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63809U;
    tmp_msg_0.off_x = 0.669351401719;
    tmp_msg_0.off_y = 0.85443076518;
    tmp_msg_0.off_z = 0.944050213882;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.310173078791;
    msg.custom.assign("UTSTIDGJJNSFQCXYLQFWAZALSXTAPBMBNJZUZCWAWQVIWJXYQCENNGXDKIBVLHRGDLTPKXPRBCXTJHBMJTUZLRAIPDCLSRHQDZSYUUIYRHFMNVILZYZKONAMGYYGCOOWXBDGJQDZP");

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
    msg.setTimeStamp(0.776495516463);
    msg.setSource(31843U);
    msg.setSourceEntity(104U);
    msg.setDestination(1864U);
    msg.setDestinationEntity(223U);
    msg.vid = 49708U;
    msg.off_x = 0.191059879646;
    msg.off_y = 0.562023403283;
    msg.off_z = 0.325870275893;

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
    msg.setTimeStamp(0.312789146837);
    msg.setSource(33374U);
    msg.setSourceEntity(247U);
    msg.setDestination(23109U);
    msg.setDestinationEntity(186U);
    msg.vid = 58662U;
    msg.off_x = 0.529822632974;
    msg.off_y = 0.0422666650706;
    msg.off_z = 0.226032034094;

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
    msg.setTimeStamp(0.530242152208);
    msg.setSource(50982U);
    msg.setSourceEntity(210U);
    msg.setDestination(49289U);
    msg.setDestinationEntity(163U);
    msg.vid = 18243U;
    msg.off_x = 0.917113577229;
    msg.off_y = 0.557643843799;
    msg.off_z = 0.81526867154;

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
    msg.setTimeStamp(0.138361395798);
    msg.setSource(36010U);
    msg.setSourceEntity(230U);
    msg.setDestination(36585U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.583883881633);
    msg.setSource(13309U);
    msg.setSourceEntity(242U);
    msg.setDestination(8594U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.703030133041);
    msg.setSource(59360U);
    msg.setSourceEntity(231U);
    msg.setDestination(14941U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.654033874802);
    msg.setSource(3704U);
    msg.setSourceEntity(184U);
    msg.setDestination(63156U);
    msg.setDestinationEntity(122U);
    msg.mid = 61866U;

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
    msg.setTimeStamp(0.33358777913);
    msg.setSource(13765U);
    msg.setSourceEntity(232U);
    msg.setDestination(13215U);
    msg.setDestinationEntity(148U);
    msg.mid = 6068U;

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
    msg.setTimeStamp(0.459751080342);
    msg.setSource(12237U);
    msg.setSourceEntity(23U);
    msg.setDestination(54031U);
    msg.setDestinationEntity(172U);
    msg.mid = 12299U;

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
    msg.setTimeStamp(0.836984945361);
    msg.setSource(54286U);
    msg.setSourceEntity(138U);
    msg.setDestination(57564U);
    msg.setDestinationEntity(68U);
    msg.state = 45U;
    msg.eta = 62895U;
    msg.info.assign("NGQWKRBQXRMPLJTONOFNGXSWUYXAEVFKIZLNFPPJFSBEMMSQPADCGUVQAKIBQKGEVHJWWYPVXZQWUAJBUZVINSVTQTDHYCEPDRPSFALCRAEYNBDMZCELWZJLYMHDACRZJCFXAEVTMVBMPNJLATQBCUIBYSLMOYLGUZOEULRJPR");

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
    msg.setTimeStamp(0.43743151625);
    msg.setSource(30373U);
    msg.setSourceEntity(164U);
    msg.setDestination(37666U);
    msg.setDestinationEntity(195U);
    msg.state = 214U;
    msg.eta = 782U;
    msg.info.assign("FYPJURXEIOGQHJUKHEBHEZRNUSLIZKRWQFGTXVFASNNBKVKMIOEFCLSXBTBXKQGSDWVB");

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
    msg.setTimeStamp(0.262267132275);
    msg.setSource(7482U);
    msg.setSourceEntity(105U);
    msg.setDestination(43270U);
    msg.setDestinationEntity(165U);
    msg.state = 79U;
    msg.eta = 3187U;
    msg.info.assign("DGQYEMZIKSUDTBWFWFLUYJOWMFKEHSWYGEEPMWIEHXXJUNCDKPXEDMHTNPMNHDMWWJIPQKMLBTDPCITIRUKAEIQAHBJYGTXRHBTJVXBDASALZICULJVAFLZBKQPZESBJYTDDXVROCGUHVFYKLRLUQVYNJKYBNWSZNRQOSONRXBFUMNCVGOSLTFSJXCORGZGETXRGPCV");

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
    msg.setTimeStamp(0.567429783956);
    msg.setSource(60583U);
    msg.setSourceEntity(15U);
    msg.setDestination(8590U);
    msg.setDestinationEntity(4U);
    msg.system = 53515U;
    msg.duration = 26453U;
    msg.speed = 0.570769686731;
    msg.speed_units = 134U;
    msg.x = 0.956150683793;
    msg.y = 0.135265850132;
    msg.z = 0.862049084946;
    msg.z_units = 168U;

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
    msg.setTimeStamp(0.444124635364);
    msg.setSource(64970U);
    msg.setSourceEntity(246U);
    msg.setDestination(10301U);
    msg.setDestinationEntity(149U);
    msg.system = 9381U;
    msg.duration = 32683U;
    msg.speed = 0.394528670072;
    msg.speed_units = 219U;
    msg.x = 0.724089131258;
    msg.y = 0.79754661094;
    msg.z = 0.889114480271;
    msg.z_units = 95U;

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
    msg.setTimeStamp(0.193050165756);
    msg.setSource(3623U);
    msg.setSourceEntity(113U);
    msg.setDestination(22278U);
    msg.setDestinationEntity(14U);
    msg.system = 6894U;
    msg.duration = 20775U;
    msg.speed = 0.56083635674;
    msg.speed_units = 32U;
    msg.x = 0.792363393522;
    msg.y = 0.970079011408;
    msg.z = 0.640809205727;
    msg.z_units = 107U;

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
    msg.setTimeStamp(0.717286398673);
    msg.setSource(14499U);
    msg.setSourceEntity(203U);
    msg.setDestination(59032U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.380722033447;
    msg.lon = 0.68425238479;
    msg.speed = 0.5762765431;
    msg.speed_units = 145U;
    msg.duration = 59262U;
    msg.sys_a = 63204U;
    msg.sys_b = 55345U;
    msg.move_threshold = 0.590053456399;

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
    msg.setTimeStamp(0.214268936582);
    msg.setSource(3775U);
    msg.setSourceEntity(246U);
    msg.setDestination(39061U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.983883369664;
    msg.lon = 0.145598411606;
    msg.speed = 0.997705546298;
    msg.speed_units = 159U;
    msg.duration = 53688U;
    msg.sys_a = 26336U;
    msg.sys_b = 29721U;
    msg.move_threshold = 0.594276764059;

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
    msg.setTimeStamp(0.351910783649);
    msg.setSource(36716U);
    msg.setSourceEntity(65U);
    msg.setDestination(64905U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.315708348702;
    msg.lon = 0.668600822053;
    msg.speed = 0.396454294364;
    msg.speed_units = 208U;
    msg.duration = 7914U;
    msg.sys_a = 12160U;
    msg.sys_b = 48264U;
    msg.move_threshold = 0.78200036867;

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
    msg.setTimeStamp(0.587912928431);
    msg.setSource(9696U);
    msg.setSourceEntity(215U);
    msg.setDestination(3571U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.0669303766207;
    msg.lon = 0.386416055863;
    msg.z = 0.126547245765;
    msg.z_units = 26U;
    msg.speed = 0.811057975389;
    msg.speed_units = 35U;
    msg.custom.assign("RUJXOWREWEIBTYMBCXPVNXJIOZWUJJDPHBWXCYFJBLTDUASXPYHQDGYBEDUDUQVKCKZSSLESBGNEFFOHHKGTKTNPWWNVIZIPCDTAVROMLXLCPFIKQRVMZXTWDAMUCXBLOGNYRMVATJKAQMIRSFHMZJYECRLYGMGYKTJNVFZ");

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
    msg.setTimeStamp(0.964611163427);
    msg.setSource(22622U);
    msg.setSourceEntity(187U);
    msg.setDestination(9716U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.478338918691;
    msg.lon = 0.68980292557;
    msg.z = 0.772131585359;
    msg.z_units = 125U;
    msg.speed = 0.981798866128;
    msg.speed_units = 171U;
    msg.custom.assign("TXOLSXYHQRTPYBXU");

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
    msg.setTimeStamp(0.796130432746);
    msg.setSource(39514U);
    msg.setSourceEntity(181U);
    msg.setDestination(26008U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.372754711212;
    msg.lon = 0.804006323724;
    msg.z = 0.641760464555;
    msg.z_units = 166U;
    msg.speed = 0.233455432219;
    msg.speed_units = 228U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0702287685756;
    tmp_msg_0.lon = 0.632551773141;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ETLEUSKTUOIUJEAROHWQKLPGTUGQYKHEHVUCOLFFTRILHSTZCMIJMDIJSYXBAWIUEBRRKGSNHHBQSASPTFPNLNSQJDRBIPAKTFFJGAVZOHRVNACVGCJDPXKFYTARUHEZM");

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
    msg.setTimeStamp(0.73013803406);
    msg.setSource(47736U);
    msg.setSourceEntity(54U);
    msg.setDestination(17011U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.48329030178;
    msg.lon = 0.96841100207;

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
    msg.setTimeStamp(0.100026696182);
    msg.setSource(41242U);
    msg.setSourceEntity(18U);
    msg.setDestination(13510U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.79130815555;
    msg.lon = 0.126068742205;

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
    msg.setTimeStamp(0.34805782913);
    msg.setSource(6192U);
    msg.setSourceEntity(29U);
    msg.setDestination(42230U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.653041160722;
    msg.lon = 0.815583349227;

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
    msg.setTimeStamp(0.569503055583);
    msg.setSource(6584U);
    msg.setSourceEntity(254U);
    msg.setDestination(11127U);
    msg.setDestinationEntity(35U);
    msg.timeout = 19940U;
    msg.lat = 0.355021868218;
    msg.lon = 0.599111794221;
    msg.z = 0.268174338543;
    msg.z_units = 201U;
    msg.pitch = 0.444119266385;
    msg.amplitude = 0.27627746351;
    msg.duration = 29133U;
    msg.speed = 0.402032773515;
    msg.speed_units = 34U;
    msg.radius = 0.954539351515;
    msg.direction = 197U;
    msg.custom.assign("SFXWDWMEJSUPLCCUJFWONBISBAKHDUELYNZALKLUGKGKIFOJBQKIBXXXHKVGQEGVYPYPFRWEMCLWSEDYWDRHTOFMORJBJQEQZXTRMSSUCIFSQTJZZKPJBSAHVTPTBIZGPCETRQRZXUYDBJDWDFVOZNNAZSWFRCTAANZTUKYIZFNHYXFQPOQWUNGNLYGBLQHVOJYUEJKIGNMCROGNARHAMDOLLSVEMPXXAKMICLTDCXHVMBVUADVYIEQ");

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
    msg.setTimeStamp(0.812991995643);
    msg.setSource(27995U);
    msg.setSourceEntity(40U);
    msg.setDestination(3467U);
    msg.setDestinationEntity(173U);
    msg.timeout = 13630U;
    msg.lat = 0.396398212533;
    msg.lon = 0.521605402321;
    msg.z = 0.941093223582;
    msg.z_units = 86U;
    msg.pitch = 0.94223507691;
    msg.amplitude = 0.323759524163;
    msg.duration = 14225U;
    msg.speed = 0.454616156288;
    msg.speed_units = 134U;
    msg.radius = 0.592414541869;
    msg.direction = 216U;
    msg.custom.assign("XGPPCISNGLBFZVMEFACPYO");

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
    msg.setTimeStamp(0.483706188475);
    msg.setSource(62700U);
    msg.setSourceEntity(102U);
    msg.setDestination(34213U);
    msg.setDestinationEntity(30U);
    msg.timeout = 53241U;
    msg.lat = 0.269409128768;
    msg.lon = 0.160261558071;
    msg.z = 0.531167406439;
    msg.z_units = 65U;
    msg.pitch = 0.622358484887;
    msg.amplitude = 0.763999995621;
    msg.duration = 55767U;
    msg.speed = 0.502398064268;
    msg.speed_units = 190U;
    msg.radius = 0.910804164306;
    msg.direction = 243U;
    msg.custom.assign("ZGCHEBCBKZQXDVHPQPXRIGNACGYTAPJBLSUCUXTXWJNYDOATAESGSPHMEQYOUBMTWDSGFTJPOPGXIRRLURCIGDVDIWFYHLSVXWWQXWMJPOVHZFKIFRBSNQBJDZVRUETLKYEIOQMNLKWOUSCMZLZKFHNHYZAWOLNEVHTNPGMIVUJAJNDCXEZWXCZDYQQNAWBXETLKGBKIJRGADRLHEVN");

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
    msg.setTimeStamp(0.0344487284771);
    msg.setSource(19648U);
    msg.setSourceEntity(52U);
    msg.setDestination(15226U);
    msg.setDestinationEntity(164U);
    msg.control_src = 54794U;
    msg.control_ent = 90U;
    msg.timeout = 0.578038400991;
    msg.loiter_radius = 0.846527920533;
    msg.altitude_interval = 0.753021826675;

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
    msg.setTimeStamp(0.264206875865);
    msg.setSource(39305U);
    msg.setSourceEntity(216U);
    msg.setDestination(38592U);
    msg.setDestinationEntity(112U);
    msg.control_src = 14922U;
    msg.control_ent = 44U;
    msg.timeout = 0.777410804491;
    msg.loiter_radius = 0.185024197379;
    msg.altitude_interval = 0.565804241543;

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
    msg.setTimeStamp(0.63817313331);
    msg.setSource(60838U);
    msg.setSourceEntity(83U);
    msg.setDestination(11623U);
    msg.setDestinationEntity(125U);
    msg.control_src = 40265U;
    msg.control_ent = 50U;
    msg.timeout = 0.122431607651;
    msg.loiter_radius = 0.95558425517;
    msg.altitude_interval = 0.519216921813;

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
    msg.setTimeStamp(0.302996629033);
    msg.setSource(61488U);
    msg.setSourceEntity(151U);
    msg.setDestination(53864U);
    msg.setDestinationEntity(249U);
    msg.flags = 4U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.24307366698;
    tmp_msg_0.speed_units = 166U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.270273646033;
    tmp_msg_1.z_units = 72U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.431155396093;
    msg.lon = 0.962492983926;
    msg. radius = 0.974193927841;

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
    msg.setTimeStamp(0.579553770826);
    msg.setSource(65164U);
    msg.setSourceEntity(76U);
    msg.setDestination(13386U);
    msg.setDestinationEntity(179U);
    msg.flags = 214U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.808575014119;
    tmp_msg_0.speed_units = 130U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.740728366545;
    tmp_msg_1.z_units = 183U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.533756466053;
    msg.lon = 0.473023909888;
    msg. radius = 0.380715288743;

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
    msg.setTimeStamp(0.526313275616);
    msg.setSource(55191U);
    msg.setSourceEntity(117U);
    msg.setDestination(64954U);
    msg.setDestinationEntity(64U);
    msg.flags = 246U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.105424811695;
    tmp_msg_0.speed_units = 10U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.693013898084;
    tmp_msg_1.z_units = 197U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.916406235588;
    msg.lon = 0.888577781622;
    msg. radius = 0.11958995419;

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
    msg.setTimeStamp(0.170396371796);
    msg.setSource(17141U);
    msg.setSourceEntity(156U);
    msg.setDestination(10025U);
    msg.setDestinationEntity(116U);
    msg.control_src = 22300U;
    msg.control_ent = 221U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 118U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.73506141906;
    tmp_tmp_msg_0_0.speed_units = 237U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.776218706543;
    tmp_tmp_msg_0_1.z_units = 153U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.724225027912;
    tmp_msg_0.lon = 0.626317200429;
    tmp_msg_0. radius = 0.964209538694;
    msg.reference.set(tmp_msg_0);
    msg.state = 144U;
    msg.proximity = 96U;

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
    msg.setTimeStamp(0.164243800568);
    msg.setSource(45619U);
    msg.setSourceEntity(191U);
    msg.setDestination(27059U);
    msg.setDestinationEntity(175U);
    msg.control_src = 2443U;
    msg.control_ent = 51U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 50U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.606407553009;
    tmp_tmp_msg_0_0.speed_units = 122U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.44400356232;
    tmp_tmp_msg_0_1.z_units = 131U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.727345077408;
    tmp_msg_0.lon = 0.477448311509;
    tmp_msg_0. radius = 0.625280298401;
    msg.reference.set(tmp_msg_0);
    msg.state = 128U;
    msg.proximity = 94U;

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
    msg.setTimeStamp(0.400147805798);
    msg.setSource(56084U);
    msg.setSourceEntity(168U);
    msg.setDestination(54140U);
    msg.setDestinationEntity(80U);
    msg.control_src = 61266U;
    msg.control_ent = 102U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 14U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.00454201036255;
    tmp_tmp_msg_0_0.speed_units = 8U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.36446325692;
    tmp_tmp_msg_0_1.z_units = 219U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.900478873785;
    tmp_msg_0.lon = 0.0436960761177;
    tmp_msg_0. radius = 0.685828737141;
    msg.reference.set(tmp_msg_0);
    msg.state = 128U;
    msg.proximity = 102U;

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
    msg.setTimeStamp(0.178006610156);
    msg.setSource(21999U);
    msg.setSourceEntity(133U);
    msg.setDestination(36618U);
    msg.setDestinationEntity(112U);
    msg.op_mode = 245U;
    msg.error_count = 139U;
    msg.error_ents.assign("YQROAGXSELGLXPFKGRHZBOIARKKHMKRAWBMJCPZIRBMTZCWYDHQUTJINHEVVWVDNZXVXYSEPLHULFDPCEOTVX");
    msg.maneuver_type = 15850U;
    msg.maneuver_stime = 0.790799037323;
    msg.maneuver_eta = 38574U;
    msg.control_loops = 474553192U;
    msg.flags = 138U;
    msg.last_error.assign("UHNGWDQNOSMDUZCBNTZJPBRMTOVGRMHJQXLDBFAIRDFYLJFTEAXKZEAPS");
    msg.last_error_time = 0.202594671789;

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
    msg.setTimeStamp(0.993020107525);
    msg.setSource(9790U);
    msg.setSourceEntity(142U);
    msg.setDestination(36501U);
    msg.setDestinationEntity(94U);
    msg.op_mode = 48U;
    msg.error_count = 166U;
    msg.error_ents.assign("CUAMPTALXPGOIWFQMMWWOIJXYYCNVSVJXHUDBWTNSJRRVISHVHXBVSMGCWDQRCNJJCYDXCZAYFDHKQQEQKBNNYQLISGTHHPOWMROLFAXFDDBETLKZMGPFWTTAPBLGKHOKQZUOZFVJWKCJVDFNEFJRRKRXLINEQCGZFDUANLFESEGIDGTOJPQMGIIWOSTVRRYA");
    msg.maneuver_type = 43487U;
    msg.maneuver_stime = 0.536944768833;
    msg.maneuver_eta = 25958U;
    msg.control_loops = 3966543323U;
    msg.flags = 240U;
    msg.last_error.assign("YKEGLTFIZRZNEIEXBKCTPVNQFHYVOBLGCSSSEFKPHDMFPNCDKWIODLMUCXCEBMXWHKUKTEFHRWOJHSLCMCRAYGVCABEFJIM");
    msg.last_error_time = 0.0824441877173;

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
    msg.setTimeStamp(0.0234262914167);
    msg.setSource(14322U);
    msg.setSourceEntity(27U);
    msg.setDestination(37902U);
    msg.setDestinationEntity(54U);
    msg.op_mode = 97U;
    msg.error_count = 213U;
    msg.error_ents.assign("VOJCAXOUXFHIUNRRUEPHLPZQDUAJYQPTEPGGPYSLZSIKJA");
    msg.maneuver_type = 9484U;
    msg.maneuver_stime = 0.462514600011;
    msg.maneuver_eta = 23652U;
    msg.control_loops = 325123681U;
    msg.flags = 175U;
    msg.last_error.assign("GQOUKFKTLHIYBZMRGCICGGRZJVPUDJHCNTPFQFQOMOEHWWTBFQURTLOQYFIRUUZLBRUXAVXGJLMJNUXWVBIHPVWTJLLZETWAWDDDAWAPEQQZSPCYARDWDZSITVYRLOSLKMXMHOGGKYNQMLHCNEHIZLJENAMWBEGAECDASNKJYMPCNHTSHVMIHJ");
    msg.last_error_time = 0.131923645128;

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
    msg.setTimeStamp(0.9064039247);
    msg.setSource(16358U);
    msg.setSourceEntity(41U);
    msg.setDestination(56079U);
    msg.setDestinationEntity(195U);
    msg.type = 164U;
    msg.request_id = 7683U;
    msg.command = 52U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.758873484577;
    tmp_msg_0.lon = 0.984950353556;
    tmp_msg_0.z = 0.273982859478;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.radius = 0.234280125723;
    tmp_msg_0.duration = 12156U;
    tmp_msg_0.speed = 0.605421484547;
    tmp_msg_0.speed_units = 176U;
    tmp_msg_0.custom.assign("BFJFFESZPQIJPWTXEOMKNVGUKGVDZQJHBWIZBPQDZGIHEALCXWMTYCRVLJAACQJNOZCMAGOBSFVIRRMYKUVNZXLPDRSIHYFLIKLSGKBXUSQQNYKKMHFHBNLEBFYOWQHLOWGWLQUAXKIYTUFSXESCANETPDDOHUNOZSXNWLSARQFAPVOESNDGYIYUMJJERLPCQVHRAVTZWGCUGXEJZRODTMGZPCTP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57733U;
    msg.info.assign("OGBPKMUAQWVJYMJAGPYIAAOBUUHASHEDJGCBMRONOIOOEKCEBPCYDDPETVQWNDRWSGVTIRLTJIZLGRUVTLCGLQKEAGTUXXFEKWQSVFXOUPDYNLQRYIBKSKBHDKDLRGDWZOFIJMYRVBSCHI");

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
    msg.setTimeStamp(0.862931213761);
    msg.setSource(23321U);
    msg.setSourceEntity(127U);
    msg.setDestination(49682U);
    msg.setDestinationEntity(36U);
    msg.type = 173U;
    msg.request_id = 2761U;
    msg.command = 119U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.709448058428;
    tmp_msg_0.lon = 0.323897843954;
    tmp_msg_0.z = 0.115581303742;
    tmp_msg_0.z_units = 179U;
    tmp_msg_0.speed = 0.242109609132;
    tmp_msg_0.speed_units = 165U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.271905032604;
    tmp_tmp_msg_0_0.lon = 0.482535485376;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("KXDWKXEHKZRQWZUAOOYZRHRD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10344U;
    msg.info.assign("PAHFGXJDOTYLZROV");

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
    msg.setTimeStamp(0.0942315527909);
    msg.setSource(29762U);
    msg.setSourceEntity(146U);
    msg.setDestination(21921U);
    msg.setDestinationEntity(103U);
    msg.type = 50U;
    msg.request_id = 58836U;
    msg.command = 153U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 35089U;
    tmp_msg_0.lat = 0.441488715927;
    tmp_msg_0.lon = 0.918081800872;
    tmp_msg_0.z = 0.931321042374;
    tmp_msg_0.z_units = 38U;
    tmp_msg_0.speed = 0.108399089854;
    tmp_msg_0.speed_units = 140U;
    tmp_msg_0.custom.assign("HSLLTWNOLMHFAHSMJPDZHRGCKXWJCBGOACFMZKRVALOUZXEVAUBDKQOVNWHMOQEWODGTXXQLQBPTTENIUVTKGCEQKCMIDJLACSICIGZFSYUUZVXCFAYKWBBUVXZPKDWOZRBRLHORAQDSMPVLSQNIXJWYBRLFNEKEMBDIRYGPCPJDISNCXLOTVTTYEYBXAAUJJBHXSUK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6715U;
    msg.info.assign("FZLIZXPJVOCUNEKXDAVOX");

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
    msg.setTimeStamp(0.173161982441);
    msg.setSource(3001U);
    msg.setSourceEntity(53U);
    msg.setDestination(11855U);
    msg.setDestinationEntity(189U);
    msg.command = 217U;
    msg.entities.assign("WEREJKPZYPSZLHWGLRUVJEUOCPXNLILTBOAILMUMFPRSHDKZXQBFYPGKUXLRPPVIHIATIAFYYIETJTUXCXNNQTRRTBOCTAARGNVKZDNEYMRXMZPNKFDAFYBFXWTMBPJYYTJZEQKOIEHGOGBCAJLVMTLUCVJVHKDGCWONKYIDHIO");

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
    msg.setTimeStamp(0.51771331351);
    msg.setSource(19371U);
    msg.setSourceEntity(188U);
    msg.setDestination(6542U);
    msg.setDestinationEntity(136U);
    msg.command = 65U;
    msg.entities.assign("KKQPAJRGGAQALWWVLVZNUWIJMYYKWBNCKJETPICCWJVHHELBYMRSKUMHGQZRGVIJONYSVTPODFSUMOGWXBFDKBSRPOKRIXOKNDFXTXCRBXCDMEXMNPEPVLILTFBFNWSEYICJFLLCOZQJFLPHDJRQGZNHTNVZRYGNHMZEMFUOFKQTQVUBUDDWAYWEUGILPDADZEHAQXAOZSCUBQARDYJMHEFRPIIKGOTIJGSATXUCPSHOUXYLH");

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
    msg.setTimeStamp(0.0131875334242);
    msg.setSource(2563U);
    msg.setSourceEntity(85U);
    msg.setDestination(30841U);
    msg.setDestinationEntity(122U);
    msg.command = 224U;
    msg.entities.assign("BCXQUJEANMBTBFWGBJXNZVLGTKSUVNUUDIWHAKKEMEHOUQYHSATAW");

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
    msg.setTimeStamp(0.145150923722);
    msg.setSource(43098U);
    msg.setSourceEntity(112U);
    msg.setDestination(11485U);
    msg.setDestinationEntity(87U);
    msg.mcount = 239U;
    msg.mnames.assign("YETWASOGZLKNGFCQYFUQQOCBGKCQBHCZAXPJCGYJZFTNPOMKXLUTQISFTPNDHBIMWLPZADEYRUGDPVSWOQVGVEMHDECNTTWIAUOZTIXSHUJFHNRUMXCRGRABPBIRIURUCMJXFKFRQBVJOEVEKWBCOTZPBMAKEEMLNZVUGZHLIJBYVWSNKYBNMJQYSAPOQDOMXIXAHDVLTFC");
    msg.ecount = 84U;
    msg.enames.assign("KZTKGBZGVWRLMUGSTGDEIPGBKMRDCZACPWLQBPCTFUMFTWESDIEWLWVMYIAJFBAEFQPXPMXLFUUFVZNOXFVPQNIXHBBSDYDDORSRFPILUDZCUSBKUZHMYCVNRWZRWQWZTVQOYTILEOOHXBKSYUMREGMWVNEHYXXPWBLKTOYHRNANVHUNLAQXCQJDRADROJNOCKSJJNMILIETTCYFJFQQTZUCCABKVOSNSPGKXAJEEDYJXHJAZHMIASYGQJIG");
    msg.ccount = 111U;
    msg.cnames.assign("XQPOLZGAINRHEGTMFGMRTVMANFIPUBNLMQZLKPCCBTQXFVLRHKWATBGGCJSZHYKXJHXTKDQTWUCCRHZGSKWGWJPZSWDHYKKBDHXNAPHQPINEJUYILVBRLLESSMEZJTYARFKCAPDWJDRXFDFVEBOCUDYMQIAUIZFNFHYLUFEQSBUSZNSOKIUWXMVPNJSJVMEPRWBOAWYDSUDLIOMZCOHKOXZTQLCRWYARENGEOAPBVIVEGJXXQV");
    msg.last_error.assign("EHBXOAQEAKSYAGNKHIV");
    msg.last_error_time = 0.977033184135;

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
    msg.setTimeStamp(0.633251870995);
    msg.setSource(6750U);
    msg.setSourceEntity(54U);
    msg.setDestination(43580U);
    msg.setDestinationEntity(159U);
    msg.mcount = 166U;
    msg.mnames.assign("QFVGKLPATCFPJKYKHQXFJSCOSBG");
    msg.ecount = 78U;
    msg.enames.assign("PTSEFIZIHJKIXCVS");
    msg.ccount = 157U;
    msg.cnames.assign("ASCXNWVGCRUTMUNV");
    msg.last_error.assign("NGGZVFRMOIVNYYARPDIEYOPJBUVWVLKMIQSNHVOIBSZYLLPGHZDDNYDMCOAXUQUXWKEUNTHJQMXR");
    msg.last_error_time = 0.994353072084;

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
    msg.setTimeStamp(0.651398481459);
    msg.setSource(18951U);
    msg.setSourceEntity(27U);
    msg.setDestination(41137U);
    msg.setDestinationEntity(66U);
    msg.mcount = 25U;
    msg.mnames.assign("XELHWOYQZNQCVLNGFTKWMMDEDWXCLITGKJJFDOGMLMDOUBRLPZFZMRKSJQEUBWBUEJYARHCGSGQBYRWCPCHGXRTZFNANWBXRQWQQBULPPLMPYGFDKAVABAIMIISIXNARVSPERZTUNOASBOTUNKFKPOLQOTOVDMXTGEHVJJTMOQ");
    msg.ecount = 110U;
    msg.enames.assign("BLCUNAUPZCWKTHZHXBECQTIBRCYQJWIUSMIPOTPZNGBCBPAADVEQAZELVYVKAPGHKCDGTGIVVSBIFLNTCKZOEHVIMQSYHTSLKIKYX");
    msg.ccount = 83U;
    msg.cnames.assign("DEPIKLLPQEWWNPFRARKLWGVWZGQJQAFXOYHQXHOBNMXYWVIKICIFULNPGFCHHPTRSLB");
    msg.last_error.assign("AGLMETUGIXUOIWRWOPTDCUZPUTKECQYRDMSCWKQNJLOUVCTJLRQOXEJKBAHZIKSZFMHGYGZBEKFHJGQZDDORIHQKLBWPYVKQYA");
    msg.last_error_time = 0.175191570523;

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
    msg.setTimeStamp(0.741230308791);
    msg.setSource(20223U);
    msg.setSourceEntity(207U);
    msg.setDestination(48697U);
    msg.setDestinationEntity(104U);
    msg.mask = 36U;
    msg.max_depth = 0.870609459769;
    msg.min_altitude = 0.546399197706;
    msg.max_altitude = 0.221826965698;
    msg.min_speed = 0.174269449343;
    msg.max_speed = 0.557569074391;
    msg.max_vrate = 0.925897939137;
    msg.lat = 0.840019026102;
    msg.lon = 0.67630086002;
    msg.orientation = 0.665904919169;
    msg.width = 0.822875363174;
    msg.length = 0.5300452231;

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
    msg.setTimeStamp(0.477454334327);
    msg.setSource(7580U);
    msg.setSourceEntity(2U);
    msg.setDestination(61275U);
    msg.setDestinationEntity(186U);
    msg.mask = 30U;
    msg.max_depth = 0.951555296775;
    msg.min_altitude = 0.935958447995;
    msg.max_altitude = 0.597158089388;
    msg.min_speed = 0.487282628642;
    msg.max_speed = 0.747989786241;
    msg.max_vrate = 0.917965356092;
    msg.lat = 0.812534696767;
    msg.lon = 0.47277858168;
    msg.orientation = 0.0551210090483;
    msg.width = 0.516797915405;
    msg.length = 0.214371053003;

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
    msg.setTimeStamp(0.371297247055);
    msg.setSource(53965U);
    msg.setSourceEntity(127U);
    msg.setDestination(59369U);
    msg.setDestinationEntity(44U);
    msg.mask = 115U;
    msg.max_depth = 0.277139003711;
    msg.min_altitude = 0.566816267819;
    msg.max_altitude = 0.199061875012;
    msg.min_speed = 0.662545219058;
    msg.max_speed = 0.85901474416;
    msg.max_vrate = 0.728850431644;
    msg.lat = 0.741460401189;
    msg.lon = 0.0997676494347;
    msg.orientation = 0.638292379011;
    msg.width = 0.502901065159;
    msg.length = 0.937106334145;

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
    msg.setTimeStamp(0.540084975754);
    msg.setSource(19641U);
    msg.setSourceEntity(91U);
    msg.setDestination(32827U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.473813821227);
    msg.setSource(43577U);
    msg.setSourceEntity(207U);
    msg.setDestination(50194U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.777645936836);
    msg.setSource(37893U);
    msg.setSourceEntity(57U);
    msg.setDestination(35820U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.686284948937);
    msg.setSource(37593U);
    msg.setSourceEntity(37U);
    msg.setDestination(53557U);
    msg.setDestinationEntity(204U);
    msg.duration = 47563U;

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
    msg.setTimeStamp(0.0977834989107);
    msg.setSource(48715U);
    msg.setSourceEntity(110U);
    msg.setDestination(32631U);
    msg.setDestinationEntity(26U);
    msg.duration = 21274U;

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
    msg.setTimeStamp(0.364539434324);
    msg.setSource(43566U);
    msg.setSourceEntity(167U);
    msg.setDestination(25469U);
    msg.setDestinationEntity(199U);
    msg.duration = 6803U;

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
    msg.setTimeStamp(0.382529866778);
    msg.setSource(47384U);
    msg.setSourceEntity(252U);
    msg.setDestination(18371U);
    msg.setDestinationEntity(204U);
    msg.enable = 32U;
    msg.mask = 2263090601U;
    msg.scope_ref = 0.362332432529;

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
    msg.setTimeStamp(0.449184983705);
    msg.setSource(16780U);
    msg.setSourceEntity(172U);
    msg.setDestination(6619U);
    msg.setDestinationEntity(24U);
    msg.enable = 1U;
    msg.mask = 1714167535U;
    msg.scope_ref = 0.927424446794;

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
    msg.setTimeStamp(0.652332692947);
    msg.setSource(46200U);
    msg.setSourceEntity(134U);
    msg.setDestination(63797U);
    msg.setDestinationEntity(167U);
    msg.enable = 29U;
    msg.mask = 195983355U;
    msg.scope_ref = 0.966695864343;

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
    msg.setTimeStamp(0.544602844262);
    msg.setSource(21835U);
    msg.setSourceEntity(42U);
    msg.setDestination(61128U);
    msg.setDestinationEntity(120U);
    msg.medium = 205U;

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
    msg.setTimeStamp(0.791647259111);
    msg.setSource(50269U);
    msg.setSourceEntity(136U);
    msg.setDestination(46514U);
    msg.setDestinationEntity(207U);
    msg.medium = 127U;

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
    msg.setTimeStamp(0.475230384013);
    msg.setSource(53222U);
    msg.setSourceEntity(210U);
    msg.setDestination(52974U);
    msg.setDestinationEntity(178U);
    msg.medium = 173U;

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
    msg.setTimeStamp(0.393783097518);
    msg.setSource(23947U);
    msg.setSourceEntity(238U);
    msg.setDestination(50979U);
    msg.setDestinationEntity(140U);
    msg.value = 0.375953668406;
    msg.type = 209U;

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
    msg.setTimeStamp(0.836689825643);
    msg.setSource(41084U);
    msg.setSourceEntity(129U);
    msg.setDestination(44776U);
    msg.setDestinationEntity(229U);
    msg.value = 0.858609698859;
    msg.type = 16U;

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
    msg.setTimeStamp(0.322088730411);
    msg.setSource(6061U);
    msg.setSourceEntity(8U);
    msg.setDestination(17790U);
    msg.setDestinationEntity(238U);
    msg.value = 0.329606582003;
    msg.type = 224U;

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
    msg.setTimeStamp(0.353307637312);
    msg.setSource(14719U);
    msg.setSourceEntity(162U);
    msg.setDestination(4135U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.508459768631);
    msg.setSource(58874U);
    msg.setSourceEntity(180U);
    msg.setDestination(17326U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.999493697836);
    msg.setSource(27210U);
    msg.setSourceEntity(140U);
    msg.setDestination(28902U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.631001148769);
    msg.setSource(45369U);
    msg.setSourceEntity(57U);
    msg.setDestination(29559U);
    msg.setDestinationEntity(29U);
    msg.plan_id.assign("QXVZCTRVJPWLBYCWXRKBNWJXCPEZXVSOBHUJQXSTOPKQF");
    msg.description.assign("AFCTLCGTHDFODFZQGKXHOLPUEJIUMOIJNOZYLDNWNMERVAQMPIBNVQXNSDCXDAESLAGPWWHBMBBUTIWBEMWBGRFIUBQKTAZNKESINCHNOKQXDRPCUXBBMHSFICUGECORRJWXJAXGXIYIJSMPTDZEVTPUQKOPFCYVKMJHUVRGYPQJUFXOJGRARYZIYHX");
    msg.vnamespace.assign("NRSLKFVOFNBXTQPOJCKEBIJPQZB");
    msg.start_man_id.assign("RBPJAPBELJUPQERYCQXKIVTTWOXPMDTBIUDYKQSYPGXATHCYHOSJEMWUA");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("VWSBCAVQGDXABWZLENWQGRJJGOTCYNRCZERJJCPDXKHDXTVWQUICHJIHYEEMBNBGWLPAFCSKGMTWLCMYFCKBBAQJHULQIMFRLXVATWRRFHAFPYQSIUPIYOLZUUVOMKLNSOXBXAVDZKZZELMNHDDXNSOBASUVJSGXBUCVVVETPTLOCFKIBFKJRKNTNAIYXHJNGHZRLPDMT");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 5221U;
    tmp_tmp_msg_0_0.lat = 0.866392848413;
    tmp_tmp_msg_0_0.lon = 0.654088286362;
    tmp_tmp_msg_0_0.z = 0.953314589224;
    tmp_tmp_msg_0_0.z_units = 162U;
    tmp_tmp_msg_0_0.amplitude = 0.299823892439;
    tmp_tmp_msg_0_0.pitch = 0.19662276167;
    tmp_tmp_msg_0_0.speed = 0.177626428189;
    tmp_tmp_msg_0_0.speed_units = 195U;
    tmp_tmp_msg_0_0.custom.assign("YLKOPXUXBNBLMECPAROGUJJVTOYOLXQVHBIHECSUISVRJPCQQWGWVMXPTXMENCIPRAWFRKMIVVYAUKIZQJFFEYACMPALTUMNVDHGGUFSDUYFQHANKXERKCTTWQCYJUJXNSDHJSAEZIFWUQYTV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredRoll tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.204579828165;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PHRNQPPPYUFXOGCRFVPWHLGLCXKNMZSYSWNGJJ");
    tmp_msg_1.dest_man.assign("AJQQECRWHLMWDMGZDNQZJJUBHWTKMYXIAUZKZYIYVGPEEINFYOSRHXLHPDTKYYVLPZJWYBHXIFNMIBXOEZEAQPMBRSFTQPVHDARQZUTHYNPOKKLCAQEN");
    tmp_msg_1.conditions.assign("LKEALXLBQXTNPNPMRUDCWULOYYOGIIAMJAPRDWKNEZPBJTTEHTUKASAVUITYSORFFQXAJBUSEOCPXJZYWOSRPNJUXYRNJDQZSMIICRQCVDCJXFTIDVNFHGEHKGXZLZPRHZHGDLABFPBMWHMPNPHFSOEKL");
    IMC::SmsRx tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.source.assign("UDAXZLVKERHNSLUQJKILCUCIGYDTNJVVRENJGGQSVGNLJVIOVZZIXRZRBMEKUMVDXBLNRXDNAQXMKUDGODMYIPGFOPAEGPQEPEWTXLWQCDFWZPZWCYLWMOHKFHIHCRFJJNPGOIAQSKQWRITDKTCLWNXBASMOAFPIYLETYJDT");
    const char tmp_tmp_tmp_msg_1_0_0[] = {94, 45, 33, -51, -82, -127, -49, 36, -49, 81, -56, -115, -75, 30, -117, 100, 8, 58, -63, 3, 116, 67, 23, -22, 28, 83, 106, -102, -68, 93, -70, -20, -79, -6, 124, 6, -115, 55, -31, 1, 54, -34, 36, -56, -25, 62, 75, -47, 4, -92, 24, -102, 77, -36, 106, -123, 122, -47, -36, -95, 5, -96, 101};
    tmp_tmp_msg_1_0.data.assign(tmp_tmp_tmp_msg_1_0_0, tmp_tmp_tmp_msg_1_0_0 + sizeof(tmp_tmp_tmp_msg_1_0_0));
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.349875723086);
    msg.setSource(9949U);
    msg.setSourceEntity(36U);
    msg.setDestination(62488U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("YCTUHBTDWDSSODOFQHTZDALUDQSGZBOYVHLYMGQEGYPOAEOCSGUIWXWWRQHTMTYZVLMVFXEABUTJPOEKVZHIYVAMXUOJJPFPXK");
    msg.description.assign("XJFSNFDMKHESFPOCKXDGREUWABGOTFXPYYXIMVVLPTLMHRPWPHSWJEAYWEOKDYQGJMCYECUYCVLSEJEBVKRVT");
    msg.vnamespace.assign("ZQDZAVNXOJUBSGNCSEMDCBOKGZGVTHAKTZZEFXDDQBTIBNOWERXONJDITVORVYJYDEVELIPUDPSNIXOKUKUHUMPYBIUSXAV");
    msg.start_man_id.assign("BYHWQIQFGRJWGJGHLSNRFYAUQVBLVZYMOVVKNTPKPUMGXTVVVZARKBIYMXCRRLXIULDPUBHYGJKIMEJBRBFXMSVQZINFKJJJKCLMDDTJCZFCYPSFLASXXQOZURKXAPOWHFWTCUYAENRWPPOOTJAHDIC");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JPAZJTASXNELLB");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 25321U;
    tmp_tmp_msg_0_0.lat = 0.462109617817;
    tmp_tmp_msg_0_0.lon = 0.408513244393;
    tmp_tmp_msg_0_0.z = 0.776035661357;
    tmp_tmp_msg_0_0.z_units = 200U;
    tmp_tmp_msg_0_0.amplitude = 0.687715651963;
    tmp_tmp_msg_0_0.pitch = 0.366444291733;
    tmp_tmp_msg_0_0.speed = 0.924478349559;
    tmp_tmp_msg_0_0.speed_units = 44U;
    tmp_tmp_msg_0_0.custom.assign("PPMDVASYNROHHZQPQTHMYVRNTMSRGRJQDCIAHBSWDMADAGEYFWKOGULQYZESLKVVXDGYBSVEKDWIQKJHIKPVLZPBINPXAFXZGDZRAIOCKJOUOMCAXXERKONBRIUFOYLFTLVWBRTSPZNDTLMNQEISZZKFUHHAPXMUCUGV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Depth tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.650834589741;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::TrueSpeed tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.520012831979;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("YULQZOTVOXDFFLALAEPPDGLCCCRKFHCPXJWMFYKJ");
    tmp_msg_1.dest_man.assign("YKFHYNZFFIYHURJHJZZBMCMXAYWOJSEAKXIMBCCAAAOGBEBVXCKBSQCNSSJUAYVODDPVAFQUFQOXMNMXWRCHKGPQZZPOAMULOGSEZXOEAHTNTCRVHXZTURFXQUDTNIIDWDNPZQEQTFUVPISMBGIVMGRLHAREUWOPXKVJKNYDLQVWSHKQWZBFHGORLFVRJSPT");
    tmp_msg_1.conditions.assign("AQQKNEOHRZCKWOCZIEOYPCXJTVWUVBXTKYXWJVPTYBBGDWAGPLDLKMDSBDFIZPVNEDNPLRUGKSGDTHRPGECPVPPOB");
    IMC::RSSI tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.531563981045;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::FollowRefState tmp_msg_2;
    tmp_msg_2.control_src = 28065U;
    tmp_msg_2.control_ent = 22U;
    IMC::Reference tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.flags = 206U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.value = 0.968921976183;
    tmp_tmp_tmp_msg_2_0_0.speed_units = 33U;
    tmp_tmp_msg_2_0.speed.set(tmp_tmp_tmp_msg_2_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_2_0_1;
    tmp_tmp_tmp_msg_2_0_1.value = 0.48770368848;
    tmp_tmp_tmp_msg_2_0_1.z_units = 27U;
    tmp_tmp_msg_2_0.z.set(tmp_tmp_tmp_msg_2_0_1);
    tmp_tmp_msg_2_0.lat = 0.01642648819;
    tmp_tmp_msg_2_0.lon = 0.654963870193;
    tmp_tmp_msg_2_0. radius = 0.0847345359544;
    tmp_msg_2.reference.set(tmp_tmp_msg_2_0);
    tmp_msg_2.state = 219U;
    tmp_msg_2.proximity = 66U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::Pulse tmp_msg_3;
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
    msg.setTimeStamp(0.145306834183);
    msg.setSource(33576U);
    msg.setSourceEntity(27U);
    msg.setDestination(44136U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("BDLRROXVIEZLIRFMTLDWFGCZBCTPAYKAJFDBRCQQUPJPEGFOOILTRSRSYVSXDYSOYQKIYOGMPHMEDXZGEVHHBLOJSAINNXWPFLDUWFBJPABPLEHDAOIDWGXJHAAWKVPRGCZIHKCCTESUUO");
    msg.description.assign("XAEQERQYTHXJH");
    msg.vnamespace.assign("QLEINYENXSGIPPWDRAGWCKJXSVJAHCHBWBXYSSACZDFQWWLKATGOKDQBPRUQHMAFEANYUEYQGMVRQFSSBSHMLLCVCZGJEBAUDNXURZPIBOKREXGPVAICWKHIGNFMWTQKIYVMOIVOBHTDNDKMMUPUYYLAKTPN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SGZOOOAXPICSXJTWVGPSHBKNFIOOLNSGNAJFWBQWUBKQIEPYLTGWLRSYMWMBXUCPYYOHCTPDPIYLSRQPWUBHSUMZBKOEJDJMYNDEXCQYOEWCHJRDUEFKVZDKRWFXQATVVUZXFKI");
    tmp_msg_0.value.assign("SCXPDXDBJAJQQNPNWHJGEIKGYXXQNZNINWXQVIVXQMGJHIHOECCUYUNUTDZEJCUEQHTIPMOKAHROAUMLHSNXPVUCMFBBGKWYSNOKVAWJTAMKORFSUBPLGYTGABPRTYIVRJDFLLYQNWZLYCLFEPZRC");
    tmp_msg_0.type = 200U;
    tmp_msg_0.access = 111U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("EMRTBLTKWQMFSCFDQTAMCDBSBBESTSTCVELUYLJFGKNJDLCNFDOYILJTSYNRHVKQHAPVJEPKMAFPXESHBUXBMWBEOAHUOJCZPWGNOEQIUYHYANRAOJNGVYFODVXNCQFVAMQLOOX");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PIRDAFYBLUGVNTAT");
    IMC::Loiter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 17865U;
    tmp_tmp_msg_1_0.lat = 0.78528598206;
    tmp_tmp_msg_1_0.lon = 0.97822349273;
    tmp_tmp_msg_1_0.z = 0.298640357038;
    tmp_tmp_msg_1_0.z_units = 70U;
    tmp_tmp_msg_1_0.duration = 5754U;
    tmp_tmp_msg_1_0.speed = 0.722399565708;
    tmp_tmp_msg_1_0.speed_units = 16U;
    tmp_tmp_msg_1_0.type = 236U;
    tmp_tmp_msg_1_0.radius = 0.445921927138;
    tmp_tmp_msg_1_0.length = 0.869521145244;
    tmp_tmp_msg_1_0.bearing = 0.757031380499;
    tmp_tmp_msg_1_0.direction = 159U;
    tmp_tmp_msg_1_0.custom.assign("UNGUKLESOWXOAJXGXZMCBQHFBOBVJTLSHJKCFWXWFOAPZALDZNIUBYKAXVMUPBEDMQNTGHUTTNOWYBMDGPUFOUDXSCTHJKQBPHVNTTGKLFIWYHEFZCZPVQAONYRSZMBHCWKCQELMRAJZKLDEGQVYAIEXJTSYQJGUORTTFRWLXCYKW");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::LblRangeAcceptance tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.id = 35U;
    tmp_tmp_msg_1_1.range = 0.191496340527;
    tmp_tmp_msg_1_1.acceptance = 252U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::TransportBindings tmp_msg_2;
    tmp_msg_2.consumer.assign("SQPDIIMFKWGZSEUDSBXILNBCALHEXRMNTAOBOSMRWAEJFYWDHPCJKDHMJVDVFBZYDEISBXNTRHVWOUZXPKIQZILFCPMGAYWCTWFPAKSGCKOUFSFCVNEGRPVCVRJBIZNMLVVXBOFNRAETZKEUJGLEEIYKXQNLPQTMDGWUWDCYNDVOSLPFTJHJRIPYDUACUSTOGHLNYTQPQHHMYSGKIQAWZZQFOG");
    tmp_msg_2.message_id = 18152U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::VehicleLinks tmp_msg_3;
    tmp_msg_3.localname.assign("ZDRAQNVSLVLORZBYFNBSBHAOJQJKTDHWYBKSAKRSGWMDZLHHQVMXTZLGXPIUOYQRUPJKUIXBRMTVZTDHTGRZVIFTSZIIAWFQKFCPYHBMNJEYPAELAIDPRQIVGZMXJVH");
    IMC::Announce tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.sys_name.assign("YUATORYPOJLKRSCTQICIDXGSVGJANFFOBBPPEHDBHJNOTMQBYDVMHXNIEUALZBIWYZMCOHBKVPCKLIDKMHRGTDUJFSVVKMIAXGZK");
    tmp_tmp_msg_3_0.sys_type = 63U;
    tmp_tmp_msg_3_0.owner = 36950U;
    tmp_tmp_msg_3_0.lat = 0.758852953556;
    tmp_tmp_msg_3_0.lon = 0.676557668191;
    tmp_tmp_msg_3_0.height = 0.772749446509;
    tmp_tmp_msg_3_0.services.assign("PGOKPQQEZYOZOOMXLZVXEZIEXRCMIGZAUNPJAHGSBHIZMKIYFLIBVJDEQTIKNZFARPLUYHBNDDDIFTWKESLRPGNLJMAFYTZXAGKRJDYWXHYXYPBZBVUSTEMHUCYTLTTVTMLBGLUFIQUSJNQCBDSBDPSKQPGMGWHHDXKXPRRSVVNWWCYWAHJMUFVFJBCQOGCROBFOKREOFSAL");
    tmp_msg_3.links.push_back(tmp_tmp_msg_3_0);
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
    msg.setTimeStamp(0.272317022329);
    msg.setSource(1590U);
    msg.setSourceEntity(127U);
    msg.setDestination(63871U);
    msg.setDestinationEntity(166U);
    msg.maneuver_id.assign("EVKZYSJNAMMPDRHODYAWSTXWGGOWHEFWAKQLVNBIALLMPUMKEBVTXLRWATDZCINPYGDIFGPKTYFQORZSF");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 38711U;
    tmp_msg_0.lat = 0.72865294043;
    tmp_msg_0.lon = 0.894132260439;
    tmp_msg_0.z = 0.141458830429;
    tmp_msg_0.z_units = 96U;
    tmp_msg_0.speed = 0.500632736584;
    tmp_msg_0.speed_units = 237U;
    tmp_msg_0.bearing = 0.191148483452;
    tmp_msg_0.cross_angle = 0.454573533889;
    tmp_msg_0.width = 0.387191532535;
    tmp_msg_0.length = 0.691278117272;
    tmp_msg_0.hstep = 0.544960587295;
    tmp_msg_0.coff = 198U;
    tmp_msg_0.alternation = 42U;
    tmp_msg_0.flags = 150U;
    tmp_msg_0.custom.assign("DPVUPZMJKRFVRYVRBMVWDMFCEBHFHGAXFIOYJNUTHFADLYMIVNZSNEKUDWOPTLYSUHILQOQKAUYHPJEYDHDZQWBWLFSITRCNIUMPWEQCXUBJCZEHQIATXCVGYWNHKPUKXNDAAAXBSOSWSZCIBQGSKNNWGEJUXIZFRQYAYCTJPFZGQUEPWBKTYLIXTOMP");
    msg.data.set(tmp_msg_0);
    IMC::SoundSpeed tmp_msg_1;
    tmp_msg_1.value = 0.348044630916;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::YoYo tmp_msg_2;
    tmp_msg_2.timeout = 56861U;
    tmp_msg_2.lat = 0.235205756126;
    tmp_msg_2.lon = 0.68279942877;
    tmp_msg_2.z = 0.843631248975;
    tmp_msg_2.z_units = 215U;
    tmp_msg_2.amplitude = 0.978412258323;
    tmp_msg_2.pitch = 0.285337509316;
    tmp_msg_2.speed = 0.758983221041;
    tmp_msg_2.speed_units = 67U;
    tmp_msg_2.custom.assign("LSTZDLVRYFWCAAXJUCAOESECWAJCZQTXIYSPVEZQFAOBUZIHQZPBCSLURGHRBVFDINMKCUKEBOFWRNMWCOFEKETDXKLODPSMZCMQHPWDERMNXXIDRG");
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
    msg.setTimeStamp(0.709414572352);
    msg.setSource(30372U);
    msg.setSourceEntity(113U);
    msg.setDestination(58630U);
    msg.setDestinationEntity(18U);
    msg.maneuver_id.assign("WGNAXKYWSQYNTPIEYFWLNTPCBQUBJBOCWXFBMTIMLDNOZPQYHWDEFCMKRQGVMKAOOETUVJZMVCJKJGZIPMPXPGJGSQXBBBRPLXZAOFIANZLCECOMRROWCSEEFVETCYHENRZHSRBTKUIBGGSKVLLSLZRIZUGHAPNOYDWHQFEDJLSIKUJAYOTPUVVFVXWRHQRGXDBICHTNTVCNVDUXKXDHHIOUFRUSXEAAZWLMHWTIMQFYNDJKZAGM");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.195319665494;
    tmp_msg_0.lon = 0.541791450588;
    tmp_msg_0.speed = 0.8892301489;
    tmp_msg_0.speed_units = 83U;
    tmp_msg_0.duration = 18754U;
    tmp_msg_0.sys_a = 28480U;
    tmp_msg_0.sys_b = 63954U;
    tmp_msg_0.move_threshold = 0.172595457972;
    msg.data.set(tmp_msg_0);
    IMC::ControlLoops tmp_msg_1;
    tmp_msg_1.enable = 105U;
    tmp_msg_1.mask = 620477413U;
    tmp_msg_1.scope_ref = 0.973015249924;
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
    msg.setTimeStamp(0.13127002149);
    msg.setSource(53335U);
    msg.setSourceEntity(130U);
    msg.setDestination(32376U);
    msg.setDestinationEntity(164U);
    msg.maneuver_id.assign("PUIOBQNCNZLYKFAYPRXYRIJFFNEHZVAJZAKGJAOFZUADYTWURJSWKDCVIWLQOXLIPRGEVNMOVQKKNJEZROXDGSSMXEXBYIKIWMYEOMAUCVOOKM");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 5774U;
    tmp_msg_0.lat = 0.000886280580457;
    tmp_msg_0.lon = 0.55521385448;
    tmp_msg_0.z = 0.673183725425;
    tmp_msg_0.z_units = 178U;
    tmp_msg_0.speed = 0.565500692881;
    tmp_msg_0.speed_units = 230U;
    tmp_msg_0.roll = 0.905227117705;
    tmp_msg_0.pitch = 0.795221389232;
    tmp_msg_0.yaw = 0.942183105024;
    tmp_msg_0.custom.assign("RTLMIEULDNAHMONZPBZRJLFJJUASWHHSCDKEAHVTYMSZYLJNEGPMDPLXEZZZMJXUWVAEFVBSECGRSMGOFGNCGHOVCKQKLOTJBDCBPXSJRUVKDXOIRCWRMTYUOTVHHAQQFQBEJWITDPSQXUDAYBLENRULQTUVYVHYYPIIAP");
    msg.data.set(tmp_msg_0);
    IMC::DevCalibrationControl tmp_msg_1;
    tmp_msg_1.op = 220U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LedBrightness tmp_msg_2;
    tmp_msg_2.name.assign("ZCAOTDLNYGIESSOJJGDGSOZAPJIKKGSFVZTDINYETWDIAEORUVLSBVSARMZCLNYV");
    tmp_msg_2.value = 148U;
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
    msg.setTimeStamp(0.0315469588813);
    msg.setSource(29964U);
    msg.setSourceEntity(15U);
    msg.setDestination(31857U);
    msg.setDestinationEntity(42U);
    msg.source_man.assign("LTPXPUVYULOCSRSWEVHZNIJJMRWUNLRGICMCYWYILZUDDHCBFSKCVBMOZTAKYDBGUDNOWQMQGNSNHJCUUQTILZXSEANAWZHPWNMFEJRDBUCVNREXOCGPFIBHGOAVDTRSXEPMIFZEPHVRXJHAIGTTDUEFVPMKKXISFMJJZSOYEFVBQPIECOJOZLMFZAFJKMZKSKGWWBRYKYYBXGLCQLHDOTQYXSPQRBNXTFB");
    msg.dest_man.assign("QAXEZPQRBWETGAHREB");
    msg.conditions.assign("XNKJSVXXVLSJYSPVOSVKXFQTUGYXLMNLKUHTNARXDIHQYWZATFEQRSZROGMVFHCCWARDTCVGZBNEELAIZSQBRJKUIDOOQTLMWGBZUTWMAYYFGXVEBBXAOPMDJKEOJGBETPLMFHZJDGSTPHMJVPUNRPZZDEAUPCCLHPIULDJLQHKKFHJOYEKNNETUWUMPYKCQNILIEZKRBZBFDFWRMRYSGYOHGXMS");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("GHAJFCRXIWZRVUOBUZNVAVKEHTEXDHHYXQAAIVRDGMSBJZCTJNXPFDTWLQQBJBDLOOMGNOFUKPCGSXCLWYHMDWIPYUZNPACIV");
    tmp_msg_0.dest_man.assign("BAGVOADOCGVIYGOUBDPEMMAGNKQRGAUEVIHVPPJMMZUCZUDHAOAHNGLSBYEBZWLWFRBXKTMNLPBTDFJAXCTLQHOSJODKDGWWGQXFIOQZKLCITICPFUUIQZGUEBWANRZSCHEPXTKRUIFXHBTHJSGDPJXYPTLCPXNKZSHBKLNKHYZTAIVLXEUWQISJRTNOLY");
    tmp_msg_0.conditions.assign("GTRLBADIAWWOUAWLGCSIQJNZTDFLUEKLMGQZAMYSIOLIDVFXNGGGNBRFCDUJBNSVYPQZNPZTHOBGQFNEEXWHVHBBRIGWDXKXWNMEJSRTKVTFBVGDVPVOJSCZLJYZPEHPFHBPPUYFFZZAIHMRLOAEQIXYCZXWRCZQNROWADOL");
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
    msg.setTimeStamp(0.864405940033);
    msg.setSource(11902U);
    msg.setSourceEntity(19U);
    msg.setDestination(61254U);
    msg.setDestinationEntity(23U);
    msg.source_man.assign("QHVGLRFXBXLQGJUPGNXLHIQJNAVJGKHLXDHDTZQVHKRPTKSKKKFPEZOZVRWOLFLPSDUJBKIHSNPFTUVAITQZZYNPCCCAGYFMARXBZLJBIZQOMEKJQLBREUNBQMBFMSAZDIDUWRENCPGKDFEWOFXNXVWAXDHYCJUIDACSFRSXWVIHOEIEEVMQNOTSUSUGYAWGOEBDWFRHBCIYOMJTAREGMTYZYDPOCJANUW");
    msg.dest_man.assign("OZRPVZTMQGFRTDGGYFVBXKTMRPMIENKQJVMMXBOUAIJUNQTPWDHWCBFBXJOPAYLHAVHMNJNGYCLSYPHGOTZSHUIMMKCYKUHODDQJQSZLGCNFRBZ");
    msg.conditions.assign("JXJKWATCNLIJKTLQIRIKDWCKPWBTQUYKTIDEQLAHLWAKBBRJHDGABHADXLTFBSVRSENSLOUIOHOPCGYEPNSMZPIAOTWXYZZJWGFKJDMQJPAJNTSYXMABVLUDGKZCTEHBVRROQEWPZOHMKOQDKBNYZYHZYQNXYRUQPCRCGVASLOJVFGU");

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
    msg.setTimeStamp(0.502396507994);
    msg.setSource(64021U);
    msg.setSourceEntity(211U);
    msg.setDestination(64658U);
    msg.setDestinationEntity(68U);
    msg.source_man.assign("DHQXODUGDNDBHMTTVKHJMXCTRFZPIWAGJRLXPVWUUFSOESTZAESQUZBJAHKAYBLGYQYUZWPKNBQVSTCJSZWDUCPNCWOWJCVLOYAKZOHBGYNLIPEYCJOYFKUWFRFSHJDBIJTANOIUDINQQVTZCRSIQKVEVVAGXFKFUXEHIDXLJMLLOIQYPBOMRFGHLAVSBRSVALMJKYPKPMGLCXNXKOQHITZBQCGTDP");
    msg.dest_man.assign("CNYDRZZWOQPWKMHBECJSBVQTERRNNSRJEOVBDVOUSXXZYGOZGTDVGJVIIZUTMRMUCQUHWMDBXCCULFBVPERBGVNJVPIIMKTSXXYLDLELALZFNQQFGKSMWYGQUZOCHKMFSTYXXIIAZUTALHLOJJLDBWKGJQVPPMG");
    msg.conditions.assign("MMJOAMWTZFSLHCHEDDSLNSTJIDICHFPZZVBBEASKMOJAGQRVEZPCKJPMDURYQXQRNJGSYPVEBEULUKSLOZAXOISYCOKNTPGFIZLPHZCPRXMQABG");
    IMC::AcousticNoise tmp_msg_0;
    tmp_msg_0.summary = 10U;
    tmp_msg_0.level = 91U;
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
    msg.setTimeStamp(0.102084886292);
    msg.setSource(18433U);
    msg.setSourceEntity(30U);
    msg.setDestination(46917U);
    msg.setDestinationEntity(111U);
    msg.command = 250U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ONRCQQROSOKGPXUTTLGMASEWRDAXHTXLQOZDQWYSFGGKHDQAMIFDNTAEBVDWZNGLVJYZWGPESXVJUWRKAHLGXIVBBBFTRPSLGEGXLSLQWFAEZVXEKRUJACBKLYVNYHWMCMONNPKOZAMHFMHHIPHYRMFVUCBZYIXUKWUVEJLIPGIJPKVIJUFEDTOJIQYU");
    tmp_msg_0.description.assign("KSAGAECKENRALUJKFMEYRODRNLSUSJNIIITNXAOGIRCMVKSUKADCVOQHQEWGFDYLYFUVGBHGDNYZJWQMUXZMXMFGUKPDJBJPZHSXMZMVPRFCZYTQDDGDJHXULLTZIAETZABCUPSNHQIAFGYTSGIWJNIKNHOJBYWNLOSCEXJRYKRQVQWRHPDHEBWCUBSYCHPQVLMCFLILPRKTPETHKGZXMABFWVPZUEFJTOSQZVBOCVDXWBB");
    tmp_msg_0.vnamespace.assign("CYUGBYOEWHMIGQIPFFHDMSYIFMIHENAVQBQPSQTAMNRLCIXKXZDLWPZKUQTXCLSWBYYJCKDJBRLFNRIDSGRGFADFNUJMGMTBBSZTRUTZYLXTMVWERCBFCZZMNNYFZJWULVYAVJHGRQKEWSNVOXKEBGVEGLKVLJXSDCNHOUYVVDWZJUHPZUE");
    tmp_msg_0.start_man_id.assign("SIRYWUHHZNXHPDCYTXMVLJLVDKPJIYYJTEKXDWVIKJNDAGGCRYMGEIBMVZOOINYUDJXVFXQBATWTTEABLTKDZAZYSVVFVWMULHCSMBRQODLZBNXGSPGNFCEGYQMKWFPPKCNFGZCDWVDJUORBRASWQOZTUOIXSZWUKIJIVAOMCEBSQYPSSOJHLTGCMXACEHYBINUDJGUFHJTPRHQWTQBXERZQWFNFEKKBRALPRELLFOUPNQGKO");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("YEDUCGMHDAHFJKAJLKKXLJQOGEDOUPACAVICCTVQWHRJUFLRJYMNOZUNKHDZNFJJVVAQPYIRLOLKZOONISCSWEOHZMSWHRNVCTMDGCGUMETRPSZ");
    tmp_tmp_msg_0_0.dest_man.assign("CRPGVUOXQOAIGHKFULGVLYGMIADFQOTNJUWKVLSVMKHAWAJMEVZUEOYVIGUPFTMKTJNAZIVITRTCYCPMTNKXKYPOVGDZLEQBHMYNUAQSBJWGGHDLLFWKUYIILQNZTPAZDXNCCDEOBPRBNYXJPCAEXDLXBSRMVBUXHQTCFZRECEWCQBJURXOZFWNQDBJOJSFHWFDYHTMYZBQGSNIPARKWCGTFELD");
    tmp_tmp_msg_0_0.conditions.assign("HTPYOXIYIZPCWEMIAYYRATLRFLCGHGLMPEVDSMQVXQLOOKISQFZSFQRMCKAJHZPXKCWWILHGUBXQVQNVYEWPQOXKGVCOETPLBAOBSNWDHNIEKBNAORFCKGNTDMKUFSYFWQYSZWEWV");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.763464257316);
    msg.setSource(18856U);
    msg.setSourceEntity(248U);
    msg.setDestination(35965U);
    msg.setDestinationEntity(128U);
    msg.command = 253U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IGUWQERIKPPAPZQIEYMQXUCZVCXSYNRKXBFDBPNSUBOTGULHDPBQWGGVJVLYLWCKGFTPGCBDINKRLTYUNVOMOLHWHNTKGCCJBAMTHWLIFKDIXDRYRQTSEYVJEZEQXEFBJNFZRRUCUOXWVSOHMFQHLOBZQZPMHZACSZXENVCDKPSFDKNMWUIIL");
    tmp_msg_0.description.assign("UUTCNVRKNVONZWSRNYWJADKEOHLSNZIYEJAGITFLKTBQJMHOWSGVBEYAEJKFHTIOMAIWNTSUVLNKOACZMIAEVDLOCGHDVTBDTNWCOZHQLYLKDCAZPVDYZYUIBHBLEWZ");
    tmp_msg_0.vnamespace.assign("GLRCYFPGZMUDBXZOOUJFJKEQATJQILCFGZRDAVIBWEVXCNLECVJNWOHBHBYXBDBDUXTQKCNQBUSDSFCCINOAHLOFMIILJPJIAUOZDWKDPKIYTFMYMVGYZSGKAEXRDGPFLLUMOESFPAFHJUVMRLXTPVUROPZNXHTAATYGZIUKVYWHQYZKPQGTRMVOXTDHSNSEWDEFNJQMXCJXQAETZWYNWVIRWCNQBTBRGHSOWQRBNGM");
    tmp_msg_0.start_man_id.assign("VBZYKEEPXBOLQVFAWZSLMYTZIEYIGKHWZDAWLTJNAEOXIFBYYCFZOGNDHRAICTJHXYCTBMTDKYSAQVCTURCKUOFOQO");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("SJHVHWSOBJGKQJGTERPXWLIPGZEUICSWCOOIQZUFASUVLQK");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.630154296154;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.118119151511;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.742790574491;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 129U;
    tmp_tmp_tmp_msg_0_0_0.duration = 62629U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 2919U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 18067U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.641403729162;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::CloseSession tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.sessid = 3399170053U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::ReportedState tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.lat = 0.278010989071;
    tmp_tmp_tmp_msg_0_0_2.lon = 0.334552084586;
    tmp_tmp_tmp_msg_0_0_2.depth = 0.585963324945;
    tmp_tmp_tmp_msg_0_0_2.roll = 0.945858184588;
    tmp_tmp_tmp_msg_0_0_2.pitch = 0.397450809075;
    tmp_tmp_tmp_msg_0_0_2.yaw = 0.487990947938;
    tmp_tmp_tmp_msg_0_0_2.rcp_time = 0.696057649578;
    tmp_tmp_tmp_msg_0_0_2.sid.assign("RRKOKTLYEUILENUTAVMQQVZOTNFIXPIIAPVTQWZOWFNDTLFFGWCAMXUMJBUDJODNCKMYGAHXNQWPSYAOEYHRWOAXPZFBBRIPOQYSLHHSMLLOMZZQ");
    tmp_tmp_tmp_msg_0_0_2.s_type = 179U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("YNWUMYXTNQOKJGDMMQPFZTKQLWWLDTXSADTZYBAHGUBNNBVNGVSIKIBQSLXHYEUZQGEWHAFBBCKXJKGVFTRJYPIPEAJSKGOIRUIWKATWMUUQMOXVBMCZHGQRVIQDREDGHWOSSYVAKGCAHDRZLRLPDIVAPZEZVLYLOYMAWCVQOSEEPCLECORNZYCOHJYURCLDZRFUEPJNFTPWQHXMK");
    tmp_tmp_msg_0_1.dest_man.assign("AWNVFKLWVHEWDAYHKGVENBFESDAKYFKMUFABZQOJIJOQTSBUPGUEEYYTCNWVRLFNGMIMUPCHMFCGYUCPOEAIMIOPERNXZIILGCLVODTCNJNBKVYYXXWJUAMHACUJWVFUSBJTPQWTQIDVYFGXDPBSHIMIOQSGSTDPSEHQSMZRBLJYZXTAFPYRJZFRDXBLDTLHRLDTRAVGRKRWQGGXHWBNHBEQCSOULONKHJOKLXZDMATX");
    tmp_tmp_msg_0_1.conditions.assign("FFAHFJSMOJXNJLVRWQELSKLEAAKJMROEBPEOTRTCZIGJAQJHNMNFSYCWIJCTMXBKZXXCRJWQZNLRYMRNNSV");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::IndicatedSpeed tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.892916692724;
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
    msg.setTimeStamp(0.247154167963);
    msg.setSource(59386U);
    msg.setSourceEntity(239U);
    msg.setDestination(40891U);
    msg.setDestinationEntity(133U);
    msg.command = 76U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EYUTAGLBWVAFCKYPVOBOMZLBJAXTUSWNJQEUIFDQQJ");
    tmp_msg_0.description.assign("LLOZNTIIOWHOVHXAIOYSOUJZUHSIKGHPOBQEFFDLPMHEJYXSUDQWTZTCIJCQFXTCKQRNXEGBKDTKBFMKYZWGVXMUTMERQBVDASALRCYOFQSDWWUIPAIKXOJPAPGYVNZFRAAWLFSUDNUXBJLVOQFRBSFPUTYWTCGEDHRGVHCJYGVKMIYXUXPZHARWEXKALJIARCMZQY");
    tmp_msg_0.vnamespace.assign("YHOXKZUJDBOKSRRKEJTEINQGMPLMBLONQWZGRRVNFWQAGLRPDCJBXHCXVAIQLMYOKVEYUVXVCGPOECZHSDLFHWCYOFTEZGMXFVKSNIVPTKDBBTEKSHWU");
    tmp_msg_0.start_man_id.assign("AIGAKIOYJNJLBDJRVAGNIQZMSEZFLNXNUDYVXECXF");
    IMC::Salinity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.479949329433;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.691252681127);
    msg.setSource(33579U);
    msg.setSourceEntity(55U);
    msg.setDestination(63871U);
    msg.setDestinationEntity(231U);
    msg.state = 166U;
    msg.plan_id.assign("PKWHCNYEOIEGAJCHFXS");
    msg.comm_level = 231U;

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
    msg.setTimeStamp(0.915671606241);
    msg.setSource(5499U);
    msg.setSourceEntity(217U);
    msg.setDestination(28524U);
    msg.setDestinationEntity(192U);
    msg.state = 187U;
    msg.plan_id.assign("YUSAPDNLZBQUOUOIGNMXTESCQVVGSZOMLOAHYWOWRWEVRINZMIVNFPWMIUYCRNTDKDUEFQSYRXRMWSLDNYETQHDHAJXVPWZSPGUX");
    msg.comm_level = 231U;

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
    msg.setTimeStamp(0.48309393779);
    msg.setSource(158U);
    msg.setSourceEntity(42U);
    msg.setDestination(37944U);
    msg.setDestinationEntity(59U);
    msg.state = 235U;
    msg.plan_id.assign("GEHXHAPECRCJOYULDYROBBLJUUVMVWOQZRBBUXWVHAXBQYDPPWEGJKPLVZGPJEYNVQWIEPT");
    msg.comm_level = 230U;

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
    msg.setTimeStamp(0.17998618681);
    msg.setSource(15782U);
    msg.setSourceEntity(125U);
    msg.setDestination(53895U);
    msg.setDestinationEntity(12U);
    msg.type = 173U;
    msg.op = 113U;
    msg.request_id = 25679U;
    msg.plan_id.assign("DNHUZUEVFIRWEJBQSWUTOSTURYCGSCGAOYFFBZAIORFCPYIYZZMHKXQLUJKQOKYOKPLGRVXBFQOJNSEWFPTUBEBORITUTLPWTDPEIZTGNGRSLNBDDKWGTRYOHMEHFXJLJPAXETSEDXMQHAXPVVWQDKFZVRLANSPGGQBGCMJPCYIIWGYUC");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.998192020881;
    tmp_msg_0.lon = 0.535454568585;
    tmp_msg_0.z = 0.123657763901;
    tmp_msg_0.z_units = 111U;
    tmp_msg_0.radius = 0.767765691912;
    tmp_msg_0.duration = 4975U;
    tmp_msg_0.speed = 0.418345228649;
    tmp_msg_0.speed_units = 41U;
    tmp_msg_0.custom.assign("EFXKDZJVGNGPTRJFUKVDAYIYTMKCQTUDREHTJUAJPFSCTSTEZRYWBCBJIWOOMKHSAOMBGAEERXQNDIKWZEDILJHWDQKRGSZRFQPBCYCOPUCEIHQZGTPHEVNHMYQHPOQOSIMRXFFCUCWNHNLXGCKWXZOXHRPNXAVMRWXYUNVBDSYLKRNFVVMQEVDUIIUWWBLMIFZPKLNBLYGYJDOVGPJSTJZMSTGVGBCAKFADXYXAFISLQOLPSMOBLZJHALU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OCOWROSLYSDALSWEWTYNDWBPVMKHSEYZWQJVPPXUPCZZZTNFAJWHVNFQISZMGIKYTWGEHDMQIAFHRMLXAEYTNCJDBQFAKORMTGFIWRKVXRZLNSVVDYHUXJOOJYVLNMUIZBGVVAKYRCFCPBQGGNEXTIBOH");

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
    msg.setTimeStamp(0.487981104386);
    msg.setSource(10081U);
    msg.setSourceEntity(37U);
    msg.setDestination(359U);
    msg.setDestinationEntity(128U);
    msg.type = 77U;
    msg.op = 8U;
    msg.request_id = 55368U;
    msg.plan_id.assign("AQIFGTXTVBFASJZYYJFMYFCSXWZAPIKYUHWQQJESKZFUPZ");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 1766386394U;
    tmp_msg_0.messages.assign("SYPRXZXAIGGAFWJOYCHJRNEPHYHFXKAZGEDGXDNTYHYNJTQUSUFVQYEWNEBPYANTJHHQYZIVYQLEJFBWOALKSVZMFXLORALQHMPLPOBB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XVORIXAXSEELLQFGJTXCRTKMEOBJHKGFKZLLLAKWBSGFUOBSUDQWTKYLIISESFEWFSRVPXJVJACLACBEWMOSWOPZZYFJZNYPIXVMQBCFKYRPLWDGAJKGPMCLYEVWSDCHQXBCHQJGUWDDYIGGGGTYRHYNVQXRLACEDTXOOM");

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
    msg.setTimeStamp(0.0508135500076);
    msg.setSource(23637U);
    msg.setSourceEntity(152U);
    msg.setDestination(62947U);
    msg.setDestinationEntity(65U);
    msg.type = 100U;
    msg.op = 227U;
    msg.request_id = 20394U;
    msg.plan_id.assign("TNMEPBVXTRQCULRFHMEGNXLIOWLQHBFPWQSQCXKLLNBIMXOZXZQZSWKMWVCVIADRASQFPYDFLSSGQJCBXPMFSCTZYVRENQJPYMAZEJYDGDPBUWIJTJMVHANIHKJQDUDXPZDEYKXGIZHNUXDVOCSGTZLRAZWPEGH");
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 198U;
    tmp_msg_0.x = 0.300496027528;
    tmp_msg_0.y = 0.155627084539;
    tmp_msg_0.z = 0.491781368167;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EXJICZIYAGBEJHEABPYRUBKJTRPQXSIWUUVMMDMSNHTHAUXHZSSBBFVPYGQHGZYVLQXMQKLBBTCTCLZOJHFFGSSMEDKJFNNIUYPVJEFBELWYZBFUXZPOLOTNZSVNINOMFXLAVSDMWDNTWTOD");

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
    msg.setTimeStamp(0.244888220877);
    msg.setSource(33234U);
    msg.setSourceEntity(237U);
    msg.setDestination(33428U);
    msg.setDestinationEntity(101U);
    msg.plan_count = 37952U;
    msg.plan_size = 1509208068U;
    msg.change_time = 0.408573855044;
    msg.change_sid = 3574U;
    msg.change_sname.assign("ADAUDQYCWZZNCGPJTIQUPPDORKUWEJEWBFQRQAAMRGOVASFVKOLOUEZUJBDYBKWNTMHGFMHYSIBCXVZGUPOFNLYQNWFKWXJIYVRWOEHJPCGQVLPTJLSNDMXOEMTXAHTVUFUBJTTUWMKWKDPAJNAZCDIBARZVCSXFMRSMEETADWZBMEURXHCSPKROZCKEKTGIVMVHVOFZXIGNOISXLNYQHESYXSQFYBJJHHYCTZYRBIQRLGXI");
    const char tmp_msg_0[] = {-86, -16, -58, -97, -66, -15, -100, 80, -101, 97, 106, 9, 52, -109, 20, 89, 67, 126, 81, -78, -103, 91, 119, 17, -83, 4, 22, -1, 17, -98, -85, 86, 65, -9, 11, -22, 30, -6, 121, -104, 121, 121, 43, 54, 11, 99, -19, -48, 51, 9, 66, 34, -52, -118, -121, 22, -94, -60, 39, -72, 112, -88, -17, 42, 47, 68, 77, -98, 48, -44, 112, 22, -9, -30, 90, 103, 118, 7, 115, 96, 99, -78, 109, -103, 77, -96, -14, 105, -36, -45, -48, 73, -41, 56, -89, 69, -24, -69, 112, -120, -112, 114, 74, 58, -95, -113, -16, -126, -122, 26, -75, -62, 0, -82, -43, 71, -106, 12, 2, 57, -16, -87, -44, 85, -17, -104, 12, -68, -25, 18, 9, -56, -70, -1, -102, 2};
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
    msg.setTimeStamp(0.730739401036);
    msg.setSource(5175U);
    msg.setSourceEntity(217U);
    msg.setDestination(56807U);
    msg.setDestinationEntity(162U);
    msg.plan_count = 20158U;
    msg.plan_size = 2070738560U;
    msg.change_time = 0.0578448646928;
    msg.change_sid = 4256U;
    msg.change_sname.assign("KYBXQYCIXGHRGQSOJXYQEDDBLCRJSCMEGLLMCLGBAPNKWGOCXONUIASAMOINPERVYDUSKTPTFXYRGNNP");
    const char tmp_msg_0[] = {64, 113, -67, 121, 66, -57, 50, 80, 40, -59, 3, -99, -125, 3, 112, -85, -70, -78, -60, 88, 86, -94, 62, 35, -75, -124, -98, -95, -69, -22, -65, -13, 92, -75, -74, 68, 62, 45, 22, -51, 0, 109, -108, -17, 45, -57, 66, 35, -85, -41, -92, -86, -40, -110, 89, 44, 107};
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
    msg.setTimeStamp(0.754822381468);
    msg.setSource(36072U);
    msg.setSourceEntity(88U);
    msg.setDestination(29998U);
    msg.setDestinationEntity(57U);
    msg.plan_count = 64272U;
    msg.plan_size = 1613976687U;
    msg.change_time = 0.699159809032;
    msg.change_sid = 21132U;
    msg.change_sname.assign("DWREQASWGZUNRGOIAHSCVFDALDDVBEOZPHBGLYUYOAFBPXQDQCKEJTPHNLYYGHNPMPSJOPJYHQBMZORTDSNXZRBZPAGCCUUBUUKCWXOTTOKGWSLDKZRKQRVVNHVMKXLAJOIYLBRQNJHC");
    const char tmp_msg_0[] = {44, -60, 26, 67, 122, -90, -26, 82, -90, -23, -51, 125, 113, -118, 72, -128, -47, -107, 115, 83, -3, -9, 119, -55, 17, -47, 104, 59, -1, 55, 112, -113, -120, 36, -75, -36, -106, 108, 29, -60, -71, -108, -20, -50, 62, 110, 21, -87, -87, 115, -1, 8, -108, 44, 73, 105, -84, -85, -80, -76, 26, -123, -108, -114, 20, 11, -113, -77, -7, 112, 11, -34, 16, -41, -117, 123, 17, -59, -33, 50, -51, -45, 117, -66, 35, -115, 100, -66, -117, -53, 93, 123, 27, -70, -4, 82, -67, -4, 42, -14, -8, -50, -83, -101, -52, -95, 31, -4, -3, 64, 114, 114, 59, -11, 75, 18, 27, 117, -81, 21, -56, -26, 112, -62, -70, 90, 125, 41, 120, -29, 3, -15, 103, 51, -75, -53, -106, -65, -22, 13, -11, -3, 56, -26, -92, 25, 32, -116, -84, 32, -124, -26, -40, 85, 78, 119, -15, -93, -86, 32, 89, -72, 78, 39, -46, 13, 45, -94, -80, 4, 85, -17, -80, -106, -53, 93, -95, 108, 100, -2, 22, 104, 122, 34, -105, -89, 95, -26, 36, 68, -4, 32, -103, 57, -90, -23, 4, 31, -62, -4, 54, 10, 123, 78, -72};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NQAJRXHCDJEYPHZVWZRGNYXTMFGOZXTGSJXLYZYDAMXDGJSHLGIBLEEBYXTNBFWZUAUNROCPJRRIUSEKGGYHUOLGAPWUIDXOBVKBOZIMPVHRHEIDSFFNRYSXMJEHCKDZUPBNWCWACKFGSOKAETKCFQDOHHLBFWOEZAFAXQQSTIMOUPIYKLEZMMWDHQGCUTEFBPMMDVZJTVCRJKPNVLRTIKANYCAQVWTWQFRVJOSDSMBNLUILQPKQ");
    tmp_msg_1.plan_size = 50444U;
    tmp_msg_1.change_time = 0.0519461548204;
    tmp_msg_1.change_sid = 28181U;
    tmp_msg_1.change_sname.assign("SKWXMFIQJUSVEJJUGEYEBIVQBCCNRMPRNASQCFZUXZYTWWFEJJWJRTLTLDMWRFFVEATDDPQIFUVYBIPBQKLSMKCOECXDHIQKZKLBGVGNGKYTXWEAEYABSPLTDPQTOLDQVMSCYNLBGTPHWOVYZUMVCNFFOALOFXHJAMHPHSJYCUDGNXLRQNIUSAHZYVKIHKENXVWUBRUXNXIIMETUSZOFSQCKAPBZOCRHJPROOTNRGKZWHGJ");
    const char tmp_tmp_msg_1_0[] = {-80, -53, -34, -97, 53, 96, -67, 123, -30, -57, 63, 93, -9, -102, 33, -91, 109, 79, 23, -6, 42, 79, 22, 92, 0, -82, -24, 100, 106, -24, 96, -75, 26, 53, -110, -120, 120, -27, 49, 23, 81, 48, -125, 103, 79, 124, 33, -42, 48, -80, -29, 2, 76, 19, 16, 109};
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
    msg.setTimeStamp(0.492993906113);
    msg.setSource(25810U);
    msg.setSourceEntity(195U);
    msg.setDestination(60482U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("FZEMPWYHGICKRXQKBFTAUGULTXCHFCIMFPJVQ");
    msg.plan_size = 28966U;
    msg.change_time = 0.616428706588;
    msg.change_sid = 54495U;
    msg.change_sname.assign("HBIQGUNKTYRRXLJHSHLBGTRVWGVAXJOENMCKSFIHNACBSRSZEYWQCIQXEAVFIPYSWQUPBIWUQMLEXVVDEBTOARKLSLUPFEFMPHVMMBJWQRG");
    const char tmp_msg_0[] = {-57, 16, -16, -114, 2, -52, -36, 34, 19, 66, -12, 40, 4, 38, -103, 53, 7, 34, 5, -105, 116, 60, 115, -45, 4, -72, 49, 115, -53, 51, -119, 78, -67, 106, -113, 45, -69, -101, -60, -121, -121, 47, 65, 70, -39, 106, 30, 121, 28, 115, -54, 70, 109, 72, -21, -90, -61, -77, 62, 40, -13, 38, 95, 102, 81, 12, -63, -64, 38, 102, 24, 7, 111, 3, -47, -89, -90, -74, 16, -94, -112, 111, -79, 119, -46, -106, -63, -86, 62, -96, -118, 123, 89, -110, -102, -17, -120, -47, -126, -3, 84, -72, -46, -111, -1, -111, 109, -27, -37, -14, -54, -66, 80, 92, -20, 119, -74, 55, 21, -7, -125, -72, 99, 5, 0, 76, 74, 34, 65, -127, 85, -39, 77, 124, -25, 2, -89, -95, 85, 97, -46, 43, -12, 2, -66, -39, 113, 81, 55, 25, -55, -22, 61, -104, -86, -41, 75, -109, 118, -120, 69, 28, 109, -98, 79, 114, 22, -54, 85, 105, -49, -46, 35, -125, 19, 53, -87, 76, 123, 52, -99, 81, 114, 58, -68, -70, -124, 3, 71, 32, 86, -128, 122, -66, 73, -13, 73, 59, 16, -116, 103, 81, 96, 75, -86, -115, -7, 102, -31, 25, 81, 19, -5, -44, 63, 22, 112, 9, -53, 100, 93, -26, 95, -31, 2, 65, 2, 43, -127, 98, -110, 61, 96, -20, -95, -118, 17, 95, -120, 122, 7, -50, 32, 84, 48, 80, 89, -89, -37, -78, -38, -17, 74, -89};
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
    msg.setTimeStamp(0.982702407777);
    msg.setSource(13813U);
    msg.setSourceEntity(185U);
    msg.setDestination(6945U);
    msg.setDestinationEntity(140U);
    msg.plan_id.assign("TBAICXNSGMTTDIDPJJFHFKBNTSSRMIJJDIUMCHBWKURQKQRNUWLPWXHWAENQCOGVAJSPINHMUMAUEKLMHDHPEGRQWRYVVZWXSVJADKYQIPGFRYNGPDDGCWAZDNISOUEOVXESGYHTKKLNGUCPYBDOBXPZLLFUXKQLYEOYCANJFTIFBZMHVKEEQWZTCVQORPJKAXFQYZUIJWBWFVNXRZHHXRLDZZG");
    msg.plan_size = 37353U;
    msg.change_time = 0.5944682826;
    msg.change_sid = 31440U;
    msg.change_sname.assign("AZHYDQCTRQGAGYTXTUOBAKEFDEXQOFESVORHDEWQBPPIJYPXLITYRFRTWCZUWMXIJXDTJQHLLWMQNOGRGKLKFOMATNPVUACDFXNWFUDMEOLKZZUFLJIQELEZGNQDMBHFSGVCPTLSZVHHNSLGMBCHMFKINSZQFXBJVCEGOWVKHAATZMJOJKYDROYJ");
    const char tmp_msg_0[] = {-38, 54, 21, -88, 102, -89, -87, -36, 80, -37, 102, -7, -100, -72, -70, 100, 19, -58, 111, 25, 28, 41, -64, -103, 51, 52, -43, 123, 20, 80};
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
    msg.setTimeStamp(0.196542787233);
    msg.setSource(30932U);
    msg.setSourceEntity(228U);
    msg.setDestination(44468U);
    msg.setDestinationEntity(49U);
    msg.plan_id.assign("FDVGPDVHECMWJEJCUPEQVXKBZOPZFAIRHDNNZNKTOUTLGBDQOCDVSMIMMSCITKWQJXOORURXBOAHXEIWPVPTPSYSFJEGQEKEJXCOXAZJDYSAYYLIQTOCYBLHVZGJBRYFGSWUALMNYNMGFEOBKDBTAZADKCIPQQHFZAS");
    msg.plan_size = 20532U;
    msg.change_time = 0.569241880441;
    msg.change_sid = 18569U;
    msg.change_sname.assign("OWFXQXGIGIJMKEZPSVGWIULSQLGBAZDTEKCZOLFMBABPYLYELHZRNDGPNHTPHUWYXMKAWTPBAYNORQKYWDRLASEVJENYTRGVCSCWOHOUENMQSOQZWGYADKDTFIUUMRPFKKMWSZKRCFXVIBACYHEYLPXVWZBINJHTMFGHL");
    const char tmp_msg_0[] = {69, 38, -127, -66, 91, 37, -58, 78, -88, 67, 17, 18, 86, 17, -105, -34, -100, 69, 28, 110, -30, 28, -125, -87, 92, 24, 43, -57, -78, -28, -94, 111, 122, -34, -24, -72, -33, 102, -65, 49, 22, -21, -104, 95, 24, -75, -31, -33, -7, -30, -58, 87, 69, 49, -70, 59, 4, -27, -2, 18, -109, -59, -97, 112, 87, 15, -66, 94, -40, 36, -65, 16, -25, -37, 4, 88, -118, -3, 76, -112, -115, 109, 104, 115, 114, 97, 46, -3, -69, 107, 75, -86, 16, 12, 72, 38, -31, -25, -42, 86, 13, 102, 32, 123, 56, 109, 65, 57, -71, 64, -43, -70, -3, 58, -15, -59, -70, -103, 95, 89, -115, -69, -3, 44, -21, -26, -102, -117, -45, 77, 82, 105, 86, 10, 31, 48, 46, -31, -111, -128, 34, 120, -122, -81, 36, 37, -96, 76, -53, 122, 63, -12, 104, -23, -65, -1, 97, 89, 62, 78, -82, -11, -26, 123, 27, -56, 118, -64, -101, 63, 50, -99, -119, -16, -2, 78, 83, 61, -39, -85, -47, 84, 52, -2, 44, 46, -56, -119, 95, -37, -90, -75, 84, -108, -96, 19, 115, -56, -76, -107, -73, 116, 20, 52, -116, 44, -20};
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
    msg.setTimeStamp(0.309135113299);
    msg.setSource(23952U);
    msg.setSourceEntity(17U);
    msg.setDestination(13970U);
    msg.setDestinationEntity(167U);
    msg.type = 245U;
    msg.op = 107U;
    msg.request_id = 43242U;
    msg.plan_id.assign("XMKURQYKGWVSCZFPTQUCDLPUXGIILBSIFCLGXOAIMKUEOALFHHOAVHFQFPBKGTBXADSAZMHOXVWEUXFDZSEMUJMRWUOB");
    msg.flags = 2284U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 122U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.131398672283;
    tmp_tmp_msg_0_0.speed_units = 76U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.79949852199;
    tmp_tmp_msg_0_1.z_units = 203U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.499255778755;
    tmp_msg_0.lon = 0.176464601971;
    tmp_msg_0. radius = 0.159216625725;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LFEMHBKYBDHATOVHNFIWLSCWOAKCZNJFFIIPGYMGGTJHEKRYLCOWRMPFXSUADRRDAJJOSSUZHQPDSCJNEOKRHDMWWGRQWUKMUXTLCQDNVUUKJLCDVNYXZXXXQXHDQTMLMFEXYIRBOIBZNFAMTWBIZAQSFEX");

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
    msg.setTimeStamp(0.517026634839);
    msg.setSource(249U);
    msg.setSourceEntity(124U);
    msg.setDestination(46532U);
    msg.setDestinationEntity(36U);
    msg.type = 165U;
    msg.op = 143U;
    msg.request_id = 19845U;
    msg.plan_id.assign("MDSSCHRGYVFRIKWDZLECDYVAXAWUNRHIOLXWYUIWYJLFIQFJFWZESRPLTDPGJKHTOGOCKFUGYOGSJWMKPOTIVQRQLZTRBNMMPECKMLQRIFBVHJEBRBTRZHUUSBWCPDGMDECUHNJXEIQZSSNJVSZPVXPTFKXUQQNHNAXZBKVECAACDUOZHIV");
    msg.flags = 30453U;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 248U;
    tmp_msg_0.text.assign("HZTOHELSKPBHBRWUBMYJLYKRXMKTMEJHNOJYZYCIMTRDOFIWOORUHVBEYSUROSDNGEOHZTHCNE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZWWWEQAASGKJYZEMGSNHNEYEAOFKNYXZPZLIPXDLPXDMRWZSKTPMOPJRMFAOMIKCIPDBBCPDLGBXLPFUFEVATOWSGYFZXVVTVRYSLNVHLQJCDMHLWJOOCIPDGQHIGSFTFBUODVZCNLIMTZBYWUNQCJAMVAFBOTCJWNEGIQO");

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
    msg.setTimeStamp(0.342174976017);
    msg.setSource(57725U);
    msg.setSourceEntity(96U);
    msg.setDestination(62578U);
    msg.setDestinationEntity(227U);
    msg.type = 46U;
    msg.op = 42U;
    msg.request_id = 14859U;
    msg.plan_id.assign("JEUOXBSCZYWOLXNVHVTLLOYOCZQNEFEJPAN");
    msg.flags = 11107U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 49080U;
    tmp_msg_0.lat = 0.522853956674;
    tmp_msg_0.lon = 0.695034114286;
    tmp_msg_0.z = 0.366589643135;
    tmp_msg_0.z_units = 104U;
    tmp_msg_0.speed = 0.930578806575;
    tmp_msg_0.speed_units = 93U;
    tmp_msg_0.custom.assign("QXSWVWBKNLXEQMAARCU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HECHOLANSIGDULT");

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
    msg.setTimeStamp(0.245485823928);
    msg.setSource(25009U);
    msg.setSourceEntity(104U);
    msg.setDestination(56787U);
    msg.setDestinationEntity(37U);
    msg.state = 29U;
    msg.plan_id.assign("JGWVOPWFLPQCDZTZNMWBBTQMXDNEJAQATDXIZFUUUHCIYFGNFXLNRJYZFUWCHROPYZPIWDGHXDYYPLESTENFVATWMVQLKQVGGNNWPNBGKSPDWKQJATOMOBFMMAOZKCSEVXYQZJXKUBRJGOCSKCIYVAEUPYDEXOXUOHHJSFAEETBAVNLDYRSDLZIGPQQZCSHXIUJOMIBTOATKEJVMAGURKJZVBFWNQIUBDMSRKSLVLPLRGBLXMRYKFHHHCHRWC");
    msg.plan_eta = -757182442;
    msg.plan_progress = 0.997768865655;
    msg.man_id.assign("ZOPFFUXRBZATRYSSLKAZMQTQZHDLLKWWJSCRCCYEGBEFAKNEDSQVSLMCAPUGXPGTUEIYWV");
    msg.man_type = 64564U;
    msg.man_eta = -769710707;
    msg.last_outcome = 167U;

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
    msg.setTimeStamp(0.549228111715);
    msg.setSource(52469U);
    msg.setSourceEntity(15U);
    msg.setDestination(62578U);
    msg.setDestinationEntity(56U);
    msg.state = 135U;
    msg.plan_id.assign("AVQUYYOWGDHNAXPXXMWSWUUVRKIIBOLTRYPBPCKESKDHEXTUSJILHXHRVTUMVGASMEBAHIIVSLUBYNYBOYSRTDRNZKRNFOO");
    msg.plan_eta = 1568549496;
    msg.plan_progress = 0.944052680827;
    msg.man_id.assign("MKUEZSAPMSSISAMKITYATUWXAZEJQAICWFQQDBOLGTUOVWSW");
    msg.man_type = 60984U;
    msg.man_eta = -478386287;
    msg.last_outcome = 54U;

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
    msg.setTimeStamp(0.696567659143);
    msg.setSource(20232U);
    msg.setSourceEntity(166U);
    msg.setDestination(55887U);
    msg.setDestinationEntity(148U);
    msg.state = 160U;
    msg.plan_id.assign("BWHUUPZGCXKVMWNZKHREZUHNRHAGNXZSFWXVCDNDTFETAVSKOLNLUEQXDHAVIILYRYUXWMOEWSMSJTAFRKJSVCLZARZEEPQQBMYTODTUIKFMAMMUDPIALNRQQPZDSCOLEDJJBXIWEBPVFQZFBHVLPKFUP");
    msg.plan_eta = -678353672;
    msg.plan_progress = 0.770422835504;
    msg.man_id.assign("PLSDGGUTTSWNUXHEKBZOKMRONYXCLVRGKANSWYJHKOJGYUBIUDRDCUFQPNPLGGJDYCIOAZCGJLHJLSHUOWRENWOOLHML");
    msg.man_type = 50687U;
    msg.man_eta = 1664468558;
    msg.last_outcome = 68U;

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
    msg.setTimeStamp(0.719026602911);
    msg.setSource(4164U);
    msg.setSourceEntity(178U);
    msg.setDestination(29982U);
    msg.setDestinationEntity(60U);
    msg.name.assign("JOOYXGVOCQTUTTOSWUFPENZSLWOAJCPSGPFHEAVDBDURRVGPRYUCPMAXFYINCTBGDXKPWQZGXTINJIRMFLOZFQMCPLWMYEOKMXSASXIPYNLJPUZJZQZQXEDQDQNUVNRZJAJKJJGTLAFBKYWHYWRHIMLWCKTMBBJEOBSSEKLXOWVVGUWDXAMYTKDHSIIZRQMDEDSCOZKUYGZBANFHDUQTLRTKVLFIFKBSRNICWHAC");
    msg.value.assign("WZBXJVOLJIUVVDZRSJIAGDBIBHEVUVFMTEORSBZAYKGHGPYSACWPMRQMIESYMHPTWQSMFNCOCRGFJWAWKRXKWVBHZM");
    msg.type = 28U;
    msg.access = 126U;

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
    msg.setTimeStamp(0.468020381837);
    msg.setSource(63806U);
    msg.setSourceEntity(44U);
    msg.setDestination(34336U);
    msg.setDestinationEntity(237U);
    msg.name.assign("EDTAHKOWCLYBAHXPXQBWCZKPONXUMQNDUTEFZVMLCDHIDMONSBJPBHEDXVAPIKTOZNYWGPKLSPOOOUIPJVKEBQTYQEBZKIGJGHVNNGKFVSYPQHHBIMYYTNTXAEYBWUQCZLTJHGRKMWRHGPMXFBJNCUYNCIDDL");
    msg.value.assign("DRAJBVNUWWKYHZBXIREOVWOIQOOKEPYLXNXDWRHEZCDRLJYVRMRUIHNKGOLEUTZNSYROKDLWVHQJMPZUPKDNGOWIKWHEDJTORXNCMQATIRKVXQFLTYKIGCHXRMJYOZIVZGMFUMANTFAMCTAMCUPNBGEJQPKUSHHTFAIPAWPJELDZWFTLTBFNLIQGBCVEXDBXGPEUISBNZDUP");
    msg.type = 49U;
    msg.access = 84U;

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
    msg.setTimeStamp(0.106474929121);
    msg.setSource(6934U);
    msg.setSourceEntity(60U);
    msg.setDestination(14147U);
    msg.setDestinationEntity(55U);
    msg.name.assign("UYFQYFSPYBUKZTLITGTLSJXSVMZICEOOFXCERTSHXHIJPZBYDTAVRSBAYPMTCMFOYAONHKDTBXNFTYJBIMHERNPUQUHQQVZLYJIVCCEDTLBJPWUXPPAKJOJMOLPZWKWELZDUKXVNIEWTUV");
    msg.value.assign("FVIZMMFTKEEPSRAWWKOXNXAYAWSHLAAVVLSWLCREUDPBSRPBDFTIOGQOWMQEFQTYQLONTGKNZDJADYYLVTJSQQQLYMNHNCWAQKCJWTRCKPIXUVMNVGOWKNUGIAFEBEDNWESKVYBFUKNJGHCGUUGMSBFIBIRZEJPJOXPXUAGVXYHTHIXFDKLOHTHDIHNRHIZJPPRVOSRQGMBEUCYDLLZOBLJRZOMPDCSACMCHZXVJKTZPCXFTBFIDBEQJWMYZUZ");
    msg.type = 59U;
    msg.access = 12U;

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
    msg.setTimeStamp(0.532525734929);
    msg.setSource(34868U);
    msg.setSourceEntity(178U);
    msg.setDestination(25717U);
    msg.setDestinationEntity(172U);
    msg.cmd = 16U;
    msg.op = 224U;
    msg.plan_id.assign("HQKOLBCVPRDWCQGEKBUEKYKKXGTNQKJXSHDBUWYNBBDLHFNZYYHELFWGTMADTTCQPCGXIOMFXMR");
    msg.params.assign("WAMGNDXUPIZJHILMODYRVIXZNYEWYBZGBCEKQWFYUILJRWTZWFRJXOHDUEBITUZMSCFUOEDYWNKZJHLXCLXOJHSWLEGYOQAHSSKVCIUEVTSRSWNQDTMOTFSFHGZVKRRNOHAMGRBRMIBRTSSVFDGACOZECJLRUYCIKOSVXUDPEIVMMZEDCXPYPXAQEKFFJJNAPAFQPLUOVBTXKCPGYNHPUPNWYJTXTZDGKLJQHBID");

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
    msg.setTimeStamp(0.716820666288);
    msg.setSource(28090U);
    msg.setSourceEntity(228U);
    msg.setDestination(26419U);
    msg.setDestinationEntity(61U);
    msg.cmd = 143U;
    msg.op = 216U;
    msg.plan_id.assign("PPXWDRCIGGUATPJIEJMWSKKBWOCXTCNWOEICBNSNCDBRSRLJJZEYZNYMECBRQVCMUIWFAWPYRTTJZNXSXOBQUGTKVDKUFHGZDBPLNHTKXMIBNOOAEGBBQFODTHHHSXKKCFUPPQEZRDRPFFUOLZDSQMTSHAVJGQHJYR");
    msg.params.assign("EFFTEDQCIGIBTIDEJEGJSWUQSYTWVNZLBGDXZTTEKPXUYLHKLKNICFRXHYSXBBHCCKUHCPFET");

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
    msg.setTimeStamp(0.819629617022);
    msg.setSource(22208U);
    msg.setSourceEntity(158U);
    msg.setDestination(32450U);
    msg.setDestinationEntity(70U);
    msg.cmd = 34U;
    msg.op = 3U;
    msg.plan_id.assign("TYGZEJJVJQJYKDZEMWILULYKRLXWHUVXRZEUFCEOEBTTOKVYQLAOAJCFWHNBPDIAKYHBUNMPCKRMNEKLYIDSHZZNUFONGAHJAFLXTXOHWPHZZPKMDAYBQBTCUOBMRUBZSXDMRISBRRHFSWFGJNKFSK");
    msg.params.assign("KBFZCPWNMYSAVKCAWUROIHECATIZRFMXUQHJLLCJMEZTBWQKVPIYTDXUTBCREJQGWKNOFTDABIUUUSMFLQPPZOLKSRMLEDEBVAVCIKQELTVSVMYATAODEHRNFQKGEVR");

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
    msg.setTimeStamp(0.837704847076);
    msg.setSource(8201U);
    msg.setSourceEntity(202U);
    msg.setDestination(52507U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.318458202431;
    msg.lon = 0.460764193328;
    msg.depth = 0.989742051602;
    msg.roll = 0.244351295902;
    msg.pitch = 0.877788661468;
    msg.yaw = 0.0442297460456;
    msg.rcp_time = 0.40147607815;
    msg.sid.assign("HBWMPRQTDSEDOCKPJYWAHXKRGPYIPWAOTZXGCPNSHLBIVWDGPZNLHRPPIBWTTGFYTJMNHZKOVETOGJTEWDCKZAIQUFUDUHZKBXQOMTSHHGLCBRYYFNAUEVCBV");
    msg.s_type = 129U;

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
    msg.setTimeStamp(0.526906336846);
    msg.setSource(9360U);
    msg.setSourceEntity(4U);
    msg.setDestination(5492U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.608571065975;
    msg.lon = 0.115947969653;
    msg.depth = 0.48989251706;
    msg.roll = 0.485520744941;
    msg.pitch = 0.0318681555409;
    msg.yaw = 0.816464554379;
    msg.rcp_time = 0.206789752557;
    msg.sid.assign("OGHRZZJQFLCBRSMKXKVJVCBVAXRIOZAZLMGUVADFCHTALSCBBFTMKIYWLHUMIPGTEDXHICRTFWXGZLMCTAYSPFOJCUYSUNUIOPJQJSKWLBWPNAQXSOELXIPDZFQQDREYKRJIWMMEJQYJNJBEMXEIJYOBRXQTSFGTHKONDASRWNCWUOEXPTGIKFIEDGNVKCVDUZRDGGXQWCBZTNRAAWOUVKL");
    msg.s_type = 106U;

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
    msg.setTimeStamp(0.0995106497344);
    msg.setSource(15478U);
    msg.setSourceEntity(90U);
    msg.setDestination(8501U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.262358546962;
    msg.lon = 0.307987756919;
    msg.depth = 0.616294624867;
    msg.roll = 0.506974174392;
    msg.pitch = 0.551270895167;
    msg.yaw = 0.0743074530195;
    msg.rcp_time = 0.305939363291;
    msg.sid.assign("GZAFBRGZYCVHQJGSKVXMCJPJYZTLEVQGMEVDWVVHDMHSQGPINMQISGIANDSRIKFCAWKANXZPRXMLOFIWTZXANTXHFOHEPHNFOHATXKBJIJUGUXYRKXQPKVNLFBWSOTJNCSPSCSZNBFNF");
    msg.s_type = 103U;

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
    msg.setTimeStamp(0.342737914781);
    msg.setSource(24161U);
    msg.setSourceEntity(2U);
    msg.setDestination(30420U);
    msg.setDestinationEntity(76U);
    msg.id.assign("IWVCBOZIRFEGIJNSXHMZKAUJUUJZV");
    msg.sensor_class.assign("QAGDMREJIHJLJNFNWCKWVDVZAIMYVNPAYTBMHUZYFCGJPSEMJJPAGEZSZMODXCFSBNTFOEZMRYXQXGTLDOOKSIQPVGEMWGFOXVHXCWHBVAKEQNUQYTKTCACEUDTHKDJVCTIBASF");
    msg.lat = 0.75064432572;
    msg.lon = 0.369217884241;
    msg.alt = 0.785728130758;
    msg.heading = 0.550232221679;
    msg.data.assign("HWGITDTTWLBKPLTNIHRGJWZGURZNXWYVUJQGWAZJORPBMRCTLKBZSHBCMDOCDSYFZQOHDJZMDAJYGNUBIZEXEIEKJLMLUEQSFIXTMMVOMAKFVOWF");

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
    msg.setTimeStamp(0.0259114967889);
    msg.setSource(50209U);
    msg.setSourceEntity(193U);
    msg.setDestination(59396U);
    msg.setDestinationEntity(225U);
    msg.id.assign("ZMKPOLIHMGFGIOUETYCSUSHYMEBHABCIPQLYTSEEJZABXOCOAIWAOGULWBBFP");
    msg.sensor_class.assign("MBFOSYRFCNNCWKTGTQQLQTQYSOJCLXJTTWJYYQZEHPEPBSEISRGFCLSGWKCAXHAUYIRPTKLIRXIUVAJRTDHQKXVBJLBHOGERLPBFWUFJETQZHBERDAMRPZVAZIMHSZYMMANICQXWXWJDHDOSOCJPLZM");
    msg.lat = 0.196047123709;
    msg.lon = 0.356865798977;
    msg.alt = 0.453188521598;
    msg.heading = 0.129906749775;
    msg.data.assign("DYFNICIXLYMFPHMMJLRPEOPSAKCOLCDTFPUPIRSPPWUGCBLYMJ");

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
    msg.setTimeStamp(0.0274524225523);
    msg.setSource(29174U);
    msg.setSourceEntity(183U);
    msg.setDestination(20347U);
    msg.setDestinationEntity(56U);
    msg.id.assign("HFEPOZYXMCQBNMLEWSWQJEKNDEVSFATKRNFEUIHMAQHDFTVTVYWSZSCPWLCTSDNGTGKKO");
    msg.sensor_class.assign("GTYBDBMUORNGYTJAIJRKETFJCOZEYOCLRSDNUQYITHAIILSCSIGVMZWTJMYKVEZDDURGVUXJIYBFTBKKCXNANUMFHWDPZLCPDXEWRXAXTJFPJSPDVAQHAPLMVAEHQFGUYRWNDBBQEGQEQLBLNNDWPXAWHUOH");
    msg.lat = 0.0532763503324;
    msg.lon = 0.895285609616;
    msg.alt = 0.0374124402169;
    msg.heading = 0.705099528727;
    msg.data.assign("GWEZRRPMCSYEEHBDSTXJIONIXYDOUQLDJBUFGKLSTDQKJDUAIACBPPSJWFAMQMLZOXJOFWQLYYZUXSTHNITHTICWGYXIVKUVYFMHKTVYXZKONJMGLWTSAHSINVYBLXAQQENIHYRFAOPJAIBTVVWJCRBBORZNVADZFUVCLHQODKONBMFCHEWHYGQUPBPZNXBNVMEGOMGLLGULUHVKDCRWPASEKECXWNFJIGFAUCZK");

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
    msg.setTimeStamp(0.10851632215);
    msg.setSource(5304U);
    msg.setSourceEntity(1U);
    msg.setDestination(16175U);
    msg.setDestinationEntity(67U);
    msg.id.assign("DSECEPMDQLOUCOMMMHTUDSFYGPVUDEWJAZVEWPZDTQJMHJONLHEAOAJGNEJWBTGJATFKHSCKWSSRVXKRUARTJOOIIQOHMIAZCWIHHHBWDFYRYFBSRLGNMKLVMXGLYJ");

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
    msg.setTimeStamp(0.221392864288);
    msg.setSource(65170U);
    msg.setSourceEntity(212U);
    msg.setDestination(37118U);
    msg.setDestinationEntity(147U);
    msg.id.assign("ODHXBKQXMIFNOWDJJAOVJWEEVYCCKEYBAMFHWTJHWQQALUMPRAGSVEQHOWIFVEOJNAZXORCIWKNLXLNPCRFXGXQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IBXHCSZREHVCVPWGOMNAGFZZUKNWYBJKUDNLJHOLQTYIHJSOREKGEQCPVBCKWWIQDADMOVGOSFCXEQNIXMLRMAOHCWICEKXHLOATKVMUIQFLUQYWZEZMJSJSUVOLAXEEKPBNYTDTYBUFMQVUCSGBNAXXFRRMYSLFQGRZKLIARQTVWSODCEEPXMRNBWDNCYYTVPWZZPTJRWSRGODGVHITDGFKAINBFJJHPSUABUZ");
    tmp_msg_0.feature_type = 97U;
    tmp_msg_0.rgb_red = 52U;
    tmp_msg_0.rgb_green = 236U;
    tmp_msg_0.rgb_blue = 61U;
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
    msg.setTimeStamp(0.708659524015);
    msg.setSource(53537U);
    msg.setSourceEntity(14U);
    msg.setDestination(21278U);
    msg.setDestinationEntity(68U);
    msg.id.assign("VTJEGPNCYZIOYRVSSWKCGI");

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
    msg.setTimeStamp(0.162054883447);
    msg.setSource(43387U);
    msg.setSourceEntity(133U);
    msg.setDestination(48464U);
    msg.setDestinationEntity(129U);
    msg.id.assign("FWZUFKCOHQTFPLAHYBPMSRHZUNWXMKIXPMFXLGDMKJDRSJIFLVZAVXQYMIEVW");
    msg.feature_type = 166U;
    msg.rgb_red = 80U;
    msg.rgb_green = 71U;
    msg.rgb_blue = 38U;

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
    msg.setTimeStamp(0.619003496093);
    msg.setSource(1861U);
    msg.setSourceEntity(41U);
    msg.setDestination(33115U);
    msg.setDestinationEntity(5U);
    msg.id.assign("ESPTXGYRBCKWXKWRRIGRXSNMHVOUAAQGOKPYEFNIXFLOQZULNAKZLPJBTYPVIFHWGNMSPHDICBGVPAVFMHKXAQBZYYODZBDULIJBXPRIKMVRBHCVVHJISOEUFZNAZIGHKWVMMNMPDWBKDGYRLXYMTEWCQTEBKGOXEJQAEZSEEQQ");
    msg.feature_type = 0U;
    msg.rgb_red = 21U;
    msg.rgb_green = 100U;
    msg.rgb_blue = 156U;

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
    msg.setTimeStamp(0.64127005805);
    msg.setSource(1583U);
    msg.setSourceEntity(88U);
    msg.setDestination(55249U);
    msg.setDestinationEntity(13U);
    msg.id.assign("NTFQAZWUBBJWIOXURNXCVTZKHZRRBXAGFCLVMPWICXVLELIVOBYSNXJUTUUVUKWMSYBREBJBCIQPVTMTPSZCAPKUCHLAZDKMGOQWCGQMNAIFGNQPLFMJDDSLJRZCYJKHAFZJYVTXBGLDPRORDJYYNODPMDOLEFNPOSRUWAOOHIEIEMGEZKIXJDBGNATTQHQR");
    msg.feature_type = 246U;
    msg.rgb_red = 26U;
    msg.rgb_green = 15U;
    msg.rgb_blue = 66U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.36926063555;
    tmp_msg_0.lon = 0.128516977097;
    tmp_msg_0.alt = 0.886826598008;
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
    msg.setTimeStamp(0.92181380443);
    msg.setSource(47894U);
    msg.setSourceEntity(217U);
    msg.setDestination(24898U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.488926781366;
    msg.lon = 0.183014813276;
    msg.alt = 0.576922531025;

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
    msg.setTimeStamp(0.0178623365073);
    msg.setSource(11433U);
    msg.setSourceEntity(81U);
    msg.setDestination(7434U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.857564062597;
    msg.lon = 0.203647830382;
    msg.alt = 0.196212947454;

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
    msg.setTimeStamp(0.867963133372);
    msg.setSource(38433U);
    msg.setSourceEntity(19U);
    msg.setDestination(62961U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.139458459182;
    msg.lon = 0.692422898162;
    msg.alt = 0.63045323013;

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
    msg.setTimeStamp(0.00471605842712);
    msg.setSource(37444U);
    msg.setSourceEntity(42U);
    msg.setDestination(61892U);
    msg.setDestinationEntity(230U);
    msg.type = 234U;
    msg.id.assign("TSZKJWDNCJZITTRNHVBXXJLUVKEJIEGLEAFGTXIURFPSCHDZTCGVRQHNYPHKOMCLMERJVGQBQROJSOAPTONXKTMYCAQSSCMW");
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("JPYIQYNKNSQTQSMPTVQEVXMNHJWCYAOJVQXFBTOTPRMGYIZKMGIESPEAWMAXSRSACOUQLGFITJBULISXWYUJZBASUMPZWUVGTCXLUCHVMASCDIFWHOGJARCHROJZICAWPLHFNJORFNBJEDELWFGKGNQSIIPRZVLVDFNDGTYVKDQKDYPOMXNKFKJQLUZBWSUBODCCXBFHLYERAHFKYEPPXX");
    tmp_msg_0.predicate.assign("RHDZLOISVQCIKOZKNMWFDPUJTSEZLOYXTEBWFGMGQQGBINASXZTGIXJHEDZIWKSSSZUQOUAXLHNMQLGCPUAJNJPTYQLSVWUCFVKYMLZCMRVVLBFONEPDRNFNINCWHUPJKAHRTEHDBMBOTDXTYAEOHIBZVXCEBTWLGNLOXAJRIWKCIQGBRDQHFKXQGMVRWZQW");
    tmp_msg_0.attributes.assign("ZDQEUJSWYPYSBKDKOFZVOHXFQXASPJLOBRIMGTBFXITSRYCMQQBAZHNNETFDQUJZVAHQJZWLEUREAYCDVGIZCPFATMTVUYPAWNKMXSWYVCRJSFNICZLWOHUELPXQBMPVMKCOGYFAGBZXOQUHWHTUMBKVFRTKVGUNKJNPMMOFIEYRNLILEVYJXHLAEPYOCHRGXLWQCDKTOIJXAFUVLSDZWNPAROTGEDBCIGREGHDJNSKDSDWIXBHMP");
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
    msg.setTimeStamp(0.142584430234);
    msg.setSource(43316U);
    msg.setSourceEntity(87U);
    msg.setDestination(56869U);
    msg.setDestinationEntity(76U);
    msg.type = 34U;
    msg.id.assign("GSTROEPCCEPEDAGSFTBIXNJVMJFQGIFYDTBEVHNSXQGUHOYRXZAMQGQCTHFMABLTOZSZFOGXLFDWWCKCKRHAUYHCDQSSAKONYFMKAVULYPOXUBPSBGAWZVMREWTELQRFVPMMNUHLJVDTRVWMFLLIBVAQVZRHOZWWRZKBUKYQDLJMIESTXDIGNMYISXDUUNTPZKJFDAOPSPQYCIJIIEATWRCHJNKWX");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31760U;
    tmp_msg_0.off_x = 0.590696289363;
    tmp_msg_0.off_y = 0.834931848565;
    tmp_msg_0.off_z = 0.184171935428;
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
    msg.setTimeStamp(0.671544904228);
    msg.setSource(31844U);
    msg.setSourceEntity(148U);
    msg.setDestination(22954U);
    msg.setDestinationEntity(18U);
    msg.type = 150U;
    msg.id.assign("DFJBFILVHWKGNJQATIRNDWKRHKYTMAFCESJXNQNXSLXKBUSUHHBZJTYT");
    IMC::NavigationReset tmp_msg_0;
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
    msg.setTimeStamp(0.455811606867);
    msg.setSource(23452U);
    msg.setSourceEntity(207U);
    msg.setDestination(35540U);
    msg.setDestinationEntity(14U);
    msg.localname.assign("MWQIOLKZYXPHAHNDMJFRPIQANOTVCWSTNLLAVYRDETGVWHQSZLPVKQGKTQLEWEMQBLXWJHRKXBIYUGFZOHXPSTJFXUNZPFGYFCYWIIGEYPNZJWTBJFADPIPTOMFBITBBCONIPXEKZUSCZDXVABDVOZMEOGAAUJMWSNFWBLHNDUUGIZHCCLXPURVYEYOTEMWSUHNKVDSXKRDLYQFFCIMBHQZJTLJOCAHORGJMYRUKVAKKSANXUSMGRDSCQEQGR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BSWVANJRGEEWJJMOTFTYGXOIMLLTPMLGYZLSYPKMFRIONEYEPRIJNAAMGCSXCENKTCIWGUSHNJEPCVFAOZQBKXBCPUTPOJXCUWZALURNYSSYBGERCLIAMDATKDBLEKHDQCIQMUGWKDJDALEZDFFUSIFHIEZYMRYWCRNVVVVHBFADCDTZQOPTWYAJBOJQTSZ");
    tmp_msg_0.sys_type = 220U;
    tmp_msg_0.owner = 16437U;
    tmp_msg_0.lat = 0.114853474767;
    tmp_msg_0.lon = 0.276393806961;
    tmp_msg_0.height = 0.538205125162;
    tmp_msg_0.services.assign("FPKBHWWVJVTTOORDXNCVIOMLDCTWMFLEOQYJURDIBQXQYLRARBZCGZYGOSWXGRXWKMOITKHUTTVROPHSVLCHVIDJYAUEBRCBTXNZDSDLUANKFEDZKQPCK");
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
    msg.setTimeStamp(0.0936273333227);
    msg.setSource(29058U);
    msg.setSourceEntity(82U);
    msg.setDestination(23907U);
    msg.setDestinationEntity(185U);
    msg.localname.assign("PTDOBXGRYJWSNYMIRYICWRWSOTPMCVEBGYCYBZLMHKQLFKNRXNFGSWJMYTONYXOIAKUEORUOQPHFFDTTRTXAOZIAXEHNZJIMV");

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
    msg.setTimeStamp(0.0816636473338);
    msg.setSource(10764U);
    msg.setSourceEntity(13U);
    msg.setDestination(54293U);
    msg.setDestinationEntity(244U);
    msg.localname.assign("OTQBZJXQKZMPEVDQODRKPEOCLHDSIAWPGZLVFYPBXZJSTUHNFJGRAGTQNJLJZDKLYBHDLWUNYCZDJEPMHUJKKQWCAISPUBBXLXYJDOYVRHMRRNIZTZCAGEEWBSMCDKWCMWKTMYNGTONVNYEPTOHDCUZGIBWULGUMHCEUMXJSMPFSQJQSFRFALVIWAKFWQLIYPOTCROROIQAGBIZTHEW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EVONTLWATQPMHBCDWAHDIVCAVQUSOXHAXKJRRHDFOSRYUTEFLQMKZMFOKDYCDTUTGUIBGVHDKOKBHDNZZNIIFNIGXEWEJGICCLPJTBIJVXPMIKCWOANERRTEBFYYVXZPPKQG");
    tmp_msg_0.sys_type = 76U;
    tmp_msg_0.owner = 61655U;
    tmp_msg_0.lat = 0.482315076883;
    tmp_msg_0.lon = 0.484144216014;
    tmp_msg_0.height = 0.775854134788;
    tmp_msg_0.services.assign("DSGUBTQKTWH");
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
    msg.setTimeStamp(0.444943365936);
    msg.setSource(16557U);
    msg.setSourceEntity(142U);
    msg.setDestination(18685U);
    msg.setDestinationEntity(89U);
    msg.timeline.assign("IPHWMEKRZSQOOCAVSCQITLYRBCSJDMACDUOPRAWFEQTQMWBZYRYLSCEHPRILQVP");
    msg.predicate.assign("TLSFPTJHHSWMSDB");
    msg.attributes.assign("ITPGXFTFMNSZDOSYDOIARVAMQCTGDPLUHFHHUEIBSCSEIYACMJHKZYAEQCMYGKOSPKJTBWKRFCFHKPUZTWWRQCNBQFLZJGORXPLANPZDCGBDRVHYHUORJEOHVFEJUNFKAXLDJSQAVVUQWXRJXONNQMTZEKGLNMCZZRILUIKDRSDSXJHWNPVGIQMATYWXLSIBWWOTIT");

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
    msg.setTimeStamp(0.85439180547);
    msg.setSource(436U);
    msg.setSourceEntity(44U);
    msg.setDestination(25899U);
    msg.setDestinationEntity(185U);
    msg.timeline.assign("KGQPXLDAFQUUFRAISHCPHLHVXSNBIKOBCSFYZAADSXYBRDPOEGHFDMVPROUTTEAZSKJSATCUBSYTGVHRHRBTVKPMWTNYGGAZFGBDJRKCWHZNVZSWABEREKXNUIILPVVSHDNVOOQQJZGJQIYWECPMGJZIALULZECOVJOYDIBGQFRWCIQPMLG");
    msg.predicate.assign("PGOQMTTCKXSHWLBWMPEOVGCYSRLRNNIKFXCAUQNWRMNITTIZDFSLBACXBZTOAKZVWAVOSQAHNXTVOCHOLRTQUSJRWWFOLAVMLJMVEEYUYLJITTQXUXFGTUOOCJSBCKRDUIHEZHUQEBBPSYMESQREGYACRPXGBCP");
    msg.attributes.assign("WVKXPRRFHERJFDPKWBLBESNPPGHQUCYSIUXJMOJAOWNTWKONHPRTHAKNVMUSZCPMJLJUACVUMLEIDAZSTVMKZYGCFAHTYKOSWIMCNSTKXNAUXIIITXALYWCJAEODHLEDZQIZQFLCOPVOBEBXUYYXMWMDEVDEDQBWCYJIFCAKPPRSQLIVGTSGDPKGGCNHZVGOHHKUYZGQUZFZNWYGNVVRLREUBGQRABQTRXBWZJJFXFJFLQOF");

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
    msg.setTimeStamp(0.974799375453);
    msg.setSource(5199U);
    msg.setSourceEntity(249U);
    msg.setDestination(39066U);
    msg.setDestinationEntity(97U);
    msg.timeline.assign("ECOBANABDWPEXEGNJVEVIGSZIAHBEDNPYHDLOXWFUQUGLMIWFHRRKSWQVWPXVVQCBCXLSZHINFLXUGUIMYZJZNUVIJMCDNDERWBJBHYSGAQKCBHDQDGTMFUTI");
    msg.predicate.assign("EQJYHWEFGJHJRUMDRKTQVYQBGOKUNUXGBJRTOXFLKNPDDPGPVITDXTYIDXYZSTMVKOGHKEHFQVSQBGOBBVJVNFGLZZSAEGMSZBLIRFXXWPMJOAUMKYOWCSCEDYZNLRNTJWTLAAVIRBLWPVIRBLNYXSE");
    msg.attributes.assign("WMDPQSCHFIMNDSUHCTFOJTAFAWDUBXJMQJISQKDZGWZNDZMSKIJXRMTTPEXEYAXIUYCANGOAXDBOUIFRAIANECHYWVLSALNQDKPGONEJZLHKGIRHHDVPMVYPJCMWNMQPMAFPGCIWJQEORWZDFTCBRZYVTHYEYKWLPRBHVBYXESUAXBELZLRKQUIC");

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
    msg.setTimeStamp(0.788123492625);
    msg.setSource(5040U);
    msg.setSourceEntity(238U);
    msg.setDestination(60797U);
    msg.setDestinationEntity(192U);
    msg.command = 16U;
    msg.goal_id.assign("NUOEUZMWLGIBQKKSQSJMANGBEXNPVTYAJXFDPBAHTEICYHCVBOGHSCDEUXCHEGDPRYMXLZJRCIFZFTPMSFLIFVOLYVFGQAR");
    msg.goal_xml.assign("LVGVHMYAQPCPEKBEBNDZBGQMKFADKKWWJSTDUHKZIOXHTYYWSOCIHQSNOBKEVLECJPLUTDQAYFHMFAFYCJMGEELIKIHZGZXNRNXTCLKRULZWRPWEO");

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
    msg.setTimeStamp(0.0537268699892);
    msg.setSource(54972U);
    msg.setSourceEntity(29U);
    msg.setDestination(28260U);
    msg.setDestinationEntity(101U);
    msg.command = 0U;
    msg.goal_id.assign("SQAXDQXZDGYEBONRWIDNEGPTLOSCDYDNHVQDISGLLPRXYCAUOMPYWGRUCHIJKWZZNTOPDVAYNVFGMQDZXCHXJSOMWRMVBQAXPECFFKFKXIVPTSIVTRXXHFSBVTHBAWGXLKMVNYWKYFJITOFZBTEBAU");
    msg.goal_xml.assign("XKHWBFDTHBRKVFVSVQPDMLJXEKFNBQEIARNGWOIXHELRUGSDJFLSMGWHSBOCWUUKEVUVHPZFTDHFYGUTCNTACQWRUYTJZPSQBBUWIITBXGKJCPEMQOUACWDDOIIRARINKKLZLZLGOFMNPCRUATNMAJQVXRBCGLAYZAJYXMKZYBIXEZTNKPDADDKVHEPSUGOQEGMCEJQBJVOOYZNEPFLNFIWDJVWHGHXQOXLTZPHTYQSA");

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
    msg.setTimeStamp(0.0931232718986);
    msg.setSource(11417U);
    msg.setSourceEntity(224U);
    msg.setDestination(44044U);
    msg.setDestinationEntity(245U);
    msg.command = 202U;
    msg.goal_id.assign("BBQVMBRFUJCLZIPHNBHQJSLXUMFFNLCTKPIXLJGETCEQOQWDOMMEAWDZCZFQBWSOWVOSECSNOTNSOPLFSCNHRBJTZLWKUMDQOAVDXFKGGMKPYVQOIWRGIJXEZZRVMYULYAXZTIYCANBOTYEIHRZ");
    msg.goal_xml.assign("TYIOBSRDOPEJLBFLFSRIOEJQMWGKJVTUZQZHNYIDGITKJBUCIIALDJQAOBRNIDRLDMIXUQQJDSQNLEVKXMHXOYNPX");

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
    msg.setTimeStamp(0.570748907605);
    msg.setSource(65030U);
    msg.setSourceEntity(18U);
    msg.setDestination(45214U);
    msg.setDestinationEntity(47U);
    msg.op = 159U;
    msg.goal_id.assign("DHPQAQLPLGCXMYDHGZAIKVIXTNEEHMULNCZGDLFSWYGNHEKCYFBMVUJUGQGPJCIOFHLZUSKCBKVEKNSNQMTWFHGNQWMOGTWVGDMNBVNZDALLRQVCO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JADSYULDYYHZXWFRTCCPDNTYOPLWQQJINAOCCPTSFGDBAYHNVLUGKOXWILFGAXMNXKYHQRSGPEGBTMRXDTJKIQWBAVQGLVBVGYNFJXZIAENOIFRQLPMYFVOMBIJHVUOMEZVAUEQTPWGNCHPPTRQUBEITURSHNHUYZUZIZUXOR");
    tmp_msg_0.predicate.assign("AWSDKAOEOBLQFPVTIJLKMOGOKNUFRIUVXVYNVTAEWJIBXVPLTKUWVSIPNSNLKKUJYPINKZSDMRGFPVHIYJXWXQACLQXRXZJQHTEOFSFLVOTMDZAYYCYHPOCRKBQTHZBPTCSIBCAATZSIXRRGIQQCNFZF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UFAIURHLZVHWAFLGBZLGWSCKNGMFNIUPXDJPGXMVQUACBVISQBSPHOQTXKYKJSVZTBMWPTNIFQKWRA");
    tmp_tmp_msg_0_0.attr_type = 244U;
    tmp_tmp_msg_0_0.min.assign("RDTJJIJMCRPDEDAIPLZLZXWCEXDHXSEQAXIOKFGFCBYHURACVTPDFPHNUQJXTHKXQNMEPPLRACBXMIMGUSKQMOCWJCZPLLNSFTPHNKSBUUEVZ");
    tmp_tmp_msg_0_0.max.assign("PZYBEUHCGUCRVULRKDQLLZACDIHRQHPWIBYAFGVMYCWAXBZYEGADTKWGWMGZPWKJLFIBMHILWKVIGBXKWDTOFYOIGVUTOTOERQFVPEHQUZYRZARVKPOLEDKOE");
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
    msg.setTimeStamp(0.502807072493);
    msg.setSource(36127U);
    msg.setSourceEntity(77U);
    msg.setDestination(1873U);
    msg.setDestinationEntity(159U);
    msg.op = 83U;
    msg.goal_id.assign("VKJCYYACPNAQCIQLFIELVFUWVWXWDWCPGCOZDHSOAWSYXNNWBSOENNSELIIASSYJAZMXGQQRVAFBKHMSFEKVIGJCPZQQUIJWRABJFBYO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OXEHCNAWYLLTNUTMEDQWYGMOLLPDIQMLKWTCJIYKRTJHDWPMOEFJWREYBLEPRGGZWVHUAHGXJSDPMCPEBIKCRFXBNDGQQFNMIKKIWKHCLBJFZBIEUAVNRKAREFOAUCJQSMBMYOBBPQFFJWJTAGZD");
    tmp_msg_0.predicate.assign("VFKPPQKZWTEGDFUFAHCXVRUMWGPUOYOSGGYSCKIIMAVQDMRNQMMFAIWBQBXNDJZTXPJ");
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
    msg.setTimeStamp(0.845340441965);
    msg.setSource(52422U);
    msg.setSourceEntity(233U);
    msg.setDestination(56377U);
    msg.setDestinationEntity(4U);
    msg.op = 6U;
    msg.goal_id.assign("VDAPNKATEXBQIMQCBPWUOECZLZVSFLRIALLGLHOJVUTZXNYHUVKJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DOXVXSKORZBRJUUUEZQOYCPTNQAKFIJWIIVVUNIJIYFPDYSEKGSPZTTHHSEJGKCMZNDCCLQWVLUHAJJCDCWGOWHGSENUAHVXBLSFWBQDNXYNDGQHJRBOERORXEMYXWSLTRIMOKITTBIMJNXNVFKGPWMRMAOSWHZPHUGAZTNMYRERKBCBUWBLVFFEMIAVAQUSUFKYWLKLGTFTVMADZLYXHRQPCYPDOBZJ");
    tmp_msg_0.predicate.assign("VWXMBISRRTVCNMWJUCMQUZAGSYXLLUZPAQPWENMBBSMWUIDSUZKDMQKUXYWMUBEJEKKSRLXGIFLTOIDYONHRYQHHZKCPUFCEYVQDNKLOAOXQNCSVFFWGHJNOTTTYELTEUHVFNYBXTXPPSLWRZKGOYJKFCJDEZVONALFZGCCRCSNHICRVPLEHNIWMBZADDRJZBFBMZTXGQJSK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YZHWSKILYMSKXXVPHJJTHMDYTBUXLQOXVSCANPZUPYLFRVRNAZEYUITWLLICHHBPUUHEKNSFTVMOAJQIWLXFNIZUKMGNN");
    tmp_tmp_msg_0_0.attr_type = 194U;
    tmp_tmp_msg_0_0.min.assign("DGAWDSZJBTZIFWAMQWVOLEVUFXQKWMSLRDJIMKFQSZNBWLHFEWHKPYLZSNBXXBAGHIYAUWOPVAYRUEZTQMFRCOKHDTDRAZWZGJDGQZPIIUKCNUOCNKRSRLCHENLRYCSETXT");
    tmp_tmp_msg_0_0.max.assign("AHLQUJBRYIYVJOEQLMAAGPQNMLCMBH");
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
    msg.setTimeStamp(0.30123384665);
    msg.setSource(46274U);
    msg.setSourceEntity(181U);
    msg.setDestination(26395U);
    msg.setDestinationEntity(119U);
    msg.name.assign("ZFVICZCOHCTINVOYHGFEAFQZTESHWXDQVQHHEQIPWABLIUJDSISLYNPNMROXOSIVCYZNKPTVEKNGROELACBFWTSIQYRLBUTAFJXHMZLNAIJXBTYJJWAAZBOQKMM");
    msg.attr_type = 209U;
    msg.min.assign("OMXTATGARASBQESHVIRWJJL");
    msg.max.assign("WZPCDUDJMVAKLMJOQHABRQPTIZENCTJSYFEPZRMGSFNPOBHDAKVVWASMCVZQXOHIOGOZBGCUKICKFWBEJWLXWXPSVU");

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
    msg.setTimeStamp(0.804339766868);
    msg.setSource(3115U);
    msg.setSourceEntity(98U);
    msg.setDestination(19571U);
    msg.setDestinationEntity(60U);
    msg.name.assign("YVLDRYQNURUFWGFFBQFQIHPSSGFHJQRCSWGLYUWTTLRVAGX");
    msg.attr_type = 175U;
    msg.min.assign("RJIRPCDURHCWCDEMYBGLUXOMZCQVPHAOVOKNIFWYGQTAVDLLGWZNJMJALFPINWLVBHNAVHNL");
    msg.max.assign("LMPWQPXJPUTKTKHGCWVTTYCEKYMSDLFCSWNIQGRQZAMJWBJNTHIOAUBADOEJQMQPJIBNAWTQYSYUJPGMROBVWOVGGYMODRRNYQZATWHSUWKVEFXLDEICAVAGLIAVCLRZUXRBDJVEY");

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
    msg.setTimeStamp(0.0426356314375);
    msg.setSource(20384U);
    msg.setSourceEntity(220U);
    msg.setDestination(41457U);
    msg.setDestinationEntity(27U);
    msg.name.assign("AOPDKCITZKVPKUTXOVJDNXOGAGEVITRQYCRAQHTWHKBEXAVFNWMFMOSGAYVYRUCQGNJMQLSRWPJNYETXNADOQNYQITBNJRNRMIJDRXPAUCBBOPOSXGHCBBLUMZHPLRHZWAZIBYOUJMWINZGYSMFDCJCDMVWDXXLPWNWEUHKJFLWUBTTSBSQDHXKFKG");
    msg.attr_type = 13U;
    msg.min.assign("LGYTKUNJKJWNPDDLLZQCARXRXUAKQANKTPNQFLDHHZERLFBKASJHTHXKVGYZTDFSCPUEECLSWXOETHHCKMXRWVOURWWSTOEMEDGOQCUJVGIMQVHDLGPJMQUMTMBZXDNPGQWYGYRTPACTENFYBEDAWWGDQPMLXRUZFPAVBVZIYQVDZHYNSOGYVLHFYIVAZRONSBSNKROUIYZOIMUABOJLZGJCEIJKRFXMAJBKXBCPWQBEB");
    msg.max.assign("EUCYUNUOPHMVUCLOUKTPDNJTDTZOONXXNNQDSZGLLHZKCRNKSWFWFRWRGHWACMDHPADJSAQWBLVDQXQCBTOVBUEBGUYIVRBFLLYSUYRVHAZKWCMIYJKFHJIDXKICQIBMNPPQYYVBEZGXWGZSJLZSUILWWFEFPJKKMFXHSCEHSVXUGBOJMZFGMITQXJZWTPONTEOIDECKDPTAYVQGAZAPEVSQRGAJHVIDQTRNXLAASBRELRJMBTYMXNRFEYIKMH");

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
    msg.setTimeStamp(0.941615060565);
    msg.setSource(23016U);
    msg.setSourceEntity(70U);
    msg.setDestination(20364U);
    msg.setDestinationEntity(164U);
    msg.timeline.assign("CXYVVIJAMHUAUDSQTFYKBMUJKSYLSGUZDQNZSNVRWAYBOQFCOIKKSODHRDRKAMHXZLFZSAJXTRDICWXLESLPOTHJXIGFRFOXKDPNLBJOZRBVYNPGPQLIJZJXRZJFYBZWTESJWWGGDUZHGEZQVHDNVLF");
    msg.predicate.assign("GWJFUOZSGJEJTOOIVANXDLAZDML");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OWGUTZAPPGMYSYWHXNGCFTFQMIPLBOZRXCLABDDYTNCEWSI");
    tmp_msg_0.attr_type = 192U;
    tmp_msg_0.min.assign("VSUXUAIDZZITWVDWAGJHKZWKYSITJDGPDEAYBUBMXRMINHNLORJALBSGHIMITREBQCBYADBQCQKQEJYJEL");
    tmp_msg_0.max.assign("AHLZMVZQVDLYJGBZRRFZNAGHIKKKKDZEARUUGRBPDIDCWYXKLXXRQMZEENRJROLFMGNQNWDQXBBUJOLQOMHIIFWUOVILYUNATCAEFWCVYKTPTKEWNAQHCSTXCGXKPTSSNGMXVCPXBHYZLYGAJORPEVZMPQDMSXCCGSEUHOJQOTSBCFSBEYNDGVVQHJNWILKTIFBMJT");
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
    msg.setTimeStamp(0.845889776791);
    msg.setSource(9022U);
    msg.setSourceEntity(179U);
    msg.setDestination(6635U);
    msg.setDestinationEntity(201U);
    msg.timeline.assign("VWHWAUBEMKERIQEBQIAGIQVFOKHJXSXTPPSTQOZYVMDGKEUIKQIWMNXSCUMMRBSPGHWLLRPNCWCFPYLYCGDIGYYPQGOBZDECWFBVNEFLAVFNAMDZNHGNRTKVDHRMHAZMTQOBJYE");
    msg.predicate.assign("TCGPZGISWZFJUSLFJEEYNBSIABFOQCJCQDMROUGJVNIRGLJDTTVCAXRSYAYOJDSXKNPTEBUZXYMTNOPLWRFJUANRVZNMVXALBBXRSQGLCMPQOMZWEAEILYQSGTWLVKSNQHMRMCCQJIQYEZUOWBDIEKHNAUHEJRZIXMTOWKDFHLOPLIZWTDBEHVFJWSYMBCHTIQGAKGXKUKFKQGVOWVMXPHHKK");

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
    msg.setTimeStamp(0.975909431517);
    msg.setSource(27537U);
    msg.setSourceEntity(162U);
    msg.setDestination(28851U);
    msg.setDestinationEntity(210U);
    msg.timeline.assign("NRFYZDCRYMSNB");
    msg.predicate.assign("ZLDFMVLHYKSSKEYRTNVTOEPXPTUCMPMUCNXEBUEJBBGQYAOLDTFOHRMECHENPFGEWABIWHPQTSYJGICWJRJZFHWNAZECXTUVZVICHNORLJMOG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UNWJFOHRHQJFWTBQJPXBXTKEHIWNQFINGRRMTVIODPVEEMKNHYJSFPRPSQGBFMZFSNDIYDZAVQYWAAVRPXYKMBWEVAMULLDNVOJYULCBPVGZHUTGVHBLMUSXBPOOOXTAOOLFSMCKEQBKZYCHRMOXIWHHWSPEBJZVCTXSGKCRLVNWFEFDGQSLLWXKPXZZDBLNTCQ");
    tmp_msg_0.attr_type = 136U;
    tmp_msg_0.min.assign("ARRCWAKWIOKJJENYUZWOSBNYFSUUHVWIPPZBNXDYXHGKOGOYVMPBAIDHQLVETB");
    tmp_msg_0.max.assign("HISSGYRDCVFRDRWMDIZUEETELJBDBVWOCKDGOMJAZLRENPSSNAZVMGQFQZQMBFBUQIBVQOAANCLPMJXGW");
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
    msg.setTimeStamp(0.32906145068);
    msg.setSource(46158U);
    msg.setSourceEntity(239U);
    msg.setDestination(61329U);
    msg.setDestinationEntity(16U);
    msg.reactor.assign("KRFQYTHOTYLXMQOCQUKGFGJCSZXXDLBLHMEQCEWRKYKMVOXNGZZKMLEXDSUEZCCXNPVQQFHJMDBCWQRMRIXZVINYHJPTLAZPHFOYAQWMGWUGSIIWIPRNEAHPMKVGFOKQUAMVDXANGMOPWPESFBWBUTRYPONWRDAVH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GETQBCRPFQKNLOMNVBCRYQICCZTOCQQAJZGUBYPARWVFXJRUMZIHRSEIQDMVKNUVAQHLQTTZHOBNPCDYHKNS");
    tmp_msg_0.predicate.assign("NIDWNEJZXMAPENPKYLEXDOIPOSXJSTQLEASLAHXVUFXFWSRRHQUTVZIGTCYDBDVSEVJYYGIHMJHRWMOAQXBGVAGXZNWUSLNJCDYZMOQVPWQRBZYREBEIQKLBSYCOPDLLURJEOBNSUBTHOFHTVFWLDKYARTZMJVGFKACFUFXQESOWFUNSTURUAHZCVPKLPQIQEWJICGVGDTL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MDQXLCHVEUKZTNGHLOWCKUQNAPTLMYNHQFULLKHIRDPXWG");
    tmp_tmp_msg_0_0.attr_type = 129U;
    tmp_tmp_msg_0_0.min.assign("YJGVOVLKIMAFYTCBIHVXVCWYBUBDSWDWGBSCZBZRGUAKVEMMZDNYIKAOADOLETHZSLHCQLGBRWISUHBJLUDNAKSFTMFTZZGAJHDGCNDEZXLHGKVZPRVPKAPDRMQEXFNYDPURPQOURQCREOQF");
    tmp_tmp_msg_0_0.max.assign("PQVWRSBAVMEHMHYRUKTCHSJGVGENOPKZOTKJGPQAAQCYRXIUAQVZBWGHZROPLFCQGBRJELBUXAOCQKCSTYLLDBWUDYMGMEDCSJMLZTSOAKRXAUZFMJSEVPDDEVHURWRFLLCN");
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
    msg.setTimeStamp(0.32730863691);
    msg.setSource(14053U);
    msg.setSourceEntity(221U);
    msg.setDestination(37209U);
    msg.setDestinationEntity(115U);
    msg.reactor.assign("ONJHAWUMAKMIJXNSNOSNZLCEXPLBEJUGFSPHCFC");

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
    msg.setTimeStamp(0.438488137282);
    msg.setSource(19089U);
    msg.setSourceEntity(190U);
    msg.setDestination(46011U);
    msg.setDestinationEntity(102U);
    msg.reactor.assign("NABDNHMZOMGQZMYCEFHPOAUBWVHLRNMBESXXIHGWJXMGHQEPIKIKYRTAF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KSLGXPCVUYDAUWTCPJSGGSZXSCPXDZYKNYAVFXBVHEUJDMBXZIMFYJYMSFHVOXBWLUORDAWZQDPNVLIQGFWXLTZTQGZVDOEPENVPMHIJZHOFFPQIDWHLMCMEPTVNMJRLZCBFKXBFZULQQHNSMYDUXIBTKDHRJCHTUCWERKEUJAAGFEGCNQORWFJXTAOAWYUBLRCKZSANPYGRUQIGAISIHOQRTJOYLR");
    tmp_msg_0.predicate.assign("DMBPMLVDCAYQEGPHYRDOUJKXVOWJUSTDQSHXEAVZQYDGNWAAQJEKSAFQZFNV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GNHHLMARNCCPUPQDKUEZRZMWOXYU");
    tmp_tmp_msg_0_0.attr_type = 144U;
    tmp_tmp_msg_0_0.min.assign("ULGBXHOIKKFOXXWOFDGUFGFKIZCOSWPJLLTSQGSLDUQWRSYUXPZADTOGRFCZIJEXAVLTWXIUUVYIJNKVYMIWYBYQRHNHYGCSKXVUHLMRXQUWVOFCRFBAKTJDZYRCBZDVWSJSFHBRNEGJKOMANZUBOPPWLUVMMDFQBWPEENNLEASZNQSFRGZEMABKGARTIBYMXHDAMDEZ");
    tmp_tmp_msg_0_0.max.assign("MIBNIIVJKSVYMBAAWXOUPRZHCNBAUQOIJHEIWUGTZBZHIDXSJDBGQHVBUJAIJYNTYJYFEZKFWTFOTLHPKDPYYY");
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
    IMC::VideoData msg;
    msg.setTimeStamp(0.641142484938);
    msg.setSource(36307U);
    msg.setSourceEntity(109U);
    msg.setDestination(10899U);
    msg.setDestinationEntity(142U);
    msg.id = 52U;
    msg.width = 14516U;
    msg.height = 10812U;
    msg.widthstep = 47498U;
    msg.channels = 51U;
    msg.depth = 252U;
    msg.finaldata = 182U;
    const char tmp_msg_0[] = {-100, -17, -113, 58, -92, -33, 41, 120, 98, -19, 20, 104, 73, -32, 117, 55, -93, 79, 50, -1, 78, 115, -25, -49, -34, -81, 113, 0, 2, -122, -31, -121, 86, 118, -59, 95, -114, 39, 116, -44, 100, -112, 0, -57, -85, -95, -123, -76, 9, 82, -54, 65, -25, -109, 21, -109, 69, 46, -123, -16, -50, 68, 86, -52, 92, 116, 113, 47, 37, -17, -81, -18, 93, -44, 26, -128, 72, -34, -1, 116, -53, -22, -47, 111, 19, 12, 126, 35, -19, -13, -79, -117, 57, 26, 74, -21, -110, -79, 100, 85, 94, 39, 101, 37, -68, -75, 67, -88, 114, 57, -48, 98, 50, 112, -85, -110, 10, -90, -49, 53, -106, 93, -31, 121, 65, -92, 0, 63, -114, 85, -7, 77, -109, -128, -9, -119, 119, 85, 16, 52, 70, -65, 105, -125, -9, 74, -32, 115, -113, -79, -126, 65, -3, 36, 40, -90, -5, 0, 15, 86, -115, -13, -79, -49, 53, -1, 89, -47, 6, -34, 126, 76, -126, -57, -107, -11, -34, 82, 104, -120, 59, 112, -49, -51, -96, -47, 1, 115, -109, 93, -127, 75, -97, -62, -104, -94, -128, 44, -35, 23, -75, 20, -64, -127, -80, 65, 32, 117, -13, 43, -113, 31, 47, 98, 3, -71, -95, -24, 118, 56, 23, -79, -79, 72, -27, 110, 119, -66, -77, 6, -30, -14, 62, -30, 87, -82, 95, 101, 124, -62, 72, 70, -97, 90, 19};
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
    msg.setTimeStamp(0.435398763726);
    msg.setSource(18403U);
    msg.setSourceEntity(240U);
    msg.setDestination(8945U);
    msg.setDestinationEntity(218U);
    msg.id = 221U;
    msg.width = 64223U;
    msg.height = 21756U;
    msg.widthstep = 16738U;
    msg.channels = 103U;
    msg.depth = 49U;
    msg.finaldata = 190U;
    const char tmp_msg_0[] = {76, -39, -101, 64, 41, -123, -100, 41, -98, -72, -102, -86, -69, -48, -95, 19, -102, -73, -54, 51, -19, 72, -114, -1, -54, -31, -10, 54, -60, 126, -33, -6, -24, 25, -50, 3, 35, 81, 51, 55, 2, -93, -18, -68, 84, 42, 47, -93, 111, -41, 0, 7, 104, -84, -31, 35, 82, 13, 119, 77, -14, -78, 79, 5, -14, 5, 15, 60, 91, 44, 93, -76, -116, -15, -40, 30, 54, 92, 100, 104, 27, -106, -66, 62, -107, -67, 66, -18, 73, -42, -104, -118, -75, -7, -127, 75, -94, -89, 80, 114, 16, 62};
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
    msg.setTimeStamp(0.931442537835);
    msg.setSource(57310U);
    msg.setSourceEntity(228U);
    msg.setDestination(55081U);
    msg.setDestinationEntity(2U);
    msg.id = 199U;
    msg.width = 22221U;
    msg.height = 29343U;
    msg.widthstep = 62324U;
    msg.channels = 74U;
    msg.depth = 35U;
    msg.finaldata = 67U;
    const char tmp_msg_0[] = {-47, -4, 124, 63, -87, 35, -122, 119, -116, 21, 14, 73, 93, -60, -14, -21, -82, 16, 47, -23, -10, 100, 102, -89, -103, 81, 32, 36, 84, -15, -83, -20, 9, 64, 70, 22, -30, -7, 102, -104, 2, -48, 4, -118, -61, 20, -51, -88, -6, -26, 107, 126, -47, -52, -13, -23, -123, -38, 5, 38, -114, -17, 81, 87, 124, 103, -124, 90, -121, 12, 118, -117, 84, -121, -26, -43, -34, 18, 111, 63, -99};
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
    msg.setTimeStamp(0.849496111856);
    msg.setSource(49561U);
    msg.setSourceEntity(189U);
    msg.setDestination(50195U);
    msg.setDestinationEntity(9U);
    msg.width = 19792U;
    msg.height = 41188U;
    msg.channels = 10U;
    msg.depth = 79U;
    const char tmp_msg_0[] = {-22, -12, -74, -87, 2, -78, -96, 13, 4, -29, -12, -41, -14, -44, 49, 100, -74, 91, -118, -40, -40, -71, 72, 52};
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
    msg.setTimeStamp(0.330225536122);
    msg.setSource(28499U);
    msg.setSourceEntity(4U);
    msg.setDestination(22010U);
    msg.setDestinationEntity(214U);
    msg.width = 30264U;
    msg.height = 10816U;
    msg.channels = 61U;
    msg.depth = 0U;
    const char tmp_msg_0[] = {12, -121, -126, -128, -13, 21, 16, 3, 35, -86, -23, -88, 73, 76, -72, 107, -94, -17, 91, 104, -20, 4, -14, -1, -29, 52, -43, -67, 12, -84, 45, 27, -25, -100, 104, -47, -49, -76};
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
    msg.setTimeStamp(0.769065046539);
    msg.setSource(3885U);
    msg.setSourceEntity(223U);
    msg.setDestination(31666U);
    msg.setDestinationEntity(75U);
    msg.width = 61073U;
    msg.height = 8339U;
    msg.channels = 171U;
    msg.depth = 64U;
    const char tmp_msg_0[] = {18, -16, 45, -124, -74, 85, -29, -22, -31, -30, -20, 87, 110, -76, -22, -18, -9, 126, 26, 53, 71, 103, 121, -81, -95, -74, -31, 69, -5, 19, -76, -63, -81, -28, 56, -63, -13, -63, 46, -13, -54, 57, 107, -4, 51, 90, -57, -23, 15, 22, 72, 74, -24, 8, -20, -26, 76, 16, -47, 49, -50, 48, -40, -93, 94, 40, 107, -94, 18, -95, -98, 41, 0, -95, 14, 58, -98, -37, 83, 122, -39, 103, 79, 29, -79, 37, 102, 27, 94, -29, -48, 37};
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
    msg.setTimeStamp(0.606300894098);
    msg.setSource(48U);
    msg.setSourceEntity(56U);
    msg.setDestination(64269U);
    msg.setDestinationEntity(110U);
    msg.frameid = 144U;
    const char tmp_msg_0[] = {-71, 112, 48, -84, -2, -69, 126, -36, 20, 51, 95, -70, 126, -48, 95, -47, -28, -80, -87, 47, 59, 92, -119, -14, -76, 64, 72, 11, 65, 45, 94, 36, -77, -76, 68, 8};
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
    msg.setTimeStamp(0.0995334641661);
    msg.setSource(21605U);
    msg.setSourceEntity(176U);
    msg.setDestination(60041U);
    msg.setDestinationEntity(177U);
    msg.frameid = 56U;
    const char tmp_msg_0[] = {-34, 90, -68, 64, 6, 17, -102, 71, 5, 109, 8, 9, 56, 32, 113, -24, 7, -32, 54, -9, -48, 104, 73, -21, 74, 65, 72, 99, -56, 116, 42, -71, -48, 25, 81, 42, -20, 69, -81, 81, -78, -106, 30, 5, -35, 39, -87, -17, 70, 18, 55, -74, 28, 65, 93, 45, 96, -68, -32, 97, -86, 69, -90, 70, -13, 60, 30, -19, -29, -21, -87, -61, -91, -61, 32, -128, 113, 108, -44, 66, 22, 82, 69, -112, 50, -38, -64, 125, -2, -55, 106, -44, -93, 27, 5, 84, 66, 53, -100, 12, -121, 23, 105, 5, 26, 82, -34, -88, 70, -87, 85, -115, -89, -107, -117, 11, -99, -88, 80, 1, -4, -90, 93, -95, -125, 79, 62, -85, -117, 12, 56, -82, 117, 32, 57, -78, -80, -88, 69, -79, 82, 61, 92, -59, 1, -78, 5, 73, 11, -39, 60, 123, 18, -95, 86, 38, -63, 48, -95, -29, -126, 97, -110, -64, 88, 117, -10, -31, -7, 90, 123, 52, -62, 53, 108, -91, 10, -83, 26, 53, -8, 39, 21, 29, -56, -28, -73, -52, 107, -98, 9, -7, -26, 53, -54, -114, 84};
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
    msg.setTimeStamp(0.00371895477081);
    msg.setSource(35506U);
    msg.setSourceEntity(142U);
    msg.setDestination(22285U);
    msg.setDestinationEntity(30U);
    msg.frameid = 27U;
    const char tmp_msg_0[] = {-117, 64, -44, -41, 97, 31, -115, -32, -10, 15, -66, -36, 112, -7, 122, -96, -21, 67, 52, 44, 68, -40, 42, 38, 114, 65, -34, 74, 51, -53, 126, 71, 58, -88, 19, -49, -21, -29, 85, 34, -105, -76, 44, -31, 10, -115, -20, -93, 36, -127, 64, -22, -37, 69, 39, 47, -67, -74, 91, -79, -113, -77, 122, 27, 115, 66, -70, 80, 59, 41, -101, 62, -106, 18, -17, -124, 54, 107, 3, -18, -42, 110, 112, 110, 115, -15, -53, 85, 48, 117, -59, 1, -115, 2, 47, -56, 77, -61, 26, -102, -125, 123, -84, 44, 98, 87, -43, 62, -39, -51, 77, -63, -50, 93, -71, -29, 36, 20, -119, -118, 123, -104, 56, -6, -97, -96, 26, 126, -39, -72, 110, -38, -117, -39, -116, 29, -48, -115, 4, -29, 112, 4, 61, -95, -105, 113, -76, 2, 48, -42, 36, 107, -105, 30, 53, -17, -95, -95, 44, -43, -6, 36, -49, -77, -4, -28, 92, 21, 27, -86, 13, 68, 66, 79};
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
    msg.setTimeStamp(0.824093773732);
    msg.setSource(32477U);
    msg.setSourceEntity(151U);
    msg.setDestination(42715U);
    msg.setDestinationEntity(44U);
    msg.fps = 28U;
    msg.quality = 176U;
    msg.reps = 113U;
    msg.tsize = 133U;

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
    msg.setTimeStamp(0.0505395246973);
    msg.setSource(38416U);
    msg.setSourceEntity(7U);
    msg.setDestination(2342U);
    msg.setDestinationEntity(185U);
    msg.fps = 183U;
    msg.quality = 48U;
    msg.reps = 212U;
    msg.tsize = 185U;

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
    msg.setTimeStamp(0.930285128527);
    msg.setSource(34984U);
    msg.setSourceEntity(28U);
    msg.setDestination(34263U);
    msg.setDestinationEntity(157U);
    msg.fps = 90U;
    msg.quality = 108U;
    msg.reps = 37U;
    msg.tsize = 76U;

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
    msg.setTimeStamp(0.0231526728704);
    msg.setSource(28084U);
    msg.setSourceEntity(220U);
    msg.setDestination(33445U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.263904057558;
    msg.lon = 0.0869963048989;
    msg.depth = 253U;
    msg.speed = 0.121127514227;
    msg.psi = 0.0422159523695;

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
    msg.setTimeStamp(0.820652550315);
    msg.setSource(49470U);
    msg.setSourceEntity(246U);
    msg.setDestination(22776U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.980574022115;
    msg.lon = 0.711217329685;
    msg.depth = 20U;
    msg.speed = 0.506621226402;
    msg.psi = 0.271077674775;

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
    msg.setTimeStamp(0.880416880281);
    msg.setSource(59328U);
    msg.setSourceEntity(182U);
    msg.setDestination(18018U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.834773901419;
    msg.lon = 0.48432480021;
    msg.depth = 199U;
    msg.speed = 0.808182372422;
    msg.psi = 0.166398413551;

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
    msg.setTimeStamp(0.831109724564);
    msg.setSource(21386U);
    msg.setSourceEntity(25U);
    msg.setDestination(62081U);
    msg.setDestinationEntity(213U);
    msg.label.assign("BSOLYNGQMIBBOPNZWFMYHTUKUBBPPGJBWEQEMAECJUHTTPALWLGCCQHMKKAYDDLGATZRXWDIUIJUZNDJHQYATJKGVURREAADHXHXGCNIDRKUXZJAIPRHZEPXYJLLURUOKYLQHCTIUXFBIWIPQPVVVVQLXQTIXOOGMWYWFOZMROSAFDISHLSCVFZQNEOZFMSDVNJVHWMXVNYKOGFTSWKTPTENBSNWDJFFECCEYNRKFS");
    msg.lat = 0.49956908948;
    msg.lon = 0.349196258101;
    msg.z = 0.52028141978;
    msg.z_units = 238U;
    msg.cog = 0.0571620883609;
    msg.sog = 0.556977883259;

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
    msg.setTimeStamp(0.729967331663);
    msg.setSource(36880U);
    msg.setSourceEntity(133U);
    msg.setDestination(24318U);
    msg.setDestinationEntity(233U);
    msg.label.assign("OJXLTPZQNWOCZNVXCQNPVBUDNGJYGBXOPHAGVYQVKSLRYIFKTZMMVHXCWYOJENUKJMIHKSXHIJSEPFORSQEQRPESDLYFUMKXGAFNMHNDGOZKEWAWBTRBQIOZVFQQIFYICRDTKLYLABEPRWZPFYZZEQSHEUUDWMRTBOSLCPV");
    msg.lat = 0.918494919684;
    msg.lon = 0.108662137669;
    msg.z = 0.570864615671;
    msg.z_units = 236U;
    msg.cog = 0.174943018991;
    msg.sog = 0.597018064218;

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
    msg.setTimeStamp(0.934600255102);
    msg.setSource(64434U);
    msg.setSourceEntity(198U);
    msg.setDestination(14935U);
    msg.setDestinationEntity(54U);
    msg.label.assign("BTXSDIUYNOYGJPGLXMKGJZSYLJGCEUANUGABMQT");
    msg.lat = 0.113757647513;
    msg.lon = 0.478369459718;
    msg.z = 0.425761876882;
    msg.z_units = 141U;
    msg.cog = 0.653397895094;
    msg.sog = 0.699088685659;

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
    msg.setTimeStamp(0.0834596319623);
    msg.setSource(51643U);
    msg.setSourceEntity(158U);
    msg.setDestination(17469U);
    msg.setDestinationEntity(244U);
    msg.name.assign("AFIDUEGWJVFRKMGDDUEVRKZNUOPOHSJQWGRMRVJQVKTJAQOBYOZQKSCTUPWWNIFPBYYTXLEWULBTAZNSZNRNMBYTLZHGPLBZSTIAIWCUHERKFQSPSGLCMBSJDIAYKEZJVRXYLJRFWGMTXSIYACUOQZXOPKVIUYXVEXIANTAWWKHKCCLNXPQAHPTDFAGEBULTZKICCDFQYHVRJCHPBS");
    msg.value.assign("JQHQZGNTWEIAGYCFHABOKOWVEHZHZHZREKHOUSTWDZEMGHMLJQFNLXRVXXHRCPIJLMIWIVRGFALYUXSODBWGTXHXZUPANSUBYCOIYLVRWTSJOUDRGFJPNJDPVFWNQXBDNQQEKIHWNYYJMFKVQJMKTCPMUFTYRQ");

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
    msg.setTimeStamp(0.523976349151);
    msg.setSource(10413U);
    msg.setSourceEntity(25U);
    msg.setDestination(53484U);
    msg.setDestinationEntity(166U);
    msg.name.assign("UKFHWDLYXWMXDNICMHQRANVHGYPBUEXTNKJGJKEFIBCQZPCAGKUAKAWMBTZHQFKKRFITVEKOLQOFENVUJHNUYAVEPHHLVYSXSBNHOLSZPMOGBKDGIADAUJXMJVYDUCFBQTMZWQBTSDGL");
    msg.value.assign("RCDOHASJMBSSFBYQTAWTZEIGKMZZQTILGGMARVTUHFXMAPAPPKCDUTIG");

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
    msg.setTimeStamp(0.525604422724);
    msg.setSource(26797U);
    msg.setSourceEntity(101U);
    msg.setDestination(21898U);
    msg.setDestinationEntity(80U);
    msg.name.assign("JFMPEKWKWGVJYEWQWQOCHDORZJMRQJKHPWAZIIRYDHXXCUMVBUDRHWOIXQMVAMUIFSMTNRGAXKGMPMKTSPAITGAQSNTNXYALZCFTKEYUWIBSVCCFLRQPBUFWUUUKLKEBJGLHVNGAFLJSTEVVDEZTBTQCBLPPPZQLTYCAOGYPJNDIBZYZNRLHHCXSFYYDVBSFDKIXNEPSWEXSVFLGUWQOZNZGYCTCJKVFOABRHJOBNSUDXMHERNHIRDZLMOIJE");
    msg.value.assign("WBZHIMPAQLLJDZZAZOTFKQEXMJBDVRNMYZUWOLHOWWCUDRCFAJICR");

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
    msg.setTimeStamp(0.814759961428);
    msg.setSource(31590U);
    msg.setSourceEntity(47U);
    msg.setDestination(25556U);
    msg.setDestinationEntity(142U);
    msg.name.assign("WAZCAXXLEAHFJCZFIJKNQOLQJJKJSCDJKNTIZABQQHPNHWO");

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
    msg.setTimeStamp(0.608757150878);
    msg.setSource(22410U);
    msg.setSourceEntity(2U);
    msg.setDestination(4392U);
    msg.setDestinationEntity(226U);
    msg.name.assign("EAVKFWYCCQCMVAZIDRUQVAXJWCTQRQLSVFZOBYJWYHIQTCVKCISDLXRZJNIFKKXDVIEGHNGGPRAG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LASGONWSLEHSKJRGNTUHSMLTKSFWDIYFXMPEMGPYRPQMDTIIBUVJCQKRGDWGKPCWEHHYUPYXBZOFQJUWLXCZUDVUODEDOFEUAJARKKFFYNLOCZMWRBZQJTDMWAXRUXOHEBIYIPHPINLJEKGNLPCQTSSHIUEPLNOWVZTVHMUKQMIJVTXZRBTFADYXBSCSGOAFJ");
    tmp_msg_0.value.assign("XUZBOMTMXZGRHFULIOFNTEFCEPKQNLTDCFDAJVUPTOHJXFNOGZQBVHDBVGKWHLYPBFDWPJIPZJACYDIDEWGAJEEKNMLMQKJMTGUCHJVRSLPTMZAWGUSBEIGIEHTGMGUXSWYOVWSDPUCNSVNYTBQWQZSZPBQGWLKFIRNMAEKWCXQOLTVNHUSQOKRACIKRHEAMLXVXRR");
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
    msg.setTimeStamp(0.730190505787);
    msg.setSource(36845U);
    msg.setSourceEntity(110U);
    msg.setDestination(618U);
    msg.setDestinationEntity(99U);
    msg.name.assign("RMTBEKLYCXXNXTEIEWZSXOFJGQHZSNJSRAANNUOPAKMHNDFCXKUQEWLWBEGZDGILMLHXCQOYXXDCNLZOLRTNGAKILTRQSOWUBXFRDEQJYLTZZQFTYZCAVWPDAONBCTDRBRKUQPSPMKFSDHYONQMHOGSAGHIVMAIRLTFIUPJDCVEQCJASBEDVKOBBJMHPZKMWBJUIEOQPZWHYL");

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
    msg.setTimeStamp(0.0463599458477);
    msg.setSource(36059U);
    msg.setSourceEntity(67U);
    msg.setDestination(39325U);
    msg.setDestinationEntity(49U);
    msg.name.assign("QGYXNNFASBDQUBJSWRCPNXXVUSNZXLCBCMUGIFKALK");
    msg.visibility.assign("PQPBQUKFVGWYACDJJDEWIRDPZDTOYNOHPLEQPGRBSCAUFZCKAQGATPC");
    msg.scope.assign("GSZYOFQUFBZZJQRFIANBTPKELQMFBDYJTWMOUBIHXIKMLHCUIXPATPOSRZZYVXSMAJWFDRRSKGIDVTEAZWKKNIMSRCSLRY");

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
    msg.setTimeStamp(0.0654859427393);
    msg.setSource(10721U);
    msg.setSourceEntity(248U);
    msg.setDestination(59255U);
    msg.setDestinationEntity(134U);
    msg.name.assign("FZGZGLZAEJBBQGKPYVABRETBDVJOYINPHFAETRDUOYJTGHPQWLFHCMSRCRFMNCTSHCZJSSNHWTSERUT");
    msg.visibility.assign("JIOFJGGGKHXUAHZCIRGREQNBSPMYUYPMOUYMWCQEAHCTXMBEVAJOJOCVQFDXYLWIWPHZIBBLOKUIMNHXXSBVZQNYACIJYLYXUZJSVKNUZETANTUDSVYZVPBJISZCGNYIDSGRTFOJZHKWTCKSFONVQNISLVKGRBRNBPKMHZACIKWBTHLRLMQDTAERUQJUEPOPTJKOWSXWPGELEFDCAXMRDWGTQPERFGLFVDTAZNLEFMQWLUXVKMDHXH");
    msg.scope.assign("CFWZYJOBEYOTPVXKVEMUFCUDNAYZKMCMDGSNYENWMXLPWNJERAPTSYPWPPLHQAFSTFSBSKFRAILCKUHNFDQGRPVYDHGSMTZRRZHEBFWKMUWOUUKWWVJJIAIBBOEODUHGBJDVNXUMDIALRORXQBFIEKTKEAZXUMJC");

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
    msg.setTimeStamp(0.178283772452);
    msg.setSource(11480U);
    msg.setSourceEntity(71U);
    msg.setDestination(46978U);
    msg.setDestinationEntity(21U);
    msg.name.assign("RCPCEQJDTKLQOPSCROISRYWLCETAAVWFQANVSRHVKPITNJENBGMXGDKYOMZUODOMODXVQXIRQEGPFRQAXMZHHZBJXXRGIWXIGNIGBDKAEZURFYHXFFLNWMUAJKQQNVDPUULAHCNEUSNKNTUSKXPOWWLIWSAFOYDJPQYYPAKETUFEFZLJGJWXVZ");
    msg.visibility.assign("EJHEZNQDLSMPFXWVNOGSRSFBIZDYBLDGIJOGRSHQRSKBGOPAFCOXDRAMPRVFYOINWXUFBHTCVTMKQXJDULOATWMFTUSCIXCMYHAYZIPDTOVEJUXKXEVEWPQJLNPAIDWWMKBTXXEYUQVUGKTNDIVOIBOVNLHPKCZ");
    msg.scope.assign("GSIJWBGLLQCJUYEKIGAXGPSTUBGCDAUINRYYKJFAVILIQFFZXHCQREIOZYOQXFDKMPRFISYWTEBNSLJTYWWOUZHLXVBZHRAUXNEYONQDWALJKHNVWSUYYJBAOMXVVXTPMYEDSDZKIWCNUFVDGQKLIJPLPDSPAOFJBNZMWZBBPCVMPSMVFHTHTRQNMRSAJMQDSWVRRFTEVFDRWOHOHIA");

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
    msg.setTimeStamp(0.24684663342);
    msg.setSource(16179U);
    msg.setSourceEntity(64U);
    msg.setDestination(65240U);
    msg.setDestinationEntity(184U);
    msg.name.assign("ZZWTOHTTKIJSUHAPQYSNSZNCELNZKVOZUCRHRWXCWGXWTQKQXHJWZGDPHYYVAANLDFYFVBASUNDMXFEVLABFIEUHAMMBEPAABUKSIMCORDPKJMEDIHULMUFFJZQCC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZBYKBSNJACSRDRALTMYQPUXQUGZWOUMDAAEZWXWSWYMTOQADBSRDDAJTPVHUUEOYHOMSYSDBXFIHWZTLVJDJCPKIVZCFTXGQTISRNWZMHFUEUXYFXOZONRHVZMCSUGQGPRXTLARJXANOKROBQFPUGGFEEBLFCVVNWWCJKI");
    tmp_msg_0.value.assign("PBCGKJXKCJIZAQQHZYFDWMCCDTDPOMSSDCYBPYLIOEANUCNJRVDEDBPMXYLZYRMGEXRBVWFSTEUBRCALMIYNGGQGHHXTPVUOSNSFKPHUGBQNFOWWTX");
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
    msg.setTimeStamp(0.227676901449);
    msg.setSource(2314U);
    msg.setSourceEntity(72U);
    msg.setDestination(56221U);
    msg.setDestinationEntity(178U);
    msg.name.assign("HHQCOYQTIVJGIKOTNKZA");

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
    msg.setTimeStamp(0.193090040939);
    msg.setSource(19998U);
    msg.setSourceEntity(139U);
    msg.setDestination(50646U);
    msg.setDestinationEntity(62U);
    msg.name.assign("TGHRPKFHZOWJIMCPUOLTWCYHQANZBKQDWGAXSDBHOWUURYDGAZZBCXZHAXWMPRZMKPLIIGADMIGHDKXTKXNIKGRPBQVRRZYYUYSEHRXNUZGGPYZVJQUYWJBYMEOKJTFEVFUUJCDNMEQFWBELTTEOVDZMMNPXLIOQCKBLUNGHIENJAJTSMVXCEVDVIDTEUXVMTOWLNWCCTKNL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WOQKQUDSVZYYYTQTSYHGNOBCWTIDCNOCDITBZHJXKYHCPANQMZRMFLLSFXEKPZVJCZSQJTUYIDFDTPALXCIGHEZERPONGIFCOPGTAVXKVGBVUEVTRAFFLXMSVWDXAUAIQRGOUKZXOWUWAEINGQKFCLKYNFJVRV");
    tmp_msg_0.value.assign("EETMJYMIKQTRYLONBUDHNJVANHWW");
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
    msg.setTimeStamp(0.590629395234);
    msg.setSource(62438U);
    msg.setSourceEntity(180U);
    msg.setDestination(36794U);
    msg.setDestinationEntity(233U);
    msg.name.assign("IXTOVSNPXFPCFHVKNRWDUNBGTPCGHFDYMIYRQJCTSQNIHJBONDBVDOQYCYUQCSXFSGUBAQRWSWJJOJKREPXMXUXHTKIUDUQXRWBPPOJOSEPIAKCHOBAKRWNGNWECISATOTOUBWLEZZLJTKEDFJIVKYKUGVPJELEFMVNU");

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
    msg.setTimeStamp(0.620101142982);
    msg.setSource(11877U);
    msg.setSourceEntity(212U);
    msg.setDestination(61894U);
    msg.setDestinationEntity(250U);
    msg.name.assign("BAOLUCZAVCFLWTKQNKPYZYOLVDMOLANNOJRRAHFCPESZDFKOFDVUVRPSEQSXKSZRHNHSMFIWYKVAYTZEQUIIPLIQTCBOXVWTXDBQHT");

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
    msg.setTimeStamp(0.75969063552);
    msg.setSource(46785U);
    msg.setSourceEntity(38U);
    msg.setDestination(33609U);
    msg.setDestinationEntity(9U);
    msg.name.assign("BHTMVZJKEGIWSZRNJJSXOLTMZTBKZYFQCJYETCYNMBHFUBUVFTVGPPAMXEGNZYPQRBEIBLUIQHVBJFOAKISSWNSYPIQSTTXPCQMLKHHMQISIDKBFURDWXDJROVSLECVUXWFUVKPOECLLECNAHMDVCGNILURWDXDGQQYPJHFRARGHRDOKWLVYPSQCWLAAGAQOJXZROGYYMMITTEDEHTLAH");

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
    msg.setTimeStamp(0.734093367279);
    msg.setSource(48123U);
    msg.setSourceEntity(142U);
    msg.setDestination(1746U);
    msg.setDestinationEntity(126U);
    msg.timeout = 4266266873U;

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
    msg.setTimeStamp(0.650176790297);
    msg.setSource(14937U);
    msg.setSourceEntity(19U);
    msg.setDestination(16195U);
    msg.setDestinationEntity(26U);
    msg.timeout = 3517987694U;

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
    msg.setTimeStamp(0.178408009139);
    msg.setSource(11997U);
    msg.setSourceEntity(23U);
    msg.setDestination(60596U);
    msg.setDestinationEntity(76U);
    msg.timeout = 1193771028U;

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
    msg.setTimeStamp(0.232230748843);
    msg.setSource(8150U);
    msg.setSourceEntity(64U);
    msg.setDestination(25476U);
    msg.setDestinationEntity(26U);
    msg.sessid = 3774238352U;

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
    msg.setTimeStamp(0.818913982492);
    msg.setSource(25807U);
    msg.setSourceEntity(106U);
    msg.setDestination(14379U);
    msg.setDestinationEntity(214U);
    msg.sessid = 3125926025U;

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
    msg.setTimeStamp(0.180610036867);
    msg.setSource(41726U);
    msg.setSourceEntity(36U);
    msg.setDestination(55194U);
    msg.setDestinationEntity(250U);
    msg.sessid = 3366894399U;

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
    msg.setTimeStamp(0.504901469868);
    msg.setSource(51049U);
    msg.setSourceEntity(90U);
    msg.setDestination(60993U);
    msg.setDestinationEntity(198U);
    msg.sessid = 1318462487U;
    msg.messages.assign("ODBYEFZUFCNBKCKULEGPRDYNPBONMWJHTXGUKNTIGONTFNIHQTAPIYYVMSVAZBLUVMFTAWWUQXPDSWPDQJEXRZSCACHDMERAPIPHVBTBRTKCFSLJMIOZJNBCJVLIMEYISGLFZWGRX");

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
    msg.setTimeStamp(0.00965268025674);
    msg.setSource(56825U);
    msg.setSourceEntity(160U);
    msg.setDestination(42767U);
    msg.setDestinationEntity(162U);
    msg.sessid = 1468568923U;
    msg.messages.assign("EWSHEXWBPQDXSUNLYMJBYRAKKPVHBFHZJNZWHRGXELZTHNVFYAQIL");

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
    msg.setTimeStamp(0.0787225884507);
    msg.setSource(49086U);
    msg.setSourceEntity(53U);
    msg.setDestination(19989U);
    msg.setDestinationEntity(49U);
    msg.sessid = 480089159U;
    msg.messages.assign("QHQXGHDIPBACGGHQARIDPPZJPSUMWTRTFOFBDWTJAIVDDWNTJWNAVHCMJYUOGBNOBIKVNSZLDSFZAAVMGPBZNMEIJEQYAVKXTLRGWUOSEFLDHIRZXLRKVZPOKODSUQZQTECLEXAMFUQUYUMSRSVYXTHHR");

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
    msg.setTimeStamp(0.298942999156);
    msg.setSource(51281U);
    msg.setSourceEntity(33U);
    msg.setDestination(27483U);
    msg.setDestinationEntity(217U);
    msg.sessid = 2048621811U;

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
    msg.setTimeStamp(0.396704656886);
    msg.setSource(58234U);
    msg.setSourceEntity(149U);
    msg.setDestination(65360U);
    msg.setDestinationEntity(170U);
    msg.sessid = 4175828854U;

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
    msg.setTimeStamp(0.260820891088);
    msg.setSource(31060U);
    msg.setSourceEntity(101U);
    msg.setDestination(41762U);
    msg.setDestinationEntity(225U);
    msg.sessid = 243346909U;

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
    msg.setTimeStamp(0.149600204602);
    msg.setSource(47826U);
    msg.setSourceEntity(38U);
    msg.setDestination(31849U);
    msg.setDestinationEntity(195U);
    msg.sessid = 1051440064U;
    msg.status = 7U;

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
    msg.setTimeStamp(0.678633282719);
    msg.setSource(37683U);
    msg.setSourceEntity(173U);
    msg.setDestination(9661U);
    msg.setDestinationEntity(149U);
    msg.sessid = 319222710U;
    msg.status = 83U;

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
    msg.setTimeStamp(0.953054987656);
    msg.setSource(9757U);
    msg.setSourceEntity(230U);
    msg.setDestination(40908U);
    msg.setDestinationEntity(224U);
    msg.sessid = 2425725524U;
    msg.status = 94U;

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
    msg.setTimeStamp(0.644663564862);
    msg.setSource(40694U);
    msg.setSourceEntity(190U);
    msg.setDestination(9830U);
    msg.setDestinationEntity(173U);
    msg.name.assign("UQZDYNBCDJQWCSKUSGOJIXSLERTJKNULCNVFBEKFQNMBYZVFWHUETAUZEKMOUWZZSWNGHKBJGOOOTBGPTCCQDRXRSCTDZJOHGHSGYAXHRAEYCJJTUUNFLYZADWDJDYPSXVBLWMZHXWOQAIPXIEMPFAXXMRKMTXRWVRFGDRCPHPGQXWQTOLISPVEFHDHNMFYIUSBLLVVKQILJIMUZPRYKVWIOGTZIBVPORATECDAYENGYQFSPJIHANAVLKFQBBC");

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
    msg.setTimeStamp(0.797606110639);
    msg.setSource(43032U);
    msg.setSourceEntity(241U);
    msg.setDestination(16790U);
    msg.setDestinationEntity(15U);
    msg.name.assign("GAKMKNUKTVBPSGQWQHOQJWILKZQAILYUGLXOFIRNXYE");

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
    msg.setTimeStamp(0.937444437417);
    msg.setSource(49038U);
    msg.setSourceEntity(61U);
    msg.setDestination(48130U);
    msg.setDestinationEntity(88U);
    msg.name.assign("EMQZRNOBWMGGHHPGYXORNJWTIVLMIULDLCLACUFXUGPKLFXMRSQELGDEJNUCBMKADGFFBOQCT");

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
    msg.setTimeStamp(0.0721077310374);
    msg.setSource(4642U);
    msg.setSourceEntity(249U);
    msg.setDestination(48791U);
    msg.setDestinationEntity(31U);
    msg.name.assign("OZXANJSOHJEYUTMVFNHQULDTIYIOZVCHRLJAVNFIBMKDQSASGOECKPGJNNNVYSCYGCPJCTTGOOBHTZOEZKFGMVIEXLHUQIVIHEGRXXTDFKLPLUQBEIRQCRKCQCDESWVYAXEWBTXIQNVJUAVENRXDWNDOYFGMYWQZCZSUWWHOZMRYPAWRBBZPLZHDAPHBMK");

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
    msg.setTimeStamp(0.735875165631);
    msg.setSource(36734U);
    msg.setSourceEntity(170U);
    msg.setDestination(11787U);
    msg.setDestinationEntity(1U);
    msg.name.assign("DXNZLTQUMIAYWNTQWTCTKTPVRJDWUMQ");

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
    msg.setTimeStamp(0.0774489727569);
    msg.setSource(11678U);
    msg.setSourceEntity(176U);
    msg.setDestination(40346U);
    msg.setDestinationEntity(245U);
    msg.name.assign("DPMXOTUDZTFNEJOBGCVVKSVCCFHURMHZRSHEUXHIXAXNMBJWRROFTQWCHNSPQUVAYXYEKYUSNQJWLUECTPPGXNGXFIIPTCMBDXNLRZNDKCMUYAVWBBYLVQLTZZHNSJKPILYWSOSPWFVETVDGPAEGCYJCEQLKPGXUBFOUKKEEJZFSNDJGIXWMROBTPAIQBFAUBDZOQTOAIZGOLYHZOWHIAVTJILAKV");

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
