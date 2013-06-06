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
    msg.setTimeStamp(0.537850707372);
    msg.setSource(7297U);
    msg.setSourceEntity(114U);
    msg.setDestination(29359U);
    msg.setDestinationEntity(26U);
    msg.state = 163U;
    msg.flags = 65U;
    msg.description.assign("OAHEPGBTIXNFVZTQTTLPYKYKTDSCNXAKMEJEDPWGLFZOLWSIMKXKBDDJXOMTTDFZQPOUSEGTQETZBGOBNNAWPLYDVEPFUDQNXPMJFUKLCAZCCRRLSEMHFUBECWGLOILNUGVNRIUDJPQDVRYYEHZBKEHTHJPJFIWGLVBHAXUMSACJXPKZ");

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
    msg.setTimeStamp(0.111253900153);
    msg.setSource(43884U);
    msg.setSourceEntity(173U);
    msg.setDestination(13411U);
    msg.setDestinationEntity(75U);
    msg.state = 138U;
    msg.flags = 155U;
    msg.description.assign("XEIQJEEJOAARRKCWWVFYSDFHCWVHRXIIMF");

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
    msg.setTimeStamp(0.36137630296);
    msg.setSource(20075U);
    msg.setSourceEntity(95U);
    msg.setDestination(24187U);
    msg.setDestinationEntity(78U);
    msg.state = 90U;
    msg.flags = 49U;
    msg.description.assign("QMHYFAXCTDLPSREJDZVRYQUPDAWFVPXDSMLFHNIUBYSMFGEZLPOOSVTOVCWTJGUCLEWMXJQYNIGIAZZBEPEFJAMAZTNGBQPUAPLVCEJWKTNFORIKTFCVZWONDSXEKMIOUICANDLRQXYBQJODZELNCGTHQULVWVZGMRB");

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
    msg.setTimeStamp(0.541269693216);
    msg.setSource(64188U);
    msg.setSourceEntity(126U);
    msg.setDestination(7940U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.103946656802);
    msg.setSource(52706U);
    msg.setSourceEntity(124U);
    msg.setDestination(62748U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.529561314874);
    msg.setSource(22786U);
    msg.setSourceEntity(53U);
    msg.setDestination(24044U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.964234627097);
    msg.setSource(46474U);
    msg.setSourceEntity(234U);
    msg.setDestination(33299U);
    msg.setDestinationEntity(179U);
    msg.id = 226U;
    msg.label.assign("QPPHWFJVOHMHXQZJQHSYWLOGZMTWPLERMVZGWQGQXSBPBFPODCCACOKBCJRJIBPENXLBJILYUUWMDMTEVAXCFRLLQQNXSZDRBQBZIAFMGSENUDLMPPECNEGFAZDFSRGVKTAIAKDGXWJVYUUTKDRISHKFHIVHEI");
    msg.component.assign("XPHBDCCCLQXMPFOOSQATEVCPVSCXHCRMFSLYARUJQZWDESJIBURYTARWHDOBGBMHGGNQDVKLRZXYIFLZKOJUSWRNCSFHOFLYEGINEIZLZSMNWOKZTTMUWEPNRHTSHGCFKYKQZUBVAHOEWIXNOMBGXDSPXBATMKVWLQNAEIYEIAJCNCJLRYGDZJTZVDHEJMTWSQBWOBIITUBOPKMYUEVPKIGLAVFLRAYJX");
    msg.act_time = 32490U;
    msg.deact_time = 39814U;

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
    msg.setTimeStamp(0.0391592630603);
    msg.setSource(21992U);
    msg.setSourceEntity(82U);
    msg.setDestination(57731U);
    msg.setDestinationEntity(68U);
    msg.id = 32U;
    msg.label.assign("KZJZPKFFVKFUVWBGYKFVRZJQYVCXNBF");
    msg.component.assign("EGNNRIYEIDFDUMBKMGPUFODRQNLBMFKERQDYTPXRYUVHZRIBZSGHVXOEMHBCDWPXUZHTSTJKZDPYOPGANZTJJJACJXMUCWEWEQJERZOCSFQHFQPHMCKFSQMSCIIAUTYWKVTYANQKB");
    msg.act_time = 60825U;
    msg.deact_time = 38339U;

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
    msg.setTimeStamp(0.473924502826);
    msg.setSource(5503U);
    msg.setSourceEntity(165U);
    msg.setDestination(59261U);
    msg.setDestinationEntity(7U);
    msg.id = 148U;
    msg.label.assign("MWJOAXKJATTKZCIBHGDHCXUSBPQWUFIVHWMUXZQAGQKXSUMUCQCRRAVEEFSZJATKFVRFTQXMGJNBOTFGDBYGEOBEKOCLYUWYBNESNCCYTIUKREVGAELQLJHFMTSAPACRVMXAWZCONBFFHPMOKSWJHGWQRPNYKIYDLUTHDJDVPZVLSJQLGP");
    msg.component.assign("DOGGOZOLNJEYRCDMOJOCFWQZPSJUQZSZVTSLLHKMVUEKBZCUAPEQGDXOQHDYIBCVIXRWITBEDDPGSAZQLYDUYSBNNVJVPWITEWSFRQHGDZBUXMIUTPMXCHXRHTZDWYYMSNPLYLCFAIKSTOFJVAXFIHUQCIJFRKOKAZOVOMXYTMRSEKENBWN");
    msg.act_time = 48281U;
    msg.deact_time = 23105U;

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
    msg.setTimeStamp(0.23999656353);
    msg.setSource(41263U);
    msg.setSourceEntity(88U);
    msg.setDestination(38946U);
    msg.setDestinationEntity(13U);
    msg.id = 77U;

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
    msg.setTimeStamp(0.823863260649);
    msg.setSource(56775U);
    msg.setSourceEntity(10U);
    msg.setDestination(16044U);
    msg.setDestinationEntity(186U);
    msg.id = 54U;

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
    msg.setTimeStamp(0.662666537692);
    msg.setSource(31969U);
    msg.setSourceEntity(145U);
    msg.setDestination(11101U);
    msg.setDestinationEntity(32U);
    msg.id = 152U;

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
    msg.setTimeStamp(0.364736442925);
    msg.setSource(23385U);
    msg.setSourceEntity(9U);
    msg.setDestination(14373U);
    msg.setDestinationEntity(78U);
    msg.op = 73U;
    msg.list.assign("YKAHMVTQCHMLKRUKULWLZPPTYNMKZTBTRNYPVZYEIDGOQLDYDGOPXHWSDUASIVXIQBYRGASMJBJIVHYNAWFWDPTTVZAVMPCRKRFSGEBUXMPLOIIPGZRQMZCS");

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
    msg.setTimeStamp(0.147824381422);
    msg.setSource(65017U);
    msg.setSourceEntity(219U);
    msg.setDestination(16237U);
    msg.setDestinationEntity(15U);
    msg.op = 168U;
    msg.list.assign("VADMLYYSOZMYBHNYXNFAFWWNXGCPQVTSOFDTCZDLYSNMECHKXTQOIHUYSMWBGMBIHEOBWJNDFSMZJAUUEPGUGHIIFWTQEKSQVKSPLIYVZIQJHVOZNFJTSFWNRHTZMYKYXDCPGGDPIGGOXLOZRENPLJO");

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
    msg.setTimeStamp(0.487869552494);
    msg.setSource(14337U);
    msg.setSourceEntity(166U);
    msg.setDestination(29033U);
    msg.setDestinationEntity(60U);
    msg.op = 197U;
    msg.list.assign("QIEDGSAXYHJHQJBTIMUWSZVLZLETSUCBXRPHSNGTADRIPQJJKSVLTPORMRCUDKPXDZZYFVAOKTHGWYBUMJKBKCVIMZQWXSGFOGUQMITLEFHYBHKZPRNYUNGOOWLJTSQNORYPJEVMRPNVPDCGWHUUNSDYZVHOBQEOBBKMWDAYIFEEUABIVSHXLBFYFCHEMXPWMXOJFKWJVFLZEVCUWKLFIDTCXOLTQNZCLGRIAGSM");

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
    msg.setTimeStamp(0.741255969839);
    msg.setSource(36809U);
    msg.setSourceEntity(74U);
    msg.setDestination(20290U);
    msg.setDestinationEntity(117U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.422281458737);
    msg.setSource(56846U);
    msg.setSourceEntity(126U);
    msg.setDestination(51387U);
    msg.setDestinationEntity(90U);
    msg.op = 46U;

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
    msg.setTimeStamp(0.375224870624);
    msg.setSource(49816U);
    msg.setSourceEntity(190U);
    msg.setDestination(34969U);
    msg.setDestinationEntity(227U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.348025958052);
    msg.setSource(6252U);
    msg.setSourceEntity(182U);
    msg.setDestination(38233U);
    msg.setDestinationEntity(22U);
    msg.value = 218U;

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
    msg.setTimeStamp(0.940146509663);
    msg.setSource(45275U);
    msg.setSourceEntity(95U);
    msg.setDestination(1366U);
    msg.setDestinationEntity(221U);
    msg.value = 22U;

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
    msg.setTimeStamp(0.282764435697);
    msg.setSource(40081U);
    msg.setSourceEntity(120U);
    msg.setDestination(16605U);
    msg.setDestinationEntity(231U);
    msg.value = 169U;

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
    msg.setTimeStamp(0.757593039185);
    msg.setSource(1800U);
    msg.setSourceEntity(97U);
    msg.setDestination(62815U);
    msg.setDestinationEntity(73U);
    msg.consumer.assign("YHVVSWYXQEPAIVQMSIDOOEDJVOUDROFQEOXKUMLAPRKNPFYFHWHJPTCS");
    msg.message_id = 22448U;

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
    msg.setTimeStamp(0.89678949792);
    msg.setSource(34314U);
    msg.setSourceEntity(239U);
    msg.setDestination(55921U);
    msg.setDestinationEntity(131U);
    msg.consumer.assign("VAJSHBGDXJSIGBPVNCQMRJPYMBFPKNETXQHZTHOBDWFRBMNPSRLFBTGZOIQXNDTRQWGRKMJKZDDIGEZLAM");
    msg.message_id = 2942U;

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
    msg.setTimeStamp(0.902667875328);
    msg.setSource(27621U);
    msg.setSourceEntity(76U);
    msg.setDestination(56580U);
    msg.setDestinationEntity(58U);
    msg.consumer.assign("KWKRCAJAYLPMQNAVNXKUEZDRFGPHREANRTGQXSNPQFZCOBJJBPVDJNQBESGPBLSOQGWWOMKCCXHDDMUSIKBMTTVXWMYOBEBSTFFGIXDTDWLXSYQISIULZFAIYJAMRLYDWWZLZGXOZFHOPKZMYHLKTLTYHKEZCLTQIGJAWDVUTGXCDMHSUQVNHQANRWHJEVNUVGODJAPNZCEVFBOHYEBXKUCPVWBYSGLRPTQUJIOIURRZMESXNMFAC");
    msg.message_id = 5419U;

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
    msg.setTimeStamp(0.798122835005);
    msg.setSource(55009U);
    msg.setSourceEntity(237U);
    msg.setDestination(54283U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.165195636916);
    msg.setSource(41229U);
    msg.setSourceEntity(205U);
    msg.setDestination(2275U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.834347842322);
    msg.setSource(62202U);
    msg.setSourceEntity(43U);
    msg.setDestination(18944U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.725675368827);
    msg.setSource(55296U);
    msg.setSourceEntity(167U);
    msg.setDestination(24077U);
    msg.setDestinationEntity(238U);
    msg.section.assign("VJCUBPUJTPVSEUPJBQQQCHHVPKLPMFNYPEVNEXTSDFILBHFXPTIBBHMSTSCTWIOECTQCHLNIGWCYERZ");
    msg.param.assign("JXYEKNFTKQFDSOZCPTOIYLBAXRTUETJPRLXUSMYGKBHPVRKMGNMVKHBUKXBFGZAOBJLSYXVYIKNQNVTNDZZIFQWBEEEEIHPLOOBSFHJLAUVZCGJSZEPKWMWGRUBVHTOWOTUWAOAJAXNYLWWPAKK");
    msg.value.assign("HJTQHVWBMFXIHVHAAZEQLICOAWPCZQKLJESOMSVNFLMWYIKDLTTLEUGGPNPRBZZRCFEMDRMTRVYIUQUFORIOWJYEYITNXWLXVDAHKCGYZYXYJNDKECGCCKMOSVLLPTIKGTFPXWDJBXPKJJYVUMUOBTSUKHSZCHGBMFFGGJSDOLRZFVEQDAYJGIXAKAUCBHDOLNFOPYBNBMUJQMNVR");

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
    msg.setTimeStamp(0.895723690542);
    msg.setSource(40126U);
    msg.setSourceEntity(26U);
    msg.setDestination(20055U);
    msg.setDestinationEntity(196U);
    msg.section.assign("VFIWDMOYMQQNUXQLEKISVBRZXHFNYOMVFDHCMTMYKCUEFJSDYREJHGFGDUFMIJQPXCHUTZNJFJTNVGFOCUPOJLOJSIONHALZBGRPSQVBWHSASLLPIAMPXTJTOPOWPWOZPGBQGIURAXUNSBQTENBWXZKBBPNKEPCRGHLRWUSARKXDJKTYEKUIVGEWCZZADXLWCWYGBMTXSU");
    msg.param.assign("FYRPBCSJAFOJAKIKIWICWUTZSTYRPKALDRPAYZVGVDHFJMMJCJVHZATHMNDZKLDNYXKFBCUDOOBBZSSWBGPIDXZMUNGTPPGVRCWQFINQYRYYEJXVDVRNPGUNHDGQDMRIYLHVLMPIEOQVLKOUHLHEWGHAWZSFEWAXKOEKMLUTEZUUITMSTNEZPATNTJSLSCRLCTLNGJBFECFXCEOGUSMXXIXQBEJWOBFYQQXVQZOWMCPGFRA");
    msg.value.assign("MEEMNFGNQEDCLCNQUUDKXZTYLKIMDZYEVMTMYYLZBMVKRFGHUIHWAZPCKXPAITZYJBHJPRRXYSTNSOPFZDRGLCXCTJKDGLBRHERKUOYWUJWASMFPWLEMUQLOXLWFLMHNRWQVIOPJUXDYQKCRVQAIHWFEZEVOZSDPJENXKGSOQNIBABCTZRGXBUXVFAPFIZTHWVCFXHMFQSDBSBJOVDNAB");

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
    msg.setTimeStamp(0.313260869263);
    msg.setSource(7447U);
    msg.setSourceEntity(178U);
    msg.setDestination(62144U);
    msg.setDestinationEntity(214U);
    msg.section.assign("TWLTNIUMHTAVHNYZHHIGLEUFLPOZCJQTQLPAVVJEXAECSOIFBUCNURFOCFIULHEGQTXYLWLGYUDOICUOVKZJGACBDYDAVMUWRHQMRZHKNAIRKHDGQELNIYBJDEREVEMMSDOYSBMXFZSOVQPAZEEXVFFGCKSDKHUWWXUONMRGCINYTINTSWKMAXCBGTLOMOZRKN");
    msg.param.assign("YURXQHMKKPEHHSFTSGEEPJCBKCNEKUIAVWAIDUBMPJVYJJGZHBLOAKOVRXDERDIRNSTCLZVDGLPAJLGVHPZWPYSNJAOFENLKKOWKCYDYTFOJQHCTGZFXNZSJCMBIBTWUGJZMFSDDJUYWHRTSHPADRCNIXCLUGRYZMMQSVIIVXVMWVGBFQMVTYXXCMIAUNPWSALUGLOQQRDICBLXTNYPFOYABFOXHWBETDQZZIOWAKQTEGRNW");
    msg.value.assign("XVHTMSZJGQWAWVCYNCGWGMKAOBWJRHNPNHNMYKLPCBMBYJOTSKJDXUGAFEXZB");

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
    msg.setTimeStamp(0.613019257566);
    msg.setSource(32508U);
    msg.setSourceEntity(71U);
    msg.setDestination(39877U);
    msg.setDestinationEntity(155U);
    msg.op = 52U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("UWXALPCCFRXDMEFGMBKPDGYXSINVZUPYRQKMARCJVMVWHEZAQSQISMDSGXYEAVKBKXFOENFAQQZTQTDIYMTIKGLOYYLJJUTZBZNSPULJPDBKJPK");
    tmp_msg_0.param.assign("NVBGSKIKVHPGTWRELCERBTDYCSRQLSWHPFBMQOSKAKLGYVCIZOCANXNPMAAELUUCJEXHYSLPRTZLPBPUUWHVZQWVUDFIGIPHGXUOZRFFVMJDFSHZWIFDZEVJSTXIICGJTANYQIJQIDDOPUSOKBWCQOUHBQFCIQKQOXHMVKZMOOCAJNBNMPJPJBAEYTFNUYYGUNLCJWYMZREDGEDYDGSTZXXTFXNWZXTKKROGDHWFNBXYBH");
    tmp_msg_0.value.assign("DAHTAKFWBJLLWUQEIOZQCFGUVOTDBEULRBD");
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
    msg.setTimeStamp(0.862828972797);
    msg.setSource(48117U);
    msg.setSourceEntity(2U);
    msg.setDestination(26783U);
    msg.setDestinationEntity(92U);
    msg.op = 79U;

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
    msg.setTimeStamp(0.0104601501883);
    msg.setSource(59654U);
    msg.setSourceEntity(191U);
    msg.setDestination(40130U);
    msg.setDestinationEntity(154U);
    msg.op = 84U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("AWCVNDTYEKHVDONRPYQXLVWOLMWZVTBPHUKJPFORHGGDNKLEMSWAVHUKKUCYDHCFQGPGKUQRZLRCKQUUZTXWJXVPXJSDJQIJLEJTHWISAXFOMWOGUBINODCFGNRMMSBQWOLYSCZNMOBBVTIXMFCARTYDFUEIQEXRKWLNJJCBAVOBGMZFYDJAQRCXRFZUXUNLNCIGZGNGPBTPTILIOHAYS");
    tmp_msg_0.param.assign("NTMCJRRBFLNZTPWQIRRYHWEMAVFDUWJHWBNAPWVYQHYSWQKBIRCBCXPHUKWMTFLIQEOMVYWOCGPSZUYGMDBELJOXXLKQRBZTZEJTXMUUVGOHAQWNYUMNDIVILFKAHMIFUADSZFHCSYCSZLAXPTUGDGZVLSVALV");
    tmp_msg_0.value.assign("FWLIXJSNTHQJXISHEWXTBDSIJMG");
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
    msg.setTimeStamp(0.859252282256);
    msg.setSource(65279U);
    msg.setSourceEntity(15U);
    msg.setDestination(50270U);
    msg.setDestinationEntity(58U);
    msg.op = 150U;

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
    msg.setTimeStamp(0.644592353288);
    msg.setSource(2790U);
    msg.setSourceEntity(212U);
    msg.setDestination(43963U);
    msg.setDestinationEntity(249U);
    msg.op = 151U;

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
    msg.setTimeStamp(0.764945106287);
    msg.setSource(55007U);
    msg.setSourceEntity(29U);
    msg.setDestination(8807U);
    msg.setDestinationEntity(151U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.656032318844);
    msg.setSource(6054U);
    msg.setSourceEntity(208U);
    msg.setDestination(41335U);
    msg.setDestinationEntity(177U);
    msg.total_steps = 176U;
    msg.step_number = 16U;
    msg.step.assign("GSONLILVGZXWDLHAVIDIBALFRGVDVZMFGRTMXQJKRTSVXZUSVJJBMYCQTDOTFQXABKNKSNVHMSVQEMUQJWCAMCIYMKCAGLDCPWTXHFHPAOKEPJHQFRESHVCKGCSDYZGHUTBQFRZSANBJYHNSLUYOPOXAZWXPPYDEYIOJWNWXKMUIOIHNURBOITF");
    msg.flags = 45U;

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
    msg.setTimeStamp(0.813298984787);
    msg.setSource(58077U);
    msg.setSourceEntity(129U);
    msg.setDestination(20092U);
    msg.setDestinationEntity(162U);
    msg.total_steps = 205U;
    msg.step_number = 178U;
    msg.step.assign("CYIVWYUXWZIEDASTIUESCRJZTBFNTPQHGCAVXLKHEQAPHGFRBAGXUVYBFIRZXPRZGUQSWQBAFNJWVGWBRXEYMBFQUYKSNINMFMBKZOJLDADOVFXZKOXCXUHTOJDGMMXPYCSPPMJYNLQWGNHOS");
    msg.flags = 125U;

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
    msg.setTimeStamp(0.775252214635);
    msg.setSource(8911U);
    msg.setSourceEntity(13U);
    msg.setDestination(35287U);
    msg.setDestinationEntity(116U);
    msg.total_steps = 112U;
    msg.step_number = 113U;
    msg.step.assign("AZKTAONGRLXOUBOQVIFNWCYRENQAEXEDWYKXHKESHKAQBUHQMAIAFLNSNRT");
    msg.flags = 190U;

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
    msg.setTimeStamp(0.582846660084);
    msg.setSource(57698U);
    msg.setSourceEntity(203U);
    msg.setDestination(59102U);
    msg.setDestinationEntity(2U);
    msg.state = 232U;
    msg.error.assign("GYHMOLKJNLMXTGPGUQETITOJTBDGWCLFVQEJSKZJCJPIYIBERREESKXVJCVXDDRCRQA");

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
    msg.setTimeStamp(0.460772895633);
    msg.setSource(58505U);
    msg.setSourceEntity(222U);
    msg.setDestination(550U);
    msg.setDestinationEntity(6U);
    msg.state = 120U;
    msg.error.assign("JOJYHLASBEKUUJRIGFQSADWMNOXFBQTTNVYTYINGLACRFBYUINPHMKAERTXVWZTFLHGCWGIMQNMKSPKOGBLNYDOOHHQXWJNAXRPCIKEBCFSPLWUOCVDHYWULBEVFIAXFYCMHGGDRKHEVFDZVZXYWIERBOETEMHZCZTYDQPIKJEBDQJMBDGLAFQMWGCGZECTJUXQKOLSRRKZMKNFLZPHUZUPSPVDLSNJSTTQMZBAXNJSA");

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
    msg.setTimeStamp(0.909537572974);
    msg.setSource(4321U);
    msg.setSourceEntity(170U);
    msg.setDestination(13724U);
    msg.setDestinationEntity(8U);
    msg.state = 16U;
    msg.error.assign("XJMNIQGRFJNUWGQFSVCDBMNEIPMWYAZNHCLVAZYOUTNIRPBTZDDJFXSLXKCIYRFIIKVSHLVRBLUVROULKEQYMFPEJLBOXQFEUXFLYGKYGRAEKHPPZBCWCOOSFZFMQNMYKCGEQDBEYVLHGSIPBCGCHHJUVAPJDTWISBNYKPAXV");

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
    msg.setTimeStamp(0.0444635756964);
    msg.setSource(54543U);
    msg.setSourceEntity(43U);
    msg.setDestination(57355U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.879713564441;
    msg.lon = 0.088159926664;
    msg.height = 0.335133300385;
    msg.x = 0.328515869189;
    msg.y = 0.0485474465716;
    msg.z = 0.0709549730228;
    msg.phi = 0.838139713753;
    msg.theta = 0.598373762242;
    msg.psi = 0.709498737794;
    msg.u = 0.410651627727;
    msg.v = 0.848324799211;
    msg.w = 0.542143755768;
    msg.p = 0.0605037199495;
    msg.q = 0.170271175541;
    msg.r = 0.315656416116;
    msg.svx = 0.0625309454089;
    msg.svy = 0.726434793642;
    msg.svz = 0.365171358252;

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
    msg.setTimeStamp(0.0469199565027);
    msg.setSource(10196U);
    msg.setSourceEntity(43U);
    msg.setDestination(65248U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.174194000343;
    msg.lon = 0.640746850626;
    msg.height = 0.894924714155;
    msg.x = 0.264047853441;
    msg.y = 0.620159489281;
    msg.z = 0.0335511329506;
    msg.phi = 0.965668083154;
    msg.theta = 0.402521978074;
    msg.psi = 0.580131989262;
    msg.u = 0.542881500444;
    msg.v = 0.964490677934;
    msg.w = 0.696619016526;
    msg.p = 0.578704300422;
    msg.q = 0.0834573307249;
    msg.r = 0.260569251564;
    msg.svx = 0.625310915602;
    msg.svy = 0.271023352178;
    msg.svz = 0.349431529375;

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
    msg.setTimeStamp(0.572685621199);
    msg.setSource(38884U);
    msg.setSourceEntity(52U);
    msg.setDestination(52199U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.149141868519;
    msg.lon = 0.532807009195;
    msg.height = 0.352273504868;
    msg.x = 0.305773090706;
    msg.y = 0.772141305507;
    msg.z = 0.434724849065;
    msg.phi = 0.941690052004;
    msg.theta = 0.333153014935;
    msg.psi = 0.576263776972;
    msg.u = 0.152665980946;
    msg.v = 0.962286650189;
    msg.w = 0.449237188689;
    msg.p = 0.0396268157374;
    msg.q = 0.910416697686;
    msg.r = 0.70436006573;
    msg.svx = 0.582463503382;
    msg.svy = 0.808799096756;
    msg.svz = 0.0984741520015;

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
    msg.setTimeStamp(0.711364535801);
    msg.setSource(47878U);
    msg.setSourceEntity(12U);
    msg.setDestination(32558U);
    msg.setDestinationEntity(133U);
    msg.op = 177U;
    msg.entities.assign("ZLHMLXPCDVEFGWRULTZDZHIOVIJDFLNPQGNPWQDBEXUMMNCCEWDRRCUAVAZAQXBVXFMZ");

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
    msg.setTimeStamp(0.543849490153);
    msg.setSource(53771U);
    msg.setSourceEntity(67U);
    msg.setDestination(10338U);
    msg.setDestinationEntity(69U);
    msg.op = 136U;
    msg.entities.assign("ZLLXNBKGNMSRIJNMTSBFDQDCYMETKWNPUAHBTGQHQKHITEFUSESQXLGKIAEGIJYJPRPJOOEPWVWZVNZSEZRJCQBPRAOVFLEGNZGPSYYVBFGAYBPTHURMDAFFKTVGOVDBRUPEZJDLJVAFZBMDXTKGVPNDILCZYUSYULCBSHMRV");

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
    msg.setTimeStamp(0.430203768259);
    msg.setSource(20797U);
    msg.setSourceEntity(22U);
    msg.setDestination(26695U);
    msg.setDestinationEntity(147U);
    msg.op = 246U;
    msg.entities.assign("EPVCKBKSWBMXVCIOPXIZGOAMVIRTJWLJILGUAWDAFLJYRMCGKPVIOTQCOFMKFCDOWGKWQUXLUEZMXRTZOHTTXFMYNAVVCWMHD");

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
    msg.setTimeStamp(0.603993901951);
    msg.setSource(18855U);
    msg.setSourceEntity(57U);
    msg.setDestination(15894U);
    msg.setDestinationEntity(153U);
    msg.type = 70U;
    msg.speed = 38997U;
    const char tmp_msg_0[] = {-117, -124, -102, -128, -69, -9, 29, -12, 33, -72, -37, 78, -104, 43, -17, 107, 48, 83, 25, -64, 71, 87, -99, 54, -27, 12, 108, -90, -102, 113, 112, 76, 125, -107, -39, -50, -38, 48, -74, 64, -51, -20, 6, -1, 119, 53, -6, 58, 94, 91, 16, 105, -64, -63, -38, 8, -21, 113, 34, -105, -95, -89, -117, -39, -99, -118, -59, -97, 23};
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
    msg.setTimeStamp(0.991714583426);
    msg.setSource(17182U);
    msg.setSourceEntity(15U);
    msg.setDestination(27953U);
    msg.setDestinationEntity(245U);
    msg.type = 187U;
    msg.speed = 16478U;
    const char tmp_msg_0[] = {1, -39, 98, 104, 33, 84, 49, 83, 116, 74, 74, 44, -99, 6, 112, 57, 104, 20, 126, 4, -26, 82, -30, 42, 32, 125, -100, 9, -53};
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
    msg.setTimeStamp(0.367528473679);
    msg.setSource(39992U);
    msg.setSourceEntity(192U);
    msg.setDestination(64614U);
    msg.setDestinationEntity(13U);
    msg.type = 236U;
    msg.speed = 17146U;
    const char tmp_msg_0[] = {-93, 33, 56, 112, -60, -100, -23, 64, 80, 58, 23, -77, 25, 84, -94, 33, -43, -33, 0, -95, -22, 104, -8, -94, -36, 7, -83, -105, -80, -12, 62, -41, -86, 63, 53, -90, 69, -105, 113, 52, 6, -52, -34, -110, 13, 39, 110, -26, 12, -86, 79, 52, -46, 43, 101, 91, 28, -111, 78, -121, 98, 117, 99, -71, -84, -59, 33, 122, 30, -96, -59, -71, -118, -48, 114, 46, -90, -100, 73, -119, -22, -71, -45, 0, -39, -25, -17, 51, 91, 31, -69, 33, 102, 75, -95, 126, 9, 21, -17, -22, -17, 32, 37, -32, -19, -71, -96, 18, -99, 86, 111, -34, -54, 24, 20, 39, -30, 78, 26, 7, -69, -75, -34, 17, 7, -98, 100, -37, 72, 67, -10, 77, -60, -112, -5, 58, 72, 113, -54, -116, 35, 30, 69, -67, -23, 84, -110, -80, 65, 53, -102, -42, 83, 100, 43, 51, 102, -7, 15, -63, -51, -123, -6, 53, -57, 108, -5, -7, -49, 39, 66, 70, 53, -104, -110, -66, 107, 84, 14, -88, -100, 85, 52, -127, -39, 109, 123, -70, -30, 39, 83, 72, -99, 49, -21, -91, -106, -125, 64, 56, -75, 91, -38, -72, -59, 19, 110, -90, 71, -24, 17, 10, 72, -100, -29, 1, -4, 75, 28, -81, -48, -5, 2, 13, -69, 52};
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
    msg.setTimeStamp(0.86929690168);
    msg.setSource(15683U);
    msg.setSourceEntity(242U);
    msg.setDestination(6977U);
    msg.setDestinationEntity(155U);
    msg.available = 553847044U;
    msg.value = 125U;

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
    msg.setTimeStamp(0.914408562519);
    msg.setSource(6677U);
    msg.setSourceEntity(18U);
    msg.setDestination(55952U);
    msg.setDestinationEntity(142U);
    msg.available = 1380134748U;
    msg.value = 159U;

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
    msg.setTimeStamp(0.499966346358);
    msg.setSource(41673U);
    msg.setSourceEntity(208U);
    msg.setDestination(23943U);
    msg.setDestinationEntity(171U);
    msg.available = 2884697436U;
    msg.value = 59U;

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
    msg.setTimeStamp(0.719262121961);
    msg.setSource(10012U);
    msg.setSourceEntity(142U);
    msg.setDestination(10136U);
    msg.setDestinationEntity(184U);
    msg.op = 205U;
    msg.snapshot.assign("AZZKAQOMPXIDONFDQFIYLWGWHWRKOHESNGTHIGJJJVBBYENKCLPLVAXHTTEYCXGZQQIFABNNQYTSDPWFMUURUKSLKOPASZFTVELCHWBLUOWOYBRVIJADCFWYVEVYXEDKTJFHGJHIGXQRTLXBSRTURIHQNZAOVYCXJDPKVGREEZEZMGBPDFCZDMWZNDOCPRVDMFFGAINOCYWMVKTSJ");
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.459035068756);
    msg.setSource(59444U);
    msg.setSourceEntity(73U);
    msg.setDestination(34504U);
    msg.setDestinationEntity(193U);
    msg.op = 50U;
    msg.snapshot.assign("CMNHIMTOIDJDMVCHEINSFUHDZPUZSYSVDRLAPPTQJTFLZLODTPWYIFHQFFXNVBGNRJHKWETYRFKMUWYBCCRNELLOKEWOZAAWICMQVLHEZTGCXGQSWAUZWSPMPSHLMCKJDZPKRHXZGVNRQXVYKGYSMGRRFZVBUATBGIUNKQSBQFEBPYGHHTA");
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 218U;
    tmp_msg_0.entities.assign("ETTQYFAMSGPEXMOVYZDLBRHXQJGHKONECSYWWOHNUKCBOOBZUJVDEUCMAQAUYBUMUMBZCSHIMHIKJWTTSOSCXRDJPPFPXVKQXII");
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
    msg.setTimeStamp(0.313761696789);
    msg.setSource(15440U);
    msg.setSourceEntity(201U);
    msg.setDestination(38528U);
    msg.setDestinationEntity(83U);
    msg.op = 179U;
    msg.snapshot.assign("ZMSSMMFLNSKFCJQDBELXEPZMSHGTSZEJHOIBQYCSEDXVOKVCVQXACYHBCKVQGCXBYJVYXUTOPHQTLABBJHFUMJYSDWROABAIFLC");
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.49770952319;
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
    msg.setTimeStamp(0.538055879294);
    msg.setSource(57542U);
    msg.setSourceEntity(205U);
    msg.setDestination(63667U);
    msg.setDestinationEntity(140U);
    msg.op = 143U;
    msg.name.assign("DOUVEIVLKVIUSRZICZRQNBADXWGWWLJOOAAYYTMIKOLQFTDBYJIWTRHXUHJAJXKJGEHPCFFDTHFLTXM");

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
    msg.setTimeStamp(0.655176776943);
    msg.setSource(39930U);
    msg.setSourceEntity(198U);
    msg.setDestination(12911U);
    msg.setDestinationEntity(15U);
    msg.op = 123U;
    msg.name.assign("MUWTTDBYVLVGBVHMWCLCRULHBVMTUENHSQHNKMPAEFAAOILIMERPDKYZPZHGQCRKJCNUOWYLEQDPDOBDLKSVRCTVKDFEPCGOZSPKUIROEIJXLSXJFJGBAXCZQSYTUKKSIKQGONWAAPIWJLGVLKYBCYEQRQOPTVADZSNFYGAIBXUWZNRZGRVPIJWQXDDYOH");

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
    msg.setTimeStamp(0.573621950713);
    msg.setSource(35216U);
    msg.setSourceEntity(137U);
    msg.setDestination(51291U);
    msg.setDestinationEntity(67U);
    msg.op = 79U;
    msg.name.assign("IUVSBYBCPGAPXUGBPSHOCLOZBQWDIDTISFSDLBOXNVHNLMYJIYJWTLHYWGDEUXCPXXFWRDSXANKJWAVRMSDRNEFZTAINMHSPRVJWPRPHBMQZZOVKCGLIHGJBJRZPUBSLARTDWNNIYFQAYLOCZCKFDOQCGMHWBVHXVKYTGNF");

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
    msg.setTimeStamp(0.56624427245);
    msg.setSource(46193U);
    msg.setSourceEntity(135U);
    msg.setDestination(57119U);
    msg.setDestinationEntity(88U);
    msg.type = 197U;
    msg.htime = 0.188161632273;
    msg.context.assign("HAWJJJAYBSYCK");
    msg.text.assign("SQIMBUQKOJLQGVYOEEKDPDMLFAMQLWUFCKUJAEEYQTCTWLVRKUESCVKPKYYFLSHTBNXXSAHUBFFZRDJDJVKDPFMSYYVPBVVGRNWNRJLKWESBJLIOPAYUITWNMGZZFCCUNPEPAQHTZXRLFGEWAWAEGXWND");

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
    msg.setTimeStamp(0.406458152854);
    msg.setSource(14654U);
    msg.setSourceEntity(27U);
    msg.setDestination(29039U);
    msg.setDestinationEntity(227U);
    msg.type = 145U;
    msg.htime = 0.545040825108;
    msg.context.assign("PMRHTDBXGFRPVUGUAOIDSQIILPVTZWZZPWAJFQOGDRRABGUMSZJTOVKNTFUCAXCKSLCKQMSMQHEOINFUSACCVMYWTAZRYODXEHCLFQVRLBYWNMXFQOPILINLYUBTOEGJLRRVTQNNWXDGJUHTZSECDETSVEJQCCYHKGNQKWVUADOBAIPYXZHYMFMKZE");
    msg.text.assign("FAJIDQVEJMEVOFLCVMVMIIUORDRQGDCINTCGBJZKJBHNUTWRCBYJKBMNDVTYLHIKYQZTSBOFWDSQCUXFNGJAUZMKQMBAPQCILTSZIQXNERHZAWGCUXWXWACPHZOJNXXCYUSQKRFKTOODXWGVJYSFEFEBAZAPFNGQPLBZNOXDRWLTJKRFAEYRRPHKRGSWQPPVCAGXSOEKIUPI");

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
    msg.setTimeStamp(0.760022600239);
    msg.setSource(28596U);
    msg.setSourceEntity(154U);
    msg.setDestination(44007U);
    msg.setDestinationEntity(124U);
    msg.type = 138U;
    msg.htime = 0.0111270663013;
    msg.context.assign("ZRCZDIWCFBKQJWOGEYDOGABVULSBATYMWOVJVCMZSRQXAAEXCOKMLHDPTLHWHHMPWKAFLECYMPLEIUHAGDXSTAJDAHSWRRRKIUVUKEQZPDFPNFMVDJSQXUSRLXWGOFSTCSIWCOFSZTEEYGDBAHSKUZJYGJMTXEBGJ");
    msg.text.assign("SSUFAZEZIN");

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
    msg.setTimeStamp(0.205346691908);
    msg.setSource(45425U);
    msg.setSourceEntity(242U);
    msg.setDestination(6125U);
    msg.setDestinationEntity(214U);
    msg.command = 48U;
    msg.htime = 0.126605755959;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 64U;
    tmp_msg_0.htime = 0.365513613977;
    tmp_msg_0.context.assign("DWAJTUYEFZZJMNCERHGIAVDEDNSBDGFOQKPADWLZKI");
    tmp_msg_0.text.assign("MKJHENKTACPXOOCTJEUXPCBFFUEJHCLAKBGIPMZXXSHFRYWEQOSBBNQWDEGOQUTTPZQDDZIJSXWOSYQSYSYGZXMMWNKBSOLBVANVHOQRJTYKVLIRRFCILGOKIOUMZGDANITAKULFAKEDYAPNECZYUDWCHJRPUXRXCZYWVQZHGBVWFRD");
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
    msg.setTimeStamp(0.0498956253375);
    msg.setSource(34903U);
    msg.setSourceEntity(185U);
    msg.setDestination(13539U);
    msg.setDestinationEntity(154U);
    msg.command = 151U;
    msg.htime = 0.562156123865;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 6U;
    tmp_msg_0.htime = 0.353410074567;
    tmp_msg_0.context.assign("SMEVCTKUCYZMDMFGRFJDKYOLZHRFOZUJQQEVXMPXUF");
    tmp_msg_0.text.assign("RXHUQXHHZUCNOVSLFGAIEBKVBVQPDULUZKYEVTXZYXUVOGSYZWWGGLBUVZHRSVYUWXABRTETJONOQRRWMGENNANKIQBDGDWDHZDZISWIDCSGRIKYJCHCEJBSVPUPOHMPREVFKYFQKTNSHEFPFFAJRDZMSJIDATASGIXRQTLMMCTDPEMOGNY");
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
    msg.setTimeStamp(0.758299817162);
    msg.setSource(46437U);
    msg.setSourceEntity(33U);
    msg.setDestination(60560U);
    msg.setDestinationEntity(122U);
    msg.command = 81U;
    msg.htime = 0.958648539723;

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
    msg.setTimeStamp(0.692475696584);
    msg.setSource(23009U);
    msg.setSourceEntity(182U);
    msg.setDestination(18449U);
    msg.setDestinationEntity(13U);
    msg.op = 131U;
    msg.file.assign("HXPUYEKNAVXQOUQHSXIKZINZLMXRKKMVNJFTGWEDAFZJBCWDNTPUOTCVOOBASXDRGVWUJNDKOGBZILSCDCRLADAMCBZPAVYJYSPZGTQHOJPMQCYYQFZANCPRGKOZCPENHXYIUVXANIPJLZTWWFDESRPOZJFLITBTUQIYVHJGSRSBOLUFMTLNRWXKEYETWHVKUMALBUYHFIQEFBRVDJKXLSQNYSWQBGQMPCHTUGDJIDGEEVIRBXWFHMCHMOWG");

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
    msg.setTimeStamp(0.612912106302);
    msg.setSource(11265U);
    msg.setSourceEntity(44U);
    msg.setDestination(4245U);
    msg.setDestinationEntity(142U);
    msg.op = 186U;
    msg.file.assign("EJRDOEWVHTJJPSCCFRQOEBZGHVEXALBKHDBGQHQZLLHVWZGXLNWMTKUQHTSOWY");

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
    msg.setTimeStamp(0.316427534346);
    msg.setSource(7803U);
    msg.setSourceEntity(170U);
    msg.setDestination(55073U);
    msg.setDestinationEntity(101U);
    msg.op = 35U;
    msg.file.assign("TBKBZFAIVLJUBGGYQUCGUSAWSXVEIGBFDFRXEHXCPXDZTOKUCFRWRJDXRCSTJDBVLHMKONFYHACFOPMWKMIOPMEAUOJAUKZHSZOLQMIDMVPEOINALKFTKRHRWQOWJYRTKSFCEXVUELVDBEFPSKBZJWLQQPYYGBSWAMHLDPWZQUOVNNDSPZTISMGNPHAMDACXEBGLIJRGEXYUBYITNVHQLRQG");

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
    msg.setTimeStamp(0.274628697673);
    msg.setSource(32849U);
    msg.setSourceEntity(95U);
    msg.setDestination(36351U);
    msg.setDestinationEntity(166U);
    msg.op = 232U;
    msg.clock = 0.0677381657566;
    msg.tz = 103;

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
    msg.setTimeStamp(0.533669064254);
    msg.setSource(6291U);
    msg.setSourceEntity(176U);
    msg.setDestination(46948U);
    msg.setDestinationEntity(156U);
    msg.op = 210U;
    msg.clock = 0.0456268973752;
    msg.tz = -65;

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
    msg.setTimeStamp(0.0481455182547);
    msg.setSource(43156U);
    msg.setSourceEntity(56U);
    msg.setDestination(34966U);
    msg.setDestinationEntity(115U);
    msg.op = 187U;
    msg.clock = 0.160362490409;
    msg.tz = 97;

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
    msg.setTimeStamp(0.62049782349);
    msg.setSource(63653U);
    msg.setSourceEntity(105U);
    msg.setDestination(5799U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.126819629527);
    msg.setSource(31172U);
    msg.setSourceEntity(249U);
    msg.setDestination(1301U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.296878548995);
    msg.setSource(27301U);
    msg.setSourceEntity(146U);
    msg.setDestination(60937U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.233124220751);
    msg.setSource(18162U);
    msg.setSourceEntity(239U);
    msg.setDestination(38189U);
    msg.setDestinationEntity(99U);
    msg.sys_name.assign("LJFEWYZRBIQ");
    msg.sys_type = 221U;
    msg.owner = 47127U;
    msg.lat = 0.750225440428;
    msg.lon = 0.937884236052;
    msg.height = 0.707341701905;
    msg.services.assign("LANVPMJOGICLUHYPMOTNHLEEXUQZOX");

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
    msg.setTimeStamp(0.585314099593);
    msg.setSource(25217U);
    msg.setSourceEntity(14U);
    msg.setDestination(19923U);
    msg.setDestinationEntity(72U);
    msg.sys_name.assign("SXVLVHKLAHLRNQBOPAFJTALAHCIUFEXVNDSAGWORIMSPHTZTCBKMOVDBFYSGQMUYVDLLVUWHCLSOLIVAXZGMVKNENGZFTI");
    msg.sys_type = 34U;
    msg.owner = 3067U;
    msg.lat = 0.123847883799;
    msg.lon = 0.373533393664;
    msg.height = 0.938768749783;
    msg.services.assign("UKOKBQRHQESXIZUVNVUNJYLDPYUHCZDHOYSPYCPAXEHKDVWTDQDNTJECQLDLXLVBVBIHZJISLMOUXCRNOVMEFBPMJCICHSSF");

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
    msg.setTimeStamp(0.979286401842);
    msg.setSource(4304U);
    msg.setSourceEntity(214U);
    msg.setDestination(18404U);
    msg.setDestinationEntity(165U);
    msg.sys_name.assign("IWGRNREFENOWVWVHLIDFZMQXRXZJXMJPEECXNHNXEEARPJWKMLRZBJGPCGOSFBTVJPKYPCJMFTLFPXRQNOHGZVODBYCLSXUQNOSIAXRMIQWMQJAZQTCNOIQDGULCDGWTYYHXPNNKRFCSJFBMZOVEUHIJVUYWABVTTPIKGOLOHYSLLYAKZSWNMIZWPSSPIQEMUDEUHYRAVBHTSGAGLHKKATB");
    msg.sys_type = 222U;
    msg.owner = 18454U;
    msg.lat = 0.19507293689;
    msg.lon = 0.938741135679;
    msg.height = 0.759117582344;
    msg.services.assign("WZGNTAALZIMNLAMNZWVJR");

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
    msg.setTimeStamp(0.638251877634);
    msg.setSource(64690U);
    msg.setSourceEntity(74U);
    msg.setDestination(63811U);
    msg.setDestinationEntity(151U);
    msg.service.assign("GEOLGQTFOUTHRJIXMNRZXSMUNYOBYIMHPCVIWXKMDEGZCCUSQVLPRQWRXPUQEUVXORVAFLREZMANOWSFTJZSZALPSDLTWFBIPJYBCLSGQBULMRNPNYCKJUWYDGQBTTIXNKWYZFAPABZUFLNIBFAGHHGTOHCDDKEKLHUKJJHGQXTDDYJYKQKCQMEZMFXASDKPVB");
    msg.service_type = 53U;

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
    msg.setTimeStamp(0.116489243241);
    msg.setSource(20482U);
    msg.setSourceEntity(115U);
    msg.setDestination(56991U);
    msg.setDestinationEntity(101U);
    msg.service.assign("YZJNIUAOBQEYVNVDLCABBMVUCMHMDJIODSZSLGMSKFBZLXNREDFMZPNEQPXIKGNLKHRJIFBITMWHDIYCBCJUL");
    msg.service_type = 52U;

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
    msg.setTimeStamp(0.785619248779);
    msg.setSource(17956U);
    msg.setSourceEntity(44U);
    msg.setDestination(11834U);
    msg.setDestinationEntity(45U);
    msg.service.assign("ZKQSVRDYOWGMPIDIN");
    msg.service_type = 11U;

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
    msg.setTimeStamp(0.651491871299);
    msg.setSource(8926U);
    msg.setSourceEntity(180U);
    msg.setDestination(8078U);
    msg.setDestinationEntity(99U);
    msg.value = 0.500904101288;

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
    msg.setTimeStamp(0.0410150578242);
    msg.setSource(34936U);
    msg.setSourceEntity(156U);
    msg.setDestination(21563U);
    msg.setDestinationEntity(1U);
    msg.value = 0.23559259342;

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
    msg.setTimeStamp(0.0146977046755);
    msg.setSource(43888U);
    msg.setSourceEntity(169U);
    msg.setDestination(13198U);
    msg.setDestinationEntity(204U);
    msg.value = 0.405027553913;

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
    msg.setTimeStamp(0.459167955169);
    msg.setSource(29037U);
    msg.setSourceEntity(201U);
    msg.setDestination(58031U);
    msg.setDestinationEntity(35U);
    msg.value = 0.399980096776;

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
    msg.setTimeStamp(0.926981249293);
    msg.setSource(38439U);
    msg.setSourceEntity(205U);
    msg.setDestination(5449U);
    msg.setDestinationEntity(233U);
    msg.value = 0.289548918584;

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
    msg.setTimeStamp(0.923970519341);
    msg.setSource(33280U);
    msg.setSourceEntity(128U);
    msg.setDestination(36462U);
    msg.setDestinationEntity(17U);
    msg.value = 0.0766034175923;

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
    msg.setTimeStamp(0.441681131876);
    msg.setSource(30593U);
    msg.setSourceEntity(83U);
    msg.setDestination(31636U);
    msg.setDestinationEntity(254U);
    msg.value = 0.727676409847;

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
    msg.setTimeStamp(0.799220543163);
    msg.setSource(21817U);
    msg.setSourceEntity(171U);
    msg.setDestination(34951U);
    msg.setDestinationEntity(80U);
    msg.value = 0.85819569045;

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
    msg.setTimeStamp(0.209083965739);
    msg.setSource(17714U);
    msg.setSourceEntity(245U);
    msg.setDestination(65477U);
    msg.setDestinationEntity(34U);
    msg.value = 0.692247852966;

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
    msg.setTimeStamp(0.26915375252);
    msg.setSource(21570U);
    msg.setSourceEntity(57U);
    msg.setDestination(24120U);
    msg.setDestinationEntity(252U);
    msg.number.assign("NCLJCEFYHWDAGOVAJROSLFVCBPOYLKMVCQMVOPBGIYWSCYMFFJUOZIXFTBIZXXRN");
    msg.timeout = 21627U;
    msg.contents.assign("KRYMHCBZWZXPZBZOCCKFMGXMFTZPUCWOJVEPWPUZBXVSTDHWVRTSV");

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
    msg.setTimeStamp(0.558804121396);
    msg.setSource(24107U);
    msg.setSourceEntity(60U);
    msg.setDestination(33969U);
    msg.setDestinationEntity(239U);
    msg.number.assign("SXRTSWDHYDGUKNJYKOVXVEVHQKWFROSTNMFTEBBLICQWXQDBGAVZEQBCIPWMEPKALGWBIZAQRPYYUSQUUEOFTHNABNDBSHPQACWWYHJDXCTQMFJMUGZB");
    msg.timeout = 22885U;
    msg.contents.assign("CKPHUGNRHVIASYCEGJKPCVUQXQJIZQAXCRBAYPZSRSYTZJKACMUXOTFHHUJRQTZAMCQZPUGGKNSVGYWTWW");

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
    msg.setTimeStamp(0.0196214002175);
    msg.setSource(49038U);
    msg.setSourceEntity(45U);
    msg.setDestination(52936U);
    msg.setDestinationEntity(72U);
    msg.number.assign("BDIUXXARDUYAKFSKFLEBWACGXLEFRWBHPZJAZPKVZFXWJTTHCYLEGTUSBWZIWQEWCRVIWMUAUWMZGVROOXUVNNMFKYRGJNKTE");
    msg.timeout = 27615U;
    msg.contents.assign("HKGDKEWUVEUWBIRCGWSDVYLEQSLMXPDGQJXTZFQRESITLEX");

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
    msg.setTimeStamp(0.641740001858);
    msg.setSource(43372U);
    msg.setSourceEntity(159U);
    msg.setDestination(32164U);
    msg.setDestinationEntity(246U);
    msg.seq = 372017187U;
    msg.destination.assign("DHUODVOMZEJJEHDXIAWTSJOXSZEZLACQOBRRYOTUD");
    msg.timeout = 654U;
    const char tmp_msg_0[] = {122, -24, -23, -8, -31, -87, -60, 96, 49, -59, -102, -111, -45, 106, -31, 125, -97, 48, -37, 114, 70, 32, -12, -45, -66, -45, -17, 37, -21, -20, -77, 79, 49, 76, 29, 96, -22, 117, 74, -73, -82, -112, 94, -126, -101, 122, 123, -57, 90, -107, 40, 114, -17, 11, -10, 22, -29, 46, -112, 24, -78, -18, -65, -79, 66, 112, 88, -84, -123, -35, -90, -100, -25, -100, -71, -90, -81, -119, -3, -97, -37, 47, 29, 78};
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
    msg.setTimeStamp(0.0497307769671);
    msg.setSource(42812U);
    msg.setSourceEntity(246U);
    msg.setDestination(55935U);
    msg.setDestinationEntity(107U);
    msg.seq = 1618774138U;
    msg.destination.assign("YOZFNVGYAZWXMDKDNLYYAXFZBSWNISOOLEJQCLRSJNHKDHWHKBEHTFZEYYQXGEBXFD");
    msg.timeout = 10809U;
    const char tmp_msg_0[] = {-29, 123, -59, -45, 73, -41, -27, 109, 31, 13, 6, -67, -51, -30, 126, 17, 8, -13, 60, -56, -21, -49, 93, -119, -35, 113, -9, 67, 58, -30, 71, -24, -64, -95, 63, -85, 49, 27, 92, -74, -85, 86, 5, 54, 17, -7, -47, 105, -9, 67, 85, -115, 93, -49, -13, 36, 32, 120, -9, -122, -20, 37, 35, 97, -116, 1, -86, 18, -119, 9, -111, -81, 0, 107, -32, -15, -12, 75, -53, 49, -39, -49, 44, 83, -116, -19, 1, -19, 125, -90, 91, -105, 8, -92, -90, -107, -117, 120, -76, -35, -63, 79, 62, -10, -17, 113, -73, 120, -63, 92, 14, -73, -1, -104, -25, 3, 100, -106, -63, -75, 5, 43, 43, 111, 42, -89, -5, 86, 110, -47, -13, -4, 11, 103, -86, -28, -102, 105, -104, -48, -90, 123, 107, 120, -125, 75, 67, -69, -91, 42, -72, -68, -64, -37, -21, 0, 111, 53, 19, 40, -57, -58, 96, -54, -101, -107, 47, -27, -57, -14, -108, 43, -18, 5, 102, -5, -37, 106, 101, -100, 47, 116, -14, 91, -21, 28, -39, 32, -26, -53, 9, -89, -99, -75, 32, 14, 22, 101, 107, 11, 7, -66, 116, 17, -62, 100, -24, 85, 42, 48, -111, 108, -96, 118, 41, -100, 65, -29, 27, -29, -63, 37, -42, -3, 42, -39, -116, -109, -29, 104, 76, 43, -59, 25, 76, 24, -62, -36, 4, -71, 98, 51, 25, -76, -100, -118, -46, -118, 14, 38, 104};
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
    msg.setTimeStamp(0.352307986319);
    msg.setSource(51461U);
    msg.setSourceEntity(192U);
    msg.setDestination(7117U);
    msg.setDestinationEntity(119U);
    msg.seq = 2399881067U;
    msg.destination.assign("GTMTULDQSQOZSOVUXKJQNTVSDZD");
    msg.timeout = 16856U;
    const char tmp_msg_0[] = {41, 27, 94, -89, -31, -110, 60, -51, 71, 125, 37, -103, -110, 86, 3, -4, -82, 96, 94, -105, -11, -98, -94, -81, -120, -103, 110, 0, 107, 36, 97, 102, 86, -49, 7, -80, -120, 87, -55, -40, 76, 79, 22, -87, -61, -26, 105, 97, 26, 68, -58, -66, 44, -36, -124, -25, -19, -75, -106, -54, 50, -79, 27, 40, 103, -39, -117, 121, -113, 24, -14, 67, -115, -59, -29, 29, -16, -8, -26, 46, 93, 123, 81, 12, -49, -123, -74, 50, -55, -57, -55, 68, 88, 65, -47, -39, -104, -22, -13, 126, -101, -10, -97, 117, 117, -40, 90, 20, 81, 36, 36, -122, -49, 42, -106, 96, -15, 69, 117, -53, -20, 53, 53, -48, 7, -82, 38, 91, 97, 12, 31, -57, -107, -97, 88, 111, 6, 116, -97, -127, 26, 19, 109, -40, 60, 21, 53, -95, 79, 3, -43, 5, -116, 61, -93, 20, -63, 104, 21, 70, 75, -115, -120, -55, -64, 79, 113, -24, -128, 71, 67, -108, 4, -119, 69, 1, -100, -1, -31, 96, 52, 1, -74, -94, 126, 81, 84, -31, -61, 37, -122, 122, -108, -51, -15, -66, -94, -20, 53, -115, 37, -116};
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
    msg.setTimeStamp(0.0181415450495);
    msg.setSource(31660U);
    msg.setSourceEntity(248U);
    msg.setDestination(991U);
    msg.setDestinationEntity(93U);
    msg.source.assign("VCYYIHCACZTWCWFQRRMUKVEOLRFJSKHGGHFLIDDAMLLYJWMWZSASHDGUPOQBJJHAIUMIFPSXQVTYVGTDXLDTYMOEZGSCZROGJZWLVKYAOJESUJOBTLYEEQKR");
    const char tmp_msg_0[] = {81, -76, 95, -7, -44, -35, -80, 52, 34, -69, -12, -78, 59, -66, 65, 1, -121, 77, 55, -51, -31, 87, 45, -27, 4, -99, -87, 119, -107, -110, -3, -90, 79, -103, -104, 102, 53, 37, -84, 116, 124, 69, -69, -19, -119, 88, 85, -19, 80, 30, -110, -92, -93, 126, 112, 0, -65, -99, 100, -43, -121, -67, 123, -87, 50, 19, -95, 58, -114, 38, -120, -124, 126, 7, 34, 97, -30, -70, 103, 15, 47, -32, -29, -48, -16, -125, -13, 92, -56, -62, 9, 54, 123, 52, 97, -114, -45, -3, -83, -70, -121, 32, -117, 107, -70, 95, -50, -86, 107, -49, 70, -89, 76, 65, -104, 77, 82, -34, 44, -23, 44, -12, 106, 2, -126, 109, -127, 49, 101, -25, 72, -98, 41, 82, 68, -21, 48, 84, -87, 120, 120, -20, -88, 48, 51, 35, 74, -94, 73, 88, -25, 38, 40, -61, 44, 10, 110, -69, -122, -23, -15, 87, -109, 39, 2, -61, -28, 113, -122, 63, 38, 78, 116, 94, 32, 77, 118, 80, 49, -16, -113, -68, 51, -92, 39, 126, -51, 88, -46, 64, -112, 116, -55, 75, 94, -22, -102, -35, 125, -53, 14, -86, -55, 60, -69, -54, 63, 57, -72, 47, 46, -55, -99, 77, 57, -27, -114, 27, 47, -62};
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
    msg.setTimeStamp(0.719841361044);
    msg.setSource(50015U);
    msg.setSourceEntity(100U);
    msg.setDestination(61107U);
    msg.setDestinationEntity(187U);
    msg.source.assign("GHVRKVJCOAEDYMCCBFZDBLUHHRWPXZHQTMAIQIUNRO");
    const char tmp_msg_0[] = {18, -116, 18, -102, 39, 30, -28, -75, 11, -36, -48, 73, 62, 109, 55, -115, -43, -70, -36, -93, -74, 24, -91, -109, 39, -30, 91, -33, -109, -115, -76, -125, 99, 81, 54, -57, -44, 85, 85, 124, 113, -103, 53, -51, 13, -51, -10, -30, 37, 113, -40, 125, 34, 69, 83, -18, -6, -15, -114, 11, 10, -95, -41, 40, 80, -93, 59, 45, 84, -49, -5, -7, 49, 113, 1, -100, 32, -82, 66, -121, 117, -110, 113, 86, 105, 64, -89, 108, 18, -52, 81, 52, 50, -63, -46, 117, -19, -85, -107, 107, -8, 69, -12, -6, 96, -84, -57, 104, 9, -14, -109, -122, -116, -109, -21, 59, 106, -22, 86, -14, 91, -78, 100, -107, -86, 112, 26, 73, 114, 0, -72, 40, 23, -85, 99, -71, 65, -54, -103, -105, -80, -103, -44, 80, 109, 91, 7, -87, 23, 59, -21, -56, 18, 95, -98, -78, -34, 41, -51, 118, 12, 57, 68, -33, 92, -17, -42, 49, -19, -64, 0, 10, -125, -87, -56, 69, -74, 112, -63};
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
    msg.setTimeStamp(0.291253942301);
    msg.setSource(20980U);
    msg.setSourceEntity(212U);
    msg.setDestination(58159U);
    msg.setDestinationEntity(183U);
    msg.source.assign("AHBRNTCILVMTTCGEAJMPWFXZBYACNUP");
    const char tmp_msg_0[] = {58, 84, -63, -24, -95, -52, -77, 67, 86, -127, -19, -98, -82, 43, -92, 95, -7, 43, -8, 30, 22, -33, -88, 121, 52, -120, 46, 35, 50, -111, -118, -80, 88, 105, 94, 32, 116, -60, 108, -114, 113, -89, -32, -85, 51, 8, 81, 22, -60, -122, 103, -91, 40, 7, 6, -42, -88, -51, -34, 75, 98, -21, 12, -93, -4, 28, -3, 14, -56, -60, -63, 82, -53, 125, -65, 110, -27, 109, 33, -18, -12, -115, 95, 3, 29, -127, 46, 36, 110, -29, 16, -28, -77, 0, -90, 72, -31, -69, 76, -84, 7, 116, -53, -43, 80, -21, -103, 35, 85, -51, -119, 52, -42, 50, 95, -87, -13, -34, 49, 14, -128, 108, -71, -90, -23, -51, 9, 3, 73, -83, 28, 54, -93, -54, -33, 2, -21, -79, 15, -121, 46, -82, 54, -22, 37, -45, -103, 100, -4, 36, 113, 110, -108, 118, 38, 118, -100, -3, 78, -77, -77, 4, -59, -12, 34, 35, 59, -7, 89, 125, -102, -67, -69, 50, 13, -7, -105, 19, 85, 52, 90};
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
    msg.setTimeStamp(0.943512370839);
    msg.setSource(47524U);
    msg.setSourceEntity(107U);
    msg.setDestination(45963U);
    msg.setDestinationEntity(72U);
    msg.seq = 137603153U;
    msg.state = 168U;
    msg.error.assign("TSUTRQXEIODJWAZVRQIVZCEEFKZJPNZUXGEH");

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
    msg.setTimeStamp(0.432087405698);
    msg.setSource(30222U);
    msg.setSourceEntity(217U);
    msg.setDestination(16002U);
    msg.setDestinationEntity(206U);
    msg.seq = 997688790U;
    msg.state = 65U;
    msg.error.assign("GZGQITMHMZQYJRKOGLSCSAQXATNRJXCQKTLJRGEVQVEKTKLUFZSWCRDKWVXPBTPDLBBWHJONPCAAHOFWSPJXSKBWRLDEEGSWHTCINRXOZIZCCQMTTSQYMDUJBCYDZKYFOUMKFXVINUPUJRWFHLEDSRBNSXFHEVHYGPXEDBFANAOYLHVSFGTMIFUIWINMYUKJXIQJVGEFBXMDZINBDCUVPAPUOQHEDAYNAGEPIAULQZNZOVJL");

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
    msg.setTimeStamp(0.584151382754);
    msg.setSource(65472U);
    msg.setSourceEntity(158U);
    msg.setDestination(14217U);
    msg.setDestinationEntity(214U);
    msg.seq = 3384762456U;
    msg.state = 197U;
    msg.error.assign("ZZZRXDEMDVCYZPPNVZPJOCLFELKMAOFFQGW");

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
    msg.setTimeStamp(0.377761029874);
    msg.setSource(26050U);
    msg.setSourceEntity(14U);
    msg.setDestination(41188U);
    msg.setDestinationEntity(176U);
    msg.origin.assign("NFBHFJJDRRRMWEKBZUNGRRZCKACWPLMUEVPSWCYZKNLTZKMXTOSXEDNQTDABGJENKRYLETFMINQXWUPLJGZBVOGGQPRDAYAHOCFOVEBKDSYWTVRUXGHPTDENJZXJYPCHPSHMPGJGOMUGLJJQQLKEFYFXLACQHROXZSBHDCVYSZDCIKJLCTXHNOMUFLLSSQWIQTAIECGKAUOMOIVRWABOPZB");
    msg.htime = 0.339546662857;
    msg.lat = 0.952274306011;
    msg.lon = 0.182751105403;
    const char tmp_msg_0[] = {55, 37, -30, -88, -22, -46, 126, 76, -68, 31, 11, 53, -56, 49, -3, 22, -64, 40, -52, 9, 124, -104, -63, 125, -70, 88, 55, 4, 120, -63, 30, 104, -64, -4, -28, -19, 71, -97, 49, -78, -9, -3, 8, -126, 34, 35, 54, -126, 94, 105, -26, 2, -84, -45, 76, -71, 30, 24, -112, -94, -13, -80, 82, 19, -118, 55, 85, 87, 3, -85, -53, 85, 14, -24, 50, -103};
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
    msg.setTimeStamp(0.809060456622);
    msg.setSource(12549U);
    msg.setSourceEntity(199U);
    msg.setDestination(12498U);
    msg.setDestinationEntity(89U);
    msg.origin.assign("EUHLJENWIVQKCLWKC");
    msg.htime = 0.39968435422;
    msg.lat = 0.368478939677;
    msg.lon = 0.183340807007;
    const char tmp_msg_0[] = {-52, -40, -1, -113, 109, -112, 25, 10, -94, -97, 5, -123, 40, 69, -30, 5, 8, -60, -102, -11, -127, -87, 83, 33, -36, 67, 125, 72, 118, 50, -97, -87, 62};
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
    msg.setTimeStamp(0.344523181896);
    msg.setSource(62693U);
    msg.setSourceEntity(93U);
    msg.setDestination(9765U);
    msg.setDestinationEntity(193U);
    msg.origin.assign("EOZCYQRGKLOXTNWZFGPYUFNVMZTURWUJBHMEBHHLDJMSMSMTDJSSGMUVNXHHQBRQAICPBAPWPKIVJLEHGCLQRCABROGCSDJHYVOLNVPJRTGZFQAMKBDCMZTEONLTFIOBKREBKEALK");
    msg.htime = 0.907409880803;
    msg.lat = 0.472593591765;
    msg.lon = 0.07391462599;
    const char tmp_msg_0[] = {-103, -54, 88, -105, -80, 122, -38, 104, -113, -97, -69, -118, -2, 41, -37, 124, -69, -3, 75, -12, 46, -98, 40, -40, -122, -78, 18, -116, 97, -83, -67, 14, 82, 50, -59, -51, -27, -125, -94, 4, -95, -1, -58, -35, -28, -90, -44, -71, -46, -58, 66, 99, -69, -103, -106, 9, 46, 19, 101, 40, -60, -86, 81, 56, 4, 118, 105, -110, 89, -42, 52, -108, -84, -120, 89, -73, 33, 3, 99, -107, -114, 21, -80, -113, 126, 61, 89, -110, -91, 17, -91, 97, -72, 1, 78, 21, -42, -90, -84, -19, -36, 57, 72, -107, -100, 109, -43, -56, 45, -76, -23, -5, 23, -47, 29, -56, -16, 25, -114, 102, 41, -29, 41, 26, -122, 12, 73, -52, 12, -24, 87, 87, 73, -45, -63, 81, -105, -22, -4, -83, -67, -82, 83, -13, -123, -97, -27, -46, -14, 0, -13, -69, 102, -57, -13, 111, -114, 81, -110, 67, 38, -80, 69, -7, 85, -37, -115, -6, -109, -31, 42, -28};
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
    msg.setTimeStamp(0.148542266575);
    msg.setSource(35323U);
    msg.setSourceEntity(163U);
    msg.setDestination(10976U);
    msg.setDestinationEntity(218U);
    msg.req_id = 58821U;
    msg.destination.assign("EDNABCVZONCLPCTNATIXNPWFGVQAIDPQFYDOZJICOZXZCYVMNBHIBERPBOQXGNMIOYYPNPUUJROTKGEDHJWHSWOXMQWTVANTFISHKZKLWRVSGUEIQTAYPYDZLBHGKHGHOUMFLWHFFTYBMVMESRGSLBUSQZEDZFUOPSQWEDXNSRLXXUKABRYALTJLJU");
    const char tmp_msg_0[] = {95, 5, 64, 77, 94, 89, -33, -24, 21, -53, -34, -63, -110, 94, -30, 112, -99, -48, -97, -108, -106, 64, -20, 49, 32, 44, -81, -104, 50, -35, -25, -3, 119, -95, -116, -8, 51, 4, -42, -128, 117, 14, 13, 88, -26, 112, 2, -43, 30, -11, 67, -53, -5, 114, -2, 77, -64, -94, -44, 81};
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
    msg.setTimeStamp(0.462783039366);
    msg.setSource(20550U);
    msg.setSourceEntity(154U);
    msg.setDestination(9739U);
    msg.setDestinationEntity(163U);
    msg.req_id = 16071U;
    msg.destination.assign("CYYFZDPHHGFOTKMOCSGJKVWTXXVDEIMSAFNMWVDWCKXLTHBHDDOKUVPANDQALSVYKTPBGIRJDGBGTQFHVZPFUOSORGDMCTUKIYVIESIYSNXNMEPCXFMBLSCA");
    const char tmp_msg_0[] = {-63, -29, 14, -121, -8, -75, 121, -116, -12, 68, -79, -44, 2, 58, -118, -42, 33, 16, 105, 1, -38, 103, -80, -29, -45, -83, 88, 88, 5, 75, -87, 62, -35, 32, -56, -15, 52, -55, 15, -40, -22, 8, 89, -90, 59, 13, -69, 64, 0, -50, -69, -94, 96, 1, -96, 76, -73, -37, 114, 48, 47, -47, 72, 86, -50, 58, 30, -96, 61, 121, -31, 43, -88, 68, -65, -9, -111, 71, -48, 30, 119, -67, -113, 8, -120, 27, 4, 79, -52, 41, 20, 25, 13, -81, 4, -37, 29, -72, -5, -25, 55, 28, -78, 20, 21, -91, 60, -1, 37, -118, 116, -58, 6, -114, -61, 45, -116, -76, -56, -77};
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
    msg.setTimeStamp(0.708783281734);
    msg.setSource(48006U);
    msg.setSourceEntity(189U);
    msg.setDestination(40191U);
    msg.setDestinationEntity(56U);
    msg.req_id = 31460U;
    msg.destination.assign("LBEZMBFBYPUXWEFASWOKJMGVDCVRGRRIQLHHZMTTGZDRNZJOHFMTXCIKTNZLJVHIOZAUNVDUMOEMZAAJCLYQEBPHPWBCUDGJGCMNKALUKLONKTYFDWIWDBGQLDSYPKKPOLLUIWWXNZMZUITSXERSIYSPXUOQQZIQQAGKQNJVEJJUVACTBSBGYI");
    const char tmp_msg_0[] = {-7, -29, 59, 22, 53, -103, -65, 0, 105, -7, 27, -127, 126, -69, -101, 28, 112, 100, -55, 126, 118, -123, -111, 10, 40, 36, 52, 94, 52, -24, 96, 33, 43, -51, -107, -90, 18, -16, 38, -62, 70, -84, 27, 30, -43, -63, 6, 12, 110, -40, -60, 42, -94, 10, -125, -80, -83, 53, -100, -45, 122, 117, -103, 98, 47, -79, -128, 89, 28, 20, 72, -19, 38, -122, 81, 66, 37, 96, 118, 102, -23, -126, -103, 60, -49, -115, -78, -26, 74, 82, -87, 44, 24, -19, 77, -36, -102, -86, 32, 72, 25, -112, -101, -78, -111, 82, -81, -65, -95, -2, -121, -10, 35, -125, 109, 115, 35, 111, 55, 36, -13, 94, -87, -73, 30, -28, 2, 76, 69, -34, -43, -82, -100, -112, 15, 4, -70, -111, 41, 35, 68, -34, 35, 86, -17, 48, 83, -10, -122, 0, 46, -106, 110, -104, -15, 56, -52, 35, -89, -102, -65, -76, 31, -103, -79, -127, -126, 11, -47, -83, 86, 64, -26, -87, 110, 118, -124, 11, 5, -70, 92, -75, -72, -12, 54, -120, 116, -114, 82, -1, -89, 11, 59, -36, -23, -85, -19, 115, 22, -118, 78, -16, -85, -37, -128, -67, -51, 81, 85, -78, -7, 12, -116, -75, -19};
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
    msg.setTimeStamp(0.163089915438);
    msg.setSource(59613U);
    msg.setSourceEntity(104U);
    msg.setDestination(29780U);
    msg.setDestinationEntity(202U);
    msg.req_id = 50400U;
    msg.status = 126U;
    msg.text.assign("UODGYNVLMQMXEAOJCSSCDSNINQCRDMBROZVITWARGRJCWLBQXHZRFXFONMLZWZXFTYUEATSKGTUWEBKQHKIYJQLFKPTERXSHVONANYCZKSIHTBESPBMJYL");

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
    msg.setTimeStamp(0.4487548448);
    msg.setSource(64879U);
    msg.setSourceEntity(162U);
    msg.setDestination(2882U);
    msg.setDestinationEntity(227U);
    msg.req_id = 24070U;
    msg.status = 173U;
    msg.text.assign("ZQHXQKANFRTIVOMDRGKCIDWQYQTGKXZYENTGELAIKKZCTARPWQSMKPLNNOSPOVNHEJLXFRJCEBBVTZVMFKAJGJZQOHAGSRGARQQULNYPXCHFLPIVHFUVWYNICWOEPSWHFEXXETSWRHWDOXEYFATODVRUHMBYGWTRZIBVUJEJVTJCUABKNCSAYUFKIYFFTBRLMAVOKPHPOLXDOBMBWSLGXJC");

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
    msg.setTimeStamp(0.91194444466);
    msg.setSource(32365U);
    msg.setSourceEntity(196U);
    msg.setDestination(53069U);
    msg.setDestinationEntity(80U);
    msg.req_id = 14989U;
    msg.status = 42U;
    msg.text.assign("ZJDMNOZSPGUBKORMEZUTJUGYYLSECAUQXBKVVAIISFCLNKSUUXGVMATNPWYCEHBVPAVJPEWHAOYNPQGMPHLQXPSGCHHFIWKKDMSGOIMMXXRAOVZLXYTRZOJDYMZQBHDFXLJKBKOYWFBEJRPNLZSTCFWIQJC");

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
    msg.setTimeStamp(0.912887922313);
    msg.setSource(34952U);
    msg.setSourceEntity(180U);
    msg.setDestination(64765U);
    msg.setDestinationEntity(10U);
    msg.id = 52U;
    msg.range = 0.487794504711;

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
    msg.setTimeStamp(0.542201443409);
    msg.setSource(25149U);
    msg.setSourceEntity(142U);
    msg.setDestination(31744U);
    msg.setDestinationEntity(82U);
    msg.id = 227U;
    msg.range = 0.651210084896;

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
    msg.setTimeStamp(0.0957755132493);
    msg.setSource(9505U);
    msg.setSourceEntity(40U);
    msg.setDestination(53362U);
    msg.setDestinationEntity(76U);
    msg.id = 175U;
    msg.range = 0.686253418681;

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
    msg.setTimeStamp(0.522700352092);
    msg.setSource(3725U);
    msg.setSourceEntity(163U);
    msg.setDestination(59976U);
    msg.setDestinationEntity(56U);
    msg.tx = 2U;
    msg.channel = 174U;
    msg.timer = 37881U;

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
    msg.setTimeStamp(0.460226897838);
    msg.setSource(9706U);
    msg.setSourceEntity(173U);
    msg.setDestination(60302U);
    msg.setDestinationEntity(49U);
    msg.tx = 21U;
    msg.channel = 131U;
    msg.timer = 51364U;

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
    msg.setTimeStamp(0.734772272082);
    msg.setSource(20267U);
    msg.setSourceEntity(64U);
    msg.setDestination(7366U);
    msg.setDestinationEntity(124U);
    msg.tx = 181U;
    msg.channel = 206U;
    msg.timer = 29015U;

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
    msg.setTimeStamp(0.918599577534);
    msg.setSource(5284U);
    msg.setSourceEntity(86U);
    msg.setDestination(45873U);
    msg.setDestinationEntity(10U);
    msg.beacon.assign("PVMCFIXOICULEUJTGHMODSJMCYPIUYMRCSNJTRESAPAQNBSSOWIWDMSXHRJNAQIABLZTQDYCHKPYFCYKOZXVKBKSJYGQPATATYLZMJDCLWFSRVVLSUFHEJGZXBVGDDYNWBCNJUMPHDOVBQTPKFMXEERGHFAHZRVXKBGIETFUVLDFFEOKJWGKG");
    msg.lat = 0.98542430594;
    msg.lon = 0.899595050501;
    msg.depth = 0.0827928646117;
    msg.query_channel = 249U;
    msg.reply_channel = 204U;
    msg.transponder_delay = 149U;

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
    msg.setTimeStamp(0.563267045307);
    msg.setSource(27554U);
    msg.setSourceEntity(182U);
    msg.setDestination(40145U);
    msg.setDestinationEntity(66U);
    msg.beacon.assign("EENLEYWSHWTOMGFKVHPGZHBFNKJMTZHOSULZHKDXAJNAVJVGDYBZLDTWCEBWIYXOOOESCXPDIMYRCXDTDRSLVITJFLQOGTXCLBPOUWTXEQEIORYJLHDYPSAKRGJRFVVMUKBCWPMLIHCFBRYMAAAHENYRPBQFORZGJLUUDSKTFCBNWVHUABPN");
    msg.lat = 0.96394046442;
    msg.lon = 0.671892363386;
    msg.depth = 0.146571889231;
    msg.query_channel = 93U;
    msg.reply_channel = 221U;
    msg.transponder_delay = 247U;

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
    msg.setTimeStamp(0.84591189671);
    msg.setSource(18328U);
    msg.setSourceEntity(58U);
    msg.setDestination(49240U);
    msg.setDestinationEntity(84U);
    msg.beacon.assign("EEXPHDHLGVJMBRYFBYMRANRGFUWOIOQAHBWOZEHMSTQXAKDWCSBDKPODIZQTJQRGAYSYGTDMINXBPKUKFWJVFYNLBDOCLGMKGQSAUKXASAMXKXGWEERRNNKFTUILYCJPCEFFNNJXCRAVFCYLZBHPJSHOTTCBMKCZZWVWLIZZVIUBGHDTVJVSW");
    msg.lat = 0.845864632606;
    msg.lon = 0.908245818641;
    msg.depth = 0.789183480363;
    msg.query_channel = 7U;
    msg.reply_channel = 89U;
    msg.transponder_delay = 89U;

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
    msg.setTimeStamp(0.80650070706);
    msg.setSource(8587U);
    msg.setSourceEntity(32U);
    msg.setDestination(19056U);
    msg.setDestinationEntity(164U);
    msg.op = 213U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VOZGBCNFHUUAJDWKFJZFZMXFUGEWVQOBCXTQOSNKHQTYCCTVIQYHYBOCWEGMCTNINGDWAYKIJXOPTIMMFRSRPKTJTZEAHYJISRLXQKYINKDBHBNYLRAZPDAGSMVNVRTQRZZNFU");
    tmp_msg_0.lat = 0.738241972055;
    tmp_msg_0.lon = 0.637364711687;
    tmp_msg_0.depth = 0.663488647224;
    tmp_msg_0.query_channel = 155U;
    tmp_msg_0.reply_channel = 155U;
    tmp_msg_0.transponder_delay = 82U;
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
    msg.setTimeStamp(0.262905889441);
    msg.setSource(11847U);
    msg.setSourceEntity(63U);
    msg.setDestination(30191U);
    msg.setDestinationEntity(153U);
    msg.op = 25U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QTAMPIPKZZRQLSQKDXSGVUFUYNRNJLYICLTNPM");
    tmp_msg_0.lat = 0.139303801055;
    tmp_msg_0.lon = 0.197930321585;
    tmp_msg_0.depth = 0.736145957239;
    tmp_msg_0.query_channel = 150U;
    tmp_msg_0.reply_channel = 29U;
    tmp_msg_0.transponder_delay = 191U;
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
    msg.setTimeStamp(0.147461019265);
    msg.setSource(23361U);
    msg.setSourceEntity(33U);
    msg.setDestination(6130U);
    msg.setDestinationEntity(228U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.607758170072);
    msg.setSource(42656U);
    msg.setSourceEntity(41U);
    msg.setDestination(12588U);
    msg.setDestinationEntity(94U);
    msg.address = 237U;

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
    msg.setTimeStamp(0.478454713091);
    msg.setSource(14758U);
    msg.setSourceEntity(157U);
    msg.setDestination(27005U);
    msg.setDestinationEntity(117U);
    msg.address = 174U;

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
    msg.setTimeStamp(0.847715478728);
    msg.setSource(9924U);
    msg.setSourceEntity(146U);
    msg.setDestination(53310U);
    msg.setDestinationEntity(142U);
    msg.address = 225U;

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
    msg.setTimeStamp(0.138908762021);
    msg.setSource(26432U);
    msg.setSourceEntity(233U);
    msg.setDestination(12756U);
    msg.setDestinationEntity(124U);
    msg.address = 0U;
    msg.status = 151U;
    msg.range = 0.758968244936;

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
    msg.setTimeStamp(0.391760471926);
    msg.setSource(47063U);
    msg.setSourceEntity(137U);
    msg.setDestination(18226U);
    msg.setDestinationEntity(249U);
    msg.address = 222U;
    msg.status = 233U;
    msg.range = 0.945237526715;

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
    msg.setTimeStamp(0.677066711349);
    msg.setSource(26252U);
    msg.setSourceEntity(78U);
    msg.setDestination(7082U);
    msg.setDestinationEntity(175U);
    msg.address = 6U;
    msg.status = 201U;
    msg.range = 0.507212906966;

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
    msg.setTimeStamp(0.69761296414);
    msg.setSource(46649U);
    msg.setSourceEntity(161U);
    msg.setDestination(43697U);
    msg.setDestinationEntity(154U);
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 184U;
    tmp_msg_0.reason = 69U;
    tmp_msg_0.value = 0.346718047745;
    tmp_msg_0.timestep = 0.894490887018;
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
    msg.setTimeStamp(0.399367976489);
    msg.setSource(32660U);
    msg.setSourceEntity(208U);
    msg.setDestination(44121U);
    msg.setDestinationEntity(223U);
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 124U;
    tmp_msg_0.id.assign("CPJTBEWRSVJJWQUGTEUFNKMQALEISHPXQAMMFBMBUWGDKBBGODJDLTSKHFOFHHLYLWJWPRLWLYCZ");
    IMC::Calibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 24848U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.809362051669);
    msg.setSource(17802U);
    msg.setSourceEntity(46U);
    msg.setDestination(57496U);
    msg.setDestinationEntity(155U);
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.469860080114;
    tmp_msg_0.m = 0.517860603665;
    tmp_msg_0.n = 0.0172358339062;
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
    msg.setTimeStamp(0.309204992599);
    msg.setSource(48219U);
    msg.setSourceEntity(205U);
    msg.setDestination(57458U);
    msg.setDestinationEntity(127U);
    msg.enable = 59U;

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
    msg.setTimeStamp(0.959129749319);
    msg.setSource(32188U);
    msg.setSourceEntity(31U);
    msg.setDestination(30871U);
    msg.setDestinationEntity(36U);
    msg.enable = 99U;

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
    msg.setTimeStamp(0.672557141782);
    msg.setSource(48361U);
    msg.setSourceEntity(17U);
    msg.setDestination(38734U);
    msg.setDestinationEntity(254U);
    msg.enable = 36U;

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
    msg.setTimeStamp(0.508228391048);
    msg.setSource(43291U);
    msg.setSourceEntity(30U);
    msg.setDestination(13450U);
    msg.setDestinationEntity(33U);
    msg.summary = 58U;
    msg.level = 228U;

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
    msg.setTimeStamp(0.980642942996);
    msg.setSource(7947U);
    msg.setSourceEntity(192U);
    msg.setDestination(19494U);
    msg.setDestinationEntity(196U);
    msg.summary = 74U;
    msg.level = 102U;

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
    msg.setTimeStamp(0.849938989422);
    msg.setSource(46380U);
    msg.setSourceEntity(194U);
    msg.setDestination(23458U);
    msg.setDestinationEntity(14U);
    msg.summary = 120U;
    msg.level = 78U;

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
    msg.setTimeStamp(0.42221071381);
    msg.setSource(62192U);
    msg.setSourceEntity(235U);
    msg.setDestination(9265U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.574659450515);
    msg.setSource(51958U);
    msg.setSourceEntity(77U);
    msg.setDestination(53300U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.232185446295);
    msg.setSource(23666U);
    msg.setSourceEntity(96U);
    msg.setDestination(38266U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.0355217922621);
    msg.setSource(649U);
    msg.setSourceEntity(77U);
    msg.setDestination(51503U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.099441604366);
    msg.setSource(23146U);
    msg.setSourceEntity(105U);
    msg.setDestination(62642U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.411867810969);
    msg.setSource(50519U);
    msg.setSourceEntity(146U);
    msg.setDestination(2369U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.447191584763);
    msg.setSource(21684U);
    msg.setSourceEntity(4U);
    msg.setDestination(38411U);
    msg.setDestinationEntity(246U);
    msg.op = 224U;
    msg.system.assign("NTWBRXQRMQKXMZZKBIQTSJDIJVOJUSACUNMUBGKVRWZRQJ");
    msg.range = 0.835060892541;
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 102U;
    tmp_msg_0.reason = 167U;
    tmp_msg_0.value = 0.982846150551;
    tmp_msg_0.timestep = 0.518989497213;
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
    msg.setTimeStamp(0.742360096879);
    msg.setSource(38478U);
    msg.setSourceEntity(124U);
    msg.setDestination(15657U);
    msg.setDestinationEntity(163U);
    msg.op = 189U;
    msg.system.assign("IRNNBUWLZEKYBDFQFACBHVWZWFLGXGFGHFUSQXTIOLZPXZXJADLWITYAQYKASDZVJQWVNHROXXOTPAJLBSMDEOCIUJNZOHHSSPLRAEIMKOSW");
    msg.range = 0.226842112252;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 145U;
    tmp_msg_0.max_depth = 0.348387796047;
    tmp_msg_0.min_altitude = 0.737872695716;
    tmp_msg_0.max_altitude = 0.962748357443;
    tmp_msg_0.min_speed = 0.109210418473;
    tmp_msg_0.max_speed = 0.108932638955;
    tmp_msg_0.max_vrate = 0.346494780983;
    tmp_msg_0.lat = 0.0438117351424;
    tmp_msg_0.lon = 0.707006556356;
    tmp_msg_0.orientation = 0.50875074907;
    tmp_msg_0.width = 0.75611103043;
    tmp_msg_0.length = 0.311060083527;
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
    msg.setTimeStamp(0.0926827231278);
    msg.setSource(58433U);
    msg.setSourceEntity(153U);
    msg.setDestination(50373U);
    msg.setDestinationEntity(50U);
    msg.op = 185U;
    msg.system.assign("CNCXTMGCDEYGOYVZZWJYUFVZGUNBVRJXAQBDCWJUPRPJWJYWROXDMQBSSKMLNHPDQSOIQUXNQAAZQQHUUSXLOENZYKQZLIHMMJ");
    msg.range = 0.0823071803138;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.945290880714;
    tmp_msg_0.x = 0.961802532967;
    tmp_msg_0.y = 0.924879958471;
    tmp_msg_0.z = 0.229849021566;
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
    msg.setTimeStamp(0.983163992718);
    msg.setSource(50755U);
    msg.setSourceEntity(168U);
    msg.setDestination(26956U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.481808186661);
    msg.setSource(27429U);
    msg.setSourceEntity(120U);
    msg.setDestination(7996U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.631966526902);
    msg.setSource(6458U);
    msg.setSourceEntity(122U);
    msg.setDestination(48083U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.32708813833);
    msg.setSource(11794U);
    msg.setSourceEntity(164U);
    msg.setDestination(6287U);
    msg.setDestinationEntity(144U);
    msg.list.assign("EAAJBONZQQPPOVGUAODJEUJFDYYJEDOBPXSUWZLVOGYWYGLUXASALLNKTIHNUGPYHADHLHWUBKCSOMEMCFFDEFCIWVEVNGWBPQFLPCMVSJGQZQYGSBUFNWICUCTLIZZYXRDMBPWHRAFGKEQVRYIATNHKMLRDAIOKVTMKZISSUJBUWVBXNFOKLDCREXPNDWRHZOEYIXWTIMMTZRAQPHMQXRKZNFSTNIGYTCOBSVVRXHXGKRPSTKJQTBJZH");

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
    msg.setTimeStamp(0.545368966277);
    msg.setSource(24253U);
    msg.setSourceEntity(211U);
    msg.setDestination(13906U);
    msg.setDestinationEntity(27U);
    msg.list.assign("ZHOQGDPNKGZIMRXRKJJPMYDTFJLIBMBYZSCKUSI");

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
    msg.setTimeStamp(0.446926365952);
    msg.setSource(42341U);
    msg.setSourceEntity(78U);
    msg.setDestination(5522U);
    msg.setDestinationEntity(73U);
    msg.list.assign("BWDGOIAAYUOZWGGBMJJESKLEXRDJUGOULMBJUYRKZ");

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
    msg.setTimeStamp(0.136039791082);
    msg.setSource(33792U);
    msg.setSourceEntity(236U);
    msg.setDestination(31168U);
    msg.setDestinationEntity(240U);
    msg.value = 11502;

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
    msg.setTimeStamp(0.0607617355673);
    msg.setSource(17203U);
    msg.setSourceEntity(122U);
    msg.setDestination(20038U);
    msg.setDestinationEntity(248U);
    msg.value = -20140;

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
    msg.setTimeStamp(0.339046173881);
    msg.setSource(49778U);
    msg.setSourceEntity(207U);
    msg.setDestination(63535U);
    msg.setDestinationEntity(59U);
    msg.value = -10213;

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
    msg.setTimeStamp(0.268617674995);
    msg.setSource(43876U);
    msg.setSourceEntity(12U);
    msg.setDestination(30549U);
    msg.setDestinationEntity(25U);
    msg.value = 0.133255441866;

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
    msg.setTimeStamp(0.817794994027);
    msg.setSource(38712U);
    msg.setSourceEntity(40U);
    msg.setDestination(28806U);
    msg.setDestinationEntity(189U);
    msg.value = 0.640272972801;

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
    msg.setTimeStamp(0.853575056207);
    msg.setSource(63602U);
    msg.setSourceEntity(236U);
    msg.setDestination(44571U);
    msg.setDestinationEntity(170U);
    msg.value = 0.000244277033534;

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
    msg.setTimeStamp(0.791298306963);
    msg.setSource(54781U);
    msg.setSourceEntity(43U);
    msg.setDestination(37242U);
    msg.setDestinationEntity(241U);
    msg.value = 0.282313091778;

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
    msg.setTimeStamp(0.921707808428);
    msg.setSource(55920U);
    msg.setSourceEntity(168U);
    msg.setDestination(46319U);
    msg.setDestinationEntity(121U);
    msg.value = 0.571679733061;

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
    msg.setTimeStamp(0.55976579566);
    msg.setSource(7735U);
    msg.setSourceEntity(44U);
    msg.setDestination(372U);
    msg.setDestinationEntity(58U);
    msg.value = 0.381582429962;

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
    msg.setTimeStamp(0.10049160998);
    msg.setSource(33284U);
    msg.setSourceEntity(171U);
    msg.setDestination(50152U);
    msg.setDestinationEntity(37U);
    msg.validity = 1314U;
    msg.type = 55U;
    msg.utc_year = 45945U;
    msg.utc_month = 40U;
    msg.utc_day = 144U;
    msg.utc_time = 0.413402603913;
    msg.lat = 0.218522303763;
    msg.lon = 0.354877067681;
    msg.height = 0.82733910855;
    msg.satellites = 36U;
    msg.cog = 0.963627267767;
    msg.sog = 0.932349600571;
    msg.hdop = 0.82276127587;
    msg.vdop = 0.217409438652;
    msg.hacc = 0.882734269801;
    msg.vacc = 0.465067423024;

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
    msg.setTimeStamp(0.246901524109);
    msg.setSource(58857U);
    msg.setSourceEntity(105U);
    msg.setDestination(22934U);
    msg.setDestinationEntity(245U);
    msg.validity = 59494U;
    msg.type = 146U;
    msg.utc_year = 15291U;
    msg.utc_month = 52U;
    msg.utc_day = 97U;
    msg.utc_time = 0.162010220322;
    msg.lat = 0.974134018065;
    msg.lon = 0.0998573105767;
    msg.height = 0.803154040955;
    msg.satellites = 122U;
    msg.cog = 0.519694338114;
    msg.sog = 0.680762544392;
    msg.hdop = 0.239685980101;
    msg.vdop = 0.222760324539;
    msg.hacc = 0.595568516109;
    msg.vacc = 0.703464980222;

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
    msg.setTimeStamp(0.823791024034);
    msg.setSource(8891U);
    msg.setSourceEntity(36U);
    msg.setDestination(43934U);
    msg.setDestinationEntity(70U);
    msg.validity = 16747U;
    msg.type = 191U;
    msg.utc_year = 16318U;
    msg.utc_month = 203U;
    msg.utc_day = 209U;
    msg.utc_time = 0.375406918279;
    msg.lat = 0.523126101144;
    msg.lon = 0.841872707189;
    msg.height = 0.561278321381;
    msg.satellites = 217U;
    msg.cog = 0.873018822961;
    msg.sog = 0.0258391146915;
    msg.hdop = 0.481418287657;
    msg.vdop = 0.58962156693;
    msg.hacc = 0.30434287337;
    msg.vacc = 0.815380882032;

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
    msg.setTimeStamp(0.688677959838);
    msg.setSource(2429U);
    msg.setSourceEntity(178U);
    msg.setDestination(51827U);
    msg.setDestinationEntity(251U);
    msg.time = 0.591323640712;
    msg.phi = 0.843376285149;
    msg.theta = 0.731438899425;
    msg.psi = 0.0418608149965;
    msg.psi_magnetic = 0.95331418127;

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
    msg.setTimeStamp(0.312967903676);
    msg.setSource(12534U);
    msg.setSourceEntity(1U);
    msg.setDestination(50732U);
    msg.setDestinationEntity(98U);
    msg.time = 0.256098403081;
    msg.phi = 0.678979917416;
    msg.theta = 0.302773902624;
    msg.psi = 0.0527060395772;
    msg.psi_magnetic = 0.190691401124;

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
    msg.setTimeStamp(0.538076327566);
    msg.setSource(26887U);
    msg.setSourceEntity(182U);
    msg.setDestination(32447U);
    msg.setDestinationEntity(104U);
    msg.time = 0.201781523242;
    msg.phi = 0.877154465709;
    msg.theta = 0.600509136244;
    msg.psi = 0.100762657394;
    msg.psi_magnetic = 0.721381651458;

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
    msg.setTimeStamp(0.133004848621);
    msg.setSource(14707U);
    msg.setSourceEntity(101U);
    msg.setDestination(64254U);
    msg.setDestinationEntity(102U);
    msg.time = 0.313550415276;
    msg.x = 0.752500722629;
    msg.y = 0.902656797301;
    msg.z = 0.974042710659;
    msg.timestep = 0.858416328949;

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
    msg.setTimeStamp(0.972321697991);
    msg.setSource(2536U);
    msg.setSourceEntity(123U);
    msg.setDestination(14195U);
    msg.setDestinationEntity(24U);
    msg.time = 0.139107489156;
    msg.x = 0.81944853649;
    msg.y = 0.0220728846387;
    msg.z = 0.186844715862;
    msg.timestep = 0.0643813854361;

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
    msg.setTimeStamp(0.382888269828);
    msg.setSource(45431U);
    msg.setSourceEntity(53U);
    msg.setDestination(46095U);
    msg.setDestinationEntity(243U);
    msg.time = 0.814682675257;
    msg.x = 0.528442320487;
    msg.y = 0.923761128668;
    msg.z = 0.857920040599;
    msg.timestep = 0.906140607668;

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
    msg.setTimeStamp(0.147423887955);
    msg.setSource(7805U);
    msg.setSourceEntity(224U);
    msg.setDestination(25128U);
    msg.setDestinationEntity(177U);
    msg.time = 0.72274000873;
    msg.x = 0.77238673624;
    msg.y = 0.549057005727;
    msg.z = 0.545119631421;

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
    msg.setTimeStamp(0.759984616064);
    msg.setSource(169U);
    msg.setSourceEntity(125U);
    msg.setDestination(31108U);
    msg.setDestinationEntity(194U);
    msg.time = 0.815448692783;
    msg.x = 0.892928863416;
    msg.y = 0.91496675471;
    msg.z = 0.786869965851;

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
    msg.setTimeStamp(0.665562551817);
    msg.setSource(39684U);
    msg.setSourceEntity(15U);
    msg.setDestination(32829U);
    msg.setDestinationEntity(145U);
    msg.time = 0.0248539732181;
    msg.x = 0.958700030935;
    msg.y = 0.941809994889;
    msg.z = 0.390995664609;

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
    msg.setTimeStamp(0.440450392135);
    msg.setSource(9280U);
    msg.setSourceEntity(34U);
    msg.setDestination(49674U);
    msg.setDestinationEntity(209U);
    msg.time = 0.941305979841;
    msg.x = 0.0484188264726;
    msg.y = 0.163362179741;
    msg.z = 0.810870450339;

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
    msg.setTimeStamp(0.870948566378);
    msg.setSource(39645U);
    msg.setSourceEntity(161U);
    msg.setDestination(32693U);
    msg.setDestinationEntity(182U);
    msg.time = 0.256652749833;
    msg.x = 0.875694211422;
    msg.y = 0.694172556056;
    msg.z = 0.669737324415;

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
    msg.setTimeStamp(0.0251775113066);
    msg.setSource(17106U);
    msg.setSourceEntity(78U);
    msg.setDestination(23812U);
    msg.setDestinationEntity(45U);
    msg.time = 0.631420383507;
    msg.x = 0.660285544583;
    msg.y = 0.476492176466;
    msg.z = 0.138348791085;

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
    msg.setTimeStamp(0.792543973312);
    msg.setSource(12827U);
    msg.setSourceEntity(234U);
    msg.setDestination(50260U);
    msg.setDestinationEntity(8U);
    msg.time = 0.278695626249;
    msg.x = 0.537659531244;
    msg.y = 0.196310598973;
    msg.z = 0.990352188144;

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
    msg.setTimeStamp(0.184705972515);
    msg.setSource(44235U);
    msg.setSourceEntity(215U);
    msg.setDestination(64668U);
    msg.setDestinationEntity(245U);
    msg.time = 0.755489812788;
    msg.x = 0.213001869115;
    msg.y = 0.12061943887;
    msg.z = 0.179670383898;

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
    msg.setTimeStamp(0.908084211867);
    msg.setSource(37928U);
    msg.setSourceEntity(109U);
    msg.setDestination(9909U);
    msg.setDestinationEntity(237U);
    msg.time = 0.138275433363;
    msg.x = 0.112067943354;
    msg.y = 0.18745327573;
    msg.z = 0.279966806821;

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
    msg.setTimeStamp(0.740274333909);
    msg.setSource(14458U);
    msg.setSourceEntity(191U);
    msg.setDestination(10528U);
    msg.setDestinationEntity(39U);
    msg.validity = 129U;
    msg.x = 0.864090625573;
    msg.y = 0.444993800732;
    msg.z = 0.114208240974;

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
    msg.setTimeStamp(0.333875102464);
    msg.setSource(8904U);
    msg.setSourceEntity(218U);
    msg.setDestination(56958U);
    msg.setDestinationEntity(196U);
    msg.validity = 183U;
    msg.x = 0.452557761093;
    msg.y = 0.971103320389;
    msg.z = 0.84417940112;

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
    msg.setTimeStamp(0.938174944657);
    msg.setSource(31683U);
    msg.setSourceEntity(245U);
    msg.setDestination(2671U);
    msg.setDestinationEntity(234U);
    msg.validity = 109U;
    msg.x = 0.746681259831;
    msg.y = 0.756105896417;
    msg.z = 0.967225799153;

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
    msg.setTimeStamp(0.259826855839);
    msg.setSource(53317U);
    msg.setSourceEntity(217U);
    msg.setDestination(28408U);
    msg.setDestinationEntity(28U);
    msg.validity = 87U;
    msg.x = 0.0248856319586;
    msg.y = 0.836411808363;
    msg.z = 0.0221323384913;

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
    msg.setTimeStamp(0.825741412996);
    msg.setSource(25951U);
    msg.setSourceEntity(26U);
    msg.setDestination(15025U);
    msg.setDestinationEntity(129U);
    msg.validity = 115U;
    msg.x = 0.358437993664;
    msg.y = 0.0152246110535;
    msg.z = 0.760867302735;

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
    msg.setTimeStamp(0.174673080288);
    msg.setSource(52181U);
    msg.setSourceEntity(148U);
    msg.setDestination(65479U);
    msg.setDestinationEntity(205U);
    msg.validity = 197U;
    msg.x = 0.912175111666;
    msg.y = 0.334386174234;
    msg.z = 0.562946116151;

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
    msg.setTimeStamp(0.735297085226);
    msg.setSource(38725U);
    msg.setSourceEntity(52U);
    msg.setDestination(51459U);
    msg.setDestinationEntity(56U);
    msg.time = 0.353699479827;
    msg.x = 0.658820336361;
    msg.y = 0.907321951972;
    msg.z = 0.942607911906;

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
    msg.setTimeStamp(0.696699289914);
    msg.setSource(18563U);
    msg.setSourceEntity(215U);
    msg.setDestination(53536U);
    msg.setDestinationEntity(3U);
    msg.time = 0.0112866420993;
    msg.x = 0.26730251461;
    msg.y = 0.628765544267;
    msg.z = 0.167991140767;

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
    msg.setTimeStamp(0.749304165842);
    msg.setSource(41069U);
    msg.setSourceEntity(172U);
    msg.setDestination(21178U);
    msg.setDestinationEntity(237U);
    msg.time = 0.320088063768;
    msg.x = 0.958239010631;
    msg.y = 0.192784227498;
    msg.z = 0.241296518606;

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
    msg.setTimeStamp(0.254845348604);
    msg.setSource(51596U);
    msg.setSourceEntity(212U);
    msg.setDestination(36833U);
    msg.setDestinationEntity(150U);
    msg.validity = 36U;
    msg.value = 0.0472015110198;

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
    msg.setTimeStamp(0.0181641053725);
    msg.setSource(59377U);
    msg.setSourceEntity(7U);
    msg.setDestination(23289U);
    msg.setDestinationEntity(231U);
    msg.validity = 149U;
    msg.value = 0.799406569732;

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
    msg.setTimeStamp(0.917273325192);
    msg.setSource(53280U);
    msg.setSourceEntity(31U);
    msg.setDestination(13364U);
    msg.setDestinationEntity(139U);
    msg.validity = 17U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.186639143144;
    tmp_msg_0.beam_height = 0.743673954566;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.967617438105;

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
    msg.setTimeStamp(0.373992231349);
    msg.setSource(63389U);
    msg.setSourceEntity(85U);
    msg.setDestination(33648U);
    msg.setDestinationEntity(160U);
    msg.value = 0.0680510056418;

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
    msg.setTimeStamp(0.309046314896);
    msg.setSource(43408U);
    msg.setSourceEntity(163U);
    msg.setDestination(18696U);
    msg.setDestinationEntity(142U);
    msg.value = 0.963338847291;

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
    msg.setTimeStamp(0.100539545655);
    msg.setSource(51012U);
    msg.setSourceEntity(20U);
    msg.setDestination(27609U);
    msg.setDestinationEntity(146U);
    msg.value = 0.703002987125;

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
    msg.setTimeStamp(0.975188863732);
    msg.setSource(53780U);
    msg.setSourceEntity(114U);
    msg.setDestination(57901U);
    msg.setDestinationEntity(219U);
    msg.value = 0.997550129889;

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
    msg.setTimeStamp(0.58221255547);
    msg.setSource(27360U);
    msg.setSourceEntity(208U);
    msg.setDestination(43307U);
    msg.setDestinationEntity(24U);
    msg.value = 0.836259126589;

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
    msg.setTimeStamp(0.0258326719711);
    msg.setSource(64597U);
    msg.setSourceEntity(161U);
    msg.setDestination(23374U);
    msg.setDestinationEntity(32U);
    msg.value = 0.945567751245;

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
    msg.setTimeStamp(0.258954599428);
    msg.setSource(32700U);
    msg.setSourceEntity(143U);
    msg.setDestination(16640U);
    msg.setDestinationEntity(110U);
    msg.value = 0.209527390783;

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
    msg.setTimeStamp(0.783526896718);
    msg.setSource(12680U);
    msg.setSourceEntity(233U);
    msg.setDestination(20535U);
    msg.setDestinationEntity(68U);
    msg.value = 0.910681979162;

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
    msg.setTimeStamp(0.299805816833);
    msg.setSource(41062U);
    msg.setSourceEntity(190U);
    msg.setDestination(12010U);
    msg.setDestinationEntity(242U);
    msg.value = 0.385960167298;

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
    msg.setTimeStamp(0.427940038671);
    msg.setSource(16832U);
    msg.setSourceEntity(103U);
    msg.setDestination(50506U);
    msg.setDestinationEntity(246U);
    msg.value = 0.0136990409458;

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
    msg.setTimeStamp(0.666678899338);
    msg.setSource(53983U);
    msg.setSourceEntity(4U);
    msg.setDestination(6134U);
    msg.setDestinationEntity(98U);
    msg.value = 0.214236321153;

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
    msg.setTimeStamp(0.231978611651);
    msg.setSource(38811U);
    msg.setSourceEntity(186U);
    msg.setDestination(41317U);
    msg.setDestinationEntity(209U);
    msg.value = 0.137698235382;

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
    msg.setTimeStamp(0.528682793773);
    msg.setSource(46226U);
    msg.setSourceEntity(33U);
    msg.setDestination(30430U);
    msg.setDestinationEntity(31U);
    msg.value = 0.730424976223;

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
    msg.setTimeStamp(0.10515432643);
    msg.setSource(46528U);
    msg.setSourceEntity(233U);
    msg.setDestination(58206U);
    msg.setDestinationEntity(136U);
    msg.value = 0.605227932386;

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
    msg.setTimeStamp(0.887704941709);
    msg.setSource(16437U);
    msg.setSourceEntity(130U);
    msg.setDestination(22374U);
    msg.setDestinationEntity(233U);
    msg.value = 0.217102402426;

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
    msg.setTimeStamp(0.594024921153);
    msg.setSource(2454U);
    msg.setSourceEntity(21U);
    msg.setDestination(87U);
    msg.setDestinationEntity(40U);
    msg.value = 0.333917741004;

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
    msg.setTimeStamp(0.26781730479);
    msg.setSource(43715U);
    msg.setSourceEntity(203U);
    msg.setDestination(44469U);
    msg.setDestinationEntity(97U);
    msg.value = 0.895917386812;

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
    msg.setTimeStamp(0.598834676471);
    msg.setSource(16073U);
    msg.setSourceEntity(172U);
    msg.setDestination(13177U);
    msg.setDestinationEntity(94U);
    msg.value = 0.524581825503;

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
    msg.setTimeStamp(0.517429179747);
    msg.setSource(27712U);
    msg.setSourceEntity(89U);
    msg.setDestination(10372U);
    msg.setDestinationEntity(94U);
    msg.value = 0.634983134864;

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
    msg.setTimeStamp(0.758863985111);
    msg.setSource(6870U);
    msg.setSourceEntity(175U);
    msg.setDestination(53190U);
    msg.setDestinationEntity(21U);
    msg.value = 0.978331037025;

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
    msg.setTimeStamp(0.589671110076);
    msg.setSource(47870U);
    msg.setSourceEntity(235U);
    msg.setDestination(62074U);
    msg.setDestinationEntity(144U);
    msg.value = 0.797120920875;

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
    msg.setTimeStamp(0.462991204485);
    msg.setSource(36531U);
    msg.setSourceEntity(214U);
    msg.setDestination(7409U);
    msg.setDestinationEntity(74U);
    msg.value = 0.135149718634;

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
    msg.setTimeStamp(0.0880771727177);
    msg.setSource(23500U);
    msg.setSourceEntity(48U);
    msg.setDestination(62080U);
    msg.setDestinationEntity(91U);
    msg.value = 0.106421890086;

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
    msg.setTimeStamp(0.487398075017);
    msg.setSource(18164U);
    msg.setSourceEntity(33U);
    msg.setDestination(26410U);
    msg.setDestinationEntity(156U);
    msg.value = 0.797856753435;

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
    msg.setTimeStamp(0.915795799889);
    msg.setSource(26156U);
    msg.setSourceEntity(99U);
    msg.setDestination(4269U);
    msg.setDestinationEntity(69U);
    msg.direction = 0.960068208012;
    msg.speed = 0.887985606137;

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
    msg.setTimeStamp(0.254214038969);
    msg.setSource(47661U);
    msg.setSourceEntity(18U);
    msg.setDestination(152U);
    msg.setDestinationEntity(168U);
    msg.direction = 0.761015482636;
    msg.speed = 0.724970267445;

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
    msg.setTimeStamp(0.632759883899);
    msg.setSource(16134U);
    msg.setSourceEntity(212U);
    msg.setDestination(49158U);
    msg.setDestinationEntity(196U);
    msg.direction = 0.26212886576;
    msg.speed = 0.871200825105;

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
    msg.setTimeStamp(0.824922026057);
    msg.setSource(57955U);
    msg.setSourceEntity(142U);
    msg.setDestination(41625U);
    msg.setDestinationEntity(161U);
    msg.value = 0.0981456147741;

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
    msg.setTimeStamp(0.737628082204);
    msg.setSource(34015U);
    msg.setSourceEntity(105U);
    msg.setDestination(59676U);
    msg.setDestinationEntity(65U);
    msg.value = 0.0181771300797;

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
    msg.setTimeStamp(0.419241480046);
    msg.setSource(31002U);
    msg.setSourceEntity(133U);
    msg.setDestination(13180U);
    msg.setDestinationEntity(76U);
    msg.value = 0.0857894738799;

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
    msg.setTimeStamp(0.43919152511);
    msg.setSource(25749U);
    msg.setSourceEntity(117U);
    msg.setDestination(31989U);
    msg.setDestinationEntity(13U);
    msg.value.assign("JPVXEAZFNXERCIOFAUTFKCGEXSPEDPHGOBWNNWTNZADPVIIEOUBBLEIBTMJTZRYCCDGCKGUQAXQMUPDJKZJRXBQEHQUDKHYHJRLOUHPHTXRPNBUHEDSDXTIUPEMVJDIQVKWIJDVFYNLIOWBFUGKGIRMXFGSXEYCYMHFTSLLYNMWYKFINMSPMLVTWSCVARHZYKZORAATQWSOJVWYOWQJCZBQQZACRLRQCJNKSGD");

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
    msg.setTimeStamp(0.675664996155);
    msg.setSource(13527U);
    msg.setSourceEntity(107U);
    msg.setDestination(36261U);
    msg.setDestinationEntity(15U);
    msg.value.assign("IDXHCMBUIEAADKBJFTBTOLJQRVZZEYHDTTFOELKWVWOLQMRCAZCFNHGLSMKNXGIYJFQVAIOIWNEPCDFWVRUUXUMDAOWBHFRZDIOBVFPMXXJSLURTVPWMRJHUUJWZQLSRXQHGGAKFSSOAGXZDYPTQEYKECEAFLCYUZHKYYVBTFCZNUMARGCWSVOCNTSSPYHQLEQKUDJSQNGXW");

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
    msg.setTimeStamp(0.600816173264);
    msg.setSource(21485U);
    msg.setSourceEntity(144U);
    msg.setDestination(7332U);
    msg.setDestinationEntity(202U);
    msg.value.assign("ZOQKYULPFZTSGDGATCMELVDZGNKRBEUWNHVOONRNVLRWBF");

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
    msg.setTimeStamp(0.701167521457);
    msg.setSource(5719U);
    msg.setSourceEntity(118U);
    msg.setDestination(8106U);
    msg.setDestinationEntity(245U);
    const char tmp_msg_0[] = {37, 45, 15, 117, 114, -79, 1, 13, -124, -1, 50, -55, 82, 4, 6, -96, -49, -82, 89, -27, 35, 51, 50, -114, 3, -58, 113, 101, 64, -41, 114, -116, -52, -80, -37, -57, 94, -68, 31, -101, 78, -112, -66, -57, 92, 0, 64, -102, -66, -4, -24, -76, 29, -39, 101, 111, -71, 106, 103, 18, 34, 30, 103, 90, 71, -29, 25, 13, 74, -66, 94, -21, 4, 111, -6, -108, 58, -116, 117, 101, -51, 42, -35, -49, 104, -3, -16, 11, -83, 0, 100, 39, 91, 12, -75, 47, -39, -3, 93, 17, 51, 78, 5, -114, -14, -61, 105, 116, 80, 105, 122, 16, -36, 38, 59, -53, 21, 74, -56, 54, -23, 77, -10, -123, -121, 38, -70, -120, -125, 29, -115, -81, -6, -70, 103, 41, -28, -31, -33, 40, 65, 115, -26, -80, -23, 125, -116, 101, 115, 16, 53, 98, -73, -110, 41, 79, -92, 63, -18, 40, -25, -15, -7, -126, -93, 83, 105, 65, 15, -67, -57, -26};
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
    msg.setTimeStamp(0.819769004187);
    msg.setSource(46395U);
    msg.setSourceEntity(112U);
    msg.setDestination(10193U);
    msg.setDestinationEntity(241U);
    const char tmp_msg_0[] = {45, -46, 75, 77, 61, -27, 101, 78, -4, -72, -4, 10, 46, -109, 76, 46, -81, 83, 119, -53, 1, -9, -56, -108, -30, 34, 59, -68, 54, 104, -56, -64, -7, -82, 66, -81, -17, -117, 104, -1, -112, -20, 10, 24, -84, 30, -110, 12, 73, 48, -54, 94, 73, -68, 43, 114, -1, 42, -67, 107, -124, -115, -21, -40, 61, -112, 18, 7, -73, 3, -60, -11, 117, 120, -60, -95, 85, 45, -105, -122, 75, -59, -23, 103, 123, 70, -77, -108, -6, 101, 29, 5, 28, -81, -79, -88, 42, 1, 4, 4, -53};
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
    msg.setTimeStamp(0.510226686475);
    msg.setSource(1063U);
    msg.setSourceEntity(113U);
    msg.setDestination(31898U);
    msg.setDestinationEntity(228U);
    const char tmp_msg_0[] = {-96, 90, -96, -76, 55, -126, -115, 101, 54, -117, -19, -55, 8, 37, -83, -47, 83, 38, 56, 73, -22, -114, -53, 77, 15, -117, -92, -4, -94, -46, 12, 17, -33, 78, -71, 70, -53, 92, -4, 15, 124, 116, -17, 35, 94, 126, -26, -78, -89, -1, -42, 55, 36, -5, -47, 44, 107, 12, 57, 116, -38, 71, 10, 118, -54, -65, 18, -127, 64, 56, 1, -68, 72, -6, -6, -92, -120, 5, 61, -102, -6, 14, -89, 53, 44, -69, -81, -37, 56, -128, 28, 91, 76, -18, 21, -110, 49, -47, -11, 17, 115, -119, -64, 17, -56, -25, 45, -66, -123, -76, -124, 48, -121, 88, 126, -10, -74, 59, 80, 1, -76, -81, 55, -77, 38, -120, 46, 90, 21, 67, 102, 62, 1, 73, -81, 98, 103, 62, -121, 57, 83, 70, 80, 18, 9, 126, -115, -44, 50, 54, -74, -124, -31, -105, 53, 42, 47, 85, 76, 35, 60, -27, -111, -9, 75, -62, -97, -5, 25, -9, 17, -40, -29, -48, 79, 105, -83, -34, -46, -1, 26, -43, -63, -86, -20, -14, -116, -34, -7, -101, 93, -83, 102, 121, 98, -23, 123, 122, -14, -124, 9, 26, 74, 73, 109, -25, -29, -95, -62, 23, -11, -79, -3, 42, 124, 117, 104, -14, -105, 78, 122, 68, 26, 7, 115, 35, -90, 15, 39, 70, 31, 41, -9, 15, -83, -42, 117, -54, -68, -93, 102, -4, 97, 99, -122, -83, -103, 62, 76, -35, 57, 8, 126};
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
    msg.setTimeStamp(0.924252279364);
    msg.setSource(59915U);
    msg.setSourceEntity(26U);
    msg.setDestination(16950U);
    msg.setDestinationEntity(121U);
    msg.frequency = 2795779159U;
    msg.min_range = 4471U;
    msg.max_range = 19697U;

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
    msg.setTimeStamp(0.446912965718);
    msg.setSource(54059U);
    msg.setSourceEntity(201U);
    msg.setDestination(63149U);
    msg.setDestinationEntity(168U);
    msg.frequency = 1003525953U;
    msg.min_range = 18726U;
    msg.max_range = 19057U;

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
    msg.setTimeStamp(0.124083932913);
    msg.setSource(32321U);
    msg.setSourceEntity(96U);
    msg.setDestination(35385U);
    msg.setDestinationEntity(115U);
    msg.frequency = 2640716473U;
    msg.min_range = 63389U;
    msg.max_range = 60741U;

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
    msg.setTimeStamp(0.503775807847);
    msg.setSource(2088U);
    msg.setSourceEntity(67U);
    msg.setDestination(51598U);
    msg.setDestinationEntity(73U);
    msg.type = 56U;
    msg.frequency = 1076819122U;
    msg.min_range = 28895U;
    msg.max_range = 45872U;
    msg.bits_per_point = 217U;
    msg.scale_factor = 0.599108766199;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.188595103041;
    tmp_msg_0.beam_height = 0.471697650967;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {91, -62, -33, 103, -49, 95, -106, 62, -89, -59, -48, -95, -32, -65, -119, 13, 111, -91, -98, -112, -124, 44, -45, -97, -89, 107, 20, -121, 7, -31, -26, -11, -30, 117, -96, 101, -71, 94, -117, -48, -86, -15, 103, -103, 83, -32, -81, -112, 26, 87, -101, 101, -98, 49, 38, -42, 114, 7, -68, 113, 13, 2, -33, 19, -87, 30, -85, -3, -111, 50, 123, -108, -47, 47, 30, -74, -56, 40, -26, 19, -59, -39, -48, -69, -76, 90, -59, -20, -80, 88, 72, -110, 87, 61, 34, 16, -110, 13, 90, -76, -111, 99, -25, -35, 109, -128, -85, 19, -114, -102, 21, 120, -68, 89, -122, -101, -3, 36, -41, 92, -103, -125, 109, -32, 18, -89, 125, 7, -68, 77, 125, 119, -110, 65, 71, -98, -110, -86, 97, -85, 32, 27, 79, 124, 36, -92, 38, 76, -39, -6, -80, 59, -8, 10, -69, 70, 76, 59, -70, -15, -24, 73, -65, 49, 26, 63, 91, -72, 31, 1, -66, -52, -77, -102, 66, -57, -127, -35, -105, -12, 78, 80, -118, -112, -86, -44, 81, 117, -8, -111, 59, -101, -90, -77, -29, -39, 125, -84, -54, 78, 109, -87, 67, 52, -42, -93, 33, 29, -85, -109, -58, 18, 39, 50, 43, 42, -24, -24, -37, 47, 16, 29, -15, -98, 123, 121, -55, 3, 92, -21, -30, 42, 15, -46, -54, 27, 83, -21, -31, 109, 34, -9, 119, -17, 110, 71, -65, -127, -124, -39, -82, 59, 4, 66};
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
    msg.setTimeStamp(0.589025402618);
    msg.setSource(16567U);
    msg.setSourceEntity(133U);
    msg.setDestination(39289U);
    msg.setDestinationEntity(178U);
    msg.type = 111U;
    msg.frequency = 4086505288U;
    msg.min_range = 33014U;
    msg.max_range = 65314U;
    msg.bits_per_point = 61U;
    msg.scale_factor = 0.225385399164;
    const char tmp_msg_0[] = {-117, 45, -71, -9, 84, 56, 1, -79, 107, -93, -113, -3, 106, -67, -125, -75, 16, -93, -66, -40, -127, 16, 12, -28, -93, -115, 10, -109, 57, 39, -19, -122, 81, 23, -19, 10, -12, 38, 104, 89, 73, 121, 121, -119, 19, -35, 55, -19, 22, -75, 98, -101, -7, -117, -18, 14, 10, 38, -25, 10, 114, 106, -122, 102, -70, -52, -5, -36, -67, -72, 76, -72, 118, 80, -124, -83, -51, 32, 52, -47, 23, 92, -2, 2, -17, -73, -24, 71, 114, -58, 10, 80, 87, -9, -61, -26, 97, 103, -9, 41, -102, 48, -41, 57, -64, -24, -95, -82, -69, 92, -98, 64, -22, -66, 119, 126, 98, 76, -73, 51, 101, 70, 48, 26, -3, -70, -85, 27, 53, 12, 97, 82, -76, -102, -47, 45, -4, -13, -98, 96, -127, 41, -72, 111, -122, 51, -13, -36, 91, 33, -116, 74, 66, -97, -51, -107, 30, 108, 44, 24, -87, -64, 31, -61, 30, -63, -108, 9, -33, 49, 6, 75, 4, 52, 83, 68, 83, -99, 65, 98, 95, 84, 32, -39, 59, -66, 56, 11, -118, 114, -33, 22, -44, -2, 53, 63, -11, -114, -11, -31, 92, 101, -3, 89, 15, 94, 68, 92, -63, -108, -83};
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
    msg.setTimeStamp(0.343296929192);
    msg.setSource(58329U);
    msg.setSourceEntity(97U);
    msg.setDestination(5697U);
    msg.setDestinationEntity(17U);
    msg.type = 50U;
    msg.frequency = 4087234348U;
    msg.min_range = 14714U;
    msg.max_range = 62049U;
    msg.bits_per_point = 166U;
    msg.scale_factor = 0.623564759967;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.570122696215;
    tmp_msg_0.beam_height = 0.121641149211;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {113, 114, 48, -92, 39, 119, 38, -22, -31, 80, -80, 80, 119, -1, -3, 103, -106, 16, 21, -52, 77, 18, -71, 107, -10, -103, -99, -17, -76, 121, -10, -61, -74, -115, 76, 10, 73, -38, -62, 125, 68, -9, -78, 99, -110, -54, -34, -24, -116, -2, -24, 70, -12, 3, -98, 4, 4, 31, -5, -35, -3, -106, -63, -113, -67, 110, -70, -20, 122, 18, 94, -40, 39, 86, -39, 76, -51, -22, 58, 41, -42, 45, -11, -27, 106, -65, 12, 93, 115, 11, -90, -119, 63, -40, 90, -7, 96, 111, 34, -51, 122, 88, -15, 5, 66, -88, 34, -47, 20, 57, 8, 67, 5, 91, -28, -57, -52, 117, -22, -125, 33, -41, 29, 66, 83, -10, 118, -50, -74, 3, 17, 22, -102, -114, 107, -50, 31, -128, 68, -25};
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
    msg.setTimeStamp(0.608338957974);
    msg.setSource(46058U);
    msg.setSourceEntity(140U);
    msg.setDestination(58308U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.0358588241578);
    msg.setSource(65425U);
    msg.setSourceEntity(189U);
    msg.setDestination(5012U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.239013167881);
    msg.setSource(5352U);
    msg.setSourceEntity(103U);
    msg.setDestination(1277U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.0295595933525);
    msg.setSource(46632U);
    msg.setSourceEntity(98U);
    msg.setDestination(50333U);
    msg.setDestinationEntity(145U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.69451032473);
    msg.setSource(21240U);
    msg.setSourceEntity(107U);
    msg.setDestination(7181U);
    msg.setDestinationEntity(172U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.706098506319);
    msg.setSource(21800U);
    msg.setSourceEntity(16U);
    msg.setDestination(42547U);
    msg.setDestinationEntity(156U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.888148168542);
    msg.setSource(34280U);
    msg.setSourceEntity(141U);
    msg.setDestination(20513U);
    msg.setDestinationEntity(8U);
    msg.value = 0.199822820591;
    msg.confidence = 0.115930421037;
    msg.opmodes.assign("WSMDFSUCBWOZMTDOUPTNHQTFJCPNKZLEJVNMJQKGGHXYLQUECQWKJLYJRLFTBONDOVDHJFBQXYIJSOGTCQFRBNUMFNHQAWRIPTHAXRKBVXXFKZYWQXVSGKSHLICMBUWXWRJPGCXDOVOZKRIWWDEPQEIHSAFMIAEVASAJYLPKDUDHZZPAYWBSUSNEPQIGBPOMJEMLLTMGXENLKVZRHPYEKUYTCNHVZRVCMCYRIDANBUZDXTZFR");

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
    msg.setTimeStamp(0.0305776295439);
    msg.setSource(33886U);
    msg.setSourceEntity(193U);
    msg.setDestination(53649U);
    msg.setDestinationEntity(198U);
    msg.value = 0.963624886335;
    msg.confidence = 0.678650561276;
    msg.opmodes.assign("DBHOGUHJBSKZFRPQJIJLZQPTQRNSIRXUAMXOEAPDEKHZLPKNXJXGHVWFRUQQNXUXZXABTMMRILWVPQECCFWIYTZHULVULSGWQKYXDWBBPRYZHTHKPAETASXOYDDDYRLWMAEICMVOWFMVRPUMNZCYJVSTHBVPG");

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
    msg.setTimeStamp(0.72308999947);
    msg.setSource(50272U);
    msg.setSourceEntity(58U);
    msg.setDestination(6943U);
    msg.setDestinationEntity(39U);
    msg.value = 0.547794882528;
    msg.confidence = 0.274090974265;
    msg.opmodes.assign("UMXIAZHHEFFZYSCPECTHZLXDDDFOSPWBJVGNCKCNQARHBFIRWMWEYTUYOPPTRKXZXBAYGFJTOSEVJUTDMWUAIELOSVYDXVQNWQKQRGIQKNBHBSFVDQBBAUFJGJNRTWFHVWAZNCLTHRYP");

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
    msg.setTimeStamp(0.576091316394);
    msg.setSource(18584U);
    msg.setSourceEntity(65U);
    msg.setDestination(3846U);
    msg.setDestinationEntity(173U);
    msg.itow = 1000642539U;
    msg.lat = 0.580527148877;
    msg.lon = 0.429056555182;
    msg.height_ell = 0.986727659063;
    msg.height_sea = 0.334279431821;
    msg.hacc = 0.583657241438;
    msg.vacc = 0.382717368135;
    msg.vel_n = 0.763464548969;
    msg.vel_e = 0.977444449951;
    msg.vel_d = 0.838892853527;
    msg.speed = 0.00514324559413;
    msg.gspeed = 0.774239575819;
    msg.heading = 0.776440811583;
    msg.sacc = 0.501672506859;
    msg.cacc = 0.441143086384;

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
    msg.setTimeStamp(0.452595697668);
    msg.setSource(14483U);
    msg.setSourceEntity(199U);
    msg.setDestination(59659U);
    msg.setDestinationEntity(190U);
    msg.itow = 2761562165U;
    msg.lat = 0.814236075067;
    msg.lon = 0.459419789186;
    msg.height_ell = 0.524112742567;
    msg.height_sea = 0.0878702682429;
    msg.hacc = 0.316281032391;
    msg.vacc = 0.521323264678;
    msg.vel_n = 0.796582119339;
    msg.vel_e = 0.455087323405;
    msg.vel_d = 0.636478675739;
    msg.speed = 0.47813992296;
    msg.gspeed = 0.173785160364;
    msg.heading = 0.62463202223;
    msg.sacc = 0.934476586487;
    msg.cacc = 0.887613174957;

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
    msg.setTimeStamp(0.395972072837);
    msg.setSource(26164U);
    msg.setSourceEntity(162U);
    msg.setDestination(29103U);
    msg.setDestinationEntity(152U);
    msg.itow = 3074263200U;
    msg.lat = 0.673117748323;
    msg.lon = 0.128174210599;
    msg.height_ell = 0.245548182911;
    msg.height_sea = 0.52933738041;
    msg.hacc = 0.257364401941;
    msg.vacc = 0.740967242914;
    msg.vel_n = 0.969903229995;
    msg.vel_e = 0.694741057256;
    msg.vel_d = 0.449541112071;
    msg.speed = 0.30435448776;
    msg.gspeed = 0.358514566565;
    msg.heading = 0.262602325633;
    msg.sacc = 0.826814257368;
    msg.cacc = 0.0877381418601;

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
    msg.setTimeStamp(0.984819451226);
    msg.setSource(46633U);
    msg.setSourceEntity(7U);
    msg.setDestination(31793U);
    msg.setDestinationEntity(151U);
    msg.id = 151U;
    msg.value = 0.71812614426;

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
    msg.setTimeStamp(0.733876282263);
    msg.setSource(57047U);
    msg.setSourceEntity(166U);
    msg.setDestination(2834U);
    msg.setDestinationEntity(46U);
    msg.id = 125U;
    msg.value = 0.129858175857;

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
    msg.setTimeStamp(0.0878131701353);
    msg.setSource(60021U);
    msg.setSourceEntity(55U);
    msg.setDestination(59351U);
    msg.setDestinationEntity(123U);
    msg.id = 2U;
    msg.value = 0.759351954487;

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
    msg.setTimeStamp(0.751285099194);
    msg.setSource(59029U);
    msg.setSourceEntity(90U);
    msg.setDestination(37644U);
    msg.setDestinationEntity(2U);
    msg.x = 0.198393795;
    msg.y = 0.225788941117;
    msg.z = 0.198921649614;
    msg.phi = 0.673848013253;
    msg.theta = 0.972393806107;
    msg.psi = 0.687630630401;

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
    msg.setTimeStamp(0.40216458607);
    msg.setSource(45884U);
    msg.setSourceEntity(57U);
    msg.setDestination(35686U);
    msg.setDestinationEntity(237U);
    msg.x = 0.250823266819;
    msg.y = 0.00023505238279;
    msg.z = 0.545765876859;
    msg.phi = 0.823472792449;
    msg.theta = 0.633645832676;
    msg.psi = 0.0633188672293;

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
    msg.setTimeStamp(0.694736823756);
    msg.setSource(23969U);
    msg.setSourceEntity(32U);
    msg.setDestination(3151U);
    msg.setDestinationEntity(68U);
    msg.x = 0.429588933796;
    msg.y = 0.645470246075;
    msg.z = 0.92801960649;
    msg.phi = 0.000251962036484;
    msg.theta = 0.617415029713;
    msg.psi = 0.119345850521;

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
    msg.setTimeStamp(0.452459841252);
    msg.setSource(7060U);
    msg.setSourceEntity(122U);
    msg.setDestination(5528U);
    msg.setDestinationEntity(80U);
    msg.beam_width = 0.00737939432406;
    msg.beam_height = 0.424160450288;

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
    msg.setTimeStamp(0.0800119706159);
    msg.setSource(51393U);
    msg.setSourceEntity(124U);
    msg.setDestination(61067U);
    msg.setDestinationEntity(140U);
    msg.beam_width = 0.049380556072;
    msg.beam_height = 0.629791279133;

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
    msg.setTimeStamp(0.173133428159);
    msg.setSource(10642U);
    msg.setSourceEntity(189U);
    msg.setDestination(12950U);
    msg.setDestinationEntity(24U);
    msg.beam_width = 0.374489068197;
    msg.beam_height = 0.00748132653592;

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
    msg.setTimeStamp(0.339601216302);
    msg.setSource(18294U);
    msg.setSourceEntity(244U);
    msg.setDestination(5458U);
    msg.setDestinationEntity(68U);
    msg.id = 116U;
    msg.zoom = 22U;
    msg.action = 254U;

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
    msg.setTimeStamp(0.71731559482);
    msg.setSource(30222U);
    msg.setSourceEntity(106U);
    msg.setDestination(55030U);
    msg.setDestinationEntity(111U);
    msg.id = 38U;
    msg.zoom = 44U;
    msg.action = 217U;

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
    msg.setTimeStamp(0.408414125228);
    msg.setSource(16173U);
    msg.setSourceEntity(253U);
    msg.setDestination(13958U);
    msg.setDestinationEntity(160U);
    msg.id = 223U;
    msg.zoom = 74U;
    msg.action = 233U;

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
    msg.setTimeStamp(0.0719338683177);
    msg.setSource(52975U);
    msg.setSourceEntity(68U);
    msg.setDestination(36309U);
    msg.setDestinationEntity(99U);
    msg.id = 7U;
    msg.value = 0.981745053912;

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
    msg.setTimeStamp(0.0470252042338);
    msg.setSource(9657U);
    msg.setSourceEntity(52U);
    msg.setDestination(33986U);
    msg.setDestinationEntity(153U);
    msg.id = 163U;
    msg.value = 0.337935568835;

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
    msg.setTimeStamp(0.111305317349);
    msg.setSource(43232U);
    msg.setSourceEntity(106U);
    msg.setDestination(14269U);
    msg.setDestinationEntity(105U);
    msg.id = 24U;
    msg.value = 0.755824070588;

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
    msg.setTimeStamp(0.0460035101929);
    msg.setSource(65064U);
    msg.setSourceEntity(15U);
    msg.setDestination(32291U);
    msg.setDestinationEntity(26U);
    msg.id = 45U;
    msg.value = 0.0692173064972;

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
    msg.setTimeStamp(0.576508879984);
    msg.setSource(54867U);
    msg.setSourceEntity(75U);
    msg.setDestination(28673U);
    msg.setDestinationEntity(177U);
    msg.id = 157U;
    msg.value = 0.117623848444;

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
    msg.setTimeStamp(0.389391978036);
    msg.setSource(41056U);
    msg.setSourceEntity(129U);
    msg.setDestination(19478U);
    msg.setDestinationEntity(150U);
    msg.id = 137U;
    msg.value = 0.527691302017;

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
    msg.setTimeStamp(0.484576207397);
    msg.setSource(10273U);
    msg.setSourceEntity(57U);
    msg.setDestination(25632U);
    msg.setDestinationEntity(141U);
    msg.id = 202U;
    msg.angle = 0.138861185974;

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
    msg.setTimeStamp(0.610494699087);
    msg.setSource(23341U);
    msg.setSourceEntity(199U);
    msg.setDestination(56015U);
    msg.setDestinationEntity(80U);
    msg.id = 79U;
    msg.angle = 0.416878539998;

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
    msg.setTimeStamp(0.100557456872);
    msg.setSource(59772U);
    msg.setSourceEntity(220U);
    msg.setDestination(50774U);
    msg.setDestinationEntity(24U);
    msg.id = 235U;
    msg.angle = 0.628744851616;

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
    msg.setTimeStamp(0.173637569577);
    msg.setSource(591U);
    msg.setSourceEntity(50U);
    msg.setDestination(63021U);
    msg.setDestinationEntity(75U);
    msg.op = 160U;
    msg.actions.assign("DBUOTYOVSGZCXLMJFFUQUCMEHHYQYSNHWSGYQDAQIJRUIGTBGCBLDOFJPPWMMKTAGONZLBXTNMCVQBBLOAGEPVLJAHQQDHYYXNDKBCRFLRSTANBKDLZFPNQUSSAHEAMRNXIMTKRUHIXWJCWGZKPWVMGRDDPKLXUSXMZKHURAEVRFRWWKYYNXOJREVTUOAZUSZHJCIIYFWZIEJFEOHMOJPKQCPYSTIWXSVBCEJZEDFDZGQVCABVNEVTTGOF");

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
    msg.setTimeStamp(0.407776238063);
    msg.setSource(28881U);
    msg.setSourceEntity(18U);
    msg.setDestination(46480U);
    msg.setDestinationEntity(12U);
    msg.op = 59U;
    msg.actions.assign("VIFQLTOGWTBEJHRQOFTPKZNJDVHKWNJDEFBSQSRZRCVIOMTORQQECKSJPQZPVWLOJYHAPSQJRDUFCYMHZICEUYYEPKJAXRAXVKXMLMVPCCTWZXTNZKUVJSLINEAMLZSFOYUQNFXGATHRRAFKGMLCYUEBYNPQMDSAWZNCMSEGVELKGBNUEIZBOJKXHXHWIJUHAFUBMXUQIYWIRTOGPWNCGDADVZIGLAUDFFYBSOKHCDGTOBPHDWYWBXLTMRLBP");

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
    msg.setTimeStamp(0.645041446438);
    msg.setSource(16022U);
    msg.setSourceEntity(178U);
    msg.setDestination(45723U);
    msg.setDestinationEntity(25U);
    msg.op = 220U;
    msg.actions.assign("NBDXLATDGTOSESLXKPKNWLKZEINCVKIPSODGEYHWIBIWOBAMMUH");

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
    msg.setTimeStamp(0.175559631255);
    msg.setSource(19204U);
    msg.setSourceEntity(91U);
    msg.setDestination(11551U);
    msg.setDestinationEntity(6U);
    msg.actions.assign("RUZZDIMBEUSYHLVDAWFFQGZVZEZGABOGNYJSFXZHXWRSCROGTXMABGMHMGNMOYYDYVKBHEPLQSCKAWTHXXTKPNLXPPVHOWQIWJMKRK");

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
    msg.setTimeStamp(0.835557966065);
    msg.setSource(38564U);
    msg.setSourceEntity(191U);
    msg.setDestination(56730U);
    msg.setDestinationEntity(195U);
    msg.actions.assign("RMOAUEYTWEIZHGTXFGQMIHJDYRVMAUMLELBMJIJWZGLZOCURDQXMD");

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
    msg.setTimeStamp(0.532737768382);
    msg.setSource(46365U);
    msg.setSourceEntity(52U);
    msg.setDestination(51132U);
    msg.setDestinationEntity(70U);
    msg.actions.assign("BQVKKQZAGTNPVLWQCKDJTRKAAHHCNMCIJQUMEHPCFONTEONISVXPEPGUGAVCLWWOIEHQFLVPZWTZB");

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
    msg.setTimeStamp(0.637076169935);
    msg.setSource(1699U);
    msg.setSourceEntity(21U);
    msg.setDestination(57034U);
    msg.setDestinationEntity(129U);
    msg.button = 51U;
    msg.value = 168U;

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
    msg.setTimeStamp(0.2955397893);
    msg.setSource(11899U);
    msg.setSourceEntity(97U);
    msg.setDestination(54785U);
    msg.setDestinationEntity(135U);
    msg.button = 150U;
    msg.value = 98U;

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
    msg.setTimeStamp(0.66539113077);
    msg.setSource(7639U);
    msg.setSourceEntity(105U);
    msg.setDestination(4654U);
    msg.setDestinationEntity(138U);
    msg.button = 30U;
    msg.value = 86U;

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
    msg.setTimeStamp(0.168414747493);
    msg.setSource(5533U);
    msg.setSourceEntity(252U);
    msg.setDestination(29751U);
    msg.setDestinationEntity(194U);
    msg.op = 145U;
    msg.text.assign("AJUNFYSAMWMCESGNTZOSNUCDYGUQDFAIYENDTTMNOJTXYAIUHKETIFKQXQXJAYKEAJOZXMCRETOHMQCFPRDAVBKVELKMYFMLGBPJEOLIYLGDINRVRTCBWONLHADROVUXCDAVZPGUSJFQRZOZVKHWGLHSHPQSPCXHXTYDPZKBXKPLRRQGZHTFGSHHLCKUQ");

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
    msg.setTimeStamp(0.150848392276);
    msg.setSource(53696U);
    msg.setSourceEntity(69U);
    msg.setDestination(44690U);
    msg.setDestinationEntity(175U);
    msg.op = 58U;
    msg.text.assign("IEAYEWVBHUSNEGXXFZEJKOMDJACGXLHIZCXNPJKRWYNCLPAUPPOAJCVNDUJMEHZRUOOBERTNJXSABYBFQKZOIXFVYJDQEPEPFGLVIQBKFGEVUPIRXWUKAJMBYGM");

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
    msg.setTimeStamp(0.0836555682744);
    msg.setSource(56927U);
    msg.setSourceEntity(159U);
    msg.setDestination(22030U);
    msg.setDestinationEntity(47U);
    msg.op = 252U;
    msg.text.assign("QEKTGTGQVRKXBGNRSASNDSBVPBFWKAQKIZFPEUZRHZYMIXGXOZJLHSYGRXVNDRWSFIPJFYBPKYMMXEAMOHSILQCCGXPYOLTOEJQWJRUJFHSBVGXWZULH");

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
    msg.setTimeStamp(0.770420245282);
    msg.setSource(30952U);
    msg.setSourceEntity(165U);
    msg.setDestination(61356U);
    msg.setDestinationEntity(116U);
    msg.op = 167U;
    msg.time_remain = 0.335265841722;
    msg.sched_time = 0.315748957026;

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
    msg.setTimeStamp(0.584692501468);
    msg.setSource(58840U);
    msg.setSourceEntity(230U);
    msg.setDestination(7490U);
    msg.setDestinationEntity(97U);
    msg.op = 72U;
    msg.time_remain = 0.920953183981;
    msg.sched_time = 0.441606914157;

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
    msg.setTimeStamp(0.903248501819);
    msg.setSource(13653U);
    msg.setSourceEntity(41U);
    msg.setDestination(12497U);
    msg.setDestinationEntity(20U);
    msg.op = 170U;
    msg.time_remain = 0.491812601945;
    msg.sched_time = 0.858576306588;

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
    msg.setTimeStamp(0.252773348328);
    msg.setSource(33267U);
    msg.setSourceEntity(22U);
    msg.setDestination(53007U);
    msg.setDestinationEntity(95U);
    msg.name.assign("UBXAVRMBLMRNLQUDURGCSVKZEPJAYQSLMYGQHFJOGMRWXYGWTCHKDRUIEQRZWXXUAEINBONILCSWIMPZJCFLTOKEFXODTENWHCUHKJOGVTO");
    msg.op = 106U;
    msg.sched_time = 0.0600294132701;

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
    msg.setTimeStamp(0.8165210608);
    msg.setSource(6252U);
    msg.setSourceEntity(68U);
    msg.setDestination(56190U);
    msg.setDestinationEntity(130U);
    msg.name.assign("JWHOUZAOCXBQRFOGSEJTOSDSWKDNSCEKGJWQDCHITXZGJLYXZMUGNVSLTQZMFLLWCNVZUMXITARXRVPKUFPHPQKCBBCIBWBHGYGAKRQXCCAOYBRSFOLDXSODHJGKPIJPYELSNYJXIDLYCJOMPOCYUKZUTYEMHZPXQATHVENWETKAWQRVPSNFQWTDFVDU");
    msg.op = 0U;
    msg.sched_time = 0.317460764579;

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
    msg.setTimeStamp(0.0248975801237);
    msg.setSource(270U);
    msg.setSourceEntity(128U);
    msg.setDestination(63112U);
    msg.setDestinationEntity(56U);
    msg.name.assign("YZAUIIQFPMOBDXJOWCHXZKRKCLETIVESWEBKQLFYBQCAKDOCWPRURNENPJMGZDYRZFBNVVGTCZLPMUYONSXEDSJUTINOAVFAVJWNQUUXTBYARHEEJZAFTIEJOHXQFHSBPHLKYARMBPIGDGZUMFVSSRCBCCZAQXTSJOLCANOGMWWDZEGNNHJUSVFILEPJITHXRKOMTTGQDKXIPJBBWVOLAXHZSRRULFYVGILS");
    msg.op = 235U;
    msg.sched_time = 0.393004777739;

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
    msg.setTimeStamp(0.718717257307);
    msg.setSource(25792U);
    msg.setSourceEntity(238U);
    msg.setDestination(55884U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.482513843372);
    msg.setSource(7708U);
    msg.setSourceEntity(11U);
    msg.setDestination(4991U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.946920777313);
    msg.setSource(62929U);
    msg.setSourceEntity(136U);
    msg.setDestination(424U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.129801851693);
    msg.setSource(43239U);
    msg.setSourceEntity(104U);
    msg.setDestination(956U);
    msg.setDestinationEntity(141U);
    msg.name.assign("GGIAJAZFZVTTCHGWJBGYTTUPFUSRHYOUSRDDBJSVMDYBEAWZSJBPLHQVKSANUTQJYAIVKAVRTIZRENDTSHIQNDTNJYQUVZNFWXYQRBEQYYVZXPNNUAIKTGHCPHCJEMINFYGALCEGKDOGRLLKFHJXDWLWRAQGELROFHPXWVMDQEGCCHUIPOMBLFJCVKNMCYKBZMFUXNLQOWMOMOMSSPUEPWKXTSXFEAIJZLMERBPFKCOODZBRXZUXHLICP");
    msg.state = 130U;

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
    msg.setTimeStamp(0.937978844414);
    msg.setSource(10469U);
    msg.setSourceEntity(69U);
    msg.setDestination(34514U);
    msg.setDestinationEntity(37U);
    msg.name.assign("MJQPJBTPWKLFVXHBVIPYGNLYCQZDVKESFYUWGHXQI");
    msg.state = 237U;

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
    msg.setTimeStamp(0.103663772698);
    msg.setSource(57261U);
    msg.setSourceEntity(11U);
    msg.setDestination(9331U);
    msg.setDestinationEntity(83U);
    msg.name.assign("UBHKCPXUKCGPRYRJQTBYWMHDZKTOJMVHQBEUTQFXINDTNULGHOMHFEDFQTGANRKXQXQJMIUKUGTAZYVSFZBESAMRZHVPWVOOXSLHKSGVEMNISDTXAZLCYVATGAJKPHPFLBKLIDRMVFRYJZGZUUWMICPJLNQLBFBCDOZNCYYNDBVZEFFZOQOFNLAEASQIDUEAXSGWHEODMYJX");
    msg.state = 182U;

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
    msg.setTimeStamp(0.631617357512);
    msg.setSource(28983U);
    msg.setSourceEntity(225U);
    msg.setDestination(52297U);
    msg.setDestinationEntity(198U);
    msg.name.assign("HFCNOPKUDHDUANPBIFQUZCNPHPHHACAAPYMSUWQJTPRARJHVKQCVKFYROVMIEOZUBDLMYWYVBERKOKQHWSZUIFQXRGMGGWSTBVQJEVKULXMFSYGSOETIOPBTDDZZTTXGGORTLEANHCJDNQXXACCNSLFPVZZAFHCTMBLSOBRCBJJWMABKTYLQGPGKJENIFKILZBEGRRDXMXOXW");
    msg.value = 243U;

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
    msg.setTimeStamp(0.158765803845);
    msg.setSource(59543U);
    msg.setSourceEntity(179U);
    msg.setDestination(13453U);
    msg.setDestinationEntity(83U);
    msg.name.assign("JKSUSUGPBHQHQANHGMJUZBSPELVH");
    msg.value = 133U;

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
    msg.setTimeStamp(0.508958172565);
    msg.setSource(31759U);
    msg.setSourceEntity(193U);
    msg.setDestination(25178U);
    msg.setDestinationEntity(203U);
    msg.name.assign("MIERSDEBFKBVDBDKOJIBBFDPDNMQFIQGXPTTGULGQIZHCOKVEDZQAPHUFSXAOVECKYUJXMLVSPFSTOIYEYHNUMQEUGZAIVDERLAZYGNCRQPISXACEDMXUNYRLSPRYMWYVAJMINSKLXHBXWTQRBJAQFJKPXUMEVJAJXJBWGCCXRGTIIAQK");
    msg.value = 120U;

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
    msg.setTimeStamp(0.272664883769);
    msg.setSource(7550U);
    msg.setSourceEntity(19U);
    msg.setDestination(48345U);
    msg.setDestinationEntity(54U);
    msg.name.assign("PLHAJXWZINBREEGLUQOSEYUCXRMSWPJHGELIKIULGVXHBBSMVMIANPTMAPSAAXALHRGHJHEBZNQDSKEGOVMYPDQIJNAZDCFAFZBSWVDWOGRQKGGGYLBYCJWMQUJFCGYUWZNDKCXNNTKYKYDBIKVTJWFVWOBKNXTXPKJIIUVMOSNRIZHSENAUVLCTVTDDQFXQPQFEFKETZTUPOLFDUQHCHOQLOAYVTZMODJRHJPXRRS");

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
    msg.setTimeStamp(0.63188083598);
    msg.setSource(21743U);
    msg.setSourceEntity(69U);
    msg.setDestination(44866U);
    msg.setDestinationEntity(138U);
    msg.name.assign("JHPVUVTUGVOKOWCBUEEXHTWQGZIZSXGBJDAFFFHEUHINCQKLRRDNKCHAIPBOPMBWGTMEMJZNRLLLCYVKPWWDFCYWMTOXXDMADVAKQHAEABHQRSZIWKPQTXKCIDEQCLNHSSIIMLYMWEKOGYNUBVRRMNIGTJZFCSOVHUPJJRPJXJLCEVABUSXTQEXXUGYPHKTXFIAWUGPYJTSFFDJZNLCFASYDYNESOAMOPBOVTNRLNGIWLRSZ");

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
    msg.setTimeStamp(0.363324476802);
    msg.setSource(10500U);
    msg.setSourceEntity(80U);
    msg.setDestination(12428U);
    msg.setDestinationEntity(74U);
    msg.name.assign("LDCYLWKGGHNAOFVGBRYDKOFXZPBYRKHJEIQDFSWVFEUTTCQVNVZJIUMLJLEHGLUGGOIFYIKCZKENNXXAMPRLXXTMWOGZSHRXIKXCTHFOOBYBDTBRGYLUKNDDLAEFKUEVHWIDULAZSQBQDNMJCPOTARNXMIIPHXJMEBCACGWQHSCWZSNRQJAQMPYSKGQOZWQF");

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
    msg.setTimeStamp(0.413539049597);
    msg.setSource(17439U);
    msg.setSourceEntity(79U);
    msg.setDestination(45712U);
    msg.setDestinationEntity(199U);
    msg.name.assign("MVQURDWQMVQNOOUDSGUEHOKKEVOUZHZMWZQFAFFCBGUXAOJGOGHIOIEKNBRBQEDCMEFHLZGNXOYFYKNSLIDPSYEAJIPIMGSYVSLOMATXHADJDPGCXTVRJWJTLTWWYJBWKSXEYENAGPCUOPLNQLPHNQAXIHUWIYUNQSKZLJZMZ");
    msg.value = 234U;

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
    msg.setTimeStamp(0.521216531806);
    msg.setSource(63057U);
    msg.setSourceEntity(199U);
    msg.setDestination(23711U);
    msg.setDestinationEntity(78U);
    msg.name.assign("BUZPCNSNSIQHIPATHFZRUJXGZFKNTLCCESMYUZDDHJNTDZWVNETLJVJIFKRUCPVRGOPRZMVKFJYHSYIWOCTRGKMTYNJFIPQLNVWGCJSMKYDESHABOPMJZSNOTQGCLKMXSRXAUVUCEXAWCMOAFNQWAZFWQYXKODHBIDEBDFLBVEFMWIKHJBIEKXAUHSGDHR");
    msg.value = 58U;

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
    msg.setTimeStamp(0.396293788854);
    msg.setSource(61835U);
    msg.setSourceEntity(59U);
    msg.setDestination(19114U);
    msg.setDestinationEntity(227U);
    msg.name.assign("ODJXBAYAIEKNTHKZYZNRFKXPSMXGIPKSIFOHMEUAROBKVYGRJZVCVGDSNLZGKWEJBNECZCSOHHADJMTYHOVDTWGPOWUMGWBPFVPRDTODWEZLFXCZFVCOJFPBQECUSBBSVIZYQHTZTXNWJYXCURQMQGUWILJPRNKRLZCNWITNWQXXFYDLRHRYBSWHAPEJNVDGMQFQMDLGVMJKREANBCKTLFPSASUOCEMYULUIKJOUPIHFAXALSQU");
    msg.value = 112U;

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
    msg.setTimeStamp(0.618119731128);
    msg.setSource(17357U);
    msg.setSourceEntity(92U);
    msg.setDestination(18497U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.717373817445;
    msg.lon = 0.292605456212;
    msg.height = 0.479400407141;
    msg.x = 0.0350006824773;
    msg.y = 0.277348187895;
    msg.z = 0.797714134509;
    msg.phi = 0.776821595752;
    msg.theta = 0.886957002905;
    msg.psi = 0.317681557095;
    msg.u = 0.797348998405;
    msg.v = 0.702528551288;
    msg.w = 0.50345557407;
    msg.vx = 0.643180312594;
    msg.vy = 0.0621180669377;
    msg.vz = 0.533451386109;
    msg.p = 0.411158334572;
    msg.q = 0.831127660664;
    msg.r = 0.729818324232;
    msg.depth = 0.429319657268;
    msg.alt = 0.731085089806;

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
    msg.setTimeStamp(0.486077990639);
    msg.setSource(22567U);
    msg.setSourceEntity(42U);
    msg.setDestination(40271U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.337220958176;
    msg.lon = 0.409999153481;
    msg.height = 0.950934505497;
    msg.x = 0.228088198398;
    msg.y = 0.81442804942;
    msg.z = 0.951796830082;
    msg.phi = 0.091730483642;
    msg.theta = 0.226668639074;
    msg.psi = 0.832348674194;
    msg.u = 0.880988413993;
    msg.v = 0.646198727272;
    msg.w = 0.978424575255;
    msg.vx = 0.282601155603;
    msg.vy = 0.858652283388;
    msg.vz = 0.0561358155851;
    msg.p = 0.450300442994;
    msg.q = 0.213643517931;
    msg.r = 0.357160872876;
    msg.depth = 0.818747943424;
    msg.alt = 0.604986503499;

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
    msg.setTimeStamp(0.285745495749);
    msg.setSource(31082U);
    msg.setSourceEntity(171U);
    msg.setDestination(24067U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.425853118319;
    msg.lon = 0.718336430712;
    msg.height = 0.818819135308;
    msg.x = 0.271663552372;
    msg.y = 0.134448005295;
    msg.z = 0.940776508351;
    msg.phi = 0.156551868386;
    msg.theta = 0.576181047924;
    msg.psi = 0.288059285994;
    msg.u = 0.155358093253;
    msg.v = 0.443857723707;
    msg.w = 0.037270128343;
    msg.vx = 0.770519362018;
    msg.vy = 0.172287896051;
    msg.vz = 0.89490830257;
    msg.p = 0.836927624054;
    msg.q = 0.0090042061072;
    msg.r = 0.324911203103;
    msg.depth = 0.111014688406;
    msg.alt = 0.23681943796;

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
    msg.setTimeStamp(0.454625128364);
    msg.setSource(63049U);
    msg.setSourceEntity(90U);
    msg.setDestination(54476U);
    msg.setDestinationEntity(98U);
    msg.x = 0.604187437868;
    msg.y = 0.27130259744;
    msg.z = 0.3144134979;

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
    msg.setTimeStamp(0.174785509113);
    msg.setSource(27005U);
    msg.setSourceEntity(190U);
    msg.setDestination(5944U);
    msg.setDestinationEntity(233U);
    msg.x = 0.241393431471;
    msg.y = 0.697824370777;
    msg.z = 0.117046489303;

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
    msg.setTimeStamp(0.0334377178507);
    msg.setSource(2313U);
    msg.setSourceEntity(207U);
    msg.setDestination(23551U);
    msg.setDestinationEntity(134U);
    msg.x = 0.326915836923;
    msg.y = 0.840410822751;
    msg.z = 0.779460445643;

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
    msg.setTimeStamp(0.865839489238);
    msg.setSource(61522U);
    msg.setSourceEntity(22U);
    msg.setDestination(7697U);
    msg.setDestinationEntity(47U);
    msg.value = 0.945412140255;

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
    msg.setTimeStamp(0.264294658763);
    msg.setSource(54536U);
    msg.setSourceEntity(37U);
    msg.setDestination(13992U);
    msg.setDestinationEntity(178U);
    msg.value = 0.316317098005;

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
    msg.setTimeStamp(0.562411881752);
    msg.setSource(14755U);
    msg.setSourceEntity(182U);
    msg.setDestination(19677U);
    msg.setDestinationEntity(75U);
    msg.value = 0.913084465116;

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
    msg.setTimeStamp(0.86222099488);
    msg.setSource(17316U);
    msg.setSourceEntity(96U);
    msg.setDestination(46281U);
    msg.setDestinationEntity(240U);
    msg.value = 0.0428756589391;

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
    msg.setTimeStamp(0.260869158214);
    msg.setSource(14801U);
    msg.setSourceEntity(220U);
    msg.setDestination(59513U);
    msg.setDestinationEntity(145U);
    msg.value = 0.968604233169;

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
    msg.setTimeStamp(0.119804252801);
    msg.setSource(53411U);
    msg.setSourceEntity(237U);
    msg.setDestination(62296U);
    msg.setDestinationEntity(184U);
    msg.value = 0.654981373569;

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
    msg.setTimeStamp(0.209801528323);
    msg.setSource(40513U);
    msg.setSourceEntity(79U);
    msg.setDestination(14682U);
    msg.setDestinationEntity(6U);
    msg.x = 0.826568508703;
    msg.y = 0.363982125644;
    msg.z = 0.580179123991;
    msg.phi = 0.94902760033;
    msg.theta = 0.62659072933;
    msg.psi = 0.693176489819;
    msg.p = 0.00519914227858;
    msg.q = 0.32963903127;
    msg.r = 0.774708432575;
    msg.u = 0.506583184634;
    msg.v = 0.655416394958;
    msg.w = 0.648742990853;
    msg.bias_psi = 0.763986332379;
    msg.bias_r = 0.854622634513;

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
    msg.setTimeStamp(0.793034041915);
    msg.setSource(20522U);
    msg.setSourceEntity(73U);
    msg.setDestination(40246U);
    msg.setDestinationEntity(221U);
    msg.x = 0.920356670706;
    msg.y = 0.277216715807;
    msg.z = 0.920564957277;
    msg.phi = 0.0161335854401;
    msg.theta = 0.909408118822;
    msg.psi = 0.673213796603;
    msg.p = 0.325804250557;
    msg.q = 0.959566505562;
    msg.r = 0.563894659015;
    msg.u = 0.707649660968;
    msg.v = 0.522050725151;
    msg.w = 0.316633999314;
    msg.bias_psi = 0.800058147407;
    msg.bias_r = 0.173205853278;

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
    msg.setTimeStamp(0.226861763485);
    msg.setSource(54269U);
    msg.setSourceEntity(105U);
    msg.setDestination(807U);
    msg.setDestinationEntity(253U);
    msg.x = 0.310970116026;
    msg.y = 0.894643097527;
    msg.z = 0.902219918717;
    msg.phi = 0.0683412605206;
    msg.theta = 0.217168166438;
    msg.psi = 0.61050997732;
    msg.p = 0.42494411872;
    msg.q = 0.638409585879;
    msg.r = 0.0804448557567;
    msg.u = 0.581506934912;
    msg.v = 0.787432409114;
    msg.w = 0.147118226406;
    msg.bias_psi = 0.194891002514;
    msg.bias_r = 0.279245161914;

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
    msg.setTimeStamp(0.792324848092);
    msg.setSource(26532U);
    msg.setSourceEntity(43U);
    msg.setDestination(38320U);
    msg.setDestinationEntity(102U);
    msg.bias_psi = 0.607924881073;
    msg.bias_r = 0.15950847935;
    msg.cog = 0.0194373285074;
    msg.cyaw = 0.301051650941;
    msg.lbl_rej_level = 0.415302500833;
    msg.gps_rej_level = 0.98385795932;
    msg.custom_x = 0.500008963252;
    msg.custom_y = 0.404249905228;
    msg.custom_z = 0.168323969009;

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
    msg.setTimeStamp(0.0623207859074);
    msg.setSource(8380U);
    msg.setSourceEntity(179U);
    msg.setDestination(9721U);
    msg.setDestinationEntity(61U);
    msg.bias_psi = 0.839623295667;
    msg.bias_r = 0.47909684393;
    msg.cog = 0.532262843157;
    msg.cyaw = 0.107653456037;
    msg.lbl_rej_level = 0.594641348867;
    msg.gps_rej_level = 0.713902029098;
    msg.custom_x = 0.867236457397;
    msg.custom_y = 0.243956121906;
    msg.custom_z = 0.659305282476;

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
    msg.setTimeStamp(0.957956168735);
    msg.setSource(48862U);
    msg.setSourceEntity(203U);
    msg.setDestination(57576U);
    msg.setDestinationEntity(145U);
    msg.bias_psi = 0.881503610388;
    msg.bias_r = 0.0178342213877;
    msg.cog = 0.126179459394;
    msg.cyaw = 0.534250548405;
    msg.lbl_rej_level = 0.391990539708;
    msg.gps_rej_level = 0.62369658238;
    msg.custom_x = 0.779880778439;
    msg.custom_y = 0.224195139478;
    msg.custom_z = 0.20374669198;

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
    msg.setTimeStamp(0.494608837101);
    msg.setSource(29089U);
    msg.setSourceEntity(186U);
    msg.setDestination(56785U);
    msg.setDestinationEntity(54U);
    msg.utc_time = 0.993575927425;
    msg.reason = 207U;

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
    msg.setTimeStamp(0.980354570428);
    msg.setSource(49379U);
    msg.setSourceEntity(125U);
    msg.setDestination(54546U);
    msg.setDestinationEntity(125U);
    msg.utc_time = 0.874696015386;
    msg.reason = 32U;

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
    msg.setTimeStamp(0.837194800424);
    msg.setSource(19719U);
    msg.setSourceEntity(23U);
    msg.setDestination(62732U);
    msg.setDestinationEntity(3U);
    msg.utc_time = 0.757651133965;
    msg.reason = 224U;

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
    msg.setTimeStamp(0.658995150281);
    msg.setSource(9704U);
    msg.setSourceEntity(104U);
    msg.setDestination(16007U);
    msg.setDestinationEntity(110U);
    msg.id = 52U;
    msg.range = 0.568949354573;
    msg.acceptance = 49U;

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
    msg.setTimeStamp(0.206569911413);
    msg.setSource(7515U);
    msg.setSourceEntity(87U);
    msg.setDestination(60543U);
    msg.setDestinationEntity(44U);
    msg.id = 52U;
    msg.range = 0.809667522404;
    msg.acceptance = 241U;

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
    msg.setTimeStamp(0.298861551161);
    msg.setSource(48702U);
    msg.setSourceEntity(31U);
    msg.setDestination(27345U);
    msg.setDestinationEntity(128U);
    msg.id = 106U;
    msg.range = 0.745916626863;
    msg.acceptance = 198U;

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
    msg.setTimeStamp(0.296207230799);
    msg.setSource(50851U);
    msg.setSourceEntity(224U);
    msg.setDestination(31519U);
    msg.setDestinationEntity(77U);
    msg.type = 186U;
    msg.reason = 161U;
    msg.value = 0.729609690322;
    msg.timestep = 0.715346657451;

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
    msg.setTimeStamp(0.408608433908);
    msg.setSource(30476U);
    msg.setSourceEntity(210U);
    msg.setDestination(25869U);
    msg.setDestinationEntity(206U);
    msg.type = 98U;
    msg.reason = 238U;
    msg.value = 0.581771478467;
    msg.timestep = 0.443869874038;

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
    msg.setTimeStamp(0.293605225621);
    msg.setSource(57894U);
    msg.setSourceEntity(230U);
    msg.setDestination(36723U);
    msg.setDestinationEntity(199U);
    msg.type = 184U;
    msg.reason = 115U;
    msg.value = 0.0140348674547;
    msg.timestep = 0.199743012348;

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
    msg.setTimeStamp(0.294704525861);
    msg.setSource(50884U);
    msg.setSourceEntity(250U);
    msg.setDestination(6076U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.4946477833);
    msg.setSource(40581U);
    msg.setSourceEntity(12U);
    msg.setDestination(34076U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.986657772789);
    msg.setSource(2535U);
    msg.setSourceEntity(67U);
    msg.setDestination(12117U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.497885175744);
    msg.setSource(22607U);
    msg.setSourceEntity(60U);
    msg.setDestination(60030U);
    msg.setDestinationEntity(98U);
    msg.beacon.assign("DGBRVZXFOSWPBAEZGDBFSDUFMNCBCKXVMPNM");
    msg.x = 0.178475739982;
    msg.y = 0.559872311702;
    msg.depth = 0.543179385688;
    msg.var_x = 0.902757809763;
    msg.var_y = 0.382125595046;

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
    msg.setTimeStamp(0.150343502645);
    msg.setSource(24640U);
    msg.setSourceEntity(182U);
    msg.setDestination(30351U);
    msg.setDestinationEntity(231U);
    msg.beacon.assign("NJTFJHSBQARRKBLGZZV");
    msg.x = 0.825111221597;
    msg.y = 0.921902687421;
    msg.depth = 0.332453853356;
    msg.var_x = 0.970368597343;
    msg.var_y = 0.618209938035;

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
    msg.setTimeStamp(0.382101023492);
    msg.setSource(54525U);
    msg.setSourceEntity(129U);
    msg.setDestination(18038U);
    msg.setDestinationEntity(137U);
    msg.beacon.assign("AUBVOMKZHZ");
    msg.x = 0.0797104648087;
    msg.y = 0.989155444645;
    msg.depth = 0.23834200044;
    msg.var_x = 0.217407257729;
    msg.var_y = 0.880742052937;

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
    msg.setTimeStamp(0.503509888995);
    msg.setSource(64239U);
    msg.setSourceEntity(127U);
    msg.setDestination(5538U);
    msg.setDestinationEntity(31U);
    msg.value = 0.498422054751;

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
    msg.setTimeStamp(0.285956831495);
    msg.setSource(24266U);
    msg.setSourceEntity(181U);
    msg.setDestination(64326U);
    msg.setDestinationEntity(233U);
    msg.value = 0.860064969837;

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
    msg.setTimeStamp(0.858393479308);
    msg.setSource(14780U);
    msg.setSourceEntity(226U);
    msg.setDestination(12504U);
    msg.setDestinationEntity(36U);
    msg.value = 0.764109630167;

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
    msg.setTimeStamp(0.937279553473);
    msg.setSource(37389U);
    msg.setSourceEntity(4U);
    msg.setDestination(60188U);
    msg.setDestinationEntity(159U);
    msg.value = 0.0285942369401;
    msg.z_units = 68U;

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
    msg.setTimeStamp(0.576154499945);
    msg.setSource(61308U);
    msg.setSourceEntity(225U);
    msg.setDestination(31991U);
    msg.setDestinationEntity(69U);
    msg.value = 0.579503940514;
    msg.z_units = 67U;

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
    msg.setTimeStamp(0.457791298);
    msg.setSource(4873U);
    msg.setSourceEntity(167U);
    msg.setDestination(12870U);
    msg.setDestinationEntity(241U);
    msg.value = 0.702703391719;
    msg.z_units = 26U;

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
    msg.setTimeStamp(0.109512644171);
    msg.setSource(6192U);
    msg.setSourceEntity(60U);
    msg.setDestination(12939U);
    msg.setDestinationEntity(216U);
    msg.value = 0.895595210461;
    msg.speed_units = 21U;

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
    msg.setTimeStamp(0.133239368878);
    msg.setSource(48188U);
    msg.setSourceEntity(224U);
    msg.setDestination(22184U);
    msg.setDestinationEntity(145U);
    msg.value = 0.371585467948;
    msg.speed_units = 235U;

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
    msg.setTimeStamp(0.15061810469);
    msg.setSource(27895U);
    msg.setSourceEntity(125U);
    msg.setDestination(61687U);
    msg.setDestinationEntity(158U);
    msg.value = 0.491367857466;
    msg.speed_units = 174U;

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
    msg.setTimeStamp(0.372985860121);
    msg.setSource(41985U);
    msg.setSourceEntity(58U);
    msg.setDestination(52210U);
    msg.setDestinationEntity(7U);
    msg.value = 0.394334175832;

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
    msg.setTimeStamp(0.688124739312);
    msg.setSource(54042U);
    msg.setSourceEntity(35U);
    msg.setDestination(47333U);
    msg.setDestinationEntity(95U);
    msg.value = 0.840587045618;

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
    msg.setTimeStamp(0.28489319914);
    msg.setSource(46434U);
    msg.setSourceEntity(94U);
    msg.setDestination(41402U);
    msg.setDestinationEntity(103U);
    msg.value = 0.620821043882;

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
    msg.setTimeStamp(0.132355219427);
    msg.setSource(14692U);
    msg.setSourceEntity(134U);
    msg.setDestination(2415U);
    msg.setDestinationEntity(3U);
    msg.value = 0.145734494759;

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
    msg.setTimeStamp(0.304526490244);
    msg.setSource(62174U);
    msg.setSourceEntity(222U);
    msg.setDestination(23235U);
    msg.setDestinationEntity(63U);
    msg.value = 0.195642534253;

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
    msg.setTimeStamp(0.161389548469);
    msg.setSource(18328U);
    msg.setSourceEntity(3U);
    msg.setDestination(25812U);
    msg.setDestinationEntity(38U);
    msg.value = 0.295890141433;

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
    msg.setTimeStamp(0.35538846101);
    msg.setSource(50915U);
    msg.setSourceEntity(229U);
    msg.setDestination(8514U);
    msg.setDestinationEntity(66U);
    msg.value = 0.929899953685;

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
    msg.setTimeStamp(0.955216589065);
    msg.setSource(2559U);
    msg.setSourceEntity(210U);
    msg.setDestination(35171U);
    msg.setDestinationEntity(181U);
    msg.value = 0.0086695014167;

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
    msg.setTimeStamp(0.811059526022);
    msg.setSource(28113U);
    msg.setSourceEntity(55U);
    msg.setDestination(16719U);
    msg.setDestinationEntity(128U);
    msg.value = 0.663413810551;

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
    msg.setTimeStamp(0.895662339234);
    msg.setSource(13345U);
    msg.setSourceEntity(64U);
    msg.setDestination(12495U);
    msg.setDestinationEntity(56U);
    msg.start_lat = 0.832055971757;
    msg.start_lon = 0.997634628132;
    msg.start_z = 0.753436569741;
    msg.start_z_units = 116U;
    msg.end_lat = 0.879948402865;
    msg.end_lon = 0.728223210002;
    msg.end_z = 0.183750142387;
    msg.end_z_units = 245U;
    msg.speed = 0.5526631167;
    msg.speed_units = 226U;
    msg.lradius = 0.0425527315726;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.476813675042);
    msg.setSource(2301U);
    msg.setSourceEntity(215U);
    msg.setDestination(58571U);
    msg.setDestinationEntity(135U);
    msg.start_lat = 0.777229490052;
    msg.start_lon = 0.98068962158;
    msg.start_z = 0.257197191199;
    msg.start_z_units = 94U;
    msg.end_lat = 0.783474767559;
    msg.end_lon = 0.271699273887;
    msg.end_z = 0.0716723271519;
    msg.end_z_units = 191U;
    msg.speed = 0.3197265755;
    msg.speed_units = 52U;
    msg.lradius = 0.142209306557;
    msg.flags = 248U;

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
    msg.setTimeStamp(0.561746345487);
    msg.setSource(17231U);
    msg.setSourceEntity(82U);
    msg.setDestination(12919U);
    msg.setDestinationEntity(165U);
    msg.start_lat = 0.0975271676167;
    msg.start_lon = 0.279698250114;
    msg.start_z = 0.458203225864;
    msg.start_z_units = 237U;
    msg.end_lat = 0.28951427339;
    msg.end_lon = 0.340791595023;
    msg.end_z = 0.936565442024;
    msg.end_z_units = 167U;
    msg.speed = 0.28279662644;
    msg.speed_units = 16U;
    msg.lradius = 0.426068726717;
    msg.flags = 87U;

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
    msg.setTimeStamp(0.564997872482);
    msg.setSource(30385U);
    msg.setSourceEntity(51U);
    msg.setDestination(63745U);
    msg.setDestinationEntity(52U);
    msg.x = 0.178890401643;
    msg.y = 0.765091104845;
    msg.z = 0.639700691795;
    msg.k = 0.230357053523;
    msg.m = 0.411570646253;
    msg.n = 0.656122015853;
    msg.flags = 17U;

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
    msg.setTimeStamp(0.941932850423);
    msg.setSource(13335U);
    msg.setSourceEntity(13U);
    msg.setDestination(41876U);
    msg.setDestinationEntity(35U);
    msg.x = 0.0979086165188;
    msg.y = 0.99506930322;
    msg.z = 0.785237678621;
    msg.k = 0.13930613608;
    msg.m = 0.511780258238;
    msg.n = 0.826106539403;
    msg.flags = 93U;

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
    msg.setTimeStamp(0.51960188419);
    msg.setSource(38336U);
    msg.setSourceEntity(35U);
    msg.setDestination(33900U);
    msg.setDestinationEntity(217U);
    msg.x = 0.894558766925;
    msg.y = 0.405864141881;
    msg.z = 0.0122631718853;
    msg.k = 0.38201269455;
    msg.m = 0.0254997454593;
    msg.n = 0.834312346838;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.497746369594);
    msg.setSource(32994U);
    msg.setSourceEntity(147U);
    msg.setDestination(25754U);
    msg.setDestinationEntity(51U);
    msg.value = 0.94575412421;

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
    msg.setTimeStamp(0.554424335444);
    msg.setSource(23451U);
    msg.setSourceEntity(61U);
    msg.setDestination(33817U);
    msg.setDestinationEntity(170U);
    msg.value = 0.492609565555;

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
    msg.setTimeStamp(0.946153920745);
    msg.setSource(11166U);
    msg.setSourceEntity(123U);
    msg.setDestination(26295U);
    msg.setDestinationEntity(153U);
    msg.value = 0.303245080825;

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
    msg.setTimeStamp(0.944706665437);
    msg.setSource(44809U);
    msg.setSourceEntity(187U);
    msg.setDestination(26118U);
    msg.setDestinationEntity(183U);
    msg.u = 0.768591313264;
    msg.v = 0.104746655753;
    msg.w = 0.0040728316688;
    msg.p = 0.309807483792;
    msg.q = 0.390569343427;
    msg.r = 0.237219007488;
    msg.flags = 199U;

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
    msg.setTimeStamp(0.338142664949);
    msg.setSource(33797U);
    msg.setSourceEntity(128U);
    msg.setDestination(51909U);
    msg.setDestinationEntity(216U);
    msg.u = 0.775974507618;
    msg.v = 0.0975879857807;
    msg.w = 0.695727797986;
    msg.p = 0.875349032416;
    msg.q = 0.644548756645;
    msg.r = 0.0309904891279;
    msg.flags = 146U;

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
    msg.setTimeStamp(0.494843413331);
    msg.setSource(12050U);
    msg.setSourceEntity(50U);
    msg.setDestination(26960U);
    msg.setDestinationEntity(59U);
    msg.u = 0.132886764166;
    msg.v = 0.816044833083;
    msg.w = 0.443484945861;
    msg.p = 0.286576571035;
    msg.q = 0.621647008949;
    msg.r = 0.177612517192;
    msg.flags = 198U;

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
    msg.setTimeStamp(0.984878840426);
    msg.setSource(21700U);
    msg.setSourceEntity(226U);
    msg.setDestination(52397U);
    msg.setDestinationEntity(201U);
    msg.start_lat = 0.0233347548605;
    msg.start_lon = 0.517487345528;
    msg.start_z = 0.198428152589;
    msg.start_z_units = 46U;
    msg.end_lat = 0.907385520321;
    msg.end_lon = 0.310250927416;
    msg.end_z = 0.714124011179;
    msg.end_z_units = 73U;
    msg.lradius = 0.867356452104;
    msg.flags = 155U;
    msg.x = 0.788136277077;
    msg.y = 0.374370547048;
    msg.z = 0.513691674655;
    msg.vx = 0.478818647906;
    msg.vy = 0.690081838636;
    msg.vz = 0.650888788825;
    msg.course_error = 0.744918370444;
    msg.eta = 65464U;

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
    msg.setTimeStamp(0.653886707142);
    msg.setSource(26761U);
    msg.setSourceEntity(178U);
    msg.setDestination(3007U);
    msg.setDestinationEntity(104U);
    msg.start_lat = 0.202214499422;
    msg.start_lon = 0.312961451454;
    msg.start_z = 0.423973116011;
    msg.start_z_units = 157U;
    msg.end_lat = 0.0287342548387;
    msg.end_lon = 0.913677722503;
    msg.end_z = 0.675804745568;
    msg.end_z_units = 154U;
    msg.lradius = 0.864524225875;
    msg.flags = 80U;
    msg.x = 0.191661755902;
    msg.y = 0.291253435756;
    msg.z = 0.676678141766;
    msg.vx = 0.656240235663;
    msg.vy = 0.439534441667;
    msg.vz = 0.902229668896;
    msg.course_error = 0.680382723998;
    msg.eta = 55169U;

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
    msg.setTimeStamp(0.708699034907);
    msg.setSource(43210U);
    msg.setSourceEntity(154U);
    msg.setDestination(14770U);
    msg.setDestinationEntity(229U);
    msg.start_lat = 0.189290706507;
    msg.start_lon = 0.85081422889;
    msg.start_z = 0.45411415824;
    msg.start_z_units = 213U;
    msg.end_lat = 0.792295315269;
    msg.end_lon = 0.854515745469;
    msg.end_z = 0.290853106409;
    msg.end_z_units = 183U;
    msg.lradius = 0.585732957817;
    msg.flags = 69U;
    msg.x = 0.754063519444;
    msg.y = 0.710696597583;
    msg.z = 0.7920904118;
    msg.vx = 0.696940160987;
    msg.vy = 0.922761726986;
    msg.vz = 0.253822299273;
    msg.course_error = 0.107306995896;
    msg.eta = 61037U;

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
    msg.setTimeStamp(0.381208747871);
    msg.setSource(42522U);
    msg.setSourceEntity(4U);
    msg.setDestination(48476U);
    msg.setDestinationEntity(17U);
    msg.k = 0.745033388862;
    msg.m = 0.503650595006;
    msg.n = 0.150505150789;

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
    msg.setTimeStamp(0.716951298463);
    msg.setSource(25639U);
    msg.setSourceEntity(160U);
    msg.setDestination(50336U);
    msg.setDestinationEntity(118U);
    msg.k = 0.722092841437;
    msg.m = 0.911821597611;
    msg.n = 0.759329080802;

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
    msg.setTimeStamp(0.979276319759);
    msg.setSource(46592U);
    msg.setSourceEntity(170U);
    msg.setDestination(52468U);
    msg.setDestinationEntity(239U);
    msg.k = 0.0963255125895;
    msg.m = 0.477807024006;
    msg.n = 0.751613609353;

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
    msg.setTimeStamp(0.358063848525);
    msg.setSource(53681U);
    msg.setSourceEntity(48U);
    msg.setDestination(49974U);
    msg.setDestinationEntity(222U);
    msg.p = 0.744630896274;
    msg.i = 0.726571145699;
    msg.d = 0.374717718479;
    msg.a = 0.966690038874;

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
    msg.setTimeStamp(0.815382296086);
    msg.setSource(61576U);
    msg.setSourceEntity(121U);
    msg.setDestination(42701U);
    msg.setDestinationEntity(51U);
    msg.p = 0.0218892488822;
    msg.i = 0.790394856171;
    msg.d = 0.459261815989;
    msg.a = 0.449442359426;

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
    msg.setTimeStamp(0.76361396439);
    msg.setSource(24424U);
    msg.setSourceEntity(205U);
    msg.setDestination(45617U);
    msg.setDestinationEntity(208U);
    msg.p = 0.256772590595;
    msg.i = 0.0890752466579;
    msg.d = 0.885847348417;
    msg.a = 0.455687505854;

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
    msg.setTimeStamp(0.866412327676);
    msg.setSource(44292U);
    msg.setSourceEntity(111U);
    msg.setDestination(10374U);
    msg.setDestinationEntity(235U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.0506521816622);
    msg.setSource(38053U);
    msg.setSourceEntity(155U);
    msg.setDestination(14958U);
    msg.setDestinationEntity(209U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.101963858522);
    msg.setSource(19262U);
    msg.setSourceEntity(49U);
    msg.setDestination(30750U);
    msg.setDestinationEntity(57U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.920204454451);
    msg.setSource(50125U);
    msg.setSourceEntity(237U);
    msg.setDestination(62506U);
    msg.setDestinationEntity(44U);
    msg.timeout = 34255U;
    msg.lat = 0.445983780441;
    msg.lon = 0.539129913961;
    msg.z = 0.907496629994;
    msg.z_units = 71U;
    msg.speed = 0.565506154517;
    msg.speed_units = 82U;
    msg.roll = 0.329262787767;
    msg.pitch = 0.414555630016;
    msg.yaw = 0.445733377341;
    msg.custom.assign("FLIMEFFPDXJTJHYLDZKHIKXIZSWCOGHNWYLAGMRCPXWYNBCIZANYLUYQMSHBTEQEGCNZDWKZJRQPIVLPUUFIGSGLUBODCSZMVFRHDDICYJQLZNSGQNQHAVLEKSBFARJENMRX");

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
    msg.setTimeStamp(0.502197836791);
    msg.setSource(55948U);
    msg.setSourceEntity(97U);
    msg.setDestination(34874U);
    msg.setDestinationEntity(244U);
    msg.timeout = 26151U;
    msg.lat = 0.168747459652;
    msg.lon = 0.27729157885;
    msg.z = 0.911125535686;
    msg.z_units = 105U;
    msg.speed = 0.311405126608;
    msg.speed_units = 162U;
    msg.roll = 0.297434411333;
    msg.pitch = 0.85181464091;
    msg.yaw = 0.560327923836;
    msg.custom.assign("GWRZLLEOOEYURHRLNMUIFYQHWTXLNNAKJWQSJTZLWXLKEODMSPEVMANJCFNOAUKVEAPSZNNVKUXOZAOCIDVFSBYDDXFTHWATGITXSWBCGTGRHLSEHGHFUEAPXCXMGWHGBYUXJMDFDZKDBVLKBQSXOMBTUAUWRSAWUGCMJMJQMYVBTILGIJMPOKWPHKVZINBYJPDTZEPICJZNBPVRJEKQCPSF");

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
    msg.setTimeStamp(0.959079133247);
    msg.setSource(41527U);
    msg.setSourceEntity(144U);
    msg.setDestination(34116U);
    msg.setDestinationEntity(237U);
    msg.timeout = 24918U;
    msg.lat = 0.634647777184;
    msg.lon = 0.955333518268;
    msg.z = 0.685895215931;
    msg.z_units = 72U;
    msg.speed = 0.0623740807741;
    msg.speed_units = 23U;
    msg.roll = 0.272270520534;
    msg.pitch = 0.207184017855;
    msg.yaw = 0.132744208276;
    msg.custom.assign("XNOJAJWRQZMLJFFSZCVAGLLJNFCRQWDQBKYCTODDAMKQRBMQDPNMWNTIRSSZSPVLYDZAOSHHXWQJVPBGHYNXAEDJUVJUBYSSIKKCZHAJNUKATPWTBUMXKBYREYTELXQTWIKGKDSRPGFZEEFKBTLHFARZMOHTLEGMRZEEPNIWOSRCWEVDNXDLPVOCJUTLXHQDHCLAOGKFIUWUFMZIVEUVBMWYCOXTYSPFONXB");

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
    msg.setTimeStamp(0.61375872001);
    msg.setSource(46196U);
    msg.setSourceEntity(123U);
    msg.setDestination(47071U);
    msg.setDestinationEntity(16U);
    msg.timeout = 3927U;
    msg.lat = 0.125665929162;
    msg.lon = 0.714783420298;
    msg.z = 0.860336831011;
    msg.z_units = 51U;
    msg.speed = 0.224111788989;
    msg.speed_units = 5U;
    msg.duration = 47855U;
    msg.radius = 0.105266987439;
    msg.flags = 78U;
    msg.custom.assign("ODBHWGTLXGRP");

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
    msg.setTimeStamp(0.841978077718);
    msg.setSource(51116U);
    msg.setSourceEntity(23U);
    msg.setDestination(37336U);
    msg.setDestinationEntity(253U);
    msg.timeout = 21521U;
    msg.lat = 0.776085145956;
    msg.lon = 0.976552957456;
    msg.z = 0.155111098808;
    msg.z_units = 118U;
    msg.speed = 0.794951767057;
    msg.speed_units = 30U;
    msg.duration = 22710U;
    msg.radius = 0.656247287221;
    msg.flags = 18U;
    msg.custom.assign("XURVHLUGGOXKMNJTCIIRPGKILXNEPPEJWSGKVZZNCONXTCYVYFCQOKIBUYOMHEWCZABWDZCMSTEOTWKLZMYZPFDQQQZPSFOKUFQJLPEWYAUFZTDOKOUPORLFDDFBMICTDGKKSYBEANHHQVRYGUXCTYICHGVYWJIEXRQBMJWRXFLBATSNQIAZ");

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
    msg.setTimeStamp(0.823063173607);
    msg.setSource(9935U);
    msg.setSourceEntity(52U);
    msg.setDestination(39636U);
    msg.setDestinationEntity(160U);
    msg.timeout = 41548U;
    msg.lat = 0.821434457471;
    msg.lon = 0.285575547187;
    msg.z = 0.763885791487;
    msg.z_units = 94U;
    msg.speed = 0.212357881722;
    msg.speed_units = 28U;
    msg.duration = 9506U;
    msg.radius = 0.139604364491;
    msg.flags = 162U;
    msg.custom.assign("CDZJRRJKHAXXUHQQTIUQLGHKNHHBIZHDLDKZSPKFOLFWFOMYENNGYPSCVSXEGRJDVZEUPPCPWEKSWDFEAPLAQWOJEYBIVODVIQVWKNFTUQIGJLZCBJGCQXMOAIYNKHZGPSDOTRBFXCFGUIABEYTPWHMTRREJXXNBMVVGAZDSIXDZAWYYQWNMHCTUIPYLRIUMOMOVFSKLLYARKSGVRWVFWTBUTNDQBTOLXSUXPJF");

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
    msg.setTimeStamp(0.613644703661);
    msg.setSource(26597U);
    msg.setSourceEntity(105U);
    msg.setDestination(63368U);
    msg.setDestinationEntity(34U);
    msg.custom.assign("OXAMLISJHHNBSWGUALTESAJASRSUHUOGLQACKWNNJBXDGAJPTZIGGEWBYXPLKWUGZEPQRKMJNRGGCIDVMKSKZQKPKFEIETURXUTWZWDFVYKNFOROYCFFFUXIQBNHIQNSLLDVBZOFRKCCEMLVGQRQYMEODPBPJAAPTXHSWXCQVHGVZATCDWSP");

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
    msg.setTimeStamp(0.289623621718);
    msg.setSource(7657U);
    msg.setSourceEntity(18U);
    msg.setDestination(990U);
    msg.setDestinationEntity(101U);
    msg.custom.assign("NWADNEIXOWQIUSLEYABBGGWEUTHCLUCTNVSSDQNBMYPDRHFBJPZNZHMDEIJCCBUYCPGAZYCCFLJDHVWOJFRQKPGWBMOJXTMVHBOKIEHCRFSOGWFILQTBXVNWSPXSKLSAOTELZFKJDTXZHLJJUYEFQXOVLCEGTAEKAQRRGIIVQDQOFLGAMWYYUKBSKRPBQZKHOJGNPWTIILXXAERMNNO");

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
    msg.setTimeStamp(0.709260749344);
    msg.setSource(61333U);
    msg.setSourceEntity(244U);
    msg.setDestination(7304U);
    msg.setDestinationEntity(24U);
    msg.custom.assign("ZHWVFGHYPYAXHLXJBWHMQFBELFTHCEPGPZBUOAFWIPIQSDUUIYJNNDDSSOIHMQMJCLSCXJWGBDWPEMTTRARGMPKZXGINDINDVHSDBIGPQKTCYLXCYTLCBKTDAJGURIZ");

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
    msg.setTimeStamp(0.0138040541634);
    msg.setSource(42789U);
    msg.setSourceEntity(124U);
    msg.setDestination(59967U);
    msg.setDestinationEntity(182U);
    msg.timeout = 32433U;
    msg.lat = 0.587688416218;
    msg.lon = 0.573361419043;
    msg.z = 0.501378455737;
    msg.z_units = 10U;
    msg.duration = 10029U;
    msg.speed = 0.023939031845;
    msg.speed_units = 133U;
    msg.type = 22U;
    msg.radius = 0.373957812475;
    msg.length = 0.307076959267;
    msg.bearing = 0.0727529942383;
    msg.direction = 59U;
    msg.custom.assign("KTYZUAWSEHFMMTYOPJGNUTGUWIXCCXJAKJIYLYQCNCGHKHZGCPBDKSIIEIUGFPVFSRNTDHKPZZULRBYHBGREDKHZIUWSDOMQBNEXXJHNILUMMGZGOKXAETSEWUFILSJXYCRNWARPMFIDYLFBBYZQSWPNVKVLXAOYXRQCVRVPEVZDZATCNBLFDXJNMVAVMKKSDRPJXGQNRJQHPLHMWDDTISOCOJAOBFGJMAUWBLOT");

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
    msg.setTimeStamp(0.107774347501);
    msg.setSource(13890U);
    msg.setSourceEntity(123U);
    msg.setDestination(16380U);
    msg.setDestinationEntity(44U);
    msg.timeout = 29556U;
    msg.lat = 0.0800347521536;
    msg.lon = 0.867310094144;
    msg.z = 0.0029109549458;
    msg.z_units = 118U;
    msg.duration = 47030U;
    msg.speed = 0.509045955763;
    msg.speed_units = 252U;
    msg.type = 175U;
    msg.radius = 0.343772915922;
    msg.length = 0.52345555352;
    msg.bearing = 0.0367006353134;
    msg.direction = 21U;
    msg.custom.assign("SZKAYJFZXJYOTPDUQSQCGERAFVLZUOSRXXVFHPAUHKRBJBHPVQYTAZYYWXWJNKAYCDWYIUMKMZHDDPGXYXLBWEIIGXQYXHGPBRATHHHYNCJVJVWOGBUQISDIPWHPMECGXFJPFRIRQNMOLLTRBGKSJZWEGNGSVAWKORWNOMTJGLZQDIUQXDMIUKEDTNSFJPUBVECQOHKATNKSLVUIQEFDCRIBCMVTFMLNEOAC");

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
    msg.setTimeStamp(0.617332550813);
    msg.setSource(21058U);
    msg.setSourceEntity(191U);
    msg.setDestination(48580U);
    msg.setDestinationEntity(87U);
    msg.timeout = 10710U;
    msg.lat = 0.613477152405;
    msg.lon = 0.180025422449;
    msg.z = 0.498651267169;
    msg.z_units = 119U;
    msg.duration = 37012U;
    msg.speed = 0.0388430196427;
    msg.speed_units = 155U;
    msg.type = 179U;
    msg.radius = 0.0768473503385;
    msg.length = 0.0957974258966;
    msg.bearing = 0.970122137008;
    msg.direction = 102U;
    msg.custom.assign("BOSLANULYFZRQWQVJFIZKBPGKLYAKXXRZKUXTCHDZIGSBRSDLRWXPFOYQGFUOTMEIWZDMSGMGUWBUTPGCIFXEJYQPYQNGDSEEFNDTOOYHJPLYDHWVLWZMDYMNTIMDHRBR");

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
    msg.setTimeStamp(0.978767556108);
    msg.setSource(28573U);
    msg.setSourceEntity(105U);
    msg.setDestination(13209U);
    msg.setDestinationEntity(27U);
    msg.duration = 53693U;
    msg.custom.assign("JNXBBIGXHFEMTPZPXUOMGIPOUSZZMVBQUOQHTNGNJKASOMWUJGLIGMTYDQRLCMRUVXRFDKOESBEVJLCLRZUXQHJWFJNYYABGTKOBGKNNBWBHTCLLGDPLTSYWAERYKQFKTHFZECCMZPUQWYNDGAPNJCBRGJDHXYZKDWNAIVARIMEHEFOVH");

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
    msg.setTimeStamp(0.530315392022);
    msg.setSource(20023U);
    msg.setSourceEntity(25U);
    msg.setDestination(31107U);
    msg.setDestinationEntity(166U);
    msg.duration = 34177U;
    msg.custom.assign("DBSXWORPMZXYOWYNFUZUFGZKXABLHAFTIVSBNRSZDIKQHEEWVTLUDFLUHSEPJIWJCZEEDGFGAQYQBYZJLWRCQITPEEFCYYAUNRDXPDTXMSBBQTVDQU");

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
    msg.setTimeStamp(0.22231900846);
    msg.setSource(43183U);
    msg.setSourceEntity(18U);
    msg.setDestination(17153U);
    msg.setDestinationEntity(74U);
    msg.duration = 51104U;
    msg.custom.assign("CTNQCRFMOXYHNJZSDEDRYLBVWEFUUZFZLIPLKHPWQ");

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
    msg.setTimeStamp(0.218659419815);
    msg.setSource(45045U);
    msg.setSourceEntity(81U);
    msg.setDestination(38473U);
    msg.setDestinationEntity(132U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.571671582408;
    tmp_msg_0.z_units = 217U;
    msg.control.set(tmp_msg_0);
    msg.duration = 17241U;
    msg.custom.assign("NBSGNGXDZQKTKNXRASMITLXJZAIFCNDBTYVW");

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
    msg.setTimeStamp(0.210890491144);
    msg.setSource(27995U);
    msg.setSourceEntity(67U);
    msg.setDestination(57163U);
    msg.setDestinationEntity(99U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.582922348754;
    tmp_msg_0.z_units = 248U;
    msg.control.set(tmp_msg_0);
    msg.duration = 50195U;
    msg.custom.assign("UCCLQKQCNJLDGOXAEJKRTUZEFXMSTXHILUETGJPZGOFYFZCWUBGTRMGOIRVKUWNLQECXQLXWMDEOMATJHXKIYVHWGMPSNFTBELJONPFJTRPYAUVZIKJHOIRZQBQMDUCHDHKAVNYO");

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
    msg.setTimeStamp(0.49364150038);
    msg.setSource(27659U);
    msg.setSourceEntity(117U);
    msg.setDestination(2450U);
    msg.setDestinationEntity(230U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.451652272453;
    msg.control.set(tmp_msg_0);
    msg.duration = 26193U;
    msg.custom.assign("UPSCVIVKZRFXVVYKGCRSLLDBOIFETTDWESOUBHPXNUIRNREKNEUICVGNDAEHTOJIDYMMVBMDCQQFIWOJYHQZOSYAPMJUEAYARWXXRDJMFCTJJLPCETHQFBBYRBDGNXKZKJZPSAXRNZBLJOQMQWHZIBNTOBODWMYNYUSXKUADLLGU");

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
    msg.setTimeStamp(0.530328767448);
    msg.setSource(57354U);
    msg.setSourceEntity(167U);
    msg.setDestination(58734U);
    msg.setDestinationEntity(160U);
    msg.timeout = 59639U;
    msg.lat = 0.901485763019;
    msg.lon = 0.562725917516;
    msg.z = 0.37627016104;
    msg.z_units = 82U;
    msg.speed = 0.919085319219;
    msg.speed_units = 169U;
    msg.bearing = 0.406736408168;
    msg.cross_angle = 0.898515078047;
    msg.width = 0.173349198412;
    msg.length = 0.928777908491;
    msg.hstep = 0.448069725577;
    msg.coff = 109U;
    msg.alternation = 26U;
    msg.flags = 85U;
    msg.custom.assign("UKUNIFBUDWGKQAYWWWTGSFSXVHZHCXYGIYWMEFLCNXUJPBRHMZKCN");

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
    msg.setTimeStamp(0.995982450772);
    msg.setSource(34983U);
    msg.setSourceEntity(142U);
    msg.setDestination(41886U);
    msg.setDestinationEntity(220U);
    msg.timeout = 24022U;
    msg.lat = 0.789828553821;
    msg.lon = 0.609265695086;
    msg.z = 0.623182239904;
    msg.z_units = 254U;
    msg.speed = 0.414010367932;
    msg.speed_units = 193U;
    msg.bearing = 0.314928945943;
    msg.cross_angle = 0.455781224843;
    msg.width = 0.11016241856;
    msg.length = 0.127775101444;
    msg.hstep = 0.275223502377;
    msg.coff = 84U;
    msg.alternation = 45U;
    msg.flags = 20U;
    msg.custom.assign("CMSCIXGYZRRLIYZEXANCXZKJBTUEHKMYLAVWCO");

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
    msg.setTimeStamp(0.991975115345);
    msg.setSource(41539U);
    msg.setSourceEntity(41U);
    msg.setDestination(35467U);
    msg.setDestinationEntity(207U);
    msg.timeout = 2881U;
    msg.lat = 0.108396541626;
    msg.lon = 0.658939509613;
    msg.z = 0.936893349364;
    msg.z_units = 88U;
    msg.speed = 0.644857249184;
    msg.speed_units = 235U;
    msg.bearing = 0.927253434886;
    msg.cross_angle = 0.498292467788;
    msg.width = 0.58388881584;
    msg.length = 0.583027174286;
    msg.hstep = 0.496338282349;
    msg.coff = 201U;
    msg.alternation = 126U;
    msg.flags = 25U;
    msg.custom.assign("YIDBJBSJJMEGRCZHGNBPDFDPDLLPSLBXSQPSEISIQOMJKSBGFVZQYVNYUZEUWVAZCZWREGN");

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
    msg.setTimeStamp(0.232627939626);
    msg.setSource(34655U);
    msg.setSourceEntity(168U);
    msg.setDestination(47837U);
    msg.setDestinationEntity(8U);
    msg.timeout = 3020U;
    msg.lat = 0.914877675212;
    msg.lon = 0.700482658439;
    msg.z = 0.998109390418;
    msg.z_units = 39U;
    msg.speed = 0.815971081021;
    msg.speed_units = 176U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.408846304461;
    tmp_msg_0.y = 0.904944894461;
    tmp_msg_0.z = 0.263817813441;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NMUEFCZNNORSPXAZFXKYOUVAWBMPIJBEKHAMGOXIMLRZDDPAKDFKVJWYZGZTIQRHOTXOVQVGJOEDHBGDLAQCPDVBTAUUMFCJKQRLNMRATECXCVL");

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
    msg.setTimeStamp(0.0375435918518);
    msg.setSource(57269U);
    msg.setSourceEntity(249U);
    msg.setDestination(27330U);
    msg.setDestinationEntity(56U);
    msg.timeout = 10511U;
    msg.lat = 0.713097090619;
    msg.lon = 0.229303617997;
    msg.z = 0.524142109458;
    msg.z_units = 62U;
    msg.speed = 0.29446362455;
    msg.speed_units = 112U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.932447955144;
    tmp_msg_0.y = 0.31650463071;
    tmp_msg_0.z = 0.532497440024;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MSBZWFQILHGDXZTYNCDJOPFWQGUVEKOJUGQDCBJISVFJWMLGMDEOREJQZKKXCBLNAYLPKBBNQCSWZZTEWAUISNYSPSTOUMMMOURQYGHXIRKQEYBGLTIAQEWHLIBEHCDXAMCPXRAGYITUMFHDAHRWHJNCZRYKYIAPJTZHFDFSOLSURAKVKKJCZTNKUNPLFYHWVNRBZICFNLEVEVG");

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
    msg.setTimeStamp(0.699262924128);
    msg.setSource(59496U);
    msg.setSourceEntity(67U);
    msg.setDestination(55562U);
    msg.setDestinationEntity(153U);
    msg.timeout = 24881U;
    msg.lat = 0.864856926377;
    msg.lon = 0.12798426023;
    msg.z = 0.165591205859;
    msg.z_units = 56U;
    msg.speed = 0.797284903388;
    msg.speed_units = 202U;
    msg.custom.assign("EMHPSWCJIQHZBMKLJKZQZRTKLMGNGZZCKPCVDHSYZIMFOPWEQELDJXMUVQNXWBUVPHGTNWLPAALNEBRIOICOLFDFVI");

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
    msg.setTimeStamp(0.547188847181);
    msg.setSource(17U);
    msg.setSourceEntity(179U);
    msg.setDestination(30136U);
    msg.setDestinationEntity(89U);
    msg.x = 0.383950289428;
    msg.y = 0.504655228246;
    msg.z = 0.423700475143;

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
    msg.setTimeStamp(0.200485353481);
    msg.setSource(54438U);
    msg.setSourceEntity(22U);
    msg.setDestination(10499U);
    msg.setDestinationEntity(248U);
    msg.x = 0.154483102351;
    msg.y = 0.660167265348;
    msg.z = 0.917586606473;

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
    msg.setTimeStamp(0.232992791154);
    msg.setSource(29401U);
    msg.setSourceEntity(81U);
    msg.setDestination(478U);
    msg.setDestinationEntity(176U);
    msg.x = 0.152242261294;
    msg.y = 0.965545925018;
    msg.z = 0.129055549078;

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
    msg.setTimeStamp(0.0335076324548);
    msg.setSource(23795U);
    msg.setSourceEntity(151U);
    msg.setDestination(37818U);
    msg.setDestinationEntity(102U);
    msg.timeout = 62275U;
    msg.lat = 0.760262636965;
    msg.lon = 0.704997942913;
    msg.z = 0.848526919989;
    msg.z_units = 218U;
    msg.amplitude = 0.428581768176;
    msg.pitch = 0.732145077477;
    msg.speed = 0.767434474728;
    msg.speed_units = 238U;
    msg.custom.assign("LOJCYTCIQULK");

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
    msg.setTimeStamp(0.581837729881);
    msg.setSource(22832U);
    msg.setSourceEntity(145U);
    msg.setDestination(27481U);
    msg.setDestinationEntity(170U);
    msg.timeout = 55117U;
    msg.lat = 0.518702863825;
    msg.lon = 0.168502496304;
    msg.z = 0.60730820659;
    msg.z_units = 146U;
    msg.amplitude = 0.943596488853;
    msg.pitch = 0.619468753799;
    msg.speed = 0.621409399094;
    msg.speed_units = 108U;
    msg.custom.assign("BEMZNFBDMAZ");

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
    msg.setTimeStamp(0.0171596340962);
    msg.setSource(30276U);
    msg.setSourceEntity(123U);
    msg.setDestination(937U);
    msg.setDestinationEntity(21U);
    msg.timeout = 20001U;
    msg.lat = 0.56520259334;
    msg.lon = 0.83311165853;
    msg.z = 0.538704881639;
    msg.z_units = 133U;
    msg.amplitude = 0.380013617096;
    msg.pitch = 0.994830737102;
    msg.speed = 0.91198599107;
    msg.speed_units = 254U;
    msg.custom.assign("WSHABXJLGVJHCFSWZDMRXAINJCBLWKESKXTCPQBMIDUDCRWZLESKAHROJDFFDIDGMWKWDKHTPSXZRJZNNEDGPBPQUGAIERXFTEKMOIAATVULTUIHHWLEADYXLQKRNOUMVBBCYOPTYNNCTZUOZULTZMNFHJRQJPJOROVTKMNHYUAQJGQAEHMCSUMFXXBFGNWVIZVGVZVBYRPTOPGGVLISQWFLQPENQY");

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
    msg.setTimeStamp(0.853823465179);
    msg.setSource(35011U);
    msg.setSourceEntity(84U);
    msg.setDestination(16510U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.866071344088);
    msg.setSource(50807U);
    msg.setSourceEntity(38U);
    msg.setDestination(21061U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.5850195752);
    msg.setSource(25931U);
    msg.setSourceEntity(111U);
    msg.setDestination(38460U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.294297906618);
    msg.setSource(25865U);
    msg.setSourceEntity(66U);
    msg.setDestination(65530U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.899210599677;
    msg.lon = 0.299138176838;
    msg.z = 0.923141627359;
    msg.z_units = 171U;
    msg.radius = 0.507024750441;
    msg.duration = 17131U;
    msg.speed = 0.834213337418;
    msg.speed_units = 2U;
    msg.custom.assign("NCRXEAVGLIKKTNXVVOW");

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
    msg.setTimeStamp(0.254408712055);
    msg.setSource(58984U);
    msg.setSourceEntity(195U);
    msg.setDestination(46623U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.395865023138;
    msg.lon = 0.871362325878;
    msg.z = 0.698302592755;
    msg.z_units = 128U;
    msg.radius = 0.341738369671;
    msg.duration = 30566U;
    msg.speed = 0.527321199774;
    msg.speed_units = 85U;
    msg.custom.assign("PMMTPNYHYDWWVJFHZABKVITJQTKLFBQMXASDYYPMNROTOVSGBETCJTFGIVONGIAUWHVKDQZXLQWVJVZLBSDEXKZCDHYHCPWXOURAOVJWGFGIFVLIOLSPANIUNHRXZURDZOYEOI");

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
    msg.setTimeStamp(0.847881914939);
    msg.setSource(18108U);
    msg.setSourceEntity(15U);
    msg.setDestination(16040U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.685010926597;
    msg.lon = 0.767061212358;
    msg.z = 0.215872044041;
    msg.z_units = 103U;
    msg.radius = 0.705823315627;
    msg.duration = 56738U;
    msg.speed = 0.905870741644;
    msg.speed_units = 222U;
    msg.custom.assign("YPFQUOFOTKCBVGIYLYDEQYMXXKAXUASYBRSSAJXMCPSVIKTAGABCPYZJVKCJFSHGFQFGDRMGIAFWTIJVHWTZEDRNHLKMCWQJHQLAYWCNGZQHSJQFISGCRUHLOWULPHLHBXFREXPDNNBDAJKZOVVOYUSIKTUMTQDXOEXBDHMAAWKWLONOBYFRXLEDRTEVTZWZZPVNQPWOUPTMIDEECLIOCLDHFMNJMYUEZWSKP");

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
    msg.setTimeStamp(0.163908472698);
    msg.setSource(47609U);
    msg.setSourceEntity(67U);
    msg.setDestination(17227U);
    msg.setDestinationEntity(104U);
    msg.timeout = 28835U;
    msg.flags = 216U;
    msg.lat = 0.835624470086;
    msg.lon = 0.872132973179;
    msg.start_z = 0.550615537361;
    msg.start_z_units = 200U;
    msg.end_z = 0.0452051206393;
    msg.end_z_units = 241U;
    msg.radius = 0.522479910443;
    msg.speed = 0.986277802106;
    msg.speed_units = 248U;
    msg.custom.assign("PNGKSMYPVGPWFJWRSPQYJGEPRBIONYQSOFPRVFDKMBQOHZDYRMJWLPUQCUOIISCSTRNUIAAYGHAIUTBJUMLVVTMLRKSVQELFIDTBHAEDNYBOQCLCWKNQOWXUVYMBWRQBBBEZPXHDEQFRCBJYFYLGZEHFDXIFVIZZC");

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
    msg.setTimeStamp(0.036585148657);
    msg.setSource(23986U);
    msg.setSourceEntity(68U);
    msg.setDestination(52541U);
    msg.setDestinationEntity(55U);
    msg.timeout = 50457U;
    msg.flags = 116U;
    msg.lat = 0.31739506343;
    msg.lon = 0.268955032545;
    msg.start_z = 0.0833647024439;
    msg.start_z_units = 13U;
    msg.end_z = 0.943136603874;
    msg.end_z_units = 127U;
    msg.radius = 0.0976788153906;
    msg.speed = 0.352145437952;
    msg.speed_units = 230U;
    msg.custom.assign("TMADALRVSWFCDUHDQRLAPLKOHWCGLGEBNEKIEVBTTJERNWZPETBRBQSUFLYPK");

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
    msg.setTimeStamp(0.0748077287617);
    msg.setSource(38788U);
    msg.setSourceEntity(125U);
    msg.setDestination(62093U);
    msg.setDestinationEntity(193U);
    msg.timeout = 36055U;
    msg.flags = 246U;
    msg.lat = 0.990453586121;
    msg.lon = 0.753778157071;
    msg.start_z = 0.159718700495;
    msg.start_z_units = 177U;
    msg.end_z = 0.0364065819893;
    msg.end_z_units = 97U;
    msg.radius = 0.572536800177;
    msg.speed = 0.334582183835;
    msg.speed_units = 185U;
    msg.custom.assign("TNIECNYSGYGEPKGHYKTZZPPLVNAUWXSZFQABBXFSBKSKJWJBCEFJJCYBPTZZISNDTQIHEJONILEVOUNAVMRZREXOILXDUUGPQAMOMDZWGLPBNUOMHSULYVMFTRZGAQRXHTYOMUEUSYJPIVAFWOVFTVSHNVPIQRFQEBYJDRCFTLRSDGDCKIWBHOSCKXTIWXQLYXJCXFGHMR");

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
    msg.setTimeStamp(0.000911062960182);
    msg.setSource(55827U);
    msg.setSourceEntity(137U);
    msg.setDestination(42710U);
    msg.setDestinationEntity(14U);
    msg.timeout = 17519U;
    msg.lat = 0.693771350467;
    msg.lon = 0.37112585313;
    msg.z = 0.391854545491;
    msg.z_units = 214U;
    msg.speed = 0.774933853863;
    msg.speed_units = 208U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.534636463697;
    tmp_msg_0.y = 0.30480073869;
    tmp_msg_0.z = 0.840353358796;
    tmp_msg_0.t = 0.783816966715;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SFMIMQORQUSOBUTRZDQWGFTWFLPXYECVKKIYUCAAJVQDBCWOOGFSLIFKHCISFPLCAIXDUNGZWRRCMJOG");

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
    msg.setTimeStamp(0.824189460457);
    msg.setSource(56920U);
    msg.setSourceEntity(105U);
    msg.setDestination(59029U);
    msg.setDestinationEntity(54U);
    msg.timeout = 13153U;
    msg.lat = 0.288471115176;
    msg.lon = 0.739480322356;
    msg.z = 0.112365777217;
    msg.z_units = 126U;
    msg.speed = 0.0955066421451;
    msg.speed_units = 54U;
    msg.custom.assign("QWMUMVSEVSVNFSSJJYVHCQPGDINAKXDNHLNWSTIWDUXOVMNCLOLEHATFXMRRJIPFBJZTXKCNMHAJLRCZODZFWPHXVJTUVNAUUYTOZDS");

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
    msg.setTimeStamp(0.381066685865);
    msg.setSource(1596U);
    msg.setSourceEntity(80U);
    msg.setDestination(65002U);
    msg.setDestinationEntity(135U);
    msg.timeout = 56816U;
    msg.lat = 0.309861767277;
    msg.lon = 0.76316638067;
    msg.z = 0.25317806824;
    msg.z_units = 95U;
    msg.speed = 0.810797594843;
    msg.speed_units = 77U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.892181518117;
    tmp_msg_0.y = 0.287230152905;
    tmp_msg_0.z = 0.649149145417;
    tmp_msg_0.t = 0.800064126902;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TITWSGMLUANCFWYHKVGUEGHFMTXMVJIZFSZIRQXHXVSBNVFKJWPYDYZJLJZGSGDCEMWAPLGPJKLUPYTDYCHROOGNRNXYGWFWADHVDTICXNQBLHBHLLJHVCMRNBMQYKEHWTZUSMUXXCPNEFKODTDIERSNVXRVYQEIPORZGJFXUTRZLTNFMAFXUZBEJNKAISZWQAQGQEBLKOUKDPEIKWZAOCWFSIOHDLOEYOBQMQATJCUCOBSMCYRKQ");

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
    msg.setTimeStamp(0.777567522714);
    msg.setSource(4515U);
    msg.setSourceEntity(152U);
    msg.setDestination(63202U);
    msg.setDestinationEntity(148U);
    msg.x = 0.288476515798;
    msg.y = 0.362547982972;
    msg.z = 0.995309487157;
    msg.t = 0.992504803987;

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
    msg.setTimeStamp(0.249938339879);
    msg.setSource(61593U);
    msg.setSourceEntity(35U);
    msg.setDestination(4299U);
    msg.setDestinationEntity(17U);
    msg.x = 0.117509653498;
    msg.y = 0.973016615501;
    msg.z = 0.213173863618;
    msg.t = 0.304452826442;

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
    msg.setTimeStamp(0.0979838298145);
    msg.setSource(16010U);
    msg.setSourceEntity(91U);
    msg.setDestination(62203U);
    msg.setDestinationEntity(35U);
    msg.x = 0.441942212615;
    msg.y = 0.278042593143;
    msg.z = 0.749387010757;
    msg.t = 0.333330069424;

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
    msg.setTimeStamp(0.800248422043);
    msg.setSource(19944U);
    msg.setSourceEntity(15U);
    msg.setDestination(64679U);
    msg.setDestinationEntity(196U);
    msg.timeout = 2373U;
    msg.name.assign("RQKUVAMZOEFMMZKLVJMXMXXTVECNGUIKSKOFGCRZDVYCTHCNSXUYWLIKGMPYOUEADRXLWOOQZNBZUIPKEHRNYWZABPBSIQBLHSJWPTWIXSGBGESQXYMPWPHLYDFIJOUVGJOTALTLGADRQEJQQQRICZKWDGOKDTJMUKYPZNVSTYEIPIBXNCRKHFZAQTHOCWRJTCJOVSJVAPSSXMNXVRRCWEYFGFAPUQHILDYFULWDB");
    msg.custom.assign("BRONBRQYYOAQXTKMCXCC");

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
    msg.setTimeStamp(0.0654079699282);
    msg.setSource(61362U);
    msg.setSourceEntity(237U);
    msg.setDestination(3001U);
    msg.setDestinationEntity(162U);
    msg.timeout = 17666U;
    msg.name.assign("OCHQXKJSKPUPZEXZDURRWMUYVEUNBNRKHUWWZZRWZOIXZGNPJDHISKTMQOXVONYQXJBJXTDVJMFWTYBSBILWQAFGGCCDMCXJABOITWJGNDLAMTVXMOGLLRIQPSHAKBLAYFZ");
    msg.custom.assign("RQZCQSRQKNCYANWPBCMHLHAWDDIVCKXBLUGNHGKLTLYIDJPMTPYYIASPARODSUEZFGBEMQEFNHQGVYVBHZNJIXZIYBZOIGDPPYWRILAJWKWJJZUUWAEOLEFRMEFOQEXONMFXAMTVEUDCMKOUVLB");

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
    msg.setTimeStamp(0.234725092377);
    msg.setSource(9939U);
    msg.setSourceEntity(187U);
    msg.setDestination(44771U);
    msg.setDestinationEntity(91U);
    msg.timeout = 10763U;
    msg.name.assign("QKZDIOQOCTCDSAJDBMSRNALZBYOMZCVZVWKGPXSHJRZVJXSUPUKMUGBIWVLJVIHQWTQCXOBKYIGDQHJTKEBUADFBEURCWXIADODQLUHOLBMYQBIVEMHZRFPVZGGUYXIUWWRNZYFFNAEYIVAVGHSPXOJCPXOXPNHEIETNSTPNFKIOTNKULVHEKWGFRDTBMJMKAQRAJZFESRLSHOEXWPTFQLNFBJPCSRGGMJTTCUXPNFWRYGC");
    msg.custom.assign("LHUZDOABJKCVNSHERMEUTDDZICSPYVDWWAEPEVYONCHTCCOILGORWRMAGBOPGZGDLAHWRSJRGXWATF");

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
    msg.setTimeStamp(0.522216981701);
    msg.setSource(36521U);
    msg.setSourceEntity(115U);
    msg.setDestination(64748U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.939789335271;
    msg.lon = 0.25178206355;
    msg.z = 0.457243547525;
    msg.z_units = 248U;
    msg.speed = 0.711714336669;
    msg.speed_units = 183U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64859U;
    tmp_msg_0.off_x = 0.748651353397;
    tmp_msg_0.off_y = 0.388448647847;
    tmp_msg_0.off_z = 0.590785515636;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.482756712662;
    msg.custom.assign("KVGFHTWNIOMTCQXPFTUSOTRYLEFENZJVKMDTOEYPDUHUMQPFNADKZSQOBHWMMEDKWPXBJXACLUCGJPGLRQDZZYXUVHFHBLQDGWNXWPUZGJUEZWZXIUXWBRRYPYCPQONQZCWKFNHLRTJHANGEIOHNVGTQLJVGJASVGAIPDMANZDNIMCTSIZIOSVWXCFVEMYYIBCQYTLDMBSHREHBXRJERVJOKYFOETAKBSCFSBYLIIKBAADMFUOWLGS");

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
    msg.setTimeStamp(0.182680604312);
    msg.setSource(6305U);
    msg.setSourceEntity(210U);
    msg.setDestination(47709U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.996179674563;
    msg.lon = 0.70917856844;
    msg.z = 0.98175800782;
    msg.z_units = 34U;
    msg.speed = 0.212889290091;
    msg.speed_units = 139U;
    msg.start_time = 0.286474805884;
    msg.custom.assign("CKJIFNRFOSFFNPYNECTNMEAAGBCLDKPXVZYOCQLWDYMIXWADZPRLLCPPEUGWLQOHPVVONQPIXKPRARACAJVUVWHMSREJCDEOGYXXHMGEGHIISSEGZZLKRZOJNFWIXKJIXLKPZOUGYTTOMCVNFRQYQJJGJYBKBZDYNZUYUVAASMSZVNWBUBOTKIJHWFFTMSSMFHADXWIGVXUTRYPAXTHSLEEEUQBKTLJOQVHLHIKMTBUZSWWCDBBUBDQRDND");

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
    msg.setTimeStamp(0.720449721626);
    msg.setSource(57658U);
    msg.setSourceEntity(197U);
    msg.setDestination(62215U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.943713083454;
    msg.lon = 0.128490499734;
    msg.z = 0.0320043164437;
    msg.z_units = 44U;
    msg.speed = 0.177834182997;
    msg.speed_units = 3U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.797626715461;
    tmp_msg_0.y = 0.09940957478;
    tmp_msg_0.z = 0.717412429397;
    tmp_msg_0.t = 0.665388389234;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 30653U;
    tmp_msg_1.off_x = 0.759496542576;
    tmp_msg_1.off_y = 0.991416683367;
    tmp_msg_1.off_z = 0.0611615187493;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.0956298974502;
    msg.custom.assign("DDXZLIYODYSMFTKTPLNTSHHRDLQLVGQXDXQGLEVAMWFTASLKVHUVEARDFMMKGV");

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
    msg.setTimeStamp(0.773820756784);
    msg.setSource(24708U);
    msg.setSourceEntity(48U);
    msg.setDestination(5402U);
    msg.setDestinationEntity(83U);
    msg.vid = 41356U;
    msg.off_x = 0.999517062107;
    msg.off_y = 0.930153052867;
    msg.off_z = 0.982671150883;

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
    msg.setTimeStamp(0.970500307187);
    msg.setSource(34863U);
    msg.setSourceEntity(20U);
    msg.setDestination(58136U);
    msg.setDestinationEntity(145U);
    msg.vid = 23170U;
    msg.off_x = 0.905916421492;
    msg.off_y = 0.485894491195;
    msg.off_z = 0.383128126336;

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
    msg.setTimeStamp(0.897455009926);
    msg.setSource(41752U);
    msg.setSourceEntity(142U);
    msg.setDestination(7278U);
    msg.setDestinationEntity(205U);
    msg.vid = 35887U;
    msg.off_x = 0.272938150049;
    msg.off_y = 0.0661761994346;
    msg.off_z = 0.020867672667;

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
    msg.setTimeStamp(0.462077991783);
    msg.setSource(32250U);
    msg.setSourceEntity(100U);
    msg.setDestination(60521U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.678972581769);
    msg.setSource(46628U);
    msg.setSourceEntity(155U);
    msg.setDestination(6482U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.202907494758);
    msg.setSource(11286U);
    msg.setSourceEntity(54U);
    msg.setDestination(55857U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.36960656659);
    msg.setSource(20917U);
    msg.setSourceEntity(113U);
    msg.setDestination(48792U);
    msg.setDestinationEntity(222U);
    msg.mid = 12455U;

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
    msg.setTimeStamp(0.849898303604);
    msg.setSource(48035U);
    msg.setSourceEntity(17U);
    msg.setDestination(59248U);
    msg.setDestinationEntity(80U);
    msg.mid = 28792U;

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
    msg.setTimeStamp(0.739742341762);
    msg.setSource(45442U);
    msg.setSourceEntity(23U);
    msg.setDestination(47420U);
    msg.setDestinationEntity(246U);
    msg.mid = 11280U;

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
    msg.setTimeStamp(0.139079001006);
    msg.setSource(48728U);
    msg.setSourceEntity(184U);
    msg.setDestination(8896U);
    msg.setDestinationEntity(23U);
    msg.state = 76U;
    msg.eta = 44644U;
    msg.info.assign("HRODHRQUGETOXAMEJZAARIYIVIREQOQFXIGFERNMAXOQGTWLMYGDPRSSIQNURLKUXKMUULMYWCOOXABPWVIBBPJSZCAQLBMTZKHQCWDNCPRHQIWJOATZZZBFFAAFBESULUGXYDU");

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
    msg.setTimeStamp(0.373337726287);
    msg.setSource(4427U);
    msg.setSourceEntity(73U);
    msg.setDestination(55437U);
    msg.setDestinationEntity(101U);
    msg.state = 140U;
    msg.eta = 25976U;
    msg.info.assign("CPIINDZTGKFLPIKDLVWWODGBEIUIFMULPSGYRKTFXVJAYUPSXMZRSHUDOTVZXXXAHRFEPJQJLHBSGHCHKZTWBWQHUCRXDIKFYSBMZCMZEVSIZODMTYSZRSTIWDCKGFKQVCZCZWPBLOACQFOHJSHAGAGNVROEFEJNNLIEVTJTXVGXKEUBRQLEFHOQJMKNYCMQRUORSDYPWOBVYED");

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
    msg.setTimeStamp(0.602623902598);
    msg.setSource(50083U);
    msg.setSourceEntity(252U);
    msg.setDestination(34969U);
    msg.setDestinationEntity(47U);
    msg.state = 244U;
    msg.eta = 55389U;
    msg.info.assign("WHQSXRCRXQTATSEGAGFJRXKXMSFFSDRZCFOTWHUAPDJXQYJYRDLJCVRQVCAETKALQDAOLTENZHOSNHDNRVPGLGHMAFWJSFMESYIYMZPLDPOBMSMKVIOOOENNIONFIEKDRYQUFDJTCBBLITABBYZLZAPKPUHQYX");

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
    msg.setTimeStamp(0.802165972498);
    msg.setSource(30373U);
    msg.setSourceEntity(222U);
    msg.setDestination(20804U);
    msg.setDestinationEntity(126U);
    msg.system = 22801U;
    msg.duration = 58083U;
    msg.speed = 0.351686272147;
    msg.speed_units = 9U;
    msg.x = 0.187883893173;
    msg.y = 0.595422512623;
    msg.z = 0.44713306383;
    msg.z_units = 175U;

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
    msg.setTimeStamp(0.650156737231);
    msg.setSource(37097U);
    msg.setSourceEntity(63U);
    msg.setDestination(2889U);
    msg.setDestinationEntity(246U);
    msg.system = 9195U;
    msg.duration = 22722U;
    msg.speed = 0.6954630648;
    msg.speed_units = 216U;
    msg.x = 0.50601046722;
    msg.y = 0.098229613168;
    msg.z = 0.905316747367;
    msg.z_units = 209U;

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
    msg.setTimeStamp(0.330300960714);
    msg.setSource(49535U);
    msg.setSourceEntity(159U);
    msg.setDestination(54076U);
    msg.setDestinationEntity(4U);
    msg.system = 61355U;
    msg.duration = 53695U;
    msg.speed = 0.796340585598;
    msg.speed_units = 146U;
    msg.x = 0.603088534228;
    msg.y = 0.295026343673;
    msg.z = 0.124642651304;
    msg.z_units = 138U;

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
    msg.setTimeStamp(0.974915153666);
    msg.setSource(63316U);
    msg.setSourceEntity(161U);
    msg.setDestination(11263U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.565717262571;
    msg.lon = 0.205511727505;
    msg.speed = 0.707267814418;
    msg.speed_units = 117U;
    msg.duration = 10353U;
    msg.sys_a = 28567U;
    msg.sys_b = 5425U;
    msg.move_threshold = 0.951050303516;

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
    msg.setTimeStamp(0.200279326125);
    msg.setSource(37010U);
    msg.setSourceEntity(91U);
    msg.setDestination(6992U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.857203361916;
    msg.lon = 0.211809621118;
    msg.speed = 0.342295124916;
    msg.speed_units = 15U;
    msg.duration = 44911U;
    msg.sys_a = 15647U;
    msg.sys_b = 22532U;
    msg.move_threshold = 0.388258696787;

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
    msg.setTimeStamp(0.688246874535);
    msg.setSource(38906U);
    msg.setSourceEntity(199U);
    msg.setDestination(62557U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.187675248237;
    msg.lon = 0.674919208937;
    msg.speed = 0.153646372375;
    msg.speed_units = 61U;
    msg.duration = 42380U;
    msg.sys_a = 44402U;
    msg.sys_b = 37561U;
    msg.move_threshold = 0.976728307037;

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
    msg.setTimeStamp(0.286826591642);
    msg.setSource(52499U);
    msg.setSourceEntity(232U);
    msg.setDestination(48085U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.269622110057;
    msg.lon = 0.321548805352;
    msg.z = 0.322337262535;
    msg.z_units = 50U;
    msg.speed = 0.328248375125;
    msg.speed_units = 174U;
    msg.custom.assign("AZJCUERVDUHVXJNPHBVPLNHBQNGBNDKPDMNWJOZUUFHKIPTZGRUTCWYDYERPQFVUIAWLGRZEMAZXTKQASRJHFVOEIYGRRTFXYYGBJLJCMLTTRXQOHILSGZNYSOHBEZFSMIWAAREBPEWTSSXGAEBUQFCOWDYFXNHPQAUUCJSYEXKKOPDLDFVKBSTOWTVQUJRMAOINLKLMM");

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
    msg.setTimeStamp(0.0211707461487);
    msg.setSource(30831U);
    msg.setSourceEntity(93U);
    msg.setDestination(44663U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.167970989329;
    msg.lon = 0.415998697939;
    msg.z = 0.367375960917;
    msg.z_units = 223U;
    msg.speed = 0.427793750602;
    msg.speed_units = 204U;
    msg.custom.assign("YKIFHGHTLNBTYIFGMWOULQPDFKZYQLSHDFHPSJUSPAFBVVKQTJXENAWIQIUKGXZWCMZZCNRAEPTJYNXAYWOYVHWUBMVLSORYEOZSUQRXCFBHMEQVQGDKXRVWLSDATCJJZCTBTJCZTHOVYDB");

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
    msg.setTimeStamp(0.133932241623);
    msg.setSource(12725U);
    msg.setSourceEntity(81U);
    msg.setDestination(26107U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.976692981285;
    msg.lon = 0.151566745364;
    msg.z = 0.76529319998;
    msg.z_units = 116U;
    msg.speed = 0.883803934752;
    msg.speed_units = 182U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.431310753651;
    tmp_msg_0.lon = 0.46342870947;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LFYXIEZTSGWQHAJRHUCEUFRCSPWXUKWCZSMPZKVZGMAVPUYTGEZQCIZLLBUDPGOOIUEIRKCGWMTUWLVPNCDJSVFDTKNZIQITQLMSYONYHIHOOBMYVSHBDAWJOEITCNCKRNKWGXHKXAEBLEMXRURGLQKFJLFYNVGYFKBOXBXXATZNSPNAOEEPHMAJQQAYWADBDJJXBWNYZFBPVQUFLTFHJFURQPDJNSMVDESCDOLPJVCAGWIHTZMSQKTHO");

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
    msg.setTimeStamp(0.093279052182);
    msg.setSource(39435U);
    msg.setSourceEntity(76U);
    msg.setDestination(42518U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.933695927848;
    msg.lon = 0.154917156027;

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
    msg.setTimeStamp(0.212487837742);
    msg.setSource(55661U);
    msg.setSourceEntity(176U);
    msg.setDestination(55108U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.809340699053;
    msg.lon = 0.382052498544;

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
    msg.setTimeStamp(0.0589876555586);
    msg.setSource(7103U);
    msg.setSourceEntity(213U);
    msg.setDestination(32948U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.388162229742;
    msg.lon = 0.806262450557;

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
    msg.setTimeStamp(0.273352309167);
    msg.setSource(40718U);
    msg.setSourceEntity(249U);
    msg.setDestination(45922U);
    msg.setDestinationEntity(104U);
    msg.timeout = 4210U;
    msg.lat = 0.965837319162;
    msg.lon = 0.393009275382;
    msg.z = 0.186451682153;
    msg.z_units = 205U;
    msg.pitch = 0.87071935893;
    msg.amplitude = 0.896892524991;
    msg.duration = 42015U;
    msg.speed = 0.470246557855;
    msg.speed_units = 135U;
    msg.radius = 0.327006674184;
    msg.direction = 104U;
    msg.custom.assign("PXGUOXCTQNMRHVLQCSYSAPDCNXYFGEGRJAUMKVDSMHLCQHXWKRUIFRRWNGHJNUBEHQEXAIKXCOCFPXMYJFLDLWSPTLWOTNSKGFTEAUJMVBOCWVFIZNUIUJMZRX");

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
    msg.setTimeStamp(0.830299025935);
    msg.setSource(25126U);
    msg.setSourceEntity(40U);
    msg.setDestination(44419U);
    msg.setDestinationEntity(239U);
    msg.timeout = 27845U;
    msg.lat = 0.966468882894;
    msg.lon = 0.794185356637;
    msg.z = 0.668084210439;
    msg.z_units = 254U;
    msg.pitch = 0.0868578083264;
    msg.amplitude = 0.106501247397;
    msg.duration = 60238U;
    msg.speed = 0.676981587745;
    msg.speed_units = 243U;
    msg.radius = 0.490670750339;
    msg.direction = 166U;
    msg.custom.assign("NVEUZSXNIGUGOHMJFGFGSAFPTXRQDQKWBIBMACHQSBMTYVMFDAWYNCITSZFOFROETIAYDJQPACPVQDLJUCOJQVLWKLOPFVAOVXRISZDIOWLCBFHYQMQXSIKZGNAUWXXDBFSCMQMPKRJTEKUEVHKHYGMVJGXKNYGQJYRGHOWHUWSNLINKULXWESDPBSZETXBEMOTZNAKKBPREDTZLVRBWTEZHUHJVRFAYMXGCCYARCPNLPWTIJNLZOEZYP");

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
    msg.setTimeStamp(0.383300962644);
    msg.setSource(47765U);
    msg.setSourceEntity(140U);
    msg.setDestination(59950U);
    msg.setDestinationEntity(150U);
    msg.timeout = 47575U;
    msg.lat = 0.0636276296642;
    msg.lon = 0.612311381841;
    msg.z = 0.341685574567;
    msg.z_units = 214U;
    msg.pitch = 0.18276048741;
    msg.amplitude = 0.387301267779;
    msg.duration = 11075U;
    msg.speed = 0.332134876535;
    msg.speed_units = 123U;
    msg.radius = 0.661935646613;
    msg.direction = 103U;
    msg.custom.assign("WMJSXDTZHQXKRNZTKIXMBHRPQGNCIEHQATYKJWBZIESLQOUYSAOIVSWGPHYDEBFRMGMBKZUAFDXCEHPSJDGUEALFRDPGPMFUXGVZYAUQKEQSWPBTYZTPVCJPNOSOBUOUJLJVMVVGNEYMDLYVIURAAXQMUTHSDGIMFYCJFOGDZXAQHKXCAELBBDICTPVQKLXTBHWLXGHWRSCWYYZIIFRLNAFZRLNOLBFCCOOTTVNWFMDQZKRNIHNOWPRNJJWK");

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
    msg.setTimeStamp(0.0103363531565);
    msg.setSource(61650U);
    msg.setSourceEntity(212U);
    msg.setDestination(43023U);
    msg.setDestinationEntity(179U);
    msg.control_src = 4400U;
    msg.control_ent = 60U;
    msg.timeout = 0.950518305848;
    msg.loiter_radius = 0.452222350902;
    msg.altitude_interval = 0.297980914998;

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
    msg.setTimeStamp(0.987848577159);
    msg.setSource(40824U);
    msg.setSourceEntity(228U);
    msg.setDestination(32252U);
    msg.setDestinationEntity(114U);
    msg.control_src = 8322U;
    msg.control_ent = 130U;
    msg.timeout = 0.885777902983;
    msg.loiter_radius = 0.18889541205;
    msg.altitude_interval = 0.86305599523;

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
    msg.setTimeStamp(0.785238152694);
    msg.setSource(25497U);
    msg.setSourceEntity(30U);
    msg.setDestination(1376U);
    msg.setDestinationEntity(30U);
    msg.control_src = 53253U;
    msg.control_ent = 139U;
    msg.timeout = 0.108131084356;
    msg.loiter_radius = 0.755256146247;
    msg.altitude_interval = 0.82367067707;

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
    msg.setTimeStamp(0.487632251935);
    msg.setSource(26656U);
    msg.setSourceEntity(209U);
    msg.setDestination(59966U);
    msg.setDestinationEntity(135U);
    msg.flags = 48U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.191753443297;
    tmp_msg_0.speed_units = 89U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.335733265439;
    tmp_msg_1.z_units = 21U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.236605321989;
    msg.lon = 0.0205242617333;
    msg. radius = 60704U;

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
    msg.setTimeStamp(0.0168915862794);
    msg.setSource(16466U);
    msg.setSourceEntity(49U);
    msg.setDestination(23582U);
    msg.setDestinationEntity(183U);
    msg.flags = 43U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.172000818886;
    tmp_msg_0.speed_units = 77U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.679581209723;
    tmp_msg_1.z_units = 25U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.525801456445;
    msg.lon = 0.473234773527;
    msg. radius = 35883U;

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
    msg.setTimeStamp(0.648574571445);
    msg.setSource(26288U);
    msg.setSourceEntity(32U);
    msg.setDestination(11793U);
    msg.setDestinationEntity(156U);
    msg.flags = 234U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.017746832084;
    tmp_msg_0.speed_units = 92U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.626513432723;
    tmp_msg_1.z_units = 18U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.331261432474;
    msg.lon = 0.5972928289;
    msg. radius = 3696U;

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
    msg.setTimeStamp(0.587872457656);
    msg.setSource(55022U);
    msg.setSourceEntity(0U);
    msg.setDestination(35045U);
    msg.setDestinationEntity(198U);
    msg.control_src = 59564U;
    msg.control_ent = 163U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 222U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.658197399572;
    tmp_tmp_msg_0_0.speed_units = 95U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.572666167855;
    tmp_tmp_msg_0_1.z_units = 120U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.620855417141;
    tmp_msg_0.lon = 0.936186963512;
    tmp_msg_0. radius = 59550U;
    msg.reference.set(tmp_msg_0);
    msg.state = 30U;
    msg.proximity = 254U;

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
    msg.setTimeStamp(0.980882619174);
    msg.setSource(31264U);
    msg.setSourceEntity(152U);
    msg.setDestination(63359U);
    msg.setDestinationEntity(1U);
    msg.control_src = 27793U;
    msg.control_ent = 96U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 62U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.325682158931;
    tmp_tmp_msg_0_0.speed_units = 212U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.411020526833;
    tmp_tmp_msg_0_1.z_units = 20U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.530795778229;
    tmp_msg_0.lon = 0.263582951152;
    tmp_msg_0. radius = 7961U;
    msg.reference.set(tmp_msg_0);
    msg.state = 241U;
    msg.proximity = 143U;

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
    msg.setTimeStamp(0.331040939361);
    msg.setSource(29211U);
    msg.setSourceEntity(164U);
    msg.setDestination(40247U);
    msg.setDestinationEntity(98U);
    msg.control_src = 48570U;
    msg.control_ent = 7U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 236U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.428912596738;
    tmp_tmp_msg_0_0.speed_units = 65U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.56701050657;
    tmp_tmp_msg_0_1.z_units = 66U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.211659286091;
    tmp_msg_0.lon = 0.129026287559;
    tmp_msg_0. radius = 59455U;
    msg.reference.set(tmp_msg_0);
    msg.state = 233U;
    msg.proximity = 84U;

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
    msg.setTimeStamp(0.545143358301);
    msg.setSource(34471U);
    msg.setSourceEntity(36U);
    msg.setDestination(15686U);
    msg.setDestinationEntity(6U);
    msg.op_mode = 144U;
    msg.error_count = 30U;
    msg.error_ents.assign("ZJIFWQMKOGDCFSEUZOQUOWSGISTBOGOPJXYQONIXSCUBCUAEBPFISSZHHEKWFEYNERGWXXXZFVQKTBEBNBKXQQGMVLHTDJZNKHTRTXILEICMKRCJRJYPOLKVCBCHMGRQVGRVXJZJLGTVABEMFDHQBNZAVAMSNXHMUFYNCMLRTNJAQZDGDZIAEDUUBRWJWICSMAFDFIHUTVQNXWJPVSWOKLPMLAVKRDYSCPYUGFNDAHWOPLPYLR");
    msg.maneuver_type = 10350U;
    msg.maneuver_stime = 0.138356667541;
    msg.maneuver_eta = 16476U;
    msg.control_loops = 2548046689U;
    msg.flags = 184U;
    msg.last_error.assign("SUSXZDXEOVLJXBBBSCWUMWPOKUANMDBQZMAHKBNISSJZUCPEZTOIMKQFGYMGOBITMIGXZKCSPSXQFCKUTNQJZVWIZIGJTYBESMVAQECOYAJVNRYXPVLPCMXXNHLNAK");
    msg.last_error_time = 0.274870913313;

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
    msg.setTimeStamp(0.833908732476);
    msg.setSource(61349U);
    msg.setSourceEntity(200U);
    msg.setDestination(14718U);
    msg.setDestinationEntity(2U);
    msg.op_mode = 8U;
    msg.error_count = 227U;
    msg.error_ents.assign("RYHYAFIQEHNDNRCRPFCSKGBIENBVJVUDYJJILDTMFWCVCXQRWOXGBVSZMQLACQKTIAAVAYYNLPXIWNXIIWKHXLZPARCOQTAMFXLCCCGUKEHJTUTSOLMKBSVGXIJFHYKZFATEKLWFJVKBMSQPIWUAVZOHYEHTYGGNURJFSPNWBDSZYZXINQJBPAZOORQWHCMXSENXLUWQDUNEPK");
    msg.maneuver_type = 9396U;
    msg.maneuver_stime = 0.513971024761;
    msg.maneuver_eta = 38323U;
    msg.control_loops = 3885637741U;
    msg.flags = 168U;
    msg.last_error.assign("VNJRVOFFWZEFOYOJRNEUGNTNPWKYALABOVCITYJYSMSAEBDLJTWXNXDSI");
    msg.last_error_time = 0.251748573318;

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
    msg.setTimeStamp(0.197236764449);
    msg.setSource(65148U);
    msg.setSourceEntity(52U);
    msg.setDestination(41123U);
    msg.setDestinationEntity(48U);
    msg.op_mode = 90U;
    msg.error_count = 190U;
    msg.error_ents.assign("IICYXSPPHAOGRLDGZQZUZECZSPFKKQQDLMOHYUQUUNNFZCQRBMTDTWJFTIAUDLWPXVMSHBSKITMATDCW");
    msg.maneuver_type = 47832U;
    msg.maneuver_stime = 0.293139791853;
    msg.maneuver_eta = 44406U;
    msg.control_loops = 1648784051U;
    msg.flags = 142U;
    msg.last_error.assign("EYYCAITFQIBYWCPIMO");
    msg.last_error_time = 0.287551793925;

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
    msg.setTimeStamp(0.74538668148);
    msg.setSource(40713U);
    msg.setSourceEntity(94U);
    msg.setDestination(49409U);
    msg.setDestinationEntity(44U);
    msg.type = 31U;
    msg.request_id = 54282U;
    msg.command = 60U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.706047906695;
    tmp_msg_0.lon = 0.108161526726;
    tmp_msg_0.z = 0.544388431849;
    tmp_msg_0.z_units = 140U;
    tmp_msg_0.radius = 0.924302682199;
    tmp_msg_0.duration = 22122U;
    tmp_msg_0.speed = 0.90720662268;
    tmp_msg_0.speed_units = 78U;
    tmp_msg_0.custom.assign("QUYHYBIVRFBLBGQFFCCCRWIIOGKQGWWQPHGYFNMNFMKUOARDIFJTSXJLXYTEUEIDNODPXWXAKZYHMHLGASCUTUTAKZMNOWZESJJSEXGPONSETLBZQZPPACMZBKSYXIOVMPBIQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 4473U;
    msg.info.assign("KZSCKRYRYNBQNAW");

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
    msg.setTimeStamp(0.960324477288);
    msg.setSource(8335U);
    msg.setSourceEntity(251U);
    msg.setDestination(15828U);
    msg.setDestinationEntity(18U);
    msg.type = 157U;
    msg.request_id = 47685U;
    msg.command = 40U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.7907415609;
    tmp_msg_0.lon = 0.987539899442;
    tmp_msg_0.z = 0.690543913536;
    tmp_msg_0.z_units = 188U;
    tmp_msg_0.speed = 0.905715975349;
    tmp_msg_0.speed_units = 98U;
    tmp_msg_0.custom.assign("YFHVBSAGSTBXPXJMJHOCOLEPSVUWQDWUIOGQZQGCXYPNSEQRQNTEHOPMLZSFSJXLAVY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60406U;
    msg.info.assign("JOEDSCGKOLQWFVCLJBHAJIYKLKKQMTYZDAQPMHM");

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
    msg.setTimeStamp(0.497195308876);
    msg.setSource(36698U);
    msg.setSourceEntity(160U);
    msg.setDestination(9327U);
    msg.setDestinationEntity(149U);
    msg.type = 216U;
    msg.request_id = 32361U;
    msg.command = 162U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 3848U;
    tmp_msg_0.lat = 0.914367733247;
    tmp_msg_0.lon = 0.832547265322;
    tmp_msg_0.z = 0.000566569149678;
    tmp_msg_0.z_units = 152U;
    tmp_msg_0.speed = 0.393385522113;
    tmp_msg_0.speed_units = 35U;
    tmp_msg_0.bearing = 0.682794043863;
    tmp_msg_0.cross_angle = 0.637792109929;
    tmp_msg_0.width = 0.219708589959;
    tmp_msg_0.length = 0.135826247405;
    tmp_msg_0.hstep = 0.7633934001;
    tmp_msg_0.coff = 203U;
    tmp_msg_0.alternation = 254U;
    tmp_msg_0.flags = 246U;
    tmp_msg_0.custom.assign("ESZGPWBLWVTEQARPNAXEMWGACBVCRIRXMYHFGYTYIQLOHCUIGVQBUMTJJPNRPHDKNCZEISQLDZRANYKLWVKKMCGTYUXCZJXJFPOHHYOGTVHFAOEKHURFDTBOTVIOMUVZLKSAWZCNJLNOGLEBSESC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33390U;
    msg.info.assign("WGUHUIJJMAUYTRKWFAWEXAVGZFIJNPIOZCTZNLGWFBTADVWKBUYHHMEBDHPMVSVXDQOCELOWZCLPGKNAMOXGSCBT");

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
    msg.setTimeStamp(0.284746622987);
    msg.setSource(33852U);
    msg.setSourceEntity(143U);
    msg.setDestination(57317U);
    msg.setDestinationEntity(58U);
    msg.command = 50U;
    msg.entities.assign("AELDFEKTTSHKAHFDUUVEREZGHNRUCEVCJNIWCQLQLKENNTTFKSMKOMVRJAJGBLIOPVSUNJKNFADXTPGOMZWSNPYBAVRCBSDOUWLHDXPMQQVIOUXWPQQLYXFPZTQSCWOOOAEFXH");

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
    msg.setTimeStamp(0.845825932007);
    msg.setSource(57318U);
    msg.setSourceEntity(161U);
    msg.setDestination(1898U);
    msg.setDestinationEntity(20U);
    msg.command = 163U;
    msg.entities.assign("LVPRLLQDOIGJNKGIGXRNNRCMVMRPVESSWBJZZEPUYDUPYCMFQRSSKAKSYFRVAUUZTOIEESHKGWLPNNSBHNBKTYYXOHOUTFHIDZQPVPLQOXTNGGSWDQLRXKYWFTPWWYTDFZCGXDCHJJTVYJJWXOIFECBKDIRNRMUIUDQCJBBOWSFUEQMXRPGQVSVWMDAJCMAFHGLEMGJAHHVNCZTXVIFQAAYLECTBXZXNJHOLTE");

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
    msg.setTimeStamp(0.901820376101);
    msg.setSource(61866U);
    msg.setSourceEntity(124U);
    msg.setDestination(5655U);
    msg.setDestinationEntity(98U);
    msg.command = 109U;
    msg.entities.assign("LPVTHXYCLTKCNJKZHREMVWLMGBLDCUBCPZYMEVADIBHPQJIAYLXCJOZNJTCIOOUGOTMBJYBEQVPJLVGDFWUGKTSDFFDLFDGDRLTIXWUENOURATXDDJQYSZWUCFZNBGVQEZMKMLJWRRRQWKQSSHEXDASITZPFEMOKYAQSHBNQEAOSOZWHKNLUJKSYXVHMEQFWRGFAOYX");

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
    msg.setTimeStamp(0.00137095847897);
    msg.setSource(28629U);
    msg.setSourceEntity(74U);
    msg.setDestination(16730U);
    msg.setDestinationEntity(16U);
    msg.mcount = 188U;
    msg.mnames.assign("QRSEJIOTZQOYTNHPKMUGSLRLTKRVJWJJALESYADRZUFUWTAQNFKBWANAAPVRGMGBLTKKICGZZQNWNBOREBHSHNQDYPOFPEZEUBSZITQYOWLHNMIEXWAUMTOPBLFDDDKSVODVAHTFSXHJICZYTHKLEHGLRAKFQXFVXYCKYXPSEDFJYPNDOTVWWCWIMXBBGWUIBZHURHAXGPJVCMQCQSYGXSCCEBMLCMRINJFGGPODU");
    msg.ecount = 182U;
    msg.enames.assign("ZWDPIRGZVZOUDYJOYTIIDAGENTGQJUXAJXACWMMXSJKXXPQXTCIALTSCBDGQIBANKJBCJSFOZYETQSVSZVUWWPVIKVAHERMGCMJMKMOMGDUBIOSQEFLBRTIOFTTPHDPGHLUXMYNRRRNESFSHHPFTVBPW");
    msg.ccount = 45U;
    msg.cnames.assign("EWJHBBUOYKQUCQQINMCVCXGMETLWIOFBSKYZLTWDMIZJVMXQUBPNNITCNAOLHVDJZNHZOPTRAFXIEMDHQYILLFAFMODSERIJSOHQPZEHKZUQZNWEDPGPBLGWUFMVORSLGWTPBKFGRAXNDXKECTUCYDVXNTYYXVDNSVYAFAMGJHSPWQEVJLWVCRSDUEODAXSFNGHJMXVYKPGYZBKRJTOACQP");
    msg.last_error.assign("KSQEPUTOYJQNPUJTEVINALHICOULHCIHDZHXNMWGDAWRXKEQKKBNPFQDSLEZWKPTLVOOOBYUESJBXPLKDEUJOGMWZGZMSWGCZAQYGGVVMZRFMXEMUZILGFQVYSQI");
    msg.last_error_time = 0.436923097793;

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
    msg.setTimeStamp(0.537828628446);
    msg.setSource(9082U);
    msg.setSourceEntity(218U);
    msg.setDestination(16079U);
    msg.setDestinationEntity(62U);
    msg.mcount = 231U;
    msg.mnames.assign("PSLBAKQOSFCBVWLUUPWCVSGNQPBMQJRINVOHMEVZKJKQENJURKBERMFJFUIMHYLQDWVNRMHNPCLUGZKENIRTDQUTXZDEBKIBGYCRJAMABXMKGZRFFWWTXPAXXTTOLJWHOZGVEYIHOXCP");
    msg.ecount = 235U;
    msg.enames.assign("DOQVAQUPVXPUHILGCFYIQOBWDHKFEPMCRANGXGLYBJHJBWD");
    msg.ccount = 22U;
    msg.cnames.assign("VGIVKDDYRJEXRXMQDLXVBMOJMQJQGTXEOFJFARFZDQRIUXEHVUSSQJEWTLMIJBGPUMGYLEFJDJGGQVOWRMRSNLKZCIEZFBBBKWHWGLRPLAWDCRUHTTPAWWCAGSMPJHFJQSPDYHUOINTOLEYKZPKWSEHAUNYRGYBXNXICVSFNZQAVBKCZIQBELOMVSNUZXBTCKLVKGRTXTHDOFMWHYNAIHWPTLNBUCNKVP");
    msg.last_error.assign("VPEQJYAUVKOYRGVIBDUEPUMGOTGXHHKKDNRRXQALRSWNSCIJZAQCDEHYCZDWUKDCWGZOYULIIKVUSYPFHHZYPFGIQAFXIKXRXWNAMHMXJBYCRBJFBOYMVTDIRITNYEEEUWOCQFTPHSASPLJBQGNVVVZWFWZXNSLUQLRAOXLMKMPKMCFJFGDZGKQLMTCVATOBGOCZCLIIJTJZVJBQLSLKWTPUUWPEPHSEHWDNBESQZXANFHR");
    msg.last_error_time = 0.122229384722;

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
    msg.setTimeStamp(0.538933947049);
    msg.setSource(472U);
    msg.setSourceEntity(95U);
    msg.setDestination(4445U);
    msg.setDestinationEntity(117U);
    msg.mcount = 144U;
    msg.mnames.assign("WGILEACZFJGTLNFOMZFFDGTGGZIEXAGRDNHSTJVZFYRLLCRACAIXXAZBMQRGORMXIODVBORCPCIVSNHFOHEUPSZMKEWU");
    msg.ecount = 14U;
    msg.enames.assign("QYBHTWTMXXQDTSKLIATYVJOANRGQDLZVRWWGKKSFBAEPINNCOVDAQXCZSRTRFILYDFAFOED");
    msg.ccount = 179U;
    msg.cnames.assign("UHKYBCHNXGGZVRSOGRIGSJYSGBAMTCRFVKMBJILEZDUJXLFRSKQKIVJHFJNCBAVYBPMXMTEWZUPGDXQBMTPUQEBZNXWCEEGPTRAWRQRAASVUCQPSFGPVEULRZJJOADSWYTYMDUNNCSOUDEVLFWOOZAQOYBJLWCLIXDWLHKILNIHLTNHZKVXMQ");
    msg.last_error.assign("EJAAAHYNELRWNUYWXBLJPDMIJQZASGOUKGVRMUSLIOXGTPBYFKCPIFBPUZGWHKBOVJRQOERKVSVSQIEBPTWRCQQKCNJYKZBWJBMVXLBDPRZQMCITWXJXVKRYMNCZXOWUMFWACEFQDPTTGMSGRKDEHXGAQNZAHZDMYHEDEIZJGOYYZBTDCNTVNUFOPHSLKQTIYUOGSSUFCFLFOIRSAHHTCD");
    msg.last_error_time = 0.879165012244;

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
    msg.setTimeStamp(0.791323776131);
    msg.setSource(51159U);
    msg.setSourceEntity(90U);
    msg.setDestination(52475U);
    msg.setDestinationEntity(197U);
    msg.mask = 167U;
    msg.max_depth = 0.103779854374;
    msg.min_altitude = 0.260937744701;
    msg.max_altitude = 0.53894713068;
    msg.min_speed = 0.945342932015;
    msg.max_speed = 0.453530649649;
    msg.max_vrate = 0.937992704748;
    msg.lat = 0.724695575802;
    msg.lon = 0.0448474893556;
    msg.orientation = 0.260631213906;
    msg.width = 0.574476155998;
    msg.length = 0.376429452545;

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
    msg.setTimeStamp(0.588402924961);
    msg.setSource(40800U);
    msg.setSourceEntity(208U);
    msg.setDestination(63856U);
    msg.setDestinationEntity(60U);
    msg.mask = 102U;
    msg.max_depth = 0.760566799715;
    msg.min_altitude = 0.454938515768;
    msg.max_altitude = 0.284874887987;
    msg.min_speed = 0.688449544187;
    msg.max_speed = 0.125475311386;
    msg.max_vrate = 0.644196584404;
    msg.lat = 0.256399439605;
    msg.lon = 0.619226387868;
    msg.orientation = 0.024295453408;
    msg.width = 0.0247672195637;
    msg.length = 0.909151172891;

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
    msg.setTimeStamp(0.921398631441);
    msg.setSource(15741U);
    msg.setSourceEntity(224U);
    msg.setDestination(22311U);
    msg.setDestinationEntity(42U);
    msg.mask = 153U;
    msg.max_depth = 0.811384508675;
    msg.min_altitude = 0.19917995375;
    msg.max_altitude = 0.47461465703;
    msg.min_speed = 0.401661903274;
    msg.max_speed = 0.580633688492;
    msg.max_vrate = 0.69709603161;
    msg.lat = 0.944718941658;
    msg.lon = 0.408002406493;
    msg.orientation = 0.568553672178;
    msg.width = 0.641494810316;
    msg.length = 0.0206439926324;

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
    msg.setTimeStamp(0.74064821294);
    msg.setSource(30757U);
    msg.setSourceEntity(48U);
    msg.setDestination(41704U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.0566734050367);
    msg.setSource(57114U);
    msg.setSourceEntity(106U);
    msg.setDestination(17169U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.55488900126);
    msg.setSource(17997U);
    msg.setSourceEntity(154U);
    msg.setDestination(19077U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.464510768162);
    msg.setSource(30284U);
    msg.setSourceEntity(131U);
    msg.setDestination(60909U);
    msg.setDestinationEntity(205U);
    msg.duration = 62636U;

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
    msg.setTimeStamp(0.715240391533);
    msg.setSource(46102U);
    msg.setSourceEntity(95U);
    msg.setDestination(33641U);
    msg.setDestinationEntity(36U);
    msg.duration = 51084U;

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
    msg.setTimeStamp(0.904679995963);
    msg.setSource(61329U);
    msg.setSourceEntity(108U);
    msg.setDestination(7105U);
    msg.setDestinationEntity(60U);
    msg.duration = 45392U;

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
    msg.setTimeStamp(0.460884086667);
    msg.setSource(34168U);
    msg.setSourceEntity(196U);
    msg.setDestination(24943U);
    msg.setDestinationEntity(176U);
    msg.enable = 63U;
    msg.mask = 1901641929U;
    msg.scope_ref = 0.853294020451;

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
    msg.setTimeStamp(0.451597485558);
    msg.setSource(56625U);
    msg.setSourceEntity(35U);
    msg.setDestination(44275U);
    msg.setDestinationEntity(113U);
    msg.enable = 195U;
    msg.mask = 3786516672U;
    msg.scope_ref = 0.84051057799;

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
    msg.setTimeStamp(0.338765023148);
    msg.setSource(28947U);
    msg.setSourceEntity(202U);
    msg.setDestination(11163U);
    msg.setDestinationEntity(170U);
    msg.enable = 46U;
    msg.mask = 864217300U;
    msg.scope_ref = 0.561952928114;

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
    msg.setTimeStamp(0.100952084791);
    msg.setSource(1355U);
    msg.setSourceEntity(97U);
    msg.setDestination(27934U);
    msg.setDestinationEntity(201U);
    msg.medium = 60U;

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
    msg.setTimeStamp(0.0404067634073);
    msg.setSource(14013U);
    msg.setSourceEntity(138U);
    msg.setDestination(12277U);
    msg.setDestinationEntity(184U);
    msg.medium = 226U;

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
    msg.setTimeStamp(0.643888806967);
    msg.setSource(46515U);
    msg.setSourceEntity(54U);
    msg.setDestination(44400U);
    msg.setDestinationEntity(60U);
    msg.medium = 33U;

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
    msg.setTimeStamp(0.184463105085);
    msg.setSource(57333U);
    msg.setSourceEntity(120U);
    msg.setDestination(19658U);
    msg.setDestinationEntity(252U);
    msg.value = 0.100461978247;
    msg.type = 21U;

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
    msg.setTimeStamp(0.775380064888);
    msg.setSource(25233U);
    msg.setSourceEntity(88U);
    msg.setDestination(48697U);
    msg.setDestinationEntity(175U);
    msg.value = 0.891858931372;
    msg.type = 139U;

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
    msg.setTimeStamp(0.860227397676);
    msg.setSource(12632U);
    msg.setSourceEntity(32U);
    msg.setDestination(14843U);
    msg.setDestinationEntity(145U);
    msg.value = 0.294445340687;
    msg.type = 232U;

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
    msg.setTimeStamp(0.854569634258);
    msg.setSource(39307U);
    msg.setSourceEntity(135U);
    msg.setDestination(21957U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.555878459587);
    msg.setSource(23560U);
    msg.setSourceEntity(132U);
    msg.setDestination(51206U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.570869205952);
    msg.setSource(64266U);
    msg.setSourceEntity(107U);
    msg.setDestination(39528U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.121826077661);
    msg.setSource(2819U);
    msg.setSourceEntity(165U);
    msg.setDestination(65397U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("INKTOQMKESSVLCPHAMCNGTGZQCLSTENJFZVLWRZXTSKLOGSWPPGJYIQDGKOCEJJOERCMXUOAUFEVHFEYVLVJOUYNGIQTBPQNUBOMKDTWYNDGBOXZRZFCXNSMZWRHXQBUYEAXPPHTCPWZQOFLKHIYBYFNXFRDJRMVCIYAMKKIDVBQSOQWDAXUPXSGRCDSLZMWUBWHFJHMLHREATJUAUYXDKRFP");
    msg.description.assign("FFJBPIYQKFUKVVATBUESKIHOELCOYZZL");
    msg.vnamespace.assign("ADKYLVKJNYVBNFHNENIDMFGCPDMTTAGGDMWBDAEHYZKPIYRQXWOAHGJIITKMXZPJOVQCNYINLNBMATFORSUBKSMAHMYJRPOCXLLNHJFQOFVGGKGEQI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VHVTKDGTHRSNYDFEOZYXZXZMAOXLNIOYJWHYQCIV");
    tmp_msg_0.value.assign("NLSCBLBRALUCLGVVPSKQZCZGUTEFCDTFRLDXTTONOGMJRPPBHMEDRSTNOWKMDDXHYUWMMIBJGSKSJPCBEYEBN");
    tmp_msg_0.type = 214U;
    tmp_msg_0.access = 119U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OQNGDMCDGPWFHVDDFXSIXCGFXRYVXMUKPWEAIOFVHKUBWWNGIPQLDOIRULNMFMPEJSYZTWDMGALSJTHGZVJGHVDBRSESZBTOYYSMKEKFWEHPECHCTBUARRQIABAHOMNYWXVLZYLTEZJBBRJQYKVYMCJATNQONXPDZWASEKJDQKDOUKNSCCCKSHUXGOUNWFZITYPCATAIUNPI");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("TDNPSHEQNCAXYANKOCLDCEVOXOWWGFGKURNTQDDFTUELFWSJQRXQRKAWKOJXYRUCQXKZQTCWGMHPJUSISVEBDKMNMPCVRGROBSUYDYPVGTMRAWFZETVYKGNZIRBCXAPAZBIBJDKSSAEOFTBVHFTSWHDNBNZU");
    tmp_msg_1.dest_man.assign("GFZSKTTGEURIVICNSTHQOBCJOFWSZHZEYOLXIKHAFEMTDKCPGCMYYAWRKGRDKMTBRJLWPOZYXPNMAYZSXQRLAJIMXBTFLBKAFOVFYCGILZYETLGDRJNDAUISWMZIISKMABKCFVXSDWHHQVVWWODPLRKZGNRPOAUWUEXXUCVQBBXMNUFJJPPHQHAWC");
    tmp_msg_1.conditions.assign("WRGVPBQCSCIDOITPHWJDUQJKHRZNYKLQWIKVFPZBC");
    IMC::AcousticRange tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.address = 233U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::IridiumTxStatus tmp_msg_2;
    tmp_msg_2.req_id = 36017U;
    tmp_msg_2.status = 50U;
    tmp_msg_2.text.assign("UNUOFCFHNZKUDADFOPABXZGPHOATSOQUFKFBJHYSTKBZVCTFBBTLAWYJPCEVPCWRPIYTXDHDGGMGDLCXUKIZPDYCYEMWJQEZBHKENLSIEOSGTZEAVQQRCHRFFBERXBBVYMANLVPKRM");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::NavigationReset tmp_msg_3;
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
    msg.setTimeStamp(0.875139000891);
    msg.setSource(54071U);
    msg.setSourceEntity(78U);
    msg.setDestination(53589U);
    msg.setDestinationEntity(120U);
    msg.plan_id.assign("HTWAPMYDAUQOUIZBSSPYVMWBKNJXFSQCPYGILFXH");
    msg.description.assign("RQZYNAORYNMSPLRACKDSOJNADIZKGGZLLWTCQURYWIHJHQKALYBDXMYBRUQHUHISEBUJNAXEHBCWAJBMIFGUZEAAFVFRCZYJASVPR");
    msg.vnamespace.assign("EPGMCKNNJEVOTTIUCUAUBGGNSJSFYBPGWBUVTSHOPNQUINUGL");
    msg.start_man_id.assign("VOMFHJVZEJCQGMIPRJGKFUFVIUAQXTLEVUYFGXXZEZSKRJXSYBCJDCSZBMRJBXKCYUNVFIBYWHMYADGAHYHQSMGXBQKOIYQFWIGKYZXLFPWUWQYPWAVCDKWOTPHHUHONMLISLBPFGNLKUDAGCLBQPAIZORSWFEDBKMTIRNOCEDSZPOSNCNBFDAIQPCXZAVCPEZRRLHRHURWTWJMETOTUKRAOEIJNM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YBHXMVIVMOHKUDHIDMZX");
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 19348U;
    tmp_tmp_msg_0_0.lat = 0.622724192324;
    tmp_tmp_msg_0_0.lon = 0.269039569604;
    tmp_tmp_msg_0_0.z = 0.666595635745;
    tmp_tmp_msg_0_0.z_units = 176U;
    tmp_tmp_msg_0_0.pitch = 0.589348866277;
    tmp_tmp_msg_0_0.amplitude = 0.683227913541;
    tmp_tmp_msg_0_0.duration = 8358U;
    tmp_tmp_msg_0_0.speed = 0.453514170451;
    tmp_tmp_msg_0_0.speed_units = 217U;
    tmp_tmp_msg_0_0.radius = 0.668395218111;
    tmp_tmp_msg_0_0.direction = 239U;
    tmp_tmp_msg_0_0.custom.assign("UIFQWKNRJQEJONKLXXFWCEWIUARJGMAJDDSXBHSZNLVLWFVJZSNOOPYHPEGDFCOGZUPIBUYDBMUSQLAJYLKAUNVNGVLPSCHIXIZPPWLPTBDIXVQGXDPNYRD");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EntityList tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 32U;
    tmp_tmp_msg_0_1.list.assign("ADQKLIJITOPEOTDPLZCKKATCWWCMEGXQQTILLDJWUVCOKXEFWUWFPQXRFLGPKIWSOGDEAGQAVAOJVUXJEUFMESSIZSYZUMLLGPYQDYHXYGLDDOAMWUVJRRZYFKZZDBIQB");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::TransportBindings tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.consumer.assign("TZUCQFNHBAHJIWOZXUWWKHIEBQKGULCXGQMPRVLBIAAZZMTDNBWWWLKMSXPXPQJ");
    tmp_tmp_msg_0_2.message_id = 28282U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::VehicleMedium tmp_msg_1;
    tmp_msg_1.medium = 141U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Conductivity tmp_msg_2;
    tmp_msg_2.value = 0.896926708619;
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
    msg.setTimeStamp(0.345444078572);
    msg.setSource(18888U);
    msg.setSourceEntity(32U);
    msg.setDestination(24257U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("ZBKPQVVVWIISMRPMLQNEYERABFRQSDMKHMCTYQRCHPBPMHCJZCYNUTBGFUHJTGIZAF");
    msg.description.assign("QVHZOVPZWRFWMVQCYYINTLOSAXAKMAPFANTCKGROXIXJYXCESWEYJQLHGPZDBLXBJBHAMSXDETQGRNTTWYSAVCOZNUJSFAHCUVPERKPSTGMVAQUBEEXSKTKTOCVLMPKHRDDBMZNKQRLINZCIICDRBGFFFMNAOEVDJBJUHNJUGHLEEZKKJUWUCHYYZFFSXQEMJMSYWRHTIDGZXLPVOKNWSRLUFBFOCVGRWLYYGNHIPQITULWPXOQBWPQZDDIDJ");
    msg.vnamespace.assign("MVDDDFYWWHVXDQZMFJTZOXWEUKGVNCOQWFSBXDZIMJRIFEAFXYCQAZSVENDWLAWIAFRJRGJEEKYAHBITRCYWCBCIYEEATBLNONRZEORKBSCZBGQNZSFNJVDTVUDHOGISGPGUZZMTKWQGTQYIPWMPJAZHTAQMNTKGLLPRBKGASFHKYJKFUNBHCQRUCOXBJYOLPPSHDRMLSNPVYXUXTBCHUVCILOPLRVMKQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SDRWITFIIPQOA");
    tmp_msg_0.value.assign("AOYHFMDSMTNQIUXVNOVBREVSHNKDTVXPNIGCJMCKJMRAUHLLNLBUWSXDKCDMHFKYFYTVDIXZOBIHCW");
    tmp_msg_0.type = 153U;
    tmp_msg_0.access = 51U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OUTHZYQLALRJATWDNMVBLFAOVQMDZMRNZXETZPKMQ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("HGDFXKIRWQOKJWYYLPAGAPVCMWJFBQXMGEGTKODOJPZHNTHDZALTQYUMVSUCAPXKUCPQEHKZWBGFROXVLFIUPNJQAODEHJQNSTSCMKZYDVUTECSBTBRRFIAANLMIMRGUGGWRMDVBIENVZHKEFXRVPFTTAYANSSCHVNEDOYIMXOLBGSRBTTYXPIHICQUJFZVYDOVKWALJMYXCQQSWKERXNNEZBWFBHLCHLQEDC");
    IMC::FollowReference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.control_src = 50441U;
    tmp_tmp_msg_1_0.control_ent = 137U;
    tmp_tmp_msg_1_0.timeout = 0.803396073581;
    tmp_tmp_msg_1_0.loiter_radius = 0.656949130568;
    tmp_tmp_msg_1_0.altitude_interval = 0.497026480364;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("FBNUCGELXVREB");
    tmp_msg_2.dest_man.assign("QGWSRQWRRPJBYQJDDFCDXJNJKKWIXBXLNFUSWNC");
    tmp_msg_2.conditions.assign("QTBIFEYHCIIJZAHQGZFDQEMSSVJIPUVHNMFLGWTTXDTSRWCLEGLVYZDNDNXBWCOKLYAZDWMZURZBEUJWCCRUABCNGDPLPXVORGTYMSJFHVAIJIEXGAHMERTBAUBFGFAONSWHSLFKQKXLKVKEG");
    IMC::DesiredPath tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.start_lat = 0.460985806774;
    tmp_tmp_msg_2_0.start_lon = 0.550337775357;
    tmp_tmp_msg_2_0.start_z = 0.246511006489;
    tmp_tmp_msg_2_0.start_z_units = 194U;
    tmp_tmp_msg_2_0.end_lat = 0.403022655756;
    tmp_tmp_msg_2_0.end_lon = 0.958026197676;
    tmp_tmp_msg_2_0.end_z = 0.389284711562;
    tmp_tmp_msg_2_0.end_z_units = 110U;
    tmp_tmp_msg_2_0.speed = 0.560482569557;
    tmp_tmp_msg_2_0.speed_units = 38U;
    tmp_tmp_msg_2_0.lradius = 0.620752075444;
    tmp_tmp_msg_2_0.flags = 174U;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::SessionSubscription tmp_msg_3;
    tmp_msg_3.sessid = 928161716U;
    tmp_msg_3.messages.assign("CYQZBRMBNGQ");
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
    msg.setTimeStamp(0.262094771782);
    msg.setSource(12054U);
    msg.setSourceEntity(162U);
    msg.setDestination(2272U);
    msg.setDestinationEntity(48U);
    msg.maneuver_id.assign("EPWAXQMHEEEJHTEGXERORMGNYAKSOQMLGKDRAOYUOINYZLZNSXFSSJEKT");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 17515U;
    tmp_msg_0.name.assign("EADUOVFKALBZGYGLNWZHYQBXUENFVNHQWYFMLZULWDYQQASTRAECZISLMRGNGWKYKOJT");
    tmp_msg_0.custom.assign("BRUKYAQPTVFGXUYABJVXPSSEZJMRXONWCLPNMJRHKCVVTJMNDJWRCQKQCKRFBWXTZJRBIINPQLUHHIZVACMRSCTBJZETEDGZFVYNHYDIGEEELSOUDFOTIBDPAUSBYJMSOQZSLGQFUMYTNUKNFLDTPWQWORGGPFIMFWVIPXWLKIZKYVUKUYKDZMCGNZCQXPKSTVEXOXWJDFWUQHEQCHSHWNBZFENVCGMAGJIAYLOHOYPORAHAXOT");
    msg.data.set(tmp_msg_0);
    IMC::AcousticSystemsQuery tmp_msg_1;
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
    msg.setTimeStamp(0.187122890792);
    msg.setSource(43649U);
    msg.setSourceEntity(244U);
    msg.setDestination(52783U);
    msg.setDestinationEntity(98U);
    msg.maneuver_id.assign("YUOSNRWTWGVARMZIEZHOKEMKFDUDHLPUPRTBVUMCCNEQEDFQEXBNMVHZVYVDITANKPWRCNTGHFDWYYFRPLVDJHZWXJSFHVBCORGXGJRGQSTJXMFQJSQKYEGMNMZKKDIBWZVLXERICDJMIAGOEYNASLPSLWCJSTQMWPQBUUUALTDUOBDZBPKPEWOCFWYOFZJXLAQYMNYATUNIKRHFXAGCSCZSLKHHIRTBQS");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("ROOEVHZDKPRJNLSPIPBPSSHMLZBENJOYQRVFDOHIRKGTIPTTINNWPQJGSXQCTKCLKMFFYYZYUNXIWRKRDCJYMRYSHACZXOKGJUXBRMZVKJJGOTOWPAUUMLQBVVMYE");
    msg.data.set(tmp_msg_0);
    IMC::AcousticSystems tmp_msg_1;
    tmp_msg_1.list.assign("GOZNWDTNARYASWEOINYLQMYNADOFHIWDJPEHUKJGCFBBQKOLOEVEOGZRBMKKIQHESYIPFEABPZJGVLAUMJGWOXDCTKHSCIEPRLCRQUCNJBJRXLSVJCYYMSVYDQFP");
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
    msg.setTimeStamp(0.128070887991);
    msg.setSource(27503U);
    msg.setSourceEntity(228U);
    msg.setDestination(44418U);
    msg.setDestinationEntity(219U);
    msg.maneuver_id.assign("JXLOGXGPWUFWYISLJFPEPSDUSHZWOJWFDHUMXCOGYHKMLMYCRFQUBTXAGSSVJFHZQBMBIIVAXQKYAEZIRRKIZDLCNVZ");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 58845U;
    tmp_msg_0.lat = 0.30589992902;
    tmp_msg_0.lon = 0.303279723098;
    tmp_msg_0.z = 0.392008591928;
    tmp_msg_0.z_units = 137U;
    tmp_msg_0.speed = 0.612107868017;
    tmp_msg_0.speed_units = 193U;
    tmp_msg_0.roll = 0.216840200597;
    tmp_msg_0.pitch = 0.545634978386;
    tmp_msg_0.yaw = 0.131516266877;
    tmp_msg_0.custom.assign("QOUJSIIYZXAMNZSWSREBXOI");
    msg.data.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.137932096716;
    tmp_msg_1.z_units = 36U;
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
    msg.setTimeStamp(0.576603317128);
    msg.setSource(53703U);
    msg.setSourceEntity(102U);
    msg.setDestination(45000U);
    msg.setDestinationEntity(245U);
    msg.source_man.assign("CHSDHOWCFEOAWBACDVLMJPCHSOBXQIBTGKTXODQSAUPLZPGYKJFHGDEIBUVSXTTIMQDLXLQSQDFIVGSZFFBG");
    msg.dest_man.assign("ACHYXMOLIWSBDDJGUPCDQNURXGWHVHTNLPCUNUOEYQUWUWUJOVYKSDRJFKJGVCMOJPKIWOFXPSVFMJJJVVIPXE");
    msg.conditions.assign("BQNSWAWKIZWYMPOZMDURLHQSLWTNKRJIRYMZXKGLYBXQKHPIOEZPBURFSOJLRPFPNDBMDOSIWQTVKSBNZDXGPKJFUTYGTECAJEALVJTNXAMQPCQNEAIMHDNOCHF");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.502230063011;
    tmp_msg_0.speed_units = 34U;
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
    msg.setTimeStamp(0.51606422402);
    msg.setSource(5362U);
    msg.setSourceEntity(117U);
    msg.setDestination(897U);
    msg.setDestinationEntity(70U);
    msg.source_man.assign("VNNNGRFHCRHQQKDKVFSDBIADFLZWNNGXPZKRSCLUSXARLIECQGPZUBPOZWXQKJNJDBWZTSCMMLMWXHOJTYYWMKDSEPJBRYIOYUINGHLVNDSOTBWXURWQPPSIVCDLHQWTZKWRHHGFJBEQFUMZKQFFQPJSPHKQKVBPOAWVOS");
    msg.dest_man.assign("FAGMMABASBPPRJFWHZJBNRVXRJTIWXJXANKSYGGILTOKPOVOZVWTMLWOEIPTTZWZSDTCDUUDESWORGECFILIBUEQUCKQVEHLBDPGZFBRNOUYNHCIOCJASKNFLYYASQAEBMXGYSWHDNWWDIPYQFCTIYRKGDQJJUQRBDXATJTQCMGXQKUZVNXHQFGUPHRXEIDCIOPV");
    msg.conditions.assign("LHVMJBFXVSZJFPJCLSVKGUIY");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("CGJOTCCSFJNBZREARTRXJMECJJVLROFTBRCVA");
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
    msg.setTimeStamp(0.149957177464);
    msg.setSource(23018U);
    msg.setSourceEntity(200U);
    msg.setDestination(42444U);
    msg.setDestinationEntity(117U);
    msg.source_man.assign("LECKQORXLPDQNXAKBQTYFGTDVCLPNRONBEWMOTIROEPOCTAQHXPHISTVNOKPLFDMSZJWVBIUGMUFZUVMMHRRZAOAEOCYUHBGFBMYQZEDAZTKLIRISKKDXQSDVUWEQRTBFFHLWXVXIRPOVPWNFHPAXGCXJKBNWATYLEJQMCYCPZSSAVSCEIEKJJFIJXZJTQGDUYYKJCAYZNDFABREWUSMJJHTUUYDSXUNIOGVGNQH");
    msg.dest_man.assign("NQABUOXNBZVGIITBLZJSNMKALWGYWYPUSU");
    msg.conditions.assign("OGVUZJNUQSWKBAMDSPNUXPTTXXUYRRWDLEEEFHVAXGGJWNMCXEAETAZMCLPJLDKCKDHQXYILDUQFKIFSUWRPQHCIFCLTRPKESJGVQGSPJDJCVOAYESCIBYHMKDLSOFBUUGTJEIJNWKWHLAFUGWPNOFQBXMMQYQOSAFHJAWGHXKSMVZBZNRPIDEZTWYPORVRHYZMBRHMWNLOBLTOXHITGRCKJCE");

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
    msg.setTimeStamp(0.107597416412);
    msg.setSource(12601U);
    msg.setSourceEntity(119U);
    msg.setDestination(29705U);
    msg.setDestinationEntity(216U);
    msg.command = 24U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WPZXXXJIFKOJVSEMQFHCNUFCIOYGLYGGOPRAEDMNNGYTAOLCRVVPEVIMUAMBUKLCIBBWSTQTNQHMUZJEKDZYPDDXTKYREUJYPKLGJJSSIIROSXLELLTPPRYVRUAKKFDNWOODZBUVZVDOVFWFSIIXRBVWSBGHMXXCTXCFMC");
    tmp_msg_0.description.assign("BNNYSABXZAHWWPLSHUIVWLOKMAOZSEMPPNJHBNDUAZCZTUMCXPUOTVIYGXDQBEZ");
    tmp_msg_0.vnamespace.assign("IEKSFMCOBZTYOJZRGRMAPXQXEUTMGVLJPINZLHZOFEYXECDNRQCHSIADSWSBABNVCWIOANQKVGDQLMLHQSJNRIFACBPVHOQRDSOTGWKBVKPRXMCFYVLZMGJZNF");
    tmp_msg_0.start_man_id.assign("WWXKXOLKMPXVJFCTHIUYYXWAOVFYLCXUHFOGNGZCMBKUMEHIEDZJOMIPBGSTRZTBGMRDYSBCXRQFDNGNXNSNSWPFHTPQDHWSPLSKWRENRUKNVJWLNDMULTUQTOICAOFDWVMRNKPQCRAAVDTVLXVAGKDTJYMSJSJFAQIIFKRJUEABZPRQZJDPBIXTCI");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ODPCMHKZDWDKNWKKEJTVXEJQHMONUYLKRLSMGSPBFTIAELNFGKLQIHFNFWQQGUODMYJFRRWYBBJOZTAUCHECOZGUXXOINXLYUUAUPJSDPJWWPCCQEIACSFRAAYRDGFTUUTQFQCLHIHOVRE");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.596690035081;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.687315321498;
    tmp_tmp_tmp_msg_0_0_0.z = 0.564573369132;
    tmp_tmp_tmp_msg_0_0_0.z_units = 140U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.733615432588;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 204U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.454587427104;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.511995286237;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.764449402404;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.t = 0.0170933616451;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.vid = 7616U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_x = 0.0184987641654;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_y = 0.919545352589;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.off_z = 0.166366811224;
    tmp_tmp_tmp_msg_0_0_0.participants.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_tmp_msg_0_0_0.start_time = 0.616984014827;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("MYBCBLBEORUKCSRUILQRSJVDCDAQMUYHZNFZO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SetLedBrightness tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.name.assign("TFUTAYIIOAGULQCWNMUOSWPFWDGKYGNDOFNYCVSOKRVKKPYRYWXHRMTCEYPQGMFRIGRBYRHJXWAORJHWHQHIDLGBUCTNZCBBLXNYGLEDDAQZTNESIWMJULJQZOJFZBSMQFUTCLILTRGQFJSQNVAXBBKXHHXAPYJEDAKAOVLORHIAIXMEQZBTSKEFMMYHXXUJCDMDONUZKFIZPPBOZCSNVGNEHVKWPFLDDLSWMIETQVXPUESCT");
    tmp_tmp_tmp_msg_0_0_1.value = 213U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::FollowSystem tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.system = 10324U;
    tmp_tmp_msg_0_1.duration = 10451U;
    tmp_tmp_msg_0_1.speed = 0.903782557328;
    tmp_tmp_msg_0_1.speed_units = 4U;
    tmp_tmp_msg_0_1.x = 0.79385459849;
    tmp_tmp_msg_0_1.y = 0.570625956048;
    tmp_tmp_msg_0_1.z = 0.174903618662;
    tmp_tmp_msg_0_1.z_units = 248U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.437184672624);
    msg.setSource(51938U);
    msg.setSourceEntity(69U);
    msg.setDestination(35606U);
    msg.setDestinationEntity(246U);
    msg.command = 7U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YHEFLFGKTNPFHMYMRIGSUESJQQAQONEAQBVDZNDEGVBDLHVQLOSKOYDBAAXLNVYFWWGYMWARNEKAJJBHHUYXEZTTCVONRPDXEPCGASWHFMIZOZUOCWTVLMN");
    tmp_msg_0.description.assign("VHQXBVQEVLLCBDHPAWGNMWUIKBMSHKOMTKVLXENBJOFBWRYAFOAKNQZVOMCDJIDZXGGUCMFWKRZUMOCZSLLWRZHAPDTADLEOESURTISMAZJSUAIKJGTUSPOPLXIJYRYPJNDFIPCHAXHZR");
    tmp_msg_0.vnamespace.assign("IZWBBPXCFDMLIBCAUZLWOSHEQNPZUKAOSMJLJTCHDYPXSCPMPWSZMPODDTJAFOSKDDHANHFYSCUBFKJZVEWQHITXBRDTBNGLJW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YICTZYVXZLZYINGGEXRKMLSYDHSRTLFMJJHLUVELKUWXEAIXBUPFOKBCNBDYHIUFCTGFVQZFBGKJORCRQMYIFHGERAOWYSBTJYIHNKEQGCRACBMVEDJDZAXRODDJQIAKINJGSSQBNJPGLBWVYOKOMZILXKPXVDZMKGNBTVSVVQXWF");
    tmp_tmp_msg_0_0.value.assign("TSCNJZBZDNSBVUWZKRDTPYLXBUVRYAKUBUTPJRVHPNSCAIKFEQHFCFHCEUWJKMRYHCAYFS");
    tmp_tmp_msg_0_0.type = 119U;
    tmp_tmp_msg_0_0.access = 57U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EAIVJBSPHHOQDPVXGNFYNMDILNKXUAUZEYZOTFTEJLAPSGWCDAVGIPMBRQZGQGPYZRVLRXBRZATGDTHYUPPJBFSQDWTBWUWFBKVJECDCYNJEDAAIVHWSOUXLLCHOMNTQRNZHIUEUODGAZSJGCNLLKYDUBMEXQQVORFXNIMCAOERNPSFTOWIFKYMPJTFYRIQVRBZXQUMSMC");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("GVIOZUCAUGLSUQWCEZDTCECDXIHJDKAGCUWGHXMYRRJINQRGROSSPACWDKPQYNHLWIMMZWHQVXGJMNKWHHVERWSGFSUUATJOYJREEHAZBKTFICQXMBXSPBUFIQBTAWFERKTPASZINMQBBENWMXOBVFQJJZVICPIFEBYRVGKRHELBZLDLNGPDPOYUANJDRFXLXFCUOPYGKFKTQYMLNPLJNHQVHOOP");
    tmp_tmp_msg_0_1.dest_man.assign("OEAMNFDSVVQXIWUYOCNYQCLTKOPAPQSWDBJGIOUWDHPFQXVJBZZCXDKMRIEMDLMQYBGEBAEKRPBZMWQNDJPWGBOHWKUNOPPLD");
    tmp_tmp_msg_0_1.conditions.assign("BYMUNQPAMTWGXIQWIRLMFEWIXPGVMDCXPQZJRATZHTGTXCOQQSXUAKZNHLOIRMDIUPWAPILBXCHOAHFNRBKTLRZFCUXUYYBJNBGVYHJAYDKAXJSIRWMURGVSMEYCSODETCGEJZCSLPLSBRQKFWRHZDMVVLDDFKHKEBOFSAVZPEJFHAXVNONIMXKBGAIFQPKUCPOPYWWQVOCZUEJ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.563950888005);
    msg.setSource(4048U);
    msg.setSourceEntity(239U);
    msg.setDestination(31561U);
    msg.setDestinationEntity(140U);
    msg.command = 37U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SHEQJYYLFKWGRXRONGLUIWQNJMBOWPRLIWBFSXJNITPFTIUUUUQJQUXKOTJVZPGAEYCLZXSQXTOWNZMPWIVSZJELVEMLRCHTVHKXNMFNRVVQSIFWSDLICVQXSBNNPIAIDWGKCTAUHLGKBRFEQMDXZYZZPUKKOZDEZTHDUMJAYSENXQAOORPLED");
    tmp_msg_0.description.assign("KAYWGRNOZUXRHFFLXMMBZROSUJKRPBLRLILVDWHFYZJNCPPWXSJFHLPPMDUAUGMUNBICFY");
    tmp_msg_0.vnamespace.assign("RPESLOPPYUTSZAMZODFVMMLHNXKJUROZRBONLERNNYBVKDECEURINQJXWRQGIYXGDOFZQFVBPTGPUJNBTDZKULXATCQXBXZEYVIMAUWGPWKVOUHETOHLDJMTECSDAJPQCGBGBKJMDUZVKIVQXKMFXLCIEZRJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EUHCNYKEUVBAUHPSLAQRHBKUEPQWHBWQKAFBDDVSNOVCGRZRCWNXJXSFOOHAPCOAUBZSLGQQKWOKJYJQADGRDBJLDHGUSTXVKGHZYMNVQIZMFZTTYMBLPKZOYZIQJVGMREXLTMXEWXELSRYFPGKKFCEOGITITFSIVTCJBLINXTWDMWZQKONYZDJXTLMGPJATWDMPRUHPEUNJGMMAQPYD");
    tmp_tmp_msg_0_0.value.assign("CRDBXZVIVATQIRVJAITONZBWTNZDYUWVSYWEYMJBIDXNDTMNBGUWLURGEDMJSLKNQMMFPIRPSFZQCJXYGZTAVGAWDRCTBYOFFANHHILGGZJVPEPRBAAHKNCLLWFZXTKIIHDIVEXQHYFKMCF");
    tmp_tmp_msg_0_0.type = 79U;
    tmp_tmp_msg_0_0.access = 186U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GBXSPVJQSUDKJFGTMVJEIKUDFTNSMQEIUOSPCCJUQCSPBXQIXTRYNQNRVVINYAPKZLAEVTFWDHYJZTZMLWPDKECIGULOXLXVIWPRHJOEPJUSBAMFOTACBDJKW");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("BNNUCDTURBUZLVGMRRFTFGEDEQBHVRTANWLFHHAGYYVARILMHBWTMRFYPSSJKOUZQSKKRBTOYQJAUTIWLFMOLWYGFCCIPFPPAXATUMKUDJNJVHQNPYVBCKRBOXQOKEDZVZEQKLELDQWVCIGHDIBIEWXZFVDFDXHLGMEX");
    tmp_tmp_msg_0_1.dest_man.assign("HXHJRDRZHDGUSMXOVPHHOOAFWJSPERTXAEFMQIJAZFXDEFPDBWESMXRWWMIDBQYJHUVVQYDLTOVKOOKIRUDYNEGKRBZFUQQNVCYSCLSZLTAUQAPDKPRWQIBGRBZKMKMKMQSYWBGBPLFTPNPEWYNXLNFRWZ");
    tmp_tmp_msg_0_1.conditions.assign("NHZQJIXMFRKBLQKOIXGYZYXWNUBWGWPSNGHRGCFXLDJMYHZNOVQZNCFYAFZRRWMEARRZYTWECDKSSZFFALTUHEAHTLLZQTMDVXOMJKGDLBMYLOIHOQPCEUNMAXZW");
    IMC::DesiredPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.start_lat = 0.503637979065;
    tmp_tmp_tmp_msg_0_1_0.start_lon = 0.768488141401;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.163758024671;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 241U;
    tmp_tmp_tmp_msg_0_1_0.end_lat = 0.439029391395;
    tmp_tmp_tmp_msg_0_1_0.end_lon = 0.955984264924;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.31631816432;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 13U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.13219225353;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 42U;
    tmp_tmp_tmp_msg_0_1_0.lradius = 0.758929138475;
    tmp_tmp_tmp_msg_0_1_0.flags = 141U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LblDetection tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.tx = 48U;
    tmp_tmp_msg_0_2.channel = 9U;
    tmp_tmp_msg_0_2.timer = 28219U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::PulseDetectionControl tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 92U;
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
    msg.setTimeStamp(0.254668597086);
    msg.setSource(25633U);
    msg.setSourceEntity(133U);
    msg.setDestination(31948U);
    msg.setDestinationEntity(100U);
    msg.state = 3U;
    msg.plan_id.assign("NZKUCCGBFIXVTRZLSWQEOVMEMEETAMSGUTJAVPXSNLCBOYLIMDHJHRAGYHODQUWBUZVDWVVEQTRQQNWGJYUVZRHJEABZFGSXRMMSNGJMNBNVOAGWKPKKLFZWHTLEUXJKHXOCFPMBABHOXICWDPIXHAFMRZSAPQUZGXJ");
    msg.comm_level = 52U;

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
    msg.setTimeStamp(0.106635711257);
    msg.setSource(26868U);
    msg.setSourceEntity(196U);
    msg.setDestination(12446U);
    msg.setDestinationEntity(26U);
    msg.state = 127U;
    msg.plan_id.assign("VWQPQAUSJANUWHEJJCZMTRLAMFAJOZKFKJD");
    msg.comm_level = 230U;

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
    msg.setTimeStamp(0.80227830055);
    msg.setSource(9352U);
    msg.setSourceEntity(34U);
    msg.setDestination(29685U);
    msg.setDestinationEntity(196U);
    msg.state = 52U;
    msg.plan_id.assign("ZZGAHYBEIOVHNQUMOTPLLEMWJJKTOTDZFMTZYLLKFKUBRTZULZACJIKVEGJFYUFAESVANCSEDHNSGPCLVYUCYIOXEQQWORVSCGROXOEFOGHHQWN");
    msg.comm_level = 35U;

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
    msg.setTimeStamp(0.872729143838);
    msg.setSource(59851U);
    msg.setSourceEntity(100U);
    msg.setDestination(9119U);
    msg.setDestinationEntity(120U);
    msg.type = 240U;
    msg.op = 242U;
    msg.request_id = 19474U;
    msg.plan_id.assign("OHETNJTDYYVLFCYBZJBQLPQINDGOMQEUWNGPCUXSXWMLEUCRYAQNHXHOBIEKMPWMXOKPTKDKQVAGHSXFRUDWVXHAFQOQXTJAPLFCCJRZGTBD");
    IMC::Heartbeat tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AMEBLRJDMTTGEUEGKZBXJRFGLZYOQITNSNDLTUUXEPJTLWWRWDXJLCMAWKHBASFCZDUOZAVSAOMMUDNWCJSFJNRNPMXZKSSSKIDHANHEGXPWCRJCVRGXKQCLKKQUDVHJPISPKAFQZAFYHJGNEKENDHWBVGFQVYIZXYUIRBIVNGZXWQBNUZYKTFIQTROOEFHJZQOEFOMYAWFDBUVHALBD");

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
    msg.setTimeStamp(0.340688729815);
    msg.setSource(18134U);
    msg.setSourceEntity(116U);
    msg.setDestination(60032U);
    msg.setDestinationEntity(90U);
    msg.type = 242U;
    msg.op = 32U;
    msg.request_id = 51893U;
    msg.plan_id.assign("NYKYWMZCWXFKYCWRHYTQBNVKAZEAHVMNLWKTGRJUHILWJBWXJNYZMPOABLUOVUZZTFQRDRVICKFLLNBXPAKMGDVUTOCBJSCNNDRQCJSOCCAMIJFH");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 48U;
    tmp_msg_0.clock = 0.640044475675;
    tmp_msg_0.tz = -86;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UHEBROTNBUJONFPVSGGJRGCOUUHTJOTXDAPBCIQMTDITKDXEGZAKWUKSOARWRFCAABVWQFLLGTBDSIXAEOPVWTM");

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
    msg.setTimeStamp(0.203642823958);
    msg.setSource(36922U);
    msg.setSourceEntity(98U);
    msg.setDestination(6423U);
    msg.setDestinationEntity(82U);
    msg.type = 157U;
    msg.op = 122U;
    msg.request_id = 1868U;
    msg.plan_id.assign("JETMWTROIVURAREVGGUBOGAQPISQSGISYWJEPMCWXPBEDAKTLAHIQKRFCMFVWTOEKJCCBZJNZYNINVNZFEBBFJUKFHLLQGJFWRGFKIMHCHOFZHTNDDHOOXH");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 52195U;
    tmp_msg_0.control_ent = 69U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 173U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.211309954301;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 166U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.101497075827;
    tmp_tmp_tmp_msg_0_0_1.z_units = 81U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.0653164084936;
    tmp_tmp_msg_0_0.lon = 0.702314931784;
    tmp_tmp_msg_0_0. radius = 56520U;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 58U;
    tmp_msg_0.proximity = 181U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LDKUCIQBECQJPWDJGXPZOXQAPYRMXDPOLJFJCELOVRFMUCUBTYTRBEGBSKRBAULDJOMZEMPLWPYQNOGBJOUXNMVWALRTALIPHCSTZNIGDWFURXWQZZFVSMHVLUIKCKQVVRGYZYAAHNRSRSNKZSPPTOXAGVTFXKELFAUQXEDJMYKHBYVCNS");

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
    msg.setTimeStamp(0.584528218299);
    msg.setSource(33438U);
    msg.setSourceEntity(231U);
    msg.setDestination(17403U);
    msg.setDestinationEntity(161U);
    msg.plan_count = 54547U;
    msg.plan_size = 1268933865U;
    msg.change_time = 0.920379730909;
    msg.change_sid = 47364U;
    msg.change_sname.assign("EEDIDWTWZYSMLFVFCQHPUSAXBLQHNUUGMQPWSYCNDQTXMGYAQLDGDUKLPKHIVXCABDSEYMMZWYKTTLBZVFBEPJJCTQUGPPJJBDXRERBFIGMPOICCAXCY");
    const char tmp_msg_0[] = {-85, 66, -114, 56, 27, -104, -103, -119, 22, -124, -59, -42, 109, 93, -98, 20, 10, 81, 38, -93, -83, -3, 79, -105, 111, 73, -127, 111, 97, -34, 31, 95, 15, -30, 1, 99, 54, -41, -84, -83, -20, -61, -100, 102, 9, 101, 115, 119, -11, 6, -96, 104, -22, 106, -69, 126, 32, 87, 74, -63, 62, -74};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FLFFQMVCPOXIUNRGGPSKZUJKRAPLKKZWVOQGXIGTJRDAADKXBANUYYOEHQPSTJNXJNSNWQNTAZHXIGWPMTICTJMGBECBGZLXMTKUVORULIVQWOTYJGFVHBWDVCFQIKBPQDBSRUPYAVIHFHFPRDHILSLNWSWON");
    tmp_msg_1.plan_size = 60114U;
    tmp_msg_1.change_time = 0.94221841129;
    tmp_msg_1.change_sid = 47993U;
    tmp_msg_1.change_sname.assign("GRTBQFMVXNBZIOLBVOAWTTXOWPGWZZDJWBOOSLQJMCZLERMZHQOPLUMYRYSQINCPIJDRIOCIEHLHKEPPEYKSEHAFXSWNKJAFSKMMOKDPXPXFLELDEJ");
    const char tmp_tmp_msg_1_0[] = {11, 110, 122, -62, 55, -128, 33, 37, 44, 85, 19, 125, -14, 86, 32, -21, 105, -73, -91, -89, 119, 122, -86, -22, -42, 75, 115, 35, 106, -37, -47, -110, -115, -68, 18, -21, -16, -110, 43, 90, -84, -94, -59, -114, -89, 89, -82, -104, -89, -128, -14, -5, 48, 18, -30, 100, -9, -125, 10, 84, -117, -18, -69, -16, 91, -95, 110, 46, 115, -58, 32, -55, 31, -77, 111, -78, 56, -95, -57, 82, -70, -77, 55, 1, -37, 86, -94, 75, -43, 50, -46, -39, -98, -76, -56, 17, -118, 111, -45, 126, -84, 14, 82, -37, -15, -23, 76, -8, -25, -50, -20, 8, -98, 48, 42, -17, -98, 4, -5, -35, -57, 56, 115, 62, 125, 85, -8, 59, 110, 47, -65, 4, -75, 12, 90, -6, -111, -17, 45, 59, 88, 24, 70, 119, 51, 47, 28, 65, 88, 108, 16, -67, -74, 30, 43, -10, 104, 103, -16, 63, 42, 78, -109, 102, -11, 107, -99, 39, -70, 28, 62, -48, 107, 20, 5, -90, 65, -110, 0, 35, 79, 56, -74, 69, -73, 4, 38, -102, 113, 59, 3};
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
    msg.setTimeStamp(0.219318892969);
    msg.setSource(59481U);
    msg.setSourceEntity(77U);
    msg.setDestination(5719U);
    msg.setDestinationEntity(20U);
    msg.plan_count = 22649U;
    msg.plan_size = 2245039515U;
    msg.change_time = 0.559952224761;
    msg.change_sid = 32687U;
    msg.change_sname.assign("FIMTQWHDNCIBLQFAZJDBSUFYFWZEYXSMMQCWIDZFRSXCOONKZDVJGIKSHOHLOUDEAUTENJEPY");
    const char tmp_msg_0[] = {33, -30, -4, 8, 34, -94, 7, -61, -88, 126, -10, -113, -128, 72, -51, -61, -5, 41, -41, -106, 47, -68, 72, -62, -101, -7, 26, -128, -46, -115, 47, -20, 79, 42, 69, -67, 26, -121, 13, -106, -127, -29, 107, 50, -53, 50, 67, -107, -100, 7, -19, -40, 10, 18, 71, -29, -47, -66, -33, 117, 53, -123, 116, 34, 66, -95, -115, -85, 37, 3, 82, 24, -38, -24, -71, 55, 17, 12, 22, 32, 100, 98, -9, -115, 67, 100, -95, 10, 92, 117, 28, -68, -37, 125, 24, -80, 23, -3, 7, -126, -10, 99, 88, 118, 102, 108, -39, 89, -49, 35, -60, 20, -128, 112, -88, 119, 77, -90, -27, -61, -20, -125, 109, 122, -98, -9, -90, -35, 87, -99, -59, 24, -30, 41, -115, -87, 3, -19, -93, 126, 13, 18, 95, -37, 37, -120, -55, -51, -98, -44, 63, -79, 3, 61, -6, 37, -12, 10, 31, 16, 34, 30, -9, -109, 42, -39, 13, -105, 112, -99, 12, 126, -73, 110, 96, 104, 51, 72, -39, 116, 65, 104, 37, 63, -90, -3, -11, 100, 83, -16, -29, 0, 102, 114, -102, -124, 56, 2, 56, 30, -82, -76, -106, -118, 102, 26, -82, 102, -17, 28, -104, 99, -64, -128, 29, -91, -61, -4, -86, 56, -77, -40, -122, -40, -22, -56, -126, -43, 79, 44, -76, -76, -14, -81, -90, -106, -44, -69, -42, -59, -103, 115, 67, 92, -40};
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
    msg.setTimeStamp(0.635832482753);
    msg.setSource(42887U);
    msg.setSourceEntity(146U);
    msg.setDestination(49U);
    msg.setDestinationEntity(11U);
    msg.plan_count = 57214U;
    msg.plan_size = 1022730858U;
    msg.change_time = 0.213698972778;
    msg.change_sid = 31763U;
    msg.change_sname.assign("IJOJYCEBRMZTPZBKDFHXTBYFWSGLPWCRULZGMOPOSANLZUHGRQJIYSUFQWLWLDMHUSOEQENGPPBGTCISILPHWBVCZPQTJXHDJAGET");
    const char tmp_msg_0[] = {-23, 31, -9, -1, -64, -78, -85, 71, 98, 22, -123, 43, -107, 19, 67, 16, -61, 9, -114, -90, -14, 31, 27, -120, -85, -81, -28, 73, 120, -128, 76, 126, 20, 102, 11, -118, 1, -11, 83, -52, 17, 29, -53, -51, -11, 8, -52, 50, -19, -52, -26, 122, 95, -87, -60, -25, 113, 113, -33, 38, -116, -125, -48, 36, 111, 34, 11, -88, -76, -69, -111, 98, -18, -1, 2, -97, 65, 16, -44, 9, 5, 95, 92, -13, -20, 67, 41, 124, 103, -126, -23, 83, 63, -103, -92, 104, 34, -58, 96, -115, 35, 59, -3, -55, -126, -90, -49, 5, -75, -10, 25, -54, -88, -41, 67, -24, 61, 23, -41, -31, -47, -75, 50, 34, -4, -104, -122, 100, 17, -91, 80, -84, 62, 115, -125, 43, -68, -5, -114, -49, -12, 112, 111, 51, 39, 12, -45, -90, -96, -95, 64, -56, 89, 74, 25, -28, -95, 77, -66, 116, -22, 46, -18, -104, -17, -63, 44, 65, 18, 107, 28, 68, -104, 90, 107, -87, 2, -5, -53, -12, -70, 7, -91, -108, 113, 86, -21, 112, 51, -42, 67, 27, -58, 122, 20, -12, -127, 126, -15, -42, -78, -104, -25, 107, 87, -31, 107, 47, 105, -25, -121, 87, 112, -6, 9, 41, 51, 66, 17, -85, -28, -83, -3, -83, -50, 53, -121, -112, 80, -8, 20, 99, 98, 79, 101};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("BFBJRNOSKUYPERZSKCBABSZGJXGXUYFQRCQQMZZXNXQHZEKBULUJPJUNCHMVWFRIDEMMYKNTDULWQLSCYACZDOOHEGJAECTUNRLBPLSNXEZWJLPZTXXBRGFOHPHPWRCEIVZVSBUVIKFU");
    tmp_msg_1.plan_size = 34208U;
    tmp_msg_1.change_time = 0.495458789805;
    tmp_msg_1.change_sid = 38005U;
    tmp_msg_1.change_sname.assign("HNTZLXYJFKMWCYRPBHUOCQQWZFZPVGHHCLNDNKPSWNHCDEMOLRBZSUJNJSLEJOFZARVTFOZMVTVJEMQQCDXKARXXFYJHXKVFSVFEGVJCMYKQYETYGDCUXJDUQIPAYMAAIVXANKHWMUHYSLJBNAINOESXPLTTKTZFWCRIIEGDU");
    const char tmp_tmp_msg_1_0[] = {-113, -79, 116, 89, -37, 57, 10, 6, -55, 96, 45, 65, -12, -79, 58, 70, 71, 5, -109, -2, -127, 25, 77, -59, -10, -26, -98, -7, 86, -33, -42, 47, 33, -22, 101, 17, -3, 10, -114, -76, 22, 117, 15, -44, 102, -82, -7, 44, -72, 71, 99, -124, 84, -124, 97, 56, 58, 98, 24, 10, -77, -95, -71, 116, 35, -88, 58, -71, 29, 43, 126, -121, -96, -56, -26, 72, 14, 126, 114, -107, 47, -92, 65, 19, 56, 125, 120, 37, 41, -128, -17, 90, 123, -74, 38, 7, -42, -64, 32, 53, -17, -19, 65, -57, -20, -79, 65, 97, -25, 60, -84, -82, 46, -114, 57, 30, 15, -71, 44, -8, -71, -56, -58, -100, 96, 49, -40, 34, 94, -67, 39, 21, 2, 13, -103, -79, 13, -95, -107, -34, 102, 42, -127, -69, -127, -126, 120, -84, -87, 50, -14, -2, 56, 14, 73, -48, -94, 108, -107, 12, 39, -73, 79, -76, 32, -102, -100, -26, -51, -107, -63, -123, 62, -57, -112, -45, 79, 15, -99, 125, -97, -78, 38, -71};
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
    msg.setTimeStamp(0.261534302621);
    msg.setSource(34921U);
    msg.setSourceEntity(91U);
    msg.setDestination(58675U);
    msg.setDestinationEntity(173U);
    msg.plan_id.assign("LRCPLCQSVPZFITCEJRRABCXXFGGPADRZCQOEEWXUSWAMEFHBBITQFJLRJGCGNMIMKJZYMYBJUJTJAGYHOOFUCTIGSSHIVXXVKQZQZLHUEJKTXW");
    msg.plan_size = 39339U;
    msg.change_time = 0.146375111023;
    msg.change_sid = 1663U;
    msg.change_sname.assign("WIPXQSPAZIVCYFSFFMEXOEMLBMCQCZJSQZAJKUKAMRZRBZNNVVLESFNCCKGRZJBANKRVNNGQSKKPLOHU");
    const char tmp_msg_0[] = {-2, -31, 57, 17, -53, -86, -7, -26, -49, 32, -79, 67, 17, -67, 9, 113, 60, 57, -24, 114, -64, 61, 53, 89, -83, -62, -3, -93, 29, 72, 118, 14, 60, -7, -92, -19, 78, -100, 110, -15, -62, 24, -34, -86, -76, 94, -112, -37, -55, -124, -49, 111, 33, -68, -31, -98, 13, -110, 75, 116, 9, 39, 120, 112, 94, 71, 92, 60, -121, 37, 93, 62, -64, 96, 70, 92, 67, -25, 76, -34, 59, 59, 88, -120, 19, -73, -106, -99, 110, 1, 91, 58, -94, 71, -42, 107, 88, 55, -8, -14, -104, 123, -111, 81, 45, 76, -42, 119, 49, 99, 122, -55, -99, 122, 104, 2, 90, 11, 72, -41, 110, 73, 9, -89, 70, -8, -34, -92, -67, -54, 109, -46, -50, -96, -67, 10};
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
    msg.setTimeStamp(0.0357287330091);
    msg.setSource(61816U);
    msg.setSourceEntity(119U);
    msg.setDestination(51067U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("JCQBLGMYBVQBNR");
    msg.plan_size = 23689U;
    msg.change_time = 0.833926741338;
    msg.change_sid = 25301U;
    msg.change_sname.assign("YJYUJUSKOEBJZDQLWKVWEQCWUFYVNCZMEAWNGVHBVRSWLHHTONXCVUJIAZVCUKSOTXVSZXAAGBUCKDONEQHCDGIXFTLHFAXFLSWTPDQPSMIKSZNRLXMWZAOQAONXYUPTEBGEZGXBSTQXRWMZIJFNRFMOLOUBNDHJRAKZPYBMQDIVATLYUEBRLCPJYIKSRPDKDPZEPBREFFDGPPODSTONFIKTJRNRIBWWYQEQTHJCGIFQMLJGCA");
    const char tmp_msg_0[] = {107, 15, 29, 118, -58, 43, 107, -73, -13, 68, -81, -13, 44, 76, -109, 2, -4, 19, -86, -110, -74, 9, -108, 33, 45, 67, -47, -105, 82, -68, -114, 21, 49, -38, -54, 5, 80, -126, 12, 104, 101, 68, -128, 89, -77, -14, 14, -89, 39, 38, 8, 101, 112, 68, -63, -80, 43, -17, 64, -22, 18, -42, 25, -53, -49, -112, 13, -87, -54, 95, 68, 31, -33, 113, -115, 71, -16, 37, 125, 19, -20, -5, -64, -3, 9, 91, -99, 60, -47, 82, -108, 64, 20, -98, 28, 79, -62, -1, -124, -48, -115, 118, 107, -65, 112, 12, -29, 69, -5, -121, -36, 49, 33, 33, 86, -95, -95, 113, -25, -71, 83, -12, -14, -10, 6, 83, -115, 108, 15, -90, -106, 47, -53, -36, 41, 106, 33, -82, 49, 16, 115, -46, 58, 34, -84, -60, -60, 7, -23};
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
    msg.setTimeStamp(0.00960484853284);
    msg.setSource(34640U);
    msg.setSourceEntity(242U);
    msg.setDestination(1026U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("DGHHLKIOLZPXNTNEZYDZGCBWIVJTMPQAYXABIKWKTRXFJVHTXMMJEJADMBCHEOPWPVQBBRITXDEVWYYNCVAYFNFCKMGBRMVRMZAVJFINRQXYPPQRLIZYLLUOVQGRRQVVCWDUDICWH");
    msg.plan_size = 42070U;
    msg.change_time = 0.253372642755;
    msg.change_sid = 3647U;
    msg.change_sname.assign("HUHFMBEWPASXPHMUNQDHQBOREABRCFNEGVAKBQROWNZDPTXIAOCTRZR");
    const char tmp_msg_0[] = {-84, -18, -90, -128, -122, -20, 107, -76, -108, -27, 4, -36, 24, -112, 126, -118, -36, -59, -55, -123, -13, -119, 60, -117, -84, 6, -73, 8, 38, -111, -104, -72, -111, 10, -47, 57, 12, 104, -11, -123, -52, -99, 86, 76, -58, 78, 121};
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
    msg.setTimeStamp(0.0566784721416);
    msg.setSource(16372U);
    msg.setSourceEntity(171U);
    msg.setDestination(23659U);
    msg.setDestinationEntity(42U);
    msg.type = 93U;
    msg.op = 95U;
    msg.request_id = 26441U;
    msg.plan_id.assign("RJXFCHRYZMIKLUEIDCFLBPPFXDAQLYLEUOBZYIOPGTXKWEIHBOTSHNVZLEWJCLBXRRSNQWKGMZYOANUTYFQGSEXAVATDIFHKRFKYBQUNYSHWAPKNCWTZTKEGGWSAXJJNLZDBZLYUMACXYQOGHSETOCJENWSRFMPWHJMPQPV");
    msg.flags = 12631U;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 94U;
    tmp_msg_0.quality = 43U;
    tmp_msg_0.reps = 6U;
    tmp_msg_0.tsize = 188U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RXVQMHSCYHSMVKBBXQJEHZVAKBTQOFZOGISPGMNJLZEQMAHTRPNGKNITALIKSBRDRYNJCKJWDNHJLANURTPULNEZMGVBQZVFMYTRBXFJWSNEEGOPOTPYVAZUCYDYDREQKBFIFEXREFVPUYHPEXOCXI");

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
    msg.setTimeStamp(0.677792390037);
    msg.setSource(57581U);
    msg.setSourceEntity(32U);
    msg.setDestination(7103U);
    msg.setDestinationEntity(17U);
    msg.type = 250U;
    msg.op = 207U;
    msg.request_id = 11680U;
    msg.plan_id.assign("NNMAZQXORYVWFMGIPPULFHWCDAQHTAJRQLDTRPRWVZCSUOSITWPIJCDIQUSZDUOXKJQBFGRFBPUZXDGAFQOSIKYHORMRSBEDWPCCVHSCMJEKDMSTKKBONHZSVTDZLEKUUGCOYPHQINEEGJLIHJXVJHWMZAHKZNCRXETAILDOPFJVQOQMTMUUMYSNLTBEXKXYXILFGTCWYBTRANBELYIYYBNZQA");
    msg.flags = 11852U;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 1190062877U;
    tmp_msg_0.destination.assign("SNMZRVMCWUDGEYYSCMVOUJFHGXGDHTQGXSJCBBIURWUZRVENEFTTXZDZNFMRUPFVBZLVHZQRCKJAUNTKZXNXRBECVVQOFDFIZHEIHKVCBSBJMUFPOIABYLOCXUXWOBGJEMAPQFOWDELOADFJHPLWNGFQGETDXSJSIRTMLZYQKDTTLUDPGLSLQMKYJPQWPIHNJEWNZABYOTASKHLGSLIPVMXKUIHRQYCPWNYYCOHROVADPBKSAYWJAKGQIMX");
    tmp_msg_0.timeout = 26898U;
    const char tmp_tmp_msg_0_0[] = {23, 61, 114, 45, 40, 32, -109, 89, -102, 29, -46, 125, -76, 5, 80, -9, -32, 83, -50, 39, 113, 123, 58, -32, 91, 86, -99, -9, -118, 18, 80, 84, 58, 58, -19, 32, 24, 16, 57, 107, -120, 8, -54, 81, -5, 56, 51, 80, 85, 104, 101, -41, 43, -6, 126, 87, 91, -64, -116, 96, 38, -19, 91, 83, 79, -82, 22, 40, 9, -72, -109, -79, 73, 115, -83, -110, -108, -8, 108, -74, -25, 43, 125, 54, 116, 82, 9, -19, -115, 1, -101, 42, 64, -27, 35, 5, -39, -7, 48, -48, -105, -44, -59, -75, 2, -66, 16, -70, 45, -107, -126, 36};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YPIIYWBIXNFUMICTIYEFJGVNPVJCTZHDLJZOHBAYSQIYREACNOWFXHKYWKOXNBWCEDVPYAQKTDVSZOLQKMBONMGHDVOERFXBASIIEMXNQOPEAXAZUSTCJMUHGDTHFQQPJVUCBUPFOKSIHKRZQPTVTSAPLQDXUFJBWDMIVCJR");

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
    msg.setTimeStamp(0.747504697032);
    msg.setSource(46712U);
    msg.setSourceEntity(217U);
    msg.setDestination(27008U);
    msg.setDestinationEntity(109U);
    msg.type = 233U;
    msg.op = 88U;
    msg.request_id = 23075U;
    msg.plan_id.assign("PUMLKTKKKKQVFCZMPHORFVUOGTHZGNUDHVTEZPEHIYRGFYDUOTFKYKHLUDYYZFSABWJIGCWTIPWEFRTCHLRGFIADAMOSBBAJHNYOZMXYGWJBQCLHLJOJAMZRAASWUIHSDEMMWZXGJCXNNJPMJPLPDDFAOFVUPPE");
    msg.flags = 63395U;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 39640U;
    tmp_msg_0.duration = 46295U;
    tmp_msg_0.speed = 0.117633052907;
    tmp_msg_0.speed_units = 183U;
    tmp_msg_0.x = 0.485750917507;
    tmp_msg_0.y = 0.568303971145;
    tmp_msg_0.z = 0.818620043024;
    tmp_msg_0.z_units = 34U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OPMBUGHATSXKZYSXEGUTDJIDZEWRTHNHFLVWISYQJDKCPURTUDKENPERTEQRBCLDUXUBMNGPVOHNEHFXMILWOHULQKMLPEGBZVQJZHYEASJSKIWOMQMPNKQOWCFDTIORNCAZBBIORCFQGFUVYZKAUSUYVJCMRPALVYOCWIVRIAMYVKSIAWEAZYRWGVAJCMHFIPXCYBXKLHWJXNGEXLZFOJRCGNNFSTDPYLBKZTDBFQJGOJQMLQPVW");

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
    msg.setTimeStamp(0.31082699804);
    msg.setSource(43036U);
    msg.setSourceEntity(156U);
    msg.setDestination(47317U);
    msg.setDestinationEntity(12U);
    msg.state = 88U;
    msg.plan_id.assign("IMJTPCSBGVEWSFXDRFDKXPKLKVMIHWOTJYS");
    msg.plan_eta = 1187114611;
    msg.plan_progress = 0.0049056458991;
    msg.man_id.assign("CGPDTRVZBRMFENVAGFRJIZXQPSSNPUUKSQYDXECXVQXGFZOTLJARFTEJLUVVNKMVKYVYSNYNKYVYAJJIBBCYKVKOVMIFLUFQGTAMNWSHWHBSTB");
    msg.man_type = 38018U;
    msg.man_eta = -1558790887;
    msg.last_outcome = 147U;

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
    msg.setTimeStamp(0.715167265527);
    msg.setSource(12397U);
    msg.setSourceEntity(100U);
    msg.setDestination(32292U);
    msg.setDestinationEntity(123U);
    msg.state = 244U;
    msg.plan_id.assign("AMKDZRGRWQASLIGUQXGJJUUMPFZCLPRNXPYYJWZVNYVIFLGDHKFOLXKBWZTBLWYWSNMSFFCYMRCIQIBCSCTIAJKNBRLRODIEBHMGNRVSITCEJVQVTWOBOQECGDQSJAEWXEDUXIVHTQWWTRYHEEWPTUXAJKLJRGFZTZRZYFANPFGCXUHDKNOD");
    msg.plan_eta = 1565570551;
    msg.plan_progress = 0.97860847169;
    msg.man_id.assign("NOCGFPHJVKECMNEYSAEBBGSVQFQYDYHFNOGHAGBZEIVOOHWVGIWBJXQMFTZKVYPCLEBWJWWKEMTYUNZFKSZLUYRFXPZNONSXFAMQAXYKLDIOJLUHILZCWMTRYKNIPRCSDUHELMGEZTIBUETNPQHXAIQSJRADOFSKUDJZYVBOMOZPQSRGJRJUDGMVCPCVH");
    msg.man_type = 52040U;
    msg.man_eta = 1144448294;
    msg.last_outcome = 204U;

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
    msg.setTimeStamp(0.302309058509);
    msg.setSource(3566U);
    msg.setSourceEntity(140U);
    msg.setDestination(45807U);
    msg.setDestinationEntity(117U);
    msg.state = 9U;
    msg.plan_id.assign("SCCERBGXWHFQMYGIBPWAHDACGYTWKTFEJQHLBARTEMLVBWRZMBFBTSRCPAZKTXRTNYXEVWHKMFPJOHVYDQMUJWVBGLIMOLASTFGVNDIXNXYISREJIPGQYDPCJLKPCZUUVAUAKAFPEWFHDNRMXESXJFXGYLQQUZNJVMDVGHODCDSMOZZIFOTSTNPQOJACZICPEFIAZQDUWIXBVZRUQNEKTUSZKNMGWSKCONBKBYELR");
    msg.plan_eta = 533006769;
    msg.plan_progress = 0.375249347799;
    msg.man_id.assign("WPDENZPSZBKJTCIYL");
    msg.man_type = 56765U;
    msg.man_eta = -320763462;
    msg.last_outcome = 42U;

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
    msg.setTimeStamp(0.201489278592);
    msg.setSource(59717U);
    msg.setSourceEntity(155U);
    msg.setDestination(63517U);
    msg.setDestinationEntity(11U);
    msg.name.assign("DAYJSCUBRKOGQFKPSNKETMAVKPJIJZFYWFNCVZEPDEUZKLOGDQCXQFYKIPRINZDXXDZFUIPLFBJHOZGKYTHQPUKSRJLBTRPABLNVOAEQQEJMYLRKLQVMASYUXGSMRLQSHCYFBTZGUUVAAEWRXTVHOCUGXRJHFCNYIPXI");
    msg.value.assign("EKTHEITSUNYRGKKQQPLIRXNIH");
    msg.type = 177U;
    msg.access = 254U;

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
    msg.setTimeStamp(0.0452868430594);
    msg.setSource(28298U);
    msg.setSourceEntity(242U);
    msg.setDestination(19453U);
    msg.setDestinationEntity(96U);
    msg.name.assign("QIFQNFFFDUPHWYWOCNBUBGGIIMRNHSFJLJSPJEUDATNJYAEGJAGXBMANEINPMWOYAZYXAELOEPGWJAVLHXLMSDSXQOPMHNLUVMBUTBLIMCCKPSDHFVZHFDZNHTHCKOYGOXQASDWAVIUSGXBNVQSZHYOOPESQQTXPJYXMK");
    msg.value.assign("LCVMLTBKHVEXGYDXJZTBAEPTBTWTJXXLWCQQRHASCPWSPGHBIXLRATRTFOINUCUCRSVPJKVOHVLTDQYOZUJYGJMSXYFPOKTJFWPEFKHNRTMSYOAGAGIZAHLZMJWKNNEMZVIYXZBVFNUGAYZXOBRVKWXSRESBDHXONNUDUUWQMYRPCERQVWDIE");
    msg.type = 158U;
    msg.access = 27U;

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
    msg.setTimeStamp(0.357470259622);
    msg.setSource(7147U);
    msg.setSourceEntity(132U);
    msg.setDestination(23906U);
    msg.setDestinationEntity(210U);
    msg.name.assign("WNJQPMDAMFYDWITXMTVCJTYQOCSPSRJKBRMOGPXPNPOWZXCVXSAHOM");
    msg.value.assign("NXMXPFKDSJSHKSJFOKUXCUSYXLTHDZPRHAUVYBNGDFRHYPEVYTTEUUALZQGFMLXBNDNVWEHJBJAZVGHTAZVFWFJOWMGRVWZZSTMLKBHEHHCLOFYKWIBTFLIYGBZKKOVCPHAJFTCZWZJFD");
    msg.type = 235U;
    msg.access = 93U;

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
    msg.setTimeStamp(0.0584640821879);
    msg.setSource(45953U);
    msg.setSourceEntity(226U);
    msg.setDestination(19019U);
    msg.setDestinationEntity(152U);
    msg.cmd = 144U;
    msg.op = 186U;
    msg.plan_id.assign("RIBGQHXVJYPBURPLFUQDLASQHNKJAHERMCNNGZKOHZCEBXQLXLEPCYTYYVSBRFKMMPEMNFFLFIWZDVKOKHFFECKXXJOXBNWBDRIVXJSAJCQNTDRSUAXDUSVWTBCXCIWPGUEIAMUJTMUUITRLWBQVQJWDECVOOWGKWZGNOSTNEDAUEPZG");
    msg.params.assign("TNOSZJULLTHULESVERHEGVBIKXDXZDCQFPIOGZBGBAGATMZISNTLJMGUNTN");

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
    msg.setTimeStamp(0.61695456028);
    msg.setSource(10864U);
    msg.setSourceEntity(117U);
    msg.setDestination(60152U);
    msg.setDestinationEntity(18U);
    msg.cmd = 5U;
    msg.op = 254U;
    msg.plan_id.assign("EUWWWPSYUOCGTADNCJSKQHIWLGTSHLVFRGFGTJEKTFMRZNAKNVBWXFDUJDFQNORCAECPK");
    msg.params.assign("KCGRVBLZAUCYYOGVBZQMYJIXEIPLWMPNFJWKSTFBPAVQGEQJASWDLNUQLDQXFLODXXSINPPROWDCCKARN");

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
    msg.setTimeStamp(0.337599406415);
    msg.setSource(14880U);
    msg.setSourceEntity(106U);
    msg.setDestination(48929U);
    msg.setDestinationEntity(92U);
    msg.cmd = 222U;
    msg.op = 18U;
    msg.plan_id.assign("FWFDDJPYZEZPUHHOPMRIVDFHTECLUZEPABKQBTTGYEKOATITTHVLMXQVZPHNGJRLU");
    msg.params.assign("DKNVEQAURPVEARCMGLKQHJIZGYMCDQFBCWBKVYZTXZLWZMETXTOFWOYDVJPAPHQNZFXCKLGUQLBNQBPMHAOUYIMMP");

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
    msg.setTimeStamp(0.0956565827697);
    msg.setSource(50752U);
    msg.setSourceEntity(243U);
    msg.setDestination(7414U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.157320368816;
    msg.lon = 0.228877417182;
    msg.depth = 0.75829686765;
    msg.roll = 0.0116413094102;
    msg.pitch = 0.18703237942;
    msg.yaw = 0.989889821929;
    msg.rcp_time = 0.928216534434;
    msg.sid.assign("WKDLPWLPHNMPIIBKLDIGJRMOAEDEEPUVUZVBCRWMHWFOVUE");
    msg.s_type = 11U;

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
    msg.setTimeStamp(0.736536982566);
    msg.setSource(9795U);
    msg.setSourceEntity(234U);
    msg.setDestination(31533U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.427915329652;
    msg.lon = 0.0781227452351;
    msg.depth = 0.612628987604;
    msg.roll = 0.143621959181;
    msg.pitch = 0.393361412601;
    msg.yaw = 0.80407250957;
    msg.rcp_time = 0.479523837407;
    msg.sid.assign("RKLFTUMZVQNGXNKNPNMOVBSCQERUHNCIICLKXZGXTYUBELWRMFDPKGIFKBIERXQUWYJQLACJNUPGUQTOMUUMRPZPQVLIZKMJZGNTZELSDEOMIKYRPUVAOOVFWATDHAUCKZAPFYBYDQSSNWHAGXGSSWGBSSIVCYXWXTRVPEDETWBEFJOCDICPTKFNNYMIFJJZHSH");
    msg.s_type = 126U;

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
    msg.setTimeStamp(0.0321563214801);
    msg.setSource(39896U);
    msg.setSourceEntity(39U);
    msg.setDestination(29328U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.664218841068;
    msg.lon = 0.0470341289978;
    msg.depth = 0.428777390921;
    msg.roll = 0.747191428765;
    msg.pitch = 0.849341794551;
    msg.yaw = 0.428112998337;
    msg.rcp_time = 0.524719205349;
    msg.sid.assign("HSNTFBBPKIMPCNPTVVTZXHEPGAMOTVMSQGNUQDPNICAJDGPGZHYTFUNFXWCDEAJLDUROEZWQYRKSSGFIWDTVCCINQLSAKWILXYBQFROFLDLMDSDAEXEQHDFBIKSBAEOTGXYQWHOWHPNWECHGARJFAWUZMXGRZVTANKMYXRHJBQHVFCSIIZMMMXOOFPRRXZIPUDJRVUCQVNEVPBYLUOWLTQGJJUAU");
    msg.s_type = 152U;

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
    msg.setTimeStamp(0.147129599664);
    msg.setSource(54967U);
    msg.setSourceEntity(89U);
    msg.setDestination(19224U);
    msg.setDestinationEntity(219U);
    msg.id.assign("TKZKINKBTINRAWCCPEFFMNXHGTYOMUEAQBPTFGDBECHB");
    msg.sensor_class.assign("ZNWBHVQYTBMJTGBRFPVTXPAJMGENHUOJLHXMEUTDBCEYCUEKXNZJFPQWZNVGCJJ");
    msg.lat = 0.279829724504;
    msg.lon = 0.22164248235;
    msg.alt = 0.165621251185;
    msg.heading = 0.49913379195;
    msg.data.assign("PHLMOFGQXGUBFIPQCTXEOKARVGKFYFQRMIXGORWSXZCWCKLITGLYCATXVDZ");

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
    msg.setTimeStamp(0.855198989729);
    msg.setSource(37188U);
    msg.setSourceEntity(121U);
    msg.setDestination(31654U);
    msg.setDestinationEntity(1U);
    msg.id.assign("XWLECTIKPJMWRZJHXYXBLCWYAFLXEPQREOVAIKIMIYHFUQKMDLLHNTFOAHNOQBURETBUKQQPMCIQLAINJFBNTPDAMQZDGDMDBCUWKPXLKYTWQRORNAXWSGJSNYPSKNXUXOURRGIVBYNCHLLHYFDGYEZHOEQQHFPVUEVMKJDJTGSSLKTSIX");
    msg.sensor_class.assign("CYUCZLBOKORUHPUFKQQWQWEIZCHHDRWFJJNPDERNJLTBCNTVASZRILWMRFSXYFAFOXTUYVHGMGPWQGYGPKOBJXDIRSKPGEUPJCRWNHATQOBZDFFVOLPCDMYXQQZJNQWWUFNEVONHQXOBIELXWDOYUKXTMUDMJMAXLBCGFBSSPBXETAASGHEJYVKIYBWZTMCVISNLPSOTMKDBUHAMACDPGJSTGVISNLTAIYMAVVLLZCHERIRKXEEHUDRJN");
    msg.lat = 0.369113066574;
    msg.lon = 0.511619866206;
    msg.alt = 0.585283454045;
    msg.heading = 0.585190095525;
    msg.data.assign("DWEGPEMORLXNPHGRYNCWKASQPIYMEGOXGKZFNOSULJNWDDVTRYKJQXNERSMSPVBKYEXZLCLYHOEKQQAKKUACRAFWGSLPMBVYMJPLIDMWAFYWMAIKOTVIUAEMCBGJLRWGZWMHWZJTBIQNZLLXFVFCRBTFGJOICZSTJCTHOKHBCEYQEPTIZFSXYUYIGOEQXCUTVDSHPDJIUVNKOPHRTQUOBXBQJDHINWDPMFZADVAZUAJFVBHNDNR");

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
    msg.setTimeStamp(0.236289707014);
    msg.setSource(62745U);
    msg.setSourceEntity(47U);
    msg.setDestination(40017U);
    msg.setDestinationEntity(113U);
    msg.id.assign("VUUZXRPMRQMQTYSAMUNLAVZVCTGPWNSJMWWROJDCTYQQKSUNPAMEBTOJWUVANSAPSEQFDKBLYAVEJINZUECWMEFOGAAXJGFHCHEBQREJAKODLPHURCPIHZNNLIXOOJZXEJIBCF");
    msg.sensor_class.assign("IYBNZUYVDRHLGEIDRWGCDROPEHZEXOAW");
    msg.lat = 0.30097416125;
    msg.lon = 0.826568112642;
    msg.alt = 0.973882682421;
    msg.heading = 0.883936855962;
    msg.data.assign("QTBQNEXFXFUKTORIWABZEPOICAKERTCKTIDKMEVRKET");

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
    msg.setTimeStamp(0.191911929558);
    msg.setSource(63815U);
    msg.setSourceEntity(158U);
    msg.setDestination(53350U);
    msg.setDestinationEntity(157U);
    msg.id.assign("JIINNKBBTOPJJCGLXVHTHBQLAFYCZDDUDMRUUUJGMEFAEYQCMNAHLIGJPTWBSIDKCFNAPRXNRMVESFHAL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QTCGDNGYEFXKLHJGFKDBZLCNBBEPLLSSVYRCABVANZILAMYNDMBAWGPRIKLWXJXVCTTNUKZADOJBEKAWVQSWFZTPESNJRIIMFZCUUPHAYXQULENKMHCCRIVQSESVDWPWUGHMITHDDPPOWMJRML");
    tmp_msg_0.feature_type = 189U;
    tmp_msg_0.rgb_red = 209U;
    tmp_msg_0.rgb_green = 199U;
    tmp_msg_0.rgb_blue = 7U;
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
    msg.setTimeStamp(0.674956217496);
    msg.setSource(17630U);
    msg.setSourceEntity(100U);
    msg.setDestination(10036U);
    msg.setDestinationEntity(187U);
    msg.id.assign("BIXLBKSLAPDPJMMOHENZJCQSCLKMDXRZDTRNWWVAYAKSDTHSFYRZNISELOZYUOHFVPGUHLXPBHOFZXCAPULMOTH");

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
    msg.setTimeStamp(0.982059067807);
    msg.setSource(65421U);
    msg.setSourceEntity(200U);
    msg.setDestination(13108U);
    msg.setDestinationEntity(26U);
    msg.id.assign("IEZVCCUWFNFDEXYLQTIJHJCAKIEOIGQOMROSXKFWBLVMDQERXIVIGJBENCEVXQLWIDSPGJZMSAGDZSFXAXCKDTRMASERZFGCVIGBTXUBPUZKVBRZPPLBKMSKNXMALUTYGJVNNCYKDCYTANEAMRUJQHPQDQPUHNLIGRTZXSZMFUYQOHTWOVLGBPQINJDFOJDWHNSEWYJUFCWXSZPANKFYBADTRTZL");

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
    msg.setTimeStamp(0.26345552436);
    msg.setSource(5256U);
    msg.setSourceEntity(126U);
    msg.setDestination(63056U);
    msg.setDestinationEntity(107U);
    msg.id.assign("MIQUAPBBUOFGFMDTQYZCCDRRNIHAPMKVISTAXTSRLRVBCHFJWHMQKWUPSODGJZZTRWKYNNHJNSQGXLRJYVFVKISDZKSFBTUVWCOJGFPSQDVUJGZBCOHVMQIGFAZPXXKTKMYKGCDZPXLEFSQHESAEROXYRIACJYBZXMWCATAOEQYCJLTUOHRBVWBEBIHZDMNXLXUUZIKMNGWEELPNYDNKETCVOFENDQDSJJ");
    msg.feature_type = 53U;
    msg.rgb_red = 157U;
    msg.rgb_green = 46U;
    msg.rgb_blue = 234U;

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
    msg.setTimeStamp(0.188541123221);
    msg.setSource(56706U);
    msg.setSourceEntity(82U);
    msg.setDestination(19114U);
    msg.setDestinationEntity(11U);
    msg.id.assign("MAIBWKMCOBYYSGLXWTPHDNEVIVAGYOVHYUSQNLDISXUJPBWTYAXOXHCQEGKFLECKHPISLTHDWKGZDHWOBITQFXMGJPUQGCZUKIGAMSYRBQYHHYZRDRTBQYDATFLZACDSWPUVFMFMNLLHZSXNMKCKWNSFJJLMPUCSCFABJWFOPVEXURLPQ");
    msg.feature_type = 188U;
    msg.rgb_red = 106U;
    msg.rgb_green = 170U;
    msg.rgb_blue = 161U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.887921628484;
    tmp_msg_0.lon = 0.224534371078;
    tmp_msg_0.alt = 0.682816610581;
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
    msg.setTimeStamp(0.283882424332);
    msg.setSource(41143U);
    msg.setSourceEntity(250U);
    msg.setDestination(34670U);
    msg.setDestinationEntity(109U);
    msg.id.assign("NTUZBRUHZGFBRDLEXPJMEDFUVTZETWOCPGIDNLXSFSYFZJTKQHPVZSUEZUHQXFBGZXJVF");
    msg.feature_type = 126U;
    msg.rgb_red = 206U;
    msg.rgb_green = 75U;
    msg.rgb_blue = 98U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.912074139508;
    tmp_msg_0.lon = 0.857634192883;
    tmp_msg_0.alt = 0.755057368082;
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
    msg.setTimeStamp(0.493703946652);
    msg.setSource(45535U);
    msg.setSourceEntity(146U);
    msg.setDestination(27411U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.889520947935;
    msg.lon = 0.263895730709;
    msg.alt = 0.822613686377;

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
    msg.setTimeStamp(0.838770729663);
    msg.setSource(7236U);
    msg.setSourceEntity(242U);
    msg.setDestination(63264U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.48535315436;
    msg.lon = 0.545188511791;
    msg.alt = 0.836198263573;

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
    msg.setTimeStamp(0.514305487772);
    msg.setSource(19802U);
    msg.setSourceEntity(228U);
    msg.setDestination(21415U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.973133686604;
    msg.lon = 0.650520583065;
    msg.alt = 0.126117662535;

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
    msg.setTimeStamp(0.361137456005);
    msg.setSource(46196U);
    msg.setSourceEntity(151U);
    msg.setDestination(11629U);
    msg.setDestinationEntity(66U);
    msg.type = 199U;
    msg.id.assign("SUZLTEYKHTLABCSTJZEHVASNPXHEENUIKRBJGWXJABPDGRBKSAOJOPLKTVFNFMPRVWKJZEFOCX");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.55739456283;
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
    msg.setTimeStamp(0.474615273054);
    msg.setSource(41558U);
    msg.setSourceEntity(152U);
    msg.setDestination(62104U);
    msg.setDestinationEntity(184U);
    msg.type = 193U;
    msg.id.assign("FLLUDMHIYMNYSVLPEJTQZNCEUXQULNWYASKYGSIRAOQXRZNPYTZCSDHZGBRCHKJEKGXUABOKNWOGTZVJSMMHFBLKEBXRQDHDBTXMIXASTGQIOECSNXJEXMWTCGWWBFDPMYYZDAFONWVDRQABQCLKJVPUIGIUHFAKTDLHUSCFQCLRYYVSETAEBIZBIXWFBWVTJUCGKCKZHDJPYVQPJAGPUFERZXOHMIUHIVOPWJRVNPEVALQNFMDTR");
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("IDZNJUCAZKKWZKEDUXVFIODANZCPKXPISMBEHXNRWCVRGBFUNEHLEMJTEWSCPVOAHLZZGOOULRTXTDVMSPSS");
    tmp_msg_0.param.assign("RMSVEDUAKTHUCXOFVSUGMEEBZQRHGPTRZWWSFXSQKWAPORJZQTNMPIXVIHCGPBTOQECFVJNYVDLXOWOC");
    tmp_msg_0.value.assign("BKZHSFTMIOYMNCHKONZREGJQQPXOGEIIGWLIJKDIWTPHRRNWWZJSUTQDZPVHSSMFOUPTLBVZFCWNLNJNBBQYTYHGLAVNMSHNZKFRGRUSLDVOFIOERSV");
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
    msg.setTimeStamp(0.0492752571205);
    msg.setSource(48333U);
    msg.setSourceEntity(43U);
    msg.setDestination(38087U);
    msg.setDestinationEntity(204U);
    msg.type = 139U;
    msg.id.assign("JOBODVUUQKBUHEHJPSQTBEFWMIZ");
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.270028777706;
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
    msg.setTimeStamp(0.765228293588);
    msg.setSource(2990U);
    msg.setSourceEntity(184U);
    msg.setDestination(57386U);
    msg.setDestinationEntity(132U);
    msg.localname.assign("YYOAKYHEVZQNLWWSMCTKZCJFZSGXGPJQSGLHXZNMEEGHVJSMXQQQWIBGLJIGYYVTNEPJYXPRRMVHEEVFULGHQICBHMFPVWNTXRUAGACCOZKZQKHVTBEKOITURKPZOTRTDUSESIXCYJQGATUTOWAKBCKJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NPYZZKWCHIQMYDGQJHKPAMIUXHRURAAGZTJOOLFOHAGQBVCXCKJXRYEFMTQBDSUZNZEYCKMFVIDRYKTDBDFPPQXEVRUCRGDJIOTSPYLYHKJSNSLGXUBQYZALRLSEFPSWEXAJGZOZOPQUPGCDUBAHIZVENBVWMHMCWFEVVXDFLKQSBFUWFDPAUILWBNIM");
    tmp_msg_0.sys_type = 136U;
    tmp_msg_0.owner = 36567U;
    tmp_msg_0.lat = 0.438444122291;
    tmp_msg_0.lon = 0.288125565866;
    tmp_msg_0.height = 0.956392630719;
    tmp_msg_0.services.assign("OMHJRGOENPBBRJUCDFYDAEVUDDHAUINSEZXCNASDSBNRQYOEGQMEHMJCTSRFKDCHANBJJVRKBZQMIMVAIWYFTTQPRKIZZEVDGFOMIJFOWMVXJGXKUJZWNPWABQPHLKSLVFWXXLCUPLZEIUGMAWZTZNQWLKMNVYLAOWTBTFLDWEVHCXYNDOXYCFIOJKFRWVUAIQOBEMTRFTQXLYCHOPDQC");
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
    msg.setTimeStamp(0.620209426699);
    msg.setSource(13957U);
    msg.setSourceEntity(198U);
    msg.setDestination(26499U);
    msg.setDestinationEntity(246U);
    msg.localname.assign("HQEEWLGXBRKEWBMMWCCYAYIBIZETYTFNJRVKWTC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HIPJDVXNBDHQIOVXHTQSYYSDMQRWZXEYXCLTCEHKOIWKDVUWXLKCKDFYVCNNPMOEBNOBFGZKQILWMRFUFRHCDBYEGBDGVPBOKSZGMIXQIWZASCFILLNUPDOMUFREAWRECTETABVYALYCJRPOGZZQCDLHWXVYAVRLQIHJMOMBTGGUXAPUJKJTUJNRTSGNWYFSTPBHPJVAN");
    tmp_msg_0.sys_type = 111U;
    tmp_msg_0.owner = 30967U;
    tmp_msg_0.lat = 0.00374083029428;
    tmp_msg_0.lon = 0.721626651934;
    tmp_msg_0.height = 0.669040403867;
    tmp_msg_0.services.assign("EKEJIJMOXGBFUWPJTKGCWXFZNRXHWCZNYEIUFBMVTHOOZRXVBTLKYGGQRHHXNZQDUVQOWQOFKRBNZTIMEFCEUEFJVFSYOJOEVATBMILMXRRGNLMKQSEXKPBBCWJVJHKYTOHYWDHBXSHUFPAFTKLO");
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
    msg.setTimeStamp(0.794595914939);
    msg.setSource(23224U);
    msg.setSourceEntity(189U);
    msg.setDestination(2230U);
    msg.setDestinationEntity(61U);
    msg.localname.assign("XGZLRMQDFDPZGUPBUUYQCQOMEHJVLADKCPFMRZJXRADIBZQHUEVWEDVYVGMAWHOGLPCMTXQJJFMAHKQXBWAIIHTUEOUDIBBCPSVLVSFKSTGZTMLNTVGMOELMKZL");

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
    msg.setTimeStamp(0.485368942288);
    msg.setSource(1446U);
    msg.setSourceEntity(176U);
    msg.setDestination(37853U);
    msg.setDestinationEntity(54U);
    msg.timeline.assign("EGJHUHWVHSSXETFOMWLOIQJXFBRXITJZBTTLTLBBNUQVEYVPADMAPFJPXUBEMDDGZCBPNOUCHYNPYWQRKAIDUHAIGWUKEBIZVUMFTBDNAODUCAUMCHXFMVISJQJLORXLCZNZKXWIIOZASWAFVQYWPFHQMJESRNSYKAZKPKFDQJSJUIBKKLTOCHZKNLRPNRTCQM");
    msg.predicate.assign("DADDTSXGBTTOYSBIBTCGXBUQWYFELPFPCXLTKVIMOXSRWSROBFSHPRDPUELOOMUIRILVFIDEGCYNZIVFDZXAYMZUPHKVENMGJWVZJUBAMOKNULKNQOJXLSIWQKEWBMHZUXHNDVQDCFYWJHNGJSLGCPJNQMNPWQUPYCDCJXTUPCYAQQCFBLRMYZGOSATOIEGRBIMAJKDSHWAPIAZRGRHJHHVYCHALZGEBEOKKRETVNZUSWJEZV");
    msg.attributes.assign("OGIYGVOPLNRLRCYRLBQJHMVPYPGZIEOHWWMQPDILGFEPQFCMZJJAZDPKALNUVFGYASWBGSHNXALBYPDKMSMBUHKWFYIEFCKNAARTUCKXBBDBSKVLESJQFURCMECIAUOCTSNDUZZTVEERSIXPUYVLTRVOXVEQQNGCPIWXO");

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
    msg.setTimeStamp(0.462300589768);
    msg.setSource(52261U);
    msg.setSourceEntity(14U);
    msg.setDestination(56663U);
    msg.setDestinationEntity(70U);
    msg.timeline.assign("KQEAVPRGZHZLCOYXGFEHLWRSHPXCSMKJUAHFROCVSWSQBXFBOEAAGPIPLSMNMJFINCPQMIJTTAQOCVBMUKURGODAHQVDZPMGFHOMOYXHLQBNJYFUKWPWLLYBEDBKQMUOWNVVVCSZEXAAYMOYOGKQVPZRRHSMZLEJWITNDZGTRNDLUSESWADQJULYYHKJKEVUXJKTIDCRTI");
    msg.predicate.assign("SNWINCVUHLYVEQFQITTZSMKBQHPNMIIWDULRVRFPJWQIELFXVHVLKRAENTFYBPBCCDSRTSIGBWOFDJZCFTPCYRGTMUPBDDDTAUDXNJRLYAGGUOAYSEPQMZWHZPCUDMOWBAGNCHKYHVRRMCFXXVOBKVQMXTJUYMEIJQZYLQJSGZELTOKNFIEOSUDIQYSLQAPEKEKZAVFGHJZHONLVAZPAPSCGKWOWNOAM");
    msg.attributes.assign("GRQLBSWZEXXBFMNMEPIFJGUJRJTVFYFWOIEWBCAMWKSJHLLEHAMOBDCBOHMOJYXDRUBQASSYPJQRQADGIKVPOFNIDZYWPKUEENSZTRWTSTDTAUZVIGYRJLN");

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
    msg.setTimeStamp(0.271482045469);
    msg.setSource(41909U);
    msg.setSourceEntity(68U);
    msg.setDestination(60976U);
    msg.setDestinationEntity(209U);
    msg.timeline.assign("AMUOZBIBUSPMJMDLBTIRJXOFYXXZWWYDPDYMKOEXVVNWCTEUMCABQDKLTEBRGPKOUOLJHVBHXGUQRYZZSIWSOGRZVWQJHTUWRSCDIOMLJNNTRVPFQZFGWKHZVBKTHEBAYASHWQLNCKXCUDEGEIPTMECZVYRPQLDLKHAHTCAEFN");
    msg.predicate.assign("UITLTHRCDKBTSQIHXUYFOQBCLHVEUCDBBKNTWYOTPBQGYNCRPPQWQYJXMFMBJRWAOCVSFCKRVSZHPORNDLGYEFUIJXZKXWJTYFINFGEIGRUZVPGILJCMKHGJECIUJVTKOEUMKQJSOZPZWALYSABFEONUFZMALSCQNRBAKBEJMVYMDPGIAXEOVMOCNVNS");
    msg.attributes.assign("ZKITATNJWPBIMKSER");

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
    msg.setTimeStamp(0.798477028442);
    msg.setSource(53393U);
    msg.setSourceEntity(14U);
    msg.setDestination(26928U);
    msg.setDestinationEntity(203U);
    msg.command = 76U;
    msg.goal_id.assign("XSBTIDOTKIIRTFXUHUBEYDESGKUMEQHZETXAILKXFLGJNSQEQOVWXJDKTEJLLANFZWWDNKMZJYSNVICOGDPMHURHMELKWNCCQHXMPOEPYXYMMSXTFRFYMADBBYFRWINATJUUUIZKJWDUUGBTHSGWDRXVTVBVGMFLQRRQGVZRALRGPPUYC");
    msg.goal_xml.assign("OSNTFSOEBLNOBYSAYTCKHCVCMBFCTBXTPAASXRBVROLJFZRYNJMUPGMLYYBPKXIZQYLDXTFEOHHEEHNIPZVUKJEDIGDMWLKFIAZOCXBX");

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
    msg.setTimeStamp(0.413052244033);
    msg.setSource(8342U);
    msg.setSourceEntity(128U);
    msg.setDestination(49714U);
    msg.setDestinationEntity(196U);
    msg.command = 248U;
    msg.goal_id.assign("XOYVSJLHBCXJAEIDGKCRFFEBGYRIHQSYMIFJSHSPBDHAMISNFMTZCBKSPOESNHWWAEILRZPPZJUCHDXDQVMTEUZQMWULGPQNV");
    msg.goal_xml.assign("HGIIYNMEURPRKQSOQJKJSFVTNVSLBXZRDOZJBPODUCZHDFTZPQXEJAOCNKLNOHTCQAAZSCWVFHLZITMAXNKXYICPYIAMKZFXQTCTEDWOPBHURWPEMLSBINFUYEORDBGEBKHYFKVCJYCTOJUMMBSAFGVXEGKTUMGLJEISSWCQLDTPKHLNLJMSWAVZYUDWUFWTRY");

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
    msg.setTimeStamp(0.589577827821);
    msg.setSource(24471U);
    msg.setSourceEntity(194U);
    msg.setDestination(45863U);
    msg.setDestinationEntity(13U);
    msg.command = 51U;
    msg.goal_id.assign("KBNGKFDEAJPMVVSDPWYHTYIRSMWFUWNZSCYOHHBBIVDRTIUMZLYULTJXDYGGEBEIPXVOBPGNTXNOULIFSVOUJZEDKANVNPZNCHRQLISZFHXQUILMMPQURVXACKXIHKFCEKZFTEEKAPVRTOZOYXJMWWXROYBNKQRGGIJABQDSJZCAKJSRBMDUXYWGDE");
    msg.goal_xml.assign("HAYHCYKZEBMLHATIAHYTRXUQLXNIIVBDXOQAZTHSXLJYCNRPBWMNNHENRTCLLGTYUFGMJEWWUADWPRBZOVQOPPSTGVFTJAGPLUGPGSAUEIGMOREMWHJWO");

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
    msg.setTimeStamp(0.306070547752);
    msg.setSource(22584U);
    msg.setSourceEntity(197U);
    msg.setDestination(44708U);
    msg.setDestinationEntity(52U);
    msg.op = 71U;
    msg.goal_id.assign("VMQNXHVJDNQTEPIHPWTGUUHEUOSBEPBQHJXTCCSFYQKUWOYRBMTXRER");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FOPVVWYLCGUHRPFAUXPVBKGQEUXMKDGVYLQLGRNGMGCHYSVOWLYZANTUQWAVOXNHZSFKOYDNOZNXMSEQNRWDSWBLRSPPTPEKMABOJFLFCIJTUYCKBZXKOZFJMEDZUBCXLELCZZSMHOJTXABWOEWXIURGWGKHMTDPKJCUHNMBIRWADIFHYJARQSDSEVBCJZQNHVGJIASNHKTPL");
    tmp_msg_0.predicate.assign("ZUDGVQYWNWMQUSTZ");
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
    msg.setTimeStamp(0.616480199856);
    msg.setSource(32483U);
    msg.setSourceEntity(191U);
    msg.setDestination(37461U);
    msg.setDestinationEntity(11U);
    msg.op = 112U;
    msg.goal_id.assign("RGGCWFTHAXWDOALKFXLVIJZGHTQADYUDIQHCOAABYIKHQIXZWSYTLBRNCDZKZWFHEADFQXBJNULPMRXAWJGDSPLYEZLHEGOQFTVGOYGSVOYWWEBEXURVEITSFPKSKOBUOYSEIJJNNMRXTDYGNVPNZCNCQOFRTIJPJRG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QXUJTACTXEWJEWQYGDMXCOUVTCJNCEBSKDYMFGAKUEDQOHIYWHMTJBKDWPSJYIHMIXFELBJZMPKAKVCGYZHGCRAGSZQLDOIBBOHRRRJLITPLHRKSVHLTPDGSLWDGVWQOPGRKPYFVZYIXWNEIMARNPAOYSKOSFXVTKYZAAUBENRGFNAURFBWDSNOCJXJDULQZXFQXMHUAPIPHKEIUZFBVTMGRTSESWVUCVQ");
    tmp_msg_0.predicate.assign("KDQRRDOROSETKOXZOPLFPLVJLHVZCBIKZSYMSVDWUIMOICWNPRHMFIQGUOGMZGNFBWJLNDWMWSGPKTSTVLYMOFUQYAWTGFJYEHDJ");
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
    msg.setTimeStamp(0.390215755428);
    msg.setSource(28281U);
    msg.setSourceEntity(57U);
    msg.setDestination(41085U);
    msg.setDestinationEntity(87U);
    msg.op = 35U;
    msg.goal_id.assign("EMPEKWCGCGSEJHHYTJKKEIQYHWYTALWLCEADUAWZXMGQICTUKGOLRONDXCLBMARLNDRUPQWEKOVZYVSXQXNFCKNEWYMFZQKNNJBSRRYMSYNGOGBS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SFYIVEYKZMGINAGHLMDOVOTOGRRTCZMNDECWQWYIAVPLGAJDHEQWLPCNQBHTEFGDJYXSEVZAKXPRPBAVEQHTGOZJJFXKHHCBPDHNQDZXYOUYZHUAGGIPQRFWYXGCSLMHKTNUOLSOJXNWUBWMTEWQFCBHOAJCESMMQFOYARZ");
    tmp_msg_0.predicate.assign("XNKKLQPZPYSPRKQZSXMCYMEEGNHKFAWHSBPDISZSTMBWKJKEHAOLBZDVZXYNDYUHLDIDIRFNRELXRBVEDBHKIGVTOIRNAOQGGJSHKCZSFMNRFQDXXOTZRITQVWBAEVYSQO");
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
    msg.setTimeStamp(0.993228867195);
    msg.setSource(3299U);
    msg.setSourceEntity(200U);
    msg.setDestination(51590U);
    msg.setDestinationEntity(160U);
    msg.name.assign("OIINNKGDVYXSHQHKWNZEZPCJFXAAUSPCMIUUIGGCQSJPLQWQUYBOEOBRXTYFVBRITBXCVAAJLSUGRIMAITLTQKDHENDGJVTAHKHUFLPMWLNEWDCEWXFCKFLNRUDIPQWAOAQJENYLSRKPYGWCGGMXTMWONFFZOJBHBNPFZDLZMOZYYRMYDLSVBHFCVHSJGSTZPDBCHJQEXQUMGKVAVRETH");
    msg.attr_type = 192U;
    msg.min.assign("EPXJBTUCTLJODOIPB");
    msg.max.assign("RXCVDFEUDIMKZRXPAJDBTSACQDVLHAJXBYTKRHERGYHPVJQTAGCSBWAZRZIZKPNIFTHUIXKHXBZGOFLIYNMYKPLOZFY");

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
    msg.setTimeStamp(0.309561289265);
    msg.setSource(59056U);
    msg.setSourceEntity(1U);
    msg.setDestination(49654U);
    msg.setDestinationEntity(26U);
    msg.name.assign("ZVOQYNFXJWETANVEOGDHHSRGHWJXQOYDOEDZPHPCUZETZCIFJAPNYERYGFWTPKHZIEWKDBVDAHJIYNMLXKGFOLLRTABFKLOKGGSVZWFQYVTRUSPISIXGUFDMDGUSCYMLARLZBNKBLQTVMBSPJHXTCAWHDRNWXZJAKPIXMMUUUHRYGPNJQJOLJGAIMTNVYRCSXAZCUBOIKBCTKUCFQRLTSQDFYOSNWIEWHIZUCPPMAWXDQOXSNV");
    msg.attr_type = 161U;
    msg.min.assign("NMWDUBXBCFXZFHVBQRUFBYTYCUZIYMOHXBHZJADLAPPZOWNRVLILREOKCCSKYHESUVOXLCGWBPD");
    msg.max.assign("EDUFSDRONUKTXANFKBVPJXVHQMXJZZIUKLCXDKOGBMTYAYXFNHBMQVJGYLITPQEIRPLFLDQKYWEYJPWRJZZAPGEPYDWGVYEUPNHTSIGDKBFMVYTDNUHRGMNZLOLSSZACNRGCZGIIJVSMBOHIHUZKRCBCRQUMHTMTFNSEJENVIRAKXRORXCUFUIUZ");

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
    msg.setTimeStamp(0.217205576416);
    msg.setSource(1999U);
    msg.setSourceEntity(92U);
    msg.setDestination(2450U);
    msg.setDestinationEntity(58U);
    msg.name.assign("ODVAFJFFAVBYYWWMRIMOKHEPJNSWHIWGOFHZDVOQWTXVVPHJZRKNUDUFFQRPQUIXATUDRTOHUKGWHBNBXDALJ");
    msg.attr_type = 136U;
    msg.min.assign("RESGJQWEJXTMPXQHMXYPWGZWYTMLIUKB");
    msg.max.assign("LNPFAKYGRKIWHNZPZYNJARTGFERZISOAPXMPYEWTKHZWUPFJSRQGDTLZKQJN");

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
    msg.setTimeStamp(0.528535431529);
    msg.setSource(48036U);
    msg.setSourceEntity(101U);
    msg.setDestination(45072U);
    msg.setDestinationEntity(6U);
    msg.timeline.assign("JSQWOKKYORRTVLFZACEVNHORGOJKEFCADYIBQLIGXAQFSQLMVPUQWHWDFCVQLSAZDIWMTKYLNJSTSWWPCPMOYRYNRBTORLNNBAHAPIKF");
    msg.predicate.assign("FMKDKGVHTGIFUJFZMJTLYKDFINPBVSAJUIUKURYLZHTMWXYJVIZCPTIZGHKQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MKUVPLCIHHAGXKQIJTAUNSFXKCKBWANSFOUQTUIZHXASCDFRHSAVSQMTLMKOIXKWOGQPGCWDXNPVGECGMZQNBBVEWAGTRWYPQCVMHEUBKYHJJACYPNFTOOFNSZQURSDTZEY");
    tmp_msg_0.attr_type = 42U;
    tmp_msg_0.min.assign("DGOSPUISOTQJGLZRDDNSMJTFVMTBUOOBDNDHKNVRYRFRXAIZUURHWYFSPPIIXFPLGGTCYLOZGBKZCDBRQVEKWBIQTNWIAXCYXOCABMVDLGVFGMBMSPOIHSNWJQLHQEVSMGXHUWLHAYMSQIYMTHLBUYCCXHZBAIVPVUUGFEPZRZRJFQLPDJXDPXNFKCUOKUEKAAWZQXVWQETBJIEWFJAEVKTNTCLYKQKCYNDJYEZHJKMEZ");
    tmp_msg_0.max.assign("UJPVKFENKLQDLCFMTYMAPNSTZGIOASCAIRTBZOJJKQQIRVWUFLYBWCQPXVTZXJXDYCZYHGCIRNXADVTMSDEBWDGAGTAWNBYIKYUJHLZVKDUUXFQPZVYPBBLISNXQWXXLHJZVVJPDMYERAOMEFOQRETJWSYOPZDHIKLXJHFDHDMCUGOCKATWNANRTS");
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
    msg.setTimeStamp(0.484629638589);
    msg.setSource(5654U);
    msg.setSourceEntity(201U);
    msg.setDestination(22601U);
    msg.setDestinationEntity(22U);
    msg.timeline.assign("QVMUMEYGXPKGFRSNSWYMEWYQSGLWDDIOYBMSEQWHCVTHTRHKB");
    msg.predicate.assign("HKWLOJPKNHXPQMSTEVBEPQZGQPYYQRSWVTSZMRPBWDNODUUZNKMQZWYUONSCABEFXCRBTOFMROUUDKQIMXBWCPZFHGLCLSWJBLXFOJPZSBLIDKRUEDHIVCESDDKHPHAEYPWFSVDWNFRICWLPCJNVFBEGABXXMZIHGZAFCU");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HKNUFGIKIHCIMJHJUXEYKROVBUTNKETANNZUXEUPOADILFSFLXYPWZQKPKGLNRBCJGMBAMBSTOAUHXLEJHQTOSDNUSXZZQSTFPUXXYVBQSFPFLIAGBDGSAGWUEDOLDGDHPDNSNOCFDJCBHUZWKJFTORSVIDXMCEGNQLCRASQZAWKENICLBMLGMZVQIFQAXAHEHRRJOJZVWRPOPWCOWBVYCYRDVEKMVMJXYTFZQTQPMY");
    tmp_msg_0.attr_type = 107U;
    tmp_msg_0.min.assign("PGGSBXUUQLUWAIEBAKHJOTNHRXTHDVNZCTNFKZHHKKFSABZVVDNAHMYCCCWIWVSTVCZIQXKCSYIMAPAXFVXFQQMARXGSMPSWLUNIFYFFEFNYKBCYEBGQEQPZIPZCJBWLRUDDITSJOBXVATKGLFZZBJD");
    tmp_msg_0.max.assign("TKROFSSCDDJVXYZRFDNCORPWSCNFIXXBTWYHAKDCNFISQUFQQMOJULMHETMDZBSYBNIGHXLJPTFHVAXYBN");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.278944633228);
    msg.setSource(35185U);
    msg.setSourceEntity(94U);
    msg.setDestination(18034U);
    msg.setDestinationEntity(15U);
    msg.timeline.assign("FNJHEMXFAIICGACLBWHUHRMLNNKYEXKSGLWOTTPDCDVKBVYNKRTMEOFHOPHDBFGUWKPSXQOPQQHDGPJDMOTFQELYHMXBGNSNIDGSCFGQMIERAQRUKLZGWJTVXTJSWTPVBCDFILORZPARVHIXEGYWAV");
    msg.predicate.assign("OJNWSBATSRGCUSFYCHNUKOTLWJVFQSUEQHVPHRWMRKYFIAPESHYMDKSZMR");

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
    msg.setTimeStamp(0.693900293688);
    msg.setSource(2421U);
    msg.setSourceEntity(99U);
    msg.setDestination(64634U);
    msg.setDestinationEntity(95U);
    msg.reactor.assign("QXGEKJANEQALFMSFQJBLQGUFLNMRYAAQTMAGXGQLSHAQGDTIMUKBBNTCHEJXSUXLZNWQPUDRMRNGFVZIVNPHNRRDIPMHCJYKCRTIWYYRBZCDLZHSXPIUXPXFWNQOZIWKNSOHJTDUUKMTOBVFXBSYFLAIDEEZHEHWRZOCXFYWVJJBLLVRSYVEGROJMBOQFVTBYCMCIYUYAKJCZSDJOWVXDPPCTPWUPSLIAOZTGDAP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SZKNLDICOUQEMFQYWWITRSJGDEXOWOHPAMBFCXSWWLZJHGDPRNEBVQCKVZJVHAQJCGZVMPGENYPXIMEHNYCZURQTCKRWNOJDBKANMYVTHFVKPSHFGRPJZWTKKAZCZRBQAYFOLSKHSTNLYL");
    tmp_msg_0.predicate.assign("FTUCMQUGEXCWYDOTMTWZLCKZBHQBGEIKAQEQGJVLMYSLPRARTZDZIQBL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UDGNBMYQKUHAXASSECAJBRWJDCMPPOOZRGFKGHGJOQGVUIHZKVTBNIYTGXEVUPYWEBFVSMYEUOHVGYWCBCIBYCSNVTZIOGNUPWDJFWZELIJVDEXNFYIOWVPXRPDMTXCKACXCHPDDBFLQKPLMKMATMDDZUYJBXMHZ");
    tmp_tmp_msg_0_0.attr_type = 241U;
    tmp_tmp_msg_0_0.min.assign("SOMILVIRZCLBCVRUZXQZOVPCNFHRSFJCGPUWLYXBYKNIEHTUXBPGNKZEUAOHGDQAQERWYHJLMDWVSNZPEYMQAKCZUWAVCXQRLATMTOXKFVBCMYOKTTJFEUIFADFJXNPWVMHJISOMNCUGJWLYSHWMBKDOHNVZSYLFZABQNXJXVKMFPFCGHYTIXEATIXLKTJVJUHPSDEURZODQGNUELBDYRWEGRJHPKSDIWGFGIABARSOPGTBDBKTYQQPRILO");
    tmp_tmp_msg_0_0.max.assign("QNNORMERJAREPSQFLPVEXWUJAWHKBXACZTGP");
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
    msg.setTimeStamp(0.961035135296);
    msg.setSource(34324U);
    msg.setSourceEntity(107U);
    msg.setDestination(13264U);
    msg.setDestinationEntity(78U);
    msg.reactor.assign("YNGMZUZZAQJNYDXVHNEOXMLTCWVTKSFVRAHKEIBDMTAZDUMDYUFPROYFZXDBQXATIHBCGFAQMJNSRADOHCNICWLWWLFTDQIVEWOGOUKNNKPELSFQRMJHXHUPBJOIVKFJTEDYESYTFVWPZHRYJWOSVADXTATSYVQSIKPLBZMIBQVDOEBFRMLNBRPLOVHOBENHPGTWRKQGEUKHCIGCJMCSKFJAZ");

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
    msg.setTimeStamp(0.250038404191);
    msg.setSource(11789U);
    msg.setSourceEntity(221U);
    msg.setDestination(62980U);
    msg.setDestinationEntity(167U);
    msg.reactor.assign("DGPZQWXZPVOVJEBLBPWLXNZKVWWUYJKMHTJDBCJEOPWRCRUWFDVULZDOEHUKZYHBPSDJAQSHGXYQCXEFYNQPBWKVGWBXKHXMDNSARIXGPL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PHSSIWJLOFGVQQNXWFLIYGKITALEIITUPDSKQTUDMHTVIKJVQZFKZNXFPTZXNBYVXRJCVTTIKHGCJPDOOHNHKQJFGGPIRABASWZFANMVBKRYPKXYLELGEHWLSQNJJWHLQZ");
    tmp_msg_0.predicate.assign("SVDOEACIGQGYNSKFOSCGZFFPBI");
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
    msg.setTimeStamp(0.782771659671);
    msg.setSource(51950U);
    msg.setSourceEntity(30U);
    msg.setDestination(41535U);
    msg.setDestinationEntity(137U);
    msg.id = 21U;
    msg.width = 11771U;
    msg.height = 35391U;
    msg.widthstep = 40545U;
    msg.channels = 194U;
    msg.depth = 54U;
    msg.finaldata = 59U;
    const char tmp_msg_0[] = {116, 61, -74, -103, 51, 77, 56, -103, -31, -12, -56, -25, -48, 56, 94, 27, 77, -41, -72, 123, -31, 65, -105, -105, -30, 81, 89, -125, 60, 20, -38, -119, -113, -27, 118, -67, -40, 92, 26, -9, 10, -109, 108, -32, 19, 11, 97, -56, 44, -21, 98, -61, 6, -13, 40, -22, 90, 8, -11, -69, -11, -44, -80, 93, 1, 86, 69, -66, -103, -9, -98, -118, -17, 47, -72, 9, -14, 85, 80, -40, -15, 45, -114, 87, -71, 95, -3, 90, 123, -45, -122, -128, -91, -116, -74, 62, 28, 51, -60, 84, -15, 118, -33, -113, -105, -7, -15, 78, -86, -85, -112, -109, 90, 58, -1, 105, 96, 49, -46, 125, -101, 27, -12, 109, -67, -115, -105, 0, -36, 103, 88, 107, 29, 40, 33, 123, -88, -75, 116, 3, -46, -119, 12, -30, -22, -47, 66, 12, -125, -114, 91, 113, -21, 4, -3, -123, 20, 13, -6, -62, 78, 38, 97, 112, -125, -115, 83, 81, -69, -56, 47, -123, 120, -119, 72, 89, -99, -115, -24, 13, -98, -125, 40, -12, 113, 29, -118, 110, -42, 58, -4, 2, -98, -84, 104, 102, -53, -23, 30, -10, 46, 30, 3, 69, -29, 90, 16, -10, 47, -126, -32, 125, 91, -18, 89, -67, 103, -81, -75, -97, -37, 79, -29, 11};
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
    msg.setTimeStamp(0.00390124292064);
    msg.setSource(59294U);
    msg.setSourceEntity(95U);
    msg.setDestination(59485U);
    msg.setDestinationEntity(21U);
    msg.id = 184U;
    msg.width = 44114U;
    msg.height = 8533U;
    msg.widthstep = 22856U;
    msg.channels = 135U;
    msg.depth = 203U;
    msg.finaldata = 129U;
    const char tmp_msg_0[] = {-29, -60, -10, -80, -63, 38, 14, -37, -57, -17, -73, -116, -90, 8, -46, 96, 89, -56, 111, 64, -65, -58, 126, 61, 115, -123, 102, -4, 68, 84, 99, -124, 13, -29, -31, 99, -76, -72, 89, 27, 103, 61, -54, -51, -27, 41, 85, -56, -49, 3, -27, 91, 45, -71, 41, -10, -110, -47, -10, 110, 87, -73, 40, 80, 100, -115, -56, 114, -82, -57, -109, -98, -46, -111, 124, -61, -6, -27, 70, -9, -95, 70, -86, 0, 39, 73, -18, -115, -118, 103, -74, 110, -96, 51, -12, -63, -59, 110, 125, 60, 105, -81, 115, 54, -18, -64, 91, -19, -55, -88, -97, -114, 79, 77, -11, -106, -76, -61, 74, 59, 105, -105, -113, 6, 101, 113, 3, 93, 96, -116, -122, -45, -110, -68, -113, -96, 80, -125, -86, 36, 72, -88, 32, 106, 2, -15, -4, 98, -91, -126, -76, 112, -47, -5, 87, -88, 50, 107, 23, 35, 82, 33, -30, 44, -39, -62, -96, 108, -39, -109, -114, -3, 21, -43, -92, 108, -127, -126, -59, 88, -4, 18, 95, 22, -55, -126, -74, 91, -59, 50, 94, -74, -121, 74, -16, -108, -104, 80, 58, 68, -88};
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
    msg.setTimeStamp(0.122964785586);
    msg.setSource(45001U);
    msg.setSourceEntity(76U);
    msg.setDestination(46736U);
    msg.setDestinationEntity(27U);
    msg.id = 210U;
    msg.width = 32846U;
    msg.height = 26300U;
    msg.widthstep = 48783U;
    msg.channels = 157U;
    msg.depth = 172U;
    msg.finaldata = 8U;
    const char tmp_msg_0[] = {46, 105, 20, 57, 101, 16, -99, -24, -116, 98, -90, -75, 19, -15, -43, -49, -17, 11, 126, 75, -33, -29, -123, 108, -57, -104, 77, 115, 123, 16, 73, -94, 82, -15, 108, 62, 104, 22, -74, -97, 17, -9, -15, -123, 68};
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
    msg.setTimeStamp(0.380403385878);
    msg.setSource(23091U);
    msg.setSourceEntity(152U);
    msg.setDestination(56334U);
    msg.setDestinationEntity(178U);
    msg.width = 63061U;
    msg.height = 39301U;
    msg.channels = 23U;
    msg.depth = 227U;
    const char tmp_msg_0[] = {11, -71, -86, 15, -40, -13, -12, 48, -100, 12};
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
    msg.setTimeStamp(0.576280299633);
    msg.setSource(20862U);
    msg.setSourceEntity(171U);
    msg.setDestination(4877U);
    msg.setDestinationEntity(221U);
    msg.width = 12878U;
    msg.height = 29825U;
    msg.channels = 183U;
    msg.depth = 172U;
    const char tmp_msg_0[] = {-115, -33, 63, -24, -50, -20, 0, 3, -55, -123, -38, -91, 65, -35, 82, 73, -92, 28, 44, -52, -13, 76, 20, 42, -42, -107, -7, 86, -49, -84, -68, 25, 115, 26, 112, -126, -25, 3, -89, 51, 46, 7, -82, -121, -106, -19, -116, 99, 50, -45, 18, -75, 64, -27, -7, 23, -51, -100, 4, -47, 77, 109, -1, 33, 26, 36, -111, -124, 43, 31, -10, 75, -61, -6, 44, -123, -108, 36, 33, -3, -22, 96, -94, 30, -90, -71, 107, -79, -1, 39, -127, -11, 2, -11, 56, 18, 100, 102, 54, 8, -91, -82, 20, 100, -99, 109, 75, -63, 60, -105, 64, -72, 76, -104, -47, 94, 27, -79, -8, 6, -44, 7, 99, 56, 54, 41, -114, 85, 11, -88, 14, -102, 116, 100, 48, -111, 118, -119, -95, 97, -50, -11, -39, -8, 31, -64, -122, 2, 24, 91, 3, 33, 30, 77, -10, 54, 81, -46, 60, 97, -48, 57, 41, 31, -32, -34, -69, 75};
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
    msg.setTimeStamp(0.622965291394);
    msg.setSource(63116U);
    msg.setSourceEntity(245U);
    msg.setDestination(64135U);
    msg.setDestinationEntity(215U);
    msg.width = 26450U;
    msg.height = 50342U;
    msg.channels = 82U;
    msg.depth = 219U;
    const char tmp_msg_0[] = {71, 102, -82, 55, -39, -101, 119, -120, 16, 48, -50, -54, -116, 88, 55, -46, 88, -74, -54, -15, -91, 20, -28, -53, 7, 74, 29, 26, 92, 53, 120, -63, -47, 3, -127, -121, 91, 89, -111, 116, -65, -100, -64, 74, 21, 75, -56, -56, 98, 49, -103, 10, -125, -12, 123, -30, -53, 75, 67, -39, -105, -23, -114, 23, 112, 67, -54, -107, 16, 102, -77, 82, 41, -54, -14, 28, 81, 124, -3, 24, -124, -111, 3, -121, -48, 6, -91, 60, -56, 5, 14, -90, -120, -57, 96, -80, -32, -87, 57, 48, 72, 7, -122, 122, -53, -96, -85, 51, -26, 93, -17, 7, 5, 123, -99, 104, -12, -115, 110, -100, 44, 7, -15, -42, 99, 29, -9, 81, -112, 11};
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
    msg.setTimeStamp(0.17255386118);
    msg.setSource(9539U);
    msg.setSourceEntity(65U);
    msg.setDestination(64279U);
    msg.setDestinationEntity(238U);
    msg.frameid = 213U;
    const char tmp_msg_0[] = {124, -120, 77, -74, 83, 107, 53, 52, -105, 123, -75, -20, -86, 124, -119, -38, 60, -80, 98, -123, 1, 14, 1, 12, -51, 90, -37, -115, -40, -40, -80, -98, -31, -84, 86, -123, -61, 111, -21, -75, -45, 37, 39, 110, 86, 116, -76, -91, 41, -79, -63, 49, -61, -73, 10, -84, -55, -104, -62, -38, -89, -57, 119, 27, -51, 114, 46, 46, -55, 109, 34, -111, 95, 34, 103, 71, -111, -82, -7, -109, -90, 81, -51, -8, 119, -79, -48, 46, -128, 2, -1, -102, 76, 20, -43, 45, -122, -110, -94, 54, -10, -83, 112, -66, 16, 87, 87, -67, -75, 95, 102, 118, 71, 111, -20, -40, -54, -115, 2, 15, -29, 49, -31, 125, 113, -70, -43, -3, 60, -82, -71, 118, -34, 51, -28, 91, -6, -89, -25, -43, -44, 1, 115, -120, 54, 46, -13, -20, 1, 13, -123, 60, 108, 85, 70, -110, 87, -109, -89, -82, 110, 26, 98, -40, -36, 50};
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
    msg.setTimeStamp(0.307615753864);
    msg.setSource(49967U);
    msg.setSourceEntity(29U);
    msg.setDestination(55898U);
    msg.setDestinationEntity(65U);
    msg.frameid = 75U;
    const char tmp_msg_0[] = {-109, -25, 9, 64, -57, 111, 11, 101, 25, 78, 104, -127, 31, -62, -72, 80, -54, -17, 48, -27, 107, -97, -4, -29, 87, 85, -78, -92, -31, -26, 70, 57, -72, 60, -20, -126, 20, -39, -97, -79, -56, -40, 59, -108, 60, 74, -7, -99, 72, 94, 77, -25, 11, -12, -91, -94, -20, 108, 44, 43, -6, 54, -89, 65, 60, 45, -78, 103, 47, 21, -23, -39, -60, 18, -27, -110, 66, -18, -100, -20, -91, -57, -62, 9, 52, -15, -71, 35, 76, 126, -73, 63, 107, 52, 35, 1, -41, 121, 53, -97, -66, 106, 84, -114, 105, -122, -79, 33, 28, 10, 104, 73, 88, -51, 10, -25, 4, -37, -42, 84, 94, -95, 121, 67, -78, 70, 63, 115, 74, 30, 68, -106, -68, -126, -81, 37, 4, 103, -104, 9, -32, -85, 93, 102, -78, 122, -32, -47, 110, 70, -52, -75, -12, 33, 86, -98, -7, -25, -114, 100, -107, 87, 78, 109, -107, -78, -117, 3, -83, 38, 54, -71, -48, -90, -14, -97, -30, 92, 64, -58, -99, -97, -89, -75, 56, 60, -49, -117, 74, 75, 26, 8, -80, -47, -49, -124, -85, 64, -88, 20, 78, 95, 45, 96, -94, -48, -31, -53, 81, 117, -58, 37, 120, -41, 120, -120, -26, 84, -24, 63, -74, -97, 96, -32, 62, 124, -100, 41, -68, 20, -9, -98, 100, 115, 22, -125, -13, -88, -6, -127, -78};
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
    msg.setTimeStamp(0.398963239621);
    msg.setSource(65196U);
    msg.setSourceEntity(158U);
    msg.setDestination(359U);
    msg.setDestinationEntity(45U);
    msg.frameid = 128U;
    const char tmp_msg_0[] = {-36, 117, 82, 118, -64, 110, 35, 72, 65, 119, -50, -9, -96, -27, 76, -72, 86, -41, 84, -62, -75, 56, 30, 124, 112, -120, 74, 66, -10, 42, -71, 56, -117, 90, -34, 17, 86, 32, -112, 21, 104, -59, -87, 21, 106, -17, 88, -30, -127, -77, -11, -117, 9, -102, -73, 12, 59, 118, 88, 69, -101, 33, 90, -103, 55, -50, -60, 33, 24, -85, 80, 91, -125, 3, -102, 95, -38, 96, 71, 24, 80, -24, -53, -82, 61, -115, -34, -41, -68, 125, -101, 8, 99, -65, -25, -61, -79, -26, 118, -12, 38, -100, 58, -73, -56, -34, 4, 44, 44, -128, -17, -102, -25, 80, 38, 123, -58, -14, -50, -13, 25, 22, -92, 87, 45, 95, -11, -13, 67, -99, 102, -85, -84, -46, 109, -87, 19, -50, 57, -50, -20, 0, -26, 104, 55, -98, -80, -95, 114, -48, 26, -64, 60, -118, 2, 100, 26, 18, -123, -36, 41, -27, -96, 56, -49, -51, -88, 75, -84, -29, 25, 96, -15, 41, -79, -74, 13, -16, -40, 87, 71, 86, -83, -41, 45, 78, -13, 56, -128, -77, -109, -23, 56, -105, -48, -56, 28, 96, 94, 66, -43, -90, -120, 3, -66, 74, -13, -22, 52, -123, 42, -102, -75, 85, 37, 117, 49, 111, -81, 65, 113, 113, 7, 35, 13, 120, 9, 73, 19, -103, 31, -67, 111};
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
    msg.setTimeStamp(0.239189060017);
    msg.setSource(11001U);
    msg.setSourceEntity(57U);
    msg.setDestination(40784U);
    msg.setDestinationEntity(47U);
    msg.fps = 115U;
    msg.quality = 89U;
    msg.reps = 190U;
    msg.tsize = 178U;

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
    msg.setTimeStamp(0.0446944441336);
    msg.setSource(1019U);
    msg.setSourceEntity(225U);
    msg.setDestination(34722U);
    msg.setDestinationEntity(10U);
    msg.fps = 247U;
    msg.quality = 57U;
    msg.reps = 141U;
    msg.tsize = 47U;

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
    msg.setTimeStamp(0.617927231454);
    msg.setSource(34993U);
    msg.setSourceEntity(163U);
    msg.setDestination(39807U);
    msg.setDestinationEntity(236U);
    msg.fps = 93U;
    msg.quality = 183U;
    msg.reps = 150U;
    msg.tsize = 32U;

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
    msg.setTimeStamp(0.91221764054);
    msg.setSource(39505U);
    msg.setSourceEntity(47U);
    msg.setDestination(31814U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.503971496076;
    msg.lon = 0.0532073910041;
    msg.depth = 9U;
    msg.speed = 0.0885949684247;
    msg.psi = 0.267857322643;

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
    msg.setTimeStamp(0.556134040157);
    msg.setSource(41804U);
    msg.setSourceEntity(220U);
    msg.setDestination(54728U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.720334468826;
    msg.lon = 0.114513793752;
    msg.depth = 84U;
    msg.speed = 0.481990008263;
    msg.psi = 0.350335734249;

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
    msg.setTimeStamp(0.121200767491);
    msg.setSource(23085U);
    msg.setSourceEntity(58U);
    msg.setDestination(28744U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.831671865922;
    msg.lon = 0.558555015569;
    msg.depth = 166U;
    msg.speed = 0.83400364924;
    msg.psi = 0.415879825221;

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
    msg.setTimeStamp(0.354812263969);
    msg.setSource(50852U);
    msg.setSourceEntity(206U);
    msg.setDestination(19393U);
    msg.setDestinationEntity(30U);
    msg.label.assign("JORXZENQFFLACSYYESYGMQYLAHJEATVKOWCBIUPRBRWICBJMVNQDTIHHDCQJTUDTIXOKVJGZQIHIWFSINVTCTQPMMLZUTVNYYQMJOHLRFQCZFNAOEWKCKJATRWFPUXGQVXEGONPCENRKPIGRANP");
    msg.lat = 0.54257458945;
    msg.lon = 0.852997231012;
    msg.z = 0.120756676737;
    msg.z_units = 79U;
    msg.cog = 0.357488352907;
    msg.sog = 0.399174434194;

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
    msg.setTimeStamp(0.93972159617);
    msg.setSource(32446U);
    msg.setSourceEntity(87U);
    msg.setDestination(38203U);
    msg.setDestinationEntity(215U);
    msg.label.assign("KOSIDKWAXZTIJNRFFGGNVKHNUOYKKTCCCGNNQOKBMJOUZBHSXBJIVWWQUNZOURCQQQPHCSDTFXZESPWITRPWHHXSVI");
    msg.lat = 0.663136282559;
    msg.lon = 0.898838695929;
    msg.z = 0.0412435471752;
    msg.z_units = 194U;
    msg.cog = 0.0369298751732;
    msg.sog = 0.905029690418;

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
    msg.setTimeStamp(0.422819933142);
    msg.setSource(24983U);
    msg.setSourceEntity(224U);
    msg.setDestination(413U);
    msg.setDestinationEntity(23U);
    msg.label.assign("UTHIRXXWWGHVMMEFJVAICCEQSRIYWNYN");
    msg.lat = 0.969483074804;
    msg.lon = 0.483312069945;
    msg.z = 0.770371035254;
    msg.z_units = 30U;
    msg.cog = 0.849757838428;
    msg.sog = 0.769983178635;

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
    msg.setTimeStamp(0.477731517415);
    msg.setSource(11593U);
    msg.setSourceEntity(126U);
    msg.setDestination(64627U);
    msg.setDestinationEntity(183U);
    msg.name.assign("XSMNNPVQJPWMFKNETGJGDBAIZTHNWTIRQECWWDIPGQYDWFGHAAYXOGESKKTHMDJSRQZTXGDCNNMBKUWXQHFYUYCLJEJLXBMGSTPZOSOMZNJFVPOUSWELRJMIPKATZEIFDUKYULHEAXIROSCRHZJMOCQCRYUFPBPXTBAGPLCURHDCFKQAIBONAVDIUZOWFUEQKCDJVYSXLYSDHALMVFVNETUBTGWBRMLP");
    msg.value.assign("YVMISGBTUUABLICCRYNLENFGRKCIUQFDNGTXMULATCRVSRAXKARUJINWTCOGDTRVZVHBKPOFMHHZSVQJFFENWFQKWTDEDYPXUIZBSJDLPWBFSMQJSXFZJLAOSQLJGZKHNXNTXUBEDRCWQEZOIJ");

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
    msg.setTimeStamp(0.547081921051);
    msg.setSource(18404U);
    msg.setSourceEntity(65U);
    msg.setDestination(17926U);
    msg.setDestinationEntity(95U);
    msg.name.assign("TQRHSLMDOZRGPXAYGURIIPQKKVLNHTVWXCGWYIIBKQNNMQJRZHOWONHJCAPMWCLHFNENGULNHWOYQSCEASZUDMICODCKBABVGUY");
    msg.value.assign("NIYHCEIQPKBCBVQTOCIZHMUNJOJCIIAOJYFETRGETOUADLOIQBPFRHFZDCGXPTNMGEJWLWABKXDOWARDRMTSNWFPOSBRBSUDSVYPOBXQRSMFXHLEWCGMTBJCXJNGKKTPWQVZGYNRUMWWZSEZSUGUMS");

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
    msg.setTimeStamp(0.960206494358);
    msg.setSource(774U);
    msg.setSourceEntity(124U);
    msg.setDestination(40276U);
    msg.setDestinationEntity(83U);
    msg.name.assign("YHYUWVHOULSDPWCATLWQOUTZXTETVPXZOLEQFRJDFHRCHMGZTTIOVCIFINZKIVJLMUJYLTRBXBVJFCNV");
    msg.value.assign("GCSSVDHOMRIFMUUSNGEIYQXBJLEFUALXLZCDFZJYZNJOWFUHGGWHPJRTJCYTSTWSNYCEBJQRJKOEKJVMLYZJAFVZDISHHWCPNXNGMTYTDPLYKHMGKWVBRPDRZCQUUFOPOANWQEMRABXNTDQAAPXUXLGSIXIGRCEXRQUBIIQQVXYPKYDBGGRNEIUPTWKADBLKVM");

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
    msg.setTimeStamp(0.104526123821);
    msg.setSource(57230U);
    msg.setSourceEntity(224U);
    msg.setDestination(7186U);
    msg.setDestinationEntity(234U);
    msg.name.assign("MTSQUNTLMJRSGDNZPAWIWKOWQLVSRWLECGQZDPWYVRPHEHFRVSJJYUIJVTQIVHANHGCSEYSDRPDRTYUOOKWXGGDKNPMDGIGBXOORKLVQDCJPVFFYANUQBOVVBLNWUJBZFCQBSXMYI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ADJFAYLHNEQWWADKGPESSCLKOQJFACLMXQMSJNMAHBSPHEXBIIUFQDEQHSOCCBXZFOZRIUWPRKATFTDHVCIWVFPPWGDPGGDYGCHRQJKRXWTZNAIGGTPNLYRTNCESRWZHUCOLGCGWDZFAZBJYXXXOYVXFMSRYVAUUNYRVLJLKWLUKOZLZUZILPNUEJKQAEHBJMHDTIMDVSXTFPTSGSMJBFMJYNVBRXVEOPOYHYUCUOZKNIBEBQOVTRQ");
    tmp_msg_0.value.assign("IBABKCSKQPYTZMSVQVTIEMIEOJZYLAHKCVFABHRLYYLPOAWFBCDGDUVOEBGZOHJGXNYVPSYYCWQUZZTWZTLPUOJTTXLXPXZYFWWUZINEBREFGKIATEGSZUFGFHOIHSJNXDPXJLNIV");
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
    msg.setTimeStamp(0.710475013308);
    msg.setSource(1065U);
    msg.setSourceEntity(6U);
    msg.setDestination(51690U);
    msg.setDestinationEntity(40U);
    msg.name.assign("QVMIRCMELCKXDEGEWVHUTBWYKYXYNWFMHRGWKMNWPTLFFFPRVHOCIAISYHYRHBADIDOQZVLQZCIOVBUQKSQGNXSKAVSSAOAIUINTKHDAOPHESRQCPUFABZMXJZUMOYZPJ");

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
    msg.setTimeStamp(0.0758058783149);
    msg.setSource(15846U);
    msg.setSourceEntity(166U);
    msg.setDestination(17167U);
    msg.setDestinationEntity(54U);
    msg.name.assign("JMSSLOFMCXIFXPZZGM");

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
    msg.setTimeStamp(0.793812965141);
    msg.setSource(46855U);
    msg.setSourceEntity(91U);
    msg.setDestination(24004U);
    msg.setDestinationEntity(17U);
    msg.name.assign("XYSKKVBDRARWMOHIEJAXTGHBGTSBSMCEUPZKCKNQHKQMAPWLWVXDXVGXBVLUURFRWTJWAXZIQNOPKUZEXOIODIEIMJYGPITOBSJCERSLBAZVAEYSNTFYJLLSWEXBYMMQAHIVLNGPFRFPPJU");
    msg.visibility.assign("PKVNXONCLGLMJCANQETGNQFJTEKVWFPFAYRPBLIHXKSDRWTPXABHPDLBPJUESLWWKQTGYQXJNEJDHKGRDZKRCMZYWKYJIANASL");
    msg.scope.assign("MQXYGDBHHQUMBXODKXSISTIKXIYJEOMVNKUTCFFWFGWDNUSVWITPYCAKMACYAVBVEAKJONVZHGLTKZJISJPJ");

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
    msg.setTimeStamp(0.050545679614);
    msg.setSource(20780U);
    msg.setSourceEntity(160U);
    msg.setDestination(3924U);
    msg.setDestinationEntity(98U);
    msg.name.assign("QJCEPHKDTOSTRNJQLNMIKZHHADBASTU");
    msg.visibility.assign("MWPTSHALNCUCQQKVSVGJTAJDSSWORLBUSZLVGKIYKIFXZZFAZUDTXEHSPP");
    msg.scope.assign("BGIFARPVEQJYCXUNQKJFMZYPPYVJGULDLADWTYFXIWJHZYVRENOJQGAJJFOQTWGIRDEWIKVKZLTTNBPXSBSZDYFLKETSTEOGOVBHOVQAGCRTANIQCFREPUBCIYGANJLUOSHHFHIKMGAKVNVCWTJAHADVSQZEYODPRWILQSYZTNIXDUCWLRZMCNZKOCMACMXLFRCUS");

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
    msg.setTimeStamp(0.651223250516);
    msg.setSource(39843U);
    msg.setSourceEntity(33U);
    msg.setDestination(20004U);
    msg.setDestinationEntity(118U);
    msg.name.assign("FXRSDKQGFTUYECPLPWZJQYLTOGGGFTLIATZNGBJQUJQJIOKKNSVHNJLWIWDPDPABNWYXVWCFZZARM");
    msg.visibility.assign("BBBZYQGOOBYWWGFLXUCMSXCTKBWBVYDSVTSDEJZRKWXGPIKGZHFXZBESLEPMTIXNVCVAFMEKGIOUBVRSAAYQUTUKUDSUHIKMSABOCNHKEKEPYFJPQAARLFTQVPKIGHPNCIPCGXZGAOQLPGLRQJADTFDIM");
    msg.scope.assign("UKSPUUNSRAJFXLWWZGVIWEFFLZZFTJXJCUBAJTYPGRVVEGLBNIYNYHJWDHTKDICSJBUTSRKWGBTHKYIDQLIGFHFZOUOCILTUOIKCQHMOJELRKPHNKYBMPGYNPHOEVPXAEVMFXKWZHIHEDDSJZUSRCBQSDGPLHANXFZRITMCGMMXASEGDRZPYCTQRVQBWXZQLBWOCODNWTMLYBONBFEEIXQJMAAQKWS");

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
    msg.setTimeStamp(0.176115062284);
    msg.setSource(58205U);
    msg.setSourceEntity(155U);
    msg.setDestination(65514U);
    msg.setDestinationEntity(177U);
    msg.name.assign("XDRIPTDZIBWUYIIJRAMMFZOSDQTBJZHETFAHWVIGJFZWPUEGWITESOOCONXEYMSXFPRGDOZSOKNVQZIGPILXFHSBRLQWLQ");

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
    msg.setTimeStamp(0.67489951724);
    msg.setSource(10095U);
    msg.setSourceEntity(109U);
    msg.setDestination(22461U);
    msg.setDestinationEntity(164U);
    msg.name.assign("HFSBZLUWHLPSXUYBEGZRBLQCSFUDXSVAMYXZRFGEISNGKDPLYNEBQCUUWFJD");

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
    msg.setTimeStamp(0.315405026815);
    msg.setSource(17505U);
    msg.setSourceEntity(128U);
    msg.setDestination(59141U);
    msg.setDestinationEntity(212U);
    msg.name.assign("DJMIYDQPXCAOKBUDNDAFGUXBMEUBRKOKLOYFVXMITTFHRHFNKISTLJPRVHSQRBJMBWVVYMMUQUKTACNCYLGJJIGFAZEVEJOPBEYHZYWRHKCALXRQYWXGBJZPCDWQQATSD");

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
    msg.setTimeStamp(0.662818318519);
    msg.setSource(18732U);
    msg.setSourceEntity(119U);
    msg.setDestination(46170U);
    msg.setDestinationEntity(90U);
    msg.name.assign("UIONGGJYAKDXUPKPRCNQFIVWRXPFSTALYDIANIOMJPHXCYNJLWK");

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
    msg.setTimeStamp(0.285860333685);
    msg.setSource(64644U);
    msg.setSourceEntity(145U);
    msg.setDestination(34638U);
    msg.setDestinationEntity(33U);
    msg.name.assign("RFWXAYFJEYKIZNTJSIGBMMDFBPQXNCDTVSPNXDNVZCOXEMPIEWGNGYDRLHLCOQDXQSUZSIJZUJHVOSUZEMIYQWMHWVSWLBKBJPGAWGLEYIPVHROYZRNEYLKAEUNULRMXCNGXRSUBTAKCYXTESGJPBEFOPGZOOHCMXGTDLWMRXJQLRHLMFSOCKQJKFVIHBSIVRBACZTVIQHFDFFTKHKKUIAQWOGYLEVTDBJRNTWAADJPUHZUNPTYADQO");

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
    msg.setTimeStamp(0.570287427797);
    msg.setSource(38480U);
    msg.setSourceEntity(211U);
    msg.setDestination(31103U);
    msg.setDestinationEntity(24U);
    msg.name.assign("MEQPCEARAFOYGMQLNTKSYFKDLLCQHTTSBDNHXATYYGKFCUXFUPNRMTAAKYAFIROTNTKZQBUQCDRQWGWEHZFFZLPZGSPJGIJCWJMABJOPMESNIQHSYPFIOTIWKPVQNXBVVREGCNNRAJYGXKCGMOEDXWKJWXTZZRCADNVUJLWPXWBEMSJFVBIZSERVYHHHMKLBTBRJACHCXSDXVOBUQDOOMKSUYGUWIIVVLUMLZRDUZ");

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
    msg.setTimeStamp(0.645755816154);
    msg.setSource(46333U);
    msg.setSourceEntity(106U);
    msg.setDestination(23209U);
    msg.setDestinationEntity(239U);
    msg.timeout = 2835283180U;

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
    msg.setTimeStamp(0.48999438677);
    msg.setSource(12766U);
    msg.setSourceEntity(208U);
    msg.setDestination(37596U);
    msg.setDestinationEntity(239U);
    msg.timeout = 3824107071U;

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
    msg.setTimeStamp(0.205921285009);
    msg.setSource(1867U);
    msg.setSourceEntity(174U);
    msg.setDestination(60999U);
    msg.setDestinationEntity(152U);
    msg.timeout = 4093220538U;

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
    msg.setTimeStamp(0.165794428178);
    msg.setSource(41464U);
    msg.setSourceEntity(22U);
    msg.setDestination(13718U);
    msg.setDestinationEntity(20U);
    msg.sessid = 336632614U;

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
    msg.setTimeStamp(0.870263001976);
    msg.setSource(62446U);
    msg.setSourceEntity(164U);
    msg.setDestination(18954U);
    msg.setDestinationEntity(219U);
    msg.sessid = 1300448645U;

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
    msg.setTimeStamp(0.865473411065);
    msg.setSource(24559U);
    msg.setSourceEntity(174U);
    msg.setDestination(14635U);
    msg.setDestinationEntity(245U);
    msg.sessid = 1476030798U;

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
    msg.setTimeStamp(0.0425767310636);
    msg.setSource(63361U);
    msg.setSourceEntity(133U);
    msg.setDestination(24681U);
    msg.setDestinationEntity(105U);
    msg.sessid = 1266633640U;
    msg.messages.assign("ZBXGLDLAZKGKFHIENOLFHBHSQRVJRBERPPMRUTFWEASPBDCZTBLPYMCQSEBFFLHJXFTJYUOFAZQRHSOPNLWDBCDWXURMVAWTONMSLBRGXZMJKXSDGUDTNYAKXLQHDMOSIZIOZPMXFCPWVDVIHLWOYVVVEIZUECSQLVJAPWWBVOQRTJGYXGSJNWIDTMPCYYAGZKRFECJGSFODAIHUNUAYPGRETNA");

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
    msg.setTimeStamp(0.0738359404281);
    msg.setSource(13754U);
    msg.setSourceEntity(101U);
    msg.setDestination(61384U);
    msg.setDestinationEntity(192U);
    msg.sessid = 3737819860U;
    msg.messages.assign("LGWWLGRKZBVHXPCDTNMZJLTNVYQFUJXZVNOTWUBIHABFCFCIAAKTTBTQXHAWPGKICKJVXLPUOVDMHEIPNOYLRJLDZRPRNDQATDYSZFVRDJOMSBXPDKVSUALFCYOSPFSBSSPSEMNEPWQBPMXUYZOIXTURHOEAKGMDQHHZCREAIJRWUMLR");

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
    msg.setTimeStamp(0.0357492472798);
    msg.setSource(8327U);
    msg.setSourceEntity(7U);
    msg.setDestination(54378U);
    msg.setDestinationEntity(52U);
    msg.sessid = 3885592338U;
    msg.messages.assign("IWMTMDKAGQECRTGWRLMCPAOAKJUTRSEOFNHAWXRN");

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
    msg.setTimeStamp(0.0257436272202);
    msg.setSource(31098U);
    msg.setSourceEntity(250U);
    msg.setDestination(59401U);
    msg.setDestinationEntity(8U);
    msg.sessid = 3514434829U;

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
    msg.setTimeStamp(0.161494077731);
    msg.setSource(24881U);
    msg.setSourceEntity(236U);
    msg.setDestination(59395U);
    msg.setDestinationEntity(107U);
    msg.sessid = 1510809722U;

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
    msg.setTimeStamp(0.992013377917);
    msg.setSource(50009U);
    msg.setSourceEntity(55U);
    msg.setDestination(23270U);
    msg.setDestinationEntity(219U);
    msg.sessid = 1880222120U;

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
    msg.setTimeStamp(0.478717636604);
    msg.setSource(42777U);
    msg.setSourceEntity(186U);
    msg.setDestination(64752U);
    msg.setDestinationEntity(93U);
    msg.sessid = 775622770U;
    msg.status = 126U;

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
    msg.setTimeStamp(0.631197505488);
    msg.setSource(63710U);
    msg.setSourceEntity(39U);
    msg.setDestination(44483U);
    msg.setDestinationEntity(192U);
    msg.sessid = 1448636002U;
    msg.status = 202U;

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
    msg.setTimeStamp(0.806077859362);
    msg.setSource(7868U);
    msg.setSourceEntity(34U);
    msg.setDestination(29097U);
    msg.setDestinationEntity(165U);
    msg.sessid = 2126467157U;
    msg.status = 81U;

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
    msg.setTimeStamp(0.875383367906);
    msg.setSource(24700U);
    msg.setSourceEntity(196U);
    msg.setDestination(46952U);
    msg.setDestinationEntity(231U);
    msg.name.assign("AJOYYNVHZGHJICISZOTOUHCNNMQPSLLAZTZFOVCORKUWMQLPKHKSMZFDPWRECVPHENTGRELBSKWACEYUFXOTNHXGBTPISQ");

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
    msg.setTimeStamp(0.531165352163);
    msg.setSource(5612U);
    msg.setSourceEntity(161U);
    msg.setDestination(45180U);
    msg.setDestinationEntity(218U);
    msg.name.assign("ELXOYKRDSJJJYCKQMHYNAVDXURPXPUPIZGPCKTMMACWDGXOLTEJFBSUSKDHBMPZJBMVXTOWBGSBXGCZTKQOHAQVKTLUBJFDWREATWRFIIIFBNGVFCTNBNFFANZJLMUWCSCEPIZQHYAZYVJKLZUFOZODVYADMTLWJYZW");

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
    msg.setTimeStamp(0.628335323673);
    msg.setSource(37071U);
    msg.setSourceEntity(92U);
    msg.setDestination(16736U);
    msg.setDestinationEntity(254U);
    msg.name.assign("CNHYOMIOQVCLYSFF");

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
    msg.setTimeStamp(0.0632127027233);
    msg.setSource(21528U);
    msg.setSourceEntity(128U);
    msg.setDestination(2458U);
    msg.setDestinationEntity(81U);
    msg.name.assign("QBRKPDHEBVOZBKIKMEASVXQHLXGYQBZUOUYXMNRZXWYEZIWJYEGSSIYEBGDQBDUZEEGZZZLIAIWQHLWDCYULRCMXKRCXSWFSRMFCINNWTDRYTCEHNDAUVOFTWGWVZPKXQUQGYOHTWNKGDJVRRZYNLBAMHSAFMTSPOCIFJDNJEPTAJUPHPVKDCBNFTAAXOORGJMUSGPHQFFLPMBVVOLQMNROVDKLVUOGLTHFCIQSTAKAJXKLWPHJJUM");

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
    msg.setTimeStamp(0.262743194386);
    msg.setSource(47602U);
    msg.setSourceEntity(79U);
    msg.setDestination(19217U);
    msg.setDestinationEntity(162U);
    msg.name.assign("RYPOMZDJUPHVBDXXVBAJRASEBCJBBHDZHEGNWLQKDCLNPWYAWZHJSSAOOKTHCWYTLOCDSNAQXOKSWIVPCKVHJTQXXTRHIGDUZGOIBTKJUUEEUHQOVKDLZURGUTHXVJFFIXOANBRYNCNJEJESINQFMPEANLIVPMFQDRDWKGYQNAMF");

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
    msg.setTimeStamp(0.244110830275);
    msg.setSource(40702U);
    msg.setSourceEntity(53U);
    msg.setDestination(2436U);
    msg.setDestinationEntity(6U);
    msg.name.assign("LGNKEAWFGRVUUOTUKEWURRZDWFCNRYRDCOQIISXJOJBFCLHHJUMQMZ");

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
