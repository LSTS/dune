//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 7e8454d7cfd2fc7a4dc00c27f5d132cb                            *
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
    msg.setTimeStamp(0.03048436727922821);
    msg.setSource(45826U);
    msg.setSourceEntity(150U);
    msg.setDestination(47627U);
    msg.setDestinationEntity(236U);
    msg.state = 240U;
    msg.flags = 121U;
    msg.description.assign("YTCDJAVSRRHEKPNYMVULKMSDTEUDABAGJWACTAHHMBRZBBSFQXPKOZGQXCHLTJLBKNNNAXPYFBICNMNZFCGUZUVHZCAIEWQV");

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
    msg.setTimeStamp(0.05149477731543328);
    msg.setSource(3519U);
    msg.setSourceEntity(61U);
    msg.setDestination(33296U);
    msg.setDestinationEntity(132U);
    msg.state = 185U;
    msg.flags = 12U;
    msg.description.assign("WPTXXPGRJUDPUQLWCDQOGNEXWVVRZQHYQUEXFGBAVUFCETRLIRPCAMCMIABWKMZBAMGEPRLZPWQNOHIFR");

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
    msg.setTimeStamp(0.751006668234557);
    msg.setSource(7933U);
    msg.setSourceEntity(80U);
    msg.setDestination(35660U);
    msg.setDestinationEntity(78U);
    msg.state = 160U;
    msg.flags = 195U;
    msg.description.assign("VNGVEFNIOWXFCTUUKFFKVRGWJCOSEHKBQMYNVHGUIOMRMZCOWYJUOZPENNLTYRAGQYRGFCDQTGPDJANFXRISMEHXSHRSBLQUZGZXXFSEIZQHKSDKCWWRITDBZMNDIRMAIOTGOTEUFZMIZCQAKABLWJ");

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
    msg.setTimeStamp(0.434263997273896);
    msg.setSource(33179U);
    msg.setSourceEntity(161U);
    msg.setDestination(44364U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.6047762927291825);
    msg.setSource(59850U);
    msg.setSourceEntity(7U);
    msg.setDestination(42996U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.5087485626274086);
    msg.setSource(24263U);
    msg.setSourceEntity(48U);
    msg.setDestination(62916U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.4831973313012877);
    msg.setSource(938U);
    msg.setSourceEntity(243U);
    msg.setDestination(41957U);
    msg.setDestinationEntity(135U);
    msg.id = 9U;
    msg.label.assign("SHBXVFGGGSVKLZPELZEDMWJFUWBPWDCGOVDIRVYUGQUBPMD");
    msg.component.assign("ZLKGIWSSXJEHQRDUBVIPUXVYJBQDNSSEEFHOKGGRGRCCXVVNICWLHAWJCTGQNUUOEUAWFJBQQTHANRIYJZTRCNZVUFMLWJNXLXPRIHYKBGOZFJCDSEFBPMTSHPQEBWSJYXSHLWRYRTXZKZC");
    msg.act_time = 116U;
    msg.deact_time = 14392U;

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
    msg.setTimeStamp(0.26824955410382356);
    msg.setSource(47756U);
    msg.setSourceEntity(12U);
    msg.setDestination(25008U);
    msg.setDestinationEntity(144U);
    msg.id = 249U;
    msg.label.assign("KLTUGNOZEPLBBANFNOLXRWQUUFIYBKLSXRHQWXPMJGPUBDRPCHBOUDXEZLCYLJIVTNRPPCIVASDJHXGZDUNTMADBLINLQFSEYTKAWZOHUIPOVJRRDTFISWRGDDSEQBJROGVZJDCFUMXNORMNFYRZZKGAEMKBPGWFHOMCHSQQVOCYMSLFZKNYCXTPGEAJEZKFOFIXWQTTYJWKYHYXTCVMUJSWWCHZIIKYAHELEQENJ");
    msg.component.assign("WQIPSMYWTCXKKFKVZTEGPYXPILEARFTQWMZYMUQHUJAVTWDYTFHLHNCUCVAFSYDNPIQGLXLXXGHPKCJHVTQEGCPPMKAGRW");
    msg.act_time = 10214U;
    msg.deact_time = 48550U;

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
    msg.setTimeStamp(0.40420176030749033);
    msg.setSource(6333U);
    msg.setSourceEntity(55U);
    msg.setDestination(4193U);
    msg.setDestinationEntity(174U);
    msg.id = 173U;
    msg.label.assign("DJJRIGIXQZENYVLEMVLRWGVGYJOULREPXJXMTSUOXYZBQDUSIJMFQFRGWDJGJAPNEEFNBYPHIAJIBYTAKKGJCVDYEGLVDRHKCKHHDIAPZTKOGYWQNCBBHZWOQOOXPVCXXIQTFALMFOLGAYBTIMAHZW");
    msg.component.assign("XEMFYUROPLCIAXZDCKKYJNSMHSPQIVLXALNSLVFITJCGYJWCORCRBLTWUUTBMDGLDHJHMJVSERVYIDZSGUCBMLAVOHFGZXGHYKXKWJHPPRZAYOVISTWWEHRPQNLFODOFXGWEYZCBBKGMOKRXVKMTMADGNQ");
    msg.act_time = 44542U;
    msg.deact_time = 54471U;

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
    msg.setTimeStamp(0.9315279560112372);
    msg.setSource(55620U);
    msg.setSourceEntity(234U);
    msg.setDestination(19563U);
    msg.setDestinationEntity(253U);
    msg.id = 82U;

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
    msg.setTimeStamp(0.4666431276121691);
    msg.setSource(57032U);
    msg.setSourceEntity(72U);
    msg.setDestination(32386U);
    msg.setDestinationEntity(181U);
    msg.id = 155U;

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
    msg.setTimeStamp(0.4559140080438282);
    msg.setSource(41113U);
    msg.setSourceEntity(150U);
    msg.setDestination(32858U);
    msg.setDestinationEntity(214U);
    msg.id = 118U;

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
    msg.setTimeStamp(0.19108147800181718);
    msg.setSource(22067U);
    msg.setSourceEntity(181U);
    msg.setDestination(56740U);
    msg.setDestinationEntity(226U);
    msg.op = 218U;
    msg.list.assign("OLPAWJNVKKOIPAOFBAVBQPLJWMSJAUPNSETJSRNDOJLFQDMCLDSVJLBSIJWEYQIPYFJPQITVNJHUVIORVBQNCMXUBYQBTHIHRGTKMTFPOFGYRBZCZMECHCJNRAYDRBWGYNNGUOCLUZMMRLZXTTGEZHRVFCKOOYGGLPTYUFQMKXLXWPVEXHGHLOCAXREIMZZAZWHSQVFUXWSTSDBUZDXXAIDNFDSQCKAUBSRCK");

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
    msg.setTimeStamp(0.5120201705671187);
    msg.setSource(52559U);
    msg.setSourceEntity(242U);
    msg.setDestination(25005U);
    msg.setDestinationEntity(136U);
    msg.op = 206U;
    msg.list.assign("CCWFBUEGFEKTBORABRITAIYIRIQQFBZNSHTHMJILGLUZYOKUJCJSNHPMMAEBDDVCQFGJZHGINXYGRMZXLHQPTGUEMOBVMRPDSRYWMNNLFZKDYHUQADKWXHNPAZZVQSOFHDKTCUYXSCOCTO");

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
    msg.setTimeStamp(0.8259264924862094);
    msg.setSource(65200U);
    msg.setSourceEntity(184U);
    msg.setDestination(51728U);
    msg.setDestinationEntity(90U);
    msg.op = 94U;
    msg.list.assign("FDKJOOLHATLUZTFUWXNPEQEAHRWFRYFUAWKWIZSCIAUVEZWXSCFIWDGKHAAPBPUSGVJXQODYLJXDMVJXMOEYYNFRPVDELKRETKNAREBYBDQGTXOXAPOEQNCNYXWKWGFRKIGVBIZCTFUZLYVBGWD");

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
    msg.setTimeStamp(0.7668482854221971);
    msg.setSource(42110U);
    msg.setSourceEntity(187U);
    msg.setDestination(29834U);
    msg.setDestinationEntity(48U);
    msg.value = 224U;

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
    msg.setTimeStamp(0.22438305191901153);
    msg.setSource(47571U);
    msg.setSourceEntity(54U);
    msg.setDestination(46417U);
    msg.setDestinationEntity(171U);
    msg.value = 181U;

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
    msg.setTimeStamp(0.6733478757273359);
    msg.setSource(19798U);
    msg.setSourceEntity(33U);
    msg.setDestination(4241U);
    msg.setDestinationEntity(98U);
    msg.value = 22U;

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
    msg.setTimeStamp(0.9532440807227222);
    msg.setSource(45070U);
    msg.setSourceEntity(179U);
    msg.setDestination(64383U);
    msg.setDestinationEntity(168U);
    msg.consumer.assign("GESNAVHXFDZBTWJSCJSKBRKLHMOGOPHZQMWKSVUFSGRQXKYQOJVDEGGGZULORBEKAFWUKDLFGNLTUSCXDQIRCDRYYXKOBJDRMPXRYCNWR");
    msg.message_id = 36599U;

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
    msg.setTimeStamp(0.32381429391324923);
    msg.setSource(34160U);
    msg.setSourceEntity(209U);
    msg.setDestination(8408U);
    msg.setDestinationEntity(12U);
    msg.consumer.assign("QHDSYJEXWULWNNTKBJKCOSZWFJJRSZKTJOVNZKPQVIAYCGLFKFKOWFQGSYYHGXNNDFMOUWMMIZWCJBAVGEWXWYMVUERXLIPEMTICGTCVJFQEAHNVLGEXYEZFUORUYNOZGPCIALNRSZBJXKOZBSZBUMPTYOSNHVZOMCHDWQAFLPPRSTMSGADGDQDIKHYLKADLDBMDTTPBVEYEHVXTR");
    msg.message_id = 5768U;

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
    msg.setTimeStamp(0.48899926193257026);
    msg.setSource(63625U);
    msg.setSourceEntity(10U);
    msg.setDestination(20258U);
    msg.setDestinationEntity(113U);
    msg.consumer.assign("QWMUCXIDHJGAKPNCUGYJONEYRNLBEBLMNEOLQNALEISGJUPILVZCOKVFUPVFPGIWKMSVJMKGIBLHRWJGDBFDLFHRCRWTGDVBUDSKNWYPBMZQXOYQAKIFKTEDVFKIHLEJMTAYOWGXTRZCNXDAUHBATTEQXSFUTARSIZVTODDZCWVJKOXJWHJAYXXISSUFRTUXLBODUFQRQEASZONNB");
    msg.message_id = 23569U;

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
    msg.setTimeStamp(0.4698272292363863);
    msg.setSource(39844U);
    msg.setSourceEntity(47U);
    msg.setDestination(30103U);
    msg.setDestinationEntity(240U);
    msg.type = 36U;

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
    msg.setTimeStamp(0.5756418625336223);
    msg.setSource(9752U);
    msg.setSourceEntity(31U);
    msg.setDestination(40263U);
    msg.setDestinationEntity(152U);
    msg.type = 154U;

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
    msg.setTimeStamp(0.4263263724424199);
    msg.setSource(36987U);
    msg.setSourceEntity(16U);
    msg.setDestination(53581U);
    msg.setDestinationEntity(50U);
    msg.type = 125U;

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
    msg.setTimeStamp(0.6226531223136567);
    msg.setSource(41527U);
    msg.setSourceEntity(224U);
    msg.setDestination(51844U);
    msg.setDestinationEntity(198U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.24848347656087477);
    msg.setSource(28599U);
    msg.setSourceEntity(64U);
    msg.setDestination(24810U);
    msg.setDestinationEntity(218U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.14431009359071356);
    msg.setSource(13231U);
    msg.setSourceEntity(162U);
    msg.setDestination(14345U);
    msg.setDestinationEntity(192U);
    msg.op = 35U;

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
    msg.setTimeStamp(0.9039439504788537);
    msg.setSource(27222U);
    msg.setSourceEntity(130U);
    msg.setDestination(6575U);
    msg.setDestinationEntity(158U);
    msg.total_steps = 109U;
    msg.step_number = 253U;
    msg.step.assign("LHUKKMPGGJLCOHMXVSKUXXFLSLNRVOZHBAFVXEVQEJCPTADNXETJXRSDJEUKBIAWFRJNOOUDGCFRKNEPGKAAFEWCHWNSZUDIYSCTUQZLMNRYRKPRDMANELQZZRJGWWTYOFAOVIFYJWNTPINYXRKGLSGZLDISMISKOHBBFYUXYWFCTPZYDZUIDOBQHGPGAWTOPQZCMQMGJEMSB");
    msg.flags = 171U;

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
    msg.setTimeStamp(0.5755333486147809);
    msg.setSource(52907U);
    msg.setSourceEntity(227U);
    msg.setDestination(49854U);
    msg.setDestinationEntity(26U);
    msg.total_steps = 83U;
    msg.step_number = 11U;
    msg.step.assign("JHSFNPTULJOJHYRLIEINRMEZWKSNOFRYGGDUDXTCWAMBTZYLIESINPJKBGHBZEYMQMTLHTIRRADSFRIOUQHOFXLWWEMZMVUFCAJMSUPXDVCWKFDLHWBADNIBRDPQZVEQOCHZPQ");
    msg.flags = 46U;

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
    msg.setTimeStamp(0.7662765999600827);
    msg.setSource(21701U);
    msg.setSourceEntity(105U);
    msg.setDestination(11054U);
    msg.setDestinationEntity(252U);
    msg.total_steps = 174U;
    msg.step_number = 136U;
    msg.step.assign("JDLMQTKVISDSFSLRYWBIIGGULEHCAUSFVLKIVUENMSVVAVJPWZZYSOLKEZHJOCXHWZVLQOAWLPKKTZNXYRWDEAMMRZKTNEYFRJOEVWMTOSGUODRTZBCRKTMYCXHXHDTYJRCCWMGBXAMNXEHPFDLYPDWARNCTPOGBBUAUAZPJYLQUQQJJKUXBJMXOHZHYZGYKPAVSOSNFPFCIBRXWEBDFLAGETDRIUIQQCOHQPNQNSBE");
    msg.flags = 247U;

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
    msg.setTimeStamp(0.2866437297802492);
    msg.setSource(3099U);
    msg.setSourceEntity(9U);
    msg.setDestination(52310U);
    msg.setDestinationEntity(68U);
    msg.state = 35U;
    msg.error.assign("CELDOSGXMEQCPVJJPYHQRBRPAHRJSOUXBVLQOEMRAKTRSBCTWIPCTIAHJNOSQJWZXNLTRCWEJHLELLEKFOZBYLEODUGICFHIEYIGXZFNXFUYTAMZTKGIQNSVWGKAHKMIDMRYVTCWLMWIN");

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
    msg.setTimeStamp(0.8736694545172486);
    msg.setSource(55057U);
    msg.setSourceEntity(60U);
    msg.setDestination(33313U);
    msg.setDestinationEntity(168U);
    msg.state = 138U;
    msg.error.assign("BFJNKBRMUHBZLQLPLXTAPPCZEDEKXESJPMPMUNXNQKDEYSFKLAGYWAJGVPXTTJIXFG");

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
    msg.setTimeStamp(0.144066549208409);
    msg.setSource(17438U);
    msg.setSourceEntity(211U);
    msg.setDestination(33009U);
    msg.setDestinationEntity(125U);
    msg.state = 224U;
    msg.error.assign("ZANUXBUUFWBOLWRYWZRDBTKJTADZUCKKFRVNRRPPGFAFYROFHBNUIMKWSJJLPHDPGOCVYLZSYKXRNXQOLWYKJSJSHQYI");

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
    msg.setTimeStamp(0.4983912549457087);
    msg.setSource(8246U);
    msg.setSourceEntity(60U);
    msg.setDestination(38480U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.966977309343045);
    msg.setSource(64796U);
    msg.setSourceEntity(87U);
    msg.setDestination(7479U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.8054631990161559);
    msg.setSource(17092U);
    msg.setSourceEntity(166U);
    msg.setDestination(13782U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.7508658178742449);
    msg.setSource(49060U);
    msg.setSourceEntity(161U);
    msg.setDestination(25473U);
    msg.setDestinationEntity(171U);
    msg.op = 254U;
    msg.speed_min = 0.7002978628957343;
    msg.speed_max = 0.611621365678652;
    msg.long_accel = 0.30084632986480986;
    msg.alt_max_msl = 0.31766438395494123;
    msg.dive_fraction_max = 0.5371780554888455;
    msg.climb_fraction_max = 0.009819444777693365;
    msg.bank_max = 0.528751961064424;
    msg.p_max = 0.8759950340913566;
    msg.pitch_min = 0.2782122902104851;
    msg.pitch_max = 0.9313385721690411;
    msg.q_max = 0.23043496542396513;
    msg.g_min = 0.7598151012137914;
    msg.g_max = 0.15280855131551785;
    msg.g_lat_max = 0.8286861486670328;
    msg.rpm_min = 0.25320045246272505;
    msg.rpm_max = 0.4493364266341676;
    msg.rpm_rate_max = 0.6753565251206187;

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
    msg.setTimeStamp(0.15143499678040528);
    msg.setSource(16110U);
    msg.setSourceEntity(5U);
    msg.setDestination(60367U);
    msg.setDestinationEntity(172U);
    msg.op = 83U;
    msg.speed_min = 0.2934152041052708;
    msg.speed_max = 0.9793400539892242;
    msg.long_accel = 0.9989250819463618;
    msg.alt_max_msl = 0.7955737639393706;
    msg.dive_fraction_max = 0.397636772168135;
    msg.climb_fraction_max = 0.311327891151303;
    msg.bank_max = 0.252672871973722;
    msg.p_max = 0.28168146827131013;
    msg.pitch_min = 0.41773204570847244;
    msg.pitch_max = 0.4065823554090474;
    msg.q_max = 0.669959551834379;
    msg.g_min = 0.9427417158405557;
    msg.g_max = 0.954751866565755;
    msg.g_lat_max = 0.7589320634475355;
    msg.rpm_min = 0.09183733758144919;
    msg.rpm_max = 0.09802281206388508;
    msg.rpm_rate_max = 0.22338089542865713;

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
    msg.setTimeStamp(0.3425662577828241);
    msg.setSource(16135U);
    msg.setSourceEntity(149U);
    msg.setDestination(65417U);
    msg.setDestinationEntity(42U);
    msg.op = 52U;
    msg.speed_min = 0.44232128129093295;
    msg.speed_max = 0.8429820353499055;
    msg.long_accel = 0.37252397994443875;
    msg.alt_max_msl = 0.4801692453876145;
    msg.dive_fraction_max = 0.17172821783716374;
    msg.climb_fraction_max = 0.2506524497009882;
    msg.bank_max = 0.15663692956606678;
    msg.p_max = 0.1640736712034928;
    msg.pitch_min = 0.5902240527337709;
    msg.pitch_max = 0.44005937940355866;
    msg.q_max = 0.7595747015388539;
    msg.g_min = 0.029991266097957547;
    msg.g_max = 0.06500327001943806;
    msg.g_lat_max = 0.3043001796749909;
    msg.rpm_min = 0.6707674691008805;
    msg.rpm_max = 0.7988593653359998;
    msg.rpm_rate_max = 0.8460939540825066;

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
    msg.setTimeStamp(0.32413452601447457);
    msg.setSource(6603U);
    msg.setSourceEntity(153U);
    msg.setDestination(46522U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.20220987987939576);
    msg.setSource(9558U);
    msg.setSourceEntity(61U);
    msg.setDestination(17377U);
    msg.setDestinationEntity(117U);
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 112U;
    tmp_msg_0.op = 184U;
    tmp_msg_0.request_id = 55308U;
    tmp_msg_0.plan_id.assign("NATVFTSQPDXUOHOWELZJRNVOQPMYHGQJSTYEJKOMVFLZENJPMRMJDEXPWXNYIOHHDACZAXCZFAKQIAYFWJXJTHTPMMAPKWYHTCLBWBDIQSGUJFZXCUHWKRWSBKYYNULLRCKVIJPBWFMOTDVUVUDGMCQZOIDEGGNZBGREGGWCNSRRTWQHVYXFCHVULLDLMISPIKCIZJOOKEAL");
    tmp_msg_0.flags = 25707U;
    IMC::Goto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 6772U;
    tmp_tmp_msg_0_0.lat = 0.002947560318826925;
    tmp_tmp_msg_0_0.lon = 0.8652556880962806;
    tmp_tmp_msg_0_0.z = 0.5873294395523366;
    tmp_tmp_msg_0_0.z_units = 8U;
    tmp_tmp_msg_0_0.speed = 0.153041820644513;
    tmp_tmp_msg_0_0.speed_units = 109U;
    tmp_tmp_msg_0_0.roll = 0.30463147620114517;
    tmp_tmp_msg_0_0.pitch = 0.6715337059497769;
    tmp_tmp_msg_0_0.yaw = 0.29108031292576775;
    tmp_tmp_msg_0_0.custom.assign("TUDRATLZYXCRAWJABAESIKEQFSDWRFWSCKRSNVPEKJIKPDRNSKHYFNSLTJFIXLMUNGBDHPOWLXMPIMEAZXWPBDKQZHBUVYJZXSJIYRJOQGOGQDUNHOPEBJCDYRCB");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("FMDUKJUWRTYHDACFOGNJXOLZLODREMIYMZCQXTWSMIYFLTERTXCYGZOQQTJTQFSPEDIVAEUCRQQVBTGCZRGIFXCACKKHOHHLSXHYQEJMUHZMFKNWJWGUUNIFCABPGBFAJVTPQKDPVRNGSP");
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
    msg.setTimeStamp(0.20425106743417232);
    msg.setSource(9993U);
    msg.setSourceEntity(39U);
    msg.setDestination(38196U);
    msg.setDestinationEntity(217U);
    IMC::ColoredDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.6948813896114518;
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
    msg.setTimeStamp(0.5350693577046581);
    msg.setSource(38919U);
    msg.setSourceEntity(131U);
    msg.setDestination(36757U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.23452732298980872;
    msg.lon = 0.5179883451500013;
    msg.height = 0.8430474850946851;
    msg.x = 0.13220810473439681;
    msg.y = 0.39689115427087074;
    msg.z = 0.8712961330167944;
    msg.phi = 0.18535023654121185;
    msg.theta = 0.40541317020403045;
    msg.psi = 0.9440451871592677;
    msg.u = 0.7492657434350098;
    msg.v = 0.710856072649057;
    msg.w = 0.6046904809714433;
    msg.p = 0.10788887607400077;
    msg.q = 0.42066608251208204;
    msg.r = 0.011743548935966186;
    msg.svx = 0.5799246972473074;
    msg.svy = 0.20349425507762264;
    msg.svz = 0.07383220074281371;

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
    msg.setTimeStamp(0.14202960562478917);
    msg.setSource(26215U);
    msg.setSourceEntity(114U);
    msg.setDestination(39013U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.14093319657422199;
    msg.lon = 0.24255544657673167;
    msg.height = 0.07530297968083643;
    msg.x = 0.692852355939486;
    msg.y = 0.10818268309276924;
    msg.z = 0.8033139238889024;
    msg.phi = 0.6640088667286451;
    msg.theta = 0.2574186686899116;
    msg.psi = 0.8247198910360087;
    msg.u = 0.6583224765877453;
    msg.v = 0.19336387674826427;
    msg.w = 0.5626075043252481;
    msg.p = 0.8125601666343324;
    msg.q = 0.5549249733701712;
    msg.r = 0.35371601373177675;
    msg.svx = 0.11754656306768252;
    msg.svy = 0.3748203947898665;
    msg.svz = 0.9311224748178536;

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
    msg.setTimeStamp(0.07257760505828059);
    msg.setSource(51745U);
    msg.setSourceEntity(16U);
    msg.setDestination(61174U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.07824435956015452;
    msg.lon = 0.08631514890925018;
    msg.height = 0.17128414142631498;
    msg.x = 0.3967558331351322;
    msg.y = 0.6927172375355058;
    msg.z = 0.7819691901821886;
    msg.phi = 0.8196408535133006;
    msg.theta = 0.782095928958041;
    msg.psi = 0.8767091751071552;
    msg.u = 0.7469052653645584;
    msg.v = 0.09641319019936101;
    msg.w = 0.24006109947973664;
    msg.p = 0.40861636197874696;
    msg.q = 0.22153545506866645;
    msg.r = 0.7139176762136015;
    msg.svx = 0.7738292358910251;
    msg.svy = 0.9018988563447562;
    msg.svz = 0.36895410282798424;

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
    msg.setTimeStamp(0.7424714777074153);
    msg.setSource(6404U);
    msg.setSourceEntity(146U);
    msg.setDestination(15885U);
    msg.setDestinationEntity(32U);
    msg.op = 68U;
    msg.entities.assign("QLDPZDOQEUDNTICBRIJPKWWDGNHIFBTBLVGRIKDTHZUNZXMSJPXCJJHORCVGLHELFAYEJJLYPNIMNCVBSGZNOIYTSTXSOXZMXIQALJAFVGRGJWZPYYKNBODAXSKEOQUAVLSUKPXGKBWWOXWKAXFCEUEFQQPCIBFHATSSOCTWPCEGYLMDRMAPEFRUBEY");

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
    msg.setTimeStamp(0.23267595165056676);
    msg.setSource(26710U);
    msg.setSourceEntity(103U);
    msg.setDestination(40516U);
    msg.setDestinationEntity(195U);
    msg.op = 192U;
    msg.entities.assign("QNXDDTYMKCGHUZPBXXEWUPZTKTHPAJSGGERWFZABKMXVGVYETKZAKQTIZTJNRSUHMHRDQKFVLKSHUJSNSFEUZIXZKBRMGCGRJRTSPDJEMFOYAWFXSIWCSPJCMLHGDVQUNSMWRMFZXCJPTNVORK");

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
    msg.setTimeStamp(0.5023943264077474);
    msg.setSource(45147U);
    msg.setSourceEntity(62U);
    msg.setDestination(9848U);
    msg.setDestinationEntity(180U);
    msg.op = 20U;
    msg.entities.assign("IDOZMEAJVVTAVVLAQCJQVHEGHBCWRUNRDZMXOJJFKFHAFBKRZ");

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
    msg.setTimeStamp(0.3734963729763372);
    msg.setSource(11153U);
    msg.setSourceEntity(215U);
    msg.setDestination(55812U);
    msg.setDestinationEntity(104U);
    msg.type = 101U;
    msg.speed = 21138U;
    const signed char tmp_msg_0[] = {-11, 50, -10, -24, 4, 5, 62, -52, 108, 21, -32, 98, -27, -111, -17, -9, -121, 78, -112, -101, -68, -25, -44, -95, 21};
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
    msg.setTimeStamp(0.5031055131831559);
    msg.setSource(125U);
    msg.setSourceEntity(169U);
    msg.setDestination(43194U);
    msg.setDestinationEntity(34U);
    msg.type = 216U;
    msg.speed = 51129U;
    const signed char tmp_msg_0[] = {79, 75, 20, 11, -105, -6, -8, 30, -53, -96, -23, 116, 70, 116, -57, -109, 8, -77, 21, -31, -80, -62, -47, 65, 125, 57, 55, -35, -25, 92, -26, 8, -10, 56, -70, 39, 17, -46, -32, 80, 92, 60, -128, -56, 83, 26, -55, 64, 2, -114, 93, 65, 51, 4, -80, -88, -33, 18, -72, 63, 87, -56, 43, -66, -6, 103, -65, -124, -96, 6, -115, 80, 14, -62, 125, 13, -4, 40, 25, 71, -19, 116, -61, 11, -53, 36, 95, -64, -39, 49, -56, 82, -56, -39, 48, 75, -33, 37, 114, -74, -23, -107, 21, 65, 120, -99, -23, 75, -106, -99, -73, -107, -111, -52, 98, -97, -83, 76, 121, -93, 122, 7, -89, 51, -12, 4, -45, 96, 18, 46, -19, 38, -8, -34, -96, 8, -20, -44, -123, -49, 59, -17, -95, -6, -24, -25, -52, 27, 54, -38, 60, -22, 21, -127, -53, 27, 9, 29, -76, -90, -119, 33, -89, -88, 15, -95, -119, 96, -43, -48, 116, -14, -86, 92, -12, -8, -126, -86, 17, 117, 120, 1, -120, -43, 108, -59, -125, -43, 83, -38, 25, -52, -120, 86, 70, 58, 31, -51, 86, -61, 67, -11, 89, -15, 109, -36, -51, -11, -87, -125, -61, -75, 44};
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
    msg.setTimeStamp(0.6711426540598198);
    msg.setSource(35370U);
    msg.setSourceEntity(51U);
    msg.setDestination(40539U);
    msg.setDestinationEntity(132U);
    msg.type = 53U;
    msg.speed = 7719U;
    const signed char tmp_msg_0[] = {90, 30, -103, -128, -59, 111, -109, -38, 20, 16, -23, -50, 114, 34, -18, -127, -88, -101, -30, 119, -74, 123, -26, 3, -102, -13, -128, -68, 49, 92, 90, 20, 93, 13, 77, 99, 55, -105, 35, 10, 116, -53, 124, -14, -57, 86, -111, -41, 86, -73, -81, -15, 88, 102, -49, -93, 5, 66, 76, 94, 3, -104, -63, 92, -5, -117, -50, 11, -114, 55, -97, 96, -76, 49, 94, 40, -71, 103, 102, 91, 6, 12, -99, 100, -103, -94, -32, -97, 49, -9, 63, 117, -91, 101, 30, 13, 23, -128, -71, 20, 93, -63, 18, 107, 11, -55, -44, -71, 109, 22, 125, -66, -7, 112, 94, 8, 112, -81, -91, 21, 100, -42, -7, -97, 56, -47, 82, -70, 46, -117, 0, 87, 60, 87, -90, 85, 5, 66, 40, 45, -78, -12, -4, -81, -51, 65, -64, -96, 115, 106, 67, -10, -127, 33, 91, -1, -63, -27, 16, -81, -100, -63, -58, 22, -97, -61, -13, 93, 98, 54, -88, 41, 10, 86, -32, 107, 101, -60, -2, -8, -66, -1, 114, -29, -94, 106, -68, -78, 72, -18, 84, -36, 41, 105, -93, 86, -93, -123, -80, -96, -89, -9, -127, -104, -14, -88};
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
    msg.setTimeStamp(0.4276625884751155);
    msg.setSource(49980U);
    msg.setSourceEntity(159U);
    msg.setDestination(57374U);
    msg.setDestinationEntity(152U);
    msg.op = 2U;
    msg.tas2acc_pgain = 0.08373385529011668;
    msg.bank2p_pgain = 0.23012609510025728;

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
    msg.setTimeStamp(0.2550590918324047);
    msg.setSource(8578U);
    msg.setSourceEntity(145U);
    msg.setDestination(32643U);
    msg.setDestinationEntity(205U);
    msg.op = 205U;
    msg.tas2acc_pgain = 0.9693548654192754;
    msg.bank2p_pgain = 0.034655463377038065;

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
    msg.setTimeStamp(0.7193388106407971);
    msg.setSource(28011U);
    msg.setSourceEntity(158U);
    msg.setDestination(46582U);
    msg.setDestinationEntity(52U);
    msg.op = 193U;
    msg.tas2acc_pgain = 0.6687561138131144;
    msg.bank2p_pgain = 0.8518808466733941;

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
    msg.setTimeStamp(0.8387583526790217);
    msg.setSource(38249U);
    msg.setSourceEntity(5U);
    msg.setDestination(19556U);
    msg.setDestinationEntity(52U);
    msg.available = 897718709U;
    msg.value = 12U;

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
    msg.setTimeStamp(0.17319142864077464);
    msg.setSource(56809U);
    msg.setSourceEntity(229U);
    msg.setDestination(61291U);
    msg.setDestinationEntity(2U);
    msg.available = 3752724730U;
    msg.value = 85U;

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
    msg.setTimeStamp(0.6762785186277348);
    msg.setSource(16322U);
    msg.setSourceEntity(199U);
    msg.setDestination(37244U);
    msg.setDestinationEntity(4U);
    msg.available = 252504646U;
    msg.value = 218U;

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
    msg.setTimeStamp(0.8835623976406805);
    msg.setSource(63671U);
    msg.setSourceEntity(147U);
    msg.setDestination(42674U);
    msg.setDestinationEntity(209U);
    msg.op = 93U;
    msg.snapshot.assign("RCNIAUYZRVKBGQJSISEXVQCKLANXXXVAANFQVBVHIMHDAONKMOSICRILCALRFELRWZTSNMTYPOUVMUUDJAZXJDPVIGDGNNZMHGQWIDIOPGAWFWUOLUGNDZFQWRHERSUKTBBHJWHOTUNEDHBAIWPKLEOKYFTX");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.9878905137862767;
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
    msg.setTimeStamp(0.4104165790233326);
    msg.setSource(11436U);
    msg.setSourceEntity(199U);
    msg.setDestination(13102U);
    msg.setDestinationEntity(187U);
    msg.op = 40U;
    msg.snapshot.assign("HOSKMYJDQBAZKONVCMDMJNBMJUGRGHINLMIHGJUSVMXCHKGCRBAZRWNXKUMCUVDLQQENIGKALCCUATPOVYWHFMLEZRKFZAKDTQHTFFWNMS");
    IMC::DevDataBinary tmp_msg_0;
    const signed char tmp_tmp_msg_0_0[] = {-34, 36, -8, 63, -16, 124, 68, 94, 126, 114, -91, -43, 46, 71, 54, 85, 40, 54, 126, -33, 16, -68, -67, 42, 28, -58, 108, -32, 39, 62, 7, 109, 47, 65, -38, 102, -85, -119, 63, -24, -101, 4, 59, 63, 119, -50, -56, -118, 0, -3, -98, -72, -111, 73, -13, -28, 54, -60, -27, 25, 72, -77, -62, -108, 46, 33, 86, -113, -17, 114, -11, -52, 11, -110, 49, -122, 29, -12, 120, 9, -93, -55, -101, 42, -57, 104, 61, -48, 19, 113, 31, 46, 25, -66, -104, -103, 98, 91, 89, -20, -10, 68, 125, 100, 114, 49, 85, -113, 38, 74, -121, 88, -97, -75, 20, -14, -40, -28, -78, 77, 121, -50, 45, -64, 4, -121, -55, -30, 82, -82, 19, -112, -57, -94, 25, -5, -30, 95, -42, 75, 111, 107, 86, -88, 125, -83, 49, 84, -85, 19, -57, 114, -126, -32, 4, 57, 50, 60, -109, 23, 29, 61, 38, -112, -126, 125, -118, -54, -50, -115, 45, 29, -101, 105, 12, -70, 12, -42, 125, -20, -41, -101, 65, -10, 28, -50, -89, -39, 4, 86, -33, 69, -53, 76, -14, -30, -29, 62, -54, -122, -56, 2, 91, 22, 94, -11, -69, 81, -93, 115, 36, -116, 11, -110, -94, -80, -115, 71, 63, -95, 122, -24, -33, -124, -79, 26, -67, -101, -44, 120, 69, 92, -86, -116, -24};
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
    msg.setTimeStamp(0.7756661471418996);
    msg.setSource(15119U);
    msg.setSourceEntity(62U);
    msg.setDestination(20624U);
    msg.setDestinationEntity(100U);
    msg.op = 118U;
    msg.snapshot.assign("FAKNZWBZHKSIHCQIOEZKPBIDAXIRYFKVMRVTRZPRRTLOMRIVRNUGFGVPSACDNIDKELPOCARCEDNHGIDNDTLWLWMBOGOQCBLPSJQGFZJMXUXFOMYFCLHMPYSPCQUTAQLJMNHBTLSSHFHYEVWUDVGJUJSOFRBXSPRVAUPZNQGYFNUNOIEGQSWTVJJYILOYDAXKMEVIEJQAZKWFUBXDCKZWJEAXDTHCTBO");
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.6476751502199216);
    msg.setSource(52843U);
    msg.setSourceEntity(252U);
    msg.setDestination(41021U);
    msg.setDestinationEntity(254U);
    msg.op = 139U;
    msg.name.assign("JLRMWEESRRCGRFBQEKKZMDMCJIQJIVYBECDXIFJVHWWUPADYHLWQZBVWFHG");

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
    msg.setTimeStamp(0.8062386068749104);
    msg.setSource(21061U);
    msg.setSourceEntity(108U);
    msg.setDestination(3784U);
    msg.setDestinationEntity(99U);
    msg.op = 153U;
    msg.name.assign("UYCRRVNFJZIKMSNGHXUJCGCSCHPVUWGSYVHOZJYEEBRMPWIZDFIGQMJRFOYEKNSIKSWFHCHMXQGTMYQAQNQVBIQTNOUBKOHBJZQFDLOVQAQJTUO");

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
    msg.setTimeStamp(0.6070397699238897);
    msg.setSource(21165U);
    msg.setSourceEntity(80U);
    msg.setDestination(28121U);
    msg.setDestinationEntity(165U);
    msg.op = 64U;
    msg.name.assign("QSEABYCOJFTINADTNKGYVIILFCWJVYYBTDANRKIOGGTPHKASZKJRWOVZEYPLSHDIBAUXEKPDJLYSZKDJZVCKKNCQLHYRKSFBDALJVURQWXSLRWWMPBLPXUXTOBMYWAXMQHWWDMGCEOEPMGSZZRMNUGVCMVHYGQWUYPHUZFLGEJMAAIIJF");

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
    msg.setTimeStamp(0.9283731874887111);
    msg.setSource(62164U);
    msg.setSourceEntity(198U);
    msg.setDestination(16045U);
    msg.setDestinationEntity(165U);
    msg.type = 8U;
    msg.htime = 0.012900979150035963;
    msg.context.assign("KRRSFPCVUNSOXXATWIBPAEGKVWZDJEXFAYTYWPJOFBOXALILYDKAQEKMSWNAYVHYGZGFKLPBBPGRNQFSVPNXCMRBVTMUZDCWQ");
    msg.text.assign("OALGXDMWETZKWPVCZPROGODFKSRUAFEUJMNKSZRZEKDFGGRZVZODDUHSKEANKJGTCPQMPFMLSNOVEXATNADFYIRPBBMGNNFGKGXFSZLJXXOPRBPVRKCJSQCHNPIUUBWLQJFCHOMTASNBIQYLRCTWDXLYIHEQCSBBUUZPOLPJNXYWGAWCIDYOTJE");

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
    msg.setTimeStamp(0.4570544950067785);
    msg.setSource(38585U);
    msg.setSourceEntity(43U);
    msg.setDestination(65065U);
    msg.setDestinationEntity(134U);
    msg.type = 197U;
    msg.htime = 0.8729375302806831;
    msg.context.assign("VSDSPWUPNH");
    msg.text.assign("YISNVUGEWBKBCPLQFLAIZTHPJRUJVZERFYXFBYTZLVJHGWDRAQWPQTFIJEEPNZJUFPBWDPIGMEYFNUOKUSMZLRMLSMLJYBUDVKDVGRSXSEOLIGEQQUQCJFCAGDSZECMMNWTAOWJXACTCMYYLTXDVKOONDAWDPTKGUYTZIPGCZXHHWCYSK");

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
    msg.setTimeStamp(0.663688685329445);
    msg.setSource(34015U);
    msg.setSourceEntity(44U);
    msg.setDestination(9331U);
    msg.setDestinationEntity(243U);
    msg.type = 234U;
    msg.htime = 0.44921126909107634;
    msg.context.assign("CPKETIGQHUVYEDNGHETJKQETDZMSEESHRMVSMNBCPEHWAIKIYHWCUWTBBLKORIUJVSCXXBFHZGBDQJKMWZTISFRMWJVDFSDIWGCYAQP");
    msg.text.assign("QKLPGIRHACVXMT");

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
    msg.setTimeStamp(0.41535414251863956);
    msg.setSource(44047U);
    msg.setSourceEntity(254U);
    msg.setDestination(46700U);
    msg.setDestinationEntity(86U);
    msg.command = 143U;
    msg.htime = 0.06859580010871591;

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
    msg.setTimeStamp(0.17814193483765361);
    msg.setSource(47905U);
    msg.setSourceEntity(61U);
    msg.setDestination(286U);
    msg.setDestinationEntity(73U);
    msg.command = 84U;
    msg.htime = 0.4228657216193292;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 227U;
    tmp_msg_0.htime = 0.6290966540339527;
    tmp_msg_0.context.assign("GLSPNBGIUPKDSXJKNQFEREQROHMPMWPKUCBIELLRQXITPLJVUPZCWJGGAVOINIKDFEWRKVRKXFBHWHBTBNUODZCHGEEQNZHSTJRLYBGRWAFECVIVWJXKZJQMBBYZNCRXSMPERCUAYZWKANGWAAQXFYQDOYGHNKXDYUAITMOFZEBHTD");
    tmp_msg_0.text.assign("MBXLBCVEJFPMYURNDNPBBMPHJWHQMIOCEXEZKEQGWROPENVUQKNISIJGXMCIFOPPOCFYSDTZNLHQBAIYKDAQLRTXLQ");
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
    msg.setTimeStamp(0.8923417754281765);
    msg.setSource(54166U);
    msg.setSourceEntity(100U);
    msg.setDestination(50582U);
    msg.setDestinationEntity(137U);
    msg.command = 197U;
    msg.htime = 0.6429033945984435;

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
    msg.setTimeStamp(0.9229915541779713);
    msg.setSource(6756U);
    msg.setSourceEntity(223U);
    msg.setDestination(496U);
    msg.setDestinationEntity(159U);
    msg.op = 174U;
    msg.file.assign("HNLYHKYVRLCMDZCWB");

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
    msg.setTimeStamp(0.054330758904837295);
    msg.setSource(32474U);
    msg.setSourceEntity(143U);
    msg.setDestination(23978U);
    msg.setDestinationEntity(75U);
    msg.op = 201U;
    msg.file.assign("TLQAGAUCOENBGCDIUJIQXZBPWISJOJPKNOZEPFCZIHERMOMQZERUZEITJBXFQZYKRJFMUENHBVLJTRTHLDRYSDWEWC");

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
    msg.setTimeStamp(0.06634933440486068);
    msg.setSource(49406U);
    msg.setSourceEntity(37U);
    msg.setDestination(50147U);
    msg.setDestinationEntity(162U);
    msg.op = 223U;
    msg.file.assign("AAWAVPDSNFRLKRYWIYQVVNGUOKICNOSZFGFCSUHYPLOGIYAYEWUHCPSZKBJORTWGRMWFBDDWZTETCBHVBEKITBSIDNHECJPJLOKBMQDTEQBDVTQMSGJAZCUUXPXRSBVAWMZXGVXSTKRFLMWVMPLLBOODLJYFLYNNRQOOXN");

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
    msg.setTimeStamp(0.2996148938563322);
    msg.setSource(57031U);
    msg.setSourceEntity(165U);
    msg.setDestination(14274U);
    msg.setDestinationEntity(140U);
    msg.op = 88U;
    msg.clock = 0.1228015311393369;
    msg.tz = 47;

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
    msg.setTimeStamp(0.06578631228431953);
    msg.setSource(40145U);
    msg.setSourceEntity(178U);
    msg.setDestination(9526U);
    msg.setDestinationEntity(120U);
    msg.op = 230U;
    msg.clock = 0.9287710155194504;
    msg.tz = -81;

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
    msg.setTimeStamp(0.17224955443430257);
    msg.setSource(39400U);
    msg.setSourceEntity(125U);
    msg.setDestination(64160U);
    msg.setDestinationEntity(15U);
    msg.op = 240U;
    msg.clock = 0.6395504708744332;
    msg.tz = -7;

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
    msg.setTimeStamp(0.6966935908218183);
    msg.setSource(41901U);
    msg.setSourceEntity(208U);
    msg.setDestination(13670U);
    msg.setDestinationEntity(85U);
    msg.conductivity = 0.4244281988222337;
    msg.temperature = 0.26395359181222766;
    msg.depth = 0.14134232465295926;

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
    msg.setTimeStamp(0.1365434519833728);
    msg.setSource(3813U);
    msg.setSourceEntity(97U);
    msg.setDestination(45726U);
    msg.setDestinationEntity(74U);
    msg.conductivity = 0.9229885685158956;
    msg.temperature = 0.27179157405531673;
    msg.depth = 0.6742871928700456;

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
    msg.setTimeStamp(0.1244617171766168);
    msg.setSource(45591U);
    msg.setSourceEntity(233U);
    msg.setDestination(43782U);
    msg.setDestinationEntity(153U);
    msg.conductivity = 0.6843516006331621;
    msg.temperature = 0.5080534885943719;
    msg.depth = 0.06373534074526799;

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
    msg.setTimeStamp(0.4850386586996639);
    msg.setSource(34161U);
    msg.setSourceEntity(39U);
    msg.setDestination(709U);
    msg.setDestinationEntity(21U);
    msg.altitude = 0.3886385155221106;
    msg.roll = 14714U;
    msg.pitch = 58564U;
    msg.yaw = 28903U;
    msg.speed = -12701;

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
    msg.setTimeStamp(0.927454758891882);
    msg.setSource(2431U);
    msg.setSourceEntity(5U);
    msg.setDestination(7564U);
    msg.setDestinationEntity(54U);
    msg.altitude = 0.8775906073867981;
    msg.roll = 43586U;
    msg.pitch = 40130U;
    msg.yaw = 6329U;
    msg.speed = 24217;

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
    msg.setTimeStamp(0.5243678509922135);
    msg.setSource(43862U);
    msg.setSourceEntity(98U);
    msg.setDestination(16281U);
    msg.setDestinationEntity(67U);
    msg.altitude = 0.0693904105931159;
    msg.roll = 62136U;
    msg.pitch = 8567U;
    msg.yaw = 20697U;
    msg.speed = -25860;

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
    msg.setTimeStamp(0.9200698310717468);
    msg.setSource(43362U);
    msg.setSourceEntity(246U);
    msg.setDestination(63558U);
    msg.setDestinationEntity(195U);
    msg.altitude = 0.2653822558487351;
    msg.width = 0.16107520649839036;
    msg.length = 0.756277648156944;
    msg.bearing = 0.6329720773486931;
    msg.pxl = 16672;
    msg.encoding = 114U;
    const signed char tmp_msg_0[] = {72, -120, -105, -66, 53, 21, -33, -77, -61, -127, 57};
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
    msg.setTimeStamp(0.18983183247624835);
    msg.setSource(60491U);
    msg.setSourceEntity(18U);
    msg.setDestination(30370U);
    msg.setDestinationEntity(102U);
    msg.altitude = 0.6565220213279158;
    msg.width = 0.9977636252414175;
    msg.length = 0.15435555173111926;
    msg.bearing = 0.9195047821892972;
    msg.pxl = -12303;
    msg.encoding = 225U;
    const signed char tmp_msg_0[] = {15, -24, 78, -107, 55, -115, 108, 14, 0, -77, 4, 69, 99, 67, 125, -112, 65, -78, 111, -20, -111, 115, 38, 40, -12, 119, -28};
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
    msg.setTimeStamp(0.655997987929628);
    msg.setSource(42560U);
    msg.setSourceEntity(174U);
    msg.setDestination(64882U);
    msg.setDestinationEntity(181U);
    msg.altitude = 0.6143814023026097;
    msg.width = 0.5258936253943015;
    msg.length = 0.11854266612972209;
    msg.bearing = 0.8078524142704946;
    msg.pxl = 4121;
    msg.encoding = 210U;
    const signed char tmp_msg_0[] = {65, -124, 91, 24, -42, -49, 23, 89, -89, -60, 126, -9, 41, -89, 59, -49, 108, 45, 39, 52, -90, 105, -108, 70, -39, -8, 37, 40, 37, 81, -71, -29, -11, 126, -68, 67, -43, 53, 63, 126, -92, 65, -19, -72, 126, 13, -112, 89, -57, -74, -100, 113, -125, -20, -59, -10, -73, 47};
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
    msg.setTimeStamp(0.6083626917490021);
    msg.setSource(27982U);
    msg.setSourceEntity(166U);
    msg.setDestination(42846U);
    msg.setDestinationEntity(59U);
    msg.text.assign("WJGGKSGEGYMCRTSSVOFXLCLBPIUTHKDCAPPHREFQPHEV");
    msg.type = 153U;

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
    msg.setTimeStamp(0.34743963063325956);
    msg.setSource(47243U);
    msg.setSourceEntity(170U);
    msg.setDestination(17324U);
    msg.setDestinationEntity(230U);
    msg.text.assign("JRYVGHJRFDEZLIBXOOVVKMDFBZFQRHWOBTSEUZCXJWAZRXLCMRBYASXGVYJCQUZFKKCNIYMIMOJNKMDWTF");
    msg.type = 46U;

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
    msg.setTimeStamp(0.8992833895475684);
    msg.setSource(44897U);
    msg.setSourceEntity(0U);
    msg.setDestination(22743U);
    msg.setDestinationEntity(169U);
    msg.text.assign("XYZPSJMZPCSSGEEBLDAFWERFMURTKVQXFHSTAOGKIEAXCYHIVCEFIPYWCDBOGAOTJNSESFJUBZNVPHBYTRDRFOJKMSBFADQHUYILGAVKEIWFVMVQBSPCTKDNRPZGSYJRDBJBPUZHLTGJWNNYVAZXGOTKORJYKMZWNUAXQCUGMGJINWAEIONQWXTQQXCYKSWQLVMLVULXWRODZQHP");
    msg.type = 238U;

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
    msg.setTimeStamp(0.5480216679201207);
    msg.setSource(22616U);
    msg.setSourceEntity(94U);
    msg.setDestination(3072U);
    msg.setDestinationEntity(99U);
    msg.parameter = 220U;
    msg.numsamples = 150U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 5640U;
    tmp_msg_0.avg = 0.6848823395363626;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.6497862733601115;
    msg.lon = 0.6389567670519726;

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
    msg.setTimeStamp(0.2839558726067303);
    msg.setSource(51749U);
    msg.setSourceEntity(217U);
    msg.setDestination(28026U);
    msg.setDestinationEntity(101U);
    msg.parameter = 28U;
    msg.numsamples = 23U;
    msg.lat = 0.8661324311085098;
    msg.lon = 0.8580120144477125;

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
    msg.setTimeStamp(0.8929113468930374);
    msg.setSource(18868U);
    msg.setSourceEntity(1U);
    msg.setDestination(52503U);
    msg.setDestinationEntity(57U);
    msg.parameter = 107U;
    msg.numsamples = 196U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 16715U;
    tmp_msg_0.avg = 0.47187506965934;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.265804810137211;
    msg.lon = 0.26625883402029793;

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
    msg.setTimeStamp(0.9296815926856576);
    msg.setSource(22018U);
    msg.setSourceEntity(4U);
    msg.setDestination(29380U);
    msg.setDestinationEntity(170U);
    msg.depth = 46089U;
    msg.avg = 0.7785727386798358;

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
    msg.setTimeStamp(0.7797203840163731);
    msg.setSource(61595U);
    msg.setSourceEntity(164U);
    msg.setDestination(21272U);
    msg.setDestinationEntity(250U);
    msg.depth = 42149U;
    msg.avg = 0.19049782621943467;

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
    msg.setTimeStamp(0.35713175635600325);
    msg.setSource(45791U);
    msg.setSourceEntity(75U);
    msg.setDestination(21147U);
    msg.setDestinationEntity(190U);
    msg.depth = 22209U;
    msg.avg = 0.9701399574203382;

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
    msg.setTimeStamp(0.7643042367165941);
    msg.setSource(37631U);
    msg.setSourceEntity(148U);
    msg.setDestination(26785U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.960658519135703);
    msg.setSource(65064U);
    msg.setSourceEntity(117U);
    msg.setDestination(10207U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.9000085029873794);
    msg.setSource(26756U);
    msg.setSourceEntity(185U);
    msg.setDestination(52631U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.355407486308126);
    msg.setSource(7003U);
    msg.setSourceEntity(12U);
    msg.setDestination(54600U);
    msg.setDestinationEntity(225U);
    msg.sys_name.assign("FEAAHHURSZIMKWV");
    msg.sys_type = 15U;
    msg.owner = 65112U;
    msg.lat = 0.010756895087217666;
    msg.lon = 0.11475646712114007;
    msg.height = 0.12488360958651157;
    msg.services.assign("PZKUMIDWATVNJACANEYMLEKAWRNANUCVYDLUCHJSCHARLQILVHMSJXUEGSPKVMUMYXBWFHGJIKZHLPKFQSWUKAUGDTKJWZSBTFOSOOMFTFCLQEKLYHPBLGXMVGYOXPXCFURDQHFCGRTLWYJRKDOZGMIEWNEDAHRARTJXHDFJBNZIWSEOOOFZGINSBJPQOBOYZPYJWRXDBCINCSVGEPQVBNEEVTFQVDYWIAUGSCTZNRMUDV");

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
    msg.setTimeStamp(0.5253156310648798);
    msg.setSource(31701U);
    msg.setSourceEntity(226U);
    msg.setDestination(4576U);
    msg.setDestinationEntity(195U);
    msg.sys_name.assign("TVRTQACFLIFQCGMXOADUJUZGNFPKZUQANJGURNWECPXSURHZYDNNOB");
    msg.sys_type = 57U;
    msg.owner = 41764U;
    msg.lat = 0.83342977016807;
    msg.lon = 0.16698441063337732;
    msg.height = 0.6304802710880361;
    msg.services.assign("LYTOWGPSWNOBZTJAWCIJORAPZNLEPCHSCOE");

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
    msg.setTimeStamp(0.9529109945875657);
    msg.setSource(4866U);
    msg.setSourceEntity(129U);
    msg.setDestination(47580U);
    msg.setDestinationEntity(94U);
    msg.sys_name.assign("LRZQNGSTTNGJQBLVNHGKDNEFMOFWRTAMNRLWZDNJTGIMCCYXZEHJCDZHXEPCWIUSDAZPMQPYERZACXCCCBHYUYFTROHIBOTUFVYYIVVBMMQLPEOXXQRADIXRBMTQLGWEOGNTSJSLJAQOHUVIFKRPGVGPPYJPXYKWLAVWURIXSBVLIYQPBDUNJIANEERSSTHOAWAKAFSDBDISMGB");
    msg.sys_type = 177U;
    msg.owner = 16000U;
    msg.lat = 0.4293919037190371;
    msg.lon = 0.7018056492258447;
    msg.height = 0.24746646630743108;
    msg.services.assign("VFBAGYAGTGZTLMKM");

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
    msg.setTimeStamp(0.1800439229100107);
    msg.setSource(39634U);
    msg.setSourceEntity(28U);
    msg.setDestination(37639U);
    msg.setDestinationEntity(172U);
    msg.service.assign("KQWOFEFBFNNYAANPZBPQTHDMKRRZFSDJNHMMISMRAAGPMTJVVDQONOPMOUBKHZFJMZOUZWCSLYNXKJCJTCXMDRPOKHIUGNDKYCQFLXCVLCZHNLPXSJIJYTRXXXVUYBAUGHELTVIYSFAXWQVBZWIZNADWYEEKRWIBAG");
    msg.service_type = 252U;

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
    msg.setTimeStamp(0.6135306842814056);
    msg.setSource(64131U);
    msg.setSourceEntity(152U);
    msg.setDestination(1376U);
    msg.setDestinationEntity(86U);
    msg.service.assign("JPFMAAMESBCSBNHMBRKGBNRSKLVAAZSGUVIDXPRRBJTDENJFCXCCQWVBPWWJGTYWOTZTGTOOBDFZUCLHYI");
    msg.service_type = 218U;

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
    msg.setTimeStamp(0.014288348537698448);
    msg.setSource(44844U);
    msg.setSourceEntity(240U);
    msg.setDestination(28272U);
    msg.setDestinationEntity(176U);
    msg.service.assign("TVTCDJHYKOTBVZDFCLXCNUAOBRVRDQYVRUWNGXRSNDAVWLWNLKJZOZIIBJBTLTIMVPYDMFDMPHHFXLSKMNRQBU");
    msg.service_type = 158U;

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
    msg.setTimeStamp(0.7595110882508704);
    msg.setSource(10394U);
    msg.setSourceEntity(75U);
    msg.setDestination(26999U);
    msg.setDestinationEntity(189U);
    msg.value = 0.43998703140784523;

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
    msg.setTimeStamp(0.9601835214492875);
    msg.setSource(52841U);
    msg.setSourceEntity(233U);
    msg.setDestination(4696U);
    msg.setDestinationEntity(183U);
    msg.value = 0.4193597149747126;

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
    msg.setTimeStamp(0.9584459684554263);
    msg.setSource(65344U);
    msg.setSourceEntity(79U);
    msg.setDestination(65114U);
    msg.setDestinationEntity(138U);
    msg.value = 0.34457258248973754;

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
    msg.setTimeStamp(0.8757599416750624);
    msg.setSource(36262U);
    msg.setSourceEntity(45U);
    msg.setDestination(42813U);
    msg.setDestinationEntity(85U);
    msg.value = 0.809775028456033;

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
    msg.setTimeStamp(0.6421120693696356);
    msg.setSource(47041U);
    msg.setSourceEntity(121U);
    msg.setDestination(17602U);
    msg.setDestinationEntity(51U);
    msg.value = 0.5103636456234897;

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
    msg.setTimeStamp(0.9928192393730207);
    msg.setSource(8605U);
    msg.setSourceEntity(28U);
    msg.setDestination(58492U);
    msg.setDestinationEntity(184U);
    msg.value = 0.6871770170376073;

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
    msg.setTimeStamp(0.6755597644967088);
    msg.setSource(23406U);
    msg.setSourceEntity(1U);
    msg.setDestination(33139U);
    msg.setDestinationEntity(61U);
    msg.value = 0.17994184106714972;

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
    msg.setTimeStamp(0.17653873728433123);
    msg.setSource(36858U);
    msg.setSourceEntity(164U);
    msg.setDestination(44003U);
    msg.setDestinationEntity(177U);
    msg.value = 0.6706227329220646;

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
    msg.setTimeStamp(0.8711488864202444);
    msg.setSource(24634U);
    msg.setSourceEntity(208U);
    msg.setDestination(4958U);
    msg.setDestinationEntity(146U);
    msg.value = 0.25912770122864304;

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
    msg.setTimeStamp(0.23127527927913694);
    msg.setSource(60138U);
    msg.setSourceEntity(214U);
    msg.setDestination(48724U);
    msg.setDestinationEntity(130U);
    msg.number.assign("PMUOXBJPQXEIHYDBMSBHPZRJKUWIADRCTDQAFFBFWXLFSCKWVMRJIPAAWHHVDIY");
    msg.timeout = 39863U;
    msg.contents.assign("IXZJNXIFHPEKQOGDBYMQIHEAGRTWZRIAEGPXUDJRGWXOIWMATRAEKNDZAIRVBOYCACMRLMHDBGVUCFSZWBYMTZGQLYQOVCESDDXHEQTGYFWXNLDBSVXZCQKHJONHBFGNUXWVDOFYLVJFLQQAYUUTKO");

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
    msg.setTimeStamp(0.17323542761304567);
    msg.setSource(30742U);
    msg.setSourceEntity(84U);
    msg.setDestination(14563U);
    msg.setDestinationEntity(134U);
    msg.number.assign("GPETDUOTHHGFNXJJYN");
    msg.timeout = 12537U;
    msg.contents.assign("KAQQHAUDZFEKEOMAVYVMDLQZVUOAPYDVJYCWJGEKXSJHUEZLGNEFZJPPAIKWITOZAAKQBESRBKO");

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
    msg.setTimeStamp(0.7736546685255794);
    msg.setSource(17122U);
    msg.setSourceEntity(218U);
    msg.setDestination(50800U);
    msg.setDestinationEntity(214U);
    msg.number.assign("HNLBVIXHNPCMDZAOLPXTYMIRCFWUWXAEOOHZTPTAMGVCHGHJCSBUGNPJRIWELPAQZUXIDRVJWUMFANGBUJYSYAYNKEVBKAWFBBRNYIWSFCMAQHIQROWOKJGBSVTVXFFOUGIQLQELWEIKQXCVLUFSKRBSZVQTLTN");
    msg.timeout = 47295U;
    msg.contents.assign("EBKXYQVCTACTGOBLNDIJJYACVBKBGIAEENXDYKUMSCESNTAMSEPXDLUCEZLOSHJJNJEFQBLNLGCIFADIGTFXFKAQWTFYURFDDXVORMIPPRRGXFRWCYHZJQSIPIQORGDKWLABZLLZUOHLOOMGJNZPBHSHHV");

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
    msg.setTimeStamp(0.7344720663556333);
    msg.setSource(37329U);
    msg.setSourceEntity(168U);
    msg.setDestination(45433U);
    msg.setDestinationEntity(58U);
    msg.seq = 1254999041U;
    msg.destination.assign("SMFAUOKZNWWJMULTYEBCALDVKLFYUYGJMHHDJAOVNOKTNBEEWGRHUDLZGSEBCEVSKSKEXRYWEDUKJFPRPBQQRIIHJWVIYNFTQFUOZXXTINSPSIJHEKZOMVVWGPMUDCMINNROOTHFDGDECZAAOFDATXXMFPHGXF");
    msg.timeout = 59633U;
    const signed char tmp_msg_0[] = {55, -22, -39, 81, 29, 69, -70, 10, 59, -17, -15, -53, 23, -104, 73, -53, -112, -48, -122, 100, 25, 27, 75, 19, -69, 120, -108, -85, 104, -101, 125, 116, -68, -34, 53, 23, 8, 50, 31, -68};
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
    msg.setTimeStamp(0.2587425438720956);
    msg.setSource(52022U);
    msg.setSourceEntity(70U);
    msg.setDestination(29605U);
    msg.setDestinationEntity(165U);
    msg.seq = 1348098459U;
    msg.destination.assign("NZBWGVIQLDYITAOMJNZQTZEVXDHGWCWPZTOMVQJFCIRFYCPVKGWXQSNBJDUKKHHHBKJFCNFLZHSECRVCROGATFQOPSFLVLCXYUFSUIALBAJDIVLHVEHEGKFUUFABLXZOJJUQEDPXKGTN");
    msg.timeout = 55286U;
    const signed char tmp_msg_0[] = {-124, -107, 27, -71, -118, -121, 120, 29, -15, -105, 20, 59, 24, 35, 119, 82, -127, -112, -62, -80, 76, 56, -41, 48, -47, 25, -119, -24, 99, 50, 40, 46, -103, 12, 64, -41, -7, -92, -62, 27, 98, -26, -13, -113, -115, -13, -61, 7, -35, 82, 88, 16, -96, 50, -82, -84, 89, 84, 97, 82, -123, 49, 3, 84, 111, 14, -64, -16, 65, -13, -92, -67, -76, 2, -61, 5, -24, 44, -10, 25, 90, 41, 62, 42, 97, 34, -111, 50, 96, -78, 52, 27, -67, -5, -37, -92, 98, 35, 49, 49, 98, 110, 116, -42, 76, 81, 17, -26, 93, -31, 1, -4, 97, 48, 70, 72, -44, -124, 119, 17, 63, -57, 64, -85, 75, 56, -62, 31, -29, 55, -55, -43, -41, 2, -20, -10, 49, -88, -79, 117, 27, -96, -75, -119, -107, -15, 110, -20, 32, 123, -27, 24, 126, 103, 121, -31, -98, 62, 5, -45, -8, 86, -74, 10, -63, -54, -41};
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
    msg.setTimeStamp(0.6116322183601831);
    msg.setSource(53749U);
    msg.setSourceEntity(121U);
    msg.setDestination(57558U);
    msg.setDestinationEntity(61U);
    msg.seq = 747121347U;
    msg.destination.assign("CMLGUWJZSUOXNXEVEYXXDYDMFECWYRLIXBXRCLRHTEQVEDVGFDSPDMLUPGLZVOHPINFVRAIPTONHLEQNGUYSKPAWMDWSPLWWCSMHPPUBQZBBYKTRLRQNQJAUV");
    msg.timeout = 40883U;
    const signed char tmp_msg_0[] = {9, -126, -79, 8, -93, -82, 24, 66, 26, 25, -41, -22, 30, -33, 77, -49, 80, 63, 110, -71, 28, -8, 8, -4, -6, -32, -54, 73, -127, -121, -100, 57, -76, -55, 78, -60, -67, 28, 33, -82, -21, 73, 116, -107, 78, 48, -78, -37, 62, 98, 69, -44, 12, 126, 21, -74, 38, 5, 68, -44, -72, 108, 78, 91, -40, -76, -123, 5, 75, -19, -49, 72, 19, -8, 96, 123, 31, -55, 115, 113, -56, -51, -44, -54, -46, 96, -59, 109, 31, 10, -78, 82, -26, 121, -5, -72, -110, 36, -74, 76, 90, 39, -43, 45, -94, -69, 3, -107, 12, 14, 11, 3, -120, -41, -2, -99, 119, -3, 116, 126, -22, 107, 15, -12, 126, 71, -124, -81, -49, 58, 6, 49, 117, -116, -21, -27, 59, 116, -6, -122, 10, 115, -38, 16, 78, -126, -88, -58, 3, 74, -58, -91, 59, -82, -61, 50, -90, 68, -18, -12, 123, 121, -90, 100, 45, 92, 57, 21, -97, 71, -87, 83, 25, -25, -104, -50, -17, 62, -103, -109, -86, 65, -17, 86, -79, 8, -37, 100, 32, -89, -62, 104, 0, -9, -51, 94, -115, -114, -5, -95, -90, 7, 110, 56, 4, 55, 117, -18, -63, 56, -95, -14, 2, 23, -10, -64, -65, 36, 52, 23, 35, -24, 41, -60, 93, 26, -68, -25, -113, -66, 27, -3, -96};
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
    msg.setTimeStamp(0.3848336071884827);
    msg.setSource(18638U);
    msg.setSourceEntity(231U);
    msg.setDestination(18887U);
    msg.setDestinationEntity(173U);
    msg.source.assign("ITVQJEMNXKRPERKNVSHFUNJIYBMXGVFONWSCMAEEARLBDCDCXAMDYUJJXJFBOMQWLZWQGQDCDUUNKMMPCATUIARRJCNKCPSLZJGZMHYTEXCWPUZTFMWYYZLXOTQSOVIIFNLVLWJUVZQKPYSRETPSQYOVWIWVFUBIXHGHESIECRSGFUGYIDOOGTGUKWKNPZZBDQIXPZEBLAJONBHJLAPKBRTSABXKRS");
    const signed char tmp_msg_0[] = {124, -12, -11, -18, 91, -102, -103, -96, 65, -25, 76, -61, 102, 71, 18, -23, -78, 109, 56, -108, -25, -116, 73, -71, 122, -69, -104, 102, 75, -127, -92, -25, 6, -40, 0, 37, 96, -112, -32, -86, -56, -5, -70, 32, -106, -18, -114, -76, 89, 53, -92, -122, -30, 45, 61, 30, -66, 81, 63, 4, 58, -20, -121, -16, -70, 37, -73, -87, 11, -87, -25, -64, -38, -126, -100, 17, 91, 47, -117, -109, 99, 88, 36, 33, 22};
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
    msg.setTimeStamp(0.8824356859262648);
    msg.setSource(65198U);
    msg.setSourceEntity(219U);
    msg.setDestination(50796U);
    msg.setDestinationEntity(45U);
    msg.source.assign("GIULQPCYFNTQQQNFYOKIRVNJEVVAZUMZNHEFYJTWHKYZICSCWXQXSMKDPFVCQAZENERFPJEMUURQYPKIAXUTDNMRFERDHLQGFFGCOHPVCWSRCTZZSRDBONKCGESDMUKMKINSIXWBLLZJLAWAJGENIDGMOKPAPHFPWJOLHHWROBBGCEPX");
    const signed char tmp_msg_0[] = {-42, -110, -49, 94, 107, 124, 66, -53, -114, 124, 70, 18, 39, 27, -74, 61, 37, -103, -84, 31, -100, 113, -90, 26, -71, -27, -57, 117, 79, -74, -7, -89, -18, 115, 80, -102, -113, -12, 36, -91, -19, -14, 52, -118, 36, 84, -52, 39, -65, -58, 93, -39, -55, -36, 65, 89, -41, -80, -6, -92, -66, 67, 29, 86, 106, 94, -26, 78, 117, 76, 89, 117, 113, 113, -63, 67, -46, -49, 5, -3, 85, -61, 113, 68, 45, -12, 72, -13, 26, -121, -38, -87, -21, -13, 122, -74, -33, 80, -119, 92, 47, -35, -60, 98, -114, -53, 11, 49, -70, -30, 22, 80, 58, -16, 0, -6, -83, -68, 46, 92, -20, 61, 87, 102, -31, -15, 114, -13, -12, 49, 63, 81, 81, 21, -40, -39, 67, -63, 56, -39, -21, 3, 13, -106, -13, -90, 71, -120, -5, 95, 117, 31, -20, 101, 68, -70, 28, -19, 3, -74, 47, 11, -108, 102, 39, 0, 14, -45, 36, 37, -96, -116, 38, -16, 125, -125, -55, -104, -56};
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
    msg.setTimeStamp(0.6395330699559634);
    msg.setSource(9803U);
    msg.setSourceEntity(67U);
    msg.setDestination(48731U);
    msg.setDestinationEntity(213U);
    msg.source.assign("USOECDFJXBNUHFKGWJTBFXJYNGWZPJDQAKMRYVHAVMQZXEPKAVVHWSCLVIRTGNQGBHIUVLXLGROZSXLVPRRWPMCLTPYGCQLAMVFCUFUOCEFRKSMBQHDWCNPWITDCDYNDMGRUSJWSIOXYQPMAYEGJPUAPUQNZWOSXOXEZBOSTHTEVPMRATYBWSSJLBILZEQHHIQNAJZKIUCEXBIFGM");
    const signed char tmp_msg_0[] = {85, -62, 69, 45, 28, -55, -115, -55, -104, -3, 77, -43, 20, 7, 75, 59, 70, -46, 82, 33, 87, 63, -107, -85, -4, -106, -65, 8, -43, 45, -74, -73, 27, -125, -109, 72, -114, -46, 77, -92, 125, -111, 62, 27, 18, 20, 64, 102, 36, 67, -30, -99, -29, 87, -39, 78, -101, -70, -106, 37, -67, -7, 52, -92, 124, -75, 27, 117, -92, 122, -102, 38, -57, 27, -46, -9, 67, -48, -72, 10, 16, 124, 125, 48, 76, 51, -80, -41, 5, 73, -120, 46, 41, -4, 119, -3, 6, -3, 93, 46, 8, -70, 49, -92};
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
    msg.setTimeStamp(0.23925039791702973);
    msg.setSource(59958U);
    msg.setSourceEntity(190U);
    msg.setDestination(28932U);
    msg.setDestinationEntity(126U);
    msg.seq = 2353626485U;
    msg.state = 65U;
    msg.error.assign("RZEEGBWYZNBVPYZSV");

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
    msg.setTimeStamp(0.5077406937026994);
    msg.setSource(58168U);
    msg.setSourceEntity(3U);
    msg.setDestination(42359U);
    msg.setDestinationEntity(35U);
    msg.seq = 901009245U;
    msg.state = 155U;
    msg.error.assign("OKNKEALYFAPJTRSDOYKIZQTYZPHJMBRKFWCTBWMVTNPYZZIDXPS");

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
    msg.setTimeStamp(0.1655692412287494);
    msg.setSource(60629U);
    msg.setSourceEntity(114U);
    msg.setDestination(51597U);
    msg.setDestinationEntity(136U);
    msg.seq = 3772397396U;
    msg.state = 82U;
    msg.error.assign("QAMKNUYCVQVYSRRUODB");

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
    msg.setTimeStamp(0.3768486394445699);
    msg.setSource(13014U);
    msg.setSourceEntity(180U);
    msg.setDestination(51750U);
    msg.setDestinationEntity(149U);
    msg.origin.assign("QTYQUJFJVIFHUVUBGJEHKASPZJMYWWGRLQLCZIHDJXINVTDVVGRKRVMQOBSVZTTDGZHRPKPFEBDLVZRACTDJSHJKKFEIISKEWNOLLZBFGWSEUWMICPCQDSQDGRHDVWEOIMM");
    msg.text.assign("JMETTDQAYETFMAXKNSGHYOHDBZDNDHFUIKNLPZUDMEPPBZZNEUARTSVCWNGXBRBHCHROQFICSCYRSYWMOK");

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
    msg.setTimeStamp(0.961400862192206);
    msg.setSource(6370U);
    msg.setSourceEntity(11U);
    msg.setDestination(10891U);
    msg.setDestinationEntity(121U);
    msg.origin.assign("RYAEMSYAOXUVZGLKSSLGBCETIROHVIUQQUYDRWMMVLDMRIQJTCNZOZUFXNHIPZCJUIFBLNN");
    msg.text.assign("WILDTHRMXKXXDRGKHIOUAVKLPLEPJNAUYVGPMMOXUOCRHRONQEBAZKWQTRNGMQMSXYCVIXQROHLXFZDHNIWMYADXPFQKBNTUVVTNUXGAMLSZQQSJVNZMOVAZDGWCJUYDZGEQNWLOIFABBHTYJREGSJJHXNGWFIILFWMBCZNSCJCHTZYC");

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
    msg.setTimeStamp(0.7202526552015966);
    msg.setSource(50581U);
    msg.setSourceEntity(91U);
    msg.setDestination(34134U);
    msg.setDestinationEntity(93U);
    msg.origin.assign("WDJERGGXLNFABRIDAOMOWQYWUKCD");
    msg.text.assign("ATMSIXCHRSJXWDALENADLCPXASGBOEZUSTTCLRYSRKTXVUQGKDGUQMEQWUGXWIAHQCVGZKFCPHNPJZHWUWTQADWRFIBBIGEZURVVNZEFHYJYWXFBKVBWFDDARNCSBUFMOVYYMHFMDJPFXIFPONYJKHKKEHUVNJVONPPERESGMUDSKTYTCMF");

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
    msg.setTimeStamp(0.5360245981414248);
    msg.setSource(4571U);
    msg.setSourceEntity(143U);
    msg.setDestination(15463U);
    msg.setDestinationEntity(132U);
    msg.origin.assign("DCZLHGBRRSUMTPZHQXYCVPAQFDLHULNIKKYQNARWBJGWMAJPDORBYLUKNUFAJXVHRYPHLBITQXPDPLRCSHQHDNOMNGQWTUTDUWHCCDKPSOCMIEYXDWEVBWKZWIOWSCDRNSCGXFNKRXTTZFZXOUMOSTBFBNKZSOFSEJODAQCKJAOJEPVOULGUEYLNMAAJGGELJIXVBUWEYZKQSVRPSEFX");
    msg.htime = 0.7142056541125925;
    msg.lat = 0.48461140247713297;
    msg.lon = 0.423764079361312;
    const signed char tmp_msg_0[] = {-27, -22, -120, -119, 120, -24, 0, 61, -10, -33, 66, 65, -17, 10, -123, -33, 4, -11, 73, 32, -83, -45, -43, -23, -104, -48, -115};
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
    msg.setTimeStamp(0.8646026736920557);
    msg.setSource(8392U);
    msg.setSourceEntity(196U);
    msg.setDestination(19887U);
    msg.setDestinationEntity(2U);
    msg.origin.assign("ZEONJXEBWYOAASKBACEIPKSIENVVWYOHTVJFAFICKKRWZUKCNSCDFQQUGRJHCEQWGXTXSFYLDEPDYMTMTFOHGAKXHOAQGWNGONYLXIBIBGPCRZDIEGSIGDPMPRBOTDRYFWZPIYEZAIOMUVMUVRUPWWOZKVLUTJVZRZLVJYLHPUDLSSAZBKUGTNJAQVJLIZLGNDFDJBTSNDSEMKCMXPFBTLCYMHQUMWFQXWQESCJAMHHNBHKRNQHPFXOJTVR");
    msg.htime = 0.7202644847872942;
    msg.lat = 0.36618723977656675;
    msg.lon = 0.8289785475207573;
    const signed char tmp_msg_0[] = {-22, -51, 93, 64, 117, -117, -90, -119, 15, -62, -66, -90, -104, -126, -55, 14, 86, -115, 18, 32, 124, 13, 57, 22, 42, 80, -107, -20, 1, 67, -95, 88, 99, -92, 120, 17, -50, 19, -18, -13, -7, 116, -93, 8, 74, 22, 10, 41, -60, 62, -46, 96, -61, 79, -106, -72, -120, -112, 18, -25, -105, 63, -8, 54, 89, -123, -33, 8, -68, 125, 74, -60, -60, -9, 82, 14, -80, -14, -65, -69, 35, -105, -96, 43, 103, -66, 18, -111, -124, -66, 77, 81, 79, -27, -19, -29, -15, -104, 111, 85, 23, 15, -79, -27, 39, 43, 76, -15, 126, 5, -37, 30, -62, 111, -45, 57, -5, 24, -95, 73, -74, 96, -109, 39, 112, -65, -106, -41, 34, 92, 94, 22, 46, 28, 125, -54, -115, -60, -119, 65, -92, 97, 122, -33, 7, 122, -104, 74, -119, 2, -54, 17, 31, -1, 33, 50, -97, 13, -42, -61, -117, -115, -56, 87, -113, -84, -106, -33, 75, 108, -111, -52, 35, 0, -76, -109, 42, -14, -2, 124, 93, 47, 69, -62, -60, -12, 124, -53};
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
    msg.setTimeStamp(0.4060322032491832);
    msg.setSource(44794U);
    msg.setSourceEntity(101U);
    msg.setDestination(55244U);
    msg.setDestinationEntity(1U);
    msg.origin.assign("YHQUQWYDZPIXNXHGMNRQPSVZWAYLGXWGAPLTNGR");
    msg.htime = 0.6250196648415189;
    msg.lat = 0.6080837983730167;
    msg.lon = 0.41311405979580806;
    const signed char tmp_msg_0[] = {-81, -102, -24, -57, -45, 13, -99, -42, 111, 115, 89, -118, -71, -13, -2, 55, -41, -118, 47, -51, 112, 35, 1, -115, 46, 70, 69, -27, 103, 27, -116, 50, -116, 114, 47, 72, 118, 13, -101, -119, -120, -19, -56, -45, 33, -41, 31, 109, -107, 38, 73, -33, 22, -113, 18, -114, -81, 74, -84, -8, -63, 104, 65, -60, -23, -12, -37, 71, -86, -12, -75, 125, 91, 44, 42, 64, -8, -44, -15, -68, 7, 62, -42, 95, 99, -27, 18, -22, -67, -18, 120, -60, -29, -30, -51, -23, 121, 29, 122, -112, -60, -122, 97, -72, 85, 106, 71, 51, 11, 12, 9, -2, -31, -97, 53, -7, -54, 31, 72, -20, 62, -103, -122, 75, 95, -49, 92, 58, 64, 94, 67, -22, 47, -32, -19, 43, -90, 26, 46, 53, 4, 108, -67, -46, -93, 104, -67, -51, -77, -9, 104, 93, 0, -111, 108, -83, 66, 88, -83, 60, 115, 48, 5, -125, -33, -103, -70, 27, -70, -17, -15, -128, -28, -24, -116, 115, -127, -95, 4, 70, -109, 111, -126, 74, 28, 41, -60, -100, -95, 40, 55, -121, 107, -96, 105, -24, 0, -89, 20, -9, -68, -76, -70, 60, -83, 98, 68, -72, 65, 17, -50, 109, 101, 10, 5, -93, 108, 86, -69, 28, 12, 28, 99, 93, -7, -119, 90, -73, 36, 87, -20, -45, -6, -56, 82, -72, 122, -76, 41, -19, 56, 90, 58, 123, -29, -1, 48, 124, 36, -43, 118};
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
    msg.setTimeStamp(0.16713872242452754);
    msg.setSource(9665U);
    msg.setSourceEntity(227U);
    msg.setDestination(31431U);
    msg.setDestinationEntity(166U);
    msg.req_id = 32909U;
    msg.ttl = 18078U;
    msg.destination.assign("NDKADLVLQRKSWGXVQHZOPUFZTOIMJIKKZLHRORSHEIYXQMEPMUDMJWBOCXPJKBOJEAVWRTHFTIHFNVXLCECRWQXEETCNMZJCYMBCKRLRVAVJUDQRTFLFUYQNWCAEEWMGBZGHQBNZBSUZVTOHBRK");
    const signed char tmp_msg_0[] = {1, -9, -1, -63, 18, -110, 122, 87, -106, 116, -116, -21, -19, -46, -108, -18, -102, 86, -31, 114, 100, -120};
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
    msg.setTimeStamp(0.6218658888526924);
    msg.setSource(1409U);
    msg.setSourceEntity(166U);
    msg.setDestination(9754U);
    msg.setDestinationEntity(109U);
    msg.req_id = 18113U;
    msg.ttl = 9489U;
    msg.destination.assign("CFFQIKJHNJCRPNWXJCLZZVNATGKXEWMAXHLJYTEMTORLLUVVJDNIVKOTSHDVGXSBUWNSHYFKGEWCJFMDXFWEJGYQREWKTVLOKTYLSFDBZRPGZSESUBJHZMRQGRPNFXBRBOCECDPTSSNCDUMAWSYUABDQZVILYQFOKBAILQIPRUBIXEHGOWJMRZWKQGQKVGOECTBHAMHGERFVNYLOMUXPOCUFYMPPHDMJSAWLIABX");
    const signed char tmp_msg_0[] = {72, 97, 56, 44, 84, 15, 29, 75, 63, -110, 44, -55, -105, -74, -65, -76, -65, 88, -81, 99, -5, 126, 92, 118, 96, -127, -112, 120, 16, 0, 50, 58, -43, 59, -58, 22, 2, 24, -22, 48, -92, 76, -78, -21, -42, -8, -81, 126, 9, -20, -78, -82, -17, 46, -55, 66, 78, -127, 87, -99, 97, 67, 32, -37, 52, 25, 36, 96, -77, 47, -75, 120, 25, -59, 36, -103, -36, 67, -48, -47, 94, -24, 52, -36, 67, -57, -72, -99, -114, -116, -51, -3, -80, -3, -65, 54, -112, 3, 35, 97, 96, 32, 75, -18, 59, 25, -7, 0, -125, 33, -88, -3, -47, -50, 55, -42, -7, 21, 87, -40, 53, -96, 95, -71, -36, 124, 26, -117, -69, 65, -119, 11, 73, -26, -101, 25, 98, -46, 110, 6, -115, 64, 2, 53, -40, -125, -41, -97, 72, -33, 22, 96, 106, 57, -83, -65, -9, 108, 24, 64, -102, 15, 15, -122, -41, 43, -46, -39, 77, -18, -114, -90, -32, 50, -49, 82, -87, -113, -98, 110, 46, -65, 43, -60, 20, 44, -106, 31, 48, -53, 111, -87, 92, 99, -79, -36, -32, 76, -87, 41, -62, 84, 20, -121, -10, -94, -37, 32, 122, -103, 13, -128, -7, -32, -30, 12, -99};
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
    msg.setTimeStamp(0.22120191203654127);
    msg.setSource(31996U);
    msg.setSourceEntity(155U);
    msg.setDestination(44375U);
    msg.setDestinationEntity(216U);
    msg.req_id = 49250U;
    msg.ttl = 12965U;
    msg.destination.assign("LRMNNKXCAYONCBBPKEKRLBCQ");
    const signed char tmp_msg_0[] = {106, 12, -113, -23, 84, -34, -44, -103, -120, 76, -122, -65, -67, -56, 68, 122, 29, -79, -22, -114, 37, 78, 43, -3, -32, -112, 55, 66, -70, 86, -82, 27, -3, -93, -108};
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
    msg.setTimeStamp(0.6134350177195329);
    msg.setSource(3686U);
    msg.setSourceEntity(167U);
    msg.setDestination(22103U);
    msg.setDestinationEntity(20U);
    msg.req_id = 7383U;
    msg.status = 57U;
    msg.text.assign("VDCSCVOAHUNOUGVHWCOUHJLBSPWQRUAQCULRMXMOIFWUOYFJUYTFYECGZBIZPTDMWLPLXPGIZXPDLXZRFBQHERNBBATCYPMOLCQAAXVGOWJYEJRDUSZRFQWTJGIGRAGDLXIAEVDHNVOLVZQZKPBPRMYERWSBZIYDK");

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
    msg.setTimeStamp(0.9402027064086763);
    msg.setSource(53728U);
    msg.setSourceEntity(96U);
    msg.setDestination(42401U);
    msg.setDestinationEntity(173U);
    msg.req_id = 52816U;
    msg.status = 231U;
    msg.text.assign("LBRGEAXYTDITYDKOTPEDUOUAXGFVMFBKIXSEUULMOLHQGCRLHDHKKMLKVDCSBZYSLIZIKGDAUDPYGQHBPUWIXWRDBTXQTOTQNBNQQVTVWZSVZRAMCDSYOCNFY");

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
    msg.setTimeStamp(0.46203279450065127);
    msg.setSource(59594U);
    msg.setSourceEntity(84U);
    msg.setDestination(5955U);
    msg.setDestinationEntity(143U);
    msg.req_id = 40719U;
    msg.status = 60U;
    msg.text.assign("LJVZMJNNXMZNHVIRTLHWDYICODWTEIFICVPFBMQABZCBQGNLWQZGIBZIDHGMNTYKLCXFQXWAVUNXUHSCFCKKUUXBTFUPRGAUM");

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
    msg.setTimeStamp(0.9889333702563966);
    msg.setSource(49067U);
    msg.setSourceEntity(3U);
    msg.setDestination(12423U);
    msg.setDestinationEntity(220U);
    msg.group_name.assign("NGHSWPEBAWPMIUHVJWLCXZUUTZREJGXYLQEKWWBOEZUZBQMUCJYCLFCSQQGAXFFMNEXKYVJJPXTMYIKHDROFLTIGCPKYRGOHEBOCAJWTSKIANHUNSI");
    msg.links = 974851423U;

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
    msg.setTimeStamp(0.13220445273493042);
    msg.setSource(53492U);
    msg.setSourceEntity(167U);
    msg.setDestination(34854U);
    msg.setDestinationEntity(177U);
    msg.group_name.assign("ZGGHYJYFTMZWQESQDVSFWZUYZHKNRANQYCFIEXISIHVQWKF");
    msg.links = 869610244U;

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
    msg.setTimeStamp(0.13941721413075103);
    msg.setSource(17580U);
    msg.setSourceEntity(202U);
    msg.setDestination(19323U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("GZRUMPNEOPJWJEJECVXHPNQROUKHDXMJERTCBMCHBBIABBARNSBNNXXBVKPFNQYQWLDKRRUVZVYJHUCPKFRZHUXASKJOUAYADZSGEARLPDJZMFEPOSFLDKGHJIIYQGQECSKVIIOQEWGLZDJTSMF");
    msg.links = 1608068174U;

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
    msg.setTimeStamp(0.7538610178035111);
    msg.setSource(32716U);
    msg.setSourceEntity(52U);
    msg.setDestination(63296U);
    msg.setDestinationEntity(192U);
    msg.groupname.assign("YBTZTIFFEHKMTPAMTZSGGFKUJML");
    msg.action = 3U;
    msg.grouplist.assign("UVFUDRPBCWTTINJPLIRZVBZQAWPPUAJUITDYRGGNYAKJREHBNEYCWLKXZFXGDMVURMMMKHYKMBVQHQTEWJSLDPYHYBPAOPFHMTACBLFJNBSAKICXEWGKOFMXCSFGDXJFVLQONPON");

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
    msg.setTimeStamp(0.27339576136411503);
    msg.setSource(34102U);
    msg.setSourceEntity(86U);
    msg.setDestination(44350U);
    msg.setDestinationEntity(171U);
    msg.groupname.assign("AGIHWWCKIPVNXICUXOZVCTPXFFMAWDYQCIIBHGFWWZXKRKVFASQXRDOBRZDEKPLNLJQTMLUHJGMXJSEDAWDZCAOGHQVNINPQOUCKEXBFKCXKVGIEQCNAYIHDELACRBZAYUT");
    msg.action = 114U;
    msg.grouplist.assign("MKXSVQPSWTMUEXVIJEBBWUHSLMTZSDHWXPLJMCUSQWZAXREKHMBHIYVPXKIYODOYROCJQNQKXZWTCQAQDZSCPLGERLOLAFDYNFGTHIFPPZGZJEDZEICSXXNKUVNRMUBVGGIWEKLJULTHRYCYFBXDLNFVPAONUVSASOCYNHGRPQCGOJDMYJYEEMEJKLMIQNZFXGZIVAWBUKWJAMIONVQTBYIONTCTTJBH");

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
    msg.setTimeStamp(0.059344698219071845);
    msg.setSource(58997U);
    msg.setSourceEntity(69U);
    msg.setDestination(13065U);
    msg.setDestinationEntity(208U);
    msg.groupname.assign("KEULPNXSYOWRSQKRITGYNNXSZWAGCGXEMGCRIFYODHJHQJB");
    msg.action = 230U;
    msg.grouplist.assign("GNLHKAXIJEONBCFBSUHZTXNVARNQCVDHONRVCRJCXBRGKOZOBPFJFGXRLVZQJWQD");

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
    msg.setTimeStamp(0.9884296539953006);
    msg.setSource(47478U);
    msg.setSourceEntity(32U);
    msg.setDestination(46357U);
    msg.setDestinationEntity(229U);
    msg.value = 0.8936601178567696;
    msg.sys_src = 57933U;

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
    msg.setTimeStamp(0.2393141432219128);
    msg.setSource(36376U);
    msg.setSourceEntity(38U);
    msg.setDestination(40718U);
    msg.setDestinationEntity(145U);
    msg.value = 0.49333550766684175;
    msg.sys_src = 29520U;

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
    msg.setTimeStamp(0.012351401164842568);
    msg.setSource(42127U);
    msg.setSourceEntity(237U);
    msg.setDestination(56707U);
    msg.setDestinationEntity(85U);
    msg.value = 0.5459093402928031;
    msg.sys_src = 41668U;

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
    msg.setTimeStamp(0.7668775892848166);
    msg.setSource(56934U);
    msg.setSourceEntity(174U);
    msg.setDestination(48656U);
    msg.setDestinationEntity(4U);
    msg.value = 0.26577072545339075;
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
    msg.setTimeStamp(0.09605094103972645);
    msg.setSource(60514U);
    msg.setSourceEntity(76U);
    msg.setDestination(38871U);
    msg.setDestinationEntity(172U);
    msg.value = 0.3774793520940505;
    msg.units = 39U;

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
    msg.setTimeStamp(0.8916514508865088);
    msg.setSource(27126U);
    msg.setSourceEntity(78U);
    msg.setDestination(9326U);
    msg.setDestinationEntity(103U);
    msg.value = 0.7120287838673862;
    msg.units = 12U;

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
    msg.setTimeStamp(0.6428034429356551);
    msg.setSource(24819U);
    msg.setSourceEntity(223U);
    msg.setDestination(54327U);
    msg.setDestinationEntity(53U);
    msg.base_lat = 0.4142157710155421;
    msg.base_lon = 0.6234614234372249;
    msg.base_time = 0.22683716015296562;

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
    msg.setTimeStamp(0.10789286959249467);
    msg.setSource(54565U);
    msg.setSourceEntity(179U);
    msg.setDestination(43744U);
    msg.setDestinationEntity(49U);
    msg.base_lat = 0.664306645502649;
    msg.base_lon = 0.5055196045199067;
    msg.base_time = 0.022592878657735627;

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
    msg.setTimeStamp(0.020391293974971747);
    msg.setSource(33085U);
    msg.setSourceEntity(109U);
    msg.setDestination(47118U);
    msg.setDestinationEntity(150U);
    msg.base_lat = 0.9457507909319159;
    msg.base_lon = 0.6858367391474682;
    msg.base_time = 0.7882368404401281;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 20346U;
    tmp_msg_0.destination = 37404U;
    tmp_msg_0.timeout = 0.5826606502694498;
    IMC::SetEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YVEEKZLIJSAUNPRMWPSYJMSMQMTNKMUZCXIHHXHYFBOKBVLBAODTJCQOILDXRFVFCPNPIJYSBZRGEJTLHERITGTFTZUOZATDQHNAWSEXTIMDUANINLGRXSVOZWLQMCGGGXFBCYRACKLDKTGDJLWKPFXSPMYZPWQVZHBZQSHQWUVRBAWYFNVVFIPKDUKWOXEBVAOHCSUNZBWXEPNWXAEHDILYVUOGSQCJGOHEDCUYNMMRPBAOJRGFCTQUDEKYK");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("APBNWGNHYYWZDXXWZKSTBIPPSIBYFFUQGXVATUOEIMZQOHSMUOBBRNUQYMMRBIKSTPFWWRCNCIGVLKSQIRMLDJZGJDAAOWBLJGDBQCQANDJOAPYUFHRJCTGNAXLVRVZDSQJSDDYUNFXZVACYKVNGT");
    tmp_tmp_tmp_msg_0_0_0.value.assign("URJLWHRQJLZSHDXLEAUJEMPQFJPLXZCDINNWCLTBAYGVJKHMUZHAEGSZKVVVJWRSHFYQUORFOXARXBPCOVNFSIPTHJWACOKBBPYLOJTBKEZKNQRQZFOGXYMWKTVEXTYOYISPPYEYGFSSVWWAASMQDEZFCNCBZMNSIRWGNVDIXNAVBUQRNATZMGMCGQYUKFZIRMIWKMUYGLQXFIVOE");
    tmp_tmp_msg_0_0.params.push_back(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.4747360766765999);
    msg.setSource(42807U);
    msg.setSourceEntity(0U);
    msg.setDestination(50222U);
    msg.setDestinationEntity(89U);
    msg.base_lat = 0.7572038932014128;
    msg.base_lon = 0.6029693793554609;
    msg.base_time = 0.5391117463228607;
    const signed char tmp_msg_0[] = {68, 93, -81, 30, 121, -2, 53, 60, -103, 40, -53, 52, -48, -99, 81, 87, 22, -5, -8, 14, -90, -29, 9, -92, -74, 29, 107, 100, -82, -17, 11, -86, -24, -45, 69, 77, -1, -115, 66, -96, 108, -122, 50, 105, 62, -5, -81, -47, 93, -102, 11, -85, -44, -63, -18, -25, 91, 35, -89, -7, 37, 55, -91, -4, 106, 42, 74, -43, -65, 65, 116, -72, 89, 119, -63, 31, 104, 75, 74, 61, 58, -13, -106, -30, 4, 86, 114, -40, 35, -118, -46, 101, 56, 74, -91, 110, -114, 79, 108, 6, 90, 0, 77, -122, 70, -21, -47, 84, -99, 97, -65, 121, -102, -52, -112, -95, -55, -61, -63, -89, -69, -37, 69, -90, 0, -1, 63, 22, 46, -107, -118, 29, -124, 39, -74, 104, 40, 6, -22, -94, -37, -48, -28, -31, -95, -17, 112, 57, 75, -120, 54, 118, -83, -71, -50, -14, -82, -85, 48, 17, -11, 96, 68, 65, -62, 59, 35, -19, 60, -116, 89, -19, -38, -49, 21, -32, 33, 83, -114, 23, 49, 94, -95, -39, 3, 9, -115, -49, -99, -15, -117, 90, 35, 124, 42, -32, 113, 113, 6, 60, -24, 114, -104, 68, 102, 33, -28, 124, -62, 4, 63, -114, -103, 48, -112, 49, 76};
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
    msg.setTimeStamp(0.8517363231229417);
    msg.setSource(37723U);
    msg.setSourceEntity(107U);
    msg.setDestination(17246U);
    msg.setDestinationEntity(86U);
    msg.base_lat = 0.41977719473744135;
    msg.base_lon = 0.8119910276124673;
    msg.base_time = 0.5753505391466501;
    const signed char tmp_msg_0[] = {69, 16, -94, 60, 93, 37, -53, 43, 18, 43, 123, 107, -33, 113, -64, -99, -115, 96, 8, 15, -96, -25, 106, -118, 81, -77, -3, -79, -50, 59, 98, -107, 89, 56, 22, -3, -86, -50, -102, 118, -32, 52, 73, 113, 117, -81, 77, -54, 71, -14, 23, -80, 72, -119, 92, -109, -49, -56, -20, -105, 47, 53, -62, -51, 93, -115, -128, -88, 25, 35, 118, 57, -28, -10, -81, -55, 78, 24, 64, -42, -111, 73, 69, 38, -25, -76, 4, -72, -103, -73, -109, -21, 90, 111, 16, -70, 9, 100, -110, -68, -3, -108, 13, -14, 24, 102, 70, -8, -50, 33, 11, -51, -69, 29, 25, 49, -55, -124, -122, 5, -35, -107, 125, -15, 76, 45, 120, -22, -110, -77, 94, -52, 113, -58, -34, 15, -8, -96, -62, -99, 92, 102, -67, 92, 25, 88, -14, 25, 112, 42, -65, -92, -104, 18, -25, 73, 56, -16, 53, 4, -25, 103, -99, -22, 5, 37, -43, -89, -20, 44, 15, 92, -84, 15, 17, 66, -80, 15, -56, -108, -118, 60, -23, -18, 52, 120, -92, -115, -38, 27, 104, -60, 25, -115, 0, 77, -82, -68, 21, -128, 34, 24, 35, 14, -64, -64, 49, -78, -35, -77, 126, -95, 18, 100, 124, -54, -82, -66, 111, -86, -117, -113, 74, 56, 71, -93, -86, -127, -91, -30, 124, 17, 69, 86, 66, 125, -65, -4, -64, -46, 1, -53, 31, 83, 17, 43, -34, 34, 5, 86, -4, -28};
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
    msg.setTimeStamp(0.32274436223057257);
    msg.setSource(43036U);
    msg.setSourceEntity(208U);
    msg.setDestination(59319U);
    msg.setDestinationEntity(11U);
    msg.base_lat = 0.9277954412200775;
    msg.base_lon = 0.10324918269162198;
    msg.base_time = 0.9295232982869333;
    const signed char tmp_msg_0[] = {-128, -95, -124, -68, -15, -23, 96, 95, 118, 101, 4, 113, -4, -103, 75, 68, -101, -117, 84, 21, 36, -30, 85, -101, -107, 67, 10, -76, 5, -4, 1, 83, -52, -27, -52, -21, -74, 4, -36, 126, 124, 60, 113, 31, -28, 30, 83, 101, -99, 90, -62, 0, 5, 51, 55, -77, 42, -10, 11, -47, 45, 19, -87, 119, 111, 67, -40, 114, -114, 29, 63, -36, -112, -81, 105, 111, 21, 126, -7, 55, -56, 80, -24, -126, 41, -75, 4, -101, 33, 10, 36, -87, 89, 47, -121, -89, -102, 37, 31, -89, -42, 72, -30};
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
    msg.setTimeStamp(0.15553129311447034);
    msg.setSource(38879U);
    msg.setSourceEntity(152U);
    msg.setDestination(51240U);
    msg.setDestinationEntity(185U);
    msg.sys_id = 5753U;
    msg.priority = 13;
    msg.x = 10246;
    msg.y = -22222;
    msg.z = 13583;
    msg.t = -21087;
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("KEYYRJAAOGNIQOVJOYGENFHKMTJJTXWHGMDRDIKTTICNTVOWGJTFZAIWEVFNVRHYNWBPNVMWEFFAEJWFJYZWDKURQKDLOCJNCQMPBAGXSLCSCFQNUSFR");
    tmp_msg_0.x = 0.9789880623151076;
    tmp_msg_0.y = 0.9462471549707613;
    tmp_msg_0.z = 0.2961971927788355;
    tmp_msg_0.n = 0.44283744882093845;
    tmp_msg_0.e = 0.19022113663842588;
    tmp_msg_0.d = 0.1422318261514851;
    tmp_msg_0.phi = 0.3607375387484113;
    tmp_msg_0.theta = 0.33875401384774084;
    tmp_msg_0.psi = 0.7749121757340331;
    tmp_msg_0.accuracy = 0.9413738408823537;
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
    msg.setTimeStamp(0.9865378788348057);
    msg.setSource(10927U);
    msg.setSourceEntity(36U);
    msg.setDestination(37172U);
    msg.setDestinationEntity(204U);
    msg.sys_id = 36840U;
    msg.priority = 39;
    msg.x = 18423;
    msg.y = 25220;
    msg.z = -23649;
    msg.t = -6015;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 120U;
    tmp_msg_0.quality = 157U;
    tmp_msg_0.reps = 254U;
    tmp_msg_0.tsize = 82U;
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
    msg.setTimeStamp(0.2489410283764656);
    msg.setSource(58706U);
    msg.setSourceEntity(68U);
    msg.setDestination(53294U);
    msg.setDestinationEntity(52U);
    msg.sys_id = 22312U;
    msg.priority = 57;
    msg.x = -21238;
    msg.y = 11045;
    msg.z = 1884;
    msg.t = -17738;
    IMC::FluorescentDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.6478853971679155;
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
    msg.setTimeStamp(0.31121462768189023);
    msg.setSource(40320U);
    msg.setSourceEntity(202U);
    msg.setDestination(20254U);
    msg.setDestinationEntity(22U);
    msg.req_id = 2200U;
    msg.type = 71U;
    msg.max_size = 22528U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.32222311130324255;
    tmp_msg_0.base_lon = 0.3434124398364856;
    tmp_msg_0.base_time = 0.7603447894504871;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 49281U;
    tmp_tmp_msg_0_0.priority = 41;
    tmp_tmp_msg_0_0.x = 20795;
    tmp_tmp_msg_0_0.y = 18392;
    tmp_tmp_msg_0_0.z = -29524;
    tmp_tmp_msg_0_0.t = -27119;
    IMC::AutopilotMode tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.autonomy = 97U;
    tmp_tmp_tmp_msg_0_0_0.mode.assign("FQYRCZMKZEZLTIZMIPZXWUPPECTNMRGVNSHUTXGDDALCWHSHJDQGRYUHBNCOVYBQANRDWSRIXOOQWHUHIHFCAJFBVFXMZPZZPKLOQVPQRYUDKSHSMXEKVKFTNEQYDJPBAABBRJYSLVJLJRGYXYIJKNWILALLMOOWLZWGPGSKQCVOU");
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
    msg.setTimeStamp(0.08232792537470746);
    msg.setSource(60319U);
    msg.setSourceEntity(202U);
    msg.setDestination(10430U);
    msg.setDestinationEntity(0U);
    msg.req_id = 4229U;
    msg.type = 58U;
    msg.max_size = 7786U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.3746539897663498;
    tmp_msg_0.base_lon = 0.9654963660434961;
    tmp_msg_0.base_time = 0.4968075565996397;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 7092U;
    tmp_tmp_msg_0_0.destination = 39213U;
    tmp_tmp_msg_0_0.timeout = 0.6133487108095924;
    IMC::Takeoff tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.4271599944342568;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.941859752520012;
    tmp_tmp_tmp_msg_0_0_0.z = 0.036851318905586905;
    tmp_tmp_tmp_msg_0_0_0.z_units = 47U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.6969289576327979;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 157U;
    tmp_tmp_tmp_msg_0_0_0.takeoff_pitch = 0.34140793622592047;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FYLWAWZHGWHGMUDWTFQIMVXNWJJBIMNZREYDDJKVOHIQMGWVOZVSASNSMPMAAUKTDTLGELPWZLCZLUXNHQKFWXWBTPVPKFBSKUMRGPSXAHUJOROBQYDPHKZOFHUCBJCRLVVDBONFMVQSISCZMQPAKOCSUVXTJGYTFC");
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
    msg.setTimeStamp(0.3118559323427814);
    msg.setSource(18207U);
    msg.setSourceEntity(134U);
    msg.setDestination(39081U);
    msg.setDestinationEntity(166U);
    msg.req_id = 59097U;
    msg.type = 74U;
    msg.max_size = 15399U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8874696915809215;
    tmp_msg_0.base_lon = 0.5753959009173366;
    tmp_msg_0.base_time = 0.5587454418403013;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 48422U;
    tmp_tmp_msg_0_0.priority = 84;
    tmp_tmp_msg_0_0.x = -22751;
    tmp_tmp_msg_0_0.y = 3514;
    tmp_tmp_msg_0_0.z = 3086;
    tmp_tmp_msg_0_0.t = -17197;
    IMC::Magnetometer tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 7743U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.4818529071775026;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.08718066849038941;
    tmp_tmp_tmp_msg_0_0_0.z = 0.2167899342440902;
    tmp_tmp_tmp_msg_0_0_0.z_units = 130U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.7404194712951274;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 31U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.5311807850498914;
    tmp_tmp_tmp_msg_0_0_0.width = 0.31889243771187903;
    tmp_tmp_tmp_msg_0_0_0.direction = 130U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ZNHONSEHSEXIWITQUUGOAZRXDXF");
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
    msg.setTimeStamp(0.7786902649775291);
    msg.setSource(2695U);
    msg.setSourceEntity(89U);
    msg.setDestination(18755U);
    msg.setDestinationEntity(32U);
    msg.original_source = 65316U;
    msg.destination = 50960U;
    msg.timeout = 0.3415868412820884;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 228U;
    tmp_msg_0.text.assign("NIVFGISBGVLUVRBZGFKIUYRWCJYMELEIBNXWUONZQRQMQPGINCKSOHAQYZNTLNDOCWWVEIWZSXNATLGFNEASDYADHUJSEMGXIACTMKHLLHLOQMVDTCRPAHCXRQYPACJROFRHTJOZIDDXCSXYSSJPZKDZTPJXWUEGYUMKBKZVXGDJPRKFBJUMPFPSWGDFOWTHEBL");
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
    msg.setTimeStamp(0.43148350558909576);
    msg.setSource(40442U);
    msg.setSourceEntity(96U);
    msg.setDestination(31981U);
    msg.setDestinationEntity(81U);
    msg.original_source = 53165U;
    msg.destination = 4960U;
    msg.timeout = 0.14821308697207092;
    IMC::SatelliteStatus tmp_msg_0;
    tmp_msg_0.req_id = 44675U;
    tmp_msg_0.status = 191U;
    tmp_msg_0.info.assign("UPAYDSVOKDXBBSBEJGTNNLFUEBVRWXGFVNPWPXC");
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
    msg.setTimeStamp(0.4486812414774781);
    msg.setSource(14887U);
    msg.setSourceEntity(180U);
    msg.setDestination(17493U);
    msg.setDestinationEntity(46U);
    msg.original_source = 31288U;
    msg.destination = 24201U;
    msg.timeout = 0.6132849110628579;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.6963866347689008;
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
    msg.setTimeStamp(0.4162023031548364);
    msg.setSource(8883U);
    msg.setSourceEntity(191U);
    msg.setDestination(63732U);
    msg.setDestinationEntity(147U);
    msg.type = 26U;
    msg.comm_interface = 8957U;
    msg.model = 16561U;
    msg.list.assign("ZMXRUGTZLEKOFPTHNBGHMDVGOIUCFZROPEVLEVOSIDFYQCMZVDUOHWYRKZIDMCNSEKRYHMOXAAJWFLEJRCMQVAEIOXTUGYSNRGHDBAMLQUPVDBZPTLRHWTKWIXFIQTOTASJNBJTCWEMBLYOJLFUKHKQNAF");

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
    msg.setTimeStamp(0.05731337974075179);
    msg.setSource(43165U);
    msg.setSourceEntity(176U);
    msg.setDestination(50488U);
    msg.setDestinationEntity(9U);
    msg.type = 103U;
    msg.comm_interface = 13950U;
    msg.model = 49026U;
    msg.list.assign("QLKFWZFTQFLSTSNKURFDOTJXEABOBVWHJKLOB");

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
    msg.setTimeStamp(0.05177310374918864);
    msg.setSource(44267U);
    msg.setSourceEntity(231U);
    msg.setDestination(48303U);
    msg.setDestinationEntity(187U);
    msg.type = 59U;
    msg.comm_interface = 7829U;
    msg.model = 65394U;
    msg.list.assign("QHJSCMUHFLCRWVONKEVMHUHGEPOPFUVVFBSPFVREIWYQUSMGEK");

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
    msg.setTimeStamp(0.7196491074594916);
    msg.setSource(18360U);
    msg.setSourceEntity(109U);
    msg.setDestination(58681U);
    msg.setDestinationEntity(127U);
    msg.type = 146U;
    msg.req_id = 527061072U;
    msg.ttl = 40590U;
    msg.code = 200U;
    msg.destination.assign("BUDZIRQCVHWOPYWHNMOVFUKSOYQAWQBNPYEVBYSEQKJGKNYRMLLAEBGPUJBGKGCKSRXTGPYJZQWNARXTTAPHLBSMYJFVZIVMUWKRGOCPOJVXMEFEKKNUJASCWALRODBVBUILLSCIWHBIXJDFAXGJITOIMCBCJVPNJWCURAEXILQGYHHNDQLSFYZTNUFWPNZVCOLHQGIMSHQKXVRODLAXT");
    msg.source.assign("XWDVKEJOAWIFDYXFONUZLIXEHARVGNRRWXAXOBKMRYHFGRHJALTEGKOPMYFIPOMZCQMNTBSLBBWCQSULWXDDPWSLZEBRVGNWYQQSEYFFTYUGSJRQZARLJQHQJJTKCTIHLYIBPBCXAPLEZYCKVJKOESPKVMXOUHITURLAILFQFPGIPFVWFWMUJDSWNYECBSCMDVZDVSTUNGMOKAYUTJZCVDDTXEEHU");
    msg.acknowledge = 148U;
    msg.status = 112U;
    const signed char tmp_msg_0[] = {3, -49, -64, 120, -123, -93, -71, -19, 41, -81, -57, -124, -69, -21, 8, -96, 39, -46, -49, 36, 45, 42, -92, 108, -69, -62, -79, -84, 48, -96, -63, -69, -113, -2, 75, -71, -96, -60, 97, 109, -6, 87, -48, -1, -95, -118, 58, -127, 109, 35, 60, 96, -76, 81, 96, -100, 16, -77, -91, 24, -34, -105, 17, -104, -64, 57, 58, 51, -102, -75, -80, 80, -68, 104, 1, -115, 58, 70, 9, 107, 98, 51, 86, -69, -49, -94, 126, -42, 25, 33, 3, 38, -103, 77, -26, 94, -32, -97, 55, -103, -107, 52, 54, -14, 62, 48, -75, 95, 33, 10, 29, 53, 27, -99, -120, 64, -46, -81, 4, 102, 98, -45, -20, 56, -110, -69, 17, 8, 125, -14, -67, -67, 27, -58, 81, 5, 5, 70, -7, -19, -122, -15, 3, -73, -69, -75, -65, 89, -101, -1, -119, 52, 37, 6, 110, -103, 125, -64, 92, -18, -75, 125, 4, -31, 34, 105, -11, 58, -34, 13, 48, -37, 35, 11, 110, 49, -38, 9, 46, -67, -91, 119, 66, 26, 117, -8, 56, 30, -103, -15, -93, 118, 124, -50, -26, -52, 89, 120, -82, -8, -16, -117, 50, 85};
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
    msg.setTimeStamp(0.29066765002913697);
    msg.setSource(35530U);
    msg.setSourceEntity(205U);
    msg.setDestination(9205U);
    msg.setDestinationEntity(44U);
    msg.type = 176U;
    msg.req_id = 4244855868U;
    msg.ttl = 17412U;
    msg.code = 140U;
    msg.destination.assign("AMPIVXTURYYVPOQEZQSQODPFYFTTPVVOCVEUPXXJRBQTEOPMXOOAPIXFUNSCRQTQNBLYUXLTAHLXTRWPBHLGJAUBKY");
    msg.source.assign("RVRSALCTOZESOFPXDLEBNUZGBTKWPUBFGQKACUXWTTISJXZVJKMFJKTYUBWMCNODYDRAGMEUJQPDIKXIGHEDIHMJGGMDBYJTVRHOQULBNKUNTWPKRFDILWJROPBUMSGJUVMSHWQXOYCUPVCFIBPFXASLDIQAAQEGPHJVLVSYEEL");
    msg.acknowledge = 132U;
    msg.status = 110U;
    const signed char tmp_msg_0[] = {74, -2, 82, 93, -81, -43, -84, -60, 73, 54, 77, -73, 98, -63, -18, 101, -109, 126, 32, 114, 115, -56, 72, -31, 70, -28, -65, 46, 104, 104, -63, 67, -24, 44, 25, 123, 111, 103, -13, -118, -42, -103, 112, -88, 104, -77, -38, -118, 64, 32, -111, -37, 77, -29, -76, 113, 9, 23, 56, 0, 126, -1, -54, 51, 81, -2, 32, 83, 125, -80, 79, 59, 81, -55, 100, -117, 97, -29, 23, -68, 17, -48, -111, -29, 50, 126, 13, -95, -24, -41, -43, -22, -8, -102, -36, -59, 104, -109, 93, 44, -97, 24, 57, 33, 61, 75, 112, 83, -53, -38, 60, -15, 28, -122, 87, 86, -38, 60, 11, -62, -122, 52, -95, -114, 90, 0, -16, -119, -6, 117, -93, -54, -78};
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
    msg.setTimeStamp(0.9322341830369966);
    msg.setSource(39666U);
    msg.setSourceEntity(25U);
    msg.setDestination(31561U);
    msg.setDestinationEntity(220U);
    msg.type = 249U;
    msg.req_id = 3682657372U;
    msg.ttl = 21731U;
    msg.code = 245U;
    msg.destination.assign("IQZMRDTROTUPEXDVSPTYDCTBCLZBIPGRKHGYYQMEXJGOFMRGFSYUHBCMTWNDUYFWSCUGFYLRQELWEHAEBVYLEWOEQOBXVUXAKOGQDIMDXJAHKAFCVLBLJNBXATCYRWPOMILFLKZBHICGCKWINZKQNIFRCSFHNPJVAWZPMHXSPKOVMQOTWVMUFPAZUPGVGLZXNUUTDIIHSZSOJWRXEOSNKJFBYSGVKXHHVKUW");
    msg.source.assign("UEJUHSNHRNVZAPJKPCRHZKNKTNECKXPYBGJRJOISDSMVXPFPQVAIZL");
    msg.acknowledge = 54U;
    msg.status = 216U;
    const signed char tmp_msg_0[] = {-101, 9, -60, 12, -58, 16, -111, 26, -88, -19, 44, -90, 74, 100, -55, -103, 4, 43, -64, -93, 8, -1, 16, -95, -113, 38, 89, -68, -49, -124, 45, 126, -115, 102, -107, 116, 54, 14, -75, -21, 57, -89, -25, 36, 45, 58, -36, 15, -118, 85, -39, 58, -27, -73, -19, -44, -114, 20, 2, -125, -128, -70, -60, 115, 122, 98, -34, 44, -108, 79, 110, 12, 63, -63, 20, 60, 3, -21, -57, -52, -69, 45, -80, 30, -103, -118, 121, 59, -19, 113, 122, 48, -122, 16, 85, 93, 35, 93, 51, 124, 12, 41, 34, 3, -26, -40, -118, 119, -76, -64, 41, 51, -34, 37, -84, -81, 36, -119, -65, 73, 60, 33, 115, 40, -95, -24, 102, 114, -10, -34, 87, 23, 51, -91, -88, 124, 64, 122, -125, 112, -37, -1, -95, 65, -61, 49, 24, 88, 50, -43, -67, -50, 21};
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
    msg.setTimeStamp(0.5966001006512791);
    msg.setSource(43709U);
    msg.setSourceEntity(228U);
    msg.setDestination(29961U);
    msg.setDestinationEntity(177U);
    msg.id = 165U;
    msg.range = 0.2345748546759533;

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
    msg.setTimeStamp(0.7604873707137904);
    msg.setSource(37334U);
    msg.setSourceEntity(18U);
    msg.setDestination(10190U);
    msg.setDestinationEntity(151U);
    msg.id = 175U;
    msg.range = 0.9326245640581571;

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
    msg.setTimeStamp(0.11794002053782049);
    msg.setSource(4887U);
    msg.setSourceEntity(243U);
    msg.setDestination(57015U);
    msg.setDestinationEntity(110U);
    msg.id = 33U;
    msg.range = 0.5457613539654541;

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
    msg.setTimeStamp(0.8770382794475952);
    msg.setSource(21009U);
    msg.setSourceEntity(115U);
    msg.setDestination(21415U);
    msg.setDestinationEntity(239U);
    msg.beacon.assign("GSAQJYLJTQPLDGPAWEIXNXEARJFKDZUXVZFWFTXFBLFAXRPBEWYNALTCPCSFIDSWUVMZHHAVBAPOGTWXCOTNZFOQUOHOWRBLKOUINGKSZYJHGUKEEJVQZYKQIDFKTBIQSMMCQCJRPRGNLNRJUKMVRICQSDYYV");
    msg.lat = 0.20540254842173256;
    msg.lon = 0.42278551982685175;
    msg.depth = 0.163612598011586;
    msg.query_channel = 43U;
    msg.reply_channel = 147U;
    msg.transponder_delay = 27U;

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
    msg.setTimeStamp(0.6880964194783276);
    msg.setSource(51487U);
    msg.setSourceEntity(138U);
    msg.setDestination(49266U);
    msg.setDestinationEntity(63U);
    msg.beacon.assign("PHXDKTLCZEIZOPAOGUDWETXZQFFCOZWBMVYFGQSLMYVWHLSRNAFQNOBBPPGKYUAQNOKODGFTTBHRILAOMNRYWSQQJVXDATMIFXVVBRBDXHGBAWQDVKYGTCQYCNRUXLQULNNDXEJCEIWISRDRFGNOYHOHZMUCWCISXHTEUPYKKPZOMXVZKTJZISSFEVGKISWKXMHVYHWSGDBJCQURCDJIKTELUPJBZGLAYTHNBULMEEZSUJRAPPJAJAPMMFIFN");
    msg.lat = 0.11665755539495659;
    msg.lon = 0.9214545267390365;
    msg.depth = 0.22978191713820884;
    msg.query_channel = 141U;
    msg.reply_channel = 40U;
    msg.transponder_delay = 30U;

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
    msg.setTimeStamp(0.0239582012959626);
    msg.setSource(40956U);
    msg.setSourceEntity(119U);
    msg.setDestination(6190U);
    msg.setDestinationEntity(238U);
    msg.beacon.assign("RXZYXDNAECFOZPRSCJULBYUCMUVZQCFYDYZBVAYVQZNMRGMWAHRBVOWSJEUDWWKSSTUIQXBFCOQQVBFOGHBKHGJURXVRKKHXLTMDJWLAAKOZLYFPOWWEXBIPOULQKSLJDLSHSIMWSCCIGFPFEJMLOPENGKTEBKHCDSSMZIDNRXHQNNHVPHQFLDPRDJFUGIPKPBHTZGBZITMGGT");
    msg.lat = 0.9316393944730897;
    msg.lon = 0.39253220098157937;
    msg.depth = 0.9929220854873578;
    msg.query_channel = 65U;
    msg.reply_channel = 100U;
    msg.transponder_delay = 206U;

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
    msg.setTimeStamp(0.7661396443126044);
    msg.setSource(34744U);
    msg.setSourceEntity(234U);
    msg.setDestination(4483U);
    msg.setDestinationEntity(207U);
    msg.op = 136U;

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
    msg.setTimeStamp(0.05231484151752741);
    msg.setSource(47461U);
    msg.setSourceEntity(197U);
    msg.setDestination(17702U);
    msg.setDestinationEntity(23U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.4094416431353063);
    msg.setSource(40767U);
    msg.setSourceEntity(224U);
    msg.setDestination(4240U);
    msg.setDestinationEntity(158U);
    msg.op = 41U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OVESEYEABRXUIPCEXPDMKUHTBFCSDDIPSHTUBGTFLSRCAURLHHZWIOCSXFRDGBLVIXDMLPBOVNWOVQXUJNWLMJYPCQUEPNPKHYOLYECCYZQDYMZPPJLDOOGNMJQAEHUTTQKBRAMVGKIOVRMXQWSIMKKVTOGPTBSYYWGUIQFCMEVXRJZNFNQTBLTSFKEVONNABWRKJQFWF");
    tmp_msg_0.lat = 0.6031847440074329;
    tmp_msg_0.lon = 0.18732861720522131;
    tmp_msg_0.depth = 0.29633165076089496;
    tmp_msg_0.query_channel = 91U;
    tmp_msg_0.reply_channel = 232U;
    tmp_msg_0.transponder_delay = 192U;
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
    msg.setTimeStamp(0.11279623217302126);
    msg.setSource(39119U);
    msg.setSourceEntity(94U);
    msg.setDestination(32234U);
    msg.setDestinationEntity(175U);
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("XFLJNVMIIMBPDZXYRTLZHOYFQGUOGQTOOPGFGZSTDASHCNIPRLRCIWMLYBBFEKWHDTMEHNYPDLAARUUFFRKFQAMKJJWNRPCATKPEDKUAUIMBYPTEBJHXISBQRWYWZ");
    tmp_msg_0.dest_man.assign("BMSWJANLHPUCBRZMFYHNTCKTLBCRQZVCQZYCRRIUZFGSKS");
    tmp_msg_0.conditions.assign("DELZGRNSUGAGKERRWHKLJTUBQUIXNOPSQBHTZSHLUUFGYVAEELACXIXWEFNFQMTJBUJZGAPLEUDJVWSDBMWWVYQNZLWNCCELAUAQLSBOCOCVITRNJBYINPHAMDYIVKKQALHZAGCOEXNMO");
    IMC::Event tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.topic.assign("PGTHSKWOQSCVYBQRNLTBLNXIIOJSZYJPJVYQNIXKJEPIEOEIRAMIXZKGSONXXAQGVVQMJZRFDHTKRWUDAGLLOFDBVPKPAYHSSBGEXEKYUNWDUDOTGFLQEWLAXNVYJBHJSQBIUNMISWDHXMVHTNZIPPKCMWWGWMRFPKQBVLGITMDNJRCRFDVBLCRYOZFMCRUOCAGZTPJMAULVESLTC");
    tmp_tmp_msg_0_0.data.assign("TBQJTWLSXEXRAAOTFDKMRHLHXKSCFIWHNMHNIREJTVNJMJRUPJJGPKSDXENQYETZSAWIDZDKVWBZBFGXVQSQPFPBYDEAFECIOCJIZRDAVHPKQGCLWCBUTUOKUDYIIXVPRRALCKWUMKEOIYDLFRX");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.442016244420259);
    msg.setSource(5249U);
    msg.setSourceEntity(80U);
    msg.setDestination(46153U);
    msg.setDestinationEntity(221U);
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.8398467224312136;
    tmp_msg_0.amp = 0.6313867236386201;
    tmp_msg_0.cor = 73U;
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
    msg.setTimeStamp(0.8014365829537525);
    msg.setSource(1471U);
    msg.setSourceEntity(171U);
    msg.setDestination(48221U);
    msg.setDestinationEntity(131U);
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 38U;
    tmp_msg_0.lon_gain = 0.19962046416399626;
    tmp_msg_0.lat_gain = 0.9669432703011251;
    tmp_msg_0.bond_thick = 0.5722068070481446;
    tmp_msg_0.lead_gain = 0.2797156746327968;
    tmp_msg_0.deconfl_gain = 0.5995056153165452;
    tmp_msg_0.accel_switch_gain = 0.6585285387813404;
    tmp_msg_0.safe_dist = 0.2526254347735626;
    tmp_msg_0.deconflict_offset = 0.967175001322538;
    tmp_msg_0.accel_safe_margin = 0.1455703528822586;
    tmp_msg_0.accel_lim_x = 0.5270930125883957;
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
    msg.setTimeStamp(0.9423153474220309);
    msg.setSource(17028U);
    msg.setSourceEntity(20U);
    msg.setDestination(43450U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.1285428948030125;
    msg.lon = 0.31897414630972876;
    msg.depth = 0.99519237198262;
    msg.sentence.assign("IMSZTVPJLXFXTCRCLAOKTDZPPWTY");
    msg.txtime = 0.4508190997603776;
    msg.modem_type.assign("PKCMOBXMONAFWUOWPHXOQZEAWLALGIIJDZFKDFRGKIIRMYDKNRVKMDNGATBOHKXCOZYLMYSSVPQLSVWPCQBKCSIBWYBTBRGEJDEEFNJSLEVLYJEUDFTHOPGAHHWMTHXZAOFNYZGHAYSXIVSCKEXTMZVIJU");
    msg.sys_src.assign("GCZKNBGVUYHAJCAMXXDQYRYBEEBSLIVLTEDKISAZQGALTLCKMUPXKXGYJJJYRIESRIFVCIDBZRTPSFUDNSTXSZHDQTPDEBO");
    msg.seq = 54961U;
    msg.sys_dst.assign("DMFFQRDFWJRYJNWZSSAOHHFUBTWYGCKBSFIYIUXLAFYEKLGUAJBQFYZONMGGRESBIRCPPXFRHLNUWWRVHRJJNZOGDVSMVBXPMX");
    msg.flags = 173U;
    const signed char tmp_msg_0[] = {-52, 44, -17, -84, -95, 108, 98, 59, -116, 39, -97, 45, -75, -100, 102, -29, -114, 104, 77, 58, -96, -6, -60, 118, -77, -94, 105, -19, -90, 35, -49, 115, -102, -122, 122, -125, 6, -89, 11, -116, -91, 14, -56, -25, -64, -63, 36, 16, 97, -82, -24, 16, -76, 18, 99, 51, -22, -8, 6, -113, 28, -127, -91, -89, 119, -10, -82, 96, 24, -88, 38, 29, -11, -73, -60, -4, -28, 30, -45, -63, -28, -79, 111, -61, -119, -99, -46, -45, 59, 101, 23, -33, -108, -20, -122, 98, -77, 61, -26, 112, -27, -121, 111, -27, 73, 69, 122, -31, -61, 90, 3, 2, -105, 76, 96, 60, 106, -90, 14, -111, 32, -93, -82, 39, -112, -96, -75, -123, -97, 14, 112, -87, 77, 108, 93, 99, 29, -99, -96, 82, -56, -121, 101, 26, -13, 48, 29, -66, -114, -44, -92, -27, -124, 20, 4, -76, 34, 44, -83, -37, 98, 40, 88, 95, -63, 110, -116, -38, -72, -113, -118, 50, 9, -61, -76, -107, -97, 35, 26, -60, -37, 10, 59, 113, -31, 75, -39, 5, 20, -23, 88, -69, -26, 120, 90, -79, -65, 91, -104, 81, 92, -114, -126, 21, -125, -122, 103, -47, -57, -8, 62, -127, 49, 87, 17, 15, 99, 17, -106, 100, 45, -122, -86, -73, 30, -125, 85, 65};
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
    msg.setTimeStamp(0.522745715950502);
    msg.setSource(39002U);
    msg.setSourceEntity(229U);
    msg.setDestination(6593U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.04233483899543222;
    msg.lon = 0.16065056310484083;
    msg.depth = 0.505032704168547;
    msg.sentence.assign("KECUXNBZHHCTOFIPRPZXCNUXZOJEXAEUWZHNVKFUBJZHBZNZFHSCALFPHTTLGUEVFGUQBVEJFBNMDUGOWCJUVBLLPIMRWRCTEMQDVDOYYAIGSIEOXGSEPGPBMORZGWWAUOVIFVYMAQODNTQDIPJTYRVKZHCTYNWKQFCDGKTFVHYSDLYXG");
    msg.txtime = 0.6891554856146678;
    msg.modem_type.assign("AUKJPAKTLYGUJJTVFCOBWGIKAZPPOGKEGISSFSWBALRNWGSIRJQQSDTUVRCCAVCHMVHWMMHWKOHDRVIFYZPUIFGHNWMWKUZEDSAYCLZUQFXNNITPOBQMXENDPBKCLJGXGLTGDRZIJNAUCEHGFMBOKTYYSJBUMEFLCDJVWNITYQQJABOA");
    msg.sys_src.assign("BELCURMGUETBKXMZTHIJSQWECQAFORCDEUHGHGKXVIXAZLKUVWCLNPPJJSWMMNQBIQJOHTTFUHQVANTEALXIIJYPSTFBNOLYJIUYXGVOOFTIBSDDBJZEUNDPZMVSGMRRFNKCGCHDUJWIFRJZJQMSAELBOIDTFZRSLQSOKVHGDXCMAOKRPKWOFYDQCIXWSCFGMBANZYPEFYVEHNXCYKBPXYZAZRNZWBLKQNDTMUGAWTQAXHHWLY");
    msg.seq = 20172U;
    msg.sys_dst.assign("ZMJNJXTQGDXLYCHNULAQOBRVDMGBHKEIFMDPCZKR");
    msg.flags = 21U;
    const signed char tmp_msg_0[] = {80, -26, -12, -112, -23, 107, 40, 26, 124, 65, -64, 76, -14, -128, -48, 6, -126, 27, 109, -16, -34, 37, -4, -103, 47, -109, 96, 32, -111, 13, -54, 105, -11, 45, 65, 51, 36, 6, -105, 40, 11, -29, -83, -81, 33, 6, -67, 29, -55, 119, 33, -34, 86, -41, 105, 103, 49, 73, 8, 12, 85, -117, 13, 28, 47, 42, -19, 33, 34, -84, -41, 31, 31, 123, 4, -67, 105, 126, 58, 25, -106, 2, 92, -77, -118, 80, 83, 53, -75, -15, 3, 31, 27, 72, -39, -109, -10, -46, 88, 8, -61, 44, 105, -39, 14, 44, -32, 43, 28, -95, -126, 99, 126, -60, 58, -12, -10, 51, 48, 39, -89, -13, 48, 43, -50, -69, 11, 48, 43, -124, -29};
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
    msg.setTimeStamp(0.9528477291699936);
    msg.setSource(14082U);
    msg.setSourceEntity(207U);
    msg.setDestination(31631U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.8061464706648778;
    msg.lon = 0.6891799565906267;
    msg.depth = 0.6361186731299608;
    msg.sentence.assign("QKAURDOVDPMCZPNAQUFAAWINZYXQUDJAYOPVRHPZBBFQGDCXOTDVUAVUZTYMYLCFRVGWWUYMNORIEKPSIHSRGGSFVJANRTISOEUXQLHJZBMXJJCAKHQBESJIRALZRJNXHXHTNXOLVFQVFTKK");
    msg.txtime = 0.812814173198798;
    msg.modem_type.assign("ZGKAIOZXVKUKIJGPJXEJPDNCMEANQDCTZYUAHERPQEACJUFTOAHZZDTFFYQQRBMPKHTYZVUSYXREVPXHKBIDTZWDWQTLEADGISTJSBAVLRMQBRNQBQZGSMNNXUHRKOCGFHESVWJVSNEKWGPKLMAAVCJONFXTMTOBVKGIUYQVINMLLUHFHZWXCRDEOGLFWULDINBPBLYMLPBFIXSXVWDJEPYOBOCCLMTWYJSIIHUGNURWDCSCJPZRAOSFF");
    msg.sys_src.assign("IIEPWTLDCSCFHNABDLYMZGIJSQMZTOSAUJJDGRTGEZXHOQSXWXUUFROUDMFAWNWUXGPNABODQFZHXXDVMKQSSEFNLENMPNKADEG");
    msg.seq = 52117U;
    msg.sys_dst.assign("WUUYLGQGFENZUJRWXICEAMEGDFBMPRXZUBFTKVHLSNMHHPSBETGBXKDFQYPIKKODWJOGMYHPRTGMYFSCKPVJOSWFMYHAHRNMVIZWTDWECBLQHEXJOYLGDFMKHIFCREDDAVXWVJNCXDZKGHRZUTLPEGXTPICRBPBECUJXOWAMQNULTJPSYYRZHRKPNSAZLCMOLBAXXIYOARTIWBQ");
    msg.flags = 167U;
    const signed char tmp_msg_0[] = {-13, -128, -115, -84, 82, -66, 88, -7, 90, -17, 41, 35, -68, 52, 88, 35, -89, 76, 106, -128, 69, -54, -32, 28, 61, 64, -17, 125, 50, -14, -120, -6, -94, 11, -118, 87, 74, -102, -61, -125, -23, 22, -78, -51, -97, -17, -5, 4, 52, -17, -100, 93, 10, 100, -111, 72, -29, -41, -47, 15, -124, -69, 10, 34, 18, -119, -66, -5, -41, 75, -101, -5, 14, -95, -66, -23, -94, -54, -25, -45, 0, 3, -78, -117, -52, 93, 59, 45, 104, 118, -66, -67, 38, -109, 68, -25, -51, 48, -18, 76, 8, 49, -99, 48, -89, -122, -91, 49, 98, 112, 31, 42, 96, 72, 82, 22, 39, 16, 95, 88, -95, 22, 49, -42, 111, 118, -18, -19, 107, -75, 102, -37, -45, 89, -3, -115, -88, -24, -64, -28, 12, -43, 123, 111, -20, 85, -25, 9, -13, -31, -36, -118, -108, -123, -126, -54, -80, 66, 120, -82, -40, 41, 60, -87, 125};
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
    msg.setTimeStamp(0.3135472959890808);
    msg.setSource(42106U);
    msg.setSourceEntity(37U);
    msg.setDestination(47352U);
    msg.setDestinationEntity(249U);
    msg.op = 200U;
    msg.system.assign("QYTVCUUHVKFARZEVNGGYWQQCTKFXCPLJIZIXWQMJXSKQDH");
    msg.range = 0.6774717639502176;
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.8505838759667973);
    msg.setSource(55188U);
    msg.setSourceEntity(200U);
    msg.setDestination(3286U);
    msg.setDestinationEntity(151U);
    msg.op = 81U;
    msg.system.assign("WBQKWDHBLZDOKZIPKNJCTXMFOSIDUUHLKSATYLCXZJHIMXMVGXPGCDBFGRLGJUQLQBLJUHPBOAZRBWVBHKTOATIVTFDRDYCQYJFCCQMINNDYLJWWC");
    msg.range = 0.842222970185698;
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.28371795864050897;
    tmp_msg_0.converg = 0.8240743567790895;
    tmp_msg_0.turbulence = 0.9227316493569891;
    tmp_msg_0.possimmon = 44U;
    tmp_msg_0.commmon = 35U;
    tmp_msg_0.convergmon = 188U;
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
    msg.setTimeStamp(0.8370529899323976);
    msg.setSource(40048U);
    msg.setSourceEntity(252U);
    msg.setDestination(41225U);
    msg.setDestinationEntity(240U);
    msg.op = 37U;
    msg.system.assign("DKXIIVRMDXQUGHFKYYNCIBXNOWKSRQHFLZWCEZMUFDFZKELKNMLHGRURXTLGPULLWAVAIRPTNTPHKCSYDYITGVVYCWWESDXUNQHDFQBKFZUERYVJSDE");
    msg.range = 0.979087124565493;
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 18764U;
    tmp_msg_0.destination.assign("PWGJIGVJYZNWNNCMINRGFFJDBRRSZVRXXHZEYRJDXAZOTZPYOEAZSPZMXXEGWQDTFFNMYAGKIGTLJUBECNRSQDAHCKPLHUUKMUAUVLGQZWMAOQEXJKXKQOTAWPCEANHRMFOCODMUUPI");
    tmp_msg_0.timeout = 0.7580780013507665;
    tmp_msg_0.range = 0.7829078211296536;
    tmp_msg_0.type = 43U;
    IMC::CurrentProfile tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.nbeams = 65U;
    tmp_tmp_msg_0_0.ncells = 153U;
    tmp_tmp_msg_0_0.coord_sys = 211U;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7381229819572903);
    msg.setSource(3107U);
    msg.setSourceEntity(174U);
    msg.setDestination(16434U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.21977397575799684);
    msg.setSource(57365U);
    msg.setSourceEntity(44U);
    msg.setDestination(37384U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.998620979954827);
    msg.setSource(37155U);
    msg.setSourceEntity(187U);
    msg.setDestination(29805U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.8963738493267077);
    msg.setSource(7098U);
    msg.setSourceEntity(179U);
    msg.setDestination(39855U);
    msg.setDestinationEntity(133U);
    msg.list.assign("SBCJBODJHGHWCXBRAWDJAGRNECDKQKOKMITSKOLJMQOPVXGWSCURETFFFTJZMUOUEEPZFLZPYNMUASQQUKCMALTJTZYJXTCFGQKIZVFPXZSEQLOHKBVPHEAWRHVAXNKY");

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
    msg.setTimeStamp(0.44818349598768514);
    msg.setSource(64468U);
    msg.setSourceEntity(222U);
    msg.setDestination(26383U);
    msg.setDestinationEntity(58U);
    msg.list.assign("KWCMTIODAWORSOLDUWXVDYJVITPUBBMWBITCNXYYNTDKYTAILDSOUUAKZRZHOUMXNULDHVPJPJEAAAFMXOMKBRPEFQLZZGORIVCXEQUNQYZCTMDHTSYBSYZVWRQPVGFTNKESZOFEGSUWPNLQWIQAR");

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
    msg.setTimeStamp(0.9761499120655401);
    msg.setSource(40949U);
    msg.setSourceEntity(246U);
    msg.setDestination(14000U);
    msg.setDestinationEntity(154U);
    msg.list.assign("TLDRASLAGBIBRFQBSIZFFGNJDBITUPNAKQQMQSNYPOHG");

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
    msg.setTimeStamp(0.7760781799856444);
    msg.setSource(23443U);
    msg.setSourceEntity(173U);
    msg.setDestination(2815U);
    msg.setDestinationEntity(196U);
    msg.peer.assign("LQIHUAZDPHYKNIVSTWCEOIDVMWGJNXUFXPTREHZKXKUABXXCANFFQMXYFLUFKSVCSZQLOBNZBYQZQEOGLCKKQBOWCQTZJMYPUOACQNAOTQPEVRUSRTYP");
    msg.rssi = 0.6403186479974688;
    msg.integrity = 58151U;

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
    msg.setTimeStamp(0.018052940067761036);
    msg.setSource(19571U);
    msg.setSourceEntity(208U);
    msg.setDestination(29626U);
    msg.setDestinationEntity(71U);
    msg.peer.assign("QOGMRJBJCYCVSIGUQIJSBUYP");
    msg.rssi = 0.4505904686953104;
    msg.integrity = 37250U;

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
    msg.setTimeStamp(0.14699112207400422);
    msg.setSource(15439U);
    msg.setSourceEntity(68U);
    msg.setDestination(33205U);
    msg.setDestinationEntity(56U);
    msg.peer.assign("XXVLNEXJYXIXIRIYDSLEUDWQADTFHWEYMFSXUMPKPZPUGGJVNWOAMPMAEIRKQGHKTRZMPOHOVPFJOQBSWVTEWNXGOBIXPVTCCEQJZH");
    msg.rssi = 0.8574255892052793;
    msg.integrity = 50699U;

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
    msg.setTimeStamp(0.894804728752124);
    msg.setSource(35624U);
    msg.setSourceEntity(58U);
    msg.setDestination(26056U);
    msg.setDestinationEntity(193U);
    msg.req_id = 20167U;
    msg.destination.assign("HDBRILTIZZMZMJADFQFTEAYNZGMCUCXWBKMOV");
    msg.timeout = 0.7292982171308086;
    msg.range = 0.037236149803027696;
    msg.type = 57U;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 30664U;
    tmp_msg_0.plan_size = 1341782171U;
    tmp_msg_0.change_time = 0.3245405414183713;
    tmp_msg_0.change_sid = 20117U;
    tmp_msg_0.change_sname.assign("TPWLMQAEXDQPPSBATUDNVNYTFUMXWFHOCMGBQYRSJVDRRGIENKVYTHQUPXLJQT");
    const signed char tmp_tmp_msg_0_0[] = {13, -73, 111, 37, 38, 23, -54, 104, 65, -106, 93, -77, -122, 26, 97, -124, -73, 17, 59, 44, 4, -112, 75, 6, 43, -56, -127, 10, -63, 125, 101, -93, -28, -81, 70, 120, -86, -77, 3, -37, -127, 89, -92, -41, -35, 52, -31, -80, -110, 107, 0, 1, 0, 15, -59, 36, 40, -1, 30, -31, -47, -7, -94, -16, 108, 30, -41, -49, 39, 87, -5, 69, -123, 84, -98, -43, -102, 79, -28, -35, -22, -76, 1, -52, 11, 25, -105, 118, -28, -88, -92, 40, 105, 14, -78, 68, -60, -71, -4, 111, -72, 10, 116, -2, -123, -7, -8, -54, 29, 103, 61, 25, -53, -29, 56, 94, -117, -79, -97, -17, -6, 19, 124, 43, 121, 24, -62, -91, 18, -99, 113, -3, 97, 47, 9, -67, -20, -12, 20, -103, 51, 71, 122, 11, 125, -128, 83, 95, 47, 56, 40, 38, -6, 37, 40, 57, -93, -40, 63, -93, -12, 31, 102, 68, 6, -87, -88, 50, 16, -23, 27, 85, 103, 91, 15, -62, 28, 79, -59, -21, -113, -73, -62, 59, 77, -114, -25, -114, -110, 6, -26};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.16592864287926745);
    msg.setSource(54707U);
    msg.setSourceEntity(75U);
    msg.setDestination(17648U);
    msg.setDestinationEntity(64U);
    msg.req_id = 5467U;
    msg.destination.assign("TLPABTILCQFKGFISSNLPCTSLQVRGNGKAUMSGLVPQKLAFWKZCVHODPNRMFXPJERUXOPADBWFOLHBIXSARNTJAPMFOEWAYHNONRDRJKWXZZXWDIZFTNXZCZIHJBDQHBUTRUBUEWKTZASEEEVCOTVIHXSWCBEVCMOGUUDZCELMYYMHJQUZDFYGEQYMAFOGRQWDYXPKRVHJPLMJNB");
    msg.timeout = 0.16381027027323736;
    msg.range = 0.8886852714196376;
    msg.type = 142U;
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.9700138777585626;
    tmp_msg_0.width = 0.44842541990070206;
    tmp_msg_0.length = 0.4625876267147325;
    tmp_msg_0.bearing = 0.015776163989732805;
    tmp_msg_0.pxl = 32518;
    tmp_msg_0.encoding = 231U;
    const signed char tmp_tmp_msg_0_0[] = {90, -65, 121, -45, -10, 70, -72, 119, 75, -104, -41, 99, -80, 101, 108, 38, -84, 107, -26, 87, -106, -7, -101, -124, 95, -20, 124, -126, -111, 44, -71, 50, 40, 96, -107, -122, -5, -89, -80, -16, 66, 39, -127, -106, -84, -17, 77, 21, 5, -11, -6, -107, 31, 16, 33, -71, -37, 65, 92, 32, 122, 6, 11, 126, -89, -46, -46, 69, 75, 94, -121, -118, 28, -43, -78, -116, 93, 93, -103, 12, 107, 78, 22, -124, 44, -115, -29, -84, -94, 98, -112, 125, 77, 120, 108, 87, -38, 99, -114, -12, 125, -3, -85, 103, 94, 31, -13, -118, 34, 65, -102, -108, 124, -9, 100, 122, -29, -63, -10, 10, -40, -99, -115, -7, 100, -87, -77, 50, 73, 63, -7, 116, -38, 4, -41, -102, 77, -35, 96, -72, 110, 39, -78, 119, -112, -75, -51, 3, 47, 56, 82, 80, 77, -9, -118, 84, 59, 17, -124, -31, -67, -11, -111, 25, 123, -32, 89, 14, -17, 100, -76, 37, 99, -99, -86, -111, 57, -47, -17, -4};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9374489974260941);
    msg.setSource(47335U);
    msg.setSourceEntity(155U);
    msg.setDestination(30238U);
    msg.setDestinationEntity(206U);
    msg.req_id = 16421U;
    msg.destination.assign("HNPSUKUMPPCVRWLQUZTMTQBLCIFNXZNLMUEOHVJLRUTGYMIWSPGOPUXPOUZOAQKWVYYKFRWBEBVFCXNSKRODMCMGSUTHNIZSSWQOGTZVVYNFRERAHEWJYYQBYMHSGFXDXGHNZCWBCWYIRDJXPEAEQLWJMQCSKOYQGODIVTLZFAD");
    msg.timeout = 0.7618385438097145;
    msg.range = 0.19959272517607285;
    msg.type = 169U;
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 204U;
    tmp_msg_0.x = 10112U;
    tmp_msg_0.y = 26468U;
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
    msg.setTimeStamp(0.7171156793203411);
    msg.setSource(4139U);
    msg.setSourceEntity(116U);
    msg.setDestination(18222U);
    msg.setDestinationEntity(17U);
    msg.req_id = 21485U;
    msg.type = 240U;
    msg.status = 165U;
    msg.info.assign("SHOKNROHLKHUNFXVZSGEHSZOVNTUXNPUTQGKJALMOGJHCWDNDPRBEZAGJUZUMKDVSPPRPAPVDLYIEWFCWWHODXMIRQEQVXQZJCTNPQRTBAIQJINERKVWDFZY");
    msg.range = 0.37934254143484347;

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
    msg.setTimeStamp(0.7041178755010763);
    msg.setSource(26572U);
    msg.setSourceEntity(157U);
    msg.setDestination(76U);
    msg.setDestinationEntity(127U);
    msg.req_id = 41444U;
    msg.type = 59U;
    msg.status = 69U;
    msg.info.assign("KTHPJIOGNCCEDEHZEBJTNAOMGXSCZZRHTLVBIVGCSYNUTQSBHBWQBGNPMANGTMYWSMOTIHPMEYGWUAFSDKIDGWDDWYPLVMQLNLOZKALFDKTHMKLXKYEZRUYNOXPZRQCVCJBZ");
    msg.range = 0.4340529042794259;

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
    msg.setTimeStamp(0.3516489269753884);
    msg.setSource(45154U);
    msg.setSourceEntity(201U);
    msg.setDestination(7581U);
    msg.setDestinationEntity(36U);
    msg.req_id = 34593U;
    msg.type = 56U;
    msg.status = 200U;
    msg.info.assign("UNXTRRMBVJOAWIQNDNZLKEREMJGNVKEQCOGHXPZDZNUWIOCWZINSJJKTGPYWUAPQKYYQTDHIJYJXSQAHCOBLOFEOODBUWTWMYKVROQFKIOWMELVPCJKHZTDSPMSUTDFLBIZVSJSABCHEBCNXNUMAXJXGYVAUTCUPIFYO");
    msg.range = 0.7028799012693765;

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
    msg.setTimeStamp(0.4389504679483841);
    msg.setSource(24921U);
    msg.setSourceEntity(10U);
    msg.setDestination(55359U);
    msg.setDestinationEntity(129U);
    msg.system.assign("VINQSONEMRKJIIJCEJRBCHZQQFRGFIKVMDCURXCJSRGYCOQXLNMYSXZAZEAICJDVWESPLVZAORTYGUIDRBTKWJRVUFOUAHMZPSMYOHMAPZHCVZBEHBAINKPBFBZTAPDJUUSEDSOPSJIOHFYKJXLTVXGPFYKGRLVWNVWDKLHOYNGLAHNDCFIADGKWGWHXTSOXTKYY");
    msg.op = 229U;

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
    msg.setTimeStamp(0.844346532379754);
    msg.setSource(63082U);
    msg.setSourceEntity(241U);
    msg.setDestination(33945U);
    msg.setDestinationEntity(197U);
    msg.system.assign("EHKQQWODRZUDKYUECRZZJXTOYSVADRWBFPYXLRXIHGQDWZNLRUGVYXWHUQFOOIPPNJPVSKUCOMTANGJJHVNCOGVAJAUMBHPGAQITIOFIBEKBYBXRMDXPGQTTXKXKOLICWLEKQJLSYLWDHITDYMWFETULFEGBVNNZCLHABVMCRICHPOVPKBZJUAJEXCNERYQY");
    msg.op = 41U;

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
    msg.setTimeStamp(0.1774790976253353);
    msg.setSource(58214U);
    msg.setSourceEntity(229U);
    msg.setDestination(61209U);
    msg.setDestinationEntity(113U);
    msg.system.assign("LHFXICZFSXNLTVHVMMJCBVUKSIDYBSRDXMVIYADFEUVKWHOXFMBMWOIFDJNTZEZEOGGTMECOCKJYUGSNNQOFXQKRJOUIMWADZQDAPQTMPECTLQGZYUHKUKPKCQKDRAEGXRUVJDAEYTLPBSQILYINUAXFQLAUBEPGSSGWOWYYVGBHKVNNJSLPWAPCXKWJVPQPYWIXLHOHCDZSVFXIZIGRUWOHJMRMDZZNZRPNNYFCLSRCB");
    msg.op = 131U;

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
    msg.setTimeStamp(0.1401943875714574);
    msg.setSource(36706U);
    msg.setSourceEntity(205U);
    msg.setDestination(45633U);
    msg.setDestinationEntity(57U);
    msg.value = -6264;

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
    msg.setTimeStamp(0.20842510084775323);
    msg.setSource(56583U);
    msg.setSourceEntity(51U);
    msg.setDestination(39506U);
    msg.setDestinationEntity(219U);
    msg.value = 20572;

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
    msg.setTimeStamp(0.9805309298942068);
    msg.setSource(18796U);
    msg.setSourceEntity(233U);
    msg.setDestination(36320U);
    msg.setDestinationEntity(58U);
    msg.value = 29657;

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
    msg.setTimeStamp(0.8016197210815561);
    msg.setSource(52581U);
    msg.setSourceEntity(182U);
    msg.setDestination(58516U);
    msg.setDestinationEntity(40U);
    msg.value = 0.08704895528575762;

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
    msg.setTimeStamp(0.8742231610105422);
    msg.setSource(8170U);
    msg.setSourceEntity(245U);
    msg.setDestination(10021U);
    msg.setDestinationEntity(213U);
    msg.value = 0.6637510724097522;

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
    msg.setTimeStamp(0.2093477999221205);
    msg.setSource(39724U);
    msg.setSourceEntity(55U);
    msg.setDestination(39264U);
    msg.setDestinationEntity(3U);
    msg.value = 0.29982588254717535;

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
    msg.setTimeStamp(0.2360520019402611);
    msg.setSource(38578U);
    msg.setSourceEntity(30U);
    msg.setDestination(50997U);
    msg.setDestinationEntity(51U);
    msg.value = 0.9240259701159323;

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
    msg.setTimeStamp(0.28188381463598344);
    msg.setSource(54521U);
    msg.setSourceEntity(109U);
    msg.setDestination(16226U);
    msg.setDestinationEntity(251U);
    msg.value = 0.35387918427305776;

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
    msg.setTimeStamp(0.950856273315634);
    msg.setSource(37985U);
    msg.setSourceEntity(96U);
    msg.setDestination(14835U);
    msg.setDestinationEntity(128U);
    msg.value = 0.05371747812535954;

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
    msg.setTimeStamp(0.3964560289284519);
    msg.setSource(386U);
    msg.setSourceEntity(88U);
    msg.setDestination(61232U);
    msg.setDestinationEntity(232U);
    msg.validity = 46954U;
    msg.type = 203U;
    msg.utc_year = 45738U;
    msg.utc_month = 239U;
    msg.utc_day = 244U;
    msg.utc_time = 0.4447036510286484;
    msg.lat = 0.5308051016099178;
    msg.lon = 0.7091575956246082;
    msg.height = 0.6716572680314336;
    msg.satellites = 168U;
    msg.cog = 0.7183505283199838;
    msg.sog = 0.6496649740758957;
    msg.hdop = 0.0646370344179148;
    msg.vdop = 0.6587154679390588;
    msg.hacc = 0.7563274847001114;
    msg.vacc = 0.6277374324804882;

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
    msg.setTimeStamp(0.4211603238739413);
    msg.setSource(48289U);
    msg.setSourceEntity(214U);
    msg.setDestination(5429U);
    msg.setDestinationEntity(191U);
    msg.validity = 44112U;
    msg.type = 13U;
    msg.utc_year = 18943U;
    msg.utc_month = 103U;
    msg.utc_day = 25U;
    msg.utc_time = 0.8549105450190758;
    msg.lat = 0.694678692171613;
    msg.lon = 0.833879807238273;
    msg.height = 0.563119062338192;
    msg.satellites = 161U;
    msg.cog = 0.272035450809591;
    msg.sog = 0.3694454270762384;
    msg.hdop = 0.6719545098470898;
    msg.vdop = 0.4529396209621953;
    msg.hacc = 0.18916088423460742;
    msg.vacc = 0.8379444162660321;

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
    msg.setTimeStamp(0.16766215382359906);
    msg.setSource(34230U);
    msg.setSourceEntity(93U);
    msg.setDestination(44842U);
    msg.setDestinationEntity(41U);
    msg.validity = 5977U;
    msg.type = 75U;
    msg.utc_year = 49314U;
    msg.utc_month = 53U;
    msg.utc_day = 27U;
    msg.utc_time = 0.29118599913176846;
    msg.lat = 0.849056250090241;
    msg.lon = 0.6645042489787918;
    msg.height = 0.9618704144724666;
    msg.satellites = 192U;
    msg.cog = 0.6084202161951023;
    msg.sog = 0.389823336878096;
    msg.hdop = 0.023034768664954464;
    msg.vdop = 0.6566117198060166;
    msg.hacc = 0.9647064015267244;
    msg.vacc = 0.20162498421496944;

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
    msg.setTimeStamp(0.14214222693424017);
    msg.setSource(62368U);
    msg.setSourceEntity(73U);
    msg.setDestination(58310U);
    msg.setDestinationEntity(56U);
    msg.time = 0.19299511064175923;
    msg.phi = 0.3492490376003152;
    msg.theta = 0.6701660919531962;
    msg.psi = 0.9067571011491325;
    msg.psi_magnetic = 0.010697801556341147;

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
    msg.setTimeStamp(0.4049138722181286);
    msg.setSource(26989U);
    msg.setSourceEntity(155U);
    msg.setDestination(49804U);
    msg.setDestinationEntity(254U);
    msg.time = 0.36718331361584167;
    msg.phi = 0.3944554261976987;
    msg.theta = 0.5527833426887403;
    msg.psi = 0.47752022876609623;
    msg.psi_magnetic = 0.45749979610771163;

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
    msg.setTimeStamp(0.5593864585601629);
    msg.setSource(48352U);
    msg.setSourceEntity(12U);
    msg.setDestination(53997U);
    msg.setDestinationEntity(71U);
    msg.time = 0.5020754199791857;
    msg.phi = 0.7643100099619587;
    msg.theta = 0.7201528563746136;
    msg.psi = 0.8507450472980038;
    msg.psi_magnetic = 0.3441228395343834;

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
    msg.setTimeStamp(0.4018039925722753);
    msg.setSource(4145U);
    msg.setSourceEntity(183U);
    msg.setDestination(46301U);
    msg.setDestinationEntity(243U);
    msg.time = 0.18456454586322069;
    msg.x = 0.5697607249767035;
    msg.y = 0.013288188856104832;
    msg.z = 0.1931045531767377;
    msg.timestep = 0.9999837970046361;

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
    msg.setTimeStamp(0.3474935372499819);
    msg.setSource(11615U);
    msg.setSourceEntity(9U);
    msg.setDestination(20596U);
    msg.setDestinationEntity(113U);
    msg.time = 0.16051400551023065;
    msg.x = 0.43477898191668496;
    msg.y = 0.29998396773422353;
    msg.z = 0.8931853172307765;
    msg.timestep = 0.4126659173968241;

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
    msg.setTimeStamp(0.9678043969975709);
    msg.setSource(26423U);
    msg.setSourceEntity(78U);
    msg.setDestination(18257U);
    msg.setDestinationEntity(78U);
    msg.time = 0.06392755664591943;
    msg.x = 0.8722106397477112;
    msg.y = 0.6780074943850448;
    msg.z = 0.521351828991397;
    msg.timestep = 0.8548924803398507;

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
    msg.setTimeStamp(0.5937825427876023);
    msg.setSource(22562U);
    msg.setSourceEntity(213U);
    msg.setDestination(20388U);
    msg.setDestinationEntity(111U);
    msg.time = 0.22881419627518362;
    msg.x = 0.0385829814239228;
    msg.y = 0.4981364047224395;
    msg.z = 0.10691177312592814;

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
    msg.setTimeStamp(0.22813503045547523);
    msg.setSource(35291U);
    msg.setSourceEntity(52U);
    msg.setDestination(58912U);
    msg.setDestinationEntity(179U);
    msg.time = 0.20384843466883595;
    msg.x = 0.9461258336725518;
    msg.y = 0.9211650930822531;
    msg.z = 0.35412430688981056;

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
    msg.setTimeStamp(0.992720067108945);
    msg.setSource(55940U);
    msg.setSourceEntity(179U);
    msg.setDestination(1911U);
    msg.setDestinationEntity(99U);
    msg.time = 0.6106773616305157;
    msg.x = 0.17202874096028398;
    msg.y = 0.2926382895132257;
    msg.z = 0.6049794030073905;

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
    msg.setTimeStamp(0.7575774838424926);
    msg.setSource(34087U);
    msg.setSourceEntity(213U);
    msg.setDestination(48870U);
    msg.setDestinationEntity(91U);
    msg.time = 0.36600193786213675;
    msg.x = 0.09884693850348603;
    msg.y = 0.007798704834393377;
    msg.z = 0.5215309285832271;

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
    msg.setTimeStamp(0.17629379510882381);
    msg.setSource(57402U);
    msg.setSourceEntity(135U);
    msg.setDestination(37339U);
    msg.setDestinationEntity(96U);
    msg.time = 0.6757795579258027;
    msg.x = 0.681798307202757;
    msg.y = 0.3663675714054332;
    msg.z = 0.518132812713633;

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
    msg.setTimeStamp(0.6277641282481777);
    msg.setSource(6010U);
    msg.setSourceEntity(149U);
    msg.setDestination(33685U);
    msg.setDestinationEntity(101U);
    msg.time = 0.13099175431720034;
    msg.x = 0.002248280916323009;
    msg.y = 0.9081218934348202;
    msg.z = 0.8115353037726358;

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
    msg.setTimeStamp(0.3811072789007597);
    msg.setSource(490U);
    msg.setSourceEntity(149U);
    msg.setDestination(45480U);
    msg.setDestinationEntity(112U);
    msg.time = 0.4157612773670394;
    msg.x = 0.7261660427070166;
    msg.y = 0.4431548815913343;
    msg.z = 0.0701113459049203;

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
    msg.setTimeStamp(0.20542070180959038);
    msg.setSource(22509U);
    msg.setSourceEntity(29U);
    msg.setDestination(43724U);
    msg.setDestinationEntity(107U);
    msg.time = 0.6784363822753463;
    msg.x = 0.33084686880815006;
    msg.y = 0.4377198398747342;
    msg.z = 0.8432543365039049;

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
    msg.setTimeStamp(0.4691882831389875);
    msg.setSource(31848U);
    msg.setSourceEntity(126U);
    msg.setDestination(48724U);
    msg.setDestinationEntity(248U);
    msg.time = 0.1587258812842779;
    msg.x = 0.8933639758632143;
    msg.y = 0.576553782470245;
    msg.z = 0.4707892845164976;

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
    msg.setTimeStamp(0.673948794042632);
    msg.setSource(61198U);
    msg.setSourceEntity(31U);
    msg.setDestination(15757U);
    msg.setDestinationEntity(234U);
    msg.validity = 230U;
    msg.x = 0.46774661204544854;
    msg.y = 0.3208623517265641;
    msg.z = 0.9425426663346346;

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
    msg.setTimeStamp(0.8412744993016391);
    msg.setSource(49626U);
    msg.setSourceEntity(44U);
    msg.setDestination(43916U);
    msg.setDestinationEntity(94U);
    msg.validity = 74U;
    msg.x = 0.6110208177743456;
    msg.y = 0.043533700537430886;
    msg.z = 0.5866185754213171;

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
    msg.setTimeStamp(0.784319854915754);
    msg.setSource(39667U);
    msg.setSourceEntity(228U);
    msg.setDestination(27102U);
    msg.setDestinationEntity(15U);
    msg.validity = 26U;
    msg.x = 0.5320127563546336;
    msg.y = 0.5930382429350897;
    msg.z = 0.9596351950290503;

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
    msg.setTimeStamp(0.6663311706035467);
    msg.setSource(23328U);
    msg.setSourceEntity(93U);
    msg.setDestination(41375U);
    msg.setDestinationEntity(149U);
    msg.validity = 215U;
    msg.x = 0.3437155489902619;
    msg.y = 0.32183225940056137;
    msg.z = 0.19627271947334513;

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
    msg.setTimeStamp(0.017893646551809694);
    msg.setSource(46152U);
    msg.setSourceEntity(16U);
    msg.setDestination(13915U);
    msg.setDestinationEntity(245U);
    msg.validity = 86U;
    msg.x = 0.10660142977003728;
    msg.y = 0.7452073637255013;
    msg.z = 0.314271330155683;

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
    msg.setTimeStamp(0.2597100639123209);
    msg.setSource(16844U);
    msg.setSourceEntity(202U);
    msg.setDestination(51802U);
    msg.setDestinationEntity(194U);
    msg.validity = 9U;
    msg.x = 0.9099119187257453;
    msg.y = 0.38143100661704066;
    msg.z = 0.9914302390412165;

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
    msg.setTimeStamp(0.521220393038726);
    msg.setSource(12901U);
    msg.setSourceEntity(158U);
    msg.setDestination(48998U);
    msg.setDestinationEntity(98U);
    msg.time = 0.7316122059329241;
    msg.x = 0.41982920703614635;
    msg.y = 0.5362073871093912;
    msg.z = 0.6829540823994658;

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
    msg.setTimeStamp(0.506919177420768);
    msg.setSource(22576U);
    msg.setSourceEntity(238U);
    msg.setDestination(36407U);
    msg.setDestinationEntity(175U);
    msg.time = 0.019122255397107768;
    msg.x = 0.9815389071245108;
    msg.y = 0.09112648585285577;
    msg.z = 0.9641305115265772;

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
    msg.setTimeStamp(0.6249914515404802);
    msg.setSource(60768U);
    msg.setSourceEntity(10U);
    msg.setDestination(38345U);
    msg.setDestinationEntity(57U);
    msg.time = 0.3106831107387954;
    msg.x = 0.1889747189867763;
    msg.y = 0.43392069635799946;
    msg.z = 0.018543202670164183;

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
    msg.setTimeStamp(0.20436830099428127);
    msg.setSource(26750U);
    msg.setSourceEntity(8U);
    msg.setDestination(49536U);
    msg.setDestinationEntity(169U);
    msg.validity = 138U;
    msg.value = 0.5285944990786432;

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
    msg.setTimeStamp(0.636973656922638);
    msg.setSource(48015U);
    msg.setSourceEntity(156U);
    msg.setDestination(26619U);
    msg.setDestinationEntity(252U);
    msg.validity = 212U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0502847052787857;
    tmp_msg_0.beam_height = 0.04749752754301706;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.6481883464563516;

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
    msg.setTimeStamp(0.3187790047551521);
    msg.setSource(30261U);
    msg.setSourceEntity(75U);
    msg.setDestination(33447U);
    msg.setDestinationEntity(225U);
    msg.validity = 2U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8631121339485442;
    tmp_msg_0.y = 0.5310415786496507;
    tmp_msg_0.z = 0.13136117313534945;
    tmp_msg_0.phi = 0.7621566491055985;
    tmp_msg_0.theta = 0.10335187924113587;
    tmp_msg_0.psi = 0.7710601034624951;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.51257323375895;

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
    msg.setTimeStamp(0.2937279118294037);
    msg.setSource(2365U);
    msg.setSourceEntity(136U);
    msg.setDestination(21394U);
    msg.setDestinationEntity(224U);
    msg.value = 0.7366223515924339;

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
    msg.setTimeStamp(0.1746696769892797);
    msg.setSource(48909U);
    msg.setSourceEntity(171U);
    msg.setDestination(3933U);
    msg.setDestinationEntity(35U);
    msg.value = 0.2266985354898513;

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
    msg.setTimeStamp(0.19232636629880817);
    msg.setSource(38492U);
    msg.setSourceEntity(168U);
    msg.setDestination(57967U);
    msg.setDestinationEntity(217U);
    msg.value = 0.28761111267452844;

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
    msg.setTimeStamp(0.25809627597084905);
    msg.setSource(53761U);
    msg.setSourceEntity(254U);
    msg.setDestination(42131U);
    msg.setDestinationEntity(243U);
    msg.value = 0.040614425893888306;

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
    msg.setTimeStamp(0.3010655359749531);
    msg.setSource(63811U);
    msg.setSourceEntity(124U);
    msg.setDestination(22286U);
    msg.setDestinationEntity(10U);
    msg.value = 0.33965011932498956;

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
    msg.setTimeStamp(0.9760816768152537);
    msg.setSource(21672U);
    msg.setSourceEntity(16U);
    msg.setDestination(15782U);
    msg.setDestinationEntity(59U);
    msg.value = 0.5671239255940931;

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
    msg.setTimeStamp(0.7523254470521277);
    msg.setSource(46238U);
    msg.setSourceEntity(208U);
    msg.setDestination(42021U);
    msg.setDestinationEntity(15U);
    msg.value = 0.36238243167631967;

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
    msg.setTimeStamp(0.29693452749019134);
    msg.setSource(35828U);
    msg.setSourceEntity(166U);
    msg.setDestination(52652U);
    msg.setDestinationEntity(46U);
    msg.value = 0.3198894649942349;

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
    msg.setTimeStamp(0.874677972318847);
    msg.setSource(13406U);
    msg.setSourceEntity(230U);
    msg.setDestination(47720U);
    msg.setDestinationEntity(63U);
    msg.value = 0.1702156966822197;

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
    msg.setTimeStamp(0.21832084001233987);
    msg.setSource(37150U);
    msg.setSourceEntity(133U);
    msg.setDestination(53915U);
    msg.setDestinationEntity(199U);
    msg.value = 0.29011264510116497;

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
    msg.setTimeStamp(0.7001734041556942);
    msg.setSource(21575U);
    msg.setSourceEntity(111U);
    msg.setDestination(13983U);
    msg.setDestinationEntity(49U);
    msg.value = 0.7341500534481877;

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
    msg.setTimeStamp(0.33515038556921073);
    msg.setSource(62985U);
    msg.setSourceEntity(64U);
    msg.setDestination(35927U);
    msg.setDestinationEntity(104U);
    msg.value = 0.6639997586404691;

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
    msg.setTimeStamp(0.3107872106261049);
    msg.setSource(30822U);
    msg.setSourceEntity(220U);
    msg.setDestination(57752U);
    msg.setDestinationEntity(129U);
    msg.value = 0.6055733647408578;

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
    msg.setTimeStamp(0.49558305193418717);
    msg.setSource(18125U);
    msg.setSourceEntity(42U);
    msg.setDestination(29624U);
    msg.setDestinationEntity(47U);
    msg.value = 0.47706902444436516;

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
    msg.setTimeStamp(0.8663552357228357);
    msg.setSource(30834U);
    msg.setSourceEntity(43U);
    msg.setDestination(17150U);
    msg.setDestinationEntity(43U);
    msg.value = 0.7502527913456918;

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
    msg.setTimeStamp(0.6222329451162318);
    msg.setSource(20325U);
    msg.setSourceEntity(55U);
    msg.setDestination(16951U);
    msg.setDestinationEntity(10U);
    msg.value = 0.4766468616451268;

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
    msg.setTimeStamp(0.5742045255209984);
    msg.setSource(3117U);
    msg.setSourceEntity(12U);
    msg.setDestination(16566U);
    msg.setDestinationEntity(129U);
    msg.value = 0.5414994847431135;

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
    msg.setTimeStamp(0.5677579876463812);
    msg.setSource(23591U);
    msg.setSourceEntity(27U);
    msg.setDestination(20272U);
    msg.setDestinationEntity(170U);
    msg.value = 0.7585440364412644;

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
    msg.setTimeStamp(0.6964410751071883);
    msg.setSource(6001U);
    msg.setSourceEntity(90U);
    msg.setDestination(43196U);
    msg.setDestinationEntity(51U);
    msg.value = 0.9340765079803183;

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
    msg.setTimeStamp(0.546076823512053);
    msg.setSource(2248U);
    msg.setSourceEntity(178U);
    msg.setDestination(51799U);
    msg.setDestinationEntity(221U);
    msg.value = 0.8366530294057078;

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
    msg.setTimeStamp(0.7062302837714518);
    msg.setSource(6888U);
    msg.setSourceEntity(45U);
    msg.setDestination(50693U);
    msg.setDestinationEntity(94U);
    msg.value = 0.07876056112207819;

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
    msg.setTimeStamp(0.40698366043441503);
    msg.setSource(37370U);
    msg.setSourceEntity(63U);
    msg.setDestination(40330U);
    msg.setDestinationEntity(147U);
    msg.value = 0.6576514147125194;

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
    msg.setTimeStamp(0.4360693333870739);
    msg.setSource(62775U);
    msg.setSourceEntity(148U);
    msg.setDestination(22205U);
    msg.setDestinationEntity(174U);
    msg.value = 0.1076356380856458;

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
    msg.setTimeStamp(0.5005619949816366);
    msg.setSource(11249U);
    msg.setSourceEntity(111U);
    msg.setDestination(59249U);
    msg.setDestinationEntity(158U);
    msg.value = 0.06623757288429233;

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
    msg.setTimeStamp(0.34146252595909954);
    msg.setSource(43871U);
    msg.setSourceEntity(192U);
    msg.setDestination(5202U);
    msg.setDestinationEntity(149U);
    msg.direction = 0.33623227653580534;
    msg.speed = 0.31554308601441594;
    msg.turbulence = 0.5690005516050441;

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
    msg.setTimeStamp(0.6589440210178391);
    msg.setSource(26852U);
    msg.setSourceEntity(111U);
    msg.setDestination(12771U);
    msg.setDestinationEntity(191U);
    msg.direction = 0.40639357165788703;
    msg.speed = 0.8612478888312749;
    msg.turbulence = 0.7686504828729436;

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
    msg.setTimeStamp(0.20263455522802454);
    msg.setSource(3514U);
    msg.setSourceEntity(6U);
    msg.setDestination(47561U);
    msg.setDestinationEntity(110U);
    msg.direction = 0.22876773233681347;
    msg.speed = 0.22667412673178267;
    msg.turbulence = 0.23742961632993087;

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
    msg.setTimeStamp(0.5225672680966243);
    msg.setSource(52885U);
    msg.setSourceEntity(118U);
    msg.setDestination(21461U);
    msg.setDestinationEntity(162U);
    msg.value = 0.623584265511704;

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
    msg.setTimeStamp(0.6585016833185762);
    msg.setSource(41581U);
    msg.setSourceEntity(76U);
    msg.setDestination(7288U);
    msg.setDestinationEntity(122U);
    msg.value = 0.7360865551113979;

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
    msg.setTimeStamp(0.8038873670995819);
    msg.setSource(19978U);
    msg.setSourceEntity(249U);
    msg.setDestination(17441U);
    msg.setDestinationEntity(233U);
    msg.value = 0.14824476291141353;

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
    msg.setTimeStamp(0.27458723971902277);
    msg.setSource(60789U);
    msg.setSourceEntity(103U);
    msg.setDestination(15420U);
    msg.setDestinationEntity(112U);
    msg.value.assign("QMLJZBOADCGVDWBALBDQSGUFDRFIYLNTDXLZMRMCDYWCOZXHOKOHFTDCWKVQJQOIBUUZKMRLFJWRJUSEGYAAILEBYXVJFMAOHAATKUYSFMREOXGNVVAKKGTLUNFWHRBHCYRCNQFNIDUBMQJXDUVHHQOLTJHYXQ");

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
    msg.setTimeStamp(0.19392356522602483);
    msg.setSource(65086U);
    msg.setSourceEntity(71U);
    msg.setDestination(41700U);
    msg.setDestinationEntity(116U);
    msg.value.assign("KIDBLDYYFJQSLOPCWFVJSHXDWKZQKLNEAVKKFDIKAINVIHTPMDMQNGROYMGJHVQJYZHSWNFUVHVCOCONRSZBLPPXTNIUTUFDVUHXOZBZTQMBTSXWPAOGFEWGDZARAUSPUJFEGNNETKCLZIRELXAEZXVMFBCWRCK");

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
    msg.setTimeStamp(0.5870568372217142);
    msg.setSource(44568U);
    msg.setSourceEntity(43U);
    msg.setDestination(51328U);
    msg.setDestinationEntity(21U);
    msg.value.assign("TEVXSTIFJHHTWWVSSUNGNQLLDOSLHJFZLUQLYOQRHGKBGVCSGUNMPPJXYCHOVWBZYINUZZGRMXYMFMM");

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
    msg.setTimeStamp(0.3163746459924436);
    msg.setSource(55650U);
    msg.setSourceEntity(57U);
    msg.setDestination(55284U);
    msg.setDestinationEntity(7U);
    const signed char tmp_msg_0[] = {-106, 102, -3, -89, 94, 23, 51, 30, 44, -30, 12, -50, -95, 36, -34, 38, 64, 1, -64, 73, 98, 2, -108, -60, -99, -109, -45, -4, 124, -26, -110, 4, -9, 76, -86, 15, -2, 118, -16, -58, -99, -79, 45, 79, 45, -60, -17, 90, -68, 63, 62, -68, 124, -44, -98, -70, 107, -74, 79, -17, -71, -110, 14, 76, -113, 63, -8, -48, 108, 113, -109, -108, 79, 48, -99, -101, -108, -95, 66, 84, -87, -121, 82, 33, 31, 103, 3, 44, 67, -55, 100, 13, -1, 17, -60, 6, -15, 56, -51, 96, -117, 74, -98, 53, 107, -13, -28, -61, -12, -75, -43, 8, -24, -4, -127, -55, -49, 92, -97, 53, 84, 64, -39, -65, 35, 62, 83, -98, -125, -80, 113, 99, -72, 124, -114, -49, -66, 34, -9, 47, 61, 3, -83, 96, -40, -116, 25, 93, 101, -41, -87, 113, 53, -78, -58, -118, -57, 68, -31, -22, -111, -16, 89, -98, 37, 82, -21, 11, 116, -127, 88, 114, -51, -128, 105, -74, -57, 0, 44, 84, -65, -116, 110, 11, -23, 76, 12, -101, -101, 92, -121, -52, 23, 90, 87, 47, -128, -16, 110, 3, 76, 15};
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
    msg.setTimeStamp(0.20143028414014608);
    msg.setSource(45375U);
    msg.setSourceEntity(152U);
    msg.setDestination(26930U);
    msg.setDestinationEntity(245U);
    const signed char tmp_msg_0[] = {-82, 5, 76, 124, -94, 73, 29, 88, 88, -11, -38, -12, -30, 122, -121, -36, 29, 21, -2, 3, -21, -95, 121, 62, 18, 19, 36, -74, -53};
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
    msg.setTimeStamp(0.2290448757543181);
    msg.setSource(62320U);
    msg.setSourceEntity(93U);
    msg.setDestination(25455U);
    msg.setDestinationEntity(239U);
    const signed char tmp_msg_0[] = {36, -85, 94, 56, 9, 58, -62, 107, -128, -114, 30, -63, 76, 9, 70, -75, 27, 39, 120, -75, 113, -55, 40, -115, -109, -119, -70, -57, 56, 63, 65};
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
    msg.setTimeStamp(0.5572668968225702);
    msg.setSource(13596U);
    msg.setSourceEntity(228U);
    msg.setDestination(56189U);
    msg.setDestinationEntity(239U);
    msg.value = 0.14083817871428805;

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
    msg.setTimeStamp(0.4271730924971483);
    msg.setSource(20359U);
    msg.setSourceEntity(50U);
    msg.setDestination(23924U);
    msg.setDestinationEntity(162U);
    msg.value = 0.4666525327670429;

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
    msg.setTimeStamp(0.1692528299179915);
    msg.setSource(41541U);
    msg.setSourceEntity(141U);
    msg.setDestination(16942U);
    msg.setDestinationEntity(9U);
    msg.value = 0.3779523940884415;

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
    msg.setTimeStamp(0.9135565920972433);
    msg.setSource(20716U);
    msg.setSourceEntity(102U);
    msg.setDestination(3834U);
    msg.setDestinationEntity(12U);
    msg.type = 180U;
    msg.frequency = 1965189906U;
    msg.min_range = 17101U;
    msg.max_range = 205U;
    msg.bits_per_point = 149U;
    msg.scale_factor = 0.9651081207942755;
    const signed char tmp_msg_0[] = {-98, -101, -99, -62, 102, 110, -93, 87, 37, -80, -17, -84, -114};
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
    msg.setTimeStamp(0.016236616726957087);
    msg.setSource(40823U);
    msg.setSourceEntity(200U);
    msg.setDestination(3153U);
    msg.setDestinationEntity(136U);
    msg.type = 23U;
    msg.frequency = 3598074372U;
    msg.min_range = 27454U;
    msg.max_range = 29622U;
    msg.bits_per_point = 234U;
    msg.scale_factor = 0.3022435384220846;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5501460638903809;
    tmp_msg_0.beam_height = 0.5412106214523487;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-111, -53, -78, 18, 62, 119, 36, 115, -43, 55, 31, -33, 53, 104, 72, 12, 42, 90, 65, 113, -48, 94, 10, -17, -119, -57, -62, -54, -61, 119, 113, -14, -61, 97, 113, 72, 22, -11, -84, -35, 30};
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
    msg.setTimeStamp(0.43276886575668694);
    msg.setSource(25510U);
    msg.setSourceEntity(57U);
    msg.setDestination(32049U);
    msg.setDestinationEntity(135U);
    msg.type = 142U;
    msg.frequency = 2569140060U;
    msg.min_range = 46848U;
    msg.max_range = 53885U;
    msg.bits_per_point = 21U;
    msg.scale_factor = 0.2548833606119665;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.00970082061231825;
    tmp_msg_0.beam_height = 0.3597360406658696;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {104, 121, -49, 76, -93, -21, -59, -84, 12, 123, -89, 121, -58, 3, 96, 69, -96, 63, 114, 100, -96, -2, -39, 126, 32, 37, -70, -116, -76, -52, 15, -36, -126, 57, -110, 101, 10, 121, -45, -93, 38, -1, 9, 45, 28, -83, 33, -104, -81, 107, -65, -36, -126, -16, -88, 2, 69, -79, 85, 7, 36, -75, 76, -11, -80, 21, -109, -114, -50, -6, 114, 123, -22, 102, 104, -114, -62, 94, -2, -30, -16, -8, -123, -79, 113, 108, 106, -82, -56, 72, -62, -75, -86, 30, -112, -9, 87, 16, 80, 68, 44, -42, 27, -109, -41, -22, -105, -21, 17, 99, 37, 106, 61, 37, 111, 17, 101, 30, 63, 15, 80, 33, 14, -28, -105, -82, -69, -86, -16, -123, -63, 24, -107, -23, -92, -9, 12, 88};
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
    msg.setTimeStamp(0.8496279340053756);
    msg.setSource(5481U);
    msg.setSourceEntity(155U);
    msg.setDestination(23085U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.36329018427379145);
    msg.setSource(32736U);
    msg.setSourceEntity(121U);
    msg.setDestination(19802U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.3452719249911137);
    msg.setSource(3804U);
    msg.setSourceEntity(170U);
    msg.setDestination(56394U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.24506387664335383);
    msg.setSource(24453U);
    msg.setSourceEntity(21U);
    msg.setDestination(24945U);
    msg.setDestinationEntity(123U);
    msg.op = 41U;

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
    msg.setTimeStamp(0.9951736732328679);
    msg.setSource(6103U);
    msg.setSourceEntity(78U);
    msg.setDestination(59558U);
    msg.setDestinationEntity(231U);
    msg.op = 94U;

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
    msg.setTimeStamp(0.5983941189253223);
    msg.setSource(27536U);
    msg.setSourceEntity(59U);
    msg.setDestination(54109U);
    msg.setDestinationEntity(35U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.29889177513862686);
    msg.setSource(22517U);
    msg.setSourceEntity(198U);
    msg.setDestination(23788U);
    msg.setDestinationEntity(112U);
    msg.value = 0.791493396883669;
    msg.confidence = 0.3851974573932525;
    msg.opmodes.assign("VWJJCOAXMCMDJECJOSAVDIXYKSQNKYNEFLWMLUBWRKTSVOUBSFRDJTBEKGUNZTTZCGLDBIRWZMWKAVWPOLADAPLIQYENNYTPICVBLHIYPEVOQQEFRLTPTPHPERCZHHXUHXSFAMMNJCHZHSXOSMDHBRFBIKJVVGYCQDZPYGVXRULNUDYNGMOO");

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
    msg.setTimeStamp(0.09665542195928689);
    msg.setSource(54980U);
    msg.setSourceEntity(40U);
    msg.setDestination(7643U);
    msg.setDestinationEntity(237U);
    msg.value = 0.5843046681326823;
    msg.confidence = 0.635608425015302;
    msg.opmodes.assign("SKNEODVWWVVOBJBFWJXYIFQRYMYYZGNAAXLAYUYTOQRJJDWRZDPNOTLNLLVCTGSLDCWSBEFGZPSNYHDEEXHQPMIEURLEZTMEYNVWLRSJQCOCQQKJABHUVGZUSKNIIHFUSPMPNXRGVXFGTDTPBSEZAKOCACUIFRRUOTPKUATPZKWAFLBVHXCNYN");

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
    msg.setTimeStamp(0.20743760216030394);
    msg.setSource(4232U);
    msg.setSourceEntity(116U);
    msg.setDestination(15050U);
    msg.setDestinationEntity(48U);
    msg.value = 0.7271882071079377;
    msg.confidence = 0.41715207608254445;
    msg.opmodes.assign("LWCLTEGJWPCNILDZJV");

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
    msg.setTimeStamp(0.9649088632928682);
    msg.setSource(65401U);
    msg.setSourceEntity(149U);
    msg.setDestination(37377U);
    msg.setDestinationEntity(7U);
    msg.itow = 1726869038U;
    msg.lat = 0.4687454657263147;
    msg.lon = 0.5003175733428258;
    msg.height_ell = 0.4559201482526135;
    msg.height_sea = 0.967827348598536;
    msg.hacc = 0.6172172819754197;
    msg.vacc = 0.9341564386139808;
    msg.vel_n = 0.939860221237069;
    msg.vel_e = 0.4539516506824489;
    msg.vel_d = 0.5946695621840556;
    msg.speed = 0.9897845685931647;
    msg.gspeed = 0.09933830627137552;
    msg.heading = 0.7199594064864199;
    msg.sacc = 0.34607020857899806;
    msg.cacc = 0.2856003301559168;

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
    msg.setTimeStamp(0.8338556427020831);
    msg.setSource(62415U);
    msg.setSourceEntity(52U);
    msg.setDestination(14968U);
    msg.setDestinationEntity(18U);
    msg.itow = 1780376725U;
    msg.lat = 0.8675697141519743;
    msg.lon = 0.4570235912562407;
    msg.height_ell = 0.027081587427056575;
    msg.height_sea = 0.6395952483020855;
    msg.hacc = 0.2897881615333666;
    msg.vacc = 0.49758899372534426;
    msg.vel_n = 0.3959943215811653;
    msg.vel_e = 0.8309990735069004;
    msg.vel_d = 0.963744064262598;
    msg.speed = 0.18850342235620154;
    msg.gspeed = 0.5537771701691226;
    msg.heading = 0.36365916648305674;
    msg.sacc = 0.9654836302345684;
    msg.cacc = 0.818578253756465;

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
    msg.setTimeStamp(0.8241213903716224);
    msg.setSource(22181U);
    msg.setSourceEntity(153U);
    msg.setDestination(20012U);
    msg.setDestinationEntity(234U);
    msg.itow = 3689349127U;
    msg.lat = 0.47789657557401344;
    msg.lon = 0.5171024813915459;
    msg.height_ell = 0.8537509856881114;
    msg.height_sea = 0.12539972509312203;
    msg.hacc = 0.014152764829567177;
    msg.vacc = 0.9415982828750505;
    msg.vel_n = 0.20272671777011686;
    msg.vel_e = 0.7125460571800656;
    msg.vel_d = 0.6155446373045869;
    msg.speed = 0.009735107042698976;
    msg.gspeed = 0.10306228960162;
    msg.heading = 0.707974014126561;
    msg.sacc = 0.8774765993804337;
    msg.cacc = 0.753537488057969;

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
    msg.setTimeStamp(0.08526166272217828);
    msg.setSource(29571U);
    msg.setSourceEntity(251U);
    msg.setDestination(11526U);
    msg.setDestinationEntity(21U);
    msg.id = 217U;
    msg.value = 0.16774673309617194;

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
    msg.setTimeStamp(0.16714170029197883);
    msg.setSource(52289U);
    msg.setSourceEntity(200U);
    msg.setDestination(59875U);
    msg.setDestinationEntity(187U);
    msg.id = 195U;
    msg.value = 0.4483919533079276;

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
    msg.setTimeStamp(0.47193190347985614);
    msg.setSource(28409U);
    msg.setSourceEntity(23U);
    msg.setDestination(60775U);
    msg.setDestinationEntity(2U);
    msg.id = 168U;
    msg.value = 0.23669411796328865;

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
    msg.setTimeStamp(0.6034120165525304);
    msg.setSource(52693U);
    msg.setSourceEntity(15U);
    msg.setDestination(30105U);
    msg.setDestinationEntity(30U);
    msg.x = 0.36340765045609336;
    msg.y = 0.8754058088611103;
    msg.z = 0.8639681742830558;
    msg.phi = 0.51941933053598;
    msg.theta = 0.16398520635812053;
    msg.psi = 0.10009717823275066;

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
    msg.setTimeStamp(0.377845136110288);
    msg.setSource(63893U);
    msg.setSourceEntity(192U);
    msg.setDestination(54624U);
    msg.setDestinationEntity(81U);
    msg.x = 0.9273286788600199;
    msg.y = 0.3051376051102488;
    msg.z = 0.9205750101457052;
    msg.phi = 0.7053019266268332;
    msg.theta = 0.24020021011816484;
    msg.psi = 0.29017426031732385;

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
    msg.setTimeStamp(0.19902034095259546);
    msg.setSource(59886U);
    msg.setSourceEntity(174U);
    msg.setDestination(52886U);
    msg.setDestinationEntity(210U);
    msg.x = 0.7592680531823253;
    msg.y = 0.04796822616103946;
    msg.z = 0.5614883121833462;
    msg.phi = 0.8698919854048933;
    msg.theta = 0.18039817408821646;
    msg.psi = 0.8414055631526121;

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
    msg.setTimeStamp(0.33054510206645293);
    msg.setSource(13732U);
    msg.setSourceEntity(90U);
    msg.setDestination(24735U);
    msg.setDestinationEntity(121U);
    msg.beam_width = 0.7040621474748255;
    msg.beam_height = 0.9218277776510664;

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
    msg.setTimeStamp(0.8302707231132841);
    msg.setSource(7711U);
    msg.setSourceEntity(58U);
    msg.setDestination(38459U);
    msg.setDestinationEntity(163U);
    msg.beam_width = 0.8260507212511276;
    msg.beam_height = 0.09423103744267258;

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
    msg.setTimeStamp(0.04019710047073621);
    msg.setSource(13362U);
    msg.setSourceEntity(130U);
    msg.setDestination(15827U);
    msg.setDestinationEntity(169U);
    msg.beam_width = 0.37788661707293625;
    msg.beam_height = 0.34798363463415494;

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
    msg.setTimeStamp(0.9359993499250462);
    msg.setSource(17629U);
    msg.setSourceEntity(191U);
    msg.setDestination(722U);
    msg.setDestinationEntity(120U);
    msg.sane = 74U;

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
    msg.setTimeStamp(0.44201870351549977);
    msg.setSource(64864U);
    msg.setSourceEntity(23U);
    msg.setDestination(18098U);
    msg.setDestinationEntity(97U);
    msg.sane = 77U;

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
    msg.setTimeStamp(0.25823029255163976);
    msg.setSource(45320U);
    msg.setSourceEntity(142U);
    msg.setDestination(53785U);
    msg.setDestinationEntity(205U);
    msg.sane = 53U;

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
    msg.setTimeStamp(0.6956655974497085);
    msg.setSource(18784U);
    msg.setSourceEntity(245U);
    msg.setDestination(2170U);
    msg.setDestinationEntity(190U);
    msg.value = 0.6313846715225268;

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
    msg.setTimeStamp(0.8528146587771446);
    msg.setSource(1536U);
    msg.setSourceEntity(160U);
    msg.setDestination(3429U);
    msg.setDestinationEntity(10U);
    msg.value = 0.3817116389755485;

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
    msg.setTimeStamp(0.8099884232556999);
    msg.setSource(38675U);
    msg.setSourceEntity(138U);
    msg.setDestination(22588U);
    msg.setDestinationEntity(247U);
    msg.value = 0.5740212712307864;

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
    msg.setTimeStamp(0.9934892378443665);
    msg.setSource(5616U);
    msg.setSourceEntity(239U);
    msg.setDestination(51365U);
    msg.setDestinationEntity(239U);
    msg.value = 0.3706102285724925;

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
    msg.setTimeStamp(0.5560155730619898);
    msg.setSource(48959U);
    msg.setSourceEntity(110U);
    msg.setDestination(10148U);
    msg.setDestinationEntity(181U);
    msg.value = 0.09499658128781419;

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
    msg.setTimeStamp(0.9801324208784696);
    msg.setSource(37602U);
    msg.setSourceEntity(205U);
    msg.setDestination(3314U);
    msg.setDestinationEntity(50U);
    msg.value = 0.27495184202811085;

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
    msg.setTimeStamp(0.8956813852028552);
    msg.setSource(28145U);
    msg.setSourceEntity(47U);
    msg.setDestination(46888U);
    msg.setDestinationEntity(134U);
    msg.value = 0.03244095160785487;

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
    msg.setTimeStamp(0.11358436707281372);
    msg.setSource(3346U);
    msg.setSourceEntity(226U);
    msg.setDestination(18363U);
    msg.setDestinationEntity(126U);
    msg.value = 0.3127023889651448;

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
    msg.setTimeStamp(0.6383808929305173);
    msg.setSource(4272U);
    msg.setSourceEntity(0U);
    msg.setDestination(6340U);
    msg.setDestinationEntity(50U);
    msg.value = 0.6404559099677771;

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
    msg.setTimeStamp(0.8141218975287423);
    msg.setSource(50276U);
    msg.setSourceEntity(105U);
    msg.setDestination(5283U);
    msg.setDestinationEntity(103U);
    msg.value = 0.3098697158137176;

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
    msg.setTimeStamp(0.5282120354304679);
    msg.setSource(36425U);
    msg.setSourceEntity(42U);
    msg.setDestination(65214U);
    msg.setDestinationEntity(167U);
    msg.value = 0.6611454604311724;

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
    msg.setTimeStamp(0.9081470895469347);
    msg.setSource(51933U);
    msg.setSourceEntity(159U);
    msg.setDestination(22000U);
    msg.setDestinationEntity(48U);
    msg.value = 0.2924420157022164;

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
    msg.setTimeStamp(0.7747811473057671);
    msg.setSource(51735U);
    msg.setSourceEntity(78U);
    msg.setDestination(42570U);
    msg.setDestinationEntity(96U);
    msg.value = 0.24573824847689996;

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
    msg.setTimeStamp(0.6097953939022479);
    msg.setSource(58187U);
    msg.setSourceEntity(222U);
    msg.setDestination(16409U);
    msg.setDestinationEntity(195U);
    msg.value = 0.3051872216211675;

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
    msg.setTimeStamp(0.9674154204849376);
    msg.setSource(56379U);
    msg.setSourceEntity(136U);
    msg.setDestination(31693U);
    msg.setDestinationEntity(11U);
    msg.value = 0.40624267625162747;

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
    msg.setTimeStamp(0.25983833556339764);
    msg.setSource(39199U);
    msg.setSourceEntity(186U);
    msg.setDestination(15765U);
    msg.setDestinationEntity(162U);
    msg.value = 0.9784604829735213;

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
    msg.setTimeStamp(0.8965911504509733);
    msg.setSource(44348U);
    msg.setSourceEntity(154U);
    msg.setDestination(52699U);
    msg.setDestinationEntity(231U);
    msg.value = 0.06514223942708564;

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
    msg.setTimeStamp(0.6684474851349606);
    msg.setSource(20616U);
    msg.setSourceEntity(108U);
    msg.setDestination(43824U);
    msg.setDestinationEntity(168U);
    msg.value = 0.19427956550717573;

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
    msg.setTimeStamp(0.9356226834502683);
    msg.setSource(27817U);
    msg.setSourceEntity(90U);
    msg.setDestination(23636U);
    msg.setDestinationEntity(78U);
    msg.value = 0.14207369538623427;

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
    msg.setTimeStamp(0.05823365701196659);
    msg.setSource(35373U);
    msg.setSourceEntity(105U);
    msg.setDestination(5795U);
    msg.setDestinationEntity(193U);
    msg.value = 0.7052657555246261;

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
    msg.setTimeStamp(0.049981199171941215);
    msg.setSource(37843U);
    msg.setSourceEntity(140U);
    msg.setDestination(47584U);
    msg.setDestinationEntity(84U);
    msg.value = 0.7140336708724376;

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
    msg.setTimeStamp(0.6639435702192343);
    msg.setSource(14261U);
    msg.setSourceEntity(142U);
    msg.setDestination(8873U);
    msg.setDestinationEntity(56U);
    msg.value = 0.12668322686850375;

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
    msg.setTimeStamp(0.6380069645869599);
    msg.setSource(57641U);
    msg.setSourceEntity(242U);
    msg.setDestination(26162U);
    msg.setDestinationEntity(15U);
    msg.value = 0.8072267360848729;

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
    msg.setTimeStamp(0.0204837788875043);
    msg.setSource(10219U);
    msg.setSourceEntity(108U);
    msg.setDestination(54794U);
    msg.setDestinationEntity(157U);
    msg.value = 0.9904048847618979;

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
    msg.setTimeStamp(0.8267857024786234);
    msg.setSource(7144U);
    msg.setSourceEntity(65U);
    msg.setDestination(60354U);
    msg.setDestinationEntity(58U);
    msg.validity = 43473U;
    msg.type = 15U;
    msg.tow = 12243065U;
    msg.base_lat = 0.5859616021909181;
    msg.base_lon = 0.7784467460678405;
    msg.base_height = 0.14309288524228037;
    msg.n = 0.560961191626344;
    msg.e = 0.2095555247707529;
    msg.d = 0.2264943698837526;
    msg.v_n = 0.33348086828150203;
    msg.v_e = 0.39087764537554226;
    msg.v_d = 0.7856811388701417;
    msg.satellites = 215U;
    msg.iar_hyp = 5089U;
    msg.iar_ratio = 0.0883204147665565;

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
    msg.setTimeStamp(0.8903894863906636);
    msg.setSource(47537U);
    msg.setSourceEntity(152U);
    msg.setDestination(35123U);
    msg.setDestinationEntity(112U);
    msg.validity = 43286U;
    msg.type = 48U;
    msg.tow = 192377920U;
    msg.base_lat = 0.9189212727958451;
    msg.base_lon = 0.9874410651058007;
    msg.base_height = 0.7911499577256337;
    msg.n = 0.7430449693937965;
    msg.e = 0.29860248643730936;
    msg.d = 0.5390157445270508;
    msg.v_n = 0.8933179626150646;
    msg.v_e = 0.6671088542788699;
    msg.v_d = 0.6114875691353482;
    msg.satellites = 143U;
    msg.iar_hyp = 20255U;
    msg.iar_ratio = 0.4045054981013164;

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
    msg.setTimeStamp(0.5884069918758646);
    msg.setSource(4858U);
    msg.setSourceEntity(202U);
    msg.setDestination(62187U);
    msg.setDestinationEntity(226U);
    msg.validity = 2171U;
    msg.type = 48U;
    msg.tow = 924246703U;
    msg.base_lat = 0.6991363002798879;
    msg.base_lon = 0.11630440428607225;
    msg.base_height = 0.7858748452121316;
    msg.n = 0.11040905066840023;
    msg.e = 0.33621831860697804;
    msg.d = 0.5085059060636014;
    msg.v_n = 0.7886092313695539;
    msg.v_e = 0.6885656631984183;
    msg.v_d = 0.4799829342505598;
    msg.satellites = 44U;
    msg.iar_hyp = 22694U;
    msg.iar_ratio = 0.3209815037108341;

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
    msg.setTimeStamp(0.8860370237398748);
    msg.setSource(37509U);
    msg.setSourceEntity(70U);
    msg.setDestination(8174U);
    msg.setDestinationEntity(150U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6967450157157216;
    tmp_msg_0.lon = 0.34004350337977185;
    tmp_msg_0.height = 0.13811748917546718;
    tmp_msg_0.x = 0.32168631088712607;
    tmp_msg_0.y = 0.6048563693739537;
    tmp_msg_0.z = 0.0674797226025029;
    tmp_msg_0.phi = 0.23951105277415674;
    tmp_msg_0.theta = 0.28201509079545006;
    tmp_msg_0.psi = 0.7141579447173889;
    tmp_msg_0.u = 0.27625450633693105;
    tmp_msg_0.v = 0.5250868175170869;
    tmp_msg_0.w = 0.9946864272930502;
    tmp_msg_0.vx = 0.32891104419611705;
    tmp_msg_0.vy = 0.16452848769784423;
    tmp_msg_0.vz = 0.6742000894678072;
    tmp_msg_0.p = 0.9130242999860716;
    tmp_msg_0.q = 0.5072761365672517;
    tmp_msg_0.r = 0.7529481100473837;
    tmp_msg_0.depth = 0.25047847820218516;
    tmp_msg_0.alt = 0.3579189053918692;
    msg.state.set(tmp_msg_0);
    msg.type = 196U;

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
    msg.setTimeStamp(0.6663671738606237);
    msg.setSource(24519U);
    msg.setSourceEntity(42U);
    msg.setDestination(61867U);
    msg.setDestinationEntity(41U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5643055650846585;
    tmp_msg_0.lon = 0.9623467278417044;
    tmp_msg_0.height = 0.9243443633049008;
    tmp_msg_0.x = 0.5689146624889176;
    tmp_msg_0.y = 0.8871417981080388;
    tmp_msg_0.z = 0.6636246555705291;
    tmp_msg_0.phi = 0.7159138441751545;
    tmp_msg_0.theta = 0.7812444988783098;
    tmp_msg_0.psi = 0.4855032194161112;
    tmp_msg_0.u = 0.021550155758498835;
    tmp_msg_0.v = 0.74781761885744;
    tmp_msg_0.w = 0.84445801968688;
    tmp_msg_0.vx = 0.4180894440230558;
    tmp_msg_0.vy = 0.5851669904731434;
    tmp_msg_0.vz = 0.3154588853621979;
    tmp_msg_0.p = 0.7782199209655215;
    tmp_msg_0.q = 0.5759480655719976;
    tmp_msg_0.r = 0.33523596934138267;
    tmp_msg_0.depth = 0.2394983484237877;
    tmp_msg_0.alt = 0.13637368656344018;
    msg.state.set(tmp_msg_0);
    msg.type = 136U;

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
    msg.setTimeStamp(0.9030905854711497);
    msg.setSource(54112U);
    msg.setSourceEntity(133U);
    msg.setDestination(34328U);
    msg.setDestinationEntity(33U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.764598376501807;
    tmp_msg_0.lon = 0.4000872329663697;
    tmp_msg_0.height = 0.9896391932479753;
    tmp_msg_0.x = 0.1403231436707124;
    tmp_msg_0.y = 0.5352484058116835;
    tmp_msg_0.z = 0.9065393248708299;
    tmp_msg_0.phi = 0.8297091717988039;
    tmp_msg_0.theta = 0.7445238483312804;
    tmp_msg_0.psi = 0.8375063152724403;
    tmp_msg_0.u = 0.8413282553302796;
    tmp_msg_0.v = 0.7141116243960702;
    tmp_msg_0.w = 0.42363033833955765;
    tmp_msg_0.vx = 0.9506238694650523;
    tmp_msg_0.vy = 0.22950668448778044;
    tmp_msg_0.vz = 0.08569770899320872;
    tmp_msg_0.p = 0.7331748029082148;
    tmp_msg_0.q = 0.9725134241806621;
    tmp_msg_0.r = 0.9367819404422754;
    tmp_msg_0.depth = 0.09716313570927093;
    tmp_msg_0.alt = 0.19118765225032597;
    msg.state.set(tmp_msg_0);
    msg.type = 98U;

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
    msg.setTimeStamp(0.7338781067805987);
    msg.setSource(12671U);
    msg.setSourceEntity(199U);
    msg.setDestination(47083U);
    msg.setDestinationEntity(105U);
    msg.value = 0.5260456404957019;

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
    msg.setTimeStamp(0.659786964222774);
    msg.setSource(43U);
    msg.setSourceEntity(86U);
    msg.setDestination(32861U);
    msg.setDestinationEntity(37U);
    msg.value = 0.4814366109741902;

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
    msg.setTimeStamp(0.17131761038647364);
    msg.setSource(28056U);
    msg.setSourceEntity(250U);
    msg.setDestination(15360U);
    msg.setDestinationEntity(122U);
    msg.value = 0.3337302559291412;

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
    msg.setTimeStamp(0.27194483669200575);
    msg.setSource(50572U);
    msg.setSourceEntity(40U);
    msg.setDestination(3323U);
    msg.setDestinationEntity(196U);
    msg.value = 0.15550332067828243;

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
    msg.setTimeStamp(0.15628697469691233);
    msg.setSource(53293U);
    msg.setSourceEntity(125U);
    msg.setDestination(46525U);
    msg.setDestinationEntity(114U);
    msg.value = 0.14808809694180425;

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
    msg.setTimeStamp(0.4740018592716052);
    msg.setSource(21656U);
    msg.setSourceEntity(22U);
    msg.setDestination(21380U);
    msg.setDestinationEntity(173U);
    msg.value = 0.993927660628176;

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
    msg.setTimeStamp(0.961345493468674);
    msg.setSource(62369U);
    msg.setSourceEntity(31U);
    msg.setDestination(16692U);
    msg.setDestinationEntity(2U);
    msg.value = 0.236928953894041;

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
    msg.setTimeStamp(0.5799228806909955);
    msg.setSource(15817U);
    msg.setSourceEntity(169U);
    msg.setDestination(24807U);
    msg.setDestinationEntity(7U);
    msg.value = 0.8259792260283382;

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
    msg.setTimeStamp(0.3859508451243392);
    msg.setSource(34041U);
    msg.setSourceEntity(56U);
    msg.setDestination(41022U);
    msg.setDestinationEntity(12U);
    msg.value = 0.4247343320477286;

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
    msg.setTimeStamp(0.4886925008956968);
    msg.setSource(33154U);
    msg.setSourceEntity(140U);
    msg.setDestination(60708U);
    msg.setDestinationEntity(150U);
    msg.value = 0.8960439525915663;

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
    msg.setTimeStamp(0.9519936970411846);
    msg.setSource(9896U);
    msg.setSourceEntity(18U);
    msg.setDestination(48967U);
    msg.setDestinationEntity(241U);
    msg.value = 0.8314548712980724;

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
    msg.setTimeStamp(0.8046235766610326);
    msg.setSource(12071U);
    msg.setSourceEntity(178U);
    msg.setDestination(46647U);
    msg.setDestinationEntity(157U);
    msg.value = 0.20473753578646392;

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
    msg.setTimeStamp(0.7070402538418894);
    msg.setSource(45731U);
    msg.setSourceEntity(45U);
    msg.setDestination(44284U);
    msg.setDestinationEntity(55U);
    msg.value = 0.2246157148954021;

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
    msg.setTimeStamp(0.026885519234782884);
    msg.setSource(30922U);
    msg.setSourceEntity(11U);
    msg.setDestination(23002U);
    msg.setDestinationEntity(86U);
    msg.value = 0.20492635239390344;

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
    msg.setTimeStamp(0.7327043984685325);
    msg.setSource(14910U);
    msg.setSourceEntity(159U);
    msg.setDestination(7315U);
    msg.setDestinationEntity(202U);
    msg.value = 0.0851777700398032;

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
    msg.setTimeStamp(0.4223556701876464);
    msg.setSource(38799U);
    msg.setSourceEntity(101U);
    msg.setDestination(8977U);
    msg.setDestinationEntity(233U);
    msg.id = 78U;
    msg.zoom = 74U;
    msg.action = 199U;

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
    msg.setTimeStamp(0.7827993939458597);
    msg.setSource(16322U);
    msg.setSourceEntity(61U);
    msg.setDestination(17462U);
    msg.setDestinationEntity(81U);
    msg.id = 3U;
    msg.zoom = 101U;
    msg.action = 104U;

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
    msg.setTimeStamp(0.1650261299070146);
    msg.setSource(51158U);
    msg.setSourceEntity(206U);
    msg.setDestination(57111U);
    msg.setDestinationEntity(28U);
    msg.id = 177U;
    msg.zoom = 156U;
    msg.action = 39U;

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
    msg.setTimeStamp(0.16429840288592767);
    msg.setSource(27023U);
    msg.setSourceEntity(157U);
    msg.setDestination(59523U);
    msg.setDestinationEntity(219U);
    msg.id = 14U;
    msg.value = 0.43127773949065673;

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
    msg.setTimeStamp(0.8471173215560308);
    msg.setSource(4622U);
    msg.setSourceEntity(97U);
    msg.setDestination(31648U);
    msg.setDestinationEntity(150U);
    msg.id = 65U;
    msg.value = 0.19092141247583017;

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
    msg.setTimeStamp(0.633466968246543);
    msg.setSource(12261U);
    msg.setSourceEntity(61U);
    msg.setDestination(50189U);
    msg.setDestinationEntity(38U);
    msg.id = 137U;
    msg.value = 0.602270491590715;

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
    msg.setTimeStamp(0.5493188108574371);
    msg.setSource(50672U);
    msg.setSourceEntity(83U);
    msg.setDestination(30138U);
    msg.setDestinationEntity(227U);
    msg.id = 51U;
    msg.value = 0.26282305668657957;

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
    msg.setTimeStamp(0.013417324206386638);
    msg.setSource(45955U);
    msg.setSourceEntity(46U);
    msg.setDestination(8801U);
    msg.setDestinationEntity(49U);
    msg.id = 112U;
    msg.value = 0.9185006363696536;

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
    msg.setTimeStamp(0.8289483275403144);
    msg.setSource(56440U);
    msg.setSourceEntity(216U);
    msg.setDestination(61576U);
    msg.setDestinationEntity(93U);
    msg.id = 1U;
    msg.value = 0.5760967103120395;

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
    msg.setTimeStamp(0.5480560335157973);
    msg.setSource(44437U);
    msg.setSourceEntity(72U);
    msg.setDestination(30723U);
    msg.setDestinationEntity(75U);
    msg.id = 56U;
    msg.angle = 0.8742678010692624;

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
    msg.setTimeStamp(0.6087093694855233);
    msg.setSource(42074U);
    msg.setSourceEntity(105U);
    msg.setDestination(12937U);
    msg.setDestinationEntity(89U);
    msg.id = 200U;
    msg.angle = 0.3720409767168633;

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
    msg.setTimeStamp(0.9930794069235189);
    msg.setSource(23649U);
    msg.setSourceEntity(253U);
    msg.setDestination(28232U);
    msg.setDestinationEntity(241U);
    msg.id = 33U;
    msg.angle = 0.37903666885826204;

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
    msg.setTimeStamp(0.9718453118261186);
    msg.setSource(38881U);
    msg.setSourceEntity(213U);
    msg.setDestination(54319U);
    msg.setDestinationEntity(81U);
    msg.op = 143U;
    msg.actions.assign("PNWRKIJHVAGHXIIJYFAONDEEZVQXATYUFLROXUXUSBVFXSNABFBU");

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
    msg.setTimeStamp(0.9082815663419532);
    msg.setSource(61669U);
    msg.setSourceEntity(180U);
    msg.setDestination(47156U);
    msg.setDestinationEntity(251U);
    msg.op = 8U;
    msg.actions.assign("EWCYYSDYDGIIIDPXMYOYNRQTPZNOPQUFWLDFULZXLXMQEKCPJBQJGKJKSUZFIILSJPWSWCORZHAMCNMRKBDODPNRXTUKVEZEYLTRUJTCBPWVCWFHOZACQBJKHMMGUMVBXAOTCPSVSHCFVDHBMNZOESOLTHUFXNI");

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
    msg.setTimeStamp(0.6731675594144402);
    msg.setSource(30109U);
    msg.setSourceEntity(12U);
    msg.setDestination(42770U);
    msg.setDestinationEntity(235U);
    msg.op = 204U;
    msg.actions.assign("UYVWKYNLMOOIDIMTALLQXJGXYCRPUQCLWBGDMIHEQKZUWCNPBUJSJWKVLCOWOQMXBEHNKXGRKEKIBRFTHZANPBSNMSPSYHSSCFYSQBKDGTXPZLVZCAOFVBJAERJBMGAUHTDPMNEBJD");

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
    msg.setTimeStamp(0.5239099245684019);
    msg.setSource(32570U);
    msg.setSourceEntity(52U);
    msg.setDestination(5651U);
    msg.setDestinationEntity(84U);
    msg.actions.assign("ZVQXIQWFMHAODAWIYARYKKJZNOHMLOKAEYBDMFBVRRBZEFKNJHBJARREPKASIWBCESTOWPHACJTATDYFKQMACUVGFXYNLLQUCEFLOJOOCZTUCIXMHXUBXVZCJXKDCYYURQIGSNZGFVMPMTEVQWTYPHRMOLAQPGZEXHDFTPJHFGVNLVXWLVFLLBLYGDIIJSPWKCZDJEQKEINTRXIEGRMTSNHSSPHISPTJZPXDURNKCQOSB");

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
    msg.setTimeStamp(0.29281680664423093);
    msg.setSource(45129U);
    msg.setSourceEntity(251U);
    msg.setDestination(22179U);
    msg.setDestinationEntity(189U);
    msg.actions.assign("UMKJSOIDOIQLGTHYFCANKBNOKFBRBSMHOPSRTANTGNXZVEUWKJRHCRKXYXDLUJYDMZQEPCYWEFYYRFQWCAVTDLOUOBEHRMJXMCXLHQIRJDDVAOHFVBSTAIFPJMBXFQUZDGBXLMNCAEWRXKYGYKZAPUIZW");

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
    msg.setTimeStamp(0.8699859841610469);
    msg.setSource(31802U);
    msg.setSourceEntity(129U);
    msg.setDestination(18245U);
    msg.setDestinationEntity(239U);
    msg.actions.assign("TYXYOBRXCUIQFJJAVGSYLKWDSXWDSEVPQKTEXOTOSKRFQJPGINFZBWNEMVCGNJONKOFKGPETTMUMIPHPBLRQBEHRXAQHTFRWMDARI");

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
    msg.setTimeStamp(0.9867487245004446);
    msg.setSource(13998U);
    msg.setSourceEntity(34U);
    msg.setDestination(41320U);
    msg.setDestinationEntity(247U);
    msg.button = 92U;
    msg.value = 37U;

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
    msg.setTimeStamp(0.4583637065528734);
    msg.setSource(32640U);
    msg.setSourceEntity(246U);
    msg.setDestination(11157U);
    msg.setDestinationEntity(117U);
    msg.button = 59U;
    msg.value = 252U;

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
    msg.setTimeStamp(0.9276566577989507);
    msg.setSource(61698U);
    msg.setSourceEntity(232U);
    msg.setDestination(3833U);
    msg.setDestinationEntity(91U);
    msg.button = 116U;
    msg.value = 38U;

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
    msg.setTimeStamp(0.7131639185420617);
    msg.setSource(42149U);
    msg.setSourceEntity(144U);
    msg.setDestination(48127U);
    msg.setDestinationEntity(50U);
    msg.op = 162U;
    msg.text.assign("NGEHUPBWSQZMMPHZDHPAFGNVJSQLNQRXYIRVMGWASDOONVFZXWURZIIEBNCYGLXTFQLBROAGNYTZXLGDGPFXKICREMJSDKKSLXTFLIDLTTBVRCFPNYQAKVSZAULZJQEOLAUDEQOJHPYKLPIUIQKCMEJXSCRTBJKJSOKGTUWMPGAWHEBBVYMIHUEFAVJURW");

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
    msg.setTimeStamp(0.592920657838616);
    msg.setSource(32815U);
    msg.setSourceEntity(191U);
    msg.setDestination(10611U);
    msg.setDestinationEntity(199U);
    msg.op = 125U;
    msg.text.assign("PZQWVKKKXSGCOBRHIMIWJVBLBDSGMXCGLCEWTANBYRDDRHXSJZMJLNTYRIQUNPQGWOCFDXNMWZCZNAFUGLCBBAIBIPPJFLUGWPVSLYHVDBREQAWYUKTVCNTSTTNJYEPVQHWUSZMRHAMOFPQKMSLFDZKRROYUJCMAEKJXBAEDQZHMEYUZSWL");

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
    msg.setTimeStamp(0.22950107466586334);
    msg.setSource(40902U);
    msg.setSourceEntity(66U);
    msg.setDestination(14334U);
    msg.setDestinationEntity(194U);
    msg.op = 108U;
    msg.text.assign("CFHBIQFBIIATFJQYMBESCKFBHSWMQWGIGPRSDIZCTTWKEZHCPLVNRVUBODSMBZPDGVFOWMVFVBXQUORGNUEZKVNGLNOTYFLQSJRONBUTZXJZMAFHUWYSQAANMIRIJEJERGAJY");

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
    msg.setTimeStamp(0.47433516811666054);
    msg.setSource(53621U);
    msg.setSourceEntity(23U);
    msg.setDestination(15681U);
    msg.setDestinationEntity(74U);
    msg.op = 134U;
    msg.time_remain = 0.6777711973608106;
    msg.sched_time = 0.9298854078427478;

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
    msg.setTimeStamp(0.5692674638977269);
    msg.setSource(24361U);
    msg.setSourceEntity(43U);
    msg.setDestination(30762U);
    msg.setDestinationEntity(19U);
    msg.op = 198U;
    msg.time_remain = 0.6906055142944473;
    msg.sched_time = 0.002290784372936394;

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
    msg.setTimeStamp(0.15857864655255427);
    msg.setSource(9570U);
    msg.setSourceEntity(191U);
    msg.setDestination(30921U);
    msg.setDestinationEntity(169U);
    msg.op = 38U;
    msg.time_remain = 0.7894011310852455;
    msg.sched_time = 0.7143924330843076;

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
    msg.setTimeStamp(0.5021755129510332);
    msg.setSource(3080U);
    msg.setSourceEntity(122U);
    msg.setDestination(19496U);
    msg.setDestinationEntity(206U);
    msg.name.assign("DMTPKYJWPFWOHVPVXUROZUJPDKVTDCDTQCJSCKXVTLXIPNDFKSYGRCSSIMELEDGLBBFVQHLKLGTJWUSSRKZDEMEOLFMAQBQXINWEGHOIQFUJWUAJXUZUBSAYGSIZFCPHLLAYNRWJYJBPNOHHMFWMX");
    msg.op = 230U;
    msg.sched_time = 0.08227415728745313;

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
    msg.setTimeStamp(0.8120487641128377);
    msg.setSource(62486U);
    msg.setSourceEntity(85U);
    msg.setDestination(12036U);
    msg.setDestinationEntity(62U);
    msg.name.assign("VJKGSVVGAMDNGAHHFRZRWESJYWKNMUYDWFQSPBIGLAIITDOOXQQTKJFYUPXLNZWLEHBIOFSIDFHHWYCFZRZNXLWXMGVMCYDKNJIJIHQSGZITGETVUFJYRYRQKPAMPRAOSECFMWEAUWADMDTCBHLUSVLTRUHBCFTBVBJQLUNZPLYGKKABPAROKBXCOIYKXV");
    msg.op = 164U;
    msg.sched_time = 0.8783265710405632;

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
    msg.setTimeStamp(0.8647929348221305);
    msg.setSource(38224U);
    msg.setSourceEntity(146U);
    msg.setDestination(27404U);
    msg.setDestinationEntity(91U);
    msg.name.assign("PMRLOAIZMBGSHDLHTGQERXQEJTESENRBRYNQDLCMVMZXIPWAQEKSTIKBTHSFTCKSCAZHZJHBC");
    msg.op = 162U;
    msg.sched_time = 0.7952959099204315;

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
    msg.setTimeStamp(0.4076394780884439);
    msg.setSource(40242U);
    msg.setSourceEntity(23U);
    msg.setDestination(15619U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.37722109168740525);
    msg.setSource(9122U);
    msg.setSourceEntity(208U);
    msg.setDestination(3813U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.9739602573975064);
    msg.setSource(14105U);
    msg.setSourceEntity(0U);
    msg.setDestination(3074U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.9696117623733859);
    msg.setSource(19447U);
    msg.setSourceEntity(118U);
    msg.setDestination(681U);
    msg.setDestinationEntity(193U);
    msg.name.assign("RGUWBCAZOWTLOFPKMPVNKAYEKAGUYYLXNASXOVQFXRPHCPLRDDDWGCSQTAUTILZWAVFEFHQZJUMWBWOTYGVVOQKUEREKMZSTSHBLAHUQTJGHLGZDILNZCAODFWPHNMUHADAVUHECTRJJCKIDYYRDBUYEMWYBIJINONGJKVUCPJSBETEMXSXYRNIMOFDFQQKLBNTFSFM");
    msg.state = 181U;

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
    msg.setTimeStamp(0.13949277625935064);
    msg.setSource(26259U);
    msg.setSourceEntity(124U);
    msg.setDestination(13523U);
    msg.setDestinationEntity(106U);
    msg.name.assign("EJWKZCKXLTQGOFNQUDKPTOBRPGRYXZAAWCVKBWUCSPSLDMMJSMLEXDPQTNSELBHYRKHAPOOZQWDZYSMICEGWBLZEXBETAIGWOJBEVTJCIHIGOBI");
    msg.state = 3U;

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
    msg.setTimeStamp(0.07514873439330372);
    msg.setSource(49562U);
    msg.setSourceEntity(94U);
    msg.setDestination(48289U);
    msg.setDestinationEntity(235U);
    msg.name.assign("PMCJHLOTLFXAQZTVQKTRQUBZXQEEZGRAGNQVOVYNPQLAWTSDWYUIHFVZPSPJPBYFHRDPERISDCNRBDWCNXBZCFEWKIKJSWLZUYTUMFTJVXJPPWEABKAEZLDIXOWEAUVACVZFJDSHXLSTAROBYIMHUXUQOKXCYALREMKDBJKUTDZMIUQWZIGSWKXPYFFYOQFCRYTNNBOGUGMNVNIIRNMOGONCSRDABQBLDCESYGHJKGJOMPGHT");
    msg.state = 50U;

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
    msg.setTimeStamp(0.6635961388734223);
    msg.setSource(58334U);
    msg.setSourceEntity(91U);
    msg.setDestination(9526U);
    msg.setDestinationEntity(75U);
    msg.name.assign("IGPFAYADZQUSJPTNLFDKZTAYCVIKZLTSFKSPNXMGHMKNPWIGHFGREXTQOZTTVDVIXRCRVHQWBHJNJKULVDLUWCPBLELDVCDCGVCOSBUQUROWTRZALQUBHCSNMMYLIAVYYDQXEGPEBMV");
    msg.value = 99U;

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
    msg.setTimeStamp(0.9526121187934322);
    msg.setSource(7111U);
    msg.setSourceEntity(29U);
    msg.setDestination(6547U);
    msg.setDestinationEntity(129U);
    msg.name.assign("VCLTNNXKHSEDFJMNHWUJFSQQQHRENUJAFJWPEVYJQGEBKGTFXSUIZHYIEDZRKOJUMOOFAGZREBSLZVOMDXJWVTOJOGVSMHCKCWPXHTAZYNFRBH");
    msg.value = 183U;

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
    msg.setTimeStamp(0.544336353482509);
    msg.setSource(34729U);
    msg.setSourceEntity(63U);
    msg.setDestination(49238U);
    msg.setDestinationEntity(103U);
    msg.name.assign("OQRSPSGFQWIWGGNJHZCGMDNNZRPJQGBDMDNEXOJUHIKTCAWHVCWPXKOGXRSLOKQKEBAKGRSDXPPITFBCNXDCTZMKTTBSRPBJVM");
    msg.value = 147U;

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
    msg.setTimeStamp(0.3698861709562765);
    msg.setSource(23411U);
    msg.setSourceEntity(231U);
    msg.setDestination(54058U);
    msg.setDestinationEntity(67U);
    msg.name.assign("OPMBHOHVZFDOIEJJGXMKXJXDEHJONUXCKIFKUDXCVXBH");

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
    msg.setTimeStamp(0.9674927073008);
    msg.setSource(64643U);
    msg.setSourceEntity(233U);
    msg.setDestination(41014U);
    msg.setDestinationEntity(226U);
    msg.name.assign("VFKCQNHXIKXTDSCAPRYAAQKZFLZBQUOOWFEDBQWGTNDRUEHOBUUGISMGZIVBPFYDJTIDUJAREBKTFREMDLJTOLDIMPXYKYMYHWGMJB");

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
    msg.setTimeStamp(0.15657396038378713);
    msg.setSource(22183U);
    msg.setSourceEntity(181U);
    msg.setDestination(41617U);
    msg.setDestinationEntity(158U);
    msg.name.assign("LUAJIUYHIDKUCQGBOBSRZWGSNJPFEWTWFPYXKXYZUILHDOHMJTLTGOGFGRCJKLYLXDXSLEDJVKVFMKHHTHCXBIGUBTQFMYJEVULPQURONERUYTKSCAOPFSAAVFWZETQTDIMNANBVNZKHPBZBYJANQGSKDVWROBFYSOBUNRGWLOXJVHIOHUSSGXZEIWAMWEVCEDYIVKQFNNBJ");

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
    msg.setTimeStamp(0.8137469425452926);
    msg.setSource(23901U);
    msg.setSourceEntity(16U);
    msg.setDestination(11716U);
    msg.setDestinationEntity(104U);
    msg.name.assign("DIETLOKKPJLMOXBDCCMTLPDTBSNZDQNAST");
    msg.value = 14U;

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
    msg.setTimeStamp(0.894844073988305);
    msg.setSource(63103U);
    msg.setSourceEntity(165U);
    msg.setDestination(58757U);
    msg.setDestinationEntity(109U);
    msg.name.assign("YTNJHXYLAMNUHQOILKDTFKNWTIMWKQZSGNNGPPTVFKAAGOMRSHRBBTEEHUIBKXGVVXZWLDFFXIWARPVDOUCCIVLAQFBJCJHDXBBMHYYBURSPJYAVJJFWJHQIKTEEYRDUQTHWINDOCVKSZHZBDGRPMECFGJKRWWLSUDFQEIXPPUKXIGOJPTGLQVCAONAMUY");
    msg.value = 186U;

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
    msg.setTimeStamp(0.5639611729129718);
    msg.setSource(12599U);
    msg.setSourceEntity(188U);
    msg.setDestination(45867U);
    msg.setDestinationEntity(215U);
    msg.name.assign("QQUHXZCZUDITGXUPHOBPBKVALNZDGFGRKJKRWYHGZAFNVIWOWIJKLXF");
    msg.value = 156U;

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
    msg.setTimeStamp(0.5514729024919524);
    msg.setSource(33641U);
    msg.setSourceEntity(177U);
    msg.setDestination(15712U);
    msg.setDestinationEntity(127U);
    msg.id = 54U;
    msg.period = 3993504743U;
    msg.duty_cycle = 1451544888U;

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
    msg.setTimeStamp(0.6955570563606733);
    msg.setSource(5483U);
    msg.setSourceEntity(49U);
    msg.setDestination(21378U);
    msg.setDestinationEntity(182U);
    msg.id = 90U;
    msg.period = 4111317245U;
    msg.duty_cycle = 155842647U;

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
    msg.setTimeStamp(0.5955969631967872);
    msg.setSource(57091U);
    msg.setSourceEntity(233U);
    msg.setDestination(28123U);
    msg.setDestinationEntity(126U);
    msg.id = 176U;
    msg.period = 2237794322U;
    msg.duty_cycle = 1082181588U;

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
    msg.setTimeStamp(0.9238090247528269);
    msg.setSource(53252U);
    msg.setSourceEntity(217U);
    msg.setDestination(30964U);
    msg.setDestinationEntity(244U);
    msg.id = 1U;
    msg.period = 1596032813U;
    msg.duty_cycle = 3266029363U;

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
    msg.setTimeStamp(0.26074740999863044);
    msg.setSource(58382U);
    msg.setSourceEntity(61U);
    msg.setDestination(62610U);
    msg.setDestinationEntity(215U);
    msg.id = 13U;
    msg.period = 1313788213U;
    msg.duty_cycle = 2762505034U;

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
    msg.setTimeStamp(0.6975512970724211);
    msg.setSource(65080U);
    msg.setSourceEntity(236U);
    msg.setDestination(25329U);
    msg.setDestinationEntity(54U);
    msg.id = 84U;
    msg.period = 221266736U;
    msg.duty_cycle = 95515086U;

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
    msg.setTimeStamp(0.7014401009006189);
    msg.setSource(13418U);
    msg.setSourceEntity(199U);
    msg.setDestination(15379U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.10593783541495827;
    msg.lon = 0.9310165974214094;
    msg.height = 0.7063033297127198;
    msg.x = 0.837064414379148;
    msg.y = 0.21822768410116655;
    msg.z = 0.3223087304569815;
    msg.phi = 0.1515994860507337;
    msg.theta = 0.1730049588742778;
    msg.psi = 0.93600300097415;
    msg.u = 0.9250523403614703;
    msg.v = 0.516414594764278;
    msg.w = 0.037750191152616575;
    msg.vx = 0.6292116060694525;
    msg.vy = 0.3772937929530167;
    msg.vz = 0.8118245313323796;
    msg.p = 0.9675641156546151;
    msg.q = 0.49482152505454124;
    msg.r = 0.04181994282974244;
    msg.depth = 0.6915744041488356;
    msg.alt = 0.06723001484462754;

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
    msg.setTimeStamp(0.969408525052606);
    msg.setSource(55791U);
    msg.setSourceEntity(172U);
    msg.setDestination(8034U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.29810666983270995;
    msg.lon = 0.87421929702902;
    msg.height = 0.8813609002023657;
    msg.x = 0.5571874874055921;
    msg.y = 0.8675089960510254;
    msg.z = 0.11279141721263675;
    msg.phi = 0.8543650665545812;
    msg.theta = 0.4113701876701815;
    msg.psi = 0.7750955049568018;
    msg.u = 0.9037228404980532;
    msg.v = 0.9219736876886513;
    msg.w = 0.956420102663872;
    msg.vx = 0.18898560530312725;
    msg.vy = 0.4906748306752525;
    msg.vz = 0.34772608615185785;
    msg.p = 0.6518828294943052;
    msg.q = 0.4098833736111629;
    msg.r = 0.1679633876346054;
    msg.depth = 0.06704515134825395;
    msg.alt = 0.6637061414326086;

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
    msg.setTimeStamp(0.6137669886970945);
    msg.setSource(61227U);
    msg.setSourceEntity(206U);
    msg.setDestination(44881U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.10072080823869622;
    msg.lon = 0.47448452945625164;
    msg.height = 0.405679638787919;
    msg.x = 0.34009902114976576;
    msg.y = 0.3293258718432738;
    msg.z = 0.5029074800782548;
    msg.phi = 0.2985577359697763;
    msg.theta = 0.5794260335611823;
    msg.psi = 0.6714142405161347;
    msg.u = 0.41956528795644854;
    msg.v = 0.8492172723007538;
    msg.w = 0.34748594642135744;
    msg.vx = 0.7306752832853692;
    msg.vy = 0.1113419613755291;
    msg.vz = 0.8646514846674042;
    msg.p = 0.501296631973855;
    msg.q = 0.7136157255786342;
    msg.r = 0.3255138136003003;
    msg.depth = 0.8546111706552777;
    msg.alt = 0.6716094020347296;

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
    msg.setTimeStamp(0.14360394634570084);
    msg.setSource(60762U);
    msg.setSourceEntity(17U);
    msg.setDestination(27082U);
    msg.setDestinationEntity(66U);
    msg.x = 0.34236562929017866;
    msg.y = 0.8903008815279236;
    msg.z = 0.229154263246662;

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
    msg.setTimeStamp(0.9718271177999296);
    msg.setSource(44175U);
    msg.setSourceEntity(121U);
    msg.setDestination(11093U);
    msg.setDestinationEntity(88U);
    msg.x = 0.8643201993484885;
    msg.y = 0.2568946736452091;
    msg.z = 0.9589933877964824;

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
    msg.setTimeStamp(0.7347590614116282);
    msg.setSource(7185U);
    msg.setSourceEntity(133U);
    msg.setDestination(61194U);
    msg.setDestinationEntity(0U);
    msg.x = 0.10056859482032732;
    msg.y = 0.31840522638706925;
    msg.z = 0.7931931213570231;

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
    msg.setTimeStamp(0.34204705931431845);
    msg.setSource(16584U);
    msg.setSourceEntity(121U);
    msg.setDestination(23734U);
    msg.setDestinationEntity(146U);
    msg.value = 0.10178011002296528;

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
    msg.setTimeStamp(0.9910108989200608);
    msg.setSource(6114U);
    msg.setSourceEntity(77U);
    msg.setDestination(63805U);
    msg.setDestinationEntity(12U);
    msg.value = 0.1249584489068779;

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
    msg.setTimeStamp(0.10724130465505599);
    msg.setSource(9802U);
    msg.setSourceEntity(231U);
    msg.setDestination(12224U);
    msg.setDestinationEntity(139U);
    msg.value = 0.73040945740703;

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
    msg.setTimeStamp(0.2296430929936515);
    msg.setSource(45281U);
    msg.setSourceEntity(58U);
    msg.setDestination(26754U);
    msg.setDestinationEntity(14U);
    msg.value = 0.9601631055764278;

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
    msg.setTimeStamp(0.8849927673685815);
    msg.setSource(58188U);
    msg.setSourceEntity(213U);
    msg.setDestination(17106U);
    msg.setDestinationEntity(130U);
    msg.value = 0.7906161639470545;

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
    msg.setTimeStamp(0.8705155001034979);
    msg.setSource(1740U);
    msg.setSourceEntity(20U);
    msg.setDestination(54224U);
    msg.setDestinationEntity(191U);
    msg.value = 0.7574373746878553;

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
    msg.setTimeStamp(0.08793978665250524);
    msg.setSource(50172U);
    msg.setSourceEntity(48U);
    msg.setDestination(45826U);
    msg.setDestinationEntity(58U);
    msg.x = 0.9214910205470221;
    msg.y = 0.3980476637710433;
    msg.z = 0.371629810607934;
    msg.phi = 0.4551426794921267;
    msg.theta = 0.5414085360419155;
    msg.psi = 0.6637362906668342;
    msg.p = 0.7490791176126229;
    msg.q = 0.4512879170048425;
    msg.r = 0.42910521716504946;
    msg.u = 0.13263537819318727;
    msg.v = 0.16165632640648875;
    msg.w = 0.02788609909641937;
    msg.bias_psi = 0.16043626060429061;
    msg.bias_r = 0.18912607036657925;

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
    msg.setTimeStamp(0.3579688216186604);
    msg.setSource(45433U);
    msg.setSourceEntity(115U);
    msg.setDestination(3807U);
    msg.setDestinationEntity(169U);
    msg.x = 0.16003507109572868;
    msg.y = 0.40100228056541354;
    msg.z = 0.18584528826575064;
    msg.phi = 0.6889711579431688;
    msg.theta = 0.6605554779318007;
    msg.psi = 0.648986319457706;
    msg.p = 0.006080117092600035;
    msg.q = 0.45454883176619554;
    msg.r = 0.5164632190791617;
    msg.u = 0.8012529206753242;
    msg.v = 0.8144818942108469;
    msg.w = 0.6863224398300467;
    msg.bias_psi = 0.5066817573299204;
    msg.bias_r = 0.7193788849638477;

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
    msg.setTimeStamp(0.6141054704959076);
    msg.setSource(53591U);
    msg.setSourceEntity(44U);
    msg.setDestination(27386U);
    msg.setDestinationEntity(44U);
    msg.x = 0.022740904621173397;
    msg.y = 0.6803643365242777;
    msg.z = 0.44568435741219403;
    msg.phi = 0.09171339905322728;
    msg.theta = 0.09214372248393121;
    msg.psi = 0.4774005559298906;
    msg.p = 0.029479442626731744;
    msg.q = 0.51143779788085;
    msg.r = 0.6022043552418977;
    msg.u = 0.044770023849851515;
    msg.v = 0.1611295724903966;
    msg.w = 0.5279730843560215;
    msg.bias_psi = 0.572650832395931;
    msg.bias_r = 0.7291664219803031;

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
    msg.setTimeStamp(0.8359124331826184);
    msg.setSource(64989U);
    msg.setSourceEntity(61U);
    msg.setDestination(55962U);
    msg.setDestinationEntity(150U);
    msg.bias_psi = 0.09956834753722643;
    msg.bias_r = 0.18010187299418068;
    msg.cog = 0.07686231948852518;
    msg.cyaw = 0.20041430715283226;
    msg.lbl_rej_level = 0.8279853206295879;
    msg.gps_rej_level = 0.8714573599756451;
    msg.custom_x = 0.06252201935855972;
    msg.custom_y = 0.8866297360790808;
    msg.custom_z = 0.012701062731825363;

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
    msg.setTimeStamp(0.5571216698539928);
    msg.setSource(56050U);
    msg.setSourceEntity(233U);
    msg.setDestination(43605U);
    msg.setDestinationEntity(51U);
    msg.bias_psi = 0.7919331888609513;
    msg.bias_r = 0.17731243888605752;
    msg.cog = 0.004112751143675708;
    msg.cyaw = 0.7134223582943148;
    msg.lbl_rej_level = 0.9704925734512906;
    msg.gps_rej_level = 0.6279262851811638;
    msg.custom_x = 0.8855165327548128;
    msg.custom_y = 0.7390592247104573;
    msg.custom_z = 0.6760768305719759;

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
    msg.setTimeStamp(0.9520943098407798);
    msg.setSource(41762U);
    msg.setSourceEntity(109U);
    msg.setDestination(54210U);
    msg.setDestinationEntity(209U);
    msg.bias_psi = 0.5533888201481714;
    msg.bias_r = 0.8892530859826696;
    msg.cog = 0.8997343785563193;
    msg.cyaw = 0.343600892013713;
    msg.lbl_rej_level = 0.8567627965916783;
    msg.gps_rej_level = 0.5842956382507047;
    msg.custom_x = 0.8908444260812182;
    msg.custom_y = 0.23092705945131398;
    msg.custom_z = 0.263602199647776;

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
    msg.setTimeStamp(0.784724724373338);
    msg.setSource(26286U);
    msg.setSourceEntity(109U);
    msg.setDestination(13932U);
    msg.setDestinationEntity(119U);
    msg.utc_time = 0.11341891096836576;
    msg.reason = 206U;

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
    msg.setTimeStamp(0.9296643050979646);
    msg.setSource(49728U);
    msg.setSourceEntity(201U);
    msg.setDestination(61317U);
    msg.setDestinationEntity(224U);
    msg.utc_time = 0.930010759918549;
    msg.reason = 27U;

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
    msg.setTimeStamp(0.9677824821294428);
    msg.setSource(65251U);
    msg.setSourceEntity(128U);
    msg.setDestination(26050U);
    msg.setDestinationEntity(149U);
    msg.utc_time = 0.37231220391487585;
    msg.reason = 8U;

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
    msg.setTimeStamp(0.7237049250790966);
    msg.setSource(64753U);
    msg.setSourceEntity(209U);
    msg.setDestination(64342U);
    msg.setDestinationEntity(214U);
    msg.id = 63U;
    msg.range = 0.3046588489888885;
    msg.acceptance = 115U;

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
    msg.setTimeStamp(0.5428380973744438);
    msg.setSource(18496U);
    msg.setSourceEntity(72U);
    msg.setDestination(906U);
    msg.setDestinationEntity(118U);
    msg.id = 68U;
    msg.range = 0.5631097513523503;
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
    msg.setTimeStamp(0.7592795594808007);
    msg.setSource(36907U);
    msg.setSourceEntity(199U);
    msg.setDestination(1993U);
    msg.setDestinationEntity(145U);
    msg.id = 45U;
    msg.range = 0.6721286130995727;
    msg.acceptance = 20U;

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
    msg.setTimeStamp(0.3974086746979063);
    msg.setSource(11387U);
    msg.setSourceEntity(189U);
    msg.setDestination(29770U);
    msg.setDestinationEntity(137U);
    msg.type = 122U;
    msg.reason = 236U;
    msg.value = 0.87737096833309;
    msg.timestep = 0.18918808773522244;

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
    msg.setTimeStamp(0.05464792972079935);
    msg.setSource(21855U);
    msg.setSourceEntity(189U);
    msg.setDestination(32478U);
    msg.setDestinationEntity(93U);
    msg.type = 26U;
    msg.reason = 90U;
    msg.value = 0.7272797762304686;
    msg.timestep = 0.7715135767663689;

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
    msg.setTimeStamp(0.5627400150642787);
    msg.setSource(18269U);
    msg.setSourceEntity(165U);
    msg.setDestination(45580U);
    msg.setDestinationEntity(200U);
    msg.type = 249U;
    msg.reason = 197U;
    msg.value = 0.41540735071379875;
    msg.timestep = 0.5688101887408571;

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
    msg.setTimeStamp(0.48068516573765085);
    msg.setSource(21190U);
    msg.setSourceEntity(99U);
    msg.setDestination(27889U);
    msg.setDestinationEntity(211U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LSMTEQOFNHZFWNQSXKWGFEDUNZHRHTVOWSXLYKDQALBCCHWVMSJZRCOXQHZCMMELWABTWGNRUBGOZOJUDNTITZJPUPRVJKPIECXJOOAPHPRWTKXHMCUBDTRRBQCQJPNXNEAAMJURVIYHQULSEFYXOKDCTF");
    tmp_msg_0.lat = 0.641641678575727;
    tmp_msg_0.lon = 0.9388942433689698;
    tmp_msg_0.depth = 0.20437614910529978;
    tmp_msg_0.query_channel = 173U;
    tmp_msg_0.reply_channel = 66U;
    tmp_msg_0.transponder_delay = 178U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8920969327719752;
    msg.y = 0.8788990010779899;
    msg.var_x = 0.9394221092963095;
    msg.var_y = 0.6099672644816694;
    msg.distance = 0.8887306021140376;

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
    msg.setTimeStamp(0.5777799927337209);
    msg.setSource(21882U);
    msg.setSourceEntity(179U);
    msg.setDestination(51376U);
    msg.setDestinationEntity(220U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MREPDCYIRZUFLQBMHKYMBXZFYVAPZLKKFICHJWAIWOQXBHWUBOAZAHOSDYESZBLLRZNEBAALUDQYFNMNVFOMQRSLGIHALNTOGKRGTEDQPPGGUBABCFWFJOFIMJWJKVUULGMAMPXMEHCYYPZJUWTVOXHTNKFOVWKENSNYSWXICZPRTDOQHKZVSKQXDYEGISMDSPVOBPRIVCJBWXTELCDTNUXQPGDNGATSVLJQHCJZFTRXWJEHCJURKGUNVISI");
    tmp_msg_0.lat = 0.6523614343482499;
    tmp_msg_0.lon = 0.08192860773845934;
    tmp_msg_0.depth = 0.7790767203212402;
    tmp_msg_0.query_channel = 9U;
    tmp_msg_0.reply_channel = 217U;
    tmp_msg_0.transponder_delay = 91U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9750819032621241;
    msg.y = 0.4523605392420612;
    msg.var_x = 0.5856214242690386;
    msg.var_y = 0.3224851288591749;
    msg.distance = 0.3580996274008963;

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
    msg.setTimeStamp(0.08003239662772244);
    msg.setSource(30942U);
    msg.setSourceEntity(218U);
    msg.setDestination(3781U);
    msg.setDestinationEntity(67U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KCIJUJCYSHPDLBNGFHBGDBVHXXFUGPKYLZVBEOMEWGZASSTXDNJJJBSVKHEXYBRXEXPEVKPZNRKDANGMIJLWTABZUHAJLVFWCCASTPGWOUPUZYMQQGQFEDLKRICNYALQUDAWEVYJVPZRTXMDQDMZTWIHMBMFRTFNZYADQQIUNCRNKLHHOECMNIXIKORXTUCOESYPZMWZWIHF");
    tmp_msg_0.lat = 0.8763752938252776;
    tmp_msg_0.lon = 0.25334098620675927;
    tmp_msg_0.depth = 0.7413163028370082;
    tmp_msg_0.query_channel = 3U;
    tmp_msg_0.reply_channel = 196U;
    tmp_msg_0.transponder_delay = 141U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.45609523804952434;
    msg.y = 0.8969205967127122;
    msg.var_x = 0.38123409045967926;
    msg.var_y = 0.7090213348299861;
    msg.distance = 0.7278741913358381;

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
    msg.setTimeStamp(0.14071434522403692);
    msg.setSource(19311U);
    msg.setSourceEntity(120U);
    msg.setDestination(31296U);
    msg.setDestinationEntity(221U);
    msg.state = 35U;

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
    msg.setTimeStamp(0.19264889717969036);
    msg.setSource(39264U);
    msg.setSourceEntity(230U);
    msg.setDestination(42781U);
    msg.setDestinationEntity(253U);
    msg.state = 30U;

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
    msg.setTimeStamp(0.7928209708433992);
    msg.setSource(46446U);
    msg.setSourceEntity(201U);
    msg.setDestination(18516U);
    msg.setDestinationEntity(217U);
    msg.state = 89U;

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
    msg.setTimeStamp(0.01793917364784481);
    msg.setSource(28778U);
    msg.setSourceEntity(172U);
    msg.setDestination(59653U);
    msg.setDestinationEntity(58U);
    msg.x = 0.551888169487234;
    msg.y = 0.5023615383033421;
    msg.z = 0.20536543443089295;

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
    msg.setTimeStamp(0.06094432600863742);
    msg.setSource(57228U);
    msg.setSourceEntity(217U);
    msg.setDestination(1011U);
    msg.setDestinationEntity(230U);
    msg.x = 0.9762742838233807;
    msg.y = 0.8682736719837706;
    msg.z = 0.7996149832241392;

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
    msg.setTimeStamp(0.12042266203212326);
    msg.setSource(17327U);
    msg.setSourceEntity(2U);
    msg.setDestination(10866U);
    msg.setDestinationEntity(84U);
    msg.x = 0.5303764505972557;
    msg.y = 0.612063196982584;
    msg.z = 0.19771943013551008;

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
    msg.setTimeStamp(0.023627802763637185);
    msg.setSource(58593U);
    msg.setSourceEntity(103U);
    msg.setDestination(5887U);
    msg.setDestinationEntity(14U);
    msg.va = 0.0886552676889446;
    msg.aoa = 0.7728255841856202;
    msg.ssa = 0.6761764454345098;

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
    msg.setTimeStamp(0.5867309011222597);
    msg.setSource(55482U);
    msg.setSourceEntity(246U);
    msg.setDestination(25953U);
    msg.setDestinationEntity(175U);
    msg.va = 0.7505590758317101;
    msg.aoa = 0.6666133438541065;
    msg.ssa = 0.6247291764849076;

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
    msg.setTimeStamp(0.5677238245012793);
    msg.setSource(62005U);
    msg.setSourceEntity(74U);
    msg.setDestination(13639U);
    msg.setDestinationEntity(6U);
    msg.va = 0.2984152908866402;
    msg.aoa = 0.40557937753436546;
    msg.ssa = 0.15572314921988484;

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
    msg.setTimeStamp(0.1374703733978666);
    msg.setSource(24914U);
    msg.setSourceEntity(15U);
    msg.setDestination(23541U);
    msg.setDestinationEntity(115U);
    msg.value = 0.008769996957961435;

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
    msg.setTimeStamp(0.47522568445295743);
    msg.setSource(7076U);
    msg.setSourceEntity(82U);
    msg.setDestination(19053U);
    msg.setDestinationEntity(8U);
    msg.value = 0.5973632939375766;

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
    msg.setTimeStamp(0.5526522294752138);
    msg.setSource(33294U);
    msg.setSourceEntity(95U);
    msg.setDestination(61624U);
    msg.setDestinationEntity(165U);
    msg.value = 0.28345835606509406;

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
    msg.setTimeStamp(0.0794793032472989);
    msg.setSource(3565U);
    msg.setSourceEntity(235U);
    msg.setDestination(44638U);
    msg.setDestinationEntity(53U);
    msg.value = 0.4092177499870233;
    msg.z_units = 173U;

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
    msg.setTimeStamp(0.7669282469580901);
    msg.setSource(23285U);
    msg.setSourceEntity(78U);
    msg.setDestination(46163U);
    msg.setDestinationEntity(234U);
    msg.value = 0.5099633117584805;
    msg.z_units = 60U;

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
    msg.setTimeStamp(0.40233208933635844);
    msg.setSource(40440U);
    msg.setSourceEntity(58U);
    msg.setDestination(36607U);
    msg.setDestinationEntity(39U);
    msg.value = 0.025747020528739895;
    msg.z_units = 96U;

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
    msg.setTimeStamp(0.18027981244731373);
    msg.setSource(25846U);
    msg.setSourceEntity(232U);
    msg.setDestination(57013U);
    msg.setDestinationEntity(8U);
    msg.value = 0.4189451222211281;
    msg.speed_units = 182U;

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
    msg.setTimeStamp(0.28928879605088076);
    msg.setSource(10637U);
    msg.setSourceEntity(10U);
    msg.setDestination(31252U);
    msg.setDestinationEntity(217U);
    msg.value = 0.7962591760543514;
    msg.speed_units = 87U;

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
    msg.setTimeStamp(0.05620209445727786);
    msg.setSource(4290U);
    msg.setSourceEntity(174U);
    msg.setDestination(6682U);
    msg.setDestinationEntity(195U);
    msg.value = 0.2975799285173555;
    msg.speed_units = 88U;

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
    msg.setTimeStamp(0.03671467835909992);
    msg.setSource(49413U);
    msg.setSourceEntity(181U);
    msg.setDestination(52202U);
    msg.setDestinationEntity(96U);
    msg.value = 0.2673926658596685;

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
    msg.setTimeStamp(0.22582422035866578);
    msg.setSource(972U);
    msg.setSourceEntity(18U);
    msg.setDestination(17888U);
    msg.setDestinationEntity(133U);
    msg.value = 0.17164214159114444;

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
    msg.setTimeStamp(0.05575869506380249);
    msg.setSource(51804U);
    msg.setSourceEntity(131U);
    msg.setDestination(32405U);
    msg.setDestinationEntity(111U);
    msg.value = 0.7220018161609241;

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
    msg.setTimeStamp(0.8539400556751294);
    msg.setSource(60526U);
    msg.setSourceEntity(210U);
    msg.setDestination(55291U);
    msg.setDestinationEntity(174U);
    msg.value = 0.44125241258240444;

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
    msg.setTimeStamp(0.7169966260625786);
    msg.setSource(41169U);
    msg.setSourceEntity(83U);
    msg.setDestination(34682U);
    msg.setDestinationEntity(10U);
    msg.value = 0.4380851832389757;

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
    msg.setTimeStamp(0.833340811911013);
    msg.setSource(17014U);
    msg.setSourceEntity(179U);
    msg.setDestination(43370U);
    msg.setDestinationEntity(86U);
    msg.value = 0.32084623267041024;

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
    msg.setTimeStamp(0.4193405433030595);
    msg.setSource(9842U);
    msg.setSourceEntity(188U);
    msg.setDestination(3042U);
    msg.setDestinationEntity(159U);
    msg.value = 0.23158573220348655;

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
    msg.setTimeStamp(0.8257503846959183);
    msg.setSource(25304U);
    msg.setSourceEntity(229U);
    msg.setDestination(11218U);
    msg.setDestinationEntity(91U);
    msg.value = 0.8134135708323453;

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
    msg.setTimeStamp(0.7123801131623104);
    msg.setSource(10561U);
    msg.setSourceEntity(102U);
    msg.setDestination(5322U);
    msg.setDestinationEntity(180U);
    msg.value = 0.12541467751783753;

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
    msg.setTimeStamp(0.9516586494851355);
    msg.setSource(28544U);
    msg.setSourceEntity(225U);
    msg.setDestination(62484U);
    msg.setDestinationEntity(33U);
    msg.path_ref = 4046852878U;
    msg.start_lat = 0.7787275217635709;
    msg.start_lon = 0.9337522158256409;
    msg.start_z = 0.144647523462481;
    msg.start_z_units = 107U;
    msg.end_lat = 0.9409374281548278;
    msg.end_lon = 0.3277782783476294;
    msg.end_z = 0.9394103583827248;
    msg.end_z_units = 114U;
    msg.speed = 0.30815629254967036;
    msg.speed_units = 179U;
    msg.lradius = 0.4994607517027342;
    msg.flags = 84U;

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
    msg.setTimeStamp(0.7423963975125885);
    msg.setSource(60628U);
    msg.setSourceEntity(165U);
    msg.setDestination(48609U);
    msg.setDestinationEntity(126U);
    msg.path_ref = 1982690107U;
    msg.start_lat = 0.4838389233575341;
    msg.start_lon = 0.13263371109512578;
    msg.start_z = 0.6970648788072314;
    msg.start_z_units = 136U;
    msg.end_lat = 0.8203943781092092;
    msg.end_lon = 0.7250709310326091;
    msg.end_z = 0.6292638478050742;
    msg.end_z_units = 103U;
    msg.speed = 0.4231668223813889;
    msg.speed_units = 146U;
    msg.lradius = 0.0521123507065504;
    msg.flags = 1U;

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
    msg.setTimeStamp(0.2015611567742941);
    msg.setSource(60702U);
    msg.setSourceEntity(50U);
    msg.setDestination(16899U);
    msg.setDestinationEntity(106U);
    msg.path_ref = 2303693902U;
    msg.start_lat = 0.44750995110518366;
    msg.start_lon = 0.8431404585320298;
    msg.start_z = 0.4039256536747299;
    msg.start_z_units = 62U;
    msg.end_lat = 0.5388015331372598;
    msg.end_lon = 0.05296762541893618;
    msg.end_z = 0.29209826960416685;
    msg.end_z_units = 242U;
    msg.speed = 0.729730078785657;
    msg.speed_units = 186U;
    msg.lradius = 0.9600683785861176;
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
    msg.setTimeStamp(0.451680709527839);
    msg.setSource(36080U);
    msg.setSourceEntity(92U);
    msg.setDestination(30684U);
    msg.setDestinationEntity(110U);
    msg.x = 0.834170550561319;
    msg.y = 0.02691410103740932;
    msg.z = 0.4105123605280585;
    msg.k = 0.3433209749570456;
    msg.m = 0.2859711961028092;
    msg.n = 0.8017367497186091;
    msg.flags = 82U;

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
    msg.setTimeStamp(0.6292127060259073);
    msg.setSource(60048U);
    msg.setSourceEntity(203U);
    msg.setDestination(64160U);
    msg.setDestinationEntity(22U);
    msg.x = 0.6649361191362821;
    msg.y = 0.16990128072731137;
    msg.z = 0.23860375880008355;
    msg.k = 0.470099833216745;
    msg.m = 0.9067079553694075;
    msg.n = 0.9355838477306505;
    msg.flags = 48U;

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
    msg.setTimeStamp(0.5594148598443953);
    msg.setSource(43397U);
    msg.setSourceEntity(171U);
    msg.setDestination(28107U);
    msg.setDestinationEntity(209U);
    msg.x = 0.18580713195821075;
    msg.y = 0.32965386103051475;
    msg.z = 0.6737588308797483;
    msg.k = 0.9724911489750024;
    msg.m = 0.430267696298835;
    msg.n = 0.37576244490616273;
    msg.flags = 59U;

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
    msg.setTimeStamp(0.12645581319336852);
    msg.setSource(14147U);
    msg.setSourceEntity(148U);
    msg.setDestination(46067U);
    msg.setDestinationEntity(59U);
    msg.value = 0.10284703760686809;

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
    msg.setTimeStamp(0.7642160807432261);
    msg.setSource(16672U);
    msg.setSourceEntity(113U);
    msg.setDestination(65262U);
    msg.setDestinationEntity(176U);
    msg.value = 0.26354166274057167;

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
    msg.setTimeStamp(0.7383977731506264);
    msg.setSource(21087U);
    msg.setSourceEntity(102U);
    msg.setDestination(53176U);
    msg.setDestinationEntity(108U);
    msg.value = 0.5060778746061491;

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
    msg.setTimeStamp(0.21737918571787596);
    msg.setSource(32901U);
    msg.setSourceEntity(116U);
    msg.setDestination(7888U);
    msg.setDestinationEntity(97U);
    msg.u = 0.2791061486720533;
    msg.v = 0.1195022942234294;
    msg.w = 0.3795699565311148;
    msg.p = 0.22841848288129396;
    msg.q = 0.8518795529133307;
    msg.r = 0.6655175893392388;
    msg.flags = 88U;

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
    msg.setTimeStamp(0.235106186315567);
    msg.setSource(33549U);
    msg.setSourceEntity(45U);
    msg.setDestination(37974U);
    msg.setDestinationEntity(102U);
    msg.u = 0.8372790757517038;
    msg.v = 0.837225050225316;
    msg.w = 0.8008049620357287;
    msg.p = 0.8274024317126604;
    msg.q = 0.7612936704758677;
    msg.r = 0.23390504521889355;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.863781658220888);
    msg.setSource(44142U);
    msg.setSourceEntity(115U);
    msg.setDestination(26920U);
    msg.setDestinationEntity(85U);
    msg.u = 0.9668189588155094;
    msg.v = 0.8709424077846519;
    msg.w = 0.6695761684145781;
    msg.p = 0.6160708345158858;
    msg.q = 0.8200679246283892;
    msg.r = 0.9242524854376636;
    msg.flags = 232U;

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
    msg.setTimeStamp(0.8096825117404908);
    msg.setSource(43693U);
    msg.setSourceEntity(32U);
    msg.setDestination(64424U);
    msg.setDestinationEntity(212U);
    msg.path_ref = 2384723829U;
    msg.start_lat = 0.6786332629324116;
    msg.start_lon = 0.5006133052737699;
    msg.start_z = 0.0868378044941418;
    msg.start_z_units = 112U;
    msg.end_lat = 0.8706021770753364;
    msg.end_lon = 0.8987067087911538;
    msg.end_z = 0.15661117611158182;
    msg.end_z_units = 179U;
    msg.lradius = 0.11687580864632963;
    msg.flags = 100U;
    msg.x = 0.45054828889935206;
    msg.y = 0.021534144573962744;
    msg.z = 0.55958000550243;
    msg.vx = 0.1646331285460374;
    msg.vy = 0.6380905532623506;
    msg.vz = 0.2545658292081169;
    msg.course_error = 0.024943116496401463;
    msg.eta = 61094U;

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
    msg.setTimeStamp(0.020362897192573337);
    msg.setSource(43596U);
    msg.setSourceEntity(38U);
    msg.setDestination(46400U);
    msg.setDestinationEntity(239U);
    msg.path_ref = 958796714U;
    msg.start_lat = 0.8733010713014537;
    msg.start_lon = 0.3282644888924444;
    msg.start_z = 0.5762247497735786;
    msg.start_z_units = 183U;
    msg.end_lat = 0.11694485617204164;
    msg.end_lon = 0.684088550326505;
    msg.end_z = 0.1890662289042513;
    msg.end_z_units = 208U;
    msg.lradius = 0.611688975110989;
    msg.flags = 91U;
    msg.x = 0.49202001273110396;
    msg.y = 0.8376508721553863;
    msg.z = 0.8721901265332787;
    msg.vx = 0.7214443880018089;
    msg.vy = 0.8439430731056902;
    msg.vz = 0.055864248990031284;
    msg.course_error = 0.6546930599553671;
    msg.eta = 9221U;

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
    msg.setTimeStamp(0.9121041652208155);
    msg.setSource(54073U);
    msg.setSourceEntity(3U);
    msg.setDestination(45085U);
    msg.setDestinationEntity(211U);
    msg.path_ref = 2282172083U;
    msg.start_lat = 0.9711174705885449;
    msg.start_lon = 0.5380012195484402;
    msg.start_z = 0.9165886112743357;
    msg.start_z_units = 242U;
    msg.end_lat = 0.15486330468832088;
    msg.end_lon = 0.04502894437138083;
    msg.end_z = 0.8828802132690521;
    msg.end_z_units = 30U;
    msg.lradius = 0.4087014277509784;
    msg.flags = 74U;
    msg.x = 0.33292357036575904;
    msg.y = 0.42592768625664357;
    msg.z = 0.8040127710873796;
    msg.vx = 0.653230653775423;
    msg.vy = 0.2646554526194612;
    msg.vz = 0.7581372777716568;
    msg.course_error = 0.6597093678735455;
    msg.eta = 38501U;

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
    msg.setTimeStamp(0.9452449076765509);
    msg.setSource(37765U);
    msg.setSourceEntity(243U);
    msg.setDestination(47323U);
    msg.setDestinationEntity(4U);
    msg.k = 0.36319300005727295;
    msg.m = 0.6564235557136535;
    msg.n = 0.682286915719652;

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
    msg.setTimeStamp(0.7672417817384435);
    msg.setSource(45692U);
    msg.setSourceEntity(119U);
    msg.setDestination(1574U);
    msg.setDestinationEntity(220U);
    msg.k = 0.15716097987398314;
    msg.m = 0.05877295157482598;
    msg.n = 0.39542944315165396;

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
    msg.setTimeStamp(0.18427954264950863);
    msg.setSource(53343U);
    msg.setSourceEntity(193U);
    msg.setDestination(30723U);
    msg.setDestinationEntity(97U);
    msg.k = 0.23323744779433653;
    msg.m = 0.7236121039802035;
    msg.n = 0.052367386139878125;

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
    msg.setTimeStamp(0.509023260384617);
    msg.setSource(58160U);
    msg.setSourceEntity(58U);
    msg.setDestination(21633U);
    msg.setDestinationEntity(145U);
    msg.p = 0.1654015462547297;
    msg.i = 0.9386002111424673;
    msg.d = 0.23705665814294374;
    msg.a = 0.16478182171732159;

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
    msg.setTimeStamp(0.574380333483619);
    msg.setSource(19158U);
    msg.setSourceEntity(16U);
    msg.setDestination(61745U);
    msg.setDestinationEntity(139U);
    msg.p = 0.4050042612267175;
    msg.i = 0.4665837838318677;
    msg.d = 0.7017581707962877;
    msg.a = 0.4594971249459061;

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
    msg.setTimeStamp(0.9010997264354554);
    msg.setSource(34122U);
    msg.setSourceEntity(131U);
    msg.setDestination(56022U);
    msg.setDestinationEntity(144U);
    msg.p = 0.5277579889258338;
    msg.i = 0.8949239535926363;
    msg.d = 0.8158569219678388;
    msg.a = 0.06573226762159567;

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
    msg.setTimeStamp(0.05970699023263759);
    msg.setSource(36812U);
    msg.setSourceEntity(154U);
    msg.setDestination(23851U);
    msg.setDestinationEntity(235U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.18309992408759612);
    msg.setSource(60019U);
    msg.setSourceEntity(123U);
    msg.setDestination(13243U);
    msg.setDestinationEntity(57U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.5291335406776616);
    msg.setSource(64392U);
    msg.setSourceEntity(232U);
    msg.setDestination(12089U);
    msg.setDestinationEntity(107U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.65794122292996);
    msg.setSource(44014U);
    msg.setSourceEntity(186U);
    msg.setDestination(63165U);
    msg.setDestinationEntity(79U);
    msg.x = 0.23010637593305905;
    msg.y = 0.013711924778884499;
    msg.z = 0.8808659482066404;
    msg.vx = 0.3520072312184903;
    msg.vy = 0.2965351236549406;
    msg.vz = 0.593656044362514;
    msg.ax = 0.8924425139409996;
    msg.ay = 0.6682408160278944;
    msg.az = 0.47709878545410467;
    msg.flags = 31014U;

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
    msg.setTimeStamp(0.9035925394518471);
    msg.setSource(3221U);
    msg.setSourceEntity(89U);
    msg.setDestination(40592U);
    msg.setDestinationEntity(121U);
    msg.x = 0.82559308057659;
    msg.y = 0.6531172648667521;
    msg.z = 0.8050021370766043;
    msg.vx = 0.41480982739884065;
    msg.vy = 0.4635141235345376;
    msg.vz = 0.6398538295562588;
    msg.ax = 0.08155393357539376;
    msg.ay = 0.5867708795961304;
    msg.az = 0.597198047295587;
    msg.flags = 43345U;

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
    msg.setTimeStamp(0.8879788837009136);
    msg.setSource(35336U);
    msg.setSourceEntity(253U);
    msg.setDestination(64069U);
    msg.setDestinationEntity(21U);
    msg.x = 0.6574042831484745;
    msg.y = 0.6300520714403186;
    msg.z = 0.3617640492063111;
    msg.vx = 0.18498000970716588;
    msg.vy = 0.4237077783809654;
    msg.vz = 0.8894991677643296;
    msg.ax = 0.18850992603454508;
    msg.ay = 0.5098167202288686;
    msg.az = 0.2886837907193105;
    msg.flags = 12012U;

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
    msg.setTimeStamp(0.8641713801051953);
    msg.setSource(12925U);
    msg.setSourceEntity(238U);
    msg.setDestination(54456U);
    msg.setDestinationEntity(153U);
    msg.value = 0.9611535312043279;

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
    msg.setTimeStamp(0.5557133363629416);
    msg.setSource(21683U);
    msg.setSourceEntity(252U);
    msg.setDestination(11659U);
    msg.setDestinationEntity(178U);
    msg.value = 0.24037926432591228;

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
    msg.setTimeStamp(0.41894899355010706);
    msg.setSource(8571U);
    msg.setSourceEntity(28U);
    msg.setDestination(24473U);
    msg.setDestinationEntity(22U);
    msg.value = 0.530378559505017;

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
    msg.setTimeStamp(0.13141649294112567);
    msg.setSource(32237U);
    msg.setSourceEntity(231U);
    msg.setDestination(61969U);
    msg.setDestinationEntity(100U);
    msg.timeout = 51150U;
    msg.lat = 0.018440507712176535;
    msg.lon = 0.11253466913819643;
    msg.z = 0.4061083669150476;
    msg.z_units = 55U;
    msg.speed = 0.028490027698510945;
    msg.speed_units = 3U;
    msg.roll = 0.1912496318003747;
    msg.pitch = 0.1623819404074882;
    msg.yaw = 0.8960701627809424;
    msg.custom.assign("VWMTUFJVHAUKORIYPZNDAMKPNLTHVWZJYQMVZVDBPDQXCGCGCUPBALGVTIZBWPTDMSGODEZJALNLBELQHWFREHWRTFEHOJDVQPOBIXCOEYCBXQJM");

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
    msg.setTimeStamp(0.9268838082923009);
    msg.setSource(29099U);
    msg.setSourceEntity(158U);
    msg.setDestination(49451U);
    msg.setDestinationEntity(42U);
    msg.timeout = 55626U;
    msg.lat = 0.8370276379412359;
    msg.lon = 0.8043194913190036;
    msg.z = 0.3663358008145162;
    msg.z_units = 206U;
    msg.speed = 0.8867274740911202;
    msg.speed_units = 70U;
    msg.roll = 0.8578648966434996;
    msg.pitch = 0.5327835404102258;
    msg.yaw = 0.4286352248176699;
    msg.custom.assign("CXNWZVUINIWOQPNQMKFPLFOUZLACNSC");

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
    msg.setTimeStamp(0.9174114453739846);
    msg.setSource(35848U);
    msg.setSourceEntity(97U);
    msg.setDestination(35008U);
    msg.setDestinationEntity(3U);
    msg.timeout = 29224U;
    msg.lat = 0.05296653410874308;
    msg.lon = 0.9642390809493715;
    msg.z = 0.7727991319984093;
    msg.z_units = 238U;
    msg.speed = 0.2530052761799675;
    msg.speed_units = 249U;
    msg.roll = 0.36134063182156784;
    msg.pitch = 0.43736429797775556;
    msg.yaw = 0.9587074450035356;
    msg.custom.assign("TMLSXFHQCUPWXOUAVONKBKFOEDRJBAQEVXVUFNFHSMBRLLSJDLPGICZDQHPCHAFPAYXDNTTOOWBZGETBMRCCWXJPUQAFVBQVKWINNGKEMZEGYYNWJFKIINUXYWQTSUAHRJJDVLQAGVJZHCZGURWECRQCSLAMIJAVPNITJIERKYSTWPLEKPGRULDBRBMOKGKCJHNSLIFRMDFQSGAVXINBTEOXVISKZZ");

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
    msg.setTimeStamp(0.7280706905667076);
    msg.setSource(36793U);
    msg.setSourceEntity(165U);
    msg.setDestination(18945U);
    msg.setDestinationEntity(26U);
    msg.timeout = 40965U;
    msg.lat = 0.41574610865264505;
    msg.lon = 0.8263522464647293;
    msg.z = 0.9239474616357612;
    msg.z_units = 203U;
    msg.speed = 0.8456920501539178;
    msg.speed_units = 176U;
    msg.duration = 28200U;
    msg.radius = 0.7398567731288777;
    msg.flags = 112U;
    msg.custom.assign("BTDXYBSUQJLMQRZXXJGPQLQRFVNUDHRTDJZXWVYQUETGPVZAWILYUYTKAPHUFXX");

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
    msg.setTimeStamp(0.2247000342094161);
    msg.setSource(5507U);
    msg.setSourceEntity(201U);
    msg.setDestination(32560U);
    msg.setDestinationEntity(16U);
    msg.timeout = 57844U;
    msg.lat = 0.9838968769429108;
    msg.lon = 0.604022494310234;
    msg.z = 0.17000546288020402;
    msg.z_units = 249U;
    msg.speed = 0.6346410115599448;
    msg.speed_units = 163U;
    msg.duration = 33100U;
    msg.radius = 0.7485766599050978;
    msg.flags = 26U;
    msg.custom.assign("TQJXCEKNRILDUUOVPVMAWVZIHRXRDYYUKUESGEQQZLIBZLACYEKNHGFNJABZHJHFVAWDUIMUFNVSRFRXZFTBFPTMENPFWKGRBGNKGJSPEPISQXNLDTPZWSXGMVULUWDJTOOOENLOQVPLWXSYSIRYDCZIXOQJIASXYMUTWMNIGYEBCBAKOSZLLTJRYEVQCORWINDDGHAUVBDJCYWSMHMZFPM");

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
    msg.setTimeStamp(0.20363351849232436);
    msg.setSource(19816U);
    msg.setSourceEntity(102U);
    msg.setDestination(60517U);
    msg.setDestinationEntity(206U);
    msg.timeout = 44196U;
    msg.lat = 0.255547579937503;
    msg.lon = 0.0010940325389466876;
    msg.z = 0.37607765107580426;
    msg.z_units = 189U;
    msg.speed = 0.21800308145072167;
    msg.speed_units = 226U;
    msg.duration = 12856U;
    msg.radius = 0.43266336628836655;
    msg.flags = 64U;
    msg.custom.assign("HECFJVYCDEJQRAVYFSSMZYHZPEGNQYLXXJBWUNNBXSQYEMAJCJCDPILZTHJUKEHOMKDNNZNMPSKPKRMNJXPLTOYDWGOQTEIOXBTALDNROWGGFKVZQCIUBZWGDWNHKPPHXJPZFGJSVFRQAFTGVWSPFVBITLXIUUITCWEDADCAIWQUBXMGMQBAKYDITVTRKHUREBYIOUMSGXOLMZKGCFWOUSLJYH");

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
    msg.setTimeStamp(0.22412255447019502);
    msg.setSource(29900U);
    msg.setSourceEntity(49U);
    msg.setDestination(53450U);
    msg.setDestinationEntity(167U);
    msg.custom.assign("ECFGOOOVRJCWEDBNDFTVNUXQTBZFSQGBCUQJAGFHRRMCRJCMFIOEKHQCRKXNGPSFVBHAIUQIZMNNPIJVGIJWMZDLTDAYHFKLDVSKBAXOSRPWFHKLIX");

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
    msg.setTimeStamp(0.5976983288434575);
    msg.setSource(42640U);
    msg.setSourceEntity(240U);
    msg.setDestination(13784U);
    msg.setDestinationEntity(231U);
    msg.custom.assign("QANEEYDPIOJBAJSZLZCNTLUPTESXGEWFPMNACYWYSNXDSBPTBVNQXPZYWHJGFUGITUVURHIAQIJBCHNNMXQVGSAWUKXEGOIFIKCGJHIQOEGVMDMAHYNTPBWDONBTMCOLQPMRUIKXCCHEVRH");

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
    msg.setTimeStamp(0.09766123117652625);
    msg.setSource(40165U);
    msg.setSourceEntity(139U);
    msg.setDestination(47013U);
    msg.setDestinationEntity(217U);
    msg.custom.assign("GTZMOHHUGGPQJZBZIQRPBMPERBDGEJPYHFGXWYVKCGKWYWRAOKDXCABCPXJXBQVNXQCUBELFTGDJEHDSHVEIKEECUMLYLITAJOVIMTUCWDSLIQPSRIWA");

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
    msg.setTimeStamp(0.3624295464545051);
    msg.setSource(50629U);
    msg.setSourceEntity(244U);
    msg.setDestination(51568U);
    msg.setDestinationEntity(87U);
    msg.timeout = 13027U;
    msg.lat = 0.18815980009416144;
    msg.lon = 0.20202161640219807;
    msg.z = 0.5163331230025667;
    msg.z_units = 66U;
    msg.duration = 43069U;
    msg.speed = 0.9496139972797191;
    msg.speed_units = 245U;
    msg.type = 84U;
    msg.radius = 0.9127808945058288;
    msg.length = 0.28168095102906376;
    msg.bearing = 0.9340909727591351;
    msg.direction = 25U;
    msg.custom.assign("KJYDFPOHGMATDLAKCDSQWJIJRLLJXBNCWEGNRMCBEAGNDGPSMOZXAOJEVCFEETTHLQLSFSQHTRBWXUQ");

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
    msg.setTimeStamp(0.2817952179332217);
    msg.setSource(30016U);
    msg.setSourceEntity(238U);
    msg.setDestination(29783U);
    msg.setDestinationEntity(220U);
    msg.timeout = 49414U;
    msg.lat = 0.3676314178449416;
    msg.lon = 0.14651678219248743;
    msg.z = 0.38779762903180937;
    msg.z_units = 115U;
    msg.duration = 7472U;
    msg.speed = 0.7300860517044025;
    msg.speed_units = 188U;
    msg.type = 62U;
    msg.radius = 0.6580774303741156;
    msg.length = 0.40188068155645884;
    msg.bearing = 0.3990431030676922;
    msg.direction = 159U;
    msg.custom.assign("MAULPANXMRQX");

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
    msg.setTimeStamp(0.6504892576706783);
    msg.setSource(25671U);
    msg.setSourceEntity(140U);
    msg.setDestination(973U);
    msg.setDestinationEntity(22U);
    msg.timeout = 43553U;
    msg.lat = 0.6969499281170422;
    msg.lon = 0.822395435879813;
    msg.z = 0.7937628949155058;
    msg.z_units = 21U;
    msg.duration = 8134U;
    msg.speed = 0.6240716431321156;
    msg.speed_units = 181U;
    msg.type = 119U;
    msg.radius = 0.06971690683052678;
    msg.length = 0.9997052732086487;
    msg.bearing = 0.39572329386220007;
    msg.direction = 6U;
    msg.custom.assign("XHEYDUFQXHCHRKOVEIZTSKNCNQEXXJABYGZDJIGIOSHBGQMTNOLJPCDGJNBFCEOBMXVFTLUXGIEIYYPUMZVZAEJUTZWRLRTYWSMMIZYFCJWABKMAINAOZYCSWMFPSNXFHDXKTGHWSIBCOLLTQPWHAQFNRGKCJEGRUDGYUVHSBXNAAKUVBNUODQWRWDRQJVFVQIDSLPPZVMSEWADOQECPLQWUPFRRLONTKUBPBIOMYCXJGTZMHHKTVFS");

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
    msg.setTimeStamp(0.020703566362005765);
    msg.setSource(62889U);
    msg.setSourceEntity(10U);
    msg.setDestination(17793U);
    msg.setDestinationEntity(213U);
    msg.duration = 53462U;
    msg.custom.assign("UEVLZUPWHQADBVDAE");

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
    msg.setTimeStamp(0.13730283721779846);
    msg.setSource(24700U);
    msg.setSourceEntity(140U);
    msg.setDestination(53573U);
    msg.setDestinationEntity(249U);
    msg.duration = 7416U;
    msg.custom.assign("MAPRMYWRSZCXJUECFKOZNDQIXBIIELIDXAUTQGWKHHNNDOVTLEHJLWZNWYNYGFVBMPXTWOXAESKUJSOJKYNXJZCHRPZLDSGXVFYZJWUMVHSJKMWZFHBPFRXGCRKQZGGNSTMCRTAPXUOQQPNLOSDLLKSJRCPXDBQUBQRPDMLI");

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
    msg.setTimeStamp(0.8514859427013065);
    msg.setSource(11872U);
    msg.setSourceEntity(195U);
    msg.setDestination(56161U);
    msg.setDestinationEntity(117U);
    msg.duration = 34185U;
    msg.custom.assign("BDRNKUALMGKKQGPTE");

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
    msg.setTimeStamp(0.697469742206026);
    msg.setSource(4017U);
    msg.setSourceEntity(173U);
    msg.setDestination(11134U);
    msg.setDestinationEntity(184U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.4643719003631174;
    msg.control.set(tmp_msg_0);
    msg.duration = 17046U;
    msg.custom.assign("REDMPQYFBKUWCQVOLAAURHSHFJRQJYNZBHZBNNFDHIFVOMMASAZEOCQYYNWPEOWYYNEMHUYXNEWAVNBXASOLGXBD");

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
    msg.setTimeStamp(0.7211899835412828);
    msg.setSource(64812U);
    msg.setSourceEntity(247U);
    msg.setDestination(15172U);
    msg.setDestinationEntity(34U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.6110779558690053;
    msg.control.set(tmp_msg_0);
    msg.duration = 39629U;
    msg.custom.assign("JOTQDIBPPLHEA");

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
    msg.setTimeStamp(0.7931518923029627);
    msg.setSource(46441U);
    msg.setSourceEntity(1U);
    msg.setDestination(63930U);
    msg.setDestinationEntity(131U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 455824995U;
    tmp_msg_0.start_lat = 0.8879962198059559;
    tmp_msg_0.start_lon = 0.7652463371228544;
    tmp_msg_0.start_z = 0.10256493844464154;
    tmp_msg_0.start_z_units = 73U;
    tmp_msg_0.end_lat = 0.6443384859352943;
    tmp_msg_0.end_lon = 0.36405507849139074;
    tmp_msg_0.end_z = 0.3399196344431852;
    tmp_msg_0.end_z_units = 167U;
    tmp_msg_0.speed = 0.9606776284271372;
    tmp_msg_0.speed_units = 43U;
    tmp_msg_0.lradius = 0.5518450925701242;
    tmp_msg_0.flags = 65U;
    msg.control.set(tmp_msg_0);
    msg.duration = 59591U;
    msg.custom.assign("ICAGXBROJNUPWTUCDEXQLNZSHCTWNULVCYIMRYGQKZRVFZJJJACZGQGCDARWHJZDQLLART");

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
    msg.setTimeStamp(0.12039067347131993);
    msg.setSource(19846U);
    msg.setSourceEntity(1U);
    msg.setDestination(18179U);
    msg.setDestinationEntity(133U);
    msg.timeout = 14957U;
    msg.lat = 0.0005530433184880446;
    msg.lon = 0.7696800577889923;
    msg.z = 0.3537817959376136;
    msg.z_units = 52U;
    msg.speed = 0.13245872423416216;
    msg.speed_units = 102U;
    msg.bearing = 0.1796366222309279;
    msg.cross_angle = 0.7624445715126331;
    msg.width = 0.025409965987812644;
    msg.length = 0.5214284413142978;
    msg.hstep = 0.5537904835012707;
    msg.coff = 29U;
    msg.alternation = 131U;
    msg.flags = 96U;
    msg.custom.assign("UENFCREQBXYTLVZODDYHDGCMNQXYRTVXANFFBEEL");

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
    msg.setTimeStamp(0.5808656700764301);
    msg.setSource(61722U);
    msg.setSourceEntity(79U);
    msg.setDestination(52391U);
    msg.setDestinationEntity(35U);
    msg.timeout = 1901U;
    msg.lat = 0.9129457616642868;
    msg.lon = 0.211190839129762;
    msg.z = 0.19502603552650644;
    msg.z_units = 253U;
    msg.speed = 0.2108901000327904;
    msg.speed_units = 187U;
    msg.bearing = 0.6052808030758466;
    msg.cross_angle = 0.5712972442139184;
    msg.width = 0.8265929453787029;
    msg.length = 0.8975798913897367;
    msg.hstep = 0.7199763108766498;
    msg.coff = 49U;
    msg.alternation = 105U;
    msg.flags = 251U;
    msg.custom.assign("WOWGVRGJMHMSZNEXIQGDLVZKDSJBTQYGCNVUVLSJBZRXATPIKYFQFLUOGZWJBRKZUAJFHREEKISXYWSOOINXBVTFNINZNKTLTHHIQAPQQDFOCEBUGDHZMPXLELXQSVKNOMRYHHOT");

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
    msg.setTimeStamp(0.07536719167697004);
    msg.setSource(25102U);
    msg.setSourceEntity(182U);
    msg.setDestination(16463U);
    msg.setDestinationEntity(122U);
    msg.timeout = 6423U;
    msg.lat = 0.10845319360591199;
    msg.lon = 0.5112714890739579;
    msg.z = 0.1466689199208785;
    msg.z_units = 135U;
    msg.speed = 0.12288145054888311;
    msg.speed_units = 57U;
    msg.bearing = 0.689433577483454;
    msg.cross_angle = 0.8775584672931981;
    msg.width = 0.30268095116730265;
    msg.length = 0.09444542097686248;
    msg.hstep = 0.769726870514318;
    msg.coff = 185U;
    msg.alternation = 37U;
    msg.flags = 157U;
    msg.custom.assign("DXVMUJUHEJBSGZTRMBQQSHQQECBNZPWYQZWXLQAWGCUHUSAPHYFZYIWURMWSUMXVSLDLKPBCOJBPIIQEFQKLCRJKLZQFXWKKUDBNTAFNZDFAROGKNRSTEMLETPEPZHSARHTGVOXFWEOWIYCBTYHDDBDZUXGIONPMWKOMYPZQCYIKTMFEGIHSJCKXDYNPNMFEOZUEKCIJLVIJJAMGN");

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
    msg.setTimeStamp(0.4160037389414586);
    msg.setSource(61851U);
    msg.setSourceEntity(6U);
    msg.setDestination(44093U);
    msg.setDestinationEntity(159U);
    msg.timeout = 16935U;
    msg.lat = 0.06668112820198324;
    msg.lon = 0.7386442887189975;
    msg.z = 0.9487130589990161;
    msg.z_units = 183U;
    msg.speed = 0.7625253803407458;
    msg.speed_units = 104U;
    msg.custom.assign("RTHZVKLIQGGYIVLJHULIBLYPDCFRABBWPRGCWSENLKAXYXFUOCQZERMTPTMOYYSNAJFJDDOJTDHUMQKRGWVLQHTKNYTBAGALIZPRESKGUXMFZWCVZJYVRKBOMXNALFPNKKGWHSCJDNDSJUGFWSHADWMCXUZUBPBCVQWOISUOPNJXFFOYAVSZJETOBBHQNIRMRODH");

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
    msg.setTimeStamp(0.6761696419635362);
    msg.setSource(8290U);
    msg.setSourceEntity(16U);
    msg.setDestination(31642U);
    msg.setDestinationEntity(190U);
    msg.timeout = 57366U;
    msg.lat = 0.07971423137316935;
    msg.lon = 0.5257546095029013;
    msg.z = 0.9255068813244381;
    msg.z_units = 66U;
    msg.speed = 0.6853856225533009;
    msg.speed_units = 19U;
    msg.custom.assign("KKCGNOVLPBDMUYGWSRJMQUBTINYIRCMHWYQREOWAVAJODBVSJOUAOEXZNFRAZPCLENFYCJZXTBGRPDUXFEHTJSUVYIKCTUZLWWIAQNPIZMVXLGQUVLMXFSB");

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
    msg.setTimeStamp(0.05172480664570256);
    msg.setSource(27151U);
    msg.setSourceEntity(189U);
    msg.setDestination(48059U);
    msg.setDestinationEntity(93U);
    msg.timeout = 15374U;
    msg.lat = 0.16050778205326555;
    msg.lon = 0.4195148348893256;
    msg.z = 0.7204511963115157;
    msg.z_units = 59U;
    msg.speed = 0.9337932977181868;
    msg.speed_units = 244U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.22369356486114722;
    tmp_msg_0.y = 0.816672302242148;
    tmp_msg_0.z = 0.7429340734259079;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PGNEIGQNAVVSJLLROKHFQZCDNOCSMCRYLWGNMTTRXEXTMJUBHUQFTDEZRJGECWUJBMUXMJGNTYZQJFRYMTPBPEKNXBIXAZGDFKAVGFKCEHQLWUBAEB");

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
    msg.setTimeStamp(0.4142123400504665);
    msg.setSource(30611U);
    msg.setSourceEntity(199U);
    msg.setDestination(56362U);
    msg.setDestinationEntity(57U);
    msg.x = 0.5748507804211627;
    msg.y = 0.5732401360029762;
    msg.z = 0.22016956947144173;

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
    msg.setTimeStamp(0.18256578824645253);
    msg.setSource(7689U);
    msg.setSourceEntity(41U);
    msg.setDestination(31478U);
    msg.setDestinationEntity(35U);
    msg.x = 0.9761462751283523;
    msg.y = 0.7095814975905892;
    msg.z = 0.056142069503053005;

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
    msg.setTimeStamp(0.12038810752372509);
    msg.setSource(20567U);
    msg.setSourceEntity(152U);
    msg.setDestination(46054U);
    msg.setDestinationEntity(171U);
    msg.x = 0.6558384078379316;
    msg.y = 0.7584133858686044;
    msg.z = 0.26468837475443374;

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
    msg.setTimeStamp(0.011691493260439834);
    msg.setSource(26483U);
    msg.setSourceEntity(170U);
    msg.setDestination(47793U);
    msg.setDestinationEntity(150U);
    msg.timeout = 36540U;
    msg.lat = 0.7637629975119968;
    msg.lon = 0.49745089711075363;
    msg.z = 0.08410771373034676;
    msg.z_units = 53U;
    msg.amplitude = 0.12045018729700452;
    msg.pitch = 0.08665745832787208;
    msg.speed = 0.590887407799188;
    msg.speed_units = 216U;
    msg.custom.assign("KXNGWVIMHMOEAMLEJPXBHJAYBZRNGCVQLOJVIBZZKECDJOFCQKGMUTNTWSISEHHMYSAXXAMRSCRVFUGAHWKNAPLLBQKRIPRUUPGPTFDPAODYRNBTYQYEQCYLUDWIIVKQVHTPCYVATWHCOEJJGDGYJHXTKBLMUPZUVYISQXWFACDSZQGECJJYKT");

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
    msg.setTimeStamp(0.4072642149340314);
    msg.setSource(18948U);
    msg.setSourceEntity(186U);
    msg.setDestination(42347U);
    msg.setDestinationEntity(181U);
    msg.timeout = 47549U;
    msg.lat = 0.7984450672870644;
    msg.lon = 0.8186091994887129;
    msg.z = 0.8733734709323775;
    msg.z_units = 35U;
    msg.amplitude = 0.14885853494528745;
    msg.pitch = 0.8936365092060029;
    msg.speed = 0.04244084150701988;
    msg.speed_units = 112U;
    msg.custom.assign("HFIKYYEADLCAGDJDGMBENHFSCYVXCBPSWKJAZ");

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
    msg.setTimeStamp(0.21290007410863587);
    msg.setSource(8428U);
    msg.setSourceEntity(184U);
    msg.setDestination(62U);
    msg.setDestinationEntity(51U);
    msg.timeout = 17727U;
    msg.lat = 0.7059384817931303;
    msg.lon = 0.8285350301775758;
    msg.z = 0.000904190242611902;
    msg.z_units = 5U;
    msg.amplitude = 0.43781633473508585;
    msg.pitch = 0.7984876605789083;
    msg.speed = 0.6191697803729296;
    msg.speed_units = 33U;
    msg.custom.assign("ULZCNYNKCDXFLCWZCETBHSPVDHQMYOODTEDSRNYQDNZMFEZKFXNPJOULGTAOFSAFFOIMKXBVLBTHGVGXPERYPWSTHWECLIRHKOZIRQHJDEGUGAZHVGIGMBYYVQYIXTFSIKDNLQRUXWDVJNWZOMKPXTSIBKAZBTMVFPGSNXCLDPQAJ");

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
    msg.setTimeStamp(0.05018587865805535);
    msg.setSource(25058U);
    msg.setSourceEntity(229U);
    msg.setDestination(34140U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.5736022522457923);
    msg.setSource(8191U);
    msg.setSourceEntity(32U);
    msg.setDestination(64383U);
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
    msg.setTimeStamp(0.6108995447394051);
    msg.setSource(6399U);
    msg.setSourceEntity(66U);
    msg.setDestination(61229U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.7457550046269537);
    msg.setSource(3704U);
    msg.setSourceEntity(242U);
    msg.setDestination(42906U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.6695478697483239;
    msg.lon = 0.18953477690656717;
    msg.z = 0.671282793376441;
    msg.z_units = 25U;
    msg.radius = 0.09148895193207618;
    msg.duration = 24449U;
    msg.speed = 0.48847480455085657;
    msg.speed_units = 128U;
    msg.custom.assign("IQVPQWNMCPYFSBFICL");

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
    msg.setTimeStamp(0.8371868015204347);
    msg.setSource(26284U);
    msg.setSourceEntity(15U);
    msg.setDestination(48963U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.17888423552521482;
    msg.lon = 0.1510153156199484;
    msg.z = 0.04164556789854135;
    msg.z_units = 212U;
    msg.radius = 0.025532713804019336;
    msg.duration = 56946U;
    msg.speed = 0.27342662928407324;
    msg.speed_units = 32U;
    msg.custom.assign("IOFDYUHJDJFHKBEFFBAGXVDAOCBRXSLWTBKJOUTTVIKYPZMEBGFQIENXPSBRYUKLYCFMLBQMATLRDKMMNWNZIQJLVAZLECHJFSKNVYDOHFITHJRSCQPZHXYMOODXROGRBYDSEZ");

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
    msg.setTimeStamp(0.597727372614041);
    msg.setSource(8543U);
    msg.setSourceEntity(81U);
    msg.setDestination(3253U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.1651725621354675;
    msg.lon = 0.6385860893868335;
    msg.z = 0.33326016282927606;
    msg.z_units = 57U;
    msg.radius = 0.7282417554429214;
    msg.duration = 36224U;
    msg.speed = 0.16557167559342134;
    msg.speed_units = 175U;
    msg.custom.assign("UPUNINGUPFBFHICSJDVFZFARLWTHWTRASVLLMMNDLHTRNMUZBKCFXQPMNSXPVXXYWAJTRDVKVCRGAOSBVYOOHFFHSKHBTGKDWENWGLYATCYIBVZCCPPEXBSJHKEOIIUSY");

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
    msg.setTimeStamp(0.5646166315918819);
    msg.setSource(22141U);
    msg.setSourceEntity(109U);
    msg.setDestination(6311U);
    msg.setDestinationEntity(207U);
    msg.timeout = 45680U;
    msg.flags = 112U;
    msg.lat = 0.5083151553328465;
    msg.lon = 0.2653858894376464;
    msg.start_z = 0.020785200771562873;
    msg.start_z_units = 201U;
    msg.end_z = 0.7575720482219476;
    msg.end_z_units = 138U;
    msg.radius = 0.45512117300108634;
    msg.speed = 0.6721765690429331;
    msg.speed_units = 199U;
    msg.custom.assign("KZFWGNQUQKXBLBAUGRWXOONRNGHEYYVWLDUHXITHGSOKVVQRETJSFUNZHDRLSASWJCOTDFRXSNGECKNEPBDGHWIQFHEXMXPJYDMNMIDBVDDSYJAZBFRGNKZMESPSTIIJKLIIHLOZPSAWOAATKFCXYQPEAXMKOKRHUMZZWGFZMEDFUPC");

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
    msg.setTimeStamp(0.9250848677877344);
    msg.setSource(5842U);
    msg.setSourceEntity(17U);
    msg.setDestination(41607U);
    msg.setDestinationEntity(49U);
    msg.timeout = 65451U;
    msg.flags = 16U;
    msg.lat = 0.14690020586004682;
    msg.lon = 0.5303505915089474;
    msg.start_z = 0.7367962943075956;
    msg.start_z_units = 159U;
    msg.end_z = 0.2594914321475321;
    msg.end_z_units = 182U;
    msg.radius = 0.12427165930309447;
    msg.speed = 0.935177555299382;
    msg.speed_units = 212U;
    msg.custom.assign("QLOWKMNTSBNSWGFYNCFCTALSAQPAYQRZJSLRLQPPNAFYCPNGWHVFTGWHYQSQBEFHYBHHMDEAZZDWRGFHGWUDEOIDCBGVRSWKVRVIVEQCERJEJWFIVMQVZNFYYAMSHAOXOGRODPTCFYIGSRMXQEKCJVJNKDBZDCUMJUGBGUXOCDDJTQNHMJAXITUPETEZDBXNLLVLPOSPXFHZPTTUATJXMOKKA");

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
    msg.setTimeStamp(0.9882935375690021);
    msg.setSource(1069U);
    msg.setSourceEntity(74U);
    msg.setDestination(36133U);
    msg.setDestinationEntity(123U);
    msg.timeout = 6212U;
    msg.flags = 61U;
    msg.lat = 0.9371226659404895;
    msg.lon = 0.8008111923059544;
    msg.start_z = 0.4115213185704276;
    msg.start_z_units = 117U;
    msg.end_z = 0.5196930065129131;
    msg.end_z_units = 202U;
    msg.radius = 0.3739669254171517;
    msg.speed = 0.3400828673536992;
    msg.speed_units = 7U;
    msg.custom.assign("MSDUUZBWYACESYYYMJFLZWQSSCJVPFEFIGASPXRXQTDAKHUVACNOYUXGTCXIBPRXRYGMDYFNEMIDURYGVJKPWLKJFRMKITOMZETV");

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
    msg.setTimeStamp(0.8778270318131126);
    msg.setSource(29702U);
    msg.setSourceEntity(108U);
    msg.setDestination(33348U);
    msg.setDestinationEntity(100U);
    msg.timeout = 57702U;
    msg.lat = 0.7909496055213389;
    msg.lon = 0.6205101178835415;
    msg.z = 0.04983481797933076;
    msg.z_units = 62U;
    msg.speed = 0.4729532641556917;
    msg.speed_units = 118U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.06497667856706979;
    tmp_msg_0.y = 0.33207396970482794;
    tmp_msg_0.z = 0.19536651192535326;
    tmp_msg_0.t = 0.6530706322709268;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FOYJUYNPGYXFXIWGRVEOWRZKGCANVNJLQMVLKECXPAVMERYAXBJOIAYXGAIAXRRNTNZLVTRSQ");

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
    msg.setTimeStamp(0.6708223249461988);
    msg.setSource(19188U);
    msg.setSourceEntity(60U);
    msg.setDestination(54060U);
    msg.setDestinationEntity(226U);
    msg.timeout = 5540U;
    msg.lat = 0.03886302149118759;
    msg.lon = 0.2672383316320799;
    msg.z = 0.8763938913950344;
    msg.z_units = 132U;
    msg.speed = 0.4097380123912382;
    msg.speed_units = 10U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5375561102351649;
    tmp_msg_0.y = 0.1136289890923019;
    tmp_msg_0.z = 0.2715516054763809;
    tmp_msg_0.t = 0.14716472407987136;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SXMXZARTWGVNMTPJMJRTATVSGQKKABGHBKXPFBSUTXINLOUWFCJQYJSNQLTKVUVEQKECMCGWPNZANIKCGLMAHHZOEJPXNOBOISJBHGQUIGLMDNLTBAGRYDREZACSYOFOWBRCKQZLESQUPXHFYERMBXLMATWHSLIHVZGDDHAJVVCFFFNVLHYPHEPJCN");

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
    msg.setTimeStamp(0.48721166008985606);
    msg.setSource(43811U);
    msg.setSourceEntity(200U);
    msg.setDestination(20603U);
    msg.setDestinationEntity(49U);
    msg.timeout = 61470U;
    msg.lat = 0.7803965932133468;
    msg.lon = 0.9180307883883805;
    msg.z = 0.5953926736559377;
    msg.z_units = 5U;
    msg.speed = 0.2458037302088938;
    msg.speed_units = 225U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7312891938299001;
    tmp_msg_0.y = 0.7905569274533066;
    tmp_msg_0.z = 0.4100794261124726;
    tmp_msg_0.t = 0.3574259891816729;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NGIYUPDGMILCNKAMXSSEVRYWILCHEYGHKEWODHXAVGJTACQOLUAEZMCFNXEHZRCYGSLJPIYPWAIXWVVFBHLFJPMQJJQHQMERXDBTZEIQUZMZXWFZ");

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
    msg.setTimeStamp(0.05277790119195214);
    msg.setSource(36795U);
    msg.setSourceEntity(250U);
    msg.setDestination(46695U);
    msg.setDestinationEntity(49U);
    msg.x = 0.0390138189732937;
    msg.y = 0.7212622956825242;
    msg.z = 0.626422108355653;
    msg.t = 0.5502011781329523;

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
    msg.setTimeStamp(0.18677315392894844);
    msg.setSource(29322U);
    msg.setSourceEntity(240U);
    msg.setDestination(31380U);
    msg.setDestinationEntity(22U);
    msg.x = 0.1301263979683912;
    msg.y = 0.42122566625070323;
    msg.z = 0.9656225744221242;
    msg.t = 0.3877476377843797;

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
    msg.setTimeStamp(0.13098314984052972);
    msg.setSource(7104U);
    msg.setSourceEntity(38U);
    msg.setDestination(64531U);
    msg.setDestinationEntity(183U);
    msg.x = 0.631384518123747;
    msg.y = 0.846453007653831;
    msg.z = 0.5165728157635429;
    msg.t = 0.7604038420724968;

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
    msg.setTimeStamp(0.47792302828879696);
    msg.setSource(41513U);
    msg.setSourceEntity(63U);
    msg.setDestination(56277U);
    msg.setDestinationEntity(193U);
    msg.timeout = 64092U;
    msg.name.assign("PTVQTTDPUHDAZUJZVWYZQZDYUNCYXIRVLFZWLALEXALKSQUZYNDSNCOAJPAHOWXIIWLNXUPBHFVQIETDWTTBDPDGGYGDEBLORMJVOZARQHTFFDJWVZMGTGPYGYZBGXBSJRESILYAXQYKRSSKRNXOCOJJHONIOPNFKUQMMERJIAGJILMMWTFFSNQNVXKMESVSPOCIKXLKBBKFKCACETHRVHQ");
    msg.custom.assign("CKNEPPCBJUWSVARJBPIJFIWSMVOKAOQBZADXGBYOVQZLNDKLEMRPFXWG");

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
    msg.setTimeStamp(0.5013306072164648);
    msg.setSource(42155U);
    msg.setSourceEntity(88U);
    msg.setDestination(41807U);
    msg.setDestinationEntity(167U);
    msg.timeout = 37143U;
    msg.name.assign("ALXYZSILXINWGHEDYVLDYXQYWOFAVCHATLEHRRPKYABMKPJQSDQJNFUUXSCXOWBDGTJSMNFUNNLOTRXNPTQIRHNVOQFDWAMHZKYZPSOTRKKBYDASPJIEJWJBMMEOSPVDERZMUNXRIBCCCESSITYGMKVZBJXPUWBNZZOTSJFUJL");
    msg.custom.assign("WOKHRZAIQEALSPPZOVYDYJADAEOQEHDNSEBSUNPEYXKITGMCQQJHYURIUVWTSRFVNOGSODVWLFZMWEGZYYJNEFDWHLNHTWCLMRUZBWNGXZFMRLQCUBKDKKFTLMCXTLLPXQDFNM");

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
    msg.setTimeStamp(0.256786448898632);
    msg.setSource(28203U);
    msg.setSourceEntity(11U);
    msg.setDestination(6161U);
    msg.setDestinationEntity(204U);
    msg.timeout = 38700U;
    msg.name.assign("RPYLKZQYEQNYKVNCBIIQZOIIJDBGUREQEPDHBHAAULRMUOYCSTVDUBDIURBVAMNGJASLYKWKG");
    msg.custom.assign("WVIZTNYLCALKGEXPTZGDYPRKYYHCAADZNLDCOVMICJFNDIBJOJOQXDMOHBZMGGZGUYKNEBUNGBXOIMTFTUIVETFOHAXWNDEZSEB");

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
    msg.setTimeStamp(0.5910912243672912);
    msg.setSource(59665U);
    msg.setSourceEntity(41U);
    msg.setDestination(11580U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.2695731010522141;
    msg.lon = 0.9018397273267328;
    msg.z = 0.41172843271408;
    msg.z_units = 216U;
    msg.speed = 0.4369375719716966;
    msg.speed_units = 189U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8161498869037656;
    tmp_msg_0.y = 0.38659907849649977;
    tmp_msg_0.z = 0.17370493989294655;
    tmp_msg_0.t = 0.7860589801137446;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.08576060112898354;
    msg.custom.assign("SUDAFUIQZEEQMCZGZUUKYXBFHHQUVRCDCAIAVNXKADLSZWKIMFQOBFNDTCLSNIHGBHLRGRUGDTKNCLJOWYHCPSGEUSLVQDEIRMWJEYYJJJTDOKTYWITHMQVTKOMOTLGRDNSFWEKGBNPKUVXFEQQFVFHZIOYSVBQNPFAJIDKEBEMYYGLASB");

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
    msg.setTimeStamp(0.49383713025548714);
    msg.setSource(26381U);
    msg.setSourceEntity(31U);
    msg.setDestination(27768U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.3066274481836564;
    msg.lon = 0.6716527218066102;
    msg.z = 0.3624521928202904;
    msg.z_units = 24U;
    msg.speed = 0.029773209514838195;
    msg.speed_units = 83U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58839U;
    tmp_msg_0.off_x = 0.6024709393157138;
    tmp_msg_0.off_y = 0.34274512372920873;
    tmp_msg_0.off_z = 0.47507840985993666;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.3142178783587437;
    msg.custom.assign("LCOVYRIBKUYOKIMUQQALXPQTAWTESXJPIGERYKVRCCBUUREOKMUPTMEALWCQ");

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
    msg.setTimeStamp(0.6859568631248066);
    msg.setSource(3704U);
    msg.setSourceEntity(216U);
    msg.setDestination(34906U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.2656653168622982;
    msg.lon = 0.33982991020495656;
    msg.z = 0.7976622424041963;
    msg.z_units = 32U;
    msg.speed = 0.7991979287937043;
    msg.speed_units = 195U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9315774304405497;
    tmp_msg_0.y = 0.14709624063461713;
    tmp_msg_0.z = 0.7927170464860696;
    tmp_msg_0.t = 0.7773939508647615;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.14273601519350387;
    msg.custom.assign("THELXJVMKCCWDYDYISGUXNMJESRSAQWMCBPVCFNVFRAZYGQYQWXFGAANAWIYIWSDXPFUJWHDSOJMKTINTWQIDMUENHPA");

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
    msg.setTimeStamp(0.232186956797109);
    msg.setSource(42961U);
    msg.setSourceEntity(187U);
    msg.setDestination(45793U);
    msg.setDestinationEntity(204U);
    msg.vid = 46548U;
    msg.off_x = 0.4849437954298621;
    msg.off_y = 0.7153042496905128;
    msg.off_z = 0.7465215221651004;

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
    msg.setTimeStamp(0.3492103783641858);
    msg.setSource(51372U);
    msg.setSourceEntity(215U);
    msg.setDestination(31844U);
    msg.setDestinationEntity(248U);
    msg.vid = 62822U;
    msg.off_x = 0.4484265944075162;
    msg.off_y = 0.4380463453454523;
    msg.off_z = 0.03158888144712457;

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
    msg.setTimeStamp(0.8183821933740713);
    msg.setSource(12597U);
    msg.setSourceEntity(178U);
    msg.setDestination(17286U);
    msg.setDestinationEntity(73U);
    msg.vid = 58026U;
    msg.off_x = 0.4978028302959756;
    msg.off_y = 0.34926159703418924;
    msg.off_z = 0.09896796989716006;

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
    msg.setTimeStamp(0.935126554187245);
    msg.setSource(25032U);
    msg.setSourceEntity(120U);
    msg.setDestination(28708U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.38215563306396105);
    msg.setSource(49741U);
    msg.setSourceEntity(209U);
    msg.setDestination(29646U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.5784950618872458);
    msg.setSource(40772U);
    msg.setSourceEntity(165U);
    msg.setDestination(9244U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.2314323053471069);
    msg.setSource(50619U);
    msg.setSourceEntity(204U);
    msg.setDestination(15421U);
    msg.setDestinationEntity(175U);
    msg.mid = 27847U;

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
    msg.setTimeStamp(0.6270793815619976);
    msg.setSource(37751U);
    msg.setSourceEntity(179U);
    msg.setDestination(3781U);
    msg.setDestinationEntity(195U);
    msg.mid = 16480U;

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
    msg.setTimeStamp(0.7908398902379137);
    msg.setSource(4051U);
    msg.setSourceEntity(112U);
    msg.setDestination(58094U);
    msg.setDestinationEntity(67U);
    msg.mid = 31657U;

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
    msg.setTimeStamp(0.3104136112998628);
    msg.setSource(30624U);
    msg.setSourceEntity(97U);
    msg.setDestination(58519U);
    msg.setDestinationEntity(67U);
    msg.state = 239U;
    msg.eta = 62614U;
    msg.info.assign("CGUQYIEMWGOGWOLQHUNDCTOQNALASGADJYTIEDKZUXJCCPXXMZVKIMSBNOQMIEWAPYWEDUAFWJHTVVXLVYBXTIJMAOBEASTYTDDYTGVRZGIESCYJEUVLQWJDKJAVZIFXLZEFQWHLHNZVGWKRYBRLXUBFOZOSVQRQAHSXRHSERCNCBOYJHB");

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
    msg.setTimeStamp(0.20478060646463747);
    msg.setSource(9858U);
    msg.setSourceEntity(171U);
    msg.setDestination(32821U);
    msg.setDestinationEntity(92U);
    msg.state = 166U;
    msg.eta = 52921U;
    msg.info.assign("KFJNGPBGDJJYZOXHA");

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
    msg.setTimeStamp(0.7572619689400468);
    msg.setSource(14866U);
    msg.setSourceEntity(235U);
    msg.setDestination(46905U);
    msg.setDestinationEntity(75U);
    msg.state = 139U;
    msg.eta = 31646U;
    msg.info.assign("QPZHFQSLVSNAUEULBMTLLJAKHQAHQBJQFMSFPJJWUNDUNIUECVCNQXPVWEOHBNSWRIPGYQTIYGALZNKYKSJEFIQXEPJGDZAOYBSHSDOBMCRBALFBCZDZMGIDSXGBNZIRWPTCHMJWOVDITUOKAVDGDNYVKDRHGHTZLZWUBGOGCOGWIEDTFORAXXXLMSWMFYXMYJQOEKHTSTPYVFQKMLZWVLTARZWURXVUIEJTAUKFYKRNICMXNERPKYPC");

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
    msg.setTimeStamp(0.7557414674999074);
    msg.setSource(46614U);
    msg.setSourceEntity(210U);
    msg.setDestination(62631U);
    msg.setDestinationEntity(199U);
    msg.system = 59474U;
    msg.duration = 21787U;
    msg.speed = 0.055818433174653403;
    msg.speed_units = 152U;
    msg.x = 0.9806689608284441;
    msg.y = 0.06061846665309156;
    msg.z = 0.7624359202156966;
    msg.z_units = 119U;

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
    msg.setTimeStamp(0.3857915314713961);
    msg.setSource(54322U);
    msg.setSourceEntity(32U);
    msg.setDestination(60512U);
    msg.setDestinationEntity(210U);
    msg.system = 47022U;
    msg.duration = 14190U;
    msg.speed = 0.635108832179423;
    msg.speed_units = 16U;
    msg.x = 0.3720063329594452;
    msg.y = 0.032396242030728994;
    msg.z = 0.09362374490722325;
    msg.z_units = 155U;

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
    msg.setTimeStamp(0.8027570173586874);
    msg.setSource(56295U);
    msg.setSourceEntity(134U);
    msg.setDestination(63773U);
    msg.setDestinationEntity(35U);
    msg.system = 37410U;
    msg.duration = 27252U;
    msg.speed = 0.37003594655897876;
    msg.speed_units = 141U;
    msg.x = 0.6204171288285408;
    msg.y = 0.2638384602154882;
    msg.z = 0.5462124880501543;
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
    msg.setTimeStamp(0.6049581392208323);
    msg.setSource(65043U);
    msg.setSourceEntity(236U);
    msg.setDestination(52589U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.622247618847999;
    msg.lon = 0.5028414508964009;
    msg.speed = 0.2897762719863496;
    msg.speed_units = 240U;
    msg.duration = 60747U;
    msg.sys_a = 36845U;
    msg.sys_b = 51591U;
    msg.move_threshold = 0.08241489831278681;

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
    msg.setTimeStamp(0.9983633238325031);
    msg.setSource(18334U);
    msg.setSourceEntity(93U);
    msg.setDestination(63853U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.21983528496743054;
    msg.lon = 0.8862558742855452;
    msg.speed = 0.7675710816260457;
    msg.speed_units = 47U;
    msg.duration = 46888U;
    msg.sys_a = 27360U;
    msg.sys_b = 36341U;
    msg.move_threshold = 0.7182784347456577;

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
    msg.setTimeStamp(0.9861276373618714);
    msg.setSource(61441U);
    msg.setSourceEntity(29U);
    msg.setDestination(54150U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.44521401339424715;
    msg.lon = 0.55554999267428;
    msg.speed = 0.9480031248792415;
    msg.speed_units = 28U;
    msg.duration = 22819U;
    msg.sys_a = 10821U;
    msg.sys_b = 41266U;
    msg.move_threshold = 0.843048568005295;

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
    msg.setTimeStamp(0.844550282509736);
    msg.setSource(52247U);
    msg.setSourceEntity(219U);
    msg.setDestination(26970U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.44786804328803087;
    msg.lon = 0.6217374994445276;
    msg.z = 0.020900947337949338;
    msg.z_units = 44U;
    msg.speed = 0.9982216626297672;
    msg.speed_units = 29U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.44833356481606;
    tmp_msg_0.lon = 0.4372525374225922;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AOHSHPIYLHPMSQILBHASVPFDJJ");

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
    msg.setTimeStamp(0.5287160412969043);
    msg.setSource(14505U);
    msg.setSourceEntity(253U);
    msg.setDestination(26530U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.189756124540974;
    msg.lon = 0.1673155678036089;
    msg.z = 0.34497676869152405;
    msg.z_units = 52U;
    msg.speed = 0.12677681313398226;
    msg.speed_units = 89U;
    msg.custom.assign("ZPMTFPNHJTKWGZADASYZSHOLMKGDFRXNLEHYJTNOWOGBYXDSEIEYGROQBSQFVMBXFHVVCEZCFLSJULWSSKIRYYWNAQQPLUWUOCNLABBUJYLWEGTKKFINNJPJENEEVZPGGXCRLJDUQIEMVQXCBTSAVRQYYZXOODCHDKBRCXNWUIYTFRVTSICAAUWGROKRHLBPCVKXQZKZIPGKPTDHQOUMNMZJTXAFVWOLDPMPHJDMT");

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
    msg.setTimeStamp(0.2259656470929321);
    msg.setSource(47970U);
    msg.setSourceEntity(86U);
    msg.setDestination(33323U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.8701369037907982;
    msg.lon = 0.26233260781845946;
    msg.z = 0.030628951050194586;
    msg.z_units = 114U;
    msg.speed = 0.9144285672418485;
    msg.speed_units = 191U;
    msg.custom.assign("VBJCHAKQCLNHPAYDZNJLYYJNZVFUSXIEFCXWLASWIWYVYAWWQWQFUKJAPJEJTTQMPZTGVRTHQOCKESQXEIDDHXMCSGYEQTZKOENUPCRUVZLOUOAJZSMGBPKSWUKQANSIBPNHXIVYRUAWTEPDVLPZNGLKBGXITHMOLVAXLH");

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
    msg.setTimeStamp(0.08365306677812323);
    msg.setSource(40770U);
    msg.setSourceEntity(121U);
    msg.setDestination(13775U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.7411372032305482;
    msg.lon = 0.3859281670081407;

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
    msg.setTimeStamp(0.0694454654419886);
    msg.setSource(20675U);
    msg.setSourceEntity(49U);
    msg.setDestination(43709U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.3126858610848159;
    msg.lon = 0.12050108299116291;

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
    msg.setTimeStamp(0.9238902641790472);
    msg.setSource(21412U);
    msg.setSourceEntity(154U);
    msg.setDestination(61265U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.8929772344407721;
    msg.lon = 0.1521199274611268;

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
    msg.setTimeStamp(0.47822842755230166);
    msg.setSource(18016U);
    msg.setSourceEntity(129U);
    msg.setDestination(47424U);
    msg.setDestinationEntity(101U);
    msg.timeout = 48865U;
    msg.lat = 0.23767387132710938;
    msg.lon = 0.9254588981460665;
    msg.z = 0.04498214375768972;
    msg.z_units = 213U;
    msg.pitch = 0.8737557808114041;
    msg.amplitude = 0.20533181002509238;
    msg.duration = 53818U;
    msg.speed = 0.9183668294399948;
    msg.speed_units = 139U;
    msg.radius = 0.6241317741008122;
    msg.direction = 73U;
    msg.custom.assign("SICYXCHCRBLBDOCWFNTKOYMVENJMDRUTPIEAIUOQITLCFSBGXKMYJVGFVECXMJRWQPJMFEQOIPBJLGLYSIYWARPTGZILTPYEVCJFONYQKWUWQKACPFSWDVJRDSRZVDAPMDXTCSPIHUNDKEK");

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
    msg.setTimeStamp(0.18898870083910135);
    msg.setSource(33788U);
    msg.setSourceEntity(235U);
    msg.setDestination(6212U);
    msg.setDestinationEntity(148U);
    msg.timeout = 62922U;
    msg.lat = 0.7235374344952934;
    msg.lon = 0.13621534716125872;
    msg.z = 0.20552645266209346;
    msg.z_units = 50U;
    msg.pitch = 0.28969640669456875;
    msg.amplitude = 0.9997132862255176;
    msg.duration = 11152U;
    msg.speed = 0.8161203648911013;
    msg.speed_units = 75U;
    msg.radius = 0.06121283037086167;
    msg.direction = 70U;
    msg.custom.assign("UPMFTFTSJKQQJHQVPIDCKHWANSAVBZNPCIKUQJZAFKACNKOZDBQJYZMFSGXVSVMXAIXADVOBDRWF");

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
    msg.setTimeStamp(0.07232780979491782);
    msg.setSource(25114U);
    msg.setSourceEntity(161U);
    msg.setDestination(5541U);
    msg.setDestinationEntity(217U);
    msg.timeout = 62632U;
    msg.lat = 0.5286299096960613;
    msg.lon = 0.07156417147203287;
    msg.z = 0.5231530018150519;
    msg.z_units = 70U;
    msg.pitch = 0.9711816922638675;
    msg.amplitude = 0.28857577038998894;
    msg.duration = 56432U;
    msg.speed = 0.8108391300445412;
    msg.speed_units = 253U;
    msg.radius = 0.7695696539844418;
    msg.direction = 93U;
    msg.custom.assign("SJYSPATLHGSFDQMDIYVGKORRTVSZXDYOFAYZHLWEEKXINXXDCPRKHHSCLRZTYNEEXHINZSZQEJHHQKSRBNIECREMLGMNFNZSUJUOJLZFUBIYIVIKQYPQKOUYLKFKMIDBPTMLNKUQXVTBXCGCOKNTCACPWPGQOWODGBCWTMWZMLHUEFMEBDZQTVYDHCPHXXLFVSGGJIUAWQVODRUWAQDTNOABFGJRIWUVFUXNTPBJJGAWWECJ");

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
    msg.setTimeStamp(0.1612470329570106);
    msg.setSource(52971U);
    msg.setSourceEntity(205U);
    msg.setDestination(29058U);
    msg.setDestinationEntity(225U);
    msg.formation_name.assign("BNCDKFUIKKBSICLMWTAVLAAQQGQQMFNFWJBTWIAJYUNZXIBSAXHYERYDYOGYJFGDKFDKXTZYMJJKALHFQROYJGDVCKSNXGGGUTLYUPRRWODVTWOPEVOHNBPITGRZHALQVNILLUZBMPAEEVBMTFCAOJPZFMRFZHC");
    msg.reference_frame = 42U;
    msg.custom.assign("HYRJAZXZZIBSFDHZRDIPQDUSHNDZYXPYAMLATNZPTNTXFPSDJIKVTWXWK");

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
    msg.setTimeStamp(0.518900378506054);
    msg.setSource(14966U);
    msg.setSourceEntity(52U);
    msg.setDestination(21632U);
    msg.setDestinationEntity(28U);
    msg.formation_name.assign("TZJRGQUEIBVCNR");
    msg.reference_frame = 50U;
    msg.custom.assign("FZKBTSJJPCKUHFEDCHLNSHPEYGNFCOMHMJDFSKABUCTNKWOSPKQRLXXCVTOOSBEGYFGKWPHNASYUTGMVFVJEOQKVAIJDRGWXXHIYLDNPWKAVILTCBHBYDWVXGKEPMAINXEBQNZQGUURLZVCSORYQXRVNRJAUGIUPYMONQLMXDODVJPGH");

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
    msg.setTimeStamp(0.4518119764209395);
    msg.setSource(40787U);
    msg.setSourceEntity(95U);
    msg.setDestination(18308U);
    msg.setDestinationEntity(123U);
    msg.formation_name.assign("QVLNDQSXRCJFYXWHMGXMBYJSGTKDMPPICFEBARSSXUQULFWAKHJDSIMBPOQEPJXIQBYDSOYCJBLUHOLJDUVKZZNUZLTXPYHLTAUOIPNZRWTVVCBQGNGALKPVWKKXYYAFGMBJYLSWEFOZDZPANUEIWZEHUBKMTYTAHRKZLRGNZNVVVFOCXEXTCIKZRMRVONOJEADSWSFHVQWNHIMWTIMPUQRIQFBGAHSKEYDGWADPXDQIGCFERM");
    msg.reference_frame = 125U;
    msg.custom.assign("VCGPZPUYJUMSWMTBYCEYTBEHXZWNRNJQCEWXMBXYDFZHSS");

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
    msg.setTimeStamp(0.6744762009716339);
    msg.setSource(51310U);
    msg.setSourceEntity(73U);
    msg.setDestination(65163U);
    msg.setDestinationEntity(165U);
    msg.group_name.assign("ZSVHDOQBXOZAXCGKEBUHMUGUTYTVMRQSYGKXNRMMPNOCDJTMNUQXPFYMPZEDNVPIAJYWCDROTNEMPTWNCEOAWMGBQQFAKPSZGGVEHOSRFNITYBELRALFSWKCVIEGQHIGXIGUMTBJXYHVBVRJPGJAOCYXBJHFSZFRVIR");
    msg.formation_name.assign("RAMXABPVDCLZVPPYPTLCESQGACYTSGSDIGXVGMMTZAUYAFBVDNANYPQDBFFICGZJPUUCPBIIYVMOWSJXIUZGSWMZEXORXCSLBRFHOWOJKTUDCGRYTSMFFJNNIRWKUUGUSJNJQDJLOYQNWDZBOEHAEDPHJTHRGRTVTXZQKPKOSHBXXHMIOOLZKVENLLEVPYAIIHSMFLQJZZTQ");
    msg.plan_id.assign("UDPJLNESDYJTSBPVVHPUQJKAYHJCXTNLREPAGVDHOVEOGKFTUNTBHNRMISZPIFSKVMBMWYHBCFMNIMJUNYSBRQWSHDXWZJRENFHXFNDOHSEDQAADOKISGEJYQQETKUMIRWKGIBWYMQFPOQQUOIJKLZRB");
    msg.description.assign("ECHOUYDLSZXCMQJBVPIRTYCFPWKNUNCNMEECWIIWOLAGBOFHVJAERKVPTMKGTZZBYFWTKOQS");
    msg.leader_speed = 0.19893216064281904;
    msg.leader_bank_lim = 0.6739557470104436;
    msg.pos_sim_err_lim = 0.9265353100663327;
    msg.pos_sim_err_wrn = 0.7929846207305596;
    msg.pos_sim_err_timeout = 57436U;
    msg.converg_max = 0.24682316661784343;
    msg.converg_timeout = 51061U;
    msg.comms_timeout = 48992U;
    msg.turb_lim = 0.31858963885151315;
    msg.custom.assign("NHLOARZEXKTYCBDDXNOQKAHZDVPABQHSKLWWVRWBUZCKEEMQNIUKSXBEZZVQPNZEHJGTPKFNDDMIJEPYBKFCMIJWVUGSNUFTKV");

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
    msg.setTimeStamp(0.1345318264844929);
    msg.setSource(54704U);
    msg.setSourceEntity(123U);
    msg.setDestination(35385U);
    msg.setDestinationEntity(51U);
    msg.group_name.assign("QYANUUPDGUJLOAYUWCFKZYLHZCOHZOWRIIPPREHMJWKQRDLSGGEVXMIZBKUKLTFZQWNNBXYQWWHKEKRLSMLTORPTTOBUFHCZRJMCCMRMPEFUVRTFCNJSHQDHVAJPBXBCENJJGRAGGRYEHOVLKXUOKQSSHVOBYIINSDGJTFVAPVSNNB");
    msg.formation_name.assign("JNPIITDZDFPSLLZWFQCPNPOARCABMOMKJXAKRLXHJUA");
    msg.plan_id.assign("NTPILJUASSVUZEYJJEGQLYXMQMUVXWORIDJPTDNRFRJONAEDBNWBMVCKAPBBBRFDZWVOPBCRAAXTOHKHWNHGZTWGSMNJEQYEYD");
    msg.description.assign("TLIDSNVJAGXQXDQHZKOIUJWZTOMWIDVMBPBYLLQOEQXJINPGRSNHFDSDPYXZFORUZJFHSDETKYUQZYCNJMYEOIIXNTWGPEUGYALWYHMKJVFSVDRKFMPCJIFLWCBRBXMRYUAGGPTWAOAJLSOQUAZQVUTNHFTCYBWCJSZGQACNEKVZHGKCDXNVCLPBAIHVBTKXOBPZKQWUDAMSMHVRRTWHFMCHVXPMGLPFLOSKACEWGKBE");
    msg.leader_speed = 0.8735530214770294;
    msg.leader_bank_lim = 0.2248524093513914;
    msg.pos_sim_err_lim = 0.14351765960857354;
    msg.pos_sim_err_wrn = 0.6668831003497431;
    msg.pos_sim_err_timeout = 42852U;
    msg.converg_max = 0.33005809827967103;
    msg.converg_timeout = 13186U;
    msg.comms_timeout = 39312U;
    msg.turb_lim = 0.4082908441186214;
    msg.custom.assign("WFMUBFQNHOJMJGZOBIGFJWGZKBOFSXEYYZZVZYIIERIFRWOUTPSSNKLBFRCYBQXEHDBCRHFTSVISSNECNANPWSMKHWKCEKUGHAGKJKZQYYUCWCJDVVPMXRUZEW");

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
    msg.setTimeStamp(0.41807865347230755);
    msg.setSource(58185U);
    msg.setSourceEntity(95U);
    msg.setDestination(31617U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("YHPFJFIRQIVMCNFKGMNWCNAHASMKSTTTFGEGDBNPXTESHYUICDGKXPUIDTHBVRQAIZLXJKCDAFHVCLUIMFTWPGPZJJCQXAAGQPQOQBZPBEOSMKKYSGRQLVGSHYAIPEEFVMR");
    msg.formation_name.assign("PWGFNHNETAXKHFMZQDMXLIUMMVGOPPUOHIQGVOMLMAPLWGIBGSZOQRFDJRXOFCAQFGNTCJBWKCWCQHJQKWSLZBRSLOTCJLSQTDMUESKXRDUHEIIOLZDPRMBAFYYHCTSTVAACPYOVXNZQJGTHSUVPORHPPRBKNDKCITQUZWYISYFNBWOYIMWALTRXGKCBZAXFDKMEJVBNRVNWVLDZ");
    msg.plan_id.assign("JZYLIPLDCUFSJQZQLXFAYOEWCGMSIETWAARPZAQJHVKMFTVKWCN");
    msg.description.assign("KZUBPYRHOAAKZSBKERLKTTUVSGHDWDTJMQPDSHAQVGJWXOWNSGRAISCNQJDGVQMRWTXDZNSVZOXFUCOYLQYFZNKERJFTXVSFWNUGGAXWVETXXJEZEIFNWHELIAMLHOTQCLPOLSLBNHUIYWPCCQIHDYVBIFCEQZGGHKGUIJCSURCBHEZKPYWYVMPXHZDMDUBMSJJFOCAPIYADKTLDRJIVZIFCOB");
    msg.leader_speed = 0.48013361716722425;
    msg.leader_bank_lim = 0.33156247816197326;
    msg.pos_sim_err_lim = 0.8907082047820724;
    msg.pos_sim_err_wrn = 0.5659729326412196;
    msg.pos_sim_err_timeout = 19877U;
    msg.converg_max = 0.2654764881485918;
    msg.converg_timeout = 63917U;
    msg.comms_timeout = 35118U;
    msg.turb_lim = 0.5248324077040719;
    msg.custom.assign("WLXNBDFRGQWSHOYFQVQGBLKVPRAQHLQUIPDUTEGUDPJFSVCATVTMPYDXXBXPONWITSDOVAQKHFMZLCJZSGXPQ");

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
    msg.setTimeStamp(0.9314535065892499);
    msg.setSource(55980U);
    msg.setSourceEntity(191U);
    msg.setDestination(36613U);
    msg.setDestinationEntity(2U);
    msg.control_src = 44713U;
    msg.control_ent = 67U;
    msg.timeout = 0.7843979900594851;
    msg.loiter_radius = 0.8980232535067691;
    msg.altitude_interval = 0.6342992106996903;

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
    msg.setTimeStamp(0.851108820923436);
    msg.setSource(1303U);
    msg.setSourceEntity(208U);
    msg.setDestination(8565U);
    msg.setDestinationEntity(210U);
    msg.control_src = 7046U;
    msg.control_ent = 206U;
    msg.timeout = 0.27086568273952194;
    msg.loiter_radius = 0.6742158200815674;
    msg.altitude_interval = 0.6014332121138128;

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
    msg.setTimeStamp(0.14540770006168235);
    msg.setSource(52119U);
    msg.setSourceEntity(137U);
    msg.setDestination(31214U);
    msg.setDestinationEntity(106U);
    msg.control_src = 31278U;
    msg.control_ent = 142U;
    msg.timeout = 0.4180326148356037;
    msg.loiter_radius = 0.42802940827464964;
    msg.altitude_interval = 0.5557410099274643;

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
    msg.setTimeStamp(0.8614989689448019);
    msg.setSource(2809U);
    msg.setSourceEntity(89U);
    msg.setDestination(61805U);
    msg.setDestinationEntity(209U);
    msg.flags = 0U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.049637925073331535;
    tmp_msg_0.speed_units = 203U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.38488283184476213;
    tmp_msg_1.z_units = 146U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9873634590882601;
    msg.lon = 0.847642992866059;
    msg.radius = 0.21281248134184716;

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
    msg.setTimeStamp(0.9389836837154562);
    msg.setSource(50788U);
    msg.setSourceEntity(12U);
    msg.setDestination(62981U);
    msg.setDestinationEntity(131U);
    msg.flags = 87U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5376312731857982;
    tmp_msg_0.speed_units = 196U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.29075580843023696;
    tmp_msg_1.z_units = 56U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2499052715011728;
    msg.lon = 0.7441017529251559;
    msg.radius = 0.5302622690992238;

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
    msg.setTimeStamp(0.2742382797297157);
    msg.setSource(55172U);
    msg.setSourceEntity(103U);
    msg.setDestination(26281U);
    msg.setDestinationEntity(205U);
    msg.flags = 63U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6027202147676154;
    tmp_msg_0.speed_units = 100U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8642061375451632;
    tmp_msg_1.z_units = 72U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.10158809286061432;
    msg.lon = 0.056330569787562235;
    msg.radius = 0.7624927960393212;

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
    msg.setTimeStamp(0.2031735911024749);
    msg.setSource(24526U);
    msg.setSourceEntity(88U);
    msg.setDestination(32993U);
    msg.setDestinationEntity(177U);
    msg.control_src = 56983U;
    msg.control_ent = 194U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 131U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7775500318837512;
    tmp_tmp_msg_0_0.speed_units = 200U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7324004930093947;
    tmp_tmp_msg_0_1.z_units = 2U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8415843258644289;
    tmp_msg_0.lon = 0.3987339602137564;
    tmp_msg_0.radius = 0.37093360261302;
    msg.reference.set(tmp_msg_0);
    msg.state = 154U;
    msg.proximity = 235U;

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
    msg.setTimeStamp(0.29693186797672655);
    msg.setSource(63984U);
    msg.setSourceEntity(21U);
    msg.setDestination(163U);
    msg.setDestinationEntity(11U);
    msg.control_src = 44170U;
    msg.control_ent = 203U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 147U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4565793391301227;
    tmp_tmp_msg_0_0.speed_units = 33U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2107216368498176;
    tmp_tmp_msg_0_1.z_units = 245U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.34796284595391047;
    tmp_msg_0.lon = 0.9472218424609017;
    tmp_msg_0.radius = 0.10938335929100462;
    msg.reference.set(tmp_msg_0);
    msg.state = 73U;
    msg.proximity = 151U;

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
    msg.setTimeStamp(0.3063415108212042);
    msg.setSource(33910U);
    msg.setSourceEntity(175U);
    msg.setDestination(20409U);
    msg.setDestinationEntity(16U);
    msg.control_src = 57778U;
    msg.control_ent = 104U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 177U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2152131298516048;
    tmp_tmp_msg_0_0.speed_units = 91U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6552763987291739;
    tmp_tmp_msg_0_1.z_units = 50U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.26918433178082923;
    tmp_msg_0.lon = 0.701408399729796;
    tmp_msg_0.radius = 0.42756657395325337;
    msg.reference.set(tmp_msg_0);
    msg.state = 181U;
    msg.proximity = 244U;

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
    msg.setTimeStamp(0.8741879662250405);
    msg.setSource(37457U);
    msg.setSourceEntity(241U);
    msg.setDestination(2028U);
    msg.setDestinationEntity(243U);
    msg.ax_cmd = 0.35228989452476156;
    msg.ay_cmd = 0.4939628202498241;
    msg.az_cmd = 0.48709239535622795;
    msg.ax_des = 0.8694822111147648;
    msg.ay_des = 0.4993090436489497;
    msg.az_des = 0.3332827060868536;
    msg.virt_err_x = 0.9912394093826639;
    msg.virt_err_y = 0.4225263236027692;
    msg.virt_err_z = 0.6726049961218125;
    msg.surf_fdbk_x = 0.6344823822399781;
    msg.surf_fdbk_y = 0.7943461213941901;
    msg.surf_fdbk_z = 0.7646582836459017;
    msg.surf_unkn_x = 0.3103180670767727;
    msg.surf_unkn_y = 0.7619231218134317;
    msg.surf_unkn_z = 0.264425176439234;
    msg.ss_x = 0.5342973292611364;
    msg.ss_y = 0.1762897753026459;
    msg.ss_z = 0.9553434258426909;

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
    msg.setTimeStamp(0.9946059827554714);
    msg.setSource(52340U);
    msg.setSourceEntity(180U);
    msg.setDestination(50203U);
    msg.setDestinationEntity(150U);
    msg.ax_cmd = 0.4938220683680805;
    msg.ay_cmd = 0.19422773016228156;
    msg.az_cmd = 0.9471250554043091;
    msg.ax_des = 0.10873273183142917;
    msg.ay_des = 0.03303967432880395;
    msg.az_des = 0.6634030851491272;
    msg.virt_err_x = 0.6005255367913175;
    msg.virt_err_y = 0.08840756289488205;
    msg.virt_err_z = 0.4634667988380399;
    msg.surf_fdbk_x = 0.21301609656868525;
    msg.surf_fdbk_y = 0.4757317333587493;
    msg.surf_fdbk_z = 0.5598538626215737;
    msg.surf_unkn_x = 0.44018494037351674;
    msg.surf_unkn_y = 0.6205879222339206;
    msg.surf_unkn_z = 0.5773020852370431;
    msg.ss_x = 0.7998942659715939;
    msg.ss_y = 0.43828951704777974;
    msg.ss_z = 0.673028276921921;

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
    msg.setTimeStamp(0.48874638853860686);
    msg.setSource(2332U);
    msg.setSourceEntity(213U);
    msg.setDestination(44171U);
    msg.setDestinationEntity(183U);
    msg.ax_cmd = 0.015610254033240012;
    msg.ay_cmd = 0.1800675759840049;
    msg.az_cmd = 0.2854511713450707;
    msg.ax_des = 0.755747637289083;
    msg.ay_des = 0.6440158195744075;
    msg.az_des = 0.4987872200851604;
    msg.virt_err_x = 0.25891657298519843;
    msg.virt_err_y = 0.2268499947700876;
    msg.virt_err_z = 0.9172740397179948;
    msg.surf_fdbk_x = 0.8563482546242938;
    msg.surf_fdbk_y = 0.5037778479367158;
    msg.surf_fdbk_z = 0.04934829712850597;
    msg.surf_unkn_x = 0.845725691575723;
    msg.surf_unkn_y = 0.6748588838298408;
    msg.surf_unkn_z = 0.030713656629052566;
    msg.ss_x = 0.6466624632808115;
    msg.ss_y = 0.1749700772025694;
    msg.ss_z = 0.2742023205381723;

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
    msg.setTimeStamp(0.24903742265101736);
    msg.setSource(25031U);
    msg.setSourceEntity(69U);
    msg.setDestination(56151U);
    msg.setDestinationEntity(85U);
    msg.s_id.assign("XYBISXWUATHNYCNPZTWQRTHWBNYTDZICLMTUYCYVHQEXLLAHETIFCIJKKAKQFDZUBKOZZWXNVJVXVJDDGIBYNIFMXZNHLRBAYRDVGRKMSLKWJMUWGWPOKUGHMODPRDJAMXOZAABUELSCONFGEMBIFWPZTVIELOFSQSDTOSIMBPJOFGKUVSAEYCZEOYSORXFQPEMCLVKVJNBSKWXGPCMGEVJSINHFDRRPQDCPAW");
    msg.dist = 0.21826420963316484;
    msg.err = 0.5950842948364973;
    msg.ctrl_imp = 0.32329090106675273;
    msg.rel_dir_x = 0.06777765779814537;
    msg.rel_dir_y = 0.01537179066030181;
    msg.rel_dir_z = 0.6008610818846178;
    msg.err_x = 0.09001014385965289;
    msg.err_y = 0.17162304198306932;
    msg.err_z = 0.607675216989427;
    msg.rf_err_x = 0.9458420107291645;
    msg.rf_err_y = 0.7562175350815937;
    msg.rf_err_z = 0.7826092539733823;
    msg.rf_err_vx = 0.6394652565946823;
    msg.rf_err_vy = 0.8586096201762456;
    msg.rf_err_vz = 0.46033707969192583;
    msg.ss_x = 0.8820935087823863;
    msg.ss_y = 0.5438610065569154;
    msg.ss_z = 0.06368919291269448;
    msg.virt_err_x = 0.17016397981507525;
    msg.virt_err_y = 0.21817760974896394;
    msg.virt_err_z = 0.4710264652587074;

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
    msg.setTimeStamp(0.19910205263391945);
    msg.setSource(62108U);
    msg.setSourceEntity(71U);
    msg.setDestination(11216U);
    msg.setDestinationEntity(145U);
    msg.s_id.assign("OEIYMCNKICFAEMXONDMZJHHNOFJQJHUCPHXVTYALHWTGGGQDYJCULAZEYJMYLGLEQGI");
    msg.dist = 0.2834030251337155;
    msg.err = 0.2693206755595249;
    msg.ctrl_imp = 0.6177256483598762;
    msg.rel_dir_x = 0.09450464705573991;
    msg.rel_dir_y = 0.6722988717557532;
    msg.rel_dir_z = 0.8016272312485703;
    msg.err_x = 0.4692557466101681;
    msg.err_y = 0.8255657237357664;
    msg.err_z = 0.2831235063331591;
    msg.rf_err_x = 0.5588192228035201;
    msg.rf_err_y = 0.24715022064353664;
    msg.rf_err_z = 0.599367573502052;
    msg.rf_err_vx = 0.4254583013837847;
    msg.rf_err_vy = 0.6484247190261879;
    msg.rf_err_vz = 0.9924878978726532;
    msg.ss_x = 0.11495533018619175;
    msg.ss_y = 0.9531274292562414;
    msg.ss_z = 0.7191006910538106;
    msg.virt_err_x = 0.9724775970214938;
    msg.virt_err_y = 0.9580267667831752;
    msg.virt_err_z = 0.3239982520201906;

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
    msg.setTimeStamp(0.5101146728605823);
    msg.setSource(45536U);
    msg.setSourceEntity(16U);
    msg.setDestination(29249U);
    msg.setDestinationEntity(160U);
    msg.s_id.assign("GLLOZFCWJYCOTOQIMPMPUSAGOXSXKGSFBCVPMBHQIXAFYGPHNHZVBRFFKUKPEWMAFVXOVKSJXCQWJDWEPDZCUVHPBUFNIJUDIALQISEXALQGWNBWLJTFIIJYOBBPNKUXTKCHTYNGZTYMYGMVVZR");
    msg.dist = 0.4727516090937818;
    msg.err = 0.8665133592146175;
    msg.ctrl_imp = 0.7727760919463563;
    msg.rel_dir_x = 0.53943894652446;
    msg.rel_dir_y = 0.06602744060622279;
    msg.rel_dir_z = 0.7160721081352672;
    msg.err_x = 0.27384382078072167;
    msg.err_y = 0.20459259319708922;
    msg.err_z = 0.362949743012398;
    msg.rf_err_x = 0.9573474029391568;
    msg.rf_err_y = 0.3247685778495728;
    msg.rf_err_z = 0.20182799710753407;
    msg.rf_err_vx = 0.12412485278290208;
    msg.rf_err_vy = 0.6387270325400748;
    msg.rf_err_vz = 0.3553069382279126;
    msg.ss_x = 0.9694210233396148;
    msg.ss_y = 0.6006636951835217;
    msg.ss_z = 0.6153139517784754;
    msg.virt_err_x = 0.17539684250521592;
    msg.virt_err_y = 0.9668294093351404;
    msg.virt_err_z = 0.5541150490196108;

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
    msg.setTimeStamp(0.3732217393283159);
    msg.setSource(25416U);
    msg.setSourceEntity(183U);
    msg.setDestination(42308U);
    msg.setDestinationEntity(170U);
    msg.timeout = 39509U;
    msg.rpm = 0.4828766506531239;
    msg.direction = 159U;
    msg.custom.assign("IDLGMXKHPOPGLQGKYBWLENAKZYMGDJTORFBYNZWIAPXIIMWHVXUFLWNAPEGLCJKHHIRKKUXCDYARVWHUSOQSVZCICKLPYOLLCMSFVOOANTPRRWEGQXZJFVUKWZJRFVFQTLAJSMRTOMMBDBEZVNJCKQYXGNQEPOLOUNEXHRDCTSVTUFJFDBCTRXSHXCZUUJGIQCDWSVDIBOTMYPFGTZYEHSUZMYADSYQPBUXGQPHSV");

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
    msg.setTimeStamp(0.964291234226652);
    msg.setSource(4265U);
    msg.setSourceEntity(171U);
    msg.setDestination(23861U);
    msg.setDestinationEntity(71U);
    msg.timeout = 14589U;
    msg.rpm = 0.5510717839313252;
    msg.direction = 2U;
    msg.custom.assign("JWHGCCBRRDLOPHDIXIKLIBNAIHURGOG");

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
    msg.setTimeStamp(0.6612021033385803);
    msg.setSource(59457U);
    msg.setSourceEntity(124U);
    msg.setDestination(37138U);
    msg.setDestinationEntity(63U);
    msg.timeout = 30674U;
    msg.rpm = 0.33396700864011586;
    msg.direction = 132U;
    msg.custom.assign("TELEWIZISWULDUASIXTKFMKPWHXVZWYBJZSGKBMJJASBDOJOLMKPIQHWZFXLAZZQLWDWSAGVTTOEGDPNFVXIAGBGOUSXFLIDUBVLUXAPRMMHBXRUQWUSRPDPOCFCARDRSYPN");

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
    msg.setTimeStamp(0.9675895689959214);
    msg.setSource(32942U);
    msg.setSourceEntity(120U);
    msg.setDestination(13283U);
    msg.setDestinationEntity(230U);
    msg.formation_name.assign("PUFWHJUYWUEAXKTRGBBJRMSUAFMMVBXBHAYXRDNSKOPEUJKPCBYYZAVGLGIFROTHQKGUNQUCNZAJWWVTLLPXHSKWEXVYHJRUEYDDIAXNXNQCHBQWVVKZNSQK");
    msg.type = 170U;
    msg.op = 7U;
    msg.group_name.assign("RBWPRHJMXBJMEGOWAIAGVXZZFJXGBCHPDAEFKLALUKCZWJIQKGYDZKHNQKCEFETJAXJFJBISZRIOSBHDTONWNYQGRFOPSVEHTTIOMLUVCBVYSIEGZLDTMLBMTLCVXPOOZZLPAPWDUWPGFKNLDVDJUNULRMPTFBMAINIWRHYQLMYUDXXCXARTSYYTIVQWAGQ");
    msg.plan_id.assign("MKFUBDYCVLNMEFYRPZZGVULITRWVGIXXAANHYELJMQVOBTAPHVSCOONGXEYKAKNWMLJTQCJLCQDAHXVYTRBZKWLGWLPBSWKIISOKVAZSUXQUROPMJNCUICMLRXQIONDOTFJGZJFZTAQHRZPHRUMRYBIVQCZFF");
    msg.description.assign("UYLWUMFRYVNUTMRNBCXQAVWMGJESKVGTZUKZDRWWECNDFZCMAGTRDQCPYHREKCIBFRFZLLHBOKUDTTTWTNACVUNGPYIGENHMOFAQKJPAENSUPKBNOSPBXJFOMQJUCDVXZMJQVCUGDKYLZEIQIZYVYZIXAISVWQNLOJSJHTLYRWDSOHHZWXHQR");
    msg.reference_frame = 53U;
    msg.leader_bank_lim = 0.8965126552657943;
    msg.leader_speed_min = 0.48640287644065194;
    msg.leader_speed_max = 0.4311599949851732;
    msg.leader_alt_min = 0.4583143712775751;
    msg.leader_alt_max = 0.3383270646397196;
    msg.pos_sim_err_lim = 0.6054366733879084;
    msg.pos_sim_err_wrn = 0.19243696555470347;
    msg.pos_sim_err_timeout = 2871U;
    msg.converg_max = 0.8295291676513377;
    msg.converg_timeout = 30394U;
    msg.comms_timeout = 22947U;
    msg.turb_lim = 0.4198295483796438;
    msg.custom.assign("LZFBNGNCJLVMQVQDFXKOSKBMBRISNUZXQQXEFUQKJY");

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
    msg.setTimeStamp(0.04797480517627739);
    msg.setSource(62854U);
    msg.setSourceEntity(15U);
    msg.setDestination(9727U);
    msg.setDestinationEntity(1U);
    msg.formation_name.assign("XUQCYMXZWTJKCMONFNEPWXPNLWVUMIAMGWOORZJVMLKBKSBFQGRWCDIBRXPPJYYWJHEDDFVKLFTBRLJYOKGERAJEVSHGSABGBTZXDHJSVOSQTTJKWTAYSEUZGNIGQSOHUFOVGITAIMDDMINQEBTKPTOHFBGDUZCQUZFWNVIRHLPCNZLUAQHAUCCBRBDACRFYHRPJQZEYKYLYZ");
    msg.type = 181U;
    msg.op = 200U;
    msg.group_name.assign("YFELNGCAMVTOAODIZBERDFXXQVRQVTKDPZJZBOUPOXWHXKAFPS");
    msg.plan_id.assign("BNCGDNDWIHJOQYPIIMTMGFCQOWBLACPZVJGLPXIFU");
    msg.description.assign("CXOQIMMCJIKDBCAZVVUDUZFTZNMYRTNUJTJFFXOEQQWWDLZRYLNUKFCEARDGOBFZUDNXVOAOWSJZQGXLOPIAWWKSHGCLSBHELYLP");
    msg.reference_frame = 143U;
    msg.leader_bank_lim = 0.6270001702852853;
    msg.leader_speed_min = 0.34464621435405773;
    msg.leader_speed_max = 0.24924470391867293;
    msg.leader_alt_min = 0.7682783290819712;
    msg.leader_alt_max = 0.7775439479570788;
    msg.pos_sim_err_lim = 0.6343129685386493;
    msg.pos_sim_err_wrn = 0.4609923080963282;
    msg.pos_sim_err_timeout = 53101U;
    msg.converg_max = 0.0061582591079499815;
    msg.converg_timeout = 37521U;
    msg.comms_timeout = 4006U;
    msg.turb_lim = 0.5811280922635637;
    msg.custom.assign("PGBWIZUJNDLPXQNICXJZUUKKWSIGPJLWFYZQJYCYAOBGRMSDBJXUKHBJSAASTLLUYAWEZNDTTKDZGIMXSWXTGEGBIRZXPC");

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
    msg.setTimeStamp(0.9323703448788239);
    msg.setSource(29103U);
    msg.setSourceEntity(64U);
    msg.setDestination(61823U);
    msg.setDestinationEntity(36U);
    msg.formation_name.assign("JKKZCTRCTGGJVAEWDQRPOOFEVHJTGQHJLUXRBSFGGPOSWCNAHRKFGOWMWVNCXLQZUQQNLWZZBGMWGLZUIUHTXVALHPEZOJKUDKJWDNWMBSNJKSAUKVNYLTZKHD");
    msg.type = 207U;
    msg.op = 109U;
    msg.group_name.assign("ORLFYUUDQNIUUVXQPUSPFPTXNOLNZQPSSDASTFHKAOMDJLIPBIQTSXFJXAYHPMWGVFTAMPKTFJESXVLBBLYKKLMTZWZWCEDINERZESSCRHAKZWNMCJJLNNJHMFZRQVJGKCDCYFVBJZSDKWIWQNQCYGMAGIAOXZEBDNOLRUHIGOOXJYUEHSRUVYEEIOBIBHLIRHNVXWVCVKHTRBVKQRYGAACDTMLTPEUFWRDGZCWBJDMKMXGH");
    msg.plan_id.assign("PSZBMYJFIYLUGWLIPNKYNJRTGXBAPYUQKOXIURLZBBGXOQROSQPHIVZHCUEWNZNRNSKWGCBLTGJLAHOXGCZXVALSGFLLJLMNOFJCJUXREFWCPAYHBQCXMFOPTPDWYDHBEMLSHGZKQMBUHKHTRJIHVVDYDTADHISWSQYWCJPVDMOUATIEQIEJBOCROFEVPDTEBRDUNVXZMXQVEMNDMWRPCSVFAXCQQZNFWDYKVROSFAUAAESKTTGIK");
    msg.description.assign("WKLYMDQRFKNFPYREXXZZJDNSDGDIQVEAKTRVQLNTBNUFLPOYQCQKJEVIGIFPTTFMSIBZHXVHJTAKGLAUMSVRUQWRODYEPIOPYMOEPZEXYSBCDDBMANWHATCAIFOKAMWHLTVWOCHJVUUGQHGERSEUZGNXLBTWKAYIWCWHZNZGNGMQWNPDPUZMRRKOCJXISEDJEDOYVXBICLOBCOLKFGXAUSHLJRMSWZTFFQKYJBJBAXVZVJHHUBMINPYPG");
    msg.reference_frame = 205U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 41132U;
    tmp_msg_0.off_x = 0.4667296411425489;
    tmp_msg_0.off_y = 0.16250417108293702;
    tmp_msg_0.off_z = 0.9989293619332588;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.4654387575259854;
    msg.leader_speed_min = 0.40593304696240895;
    msg.leader_speed_max = 0.42732882148294093;
    msg.leader_alt_min = 0.5924477537295221;
    msg.leader_alt_max = 0.4549307461385841;
    msg.pos_sim_err_lim = 0.13901999692965794;
    msg.pos_sim_err_wrn = 0.8571341882266917;
    msg.pos_sim_err_timeout = 2105U;
    msg.converg_max = 0.9200479478908032;
    msg.converg_timeout = 17340U;
    msg.comms_timeout = 5643U;
    msg.turb_lim = 0.07132308992314951;
    msg.custom.assign("JZCTNGYVIYLPWKDWBCIQODROAUKSFBTYAEVNJNXHDXODXKRUEOLDXGBYFYQQPJLSZNMTBHKQTJWUODMGGGITEXGIHRXZLHCMZKHBOOJDQFZZIUBKLOQBESUAHPFXDPJIMTCEIQATUIUCRZWPNVFGKTOMAMESWHEPRAUGYMTDQMPBLMESRFQSHFNRXWJWFRPULJAHWNYBFNVCMASGFLY");

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
    msg.setTimeStamp(0.46722994161929077);
    msg.setSource(30235U);
    msg.setSourceEntity(162U);
    msg.setDestination(48999U);
    msg.setDestinationEntity(87U);
    msg.timeout = 59124U;
    msg.lat = 0.7296824064740882;
    msg.lon = 0.8676709047994129;
    msg.z = 0.7387172420246113;
    msg.z_units = 228U;
    msg.speed = 0.8646913324393954;
    msg.speed_units = 234U;
    msg.custom.assign("VENCKLMOJOJISUKCCYRRRMHQOTLXMRPTXBVJGGRNAFSSJVEEHXWWZPLELCLYGDLFTIGRWQHJECSWDABCNEFAYQPKQHQZIBNFPVIWGZBGIFUHHZSJKEBSEQDZJUEKYTDKBCZGMFGZLSUXABENMDPTUNRRA");

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
    msg.setTimeStamp(0.3484507499326073);
    msg.setSource(40325U);
    msg.setSourceEntity(156U);
    msg.setDestination(13069U);
    msg.setDestinationEntity(136U);
    msg.timeout = 10334U;
    msg.lat = 0.43209912109047766;
    msg.lon = 0.6428539975500538;
    msg.z = 0.9696061513576408;
    msg.z_units = 54U;
    msg.speed = 0.14770610443679455;
    msg.speed_units = 95U;
    msg.custom.assign("ILEJWDGKELXVMIVROUWWSEXCDAQKOQOGSHJWAFUNLLTKRIONURGDTMYPMVCGYZWLXHGEYAHBECVAFZPQXMFWDBLZAILTGREJNIILZIVZDRQBFYCQNQXTPINGVTPKOJZKSYVEWQQSPFDBKDMAPCHMJSJIGORUEN");

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
    msg.setTimeStamp(0.4135739673553901);
    msg.setSource(37507U);
    msg.setSourceEntity(124U);
    msg.setDestination(11508U);
    msg.setDestinationEntity(237U);
    msg.timeout = 52650U;
    msg.lat = 0.22893158482168285;
    msg.lon = 0.595922879628371;
    msg.z = 0.9767890238406918;
    msg.z_units = 137U;
    msg.speed = 0.3855121112116757;
    msg.speed_units = 7U;
    msg.custom.assign("RQGQXMRQVSOLQWAUROBTYVDJYXMXQNGQPHHDZUEBPFSMKSOIEA");

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
    msg.setTimeStamp(0.7895371121133026);
    msg.setSource(53413U);
    msg.setSourceEntity(177U);
    msg.setDestination(2228U);
    msg.setDestinationEntity(254U);
    msg.timeout = 49756U;
    msg.lat = 0.8283761184219061;
    msg.lon = 0.8020826521680947;
    msg.z = 0.6778015295742459;
    msg.z_units = 178U;
    msg.speed = 0.8167068556328877;
    msg.speed_units = 33U;
    msg.custom.assign("RFRRNIJKPBYADCWALYNPQKFMVXTMAWEONEQBPUSXKQXDURZYOIRQRGTUFOEALNMBTXZASYIXWFXEDZICEIKNBMHKULIOMGKSQMDROHWYNPJFBVJOVCPJQPCTVYSZQXZUHKOHRDHBKWQLDDFACYEHCLYSNXGGJZQYBMLTGVCRWUYASVGJPWDEOUTUHWBBTDISCEHNTIWUGMZPNQNUGLTXMLL");

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
    msg.setTimeStamp(0.16846381330768145);
    msg.setSource(14292U);
    msg.setSourceEntity(98U);
    msg.setDestination(36110U);
    msg.setDestinationEntity(31U);
    msg.timeout = 52575U;
    msg.lat = 0.831705804900322;
    msg.lon = 0.4388638819471794;
    msg.z = 0.7931054643817155;
    msg.z_units = 170U;
    msg.speed = 0.6507171108451311;
    msg.speed_units = 99U;
    msg.custom.assign("JCQHBPJPHUUXFSXWPUVCRDDKLXYCOKYKILMWINFJW");

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
    msg.setTimeStamp(0.702027509227221);
    msg.setSource(31145U);
    msg.setSourceEntity(65U);
    msg.setDestination(49496U);
    msg.setDestinationEntity(156U);
    msg.timeout = 52826U;
    msg.lat = 0.9622987648465914;
    msg.lon = 0.8721273814089615;
    msg.z = 0.7002314346329614;
    msg.z_units = 7U;
    msg.speed = 0.4393164796736656;
    msg.speed_units = 209U;
    msg.custom.assign("SRYRMATYRXLDJZKAZNMZUTFPEMEJXICLYSRGXUGZAUOVXCSAWPBLDTCTKIXIUPRBEBUWLKWGGJLFDFEJSNHHLWPMISZMLXCDOOCWRPSEHFNQJQZXDQOUUNIEEXRIBJRHXVHJZGVTFHISPWHDDFLKQYWPAANVVJAIFMSQBRABFTWYJCKOOQWNESYBMQLTRZKHHAGKYVVDBQOKANQHYDGXCBYMUST");

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
    msg.setTimeStamp(0.24682523982561133);
    msg.setSource(30040U);
    msg.setSourceEntity(171U);
    msg.setDestination(21701U);
    msg.setDestinationEntity(64U);
    msg.arrival_time = 0.13246409891914257;
    msg.lat = 0.12339452675265539;
    msg.lon = 0.7974359501507815;
    msg.z = 0.6363013536189617;
    msg.z_units = 225U;
    msg.travel_z = 0.0016587177508066153;
    msg.travel_z_units = 99U;
    msg.delayed = 71U;

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
    msg.setTimeStamp(0.0993976277603027);
    msg.setSource(51637U);
    msg.setSourceEntity(19U);
    msg.setDestination(25296U);
    msg.setDestinationEntity(233U);
    msg.arrival_time = 0.3563538145713223;
    msg.lat = 0.7610140589594891;
    msg.lon = 0.8094167954606065;
    msg.z = 0.3369429901518244;
    msg.z_units = 168U;
    msg.travel_z = 0.3153843427486558;
    msg.travel_z_units = 62U;
    msg.delayed = 158U;

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
    msg.setTimeStamp(0.2353170808336732);
    msg.setSource(2005U);
    msg.setSourceEntity(227U);
    msg.setDestination(33935U);
    msg.setDestinationEntity(8U);
    msg.arrival_time = 0.23456874512953396;
    msg.lat = 0.3629800631955086;
    msg.lon = 0.6681461916382061;
    msg.z = 0.26560531636700924;
    msg.z_units = 66U;
    msg.travel_z = 0.9487802223134968;
    msg.travel_z_units = 182U;
    msg.delayed = 215U;

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
    msg.setTimeStamp(0.7748212101809001);
    msg.setSource(4164U);
    msg.setSourceEntity(136U);
    msg.setDestination(64055U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.628265013586225;
    msg.lon = 0.9422956920239951;
    msg.z = 0.21739841771361912;
    msg.z_units = 111U;
    msg.speed = 0.08944271674196469;
    msg.speed_units = 231U;
    msg.bearing = 0.9867376853326537;
    msg.cross_angle = 0.987549770678151;
    msg.width = 0.3755458212033581;
    msg.length = 0.9778941288740216;
    msg.coff = 214U;
    msg.angaperture = 0.6109035868004913;
    msg.range = 54031U;
    msg.overlap = 239U;
    msg.flags = 203U;
    msg.custom.assign("EQBYITQNYTKZ");

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
    msg.setTimeStamp(0.26027734873972663);
    msg.setSource(6947U);
    msg.setSourceEntity(189U);
    msg.setDestination(26163U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.666498280728839;
    msg.lon = 0.9658801543614223;
    msg.z = 0.16814919769441172;
    msg.z_units = 81U;
    msg.speed = 0.46945244983260315;
    msg.speed_units = 104U;
    msg.bearing = 0.5858305279018058;
    msg.cross_angle = 0.4023603447303118;
    msg.width = 0.05700408191988082;
    msg.length = 0.526793018023125;
    msg.coff = 212U;
    msg.angaperture = 0.12449080110941757;
    msg.range = 21502U;
    msg.overlap = 164U;
    msg.flags = 184U;
    msg.custom.assign("BHBWTMHHJAPKNPGCCEQJEBZTKTGA");

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
    msg.setTimeStamp(0.22431649754869187);
    msg.setSource(55758U);
    msg.setSourceEntity(169U);
    msg.setDestination(14707U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.6509799564469274;
    msg.lon = 0.1778380768474097;
    msg.z = 0.9021254668353601;
    msg.z_units = 109U;
    msg.speed = 0.614583601320798;
    msg.speed_units = 191U;
    msg.bearing = 0.1060439354220516;
    msg.cross_angle = 0.8558161325305892;
    msg.width = 0.13184218733557485;
    msg.length = 0.7443005887900228;
    msg.coff = 222U;
    msg.angaperture = 0.6522937540631745;
    msg.range = 54963U;
    msg.overlap = 186U;
    msg.flags = 52U;
    msg.custom.assign("KZCQOJVJJUYGCFYVXINLGLLJIRVSRTGEHDUVCXEWRO");

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
    msg.setTimeStamp(0.7921528095109225);
    msg.setSource(48633U);
    msg.setSourceEntity(162U);
    msg.setDestination(43117U);
    msg.setDestinationEntity(74U);
    msg.timeout = 28217U;
    msg.lat = 0.8203093895152977;
    msg.lon = 0.681534670047576;
    msg.z = 0.7469747836450669;
    msg.z_units = 146U;
    msg.speed = 0.7294281297797213;
    msg.speed_units = 235U;
    msg.syringe0 = 164U;
    msg.syringe1 = 160U;
    msg.syringe2 = 215U;
    msg.custom.assign("KVDFVUVHVDTJUYMUJTD");

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
    msg.setTimeStamp(0.5935610469627364);
    msg.setSource(56662U);
    msg.setSourceEntity(59U);
    msg.setDestination(9564U);
    msg.setDestinationEntity(104U);
    msg.timeout = 36947U;
    msg.lat = 0.47381873548810494;
    msg.lon = 0.42264006789891795;
    msg.z = 0.8882274581163204;
    msg.z_units = 180U;
    msg.speed = 0.4757767303206082;
    msg.speed_units = 45U;
    msg.syringe0 = 76U;
    msg.syringe1 = 247U;
    msg.syringe2 = 56U;
    msg.custom.assign("AYNBSMWBZJOHOKVELIATIVFCKBFJKQOLHRKCVMCQSRESPNJCNUGQHWAFSHRNTSZBQMGWAGEOMHWURXWHDDOYFGMFXBONVBAZIAYPEPFYXZWTJYFDYZZSLLXCVQXBCRSSNTKYQPXVIPGALHGUHHBOPZHYFXPQXUDJLRTICGJIUIKYCURUDPECFKQKKQTMREJSDTEYXMNBOXDWUZPSTIDDJMLREIANEWLGTKZAOMVDLRPTVWMJEQUVVB");

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
    msg.setTimeStamp(0.7457347318038279);
    msg.setSource(18897U);
    msg.setSourceEntity(229U);
    msg.setDestination(26842U);
    msg.setDestinationEntity(96U);
    msg.timeout = 23861U;
    msg.lat = 0.2114884969587052;
    msg.lon = 0.17108938642851357;
    msg.z = 0.6654050217780458;
    msg.z_units = 232U;
    msg.speed = 0.04425849605660359;
    msg.speed_units = 125U;
    msg.syringe0 = 92U;
    msg.syringe1 = 93U;
    msg.syringe2 = 167U;
    msg.custom.assign("QUQFWZLVGGXWMORVBYXOKGJPHNERILPXTTYCQSFLGGKURWCQPUTLSNJPAMIPORSNZOQUPJJXTLCNTKMNJMZFRLKSDHCAMSOQKIWAXTBPHBEXTPBEOAYBYASWVHNALWWUJFQGKZRMZMENUDDZUNIEVYXCUCWYMDSQSJDWCFCOICBKGBVJZDYDPHYHXOYFFNTAVOSIGRUSMDGDVIQZIHFQA");

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
    msg.setTimeStamp(0.09086970409407802);
    msg.setSource(8292U);
    msg.setSourceEntity(22U);
    msg.setDestination(16337U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.34569170882032174);
    msg.setSource(19217U);
    msg.setSourceEntity(246U);
    msg.setDestination(24809U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.8301960546793636);
    msg.setSource(17730U);
    msg.setSourceEntity(207U);
    msg.setDestination(31058U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.07805236391869808);
    msg.setSource(43380U);
    msg.setSourceEntity(36U);
    msg.setDestination(19877U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.6955543216554543;
    msg.lon = 0.9215192137619339;
    msg.z = 0.8177621706151608;
    msg.z_units = 77U;
    msg.speed = 0.6283657003456178;
    msg.speed_units = 121U;
    msg.takeoff_pitch = 0.1563498337057586;
    msg.custom.assign("IVSLYWTOEYMFNPLJMUMYXGAAJZZOASHOEFQRCDQKKONSFHXWRMUQMLLYQXOVHKAQ");

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
    msg.setTimeStamp(0.038235753843155584);
    msg.setSource(47814U);
    msg.setSourceEntity(109U);
    msg.setDestination(27536U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.5796033311739749;
    msg.lon = 0.969466654147562;
    msg.z = 0.7518109005607754;
    msg.z_units = 213U;
    msg.speed = 0.5764809282485195;
    msg.speed_units = 185U;
    msg.takeoff_pitch = 0.3502934354657168;
    msg.custom.assign("ENPIDJLLGTDVSIPQWRTPNAMGCYACGOZXXAUAVJYRQCEYNWYPYPKXWCYMOKTMIYEUQVCIEZITNLZYLFCOOLSGAZDTRHGKTTBPSWOSVBRWXIUQVQMSMREZLQCFKKNTHMRJDEVFHTNJAESNMGKVOZBQQRXPUAZWHVFFWGZSJNKJWMWOVSRAPBJUKXDGIMRABUSXDEUJYTGBIHHRMFIQKOLXXH");

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
    msg.setTimeStamp(0.553159202922995);
    msg.setSource(27916U);
    msg.setSourceEntity(75U);
    msg.setDestination(59005U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.6777750946060382;
    msg.lon = 0.7582914487665022;
    msg.z = 0.5525685747838608;
    msg.z_units = 0U;
    msg.speed = 0.0016971807783473514;
    msg.speed_units = 251U;
    msg.takeoff_pitch = 0.3162397346690947;
    msg.custom.assign("YHEVBXONUVTQIRDITGZCLYKXAZKIBFKPEUZOHSZIMSJLCAOIMGVDWSTBMKJCSNRHOMQFFVDWUDFGQTOANJUVRFDREFCZXXEIATXQRUBRLQNLTWJALXDTMHBSTURVUZIKEWOCAGOFRPEYICWEMOPPUPHBGWAAOMDVYLZRKLNKBWEKEVXDPMYQZKGJWJETBDIYPQIANHYZLNWDFSSSJBFSGLNBYCNUAWXQCOC");

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
    msg.setTimeStamp(0.7521038130576994);
    msg.setSource(38891U);
    msg.setSourceEntity(88U);
    msg.setDestination(64612U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.20641787166436154;
    msg.lon = 0.821744180876671;
    msg.z = 0.47882430554060684;
    msg.z_units = 135U;
    msg.speed = 0.762115406275761;
    msg.speed_units = 220U;
    msg.abort_z = 0.798179707213701;
    msg.bearing = 0.21911501113003928;
    msg.glide_slope = 159U;
    msg.glide_slope_alt = 0.07086942944365737;
    msg.custom.assign("MFLIYRGXVFPIXVHZMGCTZFQCOSEUJT");

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
    msg.setTimeStamp(0.27759078688019434);
    msg.setSource(22789U);
    msg.setSourceEntity(46U);
    msg.setDestination(21651U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.5555170841336594;
    msg.lon = 0.38352812140515546;
    msg.z = 0.23022599048828252;
    msg.z_units = 10U;
    msg.speed = 0.984466736339749;
    msg.speed_units = 175U;
    msg.abort_z = 0.4124029629490542;
    msg.bearing = 0.7653934416871554;
    msg.glide_slope = 199U;
    msg.glide_slope_alt = 0.7871612652899658;
    msg.custom.assign("NPZMIGKGPJBMXBCLAITFTOBLLJLCHDJYDJREUBZYOHPNVBOEFTYOXDUDJJJQLIEVTSWXFUXYQBNQGNDAHD");

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
    msg.setTimeStamp(0.12176673635864743);
    msg.setSource(31662U);
    msg.setSourceEntity(197U);
    msg.setDestination(37563U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.9228795108731671;
    msg.lon = 0.9533387784704433;
    msg.z = 0.1661146967713124;
    msg.z_units = 196U;
    msg.speed = 0.9003158187711034;
    msg.speed_units = 254U;
    msg.abort_z = 0.6842749101549238;
    msg.bearing = 0.2706990777151993;
    msg.glide_slope = 28U;
    msg.glide_slope_alt = 0.8064952648341831;
    msg.custom.assign("HSERCPWNXWXLFCNFRDUCGLQTDEAJMNAKGKDKXJUXBGXOIFQYVPVB");

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
    msg.setTimeStamp(0.9385761364751088);
    msg.setSource(62743U);
    msg.setSourceEntity(207U);
    msg.setDestination(56611U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.9035477110239362;
    msg.lon = 0.06092728753568799;
    msg.speed = 0.11907577480952913;
    msg.speed_units = 36U;
    msg.limits = 110U;
    msg.max_depth = 0.31374271914546104;
    msg.min_alt = 0.018702297720093464;
    msg.time_limit = 0.02387817629748945;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5414417171984846;
    tmp_msg_0.lon = 0.9223526307373624;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("KWJYDYAQJMQLWPKJOGPGRHZOXXPTBEUEHDTIFYBSVAZUGZVNPIPAIMOMYWNAOIOLWBOWHRTZDAKXSNGCLHADGULKNVBALVBCUALHXFGRIYHIJXXKSOMHJRZJJNQXYUTMHWFWSHASKTUSIFXZGRHGDLNYUSPQZRIPDERCEJINJVMXTPNCMUAXUTRWRI");
    msg.custom.assign("UBTHEFMNXUNYCGSPDICBJLBIOGILGKKLHXHDCKFBPPUCACXOXKRUTREANZRQTWAKEHUITQARZBIZPTLERUDLAAVVLVTHDDIAYYDFSAFQSONMOGUVWXZGNJMSIMMFWKDWDJWJVPEYLVHNXHYRATSAVRZYLGISPJRPNCISNOQWGPXSJBMETTSFGBFBRXUFXYKJMCOWCHBZZYVKZOBQWWGXGPEPJSLOTM");

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
    msg.setTimeStamp(0.05385528737887557);
    msg.setSource(15317U);
    msg.setSourceEntity(25U);
    msg.setDestination(57018U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.4315022038714298;
    msg.lon = 0.48460501676660006;
    msg.speed = 0.9814907300235588;
    msg.speed_units = 16U;
    msg.limits = 209U;
    msg.max_depth = 0.4042313569106589;
    msg.min_alt = 0.8906926106229553;
    msg.time_limit = 0.25548305987589537;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.06726377749331036;
    tmp_msg_0.lon = 0.647602766850426;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("FEYXIYKWVKISCDSTMXPULBFCUTAMNINNODJVNXUPLGBBGJCFVHYSBJVIWNLQPKTMZPHDQWMYFHTZ");
    msg.custom.assign("LBOMMNTIWZUKPLNXVUIGPQUKEHRIHXWXKOYZGDCKEUVCAPEMHWSGITCOROKTTXGHPKMLAABQQHNXYJFGBSUSHWDWBHRIYSMMIILCLLRSVVOLVXDAZAACWGLYQBDAFPSVNJJMSPAZIUTVFHIDYYKETGNAKFFRZDVCGHBYFENPKZUZCSNJYXGUFYXJODEV");

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
    msg.setTimeStamp(0.3517138585437847);
    msg.setSource(38707U);
    msg.setSourceEntity(177U);
    msg.setDestination(61972U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.0731619513581594;
    msg.lon = 0.9095810647985253;
    msg.speed = 0.30613595172737595;
    msg.speed_units = 193U;
    msg.limits = 107U;
    msg.max_depth = 0.059326671016720955;
    msg.min_alt = 0.15267648911488618;
    msg.time_limit = 0.48084817436035077;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7389155954271026;
    tmp_msg_0.lon = 0.4197576842383901;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("WKYUCYPBXHXMNBDPSRINYWCCOQFFZOODNMEEBIABRFGXIJDEKYEDVWDHJKWDZNTUOUFABCJTJRZNGRTTOJXJOLABQTRVMVMJCHQHOPKQDGLAPRSYFUUHYQSEJHKCNMGZPWQDTWNTXAZ");
    msg.custom.assign("BULKVKPNKRXURMCBGLJSIQZTVRWNNHHABEYUUZFVUWDYRZSCIODMJPJYTYRXTCSGHONLSTQZFTMNWFXONQEOFVVMGDZULWATPEBTSAQWYAIPXYLZGDQOWJIXJRACNVXPBCPSRQONMWJHILYQGBDJAYVMQICUPJJFDTBMEOCQIHEBJZMFQSRTDEVFVZCGGIXUFWDGENLPHSOXYAEOPNMKEKXHWGCKDKHCLGUKAMUKSKWAOBHABVLLIRFEYFZD");

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
    msg.setTimeStamp(0.7887768218143311);
    msg.setSource(28287U);
    msg.setSourceEntity(232U);
    msg.setDestination(23536U);
    msg.setDestinationEntity(144U);
    msg.target.assign("LCFBXBEAOXLPCONWIAVEUTCZAJCHHENEBTMQRYWDYGZRZDDALWVTEMPYNJWAQSGTOUVXKGZFVYJEJFUVPEENQUHDVDSHFSSBXYPXLDRKUJDDWKIRMVNTDIJRNQYPCRURUPINMTGQJJURHKMQGSFHKZMOXPKMWFZAMQNFKHWBXZSOBKBXVPONZCLMWZGHZVUAOIIOBYQYLWASCDIVWHBYBTFGAEXGJHTMSTPSCLOILGLFXUCYTQJCRKILRSF");
    msg.max_speed = 0.8598258817468265;
    msg.speed_units = 164U;
    msg.lat = 0.9584572720337848;
    msg.lon = 0.9353381192071868;
    msg.z = 0.6275259786034761;
    msg.z_units = 27U;
    msg.custom.assign("YGSHRPNSDKFGCLVQRKVZATWHEIUCQRHXJFUMTJEPCJKEJJTTHDVROTMOZWPEODYLOCRCCTXUMDFVDBQGXHJYJLEPENYOSVGEILCCGGNIQTLIXBMZAZBHDXELNLMPYKBIBRUYUMWVNTZWAONGGPYXMB");

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
    msg.setTimeStamp(0.8636583430601811);
    msg.setSource(2243U);
    msg.setSourceEntity(67U);
    msg.setDestination(3925U);
    msg.setDestinationEntity(247U);
    msg.target.assign("OYVCSBKCZEPRPETFUWZYWACQHQHYQIQTWJJKLHIMYJNTGDCUSRUBNAXJIBULQGYOTWJKBHONXMSFNLAIUABFPRKDVTMMHYFYIRZJDJSOIYDMIWVRLSEKWGOPQXIQSZHGOEJPKZUOAPPSEYRTNRDTVDLAMEUABUKZVAKDSJLFXNVZWBHVEBEPSFQGDMHUKCGPGCGUXFDKDQFOCSJPFAILLGOVCEYCHRZXOZBWXWMRWNTVTHXNF");
    msg.max_speed = 0.9926105880193778;
    msg.speed_units = 128U;
    msg.lat = 0.4406809039225177;
    msg.lon = 0.616745427233505;
    msg.z = 0.2815225672042354;
    msg.z_units = 244U;
    msg.custom.assign("ZVZOXANTVJCQIKANABFNPPXIXVPGMKAYDRVMOOEISNLZCRVQUERQBIGYCIUAPLYWFQWEUFGVBGSDFNZSWJITPMKKWDNKBMSNRYMQOJTGUBAVBKX");

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
    msg.setTimeStamp(0.8452079804629673);
    msg.setSource(49439U);
    msg.setSourceEntity(4U);
    msg.setDestination(53801U);
    msg.setDestinationEntity(73U);
    msg.target.assign("IKEIUHXHIXRHXPYSANWZRULAQNRCPYSHAGFRZFXJTUWGHITGEAKELKRIMZHBVDACDMJTUOBOGWZLQQJRCVJHYJVXOIZIOFBWFYFBINYHZFDWMAGWZUZYNQNGOCIQBPBVZMWLQZBWXAIN");
    msg.max_speed = 0.19501204509281167;
    msg.speed_units = 54U;
    msg.lat = 0.31533469448140294;
    msg.lon = 0.8572519876203298;
    msg.z = 0.9600841511314745;
    msg.z_units = 244U;
    msg.custom.assign("HUMIUANABWJHLXVDPVINZTGJJNSRJSYBENHEHZMJVOCBQQUELEIQYXZUIPZTWOXGJTPLAYBQFIYDVOLCBYZLFKZWCXPHRPNSEORRMUSRLMGCENDADTGUBGMFITOTYWFWKTVWVEIDDFMKKGXFBYSGHPORXZYAXQVUMMWRUXCNPJXNTWGJMWKTZSOQAHKFYEIOONVFPLDCXB");

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
    msg.setTimeStamp(0.8718502352162583);
    msg.setSource(55528U);
    msg.setSourceEntity(122U);
    msg.setDestination(51490U);
    msg.setDestinationEntity(149U);
    msg.timeout = 38604U;
    msg.lat = 0.07352862103333246;
    msg.lon = 0.770431776304618;
    msg.speed = 0.2596124219144247;
    msg.speed_units = 200U;
    msg.custom.assign("MUAELFXYKBJSUTECVOQCCJICKJFLGEEOOQTOUQTYSAQWJOYCVSUPKTETZYTVXJBNRSVNOKMDWEWLKAMWFWDROVIRPSHGJIDWVZBYDJBBHPEWWHFWNFQPNLZKCIHRZZSMQASAHRUWVPAMHXASESZCKLIMLCYVKTQRHQNHLCXIFJUZGZTIZDXBGEYXUMMJUNC");

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
    msg.setTimeStamp(0.8650488623350161);
    msg.setSource(8816U);
    msg.setSourceEntity(201U);
    msg.setDestination(62345U);
    msg.setDestinationEntity(110U);
    msg.timeout = 5383U;
    msg.lat = 0.20059986315592526;
    msg.lon = 0.22506663446587172;
    msg.speed = 0.8474478287753523;
    msg.speed_units = 26U;
    msg.custom.assign("ZJLIUYOQAFEUHBNRXBKKRVYMMZOHIHENDQQSKKVJPFLSVDDTZLNOHAYQOXMTWCUTDPGSSPWUBHJEZWDGODCNMMKOZTJKSFWUUIFZNCTUHTUXQENXCLAWYRIGPAKAKIORIIFQXQTZMZQXCAPVIXD");

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
    msg.setTimeStamp(0.20691362177317663);
    msg.setSource(3998U);
    msg.setSourceEntity(88U);
    msg.setDestination(61859U);
    msg.setDestinationEntity(98U);
    msg.timeout = 31721U;
    msg.lat = 0.8598929061964574;
    msg.lon = 0.4799173009891644;
    msg.speed = 0.6559162200131339;
    msg.speed_units = 155U;
    msg.custom.assign("HLBRUSYYROMXHDFVSVOUADDGJAMUQYDWIEBZLAGQZUTIKRMYFYTAKNMKUKWVTOIXHXHZKQTBOIJJCHYEPWIRJJRCSGCBNLPQKLCZMFCMRZBGVPXPZBEJFNGYHXWKOOKTWDYTDXWNNSHEFVNCOSBOMQEMZEIHVRQFMRFUNXNAISPFZAVOHKWPCCGEWEVLMOHBNSLJWBCJLPAGYYQJRISGPUGNTTKCERJTXVIDXWLXLATFIFUUADBQUDPAS");

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
    msg.setTimeStamp(0.2972329865394676);
    msg.setSource(4072U);
    msg.setSourceEntity(234U);
    msg.setDestination(28542U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.11731946780723335;
    msg.lon = 0.39770582493149986;
    msg.z = 0.24227769948547684;
    msg.z_units = 128U;
    msg.radius = 0.759213596389713;
    msg.duration = 25810U;
    msg.speed = 0.5191685061351716;
    msg.speed_units = 214U;
    msg.popup_period = 26705U;
    msg.popup_duration = 60276U;
    msg.flags = 115U;
    msg.custom.assign("JQRBVXNTPJHCMZPPGBJFWDHQQGKOHEFMYJRZCFFZRWBAUZJDWMMKXLFFQRTYAYZCJVNWKPJEUMKTHCNWXBXSIJMGOATDUIICHIYAFNAKDXLCGABTFROZTZRKRMLCRHLYGWNYIQPELTWVO");

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
    msg.setTimeStamp(0.3439843268682906);
    msg.setSource(3262U);
    msg.setSourceEntity(19U);
    msg.setDestination(48613U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.0720374958492509;
    msg.lon = 0.16525720395208032;
    msg.z = 0.6156926169971632;
    msg.z_units = 43U;
    msg.radius = 0.8007422724914725;
    msg.duration = 50452U;
    msg.speed = 0.10802309998166193;
    msg.speed_units = 128U;
    msg.popup_period = 9828U;
    msg.popup_duration = 42670U;
    msg.flags = 116U;
    msg.custom.assign("QLOZDPRXXTBUEHSHJYQQMEQNAEPVNAWSGSJKVGURQJWYAQSVKCYKIAPQHDATUTLFJSJPFQVZRZWNBMOHBIMFKDLPDFCGMJHKTROFJYXMEWXBUGVOUNRYFKITJVBWATCEZMDYZNOTGSSLIMHDFUIBGBTLEXFOEBOYIZYJULRUGLPYREMQLIMPXXSCKCNLHTWJEPQCWHHNKV");

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
    msg.setTimeStamp(0.7194208454505475);
    msg.setSource(47279U);
    msg.setSourceEntity(170U);
    msg.setDestination(60444U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.10835131647325646;
    msg.lon = 0.2351755243973429;
    msg.z = 0.4785127667732033;
    msg.z_units = 171U;
    msg.radius = 0.12235411624891335;
    msg.duration = 27931U;
    msg.speed = 0.3315694586292952;
    msg.speed_units = 54U;
    msg.popup_period = 12618U;
    msg.popup_duration = 6519U;
    msg.flags = 232U;
    msg.custom.assign("PXKWCYGSDBWOZJXXDGTARDMLQBKCTREJQTOZLXHLPYRFTCZCMXHCWERJYLAQDIEGRHAZXVRYPAWUPIULMGOOTJKKSXLKRBYYWGMADPHUIHFVTPMGUNFQBHXKONJIINDZTSPIRNOASNWVNQVTBBZQDVCCBSOEKMJSGHMACYDXNQKQFHEFMDYEBXIJHBHTTMJNSZCGPPARYLZFOKUQSIWURUFSEWLPGFVWFINFYOZSMEDALVEZKVANVOGUU");

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
    msg.setTimeStamp(0.5009170553620891);
    msg.setSource(41172U);
    msg.setSourceEntity(65U);
    msg.setDestination(9220U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.3287287547025416);
    msg.setSource(54834U);
    msg.setSourceEntity(218U);
    msg.setDestination(56432U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.44495084054613476);
    msg.setSource(34151U);
    msg.setSourceEntity(239U);
    msg.setDestination(5559U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.7151966551985488);
    msg.setSource(50244U);
    msg.setSourceEntity(95U);
    msg.setDestination(12307U);
    msg.setDestinationEntity(201U);
    msg.timeout = 6611U;
    msg.lat = 0.49533052944485534;
    msg.lon = 0.9372464986836676;
    msg.z = 0.043383685627843116;
    msg.z_units = 101U;
    msg.speed = 0.7904760230343254;
    msg.speed_units = 249U;
    msg.bearing = 0.6712688591777338;
    msg.width = 0.28765756310742485;
    msg.direction = 203U;
    msg.custom.assign("MPNKHPOHXAEEVWNRFWSGIPLEQCLNLJUCQCHAJURVNOVBJAOSEYFPCQKNIPYGTNWDBTHCNIIZUYQJFUGMBJIXCDFSUHSMWGAPYCOSKOMLMAXWTCJFKNMVEZQUMIPDXRCQVURHXCOYXTARGBODKGWXFMFDGZORELFLWAZWBYHIYIGFVSJUKKUVDZNDQBLORTFGJIAZUWLQTGSRB");

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
    msg.setTimeStamp(0.30112489806689624);
    msg.setSource(29028U);
    msg.setSourceEntity(89U);
    msg.setDestination(23970U);
    msg.setDestinationEntity(108U);
    msg.timeout = 28721U;
    msg.lat = 0.5118730532710454;
    msg.lon = 0.540986860200917;
    msg.z = 0.9327440292058865;
    msg.z_units = 16U;
    msg.speed = 0.14906221056017677;
    msg.speed_units = 236U;
    msg.bearing = 0.8360375528429023;
    msg.width = 0.48036748494470494;
    msg.direction = 100U;
    msg.custom.assign("BLVOUZLMQGYBWZSVIRARXEHWUPHPDBLRITQQSZYJIGSSDVXSQVPCUKDYJGLFPAHIWCUCVZKMRNBXXSPUJZWQHT");

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
    msg.setTimeStamp(0.7609550054122199);
    msg.setSource(7645U);
    msg.setSourceEntity(11U);
    msg.setDestination(53584U);
    msg.setDestinationEntity(165U);
    msg.timeout = 45627U;
    msg.lat = 0.18932621391771454;
    msg.lon = 0.25787605447033635;
    msg.z = 0.00998117382885344;
    msg.z_units = 91U;
    msg.speed = 0.03925458337028731;
    msg.speed_units = 24U;
    msg.bearing = 0.6617951711365868;
    msg.width = 0.9147353894257885;
    msg.direction = 31U;
    msg.custom.assign("TZCLIMBXAAQYNHKOAENGEDOJFJGUDLL");

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
    msg.setTimeStamp(0.7336941983319054);
    msg.setSource(30868U);
    msg.setSourceEntity(207U);
    msg.setDestination(44903U);
    msg.setDestinationEntity(87U);
    msg.op_mode = 137U;
    msg.error_count = 220U;
    msg.error_ents.assign("EHVFKRTTBJKCSJOYTJMAEXRBBKDIMRXNVXUSCDDPHOBXGCGH");
    msg.maneuver_type = 48618U;
    msg.maneuver_stime = 0.4813940079257546;
    msg.maneuver_eta = 11914U;
    msg.control_loops = 4084659373U;
    msg.flags = 75U;
    msg.last_error.assign("PBXUMHKTRAWCTISBULXEFXKGHGVZCYAPWDFWONTAYHITJSGQYCIDFSKKVPADYNVMLJVXMQXQMUOGQESMJTDRPHUJTAKCGEBXKWLWSJPLBDPILIORPIZHJLWXXQVVNEYLDEAMIRDRCRMAWZJHRHKPNOUEUWFYMQGSOSKFFITNTJ");
    msg.last_error_time = 0.02098980585490573;

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
    msg.setTimeStamp(0.9080456546966998);
    msg.setSource(25686U);
    msg.setSourceEntity(115U);
    msg.setDestination(65195U);
    msg.setDestinationEntity(76U);
    msg.op_mode = 187U;
    msg.error_count = 113U;
    msg.error_ents.assign("JMHKYMQQFFBTXNLQZNDSKWKCNYFEHVJQPMOECRHUVEIIVIFRDWTTEIWRUZBWZSGFIPPBLSTOGDLIZUZMGHATAJKHEXOQAHWUUYUJAKAIZAQMDPFODNBGGYMHOVNSVXBETSQNJYXKCUBIQVWCLOOQMYPDXJHKTFCWNUEZOJRS");
    msg.maneuver_type = 52337U;
    msg.maneuver_stime = 0.8293639416398686;
    msg.maneuver_eta = 1822U;
    msg.control_loops = 1645998419U;
    msg.flags = 139U;
    msg.last_error.assign("USKVIUHTCDYNREKXSEJAZGJYYCTXFXKTSIRAJIDRQMQLLFPVFXOMLBWQXPZDFXBBUNVHSDBPSELOAAGWIKCBVCDUNCGCOUSJSUYGTRATGKMHGMOGVIDQLUMVF");
    msg.last_error_time = 0.7237934788934902;

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
    msg.setTimeStamp(0.467245417110283);
    msg.setSource(13465U);
    msg.setSourceEntity(232U);
    msg.setDestination(2591U);
    msg.setDestinationEntity(180U);
    msg.op_mode = 188U;
    msg.error_count = 76U;
    msg.error_ents.assign("YIJRIEHSFCSNAQBTLBEQUYSEHCKBCMKAUFOZKOCTUAAQUKHECEJHT");
    msg.maneuver_type = 8431U;
    msg.maneuver_stime = 0.10022280582350052;
    msg.maneuver_eta = 5576U;
    msg.control_loops = 1738311335U;
    msg.flags = 201U;
    msg.last_error.assign("MKXPKVQWWDOFIMUUWICUMBAQWSXBTUXACBSMPRAHADLGKQSBHRAHXZQNFQSZLPHDSJCRPMZSERZZOFCYCBNEWMVYDPTELSVKUGWCLYJRTVORKKVDLVXJDTPG");
    msg.last_error_time = 0.27161926340938247;

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
    msg.setTimeStamp(0.21660486915999144);
    msg.setSource(22587U);
    msg.setSourceEntity(231U);
    msg.setDestination(49893U);
    msg.setDestinationEntity(32U);
    msg.type = 123U;
    msg.request_id = 39829U;
    msg.command = 34U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 63800U;
    tmp_msg_0.lat = 0.16794122253754118;
    tmp_msg_0.lon = 0.1966979674231577;
    tmp_msg_0.z = 0.16509054691549885;
    tmp_msg_0.z_units = 24U;
    tmp_msg_0.speed = 0.31766289390134694;
    tmp_msg_0.speed_units = 21U;
    tmp_msg_0.duration = 64561U;
    tmp_msg_0.radius = 0.6246785731667583;
    tmp_msg_0.flags = 108U;
    tmp_msg_0.custom.assign("LZZIBJVAPIQGUOURVJIW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 63621U;
    msg.info.assign("JASBBHUINFPMQHKCBHXESWYCJKTXIXMBHEIWWDOXRESKXJOVCORIBXRPNYDOAMNAWUQFYKCSZBMHMLGQYVUSPMVODQVIGLUZGMZ");

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
    msg.setTimeStamp(0.8443914702692931);
    msg.setSource(42174U);
    msg.setSourceEntity(211U);
    msg.setDestination(20226U);
    msg.setDestinationEntity(51U);
    msg.type = 19U;
    msg.request_id = 37711U;
    msg.command = 133U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.714402474637447;
    tmp_msg_0.lon = 0.7048628429976586;
    tmp_msg_0.z = 0.6753825577551504;
    tmp_msg_0.z_units = 117U;
    tmp_msg_0.speed = 0.9142358319235528;
    tmp_msg_0.speed_units = 91U;
    tmp_msg_0.takeoff_pitch = 0.5844994788300202;
    tmp_msg_0.custom.assign("UCFNMLOYYKVBUENQMHLHDUCBWHVQMTZXESKOEUYLLTSVJDZEOXVZOLXQYADRJMFIXRDCROYCALOBANQGDTICZGPBIAEOXQDMJGFULTRXDBKBRZHAYKMEBQFJVFJYKSGQVWGNCZTRRQTYYWAFN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62075U;
    msg.info.assign("OGUWEZWVLSUAIURQVRXZSERSKYZPCHXZSLQILOGQSBUPGJXZICPHMVYFMKWYGFFLOCQIBLHWRWYMZFMHQZDYRPXYAUFCVSLFDEOOATVYUTNCJAFOPRIPIQPDDJWBVFXKNCKXHAWGRPMCBQAENATNSGVPRHZLOOEUSWMUSJYXEGNJKVHABMKMJINGTOJGLKDPZTCWHXNDXCYQHBBFKLYDRAVUUEEXJTQODKAHZNE");

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
    msg.setTimeStamp(0.737439885468044);
    msg.setSource(33416U);
    msg.setSourceEntity(144U);
    msg.setDestination(10738U);
    msg.setDestinationEntity(85U);
    msg.type = 200U;
    msg.request_id = 47134U;
    msg.command = 204U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.8430558150572786;
    tmp_msg_0.lon = 0.8729499132659824;
    tmp_msg_0.z = 0.04739060778417681;
    tmp_msg_0.z_units = 79U;
    tmp_msg_0.speed = 0.8682343395541634;
    tmp_msg_0.speed_units = 7U;
    tmp_msg_0.takeoff_pitch = 0.195011900038632;
    tmp_msg_0.custom.assign("VAPVONZFOBOLQXFOOBFAGTNBTJJGSYIBWKJUCXDQHANTAPPQYOYNHLESRYGXNIVZBSMWWKHGWMAIXUNMOJQAQRPHVRAXIDZIIILMUVELZBEPJUOPKCEWYWBDWHHZUSYBDQAUPIGMEQKCNDZRVGFMXKRSFXWTEELCILGXUXCEHFFGLRCVLHZBUFSYRN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58890U;
    msg.info.assign("KNJZHFZHWRTLOBZINTTXTEKPDFERHWZUMWAOVPFESXTJJMTBVOIWVNPPVQIJHRDOAMKOLBZEUIZSBRPUHKEX");

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
    msg.setTimeStamp(0.02887044749764711);
    msg.setSource(27850U);
    msg.setSourceEntity(56U);
    msg.setDestination(65504U);
    msg.setDestinationEntity(168U);
    msg.command = 184U;
    msg.entities.assign("QGOAJFELDJYAIBGHHPGKRBMDHRVZNBXXGYPYCJRIAUWMDPSSZIXMECHTXTTEWKZQQXKOUTUITWDJGAZLDPSCUQWWWNZVAWKEHRMZFCVTAZHFFFBVECUYPILEXVOFUKTRHJJEJHCRBOBRTBLPINRCXKMGFOULHQMBLNLAYMZNYKQQWRFGTOAZ");

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
    msg.setTimeStamp(0.4954095914616303);
    msg.setSource(9291U);
    msg.setSourceEntity(247U);
    msg.setDestination(59919U);
    msg.setDestinationEntity(209U);
    msg.command = 128U;
    msg.entities.assign("JDDBSJLIRLYYNURHSKYVCONJLRYSRTMXHASGXYFUMFOSHRFNNSKDZTGQBMJKJGUEUTWPDQVHKIPTZWMRUFWFMIMJCEJDZLPJYPEZMZDHXJKASQOLKIENCFBHDPVUQQLDZFPNQSFTAARYCVLQXXOEMPSLBVORHYUXWOHMICPAEBOZYKUCVKIVANTWHDQUNSBZAUCZPAQXBIOOIGIZRQWVCECFVEGELCWRGKVPXHJTGMGIGTKBWLX");

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
    msg.setTimeStamp(0.11049318540331399);
    msg.setSource(616U);
    msg.setSourceEntity(93U);
    msg.setDestination(15154U);
    msg.setDestinationEntity(252U);
    msg.command = 17U;
    msg.entities.assign("ZBAPTXYHTAEYGFITDINESBOBOQXIAUMJNELWDHRNKPLNOZKZXUJMPLREUTHPTOWDJYJVGETEKFDMVPJKITCFCMOWMREGXGOCQTUZRCBVKNZGVFUPEYFDZMBZBHJIIKCBMVSUXZAFBWDLRCJCHEAQSHRRCGFZQYJSPLXNWMZNWGSSODPHIBULIYUCYJK");

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
    msg.setTimeStamp(0.8802077299468771);
    msg.setSource(51565U);
    msg.setSourceEntity(109U);
    msg.setDestination(14413U);
    msg.setDestinationEntity(190U);
    msg.mcount = 92U;
    msg.mnames.assign("FCBFPHIENKFGNVKXYZNOWGTFKFPDOFCRZROACRYAGGQZPOOBVDKETDXJBDBSRGOOJSQCYCYUCNQZMOQAMELQHUSVUDGRUQVEAHZKLHKXXUCUDAJTGFSNWNLSDVDFCSGTLVXJWDGRZEBPPBLFPBPVXMISQ");
    msg.ecount = 138U;
    msg.enames.assign("FTBQHDRTRQFEVJFCBIQSFURIJVTDCWMVYVQRDSKPWSK");
    msg.ccount = 232U;
    msg.cnames.assign("SYTSNUVXZXZMHXBWHLMRINGMMWBFZNEKHINLRANJLUYPGTYRXPDUWDZDCOKNVHYQZXWBJSCLAQLWGVDMOJJFGRHGZLVXQCDLFQSASPHMJKIFTTNSAHMYCLIIOEZTNOPWZDEEUOQRCEBAFTJXXCHCBMJVBIBZHUEJQRUFKCPYVJQMOHKUVGEUBOLDKWYX");
    msg.last_error.assign("EBBNNIWBCDNVYP");
    msg.last_error_time = 0.6294231553092106;

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
    msg.setTimeStamp(0.5337554586267365);
    msg.setSource(62220U);
    msg.setSourceEntity(199U);
    msg.setDestination(7107U);
    msg.setDestinationEntity(48U);
    msg.mcount = 241U;
    msg.mnames.assign("POOBXNQHUZDORUOZHLGPEWCQIDVBXYCLKJETTJZVNZSYZTGTXMZNVQVPULWIUITUDEPYKFCEKXGGRHBGNKLRJXJUMRMIYCNAPYMYDHOGFIHHEASVAPJCAKSYDWDWUXPLCNBHQWHCKOZLRQVCDJROBIWIRGLUPAXHMGLAMWDNEYQVBKMWPNOQNLLFJATMDSABYMTEJKQJQSRKXPYTIGZRVSISCXMESETHWF");
    msg.ecount = 199U;
    msg.enames.assign("NROGQXZVZCHSXDOMAVEMTXUACJDLLREKMEBBOSSPGSQUCBAVUCCOZFRYYWRIRWWJBJRRINPHGKQVWAUEIEIWKODFJGFCWIQDKNBLJPNXYMLTGQFCFWAXAVZGSZYJDDBTTYQH");
    msg.ccount = 117U;
    msg.cnames.assign("JGEARMJHGCSLBYARSGYDPJRHDGTPFMYTIQYUNLIMKIFXVVVMESLLVQGAMKQQPMEDZMBSZJMBDPCAQBNUTULFGIPIXUVTYCKXUWBFNCZPDYAOKENWADQTJNFZRNXJTHOCEBVHLMQSRQCFMRBBEDUQOWFHHPTWWFLICBYGKPRXHJKEGRRYZYSDEUCPZGKZFUOCTLUNBXFOKNDTSIVZIWKLI");
    msg.last_error.assign("NDSNDBHGIJZLCFBKDJQROOMNVV");
    msg.last_error_time = 0.5131414997208249;

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
    msg.setTimeStamp(0.08617668387034583);
    msg.setSource(48269U);
    msg.setSourceEntity(176U);
    msg.setDestination(13011U);
    msg.setDestinationEntity(252U);
    msg.mcount = 1U;
    msg.mnames.assign("LWKBZVWSHNYMJGISLNNFEDRNYWHHUIYFZSQVEXOWBRJVZGFJHHSZKCBQQPEIXUTBFFCGBLKWCOKZYIPAYRZVETQMNVYHISTTXFOUPPPCXHOCJDJYMAELMZRMGOOOSKYXJDIMAERKXADMQTRWCRCXGURAETDYLUEWPVUJQUSHWBIVDDSQGSTKQDORNJBMFTHXJ");
    msg.ecount = 170U;
    msg.enames.assign("WPLEILUNVBXWBHIMQLPPOSDPIZNFXSNKCSGVPZCGDETJKYJTJTAIGIZOJRMUVALJBSMLOGXVIBPXLYTHPAYRLSSVOOQYELFSPROHXAADXKSQCKMJVIVWHCUZAXFWZURWFKANWNGBVDWXWMHGTEHCGGNANZYPMFHFZRBUCFYTQBRUEMDCXNUVGTDEWFQQDQHCTOKDHJO");
    msg.ccount = 105U;
    msg.cnames.assign("NDMDCBLMEGXBZTPLQRFIORQVCIRTXWPXFOBNAROQIORJZNMASOESFDGSFMZNEIUVPFTMV");
    msg.last_error.assign("MLPFFATGQXQPLJDCFOQOFAALQBJGTXLXXJALNMFQNXPKWRIZIKPASHBGIRWGSVRTGCDH");
    msg.last_error_time = 0.05407438281396526;

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
    msg.setTimeStamp(0.6087175216709445);
    msg.setSource(47047U);
    msg.setSourceEntity(223U);
    msg.setDestination(44614U);
    msg.setDestinationEntity(47U);
    msg.mask = 87U;
    msg.max_depth = 0.6841613216213714;
    msg.min_altitude = 0.9818409528379823;
    msg.max_altitude = 0.6026117699952867;
    msg.min_speed = 0.17622953687479703;
    msg.max_speed = 0.6206293322213403;
    msg.max_vrate = 0.008396368541491062;
    msg.lat = 0.3463282656527107;
    msg.lon = 0.6351604946274247;
    msg.orientation = 0.271539152702564;
    msg.width = 0.017340209173803856;
    msg.length = 0.25844914712358613;

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
    msg.setTimeStamp(0.3155501166077145);
    msg.setSource(15273U);
    msg.setSourceEntity(222U);
    msg.setDestination(16553U);
    msg.setDestinationEntity(193U);
    msg.mask = 215U;
    msg.max_depth = 0.09604782119010469;
    msg.min_altitude = 0.9909333346220993;
    msg.max_altitude = 0.4858704546485517;
    msg.min_speed = 0.5362081980250941;
    msg.max_speed = 0.46820936434392446;
    msg.max_vrate = 0.28138804095903003;
    msg.lat = 0.37281535043846303;
    msg.lon = 0.4547273003115294;
    msg.orientation = 0.7197166461479176;
    msg.width = 0.9058030551096197;
    msg.length = 0.9769300608585453;

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
    msg.setTimeStamp(0.18307506154271946);
    msg.setSource(22710U);
    msg.setSourceEntity(143U);
    msg.setDestination(0U);
    msg.setDestinationEntity(163U);
    msg.mask = 136U;
    msg.max_depth = 0.1095955284761847;
    msg.min_altitude = 0.9920711355799747;
    msg.max_altitude = 0.01803606852457751;
    msg.min_speed = 0.6036715559426389;
    msg.max_speed = 0.09116470532877885;
    msg.max_vrate = 0.33275547731948996;
    msg.lat = 0.13040593540737044;
    msg.lon = 0.640626824124915;
    msg.orientation = 0.7828362486190721;
    msg.width = 0.2030659074142911;
    msg.length = 0.6461298729962616;

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
    msg.setTimeStamp(0.1603593824884325);
    msg.setSource(55907U);
    msg.setSourceEntity(126U);
    msg.setDestination(38864U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.5126206984683437);
    msg.setSource(38340U);
    msg.setSourceEntity(239U);
    msg.setDestination(14229U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.8114514922349225);
    msg.setSource(45401U);
    msg.setSourceEntity(192U);
    msg.setDestination(25936U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.24854895235006225);
    msg.setSource(13323U);
    msg.setSourceEntity(188U);
    msg.setDestination(46783U);
    msg.setDestinationEntity(248U);
    msg.duration = 14915U;

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
    msg.setTimeStamp(0.4603339031327244);
    msg.setSource(4918U);
    msg.setSourceEntity(176U);
    msg.setDestination(14256U);
    msg.setDestinationEntity(12U);
    msg.duration = 44939U;

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
    msg.setTimeStamp(0.6309184359046666);
    msg.setSource(10711U);
    msg.setSourceEntity(172U);
    msg.setDestination(231U);
    msg.setDestinationEntity(8U);
    msg.duration = 19251U;

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
    msg.setTimeStamp(0.6220960586886723);
    msg.setSource(45089U);
    msg.setSourceEntity(69U);
    msg.setDestination(43857U);
    msg.setDestinationEntity(101U);
    msg.enable = 41U;
    msg.mask = 3422291775U;
    msg.scope_ref = 384506312U;

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
    msg.setTimeStamp(0.7774172747377192);
    msg.setSource(31972U);
    msg.setSourceEntity(246U);
    msg.setDestination(18902U);
    msg.setDestinationEntity(247U);
    msg.enable = 3U;
    msg.mask = 1247780091U;
    msg.scope_ref = 223859166U;

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
    msg.setTimeStamp(0.06305416237366024);
    msg.setSource(29854U);
    msg.setSourceEntity(169U);
    msg.setDestination(24779U);
    msg.setDestinationEntity(63U);
    msg.enable = 115U;
    msg.mask = 3695889820U;
    msg.scope_ref = 974559725U;

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
    msg.setTimeStamp(0.7030576314846129);
    msg.setSource(42515U);
    msg.setSourceEntity(24U);
    msg.setDestination(9293U);
    msg.setDestinationEntity(167U);
    msg.medium = 227U;

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
    msg.setTimeStamp(0.07788965403244441);
    msg.setSource(22786U);
    msg.setSourceEntity(204U);
    msg.setDestination(8239U);
    msg.setDestinationEntity(151U);
    msg.medium = 60U;

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
    msg.setTimeStamp(0.1597592502590388);
    msg.setSource(30909U);
    msg.setSourceEntity(175U);
    msg.setDestination(49075U);
    msg.setDestinationEntity(96U);
    msg.medium = 171U;

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
    msg.setTimeStamp(0.29380116910491416);
    msg.setSource(29301U);
    msg.setSourceEntity(22U);
    msg.setDestination(38042U);
    msg.setDestinationEntity(87U);
    msg.value = 0.7637748864577187;
    msg.type = 148U;

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
    msg.setTimeStamp(0.9500179834332471);
    msg.setSource(37700U);
    msg.setSourceEntity(67U);
    msg.setDestination(11119U);
    msg.setDestinationEntity(245U);
    msg.value = 0.4950563161579863;
    msg.type = 169U;

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
    msg.setTimeStamp(0.11485263195158657);
    msg.setSource(36909U);
    msg.setSourceEntity(134U);
    msg.setDestination(3087U);
    msg.setDestinationEntity(28U);
    msg.value = 0.8338835437288867;
    msg.type = 78U;

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
    msg.setTimeStamp(0.3657743948410571);
    msg.setSource(53336U);
    msg.setSourceEntity(118U);
    msg.setDestination(22032U);
    msg.setDestinationEntity(71U);
    msg.possimerr = 0.9014106810281607;
    msg.converg = 0.7237408171410951;
    msg.turbulence = 0.12875604538643826;
    msg.possimmon = 222U;
    msg.commmon = 0U;
    msg.convergmon = 30U;

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
    msg.setTimeStamp(0.023612276217422568);
    msg.setSource(13069U);
    msg.setSourceEntity(79U);
    msg.setDestination(45152U);
    msg.setDestinationEntity(129U);
    msg.possimerr = 0.44097763428021064;
    msg.converg = 0.7422751885289971;
    msg.turbulence = 0.30820315417844224;
    msg.possimmon = 156U;
    msg.commmon = 3U;
    msg.convergmon = 220U;

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
    msg.setTimeStamp(0.2926939846315897);
    msg.setSource(18229U);
    msg.setSourceEntity(52U);
    msg.setDestination(63186U);
    msg.setDestinationEntity(78U);
    msg.possimerr = 0.0933557031596729;
    msg.converg = 0.23398980345535547;
    msg.turbulence = 0.20754075117031678;
    msg.possimmon = 59U;
    msg.commmon = 41U;
    msg.convergmon = 227U;

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
    msg.setTimeStamp(0.05659189411836729);
    msg.setSource(10855U);
    msg.setSourceEntity(234U);
    msg.setDestination(43257U);
    msg.setDestinationEntity(25U);
    msg.autonomy = 230U;
    msg.mode.assign("PIDRIEXSJSFDGTPDPWXOUZTIRPOLHOSESYNJEHHRIOTDCKFYJHKWLEGHUWDYJEHDVBLAQUYZOPUDWXAMXFFQBZOPYANWXTXYBUKDXBQYCZNLHLSCMGZQCNVCQFZGTWCERZKXTUQPSTPFZAOEBMQBISMUYGEQLWVAIG");

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
    msg.setTimeStamp(0.2488056580650988);
    msg.setSource(50518U);
    msg.setSourceEntity(148U);
    msg.setDestination(5441U);
    msg.setDestinationEntity(238U);
    msg.autonomy = 148U;
    msg.mode.assign("QHCZABCEXEMDMYXKPUOMDWMMSBIURAFCTXFUFOWQEJNZDKLVRTZDYISNHUYCSCFHZEBPWLASGNRJQIJOAXXVKG");

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
    msg.setTimeStamp(0.9134280824132912);
    msg.setSource(44029U);
    msg.setSourceEntity(216U);
    msg.setDestination(39705U);
    msg.setDestinationEntity(91U);
    msg.autonomy = 180U;
    msg.mode.assign("HRTJRKPNYSLHDLSOPEYSDQBMEGOQTHIENRWUBFQQMROGUTUAVZOJXHXELMJTNGEXLLWJGQKNDCNWCTGXDTLXKWIIXQORJGWJUIAWZNRUWCDZAKUPBAZTQPSBRHIXDYYALMOAERIKVMAFOZVPCYEYLKDQEZJFWOBCAG");

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
    msg.setTimeStamp(0.35369049136348707);
    msg.setSource(25301U);
    msg.setSourceEntity(175U);
    msg.setDestination(48460U);
    msg.setDestinationEntity(21U);
    msg.type = 83U;
    msg.op = 149U;
    msg.possimerr = 0.01791494984994213;
    msg.converg = 0.9945395593627621;
    msg.turbulence = 0.273004747323052;
    msg.possimmon = 153U;
    msg.commmon = 212U;
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
    msg.setTimeStamp(0.37645425197344395);
    msg.setSource(48203U);
    msg.setSourceEntity(118U);
    msg.setDestination(3123U);
    msg.setDestinationEntity(93U);
    msg.type = 13U;
    msg.op = 23U;
    msg.possimerr = 0.9284338756922084;
    msg.converg = 0.5444190561305338;
    msg.turbulence = 0.09637290409484667;
    msg.possimmon = 92U;
    msg.commmon = 174U;
    msg.convergmon = 59U;

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
    msg.setTimeStamp(0.4295806960019751);
    msg.setSource(14110U);
    msg.setSourceEntity(233U);
    msg.setDestination(31933U);
    msg.setDestinationEntity(131U);
    msg.type = 45U;
    msg.op = 55U;
    msg.possimerr = 0.14664594896797867;
    msg.converg = 0.9475987138225664;
    msg.turbulence = 0.1494573767681836;
    msg.possimmon = 179U;
    msg.commmon = 16U;
    msg.convergmon = 12U;

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
    msg.setTimeStamp(0.5513197198955904);
    msg.setSource(26904U);
    msg.setSourceEntity(91U);
    msg.setDestination(3129U);
    msg.setDestinationEntity(106U);
    msg.op = 79U;
    msg.comm_interface = 135U;
    msg.period = 58801U;
    msg.sys_dst.assign("XOXGPFHYRINYCVHDMTRZIKSXWLIZQKACCHUHMJZCRETJAELXTFKQBYUOERMNGDJZBSTVRCAMQQPGULNNXPKHFKGNYKIRGLUCZSOBQUJXSPYOFVMFADWZKCJPQZFVINNWWSBKELRMDDVMSAIEFPOJSIBORFAQGWPI");

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
    msg.setTimeStamp(0.8087182416897885);
    msg.setSource(28831U);
    msg.setSourceEntity(247U);
    msg.setDestination(32150U);
    msg.setDestinationEntity(141U);
    msg.op = 53U;
    msg.comm_interface = 222U;
    msg.period = 43062U;
    msg.sys_dst.assign("YWHPAQQWBTUZDKUXVADDWCYDILZRUSCLZXQYEOYCMSFSGFYAIFNDLXUMGHDTOSWUKOOHNVGRKZEWQALACPAMYTXVKVBLUNCDGMGNY");

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
    msg.setTimeStamp(0.6991250790576372);
    msg.setSource(3884U);
    msg.setSourceEntity(200U);
    msg.setDestination(44407U);
    msg.setDestinationEntity(127U);
    msg.op = 82U;
    msg.comm_interface = 234U;
    msg.period = 45452U;
    msg.sys_dst.assign("HMUQWGLNWFCABUBBEHMIVZVOMPMOMHADJRKHSHCQQWU");

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
    msg.setTimeStamp(0.6847439393617851);
    msg.setSource(35540U);
    msg.setSourceEntity(28U);
    msg.setDestination(63205U);
    msg.setDestinationEntity(18U);
    msg.stime = 3563132531U;
    msg.latitude = 0.45201624587771305;
    msg.longitude = 0.6820437775345587;
    msg.altitude = 40655U;
    msg.depth = 21658U;
    msg.heading = 62481U;
    msg.speed = 17478;
    msg.fuel = 111;
    msg.exec_state = -76;
    msg.plan_checksum = 36774U;

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
    msg.setTimeStamp(0.8508435764716844);
    msg.setSource(8118U);
    msg.setSourceEntity(4U);
    msg.setDestination(9088U);
    msg.setDestinationEntity(40U);
    msg.stime = 1317959363U;
    msg.latitude = 0.0207893458056031;
    msg.longitude = 0.37761201111738185;
    msg.altitude = 10272U;
    msg.depth = 61342U;
    msg.heading = 20769U;
    msg.speed = 4335;
    msg.fuel = -23;
    msg.exec_state = -47;
    msg.plan_checksum = 35894U;

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
    msg.setTimeStamp(0.9167672726318968);
    msg.setSource(45721U);
    msg.setSourceEntity(220U);
    msg.setDestination(6831U);
    msg.setDestinationEntity(49U);
    msg.stime = 1083746027U;
    msg.latitude = 0.4472131261444474;
    msg.longitude = 0.4356550488633345;
    msg.altitude = 42025U;
    msg.depth = 26935U;
    msg.heading = 64558U;
    msg.speed = -10526;
    msg.fuel = -36;
    msg.exec_state = -74;
    msg.plan_checksum = 40345U;

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
    msg.setTimeStamp(0.9969505735515058);
    msg.setSource(20968U);
    msg.setSourceEntity(155U);
    msg.setDestination(33310U);
    msg.setDestinationEntity(115U);
    msg.req_id = 60044U;
    msg.comm_mean = 5U;
    msg.destination.assign("RFAIJLKLHCWABSRCPZISWMYTPSDYIKKZAUXBTKEEVVZWQANADMJXJKXUJBNCNGDJTSSXWHIXQDCXLASZXXGLURRWHTGMCWJVMABLQUAPDAVAQYMOPDYJLWHBQZSH");
    msg.deadline = 0.4476039210229934;
    msg.range = 0.3615014083190047;
    msg.data_mode = 162U;
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 37U;
    tmp_msg_0.goal_id.assign("DXSYQLVTMGUIJRAOHQCKGBDELOWISMAYTUQEOZOUGVADBYZNDIUPITWVLHYEATWRDMRZUMGRCXOXQQXLAKJCPQKUZNPPCEBTNPSLZRPMBJVMVMEQCVJJFLHHNIGVSRZHJYYFCGBAOSDRWKOENNSFWKPRNYUNBDBMYNGXXSHTTAAFMB");
    tmp_msg_0.goal_xml.assign("KEBNUIYFUUHFGZISAPHKAVOYCNUYHNZFNEMNQFYQNFSSTLNODGHQGZXTHWSZHNKBRHEAGMYJEVXQJWJLLFRPCQOGAPLEGVCSZLPEDDMWLEGMATVNEUACVRJBEBXOIGTBUMRJDPTWQCZJBFTUTWYJFCCJXQHWDOSEDKQXXZRIUSMRPWVZVSARAPJTVXODVZRPKCLHXDLPWBTNGDKYJGWCKOSOLCUMLPRZWXIIIUFIDBAKS");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PHYSYVNUNVQJHPMTAPIKRIEUFZLZXFNNKGPIYMGXJFGYNEIEVGRJKZVYKWJMSIMECAGXGDBVTLSTMSWWZTPUOUXALFGENXJMMCXCIPKBSXWYDKWWZEJRAQBKTZIDGESILCFVTHMVFAUDZAXIWPOHONUARLVBEIZFUOMDALRXQORLQKYOZEKNBWFOMCOQPBYLTBRFPVVSBDCSPGHHYRESCOJCTJJUHNLD");
    const signed char tmp_msg_1[] = {-19, 38, 5, 15, 57, -31, 97, 18, -102, 38, -103, 20, -88, 64, -109, -77, -6, 68, -24, 13, 14, 19, 102, -54, -100, -50, -83, -98, -121, -81, 94, 88, -16, 39, 47, -15, -122, 16, 52, 119, 81};
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
    msg.setTimeStamp(0.20110409151983732);
    msg.setSource(56790U);
    msg.setSourceEntity(193U);
    msg.setDestination(50505U);
    msg.setDestinationEntity(249U);
    msg.req_id = 55583U;
    msg.comm_mean = 58U;
    msg.destination.assign("VXJZZWBFWLJKMKMLPYYBBTGOMLDQJWVIBWLFTROFJKITLADDRYITTNEDAZNBYBQVOQJICNAHAVGXBNQTOQICXAUFIFKVBRZEMY");
    msg.deadline = 0.9576854056034386;
    msg.range = 0.689671921903049;
    msg.data_mode = 222U;
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 140U;
    tmp_msg_0.op = 90U;
    tmp_msg_0.possimerr = 0.9168135629946009;
    tmp_msg_0.converg = 0.46198508117977066;
    tmp_msg_0.turbulence = 0.7907010523709573;
    tmp_msg_0.possimmon = 254U;
    tmp_msg_0.commmon = 115U;
    tmp_msg_0.convergmon = 248U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BLVVMWDMLWPIKQRAAJSLZHNJSSGQJXSVOMOXYUEIUCLNKQOGECADAOPUCNCJHOWOHJAZPIONZCGKMVWZGFVNKMYTPMKPLBIYBTRXDDHOBXZFETXJUONABCNDFCRGKYSHERBCVNWEKQYHRDYUDHYWJASLIYZWPRKNZOBUTVTNIF");
    const signed char tmp_msg_1[] = {-39, -17, -3, -110, 14, 92, 96, -68, 10, 30, 21, 34, -94, 50, 72, -94, -67, 23, 122, 55, -31, -44, -115, -82, -1, 32, 24, -19, -125, -98, 37, -72, 122, 118, -2, 11, 8, 64, 54, 101, -74, -11, -96, -95, -116, 101, -112, 42, 13, 118, 87, -113, 100, 36, -43, 12, -7, 121, -35, 104, 91, 10, -111, -49, 95, -8, 3, 68, -25, -96, -55, -40, -57, 108, 95, 30, -98, -52, -11, 74, -5, -104, 18, -33, 14, -67, -99, 13, 34, 68, -41, -60, 112, 65, 10, 94, 3, 70, -22, -88, -76, -104, -107, 105, -97, 118, 118, 14, -35, -87, -117, 0, -1, -102, -82, -78, 72, -24, 59, 41, -85, 123, 115, 57, 126, -54, 119, -100, 37, -113, -52, -60, 39, 111, 74, 10, -102, -74, 49, 107, -118, 36, -91, -12, -32, -44, -93, -70, 8, -88, 104, -91, 62, -78, -63, 34, 126, -36, 87, -28, 28, -117, -1, 37, -72, 115, -9, -61, 86, -16, 96, -94, 106, -74, 84, -108, 17, 29, -75, 41, 57, 76, 2, 77, -63, -43, 84, 25, 120, 44, -62, 71, 34, -51, -44, -54, -1, -107, -12, 80, -17, -106, 97, -53, -63, 29, 36, -60, 30, 103, 66, 35, -57, 40, -96, -17, 22, -2, -122, 35, 26, -116, -33, -124, -33};
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
    msg.setTimeStamp(0.3610694653692288);
    msg.setSource(60870U);
    msg.setSourceEntity(112U);
    msg.setDestination(2316U);
    msg.setDestinationEntity(196U);
    msg.req_id = 1102U;
    msg.comm_mean = 137U;
    msg.destination.assign("QPEOAHUQOYQXJKIBRZQGPFDNLELGVRIBDNQFUEMFYPBUDWQKKBASASQLDGTMOSVJGJCEKFVURFSYAHAZESVYOPWQUZMLNOFGBPUTHZYYWHNLMJXYNGNKPCHCGPUFJWWMAWHWCJDCKAWRESTOXKLIDZYGIKMERBVVXSZVHNQILCLLDHFUTDKDJRZZYMMRUEKMNMRRBTTX");
    msg.deadline = 0.4462565964300843;
    msg.range = 0.4377384460555749;
    msg.data_mode = 23U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 2914U;
    tmp_msg_0.off_x = 0.206555151810359;
    tmp_msg_0.off_y = 0.5902322798095104;
    tmp_msg_0.off_z = 0.9905105390409475;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ALMCCPJQUELGWNFHVRGISDPCIYDBIHQDIZWWTTKWPAAKUDGQZSQVUBPNPXIOKWPUMKOTCR");
    const signed char tmp_msg_1[] = {18, 32, -127, 7, -121, -9, -117, 43, -40, -3, -91, -110, -111, 97, 84, 38, 112, 99, 107, -51, 64, 121, -109, -8, -60, 116, 54, -7, -113, -97, 8, 6, 42, 2, 106, -56, -88, -78, 38, -75, 91, 106, -17, -70, -27, 15, 34, -30, -24, 116, -54, -84, 122, -29, 89, -119, -86, -93, -77, -97, -28, 104, 23, 77, 100, -121, -20, -85, 51, 4, 7, 47, -110, -110, 18, -58, -84, -88, 24, -23, 16, 126, 41, 40, 41, -125, 65, -104, 115, -55, -37, -57, 102, 11, -55, 26, -33, 54, -67, -11, -88, -88, 51, 81, -74, 54, 84, -58, 41, 50, -110, -95, -100, -7, 80, -53, 105, 114, -9, 72, 97, 55, -103, -38, 15, 2, -66, 119, 106, 78, -66};
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
    msg.setTimeStamp(0.11326064958444115);
    msg.setSource(30652U);
    msg.setSourceEntity(22U);
    msg.setDestination(17004U);
    msg.setDestinationEntity(91U);
    msg.req_id = 3284U;
    msg.status = 225U;
    msg.range = 0.9798539826650284;
    msg.info.assign("TQIRLEKQBGFCEWKCCXJZXDATGROYIFPFDYBUXAAVATPKBLUAESNTZETJJMRDLCKYZHBAZBSLXIRJMZOHAGDWPFPJJWROKNSCHQNUMQJXJDTJGEVQMUOOYILUFGTHYCQAIIVMMWNNMFRPCTOXURAFWQKBXOSVKHGNFRSWSFPMSRZLVFSGEOBLOQBKSWQZVVZTRGK");

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
    msg.setTimeStamp(0.6487712543802191);
    msg.setSource(29275U);
    msg.setSourceEntity(33U);
    msg.setDestination(53882U);
    msg.setDestinationEntity(103U);
    msg.req_id = 65069U;
    msg.status = 205U;
    msg.range = 0.5056818867085354;
    msg.info.assign("ZFYCXZSUWSMIOPQQWUHKX");

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
    msg.setTimeStamp(0.1770223262432039);
    msg.setSource(32921U);
    msg.setSourceEntity(250U);
    msg.setDestination(20405U);
    msg.setDestinationEntity(54U);
    msg.req_id = 30090U;
    msg.status = 144U;
    msg.range = 0.8594090270619797;
    msg.info.assign("SCGQPQBBXYKARTBYULQPQYMKFKTCZDLYQAELJFVNPPVWZAJIZUUMBMCBZOJOYSBWMWTSHLAXWINVJYRBXZEHMRDEWOMORGRZLKMVPDXDDLCIONTEUSLJVTRXTHXSXNUDWGOSHAQP");

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
    msg.setTimeStamp(0.38147645442002054);
    msg.setSource(43995U);
    msg.setSourceEntity(203U);
    msg.setDestination(44733U);
    msg.setDestinationEntity(1U);
    msg.req_id = 8240U;
    msg.destination.assign("SLYESAUFLQWHWXSFDHPATCZALMXEPVTHOVJTTJNAANZFIZBCOKDOISTGDYZGVLCSYUPBSBWPNBJXGDQAPKIESQFIBLMVVWXNGZGUMGAKBIESCMXQPROEUNXJHXRJMKOCLMODQYOLDTUOEWFTCPMKKZJIQDBVBKUDFUVWSX");
    msg.timeout = 0.40054637226920164;
    msg.sms_text.assign("BIZXYPAQEVUFWMUSJOJMMOLFCNRMMGCUGOZSOBNOIKGNNLTJLZYXHZAPCCWBOKKFKMPTTNWEIXVDVFRTDUGSJYEGZWPHFAYAPVAJBZQKRYNBBFUVGIUPHBIIAGCKCIRANWWLXRYLDSSPTJHRHPTYENEKJHXRMQGQAIXQSXVQELKW");

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
    msg.setTimeStamp(0.34722684897243306);
    msg.setSource(65286U);
    msg.setSourceEntity(8U);
    msg.setDestination(18955U);
    msg.setDestinationEntity(84U);
    msg.req_id = 63814U;
    msg.destination.assign("SOPTGVTGMSOOIAEUEBECNKCFYHMPBOEEZDVPVFZWPXIKGURXWAWIFTTSJQZLNFNPMIDBQGJWXVOBYIWLUYKWUQGLCHTVVTBCNGRPZBIYIUUSODNXSIHFFYMPJQXTNXXPLIHXKSRGMAKGDWLZYKYHVKVSADNYUTEZOJECJJRCWCLUOAVDSDWAULOQOHASNMPHBHMLHRRVKZTNFMGCSCZKURFBGINMYFZFEYLJQJD");
    msg.timeout = 0.7602841625782035;
    msg.sms_text.assign("UDANMMMHAVXARZHYNUQVJUKYPESPKCPSVGRNHZLSQBIPXOSGYPFSVSUTCFBAZJXYYFILIHMZDOWYHCLLEAJIIBRWWXDTWAAZZJOOTGOLYQBFLDRLCGCUGZAKWEW");

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
    msg.setTimeStamp(0.7629832305996055);
    msg.setSource(54074U);
    msg.setSourceEntity(140U);
    msg.setDestination(32656U);
    msg.setDestinationEntity(140U);
    msg.req_id = 65488U;
    msg.destination.assign("AUTLHDJOPPJIHOVCXXFCXGSXHOZCBWHKQBLLFRUAQGAPJAHILKHYYCZUIMHJOONMJNWTPRQPANIJWMSKVMFFMWPKGDFXRAGMYEVNASDCUUTMRNRWHYGNISVCZWTOLSLRIGTJPOZAWUMHXZBGSGWLCJPZSEVQXYSAENQNIQDCELOBEBGEUQTBFKYYZFDIPYTEKLDOVGZQPH");
    msg.timeout = 0.6664866142212198;
    msg.sms_text.assign("MCLDRZDTKMORASEUWOS");

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
    msg.setTimeStamp(0.2262150075737741);
    msg.setSource(34588U);
    msg.setSourceEntity(142U);
    msg.setDestination(45687U);
    msg.setDestinationEntity(206U);
    msg.req_id = 44583U;
    msg.status = 155U;
    msg.info.assign("LTSDHWARJPYCWAKIJBDPEBRHBTNWEFDAYQXWBLZLQZSQXLQEFAXBKACGJCSPSUUVFYJTTXLWYDJCEVIDHUOSPNZTOCJVOHOGJHQKVSVYREUQFNXKBMZTRKPDIBG");

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
    msg.setTimeStamp(0.11773327793252542);
    msg.setSource(39890U);
    msg.setSourceEntity(156U);
    msg.setDestination(34726U);
    msg.setDestinationEntity(245U);
    msg.req_id = 11529U;
    msg.status = 183U;
    msg.info.assign("GOAYVJQEUXWHHKBQVCNMLFRKWZBBZ");

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
    msg.setTimeStamp(0.6825834672641686);
    msg.setSource(22761U);
    msg.setSourceEntity(228U);
    msg.setDestination(25889U);
    msg.setDestinationEntity(168U);
    msg.req_id = 47680U;
    msg.status = 157U;
    msg.info.assign("NXUNCBTIYJGAKLQLPUDNVEWGZZIWYZDXQISBQKRXCXVFZIXMYCFTXXELGPOUDQAQJIOZQCJOFOFUPWYYHETAPSCEDQUODHKBTAMVEOMDZYTESIZNUWKRVLAHFRQSHYLQMWYBUZYPZFEGBNEKL");

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
    msg.setTimeStamp(0.7228759348957107);
    msg.setSource(53021U);
    msg.setSourceEntity(14U);
    msg.setDestination(20367U);
    msg.setDestinationEntity(165U);
    msg.state = 36U;

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
    msg.setTimeStamp(0.35988520429254933);
    msg.setSource(48611U);
    msg.setSourceEntity(192U);
    msg.setDestination(36833U);
    msg.setDestinationEntity(144U);
    msg.state = 39U;

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
    msg.setTimeStamp(0.4319715538829808);
    msg.setSource(10288U);
    msg.setSourceEntity(153U);
    msg.setDestination(31980U);
    msg.setDestinationEntity(239U);
    msg.state = 32U;

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
    msg.setTimeStamp(0.4130039904860112);
    msg.setSource(674U);
    msg.setSourceEntity(36U);
    msg.setDestination(51400U);
    msg.setDestinationEntity(207U);
    msg.state = 119U;

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
    msg.setTimeStamp(0.7019394664490494);
    msg.setSource(51489U);
    msg.setSourceEntity(208U);
    msg.setDestination(41947U);
    msg.setDestinationEntity(0U);
    msg.state = 40U;

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
    msg.setTimeStamp(0.8766127666952404);
    msg.setSource(49133U);
    msg.setSourceEntity(77U);
    msg.setDestination(19818U);
    msg.setDestinationEntity(22U);
    msg.state = 125U;

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
    msg.setTimeStamp(0.6277730899669128);
    msg.setSource(7914U);
    msg.setSourceEntity(108U);
    msg.setDestination(9501U);
    msg.setDestinationEntity(234U);
    msg.req_id = 34940U;
    msg.destination.assign("QEIYSMJMBDCOTGNUKSOBS");
    msg.timeout = 0.12857901581710796;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 221U;
    tmp_msg_0.htime = 0.24055936928020272;
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
    msg.setTimeStamp(0.3199750400558474);
    msg.setSource(64925U);
    msg.setSourceEntity(240U);
    msg.setDestination(51288U);
    msg.setDestinationEntity(136U);
    msg.req_id = 5782U;
    msg.destination.assign("REYIMBXUCZBAXAKJLFLJWAUQTCLNSNCTLSKRGMIFJWPCAFZHRNGTTZKNCDLHLSDXXDZWZPODAVJVYXOAF");
    msg.timeout = 0.5818054977214348;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.08893240209920528;
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
    msg.setTimeStamp(0.15069166237658638);
    msg.setSource(13730U);
    msg.setSourceEntity(83U);
    msg.setDestination(39507U);
    msg.setDestinationEntity(103U);
    msg.req_id = 48535U;
    msg.destination.assign("OWKUWMULCIEELPFSVNENUSGCMQPMCGONBNKJFLKYTNRLZMFTRNIICONRGZOMVWHDAGJBVHBFROMAIDOPDPTWDWGPDGRRCTIYDUDFMLWXDPXWVRIJQYUTFXACRKVHFBYLYSSKQFIJUPHKBVYOKNOQGCJEHBSVVXNIAEBZASCTXHKVQGZRSQTZDBZGIPTDAXPEUTWJBSGWXKHLAOARZXZBSFQFJYXVMCYAQEEXWYTZIEL");
    msg.timeout = 0.8388244932672041;
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 230U;
    tmp_msg_0.time_remain = 0.2512706518737373;
    tmp_msg_0.sched_time = 0.6039725660903534;
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
    msg.setTimeStamp(0.7765152218686174);
    msg.setSource(30668U);
    msg.setSourceEntity(248U);
    msg.setDestination(27706U);
    msg.setDestinationEntity(5U);
    msg.req_id = 30955U;
    msg.status = 14U;
    msg.info.assign("KLMTICLPIPBSGOOKGGFSHNXBYTCXSOPJFHMFVRHUKVZPWWJTLNQEZAOYUFIMEEWILECBMPQAXLVQWRUZONUAXPUATFNTJAZXYPKUQBRMLTSHRFYIDH");

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
    msg.setTimeStamp(0.4288194393197854);
    msg.setSource(49921U);
    msg.setSourceEntity(58U);
    msg.setDestination(36748U);
    msg.setDestinationEntity(74U);
    msg.req_id = 6560U;
    msg.status = 251U;
    msg.info.assign("XAVPAYSPVQZHMJVLIXUKIIEJFESEMYGKODQIJTAXXWVBPWBXTCHLACOEXCNIQSYRWGGHZUBIXPNHZTGEOPXRTEBXWORLSJVJPUWYASWLHDBXSAKVLMHKPDRLFWDBNAPINMUVKDTKZUCLRIZHDOCOFTSUKEEAZGBFROJPJ");

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
    msg.setTimeStamp(0.5797868533482323);
    msg.setSource(9578U);
    msg.setSourceEntity(185U);
    msg.setDestination(29589U);
    msg.setDestinationEntity(95U);
    msg.req_id = 51909U;
    msg.status = 239U;
    msg.info.assign("GNRNHPDUTHLJIWUSQBVCSIFXFDLGACIPBFYWTCYSYIDTSPLZYREINTTAKJUDKQZRBZXHFPSXAYGXWQYTOOWQHMJZABZDLGJOKGFXURO");

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
    IMC::SatelliteRequest msg;
    msg.setTimeStamp(0.4433533996633421);
    msg.setSource(60657U);
    msg.setSourceEntity(116U);
    msg.setDestination(30661U);
    msg.setDestinationEntity(171U);
    msg.req_id = 26673U;
    msg.destination.assign("XXJYLQXPJTVQUUCEQBFAMMYTJUBQVRGRGOSDHCBCMUGRVWNYKCQHLHQSPNSUFFKVNXTMGERUJENALIKIBCXPZJBIPAYZORHYWMUCTKDQZTGDXOFTDZPEZRWPFNIKPKVNSHFIROY");
    msg.ttl = 16430U;
    const signed char tmp_msg_0[] = {101, -119, -28, -50, -108, 12, 15, 99, 17, -117, 123, -58, -42, 85, -42, -62, 126, 103, 56, -20, 41, -8, -95, 36, -16, 61, 93, -6, -112, 46, 111, -74, -8, -88, -5, -100, 48, -60, -25, -72, -23, 116, -91, -16, -97, 90, 108, -71, 110, -124, -64, 93, 77, 18, 57, -73, -122, -41, -5, -124, -126, 99, -5, 16, -61, 69, 89, 39, 61, -68, 56, 59, -118, 64, 101, -27, 62, -37, -123, -16, -72, -121, 65, -125, 47, 56, -71, 103, -37, -7, 92, -125, 78, -128, 112, -103, -62, 28, -37, -109, 104, -80, -122, -125, -109, -16, -65, -84, 43, 4, 37, -19, -37, 73, -77, -4, -94, -31, 100, 13, 20, -73, 119, -37, 120, -51, 13, -125, -10, 117, -7, 83, -8, -75, 7, -77, -60, 67, 24, 48, -61, 7, 111, 12, -30, -111, 8, 121, -105, -99, 25, 102, -105, -89, -111, -7, 109, 13, -70, -35, -97, 72, -80, -17, 90, 105, 56, -88, -51, -92, 76, 83, -41, 10, -31, 28, 90, 37, -70, 92, 47, 28, -119, 65, -99, 89, 45, 2, -10, 96, 8, -86, -120, 6, 51, 123, 123, 49, -65, -120, -90, 121, -67, -57, 27, -88, 73, 104, -70, -116, 51, -105, 56, 105, 62, -95, -1, -121, 8, -125, 51, 87, -32, 98, -69, 34, -69, 86, 120, -49, 88, -115, -77, -78, 78, 119, -75, 77, 35, -26, -54, 52, -8, -124};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteRequest msg;
    msg.setTimeStamp(0.20126100184800033);
    msg.setSource(14188U);
    msg.setSourceEntity(79U);
    msg.setDestination(21650U);
    msg.setDestinationEntity(178U);
    msg.req_id = 5283U;
    msg.destination.assign("IEEMCCTMJLMJBGJLDUARWRCSFUOADBDRMRRDZWMAUPQIPUHZCMFBSYWEDSPVBQVGSQLJNQXHVIAGWRF");
    msg.ttl = 48815U;
    const signed char tmp_msg_0[] = {-43, 111, -29, 123, -56, -10, 115, 122, -99, -43, -24, 61, 58, 27, -39, -69, -53, -110, -128, 50, -61, -73, -33, -35, -23, 11, 44, -106, 83, 28, 80, 47, -86, -106, -42, -46, 74, 119, 13, -92, 75, 8, 58, 87, 40, -61, 85, 119, -77, -27, 122, -73, 84, 54, -111, -27, 70, -96, 29, 83, -123, 121, 83, -1, -3, -109, 78, -9, -66, 32, -50, 126, -36, -49, 56, -4, -94, 29, 78, -61, -9, 104, -40, -6, 74, 26, -76, 101, -8, -13, 35, 100, 31, -42, 35, -52, 27, -100, -43, -19, 125, 87, -100, 40, 38, 105, 84, -84, -47, 56, 60, 12, -88, -12, 43, -113, 116, 94, 13, 120, 25, -54, 15, 82, -54, -58, -122, -41, -30, 4, 125, -127, 11, -35, -18, -114, -14, -71, 61, -103, 23, 116, 40, -84, 115, -116, 115, 21, -89, 22, 36, -101, 91, 50, 48, -41, 49, 1, 74, -101, -29, 26, -105, 121, -39, 108, 26, 59, 88, 66, -94, -117, 86, 105, -70, 25, 126, 75, 104, 86, -3, 41, -36, 26, -126, 78, 33, -127, 88, -104, 68, 6, -43, 79, 65, 40, 9, 78, -5, -24, 3, 54, -89, -11, 62, 125, -13, 17, 90, -104, 97, -110, 97, 120, 13, 56, -115, 68, 91, -112, 34, 18, 41, 22, 32, -80, 60, -75, -76, 34, -19, -106, 83, -115, 89, -94, 104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteRequest msg;
    msg.setTimeStamp(0.22275281251106083);
    msg.setSource(61704U);
    msg.setSourceEntity(84U);
    msg.setDestination(22260U);
    msg.setDestinationEntity(175U);
    msg.req_id = 9566U;
    msg.destination.assign("EERXULWCCIFQLJZNMYZMFPKOZPBOVYUPNORSIPDZAHLAPAUKKPNQTFADOFUTTQHBUNTXJSLRCVYKTVWKHIGXWOGZOQWDAXOIZCRJWURVBEYAQLOWMZKLSIDTNJLJSPIEHFEEJQHJHLFZEQJQQRSHBCBKEQSCYMHGVRNAXTBGAFFRTNLZUMGBXMKJGPUVVSXSGYHMNKYIDAEOJC");
    msg.ttl = 43689U;
    const signed char tmp_msg_0[] = {119, -127, 115, 104, 44, -3, -65, -41, -87, 71, 5, -17, 42, 72, -117, -37, 121, -113, 84, 23, 108, 74, -5, 60, 37, 108, 122, 123, 59, -48, 90, 111, 89, -69, 111, -118, -117, -114, -104, -56, -128, 3, -77, -94, -63, -112, -106, -19};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteStatus msg;
    msg.setTimeStamp(0.4369529713138922);
    msg.setSource(22752U);
    msg.setSourceEntity(220U);
    msg.setDestination(13300U);
    msg.setDestinationEntity(62U);
    msg.req_id = 928U;
    msg.status = 44U;
    msg.info.assign("ABJNKWOLMCIBMHBORXIWWZSZFXHSNHJDTVADQXLRBYFYUGYBKTRAZJUWZSRVOYQPTLOGXSWXUUCJJERVCDKCEHGFYRMIICAKFWXDIEFRHNRBV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteStatus msg;
    msg.setTimeStamp(0.7409433886565288);
    msg.setSource(53118U);
    msg.setSourceEntity(242U);
    msg.setDestination(28286U);
    msg.setDestinationEntity(134U);
    msg.req_id = 51830U;
    msg.status = 218U;
    msg.info.assign("HCZPAJYLGTNYJZEJODUWBTAWIEPYNXOOTQELQPFYNKQIDHRXPBQXMBSVAFUMYDSVTHMCLAOPIRLUWSHKMKLBGXCUEVGKPOIWWCVDHFJLYFQOOXLXQGRAFKZSRTZXEMRITZODWYFKJNFXEJKNGHHCZCBCWUSEPFIZQCIYZQFBAYEHFDBQHNOWMRKUAQJRDJMATNKVSVURWJVCKNZYVREXPBDBGA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteStatus msg;
    msg.setTimeStamp(0.22904901319372217);
    msg.setSource(64524U);
    msg.setSourceEntity(180U);
    msg.setDestination(16103U);
    msg.setDestinationEntity(184U);
    msg.req_id = 57959U;
    msg.status = 235U;
    msg.info.assign("IQSUXWHYSSHOBNOITNVRARMLGWDLLWAAPIMOIAGPRUKKXLQECBOPUDWHRWKRIKTQJYAHIAYLOEVRCQFMVCLQMFKYVNTPXFEPXWINZZQGLDZNXQXSATGTFUKJHBPEVOCQDEOWZJVMMVBUPCGYAG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteStatus #2", msg == *msg_d);
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
    msg.setTimeStamp(0.056095493554211395);
    msg.setSource(50727U);
    msg.setSourceEntity(124U);
    msg.setDestination(1202U);
    msg.setDestinationEntity(177U);
    msg.name.assign("ZUAGOPTDFMKXUBQUTCDEFTBJXVVBJGYCELDCKIPNWPMRQPVTELLXGQRDQSIYDIHNPKNNWEXEKJBEPCPQZMWKLZTXPHWLGSZQEMNLFTXQVJSFJJIGEVAQZDGBYVYMTVZNEXFFHNHHMBHMYYFWWYOZROHBUGTOAYHAUBFGLCQOUDWMSHCXZASZNJIJSWNFKC");
    msg.report_time = 0.4014077086156814;
    msg.medium = 198U;
    msg.lat = 0.39243641780126937;
    msg.lon = 0.9158128889272741;
    msg.depth = 0.5026918942451711;
    msg.alt = 0.543217597091197;
    msg.sog = 0.439027130431104;
    msg.cog = 0.08710849212342353;

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
    msg.setTimeStamp(0.403055568379185);
    msg.setSource(45795U);
    msg.setSourceEntity(203U);
    msg.setDestination(18732U);
    msg.setDestinationEntity(71U);
    msg.name.assign("PZALVDOEJSMXUBJRNFIODTLYXNRRNHAOERFBOSUHIIEAAOCNPTKBAXEZKKTSLYEPOUVCJFZRGXVBGIDJVSUGOKZKBWWNQAFBXICYNNHLYNMWWKJSNJXYKQMIRCYSMHDZZDUVX");
    msg.report_time = 0.2750993926579407;
    msg.medium = 64U;
    msg.lat = 0.4137577197927206;
    msg.lon = 0.922978945349763;
    msg.depth = 0.31910126704572817;
    msg.alt = 0.040286093601198725;
    msg.sog = 0.7293482189041093;
    msg.cog = 0.5105041789028422;

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
    msg.setTimeStamp(0.20776838541455223);
    msg.setSource(2248U);
    msg.setSourceEntity(29U);
    msg.setDestination(63727U);
    msg.setDestinationEntity(172U);
    msg.name.assign("UTBDBMMVSYQMVIRFQBROZVVACZJDGLEMGQNQNHWGVFLAPYYKUXAKFZIAHEOAWYPSHJPLYEOELKSXXDZAWVUIHDSOVOJRGBQCCWPNEPZJDHCKXSPWNJVPAXDYNMITLUSPNXGTQWBWETSMYMJHEHQDQPQGFBUOAORCEMIJKJMZDYFHFEKDNVXRISWLNOGFRURWRBGIBTYLTFJARTVXBKXEOFXRZCWCKKPAFHZISCDLKLTBIJYUQTOCZ");
    msg.report_time = 0.7438735984309073;
    msg.medium = 155U;
    msg.lat = 0.20582714257742907;
    msg.lon = 0.0030520219152101458;
    msg.depth = 0.18203637644000847;
    msg.alt = 0.775525803140849;
    msg.sog = 0.36268378297807524;
    msg.cog = 0.7649834015542772;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.6094545949534915;
    tmp_msg_0.lon = 0.19199896722063747;
    tmp_msg_0.speed = 0.31056618140428327;
    tmp_msg_0.speed_units = 15U;
    tmp_msg_0.duration = 55076U;
    tmp_msg_0.sys_a = 29128U;
    tmp_msg_0.sys_b = 10630U;
    tmp_msg_0.move_threshold = 0.29098225238929676;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.19099641021778513);
    msg.setSource(39143U);
    msg.setSourceEntity(69U);
    msg.setDestination(44411U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.8784707841245701);
    msg.setSource(3996U);
    msg.setSourceEntity(48U);
    msg.setDestination(55547U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.48599301675418394);
    msg.setSource(1655U);
    msg.setSourceEntity(195U);
    msg.setDestination(3331U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.9548637606541975);
    msg.setSource(31196U);
    msg.setSourceEntity(226U);
    msg.setDestination(4394U);
    msg.setDestinationEntity(105U);
    msg.plan_id.assign("CPFHASJOGDUQVUHPUTNGCLCMGFRKACZJBCLVFBSTWQFGSKKHVZEFXAUMTMGNBUHVBYPFXWTYLPIZJFRRYFBWRWTMQMRGHQHVIGJKECBEYJPZDCRBXEWAZAQHNHTPVXZDQCVOFDEZYYXZAJKMPTTLKTXYOUDRUB");
    msg.description.assign("PSUGAOJAGOZHCAWZBJZBHKXDEZFQGSQKNRQCPAZYOXDVYVITOQQIIJXQKFXTDFVRNOYL");
    msg.vnamespace.assign("SAOITXYUEGZKNUFDNQCTCEQFSWBRPDCVPZRKBQLFZOSQJGWPXZOWVYHGQAEBVIBOVNMMFCCVBRTUMGIDKHEJMIEZXTSXSNWLEZHTULSCKUMBAAHCSVAHTZPNSFZGGLOVOOVDCNPIEMQAXRYKUBMJGWXYRBRJDFZHMXLJYEMTAXWDJEIRDWLIHJ");
    msg.start_man_id.assign("LKIWKCFSTNWYPZCUWSOVHLTRHCHNXZISXHNGCUWQMBWZZZYRUWUSFPPHQVFOEBFWNILFDUEMRESWCMAG");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("WPBFYDAIFKPRWDXKLTGZAJEXBBOTRZVRXNJRHVMH");
    tmp_msg_0.dest_man.assign("DMIFLEEJPRYYMYTCFMKZWOXBWMOVWPSOPHWNCFTGCSDOYKKCFIWYZGJJGQSNTTOBMQQJPBVBIXAGLLHWHSHNQTABPG");
    tmp_msg_0.conditions.assign("RHESWSSYEVQIFJTGXDBRWDQIFNXXIGPAWTOPDCAFZTJGPXPJTUVTOJNUBUPBATNOUVFAEYMGZYQJOGODZELCSTJMSPJAKIJZAUIHCLOTGZNMDQELZXEVVNSBYQDURYOMFHWIHCBSKVADFLEWXKFWGVZHLILLYXWORKUCRMPGEZELYOPMMSFRHUKMCVOHVCDRCBHNXQRWGJFFYWKQNM");
    IMC::GpsNavData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.itow = 2413584645U;
    tmp_tmp_msg_0_0.lat = 0.02492198643911392;
    tmp_tmp_msg_0_0.lon = 0.5987467602358467;
    tmp_tmp_msg_0_0.height_ell = 0.49535457892280765;
    tmp_tmp_msg_0_0.height_sea = 0.0824289186964039;
    tmp_tmp_msg_0_0.hacc = 0.6019408025188138;
    tmp_tmp_msg_0_0.vacc = 0.9454427604939528;
    tmp_tmp_msg_0_0.vel_n = 0.661549044357243;
    tmp_tmp_msg_0_0.vel_e = 0.5459162830928184;
    tmp_tmp_msg_0_0.vel_d = 0.7748571034729368;
    tmp_tmp_msg_0_0.speed = 0.19518478472710044;
    tmp_tmp_msg_0_0.gspeed = 0.35753420123861424;
    tmp_tmp_msg_0_0.heading = 0.20980434395108505;
    tmp_tmp_msg_0_0.sacc = 0.7336194027115859;
    tmp_tmp_msg_0_0.cacc = 0.02146876918748819;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.07768198530713633);
    msg.setSource(2513U);
    msg.setSourceEntity(42U);
    msg.setDestination(59820U);
    msg.setDestinationEntity(111U);
    msg.plan_id.assign("QUDPNUJKTWUVCRAKUHH");
    msg.description.assign("FJQNDTCBUCQBVAOCCYRHUCOBLDLVGZYHBK");
    msg.vnamespace.assign("MQXZIJZODJDJVALWSTVKDQVFQFXLHZAZONUWVWTXMYRIEMCXDCWEPBWPVROYUGADNCQEMZWKKFTEALPBINADCTVHRZYSOEHCSJAJWTMIPPWFUXVQHEHAYXBSUCOTJBSHJYUGMBLPRPMNLXSYOBXKYYVJCEGIIDWQBFYRFFLAEGRFJHNNXSLBOZWKZHPGBOFEMCIGOBEHGKGUIKDDGLKULPNMKVSQUNZNGSRHTLRMUNQARVJYUIRQXAZTTQKIC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TJLUDSGGJPCFSUKVLVTWTJLLDAAUXQCMHIMGDBDWQFYRQGBAEFSNTUZIJOSBEIKJDOPZSQNRAGSXIEYNSWKCMXMYWVHLTJWDBL");
    tmp_msg_0.value.assign("PVETUGTBRMGKVNILPONTREKXMJWXJUNGJIPBYJKQSPDBGZFYZZLVLVFFIBETHLAXWWTUYOKLQSJRBTDCAMZSBYIHLQXOWLAIHWVWGSQEYXVMACJPVXKZDJEZOPPFOPKHASUZVSFHXFCQIGMWEKSNWHTBZDYXCHGZISTCADNJCNLUYAPSDSNQUNNRBVUPOYCGBRGHQOTRRGQDFIAQMUCVUUJDDWOMXYYEOIMNAIRTXWEKRDMERBHKZJFLEKCQAM");
    tmp_msg_0.type = 157U;
    tmp_msg_0.access = 165U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JZIOJRVRHLTMZKDVTARNVFGXHHS");

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
    msg.setTimeStamp(0.31589389796287803);
    msg.setSource(51657U);
    msg.setSourceEntity(105U);
    msg.setDestination(32264U);
    msg.setDestinationEntity(46U);
    msg.plan_id.assign("MUWFKCPEAWKKFQYVTYMHCGBADTKHMDNUHCRBBYXDWYVGQOMPOBRAOTOZLO");
    msg.description.assign("RMFGCFNEPNSTUXAUEEQBUSGYLLGDOHJUOTAXJPORCIQDRWPMVHQEVJAEKQIQZEPFBVSCWOUSFYHO");
    msg.vnamespace.assign("KOLFNGNJWEBUKJSFVLPCIMRHJMYBWZXZXZTHWAUTZIXYJFTTKQXHWNRLZFBHBHTSCDHJCGEVWPEGNDEYTURCXSILUMXZICDGWAIZNHKQNEABOUNDLNCXYVVJTIWUGOLCAVMUBCIVAJSWFNHVQHPQIOTZDRQSMSJAUKYGBMROYROUEEGLFAODWPDXPCYVCGPPGKRFOMPTSVGFZMYEHILEYDKAPKODZQJDBFRALQVSNRAUS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TIXEDGEZDVBIAITZRAGORUDAUIAQOXSPGMJRAIOCIWXSNEOZZHDNGFSYIYBXEKGSVQFTEGJLPJEJQFZZZUGUPMPNVRNAWLKQDVWUJNKBQEUIVFVHFFQVSGKSLDVMSEOVCJXRNLBPPWOYHHMQTEQJCXBHTBYAYOYMMYGAKPKLLNKTVKWHDLUSLWTXMOJNOXLCWQFDBNJMYIWMNHMRHASXCYJFYHUCESIWRCCXGQHZCZFKAP");
    tmp_msg_0.value.assign("VVGNEAOMITWAXPDJXYGQGHWKDBYJEEOEPXLECYAAXNIPSSRDIDAYIGDKYFZNMOSRB");
    tmp_msg_0.type = 204U;
    tmp_msg_0.access = 60U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ELBSRJVCZEOJVVFQSGUHYTSJEASVDHJBWHSFOQLJTVQFJIEKGASCBHWYERRZQPCLOPXRZDGKCVDGNONCLZHFCNUOTVPAWPLMGHTMFODWR");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("EICJQEVNKBLDCLVTMUGIRWPDOLKOVTGONOQTIWYBTBPJUOMXNV");
    IMC::CoverArea tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.5070040522013217;
    tmp_tmp_msg_1_0.lon = 0.7086592190932679;
    tmp_tmp_msg_1_0.z = 0.2405119282970607;
    tmp_tmp_msg_1_0.z_units = 203U;
    tmp_tmp_msg_1_0.speed = 0.24145364369480027;
    tmp_tmp_msg_1_0.speed_units = 171U;
    tmp_tmp_msg_1_0.custom.assign("MRZHRNFRCBEAXSGYDXKUMXBMENDGWUCPWOOCSCPWVOMHEHKKFEWBUFCFZSCPISQUQKWIJHZMQBKRTKZUCSTCNUHGDEUNSWZMBGHRUGZMPXUJOSNLANNFQHLRQ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::AcousticLink tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.peer.assign("LRHOBATODYLWVBOTPTZCZ");
    tmp_tmp_msg_1_1.rssi = 0.6084276783220576;
    tmp_tmp_msg_1_1.integrity = 17279U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("GDIPAKIIYHQTUTJKHRWNBRWWWPXRAFXACTBGOJGORWIXMZGCQFLVEBOKDQCTKIRFAHBMZIMLZMCPLJSVUDGYPB");
    tmp_msg_2.dest_man.assign("HILCOCAIWLMXJFTHFIOLDKCGSQNOBFKMJXLBWFLWXMPPYXZIROSQPSKAJVBVYMSADPQANMBCCYDVTBXUEDWSBBGYZADNHAQNDANILHYGRNIODHKWNUJTUUZFZQNPCFQKMJJOJWFRTSMOQHMFRNGEVLRXGKPCQTJERXZGGESILOETKPQKGYSIUKSYYCAZHMPWREEVVUZJZZMQHFYTBVVHPWUTOYSIORXCGVERWPAJCLZWBDTFIXTUXKDEUND");
    tmp_msg_2.conditions.assign("ZPOXNFFELPUDBAQPYTNXJHIPMDXWYHACBSJJDRXVJRETNHGAJIMMFZOVCMUQ");
    IMC::BeamConfig tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.beam_width = 0.4493852302318001;
    tmp_tmp_msg_2_0.beam_height = 0.43302592624515823;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::ParametersXml tmp_msg_3;
    tmp_msg_3.locale.assign("IGQNWAVBTLQQSGEETLTVXMYIMIWNHEWZOUCJMRLHWANZIBPPGKTUXLUCXQAFUCHNFVCBMDPXIYDUPSRVOKLPKKAZQJSIJGOHSHCRPOSAJRFFMBLUJHIWOTNKVMYNYMQUAGXXESUYIAEDJPYZRDFHHWTPRQFCLAMZTXEFXBBJFKIGNTNLPEDCOGRNBAXOEZDUQBKZQOVYWCSCOVYZWSGCGYSDAJBLTODJEPZJQKRMDFBMHNGDYV");
    const signed char tmp_tmp_msg_3_0[] = {67, 55, 80, 60, -25, -108, -58, 8, 27, -68, 48, -39, 119, 85, 119, -102, -34, -15, -38, -112, -55, 107, -94, 36, 45, -21, -10, -62, -73, -95, 55, -9, 89, 48, 36, 75, -74, -11, 20, 104, 32, 8, 102, -77, 96, 2, 99, 93, 107, -37, 88, -104, 72, 77, 56, -85, -61, 20, 61, 0, -49, -123, 3, 32, -80, -73, -113, -79, 42, -103, 41, -127, 43, 123, 22, -85, -39, -100, -103, 110, 90, 77, 24, -44, -6, -71, -13, 51, -116, -4, -109, -23, 105, 3, 19, -29, -25, 38, 75, -4, 116, 72, -77, -92, -106, 109, 67, 74, 46, 119, 113, 62, 55, -76, 27, 59, 13, 88, -126, 22, -68, 94, -119, -126, 106, -81, 40, -60, 36, 20, 123, -98, 99, 75, -38, -99, 61, 35, -102, 89, -112, 121, -4, 49, -47, 33, -77, -31, -121, -98, -45, 17, -61, -64, 34, -44, -14, -106, 39, -3, 99, 60, 47, 90, 25, 21, 116, -118, -55, 28, -61, 87, -124, 108, 70, 18, -59, 65, 21, 44, 41, -73, 58, 80, 24, 9, 104, 14, -97, -116, 63, -26, -10, -49, -68, 105, -21, 82, -101, -4, -7, 73, -102, 122, -95, -121, 33, 42, 25, 88, 117, -70, -10, 70, 6, 45, 6, 108, -15, -105, 110, 85, 63, 5, 48, -72, -121, 69, 29, -49, 9, -8, 124, 8, -95, -58, -116, -93, 21, 87, 115, 52, -2, -61, -128, -119};
    tmp_msg_3.config.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
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
    msg.setTimeStamp(0.6445640742598733);
    msg.setSource(64112U);
    msg.setSourceEntity(154U);
    msg.setDestination(58090U);
    msg.setDestinationEntity(66U);
    msg.maneuver_id.assign("YXXZRNBZOOLSCURYDRWFELLEZPIMUESJONFZAPVSRGJZQNSWNIAAKVDEMQQTMWTHLTMVQTBRXGTSUCWXGIEAZWGLUHLKDIPTHZHXVOAMBJYXJJEJMFMQPUVPOKZUQGGUQWNDNOTWBOVDCEWHRHYCYSKPQIBDUKRSMAGRRKYMHKJNOSJKZFQUMXPVBXICYEXWIFSDEZFAWPTGJGBNICLCPJTCLGOFUHSDKQNAXOHCPFN");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.5479186705404834;
    tmp_msg_0.lon = 0.401049726704516;
    tmp_msg_0.z = 0.6024221399981379;
    tmp_msg_0.z_units = 40U;
    tmp_msg_0.speed = 0.7731978604892021;
    tmp_msg_0.speed_units = 180U;
    tmp_msg_0.abort_z = 0.9868714738148581;
    tmp_msg_0.bearing = 0.20989717714108314;
    tmp_msg_0.glide_slope = 213U;
    tmp_msg_0.glide_slope_alt = 0.6940019745414807;
    tmp_msg_0.custom.assign("IQHMJSBPZNJICHXJFUEEGDOIHCUSNAZSKGDBBVUKQDKOPQBMALHVHLKSLAOWJZYJSGMABTXYRYKJSYFNDGDYZYECZFNCLTVAOMXLHIRD");
    msg.data.set(tmp_msg_0);
    IMC::AcousticSystemsQuery tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DissolvedOrganicMatter tmp_msg_2;
    tmp_msg_2.value = 0.30724648010027256;
    tmp_msg_2.type = 23U;
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
    msg.setTimeStamp(0.4697030332996194);
    msg.setSource(26278U);
    msg.setSourceEntity(90U);
    msg.setDestination(17527U);
    msg.setDestinationEntity(117U);
    msg.maneuver_id.assign("LCWQSHSMBYOZGOLCNBQBCBEWWSHKIGMZQVDSFGPKIJPOLOPLXNSNTVCDYEXTSNWUEGQVEICRBHYTVVPHCOAXDFEPFHWIJZGREATNFKZYQPZXMXDDWFNDLUBEMXFJKAATJEBTLYHVPFJMZFUIMIODCAVQYGJUILAWXJRMFLIRGBZBOKLDURQNTRUOYZJJQFEUXHAZWDQTI");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.3184630936531998;
    tmp_msg_0.lon = 0.47808975030149203;
    tmp_msg_0.speed = 0.1668828313546904;
    tmp_msg_0.speed_units = 96U;
    tmp_msg_0.limits = 37U;
    tmp_msg_0.max_depth = 0.6976560788634036;
    tmp_msg_0.min_alt = 0.0834545466171398;
    tmp_msg_0.time_limit = 0.6248827769654106;
    tmp_msg_0.controller.assign("TBCRSNXKEIFQZVVPXSROSUGHFFSHLMKLBCCVJHGZJXKTBUVOYMJHMERTOWPWFTZHVWAHXBWUPSILULAIYDBQKMKBNYPGRQLJKRKIQ");
    tmp_msg_0.custom.assign("PYPLEDCXVALSTFMR");
    msg.data.set(tmp_msg_0);
    IMC::RowsCoverage tmp_msg_1;
    tmp_msg_1.lat = 0.7437813643589418;
    tmp_msg_1.lon = 0.5591122678890185;
    tmp_msg_1.z = 0.4785433768237488;
    tmp_msg_1.z_units = 240U;
    tmp_msg_1.speed = 0.10705647124120687;
    tmp_msg_1.speed_units = 54U;
    tmp_msg_1.bearing = 0.90312280900073;
    tmp_msg_1.cross_angle = 0.7941459484986243;
    tmp_msg_1.width = 0.2871461798562277;
    tmp_msg_1.length = 0.5254445499839212;
    tmp_msg_1.coff = 213U;
    tmp_msg_1.angaperture = 0.826219771509284;
    tmp_msg_1.range = 13386U;
    tmp_msg_1.overlap = 102U;
    tmp_msg_1.flags = 222U;
    tmp_msg_1.custom.assign("NQONCXSOJKGEAQWFORNNZHFOPOGBPUUYLHYTCPKPMHIYDQUSVXYMOLMLHLZAZASA");
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
    msg.setTimeStamp(0.1461982440451256);
    msg.setSource(38502U);
    msg.setSourceEntity(134U);
    msg.setDestination(37986U);
    msg.setDestinationEntity(134U);
    msg.maneuver_id.assign("RPZYPCEXUEAMOJXLIFQZWLXYYEPRMSHFGCVSCHZDYAYWKFOBUUHKQGVSCNSTIYPDZBSDOBYJUNXVHJKPSXFVEAHZSAKKKHZXCTDCONWPAZUJJMXHUQFTIPEBAEOTGTRBIMRWEZNVBAKVHMTVUWPUOFACAYSBMVIDDBTMOGDNLLENGNLOBCUMBVTLSFTQDJRDHPLGXMJNEFJGFVLF");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.6450014284616975;
    tmp_msg_0.lon = 0.2737445456042352;
    tmp_msg_0.speed = 0.22914105359030779;
    tmp_msg_0.speed_units = 203U;
    tmp_msg_0.duration = 53937U;
    tmp_msg_0.sys_a = 57966U;
    tmp_msg_0.sys_b = 28886U;
    tmp_msg_0.move_threshold = 0.1583521539189372;
    msg.data.set(tmp_msg_0);
    IMC::GetWorldCoordinates tmp_msg_1;
    tmp_msg_1.tracking = 36U;
    tmp_msg_1.lat = 0.5236172261418433;
    tmp_msg_1.lon = 0.8299459287020505;
    tmp_msg_1.x = 0.7087603491675916;
    tmp_msg_1.y = 0.8603798007105821;
    tmp_msg_1.z = 0.9847392678081232;
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
    msg.setTimeStamp(0.6468469143359086);
    msg.setSource(55467U);
    msg.setSourceEntity(103U);
    msg.setDestination(3441U);
    msg.setDestinationEntity(74U);
    msg.source_man.assign("CCSFGKUQLVUSGVEJTPQBEWORBQASOTZLHHIIHJDBLFWXTBEYMYXNNYWPLCNIAJSOZEDBOTDWUGCJHUWKAGTEJIQEGPRUKSIMRATUIXHZSKDEESYPWKKEQLUYCPDMGZFLDSBLWMOVGDQRWFQCZIXZOKPRFTVTNFLMFANYATGMPYDAXFUNOCJBAPNRVXYZUHMRJNCQYXBKQXCXKLVJZRWHJDVNSIBYNVGIOHJMKWTQXCP");
    msg.dest_man.assign("YDRMMUCFGYXEPJQEEWHSGMADTJULWIYSYSTOWVNRTFDZIVCLCXOECBRLEOXVNBEMFHOGHZHGJVMKUQVOKWTKYXXIPFNSEFADONHJLQTPXTFQEVREGFDWUQQVRMLLUVZHNJKAUHAPTKASASRZBPCQGGRHQRJLUEPZLGCIHLN");
    msg.conditions.assign("NDHTWPFFPAJZDOCVWEXOPIUNELAMVDGDZAYWVYBFBLZZYKTAETKLYGTNGE");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 3317779396U;
    tmp_msg_0.messages.assign("KIFRCJBQSAVVPYYREMQPRVFRACTRORVOVKTFYFAKIZPBLPPSAAGMKGKTMRLUWLGQBLFLZJSJZDZOMWGTOECWYVRWEJSLDMNGXFCBZGWUWHQAUNHSEOJZLQNJXDTCXMDXWKCILIILUPKDYUHQ");
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
    msg.setTimeStamp(0.4297399964141505);
    msg.setSource(17926U);
    msg.setSourceEntity(185U);
    msg.setDestination(14099U);
    msg.setDestinationEntity(187U);
    msg.source_man.assign("JPVSTCYNXGCEZZWGVQBUXRLZJVFJKFDBVANMPIFAZATKKFLWSOCLOMOHYQRDESHQTUIALQLFODCNNICHPHCYRRWPQHZUNBEFIQYDMMEZRPXNBSYDAAULYWDPXOXTYXK");
    msg.dest_man.assign("CJXUVLRQHHQEDBFZZEBMUIQSGPHNIUSGYBECLIEOXPYJABBVKHFDMXLGVBDOKSNODURHDDQCMHWTYOSXFZMPAMRJRPEKAOCJWZLCVYWYBTGUPAPSFUHXTYVQSYYUTJJNFNIBGOCMOWAEYBPRRRXWUKOLFNNSNLRZXMWXECOUGTMZWMSQCPVDNLIFYAKIQ");
    msg.conditions.assign("YEIPBTOGMHGSGLTVFTTBGROLIHHVQRSUZHAZNLRXKJHPXNIMGJVNYCCILRYCXNVTHNRGYPYWJPKXWUQMELOKFJOEBKS");
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.04954049359241597;
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
    msg.setTimeStamp(0.972115956538424);
    msg.setSource(51466U);
    msg.setSourceEntity(150U);
    msg.setDestination(3879U);
    msg.setDestinationEntity(70U);
    msg.source_man.assign("QSEBLHGNHRAAHJIIUBKUVQRVXMPYYIFJUEKQJFSZVNDQZTZYHKMDNMZTRTGMNMZSPYCSJOQSXALLHCISEUJXGDSYTA");
    msg.dest_man.assign("LNDORXLQGEQUVZMIWUPHUJBEBWSVFHQBUWUBMRDIXGXOFISGGIEHERFFIKYAH");
    msg.conditions.assign("AJYGEMFSSUKGCVLGWKCRFCIQXWOLRLMCSOJOTELYEXDIHQBYZAGRJKBYGLBITXHZUUKXKJHIYIUAYKDKOLWLSRAUSRMFZWPZDXNBSOZZHEESNMAXVXZNVMMHPJKTFGQLVRPQGETNZOFQSEZVMCUTNPVMNCNCBDMJXHJIHHOPPQYBIYELXGWWJHAUFNZPNATLUBJSWESIVWWRECGGFVORPIDQQYMIUNDOYTBAJOXPKCATAFHKDFQWDF");

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
    msg.setTimeStamp(0.34777177956260286);
    msg.setSource(60637U);
    msg.setSourceEntity(72U);
    msg.setDestination(6333U);
    msg.setDestinationEntity(148U);
    msg.command = 99U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VEZWNJSVDPOSVTLIMYAWIQWCYJPNFJGNPBTDOOQOXVPULXWUQCNGRAUYIKLFXZO");
    tmp_msg_0.description.assign("FHYZYYLGHFOBZOMSCEMOUYITLULWVAQAPMTZLEWQZOCIMRSCAWDKCLDCYTOUMNXCXHIIGAGDIJVQKHZLQCEPGXEVHFDRYIEGPKXCWHAOBPBVUVNZTFRNJVIDWWWNJELDXNAMPEDESZBCVLKSNGZHSZJFSEYTRSQPAVPKDKFSHAMTSJJ");
    tmp_msg_0.vnamespace.assign("ZZRWEZZLFPVGJNKSYISJZWHFVEJPDAVAEKVDRFPUAXQIOPICVTZVOCSYDHATHWXZPXQIDCEAHQQICOSHRRBCRBWNMTEUARYALCAVEFWGYJGNHHONYNFYJPLGAISHDXBPFCFKTPWBILENMHLTRUCOLTSOUUKVBUXXWMBXXRITGFNGMCQMCWKSDDXJTUSQMQLGJVYTJEYDMSQYNGRRKBKXUQOLWGMUNEZIOZMKJGZT");
    tmp_msg_0.start_man_id.assign("ORSJDCHNAOWZCMEJJXIBGTUTKPZDNOKXNEJORPXIPABYHTKRVWGFTHNNESDJHREKEDQSLAVBOZCWMYRLZYQJGDIWVJDVZAMZBMFXUEAZLISTVCCATASIQSPFUYUERJVGRQTEEKNYKOLVHHKSYMWGQSFFMXFIYWMNWYZPMLLDPULVIFFLNQEQXBLXPYXFCDBWLQJRMG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("MQMJJJYKHAWDWILV");
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 14226U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.21285991938620374;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.7704397275686493;
    tmp_tmp_tmp_msg_0_0_0.z = 0.40636913659676677;
    tmp_tmp_tmp_msg_0_0_0.z_units = 12U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.5508756843658004;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 160U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.47923060419923436;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.5095436039451489;
    tmp_tmp_tmp_msg_0_0_0.width = 0.29000643032498674;
    tmp_tmp_tmp_msg_0_0_0.length = 0.9179259403750611;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.4374410821866601;
    tmp_tmp_tmp_msg_0_0_0.coff = 49U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 92U;
    tmp_tmp_tmp_msg_0_0_0.flags = 103U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("BDECNSTCUMZANDDUVGHZAIHZMNQPRMOKCREAEDOWVGRBQSYRPAHFAZWOGVVGKXUJBVFBWTTOPLJHYUAYVSCTSJMDUHPICKWMMUSYORMOXKYFQITENWEQLMCXICBPSKGFJHMPRFESJZFJLZZASTBLQTLJHDTDIL");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::FormationState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.type = 51U;
    tmp_tmp_tmp_msg_0_0_1.op = 205U;
    tmp_tmp_tmp_msg_0_0_1.possimerr = 0.43619343275322897;
    tmp_tmp_tmp_msg_0_0_1.converg = 0.9100261090441158;
    tmp_tmp_tmp_msg_0_0_1.turbulence = 0.7190112060826118;
    tmp_tmp_tmp_msg_0_0_1.possimmon = 104U;
    tmp_tmp_tmp_msg_0_0_1.commmon = 212U;
    tmp_tmp_tmp_msg_0_0_1.convergmon = 63U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Rpm tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 8697;
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
    msg.setTimeStamp(0.7430837842792044);
    msg.setSource(64095U);
    msg.setSourceEntity(181U);
    msg.setDestination(42315U);
    msg.setDestinationEntity(39U);
    msg.command = 9U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WVJGHSVRHJMPLDNCTHVBMQPYFYIVAPJEMKWOVEAGFCPUSTPIJCOJXSYPDMBRFDKXMAQJUFHKCKOOT");
    tmp_msg_0.description.assign("UIEKRASEDSMQPEQGFBVQAVJGEWKXROTWPAFEYHHYGSXMCCCXMMCHQNHOOHKNFNBXWGFPVANPQRVVDZSCXUMXBTFBDBTVOGZQMSKYGIFDKUSPROURLWLAFPZWFYYCREGIAJNLDYZZUZNNTIPXCXEPDZIEFHEOJMMTWYVKUIBBBRJSHDHPSLCCGCYWZRGHTKOXTDVYQJOKLRJRUZBOIADLWQBLLJQINIVLN");
    tmp_msg_0.vnamespace.assign("ZBXDYNVHYOQLISVEHYIAJDBTMCHDIKACZFAXZGVUMQWFXTTQRUMHHAQJMYIVGWOKKAJEDPSFBYBNYTQIQFPLAIKKXNUOGLBMWKWOYQERBENHPXKIXIID");
    tmp_msg_0.start_man_id.assign("ZKUGQHWARYRPICFFVFDCVWVXIHMQGZNNRVEDRCBMLRWOYWDCKZQZEG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("RVDZARYNOJFDQUKJM");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 54044U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("XBYQRTKDSQBRGYBUIFSEWAGEWZHSWPQEERUDHZVUCTCXOIYLHCXEIODZDBFFWVPDAQZVEYLMNGLNZQGWMUFKAEOKGOPZWMCYUUKVRJNHNXYPIHBHHUYFGTFOTSUMMIBAIZNKNPTCOQXJDJTHXDUBNJRAKPRGCYEIHKJNKKZFTRVMXUGSRMCONWEASTQBMAINFQLBBKAYVIJOFCXLSPVGILLDJRGHFXRMOTWDSOWA");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::GpsFix tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.validity = 31048U;
    tmp_tmp_tmp_msg_0_0_1.type = 254U;
    tmp_tmp_tmp_msg_0_0_1.utc_year = 32951U;
    tmp_tmp_tmp_msg_0_0_1.utc_month = 162U;
    tmp_tmp_tmp_msg_0_0_1.utc_day = 112U;
    tmp_tmp_tmp_msg_0_0_1.utc_time = 0.21001523264936683;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.369579858971825;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.6928098340216197;
    tmp_tmp_tmp_msg_0_0_1.height = 0.3784074544573388;
    tmp_tmp_tmp_msg_0_0_1.satellites = 63U;
    tmp_tmp_tmp_msg_0_0_1.cog = 0.26142785917390265;
    tmp_tmp_tmp_msg_0_0_1.sog = 0.22230396337268354;
    tmp_tmp_tmp_msg_0_0_1.hdop = 0.1984546609173261;
    tmp_tmp_tmp_msg_0_0_1.vdop = 0.0666310188829693;
    tmp_tmp_tmp_msg_0_0_1.hacc = 0.3070817049429113;
    tmp_tmp_tmp_msg_0_0_1.vacc = 0.9012829504241283;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::GpioState tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.name.assign("IVIZYOEYFZDMNDYIOQUIHPDCIJMZXRMAEYKSJYMQFHEOUBHSNSIUXESXDBEZCRBYDXAJPUQQWDWFVMZJDZKFTVJQNWYTXAPLKBLRURVCGFVXUMHQNWJNTEBNQKJOSJIAJGGSTKGGQAPCNASUCPYUMVIFHLZCIOTZFGLNHVLFLNDWTRPTNKVXWJPHRKHZI");
    tmp_tmp_tmp_msg_0_0_2.value = 199U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WUBMGIMAOUFZYCIDISPZQUTOERQDIOAMPOZCSQNFVLAKUEWWBERGPZFJSDCG");
    tmp_tmp_msg_0_1.dest_man.assign("RGTFSUCYJEJKOOLNFHOLRQAPCFCJZQQCMOBNMZZUTGYENELUSDTJWXKYKGLAGWXRGWYELVZ");
    tmp_tmp_msg_0_1.conditions.assign("QJOIXEMCWUCALFSNNMKXIQGPLBZJBAGRRAHONJQHGZEJKEATYAEPWQWRCPNDCKSDVTXUTAMNQYYUHHJXBLXDMCGINTEOFVMKQMFZHLRYSALYFHDZQYIGJGFBQNRYOWOTXVTLVUCRASXIODBBLAWUPK");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::StationKeepingExtended tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.7204761507636382;
    tmp_tmp_msg_0_2.lon = 0.5679496053659618;
    tmp_tmp_msg_0_2.z = 0.0019498405009178432;
    tmp_tmp_msg_0_2.z_units = 198U;
    tmp_tmp_msg_0_2.radius = 0.6273355160329996;
    tmp_tmp_msg_0_2.duration = 60059U;
    tmp_tmp_msg_0_2.speed = 0.7293604507525704;
    tmp_tmp_msg_0_2.speed_units = 158U;
    tmp_tmp_msg_0_2.popup_period = 51525U;
    tmp_tmp_msg_0_2.popup_duration = 32877U;
    tmp_tmp_msg_0_2.flags = 39U;
    tmp_tmp_msg_0_2.custom.assign("HPBYHPYMVZZTETVTHQMQAL");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.6439901639198325);
    msg.setSource(48731U);
    msg.setSourceEntity(132U);
    msg.setDestination(8908U);
    msg.setDestinationEntity(235U);
    msg.command = 61U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IEBBPCKQJAJINEWSDEPWUPANCDNJTBTXAIPOUVQCQUGMRGNBZXENYKOLZYYGSZXPGRKHQFZEYCFSBNRJRBCLUODIQQXFTMIUDMNFHJMPXOXRQYVWHLMYQMAX");
    tmp_msg_0.description.assign("VHMVEEHZQIHTBYVUSDLKRZNRUWOGBPXQIBGPYL");
    tmp_msg_0.vnamespace.assign("BWPELDSQUWILJYNVSACLYGSCNGOKRUWMXUSNFXVSYDXCSVNHAMGCZOTYRAFSANDTAVJNNHZHIFFMWFHVXFYQVSWMXHTNPRPZRBQXYUKPLVXGLBIAKPRKDPEDGOZVBLTKEKGBBRITKUZMJEZHIAOPNBQPMDLUKYGGHUQEACLXBLQPGHJFBRIUDKCYVVEWTGOKMWFEAOQYQQFQWCSNJOEMRZWYXSBRTFTWIEUCOUIJMDIRCZTOHL");
    tmp_msg_0.start_man_id.assign("APYGWIWXXNUHOVLDTIGCLCXATLJYDUAZUIKCPAYWNYKGNPCIRAHOBTKWHDBXRFVYVZZWQEDBRODHEABMISEVGENMPSKFFNHKYBFXHLCVU");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("CYPYCRYOXGGWPDNJSCOOIISUMMIAXUTSDZXAWPSRKQWVNTHNEJXOIVCZLEGAHUPWABCHNLZLKRKTWESGPVEUJENMXMDQDNJAOZLMUBDVNULZJTDEWMPHXOCZKVHKFAGDRFRSRGFRDBHZNKSKHBYQCSOI");
    IMC::Alignment tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 42866U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.3353751314144433;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.921797310253047;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.334791828127605;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 167U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("UZZELDXRLEWKLFKLUJYEAACYMYZBYGEGPJNBZVCONSQLWGSEYNUKAIDREODPGXMZZOZAGLKADWXCUKFGYJHY");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::AirSaturation tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.7597671280757521;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::DevDataBinary tmp_tmp_msg_0_1;
    const signed char tmp_tmp_tmp_msg_0_1_0[] = {27, 30, -63, 63, -34, 45, 111, 27, -100, -66, -83, -12, -61, -104, -122, 36, 12, -21, -38, -108, -85, -25, 54, -94, -50, 95, 77, 105, -18, 48, -93, 99, -6, 62, -47, 25, -122, 5, -110, -92, -36, -2, -12, -95, -4, 43, -66, 124, 90, -78, -22, -51, -103, -55, 14, 46, -15, 5, 77, 71, -9, 6, 99, 4, 61, 105, -127, 109, -85, -72, 104, 48, 50, 126, -93, -84, 89, -100, 106, 24, -85, 118, -79, 97, -12, -5, 93, 76, 24, -24, -47, 55, -116, -103, 58, 12, -40, 125, -100, 1, 111, 54, -124, 115, -64, -117, 19, 25, -50, -122, 57, 11, -121, -127, 3, -126, 59, -29, 29, -44, 34, 44, -8, 36, -62, 124, 6, 49, 123, 86, -25, -18, -10, -26, -112, -74, -87, 82, -109, -91, 81, 9, -87, -87, 110, -115, -49, -114, -25, 45, 79, 59, -3, 59, -32, -93, -11, -92, -5, -64, -85, -24, -7, -8, 25, -120, -93, 59, 93, 68, -96, 102, 53, -60, -82, 99, -26, -53, 61, -62, 115, -123, 122, 90, -12, 81, 7, -51, 81, -96, 59, 2, -109, -55, 114, 86, 30, 48, -98, -56, 35, -71, -81, -66, -39, -120, -48, -4, -24, -19, -22, 26, 117, -27, 27, -73, -78, 37, 115, 40, 29, -32, 122, -91, -17, 126, -88, 32, 52, -29, -62, -10, -124, -124, -4, -84, 10, -4};
    tmp_tmp_msg_0_1.value.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.49643070955586466);
    msg.setSource(12389U);
    msg.setSourceEntity(241U);
    msg.setDestination(63957U);
    msg.setDestinationEntity(56U);
    msg.state = 211U;
    msg.plan_id.assign("OTYTANBTAHEWODXVHZUZDZPCZUJBNNGZRQHRMQVDOFYLRSEAQKKVVYGBVGPZJISRKUMQPBKQJTWUZPYMWMLRNEZIXDJUOGWCPNMQXFSCBTDAFECDCUVMKNGPFEBNKVLPHMEYQTHNAXU");
    msg.comm_level = 173U;

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
    msg.setTimeStamp(0.7053639190169998);
    msg.setSource(63682U);
    msg.setSourceEntity(127U);
    msg.setDestination(41299U);
    msg.setDestinationEntity(7U);
    msg.state = 225U;
    msg.plan_id.assign("SLDBBQFGWXDVSAKHCROVPTJNAQCRCWMJQVKOUVDUBENTCJUXVIMZBFGMUNOSVARUDWOZNZWPEOBUHASBSBCKKZKDA");
    msg.comm_level = 77U;

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
    msg.setTimeStamp(0.9249080978573602);
    msg.setSource(36192U);
    msg.setSourceEntity(160U);
    msg.setDestination(54163U);
    msg.setDestinationEntity(210U);
    msg.state = 91U;
    msg.plan_id.assign("FWIADGHEWVJGNDAJQFGPSJKCBFMMTQBJLTVFOKRBJRWQNGMXOJHIUFGCAKAZLCKGKRIVBKYWDBOTETLUSMVHBCPNVSXICUQNRQCPGRYQBHDNMZUOLCZFQXXQSNGPSTVZMDNEJTDISUJILMPAOTHADUVHUDQTVRBIYLAMSTEHCXYFOAFTLZSCIAYXPYZGZBKLNP");
    msg.comm_level = 240U;

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
    msg.setTimeStamp(0.9274519232122975);
    msg.setSource(52423U);
    msg.setSourceEntity(141U);
    msg.setDestination(27734U);
    msg.setDestinationEntity(67U);
    msg.type = 126U;
    msg.op = 176U;
    msg.request_id = 13822U;
    msg.plan_id.assign("NZFTJEFYHRAHWOJUUIMMVPHGZALZYVOWDJRGSKQEBYRGJMSENMJORDNFOWB");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 1995U;
    tmp_msg_0.lat = 0.9849801725652877;
    tmp_msg_0.lon = 0.03926188959883026;
    tmp_msg_0.z = 0.8071554587573678;
    tmp_msg_0.z_units = 1U;
    tmp_msg_0.speed = 0.9002572669759085;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.custom.assign("OSKPOOAOETIIPUDGISURDZLJRNBGSAAXUWLHQGICYRZAXROMLRBQKXCIXBECXJSCFT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OVJABCCWPNRYYDICNNOIVMDRFKXDUYTXBYMQSKAYTXCHFVNWZ");

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
    msg.setTimeStamp(0.8801194590022688);
    msg.setSource(23424U);
    msg.setSourceEntity(177U);
    msg.setDestination(57283U);
    msg.setDestinationEntity(188U);
    msg.type = 55U;
    msg.op = 27U;
    msg.request_id = 62736U;
    msg.plan_id.assign("FBJZNAJLFNFDUQWNSYAXCKJYYEIBSNNGUAFBLNYRKVHIWVSZULGOEKPTKIHOTXISOCVQFOKVCIGGAXEOYKPMYDJDNHXWIKHWKIZFQJHTSNCZPQRCBVIERHQAEXBXHZDETVLHQZSTAVDLCUFBO");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 76U;
    tmp_msg_0.tas2acc_pgain = 0.9212196163719746;
    tmp_msg_0.bank2p_pgain = 0.27561898399412343;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FEMHTTGWZAKIGVITJDCRPVBHLCKEHQCNLZMUZRGYWDUNRKNWQTSZOYAJIPWBTPMXAYDIDRSLMMSOOSSIKTXKSPVFNBQBOQFPNPYZGZTRSJFIVAVTFHYSJRWPCMAUTUUYLCOWLMXJRRNJEWLBENNKXHYCCZIADJ");

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
    msg.setTimeStamp(0.538948528190915);
    msg.setSource(29501U);
    msg.setSourceEntity(206U);
    msg.setDestination(9538U);
    msg.setDestinationEntity(40U);
    msg.type = 205U;
    msg.op = 177U;
    msg.request_id = 30660U;
    msg.plan_id.assign("UDTLAYFCQRHLVYATBYFFWHMQZPVNOILZQZXGGPWDSOPKYUGQDOWPWURKOYFEHYGNJZMISVNCDJHJNVSRBECBTVXRWFMKLQTDZCECHTECVYIMAIEKAPRRLBWXKSNUXXPMXJPMBZTZQHBDMDCAIGGWCNYEBGOJTEUHXVSRONQABUCKUDAAGWOFXLZJGCFTONPQRGIBSVTWBFTERLUJZMMDRYMSUSSEJQUDIFLIVOXPKJLYHO");
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 63U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7380737809853881;
    tmp_tmp_msg_0_0.speed_units = 75U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.020921290881448562;
    tmp_tmp_msg_0_1.z_units = 184U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.020261688835383596;
    tmp_msg_0.lon = 0.1561541488113194;
    tmp_msg_0.radius = 0.8740589794002922;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FTBIHRDJBDXIBYYRLWZIWMQTZIQLAPUFQENIARNUXREREIGOXVHWMIMLSFALGDSYUNGTCMSNKEKUWNBUPDVYBVHIKCUPVKAHZTCOFCSQQGHGFKTWAFNTJYJLBUXEMWLEVMKKVWHNHJEDQYIQXVMGOZODPPRXUGZADICGPDFRAOKPWJKPTOQGHXWYRBFLBFVXXAMWCRJZSTOJKZSLUOYJMQD");

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
    msg.setTimeStamp(0.7475966054319324);
    msg.setSource(55605U);
    msg.setSourceEntity(52U);
    msg.setDestination(59825U);
    msg.setDestinationEntity(34U);
    msg.plan_count = 36774U;
    msg.plan_size = 2628216164U;
    msg.change_time = 0.9121399998803629;
    msg.change_sid = 27082U;
    msg.change_sname.assign("EDNNOQJOEXCKPBQMDHSGVFTCHJGCGDICKWDVWXLVZWOUZOZSTCENHEBISARLTMIMCWZARRCKWGKVOEYEWURVQRTKMYPUQPFRUTUHODJVNQBQZOFCPPSLIJQATSTGYXSMYGXLBIHHDMSTENWSXOAAYXRZFN");
    const signed char tmp_msg_0[] = {58, -54, 44, -57, 104, 14, -78, -116, 0, 68, -42, -4, -18, 19, 2, 125, 51, 3, -46, -12, -31, 26, 2, -71, 18, -91, 126, -124, -60, -114, -65, 115, 73, 46, -76, 61, 31, 101, -10, 45, 31, 19, -46, -107, 116, -85, -126, -62, -57, -96, -58, 13, 71, 112, -44, 98, 1, 73, 9, 106, -72, -57, 105, -67, -102, 100, -82, 126, -59, -117, 2, -112, -118, 5, -96, 84, -11, 74, 121, 2, 69, -38, 104, -64, -7, 110, 74, 73, 10, -46, -41, -112, 124, 82, -80, -10, -103, -23, 30, 5, -59, -59, 26, 116, -69, 32, 125, 97, 8, 69, -73, 18, 80, -32, -60, -74, 96, -41, 1, 104, 56, -22, 117, -3, -62, -106, 32, 90, 56, -101, -55, -124, -67, 106, 39, 29, 26, 94, 55, 21, 103, 79, 8, 40, -15, -121, 40, -68, -63, 93, 111, 46, -49, -10, -69, 1, 50, -125, 70, 50, 86, 105, 103, -40, -112, -5, 38, 119, -28, -17, 56, 33, 6, -56, 5, 34, 22, -29, 26};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IUFDZMOKIZQEJTLYOYRILIHAAGVSGZWIUQPELLDKIHMBTTPPVYQEWSNSCPRUMZWDNW");
    tmp_msg_1.plan_size = 39559U;
    tmp_msg_1.change_time = 0.843157940763728;
    tmp_msg_1.change_sid = 699U;
    tmp_msg_1.change_sname.assign("ZJCGXDLGPUHELIAXSWDFSBMOSKYKABCPAZEFSVQEMFIFQARMNNGLBKOTLLSRBIQBCEDJPWIHRLUSVADOUIRROYQLIDFKOECIUGKIHCJXZWNUTJAMZXOMMOTYXEZOQICRYQCJYVMLSDHOTQVTRXKNRKP");
    const signed char tmp_tmp_msg_1_0[] = {-128, -47, 75, -118, -20, 97, -105, -97, -21, 65, 7, -56, -127, -120, 113, -10, 108, -1, -100, 121, 70, 105, -23, 123, -14, 35, -51, 113, 120, 56, 117, -9, 1, -62, -9, -77, -84, -2, -48, 94, 17, 45, -16, -56, 38, 108, -109, 120, -59, 23, 68, -116, -107, -50, 84, 1, 61, 13, 0, -75, 79, 118, 105, 107, 45, 14, 73, 25, -90, -73, 3, -34, -85, -62, -125, 123, 0};
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
    msg.setTimeStamp(0.819364322884263);
    msg.setSource(27103U);
    msg.setSourceEntity(70U);
    msg.setDestination(32546U);
    msg.setDestinationEntity(186U);
    msg.plan_count = 32312U;
    msg.plan_size = 1401103114U;
    msg.change_time = 0.15194180495084375;
    msg.change_sid = 27603U;
    msg.change_sname.assign("PMYCJGGBSKWEVFLSINTNERQMLOYHWQJVRTPVEBNYRDFFOVCAHYMUSFMLXTHCTXZOYVPHCNGGZJRLBIDFOQLDTNUWJQTTYOIJPKUUGORLBZBPSUBQMQPSGCPKAUDFCCUIVMULAYRDFHDZWARKWNJBSDUYWQUDEPXQAVZKXNJVEDVINEHWKRITKRAKMQMXKZSNXNEPGZCFVHKWEOZBXTMIYTXGGOBIPMJBJDGHHCZSZYLQSLXRCF");
    const signed char tmp_msg_0[] = {-75, 62, -72, -37, -58, 0, -126, -117, -24, 18, -120, -81, 77, 21, 121, 102, -52, 41, -75, -63, 4, -110, -39, -123, 66, 104, 87, -58, 25, 26, 113, 5, -101, -111, 13, 74, 44, 126, -10, -102, 93, -110, -115, 43, -19, 31, 17, -40, 38, -48, -124, -18, -12, 8, 104, -104, -74, -112, 27, 68, 74, -101, 121, 27, -36, 3, 106, -64, 96, 93, -120, 51, 58, -78, 78, -51, 104, -128, -97, 101, -90, 40, -88, -22, -83, 36, 88, 1, -28, 94, 119, -16, -50, -20, 87, 120, -55, -111, -124, -5, -71, -10, -94, 116, -49, -3, -125, 30, 66, -116, -2, -3, -116, 32, -86, -74, -79, 67, 51, 0, 3, -63, 17, 9, -4, -85, 0, 47, -14, 73, -65, -125, -106, -125, 19, -50, -28, 92, -110, -34, -21, -103, 125, -93, -96, 82, -114, -11, 76, -40, 63, 15, -27, 42, -79, -74, 28, -5, 119, -60, -68, 63, 126, -100, 23, -45, 98, 46, -108, -124, 46, -12, -31, -7, 41, 7, -35, -99, -14, 98, -112, -127, -33, -1, 87, 21, -122, 71, 98, -98, 122, 104, 69, -40, -57, 100, 0, 37, -97, -89};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("BMDSATNENQAYRU");
    tmp_msg_1.plan_size = 5486U;
    tmp_msg_1.change_time = 0.7262980073558689;
    tmp_msg_1.change_sid = 12100U;
    tmp_msg_1.change_sname.assign("WTBQGDDJOMYEMEARMFVDXVGIOZSBDOOBSJBCVLVMGSQUOQZUDHZUFSRIKIK");
    const signed char tmp_tmp_msg_1_0[] = {-126, -97, 8, 59, 26, 57, -7, -18, 26, -71, -98, 16, 87, 11, 47, -63, 46, -100, 24, -17, -85, 91, 118, 95, 113, -79, 50, 123, 69, 82, -125, 123, 28, 23, 66, -20, -86, 26, 14, 75, 110, -75, -116, 23, -50, 37, 1, -108, 32, 126, 37, 36, 34, -11, 68, 92, -27, 63, -22, -52, -57, -102, -45, -49, -35, -17, -29, 45, -65, 115, -120, -47, 53, 86, -7, -128, 93, 51, 90, 1, -50, 98, 65, 29, -109, -61, 91, -45, -15, 100, -75, -47, 40, 60, -83, -50, 83, 27, 14, 76, 61, 80, -1, 26, -17, 43, 36, 23, -85, -61, 37, -123, -97, -62, -30, 94, -90, 67, -70, -117, 44, -55, 96, -64, 113, -72, 125, 97, -114, 32, -28, 21, 62, -125, -46, -61, 118, -117, -80, 18, -124, 101, 94, 123, -3, -75, 39, -94, 35, 21, 86, 22, -70, -37, 96, -110, 105, -42, 64, -76, 91, -37, 18, 47, 8, -124, 48, 68, 26, -61, -123, 110, -112, 84, 100, 14, 67, 21, -114, -72, -53, 9, -55, 37, 65};
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
    msg.setTimeStamp(0.3436446139844672);
    msg.setSource(37411U);
    msg.setSourceEntity(168U);
    msg.setDestination(31238U);
    msg.setDestinationEntity(106U);
    msg.plan_count = 6719U;
    msg.plan_size = 1283700746U;
    msg.change_time = 0.24179547873563834;
    msg.change_sid = 47487U;
    msg.change_sname.assign("KENJTAWAGNTUFOYAMTTSRPSXZDKDNTAGWWRLPCJYKFHBAVDSTVGVMWCBBVGRHBBEHUNZEJRHDGKAFFRMVVYEXBIQAEIHTEQYWLXEHUBWSMSNRCJKNCPDZYZTRSPZLONPPSDWSCSQDMICMMAGUHDXPJVYUJVBWZDDQCIKJHZEKVHLPQUGOBFAWIFACIHUFOETMLOQLKXROS");
    const signed char tmp_msg_0[] = {-5, -40, 30, 33, 62, 119, -119, -108, -27, 55, -52, 65, -63, 96, -128, -127, -42, -32, -82, 38, -70, -12, 12, -73, 118, -25, 50, 106, 51, -111, 70, -68, -101, 56, 21, -73, 9, 29, 115, 57, 97, -1, -15, -100, -95, 58, -113, -127, -5, 76, -110, -87, 20, 105, -99, -79, 18, 31, -79, 37, -111, 30, 28, 70, 89, 9, 111, 68, 8, 31, -102, 70, -78, 20, -52, 36, 115, 73, -89, -57, -104, -123, 57, -84, -64, -120, -79, -99, -27, 82, -97, 48, 32, -32, 42, -128, 68, -16, 30, -88, 33, 110, -48, -80, -107, 126, -107, -56, -40, -51, 94, -13, 45, -29, 57, 55, -33, 8, 47, -115, 68, -91, -67, -35, -57, 28, 82, 47, 88, -56, 38, 29, -47, 82, 61, 83, 49, 11, 74, 54, 66, -127, 95, -24, 94, 10, -22, -21, 23, -45, -124, 28, -121, -65, -121, 49, 45, -82, 61, 100, -68, -45, -110, -57, 27, 75, -47, -45, -87, 86, -68};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NAJCLKXDSXWRKQJWFBAIFWWQMBRZCGVRJZCPHCCDZVOEEIGZOXQUFNUPUMGKTKXLOMZYEMGGCCLZJF");
    tmp_msg_1.plan_size = 20892U;
    tmp_msg_1.change_time = 0.21936629778172922;
    tmp_msg_1.change_sid = 45872U;
    tmp_msg_1.change_sname.assign("IWHJFNRNTSOTCCBFJQSXGHKZRUAQJREWVEBNPFHGEOYAOPRHMSHSCPUXMRPYYVTCDXKKUPMRZQGYEYBADPQZDYHWXQLSRJLPAZVOWRBWDBXUBHVXOBKXQVULORCEAKDTJMZBPFAIFLSDFBMGQDEFEORGWJULCIKTWJIOTOQZAALZLFHWTGZDPCIXJZVWGVGSIY");
    const signed char tmp_tmp_msg_1_0[] = {43, -54, -7, 36, 116, 107, -16, -85, 78, 61, 78, -94, -107, 52, -12, -86, -55, -104, 90, 48, 84, 8, 11, -24, 90, -70, -91, 87, -64, 31, -105, -18, -89, -106, 101, 97, -74, -88, 102, 68, 69, -41, 31, 44, 75, -20, 82, -50, -84, -112, -123, -38, -108, -33, -73, 6, 43, 88, -102, -61, -90, -8, 41, 97, -57, 105, 4, -41, -76};
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
    msg.setTimeStamp(0.24553360028347126);
    msg.setSource(37413U);
    msg.setSourceEntity(48U);
    msg.setDestination(63558U);
    msg.setDestinationEntity(59U);
    msg.plan_id.assign("QJOISRVESAIEEGRZPHAJRCEXBYYSUCMKBZNATWAENFUHAWWLXJLOUNYRTMIAXMEEPOSYANXBTPRJBFJTPULPLRDOGKGWHGHBQVYKKHMRVLQMXJGJMFCDDNPKITMORFIOUAQULIFGWTXDIUMDZWLKWCDCKGPUBMLIZVOHJQFTYONDCXCCSVVBTQGNVFUIDQOUFJRIPDAKHQSXXPZWNZFV");
    msg.plan_size = 2760U;
    msg.change_time = 0.8583191644267149;
    msg.change_sid = 32369U;
    msg.change_sname.assign("RTTNBBIOIJORLPULERQGOXGXCOSQESQLZQUGFMUBSHAWWQHJFYKJWGSFBPECTKVDNXSBMZNSWWHZUDRCDYSRGGTJHBCFNYXADPVMEMHEAAIVXGIJVDHOXQLHXEBPKWZZYDFRYWW");
    const signed char tmp_msg_0[] = {-35, 78, -54, -73, 7, -114, -37, -42, -21, -56, -113, 55, -124, 113, 44, 91, -47, -51, -79, 8, -11, -123, -33, -12, -20, -121, 30, 11, 30, -79, 72, -56, 48, -102, 3, 49, 25, -67, 108, -27, -78, -101, -79, -94, -50, -66, 67, -126, 63, 80, -101, 126, 88, 51, -28, -13, 27, 78, -11, -1, -10, -51, -99, -74, -70, -67, 61, 96, -31, 79, 90, -35, -79, 53, 12, -111, 24, 59, 40, 9, -112, -42, 92, -28, -99, -95, 89, -83, -40, -119, -13, -46, 13, 86, 103, -11, 0, -2, 24, -98, -18, -124, -4, -123, -57, 71, -16, 35, 92, -20, 39, 37, 52, 65, 71, 46, 117, -79, 50, 19, -5, -39, -99, -101, 99, -57, -35, -84, -40, -112, 63, -80, 67, 71, 15, 54, -82, -40, 72, 75, 17, 60, -112, 7, 67, 126, 112, 42, 126, 95, 65, 126, -29, -56, 125, 23, 90, -90, 66, 112, -49, 24, 69, -98, -78, -19, 44, -106, -107, 101, -22, -56, -88, 97, 42, -46, -36, -79, 72, -123, -8, 55, 97, -11, 102, 47, 110, -75, -102, 9, -17, -76, 113, -118, 102, -4, -91, -74, -45, -123, 119, 100, -48, 114, -74, -6, -1, 40, 81, 35, -81, -18, 19, -92};
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
    msg.setTimeStamp(0.7471394243616115);
    msg.setSource(17574U);
    msg.setSourceEntity(87U);
    msg.setDestination(62343U);
    msg.setDestinationEntity(200U);
    msg.plan_id.assign("EPQDLRUXJETPVHEHTAUCMYWJMNBKLFTYVXSQJYXZMDBIICSOCZRSIPUWIDGNKHLOSGBCABHCWURBWWTNFHAMWVKJ");
    msg.plan_size = 58087U;
    msg.change_time = 0.5948310342160669;
    msg.change_sid = 27554U;
    msg.change_sname.assign("FQRTYPVBIDKQZOKXDZFCIQUIMCBDOTSLRUVEZHRVZGQNYEHDBFBUVWUCFYLJHPFEMLAGSSLBWNVYVQQUAAXKWTDVEGEEPJNOXLXOLJRPXPYZIYXJVNMPSJJDBFXMHHILMOFLOJCRLNTUBMGKOASBQWIFKKFQYCTYZSNGHDCPUCSSPM");
    const signed char tmp_msg_0[] = {9, -6, 80, 89, -64, 66, -5, 49, -55, 10, 21, 53, 14, 101, 26, 103, 126, -87, 54, -40, 2, -123, 115, 87, -17, -97, 94, 32, -120, -94, -41, 122, -41, -90, 58, -126, 71, 23, -108, 101, 54, 52, -80, -123, -19, 31, 26, 103, -88, -74, 71, -16, 53, -4, -28, 101, -108, -75, 70, -37, 126, 113, 63, 115, -43, -94, 80, -58, -97, -110, -16, -1, -41, 104, -100, -125, 85, 63, 122, 36, -102, 68, -90, 97, 53, -4, -120, 25, 35, 72, 59, -102, -86, -97, -32, 95, 39, 114, 44, 19, -16, -23, 67, -2, -125, 93, -60, -3, 12, 57, 99, -64, 124, -57, 30, -115, 59, -51, -53, 125, 69, -30, 55, 116, 89, -44, -126, -98, 18, -105, 18, -19, 73, -108, 12, 75, 50, -44, 118, 12, -75, 66, 112, -103, -50, -100, -64, -89, 41, -127, -74, 52, 29, 10, -18, -87, 43, 27, -118, 70, 119, -51, 97, 115, 24, 14, -21, 4, -111, -111, 76, -107, 51, 103, -25, 24, -28, -70, -1, -117, 53, -96, 86, -97, 36, -75, -78, -34, -124, 3, 112, 113, -56, 37, -24, -26, 57, -91, 121, 50, 5, 25, -106, -60, -57, -112, -55, -42, -89};
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
    msg.setTimeStamp(0.7308421097193735);
    msg.setSource(5462U);
    msg.setSourceEntity(123U);
    msg.setDestination(4863U);
    msg.setDestinationEntity(42U);
    msg.plan_id.assign("AIMYBQNJLJUFRBSRDONQTHOEVUEVESDJNAQUFXXXWBJBPMDMPZGRVFZPWGLRPCXWIMMTNWFIHMTXEDFIUHYZEVSGSGPRVIFEINCDBKPOXZASCBKUVHQBXHLLWSGQTTNISGZASPOBHLUDEOLHOETLMLRJYKQAPAYWFVKCVKNQPQECTUWRUQZJDSEWZYFIRHNAXCKVLYYBZKJCG");
    msg.plan_size = 57992U;
    msg.change_time = 0.8085751572184303;
    msg.change_sid = 14942U;
    msg.change_sname.assign("SSEUGNXZFYYUMJQFJQTONCMWEIRYVQJWUHTRVAFKRQRZJDSCXDAMOIQKMYJCQYZBXEOSGHSHNBFIHZAPYVOAQDTTAFNTRKNMSXWXGEWABYOJMLZLCHIZBPGLXXZVCSWMIGCUWTHIPZRTYVMLKGDAAJONEKVZGDTHPQ");
    const signed char tmp_msg_0[] = {-27, 26, -55, -71, -55, 36, -125, -68, -6, -92, -31, 44, -113, -15, -83, -51, 54, -17, 9, 32, 108, 66, -4, 116, -56, -83, 89, -2, 14, 76, -53, -18, 75, 56, 109, -21, 115, 108, -114, -28, 0, 39, -13, 71, 24, 42, -42, 14, -127, 60, 117, 95, 19, -34, -54, -36, -71, 84, 114};
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
    msg.setTimeStamp(0.05112751695897921);
    msg.setSource(61006U);
    msg.setSourceEntity(229U);
    msg.setDestination(11874U);
    msg.setDestinationEntity(179U);
    msg.type = 138U;
    msg.op = 113U;
    msg.request_id = 49979U;
    msg.plan_id.assign("BJYNPEFRXZROKYMRBNMHMRTHAZHUJGBGWTOAGWOUDHXBYKRRZGCXJVKUOMUNQPGDGOKPDHCDIOKAFICSMJFSLFAMLXCJEUPGNYWMNIVEJYZIJOZFXBNCDSEOCWBBWDKVUUTUYIDTTEWAWTAESBXQEVLCBLPZXZEZCQCUEGYWXSTQPYFIVQQRMVTVQSPORKGANLLHDTQFAFLDXYJSKCQAIIGENRMPPVKHQFVPYSHZJWRDVZ");
    msg.flags = 47107U;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8931136816480226;
    tmp_msg_0.lon = 0.8906205400336827;
    tmp_msg_0.height = 0.9696031485220742;
    tmp_msg_0.x = 0.2111366272824482;
    tmp_msg_0.y = 0.8885880187477614;
    tmp_msg_0.z = 0.345321640254698;
    tmp_msg_0.phi = 0.3234454372825297;
    tmp_msg_0.theta = 0.45238853447992156;
    tmp_msg_0.psi = 0.10930381794296595;
    tmp_msg_0.u = 0.6352105770006294;
    tmp_msg_0.v = 0.2382196607798578;
    tmp_msg_0.w = 0.4971789313262136;
    tmp_msg_0.vx = 0.6859995760564933;
    tmp_msg_0.vy = 0.7267323682556521;
    tmp_msg_0.vz = 0.25243134090079034;
    tmp_msg_0.p = 0.6496263197060581;
    tmp_msg_0.q = 0.027736529679480926;
    tmp_msg_0.r = 0.701486748224804;
    tmp_msg_0.depth = 0.08496430391459586;
    tmp_msg_0.alt = 0.12003322524963134;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YHJLMTFYLSBPFHWUXPDYHNLRCSVVULBWXEYIBQMEZIGQXJZWGHCENVTQSEIXSKOUUQDRQCDKRNHZMRUDZTGAOQDEFGCFBKCIJLLNDSJOQYANSFNPLOOJPKCVTXTZAHMCQKL");

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
    msg.setTimeStamp(0.5030375436915322);
    msg.setSource(2050U);
    msg.setSourceEntity(147U);
    msg.setDestination(43831U);
    msg.setDestinationEntity(163U);
    msg.type = 156U;
    msg.op = 102U;
    msg.request_id = 39711U;
    msg.plan_id.assign("YJFJIIRFLQDMIKFBEZDIBHXBMDHAGCXUHZXMQDWHVRRZZESHKGAQGOVKSGULSFGKZYDHCQMUWIANMBCHWPOVINYIIFWUSXJXZTGSNCWCPVOUWKZJLABUXYYAQYBKBQXJNGVTVOLJLDTOYTWYXUPPURWLBJZKVFQKFRFOTPNTLLLCTZRUEJXKEEAQCTEDCMHRWQVCMSYXGFHAEJNJAMZWAQEKNRYMNTSMPUNOEDESPBDGTOBSPRO");
    msg.flags = 38501U;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.5382801869327155;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SSZTHFHUABRGBKDWZCQQJZVZQADQMJDPPIKPSBFPKFKUGASJCTXRODPEWHYMOZZFHVGA");

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
    msg.setTimeStamp(0.2603225598995934);
    msg.setSource(58210U);
    msg.setSourceEntity(163U);
    msg.setDestination(44159U);
    msg.setDestinationEntity(186U);
    msg.type = 52U;
    msg.op = 194U;
    msg.request_id = 38953U;
    msg.plan_id.assign("UBAQSCPLRTEWBOZSGZEQSZNQITZYKXOQTPUFWARFVGFNJOJWFBXXICJEMBLUNIRHFEIKUSYKPVDYDDLMTNTYUFHSCCGPCCUNKHWKIBMCNDPKIQEQCXHOVDFTKYPOKCWRGLGIGOOPBLVVTFAGEPJXMTCHKHAZNLQNWFXVAELYUQMMRZBBMHONGJVSYVQITSRDJRAAVRAXHDZGWGLLZXDBWWYN");
    msg.flags = 41148U;
    IMC::QueryEntityState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GKPYQWAJOPURKDUCATVNIKQANPUGGMNXRYXZSRTDLSLJDGMYZFNOBDEESTHNKBMBQGQSQCPESUIOJRWZHMYISBAUWSZZGADAJLERCQGIEKIDZOSPCRQXUKODMHHRBTPJVKLHUFLTFYDNMHVTLPN");

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
    msg.setTimeStamp(0.22558919391555132);
    msg.setSource(51690U);
    msg.setSourceEntity(171U);
    msg.setDestination(31465U);
    msg.setDestinationEntity(151U);
    msg.state = 64U;
    msg.plan_id.assign("RAJNXIBLLYGPFZHVJBFYNORWNSGXGIVIUELWWUBPUUEBKFGORSNDCNCESMQKKVUTHKXWEESMNPBKMTHZYXFOOSNFLGAOGLEHQZAUPZYHIKVARDMRVCWKATDXIEWPUAAGMHJNJRFQFMBOIMTTMVZYDDQWDSDMHCDBIRSTP");
    msg.plan_eta = -1051590220;
    msg.plan_progress = 0.9526945834667814;
    msg.man_id.assign("ACNMEXBWVKLDNMFTSETOAVQWJNHZLLDIIHQAFPFSXFYBSRQTKJNFVVUNBYPIAQZMZKNACBLUHHHVGMZXRGSEZNRRYXTJWRSBPIZCUVPLJJOHPOFHDILRJTUKCRJALGDPOYGBAUQQMWWZVYYDUGI");
    msg.man_type = 31733U;
    msg.man_eta = 541487204;
    msg.last_outcome = 77U;

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
    msg.setTimeStamp(0.892697906620641);
    msg.setSource(3409U);
    msg.setSourceEntity(156U);
    msg.setDestination(3173U);
    msg.setDestinationEntity(91U);
    msg.state = 43U;
    msg.plan_id.assign("ZHNQXVEKIOIBTUOFDEGZHPYLITZUBKPSYHSVGVSOPLFIINMDOFOCYACKXNXGXYROXCWLTEBDKOJUEHTVKSJGWRMHRFINMUVZGPSDPGCALYTQKRRKLUHTGRREWDQNLYZAQQFGEBJXJKMWFYVWLZDEMZJNESAACCRRZUIKNWVYJAETSADFNDUBWMUF");
    msg.plan_eta = 2100782137;
    msg.plan_progress = 0.4921651407460461;
    msg.man_id.assign("OGFZDLYEDKNPJRJFTPSLWCZEDFEBYJMXCAIPMDIOWXYHILBWVWJVKYGJBVGYNSW");
    msg.man_type = 4424U;
    msg.man_eta = -673552213;
    msg.last_outcome = 132U;

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
    msg.setTimeStamp(0.7774652876474344);
    msg.setSource(62203U);
    msg.setSourceEntity(183U);
    msg.setDestination(51979U);
    msg.setDestinationEntity(221U);
    msg.state = 198U;
    msg.plan_id.assign("CHMQRYBJHUXWQTXQLTSCTBWIPWZGETATEKTKVGJZMLNPGJYLIRGCORFXEKRSOHEMUEAJLMXUKRHIDSAKBKALRDNYNVPIBOIXRZKSEOGNNHFIWCMVNHFEDFMLGDDYFKTDO");
    msg.plan_eta = -761501053;
    msg.plan_progress = 0.9257949134321047;
    msg.man_id.assign("BQNEJLMODPQJCIGTQMMLBPLSELIEODDTLAXADPVYNUIECLWSBCKPFJCOJNPJVKIQZMRGLHWXRXHZS");
    msg.man_type = 53489U;
    msg.man_eta = 1484509873;
    msg.last_outcome = 67U;

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
    msg.setTimeStamp(0.47055176710857216);
    msg.setSource(53642U);
    msg.setSourceEntity(50U);
    msg.setDestination(54612U);
    msg.setDestinationEntity(131U);
    msg.name.assign("KTMUZLUWURYDVYTOCFSDPKGNHHXJLIOJEBSDFLESBDCKFANWASEQDEKHJYWMUTGMXA");
    msg.value.assign("ZSVNXSYONMSSDBKEFFDVLIDKMSQGOXYYJXNXLUPOAAPQVBXITDCUOVFTXCWHOQ");
    msg.type = 238U;
    msg.access = 19U;

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
    msg.setTimeStamp(0.028898652804564162);
    msg.setSource(53129U);
    msg.setSourceEntity(67U);
    msg.setDestination(55248U);
    msg.setDestinationEntity(197U);
    msg.name.assign("FPGYUIGUKAJZWJQLDKMFPVAZDQDLDFPJWBYMXDCFQAUFOWZXYSHWHQGNEGYQXALGQRNXHVDLHNWLQXMGLZUVNBEGDW");
    msg.value.assign("ISLGJXFOKWUPKWVWMACLWFNZEISIVMZTJBRRGESBGXJBHXUKDYYGCHARIDHTBWNMBZLMTWUEOBFMSIUGJHNAYFHUBVAUOIKRSOPWALJDLSUYMZFMZCPOLGPZKYTXBXZKGVKNYDPPFJLIEQMLVZCTDQMACPQDNCDNPKJTRYLEVQEPXOVRIMFHSSOEUHQUAVZXHEADNEUCQAWQNICTFCREJDTYXGHSLWBOYTXWQDZXNTJIGJO");
    msg.type = 173U;
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
    msg.setTimeStamp(0.5585719790459726);
    msg.setSource(51141U);
    msg.setSourceEntity(81U);
    msg.setDestination(52913U);
    msg.setDestinationEntity(225U);
    msg.name.assign("RZRZTBBQZACMMJDFXAKFEYWUSUTUPNVYDAVYEECQGEESAXNDKVHGSLQUVOEIOYBIBKRWNZQBTUNFXDNBMFISQKMHGLPFWEYLT");
    msg.value.assign("JZGBPKBTFXKVHCCNRQIGAXOKCAXLKAHDFQVONAHIOWZSAUHRFKYGQVMHLMWOPXHTSABZZYLMEKPIJVRTQBNJDI");
    msg.type = 165U;
    msg.access = 58U;

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
    msg.setTimeStamp(0.5325247723188272);
    msg.setSource(58734U);
    msg.setSourceEntity(242U);
    msg.setDestination(54072U);
    msg.setDestinationEntity(175U);
    msg.cmd = 253U;
    msg.op = 187U;
    msg.plan_id.assign("UBOPIPYIBNKVOZJNYWRSYOJLAVKDZBWKEXRJFDGMTHIZTSIAGOLOVQVVUJMEMLTCLTPMYHKBHURXJNGOLPEUNYEXBTWCWYDIUODFNUGRGHNVCUAUSDRXPAYZYLBHLFABRVDWGZAMIKJXRYPEWCGWMSGO");
    msg.params.assign("KJHIWQZECMWYHOSYPMBVXSSMCKEFVJUGNQJWBTZTRWURRAIAIKCPXSHIMUWRPBAJTKTAQVUUZOTNDHVSYV");

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
    msg.setTimeStamp(0.30415032393234465);
    msg.setSource(14815U);
    msg.setSourceEntity(177U);
    msg.setDestination(27297U);
    msg.setDestinationEntity(95U);
    msg.cmd = 233U;
    msg.op = 226U;
    msg.plan_id.assign("XANRSCNPQGQLPNKBKMVPQZUFGHIMNEUFOVQHXDLNVASYEOGOVITDDRZLUDFDYANJJXXYTFAVFCSWFCJEHGHIULXIKFTXVPHOTMMEYDDBNKHWVMBOQRZWSLCSLMCSCXUMJUORHLCWKTGWKLDHQVKHNHYZKJOEOAAJNESXUCILKQEYTGIPCEBSBDUTCJRBTAAVIFFZQISMVMWEDWUMYYRQZPRG");
    msg.params.assign("FXQLMGJBYSKRHWTXMCDSXCCXUWNDRWRPUTPLSSIMCMAHITCIXZXTYMLCBSALHSHGFFEVHAAFEPRHZTMVDFQYSBNVZGOYWOEOIQUKUTMRJLXWIQFOAXBIVNWBFJKCBGCRPXEBBIUCIIFWYCXOVPVZDTESD");

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
    msg.setTimeStamp(0.8679214346428977);
    msg.setSource(57571U);
    msg.setSourceEntity(1U);
    msg.setDestination(35252U);
    msg.setDestinationEntity(202U);
    msg.cmd = 89U;
    msg.op = 234U;
    msg.plan_id.assign("BDGELOBQVHEYFPUWXJFQCOPDJRB");
    msg.params.assign("LSHXTOPJBUSSHQDJPEQXGSKRJCUABTJWAGWRRYBBNCKOUAQSAPQCXUREMHSXLPSVGSYHYIFHFRIOVODIGNZWIBRQNZTVNKQFWLERXVZHF");

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
    msg.setTimeStamp(0.5969631881375947);
    msg.setSource(51761U);
    msg.setSourceEntity(109U);
    msg.setDestination(3188U);
    msg.setDestinationEntity(90U);
    msg.group_name.assign("VXODZLTDWNORUPQKSLHYWCAHBIJXZQYOBUZCTSVWMKWSTKESCXCNLJYFYWQMDAHRHGBYYIZLNNPKBBEGVFJPVBTAUMSTMHEHMQTFSOXWGFRVLDPECQNSTSWXOUMYDLJHNTIZRFCGKDUQFLJPIFBGIEAKMFZIMEBPUWLDPKHAAAJQKEOIVXBQSYREFZUJYMAGLCEZANWINDVVSHXPHCRRNGIZL");
    msg.op = 80U;
    msg.lat = 0.5389700731443706;
    msg.lon = 0.6533997765599844;
    msg.height = 0.9048930876757076;
    msg.x = 0.7659881687996664;
    msg.y = 0.052580283895274804;
    msg.z = 0.2955494325181731;
    msg.phi = 0.3893632981866445;
    msg.theta = 0.056342192225909304;
    msg.psi = 0.06906878372928704;
    msg.vx = 0.31644606721332724;
    msg.vy = 0.19319593745710506;
    msg.vz = 0.2283246735300798;
    msg.p = 0.8733560538284435;
    msg.q = 0.7870237877946624;
    msg.r = 0.3019814732279188;
    msg.svx = 0.3896941503612058;
    msg.svy = 0.810032763442954;
    msg.svz = 0.5320064093605166;

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
    msg.setTimeStamp(0.04587938186299667);
    msg.setSource(63408U);
    msg.setSourceEntity(17U);
    msg.setDestination(65304U);
    msg.setDestinationEntity(120U);
    msg.group_name.assign("HITKSNBTRVDHIMLXAWHYWIJOQALPWVWNKXTFFZRJHPJXJRJFPVHNVAUMEILIPDULMBANBZHZSRCATITBTPBUOJJEAJZLIRVRRYZCPJGMWDNKNPKUGQGQCUEZ");
    msg.op = 147U;
    msg.lat = 0.7391252274403399;
    msg.lon = 0.23720897417153652;
    msg.height = 0.3877952452604192;
    msg.x = 0.3058707108588886;
    msg.y = 0.9925065311357959;
    msg.z = 0.6225616267613704;
    msg.phi = 0.4788184884285799;
    msg.theta = 0.5283315200994629;
    msg.psi = 0.1417127276640171;
    msg.vx = 0.25906391351942815;
    msg.vy = 0.01180374024478359;
    msg.vz = 0.82251359718313;
    msg.p = 0.8451262135320958;
    msg.q = 0.08810887569227122;
    msg.r = 0.05361738913383962;
    msg.svx = 0.8024487756221309;
    msg.svy = 0.27624336919729064;
    msg.svz = 0.41806384897048576;

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
    msg.setTimeStamp(0.09042017462210528);
    msg.setSource(56369U);
    msg.setSourceEntity(78U);
    msg.setDestination(33718U);
    msg.setDestinationEntity(7U);
    msg.group_name.assign("ZXLSFVDDUYIIXLTZKBMISQULATVYNSUBAOETPUSIXYPFNYTMEZCEOQBARTSJGAVHBWETNUSCNGLMCQEKGZJNJMDZDFWVQCLTCWBANPGJXBSNSMLHWFEFJWUKJYCJDWXPFLAOYYTRXQXXYQJRIXWMWVRVGLKHYSFHIEKHKWQRMJRBDECCSUPUKUPHXOZZAWPICGKUFGYKDOVTJDGLHOVQNRVAZTEFGMBO");
    msg.op = 190U;
    msg.lat = 0.34854333569411544;
    msg.lon = 0.736628615395182;
    msg.height = 0.6860023812670459;
    msg.x = 0.6622871936319082;
    msg.y = 0.5274606867297587;
    msg.z = 0.6361562203495869;
    msg.phi = 0.524351131209931;
    msg.theta = 0.12254022625138505;
    msg.psi = 0.7089682167029836;
    msg.vx = 0.6209771586372027;
    msg.vy = 0.785858339604991;
    msg.vz = 0.9219221288366092;
    msg.p = 0.9356205957936846;
    msg.q = 0.13896436495682896;
    msg.r = 0.917865271284184;
    msg.svx = 0.4152114764803535;
    msg.svy = 0.3984706578975863;
    msg.svz = 0.9591831345290969;

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
    msg.setTimeStamp(0.7610325474591141);
    msg.setSource(54513U);
    msg.setSourceEntity(0U);
    msg.setDestination(39635U);
    msg.setDestinationEntity(219U);
    msg.plan_id.assign("RIFUJNNQDJQPAYHHKAXDEATGAKDLFNZVZPWLZLLZJCHCIERKAUIFCVTPOIKGBDQTQTDSGXSEJJJUOIKRNKGJLGSLDRYWHGRMBBYKSKDOZPWERUAWXYYNMVYTFJHCAPPVWUGWXMIOSGRRLJQIVUNES");
    msg.type = 101U;
    msg.properties = 64U;
    msg.durations.assign("CAJHBTKHCLKUZJNNSWYOPVYXHKMLRVKEFZDMDZXNVBXKQMYTTOHLKGSPGENQABFTMYBDWIFAAVYKNCILCMCENNDKWMDVXWTDEFJJJZFZVGTGEQFIRAAXEJKRMCPNRUBSCTYHVIWAZYCRCPWWQBFHRDUEOWEFPXDEELSGODPZQMJRJAUBLXPIBJHINDQYGOQUGAPIZ");
    msg.distances.assign("PHHTDBCNOTXHTWZBXGUAAEIFTRKECZLKBQXLLHLCLEPUXFKXJDPAZBOVRKGKQWODFISSQVIQTSHILQPRSNQILCJWBNPCWSMJFLPTDEYDMMKQYYTURNHPJIOAEFYJNNWVFYFPTMYOSXJKZDMUNOGUMSKTIKEMDDHWCXOMBIWCUMHXVSHB");
    msg.actions.assign("IBMJOULSDCJDPOFVQXNDTGRQZQKMRIKJWJWPREDXOMFKLEMLJEYVTSHCWXEKXXVTTBDZPZGZAUGTSVBCFJAPGVBRAWIACROLTMLIGFQCR");
    msg.fuel.assign("XROPIFBSOUMVDFVELFHCAOHLLUMLWATKPPOHSJGUJCLMGRBQJZKLHOUEJJPUWSYVFNYQDRGETMQFIZKWEQZXEDWIJTNYBTNKWPSTCKYDXBJWXAYDNXH");

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
    msg.setTimeStamp(0.6289333607195239);
    msg.setSource(49617U);
    msg.setSourceEntity(179U);
    msg.setDestination(11102U);
    msg.setDestinationEntity(159U);
    msg.plan_id.assign("ZBHQXEGPHXRETWOHNXLBPAZUBKYUKACUGAPFYDJFDFACSNRRAYNNWSVYWOWAQDRYLYBKHHVFWPLNELSOGGKSUEZLSKTMNWLPIRUSTCUBBJNV");
    msg.type = 165U;
    msg.properties = 191U;
    msg.durations.assign("BKPRADFWGCRLKXVRMKUVXXOFSHKUQHZBEDWMUFTFNVHJMIUKYGCGTITPMGFBBSQHAWNEHEJXPQJJRQMLCOWEKMZLFUYXSXNNLNTDIJPVWXUTRTBRLLOMGZJVWAZJXVHNORQROMQZLNQDYTLPPVYKYAZNDZPZWGEMNZEOBHDGSHSYODWFIEOCLCTDAEUYMKSJXPYPQIUSVBESQAIAIYIBVGOZBFASAWVKRHFQIADDXGJPJHOCUSKNG");
    msg.distances.assign("WUJAHIWFTONCHGKZBEKVILIQJEWOBDYCJXANPSMHXKXCRZDFAQELSTHIENNGZFEEYNAULJAIAMQLSRCNTUUSZRFKPWBLSTFNHZDPXUTRHBPJJVAABQY");
    msg.actions.assign("XPDEANRBAOEYEJVMAAKEZBBYXNIYCATZCSMBSXZCNMYHLOAKIGPIVFJSEPFMYSZEJPQDOFIUZXSTVWVFQQWTWXWGDVWY");
    msg.fuel.assign("RVFHDRRKKUB");

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
    msg.setTimeStamp(0.7967727816954947);
    msg.setSource(26536U);
    msg.setSourceEntity(61U);
    msg.setDestination(22493U);
    msg.setDestinationEntity(242U);
    msg.plan_id.assign("MRZTKUXKYFWEYIHZBVUIBJKROAXMUVFCTTYYHCNMJVQMJHIWHDENP");
    msg.type = 160U;
    msg.properties = 60U;
    msg.durations.assign("SAVTTLZYFIDIWF");
    msg.distances.assign("NXPXXJKZQTTMIDVPEILMCTQMBCPWYO");
    msg.actions.assign("CCVYIXKLRJOSZLXUWMEXEIKRXYPUZCQAFPGAWKNDGGETLMUOBXKJCFTFSENWJZBDJJSZEDGVIOEXMVUDJJNUVTMWBIYPDGFZKVFVUHMIAKBQCZJECUBPFAYBBWAPARNVLSWCOILAIRIRDWHSDBQMBCTHYMPXHDERNGKRMQWO");
    msg.fuel.assign("ADTFVUPEYUJBMVNRLRKWWVWVXIUKBUZHGOFFYAMJBRQLHSYCBTGHOYJEABLGJJVTPKGNEQLSAPIVPPMNWJTZXOXXCQTZKWOKUNISYHXIDWQZGRTBJPRHUCSEUVDDEIDKLSHZTMNRBQPHHNAYLEXYAXFKJWZFOZDSGSZOXEXDROSUFEBQQXSIIHLRZCQUDUQMVEQEYKTJFMGAGRCWTODNBILAZVJHIGKLBKGWMCFMPACS");

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
    msg.setTimeStamp(0.6758967685686307);
    msg.setSource(50445U);
    msg.setSourceEntity(11U);
    msg.setDestination(29453U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.12853315340060523;
    msg.lon = 0.20751281643362662;
    msg.depth = 0.8769503329411141;
    msg.roll = 0.18988264794429344;
    msg.pitch = 0.37035743944673416;
    msg.yaw = 0.9799164182625847;
    msg.rcp_time = 0.9250816239609919;
    msg.sid.assign("NJATYRDPWYINANPULGZBISPMMMFJEKTBBEMNUV");
    msg.s_type = 117U;

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
    msg.setTimeStamp(0.5552477703318011);
    msg.setSource(28850U);
    msg.setSourceEntity(130U);
    msg.setDestination(14198U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.13905259472869014;
    msg.lon = 0.6305639465976063;
    msg.depth = 0.20224530661367812;
    msg.roll = 0.0029546716694127673;
    msg.pitch = 0.28176403588858434;
    msg.yaw = 0.9166141700019871;
    msg.rcp_time = 0.5620540303867505;
    msg.sid.assign("JIFEPCTSXRNFVQANBZFKWMEUXOHMQKQLKTZFZHAUMFXQVBJPNGCGTCQLTTNTDBPHZSRRYYWIWSIAGQNYIDHLWFDPCBPOMLVUACYZVEEYOAXKNXZIGXHVLXGCRMJLFXJGKDHWVQSZUCSFYXVEWKOYAIKDTPDORBHSYGPWJOCORRSIEVMGUSMLRKWCHSZNRU");
    msg.s_type = 232U;

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
    msg.setTimeStamp(0.11752877493817582);
    msg.setSource(19683U);
    msg.setSourceEntity(5U);
    msg.setDestination(29725U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.3808673130900183;
    msg.lon = 0.37025834026530213;
    msg.depth = 0.2753829706219145;
    msg.roll = 0.16365562981894877;
    msg.pitch = 0.6129911228007668;
    msg.yaw = 0.26644166337853725;
    msg.rcp_time = 0.212962209360267;
    msg.sid.assign("BBFSVDYYLCZDHKGFYXZNOIEIBWHJTPSTFEAWVEDPNLFSWZQQOSNMCTVLMGCOJVJDAIENPBEFJZZLDNHKKPITYYNWGQMFKHZRBWASLQHRWKOUCQIWACYNKSJAYDPGQGTXNRUXXQRGUOFYWXIVOGMJZQEHSVGYLSPKIRCSUFDNDWPTMXUELOHMAJVWXPTAEQXBELLR");
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
    msg.setTimeStamp(0.563061279469745);
    msg.setSource(13482U);
    msg.setSourceEntity(210U);
    msg.setDestination(49245U);
    msg.setDestinationEntity(234U);
    msg.id.assign("CNVRWDUJYWJCZLSVKYDKSXHSPUHWXZSMTMJTHRGCZYIGNLJZDSTFGAHLPZU");
    msg.sensor_class.assign("XTUVQFAKAWORPKPIMCXRIBEDMRDCBTCKBJSXGVEZFCSWAHK");
    msg.lat = 0.3935125785916085;
    msg.lon = 0.7069712142241513;
    msg.alt = 0.4302352408346113;
    msg.heading = 0.9075377125060854;
    msg.data.assign("PYBDGEZETZRNHFPRBRYANOUOVWUEHKGYQNWLWHGYCEZBDXVIKDLVXKOQGXEPLEUKSHWZRNMXOGFIPNHXASBJFGAHDOIFKXIZLPBNMYTCYSYVTJVIWFCTRD");

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
    msg.setTimeStamp(0.22264010076368146);
    msg.setSource(34069U);
    msg.setSourceEntity(157U);
    msg.setDestination(41730U);
    msg.setDestinationEntity(246U);
    msg.id.assign("FPGIMIVUSQNESADUKMJLHLHIXXKCPBNQJTQMAGGIYWDZHORZFFCUOPTLPJTFDJSHLV");
    msg.sensor_class.assign("IQTMMYIBLZXGFDFVJUQLSDWCXBJYDIGPMFXWVQPNKBHEKRIRXHIEPUKVWVQGLYNUFYIBZFASXCOQVBDCNRCWMXNCQWFEPJSCNEYAQCBODSUCZAQOHAASHGHPUAOZBPZOGHOVWXTYDUST");
    msg.lat = 0.24737727146780764;
    msg.lon = 0.35491719470958527;
    msg.alt = 0.28750127765122135;
    msg.heading = 0.25304344432268977;
    msg.data.assign("DTEBVKMXRPBOGTGWIZFBZSDZIEHSPVHDACEOJFOBHQALYVNHGIZDKUIAYECBFNJQODHCLYNHPDKKFLLFLGYJKKGYSAHXEVSUJAPUUKJEDKMSZSJAMLXATJBNWMGI");

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
    msg.setTimeStamp(0.06775603939019492);
    msg.setSource(17376U);
    msg.setSourceEntity(189U);
    msg.setDestination(18609U);
    msg.setDestinationEntity(126U);
    msg.id.assign("FCUFIJKQNMISYMUHFTRULRYOXDNZCRXHUQPJKEOJSVWBWVRBTZYOMPINGDHMNMFEIXMKQNTEPGRBIPSNGIUWWDOALAATIKCOVISLWZSVEZCYCJTBMXLKVLGKBJKZILOQTJFPWKBGZDRDVDYOXKDFEFHCXZMPBVNHRAZRSEMHFPJZIYLPDYXBHNAHPXNSGXQBULYUZSHESVVOVAJDFHRUAPQQJETGWCSGAWFRXQQYWNQGOKUWMDLLCO");
    msg.sensor_class.assign("BWPAJHMIWOUZCCJZPNDCXMUKSTUIHRJLYNLATTNEOWISNOBO");
    msg.lat = 0.167876393511611;
    msg.lon = 0.6187099206985657;
    msg.alt = 0.5463946382871576;
    msg.heading = 0.7997810075432255;
    msg.data.assign("OXYLGZCFURVAFSJJAKSXXGRQPKSSYRODOXPMJNWMCWTCDCEQZFTVRUBIBVFSHKFWJJYDMTWMONAGOZPFKGPRTQPEQDQMDEEYFHLBMRIIBEKEZNHDZNPLCANHGIDQEUUVUGORB");

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
    msg.setTimeStamp(0.6371726911005589);
    msg.setSource(55368U);
    msg.setSourceEntity(162U);
    msg.setDestination(48237U);
    msg.setDestinationEntity(88U);
    msg.id.assign("TVJYVOWYOVFHLSJPCSTWWUXPAEEYANGUQESSMZNPUBAPDDZMTCIOQYAUKRBTWWRGQHMUEMKSGMXPPFENEMGPAWLNFQIGMAXGPHBDSWJHISSRBKZLRXHJKLNHYTVDCDEFSNXYITJVROHFCBZZOCTUTOCKBKKCEFYXHAEMQVOGZQCDPFOBYZBRVAKFFNTXGRMJYVMLKJLWVXYHRSWWLIAVNIQULZJ");

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
    msg.setTimeStamp(0.7929874885880389);
    msg.setSource(41789U);
    msg.setSourceEntity(131U);
    msg.setDestination(33535U);
    msg.setDestinationEntity(162U);
    msg.id.assign("AWTSTIQHECXWPXYULJQCJEHCOLFFKSMHRBQLOJRFP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YHKFWIJLTJCCFPCVGPYYYSDJQXJBGXIQQLBGRRLWKZOEMBSLPMNGF");
    tmp_msg_0.feature_type = 119U;
    tmp_msg_0.rgb_red = 81U;
    tmp_msg_0.rgb_green = 81U;
    tmp_msg_0.rgb_blue = 56U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2478344060766463;
    tmp_tmp_msg_0_0.lon = 0.3146349309129435;
    tmp_tmp_msg_0_0.alt = 0.8674797881210546;
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
    msg.setTimeStamp(0.7378735964418186);
    msg.setSource(25695U);
    msg.setSourceEntity(99U);
    msg.setDestination(37533U);
    msg.setDestinationEntity(78U);
    msg.id.assign("SVBXFERFKXRWNVQMOQXGBPEUVBPMASVRGWC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("KBKQKECOKEFDQOLVZVQTORSWCNMRANYBIDNPGZTNIXKJXZJGJDLNHIJYQXLUBGDOJIXEEBOAVTSCUBWSDPMAMIOTWPACQUPQLHRUYAOIQCUUUABILBLHAMISHRSNFZGTHNBPVCQFZUVPEZCDDRJXRUKYWGGAIVVQTFLXICHSYYJMMVTJSDMSHXZOZWERNYLEXFRWRCVFGJV");
    tmp_msg_0.feature_type = 167U;
    tmp_msg_0.rgb_red = 229U;
    tmp_msg_0.rgb_green = 109U;
    tmp_msg_0.rgb_blue = 57U;
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
    msg.setTimeStamp(0.9409258995830776);
    msg.setSource(988U);
    msg.setSourceEntity(254U);
    msg.setDestination(39566U);
    msg.setDestinationEntity(92U);
    msg.id.assign("CZNMTYFDUZRNCYGFWYMMIOEVGEMUGKCXFBJRSSAKGNHHAEYDPKOEQDCEVWHKHZQXOARLKKBQUSLVVTQVWNRXOCXIHAYZAJFFVKOFSOJQIAYPPDMDZPKNTCWXIEIIJKUPJEBLAIPJEQBOVEHPXOCPFQRVGLTZPGDDSJWTTTZXEFGNRIGOZGBRAGUWTKDQXLPHBCVYNLYWZWHSHBLYJVLMTMSFIBW");
    msg.feature_type = 83U;
    msg.rgb_red = 218U;
    msg.rgb_green = 241U;
    msg.rgb_blue = 138U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.04150327273480514;
    tmp_msg_0.lon = 0.562734214763355;
    tmp_msg_0.alt = 0.3324111994711959;
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
    msg.setTimeStamp(0.3836416830539442);
    msg.setSource(37U);
    msg.setSourceEntity(219U);
    msg.setDestination(50162U);
    msg.setDestinationEntity(1U);
    msg.id.assign("HIENDCOVROUYVGZHCQZNUADAIKMABCBHSGZXLSFMPXDRUOQGYSSKBKPBXFFXRCRTQVGLRGALJYQEBPMWHOILSHKHRVZTTYOSKBOPKZNUVDEQGYWDNUTDLKKRODEUMXMXWSHZCXFBWAJWNPJHFDUN");
    msg.feature_type = 5U;
    msg.rgb_red = 1U;
    msg.rgb_green = 55U;
    msg.rgb_blue = 195U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.24030886007719843;
    tmp_msg_0.lon = 0.5470813538051704;
    tmp_msg_0.alt = 0.5263196585800431;
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
    msg.setTimeStamp(0.9096169677234948);
    msg.setSource(42423U);
    msg.setSourceEntity(234U);
    msg.setDestination(33340U);
    msg.setDestinationEntity(248U);
    msg.id.assign("WMTAKCXLWXCRDHHXKOJLANYMWJEBJ");
    msg.feature_type = 194U;
    msg.rgb_red = 102U;
    msg.rgb_green = 101U;
    msg.rgb_blue = 150U;

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
    msg.setTimeStamp(0.40039483573228873);
    msg.setSource(11688U);
    msg.setSourceEntity(47U);
    msg.setDestination(44729U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.6894133706681748;
    msg.lon = 0.8618189725573651;
    msg.alt = 0.6840347270428353;

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
    msg.setTimeStamp(0.45994210447108574);
    msg.setSource(26931U);
    msg.setSourceEntity(139U);
    msg.setDestination(1735U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.03596395463103974;
    msg.lon = 0.505165795286607;
    msg.alt = 0.16343733139071903;

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
    msg.setTimeStamp(0.9671811926560211);
    msg.setSource(37268U);
    msg.setSourceEntity(33U);
    msg.setDestination(837U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.14251580651064488;
    msg.lon = 0.8771570950477683;
    msg.alt = 0.08727435141732076;

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
    msg.setTimeStamp(0.5625235925829178);
    msg.setSource(46363U);
    msg.setSourceEntity(79U);
    msg.setDestination(18469U);
    msg.setDestinationEntity(50U);
    msg.type = 189U;
    msg.id.assign("IQFXXIPCDZCRFHENRQKZWGZVRPUYPZUHIYXLSORSEWEFNLHWTLNTUXQEBZVCFGEUUHPASBXQVJMEQPJCWGNWZARIPADHNFVKAXLKNGMARYLGTEATUYDPVRADYBPZTLIVCVUSLKCCZXFBLVLMFCQWMBBYJRJEWBAGCDATWHQKWQWGOUDIIGTQJJNGBUUJDHFQZKVLOORTSMRYOMHBNXXYTXFCSIYZMPJKYSKKNMOTSEOOOSIHBIMVH");
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("APHILZEVIETCZWNYMNWGCNQISYECVPORBENNFOQTSPQUULLEGSOLKQHNHQSGMSVSWIYTRABPKJTALMVOPDNDALRYEBRIDEUHRYFMJDJKJVZOWQNAOKMTMDOXNPRGAXAKWTYKNCIGAJHPXBMSKCQADBBZEVZQXUYPLDRFOYGHZXOSDDXZCILWGUUIFTMJBCIJLEKYJRGGFJMRCUVHXQFBXIFKBOVVSDPZHFATXZWGTHWQEF");
    tmp_msg_0.sys_dst.assign("LEIMTLKKGVVSEVFKKOQDUBWNDCRXUOHTZPVCPWMHIAFQMAAXHJFLSOTIHYPJUXLQIDPHZWCXGZCBMRTUBDPWJSRIYBEBJRGPRZKFHNYWFUCYVCJZSBAWECXGOFJMJKQCZWDUEXCLOGSRCBTGFQUXIYDVAUSHEEZXBIKQKXIDSSDOA");
    tmp_msg_0.flags = 154U;
    const signed char tmp_tmp_msg_0_0[] = {91, 60, -21, -30, -116, -53, 23, -25, -66, 44, -38, 52, 0, -59, -24, -110, -126, -47, 112, -108, 4, 73, 115, 77, 62, 2, -51, 26, 74, -112, -116, 33, 11, -10, 87, -34, 51, 47, 27, 107, 59, 14, 106, -23, 118, 1, -94, 85, 25, 93, 86, -27, 46, -121, 20, 18, -21, -19, -96, 88, 3, 42, -52, 87, -17, 19, -69, -49};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9063132243057358);
    msg.setSource(51229U);
    msg.setSourceEntity(87U);
    msg.setDestination(60487U);
    msg.setDestinationEntity(68U);
    msg.type = 83U;
    msg.id.assign("MOZBDDUMCJERADVBPWPSNRFAELGUCRMUREZOUQHZEXJXQMWHJIDEOI");
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("RXRNSZGFXCKTHWESCCVQESGNRJHNABYADCOQBDQOMQKFCJLMEUTVEPCMQZMSXFIYZVUPLMZJMVEVEM");
    const signed char tmp_tmp_msg_0_0[] = {-87, 73, 99, 38, -13, -32, 72, -87, -88, 78, 66, 71, -32, 110, -45, -76, 88, -22, -38, 35, -91, 24, -73, 94, -19, -9, -49, 49, 108, 83, 47, -55, 111, 90, -108, -15, 108, -95, -8, 53, -122, 95, -44, 28, 90, -97, -16, -27, 69, 75, -48, -43, -24, 95, -70, -91, -81, 109, -39, -24, 53, -41, -89, 97, 20, 108, 23, 89, 37, 30, 96, -20, 17, -64, -20, -95, -37, 37, 69, 111, 11, -63, -5, -103, 67, -12, -105, -114, 56, -68, 49, -77, -107, 20, -126, -43, -87, -90, -124, 9, 53, -63, -56, 34, 86, -105, 53, 124, -103, -59, 16, -60, -59, -127, -119, -118, 94, 58, 21, -103, -13, -116, -50, -88, -82, -48, 35, 90, -43, 13, -39, 103, -88, -80, 58, -120, -89, 44, -31, 86, 58, -115, 52, 63, 0, -92, -60, -42, -16, -45, -32, -100, 16, -66, 120, 104, 22, -92, 94, 51, -9, -7, 12, 39, -100, -46, -89, 61, -81, -24};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.23857140553495115);
    msg.setSource(36555U);
    msg.setSourceEntity(191U);
    msg.setDestination(28666U);
    msg.setDestinationEntity(232U);
    msg.type = 79U;
    msg.id.assign("MCULMFVCZSZPMLAPKZHGLVOQUDBJXGSPQYIZJFLDCNZFLMDUIOYQJYJWTAJDOMCLYAGAHQRCEETMOHFIKBAVWFNSJTMOKSMVKQNSKJCTPNCBFREXVZNLWHUGIDSXZJLYEHUMFBPXSIRVIBVBANDHRWHKT");
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.8291556122496332;
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
    msg.setTimeStamp(0.4559050489844598);
    msg.setSource(13973U);
    msg.setSourceEntity(23U);
    msg.setDestination(4866U);
    msg.setDestinationEntity(106U);
    msg.localname.assign("EJYBKNAGGSULRJYKQUPCTBRRUWFDUNOSQNGVMJZPTTVDZDBBFNQVVKMQWLWTHBASJXRKGFHCIWJVCNSDPVFONWZOMZRVKCJXXJGEADIZQBRFQSBPSUWKPTDVWZIKYLRXTYXAMKELZJOCFXLOICEMESIQJLTQ");

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
    msg.setTimeStamp(0.6607564142100234);
    msg.setSource(51738U);
    msg.setSourceEntity(231U);
    msg.setDestination(63850U);
    msg.setDestinationEntity(252U);
    msg.localname.assign("XBXRUBHHRPRASS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BBECKNVXKNDIKWVSWHTISRXHSFWOWU");
    tmp_msg_0.sys_type = 26U;
    tmp_msg_0.owner = 23028U;
    tmp_msg_0.lat = 0.9880909513037127;
    tmp_msg_0.lon = 0.16891690491226552;
    tmp_msg_0.height = 0.9038147323676557;
    tmp_msg_0.services.assign("VFHXKDKFNKLOGBINJUBJUUNQEK");
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
    msg.setTimeStamp(0.406920227314286);
    msg.setSource(48985U);
    msg.setSourceEntity(158U);
    msg.setDestination(63067U);
    msg.setDestinationEntity(175U);
    msg.localname.assign("MIYLVKCALNZXTAJPHOLMZJACZRWFPMVXEUEYXSNSQCHXBQIIXZLGGJYQPKRMIAQTFUYFVGFUDMBWBHDBUBDOKFSFPWYIQLBLJKVUCHSWAEPSUQTKFIBQHVHRRWTTJLXMUGWEEKEMNDORRZKOKSTYJDDQYAAVDRGATXYNZDSNGWIOOLCDPITJCCSUSJVOZZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CZFYJQHIZYORWVVJWNDHNPKEDGIPKAZBIMDPUJCBCANBAHGZJRRXECUTAHYKQIWNKEMTVWGJREDYFIVRJZZNIKDFIPYZYFNSOUTLMKXZAYYUUJGEYORSAXVVBSTGIOQBDGBKYHFNWOEQGTDPXCUBHJWTGBRSLVPOTMQLEOSSPTWWLJAADHOQQXTSUIFFQLFVSDPHLR");
    tmp_msg_0.sys_type = 119U;
    tmp_msg_0.owner = 35463U;
    tmp_msg_0.lat = 0.7061172005641223;
    tmp_msg_0.lon = 0.30266436353454207;
    tmp_msg_0.height = 0.007857610963650785;
    tmp_msg_0.services.assign("FXITTWSFTHXVYCUPWDIKOOBCDBLXUHPSNHFKJXTKTJGGPZOTEMZEAUQMQSINIQEQYUQYFMWRLDMSEKRZJYCMJCQOYVIMGUDLUJZOMXLUZKBEQCNSWHUYGHZJMPLAPNHNNOTPLCTSSGOBHRVENVEFFSKQGGAINMXIOSJCWTBDVPNXFFAILRPZVRIRBPHYGSBAAVRORZXKAWQ");
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
    msg.setTimeStamp(0.7555101537396322);
    msg.setSource(59341U);
    msg.setSourceEntity(182U);
    msg.setDestination(36364U);
    msg.setDestinationEntity(229U);
    msg.timeline.assign("KNHZBRKBYCMFYNMNXJFKXMQMZVIIQLTMXQTLCCOYZNUCGYDDKZPPRQHGAPUPWBLALZNVROYHQUFKSPKKKOSGIYTXFCHIAAELJLSTEMSDOWNZAGARUGJBOYZXSOFBZEXHTVGJTNCUKS");
    msg.predicate.assign("QURBYSSTMMQRUNWCJUTBSCXCIKAKJSNYYOSNRSBPLAIECQBOXHIVXDEXNZQENDZDVJHTUDFFVEGJYMPSZLFHPPAVVQDJUXFZWOSPUGLKONLGZXZYAVWCWWJDUKMRQGIYKRDWOAJFAMVBZLXDZUBEFIRJQIBNLSOJGGRAETZ");
    msg.attributes.assign("JFDTTYZOSSBQGYRWLZPKEAPGWCOMDEAZLDBXAJWGFQLOGVJEYUOLJUOZZDBJCVCTLZKKSXWHFCNWGAKUPNUQBVJFUNOGSRARAXRHLYFUMTHPXZIYIMHOHQEEMHUMJCIYVEJWYLDAKVLEKFOSQMGXDKUSMWPHT");

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
    msg.setTimeStamp(0.23149857081380998);
    msg.setSource(30579U);
    msg.setSourceEntity(55U);
    msg.setDestination(7723U);
    msg.setDestinationEntity(12U);
    msg.timeline.assign("BRBZOEFIAOUTZZEQUVJKGDOPICYJPAGEQRLJXYUAMMWQLYZSOVAIMXJLDTERDLUTPMMANIAGRXGYFHPWBZXNFKMAKEJWVJOUBJRVKCLQALCPN");
    msg.predicate.assign("LYQANNDRZAPFSPOVYPGMPHRMJBUVZWZLFYZJUSGUDANQINOHCKLQAIHTBSIZOHQOEJYBQAVEWLTNJXRDWFTDTBPUKUSYGHFXB");
    msg.attributes.assign("KRDMZNUBRMOTXLTGAILTRYJOMMVQHVEITYZHEWLQJMTQYZYOVLSNKOURVECAOSDFXAXJPFBNTBAQOEMDNHYFVQZIOYCAEVDXPJLLWPCGJXAHBQFSJBEIZXWXDROVCECDMJSFRHIPRRXHRISPTGNVUWYAWSQNGCQJFYKALZGVJCDMTYLRSMJFTWHQZHIZSAKNKEBBUTBVGFD");

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
    msg.setTimeStamp(0.5075637563055095);
    msg.setSource(18325U);
    msg.setSourceEntity(253U);
    msg.setDestination(35457U);
    msg.setDestinationEntity(120U);
    msg.timeline.assign("JBQRQBCLIGY");
    msg.predicate.assign("XOJGIOASDZSLEPJPXKSSXCLFTTWMBAVZLXEGMPRNOJAZQMDBZVGDHIOWPECIHJTWVKXRCWUTENYADQAWNLRTYFCWTHUXHYEJYQVBJETEGIKINBUNHKDZQIUMMWLCZXINKFJVAQTSDRWGOHYGSPLZQHPUEZBLFRBDUDZGPMAVVVXMERFAAPDGNMQHRMMUBQCFODRVRZKN");
    msg.attributes.assign("UXQERQJGRGMTZPUNZALWIAWHDVRFTEBBEIBRQJIFOPHQPSFJVDRMGDSAGXAWYINUCFAYEBQLOHXOPCONKGNVWZPOMTWFUTVTUPFZSVYKSRNGGVWMNCLDAENZAXNDOCMRKCPTXVDHJSQHZYBYWFSQBRKMILMDICQEUHHPZMFNOXHJFCWKZZNLPCDKECOEYJKBLYIZUOS");

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
    msg.setTimeStamp(0.5287686421071035);
    msg.setSource(34264U);
    msg.setSourceEntity(89U);
    msg.setDestination(23585U);
    msg.setDestinationEntity(65U);
    msg.command = 243U;
    msg.goal_id.assign("OXDMMSLDRIKLVOLMNYUSAENVJMIEWQGHVOANXIMNHSQARZFTMGPIJBHZGZGMXTBHAKXUBINFCJXZVKSQIUORZRYUCGGEAXQPWLRWQQODMZAQWGYYVXANBFRFZMOVDKUATBSAICKIEBPXERSVHDPBPLR");
    msg.goal_xml.assign("CGQFVBSGNXCJUMAQUQJYVNJZJPKYBZIFMFTLLMVAYFCTAZBAPGWZTERYDATVUOPENGREMOEIDFJUCHTIPCXIBUAIZTLHEPTFHLTRDHMYFAAJOJRFDBKPVLGBVNEXCMHAEXNHETKOOWJJZIOQGMIKVNHUUEKCKFNXDFBGALUMWYWSYRKDQSDBDMONPGMNIJCRQXRHECLIRKZLNOSXXXSKVTWBYGKGZWZSSVOWPLH");

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
    msg.setTimeStamp(0.4350963805600795);
    msg.setSource(14549U);
    msg.setSourceEntity(46U);
    msg.setDestination(5774U);
    msg.setDestinationEntity(193U);
    msg.command = 126U;
    msg.goal_id.assign("MNPNLFJFCCMPSRYPDLXOKDOXFNGIQDUARHWWXUMXMHVADURPFPARVUJUAXIAVNCSSQQNWRZIXEDLUUHOJHYRJSWCVXZMSBCEAYBFTDBONEYOXUXZTLGLMQOTWQGIEYLHQTZPGVBKMZFVVKIKPIJKBZWYCLMTFGHANDZVQEZOGLKMKRRFWTUYGKSDDOHASAGPSHTQPBFJMYAEIJDCCO");
    msg.goal_xml.assign("VRVMKEGPTPSTYZIXJMGJVSROYWDCXHSVEFYKHRNWJNSGAAAYSQXPQZOKCOUIMPRVNXOZDWQZSHGLTCJUJWWOZOMQEOVUYVLTXLKMTRDXRHQXEWUISGGUMZIDQISBBKAHYVJZNPYEKP");

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
    msg.setTimeStamp(0.9805892460643802);
    msg.setSource(17167U);
    msg.setSourceEntity(183U);
    msg.setDestination(21103U);
    msg.setDestinationEntity(95U);
    msg.command = 148U;
    msg.goal_id.assign("INAIAOWTSOSMBYQKPDKQHSMRUVHLVRTYUKEKNIOBTEUXLMXTJMKHPHUGGEZYKTITQUJYVMJVWXMUADMKBFBFXFDGAUDTPSLNEORAYGPAAYQSKRAYEJCIUHBCYOGURRWJPSNOSBNISNVMJGNCFHFMRODQCWNXOQKLWKPIBJCFCLNEPQSDEWUCJZZOATRBVIFJHXIPLBHGGJQXVFCSPDAGLTCZFEZ");
    msg.goal_xml.assign("FJKHZDJOUMTSGWRSALQUVVQPLXRCXZKQPZVAAVAXNCFIHMIEIDIANYPYDKEYJUPLTDMZNBOITZLEPBQSPXHFROWCRCJRAHQZAVICMJEXOHWGHUDEOTLKGUWQTBWDQTXGPBOIFLZBVZPGNRSMXNFCJBSRLDESDDTOAEWVSMKQWJRACHMIGETVALUT");

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
    msg.setTimeStamp(0.9724279352107265);
    msg.setSource(41535U);
    msg.setSourceEntity(142U);
    msg.setDestination(18248U);
    msg.setDestinationEntity(174U);
    msg.op = 97U;
    msg.goal_id.assign("SQVCBDORRHKNXPIQMAAXBTJQOCSSEJLATZRDRIILJEFPNGDVMUKGQYXKGVKPCQZZHUHYCDQGUMNHYNLYCWEWSBCLJORTNWVFEGNFSGABDKGMHYWJEIMYAFMLQXMXZGTMXRTIDMPUWERMOPRCTZFYOCYBVZNHVBTIZVULAHOOGKSKYWPHLWEPVOIQKQHLXAZDSVXUFBFORSXDDBBU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RQFLRSMAWLZUBJEBPMVWXTRABQOZCFALZRQACFRWHCSQSCLVWEJEKQMPDOAHVOLLTIIIEFHNURUOAGBIDSBWQUZSUKOVKXUSOWCKISWYIKCFQODZEXDPEYMNUAMRZECJJIGQSDQNNZIHSFHZPOMWBFLLDCTXRTDESXAHDTBYNPKTBPHJZGNGOPTOXMVJRKVMBQHKHTJKNAGDLFHRVXV");
    tmp_msg_0.predicate.assign("HTOSVPLSXWYJFGGVJGIIPRSNMJAQHUKIAREBYTLRTYZT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DMNEIQYPFBKBBUTVPZSNHULEWLMLDNHURSQVZGQVSYYEBLYATGCWOXSFMRZPIICSBGTTHPMLZHFCXTYDGUOFOKCXACSVFLHMWXJIXZWYTKTFAGOWEJAPRNRVKVIMTIPIMZFHWTWUFEEGRJJCIAAREQRAKWBZWZJQUPUHREDHDH");
    tmp_tmp_msg_0_0.attr_type = 43U;
    tmp_tmp_msg_0_0.min.assign("NPBQGMXBZHWNMQVPSJKRYIWEYUDRSCBUZVTZVPYWOMGOPJFEAAKUAWATWTJJPRJIBLZXXHZVWGMHZLILCHTTMUFQOTGAU");
    tmp_tmp_msg_0_0.max.assign("JXVSIPCCCFLRCMPUAQYFCPCHFSYSTIQXHBRUDYWUZWMBXHLKTQXYJAJRQRELQRPDKDWBMUAOSLEMDJHVNJOIDIAPPBYRJVTHZBMXUNCVPKHALEREK");
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
    msg.setTimeStamp(0.4700079744004748);
    msg.setSource(40887U);
    msg.setSourceEntity(66U);
    msg.setDestination(15570U);
    msg.setDestinationEntity(104U);
    msg.op = 28U;
    msg.goal_id.assign("RIHAAWBPIFVBERHDGRCELDEUQYPRCXBOYPLCOTAZDUUTGWJLZLBTCZLFHPIOEFRPHJGVPHQNKNMATTKHKYURKFZIWSIJVNTIWYCEWCWJFFKAVYGNNQJO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FVURBQAQSFMUNHUURQLZZTDESBHUZRHRDQLRYPKUCLTCRALFGOLTBDCMBGDRPAZGPJWMCKTEWXJQDYOZYELEHMVYVSIWJTTUEZBPJSKCVNSQDROKXQKAXQCJACMGQZI");
    tmp_msg_0.predicate.assign("NRJXZWFNWBQJGYMIDETOXFAUKVBAJNXSTLVSFGBFAWRCBCQNLEUGTGFRRDLFHMLMIXEYWPXRHZBRUZHOYGXVQVKRF");
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
    msg.setTimeStamp(0.9719877794955424);
    msg.setSource(17878U);
    msg.setSourceEntity(137U);
    msg.setDestination(57343U);
    msg.setDestinationEntity(163U);
    msg.op = 24U;
    msg.goal_id.assign("GVWJBZFTKZSEKGNEEAXH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NGZFROAJCJKWNSSDTXFLVAMCQLKLQNXEUHMHQPMNRIAEYUBTKBWHUDDURAGFFLDWTYWXYGEVTRJYHOWVSOBKWSOXGPYMJBEPBHQWFRRTIRSUZDFXUXNAWJMHJS");
    tmp_msg_0.predicate.assign("XGGYTNHIGDAKBWWCIVBDFMASVNHERGLWUNSNTNBBTFOVADAGXIJLZKAEEQZNHAFXJJDCYCMAMPEJIMFZWQHRQWYFRVZEIRZAKBCXQJDWVEPJGZGJMLYW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FCYFHCIIRBYGQAZOGNDBOJZGCTVSLJVIHFPTTQSWOAMEKOVKLY");
    tmp_tmp_msg_0_0.attr_type = 50U;
    tmp_tmp_msg_0_0.min.assign("HQXWTIBSNRFNEEJIOHZRRGFXCCLUFVUVHZBIDZDQYUJAQIQ");
    tmp_tmp_msg_0_0.max.assign("KDXFSJPLGFEQUMNMOVUBENFT");
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
    msg.setTimeStamp(0.7651181801846374);
    msg.setSource(55536U);
    msg.setSourceEntity(127U);
    msg.setDestination(46970U);
    msg.setDestinationEntity(144U);
    msg.name.assign("KHKGTLNRRMVQJJJHNQVBORYGJVCZMDWUCCSPFBLLTBPFHUWKGQAIJANFGTPPADNNJRVSSRLVOTOTBELLOZQPXBTXWHIVMXUEAEASBQFZUXYWUTYURCST");
    msg.attr_type = 32U;
    msg.min.assign("RJGETPGNSMUANVCUDDTMHKXSCYURIHXFYBQCRLEICVWZYWUOAOFKLKDNTQRXRRCC");
    msg.max.assign("VXQCVOMYUFIYAFGRASDKQBJHBTKXETWXWBMEASHBIKMJTMVZYLKGCGHLBNRHVWZXOUACOULPORMKGBNNYAEFFUSGEJZFUMAIYL");

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
    msg.setTimeStamp(0.13710755263892282);
    msg.setSource(57396U);
    msg.setSourceEntity(122U);
    msg.setDestination(16557U);
    msg.setDestinationEntity(163U);
    msg.name.assign("EITUPEKBYQTELJZUGDDBSWPHDXBOGJCYQFKHFPEMJISVICSXBKXHIYPMVAAZRGUTDQVHZDFRAITNMEDXORYMQLYNAWQMPPOVKXWEDLYEZBBMJSBPRTJXDASMXNHQYAWTAOFUV");
    msg.attr_type = 179U;
    msg.min.assign("QKKYWBNMNCNTMVHFKLLLXBGDMJFZABAJGRDAJJONITUVIFVPBJIUOAPHZUXUBIQYUGPBPIMADMBEQGFETCHUHWAOGEOZYEZDVZSFCRXVTPWHJUHWZUCCTKJQXIYROGVJRYSWQTZZLRCQALRHWLXIEPSNDSYXZQMNWPSQQIOSNVOTHTEKOCXPPRRWYDKSYUBFDDECMMKOHWVAFDDONKKVXLSIMFTXZUGTBFL");
    msg.max.assign("WHMHGTWUNAFBGYONUWXRCMVMDPYBOIQOGJTZVLUKKSKUXVTOSOAMRVWFYNAHGDSFSLLCEDSJZTPKBIBGXPJKXJBHYVCZ");

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
    msg.setTimeStamp(0.3784513821708507);
    msg.setSource(51353U);
    msg.setSourceEntity(177U);
    msg.setDestination(29580U);
    msg.setDestinationEntity(127U);
    msg.name.assign("VDTSMMCTOEMRKSV");
    msg.attr_type = 211U;
    msg.min.assign("NBDYJLULODOMEPFNMZIEEQUSAWLIPTQKSNLBQANPFT");
    msg.max.assign("PNEQSQAJFZGFZCJPILSUBJBEKVADLJQOGZSOWOPIYZYPAZRIODWGNFGCHGOHHKRHHAKATDCFYQVBMANDVIFCFRMQRETZOSNZBVLYUKABMDOMWEYDYZCNJUEGUQQUTWBHCTHWLMLQHUWBQFGOXZEHJMYVZXRUIVBRGHVGSEMTLTLXPKYCJITFPXSYGKUBWIIUXIOSJVNPXELTKJXMPACWCFNBTDSKDOQKNLIMERSRNEADXX");

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
    msg.setTimeStamp(0.22718144595340473);
    msg.setSource(56492U);
    msg.setSourceEntity(21U);
    msg.setDestination(40620U);
    msg.setDestinationEntity(81U);
    msg.timeline.assign("NAOJXLBPQEXSATVVUEOUQKKIOQZPANMAZTRHAHKFRXTUIPCVFZCMZJFHLMDZVQMTKHBQZUVUPYXYOVNWQJITMFXYNRQSJTRJWNHYKIRWIYHDJNFLQPLEUKTAUSIFFZNUUBARIDBIULHEYLMKVYGEMNELZJZWSCRWXLTPOKAHORCMO");
    msg.predicate.assign("TMFBYXWLZFVRLASORTWDTVPBFSWYVNFHVBKKIAJXAXIPXCEJKRJRHOEDYYTNMCXRFEAHGJCPAISLOBHTZZCYEWIQDQJGOGRTULJFUMTOBVSQCSLQZOQYLNIDROKCDNTRWAPWUBXDZSKJFEPUCZYITHLLPBRSVJPQAUNVRWHNGIUSODUMQXBZVCZGHPSKUKOUDAVGGD");

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
    msg.setTimeStamp(0.012162533716107315);
    msg.setSource(15679U);
    msg.setSourceEntity(42U);
    msg.setDestination(12390U);
    msg.setDestinationEntity(179U);
    msg.timeline.assign("XCOJRNAWGTBGCJFCCTJIHNDWFOAALPYRLOJUEFQQQMTLWWKOPQXVSUPBNVXIWNVOCRGFLGATFHJUOESIRKDFHEVNYSVXZYFJVSUELGKMSBNIBQDDMDPDTEDSKDLZXQRVHEDLWJZZPKYQEYZTGALTGTKTUZFOIPMMMSBZHINSRQJGDSKBFXAKLPJYNPEVBHARKICPIMZIFHUCCUEUHAAQRZJRYBMOMUYHEYLVBRIW");
    msg.predicate.assign("JGAKPIZUEHFBUADSSULMPJJBJDTDYDNYHHZFQVHZZIAFDDRYAZVXWPXQICCEXWWWVAYSCJSKCKLKBTSORTZPOVRHUQIGHLMGWPO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EPJONXQJJECIOGTCXQDYQWULATGVQXWNOCZPUKFBSFYVPQIFVQMBPLZJRTHPLXYBUZVAAKYHAIWAPSPMBLHDTFNGNXSHUTGJNHUJYBGFIMZBETDURCHZRNTBKCKWLEWEUQFJXIAJMYROLOFEYKHD");
    tmp_msg_0.attr_type = 76U;
    tmp_msg_0.min.assign("QPRFLIDFKXOIVSTUPQGYJMVTCZNCCTQKXSEUPAWWXZJIJMSHSOT");
    tmp_msg_0.max.assign("OCHIEQRTZFJUMDBNPZEOLOWGQCUIIKQBCHOYRHSDHVCAXNJDKEJMNAROAQUBBKYLAVKMVAWQYJDTKCNUNXEGJZXQEKQAKTGQLBAGFMOXVFUUNIWMISCYVGTUSYBASDJXFIGEHHSMEPIZGRFONBEPCXYVEITDELTFPMTMTAWNUXZBHTVFJPKRDJRWNAYRGNCRFYBTZU");
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
    msg.setTimeStamp(0.3574513299484493);
    msg.setSource(55967U);
    msg.setSourceEntity(233U);
    msg.setDestination(6306U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("PMUEGSHEZXCIFULHKFPZBWMPLJSTIKVAOTAOKXCYQBLCRFKKGGITDYUCJRPYDMZFEXJTVASNETMAIRNLHSNIJVGNVYYYGIWSSWRXVZYBXEALGFPCOJQQHWGYQSJRLWCXCODHRNEUNAIPWWZEKPUYCIOXQIQQRMTXMDNDDKMPGRHAJUAVXVULHEFMP");
    msg.predicate.assign("XTSCGFBHLKAECWWYVMWHZABMNPJWSTWHEQZUINYNLTAPSGKBRLNHKBBUIUMJYHAFTILVZOXGEVSHZGXCYMQMTFDELPDABQDIDFPWPRBGFRBRFRJFMEQWGARFKMSYBOYSMCKWPWJIEXUUZVFPXEUZTLUZGSZSDXGGOBGOKCQCWYNNIONKHLIYXVVTOKHIPQUQXMNHUJNVOJYJAPTIHPSVLZAOLQDDQXVTLYJDZIAETRROEEJNKXRJCMCSOVCDUK");

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
    msg.setTimeStamp(0.9804961523141758);
    msg.setSource(5008U);
    msg.setSourceEntity(18U);
    msg.setDestination(14937U);
    msg.setDestinationEntity(34U);
    msg.reactor.assign("JJSXNVIBDFLFCKSQEEQSDWXJYGFPJUDWXFHRAWCTGAZOBSDBTDGPSAZVLGQDWCKWDQHLTUKIPFEMLT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RZTZNOCXHERQKVGAAFRYOWNHTYVKCDQZJRBQUFYQBOEZLKNVBONAUHBWVMADFFQJLXBDGGUPWXWUKDGNPQSWXSTTCTPFNTYCCPJBGYSSEZORIUOAAFKCVZXMHPOKCHJYENMXXQLIDUMOBUPEMHTMEBXHDOVYTIPTKJVCINIWMQKEGIRWEJZVRBXXSLGSAVAFM");
    tmp_msg_0.predicate.assign("LZXMVRZVSECIEWCCKMNQGAUVCVAZOUNJKPDRGGYRAXHRDXYMGNWKFLYSHULZQXGOMDTTPBRGGOJBBFHSCNWQLPJJLPHATOWDEAXIORZLUPJMWDWFCHXMAUFZABQQTTZEQIVIQWYBPABIVWTSPFRDMFIKSKOKDJNBSFIJPCOQDHCDSXLOZHLTJFKKWZOYPHEBMFRCEUHCYGH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("URBPCEMQIFZUO");
    tmp_tmp_msg_0_0.attr_type = 219U;
    tmp_tmp_msg_0_0.min.assign("XUAEHPZPWUBFLJWKDAWOIOZLKUTRBMDHAAETWKDYQZILEHESMJ");
    tmp_tmp_msg_0_0.max.assign("OQISFLTOHSRBLZSSYUZAETCYZQXWBDVGBLVGQXMGGIQRXYLFANOCMNMYAHWWFKEQVRPOBPLCKKUALDPPSINXRPZTICPFFVYDMYCBUFIJOTKNCOEAVATHCHEKZTVZGKSWMGKXDQ");
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
    msg.setTimeStamp(0.007367446158141444);
    msg.setSource(34297U);
    msg.setSourceEntity(223U);
    msg.setDestination(26182U);
    msg.setDestinationEntity(45U);
    msg.reactor.assign("GLMIMKBUHGTXUAQPWOXRGCXOPPXREKOHKZCVYNGAPSCTDOTBKIKRUCNINEJUQMBADIOLDFTMYVCMZJXKNOALWVYDGOSQSJFVXZFYATLWXH");

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
    msg.setTimeStamp(0.6066926798443362);
    msg.setSource(50420U);
    msg.setSourceEntity(152U);
    msg.setDestination(8497U);
    msg.setDestinationEntity(212U);
    msg.reactor.assign("JXPEHODVECKROMXUFNKYAURWTQPUSRHSIHCJJWBOKKQSWNSOVITVUOUZTPSBORDFQUYKVDULKCAZISZNK");

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
    msg.setTimeStamp(0.8057324050007754);
    msg.setSource(31359U);
    msg.setSourceEntity(4U);
    msg.setDestination(32114U);
    msg.setDestinationEntity(29U);
    msg.topic.assign("JLKBNXFWHVSWGWNIBFQDXRQNLYXDMNSCUZVFLOBDSMYYJWJUSMHKERBCMVGTSKRUDYIOZABUBPSOOAOSBQEENJHLJZYSDLRCROGKEGNCWPAAXRHTQCVTAXLZKYPQUWCCTFXTMHDYOMKQEPWNCGFQXYPGRJKJZNNCTQKRGGMEAHLBISUEEIFXFVPWTPIFYBTLDFVA");
    msg.data.assign("IDOTXDXNCLODTCGADFMWZWJSNFJRBNKHMMEDZRGTKTOBXNMVOPKSSNUFUJZKLXAESPPRZFVRHHBQEWDGHZGYDETIGMVOYMQNDONVAFRVT");

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
    msg.setTimeStamp(0.0204356020257096);
    msg.setSource(53909U);
    msg.setSourceEntity(22U);
    msg.setDestination(10336U);
    msg.setDestinationEntity(233U);
    msg.topic.assign("FECLYKGSZVMLMJODVLANDKMZVLTERZGSXLHNVYQRVXHWDQDZDNJNBPOTBRGNQAPQFYLJNSWTQZTUJZFYSLBXGEMMJYFCDVXBOQFABUYOJPTBKUWHREUEFVUWCFHCXWPDQIBNIWCKVNPRPHBCOGMKAT");
    msg.data.assign("CHOLWHNSXLLXEQVAOAWKIJDWGFUHXOBXYPEFYH");

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
    msg.setTimeStamp(0.3915260270140677);
    msg.setSource(33446U);
    msg.setSourceEntity(109U);
    msg.setDestination(52003U);
    msg.setDestinationEntity(12U);
    msg.topic.assign("WIRTRBTGPWKYHCSMXUXYWCSHFDLUIJUOOUEFEBPXNVCDMLORRUOLVESAJOTUAD");
    msg.data.assign("TYLZKQPQKMUFTOBVGIPWOPOXTUDVDPLWIDUHCHCEKHJHNRUWIMXWBKNMSMQHMAFCCCEVESXJJAAS");

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
    msg.setTimeStamp(0.8409406110700505);
    msg.setSource(25688U);
    msg.setSourceEntity(2U);
    msg.setDestination(1452U);
    msg.setDestinationEntity(205U);
    msg.frameid = 155U;
    const signed char tmp_msg_0[] = {12, -111, 23, 82, -53, 74, -76, -62, -79, -124, 39, 33, 101, -27, 33, 34, 29, 3, -30, 55, 119, 111, 126, -63, -62, -95, -113, -36, 44, -7, 75, 100, 110, 90, 17, -39, 63, 35};
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
    msg.setTimeStamp(0.43242624379278005);
    msg.setSource(51767U);
    msg.setSourceEntity(157U);
    msg.setDestination(41792U);
    msg.setDestinationEntity(44U);
    msg.frameid = 69U;
    const signed char tmp_msg_0[] = {7, -67, 87, -46, -40, 83, -14, 56, -89, -5, -16, 64, 3, 94, 9, 96, -99, -85, 97, -121, 77, 19, -106, 15, -11, 29, -53, 3, -17, 10, -51, -75, -119, -66, -87, -109, 126, -63, 40, 67, -27, -108, -85, 111, -39, 84, 76, -51, -46, -61, 0, -6, 94, -97, 60, -46, -20, -114, -29, -128, -106, -39, -109, 61, -23, 71, 10, 73, 53, -45, 10, -108, -67, -35, -65, -112, -32, 16, 109, 11, 99, 29, 19, 27, -54, 2, -56, 15, -73, 76, -49, -5, 53, -32, 34, -88, -94, 96, 78, 29, -8, 109, -113, -68, 29, 29, 87, 113, -45, 55, -111, -2, -77, 126, 125, -120, -97, 115, 90, 84, -14, 121, 51, -1, 42, -64, -93, -106, 33, -26, -15, -94, 32, -65, 96, 93, -124, 35, 29, 73, -106, 52, -120, -96};
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
    msg.setTimeStamp(0.9083259152621105);
    msg.setSource(59459U);
    msg.setSourceEntity(253U);
    msg.setDestination(53238U);
    msg.setDestinationEntity(232U);
    msg.frameid = 162U;
    const signed char tmp_msg_0[] = {-23, -11, -36, 13, -120, -31, -1, 102, 57, 25, 68, -58, -6, 107, 104, 116, 103, -1, 39, -119, -46, -50, 16, -58, -63, 64, -10, 48, -51, -9, -86, 108, 15, -8, 9, 38, -50, -128, 66, 107, -79, -118, -48, 86, 94, 103, 77};
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
    msg.setTimeStamp(0.49574332377800623);
    msg.setSource(989U);
    msg.setSourceEntity(3U);
    msg.setDestination(49006U);
    msg.setDestinationEntity(182U);
    msg.fps = 149U;
    msg.quality = 134U;
    msg.reps = 222U;
    msg.tsize = 194U;

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
    msg.setTimeStamp(0.8264379578895381);
    msg.setSource(55423U);
    msg.setSourceEntity(207U);
    msg.setDestination(30855U);
    msg.setDestinationEntity(25U);
    msg.fps = 124U;
    msg.quality = 86U;
    msg.reps = 0U;
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
    msg.setTimeStamp(0.3300371751169766);
    msg.setSource(31281U);
    msg.setSourceEntity(192U);
    msg.setDestination(50085U);
    msg.setDestinationEntity(146U);
    msg.fps = 146U;
    msg.quality = 232U;
    msg.reps = 28U;
    msg.tsize = 61U;

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
    msg.setTimeStamp(0.8903075770971646);
    msg.setSource(63148U);
    msg.setSourceEntity(199U);
    msg.setDestination(64488U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.8334436191026547;
    msg.lon = 0.8777000002505403;
    msg.depth = 155U;
    msg.speed = 0.5881509824043555;
    msg.psi = 0.09328098967583431;

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
    msg.setTimeStamp(0.7505639994092148);
    msg.setSource(40366U);
    msg.setSourceEntity(80U);
    msg.setDestination(43874U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.7621508408773684;
    msg.lon = 0.6185040948283886;
    msg.depth = 72U;
    msg.speed = 0.0823068337051206;
    msg.psi = 0.011578613581589181;

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
    msg.setTimeStamp(0.952087146833451);
    msg.setSource(11940U);
    msg.setSourceEntity(60U);
    msg.setDestination(25503U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.9931348426592089;
    msg.lon = 0.4607707387693869;
    msg.depth = 157U;
    msg.speed = 0.7946849030161152;
    msg.psi = 0.09096813951241922;

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
    msg.setTimeStamp(0.9001964850756244);
    msg.setSource(61858U);
    msg.setSourceEntity(72U);
    msg.setDestination(48630U);
    msg.setDestinationEntity(217U);
    msg.label.assign("ZPCTUSGHUWUDJFQNWPZHSWRWMGBOIVZNDGBCYNAAHNZUTLKSNKXTMIXJJPVLFGHPGVWXXCZYOIRVAAHOFSVXQOIODCBIZOEDRBEGJKEZERPYIHBTKEHNBVTQKMDMEYRSCLMGEEXIVUZARQAVBFJMUYSPLOWDVCOJFPQGKUUCLLXCJEHQYFRLRKPIDPASWQQLYYTDJICTYLDOHUFNWN");
    msg.lat = 0.035712660121741346;
    msg.lon = 0.6966835076854144;
    msg.z = 0.6670626070420674;
    msg.z_units = 51U;
    msg.cog = 0.4608592519171387;
    msg.sog = 0.20570912613877457;

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
    msg.setTimeStamp(0.7399828518321463);
    msg.setSource(14622U);
    msg.setSourceEntity(242U);
    msg.setDestination(32256U);
    msg.setDestinationEntity(7U);
    msg.label.assign("PVYJMTDFHGEKDQTRLBPGLUWTDILIQHNVQUSWBFPIWMDJXFSEKRVCPGSTGWITSPZDWBCKUBEN");
    msg.lat = 0.06650634016694457;
    msg.lon = 0.3844176760358239;
    msg.z = 0.32317973619649165;
    msg.z_units = 104U;
    msg.cog = 0.43892352074367313;
    msg.sog = 0.27898082797245083;

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
    msg.setTimeStamp(0.6777780245339675);
    msg.setSource(37401U);
    msg.setSourceEntity(138U);
    msg.setDestination(54785U);
    msg.setDestinationEntity(6U);
    msg.label.assign("AVXYIKEEGWNUKDTBVGAASTKJOUYEBJAQOXHHBYXQHACRCZVZHKYFBWUNPTISEJUKMPDBNMIGDOSBOROXJRWHTCCFWEXLVFDVUCNZEFYPSQNZALHXDNRDJQYYVA");
    msg.lat = 0.4399711940956138;
    msg.lon = 0.20582637098285572;
    msg.z = 0.7291520386490447;
    msg.z_units = 16U;
    msg.cog = 0.9620967940034575;
    msg.sog = 0.0015216249967570095;

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
    msg.setTimeStamp(0.9840831676914976);
    msg.setSource(63217U);
    msg.setSourceEntity(183U);
    msg.setDestination(20668U);
    msg.setDestinationEntity(222U);
    msg.name.assign("RVWQSRYEHWDXLYFKAPOCJRYGAMAYPAZDOODVVVGJRFPSHLWKBNBHLYBTVXIUDUDBZILXQHQPIUUJPIJPKTBGWYCUVHOVNCHJLHBHQTZIZPCTZQDWQECMEANDECMWZFCSDYFBZJTECUYIXSWOZNGTFNRZGKXGPIJKGRGAOFUSKIMEO");
    msg.value.assign("MBZXYUHNFKOJBVJIJIXJRNWW");

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
    msg.setTimeStamp(0.9702558650775347);
    msg.setSource(29942U);
    msg.setSourceEntity(215U);
    msg.setDestination(9374U);
    msg.setDestinationEntity(74U);
    msg.name.assign("JAWZLFATHCH");
    msg.value.assign("WFYZZDBDFOOCBJGFIXOTESCLTVDAPVAFVRGMVMXYBLQOARTGWPIHSWBGHDYXARPXJQMUZSCYKLBBYEKCWABIWRXJIUQMZZTAIKALPQNDZKWOFNPISMFTFEUXFCJVQJIIVSNOENNPLVRCJASTHADARHUELJGEZEXNENQPKUBOWKGJWJFHTHMJQMRCPBQVXUOLHYOWMDYLODEKCKWTHQNLCUISSFHUZSUUXVCQNILPNTSKYYHXRGMYBD");

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
    msg.setTimeStamp(0.48347821503872834);
    msg.setSource(60890U);
    msg.setSourceEntity(0U);
    msg.setDestination(17996U);
    msg.setDestinationEntity(127U);
    msg.name.assign("FQIWYNNOTTEJZXHCNFAXJBTYLKAVQRTLSZBYLCMAVQNOVUMCTZPAUXCQIYQXXKGMZMBECHIFFPSMWBEBOY");
    msg.value.assign("VQKKUYUMMSGEHLZWDNPSFRPFYPAJLXTJEUTIMSBDLMEKMKDLXVLHVBQZVEAAPZSGHLDCBXXHSKXZCRZDPVI");

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
    msg.setTimeStamp(0.7833724480449339);
    msg.setSource(35538U);
    msg.setSourceEntity(241U);
    msg.setDestination(42636U);
    msg.setDestinationEntity(206U);
    msg.name.assign("IWESLPGZBBQNXQAJOFOCIAKTRVTGJGQCWUMVURXDVEICVKUVTPOSXNQHOZMPQGFVAKWLXLBSUNCBECNPQIXLMUFXSGDRUDYHZQJYLURHNAOFLFHOZJEHASKHMJHFWXJDDCRMARINQYEQTDUPDHNWFPCSOWLYGFVWCZKJFTBDMBUEKZLDJRPSWSTRTCPDYTIKAPYGFOXKW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AJRQKXGFKJGIBMAXTOADLMTSCPJZVVRLPYMRNVMSDRIJYQXCPHZVMBNQPWLRXOBAHYECKWTHZTQIFEVTLQTSOQSLRUDWMKIYCDDUCXVIPNCKUOYJSVSEHUQXHEEFKL");
    tmp_msg_0.value.assign("ZUESGLUHTXNBCWAKSVIOKMDWOKJRGIIARNVXAEGQXZARMRPBBZSQOXQJVJBYPPRYSCLQUOUTHYMFITPHFKKHZPBAJTNQDPCTYHDJWWVBDXKCJTJVUKFHZOJNHGRAAMYJFLQVSSWLTCEXNBSCGYOTEOLGEVLNOWSYCDMIGIHPTMKXLWSMBUKDRNBZACGZULVCQ");
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
    msg.setTimeStamp(0.22525322146245452);
    msg.setSource(55102U);
    msg.setSourceEntity(126U);
    msg.setDestination(19729U);
    msg.setDestinationEntity(59U);
    msg.name.assign("LHIDDRQPPFGCGWJUCYSHDRXYLYQRUMTXZUEJSGLAONRKZUCFBPXAMMTXYVCFVNLKRSAYHGSNPOIFURCPVVMFVIAJHPVZCIJCIAWTQKIYOWBCWFDFMONWYBZAKTGGDBZLRVQQEZT");

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
    msg.setTimeStamp(0.4914905590584653);
    msg.setSource(48855U);
    msg.setSourceEntity(110U);
    msg.setDestination(17474U);
    msg.setDestinationEntity(180U);
    msg.name.assign("FBZAQVXXAGMVIJQRTWTAWFYQTJYAJDSSGCCZOPXHWOMLQFRTFCTXCVQUGHKWPFWKNYEIJGJMNKUWWOIHSGAMBUZPBZPESBEGGNXYEDDFLFFLDXWDKRKRVSVEJBYZUTZGOOHTWVBYIOECSZTEOPYQNTCZHBDGYCSNXSJLSRBHLPMOHPAMCLRNJEDSXNIBVURLHANHMWIPPIAIPRCJFUAKDCNXQVDUVZKQEAKQBUULILMIKHYZKOQGRFNUE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FJSBKSPIAAPBMBLIDIVAOQCKNNRIYZYEEMVTSVTLKTDUKGVWMMWXZABNUFYQYRPOEDAVRFHGZCCLWOCRVCIANYP");
    tmp_msg_0.value.assign("JEXOORDWDFAHAMKNCTMHZXNYLVALJUCIHJRQRPKCZFOBSDGSPXSLSQWYFVAZMOFCZNJJZGXCKWFYZIBSHVRMYUPDFPAHZCBXWOPQNEOITXSEKCCRSQKIL");
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
    msg.setTimeStamp(0.7878098156750707);
    msg.setSource(38091U);
    msg.setSourceEntity(99U);
    msg.setDestination(61463U);
    msg.setDestinationEntity(9U);
    msg.name.assign("JHGWJJHEBYXTTNCRFZEGERSIRKHUJDMTXYJUVSNALIWIFYEWJDSTBVYLNHBPXMTJKREUCAKVODRVNLTVDLUIJASOWZPXDZTLKQXYREAMSSRCQCUKVSGHWQJVNIGURZNVGMBPFIIDZPXLAWPISXFFKZOOACHRJCPLAOMYUMWQDOHPLFHCZVWWSGGBNUHKHAKEYYNQUTUEYBWBBBMMQDNSCFQBLGZMQPZXKYPIXERIOTLXODEFGO");
    msg.visibility.assign("DGFJVRBASHUCRGSDXLTMRAVKREMNCKDUOWEWHQOJWXGXFEVQTLBHFXESUOFWQZSZIYNYNPBEQQFXLTVAGTBGMOSOPGRMKSJAQPHPCSDVZRNTYNDIHSWYTDMSWWFUYKMXPTUKWMYTQLUKVLOAYLBEIUADAZCGRCJEAZOQICXIKCKIDIHJPCBFMTGLYHPIONURZDLIABWOZZKQZVXBODPTCJCPNJVLAGNHXGJHEYNHLZWVPVNXBJBMSJFQIM");
    msg.scope.assign("WJIOKEBVWHCHCXVKZNUPDZELERBQBARRXZGESDLFUYZRLYDXUYLQEXYNCPAYEKDFGBRTTAFZSIHIAFKWBOWZMLVCAVRIETWASPMHGSUQK");

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
    msg.setTimeStamp(0.1503441074392341);
    msg.setSource(38196U);
    msg.setSourceEntity(212U);
    msg.setDestination(46932U);
    msg.setDestinationEntity(160U);
    msg.name.assign("GIYDQTPKHXHOHNYFRBLCFBXUVUUIUJTJMZABNVSCNTKMFVEDIOOLBSEPLVHPZCYJVANXWWRMMOMUNYRQOGDHWJDISGSFJLREUZDVSYXODHXTFYWFZVOKHDAESSHLNMZULRLZODCTGDZRMKIVEPPLLLQTEGMCYKJTVMMBJCRHYZCECEWQRJVHCQFWZBYWQWQAPFCSUTKIAGINKFNNBJDTOGQBEXXIGKYKAWA");
    msg.visibility.assign("JFKSFBSVQFGTWWVNZIVACTTDTYSLUOUQQEIG");
    msg.scope.assign("IPXHDNXFAOZOPXYYPJUOVGEKQBQCCDDKVQHKWMDUMFYRBBMOLJCRUEMYQXTPZVJLBWSCLGUGSNKNZIFMKLPUJUESQGACFCSKQBIANHTLHTVLBENMISTABKHWNRVFTGLHRGFJWXRDGGLJKHBYTVRYQFIFWXWEDMAYJPSWQAEDSZCAEOZIING");

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
    msg.setTimeStamp(0.8384076154787353);
    msg.setSource(58277U);
    msg.setSourceEntity(204U);
    msg.setDestination(47113U);
    msg.setDestinationEntity(154U);
    msg.name.assign("JRIFHGOESLIPUNKTBHOYENGTFDDZUBWZXGNGOBSWGXANMMSFKDKRYQEAVRLQKEIZBCZLQVVPJAEKXFPAFTFVGLWDSILXEQDCWIZDRF");
    msg.visibility.assign("ECAWXMVNRWCKXHDQPDSJPYYZFPLFNXQAPBXQWNNGXIEIVUIYDSZARAAQPJPEOHSP");
    msg.scope.assign("HFUTNORXNGEVPYENACWMQRUDBLDTEOBIDQLWAHWSQMDFUWRKWUHJZBNYYBLKRMNUPAOWHVJRRCQZTAIVRZFTPAGDSKXAIQSKGPMPERNIYKEOGJUFJVIMWVLCIQHVBZ");

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
    msg.setTimeStamp(0.2476863689588651);
    msg.setSource(38764U);
    msg.setSourceEntity(124U);
    msg.setDestination(61782U);
    msg.setDestinationEntity(250U);
    msg.name.assign("ESKUXMFJCIOZCQNGVLSLJEEICXCXBNQZBOOBXANQCIJKRWUNDZDNPTKENHAPRNLAWAGENTXPCUUZFHFFRBX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZZPEPFOFVRYYSQVAIVXCZMVCITBKAJRH");
    tmp_msg_0.value.assign("KSLZVPNJWMMIYRSXJYHJOHVKEXZBGTLIAKAHMGFQMDFOIRRTIGIQNWPTBOBLDTUIXOAGMZ");
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
    msg.setTimeStamp(0.7202812524857621);
    msg.setSource(4581U);
    msg.setSourceEntity(90U);
    msg.setDestination(42362U);
    msg.setDestinationEntity(6U);
    msg.name.assign("TBCQQPFFSTKDKNYKMGNKCPMRHWDXJLTVAJQKRJASFRNZEXGSUYFGPBTMLQDSXLJHNRTGEMOKMCUKRYSSGTUTNIOPTEWUMHWWQETACDIXJEBMEQVXOCJXINVSXBAX");

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
    msg.setTimeStamp(0.10683868596888968);
    msg.setSource(59480U);
    msg.setSourceEntity(17U);
    msg.setDestination(9603U);
    msg.setDestinationEntity(198U);
    msg.name.assign("XKLOAYRIDVXEUYSPEQMMUSJUIP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GEKTMAEPMEPSZQIZALBROMHUNZXLVCUREBQBGXRZPCWFDIFVLNPCUAMWJRIBPWCJEQUZSFTAJNDQVJZNWBHFTVWMTKWHQHFJFKAVJXQUQGOKGOTXSDUZUNBQHDLGUSLEOCKYBIEE");
    tmp_msg_0.value.assign("VINPAQVPXSYKVINFDAHHLUKVCOFTIOMJSKLQQIBJTARBAMTDVJLKCLDWFMOSYNCXIRDGSECBQHAKPHGCENNWAYFVZSZSCFGMIHZAPWOYSQMXAUZXIPEPGLZESUVWCHERCZOWDYAVSQGQIXPDLWFYMKEQTVFKDWBRJXCBRRZATZN");
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
    msg.setTimeStamp(0.9420916753758366);
    msg.setSource(12213U);
    msg.setSourceEntity(232U);
    msg.setDestination(30683U);
    msg.setDestinationEntity(5U);
    msg.name.assign("FBCXTZAQIWHRBGKLNUONVPYOVOJQKSUBNACTCAMMJWBJHDBQAFHHMVBTJIMYCYODYPWLDYQOZWDGCZPMWAEAYAHXFIHPCEXKKZTOJXTPEVINLBCDUEELPWRHXOLEUDSQKOGRBMGWOTGMRJJTKFLVRYQGIBLVEPQBUKXWJSTWEYCYEMRGFHQSZ");

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
    msg.setTimeStamp(0.8552536182991675);
    msg.setSource(46124U);
    msg.setSourceEntity(161U);
    msg.setDestination(17014U);
    msg.setDestinationEntity(147U);
    msg.name.assign("ATXENUHWXBBXMSSXOSBTFGZKILQVAJTKIFHQITQQRHUNUADUALCLTPYIJQRPJSOZKHLVKELXKDCMWYAHV");

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
    msg.setTimeStamp(0.057260436146910565);
    msg.setSource(7148U);
    msg.setSourceEntity(13U);
    msg.setDestination(45499U);
    msg.setDestinationEntity(249U);
    msg.name.assign("YMBRYBMHLZZPJGXARVPHDSUKAXLYONIZORALWORIZSFJCFUDGKWEVIBUTVWLYOQCTNBCCLQVJTXNGJCVWJYAVVNIOFMLRDZYGZAZGIFQZMSCAQOIDFBXWQQTQRHICZWTLSSRSDVHQBM");

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
    msg.setTimeStamp(0.07579753791592603);
    msg.setSource(49883U);
    msg.setSourceEntity(187U);
    msg.setDestination(50595U);
    msg.setDestinationEntity(204U);
    msg.timeout = 3801812101U;

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
    msg.setTimeStamp(0.34979762424359684);
    msg.setSource(35780U);
    msg.setSourceEntity(141U);
    msg.setDestination(94U);
    msg.setDestinationEntity(173U);
    msg.timeout = 3458893756U;

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
    msg.setTimeStamp(0.1589482722656208);
    msg.setSource(64742U);
    msg.setSourceEntity(190U);
    msg.setDestination(2651U);
    msg.setDestinationEntity(119U);
    msg.timeout = 1727129702U;

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
    msg.setTimeStamp(0.16439353036124849);
    msg.setSource(9202U);
    msg.setSourceEntity(119U);
    msg.setDestination(19924U);
    msg.setDestinationEntity(232U);
    msg.sessid = 3155492145U;

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
    msg.setTimeStamp(0.24659337770702616);
    msg.setSource(64518U);
    msg.setSourceEntity(79U);
    msg.setDestination(34581U);
    msg.setDestinationEntity(132U);
    msg.sessid = 2412954312U;

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
    msg.setTimeStamp(0.5754286824126305);
    msg.setSource(48947U);
    msg.setSourceEntity(150U);
    msg.setDestination(40881U);
    msg.setDestinationEntity(56U);
    msg.sessid = 3337687319U;

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
    msg.setTimeStamp(0.5732661711315643);
    msg.setSource(54430U);
    msg.setSourceEntity(132U);
    msg.setDestination(10626U);
    msg.setDestinationEntity(73U);
    msg.sessid = 2093909337U;
    msg.messages.assign("GQWKKOQOVVRJMXYILFUXYBHWKEVKKGOEJLGTZZLCXZPAIMXWXWDMWRMLWVZJQCQHXFLARENHLURAYDCBQSITYXZDSSFGFYREHOBNTMJZJYFTCMAOIUJYPCOUXMMLNMHEPJKAADUVONYPTZBUQCQ");

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
    msg.setTimeStamp(0.26021217804369445);
    msg.setSource(10857U);
    msg.setSourceEntity(236U);
    msg.setDestination(40448U);
    msg.setDestinationEntity(23U);
    msg.sessid = 3862579202U;
    msg.messages.assign("YPLOYHIWWOSNNIIVEDOEYNDMOMNQGJBCJRRTKBRQMVVPKDMZLZPBSXUJGOGKJARHXCNRALJKZSTWJQALCFJHYUFPGFEIQSWBZJIULAUFMFHRZPIHCVBGZNPAGXEMUDOBFDHMSXJHDYBGWCEIAAC");

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
    msg.setTimeStamp(0.7701186450385326);
    msg.setSource(64076U);
    msg.setSourceEntity(234U);
    msg.setDestination(874U);
    msg.setDestinationEntity(26U);
    msg.sessid = 1726520250U;
    msg.messages.assign("NJTRFMRPCFMHXYGIINIFQZAFHCUDIUWBKBVNKHBGKVEQRUZHWRBAIXW");

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
    msg.setTimeStamp(0.2941635996227874);
    msg.setSource(17944U);
    msg.setSourceEntity(215U);
    msg.setDestination(63846U);
    msg.setDestinationEntity(109U);
    msg.sessid = 3828733741U;

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
    msg.setTimeStamp(0.07783979148768694);
    msg.setSource(14711U);
    msg.setSourceEntity(138U);
    msg.setDestination(44865U);
    msg.setDestinationEntity(190U);
    msg.sessid = 3349161308U;

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
    msg.setTimeStamp(0.5885621558224083);
    msg.setSource(12248U);
    msg.setSourceEntity(194U);
    msg.setDestination(23143U);
    msg.setDestinationEntity(241U);
    msg.sessid = 673157935U;

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
    msg.setTimeStamp(0.8142947914848586);
    msg.setSource(10438U);
    msg.setSourceEntity(51U);
    msg.setDestination(21272U);
    msg.setDestinationEntity(73U);
    msg.sessid = 1649644959U;
    msg.status = 143U;

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
    msg.setTimeStamp(0.629074699311003);
    msg.setSource(12423U);
    msg.setSourceEntity(157U);
    msg.setDestination(19186U);
    msg.setDestinationEntity(211U);
    msg.sessid = 108975160U;
    msg.status = 106U;

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
    msg.setTimeStamp(0.7328733461953231);
    msg.setSource(29508U);
    msg.setSourceEntity(196U);
    msg.setDestination(44867U);
    msg.setDestinationEntity(6U);
    msg.sessid = 661406218U;
    msg.status = 63U;

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
    msg.setTimeStamp(0.4118929802010054);
    msg.setSource(40572U);
    msg.setSourceEntity(226U);
    msg.setDestination(55675U);
    msg.setDestinationEntity(174U);
    msg.name.assign("CJEBKHXZXPUUKUQZXSPNJMBFVYKCQHCVUTCOSMSOGLLQGJFHDZJDEASMFYXNKWECRRTJFVWVZSWRZLNOXDRPGQWNPLIWBDRQEWERHNFBOGVEDIPMPJQGXYBFLIWZVKOAGROLCLTNZFTNTPUDVEDSIIFWHHXOCXZLTILAOYMCICRJOYVGJDUIELIXQEMBASSFAQTVSKMTUKHTHOAWBAPERMKGBRBTKHZNYJAHZGDUUPNDYWVGUMYF");

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
    msg.setTimeStamp(0.02234647500097131);
    msg.setSource(23675U);
    msg.setSourceEntity(61U);
    msg.setDestination(18159U);
    msg.setDestinationEntity(140U);
    msg.name.assign("KRCSOEGIQNNBPOYMPPEGFLADCIORNTWIJQSDGDRHRYUGDUJYUJXCJIYCHPINRYLZMCMPKIKWABOC");

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
    msg.setTimeStamp(0.8833255188984908);
    msg.setSource(12968U);
    msg.setSourceEntity(166U);
    msg.setDestination(14682U);
    msg.setDestinationEntity(180U);
    msg.name.assign("OGAVCFOTOWZPHBGHZFZGKUCACZKOLRRMFYLMJWONZXTEQFFDDVBDXHXOXWTCLCSMPKPRNGHFADZPDSVFIUNPCNJYPGLIAKGIGQDLQMGXHIJRRTBNEBULQELWYDVKSQTCKTMFJZSMTNQTBEYVAHKZONJLUKPZZTRFAQMAAQMVBHGYEHGKRWDXERUFTUSEIVUUWDSPKXIOCBROUCWNOSSHEQEJYXXVIAQMBSDIWULYELIJVY");

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
    msg.setTimeStamp(0.7334954688191261);
    msg.setSource(6033U);
    msg.setSourceEntity(247U);
    msg.setDestination(22628U);
    msg.setDestinationEntity(25U);
    msg.name.assign("TGGMQVOHDDPNSUXLKXKOWAFFILLVSDYODXQPBFBSSEFIMZRINWLPOUHGLIEZUUEXTPINXHWPIRRRVICKTESVZCNYUDPSXHNMIQWJYJKHJGHNSMVJRJDZGOKWNAPQCLWVVOYKAMTCBWLIVKXNJDSNPAXFLLFKRHYBEOQVRPSQDYUUXTYBQTUOCYMWGQIABZCRWHYGZOAPBSZAEAAUGZTMCUEROGJ");

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
    msg.setTimeStamp(0.8241153982735194);
    msg.setSource(6745U);
    msg.setSourceEntity(247U);
    msg.setDestination(13599U);
    msg.setDestinationEntity(119U);
    msg.name.assign("REUSYWMHLABBOKBZNKUVJGLPNWPMKGYXANNPNTQZSGRKNLOUXDXNBUQWZYHNJYGNHEAUDGYILKCDZEHQQHVJWXRTUTXQSJOMMURJEWTPEVIXAPYTMCDHOZYHRBWRDVSCFFZRMXCMTZQEDCFRFAXLIKCPDEKOEBJGAFVOPWJEAJSGWFVRVSRHQVCICZKOPUDSMJTTZBHT");

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
    msg.setTimeStamp(0.16644689509050337);
    msg.setSource(1271U);
    msg.setSourceEntity(199U);
    msg.setDestination(41634U);
    msg.setDestinationEntity(19U);
    msg.name.assign("VNVSFUHVHULFWRPZPVQJJLVOZTBGUIAZNZTRDALQEICEMAEWNPQKIYFJZBUSYFOZWLUOPRYTJTQDZYOINHKBVSXHLCBVYPKXXXSFNZUYBTRORKZSTROFGSJCYWJCVSKEORAPAGMWABVBLKMMTSKDAECDJWAIXNHLANGTHGAXWNDYMCGQLQTL");

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
    msg.setTimeStamp(0.03513282843441745);
    msg.setSource(2135U);
    msg.setSourceEntity(114U);
    msg.setDestination(5897U);
    msg.setDestinationEntity(86U);
    msg.type = 90U;
    msg.error.assign("WORTVCRBKFTDYGMRPBJEFMMHGXOFKNBEHKQXEVLSXILWGLC");

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
    msg.setTimeStamp(0.5055487764306332);
    msg.setSource(61597U);
    msg.setSourceEntity(63U);
    msg.setDestination(64717U);
    msg.setDestinationEntity(65U);
    msg.type = 55U;
    msg.error.assign("ERZJECEDXIFAGIMGEACEDDUIQFAVBEYKDDBASPGXFPCKUHPAJVKPRJBUSSFFZOTGRNXRYJFXKZPUIVXOYBNUNXOBSLXWKYXWTTRHNQWLLQXJXKNQAZHULERMGOQVBUCBMVHHYVJNFFJLGCHWJZWHLVYCMPOGTEWODZ");

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
    msg.setTimeStamp(0.03214593450798375);
    msg.setSource(23241U);
    msg.setSourceEntity(129U);
    msg.setDestination(23938U);
    msg.setDestinationEntity(166U);
    msg.type = 98U;
    msg.error.assign("BYMAGNAHXAPYEPGUHOYSAHAXKFVCOTICQKUVPODQKOGIYFSYZSJZDVLODPXAFESILUNYTDZTJLVVX");

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
    msg.setTimeStamp(0.8498602605170231);
    msg.setSource(63387U);
    msg.setSourceEntity(192U);
    msg.setDestination(62167U);
    msg.setDestinationEntity(100U);
    msg.seq = 19306U;
    msg.sys_dst.assign("VBVLGDFLEENFJHZOHRBVYHOMCOCYEEQBCCZNRJHEYFNVGXOODDSZFYSMZSRORUYKGWJRGWMFHSELPTMHLQFJIWYBRSUMXUCXTUKRLAUTNG");
    msg.flags = 239U;
    const signed char tmp_msg_0[] = {-73, -128, -128, -40, 49, -81, -10, -86, 100, 32, -37, 50, 122, -5};
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
    msg.setTimeStamp(0.0652045164357773);
    msg.setSource(59930U);
    msg.setSourceEntity(71U);
    msg.setDestination(44765U);
    msg.setDestinationEntity(36U);
    msg.seq = 32389U;
    msg.sys_dst.assign("WOXZWGHDPAYSV");
    msg.flags = 164U;
    const signed char tmp_msg_0[] = {-10, 125, -114, 80, 100, 64, 120, -5, 109, 89, -34, -18, -118, -90, -114, -1, 71, -60, -58, -95, -103, 97, -15, 113, 46, 56, 119, 112, -20, -92, -97, 60, 60, -58, 27, -6, -90, -69, -120, -28, 73, 98, -55, 114, 2, -36, -88, 66, -119};
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
    msg.setTimeStamp(0.9290198521278141);
    msg.setSource(13008U);
    msg.setSourceEntity(71U);
    msg.setDestination(23916U);
    msg.setDestinationEntity(193U);
    msg.seq = 58745U;
    msg.sys_dst.assign("ZWTFTZICPVCBXOWWNIWHS");
    msg.flags = 227U;
    const signed char tmp_msg_0[] = {44, -93, -74, -61, 72, 89, 114, 122, -22, -84, 97, 45, 117, 112, 39, -75, 71, -44, 112, -63, 55, 118, -51, 64, -126, -30, -68, 49, 62, -80, -118, 68, 29, -91, 119, 61, 82, 10, -78, -82, 26, 117, 6, -122, 58, 126, -95, -3, -63, -44, -86, 54, -89, 26, -117, -106, -44, 118, 117, 119, 88, 95, -24, -20, -43, -55, 97, -59, 115, -72, -13, 79, -117, 7, -3, 7, -15, -66, 46, -32, -104, 122, -3, -27, 94, 25, -16, -103, 107, 77, 106};
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
    msg.setTimeStamp(0.01587508572806917);
    msg.setSource(9382U);
    msg.setSourceEntity(101U);
    msg.setDestination(7559U);
    msg.setDestinationEntity(157U);
    msg.sys_src.assign("QJZODRJECBOHQTNNKVCJUZUVRIHISYJKQOIMLUTGFKECYSAVFBYYVHUWGXAEQUTSEEAVLAZSODUXCKWNZGCVZOWLPGDPHTXWKWEAHKDXMBYHEKJXCA");
    msg.sys_dst.assign("HXTMROESDCSIKSCUBZOCLNPORVXMCRAJKPGTZJQABGGYJETPAUCPNESDHMEROXRMNCBJUWVJMYKPMGGKNCDIWQHCIZNAIERDHFOGLYWTUTPFDZVQETROUFCYSRIBXTVUJUUFUYSQLVCKVZHLUIXGOHDYFASNEJAIJEBXQX");
    msg.flags = 187U;
    const signed char tmp_msg_0[] = {53, -123, -20, 103, -8, -87, 82, -80, 123, 118, 79, -59, 19, -5, 4, -24, -62, 93, -65, 34, -84, -127, 5, -120, 50, 95, -2, 119, 83, -89, 93, 54, -22, 79, -127, -85, 32, -108, -3, -102, -30, 105, -21, 74, -21, 30, -8, -55, -73, -70, 52, 119, -63, -60, 35, 106, -82, 26, 104, -88, 67, 26, 18, -108, 110, -87, 92, 91, 10, -20, 4, -9, -84, -117, -125, -15, -41, -73, -94, -97, -69, -80, -56, 112, -78, -31, 37, -101, -51, -29, -42, -99, -104, -46, 2, 92, -119, -81, -109, 48, -10, 120, -101, 79, 96, -35, 25, -59, 66, -90, 48, -32, 104, 37, 18, 111, 25, 5, -55, -81, 22, 34, 86, 83, 6, -54, -13, 93, -89, 31, 26, 56, 87, -107, -87, 118, -128, -3, 28, 12, -124, 51, -113, -52, -83, -28, -61, -124, 81, -29, -111, -7, -33, 114, 59, -68, -74, -124, -81, -54, -122, -18, 11, -15, 42, 86, -28, -27, 126, -95, 119, 88, 50, -13, -79};
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
    msg.setTimeStamp(0.002089643738157121);
    msg.setSource(27309U);
    msg.setSourceEntity(216U);
    msg.setDestination(44985U);
    msg.setDestinationEntity(125U);
    msg.sys_src.assign("CAWKPNLNFELDDYMAGXIQAPSBYFBYTOTXYRVPHWQEHLKOAJWKCUUIPIDRONXKLQQXWULMEHMTDCYRDIFVPUBQXBCZPSTBRCHBVLRFZMQIGZEHUCTAZGVNSIPSXEJVSCNAMZRJWUHGBFIAQEMWSBXLCHPHAFKNYKTNJYVGVYSANOJMUZXDGYKHXRSPKLUTTVWGHSEVNMTCFKVIWPECRJFUQOMOOFQZDRGEWLMBEOZYTAJDFZZDUIKXQBSNRW");
    msg.sys_dst.assign("NTRFDUZKRLBYYHVKICU");
    msg.flags = 94U;
    const signed char tmp_msg_0[] = {126, -89, 6, -47, 35, -39, -63, -78, 58, 35, 23, -28, 8, -52, 57, 53, -17, -40, -76, 122, -52, -31, -120, -38, -89, 103, -123, 85, 66, -30, -88, -69, -124, 40, -5, 21, 92, -113, 18, -125, -21, 40, -26, -73, 53, -84, 37, -52, 101, 22, -58, -12, -99, -57, 65, 92, 95, -30, 96, -116, -52, 74, 92, -31, -65, -111, -49, -29, 20, 55, 66, 44, -61, 47, -30, 18, -41, 92, -30, -25, 32, 67, -59, 53, 65, 122, 6, 97, 58, -8, -111, -41, -52, 112, 105, 96, -120, -73, 30, 83, 43, 10, -69, 43, 99, 114, -42, -65, -77, 39, -95, -1, 28, 26, -37, 1, 65, 119, 17, -80, 3, -83, 106, -20, 105, -8, -126, 74, -59, 8, -61, -106, -71, 110, -55, 20, 110, 41, 40, 0, -7, 78, -125, 116, -90, -96, -59, 38, -66, -63, 12, -108, 56, -15, 53, -24, -125};
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
    msg.setTimeStamp(0.8918885908912668);
    msg.setSource(64465U);
    msg.setSourceEntity(43U);
    msg.setDestination(38440U);
    msg.setDestinationEntity(39U);
    msg.sys_src.assign("ZWTYILFEONIRCUQTCTLXAZMDYBHPNMQWCGJHPOVTPEVTLLSBQEUFUKOLOCLPBKDUTQXZDSGDXNLPGKDJOQUUZXIWSBJOHHEGMAVTXWCFJVWPTKLNTXXFJHEOAEBGGNJCIEKMIZVFVSWFRARYKIZCHGRDMMWIMJUMYCGJYSZRACVEDSIHPBNDYFYRGHAPUDEZLKPGQORXHYQVQVM");
    msg.sys_dst.assign("UWUFKBJVCFZAEWQIBGOEQNDWHHVXLFRUATDNLZMKTWKRAGVPDOVVJIIPRXQYFWSEQFEHKBCHYDGNXKXCRGKGSMFACLYIAZBNVFXASJGYETQHUMTMSZXCMEPNXEOZSACOFIWRGLUHDEJRUJDVHTTISFYZKXCWREMCKOQGPPMVVUFXLNBMNPCHIYOGPQOIPINATJBAH");
    msg.flags = 95U;
    const signed char tmp_msg_0[] = {74, 31, 119, 61, 81, 82, -76, -120, 49, 105, -116, -79, -62};
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
    msg.setTimeStamp(0.7587856043999134);
    msg.setSource(14096U);
    msg.setSourceEntity(204U);
    msg.setDestination(16098U);
    msg.setDestinationEntity(46U);
    msg.seq = 1569U;
    msg.value = 31U;
    msg.error.assign("YKNXHTISFZNKCIIVNEM");

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
    msg.setTimeStamp(0.8503363985731007);
    msg.setSource(50832U);
    msg.setSourceEntity(43U);
    msg.setDestination(10861U);
    msg.setDestinationEntity(99U);
    msg.seq = 30493U;
    msg.value = 157U;
    msg.error.assign("SGNUNRIDGSJCVZSVIABNTLEGMOXRTMXBHHCBOMFJUDZFHADOBUDSVXTRSHUXPPWVLSJHMQCJFBXMAAEYYULKLFOOIAGUDYHNOKCSWMCJICAKJWVYNVBZCWRGTILEPHLRMJLABKDLYRXEFPXVYRLZMJEFGXNZSVTKSBRCZGNWMKENWIZEQWCTEPYKNRQZYWUAIFPXLBKDHFQEUKYJUWHSVPATQKZFOBIHFQDDXUOQ");

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
    msg.setTimeStamp(0.5776177703759636);
    msg.setSource(7028U);
    msg.setSourceEntity(0U);
    msg.setDestination(21042U);
    msg.setDestinationEntity(28U);
    msg.seq = 29789U;
    msg.value = 51U;
    msg.error.assign("ZXQAAZHFHXACQRYVBBPHQNNQEUVYOCE");

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
    msg.setTimeStamp(0.6387708836086432);
    msg.setSource(43358U);
    msg.setSourceEntity(219U);
    msg.setDestination(30555U);
    msg.setDestinationEntity(37U);
    msg.seq = 1069U;
    msg.sys.assign("MWDJNHFFZZDOGTCSTNRRYTKASCORNFLFPLQXPHKGDGDQBALWVPELAMOYSYXFYEPGBENQQCKCVDYJBOYARUHWYUQUNBQZIPCGXUITGXVUASXUYHEMMKFIJUHXVTLJDJNPFZIMMUEORSZIBCQVCBGDBLEHDNKIRBFLJPUOOGNAZNN");
    msg.value = 0.6551036214751101;

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
    msg.setTimeStamp(0.3616019231156232);
    msg.setSource(59671U);
    msg.setSourceEntity(156U);
    msg.setDestination(13768U);
    msg.setDestinationEntity(107U);
    msg.seq = 24419U;
    msg.sys.assign("FUREWUOVIIIUIOANOCHFTTLHYHTDBPBTRXYFXRCBROKQTGSNCSJZYTAQBSYTYVQIESZCNLMDXURJSOMEFMLJTVSUZAXIYKMKUMWELEYVQIDBGYCLRPKEBSEQNZDAVNGDPWKLMGHMUYMSWSJLJVNVAWKTZWQDQUUBXZZCEZOLOXCGCYMUHWHROHPFRDCPXWPNAOXTGBQDJNXDFKGOPKXBPFPRFKNJFJSVRHZMAKQ");
    msg.value = 0.6020272383165218;

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
    msg.setTimeStamp(0.5344638172916858);
    msg.setSource(64368U);
    msg.setSourceEntity(184U);
    msg.setDestination(10088U);
    msg.setDestinationEntity(150U);
    msg.seq = 50572U;
    msg.sys.assign("QBWIDWDBVMXVHPDFSUVGLKUOAUQQEWNSFYTBNZZEHUCYFGXKRIEONSTGGMOCGTYXAMZNRQTEIMAHJGNWQXICDXXMVPUUHOTXIEKKZEOEDHWPJJWORFKUNFRLNRHULAPKWIGAMHM");
    msg.value = 0.9455520896988502;

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
    msg.setTimeStamp(0.3160751244213911);
    msg.setSource(49457U);
    msg.setSourceEntity(172U);
    msg.setDestination(27082U);
    msg.setDestinationEntity(52U);
    msg.seq = 2011U;
    msg.sys_dst.assign("RPKJYHINHXLONMLDSYRAVPQBXDQGPKQMIGSWNKVBPOYTBUYHEBJBDQMTZZFWHKDSUDNUQIORGORUTXHAPPYEERLHMHZTCCTKUYSEVJNCHAZV");
    msg.timeout = 0.17871188546122707;

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
    msg.setTimeStamp(0.04655817448599642);
    msg.setSource(65394U);
    msg.setSourceEntity(87U);
    msg.setDestination(8015U);
    msg.setDestinationEntity(117U);
    msg.seq = 8215U;
    msg.sys_dst.assign("TLJGUZREBOHYWWGUSTSHQTIHILYREZEOSLKFUQOAWMVLMVVBGGTSYQAAVCYUYMAOQMKVUWNMDINWDFEBEKAIHJMRFOFPRQUYLHYCXIZZXDLSNOCIYNHN");
    msg.timeout = 0.3087017042200617;

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
    msg.setTimeStamp(0.6751957104802229);
    msg.setSource(50064U);
    msg.setSourceEntity(242U);
    msg.setDestination(59290U);
    msg.setDestinationEntity(144U);
    msg.seq = 54788U;
    msg.sys_dst.assign("PCMCANKNIZSEDWZDLPEQDAASVZSFOQAVEATEULEDDTTLRJKLMAUKHXIRRVGHRUZXRYJBIBVWLDQMDWYTBKGQYAEJCOWATFFLGKMJIQRQAKZPCFJVMKFXTFNHLFPNACIBYUWZQXJWBUFJILHOEPLRVUTTIZWVVJMQNGUSPSYPNVIESWXEOJQXWQCGYOXH");
    msg.timeout = 0.2009417309574456;

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
    msg.setTimeStamp(0.6663704872582733);
    msg.setSource(63722U);
    msg.setSourceEntity(167U);
    msg.setDestination(51096U);
    msg.setDestinationEntity(104U);
    msg.action = 170U;
    msg.longain = 0.5840657538221976;
    msg.latgain = 0.2452900270615046;
    msg.bondthick = 1662073960U;
    msg.leadgain = 0.0341986523193295;
    msg.deconflgain = 0.34423677483297155;

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
    msg.setTimeStamp(0.4684120930933038);
    msg.setSource(1474U);
    msg.setSourceEntity(104U);
    msg.setDestination(51696U);
    msg.setDestinationEntity(208U);
    msg.action = 230U;
    msg.longain = 0.47861751778409567;
    msg.latgain = 0.25563026148443857;
    msg.bondthick = 1973201712U;
    msg.leadgain = 0.21819052044730125;
    msg.deconflgain = 0.06154778477000644;

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
    msg.setTimeStamp(0.7073864402479347);
    msg.setSource(14033U);
    msg.setSourceEntity(185U);
    msg.setDestination(50635U);
    msg.setDestinationEntity(208U);
    msg.action = 184U;
    msg.longain = 0.9162428109926162;
    msg.latgain = 0.05107449384622764;
    msg.bondthick = 3699174496U;
    msg.leadgain = 0.17708503155645594;
    msg.deconflgain = 0.045722977808788534;

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
    msg.setTimeStamp(0.8242544095958733);
    msg.setSource(51382U);
    msg.setSourceEntity(187U);
    msg.setDestination(6320U);
    msg.setDestinationEntity(93U);
    msg.err_mean = 0.4578448701720168;
    msg.dist_min_abs = 0.3773579586434542;
    msg.dist_min_mean = 0.7161890666627206;

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
    msg.setTimeStamp(0.7622463438293364);
    msg.setSource(17493U);
    msg.setSourceEntity(68U);
    msg.setDestination(45867U);
    msg.setDestinationEntity(49U);
    msg.err_mean = 0.051702096546282994;
    msg.dist_min_abs = 0.48468833873374795;
    msg.dist_min_mean = 0.32548131791796875;

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
    msg.setTimeStamp(0.7936375940350189);
    msg.setSource(63030U);
    msg.setSourceEntity(86U);
    msg.setDestination(34419U);
    msg.setDestinationEntity(21U);
    msg.err_mean = 0.07948784366410078;
    msg.dist_min_abs = 0.8994226526964337;
    msg.dist_min_mean = 0.7107240108617969;

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
    msg.setTimeStamp(0.6132756576412516);
    msg.setSource(47787U);
    msg.setSourceEntity(47U);
    msg.setDestination(63860U);
    msg.setDestinationEntity(192U);
    msg.action = 223U;
    msg.lon_gain = 0.4645921658384856;
    msg.lat_gain = 0.21950094669899411;
    msg.bond_thick = 0.9042529243331152;
    msg.lead_gain = 0.8420932704863565;
    msg.deconfl_gain = 0.19872482353452414;
    msg.accel_switch_gain = 0.9642925955459444;
    msg.safe_dist = 0.21573641912097807;
    msg.deconflict_offset = 0.5643302296511046;
    msg.accel_safe_margin = 0.5087156753760202;
    msg.accel_lim_x = 0.851133923367861;

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
    msg.setTimeStamp(0.3250802381678837);
    msg.setSource(34682U);
    msg.setSourceEntity(138U);
    msg.setDestination(38550U);
    msg.setDestinationEntity(49U);
    msg.action = 80U;
    msg.lon_gain = 0.1955350214149275;
    msg.lat_gain = 0.3222423950143257;
    msg.bond_thick = 0.3684254063484186;
    msg.lead_gain = 0.46286411693725016;
    msg.deconfl_gain = 0.5268180775076141;
    msg.accel_switch_gain = 0.6106835555467285;
    msg.safe_dist = 0.8646220085876017;
    msg.deconflict_offset = 0.10208862569624444;
    msg.accel_safe_margin = 0.6936164405375044;
    msg.accel_lim_x = 0.9220027992506452;

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
    msg.setTimeStamp(0.8407058121830857);
    msg.setSource(55026U);
    msg.setSourceEntity(131U);
    msg.setDestination(28252U);
    msg.setDestinationEntity(32U);
    msg.action = 177U;
    msg.lon_gain = 0.5785055036737075;
    msg.lat_gain = 0.4140612371028719;
    msg.bond_thick = 0.5693911617005878;
    msg.lead_gain = 0.5146750931867544;
    msg.deconfl_gain = 0.8345479328617261;
    msg.accel_switch_gain = 0.6094644216387533;
    msg.safe_dist = 0.2939617503159577;
    msg.deconflict_offset = 0.419782752082435;
    msg.accel_safe_margin = 0.25938327034976216;
    msg.accel_lim_x = 0.5269244802918808;

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
    msg.setTimeStamp(0.44514356959455936);
    msg.setSource(44719U);
    msg.setSourceEntity(22U);
    msg.setDestination(31419U);
    msg.setDestinationEntity(254U);
    msg.type = 2U;
    msg.op = 63U;
    msg.err_mean = 0.0028967096230636535;
    msg.dist_min_abs = 0.5972457063926381;
    msg.dist_min_mean = 0.16866901067039186;
    msg.roll_rate_mean = 0.33833599380420476;
    msg.time = 0.4183393571629619;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 173U;
    tmp_msg_0.lon_gain = 0.8936211318274158;
    tmp_msg_0.lat_gain = 0.8613306270045675;
    tmp_msg_0.bond_thick = 0.4815270393024844;
    tmp_msg_0.lead_gain = 0.3408731395580923;
    tmp_msg_0.deconfl_gain = 0.5917690333921714;
    tmp_msg_0.accel_switch_gain = 0.5665066983799862;
    tmp_msg_0.safe_dist = 0.7794886935300432;
    tmp_msg_0.deconflict_offset = 0.3207906824172906;
    tmp_msg_0.accel_safe_margin = 0.7940918058543956;
    tmp_msg_0.accel_lim_x = 0.2736028229948887;
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
    msg.setTimeStamp(0.4017924808688903);
    msg.setSource(25895U);
    msg.setSourceEntity(148U);
    msg.setDestination(19603U);
    msg.setDestinationEntity(8U);
    msg.type = 237U;
    msg.op = 22U;
    msg.err_mean = 0.47943293195030057;
    msg.dist_min_abs = 0.0899663451784749;
    msg.dist_min_mean = 0.1125766238414192;
    msg.roll_rate_mean = 0.1313189933199912;
    msg.time = 0.27610291204765314;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 133U;
    tmp_msg_0.lon_gain = 0.2127970000236128;
    tmp_msg_0.lat_gain = 0.07668110952130647;
    tmp_msg_0.bond_thick = 0.8877035277762195;
    tmp_msg_0.lead_gain = 0.3894183921491813;
    tmp_msg_0.deconfl_gain = 0.6239169367781652;
    tmp_msg_0.accel_switch_gain = 0.26135235425627856;
    tmp_msg_0.safe_dist = 0.9114751843367486;
    tmp_msg_0.deconflict_offset = 0.5681920739759255;
    tmp_msg_0.accel_safe_margin = 0.21665462594984664;
    tmp_msg_0.accel_lim_x = 0.9861444369343191;
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
    msg.setTimeStamp(0.4457068340112107);
    msg.setSource(34482U);
    msg.setSourceEntity(65U);
    msg.setDestination(28419U);
    msg.setDestinationEntity(139U);
    msg.type = 22U;
    msg.op = 179U;
    msg.err_mean = 0.3349012394463984;
    msg.dist_min_abs = 0.6798628047578246;
    msg.dist_min_mean = 0.7201737030591301;
    msg.roll_rate_mean = 0.491417325905082;
    msg.time = 0.2596088889351499;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 85U;
    tmp_msg_0.lon_gain = 0.336116373208883;
    tmp_msg_0.lat_gain = 0.668303814117279;
    tmp_msg_0.bond_thick = 0.4050787794558034;
    tmp_msg_0.lead_gain = 0.3903603236789923;
    tmp_msg_0.deconfl_gain = 0.9375514611513316;
    tmp_msg_0.accel_switch_gain = 0.08855969649159634;
    tmp_msg_0.safe_dist = 0.0556266336298189;
    tmp_msg_0.deconflict_offset = 0.4545919450043887;
    tmp_msg_0.accel_safe_margin = 0.6989536786280811;
    tmp_msg_0.accel_lim_x = 0.00039956118516681904;
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
    msg.setTimeStamp(0.1704931841643167);
    msg.setSource(53765U);
    msg.setSourceEntity(44U);
    msg.setDestination(46921U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.9473906086016257;
    msg.lon = 0.7483168691588608;
    msg.eta = 3748514997U;
    msg.duration = 56727U;

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
    msg.setTimeStamp(0.07812732797780475);
    msg.setSource(45061U);
    msg.setSourceEntity(138U);
    msg.setDestination(10236U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.8859370416146977;
    msg.lon = 0.5311007523417844;
    msg.eta = 3613451481U;
    msg.duration = 35755U;

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
    msg.setTimeStamp(0.6292429990741827);
    msg.setSource(55297U);
    msg.setSourceEntity(62U);
    msg.setDestination(65246U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.6361732918021078;
    msg.lon = 0.5119087494811714;
    msg.eta = 3878045054U;
    msg.duration = 8427U;

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
    msg.setTimeStamp(0.6764759488518384);
    msg.setSource(51105U);
    msg.setSourceEntity(44U);
    msg.setDestination(5450U);
    msg.setDestinationEntity(158U);
    msg.plan_id = 992U;

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
    msg.setTimeStamp(0.670540960920459);
    msg.setSource(4397U);
    msg.setSourceEntity(198U);
    msg.setDestination(57198U);
    msg.setDestinationEntity(251U);
    msg.plan_id = 56993U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.6829453149927858;
    tmp_msg_0.lon = 0.9687460462631959;
    tmp_msg_0.eta = 750173038U;
    tmp_msg_0.duration = 56267U;
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
    msg.setTimeStamp(0.5202481513593415);
    msg.setSource(52905U);
    msg.setSourceEntity(14U);
    msg.setDestination(46867U);
    msg.setDestinationEntity(221U);
    msg.plan_id = 60384U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.1142439433030491;
    tmp_msg_0.lon = 0.5900129595655078;
    tmp_msg_0.eta = 3166756899U;
    tmp_msg_0.duration = 16534U;
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
    msg.setTimeStamp(0.13116953225339334);
    msg.setSource(1598U);
    msg.setSourceEntity(244U);
    msg.setDestination(4014U);
    msg.setDestinationEntity(8U);
    msg.type = 50U;
    msg.command = 210U;
    msg.settings.assign("BDKTSDFLRNKOVMBVQVDUYLWFPMVDULMULJMWTCLXHUSIJNRNUXZRWQKGEJRPYRUEFZOYCMCBDXEAVSYEMNKBUOREAVNIXHVWKTLJFBBGYHMCYEEAOCQYXGZATSJGTFTMPIKGXWKROMZPWPIQPUYCGYUAQQJQNHSTPIFOL");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 11711U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LWIPDDJTDEICHAQYEVLQPAOHZDGNISNJVZGYEPQOJKJQESIIKZWDOASEYMIDACXT");

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
    msg.setTimeStamp(0.9290798395003241);
    msg.setSource(47521U);
    msg.setSourceEntity(189U);
    msg.setDestination(16206U);
    msg.setDestinationEntity(243U);
    msg.type = 32U;
    msg.command = 117U;
    msg.settings.assign("XLSNBZYMVGQUOXQDORHEPUODBOQNMXPLLPSSVBNQTJYHXGIUTWVGFPQLTWAIUKICOBBFULKYDVUHNGJWACLVGZRVHKASPZWUXGBRCYSQZTMZVLHTKDSVTAMJNAFQRHEWFIXJDBWJCJDSUOERUGTTRWWALYDNZKILSKIEICWYYI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 43977U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PXFMEWPRITBLRSONFFPJPWDMBLHCDUVHVENEDVEWTNHHMEHATNIRTQRDUKDAZCQVYFANLHXWGYZSKDBJMEHTRYNAKTDOFUBZJWWLWAOZNUYOTKGPZBQRSIYGCGCSN");

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
    msg.setTimeStamp(0.38392898760483507);
    msg.setSource(24268U);
    msg.setSourceEntity(115U);
    msg.setDestination(49383U);
    msg.setDestinationEntity(111U);
    msg.type = 66U;
    msg.command = 78U;
    msg.settings.assign("ZCESHABITQUEVUHUCOKWYBFGHWTEMONJYDIHVJHLENQKHFXLACOFEDEWLRPSJYTZYOTSBXIRQKNQXLOIYASFAWSHTGDLUNCX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 48273U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZXKEHJGMOSTQYRMDVCLGDZINLWTXFYKNJYFPHQXZOUIBQYLTAICFPZKOSLUASGCXJKCEUSMUJVLTSYCAIFMONEFFWSPIAFUBAWERCMODXLXDNNWSRKNDRVBQHFGTWPMADBGNBOUHTQOHPKQYHGCTDTSJZPYYGXEPAWTVEIUTKHYBLRHFXRNQBQMEUZCWKOAULQVIMNWHMJPBIXPHIMYVDQ");

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
    msg.setTimeStamp(0.7332947487427183);
    msg.setSource(37688U);
    msg.setSourceEntity(203U);
    msg.setDestination(45955U);
    msg.setDestinationEntity(94U);
    msg.state = 198U;
    msg.plan_id = 10210U;
    msg.wpt_id = 177U;
    msg.settings_chk = 58379U;

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
    msg.setTimeStamp(0.5580349894676923);
    msg.setSource(24910U);
    msg.setSourceEntity(52U);
    msg.setDestination(3947U);
    msg.setDestinationEntity(92U);
    msg.state = 153U;
    msg.plan_id = 58057U;
    msg.wpt_id = 167U;
    msg.settings_chk = 52496U;

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
    msg.setTimeStamp(0.7506624204875488);
    msg.setSource(45903U);
    msg.setSourceEntity(172U);
    msg.setDestination(1814U);
    msg.setDestinationEntity(176U);
    msg.state = 114U;
    msg.plan_id = 58305U;
    msg.wpt_id = 37U;
    msg.settings_chk = 54049U;

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
    msg.setTimeStamp(0.8162363365876839);
    msg.setSource(2558U);
    msg.setSourceEntity(242U);
    msg.setDestination(54864U);
    msg.setDestinationEntity(22U);
    msg.uid = 48U;
    msg.frag_number = 0U;
    msg.num_frags = 112U;
    const signed char tmp_msg_0[] = {47, -83, 114, 35, 50, -49, 46, 57, -29, -35, 113, 29, 85, 119, 19, -101, -93, 38, 29, -11, -13, 42, -35, 120, 79, -15, -66, -52, 125, 80, 112, 79, 49, -98, 27, 96, -105, 40, 10, 20, -94, -37, 60, 6, 115, 63, 27, -127, -20, -11, -33, 121, 21, 10, 71, -2, -74, -53, 23, -90, 22, 72, 13, 11, -54, 74, 94, -39, 45, 73, -44, -17, 73, -101, 119, -26, -59, 65, 17, 112, -33, 46, -10, -79, -42, 101, -52, -93, -107, -81, 96};
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
    msg.setTimeStamp(0.37668804841711734);
    msg.setSource(11955U);
    msg.setSourceEntity(169U);
    msg.setDestination(27960U);
    msg.setDestinationEntity(49U);
    msg.uid = 208U;
    msg.frag_number = 161U;
    msg.num_frags = 124U;
    const signed char tmp_msg_0[] = {-40, -25, -45, -77, 26, -49, 109, 13, -37, 93, 64, 20, 57, -120, 78, -102, 42, -8, 9, 126, 83, 89, 69, -104, -4, -121, -80, 101, 72, 94, 94, 74, 30, -29, 79, -99, -96, -45, 11, 40, -50, -51, -52, 92, 51, -2, 120, -71, -54, 4, -89, -100, -41, 101, 54, 60, -39, -97, -95, 107, -87, -69, -65, 114, 47, -67, 66, 93, -103, 65, -120, -81, 2, 20, -87, -50, 34, -21, -39, -36, 23, -77, -1, -6, -63, 93, 17, -124, -64, 118, 15, -95, -95, -44, 108, -80, -120, -25, 35, 85, 38, 0, 76, 3, 19, -71, 50, 70, -78, -109, 41, -77, -14, 9, -39, 14, 47, 52, 18, 45, 112, 58, -87, -30, -35, -12, -52, -4, -76, 109, 36};
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
    msg.setTimeStamp(0.23338047001281714);
    msg.setSource(22069U);
    msg.setSourceEntity(178U);
    msg.setDestination(9260U);
    msg.setDestinationEntity(142U);
    msg.uid = 101U;
    msg.frag_number = 67U;
    msg.num_frags = 50U;
    const signed char tmp_msg_0[] = {-68, 86, -126, -43, 122, 60, 64, -109, -36, -10, -41, -100, 99, -105, 126, -83, -67, 109, -115, 45, 62, -26, 87, 83, -62, -54, 113, 46, -117, 73, 113, -90, -77, -21, -99, 81, 60, 94, -44, -33};
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
    msg.setTimeStamp(0.28253775762169364);
    msg.setSource(39195U);
    msg.setSourceEntity(167U);
    msg.setDestination(15742U);
    msg.setDestinationEntity(70U);
    msg.content_type.assign("DFCKGGCHBCUSCADMVYXZTJZWWJSLOXIUAZOMBNAXLZYEMIJVFIPVPMNILDLRYEOKEOQMMRJRLKFTACDGSFGMVCBPRVLMXDTRPRYCNOPFBPWSWWICNQVONFTFSRQAUEKJDKGJBIWGKCTZZMKRXFZAIVUWQYEVHO");
    const signed char tmp_msg_0[] = {21, -95, -91, -107, 32, -97, -65, 47, 84, 115, -112, -27, -36, -83, 108, -48, -103, -16, -62, 74, -18, -12, 81, 102, -67, -68, -38, 33, 121, -5, 31, -49, -12, -32, 59, 85, -89, 6, 45, -94, -25, 7, -93, -115, -110, -24, 89, -98, -50, 70, -124, 17, 79, -74, 2, 40, -114, -122, -114, 69, -99, 31, 103, 112, 87, 124, -13, 9, -21, -50, 51, -8, -25, -48, 45, 123, 29, -28, -91, 28, 78, -17, -114, 91, 71, -76, 117, 126, -77, 82, 22, -44, 78, -64, 2, 30, -60, 36, 88, 104, 32, -16, 33, -20, 12, -5, -19, 9, -110, 2, 49, -123, -17, 70, -27, 115, 111, -98, 79, 89, -35, -52, 56, 86, 67, 48, -113, 109, -105, 92, -120, 105};
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
    msg.setTimeStamp(0.7065472673755843);
    msg.setSource(899U);
    msg.setSourceEntity(170U);
    msg.setDestination(35997U);
    msg.setDestinationEntity(85U);
    msg.content_type.assign("VNRAYCPHMIILYHXXCVOGZBTSIYUPADAKZPVBGFDHXNOVWCGFAUVUXTTYYXXZOQYEDLEJIWMWECSPHMM");
    const signed char tmp_msg_0[] = {93, 56, -89, 82, 92, -116, 8, -47, -10, 88, 25, -19, 52, -2, -109, 26, 52, -89, -1, -82, -25, 113, 72, -14, 123, -126, 93, -5, -40, 7, -75, -79, -26, 86, 84, -128, -108, 6, -77, 79, -73, -86, 107, -49, -112, 31, -109, 65, 91, 47, -38, -7, 41, -120, -107, 89, -125, 88, -74, -10, 35, -98, -12, 3, -81, -12, -57, -3, 12, 76, -120, -26, -86, 47, 59, 18, -51, 74, -89, -118, 83, -105, 89, 82, 49, -20, -50, -12, -89, 124, -31, -41, 28, -88, 95, -27, -82};
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
    msg.setTimeStamp(0.8399706974935836);
    msg.setSource(36031U);
    msg.setSourceEntity(179U);
    msg.setDestination(28658U);
    msg.setDestinationEntity(170U);
    msg.content_type.assign("QKDQYYIEXPETGNURSZIFATLVGNAHKBMHGCPFRXNWTBRKVJZSYKINLCCSPWAYJJMOMZVWEUADFDQLGALEJTGPRCTLWXYSSWIHCXT");
    const signed char tmp_msg_0[] = {47, -117, 31, -112, -28, -94, 8, 35, 35, 100, 56, 89, 114, -11, 102, -69, -15, -4, 79, 85, -32, 19, -102, -40, 104, 8, -101, -23, -117, 83, 73, 73, -75, 54, 84, 26, -43, -47, -53, 27, 113, 125, 23, 94, 69, 29, -37, 65, -57, 91, 36, 8, -76, -53, -52, -45, 34, -36, 75, 109, 1, -124, -24, -62, -63, -50, 45, -15, -127, 19, 49, 38, 35, 98, 51, -26, -114, 76, -31, 44, 104, 0, 16, -22, 122, 52, 83, 92, 117, 69, -94, 67, 43, 117, -15, -29, 35, 34, -1, 2, -92, -110, 23, -16, 54, -111, -109, 37, 47, 71, 118, -104, -127, -82, -5, -81, 83, 115, 111, -122, 95, -56, 4, -37, 36, -26, 7, -50, 120, -102};
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
    msg.setTimeStamp(0.709585837047308);
    msg.setSource(44782U);
    msg.setSourceEntity(221U);
    msg.setDestination(30870U);
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
    msg.setTimeStamp(0.34166564627869234);
    msg.setSource(31838U);
    msg.setSourceEntity(151U);
    msg.setDestination(23094U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.06484979345554687);
    msg.setSource(23175U);
    msg.setSourceEntity(221U);
    msg.setDestination(2650U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.40919282682242875);
    msg.setSource(60502U);
    msg.setSourceEntity(178U);
    msg.setDestination(25483U);
    msg.setDestinationEntity(173U);
    msg.target = 63750U;
    msg.bearing = 0.3077396764431607;
    msg.elevation = 0.8045108518738833;

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
    msg.setTimeStamp(0.018690431817348085);
    msg.setSource(46606U);
    msg.setSourceEntity(71U);
    msg.setDestination(1803U);
    msg.setDestinationEntity(82U);
    msg.target = 12513U;
    msg.bearing = 0.6062242328897189;
    msg.elevation = 0.5139557306994489;

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
    msg.setTimeStamp(0.024565561602887587);
    msg.setSource(58000U);
    msg.setSourceEntity(80U);
    msg.setDestination(57776U);
    msg.setDestinationEntity(182U);
    msg.target = 4073U;
    msg.bearing = 0.8194640280855509;
    msg.elevation = 0.9468916931215108;

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
    msg.setTimeStamp(0.29240065561313255);
    msg.setSource(25204U);
    msg.setSourceEntity(104U);
    msg.setDestination(16415U);
    msg.setDestinationEntity(153U);
    msg.target = 20718U;
    msg.x = 0.49639055999652737;
    msg.y = 0.3208513419589474;
    msg.z = 0.12115932678827757;

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
    msg.setTimeStamp(0.5162323224737791);
    msg.setSource(44909U);
    msg.setSourceEntity(218U);
    msg.setDestination(58076U);
    msg.setDestinationEntity(20U);
    msg.target = 41868U;
    msg.x = 0.47890310441768125;
    msg.y = 0.45642997903728166;
    msg.z = 0.05641262598457786;

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
    msg.setTimeStamp(0.5848772676396841);
    msg.setSource(23494U);
    msg.setSourceEntity(175U);
    msg.setDestination(26198U);
    msg.setDestinationEntity(139U);
    msg.target = 36235U;
    msg.x = 0.25961475057868233;
    msg.y = 0.5349445703524273;
    msg.z = 0.06552556755292327;

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
    msg.setTimeStamp(0.9701017659724434);
    msg.setSource(27733U);
    msg.setSourceEntity(185U);
    msg.setDestination(39310U);
    msg.setDestinationEntity(229U);
    msg.target = 26704U;
    msg.lat = 0.9244481590302268;
    msg.lon = 0.07996958124631792;
    msg.z_units = 82U;
    msg.z = 0.5615047133764173;

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
    msg.setTimeStamp(0.2655798365154608);
    msg.setSource(65472U);
    msg.setSourceEntity(136U);
    msg.setDestination(8708U);
    msg.setDestinationEntity(157U);
    msg.target = 48143U;
    msg.lat = 0.9683025402670639;
    msg.lon = 0.9144719751245621;
    msg.z_units = 114U;
    msg.z = 0.844400934096839;

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
    msg.setTimeStamp(0.41595272697760854);
    msg.setSource(29228U);
    msg.setSourceEntity(199U);
    msg.setDestination(65122U);
    msg.setDestinationEntity(224U);
    msg.target = 65400U;
    msg.lat = 0.2842971380530457;
    msg.lon = 0.22717966408250068;
    msg.z_units = 35U;
    msg.z = 0.6297441862568719;

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
    msg.setTimeStamp(0.5245498382154081);
    msg.setSource(54001U);
    msg.setSourceEntity(126U);
    msg.setDestination(63837U);
    msg.setDestinationEntity(93U);
    msg.locale.assign("WYMPIFDBVSMSFMEKJHBCLXRQAUQBQUURLTIDNSENPNHXGVPMJXGDHQOMODEKAXNDRUBKOPZQYAXCZRVKUAEPXLGGPWPMIYHEHZUIZGCFIJDOCIFVARJMANXMGEVOZVQKIWJ");
    const signed char tmp_msg_0[] = {-125, -113, -124, 13, -72, -103, -75, 17, 95, -22, 81, -67, 90, -27, 124, 97, -107, -100, -20, 57, -66, -34, -24, -112, -14, 31, -50, 85, -55, -84, 41, -6, 59, -126, 81, -50, -19, -101, -42, -79, 125, -18, -67, -112, -20, -110, -12, 109, 119, 89, -25, -61, 82, -73, -53, 39, 9, 97, 21, -36, 119, 93, -105, 108, -33, 110, 51, 109, 72, 90, 13, 34, -66, 56, 36, -80, -60, 51, -17, 28, 81, 90, 106, -41, 17, -76, -26, -125, 45, -103, -82, 97, 86, -59, 14, 105, 67, 64, 16, 98, 105, -44, 66, -63, 57, 53, -93, 89, 79, 118, 104, -49, -37, -44, -51, -21, -127, 12, -100, 79, -44, -48, 24, -58, 110, -63, 6, 23, -33, 22, 19, 112, 18, 69, 10, 117, -66, 17, 70, -100, 77, -24, -28, -32, 123, 24, -94, 52, 37, -31, -14, -68, -23, -118, -26, 31, 53, -29, 18, -27, 59, 112, -112, 59, 91};
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
    msg.setTimeStamp(0.9598054100579073);
    msg.setSource(6705U);
    msg.setSourceEntity(63U);
    msg.setDestination(6282U);
    msg.setDestinationEntity(184U);
    msg.locale.assign("WJAPUALFSAETBHVVHSQHNJIHMZQNFXLMIMDOBGOXKDKJXJQUSUKWPDXPDNEIFRMVODLQAOULSCZTNZKRGCIWMSCQNRTMFPRNMZPGXSEZLZBXCGKWVUUVRZHDVOYTGWIJTDOCNEWCALUIWYPBFTFOCKKXYGAHJMTGZXRIAIRIBHOKWRSWJYVNKRLDCPQFSFOUHVZYCPAHGBNYQULEEEMYQMTAQBPBEEVLHGSV");
    const signed char tmp_msg_0[] = {113, 63, 69, 121, -53, 36, -18, 80, 24, 92, -11, 118, 119, 111, -97, -73, -123, 27, -78, 81, -96, 16, -54, 60, -9, -71, -53, 124, 112, -68, 29, -90, 80, -80, 15, -42, 79, -102, 22, -11, -104, 28, -101, -3, 110, -62, 124, -15, -96, -76, 4, -53, 121, -101, 64, 15, 93, 26, -67, -7, -32, -114, 5, -24, 43, -5, 4, -96, -16, 120, -5, -88, -12, -107, 16, -80, 88, 93, 34, -2, 109, 98, 50, -79, 69, 11, 92, -59, 37, -90, 85, -72, -54, -46, -96, 17, -12, 94, 61, 41, 108, 51, -57, 36, 72, 64, -59, -127, -111, 58, -12, -100, 14, -89, -39, -73, 28, -123, -99, -4, 57, -42, -119, -110, 18, 97, -19, 6, -101, 19, -55, -111, -97, 26, -14, -65, -105, -117, -51, 95, -66, 65, -126, -17, -60, -15, 53, 98, -95, 114, 20, -17, 78, -64, -21, 28, 10, 109, 70, 38, -16, -103, -22, 102, 103, 52, 64, 89, 39, -37, 18, 39, 53};
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
    msg.setTimeStamp(0.8769272029785943);
    msg.setSource(52843U);
    msg.setSourceEntity(139U);
    msg.setDestination(59116U);
    msg.setDestinationEntity(243U);
    msg.locale.assign("IIRVGRYPVNKDRWFYRIBSMMQYIFNCOQMULEGDTTVZHZTSKXHUOAUKJMKXSNDJXKYUBRLAYPBVRWXJKZOTQABSCEAHOSPHUIEXQHTJWLLPPEFMSQYZJQTQWNXXWFOZCKGDSXXCLGVRNKMJRSOCAYVKMFTIXNUQUWAJLPMNGLEADRHICLUORILBZZZNHNMCDBCWWJBPEGGFVAENIKBBMFEOYEQPPWCDQAHTGSVOWFTFOJDFVSGIYVZEGAULCTDY");
    const signed char tmp_msg_0[] = {-95, 20, 106, -87, -63, 112, -48, -32, 68, -72, -123, 42, 60, -42, -109, 105, 116, 59, -85, -110, 2, 111, -8, 33, -109, 122, 120, -15, -87, -70, 28};
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
    msg.setTimeStamp(0.8158732124886179);
    msg.setSource(59597U);
    msg.setSourceEntity(96U);
    msg.setDestination(32898U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.06959802208323196);
    msg.setSource(50683U);
    msg.setSourceEntity(31U);
    msg.setDestination(49253U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.7378904742718617);
    msg.setSource(17948U);
    msg.setSourceEntity(138U);
    msg.setDestination(60034U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.9088400617569614);
    msg.setSource(7693U);
    msg.setSourceEntity(182U);
    msg.setDestination(65248U);
    msg.setDestinationEntity(5U);
    msg.camid = 95U;
    msg.x = 64173U;
    msg.y = 24829U;

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
    msg.setTimeStamp(0.520323311210217);
    msg.setSource(2279U);
    msg.setSourceEntity(181U);
    msg.setDestination(5323U);
    msg.setDestinationEntity(128U);
    msg.camid = 80U;
    msg.x = 51744U;
    msg.y = 53564U;

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
    msg.setTimeStamp(0.8321338473513422);
    msg.setSource(12793U);
    msg.setSourceEntity(144U);
    msg.setDestination(59725U);
    msg.setDestinationEntity(68U);
    msg.camid = 61U;
    msg.x = 31911U;
    msg.y = 62125U;

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
    msg.setTimeStamp(0.43428731972670553);
    msg.setSource(37900U);
    msg.setSourceEntity(110U);
    msg.setDestination(63102U);
    msg.setDestinationEntity(72U);
    msg.camid = 12U;
    msg.x = 5232U;
    msg.y = 15096U;

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
    msg.setTimeStamp(0.07940461226256024);
    msg.setSource(40204U);
    msg.setSourceEntity(2U);
    msg.setDestination(15339U);
    msg.setDestinationEntity(114U);
    msg.camid = 80U;
    msg.x = 32513U;
    msg.y = 41989U;

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
    msg.setTimeStamp(0.162061647151599);
    msg.setSource(11043U);
    msg.setSourceEntity(65U);
    msg.setDestination(61107U);
    msg.setDestinationEntity(236U);
    msg.camid = 217U;
    msg.x = 48494U;
    msg.y = 6269U;

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
    msg.setTimeStamp(0.35193232400885477);
    msg.setSource(5450U);
    msg.setSourceEntity(161U);
    msg.setDestination(58262U);
    msg.setDestinationEntity(89U);
    msg.tracking = 213U;
    msg.lat = 0.8193840214823331;
    msg.lon = 0.48578763925144697;
    msg.x = 0.5445522729066523;
    msg.y = 0.7403672841664276;
    msg.z = 0.4586143603742542;

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
    msg.setTimeStamp(0.41676783634000725);
    msg.setSource(58468U);
    msg.setSourceEntity(59U);
    msg.setDestination(9949U);
    msg.setDestinationEntity(163U);
    msg.tracking = 67U;
    msg.lat = 0.46023121671363554;
    msg.lon = 0.5238829830637494;
    msg.x = 0.9456930177280547;
    msg.y = 0.235314903918303;
    msg.z = 0.7551111644224895;

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
    msg.setTimeStamp(0.4506568342439544);
    msg.setSource(61448U);
    msg.setSourceEntity(72U);
    msg.setDestination(3838U);
    msg.setDestinationEntity(242U);
    msg.tracking = 219U;
    msg.lat = 0.41243216177584185;
    msg.lon = 0.7106683352666573;
    msg.x = 0.43968096709057736;
    msg.y = 0.9326836353557244;
    msg.z = 0.8957753689039848;

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
    msg.setTimeStamp(0.4831455374527154);
    msg.setSource(5750U);
    msg.setSourceEntity(162U);
    msg.setDestination(50015U);
    msg.setDestinationEntity(221U);
    msg.target.assign("AVIXPSGNMDSFZHFAEQJOOVPRUIPAVAMOGYJSDQMZGBYJTHSXLZSQKCMZLGYBANCXZENRMUWLFNJKFSIEXQDTLZJPITALBCICUXUYEFLIERRRWKHQDVMZSGDKMNPTJCZJZUJVJKQWCAVDFRXIWFAKWGWOUBUYCUATIDGLQETKPHCBWUBRHGTWXPXTWIQRSYOSNOPLNRQDMHKBQD");
    msg.lbearing = 0.2876688801728946;
    msg.lelevation = 0.7076872941720437;
    msg.bearing = 0.6212152761257275;
    msg.elevation = 0.8757521649348092;
    msg.phi = 0.19068081634090617;
    msg.theta = 0.22849643774815143;
    msg.psi = 0.8196120005756654;
    msg.accuracy = 0.10693367854970792;

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
    msg.setTimeStamp(0.42649901314052197);
    msg.setSource(41349U);
    msg.setSourceEntity(100U);
    msg.setDestination(26868U);
    msg.setDestinationEntity(66U);
    msg.target.assign("RHLLPWCTPRXLQYLEHORPKFBHQBWNSCYACVTUSTVTJISBCEETNNSMVFUIGDAZGXVXCIQFYYPDSOYNZJNMOSZEMNKCRBHWYUEHHPQX");
    msg.lbearing = 0.16926373060355093;
    msg.lelevation = 0.18215084223874067;
    msg.bearing = 0.5018639556145645;
    msg.elevation = 0.1335461707022776;
    msg.phi = 0.7340569854566323;
    msg.theta = 0.43613323782940905;
    msg.psi = 0.8419014996404938;
    msg.accuracy = 0.540097459634771;

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
    msg.setTimeStamp(0.6666066443797081);
    msg.setSource(36381U);
    msg.setSourceEntity(91U);
    msg.setDestination(14777U);
    msg.setDestinationEntity(85U);
    msg.target.assign("ZFHSFWRYHICTOEBNFUHYASHWHQJZKCLNERTLCADBOLSJIJXPCLLROGDRDUACIOYKCSPPUNKHVEWWSIEDIZAGLVYITXQBYNUYGZMJNZDVXTPQBLCCMVXKUSKQSFGFQLRSMGPETJYPFHF");
    msg.lbearing = 0.5343438409409449;
    msg.lelevation = 0.5605498771042363;
    msg.bearing = 0.3045455570742851;
    msg.elevation = 0.05212625732147913;
    msg.phi = 0.6214082634239589;
    msg.theta = 0.5881569369194019;
    msg.psi = 0.698767284364903;
    msg.accuracy = 0.7858097175768473;

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
    msg.setTimeStamp(0.615512351491954);
    msg.setSource(56989U);
    msg.setSourceEntity(181U);
    msg.setDestination(52264U);
    msg.setDestinationEntity(143U);
    msg.target.assign("BZDWKXTQBILRTVEXWXDGNQIRHESCYWKABAOVYKDZ");
    msg.x = 0.4951908043566502;
    msg.y = 0.8957018066330765;
    msg.z = 0.796354617946204;
    msg.n = 0.5669375919037669;
    msg.e = 0.02327720155682711;
    msg.d = 0.37640274914747873;
    msg.phi = 0.41368869551538645;
    msg.theta = 0.17064140439617403;
    msg.psi = 0.46214522398712976;
    msg.accuracy = 0.6767332766376012;

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
    msg.setTimeStamp(0.515466769592234);
    msg.setSource(29884U);
    msg.setSourceEntity(95U);
    msg.setDestination(23861U);
    msg.setDestinationEntity(189U);
    msg.target.assign("PFGHGYHYBRMPPAYNNOHXXXDCQHHJQGPRJIWCKMMVVUYVGATCLMZHGJFLFKZDQMHONZOFBSLRKBQDFDKXRTNANWOSVUIWVEUVLUUMQXXCAZYEWTOPEPKWLKFPJBTMJAQDZFNYVXUUAVIBNTPIJKEDBMVGSRTJLFFSHYMLLQCRSSLQOOFRXCRTTASSWHQXQREYBPWZSTODVWEWJDUAZZCZCCWJRGMTOKGUADKGPIISYHABIXKCEEOJEUBBN");
    msg.x = 0.9492009757577144;
    msg.y = 0.6495612781621923;
    msg.z = 0.9135781633374068;
    msg.n = 0.9189934723735869;
    msg.e = 0.35915645961488296;
    msg.d = 0.40139148688676374;
    msg.phi = 0.5863202185221583;
    msg.theta = 0.17428070672451723;
    msg.psi = 0.29852491751964605;
    msg.accuracy = 0.7552611924637472;

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
    msg.setTimeStamp(0.08275869723355533);
    msg.setSource(48246U);
    msg.setSourceEntity(134U);
    msg.setDestination(54470U);
    msg.setDestinationEntity(153U);
    msg.target.assign("XRSJGLEWCHMZAAKLCKUYQSHTQTMVKLLDNDNFIKWCHEAPVWUVWDJTYICXOBQNAPTIXJQHPFPBY");
    msg.x = 0.6289452551084873;
    msg.y = 0.9581820809426915;
    msg.z = 0.2977189128741182;
    msg.n = 0.74070242901304;
    msg.e = 0.9334427141035784;
    msg.d = 0.7775191414949267;
    msg.phi = 0.24907886035099303;
    msg.theta = 0.4742119935833221;
    msg.psi = 0.6891618526155321;
    msg.accuracy = 0.5770702290083798;

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
    msg.setTimeStamp(0.41817675905663065);
    msg.setSource(15594U);
    msg.setSourceEntity(37U);
    msg.setDestination(7947U);
    msg.setDestinationEntity(96U);
    msg.target.assign("WXSKRLROUEMANHBLRIHEBJJVWNYBOPFHGXHJCYIYZPKYRHORQFHEZPAEMCADQMSR");
    msg.lat = 0.5075535517799726;
    msg.lon = 0.0773168420169541;
    msg.z_units = 190U;
    msg.z = 0.35820092107104073;
    msg.accuracy = 0.420045915881889;

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
    msg.setTimeStamp(0.5152698151386472);
    msg.setSource(37774U);
    msg.setSourceEntity(7U);
    msg.setDestination(60610U);
    msg.setDestinationEntity(68U);
    msg.target.assign("TPBTTUYLVDTIVGQMFOIPNQVWZEXUZEWGBRDJBUDJVSGAUXNMXGXENKOFINPJKQBLWZTILHJUVKHILCFGVYPMMRPMEYHVSCSIEHBSHLIOAHQDNKDHFFRECXLQW");
    msg.lat = 0.384624581000224;
    msg.lon = 0.7865050836715868;
    msg.z_units = 79U;
    msg.z = 0.207123664770981;
    msg.accuracy = 0.33412629840047214;

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
    msg.setTimeStamp(0.46181035426163874);
    msg.setSource(31317U);
    msg.setSourceEntity(241U);
    msg.setDestination(61110U);
    msg.setDestinationEntity(143U);
    msg.target.assign("JYHYSEUZWWYVFHBNDDJXSMZXCRLAZYOJKRNHUTXCVVHSMPWVKYQGYAVRTHTKBBKHVAXCJPLIWWFITTSKGYLPRUBLJEBPJPLDBJKZXOHQNOBZIIGKXURAVDEGCMNFUMTSWMTOGWTDMLOFNQXDKQGAPMUFCXIWPJFCONBPRMAPJEWCJCEZAAQLZDQSRUIHQVCOUHEFBEGISEGARGADQQSRW");
    msg.lat = 0.8143625539079684;
    msg.lon = 0.17513776505599332;
    msg.z_units = 201U;
    msg.z = 0.41080783494821216;
    msg.accuracy = 0.6560550523022706;

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
    msg.setTimeStamp(0.8985364305761453);
    msg.setSource(62584U);
    msg.setSourceEntity(9U);
    msg.setDestination(44992U);
    msg.setDestinationEntity(147U);
    msg.name.assign("TFWBVYEAIQRPTWCLPCIPEONGLGIATUQOLXKSYZQPPRGWYRVHZNFOBBQKBJXKYXQMBZLPXNQPUVZOWDEYWJKBNZULOXWHDGZTKIODSHMJNWKIENTCAVFLXLQKBJCGDMSLQYFHAML");
    msg.lat = 0.5664878962323315;
    msg.lon = 0.511693072484379;
    msg.z = 0.7003022067911324;
    msg.z_units = 245U;

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
    msg.setTimeStamp(0.8211440123913181);
    msg.setSource(35938U);
    msg.setSourceEntity(148U);
    msg.setDestination(26616U);
    msg.setDestinationEntity(222U);
    msg.name.assign("EHPXQNTISPOJRCDRPYBGMOOUNPPJFMELLUGOOSVKQSXZJNSORRYQYWKMTAVDHSCMVHZCMMIETUWIRDTWGOZSRTJGFAALFFUQNJPNTCOHVZUBGDMXRTPLUAYMDKVAYWMVHGNEBZEZGTLGOFXXNLHDJJUXJRLUEWIHBADGXKEYSDCCLKXQPWPLFWBHSVDKCACYYZKBRQZFDVHQAXHZTWQQCNWVIIBEPEQYITKZNWB");
    msg.lat = 0.40312194750198493;
    msg.lon = 0.17605175644323257;
    msg.z = 0.5347496021897253;
    msg.z_units = 38U;

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
    msg.setTimeStamp(0.5441623021788431);
    msg.setSource(60557U);
    msg.setSourceEntity(95U);
    msg.setDestination(52410U);
    msg.setDestinationEntity(2U);
    msg.name.assign("SDKTSIKIGOH");
    msg.lat = 0.8911278770809289;
    msg.lon = 0.26755241558420895;
    msg.z = 0.40125971944641925;
    msg.z_units = 192U;

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
    msg.setTimeStamp(0.9947379572361853);
    msg.setSource(10892U);
    msg.setSourceEntity(88U);
    msg.setDestination(26642U);
    msg.setDestinationEntity(155U);
    msg.op = 108U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("KCAYQQRUZOUKTBHERANNJ");
    tmp_msg_0.lat = 0.7977551794062173;
    tmp_msg_0.lon = 0.5732629689420577;
    tmp_msg_0.z = 0.09888257246459309;
    tmp_msg_0.z_units = 95U;
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
    msg.setTimeStamp(0.9517347739785672);
    msg.setSource(10501U);
    msg.setSourceEntity(231U);
    msg.setDestination(60418U);
    msg.setDestinationEntity(35U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.14799175263493225);
    msg.setSource(51888U);
    msg.setSourceEntity(238U);
    msg.setDestination(36181U);
    msg.setDestinationEntity(62U);
    msg.op = 200U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("BOICQVVMUPFTXKGQRVJMCPPFNUGPGREDVHANHFXTGVUHUNEDYFPZISHOKNLYOWBJDGHZZYJBKMSAVSLLUZDQLTRMOXYFNVWXKYDYDJMIHXFARQPEFUSMGMOAQAPTYNWCCQEXRBAMKHWLCJPKFOXBBDHW");
    tmp_msg_0.lat = 0.30130736572912764;
    tmp_msg_0.lon = 0.0894317192145605;
    tmp_msg_0.z = 0.5926146584739208;
    tmp_msg_0.z_units = 32U;
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
    msg.setTimeStamp(0.7746423180922843);
    msg.setSource(15233U);
    msg.setSourceEntity(173U);
    msg.setDestination(4419U);
    msg.setDestinationEntity(130U);
    msg.value = 0.6098669772265777;
    msg.type = 20U;

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
    msg.setTimeStamp(0.08925327075129796);
    msg.setSource(27664U);
    msg.setSourceEntity(229U);
    msg.setDestination(48220U);
    msg.setDestinationEntity(152U);
    msg.value = 0.7487255971611224;
    msg.type = 88U;

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
    msg.setTimeStamp(0.5094113897855698);
    msg.setSource(53565U);
    msg.setSourceEntity(206U);
    msg.setDestination(40760U);
    msg.setDestinationEntity(84U);
    msg.value = 0.06287085787646007;
    msg.type = 140U;

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
    msg.setTimeStamp(0.6909759574031572);
    msg.setSource(25354U);
    msg.setSourceEntity(29U);
    msg.setDestination(15310U);
    msg.setDestinationEntity(241U);
    msg.value = 0.7744646100370526;

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
    msg.setTimeStamp(0.34357799103976616);
    msg.setSource(7730U);
    msg.setSourceEntity(39U);
    msg.setDestination(2055U);
    msg.setDestinationEntity(1U);
    msg.value = 0.340441965632426;

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
    msg.setTimeStamp(0.5412763299491686);
    msg.setSource(8937U);
    msg.setSourceEntity(201U);
    msg.setDestination(47464U);
    msg.setDestinationEntity(112U);
    msg.value = 0.7877287132741293;

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
    msg.setTimeStamp(0.9118943265252542);
    msg.setSource(50238U);
    msg.setSourceEntity(62U);
    msg.setDestination(24718U);
    msg.setDestinationEntity(187U);
    msg.timestamp_last_service = 0.7649308621646775;
    msg.time_next_service = 0.8959230468936222;
    msg.time_motor_next_service = 0.6328695954766761;
    msg.time_idle_ground = 0.6151849617260237;
    msg.time_idle_air = 0.4519258442015137;
    msg.time_idle_water = 0.8185055966932638;
    msg.time_idle_underwater = 0.9477434883752255;
    msg.time_idle_unknown = 0.9083707183035975;
    msg.time_motor_ground = 0.9413398363481502;
    msg.time_motor_air = 0.1062435450728646;
    msg.time_motor_water = 0.4373476989207543;
    msg.time_motor_underwater = 0.13638573625728412;
    msg.time_motor_unknown = 0.3227069802442297;
    msg.rpm_min = 25598;
    msg.rpm_max = -30344;
    msg.depth_max = 0.03286934048841006;

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
    msg.setTimeStamp(0.8049298986126071);
    msg.setSource(18665U);
    msg.setSourceEntity(15U);
    msg.setDestination(10895U);
    msg.setDestinationEntity(252U);
    msg.timestamp_last_service = 0.8077050840578811;
    msg.time_next_service = 0.9487177842042704;
    msg.time_motor_next_service = 0.25823605030980934;
    msg.time_idle_ground = 0.912225278341886;
    msg.time_idle_air = 0.6023803968775456;
    msg.time_idle_water = 0.7392161252534061;
    msg.time_idle_underwater = 0.9712403700461961;
    msg.time_idle_unknown = 0.8082700333182622;
    msg.time_motor_ground = 0.5793785343291086;
    msg.time_motor_air = 0.782803432395497;
    msg.time_motor_water = 0.1547412626684569;
    msg.time_motor_underwater = 0.6929025798299326;
    msg.time_motor_unknown = 0.16736618439883044;
    msg.rpm_min = -2383;
    msg.rpm_max = -13529;
    msg.depth_max = 0.9302229299881607;

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
    msg.setTimeStamp(0.34993530143530227);
    msg.setSource(13575U);
    msg.setSourceEntity(110U);
    msg.setDestination(38247U);
    msg.setDestinationEntity(250U);
    msg.timestamp_last_service = 0.24122482162496717;
    msg.time_next_service = 0.7906146098534843;
    msg.time_motor_next_service = 0.8441088098188242;
    msg.time_idle_ground = 0.8655688973332373;
    msg.time_idle_air = 0.999917826137555;
    msg.time_idle_water = 0.4614823907780359;
    msg.time_idle_underwater = 0.5289277618448779;
    msg.time_idle_unknown = 0.13553406516576272;
    msg.time_motor_ground = 0.6973242575094729;
    msg.time_motor_air = 0.6462335850099634;
    msg.time_motor_water = 0.01942089782123879;
    msg.time_motor_underwater = 0.3286321691570827;
    msg.time_motor_unknown = 0.6373481893504385;
    msg.rpm_min = 31492;
    msg.rpm_max = 22206;
    msg.depth_max = 0.7142089790302482;

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
    msg.setTimeStamp(0.1845259960719422);
    msg.setSource(7521U);
    msg.setSourceEntity(228U);
    msg.setDestination(44138U);
    msg.setDestinationEntity(144U);
    msg.severity = 1U;
    msg.text.assign("IVQOFKWDILDYNXBCNLWDSNROITTJUOFICYXIRECCNHUZHBIXVXIPDPHHKECLHZZCGBEVDIYXNKKNSALKBQAGAQAERTGOJMGBMRIRRZHJFQZFYFTUUMAJMOMWJROGCSLPGSGGLEBEZXIMCFTYHNLQEEVR");

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
    msg.setTimeStamp(0.6135122201520191);
    msg.setSource(36660U);
    msg.setSourceEntity(218U);
    msg.setDestination(55528U);
    msg.setDestinationEntity(119U);
    msg.severity = 240U;
    msg.text.assign("KHIZUXYJBXYVPDNUVZVHAMBGZFYRJCYSCBGSBLTWYWJUEJBQGNQWMTDHEGCACKMIJSWDTPVJRRNFVIDO");

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
    msg.setTimeStamp(0.7996981043163285);
    msg.setSource(60847U);
    msg.setSourceEntity(234U);
    msg.setDestination(57986U);
    msg.setDestinationEntity(80U);
    msg.severity = 162U;
    msg.text.assign("XWZWUDSQWYCVUHPNIEAYVLILKXEMATPNRMIHQAADBTMEJYOFSRLJXWAMJFTBSJETDHYCSSGJRNAQRZFGYSEHSXTFDCXTOXBKTCGGQKFW");

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
    msg.setTimeStamp(0.39503558101395764);
    msg.setSource(49735U);
    msg.setSourceEntity(237U);
    msg.setDestination(38139U);
    msg.setDestinationEntity(79U);
    msg.channel = 109;
    msg.value = -1660194241;
    msg.gain = 137U;

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
    msg.setTimeStamp(0.4757288208354802);
    msg.setSource(20994U);
    msg.setSourceEntity(69U);
    msg.setDestination(64142U);
    msg.setDestinationEntity(64U);
    msg.channel = -45;
    msg.value = 914952675;
    msg.gain = 239U;

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
    msg.setTimeStamp(0.31540409195723895);
    msg.setSource(35348U);
    msg.setSourceEntity(72U);
    msg.setDestination(29589U);
    msg.setDestinationEntity(239U);
    msg.channel = -11;
    msg.value = 39729040;
    msg.gain = 144U;

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
    msg.setTimeStamp(0.04815423315812839);
    msg.setSource(18649U);
    msg.setSourceEntity(180U);
    msg.setDestination(589U);
    msg.setDestinationEntity(143U);
    msg.ch01 = 0.44538754359786537;
    msg.ch02 = 0.4999758925679548;
    msg.ch03 = 0.47612952350147075;
    msg.ch04 = 0.46697644952319406;
    msg.ch05 = 0.5792580633308937;
    msg.ch06 = 0.5818052179174579;
    msg.ch07 = 0.516757353764722;
    msg.ch08 = 0.9859272276657935;
    msg.ch09 = 0.4621419708893606;
    msg.ch10 = 0.22282450330136738;
    msg.ch11 = 0.9166115803020926;
    msg.ch12 = 0.23258460016289295;
    msg.ch13 = 0.3386621676480369;
    msg.ch14 = 0.2550173139057278;
    msg.ch15 = 0.8593181512747924;
    msg.ch16 = 0.4345857894177497;

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
    msg.setTimeStamp(0.9901979544421488);
    msg.setSource(62639U);
    msg.setSourceEntity(112U);
    msg.setDestination(52280U);
    msg.setDestinationEntity(206U);
    msg.ch01 = 0.3377046541106473;
    msg.ch02 = 0.18267300842954526;
    msg.ch03 = 0.6061077955399542;
    msg.ch04 = 0.07878652963556076;
    msg.ch05 = 0.993552827518108;
    msg.ch06 = 0.11730748118263057;
    msg.ch07 = 0.3258547094283738;
    msg.ch08 = 0.6096576231860767;
    msg.ch09 = 0.7667065855575839;
    msg.ch10 = 0.01598531881580656;
    msg.ch11 = 0.5093788547488616;
    msg.ch12 = 0.029812891027003685;
    msg.ch13 = 0.5054613221382854;
    msg.ch14 = 0.6037547875933047;
    msg.ch15 = 0.25271475964213364;
    msg.ch16 = 0.761489341844741;

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
    msg.setTimeStamp(0.24057006686686744);
    msg.setSource(31863U);
    msg.setSourceEntity(75U);
    msg.setDestination(24860U);
    msg.setDestinationEntity(72U);
    msg.ch01 = 0.32301577859901665;
    msg.ch02 = 0.8468572213109401;
    msg.ch03 = 0.7474157429206199;
    msg.ch04 = 0.7115708051962635;
    msg.ch05 = 0.1255883322211505;
    msg.ch06 = 0.36397451010237625;
    msg.ch07 = 0.7415212807093949;
    msg.ch08 = 0.08422273108226863;
    msg.ch09 = 0.20574434616856485;
    msg.ch10 = 0.32731181871541315;
    msg.ch11 = 0.5313363183820325;
    msg.ch12 = 0.0348447638041286;
    msg.ch13 = 0.35730952146008244;
    msg.ch14 = 0.10924868126067111;
    msg.ch15 = 0.37209015621760577;
    msg.ch16 = 0.512383334618751;

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
    msg.setTimeStamp(0.7044089376600189);
    msg.setSource(13867U);
    msg.setSourceEntity(90U);
    msg.setDestination(42039U);
    msg.setDestinationEntity(239U);
    msg.op = 221U;
    msg.lat = 0.838647845521777;
    msg.lon = 0.0026062417524288506;
    msg.height = 0.062203519383717376;
    msg.depth = 0.9271231074777103;
    msg.alt = 0.22527361609913288;

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
    msg.setTimeStamp(0.4733155830696443);
    msg.setSource(30605U);
    msg.setSourceEntity(42U);
    msg.setDestination(1892U);
    msg.setDestinationEntity(191U);
    msg.op = 123U;
    msg.lat = 0.8428003884322088;
    msg.lon = 0.03135783576737006;
    msg.height = 0.7011691456894373;
    msg.depth = 0.7558220264439965;
    msg.alt = 0.059538631421236166;

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
    msg.setTimeStamp(0.09180412545340366);
    msg.setSource(51442U);
    msg.setSourceEntity(97U);
    msg.setDestination(55876U);
    msg.setDestinationEntity(65U);
    msg.op = 22U;
    msg.lat = 0.06750652743628116;
    msg.lon = 0.3368047463933671;
    msg.height = 0.05266131621718473;
    msg.depth = 0.1458869344273377;
    msg.alt = 0.9437985640826958;

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
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.07240789131795788);
    msg.setSource(28342U);
    msg.setSourceEntity(169U);
    msg.setDestination(33645U);
    msg.setDestinationEntity(220U);
    msg.nbeams = 62U;
    msg.ncells = 98U;
    msg.coord_sys = 39U;

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
    msg.setTimeStamp(0.7223800640736836);
    msg.setSource(29885U);
    msg.setSourceEntity(96U);
    msg.setDestination(47838U);
    msg.setDestinationEntity(153U);
    msg.nbeams = 72U;
    msg.ncells = 51U;
    msg.coord_sys = 146U;

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
    msg.setTimeStamp(0.9692237805167355);
    msg.setSource(51263U);
    msg.setSourceEntity(151U);
    msg.setDestination(53699U);
    msg.setDestinationEntity(20U);
    msg.nbeams = 215U;
    msg.ncells = 161U;
    msg.coord_sys = 52U;

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
    msg.setTimeStamp(0.6857724116765499);
    msg.setSource(51093U);
    msg.setSourceEntity(238U);
    msg.setDestination(35883U);
    msg.setDestinationEntity(74U);
    msg.cell_position = 0.21991609069819906;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.2736138627080267;
    tmp_msg_0.amp = 0.25994546748026026;
    tmp_msg_0.cor = 82U;
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
    msg.setTimeStamp(0.7731996180664237);
    msg.setSource(39363U);
    msg.setSourceEntity(169U);
    msg.setDestination(5901U);
    msg.setDestinationEntity(27U);
    msg.cell_position = 0.46067745540114435;

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
    msg.setTimeStamp(0.39660272613917524);
    msg.setSource(37479U);
    msg.setSourceEntity(189U);
    msg.setDestination(30054U);
    msg.setDestinationEntity(157U);
    msg.cell_position = 0.11914818701330143;

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
    msg.setTimeStamp(0.9357347860378995);
    msg.setSource(40171U);
    msg.setSourceEntity(172U);
    msg.setDestination(31181U);
    msg.setDestinationEntity(250U);
    msg.vel = 0.6922452829093382;
    msg.amp = 0.8631831601777022;
    msg.cor = 154U;

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
    msg.setTimeStamp(0.15921709055942235);
    msg.setSource(46333U);
    msg.setSourceEntity(78U);
    msg.setDestination(838U);
    msg.setDestinationEntity(46U);
    msg.vel = 0.6380615105647964;
    msg.amp = 0.3059018091782778;
    msg.cor = 26U;

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
    msg.setTimeStamp(0.27746106080564226);
    msg.setSource(17799U);
    msg.setSourceEntity(31U);
    msg.setDestination(40519U);
    msg.setDestinationEntity(110U);
    msg.vel = 0.28764187110127204;
    msg.amp = 0.9535322351128578;
    msg.cor = 189U;

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
    IMC::GpioState msg;
    msg.setTimeStamp(0.5838771102621447);
    msg.setSource(51652U);
    msg.setSourceEntity(18U);
    msg.setDestination(31191U);
    msg.setDestinationEntity(232U);
    msg.name.assign("QFBLSXNFYEWHNCTDADIUNKUQEDYTPNRAROSEEPUDQFSRCIMFQKAZCFLDBYGBPVMCLXRLKMHZVVTQVJKJUDHHAFWJWEBBKMUUGYKK");
    msg.value = 107U;

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
    msg.setTimeStamp(0.4255539848192117);
    msg.setSource(10053U);
    msg.setSourceEntity(172U);
    msg.setDestination(19661U);
    msg.setDestinationEntity(37U);
    msg.name.assign("VOITXLBYZSCBUVGEYRSSSGKTKIPZIWAIEOHCPQRXERGPXBCRBMXRKCHJLBJQMYXGPEWOGSQIEYHOOMQFPMQYWFJAARVJWZTIJSAXFZUWLKBVFFARKUMCNENXOKGSQTGJCNHWMODRNGYITQMHXLBLUVFPHJDSUDJDZONGMKDFIZUNHCTPWLKLDTELMCLZWWUB");
    msg.value = 25U;

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
    msg.setTimeStamp(0.40068223228234434);
    msg.setSource(3906U);
    msg.setSourceEntity(197U);
    msg.setDestination(8722U);
    msg.setDestinationEntity(13U);
    msg.name.assign("BBQEESHZHKZPORGJAQKWMACMGIEOJOZUUQLUEZGCIRZBKZRLMKPVYLWXGBPYMXJYGNPJMBQWOYSHBULNRJFOLJDLKTVRJPHGODDDLLNFWVRCSYIIWFBYHCIIVUPWTTKENAAQOPEZDSF");
    msg.value = 67U;

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
    msg.setTimeStamp(0.15885129712778423);
    msg.setSource(27072U);
    msg.setSourceEntity(190U);
    msg.setDestination(6033U);
    msg.setDestinationEntity(55U);
    msg.name.assign("OXWDAEBUPLAVNJWNZIVCHFVBXGKELGTMSFKQYHZHHNLSCIRVZPDFKCMSOUEPLRZWBLOLSTQBKICRLBNHADSDRTURIIOLXTRHFJNWJEDMVKAMQEYJGQEOSGIARPHGUDYUFAZCJYZGTWLTYASXBUOMEDRZNFAVFPKPQZEHMDSWJSEMPTVRQUXKZCCJPXNXXIMCUYQNTBUKKOTYZJAGWXBX");

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
    msg.setTimeStamp(0.9816434599578967);
    msg.setSource(5034U);
    msg.setSourceEntity(223U);
    msg.setDestination(30633U);
    msg.setDestinationEntity(57U);
    msg.name.assign("CNUVDNZSTZIIPIZKPFGVAESRRAHKYLLTJVCXDXEEETLUGHWZZRWXIWUVJWUKBMOUQIOAQOAERAUZFBHFRTIYOPFYDUFBSJROOHVMYLXQHMNMIPAMWBKUYAFPJTXFIBRGTOVNEJYNSLNXDQKCPLGQUCEGZJZBWPQBRMLVYNQHSEQCVMSXLQNMCHBDRYGWCAHXKJYCTDDLQWMGIDAYJZJFDGXKHWBVDOPFPG");

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
    msg.setTimeStamp(0.7765215056018703);
    msg.setSource(55802U);
    msg.setSourceEntity(186U);
    msg.setDestination(35387U);
    msg.setDestinationEntity(178U);
    msg.name.assign("XAYMAXEOWXMCBNZIWPTSCCVXUHPDRDNTKYQPKDPUADWWSKDENSPPNGUVDGLKXCGFKHRUROXKMMAMFRHEENLMZRLYTQMIWXUZEFCTNYRZBOSGEAGPBGSAIIHJRIJJIRFLDLKSNQXOGWIZKAGLYSWIUVZBTLQYLTNAKRJIUNHGZAHCMQWDYBLBYHQSTXFBOAQCMIUUJQYVJVETJJECFDBFPLBRHZMTEJZDQVK");

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
    msg.setTimeStamp(0.7469708417670737);
    msg.setSource(12943U);
    msg.setSourceEntity(29U);
    msg.setDestination(16504U);
    msg.setDestinationEntity(183U);
    msg.name.assign("ZDHFQGEKULIETXSRAIPGNZQFCYGUGUCPTNFJUPADVNRMQTAKWFPERFCLLJKCWMFIVYLOJPYZDCKSSJQVBLCAJNJCSOKGBDDROPELMICMSUUMWTXZIBWHWHRVYHVJTEMNHBQKYDLNSZGEREBGNVESBPBMDBXVPLXHXQNWZQXTKIGNRWHJAZSQPXTASPOXKHUGUOFKZUXOWCIIDQR");
    msg.value = 246U;

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
    msg.setTimeStamp(0.18083240265878986);
    msg.setSource(14076U);
    msg.setSourceEntity(69U);
    msg.setDestination(10513U);
    msg.setDestinationEntity(68U);
    msg.name.assign("MPBVZPWPGSAZMTYEWSWOQFDVHAZGFBKYGASGTQKOVDEJJWPTNQTJJHCIXGCUOYBHSEFZHCHIBNWUSZJFUCOVUJWTLCYJEDLVQWXYZVUBZTUHXMSGCFJMMEEFZRIMHKDLSKAOLAANJXBCERKVKFSAXNTKJNKRUDLRWHAEIXSGHDLIAMLNTXONXURLPZCQGAWPVVDMBYT");
    msg.value = 215U;

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
    msg.setTimeStamp(0.27446645648379064);
    msg.setSource(25680U);
    msg.setSourceEntity(191U);
    msg.setDestination(14159U);
    msg.setDestinationEntity(85U);
    msg.name.assign("OTNAQLJDZJRDDKPGUNXGIUSQIQXWEJGSZLDREIEJOKCROLJLILUBLYHVRFOCBEMQSIRKQQTKQMAXODFQVFSGYMNUTFNTBXYYYPCUBIGNEMOXOIXOCTBMWNEPOWSWTAMKILMECNQHZP");
    msg.value = 118U;

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
    msg.setTimeStamp(0.8020148369420158);
    msg.setSource(33625U);
    msg.setSourceEntity(156U);
    msg.setDestination(20753U);
    msg.setDestinationEntity(140U);
    msg.value = 0.2984073331164998;

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
    msg.setTimeStamp(0.2599831241365945);
    msg.setSource(19672U);
    msg.setSourceEntity(91U);
    msg.setDestination(21639U);
    msg.setDestinationEntity(109U);
    msg.value = 0.40441531688795807;

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
    msg.setTimeStamp(0.37444329166633583);
    msg.setSource(60739U);
    msg.setSourceEntity(100U);
    msg.setDestination(38576U);
    msg.setDestinationEntity(57U);
    msg.value = 0.4724742400748111;

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
    msg.setTimeStamp(0.23636672976796214);
    msg.setSource(29761U);
    msg.setSourceEntity(197U);
    msg.setDestination(59673U);
    msg.setDestinationEntity(153U);
    msg.value = 0.6334547306729437;

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
    msg.setTimeStamp(0.6968747796569599);
    msg.setSource(43639U);
    msg.setSourceEntity(77U);
    msg.setDestination(32901U);
    msg.setDestinationEntity(28U);
    msg.value = 0.9635113755018877;

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
    msg.setTimeStamp(0.6719701410464766);
    msg.setSource(29264U);
    msg.setSourceEntity(241U);
    msg.setDestination(34168U);
    msg.setDestinationEntity(219U);
    msg.value = 0.46276224079060657;

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
    msg.setTimeStamp(0.7036938843881397);
    msg.setSource(5718U);
    msg.setSourceEntity(141U);
    msg.setDestination(62283U);
    msg.setDestinationEntity(106U);
    msg.value = 0.7244989133609666;

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
    msg.setTimeStamp(0.23749717599443565);
    msg.setSource(26924U);
    msg.setSourceEntity(33U);
    msg.setDestination(28801U);
    msg.setDestinationEntity(2U);
    msg.value = 0.6299742787845293;

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
    msg.setTimeStamp(0.2621742744394202);
    msg.setSource(10793U);
    msg.setSourceEntity(157U);
    msg.setDestination(8173U);
    msg.setDestinationEntity(227U);
    msg.value = 0.14032742982390767;

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
    msg.setTimeStamp(0.43889465481251244);
    msg.setSource(20054U);
    msg.setSourceEntity(138U);
    msg.setDestination(38479U);
    msg.setDestinationEntity(193U);
    msg.restriction = 198U;
    msg.reason.assign("DESUXELFIRUXBSPDWQDSYLSSRCZPOJURUBRVIHFLLOAKLWEQPJJWNGEEVPTMECVSGGHZI");

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
    msg.setTimeStamp(0.22075080409081804);
    msg.setSource(51555U);
    msg.setSourceEntity(186U);
    msg.setDestination(60590U);
    msg.setDestinationEntity(156U);
    msg.restriction = 3U;
    msg.reason.assign("AFRNBWCTHORHJZLTXFHZUHWEEMDUPUZYMHSHGQQSZYIKIZDQGYLHHSKPCKRLSPJJIGXBIMRTMOAITYPUDSKZGAVNDCAFDEPAO");

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
    msg.setTimeStamp(0.7559841485820954);
    msg.setSource(33011U);
    msg.setSourceEntity(189U);
    msg.setDestination(62435U);
    msg.setDestinationEntity(148U);
    msg.restriction = 174U;
    msg.reason.assign("OMFGKSIJVULLDBEHGWIEGJSAZYVIJZHRPLXQHNSUKVWLEOSCNWOMKKMMPCPHJZATDLWYOQXOBNJIUUTFTRDBYEGWNAWTOKXKRFQWDGAALHVBHPCDZZEHTOOPINQUWKDJGPOERBWMJDPXVFFZQQNTRRKNSUTIHTLGVXPDVZYXQCIUXMSMCJBXVFFKELQCNCBQOKMDHSNYRPJRBXIYYBVYRIZACAAYCLEQTCZMSAEUDHFSGPSEJFXTLAIFYMNGG");

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

  return test.getReturnValue();
}
