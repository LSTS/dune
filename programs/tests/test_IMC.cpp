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
// IMC XML MD5: 5563261871977bdb0b45e3d1e53b575b                            *
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
    msg.setTimeStamp(0.627653833907);
    msg.setSource(23241U);
    msg.setSourceEntity(144U);
    msg.setDestination(2280U);
    msg.setDestinationEntity(199U);
    msg.state = 211U;
    msg.flags = 174U;
    msg.description.assign("JBOSHHEOXCFLTOWTXOURWVZXYHPLRYACWPKKXUSLGGKSZHPUXURLLFFKZIWMCZCALISOMJBEQTEKZIDCASWGOFEHNTNPSHYMIDTJXROUFYQMIKVQGUJGDQDXMNYLDECQBBZN");

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
    msg.setTimeStamp(0.716431937705);
    msg.setSource(42773U);
    msg.setSourceEntity(119U);
    msg.setDestination(60408U);
    msg.setDestinationEntity(191U);
    msg.state = 175U;
    msg.flags = 147U;
    msg.description.assign("BWFKCTFIXQEUVILOCTDVNHQTGOZQY");

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
    msg.setTimeStamp(0.979268036921);
    msg.setSource(41066U);
    msg.setSourceEntity(235U);
    msg.setDestination(41179U);
    msg.setDestinationEntity(174U);
    msg.state = 181U;
    msg.flags = 225U;
    msg.description.assign("MJWJVWXXKEQ");

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
    msg.setTimeStamp(0.824498013787);
    msg.setSource(26350U);
    msg.setSourceEntity(13U);
    msg.setDestination(35609U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.0779175076012);
    msg.setSource(14413U);
    msg.setSourceEntity(47U);
    msg.setDestination(59287U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.962532933163);
    msg.setSource(10752U);
    msg.setSourceEntity(166U);
    msg.setDestination(40021U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.152368717282);
    msg.setSource(34325U);
    msg.setSourceEntity(5U);
    msg.setDestination(55079U);
    msg.setDestinationEntity(15U);
    msg.id = 101U;
    msg.label.assign("CFUUSBLSRVHODGHEQEQOSDLNHKKSHOKQFJTUQBIXSWOBAAMGJKPCUNTPPIXVAVIFJTOTTJSSRGABQXMWINUYLGDZGIYYNKBZGTLJHAGVTENGREKYWEBDWIPDMRIVEQKXAPEAZUNJC");
    msg.component.assign("IEYTGQFQXYNPHRFBMVOUTTDNLKGMKZMWOEFRAUNFYSBWTMMOHTWUTELAVLCDALEFBCZMPJVQROGDVFRHVZITSMKPJDEIBUYUEFHOQSUCPYSDFNBIGCBGGDMWWVYXJHNJYRQXKUIGIWHSKRPLZKOJQXQX");
    msg.act_time = 37233U;
    msg.deact_time = 44467U;

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
    msg.setTimeStamp(0.031295975427);
    msg.setSource(33225U);
    msg.setSourceEntity(33U);
    msg.setDestination(14858U);
    msg.setDestinationEntity(118U);
    msg.id = 88U;
    msg.label.assign("SPSDJTWCGFAFVUYPONYTEPNMVSGLLXLAHPYNJKQYLVLADCGXKOHZUNCPVXXJFSWABNDGYDZVFANRIOJUHXCDRMDZRLWFHMBJVUROEJQHUIFIESMXZPCYGNISJMOXEBUSKQPFBBRYCZVIBZABETZWZOXOEAOEDLYIPUFIFQSUMVTWKTHTYRMBCHTOZDKBEQHWCHRHZUFGLKXKPIIJTJQYLKUAQMKWG");
    msg.component.assign("FSFAIWACBXXHYJEWZTHRIQQNKEEBHIAGPZRTKYCORXVQNIOZUZPCDUVBEG");
    msg.act_time = 3251U;
    msg.deact_time = 59176U;

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
    msg.setTimeStamp(0.147752734419);
    msg.setSource(12894U);
    msg.setSourceEntity(65U);
    msg.setDestination(440U);
    msg.setDestinationEntity(169U);
    msg.id = 95U;
    msg.label.assign("OVNFYADZOYDCNZJTFPZJWNJVIKPQSEDAVLYVTFQZFENGASSWHWILPPWUBDGZLPEAKO");
    msg.component.assign("PDQFCAUPORKIOLKHXVPPNOOXKEPVRCMSPKLZVQUUNOXWFZXZRXYIQVJGZHAYYACWOGWYRQQSDMXIVWCHMJOIXEZUCUTEZQIMJAFALH");
    msg.act_time = 14074U;
    msg.deact_time = 10350U;

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
    msg.setTimeStamp(0.125655129654);
    msg.setSource(38296U);
    msg.setSourceEntity(14U);
    msg.setDestination(27140U);
    msg.setDestinationEntity(188U);
    msg.id = 25U;

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
    msg.setTimeStamp(0.531991676872);
    msg.setSource(53775U);
    msg.setSourceEntity(136U);
    msg.setDestination(60615U);
    msg.setDestinationEntity(31U);
    msg.id = 200U;

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
    msg.setTimeStamp(0.364964660175);
    msg.setSource(62206U);
    msg.setSourceEntity(123U);
    msg.setDestination(32234U);
    msg.setDestinationEntity(48U);
    msg.id = 54U;

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
    msg.setTimeStamp(0.0650416356624);
    msg.setSource(15948U);
    msg.setSourceEntity(13U);
    msg.setDestination(57636U);
    msg.setDestinationEntity(158U);
    msg.op = 151U;
    msg.list.assign("CQBXGWMUSCJCNAPRCCDOANTHIFZHGUSQFIQRYSMQETDT");

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
    msg.setTimeStamp(0.960859617798);
    msg.setSource(31053U);
    msg.setSourceEntity(45U);
    msg.setDestination(46370U);
    msg.setDestinationEntity(16U);
    msg.op = 199U;
    msg.list.assign("ZOGNLEHSFKUIFRSWNWHQGLSBPKBSTKVLDGPZPVZYJREFQNWCHKBHNZTVRGYJUQIBNTIVROAEMNYXJKEAUXSMTAWOLPDWICZMUJPRAUXILCANPVOCBDGLIIQRLEJBQGHPZRRDDHUVYACA");

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
    msg.setTimeStamp(0.725651602298);
    msg.setSource(26535U);
    msg.setSourceEntity(225U);
    msg.setDestination(187U);
    msg.setDestinationEntity(116U);
    msg.op = 81U;
    msg.list.assign("VVBYNNUSTR");

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
    msg.setTimeStamp(0.495362494027);
    msg.setSource(12512U);
    msg.setSourceEntity(164U);
    msg.setDestination(27782U);
    msg.setDestinationEntity(142U);
    msg.value = 59U;

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
    msg.setTimeStamp(0.665701931858);
    msg.setSource(22666U);
    msg.setSourceEntity(213U);
    msg.setDestination(20501U);
    msg.setDestinationEntity(149U);
    msg.value = 253U;

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
    msg.setTimeStamp(0.264626686016);
    msg.setSource(35221U);
    msg.setSourceEntity(50U);
    msg.setDestination(60913U);
    msg.setDestinationEntity(253U);
    msg.value = 88U;

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
    msg.setTimeStamp(0.232185542349);
    msg.setSource(1131U);
    msg.setSourceEntity(212U);
    msg.setDestination(52638U);
    msg.setDestinationEntity(79U);
    msg.consumer.assign("RBETIZAWGYVGNIHWTQTBFNLHNOVHCRP");
    msg.message_id = 14479U;

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
    msg.setTimeStamp(0.946485330156);
    msg.setSource(5420U);
    msg.setSourceEntity(99U);
    msg.setDestination(4644U);
    msg.setDestinationEntity(122U);
    msg.consumer.assign("OVPJOCQFUKZHYPABHVDFFZNNEAHBFVQWUEISPATYNVOKUTCEPCZEBDGMFIAICATYWLDOLBHKJWNTMJSQWALSOLUXLVJEEQVDYGUXMKMHFFQEZCFXFVWHRXGIMDSZGRXKAZTSDPOKYJHTSBJCDKBIQBWPTXPWJURLOMXIQLRKCLZNMWGSWBNRHZTEYYSUSVJNZWHJYPTQYDYUFQ");
    msg.message_id = 29226U;

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
    msg.setTimeStamp(0.422840194399);
    msg.setSource(4687U);
    msg.setSourceEntity(243U);
    msg.setDestination(36764U);
    msg.setDestinationEntity(194U);
    msg.consumer.assign("QBKVYTYWVXMLNXXTPNFEUNAOQLPHPCDHKHWJRFULESCRHETFPIVDGZSXWDJOOTZTNSGSCMRTFKKBRACPDNEEMHWXUHMVUQZJKAZWJUVRXBLYBRW");
    msg.message_id = 46687U;

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
    msg.setTimeStamp(0.394552076613);
    msg.setSource(39771U);
    msg.setSourceEntity(216U);
    msg.setDestination(8707U);
    msg.setDestinationEntity(37U);
    msg.type = 62U;

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
    msg.setTimeStamp(0.103227665918);
    msg.setSource(44821U);
    msg.setSourceEntity(99U);
    msg.setDestination(18499U);
    msg.setDestinationEntity(229U);
    msg.type = 138U;

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
    msg.setTimeStamp(0.937334325886);
    msg.setSource(12290U);
    msg.setSourceEntity(1U);
    msg.setDestination(33649U);
    msg.setDestinationEntity(140U);
    msg.type = 16U;

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
    msg.setTimeStamp(0.256466140788);
    msg.setSource(33174U);
    msg.setSourceEntity(103U);
    msg.setDestination(48211U);
    msg.setDestinationEntity(40U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.728317268742);
    msg.setSource(53612U);
    msg.setSourceEntity(41U);
    msg.setDestination(34872U);
    msg.setDestinationEntity(166U);
    msg.op = 83U;

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
    msg.setTimeStamp(0.752221076218);
    msg.setSource(44240U);
    msg.setSourceEntity(65U);
    msg.setDestination(3841U);
    msg.setDestinationEntity(254U);
    msg.op = 120U;

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
    msg.setTimeStamp(0.661268571394);
    msg.setSource(24528U);
    msg.setSourceEntity(209U);
    msg.setDestination(41930U);
    msg.setDestinationEntity(14U);
    msg.total_steps = 72U;
    msg.step_number = 227U;
    msg.step.assign("RMMJYRDKRNOG");
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
    msg.setTimeStamp(0.496310155735);
    msg.setSource(15046U);
    msg.setSourceEntity(6U);
    msg.setDestination(24493U);
    msg.setDestinationEntity(116U);
    msg.total_steps = 239U;
    msg.step_number = 248U;
    msg.step.assign("NFVBUWTMVQCYMLKHJSTFOOHHMIXZKLEQSJIUQFURQJVRHQPTXXNGTBLIKPBNTEJDOOCBXOCTCGWWLXDUAYMAXRFGFIBRMEBNEEKSYPREKUQXVKAYMSRPBJDNWMHPPAVBXZIGWFCJPKG");
    msg.flags = 38U;

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
    msg.setTimeStamp(0.148968884003);
    msg.setSource(19344U);
    msg.setSourceEntity(51U);
    msg.setDestination(43030U);
    msg.setDestinationEntity(126U);
    msg.total_steps = 164U;
    msg.step_number = 252U;
    msg.step.assign("UTSAIPMKNIOGNVYIPRDWZJDTNTXRBLRHQVAKKNEHRPMZEHEKHGZYRCHUJKTACJHMIOQBIULAWASDTDJVFCQYZTGHRTSEKYSPVKEYWXVYN");
    msg.flags = 200U;

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
    msg.setTimeStamp(0.722431936781);
    msg.setSource(19809U);
    msg.setSourceEntity(20U);
    msg.setDestination(23436U);
    msg.setDestinationEntity(59U);
    msg.state = 57U;
    msg.error.assign("DHAEUNBRYHJMZVZRXVQJZQLMVSXXHIKWFVFEWUNOWREDSXCHGGUHEFHMFLPKZMQOYWQDLQIFPYDETOZCLTKCEPEPYNYHJAIBXVRUBRNCNQDKZMSAT");

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
    msg.setTimeStamp(0.751786557336);
    msg.setSource(15959U);
    msg.setSourceEntity(138U);
    msg.setDestination(28776U);
    msg.setDestinationEntity(191U);
    msg.state = 127U;
    msg.error.assign("SGYACSHZIVGWNOURWYSHWNRMVFTLRYUZHMQQTJJTVAKVSCNFZLJMBZZSBUWRPGENHAGNIULYSQFRHKAXWGXUETXIGORFZUVBKCJHUVTDWZAJCBTZJPCPCYKTPKJHFRSXNWXWGZEEAURHPULBBDGXECUL");

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
    msg.setTimeStamp(0.14612806324);
    msg.setSource(52814U);
    msg.setSourceEntity(77U);
    msg.setDestination(38660U);
    msg.setDestinationEntity(118U);
    msg.state = 23U;
    msg.error.assign("HYQUOTBTDUXRVDIPLVROSAXRSDUCLCNLWMQUHNOTIPYJZNFWRCDYPPKXXGPEHMYZDVHEGHGQBWBFBPBIVZFMZWUYGTSBSHSRFGKVCFROZRMQDBKXUZMYMGQBRKPVTOMABJSOPWHOOIJLLXWVMATEKDSNOJVGNKXJQEAVWICQOHZDIJXPXFADVIQXWLMSZUCEFUGNLBGQIIDCPYWYFEYCNTELNKJCLKURICGAFFTSJSJWJLZQKAUEAYARHENKZE");

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
    msg.setTimeStamp(0.286134158958);
    msg.setSource(56939U);
    msg.setSourceEntity(70U);
    msg.setDestination(15005U);
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
    msg.setTimeStamp(0.0509829042736);
    msg.setSource(63957U);
    msg.setSourceEntity(211U);
    msg.setDestination(51001U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.516885814166);
    msg.setSource(38333U);
    msg.setSourceEntity(9U);
    msg.setDestination(50646U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.840601651041);
    msg.setSource(54516U);
    msg.setSourceEntity(188U);
    msg.setDestination(45660U);
    msg.setDestinationEntity(73U);
    msg.op = 32U;
    msg.speed_min = 0.200735791941;
    msg.speed_max = 0.969399996232;
    msg.long_accel = 0.472089155739;
    msg.alt_max_msl = 0.274909035022;
    msg.dive_fraction_max = 0.94365213355;
    msg.climb_fraction_max = 0.575555883073;
    msg.bank_max = 0.0578800053908;
    msg.p_max = 0.490991206446;
    msg.pitch_min = 0.483991937097;
    msg.pitch_max = 0.362918700649;
    msg.q_max = 0.309679087876;
    msg.g_min = 0.318241850017;
    msg.g_max = 0.0300426032208;
    msg.g_lat_max = 0.7047697003;
    msg.rpm_min = 0.23857201726;
    msg.rpm_max = 0.660319502615;
    msg.rpm_rate_max = 0.805081968524;

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
    msg.setTimeStamp(0.693991126911);
    msg.setSource(33755U);
    msg.setSourceEntity(216U);
    msg.setDestination(13154U);
    msg.setDestinationEntity(234U);
    msg.op = 185U;
    msg.speed_min = 0.548940532386;
    msg.speed_max = 0.706523349746;
    msg.long_accel = 0.887926477986;
    msg.alt_max_msl = 0.72761890073;
    msg.dive_fraction_max = 0.520183534398;
    msg.climb_fraction_max = 0.488762013798;
    msg.bank_max = 0.262468913986;
    msg.p_max = 0.677359092565;
    msg.pitch_min = 0.261371077045;
    msg.pitch_max = 0.950369991637;
    msg.q_max = 0.462423057846;
    msg.g_min = 0.0658109628516;
    msg.g_max = 0.229027982747;
    msg.g_lat_max = 0.945847488509;
    msg.rpm_min = 0.332259576116;
    msg.rpm_max = 0.751802818832;
    msg.rpm_rate_max = 0.681424120869;

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
    msg.setTimeStamp(0.778806535335);
    msg.setSource(52396U);
    msg.setSourceEntity(188U);
    msg.setDestination(3905U);
    msg.setDestinationEntity(197U);
    msg.op = 167U;
    msg.speed_min = 0.873603050725;
    msg.speed_max = 0.857736312748;
    msg.long_accel = 0.112788307469;
    msg.alt_max_msl = 0.292107751238;
    msg.dive_fraction_max = 0.65398688404;
    msg.climb_fraction_max = 0.432408918915;
    msg.bank_max = 0.744574985903;
    msg.p_max = 0.398751578069;
    msg.pitch_min = 0.186770307623;
    msg.pitch_max = 0.981348255741;
    msg.q_max = 0.612508100032;
    msg.g_min = 0.684245102899;
    msg.g_max = 0.870960569241;
    msg.g_lat_max = 0.911827999491;
    msg.rpm_min = 0.20493712838;
    msg.rpm_max = 0.877679443775;
    msg.rpm_rate_max = 0.697214561238;

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
    msg.setTimeStamp(0.141416641069);
    msg.setSource(32592U);
    msg.setSourceEntity(113U);
    msg.setDestination(40505U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.555034336804);
    msg.setSource(47094U);
    msg.setSourceEntity(251U);
    msg.setDestination(17409U);
    msg.setDestinationEntity(128U);
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 17U;
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
    msg.setTimeStamp(0.93269000132);
    msg.setSource(8820U);
    msg.setSourceEntity(93U);
    msg.setDestination(57349U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.312987779281);
    msg.setSource(29574U);
    msg.setSourceEntity(224U);
    msg.setDestination(47225U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.42839923654;
    msg.lon = 0.15270630417;
    msg.height = 0.546945817764;
    msg.x = 0.987309751272;
    msg.y = 0.477956512897;
    msg.z = 0.202936464341;
    msg.phi = 0.670402347795;
    msg.theta = 0.00720946528805;
    msg.psi = 0.990882621931;
    msg.u = 0.625543982159;
    msg.v = 0.816208755289;
    msg.w = 0.855813276551;
    msg.p = 0.0610056876315;
    msg.q = 0.578631308807;
    msg.r = 0.26614759752;
    msg.svx = 0.601344405895;
    msg.svy = 0.535491429699;
    msg.svz = 0.529862419998;

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
    msg.setTimeStamp(0.680442745929);
    msg.setSource(61372U);
    msg.setSourceEntity(81U);
    msg.setDestination(23417U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.0813030687824;
    msg.lon = 0.279687760038;
    msg.height = 0.764153144767;
    msg.x = 0.624036233879;
    msg.y = 0.606724888973;
    msg.z = 0.0875115322425;
    msg.phi = 0.582639464077;
    msg.theta = 0.415922024861;
    msg.psi = 0.219632561021;
    msg.u = 0.758547650812;
    msg.v = 0.42114475735;
    msg.w = 0.690124127157;
    msg.p = 0.998640736259;
    msg.q = 0.971709278541;
    msg.r = 0.753697457341;
    msg.svx = 0.659866745835;
    msg.svy = 0.421276192502;
    msg.svz = 0.296902070525;

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
    msg.setTimeStamp(0.874539642964);
    msg.setSource(56106U);
    msg.setSourceEntity(120U);
    msg.setDestination(22899U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.610621511287;
    msg.lon = 0.520107604237;
    msg.height = 0.286965774792;
    msg.x = 0.838611062974;
    msg.y = 0.0899153526713;
    msg.z = 0.28097775926;
    msg.phi = 0.79723981976;
    msg.theta = 0.97686565532;
    msg.psi = 0.201185165939;
    msg.u = 0.556444370486;
    msg.v = 0.958062757332;
    msg.w = 0.903419567007;
    msg.p = 0.985066497682;
    msg.q = 0.942684247301;
    msg.r = 0.509679085516;
    msg.svx = 0.611591325896;
    msg.svy = 0.297227596431;
    msg.svz = 0.457473201283;

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
    msg.setTimeStamp(0.964371688765);
    msg.setSource(40224U);
    msg.setSourceEntity(219U);
    msg.setDestination(29881U);
    msg.setDestinationEntity(74U);
    msg.op = 48U;
    msg.entities.assign("DSOPLZPYHRAQKWROSRZTJDJEZTWGOTWSYVMCPVXLGPEOOPALQGVNRSSMZXWONRMHRJATWTADNXFUDUXFUBBEGAHDMDXFNMYDRHJIEGHPSGLPTCJKUXIQZBZNTVTEJKWCYYIQEBNGYNOZICEAQGRAKBCQBRWPBWXUOHYIFDLDFCVJIBQSFOMYIRKZIHGQBHUEVNHZJUBFMWUNLATSGWAKFIXLKTKISLSVEZJQJVQKAXFCCFVYCMNMPLOYK");

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
    msg.setTimeStamp(0.560183403466);
    msg.setSource(20131U);
    msg.setSourceEntity(164U);
    msg.setDestination(58201U);
    msg.setDestinationEntity(15U);
    msg.op = 239U;
    msg.entities.assign("WPTGEXZUHUOTBDQMOBGSSVTUVDKXKFNAGKORLSGEYQVCSNIBAZQALYDIIWIBJPDCCLKWZGHUVARUFHBMBBEYFTMAXEPCF");

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
    msg.setTimeStamp(0.587432986437);
    msg.setSource(65420U);
    msg.setSourceEntity(230U);
    msg.setDestination(52129U);
    msg.setDestinationEntity(157U);
    msg.op = 191U;
    msg.entities.assign("FIQAYIPEKQFDBGBRQYVTPMYVDOWSATEIJKNHJRQUZW");

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
    msg.setTimeStamp(0.621148641963);
    msg.setSource(28974U);
    msg.setSourceEntity(80U);
    msg.setDestination(34584U);
    msg.setDestinationEntity(25U);
    msg.type = 3U;
    msg.speed = 8477U;
    const char tmp_msg_0[] = {33, 71, 109, 18, 55, -36, -99, -65, 74, -33, -25, 96, -3, 67, 66, 122, -68, -124, 64, 12, -83, 112, -92, -97, -106, 18, -106, 31, 115, -109, -32, 119, 98, 104, -40, 15, -60, 73, 85, 116, -117, 57, -44, -57, 98, 24, 58, -77, 1, -31, -70, 125, -113, 87, 65, -5, 120, 15, -68, 122, -26, -122, -86, -100, -40, 64, -25, 11, 104, 27, 59, 90, 93, -13, 117, 66, -104, -9, 102, 88, -109, -37, 106, -114, 16, -39, 48, 79, -79, 4, -107, 53, -100, -45, -84, 117, 41, 33, 30, -98, -128, -3, 9, -19, 78, -58, -122, -123, -46, -99, -98, -46, 44, -2, -74, -115, 40, -66, -82, -39, -55, -125, -10, 45, -118, 99, 51, 40, -44, 48, 33, 125, 27, 66, -111, -27, 100, 3, -64, 22, 51, -120, -40, 105, 116, 35, 126, 126, 79, -58, -68, -52, -98, -48, 83, 96, -77, -45, 15, 61, -88, 83, -119, 53, -5, -106, 12, -44};
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
    msg.setTimeStamp(0.305079336736);
    msg.setSource(46856U);
    msg.setSourceEntity(222U);
    msg.setDestination(24828U);
    msg.setDestinationEntity(130U);
    msg.type = 60U;
    msg.speed = 5066U;
    const char tmp_msg_0[] = {-48, 89, 46, 74, 111, -62, -95, 23, 22, -90, -78, 3, -94, 19, -116, -124, 91, 95, -100, -17, -86, 9, -39, 89, 99, 92, -113, 46, 116, -6, 112, 6, -70, 117, -61, -3, 76, -70, -54, -113, -94, 61, 48, -57, -123, -53, -83, 123, -115, -94, 101, -41, -116, 24, 28, 2, -111, -66, -109, 110, 33, -120, -33, 39, -64, 81, -126, 3, 81, -85, 66, -128, 82, -96, 35, 8, -30, 123, -70, 108, 111, 113, -92, 33, -86, -40, 82, -98, 42, 107, -19, -88, -117, 31, -121, -108, 94, -85, -98, 74, -81, -64, 56, -66, 84, -104, 105, -62, 27, -66, 92, 27, -102, 4, 89, -78, 99, 7, 36, -81, 68, 44, -7, -55, -112, -124, -110, 67, -9, -120, 26, -82, -72, -1, -1, -123, 75, -64, 94, -24, 29, 86, -57, -104, 58, 88, -67, -91, -43, -119, -13, 5, -110, 43, 6, 115, 94, 58, -76, 8, -89, -9, 98, 121, 101, 95, 52, 104};
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
    msg.setTimeStamp(0.203192752391);
    msg.setSource(2294U);
    msg.setSourceEntity(12U);
    msg.setDestination(30545U);
    msg.setDestinationEntity(247U);
    msg.type = 242U;
    msg.speed = 59469U;
    const char tmp_msg_0[] = {-89, 99, -18, -24, -31, 33, -109, -21, -10, -93, 111, -26, 34, -41, 43, 28, -15, -88, 50, -117, 39, 56, -45, 27, 63, 26, 52, -82, -11, 56, 15, 8, 60, 56, -38, -116, -128, -111, 120, 105, 56, -57, 25, 58, -66, 113, -115, -13, -94, 73, -32, 10, -8, 117, 109, -36, -63, 34, -103, 87, -81, -8, 91, 39, -56, 13, 90, -99, -73, -9, 81, 108, 47, -24, 45, -75, -92, -3, -4, -84, 108, 57, 28, -76, 114, 96, -51, -50, 47, -115, 35, 57, -92, -109, 113, -39, -18, -94, 55, 52, -53, -15, 19, -76, 38, -69, -35, 45, -34, 91, 117, -116, 8, -83, -5, -22, -71, -127, 91, -74, 109, -98, 115, 117, -13, 11, 84, -68, 39, 105, 117, -97, 50, 62, -68, -101, 96, 108, 21, 46, 104, 4, 22, 64, -64, -118, -117, 108, 8, -71, 96, -126, 23, -94, 92, 82, -17, -120, 58, 87, 65, -41, 31, -32, -21, -65, -90, -57, 79, 63, -119, -27, 96, -119, -62, -25, -127, 12, 94, 107, -125, 120, -90, -35, 39, -66, 122, 12, 54, -71, -43, -6, -48, -47, 70, -69, 17, 60, 34, 55, -18, -3, 3, -71, -104, -114, -8, 87, 108, 116, -84, -91, -32, 120, -111, -105, 88, -25, 24, -95, 115, 58, -37, 68, -70, -90, -46, -41, 93, 99, 90, 120, -1, -12, 94, -95};
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
    msg.setTimeStamp(0.728713850586);
    msg.setSource(31634U);
    msg.setSourceEntity(149U);
    msg.setDestination(47568U);
    msg.setDestinationEntity(136U);
    msg.op = 126U;
    msg.tas2acc_pgain = 0.792345778117;
    msg.bank2p_pgain = 0.341681146155;

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
    msg.setTimeStamp(0.892508375521);
    msg.setSource(42247U);
    msg.setSourceEntity(22U);
    msg.setDestination(18016U);
    msg.setDestinationEntity(18U);
    msg.op = 97U;
    msg.tas2acc_pgain = 0.824765423769;
    msg.bank2p_pgain = 0.820836583352;

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
    msg.setTimeStamp(0.283269654638);
    msg.setSource(12071U);
    msg.setSourceEntity(102U);
    msg.setDestination(2653U);
    msg.setDestinationEntity(191U);
    msg.op = 127U;
    msg.tas2acc_pgain = 0.24010931475;
    msg.bank2p_pgain = 0.8543183958;

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
    msg.setTimeStamp(0.863811591277);
    msg.setSource(50413U);
    msg.setSourceEntity(13U);
    msg.setDestination(33655U);
    msg.setDestinationEntity(143U);
    msg.available = 1451494109U;
    msg.value = 143U;

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
    msg.setTimeStamp(0.783160261278);
    msg.setSource(47179U);
    msg.setSourceEntity(240U);
    msg.setDestination(5357U);
    msg.setDestinationEntity(71U);
    msg.available = 4123734207U;
    msg.value = 219U;

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
    msg.setTimeStamp(0.977485084743);
    msg.setSource(64704U);
    msg.setSourceEntity(61U);
    msg.setDestination(24217U);
    msg.setDestinationEntity(83U);
    msg.available = 3375431069U;
    msg.value = 58U;

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
    msg.setTimeStamp(0.144402977423);
    msg.setSource(51863U);
    msg.setSourceEntity(22U);
    msg.setDestination(2126U);
    msg.setDestinationEntity(188U);
    msg.op = 107U;
    msg.snapshot.assign("FVGBJJDGFOJCWLKLPMYHTRAIUOUMUWIOEGJKRCRMQDOTAXHEJBRYKLPGXRDONVMNGFRQQCOYAUSKAEPPZXLUHFNSYPSPWLVHJDDIMRAOYAVGFAHJDDNRXQSN");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 1291357279U;
    tmp_msg_0.value = 76U;
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
    msg.setTimeStamp(0.0723211354738);
    msg.setSource(27437U);
    msg.setSourceEntity(17U);
    msg.setDestination(20111U);
    msg.setDestinationEntity(37U);
    msg.op = 98U;
    msg.snapshot.assign("XBQUVONYMWQYWKNTJODXJTMMRKOJLOQDYARQQXLRODNSIGIMMJGFGQVTABFKDJVCSAZLDZSHZNFCRWKPFBXWBACWDVDGPUMW");
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.28559436915;
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
    msg.setTimeStamp(0.380197705304);
    msg.setSource(4741U);
    msg.setSourceEntity(121U);
    msg.setDestination(9257U);
    msg.setDestinationEntity(30U);
    msg.op = 35U;
    msg.snapshot.assign("ZFMTLXGDUVSJFHGPYYHAYDDVZLGVMGUDTWOKXRURNPZLITETTRNDNABHZIYG");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.863739567549;
    tmp_msg_0.lon = 0.542480270976;
    tmp_msg_0.depth = 194U;
    tmp_msg_0.speed = 0.178488954441;
    tmp_msg_0.psi = 0.663629747697;
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
    msg.setTimeStamp(0.522764424707);
    msg.setSource(50762U);
    msg.setSourceEntity(117U);
    msg.setDestination(63071U);
    msg.setDestinationEntity(19U);
    msg.op = 3U;
    msg.name.assign("WBRNXAOFEAMOYUJCTFLAVGLJBGCSMMVQPTJPLRKHO");

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
    msg.setTimeStamp(0.0464451112516);
    msg.setSource(38604U);
    msg.setSourceEntity(47U);
    msg.setDestination(39108U);
    msg.setDestinationEntity(135U);
    msg.op = 44U;
    msg.name.assign("XIUQCAEQTOSBNJRIVDYJVFQKWFZWXZKVDIGINWNALJILHJFJASWQFRRQDEGGDIBZGCVQZNTBVKHIBEWEXMPAYHDYXTPHWWYOSSXPJEAAROEBCCHBVMTHPUOEMMFFIPBFLCUCXOYRJNEER");

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
    msg.setTimeStamp(0.917741975416);
    msg.setSource(2472U);
    msg.setSourceEntity(46U);
    msg.setDestination(36174U);
    msg.setDestinationEntity(97U);
    msg.op = 220U;
    msg.name.assign("PCSBLPVFGHZJIBNZIPEGSJXIWSBASHUDFGGXXFRZQBDIJGMARUMFQYZTEKKMDSNORJLXUVVHANTSGKMCWNVCDKTLYSLUGUVPLJUCZMPOTRZTXHAQRUOKOFYLPQJYVJBWDXSAEZLOPVBREXYQLCZAZJNCAPJFVERFHLETOGUBISWNYICPKYILKTGEYIDMZEICENAOWACXWUWWFETOHRMWJNCVOPHVKHKXDNWQBUHDM");

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
    msg.setTimeStamp(0.155634172746);
    msg.setSource(30141U);
    msg.setSourceEntity(118U);
    msg.setDestination(7392U);
    msg.setDestinationEntity(74U);
    msg.type = 93U;
    msg.htime = 0.750404694677;
    msg.context.assign("HBUMJAHHZARUVUMELZUJIHMQLQATBFDFSBNBGEWGTEMPPQXKFILDWCZQXIWHMBNTAOUXUGJZJQTYXBFZCHXPZLPKZHGKLUTWIEFZMROPXIJGCXSYVD");
    msg.text.assign("APTNNJJUEUWCUSKPVEZQHXUGZMQICKIKOEFYROQAJPADT");

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
    msg.setTimeStamp(0.182761576923);
    msg.setSource(33299U);
    msg.setSourceEntity(171U);
    msg.setDestination(48815U);
    msg.setDestinationEntity(136U);
    msg.type = 202U;
    msg.htime = 0.881580104721;
    msg.context.assign("EFQSJAZVIREADNAROUFGAGNUYKMBGFHMEAXRUPSKHINI");
    msg.text.assign("WXQHYFWMZQWZSLAUBNAUODIVXNQJRCFGUQNKPAMILTZOPKKZODTBHWUIXEDASVQQRCIGXKONITRFOXTTKNSEXSCJYB");

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
    msg.setTimeStamp(0.508863121976);
    msg.setSource(16393U);
    msg.setSourceEntity(46U);
    msg.setDestination(30814U);
    msg.setDestinationEntity(138U);
    msg.type = 247U;
    msg.htime = 0.317110988391;
    msg.context.assign("XOMCKQWKIWSQVMENPY");
    msg.text.assign("EVKJVUCQXQNXSIGKGFWIDFGTXLSQPSLTBZREKOJCWUHYIBOXGUBTELGBNTWMJXDMHLAEPZOKFXFHJDQZONSIYAJFOFKPDLBZOXYKK");

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
    msg.setTimeStamp(0.2879404418);
    msg.setSource(21569U);
    msg.setSourceEntity(68U);
    msg.setDestination(27579U);
    msg.setDestinationEntity(251U);
    msg.command = 209U;
    msg.htime = 0.634144243225;

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
    msg.setTimeStamp(0.447718597554);
    msg.setSource(24789U);
    msg.setSourceEntity(123U);
    msg.setDestination(38539U);
    msg.setDestinationEntity(132U);
    msg.command = 221U;
    msg.htime = 0.213413935866;

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
    msg.setTimeStamp(0.034812789236);
    msg.setSource(49766U);
    msg.setSourceEntity(25U);
    msg.setDestination(7243U);
    msg.setDestinationEntity(2U);
    msg.command = 12U;
    msg.htime = 0.307124475262;

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
    msg.setTimeStamp(0.564531956197);
    msg.setSource(33210U);
    msg.setSourceEntity(76U);
    msg.setDestination(39556U);
    msg.setDestinationEntity(34U);
    msg.op = 186U;
    msg.file.assign("QQIWYMUNSOITYWBXXBWLHGQFAHGMGBVMQJCSTOOEPLDKEDLALAIXHUDIQTGRJUSWNUPWFANLOVHDJVPBFEQZYHKZCMUZDBYESEXNXSSJYHPWAQTFCOFWRPSNABLVDRPECUYONYMCRHLGJWVKPZGMWIWPNENYVCQRNIDDPJBZKYFGIZGKIIYJXTOJHRBEAXSCJNRVFRZHCPZX");

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
    msg.setTimeStamp(0.23102285071);
    msg.setSource(40471U);
    msg.setSourceEntity(214U);
    msg.setDestination(14020U);
    msg.setDestinationEntity(251U);
    msg.op = 142U;
    msg.file.assign("IKXMKCOMIVOWLSWQRVEVHZTGUVQADERDCRCHXSDGEFLNXORBKMXMGAHOPZTUPU");

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
    msg.setTimeStamp(0.177083527519);
    msg.setSource(57543U);
    msg.setSourceEntity(100U);
    msg.setDestination(18748U);
    msg.setDestinationEntity(158U);
    msg.op = 68U;
    msg.file.assign("SUPBESRDMWMM");

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
    msg.setTimeStamp(0.243498776291);
    msg.setSource(57365U);
    msg.setSourceEntity(232U);
    msg.setDestination(24664U);
    msg.setDestinationEntity(15U);
    msg.op = 112U;
    msg.clock = 0.44731492719;
    msg.tz = -59;

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
    msg.setTimeStamp(0.337666037915);
    msg.setSource(59279U);
    msg.setSourceEntity(76U);
    msg.setDestination(60551U);
    msg.setDestinationEntity(223U);
    msg.op = 225U;
    msg.clock = 0.00754784767048;
    msg.tz = 30;

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
    msg.setTimeStamp(0.757108123735);
    msg.setSource(33615U);
    msg.setSourceEntity(129U);
    msg.setDestination(54837U);
    msg.setDestinationEntity(17U);
    msg.op = 11U;
    msg.clock = 0.565151820978;
    msg.tz = -71;

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
    msg.setTimeStamp(0.898306229324);
    msg.setSource(5454U);
    msg.setSourceEntity(17U);
    msg.setDestination(7093U);
    msg.setDestinationEntity(200U);
    msg.conductivity = 0.678030778487;
    msg.temperature = 0.476855569407;
    msg.depth = 0.30862679201;

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
    msg.setTimeStamp(0.846775266217);
    msg.setSource(54495U);
    msg.setSourceEntity(223U);
    msg.setDestination(30650U);
    msg.setDestinationEntity(125U);
    msg.conductivity = 0.321884557399;
    msg.temperature = 0.31568436191;
    msg.depth = 0.544211356984;

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
    msg.setTimeStamp(0.93708795252);
    msg.setSource(4867U);
    msg.setSourceEntity(151U);
    msg.setDestination(32872U);
    msg.setDestinationEntity(51U);
    msg.conductivity = 0.208973027747;
    msg.temperature = 0.594563821384;
    msg.depth = 0.699399201943;

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
    msg.setTimeStamp(0.213561661993);
    msg.setSource(16754U);
    msg.setSourceEntity(201U);
    msg.setDestination(9084U);
    msg.setDestinationEntity(160U);
    msg.altitude = 0.535023079084;
    msg.roll = 59343U;
    msg.pitch = 61062U;
    msg.yaw = 33640U;
    msg.speed = -3110;

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
    msg.setTimeStamp(0.917107561447);
    msg.setSource(21129U);
    msg.setSourceEntity(67U);
    msg.setDestination(29080U);
    msg.setDestinationEntity(95U);
    msg.altitude = 0.25695083774;
    msg.roll = 35922U;
    msg.pitch = 5794U;
    msg.yaw = 46473U;
    msg.speed = 9443;

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
    msg.setTimeStamp(0.341282763555);
    msg.setSource(20038U);
    msg.setSourceEntity(59U);
    msg.setDestination(59005U);
    msg.setDestinationEntity(89U);
    msg.altitude = 0.66819320905;
    msg.roll = 42520U;
    msg.pitch = 41888U;
    msg.yaw = 4593U;
    msg.speed = 19414;

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
    msg.setTimeStamp(0.226274125788);
    msg.setSource(643U);
    msg.setSourceEntity(126U);
    msg.setDestination(26462U);
    msg.setDestinationEntity(248U);
    msg.altitude = 0.0494958141154;
    msg.width = 0.071910852612;
    msg.length = 0.336810741853;
    msg.bearing = 0.854672933496;
    msg.pxl = -22486;
    msg.encoding = 131U;
    const char tmp_msg_0[] = {-23, 24, 52, -110, -125, -36, 76, -21, -89, -125, 66, 119, 114, 38, -122, 90, -110, -77, 5, -93, -18, 46, 21, 107, -53, 112, 125, 12, 64, 122, 75, 117, 122, -109, 40, -2, 5, 13, -91, 126, 9, 97, -3, 119, 116, 1, 95, -121, 10, -118, 27, 46, 41, 116, -33, 23, -67, -128, -3, 29, -112, -32, -19, 95, -20, 24, 29, -1, 58, -47, 50, -107, -110, 40, -46, -11, 105, -100, 103, 36, -52, -15, 98, -57, -25, -76, 8, -69, 103, -9, 81, 122, 27, -22, 98, 61};
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
    msg.setTimeStamp(0.13732860435);
    msg.setSource(1167U);
    msg.setSourceEntity(65U);
    msg.setDestination(30345U);
    msg.setDestinationEntity(38U);
    msg.altitude = 0.616076229596;
    msg.width = 0.478065487673;
    msg.length = 0.498386859839;
    msg.bearing = 0.984297487452;
    msg.pxl = -14889;
    msg.encoding = 14U;
    const char tmp_msg_0[] = {-87, -58, -23, -64, 81, -73, 7, -33, 6, -66, 37, 54, 90, -12, -10, 3, 24, -3, 45, 48, 4, -41, 18, 0, 7, -83, -43, -110, 96, 33, 67, -119, -72, -119, -123, -110, 76, 91, 63, 114, 77, -95, 66, -1, 104, 104, 10, 59, -7, 77, -108, -102, -50, 110, 109, 114, 33, -121, 37, -113, -61, 3, -20, 85, 112, -102, 51, -63, -109, -38, 15, -8, 50, 77, -10, 35};
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
    msg.setTimeStamp(0.00531202625793);
    msg.setSource(25645U);
    msg.setSourceEntity(35U);
    msg.setDestination(23695U);
    msg.setDestinationEntity(180U);
    msg.altitude = 0.452957479995;
    msg.width = 0.644596841659;
    msg.length = 0.067832538697;
    msg.bearing = 0.0844302298152;
    msg.pxl = -16624;
    msg.encoding = 49U;
    const char tmp_msg_0[] = {-14, -45, 14, 115, -40, 43, 77, -96, 34, 4, -63, -42, 38, -101, 61, 19, -86, 17, 18, -40, 61, 118, 108, 5, -39, 49, -77, 20, -80, -50, -39, 9, -40, 69, -54, -123, -11, -110, 53, 49, 108, 7, -72, -41, -3, 9, 124, 108, -77, 47, -79, 81, -52, -96, 114, 98, 123, 35, -119, -79, 55, 8, 1, 31, 24, -56, -41, 102, -3, 32, 9, 72, -7, 16, -76, -95, 8, -91, -18, -96, -104, 28, -111, -23, -105, -31, -78, 6, -2, -120, -36, 42, -29, 77, 72, -108, -113, 9, 96, 28, -65, -92, 70, -108, -6, 0, -16, -22, -18, 83, -63, 82, 43, 124, -102, -75, -65, 106, 81, 1, -13, -103, 30, -8, 64, 23, 100, 42, 46, -121, -39, 45, 82, -82, 64, -27, 15, 59, 59, -43, -112, 23, -89, 69, -111, -67, -78, -110, 54, 115, 11, -40, 3, -29, -19, 95, -29, 0, 102, 95, 82, -12, -123, 69, -63, -90, 78, -91, -10, 50, -50, 44, 109, -35, -47, -51, 51, -14};
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
    msg.setTimeStamp(0.306063556442);
    msg.setSource(9688U);
    msg.setSourceEntity(26U);
    msg.setDestination(32030U);
    msg.setDestinationEntity(35U);
    msg.text.assign("GECLWDVXXGDAYGJZZGPWHHAPQWELWKSGHDEKWMCKIFCRPFCDYSTEQKNZBOFOFUDQJGULBXYMRVRQHVACPXVMPRUSHVSWLUNINHGQMLEAOPLENVBQYYIIZMXATZOWVMIQKFRYWSOBXCZTYFCLSNJCGDSGLTERLEVTEABYOZMBI");
    msg.type = 151U;

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
    msg.setTimeStamp(0.233095741515);
    msg.setSource(33052U);
    msg.setSourceEntity(151U);
    msg.setDestination(1554U);
    msg.setDestinationEntity(118U);
    msg.text.assign("LJXUJYXBAWODTMSOHEZUWSTEMCGGSASFQDHCEWUYQIBFJFDYNWIUPQPWMRGKLHPVQZBLPWJXTUKEYIJYVEXOIYSZZDSZUCXWIDBJFZRZILRDYXMIROTSWCSOTCOENHDMBVLQIDIKAVTXSUKNVWIGAQVXKHJRQKSZKKQGVALYURFBMNMNDRULLGANEBKMCJPFRWAHPFOLNDQXRGYGZMOAOBCKNZCNPOJLQFTVGVPHN");
    msg.type = 123U;

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
    msg.setTimeStamp(0.0619553814248);
    msg.setSource(32823U);
    msg.setSourceEntity(8U);
    msg.setDestination(19464U);
    msg.setDestinationEntity(220U);
    msg.text.assign("BRTBLNMOTILAPMCWVADQOVGHBMAVNWFLERWZRHUTJACIJASPGQBBNOPYSPHRXETRXGBVAUKWNIUBZNAFCOSNWZNIFNCTSKGHLMWENMZAMJPYKITEJLCFDGKJOKLFDTWXGAUOJMYKECVP");
    msg.type = 146U;

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
    msg.setTimeStamp(0.233854908819);
    msg.setSource(23302U);
    msg.setSourceEntity(190U);
    msg.setDestination(19125U);
    msg.setDestinationEntity(125U);
    msg.parameter = 243U;
    msg.numsamples = 165U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 32041U;
    tmp_msg_0.avg = 0.437956304195;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.679354748705;
    msg.lon = 0.77104138895;

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
    msg.setTimeStamp(0.134623479434);
    msg.setSource(51230U);
    msg.setSourceEntity(31U);
    msg.setDestination(29524U);
    msg.setDestinationEntity(195U);
    msg.parameter = 221U;
    msg.numsamples = 238U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 59127U;
    tmp_msg_0.avg = 0.298655668305;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.622858720751;
    msg.lon = 0.729140252842;

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
    msg.setTimeStamp(0.143735912104);
    msg.setSource(47316U);
    msg.setSourceEntity(97U);
    msg.setDestination(15825U);
    msg.setDestinationEntity(236U);
    msg.parameter = 79U;
    msg.numsamples = 78U;
    msg.lat = 0.310844547011;
    msg.lon = 0.097450109132;

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
    msg.setTimeStamp(0.00726429632852);
    msg.setSource(54364U);
    msg.setSourceEntity(71U);
    msg.setDestination(2833U);
    msg.setDestinationEntity(191U);
    msg.depth = 26414U;
    msg.avg = 0.328229655241;

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
    msg.setTimeStamp(0.581712513576);
    msg.setSource(58931U);
    msg.setSourceEntity(77U);
    msg.setDestination(9797U);
    msg.setDestinationEntity(148U);
    msg.depth = 40289U;
    msg.avg = 0.745019784648;

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
    msg.setTimeStamp(0.279121248243);
    msg.setSource(54414U);
    msg.setSourceEntity(59U);
    msg.setDestination(9984U);
    msg.setDestinationEntity(224U);
    msg.depth = 59418U;
    msg.avg = 0.442450650997;

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
    msg.setTimeStamp(0.132302281019);
    msg.setSource(13921U);
    msg.setSourceEntity(157U);
    msg.setDestination(4087U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.268989461911);
    msg.setSource(19610U);
    msg.setSourceEntity(42U);
    msg.setDestination(55254U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.894994766876);
    msg.setSource(8848U);
    msg.setSourceEntity(138U);
    msg.setDestination(30976U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.162431344131);
    msg.setSource(36384U);
    msg.setSourceEntity(251U);
    msg.setDestination(50550U);
    msg.setDestinationEntity(76U);
    msg.sys_name.assign("FUYQPVESNPDQCVTARH");
    msg.sys_type = 228U;
    msg.owner = 63776U;
    msg.lat = 0.0201149154442;
    msg.lon = 0.796685280663;
    msg.height = 0.102292512283;
    msg.services.assign("LZTMRHOLJCVRSEGOTFZRJBLPFFTSBKODHFTGNYDAMMVQMWGJPPSYFEWJAEUGATNUVPDJALZUYHRMOQNIBURVKN");

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
    msg.setTimeStamp(0.167122864166);
    msg.setSource(32279U);
    msg.setSourceEntity(173U);
    msg.setDestination(32730U);
    msg.setDestinationEntity(6U);
    msg.sys_name.assign("KVRPDUYWSJAWOJEVIGUMNIIBFCZQGOLOYKRRVMAUDYGLUKIDXSWSYWCCSMHNZPYYKPXBESPJUPFZYWVOKGJVGULIVQSMJIZYONDULQZRVBTJBANZQTXFNYRNLIEUBPTWVQKHLDSRTXTGZNHQVFNPJIXGACODFZKMTRXATUIOFVMB");
    msg.sys_type = 168U;
    msg.owner = 42227U;
    msg.lat = 0.562798189281;
    msg.lon = 0.649513974248;
    msg.height = 0.540150366148;
    msg.services.assign("LOCKJODDEHQFADDBXFMGPXTYTCZTEBHXGSVHWMX");

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
    msg.setTimeStamp(0.254106178981);
    msg.setSource(25018U);
    msg.setSourceEntity(31U);
    msg.setDestination(46234U);
    msg.setDestinationEntity(204U);
    msg.sys_name.assign("NDAAHWNZALMKWZNRJKUXZEOPIBYLLUPRIUELWVWXITOALPSFYWXZPUPA");
    msg.sys_type = 253U;
    msg.owner = 13640U;
    msg.lat = 0.660915690378;
    msg.lon = 0.9205329425;
    msg.height = 0.614819209599;
    msg.services.assign("KZNVLUWAFCBTTCSTCZXRIGZOLJVTNHFKYSODBMIXXDWKCZHBSAQAHACRIEMEWKKWDNPFJMGBGPRUIDUECOBLHVBFEGRCARDEYNSKYVPNFQUGXMCLCFMWPQRDKOSLYSHGOGPJJLGXXVTSVMZAIPWPETYHQVAZEPMINSIBDYBIQUWHOILZV");

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
    msg.setTimeStamp(0.479317112223);
    msg.setSource(52917U);
    msg.setSourceEntity(226U);
    msg.setDestination(2003U);
    msg.setDestinationEntity(139U);
    msg.service.assign("USTXWKSMGEORAVOIJI");
    msg.service_type = 247U;

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
    msg.setTimeStamp(0.239466967243);
    msg.setSource(56253U);
    msg.setSourceEntity(73U);
    msg.setDestination(53236U);
    msg.setDestinationEntity(247U);
    msg.service.assign("IMNECIGQTTQGMPRLRMSSXRJOSEMJSPWMCIFWVELZHULJKLGVSHCUVHOXCGIZLDGIWWKSHMZSZKIPCFAICJFYDHEVKLBOKHTYWYJNGNNAVJDCUQHNBTGRFRWCZYOPLXSNQFYTBNNO");
    msg.service_type = 187U;

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
    msg.setTimeStamp(0.152469486994);
    msg.setSource(118U);
    msg.setSourceEntity(137U);
    msg.setDestination(52980U);
    msg.setDestinationEntity(42U);
    msg.service.assign("SPPYZDGCZCBUGUDKVFNFDHTQUGFLELVOBYUIAXUQFFTFJDVVACEENAAWKFMOWAGOZWAIYSJBCBOQJARNFTCTYIZNEHBODIPWUZKDRBNWWHTMQBMUPMRRQHEGFOQXIJBHHWVUSMITXZGMYOVVRYGLQKITHIDNHKEPZPJNWOZDLQCMRS");
    msg.service_type = 232U;

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
    msg.setTimeStamp(0.198352953566);
    msg.setSource(42268U);
    msg.setSourceEntity(15U);
    msg.setDestination(55697U);
    msg.setDestinationEntity(240U);
    msg.value = 0.723032808981;

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
    msg.setTimeStamp(0.56381422138);
    msg.setSource(34553U);
    msg.setSourceEntity(222U);
    msg.setDestination(40025U);
    msg.setDestinationEntity(101U);
    msg.value = 0.495565631586;

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
    msg.setTimeStamp(0.365564797793);
    msg.setSource(25585U);
    msg.setSourceEntity(62U);
    msg.setDestination(33174U);
    msg.setDestinationEntity(178U);
    msg.value = 0.544946547626;

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
    msg.setTimeStamp(0.470038118405);
    msg.setSource(59254U);
    msg.setSourceEntity(162U);
    msg.setDestination(63738U);
    msg.setDestinationEntity(163U);
    msg.value = 0.848582769115;

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
    msg.setTimeStamp(0.379188718439);
    msg.setSource(14591U);
    msg.setSourceEntity(53U);
    msg.setDestination(56565U);
    msg.setDestinationEntity(46U);
    msg.value = 0.211660765301;

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
    msg.setTimeStamp(0.739831382711);
    msg.setSource(27566U);
    msg.setSourceEntity(32U);
    msg.setDestination(20184U);
    msg.setDestinationEntity(195U);
    msg.value = 0.328407106998;

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
    msg.setTimeStamp(0.647788175686);
    msg.setSource(45039U);
    msg.setSourceEntity(12U);
    msg.setDestination(28666U);
    msg.setDestinationEntity(185U);
    msg.value = 0.232534956857;

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
    msg.setTimeStamp(0.838218548061);
    msg.setSource(57925U);
    msg.setSourceEntity(2U);
    msg.setDestination(7836U);
    msg.setDestinationEntity(56U);
    msg.value = 0.383371089615;

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
    msg.setTimeStamp(0.786371633642);
    msg.setSource(32541U);
    msg.setSourceEntity(55U);
    msg.setDestination(41726U);
    msg.setDestinationEntity(131U);
    msg.value = 0.759980522764;

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
    msg.setTimeStamp(0.264364500914);
    msg.setSource(4549U);
    msg.setSourceEntity(251U);
    msg.setDestination(63435U);
    msg.setDestinationEntity(183U);
    msg.number.assign("HKKZXMOCDGMSWLQCAUIZTOGOTQLPWBHTEVIOFBWILHRMMESCRPSENSPRCIQZJJMJXFNIRKEHZHEODPRZCXGXFOAQXYLRZLDXWPQXTAGHLPQGDSJFZGFCZKLXZDUAVKQMSRSNBNFMUTYVTTAYVDYLCHELHWBPHKFEBYNUUDONJIVBTGAFGEORHWWDJENRWLBWJYPYANODAYMVCEDIBQPARVYIIPINUFUKXU");
    msg.timeout = 61909U;
    msg.contents.assign("VYZFGEFTBLFPXHXBESCXCUJAXLHGHQNWIGHKFBDNUDARXCMUPMBJTQYINDODGKBEIVNWMLAXUGPMYIAWRGLJYSQXAQZXUMDSUKPSGXEHOCMBAFFBI");

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
    msg.setTimeStamp(0.87590326866);
    msg.setSource(9324U);
    msg.setSourceEntity(2U);
    msg.setDestination(32870U);
    msg.setDestinationEntity(24U);
    msg.number.assign("TBICLFCHRKKSJXFQCFRSTMLIJNGWMQWNKEFAIBUEBVUDM");
    msg.timeout = 23678U;
    msg.contents.assign("MMXJRYSSNRPRTQHLPGWAHBEFCHOBLMPYQAYYEJNADELYXKBFPYAMISDZMKMJAMDWANUTULBUGVINZZIKYQPHZJXMBZWTBVDHJCJRNHWZBISEQWDVGCOATPGGCXLTIXMSRDJYVUGZRYSG");

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
    msg.setTimeStamp(0.151349502763);
    msg.setSource(64386U);
    msg.setSourceEntity(234U);
    msg.setDestination(35524U);
    msg.setDestinationEntity(88U);
    msg.number.assign("NWOLYAPKRVUQOQRCNERCDQNYJVYTDYXWFGCXLRWEMZTKNRGUWNHKLTDGRSIFSEPUUCGBACQMQQVEHJZGCASCLEQPSUWKOJHUJGBUVHPJDVIFRIYHYMZSYFBYINFWDXFNROAEQDZTPATHOWZSAGZAALMSKHPTFKXPIXLICDQXLJEBFEHMTEIBDMXMVBPCBTWZMHYCTORSDBFSAULJXNXOUFOKDJKMNTHWIPVAGSKGLLYJVX");
    msg.timeout = 57313U;
    msg.contents.assign("UKGRSSFLWIJQLKGIQKOSAQRMFYGCUXZPUZMTEIVLHIGMOSSJWDJCLREDSFUNWOAFVHDRJDHAZZ");

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
    msg.setTimeStamp(0.254032168186);
    msg.setSource(33249U);
    msg.setSourceEntity(116U);
    msg.setDestination(36583U);
    msg.setDestinationEntity(117U);
    msg.seq = 4114109824U;
    msg.destination.assign("BCEKVQXPFTUAIJGEFSWNOAWOFOBPDLEZSCUYDHLOAFXILCTUVMSKJYEQIHUSYHDRNKSGOEBRMKQODJXNHIHSZGRWUIRPOQNHVFXJLZFABYTNAIQOCZXBLKWBJHXYQZKMPRZEFKQCMNMBQJECGXAVUCTOWIPAEJIMKAWWBGLPWTMFFDRLGYSMXHDHYWHWJYZMAVDFTXDCGPRQTMLSVGKNZZENATRPPOCJDJGCGLEVNBTVB");
    msg.timeout = 50958U;
    const char tmp_msg_0[] = {-99, 75, 51, 4, -94, -25, 57, 37, 49, 25, 77, -47, 47, -96, -45, 17, -23, -60, 91, 78, 103, -77, 7, 45, -116, 110, -34, 44, 53, -93, 8, -62, 117, -58, -54, 68, 104, -51, -20, -65, 59, -82, 105, -73, -29, 75, 10, 60, 95, 59, -100, -73, 70, 104, 18, 87, 11, -22, -108, 25, 31, -128, 79, -87, -11, -24, -64, 19, 52, 119};
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
    msg.setTimeStamp(0.00757747035438);
    msg.setSource(5670U);
    msg.setSourceEntity(16U);
    msg.setDestination(6757U);
    msg.setDestinationEntity(141U);
    msg.seq = 144526899U;
    msg.destination.assign("WHTQIGZJUZQINTUHZXIWZYVMOVIVBBCCIRKMYOUVIOCT");
    msg.timeout = 61133U;
    const char tmp_msg_0[] = {-54, -11, -98, -69, -59, 109, -123, 89, 100, 104, -65, -72, -117, 85, -67, 91, 36, 14, -92, -66, -74, 75, 61, 92, 15, -112, -59, -103, -99, -16, 123, -33, 38, -50, 90, -125, 26, -32, 101, 36, -4, -52, 108, -59, -125, -119, -88, -54, -39, 118, -122, -86, -34, 2, -35, 47, 92, -111, -36, 116, 43, -5, 27, 85, 124, 8, 5, -91, -23, 47, 38, -22};
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
    msg.setTimeStamp(0.11844243116);
    msg.setSource(37341U);
    msg.setSourceEntity(186U);
    msg.setDestination(35224U);
    msg.setDestinationEntity(244U);
    msg.seq = 1370863651U;
    msg.destination.assign("VUFECXRFITDFKHCGTNIXQEESHGMZHJJORXXWNESRDYAETNBQQUUIXVKNOYOBRGZUVJUAVUMMWZAPGLRANVDAXMGPGHJMCZWLPVQZPYSHHFX");
    msg.timeout = 64248U;
    const char tmp_msg_0[] = {-19, 97, 21, 61, 53, 5, 81, -120, -48, 104, -119, 16, -70, 52, 4, -54, -77, 77};
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
    msg.setTimeStamp(0.679027121895);
    msg.setSource(7188U);
    msg.setSourceEntity(125U);
    msg.setDestination(14391U);
    msg.setDestinationEntity(15U);
    msg.source.assign("TJWTEJWLINVVXESBVFVIURMZRKKJSFRZFUONBQUACCBLXAHOMOBRRPYQUCUDBGANYSKGNRNCWCJVQZURSDNIEJOZTEOXZHOGBGDAWQKIADPRLTWLHMMYLNQBJSEWYXEFKCTDUNTQQVAWGLWIOFOFZYYDFXNDMPSPXYQPWIBMIMZDGJLNQLHTMFMKPXKBFUHZQKFHACREXHCVRXTUMHLXPSPGKJEDJYHIYOAYVJEZCAAGELTGSGICSTH");
    const char tmp_msg_0[] = {-68, 54, 83, -49, -28, 104, 0, 83, -26, 38, 12, -9, -11, 84, -15, -17, -115, -6, -63, 104, 125, 11, 0, -105, -39, 45, -37, 48, -82, 66, -91, 1, 109, 19, -118, 51, -58, 36, 92, -103, -53, -122, -21, -80, -121, -3, 115, 45, -127, -6, -13, -86, -48, -91, -4, -51, -6, -128, -32, 76, 76, -42, -78, 48, 20, -74, -30, -27, 4, 4, 69, -15, -78, 109, 76, 101, -37, -87, -43, 72, 52, 125, 80, -117, -32, 44, -81, -98, -102, 125, -46, 17, -10, -16, -72, -52, 34, -73, -61, -1, 113, -77, 42, 120, -24, -101, -48, 105, -17, 26, 18, -83, -120, -84, 90, -116, -60, -95, 8, 100, -63, -11, 82, 56, -114, 55, -94, -90, -113, -37, -38, -9, -55, -42, -42, 87, -78, -13};
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
    msg.setTimeStamp(0.14120503729);
    msg.setSource(5679U);
    msg.setSourceEntity(185U);
    msg.setDestination(39669U);
    msg.setDestinationEntity(164U);
    msg.source.assign("REBOTLYZIFITNZVOMUHOZEEHVBPOGJXEPGSCWGJIQUDDKINVZJEANWYPRNFXIHLIXXOHPSNWIYSNZQFRANAQCMEYXCWQOZVC");
    const char tmp_msg_0[] = {-75, 85, 12, 117, -83, 3, 39, -101, -87, 100, 41, -11, 26, -58, -25, -85, 63, -112, 72, -120, -63, -17, 82, -102, -42, -68, -60, 41, 83, 48, -91, -93, 111, 29, -114, -87, 54, -83, -52, -71, 62, -56, 36, -64};
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
    msg.setTimeStamp(0.557508056068);
    msg.setSource(44896U);
    msg.setSourceEntity(72U);
    msg.setDestination(44864U);
    msg.setDestinationEntity(182U);
    msg.source.assign("PVCPVNFRNGJFBUYRCEMZNUWUEAAFFOSVKGUPPWSCYZYNIYTELAISWIUVKJRUSXMXPHHLGVOYPZFQWFFGUVGBTIPZXEDELODQTWFNMDJISDPCBRNDEMABXBIRVZGTO");
    const char tmp_msg_0[] = {90, -112, -82, 61, 86, 21, 105, -82, 73, -19, 15, 73, -55, 21, -24, -118, -99, -89, -32, -111, -84, -13, -9, -43, -125, 108, 3, 62, -35, 106, -85, 17, -24, 105, -103, -85, -21, 7, -117, 28, -95, 109, 3, -115, -117, -61, -50, -32, -8, 107, 21, -34, -39, -63, -16, -116, 40, -47, -85, -69, -100, 53, -82, -94, 58, -88, -6, 51, 100, -113, -67, 116, 118, -71, 55, 1, -1, 68, 79, -31, 86, 47, 88, -108, -84, -33, 44, 49, -6, -115, 14, -48, 68, 22, 126, -119, -63, 12, -32, 54, 48, -80, -121, -59, 120, 30, 16, 90, -23, -71, 79, -125, 79, -109, 31, -104, -10, -104, -79, -78, -47, 87, 84, 61, 108, 68, 126, 110, -121, 24, -117, 80, -23, -110, 43, -64, -102, -1, 29, 94, 69, 3, 13, 111, 114, 89, 109, -51, -105, 99, -124, -78, 63, 107, -113, -92, -38, 102, -16, -90, -79, -47, -75, 44, 103, 29, 52};
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
    msg.setTimeStamp(0.0626707203242);
    msg.setSource(48709U);
    msg.setSourceEntity(248U);
    msg.setDestination(59194U);
    msg.setDestinationEntity(47U);
    msg.seq = 1604461098U;
    msg.state = 109U;
    msg.error.assign("AJVHVOFROLMDUQNXBKNJODGNQZEPMQQTKYAZKBSPTJZCLKQGXYJWYLOCICRKSBNNAAEDZRTAVZSWDVLHGTMRBRLXNKUUIWTZXPPM");

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
    msg.setTimeStamp(0.595345825662);
    msg.setSource(13273U);
    msg.setSourceEntity(148U);
    msg.setDestination(13459U);
    msg.setDestinationEntity(111U);
    msg.seq = 782390388U;
    msg.state = 0U;
    msg.error.assign("KIIPWKCDTRKBZPZYFAFFJAZZSJXSTJYMLJTCWGMBEKCFDBGWXHUCRMXSEIKHMNDL");

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
    msg.setTimeStamp(0.414679444394);
    msg.setSource(31930U);
    msg.setSourceEntity(66U);
    msg.setDestination(34938U);
    msg.setDestinationEntity(201U);
    msg.seq = 1440465103U;
    msg.state = 233U;
    msg.error.assign("GNGDCBDTFNCWFSYEIWBMVQDYAEXZLEGPKRGUBFQGPEVCQLICSAZSUZLCSO");

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
    msg.setTimeStamp(0.0444605242159);
    msg.setSource(36797U);
    msg.setSourceEntity(231U);
    msg.setDestination(4677U);
    msg.setDestinationEntity(223U);
    msg.origin.assign("ZPJYFUVCJFLUPDSGDJUJDNHZBJQHILHIRVAQYHSXGQSBZDUBPNTCOXIZYNNOLWYFCIKYMGKHEEFQPAHITGGBRMKPDGZEXLTBJEZTQDAPUVPFUEPRCIAJUSDCWMEFMNWPTMEWOKHAYF");
    msg.text.assign("BQITVBDAPFULNWGZRFOVICHTGPKEJVSAOCXBSRNLZPKTKGCIYRYQPIFHAUSNCJBNWRVMDAJWYZVMWHHQZHTZXLFOHRSTIFYWGEDEOJCKFLQZBXUSJGVYUXNOELTOAJVE");

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
    msg.setTimeStamp(0.714339212402);
    msg.setSource(7172U);
    msg.setSourceEntity(251U);
    msg.setDestination(44149U);
    msg.setDestinationEntity(27U);
    msg.origin.assign("WJFMNUSYEZATUQWZLWZDYHGWTXHOYFVYQFKMORTISSPUBYABZULWKNSKTVBBOWZPSDMEGIOTEZTNJLPKOFSKYKEVDMXVLBIGLUPPXVDRECONCYMAJHBCQ");
    msg.text.assign("SOERJQVLOOBRATMALOYCYTQUDAFSKUYTVB");

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
    msg.setTimeStamp(0.91301580272);
    msg.setSource(29560U);
    msg.setSourceEntity(233U);
    msg.setDestination(19834U);
    msg.setDestinationEntity(136U);
    msg.origin.assign("EFHFHUYKXQIFXIHURVJUGKCUBRGNERERHBUOPFFKZDVSQOLLLSZDERCUNCGLGFGYKCCLCAJDAOLBIVVBOUQDQEDTMSBNAOGJZRSSMYQVHJYXNOYWZTJPTXIPULIQXQPNBMCSTDINIMKOATO");
    msg.text.assign("XNWAQNJMDYREVXQROFRGFVHFMAWMDTOKOEWBBTPZHLIWJYPIDVFHPGZWCHXDGPXWFSNPCLLK");

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
    msg.setTimeStamp(0.0204686788383);
    msg.setSource(14810U);
    msg.setSourceEntity(227U);
    msg.setDestination(27109U);
    msg.setDestinationEntity(26U);
    msg.origin.assign("QZQLMJRXELKTIGBNHLBJRDJUKDCRXNWYWFFGSEDHNTNDZCVXKYRXSLTKBXASUJMIECFCKDSBRUIVATGAUVGMLJQMHOKCTCRWYNMSCKMWQZKPMAMWQJTEVIIOFTWHJGTOXDAAKEQTFFRBNIVPNDXWNULOELORHRFXXTLJFBMEHLZCNUBGEGPWPZESH");
    msg.htime = 0.532545640064;
    msg.lat = 0.808497449959;
    msg.lon = 0.153648229534;
    const char tmp_msg_0[] = {120, -14, -110, -107, -103, -98, -113, 94, -65, -104, 22, -121, 74, 16, -80, 76, -98, -82, -33, 108, -14, -111, -119, 61, -106, 17, 32, -85, -45, -104, 92, 51, -64, 118, -80, -24, -61, -64, 14, 36, 108, -26, 48, 72, 39, -115, 98, -101, 74, 8, 53, 102, -13, -16, 39, 112, -66, -85, 87, -24, 108, 96, -3, -116, -2, 51, -82, -128, 67, -77, -64, 52, -30, -51, -27, -6};
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
    msg.setTimeStamp(0.728751399299);
    msg.setSource(44908U);
    msg.setSourceEntity(123U);
    msg.setDestination(19310U);
    msg.setDestinationEntity(245U);
    msg.origin.assign("QZPGSWYLTUMBOUNTVZYRANKTJCYYJHFBWDFUW");
    msg.htime = 0.88228055965;
    msg.lat = 0.461057095615;
    msg.lon = 0.844003736172;
    const char tmp_msg_0[] = {115, 107, -32, 84, -68, -119, -77, 46, 30, 19, 117, -109, 9, -72, 19, 79, -31, 3, 122, -70, -88, 47, -63, -14, 61, 87, -3, 50, -15, -23, 120, 107, 46, -96, -59, 61, -34, 3, -67, 72, -92, -116, 59, -57, 25, -107, -19, -28, 39, -56, 96, -26, -4, 122, -21, 49, 113, 82, -57, 45, 111, -41, 67, 2, -95, 37, 3, 53, 104, 126, 102, -41, 67, -4, -50, -11, -123, 88, 93, 108, -111, 37, 43, -73, -80};
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
    msg.setTimeStamp(0.640361152517);
    msg.setSource(24930U);
    msg.setSourceEntity(85U);
    msg.setDestination(42718U);
    msg.setDestinationEntity(239U);
    msg.origin.assign("CBEPMYHGAJVOUFTXJDRTTNCNQAOXLDXSIYQQELAIRZYHIYMMUKCRANOXLDFDZDSWLMBBKIKMHDOJLPWOORXJYRNQKJFVDPXEAAUZARGCKFZNDMBQQTULERSGHIIYVDKMIPYSGFGVBSXXGD");
    msg.htime = 0.677857185117;
    msg.lat = 0.794481721101;
    msg.lon = 0.0303220798615;
    const char tmp_msg_0[] = {28, -89, 15, 108, -18, -21, 23, -15, -71, -88, 106, -3, 79, 82, -74, 113, 33, 16, -96, 34, -28, 53, 36, 107, -118, -75, 105, -91, 91, -83, 62, 65, -26, 37, 57, -16, -57, -38, -113, 26, 116, 94, -62, -82, -78, 82, -59, -57, 47, -56, 87, -2, 26, 69, 83, 59, 92, -101, 17, -15, -56, -118, 76, -40, -26, -82, -41, -88, 88, 31, -49};
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
    msg.setTimeStamp(0.952420425157);
    msg.setSource(5491U);
    msg.setSourceEntity(206U);
    msg.setDestination(21418U);
    msg.setDestinationEntity(108U);
    msg.req_id = 6373U;
    msg.ttl = 60848U;
    msg.destination.assign("OWSIIFIWVEUQNDOECSTACBYMLHRRMUIJ");
    const char tmp_msg_0[] = {116, -60, -79, -77, 11, -75, -10, 59, -33, -125, -86, 110, 9, -24, 77, 23, 56, 36, -28, 7, 70, 97, -3, -84, -44, 103, 85, -70, 112, -72, 19, 48, -49, 18};
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
    msg.setTimeStamp(0.259723356055);
    msg.setSource(14215U);
    msg.setSourceEntity(113U);
    msg.setDestination(60665U);
    msg.setDestinationEntity(251U);
    msg.req_id = 57330U;
    msg.ttl = 45423U;
    msg.destination.assign("KVVOOHLCACADHPGQKMCDSGCCDMJKQXCBNRRLGWU");
    const char tmp_msg_0[] = {32, -44, 58, 21, -29, 13, -70, -22, 74, -69, 65, 29, -47, -119, -28, 93, 104, 122, -109, -35, -77, 20, -127, 92, 2, -34, 13, -37, 85, 41, -12, 26, -113, 77, 63};
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
    msg.setTimeStamp(0.562748851668);
    msg.setSource(58805U);
    msg.setSourceEntity(31U);
    msg.setDestination(10513U);
    msg.setDestinationEntity(242U);
    msg.req_id = 5601U;
    msg.ttl = 37430U;
    msg.destination.assign("BGKOWHYTCHTFUMYSGTMUIITD");
    const char tmp_msg_0[] = {-46, -54, 5, 15, -24, 108, -61, -7, 82, -91, 44, -17, -21, -89, 2, 110, -37, -20, -47, -29, 57, -70, 66, -47, 15, 62, -79, 21, 124, -63, -24, 107, -37, 73, 112, -128};
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
    msg.setTimeStamp(0.749371276861);
    msg.setSource(42965U);
    msg.setSourceEntity(178U);
    msg.setDestination(41696U);
    msg.setDestinationEntity(238U);
    msg.req_id = 35292U;
    msg.status = 245U;
    msg.text.assign("MJYJREFBJEQBXWDFFLLQVMUPDHLOZCCRGLTMBHWSOLXUAYYYACSFSHJLRNWOYGJSEQSVOMIFTRLKNCPNUWN");

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
    msg.setTimeStamp(0.746318022956);
    msg.setSource(64719U);
    msg.setSourceEntity(48U);
    msg.setDestination(54409U);
    msg.setDestinationEntity(3U);
    msg.req_id = 50523U;
    msg.status = 86U;
    msg.text.assign("DLLLSOTXQVRRMBWKNJDFVINWRHHBDJURRWSNOQBQFBCFDPSKYWFMKNAXQEJMUNEGVCUVWCKGZIPXTVPEESGIAIPCOTGUBPHJMPJWPKTUJUVYTGUBLQRJZQKTGYCLANWHDEOBGFIELVCRZMKJFANEYESVYPZRFNCYMEQAIBWLRXZIXQCVXZDLBSGZDTESIMRMKWNHKCISNZOLMHYFFIOAKLDHWVAXZDOACUJZGYJDUOXBXQGTOTOHPH");

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
    msg.setTimeStamp(0.599016753491);
    msg.setSource(33944U);
    msg.setSourceEntity(77U);
    msg.setDestination(25122U);
    msg.setDestinationEntity(124U);
    msg.req_id = 58750U;
    msg.status = 173U;
    msg.text.assign("BMUHUTCKKROFTXQKMRLDLDBWIFRPOLHSLSFKYACXHDUIPTWQRIGGHCPAZWVTTJAYKEZVMQNPVUDBXFRSOZXJBOYBGNQSWCEJOISUDZRWRFAHQBPVNCABZBUCNBVAIYSXTVEWYPSU");

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
    msg.setTimeStamp(0.012398081871);
    msg.setSource(39479U);
    msg.setSourceEntity(243U);
    msg.setDestination(13344U);
    msg.setDestinationEntity(172U);
    msg.group_name.assign("LFZPRYVHLATCXYIGFPNFHLJJYLEMRXMBSQCTRXQLTMSOGDBXYAKFVTSPIUZHWYNQSCQLPWDIMOAJOMWUQBQLUKADMHOZHWZMVFIHAVACVURCHWPNPDUVQJMOGZDZGYKEREBIJFLETERBWENBXTNZLDCJGUOKKOOCDCDUDVFGQTWGOBXKARPSTGQIAXLYOENHIKUTVHJJNGPIBJBRXWSKQEMUTVYJNXZSSVBKMPERRPDXHNZGEISCWCFIYFAW");
    msg.links = 4167333387U;

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
    msg.setTimeStamp(0.588105562301);
    msg.setSource(51845U);
    msg.setSourceEntity(158U);
    msg.setDestination(43900U);
    msg.setDestinationEntity(8U);
    msg.group_name.assign("FQIAFGAYWQYUAUYHKSIZAXGKELZFJPCFELTGCDUXLTNOJXGFJHVQCCWHWFBHOMPNMMOTNIVYOOTKK");
    msg.links = 4006582519U;

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
    msg.setTimeStamp(0.249671537824);
    msg.setSource(16344U);
    msg.setSourceEntity(45U);
    msg.setDestination(21059U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("MITKAOIVUNJVOSJEQ");
    msg.links = 1689681813U;

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
    msg.setTimeStamp(0.374268220942);
    msg.setSource(51943U);
    msg.setSourceEntity(69U);
    msg.setDestination(12379U);
    msg.setDestinationEntity(183U);
    msg.groupname.assign("UVNPZHMCRUXSNLBOAIRTSBGVQHZHURIYMHLQFUQDQKDQUZVJVSVDEMNIXBRKMLZGWRZEQBYODMYJYKTRFOVXGWOUCFJK");
    msg.action = 224U;
    msg.grouplist.assign("FOXGODUHOMEWMJYHPGFYVPURWMZFWGSBHLBRDZRVBAIQWQECMUKDQREGZNHRKVSVXVHDLFFNPGKXV");

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
    msg.setTimeStamp(0.984255371179);
    msg.setSource(5455U);
    msg.setSourceEntity(34U);
    msg.setDestination(15294U);
    msg.setDestinationEntity(91U);
    msg.groupname.assign("EROIGJXRPJLFDAHYYTOSSHNXLZYDQJOEVNFEUDMSMJUKTHQNHVGRZEIDDTTUEDQPWMMIHTLYPRSKVFDVMLFRWIVGTKIWCQPWVNAQPRKAUNASOSMXLCBRFXJIE");
    msg.action = 120U;
    msg.grouplist.assign("PAEXDKUGMNHVUIVFIEWWNRNRSSYYRMZKKHZOXJCLOMWOJWDUZIUVNFYBTSKCLTWNCHDJHSYBRSEAGVFYPJTPAIXDRFUUIHGQJMZHGRKMSPDMFKLRFTEGKMUGNMQYZYOBAXECPPCHBVYUXFQRCGBOYBRSNEQAWCCOXBKHVTWLMVACTZTJEVASJWQAQILIBIFDLFSWQUXDZKHCONPLVIUOPTRFLQHESONJNQJZVWOE");

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
    msg.setTimeStamp(0.868720436581);
    msg.setSource(18978U);
    msg.setSourceEntity(5U);
    msg.setDestination(62173U);
    msg.setDestinationEntity(53U);
    msg.groupname.assign("LTRZHWDOWHQNJNMKWACTBTZRXCKEQKHAJOAZHCDXUQSLUGDNMIHJMUIYSNEGDCMAZUTWCOGPYSFEINLRJOYOQHFBDLNWUDHJPGBEVRSZPGUCJMZGBIRCCZKQNISPEFBMFGJZFNSQKOUQJBKKGXDMK");
    msg.action = 134U;
    msg.grouplist.assign("ZMSVSKFLTNELXAYQGDZPXMSTGWXGJQKGVQARBNIWDAIINYVANJTCQGXCUWFLEVZMFEPWRRKKYPEEUBJFSSMNQTIROBPYLTFMJCYRDUJHGROWUHWMLFYZTJOMVZHKIGSPJXNLLSUQMEOSFCWWNEODBNUPKSZQAPPKHVI");

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
    msg.setTimeStamp(0.567537736067);
    msg.setSource(32640U);
    msg.setSourceEntity(125U);
    msg.setDestination(42743U);
    msg.setDestinationEntity(247U);
    msg.value = 0.275637477569;
    msg.sys_src = 56432U;

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
    msg.setTimeStamp(0.824780327646);
    msg.setSource(50120U);
    msg.setSourceEntity(81U);
    msg.setDestination(32960U);
    msg.setDestinationEntity(251U);
    msg.value = 0.355789246988;
    msg.sys_src = 28848U;

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
    msg.setTimeStamp(0.190597386029);
    msg.setSource(1147U);
    msg.setSourceEntity(95U);
    msg.setDestination(59956U);
    msg.setDestinationEntity(77U);
    msg.value = 0.564230431866;
    msg.sys_src = 36281U;

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
    msg.setTimeStamp(0.512868452065);
    msg.setSource(25193U);
    msg.setSourceEntity(23U);
    msg.setDestination(62649U);
    msg.setDestinationEntity(89U);
    msg.value = 0.480223570115;
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
    msg.setTimeStamp(0.550843694781);
    msg.setSource(61277U);
    msg.setSourceEntity(17U);
    msg.setDestination(60551U);
    msg.setDestinationEntity(137U);
    msg.value = 0.239652414459;
    msg.units = 158U;

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
    msg.setTimeStamp(0.303054533003);
    msg.setSource(4826U);
    msg.setSourceEntity(14U);
    msg.setDestination(32915U);
    msg.setDestinationEntity(175U);
    msg.value = 0.119074745184;
    msg.units = 98U;

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
    msg.setTimeStamp(0.997680229685);
    msg.setSource(10501U);
    msg.setSourceEntity(238U);
    msg.setDestination(61296U);
    msg.setDestinationEntity(2U);
    msg.base_lat = 0.186104781131;
    msg.base_lon = 0.403452553714;
    msg.base_time = 0.528932118567;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 62888U;
    tmp_msg_0.priority = 20;
    tmp_msg_0.x = 4733;
    tmp_msg_0.y = -6300;
    tmp_msg_0.z = 15022;
    tmp_msg_0.t = -30348;
    IMC::FormationParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.formation_name.assign("JLKMSZRUBLOSHIEOLBFKUPAKHWKIHTTTYDUYAWDRRVCACGXEBZFZDZOTYHANVLHGWWVLPWYFCVFPQIMIZXFVMGGEUMIKHYQATFPQDNXXGJNDJGSKANRLBUWLLXCECPOJLVHQRJANPHEBMYINBTGOMIOSBTKZFRQNVPRWEWCZCTQLAHOCSNSWGUQKMIANSYJDIKXFTJUXDSGOYZSKQAXUUFJVCREH");
    tmp_tmp_msg_0_0.reference_frame = 190U;
    tmp_tmp_msg_0_0.custom.assign("FXSUCDRTYPESTQHEBVJJNBZBIDJMTNHTL");
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
    msg.setTimeStamp(0.955679799239);
    msg.setSource(56404U);
    msg.setSourceEntity(134U);
    msg.setDestination(57484U);
    msg.setDestinationEntity(243U);
    msg.base_lat = 0.767634555286;
    msg.base_lon = 0.224683684643;
    msg.base_time = 0.635703988684;

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
    msg.setTimeStamp(0.0785618301892);
    msg.setSource(65137U);
    msg.setSourceEntity(80U);
    msg.setDestination(31777U);
    msg.setDestinationEntity(230U);
    msg.base_lat = 0.206702393593;
    msg.base_lon = 0.7696770253;
    msg.base_time = 0.417542039809;

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
    msg.setTimeStamp(0.583172331113);
    msg.setSource(59833U);
    msg.setSourceEntity(214U);
    msg.setDestination(10048U);
    msg.setDestinationEntity(52U);
    msg.base_lat = 0.663813216491;
    msg.base_lon = 0.00243012298185;
    msg.base_time = 0.581714621611;
    const char tmp_msg_0[] = {23, -39, 101, -39, 125, -27, -114, -111, 54, 89, 112, 92, -55, 116, 70, 18, -124, 40, 93, -51, 119, -127, 42, -89, -81, -88, 67, -45, -12, 53, -7, 82, 58, 85, -67, 96, 36, -28, 12, 95, 120, 23, -61, -58, 57, 63, -82, -56, 13, -46, -20, -62, 71, -86, -8, 110, -13, 36, -27, 98, -48, -41, -112, -80, 31, -20, -122, -122, 1, -2, -59, 10, 65, 13, -108, -115, 111, 47, -99, -42, -49, -112, 56, -21, 100, 100, 19, 74, 48, 8, 49, 39, -69, -28, 26, -32, 44, 10, 68, -25, -58, 26, 81, -18, -87, -114, -128, -78, 34, 0, -7, 34, 74, 80, -34, 81, -44, -112, -90, -76, 12, 89, 2, 85, -93, 119, 72, -38, 83, 70, 116, -105, 40, -68, -41, -80, -77, 52, -84, 51, -105, -88, 98, -47, -70, -115, -111, 59, -12, -9, -110, -36, 56, 106, 58, 32, 37, 1, -89, 71, -14, -18, -50, -66, -54, 102, -77, -74, -95, -72, -117, -68, -67, -5, 10, 118, 1, 104, 3, -95, 63, 59, -5};
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
    msg.setTimeStamp(0.422741680876);
    msg.setSource(22662U);
    msg.setSourceEntity(174U);
    msg.setDestination(18248U);
    msg.setDestinationEntity(13U);
    msg.base_lat = 0.304367463843;
    msg.base_lon = 0.887950442402;
    msg.base_time = 0.686752593308;
    const char tmp_msg_0[] = {-25, -77, 42, -50, -86, 90, 82, 20, -53, -69, -60, -91, 114, -16, 85, -127, 34, 35, 88, -57, -54, -24, -121, -98, -55, 109, -10, -64, -123, -92, 3, -24, -72, 118, 100, 29, 65, -89, -59, -53, 1, -33, -12, 5, -90, 63, 65, 54, -45, 32, 44, -87, 108, -79, -86, -124, -87, -68, -14, 9, -74, -40, 16, 33, 62, -93, -121, 36, 10, 108, 30, 82, -81, 114, 20, -102, 30, 85, 56, 72, 96, 119, -112, 18, 110, 24, -104, 44, -120, 43, -2, -29, -56, -24, -30, 33, -25, 117, -15, 38, 31, 69, -96, -118, -46, 92, 38, 48, -108, 1, -113, -119, -31, -104, 122, -55, 67, 65, 66, 90, -100, 21, -123, -38, -24, 118, -96, -124, -109, 49, -115, 125, 111, 57, 18, 45, -108, -90, -54, 113, -101, 108, -115, -111, -17, -9, -106, -21, 20, 109, 103, -37, 52, -32, -8, 49, -68, 6, 62, -94, 15, 122, 74, -8, 57, 67};
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
    msg.setTimeStamp(0.453308158894);
    msg.setSource(47826U);
    msg.setSourceEntity(129U);
    msg.setDestination(56853U);
    msg.setDestinationEntity(195U);
    msg.base_lat = 0.793064448994;
    msg.base_lon = 0.85900190283;
    msg.base_time = 0.646506291743;
    const char tmp_msg_0[] = {-83, -8, -57, 116, -36, -116, -31, 109, 58, -109, 85, -103, -124, -125, 85, 75, 31, 57, -85, -18, -9, 62, 59, -117, -89, -74, -28, -58, -16, -95, 119, -41, 32, 125, 92, 104, -99, -50, -81, -91, -28, -101, 64, 46, 70, -3, -99, 69, -111, -4, -100, 102, -116, 19, -69, -20, -48, -126, -58, -92, 35, -52, 97, -63, 45, 119, 63, -60, -83, -100, 19, 4, 65, 91, 109, 2, -111, -78, 15, 38, 98, -83, 74, -46, 50, -105, -9, 65, 97, -111, 117, 96, -125, 52, -82, 6, 58, -88, 17, 6, -57, 74, -43, 97, -75, 74, -5, -54, -64, 43, 113, -41, 62, 100, 88, -25, 28, 8, 78, -84, -17, 17, -37, -102, -80, -54, -96, 42, -59, 87, -126, -113, -71, 46, -70, -11, 62, 36, -104, -56, -5, 10, -58, 18, 1, 105, 112, 65, 54, -110, -94, 72, -12, -87, -71, -14, 115, 81, -79, 14, 98, 41, -64, -81, -84, 10, -47, 6, -23, -62, 1, -69, 6, -40, -52, -48, 95, -76, -68, -12, -11, 41, 70, 35, -108, -60, -105, 79, 3, 8, -25, -51, -120, 70, 85, 75, -126, -16, -24, -11, 28, 24, 72, -95};
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
    msg.setTimeStamp(0.70492824379);
    msg.setSource(32814U);
    msg.setSourceEntity(144U);
    msg.setDestination(10436U);
    msg.setDestinationEntity(33U);
    msg.sys_id = 12007U;
    msg.priority = -76;
    msg.x = 31103;
    msg.y = 23475;
    msg.z = -27899;
    msg.t = -19050;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 201U;
    tmp_msg_0.frequency = 3405895133U;
    tmp_msg_0.min_range = 43096U;
    tmp_msg_0.max_range = 6805U;
    tmp_msg_0.bits_per_point = 8U;
    tmp_msg_0.scale_factor = 0.643791775885;
    const char tmp_tmp_msg_0_0[] = {-110, -44, -79, -12, 30, 31, 126, 16, -24, 97, 29, 33, 116, -118, 83, -4, -40, 51, 113, 44, 8, -77, 120, -53, -116, 95, -31, -84, -110, -95, 114, 11, 54, -31, -61, -70, 109, -61, -22, -45, 30, -68, 53, -125, 72, -94, -1, 123, 55, 51, 87};
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
    msg.setTimeStamp(0.437631390419);
    msg.setSource(17692U);
    msg.setSourceEntity(62U);
    msg.setDestination(64500U);
    msg.setDestinationEntity(168U);
    msg.sys_id = 4061U;
    msg.priority = 32;
    msg.x = -12815;
    msg.y = -11895;
    msg.z = 31032;
    msg.t = -2704;
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 206U;
    tmp_msg_0.comm_interface = 166U;
    tmp_msg_0.period = 49119U;
    tmp_msg_0.sys_dst.assign("MGYRMBJCHARXRYONVXIPCCRETGQTYHFCXGRTTHQHQSJIDZGKNSJEXTOPHKTWPJCBOUJA");
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
    msg.setTimeStamp(0.685648996696);
    msg.setSource(58018U);
    msg.setSourceEntity(29U);
    msg.setDestination(20905U);
    msg.setDestinationEntity(222U);
    msg.sys_id = 17175U;
    msg.priority = -75;
    msg.x = -18580;
    msg.y = 22086;
    msg.z = -16046;
    msg.t = -5229;
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DKFHESTEQYDUYIPAWFPYMOVPJQKFIHHGKNVUIWRHHJGQNSPUQLXCSDFHQJBCNDGMRLAUAXCKCRBBKKDJZLIVUSZCAOEOKHHAFWFITZNWGGJQDXPPEXUZWRTCHNZNVMNGLTKLESFQXRLTVFSXXDOFNYVYIRMUBKVMNJBWXVREJDHRYVFROW");
    tmp_msg_0.predicate.assign("UBBROGXKQGEMQZPCIWHWMRMNREGEQASTSLKVCOZQYZCKVQREIWORISULLISIXQYF");
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
    msg.setTimeStamp(0.511140177667);
    msg.setSource(63020U);
    msg.setSourceEntity(72U);
    msg.setDestination(61948U);
    msg.setDestinationEntity(153U);
    msg.req_id = 32181U;
    msg.type = 36U;
    msg.max_size = 63880U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.14762866888;
    tmp_msg_0.base_lon = 0.546083860471;
    tmp_msg_0.base_time = 0.558055635642;
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
    msg.setTimeStamp(0.103214651626);
    msg.setSource(55173U);
    msg.setSourceEntity(118U);
    msg.setDestination(29370U);
    msg.setDestinationEntity(45U);
    msg.req_id = 5698U;
    msg.type = 179U;
    msg.max_size = 23139U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0892474020692;
    tmp_msg_0.base_lon = 0.338604469522;
    tmp_msg_0.base_time = 0.381732485606;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 38957U;
    tmp_tmp_msg_0_0.destination = 13383U;
    tmp_tmp_msg_0_0.timeout = 0.366813519214;
    IMC::PlanControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 142U;
    tmp_tmp_tmp_msg_0_0_0.op = 50U;
    tmp_tmp_tmp_msg_0_0_0.request_id = 34093U;
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("FHTFYNYWCWZYTRFXOYVLSTRIWQWCDSGOBFWYYCLXFDPHRMGQGUCHGFRLOJPOJSIBWOYLJKXZYVEKMSUNEEEFUIBSXPEUPFMXDAQRMNSOXRWPOSCXWOVOGHJEQYKVECABRZNXDLADUQIWVKBZQKBJAIBMKQTUPMJAGIHLACJFNXDNDZKHRVPGIAVFEHUHT");
    tmp_tmp_tmp_msg_0_0_0.flags = 12478U;
    IMC::GroupMembershipState tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.group_name.assign("COGZDVUPCQZLHDSI");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.links = 2335297052U;
    tmp_tmp_tmp_msg_0_0_0.arg.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.info.assign("JIAZFFMWCMFLJIRGTSDHZFOZBWTIFXHRYQJJJVUHSFKLFNFEHAHSEEYLOQZEOQTRENDGUSUJENYTRBIQXQLUGYXYJLBOJCNGYRPCWKBZWDSAYMCXWDRHUGIMBHIYORWMEZTQLWNZNKAAXAPYONACVILCTQSWUBSZRQDLICLUGRVLVNZHSVMXUVXGREUXPJMOAM");
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
    msg.setTimeStamp(0.174452408377);
    msg.setSource(65498U);
    msg.setSourceEntity(221U);
    msg.setDestination(43855U);
    msg.setDestinationEntity(40U);
    msg.req_id = 6738U;
    msg.type = 142U;
    msg.max_size = 12072U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.705905398872;
    tmp_msg_0.base_lon = 0.0578378950811;
    tmp_msg_0.base_time = 0.205915333023;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 28339U;
    tmp_tmp_msg_0_0.destination = 2746U;
    tmp_tmp_msg_0_0.timeout = 0.0573940102642;
    IMC::TransportBindings tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.consumer.assign("IOXYCTBWXAWKBMIFTSZWAAGNCPLONZXPMWMXUDMGROKTTPCQGNGRGZTARZPJYMNLGQEBZHUYSRIFTUXHVNVZTUHKFYKWDLSUWHKWENYEMEJLUPWSGZODCUDLIFQCJBBNQKNYXKJOSNBQJVAAHWEHISXDZFIQSETNPVHTIRXQETKUAYGJMSLKFJIVCHFMVQQDYUJERDROCASRBCELDM");
    tmp_tmp_tmp_msg_0_0_0.message_id = 56068U;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.971802613726);
    msg.setSource(60312U);
    msg.setSourceEntity(0U);
    msg.setDestination(40466U);
    msg.setDestinationEntity(127U);
    msg.original_source = 37219U;
    msg.destination = 28393U;
    msg.timeout = 0.121853118502;
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 33842U;
    tmp_msg_0.status = 59U;
    tmp_msg_0.range = 0.175575651021;
    tmp_msg_0.info.assign("NNQZJMVNZSYOUQJEHNIFWGVPXLXLKWTCUBTEOTOPCJJZROQHUXYNFUBHRVFLAZICWZLPUUGXAKYOAFOHRPGIGGJEVFQIEMWPAABBCPGFAMXKNRLLTRXQTUIQAWDSBVDPHMWIIIETNVDCKGMSARDCAFDWZQFEJLMZUKMHXYGNJMEZENAYCRZKKFLBBNXMERBULT");
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
    msg.setTimeStamp(0.994006878346);
    msg.setSource(19889U);
    msg.setSourceEntity(246U);
    msg.setDestination(12303U);
    msg.setDestinationEntity(111U);
    msg.original_source = 37313U;
    msg.destination = 22579U;
    msg.timeout = 0.546588577732;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IGBDMDWQYNURTRJYRMIERMREQXZNAFFFPSNFJVSBAILJZCJEMPPVFBTBVUALZNGEJXUHZKXBOZIBUOKZSEPVECCGLUVEMDKTDELOHPTFGRSUWNVSCSQSRQMYWDCPQGCL");
    tmp_msg_0.value.assign("NELLUWYNUZQQVD");
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
    msg.setTimeStamp(0.838909634677);
    msg.setSource(38566U);
    msg.setSourceEntity(8U);
    msg.setDestination(19806U);
    msg.setDestinationEntity(228U);
    msg.original_source = 16174U;
    msg.destination = 7126U;
    msg.timeout = 0.515656614912;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 47063U;
    tmp_msg_0.lat = 0.38334094757;
    tmp_msg_0.lon = 0.858363634048;
    tmp_msg_0.z = 0.174020585679;
    tmp_msg_0.z_units = 104U;
    tmp_msg_0.amplitude = 0.237570539323;
    tmp_msg_0.pitch = 0.0273936255257;
    tmp_msg_0.speed = 0.804191913336;
    tmp_msg_0.speed_units = 230U;
    tmp_msg_0.custom.assign("LCLXBOMMCEKVDXLHUFUORQXTDWZUSIJHYJRRTAYQBYIRVQBJICMWKKALFOTLCXHQNQPPVINYBWBXMIYOSXKWISHPYHUEDKEHESPZBZLAMOGHPCXCJSUXOSALDZRLRFBZGQMFDBQEACUVJVHKVXMJYAJEQZDFVFQYZDKEGNITFSVERUIWFNJRVPDZJBCOPOAKTATA");
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
    msg.setTimeStamp(0.711657774778);
    msg.setSource(18937U);
    msg.setSourceEntity(177U);
    msg.setDestination(30562U);
    msg.setDestinationEntity(65U);
    msg.type = 170U;
    msg.comm_interface = 6198U;
    msg.model = 60803U;
    msg.list.assign("ZLLBSSECDAMLIWKSZRTBSHQANBEPLXOJOTBNUJBGDXNCNESCFZOFYAAFCIXOSRBQLYJFIGZQICCEAJXOESQMGVKDQCCWXQFIMUACRZJPOMQYGZVTUMCSRIRXUHEHVNOAKKTBPHKWYGJ");

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
    msg.setTimeStamp(0.893850115005);
    msg.setSource(40018U);
    msg.setSourceEntity(214U);
    msg.setDestination(61464U);
    msg.setDestinationEntity(113U);
    msg.type = 159U;
    msg.comm_interface = 3016U;
    msg.model = 17375U;
    msg.list.assign("IECPFJZPGIKYBAMNMCZHVEAWMFXERBJBTFLAJGAIZQAWXBTBHUVUOUXGGNOOATLEPKHBGQRWUNKXOKFSGJIFQRDJKPNXMGTATKSYKUPYTKLJHZXYMTCQNPDBRDPQVLTBOQCDKJZOMUFXYFLFLZNDLEIAKIRNSTROUROWFUHSHGCSHWBIMNQUZCHCCVMADDEYSVIVNJWXPREPY");

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
    msg.setTimeStamp(0.0978402585326);
    msg.setSource(36410U);
    msg.setSourceEntity(24U);
    msg.setDestination(59744U);
    msg.setDestinationEntity(128U);
    msg.type = 235U;
    msg.comm_interface = 32245U;
    msg.model = 37618U;
    msg.list.assign("ZDDHNFSDCYLBFEERCKXRGEVRACOCHSZHUVXNWQTCIOPLGV");

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
    msg.setTimeStamp(0.483800348192);
    msg.setSource(9436U);
    msg.setSourceEntity(165U);
    msg.setDestination(47562U);
    msg.setDestinationEntity(194U);
    msg.type = 61U;
    msg.req_id = 2475086902U;
    msg.ttl = 50448U;
    msg.code = 171U;
    msg.destination.assign("WCCBQKXJDDGEIWLBOXJRSEWPRXQTGLURDMNGUQMLZPGGOVHTMMADBUJLRMQIYYDVSHFPKKLAOYXGJVLYSCPEEYTVVLNJRHFJTC");
    msg.source.assign("CGAHPQSFLTBDVZAICVGNPNMYWXTJBZLOIRUNHTFUEOJEBYNFYZOQVUMHTIFIZYM");
    msg.acknowledge = 117U;
    msg.status = 85U;
    const char tmp_msg_0[] = {-4, -82, 122, 123, -26, 71, -5, 67, -13, 97, -22, 121, -81, -104, 93, -78, 68, 45, 9, 66, -122, -80, -73, -115, 42, 78, 122, 50, 10, -27, -48, 4, 68, 26, -80, 76, 40, 50, 27, 71, 76, 40, 105, -119, 23, -7, 124, -127, -117, 75, -47, 101, -46, 77, -71, -86, 50, -67, -50, -55, -80, 21, 90, -42, -102, 61, 55, 47, 44, -100, -14, -83, 10, 100, 30, 103, -4, -41, 40, -104, -48, -42, -115, 33, 63, 124, 83, -5, -127, -10, 98, -2, 24, 48, 3, -117, -23, 67, 19, 107, -74, -126, -69, -6, 105, -123, -75, 43, 5, -52, 79, 112, -125, 71, 125, -88};
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
    msg.setTimeStamp(0.67354797826);
    msg.setSource(34167U);
    msg.setSourceEntity(18U);
    msg.setDestination(50626U);
    msg.setDestinationEntity(9U);
    msg.type = 244U;
    msg.req_id = 1005917576U;
    msg.ttl = 19804U;
    msg.code = 163U;
    msg.destination.assign("CYGNVBALBWFMLGMVMONXNOCAURVNBCVRBJYPMTYZFFUJAWPHZTWZWBERGOGQFDDLJPESJPSCRUTLRFXUDELHKSZCNDPGVYJVYZGFKMZKZQQIWFOSQIWIYKXBNVJIBQROZBT");
    msg.source.assign("AJPUAOLHCVLPTZJNLDOYYBQXMEGLEGUCTVDEVAQGFQMKIZQPXNKHPDCCDLXNXVSBBWMIXCVHKXZTCUNZXAEKUXYFWWNORXOBMWNKPPSYKECWIIVPCURMKBFOJALEBMSIIITCTJRHVVZTQOHRSTVLNGGYNUWDLJSFRPEGJBMYDZFORDBFIAPWXFMUHYRWOFITHZJZQJJBRALADQUDYYRDFHPNKAGRWFIT");
    msg.acknowledge = 84U;
    msg.status = 104U;
    const char tmp_msg_0[] = {-29, 57, -45, 43, -105, 64, 119, -65, 20, 22, 59, 75, 22, -23, -102, 28, 37, -86, -1, 31, 89, -62, 66, -44, -101, -6, 42, -10, -30, -77, -38, 35, 81, 93, 33, -15, 77, -126, 88, 44, -75, -64, 118, 30, -80, -43, 89, 5, -20, 2, 99, -89, -58, -105, -18, -93, 50, 92, 124, -86, -89, 44, 63, -22, 84, -83, 26, 49, 116, -84, -84, 48, 87, 1, -36, -87, -20, -44, -101, 117, 82, -126, 115, 29, 60, 83, -18, -125, 11, 18, -89, -65, 119, -32, 4, 93, 88, -104, -14, -36, 120, -71, 115, 16, 100, 58, 95, -92, -64, -11, -88, 27, -91, -103, 54, -28, 106, -18, 83, 79, 123, 57, 89, 112, 9, 51, -36, -96, 66, -11, 10, -32, -106, -93, -70, 55, 42, 119, 73, 78, 124, -6, -11, -127, 96, -30, 120, -61, -52, 104, 100, 119, 34, -36, -39, 16, -15, 76, -12, -91, -67, 38, 16, 50, 22, 105, -56, -13, -81, 33, 114, -69, -58, -5, -72, 106, 22, 8, -21, 97, 121, -109, -83, -110, -7, 16, 29, -13, 77, 13, -59, 110, -14, -6, -76, -66, 114, 48, 73, 91, 43, -57, 3, 51, 79, -118, 98, 77, 93, -33, -19, 25, -102, 29, 48, 93, 42, 16, 105, 83, -71, 11, 8, -3, 104, -115, 39, 103, -12, 46, -38, -69, 45, -63, 66, -62, -41, 62, -123};
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
    msg.setTimeStamp(0.345667345446);
    msg.setSource(16488U);
    msg.setSourceEntity(164U);
    msg.setDestination(32809U);
    msg.setDestinationEntity(97U);
    msg.type = 195U;
    msg.req_id = 2550979590U;
    msg.ttl = 26332U;
    msg.code = 155U;
    msg.destination.assign("IFKOKRNFSFTGDERABUSVJKVJBF");
    msg.source.assign("LUBBSTSIUZNKCTXEMIYTLNUSWFRWGAMFEKBPGERQBKZAHERZWZSPIGSRWI");
    msg.acknowledge = 231U;
    msg.status = 195U;
    const char tmp_msg_0[] = {15, -113, -96, -73, 120, -13, -24, -91, 65, -78, 96, 106, -114, 40, -113, -79, -94, -51, 92};
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
    msg.setTimeStamp(0.293239554719);
    msg.setSource(50271U);
    msg.setSourceEntity(201U);
    msg.setDestination(31748U);
    msg.setDestinationEntity(184U);
    msg.id = 46U;
    msg.range = 0.770573765782;

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
    msg.setTimeStamp(0.248596424973);
    msg.setSource(59183U);
    msg.setSourceEntity(52U);
    msg.setDestination(27607U);
    msg.setDestinationEntity(36U);
    msg.id = 134U;
    msg.range = 0.486421976568;

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
    msg.setTimeStamp(0.370941507564);
    msg.setSource(40209U);
    msg.setSourceEntity(148U);
    msg.setDestination(48331U);
    msg.setDestinationEntity(162U);
    msg.id = 187U;
    msg.range = 0.729209921726;

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
    msg.setTimeStamp(0.103301222915);
    msg.setSource(65256U);
    msg.setSourceEntity(41U);
    msg.setDestination(6588U);
    msg.setDestinationEntity(10U);
    msg.beacon.assign("ENPXSMWJWSOTYYAJDQGNCQSVIXTEIKYTBTGZTWKPRUWNCICSYRGFMHZXVHQPQGFFCASNRKYNTLZHKNCVJOPRAMMFYKRCGBESRVIINLXJWHZQKOJPFBUIJQFKVDLOZGNCLABAFWLIWVBUGVXYDFMYPZLBVRODVDZHXFAKPDAQPEDHEJJWSPKEAZSLLHGRAVUMUBUHMHCEMDGTKUBDROEMOZXYDITLBXMQHATOPYQ");
    msg.lat = 0.166070181157;
    msg.lon = 0.225350807749;
    msg.depth = 0.886334613195;
    msg.query_channel = 105U;
    msg.reply_channel = 162U;
    msg.transponder_delay = 98U;

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
    msg.setTimeStamp(0.107169933841);
    msg.setSource(64112U);
    msg.setSourceEntity(9U);
    msg.setDestination(38859U);
    msg.setDestinationEntity(59U);
    msg.beacon.assign("RPGGJMHAXTELJXDPJPDKJAPYGRCVNJMCVURZUSFCBVCLWQPRZINLSMGWAKDFFCWXDXJWZBKOZWKRSEOBTCNDLDSZNOMTULAMJMQYIPWGCDGLIPSVHTZRSTFOVBSHVXKBGVNCQGFHEIIOZALXPFIM");
    msg.lat = 0.292877654109;
    msg.lon = 0.228018458947;
    msg.depth = 0.455066329262;
    msg.query_channel = 21U;
    msg.reply_channel = 15U;
    msg.transponder_delay = 3U;

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
    msg.setTimeStamp(0.609424471927);
    msg.setSource(16254U);
    msg.setSourceEntity(194U);
    msg.setDestination(17355U);
    msg.setDestinationEntity(9U);
    msg.beacon.assign("XHKBUXYCYURUWBJEPETMFMSWKVIFHPSGJCEU");
    msg.lat = 0.216095772381;
    msg.lon = 0.794260564221;
    msg.depth = 0.607511539231;
    msg.query_channel = 91U;
    msg.reply_channel = 105U;
    msg.transponder_delay = 131U;

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
    msg.setTimeStamp(0.533396004193);
    msg.setSource(17628U);
    msg.setSourceEntity(254U);
    msg.setDestination(51868U);
    msg.setDestinationEntity(28U);
    msg.op = 144U;

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
    msg.setTimeStamp(0.161130202924);
    msg.setSource(37944U);
    msg.setSourceEntity(68U);
    msg.setDestination(7040U);
    msg.setDestinationEntity(116U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.147586748708);
    msg.setSource(20630U);
    msg.setSourceEntity(159U);
    msg.setDestination(24247U);
    msg.setDestinationEntity(115U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.336212046976);
    msg.setSource(47461U);
    msg.setSourceEntity(181U);
    msg.setDestination(16668U);
    msg.setDestinationEntity(169U);
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.268278961505);
    msg.setSource(44345U);
    msg.setSourceEntity(9U);
    msg.setDestination(18122U);
    msg.setDestinationEntity(190U);
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.566460192204;
    tmp_msg_0.dist_min_abs = 0.225871672245;
    tmp_msg_0.dist_min_mean = 0.504244285054;
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
    msg.setTimeStamp(0.519935764765);
    msg.setSource(20153U);
    msg.setSourceEntity(23U);
    msg.setDestination(55711U);
    msg.setDestinationEntity(135U);
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 94U;
    tmp_msg_0.range = 0.593864282107;
    tmp_msg_0.acceptance = 233U;
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
    msg.setTimeStamp(0.195401967685);
    msg.setSource(43859U);
    msg.setSourceEntity(232U);
    msg.setDestination(40414U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.868969796953;
    msg.lon = 0.363272940947;
    msg.depth = 0.13611884402;
    msg.sentence.assign("WJKXSDCVSHZRPAWQQMMGTKGHREQTWZSHEUPRBUXJQDXUSXGMRCJHYAOPLILWPEPFENSGUAQVBDUYLXAVMWBGFJICBYKOUZTIAKMDSYVJGBNPLLFLBQKKQHSSAWIMXFVLVEZHAJWVFRICTTIPZYPYOEGHYXOQAJBRBLIDEZTDUNGZOVAHWOUMTBEJNCSNOPAYNMCCKNENNGIZKIWVK");
    msg.txtime = 0.567641001087;
    msg.modem_type.assign("ZVKAPZPCINQMUPQFTXGOEIUTAUUVVFWYBBPXRGLOVKXPBESGJQSSTAZWYCXJIZBOPFHTLEXBMGVSMRANQNTFKXYHIJMVLKJOWJLBBLKRAYNDORHMPZDWTUSHGOCDMIXGUREMHVZERYNZOQISFVWNZRPRZXTDVCQFORAIAGLOHQFGHCYOXTIJDQEHLNVWWKDYEBSSUMKYCDWJ");
    msg.sys_src.assign("DGDSCPXZAHCGPOALGHPKDNBKHQWZOMHTPAYNZYXOETPUWBKVRIXOSVZLJXDEOJUDJIKN");
    msg.seq = 57076U;
    msg.sys_dst.assign("UMFKGTSZDTBPRDYAREWIIJTYYJKYCQIINFDOEMBCKOQPODXLBMPAHIQWJZWQBAESPCVTIMLLUBYLOPTFEQVMHROYOKQZNKFGHBKREXIHGYLSZAVGCTRMCHGZJXXZUPUDNEOZTABDRXYUWPOVRNEKQJJSKFSWXYKUMLOQHNODFLDBNJNUWQGBIRGTZISEXRHRCZCMPJPQDNLMALVPJCSAGMFZTFVGU");
    msg.flags = 179U;
    const char tmp_msg_0[] = {-45, 40, -98, 21, -4, 66, 78, -44, -63, 68, -3, -114, -73, 45, -84, -125, 100, 27, 11, -110, -59, 90, 107, 113, 68, -86, -39, -119, -33, 11, 10, -93, 116, -29, 12, 50, -26, 68, -83, -114, -49, -120, -77, 42, 20, -45, -114, 6, 38, -88, 95, 53, 118, 0, 106, 44, 30, 76, -71, 23, -74, -98, 57, 49, -17, -70, 54, -65, -43, 123, 32, 64, -61, -122, 118, -9, -77, 16, -42, -28, -11, -42, -90, -63, -32, 57, 2, 16, -109, -103, -77, 77, 34, 80, -47, -18, -95, -121, -96, -121, 12, -23, 112, 115, -86, 80, 19, 93, -35, -26, 7, 74, -64, -8, -105, 40, 26, -63, 119, 72, -69, 118, -97, 112, 78, -100, -91};
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
    msg.setTimeStamp(0.310048921039);
    msg.setSource(9784U);
    msg.setSourceEntity(186U);
    msg.setDestination(809U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.318303854529;
    msg.lon = 0.133451328731;
    msg.depth = 0.317026853392;
    msg.sentence.assign("MBYWOHCSSOAQZIEOMBZVCEIVULRQTRHUVIODVXWQUJRNSAFNABLBLYCGXDTEFQEITLEMZCOYXVFTEPJZCWGHNWJXTJEKGKZCNWYJHKDBGHJKFYFRGTSWSDGKZTPBZHCIRNXYBUCXNUAMOMOJDAZTZPEPBYSWWEBL");
    msg.txtime = 0.100587498571;
    msg.modem_type.assign("HRFXHSXQDHWGEVUWXVVKDWPGUCABRRNQIBMIYMXCLJLJNMEKOJWYOLKHTUHJBOUVOESMSKNAHXKZFRTQCXVITSNCGUQYGVJYAWHJTKLWRETDJKWBZSNZRFAHRQENYIUTSSQKDKYEDRJZVDVGCOPJAIAPVZMQZINCDGCLKXFUYBMFAHEIBZ");
    msg.sys_src.assign("FTEVNNOMHNDCURKPTCOQKQXXQFECB");
    msg.seq = 20280U;
    msg.sys_dst.assign("GQTNQLYWURKCNFLCCFPKFMVYIKWUGGTXVLBSUMWOB");
    msg.flags = 47U;
    const char tmp_msg_0[] = {-5, 73, 44, 79, 43, -57, 84, 85, 14, 70, 63, -2, 31, -42, 74, -82, -106, -89, -111, -50, 67, 60, -93, -52, -59, 106, -93, -93, 78, 113, -18, 32, -45, 15, -120, 86, -77, 40, 22, -35, 36, -124, -74, 52, 111, 37, 13, -51, 49, -98, -43, 33, 114, 116, -108, 54, 79, 102, -47, -15, -24, -60, 87, 74, 13, -12, -34, -33, 100, 5, -52, -68, 91, 97, -59, -114, -29, -121, -1, 73, -122, -58, 123, 80, -100, -2, 67, 40, -73, 81, -57, -92, -46, -22, -1, -48, -117, 39, 122, -3, 99, -69, -87, 101, 82, -20, 69, 14, 11, 119, 62, -59, 79, 54, -22, 46, 122, -92, -54, 11, 97, -105, 29, -89, -41, -105, -63, -44, 63, 9, 113, 86, -98, -42, -26, -50, 124, 53, -18, 95, 48, -49, 91, 70, 25, 8, -113, -15, -72, -4, 44, -115, 94, 75, -3, 97, -85, -103, 6, 44, -56, 31, -13, 12, -119, -119, -52, -28, -120, 117, 118, -79, -62, -34};
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
    msg.setTimeStamp(0.958480060916);
    msg.setSource(15091U);
    msg.setSourceEntity(228U);
    msg.setDestination(41922U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.301298849744;
    msg.lon = 0.0683234905338;
    msg.depth = 0.871817474336;
    msg.sentence.assign("IRAHVTMOCCTXSLFUXICAKWSYMUIFASGGPVQYTDHJJDBPLHKJYFUZMAOMXHGIHQNFRJIJWEILCUBNNRNYJAYAKVQPPBMW");
    msg.txtime = 0.405329409594;
    msg.modem_type.assign("FCNVZNVEIWMJGMKTMJJXRNXMOTBMOQLRVUTPEFQALUCXRZJGIQPIFUWYMEXPUHDNYHBEHBBVRRSZZJPKGOXBCGHUJVINTJMJFOWAHLPKCOYAVKGKVWSTCOPYQMZKNUNHFSAFZADPHJQEXS");
    msg.sys_src.assign("OXNABAEDIEIUWMLRPKKSVBBIYCOUTZODFRVBIZXWSQDISUAMDPYEVTNYDAHGAXQGVGGPXKJABOELDDJLYQHNFIVJN");
    msg.seq = 61394U;
    msg.sys_dst.assign("IJUDYWIIZBWNZSCAOAFSHSYQSACTPYUFMFWEAFRGDUVHXYJBCUXEIVALEKGZTJCYHPRZELPDSTIUNQLHHTKQTBFJZTLMNRQOSVOQMNDMMEVNLTDIKLEPNEMKYFNCXHQIBEIPZGJVFPQWSOFXKDWANXVAGGPDNJTPHDICVLUGAYVXECKUFZBXMTCRLKBR");
    msg.flags = 19U;
    const char tmp_msg_0[] = {13, -14, -56, 2, 30, 49, 34, -43, 63, 56, 33, 12, -68, 47, 70, 13, 69, -117, -92, -24, 51, 50, 20, -3, 7, 11, -103, -114, 56, -111, -85, -17, -33, 5, -67, 69, 73, -122, -41, -77, -25, -67, 63, 52, 29, -1, 71, -110, -1, 50, 9, -122, 17, -39, -94, 23, 56, 123, -93, -118, -30, -44, 126, 94, 17, -71, 85, 51, -65, 107, 120, 47, 70, 50, -79, 59, 124, 80, -2, -10, -11, 22, 100, 111, -23, 99, -51, 35, 108, 119, 116, -27, 41, 91, 10, 10, 21, 86, 42, 75, 84, -99, -31, 84, 13, -58, 0, -123, 55, -43, 1, 63, -102, -59, 49, -112, 41, -68, -34, 66, 88, 98, 33, -4, 50, 29, 82, -95, 32, 14, 93, 19, 88, -58, -10, 40, 92, 69, -28, 17, 1, -26, -91, -117, -42, -51, -56, 90, 18, -72, -63, 92, 63, 110, -37, -80, -87, -82, -116, -17, -93, 13, -75, -9, -122, -62, -5, -46, -79, 15, -11, 6, 91, -127, 66, -15, -126, -80, -78, 7, -99, 90, -34, -69, 110, -9, 18, -16, 64, -104, -83, -44, -12, -7, 10, -54, -69, 25, 92, -66, 26, -122, 116, 91, 95, -15, -117, -1, 72, 79, 98, 76, -62, -102, 34, 79, -86, -66, 62, 25, -96, 120, 49, -59, 71, -74, -116, 81, 91, 8, -82, 32, -8, -91, -41, -70, -53, -18, 7, 47};
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
    msg.setTimeStamp(0.980517399496);
    msg.setSource(56335U);
    msg.setSourceEntity(32U);
    msg.setDestination(55445U);
    msg.setDestinationEntity(250U);
    msg.op = 168U;
    msg.system.assign("CHLBVIBQOJYZZVDIYHTMJHDSWXPKPPBETUXNFTMTVAZKBBGXKUDEFWGKWIXORI");
    msg.range = 0.294419103304;
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.615643451108;
    tmp_msg_0.y = 0.974694757942;
    tmp_msg_0.z = 0.553434044976;
    tmp_msg_0.phi = 0.679341226753;
    tmp_msg_0.theta = 0.458716833181;
    tmp_msg_0.psi = 0.802555252832;
    tmp_msg_0.p = 0.220525516483;
    tmp_msg_0.q = 0.0782635875344;
    tmp_msg_0.r = 0.627126546834;
    tmp_msg_0.u = 0.509610752814;
    tmp_msg_0.v = 0.888972998587;
    tmp_msg_0.w = 0.769236684515;
    tmp_msg_0.bias_psi = 0.652324751361;
    tmp_msg_0.bias_r = 0.17127858644;
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
    msg.setTimeStamp(0.954034008014);
    msg.setSource(48650U);
    msg.setSourceEntity(84U);
    msg.setDestination(49459U);
    msg.setDestinationEntity(82U);
    msg.op = 138U;
    msg.system.assign("LJFWVVYMBJZZWKRKSLIYEXEOGKSHAPBGRTHDLSDQHUAZDPSKLQOANUIVTBVAPDEOJRWSCYBUENCTGDONXVHZQDKCFXQLFCRTTQKUIMNWDJPFGCBOXOZACIGLZEQ");
    msg.range = 0.953783904142;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("UGMMFBDYVACKSJ");
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
    msg.setTimeStamp(0.414663323992);
    msg.setSource(62964U);
    msg.setSourceEntity(104U);
    msg.setDestination(42277U);
    msg.setDestinationEntity(111U);
    msg.op = 199U;
    msg.system.assign("APKKIZJHINESIHTPBWECXBFUDBZMOLEGYNABCTGAEPGVDSUINQCTKUCJHXZUWPGIHGXVUYHQQBSWWADMWDJIKVXYSMLFHWORJSRQRVDOZKWYULIKCZQFOSEBCTFMJTMPQKKRTRJWMZPSSIFOVBARJEXUTWAXHLCJGCXPELNOYNCWGDENZFBOXEUVYFBMPFQYPG");
    msg.range = 0.272315231941;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("YOFKJNHTTOASTYBIJRAAMCKWXGPXSWJHDXLKLGVTMLAENUGVYFQDJOYNXZYNGOSFUZGVJHXSENBKIQZBPQITTJYMPCVRDTWDZFIMVMFUSZCNOKQEZTNUQNPBQPHBYMVBLKPFEGHXICZLAFCAIIPISBGQVWC");
    const char tmp_tmp_msg_0_0[] = {56, 38, 13, 48, 9, 52, 36, -43, -126, -23, 66, -126, 88, 69, 109, 49, 15, -25, -109, 113, -23, -6, -41, -7, -98, -126, 44, -36, 5, 114, -110, 101, -82, -109, 105, -56, -82, -75, 109, 69, -60, 22, 87, 74, -22, -49, 8, -116, 1, 22, 13, 45, -127, -22, 69, 42, -94, -107, 4, 39, -122, -29, -75, 105, 33, 0, -73, -30, -100, -118, 28, -90, 73, 44, 67, 114, -96, 68, -123, 123, -118, 73, 9, 55, 7, 89, 60, 111, 26, -18, 7, 101, 61, -4, -5, -124, 99, 38, 79, 89, 105, -93, -1, -31, -39, 32, 20, 107, 84, -20, 41, -77, -75, -64, 77, -116, -125, 68, -47, 20, -30, -49, -70, 103, 27, 72, 50, 23, 44, -46, -14, 105, 110, -12, 53, -54, 42, -46, 55, -76, -119, -94, 125, 113, 24, 126, 78, 57, -121, 61, 40, -59, 77, 99, 18, -17, -17, -97, 42, -100, 16, 61, -59, 55, -89, 73, 51, -120, -66, -85, -106, 24, -23, 82, 36, 34, 81, -99, -64, -53, -86, -111, 105, -97, -107, -86, 86, -124, -10, -49, -108, -76, -84, -99, 65, -94, 37, -73, 121, 60, 28, -118, -43, -121, 85, 39, 48, -126, 76, -13, 25, -47, 55, -81, -74, 32, -29, 49, -31, -123, 49, 33, 3, 67};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.680872476387);
    msg.setSource(60527U);
    msg.setSourceEntity(91U);
    msg.setDestination(19835U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.574828649664);
    msg.setSource(43708U);
    msg.setSourceEntity(167U);
    msg.setDestination(1326U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.248936130026);
    msg.setSource(7902U);
    msg.setSourceEntity(47U);
    msg.setDestination(53879U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.251037489688);
    msg.setSource(41501U);
    msg.setSourceEntity(79U);
    msg.setDestination(43727U);
    msg.setDestinationEntity(207U);
    msg.list.assign("DISZUFPKHUUJETCBSOADVWRSZMPUXRCJMANNOLYOMOU");

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
    msg.setTimeStamp(0.416054501455);
    msg.setSource(16819U);
    msg.setSourceEntity(187U);
    msg.setDestination(1477U);
    msg.setDestinationEntity(159U);
    msg.list.assign("FQKBVNWCPIXAJQUPOSDQ");

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
    msg.setTimeStamp(0.0933081811965);
    msg.setSource(42343U);
    msg.setSourceEntity(169U);
    msg.setDestination(55087U);
    msg.setDestinationEntity(227U);
    msg.list.assign("YWWQPHAWXQDNOCUNZRXKENYIPEKGRRUWODXRGKGNOPWOYESNEEFTVFDSWDIGAYLTJMZYILQBBLUBEGKXBAPDQGKIVEVHMYILNVKYHIBGBFCMOJJRFJWMDKGMHSSZSWJOHHNLLRIHITUMSIUVPLSPUPFTABUBQIZZTTMDBUCEQQRQHXDCNMZSTFAZSYKUXSXJORUFTWQQZC");

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
    msg.setTimeStamp(0.538366950726);
    msg.setSource(2068U);
    msg.setSourceEntity(134U);
    msg.setDestination(40028U);
    msg.setDestinationEntity(233U);
    msg.peer.assign("BJYLVYHPAJHDSFYVUCUFCDJKJHKZSPUFUOUMXMNYZO");
    msg.rssi = 0.84101940259;
    msg.integrity = 18724U;

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
    msg.setTimeStamp(0.380006963536);
    msg.setSource(25032U);
    msg.setSourceEntity(91U);
    msg.setDestination(19874U);
    msg.setDestinationEntity(53U);
    msg.peer.assign("LTXQQZBPSGJWUXIIVBQKMTAMX");
    msg.rssi = 0.788477088212;
    msg.integrity = 65014U;

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
    msg.setTimeStamp(0.808032733692);
    msg.setSource(37518U);
    msg.setSourceEntity(157U);
    msg.setDestination(48263U);
    msg.setDestinationEntity(160U);
    msg.peer.assign("LTMVJFRBWNYIBQNHQYMVKDLPRYLLYBUTWTMCKOWGFUSALNKENYFSBRXPYPLHEIPTCHOFNGMKCZMHVPDPHZNVUBDCSSZBMRGDAAUQUXLGGUWOHHTQKDWVGPEYJXLJFMVYHSOODRRVWKKOOUOJWDQCMRZCQHHFZVDMQKIQTBGRMXXRCZDEKVKVFBWPPTPEAFNAAJXITYZJNOFJCLTEJCZNEWSI");
    msg.rssi = 0.282197586544;
    msg.integrity = 55492U;

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
    msg.setTimeStamp(0.969747999166);
    msg.setSource(50852U);
    msg.setSourceEntity(128U);
    msg.setDestination(52790U);
    msg.setDestinationEntity(165U);
    msg.req_id = 15111U;
    msg.destination.assign("JVOZZHUIENDURUIQSAYVN");
    msg.timeout = 0.262940556979;
    msg.range = 0.361852080804;
    msg.type = 51U;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.837216341497;
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
    msg.setTimeStamp(0.609822645289);
    msg.setSource(52343U);
    msg.setSourceEntity(71U);
    msg.setDestination(26903U);
    msg.setDestinationEntity(28U);
    msg.req_id = 36049U;
    msg.destination.assign("FZZAGIOGCZSHRBNMMLZBZXNPEMLOKEUXITQLZDYXFZCUDZRPALYUVMYJJCWVDFQURWJDIKIEKHSGYBANBUEZNNEDQATDDXLGKWPYFKFJMHJMQANTVPFODPPFCCSABWHTLNJCDSVWGCNRSKQRZBIUSRTMEVRLSFKIRKTXHWHIQYLOKYVBOKOITEXWHGGBPYFAWHLTWERXHOEIOQMPDWOBTPAEQFRNVLSXTQQMGUSUCYVJJVUMVCOJPHAYIGU");
    msg.timeout = 0.81177810485;
    msg.range = 0.685158302971;
    msg.type = 31U;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.934180509473;
    tmp_msg_0.x = 0.774081408204;
    tmp_msg_0.y = 0.630127502153;
    tmp_msg_0.z = 0.901629084999;
    tmp_msg_0.timestep = 0.120086123156;
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
    msg.setTimeStamp(0.169760534081);
    msg.setSource(29097U);
    msg.setSourceEntity(30U);
    msg.setDestination(12297U);
    msg.setDestinationEntity(84U);
    msg.req_id = 28989U;
    msg.destination.assign("HTOFXCSZLIZTHNUVBIOEOXQHPTWFFEDLYMGJVLKCPYLWJCWANQKEUMDFKGPCIHALBXRGDJRNERDZDXCQJWXNFEQDKHTSQBFWUSRZRUZPFZUOTAGNFVGDACOOQNYBIYKGIMWTL");
    msg.timeout = 0.0314513335774;
    msg.range = 0.314589157508;
    msg.type = 176U;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.156715323506;
    tmp_tmp_msg_0_0.lon = 0.756859519748;
    tmp_tmp_msg_0_0.height = 0.610298060534;
    tmp_tmp_msg_0_0.x = 0.465512663852;
    tmp_tmp_msg_0_0.y = 0.36901222702;
    tmp_tmp_msg_0_0.z = 0.954866205421;
    tmp_tmp_msg_0_0.phi = 0.749016621026;
    tmp_tmp_msg_0_0.theta = 0.511234347599;
    tmp_tmp_msg_0_0.psi = 0.239780295114;
    tmp_tmp_msg_0_0.u = 0.838166474694;
    tmp_tmp_msg_0_0.v = 0.400922400425;
    tmp_tmp_msg_0_0.w = 0.0263890521006;
    tmp_tmp_msg_0_0.vx = 0.149532338555;
    tmp_tmp_msg_0_0.vy = 0.0457088915087;
    tmp_tmp_msg_0_0.vz = 0.773437216353;
    tmp_tmp_msg_0_0.p = 0.213332051054;
    tmp_tmp_msg_0_0.q = 0.519014524826;
    tmp_tmp_msg_0_0.r = 0.976052198414;
    tmp_tmp_msg_0_0.depth = 0.902819409269;
    tmp_tmp_msg_0_0.alt = 0.577994214426;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 5U;
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
    msg.setTimeStamp(0.437073159842);
    msg.setSource(7117U);
    msg.setSourceEntity(155U);
    msg.setDestination(63799U);
    msg.setDestinationEntity(33U);
    msg.req_id = 62542U;
    msg.type = 223U;
    msg.status = 33U;
    msg.info.assign("OZOEURWRMSUBSIDUSOQSXGKNXAHFGBFAVPVXEKPNPCOGFYDYJDAUDIQCELRWFETAMHKKJAMAXONGZNXQEKCQLHQAWCXWFMIZWAYLPTKRLCTNMIXRFPEWUFQDZHICBNNHPVHDSBJLD");
    msg.range = 0.472423129138;

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
    msg.setTimeStamp(0.5735418156);
    msg.setSource(22771U);
    msg.setSourceEntity(192U);
    msg.setDestination(51142U);
    msg.setDestinationEntity(144U);
    msg.req_id = 19138U;
    msg.type = 19U;
    msg.status = 29U;
    msg.info.assign("JHIUSFPMVSNLIABJZFJJRBNEPLAZBWWKCUWSYWPZPRSILXXKNFKVJYQZYLZYHDRBVRPCF");
    msg.range = 0.202294796873;

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
    msg.setTimeStamp(0.439602313487);
    msg.setSource(36830U);
    msg.setSourceEntity(192U);
    msg.setDestination(48656U);
    msg.setDestinationEntity(170U);
    msg.req_id = 53812U;
    msg.type = 146U;
    msg.status = 246U;
    msg.info.assign("FSXDYYCWEUSHVQFNPTWMXAJXQQGGGVZOPPIGFSBICPJCRNDPGASFUEIMLDXGVSPTAHKMUXQWUKZJJIEODREJKMYBVTQCXTJSRCLHBAYQOUZPAWYLTVEUDHWKATYLZWONPOVFHQEESBQJYNKBZEKCDCEOOXFHXRNLJTURNMOIFZVDDJCIURMKMISGGSKMUSYAAEOBTMNAVBHFWANTLZFRZINLDPIBGB");
    msg.range = 0.803472316347;

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
    msg.setTimeStamp(0.789333240906);
    msg.setSource(4227U);
    msg.setSourceEntity(39U);
    msg.setDestination(22307U);
    msg.setDestinationEntity(68U);
    msg.value = -16370;

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
    msg.setTimeStamp(0.960539020346);
    msg.setSource(60071U);
    msg.setSourceEntity(124U);
    msg.setDestination(50584U);
    msg.setDestinationEntity(232U);
    msg.value = 10013;

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
    msg.setTimeStamp(0.430233310055);
    msg.setSource(64553U);
    msg.setSourceEntity(9U);
    msg.setDestination(43067U);
    msg.setDestinationEntity(110U);
    msg.value = -20376;

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
    msg.setTimeStamp(0.865059250119);
    msg.setSource(42252U);
    msg.setSourceEntity(89U);
    msg.setDestination(58650U);
    msg.setDestinationEntity(7U);
    msg.value = 0.11455387929;

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
    msg.setTimeStamp(0.963941382761);
    msg.setSource(50412U);
    msg.setSourceEntity(210U);
    msg.setDestination(49793U);
    msg.setDestinationEntity(12U);
    msg.value = 0.93374117415;

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
    msg.setTimeStamp(0.0486458300607);
    msg.setSource(62752U);
    msg.setSourceEntity(45U);
    msg.setDestination(14434U);
    msg.setDestinationEntity(36U);
    msg.value = 0.605016938706;

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
    msg.setTimeStamp(0.67552445792);
    msg.setSource(20131U);
    msg.setSourceEntity(124U);
    msg.setDestination(63126U);
    msg.setDestinationEntity(217U);
    msg.value = 0.66704622311;

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
    msg.setTimeStamp(0.403069853339);
    msg.setSource(39954U);
    msg.setSourceEntity(110U);
    msg.setDestination(42587U);
    msg.setDestinationEntity(213U);
    msg.value = 0.300186334409;

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
    msg.setTimeStamp(0.750225587903);
    msg.setSource(797U);
    msg.setSourceEntity(99U);
    msg.setDestination(49717U);
    msg.setDestinationEntity(113U);
    msg.value = 0.771901671016;

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
    msg.setTimeStamp(0.326661328444);
    msg.setSource(33605U);
    msg.setSourceEntity(2U);
    msg.setDestination(17151U);
    msg.setDestinationEntity(175U);
    msg.validity = 18035U;
    msg.type = 193U;
    msg.utc_year = 51546U;
    msg.utc_month = 19U;
    msg.utc_day = 84U;
    msg.utc_time = 0.154835876331;
    msg.lat = 0.414627961354;
    msg.lon = 0.969388441705;
    msg.height = 0.278606049286;
    msg.satellites = 24U;
    msg.cog = 0.0144828143108;
    msg.sog = 0.715982438806;
    msg.hdop = 0.204312126145;
    msg.vdop = 0.554121012589;
    msg.hacc = 0.980291924464;
    msg.vacc = 0.0257952595312;

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
    msg.setTimeStamp(0.316407942536);
    msg.setSource(13766U);
    msg.setSourceEntity(116U);
    msg.setDestination(922U);
    msg.setDestinationEntity(23U);
    msg.validity = 11993U;
    msg.type = 185U;
    msg.utc_year = 19759U;
    msg.utc_month = 67U;
    msg.utc_day = 52U;
    msg.utc_time = 0.649471076638;
    msg.lat = 0.568503362878;
    msg.lon = 0.783195557802;
    msg.height = 0.449740796439;
    msg.satellites = 97U;
    msg.cog = 0.576014175602;
    msg.sog = 0.413138567872;
    msg.hdop = 0.363714312825;
    msg.vdop = 0.519012260782;
    msg.hacc = 0.257332228057;
    msg.vacc = 0.51380709332;

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
    msg.setTimeStamp(0.917633877088);
    msg.setSource(30327U);
    msg.setSourceEntity(251U);
    msg.setDestination(11449U);
    msg.setDestinationEntity(60U);
    msg.validity = 44417U;
    msg.type = 171U;
    msg.utc_year = 1920U;
    msg.utc_month = 27U;
    msg.utc_day = 52U;
    msg.utc_time = 0.46364351728;
    msg.lat = 0.0460871940278;
    msg.lon = 0.789925729118;
    msg.height = 0.64357684759;
    msg.satellites = 239U;
    msg.cog = 0.57437227972;
    msg.sog = 0.603773298643;
    msg.hdop = 0.399929414424;
    msg.vdop = 0.404523836759;
    msg.hacc = 0.785445076137;
    msg.vacc = 0.848305623346;

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
    msg.setTimeStamp(0.0822292304393);
    msg.setSource(34592U);
    msg.setSourceEntity(104U);
    msg.setDestination(34203U);
    msg.setDestinationEntity(134U);
    msg.time = 0.0501376334982;
    msg.phi = 0.262752117837;
    msg.theta = 0.683485853666;
    msg.psi = 0.520079341302;
    msg.psi_magnetic = 0.707720585639;

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
    msg.setTimeStamp(0.320279505588);
    msg.setSource(33024U);
    msg.setSourceEntity(132U);
    msg.setDestination(12131U);
    msg.setDestinationEntity(153U);
    msg.time = 0.0706665882028;
    msg.phi = 0.376544191226;
    msg.theta = 0.344315981122;
    msg.psi = 0.712916491656;
    msg.psi_magnetic = 0.938321290544;

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
    msg.setTimeStamp(0.256382037218);
    msg.setSource(16581U);
    msg.setSourceEntity(30U);
    msg.setDestination(54573U);
    msg.setDestinationEntity(80U);
    msg.time = 0.824509061239;
    msg.phi = 0.461020914137;
    msg.theta = 0.406208501158;
    msg.psi = 0.265604748564;
    msg.psi_magnetic = 0.426187690349;

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
    msg.setTimeStamp(0.887691445356);
    msg.setSource(8761U);
    msg.setSourceEntity(233U);
    msg.setDestination(35786U);
    msg.setDestinationEntity(62U);
    msg.time = 0.0545674574319;
    msg.x = 0.739370198622;
    msg.y = 0.550884821207;
    msg.z = 0.116556867607;
    msg.timestep = 0.0234494489636;

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
    msg.setTimeStamp(0.773928931355);
    msg.setSource(18780U);
    msg.setSourceEntity(172U);
    msg.setDestination(24600U);
    msg.setDestinationEntity(73U);
    msg.time = 0.969605169834;
    msg.x = 0.343494588381;
    msg.y = 0.0569631851765;
    msg.z = 0.920995506447;
    msg.timestep = 0.793647994735;

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
    msg.setTimeStamp(0.436554397736);
    msg.setSource(58814U);
    msg.setSourceEntity(65U);
    msg.setDestination(4367U);
    msg.setDestinationEntity(166U);
    msg.time = 0.00738557018236;
    msg.x = 0.0308540538437;
    msg.y = 0.0207589954653;
    msg.z = 0.825148263558;
    msg.timestep = 0.434962480706;

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
    msg.setTimeStamp(0.366752058829);
    msg.setSource(26109U);
    msg.setSourceEntity(163U);
    msg.setDestination(64313U);
    msg.setDestinationEntity(182U);
    msg.time = 0.367187142465;
    msg.x = 0.336899106069;
    msg.y = 0.244751970326;
    msg.z = 0.206714039767;

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
    msg.setTimeStamp(0.238513936714);
    msg.setSource(9843U);
    msg.setSourceEntity(111U);
    msg.setDestination(28321U);
    msg.setDestinationEntity(217U);
    msg.time = 0.84072927882;
    msg.x = 0.491589337627;
    msg.y = 0.331227012575;
    msg.z = 0.561871217086;

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
    msg.setTimeStamp(0.920906774305);
    msg.setSource(58015U);
    msg.setSourceEntity(14U);
    msg.setDestination(46888U);
    msg.setDestinationEntity(14U);
    msg.time = 0.561610720695;
    msg.x = 0.451134134751;
    msg.y = 0.270489929608;
    msg.z = 0.393722337105;

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
    msg.setTimeStamp(0.719737598056);
    msg.setSource(58834U);
    msg.setSourceEntity(101U);
    msg.setDestination(45928U);
    msg.setDestinationEntity(191U);
    msg.time = 0.987254235299;
    msg.x = 0.395138176813;
    msg.y = 0.152965090843;
    msg.z = 0.708478886997;

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
    msg.setTimeStamp(0.0710193512578);
    msg.setSource(59217U);
    msg.setSourceEntity(185U);
    msg.setDestination(49451U);
    msg.setDestinationEntity(236U);
    msg.time = 0.308461066361;
    msg.x = 0.9978289004;
    msg.y = 0.0351285538694;
    msg.z = 0.515521844789;

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
    msg.setTimeStamp(0.20138013324);
    msg.setSource(30588U);
    msg.setSourceEntity(254U);
    msg.setDestination(9438U);
    msg.setDestinationEntity(203U);
    msg.time = 0.605056526155;
    msg.x = 0.612226108105;
    msg.y = 0.00179575110104;
    msg.z = 0.877615308965;

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
    msg.setTimeStamp(0.523612284793);
    msg.setSource(45855U);
    msg.setSourceEntity(120U);
    msg.setDestination(59365U);
    msg.setDestinationEntity(227U);
    msg.time = 0.601360881908;
    msg.x = 0.821355380479;
    msg.y = 0.86284923366;
    msg.z = 0.24482533737;

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
    msg.setTimeStamp(0.29054983805);
    msg.setSource(51476U);
    msg.setSourceEntity(112U);
    msg.setDestination(6903U);
    msg.setDestinationEntity(160U);
    msg.time = 0.524435882049;
    msg.x = 0.430612172334;
    msg.y = 0.543709720158;
    msg.z = 0.0694316211461;

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
    msg.setTimeStamp(0.245923653233);
    msg.setSource(29300U);
    msg.setSourceEntity(138U);
    msg.setDestination(64299U);
    msg.setDestinationEntity(65U);
    msg.time = 0.550631426934;
    msg.x = 0.948655118035;
    msg.y = 0.118224712694;
    msg.z = 0.827708858415;

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
    msg.setTimeStamp(0.720017793127);
    msg.setSource(56154U);
    msg.setSourceEntity(62U);
    msg.setDestination(47656U);
    msg.setDestinationEntity(219U);
    msg.validity = 66U;
    msg.x = 0.761046074665;
    msg.y = 0.44913849391;
    msg.z = 0.670953593227;

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
    msg.setTimeStamp(0.430247336494);
    msg.setSource(61793U);
    msg.setSourceEntity(113U);
    msg.setDestination(36018U);
    msg.setDestinationEntity(210U);
    msg.validity = 47U;
    msg.x = 0.646820054305;
    msg.y = 0.469508342357;
    msg.z = 0.37181167074;

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
    msg.setTimeStamp(0.776805815629);
    msg.setSource(4499U);
    msg.setSourceEntity(50U);
    msg.setDestination(20050U);
    msg.setDestinationEntity(75U);
    msg.validity = 162U;
    msg.x = 0.632638210388;
    msg.y = 0.176058705481;
    msg.z = 0.625289217885;

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
    msg.setTimeStamp(0.612661038579);
    msg.setSource(770U);
    msg.setSourceEntity(45U);
    msg.setDestination(60146U);
    msg.setDestinationEntity(22U);
    msg.validity = 217U;
    msg.x = 0.759476579094;
    msg.y = 0.0290579791368;
    msg.z = 0.629579858239;

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
    msg.setTimeStamp(0.70323028571);
    msg.setSource(27416U);
    msg.setSourceEntity(10U);
    msg.setDestination(29744U);
    msg.setDestinationEntity(211U);
    msg.validity = 60U;
    msg.x = 0.13138484998;
    msg.y = 0.893873166609;
    msg.z = 0.799184084706;

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
    msg.setTimeStamp(0.409689453654);
    msg.setSource(47640U);
    msg.setSourceEntity(137U);
    msg.setDestination(21621U);
    msg.setDestinationEntity(179U);
    msg.validity = 81U;
    msg.x = 0.199929145824;
    msg.y = 0.598624203639;
    msg.z = 0.700597770248;

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
    msg.setTimeStamp(0.843312192131);
    msg.setSource(2224U);
    msg.setSourceEntity(237U);
    msg.setDestination(41133U);
    msg.setDestinationEntity(198U);
    msg.time = 0.221693566036;
    msg.x = 0.55232676829;
    msg.y = 0.247394087026;
    msg.z = 0.312321514846;

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
    msg.setTimeStamp(0.798295103118);
    msg.setSource(27430U);
    msg.setSourceEntity(133U);
    msg.setDestination(18877U);
    msg.setDestinationEntity(35U);
    msg.time = 0.943223244724;
    msg.x = 0.434562390568;
    msg.y = 0.997389907673;
    msg.z = 0.901106705003;

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
    msg.setTimeStamp(0.169993059161);
    msg.setSource(45028U);
    msg.setSourceEntity(194U);
    msg.setDestination(48493U);
    msg.setDestinationEntity(45U);
    msg.time = 0.0816900493234;
    msg.x = 0.413995109463;
    msg.y = 0.993129457689;
    msg.z = 0.38248079202;

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
    msg.setTimeStamp(0.392170799502);
    msg.setSource(19890U);
    msg.setSourceEntity(111U);
    msg.setDestination(36854U);
    msg.setDestinationEntity(148U);
    msg.validity = 176U;
    msg.value = 0.794013378774;

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
    msg.setTimeStamp(0.196753579202);
    msg.setSource(62017U);
    msg.setSourceEntity(203U);
    msg.setDestination(6531U);
    msg.setDestinationEntity(125U);
    msg.validity = 37U;
    msg.value = 0.111294696836;

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
    msg.setTimeStamp(0.253751156814);
    msg.setSource(2690U);
    msg.setSourceEntity(36U);
    msg.setDestination(12387U);
    msg.setDestinationEntity(52U);
    msg.validity = 121U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.508318353486;
    tmp_msg_0.y = 0.433302693184;
    tmp_msg_0.z = 0.870410624159;
    tmp_msg_0.phi = 0.569183002084;
    tmp_msg_0.theta = 0.633960024517;
    tmp_msg_0.psi = 0.296521876181;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.00404979965241;

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
    msg.setTimeStamp(0.724688845518);
    msg.setSource(11404U);
    msg.setSourceEntity(88U);
    msg.setDestination(8174U);
    msg.setDestinationEntity(112U);
    msg.value = 0.378611756153;

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
    msg.setTimeStamp(0.152446287933);
    msg.setSource(24175U);
    msg.setSourceEntity(19U);
    msg.setDestination(29346U);
    msg.setDestinationEntity(132U);
    msg.value = 0.370808389699;

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
    msg.setTimeStamp(0.481164223024);
    msg.setSource(31706U);
    msg.setSourceEntity(105U);
    msg.setDestination(49914U);
    msg.setDestinationEntity(218U);
    msg.value = 0.236475569227;

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
    msg.setTimeStamp(0.147705646948);
    msg.setSource(35308U);
    msg.setSourceEntity(99U);
    msg.setDestination(50510U);
    msg.setDestinationEntity(181U);
    msg.value = 0.58156267037;

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
    msg.setTimeStamp(0.345195412554);
    msg.setSource(23031U);
    msg.setSourceEntity(36U);
    msg.setDestination(40221U);
    msg.setDestinationEntity(125U);
    msg.value = 0.317730482457;

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
    msg.setTimeStamp(0.465295903807);
    msg.setSource(2004U);
    msg.setSourceEntity(188U);
    msg.setDestination(19366U);
    msg.setDestinationEntity(77U);
    msg.value = 0.648868772264;

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
    msg.setTimeStamp(0.0477168823022);
    msg.setSource(24072U);
    msg.setSourceEntity(193U);
    msg.setDestination(6969U);
    msg.setDestinationEntity(142U);
    msg.value = 0.294536921175;

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
    msg.setTimeStamp(0.377356817707);
    msg.setSource(52303U);
    msg.setSourceEntity(241U);
    msg.setDestination(9458U);
    msg.setDestinationEntity(70U);
    msg.value = 0.282055177003;

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
    msg.setTimeStamp(0.517917427209);
    msg.setSource(36079U);
    msg.setSourceEntity(112U);
    msg.setDestination(27596U);
    msg.setDestinationEntity(163U);
    msg.value = 0.197983646931;

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
    msg.setTimeStamp(0.576154241877);
    msg.setSource(2966U);
    msg.setSourceEntity(160U);
    msg.setDestination(63411U);
    msg.setDestinationEntity(102U);
    msg.value = 0.676099661051;

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
    msg.setTimeStamp(0.139046727239);
    msg.setSource(5034U);
    msg.setSourceEntity(224U);
    msg.setDestination(27563U);
    msg.setDestinationEntity(44U);
    msg.value = 0.116411700569;

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
    msg.setTimeStamp(0.0597239921714);
    msg.setSource(19851U);
    msg.setSourceEntity(206U);
    msg.setDestination(36281U);
    msg.setDestinationEntity(133U);
    msg.value = 0.997192463732;

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
    msg.setTimeStamp(0.061706070639);
    msg.setSource(34704U);
    msg.setSourceEntity(152U);
    msg.setDestination(11678U);
    msg.setDestinationEntity(207U);
    msg.value = 0.311412076565;

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
    msg.setTimeStamp(0.708060527374);
    msg.setSource(1534U);
    msg.setSourceEntity(192U);
    msg.setDestination(11257U);
    msg.setDestinationEntity(245U);
    msg.value = 0.865969177743;

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
    msg.setTimeStamp(0.509973136702);
    msg.setSource(63414U);
    msg.setSourceEntity(221U);
    msg.setDestination(14180U);
    msg.setDestinationEntity(125U);
    msg.value = 0.172847708586;

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
    msg.setTimeStamp(0.175340816149);
    msg.setSource(55432U);
    msg.setSourceEntity(26U);
    msg.setDestination(10026U);
    msg.setDestinationEntity(112U);
    msg.value = 0.0152473435328;

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
    msg.setTimeStamp(0.62634104034);
    msg.setSource(43255U);
    msg.setSourceEntity(88U);
    msg.setDestination(26292U);
    msg.setDestinationEntity(119U);
    msg.value = 0.0192421021671;

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
    msg.setTimeStamp(0.566280031238);
    msg.setSource(10606U);
    msg.setSourceEntity(194U);
    msg.setDestination(14573U);
    msg.setDestinationEntity(95U);
    msg.value = 0.554620330735;

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
    msg.setTimeStamp(0.523764639938);
    msg.setSource(38348U);
    msg.setSourceEntity(140U);
    msg.setDestination(51047U);
    msg.setDestinationEntity(65U);
    msg.value = 0.750070780901;

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
    msg.setTimeStamp(0.34479777276);
    msg.setSource(38828U);
    msg.setSourceEntity(242U);
    msg.setDestination(53582U);
    msg.setDestinationEntity(169U);
    msg.value = 0.78131407889;

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
    msg.setTimeStamp(0.547541585436);
    msg.setSource(8634U);
    msg.setSourceEntity(206U);
    msg.setDestination(52053U);
    msg.setDestinationEntity(89U);
    msg.value = 0.311760683244;

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
    msg.setTimeStamp(0.67885176588);
    msg.setSource(52436U);
    msg.setSourceEntity(148U);
    msg.setDestination(58266U);
    msg.setDestinationEntity(164U);
    msg.value = 0.941077227018;

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
    msg.setTimeStamp(0.0481577690652);
    msg.setSource(47605U);
    msg.setSourceEntity(54U);
    msg.setDestination(27291U);
    msg.setDestinationEntity(76U);
    msg.value = 0.653510013329;

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
    msg.setTimeStamp(0.784503299905);
    msg.setSource(33051U);
    msg.setSourceEntity(120U);
    msg.setDestination(18275U);
    msg.setDestinationEntity(82U);
    msg.value = 0.199062607998;

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
    msg.setTimeStamp(0.722701538615);
    msg.setSource(29831U);
    msg.setSourceEntity(73U);
    msg.setDestination(5332U);
    msg.setDestinationEntity(191U);
    msg.direction = 0.842260056406;
    msg.speed = 0.350156575879;
    msg.turbulence = 0.910033459489;

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
    msg.setTimeStamp(0.729740813616);
    msg.setSource(4093U);
    msg.setSourceEntity(209U);
    msg.setDestination(42011U);
    msg.setDestinationEntity(17U);
    msg.direction = 0.474038591687;
    msg.speed = 0.98991359459;
    msg.turbulence = 0.0892397694502;

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
    msg.setTimeStamp(0.440471844741);
    msg.setSource(57631U);
    msg.setSourceEntity(246U);
    msg.setDestination(46474U);
    msg.setDestinationEntity(25U);
    msg.direction = 0.00498386478103;
    msg.speed = 0.168565806256;
    msg.turbulence = 0.163093380485;

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
    msg.setTimeStamp(0.894672102401);
    msg.setSource(16240U);
    msg.setSourceEntity(27U);
    msg.setDestination(36180U);
    msg.setDestinationEntity(218U);
    msg.value = 0.954333169353;

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
    msg.setTimeStamp(0.457097310191);
    msg.setSource(5258U);
    msg.setSourceEntity(0U);
    msg.setDestination(25346U);
    msg.setDestinationEntity(24U);
    msg.value = 0.902078094165;

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
    msg.setTimeStamp(0.852678364486);
    msg.setSource(43988U);
    msg.setSourceEntity(55U);
    msg.setDestination(59670U);
    msg.setDestinationEntity(112U);
    msg.value = 0.78699243295;

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
    msg.setTimeStamp(0.807848737857);
    msg.setSource(41734U);
    msg.setSourceEntity(208U);
    msg.setDestination(18566U);
    msg.setDestinationEntity(184U);
    msg.value.assign("TVPGHGWTPTFQEQYEAEZZOYPLWGPGKNKNKYMNFADYVLCYXIHLXPFNCVWGOOOHJZECRVRQAQZPJDSAHACFZJFQIUWFSJRZVJBNUTURUQABKCULPIDQMYXKRWBTJDIOKMOLEZOEEVALLGHASCDJQAMTRLEQJIRZYWHBHYIXGRBCM");

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
    msg.setTimeStamp(0.866061572231);
    msg.setSource(4768U);
    msg.setSourceEntity(170U);
    msg.setDestination(41210U);
    msg.setDestinationEntity(110U);
    msg.value.assign("AWFFIWNLXKGIEDHOQWPTHBYCUUDDAVXKFDBEPJSUICEQBHLLMXRKZYANZYHRAMSUKHXLJPLYOMYWJTGKVWRBDZZKOOIRVQSWYEYTBPGYGXNQQGAFRTCBSFBXKITSMORUNGWNDTFFMULHQHSJEO");

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
    msg.setTimeStamp(0.454534781953);
    msg.setSource(62194U);
    msg.setSourceEntity(159U);
    msg.setDestination(65142U);
    msg.setDestinationEntity(192U);
    msg.value.assign("JTZIVOIVTNCAOWKGQWOIHGDTYRFNBHVQWDFDHAYRBNCIACQJJHLPIGASGQTRDPOSVPLFJXTDQFEBRTNYTJUAKKZDQWKKNUYPCTBGSFKVSHXMVMKZLLGENCRUFXPUPJTEIZKNVDTCUGSCXEEXAMEFRVHOBUPYXZQGJBOCJWRFKOLDFRXBZHIDUNAUWMJVWXEBMYUMLZODEOAHSFQMIQPAVMSX");

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
    msg.setTimeStamp(0.0351657913138);
    msg.setSource(55189U);
    msg.setSourceEntity(225U);
    msg.setDestination(50610U);
    msg.setDestinationEntity(106U);
    const char tmp_msg_0[] = {97, 7, 21, -16, 82, -12, 100, -107, 117, -87, -79, -91, -49, -54, 64, 32, -16, -47, 29, 85, 23, -108, 40, 16, -117, 123, 122, -31, 104, 42, 26, 57, -91, 108, -122, 104, 41, -103, 74, 126, -46, -61, -16, -92, -31, 10, 28, 51, 46, -72, -40, 97, -70, -41, 78, 111, 63, 83, 49, -45, 113, -42, 76, -81, -82, 123, -107, -127, -9, 96, -28, 98, -75, 51, 20, -33, 35, 34, -69, -92, -37, -54, 107, -70, 70, 80, 60, 40, -12, 118, -115, 54, -124, -65, 56, 60, 43, 60, -60, -117, 56, -94, 63, 10, -54, 20, -8, 30, -56, 84, -123, 101, -78, 27, -24, 65, -123, 86, 26, 63, 73, -12, 28, -92, -4, -27, -23, 39, 21, -30, -108, 107, -28, -55, -121, -31, -13, -31, -101, 54, -101, 38, 121, 7, -2, -106, 40, -77, -54, 52, -123, -40, -46, 74, -115, 119, 51, 122, 90, -2, 59, 26, 19, -13, -17, 121, -84, 73, 54, -128, 91, 70, -84, -58, -35, 114, -80, 93, -47, -93, 122, -74, 117, -13, 55, -101, -96, 94, -101, 105, -78, 85, -46, -14, 33, -81, -53, -125, -93, -47, 56, 10, 7, -47, 46, 71, 56, 44, 45, -109, -68, 113, 65, -45, 65};
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
    msg.setTimeStamp(0.938022032489);
    msg.setSource(15856U);
    msg.setSourceEntity(117U);
    msg.setDestination(12970U);
    msg.setDestinationEntity(148U);
    const char tmp_msg_0[] = {-43, 34, -2, -125, 85, 63, -62, -43, 116, 22, 125, -25, -82, -98, -55, -21, -34, -70, -49, 69, -9, -12, 95, -53, 112, 81, 47, -58, 34, -94, -39, 6, 86, -80, 103, -16, -76, -10, 1, -127, 28, -128, 49, 46, -39, 109, 48, 83, -14, 125, 69, 77, -67, -22, 46, 23, 54, -11, 86, 122, -100, 20, -29, -72, -43, 21, -34, 59, 0, -13, -13, 70, -50, -38, 14, 56, -90, 116, 74, 14, 80, -30, -118, -26, 105, -28, -40, -73, 96, -96, 111, 116, -52, 124, 40, -42, -81, -3, -128, 72, 117, -86, -109, -73, 109, 74, -35, -98, 42, 19, -44, 78, -84, 15, 80, -23, 52, 17, 30, 35, -22, 48, -61, 20, 14, 115, 6, 71, 99, -38, -100, -30, -56, 14, 33, -14, 41, -103, -47, -16, -127, 74, 7, 54, -15, 73, -45, 57, 60, -56, 11, -10, 6, 51, 57, 60, -102, -104, 13, -5, -51, 81, -42, 76, 107, 55, 23, 13, -99, 92, 42, -117, -25, 37, 77, -79, 18, 108, -98, -13, -88, -80, 78, -80, 62, 99, 104, 10, 104, 52, 19, -56};
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
    msg.setTimeStamp(0.675154862992);
    msg.setSource(4616U);
    msg.setSourceEntity(132U);
    msg.setDestination(7314U);
    msg.setDestinationEntity(56U);
    const char tmp_msg_0[] = {-32, 25, 15, 57, -10, -76, 117, 19, 25, -56, 108, 91, 6, 117, -103, 6, -11, 45, 59, 104, 95, 55, -101, -64, -71, -7, 0, -66, -72, 87, -38, 33, -47, 59, 53, 30, 71, -56, -107, -50, -80, 109, 13, 73, 108, -47, -33, 76, 58, 125, -11, -2, -74, -3, 74, -86, 7, -17, -62, -57, 105, -5, -29, 99, 76, -32, -56, -17, 15, -125, 9, -106, -102, 32, 40, -128, 40, 4, 99, 70, 60, -106, 75, -40, 109, -120, -16, 105, -35, -127, 12, 30, 62, -84, 77, 42, 108, -28, 89, -29, -83, -41, -19, -87, -64, -68, 79, 119, -81, 10, -26, -52, 72, -78, -96, 122, 20, -100, 50, -61, -55, 43, -48, 5, 30, 76, 37, -4, 75, 36, 118, 80, -122, -6, 81, 100, -35, -70, 0, -20, 102, -125, -73, -22, -43, -62, 121, 51, 96, 108, 45, -43, 116, -9};
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
    msg.setTimeStamp(0.625637892906);
    msg.setSource(58570U);
    msg.setSourceEntity(3U);
    msg.setDestination(31253U);
    msg.setDestinationEntity(20U);
    msg.value = 0.542296558648;

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
    msg.setTimeStamp(0.977388416287);
    msg.setSource(9852U);
    msg.setSourceEntity(119U);
    msg.setDestination(24320U);
    msg.setDestinationEntity(23U);
    msg.value = 0.401196951427;

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
    msg.setTimeStamp(0.743345668265);
    msg.setSource(2641U);
    msg.setSourceEntity(39U);
    msg.setDestination(3234U);
    msg.setDestinationEntity(151U);
    msg.value = 0.679826375002;

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
    msg.setTimeStamp(0.11183208829);
    msg.setSource(24319U);
    msg.setSourceEntity(245U);
    msg.setDestination(30527U);
    msg.setDestinationEntity(104U);
    msg.type = 162U;
    msg.frequency = 2451670167U;
    msg.min_range = 38896U;
    msg.max_range = 40929U;
    msg.bits_per_point = 122U;
    msg.scale_factor = 0.0394324032119;
    const char tmp_msg_0[] = {-29, 80, -127, -103, 63, 86, 44, -24, 74, 13, -17, 101, 81, 116, -79, 110, 0, -28, -6, 47, -51, -4, -107, -72, 83, -26, 2, -118, 50, -34, 118, -82, 79, 96, -114, -76, 28, -93, 1, -32, -80, -36, 38, 112, -42, -50, 3, 29, 45, -54, 54, 110, 123, 51, 91, -56, 116, 50, 108, -112, 73, -57, 25, -20, 62, -67, -15, 126, -84, 109, 72, 30, -2, 121, 96, 69, 71, -4, -88, 98, 113, 74, 9, 2, 75, -37, 118, -21, -122, 112, 69, -113, 113, -59, 37, -95, 27, -87, -15, 124, 63, 6, 60, -125, 32, 5, -97, 42, -81, 116, 18, 59, 76, 122, 120, 109, -37, -126, 40, 0, -57, 93, -10, 100, 24, -101, -61, 3, 67, 124, -81, -21, 123, -97, -116, -62, 93, -22, 40, -68, -49, 116, -83, -74, 89, 57, -110, -23, -114, 122, 35, -99, -15, 63, -89, 96, 53, 51, -23, 106, -20, -7, 71, -126, -26, 72, -33, -97, -28, 9, -70, 108, 5, -35, 121, -81, 42, -94, 125, 105, -38, -23, -92, 86, -69, -72, -8, -46, 126, -106, -22, 88, 113, 4, 72, 75, 5, -56, -111, -68, -95, -19, -50, -7, 16, -17, 58, 49, -113, 58, -85, 123, 37, 8, -92, -66, -12, -75, 12, 106, 73, -55, 87, -69, 39, 109, 80, -64, 115, 19, -24, 95, -29, -114, 116, -96, -106, 54, -122, -38, 121};
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
    msg.setTimeStamp(0.597747971596);
    msg.setSource(50730U);
    msg.setSourceEntity(70U);
    msg.setDestination(41140U);
    msg.setDestinationEntity(93U);
    msg.type = 135U;
    msg.frequency = 2601745002U;
    msg.min_range = 34364U;
    msg.max_range = 10992U;
    msg.bits_per_point = 128U;
    msg.scale_factor = 0.798143327352;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.721973631934;
    tmp_msg_0.beam_height = 0.887672165521;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-123, 82, 102, 22, 68, -60, -49, -107, -90, -88, 59, -98, -70, 51, -36, 69, 92, 79, 112, 89, -27, 18, 3, -72, 37, 20, 27, -3, 18, -106, 93, 21, -32, 4, 89, -24, 120, -52, 102, 97, 10, -57, 16, -93, -25, -12, 54, -90, 118, 100, 50, 17, 91, 98, -81, 52, 118, 30, -99, -126, 105, 73, 9, -47, -2, 61, -31, 27, 29, 115, 51, -14, 121, -48, -125, 40, -23, -56, -32, 92, 1, 96, -67, -23, -124, -121, 109, -70, -62, -120, 93, -120, 69, -57, -115, -106, -40, -70, -58, -100, 72, -42, 59, 1, -115, -69, -87, 79, -90, -75, -72, -126, -108, 45, -107, 9, -22, -20, 87, 57, 81, -75, 67, -37, 82, -102, -78, 103, 86, 19, 117, -53, -13, 107, -72, -84, -72, 77, -96, -122, 90, 75, 40, 39, -14, -108, -61, 124, -107, 75, -70, -29, -55, 80, 56, -107, 64, 47, 43, 29, 44, -114, 35, -61, -25, -53, -6, -12, -98, -93, -90, -81, -120, -52, 111, 50, 125, -17, 22, 15, -45, -10, 103, 120, -86, -101, -54, -34, -61, 73, 88, 65, 5, 74, -37, 120, 0, -94, -44, -89, 31, 99, 97, -116, 40, 55, -113, 79, 27, 82, 114, 30, 104, -50, 42, -33, 79, 81, -120, 108, 65, 63, 41, 24, -29, -115, 45, -55, 52, 21, -33, 105, -104, -89, 16, -97, -31, -25, -96, -81, 79, -114, 81, 79, 1, -38};
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
    msg.setTimeStamp(0.89753236703);
    msg.setSource(36448U);
    msg.setSourceEntity(144U);
    msg.setDestination(45893U);
    msg.setDestinationEntity(12U);
    msg.type = 219U;
    msg.frequency = 1899632860U;
    msg.min_range = 52349U;
    msg.max_range = 18152U;
    msg.bits_per_point = 234U;
    msg.scale_factor = 0.176947965564;
    const char tmp_msg_0[] = {112, 37, 25, 50, 61, -2, -32, 80, 87, 117, -51, -104, -90, -56, 57, 32, 23, 15, -38, -95, -114, 61, 63, 18, -46, -53, 58, 122, 82, -111, 122, 65, 108, -111, 13, -95, -46, -48, -126, -123, 99, -45, 119, 16, 66, 47};
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
    msg.setTimeStamp(0.883202433556);
    msg.setSource(35697U);
    msg.setSourceEntity(25U);
    msg.setDestination(33936U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.769916202889);
    msg.setSource(36328U);
    msg.setSourceEntity(115U);
    msg.setDestination(37225U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.00120589594964);
    msg.setSource(29427U);
    msg.setSourceEntity(104U);
    msg.setDestination(19760U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.14742694201);
    msg.setSource(1111U);
    msg.setSourceEntity(204U);
    msg.setDestination(60093U);
    msg.setDestinationEntity(88U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.603209981929);
    msg.setSource(33941U);
    msg.setSourceEntity(185U);
    msg.setDestination(52903U);
    msg.setDestinationEntity(222U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.822064550266);
    msg.setSource(21404U);
    msg.setSourceEntity(44U);
    msg.setDestination(15330U);
    msg.setDestinationEntity(104U);
    msg.op = 7U;

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
    msg.setTimeStamp(0.789694645073);
    msg.setSource(9557U);
    msg.setSourceEntity(98U);
    msg.setDestination(43482U);
    msg.setDestinationEntity(28U);
    msg.value = 0.948248320809;
    msg.confidence = 0.525393774852;
    msg.opmodes.assign("PWTBKSOYDTXXTFNGPEGASPDITWSCECAUGQMBZKMHENHWMJVUJGVUNYZSOIUMSOYLOLWSZJRYFIIJUCMJHPXZFQMOFEDTQFYAKVEXAHTYRVYPRVEXCRHRYGOQALADFDWVRHLJSZZDNNIKLPSCQRHPDEFUNJMBIYS");

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
    msg.setTimeStamp(0.510516984184);
    msg.setSource(35412U);
    msg.setSourceEntity(229U);
    msg.setDestination(48304U);
    msg.setDestinationEntity(200U);
    msg.value = 0.990445092133;
    msg.confidence = 0.58699209538;
    msg.opmodes.assign("PXWKWPNBVWSGMLLJOAHBCXZSDYMWDXMPDEQUMEKIXKQPJJJIVWJFWGLXFDCYGZQRQT");

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
    msg.setTimeStamp(0.246952677732);
    msg.setSource(568U);
    msg.setSourceEntity(239U);
    msg.setDestination(61518U);
    msg.setDestinationEntity(245U);
    msg.value = 0.125389280385;
    msg.confidence = 0.16764033898;
    msg.opmodes.assign("HVXNLSIWHUSQRSBSIMEQKMODAIAPPDMOCDLPZLEXQSJLDFBRKRHLKIRWAFKTTNNGWXNJUHXLZEPWGCCJTPALCOQLKTORXRCKGZTEVMSFHKCEVWGYZJWVVQYRFDOBQYQZDPNAHKFJCWYJTEQIGSVJBAGVDYSZAGMPWDTEBIUOXRZMSUMWAOKMITRCOEXFCSJHZHFENBYUHAQATFXHDTG");

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
    msg.setTimeStamp(0.317020711651);
    msg.setSource(1190U);
    msg.setSourceEntity(177U);
    msg.setDestination(17485U);
    msg.setDestinationEntity(115U);
    msg.itow = 3208207163U;
    msg.lat = 0.140736654641;
    msg.lon = 0.23569046021;
    msg.height_ell = 0.50958609267;
    msg.height_sea = 0.0694805973438;
    msg.hacc = 0.434991085449;
    msg.vacc = 0.0625159586273;
    msg.vel_n = 0.659184284427;
    msg.vel_e = 0.913217585385;
    msg.vel_d = 0.521783058035;
    msg.speed = 0.22301639738;
    msg.gspeed = 0.56269522924;
    msg.heading = 0.968312305184;
    msg.sacc = 0.321354664346;
    msg.cacc = 0.59873719701;

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
    msg.setTimeStamp(0.176340925492);
    msg.setSource(9742U);
    msg.setSourceEntity(47U);
    msg.setDestination(48443U);
    msg.setDestinationEntity(134U);
    msg.itow = 1227317241U;
    msg.lat = 0.330869543563;
    msg.lon = 0.222769356602;
    msg.height_ell = 0.474311486547;
    msg.height_sea = 0.822434666051;
    msg.hacc = 0.55420080382;
    msg.vacc = 0.859573402813;
    msg.vel_n = 0.258385747776;
    msg.vel_e = 0.602025055245;
    msg.vel_d = 0.369929296688;
    msg.speed = 0.670177482806;
    msg.gspeed = 0.571473217487;
    msg.heading = 0.885377945066;
    msg.sacc = 0.552147240982;
    msg.cacc = 0.955598588422;

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
    msg.setTimeStamp(0.977717274355);
    msg.setSource(8233U);
    msg.setSourceEntity(156U);
    msg.setDestination(44437U);
    msg.setDestinationEntity(149U);
    msg.itow = 1166452199U;
    msg.lat = 0.293845915186;
    msg.lon = 0.599204827378;
    msg.height_ell = 0.170549552752;
    msg.height_sea = 0.132663804086;
    msg.hacc = 0.294107434491;
    msg.vacc = 0.6121521146;
    msg.vel_n = 0.449986312606;
    msg.vel_e = 0.349813655362;
    msg.vel_d = 0.6236279662;
    msg.speed = 0.245633930527;
    msg.gspeed = 0.167100102995;
    msg.heading = 0.92248993808;
    msg.sacc = 0.431455147322;
    msg.cacc = 0.915398090547;

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
    msg.setTimeStamp(0.453052309309);
    msg.setSource(3340U);
    msg.setSourceEntity(175U);
    msg.setDestination(11394U);
    msg.setDestinationEntity(192U);
    msg.id = 76U;
    msg.value = 0.220667227094;

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
    msg.setTimeStamp(0.743341454564);
    msg.setSource(40916U);
    msg.setSourceEntity(228U);
    msg.setDestination(6435U);
    msg.setDestinationEntity(189U);
    msg.id = 213U;
    msg.value = 0.550048778529;

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
    msg.setTimeStamp(0.0850127785772);
    msg.setSource(47649U);
    msg.setSourceEntity(144U);
    msg.setDestination(55319U);
    msg.setDestinationEntity(107U);
    msg.id = 25U;
    msg.value = 0.345460432119;

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
    msg.setTimeStamp(0.946034602377);
    msg.setSource(12321U);
    msg.setSourceEntity(203U);
    msg.setDestination(53646U);
    msg.setDestinationEntity(139U);
    msg.x = 0.556180917197;
    msg.y = 0.146078905474;
    msg.z = 0.122923038694;
    msg.phi = 0.891128491472;
    msg.theta = 0.351442634187;
    msg.psi = 0.382328942772;

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
    msg.setTimeStamp(0.890645156343);
    msg.setSource(55812U);
    msg.setSourceEntity(248U);
    msg.setDestination(45431U);
    msg.setDestinationEntity(237U);
    msg.x = 0.717054830591;
    msg.y = 0.405401609044;
    msg.z = 0.447672999165;
    msg.phi = 0.983390285539;
    msg.theta = 0.647722040151;
    msg.psi = 0.481782645351;

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
    msg.setTimeStamp(0.826222355208);
    msg.setSource(17339U);
    msg.setSourceEntity(202U);
    msg.setDestination(354U);
    msg.setDestinationEntity(114U);
    msg.x = 0.208618424598;
    msg.y = 0.429522102465;
    msg.z = 0.68442894702;
    msg.phi = 0.894590680488;
    msg.theta = 0.168845481658;
    msg.psi = 0.82575798509;

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
    msg.setTimeStamp(0.201380416977);
    msg.setSource(56371U);
    msg.setSourceEntity(46U);
    msg.setDestination(22687U);
    msg.setDestinationEntity(36U);
    msg.beam_width = 0.558363643613;
    msg.beam_height = 0.681710330414;

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
    msg.setTimeStamp(0.888758037614);
    msg.setSource(30436U);
    msg.setSourceEntity(164U);
    msg.setDestination(15971U);
    msg.setDestinationEntity(151U);
    msg.beam_width = 0.650571985484;
    msg.beam_height = 0.0125837887855;

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
    msg.setTimeStamp(0.26617483344);
    msg.setSource(59141U);
    msg.setSourceEntity(80U);
    msg.setDestination(37387U);
    msg.setDestinationEntity(58U);
    msg.beam_width = 0.0486381838493;
    msg.beam_height = 0.5530497184;

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
    msg.setTimeStamp(0.26107487697);
    msg.setSource(49719U);
    msg.setSourceEntity(246U);
    msg.setDestination(3516U);
    msg.setDestinationEntity(122U);
    msg.sane = 79U;

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
    msg.setTimeStamp(0.507563940748);
    msg.setSource(705U);
    msg.setSourceEntity(233U);
    msg.setDestination(30448U);
    msg.setDestinationEntity(85U);
    msg.sane = 161U;

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
    msg.setTimeStamp(0.656024798087);
    msg.setSource(8357U);
    msg.setSourceEntity(189U);
    msg.setDestination(5384U);
    msg.setDestinationEntity(160U);
    msg.sane = 204U;

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
    msg.setTimeStamp(0.81985064054);
    msg.setSource(18399U);
    msg.setSourceEntity(252U);
    msg.setDestination(62489U);
    msg.setDestinationEntity(14U);
    msg.value = 0.464457020895;

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
    msg.setTimeStamp(0.466122297086);
    msg.setSource(52380U);
    msg.setSourceEntity(204U);
    msg.setDestination(55918U);
    msg.setDestinationEntity(55U);
    msg.value = 0.264469431883;

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
    msg.setTimeStamp(0.165699591738);
    msg.setSource(15097U);
    msg.setSourceEntity(27U);
    msg.setDestination(21129U);
    msg.setDestinationEntity(40U);
    msg.value = 0.941298151608;

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
    msg.setTimeStamp(0.399733362538);
    msg.setSource(22154U);
    msg.setSourceEntity(178U);
    msg.setDestination(31604U);
    msg.setDestinationEntity(79U);
    msg.value = 0.29893651399;

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
    msg.setTimeStamp(0.353550033368);
    msg.setSource(54347U);
    msg.setSourceEntity(201U);
    msg.setDestination(33713U);
    msg.setDestinationEntity(202U);
    msg.value = 0.778462782333;

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
    msg.setTimeStamp(0.328060545702);
    msg.setSource(47960U);
    msg.setSourceEntity(42U);
    msg.setDestination(35539U);
    msg.setDestinationEntity(189U);
    msg.value = 0.556382237159;

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
    msg.setTimeStamp(0.748766411763);
    msg.setSource(29769U);
    msg.setSourceEntity(24U);
    msg.setDestination(18045U);
    msg.setDestinationEntity(60U);
    msg.value = 0.480505172389;

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
    msg.setTimeStamp(0.396859531723);
    msg.setSource(59595U);
    msg.setSourceEntity(234U);
    msg.setDestination(30296U);
    msg.setDestinationEntity(19U);
    msg.value = 0.922403349899;

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
    msg.setTimeStamp(0.900293804648);
    msg.setSource(59876U);
    msg.setSourceEntity(73U);
    msg.setDestination(53365U);
    msg.setDestinationEntity(100U);
    msg.value = 0.423661200433;

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
    msg.setTimeStamp(0.257295565827);
    msg.setSource(43099U);
    msg.setSourceEntity(207U);
    msg.setDestination(38744U);
    msg.setDestinationEntity(15U);
    msg.value = 0.563242590918;

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
    msg.setTimeStamp(0.288711744793);
    msg.setSource(753U);
    msg.setSourceEntity(167U);
    msg.setDestination(7854U);
    msg.setDestinationEntity(71U);
    msg.value = 0.742417340102;

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
    msg.setTimeStamp(0.184142008436);
    msg.setSource(9554U);
    msg.setSourceEntity(77U);
    msg.setDestination(30044U);
    msg.setDestinationEntity(1U);
    msg.value = 0.954590797291;

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
    msg.setTimeStamp(0.669012885158);
    msg.setSource(61973U);
    msg.setSourceEntity(105U);
    msg.setDestination(13494U);
    msg.setDestinationEntity(158U);
    msg.value = 0.703725897033;

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
    msg.setTimeStamp(0.251562825142);
    msg.setSource(59058U);
    msg.setSourceEntity(220U);
    msg.setDestination(35465U);
    msg.setDestinationEntity(173U);
    msg.value = 0.018095935776;

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
    msg.setTimeStamp(0.28162422208);
    msg.setSource(8775U);
    msg.setSourceEntity(207U);
    msg.setDestination(36582U);
    msg.setDestinationEntity(84U);
    msg.value = 0.931472138724;

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
    msg.setTimeStamp(0.475405638656);
    msg.setSource(61256U);
    msg.setSourceEntity(140U);
    msg.setDestination(45948U);
    msg.setDestinationEntity(123U);
    msg.value = 0.19990236876;

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
    msg.setTimeStamp(0.592503402908);
    msg.setSource(50U);
    msg.setSourceEntity(14U);
    msg.setDestination(27290U);
    msg.setDestinationEntity(136U);
    msg.value = 0.375198855067;

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
    msg.setTimeStamp(0.599234718919);
    msg.setSource(7084U);
    msg.setSourceEntity(111U);
    msg.setDestination(13646U);
    msg.setDestinationEntity(104U);
    msg.value = 0.903701307286;

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
    msg.setTimeStamp(0.938529111365);
    msg.setSource(16822U);
    msg.setSourceEntity(74U);
    msg.setDestination(27556U);
    msg.setDestinationEntity(108U);
    msg.value = 0.101662163758;

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
    msg.setTimeStamp(0.903012700038);
    msg.setSource(34317U);
    msg.setSourceEntity(120U);
    msg.setDestination(41049U);
    msg.setDestinationEntity(141U);
    msg.value = 0.286199908422;

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
    msg.setTimeStamp(0.275373826152);
    msg.setSource(55222U);
    msg.setSourceEntity(135U);
    msg.setDestination(22211U);
    msg.setDestinationEntity(198U);
    msg.value = 0.293161396757;

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
    msg.setTimeStamp(0.152360100303);
    msg.setSource(12576U);
    msg.setSourceEntity(235U);
    msg.setDestination(28959U);
    msg.setDestinationEntity(87U);
    msg.value = 0.417603695597;

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
    msg.setTimeStamp(0.180689788983);
    msg.setSource(40535U);
    msg.setSourceEntity(122U);
    msg.setDestination(45035U);
    msg.setDestinationEntity(95U);
    msg.value = 0.764985992703;

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
    msg.setTimeStamp(0.0244617468598);
    msg.setSource(28434U);
    msg.setSourceEntity(115U);
    msg.setDestination(36391U);
    msg.setDestinationEntity(86U);
    msg.value = 0.188818914266;

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
    msg.setTimeStamp(0.654502646222);
    msg.setSource(29932U);
    msg.setSourceEntity(79U);
    msg.setDestination(36668U);
    msg.setDestinationEntity(33U);
    msg.validity = 16396U;
    msg.type = 55U;
    msg.tow = 3956873736U;
    msg.base_lat = 0.324001005174;
    msg.base_lon = 0.325652628065;
    msg.base_height = 0.587605478934;
    msg.n = 0.225897380755;
    msg.e = 0.0725929560861;
    msg.d = 0.373901173183;
    msg.v_n = 0.0842747602938;
    msg.v_e = 0.354603450922;
    msg.v_d = 0.261321228756;
    msg.satellites = 251U;
    msg.iar_hyp = 45603U;
    msg.iar_ratio = 0.966185342019;

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
    msg.setTimeStamp(0.299832994991);
    msg.setSource(452U);
    msg.setSourceEntity(68U);
    msg.setDestination(13939U);
    msg.setDestinationEntity(239U);
    msg.validity = 63470U;
    msg.type = 196U;
    msg.tow = 2627317176U;
    msg.base_lat = 0.166811013007;
    msg.base_lon = 0.531100280096;
    msg.base_height = 0.0288759636119;
    msg.n = 0.0615039824584;
    msg.e = 0.67650560145;
    msg.d = 0.943563091614;
    msg.v_n = 0.141933144611;
    msg.v_e = 0.423711047092;
    msg.v_d = 0.589710702979;
    msg.satellites = 70U;
    msg.iar_hyp = 20299U;
    msg.iar_ratio = 0.465968606862;

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
    msg.setTimeStamp(0.312840936107);
    msg.setSource(40181U);
    msg.setSourceEntity(140U);
    msg.setDestination(60293U);
    msg.setDestinationEntity(230U);
    msg.validity = 30959U;
    msg.type = 40U;
    msg.tow = 3501176685U;
    msg.base_lat = 0.365177493508;
    msg.base_lon = 0.295734191434;
    msg.base_height = 0.655558850689;
    msg.n = 0.338636246849;
    msg.e = 0.993389370097;
    msg.d = 0.39136330866;
    msg.v_n = 0.0495608123478;
    msg.v_e = 0.195455565143;
    msg.v_d = 0.404969580821;
    msg.satellites = 222U;
    msg.iar_hyp = 18276U;
    msg.iar_ratio = 0.313646020397;

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
    msg.setTimeStamp(0.194170825387);
    msg.setSource(24026U);
    msg.setSourceEntity(116U);
    msg.setDestination(37359U);
    msg.setDestinationEntity(165U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.090409403491;
    tmp_msg_0.lon = 0.834781534081;
    tmp_msg_0.height = 0.758417947485;
    tmp_msg_0.x = 0.0992097941151;
    tmp_msg_0.y = 0.995100929508;
    tmp_msg_0.z = 0.100424716686;
    tmp_msg_0.phi = 0.344539131151;
    tmp_msg_0.theta = 0.803682422096;
    tmp_msg_0.psi = 0.89643307971;
    tmp_msg_0.u = 0.24417938785;
    tmp_msg_0.v = 0.95547771257;
    tmp_msg_0.w = 0.86933695078;
    tmp_msg_0.vx = 0.00606994310587;
    tmp_msg_0.vy = 0.307118209154;
    tmp_msg_0.vz = 0.487994932448;
    tmp_msg_0.p = 0.423527849226;
    tmp_msg_0.q = 0.166324948286;
    tmp_msg_0.r = 0.281538134078;
    tmp_msg_0.depth = 0.493609332153;
    tmp_msg_0.alt = 0.700978023555;
    msg.state.set(tmp_msg_0);
    msg.type = 135U;

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
    msg.setTimeStamp(0.605756070806);
    msg.setSource(62829U);
    msg.setSourceEntity(153U);
    msg.setDestination(5789U);
    msg.setDestinationEntity(11U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.144727239862;
    tmp_msg_0.lon = 0.672541065067;
    tmp_msg_0.height = 0.366833545642;
    tmp_msg_0.x = 0.269873416419;
    tmp_msg_0.y = 0.30821280549;
    tmp_msg_0.z = 0.516443780672;
    tmp_msg_0.phi = 0.849461074601;
    tmp_msg_0.theta = 0.312290737472;
    tmp_msg_0.psi = 0.147524483748;
    tmp_msg_0.u = 0.82720385736;
    tmp_msg_0.v = 0.48595401382;
    tmp_msg_0.w = 0.432932020737;
    tmp_msg_0.vx = 0.224771216199;
    tmp_msg_0.vy = 0.831567194032;
    tmp_msg_0.vz = 0.459989026724;
    tmp_msg_0.p = 0.00499298910159;
    tmp_msg_0.q = 0.0922083055716;
    tmp_msg_0.r = 0.0344733445086;
    tmp_msg_0.depth = 0.225165572807;
    tmp_msg_0.alt = 0.201061503927;
    msg.state.set(tmp_msg_0);
    msg.type = 13U;

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
    msg.setTimeStamp(0.464966547453);
    msg.setSource(28137U);
    msg.setSourceEntity(137U);
    msg.setDestination(55715U);
    msg.setDestinationEntity(50U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.132241024712;
    tmp_msg_0.lon = 0.381101380169;
    tmp_msg_0.height = 0.749019453089;
    tmp_msg_0.x = 0.795363155857;
    tmp_msg_0.y = 0.196714933126;
    tmp_msg_0.z = 0.652434541007;
    tmp_msg_0.phi = 0.84786610608;
    tmp_msg_0.theta = 0.193710333817;
    tmp_msg_0.psi = 0.968031080204;
    tmp_msg_0.u = 0.895102206363;
    tmp_msg_0.v = 0.473044452252;
    tmp_msg_0.w = 0.663269847767;
    tmp_msg_0.vx = 0.761978128235;
    tmp_msg_0.vy = 0.72252705757;
    tmp_msg_0.vz = 0.606914460712;
    tmp_msg_0.p = 0.236565997096;
    tmp_msg_0.q = 0.35360922566;
    tmp_msg_0.r = 0.662695864667;
    tmp_msg_0.depth = 0.306116969455;
    tmp_msg_0.alt = 0.516174058473;
    msg.state.set(tmp_msg_0);
    msg.type = 207U;

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
    msg.setTimeStamp(0.609348679901);
    msg.setSource(57634U);
    msg.setSourceEntity(152U);
    msg.setDestination(42935U);
    msg.setDestinationEntity(160U);
    msg.value = 0.65538414602;

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
    msg.setTimeStamp(0.349358163899);
    msg.setSource(47325U);
    msg.setSourceEntity(240U);
    msg.setDestination(18720U);
    msg.setDestinationEntity(49U);
    msg.value = 0.323234160579;

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
    msg.setTimeStamp(0.304967075107);
    msg.setSource(53452U);
    msg.setSourceEntity(147U);
    msg.setDestination(18021U);
    msg.setDestinationEntity(179U);
    msg.value = 0.660018593406;

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
    msg.setTimeStamp(0.120083958965);
    msg.setSource(56492U);
    msg.setSourceEntity(117U);
    msg.setDestination(20187U);
    msg.setDestinationEntity(4U);
    msg.value = 0.350337494131;

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
    msg.setTimeStamp(0.632210763027);
    msg.setSource(48464U);
    msg.setSourceEntity(115U);
    msg.setDestination(1507U);
    msg.setDestinationEntity(146U);
    msg.value = 0.103721065177;

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
    msg.setTimeStamp(0.549192936413);
    msg.setSource(46092U);
    msg.setSourceEntity(227U);
    msg.setDestination(64930U);
    msg.setDestinationEntity(233U);
    msg.value = 0.115810827021;

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
    msg.setTimeStamp(0.619730199559);
    msg.setSource(12488U);
    msg.setSourceEntity(245U);
    msg.setDestination(50895U);
    msg.setDestinationEntity(36U);
    msg.value = 0.522556084398;

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
    msg.setTimeStamp(0.182655057697);
    msg.setSource(40301U);
    msg.setSourceEntity(160U);
    msg.setDestination(1173U);
    msg.setDestinationEntity(232U);
    msg.value = 0.555267692402;

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
    msg.setTimeStamp(0.890392287989);
    msg.setSource(54047U);
    msg.setSourceEntity(215U);
    msg.setDestination(582U);
    msg.setDestinationEntity(185U);
    msg.value = 0.40947902798;

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
    msg.setTimeStamp(0.447007768368);
    msg.setSource(22655U);
    msg.setSourceEntity(159U);
    msg.setDestination(32638U);
    msg.setDestinationEntity(238U);
    msg.value = 0.179446727048;

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
    msg.setTimeStamp(0.725413586947);
    msg.setSource(26937U);
    msg.setSourceEntity(132U);
    msg.setDestination(1846U);
    msg.setDestinationEntity(155U);
    msg.value = 0.340794746205;

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
    msg.setTimeStamp(0.625250709333);
    msg.setSource(48854U);
    msg.setSourceEntity(87U);
    msg.setDestination(40332U);
    msg.setDestinationEntity(181U);
    msg.value = 0.105889998403;

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
    msg.setTimeStamp(0.760049566162);
    msg.setSource(8465U);
    msg.setSourceEntity(148U);
    msg.setDestination(27257U);
    msg.setDestinationEntity(135U);
    msg.value = 0.351618112272;

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
    msg.setTimeStamp(0.634434618643);
    msg.setSource(16794U);
    msg.setSourceEntity(104U);
    msg.setDestination(47513U);
    msg.setDestinationEntity(127U);
    msg.value = 0.803325650207;

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
    msg.setTimeStamp(0.818533411277);
    msg.setSource(19682U);
    msg.setSourceEntity(230U);
    msg.setDestination(41090U);
    msg.setDestinationEntity(192U);
    msg.value = 0.172577974313;

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
    msg.setTimeStamp(0.257900585998);
    msg.setSource(49912U);
    msg.setSourceEntity(82U);
    msg.setDestination(39943U);
    msg.setDestinationEntity(155U);
    msg.id = 238U;
    msg.zoom = 97U;
    msg.action = 183U;

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
    msg.setTimeStamp(0.213367526534);
    msg.setSource(8306U);
    msg.setSourceEntity(218U);
    msg.setDestination(40547U);
    msg.setDestinationEntity(75U);
    msg.id = 218U;
    msg.zoom = 229U;
    msg.action = 146U;

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
    msg.setTimeStamp(0.569546608674);
    msg.setSource(35107U);
    msg.setSourceEntity(23U);
    msg.setDestination(42782U);
    msg.setDestinationEntity(82U);
    msg.id = 106U;
    msg.zoom = 52U;
    msg.action = 84U;

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
    msg.setTimeStamp(0.857733983027);
    msg.setSource(58632U);
    msg.setSourceEntity(157U);
    msg.setDestination(2097U);
    msg.setDestinationEntity(34U);
    msg.id = 243U;
    msg.value = 0.00489388599654;

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
    msg.setTimeStamp(0.285976264712);
    msg.setSource(51741U);
    msg.setSourceEntity(75U);
    msg.setDestination(54166U);
    msg.setDestinationEntity(252U);
    msg.id = 198U;
    msg.value = 0.0228795567308;

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
    msg.setTimeStamp(0.847158206956);
    msg.setSource(53929U);
    msg.setSourceEntity(186U);
    msg.setDestination(8971U);
    msg.setDestinationEntity(125U);
    msg.id = 196U;
    msg.value = 0.393315909301;

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
    msg.setTimeStamp(0.550010388249);
    msg.setSource(54270U);
    msg.setSourceEntity(228U);
    msg.setDestination(4367U);
    msg.setDestinationEntity(1U);
    msg.id = 19U;
    msg.value = 0.966556726374;

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
    msg.setTimeStamp(0.508089627181);
    msg.setSource(10466U);
    msg.setSourceEntity(95U);
    msg.setDestination(51408U);
    msg.setDestinationEntity(224U);
    msg.id = 6U;
    msg.value = 0.441835559318;

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
    msg.setTimeStamp(0.615628530413);
    msg.setSource(23770U);
    msg.setSourceEntity(190U);
    msg.setDestination(2878U);
    msg.setDestinationEntity(86U);
    msg.id = 207U;
    msg.value = 0.57767274415;

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
    msg.setTimeStamp(0.0812077013836);
    msg.setSource(3232U);
    msg.setSourceEntity(178U);
    msg.setDestination(55306U);
    msg.setDestinationEntity(232U);
    msg.id = 236U;
    msg.angle = 0.512561334783;

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
    msg.setTimeStamp(0.369528073129);
    msg.setSource(22441U);
    msg.setSourceEntity(47U);
    msg.setDestination(4312U);
    msg.setDestinationEntity(200U);
    msg.id = 168U;
    msg.angle = 0.838717423602;

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
    msg.setTimeStamp(0.665742967592);
    msg.setSource(60672U);
    msg.setSourceEntity(178U);
    msg.setDestination(23525U);
    msg.setDestinationEntity(251U);
    msg.id = 58U;
    msg.angle = 0.291128560687;

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
    msg.setTimeStamp(0.459856820676);
    msg.setSource(14142U);
    msg.setSourceEntity(208U);
    msg.setDestination(54692U);
    msg.setDestinationEntity(246U);
    msg.op = 28U;
    msg.actions.assign("XEKMKFFSFFKKNNUPOIVLSWHXNZFAVCXSEZYJDGYJMW");

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
    msg.setTimeStamp(0.114711900129);
    msg.setSource(38381U);
    msg.setSourceEntity(204U);
    msg.setDestination(39132U);
    msg.setDestinationEntity(62U);
    msg.op = 161U;
    msg.actions.assign("CFEYEPOUFLTPVCYSCMJQNAELVWAYNSGUDLXSRJLHOEVGFNHAWRRYYFVOWRDDLUCOCRKLQCURQIHZIJIJLZCVWEZEQDZEHPQMTKTABPREAX");

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
    msg.setTimeStamp(0.291568817526);
    msg.setSource(14905U);
    msg.setSourceEntity(41U);
    msg.setDestination(9900U);
    msg.setDestinationEntity(140U);
    msg.op = 140U;
    msg.actions.assign("GJPDAXAWRSGTMZEFEHLSSTURMCBORLEPJKHYLXVFKHIANINCQDCZSHILGWIHFDMXBRPUDWJEXLCPHYBQNVPGYBAENDMATVTZQKIIFGTILJOENJZUXNYFHMRFRUFZRMTAKVZEBJDTXPQKORUUKAOJKNCUYDMZNMGVOYZWKYCIMYFVSELWLWVGJAJXSHIXT");

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
    msg.setTimeStamp(0.354742271747);
    msg.setSource(62431U);
    msg.setSourceEntity(245U);
    msg.setDestination(14738U);
    msg.setDestinationEntity(237U);
    msg.actions.assign("DVJPXRZGRJTJZEZPLYWUWBBEXJIDKVVXPXMAQFZITQHSEBSZFMDABOOJCYSPZEVOASMRGLHLYYMVQOUANRKOGPPNTXIXIMQNFHTQYABCNMRAMTSVCKGRBBHNWLEDHFYECDNIRUFDMHNWSJOHQGWURHPURPIQFJGDYESLUFXQKHJBDCVCYKGXOKTGDCMUXT");

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
    msg.setTimeStamp(0.823303958511);
    msg.setSource(55601U);
    msg.setSourceEntity(47U);
    msg.setDestination(47036U);
    msg.setDestinationEntity(5U);
    msg.actions.assign("BRPRXWQYLGEUGUPHRMAEAIYAQNXCGLNWMSRZLPTZURYHMQUJCLIFDIXPHAAADWEQPMWMXWBOGDOLJMFVBRCTDHFEHETETZBIDXFJDQUIBPJVYJYFVHUSCLSZUDYPKSTJYVUXDWNOLSWUWPISLBCXXON");

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
    msg.setTimeStamp(0.372520944149);
    msg.setSource(19955U);
    msg.setSourceEntity(108U);
    msg.setDestination(40943U);
    msg.setDestinationEntity(95U);
    msg.actions.assign("IVCOUSNLGMASZVWEDKGLEGQZHS");

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
    msg.setTimeStamp(0.545814802223);
    msg.setSource(17943U);
    msg.setSourceEntity(136U);
    msg.setDestination(31135U);
    msg.setDestinationEntity(169U);
    msg.button = 93U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.0656339862613);
    msg.setSource(57178U);
    msg.setSourceEntity(113U);
    msg.setDestination(22809U);
    msg.setDestinationEntity(82U);
    msg.button = 166U;
    msg.value = 134U;

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
    msg.setTimeStamp(0.648396537926);
    msg.setSource(35911U);
    msg.setSourceEntity(29U);
    msg.setDestination(42090U);
    msg.setDestinationEntity(141U);
    msg.button = 234U;
    msg.value = 120U;

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
    msg.setTimeStamp(0.549770474369);
    msg.setSource(14914U);
    msg.setSourceEntity(115U);
    msg.setDestination(13771U);
    msg.setDestinationEntity(21U);
    msg.op = 42U;
    msg.text.assign("PZPNGXMDFMPIWRCFDEXLBMTMMBAXKFQGRPFEBSMETVNGPKAIDTCYFMDRIXORMWFGWPOXAEZSLQNLMEUCIYPXJKXPUFZKDHKLYGRIUHQEVQWRVNBKDJWGOGYVAESOAKRNGZCOHJAQYLKUZQYU");

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
    msg.setTimeStamp(0.415712835474);
    msg.setSource(5439U);
    msg.setSourceEntity(183U);
    msg.setDestination(42978U);
    msg.setDestinationEntity(94U);
    msg.op = 165U;
    msg.text.assign("YTEQJYFQPJXVSSWIIXKCVARWZGVICAMORCYKBINGCKBSYWHWSPVHBJXOVHULQA");

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
    msg.setTimeStamp(0.258506808989);
    msg.setSource(49162U);
    msg.setSourceEntity(103U);
    msg.setDestination(37198U);
    msg.setDestinationEntity(19U);
    msg.op = 148U;
    msg.text.assign("YFTCPVBJYQLVEULQLZFHEAWHWNQSWUAJTROBXSKYJPRPIICEZALOCGYNYCUQUSXFSBEZUVYFMLGCNTUKXOFKMBDAZKIJMJTHREVFDEXQHHFLDTNBEVDLGOKRVQPSLTWKUNPYGVFHWIPIDJEZHHOKWXBQBXXDKIBBPOYMLIMSOKQEGDZNSGRFGXJTYGIUNYLOASOUXPCBAZNN");

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
    msg.setTimeStamp(0.832442020231);
    msg.setSource(46042U);
    msg.setSourceEntity(220U);
    msg.setDestination(464U);
    msg.setDestinationEntity(209U);
    msg.op = 50U;
    msg.time_remain = 0.709289455225;
    msg.sched_time = 0.432697937165;

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
    msg.setTimeStamp(0.358096068481);
    msg.setSource(49792U);
    msg.setSourceEntity(168U);
    msg.setDestination(50137U);
    msg.setDestinationEntity(40U);
    msg.op = 91U;
    msg.time_remain = 0.0356168594462;
    msg.sched_time = 0.239276469004;

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
    msg.setTimeStamp(0.74195312013);
    msg.setSource(57977U);
    msg.setSourceEntity(152U);
    msg.setDestination(31035U);
    msg.setDestinationEntity(216U);
    msg.op = 0U;
    msg.time_remain = 0.59873916261;
    msg.sched_time = 0.746815462867;

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
    msg.setTimeStamp(0.737563473027);
    msg.setSource(12582U);
    msg.setSourceEntity(105U);
    msg.setDestination(64704U);
    msg.setDestinationEntity(114U);
    msg.name.assign("LJBYYMFYZAOQJHCSBWFZALPRAQTEBZNHMKITSIWISZIQTIGZVRPHYMYXUSVFLDIKLPZUTNJBNMJOUCTRVKNEGTYOVDHFKNFRHOK");
    msg.op = 208U;
    msg.sched_time = 0.108806337992;

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
    msg.setTimeStamp(0.629404100249);
    msg.setSource(12986U);
    msg.setSourceEntity(104U);
    msg.setDestination(14584U);
    msg.setDestinationEntity(109U);
    msg.name.assign("YVLIJDALJNTNXUHZBXYWGFWYZHKVRQQBAVOJFMWTIEJNMBZTOMIHIYEWCAXMOKAQCBTNEENZEBIZBASFDOUTGVJXRETGSVIBHBISNBSYUKIWZIXLCQSODXGPREAQPWRHKLRLEDJWAVLPXJZFGJMPHQXPGVUOFSUSFCVDZADFVEY");
    msg.op = 232U;
    msg.sched_time = 0.0171815880114;

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
    msg.setTimeStamp(0.234737289481);
    msg.setSource(44352U);
    msg.setSourceEntity(127U);
    msg.setDestination(51031U);
    msg.setDestinationEntity(182U);
    msg.name.assign("SVHNQRZRHMJWYZMNIPJYITXELOEDJTSBMLOXAKBOGTMSVSQEYRRABHYMDSREAKVGDKQAJHFLFKJZDBIOXROHNWZVWWNUDECAILUOSNTKUAHYCMTUXYUIVAYYUXBMFQXBPJOQFMVFECOCFWCWIIAORVPJCLTGKFCSVGNEYDQEXWKWOPPFRJLRHTUTLFEKAMPZKJZZCZHSBUYLF");
    msg.op = 147U;
    msg.sched_time = 0.820552263069;

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
    msg.setTimeStamp(0.330710767156);
    msg.setSource(63430U);
    msg.setSourceEntity(47U);
    msg.setDestination(8946U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.791445342364);
    msg.setSource(6937U);
    msg.setSourceEntity(61U);
    msg.setDestination(55122U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.0726530746011);
    msg.setSource(61513U);
    msg.setSourceEntity(36U);
    msg.setDestination(17577U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.227207291197);
    msg.setSource(39203U);
    msg.setSourceEntity(158U);
    msg.setDestination(58159U);
    msg.setDestinationEntity(109U);
    msg.name.assign("RHBFXVOGGZYJIJHKVSFKGPSBAYUXAEISXAODZVVLQIOVPVPETJDUDEEZYNZOBSDTKCKHPRGEBGKZFHLTCFMWXIMFQGRDSOEWIFXWHYDLLLTIACGKZNDOBHJMZESSKUQPGJCTWHTK");
    msg.state = 137U;

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
    msg.setTimeStamp(0.115803127422);
    msg.setSource(53670U);
    msg.setSourceEntity(16U);
    msg.setDestination(4529U);
    msg.setDestinationEntity(206U);
    msg.name.assign("GXAQHLSNYDCGFZWRRGGDUMUWHWTVKX");
    msg.state = 10U;

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
    msg.setTimeStamp(0.460091942113);
    msg.setSource(25418U);
    msg.setSourceEntity(0U);
    msg.setDestination(19468U);
    msg.setDestinationEntity(77U);
    msg.name.assign("PQGEMHLTZBFF");
    msg.state = 19U;

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
    msg.setTimeStamp(0.412174264952);
    msg.setSource(34882U);
    msg.setSourceEntity(29U);
    msg.setDestination(42914U);
    msg.setDestinationEntity(243U);
    msg.name.assign("ODHSTINCHEIIYJLXMDVOVFGITPHEMZYKZXXQHJKFVNLGJROVUCXNWJWKJDLDCNYZAGYTLPFTSNLHMTUHTXLRKSSEDIENXDLXLOAQTKCVJBUSBHLNAUAMNIUYWCEMZFAENDFOROAQBCSSWCBNPCJPUKOOE");
    msg.value = 220U;

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
    msg.setTimeStamp(0.573969576893);
    msg.setSource(53394U);
    msg.setSourceEntity(208U);
    msg.setDestination(32566U);
    msg.setDestinationEntity(78U);
    msg.name.assign("ENTYRQTEBPWAZSYSKJLGUIWWRMVKXSELUCAMWCSNMLCTFRVVEDZHIWJJRBDRJHTROFGXOUPDKVSUTYAPLQRCHDWECUGLJXLKXDNSZWSDYXYOPXUPOEYZYXPTVFNRLQIFRFHOMPUYPEVSJMVGLKHMPZPEOFHNIYBOSXOSJKBUFRIANKTQQWGBGJLMEUBDX");
    msg.value = 253U;

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
    msg.setTimeStamp(0.515830944504);
    msg.setSource(1871U);
    msg.setSourceEntity(29U);
    msg.setDestination(30566U);
    msg.setDestinationEntity(63U);
    msg.name.assign("WJCAXXEHLVDRQOSPSPDNHMCMLFREUOIIKCUGPYKGBLZGLULEEHHSCDHLNJANEMYBBMNDQPTRHVZMXASWYUUGUQDYXGCVWNBHHYNDCRIRDJOAITIDLOLWAYTTRPXJKNHJWBZFYGRVVKJEPVKYNFVOTGBFXBYSTWIBYGSJSMXMATQRWHIQUWFQKBTJILMNUSQFSZEQGTOWXIUKPECTZCFVBAUAPZX");
    msg.value = 161U;

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
    msg.setTimeStamp(0.30710070438);
    msg.setSource(53953U);
    msg.setSourceEntity(182U);
    msg.setDestination(37871U);
    msg.setDestinationEntity(236U);
    msg.name.assign("GXHFHTMEYLUVWZELWZBNTROOZHYPEAOYGATAASFTQKXYDHQXZXQUUDRIXZVZRLNAVVKLUTBINBATJDTMYCNFBJYFIQRXFWMGKDDFFTLGVWIIXBAIQHQCRXQS");

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
    msg.setTimeStamp(0.244341613618);
    msg.setSource(27041U);
    msg.setSourceEntity(184U);
    msg.setDestination(3694U);
    msg.setDestinationEntity(239U);
    msg.name.assign("WDHVIEKJSSVXQFZOUUWWKBJSKEGABOTHTVTTHJUZBGPUVTHXPMINKJRCPPIRJHDDCIDRMYJAFNNYUHIXSAWJCRFMEFLLCLOWMZXYRNTGEXYLPULKWVMQNZNOBBFSYKXGZYUKXAOSQDMIAMGYPGCQMGFTHCZFR");

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
    msg.setTimeStamp(0.585771355778);
    msg.setSource(1521U);
    msg.setSourceEntity(254U);
    msg.setDestination(39283U);
    msg.setDestinationEntity(126U);
    msg.name.assign("FCXYXLHUXDYCAIZFHBRVPSVZTMYTZVOJMSCLKJOEVKMGBMLRXGAORGQGWOSQSOKZUXXBCUHLOSPLEMIDNVWQUJSPMIOEYMFQBETGISWIXCRVHDEFTJUTAWYXSBMVCPVROGAZBXGYKSRARPJIMHYQIFWUCZUCCKGLHPBKNDDHFJN");

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
    msg.setTimeStamp(0.579058105341);
    msg.setSource(45617U);
    msg.setSourceEntity(8U);
    msg.setDestination(54749U);
    msg.setDestinationEntity(36U);
    msg.name.assign("OEEEOIBPSEKCGBKVHLXNZDRUAUHSJPVDUVBRTJTWXKJKEGYEBIBWLNTRXFYTPAGPOMBLYQVSMBCLGD");
    msg.value = 30U;

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
    msg.setTimeStamp(0.0593808758089);
    msg.setSource(18686U);
    msg.setSourceEntity(160U);
    msg.setDestination(30278U);
    msg.setDestinationEntity(195U);
    msg.name.assign("FGIAZLUQYINUNTCJBQRRDYUQWIJWCFNZQXTATHQFYVSTZCJVLLXUKPJVTOVB");
    msg.value = 249U;

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
    msg.setTimeStamp(0.886253897985);
    msg.setSource(11541U);
    msg.setSourceEntity(69U);
    msg.setDestination(63301U);
    msg.setDestinationEntity(24U);
    msg.name.assign("EKZRPEZUCPSKQSJCNXWPMLSKOXCJXTUOQCBEKTSQZODNGBFSCRBIXITESWTPBMGFKDLFBJ");
    msg.value = 189U;

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
    msg.setTimeStamp(0.547666182947);
    msg.setSource(57870U);
    msg.setSourceEntity(206U);
    msg.setDestination(47316U);
    msg.setDestinationEntity(84U);
    msg.id = 211U;
    msg.period = 4184367449U;
    msg.duty_cycle = 82728424U;

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
    msg.setTimeStamp(0.798684129315);
    msg.setSource(12039U);
    msg.setSourceEntity(10U);
    msg.setDestination(21271U);
    msg.setDestinationEntity(74U);
    msg.id = 146U;
    msg.period = 1387602901U;
    msg.duty_cycle = 3018495258U;

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
    msg.setTimeStamp(0.208919094461);
    msg.setSource(39870U);
    msg.setSourceEntity(85U);
    msg.setDestination(21950U);
    msg.setDestinationEntity(233U);
    msg.id = 139U;
    msg.period = 103222055U;
    msg.duty_cycle = 969142664U;

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
    msg.setTimeStamp(0.620505017893);
    msg.setSource(55797U);
    msg.setSourceEntity(199U);
    msg.setDestination(49557U);
    msg.setDestinationEntity(239U);
    msg.id = 201U;
    msg.period = 2676366292U;
    msg.duty_cycle = 1150912632U;

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
    msg.setTimeStamp(0.382985103916);
    msg.setSource(21214U);
    msg.setSourceEntity(173U);
    msg.setDestination(46948U);
    msg.setDestinationEntity(50U);
    msg.id = 23U;
    msg.period = 675934030U;
    msg.duty_cycle = 1141254357U;

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
    msg.setTimeStamp(0.395170913912);
    msg.setSource(13674U);
    msg.setSourceEntity(5U);
    msg.setDestination(27317U);
    msg.setDestinationEntity(32U);
    msg.id = 244U;
    msg.period = 1985560218U;
    msg.duty_cycle = 2724428009U;

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
    msg.setTimeStamp(0.130993882605);
    msg.setSource(22846U);
    msg.setSourceEntity(54U);
    msg.setDestination(46194U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.830546349254;
    msg.lon = 0.776239509485;
    msg.height = 0.520278235535;
    msg.x = 0.325832627196;
    msg.y = 0.951108669499;
    msg.z = 0.897066518333;
    msg.phi = 0.312772583496;
    msg.theta = 0.708162406774;
    msg.psi = 0.136547165737;
    msg.u = 0.568944372723;
    msg.v = 0.470772871039;
    msg.w = 0.728701316523;
    msg.vx = 0.231179929963;
    msg.vy = 0.367776429993;
    msg.vz = 0.95176666515;
    msg.p = 0.900332034801;
    msg.q = 0.254434947484;
    msg.r = 0.664261358703;
    msg.depth = 0.596865595985;
    msg.alt = 0.92740434612;

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
    msg.setTimeStamp(0.897211445727);
    msg.setSource(63229U);
    msg.setSourceEntity(116U);
    msg.setDestination(34763U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.216520709272;
    msg.lon = 0.192424284053;
    msg.height = 0.901323779303;
    msg.x = 0.352748967012;
    msg.y = 0.711416366446;
    msg.z = 0.0390441361295;
    msg.phi = 0.235260432619;
    msg.theta = 0.856096591831;
    msg.psi = 0.16383801481;
    msg.u = 0.135298407279;
    msg.v = 0.20789449003;
    msg.w = 0.500390722562;
    msg.vx = 0.451462531818;
    msg.vy = 0.169761559247;
    msg.vz = 0.807995979507;
    msg.p = 0.43666256022;
    msg.q = 0.50825979319;
    msg.r = 0.517329128425;
    msg.depth = 0.313283847777;
    msg.alt = 0.874068620718;

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
    msg.setTimeStamp(0.189212102473);
    msg.setSource(20395U);
    msg.setSourceEntity(212U);
    msg.setDestination(55619U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.793374672129;
    msg.lon = 0.821415840102;
    msg.height = 0.111911442317;
    msg.x = 0.00368198029263;
    msg.y = 0.580609788222;
    msg.z = 0.0866179088477;
    msg.phi = 0.290737479447;
    msg.theta = 0.0358912182801;
    msg.psi = 0.466393424088;
    msg.u = 0.664023677473;
    msg.v = 0.661117648804;
    msg.w = 0.691748813128;
    msg.vx = 0.0282356072271;
    msg.vy = 0.105705418949;
    msg.vz = 0.122487031833;
    msg.p = 0.391530024754;
    msg.q = 0.804751561558;
    msg.r = 0.373685764563;
    msg.depth = 0.924948300559;
    msg.alt = 0.627970845308;

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
    msg.setTimeStamp(0.891237415704);
    msg.setSource(23206U);
    msg.setSourceEntity(246U);
    msg.setDestination(13318U);
    msg.setDestinationEntity(16U);
    msg.x = 0.906288016043;
    msg.y = 0.990674847151;
    msg.z = 0.781570049863;

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
    msg.setTimeStamp(0.255898477553);
    msg.setSource(39097U);
    msg.setSourceEntity(69U);
    msg.setDestination(54485U);
    msg.setDestinationEntity(183U);
    msg.x = 0.888860236242;
    msg.y = 0.0823518659414;
    msg.z = 0.792554889331;

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
    msg.setTimeStamp(0.718736329301);
    msg.setSource(10752U);
    msg.setSourceEntity(226U);
    msg.setDestination(21819U);
    msg.setDestinationEntity(204U);
    msg.x = 0.734829751096;
    msg.y = 0.64184433647;
    msg.z = 0.539831253798;

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
    msg.setTimeStamp(0.557105438144);
    msg.setSource(226U);
    msg.setSourceEntity(88U);
    msg.setDestination(34435U);
    msg.setDestinationEntity(67U);
    msg.value = 0.0614553958806;

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
    msg.setTimeStamp(0.974843001315);
    msg.setSource(16799U);
    msg.setSourceEntity(160U);
    msg.setDestination(28809U);
    msg.setDestinationEntity(130U);
    msg.value = 0.470462827956;

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
    msg.setTimeStamp(0.621651288214);
    msg.setSource(18030U);
    msg.setSourceEntity(240U);
    msg.setDestination(36196U);
    msg.setDestinationEntity(6U);
    msg.value = 0.0948031447968;

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
    msg.setTimeStamp(0.370948910532);
    msg.setSource(17822U);
    msg.setSourceEntity(174U);
    msg.setDestination(47663U);
    msg.setDestinationEntity(113U);
    msg.value = 0.902493456008;

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
    msg.setTimeStamp(0.387655779884);
    msg.setSource(9880U);
    msg.setSourceEntity(219U);
    msg.setDestination(55315U);
    msg.setDestinationEntity(219U);
    msg.value = 0.970861927752;

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
    msg.setTimeStamp(0.526339651606);
    msg.setSource(24413U);
    msg.setSourceEntity(38U);
    msg.setDestination(59017U);
    msg.setDestinationEntity(173U);
    msg.value = 0.752629797569;

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
    msg.setTimeStamp(0.664611221138);
    msg.setSource(11054U);
    msg.setSourceEntity(69U);
    msg.setDestination(52523U);
    msg.setDestinationEntity(225U);
    msg.x = 0.986804807219;
    msg.y = 0.24202158202;
    msg.z = 0.817204647981;
    msg.phi = 0.227364197609;
    msg.theta = 0.987447698789;
    msg.psi = 0.825284287187;
    msg.p = 0.0930608133439;
    msg.q = 0.532813978052;
    msg.r = 0.453185503548;
    msg.u = 0.7558811133;
    msg.v = 0.730100300788;
    msg.w = 0.46135174035;
    msg.bias_psi = 0.874220853576;
    msg.bias_r = 0.793882883719;

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
    msg.setTimeStamp(0.276157885441);
    msg.setSource(39428U);
    msg.setSourceEntity(191U);
    msg.setDestination(37941U);
    msg.setDestinationEntity(168U);
    msg.x = 0.824113508881;
    msg.y = 0.0599130991168;
    msg.z = 0.596755476468;
    msg.phi = 0.807623463198;
    msg.theta = 0.850427659159;
    msg.psi = 0.367802920296;
    msg.p = 0.99703724246;
    msg.q = 0.0293740616441;
    msg.r = 0.984545230052;
    msg.u = 0.62582585399;
    msg.v = 0.114503109697;
    msg.w = 0.0334943667682;
    msg.bias_psi = 0.0602230603549;
    msg.bias_r = 0.229355389665;

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
    msg.setTimeStamp(0.723073611931);
    msg.setSource(3345U);
    msg.setSourceEntity(17U);
    msg.setDestination(40100U);
    msg.setDestinationEntity(173U);
    msg.x = 0.465426042392;
    msg.y = 0.213640494944;
    msg.z = 0.765823324178;
    msg.phi = 0.0166808269806;
    msg.theta = 0.142855579729;
    msg.psi = 0.379331689603;
    msg.p = 0.99336237653;
    msg.q = 0.755566374161;
    msg.r = 0.818109923556;
    msg.u = 0.118565520026;
    msg.v = 0.59206700249;
    msg.w = 0.732228345621;
    msg.bias_psi = 0.300150234744;
    msg.bias_r = 0.99575015968;

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
    msg.setTimeStamp(0.901846675592);
    msg.setSource(58371U);
    msg.setSourceEntity(239U);
    msg.setDestination(41235U);
    msg.setDestinationEntity(112U);
    msg.bias_psi = 0.999157560163;
    msg.bias_r = 0.493592025315;
    msg.cog = 0.215612516883;
    msg.cyaw = 0.237592178876;
    msg.lbl_rej_level = 0.849201115142;
    msg.gps_rej_level = 0.633882899554;
    msg.custom_x = 0.994008789876;
    msg.custom_y = 0.43162095216;
    msg.custom_z = 0.279914313575;

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
    msg.setTimeStamp(0.599785249523);
    msg.setSource(61653U);
    msg.setSourceEntity(240U);
    msg.setDestination(2694U);
    msg.setDestinationEntity(152U);
    msg.bias_psi = 0.901313561757;
    msg.bias_r = 0.132991340183;
    msg.cog = 0.894895546467;
    msg.cyaw = 0.927699259608;
    msg.lbl_rej_level = 0.864831473939;
    msg.gps_rej_level = 0.639751366774;
    msg.custom_x = 0.29361201262;
    msg.custom_y = 0.0325534916775;
    msg.custom_z = 0.961714798663;

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
    msg.setTimeStamp(0.81108542492);
    msg.setSource(30464U);
    msg.setSourceEntity(50U);
    msg.setDestination(55527U);
    msg.setDestinationEntity(205U);
    msg.bias_psi = 0.372514935554;
    msg.bias_r = 0.950392746464;
    msg.cog = 0.288534883984;
    msg.cyaw = 0.855155204398;
    msg.lbl_rej_level = 0.247599089467;
    msg.gps_rej_level = 0.512031399925;
    msg.custom_x = 0.282808274381;
    msg.custom_y = 0.516097508935;
    msg.custom_z = 0.587583037533;

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
    msg.setTimeStamp(0.737814374055);
    msg.setSource(45646U);
    msg.setSourceEntity(156U);
    msg.setDestination(29155U);
    msg.setDestinationEntity(59U);
    msg.utc_time = 0.411916714163;
    msg.reason = 105U;

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
    msg.setTimeStamp(0.65044503914);
    msg.setSource(60772U);
    msg.setSourceEntity(246U);
    msg.setDestination(60444U);
    msg.setDestinationEntity(64U);
    msg.utc_time = 0.705865915724;
    msg.reason = 99U;

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
    msg.setTimeStamp(0.492294477274);
    msg.setSource(9403U);
    msg.setSourceEntity(216U);
    msg.setDestination(31787U);
    msg.setDestinationEntity(245U);
    msg.utc_time = 0.341621379512;
    msg.reason = 132U;

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
    msg.setTimeStamp(0.84117315937);
    msg.setSource(16727U);
    msg.setSourceEntity(89U);
    msg.setDestination(10967U);
    msg.setDestinationEntity(87U);
    msg.id = 193U;
    msg.range = 0.991897817334;
    msg.acceptance = 86U;

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
    msg.setTimeStamp(0.0157015623111);
    msg.setSource(15323U);
    msg.setSourceEntity(92U);
    msg.setDestination(45868U);
    msg.setDestinationEntity(53U);
    msg.id = 253U;
    msg.range = 0.779269440903;
    msg.acceptance = 53U;

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
    msg.setTimeStamp(0.719448451308);
    msg.setSource(55785U);
    msg.setSourceEntity(62U);
    msg.setDestination(63303U);
    msg.setDestinationEntity(15U);
    msg.id = 135U;
    msg.range = 0.529359836807;
    msg.acceptance = 139U;

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
    msg.setTimeStamp(0.256032286515);
    msg.setSource(28830U);
    msg.setSourceEntity(145U);
    msg.setDestination(22009U);
    msg.setDestinationEntity(37U);
    msg.type = 251U;
    msg.reason = 51U;
    msg.value = 0.232546799413;
    msg.timestep = 0.0747145947066;

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
    msg.setTimeStamp(0.477621000754);
    msg.setSource(2247U);
    msg.setSourceEntity(147U);
    msg.setDestination(6437U);
    msg.setDestinationEntity(163U);
    msg.type = 143U;
    msg.reason = 68U;
    msg.value = 0.321881717676;
    msg.timestep = 0.589438299595;

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
    msg.setTimeStamp(0.145298476468);
    msg.setSource(47877U);
    msg.setSourceEntity(111U);
    msg.setDestination(2874U);
    msg.setDestinationEntity(210U);
    msg.type = 160U;
    msg.reason = 53U;
    msg.value = 0.164461797697;
    msg.timestep = 0.498165307179;

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
    msg.setTimeStamp(0.0647981822089);
    msg.setSource(38650U);
    msg.setSourceEntity(205U);
    msg.setDestination(28630U);
    msg.setDestinationEntity(209U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GEQEFJVGWKQZBCTYSCMAEIEAHVBTCHZDQFZWSNCRWWBUYRBCZALLNIEVVCDPXYNPCFUAWRUKXVLWQXLRNMGGIULAHGZJHRZAXOHWSNEKJTZOSK");
    tmp_msg_0.lat = 0.462032653209;
    tmp_msg_0.lon = 0.733217987742;
    tmp_msg_0.depth = 0.0424307522911;
    tmp_msg_0.query_channel = 77U;
    tmp_msg_0.reply_channel = 62U;
    tmp_msg_0.transponder_delay = 230U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.818938037173;
    msg.y = 0.0676090142954;
    msg.var_x = 0.731349822656;
    msg.var_y = 0.994493440697;
    msg.distance = 0.491151592887;

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
    msg.setTimeStamp(0.479910069609);
    msg.setSource(35935U);
    msg.setSourceEntity(53U);
    msg.setDestination(9069U);
    msg.setDestinationEntity(228U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HRTKDDQLDYWKHJDJJXBIRYQKOZIZDXVPBDNOTCXUFQNJSKLXKGVYPFXEP");
    tmp_msg_0.lat = 0.580164035603;
    tmp_msg_0.lon = 0.597993645395;
    tmp_msg_0.depth = 0.990478060327;
    tmp_msg_0.query_channel = 190U;
    tmp_msg_0.reply_channel = 127U;
    tmp_msg_0.transponder_delay = 154U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.44727968319;
    msg.y = 0.247587091859;
    msg.var_x = 0.845629210413;
    msg.var_y = 0.910097785202;
    msg.distance = 0.719959645812;

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
    msg.setTimeStamp(0.777014120781);
    msg.setSource(35502U);
    msg.setSourceEntity(74U);
    msg.setDestination(29471U);
    msg.setDestinationEntity(26U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KSRFIYMJSCZUTRYZUFHYRGZQXWGANWSGSLFQNJPJTFBOOXMYOQANPYLLLCPWOVHLPUBMZWQGJFQLKVGNCDJDBUFHEKIAIHOPUWZAETMVYPDEUGGWSNNXXVZNSVSBIDEKQBWQCBXVUOMGRNIDSKIEVEATDMYFCIPEUGKTQPBDRXWJRWAQLBHZAWBFZKGTRTTYCXXCOPIRXLODKJ");
    tmp_msg_0.lat = 0.317451560746;
    tmp_msg_0.lon = 0.0352148548392;
    tmp_msg_0.depth = 0.54137757778;
    tmp_msg_0.query_channel = 192U;
    tmp_msg_0.reply_channel = 244U;
    tmp_msg_0.transponder_delay = 94U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.298336886311;
    msg.y = 0.426682507986;
    msg.var_x = 0.955713077726;
    msg.var_y = 0.81029150804;
    msg.distance = 0.720270375869;

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
    msg.setTimeStamp(0.0882730095311);
    msg.setSource(32606U);
    msg.setSourceEntity(239U);
    msg.setDestination(17754U);
    msg.setDestinationEntity(8U);
    msg.state = 158U;

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
    msg.setTimeStamp(0.813726151394);
    msg.setSource(33643U);
    msg.setSourceEntity(241U);
    msg.setDestination(53671U);
    msg.setDestinationEntity(179U);
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
    msg.setTimeStamp(0.961649770055);
    msg.setSource(61915U);
    msg.setSourceEntity(254U);
    msg.setDestination(38917U);
    msg.setDestinationEntity(30U);
    msg.state = 204U;

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
    msg.setTimeStamp(0.0236347530622);
    msg.setSource(62007U);
    msg.setSourceEntity(252U);
    msg.setDestination(58975U);
    msg.setDestinationEntity(140U);
    msg.x = 0.312205611797;
    msg.y = 0.968705387916;
    msg.z = 0.277304877157;

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
    msg.setTimeStamp(0.854429098154);
    msg.setSource(49731U);
    msg.setSourceEntity(11U);
    msg.setDestination(39678U);
    msg.setDestinationEntity(19U);
    msg.x = 0.207114361285;
    msg.y = 0.526071830513;
    msg.z = 0.113032056408;

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
    msg.setTimeStamp(0.699841480684);
    msg.setSource(39714U);
    msg.setSourceEntity(136U);
    msg.setDestination(4830U);
    msg.setDestinationEntity(55U);
    msg.x = 0.937359299476;
    msg.y = 0.751113175883;
    msg.z = 0.692972827257;

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
    msg.setTimeStamp(0.654179058968);
    msg.setSource(10414U);
    msg.setSourceEntity(91U);
    msg.setDestination(47519U);
    msg.setDestinationEntity(214U);
    msg.va = 0.713400617496;
    msg.aoa = 0.000400954049357;
    msg.ssa = 0.19210104547;

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
    msg.setTimeStamp(0.138228170059);
    msg.setSource(61137U);
    msg.setSourceEntity(96U);
    msg.setDestination(36726U);
    msg.setDestinationEntity(85U);
    msg.va = 0.256465346138;
    msg.aoa = 0.445961303336;
    msg.ssa = 0.813963640967;

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
    msg.setTimeStamp(0.898672055506);
    msg.setSource(26053U);
    msg.setSourceEntity(238U);
    msg.setDestination(6602U);
    msg.setDestinationEntity(42U);
    msg.va = 0.0379800441241;
    msg.aoa = 0.04684651536;
    msg.ssa = 0.464392770488;

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
    msg.setTimeStamp(0.67323230471);
    msg.setSource(52592U);
    msg.setSourceEntity(98U);
    msg.setDestination(25053U);
    msg.setDestinationEntity(75U);
    msg.value = 0.879637679133;

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
    msg.setTimeStamp(0.281447393026);
    msg.setSource(22384U);
    msg.setSourceEntity(86U);
    msg.setDestination(5662U);
    msg.setDestinationEntity(71U);
    msg.value = 0.921960784136;

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
    msg.setTimeStamp(0.0723125384239);
    msg.setSource(4472U);
    msg.setSourceEntity(116U);
    msg.setDestination(61671U);
    msg.setDestinationEntity(45U);
    msg.value = 0.089736442689;

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
    msg.setTimeStamp(0.633743259318);
    msg.setSource(7983U);
    msg.setSourceEntity(213U);
    msg.setDestination(18776U);
    msg.setDestinationEntity(103U);
    msg.value = 0.350254928033;
    msg.z_units = 252U;

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
    msg.setTimeStamp(0.467058595276);
    msg.setSource(21571U);
    msg.setSourceEntity(34U);
    msg.setDestination(63554U);
    msg.setDestinationEntity(193U);
    msg.value = 0.817470942184;
    msg.z_units = 222U;

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
    msg.setTimeStamp(0.647414695147);
    msg.setSource(59759U);
    msg.setSourceEntity(183U);
    msg.setDestination(64789U);
    msg.setDestinationEntity(201U);
    msg.value = 0.232266592744;
    msg.z_units = 13U;

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
    msg.setTimeStamp(0.813470627166);
    msg.setSource(17916U);
    msg.setSourceEntity(194U);
    msg.setDestination(34680U);
    msg.setDestinationEntity(34U);
    msg.value = 0.37459999586;
    msg.speed_units = 156U;

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
    msg.setTimeStamp(0.135774499144);
    msg.setSource(42099U);
    msg.setSourceEntity(230U);
    msg.setDestination(14729U);
    msg.setDestinationEntity(203U);
    msg.value = 0.269313628496;
    msg.speed_units = 120U;

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
    msg.setTimeStamp(0.460822962224);
    msg.setSource(18783U);
    msg.setSourceEntity(156U);
    msg.setDestination(20850U);
    msg.setDestinationEntity(219U);
    msg.value = 0.125235139197;
    msg.speed_units = 36U;

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
    msg.setTimeStamp(0.717250109303);
    msg.setSource(28056U);
    msg.setSourceEntity(140U);
    msg.setDestination(62841U);
    msg.setDestinationEntity(191U);
    msg.value = 0.308127217576;

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
    msg.setTimeStamp(0.258171573721);
    msg.setSource(12932U);
    msg.setSourceEntity(120U);
    msg.setDestination(47266U);
    msg.setDestinationEntity(156U);
    msg.value = 0.489814216047;

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
    msg.setTimeStamp(0.645640021361);
    msg.setSource(22475U);
    msg.setSourceEntity(185U);
    msg.setDestination(34723U);
    msg.setDestinationEntity(217U);
    msg.value = 0.466913186538;

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
    msg.setTimeStamp(0.55199231081);
    msg.setSource(31063U);
    msg.setSourceEntity(111U);
    msg.setDestination(30907U);
    msg.setDestinationEntity(204U);
    msg.value = 0.215037423587;

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
    msg.setTimeStamp(0.571475955076);
    msg.setSource(13832U);
    msg.setSourceEntity(139U);
    msg.setDestination(54744U);
    msg.setDestinationEntity(206U);
    msg.value = 0.0100463441188;

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
    msg.setTimeStamp(0.373087978647);
    msg.setSource(8967U);
    msg.setSourceEntity(138U);
    msg.setDestination(17151U);
    msg.setDestinationEntity(164U);
    msg.value = 0.731966074852;

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
    msg.setTimeStamp(0.960207286361);
    msg.setSource(44157U);
    msg.setSourceEntity(9U);
    msg.setDestination(52616U);
    msg.setDestinationEntity(3U);
    msg.value = 0.76367174868;

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
    msg.setTimeStamp(0.186917578086);
    msg.setSource(18023U);
    msg.setSourceEntity(51U);
    msg.setDestination(49960U);
    msg.setDestinationEntity(144U);
    msg.value = 0.189745883714;

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
    msg.setTimeStamp(0.272784754284);
    msg.setSource(35998U);
    msg.setSourceEntity(24U);
    msg.setDestination(52784U);
    msg.setDestinationEntity(218U);
    msg.value = 0.838471098086;

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
    msg.setTimeStamp(0.193346087384);
    msg.setSource(49139U);
    msg.setSourceEntity(58U);
    msg.setDestination(60118U);
    msg.setDestinationEntity(221U);
    msg.path_ref = 1759553207U;
    msg.start_lat = 0.66259579602;
    msg.start_lon = 0.164732862112;
    msg.start_z = 0.629162487551;
    msg.start_z_units = 90U;
    msg.end_lat = 0.714652949831;
    msg.end_lon = 0.196741050453;
    msg.end_z = 0.409796679967;
    msg.end_z_units = 234U;
    msg.speed = 0.881966504949;
    msg.speed_units = 29U;
    msg.lradius = 0.683386780118;
    msg.flags = 146U;

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
    msg.setTimeStamp(0.157484275302);
    msg.setSource(29398U);
    msg.setSourceEntity(239U);
    msg.setDestination(3970U);
    msg.setDestinationEntity(45U);
    msg.path_ref = 1027785850U;
    msg.start_lat = 0.322748948314;
    msg.start_lon = 0.743942257437;
    msg.start_z = 0.763089229132;
    msg.start_z_units = 203U;
    msg.end_lat = 0.865368399574;
    msg.end_lon = 0.362665430429;
    msg.end_z = 0.936311492694;
    msg.end_z_units = 107U;
    msg.speed = 0.12566103434;
    msg.speed_units = 61U;
    msg.lradius = 0.356029425344;
    msg.flags = 195U;

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
    msg.setTimeStamp(0.742978360595);
    msg.setSource(3421U);
    msg.setSourceEntity(84U);
    msg.setDestination(38069U);
    msg.setDestinationEntity(59U);
    msg.path_ref = 3954955680U;
    msg.start_lat = 0.661547458251;
    msg.start_lon = 0.122585296347;
    msg.start_z = 0.745158762077;
    msg.start_z_units = 121U;
    msg.end_lat = 0.810316822079;
    msg.end_lon = 0.388088401427;
    msg.end_z = 0.083548378645;
    msg.end_z_units = 15U;
    msg.speed = 0.738792287333;
    msg.speed_units = 198U;
    msg.lradius = 0.894981220797;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.583906424013);
    msg.setSource(13112U);
    msg.setSourceEntity(202U);
    msg.setDestination(64684U);
    msg.setDestinationEntity(14U);
    msg.x = 0.163472184304;
    msg.y = 0.150939141247;
    msg.z = 0.309883268425;
    msg.k = 0.99853366909;
    msg.m = 0.944184670559;
    msg.n = 0.285627433003;
    msg.flags = 177U;

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
    msg.setTimeStamp(0.444723375028);
    msg.setSource(14171U);
    msg.setSourceEntity(151U);
    msg.setDestination(5563U);
    msg.setDestinationEntity(39U);
    msg.x = 0.432509434437;
    msg.y = 0.780652950023;
    msg.z = 0.882702414436;
    msg.k = 0.585187486656;
    msg.m = 0.764713564288;
    msg.n = 0.958687225351;
    msg.flags = 30U;

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
    msg.setTimeStamp(0.287607789607);
    msg.setSource(45931U);
    msg.setSourceEntity(44U);
    msg.setDestination(64728U);
    msg.setDestinationEntity(93U);
    msg.x = 0.48916587921;
    msg.y = 0.792978699318;
    msg.z = 0.184077506979;
    msg.k = 0.806932344637;
    msg.m = 0.951629718319;
    msg.n = 0.14169581913;
    msg.flags = 27U;

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
    msg.setTimeStamp(0.437633135722);
    msg.setSource(14964U);
    msg.setSourceEntity(104U);
    msg.setDestination(46934U);
    msg.setDestinationEntity(206U);
    msg.value = 0.261049472529;

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
    msg.setTimeStamp(0.400507666847);
    msg.setSource(15749U);
    msg.setSourceEntity(81U);
    msg.setDestination(51440U);
    msg.setDestinationEntity(231U);
    msg.value = 0.624598091639;

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
    msg.setTimeStamp(0.402438304685);
    msg.setSource(3977U);
    msg.setSourceEntity(38U);
    msg.setDestination(25737U);
    msg.setDestinationEntity(147U);
    msg.value = 0.229863931678;

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
    msg.setTimeStamp(0.823255064267);
    msg.setSource(52647U);
    msg.setSourceEntity(147U);
    msg.setDestination(29722U);
    msg.setDestinationEntity(200U);
    msg.u = 0.0123346943246;
    msg.v = 0.577571689204;
    msg.w = 0.272275150495;
    msg.p = 0.104545684665;
    msg.q = 0.260824352213;
    msg.r = 0.302143931524;
    msg.flags = 140U;

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
    msg.setTimeStamp(0.333252484342);
    msg.setSource(47519U);
    msg.setSourceEntity(114U);
    msg.setDestination(21745U);
    msg.setDestinationEntity(176U);
    msg.u = 0.0981059965112;
    msg.v = 0.122639638332;
    msg.w = 0.943195301361;
    msg.p = 0.0114083651924;
    msg.q = 0.966192589703;
    msg.r = 0.604235938321;
    msg.flags = 175U;

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
    msg.setTimeStamp(0.262691636231);
    msg.setSource(51211U);
    msg.setSourceEntity(205U);
    msg.setDestination(8355U);
    msg.setDestinationEntity(120U);
    msg.u = 0.259847580366;
    msg.v = 0.64474149225;
    msg.w = 0.644549822475;
    msg.p = 0.818152311676;
    msg.q = 0.206195637121;
    msg.r = 0.401867975177;
    msg.flags = 203U;

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
    msg.setTimeStamp(0.872180505325);
    msg.setSource(14850U);
    msg.setSourceEntity(206U);
    msg.setDestination(30954U);
    msg.setDestinationEntity(214U);
    msg.path_ref = 721475815U;
    msg.start_lat = 0.437766691525;
    msg.start_lon = 0.080816932762;
    msg.start_z = 0.324440718078;
    msg.start_z_units = 182U;
    msg.end_lat = 0.966291198936;
    msg.end_lon = 0.174620404648;
    msg.end_z = 0.800777496875;
    msg.end_z_units = 163U;
    msg.lradius = 0.630276618742;
    msg.flags = 130U;
    msg.x = 0.761527501166;
    msg.y = 0.746373935411;
    msg.z = 0.872373513346;
    msg.vx = 0.643994192363;
    msg.vy = 0.456644841792;
    msg.vz = 0.994346648744;
    msg.course_error = 0.580439608495;
    msg.eta = 28954U;

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
    msg.setTimeStamp(0.545851371635);
    msg.setSource(5911U);
    msg.setSourceEntity(143U);
    msg.setDestination(12272U);
    msg.setDestinationEntity(240U);
    msg.path_ref = 2887665460U;
    msg.start_lat = 0.238129794274;
    msg.start_lon = 0.0571801791592;
    msg.start_z = 0.212703603076;
    msg.start_z_units = 192U;
    msg.end_lat = 0.548669278654;
    msg.end_lon = 0.692764079093;
    msg.end_z = 0.827757640197;
    msg.end_z_units = 142U;
    msg.lradius = 0.0199244383384;
    msg.flags = 189U;
    msg.x = 0.449914915417;
    msg.y = 0.766429926296;
    msg.z = 0.991830150834;
    msg.vx = 0.926852944526;
    msg.vy = 0.762654455945;
    msg.vz = 0.617446770466;
    msg.course_error = 0.265822393185;
    msg.eta = 46083U;

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
    msg.setTimeStamp(0.914156787209);
    msg.setSource(8844U);
    msg.setSourceEntity(94U);
    msg.setDestination(54248U);
    msg.setDestinationEntity(180U);
    msg.path_ref = 461623800U;
    msg.start_lat = 0.163460219431;
    msg.start_lon = 0.885403263281;
    msg.start_z = 0.665689093974;
    msg.start_z_units = 145U;
    msg.end_lat = 0.395334896598;
    msg.end_lon = 0.672973433613;
    msg.end_z = 0.075510020953;
    msg.end_z_units = 11U;
    msg.lradius = 0.201996000478;
    msg.flags = 164U;
    msg.x = 0.882093058891;
    msg.y = 0.359390425479;
    msg.z = 0.490427185745;
    msg.vx = 0.0156408734831;
    msg.vy = 0.629129672009;
    msg.vz = 0.821122386422;
    msg.course_error = 0.208132813588;
    msg.eta = 64493U;

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
    msg.setTimeStamp(0.135377012282);
    msg.setSource(8531U);
    msg.setSourceEntity(27U);
    msg.setDestination(40189U);
    msg.setDestinationEntity(172U);
    msg.k = 0.107031953244;
    msg.m = 0.349349533258;
    msg.n = 0.79464292028;

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
    msg.setTimeStamp(0.595530738385);
    msg.setSource(26957U);
    msg.setSourceEntity(40U);
    msg.setDestination(63867U);
    msg.setDestinationEntity(28U);
    msg.k = 0.823995860632;
    msg.m = 0.0463782944046;
    msg.n = 0.391983883537;

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
    msg.setTimeStamp(0.29231482067);
    msg.setSource(56303U);
    msg.setSourceEntity(75U);
    msg.setDestination(54096U);
    msg.setDestinationEntity(1U);
    msg.k = 0.957250067089;
    msg.m = 0.459886327938;
    msg.n = 0.0921680577597;

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
    msg.setTimeStamp(0.85590652251);
    msg.setSource(51993U);
    msg.setSourceEntity(229U);
    msg.setDestination(4531U);
    msg.setDestinationEntity(153U);
    msg.p = 0.934620096518;
    msg.i = 0.8786540521;
    msg.d = 0.783310672944;
    msg.a = 0.798191008211;

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
    msg.setTimeStamp(0.424561278282);
    msg.setSource(63449U);
    msg.setSourceEntity(21U);
    msg.setDestination(62467U);
    msg.setDestinationEntity(165U);
    msg.p = 0.104592419673;
    msg.i = 0.628041194471;
    msg.d = 0.44093658248;
    msg.a = 0.647312147422;

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
    msg.setTimeStamp(0.898649492266);
    msg.setSource(17975U);
    msg.setSourceEntity(28U);
    msg.setDestination(52380U);
    msg.setDestinationEntity(95U);
    msg.p = 0.641349779152;
    msg.i = 0.616556782051;
    msg.d = 0.482833474839;
    msg.a = 0.343808689171;

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
    msg.setTimeStamp(0.962281932092);
    msg.setSource(19030U);
    msg.setSourceEntity(181U);
    msg.setDestination(38454U);
    msg.setDestinationEntity(252U);
    msg.op = 93U;

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
    msg.setTimeStamp(0.730305471436);
    msg.setSource(30838U);
    msg.setSourceEntity(174U);
    msg.setDestination(5967U);
    msg.setDestinationEntity(206U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.205914176419);
    msg.setSource(4328U);
    msg.setSourceEntity(235U);
    msg.setDestination(50982U);
    msg.setDestinationEntity(209U);
    msg.op = 112U;

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
    msg.setTimeStamp(0.20510969465);
    msg.setSource(24274U);
    msg.setSourceEntity(198U);
    msg.setDestination(34289U);
    msg.setDestinationEntity(141U);
    msg.x = 0.929321192084;
    msg.y = 0.886894287192;
    msg.z = 0.251122772524;
    msg.vx = 0.642623148547;
    msg.vy = 0.0157762865977;
    msg.vz = 0.834129249785;
    msg.ax = 0.52440043849;
    msg.ay = 0.659181391389;
    msg.az = 0.0149474477207;
    msg.flags = 24043U;

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
    msg.setTimeStamp(0.832235348511);
    msg.setSource(43866U);
    msg.setSourceEntity(114U);
    msg.setDestination(44046U);
    msg.setDestinationEntity(8U);
    msg.x = 0.0985518335233;
    msg.y = 0.237176603976;
    msg.z = 0.853490005059;
    msg.vx = 0.175317437368;
    msg.vy = 0.919653360319;
    msg.vz = 0.901954154564;
    msg.ax = 0.14996233938;
    msg.ay = 0.226406201819;
    msg.az = 0.363071686109;
    msg.flags = 25559U;

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
    msg.setTimeStamp(0.772683938265);
    msg.setSource(16938U);
    msg.setSourceEntity(157U);
    msg.setDestination(6195U);
    msg.setDestinationEntity(126U);
    msg.x = 0.835281248291;
    msg.y = 0.206165274072;
    msg.z = 0.945050566426;
    msg.vx = 0.984567906183;
    msg.vy = 0.658121316605;
    msg.vz = 0.153347403328;
    msg.ax = 0.957982121543;
    msg.ay = 0.844748743897;
    msg.az = 0.670692733536;
    msg.flags = 22724U;

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
    msg.setTimeStamp(0.802261000721);
    msg.setSource(60020U);
    msg.setSourceEntity(215U);
    msg.setDestination(5395U);
    msg.setDestinationEntity(157U);
    msg.value = 0.509964909021;

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
    msg.setTimeStamp(0.55556363891);
    msg.setSource(3507U);
    msg.setSourceEntity(218U);
    msg.setDestination(11761U);
    msg.setDestinationEntity(108U);
    msg.value = 0.517224536173;

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
    msg.setTimeStamp(0.315399130773);
    msg.setSource(28264U);
    msg.setSourceEntity(211U);
    msg.setDestination(42627U);
    msg.setDestinationEntity(159U);
    msg.value = 0.89022742422;

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
    msg.setTimeStamp(0.149865229739);
    msg.setSource(42278U);
    msg.setSourceEntity(2U);
    msg.setDestination(26128U);
    msg.setDestinationEntity(13U);
    msg.timeout = 49243U;
    msg.lat = 0.509977730909;
    msg.lon = 0.341050261121;
    msg.z = 0.0861554408226;
    msg.z_units = 251U;
    msg.speed = 0.735475973214;
    msg.speed_units = 227U;
    msg.roll = 0.671753183331;
    msg.pitch = 0.977817012666;
    msg.yaw = 0.768909810236;
    msg.custom.assign("WOLOGWMFQMCFHLXPYQEMFSCFBYBOFQJYQRTLYEVDXHSIMARMPLVTNDTJDDFSVORGKWAWDAHCCWAIYIPRLNPCQSBFVRJLIHGGJCKJHWDSXXNAMIZXDJBMUBUXYVRKOJXUFFGCVPDQUENNDAKKRZNRRVUJOEZPTENKLUEMAKSYPACWZQZIQSBEHDQVOIGUHKHWJOEXCIZLUGARV");

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
    msg.setTimeStamp(0.973047677318);
    msg.setSource(18094U);
    msg.setSourceEntity(209U);
    msg.setDestination(7458U);
    msg.setDestinationEntity(65U);
    msg.timeout = 39284U;
    msg.lat = 0.298999075183;
    msg.lon = 0.542571387734;
    msg.z = 0.0681029860843;
    msg.z_units = 96U;
    msg.speed = 0.847336582195;
    msg.speed_units = 142U;
    msg.roll = 0.489874646253;
    msg.pitch = 0.958244077834;
    msg.yaw = 0.519821535481;
    msg.custom.assign("IBYCISNSRDZSGLRGMCKOLURDVOEWTONAAEQWJRHBKHZEYFCVGLBNLQNWJPIZLRQPBCMMGTSTTBGFFFVXULDHJOPKAULVCFRHXWGAJEPUHYXWQEMTFLAXZTTKZYDSXUAFZIYTJZACMSNQXWMVMMJBGWZYDRDSHGAQWXCMGIACOJTQ");

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
    msg.setTimeStamp(0.568645391169);
    msg.setSource(48590U);
    msg.setSourceEntity(54U);
    msg.setDestination(63561U);
    msg.setDestinationEntity(220U);
    msg.timeout = 59211U;
    msg.lat = 0.659139262916;
    msg.lon = 0.513885718169;
    msg.z = 0.0310715806012;
    msg.z_units = 35U;
    msg.speed = 0.972064112772;
    msg.speed_units = 77U;
    msg.roll = 0.357161508388;
    msg.pitch = 0.405360870684;
    msg.yaw = 0.334965713902;
    msg.custom.assign("KLQCHVMIZRVHGLPEVNENDYIMDUEGALOBSLQRKGGXBDSGXIIMOFASQJBVCMCTLYHKGCUPBAFWDUEYGYESQENVUG");

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
    msg.setTimeStamp(0.170071072076);
    msg.setSource(65505U);
    msg.setSourceEntity(201U);
    msg.setDestination(65443U);
    msg.setDestinationEntity(212U);
    msg.timeout = 1420U;
    msg.lat = 0.920417452934;
    msg.lon = 0.945716514536;
    msg.z = 0.0956276527507;
    msg.z_units = 110U;
    msg.speed = 0.242589957307;
    msg.speed_units = 189U;
    msg.duration = 43667U;
    msg.radius = 0.809568473609;
    msg.flags = 96U;
    msg.custom.assign("ZKKWHQWXEXNIWBRZRPMRFUTDIIXQDOLTHMOEVGJTWBCLBJTMDBZHUCFJAPI");

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
    msg.setTimeStamp(0.402301212903);
    msg.setSource(14308U);
    msg.setSourceEntity(129U);
    msg.setDestination(28434U);
    msg.setDestinationEntity(159U);
    msg.timeout = 20700U;
    msg.lat = 0.756117317983;
    msg.lon = 0.276665475653;
    msg.z = 0.527252934882;
    msg.z_units = 24U;
    msg.speed = 0.547175848253;
    msg.speed_units = 218U;
    msg.duration = 44063U;
    msg.radius = 0.461532345848;
    msg.flags = 250U;
    msg.custom.assign("LHBSSSASYXPIIIAKVIXCYUCFHNDCMWGFHYJNZMOQMOEUSTDDVFGLJNQKTMVDWMVSVZOFJDPDPGARZUGXPFZZXXRICJGKNCNTWXOCPFHZJVCDLX");

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
    msg.setTimeStamp(0.0768147241035);
    msg.setSource(19557U);
    msg.setSourceEntity(208U);
    msg.setDestination(17490U);
    msg.setDestinationEntity(99U);
    msg.timeout = 59367U;
    msg.lat = 0.833539050334;
    msg.lon = 0.432612860758;
    msg.z = 0.0672753448565;
    msg.z_units = 53U;
    msg.speed = 0.987374861479;
    msg.speed_units = 187U;
    msg.duration = 5281U;
    msg.radius = 0.14177751246;
    msg.flags = 9U;
    msg.custom.assign("KJZCEPLVXPDJTOSWBBMULCWAGOKXMEISYPWJLTNVIESILZUFXBMWHVBEDXKQNCAYHLSRZVQTHPXHOZQRQAXPKFMQTVMOVAQNJUTLAIAMAYCKWDDYYSFVKCONGOJINVJUNMJQBZNRBHRULTLASZEDKIFCRRHICYFMWTHREPOYPBWDGSYECGYLDJPQXID");

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
    msg.setTimeStamp(0.0150428411115);
    msg.setSource(22629U);
    msg.setSourceEntity(149U);
    msg.setDestination(31258U);
    msg.setDestinationEntity(3U);
    msg.custom.assign("EWHHWRTXUAPYIXNSQMBRYKMOVNOJLBHMKLDXBWOBSDLPRAVCAJCWIESGQZMHEZYWGRTRNDGUCMSDFIICGBJJXUJQENKDUEVEKKQZQOPQSEVUTZSYZ");

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
    msg.setTimeStamp(0.994872432645);
    msg.setSource(23113U);
    msg.setSourceEntity(101U);
    msg.setDestination(3159U);
    msg.setDestinationEntity(130U);
    msg.custom.assign("RQVCPJMUBVJFPISYVFPKDUWWRMHRAIZXLHNYGUIFEBVVCBMDSLPVJHRPBNJZDTQSAEIIJZZCGWZJTEJWCHGQUEYSHMLNPFAQFCVLSENYKGHBDMFDWZGXYWRMCNSSODMOBGJGGSXAKXDQTJRNONXKWPXKFUTSSKXLODYAVYEILBNBEFFTPAPDQOQMMUBNLQYUBN");

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
    msg.setTimeStamp(0.0970182558633);
    msg.setSource(22962U);
    msg.setSourceEntity(91U);
    msg.setDestination(7757U);
    msg.setDestinationEntity(23U);
    msg.custom.assign("YEJSEMGLHHXDUGIBVWXHXNN");

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
    msg.setTimeStamp(0.8637261504);
    msg.setSource(47766U);
    msg.setSourceEntity(118U);
    msg.setDestination(44360U);
    msg.setDestinationEntity(13U);
    msg.timeout = 60363U;
    msg.lat = 0.329907972629;
    msg.lon = 0.963076178736;
    msg.z = 0.768276443341;
    msg.z_units = 74U;
    msg.duration = 4073U;
    msg.speed = 0.384101348229;
    msg.speed_units = 123U;
    msg.type = 86U;
    msg.radius = 0.547169092397;
    msg.length = 0.648023507225;
    msg.bearing = 0.0456655268118;
    msg.direction = 2U;
    msg.custom.assign("FDYBBRYYECHYYILVCMZUIFIXMMTLANZFEXQKUQOKEGMLTBPPXEDNRBFWAFDNKLDVZZHTYGQWTPEGOOSMLVLHDALPXYMBJAOCRXWRMPASKBKIZTYU");

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
    msg.setTimeStamp(0.859468290147);
    msg.setSource(56532U);
    msg.setSourceEntity(134U);
    msg.setDestination(20288U);
    msg.setDestinationEntity(233U);
    msg.timeout = 56714U;
    msg.lat = 0.622247760509;
    msg.lon = 0.834683011929;
    msg.z = 0.597247642714;
    msg.z_units = 184U;
    msg.duration = 28584U;
    msg.speed = 0.183767407153;
    msg.speed_units = 142U;
    msg.type = 62U;
    msg.radius = 0.932303190218;
    msg.length = 0.679688519002;
    msg.bearing = 0.52851076337;
    msg.direction = 8U;
    msg.custom.assign("HLFFKQQTNMWOGTKZNSPMHCPRHJLZAWVAKJMDISIJLVSWNXXRGFBOGHVBBYFZEHTIPTUGXCLDWOIKXPVZMNPCGMSQTXHVQWVUIBXQJJOZUMSKYDOSJCVLISRYOABNUDUCIKNAWJKXCEMBXZFCJUYEDELRTBREWOVAKODFTYZDBXMEPGCCQRUAOYCWVNPGIFHMJEUYLIYAP");

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
    msg.setTimeStamp(0.0247037536205);
    msg.setSource(58600U);
    msg.setSourceEntity(1U);
    msg.setDestination(33866U);
    msg.setDestinationEntity(41U);
    msg.timeout = 27704U;
    msg.lat = 0.4782601641;
    msg.lon = 0.894891958209;
    msg.z = 0.975687724049;
    msg.z_units = 146U;
    msg.duration = 4778U;
    msg.speed = 0.0326034641425;
    msg.speed_units = 50U;
    msg.type = 204U;
    msg.radius = 0.242763147394;
    msg.length = 0.290152330724;
    msg.bearing = 0.0237915737148;
    msg.direction = 3U;
    msg.custom.assign("QSVVYPNJFVEAZMBXAUCLQZOHLJGNTUPTEBJEKOIDVDHZHKHXZGTDCCCERYRFUIVTGLNWZHWEKTHEPKZWKOOJQMBSIVBBLHCXAR");

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
    msg.setTimeStamp(0.311612387783);
    msg.setSource(3024U);
    msg.setSourceEntity(186U);
    msg.setDestination(54535U);
    msg.setDestinationEntity(160U);
    msg.duration = 23338U;
    msg.custom.assign("KDARWKOQTFOAHIOFNGEHRTDBFEWRYMWXOYMETPZLUVRGVRNIPCCQTRDHXAJWPGGNUZMDWIBSIOKQHALBYSXFAQVFHLMOPAUHYJKRMMBANT");

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
    msg.setTimeStamp(0.119651839081);
    msg.setSource(51637U);
    msg.setSourceEntity(103U);
    msg.setDestination(34031U);
    msg.setDestinationEntity(70U);
    msg.duration = 53110U;
    msg.custom.assign("IMTOLVOXWKARIBOEGUHSEQGAXQRKUWHEDACJTYXSPNJHBEQHCXNT");

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
    msg.setTimeStamp(0.626839902354);
    msg.setSource(15507U);
    msg.setSourceEntity(49U);
    msg.setDestination(43115U);
    msg.setDestinationEntity(35U);
    msg.duration = 34455U;
    msg.custom.assign("AVLZUMOGISQFFRMETUOIVYHSTVEIWFCVVGRAOMQDNUHGECXEHBG");

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
    msg.setTimeStamp(0.175606302101);
    msg.setSource(32260U);
    msg.setSourceEntity(74U);
    msg.setDestination(24017U);
    msg.setDestinationEntity(1U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.397496418064;
    msg.control.set(tmp_msg_0);
    msg.duration = 55465U;
    msg.custom.assign("EZCAYMXNPHFLFZBDHZUTBYIDWCKYRQBMCXWFOYGAWAVQPVFSNIYGQDUZSRSCGRQHVJTCMSAJFOOQBKIPBMQJHNNZETUDEIXNWKJCRYVGTLERRGLZHQRMVDPXXQHASHEAIMKZRLVJWHSVAIUXWGYELMNAOIYKQOFYWPLCYJWCAXPCDUKVDRTOZN");

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
    msg.setTimeStamp(0.690515300211);
    msg.setSource(14047U);
    msg.setSourceEntity(102U);
    msg.setDestination(57349U);
    msg.setDestinationEntity(13U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.170907006041;
    msg.control.set(tmp_msg_0);
    msg.duration = 55368U;
    msg.custom.assign("FZPDKDIYITMTYMCFONKOUORFYVHAAYAUQNKERHHXRXZXGBGCLWYTLVETIIUYLHBPTNIFQKIOJQTWVHPRQWVBHHFWUSILAWXYKMGYWZCORTPEXRJZEHMQJGOAYZEAMEJBDBPMIPHKSODBPSPTEQHJMLJDYSXDGZNZNKXLGEVFCVIKBDACCQUMWT");

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
    msg.setTimeStamp(0.461310296052);
    msg.setSource(12588U);
    msg.setSourceEntity(226U);
    msg.setDestination(48796U);
    msg.setDestinationEntity(102U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.74886713438;
    tmp_msg_0.z_units = 124U;
    msg.control.set(tmp_msg_0);
    msg.duration = 13590U;
    msg.custom.assign("GQYGYHDXIWMLFUSUDRTJFWMVDLBYKYFCAILAPPJHVRCZHPILSHTUBTWPLRWCRKSREVLFZFAUMQLNBJFKDJOKIAXTHYZSCBKUHMGNRJYLSESWACWCJXBYWNXGCHNCSKWIKQWDLMMTGBNXKOBNSVZHMIDRZNVXNJPXUDOKTDPVYOYTOYZVHCQPNAKGUZVEGQUQGEJZBOIQCUMXPXTRLR");

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
    msg.setTimeStamp(0.281105362716);
    msg.setSource(59767U);
    msg.setSourceEntity(30U);
    msg.setDestination(41158U);
    msg.setDestinationEntity(71U);
    msg.timeout = 11435U;
    msg.lat = 0.446061479987;
    msg.lon = 0.485739541439;
    msg.z = 0.682047520016;
    msg.z_units = 69U;
    msg.speed = 0.129030584408;
    msg.speed_units = 78U;
    msg.bearing = 0.812810851271;
    msg.cross_angle = 0.0044881658074;
    msg.width = 0.226145769364;
    msg.length = 0.947053498277;
    msg.hstep = 0.0360822008895;
    msg.coff = 127U;
    msg.alternation = 10U;
    msg.flags = 208U;
    msg.custom.assign("VBONJJBNLKYIFZHJIRDYAQCOHZMVXDQMJLGOSKNSLAOTUJIPHHDAHPPVLTHSXODMJPJWVBGZQWEXBGXAFPNMLXCMKCVEKEDCXMUFBMPHARZMWGASFEGEQNKVINXIJOUUSTFXCQSPXOWEYMHACLIDTUKLOYSWVVLQRRRRCECBFIIWPGGKZOFETBFYSDMYYWTS");

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
    msg.setTimeStamp(0.651605989698);
    msg.setSource(27936U);
    msg.setSourceEntity(153U);
    msg.setDestination(63881U);
    msg.setDestinationEntity(76U);
    msg.timeout = 65227U;
    msg.lat = 0.439402428421;
    msg.lon = 0.570642562407;
    msg.z = 0.92221616087;
    msg.z_units = 71U;
    msg.speed = 0.0281219173111;
    msg.speed_units = 173U;
    msg.bearing = 0.991305279398;
    msg.cross_angle = 0.807773082277;
    msg.width = 0.738092415466;
    msg.length = 0.304688226821;
    msg.hstep = 0.855045953979;
    msg.coff = 233U;
    msg.alternation = 184U;
    msg.flags = 160U;
    msg.custom.assign("KTLJYSLOUNZKNNHTKOWHROEGBOGVZRHGVESCEKBFRRNOBVBJEFGZAFYIIVVCETKXJRFJJSDZIDCLDOCMXWLSBYSBPDGUAXLGCCEISYKCHBIDNXONQAYPPXRKMFNAIZATLZTMZYVTUMVDDEFWIGYCXUXZWJBUTJRPQMFDAUGSLMQXKPQSAHKUFFWEHNMIWZUQHHZTRBQWQLQQHWCNDHYLES");

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
    msg.setTimeStamp(0.0803270283689);
    msg.setSource(559U);
    msg.setSourceEntity(42U);
    msg.setDestination(62415U);
    msg.setDestinationEntity(210U);
    msg.timeout = 56366U;
    msg.lat = 0.825947268932;
    msg.lon = 0.927199747966;
    msg.z = 0.820442819471;
    msg.z_units = 60U;
    msg.speed = 0.531892798483;
    msg.speed_units = 88U;
    msg.bearing = 0.745401213585;
    msg.cross_angle = 0.679916261058;
    msg.width = 0.880232267032;
    msg.length = 0.868740771899;
    msg.hstep = 0.781537105671;
    msg.coff = 50U;
    msg.alternation = 102U;
    msg.flags = 195U;
    msg.custom.assign("SQCCTVSKRJNCGMWWACWQWNDKTHDGKXNTLBOFSQUNBUGBJJE");

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
    msg.setTimeStamp(0.333750044345);
    msg.setSource(65449U);
    msg.setSourceEntity(253U);
    msg.setDestination(19256U);
    msg.setDestinationEntity(80U);
    msg.timeout = 40049U;
    msg.lat = 0.20519632276;
    msg.lon = 0.972338571277;
    msg.z = 0.10988349901;
    msg.z_units = 171U;
    msg.speed = 0.126573344892;
    msg.speed_units = 251U;
    msg.custom.assign("OUYMCCDNWJDAALMAVUSQGUDFQZPGIUIALZLXRKUYMYCKUKCLJPRXVIPBASRNKMNKJSDQDPGZYBSKWHQ");

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
    msg.setTimeStamp(0.628608793722);
    msg.setSource(32942U);
    msg.setSourceEntity(137U);
    msg.setDestination(29354U);
    msg.setDestinationEntity(223U);
    msg.timeout = 44981U;
    msg.lat = 0.304261010073;
    msg.lon = 0.0665290119214;
    msg.z = 0.0117080495416;
    msg.z_units = 24U;
    msg.speed = 0.794818054075;
    msg.speed_units = 179U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.384047430945;
    tmp_msg_0.y = 0.340701398301;
    tmp_msg_0.z = 0.561035675602;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IFTNJNZGHZMLQWMNFKGRGJIFBVAWKRQOSLALUSJAYHBYTGDCVPDVOKHHFYCZUKBBDDDFAIBXTAJXWONDZHCVEUAJTJLYPHDHQKJRQQBUKENVPNNGUPVPXGQJYRFVLTKZNAZVSJS");

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
    msg.setTimeStamp(0.0794717091766);
    msg.setSource(20114U);
    msg.setSourceEntity(89U);
    msg.setDestination(10522U);
    msg.setDestinationEntity(79U);
    msg.timeout = 49759U;
    msg.lat = 0.959388228275;
    msg.lon = 0.196623428767;
    msg.z = 0.438992562262;
    msg.z_units = 135U;
    msg.speed = 0.474372846592;
    msg.speed_units = 53U;
    msg.custom.assign("UMBCBDYBMMIPTYGSYPJKMAVKMCFKDQTOLEZYXVARVFMJHHWJHJWVLNGBPWSIZWKWDRLCOAANUXHOOBXEBIEZQJDVNIAJLWEZTNFPZSKYTMAEYSVHJXEROGUSNBNMIXOCPZLKZVXYPFTQ");

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
    msg.setTimeStamp(0.0665955587076);
    msg.setSource(40546U);
    msg.setSourceEntity(228U);
    msg.setDestination(64509U);
    msg.setDestinationEntity(202U);
    msg.x = 0.235070725042;
    msg.y = 0.356860296177;
    msg.z = 0.552294374581;

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
    msg.setTimeStamp(0.860794484302);
    msg.setSource(40827U);
    msg.setSourceEntity(95U);
    msg.setDestination(33988U);
    msg.setDestinationEntity(220U);
    msg.x = 0.92533905184;
    msg.y = 0.152730314351;
    msg.z = 0.306912068207;

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
    msg.setTimeStamp(0.404075033635);
    msg.setSource(58857U);
    msg.setSourceEntity(11U);
    msg.setDestination(35585U);
    msg.setDestinationEntity(235U);
    msg.x = 0.607794266457;
    msg.y = 0.106044789549;
    msg.z = 0.0546399984296;

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
    msg.setTimeStamp(0.705674792496);
    msg.setSource(17214U);
    msg.setSourceEntity(16U);
    msg.setDestination(55582U);
    msg.setDestinationEntity(67U);
    msg.timeout = 35184U;
    msg.lat = 0.892392928391;
    msg.lon = 0.703427794154;
    msg.z = 0.742488001406;
    msg.z_units = 109U;
    msg.amplitude = 0.848154013469;
    msg.pitch = 0.411845162773;
    msg.speed = 0.58043486587;
    msg.speed_units = 180U;
    msg.custom.assign("JATRPXTCOQFJVSZTFQVYIKULPCXSFIWWJEZIEPHXFGXABULXUZQMDWTZELKNVFQKYAVNJHARTLISPUCYWJZSOSSGHVQUTNWOBNXTWCIAMCCNUKEDPLGVD");

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
    msg.setTimeStamp(0.877444159693);
    msg.setSource(33656U);
    msg.setSourceEntity(92U);
    msg.setDestination(37539U);
    msg.setDestinationEntity(102U);
    msg.timeout = 39515U;
    msg.lat = 0.20084453226;
    msg.lon = 0.283799293137;
    msg.z = 0.922258638855;
    msg.z_units = 238U;
    msg.amplitude = 0.0628950715897;
    msg.pitch = 0.699312476301;
    msg.speed = 0.425564844355;
    msg.speed_units = 19U;
    msg.custom.assign("ZNJMTMRMYHCTSOSVOSYDPULRNQHESKFDAWYRYNQLUBYIZWLDMRNKYXRQAFBZMPQKLKEEZOBCOJPJZXZUJWCPSKHFFVASQIKJPJLZCCXFWWQGSTTOOFRUCGAVSAIDTYAMZXCFBWSBHCVMXJFUMFIKAQLCEYPORHUGJKNEBBNEEDXHETVXLPERWLMHGIWRATTWPVWCDDQTUPXGHJGNNUABSZDNAVXQ");

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
    msg.setTimeStamp(0.73763728454);
    msg.setSource(22382U);
    msg.setSourceEntity(73U);
    msg.setDestination(46231U);
    msg.setDestinationEntity(250U);
    msg.timeout = 407U;
    msg.lat = 0.0479665160578;
    msg.lon = 0.649916527789;
    msg.z = 0.165503958643;
    msg.z_units = 227U;
    msg.amplitude = 0.693545004065;
    msg.pitch = 0.301860229407;
    msg.speed = 0.913635181855;
    msg.speed_units = 18U;
    msg.custom.assign("SFXOKUQQHPFEOAPRLWMXMNSDINNEUMHIZWTTCDKJOAXYCSZCVKERGWYNTBIPZNTGQPPTFVVDGCAWXCUJSHWAEVIVZOFRROJFMTSQCUHZLESIDJZYEKYZOQPRQHLACZPQOEKAXGTLMPBIHTOY");

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
    msg.setTimeStamp(0.262698950403);
    msg.setSource(6302U);
    msg.setSourceEntity(10U);
    msg.setDestination(6759U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.319255963366);
    msg.setSource(20679U);
    msg.setSourceEntity(86U);
    msg.setDestination(52796U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.227945207828);
    msg.setSource(64642U);
    msg.setSourceEntity(147U);
    msg.setDestination(2462U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.510510896155);
    msg.setSource(34459U);
    msg.setSourceEntity(189U);
    msg.setDestination(43528U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.341609733012;
    msg.lon = 0.192500110237;
    msg.z = 0.63473955012;
    msg.z_units = 1U;
    msg.radius = 0.492767103679;
    msg.duration = 20781U;
    msg.speed = 0.907343264996;
    msg.speed_units = 188U;
    msg.custom.assign("JXMDDUZANHUXATYVREATKYMPNFWBVSJBKGTIPIKCDQUFBZSTVWGKTTEBWYOTWLQJYNQUQSHXAFXFVHMNCIBBGHVFUSDGMPWOSHFZTWLBLJIIXSOUGRRYWCN");

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
    msg.setTimeStamp(0.913650931223);
    msg.setSource(32809U);
    msg.setSourceEntity(108U);
    msg.setDestination(34824U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.444708364193;
    msg.lon = 0.827115857867;
    msg.z = 0.635782274867;
    msg.z_units = 151U;
    msg.radius = 0.90680587283;
    msg.duration = 26281U;
    msg.speed = 0.924327430155;
    msg.speed_units = 190U;
    msg.custom.assign("GJOCETIHZOYVNGQQINJRGSDOIIGIOWMJJPTLHZKCPRSPDEBNRSMCHQLXZACUZLPBYQEYFYBPYDXRUXWCRGYWQAFAEHWVBTMLW");

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
    msg.setTimeStamp(0.200519940583);
    msg.setSource(62669U);
    msg.setSourceEntity(143U);
    msg.setDestination(31341U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.987541666245;
    msg.lon = 0.683878455819;
    msg.z = 0.520955963431;
    msg.z_units = 73U;
    msg.radius = 0.969142122682;
    msg.duration = 52862U;
    msg.speed = 0.448275230282;
    msg.speed_units = 166U;
    msg.custom.assign("EKHHICEAENPESGLEOICUCNNLKYJAWXRWAOBUHTBHQXDRXMBSXPOBNHZFHFLABPTHAPNZNCSLLYTSCMTPMFHIFARVXOFDSTYWEYKYDZVHWURVOJLKLLMMXWCMYZKYYPRGJUIBPQEZZNWURRTWBQKQAUUVJICZEMZGNPRLJVSDEVMGVPGRQATXOBTQJUBTKGNZFIFYQVQKDSEMDISBJXGXWIAUWRDNDYAO");

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
    msg.setTimeStamp(0.817389581031);
    msg.setSource(39639U);
    msg.setSourceEntity(207U);
    msg.setDestination(29893U);
    msg.setDestinationEntity(160U);
    msg.timeout = 46056U;
    msg.flags = 161U;
    msg.lat = 0.857911512375;
    msg.lon = 0.592805023509;
    msg.start_z = 0.605745550205;
    msg.start_z_units = 88U;
    msg.end_z = 0.163974852444;
    msg.end_z_units = 216U;
    msg.radius = 0.219647336032;
    msg.speed = 0.408816852701;
    msg.speed_units = 140U;
    msg.custom.assign("FHSQAQZBNDJNNAUPKQUGWTSSFETTUJIIOYOVHFHAVXUYTGSAIAXGSMGBMBEY");

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
    msg.setTimeStamp(0.273799729864);
    msg.setSource(24725U);
    msg.setSourceEntity(254U);
    msg.setDestination(1137U);
    msg.setDestinationEntity(51U);
    msg.timeout = 35466U;
    msg.flags = 158U;
    msg.lat = 0.275565541557;
    msg.lon = 0.335841233078;
    msg.start_z = 0.380205464459;
    msg.start_z_units = 96U;
    msg.end_z = 0.958271640453;
    msg.end_z_units = 44U;
    msg.radius = 0.341350876511;
    msg.speed = 0.820518665873;
    msg.speed_units = 67U;
    msg.custom.assign("IDEKXYOSEUIVDXXKGGWVMNTCITXZTEPROKXRZKOLRRKQNVDJAJGTWAOCM");

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
    msg.setTimeStamp(0.671170574157);
    msg.setSource(30955U);
    msg.setSourceEntity(59U);
    msg.setDestination(43555U);
    msg.setDestinationEntity(80U);
    msg.timeout = 7188U;
    msg.flags = 58U;
    msg.lat = 0.30963833194;
    msg.lon = 0.474629691166;
    msg.start_z = 0.909655190687;
    msg.start_z_units = 222U;
    msg.end_z = 0.992941629875;
    msg.end_z_units = 108U;
    msg.radius = 0.755734527709;
    msg.speed = 0.287895704532;
    msg.speed_units = 88U;
    msg.custom.assign("CXZFRZAHKDQYYVPSIHXLEBQLHGJZCCZVZSXGASWYBFFFRVDEPVBQZSTXCKURPNOQQCFLEYOHZTDJURJXOBGGUHTALMKFUOBWPNTUMUXTDRAAANNUANKULPMGKJJSVMRRTXHNYEOIKYKZMBGEKNNSMSSAPOAVNMUOE");

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
    msg.setTimeStamp(0.895058732354);
    msg.setSource(46517U);
    msg.setSourceEntity(130U);
    msg.setDestination(34695U);
    msg.setDestinationEntity(28U);
    msg.timeout = 19235U;
    msg.lat = 0.134757585737;
    msg.lon = 0.141649421586;
    msg.z = 0.376261791292;
    msg.z_units = 182U;
    msg.speed = 0.132126648735;
    msg.speed_units = 90U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.121045217301;
    tmp_msg_0.y = 0.538078246263;
    tmp_msg_0.z = 0.259470641474;
    tmp_msg_0.t = 0.900587942392;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DMPOXUFZSIZJKZNLNDHYLPNEGTBWNMOAIRJOVMSWATXIETFWQGJGGSGQDMNYQCQPCPQDRLTPYUGIWUQUFSINHWGAJBYSEHTXTOAMWMSAOEZPRCBVXGZBDQILMAJSNBCBFYLHFRMUDKBOXDKPAR");

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
    msg.setTimeStamp(0.38754483364);
    msg.setSource(26815U);
    msg.setSourceEntity(91U);
    msg.setDestination(37533U);
    msg.setDestinationEntity(100U);
    msg.timeout = 39282U;
    msg.lat = 0.0623132489312;
    msg.lon = 0.568788433853;
    msg.z = 0.279991285861;
    msg.z_units = 81U;
    msg.speed = 0.0808422266139;
    msg.speed_units = 71U;
    msg.custom.assign("CSMNFUTGWMJKQGVSVBDUHTTCFGTNSBGRAVEFGYSIZKYRYKVZMLLZPMFMZHUMADGOYSAWDXWLSMFZABZHWTRASSEUCYXJUVOCSMOFDFBRKQJAKXIPFDFPDNCHBAIIFWEPLVJRHPIQDN");

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
    msg.setTimeStamp(0.795283031965);
    msg.setSource(35821U);
    msg.setSourceEntity(140U);
    msg.setDestination(6550U);
    msg.setDestinationEntity(190U);
    msg.timeout = 11433U;
    msg.lat = 0.0374436872341;
    msg.lon = 0.383378792577;
    msg.z = 0.992653451013;
    msg.z_units = 238U;
    msg.speed = 0.215078916879;
    msg.speed_units = 49U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.352149800824;
    tmp_msg_0.y = 0.0162257640474;
    tmp_msg_0.z = 0.589903889058;
    tmp_msg_0.t = 0.241140069461;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XNRRJTEZIUIVQMHSMYRVNONHMSOMWTNQ");

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
    msg.setTimeStamp(0.970894006938);
    msg.setSource(40111U);
    msg.setSourceEntity(178U);
    msg.setDestination(59532U);
    msg.setDestinationEntity(57U);
    msg.x = 0.404533813368;
    msg.y = 0.618676636498;
    msg.z = 0.830909260395;
    msg.t = 0.828799553705;

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
    msg.setTimeStamp(0.233245192909);
    msg.setSource(2897U);
    msg.setSourceEntity(141U);
    msg.setDestination(57437U);
    msg.setDestinationEntity(81U);
    msg.x = 0.891911428276;
    msg.y = 0.0471864063631;
    msg.z = 0.0618295408064;
    msg.t = 0.824569779302;

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
    msg.setTimeStamp(0.907912345779);
    msg.setSource(48402U);
    msg.setSourceEntity(252U);
    msg.setDestination(31381U);
    msg.setDestinationEntity(192U);
    msg.x = 0.70143282691;
    msg.y = 0.765565095637;
    msg.z = 0.423098539474;
    msg.t = 0.47586480835;

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
    msg.setTimeStamp(0.0393305981653);
    msg.setSource(53141U);
    msg.setSourceEntity(71U);
    msg.setDestination(11255U);
    msg.setDestinationEntity(172U);
    msg.timeout = 62260U;
    msg.name.assign("CRUNZPVSRTBSPGDGIDBXLQZZBVDWQTQABNVXOTKJSHYMROJSMZHGODS");
    msg.custom.assign("TMWIUHBAKRGDZBHGEIPIEMPHKXQLDPRSVWFMXDFFUAFRULTKYHXUADLNGUTYKBEHUUAOLSPJRVGZJEZDSJNEKBANRAXTBDVKXBEFTQWBHCRCWVTZQMONAIPMBNPF");

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
    msg.setTimeStamp(0.0634747869091);
    msg.setSource(14711U);
    msg.setSourceEntity(190U);
    msg.setDestination(62073U);
    msg.setDestinationEntity(210U);
    msg.timeout = 24298U;
    msg.name.assign("RIMCSXFZXDXVEBASHFOHKIWEDLDTFWYWYQARXTAERYNBSIHSUOKVKPWBZHDBZOKHIFHVGPUFPPUYOQMZCUWVJMMBQXEACQSDPMRRWKHYFPFLZJRIHNCKNJMDFANIZXTGMRTYSVOTUABGLRYMIZJIXJPJTFMKVQIYAQUCBWDBVGWQGSRJTETWLEDUCLUNNQEJKOLGGWEKPCXOTZCLPNYEAEBOJQHXCNGMKZLPVSDQ");
    msg.custom.assign("NVRHKOPNNPNEQGQCVNINYAHSZLFQBRAFYAXJPVIXBMRRPDAIQSMUJIDFSLTETWFYYLJIUYKTRCGBGQCEBHBZCDAAMOVWTWVPJGNEJZKLRMZUYUOTUDKRTEQHZXBYLSRKMJLIVEIOQMHXNMUMWHHCQPJWDMVWNSOGZGXDDWBFIKZCYBHNDOZZLEFLZUOCAJHKOQDIFWUXCAELOOXJTGW");

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
    msg.setTimeStamp(0.966906965146);
    msg.setSource(28518U);
    msg.setSourceEntity(81U);
    msg.setDestination(41873U);
    msg.setDestinationEntity(25U);
    msg.timeout = 32704U;
    msg.name.assign("ZDVTJUUYFRZBH");
    msg.custom.assign("SCQPOKXNVEMSUZVCPSGBZLOXCGSNKRYHQMKCRRODLVYGGPXJTHJCTKJTJVWDBDDTZGLFQUUTOCDBSWQVPQJYGMFRWFMFULRAIDSAMXKAUJHFNEWGNLKPYPIGYZASTMHSDAYUHHNNFAQIVWTGMPXHVAIIAHRWLJQLZOOXCLZUEDSZNOOQAFYBVKERROUWWVNXBHRUXHKBBPEYPKNYVACZEDGQEOKXBYTPMFFBWIIZDSJFLTIIWJXNTJIMRCEMUB");

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
    msg.setTimeStamp(0.318283839018);
    msg.setSource(38567U);
    msg.setSourceEntity(20U);
    msg.setDestination(32918U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.639027364803;
    msg.lon = 0.0368539465607;
    msg.z = 0.351959283375;
    msg.z_units = 191U;
    msg.speed = 0.125957827975;
    msg.speed_units = 79U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.919498631568;
    tmp_msg_0.y = 0.0358200001297;
    tmp_msg_0.z = 0.718538612315;
    tmp_msg_0.t = 0.180573118619;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 35792U;
    tmp_msg_1.off_x = 0.598945371524;
    tmp_msg_1.off_y = 0.975734227745;
    tmp_msg_1.off_z = 0.122497072707;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.982744681683;
    msg.custom.assign("XTRMPRUYNBPUBWJUITQKLXKTGOPIYQOFVBPPHXWJZHPWEZTUSEBN");

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
    msg.setTimeStamp(0.604798925999);
    msg.setSource(47115U);
    msg.setSourceEntity(83U);
    msg.setDestination(57241U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.162081246209;
    msg.lon = 0.0694617103136;
    msg.z = 0.861156232366;
    msg.z_units = 90U;
    msg.speed = 0.00180310810966;
    msg.speed_units = 135U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14326U;
    tmp_msg_0.off_x = 0.119804779763;
    tmp_msg_0.off_y = 0.589568547116;
    tmp_msg_0.off_z = 0.306290200432;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.128537627348;
    msg.custom.assign("SDMBBNCIPCPQUNCJZCFMGMGBALKVAYNRAJIWDEDZVKHFLODKIWRLIUYYCCHBVPSXGPTAQNSTATTZQWVMHKTOQMFNMUBLRSVUUWYKIXKJHSQTRZAVWKOOCMXQUKO");

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
    msg.setTimeStamp(0.0651159994148);
    msg.setSource(36186U);
    msg.setSourceEntity(174U);
    msg.setDestination(52544U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.574493567051;
    msg.lon = 0.166072037264;
    msg.z = 0.921433085972;
    msg.z_units = 66U;
    msg.speed = 0.675173221824;
    msg.speed_units = 223U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52146U;
    tmp_msg_0.off_x = 0.605524280295;
    tmp_msg_0.off_y = 0.675005202796;
    tmp_msg_0.off_z = 0.612811172222;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.0179560795004;
    msg.custom.assign("CZSCIKCTSHKRWLVSLSANAOTMODHHKJGNLBBNMWWSPQTDLNHPMQASOIKRBJZQTZHVETJOCULJAMGKVIJXZHAVFBVYALZLMGUFXWDORCAQWUVUWNSXXFZDVDPVSLTYSUFYXJCKFNPPGSPQTYCKUQNRFUDNUODFQKORTEIEJNDWRGAYXAAICXXFWEDCQ");

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
    msg.setTimeStamp(0.494130480135);
    msg.setSource(42262U);
    msg.setSourceEntity(83U);
    msg.setDestination(7511U);
    msg.setDestinationEntity(215U);
    msg.vid = 12204U;
    msg.off_x = 0.246413932252;
    msg.off_y = 0.479488462395;
    msg.off_z = 0.621705005374;

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
    msg.setTimeStamp(0.831084937773);
    msg.setSource(57256U);
    msg.setSourceEntity(77U);
    msg.setDestination(56211U);
    msg.setDestinationEntity(224U);
    msg.vid = 21663U;
    msg.off_x = 0.655124489385;
    msg.off_y = 0.557276593641;
    msg.off_z = 0.00392816697903;

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
    msg.setTimeStamp(0.762996429602);
    msg.setSource(7111U);
    msg.setSourceEntity(21U);
    msg.setDestination(40280U);
    msg.setDestinationEntity(143U);
    msg.vid = 49301U;
    msg.off_x = 0.254639672729;
    msg.off_y = 0.148799800439;
    msg.off_z = 0.792816237821;

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
    msg.setTimeStamp(0.220246898775);
    msg.setSource(63005U);
    msg.setSourceEntity(46U);
    msg.setDestination(8147U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.143301521536);
    msg.setSource(31950U);
    msg.setSourceEntity(38U);
    msg.setDestination(28937U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.435608816704);
    msg.setSource(49639U);
    msg.setSourceEntity(161U);
    msg.setDestination(37911U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.594588815507);
    msg.setSource(64559U);
    msg.setSourceEntity(49U);
    msg.setDestination(41244U);
    msg.setDestinationEntity(170U);
    msg.mid = 29056U;

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
    msg.setTimeStamp(0.209340578536);
    msg.setSource(50169U);
    msg.setSourceEntity(178U);
    msg.setDestination(34153U);
    msg.setDestinationEntity(110U);
    msg.mid = 33056U;

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
    msg.setTimeStamp(0.915269561194);
    msg.setSource(8265U);
    msg.setSourceEntity(218U);
    msg.setDestination(60077U);
    msg.setDestinationEntity(201U);
    msg.mid = 6643U;

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
    msg.setTimeStamp(0.807368108613);
    msg.setSource(3235U);
    msg.setSourceEntity(11U);
    msg.setDestination(18924U);
    msg.setDestinationEntity(61U);
    msg.state = 231U;
    msg.eta = 42673U;
    msg.info.assign("CGHCFKYAQIGGWASYYCXGEQONCCKLEBBNEWBNWZPYMDEQOIOYCKFUMFYUUZBIMZFOUMKBVHOGXLQNILUJOTUPZAJQSSXRQBLSQVOF");

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
    msg.setTimeStamp(0.684821912049);
    msg.setSource(62373U);
    msg.setSourceEntity(5U);
    msg.setDestination(57516U);
    msg.setDestinationEntity(158U);
    msg.state = 91U;
    msg.eta = 40578U;
    msg.info.assign("EAJSIFXOXYJOVGNIYEVJSVQSMTBSCGIZMNN");

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
    msg.setTimeStamp(0.0394271119126);
    msg.setSource(44288U);
    msg.setSourceEntity(224U);
    msg.setDestination(56170U);
    msg.setDestinationEntity(82U);
    msg.state = 189U;
    msg.eta = 28494U;
    msg.info.assign("IRLBRCKETXUERZGAUVFLBMAVOFLSEPKMFQRVNQIDNPYDUFYFHYTXCLMDSOGBAUHJBIQERUMDWCDUYRPONKVBIEJWHXMALZX");

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
    msg.setTimeStamp(0.610542291232);
    msg.setSource(13600U);
    msg.setSourceEntity(217U);
    msg.setDestination(43326U);
    msg.setDestinationEntity(113U);
    msg.system = 44915U;
    msg.duration = 5974U;
    msg.speed = 0.309916784161;
    msg.speed_units = 68U;
    msg.x = 0.905584192482;
    msg.y = 0.976995514323;
    msg.z = 0.436186661764;
    msg.z_units = 165U;

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
    msg.setTimeStamp(0.0495632091776);
    msg.setSource(63765U);
    msg.setSourceEntity(118U);
    msg.setDestination(2797U);
    msg.setDestinationEntity(60U);
    msg.system = 32241U;
    msg.duration = 54604U;
    msg.speed = 0.85711480757;
    msg.speed_units = 189U;
    msg.x = 0.46115085811;
    msg.y = 0.707234617049;
    msg.z = 0.805911969808;
    msg.z_units = 125U;

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
    msg.setTimeStamp(0.104832206307);
    msg.setSource(1280U);
    msg.setSourceEntity(241U);
    msg.setDestination(54848U);
    msg.setDestinationEntity(39U);
    msg.system = 38558U;
    msg.duration = 59121U;
    msg.speed = 0.67476654726;
    msg.speed_units = 12U;
    msg.x = 0.270429263148;
    msg.y = 0.802873655471;
    msg.z = 0.720098432216;
    msg.z_units = 167U;

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
    msg.setTimeStamp(0.0110845182926);
    msg.setSource(33461U);
    msg.setSourceEntity(113U);
    msg.setDestination(1233U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.00247610633354;
    msg.lon = 0.633017630483;
    msg.speed = 0.617993661075;
    msg.speed_units = 146U;
    msg.duration = 44534U;
    msg.sys_a = 9140U;
    msg.sys_b = 53160U;
    msg.move_threshold = 0.99464253976;

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
    msg.setTimeStamp(0.0260267365804);
    msg.setSource(9735U);
    msg.setSourceEntity(131U);
    msg.setDestination(55500U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.529656757239;
    msg.lon = 0.509451732412;
    msg.speed = 0.76589509468;
    msg.speed_units = 119U;
    msg.duration = 56574U;
    msg.sys_a = 21246U;
    msg.sys_b = 11711U;
    msg.move_threshold = 0.263144413862;

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
    msg.setTimeStamp(0.749677791841);
    msg.setSource(25789U);
    msg.setSourceEntity(123U);
    msg.setDestination(55778U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.349981647993;
    msg.lon = 0.0990887647239;
    msg.speed = 0.822199958582;
    msg.speed_units = 28U;
    msg.duration = 42349U;
    msg.sys_a = 57757U;
    msg.sys_b = 28098U;
    msg.move_threshold = 0.436270132023;

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
    msg.setTimeStamp(0.75980424175);
    msg.setSource(59074U);
    msg.setSourceEntity(68U);
    msg.setDestination(24193U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.931708454635;
    msg.lon = 0.532162278318;
    msg.z = 0.853081040781;
    msg.z_units = 36U;
    msg.speed = 0.142214355031;
    msg.speed_units = 234U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.997171184767;
    tmp_msg_0.lon = 0.9885131803;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UXVOPTOTLYFKDEPBPVRHGJZPPLAGQUXZVNOUAMVMCGYGMFKDYLOPSPRLMNUCRGIBEBTJCUAVMWCGWQVZUZPBQXRHCXFYYSNOQNFWBCIWDZTVWGSQPLEFXJHITKXORHKEOLEZHPMIDBINSMGZBDIQYFWSRSDLCXIJXKHJBLMFNYSSUQFTVOYDWRFCDXJYAIJHGOWLAGZIHNZIEKEUBSKVAWDNUOJEJM");

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
    msg.setTimeStamp(0.0596756149123);
    msg.setSource(30459U);
    msg.setSourceEntity(202U);
    msg.setDestination(16475U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.802365349325;
    msg.lon = 0.5567569628;
    msg.z = 0.236226645626;
    msg.z_units = 254U;
    msg.speed = 0.266472815288;
    msg.speed_units = 71U;
    msg.custom.assign("SFEJHVQLGGYUPILPZLEYGKVMZLGPWIOPXYJZGKHAJRDUCIGHCLBAFFJHFGRHDUDWYZQEOTSKKNHVITNSAMIXDKYVNTSPKZIAONSDMVFEEGTZXIDXDVZYMEOO");

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
    msg.setTimeStamp(0.552279558848);
    msg.setSource(32U);
    msg.setSourceEntity(36U);
    msg.setDestination(43466U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.764302577371;
    msg.lon = 0.633784254651;
    msg.z = 0.047004310945;
    msg.z_units = 118U;
    msg.speed = 0.334729967988;
    msg.speed_units = 231U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.372980835082;
    tmp_msg_0.lon = 0.699330550752;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SLTIMETYOQEAHBKWFZZFUNKYBRNISIOCZECCAXQKUMXIXVJJNVSMAYZAZUTQHDPQXYHBUVPAKOREBEHZEWSSDTZLORVFRGWQVSDHXVLLRBJRFOXREVLUICFLAPWOJ");

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
    msg.setTimeStamp(0.731529602952);
    msg.setSource(53704U);
    msg.setSourceEntity(71U);
    msg.setDestination(56526U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.0924536672649;
    msg.lon = 0.28604413427;

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
    msg.setTimeStamp(0.717176685873);
    msg.setSource(43401U);
    msg.setSourceEntity(188U);
    msg.setDestination(11137U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.0560637906292;
    msg.lon = 0.773927147783;

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
    msg.setTimeStamp(0.906568324994);
    msg.setSource(63078U);
    msg.setSourceEntity(87U);
    msg.setDestination(29767U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.308390781636;
    msg.lon = 0.0229576876594;

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
    msg.setTimeStamp(0.572445348019);
    msg.setSource(8013U);
    msg.setSourceEntity(245U);
    msg.setDestination(38486U);
    msg.setDestinationEntity(216U);
    msg.timeout = 62428U;
    msg.lat = 0.328700978615;
    msg.lon = 0.909069997235;
    msg.z = 0.249163492471;
    msg.z_units = 79U;
    msg.pitch = 0.918841808133;
    msg.amplitude = 0.764144101328;
    msg.duration = 35876U;
    msg.speed = 0.354079406415;
    msg.speed_units = 243U;
    msg.radius = 0.449907410814;
    msg.direction = 120U;
    msg.custom.assign("TPCWFBTYGUEUYSJAQAYKXNENAXJEOYINSRLPLMAXEBJVTRTDOQXNAAXWMTBUPJGCFXURAKYNTOTKLCQFISDJJZRUPLDDZODWGKPMJZBCWKHNBMFQHQOWMBPGHLHIAYRSNJRKVLZXWASPLQYVUQQSMLSMBZIYSMLEDGQBEIRXCYFDWGOEVZEDXOFJCGKULHXZYVPOEC");

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
    msg.setTimeStamp(0.479247364048);
    msg.setSource(60065U);
    msg.setSourceEntity(31U);
    msg.setDestination(19397U);
    msg.setDestinationEntity(219U);
    msg.timeout = 62042U;
    msg.lat = 0.242431205199;
    msg.lon = 0.372406921811;
    msg.z = 0.019230113166;
    msg.z_units = 102U;
    msg.pitch = 0.339204118786;
    msg.amplitude = 0.54625889281;
    msg.duration = 64423U;
    msg.speed = 0.695500985823;
    msg.speed_units = 112U;
    msg.radius = 0.794227776886;
    msg.direction = 102U;
    msg.custom.assign("WNHRPLEHNBOQQJYNZFMGZSZTTCFVDXKDNLLRVRKXMGBPJULURXUONCEYRSPPFTWOYFVTBQSHEPKJQWYAFZAOQBPOUJIBKBNEEMJUPZSLDFPTILWAHYD");

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
    msg.setTimeStamp(0.739521907004);
    msg.setSource(49538U);
    msg.setSourceEntity(214U);
    msg.setDestination(43806U);
    msg.setDestinationEntity(176U);
    msg.timeout = 26701U;
    msg.lat = 0.435062874463;
    msg.lon = 0.170250056967;
    msg.z = 0.896078296597;
    msg.z_units = 196U;
    msg.pitch = 0.486395943105;
    msg.amplitude = 0.109573200674;
    msg.duration = 6385U;
    msg.speed = 0.320762314952;
    msg.speed_units = 51U;
    msg.radius = 0.294575563329;
    msg.direction = 146U;
    msg.custom.assign("BJLKXPPCPBWLGMPTEVQAJFONDYHJBWKXGPUBDDRNJOQVPIXXBJVRZWWMMOFDYYGPESAPJUOYEGICGYEUJAFIMRUYWATHUADZBASKFTUNXJKHIHKCLZOZHRHMIJNTGZXGRBFZXJNKSZGTOVLDUXVERYDOFCDZPGAVALRQIUOTUQSLYQNUQBIWWTFCEVHTVZGWNLFLERPAFCSWXKCMVMQMSTHY");

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
    msg.setTimeStamp(0.748253795057);
    msg.setSource(38437U);
    msg.setSourceEntity(87U);
    msg.setDestination(58307U);
    msg.setDestinationEntity(105U);
    msg.formation_name.assign("PFQXVTLLKMAPVVXOXUWEOKMDBUNCWPVAEJKHGXOBYLSFCQAVRDWTISXRVBOOJOGDQNDEXMNGGFINMDNLBUJSPWHKDIZTJANFWUEDAXTSUMIAQPRHGYKCYJNVYLPJGZVSZCIVKOWNZSWCUHSPZDZTC");
    msg.reference_frame = 81U;
    msg.custom.assign("PKUMWCDNQSXMLOJHCBSVPHRFUBDGMJMUFRRTTIPJELXELXMPSUPDZQQTREQURKHEHFVACXCOXAUYKKMBCMQYHLYNBJQGUIDGDNQNTEZYQHODIFZIBZPZALXCLYAFSCAHNCACSWIRHMAJKBFDQWXVPFDOLWAWWORDTSGLFVFPVFVJTZTGDZEHXSIJYKWTCUNYYVIVTYSINNTNROOEVBNEVGBS");

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
    msg.setTimeStamp(0.691811376738);
    msg.setSource(46235U);
    msg.setSourceEntity(82U);
    msg.setDestination(880U);
    msg.setDestinationEntity(171U);
    msg.formation_name.assign("ZWJWFKSLWOXDVSOSNFCDEBAXVMIYIUPODKEPQSJTBBHVNIOOPQBJZEXXKHBNEJAQYNJNAIXIBQNIMRXMFVAVNKSCLEMMNFCWLYYTULKPKDYGIOHWPCJKDXBETGTLCEEVRQZLZOKUVRLPGHPMLVWCAWHCTPJXSQKVRUSY");
    msg.reference_frame = 88U;
    msg.custom.assign("LXWTNDRSYWMRZSYDFVDJGGWQYACXMBMZKAOSTURNKJUIXNQKCINCASLAMOOSLXUEBJPTAPBFODQHVIQUVALOLPWRPMKSQKYBGHKWPGEYVOZVUFRIXZZWPBUVVLDTVKAVTGOTAHJWJIYUQDSEFRUIACHZVTBODKPGSZFRKEIYGCLOUMNPFBSPGXFZRYNAITNWLHJGJMFHEEJFHXTCHQMRQEBEYWBLIUHBYLCIREZXGS");

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
    msg.setTimeStamp(0.50349030763);
    msg.setSource(29156U);
    msg.setSourceEntity(192U);
    msg.setDestination(32241U);
    msg.setDestinationEntity(127U);
    msg.formation_name.assign("XTIZJWYPDXHULNHYUCAICMCXBKQTXUICEYUINNDANQFMQFVTWISSOIIYWCVQJIJTWYRWRDCRZVLNEMMPZWBDGXLGNNHKMJZHHBPDZSQWCGCLKMJMTVHYKLVZKHOEETUQ");
    msg.reference_frame = 209U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31394U;
    tmp_msg_0.off_x = 0.0137263746537;
    tmp_msg_0.off_y = 0.678425034388;
    tmp_msg_0.off_z = 0.561460350116;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BHRGAZISIDDKRFJHOFKXNSNDWBZALQOBUSKRLCGIRMFJCVPHLJTJYBXQPWMNSBMVIAQFKLLKJPMPHTAONVEXBPSRPHWOMDQXHXMNRPVVZUXCTGFDQMEWYWEMCGTLEYGIQYWYUCUUTJXCFGV");

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
    msg.setTimeStamp(0.64913343466);
    msg.setSource(2853U);
    msg.setSourceEntity(35U);
    msg.setDestination(46454U);
    msg.setDestinationEntity(41U);
    msg.group_name.assign("NAKZDUDSJQQFRUEOKCZAQTMHVLJVBZXEXYIOYOWLLPCLCOUBLSDCKIXRGASZRYEQZNRAXBJZPMEADGTAWDLJRHICDSDOKNKEFTKCIHCYSMJRWFH");
    msg.formation_name.assign("EEIDTFQQBZPWNBKBVDQZUMJPHJJSPPPEEMJTLFALFWZSLLOXNXUGYZQXWQDDHQRAKKCLETICIQHZNVFPOXMMIEIOSNQGBMRTFAAGBTLFULJKAGVYTMWASPUZTYXYURBTGDMYAGQCONXFVNEUKHGMMUDGWYYNYBDXXMCCCLEODCVRRKGSIWNPRIWSWFNOCSDKUVHVXAHKZFOHUEZBSWJIZKNQRKZJIPXLTYBARSSRHVWHOJJOUY");
    msg.plan_id.assign("YNHEPTIRNECDYFUHPGCEKEMGUUXOYBILBBZCPSKVJZBANUREXVKLYWJABUDZJNFUOX");
    msg.description.assign("KYYTMPEBAMWS");
    msg.leader_speed = 0.58269421326;
    msg.leader_bank_lim = 0.925349965967;
    msg.pos_sim_err_lim = 0.808438084296;
    msg.pos_sim_err_wrn = 0.290212640036;
    msg.pos_sim_err_timeout = 19296U;
    msg.converg_max = 0.219426493227;
    msg.converg_timeout = 31232U;
    msg.comms_timeout = 4458U;
    msg.turb_lim = 0.520875619175;
    msg.custom.assign("IKURNOGJFMVCZPNRYCXKSVHFLPTPLFLWNIYEXBONPJNJRKNSLUQGXOKQCOLNIVNSUXMOLSCXQGDCODPMQKXBXZJK");

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
    msg.setTimeStamp(0.817277065092);
    msg.setSource(6413U);
    msg.setSourceEntity(128U);
    msg.setDestination(61656U);
    msg.setDestinationEntity(69U);
    msg.group_name.assign("PROOBQDHGBAHCKVZDWFPTUIWGOMCEGLFAEXBRAJMDHRCQKHLDBMAXRLNBRUMTFKOMSEGVNKOBCPK");
    msg.formation_name.assign("WDGOHRIOGVPLNTDXUNFOAYDBCULYTUCKLSGMLMVABPQXVHXYNKMRIJGMREVFNBJCYSDLFUFQDUPPASEYKSIEIKFCRHFGCCVKNKFUYEHRWHMEOYZVWPBTLDE");
    msg.plan_id.assign("XIKEIZGEZDQVLJGAOGPKHCIYLLPFLOOSTVXCXRQZBFSNEHQCUDMSQHABRMOQGVXUKZOZYSRCYAOSPNLTJQTMVPCEOLWWABFEXSNEXUZKUDBYFWZKSKPRHEYAMAPHQVNNOIYISRIMUBMCAUCJFACHJWINIMS");
    msg.description.assign("CFAUAFROGIRHDSXOWIVVGUAMBGDJFNOJRKIIIVJQSLLLJIHNPEJCNPUTYZKKIFXSDZTUGRWNAMJNMASSAQFRPBJWKQGMYCJPVMLQBOFTQWCIDHWPBNDGZYEKZLHTISZUUQQQOYPPUGZCTXOXEBKASPNMHXEYCBCJWVXRHY");
    msg.leader_speed = 0.213156236858;
    msg.leader_bank_lim = 0.11466948658;
    msg.pos_sim_err_lim = 0.460277720179;
    msg.pos_sim_err_wrn = 0.159469523503;
    msg.pos_sim_err_timeout = 21142U;
    msg.converg_max = 0.84815532338;
    msg.converg_timeout = 31204U;
    msg.comms_timeout = 21946U;
    msg.turb_lim = 0.466706530646;
    msg.custom.assign("UBBNNZSKRXCZQPUPJPVWRETEDDHNFXHIBHGCZFVTPYQHWGSNUUJODRDVGIUOVGBWDUWSQGZFSHYBTFIMRLJJOCBCTOORZWLEWJQAVWVTHKYFOHXMKNEPJDXCJYKDFAMAJPKZLPAQQLSZKXBVCNJMLSBWDTVFTILLAOEYMYMYCDEUQBRKYYSBONMWTHFI");

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
    msg.setTimeStamp(0.875625638404);
    msg.setSource(59100U);
    msg.setSourceEntity(177U);
    msg.setDestination(48719U);
    msg.setDestinationEntity(219U);
    msg.group_name.assign("QBMNUEDCCWKIBTPXYOFELJUHACKFBQCZXDNGGTWUZXRMJPLOTBHHJBDAETWJVFDKMOFKZLBXIWRITSODTNSNGESVJJLAZNP");
    msg.formation_name.assign("DFCUHGBMWUNDJBLOYPDPPUJJZFLYVCHGJXXWUMIFTGXCVTQGOCJQYMKLAEWFESULNLJYRNLYQVDPSRKOWCGUCGAIDQWI");
    msg.plan_id.assign("YVZXQFRFNEZBNMQGAZXBPJUBKOFKYZTVONQAJZYFPCGCJELRVHTFYHSVXMEKNXSMXSUGCWLCTDSUKWYCQQLDDVDCLLHEOBWNMPEURCOOZPBRFXPTGYTKBWMWDXTZMUVTKESKFYEFSALNAGRIFUSVRIDOBJWUZNMAOHICVLEOXPIGRBJHTKXYQRIGALDVKSKCHRPCEJQGIAWLRFWVHDWPMTNLWJIAOYYMHUJQNZPAETGSHQHSMBIQJZX");
    msg.description.assign("ALNOQBNAHUUWDZGYLZRNEOMKFUGZRBZMZVEQKUNDFBMDSPURWYCERPSWHRNLJPYCDZOQWMKOJFQXPDCOMVREQHLQJLTCXJPBXXFEAKJWMUHTHOGPPPICAZUTBQTYODJYULYMVKKHFVIGKFPRGMTC");
    msg.leader_speed = 0.0543767969778;
    msg.leader_bank_lim = 0.475514918681;
    msg.pos_sim_err_lim = 0.203727619014;
    msg.pos_sim_err_wrn = 0.959982060008;
    msg.pos_sim_err_timeout = 21782U;
    msg.converg_max = 0.592442511923;
    msg.converg_timeout = 41488U;
    msg.comms_timeout = 18171U;
    msg.turb_lim = 0.688182458209;
    msg.custom.assign("JHKCTNCVHGQXSDEULMDZVNVKMNLWEVWUUPWJUDNMYNHPPRSPOPYBIQFVMUWFYTNMEFBBEAAPNGFYJSPRKISKNLRQLAILZOIETSOYHGJYWRBVXXMZZZFASFWZQEITTDXDGECQRJAVBWQDACJCYHIQUCYLPFNCQCAIOMXUYDHKBMRABTDBEISXGRMQIJYKXZMSRJNBWOKCTLGGDXHROXSTAUK");

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
    msg.setTimeStamp(0.758988328025);
    msg.setSource(40644U);
    msg.setSourceEntity(61U);
    msg.setDestination(9909U);
    msg.setDestinationEntity(220U);
    msg.control_src = 41508U;
    msg.control_ent = 85U;
    msg.timeout = 0.410927775705;
    msg.loiter_radius = 0.702682368224;
    msg.altitude_interval = 0.94983005473;

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
    msg.setTimeStamp(0.18150957299);
    msg.setSource(30034U);
    msg.setSourceEntity(30U);
    msg.setDestination(16800U);
    msg.setDestinationEntity(29U);
    msg.control_src = 579U;
    msg.control_ent = 177U;
    msg.timeout = 0.941142133201;
    msg.loiter_radius = 0.391552666778;
    msg.altitude_interval = 0.307270441232;

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
    msg.setTimeStamp(0.19006366567);
    msg.setSource(45770U);
    msg.setSourceEntity(98U);
    msg.setDestination(9581U);
    msg.setDestinationEntity(53U);
    msg.control_src = 34332U;
    msg.control_ent = 17U;
    msg.timeout = 0.668791229479;
    msg.loiter_radius = 0.194927761437;
    msg.altitude_interval = 0.572550202057;

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
    msg.setTimeStamp(0.20356388994);
    msg.setSource(35189U);
    msg.setSourceEntity(182U);
    msg.setDestination(35821U);
    msg.setDestinationEntity(171U);
    msg.flags = 43U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.677533667548;
    tmp_msg_0.speed_units = 163U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.841333137172;
    tmp_msg_1.z_units = 140U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.317751558265;
    msg.lon = 0.205845055532;
    msg.radius = 0.708848759066;

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
    msg.setTimeStamp(0.99531927418);
    msg.setSource(16603U);
    msg.setSourceEntity(120U);
    msg.setDestination(7667U);
    msg.setDestinationEntity(78U);
    msg.flags = 74U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.509821619941;
    tmp_msg_0.speed_units = 92U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.372280930776;
    tmp_msg_1.z_units = 64U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.593770879383;
    msg.lon = 0.386044537044;
    msg.radius = 0.823885968425;

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
    msg.setTimeStamp(0.1783589715);
    msg.setSource(28243U);
    msg.setSourceEntity(90U);
    msg.setDestination(40210U);
    msg.setDestinationEntity(193U);
    msg.flags = 24U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.762040747737;
    tmp_msg_0.speed_units = 66U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.242176584043;
    tmp_msg_1.z_units = 117U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.366964805687;
    msg.lon = 0.491497477874;
    msg.radius = 0.780034867456;

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
    msg.setTimeStamp(0.514294902911);
    msg.setSource(11540U);
    msg.setSourceEntity(39U);
    msg.setDestination(36381U);
    msg.setDestinationEntity(236U);
    msg.control_src = 38848U;
    msg.control_ent = 45U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 20U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.160718053957;
    tmp_tmp_msg_0_0.speed_units = 57U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.429125121;
    tmp_tmp_msg_0_1.z_units = 72U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.980328020645;
    tmp_msg_0.lon = 0.25502937433;
    tmp_msg_0.radius = 0.192597675545;
    msg.reference.set(tmp_msg_0);
    msg.state = 94U;
    msg.proximity = 213U;

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
    msg.setTimeStamp(0.593137605608);
    msg.setSource(43498U);
    msg.setSourceEntity(201U);
    msg.setDestination(52284U);
    msg.setDestinationEntity(33U);
    msg.control_src = 9447U;
    msg.control_ent = 189U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 105U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.18830578005;
    tmp_tmp_msg_0_0.speed_units = 166U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.49984425862;
    tmp_tmp_msg_0_1.z_units = 25U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.529178103216;
    tmp_msg_0.lon = 0.754322984991;
    tmp_msg_0.radius = 0.289587733459;
    msg.reference.set(tmp_msg_0);
    msg.state = 192U;
    msg.proximity = 30U;

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
    msg.setTimeStamp(0.855596140736);
    msg.setSource(53773U);
    msg.setSourceEntity(171U);
    msg.setDestination(49337U);
    msg.setDestinationEntity(252U);
    msg.control_src = 59860U;
    msg.control_ent = 212U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 141U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.385359799095;
    tmp_tmp_msg_0_0.speed_units = 74U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0462156015057;
    tmp_tmp_msg_0_1.z_units = 103U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.20100705499;
    tmp_msg_0.lon = 0.753315559017;
    tmp_msg_0.radius = 0.593517562951;
    msg.reference.set(tmp_msg_0);
    msg.state = 129U;
    msg.proximity = 44U;

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
    msg.setTimeStamp(0.567647657424);
    msg.setSource(31414U);
    msg.setSourceEntity(182U);
    msg.setDestination(8225U);
    msg.setDestinationEntity(229U);
    msg.ax_cmd = 0.868988000115;
    msg.ay_cmd = 0.605726446002;
    msg.az_cmd = 0.064396457458;
    msg.ax_des = 0.854095246708;
    msg.ay_des = 0.226849309571;
    msg.az_des = 0.364099071865;
    msg.virt_err_x = 0.177320760231;
    msg.virt_err_y = 0.571777225638;
    msg.virt_err_z = 0.521225417239;
    msg.surf_fdbk_x = 0.0319167735079;
    msg.surf_fdbk_y = 0.21732915088;
    msg.surf_fdbk_z = 0.592533824253;
    msg.surf_unkn_x = 0.839376405688;
    msg.surf_unkn_y = 0.0645392862178;
    msg.surf_unkn_z = 0.263772353057;
    msg.ss_x = 0.526934004028;
    msg.ss_y = 0.0990992810494;
    msg.ss_z = 0.821947006451;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YGPVRMBKVDQCEKLBYLLXZWQRHSJYOEKUUHGHVIDATVPKTZCACNNBPMWJATKJALHVGCSDSIDORNZGYCRTKNOENZBUYGKAXXJUPCOVGINMZDLDYUENHCSJBOFWIKJXXENHVJRQTLFSUUFVUIIOFGZXBCMQOSBWWATMLUTFDFLAVDT");
    tmp_msg_0.dist = 0.252603937678;
    tmp_msg_0.err = 0.606733930655;
    tmp_msg_0.ctrl_imp = 0.351692683495;
    tmp_msg_0.rel_dir_x = 0.441252936676;
    tmp_msg_0.rel_dir_y = 0.00209136933482;
    tmp_msg_0.rel_dir_z = 0.0862386029462;
    tmp_msg_0.err_x = 0.590189351374;
    tmp_msg_0.err_y = 0.45434340915;
    tmp_msg_0.err_z = 0.410200456754;
    tmp_msg_0.rf_err_x = 0.61746472148;
    tmp_msg_0.rf_err_y = 0.894817082839;
    tmp_msg_0.rf_err_z = 0.701314413722;
    tmp_msg_0.rf_err_vx = 0.418233879727;
    tmp_msg_0.rf_err_vy = 0.546685466303;
    tmp_msg_0.rf_err_vz = 0.51440008361;
    tmp_msg_0.ss_x = 0.978321611199;
    tmp_msg_0.ss_y = 0.838342935251;
    tmp_msg_0.ss_z = 0.488838161013;
    tmp_msg_0.virt_err_x = 0.713105083798;
    tmp_msg_0.virt_err_y = 0.696832849499;
    tmp_msg_0.virt_err_z = 0.639824102051;
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
    msg.setTimeStamp(0.149792222703);
    msg.setSource(19393U);
    msg.setSourceEntity(229U);
    msg.setDestination(52146U);
    msg.setDestinationEntity(70U);
    msg.ax_cmd = 0.742528783645;
    msg.ay_cmd = 0.503197646526;
    msg.az_cmd = 0.545540906567;
    msg.ax_des = 0.83283700113;
    msg.ay_des = 0.945279281643;
    msg.az_des = 0.243052525933;
    msg.virt_err_x = 0.692912689072;
    msg.virt_err_y = 0.332676588074;
    msg.virt_err_z = 0.122663101451;
    msg.surf_fdbk_x = 0.551303819911;
    msg.surf_fdbk_y = 0.802822428643;
    msg.surf_fdbk_z = 0.043768307136;
    msg.surf_unkn_x = 0.407538969996;
    msg.surf_unkn_y = 0.83029167191;
    msg.surf_unkn_z = 0.377779063394;
    msg.ss_x = 0.416075137508;
    msg.ss_y = 0.339256223674;
    msg.ss_z = 0.775343718669;

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
    msg.setTimeStamp(0.273347894752);
    msg.setSource(53010U);
    msg.setSourceEntity(15U);
    msg.setDestination(50057U);
    msg.setDestinationEntity(244U);
    msg.ax_cmd = 0.0691679975122;
    msg.ay_cmd = 0.0446282308798;
    msg.az_cmd = 0.285011253449;
    msg.ax_des = 0.922173445261;
    msg.ay_des = 0.908838647025;
    msg.az_des = 0.231288744519;
    msg.virt_err_x = 0.0573936451846;
    msg.virt_err_y = 0.854794664146;
    msg.virt_err_z = 0.957672481693;
    msg.surf_fdbk_x = 0.967187926457;
    msg.surf_fdbk_y = 0.832447118521;
    msg.surf_fdbk_z = 0.844985187767;
    msg.surf_unkn_x = 0.992403942052;
    msg.surf_unkn_y = 0.802884662464;
    msg.surf_unkn_z = 0.982646579899;
    msg.ss_x = 0.1648274769;
    msg.ss_y = 0.630179483086;
    msg.ss_z = 0.297533718001;

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
    msg.setTimeStamp(0.597822107123);
    msg.setSource(58698U);
    msg.setSourceEntity(180U);
    msg.setDestination(34160U);
    msg.setDestinationEntity(213U);
    msg.s_id.assign("JCMAHMZYHBBANQRDZOUAIVHEPMGPJUKHXYPSDNLMSXYPXFULYUADWCQWOLMXTRDOSCNHWEBTUSPLTCBJUVZHZIJKWOIYROQONSKRMBQAAIGGGTRYUOMVWSGPWKZUALTVIMCLTFKDTILNZSQQEXIRFSPNVQXDWGZSLGRKATVQWHEIZXIPDEOJSDCCVDWZHNOFFNMOUNEBLMXRTPXHDBXJFBWEEJRTBQVFUYQGCGFJKYHBFKG");
    msg.dist = 0.145946433957;
    msg.err = 0.877116595435;
    msg.ctrl_imp = 0.13870439733;
    msg.rel_dir_x = 0.136631536036;
    msg.rel_dir_y = 0.290862440258;
    msg.rel_dir_z = 0.893134079166;
    msg.err_x = 0.475804115593;
    msg.err_y = 0.91744268401;
    msg.err_z = 0.730011115785;
    msg.rf_err_x = 0.501093471912;
    msg.rf_err_y = 0.470149239562;
    msg.rf_err_z = 0.500757000916;
    msg.rf_err_vx = 0.85173683711;
    msg.rf_err_vy = 0.00355920553634;
    msg.rf_err_vz = 0.726148901257;
    msg.ss_x = 0.929577307578;
    msg.ss_y = 0.435340099662;
    msg.ss_z = 0.186141373409;
    msg.virt_err_x = 0.207781246626;
    msg.virt_err_y = 0.640696429873;
    msg.virt_err_z = 0.251457092994;

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
    msg.setTimeStamp(0.813543544096);
    msg.setSource(5199U);
    msg.setSourceEntity(121U);
    msg.setDestination(24801U);
    msg.setDestinationEntity(214U);
    msg.s_id.assign("LRHHQJQLWOOVRPDCQNWMCCZETFNYFTEMUTESXGZUJORSPMBXCESNLSGXKPJUAWAGFTTKKOUIAHINRUDFVXPHHPHCDQWFYTYQNMVDD");
    msg.dist = 0.0198689609005;
    msg.err = 0.0306578428896;
    msg.ctrl_imp = 0.565802798814;
    msg.rel_dir_x = 0.58424813956;
    msg.rel_dir_y = 0.0246716560884;
    msg.rel_dir_z = 0.759794372424;
    msg.err_x = 0.552582569251;
    msg.err_y = 0.701222120155;
    msg.err_z = 0.370111049039;
    msg.rf_err_x = 0.522109091068;
    msg.rf_err_y = 0.240353299995;
    msg.rf_err_z = 0.819982223677;
    msg.rf_err_vx = 0.867312042831;
    msg.rf_err_vy = 0.765120888255;
    msg.rf_err_vz = 0.580810507092;
    msg.ss_x = 0.156579012294;
    msg.ss_y = 0.149583815381;
    msg.ss_z = 0.0369461349227;
    msg.virt_err_x = 0.999805308619;
    msg.virt_err_y = 0.752229381376;
    msg.virt_err_z = 0.533484954724;

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
    msg.setTimeStamp(0.287000436623);
    msg.setSource(54332U);
    msg.setSourceEntity(57U);
    msg.setDestination(22196U);
    msg.setDestinationEntity(74U);
    msg.s_id.assign("DWTXJDKHUSMRYIHTMUNANQBFJZDGSUFITOWJNDVTLRXNXYLIDADSPAEBGPMYWZRMNRIOCYKVHQDJYUCLDKKOZGVHFEYMOTQPZYGNIYVBFFRLLPCQSCEFBLMZJBPAAXYCVPIWEHJOJFRTCWUAXULHRKVTUXDMBSMH");
    msg.dist = 0.454262267766;
    msg.err = 0.219843293243;
    msg.ctrl_imp = 0.260870235894;
    msg.rel_dir_x = 0.0604154367293;
    msg.rel_dir_y = 0.0548530528172;
    msg.rel_dir_z = 0.587790931883;
    msg.err_x = 0.509245126995;
    msg.err_y = 0.713797041921;
    msg.err_z = 0.71045932665;
    msg.rf_err_x = 0.664320446932;
    msg.rf_err_y = 0.408286317741;
    msg.rf_err_z = 0.0407622916147;
    msg.rf_err_vx = 0.921102257459;
    msg.rf_err_vy = 0.242309610841;
    msg.rf_err_vz = 0.129840896166;
    msg.ss_x = 0.87169116841;
    msg.ss_y = 0.104740223157;
    msg.ss_z = 0.801440676112;
    msg.virt_err_x = 0.744204691975;
    msg.virt_err_y = 0.660604917712;
    msg.virt_err_z = 0.154784148351;

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
    msg.setTimeStamp(0.940928038606);
    msg.setSource(12379U);
    msg.setSourceEntity(26U);
    msg.setDestination(13172U);
    msg.setDestinationEntity(246U);
    msg.timeout = 47800U;
    msg.rpm = 0.14569401182;
    msg.direction = 11U;
    msg.custom.assign("JEDKEOPSIPMEMRHPOBFZDVCLTXZFPOLXSKQDURJULNIFRHORIJDVDSHAYJKBTMTWMDIKDFEENLPTLAAXZCSTHGVRFANHNVIISCUYJKGHIBPBUZTQXJYGVTSMZACDYCEWFXVVBEXXEKNOLNTXNSJHYOEAIRYNWIZASUCAUQLHUBYWEQFJZCWFRFLWKLOJPQKZQMVUONVMOBKJUOBPWTNUTSGZK");

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
    msg.setTimeStamp(0.817141963937);
    msg.setSource(45127U);
    msg.setSourceEntity(10U);
    msg.setDestination(21819U);
    msg.setDestinationEntity(163U);
    msg.timeout = 55907U;
    msg.rpm = 0.618558721657;
    msg.direction = 33U;
    msg.custom.assign("DXZQEHLXIQGRFHCSLOSLCQZCUPNVCPDEOXOWFPYGDNVESLTXENHEJBACCOM");

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
    msg.setTimeStamp(0.841221285063);
    msg.setSource(57653U);
    msg.setSourceEntity(89U);
    msg.setDestination(56687U);
    msg.setDestinationEntity(174U);
    msg.timeout = 4426U;
    msg.rpm = 0.10390569125;
    msg.direction = 195U;
    msg.custom.assign("XGSVNDEKORWOFRJHLXCCPQSGWHBTADZCNJPDBLKGMFJLMUKEZKMCBGOQOMQZPMLKVXZVYBHIGZMGFXBMCFOLFT");

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
    msg.setTimeStamp(0.978457328055);
    msg.setSource(25195U);
    msg.setSourceEntity(45U);
    msg.setDestination(36631U);
    msg.setDestinationEntity(195U);
    msg.formation_name.assign("ERJGYOADIVIHXZFYTOTSXBJMORWQSLBNVZEGUNOYPKKZPNMETSBKJJWVHYKQGEWCXQDBIPUCNGMHMVZIDMHXNZRFIJIXIUHJHVKQLCDOGWHBYPZSSZYEAVCZIXKTMFTBMNPFPAKVWPMS");
    msg.type = 113U;
    msg.op = 245U;
    msg.group_name.assign("IYVKJIGIOZSGYQAVWKYBRGSBCJHPUOMMWZZUQEAXZPPHDXKZWJRJXBXQPWUUDKANVNXXYAUMTRLOBCEYFGANXISFHKHTUDFJOJMFTCJPLMDCIRLRHSDFYSSHVZHRJISBKOJCDZKWONOLYUADICECQETPEMFFTQXZKMXDAQONMGQWVTNBNLGNZG");
    msg.plan_id.assign("UMFZBYKUPQNQCXUAXYYWTPVOPTXQYCMODJOHIHWXRBNLTSDAELWKZLQNAQGZGXWSTEZOWUDESKAVWGSKMGKYJWJPNGYKAIJVMKMRWPVSMBQIQJUHALAUFFOJLEMBHTRSJSOLMNEZKBFIPOYWUPQIRXDIZLCEPVAYWJSVFJMNMDNEOLHUCBGZTVPCTPCHRIJKHCADVCVCDBDR");
    msg.description.assign("NDUWPAKTZVTJNZJBFDUYTQGWFFZXFJCBLTPSSPKLBIPFOFTUDKXWACUHIGILBQLMTMUBFBSAMVGZUDVANWXKNGJOQCGIKGKOWXHSRMPHOPVAJYOLGAXYEUIKGMSHHSEKDNBJTRLRRTQELQSJEWQCDAXVOEZWDRQZUDBRAIVMLPNLNXJWVORFZTEEMBEEVUI");
    msg.reference_frame = 5U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18970U;
    tmp_msg_0.off_x = 0.0156890354767;
    tmp_msg_0.off_y = 0.886434956001;
    tmp_msg_0.off_z = 0.275685138726;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.520938396055;
    msg.leader_speed_min = 0.44641020738;
    msg.leader_speed_max = 0.81644329856;
    msg.leader_alt_min = 0.731228227772;
    msg.leader_alt_max = 0.655214534489;
    msg.pos_sim_err_lim = 0.835201084242;
    msg.pos_sim_err_wrn = 0.827720114685;
    msg.pos_sim_err_timeout = 35256U;
    msg.converg_max = 0.735506374325;
    msg.converg_timeout = 22078U;
    msg.comms_timeout = 31942U;
    msg.turb_lim = 0.826600786056;
    msg.custom.assign("KERHQTGJXKMJQENXEGPSDCWVAQIPOZVPWCZNCISFZOHHDUWPATLYFWPRZHQBKVZHDRJQBLRYGOVZKFQDVLG");

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
    msg.setTimeStamp(0.548571264691);
    msg.setSource(62490U);
    msg.setSourceEntity(93U);
    msg.setDestination(8073U);
    msg.setDestinationEntity(82U);
    msg.formation_name.assign("DMZPRZKPYAMUMBONSWBXJKBHLYMBUZYTDFXICTJNHZKWAJERDWEVLGTUTEIG");
    msg.type = 219U;
    msg.op = 88U;
    msg.group_name.assign("WAEWUYPFMDSOOGNQUIMYUYNGTJYDKWBBUXHSMSLQZOYOFIAKEUHRNZTMGERRCBUEIQCXOYWFPAMORLVTPSEKZRPCLIJQYWGTSYNCFFNMJQCPGEIXGFHHITWIXOCXHUHNZWBY");
    msg.plan_id.assign("EHKFREWJXACUZSGSOARAGYMRW");
    msg.description.assign("LKXFBWLPVOYHGVKPMHFJZWUUSXDDNZGSIHQKWTIJTYPIRQBJULIFRBGEJUGNCVHRCMXZDIAOESLQV");
    msg.reference_frame = 250U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33913U;
    tmp_msg_0.off_x = 0.122533744562;
    tmp_msg_0.off_y = 0.305512720436;
    tmp_msg_0.off_z = 0.603358715078;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.479050922876;
    msg.leader_speed_min = 0.682303433524;
    msg.leader_speed_max = 0.302901834644;
    msg.leader_alt_min = 0.912804496053;
    msg.leader_alt_max = 0.583331555869;
    msg.pos_sim_err_lim = 0.863228142276;
    msg.pos_sim_err_wrn = 0.168356361227;
    msg.pos_sim_err_timeout = 39771U;
    msg.converg_max = 0.969608679505;
    msg.converg_timeout = 14006U;
    msg.comms_timeout = 50229U;
    msg.turb_lim = 0.349543721849;
    msg.custom.assign("RGDEWFMEMRBBIQCMVHAJ");

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
    msg.setTimeStamp(0.860439905319);
    msg.setSource(14676U);
    msg.setSourceEntity(117U);
    msg.setDestination(35742U);
    msg.setDestinationEntity(69U);
    msg.formation_name.assign("YMMLJSYNPPUTWAXBGPKSLXCIWRWKTBXAXHPBNAWSSBAICCYJZFXOTJUDBYFCMLFRGT");
    msg.type = 196U;
    msg.op = 131U;
    msg.group_name.assign("LYKRFPHUVMHOJPGTWGIXYREFXQTUVFNALGBMXABPSLRBUJHTESRZQIBKPLSBZYBSHCLEEHKUBKIWNNPTPUYQNQGRTJIFGDAXQJLUNXOHGBEMDNZDVLEPAZDIDCKPONHDQIVNFSMDI");
    msg.plan_id.assign("OTNQUJAGNEVRXOZDNWCSBDMESGFULBBJGTDNEZLOEBNICQBTKFFJMYCZPVMOBKKRYLXSAYZHFTJSVVAAGDZTPESWHCXQPMHKMDXHBUVJB");
    msg.description.assign("ODOBMKZDKSMPNWYNELYMQPUYMTCCBIKDHJQKLBYEISOAVVBJOUGVRDENQZBGBRGHMSCWKOJIURGOWJZGFGLKJUTLRCICX");
    msg.reference_frame = 58U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1911U;
    tmp_msg_0.off_x = 0.40118015724;
    tmp_msg_0.off_y = 0.405302100841;
    tmp_msg_0.off_z = 0.786119847036;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0310672730421;
    msg.leader_speed_min = 0.0855471396113;
    msg.leader_speed_max = 0.238147547378;
    msg.leader_alt_min = 0.658255884117;
    msg.leader_alt_max = 0.274785725331;
    msg.pos_sim_err_lim = 0.939817987728;
    msg.pos_sim_err_wrn = 0.453526758679;
    msg.pos_sim_err_timeout = 42467U;
    msg.converg_max = 0.260307636065;
    msg.converg_timeout = 34671U;
    msg.comms_timeout = 61098U;
    msg.turb_lim = 0.375017180389;
    msg.custom.assign("ECHQZEKVPQNBYHBIJFNEDXCARDXHPVPTERZPFVDPQOQJJTJIEOKBGNLQLCUYCOMZRLMDBFZPGCKXTMYHWCBSYKTSATCEXBFBJNJWNVGMDQZUNUHEHRAJILQOALMAHFJTWOYBZSKOWVNJUEUDXHGPTIZDPIUKSSNGXMMYXYCVTLOTKYWYHLLVRIWDOSRRVQNGMXGSVTJUXSUPCLGMAFOWAQHDKEFUAFBZNRVZCGYQFW");

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
    msg.setTimeStamp(0.379749863568);
    msg.setSource(43048U);
    msg.setSourceEntity(111U);
    msg.setDestination(63559U);
    msg.setDestinationEntity(176U);
    msg.timeout = 33583U;
    msg.lat = 0.697264886874;
    msg.lon = 0.587519708598;
    msg.z = 0.353051284068;
    msg.z_units = 218U;
    msg.speed = 0.970468385721;
    msg.speed_units = 184U;
    msg.custom.assign("RIEYNZKVRFHEKMUENYCZNSJRHRDTCIXFRDEYGCBPCYSBZHFJDOTMJJSXABVCIMQUDTSIDZWYKREVOKLYWROABVLMNGKLRDWHDYCHRLTAVOUCGOEPVZSFIKMSPJAXJQHJPBZHNFKHBHQFQQJDZXHXAXWSPPXGQLWYYFVVWFMPLENQLPIWNJGIOTUUEIAU");

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
    msg.setTimeStamp(0.827147193521);
    msg.setSource(28582U);
    msg.setSourceEntity(172U);
    msg.setDestination(18499U);
    msg.setDestinationEntity(17U);
    msg.timeout = 59968U;
    msg.lat = 0.990724944955;
    msg.lon = 0.506502418956;
    msg.z = 0.262834578279;
    msg.z_units = 57U;
    msg.speed = 0.115829955203;
    msg.speed_units = 99U;
    msg.custom.assign("KQIJMKHCYVSNRDFMBEOXAVDWQXBFNRVBWPEKXLGQIHABQZKYBQCRCXIEGZFSXKHMIJJRPMNUXWISIGJSYHMYPCFXTEUWYGSRBCPYRQITSNUCMGOWAOZVTTPDPIRARURJNTNVMZNOTWSNQPLMLQCXHODMYJDQLF");

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
    msg.setTimeStamp(0.900372961336);
    msg.setSource(59013U);
    msg.setSourceEntity(111U);
    msg.setDestination(54795U);
    msg.setDestinationEntity(123U);
    msg.timeout = 22913U;
    msg.lat = 0.194624085618;
    msg.lon = 0.266072930104;
    msg.z = 0.90681531011;
    msg.z_units = 254U;
    msg.speed = 0.830218333102;
    msg.speed_units = 9U;
    msg.custom.assign("AICQBEBBXZFWXLUNZRZPNXCCVPSFUKBFJZMVVQMMIKVXWXZXNRHBTCGQRJRBHGHWDGIDPNVHXXQGDYDUYUCOZRFIAVATKWIKWLMCEWYJWKK");

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
    msg.setTimeStamp(0.163858196897);
    msg.setSource(9941U);
    msg.setSourceEntity(202U);
    msg.setDestination(889U);
    msg.setDestinationEntity(23U);
    msg.timeout = 38005U;
    msg.lat = 0.907098099541;
    msg.lon = 0.016126953675;
    msg.z = 0.361389179364;
    msg.z_units = 176U;
    msg.speed = 0.114978685023;
    msg.speed_units = 191U;
    msg.custom.assign("QLHQGYRIPKNNCEJZDOHXQUHFHNQDSKGEKOKLAYTFWPEUHAWBLOMZUKWRNNCKOFUZJADMIAJTASECRBLYIWTYSIOBBVGWWKXHDXHBVOLXRKPAJBTTFWCMXUINISGRJZEPKMJZICDUDYTJPAVQSFTS");

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
    msg.setTimeStamp(0.757411664939);
    msg.setSource(21857U);
    msg.setSourceEntity(63U);
    msg.setDestination(18753U);
    msg.setDestinationEntity(65U);
    msg.timeout = 5566U;
    msg.lat = 0.809322306124;
    msg.lon = 0.0841449795528;
    msg.z = 0.646341249833;
    msg.z_units = 152U;
    msg.speed = 0.827669086247;
    msg.speed_units = 26U;
    msg.custom.assign("RLQBZYLJHJFWMWQDTAMHUFTWMYULWOINFHGXKVLKEIOLDJSITQXCFPVOLBXPEWITNGSCVKKUDDEHZPARUYCZABSKECTNKTCXRPEBABMIWF");

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
    msg.setTimeStamp(0.618577672052);
    msg.setSource(4692U);
    msg.setSourceEntity(29U);
    msg.setDestination(61158U);
    msg.setDestinationEntity(110U);
    msg.timeout = 36044U;
    msg.lat = 0.98785317867;
    msg.lon = 0.655402627438;
    msg.z = 0.117702933813;
    msg.z_units = 75U;
    msg.speed = 0.636249003829;
    msg.speed_units = 83U;
    msg.custom.assign("ETSSLTFGAKLPQZW");

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
    msg.setTimeStamp(0.0555723209558);
    msg.setSource(50999U);
    msg.setSourceEntity(193U);
    msg.setDestination(40750U);
    msg.setDestinationEntity(75U);
    msg.arrival_time = 0.85742102099;
    msg.lat = 0.66611296699;
    msg.lon = 0.479651470508;
    msg.z = 0.11714656434;
    msg.z_units = 45U;
    msg.travel_z = 0.697773291957;
    msg.travel_z_units = 233U;
    msg.delayed = 128U;

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
    msg.setTimeStamp(0.880783730377);
    msg.setSource(57214U);
    msg.setSourceEntity(30U);
    msg.setDestination(14447U);
    msg.setDestinationEntity(243U);
    msg.arrival_time = 0.60203337;
    msg.lat = 0.487711907906;
    msg.lon = 0.525465134761;
    msg.z = 0.869642261001;
    msg.z_units = 34U;
    msg.travel_z = 0.0980241550634;
    msg.travel_z_units = 66U;
    msg.delayed = 91U;

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
    msg.setTimeStamp(0.877969886758);
    msg.setSource(11485U);
    msg.setSourceEntity(150U);
    msg.setDestination(23601U);
    msg.setDestinationEntity(3U);
    msg.arrival_time = 0.215325741875;
    msg.lat = 0.810026218649;
    msg.lon = 0.178185926718;
    msg.z = 0.0123499449372;
    msg.z_units = 7U;
    msg.travel_z = 0.462192711576;
    msg.travel_z_units = 46U;
    msg.delayed = 111U;

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
    msg.setTimeStamp(0.0245092416156);
    msg.setSource(29125U);
    msg.setSourceEntity(190U);
    msg.setDestination(38154U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.142389589406;
    msg.lon = 0.580694424424;
    msg.z = 0.455710655255;
    msg.z_units = 241U;
    msg.speed = 0.014095422676;
    msg.speed_units = 195U;
    msg.bearing = 0.120081285112;
    msg.cross_angle = 0.352899162672;
    msg.width = 0.478920767897;
    msg.length = 0.26972618108;
    msg.coff = 253U;
    msg.angaperture = 0.132971920935;
    msg.range = 6250U;
    msg.overlap = 194U;
    msg.flags = 223U;
    msg.custom.assign("CSGHMCLAGTSZIJBHUSDVGWJLACLMLTUAJBVRICTXOJZKSYNHKIETWTACFDNBSJIBNBZQIBKCGMOFVUDWMYNZBUFLOENKVSIJRNHSGQUMQHNRTNEHTPMKLQGPHYVVYRDPRQZHWZIELZZFWQCEQFJYFLPMXVOWODHPKPSXTEUBYKRYNEFJDOUFJWOXENQIUDYBAFCYRDBOFVXGGEEZIMHXZVYAVTQRWPGPQOAXUSXPXLPTAARCSMKJWK");

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
    msg.setTimeStamp(0.0567934834833);
    msg.setSource(31757U);
    msg.setSourceEntity(46U);
    msg.setDestination(56601U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.569438344495;
    msg.lon = 0.0395132759514;
    msg.z = 0.688025929308;
    msg.z_units = 26U;
    msg.speed = 0.533760230604;
    msg.speed_units = 231U;
    msg.bearing = 0.260704722973;
    msg.cross_angle = 0.646417932507;
    msg.width = 0.521984095282;
    msg.length = 0.448537618687;
    msg.coff = 49U;
    msg.angaperture = 0.027529154282;
    msg.range = 59878U;
    msg.overlap = 74U;
    msg.flags = 72U;
    msg.custom.assign("DTKODPOBUTLSRENNWIQJQRWFGGHKUVDYGTGMLYTLZXFHFOREXPWLHCILFXZVEZLIPIWWBHLNITNNLRXXVCXBNZFPHYUASOUEAQPRKDYBWZVNGOAJSIVPEWKBECNPOCJGFPGQQRZVZUYJJYILSDXUFINZVQQYYVXWHRTKEQAMXEMSKHEJQHIMSBMTWTMAWAGZUSDDFOMJFMD");

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
    msg.setTimeStamp(0.440077430021);
    msg.setSource(28711U);
    msg.setSourceEntity(154U);
    msg.setDestination(48640U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.183819297395;
    msg.lon = 0.516587018403;
    msg.z = 0.690048129086;
    msg.z_units = 217U;
    msg.speed = 0.170716335358;
    msg.speed_units = 22U;
    msg.bearing = 0.574405452791;
    msg.cross_angle = 0.417803188564;
    msg.width = 0.493143529683;
    msg.length = 0.254316386917;
    msg.coff = 86U;
    msg.angaperture = 0.842965796964;
    msg.range = 48751U;
    msg.overlap = 243U;
    msg.flags = 133U;
    msg.custom.assign("UVNBZLIRTIIJBVQEKLQYXVOSWPDJKATWWKIOJFJOLKJJTXYCTKWXFTVXUDRHKQFEMEUERWSARUSQMLUVDXRGPPVIGDLYQBESBLAJDBP");

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
    msg.setTimeStamp(0.596927711134);
    msg.setSource(60103U);
    msg.setSourceEntity(200U);
    msg.setDestination(22678U);
    msg.setDestinationEntity(49U);
    msg.timeout = 13653U;
    msg.lat = 0.607356577946;
    msg.lon = 0.891417749658;
    msg.z = 0.0408575367461;
    msg.z_units = 235U;
    msg.speed = 0.645363648201;
    msg.speed_units = 165U;
    msg.syringe0 = 179U;
    msg.syringe1 = 36U;
    msg.syringe2 = 8U;
    msg.custom.assign("HFHDSGNIYIYKDCUZMFYKIJTRUBWEGREZLAOBSPOQHYTULHBOFIJNTIRPMGPFNEVVRXKXKWHZZPAPJVOCOYGB");

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
    msg.setTimeStamp(0.469801859968);
    msg.setSource(35774U);
    msg.setSourceEntity(197U);
    msg.setDestination(27185U);
    msg.setDestinationEntity(78U);
    msg.timeout = 56126U;
    msg.lat = 0.246521254109;
    msg.lon = 0.817944309642;
    msg.z = 0.139871049659;
    msg.z_units = 185U;
    msg.speed = 0.942019580724;
    msg.speed_units = 252U;
    msg.syringe0 = 209U;
    msg.syringe1 = 34U;
    msg.syringe2 = 33U;
    msg.custom.assign("IPBFMVNIOEKYTMRPBFATNLNMGQYYIALUPCHFPHIRBGICHXOENROTYCSVNZTGILSTAZZBDSQCLCKTUOAJBMRIMJJMRDVUZEKTVEURQYTKFRDZAUFOCCJYAFPOPLWAILPEVYXRMKANVFRODMJWWEKEWNH");

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
    msg.setTimeStamp(0.199696565036);
    msg.setSource(26211U);
    msg.setSourceEntity(168U);
    msg.setDestination(15005U);
    msg.setDestinationEntity(40U);
    msg.timeout = 3209U;
    msg.lat = 0.529014423746;
    msg.lon = 0.777638316552;
    msg.z = 0.902960631367;
    msg.z_units = 136U;
    msg.speed = 0.536471862841;
    msg.speed_units = 95U;
    msg.syringe0 = 233U;
    msg.syringe1 = 39U;
    msg.syringe2 = 191U;
    msg.custom.assign("YOLLFRTYJLNOWTSKTWIDXJOYKKDXSAKZZSJQBQVMHQVXBEDNQGDXLHHKEVCPMXHNTYFWIAROQCJEIOIFTMTDDDUEZJZRJLYMCBAAKVYHSEBKRQBLSVNWRAZESJHLNMKCBWBFIYJGGMUEPHAMSDWO");

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
    msg.setTimeStamp(0.013027059719);
    msg.setSource(35372U);
    msg.setSourceEntity(7U);
    msg.setDestination(7308U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.398312508897);
    msg.setSource(9668U);
    msg.setSourceEntity(240U);
    msg.setDestination(64244U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.990468568381);
    msg.setSource(58808U);
    msg.setSourceEntity(121U);
    msg.setDestination(63307U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.633785542626);
    msg.setSource(10851U);
    msg.setSourceEntity(82U);
    msg.setDestination(52940U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.377246203584;
    msg.lon = 0.643464265589;
    msg.z = 0.787461310516;
    msg.z_units = 221U;
    msg.speed = 0.932441384911;
    msg.speed_units = 171U;
    msg.takeoff_pitch = 0.271435358382;
    msg.custom.assign("FEXEERJNNSCVCBXMJGWJVODSBJDJZZITALFQORBPVSWLASOSFBOKRAMIMTFYHCSOFWCGZBZZHWWYQOBPNMNKNWEZLUKJQZYJMYNLXQERXKRNNALQLGCPIQCUJLKMUYZUSIQKVIEWYHRXDJDWTCTGPOKHSCHKVILRTGXFAPPDEVAAVTBQMDFFLHVTIUYEMRPZUXHBOIYJRDDNCGQPPMEGYAIUCTFKKSD");

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
    msg.setTimeStamp(0.840389193379);
    msg.setSource(40874U);
    msg.setSourceEntity(142U);
    msg.setDestination(46241U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.703173423064;
    msg.lon = 0.450567214488;
    msg.z = 0.473590457358;
    msg.z_units = 130U;
    msg.speed = 0.278776295311;
    msg.speed_units = 29U;
    msg.takeoff_pitch = 0.586258595815;
    msg.custom.assign("UXSLLBCTBZWERLHUZENIRJECOQSORBRVUHNRHTRLLPVMG");

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
    msg.setTimeStamp(0.787423817105);
    msg.setSource(32276U);
    msg.setSourceEntity(124U);
    msg.setDestination(46466U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.672098584069;
    msg.lon = 0.956128109539;
    msg.z = 0.0490340754987;
    msg.z_units = 188U;
    msg.speed = 0.863097939934;
    msg.speed_units = 91U;
    msg.takeoff_pitch = 0.415458263773;
    msg.custom.assign("QXGDZNSRPTKGRUKAFUREUWYXIOJPEPXFZCJQMHKRWSIJRVKGHDOXIMGYNDTTBXTVDARQBRHGSEZOPSLBDLIEFIZPKNBCMIBCOIVSYZXLFEPVAYETIZWVWDAAHDCMAOGIAFFRWYFNCLHCKPQJTMONWQWGXVZGYUPXOEJYHJMCSHNNCFLUIXJVQFUJMBNFQZNMTLWSSCQDQ");

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
    msg.setTimeStamp(0.3379618541);
    msg.setSource(14364U);
    msg.setSourceEntity(150U);
    msg.setDestination(57583U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.431413732454;
    msg.lon = 0.820727673825;
    msg.z = 0.665547394807;
    msg.z_units = 140U;
    msg.speed = 0.572925135453;
    msg.speed_units = 134U;
    msg.abort_z = 0.79767415178;
    msg.bearing = 0.426249404555;
    msg.glide_slope = 208U;
    msg.glide_slope_alt = 0.360760783944;
    msg.custom.assign("RDKVONOUHJKLFSNNJAILXVFD");

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
    msg.setTimeStamp(0.485136481382);
    msg.setSource(5489U);
    msg.setSourceEntity(57U);
    msg.setDestination(64794U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.57828936755;
    msg.lon = 0.00981155754295;
    msg.z = 0.375728482508;
    msg.z_units = 27U;
    msg.speed = 0.292286084844;
    msg.speed_units = 196U;
    msg.abort_z = 0.435134628912;
    msg.bearing = 0.65525853621;
    msg.glide_slope = 240U;
    msg.glide_slope_alt = 0.0509333279545;
    msg.custom.assign("ELTWHCSWGHNHMZJK");

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
    msg.setTimeStamp(0.471076922409);
    msg.setSource(48170U);
    msg.setSourceEntity(216U);
    msg.setDestination(13746U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.421842691548;
    msg.lon = 0.781722402969;
    msg.z = 0.920808607293;
    msg.z_units = 60U;
    msg.speed = 0.399513587218;
    msg.speed_units = 13U;
    msg.abort_z = 0.0636213837113;
    msg.bearing = 0.959136176988;
    msg.glide_slope = 30U;
    msg.glide_slope_alt = 0.729526755482;
    msg.custom.assign("DTDOECNCFHPVQUEPEDGIBBHWTJMTLCGLQMZUGHNAUSVKLPWOVCHZLJXUXQYICUFEKNPIYTWNXWYJTCJKEVZKPWRLRXZWUGYWRMGSSDJXKSONUEKJFCSPBSGFMFASJPAZNIOIGDTYVAVFPYQKDUBOJRZBMHZRKPIXGSMIQOWHDTRVXWUMLABEQOMCGEYQLDVHLFQJZNHRCMEGMFHNPOXNVXBKLTYQRVUFDTIFEORSI");

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
    msg.setTimeStamp(0.808923310988);
    msg.setSource(32591U);
    msg.setSourceEntity(169U);
    msg.setDestination(51037U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.0241452715825;
    msg.lon = 0.637211296278;
    msg.speed = 0.693005304287;
    msg.speed_units = 83U;
    msg.limits = 138U;
    msg.max_depth = 0.331425647782;
    msg.min_alt = 0.0757697819188;
    msg.time_limit = 0.215851382476;
    msg.controller.assign("UQPRLMOZMIKUKPEGZUTSACNLSICPVPFRFENAJSQDTHJHYPUEXAEKNXQHBVCKBRZMTYOLUIDNIBSZSUMMWGKSCCBCRCKJNDFVTMJNFTAFOPRGVFTNAHWOKBSVMJMIDTVPYFLSGGAGXHTJBIGZCNYLLYPEZHDWZVQKYWRDFGAAHNAFBGTXBKGUWEUINXHCXAOOSZIXVFRWPRXJTLDLDIQX");
    msg.custom.assign("BCXKNTSYLXLZNOTMVYXCLGTRANTEJWBSWYCRJEIWPGTIXWWOANZOUISRAJOQVZPSFLKFVKBBXPQXIXDSPZKGHTSNMFGMBDNEGPYEIDQOPCTMKVPYNBZUECMQZFJSRGIEIMYOXBVEYAWDHMEDRMZUCMDFNVUJFDJRTLIAYCLAEPFYJQVXBULDGNOVUQVHNZUHRCRHFHALFYKXEKVCRWABFQSGDKQJWUIOZ");

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
    msg.setTimeStamp(0.0520356089599);
    msg.setSource(29016U);
    msg.setSourceEntity(4U);
    msg.setDestination(41803U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.328093472017;
    msg.lon = 0.734336100935;
    msg.speed = 0.58108950537;
    msg.speed_units = 242U;
    msg.limits = 142U;
    msg.max_depth = 0.0532631906445;
    msg.min_alt = 0.0689279143401;
    msg.time_limit = 0.546954440943;
    msg.controller.assign("IEOZGBRTGCZJFJHZIUWUBBIBUJKGOZVWIDAMVKYSNOVCCMHNCNGQNQLCAEKKCHUXWHFDHTQPMIIWHDMTOKMMOWAODIEYAJXPMUPLELXFNQZXBVTZORXIDPAGUJVTZXMCJWINNBUSHXGQXVYNKSYABWPGYREXBJZFTOSTQJXAPSMABETTPELFSARSODDUPJRUTZHGCVRNLEPLWUNR");
    msg.custom.assign("KQJAKIGTKRPOOVPXEGRNRLJBBXXGJVZFSLPHCWBDQTBPTBSLKGVNVWEDKPEKIYU");

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
    msg.setTimeStamp(0.418869102408);
    msg.setSource(49369U);
    msg.setSourceEntity(88U);
    msg.setDestination(50120U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.856952037666;
    msg.lon = 0.883146539951;
    msg.speed = 0.357162422931;
    msg.speed_units = 161U;
    msg.limits = 87U;
    msg.max_depth = 0.771671812754;
    msg.min_alt = 0.808485474506;
    msg.time_limit = 0.0291007467268;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.607692770394;
    tmp_msg_0.lon = 0.0878241371201;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("EHIQZYEOSLNMXKVRVWDTADMFQHFERELEXYSGABYQGKYDGMUWRVXVFSNYMOGQKIWIGCIPBKDCUXPWPQSDCIDNBTJCUKUUIHZXJNWFLKVQN");
    msg.custom.assign("MHQPKLBJRUDNODAXMQWHNUYCMKSEYXYRFXQOCPQUMUFDZOGWHLFCSIEKKGVIWMZQWIJVHTPLUZKGWTFKAGKZASRRCPBAWDWFQLIVSNSQTRFAFJEYAFRDICUBHLBHOHFTMOCLUBOREEVCSHNEYEMENHQGYXJNTYXYXENAIXTJDFIZWLBGOHPYJMXJOMAYERGCASXLTOZBDSLJVZIJDKAVN");

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
    msg.setTimeStamp(0.903416373589);
    msg.setSource(38198U);
    msg.setSourceEntity(166U);
    msg.setDestination(2639U);
    msg.setDestinationEntity(166U);
    msg.target.assign("QJWXWRRVNZLMSHFLVFBSLBRZTWWPTS");
    msg.max_speed = 0.370815021961;
    msg.speed_units = 233U;
    msg.lat = 0.602907796238;
    msg.lon = 0.454736123042;
    msg.z = 0.33927606298;
    msg.z_units = 82U;
    msg.custom.assign("CAJLFFCQXHPUCVWIYGMWWZULSJQESVTCZPHSKMORTWMTYRSHIXEAZLBLKWDHJSUOXJCNFSKYMQBLVQCYD");

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
    msg.setTimeStamp(0.0988039691726);
    msg.setSource(5835U);
    msg.setSourceEntity(35U);
    msg.setDestination(49643U);
    msg.setDestinationEntity(214U);
    msg.target.assign("CYAPAERSMOMEITBGOJHAJGXGIXBNDOOITWYILFDLKCLBYQOTUBMETPRTXHIQIJGXXHZOLUZFCOQNMEQONFCSEZOLYGVWHBGJJGEXPKZASCZHMHUPKZW");
    msg.max_speed = 0.292141866141;
    msg.speed_units = 18U;
    msg.lat = 0.809443008652;
    msg.lon = 0.716957764547;
    msg.z = 0.224550722149;
    msg.z_units = 245U;
    msg.custom.assign("YNUUOBGYKGIQHFHKJZFFILJIOEMBADBGMTNADVKRDXUHLJHAISMVCYNGLIFMTIQDOZJUUYXLGPLQEYGTSRBQIUWWEJVGRUJFOMTWVQMQLYYKGFHBSDZDXWZVFOCYTOZCWBRDKSIWAHWQRJZFPXCRHQP");

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
    msg.setTimeStamp(0.933757539442);
    msg.setSource(58404U);
    msg.setSourceEntity(219U);
    msg.setDestination(61106U);
    msg.setDestinationEntity(241U);
    msg.target.assign("JUDFNTRPIFSISGEPOZVQZVAAQWCAUZIHFMJYKEVWDYEIRRMODQQHHIKPMZRTYCEVBGHLKOCWKCRVQPGBN");
    msg.max_speed = 0.748708982965;
    msg.speed_units = 10U;
    msg.lat = 0.877413572055;
    msg.lon = 0.393715904795;
    msg.z = 0.515170533059;
    msg.z_units = 235U;
    msg.custom.assign("BXZVFGNKUDLYMZKPPPNKIAL");

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
    msg.setTimeStamp(0.103564657923);
    msg.setSource(48690U);
    msg.setSourceEntity(167U);
    msg.setDestination(5538U);
    msg.setDestinationEntity(103U);
    msg.timeout = 36837U;
    msg.lat = 0.111788820886;
    msg.lon = 0.888303870112;
    msg.speed = 0.287915126347;
    msg.speed_units = 39U;
    msg.custom.assign("GXAHSXCICCTEZHYWGBWHGSIUDJJZUYYUOQGVBDOOEJXP");

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
    msg.setTimeStamp(0.441575081227);
    msg.setSource(8068U);
    msg.setSourceEntity(26U);
    msg.setDestination(48507U);
    msg.setDestinationEntity(198U);
    msg.timeout = 49945U;
    msg.lat = 0.973831541853;
    msg.lon = 0.760063010418;
    msg.speed = 0.731747484887;
    msg.speed_units = 20U;
    msg.custom.assign("NPSASRCTTIBQJVS");

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
    msg.setTimeStamp(0.515163351514);
    msg.setSource(21636U);
    msg.setSourceEntity(210U);
    msg.setDestination(16182U);
    msg.setDestinationEntity(56U);
    msg.timeout = 32490U;
    msg.lat = 0.144117422015;
    msg.lon = 0.103916512542;
    msg.speed = 0.977166756837;
    msg.speed_units = 46U;
    msg.custom.assign("ZQICIIODJADKWOBZJDUGLOQPARWKGUKLJKSQHFRGYQYWOPZYDXQEHJERJXBXSBHJQNUPXDCTKYMFBVNYKMSISUUCMGUCDWMHRJKYODREBCUNZEYKFWHZLNFNNAOVIVRVEAXMNXLHTTGGBVIYZTEBDOLTXRFWZPVITLDCCJEPQ");

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
    msg.setTimeStamp(0.5529213794);
    msg.setSource(13465U);
    msg.setSourceEntity(96U);
    msg.setDestination(59295U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.826791067979;
    msg.lon = 0.373939226188;
    msg.z = 0.919234496039;
    msg.z_units = 80U;
    msg.radius = 0.0337193469404;
    msg.duration = 20049U;
    msg.speed = 0.74650584227;
    msg.speed_units = 204U;
    msg.popup_period = 34830U;
    msg.popup_duration = 46633U;
    msg.flags = 112U;
    msg.custom.assign("GJOMKHFUWROJZCIDKDJIZHLVINXOSGOHZUXPYJOPSMYFQBZQYKRXQRMVLIHMBUXSRDTQNESCGAKDWJTTXBKMFTKYOHVLLCDONWFYKHFXPELNYBHJWCZEAGHUBTCIAQPTUUAMDGVKTRFYUZEOKYLLMGYGMTTNJAENLCRHAPSBSIZFFVWXNWTRSASBPBZARQJQEVLAOACNXVJEVIZYDCCRPCDWUGXGHSXU");

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
    msg.setTimeStamp(0.709934981535);
    msg.setSource(11152U);
    msg.setSourceEntity(222U);
    msg.setDestination(29293U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.938002979896;
    msg.lon = 0.0550521042502;
    msg.z = 0.971195385389;
    msg.z_units = 181U;
    msg.radius = 0.0618814463421;
    msg.duration = 56449U;
    msg.speed = 0.854076158606;
    msg.speed_units = 204U;
    msg.popup_period = 26957U;
    msg.popup_duration = 9100U;
    msg.flags = 143U;
    msg.custom.assign("MISQYWBLRBFLRZEEHWAPXVONZLQFPKSSXFJZWFEWAGGUWYJKHGBEMKZRSIONVHHGPURHHHZEDC");

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
    msg.setTimeStamp(0.0037658059498);
    msg.setSource(15109U);
    msg.setSourceEntity(106U);
    msg.setDestination(6626U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.230248210381;
    msg.lon = 0.116834481424;
    msg.z = 0.747490952801;
    msg.z_units = 69U;
    msg.radius = 0.670506990437;
    msg.duration = 32910U;
    msg.speed = 0.4885305574;
    msg.speed_units = 208U;
    msg.popup_period = 45587U;
    msg.popup_duration = 39088U;
    msg.flags = 28U;
    msg.custom.assign("UVXPFMMFTVIJWEDWOXKBRSENHUZFZUSZCFJVENWPTHKFEERKLWMXLRUMJQCQROXAHGBKOQWOEKOEXATMLDYIUIXUILCLWTQNMYHPYAPYBWAFXBBKHVD");

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
    msg.setTimeStamp(0.162345234941);
    msg.setSource(26079U);
    msg.setSourceEntity(25U);
    msg.setDestination(21611U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.560492633287);
    msg.setSource(54857U);
    msg.setSourceEntity(253U);
    msg.setDestination(5995U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.281635860436);
    msg.setSource(58526U);
    msg.setSourceEntity(153U);
    msg.setDestination(45111U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.902640231262);
    msg.setSource(48365U);
    msg.setSourceEntity(250U);
    msg.setDestination(2877U);
    msg.setDestinationEntity(48U);
    msg.timeout = 52703U;
    msg.lat = 0.699147727423;
    msg.lon = 0.456876336543;
    msg.z = 0.301808426845;
    msg.z_units = 25U;
    msg.speed = 0.351556760358;
    msg.speed_units = 72U;
    msg.bearing = 0.318347835465;
    msg.width = 0.730806818044;
    msg.direction = 29U;
    msg.custom.assign("PFSEXDNDYKBVQNISJZSMYIMTTAQLCSVZQMFRTKJUMDIYKWNBFBHNNSJZJCADWBXNIPVSFDRURWQPFNCHLAURCWZQPHLOJGVVMLRJRTEOTHPOPYGMZDAAWSMOONPVLWFCHUOXLKZFSKQGWMENEAPEBUYZXQIVQIUZCCGSKBAHCEKHJEULIKXVGVRSRTJEPZYOGHOKMMTYLUYTFQXLIERI");

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
    msg.setTimeStamp(0.353147336349);
    msg.setSource(43575U);
    msg.setSourceEntity(157U);
    msg.setDestination(13685U);
    msg.setDestinationEntity(108U);
    msg.timeout = 41803U;
    msg.lat = 0.75711844152;
    msg.lon = 0.905139792407;
    msg.z = 0.679422749235;
    msg.z_units = 176U;
    msg.speed = 0.424325605627;
    msg.speed_units = 53U;
    msg.bearing = 0.709979407834;
    msg.width = 0.0988453598697;
    msg.direction = 45U;
    msg.custom.assign("DVEIIWNXCOMPLDZKXGIOVCAEMYFBTCNFUAPFMQOPVBJCAWHEQOJWUYDQSENTZYLBENRAYWKUYMZDPNSRBNFETVKWZSLAMRSGNFTOSVKJOVNABFBMXESPQODHJIMWPOC");

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
    msg.setTimeStamp(0.852943664131);
    msg.setSource(24202U);
    msg.setSourceEntity(50U);
    msg.setDestination(27680U);
    msg.setDestinationEntity(102U);
    msg.timeout = 47018U;
    msg.lat = 0.778326824136;
    msg.lon = 0.991465536398;
    msg.z = 0.376872317573;
    msg.z_units = 136U;
    msg.speed = 0.557858676851;
    msg.speed_units = 44U;
    msg.bearing = 0.843014369592;
    msg.width = 0.150576638558;
    msg.direction = 43U;
    msg.custom.assign("OEAMBATFIRFZRJTTWZSRQVJXZCPFHUYDGHNQJVLFMLCDCXTWZPJIXZ");

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
    msg.setTimeStamp(0.203536852698);
    msg.setSource(8175U);
    msg.setSourceEntity(235U);
    msg.setDestination(8375U);
    msg.setDestinationEntity(246U);
    msg.op_mode = 250U;
    msg.error_count = 2U;
    msg.error_ents.assign("JLNGNSHGCVAKRVZQFKAIWBDGLWYCPM");
    msg.maneuver_type = 49250U;
    msg.maneuver_stime = 0.54944392842;
    msg.maneuver_eta = 23926U;
    msg.control_loops = 1974299075U;
    msg.flags = 192U;
    msg.last_error.assign("BVTYDDYJHTYRIKVVMPBAWEKNG");
    msg.last_error_time = 0.319922032778;

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
    msg.setTimeStamp(0.0060126757044);
    msg.setSource(26573U);
    msg.setSourceEntity(59U);
    msg.setDestination(54853U);
    msg.setDestinationEntity(171U);
    msg.op_mode = 43U;
    msg.error_count = 147U;
    msg.error_ents.assign("DBQQOVTEHRVEJYWPTRRQAGZUZAUPXNNWMZPOQOHIMSKESOLDGRAHNZGMFUWVABCMJZVXMHPICILQOVGXCLTVXVKKZNKDEBQQUEXKPAVSCRLNSRWXFCNOYREASLUDAZCXYW");
    msg.maneuver_type = 812U;
    msg.maneuver_stime = 0.272567746157;
    msg.maneuver_eta = 37000U;
    msg.control_loops = 114069185U;
    msg.flags = 42U;
    msg.last_error.assign("TRRJHCOOFDJUIVCDKPLXKMFKNVZGVQUDVQNUIGOIFWMONNDDISVORLNMYIDETBWJTMXJHJPAMEBBZXRDAHSPHILCYMFROLZIDTCXKOCBEYZSAAIGWTCFHQZWQKPTQVSYJYWLPWONQAEXCUQLZMDLWNHSJYKSRPUWMEHRUAZXYZCQJASHEFNDYQHROMXSUGK");
    msg.last_error_time = 0.634499548348;

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
    msg.setTimeStamp(0.352017398437);
    msg.setSource(39274U);
    msg.setSourceEntity(19U);
    msg.setDestination(40380U);
    msg.setDestinationEntity(204U);
    msg.op_mode = 156U;
    msg.error_count = 96U;
    msg.error_ents.assign("AQRSPZKBWVHQKVAHDNXZBXHFOVNULUPKSFXBUJX");
    msg.maneuver_type = 47446U;
    msg.maneuver_stime = 0.226932176981;
    msg.maneuver_eta = 58517U;
    msg.control_loops = 2749486477U;
    msg.flags = 74U;
    msg.last_error.assign("BBJYHUFGHVNWIKVQBKMSBBSVPTCJLDKFZNCBMMGVEKXNOVSXDCTOSMAELWJWPHNZILIZZAANU");
    msg.last_error_time = 0.738590814899;

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
    msg.setTimeStamp(0.962966488025);
    msg.setSource(2780U);
    msg.setSourceEntity(194U);
    msg.setDestination(21816U);
    msg.setDestinationEntity(183U);
    msg.type = 148U;
    msg.request_id = 7714U;
    msg.command = 105U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.176445787635;
    tmp_msg_0.lon = 0.634295532233;
    tmp_msg_0.z = 0.659262411;
    tmp_msg_0.z_units = 88U;
    tmp_msg_0.radius = 0.305994663622;
    tmp_msg_0.duration = 49574U;
    tmp_msg_0.speed = 0.768844061918;
    tmp_msg_0.speed_units = 16U;
    tmp_msg_0.custom.assign("HIDGXNIVPXUMUROGQWPJPXYMLWTQXQHTPBSXGUGRBHZMPTTORSGPAYZFOBEWBJCDVVYZQSVFKXVQDCNGDJBOXCNFDBVSQRWIDWFVAAOMEEANELCCKESYBUUDMCNFEAYAMFSUMUTJRZNBXKIOHWNLRVJZZUWAAEKCHYCTSZNLOYFZFIJLXNPMZRYHGISRLGGBKQLWTIQATOSPDCDIHHTPYYHFGKJAHSOILFKKRLEUJOVMWRKCVJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44318U;
    msg.info.assign("EWGWUNHEQUIAGSQZJJKMTMQEZDOAVIMZILZUKCHOLTBPYQ");

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
    msg.setTimeStamp(0.693936718743);
    msg.setSource(14878U);
    msg.setSourceEntity(56U);
    msg.setDestination(640U);
    msg.setDestinationEntity(137U);
    msg.type = 98U;
    msg.request_id = 29413U;
    msg.command = 182U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 62853U;
    tmp_msg_0.lat = 0.557152811307;
    tmp_msg_0.lon = 0.985213716706;
    tmp_msg_0.z = 0.356232724677;
    tmp_msg_0.z_units = 26U;
    tmp_msg_0.speed = 0.269973983758;
    tmp_msg_0.speed_units = 153U;
    tmp_msg_0.custom.assign("PUUFFMIUNQFCNZJETQKYMXLNCRDKWZLQNAXQORLQIOWECIYEACOBGGXUJSSTLULOVYGVBTIUMBFHMNWYEKDIJQSLDKFLZQSBEEENYWDFWSIFXRVHOFKXWPVGWTSDJARBQAAGHQAAJYMJBXSHHDBXXEKULHRPYVOHHYQLVRBAAZPCGCTGCRKDJZLORUIWIUTTRWOPGGCD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 48903U;
    msg.info.assign("DFYDKLFWJNJXPFMADTPXIEJHRNGLJNSGOIAACDLCYMGSUHFYSCVYBLEPVRNMDYESMBHNCUFLBWUKRUESJXZBWSMBUZOCTIIOCQKHNXPVDCHBRNJEQLQXYBVBDVYZVAZPIZAHFRKUNVSRXAFAGHWQMEQIVZOIOGPQUSRKZAFWLXDFIROWDWYTWOOULMSHPANXDEQICARTFTXGBTJTMQRUKK");

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
    msg.setTimeStamp(0.915556466665);
    msg.setSource(45953U);
    msg.setSourceEntity(20U);
    msg.setDestination(12295U);
    msg.setDestinationEntity(75U);
    msg.type = 197U;
    msg.request_id = 13410U;
    msg.command = 152U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 30759U;
    tmp_msg_0.lat = 0.641870021043;
    tmp_msg_0.lon = 0.483886092187;
    tmp_msg_0.z = 0.9830419943;
    tmp_msg_0.z_units = 75U;
    tmp_msg_0.amplitude = 0.510244621054;
    tmp_msg_0.pitch = 0.344196929174;
    tmp_msg_0.speed = 0.96151643866;
    tmp_msg_0.speed_units = 14U;
    tmp_msg_0.custom.assign("FWXDBTZCYHHFPDDHNQQEJZBKASUJGTKBVLBRUYXVBMWLGZGPUGOSLUBQCVXIUGOHEYCNUXMRXZXBNFGENCFWANKVNPSF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6614U;
    msg.info.assign("ETWSUXNNCDJYYEZIZGOJHREBEPIGSMWCYKFBFIARNXJLARBUFJCQGLUBVDOPWLJAMHZIYGHREYVYUZPVUFRILTSKZMXQQTDELJXWBRZHGGWAAWIGOAYPLEFWKXSVRTVVOHODZOHALMJPRKIYKPDHF");

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
    msg.setTimeStamp(0.866435603002);
    msg.setSource(3592U);
    msg.setSourceEntity(131U);
    msg.setDestination(28033U);
    msg.setDestinationEntity(135U);
    msg.command = 35U;
    msg.entities.assign("YTVWQEMFXOCWZNEKMEMWEGVPRLIEANKCLSIFQLJFOBATXCJNPLSMCDDPXJYYTAHNMCOSHFHAVPSJVUDTUQFJHIAEWDTGCPOGWBWJYIKJQXTYETZRHROQVSDFKBBKRZFYENNNPXJXUIVBOQLIWBCQLASCRPYDCDNUKRUHENHVHDMGKOPOAXDSFHUFHQKYFMG");

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
    msg.setTimeStamp(0.53508162243);
    msg.setSource(41483U);
    msg.setSourceEntity(103U);
    msg.setDestination(54016U);
    msg.setDestinationEntity(62U);
    msg.command = 238U;
    msg.entities.assign("QEIZRJEQQNIALZNENCNYYMSOPHMTIQAUIIUZSOPKDJZSCYZEGXTCDETKIGQOPDVVXKZRCGYWFLKMBSCBWZUQZJLNXARKADXFGJTRXYCCQXWVKJCTWLTMGOAHOMQTIKRJVHYUKJNNIUFGOTFEWHALJUPWJVGEWBPOLWEO");

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
    msg.setTimeStamp(0.349428303025);
    msg.setSource(60413U);
    msg.setSourceEntity(60U);
    msg.setDestination(26031U);
    msg.setDestinationEntity(254U);
    msg.command = 242U;
    msg.entities.assign("CVFAEYGOKACMXVQIAJVWBFELUXBHFDHSYNVCNGQEBTPNOHVOSWBDZSWCFRJPEUO");

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
    msg.setTimeStamp(0.422675881147);
    msg.setSource(62281U);
    msg.setSourceEntity(225U);
    msg.setDestination(38872U);
    msg.setDestinationEntity(93U);
    msg.mcount = 72U;
    msg.mnames.assign("OZQEYQZKDHYDGSACUCTNG");
    msg.ecount = 179U;
    msg.enames.assign("UPCRLBLDKZDMZYEGWYRNCWXBEXEXCCOLYLKVAQFTZOOAUUMJORJSWQKSCRHXJPAFMDXBMKTWXYWGHJHECFRKYTJVVUJYHGHNGZFFDHPBTPNASIAKTMEVZSNABURNEVIAEBYFLLP");
    msg.ccount = 31U;
    msg.cnames.assign("HPLTLTKSADSQNLYBRJEQOMHWY");
    msg.last_error.assign("CICOTFYBZRZVNWSFTSSXPVKSFJD");
    msg.last_error_time = 0.60434804265;

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
    msg.setTimeStamp(0.68187018451);
    msg.setSource(8656U);
    msg.setSourceEntity(45U);
    msg.setDestination(58346U);
    msg.setDestinationEntity(91U);
    msg.mcount = 6U;
    msg.mnames.assign("MFYGPIMAGPNZWESHCLCWMNOPPSWCQNHQRBHSTXVEVDSMHNHXDSAGZNZZBFVBTBFZUHQFAFQTYJLCVBTGKHYAAXMMXOCCSNFOOJLDXRPEENEPJVPFRWTGZBKSZYJXERZBSPPIULCNQFYLJAKTNATKBNXITEDYYIMUWUIJALIQCUPXZWMIXRQKSWYIEMRMDLVOVGYDIKKEVFDHWGDJUVXLBRQRLOCKOLADGBWUUOTUFAHKWJGKI");
    msg.ecount = 247U;
    msg.enames.assign("VZABVQFIWOADYPBHAZZXKWRYZTERTKPJQAXODOKPENRUCSLAELPLUBRFGKDLZEUPEZFMDXCVPSYPMWBSTUDEQHCSAFMBFRQITQWNVHYZEYHVGBVWEULILGNFFMIZUWGMPLBTAAXYLICHXDXYDTCSCGCKCG");
    msg.ccount = 67U;
    msg.cnames.assign("GKNXIYHGMESPLESPWHGZXZCIKATFRATDFUAQBYWBUEODODOCDRAMBSIDUJOMUR");
    msg.last_error.assign("QJQPWNUYFMWJHLCJRAWSSPEEOLMZAATZQGIUEWDNXYPDSVYWGCZYXONMYKNHYJBICRZEIIJGOBLRTKHXMCHKTVNJERYFEVWUPCIQUOBOAFKDUAMVLSZEGRUXILPQHHAUENKFMGICKQPLXTAFSLKPBUPOKBSDRZHSOQAICDWHGQBCVVBRKYVYTYIOBAUJHJBVSQTZNPXQUDZBSLJXPTXREGXMKZEFDMRJWVSCF");
    msg.last_error_time = 0.750464331047;

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
    msg.setTimeStamp(0.479457234671);
    msg.setSource(51485U);
    msg.setSourceEntity(59U);
    msg.setDestination(26378U);
    msg.setDestinationEntity(76U);
    msg.mcount = 120U;
    msg.mnames.assign("MAXOHGGSVAQNMIAYXWWAEUYOONCAXOHDXLZSJWVGDZRJALCRAIKJZHCCISRPUKSVDLWDPIMPHKZULFKPDGSBFWWEEGYNRYYOBITQJMGTXMJEUNCNMGTMFFVGKZMSEPVXNLKCDIEQONURVOWZQPKCXLJXYTFFBCVBBSUHJGYXTJVPDARVEZTUIBHQIBZKJPROHKHIOJTMLAWLRTAIPNUEZFLBSERPTQNMSDQCCTWFKEHYHBQNY");
    msg.ecount = 116U;
    msg.enames.assign("RPIXQXOXWOTNDXPDUFUJLNMJOTKYGMWLDHBXZUBQVTSPDHBEIJHIPASGWPSWODQCQKVFZGGFHCEJBNMJOVFPAIN");
    msg.ccount = 79U;
    msg.cnames.assign("DBKPJGVFPRWAXLMBENMQLPJM");
    msg.last_error.assign("XLUNQNOBSTVSVJAKZXRQWNKZUCDTYKKSYJBSGHEKDPZEFEYRTSLLVOXQQMMXXUULCWHZMXBXUHDGYSIDTHKFTJIIFDKMGRVPTVZUICHKERUKBDUPVGPBMNTABJVOSJRYJGWDSAFMUWXEAWIIKUNWNQHDIGTNZOENAPPZYRQPFQMVYXDARCOJBXLQHVPBHYBCAQLAHZFOEMSCWOGFNSPIFYOWIOCR");
    msg.last_error_time = 0.803601536212;

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
    msg.setTimeStamp(0.498706667406);
    msg.setSource(34752U);
    msg.setSourceEntity(179U);
    msg.setDestination(41831U);
    msg.setDestinationEntity(0U);
    msg.mask = 146U;
    msg.max_depth = 0.470393622516;
    msg.min_altitude = 0.277914050106;
    msg.max_altitude = 0.659680574818;
    msg.min_speed = 0.852988938487;
    msg.max_speed = 0.214233068421;
    msg.max_vrate = 0.521387942331;
    msg.lat = 0.391215717915;
    msg.lon = 0.0665471568443;
    msg.orientation = 0.157433544269;
    msg.width = 0.51123444401;
    msg.length = 0.808387186875;

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
    msg.setTimeStamp(0.443141786785);
    msg.setSource(62798U);
    msg.setSourceEntity(219U);
    msg.setDestination(53932U);
    msg.setDestinationEntity(58U);
    msg.mask = 182U;
    msg.max_depth = 0.758714630267;
    msg.min_altitude = 0.519663493284;
    msg.max_altitude = 0.502051545711;
    msg.min_speed = 0.376895289291;
    msg.max_speed = 0.481767429708;
    msg.max_vrate = 0.697977748142;
    msg.lat = 0.603772513231;
    msg.lon = 0.559207560344;
    msg.orientation = 0.869469106744;
    msg.width = 0.841405048341;
    msg.length = 0.495686590675;

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
    msg.setTimeStamp(0.985967837316);
    msg.setSource(33070U);
    msg.setSourceEntity(133U);
    msg.setDestination(33660U);
    msg.setDestinationEntity(142U);
    msg.mask = 23U;
    msg.max_depth = 0.467556900918;
    msg.min_altitude = 0.975799736971;
    msg.max_altitude = 0.108564232197;
    msg.min_speed = 0.527567672681;
    msg.max_speed = 0.59735900221;
    msg.max_vrate = 0.301019128681;
    msg.lat = 0.134847021649;
    msg.lon = 0.281639935596;
    msg.orientation = 0.884105500656;
    msg.width = 0.525710951489;
    msg.length = 0.817535686978;

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
    msg.setTimeStamp(0.351508990035);
    msg.setSource(53750U);
    msg.setSourceEntity(211U);
    msg.setDestination(54879U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.779045034859);
    msg.setSource(11668U);
    msg.setSourceEntity(68U);
    msg.setDestination(47698U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.70322496892);
    msg.setSource(42569U);
    msg.setSourceEntity(50U);
    msg.setDestination(41448U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.222950581106);
    msg.setSource(53621U);
    msg.setSourceEntity(254U);
    msg.setDestination(64306U);
    msg.setDestinationEntity(20U);
    msg.duration = 15737U;

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
    msg.setTimeStamp(0.315262324449);
    msg.setSource(42165U);
    msg.setSourceEntity(242U);
    msg.setDestination(62079U);
    msg.setDestinationEntity(243U);
    msg.duration = 46288U;

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
    msg.setTimeStamp(0.0618175696394);
    msg.setSource(55442U);
    msg.setSourceEntity(72U);
    msg.setDestination(45498U);
    msg.setDestinationEntity(27U);
    msg.duration = 51033U;

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
    msg.setTimeStamp(0.932374748547);
    msg.setSource(44264U);
    msg.setSourceEntity(3U);
    msg.setDestination(25406U);
    msg.setDestinationEntity(131U);
    msg.enable = 13U;
    msg.mask = 2523056089U;
    msg.scope_ref = 2711924534U;

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
    msg.setTimeStamp(0.366188916237);
    msg.setSource(5988U);
    msg.setSourceEntity(224U);
    msg.setDestination(16632U);
    msg.setDestinationEntity(161U);
    msg.enable = 141U;
    msg.mask = 1333391261U;
    msg.scope_ref = 563188951U;

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
    msg.setTimeStamp(0.9881722728);
    msg.setSource(38935U);
    msg.setSourceEntity(221U);
    msg.setDestination(3624U);
    msg.setDestinationEntity(77U);
    msg.enable = 26U;
    msg.mask = 1971900263U;
    msg.scope_ref = 1197200304U;

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
    msg.setTimeStamp(0.630883462747);
    msg.setSource(23538U);
    msg.setSourceEntity(18U);
    msg.setDestination(6982U);
    msg.setDestinationEntity(36U);
    msg.medium = 239U;

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
    msg.setTimeStamp(0.15051142602);
    msg.setSource(16374U);
    msg.setSourceEntity(125U);
    msg.setDestination(1026U);
    msg.setDestinationEntity(61U);
    msg.medium = 177U;

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
    msg.setTimeStamp(0.907958026664);
    msg.setSource(36974U);
    msg.setSourceEntity(254U);
    msg.setDestination(57948U);
    msg.setDestinationEntity(165U);
    msg.medium = 195U;

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
    msg.setTimeStamp(0.55811361648);
    msg.setSource(3689U);
    msg.setSourceEntity(144U);
    msg.setDestination(9932U);
    msg.setDestinationEntity(15U);
    msg.value = 0.893649587009;
    msg.type = 217U;

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
    msg.setTimeStamp(0.725791117902);
    msg.setSource(55097U);
    msg.setSourceEntity(191U);
    msg.setDestination(47754U);
    msg.setDestinationEntity(26U);
    msg.value = 0.202394180753;
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
    msg.setTimeStamp(0.788552469971);
    msg.setSource(49482U);
    msg.setSourceEntity(139U);
    msg.setDestination(38908U);
    msg.setDestinationEntity(160U);
    msg.value = 0.970290344097;
    msg.type = 211U;

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
    msg.setTimeStamp(0.699456593614);
    msg.setSource(28273U);
    msg.setSourceEntity(14U);
    msg.setDestination(1007U);
    msg.setDestinationEntity(100U);
    msg.possimerr = 0.0692718821117;
    msg.converg = 0.29516585375;
    msg.turbulence = 0.129125089103;
    msg.possimmon = 85U;
    msg.commmon = 215U;
    msg.convergmon = 223U;

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
    msg.setTimeStamp(0.245670357611);
    msg.setSource(25722U);
    msg.setSourceEntity(9U);
    msg.setDestination(28539U);
    msg.setDestinationEntity(185U);
    msg.possimerr = 0.664049419599;
    msg.converg = 0.172578155528;
    msg.turbulence = 0.384854363301;
    msg.possimmon = 17U;
    msg.commmon = 206U;
    msg.convergmon = 186U;

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
    msg.setTimeStamp(0.258982020841);
    msg.setSource(16626U);
    msg.setSourceEntity(198U);
    msg.setDestination(30566U);
    msg.setDestinationEntity(18U);
    msg.possimerr = 0.663227001922;
    msg.converg = 0.679860395212;
    msg.turbulence = 0.987406093079;
    msg.possimmon = 82U;
    msg.commmon = 157U;
    msg.convergmon = 31U;

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
    msg.setTimeStamp(0.970540574097);
    msg.setSource(8285U);
    msg.setSourceEntity(175U);
    msg.setDestination(30574U);
    msg.setDestinationEntity(79U);
    msg.autonomy = 9U;
    msg.mode.assign("DUQLHSBKPEXHDRGEMPNFZXIXMJFTOMEZJFXDETUISJEGFIOFGBMXKBYMXPRWRKGOAHALOWCJYWGXAUYHOLBOCLNQEHIATVSZYJQWUNKGPKLTAQFWGBXNCCXJMASFJIINSZCWUWAEVQFSSRHHZAVPCNNYNJLDVRQZHAKUDUWMAUTMPHRRLOZKVC");

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
    msg.setTimeStamp(0.225106271121);
    msg.setSource(28124U);
    msg.setSourceEntity(44U);
    msg.setDestination(3636U);
    msg.setDestinationEntity(26U);
    msg.autonomy = 153U;
    msg.mode.assign("DHHOPQHJXTYEBBFAFQIRZLRLZEAMUPEN");

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
    msg.setTimeStamp(0.346076040499);
    msg.setSource(40430U);
    msg.setSourceEntity(172U);
    msg.setDestination(24244U);
    msg.setDestinationEntity(232U);
    msg.autonomy = 130U;
    msg.mode.assign("XLSEKJOLCWYUQYXVDESWLAIXKCSEEYMDOAKKVLIHWSZHMHDCIUIUGZBDKZZEXUMYAUQPWRGUPZAILE");

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
    msg.setTimeStamp(0.773981832167);
    msg.setSource(5331U);
    msg.setSourceEntity(193U);
    msg.setDestination(27736U);
    msg.setDestinationEntity(224U);
    msg.type = 253U;
    msg.op = 53U;
    msg.possimerr = 0.00190534311953;
    msg.converg = 0.670486353163;
    msg.turbulence = 0.383801227661;
    msg.possimmon = 132U;
    msg.commmon = 189U;
    msg.convergmon = 75U;

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
    msg.setTimeStamp(0.540493266669);
    msg.setSource(55508U);
    msg.setSourceEntity(176U);
    msg.setDestination(21187U);
    msg.setDestinationEntity(99U);
    msg.type = 38U;
    msg.op = 222U;
    msg.possimerr = 0.967023725807;
    msg.converg = 0.586732736621;
    msg.turbulence = 0.791622151689;
    msg.possimmon = 30U;
    msg.commmon = 246U;
    msg.convergmon = 21U;

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
    msg.setTimeStamp(0.225517126494);
    msg.setSource(262U);
    msg.setSourceEntity(138U);
    msg.setDestination(38749U);
    msg.setDestinationEntity(0U);
    msg.type = 169U;
    msg.op = 225U;
    msg.possimerr = 0.922791488181;
    msg.converg = 0.0285205009055;
    msg.turbulence = 0.692315516291;
    msg.possimmon = 3U;
    msg.commmon = 163U;
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
    msg.setTimeStamp(0.325690759933);
    msg.setSource(50775U);
    msg.setSourceEntity(161U);
    msg.setDestination(22519U);
    msg.setDestinationEntity(155U);
    msg.op = 192U;
    msg.comm_interface = 86U;
    msg.period = 1551U;
    msg.sys_dst.assign("YLFWQGYZDVNCDZYROYSXCKGWLTPDUTHWVKLSRDHWNBCLVMCDPZUFXZOBKWFKGMVZBBYINWWVEURHJFAPVXKSOETFXZPQUIQZMASURJGQFMAQJES");

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
    msg.setTimeStamp(0.393332692574);
    msg.setSource(1379U);
    msg.setSourceEntity(214U);
    msg.setDestination(57921U);
    msg.setDestinationEntity(66U);
    msg.op = 141U;
    msg.comm_interface = 182U;
    msg.period = 11368U;
    msg.sys_dst.assign("YGDNRDRHBJUJBVQKDQVIDNVSMUIROWTSBXOTBWUCQWPGEEVZXKOLXKBCSEQXAAEGBCAFKMISXHMJZQDLHIXVFKWFYVJMOYFNWIJKGEZDJBXEMUAMPNEXNYDRPQMVXQLYRZXVCDPRAZWQHTPNPZLYUDNGPICC");

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
    msg.setTimeStamp(0.508048523531);
    msg.setSource(22546U);
    msg.setSourceEntity(111U);
    msg.setDestination(39395U);
    msg.setDestinationEntity(57U);
    msg.op = 200U;
    msg.comm_interface = 168U;
    msg.period = 62676U;
    msg.sys_dst.assign("RIPQGYSKRZIECXXKQIMZUEPMBXEUVPQSDZLGTVLYRFVZPYSCGDFJVOCAJNKPKAJDLLEIHPCTKQTGZUYSLZBXXMOICHEASDICVDQNCWBXNJBWAQGQLWSKTCVERJUMGPBYTKYJVUBBRWWODJIOFMUFNPMOBUZQIZEKTHJMOLMTFOTJWNNANHEDARABDXGHQXFUKRNBTRSITZFDHSOSFLAIPUXEEVPGHHDNOMLFYCHHCGUYZSQYRWAWXKYVRLMWGA");

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
    msg.setTimeStamp(0.883457855246);
    msg.setSource(51306U);
    msg.setSourceEntity(99U);
    msg.setDestination(7646U);
    msg.setDestinationEntity(228U);
    msg.stime = 2041666946U;
    msg.latitude = 0.78756524248;
    msg.longitude = 0.568989435333;
    msg.altitude = 10560U;
    msg.depth = 48763U;
    msg.heading = 53851U;
    msg.speed = -13392;
    msg.fuel = 120;
    msg.exec_state = 11;
    msg.plan_checksum = 37536U;

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
    msg.setTimeStamp(0.825993480852);
    msg.setSource(64461U);
    msg.setSourceEntity(225U);
    msg.setDestination(35650U);
    msg.setDestinationEntity(7U);
    msg.stime = 2014653557U;
    msg.latitude = 0.730792342619;
    msg.longitude = 0.895718968683;
    msg.altitude = 37666U;
    msg.depth = 12884U;
    msg.heading = 510U;
    msg.speed = 19590;
    msg.fuel = 90;
    msg.exec_state = -38;
    msg.plan_checksum = 55213U;

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
    msg.setTimeStamp(0.358659431849);
    msg.setSource(3823U);
    msg.setSourceEntity(242U);
    msg.setDestination(27980U);
    msg.setDestinationEntity(183U);
    msg.stime = 1736474329U;
    msg.latitude = 0.423893962493;
    msg.longitude = 0.591449634207;
    msg.altitude = 14060U;
    msg.depth = 24976U;
    msg.heading = 10393U;
    msg.speed = -20255;
    msg.fuel = -72;
    msg.exec_state = -114;
    msg.plan_checksum = 63278U;

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
    msg.setTimeStamp(0.061702816392);
    msg.setSource(8727U);
    msg.setSourceEntity(142U);
    msg.setDestination(54367U);
    msg.setDestinationEntity(55U);
    msg.req_id = 51990U;
    msg.comm_mean = 219U;
    msg.destination.assign("FLKYDDQUZIAG");
    msg.deadline = 0.332757574422;
    msg.range = 0.779808269291;
    msg.data_mode = 224U;
    IMC::ManeuverDone tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ACGJWOMRADCKAZKPRIRTEZKROPJEYCNFIHKQXTZYXSTDBGGONJVZHFTLBBGMDSXKVMNAXDLQRMHBGMNIJKYAJRIMIQGUDZQQGVDTULAEJCVUUJPXBPUGFWEDNMMHCEAKDPLDXHKTIWNLODWAKPUSRMIJVKOLZRRZQQPYXFVFCVVNCEQZHSYGUAHFTUJYBIEWZPYXWWSBNNCYSJWHSHLBSOSPIHWWOZQNF");
    const char tmp_msg_1[] = {4, -93, 105, 25, 59, 38, -34, -36, -25, -27, -73, -101, -46, 41, 118, -33, -88, 89, -97, -12, 16, 28, 64, -6, -105, -111, 17, 101, -14, 100, 78, -51, 118, -54, 85, 118, 63, 87, 121, -107, 116, -63, 75, 2, -92, -17, -40, -66, -32, 119, -125, 113, -115, 91, -88, -116, 96, 111, -67, -33, 14, 72, -92, 39, 108, -4, -55, -70, 33, 10, -20, 120, 59, -15, 48, -3, -31, -30, -7, -48, 102, -54, 19, 67, -2, -91, -24, 108, 81, -101, -59, -104, 43, -81, 113, 114, 82, -108, -22, 123, 45, -95, 63, 16, 74, -31, -117, -5, -5, -122, 125, -103, 40, 45, 87, -40, 52, 75, 48, 73, 100, -69, 115, 57, 68, 79, -115, -7, -16, -63, -9, 98, -18, 21, 37, 83, 124, -107, -11, 50, -90, -58, 116, 55, 40, -104, -122, 71, -111, 41, 6, -65, 110, 52, 19, -110, -89, -98, 60, 121, 114, 11, -77, -82, 6, -108, 40, 44, -15, -56, 11, -58, 91, -38, -115, -112, 5, -5, 64, -23, -10, -59, 21, 83, 61, 79, 92, -53, -29, -87, 76, 104, -7, -105, -79, -65, -79, -56, -93};
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
    msg.setTimeStamp(0.179796833465);
    msg.setSource(31552U);
    msg.setSourceEntity(16U);
    msg.setDestination(53380U);
    msg.setDestinationEntity(212U);
    msg.req_id = 37590U;
    msg.comm_mean = 100U;
    msg.destination.assign("WZWIWGVEARHDTSXVTIQTNZOIUJVWKDJGLSZTA");
    msg.deadline = 0.00724135581113;
    msg.range = 0.23404026704;
    msg.data_mode = 85U;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("IMACXXYNMWXUBNZBBOEFJKWJZFSCRFWUUYXPAKKIIGTHTVTJCELVEEYVUSIRQWTJUHLZCUKCKUVBIHPZZF");
    tmp_msg_0.op = 110U;
    tmp_msg_0.lat = 0.828655998317;
    tmp_msg_0.lon = 0.256009856862;
    tmp_msg_0.height = 0.8517578663;
    tmp_msg_0.x = 0.0697040399933;
    tmp_msg_0.y = 0.662738768506;
    tmp_msg_0.z = 0.218705102389;
    tmp_msg_0.phi = 0.862270112943;
    tmp_msg_0.theta = 0.966198425698;
    tmp_msg_0.psi = 0.705590729247;
    tmp_msg_0.vx = 0.536243097343;
    tmp_msg_0.vy = 0.256363045281;
    tmp_msg_0.vz = 0.77133313105;
    tmp_msg_0.p = 0.853050498294;
    tmp_msg_0.q = 0.312073776372;
    tmp_msg_0.r = 0.679541841556;
    tmp_msg_0.svx = 0.405964602101;
    tmp_msg_0.svy = 0.705259930323;
    tmp_msg_0.svz = 0.29725340557;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HLPBUNNUKCNCVUXZKIPYAYAEJMUQARLZEWMTENWHAGZFFXUIDMSVRGISLFPGODHIPYFQRTDEFSIALFUXCGOWQWJQWCWCRYEJKKVCLJEPZJOPXBUDQCGAJXIYBNJNSGHFDDDALXHMHEPKTITSYZHMKKUNPVNMSVWFCJJZQBTOBHRMNWGTOTLVPXOQVT");
    const char tmp_msg_1[] = {-8, -97, 57, -31, 65, -29, -116, 28, 109, 68, 80, -14, -24, -91};
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
    msg.setTimeStamp(0.703678263906);
    msg.setSource(53337U);
    msg.setSourceEntity(238U);
    msg.setDestination(13163U);
    msg.setDestinationEntity(116U);
    msg.req_id = 32885U;
    msg.comm_mean = 177U;
    msg.destination.assign("VIBPTONRUJEKKLALBBOXNNOKTDUCQ");
    msg.deadline = 0.771847799759;
    msg.range = 0.79893304573;
    msg.data_mode = 159U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.687921427123;
    tmp_msg_0.speed_units = 89U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WBQCTHRPKFBZDXOEXKIZZQMDVNVFIGEUMJLSPHDSELAPCRNRUAEXTQTHXDVGXBBR");
    const char tmp_msg_1[] = {108, -118, 89, -120, -18, 13, -108, 77, -91, -80, 13, -41, -85, 107, 68, -74, 105, -113, 81, -99, -75, 62, -60, -116, -30, 6, 92, 76, 3, 82, 64, 20, 67, -92, -117, -98, 56, -16, 74, 91, 46, 119, -78, -6, -72, 68, -112, -84, -128, -97, 54, -25, 11, 81, -60, 16, 96, 74, -60, -91, -122, -14, 8, 60, -92, 27, -69, -114, 21, -1, -10, -50, 26, 47, 48, 6, 47, -105, -95, -105, 118, 6, -94, -21, 16, 51, -2, 68, 109, -11, 63, 18, 32, -115, 58, -84, 36, -61, 99, -43, 115, 2, 33, 70, -33, 86, -38, 115, 11, 98, 1, 122, 19, -12, -32, 10, 117, -100, 49, 108, -115, -116, 102, 120, -92, -88, -46, -96, -121, 50, -96, 69, -82, 97, 97, -29, 85};
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
    msg.setTimeStamp(0.293097651336);
    msg.setSource(21826U);
    msg.setSourceEntity(73U);
    msg.setDestination(8371U);
    msg.setDestinationEntity(224U);
    msg.req_id = 52469U;
    msg.status = 46U;
    msg.range = 0.485942859612;
    msg.info.assign("OIHBEBDUEGWGAJTYVCTTUXEPZWDRCXUEGQEDTWYZWEMBWKXLPGKIPJQWZJJZNCRFPBQLTXMD");

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
    msg.setTimeStamp(0.310594504665);
    msg.setSource(14478U);
    msg.setSourceEntity(97U);
    msg.setDestination(796U);
    msg.setDestinationEntity(60U);
    msg.req_id = 64255U;
    msg.status = 99U;
    msg.range = 0.116324572747;
    msg.info.assign("YSCBUGBRFLZZAVJHBZHXBETBNXDQOPTFRBTOFQCQUKYTWCMAXGKXYIRWSNUEMUROFZVBEDZANJLQQGRHXYSVRTWSUVFSBXEAHMANECFJDEAYJSJKGLZPPTLVFLYWNZZJORKFWGMMVJWUWPOKKAHZNMUDDFOPLMIIDTYNGKRWWCJWGTTHUXSIAJSDLXNCEPQUSDYQCYAMOSGQD");

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
    msg.setTimeStamp(0.944807569721);
    msg.setSource(21643U);
    msg.setSourceEntity(163U);
    msg.setDestination(37982U);
    msg.setDestinationEntity(233U);
    msg.req_id = 22773U;
    msg.status = 115U;
    msg.range = 0.366158918219;
    msg.info.assign("APDJGIJKHQGMIVQNVTQNYSLLLHMWTWOFLEMLIBABTKUHGUKSWCEIAWLXMFHPUJZLBZZUXSECDNUBOXCGZRHEOGOPXIOGJZMYQRCZKRKWYUWWSXIONFUFDZSTXMRZBMNDUBYRURRHYMFWACVZAXNKOCPWUPEQYDXPKAPSTDQXBTDVWBXOCEQNNAJJHETTOMYKAEVVSJQGCBFHVCJCVIVDFNMGGSKHQD");

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
    msg.setTimeStamp(0.534226866038);
    msg.setSource(4982U);
    msg.setSourceEntity(183U);
    msg.setDestination(13045U);
    msg.setDestinationEntity(149U);
    msg.req_id = 48046U;
    msg.destination.assign("DPZFDKPCNRJSGUNZEHHFAODIQBRBSSAHRTDNSOOQEVYHCGXVEEWVYMHNULUVEBAVHJFNOTNXSIOSXKLQRMKCQMYSTDXYRBDBJFMSWVLPGFGGYNBLRYKSVWPTQVDOWYVJNRZXGFHPYFXIKKQXBOZDIRMRQZILQWGIWACMIGKNXJPEUUWTGDIUJKCCJMBZSTHYEBXFLTUOFCEPZFPTEJWC");
    msg.timeout = 0.124275950976;
    msg.sms_text.assign("KKHVQBMOBPBPNDIQRJQPNVRHTKDPMTVASGVZRJOAROEZGLUSJXZNYZWRXKSUTGYMMXCXWGOJIHBHXFFIQYSXSKQDJBZXJSXLNMGWLMMTFWFYVPUIRIUIPEBWRGGZYBITGLVQEYBUEEAYKNMCFWHJCTVUBOEERRMAIIECCLNNFCNDJQATEDSZTHWYJKPWLCDWURSATDZCKXVDUYAYBDKCFGDALFHESLNPHOOVJ");

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
    msg.setTimeStamp(0.340686898896);
    msg.setSource(60118U);
    msg.setSourceEntity(87U);
    msg.setDestination(52827U);
    msg.setDestinationEntity(159U);
    msg.req_id = 1030U;
    msg.destination.assign("JLIUFERPTGDJQVHSMZURBZSPHOUWLPPPAHUZMKDAAQVECVQCNJNXPVDLOTXGSCWETJTWGHFRBYMNEKPASMLZQLCIQXBFJWSJMYCUXHXVRQWGANQKOYVOZRGHB");
    msg.timeout = 0.995870428923;
    msg.sms_text.assign("STKJSCRMOEEPEWDJLHZPGUOFJVNDCVNINJGQVLOHYRWXLQHJBLSAXTQAYWACERKGFIKJDBYDK");

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
    msg.setTimeStamp(0.690098203076);
    msg.setSource(60479U);
    msg.setSourceEntity(236U);
    msg.setDestination(53943U);
    msg.setDestinationEntity(231U);
    msg.req_id = 46876U;
    msg.destination.assign("WIUPECAXZWLBDLHPNUPEKWJHLOYKAAEDOIJPPPWWQMAKSKKTFONINUTXFRQRDHLBUFY");
    msg.timeout = 0.943737578164;
    msg.sms_text.assign("IHEKSOJIJRZKTCQGCFHSAJXZOJQETYHLDYSNTGSZEJNFEGKIWLKQPVCXERIQMSVRCPXSIARVVGYOFFVRJCIGPWVTBYBIELXCLKTQEKDZQFFGOUUHODYRZQFNDOXXNDMIUWNFJMXMUQSTKNTZDQBBKOOCKUABJNXZVLSBGSAWJJICRTUWSUUMWLDFAOAVCLGUEGLWHXHTYPZNVWBMPAKBXIERQVOPRPWBLDY");

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
    msg.setTimeStamp(0.552350066806);
    msg.setSource(65005U);
    msg.setSourceEntity(224U);
    msg.setDestination(45827U);
    msg.setDestinationEntity(119U);
    msg.req_id = 34612U;
    msg.status = 101U;
    msg.info.assign("ZIHCVBAQYPEQHKAPLHCJORDFTCDIUOOXSIVRWDXVKMZTKGJPKUMMZCWNRMEEIZMPLHUVQHBNLRQVFBMOGFPZXTZDYKPCJFSJMVFOQGAAGUKDHCEIIBRGORZWFWYOIICNQFPKWROAZVYDQBZPOEQGKGOGU");

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
    msg.setTimeStamp(0.744973601346);
    msg.setSource(1921U);
    msg.setSourceEntity(179U);
    msg.setDestination(22035U);
    msg.setDestinationEntity(203U);
    msg.req_id = 42046U;
    msg.status = 237U;
    msg.info.assign("AGIPRUITXURZCYZSECEN");

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
    msg.setTimeStamp(0.637951049104);
    msg.setSource(7094U);
    msg.setSourceEntity(182U);
    msg.setDestination(39225U);
    msg.setDestinationEntity(170U);
    msg.req_id = 57948U;
    msg.status = 83U;
    msg.info.assign("ZKUMGMDIKFVZHGPLSCJXBCKOKSHTWMAUHORSTPCJIVXVNRCPNWXVMLWWFHFRZNTCXCQWKFNTYJTLQDMZQOJKBOSIRQRYENYQQAYILIZDFVKGXIOBTATVGHEAUCDLCSZRCBHAEOPNXRADKLYGFLUIOKAIMESHVWYVVJUGRBMUJPTZMQDQMD");

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
    msg.setTimeStamp(0.992517129286);
    msg.setSource(63083U);
    msg.setSourceEntity(224U);
    msg.setDestination(51605U);
    msg.setDestinationEntity(192U);
    msg.state = 195U;

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
    msg.setTimeStamp(0.450350382708);
    msg.setSource(38745U);
    msg.setSourceEntity(66U);
    msg.setDestination(51372U);
    msg.setDestinationEntity(197U);
    msg.state = 245U;

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
    msg.setTimeStamp(0.851132048718);
    msg.setSource(1456U);
    msg.setSourceEntity(7U);
    msg.setDestination(29687U);
    msg.setDestinationEntity(178U);
    msg.state = 74U;

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
    msg.setTimeStamp(0.0600832215044);
    msg.setSource(34099U);
    msg.setSourceEntity(1U);
    msg.setDestination(8067U);
    msg.setDestinationEntity(104U);
    msg.state = 211U;

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
    msg.setTimeStamp(0.610127678617);
    msg.setSource(39198U);
    msg.setSourceEntity(97U);
    msg.setDestination(48011U);
    msg.setDestinationEntity(138U);
    msg.state = 18U;

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
    msg.setTimeStamp(0.405013105631);
    msg.setSource(46650U);
    msg.setSourceEntity(55U);
    msg.setDestination(13678U);
    msg.setDestinationEntity(195U);
    msg.state = 76U;

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
    msg.setTimeStamp(0.633174011071);
    msg.setSource(8830U);
    msg.setSourceEntity(36U);
    msg.setDestination(63858U);
    msg.setDestinationEntity(10U);
    msg.req_id = 41807U;
    msg.destination.assign("PAHDVNUGQCFPVTTLVSBIJSHCZIXIMURMFBZDVUAOJTREAOUAHEPDTDAESHVTRWJJXJBQPSIABKWNZSWTGFYZSWBKEQXQKWCZQBEUTBVNXKAFKNJRQCMYUWCELOKIKULNRHQLLSB");
    msg.timeout = 0.543934488198;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.0590463068012;
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
    msg.setTimeStamp(0.963665953991);
    msg.setSource(38789U);
    msg.setSourceEntity(243U);
    msg.setDestination(53878U);
    msg.setDestinationEntity(103U);
    msg.req_id = 19747U;
    msg.destination.assign("FACBNPVKXLUGNTZZIQGPQOBXWSPPEAURVQNBVLKCSLRZRAPIHBOURPSDENRRSEFYQMYKVJDOZXNITAVHGXVPVYPZDNHGHWOIZMPWQGLXYWCRUDLYETQMJNYAIUSHXGASCMEQTXLMTMMFHOGMICOSROFXGBLAJDBZCIGEIFEUVBNVTFFKQAPBHXNUKQOIWXLJWDOSTBAZ");
    msg.timeout = 0.000455524384681;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("FPHEKRKSJNOXPESRAMUXOFCTUBSAYVPJKUCPBNNWLFIRYCIYOFZSSLAJRBVWSUGQZGDNVOMKEZXEYXTKXXLVVMZFVMHAIUPIJCBJQYSFCGBNACGYQHHRTNIKTAURZMOYZMECJDLEXSZDLVPWLJPGPQEYXFXRIMBELTSFWCTNHDMT");
    const char tmp_tmp_msg_0_0[] = {109, -44, 110, 17, 26, 45, -6, -73, -15, 16, -73, 104, 10, 82, 30, -42, 105, 73, 123, -98, -57, -64, 59, -21, -102, 96, 11, 116, 0, 36, 12, 108, 53, -105, -128, -33, -6, 17, 99, 63, -97, 63, 91, -61, 60, -118, 43, 40, -115, 99, 75, 74, -118, -16, 116, -121, -53, -20, -93, -55, -118, 49, 122, 66, -61, 24, 17, 16, -82, 48, 126, 59, -21, 57, -111, 53, -75, 39, -55, 104, 1, 20, -76, 118, -52, -15, 110, 23, -69, 52, -74, 48, 65, 70, 120, 94, -50, -7, 90, 92, 63, 27};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.838097866768);
    msg.setSource(15861U);
    msg.setSourceEntity(62U);
    msg.setDestination(18887U);
    msg.setDestinationEntity(107U);
    msg.req_id = 279U;
    msg.destination.assign("PSSIOCPDUXETVRPQSWGBZZKEYKQMDBFYNPVFQWNZKMNZVSTIYHWOBPMXWSBDWYEWEAZDFSIGVRJUIUJKJTDEBHVXAXZHJZDSNYRCOOWBHDTZSPIKTRSMYZXLWCFVQPGKNHFGRHCMOCGKDAJLLRJCEIKEU");
    msg.timeout = 0.90869228005;
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 239U;
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
    msg.setTimeStamp(0.424760075961);
    msg.setSource(39443U);
    msg.setSourceEntity(243U);
    msg.setDestination(57335U);
    msg.setDestinationEntity(144U);
    msg.req_id = 19456U;
    msg.status = 116U;
    msg.info.assign("LIJVRKVBWWOUORLAVXPZOIKBKEAOZTMCCQZPNRABVZDVANMTXHKRRESWXYEQUSDWIGPAKFSOBWBZFLZOYOUYNASNPEOCJSJFMZJIPQMNDTHYVCPHTECZYIPJNNTWCWUEOKIPLFSLZMZSRTLYKMGSLDQLTXGQYVAWHDDDXHFIAHQGBJLHXFSBCVENHBGVBUFUFIPGPECTJIUABTTXQXQUDJRFRWUFCAUHEHYJMIKQQCKMXKNGJLWEMGVGNROD");

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
    msg.setTimeStamp(0.777903859481);
    msg.setSource(53035U);
    msg.setSourceEntity(193U);
    msg.setDestination(50260U);
    msg.setDestinationEntity(129U);
    msg.req_id = 21979U;
    msg.status = 142U;
    msg.info.assign("RTZKSBAFKPEXDSOXXXIEXZTDCHGVBVEALBZRUUGTDXXMIVEVVAOEJIGKWJTOHWSQMVULBKVYBJIQPUNCZZBKSMUNUCFLUDEJEYKDYUHLAHFHDHYILMUCLRQZSFYJTYBSOBWLSRWRPGAJREIAJKPKZEQKNJNYDMYDNANFNLAEHFXFJWFWXPQMRMQGPSWUVQIOSHPNPVDFWTVO");

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
    msg.setTimeStamp(0.168545591053);
    msg.setSource(28983U);
    msg.setSourceEntity(234U);
    msg.setDestination(17498U);
    msg.setDestinationEntity(15U);
    msg.req_id = 5512U;
    msg.status = 165U;
    msg.info.assign("OPTEXPCGXHPCITDREMEOAAUFZLHBKIYKUZOSZWFTGANNKLRRZNXDCQOWWXGXVVHMPFHMDPNBSWNSJAUMIES");

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
    msg.setTimeStamp(0.330115447726);
    msg.setSource(47722U);
    msg.setSourceEntity(10U);
    msg.setDestination(14580U);
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
    msg.setTimeStamp(0.581992657536);
    msg.setSource(23890U);
    msg.setSourceEntity(234U);
    msg.setDestination(51748U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.140580035639);
    msg.setSource(11408U);
    msg.setSourceEntity(107U);
    msg.setDestination(46728U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.122075634581);
    msg.setSource(62852U);
    msg.setSourceEntity(246U);
    msg.setDestination(64103U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("PCVDAKFZRDMRSWEUAYFSPPZUYLZHEPWYHKEUZFAGFTWVQXST");
    msg.description.assign("NHAAMDQFRXMPOWVMVMLOBVKUDSNUOSJXBHCZUNTGGGPOKZEMIENDZCUGALZUQLJGXXBVPWEPPXUMKZPIEQFJCNDGZYELBVNNXWMEHSGAKRGFBWJNZYIKJYXIZEUSEDHVCIRFIVYQOOOLWCTHMQZMJFESUIJJWFVRRAABOYBVDTKFXDTUJLISUTADISHAQYCTVOOSRYWNHTTCBYGCQBAPRKHHKELCLLFXRLPPRQTSKRQJWHQWWID");
    msg.vnamespace.assign("XPVWKTQSLKQSTSLCWPZMEACFOTREMKRFNCKNFZJYLLIVMDMGBJPRAHBYWHYNGHNGOQRSVFPSOQZRDVHIJZEAKCONQJBZHGAZGJCDVFIFUZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NHXJPVIRCIQBPOLEMNSQKBKWRQKXSSNSADGSHGZGSQOPQJOEKUABGGPMZOQAVCYTPOFJSXWXCKDHMFVKQUEBTFZDTVEZIWFFGPYDKJYYBEBGSRBHERUAWQOYDUNDORWUCITIZIAZZPRZNDVNBHHYVTGTCNMWIJLLVZFMUOFUCBGWAXIELJTRVQA");
    tmp_msg_0.value.assign("GFJBEXVHVIUYQFJWXPLYWEHSZCWIZIGSOIZMUHQGTTNPLFRTVNLQEYMZPAABVOBVYKVSLKXEJGDFSXVBOGVKYFAMIMNEANRAEDXXKYNUHROQLOHQUIFPUAZKZIMMUQWQGDSRHAMTSTDCZBICM");
    tmp_msg_0.type = 30U;
    tmp_msg_0.access = 244U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("QPUYRTFTVWCAOSHTCEXUWCFWYWKPRLTYOGSABBAXQGWQDRHHCGZTXUFMAXSMAJZCJUJYOVLXKAKHMHYPODDZREEDZGQCIXPBJIWMKYNLQURWSPZCNGVSYOEAVBKQYLTNFJDFKDTBOHITRGJZQH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("AKIUJLXYSJTYQNAXKGKSKGDIMYXVXMLTQSGGBVFZPIEUAOOKHUEHOXVMFDKTWGDYIBPKQBYVVJRRDAAQSMLPBNCJZQYIYSWBENIUOBUMFRMODBHDWJCHZFNFURTBDXZBHCMZEFWGYPLZUOLIBQEDJJ");
    IMC::CustomManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 61567U;
    tmp_tmp_msg_1_0.name.assign("DCPOKFAXHMSKFKESZZYNEQADPPBJCWEYSVVNFZZRFTMREISEQUWICAQBCXJJFVROGCBTZGUDHDKKYTUHGBOHJJNWTVEGPVXEBRXZJUNCWSCIXBDNDAKMJZMRWWMITHKLFAQYYBIQLSHLHGCNAJHVQPMRPXNYDGKLZRVIXUPOHNWRWGVPTBGURMTAFEAZKJGDLLQDOBVSSQIUDLUUXYSMXHWTLIIATZQJYFFOMTBNOPLWPOSAYMRONVLGOKY");
    tmp_tmp_msg_1_0.custom.assign("SFJFAPQKRAVFFLXLLMZOCOONBLLUMUEWFVNWQXYXPIQWXABPJWEIUNCPZDPGAUDEPQTGHZZTVAVGFJBNXWONSKYIJAJIFPKRAXHGXDVWDBCSNJKIRTLWZQCWEBDHIRSJMQSODTMGRYMYEZAOXIUCXJDZLTTILOMMBTCHYUUBTRBSUKBGYNVGTHDQRKMIHFVELHCOQJSHYCKWPRC");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Rpm tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 4883;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("NLLXYBDMUCVZVJODEVNRPWEAHAKIGIFTCWTAYMILPTGMTHVLZWQKQCOMUGISKTESAFBASQGUMANHRJNWKDSBJQHEXERNQFCAQUXLBFPRDWNNDHKJTRJPDFWYUSEVUGDKAJYEHQRAIGSBXCYHBGMMOZBEKZSJKXIGSUMFZCQMTUCPPXYLYNZRGJCCPWWLIEZSLH");
    tmp_msg_2.dest_man.assign("DYSBNBJIWKCBVOZDPTIJPCFGVAXQVCNEASXXJSIDDERRLNQWTURKSUHECIBXNZILLONLVQMQEIFPVYFFKKORZJPPMLMXRWINYNAQHGUZVFPJCGSCEJDZJWSKZ");
    tmp_msg_2.conditions.assign("OAOGQXISXGZEJIONBBFKEVNRDVQCDLGCHFMYQKMKWYWLEAUWDAGBKWEOMLRMVSZJFSRIECNNVBHSXJLKMQVXFUBILKGIUPACBUOROLUJMSMYMQHJLRINAP");
    IMC::BeamConfig tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.beam_width = 0.260783097502;
    tmp_tmp_msg_2_0.beam_height = 0.0558587370662;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::TelemetryMsg tmp_msg_3;
    tmp_msg_3.type = 204U;
    tmp_msg_3.req_id = 1563553682U;
    tmp_msg_3.ttl = 5242U;
    tmp_msg_3.code = 87U;
    tmp_msg_3.destination.assign("CSGNLDXDAPNYRVYGFPZNYYLFHZTCRBHGVMLBLFEUOAAUORVPWNTLJWJITWYLUJNTXMVKMKWYWGSMOCDEUJXMBIKYHSWZBQYQKQAC");
    tmp_msg_3.source.assign("PZAAWNQLFCHRVMZOILQEXEEVUDSPLJXKPJSTKIQULNWHGCJTTHYCBILBJDRZWEXDSPEZVUPWFPTEWFLOUXRNZEJNJQMJQIQAHKOHBHJKBDROMEKCVOHXRWBOELWYCIVVVBDRXGZMIRTPFTKXG");
    tmp_msg_3.acknowledge = 97U;
    tmp_msg_3.status = 67U;
    const char tmp_tmp_msg_3_0[] = {-107, -84, 78, -6, 40, 112, 55, 62, 84, 22, -94, 53, 56, -31, -26, 40, -44, -18, 87, 2, -118, -26, 59, 75, 14, -124, 83, -52, 99, 111, -43, 85, -121, -8, -83, 73, -128, 4, -117, 114, -101, -72, 124, -67, -96, 113, 31, -89, -43, 50, -89, 53, 121, 71, 73, 117, -74, -4, 91, 39, -62, -56, -18, 61, -76, -75, -113, -93, 79, -71, -86, 40, 26, 42, -8, -70, 91, -124, 41, -89, 65, 70, 49, 87, -17, 11, -2, -11, -6, 74, -116, 2, 17, 30, 33, 48, 35, -88, -121, 53, -110, -60, -41, 39, -117, 54, -95, -19, -2, -2, 55, 117, 28, -99, -58, -116, 114, 103, 52, 21, -24, -86, -81, -44, -119, -32, -40, -96, -57, 53, 103, 114, -47, -80, -43, 34, -67, 95, -16, 9, 91, -124, -48, 8, 100, 94, -25, -82, -69, -80, -89, -103, 115, 42, -85, 24, -80, 60, -14, 47, 104, 116, -80, -104, 77, -43, 21, 98, 23, -22, -73, -51, 83, 95, 35, 72, -12, -104, -60, -102, 26, -124, -40, -49, -101, -74, -38, 21, 73, 61, -96, 105, 116, -30, -126, -63, -25, 74, 44, -125, -105, 97, -8, -44, 68, -48, 114, 67, 41, 68, -19, 66, -96, 118, -119, 99, -66, 50, 85, -7, 11, -63, -128, 120, 114, -28, -120, 102, -21, -62, 70, 11, -1, -69, 115, 86, 86, 88, -66, 61};
    tmp_msg_3.data.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
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
    msg.setTimeStamp(0.663607218133);
    msg.setSource(21396U);
    msg.setSourceEntity(166U);
    msg.setDestination(9088U);
    msg.setDestinationEntity(88U);
    msg.plan_id.assign("WVYEAFHOMCXZGMCLYETJLXEMIJDOZXCMSVYODJWWPKLAAMXFQQWUGLXIXFYPBHKGBRLDZWAPCYAJGQVPSOQEIKEK");
    msg.description.assign("KOIMHRTDOZPXXFLJHBSJLCGOEKRKAVECMBCENBNGGDEOJTYWQFBWVORAWBQDQYKQHAYKFSFDUEDYKUTETAMLDHZQMFCTTFRZGRWIGBMYZYMHPNGHYUOCGMQCUOJSWXVQNJNREXPQYUDZZLGERPKQCLALYEPVPHSYJJCCNNAMUBPURIDRZOUFVBSSQDHXALKJVTLGHWDFMSUUAPISFVSIOGFWWWTIXMBCZRSWIKBIEJ");
    msg.vnamespace.assign("PXFFIZSQQEBOREQKJFTQXGNTAIYXMZLSIRK");
    msg.start_man_id.assign("RXFAZKDTIEZMWDPUQPOHSNSFVPXTVZEHIIVSRJRCQPIUFTCLBHMIJAFVWQQPWDIDSNRKZPKSGGBYRWTNWWUYJGQPDJXJGOBRDYPBFLHAIAKYNXVJIDVQUYWEXLLCLFQCMMHNVDZCOETKMEBIOJUTHXTAFRCFUCTZEZYTXKNZHKLZYGPWSAKMMJDDWOHXRHKYPSCEVFHCBAJOVWMZUBQGLATBFNLLBUEUOMUVEQYXNSXGOOL");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MDZSNWFDWNEPQCMUOUUKUTWGI");
    IMC::Sample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 58707U;
    tmp_tmp_msg_0_0.lat = 0.180073177055;
    tmp_tmp_msg_0_0.lon = 0.92727977088;
    tmp_tmp_msg_0_0.z = 0.224487294683;
    tmp_tmp_msg_0_0.z_units = 194U;
    tmp_tmp_msg_0_0.speed = 0.496599951029;
    tmp_tmp_msg_0_0.speed_units = 162U;
    tmp_tmp_msg_0_0.syringe0 = 223U;
    tmp_tmp_msg_0_0.syringe1 = 112U;
    tmp_tmp_msg_0_0.syringe2 = 209U;
    tmp_tmp_msg_0_0.custom.assign("MMBQFZEYOFQVGSCPXHRHNPROBLMLVWXGAFPGQEXCOUHLYPDESZPNMWOIZJWYAUZLKFTVQGRPIFRYGSJBDNIKPGCLQACTHVINVJKQDJGWWIIZTKEBXSHFACUQAUECJJFJXUVTDGESRBDSRWZIPXGUTNLQHSNIKNTLVKWOMUNAMWLMGYCNHRFSQDXDED");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ParametersXml tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.locale.assign("YKRVBUYTYOOCZAWOVEBGUXFEIJZLQZCTHIOKPDLDFSLPJFFRWXZWIOLBNKNYJACZGSKAEIHUOSHEMXXBUQVMOYZKDUFTXKIAPTCNLXHWVGPJFMXNELAJWVLUWRTGSAQQERVETRHPJGDBSUN");
    const char tmp_tmp_tmp_msg_0_1_0[] = {60, 76, 63, 103, 26, 16, 54, 114, 39, -80, -55, -11, 70, -119, -12, 56, -87, -22, -16, -93, -110, 125, 100, -89, -87, -85, 13, -7, -67, -14, -12, 96, 0, -74, -81, 22, 76, 75, 56, -114, 42, 30, 76, -123, -21, -12, 21, -107, -110, 117, 74, -88, -5, -120, -88, 107, 10, -2, -11, 98, -120, -17, -48, 117, -73, 84, 85, 19, 106, -114, -26, -22, -101, 44, -120, 59, -100, 124, 30, -22, -98, -78, -4, 73, 23, -45, 65, 46, 110, -90, 49, 34, 32, -63, 35, -61, 1, 87, -7, -41, 68, 90, 33, -94, 11, 73, -6, -1, 45, -59, 29, 12, 73, -106, 9, -104, 101, -110, -8, 35, 15, 104, -21, -100, -28, 16, 61, 108, 57};
    tmp_tmp_msg_0_1.config.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("BOEKYIVTAIIUSJZIEFDFAPTLHQZRBUSJBLOFODXZHJAUAAZIGHMWPUCWZXNMPFHWCQRVKEOMV");
    tmp_msg_1.dest_man.assign("DZAPPJNPHCPEBIQXLLTKAMUBRJMOGTDOZJSIAFCRQHNIXUAFIOZXXBLNZXBUKRWHOVIUJWTVZTFEBXMPSKUYFLWGGVTYKQFJYRQWRKHFNFLEYN");
    tmp_msg_1.conditions.assign("JHQWYJSWDTNMTLZ");
    IMC::EmergencyControl tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.command = 111U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.plan_id.assign("PZPEHTVFWRIUDVAHMHEUYHYVCLZXHMTVOMSWQIFIMXSKXGMEJPTZQHAPATPSZJVTRDDOCXIRQAAGFLUDAUWQJWZWFNVGXSOAWURAPPZOPRRLQHTUNILUVEFBBVNGCRTVLKHMHJIUCKLMOWCBDQXXEBQYGKCELLCWDDSWKBSYIMKYCSCNJWLSBBLYJXAXSTJGXTU");
    tmp_tmp_tmp_msg_1_0_0.description.assign("PZWODFOIGWHTKVAJHPBYAZUMCUFQNCLJZQWXFAGLOAMT");
    tmp_tmp_tmp_msg_1_0_0.vnamespace.assign("CZRRYTBSHSGVKFDTOMMRMNHHUXVGXPLWCAFCCVVXAJEEMPGNLIEQYMKQMVKZYXZPKXRUIYAYZHWYUJTBGDBYXJUSJWCUEPMNWGNWLPXJMYDBOPWLJNCJADOZKHPREZB");
    IMC::PlanVariable tmp_tmp_tmp_tmp_msg_1_0_0_0;
    tmp_tmp_tmp_tmp_msg_1_0_0_0.name.assign("FONIEALDJSSSHCRLXJQNTETYOIGEZCQUPKMSDNMLELPKBZVOVZRLMVPYXPFWAHBGKBEUTHUPGCACHDZCFLKBADICCSTIKNYZONERLFECGAPYNMTGARHKVFGRVVOBEPZHYCUGJAXDVGADYSUXKBDTJVSYWMEMFUWOQLUNOOQJJITX");
    tmp_tmp_tmp_tmp_msg_1_0_0_0.value.assign("OBMAAIUGTTHOOZWBKHONLSCHIADEMPNYHGBPVBTASDPCVXATIQYQOYZEORJRQZCFWNCKDPDERJJXRVHEYMWZKTPZDXLSUMHQWIPXCXXHUFUSHCFWTQEVPGZKRNWBLLZQUBXRYOJLH");
    tmp_tmp_tmp_tmp_msg_1_0_0_0.type = 171U;
    tmp_tmp_tmp_tmp_msg_1_0_0_0.access = 230U;
    tmp_tmp_tmp_msg_1_0_0.variables.push_back(tmp_tmp_tmp_tmp_msg_1_0_0_0);
    tmp_tmp_tmp_msg_1_0_0.start_man_id.assign("JDUUYCSBWPBDSSAVWHCOQPBLGWVIUJ");
    tmp_tmp_msg_1_0.plan.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::SetControlSurfaceDeflection tmp_msg_2;
    tmp_msg_2.id = 156U;
    tmp_msg_2.angle = 0.948194090158;
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
    msg.setTimeStamp(0.591898573718);
    msg.setSource(2230U);
    msg.setSourceEntity(101U);
    msg.setDestination(33403U);
    msg.setDestinationEntity(135U);
    msg.plan_id.assign("QAUUNCWGHOFUJTTNOMDSCVGLYJVXYRPMBCNFEBOLDFIKGPQXPZIWV");
    msg.description.assign("CWDSJVABQUBLQGNQBKWYBSAEEJVMKMBUMTDXCLLEGZPOAPUDXURZGWJTQUVZYEK");
    msg.vnamespace.assign("JDCCWLFWUQBBKGNIIIAUFZJLAMDCUGIJQSWAYWBAUPQMGBFHNDFHATWCOOLHZJOCDTGFRUABWUUVWJCOKYE");
    msg.start_man_id.assign("IYBGCFGIKYWZDOYBNUAKKTXET");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QJALJMEHLXBHRRNGIJRVUTGXXHFBUSJTWMCHAFYDZASMVZRWGTMKNDPPPKSSOOZHAYUKXFVOQYWIAIBGMCSUGAHGQZJIUMJEZVLFELILWFTBOGUMWYBJCARGNXVDYMOIGKZABDRPFMEJZTUYLFNZQXQEVTXPRYIQEWIFQDYVORKDQYNOECWCWDSVRZJ");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 33337U;
    tmp_tmp_msg_0_0.lat = 0.802676531353;
    tmp_tmp_msg_0_0.lon = 0.562858836369;
    tmp_tmp_msg_0_0.z = 0.855586543773;
    tmp_tmp_msg_0_0.z_units = 176U;
    tmp_tmp_msg_0_0.amplitude = 0.325636811152;
    tmp_tmp_msg_0_0.pitch = 0.692625674027;
    tmp_tmp_msg_0_0.speed = 0.355825791451;
    tmp_tmp_msg_0_0.speed_units = 119U;
    tmp_tmp_msg_0_0.custom.assign("YTJCTQFWJNUCINPQKRLOCDLVGIDMNLPFPHLVNVKZSRMUDFHYVMRYJBCOOQPEKQZRPCA");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SystemGroup tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.groupname.assign("HPXOXJFGOGZWQPNEJZKFBDYRPKVSQIFFXIWVYHNKCTCRTD");
    tmp_tmp_msg_0_1.action = 101U;
    tmp_tmp_msg_0_1.grouplist.assign("YUXHZTFQKPOSJHOXYJLOMVXFJNQUXVXVCMTNALTQAGWEHLRGLFWZFNVWGWKGWSIGAMJEGQRTZVOXSCJZSYWUMCXKKIYYKZQOLUVEFOCPKCNPRDKUPBPVICXAVDVYDQDYOLBMHEOZMGNWJITSUACYRWRAKIBCNMBETRZIPFFUEHFNDJERJIBSIHBEBMIDUNRSCEPWFAGCSA");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::LinkLatency tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.493717074217;
    tmp_tmp_msg_0_2.sys_src = 3893U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("FOTYXWOCTLPZHVTLSIXURNUNPBFMRXWNSSQAZWVADBFHLWDQLQAUGRQBHTJBJZMCERAGZBDUAWAOJTHCGXIHVVYTFDSFGDKBNM");
    tmp_msg_1.dest_man.assign("AEUNGMJFGJPQYTQNWCMJHHLTYQAZQJNILAUZZHQMDHQMYZRJISBAFIZBUUNYOSDDAWSEKKZCCQHBJWTQLDREVZVFYTUMZFBBLSJMVWYVRITHRKPDKSNALCPNFYISWGYPRBXTXVMRGHTGKJXSDEEWOICFBOJXOOKAEVRJD");
    tmp_msg_1.conditions.assign("RGWGPIVXZOIRDLTWBDTBAIGQZVMELMJVCXBYHPRX");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Reference tmp_msg_2;
    tmp_msg_2.flags = 44U;
    IMC::DesiredSpeed tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.595240479304;
    tmp_tmp_msg_2_0.speed_units = 204U;
    tmp_msg_2.speed.set(tmp_tmp_msg_2_0);
    IMC::DesiredZ tmp_tmp_msg_2_1;
    tmp_tmp_msg_2_1.value = 0.240655215864;
    tmp_tmp_msg_2_1.z_units = 188U;
    tmp_msg_2.z.set(tmp_tmp_msg_2_1);
    tmp_msg_2.lat = 0.311120896795;
    tmp_msg_2.lon = 0.279350805685;
    tmp_msg_2.radius = 0.644735542645;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.947289107283);
    msg.setSource(47307U);
    msg.setSourceEntity(62U);
    msg.setDestination(55019U);
    msg.setDestinationEntity(31U);
    msg.maneuver_id.assign("UCXQNAESVNIJZKAJQFXOOSONBSWPDOKLQXMVPYEWNSBHEBYFFBMLFFEMDYPCBJLJSZTCNKBHQIDQXOQJFLYUEXPSLCUUCDZBNTRIDGVDZTYDHBYRECPPWYLSVIIMYYJZXFHRIMDTAJLANUTULZBRIQUPLRARAXHVGLSQQCFEAOFWHPXCVWXXHKKCTHKIZETVHNGSHZBPZMWDOKINOFVGTRUMSGJWAWRTVRAKMEUGVEGCU");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 12432U;
    tmp_msg_0.lat = 0.825913456958;
    tmp_msg_0.lon = 0.0793671479044;
    tmp_msg_0.z = 0.586368059474;
    tmp_msg_0.z_units = 211U;
    tmp_msg_0.speed = 0.10405819225;
    tmp_msg_0.speed_units = 66U;
    tmp_msg_0.syringe0 = 177U;
    tmp_msg_0.syringe1 = 95U;
    tmp_msg_0.syringe2 = 75U;
    tmp_msg_0.custom.assign("MITEMJAFVDHJYOASRJCPOWZD");
    msg.data.set(tmp_msg_0);
    IMC::ExtendedRSSI tmp_msg_1;
    tmp_msg_1.value = 0.333952441115;
    tmp_msg_1.units = 175U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PlanGeneration tmp_msg_2;
    tmp_msg_2.cmd = 10U;
    tmp_msg_2.op = 170U;
    tmp_msg_2.plan_id.assign("IWAKWBPNDUGQKEUICDNNSHZVUVAPUAOJSOHJHBWUITTCZHOGXETJSYPSLNQOTWNEALZCWNCVXIMQMFLYZMELUWGCDLHSDOKCKOZRMFGWDATVRULPY");
    tmp_msg_2.params.assign("SRSOERXHDFLSJICIPFBUANHAEJL");
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
    msg.setTimeStamp(0.552321203299);
    msg.setSource(53075U);
    msg.setSourceEntity(125U);
    msg.setDestination(26364U);
    msg.setDestinationEntity(181U);
    msg.maneuver_id.assign("SLBRLFTWHWSCTVXQYMVOOFOFHDGQESSXUEYAOJBPFPPXCQINDGXLEVUBJSIATCBXAXPOLIGKDUUAETHCVJMNGLEORDLSGOCJRCLPNDGTUP");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 26936U;
    tmp_msg_0.lat = 0.992311308491;
    tmp_msg_0.lon = 0.369274851629;
    tmp_msg_0.z = 0.463608498243;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.speed = 0.297380434926;
    tmp_msg_0.speed_units = 116U;
    tmp_msg_0.custom.assign("VOUZBOVCKKCZAFUDZGIISLWJXZCZRRQUXSMARPTYLAQZJOETJNSSOIQOGAOKQQNECMUKDXKDYMBLXMGWNRDLBIBRFLMWYDCRESWOTBXTYXQPTPNGIUTROANFNFEJLUBSDDQKPSFAFVXEJSCFWDWEJIPOHEHYGYLPHRHMBEYKJJIAJMHNQGGECBBTWPNMIUMGJFUZLKYRADOMHITVWXCKXLKHINUXFEFUPQSLPVSYCCWZBVPQTHTVWVNADH");
    msg.data.set(tmp_msg_0);
    IMC::MapFeature tmp_msg_1;
    tmp_msg_1.id.assign("HUBCIWZXONJNVAHYPZEGGHRODJHRYI");
    tmp_msg_1.feature_type = 81U;
    tmp_msg_1.rgb_red = 161U;
    tmp_msg_1.rgb_green = 234U;
    tmp_msg_1.rgb_blue = 154U;
    IMC::MapPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.27286837286;
    tmp_tmp_msg_1_0.lon = 0.167980567781;
    tmp_tmp_msg_1_0.alt = 0.664000171833;
    tmp_msg_1.feature.push_back(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.713848548578);
    msg.setSource(5242U);
    msg.setSourceEntity(147U);
    msg.setDestination(11236U);
    msg.setDestinationEntity(245U);
    msg.maneuver_id.assign("JWYDCISNFMXCFHSZARLLOFEUPIBBDZHPKNVLXUBCPTGJSUJWJLBPGJTVWJQVRIKAHFTBIUCCPKQQQRDGMKKQGNHVLLFCOPQEDXPCFXLQSUOXVWIIPTKRXURYFDYESHWZYPTNNHNBHMVFAHONZTDYFZUSOAORAMSQSRRKAYJGQEJAZITYVOJLYLTRDUNWZGZEEYXKZBKMSNIQTA");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 37608U;
    tmp_msg_0.control_ent = 184U;
    tmp_msg_0.timeout = 0.311396426032;
    tmp_msg_0.loiter_radius = 0.508044451093;
    tmp_msg_0.altitude_interval = 0.501277301678;
    msg.data.set(tmp_msg_0);
    IMC::FormationPlanExecution tmp_msg_1;
    tmp_msg_1.group_name.assign("UWLXUBKQLXKSBUXDEAYPMIYAFCGWFAUDVCMDNFDZMNZFXGZYSPMCLRHTBSCBRYXNVTTIYXIODTYFAZCGHIPKSGPESLZEHKRMJOOWVELTPBQEORQDMQRDVYHOYRAHCZVPNHNJGNBWTQLKVHKUU");
    tmp_msg_1.formation_name.assign("NONJORSHBHIFYPTMLHTJWLQSFBRLLVOPXSSKQADBCWUCJJHLFTNTKGXV");
    tmp_msg_1.plan_id.assign("XRKUWXIAADMHRGKASVWPBKGYMMYHMIZZQDLCPKQPFQXTDNHUFANDESCWSPJYYUXIMGJAEAEOOGTEVXWZDWSVYPGJQLTVIQNZWTCPEDFCNTBRBIHRQPLUOSSSOBGZBQQXVAFXUKVLXRDWXRHCCAMJCKPDFRFCOTFFEYTVNPAJDDZTIHCIUEVV");
    tmp_msg_1.description.assign("GQKCATWUPHYSBFDYFCDSOHWSDZZJVPBNKSHOLUUXEPFPNHWVXSVBICUCCGSGDXLBALACAYFLJMJVPVJYGKZUXBOOIKJLQVWITNPTSMABYSZDIPCZTKXTNVDAMQYUHCSYGGWNPBCDPWRTJXRGEEYETYVUSRQEBOVMIFEDHACLNXBMIIAZUKJTHRY");
    tmp_msg_1.leader_speed = 0.0265463426397;
    tmp_msg_1.leader_bank_lim = 0.547993799319;
    tmp_msg_1.pos_sim_err_lim = 0.271002150053;
    tmp_msg_1.pos_sim_err_wrn = 0.323793783231;
    tmp_msg_1.pos_sim_err_timeout = 44477U;
    tmp_msg_1.converg_max = 0.114993166988;
    tmp_msg_1.converg_timeout = 43928U;
    tmp_msg_1.comms_timeout = 4325U;
    tmp_msg_1.turb_lim = 0.00916815220947;
    tmp_msg_1.custom.assign("RZLVDMCPTMGNRKXNVAFBGQWSMKKHFLRKIBYWXTXXYWOUBDAHSOGGPEEUARNQYAHFLQUYRDFFUVKZGFONCZCHUTVMEPWVFJAVDSTYIQZGTMNDKMHIJURJSSWXGYSSAEJZNUQOEXKWCB");
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
    msg.setTimeStamp(0.569869155573);
    msg.setSource(49896U);
    msg.setSourceEntity(172U);
    msg.setDestination(56209U);
    msg.setDestinationEntity(232U);
    msg.source_man.assign("HUZACGTTYALQFLEGPFSIHMIPYAOXJVMSHWAIPNVUJETQLOJXXPJJCOQCZOZDMMBLQZRHLBYZGMNWXOBYNKVBSCMFNWXIMCF");
    msg.dest_man.assign("RCBLFXQPBUHUUUPTACQYUSNIQGGPWAKCCXBFLVEXZQNEQKIWIVDHUKRMFRIWENAXOTSWORAXOORSPHGOGVBWJCF");
    msg.conditions.assign("TIYORISWNGJRXQWRFHVCDIUAGOILAXMBCYNRCDSXANRVPSLBEIEOFMIFRQEGOEXQUCASZUEKXZDKFVEONYUSZEHHJDDPYZOWATKZCLJRZVHLOPBMWBNMWLYOGXDKMKIDPYAHPPAJFTAKNUXFHQQBSVCPSCJHHJWSYYCEVCLWUJXFYAZRSZVUTCVUVJGGQOQGNTABQRGFTMHPYFJGKQLBGWNVUSMIWDXKIULKZBZMEWDB");

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
    msg.setTimeStamp(0.489838643543);
    msg.setSource(14600U);
    msg.setSourceEntity(219U);
    msg.setDestination(34566U);
    msg.setDestinationEntity(146U);
    msg.source_man.assign("PLNWHPSIRFHCVSHQEZRPZNBVETZQDPYNVOAPHMGXSJQEHTWSMWRFMLEAJONOFMXCVXTUZDSOGYVXQMLECQMDTUYCOGTNAIYPCKBEPMSORHBOPWYXRCIUYTXGJDLCBQFNAIIZSWFEZDWFJPSWMURTTLFXYJMENIJUUVGOGQZANVIDELJXUALVXSRKKLHUEKKWUFBSQID");
    msg.dest_man.assign("WIXWMHKQOYAZANUXHOCCVIMEHTNOBTGERXDXOOECVNBQYCFSGCEXNEJMWIRFOEWKRLLAJNJSAZWEYPIRXJZDPZPELUPLKCSGHTBZTCLBDDHRTADUBBJGKGUQIZAQPIFUISDQYHMLYSSZRRFMAUCDGRTNEFFWQDPBBXDSTJY");
    msg.conditions.assign("OEPYFKTYZZIGUGRHHEFSUACQESDMKYCYCQSZBNROMTTOCVOLRIZYOWJDSWGEKFNOIQAMHJPCUEQKFGFDYHHADXTOMAWCVZLFQGJJLHTVSHJZLMELSKXZDILSVJQSYMYQIRNULJNDPINNAWIEGWNRYGHPIUXBQUKTPGMJOZVUBBBSIXXQSHPAVCNXOKARXFFVKWRWJGBBVTRLBFUMEWNXDBLNKVWUMCZVXCFTCGPRKHMBPDRDAEL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IOBOSKZEDWFTLOTQYHFZKAZNQCQLDECYHVPULHSDKDURAXFMNSUEXKWAYDNELMQRCQXZXGJOLYPYRYEBLCWXXBAFTUCVUAQKMJZLSPTGSVEDTKMRJFVVBNEGHZYCVGGNDPZEJJSMRAABJNIIKOQELREZFHOCTPGVLZBHFCYSXOQYWSWOIXQIBNWUFWUAIN");
    tmp_msg_0.predicate.assign("NFWJUZUATAOYLROBELEIFWHHNAQXDBVLIBVRWKCIEOBGRIJPXZIPNODLHKPDNTAHDL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IFQVBIXWJCEYFRZOOXOYQNHZFSQMVUKJGMNJHFHXWDNJGSIKRSLUOIBZERWXNVAHXJYEMNTASLIHLRENLZYVBWTUKTEUEVQSD");
    tmp_tmp_msg_0_0.attr_type = 3U;
    tmp_tmp_msg_0_0.min.assign("UZIMEROJXNOOWELMWWXXDMARDHLIJLZBPVEKYQBKXSUCDRHHZKCZIAPTNYHMWFGNUUVFQQUQWFOQETGDEKTJJVFYWPZBHPXMSZCRYCTPVDDEPAFJKFQECHFNIANINLSBNJNWWMABXDSGFAQVKRSDPSCLTBRSOBNZIHVOXUYYSTYUAZI");
    tmp_tmp_msg_0_0.max.assign("VGQSDQLZELNDTZKVNYCJATTWMMHPCGZVHHUNJDEZSQQEBDEENIKBODAIDKSMMAOEQGCZSHBKILORUYYSYJKRJFMLTAPONNDWKKZOHQPOVT");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.689710190235);
    msg.setSource(8474U);
    msg.setSourceEntity(55U);
    msg.setDestination(63534U);
    msg.setDestinationEntity(159U);
    msg.source_man.assign("WQABGAXKQIGZPAFZQLDPZWSXWYMYYHNJAJYVTDOHVZFCOGCZMXASKNTQXISYIUTMYIDRIGHSDCICTMWYWQNYJMJSGKUZKRMPQRQONTBDKFILXLSTEQHGFFGCEHPOUOIGFMPUWLLJNHTUEJVPGVARLUNEE");
    msg.dest_man.assign("UQNXEHJNXEPDZXWZROKJIALOJYDSJJCYLBAUZQCBCKTTFXALVCFQBVAFVQMXRJOGZUNLVBUFSEUUODKLHRNRVTDCWYFQGBPGSLBXFWVWNWPPWAHVLRINGNBMUJGMGYBIDCDDREASZPOAROOXKLJKCHTLFGAETETXKDZVOPGSPYIHCDIDTSFSQMXYLKTHGZMAIIZRWZJVMRRNYKQQPSEPEUPWWHEXIEOHSBYQMYWMMVNKKTNJFFZBHQS");
    msg.conditions.assign("KLEYJNBLMVROPDWJGHSKPXQQMIRTYQBOULZVIGXPNFADHXQFNJUVKOWUURJMWCEHYX");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 178U;
    tmp_msg_0.time_remain = 0.854062336855;
    tmp_msg_0.sched_time = 0.083274311008;
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
    msg.setTimeStamp(0.0185705580253);
    msg.setSource(65259U);
    msg.setSourceEntity(131U);
    msg.setDestination(48998U);
    msg.setDestinationEntity(156U);
    msg.command = 44U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LFQNANVGHPUMMSELBXBODBCTBRZEGZWBNJXDFK");
    tmp_msg_0.description.assign("WLQJIAMNEFRJAVXESHOBLVBHWYOZKBMVQWUH");
    tmp_msg_0.vnamespace.assign("ISVRUAIOOBXAGXYQAPMZXIRQFAQKRFFCXJDYUX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LIWIDBEBYRNJVW");
    tmp_tmp_msg_0_0.value.assign("OGKHLGGJYVSELFSPVYAHBMWXERPDTRZOUDDDQVCMEDRSEFYSBBQSJVBXTNKUZFCFIZDLQTHBDKFIHVEUAGFKJASAXTPIYPJJMXUUFKODYAAQIRDHVJFLOLPJNLTUJGJWQOMNZWUBNZZLCWSPNMFTKEXAIKQBGPURAEHHCAC");
    tmp_tmp_msg_0_0.type = 77U;
    tmp_tmp_msg_0_0.access = 157U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SKIAAYUMDQNEMOBPSPKPMEPYNMBHMPYZWUHOCCMYWSKTHXTVRGKDFRLLXJZLBZYHPFFIEZGKGONANWBMVAGFEFTZINYUQVQOGPWYTRZZFHSXXGTMLMUEVRBUSRINDJBCLFLXUWOTYNKOANWWWMIQSVTLVJFJQPPFSQIULKBTDWDAROECONAOBQICUHWCRSADKIHGDLXUJHNGDEBESV");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ZNSKQHILBO");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 10618U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("SLGVJANRIOHAATNJHOCNHNUGILMZCOUCYFUWIOMRXZRGRWNZENVMQEBHFIXGEMSDLPUSDUAAPZWXIUMPFSBPGBWLKZTMGTKEYMSOBCDEJTISVZIGQKVWYEGJVAMDKWIOVRHMRYKCKELTLJOVHYBCNZKXWKBYOGAXOADQELZZYCNHXPLLIJTTQBPRQUNRWPXCDQZAURFQYPJMDCQDYJXEOTSQFSRAFPG");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("KYEEGRQBSTRMTIJQZFVTPEUQDJQLPKZKARLZDIROXMOCEUQGUGISLWIARDJKJHPZZKSCYAMITSOBNBCPMVIRWQVNNJTCVVRWFDNBOOSZXXDYUTGXYBFNGLYGEJAOOKYFUFDRXYDKZMACHCJBMZJKVTHYBNTVYWPOADCPHSPELOLZQVICJUAMPGSMSCFREP");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::CompressedHistory tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.base_lat = 0.328286588738;
    tmp_tmp_tmp_msg_0_1_1.base_lon = 0.985575145625;
    tmp_tmp_tmp_msg_0_1_1.base_time = 0.763720163624;
    const char tmp_tmp_tmp_tmp_msg_0_1_1_0[] = {-127, -123, -47, 77, 105, 100, -79, -92, -78, -127, 32, 32, 24, -56, 69, 1, 41, -46, 79, 116, -78, 36, 68, 40, -118, 15, 25, -25, -86, 1, -59, -21, -22, -44, -64, 56, -55, 19, 15, 48, -59, 106, -95, 110, 99, 54, 107, -13, 125, 51, 56, -35, 96, -107, -14, -68, -34, -97, -94, -47, -122, -28, 82, -87, -82, 97, -80, 2, -89, -98, 20, 27, -128, 75, 114, -4, 12, 65, -98, -70, -23, 7, -118, 56, 61, 38, 78, 80, 120, -123, -41, -83, -20, -48, 103, -105, 17, -24, -40, -38, -51, 120, -106, -49, 8, 43, 84, 82, 27, -121, -83, -122, 31, 90, 27, 111, -17, -47, -58, -75, 48, 72, -99, 9, 15, 71, 38, 68, 36, -66, 117, -84, 45, 112, -31, 42, -64, -109, 101, -17, 87, -97, 60, -2, 76, 44, 64, -33, 65, -94, 38, 122, -80, 37, 47, 10, -126, 99, 17, -53, 16, 12, 95, -32, 114, -53, 65, -99, -63, 87, 5, 65, -36, -50, -4, 46, 59, 76, 14, -103, 75, 53, -16, 48, 67, 122, 17, 64, -125, 106, -95, 95, 54, -93, -122, -60, -1, 38, -33, -12, 12, -75, -62, -19, 103, -128, 2, 77, 108, 70, -50, 106, 104, -77, 16, -66, -98, -79, 9, 10, 83, -85, 40, 3, -92, 62, -15, 12, 62, 122, 34, -27, -71, 21, -113, 35, 27, 120, -23, -89, -128, -32, 56, -83, 112, 18, -110, -83, -108, 73};
    tmp_tmp_tmp_msg_0_1_1.data.assign(tmp_tmp_tmp_tmp_msg_0_1_1_0, tmp_tmp_tmp_tmp_msg_0_1_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_1_0));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PH tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.740462810459;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.664372856086);
    msg.setSource(36357U);
    msg.setSourceEntity(117U);
    msg.setDestination(45376U);
    msg.setDestinationEntity(37U);
    msg.command = 51U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PMZBJVTWUWOKFRRUATMSRVAFPEXIEPDOKNSMNAECMYQMATQYTMCCVLBGWGLBUKPQRJAYDGVUAYISZZUNYVXHQNONLFIGTLQICPSSHXKDKSWWPIMFEFWUHTFSXIXJAOZDGCATASJLGLTCKDIHGEQIBIWZYVQCTSIWDEHHXJEXHBUJWREGYBVFULYZXODFKRCSVUOPGGRMKAJLNYBJHBNQNDJDPRPCWNBUFFRZQCTXLZOKOVLQOZKPNEHEZRH");
    tmp_msg_0.description.assign("OHZGQAEMTDFKWDBGEOIRWQOQ");
    tmp_msg_0.vnamespace.assign("NUSFYNITFGQYKGFCVCZEZDMZYHEPRJGQDPISLBGZVGKENLUHJQUQOVOYPULGLPFDEKNQCVJRRWALSNISZKQPTDWBUHADMDNXMBUAHITFFMMSKAWDAXOWTLRBLJOOCPGKHCZBIXBIHTAWPDNVRLZHCWMQHDYTDMBNO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IPATUWQHCGNIOUJBDRHUAJYSDVSZRXRNEFBGBMRMSVLANCSVUEWKLQISGVPMZYMIQFLLFOBNONRRYWJDI");
    tmp_tmp_msg_0_0.value.assign("KCNYZNMKFEHTMMRYUZ");
    tmp_tmp_msg_0_0.type = 18U;
    tmp_tmp_msg_0_0.access = 211U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LLOPBGABYKKOIQRRDAXFDVAVRZGNVSQUGHKEVGFXUKFHAHWMYHXQZPZJPLTQIEGNYSUDYGMAJKBRVRCICSJGKFWFMPXZUKBWFBVBTZMXMBIYJDGDNHEHTCODHCZVQQNYWMLEXJBTSCHOYEADZYJMFMIBPRTCMSYSFKRTBNWUOC");
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
    msg.setTimeStamp(0.616563903377);
    msg.setSource(43353U);
    msg.setSourceEntity(64U);
    msg.setDestination(1236U);
    msg.setDestinationEntity(84U);
    msg.command = 232U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JLVTGVHNJWLENFEKXMZZQMCZKYWDULNIOYACSMBVEXBDHFFWKXBROLVJILGYFPYQGBSXRWPYTDWTBOEJEIEVXIUGF");
    tmp_msg_0.description.assign("LNUREWZHJDMHRXIJVZNBQHVQEFJPDPTDRMRNVGGWOVISKYXAOQJRDHCANLOHYQCUVGQZHCIOMFJVMXBTLZTYQGIDUXKFGWMKAXFWHEEAAGCDLAFCKTRRBW");
    tmp_msg_0.vnamespace.assign("ZTIHCMEYOQMATDFZHELAUPYMOQDHVRGDIXNOLCFNWHFAZGFBOVNFHXCKELLAUDEDVFNTIUPZLJZVWGMDWLOPBLTGVQDUGYSOZHHSNKWZZNNXHEQOWQVPUUBEFCNXOIEECAFGMGSMLIEHCPWJSARGTCICKGHPBQKFIZOJBAXTXRSTYNMRSJEPJFYPDYBXSMKURGBTTJYKDWJYRJQQKRWBCIVVDRXCKZJUXNYWPAUBLKRYVAUJQATOWIVLB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FMUFRRGPFPMNAFHEZF");
    tmp_tmp_msg_0_0.value.assign("HXYYGQVDRCENTWAYMJWGQIBQMHBUMGAQWWPHFLITVLCMSUUYRJAKUWPXYSLOTNBNEGJKIGZGXHGOFNDAZHSBFPNIHXVZWFSYCHVFLDLZMFREPDMGPQCFDLNIZTAOQKJBMNEARPJPCXBEAVPXRVEWZRJEWUKNKJALFOUYIMKXVTRPDKROEXLCFCDSVKBSILPYDMOGHWZILNOCKVOXYSZREGMBDTDTUKSOJUZSTAJNAUQBBRJITUECFCHW");
    tmp_tmp_msg_0_0.type = 169U;
    tmp_tmp_msg_0_0.access = 138U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TVSRIPMLNMSAVUYGHJHBIHDAHOENXHYCPXUIEHOIRNWLLXFCZBAGTZJZZFPMCQKJKYXBBYGRCECAWIRFMJSWKGLTODIMMWOPSFJLUVCRDWQJVNMKWYVRPKZCSZWKOMUNIOYEPQUITEBFNVQHZQLNBTNRXPDBHQUYEGSZCJAFRIMMQAXNSTIOJZULWVGKCUHJXKRGQBORPSTVOOTVLPZDLAFQAWDUXKJAFYPSNGBXDG");
    IMC::CrudeOil tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.697841621425;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.734997303191);
    msg.setSource(13997U);
    msg.setSourceEntity(242U);
    msg.setDestination(55984U);
    msg.setDestinationEntity(101U);
    msg.state = 238U;
    msg.plan_id.assign("PVIPTCEPYQFSMZXUVNVGPJEXNFH");
    msg.comm_level = 254U;

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
    msg.setTimeStamp(0.429133206536);
    msg.setSource(32459U);
    msg.setSourceEntity(239U);
    msg.setDestination(30082U);
    msg.setDestinationEntity(178U);
    msg.state = 23U;
    msg.plan_id.assign("QOACKSBQFTKNOWWPGWGXNSJIWDFKMEQBOHHYPJQMYGCIOEHAOGGFQPUDSTTODFFKAUHYSAMLNZDTHFQZWBJZUSXIEBUNPSEUWQJXQEKNJZATBALRLDYKFXRXLQLPTIMRNIPCDGTLMEPKYTG");
    msg.comm_level = 204U;

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
    msg.setTimeStamp(0.862508841461);
    msg.setSource(5986U);
    msg.setSourceEntity(167U);
    msg.setDestination(59523U);
    msg.setDestinationEntity(250U);
    msg.state = 205U;
    msg.plan_id.assign("DXEZZABSHPLNENBUBGRFKOIAXMYAYKWZJCRQO");
    msg.comm_level = 242U;

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
    msg.setTimeStamp(0.416177488915);
    msg.setSource(16177U);
    msg.setSourceEntity(248U);
    msg.setDestination(48257U);
    msg.setDestinationEntity(183U);
    msg.type = 26U;
    msg.op = 238U;
    msg.request_id = 50615U;
    msg.plan_id.assign("AAMLYYUPCDXRASHPJSEFUIMAGUXWEGRTEMHVNPZJMLSCOIFDBRKQVAOWSGALFQLCXBDELPYMYXDBGBEVLATRWWHZVLJLYHWEVBRQU");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.765796117527;
    tmp_msg_0.speed_units = 133U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PFSUGYSDAIZREMVCFMEVVNYXRIKVIIPDTTKFMQHQDNZBMKSJVUL");

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
    msg.setTimeStamp(0.401538397919);
    msg.setSource(16405U);
    msg.setSourceEntity(68U);
    msg.setDestination(25101U);
    msg.setDestinationEntity(126U);
    msg.type = 210U;
    msg.op = 102U;
    msg.request_id = 48880U;
    msg.plan_id.assign("HOSGRSBWDKINCXXOONUQTFYBTQXOMKMOYFVHETAGZTXIVCEAKRJNPQXBSYBUAMZVLIWKTAYVDAGHCHPRIQAEOTPDBEEH");
    IMC::PulseDetectionControl tmp_msg_0;
    tmp_msg_0.op = 59U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VWWGTSYBERHWSPRCNGCVSPKAMCGDCKLSUPWWBHFTBPSKDFHYIYPQHKKYOVXRAPAGVBOBJOUMABGGLKHQOJQJJNZEDUBMMEZZUPVANQDNJKQHJTHZNOGGGFSMKLASVYYELXIPHOZZDCFSBRNMAREIFLQFGIWFXRNIUEEWFJRHYPJWTHXWZNOKUOVMFCCZIITEUVUQMLXIYEJJPSDC");

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
    msg.setTimeStamp(0.138522196625);
    msg.setSource(17859U);
    msg.setSourceEntity(250U);
    msg.setDestination(55122U);
    msg.setDestinationEntity(118U);
    msg.type = 166U;
    msg.op = 238U;
    msg.request_id = 38868U;
    msg.plan_id.assign("PMLLPWWZMGZSTTVUGGONRXQFVWAIJXPJHESOQBACRTWK");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 19001U;
    tmp_msg_0.off_x = 0.866664741433;
    tmp_msg_0.off_y = 0.60819328417;
    tmp_msg_0.off_z = 0.412081046799;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BMRAAJIIJEFFVUKTOUKZPLBDSQIURFMNAHMXYZZPQLYVWYTBKKVLWVGVHGUUBIITCHWYAZKXGDMAUXCLHBSWBPMJITEMFQSRQZSYXCKYDEKKGSJWEUQWCDAGEMPDHONGDDJRNFCCEHTABPHTQZIUMCFJJSSBPCMLSLFNZO");

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
    msg.setTimeStamp(0.0106937022026);
    msg.setSource(220U);
    msg.setSourceEntity(194U);
    msg.setDestination(37238U);
    msg.setDestinationEntity(233U);
    msg.plan_count = 7474U;
    msg.plan_size = 3022930978U;
    msg.change_time = 0.42848794115;
    msg.change_sid = 48135U;
    msg.change_sname.assign("SFBZZBSCIOWJQHSUNMOFSCHVACFCCEDTDJHQFRKBUGBGJMBDCXYPWUHFNMTEHPILMKWOEBXCVHTUYATVAYWNQVEZCUGRIENTYAKHCJGRFFBDYSUPJNTBWWPSLGJRTKUODDX");
    const char tmp_msg_0[] = {-127, 71, 88, 99, -4, 80, -53, 111, -76, -37, 78, -64, -34, 93, -12, -5, 16, -107, -46, -51, -5, -121, -25, -61, -11, -109, 78, -90, 120, 103, -69, 55, -107, -22, -47, -95, -96, -103, 47, -60, 74, -16, 77, -122, -106, -126, 87, 77, -65, 66, 88, 35, 85, -41, -41, 75, -125, 83, -10, 11, -10, -69, 15, -42, -34, -122, 15, 94, 124, 74, -67, -50, -10, -55, -30, -28, 79, 123, -125, -77, -109, 21, -94, -13, 96, 80, 120, 67, -52, -98, 1, -3, 50, -122, -111, -98, -11, 47, 69, -41, 85, -115, -60, 82, 2, 117, 115, -34, -40, -40, 106, 61, -64, 26, 20, -93, 8, 13, 70, -33, 52, 44, -81, -112, 45, -67, 29, -118, 69, 62, -120, 74, -82, -91, -125, -66, 59, -42, -20, 119, 114, -88, 54, 122, -4, -3, 124, -28, -99, -29};
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
    msg.setTimeStamp(0.205643847099);
    msg.setSource(11291U);
    msg.setSourceEntity(188U);
    msg.setDestination(47817U);
    msg.setDestinationEntity(220U);
    msg.plan_count = 14318U;
    msg.plan_size = 1360626865U;
    msg.change_time = 0.226388014769;
    msg.change_sid = 12075U;
    msg.change_sname.assign("CKPPRXQLDHDXKZCYGROSVJHGKSJJXFOKEDNINAGNFFQXPMYHOYNETINAKPLXHVMIDHMHOANWOFBVDWAVYZOLETIBJCEZPEITQTXGLRYWURUL");
    const char tmp_msg_0[] = {-85, -38, 12, 110, -62, -96, -109, -93, -46, 126, 50, 111, -25, -36, 56, 114, 17, -40, -59, 44, 31, 48, 21, 63, 13, -84, 66, -63, -29, -127, 16, 110, -77, -103, -18, -51, -38, 109, 108, -49, 45, 10, 28, 122, 34, -19, -53, 38, 124, -51, -100, 107, -50, -9, 86, -37, -73, 66, 73, -31, 74, 77, -33, 119, -55, -4, 68, 73, 84, 46, 33, 29, -79, 90, 5, 64, 102, -38, 82, -51, -81, -10, -34, 60, 46, 126, -55, 81, 81, -77, -79, 92, -110, -75, 82, 35, -34, 36, 77, 79, -122, -15, -39, 102, 29, 47, -18, -50};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZICBNYYXDHBGBOJKRBKYPXMEQAQFSSZBPT");
    tmp_msg_1.plan_size = 63357U;
    tmp_msg_1.change_time = 0.318154854465;
    tmp_msg_1.change_sid = 16334U;
    tmp_msg_1.change_sname.assign("GBIMDWCIBJTVIAFMOKVSHZTCAUJNYJOKABLMLVUGBXCRGCUWGSCRYXJAZOFWYBDVYRWIYGJNPDOAVNTHCLTYIXDTAPPTGEUOWHDWWIGZLS");
    const char tmp_tmp_msg_1_0[] = {98, 116, 22, -13, -76, 58, 62, 37, -31, -61, 6, -46, 73, -2, -39, 101, 93, -25, 63, -120, 9, -32, 48, 83, -85, -63, 2, -47, 84, -41, -65, 111, 100, -37, 48, 93, 0, 86, -111, -39, -74, -22, 92, 102, 43, -123, 21, 24, -104, -107, 27, -82, 34, 104, 51, 114, -114, -65, -22, -109, -52, 115, -63, 70, -61, -101, 122, -74, 25, 90, 22, -68, 107, 34, -79, 70, -91, -59, -20, -60, -93, -125, -22, -71, -122, 64, -1, 65, -30, 37, 52, -61, 27, -81, -32, 114, 3, -128, 102, 55, 18, -19, 19, 80, 51, -49, -10, 14, -101, -78, -32, -45, -120, 53, -13, -37, -64, -42, 100, 99, 38, -23, 125, 71, -85, -84, -101, 48, 36, 101, 69, -43, 18, -125, -50, -16, 70, -67, -19, -114, -49, 70, 119, 95, -16, 69, -90, -128, -46, -80, 110, 121, -45, 39, 43, -91, 23, 19, 74, -97, 108, 17, -16, 10, 10, -4, 40, 92, 109, 74, 117, 105, 85, 82, 32, -110, 48, -124, -15, -20, -29, 9, -71};
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
    msg.setTimeStamp(0.633724884596);
    msg.setSource(28852U);
    msg.setSourceEntity(171U);
    msg.setDestination(60352U);
    msg.setDestinationEntity(184U);
    msg.plan_count = 15127U;
    msg.plan_size = 173714346U;
    msg.change_time = 0.442622224561;
    msg.change_sid = 49985U;
    msg.change_sname.assign("LLCHVFWMOBSLMTZMFFQIWTNZYIQUSSLAHTTZNOJK");
    const char tmp_msg_0[] = {55, 98, -31, 82, -32, 48, 111, 59, 97, 49, -61, -121, 112, 78, 120, -113, -1, 67, 122, -116, 30, -125, 17, -66, -4, 29, 61, 126, 12, 74, -105, 116, -111, 72, -32, -87, -37, -4, -74, -72, -88, 109, -114, -107, -123, 96, 109, 66, -114, -8, -5, 58, 4, -66, 108, -35, -40, -62, -124, -56, 26, -109, -124, -118, 123, 11, 58, 19, 24, 88, 69, -110, 22, 126, -91, 98, -66, 108, 52, 102, 52, 67, 44, 33, 23, -105, -83, 24, -68, -36, -103, -84, 30, 61, 1, 71, -64, -10, -91, 120, 49, 30, -101, -76, 74, -26, 9, -51, 52, 28, 3, 85, -114, -41, -44, -99, -40, -98, -51, 104, -92, 68, -46, 126, 124, 1, 44, -102, -68, -40, -19, -67, -23, 14, -50, 112, -37, 55, -41, 125, -124, 97, 98, 8, -128, -24, -26, 88, 87, 51, 16, 84, -9, 58, 10, -33, 44, 2, 95, -58, 1, 73, 115, 55, -64, 1, 42, 10, 48, 20, -30, -77, -9, 110, 101, 27, 119, -75, -72, -92, -81, -26, -69, 66, 30, -81, 79, -34, 49, -80, -44, 104, 15, -40, -61, 91, 32, 84, 69, -11, 93, -63, -91, -35, 32, -64, -50, 86, -45, 39, 14, 121, -80, 53, 84, -84, 34, 106, 100, -23, 49, 109, 107, 89, 1, -95, -48};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("AVUOXPXZOSCWXXDYLNYPZIGHLNGCNEKHMHHRIAJXXAAVPNJPWMWQDGFUWHSJEGUJKTLOMJGCPMFCNJFOBQPORBIWMYZQTLSDOWESVTEBRMBHNUADCMUKQEJYKOIESWZSIBIYFBZDENYVBDLVGILUXUCELQHIYPJGWKAFUTCWXRBGRTDZMVOKBDSYNLNMQHTOHBKQTCRVYVENTGPCAQFATPXADJIRSZVHXMTFZUFRWOPSVQKRDRFYKCILLFKUJE");
    tmp_msg_1.plan_size = 27779U;
    tmp_msg_1.change_time = 0.793712655559;
    tmp_msg_1.change_sid = 278U;
    tmp_msg_1.change_sname.assign("FMGABDABCEUTNCAVYWDRXKKMJPKQBQRYDWFPOQKHUOTZPTTWSFWYDTMKXNKHMUPQSGRWNBQVRYXVSNGCLWBFAGPYGUHMFMMPSCORXHAKFXZFQZIWLPY");
    const char tmp_tmp_msg_1_0[] = {95, 94, -118, 108, 55, 86, -111, -6, -74, -12, 22, -14, -102, 123, 86, -121, 110, 51, -42, 113, -59, -60, 124, 28, -90, 70, -86, 79, 26, 4, 123, 49, -107, -3, 95, -54, -101, 37, 101, 49, -122, -40, -120, -3, -103, -91, 8, -67, -65, -30, -82, -36, -109, 106, 16, -91, -103, 77, 47, 106, 10, -92, 126, -104, 78, 11, 30, -34, 93, 57, -117, 88, 46, 58, 106, -12, -45, 112, 126, -41, -8, 9, -67, 0, 2, 120, -39, -52, -47, -83, 34, 78, -16, -104, -108, 0, -85, 14, -95, -93, -44, 121, 44, 75, -101, 26, 126, -12, -44, -79, 78, 56, -16, 49, 15, -93, -35, -118, 93, 44, 123, -112, 121, 94, 12, 70, 75, 124, 78, -13, -108, 71, -63, -92, 88, -67, 15, 119, -85, 121, 57, -107, -112, -12, -114, -119, 119, -104, -32, 28, 66, -55, 13, 64, 96, -109, 98, 35, -61, 61, 73, 100, 80, -27, 67, -128, -50, 91, -37, 71, 57, -18, -127, 86, -49, -114, -38, 15, -13, -74, -31, -69, 37, -108, -35, -84, -46, -11, 52, -126, -90, -12, -115, -98, -106, 91, 12, 78, -27, 25, 71, 49, -109, -60, 100, 26, -31, 65, 4, -104, 32, -93, 63, -12, 39, 112, -57, -65, -2, 23, -74, 77, -68, -94, 102, 45, 36};
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
    msg.setTimeStamp(0.463553278405);
    msg.setSource(61978U);
    msg.setSourceEntity(109U);
    msg.setDestination(50915U);
    msg.setDestinationEntity(55U);
    msg.plan_id.assign("NPFCXAQOVINVMFMVQGJVVFJNPMLTXZXINPHQLKERGVGAKVTBQSNRUYBJNAQBTDHLMLYFUIGDWKHSDPFYWXLGLMPSSWUVDHKBTOYDLHGRSXBCBDZIKYRQDERGYLCOVRJTHKEQLWHXUUHITWOAQPAZPBRDNPDCOANBEIMWWZ");
    msg.plan_size = 49534U;
    msg.change_time = 0.142057489591;
    msg.change_sid = 36559U;
    msg.change_sname.assign("ZTMAXKRMMYTIJDVDNWVMJLGNGFARYBTGHAHBPJQPCZOWQWZIMDWKVAJLAYSHRFGHNQIPLOMICBRGGTDKTVIFDWBYNHIIEFURPXOKVCEESTFDNAOGUVEKPELYQNABQUOKDBJIWTHLUQSWZKRGWXTNCLPOJRATVOR");
    const char tmp_msg_0[] = {-18, -15, -10, -28, -73, 98, -72, -75, 26, 53, -86, -123, -51, -122, -25, -76, 112, 62, -10, 116, -112, 74, 96, 24, 73, -38, 79, -123, 60, -43, 46, -10, 39, -80, -55, 33, -22, 115, 14, 30, -14, 80, 62, -63, 68, -10, -46, -22, 82, -26, 114, 108, -10, -109, -17, 26, -90, 112, -2, -27, 27, -93, 6, -95, 121, -28, -105, 63, -102, -121, 68, -96, -83, 63, -97, -42, 2, -81, -121, 87};
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
    msg.setTimeStamp(0.910694618049);
    msg.setSource(56473U);
    msg.setSourceEntity(55U);
    msg.setDestination(14866U);
    msg.setDestinationEntity(211U);
    msg.plan_id.assign("RAZDAVGVFLTRQBCIKKZGGNXSEHOBWUMZMTMFRRQXYUANFDQNNVSPKJUXEUQGYZK");
    msg.plan_size = 7027U;
    msg.change_time = 0.414721916801;
    msg.change_sid = 61266U;
    msg.change_sname.assign("KZHRCOHERJWEOPVEYTICMFLQPVSACDNQTQHNDBLNUXXWZNL");
    const char tmp_msg_0[] = {73, -51, -22, 80, -80, 24, 51, 15, -9, 17, 94, 31, 4, -126, -79, 73, -12, -67, 119, 115, 22, -57, -103, -112, 16, -56, -8, -106, -7, -102, 28, 15, 7, -43, 50, -104, -95, -19, -42, 79, -100, -73, -108, -25, -16, -17, 45, -36, -43, 113, -81, -111, 59, 75, -71, 80, -73, 59, 73, 23, -119, 13, -34, 116, 91, 43, -14, -38, -122, -73, 106, -63, -124, -63, 59, 12, 29, -110, -56, -102, -37, 25, 118, -99, -3, 53, 2, -79, -78, 31, -103, -30, -69, -113, -72, -39, 124, 71, -39, -113, 54, 22, 21, 120, 22, -50, -10, 29, 102, 60, 57, 84, 101, 52, -117, 61, 1, -95, 10, -59, -121, -6, 52, -56, 30, 66, 48};
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
    msg.setTimeStamp(0.769309589216);
    msg.setSource(51765U);
    msg.setSourceEntity(33U);
    msg.setDestination(9662U);
    msg.setDestinationEntity(123U);
    msg.plan_id.assign("GTLNBHEQIQWVO");
    msg.plan_size = 57813U;
    msg.change_time = 0.623828524282;
    msg.change_sid = 5073U;
    msg.change_sname.assign("SYDHHCSDUWNGOGJOWUDZEIEZEURCBOCCPEBDAMQSJWHSWSJUKJDEBVCONXAMZQHYZVYKPRXMI");
    const char tmp_msg_0[] = {-86, 37, 1, -73, 61, -107, 94, 46, -113, -37, 42, -68, 106, 62, -82, 110, 113, 27, -88, 117, -119, -15, 32, 8, -96, -68, 49, -102, 39, 106, 100, 79, 39, -91, 77, 78};
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
    msg.setTimeStamp(0.694258567567);
    msg.setSource(51121U);
    msg.setSourceEntity(69U);
    msg.setDestination(60077U);
    msg.setDestinationEntity(119U);
    msg.type = 209U;
    msg.op = 77U;
    msg.request_id = 58619U;
    msg.plan_id.assign("OQYEECILMOKMJXTCUUIKCBBPGECDGNWIPVVRDDNSJLMUVPNHUOUASYHZEAZNKSQKIIGIDGYWQUVAJPVYMAJDZFQNWXFURGKDKBAIXBPRQXWHHQZMSTLMEPRZAXJMHOTGRFIHDTHXKTWXZOESRCBAFEBRTYGOCVLJBOCYYQALWZFHFKRTWPNJYOGRTKYM");
    msg.flags = 34666U;
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 65U;
    tmp_msg_0.value = 0.820570255408;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HIPRENFYJXCSOEFNZALAKTZIWQIJTYEQIPOMUCWATEJFFSH");

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
    msg.setTimeStamp(0.790738774231);
    msg.setSource(17690U);
    msg.setSourceEntity(162U);
    msg.setDestination(52181U);
    msg.setDestinationEntity(146U);
    msg.type = 82U;
    msg.op = 54U;
    msg.request_id = 34354U;
    msg.plan_id.assign("YDENANVCGRNFTVRQCLRFPZKKTKJBNNGHPXUOJPCOFEWAXDYGLWWKHVYSFFWOGBCGKEFTVNKAPBSPHUJJSPIGHADOFDXMLWWTJASLANEZJWHVQKVDQMXRDIAEHPC");
    msg.flags = 33949U;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 58824U;
    tmp_msg_0.type = 212U;
    tmp_msg_0.utc_year = 6838U;
    tmp_msg_0.utc_month = 170U;
    tmp_msg_0.utc_day = 232U;
    tmp_msg_0.utc_time = 0.692760716;
    tmp_msg_0.lat = 0.624412408618;
    tmp_msg_0.lon = 0.416474150748;
    tmp_msg_0.height = 0.570258245806;
    tmp_msg_0.satellites = 101U;
    tmp_msg_0.cog = 0.291795545239;
    tmp_msg_0.sog = 0.502103002698;
    tmp_msg_0.hdop = 0.388949629963;
    tmp_msg_0.vdop = 0.328014099706;
    tmp_msg_0.hacc = 0.560342528949;
    tmp_msg_0.vacc = 0.93581971998;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QLHZAKQABLDWVGINBQIDRYQAJSNVMWMTFXIACEDDWRKWCDPFZLYJCBAJHOIMZQVLYEQNGRRFTNXYEOPDKONWJHKODEYUXXTPXQWUFCUDTWSWHPAVGEUQCGUYBRPLHTHYBGLUEOJMRMFNYFJOONSSGAPHDTXFGCVUFLAIPTRUNKCZVJTCEGWBFVQSIUXLWHZKSGJDHBMIZMPXESELJFZCZMKTAUSRMZKESITVRBZVHIXLAQVSCRKOIBYNO");

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
    msg.setTimeStamp(0.397398982332);
    msg.setSource(12435U);
    msg.setSourceEntity(215U);
    msg.setDestination(43115U);
    msg.setDestinationEntity(154U);
    msg.type = 165U;
    msg.op = 186U;
    msg.request_id = 5148U;
    msg.plan_id.assign("KIUECVLJSQRIIEMCVWSYCLLWZBUVDLKFOIAGPTTMHNVDAPHZEKYJONGNUOPTTPIQSUFAZNDJHVWUKJRNEHDDMXGUXMCHEBWQZDCLCMFHYESNZQFKRVRFFTJGVAMYBRDIOQOZHCTEWAFFHGOOBDDSJKKTFKGQRELLIWLPPYUTAXYSBXAXUPLZYDXASSFSVPCABEVYCXNCPGGZTUNJZZWMVOMQQM");
    msg.flags = 6209U;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FVKUROKGTOWJTRTUVVLAJUSDPKZUQCQZAGRXRFSHKWCIBWMGMECVFXFHJWQNTAZTNYKXIOHLMLGJDQABPALWIRFICTMYHZLHQMDUOHLKGRRGCZJAIYOHMXSXUXTLCBAQEPCYIBEESPBOZMVRENDB");
    IMC::FollowPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target.assign("LJVKPUQHXGXAJXVYRJCMALYKENLABBTQCICUFIOSQDNCRLVZLVIZTRXPGEAKBHGCZUMRPAWDYVBSFMOJFGJEDWSOCOIXNPBFGQUUTLLYSIBAMJBEDWYSJCYVKPVW");
    tmp_tmp_msg_0_0.max_speed = 0.515299037666;
    tmp_tmp_msg_0_0.speed_units = 231U;
    tmp_tmp_msg_0_0.lat = 0.664143696188;
    tmp_tmp_msg_0_0.lon = 0.584768401241;
    tmp_tmp_msg_0_0.z = 0.875120732598;
    tmp_tmp_msg_0_0.z_units = 199U;
    tmp_tmp_msg_0_0.custom.assign("UYAQFLTUUSFJAFHXLDRXFLXGXMWIDXLAEIOBVATTAYFNPRUIBDSTVNKMSZUOKYOWFCHHTBMZGBRHDTRKZZWKFPEQVZWGZYSKVOYGXFDL");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TGCZCZSJENGUGZGIAJTLDQNSUFRMXMRSHNOIJIQBJWXNPDTYSCPTSGKXVURHXLOFKTVXKWOZUYRFAPOMCTCLFZAMHGMRYYYOLZKVSWUIXDIHLNDWTQYBCZEHQMKCQSSXKDKWCYOJGQYQMTIMIVPEOLVEFUBMGTQDFLUBPSPELIRXXWZUBONBJALWADXFHUTMPAWGZCDHQKDERVNWBEJRYHVSHPNDRJNFLKCBKVN");

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
    msg.setTimeStamp(0.504892088214);
    msg.setSource(54270U);
    msg.setSourceEntity(27U);
    msg.setDestination(16417U);
    msg.setDestinationEntity(74U);
    msg.state = 54U;
    msg.plan_id.assign("GXUPEENIAXLDWFPAGBDUCPEIGLOEKQPTCEPZRVFVSHGNOKMWMEYKLHCTQRLRILZUKBMZSSAOMIXKMTCWTSHNFQXUWUYCJZCBRQCXDSOYOJYHXN");
    msg.plan_eta = -515426988;
    msg.plan_progress = 0.644355899041;
    msg.man_id.assign("VYLYMAWIGEBPQELAKERAZATKIEJBSICLRPGRKWEUUTBXZDGQVMJOXFHT");
    msg.man_type = 42712U;
    msg.man_eta = 1018994004;
    msg.last_outcome = 200U;

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
    msg.setTimeStamp(0.249919592206);
    msg.setSource(42335U);
    msg.setSourceEntity(206U);
    msg.setDestination(41759U);
    msg.setDestinationEntity(135U);
    msg.state = 214U;
    msg.plan_id.assign("CBSEZQOKJVHQGFYZGQNERFKTYLVYPYGH");
    msg.plan_eta = -1424579949;
    msg.plan_progress = 0.301197925876;
    msg.man_id.assign("TFBRIQAIKIFPCFTEJRMJPBGBQYGKWCQDRYRUYRWAIXUGTOUEEORPRKLBPBVVLZHTFXEQUAE");
    msg.man_type = 26995U;
    msg.man_eta = -452550102;
    msg.last_outcome = 142U;

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
    msg.setTimeStamp(0.781256660403);
    msg.setSource(61167U);
    msg.setSourceEntity(10U);
    msg.setDestination(47981U);
    msg.setDestinationEntity(231U);
    msg.state = 69U;
    msg.plan_id.assign("NMZXAKMVUIELUKZATJJDOHQCBROPNPZMNTSEGFPCDXUQJVOQREUSBJWYOYQGVUPCGNGAWMAFJARRGQLDKZVHJAZFMNSVAEPKZKHEVMSSXDROVEGFGTYWDVIQXJITFMXIOJPHPNUBHNLBOBOCYNNLWXZPYFHZRXTUDLXPGUMCIOYIGALQFQYETSRHSICKRCWWKKVQRIKUWSHGJPNACMSBOWEDCVLFFDEDZBBXCRYBAYFU");
    msg.plan_eta = -969632700;
    msg.plan_progress = 0.0610023934713;
    msg.man_id.assign("YYZRSMZUJROMEOEBRDFCQDFTWGXYDRIGFDJOEGHMJWKJIIGVNOSRBLZMAKHGYDJFTWPFPFLVKSTSXSOXFYXBCQCMPUQKNZSWWXIGVPAVDQQALEXBEPRYXBAJQOLATA");
    msg.man_type = 54926U;
    msg.man_eta = 1596900389;
    msg.last_outcome = 41U;

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
    msg.setTimeStamp(0.258035963888);
    msg.setSource(64957U);
    msg.setSourceEntity(96U);
    msg.setDestination(1947U);
    msg.setDestinationEntity(88U);
    msg.name.assign("ZLXKHYZIVCSWEWGLUDGWKUZBTMPSUNMHFPJHALBFGILNCDBGPDBYPKEWJAGONPZANCIPCEDLFRWXVMTOTNRTYZFAFMIFRAXGIOVNNQJDCKOJHEAMZZBTRMOSQHZUCQH");
    msg.value.assign("FMWSGRNMNSVTTKDIJZBOK");
    msg.type = 189U;
    msg.access = 94U;

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
    msg.setTimeStamp(0.598544718956);
    msg.setSource(22943U);
    msg.setSourceEntity(33U);
    msg.setDestination(12227U);
    msg.setDestinationEntity(70U);
    msg.name.assign("XECMHVXXPPZYVLPBGUPMMKIBAUAGCNCGYIXRSIKUBRLZMJFQSTAZHKNXBHNZUVTZOQEEOADRWUFNOPTWRZJQSUJCIUFNIVWGRKYFTVOWD");
    msg.value.assign("TRZABNJMRXRLGRPAOTZWEIXFLSQZFOOMKKXIJOMIDYEDZBOQNVQCIHAPSWDAVFBXFFXNTXOHTTKEGWWICVLEKZYMELOBHHWJBCPVNGOMCZWHLQUQHYSIBPGLJKIAJRQUVMDZQUIFPVKHVYCGTJRSCYKCHDUGAIKNDQJXMPYRE");
    msg.type = 197U;
    msg.access = 179U;

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
    msg.setTimeStamp(0.872585776849);
    msg.setSource(6543U);
    msg.setSourceEntity(65U);
    msg.setDestination(37125U);
    msg.setDestinationEntity(1U);
    msg.name.assign("ZKETLURPYPCDUDJLJIONYHNMNZTAJKEGDOMQFBRRUZYFZNBLTVUWWGGVMTNVIOLOOXKTRQGALWDSXSOFGYQHBVHFEQPCVUDFBQXIGXCZYVJKFGAZIWWYRGSEEPTIMRBRYGJZJLXECXULBIRFAYNLKDKMNCHDARDWOUIQARXEKXVKFH");
    msg.value.assign("ZLPXTHFKUMSPWIRXPMWVBHXZPVIJVRLERONOMMIUVCGNCRSGBPPABLSKTKJCYADZOHNTVZGUYWRHUKLYFKFRVDGKQGEYOVEKPBAQHAIFEOSUWLLLDBNGZDKUBEIZQOGQNEPDIZDUYNTCBMJHXHRSTQOMEMXAKIDSBLSUPVMNJCJWVYOHQYFZNZFNHLXCCTXQTJWTMBBDHIDSSEZQWWNROYFDAQRCTAWAUJFYGRXJAKEPXAMGUWGOLYEVSCC");
    msg.type = 235U;
    msg.access = 158U;

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
    msg.setTimeStamp(0.716179022456);
    msg.setSource(28694U);
    msg.setSourceEntity(70U);
    msg.setDestination(42002U);
    msg.setDestinationEntity(254U);
    msg.cmd = 86U;
    msg.op = 43U;
    msg.plan_id.assign("JZRTUVGWTYFOAPUHZBLDKMHJGXZLPTQKLCPZDXMVNTLSMOAZAYVGGRRIIYJ");
    msg.params.assign("VZLKRJYOOPHRIWAAM");

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
    msg.setTimeStamp(0.664921212036);
    msg.setSource(7711U);
    msg.setSourceEntity(160U);
    msg.setDestination(4025U);
    msg.setDestinationEntity(162U);
    msg.cmd = 101U;
    msg.op = 7U;
    msg.plan_id.assign("BEFBCXYTZDKCGHMPHMRVOOQWMWJRBUXFFLUWKVTBTCJNJBGCPPRHPAZCSRFGVIIMYAZWLUMNCVKYETYOBUSBFTADSXHMTNHHLQDDQKCVXEIGELXGZBDAXQIKYTFUBN");
    msg.params.assign("PCSJCKHNWUGXBNTDVOKNIFTAMQROIFTDIZHZHGTHYVVMJRXZCUYZQHOWXWESIKJKTPJKVWFFWEPLI");

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
    msg.setTimeStamp(0.76682617627);
    msg.setSource(48497U);
    msg.setSourceEntity(200U);
    msg.setDestination(31049U);
    msg.setDestinationEntity(88U);
    msg.cmd = 56U;
    msg.op = 202U;
    msg.plan_id.assign("BXXQJYSCITYNPPLCXKGHSSOZVCLIGETTRRUUUGTQMNQHRJIGUIQKKJJYEGCFYXALAUEJWATFSQXEBIMZYJLPOGKRWVLTNBUUTOSDIWANHUCYAKOOARSVMBUQSKJBCEKSIEEKOLAHOZFZYMFZCZAPRHPXKDNDBGXHFJRGIYHONXGHBPZDNWTBMLMTPUP");
    msg.params.assign("OVDFFYYVAKHFWLAUGOUKRUQUXJSXSVNPLMQTXHKDCZKRTVLDTWVNQNLBHYKICZMWUBFSWBFHSJLOQMTRJIAAXRNJOPTKHEGOJXYLHCZDYSZPNPRLUQGP");

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
    msg.setTimeStamp(0.121358254106);
    msg.setSource(57873U);
    msg.setSourceEntity(177U);
    msg.setDestination(36058U);
    msg.setDestinationEntity(84U);
    msg.group_name.assign("QOHOKHVJZTEVANTJCGYIJXROMUMZVIPKFHJADNOTNVYGBMRWPDLWILUVYQJCEMWIJQBEEMXPLWZHDRBJZUGIARCUBFVSCWLIIDFYUTCXAFFBBILIQXEAEYSZXPOUPEGGSIRUSXPDKASWTVWOWDBFRKHLTCQQWGXNDCYOZUKOXWNBKVCAMMSLDRJXL");
    msg.op = 253U;
    msg.lat = 0.979066939522;
    msg.lon = 0.943948125886;
    msg.height = 0.86346229902;
    msg.x = 0.227020334383;
    msg.y = 0.650843347813;
    msg.z = 0.987666231163;
    msg.phi = 0.189781135695;
    msg.theta = 0.0704757950964;
    msg.psi = 0.340938281809;
    msg.vx = 0.955401855287;
    msg.vy = 0.321959335798;
    msg.vz = 0.247523611419;
    msg.p = 0.801841415413;
    msg.q = 0.540595720855;
    msg.r = 0.0516713149646;
    msg.svx = 0.0139447242888;
    msg.svy = 0.475947977174;
    msg.svz = 0.265658269958;

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
    msg.setTimeStamp(0.493883683904);
    msg.setSource(6401U);
    msg.setSourceEntity(43U);
    msg.setDestination(38064U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("KNTFQTFULGTCGALEEUKNYSJEIUKRFGVIYRRZJVFMPHKBICWIBFGKZLZXDCQNWPDIHXYVJSXEHMORQOWOMOXCLAMGJFVCWAWLEYWTZBDPRGHSVGMBAEJLZHNSBBQODTMZVTEUSRXKNAKMBLTDCVUHPNETXXXIYZCCBQHUFWWYOFPUOJRNQAPXIPOINHGKSPYSDPJHM");
    msg.op = 225U;
    msg.lat = 0.0727156715489;
    msg.lon = 0.547840913173;
    msg.height = 0.566552761911;
    msg.x = 0.618480369616;
    msg.y = 0.934034495801;
    msg.z = 0.210003310592;
    msg.phi = 0.864180434524;
    msg.theta = 0.269936701501;
    msg.psi = 0.227347731193;
    msg.vx = 0.935522047898;
    msg.vy = 0.597111900362;
    msg.vz = 0.808996254166;
    msg.p = 0.441708982697;
    msg.q = 0.169524761307;
    msg.r = 0.0765337807808;
    msg.svx = 0.133665157012;
    msg.svy = 0.264665071643;
    msg.svz = 0.975786475918;

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
    msg.setTimeStamp(0.1652545419);
    msg.setSource(3984U);
    msg.setSourceEntity(13U);
    msg.setDestination(59633U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("XHICDZVUXNJCVRMCCLUQOPZSVXIKKFWGJSHXRJPKIMKDKQHMLTFFZJAVTQYIJNIZBDVUGSMAFGEUCDPXJONSVPZOCQETGHEMQVEESHYAQILPFIRWMRSDLNTHBYNBLHBCSQWDYYURTRJUDPTIGRITEVAAAZMKBSDAFWBWMKMOBKVEOPEGQ");
    msg.op = 203U;
    msg.lat = 0.10693627236;
    msg.lon = 0.735117976228;
    msg.height = 0.84832790032;
    msg.x = 0.907812257007;
    msg.y = 0.271665988404;
    msg.z = 0.449476607766;
    msg.phi = 0.105730501876;
    msg.theta = 0.0483473343695;
    msg.psi = 0.709700577032;
    msg.vx = 0.528010526212;
    msg.vy = 0.925225892568;
    msg.vz = 0.916054194729;
    msg.p = 0.197326262158;
    msg.q = 0.924328457717;
    msg.r = 0.176557083201;
    msg.svx = 0.584084391971;
    msg.svy = 0.26912006991;
    msg.svz = 0.775037290219;

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
    msg.setTimeStamp(0.22880311354);
    msg.setSource(42301U);
    msg.setSourceEntity(210U);
    msg.setDestination(16324U);
    msg.setDestinationEntity(215U);
    msg.plan_id.assign("TOJQLNIBYICKLYWDWIOOHORTVGEAQEAPWNOOFJCTSTQMOXYGACDLRPCIHVXXCCIUCRPOGSWMRZLLWBDRYUNCYMVAHJKXYTPIHSQBZTVWJGLXTMZXRKKBEZAODFMGZBXDXBSPVMKWQQPHFFTEUBIUIJNB");
    msg.type = 203U;
    msg.properties = 151U;
    msg.durations.assign("BELDULJONRXIBPNBHDYLLMHABHRUOXXYZIFXWTHIRSSQLVHQVCFDZFKPVGNQLZFGMIMAKNCNEVQQDBBMAAHEXTYWKTGRYDUJDCAHVMXMKIUAFODVUUOOAUOY");
    msg.distances.assign("ACJHQEKWKPPMYUXWDSVYLPAUHYAOEDFCMCKRNQNRSYRQIAUXFSWHIQNLIDMOVONEBVTHVEMXTTZLHWQZMLDFGHSZNWZWBPPKTUPOXLDOCGIOOVOGRJDNKIBPZYDENJKNCGRBVHIDRPRJTWGBFSGCMFFEWRWELUEU");
    msg.actions.assign("AASAEOUJNEIOPHXSCDCNIEM");
    msg.fuel.assign("RIFKOQGPKFWVXWVSTOJUAZJWRNWRQESKPYUKVVLVIOGZKAFKBXUXVLAUEXXZEGYJEBAKRRODJEFHZEPLTBFSRVBKQNEAMQTBSYZGPHWOSFUHHTDAELMWQTRHWNDVHQMFNCYWPDRZXMBUYLWGTKAOSDTULXORBOGLJABMVJUUAJQICIIYGMGCPZHMECWLCCINJPCSGJIPFYDSCLYCIZQILXNNMPIZDSCFNXDUYJNNHTDTDXPEAVH");

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
    msg.setTimeStamp(0.212940336678);
    msg.setSource(46464U);
    msg.setSourceEntity(249U);
    msg.setDestination(40732U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("EADHIWJRXWIWPVTFMJJJNZTUZZUCEOYPNKTREVGITFACPMXBIWLFQOMFLLBAJCJPLLHLHDQESVDBPEBDHZGOAJDIGCQSN");
    msg.type = 118U;
    msg.properties = 169U;
    msg.durations.assign("XABNRLSTKBYLTZBHQXSNPDNKLZEALWBMUYFNTDRGGCUEMVUYRSPGADKNLMORVNVWFKDTJDRUJOPAHAXGAVNTQGAZCSBIYWZOI");
    msg.distances.assign("BMAUOPRYAHDSOAHEQVEJHNBHVPQXOKQFGUTXDFUHWBROCESEBZVDOBNZLDDHGLMYHGMNPWOIZWFIRCQEFZGRXZHVBUJZCRAHNVLWVMSICFRFHJJQAGXMGETMWKYSKYFOXMINTASQVRWCPIDRWK");
    msg.actions.assign("MAOCXUXLIZKCYUBNTOLXIEAXQOMCYHTVFEWHUAUFJJWCPIWYWRIEIXVOHYPLCBCWXNKWSKHDHDKQKQERPCXFXYELBSKZIJDBVVRXFYUXRMHSGGIZQPMTTQAYSZMWYJZDKVCVCNTTQFJINNFGTOBNJPROYIUGTESVOQMUR");
    msg.fuel.assign("PMYOUYQNBYBOFOUFEVXEGSKTEXSEVOQUZISDKYVZGHOJJQQCVXWDHTVA");

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
    msg.setTimeStamp(0.771416170604);
    msg.setSource(46186U);
    msg.setSourceEntity(172U);
    msg.setDestination(30661U);
    msg.setDestinationEntity(226U);
    msg.plan_id.assign("UZNOICWWBODGRZFPNURSTAPQNNAUUJPTQCJFCXZYTTXQXKLLCGJFEDSHRVRNKTLXWOJAAMBTIRLLEBDYYMXHEEYSOYLKFEVMBRVYSPNBDRKFMDFZRUKQKQXQJMLGTWPNNIGBLFMWZIATEULYKICIWOZZPSVHGXDZXWPQOPDABYSWEJTUPHFURGUVBMOYGDNHZEGAACIJEDOIVSJFK");
    msg.type = 75U;
    msg.properties = 79U;
    msg.durations.assign("KPHEBZZASRIPILBLCXJAXJCXLMKEP");
    msg.distances.assign("YLXUJUZJHHREVPZQREPXNFPNVISMOWLCHGFJGADYYBRGOLURYCJUKMFCTHAOLBWSQLCFVAASERIDESJWDKBUDBXBEGHNOVFDHVBNKBKWXYIOGWECZZWASMLOAUXVGQYUVPW");
    msg.actions.assign("YHQKRGEYQUPVLHLNZZFNBALRPJKKNBADFXSQRWMFZKWRMPXXQULTBWYTSZKNRBMTVSIIDUOWOJVEQNZGQMCTCIFRHXKVHJKUOLHZVJNEOPYCFMOWGUPOIZCMVZDEOANJAJCUDUEENXMPVWPBFSPCMYXCKTARHFFBSYRTSPJMAQFAXTQOTOCNDIIDBXWLTGXLIBAAAYWJVIUHIRYGS");
    msg.fuel.assign("AHJFSFMUWKSEAWEVRSPWTDUKLDPBKFWOTDYRNNZIUTVEMPZAXSX");

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
    msg.setTimeStamp(0.771219660445);
    msg.setSource(30915U);
    msg.setSourceEntity(195U);
    msg.setDestination(32680U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.570521290967;
    msg.lon = 0.00332687475858;
    msg.depth = 0.809337817654;
    msg.roll = 0.900333661192;
    msg.pitch = 0.701683519862;
    msg.yaw = 0.159464952333;
    msg.rcp_time = 0.950814229753;
    msg.sid.assign("LCOSBLKQINUGOLLUODSNCGQXFNNQESYVVQTXRGAFMUWPZYRXWHLJFYDICPPKJBTZDZSVSGTGOPCIDNVERSHGCKSLLX");
    msg.s_type = 182U;

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
    msg.setTimeStamp(0.558866980073);
    msg.setSource(33104U);
    msg.setSourceEntity(248U);
    msg.setDestination(33059U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.147852891526;
    msg.lon = 0.802031865396;
    msg.depth = 0.553219067754;
    msg.roll = 0.600354051421;
    msg.pitch = 0.949562540708;
    msg.yaw = 0.129448962215;
    msg.rcp_time = 0.952615823151;
    msg.sid.assign("EGWNQCDICHBCQPYDFOXPTMDVTOHOTXBTJHSZUJUSEOZIZIMFLUJSRPNPGDBVGXQNHEORELHLJOQXFMYWKAGYGQHRKFVGYXVWNUOPTFRTHJXBBEJRAPNKEWTLLVAHQFMYGCMXBCBYKRJ");
    msg.s_type = 82U;

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
    msg.setTimeStamp(0.823879114655);
    msg.setSource(62837U);
    msg.setSourceEntity(156U);
    msg.setDestination(57088U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.40120417258;
    msg.lon = 0.154893348527;
    msg.depth = 0.930410812126;
    msg.roll = 0.556593020235;
    msg.pitch = 0.577825621593;
    msg.yaw = 0.377862858371;
    msg.rcp_time = 0.735615871146;
    msg.sid.assign("QYPUHIPEJEMTAWOLWTIJHDHXKLXSKXPARXZDNMGGRKSFMELYIYVKTBGGCLSGMRZVNJGYNJDUIOVNFRAZXZUZUOSWWASBHYJRCZMXMGSGWRZHUDQZHLVEYTAUETKARVANFRBFVXCVPZLDNILQQHYVQXDNCSQABFESJCPTQQCABLCMJMSONDIEBBFXHTZBYMMHUIUOGOCAPCUE");
    msg.s_type = 70U;

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
    msg.setTimeStamp(0.472198781413);
    msg.setSource(23413U);
    msg.setSourceEntity(149U);
    msg.setDestination(22200U);
    msg.setDestinationEntity(101U);
    msg.id.assign("LTGBJETEEJWPFKKBJKZSHGIJURSZDZXIXWFYUFMYZLEFBYPZMOBWNCZBDECYMNCCXUNBZWLCYCVAQQZCYBHNPHOTIRPQGOMQJVTSRIZOJKTLQGAQMNNYWLNNUAKHZWVTVADFOGPPTIYXNMILHHHDEADGTPOMMPSLOWXFISWVHVYGGGYJJAVBLDPJHXFDFFKLDOHUCDXMBBKUAKRIRCERUVVEMQNTGSXS");
    msg.sensor_class.assign("PQVSCBWLARCJGRWNMTFJDKQJQGJYIBDSFARLPVBLUBNPENGBLPKVCTATNAJMIZYOICUDDDTGHNPHSGGAKZWVAISEKTLYWIPBKHBYNQCNELZAVOAFGMMXKZZRIXIQUXEFRRGDPOOFQFOEJYUVXXYJLBUJTGBYHCSMXWHTCZIUEDWOXOZKGTOPRHRJIMSVEYMUK");
    msg.lat = 0.774423429261;
    msg.lon = 0.642639321868;
    msg.alt = 0.692345961379;
    msg.heading = 0.544842894;
    msg.data.assign("RHRJJQPZUGVYHRBGZOJGESOTLFKXHFGYQANCYKMNPVOCWYKWUMUIFRZAAXRCSHSGCQYOADYEPBLJTQSDFGZNUMCWKDKXFXTLOMZLODETAWRFQNGNIVCMBPWTMIAZDZLTXGUGSOEKLFSABBLFVPYOUUDJDSKKFBYQQECXVWYBWJUPABEEXUSIXRQJPLNCNTNZVHHKNUVDMORXIWVBQHTJPW");

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
    msg.setTimeStamp(0.343203519647);
    msg.setSource(10578U);
    msg.setSourceEntity(49U);
    msg.setDestination(13248U);
    msg.setDestinationEntity(87U);
    msg.id.assign("DBEZQGEKVYFHNGBGQRHCRGGCYMBZQJWWSINTMVPLUKUWFCJFEXMVLIOYOSCHVRYPYHGUNTWKZWJTQXXQVXOVOCUELPROYAEDMLDXEFWMJIOGQPKJIETWHAAVOSNTBAMKPUKCSALNWSDMJQTBJCHWHAPUZVNJIRDXZRSFVAYHNNDPCFDXBYKXKTFYFOLMBRCSPIKSYR");
    msg.sensor_class.assign("XRYFNYFJSDTOXKTOWXSPNPLHZD");
    msg.lat = 0.0209049762004;
    msg.lon = 0.32050486265;
    msg.alt = 0.79560935691;
    msg.heading = 0.2086606322;
    msg.data.assign("LZYTYLHTWEUWUTCQHTEA");

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
    msg.setTimeStamp(0.171797771556);
    msg.setSource(48872U);
    msg.setSourceEntity(169U);
    msg.setDestination(51132U);
    msg.setDestinationEntity(96U);
    msg.id.assign("HMRIXXZHIZMJBNJCHWABTNUNNDXQTGPCLGNJPGQYOPAUEBNDACWOGMWAVKLKTNZHAUVBMEXEFOUPDLVUSRHXXZRYULKSJBVURMKJQXSJIWDIMEMGUHGFHGLLROLJAEKFQDFTZJFKQOOIYECQHDKCSWROVEAYEPENXTTZSVRHBPLVACQSRRKKOIACTFKYDXUBSWPVOZQIIBQYWYLTYNDSGULPMOCFBYBZGAZVWYCPWFIFVRFJSXZ");
    msg.sensor_class.assign("YNHHCDJMGFAS");
    msg.lat = 0.438832270574;
    msg.lon = 0.978650852995;
    msg.alt = 0.355270144349;
    msg.heading = 0.303407577533;
    msg.data.assign("SSQEQLAVWRRWSKISOEOVYSHOZHNSNVPLMDKCCMWJWELODAJWRNFYGDNTUOJGKEEFKPY");

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
    msg.setTimeStamp(0.0662811192202);
    msg.setSource(13002U);
    msg.setSourceEntity(225U);
    msg.setDestination(7256U);
    msg.setDestinationEntity(30U);
    msg.id.assign("HZUXDRMLWVVEP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ILOBBBCAFONNPDSXGJCXFAIGWUVUHPMBCTVOZVGWHZEYIKFOLOCEKMDPPKXGPKNKWYCLEBVJRNMTBIWLDMDZRAT");
    tmp_msg_0.feature_type = 200U;
    tmp_msg_0.rgb_red = 18U;
    tmp_msg_0.rgb_green = 109U;
    tmp_msg_0.rgb_blue = 118U;
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
    msg.setTimeStamp(0.171398315132);
    msg.setSource(28295U);
    msg.setSourceEntity(249U);
    msg.setDestination(30783U);
    msg.setDestinationEntity(127U);
    msg.id.assign("FCKOOLQUEYEIQRIKXXXFBTUTUDKRDJWYBJMXFASNLLXETHVMASEGBJNQSVSYYNPOZHDNCCYKTTXMYODVXWIZPHGYWAQHIUAEOPQZVBCBSAIYRRBZSFNEPNVWNJCFPWKIPKRCNSUOKSRHQIDGUZOVIEZMRBVALGPTWTDAULIOCTGRZQLGFHAFTHWIQVLXAL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DBAKXEYZMBJMGPCQLFEQHJWRGLORTDOCQLRUIOLVRJQLFVAWYJAIGQ");
    tmp_msg_0.feature_type = 3U;
    tmp_msg_0.rgb_red = 120U;
    tmp_msg_0.rgb_green = 125U;
    tmp_msg_0.rgb_blue = 17U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.777943368145;
    tmp_tmp_msg_0_0.lon = 0.281650152014;
    tmp_tmp_msg_0_0.alt = 0.473104865047;
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
    msg.setTimeStamp(0.448472733535);
    msg.setSource(18508U);
    msg.setSourceEntity(91U);
    msg.setDestination(59034U);
    msg.setDestinationEntity(164U);
    msg.id.assign("BZBCFQIETUYBOIHDYWFQJXBTOOSRVBYNMSPFPAOSAGUUOUKMYSQORFTJUDPJZMHZNXQLJQNCIIWFSUAAHEKEHBBZUGCBNCQPZIIWKSCYMXAEZRVNROPTJXOYOFTFDWVRPVJVALMWLKCIIXKLCTOEHNBLVYNWPDTEHDLTXJUJMKNYPQYMIXEARESPGBTTVQGMDNGLWHGLFAGLNVGWEYJSARGSXUWCDAEIDKVCZKDFD");

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
    msg.setTimeStamp(0.28400420179);
    msg.setSource(40314U);
    msg.setSourceEntity(208U);
    msg.setDestination(65208U);
    msg.setDestinationEntity(69U);
    msg.id.assign("QWZACYRREUIVQSJTJLLJEHNRKHWKJLZZC");
    msg.feature_type = 10U;
    msg.rgb_red = 188U;
    msg.rgb_green = 248U;
    msg.rgb_blue = 56U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.144179533365;
    tmp_msg_0.lon = 0.478727962477;
    tmp_msg_0.alt = 0.476103219791;
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
    msg.setTimeStamp(0.995059379081);
    msg.setSource(51686U);
    msg.setSourceEntity(173U);
    msg.setDestination(36631U);
    msg.setDestinationEntity(211U);
    msg.id.assign("IQMHFDFOQWHIKLOQKCAEEYVNYEQZBQNAJPGXKVMWLSXTUIZQWCFIEMMYGYCOYEDQPWUWSCXFJMQBXYTUMZISLXAYZPJKGTLAMVUUPNJSXNVOPGIZCWKGBKNHXKFV");
    msg.feature_type = 187U;
    msg.rgb_red = 223U;
    msg.rgb_green = 73U;
    msg.rgb_blue = 103U;

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
    msg.setTimeStamp(0.256915356228);
    msg.setSource(55766U);
    msg.setSourceEntity(37U);
    msg.setDestination(7294U);
    msg.setDestinationEntity(9U);
    msg.id.assign("AEOYYCVFKMZMVILPEAPCXCEWLZDGTLNWSVNORPNUNGGNBGAQYGJHTIICCZQJDDTVBMSBWMWJWSJBEHIEEITGFTSZSPJFLLFTGVWVBRHHCIXODQHJRZYRZMEBWUOPZVBIGFVOHCPHNTMKPMIXJOLWNMHWKXYQUQAUY");
    msg.feature_type = 134U;
    msg.rgb_red = 28U;
    msg.rgb_green = 13U;
    msg.rgb_blue = 230U;

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
    msg.setTimeStamp(0.552836114182);
    msg.setSource(53899U);
    msg.setSourceEntity(87U);
    msg.setDestination(11203U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.822391898629;
    msg.lon = 0.515318057721;
    msg.alt = 0.271973272846;

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
    msg.setTimeStamp(0.0158587966727);
    msg.setSource(14141U);
    msg.setSourceEntity(2U);
    msg.setDestination(25529U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.823198880433;
    msg.lon = 0.75089695572;
    msg.alt = 0.222217358611;

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
    msg.setTimeStamp(0.522629834072);
    msg.setSource(42172U);
    msg.setSourceEntity(113U);
    msg.setDestination(8395U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.490029440405;
    msg.lon = 0.234421172795;
    msg.alt = 0.462815796253;

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
    msg.setTimeStamp(0.380798133636);
    msg.setSource(31727U);
    msg.setSourceEntity(25U);
    msg.setDestination(42575U);
    msg.setDestinationEntity(175U);
    msg.type = 118U;
    msg.id.assign("ENVSODQGJCXODTTXJACXBDRMEWPVDVZQMJBRQOHZKFNAMTFOAUWIQPEFYVVLGRBTIUZHVZKYCZEBBTVOGYGSVBVXFNULRGJKAYZUECQTJTDRKKKUJMJSMVPQ");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 57532U;
    tmp_msg_0.control_ent = 27U;
    tmp_msg_0.timeout = 0.988806039145;
    tmp_msg_0.loiter_radius = 0.766918375385;
    tmp_msg_0.altitude_interval = 0.393131129962;
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
    msg.setTimeStamp(0.655648659658);
    msg.setSource(20593U);
    msg.setSourceEntity(1U);
    msg.setDestination(27300U);
    msg.setDestinationEntity(189U);
    msg.type = 157U;
    msg.id.assign("EDDCXVSOCUUFFGLQAUDKMNQMQQCWTTBYLTZPHIIRBXUZFPQZUOIJJSSIFYOFEDZUVGKHTYYBWQIBVBLWETAFTTVXCWTIKSQLLKDNAXUSABEBJGJEPNJFMKXHDYSXKNZWCFLTGQBXJVHJACMDRK");
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.798519060742;
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
    msg.setTimeStamp(0.277921479875);
    msg.setSource(10000U);
    msg.setSourceEntity(6U);
    msg.setDestination(26155U);
    msg.setDestinationEntity(206U);
    msg.type = 78U;
    msg.id.assign("AJLJHNUBLWEZYPANVIKCMOVZLGODMAPUQDIIVCBSYRBWMFBWIQTKETCNWUELZORPDXJMJGNOOGFSEFOKJWGAHWRYFMKWQENNSYSXZRVLZNUVDYNCADBYROJWEALHDTFCFGEJVSTMKXTARSP");
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.622193009061);
    msg.setSource(12889U);
    msg.setSourceEntity(113U);
    msg.setDestination(24067U);
    msg.setDestinationEntity(144U);
    msg.localname.assign("WDSLMPOFWUVXUZBYBONJRHQQOYXANRFIBMEQHHEJDUAVSVSINJQCZVLIOYPNILCDVBTMMVBKSXKLEUBXFNTSGPPRPMGRJCEMKKRZBGZZCN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LGZYPEQEBFEXYVNPEXKIUTJCNUBESXKITPPEBFZHWMRICLTWFUJRTABQDMCALWLRYYRYACQXTXVBXGHWVHEKRSLWUBNGCCUCUIYXSVYPFWSMRMHTZPZBFQLFFRDYBLKQLLVODZWAQIZCAJMATJNKUSTOJDOJVIPGGSRVRGONDCEMOIOJUOKQSHGHFNIIDNPJKDDNSSYNWRZVVQJX");
    tmp_msg_0.sys_type = 242U;
    tmp_msg_0.owner = 20266U;
    tmp_msg_0.lat = 0.834822368548;
    tmp_msg_0.lon = 0.704588792274;
    tmp_msg_0.height = 0.641746667215;
    tmp_msg_0.services.assign("SSOYVQZFRVDZLKBTTBESPORATTBZNMDZHKONEILUFFXQDRZZBJUDGWEGMVUQWKJEKSEMZSNXULCPLPJGOLDKQHNVWMIJRMCCYPYFLNILFGFWZWVKMSHJYBPLXYRPOMGWCYTWOECHJCTHDAVXWOIYSIBQPAYMCHFPFEHUDZNVRLXKKGPGIGEAIFROHLECUNKRATPXJIQCGH");
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
    msg.setTimeStamp(0.703330126599);
    msg.setSource(56680U);
    msg.setSourceEntity(16U);
    msg.setDestination(25355U);
    msg.setDestinationEntity(66U);
    msg.localname.assign("XHEEAIVMMVLIQGISUEDPGEULWGXPRZBAYVQDNBZNRJCUWUOVMGCXJRFMNNICQBFOCPHQREICWZGGIHFNQVJFKYDCPJLNTKJTKTZDGWAQBHIKXPVGXCCLXASESHSJUEMKIOVSTUASZJTBSKRWFPUZKVAZAEQNSYQLKLOXHDBMLRDEDAOPSJGAYDNNFIOHH");

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
    msg.setTimeStamp(0.076645045928);
    msg.setSource(58152U);
    msg.setSourceEntity(18U);
    msg.setDestination(7825U);
    msg.setDestinationEntity(250U);
    msg.localname.assign("XZZWGAXGAAFLJZKXNVFCPJPQDZDWJVIHIAOTLYWGAMRFJPCSIGFNTMQBMZVZCQKZMGMUOUSSDKKCEBVBUWTYTXTXMFOTSYUMPFTLKCCBHBABUYSRPWESVRLXUILODUYIZLPDRERCAKYHYMLNKEMSUMJFPGIYWDOBPGRRSWAOWGNNAJXQBVDWONLQGJHICHKJFIOCTIEHRHZQQHQEJKHNVSTNVIXSBHFXQWNLLYECEEPTQDXKBOPYVVENO");

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
    msg.setTimeStamp(0.855413142043);
    msg.setSource(48044U);
    msg.setSourceEntity(94U);
    msg.setDestination(53808U);
    msg.setDestinationEntity(3U);
    msg.timeline.assign("AKCEDFNHWXBWAFKRIXTGZIJREURNDPYQMNTLSWUOYIIGJQVZOYCDUZAOBMZAEGKBUAWYZEHAFIURQEPQOXPLYRZJHAMGODHKVBFRMFLEBLZNLTYSYVRPOUTZWHTGOMTSRJQESXTOVGSDLVJPTDGDASKMWLYCCMJMCYKPFWQTL");
    msg.predicate.assign("WXSNOMVJHMCVEYAUPVBWEHNAJSBYHTLOCPQHUWKBLQFTYROVXUCMYTGWAHUKOZLNIOXQWQLGCJUIRZXVZSNXXACPHJQZKMYTUSWDJXMAQDQVFHPKIBOYCMTRPGKAAPFCPVPYUYVBIBR");
    msg.attributes.assign("OGADZAMZURAMFNGNOYTBPSLLPVKOGLHXOBEDLXKQECEBLCYZSEEVNZSRUUSWVFIBVNEUIYILVFKGBACHOPSPMBWRFIZJCMJCOMXTAWTUHQEUHP");

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
    msg.setTimeStamp(0.992548588456);
    msg.setSource(65023U);
    msg.setSourceEntity(204U);
    msg.setDestination(64838U);
    msg.setDestinationEntity(29U);
    msg.timeline.assign("INHHFMPSBWTPJ");
    msg.predicate.assign("EQXSZHEUAKUBIPYHQXBVASWWSLJFRORIEDQCKXCBYPKHBLWZZFJOBGCXKFZDHGLUKMKSJCLCFNTDPYTJVGECZUYTATLZIIJ");
    msg.attributes.assign("GOQRWQPGRYFWMYCXEANLTIQWTUKWBNJQYGMZFZXPHDKZZNWCJJUKVUWZYOVSEMBPZUDYHPRHCRCAGRZZSQURPWPYXCFHUMFEEJSOPAVDDCBCOLQLXGDXJIHIODYPBMNGJOBXTILSTQUYFFTKMWECTNNXLZMAYHFDAGEEYKKKBASRUARZOELBKNRXMWJVHOVQBVSMBSEQHSDBMHEQUXTPHVAX");

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
    msg.setTimeStamp(0.837480610643);
    msg.setSource(32909U);
    msg.setSourceEntity(237U);
    msg.setDestination(17919U);
    msg.setDestinationEntity(242U);
    msg.timeline.assign("XPPXQOYXEJZRGIFAJVNSLXKPWDJJKHCZMJSSGLTWBTKKQCXRFSBIFVUZVOWLQZGJJXSCAKLDOJQTARSBNJMEIVKYEAUBWAXXUGUYSIPAWWXVCGYYTGEUNDAOFPIFLCTRMDBXGDJNFRCBDVEHEQWWRFOVNHRADOVMEPVYYANPHDMH");
    msg.predicate.assign("MOKAIJWMNJMSXFCHADHPFEWZOBWIPJNLUDCTTIAEUOOCSSVSAYQCFPTXSXLMEOEXEQEWVDDPNFHTPBIIKZEHCRMFRVSVXQYOYLSHTG");
    msg.attributes.assign("XLKQXCVSVUGFIBKHJNQDKICHUYJQACQVAMAXZZKRKQKTWXHDRUJYMORXMVELADWCYBMNOWPFUSPTPYBHUIMJ");

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
    msg.setTimeStamp(0.746756686791);
    msg.setSource(28127U);
    msg.setSourceEntity(64U);
    msg.setDestination(46051U);
    msg.setDestinationEntity(116U);
    msg.command = 249U;
    msg.goal_id.assign("BKWONSOWBDILHRQKXWQCUQEQVFDORLUUSYOMZFGWHJIZCDOISUGMKCPJLDBAIWKZHNYBWZRYHSUGQYTDCVZSDJTWJNNOEVEWZTTFQUVEBECPYGTWSYRPCACLEXANMZOPBSALKU");
    msg.goal_xml.assign("AFNIYWTSAJTDYUCBOPZZRPCUJXMMCKXCDDAINPXELKADEAUUWGFNIVWVTNGQKHVVPHWTOSIBYWPNJYIGHNQGYLQSCEKVZNCTMVDVOZIORGTSBWJHRPQXMVCZZKBSJEXBIYORSBPEINLPJDMEZLDQOKUGKQHHYRTUHOMFIYOJQWRKRYUGFLTVSSNKMPJEQCSLO");

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
    msg.setTimeStamp(0.35138274469);
    msg.setSource(22980U);
    msg.setSourceEntity(83U);
    msg.setDestination(54114U);
    msg.setDestinationEntity(22U);
    msg.command = 7U;
    msg.goal_id.assign("KVAUYCCWNUZJMHEQHWESDRLYKUKXIQMIEGXGGYBKWUATSJHRFBPOOIZVXQBDCZSRLRZPINAOCHNYRCSFGLJUFMYHZHBFZMJOMCPLHUWQMDIDEAHGWTOPNYJNUUGZFOTXWVFLJRZICU");
    msg.goal_xml.assign("CWEZDFATNYWIZDEYZMHJILHCHSIUVWBKUDDOGAAATAITGOXGEWFSBIPVQLKUBVHVIUPYHOCSURGGUYUZKJCWFSVKJFSIJLOGSMTQAMCNIDYNOBPJJLDYQEIZPFMPJQJJCYQQYQBCGELTZMQSTNRTEUFOXTSCRES");

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
    msg.setTimeStamp(0.658200524757);
    msg.setSource(52290U);
    msg.setSourceEntity(111U);
    msg.setDestination(40791U);
    msg.setDestinationEntity(222U);
    msg.command = 70U;
    msg.goal_id.assign("KNHFXGLCGPTEOTWXRBTKQNROGAARHWPSFEFPALXSXDJVYBPEDLMQVTFRDNEZQGVMLUFZCGBATPRKLBZUOQOKNIDZSOXJPILXPDRCXHUVMGKIWYFTNDWEVQQQYEHJUIDWPTYSTSIMNIOJUSPGCMHVCUWENFUZJDKHORZIAOHBLEYTYDZFDPJLYJEOSUFNAUVVZWRZWXBVALFRYXXHSQMHLKIWGNUVRQJQWN");
    msg.goal_xml.assign("FMGXZPIVTMFTMPRUSQHSSCJXOEVUZFDJWJDUFODKRLKKJBFILRKXXDQNJXPJYVDGIWLGZWHWBEYPHHRTCRSLYWCA");

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
    msg.setTimeStamp(0.551946004733);
    msg.setSource(37695U);
    msg.setSourceEntity(254U);
    msg.setDestination(31643U);
    msg.setDestinationEntity(49U);
    msg.op = 81U;
    msg.goal_id.assign("RSAAQNNTSSGOKITXTSCWFIMOEOJWAJJMMOZRRISKTZPACRSETUUPNVHDNGVVPHPBEVMNKYOWUKXCEISQTRXPQCGFDQHNLNUPTLQCZSOWQJMLEDVEYDJULVAVNOFAUYBYFCDKGWQTEGXAYTFHADFBSBMTXONJZZPCXB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ICFJIZANHKALRQXAZEPBKIHMHYGDOJILCYUXFKPSYMWSCBLDLSUDWXQKTQGNBBDFGCGAJOEUQIPSCTJKKLDVJBEKUTYNCSRWWKOEFVOLRSOXHBKUWZXIHFFYRGHCDFTMDQALUNMVQTQUWTMEWACDBAVNRO");
    tmp_msg_0.predicate.assign("CSCPPTZZAPKNVLQWGBRJJWFFJUKDPFWKNDFJYVCWRAVYINLTAHNAWYVFDFUMDNBFTPCIMAFXELFDRRIJLXKVFOIKLWSMHZDALICUNBTXYXUHNOMZKMUERDJPGJOYOBSQI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RUPHBKBTFOLZXRMINSJNFICBMTNORIFEMGWMOLSJLKPNFMBNVUDNWRTOLAQAFUIVSYDGDRWRYZOMFNKKLHETJEXQEVCYKHOUQTLXCYDVGISPNPIASMZRDQ");
    tmp_tmp_msg_0_0.attr_type = 214U;
    tmp_tmp_msg_0_0.min.assign("DBYFLJVVTEOOZFXBUOLYNQKFKXCFGTCYWOKBVBOMEGBTLOIFKTUTVMFIXAQMDDWLYEZITIHGOANZEJKYUXJQZZZPPXDVJCJHTLMFOPIHEQHBECJVWARMIHXQWNIVZLLSCPQDEUZLQAACKYWJSSPAEGFSCNBNUMEFGRCGQGTPKRPWUHSIQWZDPNKAHDOBNACHAQYRGRRDVPSMSVMLNJGRBOVULDRD");
    tmp_tmp_msg_0_0.max.assign("SYBTKSKHJLPTPSXEAMQHDPAOFESDRPYUQGTAUPOMONQLLCYUTQSDOJNKERVLYPVKBADYCECOSJGJUFGREBHIDOTVFBVZBYATLECDNVLWQNPEGGRYLPDVBRWCUKTDKIWCUGMMTMWZXCXVUAZJMHJHPVFANKQQVXPJKVZCIGXJIHXGYS");
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
    msg.setTimeStamp(0.461676125273);
    msg.setSource(13288U);
    msg.setSourceEntity(219U);
    msg.setDestination(19851U);
    msg.setDestinationEntity(246U);
    msg.op = 131U;
    msg.goal_id.assign("GTBMLSALBTAFGYIWWSOPBPDBDBHWFYECWKVYHUANBGPNACIMKJGEJZASPQUPUDYFOTKSNZYZSONVXWJSAMNQUDIXKOKPRGKJPXGKYFGRKZNSFMMOWMALCJECFQXUVJRTLXNQQDLTHZUO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WNHPNYKIISQGQIDERHQXPEPOVAQEWDBKPMYWUYWMLWCTSTYHDFUOAAXUFHFEBTGIVBCOSICANZIUUONDMPYCSLXCYSMQXQKTPBSYNKCHZRZQKVGIONVHELUPSRFKZSJTJVVKEJBYUTALEGIMCXBOUZLMFWPSNVUACOLHKFXGGFHJJJKRMWBFRGMTRNZDBDTLJTVCJGBMDNEWXLITZHOZH");
    tmp_msg_0.predicate.assign("DLQUNOJRAJWXFXZFEMGAQZSYPKKCGVVDPWNDFDZULTQOJHSWUBCBEHVLHRCLQVBKYZKCCUEHPJYTLFQDXWEFVQRCMYHCMDZPGUJTRTCTKBXOBYAGKXLFNPGQHDAJAIPSYHSMXMOOBZFSRETQVBSDIZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WNABXBKCIPRLGSHRN");
    tmp_tmp_msg_0_0.attr_type = 29U;
    tmp_tmp_msg_0_0.min.assign("YXNWUXCZFDXGNLFRBROABRAXOISUUNLGHGVSWBKOHHXFQZODDCYJWWVKGKKJNYQRWBLFFTFVZLTLFPHGRNRMICSLEQCGUFCVQJWMSINNKMLEAIJWESCOQPGXTLEDVRXNMKWNOOAWYADEJYHECMLXEUUEVKUBITTSXPYTSEVR");
    tmp_tmp_msg_0_0.max.assign("VTSLKVBHJZWUYGPEZPUXLJLCPKDYEUJIVAUEOKHGISLXRNMJZPNTLKIIGDFWPHABAUDXCZDWERWEGAWKHBGGRJMUTEWACVYMSHDRNIXPCQFQQIWSKOQNBUBUTWEZZVPCIBLGHMPMONDYYQXNSJJPQSYOXTDRRROHKAFSYFMORMPBVYSIRNLFWXAXSWKCGJJQUQK");
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
    msg.setTimeStamp(0.613738163889);
    msg.setSource(20826U);
    msg.setSourceEntity(28U);
    msg.setDestination(8084U);
    msg.setDestinationEntity(150U);
    msg.op = 94U;
    msg.goal_id.assign("VNVZVQEHYDSODQWBHDMFHQUJWRRCNZNWHLMEMRYJPGVTCOVDPEXULPFGTOFWKOPIUDGJPKLGYMWXKOHHLITNGOJJFYWMDUSTXMSCSKXVWHETESJMFTSSZCBPLTAYAIRPJXUFUALMRUNGYAIAQRHXECKTHJBIYVYAQZYWXOOKDLIPSICRIZIEYRNFXNQFSZLBTLBBRPGKOCQHVNDBZXGMAOWNAEJCZDUFRKCQAXIQUWMCBSZZVAKEP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GFUGODOLEZUPBLPAKWMDJTMOEIOPGACXIK");
    tmp_msg_0.predicate.assign("CKBXHTZVDWCUIFKBCKPZUNVUIHFYCBLDDCFOZLJISWUWSPHEOEBMPSRVYRLZOBVLAGDTGXAOZWTNOXWBQAISEXFJKEIFQEGEZZMDLNAWVCDMBQXGS");
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
    msg.setTimeStamp(0.497811478891);
    msg.setSource(22009U);
    msg.setSourceEntity(43U);
    msg.setDestination(22549U);
    msg.setDestinationEntity(251U);
    msg.name.assign("ALXEHYETYUISZZMMQZYTIWZVGMCLBEOQANASJWIFZOVWKWEDM");
    msg.attr_type = 235U;
    msg.min.assign("IBSNYOEHPPQBFEHDDUOLOSCGQQJDXIMTELXSRACEULKBMZNUYAGORJWHAECNJNQLFRYWVORCCMGDJOMKLBIOMYLRTOJZPJFTHAPJWKVHZCSDWIBBNPZFEXZKTTRFAQXPSRYWBKNSTXVRNGYABX");
    msg.max.assign("EBGCMXULRGVCYX");

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
    msg.setTimeStamp(0.279615801253);
    msg.setSource(62312U);
    msg.setSourceEntity(241U);
    msg.setDestination(54807U);
    msg.setDestinationEntity(231U);
    msg.name.assign("IXQMVKEIALVCGWQREXSLGBJCGWMJEKQDYIQQCWNGTZNORMHELGPBFNCPKBPRBGWLZ");
    msg.attr_type = 81U;
    msg.min.assign("DPJPHHHDNCBQAXDGFGENJDODWVGSUNYHNKLQBUMNYQDSMUDGKRELKTENABYWCHYXRIRJSSFFCCZRUFKVBYKUEWWWCQRTRQYZYBPSGIHQUGH");
    msg.max.assign("PDWXDSOTFGRNNBSPWAHTJVWITERPKGKMYMOXLNSQVALDKDEEBNHTUZOAW");

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
    msg.setTimeStamp(0.448288295463);
    msg.setSource(30743U);
    msg.setSourceEntity(8U);
    msg.setDestination(64002U);
    msg.setDestinationEntity(155U);
    msg.name.assign("NPMKASTAIPGFCIHXVFAYVURIGTOUEDQRKVDORJQWWWLMFVSJRNUDDCNJQRXTHPHUAHLYOWVIXCSMJBXUVPRYCSFMBOKLEMEHKUBLDHVEOIU");
    msg.attr_type = 20U;
    msg.min.assign("TSOPUUYDAHRQSSOBOSWZEOVPQVCUTXWFYJZAWUGQUISEFQJWMRZHEDLBDTHDDCNWEKFLLNJAXJEYEQSGPDQSPGFCIADRZZNXWVZRRAVQELTRCXNGOLGUPKILOYKGHNCGKLPLWHEDXMRVXCVJJRHXTNZDVLTOCLMNSABYKKSJQHQHSTONKAFHBFKPDQMOICIGMVVJAFKXXWZFARNBEIEMBIGTYPAYNBBWURMXTITBM");
    msg.max.assign("QDPTORXNRECLXGYYIVPMZYBLNPGIXPASDOUGBSMIZEKHPLFOUPZKTSDLJZTNIRANJQSYUDQAAIUYKEXWWFOTETHWBVNRHLTUWSFQCVTBULWYDAMCVZCFFNVOUKKCGQJBFGBXEMSASHOXDRLFGCRAQXJWZCJPTJDHJCVGNZZUQH");

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
    msg.setTimeStamp(0.411708069093);
    msg.setSource(16120U);
    msg.setSourceEntity(118U);
    msg.setDestination(51576U);
    msg.setDestinationEntity(17U);
    msg.timeline.assign("OFDBNIACWIEPRKVYAHXMJWRKCSQBQYBAJREWBPEPBNCFRZDSHJATPTLNOMEXTUHXBXRHCFCGIZLCOKNOHDDTKKIZML");
    msg.predicate.assign("KPRSTVFQASUAPSKQGKLNEDDTOZIVRKZPTUOTMDOFLZTTBCUUYOZFQKQFKIZNNEOAERIDBGSCCXCWFYNVPWCQHNDAAXJHMXZGSDEWBPFBXPGQWFDWXHPAERZDRFJCWWCYBIMMSXDYLBVKQHGHSUBUJVVMMVXLAKTOWEJTUELKNLYGSXMEMSZZJEINZNKBQYSRBJVOMRHQATCUIIYJGGCTWFPOBJDXVMPWAUHNROGERHIYNQHIY");

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
    msg.setTimeStamp(0.891193839868);
    msg.setSource(848U);
    msg.setSourceEntity(102U);
    msg.setDestination(13878U);
    msg.setDestinationEntity(237U);
    msg.timeline.assign("VNMUIWTMEIPPJYLYBCOOOSNDJQBAQGQEAPVRZMRUAZOCYBDFXYHHDKAZQRVXXJWQQCHWQAYXPYDLHONOLYUXEZDPJRKVPUBMECTROKEMGUWVMMLVEAHWFXFIFGSJPBJRNGNOXNOFZTUNZIJHCHRFTSJKGSELDDWEGBIZSPVFQHKIVCLIYRNSMWFPUOQALTSHGZKDYUJZWLRSTAULMM");
    msg.predicate.assign("XVOOTPEZADOZPTQLONYFKIREMJQEYAEJRQAGRLTFBXNHZDCXLZEKZKMXISGSMKTWIKGSOUULFZPCUBTDWVQEAYZOTCYIMPSKYTBRIXMXEWAAWFZFTTLJLBYNCSHDLXBHINVBPRPDBANMOUKHFULHIQPAWWQRIJJSHDBXCIXSOQEDGYURKEWGWEMGVTUGOGHPKRCZQUMHCNFLNHJFNKGPZSCFRDCBAYDGVWUQMUVNHDVVRJQSJVPCWFASBLN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZDESKRVFNKGWDFKJBZAZLERJPSPWZMPFUBQDDEYJBEAOZKNPBFPQRHXFXWJJRKLIAGSZNILBGLNORPUGNQYMOSISOGUYKOGWXRTAMSXRKISDCILHAXJICLWZNJQCPNICUYDWIUCDUQVVBMTVUAHETGLPFENNPLWZBTGHVSYBOTQCYVVFYMPJCTBFMXAOOETJECLLJHUMCKGIAHHMSMQXKSEUEQTQQHNUOZDKRADAD");
    tmp_msg_0.attr_type = 33U;
    tmp_msg_0.min.assign("CZCXVADPCPFYPTJGLNGLZTNCOWWRGKHUNJTOGRYUGSBHPYHEBIMONKNHQQQWWTWUDEOSZBFFLMSOYIEZSUXJSHDAAEKDPPYNXXRBSRDXXFCABTFVVEZLXJKCFAHNZJUGSCCMQZAUKIQDKFNIIYKECJIVECLVALLOIDAGKBWIOERHNUYMRFILFPGJMRHYJFSISTWKQRERTQJNTPDMZYXTHBVVPMXXUVOWMQ");
    tmp_msg_0.max.assign("TAAFVEUAZAZNUDZUZCMNTXVXDYCTGKEYCHSNLQBEROZMYEQMEAJIUPCFNTLPGHFKYRIQYFLRSPDXIXSRPIJGJHGGBMQDCNABZQAKKVWMEWILQYFNMJFKPEPNPRBSADUITMSPHUKPROSYTYSKXEJZAOAHUVWBCNDWGFDGOKUVLETDMYOGVVCFJVROXOJCBFXQSUHSOHMVJBWNLOLXTZWHTJDGIQZRBHQXVIXUZITOPELIHWWYCRKNQLG");
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
    msg.setTimeStamp(0.305270065407);
    msg.setSource(30580U);
    msg.setSourceEntity(18U);
    msg.setDestination(13580U);
    msg.setDestinationEntity(36U);
    msg.timeline.assign("XIOWDAYGMHXJFKMYBZIKUZCJQBMCLEELNKWSGMRRIQZUSQEVTUMPRSSNEPVGCBGPLJPKYGXOHTTPFCLXHJZXUDPXXVUBRHONKYCOSBNFZHDZBTQDITKNFRKUCERQPSYJZDJGADXZMOEAOFUHAMEUJVOWKNUJTFPHXZYVSQLJAOVZQWICLGSYHJVWOVDBPYRKEGLQFQMTMYFIEXUHYGIHVRAANLBFWTPEWDOAWLIADSCFNBRCIDTQMWBVLS");
    msg.predicate.assign("DEXHKFGBNTMFOYALITJEFBRKXNRYXXBCYISWMDVGYJRCMNRRAGPULYBKOSAWXTWNDHELGVJZIIXWOFCQYZLIIMUUUCRMBFXQXZPKZDLIDLBQTCINUANVEZXOWVVZUMUSCJOVEMJDSJEDKCWRXTSMMQOAAKJWOFOFCHEBPM");

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
    msg.setTimeStamp(0.446069061597);
    msg.setSource(31299U);
    msg.setSourceEntity(99U);
    msg.setDestination(24886U);
    msg.setDestinationEntity(35U);
    msg.reactor.assign("VGPNAYTXZECYXKJPZNZBNSYPKACECXLBHWOUWNMKSZNQFOIHSTMQLGDRGNIWZZYGPXIYOQCIRDKTEEIZSEWUURTKHTVCK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BKCKANHOREQGILBIAJCMSKJJYQNPGDMFTAQFQQYWXMNVXADFROYZTMKEUSBRLWKAHRVTMILCRUGNRJINJVDFJYWMWQKSHQMBSMMLITHQHEVPEUJRZZUQQWSWVSUTW");
    tmp_msg_0.predicate.assign("IJOXVKOTFAFDLZAONPWBYPEEDURLDAFUYMPZIOZGAYVXBUYDKCZLFILTIYZRWAWFWXCFQPSROBHBVSBMGJPAWCKAIUKFRDXIVUAMMKGVSENVQFIKPZSMQCOEXGDMZSGNYVGERHJJKWWDTCSR");
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
    msg.setTimeStamp(0.596815044576);
    msg.setSource(35983U);
    msg.setSourceEntity(123U);
    msg.setDestination(22412U);
    msg.setDestinationEntity(8U);
    msg.reactor.assign("ASAFZWTFODEIZMPEJRFCXIMYIMVBGFHIUSCUWAJOSVXCMBADSQVUHKEYTGFQOPSTEMKBOPDYKOWIXBSLKZRWYJNJUAVTLRLMQAXUNBDLNMNCIGSIOZLYVVFWERUDQUTMWSQKHZONEKGPQZGTYJMSEJHEFJG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UDVMCYMVYJEKLDNNRSUEVUUQMHVXNZFOQNZYOFXHQXAQJQBTIXCNTDWPVZJGGRLSBFNGXJLPFIRDELABZJZBLIOTWMATSIBEXZSULTBOCCDXOUVSVZLIORGKWXQNKTJAYJZVZFCIUFBGRYAOKYSVUWJVPODKLJAHIPWDUPYOTXFCYAABRGHLMCKMCQNDHPZEPRWJSGGDEBHMGTACTPEKCQGWRPXMHEIIEBAEYRNWS");
    tmp_msg_0.predicate.assign("URHNDMJVBIPOXUCCBDAQDNKKDYHYZBCRPGGHVNXIHAFGBFAJUXNVVNPYOFXKMONIBIBSDLHZESLQEPAPRLSXPDVMOKUPWHTZRWKEJRGNFIKPUTWXDMNIXWCCSSGUZKULZDFYFZESVQVSQDEMXSEGVHRAQWBOHBSMQMRMTOUZMKSVAENBZQRCYQTZGCLPLJOGAFYFJIIYWMJFHYT");
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
    msg.setTimeStamp(0.462140510726);
    msg.setSource(8038U);
    msg.setSourceEntity(71U);
    msg.setDestination(660U);
    msg.setDestinationEntity(135U);
    msg.reactor.assign("QOZPEDIGCYELSLZQISXBPRNLXBDXBKGFHHTWBGRVTVOFWUSXRYSUMPAGBBITJEKUDZFUVCGADBMANBSXQOTFWEZTELGIMYWXPIVKFCRWMIWCEXQRKRQFDPLTJACOKKDSSOIMLYDOYMNNQGVNWWVXHHRPTIUJDAMPUUDWECFJREUQNYOOMKFJLCCAKYTZKPASFJHVGJXTOCZABEUSUZVHGNHIKRAPQRQJMDHELNWJJZHY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GSCGZHUSAWGNIUDJLOIJRYEXLSBUHFRBXQXXEBNIHXIYTTKVBMAEGTGZGDFFBDKNUBJREPPPCGOCTHMENUYURTQPTSCVDWTOTKSLZSIYZJYKEVZRLPQJBQNYHKPSKABOHQBEKAMFQWPJWMYVLJFDWROMCQDXOXKMRLXHOUWILSUCMALLZDZVDAEESAKAANWOQJHRIYOVMCNZRGFIMYUNLKVREQCJ");
    tmp_msg_0.predicate.assign("VDKEYFAMKKUGEHYEEWCGVAGHMSEAFXKMAQEUQWZCMOSTWYGZGXGVQBXVSSTPJFLWLLQSYJULONBCXHZTLFSWTTDAXYTFWVGBZVCFVBLFHBNMKZXOKUYIIJIDREYCAMPRBYMIJPIQDNWXWPMOZQFUKLVLBJSAXWARQCZCUBUPHODIBRHONNTUXEQRCAMJI");
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
    msg.setTimeStamp(0.646631144633);
    msg.setSource(41713U);
    msg.setSourceEntity(231U);
    msg.setDestination(50937U);
    msg.setDestinationEntity(133U);
    msg.topic.assign("GVYZDTQMOOBIDZYGBMQVOIXUXPIQFLVDJYSCRPTDNAQPSIMBMLFZXCCNBHAESQGUAGMXCEUVQKCSOIJAKVBEVZLXFIQGRUPDZJYYFUFDERZBUQAXMYWKNPFGWDPWCHUALFPLESRKJGHLDIKUSPVBCJHRKAZRVGFHOVLILOYNYETXAFCLQJHVPWNOOUXBWZWTNWKCEXGEIABTJKTMJXWKKCESH");
    msg.data.assign("OPFVWOETIHKGWNCKAO");

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
    msg.setTimeStamp(0.372186903265);
    msg.setSource(17619U);
    msg.setSourceEntity(193U);
    msg.setDestination(26669U);
    msg.setDestinationEntity(46U);
    msg.topic.assign("EZDMMCLJPC");
    msg.data.assign("ANURIZXZIOLTNMXNTWTLQEUAAYLKJZRYEUDQMZFDVGPFCOVSMGSAYIPRXFOBGVQBYJNKDUEBVQQIWUXSXBFPBSYNMOOPFFHCTGGVEEVDNXYLKCCTOR");

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
    msg.setTimeStamp(0.65797481426);
    msg.setSource(44638U);
    msg.setSourceEntity(29U);
    msg.setDestination(15379U);
    msg.setDestinationEntity(168U);
    msg.topic.assign("WIZUCWYMSOJVHCWHFUQUCZPEPOMMXJVBRDALUTLBUCNUKQENFRUXPLBDJYIHLJZCQTKNATSGBMXRNFJSUADRGGQKAPEOVXCVIIL");
    msg.data.assign("PPCFTHZZYBZTJGNVQIIKNSPUOPLMUJVCPFNNCZXORGGJFRKJUYXYZKCHGAMVNGLOVHNHUI");

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
    msg.setTimeStamp(0.607111359012);
    msg.setSource(11545U);
    msg.setSourceEntity(115U);
    msg.setDestination(39914U);
    msg.setDestinationEntity(253U);
    msg.frameid = 144U;
    const char tmp_msg_0[] = {-114, -30, 8, -25, -22, -5, -126, 83, 43, -12, 104, 28, -96, 53, -11, 93, 80, 92, -10, 20, -61, -23, -127, -126, -85, 78, 8, 83, -43, -113, 44, -121, -45, 58, -44, 121, 39, -93, -32, -108, 80, -7, 91, -19, 45, -87, 14, -94, 8, 81, -42, -121, 118, 56, -116, -106, -14, 66, 3, 44, -34, 69, 9, 85, 95, 73, 94, -65, 30, 6, -5, -52, -12, 86, -73, 118, -61, 40, -98, 16, 126, 59, -85, -128, -76, -77, 103, 41, -79, -121, -119, -15, 41, -8, -112, 19, -8, -64, -88, 87, 101, 8, 118, 94, 52, -37, -41, 104, -89, 47, 108, 6, -44, 61, -62, -2, -28, 3, -90, 0, 87, -113, -103, 102, 84, -7, -67, -59, -9, -49, -27, 121, 29, -55, 24, 110, -66, 109, 38};
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
    msg.setTimeStamp(0.68101398334);
    msg.setSource(64214U);
    msg.setSourceEntity(50U);
    msg.setDestination(9752U);
    msg.setDestinationEntity(37U);
    msg.frameid = 53U;
    const char tmp_msg_0[] = {96, -27, 56, -54, -15, -18, -125, 61, 3, 40, -48, -80, -88, -124, 121, -120, 66, 11, -31, -8, -20, -90, 87, -128, -51, 51, -114, 4, 60, 115, 47, 40, -113, 97, 14, 116, -22, 17, -69, 58, -29, 107, -69, -52, 11, -4, -75, -96, -38, 17, -22, -15, -80, -20, -81, 67, 17, 79, -50, -123, 104, -7, -40, 15, 120, 5, 0, -96, 44, -104, -92, -4, -125, -93, 70, 81, -8, -87, -119, 43, -88, 106, 21, 23, 4, -115, 16, -51, -40, 126, 88, 20, 90, -67, -44, -61, 101, -57, 15, 101, -45, -30, 64, 117, -36, -64, 11, -115, -27, 82, -16, -62, -84, 103, 118, -28, -2, 63, 103, -6};
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
    msg.setTimeStamp(0.690511435715);
    msg.setSource(42483U);
    msg.setSourceEntity(53U);
    msg.setDestination(35009U);
    msg.setDestinationEntity(117U);
    msg.frameid = 207U;
    const char tmp_msg_0[] = {124, -35, -19, 108, -110, 59, -103, -5, 106, 121, -77, 33, 36, -61, 87, -83, 40, -110, 14, -125, -63, -13, 126, -10, 123, -79, -105, -13, -87, 13, -98, 115, 20, 39, -67, 51, 28, 80, 20, 77, -33, 46, -57, -41, 91, 100, -36, 120, 18, -75, 6, -29, 121, -114, 119, -89, -97, -58, 113, 12, 114, -87, -87, 15, -105, -28, 45, -111, -21, 56, -15, 40, -86, 91, 114, -86, 102, 32, 47, 17, 114, 107, -48, -38, -85, 122, -37, -93, -59, -33, 124, 11, 104, -36, 21, 77, -116, 71, -3, -117, 99, -80, 118, 10, 100, 31, -55, 105, 75, -79, 31, -75, 121, -62, -35, 91, -88, -19, 22, 111, -109, 66};
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
    msg.setTimeStamp(0.182757752819);
    msg.setSource(61763U);
    msg.setSourceEntity(73U);
    msg.setDestination(13562U);
    msg.setDestinationEntity(110U);
    msg.fps = 63U;
    msg.quality = 192U;
    msg.reps = 95U;
    msg.tsize = 95U;

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
    msg.setTimeStamp(0.226528491861);
    msg.setSource(37217U);
    msg.setSourceEntity(100U);
    msg.setDestination(48091U);
    msg.setDestinationEntity(207U);
    msg.fps = 46U;
    msg.quality = 61U;
    msg.reps = 199U;
    msg.tsize = 243U;

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
    msg.setTimeStamp(0.688552614476);
    msg.setSource(20304U);
    msg.setSourceEntity(12U);
    msg.setDestination(19140U);
    msg.setDestinationEntity(219U);
    msg.fps = 146U;
    msg.quality = 34U;
    msg.reps = 143U;
    msg.tsize = 19U;

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
    msg.setTimeStamp(0.553899578847);
    msg.setSource(43689U);
    msg.setSourceEntity(228U);
    msg.setDestination(41220U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.634607390068;
    msg.lon = 0.90099913395;
    msg.depth = 200U;
    msg.speed = 0.8651061827;
    msg.psi = 0.866381408401;

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
    msg.setTimeStamp(0.102618982387);
    msg.setSource(46542U);
    msg.setSourceEntity(25U);
    msg.setDestination(32806U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.0512485259239;
    msg.lon = 0.542165197759;
    msg.depth = 53U;
    msg.speed = 0.136476972659;
    msg.psi = 0.420747227098;

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
    msg.setTimeStamp(0.0969531129274);
    msg.setSource(10137U);
    msg.setSourceEntity(146U);
    msg.setDestination(44049U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.699815647481;
    msg.lon = 0.0439036649571;
    msg.depth = 39U;
    msg.speed = 0.632406902635;
    msg.psi = 0.196140986341;

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
    msg.setTimeStamp(0.0611208745821);
    msg.setSource(40604U);
    msg.setSourceEntity(125U);
    msg.setDestination(63006U);
    msg.setDestinationEntity(27U);
    msg.label.assign("KMGRQORKWPLAIJREDFPQTDPITACGWFKYGFHSYRCOUIGMABSOUAVLTDEWSVXWTGZIDOWVHNNEULZOXXDVJHNSBHHFBYXFQLTVAKNTLEOUSJPJFSKMBNUWKBPVNGCMFXCBBUCUMYIESVPNITWKZQXQCACOALVJYGXERREL");
    msg.lat = 0.368201455248;
    msg.lon = 0.76815740871;
    msg.z = 0.930420998324;
    msg.z_units = 220U;
    msg.cog = 0.315871400696;
    msg.sog = 0.0967194408996;

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
    msg.setTimeStamp(0.585334658338);
    msg.setSource(51275U);
    msg.setSourceEntity(153U);
    msg.setDestination(12562U);
    msg.setDestinationEntity(177U);
    msg.label.assign("PUPFFIKCCIVOEW");
    msg.lat = 0.978821320022;
    msg.lon = 0.0844188705097;
    msg.z = 0.877882243599;
    msg.z_units = 8U;
    msg.cog = 0.379458192053;
    msg.sog = 0.822165750547;

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
    msg.setTimeStamp(0.448020578747);
    msg.setSource(7217U);
    msg.setSourceEntity(90U);
    msg.setDestination(28847U);
    msg.setDestinationEntity(166U);
    msg.label.assign("XXBJGAYISQJHJAMQJMBTFDMSAWNDBESSVKFWEGACYZVICJPBAWGQLJZFRQEVXOURHBKATEYGGVLUYCPFSDYQLVBRXXXRKEPCLKPQSGTXSHMZRGMKNYHZVCZMDN");
    msg.lat = 0.783933210655;
    msg.lon = 0.568667651832;
    msg.z = 0.161114425675;
    msg.z_units = 74U;
    msg.cog = 0.499625541908;
    msg.sog = 0.318584654273;

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
    msg.setTimeStamp(0.447629892563);
    msg.setSource(61179U);
    msg.setSourceEntity(24U);
    msg.setDestination(341U);
    msg.setDestinationEntity(126U);
    msg.name.assign("KCAHAHVQPMCQGLZVOVMJDSFXXGFRDJZSWKKIEYOXHWBRHLX");
    msg.value.assign("OYNYJELKRPQQZJTKCRRVKAXGUBBESEHKBFBOJCDXRNWACTCPRNGIMPWFIFIXJYVJCXBYDRRASJNNFVGGZOULLCPPXGEDXPOBCPYTMTRZUPTQOPRQGGSEQXUTZDENYSYMUWAWCQFWWQLLTFZZVVNJMSHUYWHGMFSOVHEMOUZETAKUIQOGYDMHBMHRWOBZTMNIWQVHK");

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
    msg.setTimeStamp(0.875428240521);
    msg.setSource(42226U);
    msg.setSourceEntity(199U);
    msg.setDestination(22138U);
    msg.setDestinationEntity(218U);
    msg.name.assign("VGFJRAGULIFOKSEWNEIXKXQZRIJJYKSHPKLJPVMQGVPWPBIBDGWFUJTUPKYIMLRVWDZN");
    msg.value.assign("AHOFFUKMJGEHPJAVDMFSOZCCRVNDCXDMOUNUXKPVPVNZKYRSMRFCPQBBDFJVBBVKFAQLSXQKSFMT");

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
    msg.setTimeStamp(0.39722122508);
    msg.setSource(40165U);
    msg.setSourceEntity(141U);
    msg.setDestination(58075U);
    msg.setDestinationEntity(181U);
    msg.name.assign("UUYGXWQWZRIBAENQFOBQVIDZAPFBXTJDKRRDMAAJRDVLWGBOHZHLNLCWCYVKLCHIFRWERXGLTXRFRSXLCYJQKMOMAPQPKZZHIMBBHQENLBOUTSKOIGORPPTINUAJDTYZDDVNPOSBMPMCTLAKVUDTQERZXJTHFG");
    msg.value.assign("PWIXSABEIQEJSXPJLHZGFSLZLZIWMZGBYLLITCHQFCPPANNAROJMWRZBPUSDKPFXLHMLBGZRCKIUCNEVIINYQXDYMYNHAQCEIVUOCDVKWZWFTSEIQQDGQTCSOUIMGJPXKBXAEPLTBX");

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
    msg.setTimeStamp(0.634605846379);
    msg.setSource(5931U);
    msg.setSourceEntity(85U);
    msg.setDestination(34148U);
    msg.setDestinationEntity(232U);
    msg.name.assign("AGAJWUKDKSHVNCQEDDFBUDOVYFDVVANSPOMBYZTPAYSBZKKLC");

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
    msg.setTimeStamp(0.1645936117);
    msg.setSource(49612U);
    msg.setSourceEntity(13U);
    msg.setDestination(25262U);
    msg.setDestinationEntity(128U);
    msg.name.assign("VLLVNCIUVKDGVVNIZTQAVUOQEGYZCUMRMLIHIQXDOBGTEPKKLAHJMALPNPVWRKZNLFAIGQEXYEUPXHSIFSXYSSJFNNRUZSQQKNMDRMDLYLSHHNIKARPTJHCWWWPVQOUDJKSKFGEWGPTXBPUDIHFOFBMQXKJZPGAUZMSZZDWIVUAVYAXOCYWEJDXRJTCANHMTRHTBAZGSTYRTWSRGOOFMCPLEOOJCBTJENBGFMFIDZCL");

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
    msg.setTimeStamp(0.747015412764);
    msg.setSource(7867U);
    msg.setSourceEntity(147U);
    msg.setDestination(49915U);
    msg.setDestinationEntity(52U);
    msg.name.assign("ZUTJGFEPMRMSWBNKOCDTVELGKIFDQFMGRYWETGJHQJWNHFWN");

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
    msg.setTimeStamp(0.36743080009);
    msg.setSource(35813U);
    msg.setSourceEntity(219U);
    msg.setDestination(43496U);
    msg.setDestinationEntity(84U);
    msg.name.assign("QZGILUNDWUHEWSKBASWBPWYHGQSHEOIWFHTLRJRHJVOGNBWZAEEYTJLHZPJHZRZLIOQIQNXMEXVAATPCQFQLDKONNZCKPKFZLCBDIRSROBKDWZCULQMKYSTVUVIIMIOCHSVTJFWCODHVFSSJXNTFFPKQAVYDDRNQXYRB");
    msg.visibility.assign("IOPGXSERWGOAXXPLEIMIUOPZNJQWIPFMYABHKDJMYGJDBOFCWCPVRAGMPKQEHESVFCNIOLVZXCHBNVRODTOSUTDFRHCFZUWEY");
    msg.scope.assign("KWZSDSVNIKRQETJLWIJGNMQCAHZMPKOITBIKRCDTHYZYTBVBQMUDQVKCZUGKJDWEOYZVSROWBKVGSXVJI");

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
    msg.setTimeStamp(0.421731376028);
    msg.setSource(50937U);
    msg.setSourceEntity(60U);
    msg.setDestination(58618U);
    msg.setDestinationEntity(30U);
    msg.name.assign("IBTQOYUZJDSPXKJYNCSCEKOFYXVHEYODHKMUCGRWCUOCOTPPROPQLQRWZYTHSPDVVRAYMWFWRTLNJNIDMIHDRBKVAGGFGXUSYZHVFUOMFPDTVBXUGIHECJIXOODJGLLGBVLZQUKCQTEAFYJZWPPXWEVAFTZREBNZSCSAQFIALVKPAMKTRINLNZEA");
    msg.visibility.assign("XVPAMHKDQJJKTVEDVRRZIILHBFTZMKLZAFKYKEZNKHEUSJQGHCQXXT");
    msg.scope.assign("UDTKMUKRSDKEAPDTZZDWYQNXPQAPQNJJPNQMDVIIGUCFOFCMEVXQRUBIHIOCVYWUYSQDMA");

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
    msg.setTimeStamp(0.701340128425);
    msg.setSource(58329U);
    msg.setSourceEntity(202U);
    msg.setDestination(58894U);
    msg.setDestinationEntity(114U);
    msg.name.assign("FJJTPOIGGPIZLHWLPXYMGASYNTRLJMJTLDKPCQKUQVETIPJGSPBHMZTRYLKKUJIABFWHSMKVWFVCUXDKRBEOGNOOQHJBUDFNOEXNEZSNZLEFVYOQCCXEZOAAQSVBAHWCXILKXQEVELYIEVGJAZSEOGWYUFPKQUWDCYNFFDWZHDL");
    msg.visibility.assign("ZADTBWGXWUFBQDHRBCQPPVFNLUYPXAYJFINSPOXDMYTJOYJTRRGAWQXEBZGUNRHLBDYMSBUHJESMRFDAHEWSKHTSBWFJOVIOOUJLKRKO");
    msg.scope.assign("YKMWZNETLIOOQWUDCWMUWHQKRMRFETKKAZWNIICUQYHGFAVIJPZWVPDYORGCXXZQHGMDDULTMSRJTJPHVWTYHVPOELNQEGNTJBDZWXYBHPWPLFFUFKKMZEJPRHBYSZLIRTAXBAUUVKNGJEDLICJCAOFPEJXZDFNBMJODFITGKNBPVLPVSIEHGCRSLSJYQVBKXINYOOQIQCUSANFAERZKTWL");

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
    msg.setTimeStamp(0.551745921678);
    msg.setSource(32850U);
    msg.setSourceEntity(170U);
    msg.setDestination(56470U);
    msg.setDestinationEntity(218U);
    msg.name.assign("POKKSIIJFLUKNVMQBCXRDAWMLIAEUGXVMWKJFKLSALLNPDJDCBEXEIBVDGYAOHZMPOTLUOCZFUPYUGBVSKMESNNJTUBPENCHNDQGJBQZVSHGROWFXQQXXTUNLBYMNCJNOOYFDXQTYJHTRXFRHRPWDPMBIRPCRFKREPDWPSTQDBVZCCYTVBFHUVHXKHHWTOSVJZJXIAQWZNJSWML");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UPKFXZJVSXATOMLRQMYDSA");
    tmp_msg_0.value.assign("WQKMYFJXBHLLNICIADWEXEHUUJNNWKYSGVJXIOEUUZKQVZTGYORDDEWHCSLKNQLDEBVXBLAZOQNIQBHQKRZPJCWHLYSWMFWRPXWAPMGBXTWAFKHYVTOFNWNZUPJPLTYFDNLBXLSTRTSGXYPQEFPVRAFUJIDSBKSROSMMIDEXOCUVXJSIMZAPEMQCTIPQVIOTGRVKJQC");
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
    msg.setTimeStamp(0.852756168895);
    msg.setSource(58164U);
    msg.setSourceEntity(227U);
    msg.setDestination(58945U);
    msg.setDestinationEntity(250U);
    msg.name.assign("USFLEYGBBZYPXTKXVBOAFQZWRFGXMWXHWMWJYRSIYIFYPCFPEOQVHTWWQWOJGBCEGZVZJRSAVROQUE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YCHKYLSUFLIARKWIXDGOPGAKNYCQJVKGJQV");
    tmp_msg_0.value.assign("IFZLSGCQXXIEVFFLWNPVBEYJKXIPOIVTXQDTNIKYBSWPUDVJDYAPPBCMAOHJKGEKRTWBDBKCZFHMJZYJYYHUQZTYOBVLMEXKROSGMLBEOIIWXZUMGXHHRZPTMQVREZVDWLDDUQDGUTSWAJCQCMFKHDONGWINKIWCFUFOLULPAPJOIKTPYTRCCSAJHJONEGEXJRUXHWDVZGAPQREBYNNC");
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
    msg.setTimeStamp(0.88939057667);
    msg.setSource(839U);
    msg.setSourceEntity(220U);
    msg.setDestination(48847U);
    msg.setDestinationEntity(68U);
    msg.name.assign("HFGBTTXYLWTLTYRSVAIYUTIPDBFYHHNMCHDPCCYVPLGQLCTFNSJUPIVBQXTDDKUCBRWQBEXBVOVFLCMOWBGFEXRUUWKAHGKQXEZCGKZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AJFHQGLKLDTCQSXHOTNJFGCTFHDTAOBSWFEWPZVKSALNNSOKCFQYGOMHNVZJUHJRFWBARMSQFDHXXBGJHNIGHLTMKBURUPTPYEVPJZBMGJSNEMYRQPAKLVPNFIDXYBZWIIVPVXMOQYXOCTZDHICEEMGRBSCADLNWCDWGKJUKRUPKAUFORUICSYXDBQQXYBYXVWADEHOITVBLNTZORRELEKNUUOAEQMDIJVIGLZET");
    tmp_msg_0.value.assign("XVIAWBJCIOEVVQIGHCNLTGTDYZSRWERAHNVNULQMJKXFJZCYKSGSHPAPJJKUVKLQLFRGQKBJIUUIYOXOLETFEHLMTEUQBTNYXCRXXCABEPYNDDASLQDSZUUOWODYFFMPSUSTKJFFHGPHQMALPXFMCOLQPWEZOPI");
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
    msg.setTimeStamp(0.432727255326);
    msg.setSource(51104U);
    msg.setSourceEntity(27U);
    msg.setDestination(54664U);
    msg.setDestinationEntity(131U);
    msg.name.assign("TNPNNWAPMQFDFTYQXYSCYHBDHYLRLLCXAUCVGKMKGADJSYJSRRVYJEXKHOTQEHENBGIOCSYNLGJBWIZZVEAZJDKZPS");

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
    msg.setTimeStamp(0.0651508064759);
    msg.setSource(12970U);
    msg.setSourceEntity(144U);
    msg.setDestination(53373U);
    msg.setDestinationEntity(219U);
    msg.name.assign("INEUDODDECPOZWMGGTXKQXRKFFQJLTPOXGLZGVXQSCKHSBRGWPJZEDWLSJNSKUARGRTKYCVIKNNPWQOHBYXUALAPOGPOZVYRVKYQIOHPDZOCSANLTNWBKEUIBMOXEFFRCUCZLUOXHJASJFBJRCKWYCTASWRVYDNHLIPGUEHDXTNTFFYVCYEMLQIJMZVWUHNJFKYTISRITPMSMHWMUSDPCEJDGBQQTZJLAFNLUGVABHEQBMRVA");

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
    msg.setTimeStamp(0.0823943036867);
    msg.setSource(43700U);
    msg.setSourceEntity(23U);
    msg.setDestination(32253U);
    msg.setDestinationEntity(33U);
    msg.name.assign("QKZZTOHJZHOIMVWEQAAIFMUOFLVXSYLKHACPRRIVVURKYMYEBXWJKOWWRCJNACDGYTCEXTEFNOZVEJOYLPTQWWMWUQOBCLPVPRSNGTGDZJUQXSUSTBGLSCVPBABCNYTKBLUBJPGSUJFHYEXCMJUEFSXPRARDZNLFIMQMZIYJHZGD");

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
    msg.setTimeStamp(0.799741952394);
    msg.setSource(40327U);
    msg.setSourceEntity(85U);
    msg.setDestination(36565U);
    msg.setDestinationEntity(44U);
    msg.timeout = 716766601U;

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
    msg.setTimeStamp(0.32453018088);
    msg.setSource(36349U);
    msg.setSourceEntity(250U);
    msg.setDestination(40808U);
    msg.setDestinationEntity(68U);
    msg.timeout = 3166863808U;

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
    msg.setTimeStamp(0.604565142485);
    msg.setSource(1072U);
    msg.setSourceEntity(12U);
    msg.setDestination(22675U);
    msg.setDestinationEntity(91U);
    msg.timeout = 4251486361U;

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
    msg.setTimeStamp(0.603111811808);
    msg.setSource(7080U);
    msg.setSourceEntity(86U);
    msg.setDestination(16573U);
    msg.setDestinationEntity(84U);
    msg.sessid = 856827386U;

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
    msg.setTimeStamp(0.286895245613);
    msg.setSource(16829U);
    msg.setSourceEntity(199U);
    msg.setDestination(53127U);
    msg.setDestinationEntity(22U);
    msg.sessid = 2832473859U;

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
    msg.setTimeStamp(0.302784255819);
    msg.setSource(45987U);
    msg.setSourceEntity(186U);
    msg.setDestination(41779U);
    msg.setDestinationEntity(187U);
    msg.sessid = 2636106833U;

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
    msg.setTimeStamp(0.934593318989);
    msg.setSource(56543U);
    msg.setSourceEntity(87U);
    msg.setDestination(49500U);
    msg.setDestinationEntity(101U);
    msg.sessid = 881447607U;
    msg.messages.assign("ALOXGFVTVXHIJZRIPAWVWJMQBBQUPBFJGQIWMYRPDDHQSHOLJAWGAIOSGANYXWIKKAYURSLXNUMKHCZKCMIDJOFKAFBIIQZFDQCAX");

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
    msg.setTimeStamp(0.706646744876);
    msg.setSource(58855U);
    msg.setSourceEntity(23U);
    msg.setDestination(7279U);
    msg.setDestinationEntity(10U);
    msg.sessid = 630203810U;
    msg.messages.assign("BQGAAKUCXDNBYMECNXBQNWIFUHZTBTEDRTFOFFIWSSWGLQYZPEUWYJETWIAYFGYZMTDYCQPWRXVXRNPCSCQBKREKALDIGKUHDFURMJRSMHJDVOLMPVNLOIYBR");

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
    msg.setTimeStamp(0.0182998470317);
    msg.setSource(11303U);
    msg.setSourceEntity(53U);
    msg.setDestination(32529U);
    msg.setDestinationEntity(194U);
    msg.sessid = 2965032893U;
    msg.messages.assign("MIOKHWFGDWONUWDTTOTISXXDFVUGKEYPLEELVJARUVGYRPFDYPDUKZMJZQDOCKZNVXBMUCHHCBVJUILMOXSL");

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
    msg.setTimeStamp(0.649954085575);
    msg.setSource(9969U);
    msg.setSourceEntity(25U);
    msg.setDestination(1063U);
    msg.setDestinationEntity(92U);
    msg.sessid = 1946827995U;

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
    msg.setTimeStamp(0.827661329087);
    msg.setSource(22744U);
    msg.setSourceEntity(202U);
    msg.setDestination(36757U);
    msg.setDestinationEntity(85U);
    msg.sessid = 2910671408U;

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
    msg.setTimeStamp(0.874080441132);
    msg.setSource(28153U);
    msg.setSourceEntity(57U);
    msg.setDestination(45455U);
    msg.setDestinationEntity(16U);
    msg.sessid = 2821860682U;

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
    msg.setTimeStamp(0.228692882859);
    msg.setSource(42016U);
    msg.setSourceEntity(96U);
    msg.setDestination(4030U);
    msg.setDestinationEntity(31U);
    msg.sessid = 2952158166U;
    msg.status = 188U;

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
    msg.setTimeStamp(0.12850489324);
    msg.setSource(40565U);
    msg.setSourceEntity(52U);
    msg.setDestination(35876U);
    msg.setDestinationEntity(143U);
    msg.sessid = 3622035489U;
    msg.status = 61U;

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
    msg.setTimeStamp(0.436366132142);
    msg.setSource(24231U);
    msg.setSourceEntity(222U);
    msg.setDestination(17907U);
    msg.setDestinationEntity(101U);
    msg.sessid = 721958406U;
    msg.status = 231U;

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
    msg.setTimeStamp(0.978699852633);
    msg.setSource(29894U);
    msg.setSourceEntity(15U);
    msg.setDestination(28416U);
    msg.setDestinationEntity(214U);
    msg.name.assign("NQYZQCAPADHXIBCSVPROGDVVFOPARTHUILIOSOPIQJPLWTASQOZPBUTJFGMURJMWKCCTOWIHWBPRQYFXMFOSXHIAKVFVKQGASRYEKNTYQHSBWNXDSLQLJGGQDMZ");

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
    msg.setTimeStamp(0.342969164361);
    msg.setSource(4704U);
    msg.setSourceEntity(27U);
    msg.setDestination(51876U);
    msg.setDestinationEntity(238U);
    msg.name.assign("WQZVRZYUDOUVSQPXSBSCKHSVLWNXMOIPAYEAACQRFTRGKPNGEJLLKOZLSRQOWVENHGYYMTRFBFCJWZNEKUDGNPRTSZTGQYMXLTIBNEOAEZZCAYHLIWFMQMNYLUXFATSFKJGJDIMECCJUSJY");

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
    msg.setTimeStamp(0.309695281156);
    msg.setSource(47876U);
    msg.setSourceEntity(140U);
    msg.setDestination(65108U);
    msg.setDestinationEntity(74U);
    msg.name.assign("CLOPUEYDIQALWHNKHNACPPMSDSAFQTCAEMIGXBXMBANMSNDVTPIWOVGGSIRHNZTYFJJQZHGRKOSWHONJFKRATBJFDEXPLRHMGTDFWJXXCVOXACMRWLUOFV");

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
    msg.setTimeStamp(0.462480112168);
    msg.setSource(57689U);
    msg.setSourceEntity(68U);
    msg.setDestination(41206U);
    msg.setDestinationEntity(221U);
    msg.name.assign("CFRQJCDMLCCVAXMEYFMJXLLARZKTOKTFIRMTSPVPTZZYMTHWCUXTVIVQFDYNFKUXXPHBQNEMBL");

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
    msg.setTimeStamp(0.36895846245);
    msg.setSource(17538U);
    msg.setSourceEntity(249U);
    msg.setDestination(40089U);
    msg.setDestinationEntity(6U);
    msg.name.assign("FSEJCQSVDMRUHWTOZXGBCIXZKXTGTDGTODPYCICZWCKIRNIRGYRBBIQIGZEPFMRDVQMRGBKAWCYTHPNMABLJIQLPEWPLJHEDZRDFMMTKNYFKLOHQUIVGFYCDMEJYHDBLSVMOSQXWYYZBOEJXXJLOAORXQFWVNDSLPFAYJKXUWTPTBQAZCXALJUYUJVNCTOPHFOVWHIGPEHEX");

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
    msg.setTimeStamp(0.177537188205);
    msg.setSource(28553U);
    msg.setSourceEntity(42U);
    msg.setDestination(12481U);
    msg.setDestinationEntity(183U);
    msg.name.assign("PCEOQOAKCDFQILCIAMWXPBAWXYES");

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
    msg.setTimeStamp(0.418228141826);
    msg.setSource(53319U);
    msg.setSourceEntity(181U);
    msg.setDestination(31942U);
    msg.setDestinationEntity(252U);
    msg.type = 74U;
    msg.error.assign("AEURMZZVLTUFJVDGVJGMWWOHUNERJAWYFFZBPSPQKYVJMEZT");

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
    msg.setTimeStamp(0.236478887154);
    msg.setSource(7634U);
    msg.setSourceEntity(177U);
    msg.setDestination(20021U);
    msg.setDestinationEntity(140U);
    msg.type = 229U;
    msg.error.assign("MOQTBIQVVDHJLZBZSSDHNVNIBNIRXRVUYDKUNICZGVHITITHOYQYSDXKHXJFPKJOEWZTCVQCLGLLFMLVLRQXYKTUEOSUIAALFYUFRBMCOKAHEQGCNJFMBGUOEJPJEXCREFMUSPDMALSJQZJMPGMZZPOWKIYRNESXPFTSFWDANXIVPCEWSLDGYFTRTRQBGOWOMGKEGHRYFHMYNAQYJVLICXB");

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
    msg.setTimeStamp(0.872410531945);
    msg.setSource(1246U);
    msg.setSourceEntity(4U);
    msg.setDestination(5171U);
    msg.setDestinationEntity(174U);
    msg.type = 7U;
    msg.error.assign("UOBOCQRKIOCGYTOLIHYZMFEFHJDAEZYVWMACQEMEDBXGFNFUJKSWUOJYMFNNCRATKAKAHDFTJLWDPXIF");

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
    msg.setTimeStamp(0.622784225524);
    msg.setSource(30220U);
    msg.setSourceEntity(41U);
    msg.setDestination(44448U);
    msg.setDestinationEntity(41U);
    msg.seq = 58660U;
    msg.sys_dst.assign("EZKFTTEUNQBTKBIELZVYRWRGZIFDCMECOEEQASLMVHQXWCDJUUZSKIWTHUXZIOWWFYVNLQ");
    msg.flags = 6U;
    const char tmp_msg_0[] = {40, -18, -100, 69, 122, -109, 91, -119, 90, 91, -63, 27, 118, -87, 32, -121, -126, 90, 111, 65, 61, -10, 37, 66, 65, -55, 31, -43, -47, 8, 117, -106, -124, -61, 118, 56, -113, 111, 123, 42, -37, 15, 125, -19, 83, -80, -44, -68, 12, -22, -38, -34, -39, 35, -106, -86, 0, 30, -124, -94, -88, 16, 120, -71, 112, -83, 14, -49, 57, 121, 19, -102};
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
    msg.setTimeStamp(0.874779218023);
    msg.setSource(32632U);
    msg.setSourceEntity(73U);
    msg.setDestination(40546U);
    msg.setDestinationEntity(12U);
    msg.seq = 8311U;
    msg.sys_dst.assign("PCCPMRMVCQMTHWIKABZGANNNPIEIOSBKDXXBE");
    msg.flags = 245U;
    const char tmp_msg_0[] = {32, 18, 70, -36, -85, 81, -98, 6, -5, -9, -93, 32, -21, -23, 9, 73, -120, 47, 95, 32, -38, -123, 68, 126, 80, -117, -86, -34, -116, -90, 109, -3, 75, -126, 116, -107, -106, 60, 108, -12, -86, 29, 115, 123, 102, 53, -121, 66, -67, -25, 64, 120, -47, -12, 79, 112, 50, -35, -83, 17, 27, -92, 112, -3, 119, -117, 109, -69, 104, -28, -115, -42, 91, 76, 69, 48, 0, 35, -83, -98, -14, -39, 64, -29, 7, -24, 39, -122, -99, 4, 32, -111, 37, 17, -80, 62, 42, -15, 16, -4, 9, -95, 55, -83, -125, -51, -18, -111, -109, 68, -36, 16, 31, 40, -89, 56, 107, -47, 56, -26, 29, 101, 41, 99, -49, 74, -64, -49, -70, 38, 125, -59, -17, 37, 20, -95, -112, -121, 74};
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
    msg.setTimeStamp(0.947145949265);
    msg.setSource(63166U);
    msg.setSourceEntity(92U);
    msg.setDestination(22216U);
    msg.setDestinationEntity(253U);
    msg.seq = 29791U;
    msg.sys_dst.assign("VTFCERHYYOYCSIJZLTRLWUUVMKMPKNIOEWKOHQFLFSXARUIDNWSQBVBMYEKGHEQHZTKJCLSGT");
    msg.flags = 186U;
    const char tmp_msg_0[] = {-48, -80, -23, -84, -30, 99, 105, 34, -98, 64, 22, 53, -79, -71, 52, -113, -116, -104, 52};
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
    msg.setTimeStamp(0.368099196913);
    msg.setSource(1065U);
    msg.setSourceEntity(201U);
    msg.setDestination(20599U);
    msg.setDestinationEntity(8U);
    msg.sys_src.assign("UNJHLAGXGHLYKNCGSIOEYIXJEPQSMZCTGEFGOLKZZMUMJNEQQFJVHORSMJCWRPBAMBUKXNTMRBOJAWZQEIJBWQKVVIWASBQWRWSYFTCCZFHZAMVRDPVLOEASYDRNVBPYQFIJLZFTKLDICTZEGMCJXXWPWQHNCHKMEUTWGBAYXDJXBVFIIRXLOUUBKVNS");
    msg.sys_dst.assign("MXIHVZTWXTLTZCHESDXQPESLKUKOCMKBGFWZLYRINROBZIASWQULAHNXGQUNPOOATUCVQHNMDGBAQHRJCFBRWXPHLXYISFUWRTYNERQGZFJSZFPRZEERUMUPTGAGIACYJRFTELFYFTMPRPPNDETYMTLUBVLAXJ");
    msg.flags = 33U;
    const char tmp_msg_0[] = {-16, -6, 41, 10, -77, 29, 112, 9, -112, -27, 115, 114, -92, 27, 111, 34, -66, 68, -95, 18, -45, -91, 2, 25, -66, -117, 117, 45, 6, -105, 47, 41, 77, -16, 58, 36, -108, 92, 17, -102, -83, -6, -81, -34, -98, -37, 78, 87, 116, -122, 7, 50, -10, 39, -15, 91, -49, -116, -81, 76, -126, -18, -105, 74, -86, 36, 60, 96, 114, -118, 112, 72, -118, -28, -79, -81, 15, -47, 14, -122, 92, 107, 59, 114, -2, 119, 6, 73, -10, 85, -31, 85, 84, -20, -83, -95, -113, 108, 112, 50, -118, 113, -4, 75, -107, 46, -68, -97, 73, -93, 105, -81, 3, -106, 90, 75, 124, 103, 36, 72, 10, 120, -44, -62, -81, 81, 103, -24, 118, -4, 86, -98, 78, 5, 21, 63, -50, 69, -9, 79, -21, -26, -60, 126, 90, -88, -2, -5, 110, 39, -28, 102, 101, -80, 13, 45, -108, 64, 46, -22, -100, -113, -113, -34, -47, 36, -55, 2, 105, 98, -40, 85, -125, 98, 3, -70, 44, -51, 66, -42, 85, 22, -108, -54, 26, -125, -93, -27, 124, -80, -59, -86, 123, -24, 106, 43, -102, -103, -119, 124, -77, 26, -116, 94, -48, -11, 50, -128, 116, -84, 119, 53, 40, 18, -32, 76, -120, -48, 63, 61, -18, 33, -103, -115, 25, 58, -91, 53, 63, 23, 3, -108, 84, 57, 44, -77, -91, -84, -123, -96};
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
    msg.setTimeStamp(0.039069120449);
    msg.setSource(62603U);
    msg.setSourceEntity(133U);
    msg.setDestination(44091U);
    msg.setDestinationEntity(113U);
    msg.sys_src.assign("YOKGUJDTWNFZTTVSCJGEONSHRDSLRKZYQWNFQEYPTFCVPEOAXIJKCWXNKMPHTYHPKOGTLNHPEIVXKSLDMUWFVMUOMVSSMI");
    msg.sys_dst.assign("SROACNNBPUFRPKWOBEBTQLLSKIEJOUDMRQWJHJZIEYYQUSTXXJJWXOHTSVSNLFPNDHTVKMWBECQIRATVLOARHZKVQVAXWORYZVUCRDDXKFXJFMYZCDWTQHCQVRZBIHZPEASYSLPSGSDYIOEMA");
    msg.flags = 80U;
    const char tmp_msg_0[] = {76, 61, -121, -38, -38, 93, 106, 11, -111, 100, 57, 99, 19, 13, -102, 56, -49, -115, -80, 69, -101, -38, 52, -109, -97, -60, -96, 64, -58, -9, 19, 3, -103, 110, -4, -33, -51, -2, -19, 107, 116, 36, 28, -3, -87, 38, -41, 115, 43, -25, -34, 118, -59, 101, -97, -91, -30, -104, 25, -90, -102, 60, -106, 96, 93, -78, -56, 23, -100, 125, -96, -125, 57, 90, 89, -95, -14, -55, -46, 20, 41, 117, 41, -25, 42, -14, -83, 97, 110, 38, -33, -71, -61, -41, -43, -97, 93, -109, 15, -117, 89, -98, -97, 115, 90, -64, -17};
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
    msg.setTimeStamp(0.0985894371317);
    msg.setSource(13803U);
    msg.setSourceEntity(115U);
    msg.setDestination(57065U);
    msg.setDestinationEntity(68U);
    msg.sys_src.assign("QPMFLPGTEGHDAWNKNBCGMBMKFGESMOXBURYJZXUBTXRRPAEJCXHQLRWGCCXYGOTFWIYJEILJWAHOJQSIHSXVWEKT");
    msg.sys_dst.assign("GACYHFMKVNQTDOXKNLCFWDTJSBIXXHNEDJVFEINJSHOPTRRYKCL");
    msg.flags = 6U;
    const char tmp_msg_0[] = {4, -27, 116, 41, -39, 44, 17, -4, -79, -20, -98, -38, -89, 11, 100, -17, 66, -116, 105, -45, -22, -64, 120, -20, -100, -59, -108, -37, -14, 27, -110, 81, -53, 25, 66, -20, -52, 73, -12, -120, -13, 31, -112, -60, 118, 3, -90, -119, -4, 19, 44, -68, -122, -7, -90, -98, -73, -61, 87, -78, -108, 106, 71, 7, -94, 13, 59, 49, -123, -70, -119, -96, 72, -19, -128, -12, 6, -39, 61, -70, -102, -18, -61, 98, 64, -91, -99, 89, 114, -99, -87, -41, -15, -51, -124, -110, 99, -52, -36, 5, -68, -30, 119, 77, -24, -67, -18, -3, 54, -33, 106, -95, -80, -34, -111, 80, -95, -23, 118, -116, 1, -118, -98, -18, -119, 82, 21, -59, 41, 60, -15, -26, -13, 123, -107};
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
    msg.setTimeStamp(0.510361510571);
    msg.setSource(20159U);
    msg.setSourceEntity(72U);
    msg.setDestination(25992U);
    msg.setDestinationEntity(205U);
    msg.seq = 12070U;
    msg.value = 235U;
    msg.error.assign("PWEFGMBPXZUTSLICIHPKDGLCKEQZVGZ");

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
    msg.setTimeStamp(0.971064616879);
    msg.setSource(2588U);
    msg.setSourceEntity(131U);
    msg.setDestination(10773U);
    msg.setDestinationEntity(68U);
    msg.seq = 3636U;
    msg.value = 163U;
    msg.error.assign("IYYDKMLNJRVCRNAMHGGKSMCZBOHLQBWHDRBYLKPQKCORADFPHUXHJQXDTLOTCASIYTSQFWYLOMXWFKEIEZFMQJTBRTLZXPQNJUNPHTSPVUWUPERUUJYDSLENRXBAEAHBVSSBLHOGOJMIA");

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
    msg.setTimeStamp(0.975370170069);
    msg.setSource(27178U);
    msg.setSourceEntity(185U);
    msg.setDestination(4509U);
    msg.setDestinationEntity(124U);
    msg.seq = 29682U;
    msg.value = 159U;
    msg.error.assign("YPHJRVPYQEWSGVRNNKKUMYGECIFTPYSDIRIJQNEIBLBQNHUOJHQYFIJCXGSBU");

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
    msg.setTimeStamp(0.774695069273);
    msg.setSource(46975U);
    msg.setSourceEntity(100U);
    msg.setDestination(22080U);
    msg.setDestinationEntity(125U);
    msg.seq = 18853U;
    msg.sys.assign("TIKIUQIOYLKHWEQQZENJYXLZBPUNFVIXVFMYOZKPYOHVDRJYUGBQKQGPLJSDDXUDAWGTSBTOVVTBMAXOIYWEDQMLGQMOWQUCUXVRNFCRCYONCGRRDHSDTJXRHKNTSJEZVPCEEWARAWXTJTBPYAAFPRMHUHUBXHSFXDP");
    msg.value = 0.456492925709;

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
    msg.setTimeStamp(0.811123710357);
    msg.setSource(18365U);
    msg.setSourceEntity(20U);
    msg.setDestination(25780U);
    msg.setDestinationEntity(163U);
    msg.seq = 27422U;
    msg.sys.assign("WDWBVWGLPTYSSXASTVXREAIFOVIPTMMDEACQAGMKYXNGPFURDJCBIFCGPWCHZJFYTFHNAJOWXMBQFIJVZRRYKYOMVJLBDMARIUGGNMMZWUNGTDSUNSMPQQHKSOPQQYIQPDOEIDX");
    msg.value = 0.501144373977;

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
    msg.setTimeStamp(0.760726212904);
    msg.setSource(10068U);
    msg.setSourceEntity(168U);
    msg.setDestination(36326U);
    msg.setDestinationEntity(119U);
    msg.seq = 5193U;
    msg.sys.assign("ZTVXLTNYBMWJBDQZJMCAKHDGHZONMLVIUFAASXTIWCFGAWDEOEWGWPCFPYNPVONYBUXNWVKJKJZNKSFNYTCAXYWUXMBQLNEUNMSFRZERGLCBTXNLTOY");
    msg.value = 0.0426950137695;

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
    msg.setTimeStamp(0.705520671879);
    msg.setSource(15786U);
    msg.setSourceEntity(29U);
    msg.setDestination(33908U);
    msg.setDestinationEntity(10U);
    msg.seq = 60088U;
    msg.sys_dst.assign("SEOAINANPDBPUOEEDGLACTPFXSOSMPKVEMQAEPBSWNIINKBKAEPAQQJDKRNJJRRKOLLAFHJXCUGNHPYXTSBSJUTQOLMIVXYGBHWUBWXERRJEFRXLMWFANBMLRCDCJJQCYUSZAHZRDMDLI");
    msg.timeout = 0.70786933701;

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
    msg.setTimeStamp(0.00375822927913);
    msg.setSource(40685U);
    msg.setSourceEntity(241U);
    msg.setDestination(53972U);
    msg.setDestinationEntity(12U);
    msg.seq = 2597U;
    msg.sys_dst.assign("TINVPWGBDGEWLADKVIKRVHMBSZQJKECFNULIOAFZPIFSWXVANSNDXEWZTYCKBJTMPOQZDXVBXVFBOEVPBKUYDVKGQNLPQWPNNFAZMDLEQOAEQHGLHBQHJURSXDQGYYPCCBZVCATLFATEEUPHXJCWSGGWSHGCDIHHJJAMYTQCRJOFLMMYYCKZGXIULIZWTMRUYMCGJASIKVX");
    msg.timeout = 0.60187250987;

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
    msg.setTimeStamp(0.185748115345);
    msg.setSource(15923U);
    msg.setSourceEntity(239U);
    msg.setDestination(21935U);
    msg.setDestinationEntity(229U);
    msg.seq = 35245U;
    msg.sys_dst.assign("DVYUTPZMFYYOXAYRBTFBLJUILXXEDAFDQXJYHAGSNLXKZMQNFPACKQIJENPKZPJZVUCCPKSVWEMMSIKPQYFTNLRTMRYWTLMIQRHWIRVOGMBOXSWQHXWOJQIGGOHOTRFAJJJGODSTTDQVVPLUOEBYELCLUYAIHIFFDWNUFFXVDHMBCRSXEVBOGXNUBERHGCHKWQPLZCACZSARPIGDDS");
    msg.timeout = 0.705627056533;

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
    msg.setTimeStamp(0.965602763842);
    msg.setSource(33665U);
    msg.setSourceEntity(38U);
    msg.setDestination(35168U);
    msg.setDestinationEntity(136U);
    msg.action = 42U;
    msg.longain = 0.681665687596;
    msg.latgain = 0.402875116621;
    msg.bondthick = 3972954428U;
    msg.leadgain = 0.183358589443;
    msg.deconflgain = 0.122305219143;

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
    msg.setTimeStamp(0.0177432938288);
    msg.setSource(20571U);
    msg.setSourceEntity(149U);
    msg.setDestination(63718U);
    msg.setDestinationEntity(213U);
    msg.action = 128U;
    msg.longain = 0.218484402191;
    msg.latgain = 0.565583364321;
    msg.bondthick = 673126888U;
    msg.leadgain = 0.426962077206;
    msg.deconflgain = 0.246595450382;

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
    msg.setTimeStamp(0.70392374641);
    msg.setSource(44514U);
    msg.setSourceEntity(99U);
    msg.setDestination(27634U);
    msg.setDestinationEntity(129U);
    msg.action = 180U;
    msg.longain = 0.480907783987;
    msg.latgain = 0.123148371804;
    msg.bondthick = 3680142070U;
    msg.leadgain = 0.292678932273;
    msg.deconflgain = 0.344606897114;

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
    msg.setTimeStamp(0.978876412139);
    msg.setSource(43857U);
    msg.setSourceEntity(29U);
    msg.setDestination(50746U);
    msg.setDestinationEntity(169U);
    msg.err_mean = 0.625552506888;
    msg.dist_min_abs = 0.57393244242;
    msg.dist_min_mean = 0.1657643082;

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
    msg.setTimeStamp(0.716781875584);
    msg.setSource(26622U);
    msg.setSourceEntity(3U);
    msg.setDestination(12963U);
    msg.setDestinationEntity(49U);
    msg.err_mean = 0.543394379805;
    msg.dist_min_abs = 0.666036176562;
    msg.dist_min_mean = 0.412656479485;

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
    msg.setTimeStamp(0.526963401407);
    msg.setSource(18127U);
    msg.setSourceEntity(64U);
    msg.setDestination(26381U);
    msg.setDestinationEntity(76U);
    msg.err_mean = 0.950219055595;
    msg.dist_min_abs = 0.407355546679;
    msg.dist_min_mean = 0.587718907795;

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
    msg.setTimeStamp(0.227906566213);
    msg.setSource(34337U);
    msg.setSourceEntity(82U);
    msg.setDestination(56096U);
    msg.setDestinationEntity(165U);
    msg.action = 159U;
    msg.lon_gain = 0.223923201968;
    msg.lat_gain = 0.811518955496;
    msg.bond_thick = 0.368813509303;
    msg.lead_gain = 0.502187504125;
    msg.deconfl_gain = 0.925975541309;
    msg.accel_switch_gain = 0.765818799539;
    msg.safe_dist = 0.243557173557;
    msg.deconflict_offset = 0.88819437465;
    msg.accel_safe_margin = 0.946615855563;
    msg.accel_lim_x = 0.717908413546;

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
    msg.setTimeStamp(0.873163041793);
    msg.setSource(9195U);
    msg.setSourceEntity(9U);
    msg.setDestination(60940U);
    msg.setDestinationEntity(53U);
    msg.action = 134U;
    msg.lon_gain = 0.711535672319;
    msg.lat_gain = 0.664302979729;
    msg.bond_thick = 0.610743237074;
    msg.lead_gain = 0.47225580041;
    msg.deconfl_gain = 0.462623132581;
    msg.accel_switch_gain = 0.991015086665;
    msg.safe_dist = 0.699623215637;
    msg.deconflict_offset = 0.841713864561;
    msg.accel_safe_margin = 0.715356254506;
    msg.accel_lim_x = 0.533960516115;

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
    msg.setTimeStamp(0.753028435985);
    msg.setSource(48865U);
    msg.setSourceEntity(16U);
    msg.setDestination(38519U);
    msg.setDestinationEntity(143U);
    msg.action = 203U;
    msg.lon_gain = 0.54119565665;
    msg.lat_gain = 0.490505411815;
    msg.bond_thick = 0.861245175083;
    msg.lead_gain = 0.962957151811;
    msg.deconfl_gain = 0.14683291339;
    msg.accel_switch_gain = 0.753105391655;
    msg.safe_dist = 0.332055599848;
    msg.deconflict_offset = 0.0136983556527;
    msg.accel_safe_margin = 0.328889453952;
    msg.accel_lim_x = 0.931331913237;

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
    msg.setTimeStamp(0.648650681099);
    msg.setSource(54107U);
    msg.setSourceEntity(16U);
    msg.setDestination(48611U);
    msg.setDestinationEntity(114U);
    msg.type = 68U;
    msg.op = 17U;
    msg.err_mean = 0.968344841546;
    msg.dist_min_abs = 0.479258718032;
    msg.dist_min_mean = 0.957224730919;
    msg.roll_rate_mean = 0.0591948486521;
    msg.time = 0.509275016561;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 192U;
    tmp_msg_0.lon_gain = 0.918350996346;
    tmp_msg_0.lat_gain = 0.137239588153;
    tmp_msg_0.bond_thick = 0.101269390731;
    tmp_msg_0.lead_gain = 0.54190431226;
    tmp_msg_0.deconfl_gain = 0.186304242048;
    tmp_msg_0.accel_switch_gain = 0.189881140322;
    tmp_msg_0.safe_dist = 0.157767846374;
    tmp_msg_0.deconflict_offset = 0.843811530386;
    tmp_msg_0.accel_safe_margin = 0.0112766752517;
    tmp_msg_0.accel_lim_x = 0.401206627737;
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
    msg.setTimeStamp(0.609989680254);
    msg.setSource(8207U);
    msg.setSourceEntity(92U);
    msg.setDestination(6990U);
    msg.setDestinationEntity(208U);
    msg.type = 86U;
    msg.op = 89U;
    msg.err_mean = 0.953256282772;
    msg.dist_min_abs = 0.715011784211;
    msg.dist_min_mean = 0.675858144006;
    msg.roll_rate_mean = 0.788211421271;
    msg.time = 0.625757812661;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 175U;
    tmp_msg_0.lon_gain = 0.402592375757;
    tmp_msg_0.lat_gain = 0.826279448374;
    tmp_msg_0.bond_thick = 0.777872976243;
    tmp_msg_0.lead_gain = 0.436287324593;
    tmp_msg_0.deconfl_gain = 0.210716525493;
    tmp_msg_0.accel_switch_gain = 0.952734101218;
    tmp_msg_0.safe_dist = 0.370498027228;
    tmp_msg_0.deconflict_offset = 0.276854392592;
    tmp_msg_0.accel_safe_margin = 0.806533756286;
    tmp_msg_0.accel_lim_x = 0.368595642931;
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
    msg.setTimeStamp(0.241346628423);
    msg.setSource(17126U);
    msg.setSourceEntity(7U);
    msg.setDestination(48225U);
    msg.setDestinationEntity(207U);
    msg.type = 60U;
    msg.op = 236U;
    msg.err_mean = 0.457814778495;
    msg.dist_min_abs = 0.688640703731;
    msg.dist_min_mean = 0.242784327049;
    msg.roll_rate_mean = 0.260850040999;
    msg.time = 0.945392355857;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 91U;
    tmp_msg_0.lon_gain = 0.872146454242;
    tmp_msg_0.lat_gain = 0.990288292785;
    tmp_msg_0.bond_thick = 0.49858521856;
    tmp_msg_0.lead_gain = 0.0545483978121;
    tmp_msg_0.deconfl_gain = 0.216506257982;
    tmp_msg_0.accel_switch_gain = 0.512521007364;
    tmp_msg_0.safe_dist = 0.827531946733;
    tmp_msg_0.deconflict_offset = 0.727754918375;
    tmp_msg_0.accel_safe_margin = 0.697927488955;
    tmp_msg_0.accel_lim_x = 0.849522344051;
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
    msg.setTimeStamp(0.612963799652);
    msg.setSource(4600U);
    msg.setSourceEntity(114U);
    msg.setDestination(31176U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.238970059606;
    msg.lon = 0.791460774313;
    msg.eta = 1818689521U;
    msg.duration = 13851U;

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
    msg.setTimeStamp(0.890704674451);
    msg.setSource(39004U);
    msg.setSourceEntity(202U);
    msg.setDestination(27416U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.67044981818;
    msg.lon = 0.419897409893;
    msg.eta = 1856579978U;
    msg.duration = 37208U;

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
    msg.setTimeStamp(0.146554195732);
    msg.setSource(16968U);
    msg.setSourceEntity(221U);
    msg.setDestination(19502U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.266696333078;
    msg.lon = 0.75585283276;
    msg.eta = 552945209U;
    msg.duration = 349U;

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
    msg.setTimeStamp(0.339683313125);
    msg.setSource(39846U);
    msg.setSourceEntity(180U);
    msg.setDestination(59409U);
    msg.setDestinationEntity(27U);
    msg.plan_id = 58785U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.185964782243;
    tmp_msg_0.lon = 0.734461501795;
    tmp_msg_0.eta = 3759557511U;
    tmp_msg_0.duration = 13489U;
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
    msg.setTimeStamp(0.524470665953);
    msg.setSource(16806U);
    msg.setSourceEntity(241U);
    msg.setDestination(30012U);
    msg.setDestinationEntity(235U);
    msg.plan_id = 50743U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.00384039468278;
    tmp_msg_0.lon = 0.853658311891;
    tmp_msg_0.eta = 59076630U;
    tmp_msg_0.duration = 29212U;
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
    msg.setTimeStamp(0.0749375987181);
    msg.setSource(32601U);
    msg.setSourceEntity(41U);
    msg.setDestination(16572U);
    msg.setDestinationEntity(65U);
    msg.plan_id = 65415U;

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
    msg.setTimeStamp(0.432023068128);
    msg.setSource(31086U);
    msg.setSourceEntity(214U);
    msg.setDestination(55698U);
    msg.setDestinationEntity(219U);
    msg.type = 245U;
    msg.command = 198U;
    msg.settings.assign("MNCJBEFMSPKPGMILZXBBGFTTGHLHRRXOBONZWUWBFSOWFQGJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 20150U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5143171998;
    tmp_tmp_msg_0_0.lon = 0.354747360252;
    tmp_tmp_msg_0_0.eta = 110824266U;
    tmp_tmp_msg_0_0.duration = 35718U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NJVKWZCYMVESMWCETUEXARQLWIBWZMOQPGESGVZGLJPHKABNLHVXPJFFOUSLGGYSAWYGQBGIHEBMLTXFOVBJELBKKRHDIDQSALJHTEKOOSBTWHUTJTZWCDRPCUGPTIJXCWPJCXKHRFMVPPGYNHVTNFQUMLZDVPRYZPB");

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
    msg.setTimeStamp(0.405702738568);
    msg.setSource(53350U);
    msg.setSourceEntity(252U);
    msg.setDestination(19541U);
    msg.setDestinationEntity(223U);
    msg.type = 177U;
    msg.command = 102U;
    msg.settings.assign("AXSJWFZNSJTSPXCWEDTCHFAKKWRPBBSAVJRVXJLKLBXSMIHJBWSLERIQDLOCXKVC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 17846U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TSLAUWEIKITOCXGDPGVLDZLICCWINVROFPLPXYGURHRSNSWGZOWQPAERRYXSBAHRMJAMBCYMRDLNNHVOCMTGNDGFQKHCQOQADJTAVEQTKMYFQWKVWXHJPAJFOSFTEBPILEPNINTIBPMDEUDWZNZACKONFEMDPKVKTGYNWUYLQKAWYUBSDBVTULBIGXSUJZRXKFTZMRASJSEKZOLYZQUHXWGVJUHYEHFQBJMBIYXBJPRMUDLIQVX");

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
    msg.setTimeStamp(0.834626353182);
    msg.setSource(61068U);
    msg.setSourceEntity(165U);
    msg.setDestination(20987U);
    msg.setDestinationEntity(195U);
    msg.type = 73U;
    msg.command = 199U;
    msg.settings.assign("EPNYCEEPPFTNCJSDRAKLDXVXRHRKPVXKMINSXPUSDVSDIWMJEBAWJMBZRGQPXTZVMDUBCZVOOELABYIFUEDFLQQVBMFSPUFBBLVTBJOGGBUNJDCY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 26544U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.117102537406;
    tmp_tmp_msg_0_0.lon = 0.224065695268;
    tmp_tmp_msg_0_0.eta = 2774396696U;
    tmp_tmp_msg_0_0.duration = 15162U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FCZETTOJFYKHCCWLMQWLVKVYNZHZHVDTKGXXQCOOOLXCEJFVBJICRLTVGAYBSRYNOSJAKHEBVVRTMQSQPJBBUMMXPJQSHIWLRZKHZTZSMWIYDFFCHIVNSQARSYTMKEAPUCEKJGNAJGTGUXDYTX");

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
    msg.setTimeStamp(0.911651744197);
    msg.setSource(58520U);
    msg.setSourceEntity(202U);
    msg.setDestination(45813U);
    msg.setDestinationEntity(43U);
    msg.state = 186U;
    msg.plan_id = 15398U;
    msg.wpt_id = 124U;
    msg.settings_chk = 35497U;

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
    msg.setTimeStamp(0.837503475378);
    msg.setSource(22061U);
    msg.setSourceEntity(16U);
    msg.setDestination(47373U);
    msg.setDestinationEntity(141U);
    msg.state = 144U;
    msg.plan_id = 18430U;
    msg.wpt_id = 165U;
    msg.settings_chk = 22688U;

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
    msg.setTimeStamp(0.429126118495);
    msg.setSource(42131U);
    msg.setSourceEntity(1U);
    msg.setDestination(61588U);
    msg.setDestinationEntity(74U);
    msg.state = 187U;
    msg.plan_id = 14244U;
    msg.wpt_id = 17U;
    msg.settings_chk = 28293U;

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
    msg.setTimeStamp(0.202767092033);
    msg.setSource(21437U);
    msg.setSourceEntity(139U);
    msg.setDestination(8963U);
    msg.setDestinationEntity(71U);
    msg.uid = 102U;
    msg.frag_number = 238U;
    msg.num_frags = 111U;
    const char tmp_msg_0[] = {124, -15, -70, 58, -41, -21, -109, -128, -102, -34, 8, -26, -87, 85, 2, 62, 101, 114, -64, 12, -116, -50, -48, 43, 68, -84, 125, -121, 97, -8, -117, -33, 25, -60, 20, 3, -103, -91, 116, 1, 50, 31, 82, 24, 40, -78, -9, 90, 62, 17, 86, 11, 23, -4, 76, 40, -81, 3, 74, 30, -49, -55, 46, -21, 102, -89, -60, 97, 27, -37, -101, 60, 82, 77, -38, -107, 119, 11, 100, -48, -74, 47, -12, 64};
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
    msg.setTimeStamp(0.582789766792);
    msg.setSource(24337U);
    msg.setSourceEntity(11U);
    msg.setDestination(59616U);
    msg.setDestinationEntity(1U);
    msg.uid = 204U;
    msg.frag_number = 126U;
    msg.num_frags = 170U;
    const char tmp_msg_0[] = {-120, 31, 31, 126, 77, -50, 57, -2, 56, 18, -124, 15, -22, 19, -102, -51, -81, 105, 25, 94, -45, 91, 109, -89, 12, 72, -92, 3, 100, -28, 10, -73, 105, -107, 49, 39, -92, 19, -27, -90, -70, 55, -55, -83, 104, 30, -102, -113, -50, -108, 71, 29, -19, 126, -40, 6, 75, 2, 36, 59, -124, -92, 14, 80, 41, -59, -59, 50, -44, 89, -127, 60, 91, -113, -1, -128, 83, 114, 70, 60, -68, -50, 104, -127, 39, -41, 112, 1, -84, 48, -124, -79, 100, -104, 6, 124, -98, -48, 96, -123, -92, -80, -121, -84, 76, 57, -112, -99, 41, -96, -19, -65, -126, 4, 54, -71, 66, 102, 67, 68, -128, -20, -40, -53, 17, 117, -15, 81, 60, -115, -10, 94, 121, -124, 88, 33, 58, -23, -126, 36, 26, -93, 36, -16, -79, -9, -102, -22, -8, -7, 37, -27, 87, 17, 123, 48, -8, -86, 109, 66, 50, -1, -64, 23, 50, 66, -30, 33, -20, -41, -116, 120, 17, -25, 94, 87, -99, -91, -128, -56, -55, -74, 8, 30, -122, 94, 58, -113, -33, 84, 56, -28, 98, -118, -39, 71, 43, -41, 87, -27, -23, 123, 8, 116, 13, 19, -122, -126, -74, 57, 2, 28, -39, -27, -5, 39, 20, -110, 51, 70, 12, -92, 103, -92, 48, -15, 0, -17, 35, -56, -62, -102, -124, 21, 17, -127, -92, -19, 99, -81, -31, -110, 78, -44};
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
    msg.setTimeStamp(0.02196970342);
    msg.setSource(62578U);
    msg.setSourceEntity(24U);
    msg.setDestination(14599U);
    msg.setDestinationEntity(30U);
    msg.uid = 142U;
    msg.frag_number = 76U;
    msg.num_frags = 244U;
    const char tmp_msg_0[] = {96, -121, 74, 102, -67, -100, -37, -10, -108, -105, 48, 24, -53, 41, 35, 20, -63, 40, -124, 12, -85, -72, 57, 52, 29, 105, -107, -76, -11, -109, -23, -95, -38, -57, 56, 60, 98, -22, -52, -64, 105, 0, 16, -18, 78, 110, -16, -3, 30, -60, 97, -76, -51, 59, 36, -108, 91, 40, -112, 81, 49, -121, 92, -114, -37, 24, 55, -120, 29, -4, 13, -84, 80, -123, 16, 84, -100, 9, 70, 51, -126, -87, 41, -61, 49, -122, 72, 119, -101, 30, 55, -107, -20, 19, 116, -29, -114, 71, 109, -106, 28, 83, -75, 32, 118, 14, 63, -81, -36, -120, -9, 95, 126, 87, -42, 115, 47, 71, -103, -59, -105, 55, 53, -111, 1, 13, -65, -36, 15, 89, -115, -84, -14, 64, 33, -97};
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
    msg.setTimeStamp(0.930400109854);
    msg.setSource(38630U);
    msg.setSourceEntity(245U);
    msg.setDestination(42329U);
    msg.setDestinationEntity(240U);
    msg.content_type.assign("OOMQPVGJZSQJZFWMCOHYHFEPZMBHKSWUUTSQVYRDIIHTTHIRAXAUSIEDZBTHXLDTWGLRDKVIUMYNELKAEMRLPPNDBYNNZHGPCKRHCMDSDHDGOBXVOTRNKQAFXPWJPFSKAEFOECFXUMRFQUNJBPQMUVNVAVOGSTHOSVWILKPQIOYCRKNAGKIGNJGGZTEQRJIXBVIODLRZFXYBBQBLGECMEEQWYWUWJ");
    const char tmp_msg_0[] = {-8, 61, 75, -108, -128, -100, 44, -81, -69, -12, 125, -9, 98, -112, -50, 96, 104, -30, 78, 16, -85, 34, -12, 88, -116, 91, 106, -91, 112, 103, 28, 19, 61, 39, -98, 70, -122, 35, -82, 122, 116, -90, -90, -126};
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
    msg.setTimeStamp(0.134307998106);
    msg.setSource(55588U);
    msg.setSourceEntity(140U);
    msg.setDestination(35796U);
    msg.setDestinationEntity(82U);
    msg.content_type.assign("TDUSPWJMRYEFKJRTWGDUMTXMQIROXYIAZIEBOPVUZUSWSPZHYCPNATEYKWFGGBTCXKNJUNWCYLVDCPXDNZJNCKKNRYUOFEVGGEDCQNUQLCWPRXOBQBQHDIXFRYXSVBFUINPMOHIHIRJQKLADVYIALYMRZGDTXQWTGKKPSFZJAHSBZGHESGEHCDUQKDHZFMZOOMHTFNANIXFXCUBLEQLVMLKWBJSQME");
    const char tmp_msg_0[] = {-97, 67, 75, 40, -15, -79, -99, -51, 70, 89, 83, -82, -76, -44, -11, -114, 53, 31, 33, -79, -79, -63, 85, -71, 54, -56, 63, 50, -78, -29, 94, 48, 0, -24, -79, -65, 87, -42, 29, -80, 12, 21, -17, -94, -122, 118, 2, -74, 13, 99, 105, -87, 113, 81, 89, -45, 93, -125, 52, -74, 15, -87, -5, -27, 111, -53, -7, -52, 49, 5, 111, 0, -8, -80, 57, 113, -56, 79, -109, 77, -73, -109, 118, 5, -37, 73, 12, -91, -12, -39, 56, -20, -12, -95, -2, -7, -96, -84, -34, 54, 86, -10, 38, 95, -25, -128, 97, 59, 28, -26, -30, 44, 28, -21, 28, -32, 124, 97, 82, -35, -50, 26, 120, -54, -30, 0, -49, 115, -125, 54, 97, -16, 114, 115, -97, 18, 25, -123, -17, -104, 51, -37, 106, -73, -61, -50, 33, 19, -57, 107, 66, -91, -127, 26, -44, 35, 42, -14, -56, -107, -128, 1, -59, -108, -1, -108, 32, -97, 116, -43, -23, -105, -31, 51, 95, 34, 77, -51, -49, -112, 90, 48, -119, -115, -62, 72, 83, 74, -34, -36, -33, 32, -92, 31, -5, 92, -73, -53, 86, -128, -34, -112, 45, -42, 122, 106, 3, 23};
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
    msg.setTimeStamp(0.382945671763);
    msg.setSource(41669U);
    msg.setSourceEntity(245U);
    msg.setDestination(26957U);
    msg.setDestinationEntity(51U);
    msg.content_type.assign("HSVSWNSDMMJCFAYLTIJKITHJCXULRSUALMJXQVOYHQCNDHXKOIRYJTGDOILWEEYGBXAPMWYBNEPSBMUWMVWSUPCGTHCDFGVTTNEERXVFEZYRXRFSKQZQMPLEVAVWDYMZLSGBTVXCGAIAJKMUHAFHHPUIEUFBRZJPBLQCYWRUXLXSOFFQNPOKZDDCHBOORRZGWUIVNGPOMRNXZUHEOCCYTQVZYATGLQLJQDFGSJKKWJZEP");
    const char tmp_msg_0[] = {-21, -69, -125, -41, 21, 69, -126, -64, 30, -78, -8};
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
    msg.setTimeStamp(0.700487026932);
    msg.setSource(49155U);
    msg.setSourceEntity(2U);
    msg.setDestination(16826U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.854639377959);
    msg.setSource(11057U);
    msg.setSourceEntity(91U);
    msg.setDestination(47817U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.837575301521);
    msg.setSource(3531U);
    msg.setSourceEntity(227U);
    msg.setDestination(43088U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.265929955628);
    msg.setSource(21227U);
    msg.setSourceEntity(128U);
    msg.setDestination(44416U);
    msg.setDestinationEntity(210U);
    msg.target = 14922U;
    msg.bearing = 0.169133759914;
    msg.elevation = 0.161971725823;

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
    msg.setTimeStamp(0.205592278435);
    msg.setSource(26273U);
    msg.setSourceEntity(30U);
    msg.setDestination(7355U);
    msg.setDestinationEntity(36U);
    msg.target = 44413U;
    msg.bearing = 0.294309107524;
    msg.elevation = 0.658642541768;

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
    msg.setTimeStamp(0.830366594228);
    msg.setSource(13354U);
    msg.setSourceEntity(144U);
    msg.setDestination(38426U);
    msg.setDestinationEntity(10U);
    msg.target = 58916U;
    msg.bearing = 0.244346019686;
    msg.elevation = 0.916308130967;

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
    msg.setTimeStamp(0.84223752597);
    msg.setSource(35993U);
    msg.setSourceEntity(221U);
    msg.setDestination(14386U);
    msg.setDestinationEntity(19U);
    msg.target = 54754U;
    msg.x = 0.725913105214;
    msg.y = 0.212303127347;
    msg.z = 0.113197961053;

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
    msg.setTimeStamp(0.395454414017);
    msg.setSource(32693U);
    msg.setSourceEntity(10U);
    msg.setDestination(47386U);
    msg.setDestinationEntity(223U);
    msg.target = 50767U;
    msg.x = 0.872711764705;
    msg.y = 0.380489142331;
    msg.z = 0.0553173092407;

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
    msg.setTimeStamp(0.308549181619);
    msg.setSource(51437U);
    msg.setSourceEntity(35U);
    msg.setDestination(28253U);
    msg.setDestinationEntity(146U);
    msg.target = 35971U;
    msg.x = 0.50970091767;
    msg.y = 0.770930414143;
    msg.z = 0.773290829712;

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
    msg.setTimeStamp(0.855451796745);
    msg.setSource(16881U);
    msg.setSourceEntity(0U);
    msg.setDestination(32945U);
    msg.setDestinationEntity(29U);
    msg.target = 64488U;
    msg.lat = 0.284474046521;
    msg.lon = 0.801687212804;
    msg.z_units = 198U;
    msg.z = 0.508070783987;

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
    msg.setTimeStamp(0.822798401195);
    msg.setSource(15360U);
    msg.setSourceEntity(153U);
    msg.setDestination(36018U);
    msg.setDestinationEntity(245U);
    msg.target = 29960U;
    msg.lat = 0.8665662079;
    msg.lon = 0.521346060689;
    msg.z_units = 29U;
    msg.z = 0.374393097197;

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
    msg.setTimeStamp(0.549437797698);
    msg.setSource(61261U);
    msg.setSourceEntity(128U);
    msg.setDestination(1594U);
    msg.setDestinationEntity(204U);
    msg.target = 2094U;
    msg.lat = 0.534838239084;
    msg.lon = 0.122871438233;
    msg.z_units = 192U;
    msg.z = 0.0756555502927;

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
    msg.setTimeStamp(0.844766708659);
    msg.setSource(44613U);
    msg.setSourceEntity(48U);
    msg.setDestination(57601U);
    msg.setDestinationEntity(107U);
    msg.locale.assign("HOUECIXMEBLBLPEKNPXTOUJABRLRRAFMAKCJIBKEGGXCMDLSLSERSMAPUDPFZQAVVGNATYMPQIWLKYMGKGWWANXHOSWFYKJNRDDROJWIICN");
    const char tmp_msg_0[] = {-62, -111, 17, -8, -27, 102, -27, -43, -97, -8, 34, -4, 0, 19, -93, 122, 93, 80, -66, -21, -10, 75, 126, -4, -80, 125, -12, -71, -121, -23, -85, -103, 44, 88, 4, -4, -62, -119, -63, 40, -49, 37, 57, 56, -8, -2, 47, 31, -67, -21, 73, -112, 50, 33, 125, 36, 114, 38, 39, -34, -69, -110, 37, 32, 14, -91, 71, -88, 100, -85, 97, 98, -51, 38, -96, -33, -13, -101, -95, 68, 55, -15, -125, -76, -37, -74, 79, 109, 1, 94, 106, 21, 123, 121, 100, -99, -31, 40, 26, -1, -97, 57};
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
    msg.setTimeStamp(0.882387827529);
    msg.setSource(57284U);
    msg.setSourceEntity(228U);
    msg.setDestination(2352U);
    msg.setDestinationEntity(217U);
    msg.locale.assign("ZFSTHHPGMOJKLMETXWSSUGIZYIOBFZTRDXNQVUHIPTNCJRKMADRMYHVYIWNOIHGWCMDGPYDEVCPBXXNGXCMLPAIMVRSHFMKBMWZFQCRTITNPLFEMZVJJCSTULDAKZIN");
    const char tmp_msg_0[] = {102, -40, -111, -89, 76, 7, -19, -7, -120, -13, -97, 0, 3, 9, 80, -86, -30, 20, -76, -33, -36, 2, -122, -78, -122, -56, 100, -98, 25, 101, -59, 66, -43, -51, -59, -62, 0, 110, -108, -41, 2, 41, 61, 109, 51, 78, -5, 73, 70, -27, -47, 71, 65, 0, -110, -5, 20, -28, 67, 50, 59, -103, -62, 109, -18, 45, 55, 21, 9, -18, -58, 6, 35, 96, -103, -12, 34};
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
    msg.setTimeStamp(0.454281959451);
    msg.setSource(19652U);
    msg.setSourceEntity(27U);
    msg.setDestination(18616U);
    msg.setDestinationEntity(116U);
    msg.locale.assign("WGLULITABXQBMEMNTIWGKORQMMASGNGZIMJIOQZCWPZXEZBZSDKMJSAUD");
    const char tmp_msg_0[] = {94, 87, 24, -56, 59, 7, 83, -38, -122, -72, -49, 13, 119, -32, -101, -19, -32, 30, -20, -18, 35, 113, 110, -74, -60, -21, -1, 24, 14, -36, -6, -75, 24, 18, -22, -94, -5, -33, 115, 25, -4, 56, 92, 57, 62, 102, 58, 13, 3, 78, -45, 63, 6, 96, 73, 126, 41, -9, -21, -61, 67, -84, -43, -124, -108, 3, 120, -110, -109, -102, 64, -31, -74, 89, 113, -103, -100, 94, 103, 94, -75, -128, -6, 14, 70};
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
    msg.setTimeStamp(0.069217749801);
    msg.setSource(14366U);
    msg.setSourceEntity(116U);
    msg.setDestination(11916U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.288119007669);
    msg.setSource(41361U);
    msg.setSourceEntity(240U);
    msg.setDestination(12902U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.0373859021422);
    msg.setSource(65030U);
    msg.setSourceEntity(113U);
    msg.setDestination(38588U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.168710262024);
    msg.setSource(6876U);
    msg.setSourceEntity(234U);
    msg.setDestination(22364U);
    msg.setDestinationEntity(44U);
    msg.camid = 205U;
    msg.x = 1710U;
    msg.y = 20928U;

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
    msg.setTimeStamp(0.133603048042);
    msg.setSource(28190U);
    msg.setSourceEntity(94U);
    msg.setDestination(58169U);
    msg.setDestinationEntity(21U);
    msg.camid = 218U;
    msg.x = 33647U;
    msg.y = 30908U;

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
    msg.setTimeStamp(0.326189759486);
    msg.setSource(20793U);
    msg.setSourceEntity(245U);
    msg.setDestination(46821U);
    msg.setDestinationEntity(85U);
    msg.camid = 49U;
    msg.x = 33808U;
    msg.y = 17957U;

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
    msg.setTimeStamp(0.0366952432634);
    msg.setSource(51465U);
    msg.setSourceEntity(82U);
    msg.setDestination(39375U);
    msg.setDestinationEntity(41U);
    msg.camid = 152U;
    msg.x = 4918U;
    msg.y = 12081U;

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
    msg.setTimeStamp(0.534155379678);
    msg.setSource(60018U);
    msg.setSourceEntity(165U);
    msg.setDestination(64807U);
    msg.setDestinationEntity(231U);
    msg.camid = 243U;
    msg.x = 10029U;
    msg.y = 32175U;

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
    msg.setTimeStamp(0.313136449527);
    msg.setSource(27804U);
    msg.setSourceEntity(164U);
    msg.setDestination(36192U);
    msg.setDestinationEntity(144U);
    msg.camid = 161U;
    msg.x = 12163U;
    msg.y = 44565U;

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
    msg.setTimeStamp(0.280830962155);
    msg.setSource(49707U);
    msg.setSourceEntity(109U);
    msg.setDestination(6777U);
    msg.setDestinationEntity(77U);
    msg.tracking = 102U;
    msg.lat = 0.746134412431;
    msg.lon = 0.330716960819;
    msg.x = 0.114131661155;
    msg.y = 0.0817512661491;
    msg.z = 0.409858498642;

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
    msg.setTimeStamp(0.621283437884);
    msg.setSource(54565U);
    msg.setSourceEntity(10U);
    msg.setDestination(36654U);
    msg.setDestinationEntity(97U);
    msg.tracking = 144U;
    msg.lat = 0.461410295683;
    msg.lon = 0.848475809926;
    msg.x = 0.756706963336;
    msg.y = 0.842116305229;
    msg.z = 0.600679396371;

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
    msg.setTimeStamp(0.627081192863);
    msg.setSource(34352U);
    msg.setSourceEntity(120U);
    msg.setDestination(49184U);
    msg.setDestinationEntity(111U);
    msg.tracking = 36U;
    msg.lat = 0.148909848092;
    msg.lon = 0.221709181306;
    msg.x = 0.971899912396;
    msg.y = 0.690033133907;
    msg.z = 0.763258285574;

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
    msg.setTimeStamp(0.0220895486179);
    msg.setSource(45783U);
    msg.setSourceEntity(227U);
    msg.setDestination(7572U);
    msg.setDestinationEntity(108U);
    msg.target.assign("BZROBWRPOYQWNOUPWHCCQAJDASLCOVOOGWRICUAXYDUCCXPVBCLBIJJFDWUWYFVGZBWSI");
    msg.lbearing = 0.118359080178;
    msg.lelevation = 0.445104861969;
    msg.bearing = 0.0845141553973;
    msg.elevation = 0.765757891717;
    msg.phi = 0.143848007572;
    msg.theta = 0.0452724932388;
    msg.psi = 0.209200343461;
    msg.accuracy = 0.885280195535;

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
    msg.setTimeStamp(0.295007278186);
    msg.setSource(28070U);
    msg.setSourceEntity(166U);
    msg.setDestination(19746U);
    msg.setDestinationEntity(231U);
    msg.target.assign("QHBRHINTLVCXJFNGUUEKLTFNEYYTKCHFRTJDYUZLEIRGKDCPMUHKMPGTDVWJBTZTOFVIAULCMXIPWADNWEEKLLIXOQDVBPXCBDOPCOEMKLUJFYP");
    msg.lbearing = 0.29506736809;
    msg.lelevation = 0.1185740465;
    msg.bearing = 0.882305548524;
    msg.elevation = 0.365136077805;
    msg.phi = 0.840577225371;
    msg.theta = 0.698391657302;
    msg.psi = 0.64536465869;
    msg.accuracy = 0.0650318838702;

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
    msg.setTimeStamp(0.973208004402);
    msg.setSource(21975U);
    msg.setSourceEntity(194U);
    msg.setDestination(53355U);
    msg.setDestinationEntity(140U);
    msg.target.assign("CYOWPPZRMIUGSGQOCFAOCYCZMQFYQV");
    msg.lbearing = 0.215769874544;
    msg.lelevation = 0.919875667286;
    msg.bearing = 0.91301402386;
    msg.elevation = 0.0169174712658;
    msg.phi = 0.446130248681;
    msg.theta = 0.487809090346;
    msg.psi = 0.9294460158;
    msg.accuracy = 0.619594296296;

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
    msg.setTimeStamp(0.144884601014);
    msg.setSource(17972U);
    msg.setSourceEntity(141U);
    msg.setDestination(4983U);
    msg.setDestinationEntity(135U);
    msg.target.assign("LQBDFADNMPIHNZVNHONPFPDGPPSBPZCPMYRVTKSHNMLZTYOLQFKNXDADJMGUHILWCLSOVBWGKTOFJQV");
    msg.x = 0.445572042533;
    msg.y = 0.316364695012;
    msg.z = 0.760769417788;
    msg.n = 0.939843740886;
    msg.e = 0.263549797511;
    msg.d = 0.61415902213;
    msg.phi = 0.737550682319;
    msg.theta = 0.122360283344;
    msg.psi = 0.194704174307;
    msg.accuracy = 0.709492657149;

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
    msg.setTimeStamp(0.170464276798);
    msg.setSource(2187U);
    msg.setSourceEntity(50U);
    msg.setDestination(19124U);
    msg.setDestinationEntity(1U);
    msg.target.assign("SVQMYHQRXTXVHEPCDCZQYPYKZOLNWBSFJKTVQBEEVPSXMDGXUXJCJNKNYVUFWDGRXCAPBZFPDELBATWLYVSWZTWQOARGYEGIQNMHUEWUHILSFNMAGCUKNTKQLWSZTXBUGZWHDUEOSUACDYPR");
    msg.x = 0.0955748661608;
    msg.y = 0.893498564933;
    msg.z = 0.971414512023;
    msg.n = 0.937672279069;
    msg.e = 0.251251083018;
    msg.d = 0.376293170479;
    msg.phi = 0.39749247134;
    msg.theta = 0.512294201071;
    msg.psi = 0.0129710205525;
    msg.accuracy = 0.129079635544;

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
    msg.setTimeStamp(0.509016164077);
    msg.setSource(5126U);
    msg.setSourceEntity(72U);
    msg.setDestination(18811U);
    msg.setDestinationEntity(206U);
    msg.target.assign("ACTDXCNFXPFZYQVIHFMNTEVSYEDAKLGW");
    msg.x = 0.118349792139;
    msg.y = 0.195909953781;
    msg.z = 0.391365222262;
    msg.n = 0.909074266257;
    msg.e = 0.45463059999;
    msg.d = 0.360615369519;
    msg.phi = 0.406413337818;
    msg.theta = 0.474100003289;
    msg.psi = 0.0112729222549;
    msg.accuracy = 0.852628444196;

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
    msg.setTimeStamp(0.0716371111634);
    msg.setSource(121U);
    msg.setSourceEntity(155U);
    msg.setDestination(15205U);
    msg.setDestinationEntity(109U);
    msg.target.assign("FCJAYRNHBBBTVLYGINGZYKNSSPIFPVZAVQMYRHAVKQZDUEBOPMTRZKVZPXMSTDQCGHJIWAETLJILJSUFNIGRTFCFKWYBEKMKPAOSEPGWXJOXNXCIWNISMMVPGHKGGOVHRWL");
    msg.lat = 0.723043128113;
    msg.lon = 0.228429924301;
    msg.z_units = 125U;
    msg.z = 0.67591600312;
    msg.accuracy = 0.290573049557;

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
    msg.setTimeStamp(0.996724593319);
    msg.setSource(58738U);
    msg.setSourceEntity(49U);
    msg.setDestination(16758U);
    msg.setDestinationEntity(67U);
    msg.target.assign("KIABNDPZUHMKAYADGJENULBQDSWFLCAMPXFVOJKSVHQEJFOULZCJNHZCEWMNXGBFBREWRSYMIMVXTWMNTEHMNLCYHGLPUYIKRGUPRFDIFBYQSELMWQQRSUAQNFIGXAVSJTIHUXWLFECNOVDPRTIYBDKMJETFELVNCDT");
    msg.lat = 0.926382736772;
    msg.lon = 0.992709521843;
    msg.z_units = 67U;
    msg.z = 0.63059701119;
    msg.accuracy = 0.88473526598;

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
    msg.setTimeStamp(0.444084420041);
    msg.setSource(53678U);
    msg.setSourceEntity(65U);
    msg.setDestination(10349U);
    msg.setDestinationEntity(205U);
    msg.target.assign("XKKBSVJKGYBGJOAKICJFSAUNVHHJJSVWXOAFJETTCEJEPZRNLQBLFMK");
    msg.lat = 0.079158367026;
    msg.lon = 0.400765149767;
    msg.z_units = 9U;
    msg.z = 0.675216557823;
    msg.accuracy = 0.384398393909;

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
    msg.setTimeStamp(0.874806730798);
    msg.setSource(6262U);
    msg.setSourceEntity(129U);
    msg.setDestination(7144U);
    msg.setDestinationEntity(186U);
    msg.name.assign("JVCNOPMSSZHYZLPURHXXBSGAKKRYDECBFXBQELKECQDSDNAAMXXCMYOIGBTVLCCUPOHNYQFUOEFVYMRYIKVUZMRAGZMXTSYAGWTGXNLOFZLKHWWKKYUJNURWPITEJDZHWVPXZVDTTNZQWHQIHFCXGHBQCFDOOWDWEDMQJOROAJYNVKNEJTPSCABJHZEFOANRFGSBVJRYKUWAEPGPGUMKVHBQRBPSNARIMVILPIFJXLSUDTFTUJSQBZ");
    msg.lat = 0.300415974013;
    msg.lon = 0.713084873362;
    msg.z = 0.0354574421877;
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
    msg.setTimeStamp(0.0819772069465);
    msg.setSource(20529U);
    msg.setSourceEntity(82U);
    msg.setDestination(29407U);
    msg.setDestinationEntity(236U);
    msg.name.assign("KIJCENIQQRAHEGFHAISYPMGP");
    msg.lat = 0.790855116078;
    msg.lon = 0.664348489033;
    msg.z = 0.527650760403;
    msg.z_units = 198U;

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
    msg.setTimeStamp(0.539984303806);
    msg.setSource(38648U);
    msg.setSourceEntity(168U);
    msg.setDestination(22710U);
    msg.setDestinationEntity(126U);
    msg.name.assign("PTUMDRZWUALUADOQYENBEPPBKJMHJTKIWEXYBJRKXGIJIZZOJYIQHGVISGXRVBNPY");
    msg.lat = 0.565051750093;
    msg.lon = 0.0405901391579;
    msg.z = 0.0428756398768;
    msg.z_units = 197U;

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
    msg.setTimeStamp(0.561390417146);
    msg.setSource(21936U);
    msg.setSourceEntity(225U);
    msg.setDestination(65159U);
    msg.setDestinationEntity(146U);
    msg.op = 13U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("FYSCESNZAVHGEFBLHMMYLNQOHWLJGVEYAQFELAUKPLMXKZMXRMZSPZZVOOIJCJUKPUUDOQVCMTTCFUYYUMMXBKJDTJFAIBKDCZRABTVIJVJKZNTGSCRSYNEJCVYUHCIQZAB");
    tmp_msg_0.lat = 0.561848767709;
    tmp_msg_0.lon = 0.743530013454;
    tmp_msg_0.z = 0.848787525509;
    tmp_msg_0.z_units = 98U;
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
    msg.setTimeStamp(0.81255060705);
    msg.setSource(40882U);
    msg.setSourceEntity(29U);
    msg.setDestination(1542U);
    msg.setDestinationEntity(60U);
    msg.op = 78U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("TSCUBKKZBXFIDELQRSWPWHOYXVOYCGSIQKNRSATEQHTIRZZDSCAYWJGTZKCGTLFFSBFNUOBVIPCIMXAVTLLQKGNOOPDZKHATFQGGVEUWYFWTNHVLTRGQPLNJMKOJDR");
    tmp_msg_0.lat = 0.74763774564;
    tmp_msg_0.lon = 0.472105201986;
    tmp_msg_0.z = 0.647143658133;
    tmp_msg_0.z_units = 238U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.17824381447);
    msg.setSource(47711U);
    msg.setSourceEntity(21U);
    msg.setDestination(2844U);
    msg.setDestinationEntity(98U);
    msg.op = 239U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("RVOZSNZQBXGXTUQJOHGZVDOSTOMLICBFZJSCDFWIKXPUKRQULM");
    tmp_msg_0.lat = 0.940268821321;
    tmp_msg_0.lon = 0.583592707037;
    tmp_msg_0.z = 0.265266515531;
    tmp_msg_0.z_units = 101U;
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
    msg.setTimeStamp(0.381665931363);
    msg.setSource(59258U);
    msg.setSourceEntity(74U);
    msg.setDestination(3497U);
    msg.setDestinationEntity(3U);
    msg.value = 0.240753188766;
    msg.type = 33U;

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
    msg.setTimeStamp(0.699610712535);
    msg.setSource(16765U);
    msg.setSourceEntity(81U);
    msg.setDestination(32295U);
    msg.setDestinationEntity(49U);
    msg.value = 0.613459254167;
    msg.type = 157U;

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
    msg.setTimeStamp(0.749303924627);
    msg.setSource(24478U);
    msg.setSourceEntity(56U);
    msg.setDestination(42264U);
    msg.setDestinationEntity(195U);
    msg.value = 0.767516024534;
    msg.type = 252U;

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
    msg.setTimeStamp(0.638282934891);
    msg.setSource(35474U);
    msg.setSourceEntity(11U);
    msg.setDestination(45821U);
    msg.setDestinationEntity(62U);
    msg.value = 0.991026152861;

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
    msg.setTimeStamp(0.745530990022);
    msg.setSource(60507U);
    msg.setSourceEntity(147U);
    msg.setDestination(25867U);
    msg.setDestinationEntity(95U);
    msg.value = 0.289470255065;

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
    msg.setTimeStamp(0.242686556366);
    msg.setSource(31083U);
    msg.setSourceEntity(10U);
    msg.setDestination(34665U);
    msg.setDestinationEntity(211U);
    msg.value = 0.193163591953;

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
    msg.setTimeStamp(0.623163256108);
    msg.setSource(31052U);
    msg.setSourceEntity(34U);
    msg.setDestination(28692U);
    msg.setDestinationEntity(88U);
    msg.timestamp_last_service = 0.111912359999;
    msg.time_next_service = 0.997174084229;
    msg.time_motor_next_service = 0.286560985631;
    msg.time_idle_ground = 0.0388083179209;
    msg.time_idle_air = 0.267293348864;
    msg.time_idle_water = 0.135726208028;
    msg.time_idle_underwater = 0.140682127172;
    msg.time_idle_unknown = 0.848171430905;
    msg.time_motor_ground = 0.485409416724;
    msg.time_motor_air = 0.889442839953;
    msg.time_motor_water = 0.0906423901205;
    msg.time_motor_underwater = 0.673742298055;
    msg.time_motor_unknown = 0.636680156106;
    msg.rpm_min = -15386;
    msg.rpm_max = -22672;
    msg.depth_max = 0.87945680383;

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
    msg.setTimeStamp(0.583414406429);
    msg.setSource(13130U);
    msg.setSourceEntity(193U);
    msg.setDestination(55425U);
    msg.setDestinationEntity(173U);
    msg.timestamp_last_service = 0.14108606321;
    msg.time_next_service = 0.491192754906;
    msg.time_motor_next_service = 0.745430647991;
    msg.time_idle_ground = 0.286040371671;
    msg.time_idle_air = 0.396640295579;
    msg.time_idle_water = 0.815523796932;
    msg.time_idle_underwater = 0.549655852387;
    msg.time_idle_unknown = 0.286248058678;
    msg.time_motor_ground = 0.568129418594;
    msg.time_motor_air = 0.0783442807536;
    msg.time_motor_water = 0.483728086214;
    msg.time_motor_underwater = 0.189381246851;
    msg.time_motor_unknown = 0.898333768293;
    msg.rpm_min = 2339;
    msg.rpm_max = -18457;
    msg.depth_max = 0.465446521825;

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
    msg.setTimeStamp(0.910738594635);
    msg.setSource(7623U);
    msg.setSourceEntity(106U);
    msg.setDestination(9849U);
    msg.setDestinationEntity(153U);
    msg.timestamp_last_service = 0.201089465373;
    msg.time_next_service = 0.159724486522;
    msg.time_motor_next_service = 0.368924881188;
    msg.time_idle_ground = 0.462250330293;
    msg.time_idle_air = 0.349837526388;
    msg.time_idle_water = 0.962521716309;
    msg.time_idle_underwater = 0.960612418882;
    msg.time_idle_unknown = 0.625829804842;
    msg.time_motor_ground = 0.916861396822;
    msg.time_motor_air = 0.93692363479;
    msg.time_motor_water = 0.529943212539;
    msg.time_motor_underwater = 0.756088057458;
    msg.time_motor_unknown = 0.92353395624;
    msg.rpm_min = -19679;
    msg.rpm_max = -6248;
    msg.depth_max = 0.377637397888;

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
    msg.setTimeStamp(0.690829631883);
    msg.setSource(28667U);
    msg.setSourceEntity(237U);
    msg.setDestination(13736U);
    msg.setDestinationEntity(107U);
    msg.severity = 73U;
    msg.text.assign("FXSBVTEYBNJBHJEMOAAVWWRMNONXUKLTRJPSTRSSPSFVSPILVCFWWYNMQJFQXJKNZYBCQGQELNYOTAMHMGFJEGXDIQFKKUICQOZBZUSVCVHVVJXPDBKXYRAEFHYARFIKKOLETVGIREHQZRLYKNWEOADDCMSUNZWDDGUUDPDZOHCXWHYLTLTIBPXUFZCTBUETYZTCIJSKRBQCGGAYMQZPOMGVGGALAHJ");

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
    msg.setTimeStamp(0.380743985987);
    msg.setSource(37632U);
    msg.setSourceEntity(207U);
    msg.setDestination(35018U);
    msg.setDestinationEntity(145U);
    msg.severity = 176U;
    msg.text.assign("LPTBQVDABSNKWTBQYMKOPNGJXXEKRPHHBMVPMRIPAZDHHLULBSTFAOJENDFWQGEIAMOQXZCSLDLDYKEPJRIXXYCVSQGEGYWYICTEOOXLYRJINXECLWYJDLFBRKONNFNZVCMQBLYASRHNJUZGGKFQUYCTMRWCUHQHMKGSKTDSWUVLPFSZRICAUWZGVSRYQVTKEQHDOTTZDSJXBJMNUHWKJMNCBIOGCVEABFRFUPOWZUXEZVOIFJUHXTWGAVMIAP");

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
    msg.setTimeStamp(0.346562765415);
    msg.setSource(48350U);
    msg.setSourceEntity(229U);
    msg.setDestination(63711U);
    msg.setDestinationEntity(203U);
    msg.severity = 122U;
    msg.text.assign("RAUBDUWCQWETFSNJTPHNLFOXZKYLWMEWFVSRTARROJIFAYYQZGQKAPGKXDFEDOJIQJKXCRGSXKJBWXOSRIDIYGI");

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
    msg.setTimeStamp(0.088505939313);
    msg.setSource(36900U);
    msg.setSourceEntity(84U);
    msg.setDestination(2765U);
    msg.setDestinationEntity(191U);
    msg.channel = 58;
    msg.value = -2063174522;
    msg.gain = 129U;

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
    msg.setTimeStamp(0.606434059404);
    msg.setSource(45004U);
    msg.setSourceEntity(19U);
    msg.setDestination(40261U);
    msg.setDestinationEntity(98U);
    msg.channel = 7;
    msg.value = 1442723177;
    msg.gain = 42U;

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
    msg.setTimeStamp(0.404225853004);
    msg.setSource(1945U);
    msg.setSourceEntity(103U);
    msg.setDestination(64338U);
    msg.setDestinationEntity(41U);
    msg.channel = 48;
    msg.value = 376262766;
    msg.gain = 112U;

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
    msg.setTimeStamp(0.78459491044);
    msg.setSource(3118U);
    msg.setSourceEntity(137U);
    msg.setDestination(33495U);
    msg.setDestinationEntity(89U);
    msg.ch01 = 0.317311833734;
    msg.ch02 = 0.557373313236;
    msg.ch03 = 0.861492780848;
    msg.ch04 = 0.811806993845;
    msg.ch05 = 0.804778720565;
    msg.ch06 = 0.481423505105;
    msg.ch07 = 0.992388236034;
    msg.ch08 = 0.914391802346;
    msg.ch09 = 0.66006463507;
    msg.ch10 = 0.695751624904;
    msg.ch11 = 0.579631328063;
    msg.ch12 = 0.190071916718;
    msg.ch13 = 0.589636208187;
    msg.ch14 = 0.773580269644;
    msg.ch15 = 0.0255952227932;
    msg.ch16 = 0.855130171636;

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
    msg.setTimeStamp(0.756207032907);
    msg.setSource(6324U);
    msg.setSourceEntity(254U);
    msg.setDestination(15707U);
    msg.setDestinationEntity(120U);
    msg.ch01 = 0.830002019574;
    msg.ch02 = 0.700833712189;
    msg.ch03 = 0.45240471283;
    msg.ch04 = 0.555719993193;
    msg.ch05 = 0.0801548645248;
    msg.ch06 = 0.128866514812;
    msg.ch07 = 0.687760297149;
    msg.ch08 = 0.502524709884;
    msg.ch09 = 0.99103045886;
    msg.ch10 = 0.405100416029;
    msg.ch11 = 0.800145436314;
    msg.ch12 = 0.729909385092;
    msg.ch13 = 0.344579441681;
    msg.ch14 = 0.801215555088;
    msg.ch15 = 0.40685364334;
    msg.ch16 = 0.135012403688;

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
    msg.setTimeStamp(0.300587470049);
    msg.setSource(63733U);
    msg.setSourceEntity(31U);
    msg.setDestination(43571U);
    msg.setDestinationEntity(225U);
    msg.ch01 = 0.415085418207;
    msg.ch02 = 0.736738681778;
    msg.ch03 = 0.129371269989;
    msg.ch04 = 0.260955004301;
    msg.ch05 = 0.945285951055;
    msg.ch06 = 0.9347023529;
    msg.ch07 = 0.961483437934;
    msg.ch08 = 0.898674258153;
    msg.ch09 = 0.261182951837;
    msg.ch10 = 0.252597407318;
    msg.ch11 = 0.952294489488;
    msg.ch12 = 0.563058297534;
    msg.ch13 = 0.293286729209;
    msg.ch14 = 0.401817770263;
    msg.ch15 = 0.799308985203;
    msg.ch16 = 0.0471129002815;

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
    msg.setTimeStamp(0.703522054496);
    msg.setSource(24830U);
    msg.setSourceEntity(157U);
    msg.setDestination(18184U);
    msg.setDestinationEntity(20U);
    msg.value = 0.105822363151;

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
    msg.setTimeStamp(0.40626159097);
    msg.setSource(5712U);
    msg.setSourceEntity(136U);
    msg.setDestination(33642U);
    msg.setDestinationEntity(194U);
    msg.value = 0.617202901508;

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
    msg.setTimeStamp(0.303256185139);
    msg.setSource(56664U);
    msg.setSourceEntity(61U);
    msg.setDestination(38881U);
    msg.setDestinationEntity(117U);
    msg.value = 0.572913380861;

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
    msg.setTimeStamp(0.15112037213);
    msg.setSource(30227U);
    msg.setSourceEntity(149U);
    msg.setDestination(42973U);
    msg.setDestinationEntity(171U);
    msg.op = 165U;
    msg.lat = 0.867626867722;
    msg.lon = 0.25522554373;
    msg.height = 0.455575206484;
    msg.depth = 0.486234280775;
    msg.alt = 0.189900300116;

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
    msg.setTimeStamp(0.906871150185);
    msg.setSource(25768U);
    msg.setSourceEntity(1U);
    msg.setDestination(52649U);
    msg.setDestinationEntity(236U);
    msg.op = 76U;
    msg.lat = 0.621295183928;
    msg.lon = 0.808384952431;
    msg.height = 0.919291081067;
    msg.depth = 0.47822271635;
    msg.alt = 0.601300303128;

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
    msg.setTimeStamp(0.529755397672);
    msg.setSource(14107U);
    msg.setSourceEntity(79U);
    msg.setDestination(24873U);
    msg.setDestinationEntity(8U);
    msg.op = 115U;
    msg.lat = 0.360827004906;
    msg.lon = 0.228346736524;
    msg.height = 0.00997759428158;
    msg.depth = 0.640379283176;
    msg.alt = 0.883789984205;

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
