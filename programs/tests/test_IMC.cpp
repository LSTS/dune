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
// IMC XML MD5: e6fe79b3d58657791d91d27b70b58e57                            *
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
    msg.setTimeStamp(0.121725952067);
    msg.setSource(24399U);
    msg.setSourceEntity(58U);
    msg.setDestination(55884U);
    msg.setDestinationEntity(224U);
    msg.state = 145U;
    msg.flags = 48U;
    msg.description.assign("EDHTOBYYWYIJBJLFNTEWYUEASLZEVTRQSDIUDJOFHDICMWQEKVUVWIUZRWTQWGYESWFGNIARHNEPUQJMMZPCJOVJGIKYBVCNBNKJUFZBMKMDVIGRSOTPUVSCXQKHLSTCSVRFOVEEIABZMDYUUBPCPKGSGXPMRMTPLLLRCCBAWQAQXXSRXHCBDZFILNKQPMZKDAZCWFPNGAXHHGFMTIXJHROYDRXFANUQTYPJ");

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
    msg.setTimeStamp(0.117364002568);
    msg.setSource(64100U);
    msg.setSourceEntity(75U);
    msg.setDestination(7158U);
    msg.setDestinationEntity(166U);
    msg.state = 246U;
    msg.flags = 220U;
    msg.description.assign("UTANQFKJVUCRZQWQKSZAYSOSIMUEEQWVTSAPBNKYBNLVIBVCPUPWFIXNICGDYLVCOBGIRIEJEGPRGDYVYFIAVSHZJFTRCXJAPKNABXJNMNGLKJHXBSJVYLRZXMNGPWHLH");

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
    msg.setTimeStamp(0.0960985440335);
    msg.setSource(14895U);
    msg.setSourceEntity(146U);
    msg.setDestination(2412U);
    msg.setDestinationEntity(171U);
    msg.state = 27U;
    msg.flags = 232U;
    msg.description.assign("PGMOYTLQKNPAZIXDYQTJRPGTOWSFDHMSLAQHYNGVPYJFZKMJIBRZLCDEV");

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
    msg.setTimeStamp(0.735811625164);
    msg.setSource(20049U);
    msg.setSourceEntity(131U);
    msg.setDestination(7622U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.547829211703);
    msg.setSource(18851U);
    msg.setSourceEntity(244U);
    msg.setDestination(43986U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.47168187056);
    msg.setSource(63419U);
    msg.setSourceEntity(161U);
    msg.setDestination(64491U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.852137560836);
    msg.setSource(2969U);
    msg.setSourceEntity(21U);
    msg.setDestination(22594U);
    msg.setDestinationEntity(30U);
    msg.id = 154U;
    msg.label.assign("RGVUNYMPOOGYHXRMZLXGLPFZMMFMOATYILHIIEAERACVQLKHAJLZYJSHIFDVUNGXNXIJQYWOBJNSUDJWDHNVSTKUACJJKZBZCUXPITXNBWWSHRIIHWEKKVQSSDITAFMBDJUYPKEWGVBWXFTLOGXUBUWNDSLNLZSFQHABVZUDSZTNJFPDODWRBEXATRFJFCVAHGQCMKCYWPQYOOCSGECGYOHYTQEMFPRCQ");
    msg.component.assign("RGZETPTGDKMTZWMSDNYGTPTPVJJKQPAZBLNNPJRBXHEFPMDNLCREJICAGUJVIWOSWZVQPXEIQZALLLWIXHIEOCODAWCMVVUVCGQQPINCWWQHXC");
    msg.act_time = 45377U;
    msg.deact_time = 51947U;

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
    msg.setTimeStamp(0.830632024442);
    msg.setSource(35801U);
    msg.setSourceEntity(212U);
    msg.setDestination(38848U);
    msg.setDestinationEntity(79U);
    msg.id = 246U;
    msg.label.assign("RGKRBVAJPWVZLSMKCDUTONQPNYEFOEFJJRTBNL");
    msg.component.assign("XDHLULNJBKURKHIQWSEDETARQPVWYMLSYOIBTXROZJXHNZVZYPZQPBFQPMCAHJTHDCBIK");
    msg.act_time = 62399U;
    msg.deact_time = 39616U;

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
    msg.setTimeStamp(0.678680796052);
    msg.setSource(30088U);
    msg.setSourceEntity(6U);
    msg.setDestination(11134U);
    msg.setDestinationEntity(39U);
    msg.id = 221U;
    msg.label.assign("CLCDGWHHGIJSOWBDQVTLJYOITLSIVNWCZVQTULKEEEPYLGOXDTTKUOSQGMEOHAEEEDPALEVMQTPGADPMTIHMFUFRUZJXRUBCLVDFVPCASWTWVUJMBERABYZGXDXCYRHQRUQTYANSIYRDJVQNIQRSONOKJPXKA");
    msg.component.assign("CFEDYYSIIJCHMAPIVHMPPWPDQVLHSBQHOLUTOXRKDWXBJVUGPZWACUHJNNIFJWKQTXFNDALIQOATJROFTSKNUFGTZSVLCRXMSMQMYCGJKZRCFARVTDGUZVWKRVFZBIOCZMH");
    msg.act_time = 45340U;
    msg.deact_time = 57720U;

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
    msg.setTimeStamp(0.372288832259);
    msg.setSource(45860U);
    msg.setSourceEntity(143U);
    msg.setDestination(52722U);
    msg.setDestinationEntity(4U);
    msg.id = 190U;

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
    msg.setTimeStamp(0.65393764883);
    msg.setSource(2590U);
    msg.setSourceEntity(24U);
    msg.setDestination(37718U);
    msg.setDestinationEntity(245U);
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
    msg.setTimeStamp(0.40229906528);
    msg.setSource(45890U);
    msg.setSourceEntity(245U);
    msg.setDestination(22309U);
    msg.setDestinationEntity(2U);
    msg.id = 159U;

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
    msg.setTimeStamp(0.981976098723);
    msg.setSource(8505U);
    msg.setSourceEntity(22U);
    msg.setDestination(8327U);
    msg.setDestinationEntity(168U);
    msg.op = 83U;
    msg.list.assign("OJIOZKLAGHKACXSFCUIMVIPPVSZTGRCWOAPRTIYSUBTECZHWLRYEZJCMEKENGCZWQEMHQ");

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
    msg.setTimeStamp(0.00699743100661);
    msg.setSource(24056U);
    msg.setSourceEntity(172U);
    msg.setDestination(26101U);
    msg.setDestinationEntity(126U);
    msg.op = 142U;
    msg.list.assign("VXATXPVIZKOGSJSDRAICAANBPJFJUHEMODEHAVSFVGSCZRXYPCIJBNFPUZDLHUHKCTOEMIUPFDRJDIQVDLVBACFZLFGNSRWLIKREXNMTPWWDHQFNOLQEGOEOAGGWMWZUVXYCNYLRJXUGTGMEBKMLNMSMPRQBTYKOCLZDRJMJEQYUIUIQPTQFVQKSJZZVXTQBKWHEOCVKUBSHSHZCIBOBDPZCYULGOXGWKYMNYTFHKYXBYTWEX");

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
    msg.setTimeStamp(0.0333056652653);
    msg.setSource(45708U);
    msg.setSourceEntity(80U);
    msg.setDestination(19159U);
    msg.setDestinationEntity(68U);
    msg.op = 30U;
    msg.list.assign("FUHDCSBUVTBRVXUDSYLDDGQGPXURAZDZSYRLCFKAZITRCFGCNQHRCGLDTVQQZELSHJNIFBINPHZPXBHPWMDUOOSWEKIWYQPGRTVCOLEMGJFTTKHXNEYIZOKEBOFRRBWSVKYWMPAPONGQAUS");

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
    msg.setTimeStamp(0.358645680104);
    msg.setSource(7863U);
    msg.setSourceEntity(79U);
    msg.setDestination(52978U);
    msg.setDestinationEntity(207U);
    msg.value = 20U;

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
    msg.setTimeStamp(0.711580618193);
    msg.setSource(37136U);
    msg.setSourceEntity(60U);
    msg.setDestination(4484U);
    msg.setDestinationEntity(173U);
    msg.value = 240U;

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
    msg.setTimeStamp(0.56657210746);
    msg.setSource(23001U);
    msg.setSourceEntity(179U);
    msg.setDestination(46008U);
    msg.setDestinationEntity(111U);
    msg.value = 54U;

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
    msg.setTimeStamp(0.96925763164);
    msg.setSource(33404U);
    msg.setSourceEntity(128U);
    msg.setDestination(35322U);
    msg.setDestinationEntity(94U);
    msg.consumer.assign("FEWTVKCNAJSUBOUOWFRGCGEYKAKNZLQWKRCQNWJQTFSIXSPHFYVVDWRDYPXJHUYGRSRKCAITPYCQCTVFIGWXNDQPUSOXQBMMOTLBIMVLGRFMZMDAXWXVVMOOSMYJSKHELUHTHFDAUBPLULNBDNVRD");
    msg.message_id = 9481U;

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
    msg.setTimeStamp(0.0445550131365);
    msg.setSource(56540U);
    msg.setSourceEntity(36U);
    msg.setDestination(2509U);
    msg.setDestinationEntity(103U);
    msg.consumer.assign("NUNDKPWVONTSVOMBGJMFUFHAYQVZCCMHQLRRKSXXXFQCIBBHPBBEFNQJHDTEEORMAZVLGASVBPFWLOSHYCUNGSTRPLUGKZHKSUHPFNMMGYDFRKEDPELAUJMYVIEUQVYZPQBDILOXIMLMNNEJODGFAPRQJNRKXYLXYHCVCJEQUIGWKXPYWDNVMWOSKQSUCXOUTIZTYLXZHQKASAYVWZAAJZSZTIBRRRDBJJK");
    msg.message_id = 64995U;

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
    msg.setTimeStamp(0.883056607452);
    msg.setSource(57632U);
    msg.setSourceEntity(83U);
    msg.setDestination(47365U);
    msg.setDestinationEntity(109U);
    msg.consumer.assign("PKBNGEOYDSGULIRSDKOQMMQMHHLGBWJIFCQSVPMZDXFMKUZS");
    msg.message_id = 62133U;

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
    msg.setTimeStamp(0.68978346856);
    msg.setSource(49056U);
    msg.setSourceEntity(152U);
    msg.setDestination(36629U);
    msg.setDestinationEntity(20U);
    msg.type = 126U;

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
    msg.setTimeStamp(0.942650637605);
    msg.setSource(27208U);
    msg.setSourceEntity(56U);
    msg.setDestination(52546U);
    msg.setDestinationEntity(220U);
    msg.type = 103U;

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
    msg.setTimeStamp(0.95772501314);
    msg.setSource(14873U);
    msg.setSourceEntity(204U);
    msg.setDestination(48376U);
    msg.setDestinationEntity(211U);
    msg.type = 51U;

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
    msg.setTimeStamp(0.2975776005);
    msg.setSource(55395U);
    msg.setSourceEntity(60U);
    msg.setDestination(706U);
    msg.setDestinationEntity(55U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.132522042193);
    msg.setSource(52670U);
    msg.setSourceEntity(173U);
    msg.setDestination(360U);
    msg.setDestinationEntity(238U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.461153773979);
    msg.setSource(26338U);
    msg.setSourceEntity(254U);
    msg.setDestination(53729U);
    msg.setDestinationEntity(250U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.111521139993);
    msg.setSource(17132U);
    msg.setSourceEntity(48U);
    msg.setDestination(14402U);
    msg.setDestinationEntity(68U);
    msg.total_steps = 31U;
    msg.step_number = 104U;
    msg.step.assign("ZQGYFKGIWAHNGXRYTMWTPZWJUEQMAEZFDJRYPVPPWAQLTSBUSSTPCIMUPJQYBKADZKLKMJHIEQWOWHGXQDBZZBSKXLSLLMSXXONIKDLBORJVCCMIRGVDLDCROSGARRLNVZNTHI");
    msg.flags = 96U;

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
    msg.setTimeStamp(0.324365121485);
    msg.setSource(15415U);
    msg.setSourceEntity(22U);
    msg.setDestination(2489U);
    msg.setDestinationEntity(89U);
    msg.total_steps = 159U;
    msg.step_number = 73U;
    msg.step.assign("AUXLESLHDFSDQUXGFUFIIWORSBSARWKBWXFGRNDTBXQKJKNLRFMSPJXVPMTZYQRWOFPTWUECHWXCKUPZLVYZBPJODIXNJUEHKAGHEHNQVKJCPTXSGCHIEIVNEGUZNTQVGATRDWO");
    msg.flags = 164U;

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
    msg.setTimeStamp(0.737793877021);
    msg.setSource(49824U);
    msg.setSourceEntity(56U);
    msg.setDestination(42415U);
    msg.setDestinationEntity(144U);
    msg.total_steps = 72U;
    msg.step_number = 75U;
    msg.step.assign("ZITNTCTWBVIUQXKGRYOXJJKCHSOWAIGPDPTYASPOZZWOZAEJKCEWZRYONDGXTMLHYXAVFFAFMGDQYVFBAGAWGFBXITSLPUNDBVWMHUNZUEIRXINLQDIKTUPQPKBRRSGFVGUROMEXKEQQCLTZVCYNIRLGDOHMDMMLVHHXIEEDHAQHMKYHCSKZPJCORPUNFMLEAJBXLKWNSTYZYDCBVXWJUJCFGDTEZFJENFRSOVBWBQQSJKY");
    msg.flags = 136U;

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
    msg.setTimeStamp(0.956293527245);
    msg.setSource(8637U);
    msg.setSourceEntity(209U);
    msg.setDestination(44285U);
    msg.setDestinationEntity(92U);
    msg.state = 38U;
    msg.error.assign("TTMMPMBUOCGINJWKXNYCFFGMPWLBY");

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
    msg.setTimeStamp(0.81020584735);
    msg.setSource(30458U);
    msg.setSourceEntity(252U);
    msg.setDestination(56529U);
    msg.setDestinationEntity(72U);
    msg.state = 135U;
    msg.error.assign("IQUOWQTWNXMNSZXWCEFKPSQMLYPCVKALHIKTJRSVMCTYXNPEAOUBQWPWCTUZKATBJUKRYYYWQSCDPYPCOEGC");

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
    msg.setTimeStamp(0.629569468184);
    msg.setSource(40567U);
    msg.setSourceEntity(148U);
    msg.setDestination(47964U);
    msg.setDestinationEntity(245U);
    msg.state = 160U;
    msg.error.assign("LHOOTQOJRRZFEBOJVLCIASVQZRIHRPEEUXPFKUAGTTFMKIVUFEIRZXUPEUHNAONZDJGBOMDYDZQQWHGTCFFSHQNPVXICLSMQSMSTBXJNYWATWWIFAGAOLTBRJXKHV");

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
    msg.setTimeStamp(0.794945877267);
    msg.setSource(10309U);
    msg.setSourceEntity(95U);
    msg.setDestination(28973U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.965730358221);
    msg.setSource(39425U);
    msg.setSourceEntity(182U);
    msg.setDestination(47916U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.860039864809);
    msg.setSource(60302U);
    msg.setSourceEntity(41U);
    msg.setDestination(48301U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.381158822576);
    msg.setSource(43502U);
    msg.setSourceEntity(101U);
    msg.setDestination(49993U);
    msg.setDestinationEntity(48U);
    msg.op = 117U;
    msg.speed_min = 0.280201593813;
    msg.speed_max = 0.0369522488375;
    msg.long_accel = 0.0886220588524;
    msg.alt_max_msl = 0.216485173958;
    msg.dive_fraction_max = 0.0792803503659;
    msg.climb_fraction_max = 0.959587005857;
    msg.bank_max = 0.745256908574;
    msg.p_max = 0.918849616512;
    msg.pitch_min = 0.485411065504;
    msg.pitch_max = 0.121483649557;
    msg.q_max = 0.926775196654;
    msg.g_min = 0.837875239053;
    msg.g_max = 0.802437126674;
    msg.g_lat_max = 0.796333614468;
    msg.rpm_min = 0.985655552476;
    msg.rpm_max = 0.687765722288;
    msg.rpm_rate_max = 0.346853347124;

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
    msg.setTimeStamp(0.874431311055);
    msg.setSource(20158U);
    msg.setSourceEntity(62U);
    msg.setDestination(6392U);
    msg.setDestinationEntity(189U);
    msg.op = 181U;
    msg.speed_min = 0.00576986948319;
    msg.speed_max = 0.143729813392;
    msg.long_accel = 0.290973917945;
    msg.alt_max_msl = 0.0152665108212;
    msg.dive_fraction_max = 0.191412738463;
    msg.climb_fraction_max = 0.254975656637;
    msg.bank_max = 0.84067642706;
    msg.p_max = 0.527989311267;
    msg.pitch_min = 0.901154709236;
    msg.pitch_max = 0.754935660162;
    msg.q_max = 0.361284793962;
    msg.g_min = 0.339784654045;
    msg.g_max = 0.401355390762;
    msg.g_lat_max = 0.212121522406;
    msg.rpm_min = 0.209534543169;
    msg.rpm_max = 0.536754334369;
    msg.rpm_rate_max = 0.601258283012;

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
    msg.setTimeStamp(0.75316409859);
    msg.setSource(8825U);
    msg.setSourceEntity(76U);
    msg.setDestination(26998U);
    msg.setDestinationEntity(19U);
    msg.op = 112U;
    msg.speed_min = 0.10447401358;
    msg.speed_max = 0.3680062337;
    msg.long_accel = 0.190098807471;
    msg.alt_max_msl = 0.0184317049522;
    msg.dive_fraction_max = 0.860108932584;
    msg.climb_fraction_max = 0.616361649081;
    msg.bank_max = 0.611460870186;
    msg.p_max = 0.00671106587532;
    msg.pitch_min = 0.238700786256;
    msg.pitch_max = 0.391487303984;
    msg.q_max = 0.316156800861;
    msg.g_min = 0.32993221121;
    msg.g_max = 0.644716253512;
    msg.g_lat_max = 0.13990138577;
    msg.rpm_min = 0.369918659503;
    msg.rpm_max = 0.834154978116;
    msg.rpm_rate_max = 0.115208550115;

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
    msg.setTimeStamp(0.226487423994);
    msg.setSource(44065U);
    msg.setSourceEntity(217U);
    msg.setDestination(29851U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.163468221681);
    msg.setSource(22625U);
    msg.setSourceEntity(81U);
    msg.setDestination(5786U);
    msg.setDestinationEntity(142U);
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LOWPXWQDAJTYOXJMEEUOUPNNNVONMOEUQMDPFQHLKYOSNDDCZPDTVTMZBKWQDKQHX");
    tmp_msg_0.value.assign("YPPGHSZFJYECXJLNIQIEITCGUYOKQAVUQNEAOPGKFFYBBTPUCARWJTUETHWANHADVGVFEMAVKDYZJTSBIGJDMEIQZIQBVVXXCNMYRHPUSTIDQSBMUPQWFLZBKYCGLPXJT");
    tmp_msg_0.type = 26U;
    tmp_msg_0.access = 54U;
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
    msg.setTimeStamp(0.221312897712);
    msg.setSource(43245U);
    msg.setSourceEntity(153U);
    msg.setDestination(33140U);
    msg.setDestinationEntity(9U);
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.0352716953505;
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
    msg.setTimeStamp(0.443892892214);
    msg.setSource(11580U);
    msg.setSourceEntity(244U);
    msg.setDestination(18071U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.744233023704;
    msg.lon = 0.496887220271;
    msg.height = 0.279429405808;
    msg.x = 0.308306711112;
    msg.y = 0.713641668167;
    msg.z = 0.457837284653;
    msg.phi = 0.771153876932;
    msg.theta = 0.207641366457;
    msg.psi = 0.614389023838;
    msg.u = 0.953227594302;
    msg.v = 0.557370260439;
    msg.w = 0.0452100569323;
    msg.p = 0.873526768969;
    msg.q = 0.856676987845;
    msg.r = 0.975834314175;
    msg.svx = 0.915477363308;
    msg.svy = 0.560491134517;
    msg.svz = 0.0201373403222;

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
    msg.setTimeStamp(0.447435277711);
    msg.setSource(25999U);
    msg.setSourceEntity(18U);
    msg.setDestination(42150U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.570801195855;
    msg.lon = 0.464532581955;
    msg.height = 0.589704031467;
    msg.x = 0.743399944173;
    msg.y = 0.731118731927;
    msg.z = 0.659253846321;
    msg.phi = 0.279095811613;
    msg.theta = 0.457307343135;
    msg.psi = 0.630899142378;
    msg.u = 0.744979609387;
    msg.v = 0.0311979994153;
    msg.w = 0.22637018024;
    msg.p = 0.2490419355;
    msg.q = 0.757723444068;
    msg.r = 0.168363393722;
    msg.svx = 0.983853675333;
    msg.svy = 0.300918187397;
    msg.svz = 0.716371706315;

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
    msg.setTimeStamp(0.201694671979);
    msg.setSource(36833U);
    msg.setSourceEntity(14U);
    msg.setDestination(32395U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.876179809805;
    msg.lon = 0.104461024593;
    msg.height = 0.844516731194;
    msg.x = 0.17071888223;
    msg.y = 0.356514557576;
    msg.z = 0.995990025167;
    msg.phi = 0.654980090757;
    msg.theta = 0.0191046263425;
    msg.psi = 0.70743384851;
    msg.u = 0.644270016744;
    msg.v = 0.220981447925;
    msg.w = 0.274038947641;
    msg.p = 0.664454337071;
    msg.q = 0.51185538073;
    msg.r = 0.401367373257;
    msg.svx = 0.478146235882;
    msg.svy = 0.643477174474;
    msg.svz = 0.461489533851;

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
    msg.setTimeStamp(0.864265328498);
    msg.setSource(51419U);
    msg.setSourceEntity(76U);
    msg.setDestination(55106U);
    msg.setDestinationEntity(177U);
    msg.op = 60U;
    msg.entities.assign("HDZMXXXGLLNWKVKRROYUPPEDDFQBANTJJRFFQYIVIMPUPBGWMXBFHMVHSDMDNNFAJCGNVQXESIILHPCUESLXYTBZWREOPFQWLCXXSEBWFJMNDDBH");

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
    msg.setTimeStamp(0.0106489831229);
    msg.setSource(53810U);
    msg.setSourceEntity(172U);
    msg.setDestination(15574U);
    msg.setDestinationEntity(254U);
    msg.op = 197U;
    msg.entities.assign("CZSUQXTSAYOACSINOKMCNGCVOHEPJEEKRDMQBDPHHWKRNFWUBYQYZWQXIYGTMVYGSRTMRJKHYCJAVCNAXVZGZXLOLWDIGNLJKIRLZVEATTQHPSKFHRMQJPEVLOSYFNJSJFOTIWLHXRKSZZNIIBFAVUMMBPXTYQPZOWDGWRTIHGMLPHKCXDD");

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
    msg.setTimeStamp(0.872220584146);
    msg.setSource(26057U);
    msg.setSourceEntity(6U);
    msg.setDestination(8612U);
    msg.setDestinationEntity(186U);
    msg.op = 216U;
    msg.entities.assign("CFUJBEYPWRIJGPDIKXUCQXBGMDAGOYDLAZHMICCTYLXEWLXQPDMGPIRAPRONVVSZAYNDSFUNC");

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
    msg.setTimeStamp(0.887458992319);
    msg.setSource(9704U);
    msg.setSourceEntity(67U);
    msg.setDestination(3363U);
    msg.setDestinationEntity(107U);
    msg.type = 75U;
    msg.speed = 29034U;
    const char tmp_msg_0[] = {-45, -88, 80, 48, 24, 120, 9, 18, -68, -104, 5, 27, -37, 50, -82, -61, 2, -108, -70, 0, 115, 58, 103, 30, -44, 24, 68, -102, -108, 108, 60, 11, 45, -15, -123, -103, -100, 41, -17, 39, 63, 77, 40, -84, -49, -25, 119, 108, 120, 99, 59, 41, -79, 26, 32, -56, -126, -2, 82, 122, 0, 61, 103, -22, -56, 83, -13, 11, -9, -45, 118};
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
    msg.setTimeStamp(0.0556746299708);
    msg.setSource(12278U);
    msg.setSourceEntity(83U);
    msg.setDestination(28734U);
    msg.setDestinationEntity(52U);
    msg.type = 44U;
    msg.speed = 46421U;
    const char tmp_msg_0[] = {75, -68, 52, 87, -61, -119, 43, -19, -29, -103, -122, 56, 2, -43, 116, 87, 3, 8, 103, -27, 78, 76, -6, -46, -38, -111, 110, 68, 111, -44, -126, 10, -31, 55, 34, -86, 120, 71, 78, -15, -123, -124, 58, -123, 32, -12, -76, -26, -108, -76, 17, -24, 89, 98};
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
    msg.setTimeStamp(0.529397077126);
    msg.setSource(3925U);
    msg.setSourceEntity(248U);
    msg.setDestination(46392U);
    msg.setDestinationEntity(111U);
    msg.type = 174U;
    msg.speed = 20708U;
    const char tmp_msg_0[] = {-66, 36, -16, -56, -79, 112, -73, -89, 2, -118, -63, -51, 51, -29, 79, 68, 45, 101, 125, 92, 97, -36, -3, -91, 3, -119, 25, -77, -15, -26, -78, 58, -66, 36, -30, 22, 116, 33, -125, -85, 52, -124, -14, 63, -72, 124, 114, -48, 94, -29, -21, -77, -74, -83, 126, 67, -66, -9, -29, -88, -13, 35, 70, -78, -77, -44, 41, -35, 123, 71, -116, 34, -107, 29, -6, 3, -39, -33, -85, 96};
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
    msg.setTimeStamp(0.889084078902);
    msg.setSource(15313U);
    msg.setSourceEntity(239U);
    msg.setDestination(39384U);
    msg.setDestinationEntity(72U);
    msg.op = 12U;
    msg.tas2acc_pgain = 0.800679699386;
    msg.bank2p_pgain = 0.0672866712729;

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
    msg.setTimeStamp(0.821150627514);
    msg.setSource(58431U);
    msg.setSourceEntity(71U);
    msg.setDestination(8568U);
    msg.setDestinationEntity(72U);
    msg.op = 238U;
    msg.tas2acc_pgain = 0.746412485375;
    msg.bank2p_pgain = 0.390470797394;

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
    msg.setTimeStamp(0.483714824439);
    msg.setSource(48446U);
    msg.setSourceEntity(94U);
    msg.setDestination(62275U);
    msg.setDestinationEntity(216U);
    msg.op = 62U;
    msg.tas2acc_pgain = 0.150833601375;
    msg.bank2p_pgain = 0.779674889186;

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
    msg.setTimeStamp(0.266179106516);
    msg.setSource(45189U);
    msg.setSourceEntity(111U);
    msg.setDestination(41613U);
    msg.setDestinationEntity(101U);
    msg.available = 2090131326U;
    msg.value = 120U;

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
    msg.setTimeStamp(0.780235426464);
    msg.setSource(34046U);
    msg.setSourceEntity(45U);
    msg.setDestination(50966U);
    msg.setDestinationEntity(83U);
    msg.available = 3827197755U;
    msg.value = 77U;

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
    msg.setTimeStamp(0.11883959509);
    msg.setSource(45890U);
    msg.setSourceEntity(220U);
    msg.setDestination(49540U);
    msg.setDestinationEntity(101U);
    msg.available = 3618387983U;
    msg.value = 63U;

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
    msg.setTimeStamp(0.158464803497);
    msg.setSource(5563U);
    msg.setSourceEntity(34U);
    msg.setDestination(21496U);
    msg.setDestinationEntity(159U);
    msg.op = 33U;
    msg.snapshot.assign("YHEUUZQAITFNEQFIXEYDRFIFVJKKMNHFJIRXRKTZXRJOHGSYTPHEJQKUCXKSWWHRMVACWLZBXHEQVRHWPZBNMNCQDPUSCOAXSTUKDFJDZIZPWLHCPVHYLEIKFLDWBUVVGANTMMCPMMWQUAGBWBGDAQOFYKUUPOZFDMXMLBSJVUMDYKGLZIJNGEHXEZTOCONTPJXOJIOQERLYBCLYWKGFVSAGNDP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VSYPDLKYONSSGMVMJPQBWLXTWQPWDBHAKSPGERPAHOUDDWQYBNRUFFDANIHNCBRWKEYEAVSVJGPPIOUJMIFFJRKQOBCHWWGZSBCLHWSIZACUXZGOCQTTWLNFOTUAJMDHURRZTPJNZECL");
    tmp_msg_0.attr_type = 67U;
    tmp_msg_0.min.assign("TZWJMYWERKLFIDMFNNZKUHUYRYHJTNBQGKPCBSABITIJRPXVVWMTYNELZXYIZCDPHCVTYJCVAEYZTFJDKXUMLODQURVAPQMOJPOJXDUQRFSUEJZTHGCDPNWMSIHJRKEXKQMNSQGNISHAVSYLDUEOVLDALDMWUDIGIGVPRYTNVWWZGEFECRKXXBHBHREOSLCQXLNLLZKOGTKAOZOAUCMAA");
    tmp_msg_0.max.assign("JDRLZBWYLHFZBWFDVJQGQKCNYBBIXSGYSHDKZBFKMZXTUPAGQTAMVOIUJPPHXXSNCNQGEHBWOUTXCZHWLXUVLGURGOYHINBEPUOISSQONDLTWGYZLKYSVKKIWFYXJAJXEYCRNJQAOJZRWXNTHOPTRZQMGKTPOURISKMWQPCFKESIORHDCVBFADEMBFEVVJELCCVQRICGERUCFKAITNVSGNZUFYWVQDAAP");
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
    msg.setTimeStamp(0.305417196647);
    msg.setSource(5588U);
    msg.setSourceEntity(149U);
    msg.setDestination(37299U);
    msg.setDestinationEntity(61U);
    msg.op = 14U;
    msg.snapshot.assign("KHPCKPEBJBFDVRIRXIDOWFVYBQYIELLEDJMNFQGV");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 22632U;
    tmp_msg_0.lat = 0.959377441599;
    tmp_msg_0.lon = 0.666683350615;
    tmp_msg_0.speed = 0.412484526764;
    tmp_msg_0.speed_units = 136U;
    tmp_msg_0.custom.assign("FNVJZOYQKBYDUSSUGFFWVHEYGRZWNBOVWMQDBMO");
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
    msg.setTimeStamp(0.15571205848);
    msg.setSource(33660U);
    msg.setSourceEntity(32U);
    msg.setDestination(59362U);
    msg.setDestinationEntity(76U);
    msg.op = 146U;
    msg.snapshot.assign("BMQYGNVVVUIYIRFRZATZCBXFGIKDHTUFYHXVUEDJTTRSVUCEPQPDAEUJJCCCLZLSRKJSGJTXVZENBDFBJQUWOSHTGNRIPTJURXBUNGVXMLGSCEZFWMQXWXPLKMBQPROORO");
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 17993U;
    tmp_msg_0.ttl = 40709U;
    tmp_msg_0.destination.assign("IRYPXFRBCUOBPWXKZGUVADMLLTSFDIS");
    const char tmp_tmp_msg_0_0[] = {87, 109, -115, -56, -86, 62, 58, -25, -114, -96, -43, -45, 13, -33, 45, -67, 46, 8, -126, -48, 62, -55, -53, 38, 94, 81, 126, -45, 36, -32, 78, -13, 112, -110, 86, -40, 76, 50, 92, -58, -88, 68, -71, -125, 21, -81, 122, -12, -33, -115, 14, 37, 39, -102, -67, 71, -82, 121, 75, -69, -16, 31, 71, -47, 5, -61, 31, -101, 32, 103, 21, -40, -68, -80, 58, -112, -56, 94, -11, -114, -116, -118, -98, -48, 79, -74, 18, -98, 28, -74, -26, 77, 37, -13, -93, 110, 11, 31, -16, -34, -88, -38, 15, -125, -2, 67, 116, 78, 85, 68, -2, 101, 29, -77, 35, 84, 54, 56, 81, -102, 65, -105, 77, -17, -81, -116, 30, 18, 58, 14, -55, 119, -39, -104, 54, -35, 119, 12, 81, 101, 95, -34, 108, -49, -85, 37, 109, 75, -99, -17};
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
    msg.setTimeStamp(0.81812181659);
    msg.setSource(60338U);
    msg.setSourceEntity(39U);
    msg.setDestination(47343U);
    msg.setDestinationEntity(85U);
    msg.op = 66U;
    msg.name.assign("DFBGTWKEUPJACUUDIHIVJJGTXVNNVSGFKQPHTIPBIKHXRIOLMGZEADHVXTYSLRZIAORHTQTSDZCIWLCYCBAJEALQWZOCZCTOSMXZMFEBRTZAYYSRDGQWJYNWCDFDWQHSRGEGXBSOKKVLXYVJZTLUCGHYEOIQCEWWZNHUOJK");

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
    msg.setTimeStamp(0.707469394392);
    msg.setSource(24304U);
    msg.setSourceEntity(230U);
    msg.setDestination(5166U);
    msg.setDestinationEntity(224U);
    msg.op = 150U;
    msg.name.assign("GLOWRDXYVRFAZSLUYKSJMVRRDWPBOCYTKIJABBJJPWOMPAQDIJVEGBIYPJSLRXWLZZJXUQUKWRELHBZDGNAGLHCOGVNADGAOMKDKJYPHSKTLHMZRIYMEQURAPHMTQOQDF");

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
    msg.setTimeStamp(0.178824573945);
    msg.setSource(36846U);
    msg.setSourceEntity(189U);
    msg.setDestination(56392U);
    msg.setDestinationEntity(229U);
    msg.op = 210U;
    msg.name.assign("JOCWONXGSGVCROOADGODTGLXMIFVAQAFTASLKESCRUABDIOEPPCQLZNKJJVDTHBAEFHYCLKGTNCFXZZTBWHFUZKBRJTZAWRJERGNFHUVHRTPUJBPGBVRFUQYXVLXOQXEQHXYZIJLKUDUIVYUHCKBWIGLSKZQHOAGDS");

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
    msg.setTimeStamp(0.328968092836);
    msg.setSource(29422U);
    msg.setSourceEntity(164U);
    msg.setDestination(53919U);
    msg.setDestinationEntity(34U);
    msg.type = 27U;
    msg.htime = 0.600875909422;
    msg.context.assign("ISXGZIWGDRXQYRLFEKFESZIIMNVGWBPNMEMDGAEOPHFAZQFBITJCOFUJHDXLCVKUXRQGWVQPQBUHDNTWCCZZQTLYMLCJBLHKSMVSKYIWFQYUHTGIZVEOPIFUMEXJKXBLHDHTUUWAYT");
    msg.text.assign("RBLAWCDBFXXYJVBHZTRDFZIADKRMVULNENLXICOINZAVVSRSWWUVCOKNQETGWDIN");

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
    msg.setTimeStamp(0.563549984235);
    msg.setSource(51597U);
    msg.setSourceEntity(156U);
    msg.setDestination(49567U);
    msg.setDestinationEntity(123U);
    msg.type = 94U;
    msg.htime = 0.131503246449;
    msg.context.assign("GLCNPOJNNENVGPSXXFZALBUIRMWQGSWOTRPMEAHFTZSHPLAZTJNDZHSAFNCRKNLXBMWZOOQMYTWWPKOJHJKSBRAEELXXLLVCUSGGJKYQPQGIHDQSBSYCTECRAMFXNRCTTMCEPADSICFUWYNDJGOIDOYKGVUWXHZUJINPRYHBXBVKXYHIFQBOFFKKDFMAKIVJMPVMECODUQVZLAUBYYTTUERHXVYEJWDUHQWBZSIUI");
    msg.text.assign("XOWQHKJLJXVRHTNUMRMJKCMFQZNNCMPSFZLKACSVNIILLLQZNBFLHEVFVDDJHIPPFTHYZXSACREUEGQRXDJVFBRQCIOGGONFRWDVYRKBIZTTDDVL");

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
    msg.setTimeStamp(0.989392368168);
    msg.setSource(38141U);
    msg.setSourceEntity(213U);
    msg.setDestination(15550U);
    msg.setDestinationEntity(212U);
    msg.type = 174U;
    msg.htime = 0.369518372467;
    msg.context.assign("VBRYALJCBFJCPBEHNCQYLXYWIJSNJNXMYTZANIHUUNSLUSFPACRNNOULHGHDOHBKIPOBQWKWGJGOJZOGASHWSRKTIFYZGZILCCDWVDKWMREXMXSIQKHRLXPLKYAMVWTUUVLVOVKPAACITGZNQBDBDEGJXUBWGJSKTPEPBVCMFYOULQMPMSGZDQEPFPRDXEAJLDTCVXOMHTFRCEFTRAFRFWHTYVIYEY");
    msg.text.assign("ESPJLIFFBXBYLCFMRHOCEGZSOVWVSADEIXTXAJQVZH");

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
    msg.setTimeStamp(0.464362446325);
    msg.setSource(31628U);
    msg.setSourceEntity(140U);
    msg.setDestination(60320U);
    msg.setDestinationEntity(204U);
    msg.command = 229U;
    msg.htime = 0.89280338022;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 99U;
    tmp_msg_0.htime = 0.577415150524;
    tmp_msg_0.context.assign("BTPLMBMLPQOKCTBORUVDXJGQNFCZNZNRGZHRJATNVMLGNPVCSTUWDBJEEBCYZXYYGWYHQWRYMTUEVNLAYYQWZHWJGALOLJKHWTEDPRCTUHEDHKQDZDFYOGVURUUMGFAGGLRVXEXRZQAXDIDGLNIFTCPDKEFWPOZIASWBTBCMXLQOPTSXFPBIOHWQMEHRVJOYRSSPISZKILUWNFYEIQMIVMHOBKAHSAFVBM");
    tmp_msg_0.text.assign("JILVJEFYHQYTASDCDMXSILOAEDHFWKCRYWVTAOJQYGEHXMKJBEFQMNFNXJAVKAPPXZKFIHOEPZCGTMVBFLJDFBQYBGJXYROJLRPGNISCBDOVLURGNEYJFXKOIUYPCNWNUMHTIBKVILKIEUGPHLRTMHNGPBDWIZVEPDZSZMQSZKZOPCWVTULWB");
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
    msg.setTimeStamp(0.853884325082);
    msg.setSource(65489U);
    msg.setSourceEntity(174U);
    msg.setDestination(53845U);
    msg.setDestinationEntity(88U);
    msg.command = 4U;
    msg.htime = 0.883376005731;

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
    msg.setTimeStamp(0.714584375027);
    msg.setSource(45507U);
    msg.setSourceEntity(219U);
    msg.setDestination(22220U);
    msg.setDestinationEntity(71U);
    msg.command = 154U;
    msg.htime = 0.568756330645;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 215U;
    tmp_msg_0.htime = 0.593504323023;
    tmp_msg_0.context.assign("ZOOBFNQZAAOXXORLPTVYMKMPCKKXKJQHIODIXINCWWBHRDELNXULMRTECLEDDSYQGQELUGEBPLYSVUACWJVB");
    tmp_msg_0.text.assign("VSNXEEVTMTIWGDVZGCQUBKQYGWUFEDZGBJLCZMKWNMUHSPRYZVUXBYSNUXTRMOYRPKALPBJEAVOTA");
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
    msg.setTimeStamp(0.503779898676);
    msg.setSource(12173U);
    msg.setSourceEntity(104U);
    msg.setDestination(51504U);
    msg.setDestinationEntity(21U);
    msg.op = 41U;
    msg.file.assign("OVCNMVISMVYQFRGGYSIBUEHOFBXZDZTSJDZAWXFWIBUUDOEWWKUTWHCBHGOMAQPZUOKFQZSQDECNTMAFRDXIQCRHVFNCKJBGIXYKBCLIASNNSGTZVQEPQYIKOILMEDUOCPPPJQDACAPXRANNGKYJRFKLKOTHF");

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
    msg.setTimeStamp(0.764427252279);
    msg.setSource(61896U);
    msg.setSourceEntity(81U);
    msg.setDestination(7979U);
    msg.setDestinationEntity(165U);
    msg.op = 240U;
    msg.file.assign("TFEPDZUZXFGYCPHBNAZOKKGQPWHZFLAIXYEJQXEWEIHTOVJ");

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
    msg.setTimeStamp(0.977283323867);
    msg.setSource(14658U);
    msg.setSourceEntity(124U);
    msg.setDestination(59372U);
    msg.setDestinationEntity(243U);
    msg.op = 1U;
    msg.file.assign("PJFOVTLTVCXHCOLLPMXEPBSSNPZGPROMRCRIGWDZOMEFBPXXWLXTQYUMAQNBDBEFSZNNJVTWMSSXOIJVJAVFVQSDKJGZZNAIYMUGNWABVHHKAOTWTIPQFBBEORZLDJLPHLMS");

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
    msg.setTimeStamp(0.483243133687);
    msg.setSource(3300U);
    msg.setSourceEntity(205U);
    msg.setDestination(213U);
    msg.setDestinationEntity(49U);
    msg.op = 111U;
    msg.clock = 0.707807064608;
    msg.tz = -76;

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
    msg.setTimeStamp(0.132372113793);
    msg.setSource(12360U);
    msg.setSourceEntity(250U);
    msg.setDestination(38817U);
    msg.setDestinationEntity(96U);
    msg.op = 175U;
    msg.clock = 0.220165085382;
    msg.tz = -110;

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
    msg.setTimeStamp(0.900765509842);
    msg.setSource(19148U);
    msg.setSourceEntity(244U);
    msg.setDestination(50125U);
    msg.setDestinationEntity(2U);
    msg.op = 242U;
    msg.clock = 0.877076420979;
    msg.tz = 95;

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
    msg.setTimeStamp(0.798273170719);
    msg.setSource(20733U);
    msg.setSourceEntity(126U);
    msg.setDestination(51670U);
    msg.setDestinationEntity(24U);
    msg.conductivity = 0.274666244953;
    msg.temperature = 0.346226223442;
    msg.depth = 0.476242997518;

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
    msg.setTimeStamp(0.0842197786492);
    msg.setSource(57571U);
    msg.setSourceEntity(147U);
    msg.setDestination(5746U);
    msg.setDestinationEntity(204U);
    msg.conductivity = 0.243152974296;
    msg.temperature = 0.0830807493669;
    msg.depth = 0.612889273904;

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
    msg.setTimeStamp(0.764206769025);
    msg.setSource(54928U);
    msg.setSourceEntity(40U);
    msg.setDestination(2253U);
    msg.setDestinationEntity(164U);
    msg.conductivity = 0.909127150969;
    msg.temperature = 0.167035889019;
    msg.depth = 0.0147402381871;

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
    msg.setTimeStamp(0.565697950071);
    msg.setSource(39236U);
    msg.setSourceEntity(64U);
    msg.setDestination(11037U);
    msg.setDestinationEntity(242U);
    msg.altitude = 0.878542213122;
    msg.roll = 9131U;
    msg.pitch = 41083U;
    msg.yaw = 48093U;
    msg.speed = -27698;

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
    msg.setTimeStamp(0.827578395831);
    msg.setSource(64776U);
    msg.setSourceEntity(103U);
    msg.setDestination(46740U);
    msg.setDestinationEntity(151U);
    msg.altitude = 0.707086650209;
    msg.roll = 19699U;
    msg.pitch = 51992U;
    msg.yaw = 53451U;
    msg.speed = -12374;

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
    msg.setTimeStamp(0.904033912152);
    msg.setSource(52304U);
    msg.setSourceEntity(169U);
    msg.setDestination(41721U);
    msg.setDestinationEntity(32U);
    msg.altitude = 0.969680360464;
    msg.roll = 64238U;
    msg.pitch = 36587U;
    msg.yaw = 63768U;
    msg.speed = 1173;

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
    msg.setTimeStamp(0.908643841987);
    msg.setSource(37218U);
    msg.setSourceEntity(47U);
    msg.setDestination(16499U);
    msg.setDestinationEntity(7U);
    msg.altitude = 0.450713208514;
    msg.width = 0.743314368235;
    msg.length = 0.675687845218;
    msg.bearing = 0.0299701022046;
    msg.pxl = -16154;
    msg.encoding = 27U;
    const char tmp_msg_0[] = {-126, 9, -100, 71, 2, 101, -68, 17, 88, 48, 49, 28, -53, -116, -13, 29, 96, 32, -100, -112, 121, -61, 34, -46, 12, -78, -14, 111, 30, 124, 10, -67, -109, -45, 76, 47, 34, -79, 65, 23, 62, -13, 91, 29, -106, 46, -93, 74, -19, 33, 126, 26, -127, -79, 104, -15, -118, -121, -1, -64, 62, 87, -36, -14, -37, 39, 35, -85, -72, -63, -119, -38, -65, 69, 9, -15, -54, -1, -124, 95, 50, -18, -58, 83, 116, 23, -121, -108, -45, 1, 82, 120, -65, 101, -80, -64, 10, -21, -29, 39, 21, 119, -111, -52};
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
    msg.setTimeStamp(0.94251129576);
    msg.setSource(39252U);
    msg.setSourceEntity(154U);
    msg.setDestination(63855U);
    msg.setDestinationEntity(183U);
    msg.altitude = 0.425939119945;
    msg.width = 0.743860936756;
    msg.length = 0.0801866815743;
    msg.bearing = 0.0569036359152;
    msg.pxl = -15848;
    msg.encoding = 5U;
    const char tmp_msg_0[] = {120, 113, 98, -99, -112, -8, 75, 8, -7, 95, 44, -43};
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
    msg.setTimeStamp(0.610936519947);
    msg.setSource(6902U);
    msg.setSourceEntity(187U);
    msg.setDestination(37169U);
    msg.setDestinationEntity(188U);
    msg.altitude = 0.669307957549;
    msg.width = 0.917588842525;
    msg.length = 0.720858941519;
    msg.bearing = 0.52649122623;
    msg.pxl = -21627;
    msg.encoding = 104U;
    const char tmp_msg_0[] = {-53, -123, -12, -37, 33, -92, -119, 40, -35, 45, 54, -120, -36, 82, -23, 36, -106, -93, -75, 57, 42, -128, -89, -6, -27, -107, -125};
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
    msg.setTimeStamp(0.451528011188);
    msg.setSource(33880U);
    msg.setSourceEntity(61U);
    msg.setDestination(51177U);
    msg.setDestinationEntity(34U);
    msg.text.assign("JSDYTXFQRBWNGXYRCKJEDIJSIFFWWIBDBHPZMJAXOQEOQMLWRESSOQVGIZECNDBTOFTJDKSTFVBCTUUPLNHMJGEHASQAOFNOAIZWETJPUXGPSQFYABKBUZCVFBAVXJJIZWGZIQWAYXALIGHNEGURCVPRKAYWZMHRONLUYRLLKXPJURKCVMMHPXBSUDYACDHPKTNZLPDQLNNZTYLOVMCTSFLIDZOEHVUKVSQTEWNWMDRMHQXCXYEKYVKH");
    msg.type = 4U;

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
    msg.setTimeStamp(0.631380346655);
    msg.setSource(42114U);
    msg.setSourceEntity(61U);
    msg.setDestination(35710U);
    msg.setDestinationEntity(68U);
    msg.text.assign("ZTFMZKLGIVKBKGRETACDVQBAMODDHBNJJSVQSGRFPFMYJRRVNPMZIGTLZXXTQLVGSEE");
    msg.type = 57U;

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
    msg.setTimeStamp(0.153708657743);
    msg.setSource(55027U);
    msg.setSourceEntity(82U);
    msg.setDestination(56720U);
    msg.setDestinationEntity(0U);
    msg.text.assign("BJQIFSBZYKQTJQJPTAJKIAWRSTURHKKNLCSTUTKSFGXPZDAQMNUUDZNIGCYZAINFNXXABJBIOUCPHVWEVVOFPYMUKXDVQUPGUSMHTNSGCFCOCPEQOSGOCVJVVADFDXRCNBWPKRBNZQSEHYWFXNPOYCXELWGTMRIFOQPQFH");
    msg.type = 229U;

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
    msg.setTimeStamp(0.992383457272);
    msg.setSource(59640U);
    msg.setSourceEntity(6U);
    msg.setDestination(4064U);
    msg.setDestinationEntity(17U);
    msg.parameter = 156U;
    msg.numsamples = 177U;
    msg.lat = 0.71445894659;
    msg.lon = 0.232542303065;

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
    msg.setTimeStamp(0.936636120627);
    msg.setSource(63402U);
    msg.setSourceEntity(37U);
    msg.setDestination(14461U);
    msg.setDestinationEntity(71U);
    msg.parameter = 93U;
    msg.numsamples = 194U;
    msg.lat = 0.342229945218;
    msg.lon = 0.747041499195;

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
    msg.setTimeStamp(0.755094638636);
    msg.setSource(31411U);
    msg.setSourceEntity(45U);
    msg.setDestination(58141U);
    msg.setDestinationEntity(165U);
    msg.parameter = 75U;
    msg.numsamples = 138U;
    msg.lat = 0.613120894313;
    msg.lon = 0.697492307137;

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
    msg.setTimeStamp(0.354031033026);
    msg.setSource(63222U);
    msg.setSourceEntity(88U);
    msg.setDestination(26098U);
    msg.setDestinationEntity(194U);
    msg.depth = 59023U;
    msg.avg = 0.391635144203;

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
    msg.setTimeStamp(0.735266454079);
    msg.setSource(20208U);
    msg.setSourceEntity(230U);
    msg.setDestination(30471U);
    msg.setDestinationEntity(4U);
    msg.depth = 47939U;
    msg.avg = 0.400871059352;

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
    msg.setTimeStamp(0.715537158155);
    msg.setSource(56400U);
    msg.setSourceEntity(233U);
    msg.setDestination(13147U);
    msg.setDestinationEntity(174U);
    msg.depth = 36260U;
    msg.avg = 0.0709291509649;

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
    msg.setTimeStamp(0.14487256143);
    msg.setSource(56679U);
    msg.setSourceEntity(35U);
    msg.setDestination(17052U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.382353065314);
    msg.setSource(57825U);
    msg.setSourceEntity(179U);
    msg.setDestination(37494U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.496038311484);
    msg.setSource(65258U);
    msg.setSourceEntity(143U);
    msg.setDestination(35938U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.579417259228);
    msg.setSource(45416U);
    msg.setSourceEntity(213U);
    msg.setDestination(26785U);
    msg.setDestinationEntity(211U);
    msg.sys_name.assign("AGNDLKVSGCJMNORBGYHIKDBCULFJKTWJWGPJYMPGOUHOAILUKJBADSFEQPASZHAMNDHZWIZOTATKQLOXMZKPEGMDRCKZCFXYPYC");
    msg.sys_type = 226U;
    msg.owner = 63317U;
    msg.lat = 0.586842563363;
    msg.lon = 0.123328686537;
    msg.height = 0.787519625325;
    msg.services.assign("CJKDDNPNBXBYAKVVCUEAEYNHRGWPPQPYXDDLEYOVE");

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
    msg.setTimeStamp(0.811691002342);
    msg.setSource(60848U);
    msg.setSourceEntity(107U);
    msg.setDestination(60058U);
    msg.setDestinationEntity(74U);
    msg.sys_name.assign("BYBHGYWQECUMJSFWYHQYILDLFXYVEHBRUWEZCSKRSNZSNWVXJRCQBJMWHNDEJKPVRASPBMDQCZQPMBOGAODPDZFSJPJGZWHMOUELXTLUKTDSNFLUJNURSFLKOBIGVMLTGZAOCOMDYAJBZXLCXQUFMNCEPNXVWRCEUHRLCOLKAAQETRGDOXHXUTTKITZPHTA");
    msg.sys_type = 116U;
    msg.owner = 41654U;
    msg.lat = 0.503473835905;
    msg.lon = 0.803207828832;
    msg.height = 0.644480888232;
    msg.services.assign("OBHRTJNTIQCSICNJFDMFKQQAQBNCBUJWTMEXMXAVIKRVGJCDBNTHCLXGATSRLCTFHYIYXXUWLHBQATIGPJEKJONWSFWZEPDWKDKDZGZXSWQEKZVNWGXVQPEPGUBIUMPLLETBSJIELZXASVXHVSELPOUSRYOPVGMTIEJYYTUJLYRQDPNRPHWKZIUN");

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
    msg.setTimeStamp(0.17061097826);
    msg.setSource(728U);
    msg.setSourceEntity(12U);
    msg.setDestination(31938U);
    msg.setDestinationEntity(124U);
    msg.sys_name.assign("QLUCUJXHMGWBXCMLGQSUOQPVKJEKGMRZSNZNNOVLTTGBADAAZCSZFRDXPJXLJEBBXTDMJCOOPWATOIWKZFQGCVGDQOXFUIQOYNDKREHFCSZUBVPHSFJEIXKOESMNGUVIZYUPJYVYHBVNKBVRAXELSEVCUVNFKCNOGZRQJWKAHFTITLQAAPXDQESURMSPLDTDLWWEYTIMUIYIOWKWWFNPAZISGRMFHIJTJ");
    msg.sys_type = 186U;
    msg.owner = 13912U;
    msg.lat = 0.827793299287;
    msg.lon = 0.983150561552;
    msg.height = 0.0726684350023;
    msg.services.assign("SLYRUFUEDEWIOSIVDBZHRSMNOGXUCYRFARKZO");

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
    msg.setTimeStamp(0.511306211551);
    msg.setSource(47355U);
    msg.setSourceEntity(11U);
    msg.setDestination(12197U);
    msg.setDestinationEntity(232U);
    msg.service.assign("HUBPRFLMYVNZROZHASECQCIMKAGRJTZJPDGCSJUCOWFBSZPEXQGVTXTXYIQRABYNMBNWHYNSTFHAYHXFVKVTKBBRDYHNAKCRMXDLIUGBMAWFGMGSZRPLVPLILEMLUFAJONEMEWWOEOHTSARQSZQONCHIXBJNTGFIKJTVUMQJQZWLDXXVZUDFSGXVWKLXUAWKNEPPODYKOYBPOQEHDPKQWPDJCSILDLCMYTYGKSRCEGBJNIJETQZHDCIRUUFVO");
    msg.service_type = 116U;

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
    msg.setTimeStamp(0.600114353775);
    msg.setSource(33892U);
    msg.setSourceEntity(2U);
    msg.setDestination(51021U);
    msg.setDestinationEntity(153U);
    msg.service.assign("GOLHEWJVSOBQJXKPCPCQMJLXFKRTZVDBSGCCFHSKMDEROKIMDOXSWTAHMUATPYENHBTPXKGNMYAG");
    msg.service_type = 124U;

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
    msg.setTimeStamp(0.321383413173);
    msg.setSource(40002U);
    msg.setSourceEntity(218U);
    msg.setDestination(43006U);
    msg.setDestinationEntity(16U);
    msg.service.assign("CDBQJJRMZRQLYNFBGVWXBCEKKNTSUARVCTRLGMYALSVVUXIZXNHLPGOTJJMDUKPRWTLLVIVTYMJNUDDYFJATVPOFIIGEPZAMUKBLMIFECRWTPGOLNLXXDQYMWKUBJIACDZJKSKAIPEQYIIFPZVQVOKRMESBFYWZZXWSWMEQTWPNCOUHGCMHABGOOTKQAGSUQAFNOZUZDFXEDOYUWEFNDYRSYPGWH");
    msg.service_type = 75U;

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
    msg.setTimeStamp(0.651648609776);
    msg.setSource(33744U);
    msg.setSourceEntity(54U);
    msg.setDestination(42497U);
    msg.setDestinationEntity(44U);
    msg.value = 0.252893972845;

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
    msg.setTimeStamp(0.308958811987);
    msg.setSource(11187U);
    msg.setSourceEntity(153U);
    msg.setDestination(14489U);
    msg.setDestinationEntity(53U);
    msg.value = 0.98845037947;

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
    msg.setTimeStamp(0.0132363423306);
    msg.setSource(47275U);
    msg.setSourceEntity(36U);
    msg.setDestination(23695U);
    msg.setDestinationEntity(189U);
    msg.value = 0.605120321484;

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
    msg.setTimeStamp(0.846901087963);
    msg.setSource(10663U);
    msg.setSourceEntity(11U);
    msg.setDestination(59665U);
    msg.setDestinationEntity(166U);
    msg.value = 0.810899366484;

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
    msg.setTimeStamp(0.41639332899);
    msg.setSource(43728U);
    msg.setSourceEntity(243U);
    msg.setDestination(60961U);
    msg.setDestinationEntity(163U);
    msg.value = 0.965339193216;

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
    msg.setTimeStamp(0.292468726803);
    msg.setSource(14943U);
    msg.setSourceEntity(158U);
    msg.setDestination(33434U);
    msg.setDestinationEntity(0U);
    msg.value = 0.198800678918;

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
    msg.setTimeStamp(0.391639562263);
    msg.setSource(38321U);
    msg.setSourceEntity(64U);
    msg.setDestination(61129U);
    msg.setDestinationEntity(69U);
    msg.value = 0.292172393965;

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
    msg.setTimeStamp(0.777040391822);
    msg.setSource(28364U);
    msg.setSourceEntity(56U);
    msg.setDestination(34451U);
    msg.setDestinationEntity(70U);
    msg.value = 0.711959439397;

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
    msg.setTimeStamp(0.347737409719);
    msg.setSource(63464U);
    msg.setSourceEntity(230U);
    msg.setDestination(49714U);
    msg.setDestinationEntity(133U);
    msg.value = 0.416638785213;

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
    msg.setTimeStamp(0.730202273289);
    msg.setSource(6086U);
    msg.setSourceEntity(75U);
    msg.setDestination(61284U);
    msg.setDestinationEntity(95U);
    msg.number.assign("FCMKGZBHNTKHJAFSCEFRWPQTVFMLPNDJVSOZLDWEIEUHPUZ");
    msg.timeout = 53524U;
    msg.contents.assign("QXIXVCQFTKOQQYNYDITJMBMDJUGBVBVQFOXPINDGJXXLUFNCULPLBEASIYQYRFOKMWJPNNYVMJATIAVKMJBRAXZFHTCHWGGCRAZLVKGUGQPMITRMICFNNDIKDBJSOKAKTDRZPFRQWEBOEOOLPDZCRIFUJLWHAS");

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
    msg.setTimeStamp(0.30371543759);
    msg.setSource(26418U);
    msg.setSourceEntity(66U);
    msg.setDestination(19964U);
    msg.setDestinationEntity(137U);
    msg.number.assign("IYYLDFZYDSKOZPWXPXDRLRUIXEFELLWUGZUNLQBATQLMCXVBHFZJOVYHTXKUSEDJTHZMAZRBAYRJKCMLMKFHPWXEIWECNASNUTQCQQMFENYWAMAWVFCEOIXCHLVDHKDQ");
    msg.timeout = 34207U;
    msg.contents.assign("VBGAVSCYWBEYXYVFOWCTNSLOAMIYDNTHUCSTYJANBJPKMZIDZOPHUEWQATOOBPQEWEGQFEUZDJTRRQCTCZVJDFXSYGNRHXHAIKNLKPBIZECTKSAXQQXGKTVVLYTYMBDQFDCCLS");

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
    msg.setTimeStamp(0.956952362353);
    msg.setSource(28152U);
    msg.setSourceEntity(205U);
    msg.setDestination(14362U);
    msg.setDestinationEntity(229U);
    msg.number.assign("RGAJGYMGRHVWISETJJWV");
    msg.timeout = 19188U;
    msg.contents.assign("VRYSPDTZXIMPOSQRJKURALWNVFWPPXQXVFHGHGZOPMTEZ");

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
    msg.setTimeStamp(0.957705593942);
    msg.setSource(55471U);
    msg.setSourceEntity(23U);
    msg.setDestination(27249U);
    msg.setDestinationEntity(170U);
    msg.seq = 12677574U;
    msg.destination.assign("YBXUZUWHDKCSLHVURYSHFMJOYQXAEWNRTTLAM");
    msg.timeout = 9209U;
    const char tmp_msg_0[] = {40, -72, -50, -67, 103, -7, 41, 33, 116, 107, 0, 39, 5, -86, -56, -101, -8, 3, -116, -59, -90, -30, 17, -12, 46, -63, 19, 25, -120, -50, 45, 104, -106, -2, 84, 124, -69, -106, 50, -82, -55, 101, -32, 41, 65, -53, -34, 105, 110, 68, -105, -97, 118, 126, 48, 41, 41, 60, 35, 7, 49, -92, 13, -106, -19, -84, 0, 42, -112, 50, 34, -73, -12, -90, 83, -45, 31, 48, -25, -111, 52, 94, -41, 12, 61, 12, 29, -7, 121, 65, 49, 117, 96, -70, 8, 79, 57, 85, -107, 112, -124, 95, 109, 27, 37, 25, 14, -52, 9, 111, 113, -109, -84, 11, -52, -92, 19, 15, -47, -78, 98, 21, -45, 70, 92, 73, -114, -17, 28, 109, 110, -60, 16, 4, -2, 0, -38, -37, -125, 104};
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
    msg.setTimeStamp(0.785664191386);
    msg.setSource(64369U);
    msg.setSourceEntity(2U);
    msg.setDestination(15159U);
    msg.setDestinationEntity(246U);
    msg.seq = 609588621U;
    msg.destination.assign("IPQUITRGQPAAZIWHODJVHEVUBSQJJROLUHNUMQVXMPVPDGKVNYBBBYCQCEUVWOMTTYJUDOPXWAJZXYMMJFALSCWJAIWFLZSCCJZNFSKEKCRETDQAMXBZGJFIFEIEIDCQIIEGNRKAPHDASVWTIRTHYHBXHWMQTBCOKVKZLQZXONUGBESVLTPFRRXXKWPFCKSNBCNPXYBZUZDFPAJGNHMELNSKRVMULHGGXOTRASMFNGYTQDHOLEDLWKZFD");
    msg.timeout = 49624U;
    const char tmp_msg_0[] = {16, -30, -32, 46, 9, 69, -11, 16, -115, 76, -64, 59, -6, 77, 63, -113, -11, -96, 47, -98, 12, -31, 77, 71, -98, 121, 12, -38, 118, 86, 23, -118, 21, -106, 39, 93, 42, 49, -6, -127, 36, 125, 88, -50, -58, 96, 18, 38, -90, 85, -20, -77, -66, 103, 74, 59, -28, -49, -37, 1, -23, -93, -9, -128, -20, -104, 120, -40, -120, -93, 51, 75, -74, -35, -81, 84, 74, -9, -120, 83, -81, -10, 47, -107, 23, -72, -45, -18, -6, -109, 31, 59, 54, 92, 121, 116, -120, 90, -115, -39, -35, -94, 96, 88, 17, 69, -109, 5, 117, -126, -111, -87, 109, -42, 109, -57, -13, -72, 105, -72, -108, 45, 108, 75, 98, 47, -58, -15, 102, -89, -87, 75, 104, -54, 6, 63, -105, 30, 70, 19, 39, -46, 6, -124, 11, -69, -110, 104, -77, 5, 64, 49, 14, -70, -124, -16, -53, 42, 3, -33, -28, -94, 37, 14, 68, 97, -40, 0, -73, 65, -115, 99, 91, 104, -114, 101, -18, -106, 14, -92, -85, -61, 16, -80, 63, 84, 8, -1, -93, -66, -42, 51, -26, -34, 1, -110, 64, 69, 125, 24, 70, -103, -98, -29, -64, -46, -39, -34, -94, 124, 81, 9, 79, 9, -110, -44, -86};
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
    msg.setTimeStamp(0.0237006845587);
    msg.setSource(31419U);
    msg.setSourceEntity(178U);
    msg.setDestination(40254U);
    msg.setDestinationEntity(140U);
    msg.seq = 1573986265U;
    msg.destination.assign("UKNAMCGNVLVUXOFORGTABUUYSZSXOSHKBQCALLWWVMQOVWTEJUJESDYUGRJTYQIWJKVJPLZHEUVIZJUOGMEEVZQTNGMALPDEQNNXXCZMWCXFHFHSKT");
    msg.timeout = 33408U;
    const char tmp_msg_0[] = {102, -65, 96, -60, -74, -15, -104, -71, -127, 100, 111, -47, 44, 119, 50, 40, 35, 102, 93, 80, 3, 74, -74, 61, 47, -43, -101, 126, 46, -8, -6, 26, 7, 74, -120, 12, 116, 68, 118, 9, -87, -1, 33, 21, 72, 28, -48, -21, 4, 39, 44, 116, -106, -37, 57, -65, -93, -36, 48, -95, 56, 31, 64, -67, -77, 37, 105, 96, -100, 48, 34, 19, 82, -24, 69, -111, 8, 51, -81, -92, 13, -104, -3, -113, 93, -76, -6, -47, 82, 66, 116, -115, -96, -96, 106, -30, -23, 101, -9, 92, -112, -69, -118, -73, -33, 86, -85, 5, -48, -109, -84, 49, 108, 107, 113, -57, 113, -77, 10, 46, 31, -84, 85, 65, -32, -108, 43, -117, -111, 76, 17, -40, 87, 107, -54, 48, 15, 111, -105, 57, 14, -65, 65, -8, 44, 47, -20, 67, 113, -117, -111, -59, -3, 113, 96, 52, -62, 114, -108, 124, 105, 84, -20, 115, 98, -58, 45, 0, 48, 111, 89, -112, -62, -125, 92, -17, 59, 120, 32, -88, 33, 23, -99, 101, 94, -66, 19, -12, 100, 22, -24, 109, -71, -28, 120, 100, 121, -9, -79, -100, -115, -37, 2, 56, -111, 121, 118, 34, 36, -73, -65, 17, -16, -21, -75, 81, -68, -91, 111};
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
    msg.setTimeStamp(0.495697298315);
    msg.setSource(21368U);
    msg.setSourceEntity(24U);
    msg.setDestination(56671U);
    msg.setDestinationEntity(98U);
    msg.source.assign("YQRIONAMUJMOWXZEVCXPKOHRVAGKRJFUPXYGBVCKITFYVMYMCULGXDOOJWJSPUUGBFPGKDTTWCKIBCDORUTJQEDSVEUJCHCNZZXSIAWVXPDFDNXGFHYKHQUFBNWLVREKDZQOVMHLSJHIRWALZYLQV");
    const char tmp_msg_0[] = {2, 56, 124, -5, 6, 114, -101, 29, -105, -113, 6, 19, 31, -77, 81, -79, 103, 12, -22, -7, 15, 34, -96, 92, -34, -36, -21, -120, 14, -8, -108, -88, 72, -92, 101, -102, -50, 42, 88, 9, 86, 53, 94, -71, 6, -50, 126, -26, -128, -61, -25, 8, -123, -32, 2, 47, -13, -107, 15, 39, 19, 59, 116, -75, 46, 42, 91, -19, 51, 29, 50, -56, 45, 46, 10, 13};
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
    msg.setTimeStamp(0.47879626681);
    msg.setSource(19336U);
    msg.setSourceEntity(147U);
    msg.setDestination(58483U);
    msg.setDestinationEntity(82U);
    msg.source.assign("XBPWJLZSPDRDPQHQRIEYZIVJSTISOVWRMRAJDZUWOXTGEHCKOZAJIDDCNHRXLRFTNYKKYCWCQCLFWFDVEMWJSQIEWGNNMHGZOGHPCREBBXJRUJVHAMUERBKOXGKKINBCBUUXLIPKBDLPHMFXICOASPMOVYSLSZNNTDGYBVQTVEUJELW");
    const char tmp_msg_0[] = {121, -1, 16, 91, -65, -77, -102, 17, -97, 85, -85, -40, 57, -71, 59, 12, -72, 85, 39, 43, -10, -34, 73, 28, -33, 6, -51, -122, 98, -80, -62, -80, -8, -78, -40, 43, -62, -19, 105, -5, 43, -71, 39, 75, 3, -88, -86, -126, -2, -72, 62, -124, -71, 49, 10, -103, 6, 68, 54, 19, -21, 1, 58, 103, -28, 62, 85, 66, 31, 57, 79, 42, -76, 79, -125, 60, -104, -33, -23, 26, -76, -15, -9, 30, -95, -29, 97, 22, 96, -75, 71, 59, -35, 66, -82, 118, 96, -53, -32, -8, 17, -32, -94, 70, 57, 88, 71, -48, 36, -74, 50, -64, 47, -24, 111, -109, -94, -49, 66, -125, -34, 104, -75, 94, -11, 12, -24, 3, -25, 87, -93, -33, 15, -16, 30, 101, 98, -72, -103, 123, -59, -107, -73, 30, -67, 105, 94, 92, -46, 18, -55, -34, -31, 119, 124, -13, -125, -103, 48, -74, 90, -127, -23, 58, 123, -10, -30, -23, -98, -78, 117, 121, -128, -106, 39, 120, 11, -12, -41, 115, -104, -42, 48, -109, 17, 12, -124, -76, 17};
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
    msg.setTimeStamp(0.230585382983);
    msg.setSource(9250U);
    msg.setSourceEntity(127U);
    msg.setDestination(12134U);
    msg.setDestinationEntity(254U);
    msg.source.assign("KRDBZXFGENTUYHOUTCWHCVOPQZPCUWDKWYXDXXJIIOBNCPUJKNJAINGABOERIZVTWQJOKEUHGQRKSVFOEMVWDGYBRPVJOIGNSYAMZACJFLATFYSZMRQWSNHGCPBVQGPDSODLXJQYMTAMWZGHRQBMLAXATOXRHPFBXKLLYVWJGUCJVAFEIYTIDEYFTOLYLIKSVRSCDNUBAKCQNMZTUKLZPRFBKUXHBULLHNCMESEHWMIDPREZNTW");
    const char tmp_msg_0[] = {-125, -24, 1, -20, -1, 85, -89, 85, -62, 120, 29, 14, 108, -99, 47, 119, 70, 24, 113, 18, -114, 120, 49, 60, 0, 86, -55, -126, 89, 102, 40, -92, 18, 78, 110, 30, 60, 3, -63, -86, -25, 23, 25, -42, -37, 69, -124, -11, 83, 46, -25, -116, 8, -80, -102, -63, -89, -89, -90, -6, 113, 63, -117, 100, -55, -23, 41, 4, 55, -19, -33, 18, 26, 35, 78, -106, 65, -116, 75, 10, 7, 44, 122, -89, -78, 107, -12, 126, -70, 54, 38, -108, -15, -63, 58, 99, -26, -106, -112, 94, 14};
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
    msg.setTimeStamp(0.40526255621);
    msg.setSource(18837U);
    msg.setSourceEntity(192U);
    msg.setDestination(50105U);
    msg.setDestinationEntity(99U);
    msg.seq = 67935535U;
    msg.state = 117U;
    msg.error.assign("XCPAVUIPTUPPAOECKEJLGBIY");

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
    msg.setTimeStamp(0.260534159627);
    msg.setSource(42507U);
    msg.setSourceEntity(33U);
    msg.setDestination(56485U);
    msg.setDestinationEntity(40U);
    msg.seq = 708188094U;
    msg.state = 42U;
    msg.error.assign("NXJKSDTUFHUWYPNEIEWECTVESSHAMSCKXWP");

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
    msg.setTimeStamp(0.112315549873);
    msg.setSource(48116U);
    msg.setSourceEntity(151U);
    msg.setDestination(59200U);
    msg.setDestinationEntity(8U);
    msg.seq = 54020096U;
    msg.state = 191U;
    msg.error.assign("TIPHBEHPKFXPUVAUTKFGRXJCZBHJOATYKCWXZLTJIFRMIHUPIOEWRMVPCDLABFWWKPFDBFVIWNUMKRAMZNGEKTQGOKULQJQUVVDDOTIDMOMENTICDQNULYGYBZYBVUUEKOAPXWPNNXZYQXWDSLRMAGCOQRFJBSONCHDSUGSBEXTHELMRWGQIXLGVYZJRVILSZJDSKXLWKNSEZACBQOHVPNMHHQWZJFCLYDASYCTCRJVPEFYGHNTZXFQR");

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
    msg.setTimeStamp(0.685436202636);
    msg.setSource(8742U);
    msg.setSourceEntity(181U);
    msg.setDestination(62068U);
    msg.setDestinationEntity(158U);
    msg.origin.assign("DZICREFQMR");
    msg.text.assign("ZTNNTRAZIGHNDFHMEBKBQBJDNSOPWGIX");

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
    msg.setTimeStamp(0.627369320713);
    msg.setSource(33300U);
    msg.setSourceEntity(70U);
    msg.setDestination(52649U);
    msg.setDestinationEntity(60U);
    msg.origin.assign("EWRFKBIKVDYDGUZNMHFJJPNKFZZUOUOUEHMLTLCMRXQBNSDGLXSCCVRLJVAPJMJKWDBOGHGABLVWWVERLICKPIXFTBXGTVXQAXKHIGJUPVZVOSRSQNWAGHIF");
    msg.text.assign("QRCWMGLGRVVJCKVZZXVJ");

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
    msg.setTimeStamp(0.962889449027);
    msg.setSource(7857U);
    msg.setSourceEntity(5U);
    msg.setDestination(4663U);
    msg.setDestinationEntity(125U);
    msg.origin.assign("ARSZHZJETWIRCHYIOBMDSVDRWSKEWKJYCOTFPZBAMUNBXYSTWZINQFCTFZEQSBWYIMQPOUGDYEUJIJWUOLCNAEVXRKKTXDHZFNWNDMQOQKJHDXMIECTRQNVSILZPYBCBLXHVBTUEAFPFTRBEQARKMVCZJOAVPCFMHUSUANVQNDHAHOGCXGWSLTUIQYZRGXJZKLIJOEDFUWYGBFHOV");
    msg.text.assign("JXCDAVJBAVEHJOFCTOYNWXCBSHWVTMGHJYAFHYZWUPIEZDBUVNGEOSFTWNRPVGFJNMDUTPQCRUB");

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
    msg.setTimeStamp(0.404466437623);
    msg.setSource(32398U);
    msg.setSourceEntity(170U);
    msg.setDestination(25788U);
    msg.setDestinationEntity(0U);
    msg.origin.assign("KXRCYWZIKWGYCXTYYSHVJXKLDVSFMJBJNHYUZSHVRUBSUDYQKUUJEWQVWZCBAEGNDO");
    msg.htime = 0.476391602612;
    msg.lat = 0.0533131108295;
    msg.lon = 0.903944994783;
    const char tmp_msg_0[] = {-108, -62, 26, 123, 33, -74, -18, 101, 53, -33, -70, 63, 108, -7, 102, 4, 21, 7, 90, -83, -96, 25, 95, -118, 50, 2, 21, -36, 40, 49, -70, 34, 22, 41, -49, -63, 92, -79, 90, -2, -102, -58, -80, -87, 102, 100, -20, -68, -60, -46, -45, -14, -19, 121, -63, 39, -83, -61, -94, 31, 43, 104, -112, 60, 8, 90, 85, 95, -82, -117, -68, 22, -12, -81, 86, 20, -1, -6, -15, 18, -118, 3, -87, -47, -92, 41, -99, 37, -78, -106, -61, -7, -107, 88, -30, -47, 66, 52, -71, 94, 78, 19, -4, -52, 14, 126, 78, -93, 20, -55, -25, 43};
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
    msg.setTimeStamp(0.129051457379);
    msg.setSource(14238U);
    msg.setSourceEntity(144U);
    msg.setDestination(44922U);
    msg.setDestinationEntity(7U);
    msg.origin.assign("WJTSAXHVQDMELWAOVCLOAEJBYCIQLNBHBIWTDUFXKRNHPOMUWXZPFCSDVIXRTPKVWFJCQKZIPATMENNTGVEHNCHAFZYUYIJUTWSHMIARBKOTOFJYVWEZPDDOKQSXPUQLKMNXTZCITGUFKOCEPBNAYRJRLFNDOMWPIUPVKYMRRSGVYCJZBHEXGZGIBQLQVGLGSRJIVOUHAXOHBTQCSSENYBJDWUPJFMMSEQQRZCKRD");
    msg.htime = 0.853386679692;
    msg.lat = 0.437585108686;
    msg.lon = 0.789408456287;
    const char tmp_msg_0[] = {-32, 121, 114, 103, -63, 26, 56, -105, -78, 3, 113, -58, -22, 91, -29, 105, -64, -79, -51, -10, -23, -6, 44, -36, -93, -23, 36, -1, 86, -73, 30, 21, 115, -109, 33, -39, 84, 120, -103, 117, -77, -6, -37, 4, -37, -53, -84, 47, -21, 23, 41, -106, 29, -87, 11, 97, 101, 54, -116, 46, -2, -80, -44, -1, 29, -27, -52, -63, 50, -78, -105, -18, 101, 86, 113, 7, -48, -93, -42, 105, 22, 81, -120, -112, 106, -105, -90, 54, 3, 50, -73, -46, -29, 46, -87, -17, 93, 30, 116, -23, -14, -11, 39, 66, 3, -2, 75, -63, -29, 1, 96, -84, 2, 67, 67, 39, -12, 107, -92, 52, -124, 115, -67, -115, -45, -36, 65, 118, -98, -36, -92, 33, -89, -91, 22, -39, 39};
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
    msg.setTimeStamp(0.405751927067);
    msg.setSource(15618U);
    msg.setSourceEntity(187U);
    msg.setDestination(31828U);
    msg.setDestinationEntity(16U);
    msg.origin.assign("YARLHJOYQGXOBLSJYXSEOMBOJHSXWHNHFOGQXBJVTSTLDAVUJRRIAYYFUWSMSZQXFEMLNNUHMVSCTTTOGIFKBSDOVLOCCGXFFSBUAPERNRLIPGVEKYYHKWQZNMPTIPZCLKLRDIEPUWBRXGWNMQUVAERNCZAJKCODUHUDKCYITFIGKFSWYTGVPXBZIIZH");
    msg.htime = 0.560099320935;
    msg.lat = 0.0759231329658;
    msg.lon = 0.47066647406;
    const char tmp_msg_0[] = {45, -14, -24, -32, 58, -58, 98, 44, 17, 3, -122, -13, 59, -82, 95, -76, 4, -124, -103, 114, 30, -124, 77, -128, 38, 72, -80, -40, -36, -13, 125, -92, 26, -94, 51, 37, -27, -98, 18, -31, -75, 76, -88, -70, 124, 90, -96, -32, -87, 38, 112, 51, -49, -12, 49, -78, -59, 68, -47, -112, -121, 69, 36, 9, 12, -47, -43, -77, 89, -19, -106, 5, -79, 48, -41, -127, 100, 86, 60, 70, -1, -122, -119, 118, 26, 10, 14, 81, 35, -88, 7, 123, 60, 109, 8, -63, 7, 53, 96, -116, -104, 52, 47, 73, 98, -118, 116, 65, -121, 40, 123, 8, -18, -6, 33, 59, -125, -94, 84, 63, 90, -52, 30, 31, -36, 4, -99, -36, 102, -94, -78, -35, -114, 7, -33, 2, 3, -55, -127, -89, 120, -76, 35, -83, -115, -67, 115, -22, 59, -78, 13, 59, 20, 111, -93, 72, -75, 126, -67, 70, 22, 112, 15, -8, 50, 95, -127, -117, 60, 101};
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
    msg.setTimeStamp(0.395339919392);
    msg.setSource(6701U);
    msg.setSourceEntity(32U);
    msg.setDestination(47129U);
    msg.setDestinationEntity(173U);
    msg.req_id = 42896U;
    msg.ttl = 59976U;
    msg.destination.assign("CSODHGUMOJVMZQM");
    const char tmp_msg_0[] = {37, 40, -3, -34, 91, 117, 66, 58, 100, 105, 75, 81, 78, -44, -80, 79, 77, 0, 17, -98, 5, 77, -84, 33, -28, -20, -84, 113, 69, -69, -53, -44, 40, 80, -93, 86, -105, -2, -4, 44, -102, -35, 100, 108, -17, 17, 106, -127, 12, 108, 47, 55, -44, 102, -87, 47, 125, 85, -85, -114, -124, 62, -4, 100, 118, -106, 50, -119, -11, -94, -59, -116, -114, 120, -114, -33, 118, 99, -29, 18, 101, 60, 55, 65, -119, 124, 48, 95, -62, -11, -63, 35, -72, -34, -39};
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
    msg.setTimeStamp(0.121911702158);
    msg.setSource(11752U);
    msg.setSourceEntity(3U);
    msg.setDestination(32131U);
    msg.setDestinationEntity(211U);
    msg.req_id = 30405U;
    msg.ttl = 38825U;
    msg.destination.assign("MXKBHXBGWHSRSNFMZRLBIYWZLXNRMOIBEVVMNULARQPLWFOCDLVDVAGLCFPOOPCJSZCQOFOUQJMCVAERTHEYWTSDTICSKYULDSQYUTGESCJLXCJZFPKVO");
    const char tmp_msg_0[] = {0, 77, -87, 29, -100, -7, 57, 113, 63, -68, -107, -9, 18, -41, 85, 13, 106, -40, 105, -113, -106, 126, 100, 59, -2, 116, 95, -32, 57, 96, 36, -115, 25, -5, -49, 72, -121, -9, -28, -123, -59, 100, 125, 123, -70, 63, -55, -14, 84, -63, 32, 114, 7, 49, 83, 49, 122, 70, 64, 16, -96, -79, 38, 92, -115, -58, -85, -37, -119, 38, -29, -113, -69, -3, -110, -52, 94, -18, -121, 94, 84, 15, 4, -53, 76, 104, 55, 39, 55, 102, -52, -53, 98, 94, -122, 83, -94, 69, -14, -94, -17, -32, -103, 55, 99, -74, 12, 53, 13, -25, -4, 73, -8, -89, -51, -95, -63, 23, -70, 33, -112, 75, 120, -69, 54, 7, -25, 101, -43, -87, -101, -56, 53, -100, -77, -105, -109, -124, 28, -8, -14, 116, 57, 9, -8, -49, 112, 68, -17, 65, -115, -125, -20, 109, -91, -114, -77, 50, 16, -35, 9, 2, 15, 126, 68, -5, 88, 11, 15, 11, -102, -41, -84, 32, 75, -125, -90, 77, -68, -78, 32, -66, 119, 45, 38, 105, 18, -88, 35, -87, 112, -77, -80, -3, -18, 109, -47, 86, 116, 115, 87, 78};
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
    msg.setTimeStamp(0.400642834957);
    msg.setSource(24160U);
    msg.setSourceEntity(150U);
    msg.setDestination(61286U);
    msg.setDestinationEntity(118U);
    msg.req_id = 7157U;
    msg.ttl = 61890U;
    msg.destination.assign("SDQKOYERBFTHBZNKC");
    const char tmp_msg_0[] = {-4, 88, -9, 36, -83, 90, 112, 115, 36, -78, 62, -98, -64, -109, 1, -59, 111, -92, -32, 31, -122, 104, 30, -23, -62, 77, -115, 113, 117, 105, 105, -92, -40, 98, 112, 101, 70, 4, 77, 125, 114, -74, 104, 59, 24, 17, 52, -15, -57, 102, -60, -85, 94, -14, 57, 89, -125, -44, 70, 50, -11, -111, -40, 111, 76, 42, -49, -115, 32, 52, -67, -114, -87, 4, -114, 44, 57, 30, 18, 104, -123, -66, -83, -99, -50, -37, -5, 58, -60, -64, 59, 2, 111, -11, -34, 13, -44, -12, -49, -121, -34, -68, 59};
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
    msg.setTimeStamp(0.631763123526);
    msg.setSource(2387U);
    msg.setSourceEntity(85U);
    msg.setDestination(25048U);
    msg.setDestinationEntity(108U);
    msg.req_id = 42872U;
    msg.status = 131U;
    msg.text.assign("WSGNBPLOKZXLDSXEDPSLEZOWPDLHVOPIMUZMNMRNPFXVGQMNCCQQQRASAYIINXHTRGPUZUHNQUVVULHJNJZCWUJTTPAEZDFIHIBSAFBRXMQLHYEAXFT");

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
    msg.setTimeStamp(0.320253020285);
    msg.setSource(7681U);
    msg.setSourceEntity(195U);
    msg.setDestination(36179U);
    msg.setDestinationEntity(16U);
    msg.req_id = 51077U;
    msg.status = 24U;
    msg.text.assign("OSOLCRWAHHWHXCXNHDFTFECNWJJSMZHGAASUTKQLWNSOWTACIRRMKEKSEMUNLTLEPAVVKXLGCEJFYBMYIGAUOGDZNUB");

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
    msg.setTimeStamp(0.366472867729);
    msg.setSource(48126U);
    msg.setSourceEntity(70U);
    msg.setDestination(36540U);
    msg.setDestinationEntity(242U);
    msg.req_id = 8241U;
    msg.status = 144U;
    msg.text.assign("TEEQDLVYOXELBJYLPWNFIPTQQOFXUJXSIEOJSRCDJHPIABRWYRTHEAWNUKIPGCTDHTZWIPYMDUN");

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
    msg.setTimeStamp(0.453760088541);
    msg.setSource(11688U);
    msg.setSourceEntity(49U);
    msg.setDestination(9478U);
    msg.setDestinationEntity(199U);
    msg.group_name.assign("EMSPKSCDMQWPHLFWYEDSUHNBFDFIPPUHCVRSMWZLZDTHTS");
    msg.links = 3190376525U;

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
    msg.setTimeStamp(0.0811716881059);
    msg.setSource(42063U);
    msg.setSourceEntity(164U);
    msg.setDestination(43582U);
    msg.setDestinationEntity(175U);
    msg.group_name.assign("DXJUHVGKHZUKIMKPHBQCZATUPNLDXLRMUXBKGAINDSJKXLIQHICRJDWBHSSNJSRXIGBIFUEOSMAZOIUDBANNEKWXENYEEIXTBOZYGYPYPJGGFPNQBLDJFGVOQWYHBDSFMVPCRPAYQQFCACIMZRTTMPTMTWWAOVTPZTWMJBYZFOSOEAEOICFKDVPJCRJRLQLBLLULHAQESZTDGFUZRVKKVCWNHCSOARX");
    msg.links = 3117233947U;

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
    msg.setTimeStamp(0.123151547934);
    msg.setSource(35747U);
    msg.setSourceEntity(216U);
    msg.setDestination(51130U);
    msg.setDestinationEntity(167U);
    msg.group_name.assign("MZHCNSYBGOVHQEPBPXFTZKZIAIDYATWECWIQFQUWMMIAQKSBZFUASGWGUMHGDUTJLAMEODUGAEFHTRFFQLEDOSXYJVPEDCXKVHKXXUKORPBCFONUFDHOMMWTCPLVRJUBEVPPGNPBJDJSERMCLXVNHBVGKSNLYAITYQLITCBIJXJSK");
    msg.links = 2651450745U;

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
    msg.setTimeStamp(0.478831068123);
    msg.setSource(59018U);
    msg.setSourceEntity(6U);
    msg.setDestination(47954U);
    msg.setDestinationEntity(117U);
    msg.groupname.assign("WSUUKWUQNHXVBZIYDWFBSXYXLWQPGBM");
    msg.action = 49U;
    msg.grouplist.assign("HKMMRKWQAKMBZVLBJXMZ");

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
    msg.setTimeStamp(0.644218468215);
    msg.setSource(58915U);
    msg.setSourceEntity(30U);
    msg.setDestination(49953U);
    msg.setDestinationEntity(34U);
    msg.groupname.assign("AMUENBVWGKFHQILEHNWPEIEBAPFLDCGDJFFNEEOXZSTMYOPRIXKXVUILUAOLJLAWQIAUKPVWSNKEHLKDUPHIYSMPRTFFSXKBZZUJHKDTZYAUQJHGDVMGAKRVCSCXJSUPBGHPEQTZUNYSFCHMVTGBRIFWOBCVDYDYJXWNXQWTLLOJSPVCOFYPGTNGKBWE");
    msg.action = 34U;
    msg.grouplist.assign("HUOPKXXHVGLSUJDMOCFKOKOHYKXNYEKBGUMAAJCVINNPRGCEUIDQTAKTPJAQSOUCJPXTQUDZMTZCRDPZGZQYBQSKLXJVYJYWSTFZEOYNDVCXMDRYPSFGKEMRXBAKRYDOHODATLSLVENEJLRHPEIQLNHAJAEIHSA");

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
    msg.setTimeStamp(0.906383103749);
    msg.setSource(58152U);
    msg.setSourceEntity(141U);
    msg.setDestination(41160U);
    msg.setDestinationEntity(162U);
    msg.groupname.assign("DAKXSCJMZEXQJPAWUDMADLFGIKUUZHMEBQCLISNRBYCVXGZCYNIGWFXCNCJBVSKNTKHVROPYDXTLPWFYQMHEBLEZPQG");
    msg.action = 219U;
    msg.grouplist.assign("EFNHDFXIHAAPQEDKKLYAZAURSHGMGZIVDUFFCMWXKCQVARBBRKLWNATGWSHBXPQVCRETGNCQOCOMCGUITDMJFQGNUNYURTPWVQIDBODJFAEESYDHTROUNCFWUYLLESVDYHIMJGDTXIKZFAEY");

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
    msg.setTimeStamp(0.85687590501);
    msg.setSource(65326U);
    msg.setSourceEntity(248U);
    msg.setDestination(38414U);
    msg.setDestinationEntity(87U);
    msg.value = 0.890389004087;
    msg.sys_src = 3733U;

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
    msg.setTimeStamp(0.188536258373);
    msg.setSource(20648U);
    msg.setSourceEntity(176U);
    msg.setDestination(51373U);
    msg.setDestinationEntity(132U);
    msg.value = 0.761696842258;
    msg.sys_src = 47782U;

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
    msg.setTimeStamp(0.798923925223);
    msg.setSource(1030U);
    msg.setSourceEntity(123U);
    msg.setDestination(63955U);
    msg.setDestinationEntity(253U);
    msg.value = 0.540437815347;
    msg.sys_src = 46785U;

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
    msg.setTimeStamp(0.197851078052);
    msg.setSource(62836U);
    msg.setSourceEntity(155U);
    msg.setDestination(63398U);
    msg.setDestinationEntity(149U);
    msg.value = 0.702612027838;
    msg.units = 199U;

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
    msg.setTimeStamp(0.427655528614);
    msg.setSource(32160U);
    msg.setSourceEntity(188U);
    msg.setDestination(49146U);
    msg.setDestinationEntity(160U);
    msg.value = 0.810354247065;
    msg.units = 250U;

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
    msg.setTimeStamp(0.631562446499);
    msg.setSource(37237U);
    msg.setSourceEntity(66U);
    msg.setDestination(44370U);
    msg.setDestinationEntity(133U);
    msg.value = 0.134161171841;
    msg.units = 251U;

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
    msg.setTimeStamp(0.137160338769);
    msg.setSource(5340U);
    msg.setSourceEntity(118U);
    msg.setDestination(11540U);
    msg.setDestinationEntity(58U);
    msg.base_lat = 0.86746018024;
    msg.base_lon = 0.754369303432;
    msg.base_time = 0.174130616218;

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
    msg.setTimeStamp(0.75775251739);
    msg.setSource(22007U);
    msg.setSourceEntity(168U);
    msg.setDestination(2178U);
    msg.setDestinationEntity(33U);
    msg.base_lat = 0.494970487289;
    msg.base_lon = 0.386162220806;
    msg.base_time = 0.492240445238;

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
    msg.setTimeStamp(0.601133104148);
    msg.setSource(31349U);
    msg.setSourceEntity(9U);
    msg.setDestination(32067U);
    msg.setDestinationEntity(219U);
    msg.base_lat = 0.966033775698;
    msg.base_lon = 0.748400513717;
    msg.base_time = 0.677300035041;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 56999U;
    tmp_msg_0.priority = -67;
    tmp_msg_0.x = -30128;
    tmp_msg_0.y = 3084;
    tmp_msg_0.z = 3506;
    tmp_msg_0.t = -6789;
    IMC::GetParametersXml tmp_tmp_msg_0_0;
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
    msg.setTimeStamp(0.625707281695);
    msg.setSource(51653U);
    msg.setSourceEntity(82U);
    msg.setDestination(23939U);
    msg.setDestinationEntity(24U);
    msg.base_lat = 0.514906044446;
    msg.base_lon = 0.14249120097;
    msg.base_time = 0.172656043127;
    const char tmp_msg_0[] = {69, -15, 75, 14, 91, -32, 121, 60, -126, -27, -32, 76, -104, 82, -99, 59, 107, -99, -32, 82, 42, -74, -31, -88, 37, -88, 60, -118, -120, 69, -35, -121, 56, -63, 90, -113, 37, 9, 10, -93, -108, 20, 42, 71, 51, 18, 97, 37, -83, -55, -71, -116, -71, 25, -21, -102, 88, -32, -63, -7, -104, 99, -87, 60, 31, -105, -47, 74, 20, 73, -87, 31};
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
    msg.setTimeStamp(0.49873901344);
    msg.setSource(19524U);
    msg.setSourceEntity(181U);
    msg.setDestination(31563U);
    msg.setDestinationEntity(183U);
    msg.base_lat = 0.971415995828;
    msg.base_lon = 0.496002314473;
    msg.base_time = 0.0136288291302;
    const char tmp_msg_0[] = {-63, -51, 123, 113, 62, -70, -107, -51, -4, -125, 63, -5, -93, -88, 77, 68, -8, -16, 109, -56, 88, -72, -63, -32, 78, 71, -78, -39, 25, 23, 88, 111, -54, 99, -126, 40, -38, 94, -38, 23, 106, 13, -66, -77, 65, -25, 31, -10, -37, -18, -16, -105, -102, -105, 2, -14, 27, 118, -113, -68, -18, -78, 30, -18, -60, -98, -45, 125, 100, 18, -70, -15, -72, 50, 97, -36, -76, 93, -35, -114, 105, -36, 86, -108, 32, -55, 100, -114, -104, -54, -63, 85, 79, 42, -108, 92, -90, -15, -3, -69, -38, 89, -20, 11, 13, -86, 83, 34, -12, 38, -1, -76, 32, -127, -52, 80, -48, -114, 24, -87, 118, 24, -37, -58, -120, -57, 109, 2, 71, -48, 126, 75, 79, -8, -5, -125, 117, 60, 44, -69, 91, -48, 40, -128, 35, 102, 120, -20, 121, -47, 57, 58, -116, -39, 72, 92, 16, 118, 86, 64, -74, 81, -93, 25, -78, 85, 2, -17, -112, -61, -87, -116, -113, 21, 22, -33, -78, -33, -61, -33, -110, -28, -89, -49, 123, 2, -15, -69, 0, 83, -58, -2, -93, 9, -116, 70, 126, 63, 29, -15, 81, 116, 58, 73, 78, 42, 61, -104, 94, -10, 23, 120, -10, -13, 59, -20, 9, -9, 106, 109, -5, -83, -74, -109, 63, -103, 59, 94, 81, -78, 2, -12, -55, 18, 43, 100, 23, 33};
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
    msg.setTimeStamp(0.201762331719);
    msg.setSource(16317U);
    msg.setSourceEntity(52U);
    msg.setDestination(257U);
    msg.setDestinationEntity(221U);
    msg.base_lat = 0.104556754147;
    msg.base_lon = 0.162978305173;
    msg.base_time = 0.417426331882;
    const char tmp_msg_0[] = {-116, 54, 32, 117, -21, 82, -103, 18, -56, 23, 41, 76, -102, 38, 87, 55, 56, -31, -64, -32, -127, -61, 86, -48, 64, -109, -60, 85, -28, 24, 62, 0, -56, -112, -56, 10, 41, 78, 123, 119, -5, 95, -74, -2, 41, -30, -53, 69, 1, -11, 96, -116, -65, -80, 22, 108, 47, -106, -4, -87, 2, -124, -71, 90, -80, 33, -37, 69, 125, -58, -34, 19, -60, -89, -93, -91, -79, -118, 112, -105, 46, 86, -97, 74, 20, -46, 61, 81, 31, -65, -78, 49, 0, 79, 65, 99, 74, 97, -33, -6, 30, 25, -55, -23, 66, 91, -8, 37, -127, -18, -21, 50, -128, 90, 40, 67, 83, -93, 123, -59, 9, -15, 0, -111, -29, 7, -34, -35};
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
    msg.setTimeStamp(0.466719663558);
    msg.setSource(58173U);
    msg.setSourceEntity(171U);
    msg.setDestination(40673U);
    msg.setDestinationEntity(125U);
    msg.sys_id = 17861U;
    msg.priority = 121;
    msg.x = 6610;
    msg.y = 27707;
    msg.z = -19201;
    msg.t = -2976;
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 9341U;
    tmp_msg_0.destination.assign("MNLVWEDTMUWTHQHZXYEPUOXNXOSAAQDXEYIBWUGYQNMJMTRTRQJYBPRSIGTCHVUUYJDMMUNPUQLZGVAYSCTPOSKAEUFFNJLYJKLLPZSLIXJQTCQDIKQTMUDIADOAVKQNQKNOGRLFAOBHAVTLBPICLMOSMKGRFZWVZCBBWHSXKERZXXBEOJPUGFIHKHW");
    tmp_msg_0.timeout = 0.189779699612;
    tmp_msg_0.sms_text.assign("XEKMJWJHFZDGVMWSYCJFZTBZBYXELQBUQAQRTPLMOYTPISMUHSPRDTFEMBBNJKEEUXAWHGOCBPEARELRVCFCRVKTULJVIQHICVDNXLUVSXZCJNRMGJPJYHXUBQNLHVUMXESAKKTOSBYNSUGADXLQDKVAXAGWGAMCIHPSELRYICIPFONOWWFGOTKTDGY");
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
    msg.setTimeStamp(0.774559360748);
    msg.setSource(30733U);
    msg.setSourceEntity(121U);
    msg.setDestination(35172U);
    msg.setDestinationEntity(19U);
    msg.sys_id = 42039U;
    msg.priority = -18;
    msg.x = -21555;
    msg.y = -3269;
    msg.z = 17922;
    msg.t = 19985;
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("WGFWGSEAKQMETXOHRFHEUWKOIZIFIZYBJRJWLWETUQDMNRVHODNTRLFTUNWYAEKEYRFXIADDLNPOTCMNQEDYLZGBNECPDSYUUJIAHYNXIKVKNKYAVVNABTOCXJPFPFUQSIYUPRIUQRBMWSDRGCFVOGZJMBXVZAQKHUGVPLZJHCSIHBGDHJMAJJYHDLZEBLELSCXQQKZGUOXSZVADF");
    tmp_msg_0.htime = 0.401210135299;
    tmp_msg_0.lat = 0.351560017436;
    tmp_msg_0.lon = 0.598878874957;
    const char tmp_tmp_msg_0_0[] = {35, 20, -40, 109, 65, 71, 3, -35, -88, 66, 9, -106, 121, 31, 33, -78, 119, -81, 32, 109, -98, -19, 1, -123, 97, 40, 61, 33, 25, -53, 94, 109, 124, -60, -40, 30, 104, -121, 20, 52, 95, 17, -40, -71, 27, -76, 23, -111, -60, 90, -33, 44, -12, -17, -90, -118, -68, 19, -1, -103, 89, -46, -70, 16, 61, 20, -113, -76, -98, 41, -7, 3, 90, 96, 100, -18};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.761226301199);
    msg.setSource(6252U);
    msg.setSourceEntity(248U);
    msg.setDestination(16833U);
    msg.setDestinationEntity(178U);
    msg.sys_id = 52852U;
    msg.priority = -33;
    msg.x = -3004;
    msg.y = 7975;
    msg.z = 24829;
    msg.t = -4660;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GMJEHCPDTANMDTNTSDNYIXJILVJKOQTCSUWFREBCGISGJYNPEFANWBBIEKFZHGFUWJXVULCVXHCMVPVJGSSOAEQCTDUYGHYAHZKQABRZOZQBBPXWFODSZNWLNVFXRKVIRMYINVZWAUNEYXMFD");
    tmp_msg_0.feature_type = 140U;
    tmp_msg_0.rgb_red = 249U;
    tmp_msg_0.rgb_green = 132U;
    tmp_msg_0.rgb_blue = 53U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.120238776349;
    tmp_tmp_msg_0_0.lon = 0.0977257548614;
    tmp_tmp_msg_0_0.alt = 0.357534816466;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.390123060886);
    msg.setSource(27638U);
    msg.setSourceEntity(11U);
    msg.setDestination(18965U);
    msg.setDestinationEntity(108U);
    msg.req_id = 8770U;
    msg.type = 227U;
    msg.max_size = 48329U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.765617329826;
    tmp_msg_0.base_lon = 0.21131968466;
    tmp_msg_0.base_time = 0.824257279778;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 3218U;
    tmp_tmp_msg_0_0.priority = 102;
    tmp_tmp_msg_0_0.x = 12419;
    tmp_tmp_msg_0_0.y = -396;
    tmp_tmp_msg_0_0.z = -27361;
    tmp_tmp_msg_0_0.t = 25182;
    IMC::StationKeepingExtended tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.53192790612;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0240435223318;
    tmp_tmp_tmp_msg_0_0_0.z = 0.52878986038;
    tmp_tmp_tmp_msg_0_0_0.z_units = 247U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.567526371063;
    tmp_tmp_tmp_msg_0_0_0.duration = 55578U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.618511715931;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 175U;
    tmp_tmp_tmp_msg_0_0_0.popup_period = 13947U;
    tmp_tmp_tmp_msg_0_0_0.popup_duration = 12404U;
    tmp_tmp_tmp_msg_0_0_0.flags = 80U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("UXEGUEMSQVRXIHLLGKAHILHZXMLXVPISLWDRPYYGPRVQLMDVVOWZCWQNOPQLVGNAZUZPHAWNJVBMFOLCJBDDNMNQQHNRJIOUFOCXSJLINHYUWMKZYWAEEXHOKRCCBWTBMDCCZWUTSSMXSFOITIKNTEZBPIGZWKKDFBVURACTEVCESSNZGPBGR");
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
    msg.setTimeStamp(0.233912183171);
    msg.setSource(28192U);
    msg.setSourceEntity(164U);
    msg.setDestination(63256U);
    msg.setDestinationEntity(183U);
    msg.req_id = 51919U;
    msg.type = 77U;
    msg.max_size = 3818U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.101664170639;
    tmp_msg_0.base_lon = 0.934085922226;
    tmp_msg_0.base_time = 0.131199228094;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 60083U;
    tmp_tmp_msg_0_0.destination = 53244U;
    tmp_tmp_msg_0_0.timeout = 0.715021080317;
    IMC::FollowSystem tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.system = 55480U;
    tmp_tmp_tmp_msg_0_0_0.duration = 8163U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.889263402694;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 230U;
    tmp_tmp_tmp_msg_0_0_0.x = 0.207881661816;
    tmp_tmp_tmp_msg_0_0_0.y = 0.586034447985;
    tmp_tmp_tmp_msg_0_0_0.z = 0.952610949601;
    tmp_tmp_tmp_msg_0_0_0.z_units = 239U;
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
    msg.setTimeStamp(0.501098819705);
    msg.setSource(25681U);
    msg.setSourceEntity(73U);
    msg.setDestination(53304U);
    msg.setDestinationEntity(44U);
    msg.req_id = 39697U;
    msg.type = 206U;
    msg.max_size = 8371U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0670085872092;
    tmp_msg_0.base_lon = 0.146202543985;
    tmp_msg_0.base_time = 0.31986209059;
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
    msg.setTimeStamp(0.796931028945);
    msg.setSource(23740U);
    msg.setSourceEntity(213U);
    msg.setDestination(59403U);
    msg.setDestinationEntity(136U);
    msg.original_source = 47159U;
    msg.destination = 7339U;
    msg.timeout = 0.401474967307;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("WDBCTLMKVYEIEXOBJUHEYNQ");
    tmp_msg_0.service_type = 76U;
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
    msg.setTimeStamp(0.680607741281);
    msg.setSource(15968U);
    msg.setSourceEntity(7U);
    msg.setDestination(483U);
    msg.setDestinationEntity(135U);
    msg.original_source = 37200U;
    msg.destination = 52211U;
    msg.timeout = 0.726833840257;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 47U;
    tmp_msg_0.speed_min = 0.627850075343;
    tmp_msg_0.speed_max = 0.30344394726;
    tmp_msg_0.long_accel = 0.580499186451;
    tmp_msg_0.alt_max_msl = 0.809227226779;
    tmp_msg_0.dive_fraction_max = 0.0536033231635;
    tmp_msg_0.climb_fraction_max = 0.538824318964;
    tmp_msg_0.bank_max = 0.0360767953372;
    tmp_msg_0.p_max = 0.608514252745;
    tmp_msg_0.pitch_min = 0.278822043481;
    tmp_msg_0.pitch_max = 0.968476433179;
    tmp_msg_0.q_max = 0.0251823967436;
    tmp_msg_0.g_min = 0.246206136674;
    tmp_msg_0.g_max = 0.654215693158;
    tmp_msg_0.g_lat_max = 0.0432834778826;
    tmp_msg_0.rpm_min = 0.832840521964;
    tmp_msg_0.rpm_max = 0.988999513746;
    tmp_msg_0.rpm_rate_max = 0.593442074275;
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
    msg.setTimeStamp(0.061872800258);
    msg.setSource(22427U);
    msg.setSourceEntity(43U);
    msg.setDestination(9898U);
    msg.setDestinationEntity(18U);
    msg.original_source = 50765U;
    msg.destination = 417U;
    msg.timeout = 0.825785667569;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 11U;
    tmp_msg_0.htime = 0.0352041538463;
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
    msg.setTimeStamp(0.713520575386);
    msg.setSource(39561U);
    msg.setSourceEntity(249U);
    msg.setDestination(40531U);
    msg.setDestinationEntity(216U);
    msg.type = 55U;
    msg.comm_interface = 1567U;
    msg.model = 44020U;
    msg.list.assign("VTXSVPPWHSQOZHCGFUFYRXCMBBXZJJIVTDCMJILEYQESTRXDARKYZEGKALNDAWSZTNDRJIBSKLQUPROGHMPYIUWAUALMAQYDQJBETPLNOSCLQGNVQWEZCONNYUAIFRDFIUCHTIHRJFTBGEGYUKLVNVXHNFFXTSSHZBHEMOLVPPEOAWQC");

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
    msg.setTimeStamp(0.294904041058);
    msg.setSource(47722U);
    msg.setSourceEntity(194U);
    msg.setDestination(13444U);
    msg.setDestinationEntity(143U);
    msg.type = 104U;
    msg.comm_interface = 65000U;
    msg.model = 6333U;
    msg.list.assign("AEWHJTGCEIGKFNXOXIHFLDGSPXHZPYKVMTBSTQPENXKOWQMTYCYQTLINKHNL");

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
    msg.setTimeStamp(0.700751072386);
    msg.setSource(23891U);
    msg.setSourceEntity(131U);
    msg.setDestination(52631U);
    msg.setDestinationEntity(240U);
    msg.type = 237U;
    msg.comm_interface = 43715U;
    msg.model = 26544U;
    msg.list.assign("GJVHYPAJORVMCFKBWHZTWYKKVITOPJBIVHUAGBLXULLDSUHOUWXCDYNHQFROZGXPMIOJHVNDSGHNESBCFKFFQGKSCEWLFSMAL");

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
    msg.setTimeStamp(0.798552246852);
    msg.setSource(34608U);
    msg.setSourceEntity(157U);
    msg.setDestination(5619U);
    msg.setDestinationEntity(89U);
    msg.type = 94U;
    msg.req_id = 875148195U;
    msg.ttl = 6765U;
    msg.code = 29U;
    msg.destination.assign("AKYXPEJPLDVFGGOUHADJWVEMUMZARIZASJBXZLRHWDVXJSPWVGZ");
    msg.source.assign("HAIEQGTDDAJFGYKCWAHTGASTFWPSTVQOBYVSZJYLNBARELQOYSBDRMOQIUSOSHLRXMEBCDHNWSNKGVRUWHICBTZAFXAUXLJLDITFZFUMUNLIBJOVIXLUQWHJ");
    msg.acknowledge = 173U;
    msg.status = 10U;
    const char tmp_msg_0[] = {17, 97, -96, 59, -51, -37, 65, 110, -70, 80, -43, -78, -125, -102, 6, 112, -126, -72, -38, 14, -26, 73, -64, -14, -31, -111, 94, -32, 12, -120, -68, 112, -81, 65, 67, -74, -93, -99, 22};
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
    msg.setTimeStamp(0.333673755906);
    msg.setSource(22860U);
    msg.setSourceEntity(215U);
    msg.setDestination(25820U);
    msg.setDestinationEntity(117U);
    msg.type = 125U;
    msg.req_id = 2831616308U;
    msg.ttl = 62106U;
    msg.code = 30U;
    msg.destination.assign("ONITAVKOUGJMAGCEOHZTZJWYNMRWLADGPWXVEFRMYXZDZBKBZLMGDASOAMMSALQBKGJIDKJGUWPKGRREUXIHQAIVYHCGPWOLPIUSGUQDPCIPDDIPNYDPNBFJDCTJBQCFYSCTITRECWASYLERJKCOQXSZBJYZSFNSSEBEQVLYWROQHWWHTAZCZXNUMLCOFONQKNVRENYHVYKKHVHRHHUWRBLUMX");
    msg.source.assign("DXMOTJXLKKWSBMSLVCAOCXDTTJZYVIJSEOHJEFCGQEIRARZRDDBKMWNVIZLZXTGQHRTRWJIJTWAOFWMULZBYHUUONNYKYYUSMHDXSMMNXUHLTQDKQDSRZBNCMOXAVBAKURMANI");
    msg.acknowledge = 105U;
    msg.status = 224U;
    const char tmp_msg_0[] = {-50, -84, -28, -82, 66, -69, -88, -69, 11, -112, -63, -32, -114, 109, 105, -103, -35, 3, 41, -70, -2, -77, -40, 117, -38, -99, -97, 114, -125, 90, -126, 83, -93, -88, -63, -60, -28, -128, -23, 104, -101, 74, 52, -57, 119, -48, 41, -24, -37, 69, 71, 29, -19, 116, 1, 11, 118, -54, -106, 47, 103, -63, -117, 20, -10, 15, 34, 55, -70, 5, 56, 69, -51, -117, -74, 11, -12, 23, -49, -19, 11, -94, -24, 124, 38, 107, -8, 14, -116, -110, -69, 118, 69, -106, -104, 58, -42, -100, -31, 45, 38, -103, 99, -126, -71, -120, -118, -51, 53, -56, 95, -68, -99, -16, -45, -37, 68, -13, -60, 85, 67, -12, -97, -60, -52, 29, -40, -76, 75, 95, -51, 87, 117, -34, -85, -4};
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
    msg.setTimeStamp(0.16739268459);
    msg.setSource(10667U);
    msg.setSourceEntity(44U);
    msg.setDestination(52807U);
    msg.setDestinationEntity(124U);
    msg.type = 159U;
    msg.req_id = 4034932614U;
    msg.ttl = 58141U;
    msg.code = 195U;
    msg.destination.assign("IDLPNEQAAGHZEHRCGBTBMEYSCIMVIGCJMEUMPEHTNKDHNIGYQIZTYSOQFAJKOPXTNQJHPBDXNFEMTWOPBQKHKNLOYSNUSRVDUOVTIQVGFPJLLNUFLACWXBCIKHWRZFRAXWJLWKDWYRZUNPMSSAUEBZYKJCQDWJPXODFQVRRXZJUDULQBTVVDSSIWOAMYMGKHCWLSJTLDUPAZSCGVLXRTBRR");
    msg.source.assign("CALMELSNKIJKVALHTCJVKUWRGPZMNIUXARIUYSBBBAIRACPIZDAERFODGMXSMIVNNFBYYTHBZNAHV");
    msg.acknowledge = 204U;
    msg.status = 153U;
    const char tmp_msg_0[] = {27, 107, 38, -126, -73, -2, 21, 4, 121, 29, 29, 95, 20, -95, 45, 16, -78, -70, 35, 22, 7, -33, 101, 116, -114, 9, 88, -3, 24, 49, -40, -9, -31, -68, -113, 114, -22, -83, 13, 49, -70, -110, -126, -19, -31, -123, -58, 33, 13, -15, 88, -37, 55, 73, 49, -108, 42, 105, 13, 14, 88, -4, 10, -12, 100, 107, 124, -116, 71, 99, -122, 80, 106, -66, 78, 112, 49, 116, 107, 77, -52, -33, 63, -9, 16, -52, -66, 99, 125, -55, 126, 117, -52, -88, 110, -122, -38, 93, 23, 47, 7, -80, 42, -71, 109, 42, -104, -12, 46, 20, -6, 54, 52, -127, -119, -38, -55, 96, 84, -25, -71, 8, -88, -73, -122, -99, 122, -80, 114, 40, 85, 103, -19, 2, 82, 108, -51, 26, 48, -41, -37, 27, 75, 104, 60, -53, 4, -83, 8, 123, 109, 72, 29, 94, -38, 8, 107, -112, -92};
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
    msg.setTimeStamp(0.351210580944);
    msg.setSource(60527U);
    msg.setSourceEntity(12U);
    msg.setDestination(12649U);
    msg.setDestinationEntity(87U);
    msg.id = 244U;
    msg.range = 0.00780333151759;

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
    msg.setTimeStamp(0.109933635934);
    msg.setSource(51600U);
    msg.setSourceEntity(147U);
    msg.setDestination(30304U);
    msg.setDestinationEntity(214U);
    msg.id = 47U;
    msg.range = 0.790714932004;

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
    msg.setTimeStamp(0.669371239877);
    msg.setSource(41923U);
    msg.setSourceEntity(191U);
    msg.setDestination(53194U);
    msg.setDestinationEntity(253U);
    msg.id = 217U;
    msg.range = 0.566086410317;

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
    msg.setTimeStamp(0.740777343173);
    msg.setSource(11707U);
    msg.setSourceEntity(181U);
    msg.setDestination(55889U);
    msg.setDestinationEntity(162U);
    msg.beacon.assign("WRJYAMZFNCSUVHSRHQPYCASFTTKFQUOPECRCPMXYDUXEVJJNABLXUJKPVHNPRQQWSHLTVIZDTNYMH");
    msg.lat = 0.307992005366;
    msg.lon = 0.772782490686;
    msg.depth = 0.739520669621;
    msg.query_channel = 110U;
    msg.reply_channel = 173U;
    msg.transponder_delay = 242U;

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
    msg.setTimeStamp(0.119553104906);
    msg.setSource(22013U);
    msg.setSourceEntity(154U);
    msg.setDestination(15177U);
    msg.setDestinationEntity(70U);
    msg.beacon.assign("CXLMUJLWCEUQEFMINJTHKCHQVSOYKORJGSAPJVOWOIBEAHZLRLGENEZSKTEGGLESPOFYTUKZLOHTIWOUCQPKAOBVSKTCZSSAIGCXWODEIDUPVWGMBOHGFXXMJLTWHRZHUQBBFXFZADSMFVTCXNMRIWDWUDVDKVSPUXCGNVJLYZCPYMYNJWLKZYRFQFYFJQDINQGXRIYMZQVPAGARMDFQVHXWBNP");
    msg.lat = 0.0548758289632;
    msg.lon = 0.166512455295;
    msg.depth = 0.927554096907;
    msg.query_channel = 234U;
    msg.reply_channel = 38U;
    msg.transponder_delay = 193U;

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
    msg.setTimeStamp(0.12263531897);
    msg.setSource(57393U);
    msg.setSourceEntity(159U);
    msg.setDestination(4065U);
    msg.setDestinationEntity(156U);
    msg.beacon.assign("RGTZOOPOEUPII");
    msg.lat = 0.955180976311;
    msg.lon = 0.40796347967;
    msg.depth = 0.572310009112;
    msg.query_channel = 153U;
    msg.reply_channel = 193U;
    msg.transponder_delay = 35U;

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
    msg.setTimeStamp(0.902962674208);
    msg.setSource(2785U);
    msg.setSourceEntity(122U);
    msg.setDestination(5397U);
    msg.setDestinationEntity(72U);
    msg.op = 249U;

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
    msg.setTimeStamp(0.198317513253);
    msg.setSource(62604U);
    msg.setSourceEntity(193U);
    msg.setDestination(11830U);
    msg.setDestinationEntity(173U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.136432323627);
    msg.setSource(18750U);
    msg.setSourceEntity(178U);
    msg.setDestination(56624U);
    msg.setDestinationEntity(125U);
    msg.op = 102U;

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
    msg.setTimeStamp(0.290865540516);
    msg.setSource(2117U);
    msg.setSourceEntity(172U);
    msg.setDestination(14320U);
    msg.setDestinationEntity(146U);
    IMC::SoiCommand tmp_msg_0;
    tmp_msg_0.type = 198U;
    tmp_msg_0.command = 157U;
    tmp_msg_0.settings.assign("OMDHSTWBHOMUKPHNOXCYJDYCQSBDYIOEKIMBIOMNTTBRMYTCVPEJFABPVKCIJQSFAFNLNHNPPKCK");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 38074U;
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("IHYFPCDJCJWLOBBRKFMVCQQ");
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
    msg.setTimeStamp(0.785480339671);
    msg.setSource(45187U);
    msg.setSourceEntity(98U);
    msg.setDestination(37372U);
    msg.setDestinationEntity(110U);
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("NTTCOUBKLBTFQAAIWGPVNOGRUPUOHHOSJFIOHLIVUXMFRIBAZNRPKLJTUSBAPNSCCLMHEXYDKGCMNLRHNXBSLEHCQOPFVUYHISXLXEGWVOFDWQCRMSBSNKYJLHEFMAXQOEWIAWVVWMUKZXPUIODKJQQOJZGKBPCLXDIGTEFAWZZAJQPVYTZVJBNDYRKIVMZGTMNBPYZWRYETGSXRCDDXGBRTYZWJJEFFUZTCEQJSFQYGWD");
    tmp_msg_0.text.assign("QOAIFMBPMIFBBHKPNYXRLHGEZECGWZVCQASAEBTVMIUZGKCSSESOGQECOGRYFTVQSZLVHPYVDFVJSRTTPUFOHUWIDUBUSCZFIRKDCNXYRMXMPQBZKPXBASGRDJDBIKOQKERZVFVPUYYOFSAAXYTOEULPXHWJMCRMVUBKTJDRLVTMHXNNAAHXNOGLWENHFWOJBGLDWJCQ");
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
    msg.setTimeStamp(0.170523336439);
    msg.setSource(29314U);
    msg.setSourceEntity(196U);
    msg.setDestination(49542U);
    msg.setDestinationEntity(39U);
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 113U;
    tmp_msg_0.list.assign("OKYJXXYLWTUSSNKYGFDDTXNCFLEZONOECVUIMHPQHFPZNDTNDTIAOBMKWTFBEBZIMJIJIROSZXGXQTNJUVVPGMAIXPZBIQWAWQDSLFLUTSGRBFMSLJXICOUYCPDPMPYLZVRAUCSAJPGLRMNTECBPZVGQJHWKAKJAB");
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
    msg.setTimeStamp(0.254523370457);
    msg.setSource(57373U);
    msg.setSourceEntity(243U);
    msg.setDestination(31793U);
    msg.setDestinationEntity(60U);
    msg.op = 6U;
    msg.system.assign("USFJOKFHUHFPLYKMCQWGXVLOSGCOMBVFSFTZJHMQDTHBXYJHSZZIDKIAJSZEMCGHTCKACMLBKPAZTTTUFCWCVMYDVQFBZENJSOVKBPALXOGRWNGOLAHVWIUDNPEXUWJUUJEQ");
    msg.range = 0.669377262699;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.462628527416;
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
    msg.setTimeStamp(0.932819227934);
    msg.setSource(6402U);
    msg.setSourceEntity(73U);
    msg.setDestination(65159U);
    msg.setDestinationEntity(99U);
    msg.op = 164U;
    msg.system.assign("GAHVWTSIMMPFBDKBJAIFRVSQDSHKFQEOFTQBWUEORUKNNABSKBECLQXHYLHCREYMRTSVXQBOYHCGJGCTDBLQPZMIORIVEGEYJIUZDLKVTYZZPJILWEBDSJMWXCRJAUPNXOXNWNGNCZGIOKBZEDHR");
    msg.range = 0.108882817753;
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("OALEABUSPZEOCZCEANSURUKEDPWHNEZNUHSWBXUWVFKQJCPDBGKUKLSQXIXFSEGMRIGTTQFVFZTUALKODHYC");
    tmp_msg_0.plan_size = 2696U;
    tmp_msg_0.change_time = 0.287484492768;
    tmp_msg_0.change_sid = 43358U;
    tmp_msg_0.change_sname.assign("TZDLONLYLQYCCLKFZEXMJOCENATCQUVXQDXGMUMCTZHRRHKNKIRQQZXGZUZOESJIGHNHWBMKFSEHIRTCPHFJYXQBVTMODMUSUYBLEJPFQFWQGVWRYWIVMATEDLWPBFZIPKCYAMOKBSJSENOXWUUXRYUBLTVFIGAPSEYKWYROOHNDLRUSKHBDJTGHBKPSAZWSUTGNXPAFJMFGIIT");
    const char tmp_tmp_msg_0_0[] = {-116, -46, -36, 118, -32, 56, 81, -69, -86, -25, -102, 97, -40, -112, -119, -92, 36, -86, 26, 37, -39, -3, -126, 26, -69, -120, -36, 43, -106, 70, -75, 119, 87, -79, -106, -65, 27, -117, 45, -21, -7, 19, 109, -79, 38, 126, -84, 10, 85, -106, 49, 6, -107, 118, -11, 62, 39, 59, -30, -101, 10, 2, -75, -112, 92, 1, 31, 84, -69, -16, -105, -17, -57, -117, -119, 65, 75, 23, -27, -74, -64, -18, -126, 48, -62, -118, 6, -118, -113, -88, 67, -66, 13, -14, -20, 18, 45, 76, -7, 79, 83, -104, 87, -17, 112, 108, 73, 116, 91, -128, 104, -71, 109, -57, -99, -26, -97, 100, -28, 14, -57, 91, -92, -68, 56, 71, -66, -52, -105, -109, 3, -76, 79, 126, 36, 82, 72, 106, 74, 83, 80, -37, -105, 3, 116, -89, -46, -77, -26, 36, -111, 97, -45, 72, -106, 116, 38, 87, 46, 95, 76, -88, -9, 13, -51, 5, 78, 55, -22, -80, 22, -19, 126, -116, 98, -71, 13, -99, 105, 28, -89, -74, 118, 108, 72, -15, 105, -19, 38, 39, -98, 25, -38, -64, -20, -16, -12, 105, 83, 10, -73, 44, -39, 66, 116, 58, 88, 125, -64, 47, 125, -52, -69, 35, -36, 32, 56, 82, -10, 91};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.760067259531);
    msg.setSource(33459U);
    msg.setSourceEntity(132U);
    msg.setDestination(27384U);
    msg.setDestinationEntity(185U);
    msg.op = 101U;
    msg.system.assign("NTQYFYXUCNTMDMTOIFDJTLUHNZXMCTKQBLVNT");
    msg.range = 0.231701060879;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NGAENPZZOIQCGQYZQJNVPGXROYDIIKALAXTECYTOAXPDNJKORMVZUBHZQWPLUSVTSDC");
    tmp_msg_0.value.assign("EYNMJFWLGKIIIRCEQQXSDZCFUWVCGQXXNIPBPCQDKJYRGJAOEQSTELKMDDLLGRYJHTLZADUASBOPSXIEUFWUAATBIOMJGLBJHJGTDZIBXKTWVWQQUPFGXFFBBBCNALPEHIKSLVHRNQZNOXYGFMXKWKMGVZSERIRYFCBJPNOWLYYQUKMSYOMNCRIUCZNPGTFJSTAZHWVEYSMPURHNDU");
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
    msg.setTimeStamp(0.195386604722);
    msg.setSource(32191U);
    msg.setSourceEntity(142U);
    msg.setDestination(61415U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.877028264518);
    msg.setSource(59480U);
    msg.setSourceEntity(39U);
    msg.setDestination(62103U);
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
    msg.setTimeStamp(0.953397485863);
    msg.setSource(30236U);
    msg.setSourceEntity(137U);
    msg.setDestination(57080U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.908689256741);
    msg.setSource(59572U);
    msg.setSourceEntity(14U);
    msg.setDestination(39114U);
    msg.setDestinationEntity(240U);
    msg.list.assign("DYBRFAXTVIQMTRXVRNNYBWTEKQQAXGLMKWIXBCUAYFNQPSERGKHCJGFPWCOOWJTXDJFJVZLBKMFOXAOPIABEMFGLEDVKMSDUKCLRPEYHUGTHIUNBQHEPEGZEULIHGVAOMGSGRCZPWBBSXCTMQDXTROKPUBAHSFUKLIOXFJYASIWZVZEFBZIINIVHHRZCJUNNRLQSKWCDSMPJNVCESDGCVAZZFWQNYOMHTXSZQUDHYYOOPKDJTYTWJA");

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
    msg.setTimeStamp(0.948205174994);
    msg.setSource(55428U);
    msg.setSourceEntity(54U);
    msg.setDestination(44977U);
    msg.setDestinationEntity(225U);
    msg.list.assign("YGGHZSAKXUOBNHNJMEJDXWUFZHLLVQLKXGVNMMSOGACNZKYJRVAPOVXJRSWBYTFLEYNHICIFUDUCTODPWOZFZYJSFZKYUIOJDIMMVWDTTUDRTPBTWRCSI");

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
    msg.setTimeStamp(0.869424725462);
    msg.setSource(7154U);
    msg.setSourceEntity(42U);
    msg.setDestination(47801U);
    msg.setDestinationEntity(45U);
    msg.list.assign("PPXMTEIDZVKRLRHBETDUHHKXPPAJUIVUEOIDRLLAADYOTZNJMDSGWKOTXJCGMZBZEGAGRAQYMGDOSSIZOVDBKCUBFXZPSRTSZRC");

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
    msg.setTimeStamp(0.11110849963);
    msg.setSource(21552U);
    msg.setSourceEntity(201U);
    msg.setDestination(22807U);
    msg.setDestinationEntity(14U);
    msg.peer.assign("RMMACBNQWJWDFUZFNMVELFQFPLBSGTARDXKUGIUTZJZENZXHGHRRJVXBDNOAPLMJTIEPWKQLOYSDWOWUZUNMNLHKDKFGTOEBSJJOXCOAPDXYNAXIKPMCYVMOUYPHPHRPTZTXYYPZVBVBPQOASEBFBIHVCKRFYVJAHIQSWFWBXOYDGRVUSVX");
    msg.rssi = 0.125561691215;
    msg.integrity = 62104U;

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
    msg.setTimeStamp(0.467323953508);
    msg.setSource(10727U);
    msg.setSourceEntity(253U);
    msg.setDestination(37012U);
    msg.setDestinationEntity(233U);
    msg.peer.assign("DFCFUTNJWLUKKAPMMJAWEPUUTKIFWSQB");
    msg.rssi = 0.082589489743;
    msg.integrity = 36905U;

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
    msg.setTimeStamp(0.922487108057);
    msg.setSource(43535U);
    msg.setSourceEntity(139U);
    msg.setDestination(10191U);
    msg.setDestinationEntity(199U);
    msg.peer.assign("SABXCIUKKOEKUADNKLVDOPLIZQYGJCZVBFXQHCQGTAISAHJGFPCTKSRKXSPDEEARRZQVHMEYSRTUXOCRZCDQKMWNZKBGRRJMHMGEBOGPZXEFPWTYWGFXJMBUZIOXOLBCVVHHOINQGCWIIMDSJAPMBQKWVLLKZJYEGDQZBIQAJJLDXNUSDTLGPYFRCHJDSTTPBPHAAOLEFNWMWTSHUJWVYOURNXWDUHILMEIUYYCPTYXNFUZANQRWFTMNNV");
    msg.rssi = 0.478215312469;
    msg.integrity = 43687U;

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
    msg.setTimeStamp(0.443235869518);
    msg.setSource(35570U);
    msg.setSourceEntity(15U);
    msg.setDestination(7414U);
    msg.setDestinationEntity(236U);
    msg.value = 490;

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
    msg.setTimeStamp(0.103504836747);
    msg.setSource(1533U);
    msg.setSourceEntity(114U);
    msg.setDestination(55497U);
    msg.setDestinationEntity(130U);
    msg.value = 9923;

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
    msg.setTimeStamp(0.829883394628);
    msg.setSource(24489U);
    msg.setSourceEntity(87U);
    msg.setDestination(42680U);
    msg.setDestinationEntity(221U);
    msg.value = 31931;

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
    msg.setTimeStamp(0.310174392256);
    msg.setSource(64201U);
    msg.setSourceEntity(188U);
    msg.setDestination(18206U);
    msg.setDestinationEntity(208U);
    msg.value = 0.591633784426;

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
    msg.setTimeStamp(0.558527285883);
    msg.setSource(52857U);
    msg.setSourceEntity(225U);
    msg.setDestination(16557U);
    msg.setDestinationEntity(24U);
    msg.value = 0.626374791055;

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
    msg.setTimeStamp(0.407748433365);
    msg.setSource(27908U);
    msg.setSourceEntity(147U);
    msg.setDestination(63513U);
    msg.setDestinationEntity(236U);
    msg.value = 0.533915465299;

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
    msg.setTimeStamp(0.762663913468);
    msg.setSource(28912U);
    msg.setSourceEntity(187U);
    msg.setDestination(26678U);
    msg.setDestinationEntity(175U);
    msg.value = 0.953296276281;

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
    msg.setTimeStamp(0.649561002215);
    msg.setSource(12958U);
    msg.setSourceEntity(10U);
    msg.setDestination(16078U);
    msg.setDestinationEntity(173U);
    msg.value = 0.71913788848;

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
    msg.setTimeStamp(0.925621832716);
    msg.setSource(63200U);
    msg.setSourceEntity(36U);
    msg.setDestination(1784U);
    msg.setDestinationEntity(125U);
    msg.value = 0.418725815143;

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
    msg.setTimeStamp(0.948889538925);
    msg.setSource(5379U);
    msg.setSourceEntity(207U);
    msg.setDestination(63469U);
    msg.setDestinationEntity(105U);
    msg.validity = 59119U;
    msg.type = 20U;
    msg.utc_year = 31151U;
    msg.utc_month = 203U;
    msg.utc_day = 231U;
    msg.utc_time = 0.340420771286;
    msg.lat = 0.366505556891;
    msg.lon = 0.976032967086;
    msg.height = 0.573303984814;
    msg.satellites = 193U;
    msg.cog = 0.296320208473;
    msg.sog = 0.277219023158;
    msg.hdop = 0.515453973504;
    msg.vdop = 0.0524185349295;
    msg.hacc = 0.561079614361;
    msg.vacc = 0.104497263929;

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
    msg.setTimeStamp(0.942401659893);
    msg.setSource(62985U);
    msg.setSourceEntity(90U);
    msg.setDestination(50855U);
    msg.setDestinationEntity(99U);
    msg.validity = 8909U;
    msg.type = 206U;
    msg.utc_year = 12893U;
    msg.utc_month = 193U;
    msg.utc_day = 109U;
    msg.utc_time = 0.471332928658;
    msg.lat = 0.0420001101495;
    msg.lon = 0.335368403585;
    msg.height = 0.930012481885;
    msg.satellites = 150U;
    msg.cog = 0.172695991367;
    msg.sog = 0.390863769622;
    msg.hdop = 0.0111710826372;
    msg.vdop = 0.850017609361;
    msg.hacc = 0.362654835459;
    msg.vacc = 0.359890518451;

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
    msg.setTimeStamp(0.421168906303);
    msg.setSource(36771U);
    msg.setSourceEntity(96U);
    msg.setDestination(29375U);
    msg.setDestinationEntity(43U);
    msg.validity = 20220U;
    msg.type = 17U;
    msg.utc_year = 21039U;
    msg.utc_month = 25U;
    msg.utc_day = 24U;
    msg.utc_time = 0.316298785218;
    msg.lat = 0.124884329055;
    msg.lon = 0.584062614785;
    msg.height = 0.506431854047;
    msg.satellites = 32U;
    msg.cog = 0.57837274339;
    msg.sog = 0.231767645303;
    msg.hdop = 0.669196323294;
    msg.vdop = 0.614958683937;
    msg.hacc = 0.76288894409;
    msg.vacc = 0.229753747845;

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
    msg.setTimeStamp(0.30861557716);
    msg.setSource(55U);
    msg.setSourceEntity(113U);
    msg.setDestination(15365U);
    msg.setDestinationEntity(167U);
    msg.time = 0.95097000466;
    msg.phi = 0.658918396348;
    msg.theta = 0.606014026435;
    msg.psi = 0.144120913891;
    msg.psi_magnetic = 0.149949108438;

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
    msg.setTimeStamp(0.111836340759);
    msg.setSource(35182U);
    msg.setSourceEntity(246U);
    msg.setDestination(36845U);
    msg.setDestinationEntity(95U);
    msg.time = 0.424138496447;
    msg.phi = 0.0370537558253;
    msg.theta = 0.625275101924;
    msg.psi = 0.330892603136;
    msg.psi_magnetic = 0.234343253564;

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
    msg.setTimeStamp(0.830233680337);
    msg.setSource(43394U);
    msg.setSourceEntity(61U);
    msg.setDestination(27143U);
    msg.setDestinationEntity(100U);
    msg.time = 0.776783462672;
    msg.phi = 0.676479457831;
    msg.theta = 0.520765356924;
    msg.psi = 0.913751569934;
    msg.psi_magnetic = 0.789673683445;

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
    msg.setTimeStamp(0.430696589955);
    msg.setSource(34008U);
    msg.setSourceEntity(225U);
    msg.setDestination(33037U);
    msg.setDestinationEntity(220U);
    msg.time = 0.489334742817;
    msg.x = 0.42811962706;
    msg.y = 0.761305613577;
    msg.z = 0.512303619222;
    msg.timestep = 0.515321436242;

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
    msg.setTimeStamp(0.132293443947);
    msg.setSource(5055U);
    msg.setSourceEntity(227U);
    msg.setDestination(32034U);
    msg.setDestinationEntity(170U);
    msg.time = 0.708644215322;
    msg.x = 0.21161716782;
    msg.y = 0.625147438377;
    msg.z = 0.0953756272583;
    msg.timestep = 0.475901004222;

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
    msg.setTimeStamp(0.899565450643);
    msg.setSource(12858U);
    msg.setSourceEntity(174U);
    msg.setDestination(3972U);
    msg.setDestinationEntity(95U);
    msg.time = 0.0537107485569;
    msg.x = 0.630615831523;
    msg.y = 0.577710798496;
    msg.z = 0.778338307427;
    msg.timestep = 0.479805512526;

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
    msg.setTimeStamp(0.93138775666);
    msg.setSource(19395U);
    msg.setSourceEntity(174U);
    msg.setDestination(31526U);
    msg.setDestinationEntity(80U);
    msg.time = 0.597692973374;
    msg.x = 0.979086409566;
    msg.y = 0.436347724103;
    msg.z = 0.226296355213;

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
    msg.setTimeStamp(0.764968204871);
    msg.setSource(3863U);
    msg.setSourceEntity(224U);
    msg.setDestination(14474U);
    msg.setDestinationEntity(102U);
    msg.time = 0.54894392433;
    msg.x = 0.119089769245;
    msg.y = 0.415954860421;
    msg.z = 0.912974756268;

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
    msg.setTimeStamp(0.990231599383);
    msg.setSource(9815U);
    msg.setSourceEntity(172U);
    msg.setDestination(49305U);
    msg.setDestinationEntity(192U);
    msg.time = 0.55996114511;
    msg.x = 0.495811971474;
    msg.y = 0.775162131826;
    msg.z = 0.686020126429;

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
    msg.setTimeStamp(0.40415507631);
    msg.setSource(49280U);
    msg.setSourceEntity(178U);
    msg.setDestination(37287U);
    msg.setDestinationEntity(145U);
    msg.time = 0.418090860521;
    msg.x = 0.47588502265;
    msg.y = 0.77581151242;
    msg.z = 0.673783572979;

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
    msg.setTimeStamp(0.670205714522);
    msg.setSource(39453U);
    msg.setSourceEntity(73U);
    msg.setDestination(48547U);
    msg.setDestinationEntity(150U);
    msg.time = 0.0585154378919;
    msg.x = 0.0270941964752;
    msg.y = 0.727042769632;
    msg.z = 0.547156053978;

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
    msg.setTimeStamp(0.0654508435854);
    msg.setSource(19011U);
    msg.setSourceEntity(101U);
    msg.setDestination(14154U);
    msg.setDestinationEntity(175U);
    msg.time = 0.509152784659;
    msg.x = 0.452798859509;
    msg.y = 0.406064939808;
    msg.z = 0.156762535469;

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
    msg.setTimeStamp(0.559416964768);
    msg.setSource(19640U);
    msg.setSourceEntity(97U);
    msg.setDestination(17022U);
    msg.setDestinationEntity(181U);
    msg.time = 0.87830192745;
    msg.x = 0.131259730962;
    msg.y = 0.224753622518;
    msg.z = 0.755010111686;

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
    msg.setTimeStamp(0.23361530951);
    msg.setSource(50476U);
    msg.setSourceEntity(59U);
    msg.setDestination(57118U);
    msg.setDestinationEntity(56U);
    msg.time = 0.945810225162;
    msg.x = 0.193782997916;
    msg.y = 0.802346133724;
    msg.z = 0.525240968335;

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
    msg.setTimeStamp(0.569824256964);
    msg.setSource(33853U);
    msg.setSourceEntity(211U);
    msg.setDestination(426U);
    msg.setDestinationEntity(187U);
    msg.time = 0.111751522721;
    msg.x = 0.196519088004;
    msg.y = 0.763669446002;
    msg.z = 0.228098513172;

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
    msg.setTimeStamp(0.509902896889);
    msg.setSource(2168U);
    msg.setSourceEntity(207U);
    msg.setDestination(12746U);
    msg.setDestinationEntity(205U);
    msg.validity = 116U;
    msg.x = 0.666751060583;
    msg.y = 0.258545759813;
    msg.z = 0.806644775572;

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
    msg.setTimeStamp(0.998714452445);
    msg.setSource(33558U);
    msg.setSourceEntity(155U);
    msg.setDestination(9163U);
    msg.setDestinationEntity(16U);
    msg.validity = 73U;
    msg.x = 0.778813070113;
    msg.y = 0.475355233173;
    msg.z = 0.242681362826;

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
    msg.setTimeStamp(0.410919671618);
    msg.setSource(27977U);
    msg.setSourceEntity(204U);
    msg.setDestination(63268U);
    msg.setDestinationEntity(9U);
    msg.validity = 36U;
    msg.x = 0.890378919104;
    msg.y = 0.635339823638;
    msg.z = 0.858232707197;

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
    msg.setTimeStamp(0.939438435442);
    msg.setSource(51650U);
    msg.setSourceEntity(14U);
    msg.setDestination(11486U);
    msg.setDestinationEntity(92U);
    msg.validity = 187U;
    msg.x = 0.14489646577;
    msg.y = 0.972443875014;
    msg.z = 0.838085657879;

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
    msg.setTimeStamp(0.687008588692);
    msg.setSource(12579U);
    msg.setSourceEntity(15U);
    msg.setDestination(40299U);
    msg.setDestinationEntity(69U);
    msg.validity = 47U;
    msg.x = 0.594617673666;
    msg.y = 0.344316669832;
    msg.z = 0.845758324366;

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
    msg.setTimeStamp(0.284937981504);
    msg.setSource(28052U);
    msg.setSourceEntity(229U);
    msg.setDestination(47242U);
    msg.setDestinationEntity(59U);
    msg.validity = 139U;
    msg.x = 0.0646184793214;
    msg.y = 0.822702155575;
    msg.z = 0.745200138559;

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
    msg.setTimeStamp(0.989414219104);
    msg.setSource(59159U);
    msg.setSourceEntity(122U);
    msg.setDestination(21145U);
    msg.setDestinationEntity(53U);
    msg.time = 0.837598202037;
    msg.x = 0.330813666567;
    msg.y = 0.0750572150458;
    msg.z = 0.329043776216;

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
    msg.setTimeStamp(0.4890346829);
    msg.setSource(64343U);
    msg.setSourceEntity(234U);
    msg.setDestination(47899U);
    msg.setDestinationEntity(245U);
    msg.time = 0.216086911265;
    msg.x = 0.175876373276;
    msg.y = 0.787401679791;
    msg.z = 0.188431777712;

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
    msg.setTimeStamp(0.0590499601109);
    msg.setSource(38508U);
    msg.setSourceEntity(227U);
    msg.setDestination(10010U);
    msg.setDestinationEntity(199U);
    msg.time = 0.805312656435;
    msg.x = 0.625125614132;
    msg.y = 0.54777061314;
    msg.z = 0.918216883169;

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
    msg.setTimeStamp(0.268513333217);
    msg.setSource(22534U);
    msg.setSourceEntity(27U);
    msg.setDestination(56931U);
    msg.setDestinationEntity(171U);
    msg.validity = 206U;
    msg.value = 0.362916346951;

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
    msg.setTimeStamp(0.784893332655);
    msg.setSource(26227U);
    msg.setSourceEntity(155U);
    msg.setDestination(59787U);
    msg.setDestinationEntity(167U);
    msg.validity = 56U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.59794652918;
    tmp_msg_0.y = 0.801869402697;
    tmp_msg_0.z = 0.884152399756;
    tmp_msg_0.phi = 0.0262954247904;
    tmp_msg_0.theta = 0.471213694351;
    tmp_msg_0.psi = 0.00175665619616;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.680047896382;
    tmp_msg_1.beam_height = 0.16405738368;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.95844024353;

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
    msg.setTimeStamp(0.714751824772);
    msg.setSource(22277U);
    msg.setSourceEntity(202U);
    msg.setDestination(24903U);
    msg.setDestinationEntity(13U);
    msg.validity = 109U;
    msg.value = 0.427515380551;

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
    msg.setTimeStamp(0.140506274364);
    msg.setSource(44176U);
    msg.setSourceEntity(178U);
    msg.setDestination(12893U);
    msg.setDestinationEntity(111U);
    msg.value = 0.765729975077;

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
    msg.setTimeStamp(0.845842990033);
    msg.setSource(59052U);
    msg.setSourceEntity(35U);
    msg.setDestination(17622U);
    msg.setDestinationEntity(179U);
    msg.value = 0.964583323895;

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
    msg.setTimeStamp(0.469718697835);
    msg.setSource(6510U);
    msg.setSourceEntity(18U);
    msg.setDestination(26566U);
    msg.setDestinationEntity(140U);
    msg.value = 0.581682837788;

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
    msg.setTimeStamp(0.29177250136);
    msg.setSource(28459U);
    msg.setSourceEntity(103U);
    msg.setDestination(61215U);
    msg.setDestinationEntity(238U);
    msg.value = 0.652866517383;

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
    msg.setTimeStamp(0.406685195185);
    msg.setSource(46341U);
    msg.setSourceEntity(158U);
    msg.setDestination(446U);
    msg.setDestinationEntity(3U);
    msg.value = 0.516366874132;

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
    msg.setTimeStamp(0.383113310916);
    msg.setSource(32875U);
    msg.setSourceEntity(196U);
    msg.setDestination(36715U);
    msg.setDestinationEntity(60U);
    msg.value = 0.74820639136;

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
    msg.setTimeStamp(0.568701646044);
    msg.setSource(44848U);
    msg.setSourceEntity(3U);
    msg.setDestination(57797U);
    msg.setDestinationEntity(144U);
    msg.value = 0.0945580681744;

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
    msg.setTimeStamp(0.386602261617);
    msg.setSource(37610U);
    msg.setSourceEntity(17U);
    msg.setDestination(11052U);
    msg.setDestinationEntity(36U);
    msg.value = 0.324435846826;

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
    msg.setTimeStamp(0.713297600933);
    msg.setSource(20770U);
    msg.setSourceEntity(122U);
    msg.setDestination(39110U);
    msg.setDestinationEntity(47U);
    msg.value = 0.15697817774;

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
    msg.setTimeStamp(0.904312497605);
    msg.setSource(11883U);
    msg.setSourceEntity(48U);
    msg.setDestination(20321U);
    msg.setDestinationEntity(218U);
    msg.value = 0.721659052603;

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
    msg.setTimeStamp(0.583662580522);
    msg.setSource(25600U);
    msg.setSourceEntity(182U);
    msg.setDestination(28626U);
    msg.setDestinationEntity(229U);
    msg.value = 0.161747376081;

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
    msg.setTimeStamp(0.131641695807);
    msg.setSource(20022U);
    msg.setSourceEntity(185U);
    msg.setDestination(51485U);
    msg.setDestinationEntity(87U);
    msg.value = 0.82048065685;

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
    msg.setTimeStamp(0.955648670003);
    msg.setSource(15786U);
    msg.setSourceEntity(207U);
    msg.setDestination(29600U);
    msg.setDestinationEntity(27U);
    msg.value = 0.919100571544;

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
    msg.setTimeStamp(0.313440987663);
    msg.setSource(9321U);
    msg.setSourceEntity(225U);
    msg.setDestination(23980U);
    msg.setDestinationEntity(71U);
    msg.value = 0.635524991647;

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
    msg.setTimeStamp(0.308902642075);
    msg.setSource(7528U);
    msg.setSourceEntity(183U);
    msg.setDestination(13218U);
    msg.setDestinationEntity(241U);
    msg.value = 0.871523667049;

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
    msg.setTimeStamp(0.166353832545);
    msg.setSource(54046U);
    msg.setSourceEntity(35U);
    msg.setDestination(45272U);
    msg.setDestinationEntity(181U);
    msg.value = 0.246079004033;

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
    msg.setTimeStamp(0.143539409729);
    msg.setSource(15085U);
    msg.setSourceEntity(85U);
    msg.setDestination(18206U);
    msg.setDestinationEntity(25U);
    msg.value = 0.889569841419;

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
    msg.setTimeStamp(0.378868625207);
    msg.setSource(48339U);
    msg.setSourceEntity(179U);
    msg.setDestination(61093U);
    msg.setDestinationEntity(110U);
    msg.value = 0.349997851556;

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
    msg.setTimeStamp(0.536671396731);
    msg.setSource(29065U);
    msg.setSourceEntity(6U);
    msg.setDestination(56037U);
    msg.setDestinationEntity(3U);
    msg.value = 0.124402510478;

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
    msg.setTimeStamp(0.484496826874);
    msg.setSource(7965U);
    msg.setSourceEntity(204U);
    msg.setDestination(9928U);
    msg.setDestinationEntity(14U);
    msg.value = 0.00370280412355;

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
    msg.setTimeStamp(0.605000065429);
    msg.setSource(60020U);
    msg.setSourceEntity(158U);
    msg.setDestination(19021U);
    msg.setDestinationEntity(48U);
    msg.value = 0.991524921704;

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
    msg.setTimeStamp(0.896829817951);
    msg.setSource(14479U);
    msg.setSourceEntity(87U);
    msg.setDestination(2916U);
    msg.setDestinationEntity(221U);
    msg.value = 0.892533860772;

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
    msg.setTimeStamp(0.823682010755);
    msg.setSource(49482U);
    msg.setSourceEntity(188U);
    msg.setDestination(16095U);
    msg.setDestinationEntity(206U);
    msg.value = 0.622928121809;

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
    msg.setTimeStamp(0.258455922226);
    msg.setSource(64914U);
    msg.setSourceEntity(17U);
    msg.setDestination(36719U);
    msg.setDestinationEntity(195U);
    msg.value = 0.717942806177;

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
    msg.setTimeStamp(0.29371747565);
    msg.setSource(12841U);
    msg.setSourceEntity(164U);
    msg.setDestination(18211U);
    msg.setDestinationEntity(156U);
    msg.direction = 0.849901750102;
    msg.speed = 0.522127053591;
    msg.turbulence = 0.609091442957;

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
    msg.setTimeStamp(0.641358541328);
    msg.setSource(11448U);
    msg.setSourceEntity(163U);
    msg.setDestination(54357U);
    msg.setDestinationEntity(122U);
    msg.direction = 0.856658132513;
    msg.speed = 0.899865483101;
    msg.turbulence = 0.980515405576;

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
    msg.setTimeStamp(0.356184807242);
    msg.setSource(8390U);
    msg.setSourceEntity(80U);
    msg.setDestination(44184U);
    msg.setDestinationEntity(228U);
    msg.direction = 0.691695199301;
    msg.speed = 0.276071526792;
    msg.turbulence = 0.953794012914;

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
    msg.setTimeStamp(0.800479465548);
    msg.setSource(34753U);
    msg.setSourceEntity(80U);
    msg.setDestination(44854U);
    msg.setDestinationEntity(229U);
    msg.value = 0.215527226214;

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
    msg.setTimeStamp(0.231859391163);
    msg.setSource(24865U);
    msg.setSourceEntity(46U);
    msg.setDestination(61531U);
    msg.setDestinationEntity(14U);
    msg.value = 0.67468387196;

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
    msg.setTimeStamp(0.995649990833);
    msg.setSource(1405U);
    msg.setSourceEntity(233U);
    msg.setDestination(21231U);
    msg.setDestinationEntity(110U);
    msg.value = 0.309204678857;

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
    msg.setTimeStamp(0.474208743089);
    msg.setSource(61698U);
    msg.setSourceEntity(121U);
    msg.setDestination(37963U);
    msg.setDestinationEntity(41U);
    msg.value.assign("KNBAHAIWCWGZLNSDWADXZNREAJECYOYOAPXIVPOKVLRBUDZMWLTVQHKJJTMHQUHRKHRQPREKKJBFBBRGMPYTTGTCITVORMVBXDVCSGHIQZZGBJPGDGYZJZFHQVMXOKYBHQULTYNEKWJUJLTFXMQGEICTSSLJENWABQCKLDHTOFUVPNEEQFXCNPHCIFCXFINLDLZZSIWYSESOWUPBCAUNSWNYUKFDGRLYPFAMU");

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
    msg.setTimeStamp(0.672637123661);
    msg.setSource(34474U);
    msg.setSourceEntity(157U);
    msg.setDestination(51948U);
    msg.setDestinationEntity(97U);
    msg.value.assign("CWQSLIWOOLUZHOWYHMJUEUFQJKRRHMPFTFSSOJUVEZLZPXQCACDCBMNNUJMQXYOREJKLGIFIXHPPNTWPPBRHTDXLEFDJDTNBSJNTCAY");

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
    msg.setTimeStamp(0.756107791252);
    msg.setSource(26574U);
    msg.setSourceEntity(0U);
    msg.setDestination(38558U);
    msg.setDestinationEntity(79U);
    msg.value.assign("EHTGBFEGLSYMRWFPXGVZPBPFILKPNHWIXUYSIRWYHEIMCDBXSNJKTPXHDGQVQBJRDOOYWRPWYECVXVLKBIODVYVSZNLEZWTCQARZHFUJGATGQCNAVUPMQDJMABLLASHBOETNGKXIMRDVHTEYRTXWZEDBQJHLDNOFQJIIUWQYTPGXLMCSHILPGSEFKTWO");

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
    msg.setTimeStamp(0.156976043639);
    msg.setSource(21806U);
    msg.setSourceEntity(250U);
    msg.setDestination(63212U);
    msg.setDestinationEntity(205U);
    const char tmp_msg_0[] = {71, 66, -37, 70, 123, -116, 41, 116, 58, 44, 87, 29, 74, 88, -55, 111, -38, -112, -83, 104, 17, 93, 104, 89, 88, -83, -63, -23, 58, 19, -32, -33, 91, -105, 99, -66, 9, 82, -12, 105, 16, -29, 66, 34, 8, 31, -3, 126, 122, 107, -23, 101, -38, 67, -41, -36, 42, 93, -22, -31, 72, -83, -2, -76, 11, -61, 16, 10, -34, 5, -43, 67, -42, -31, 117, -28, 100, -2, 19, 73, -92, -32, 98, -12, 120, 108, -52, -31, 83, -115, 107, 119, -18, 102, -46, -93, -6, 101, -94, 123, 59, -6, 121, 19, 103, 79, -122, -86, 76, -40, -20, 70, -19, 49, 2, -74, 63, 61, -84, -22, 114, 67, -21, -37, -63, -85, -42, -51, -108, 102, -68, -51, 105, 31, 105, -116, -78, -14, -12, 76, -89, -112, -88, 103, -107, 111, -97, 87, 67, 98, 104, -55, -76, -36, 114, -36, -128, -28, 113, -88, 28, -64};
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
    msg.setTimeStamp(0.60389183978);
    msg.setSource(64122U);
    msg.setSourceEntity(137U);
    msg.setDestination(2991U);
    msg.setDestinationEntity(201U);
    const char tmp_msg_0[] = {17, 86, -47, -28, -30, 113, 57, -87, 42, 36, 33, -59, -72, -106, -68, 76, -86, 19, -97, 51, 1, -48, -15, 122, -73, 26, -5, 25, -125, -52, -118, -80, -71, -86, -64, -74, 45, 98, 99, 88, 69, 123, -114, 4, -5, 9, -108, 102, -63, -49, 21, -66, -118, 70, -21, -110, -34, -26, 13, 75, -28, 93, -29, -2, 19, -7, -65, -118, -27, 46, -96, 94, -100, -67, 97, -97, 69, -76, -121, -57, 10, 4, -4, -123, 82, -107, -98, 108, -94, -49, -63, -15, -82, -17, 72, -76, 56, -121, -116, -52, 114, -47, 85, 112, -43, 94, 82, 82, 124, 87, -3, 81, -80, 85, -61, -52, 61, 117, 61, 23, 66, 51, 18, -78, -55, -88, 34, 36, -43, 34, 59, 122, -49, 61, 119, 10, -110, 112, -33, -39, -103, 90, 24, 109, 4, -95, -86, -30, 42, 28, -76, -105, -117, -113, -99, 85, 12, -84, -104, 119, 86, -120, -84, -85, -4, 55, 121, 83, -23, -67, -25, 78, -64, -94, 121, -18, -23, -87, 109, -92, 87, 123, -6, 33, -96, -58, 64, 117, 91, 44};
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
    msg.setTimeStamp(0.906411828424);
    msg.setSource(25091U);
    msg.setSourceEntity(159U);
    msg.setDestination(39921U);
    msg.setDestinationEntity(161U);
    const char tmp_msg_0[] = {-78, 120, 107, -97, 90, 101, -42, 63, -22, 101, 37, 35, -83, 66, 95, 20, -7, -26, -125, -97, -125, -11, -46, 52, -90, -127, 52, 59, -33, 90, 118, -2, -6, 49, 122, 88, 56, 51, 75, -56, -66, 25, -108, -34, 117, -46, 26, 66, -35, 27, -81, -5, 40, -93, -92, -63, -1, 41, -6, 87, 39, -75, -82, 29, 4, -58, -25, 59, 112, -47, -70, 124, -8, -108, -44, 26, 111, 36, -29, 82, -47, -22, 35, -119, -83, 74, 17, -62, -121, -38, -78, 54, -66, -127, -31, 82, -63, -27, -13, 19, 26, 4, 55, 15, -105, 81, 18, 78, -12, 77, 115, 14};
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
    msg.setTimeStamp(0.322511256549);
    msg.setSource(34214U);
    msg.setSourceEntity(73U);
    msg.setDestination(35867U);
    msg.setDestinationEntity(180U);
    msg.value = 0.0520587397382;

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
    msg.setTimeStamp(0.381358782004);
    msg.setSource(6144U);
    msg.setSourceEntity(146U);
    msg.setDestination(43391U);
    msg.setDestinationEntity(88U);
    msg.value = 0.394159018723;

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
    msg.setTimeStamp(0.18713632942);
    msg.setSource(52313U);
    msg.setSourceEntity(88U);
    msg.setDestination(6288U);
    msg.setDestinationEntity(218U);
    msg.value = 0.640691998501;

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
    msg.setTimeStamp(0.887083296795);
    msg.setSource(34746U);
    msg.setSourceEntity(178U);
    msg.setDestination(35626U);
    msg.setDestinationEntity(253U);
    msg.type = 193U;
    msg.frequency = 1917239936U;
    msg.min_range = 33136U;
    msg.max_range = 8116U;
    msg.bits_per_point = 235U;
    msg.scale_factor = 0.490468066953;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.956504972943;
    tmp_msg_0.beam_height = 0.173829249966;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-126, -98, -45, 69, -105, 19, 20, 6, 54, -48, -24, 126, 67, -90, -95, 16, -84, -9, 29, 34, -10, 125, -95, -39, -29, 118, 42, -1, -49, 30, -39, -56, -53, -125, -50, -112, 66, 63, 109, -11, -45, 113, -77};
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
    msg.setTimeStamp(0.570756985402);
    msg.setSource(33734U);
    msg.setSourceEntity(78U);
    msg.setDestination(22018U);
    msg.setDestinationEntity(208U);
    msg.type = 239U;
    msg.frequency = 2886504896U;
    msg.min_range = 39735U;
    msg.max_range = 26522U;
    msg.bits_per_point = 101U;
    msg.scale_factor = 0.949063025095;
    const char tmp_msg_0[] = {-38, 125, 42, 75, 61, 28, -119, 100, -86, -68, -123, 19, -92, -71, 69, 13, 33, -87, -35, -35, -60, -124, -65, 22, -111};
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
    msg.setTimeStamp(0.0703233278878);
    msg.setSource(59725U);
    msg.setSourceEntity(31U);
    msg.setDestination(36576U);
    msg.setDestinationEntity(18U);
    msg.type = 147U;
    msg.frequency = 412669639U;
    msg.min_range = 47290U;
    msg.max_range = 61944U;
    msg.bits_per_point = 244U;
    msg.scale_factor = 0.812017759099;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.205131611281;
    tmp_msg_0.beam_height = 0.0939229104938;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {74, -19, -118, -45, -6, -14, 82, -55, -44, -76, -71, 58, 99, -105, -78, -38, 59, 125, -75, 43, -35, -120, 81, -25, 93, 0, 5, 9, 0, 31, 91, 10, 46, 123, -80, -125, -20, -126, 70, -62, 27, -13, -127, -116, -65, 108, 98, 34, -100, 97, 8, 105, -59, -85, -117, 106, -90, -46, 4, 84, 70, 46, 35, -76, 113, -122, 91, -120, 91, 44, 42, -35, 107, -7, 110, 35, -25, 35, 75, 40, -65, -103, 14, -56, 58, -124, -113, -90, -109, 115, 1, -100, -3, 114, -93, -20, -47, 23, -108, 92, -105, -112, -74, -17, 63, 6, 111, -14, -89, -26, -47, 94, -103, 56, 97, -52, -69, 23, 38, 20, 44, 36};
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
    msg.setTimeStamp(0.216836719227);
    msg.setSource(23884U);
    msg.setSourceEntity(123U);
    msg.setDestination(32287U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.909725013829);
    msg.setSource(44694U);
    msg.setSourceEntity(19U);
    msg.setDestination(36124U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.666664833372);
    msg.setSource(7416U);
    msg.setSourceEntity(211U);
    msg.setDestination(18148U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.902030345077);
    msg.setSource(44926U);
    msg.setSourceEntity(242U);
    msg.setDestination(32534U);
    msg.setDestinationEntity(41U);
    msg.op = 139U;

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
    msg.setTimeStamp(0.619438951415);
    msg.setSource(60157U);
    msg.setSourceEntity(209U);
    msg.setDestination(17349U);
    msg.setDestinationEntity(189U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.020111627063);
    msg.setSource(34672U);
    msg.setSourceEntity(239U);
    msg.setDestination(24610U);
    msg.setDestinationEntity(119U);
    msg.op = 111U;

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
    msg.setTimeStamp(0.0273556979373);
    msg.setSource(10068U);
    msg.setSourceEntity(113U);
    msg.setDestination(38986U);
    msg.setDestinationEntity(95U);
    msg.value = 0.613509863338;
    msg.confidence = 0.095053038169;
    msg.opmodes.assign("SWXRYYNSMJFSAVAJAOSQGCRXSNHQRUGNCXBFLASEVLPIWYKCYGCAHNFAVQCTEIKCPUVUIIMTETKDQJFWQRWOPQASJE");

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
    msg.setTimeStamp(0.190114941905);
    msg.setSource(21764U);
    msg.setSourceEntity(181U);
    msg.setDestination(33870U);
    msg.setDestinationEntity(238U);
    msg.value = 0.324578858117;
    msg.confidence = 0.471437511828;
    msg.opmodes.assign("SXQJOWYIRKTIPEBZIDHFJVWHQYEZEAKBYOPCBDPHDDUBQLVFKNPGCLRCLJMARYOVTXBZTDFNGMQMFIVPZPSNXMBEOPPJSWHQUGGMUFMGVUCTEVRNOLGNXLCYKAWTTJRVSUBYCMQYKZYOZLDIGDDHDSXURLHKMVLSZKXFHFJAUEEWGIINXPCIVWRHCLXBITWZEYNTBHKQROKZQDVARUXILOESTAR");

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
    msg.setTimeStamp(0.115685358026);
    msg.setSource(39663U);
    msg.setSourceEntity(19U);
    msg.setDestination(25575U);
    msg.setDestinationEntity(172U);
    msg.value = 0.634056303649;
    msg.confidence = 0.179111263192;
    msg.opmodes.assign("MAAKGFYATUHSWWDNFM");

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
    msg.setTimeStamp(0.668525641916);
    msg.setSource(55965U);
    msg.setSourceEntity(88U);
    msg.setDestination(30250U);
    msg.setDestinationEntity(43U);
    msg.itow = 1796842840U;
    msg.lat = 0.587505111874;
    msg.lon = 0.120748738284;
    msg.height_ell = 0.636206273268;
    msg.height_sea = 0.138474958044;
    msg.hacc = 0.832704123413;
    msg.vacc = 0.449979347676;
    msg.vel_n = 0.926407555089;
    msg.vel_e = 0.140685115801;
    msg.vel_d = 0.429703943858;
    msg.speed = 0.165476085778;
    msg.gspeed = 0.850732234667;
    msg.heading = 0.5233048826;
    msg.sacc = 0.030742478002;
    msg.cacc = 0.778619291549;

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
    msg.setTimeStamp(0.448042694706);
    msg.setSource(19756U);
    msg.setSourceEntity(88U);
    msg.setDestination(14210U);
    msg.setDestinationEntity(2U);
    msg.itow = 3843944494U;
    msg.lat = 0.954346674927;
    msg.lon = 0.753520732846;
    msg.height_ell = 0.960079711912;
    msg.height_sea = 0.555587332963;
    msg.hacc = 0.695472181454;
    msg.vacc = 0.616903363473;
    msg.vel_n = 0.932355844449;
    msg.vel_e = 0.919727384463;
    msg.vel_d = 0.127754709389;
    msg.speed = 0.207141965603;
    msg.gspeed = 0.721789340918;
    msg.heading = 0.681767992076;
    msg.sacc = 0.115247024171;
    msg.cacc = 0.371833618804;

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
    msg.setTimeStamp(0.0580455438107);
    msg.setSource(38299U);
    msg.setSourceEntity(232U);
    msg.setDestination(64223U);
    msg.setDestinationEntity(50U);
    msg.itow = 2212561860U;
    msg.lat = 0.472883185202;
    msg.lon = 0.802362878764;
    msg.height_ell = 0.556333005337;
    msg.height_sea = 0.28122787405;
    msg.hacc = 0.22081356655;
    msg.vacc = 0.843034390246;
    msg.vel_n = 0.607297282128;
    msg.vel_e = 0.982391655969;
    msg.vel_d = 0.703282862987;
    msg.speed = 0.339508136582;
    msg.gspeed = 0.331038177665;
    msg.heading = 0.696418733147;
    msg.sacc = 0.406528209719;
    msg.cacc = 0.35147112817;

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
    msg.setTimeStamp(0.877595104869);
    msg.setSource(49510U);
    msg.setSourceEntity(176U);
    msg.setDestination(20391U);
    msg.setDestinationEntity(201U);
    msg.id = 21U;
    msg.value = 0.253390616908;

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
    msg.setTimeStamp(0.980702634488);
    msg.setSource(7777U);
    msg.setSourceEntity(92U);
    msg.setDestination(30582U);
    msg.setDestinationEntity(56U);
    msg.id = 20U;
    msg.value = 0.108701585514;

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
    msg.setTimeStamp(0.0604477520006);
    msg.setSource(56498U);
    msg.setSourceEntity(230U);
    msg.setDestination(47601U);
    msg.setDestinationEntity(33U);
    msg.id = 254U;
    msg.value = 0.8886200436;

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
    msg.setTimeStamp(0.382248973609);
    msg.setSource(28710U);
    msg.setSourceEntity(74U);
    msg.setDestination(13173U);
    msg.setDestinationEntity(19U);
    msg.x = 0.999572691052;
    msg.y = 0.442007964654;
    msg.z = 0.988567436287;
    msg.phi = 0.862455384951;
    msg.theta = 0.0993937636548;
    msg.psi = 0.941477043359;

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
    msg.setTimeStamp(0.407685313473);
    msg.setSource(20360U);
    msg.setSourceEntity(227U);
    msg.setDestination(15892U);
    msg.setDestinationEntity(29U);
    msg.x = 0.13394030235;
    msg.y = 0.980884767613;
    msg.z = 0.328023950874;
    msg.phi = 0.491440011651;
    msg.theta = 0.471967881582;
    msg.psi = 0.397369981196;

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
    msg.setTimeStamp(0.0720901509367);
    msg.setSource(8428U);
    msg.setSourceEntity(92U);
    msg.setDestination(63062U);
    msg.setDestinationEntity(223U);
    msg.x = 0.791811496461;
    msg.y = 0.35124141204;
    msg.z = 0.220654834247;
    msg.phi = 0.247034797202;
    msg.theta = 0.965455401734;
    msg.psi = 0.161182912786;

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
    msg.setTimeStamp(0.646758328614);
    msg.setSource(47482U);
    msg.setSourceEntity(9U);
    msg.setDestination(4163U);
    msg.setDestinationEntity(4U);
    msg.beam_width = 0.602355848224;
    msg.beam_height = 0.768970263997;

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
    msg.setTimeStamp(0.519966716837);
    msg.setSource(5953U);
    msg.setSourceEntity(75U);
    msg.setDestination(31643U);
    msg.setDestinationEntity(39U);
    msg.beam_width = 0.331263205282;
    msg.beam_height = 0.332083624214;

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
    msg.setTimeStamp(0.463714166502);
    msg.setSource(6676U);
    msg.setSourceEntity(230U);
    msg.setDestination(10734U);
    msg.setDestinationEntity(243U);
    msg.beam_width = 0.575149681356;
    msg.beam_height = 0.619277203596;

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
    msg.setTimeStamp(0.675916661866);
    msg.setSource(45783U);
    msg.setSourceEntity(20U);
    msg.setDestination(53151U);
    msg.setDestinationEntity(248U);
    msg.sane = 45U;

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
    msg.setTimeStamp(0.509604908931);
    msg.setSource(48371U);
    msg.setSourceEntity(99U);
    msg.setDestination(18864U);
    msg.setDestinationEntity(74U);
    msg.sane = 158U;

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
    msg.setTimeStamp(0.929805699007);
    msg.setSource(42148U);
    msg.setSourceEntity(162U);
    msg.setDestination(35449U);
    msg.setDestinationEntity(209U);
    msg.sane = 148U;

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
    msg.setTimeStamp(0.511532800382);
    msg.setSource(50124U);
    msg.setSourceEntity(0U);
    msg.setDestination(30934U);
    msg.setDestinationEntity(92U);
    msg.value = 0.775740712596;

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
    msg.setTimeStamp(0.371601742244);
    msg.setSource(57609U);
    msg.setSourceEntity(179U);
    msg.setDestination(6773U);
    msg.setDestinationEntity(53U);
    msg.value = 0.941818556772;

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
    msg.setTimeStamp(0.756169727811);
    msg.setSource(43789U);
    msg.setSourceEntity(188U);
    msg.setDestination(52195U);
    msg.setDestinationEntity(153U);
    msg.value = 0.831110497463;

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
    msg.setTimeStamp(0.732201747154);
    msg.setSource(53570U);
    msg.setSourceEntity(123U);
    msg.setDestination(51448U);
    msg.setDestinationEntity(130U);
    msg.value = 0.531883939423;

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
    msg.setTimeStamp(0.390181460107);
    msg.setSource(28687U);
    msg.setSourceEntity(28U);
    msg.setDestination(49309U);
    msg.setDestinationEntity(184U);
    msg.value = 0.362187104791;

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
    msg.setTimeStamp(0.852214725695);
    msg.setSource(17978U);
    msg.setSourceEntity(49U);
    msg.setDestination(17090U);
    msg.setDestinationEntity(213U);
    msg.value = 0.596908218802;

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
    msg.setTimeStamp(0.637990206403);
    msg.setSource(2843U);
    msg.setSourceEntity(40U);
    msg.setDestination(60267U);
    msg.setDestinationEntity(100U);
    msg.value = 0.908573938443;

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
    msg.setTimeStamp(0.457668534312);
    msg.setSource(2151U);
    msg.setSourceEntity(193U);
    msg.setDestination(52842U);
    msg.setDestinationEntity(29U);
    msg.value = 0.0607323571948;

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
    msg.setTimeStamp(0.711113293786);
    msg.setSource(28432U);
    msg.setSourceEntity(149U);
    msg.setDestination(47092U);
    msg.setDestinationEntity(68U);
    msg.value = 0.655502387379;

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
    msg.setTimeStamp(0.875018591379);
    msg.setSource(7929U);
    msg.setSourceEntity(35U);
    msg.setDestination(62618U);
    msg.setDestinationEntity(179U);
    msg.value = 0.298013372696;

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
    msg.setTimeStamp(0.136380072586);
    msg.setSource(41991U);
    msg.setSourceEntity(110U);
    msg.setDestination(44111U);
    msg.setDestinationEntity(74U);
    msg.value = 0.111567347766;

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
    msg.setTimeStamp(0.672282197011);
    msg.setSource(50030U);
    msg.setSourceEntity(206U);
    msg.setDestination(9925U);
    msg.setDestinationEntity(17U);
    msg.value = 0.237539518141;

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
    msg.setTimeStamp(0.174653127501);
    msg.setSource(32370U);
    msg.setSourceEntity(244U);
    msg.setDestination(18937U);
    msg.setDestinationEntity(227U);
    msg.value = 0.0008623211993;

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
    msg.setTimeStamp(0.986622302259);
    msg.setSource(25432U);
    msg.setSourceEntity(219U);
    msg.setDestination(4547U);
    msg.setDestinationEntity(27U);
    msg.value = 0.796200103081;

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
    msg.setTimeStamp(0.737520527975);
    msg.setSource(49963U);
    msg.setSourceEntity(176U);
    msg.setDestination(57686U);
    msg.setDestinationEntity(175U);
    msg.value = 0.816127527653;

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
    msg.setTimeStamp(0.765727904155);
    msg.setSource(30899U);
    msg.setSourceEntity(249U);
    msg.setDestination(38944U);
    msg.setDestinationEntity(55U);
    msg.value = 0.783608710591;

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
    msg.setTimeStamp(0.391852209);
    msg.setSource(37408U);
    msg.setSourceEntity(216U);
    msg.setDestination(53020U);
    msg.setDestinationEntity(213U);
    msg.value = 0.543658394799;

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
    msg.setTimeStamp(0.101081390446);
    msg.setSource(21808U);
    msg.setSourceEntity(182U);
    msg.setDestination(49238U);
    msg.setDestinationEntity(39U);
    msg.value = 0.496609971866;

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
    msg.setTimeStamp(0.990777645529);
    msg.setSource(62751U);
    msg.setSourceEntity(134U);
    msg.setDestination(43171U);
    msg.setDestinationEntity(24U);
    msg.value = 0.381977261815;

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
    msg.setTimeStamp(0.477129898034);
    msg.setSource(26244U);
    msg.setSourceEntity(57U);
    msg.setDestination(43793U);
    msg.setDestinationEntity(35U);
    msg.value = 0.329933796134;

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
    msg.setTimeStamp(0.466357289086);
    msg.setSource(41981U);
    msg.setSourceEntity(33U);
    msg.setDestination(27139U);
    msg.setDestinationEntity(37U);
    msg.value = 0.203091673729;

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
    msg.setTimeStamp(0.574608753405);
    msg.setSource(31943U);
    msg.setSourceEntity(127U);
    msg.setDestination(13897U);
    msg.setDestinationEntity(27U);
    msg.value = 0.0518491222832;

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
    msg.setTimeStamp(0.633685961159);
    msg.setSource(41896U);
    msg.setSourceEntity(151U);
    msg.setDestination(13420U);
    msg.setDestinationEntity(34U);
    msg.value = 0.75193082957;

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
    msg.setTimeStamp(0.989412236045);
    msg.setSource(49736U);
    msg.setSourceEntity(7U);
    msg.setDestination(20771U);
    msg.setDestinationEntity(227U);
    msg.value = 0.830604738598;

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
    msg.setTimeStamp(0.51338498956);
    msg.setSource(4168U);
    msg.setSourceEntity(145U);
    msg.setDestination(18781U);
    msg.setDestinationEntity(188U);
    msg.validity = 28150U;
    msg.type = 100U;
    msg.tow = 3389148015U;
    msg.base_lat = 0.770346490059;
    msg.base_lon = 0.372006845484;
    msg.base_height = 0.476369738512;
    msg.n = 0.805886613683;
    msg.e = 0.0828210082432;
    msg.d = 0.526305549235;
    msg.v_n = 0.253985973374;
    msg.v_e = 0.920309991846;
    msg.v_d = 0.416212709893;
    msg.satellites = 115U;
    msg.iar_hyp = 25388U;
    msg.iar_ratio = 0.456303768817;

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
    msg.setTimeStamp(0.293868454901);
    msg.setSource(14539U);
    msg.setSourceEntity(64U);
    msg.setDestination(58148U);
    msg.setDestinationEntity(127U);
    msg.validity = 27790U;
    msg.type = 44U;
    msg.tow = 1649233718U;
    msg.base_lat = 0.118432890997;
    msg.base_lon = 0.980189975418;
    msg.base_height = 0.376477068919;
    msg.n = 0.250980664674;
    msg.e = 0.987004864357;
    msg.d = 0.829836988511;
    msg.v_n = 0.952527970483;
    msg.v_e = 0.397224305492;
    msg.v_d = 0.295229119005;
    msg.satellites = 84U;
    msg.iar_hyp = 3654U;
    msg.iar_ratio = 0.265122235855;

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
    msg.setTimeStamp(0.926321627337);
    msg.setSource(46234U);
    msg.setSourceEntity(174U);
    msg.setDestination(23689U);
    msg.setDestinationEntity(35U);
    msg.validity = 46389U;
    msg.type = 16U;
    msg.tow = 1394640975U;
    msg.base_lat = 0.461347824127;
    msg.base_lon = 0.406657730483;
    msg.base_height = 0.496590361628;
    msg.n = 0.541767887883;
    msg.e = 0.564992470468;
    msg.d = 0.387042955855;
    msg.v_n = 0.834769920915;
    msg.v_e = 0.0409674853991;
    msg.v_d = 0.102788687323;
    msg.satellites = 137U;
    msg.iar_hyp = 56738U;
    msg.iar_ratio = 0.650218412489;

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
    msg.setTimeStamp(0.00244695364542);
    msg.setSource(20413U);
    msg.setSourceEntity(145U);
    msg.setDestination(65170U);
    msg.setDestinationEntity(230U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.572893768469;
    tmp_msg_0.lon = 0.935560816732;
    tmp_msg_0.height = 0.883225573267;
    tmp_msg_0.x = 0.0590835675592;
    tmp_msg_0.y = 0.45808256225;
    tmp_msg_0.z = 0.020771379605;
    tmp_msg_0.phi = 0.30972897712;
    tmp_msg_0.theta = 0.713991650419;
    tmp_msg_0.psi = 0.520421733555;
    tmp_msg_0.u = 0.577543888802;
    tmp_msg_0.v = 0.611435688889;
    tmp_msg_0.w = 0.974132741853;
    tmp_msg_0.vx = 0.993733377475;
    tmp_msg_0.vy = 0.324440034826;
    tmp_msg_0.vz = 0.963331843227;
    tmp_msg_0.p = 0.909682433125;
    tmp_msg_0.q = 0.540062791229;
    tmp_msg_0.r = 0.553621717032;
    tmp_msg_0.depth = 0.231959339787;
    tmp_msg_0.alt = 0.727973917333;
    msg.state.set(tmp_msg_0);
    msg.type = 230U;

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
    msg.setTimeStamp(0.880745604987);
    msg.setSource(31864U);
    msg.setSourceEntity(56U);
    msg.setDestination(755U);
    msg.setDestinationEntity(212U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.785873170586;
    tmp_msg_0.lon = 0.932815001866;
    tmp_msg_0.height = 0.778548015016;
    tmp_msg_0.x = 0.245850848555;
    tmp_msg_0.y = 0.815599848146;
    tmp_msg_0.z = 0.95867210238;
    tmp_msg_0.phi = 0.563446477466;
    tmp_msg_0.theta = 0.962801710982;
    tmp_msg_0.psi = 0.830024175832;
    tmp_msg_0.u = 0.324992954957;
    tmp_msg_0.v = 0.737101868902;
    tmp_msg_0.w = 0.0968905213748;
    tmp_msg_0.vx = 0.440557179017;
    tmp_msg_0.vy = 0.19141614579;
    tmp_msg_0.vz = 0.256504412948;
    tmp_msg_0.p = 0.57723203226;
    tmp_msg_0.q = 0.631028974544;
    tmp_msg_0.r = 0.697121684025;
    tmp_msg_0.depth = 0.219031890991;
    tmp_msg_0.alt = 0.281931744165;
    msg.state.set(tmp_msg_0);
    msg.type = 129U;

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
    msg.setTimeStamp(0.00114712640479);
    msg.setSource(33185U);
    msg.setSourceEntity(187U);
    msg.setDestination(6883U);
    msg.setDestinationEntity(53U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.463502168316;
    tmp_msg_0.lon = 0.814381366689;
    tmp_msg_0.height = 0.6794084013;
    tmp_msg_0.x = 0.344895032807;
    tmp_msg_0.y = 0.641208114732;
    tmp_msg_0.z = 0.210414796854;
    tmp_msg_0.phi = 0.822147535618;
    tmp_msg_0.theta = 0.517440885001;
    tmp_msg_0.psi = 0.5849137752;
    tmp_msg_0.u = 0.00728976077983;
    tmp_msg_0.v = 0.0756621391597;
    tmp_msg_0.w = 0.154045135233;
    tmp_msg_0.vx = 0.723902497501;
    tmp_msg_0.vy = 0.752036575333;
    tmp_msg_0.vz = 0.519722160532;
    tmp_msg_0.p = 0.941524022029;
    tmp_msg_0.q = 0.280338641646;
    tmp_msg_0.r = 0.629233941615;
    tmp_msg_0.depth = 0.8940737768;
    tmp_msg_0.alt = 0.236604698404;
    msg.state.set(tmp_msg_0);
    msg.type = 127U;

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
    msg.setTimeStamp(0.153715336142);
    msg.setSource(47957U);
    msg.setSourceEntity(187U);
    msg.setDestination(9174U);
    msg.setDestinationEntity(105U);
    msg.value = 0.611952137921;

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
    msg.setTimeStamp(0.112308415407);
    msg.setSource(28321U);
    msg.setSourceEntity(176U);
    msg.setDestination(51886U);
    msg.setDestinationEntity(115U);
    msg.value = 0.497671887917;

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
    msg.setTimeStamp(0.283381401252);
    msg.setSource(60527U);
    msg.setSourceEntity(153U);
    msg.setDestination(50943U);
    msg.setDestinationEntity(126U);
    msg.value = 0.859332301492;

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
    msg.setTimeStamp(0.716878337649);
    msg.setSource(38150U);
    msg.setSourceEntity(33U);
    msg.setDestination(20644U);
    msg.setDestinationEntity(233U);
    msg.value = 0.274905720647;

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
    msg.setTimeStamp(0.120275739209);
    msg.setSource(53285U);
    msg.setSourceEntity(13U);
    msg.setDestination(13382U);
    msg.setDestinationEntity(152U);
    msg.value = 0.709509392504;

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
    msg.setTimeStamp(0.953725139444);
    msg.setSource(37230U);
    msg.setSourceEntity(197U);
    msg.setDestination(54457U);
    msg.setDestinationEntity(3U);
    msg.value = 0.0236156869209;

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
    msg.setTimeStamp(0.746219103079);
    msg.setSource(53427U);
    msg.setSourceEntity(83U);
    msg.setDestination(22031U);
    msg.setDestinationEntity(160U);
    msg.value = 0.316165963377;

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
    msg.setTimeStamp(0.204217470091);
    msg.setSource(23515U);
    msg.setSourceEntity(5U);
    msg.setDestination(41072U);
    msg.setDestinationEntity(95U);
    msg.value = 0.755246180377;

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
    msg.setTimeStamp(0.922139737931);
    msg.setSource(41668U);
    msg.setSourceEntity(122U);
    msg.setDestination(35193U);
    msg.setDestinationEntity(14U);
    msg.value = 0.790885078126;

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
    msg.setTimeStamp(0.349261583647);
    msg.setSource(46847U);
    msg.setSourceEntity(200U);
    msg.setDestination(61607U);
    msg.setDestinationEntity(75U);
    msg.value = 0.78746263304;

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
    msg.setTimeStamp(0.310980224206);
    msg.setSource(15797U);
    msg.setSourceEntity(131U);
    msg.setDestination(55631U);
    msg.setDestinationEntity(135U);
    msg.value = 0.271168147231;

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
    msg.setTimeStamp(0.339277971097);
    msg.setSource(31716U);
    msg.setSourceEntity(203U);
    msg.setDestination(55022U);
    msg.setDestinationEntity(229U);
    msg.value = 0.726043241429;

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
    msg.setTimeStamp(0.729974799171);
    msg.setSource(12708U);
    msg.setSourceEntity(195U);
    msg.setDestination(2928U);
    msg.setDestinationEntity(192U);
    msg.value = 0.664718689547;

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
    msg.setTimeStamp(0.758988473059);
    msg.setSource(7925U);
    msg.setSourceEntity(186U);
    msg.setDestination(57877U);
    msg.setDestinationEntity(212U);
    msg.value = 0.177597868935;

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
    msg.setTimeStamp(0.260132114382);
    msg.setSource(63557U);
    msg.setSourceEntity(12U);
    msg.setDestination(36696U);
    msg.setDestinationEntity(4U);
    msg.value = 0.512141485612;

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
    msg.setTimeStamp(0.718545968632);
    msg.setSource(40214U);
    msg.setSourceEntity(158U);
    msg.setDestination(40578U);
    msg.setDestinationEntity(123U);
    msg.id = 148U;
    msg.zoom = 167U;
    msg.action = 176U;

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
    msg.setTimeStamp(0.167353341334);
    msg.setSource(31042U);
    msg.setSourceEntity(11U);
    msg.setDestination(53009U);
    msg.setDestinationEntity(223U);
    msg.id = 105U;
    msg.zoom = 179U;
    msg.action = 108U;

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
    msg.setTimeStamp(0.429310526835);
    msg.setSource(57186U);
    msg.setSourceEntity(246U);
    msg.setDestination(21582U);
    msg.setDestinationEntity(72U);
    msg.id = 86U;
    msg.zoom = 53U;
    msg.action = 35U;

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
    msg.setTimeStamp(0.941768305857);
    msg.setSource(57979U);
    msg.setSourceEntity(154U);
    msg.setDestination(61878U);
    msg.setDestinationEntity(36U);
    msg.id = 133U;
    msg.value = 0.383235383298;

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
    msg.setTimeStamp(0.0443201081315);
    msg.setSource(11029U);
    msg.setSourceEntity(159U);
    msg.setDestination(53625U);
    msg.setDestinationEntity(131U);
    msg.id = 227U;
    msg.value = 0.729019404859;

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
    msg.setTimeStamp(0.144020775488);
    msg.setSource(33829U);
    msg.setSourceEntity(183U);
    msg.setDestination(4738U);
    msg.setDestinationEntity(105U);
    msg.id = 21U;
    msg.value = 0.508563432004;

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
    msg.setTimeStamp(0.865903687478);
    msg.setSource(51181U);
    msg.setSourceEntity(0U);
    msg.setDestination(18122U);
    msg.setDestinationEntity(227U);
    msg.id = 143U;
    msg.value = 0.980872620354;

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
    msg.setTimeStamp(0.68952935705);
    msg.setSource(55550U);
    msg.setSourceEntity(1U);
    msg.setDestination(20132U);
    msg.setDestinationEntity(178U);
    msg.id = 169U;
    msg.value = 0.728812535666;

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
    msg.setTimeStamp(0.376093469639);
    msg.setSource(6273U);
    msg.setSourceEntity(9U);
    msg.setDestination(6423U);
    msg.setDestinationEntity(33U);
    msg.id = 176U;
    msg.value = 0.165104298534;

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
    msg.setTimeStamp(0.848350764307);
    msg.setSource(38228U);
    msg.setSourceEntity(222U);
    msg.setDestination(44957U);
    msg.setDestinationEntity(68U);
    msg.id = 37U;
    msg.angle = 0.637333746171;

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
    msg.setTimeStamp(0.117951599884);
    msg.setSource(57640U);
    msg.setSourceEntity(39U);
    msg.setDestination(18999U);
    msg.setDestinationEntity(41U);
    msg.id = 237U;
    msg.angle = 0.304555905437;

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
    msg.setTimeStamp(0.858427207139);
    msg.setSource(58692U);
    msg.setSourceEntity(192U);
    msg.setDestination(44421U);
    msg.setDestinationEntity(134U);
    msg.id = 205U;
    msg.angle = 0.759231621714;

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
    msg.setTimeStamp(0.758725622821);
    msg.setSource(29648U);
    msg.setSourceEntity(2U);
    msg.setDestination(12211U);
    msg.setDestinationEntity(5U);
    msg.op = 21U;
    msg.actions.assign("YDBOYLXJHKGBMATRMUNBENYYJOGKYIKQGWWOTKHLGXHEXASTUWXCXZFWOPOKUQULTEJTTKIILHXJSLBIUTRJCEBMYTDEAOQQSLFQWQABMJVVNNROZZDRADVZVVVSFZLSCITBMFPKRZZUSELUMWABGNNREWHFMPHVMFDSGJXNHCFGDFBQSTCYJIQPCGWEPUCWDPDIWZGOMUPNJIYVEQOOXDVGRXNVRLHRAPAK");

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
    msg.setTimeStamp(0.918196070136);
    msg.setSource(16947U);
    msg.setSourceEntity(101U);
    msg.setDestination(26439U);
    msg.setDestinationEntity(26U);
    msg.op = 208U;
    msg.actions.assign("VVVYOOFKTABYHOEKLMDUHGBTHVVBCRZVIYYJIQEAJDLHWJOIACBXUUQMQTGCOJLPABRFGRDZJNZNQWAMGFJNSVGAWSYXBRQOXLWGLYKWELSPQXBJL");

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
    msg.setTimeStamp(0.718058672734);
    msg.setSource(38284U);
    msg.setSourceEntity(75U);
    msg.setDestination(47079U);
    msg.setDestinationEntity(163U);
    msg.op = 50U;
    msg.actions.assign("EXOMAUKOMNEUIQGGUGMXVDYMETONXSRFEUOPVLHITAEJIBOREQIWILCO");

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
    msg.setTimeStamp(0.638723479092);
    msg.setSource(421U);
    msg.setSourceEntity(37U);
    msg.setDestination(40797U);
    msg.setDestinationEntity(151U);
    msg.actions.assign("IEICGOXZWEUEBKNPRLKKXJFZLCVOQOYTBCFDASBQVBGKAYVVFMGGZVLIHYXWCJTSKVAPEXDYZASDOHGAMJLXBUCNWRYJULOEPYDANGJXNIZYIIWFGMQFCFQQPSGTMTAWHZDDHVDNHNJKUXFWIKBYHUHQSRGQRRTWGNYELAOIEJHOFKMWXMYIRPDJVQNFRUBLUCXC");

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
    msg.setTimeStamp(0.331931563843);
    msg.setSource(63517U);
    msg.setSourceEntity(170U);
    msg.setDestination(23094U);
    msg.setDestinationEntity(46U);
    msg.actions.assign("QTTDNICRISMIJRFWZSOYZVAWRP");

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
    msg.setTimeStamp(0.159504894698);
    msg.setSource(6763U);
    msg.setSourceEntity(232U);
    msg.setDestination(41671U);
    msg.setDestinationEntity(213U);
    msg.actions.assign("BEZIXYKOKKDFJVFPLALIQTFNSUICQTJJILYBIGBGGFZYGTPPQPNSNOSATDBQHERMGBMYPSWQ");

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
    msg.setTimeStamp(0.0478954183929);
    msg.setSource(44213U);
    msg.setSourceEntity(73U);
    msg.setDestination(65150U);
    msg.setDestinationEntity(81U);
    msg.button = 144U;
    msg.value = 74U;

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
    msg.setTimeStamp(0.630399401672);
    msg.setSource(18575U);
    msg.setSourceEntity(37U);
    msg.setDestination(39787U);
    msg.setDestinationEntity(132U);
    msg.button = 40U;
    msg.value = 249U;

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
    msg.setTimeStamp(0.601398060833);
    msg.setSource(58826U);
    msg.setSourceEntity(113U);
    msg.setDestination(40231U);
    msg.setDestinationEntity(74U);
    msg.button = 134U;
    msg.value = 228U;

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
    msg.setTimeStamp(0.783097176718);
    msg.setSource(56672U);
    msg.setSourceEntity(135U);
    msg.setDestination(60625U);
    msg.setDestinationEntity(131U);
    msg.op = 230U;
    msg.text.assign("GGAFXFESELNUXZYKYNZRLODLFCTLJXTPJRZQLTDVZYTGXSMXKQXNXUBXENBNVYWPDFCSOHUOFCPIRQDHNQEBVISAFCMNQKOGQGSEOPLKLGLTWJOWNYAJDMDUFDKMHVWILHJCGDPZFERAVDBNUMYBCWJQISVZAHTJUJMBKLAIOFHBQHZRTKDVSKRMOUPVVRUAWWIHZY");

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
    msg.setTimeStamp(0.0664878035033);
    msg.setSource(2833U);
    msg.setSourceEntity(191U);
    msg.setDestination(27628U);
    msg.setDestinationEntity(129U);
    msg.op = 243U;
    msg.text.assign("GZYEJUIHQKIVIXWFXDVRCNLFRCZNMBTQBHSHJOMXTMBPPCTSLHFEYNKLUWXYQZFINJHRMCKEJMDNCKJUAUHSIFPZOFKFSGQYAYVXDOWDUJRBIYUUQFQEFAAIMHROMCGREG");

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
    msg.setTimeStamp(0.330182843297);
    msg.setSource(44375U);
    msg.setSourceEntity(196U);
    msg.setDestination(18969U);
    msg.setDestinationEntity(31U);
    msg.op = 43U;
    msg.text.assign("DSDJFTKXETDPYTVEJZGITZSHRNNCXGXTFVHWGUNYBTSPONJQVEZDOYUMYVSKMUIHGLMCWIXNSBGMPUUYJTJYQWISBASUWDVALSOFJNACEPAFQMAZXSXAXQEOWXCGLCBDFIDGGRIRHPKAWNBPMULLRONJXMAEPCVRKZTRRREQGZBQNFCLWIIDEQESVFBHCZOMKACXZYKPWBHUHJYZUDFLYWKJJNPOWOF");

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
    msg.setTimeStamp(0.457095293252);
    msg.setSource(32471U);
    msg.setSourceEntity(175U);
    msg.setDestination(3993U);
    msg.setDestinationEntity(139U);
    msg.op = 169U;
    msg.time_remain = 0.150419620467;
    msg.sched_time = 0.832646934921;

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
    msg.setTimeStamp(0.975961067034);
    msg.setSource(19223U);
    msg.setSourceEntity(2U);
    msg.setDestination(19827U);
    msg.setDestinationEntity(126U);
    msg.op = 197U;
    msg.time_remain = 0.242422327839;
    msg.sched_time = 0.555553616745;

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
    msg.setTimeStamp(0.429393600394);
    msg.setSource(52007U);
    msg.setSourceEntity(224U);
    msg.setDestination(19171U);
    msg.setDestinationEntity(43U);
    msg.op = 75U;
    msg.time_remain = 0.0269391090508;
    msg.sched_time = 0.849427763035;

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
    msg.setTimeStamp(0.373070779203);
    msg.setSource(60816U);
    msg.setSourceEntity(181U);
    msg.setDestination(12410U);
    msg.setDestinationEntity(25U);
    msg.name.assign("WHABASSQOBLDICZNVFMOPMYSVXPNEGKYTDHGBYFYTBXFOLZQZTGMIJZRPQNYRVRRDCCJAKX");
    msg.op = 203U;
    msg.sched_time = 0.708671980564;

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
    msg.setTimeStamp(0.228550059755);
    msg.setSource(7536U);
    msg.setSourceEntity(21U);
    msg.setDestination(6500U);
    msg.setDestinationEntity(216U);
    msg.name.assign("AEIJUXNUQVBPVDYEHUPNQSMTDGGHNRWMUJDZACPBZEWFTZZYRETWWLBJBKFVTYBCUKXYFGBAGUMQNJACGJCWUFZOVIGCO");
    msg.op = 36U;
    msg.sched_time = 0.606993351435;

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
    msg.setTimeStamp(0.293079659309);
    msg.setSource(14885U);
    msg.setSourceEntity(158U);
    msg.setDestination(58356U);
    msg.setDestinationEntity(158U);
    msg.name.assign("WQCXGSKICGSEBIVKFPJVROWZXDIYFYJTPAIEZNKJEDBATHGVOZULIXYOPSUQJFYUVLAYDNGFYAPIYFMUMDGHWWDMCDLZCHCOLTXFALQDTOEMNYZKWUTCBAQHUVMNROKFMMLNNUZIZAVBGBEXSIIYSGJTNRXKXLJC");
    msg.op = 53U;
    msg.sched_time = 0.496593952391;

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
    msg.setTimeStamp(0.70008323125);
    msg.setSource(17022U);
    msg.setSourceEntity(93U);
    msg.setDestination(60246U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.906219167314);
    msg.setSource(21813U);
    msg.setSourceEntity(14U);
    msg.setDestination(28299U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.233690910344);
    msg.setSource(60493U);
    msg.setSourceEntity(224U);
    msg.setDestination(36474U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.707167168504);
    msg.setSource(19416U);
    msg.setSourceEntity(236U);
    msg.setDestination(51050U);
    msg.setDestinationEntity(159U);
    msg.name.assign("CMGFQLGNSPHNGTEMTSRNYBWEVSIXKLOJAUYMPQZUURDIPYPREVCOOTFFVNDKZZWKEZCZDCFFRQEMTJJFIWUSGWBJPONZNWWEJLABAHIGMQLURCWHYOHAKTHUIREIHBNMBOPDCCGLOZZXXSYHNTC");
    msg.state = 178U;

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
    msg.setTimeStamp(0.0958423681082);
    msg.setSource(20138U);
    msg.setSourceEntity(156U);
    msg.setDestination(7955U);
    msg.setDestinationEntity(4U);
    msg.name.assign("KESOZMUHKALUKSGCMXCNHSYVAMYPJYFSXZQITMKHTENGBQJRDCPJGYOBUNDVGAURPOSBFQJWGUDZXMCXODNHCZASWOWQLWRKEXFPPYBFPYEHNNPRSIZGHPVVBYUGZLTSFWIRJCCMABIXLJDDQENMRVCSUDGUMZZAITYESWJDKHKOQUODXQWEYZAHEFQFXOCQJTKKTLNLULMTVJIJFVOVEGLVN");
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
    msg.setTimeStamp(0.899708230794);
    msg.setSource(59295U);
    msg.setSourceEntity(239U);
    msg.setDestination(51933U);
    msg.setDestinationEntity(132U);
    msg.name.assign("YRQBLETGCOSCWTILGBDYBJIKJKFRXFNHPJTUEETQPGVBLGAMADCQEUVFPCWLOBRIQZGYMIQWFRUVATCBHYZVNHPVCPN");
    msg.state = 202U;

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
    msg.setTimeStamp(0.810984282206);
    msg.setSource(51415U);
    msg.setSourceEntity(160U);
    msg.setDestination(27986U);
    msg.setDestinationEntity(53U);
    msg.name.assign("XFMETXCBQGVAYQAJYIMLXSWVZOUVSILRDCVUMVRDQFTDRANGMZOQVNHBAGYLSGCMPMGQHCTJZSOEBRZEUXLPUNWHDLVH");
    msg.value = 117U;

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
    msg.setTimeStamp(0.763663575354);
    msg.setSource(38891U);
    msg.setSourceEntity(220U);
    msg.setDestination(57625U);
    msg.setDestinationEntity(91U);
    msg.name.assign("XUSPXRTWPOPDMQESZPCAUKXXUXBIXADSWIYPBDHOCHBLDBQYLCFABYEFIWEJGRHMGJTKPBAVDMQBNZPRYWISCGPXHDJFCFEHOTBCSQGKSKAZXMKJWNRTLMSVVQPHNOCWNATDIMSYFIEMWAONJUFYVZWUHVYZDOLMMNHFGLNZTAODBVGFEIQTVUZKCQJRLILCLKQUJCEGXZORMOUNIWSKKZTUEFUZXJGTVSKAHVABRJTPEYWVGGILE");
    msg.value = 3U;

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
    msg.setTimeStamp(0.129456880254);
    msg.setSource(36122U);
    msg.setSourceEntity(233U);
    msg.setDestination(39128U);
    msg.setDestinationEntity(220U);
    msg.name.assign("GFFXWZROFHXQBHJTCHCHRFZWMSIPLXGBOTJOREVNCNPINEVPGQBQAPSVKCAWLIQOMPWUQEYIZJUZIHUCFEXGYMEWVERDJYYBYMYSHPDEYNDIWKBOJFDXVTKDTSQNCCCMZOALKOVKBREYUMLPATBQBNICOUAFLTNUAGSMONSKZRUBGQKZELJMSSLARWUJFRXWATVZIP");
    msg.value = 133U;

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
    msg.setTimeStamp(0.850472455531);
    msg.setSource(12049U);
    msg.setSourceEntity(5U);
    msg.setDestination(8835U);
    msg.setDestinationEntity(3U);
    msg.name.assign("DNAAYGAPXAXUIO");

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
    msg.setTimeStamp(0.490743296333);
    msg.setSource(3815U);
    msg.setSourceEntity(190U);
    msg.setDestination(20700U);
    msg.setDestinationEntity(194U);
    msg.name.assign("TBIMDBRLJTHDMSPOUIJRHVDTCDKGPGROCJQMPRJUYERZOWFXQV");

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
    msg.setTimeStamp(0.839191559291);
    msg.setSource(53565U);
    msg.setSourceEntity(62U);
    msg.setDestination(12708U);
    msg.setDestinationEntity(28U);
    msg.name.assign("TVDOIHTULCCMQSEUKPFMKZTNHXPHVOPWHJGURGFSJJPPGFIQXFTYNDVKUMVRHEGEK");

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
    msg.setTimeStamp(0.631267622878);
    msg.setSource(47087U);
    msg.setSourceEntity(128U);
    msg.setDestination(64630U);
    msg.setDestinationEntity(2U);
    msg.name.assign("AOSAHGDYWYMQMJOFQAHWUOHCKBEQMBXPMJDCFKTKRBIJUNJJPKGXRYRGMNYPZEGVIETLGUBTPZBFREOBZTDHWSEOPTXDBYTWVVYMNEJXCFOQWVJAGLNVSTZPSVLNGAAKTZKPROCYYZIU");
    msg.value = 182U;

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
    msg.setTimeStamp(0.788710629855);
    msg.setSource(25800U);
    msg.setSourceEntity(200U);
    msg.setDestination(25730U);
    msg.setDestinationEntity(80U);
    msg.name.assign("DHUITCFFUZYWVOOADZGWCDWTVMHMEUGTZXXM");
    msg.value = 173U;

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
    msg.setTimeStamp(0.966992952064);
    msg.setSource(9696U);
    msg.setSourceEntity(153U);
    msg.setDestination(397U);
    msg.setDestinationEntity(160U);
    msg.name.assign("OQZWWBZQHKWSHGMFEOFWXEUPNQUCEJWKGCTURAZDCSWYOXAFFLIDTYVMOKSEXJALEVTBIUEWFUQKOBCTVZEWNGRXHACEOZUGOGBIFNFLRVPFKZYDWNYKQDLGKJPVGLLRVNLEPVHHKBRSOSAJIKGVRHYUTMXXTXCBQNAQYBNMIHQETSYDHMSQGFRAJDBOJSACPGCZBXJLURDMMRHBQJIOIPLWDNPMD");
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
    msg.setTimeStamp(0.00396626731299);
    msg.setSource(14064U);
    msg.setSourceEntity(78U);
    msg.setDestination(20447U);
    msg.setDestinationEntity(240U);
    msg.id = 206U;
    msg.period = 1769768846U;
    msg.duty_cycle = 824145268U;

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
    msg.setTimeStamp(0.113900865722);
    msg.setSource(3896U);
    msg.setSourceEntity(85U);
    msg.setDestination(22170U);
    msg.setDestinationEntity(90U);
    msg.id = 187U;
    msg.period = 1371169404U;
    msg.duty_cycle = 3301647170U;

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
    msg.setTimeStamp(0.390247662533);
    msg.setSource(58668U);
    msg.setSourceEntity(97U);
    msg.setDestination(15678U);
    msg.setDestinationEntity(162U);
    msg.id = 76U;
    msg.period = 1168524393U;
    msg.duty_cycle = 1064146208U;

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
    msg.setTimeStamp(0.869019353046);
    msg.setSource(8446U);
    msg.setSourceEntity(77U);
    msg.setDestination(250U);
    msg.setDestinationEntity(173U);
    msg.id = 117U;
    msg.period = 2854960771U;
    msg.duty_cycle = 1111778053U;

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
    msg.setTimeStamp(0.385869359714);
    msg.setSource(45302U);
    msg.setSourceEntity(215U);
    msg.setDestination(14913U);
    msg.setDestinationEntity(119U);
    msg.id = 128U;
    msg.period = 1246748210U;
    msg.duty_cycle = 378505882U;

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
    msg.setTimeStamp(0.134576825316);
    msg.setSource(60555U);
    msg.setSourceEntity(20U);
    msg.setDestination(1327U);
    msg.setDestinationEntity(186U);
    msg.id = 79U;
    msg.period = 1205509076U;
    msg.duty_cycle = 4132058525U;

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
    msg.setTimeStamp(0.326750214721);
    msg.setSource(39445U);
    msg.setSourceEntity(40U);
    msg.setDestination(29909U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.62636897881;
    msg.lon = 0.128868374161;
    msg.height = 0.656811267364;
    msg.x = 0.880494442185;
    msg.y = 0.978082935623;
    msg.z = 0.0445118861512;
    msg.phi = 0.783703084676;
    msg.theta = 0.271918919771;
    msg.psi = 0.0872985743379;
    msg.u = 0.88539121084;
    msg.v = 0.763208331816;
    msg.w = 0.360707262866;
    msg.vx = 0.499669515057;
    msg.vy = 0.38262814839;
    msg.vz = 0.388107729364;
    msg.p = 0.809341907127;
    msg.q = 0.0457485626626;
    msg.r = 0.393814839235;
    msg.depth = 0.796224216481;
    msg.alt = 0.608777662918;

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
    msg.setTimeStamp(0.320510331259);
    msg.setSource(37541U);
    msg.setSourceEntity(124U);
    msg.setDestination(10496U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.537968928661;
    msg.lon = 0.333952346751;
    msg.height = 0.0775308271483;
    msg.x = 0.489159635678;
    msg.y = 0.43718474179;
    msg.z = 0.833021230081;
    msg.phi = 0.843364686505;
    msg.theta = 0.340553936236;
    msg.psi = 0.223636359949;
    msg.u = 0.21536018975;
    msg.v = 0.358824261491;
    msg.w = 0.751635519646;
    msg.vx = 0.474318388586;
    msg.vy = 0.658940034624;
    msg.vz = 0.849321608757;
    msg.p = 0.0296911079205;
    msg.q = 0.758644606579;
    msg.r = 0.41314324685;
    msg.depth = 0.731473992804;
    msg.alt = 0.838065878434;

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
    msg.setTimeStamp(0.36371203378);
    msg.setSource(48962U);
    msg.setSourceEntity(196U);
    msg.setDestination(29349U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.622156154332;
    msg.lon = 0.895132149956;
    msg.height = 0.796465378647;
    msg.x = 0.681995640189;
    msg.y = 0.808389477804;
    msg.z = 0.778639505609;
    msg.phi = 0.998726249857;
    msg.theta = 0.615813170082;
    msg.psi = 0.494421587071;
    msg.u = 0.477057809862;
    msg.v = 0.28454823617;
    msg.w = 0.638534682585;
    msg.vx = 0.123550630952;
    msg.vy = 0.876014992643;
    msg.vz = 0.41469339441;
    msg.p = 0.562678092464;
    msg.q = 0.948391904621;
    msg.r = 0.396657573084;
    msg.depth = 0.354688601195;
    msg.alt = 0.790769783917;

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
    msg.setTimeStamp(0.807582572354);
    msg.setSource(31481U);
    msg.setSourceEntity(27U);
    msg.setDestination(8128U);
    msg.setDestinationEntity(6U);
    msg.x = 0.240116561169;
    msg.y = 0.633525843812;
    msg.z = 0.967035770111;

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
    msg.setTimeStamp(0.430392914673);
    msg.setSource(61931U);
    msg.setSourceEntity(239U);
    msg.setDestination(49882U);
    msg.setDestinationEntity(3U);
    msg.x = 0.138725584854;
    msg.y = 0.691504024961;
    msg.z = 0.0845113191253;

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
    msg.setTimeStamp(0.900723814838);
    msg.setSource(46722U);
    msg.setSourceEntity(240U);
    msg.setDestination(34838U);
    msg.setDestinationEntity(111U);
    msg.x = 0.718116924509;
    msg.y = 0.541583495131;
    msg.z = 0.338074546917;

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
    msg.setTimeStamp(0.39732337304);
    msg.setSource(13696U);
    msg.setSourceEntity(177U);
    msg.setDestination(54246U);
    msg.setDestinationEntity(180U);
    msg.value = 0.248338733316;

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
    msg.setTimeStamp(0.379140923362);
    msg.setSource(59863U);
    msg.setSourceEntity(137U);
    msg.setDestination(5779U);
    msg.setDestinationEntity(171U);
    msg.value = 0.620568603611;

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
    msg.setTimeStamp(0.448663225119);
    msg.setSource(43172U);
    msg.setSourceEntity(120U);
    msg.setDestination(29176U);
    msg.setDestinationEntity(128U);
    msg.value = 0.181446329585;

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
    msg.setTimeStamp(0.325621926239);
    msg.setSource(4579U);
    msg.setSourceEntity(127U);
    msg.setDestination(49104U);
    msg.setDestinationEntity(171U);
    msg.value = 0.980308949344;

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
    msg.setTimeStamp(0.246768131088);
    msg.setSource(9441U);
    msg.setSourceEntity(221U);
    msg.setDestination(54061U);
    msg.setDestinationEntity(249U);
    msg.value = 0.591783561876;

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
    msg.setTimeStamp(0.250509718047);
    msg.setSource(56568U);
    msg.setSourceEntity(109U);
    msg.setDestination(11849U);
    msg.setDestinationEntity(213U);
    msg.value = 0.55905780116;

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
    msg.setTimeStamp(0.107873435847);
    msg.setSource(61617U);
    msg.setSourceEntity(189U);
    msg.setDestination(27984U);
    msg.setDestinationEntity(250U);
    msg.x = 0.336136134326;
    msg.y = 0.697407075408;
    msg.z = 0.355519522265;
    msg.phi = 0.633170989061;
    msg.theta = 0.333187062688;
    msg.psi = 0.0932319459056;
    msg.p = 0.848329027924;
    msg.q = 0.713456943012;
    msg.r = 0.723901947663;
    msg.u = 0.672763389087;
    msg.v = 0.0650152079093;
    msg.w = 0.871982344319;
    msg.bias_psi = 0.876901461751;
    msg.bias_r = 0.0939060599236;

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
    msg.setTimeStamp(0.807835412996);
    msg.setSource(19222U);
    msg.setSourceEntity(157U);
    msg.setDestination(19121U);
    msg.setDestinationEntity(76U);
    msg.x = 0.739338045446;
    msg.y = 0.113249794607;
    msg.z = 0.599536430682;
    msg.phi = 0.546357832895;
    msg.theta = 0.38077276262;
    msg.psi = 0.984666250003;
    msg.p = 0.312465921252;
    msg.q = 0.961548527603;
    msg.r = 0.73324446143;
    msg.u = 0.989152539348;
    msg.v = 0.540667980592;
    msg.w = 0.636948312021;
    msg.bias_psi = 0.85977690296;
    msg.bias_r = 0.111110734947;

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
    msg.setTimeStamp(0.429159288334);
    msg.setSource(7916U);
    msg.setSourceEntity(96U);
    msg.setDestination(6731U);
    msg.setDestinationEntity(49U);
    msg.x = 0.577803635397;
    msg.y = 0.11721915693;
    msg.z = 0.76952185729;
    msg.phi = 0.401557910609;
    msg.theta = 0.0563967411803;
    msg.psi = 0.337211311744;
    msg.p = 0.157157601979;
    msg.q = 0.849749081904;
    msg.r = 0.759830973866;
    msg.u = 0.630314452123;
    msg.v = 0.0588648572623;
    msg.w = 0.644713143131;
    msg.bias_psi = 0.785762118718;
    msg.bias_r = 0.136656917889;

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
    msg.setTimeStamp(0.70557014947);
    msg.setSource(64640U);
    msg.setSourceEntity(174U);
    msg.setDestination(1466U);
    msg.setDestinationEntity(177U);
    msg.bias_psi = 0.322898935191;
    msg.bias_r = 0.560605398621;
    msg.cog = 0.799215945361;
    msg.cyaw = 0.893792759826;
    msg.lbl_rej_level = 0.733896119912;
    msg.gps_rej_level = 0.22640149707;
    msg.custom_x = 0.686489615629;
    msg.custom_y = 0.373177070179;
    msg.custom_z = 0.633613962675;

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
    msg.setTimeStamp(0.958598042099);
    msg.setSource(57481U);
    msg.setSourceEntity(0U);
    msg.setDestination(53122U);
    msg.setDestinationEntity(48U);
    msg.bias_psi = 0.800383227727;
    msg.bias_r = 0.300964230047;
    msg.cog = 0.583200889156;
    msg.cyaw = 0.0928782198166;
    msg.lbl_rej_level = 0.803211312573;
    msg.gps_rej_level = 0.629831332622;
    msg.custom_x = 0.892861312243;
    msg.custom_y = 0.759028831526;
    msg.custom_z = 0.255576865007;

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
    msg.setTimeStamp(0.502549598543);
    msg.setSource(57193U);
    msg.setSourceEntity(249U);
    msg.setDestination(59415U);
    msg.setDestinationEntity(3U);
    msg.bias_psi = 0.0874763234233;
    msg.bias_r = 0.708759551736;
    msg.cog = 0.387681432928;
    msg.cyaw = 0.872327158178;
    msg.lbl_rej_level = 0.0354529061636;
    msg.gps_rej_level = 0.363325934684;
    msg.custom_x = 0.33175070632;
    msg.custom_y = 0.0334111781829;
    msg.custom_z = 0.0690242894121;

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
    msg.setTimeStamp(0.637760855838);
    msg.setSource(1020U);
    msg.setSourceEntity(185U);
    msg.setDestination(31553U);
    msg.setDestinationEntity(79U);
    msg.utc_time = 0.242994836822;
    msg.reason = 195U;

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
    msg.setTimeStamp(0.297849243367);
    msg.setSource(61265U);
    msg.setSourceEntity(205U);
    msg.setDestination(33341U);
    msg.setDestinationEntity(46U);
    msg.utc_time = 0.762765065427;
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
    msg.setTimeStamp(0.346872887923);
    msg.setSource(44358U);
    msg.setSourceEntity(62U);
    msg.setDestination(23976U);
    msg.setDestinationEntity(183U);
    msg.utc_time = 0.418601655557;
    msg.reason = 34U;

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
    msg.setTimeStamp(0.441426352803);
    msg.setSource(64556U);
    msg.setSourceEntity(72U);
    msg.setDestination(49151U);
    msg.setDestinationEntity(48U);
    msg.id = 90U;
    msg.range = 0.880473767778;
    msg.acceptance = 173U;

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
    msg.setTimeStamp(0.698129248774);
    msg.setSource(60055U);
    msg.setSourceEntity(195U);
    msg.setDestination(35508U);
    msg.setDestinationEntity(52U);
    msg.id = 39U;
    msg.range = 0.157380131954;
    msg.acceptance = 233U;

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
    msg.setTimeStamp(0.581042263875);
    msg.setSource(8725U);
    msg.setSourceEntity(209U);
    msg.setDestination(25494U);
    msg.setDestinationEntity(167U);
    msg.id = 126U;
    msg.range = 0.402992084349;
    msg.acceptance = 214U;

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
    msg.setTimeStamp(0.531706420986);
    msg.setSource(58498U);
    msg.setSourceEntity(248U);
    msg.setDestination(32543U);
    msg.setDestinationEntity(171U);
    msg.type = 221U;
    msg.reason = 36U;
    msg.value = 0.507746678068;
    msg.timestep = 0.981112201014;

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
    msg.setTimeStamp(0.0270154481612);
    msg.setSource(36695U);
    msg.setSourceEntity(153U);
    msg.setDestination(54579U);
    msg.setDestinationEntity(156U);
    msg.type = 79U;
    msg.reason = 186U;
    msg.value = 0.995490768183;
    msg.timestep = 0.37841405649;

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
    msg.setTimeStamp(0.37918446612);
    msg.setSource(40481U);
    msg.setSourceEntity(62U);
    msg.setDestination(41209U);
    msg.setDestinationEntity(190U);
    msg.type = 38U;
    msg.reason = 60U;
    msg.value = 0.967603215258;
    msg.timestep = 0.363672054584;

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
    msg.setTimeStamp(0.232956526152);
    msg.setSource(12632U);
    msg.setSourceEntity(26U);
    msg.setDestination(39800U);
    msg.setDestinationEntity(195U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QHJOEZJCGNXLDETRVZKROMWUDOPGZXXICQIUHI");
    tmp_msg_0.lat = 0.281782104899;
    tmp_msg_0.lon = 0.668356674614;
    tmp_msg_0.depth = 0.518154164563;
    tmp_msg_0.query_channel = 52U;
    tmp_msg_0.reply_channel = 35U;
    tmp_msg_0.transponder_delay = 245U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.695507068426;
    msg.y = 0.487175269261;
    msg.var_x = 0.43725468887;
    msg.var_y = 0.71602996293;
    msg.distance = 0.676904486605;

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
    msg.setTimeStamp(0.912127114741);
    msg.setSource(47950U);
    msg.setSourceEntity(248U);
    msg.setDestination(29061U);
    msg.setDestinationEntity(47U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UWGGDJDYLDJBMORRPJZFVZEWKUHEZRITNAHDTJFZPSDCXFTSBBDZWNPELCVPPLSLCPCMQTZZXLPXNZGLQMKMUQUFFDMRCAULWHMWMQXYFRARNHINYJOACARRPKJYCWLQQHOUHEOOCSJEVKKMAYFRQYXTWMSIKFBEBVDRWYCLUOTSGOTUTTVWNAWIISNAKYFQICKGFQTYZHBIEEGVVOIBYOPHXKPKBOGHGXNIDBAXVJASXEJUZVDVHJMEQNU");
    tmp_msg_0.lat = 0.924176891401;
    tmp_msg_0.lon = 0.651360711996;
    tmp_msg_0.depth = 0.181159616225;
    tmp_msg_0.query_channel = 174U;
    tmp_msg_0.reply_channel = 52U;
    tmp_msg_0.transponder_delay = 166U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.406968780061;
    msg.y = 0.414768956391;
    msg.var_x = 0.452672702261;
    msg.var_y = 0.295810562541;
    msg.distance = 0.606641969976;

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
    msg.setTimeStamp(0.872298934893);
    msg.setSource(57788U);
    msg.setSourceEntity(134U);
    msg.setDestination(15517U);
    msg.setDestinationEntity(53U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WMSQGHEWFTSAEMHDBYYBCRZIMLOSAHIKCLVZQJBZWDXGZNEMAVARLGONZPYPBXVPKVNFFEQBJXFVAPQUOBXQOQPZSXKCQJCGPKZXMUINNBWCNHANTRCKSKIMSAUKDEOLOHYGEIUITDYURFOLXRUNCXDZQNGJWJFPWDFFWVRET");
    tmp_msg_0.lat = 0.343762017047;
    tmp_msg_0.lon = 0.336319844089;
    tmp_msg_0.depth = 0.0670787368188;
    tmp_msg_0.query_channel = 37U;
    tmp_msg_0.reply_channel = 226U;
    tmp_msg_0.transponder_delay = 217U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.147837633874;
    msg.y = 0.0887145065976;
    msg.var_x = 0.489459817972;
    msg.var_y = 0.637842153794;
    msg.distance = 0.693996768574;

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
    msg.setTimeStamp(0.187959229371);
    msg.setSource(14521U);
    msg.setSourceEntity(212U);
    msg.setDestination(4020U);
    msg.setDestinationEntity(25U);
    msg.state = 192U;

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
    msg.setTimeStamp(0.725352045704);
    msg.setSource(10715U);
    msg.setSourceEntity(88U);
    msg.setDestination(19710U);
    msg.setDestinationEntity(11U);
    msg.state = 152U;

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
    msg.setTimeStamp(0.721877545298);
    msg.setSource(36958U);
    msg.setSourceEntity(172U);
    msg.setDestination(54411U);
    msg.setDestinationEntity(137U);
    msg.state = 128U;

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
    msg.setTimeStamp(0.168492515126);
    msg.setSource(51199U);
    msg.setSourceEntity(0U);
    msg.setDestination(55149U);
    msg.setDestinationEntity(49U);
    msg.x = 0.0106797332977;
    msg.y = 0.252663963265;
    msg.z = 0.040793774194;

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
    msg.setTimeStamp(0.15026420859);
    msg.setSource(1881U);
    msg.setSourceEntity(12U);
    msg.setDestination(63361U);
    msg.setDestinationEntity(209U);
    msg.x = 0.263896443495;
    msg.y = 0.695705717977;
    msg.z = 0.917410003049;

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
    msg.setTimeStamp(0.842601914991);
    msg.setSource(64811U);
    msg.setSourceEntity(236U);
    msg.setDestination(26218U);
    msg.setDestinationEntity(195U);
    msg.x = 0.18006588352;
    msg.y = 0.604700594706;
    msg.z = 0.0723854931775;

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
    msg.setTimeStamp(0.431654294952);
    msg.setSource(16284U);
    msg.setSourceEntity(230U);
    msg.setDestination(50982U);
    msg.setDestinationEntity(189U);
    msg.va = 0.478271415536;
    msg.aoa = 0.362859003552;
    msg.ssa = 0.533230884015;

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
    msg.setTimeStamp(0.271688497023);
    msg.setSource(26237U);
    msg.setSourceEntity(18U);
    msg.setDestination(36102U);
    msg.setDestinationEntity(5U);
    msg.va = 0.336297311899;
    msg.aoa = 0.968560704657;
    msg.ssa = 0.527783895218;

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
    msg.setTimeStamp(0.711193451807);
    msg.setSource(11156U);
    msg.setSourceEntity(13U);
    msg.setDestination(11585U);
    msg.setDestinationEntity(232U);
    msg.va = 0.172083430409;
    msg.aoa = 0.0610551743637;
    msg.ssa = 0.665453465191;

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
    msg.setTimeStamp(0.810261351964);
    msg.setSource(55596U);
    msg.setSourceEntity(147U);
    msg.setDestination(62344U);
    msg.setDestinationEntity(232U);
    msg.value = 0.114348263896;

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
    msg.setTimeStamp(0.356116649323);
    msg.setSource(55939U);
    msg.setSourceEntity(8U);
    msg.setDestination(4507U);
    msg.setDestinationEntity(219U);
    msg.value = 0.0755762794102;

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
    msg.setTimeStamp(0.478730480728);
    msg.setSource(34777U);
    msg.setSourceEntity(29U);
    msg.setDestination(873U);
    msg.setDestinationEntity(193U);
    msg.value = 0.984645854505;

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
    msg.setTimeStamp(0.996158114538);
    msg.setSource(37186U);
    msg.setSourceEntity(249U);
    msg.setDestination(4476U);
    msg.setDestinationEntity(104U);
    msg.value = 0.188975173389;
    msg.z_units = 86U;

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
    msg.setTimeStamp(0.60435530035);
    msg.setSource(36930U);
    msg.setSourceEntity(5U);
    msg.setDestination(53704U);
    msg.setDestinationEntity(65U);
    msg.value = 0.381594099991;
    msg.z_units = 199U;

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
    msg.setTimeStamp(0.995762756351);
    msg.setSource(17828U);
    msg.setSourceEntity(246U);
    msg.setDestination(7941U);
    msg.setDestinationEntity(157U);
    msg.value = 0.579170818336;
    msg.z_units = 177U;

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
    msg.setTimeStamp(0.0369681635059);
    msg.setSource(23549U);
    msg.setSourceEntity(29U);
    msg.setDestination(40067U);
    msg.setDestinationEntity(151U);
    msg.value = 0.920241228983;
    msg.speed_units = 98U;

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
    msg.setTimeStamp(0.736713901777);
    msg.setSource(36885U);
    msg.setSourceEntity(181U);
    msg.setDestination(34761U);
    msg.setDestinationEntity(203U);
    msg.value = 0.153372745009;
    msg.speed_units = 26U;

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
    msg.setTimeStamp(0.390072716979);
    msg.setSource(63315U);
    msg.setSourceEntity(206U);
    msg.setDestination(37724U);
    msg.setDestinationEntity(205U);
    msg.value = 0.733437165706;
    msg.speed_units = 135U;

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
    msg.setTimeStamp(0.576848818635);
    msg.setSource(29212U);
    msg.setSourceEntity(54U);
    msg.setDestination(34844U);
    msg.setDestinationEntity(130U);
    msg.value = 0.720812721282;

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
    msg.setTimeStamp(0.341359679401);
    msg.setSource(42749U);
    msg.setSourceEntity(19U);
    msg.setDestination(5088U);
    msg.setDestinationEntity(233U);
    msg.value = 0.0277471351155;

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
    msg.setTimeStamp(0.436437675655);
    msg.setSource(2590U);
    msg.setSourceEntity(40U);
    msg.setDestination(9627U);
    msg.setDestinationEntity(223U);
    msg.value = 0.856249195657;

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
    msg.setTimeStamp(0.723765980444);
    msg.setSource(45772U);
    msg.setSourceEntity(15U);
    msg.setDestination(33891U);
    msg.setDestinationEntity(111U);
    msg.value = 0.315395760416;

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
    msg.setTimeStamp(0.977126598311);
    msg.setSource(20907U);
    msg.setSourceEntity(236U);
    msg.setDestination(5498U);
    msg.setDestinationEntity(40U);
    msg.value = 0.757016877835;

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
    msg.setTimeStamp(0.318537313699);
    msg.setSource(34405U);
    msg.setSourceEntity(18U);
    msg.setDestination(60054U);
    msg.setDestinationEntity(12U);
    msg.value = 0.186224392796;

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
    msg.setTimeStamp(0.272550579757);
    msg.setSource(14712U);
    msg.setSourceEntity(20U);
    msg.setDestination(14593U);
    msg.setDestinationEntity(149U);
    msg.value = 0.172621001111;

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
    msg.setTimeStamp(0.989184540301);
    msg.setSource(27776U);
    msg.setSourceEntity(163U);
    msg.setDestination(65260U);
    msg.setDestinationEntity(213U);
    msg.value = 0.678883942681;

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
    msg.setTimeStamp(0.475820349214);
    msg.setSource(16381U);
    msg.setSourceEntity(191U);
    msg.setDestination(42093U);
    msg.setDestinationEntity(203U);
    msg.value = 0.0718589904926;

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
    msg.setTimeStamp(0.800828704354);
    msg.setSource(13698U);
    msg.setSourceEntity(156U);
    msg.setDestination(42221U);
    msg.setDestinationEntity(184U);
    msg.path_ref = 1227653470U;
    msg.start_lat = 0.640448738518;
    msg.start_lon = 0.257166378276;
    msg.start_z = 0.700211069321;
    msg.start_z_units = 234U;
    msg.end_lat = 0.0422756741774;
    msg.end_lon = 0.0913793318821;
    msg.end_z = 0.552084547883;
    msg.end_z_units = 156U;
    msg.speed = 0.452426955352;
    msg.speed_units = 55U;
    msg.lradius = 0.480510231708;
    msg.flags = 232U;

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
    msg.setTimeStamp(0.949273941206);
    msg.setSource(30009U);
    msg.setSourceEntity(151U);
    msg.setDestination(54789U);
    msg.setDestinationEntity(67U);
    msg.path_ref = 1035518842U;
    msg.start_lat = 0.123212229597;
    msg.start_lon = 0.0214080363146;
    msg.start_z = 0.896800485753;
    msg.start_z_units = 179U;
    msg.end_lat = 0.736466708747;
    msg.end_lon = 0.31645284297;
    msg.end_z = 0.400834362102;
    msg.end_z_units = 152U;
    msg.speed = 0.714927642358;
    msg.speed_units = 140U;
    msg.lradius = 0.641076933339;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.972590893806);
    msg.setSource(17885U);
    msg.setSourceEntity(194U);
    msg.setDestination(59091U);
    msg.setDestinationEntity(49U);
    msg.path_ref = 4017195197U;
    msg.start_lat = 0.981634907033;
    msg.start_lon = 0.367530767693;
    msg.start_z = 0.12825146775;
    msg.start_z_units = 122U;
    msg.end_lat = 0.682323664084;
    msg.end_lon = 0.0929178971792;
    msg.end_z = 0.55943318648;
    msg.end_z_units = 94U;
    msg.speed = 0.84500741815;
    msg.speed_units = 244U;
    msg.lradius = 0.0174580787188;
    msg.flags = 203U;

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
    msg.setTimeStamp(0.0596506384489);
    msg.setSource(54035U);
    msg.setSourceEntity(125U);
    msg.setDestination(18857U);
    msg.setDestinationEntity(131U);
    msg.x = 0.201904959815;
    msg.y = 0.972590863062;
    msg.z = 0.514608738187;
    msg.k = 0.861572846832;
    msg.m = 0.739504537166;
    msg.n = 0.0821525646612;
    msg.flags = 18U;

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
    msg.setTimeStamp(0.810498742498);
    msg.setSource(17130U);
    msg.setSourceEntity(111U);
    msg.setDestination(57421U);
    msg.setDestinationEntity(6U);
    msg.x = 0.396719128901;
    msg.y = 0.505361856836;
    msg.z = 0.907998573947;
    msg.k = 0.439740426696;
    msg.m = 0.242262364681;
    msg.n = 0.70050349873;
    msg.flags = 61U;

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
    msg.setTimeStamp(0.0992005839953);
    msg.setSource(9535U);
    msg.setSourceEntity(204U);
    msg.setDestination(17796U);
    msg.setDestinationEntity(139U);
    msg.x = 0.225252018365;
    msg.y = 0.460108534978;
    msg.z = 0.468860220446;
    msg.k = 0.532770204541;
    msg.m = 0.580621878208;
    msg.n = 0.930383776065;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.445741110077);
    msg.setSource(38424U);
    msg.setSourceEntity(176U);
    msg.setDestination(45729U);
    msg.setDestinationEntity(152U);
    msg.value = 0.50636212822;

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
    msg.setTimeStamp(0.00612383733682);
    msg.setSource(14040U);
    msg.setSourceEntity(183U);
    msg.setDestination(22657U);
    msg.setDestinationEntity(217U);
    msg.value = 0.222116518429;

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
    msg.setTimeStamp(0.419562006189);
    msg.setSource(57487U);
    msg.setSourceEntity(92U);
    msg.setDestination(38032U);
    msg.setDestinationEntity(198U);
    msg.value = 0.604675321528;

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
    msg.setTimeStamp(0.873480542933);
    msg.setSource(59303U);
    msg.setSourceEntity(151U);
    msg.setDestination(7412U);
    msg.setDestinationEntity(180U);
    msg.u = 0.795824474835;
    msg.v = 0.196170086226;
    msg.w = 0.536639381606;
    msg.p = 0.240161726182;
    msg.q = 0.704745833333;
    msg.r = 0.987917536126;
    msg.flags = 81U;

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
    msg.setTimeStamp(0.332682131116);
    msg.setSource(7520U);
    msg.setSourceEntity(143U);
    msg.setDestination(5430U);
    msg.setDestinationEntity(70U);
    msg.u = 0.977260909843;
    msg.v = 0.460468824872;
    msg.w = 0.938056298591;
    msg.p = 0.950538062661;
    msg.q = 0.402623591015;
    msg.r = 0.0358629332267;
    msg.flags = 192U;

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
    msg.setTimeStamp(0.282399480189);
    msg.setSource(41706U);
    msg.setSourceEntity(164U);
    msg.setDestination(19520U);
    msg.setDestinationEntity(13U);
    msg.u = 0.798502119653;
    msg.v = 0.781651598576;
    msg.w = 0.940235916607;
    msg.p = 0.768522043665;
    msg.q = 0.267922884829;
    msg.r = 0.303222319646;
    msg.flags = 14U;

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
    msg.setTimeStamp(0.547298605229);
    msg.setSource(62380U);
    msg.setSourceEntity(87U);
    msg.setDestination(50341U);
    msg.setDestinationEntity(140U);
    msg.path_ref = 1809808573U;
    msg.start_lat = 0.872017405641;
    msg.start_lon = 0.00475915784657;
    msg.start_z = 0.0419624385263;
    msg.start_z_units = 162U;
    msg.end_lat = 0.722588461631;
    msg.end_lon = 0.512966844359;
    msg.end_z = 0.0550546313149;
    msg.end_z_units = 52U;
    msg.lradius = 0.420908408106;
    msg.flags = 216U;
    msg.x = 0.659320811493;
    msg.y = 0.858360256542;
    msg.z = 0.990750902479;
    msg.vx = 0.935670780538;
    msg.vy = 0.546769411581;
    msg.vz = 0.0522004829387;
    msg.course_error = 0.580960868146;
    msg.eta = 33375U;

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
    msg.setTimeStamp(0.958796908456);
    msg.setSource(25364U);
    msg.setSourceEntity(124U);
    msg.setDestination(24406U);
    msg.setDestinationEntity(38U);
    msg.path_ref = 3864550237U;
    msg.start_lat = 0.845338831623;
    msg.start_lon = 0.282762171925;
    msg.start_z = 0.417767013293;
    msg.start_z_units = 64U;
    msg.end_lat = 0.196398967231;
    msg.end_lon = 0.104501400308;
    msg.end_z = 0.311875694686;
    msg.end_z_units = 49U;
    msg.lradius = 0.270211169505;
    msg.flags = 10U;
    msg.x = 0.442494191318;
    msg.y = 0.276702828252;
    msg.z = 0.0406074494276;
    msg.vx = 0.497994367679;
    msg.vy = 0.601845386853;
    msg.vz = 0.0872115937693;
    msg.course_error = 0.535590444139;
    msg.eta = 38271U;

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
    msg.setTimeStamp(0.243362265049);
    msg.setSource(25815U);
    msg.setSourceEntity(32U);
    msg.setDestination(49376U);
    msg.setDestinationEntity(116U);
    msg.path_ref = 1022573277U;
    msg.start_lat = 0.850601201831;
    msg.start_lon = 0.743231258907;
    msg.start_z = 0.00504484966057;
    msg.start_z_units = 25U;
    msg.end_lat = 0.64774096594;
    msg.end_lon = 0.289268855722;
    msg.end_z = 0.138038421332;
    msg.end_z_units = 34U;
    msg.lradius = 0.151045220396;
    msg.flags = 113U;
    msg.x = 0.608679298891;
    msg.y = 0.491758696648;
    msg.z = 0.788754097718;
    msg.vx = 0.118206446378;
    msg.vy = 0.00598183011183;
    msg.vz = 0.744692641484;
    msg.course_error = 0.710982832905;
    msg.eta = 49366U;

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
    msg.setTimeStamp(0.706442454691);
    msg.setSource(53553U);
    msg.setSourceEntity(6U);
    msg.setDestination(32057U);
    msg.setDestinationEntity(74U);
    msg.k = 0.880987051269;
    msg.m = 0.00808426661719;
    msg.n = 0.648581098191;

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
    msg.setTimeStamp(0.677492460357);
    msg.setSource(59809U);
    msg.setSourceEntity(193U);
    msg.setDestination(53157U);
    msg.setDestinationEntity(173U);
    msg.k = 0.320658026991;
    msg.m = 0.189732747972;
    msg.n = 0.714410167;

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
    msg.setTimeStamp(0.596612117429);
    msg.setSource(41443U);
    msg.setSourceEntity(110U);
    msg.setDestination(1664U);
    msg.setDestinationEntity(122U);
    msg.k = 0.0691667628333;
    msg.m = 0.904639999436;
    msg.n = 0.741951439131;

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
    msg.setTimeStamp(0.590024705902);
    msg.setSource(23356U);
    msg.setSourceEntity(179U);
    msg.setDestination(1318U);
    msg.setDestinationEntity(253U);
    msg.p = 0.569109564871;
    msg.i = 0.211160938622;
    msg.d = 0.178020787878;
    msg.a = 0.232489050341;

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
    msg.setTimeStamp(0.630890875324);
    msg.setSource(22388U);
    msg.setSourceEntity(207U);
    msg.setDestination(26991U);
    msg.setDestinationEntity(20U);
    msg.p = 0.382822808125;
    msg.i = 0.74659577704;
    msg.d = 0.143267529875;
    msg.a = 0.900048767294;

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
    msg.setTimeStamp(0.170464984431);
    msg.setSource(35116U);
    msg.setSourceEntity(11U);
    msg.setDestination(6609U);
    msg.setDestinationEntity(20U);
    msg.p = 0.195517925007;
    msg.i = 0.460288863611;
    msg.d = 0.690710402987;
    msg.a = 0.389363619986;

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
    msg.setTimeStamp(0.324766713562);
    msg.setSource(43287U);
    msg.setSourceEntity(218U);
    msg.setDestination(27782U);
    msg.setDestinationEntity(138U);
    msg.op = 149U;

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
    msg.setTimeStamp(0.940997838616);
    msg.setSource(48278U);
    msg.setSourceEntity(195U);
    msg.setDestination(42122U);
    msg.setDestinationEntity(51U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.622365245931);
    msg.setSource(12856U);
    msg.setSourceEntity(188U);
    msg.setDestination(53303U);
    msg.setDestinationEntity(153U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.33989327639);
    msg.setSource(12861U);
    msg.setSourceEntity(12U);
    msg.setDestination(12721U);
    msg.setDestinationEntity(123U);
    msg.x = 0.860667387719;
    msg.y = 0.565659511778;
    msg.z = 0.113341845262;
    msg.vx = 0.883111692882;
    msg.vy = 0.286251457072;
    msg.vz = 0.952544358846;
    msg.ax = 0.786332923177;
    msg.ay = 0.356459600437;
    msg.az = 0.345985631095;
    msg.flags = 11612U;

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
    msg.setTimeStamp(0.250717310756);
    msg.setSource(27287U);
    msg.setSourceEntity(101U);
    msg.setDestination(38078U);
    msg.setDestinationEntity(242U);
    msg.x = 0.56817231088;
    msg.y = 0.926837009245;
    msg.z = 0.936127571196;
    msg.vx = 0.813156637661;
    msg.vy = 0.845354931548;
    msg.vz = 0.943467001615;
    msg.ax = 0.100620179564;
    msg.ay = 0.856902430274;
    msg.az = 0.947938104076;
    msg.flags = 32691U;

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
    msg.setTimeStamp(0.414449617871);
    msg.setSource(13430U);
    msg.setSourceEntity(60U);
    msg.setDestination(15296U);
    msg.setDestinationEntity(151U);
    msg.x = 0.400580478828;
    msg.y = 0.951388339538;
    msg.z = 0.946197812996;
    msg.vx = 0.197706443722;
    msg.vy = 0.943015343849;
    msg.vz = 0.303394951137;
    msg.ax = 0.237760813536;
    msg.ay = 0.708768177064;
    msg.az = 0.943382952603;
    msg.flags = 45639U;

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
    msg.setTimeStamp(0.540910560524);
    msg.setSource(23238U);
    msg.setSourceEntity(184U);
    msg.setDestination(8404U);
    msg.setDestinationEntity(216U);
    msg.value = 0.61630623325;

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
    msg.setTimeStamp(0.526803701172);
    msg.setSource(38673U);
    msg.setSourceEntity(27U);
    msg.setDestination(13176U);
    msg.setDestinationEntity(72U);
    msg.value = 0.120923502286;

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
    msg.setTimeStamp(0.0603063564059);
    msg.setSource(22446U);
    msg.setSourceEntity(94U);
    msg.setDestination(65358U);
    msg.setDestinationEntity(175U);
    msg.value = 0.542800838541;

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
    msg.setTimeStamp(0.519456568108);
    msg.setSource(30838U);
    msg.setSourceEntity(63U);
    msg.setDestination(11495U);
    msg.setDestinationEntity(89U);
    msg.timeout = 32505U;
    msg.lat = 0.652280887409;
    msg.lon = 0.188262742779;
    msg.z = 0.0318452084551;
    msg.z_units = 248U;
    msg.speed = 0.280474779169;
    msg.speed_units = 166U;
    msg.roll = 0.630338738308;
    msg.pitch = 0.588201668806;
    msg.yaw = 0.426589428991;
    msg.custom.assign("GXEJMDWEFWPSGKRVYBQXMJYWPGTZRQLLVOUEIHRAHRPMMFKWDTYDPTOBFCFJJWZQISVMNCQATHCUSUXYHWWPHWQQERMFGCUOXNJVLFBHCPYXKWPXUDEABZEXAJTZLKVJYRBTFLUCMCIUXHNMORDJDRUTJRMVSOPBANGKSBIZOOIVBTYUARDNQYNLQQFUIN");

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
    msg.setTimeStamp(0.200311933193);
    msg.setSource(34611U);
    msg.setSourceEntity(205U);
    msg.setDestination(34953U);
    msg.setDestinationEntity(115U);
    msg.timeout = 45603U;
    msg.lat = 0.250617653218;
    msg.lon = 0.519602838653;
    msg.z = 0.513348878995;
    msg.z_units = 174U;
    msg.speed = 0.714278313539;
    msg.speed_units = 1U;
    msg.roll = 0.815700224296;
    msg.pitch = 0.768485371437;
    msg.yaw = 0.239660491351;
    msg.custom.assign("ATYUAEJEPFRJGPALZSLVNDBLTEKFXTMCUOXSKFOXRRDYSCOVKODQWEYWVSCYZMFDYTSKZWNLHQQQAESIWHIUYOMPUWJXVWXGFKIQXQIXNLIZ");

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
    msg.setTimeStamp(0.937542936378);
    msg.setSource(44208U);
    msg.setSourceEntity(86U);
    msg.setDestination(45458U);
    msg.setDestinationEntity(104U);
    msg.timeout = 11251U;
    msg.lat = 0.378446134521;
    msg.lon = 0.624321436994;
    msg.z = 0.167987820473;
    msg.z_units = 165U;
    msg.speed = 0.908341333154;
    msg.speed_units = 185U;
    msg.roll = 0.352550658724;
    msg.pitch = 0.604462897134;
    msg.yaw = 0.392850090422;
    msg.custom.assign("XBLJUTGGWBXXOICNBQMUDDOCLSIQDMKIULNSRGYXPORFQVGJWCBIEWRY");

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
    msg.setTimeStamp(0.843265839126);
    msg.setSource(42785U);
    msg.setSourceEntity(246U);
    msg.setDestination(29591U);
    msg.setDestinationEntity(68U);
    msg.timeout = 63640U;
    msg.lat = 0.666501001288;
    msg.lon = 0.109650254442;
    msg.z = 0.808692272851;
    msg.z_units = 71U;
    msg.speed = 0.980632646757;
    msg.speed_units = 176U;
    msg.duration = 63124U;
    msg.radius = 0.886127900634;
    msg.flags = 229U;
    msg.custom.assign("NTNZQNECDZJAINAIWWTRTAYXNCKTADRAJMRXPQDZSCSIZUHSEGAOHBALVZMAUGTQNMZYUTVMSTIGIQYOPQQJPVQMPHRVFSGYWIODHFGLOZRJKYPJBBYWYHLMIPRXCZFHTCSCJEBBB");

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
    msg.setTimeStamp(0.965812064631);
    msg.setSource(15380U);
    msg.setSourceEntity(151U);
    msg.setDestination(62596U);
    msg.setDestinationEntity(149U);
    msg.timeout = 28608U;
    msg.lat = 0.825264431973;
    msg.lon = 0.62040427331;
    msg.z = 0.587771456923;
    msg.z_units = 198U;
    msg.speed = 0.394001122515;
    msg.speed_units = 197U;
    msg.duration = 6147U;
    msg.radius = 0.772853839252;
    msg.flags = 98U;
    msg.custom.assign("YPHQGIYEGPTJZFSVFFDRQTMFNUGAZJPBNPCGKVJIJYGTFBTJOMWMEMKWDWALQGFXPJWLZ");

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
    msg.setTimeStamp(0.0521382063686);
    msg.setSource(63105U);
    msg.setSourceEntity(121U);
    msg.setDestination(57141U);
    msg.setDestinationEntity(65U);
    msg.timeout = 42155U;
    msg.lat = 0.103480154784;
    msg.lon = 0.451100930742;
    msg.z = 0.826653278579;
    msg.z_units = 150U;
    msg.speed = 0.058197216078;
    msg.speed_units = 29U;
    msg.duration = 51381U;
    msg.radius = 0.481996158962;
    msg.flags = 167U;
    msg.custom.assign("YDJAGFXYQTQJFKECLLJQMAYDWWYBCWHZL");

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
    msg.setTimeStamp(0.574482089086);
    msg.setSource(5157U);
    msg.setSourceEntity(90U);
    msg.setDestination(31165U);
    msg.setDestinationEntity(89U);
    msg.custom.assign("KFSBKMKAVNZNXVNPMYTMJBASUWHJCACYMRKODSMZQWJXFWCPWOMRIXSRBLSKSQJIYPQPPVYAGZDIOGQYOMDOXXFHPXSUTKNRUEIMQXVWJOHIREYVTWCJBJZYRKCRFZNOSAHJDLEFCNKGTWTOSEQACIUGGAQJLNAYGWDYDPDETLQNHEVDZQODIDUTELQVHBHE");

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
    msg.setTimeStamp(0.824252887102);
    msg.setSource(32000U);
    msg.setSourceEntity(212U);
    msg.setDestination(61026U);
    msg.setDestinationEntity(156U);
    msg.custom.assign("GWDYHUCROAHUSMHIUO");

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
    msg.setTimeStamp(0.121104109213);
    msg.setSource(62688U);
    msg.setSourceEntity(6U);
    msg.setDestination(52681U);
    msg.setDestinationEntity(3U);
    msg.custom.assign("OMJYCPYRPJGWNZZHGQXSPNHJSJFWDKJPZFMMRRKTZIHNRUQMUNXKFEVFRXNVKUVEXCDULVEJONLZBMPHTWLUXSFYUDGTGLBDG");

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
    msg.setTimeStamp(0.102888055319);
    msg.setSource(45849U);
    msg.setSourceEntity(72U);
    msg.setDestination(628U);
    msg.setDestinationEntity(176U);
    msg.timeout = 41494U;
    msg.lat = 0.614501045937;
    msg.lon = 0.305241971644;
    msg.z = 0.564181529026;
    msg.z_units = 73U;
    msg.duration = 58329U;
    msg.speed = 0.516847466714;
    msg.speed_units = 14U;
    msg.type = 13U;
    msg.radius = 0.194510718602;
    msg.length = 0.969222400631;
    msg.bearing = 0.458957773194;
    msg.direction = 42U;
    msg.custom.assign("QQFFPFIQJCBVDJMVFPOJHDDZJNYBROELZWYTRPTOJIYWALKYWQSNCNLBUVOWHLXXEETBSDAKSEISJLJERLEGYHJRCLXPKQBOVMNYXHVOBSCRAMOAXZFGKIUTGFLEPRSIKHZKWTSZUGYWNXQCBTCPRCHXVNDQCZXEWHFAZUVPVBDTBNGQPSXGQTRUUGJKLL");

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
    msg.setTimeStamp(0.363813310466);
    msg.setSource(43576U);
    msg.setSourceEntity(43U);
    msg.setDestination(5453U);
    msg.setDestinationEntity(135U);
    msg.timeout = 14579U;
    msg.lat = 0.951554099693;
    msg.lon = 0.14118882105;
    msg.z = 0.00478657177708;
    msg.z_units = 215U;
    msg.duration = 41943U;
    msg.speed = 0.908638547952;
    msg.speed_units = 16U;
    msg.type = 199U;
    msg.radius = 0.924242655301;
    msg.length = 0.631761170318;
    msg.bearing = 0.454094248369;
    msg.direction = 212U;
    msg.custom.assign("QFATRUAMEAHDXQCPXEXLURKJGSIHLCWFIKMSCIIMQDBXKCNOCTEVJAUZCTJITLRKHDLJJDYXHRNUIFNPYNVRNKZAHVSNXKMWDDWZHSYQSOHYMOIXPFUJIEJZQBHYUEVQQBZXOJOBKAJJVYERGBSBWNMHPTDWZUAIIPLCEHGTSBVNAFYE");

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
    msg.setTimeStamp(0.777218164881);
    msg.setSource(43444U);
    msg.setSourceEntity(47U);
    msg.setDestination(10776U);
    msg.setDestinationEntity(159U);
    msg.timeout = 232U;
    msg.lat = 0.209718444702;
    msg.lon = 0.217180898294;
    msg.z = 0.220098038133;
    msg.z_units = 92U;
    msg.duration = 31104U;
    msg.speed = 0.0881684029602;
    msg.speed_units = 24U;
    msg.type = 166U;
    msg.radius = 0.77039637911;
    msg.length = 0.7887128561;
    msg.bearing = 0.13882129073;
    msg.direction = 161U;
    msg.custom.assign("UVLAGWCNSYOTFKQZLOJHMRDXOOHWEQPQNKIPTITARFMZKGSLFVNVZPDJVEBBOWIJVSOIJCYUTUJGSMYXEQJPDJMIKKVQIHPBCDLUGEQOGDUYATOKPBFQEZATHFDAUMCTUSNPLGKIM");

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
    msg.setTimeStamp(0.809948231812);
    msg.setSource(39786U);
    msg.setSourceEntity(12U);
    msg.setDestination(58508U);
    msg.setDestinationEntity(206U);
    msg.duration = 32732U;
    msg.custom.assign("MAHRPMATGOJBLVOFCJUXYULJHDUEZKWFIYXCHVMKTUHGSGZRTBPELJAUHOPAQTEPTMLMNLPIIPSIWLBNYWIFZ");

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
    msg.setTimeStamp(0.275437853591);
    msg.setSource(59679U);
    msg.setSourceEntity(202U);
    msg.setDestination(25169U);
    msg.setDestinationEntity(3U);
    msg.duration = 17647U;
    msg.custom.assign("IEFMFXMZDZJTPDXHDSEDOWJWEZLRGXLKEFAWSWQAZKZBORGVSTDRMGQHBUDRZNFOHIWUKTMXENBHTARSDGSNWKJXVYLYGYYGJOUPJSQEEYQZXSLOCKEGQMBVLBCUMCBKFPTMBMATTAILWASAUPHSSRBHNXVNNDRKAPCJVVAQQVVQMWOFQBCU");

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
    msg.setTimeStamp(0.031225081486);
    msg.setSource(6434U);
    msg.setSourceEntity(189U);
    msg.setDestination(33146U);
    msg.setDestinationEntity(141U);
    msg.duration = 47957U;
    msg.custom.assign("LOUGCRAOZQUWJRSDKSIIAMHZVEDBYTKTEGHTJXQNKCZMEGONSZFEMVMQBWXTIUNCEDIYTIWCVXFPFZNJRPIBLWIILLNRAQNGYRGJKKWNYVNUCDYCFTTYHMOKBRJMRTXQHKZLLCDRYCSWODGDXNAMOVSDAHUPYLFWYDMNPZBVSSUBKUFQXKMJXLBHBQRPHAOBQPFJOXPRVUEGPESJPAIFLXUJTOHAJZ");

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
    msg.setTimeStamp(0.216842168045);
    msg.setSource(27643U);
    msg.setSourceEntity(138U);
    msg.setDestination(19337U);
    msg.setDestinationEntity(20U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.729087628706;
    msg.control.set(tmp_msg_0);
    msg.duration = 45052U;
    msg.custom.assign("IEMINZVAVIXXTBZOCTVQFWXBPPLTIKMWQTYLBAJCSOLSZKSTGUTSSKGNMQPGADBEPXLSZMFNULXUQJOORJXIR");

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
    msg.setTimeStamp(0.793967136895);
    msg.setSource(56193U);
    msg.setSourceEntity(39U);
    msg.setDestination(3747U);
    msg.setDestinationEntity(235U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.365100396397;
    msg.control.set(tmp_msg_0);
    msg.duration = 16376U;
    msg.custom.assign("AXCTLOSGRWDLJQTGYIUCXRRWSFEBL");

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
    msg.setTimeStamp(0.00156150155066);
    msg.setSource(59976U);
    msg.setSourceEntity(98U);
    msg.setDestination(17959U);
    msg.setDestinationEntity(144U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 792752820U;
    tmp_msg_0.start_lat = 0.583285792499;
    tmp_msg_0.start_lon = 0.586391431075;
    tmp_msg_0.start_z = 0.933238984075;
    tmp_msg_0.start_z_units = 126U;
    tmp_msg_0.end_lat = 0.221440021756;
    tmp_msg_0.end_lon = 0.678011405828;
    tmp_msg_0.end_z = 0.557281147693;
    tmp_msg_0.end_z_units = 167U;
    tmp_msg_0.speed = 0.278544079349;
    tmp_msg_0.speed_units = 201U;
    tmp_msg_0.lradius = 0.203092647883;
    tmp_msg_0.flags = 29U;
    msg.control.set(tmp_msg_0);
    msg.duration = 55650U;
    msg.custom.assign("QGXQAVVLGDEJDEIAXSJTWVGBIRLFKJKHTPBNQZFFWLPDSTCTIUSTCADHLNSEMVEDLPMUGMJGYKQQSQZNGKGUFHZWJG");

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
    msg.setTimeStamp(0.490733536188);
    msg.setSource(43808U);
    msg.setSourceEntity(42U);
    msg.setDestination(37124U);
    msg.setDestinationEntity(191U);
    msg.timeout = 2892U;
    msg.lat = 0.82842706749;
    msg.lon = 0.694821754897;
    msg.z = 0.593503758717;
    msg.z_units = 117U;
    msg.speed = 0.752302222946;
    msg.speed_units = 97U;
    msg.bearing = 0.131680332848;
    msg.cross_angle = 0.368519054994;
    msg.width = 0.577833789953;
    msg.length = 0.682236446711;
    msg.hstep = 0.0337529830917;
    msg.coff = 4U;
    msg.alternation = 139U;
    msg.flags = 55U;
    msg.custom.assign("WISYXPREZLDUIGJEDIRHHKNNVGOYKSSKQXXNUDNQPXKCMTOIZWUQXOMNYRTCASUGFLVTPVEQRPVTBJBLTJAPQIZCRRMCWSDYYZYATPRSCNMWYPOEVRQQDTXGMLHZLXULDEJVASGJXJRLHHFPOZIINOSJOFOZCDHAEEWPGBJVZGLNUSCBWKVQZKFYFANYABXEKOLVQFDINKWKWORWBFDCPMUCHATMML");

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
    msg.setTimeStamp(0.878463178684);
    msg.setSource(22357U);
    msg.setSourceEntity(55U);
    msg.setDestination(9207U);
    msg.setDestinationEntity(32U);
    msg.timeout = 38791U;
    msg.lat = 0.600189402345;
    msg.lon = 0.526728065108;
    msg.z = 0.726268728815;
    msg.z_units = 29U;
    msg.speed = 0.953164188288;
    msg.speed_units = 251U;
    msg.bearing = 0.583973119364;
    msg.cross_angle = 0.220197529329;
    msg.width = 0.0989943703764;
    msg.length = 0.0564656189633;
    msg.hstep = 0.801210864287;
    msg.coff = 56U;
    msg.alternation = 17U;
    msg.flags = 206U;
    msg.custom.assign("NAHSBOMDMAKBFKJLROCVPSYMBGMOPMQELVNDGIXXYASWJCVRYKAQHILFGZSSZEUJAWBWQJGUKENJUQDYICJFOXPVIKDORXQOCKFBGLEXCXGWDOALSVFVCTQIKPBQEVVWPETMKFPVOIUHJFXKAIGPMR");

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
    msg.setTimeStamp(0.56402740341);
    msg.setSource(40404U);
    msg.setSourceEntity(245U);
    msg.setDestination(23687U);
    msg.setDestinationEntity(37U);
    msg.timeout = 24511U;
    msg.lat = 0.406130131009;
    msg.lon = 0.48252242761;
    msg.z = 0.397392948061;
    msg.z_units = 60U;
    msg.speed = 0.292262958945;
    msg.speed_units = 216U;
    msg.bearing = 0.105404979629;
    msg.cross_angle = 0.457082177039;
    msg.width = 0.494439945403;
    msg.length = 0.186018666677;
    msg.hstep = 0.827216092492;
    msg.coff = 13U;
    msg.alternation = 62U;
    msg.flags = 161U;
    msg.custom.assign("PYGNXEHFLZITALMFDKWLCKFMMINJIAVEUQALABGFIDXKRZEOXREBTCLCIOXIOXGPQVURXRFNUPPERJTPZOEVJODJVYZNBDHWWMBSFGDWRMTOVERFBLSKYGLFGQLSCB");

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
    msg.setTimeStamp(0.970552474772);
    msg.setSource(45555U);
    msg.setSourceEntity(122U);
    msg.setDestination(44553U);
    msg.setDestinationEntity(0U);
    msg.timeout = 28549U;
    msg.lat = 0.662797340099;
    msg.lon = 0.646063182608;
    msg.z = 0.95546901917;
    msg.z_units = 135U;
    msg.speed = 0.605599207413;
    msg.speed_units = 25U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.511062747439;
    tmp_msg_0.y = 0.915105379255;
    tmp_msg_0.z = 0.893367321958;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DANUWWKDJXJKCEGKDHEDZICGMEVXQPKHRWCZXEIDJWSXDPLCJWVVSELEOUNQUJPLAIUFZZFJVYYVPOTHORXJSZUQOCRNBIMREPUTDXMGJVWGOGJGF");

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
    msg.setTimeStamp(0.968096338303);
    msg.setSource(62603U);
    msg.setSourceEntity(50U);
    msg.setDestination(60489U);
    msg.setDestinationEntity(33U);
    msg.timeout = 44857U;
    msg.lat = 0.331980823265;
    msg.lon = 0.72594843479;
    msg.z = 0.397382619947;
    msg.z_units = 11U;
    msg.speed = 0.997715753663;
    msg.speed_units = 88U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.131504541923;
    tmp_msg_0.y = 0.0617870672957;
    tmp_msg_0.z = 0.287644653029;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QRMUBUTQIRCJODGJCNWNTBZWLQFTRSOFQLIETYJFWWYQDEBTGHP");

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
    msg.setTimeStamp(0.790844994506);
    msg.setSource(33190U);
    msg.setSourceEntity(183U);
    msg.setDestination(37658U);
    msg.setDestinationEntity(127U);
    msg.timeout = 1959U;
    msg.lat = 0.688181220487;
    msg.lon = 0.351601892964;
    msg.z = 0.98054354551;
    msg.z_units = 73U;
    msg.speed = 0.253326641456;
    msg.speed_units = 154U;
    msg.custom.assign("OKIDTWHVNJZWTZNQIQERCLKKYGKTSFZIFPNVEEIWKXJSWEQUCHXOCEKKBYYAPLMZBKRUHWSZPLCVNXHTDLDRKUMTFMWPWPLIDTYYESLVBGGBANRPDXVRJPGWTQOSILFIJCAZULBYQJAXACROXJYVVVFGMUSTHKHFUUZJUSHQXLDBPXOHSCPPGOMRDRNFVSFJL");

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
    msg.setTimeStamp(0.368435110381);
    msg.setSource(2222U);
    msg.setSourceEntity(153U);
    msg.setDestination(25200U);
    msg.setDestinationEntity(31U);
    msg.x = 0.308941455351;
    msg.y = 0.0229191023086;
    msg.z = 0.500433057389;

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
    msg.setTimeStamp(0.0576056057802);
    msg.setSource(57202U);
    msg.setSourceEntity(61U);
    msg.setDestination(49964U);
    msg.setDestinationEntity(137U);
    msg.x = 0.632069925621;
    msg.y = 0.256915669485;
    msg.z = 0.567499063235;

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
    msg.setTimeStamp(0.360486316123);
    msg.setSource(45540U);
    msg.setSourceEntity(196U);
    msg.setDestination(37461U);
    msg.setDestinationEntity(145U);
    msg.x = 0.690325408117;
    msg.y = 0.96046686641;
    msg.z = 0.676820992417;

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
    msg.setTimeStamp(0.783399094224);
    msg.setSource(30849U);
    msg.setSourceEntity(45U);
    msg.setDestination(15741U);
    msg.setDestinationEntity(153U);
    msg.timeout = 23598U;
    msg.lat = 0.845219483016;
    msg.lon = 0.963150465781;
    msg.z = 0.525534460485;
    msg.z_units = 235U;
    msg.amplitude = 0.380544850084;
    msg.pitch = 0.0959611578395;
    msg.speed = 0.391920491517;
    msg.speed_units = 127U;
    msg.custom.assign("OCNRLLWHREXZMKVPJTDXSAFVXUEHALFPNQFIDGDSIMKYDGHBCWJBNBIYQLVSGDKMIOBPPKYCSHVUFYNEUIZVZHAUUAICZPZXCRHHROSPKNOSYJTBKPIVNBBNWVJOKQJWFHKJXLLS");

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
    msg.setTimeStamp(0.896563322501);
    msg.setSource(38776U);
    msg.setSourceEntity(156U);
    msg.setDestination(20295U);
    msg.setDestinationEntity(2U);
    msg.timeout = 26164U;
    msg.lat = 0.988445505494;
    msg.lon = 0.473320922622;
    msg.z = 0.728081938403;
    msg.z_units = 143U;
    msg.amplitude = 0.728483740439;
    msg.pitch = 0.696574665568;
    msg.speed = 0.62588780961;
    msg.speed_units = 98U;
    msg.custom.assign("RXZZUGRZQCFORLSTPEQTEXKCMEPXYVXUSZXWVUJCPPIGRJHAROVYBFGKJNKYBPHXEEWHBBLBLLPCOUCAQBANQFLYFDQDSTFXBGBWHIMLIRSTYHKUKRNSGXOTLUCPFTXFFODVOJIEVSKLIZJYYGAOYNDTCZDNYTUMWCVTIHQWSDRBMSQEDAEZWVLOGHDMMWIMPQNDIQASKUBUGOQKVXFMGZPNNCELFMNZZJVAHPNRKAJDIGWOI");

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
    msg.setTimeStamp(0.181565515395);
    msg.setSource(7106U);
    msg.setSourceEntity(77U);
    msg.setDestination(37797U);
    msg.setDestinationEntity(206U);
    msg.timeout = 31801U;
    msg.lat = 0.0234417987219;
    msg.lon = 0.274873974807;
    msg.z = 0.220560590201;
    msg.z_units = 238U;
    msg.amplitude = 0.70088503564;
    msg.pitch = 0.937410317975;
    msg.speed = 0.482661951554;
    msg.speed_units = 176U;
    msg.custom.assign("GMIEEQHABQAHJNOUXRIHJXSJNWORCTUCNEVFEBAAPOWJVDFHVQUTAIPWJSBNMADBBCUAMTZGEXPXASUTOUQYCEQRDNVEKSXFMKONALQCEZRYNLIVBKDGZUFFTPCEIRVDSLKOTDWSHLKBZBVYMRGJIYIVOYR");

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
    msg.setTimeStamp(0.870787117639);
    msg.setSource(48874U);
    msg.setSourceEntity(205U);
    msg.setDestination(18892U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.151389884264);
    msg.setSource(20115U);
    msg.setSourceEntity(220U);
    msg.setDestination(2702U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.808041757382);
    msg.setSource(31357U);
    msg.setSourceEntity(4U);
    msg.setDestination(59273U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.855469001202);
    msg.setSource(41941U);
    msg.setSourceEntity(221U);
    msg.setDestination(57408U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.328135179906;
    msg.lon = 0.322403317504;
    msg.z = 0.851858040199;
    msg.z_units = 212U;
    msg.radius = 0.705200779995;
    msg.duration = 33373U;
    msg.speed = 0.542704008687;
    msg.speed_units = 119U;
    msg.custom.assign("YMVYZVPQKOWITAXCGZAKJZVAFQSQBBVXZSSXHMYUDKOCWXKHQLVGIWNEMPUHEDPTNGPQELFEJHMXSVXYQFTKTKELLQZBREHYUKEDRINELAJNTJFXSOHUAVPWQBMDJHSQKPVIAVOSZRPUNVZCCHMDZJIXWRBNTHALYWCEAIRJLUGMNGOCOEWFIMRCYSMYGWPDRPOZRYUGFKYDLDUGJDNBRB");

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
    msg.setTimeStamp(0.764093548398);
    msg.setSource(43483U);
    msg.setSourceEntity(30U);
    msg.setDestination(55414U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.819360411613;
    msg.lon = 0.563604818654;
    msg.z = 0.66714578591;
    msg.z_units = 23U;
    msg.radius = 0.703231091025;
    msg.duration = 53529U;
    msg.speed = 0.224687862343;
    msg.speed_units = 170U;
    msg.custom.assign("HSULCHQEYZXNEFJDHKPFLENLRBVUMESIASAUNIGQYSJQKJOCIZP");

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
    msg.setTimeStamp(0.0347098987387);
    msg.setSource(4971U);
    msg.setSourceEntity(7U);
    msg.setDestination(47591U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.782634469134;
    msg.lon = 0.258849440991;
    msg.z = 0.54304586064;
    msg.z_units = 203U;
    msg.radius = 0.0695348978408;
    msg.duration = 51236U;
    msg.speed = 0.560950087318;
    msg.speed_units = 231U;
    msg.custom.assign("RQLQKYYKOCFJCCMDUENXGTGVJZVAHJVADMHZGMFWEXFFYOTGKMPMKIMQSDSKWHBAUKARBLZQOYUHBILFKJJUFEDRGHSVYFYBWERNWGVTIZYUYXLXRNJDXNDISYLICWUPUEDSJTOOHFRP");

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
    msg.setTimeStamp(0.822928080151);
    msg.setSource(32542U);
    msg.setSourceEntity(79U);
    msg.setDestination(1862U);
    msg.setDestinationEntity(108U);
    msg.timeout = 25487U;
    msg.flags = 170U;
    msg.lat = 0.696525938812;
    msg.lon = 0.862095850733;
    msg.start_z = 0.706766648482;
    msg.start_z_units = 129U;
    msg.end_z = 0.673782337718;
    msg.end_z_units = 55U;
    msg.radius = 0.597519663409;
    msg.speed = 0.213405037432;
    msg.speed_units = 188U;
    msg.custom.assign("YTUSEKOBCYFBSQLAXXJYYPMZCKCNVVQDVKALZVSPEFRJFMGDLLVIWLUIPCJNQETOGOQNTFXWGDPHFKMRZWMLALBZJSGSKPAEPEPBBEHZNKPAMPTXQRNYBWIJIWLHZSOSHCHKIVUHBGQYOOOGQRUGRVWXEEULBRBVTM");

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
    msg.setTimeStamp(0.592701805774);
    msg.setSource(51583U);
    msg.setSourceEntity(186U);
    msg.setDestination(1096U);
    msg.setDestinationEntity(58U);
    msg.timeout = 53303U;
    msg.flags = 71U;
    msg.lat = 0.779544837;
    msg.lon = 0.180672915002;
    msg.start_z = 0.0533223280116;
    msg.start_z_units = 134U;
    msg.end_z = 0.549799803603;
    msg.end_z_units = 69U;
    msg.radius = 0.34257666342;
    msg.speed = 0.196598077918;
    msg.speed_units = 25U;
    msg.custom.assign("UCWYTQXHDILQZDSZIYSIAAOXBWVMNEUTPPJKEAMVIJCBPDLCCTOMWDWMBGLKR");

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
    msg.setTimeStamp(0.526713220342);
    msg.setSource(52438U);
    msg.setSourceEntity(190U);
    msg.setDestination(61324U);
    msg.setDestinationEntity(87U);
    msg.timeout = 50577U;
    msg.flags = 240U;
    msg.lat = 0.1915398016;
    msg.lon = 0.209497780464;
    msg.start_z = 0.744429908716;
    msg.start_z_units = 238U;
    msg.end_z = 0.957896446454;
    msg.end_z_units = 118U;
    msg.radius = 0.538884537855;
    msg.speed = 0.456336747899;
    msg.speed_units = 59U;
    msg.custom.assign("EEXCMXEZCALNQEFBHUOPWTYDTOLUMDHJTJIIYNBPBCFMIZVNXDYYLOYGKZZYNXLWBVRMDCYPEAIJCNBPFJXSUQVFLFABSTDWQZAIROQUTPEGCSRESMCNFVIXGMQPRGHKLNDYHWXVKULBVNKXOOVHDLCIAKTFRL");

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
    msg.setTimeStamp(0.385889028398);
    msg.setSource(45452U);
    msg.setSourceEntity(240U);
    msg.setDestination(31492U);
    msg.setDestinationEntity(227U);
    msg.timeout = 26782U;
    msg.lat = 0.950195260451;
    msg.lon = 0.251944108559;
    msg.z = 0.754244179212;
    msg.z_units = 3U;
    msg.speed = 0.835615606938;
    msg.speed_units = 158U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.248115881393;
    tmp_msg_0.y = 0.535998677855;
    tmp_msg_0.z = 0.33054103528;
    tmp_msg_0.t = 0.125845129613;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JGHKXWIZOEDIMRIXJYSMXNXVVGLZPXJAUDYUHQMNBDKPOXPDWXYNSTSEHRPLRMILUVTCDELCTOFBEZZGCDELNYCLDLSTEF");

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
    msg.setTimeStamp(0.850241144518);
    msg.setSource(37311U);
    msg.setSourceEntity(28U);
    msg.setDestination(29313U);
    msg.setDestinationEntity(129U);
    msg.timeout = 19006U;
    msg.lat = 0.549281966527;
    msg.lon = 0.524753331609;
    msg.z = 0.815014552978;
    msg.z_units = 18U;
    msg.speed = 0.657420509236;
    msg.speed_units = 214U;
    msg.custom.assign("EFYAWLRHFRZ");

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
    msg.setTimeStamp(0.00521098404954);
    msg.setSource(34669U);
    msg.setSourceEntity(121U);
    msg.setDestination(63587U);
    msg.setDestinationEntity(155U);
    msg.timeout = 65376U;
    msg.lat = 0.0705769677526;
    msg.lon = 0.360141132386;
    msg.z = 0.644811656016;
    msg.z_units = 87U;
    msg.speed = 0.178307270425;
    msg.speed_units = 50U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.775039872162;
    tmp_msg_0.y = 0.538421778143;
    tmp_msg_0.z = 0.163045728553;
    tmp_msg_0.t = 0.64733202952;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UZUDOCAPMYEKKYWNAPTFUNOXQOXMQRGBLGWFWWMGTDYKNIFHYWQLBUEWBIDOSACATQGODCMOZQADOEFJXKLYYCLZQBGTYIVGXNUEERWSCQCTVKPSSKNPPEVJJARFXSNLJLMMMAJXYXKTTZRPKAASDMJW");

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
    msg.setTimeStamp(0.880858921506);
    msg.setSource(48971U);
    msg.setSourceEntity(73U);
    msg.setDestination(27754U);
    msg.setDestinationEntity(19U);
    msg.x = 0.246096817398;
    msg.y = 0.767801137098;
    msg.z = 0.147259603271;
    msg.t = 0.58421594549;

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
    msg.setTimeStamp(0.0582890269213);
    msg.setSource(13844U);
    msg.setSourceEntity(194U);
    msg.setDestination(14028U);
    msg.setDestinationEntity(8U);
    msg.x = 0.667990332792;
    msg.y = 0.684596062912;
    msg.z = 0.71240791744;
    msg.t = 0.252360595327;

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
    msg.setTimeStamp(0.226062727186);
    msg.setSource(26561U);
    msg.setSourceEntity(194U);
    msg.setDestination(36362U);
    msg.setDestinationEntity(66U);
    msg.x = 0.766465785937;
    msg.y = 0.399240149575;
    msg.z = 0.758145331269;
    msg.t = 0.427294933938;

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
    msg.setTimeStamp(0.922691516333);
    msg.setSource(40543U);
    msg.setSourceEntity(91U);
    msg.setDestination(3013U);
    msg.setDestinationEntity(90U);
    msg.timeout = 931U;
    msg.name.assign("NQGPZAYOFYINBJIJEBYAMTLFCWKIWXKMHITXUHPDELZSXGBRRTUHJSYOFZKXMYQPTFZCRVGQLASMLKVBNOCQOUHWGRQRQMKSDNAFPWVUXBLDJJCWHHZQGUPESITINVSBTGGZ");
    msg.custom.assign("UBNZTQMJKNBCUEDAJPLGTMAMBOPCKJRLKWHHLSQDPPVGRYKLVRJPNZTAVGVWVBUTZFESEJGQPQCSDNVCAHRFID");

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
    msg.setTimeStamp(0.97502190682);
    msg.setSource(62965U);
    msg.setSourceEntity(28U);
    msg.setDestination(18632U);
    msg.setDestinationEntity(144U);
    msg.timeout = 43499U;
    msg.name.assign("TXFHFNEBIQPYMSIVRZCHNOEOFWWPLJPDPDKQYJEHZKJRZJCUTQVKMXAMTSQBPYRIWOLKYNBMTTOUFEVZRBYAFALMUSJWCWRMUIXGPSIISWSDXNGRAOXGJYRARZEDFNVPJTKECVKMBIWUPLMUSXTAEILEGUYTZDLSANOZLQMQCQZBDESGNHYZVWYFUXGCCAQDAGCSGCRJDENPHJKUHQKYPXGAOHVLUWHROVWFNIVJNHTC");
    msg.custom.assign("NUPEHPYNDWDTDUIKHRHPTALWAPFKJOQZYGGHZBAISXFH");

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
    msg.setTimeStamp(0.246629710532);
    msg.setSource(4618U);
    msg.setSourceEntity(131U);
    msg.setDestination(37474U);
    msg.setDestinationEntity(181U);
    msg.timeout = 65247U;
    msg.name.assign("ZXQKQYCOIAJUTXHQRWTAHNTVBDJIQKUSDNXRWGITAUQKYRAALAGULNMGSMMRCRZCUZGLFSSXRJIVDNBDAQWFXBSGZYBPHPOCWLSYQICRHHPEEBIEOZTHYWUV");
    msg.custom.assign("XYZNXTGRSTYFLCZJWZWBAVUYIVBABUDWHHTUOQKBLOFONXIRZCWZCVCSMNRKVEXIHGJBFIPXPLUPTEJIQOHQYNXWBSNZWUSNYRNHODPLGZPKGOIMPQNKHKAVHSJFSXFEHIMUTSUAKHQLEDQJPKUJLWDMFLDRKVFGLAWEKLMDZVEYSOEBVWVCTYUFGRAIWBTFCTADDZYMZJOPYACE");

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
    msg.setTimeStamp(0.304356832183);
    msg.setSource(34870U);
    msg.setSourceEntity(159U);
    msg.setDestination(30718U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.216946637179;
    msg.lon = 0.194095076198;
    msg.z = 0.880206561075;
    msg.z_units = 195U;
    msg.speed = 0.204123853453;
    msg.speed_units = 137U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.037855731135;
    tmp_msg_0.y = 0.94053616461;
    tmp_msg_0.z = 0.392447422706;
    tmp_msg_0.t = 0.0460822542677;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 46235U;
    tmp_msg_1.off_x = 0.299114590828;
    tmp_msg_1.off_y = 0.247863101882;
    tmp_msg_1.off_z = 0.203851499494;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.407012451445;
    msg.custom.assign("RFREPWKZRJZWUVVOQKVJ");

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
    msg.setTimeStamp(0.140778649759);
    msg.setSource(54354U);
    msg.setSourceEntity(22U);
    msg.setDestination(44067U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.792206979221;
    msg.lon = 0.082013094953;
    msg.z = 0.970702372933;
    msg.z_units = 54U;
    msg.speed = 0.342895997985;
    msg.speed_units = 225U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.835977720207;
    tmp_msg_0.y = 0.44875615537;
    tmp_msg_0.z = 0.411922040096;
    tmp_msg_0.t = 0.391008632485;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 16407U;
    tmp_msg_1.off_x = 0.246985717986;
    tmp_msg_1.off_y = 0.671509995916;
    tmp_msg_1.off_z = 0.685549006799;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.820293725532;
    msg.custom.assign("RCGADIXSHARJGNLHMYHJKWGOYMUYSSWCXKGBETYBBVFNKKTCZOZQVNMKHBFHRGABLRRQCWBZWSIPNPYCSCXQNHAKXQYEUZUIVXQCUYGULLMUPMNDPVFJPDEWWSMVBIGSQIMTSCYAFZFNXAMXBXTTODAKYIFKLFDAEMYAHGPZDNMROIOQLWFHWVV");

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
    msg.setTimeStamp(0.0405862145683);
    msg.setSource(41471U);
    msg.setSourceEntity(168U);
    msg.setDestination(20679U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.614179980068;
    msg.lon = 0.0148875614179;
    msg.z = 0.42975137015;
    msg.z_units = 56U;
    msg.speed = 0.488742476132;
    msg.speed_units = 4U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44156U;
    tmp_msg_0.off_x = 0.838252893158;
    tmp_msg_0.off_y = 0.850017898453;
    tmp_msg_0.off_z = 0.172322297765;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.305205424283;
    msg.custom.assign("JYKREAXPUMFEVUESINXWHUAFZWEBBMRONGNGLBOJAJBTMXCLZWVIRQTKODOBSTGPCYCV");

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
    msg.setTimeStamp(0.28702074218);
    msg.setSource(16756U);
    msg.setSourceEntity(233U);
    msg.setDestination(15388U);
    msg.setDestinationEntity(157U);
    msg.vid = 53318U;
    msg.off_x = 0.130453425353;
    msg.off_y = 0.478412023332;
    msg.off_z = 0.875663862501;

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
    msg.setTimeStamp(0.836745024334);
    msg.setSource(20920U);
    msg.setSourceEntity(116U);
    msg.setDestination(46020U);
    msg.setDestinationEntity(70U);
    msg.vid = 1534U;
    msg.off_x = 0.237861566421;
    msg.off_y = 0.995267905073;
    msg.off_z = 0.560557619465;

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
    msg.setTimeStamp(0.840921536425);
    msg.setSource(4029U);
    msg.setSourceEntity(2U);
    msg.setDestination(5894U);
    msg.setDestinationEntity(116U);
    msg.vid = 61655U;
    msg.off_x = 0.102131437957;
    msg.off_y = 0.237097803323;
    msg.off_z = 0.0652505583367;

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
    msg.setTimeStamp(0.694487540159);
    msg.setSource(29632U);
    msg.setSourceEntity(104U);
    msg.setDestination(38180U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.272899440667);
    msg.setSource(46961U);
    msg.setSourceEntity(201U);
    msg.setDestination(40880U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.155251099072);
    msg.setSource(46216U);
    msg.setSourceEntity(68U);
    msg.setDestination(60097U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.00979929324293);
    msg.setSource(42786U);
    msg.setSourceEntity(203U);
    msg.setDestination(57077U);
    msg.setDestinationEntity(224U);
    msg.mid = 12742U;

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
    msg.setTimeStamp(0.948096488875);
    msg.setSource(23496U);
    msg.setSourceEntity(192U);
    msg.setDestination(19402U);
    msg.setDestinationEntity(213U);
    msg.mid = 21700U;

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
    msg.setTimeStamp(0.129201156013);
    msg.setSource(41993U);
    msg.setSourceEntity(124U);
    msg.setDestination(34318U);
    msg.setDestinationEntity(224U);
    msg.mid = 34072U;

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
    msg.setTimeStamp(0.221594766903);
    msg.setSource(30712U);
    msg.setSourceEntity(179U);
    msg.setDestination(5315U);
    msg.setDestinationEntity(228U);
    msg.state = 240U;
    msg.eta = 18854U;
    msg.info.assign("YCLXKAMEWVGTKRNQXBZZDHAMYFONDSRGBBJIPZVPBIHSAGIMOQZQAFSFAGYWJXAGSLJRADOWQSOCQPYJJZDMWQOFOXICXUVIRVLHPVFWKSNURVWUPXHUETRSZGNYGDBTGYJNNTNZLXKMLURCPEWDXZJOYQTNLWSYYSTJWVERKUCNMFRKLELKPMCFCHBFYIQGQZDHXMI");

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
    msg.setTimeStamp(0.537270334285);
    msg.setSource(21118U);
    msg.setSourceEntity(42U);
    msg.setDestination(42249U);
    msg.setDestinationEntity(223U);
    msg.state = 31U;
    msg.eta = 25215U;
    msg.info.assign("GPTWKOBWZRLNSQMLMWKKGUEHOMVAZRCUAYDOUDINAVDZSFATCJNRILHVZGRXCMZPQUYUZANALQBXXWBNGNKMBTPHPOEGKEWVZFJBONC");

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
    msg.setTimeStamp(0.0565031277773);
    msg.setSource(43048U);
    msg.setSourceEntity(119U);
    msg.setDestination(11142U);
    msg.setDestinationEntity(140U);
    msg.state = 38U;
    msg.eta = 50934U;
    msg.info.assign("EJMXKULOYCVAELPOHACWKVWMWLSJHAKFPYBD");

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
    msg.setTimeStamp(0.0512719239774);
    msg.setSource(58608U);
    msg.setSourceEntity(200U);
    msg.setDestination(38944U);
    msg.setDestinationEntity(78U);
    msg.system = 40524U;
    msg.duration = 5653U;
    msg.speed = 0.18405136199;
    msg.speed_units = 183U;
    msg.x = 0.805268150473;
    msg.y = 0.526339277907;
    msg.z = 0.146882312961;
    msg.z_units = 160U;

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
    msg.setTimeStamp(0.528255818049);
    msg.setSource(38368U);
    msg.setSourceEntity(108U);
    msg.setDestination(32886U);
    msg.setDestinationEntity(107U);
    msg.system = 36913U;
    msg.duration = 44107U;
    msg.speed = 0.827582411736;
    msg.speed_units = 4U;
    msg.x = 0.734095423955;
    msg.y = 0.422010886684;
    msg.z = 0.691098557126;
    msg.z_units = 105U;

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
    msg.setTimeStamp(0.723318330007);
    msg.setSource(11540U);
    msg.setSourceEntity(115U);
    msg.setDestination(57723U);
    msg.setDestinationEntity(166U);
    msg.system = 5737U;
    msg.duration = 34352U;
    msg.speed = 0.978678582557;
    msg.speed_units = 93U;
    msg.x = 0.501746119285;
    msg.y = 0.357328271753;
    msg.z = 0.313856915997;
    msg.z_units = 13U;

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
    msg.setTimeStamp(0.255311305246);
    msg.setSource(35519U);
    msg.setSourceEntity(250U);
    msg.setDestination(30742U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.310272868446;
    msg.lon = 0.142506260926;
    msg.speed = 0.0520185124279;
    msg.speed_units = 39U;
    msg.duration = 64267U;
    msg.sys_a = 60139U;
    msg.sys_b = 38127U;
    msg.move_threshold = 0.205070189973;

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
    msg.setTimeStamp(0.498654038912);
    msg.setSource(40915U);
    msg.setSourceEntity(241U);
    msg.setDestination(27711U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.591311563313;
    msg.lon = 0.726393192603;
    msg.speed = 0.390673817997;
    msg.speed_units = 145U;
    msg.duration = 24895U;
    msg.sys_a = 27180U;
    msg.sys_b = 64248U;
    msg.move_threshold = 0.998047965534;

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
    msg.setTimeStamp(0.397514707627);
    msg.setSource(20464U);
    msg.setSourceEntity(221U);
    msg.setDestination(4876U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.988095809248;
    msg.lon = 0.40044513338;
    msg.speed = 0.064118127434;
    msg.speed_units = 130U;
    msg.duration = 27922U;
    msg.sys_a = 55326U;
    msg.sys_b = 37449U;
    msg.move_threshold = 0.872108499487;

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
    msg.setTimeStamp(0.983452612508);
    msg.setSource(17121U);
    msg.setSourceEntity(29U);
    msg.setDestination(43600U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.382395323772;
    msg.lon = 0.914420809846;
    msg.z = 0.0824497555442;
    msg.z_units = 105U;
    msg.speed = 0.156664862167;
    msg.speed_units = 91U;
    msg.custom.assign("GRMWBPUDPNBNCODIJWKMIZTRFUTMAPUYUXKGORINEJGSTJTEEDNHYFOUFNQOWJQPFXBEUZLTXPZBIVSHVXSOACSHKTZTVHLOACJCKQDGMEUQBVSJIYDFEVHRMILUPLBXDAEDKTXVVLFLQMAZGHXEYMWNSGYCEOCRZFGAIZGDZFBACWSHTCNHRMHQXXLOCNJPZVJLUJHWPLSFVQDGJPVBKYSAYBRWMGRNBWIKCWXLQRKSYDTUOIRY");

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
    msg.setTimeStamp(0.203647560816);
    msg.setSource(13079U);
    msg.setSourceEntity(245U);
    msg.setDestination(60785U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.476432379438;
    msg.lon = 0.896354025373;
    msg.z = 0.77114594019;
    msg.z_units = 209U;
    msg.speed = 0.56248698318;
    msg.speed_units = 39U;
    msg.custom.assign("SELILHPRYMSWBXPGUFBCECHAXXVUVVZIJSYVFQMVIPPKQFNDTLFMJZHZTWUHFKAEGHZONDSWYXGFAIROYVOSYDQGVNXRQCPRBNVMWMCOCBATHMHAAVRJLCDJZTSKTGYAZTTLSHOFDURZJATLIDBLEO");

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
    msg.setTimeStamp(0.16849477253);
    msg.setSource(65522U);
    msg.setSourceEntity(13U);
    msg.setDestination(52080U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.612037068498;
    msg.lon = 0.919141340728;
    msg.z = 0.869384197228;
    msg.z_units = 23U;
    msg.speed = 0.829896620536;
    msg.speed_units = 240U;
    msg.custom.assign("ITYKQCUJYPEGBMEMUTIXXMSYLNRJSJXHUECHOGZQAQKILLNKISULTQLQXSNPCOFHZNQIOHYNWQCOWPDGIZIDMCPXPAGAVIVEJNZOKAZSEUJBTUWJFPARPDVFDBMSNRAEYSSFWCGRBTAEHWZCAYKUFWCUDFZRWMXEFUP");

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
    msg.setTimeStamp(0.899534508749);
    msg.setSource(53716U);
    msg.setSourceEntity(216U);
    msg.setDestination(11488U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.15464904779;
    msg.lon = 0.062615263049;

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
    msg.setTimeStamp(0.540990086113);
    msg.setSource(46105U);
    msg.setSourceEntity(50U);
    msg.setDestination(27726U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.201638489025;
    msg.lon = 0.826468963056;

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
    msg.setTimeStamp(0.97719556618);
    msg.setSource(5991U);
    msg.setSourceEntity(49U);
    msg.setDestination(21734U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.514305226239;
    msg.lon = 0.615305160519;

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
    msg.setTimeStamp(0.567629977862);
    msg.setSource(40014U);
    msg.setSourceEntity(193U);
    msg.setDestination(36150U);
    msg.setDestinationEntity(170U);
    msg.timeout = 60040U;
    msg.lat = 0.895996622638;
    msg.lon = 0.623140382528;
    msg.z = 0.464127515628;
    msg.z_units = 83U;
    msg.pitch = 0.993309306094;
    msg.amplitude = 0.391694294428;
    msg.duration = 64343U;
    msg.speed = 0.87907220873;
    msg.speed_units = 188U;
    msg.radius = 0.893352288428;
    msg.direction = 70U;
    msg.custom.assign("SABXKRVANPJTIWDVOAVMUHTWWIFZJYNW");

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
    msg.setTimeStamp(0.787119504474);
    msg.setSource(46191U);
    msg.setSourceEntity(237U);
    msg.setDestination(14823U);
    msg.setDestinationEntity(10U);
    msg.timeout = 40597U;
    msg.lat = 0.0172607164973;
    msg.lon = 0.316028380103;
    msg.z = 0.908125084624;
    msg.z_units = 200U;
    msg.pitch = 0.867364286872;
    msg.amplitude = 0.397892268182;
    msg.duration = 43380U;
    msg.speed = 0.306755108133;
    msg.speed_units = 178U;
    msg.radius = 0.748994148305;
    msg.direction = 157U;
    msg.custom.assign("DMYZFQOJLWNBFMARRIGRUUEPLUYEOQLRYLMSUGYXHAYGPDYDHIBCUPNMBHITJGKQTQYJTZEQWOSUVNGNCKCYCFCNTLIWZNJGXVYNODOUAQJZWLVCHKMPQLTOQOPFKIGPJJSSQPFNTGOPCSKXGAVBIIUVFKPWIESAZ");

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
    msg.setTimeStamp(0.475139740744);
    msg.setSource(43820U);
    msg.setSourceEntity(66U);
    msg.setDestination(34791U);
    msg.setDestinationEntity(5U);
    msg.timeout = 42207U;
    msg.lat = 0.576432604364;
    msg.lon = 0.450044721297;
    msg.z = 0.244868702976;
    msg.z_units = 63U;
    msg.pitch = 0.979116664519;
    msg.amplitude = 0.970998821275;
    msg.duration = 10017U;
    msg.speed = 0.468375231608;
    msg.speed_units = 52U;
    msg.radius = 0.112824471056;
    msg.direction = 55U;
    msg.custom.assign("JYYCEAKRMVQTBRUEFXPCAJJ");

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
    msg.setTimeStamp(0.431371235662);
    msg.setSource(37910U);
    msg.setSourceEntity(41U);
    msg.setDestination(62213U);
    msg.setDestinationEntity(127U);
    msg.formation_name.assign("XPFQFHLKESIDVVQLGUWZLMRLJUWIYONEUXTFZLOPJMZNNIBIDGDOGTIBAFSKWQZMTVMHB");
    msg.reference_frame = 109U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38833U;
    tmp_msg_0.off_x = 0.937686709376;
    tmp_msg_0.off_y = 0.509791772459;
    tmp_msg_0.off_z = 0.764025260388;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WVUXQZBKZBKYUBNJHPBYMFMKRCTCRYCCWOAFDBSYWDNVEERZWNZLLIWJSWSVEBQSAAPFVJVSPGQEOHLHRHTLZIAHIQUOXCAPOUQTGPMFFHODIIBMYLSYLAXCCQTUAXDTQDPMSUNXROPHXJEUETPVFMQWRGXVEDHJUMKXCOZGXJKYRAKKSDJVWRTRTNKQNJIYBYWLNOAHOBFNZGUNQMNHRFJPGPTFGIJIZOFGILCBDAGGUSDELEZ");

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
    msg.setTimeStamp(0.685649507263);
    msg.setSource(14569U);
    msg.setSourceEntity(68U);
    msg.setDestination(35219U);
    msg.setDestinationEntity(187U);
    msg.formation_name.assign("YQYPCNJNNXRWITYFV");
    msg.reference_frame = 213U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10111U;
    tmp_msg_0.off_x = 0.090953860478;
    tmp_msg_0.off_y = 0.779393865189;
    tmp_msg_0.off_z = 0.379084249814;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TBBOJVNIUOBCLTEXZZSYVNJMBPDRSRUARCTFRZPYWLOWXCTEXJIPNNORETNPSZYOMRHNUNIOYPUCVLBZHGMBYBFMPYKSJQHTTUXLHBAON");

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
    msg.setTimeStamp(0.039170002496);
    msg.setSource(56792U);
    msg.setSourceEntity(88U);
    msg.setDestination(58279U);
    msg.setDestinationEntity(29U);
    msg.formation_name.assign("HOJJMFSZIXFGEVDDHLNQSRRETOIDFDAHPFDGNUAVDKTZAARGJUYKSKBOWLAPWJVIDQPWUGGILMUECBYKEUFFNSDPZTKQJTEKWLLCVWOUOQNXIYMIFSJZGPTWSPPIZUTAYLOFZPHEXFTZXMZXJUXGQWOXGINDMRVRJYXNBEMHVFDITNVH");
    msg.reference_frame = 74U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64945U;
    tmp_msg_0.off_x = 0.446929859538;
    tmp_msg_0.off_y = 0.228552734044;
    tmp_msg_0.off_z = 0.961749961352;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WMEAEZXPPCCIPCWPRIDRKUMLXGITWQBYTVYZBLECSOKVHYETIYJMONGQHCWGPUPCFFIRKLVBRTZLRSZETHOCWSYFCFNKDKSFJKCSRIBZUWIOYNLMUQCRXXQXLGZAAGAIUAYOJANVQDBIEKHHGJMDBGDUPVQWINDYQVAUXJFWAHTRPEFQNXTRGZWN");

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
    msg.setTimeStamp(0.573840864928);
    msg.setSource(49855U);
    msg.setSourceEntity(56U);
    msg.setDestination(63285U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("HRNORSWPISXEXZPZGOTVEJZKYJJHIAQRXXCCFOFHMGBUDLJHGTABWFLDZSEMQKMHZZRKTGLPRYYMZNFWKNVPSKUJUDGYJXWZRVIBLQUSBGSDADRVIWLVCELLTJJYCQEWPUGWKHTVXBNEPEH");
    msg.formation_name.assign("CTZQZJFPNTHYHOIDJLABKFWTNNGNXKSWVKCEPYFLJCQNQDLBBQFNZTMRCOVTTXESBBWVRFLZUUUCYZAIYDMUSUGRSERWSGKGEKPBRQDHVAWDMLZUADWCKLYPNHACGDHFEMCVMIONHKCAIDYMSEGQZDZHBWVZXVMWGDPQREL");
    msg.plan_id.assign("WCXGVCOLOSAYYHJVTXFKPJZMEMUGEKZQTTWARSOOIZLZSJGVHFWYFVPCHLBMNDCIJPEUBQSRMVFVRDQNFCYSJTXLUEQAOBVHTJUGBBTINARNOXPDIJWDWXQRDBSZEGNPPLEGULMMSXQELXPRSLHEZQRKHTOPGIOGZDRHOJYONPINGAAIKVQMFTTZWIAFSUDNDFKCBTAGAXMHBYVKSXHUDXPNBZJRFZCKAJWWYVNR");
    msg.description.assign("GIAPDXAJBIEHJHVJSFFCAYJNZRVCI");
    msg.leader_speed = 0.260456337332;
    msg.leader_bank_lim = 0.310433504736;
    msg.pos_sim_err_lim = 0.619055210306;
    msg.pos_sim_err_wrn = 0.667700145679;
    msg.pos_sim_err_timeout = 4837U;
    msg.converg_max = 0.956806339733;
    msg.converg_timeout = 62488U;
    msg.comms_timeout = 39972U;
    msg.turb_lim = 0.0757517528717;
    msg.custom.assign("ECWOFBOZEUCEKBMGLWPQJDNAM");

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
    msg.setTimeStamp(0.744754216508);
    msg.setSource(1445U);
    msg.setSourceEntity(193U);
    msg.setDestination(4080U);
    msg.setDestinationEntity(13U);
    msg.group_name.assign("UMSQCHNHZZRZUGZNGZEALLHOWMVERBTDJVXTJP");
    msg.formation_name.assign("DKNOTDDNNHVQGPAIJBANAONNGYSQZPMYVUNWRCRJVFKRGZTUZYEJLQBVKRTWSWJXJBSHXMSSQPMETTUWLDWMPOHPLJZFGEFYPUVXKZBDHHVBOKVQWQHXZFIMMTGQIVCMZURUVLZLRDNYFQKPPKLIOEOGQRKOMAXYJ");
    msg.plan_id.assign("SNNUDFLZSEJLGQIVDWDNJFYONQAFVOGHUICPEFVXOUUCJFBSXCTKCANLGBVSNEAGNZLBCHZYLKNZYLQJXHZFDKAVTKMBRWCQQYUAIABUTWCDJICSBZLOJOOXOMPRHRMFTRYPWS");
    msg.description.assign("NCTAZLKWUINFUFCMOSJYHMQIFZAPETHCOPWDEPMWGVRAJLJCSFHMVREVRNSBBMIZRBKOBTSYVPHXGUBCOXIBKFTNSDINDPQAVKSDECCUWHRVQPKMUAYZGWQYFOXGTTDFTUJSQTVDGBZASAWZVQEXAZABOWEJLGOYVJFDHIMDQDOULZZIQBCRYLEREMWPKXFXY");
    msg.leader_speed = 0.365762700877;
    msg.leader_bank_lim = 0.324610130402;
    msg.pos_sim_err_lim = 0.334396259411;
    msg.pos_sim_err_wrn = 0.606890619306;
    msg.pos_sim_err_timeout = 30961U;
    msg.converg_max = 0.513056632757;
    msg.converg_timeout = 25272U;
    msg.comms_timeout = 44674U;
    msg.turb_lim = 0.536499644949;
    msg.custom.assign("HCQDSDKIMZNRLVFJMROMBYLOKGNTPHZLJDKYQGYWQYUWCEZDMDQEBFMGOOWUURNKZEUVQZVHSAIVSAATIGVQUIWATWFZLUNBXMGAFTCJDTFEJUCRQNZWPAIQOPBMTXFQSMIGBXYPCLMRNTHEDAHBWLSKWBDJIAZVMPJDHZBPEHGYEPKSXRRYTPJJTWHXYYSC");

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
    msg.setTimeStamp(0.109880512475);
    msg.setSource(42870U);
    msg.setSourceEntity(112U);
    msg.setDestination(20987U);
    msg.setDestinationEntity(62U);
    msg.group_name.assign("LYUGFCWXUQLOCHXJUNULZSCWIUKQHKIIACREZFLFMMAGVMJGDMVQPETMRDEKBNTUTSCJHKYGHXIDLSPCCHNUWYXUSALKGFXJNVUTPAIQNJGOILAZKTZRIEBRBHHGNSADRMDZOJQYDREUINKROZFAAXVIHPMFFMYWBKRZVSMLGOTBWDXKWBOQVYQPAOWOYEVQWPFNBZSNSZERTBWLKDCBDPJCEMSVYXPS");
    msg.formation_name.assign("FJYIYZLXTNLIRFYZPTJCGUSIVGRDXPHWVFFSTXXEFEFARSA");
    msg.plan_id.assign("ZIJITEGWOBEWPVCVPSFUNYTAHCJTHYIMNFNPLZXZITZRWBSRHVMJEFIPGPUKQZCMUPXJEMKILWIVCUNXVEDEGOKJMBKRFUOEAGWTMXGKYRPNXCHNASVHKDGLCYLZGGAOQCBZJORWGTPMRCFSIYWEFVYQBSUYXQHNDSOWFDZBOZKNKAJBLMQHZLIDROPSNQBOUBDXDKAQV");
    msg.description.assign("AORKACYNIOWSXOOXSLSULDOLIMMXWCOESGZOAZFCUXKQPCGEPLLJCIJUHXSNMHEVNEAWVLEI");
    msg.leader_speed = 0.885477270033;
    msg.leader_bank_lim = 0.252816995511;
    msg.pos_sim_err_lim = 0.338803009508;
    msg.pos_sim_err_wrn = 0.146829552531;
    msg.pos_sim_err_timeout = 45638U;
    msg.converg_max = 0.287350089906;
    msg.converg_timeout = 25511U;
    msg.comms_timeout = 28024U;
    msg.turb_lim = 0.786270351938;
    msg.custom.assign("EEBKSECQPKHROTOBBLYKSQFBZWXSJSDTOMDYYQRXNFMGLFKORGVYKJTICPLTZEXFSZTZLQVNSOJFYVCCCSDWFHVWENAYGTNVJOFGJILXFUQQKNGWQNTIKCXHANKJJWIUPIPVKPWBDZGBCMVDLYFRYBXGRYQVPVMOSXANQDURBEBKLAXAC");

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
    msg.setTimeStamp(0.316990150421);
    msg.setSource(1674U);
    msg.setSourceEntity(163U);
    msg.setDestination(11066U);
    msg.setDestinationEntity(81U);
    msg.control_src = 50611U;
    msg.control_ent = 26U;
    msg.timeout = 0.273807175261;
    msg.loiter_radius = 0.376491079265;
    msg.altitude_interval = 0.561162413313;

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
    msg.setTimeStamp(0.0927624140646);
    msg.setSource(9761U);
    msg.setSourceEntity(48U);
    msg.setDestination(57442U);
    msg.setDestinationEntity(176U);
    msg.control_src = 17127U;
    msg.control_ent = 214U;
    msg.timeout = 0.760192282317;
    msg.loiter_radius = 0.257852241895;
    msg.altitude_interval = 0.602318485885;

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
    msg.setTimeStamp(0.360732792588);
    msg.setSource(56083U);
    msg.setSourceEntity(244U);
    msg.setDestination(39405U);
    msg.setDestinationEntity(1U);
    msg.control_src = 44702U;
    msg.control_ent = 189U;
    msg.timeout = 0.999541426541;
    msg.loiter_radius = 0.0938906660289;
    msg.altitude_interval = 0.471881456785;

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
    msg.setTimeStamp(0.624018007633);
    msg.setSource(42350U);
    msg.setSourceEntity(195U);
    msg.setDestination(19213U);
    msg.setDestinationEntity(132U);
    msg.flags = 25U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.216616865316;
    tmp_msg_0.speed_units = 247U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.980962741596;
    tmp_msg_1.z_units = 180U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.915861264631;
    msg.lon = 0.837624077683;
    msg.radius = 0.842012282997;

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
    msg.setTimeStamp(0.435742430384);
    msg.setSource(7773U);
    msg.setSourceEntity(244U);
    msg.setDestination(50175U);
    msg.setDestinationEntity(88U);
    msg.flags = 34U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.604038486824;
    tmp_msg_0.speed_units = 227U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.272459806887;
    tmp_msg_1.z_units = 62U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.716651691795;
    msg.lon = 0.290859841169;
    msg.radius = 0.435531542305;

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
    msg.setTimeStamp(0.450381874475);
    msg.setSource(10941U);
    msg.setSourceEntity(196U);
    msg.setDestination(31593U);
    msg.setDestinationEntity(82U);
    msg.flags = 21U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.483066761587;
    tmp_msg_0.speed_units = 165U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.315563687694;
    tmp_msg_1.z_units = 208U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.732074020969;
    msg.lon = 0.908478780247;
    msg.radius = 0.931481309225;

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
    msg.setTimeStamp(0.945987631053);
    msg.setSource(59056U);
    msg.setSourceEntity(135U);
    msg.setDestination(9219U);
    msg.setDestinationEntity(27U);
    msg.control_src = 55935U;
    msg.control_ent = 123U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 104U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.318632098411;
    tmp_tmp_msg_0_0.speed_units = 186U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0689709705848;
    tmp_tmp_msg_0_1.z_units = 33U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.707684024677;
    tmp_msg_0.lon = 0.848831575118;
    tmp_msg_0.radius = 0.429748667334;
    msg.reference.set(tmp_msg_0);
    msg.state = 216U;
    msg.proximity = 48U;

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
    msg.setTimeStamp(0.703216458493);
    msg.setSource(3311U);
    msg.setSourceEntity(57U);
    msg.setDestination(53619U);
    msg.setDestinationEntity(40U);
    msg.control_src = 2793U;
    msg.control_ent = 171U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 150U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.355632127841;
    tmp_tmp_msg_0_0.speed_units = 87U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.379723658358;
    tmp_tmp_msg_0_1.z_units = 175U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.344890990788;
    tmp_msg_0.lon = 0.936285269598;
    tmp_msg_0.radius = 0.973088819369;
    msg.reference.set(tmp_msg_0);
    msg.state = 143U;
    msg.proximity = 77U;

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
    msg.setTimeStamp(0.837124824478);
    msg.setSource(43386U);
    msg.setSourceEntity(114U);
    msg.setDestination(18497U);
    msg.setDestinationEntity(89U);
    msg.control_src = 48726U;
    msg.control_ent = 84U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 239U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.948411589378;
    tmp_tmp_msg_0_0.speed_units = 11U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.883595616874;
    tmp_tmp_msg_0_1.z_units = 19U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.71414293523;
    tmp_msg_0.lon = 0.370468429684;
    tmp_msg_0.radius = 0.299179406055;
    msg.reference.set(tmp_msg_0);
    msg.state = 219U;
    msg.proximity = 204U;

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
    msg.setTimeStamp(0.508465501389);
    msg.setSource(27944U);
    msg.setSourceEntity(41U);
    msg.setDestination(14847U);
    msg.setDestinationEntity(129U);
    msg.ax_cmd = 0.668541003849;
    msg.ay_cmd = 0.662148718703;
    msg.az_cmd = 0.780295519404;
    msg.ax_des = 0.605448337725;
    msg.ay_des = 0.824936305649;
    msg.az_des = 0.502136839334;
    msg.virt_err_x = 0.96660603369;
    msg.virt_err_y = 0.580297693553;
    msg.virt_err_z = 0.745106910941;
    msg.surf_fdbk_x = 0.83138619953;
    msg.surf_fdbk_y = 0.185216813676;
    msg.surf_fdbk_z = 0.187839757449;
    msg.surf_unkn_x = 0.792525871259;
    msg.surf_unkn_y = 0.993458568657;
    msg.surf_unkn_z = 0.810461094147;
    msg.ss_x = 0.882557176926;
    msg.ss_y = 0.799305855339;
    msg.ss_z = 0.184144520093;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZIZSKZRDHYKSFQRLXLUVUPINXMWYTSUQSJLOMBJBDINOQGARMPJOMTZEYOCQDSWPGKLUHMLXVMTLCAAUAANLRVVQRMGIVPEXKYNRYSSAPRBAEUNGYGGRHBSPFOXCVCNMFXRWBQLIZQKDFWTLUTDJPJNGQXUHKYMLTTEHFJEOVETJBVKTENHDSUYOOYBBDWXKXICJXOGKQFODJCEWHHEDVPIFZMGCQIFZTVHS");
    tmp_msg_0.dist = 0.166112082636;
    tmp_msg_0.err = 0.637177760332;
    tmp_msg_0.ctrl_imp = 0.0329021846112;
    tmp_msg_0.rel_dir_x = 0.234745468532;
    tmp_msg_0.rel_dir_y = 0.594959223044;
    tmp_msg_0.rel_dir_z = 0.506898876448;
    tmp_msg_0.err_x = 0.0063129774703;
    tmp_msg_0.err_y = 0.335606022015;
    tmp_msg_0.err_z = 0.342959043456;
    tmp_msg_0.rf_err_x = 0.473833784974;
    tmp_msg_0.rf_err_y = 0.239791901887;
    tmp_msg_0.rf_err_z = 0.0014337307165;
    tmp_msg_0.rf_err_vx = 0.612217891345;
    tmp_msg_0.rf_err_vy = 0.370379862994;
    tmp_msg_0.rf_err_vz = 0.773273057;
    tmp_msg_0.ss_x = 0.202271418414;
    tmp_msg_0.ss_y = 0.908509326656;
    tmp_msg_0.ss_z = 0.592497180322;
    tmp_msg_0.virt_err_x = 0.390426378987;
    tmp_msg_0.virt_err_y = 0.378610472389;
    tmp_msg_0.virt_err_z = 0.107129015996;
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
    msg.setTimeStamp(0.714736571824);
    msg.setSource(23681U);
    msg.setSourceEntity(210U);
    msg.setDestination(41534U);
    msg.setDestinationEntity(102U);
    msg.ax_cmd = 0.259560051867;
    msg.ay_cmd = 0.345071269081;
    msg.az_cmd = 0.562816597915;
    msg.ax_des = 0.66317159348;
    msg.ay_des = 0.796902135905;
    msg.az_des = 0.909158369421;
    msg.virt_err_x = 0.195684611699;
    msg.virt_err_y = 0.214153525464;
    msg.virt_err_z = 0.711151790108;
    msg.surf_fdbk_x = 0.571506879498;
    msg.surf_fdbk_y = 0.345436482994;
    msg.surf_fdbk_z = 0.405199064854;
    msg.surf_unkn_x = 0.880034844836;
    msg.surf_unkn_y = 0.552259845027;
    msg.surf_unkn_z = 0.753757909428;
    msg.ss_x = 0.75897918716;
    msg.ss_y = 0.670462592799;
    msg.ss_z = 0.438074737506;

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
    msg.setTimeStamp(0.284069761412);
    msg.setSource(41549U);
    msg.setSourceEntity(83U);
    msg.setDestination(12338U);
    msg.setDestinationEntity(50U);
    msg.ax_cmd = 0.394079220522;
    msg.ay_cmd = 0.511064762094;
    msg.az_cmd = 0.139774629663;
    msg.ax_des = 0.292975005289;
    msg.ay_des = 0.511126068488;
    msg.az_des = 0.489908798621;
    msg.virt_err_x = 0.831152512212;
    msg.virt_err_y = 0.338704113615;
    msg.virt_err_z = 0.759981348352;
    msg.surf_fdbk_x = 0.0351859706542;
    msg.surf_fdbk_y = 0.705165912075;
    msg.surf_fdbk_z = 0.889465719456;
    msg.surf_unkn_x = 0.735723583981;
    msg.surf_unkn_y = 0.0916607282429;
    msg.surf_unkn_z = 0.979478252598;
    msg.ss_x = 0.878627790075;
    msg.ss_y = 0.329755154474;
    msg.ss_z = 0.126048925932;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IEUBVDDPTNXBDUCXUROGKPFECUWSHUPFGQTXOLXBQFZGOAVYLEDKAVTTSWBYIAZYMDDHNEUJSNJGJXMRZVAXWOIVAHWIKZTHZPJZSZRULYYQBIUPQZTMUKFLRGUDYCMFEAVJGVRDEPPAREIPSXTNMLIMYRYNFBPKJRPSLVLWKCQHOFCWNXVNONGHHOGJFJEWCYGQZATTFDCSHIKIERSYXLQCTNQCJQK");
    tmp_msg_0.dist = 0.357128080366;
    tmp_msg_0.err = 0.824615248311;
    tmp_msg_0.ctrl_imp = 0.494883666608;
    tmp_msg_0.rel_dir_x = 0.414162696339;
    tmp_msg_0.rel_dir_y = 0.0865079845054;
    tmp_msg_0.rel_dir_z = 0.352870696604;
    tmp_msg_0.err_x = 0.677729795159;
    tmp_msg_0.err_y = 0.0971069194954;
    tmp_msg_0.err_z = 0.834824584857;
    tmp_msg_0.rf_err_x = 0.0610403023289;
    tmp_msg_0.rf_err_y = 0.639601652082;
    tmp_msg_0.rf_err_z = 0.299770252003;
    tmp_msg_0.rf_err_vx = 0.0688582623863;
    tmp_msg_0.rf_err_vy = 0.925671393705;
    tmp_msg_0.rf_err_vz = 0.646403018108;
    tmp_msg_0.ss_x = 0.623124363604;
    tmp_msg_0.ss_y = 0.350486992193;
    tmp_msg_0.ss_z = 0.147788989785;
    tmp_msg_0.virt_err_x = 0.314517316712;
    tmp_msg_0.virt_err_y = 0.416523831905;
    tmp_msg_0.virt_err_z = 0.309353316457;
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
    msg.setTimeStamp(0.989613919196);
    msg.setSource(60445U);
    msg.setSourceEntity(113U);
    msg.setDestination(9873U);
    msg.setDestinationEntity(72U);
    msg.s_id.assign("PXOUAAXJXJNKYBEPOZUQMMVEYURCOPKYHSGBDIKNGZXGSGQMFJNZMWDLSWHCAHMSUZQSTQGVNEIMEKGTBYWUCTZSXRBJTRFGWFLMULQLNBECO");
    msg.dist = 0.904493673702;
    msg.err = 0.83252226805;
    msg.ctrl_imp = 0.381627281265;
    msg.rel_dir_x = 0.10585417872;
    msg.rel_dir_y = 0.606153892423;
    msg.rel_dir_z = 0.857919250078;
    msg.err_x = 0.057010259073;
    msg.err_y = 0.940680235788;
    msg.err_z = 0.11664318712;
    msg.rf_err_x = 0.0812651064115;
    msg.rf_err_y = 0.9954058877;
    msg.rf_err_z = 0.649880610376;
    msg.rf_err_vx = 0.623533780268;
    msg.rf_err_vy = 0.583256729645;
    msg.rf_err_vz = 0.380032031917;
    msg.ss_x = 0.260652640544;
    msg.ss_y = 0.469985761183;
    msg.ss_z = 0.936734124495;
    msg.virt_err_x = 0.225653638717;
    msg.virt_err_y = 0.288607104198;
    msg.virt_err_z = 0.689948733264;

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
    msg.setTimeStamp(0.872472025792);
    msg.setSource(22612U);
    msg.setSourceEntity(50U);
    msg.setDestination(23716U);
    msg.setDestinationEntity(239U);
    msg.s_id.assign("QHCEXZAEDTCEHUMCDNNFQQXBVXCPTDSXW");
    msg.dist = 0.903358122429;
    msg.err = 0.697944294036;
    msg.ctrl_imp = 0.730739761257;
    msg.rel_dir_x = 0.830636811168;
    msg.rel_dir_y = 0.856620070393;
    msg.rel_dir_z = 0.198500924492;
    msg.err_x = 0.926297249631;
    msg.err_y = 0.675276389478;
    msg.err_z = 0.676594978776;
    msg.rf_err_x = 0.936542469824;
    msg.rf_err_y = 0.12446505738;
    msg.rf_err_z = 0.256929440769;
    msg.rf_err_vx = 0.976480439585;
    msg.rf_err_vy = 0.746493607098;
    msg.rf_err_vz = 0.882023946549;
    msg.ss_x = 0.640957671331;
    msg.ss_y = 0.233436166815;
    msg.ss_z = 0.381209059865;
    msg.virt_err_x = 0.901768859262;
    msg.virt_err_y = 0.575290884222;
    msg.virt_err_z = 0.345333166302;

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
    msg.setTimeStamp(0.815303057565);
    msg.setSource(51837U);
    msg.setSourceEntity(228U);
    msg.setDestination(19488U);
    msg.setDestinationEntity(24U);
    msg.s_id.assign("EGNMDHHGMUYDKUYFVHNXOCVLFPMTRTKQUXXXOFHDICLUZNYPCBMXAGFSUWLYFJRQVDRNCZJBVZQSZSIOOOSIEWPDHLORI");
    msg.dist = 0.441882736598;
    msg.err = 0.563913018381;
    msg.ctrl_imp = 0.33807142591;
    msg.rel_dir_x = 0.885496764655;
    msg.rel_dir_y = 0.35227804547;
    msg.rel_dir_z = 0.407561261089;
    msg.err_x = 0.452847987493;
    msg.err_y = 0.488231036197;
    msg.err_z = 0.075671943688;
    msg.rf_err_x = 0.344870047368;
    msg.rf_err_y = 0.263736532178;
    msg.rf_err_z = 0.388358360324;
    msg.rf_err_vx = 0.781400301457;
    msg.rf_err_vy = 0.390268952462;
    msg.rf_err_vz = 0.512878172778;
    msg.ss_x = 0.840996798781;
    msg.ss_y = 0.545863625068;
    msg.ss_z = 0.464998072636;
    msg.virt_err_x = 0.766841711709;
    msg.virt_err_y = 0.0901108469553;
    msg.virt_err_z = 0.417995692711;

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
    msg.setTimeStamp(0.515970550836);
    msg.setSource(39540U);
    msg.setSourceEntity(30U);
    msg.setDestination(17164U);
    msg.setDestinationEntity(130U);
    msg.timeout = 39683U;
    msg.rpm = 0.544907335161;
    msg.direction = 178U;
    msg.custom.assign("LMYWCOUZDHRRHREHPXNIGZHKOLTWXTFJDVCXVFZWMBOUVWYFENFEJLGBTYWBHXDMKLTUPGJZKXQOKBSMWTNSAUHCZRCVFCEVUREUSSVNJANDRDXLEJHIYLGQROTANSLVUABKRCIQKPSJSWZPIEAEGUV");

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
    msg.setTimeStamp(0.753653556141);
    msg.setSource(17416U);
    msg.setSourceEntity(103U);
    msg.setDestination(12415U);
    msg.setDestinationEntity(1U);
    msg.timeout = 46696U;
    msg.rpm = 0.378493027775;
    msg.direction = 17U;
    msg.custom.assign("OZDPSVPMEYSOQRLABXTOGHXDYGUAKEFTEUPJWTGLJHJMN");

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
    msg.setTimeStamp(0.733803695748);
    msg.setSource(40534U);
    msg.setSourceEntity(94U);
    msg.setDestination(15269U);
    msg.setDestinationEntity(201U);
    msg.timeout = 34239U;
    msg.rpm = 0.637124388611;
    msg.direction = 130U;
    msg.custom.assign("BXJOPQWAQZXVKDRFIPVIZTIFBLSWPKFFJCXYKGUAEYYVLFOQZEHWCRLLYAGAKUCDGYTAIVZBSXWIMRUTKPIRTGVHUNGBAEQMBVYFQZMTGJILNW");

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
    msg.setTimeStamp(0.321610287488);
    msg.setSource(29729U);
    msg.setSourceEntity(192U);
    msg.setDestination(13529U);
    msg.setDestinationEntity(81U);
    msg.formation_name.assign("TXENMYGTREHVVPVGJZHULXREPZBASFDDJXYOYHAPULUUWJQWNSJMZCKQZYNMTZVXJWHLPSRUTQJQICENEGSFHHNDIXBKKISCFILFMUQGBSLNSBGUGOHFQHDBASULXGBZDWWDVNKECBKAITPAGVZYYONPQPLBVKCHPFDMSPMIJONWVRCXRARICKNQEIMTOFBWKOMBDOCWWQCTFOZTLYFWARFVCLLZGRASJHMRXDYDOTVAEUU");
    msg.type = 211U;
    msg.op = 58U;
    msg.group_name.assign("VDLVALFOGSFCWSGIWRQCHGUKGGHYJCVRMNNUOXYNIHSGYDLEZZFRXBMQXMBQKEURNRPOBKBINDKXIVOAQSQQTXDTGOFPIGUTAKKTSHYMUVIQAYYPREPJXXESDNCDIQPRKLVOKELYIVZJBTBNXTFDLZCZACAECDSJJTFIZVPZPZFWQWARCDUBWZAHLOMGOWMHLYGXVHNZTKHDWIUMBAU");
    msg.plan_id.assign("AHFMKMDUJZJIRWDSHNPSWRANGVQRNHOFCXLCGVWZBNRIRPLMLCOKYVWYMKWQAXMGBEWHCOOTXYRWCXAOAESMWNOMKDFYDUMNZYUGOJLKGCFHGCUKQXFJDTVPPQDHKWHBIZEVZQYFHJTTSKARPUTBBKQJGTLBSQFWCESJVMTZITTVFUPSPLSVEAIBIDGZKVXUTIUABBLZZCGECURDHOYOYPYXEMFPJRSRONZIEGALFQQEPIUEQNV");
    msg.description.assign("ABPOJORGYFYKJXYKCSDLSCVWINFKLRUQAEPEWSUSMRNQRRFTXNTKTBGUPVQHIYLUSNDFLIJDFBOEKXWMXGNCDNCWUOINSMAZBVJVMCMHAJZKFELQEACHZCQIBXCHBBQGDNHYZGOHIBPRGVAZWPXXYHEJVTGMJYOCDDLUHPOLDTPIZOBQKRXAYIFLXYHNETJXOJHGQMEUTG");
    msg.reference_frame = 127U;
    msg.leader_bank_lim = 0.440275475214;
    msg.leader_speed_min = 0.253223594655;
    msg.leader_speed_max = 0.648075966394;
    msg.leader_alt_min = 0.521378604852;
    msg.leader_alt_max = 0.310631510315;
    msg.pos_sim_err_lim = 0.839399672537;
    msg.pos_sim_err_wrn = 0.424876730053;
    msg.pos_sim_err_timeout = 50931U;
    msg.converg_max = 0.00349826682339;
    msg.converg_timeout = 4956U;
    msg.comms_timeout = 26336U;
    msg.turb_lim = 0.789980246081;
    msg.custom.assign("RMVDDIMGYMSNIACYODUJLFRVOCXIOUSWOGRWPVVFZXTPLLUUSJYYZQNZZMOOOVMBZLKXVLPRPVHDIDHTGZMZWEHBGTAKCDUCDW");

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
    msg.setTimeStamp(0.73289426008);
    msg.setSource(56565U);
    msg.setSourceEntity(231U);
    msg.setDestination(1739U);
    msg.setDestinationEntity(13U);
    msg.formation_name.assign("SLRSRHZCRYALHNWBMKNYUWREQYFEQXUMRHBJLGMPPVHKDDYWRXYPSVTWFPVNORFCCCLUNGUCXCLEDYZEUJYYUNPOGRHMXBDXWVTESJJOEQXWCXQUMBJZJTMVZNHGHMGAHLWGFJKTQQ");
    msg.type = 46U;
    msg.op = 226U;
    msg.group_name.assign("WQODBMUWZBJJFYJJJEMHHOIMHZAWVDCKILOURBCQEVETIWGTRSNGHZKBWNGUFQPVDVRBFFAQYUCIRHTLYUXAJLNWGFXRWDNOAYKOOU");
    msg.plan_id.assign("GJYRLFKTASIREUVMVRLTBGFWHJKCGBEZZFLJNNFIVKCDIQBTOWMSIEHSZJOLJLWVGRFGGCZRSNDRDNPZWTKXXCNKVDNEJEQEYIBKBLNXGMVKYIPPHMKYSIJKZU");
    msg.description.assign("RNZHSQZSWLGUQJUGWFVXTPNSELAQCCHAISXBYDEHEKKWZCQTDRNDACDLXBKNDCNHPSERRWFKQPHMEBNPPMVX");
    msg.reference_frame = 222U;
    msg.leader_bank_lim = 0.700310570882;
    msg.leader_speed_min = 0.320972370719;
    msg.leader_speed_max = 0.52587815223;
    msg.leader_alt_min = 0.584363126232;
    msg.leader_alt_max = 0.531462521159;
    msg.pos_sim_err_lim = 0.403583384641;
    msg.pos_sim_err_wrn = 0.462098878642;
    msg.pos_sim_err_timeout = 17035U;
    msg.converg_max = 0.231578170193;
    msg.converg_timeout = 53300U;
    msg.comms_timeout = 6782U;
    msg.turb_lim = 0.231355929051;
    msg.custom.assign("QNSROCHEXCSOFNMOHYDNBXRJBUWYFSPKYZQXMXKCGRAKRDPPNSVJDMUMUHREXBAIGEXJVCKFYDQUWPCBUKTWIYOKKPJWENOLYGLFGWSTFYTJXXDNKQRVLFMTOOHFVQAEZEHNZTRWFYTTRFDGSHSAKJAGQIIFIYZLATXGPTZEXWMCVVJDJLROINJHGUAICCUMPINLOTQD");

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
    msg.setTimeStamp(0.505324418836);
    msg.setSource(10478U);
    msg.setSourceEntity(113U);
    msg.setDestination(34214U);
    msg.setDestinationEntity(165U);
    msg.formation_name.assign("JUCQOGQNVUQVKLNSPKJMEITIYVBZYEBGURMWGPFWAOBWOCBRBQLETCK");
    msg.type = 20U;
    msg.op = 51U;
    msg.group_name.assign("SYEXHMDSDJVDRILQIJWNMCQPBLVMVCLXQVAHTQPEDKODKVKQJRLWHWIRJTSZXGFXEGCKQZZFFYYMUABWGPVMUECIERAXSWBWEZESXPLYBHXBZCJOFPNJPMZSAZJIAOQWYPQLUAGUTFBCFTTCTUBCRBDZDWMIYNRVOGEOBYHFNUSXLLOIHA");
    msg.plan_id.assign("OLVKEAOEKOYGIOAAFRUJMXQMXCHOWBJGGJFSKBHJGSXKTNNDQITTVWZGZJLHCKYFWUELZLDPHRCJRYQQVYTGVUUBLPLROSQWIDVDPLEFRMPLWZLIYZMZTUQTYZN");
    msg.description.assign("QWPPJFALNFDILLSPKXTYRHUDBQNMQWACHCYWGAPQKSHPAODEYHUALNYMRUEVRNJOGTIKDZJCKZDHHYHEVAZQGIJIZOTLIAGTWGFBPOWYXEWXIGRZXODKMSQATNXDOPBMUVRLKGZSUOTFZEFCQJRWBEUCOURYENRKLWSSYGMBXACMTJJXMMMQNSVOPVKYU");
    msg.reference_frame = 230U;
    msg.leader_bank_lim = 0.891845698644;
    msg.leader_speed_min = 0.827361951013;
    msg.leader_speed_max = 0.97309714519;
    msg.leader_alt_min = 0.179510117886;
    msg.leader_alt_max = 0.760597947978;
    msg.pos_sim_err_lim = 0.312882096459;
    msg.pos_sim_err_wrn = 0.467616751702;
    msg.pos_sim_err_timeout = 37483U;
    msg.converg_max = 0.743616499951;
    msg.converg_timeout = 12601U;
    msg.comms_timeout = 32584U;
    msg.turb_lim = 0.412889058778;
    msg.custom.assign("ORXFBTAISEUKNEXUWUMYUDNGEBUVKNAPGRRBPOVPTHKVNJLQRLRBAAWCGDWPHHYMEHGJRVMYTNYASKTIMMSPOWXFULQFETHSCCNQTYXKUFYTXUZNLEBPXZIUYPDVFYJWOCDMXQZZMHBJDXSLIWVSZBBDRWHAKLSTYNWTLSPJEGJNVCTXARMUOLIVJDICSODEKWCIQQZVLIOBPJROJSAQAKED");

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
    msg.setTimeStamp(0.043032983894);
    msg.setSource(40321U);
    msg.setSourceEntity(132U);
    msg.setDestination(1694U);
    msg.setDestinationEntity(150U);
    msg.timeout = 42822U;
    msg.lat = 0.675881406982;
    msg.lon = 0.912182348845;
    msg.z = 0.807347615127;
    msg.z_units = 12U;
    msg.speed = 0.0891267986;
    msg.speed_units = 89U;
    msg.custom.assign("PDOJXEQIKJHDWEBOGLCPAJSOCMSQYZTGXZQRLERHSSMYPCABYWHHTZOUJRDUYIWXAZYBIJGVVAQBMHIQDT");

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
    msg.setTimeStamp(0.0968512014814);
    msg.setSource(2468U);
    msg.setSourceEntity(56U);
    msg.setDestination(17083U);
    msg.setDestinationEntity(58U);
    msg.timeout = 49335U;
    msg.lat = 0.4941081735;
    msg.lon = 0.471062025521;
    msg.z = 0.125543433476;
    msg.z_units = 11U;
    msg.speed = 0.76586336982;
    msg.speed_units = 152U;
    msg.custom.assign("GFBVQHBFNKSJSFXKRHDTMJRWIAADQFNZSLAKLVRZWEXAXIDHHAYXXMWUZIIBQAUIWOLENPHJPSSZCQXSJRYUOIKUJKLZUVRGITGESQRJLICDNSGWPXOKWLGZOTMJRYDCOYOJHBONPDUHNCKMWVPYBPBJTVVEQRAYUFYAOPRVFLMMF");

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
    msg.setTimeStamp(0.245438789665);
    msg.setSource(51046U);
    msg.setSourceEntity(154U);
    msg.setDestination(14140U);
    msg.setDestinationEntity(242U);
    msg.timeout = 23404U;
    msg.lat = 0.2161532423;
    msg.lon = 0.3098200764;
    msg.z = 0.295549413855;
    msg.z_units = 135U;
    msg.speed = 0.0970872452763;
    msg.speed_units = 89U;
    msg.custom.assign("OVDWLYMGJXIGQWSJXYDASJDUVKHIITMTHMNBPQYSZLJSNCXLUTWCMBDFANTOYBUCFOX");

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
    msg.setTimeStamp(0.501335616878);
    msg.setSource(2931U);
    msg.setSourceEntity(196U);
    msg.setDestination(42294U);
    msg.setDestinationEntity(3U);
    msg.timeout = 39831U;
    msg.lat = 0.303363882311;
    msg.lon = 0.403806555421;
    msg.z = 0.497854054104;
    msg.z_units = 49U;
    msg.speed = 0.654026571022;
    msg.speed_units = 140U;
    msg.custom.assign("WYLOOAKXNVNOLCULHBXMNVDRVVJEIUJPWDIIMUBOLVDKUCNTOTVPCEKCAPHQCKIOSJFTZGYEGRBMIWADQXLFAEJJKCHKJQFYNDUPRAJIRURVWWSLXSOGFWBUIAIZKGWTISLFPCVFLVFDUTK");

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
    msg.setTimeStamp(0.217507871886);
    msg.setSource(17835U);
    msg.setSourceEntity(249U);
    msg.setDestination(26495U);
    msg.setDestinationEntity(182U);
    msg.timeout = 44669U;
    msg.lat = 0.992496359569;
    msg.lon = 0.222574106604;
    msg.z = 0.0870586390875;
    msg.z_units = 161U;
    msg.speed = 0.482147993718;
    msg.speed_units = 194U;
    msg.custom.assign("JYAJXMARDNYAJVYLGCURZQYVTGFVFQAFLXLIRYTSKWHKDQOWEHHCWIFQEDGLBYOZBTUBBCNDMLIRSXHLSZZFKWSIJZTOTVXFKAGXHUAXFCABMVPERFWPRPXWTQACKGUENIZIHPBTOMPAKKFQZDRPWKSZZHVCOJJVSNNWDYTBVRECGVPDUDZLQVSIYNKHYU");

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
    msg.setTimeStamp(0.519465768231);
    msg.setSource(59480U);
    msg.setSourceEntity(162U);
    msg.setDestination(25383U);
    msg.setDestinationEntity(239U);
    msg.timeout = 63358U;
    msg.lat = 0.914980321428;
    msg.lon = 0.751662630264;
    msg.z = 0.709975254326;
    msg.z_units = 158U;
    msg.speed = 0.272580693029;
    msg.speed_units = 157U;
    msg.custom.assign("RGCLGVSYWRKKBDTOHPFUXSNUJCDEXPRNVKIZFWPFAPAYVXBKZLKYOIEKHTXBNBCZMJFEXMVIQQWDIKPOPCGUVFUDHCLEZSRSSRWCGYLASIFUUANWGCIZDOZAJRATHADWCQLTJVXDULMOOYDFQOMSVMBAMTYZFWXHNETPQHEHJRLJENHLYIOEEKEHBGQZTKSATFROSXPQZVBQNGSTGMFVBJPCJTMRIXLPJXCQQUKYNUBJWM");

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
    msg.setTimeStamp(0.0484292648193);
    msg.setSource(7191U);
    msg.setSourceEntity(71U);
    msg.setDestination(48786U);
    msg.setDestinationEntity(3U);
    msg.arrival_time = 0.20160275397;
    msg.lat = 0.178803378946;
    msg.lon = 0.953911086231;
    msg.z = 0.144103815477;
    msg.z_units = 185U;
    msg.travel_z = 0.605224428982;
    msg.travel_z_units = 78U;
    msg.delayed = 82U;

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
    msg.setTimeStamp(0.382146344051);
    msg.setSource(44620U);
    msg.setSourceEntity(90U);
    msg.setDestination(15949U);
    msg.setDestinationEntity(118U);
    msg.arrival_time = 0.513543850144;
    msg.lat = 0.328130978676;
    msg.lon = 0.379271793133;
    msg.z = 0.471058545414;
    msg.z_units = 236U;
    msg.travel_z = 0.427789226883;
    msg.travel_z_units = 148U;
    msg.delayed = 50U;

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
    msg.setTimeStamp(0.966639830341);
    msg.setSource(6474U);
    msg.setSourceEntity(179U);
    msg.setDestination(16503U);
    msg.setDestinationEntity(84U);
    msg.arrival_time = 0.335026182639;
    msg.lat = 0.373088741911;
    msg.lon = 0.188830253647;
    msg.z = 0.216323566023;
    msg.z_units = 197U;
    msg.travel_z = 0.797164959757;
    msg.travel_z_units = 238U;
    msg.delayed = 150U;

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
    msg.setTimeStamp(0.0368433094615);
    msg.setSource(32206U);
    msg.setSourceEntity(212U);
    msg.setDestination(56098U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.882087721657;
    msg.lon = 0.994755614219;
    msg.z = 0.964993337132;
    msg.z_units = 197U;
    msg.speed = 0.188259780613;
    msg.speed_units = 50U;
    msg.bearing = 0.767194649426;
    msg.cross_angle = 0.221246884557;
    msg.width = 0.653331751473;
    msg.length = 0.142378267264;
    msg.coff = 254U;
    msg.angaperture = 0.300495021968;
    msg.range = 59056U;
    msg.overlap = 216U;
    msg.flags = 141U;
    msg.custom.assign("XQLRFOSMYMTHEYASKDLWZLOPZUNQNCQGZETZDWIFDBVYVBHWKTKCYEFJNTJIYQNPPXDLZFTYPRAAKPKZWNWDPJLNZDDKYGVXBPSSPCMUVDYBBRBCSSLWHSUGRXCZOBUEJYWIQJJVAMRHCRCRERWMKTLLRMVFVAHMEKOXJIHEPFTAGWFIUUXIOJIUTNSHSQJNIQTBCU");

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
    msg.setTimeStamp(0.0536740877766);
    msg.setSource(9968U);
    msg.setSourceEntity(168U);
    msg.setDestination(49746U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.27890138327;
    msg.lon = 0.110973201732;
    msg.z = 0.0428021075394;
    msg.z_units = 82U;
    msg.speed = 0.612711698929;
    msg.speed_units = 195U;
    msg.bearing = 0.468339881248;
    msg.cross_angle = 0.839343283669;
    msg.width = 0.629059131373;
    msg.length = 0.558642879901;
    msg.coff = 167U;
    msg.angaperture = 0.495891508965;
    msg.range = 28854U;
    msg.overlap = 56U;
    msg.flags = 29U;
    msg.custom.assign("TQKHDKODOVJZAJURZYPHVKALAREOBRGTHLMPFICNONRIMKRKGYAGPXADJVOHHLRDLWJXV");

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
    msg.setTimeStamp(0.0672024907588);
    msg.setSource(45465U);
    msg.setSourceEntity(217U);
    msg.setDestination(51342U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.992170016441;
    msg.lon = 0.190681571438;
    msg.z = 0.265690894408;
    msg.z_units = 166U;
    msg.speed = 0.482571151102;
    msg.speed_units = 205U;
    msg.bearing = 0.273073831043;
    msg.cross_angle = 0.815047082215;
    msg.width = 0.610882062178;
    msg.length = 0.327059483538;
    msg.coff = 153U;
    msg.angaperture = 0.0887685409553;
    msg.range = 17467U;
    msg.overlap = 134U;
    msg.flags = 61U;
    msg.custom.assign("CWWNNLHWGBDOFPHCDQYSRWDNEKZSMVJQGZPJGRQINCFEXSSACLYZIPTKODXODYWEKTSTOVLBBCAYQUAHGVIDLFLRDSEBCMGYSTUPLUIQNCGGHFIVJALVTJROWISUBTFSNNTO");

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
    msg.setTimeStamp(0.17986273201);
    msg.setSource(4937U);
    msg.setSourceEntity(176U);
    msg.setDestination(54827U);
    msg.setDestinationEntity(227U);
    msg.timeout = 8259U;
    msg.lat = 0.634437775332;
    msg.lon = 0.933565943751;
    msg.z = 0.989747247477;
    msg.z_units = 101U;
    msg.speed = 0.758381419323;
    msg.speed_units = 177U;
    msg.syringe0 = 76U;
    msg.syringe1 = 2U;
    msg.syringe2 = 194U;
    msg.custom.assign("MJWAQIYSVDQHEKUKMECOWGAAJQNHRYCLZTPICPYQTGEDURXBPRQLUDKXFBNLPMTAHZZBMFEXDEIIXCJC");

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
    msg.setTimeStamp(0.548541953611);
    msg.setSource(42743U);
    msg.setSourceEntity(30U);
    msg.setDestination(63926U);
    msg.setDestinationEntity(227U);
    msg.timeout = 58898U;
    msg.lat = 0.756950814052;
    msg.lon = 0.88952752348;
    msg.z = 0.0589241313411;
    msg.z_units = 1U;
    msg.speed = 0.369889790191;
    msg.speed_units = 137U;
    msg.syringe0 = 120U;
    msg.syringe1 = 195U;
    msg.syringe2 = 64U;
    msg.custom.assign("KSGVYCPWSOWQMGNGLNKHYDHELBXZTRNREXRNYCZZJAYTDJJDDKVEMWOSLNCBBQSNJBRYQFWCHMTYIWAEGDRTFWSVPYXFQGRNIVIQXBIJPOMB");

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
    msg.setTimeStamp(0.037393584494);
    msg.setSource(46056U);
    msg.setSourceEntity(154U);
    msg.setDestination(33482U);
    msg.setDestinationEntity(44U);
    msg.timeout = 38794U;
    msg.lat = 0.359020568337;
    msg.lon = 0.882401178404;
    msg.z = 0.595611341185;
    msg.z_units = 131U;
    msg.speed = 0.437480382756;
    msg.speed_units = 0U;
    msg.syringe0 = 79U;
    msg.syringe1 = 104U;
    msg.syringe2 = 38U;
    msg.custom.assign("LXSPKBCBEKSZDFLUWFLRVDRNCAPNFNOZDMMLXFA");

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
    msg.setTimeStamp(0.525065398393);
    msg.setSource(48639U);
    msg.setSourceEntity(203U);
    msg.setDestination(13901U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.486198267241);
    msg.setSource(40187U);
    msg.setSourceEntity(53U);
    msg.setDestination(13208U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.0900456725505);
    msg.setSource(43259U);
    msg.setSourceEntity(198U);
    msg.setDestination(29981U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.1899781625);
    msg.setSource(50672U);
    msg.setSourceEntity(181U);
    msg.setDestination(9749U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.337237440966;
    msg.lon = 0.56703878897;
    msg.z = 0.477486721536;
    msg.z_units = 90U;
    msg.speed = 0.626117592622;
    msg.speed_units = 107U;
    msg.takeoff_pitch = 0.716315993992;
    msg.custom.assign("XPSATGMISRDRNJARNJRQUUIANMSPXQDJDNCYEMUAQQCRZGMIBLAQSZEFVVKXW");

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
    msg.setTimeStamp(0.8721488624);
    msg.setSource(27264U);
    msg.setSourceEntity(63U);
    msg.setDestination(63989U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.792281956772;
    msg.lon = 0.29458208899;
    msg.z = 0.866145742185;
    msg.z_units = 9U;
    msg.speed = 0.961132761679;
    msg.speed_units = 210U;
    msg.takeoff_pitch = 0.47762575267;
    msg.custom.assign("KFQRBYUUMLHZSOPRRGPAZDXFLIGKD");

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
    msg.setTimeStamp(0.0880566026425);
    msg.setSource(27960U);
    msg.setSourceEntity(223U);
    msg.setDestination(21673U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.349171978319;
    msg.lon = 0.736742281454;
    msg.z = 0.40622863318;
    msg.z_units = 132U;
    msg.speed = 0.390327998651;
    msg.speed_units = 84U;
    msg.takeoff_pitch = 0.687329107514;
    msg.custom.assign("XRAROAOBENPHPXPYFZIFYNHWSAKPOLKAMBFJSHWENKJYQEMZVCHITZLPPVQWOCTFRXJTRZFOVYIMSWYOWTJCQSBMFGXGGIITXGQFUEGWCJHDRGLYHOKAVUDZR");

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
    msg.setTimeStamp(0.867757680952);
    msg.setSource(26349U);
    msg.setSourceEntity(210U);
    msg.setDestination(45583U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.600146481081;
    msg.lon = 0.0494534774137;
    msg.z = 0.752349433414;
    msg.z_units = 235U;
    msg.speed = 0.28242174658;
    msg.speed_units = 56U;
    msg.abort_z = 0.971634503074;
    msg.bearing = 0.486184080405;
    msg.glide_slope = 140U;
    msg.glide_slope_alt = 0.458829777957;
    msg.custom.assign("SLEGTMNYUGZGKIJBTFEYIJUHBXQXPISBUCJKCZBDOMCFRIPJKSFTRNPVXGZAVNAOCPEFXVQOAJDSCFPTTEIOPVYOXPSRUIZZQANJZYLVCLMBEXA");

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
    msg.setTimeStamp(0.989715222901);
    msg.setSource(9060U);
    msg.setSourceEntity(96U);
    msg.setDestination(28513U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.733680335844;
    msg.lon = 0.412327216195;
    msg.z = 0.564849336448;
    msg.z_units = 134U;
    msg.speed = 0.864187071096;
    msg.speed_units = 205U;
    msg.abort_z = 0.593272296354;
    msg.bearing = 0.43589131848;
    msg.glide_slope = 181U;
    msg.glide_slope_alt = 0.894459093356;
    msg.custom.assign("RXWGCVLEBPPXZLRIZVSFLEUJRVEQYMWFXGNBMQLJDUMTRPMKCHOZQLZPXRIOOFCGMQBTYLHFSXKUPRDWEYTDTGAMRIK");

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
    msg.setTimeStamp(0.897226478121);
    msg.setSource(1833U);
    msg.setSourceEntity(228U);
    msg.setDestination(35144U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.231050449143;
    msg.lon = 0.218701215833;
    msg.z = 0.98364250762;
    msg.z_units = 216U;
    msg.speed = 0.827174759859;
    msg.speed_units = 23U;
    msg.abort_z = 0.863780235695;
    msg.bearing = 0.757322331712;
    msg.glide_slope = 136U;
    msg.glide_slope_alt = 0.214502719854;
    msg.custom.assign("PMUQGBBXILGHAWCJSEDCRAFNRWTIHZDYKXBIKRZBJPCMQBNAHOKAZXMNKWQCLEUUMCRGURDWXQHIFESLNLVQTHYRJFGRFJVBYNWJDDITSDLGVNSQSXVYNOBJJYAKFFFQETIPLPDZERSYOEEVALXAAOUZVXZZKKGKCDQTWOVMWYYTLHWMBQBGPUFVUXQSHMEMYPUTVVFALDRWIEXTGBZYPILSRDOIEOTHAIOJTCOKWXSPUCKNZZUMGGSCJHN");

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
    msg.setTimeStamp(0.0596594494666);
    msg.setSource(23262U);
    msg.setSourceEntity(228U);
    msg.setDestination(23601U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.177180403976;
    msg.lon = 0.915271501526;
    msg.speed = 0.96308020889;
    msg.speed_units = 188U;
    msg.limits = 130U;
    msg.max_depth = 0.902588909168;
    msg.min_alt = 0.907343357085;
    msg.time_limit = 0.205575098864;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.427790559973;
    tmp_msg_0.lon = 0.629749479118;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("UPSYXYRZCPELIYHQGUOANHNYZQCXUGKQGKJMDHEGIKJMERTRDZSFRAOHENBTRXFTDUTYPSFGWYHJBFNMHUSLDPYABEMDZVIRQVTZZQMWIRZXTAWUCPEJVVOFADLAJAEABWEPSUFXLCGMYQJLUDKIXBDTCVCKMOODHNDHMFFRNGJPATANYBKLCZZXOBEHKSWLWWBOHLKQVNGZCMPLBVKWSGRIVUICQKOLQVJX");
    msg.custom.assign("GDAUYAIHSMCIFXDCBETXBLFZTFZPCWUOLANGSYWPOUFJDBWQRMXACTKJUHRSYTMESZXBMUINMHLWSJZJCTBVQKIFDVGOICHPQOHHSZVJWPOGBEFUEGPKXKXEXXOZBMWTTN");

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
    msg.setTimeStamp(0.13379439004);
    msg.setSource(58996U);
    msg.setSourceEntity(98U);
    msg.setDestination(7415U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.848774399006;
    msg.lon = 0.224570029491;
    msg.speed = 0.541309488184;
    msg.speed_units = 77U;
    msg.limits = 182U;
    msg.max_depth = 0.977458184308;
    msg.min_alt = 0.628321508035;
    msg.time_limit = 0.999590911123;
    msg.controller.assign("XITDRSEQMWNHUQKQUKVBGRCEKEANPUTVSQHQGTTUOFFONDBBVUCPAEEZNHFQ");
    msg.custom.assign("WUNBSJLQWJJAOELCUHYNHKSIUWJUWDOZEHUNHGVNYWPNLYLRSCDIAEKMFZCFBEDZDUESQJNUPVBFAQSCNPVTGIRYPMXRMKFOQLXWDTSV");

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
    msg.setTimeStamp(0.916243167412);
    msg.setSource(6006U);
    msg.setSourceEntity(105U);
    msg.setDestination(47354U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.48899267207;
    msg.lon = 0.0548943378362;
    msg.speed = 0.932840152701;
    msg.speed_units = 182U;
    msg.limits = 38U;
    msg.max_depth = 0.71331268897;
    msg.min_alt = 0.294092896511;
    msg.time_limit = 0.0547376359181;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.933542945111;
    tmp_msg_0.lon = 0.128832217448;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("GBCZIHOYSPTQBJHVNZUYGKEBUHBSSWVGUDZOWLNYTWQDVANUXYUCPSNAYISSKSFMEKVVGXTQRWWUEEMTCYMWCRBPWQGXSPJKFNBXFLOPTEGFNJQRENXABJDMAUDTVAATZXOFYJEICAIOKIZJLZGHEHSRHYDKVQFCDLLDMKYONPGMJAXUFXSDDLJILWLUNMQDKPPZCPWOZJXTRHVZLJWRGRERBU");
    msg.custom.assign("VLUBNXBDBANODUVEFNSQFYMKARZQWJNSZHGMGJDYJYRDFTYBVRDWNHYLDPUNYGFUHTIVOIOUUFIHJPOMJHKBMVWQTZIAHL");

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
    msg.setTimeStamp(0.859445096173);
    msg.setSource(18904U);
    msg.setSourceEntity(62U);
    msg.setDestination(24873U);
    msg.setDestinationEntity(68U);
    msg.target.assign("FYSQAIPHIZOJIHFTAGIESFEXWVVANLEBWEZWQXQLAFKPPOHUZADVTHUHJHLXYTDFLXP");
    msg.max_speed = 0.736539881338;
    msg.speed_units = 30U;
    msg.lat = 0.845221971012;
    msg.lon = 0.0236803976727;
    msg.z = 0.956548295108;
    msg.z_units = 78U;
    msg.custom.assign("OMCIEXSECYPDMBDFVRSLQASBDXGTNJXUNKMUMJIOOPWEADSOIHVRKXLXZWYTLK");

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
    msg.setTimeStamp(0.221371368126);
    msg.setSource(57650U);
    msg.setSourceEntity(231U);
    msg.setDestination(18724U);
    msg.setDestinationEntity(38U);
    msg.target.assign("EPYPXRPSZKGTWQBYAETRFPMDSKISMVTZIUFIUPNMLDGWDZYULGNIRVABUFQWZBEXLRORBCCGZJXKZVLVOZRBJCLABHDOEHZJTIYUCLDUWTQTFLOGOFZOPAMMYOQKUAGVAANFKKNNSAAFSCQDRZVHGQUSXNMLMHTBVJQRIXAYDNJEWTWWLIICXRGHJCINFUDRMMTKSHVUCBPPKJOYQPENSXXECGKQWWQYVEENBXSMHGPTVEXKFYHI");
    msg.max_speed = 0.225680688963;
    msg.speed_units = 67U;
    msg.lat = 0.714898152519;
    msg.lon = 0.0609333980029;
    msg.z = 0.35318090745;
    msg.z_units = 77U;
    msg.custom.assign("MVFASVZZXPNWUBETEVNXZRJDLTXIOIYYPJV");

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
    msg.setTimeStamp(0.284716890158);
    msg.setSource(50822U);
    msg.setSourceEntity(154U);
    msg.setDestination(56687U);
    msg.setDestinationEntity(186U);
    msg.target.assign("TOSFHOHWKVTXCLIMJDLUGRAJCITSNEYRFDQPLLLEHMJBPFYDWNXCGINOXRGSEOAKEFZBDUPINJDWZAQDEKSCSJIGPXOBEUURCYXJIGZZJHCZTQMZLWYNSNMTJVOHBPYYJZCGMCYKEFPGHDEWARXKQVCMEUQRWRIHKUQVVAWWQFKNLXVAQTXOSVVPYMBUVNLAWRFMHMXJRBQOBTTBFLIYLFKDDUNXKZEZIUSSGOIAMBPABHY");
    msg.max_speed = 0.573586621523;
    msg.speed_units = 237U;
    msg.lat = 0.966939404684;
    msg.lon = 0.965227215361;
    msg.z = 0.0863282021902;
    msg.z_units = 141U;
    msg.custom.assign("QPRCDVODUBFSKADCJPRHPISWDALSEATMOAFVXZNWLOHJUAPHNSEQLYQWRXLWEOOBHMJCPTQBMQQMXRNHLPYFWTZEUTSREHJKXMUUYPUZQNGQXTCFPOZJVAYYSXKGLTSKEYTTBGNKDVLBGRBKCYZIECVZGUYBRPTZ");

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
    msg.setTimeStamp(0.64679928739);
    msg.setSource(31485U);
    msg.setSourceEntity(235U);
    msg.setDestination(23254U);
    msg.setDestinationEntity(170U);
    msg.timeout = 53038U;
    msg.lat = 0.564817633888;
    msg.lon = 0.618711370985;
    msg.speed = 0.385332057858;
    msg.speed_units = 165U;
    msg.custom.assign("OVIZUBCMWOIIKPCRSHZUCFGSNUECJRNRZGYPOCPSRXTXSNSZBKFADKAAWGVMQYPDBRLRAFIALLUCXWXIGLILRGJXUFSXVZRYXPQCATHEJENIVSZHOYPFBDEEMDWMLHMHJPAOTGCUPWAMLVXYBSTMNRJDDTJBZSNQTQMDMBNNWWVJJQXVUULDUHALKHGYWHKBEFCPJTYITYFRZLTKIVEKAWDKPHYEHZQJQOYKKVOQCVSGG");

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
    msg.setTimeStamp(0.348954298023);
    msg.setSource(52421U);
    msg.setSourceEntity(68U);
    msg.setDestination(15376U);
    msg.setDestinationEntity(162U);
    msg.timeout = 29285U;
    msg.lat = 0.751411010732;
    msg.lon = 0.0236664657713;
    msg.speed = 0.290899569831;
    msg.speed_units = 238U;
    msg.custom.assign("ZOQZMQHXPJNIZKNTPVHVOSPMMKKOCWXSIICFYTEJBRECRYKSMZVAGCFPTJTGDSNPCOENKRONFJLQVHUFIDHNQOXANWUYRQUAFXBLXXXEVBEOLIMDCBTEDSVQLGGAAERDFHUVUPYLHWMSDCYOSPLWIZLDTFDGOTHMUDEZALKAKYARIFCIBQXEJKGHZSJUTKRMGPGTJITZMQBRNCJ");

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
    msg.setTimeStamp(0.901701803901);
    msg.setSource(44753U);
    msg.setSourceEntity(54U);
    msg.setDestination(40457U);
    msg.setDestinationEntity(108U);
    msg.timeout = 62747U;
    msg.lat = 0.951305519376;
    msg.lon = 0.854134919191;
    msg.speed = 0.249672385016;
    msg.speed_units = 27U;
    msg.custom.assign("VGOCWAQXFBXMNYVLNMYGAGGNIIGZSQFZGMSKAPFQJBOIDCUUVTZWAZJIPJOZAFVFBNNGVQLLOPNSRJCZHPYBESPHWLSIVCQZFCOMHRCPDYTIEREBREUMLEPNDIKRCJWLNTMDVHEMOMGDKZCVAJDMDBYLXAHWRCXJEBMLDETYHKAFTTKKNRFDQBIHJTPYOCLZYUOSKFKZWG");

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
    msg.setTimeStamp(0.676563725923);
    msg.setSource(35572U);
    msg.setSourceEntity(233U);
    msg.setDestination(43025U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.182630097609;
    msg.lon = 0.149060936642;
    msg.z = 0.40367077324;
    msg.z_units = 50U;
    msg.radius = 0.294545335413;
    msg.duration = 33843U;
    msg.speed = 0.72235884011;
    msg.speed_units = 63U;
    msg.popup_period = 28840U;
    msg.popup_duration = 3237U;
    msg.flags = 145U;
    msg.custom.assign("NUXQAWTIXDKKJFJLVXJFFOFGZVZSETNAZQEQOMJTYHVUXGQTWSECUHHSOFOPEXQFBOURBAUCPLMEMBMWZIBKNPBGPNKTBRLILNQVRPGTIACMZJGSHVRADGDECWBPWZQ");

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
    msg.setTimeStamp(0.768539692485);
    msg.setSource(65003U);
    msg.setSourceEntity(13U);
    msg.setDestination(19696U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.330576066321;
    msg.lon = 0.788077417437;
    msg.z = 0.661293457015;
    msg.z_units = 209U;
    msg.radius = 0.753426429214;
    msg.duration = 25713U;
    msg.speed = 0.436941302716;
    msg.speed_units = 151U;
    msg.popup_period = 17581U;
    msg.popup_duration = 30315U;
    msg.flags = 150U;
    msg.custom.assign("RCLKXNBLOODFSLJLPODJBXUYSKNIGXDRPVAYRUCKETGGMUOTSDVHIXUWYVABSEFVBKIZRGVSOZZTPWJBWRHXYAMRXHCWZLFDFZEZRLZENDPUXEOUXERWMAFCCNKLXEACDRTYPMSFDMHDJEKSZ");

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
    msg.setTimeStamp(0.747515987073);
    msg.setSource(60397U);
    msg.setSourceEntity(180U);
    msg.setDestination(57564U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.776013910293;
    msg.lon = 0.689829469639;
    msg.z = 0.236988999157;
    msg.z_units = 119U;
    msg.radius = 0.161597772134;
    msg.duration = 6619U;
    msg.speed = 0.486086282869;
    msg.speed_units = 127U;
    msg.popup_period = 28637U;
    msg.popup_duration = 43232U;
    msg.flags = 13U;
    msg.custom.assign("HUWJKICZYQHVQBKLKVGYYBLJCBFWWAYVUTUGZMJTCZXGBISDJITCSHXEYGVBLFZDIXCUAOVPRZFPOUSOXFCHFNTMCFTQDOBEDXJPRADOVMNVYGGEBQSMWPZDUDAMNWIQPNOEKZSUIRROXKJIRWQNATFHGKEXPQLWRURHCYGPPOQRKEPRXILL");

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
    msg.setTimeStamp(0.944938052228);
    msg.setSource(29685U);
    msg.setSourceEntity(240U);
    msg.setDestination(53552U);
    msg.setDestinationEntity(192U);
    msg.op_mode = 33U;
    msg.error_count = 210U;
    msg.error_ents.assign("MHBCOFFGJFAIIUYPWAPXEDSURQAAUOIXJMLGFSAJLIUNWLWJRYFQABDEZQMBOABPMBWXFCNJWBYGODESGKNNPZKNO");
    msg.maneuver_type = 13063U;
    msg.maneuver_stime = 0.790847914038;
    msg.maneuver_eta = 20264U;
    msg.control_loops = 3465916168U;
    msg.flags = 32U;
    msg.last_error.assign("IXRCCZHXXDEYYYFISDEOIKWHJCBESVNGSXUTUVSABIWNK");
    msg.last_error_time = 0.359877474263;

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
    msg.setTimeStamp(0.41551045257);
    msg.setSource(38975U);
    msg.setSourceEntity(193U);
    msg.setDestination(36629U);
    msg.setDestinationEntity(93U);
    msg.op_mode = 125U;
    msg.error_count = 4U;
    msg.error_ents.assign("QGQYFGYNKVZXYIVRMNNUDZQNULSCVWUZDYXGBAPEQQFUJMPCIHKSCCOOANYAGAKKFWMWTJJVOPKMIQTIUKRFOTHHRXRTMETYPLCSPHPKWZHSJHMFHLPUSNEXRJDFUNCZTHLAAQACFIEUHFSBRHPZDIGDVIINGWGSBUSBBYLNEOMBQWLBELFSNOXJXMMYLZKTTWFLJCPXEZKRQWLVEGUOVIJQSJDYZGKVMXBXZRJDEWIVTGCBABDDDYARO");
    msg.maneuver_type = 28803U;
    msg.maneuver_stime = 0.00921226125616;
    msg.maneuver_eta = 16597U;
    msg.control_loops = 1981147049U;
    msg.flags = 154U;
    msg.last_error.assign("NFAJYMWOQBYPISLQOSVYWROHXHFISFJMHQUVUTWMPGJGJAJZITHXBANTIDTREYHBRMGBLPCFRCNJRXYBKQXKDWPMIBOLNYSMVSHHKBTOUEMWPLSEDVZLCWPDTESKWUAZYGORLVCCQDPOLJQXZVRJJWNCZFIUDZWERKNYJBXATFEPHILUUQVNURWTMKEGIBGAHSDCOKCIRL");
    msg.last_error_time = 0.316476108836;

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
    msg.setTimeStamp(0.383389400807);
    msg.setSource(58762U);
    msg.setSourceEntity(172U);
    msg.setDestination(3313U);
    msg.setDestinationEntity(129U);
    msg.op_mode = 52U;
    msg.error_count = 27U;
    msg.error_ents.assign("TJAAHBCZYERGMJTQXGFWWTRTQRKLZFYFNJHAFODCISFARTBODNCNDNQGIWVYPWKCHUGEBSZ");
    msg.maneuver_type = 57168U;
    msg.maneuver_stime = 0.984768632483;
    msg.maneuver_eta = 42681U;
    msg.control_loops = 1675715073U;
    msg.flags = 230U;
    msg.last_error.assign("XNBGHLCJLDMONZYTESMGQKWPVHGPQCHAQVELUOITLEZGXWOEZLYRUSCAFMJRSAACBPQXEXUDWKJTLTHOMTXGOBYGJEQTJEGWHRGOCDBXRWDPKRNTZNBMVVZQYXTWSRGPAXNIHKIDZT");
    msg.last_error_time = 0.353390206382;

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
    msg.setTimeStamp(0.586212325251);
    msg.setSource(8843U);
    msg.setSourceEntity(132U);
    msg.setDestination(24666U);
    msg.setDestinationEntity(114U);
    msg.type = 42U;
    msg.request_id = 9735U;
    msg.command = 52U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.840625943436;
    tmp_msg_0.lon = 0.290047101102;
    tmp_msg_0.z = 0.766212078441;
    tmp_msg_0.z_units = 148U;
    tmp_msg_0.radius = 0.31864860017;
    tmp_msg_0.duration = 31819U;
    tmp_msg_0.speed = 0.760799222774;
    tmp_msg_0.speed_units = 2U;
    tmp_msg_0.popup_period = 50794U;
    tmp_msg_0.popup_duration = 35422U;
    tmp_msg_0.flags = 92U;
    tmp_msg_0.custom.assign("ODCULRLYREARKNRFQXWRXAQTNIJXYYMCWVVZCMADYVPTKODFQQLDMCGOGZXTLWIRHTAOULHXXBPSSJVYYKSOFFNJCQQBTMJYCKPLJGTDIWVCDONATBLMKPMHQHMVMJPXSLEAUBKBE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 19458U;
    msg.info.assign("AROBNXVLXSUINHZFCXPTCZYLGSCHXPPCRGXNVNMECFUXYNOEWRUVJKKDSZHOOTHOUJKURZLLDKTIYJIARQCJDKCQMXPBIAHPWJFTGWBXIKQZGWVBPMZNQOIRUNYMHGETQWFBZBSVRZBFCUMUGSWWOQPEOBRDTRAMVTKJLMHBIPYBYOSMAYOWDHJFTYLEHVMKDGWPEMCEVWYUGVKDG");

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
    msg.setTimeStamp(0.676582302351);
    msg.setSource(21458U);
    msg.setSourceEntity(176U);
    msg.setDestination(23502U);
    msg.setDestinationEntity(237U);
    msg.type = 119U;
    msg.request_id = 15840U;
    msg.command = 79U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 43799U;
    tmp_msg_0.lat = 0.368374748455;
    tmp_msg_0.lon = 0.250602283015;
    tmp_msg_0.z = 0.897049485709;
    tmp_msg_0.z_units = 88U;
    tmp_msg_0.speed = 0.620635251396;
    tmp_msg_0.speed_units = 122U;
    tmp_msg_0.syringe0 = 109U;
    tmp_msg_0.syringe1 = 169U;
    tmp_msg_0.syringe2 = 236U;
    tmp_msg_0.custom.assign("FGIGNPJKZCWKJJGYSEWKUEXMRZFSQLNVEDBSCYPNSGCXQTMRUGMALDYLZYSBTVNZHDHIUDLFMVZICRTBIUBGMKJJXZEKQWVJQPVOIEWZNRIRDXAXNAEUXEVBOKMORXNGIZUGAIVJNWYRHFTFVQLOHWAVDGPSHDEPSMTACSLWUWTPVOMYXHLFQBAEHPYTTLBLDHPRQCBJHUXSDAFAUN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 65268U;
    msg.info.assign("VPZSQDYWUHYJIHGKOJLLUKYMFERNJFDYTKASQYRTXDZLDMCWQHTMBXONOVNACAOATJXGWEDIQBCULDMQWKSCLTGYHBGTPVERTENZIPXYCJYVLWSWFLWEGZPTFHPEAPFZZDRSXBYRAUUOKNSFBTZXGQJGBRAUFAJMIVESALOQMLJHCOQKTCKJJEVLZCGRGPIHSPXZZIUVWFVVSWWBKXGICEIDQFDI");

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
    msg.setTimeStamp(0.688818712504);
    msg.setSource(22905U);
    msg.setSourceEntity(249U);
    msg.setDestination(23565U);
    msg.setDestinationEntity(206U);
    msg.type = 34U;
    msg.request_id = 4341U;
    msg.command = 208U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 59002U;
    tmp_msg_0.lat = 0.172910503136;
    tmp_msg_0.lon = 0.28269868843;
    tmp_msg_0.z = 0.619369055208;
    tmp_msg_0.z_units = 198U;
    tmp_msg_0.speed = 0.871859318756;
    tmp_msg_0.speed_units = 240U;
    tmp_msg_0.custom.assign("CHPLDYQVCLWEVJCVZWUFXWIKRHKUFXKQVNXKTZEOYAPORFWYSOUGTRNTJMNYTJZYGDMBDZAXOULFGWDEPAMRTXFBXPAOFRICKKGKIDJYVANSXRZJHWSDEWU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 51757U;
    msg.info.assign("HRFVMLWXWNOKQNYNUBVSOYYVUZAEPFMHIDOWMJXVYCJMPDKMURCQYEFKAIBJDDUPQZNHNKYBXQSPLRKRNGVENBGSQXAKWZITMKXJKLBNTOXCPHHEOZUAMJJVVIGLGWOB");

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
    msg.setTimeStamp(0.157615678319);
    msg.setSource(50709U);
    msg.setSourceEntity(49U);
    msg.setDestination(3846U);
    msg.setDestinationEntity(37U);
    msg.command = 205U;
    msg.entities.assign("BEPRNAIXILDWWFWBIGWSVWEKBIRQTLJNDJKUOVVYUYDXMQHOXZFBDQECLGJZAELCXRYOONZYEQSEMWGYHSTUMLLGBCRKVNKPVDGTGKRSBXGBFHLCPUXPKYNMVARZCFCLFAPQJUHHPMOECJTHHJGYHRHBONDKAPNTMAAVBWIMNLPIJYSQJZPAGDFTXUKUOZIQKTRSFWQXCVMEJWDFUIAOXRLTOHDSFMZXQKTRYSSCMESZY");

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
    msg.setTimeStamp(0.400355075544);
    msg.setSource(49531U);
    msg.setSourceEntity(79U);
    msg.setDestination(43523U);
    msg.setDestinationEntity(232U);
    msg.command = 93U;
    msg.entities.assign("GIEPQHAYTTITSBKVWHNZPMVXFKBKYCABFYMOUHDWLOZBAHEAOCSYGEJR");

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
    msg.setTimeStamp(0.0661341799466);
    msg.setSource(37920U);
    msg.setSourceEntity(247U);
    msg.setDestination(57880U);
    msg.setDestinationEntity(158U);
    msg.command = 162U;
    msg.entities.assign("ETOREMHNAOJIEVTMSRFCLBGWGVABZXHKVDPZYFDAQXDJUJKKKLPJKGURBOVRIDOYWRUNKVOQZBKYDFNIWZBUNTRPTGJNBGZZUESYUGITYXLIBRVYIXHSFRXYFODWOCYKFBMEFUDXAQWBAWSDOPMJZTLSSVHAOKDMCMAWUCPEZWVCQSEFLNCPZNHJPTQPBJSALCTWAVLGXLLGYCMQGEYTOQJITFRQMQUHSXIIV");

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
    msg.setTimeStamp(0.10921231679);
    msg.setSource(38150U);
    msg.setSourceEntity(149U);
    msg.setDestination(52616U);
    msg.setDestinationEntity(23U);
    msg.mcount = 45U;
    msg.mnames.assign("FRBTFGHFDXPSSEUFJJ");
    msg.ecount = 130U;
    msg.enames.assign("MAJOEOFHKGFRWBFSXBVTMHDHQQSSZTVQAVSYKNZURDYGFMOGHWXOIYMBEJCDPXIMIKYWWYEMKGUBRKVICJBDEBHUVRZULFUZI");
    msg.ccount = 145U;
    msg.cnames.assign("WTLIFMUOADHJEZKAIPDQKMWUZPCJHKWOMLWTPIEMGAHQBUVQOVFUBEISIYTDSHINGFENGKBLEHNVAJQJEXXCGAHYQJRMRKGXNSDXWDXDWKQZCBJIZWHXCBNZIJJYUCTXNMEPUOIGBLMRPSWCRFOAFDCYGGRCSOZPJBALTYFDVAALPYURV");
    msg.last_error.assign("DBIVQGXICZXOBJCLJFRGDRHPMQGTFEVFSMMWSYZAVMOQBPKHVTGCFMZCIQMXHOLFUEXZGDSKDIAWVKSDOBKRZRDPGKXWRCRPAQOTTNJYHYBUVXCMSIJRLWLNONJBSLCAYALZYAKJMHYTWTEYKQUJNWUSDRXYNTPDQUCTIIHKYKFFURNLKUEOWVBHGVBQIIFJPCWDGQIEMFNNPCAOSFUVPZPEBJLELJHXX");
    msg.last_error_time = 0.633314051866;

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
    msg.setTimeStamp(0.40354908274);
    msg.setSource(6612U);
    msg.setSourceEntity(33U);
    msg.setDestination(26325U);
    msg.setDestinationEntity(115U);
    msg.mcount = 41U;
    msg.mnames.assign("DVPWOOBYGFXTQUYJUKTCUXTYWQPYIKNQVRDYTZJC");
    msg.ecount = 74U;
    msg.enames.assign("MXOPTXCVFDACEDEPDQYUPQSMIUONFTBWLHQCBKXXHZBAIGUYQNKWXQAMGWSPFVRYZBDJHXMQYOGJYRNQMGYLOBHPJIUKDLCELNFQZRBSCVATVILJOSGTREGNLFODNPUKAXEBZQMNYIWOKHSDWRWWZBXLYUXIDJCWZVTSGEIAHTGOKFRFRBKVSVRSZEPEYPMSNXLEGPGYLVUTAUJDUVIKZOJJNMFNAVQTCCTHJCAZDCU");
    msg.ccount = 213U;
    msg.cnames.assign("CJZGDSVFATVIXBULGIZECKRCSMPFDAPIXZBNBNCJOHBXQQPNTAXXCGXCAWLNYAETWFLSMKNUSGBHUHFZPRUAIVQABLZQBWOIFZYXIVWYROWKNCAESQRRDDBJTMEOQUNFUCJFHRLTYUZTNCTEJYAHRODIHYUXBWJNSPOLIDUFQWLMGZEIPGMOVYQABTREJOKMKKKULKVFMT");
    msg.last_error.assign("UQQHTUYZNFITCZIGHITPSBXLOIZQEFZEMZWCUWVDJCVLPUBRQEUNDSBQKCOZNJJNGPRURDXQOYHFXSEPOMVUPSMPEWZZWLKGTERAJRBSXCLIARHMA");
    msg.last_error_time = 0.406328237338;

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
    msg.setTimeStamp(0.432842124291);
    msg.setSource(14887U);
    msg.setSourceEntity(208U);
    msg.setDestination(43451U);
    msg.setDestinationEntity(196U);
    msg.mcount = 178U;
    msg.mnames.assign("QVZAXXFCXQJUUDAUGPAQWEJRKFVUFKALYQIGTIERXSSENGXCSDMHZIWHMPMLNMYJEVXMBOBKWFIGHWDTCLGOJKXIJKENLOQHZDRGKUKOABRTGPEFZCYBDBPVJIZHHCIFCJISDTGPSBRGQVKEOOLPFVZNMNKOWDNAIMNEJAZOPSEHIXUYLLUQRWVFRMRDOYJLPWHSVTL");
    msg.ecount = 50U;
    msg.enames.assign("KETYNGGRRGVRTBUDNAHWXYRFSGZYQUSFANOSVJMLESVIXWUNBVOUQAASIDTTVTMZNDJDTYEZKTVIRNHDHYRBMLYLCWFMGCKNKKZAFJZQZHPJJJVVLSMYQIDAPCPIGDTRHBLFSKXOPWLRNRFLXHFZOXYBVJBKGCZAXEMPUTBIPEAKHCKDFGJHZISSWOWYKBJPP");
    msg.ccount = 202U;
    msg.cnames.assign("DRWTMXMKTSRNYKXBEZTGDALDVPZXSLGANE");
    msg.last_error.assign("PJGQUAQQISDSDDRUAEMWIZXSMLYMYNPPIWBTXXZPQOSJGVORPXMGLXLCWWROUAJOKAVXLTJDKXEKGUZONSJCTETTBPCNDMFOZJURUSGVHPICZFSEYUWGHEAOSXFBMDNICAFKICCVQIYHYZTOAKDLDFJUGKDBE");
    msg.last_error_time = 0.654307670987;

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
    msg.setTimeStamp(0.0623816304996);
    msg.setSource(38758U);
    msg.setSourceEntity(113U);
    msg.setDestination(13998U);
    msg.setDestinationEntity(195U);
    msg.mask = 243U;
    msg.max_depth = 0.577500736126;
    msg.min_altitude = 0.64962577486;
    msg.max_altitude = 0.790498289186;
    msg.min_speed = 0.680562963672;
    msg.max_speed = 0.880124905306;
    msg.max_vrate = 0.64384685304;
    msg.lat = 0.606347095311;
    msg.lon = 0.306186020753;
    msg.orientation = 0.194229845986;
    msg.width = 0.803535722542;
    msg.length = 0.868011448613;

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
    msg.setTimeStamp(0.998339394692);
    msg.setSource(26097U);
    msg.setSourceEntity(167U);
    msg.setDestination(25251U);
    msg.setDestinationEntity(199U);
    msg.mask = 131U;
    msg.max_depth = 0.479983701884;
    msg.min_altitude = 0.242374326413;
    msg.max_altitude = 0.371274034598;
    msg.min_speed = 0.597349728052;
    msg.max_speed = 0.21295684945;
    msg.max_vrate = 0.863867707088;
    msg.lat = 0.673410889935;
    msg.lon = 0.45044168405;
    msg.orientation = 0.420880018446;
    msg.width = 0.589178350682;
    msg.length = 0.202642813273;

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
    msg.setTimeStamp(0.36421452921);
    msg.setSource(35188U);
    msg.setSourceEntity(137U);
    msg.setDestination(51976U);
    msg.setDestinationEntity(222U);
    msg.mask = 253U;
    msg.max_depth = 0.762764110346;
    msg.min_altitude = 0.796941438246;
    msg.max_altitude = 0.882988038606;
    msg.min_speed = 0.826095736088;
    msg.max_speed = 0.774026780009;
    msg.max_vrate = 0.525837011891;
    msg.lat = 0.545491109087;
    msg.lon = 0.527688524914;
    msg.orientation = 0.487676066233;
    msg.width = 0.762983489679;
    msg.length = 0.441080446919;

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
    msg.setTimeStamp(0.361488783518);
    msg.setSource(46478U);
    msg.setSourceEntity(144U);
    msg.setDestination(4011U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.585879988792);
    msg.setSource(61240U);
    msg.setSourceEntity(212U);
    msg.setDestination(62225U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.652765274201);
    msg.setSource(19523U);
    msg.setSourceEntity(156U);
    msg.setDestination(12099U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.916632909064);
    msg.setSource(40825U);
    msg.setSourceEntity(6U);
    msg.setDestination(17048U);
    msg.setDestinationEntity(145U);
    msg.duration = 50385U;

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
    msg.setTimeStamp(0.339108142242);
    msg.setSource(18311U);
    msg.setSourceEntity(172U);
    msg.setDestination(47761U);
    msg.setDestinationEntity(119U);
    msg.duration = 40362U;

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
    msg.setTimeStamp(0.00544386341765);
    msg.setSource(25973U);
    msg.setSourceEntity(142U);
    msg.setDestination(1017U);
    msg.setDestinationEntity(203U);
    msg.duration = 23226U;

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
    msg.setTimeStamp(0.93503409986);
    msg.setSource(32475U);
    msg.setSourceEntity(50U);
    msg.setDestination(52552U);
    msg.setDestinationEntity(180U);
    msg.enable = 62U;
    msg.mask = 199091810U;
    msg.scope_ref = 3384737597U;

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
    msg.setTimeStamp(0.488819864039);
    msg.setSource(45018U);
    msg.setSourceEntity(253U);
    msg.setDestination(3940U);
    msg.setDestinationEntity(205U);
    msg.enable = 155U;
    msg.mask = 1063220544U;
    msg.scope_ref = 3351303209U;

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
    msg.setTimeStamp(0.947033433473);
    msg.setSource(212U);
    msg.setSourceEntity(79U);
    msg.setDestination(53404U);
    msg.setDestinationEntity(143U);
    msg.enable = 188U;
    msg.mask = 3178372488U;
    msg.scope_ref = 2509806173U;

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
    msg.setTimeStamp(0.2439380981);
    msg.setSource(48373U);
    msg.setSourceEntity(178U);
    msg.setDestination(32484U);
    msg.setDestinationEntity(179U);
    msg.medium = 5U;

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
    msg.setTimeStamp(0.148690516397);
    msg.setSource(25586U);
    msg.setSourceEntity(211U);
    msg.setDestination(59254U);
    msg.setDestinationEntity(80U);
    msg.medium = 150U;

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
    msg.setTimeStamp(0.585526329975);
    msg.setSource(50032U);
    msg.setSourceEntity(187U);
    msg.setDestination(23317U);
    msg.setDestinationEntity(55U);
    msg.medium = 54U;

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
    msg.setTimeStamp(0.339130065139);
    msg.setSource(27371U);
    msg.setSourceEntity(251U);
    msg.setDestination(6259U);
    msg.setDestinationEntity(168U);
    msg.value = 0.852298028097;
    msg.type = 13U;

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
    msg.setTimeStamp(0.162217938778);
    msg.setSource(64206U);
    msg.setSourceEntity(235U);
    msg.setDestination(6046U);
    msg.setDestinationEntity(131U);
    msg.value = 0.312426740816;
    msg.type = 231U;

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
    msg.setTimeStamp(0.622872338185);
    msg.setSource(22097U);
    msg.setSourceEntity(92U);
    msg.setDestination(24588U);
    msg.setDestinationEntity(104U);
    msg.value = 0.490502149445;
    msg.type = 102U;

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
    msg.setTimeStamp(0.688989547292);
    msg.setSource(8485U);
    msg.setSourceEntity(1U);
    msg.setDestination(20500U);
    msg.setDestinationEntity(182U);
    msg.possimerr = 0.897492201512;
    msg.converg = 0.11031288361;
    msg.turbulence = 0.296786360548;
    msg.possimmon = 56U;
    msg.commmon = 96U;
    msg.convergmon = 67U;

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
    msg.setTimeStamp(0.305795690538);
    msg.setSource(28098U);
    msg.setSourceEntity(237U);
    msg.setDestination(50805U);
    msg.setDestinationEntity(27U);
    msg.possimerr = 0.414364384639;
    msg.converg = 0.324236726191;
    msg.turbulence = 0.9418597793;
    msg.possimmon = 178U;
    msg.commmon = 93U;
    msg.convergmon = 168U;

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
    msg.setTimeStamp(0.732138168272);
    msg.setSource(4681U);
    msg.setSourceEntity(31U);
    msg.setDestination(55155U);
    msg.setDestinationEntity(192U);
    msg.possimerr = 0.706668436714;
    msg.converg = 0.751256236786;
    msg.turbulence = 0.935316967172;
    msg.possimmon = 185U;
    msg.commmon = 137U;
    msg.convergmon = 243U;

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
    msg.setTimeStamp(0.644841276884);
    msg.setSource(40556U);
    msg.setSourceEntity(137U);
    msg.setDestination(32469U);
    msg.setDestinationEntity(26U);
    msg.autonomy = 223U;
    msg.mode.assign("NQRDWSWOLEZEZHMTSZLQUSVBCZBTWASTFDCECXKUDMERVJQJRCYAPUWTKFBAQLLEZFVLGQSV");

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
    msg.setTimeStamp(0.135377230612);
    msg.setSource(30545U);
    msg.setSourceEntity(253U);
    msg.setDestination(7088U);
    msg.setDestinationEntity(231U);
    msg.autonomy = 96U;
    msg.mode.assign("PMYUWFVIHZTUEHCNJDZYFFZOQUNPHUIXFCWGZIDKBHFBOPSZAFADDCMQPQVSYWBVEKKOZRJYRUWPQPAGBFOLRDXXISAP");

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
    msg.setTimeStamp(0.931388335089);
    msg.setSource(43141U);
    msg.setSourceEntity(119U);
    msg.setDestination(30286U);
    msg.setDestinationEntity(84U);
    msg.autonomy = 241U;
    msg.mode.assign("SJLSIXNOWTVIQENAHZRDXSMWZRUEYDPYLYYFEMUKCUAYNHZIEFCZVLSCZUNNBTSKGSWDZVGXGIINMVQJQBNWIRJJDFSLKNVLZDHLOOFWKPHGXWIJUOBMOFLKFREOZVOFRQWXNZRAQJGFXXSQABATBTCHYKSCGEHQPQMRPDLDHPBVTAUAEFKAJMB");

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
    msg.setTimeStamp(0.785347660718);
    msg.setSource(6949U);
    msg.setSourceEntity(139U);
    msg.setDestination(24374U);
    msg.setDestinationEntity(115U);
    msg.type = 58U;
    msg.op = 229U;
    msg.possimerr = 0.102109984264;
    msg.converg = 0.642420348851;
    msg.turbulence = 0.907944180319;
    msg.possimmon = 103U;
    msg.commmon = 43U;
    msg.convergmon = 76U;

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
    msg.setTimeStamp(0.248367786915);
    msg.setSource(59441U);
    msg.setSourceEntity(181U);
    msg.setDestination(31964U);
    msg.setDestinationEntity(241U);
    msg.type = 52U;
    msg.op = 115U;
    msg.possimerr = 0.948884133573;
    msg.converg = 0.261320243549;
    msg.turbulence = 0.86524549799;
    msg.possimmon = 177U;
    msg.commmon = 31U;
    msg.convergmon = 206U;

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
    msg.setTimeStamp(0.163615458133);
    msg.setSource(23397U);
    msg.setSourceEntity(212U);
    msg.setDestination(9165U);
    msg.setDestinationEntity(149U);
    msg.type = 142U;
    msg.op = 161U;
    msg.possimerr = 0.882042625703;
    msg.converg = 0.422502848054;
    msg.turbulence = 0.97118127473;
    msg.possimmon = 224U;
    msg.commmon = 117U;
    msg.convergmon = 40U;

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
    msg.setTimeStamp(0.128966872552);
    msg.setSource(4854U);
    msg.setSourceEntity(122U);
    msg.setDestination(43124U);
    msg.setDestinationEntity(27U);
    msg.op = 84U;
    msg.comm_interface = 80U;
    msg.period = 46979U;
    msg.sys_dst.assign("QETMZPJOURJBAICGOZYLPLSSANHOHDSIMQALHTNZZXJHRVWZXQUPKBRFDQPMFWDFSIFYJZUEGPGPJEBHXCDCYZAEJMJKKFGBLMSJKAGEFNZONRAQTSNQ");

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
    msg.setTimeStamp(0.304121056433);
    msg.setSource(29363U);
    msg.setSourceEntity(23U);
    msg.setDestination(52421U);
    msg.setDestinationEntity(35U);
    msg.op = 133U;
    msg.comm_interface = 224U;
    msg.period = 6648U;
    msg.sys_dst.assign("SMJIYMSNFNNFDBENITMRJWXAGNYQZXZODPEAXVPMLOVMZVGHYIPVCAPYUVBXBWQRHEJJYZWHLWWJSDLJCTDLQOYCBDFSIQTGBRYAQUTCHKGKAWKRTQB");

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
    msg.setTimeStamp(0.0906886922395);
    msg.setSource(60813U);
    msg.setSourceEntity(73U);
    msg.setDestination(37318U);
    msg.setDestinationEntity(2U);
    msg.op = 165U;
    msg.comm_interface = 240U;
    msg.period = 31036U;
    msg.sys_dst.assign("LKXIJJTGAKCYOCJ");

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
    msg.setTimeStamp(0.658132488119);
    msg.setSource(53238U);
    msg.setSourceEntity(104U);
    msg.setDestination(37766U);
    msg.setDestinationEntity(61U);
    msg.stime = 569618114U;
    msg.latitude = 0.189889644146;
    msg.longitude = 0.382477529946;
    msg.altitude = 38864U;
    msg.depth = 23930U;
    msg.heading = 275U;
    msg.speed = 31702;
    msg.fuel = -35;
    msg.exec_state = 1;
    msg.plan_checksum = 52156U;

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
    msg.setTimeStamp(0.717214406312);
    msg.setSource(9571U);
    msg.setSourceEntity(43U);
    msg.setDestination(34399U);
    msg.setDestinationEntity(77U);
    msg.stime = 3546096115U;
    msg.latitude = 0.793811967121;
    msg.longitude = 0.843315049809;
    msg.altitude = 62724U;
    msg.depth = 445U;
    msg.heading = 31331U;
    msg.speed = -9167;
    msg.fuel = 49;
    msg.exec_state = 76;
    msg.plan_checksum = 21754U;

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
    msg.setTimeStamp(0.841197790095);
    msg.setSource(58555U);
    msg.setSourceEntity(240U);
    msg.setDestination(14341U);
    msg.setDestinationEntity(213U);
    msg.stime = 830235248U;
    msg.latitude = 0.156049135821;
    msg.longitude = 0.673894370351;
    msg.altitude = 32196U;
    msg.depth = 26691U;
    msg.heading = 32322U;
    msg.speed = 9807;
    msg.fuel = -100;
    msg.exec_state = 30;
    msg.plan_checksum = 5752U;

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
    msg.setTimeStamp(0.367442651961);
    msg.setSource(59749U);
    msg.setSourceEntity(184U);
    msg.setDestination(2514U);
    msg.setDestinationEntity(78U);
    msg.req_id = 7767U;
    msg.comm_mean = 149U;
    msg.destination.assign("QOHBORGWBCNNBPMNVMARIJVJHRGVXOTXQMYLAKNXOWYZXVCEEJHLSIRMFNEKEPVCSUHYKBPSINBTTTUEGYJUNOZBIQEAPALXZWDWMQJHAIRWQOQSCFJCRXHCVMAFVBLNNFZWLMEMFVKPLQGCZYTMJLURHVORLUPKZTJOCIDDOHGSEQMUDLITIDDCYUFSPRBKGWZFGIBPYZXKHETUZABY");
    msg.deadline = 0.032021007465;
    msg.data_mode = 51U;
    IMC::TeleoperationDone tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QWGJSGSBXKLHJXAN");
    const char tmp_msg_1[] = {92, 95, 95, -27, 2, 104, -79, 3, 107, 53, -100, 54, 82, -7, 50, -107, -37, 36, -93, -3, 108, 117, 89, 12, 29, 122, 21, 16, -120, -23, 35, 38, 80, 23, -62, -77, -45, 60, -64, 75, -120, 102, -127, 120, 122, -34, 120, -33, 11, -110, 75, 83, -1, 121, -126, 70, 55, -126, 68, 79, 83, -31, 14, 56, -97, -67, 120, -58, 97, -125, -96, 62, -33, -76, 122, -35, 102, 6, 126, -23, 1, 52, -57, 45, -58, 37, 15, 12, 76, -35, 126, -98, -99, -113, -119, 94, -97, 25, -57, 106, 48, -11, -21, -65, 14, 15, 15, -17, 74, 67, -6, 97, 85, -77, 68, -90, -55, 14, -3, -102, 92, 32, -9, -4, 25, 63, 115, -4, 34, 25, 85, 71, 18, 23, 103, 116, -48, 46, 90, 109, -118, -40, -86, -111, -88, 46, 6, -86, -48, 92, -58, -91, -11, 91, 116, -8, -48, 11, 56, 106, 33, 79, -112, -92, 102, -83, -115, -12, 40, -35, -21, 111, -56, 79, -121, 25, -88, 87, 45, 113, 70, -62, 18, -87, -107, 100, 110, 78, -85, 72, 79, -125, -117, 85, -113, -10, 15, -17, -40, -7, 123, 12, -85, -22, 6, 38, 90, 118, -41, 102, -31, -12, 99, 101, -41, -59, -106, 104, 32, 93, -96, -20, 69, 95, 98, -45, -71, 20, 26, -108, 51, 36, -86, 43, 123, -77, 69, -20, -109, 109, 1, -120, -100, 125};
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
    msg.setTimeStamp(0.238583799494);
    msg.setSource(53154U);
    msg.setSourceEntity(235U);
    msg.setDestination(49535U);
    msg.setDestinationEntity(6U);
    msg.req_id = 65490U;
    msg.comm_mean = 29U;
    msg.destination.assign("AXQQXOODOADPHFAKBYMSKBRANQYKRWWKRSPLUYUTWAPMTCYVGGJI");
    msg.deadline = 0.470559729903;
    msg.data_mode = 64U;
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("ZLWZPWFYYJOLPNULKKTBQFEDXJMTHIBLSABFWYXARTBJZMGPCWXRSTDIVXSAVTRGQMCHDKNMTXCSMEWVQJZNHDOWUTGNSNSAMUDAPPROKCOAIDTPHIGPXQSYHAKRXQBDUVLZUOFYYQSMLFUZEEABFZUKPOIIUHCAVEVXGNHBLCSVHVHJCOOQDDQYJEMPNBRLKKCIFVEINAZYORWUDUGINWWVCSTJBMZFXKFT");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LILTMWJASUTCMQSPVMLSZKRXGJERVNSWIMPXUAJXMIARHXXWNUUEBZJFMTHNMLLZPFUOGCHNEQMFVTFCKTYPQLSHGVMEGHYAWAOEJCBUZKPAHCIAKY");
    tmp_tmp_msg_0_0.value.assign("OETEFUXZZXNISPPTDHUHDZIGYWMDKGISUZWFCDQCDEZBWMHNAALXCBTFHOBVTMZJZ");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QMSACWDJHLWEIQMOMMPLIFXURROFPDDLTJCUUKUTQHXI");
    const char tmp_msg_1[] = {44, 86, 96, 9, 125, -10, -118, -45, -1, -106, 59, 111, -116, -60, -33, 76, -78, -57, -48, -4, -121, 28, -120, 115, -126, -124, -117, 46, -1, -17, 72, 36, 65, -83, 102, -63, -123, -66, 93, -14, 102, 97, -25, -28, -63, -111, 60, -10, -60, -30, -90, -29, -125, -100, 77, 114, -54, -91, -58, -79, 29, -84, -35, -88, -5, -66, -104, -79, -81, -28, -43, -88, -16, -2, 22, 3, -128, -57, -33, -76, -76, 0, -81, 87, -53, -15, -56, 33, 93, -60, 46, -84, -18, 108, -27, 76, 0, -94, -108, 41, 64, 15, 100, 2, -126, -93, -89, -62, -59, -70, 24, -90, 50, -126, -5};
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
    msg.setTimeStamp(0.368657598175);
    msg.setSource(9781U);
    msg.setSourceEntity(69U);
    msg.setDestination(14044U);
    msg.setDestinationEntity(138U);
    msg.req_id = 44099U;
    msg.comm_mean = 134U;
    msg.destination.assign("LOOCQEROUHQPZDDUMRRMDKPONPMGFUEXZCCJAESUKOPZKTGXVAAHCMIEKMRQFMIHEDFLZOSIXZTEBLVJZGEBRVBVPYOJKWIJLQSWSIHQGKUSNXPIAYMNCGHMTZBWWVULKTWPXWGZA");
    msg.deadline = 0.216617460938;
    msg.data_mode = 196U;
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 18358U;
    tmp_msg_0.destination.assign("ZLLYBNROEUXXFPWNRCLFKFGYRXNTVTHAATXALYPSMYIUPYMCSFFTBSCDPXGZUYREHTVWBAUUKIUMFCSKJTVDQSLGJEOEZNKCOF");
    tmp_msg_0.timeout = 0.10352906735;
    tmp_msg_0.sms_text.assign("PQPZHSTPYAP");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZUCJEKQONCCTHLCRZXDSHBWZTNIWDPXSDU");
    const char tmp_msg_1[] = {-14, -91, 57, -43, -53, 90, -10, 40, 99, -122, 26, -93, 79, -38, 120, -44, 14, 19, -85, 93, -68, 80, 41, 15, 100, -19, 75, -1, 12, 11, -127, 75, 16, -3, 116, -8, 95, 89, -86, 111, 102, 13, 77, 38, 18, 5, 2, 14, 3, 107, -81, 42, 60, -20, 78, -70, -32, 45, -97, 55, 101, -16, -26, 104, -64, 107, 60, -62, 9, 38, 5, -76, -108, 111, -80, -77, 28, 20, 89, 30, -83, 106, 16, 0, -28, 86, 124, -112, 101, 95, -76, 3, -73, 8, -75, -106, -60, 95, 45, 22, -70, -26, 46, -65, -23, -23, -122, -20, 24, -29, 30, -125, 56, -41, 57, 38, -25, -106, -31, -34, 13, 79, 92, 86, -61, -119, 6, -4, -37, -100, 42, -118, 55, 32, -76, -45, -113, 121, 98, 125, 100, -59, 53, 71, -115, -56, 35, -95, 123, -16, -76, 45, -112, -103, -19, 28, -88, 14, -44, -13, -108, -123, 119, -13, -3, 96, -54, -107, -67, 47, 57, -84, 33, -52, 50, 20, -18, 54, 54, -68, 39, -95, 36, 12, 8, 84, 25, 1, 99, 85, 49, 6, 17, -22, -35, 10, -50, -80, -55, -12, 48, 98, -110, -113, 84, 17, 88, -117, -89, 62, -53, 68, -73, -18, 12, 53, 8, -16, -116, 41, 117, 111, -75, -44, -110, 41};
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
    msg.setTimeStamp(0.177355508336);
    msg.setSource(5215U);
    msg.setSourceEntity(122U);
    msg.setDestination(63913U);
    msg.setDestinationEntity(116U);
    msg.req_id = 33498U;
    msg.status = 42U;
    msg.info.assign("ETKVBPIBNBFEAFXTLAYRJGLWQUKLJXDXQKIOXDNYECMHRCSIHGOLNYWVVMXHHCUDNWMUCAVFIAUIPUZWKTQPEKHJUUCVISYEEPBMQFFVQCTRGUSYWGIWMTTGZULJME");

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
    msg.setTimeStamp(0.0244903444179);
    msg.setSource(39653U);
    msg.setSourceEntity(17U);
    msg.setDestination(34775U);
    msg.setDestinationEntity(226U);
    msg.req_id = 14092U;
    msg.status = 152U;
    msg.info.assign("AVAYRTXJADQUEXBCCYDJCVCBZFFLWKEMCEQKLXUPHTCZEKUYEQPVJINTYGSEHJDSRRLAQOWQTJHZRWFDSTGIULRVAFQGYPBSRNOKNSMQLTGLHEYELPBFMNWXDIVVHUTGJSXODBZUZIGYVOUKGNPGBJWYTAH");

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
    msg.setTimeStamp(0.699912050896);
    msg.setSource(19428U);
    msg.setSourceEntity(184U);
    msg.setDestination(9314U);
    msg.setDestinationEntity(239U);
    msg.req_id = 22006U;
    msg.status = 12U;
    msg.info.assign("STBVHUJBJVQTQAVIXVPVRYIHCPTBYJLEWRNPGADIDDXZDCMJFFMNYEYEPSSUBSMPCLBLGHAACZRARDQIOWCVLGNUKWIADTBEWEIMOXOKBLPOXTEFTFMBWLMOAWUFIXRSXGJNVYNEWUTLNPKIFUCKZVNFYRBZVQCGUAQQNKYBIOVTQJSJCGGRCJYUEGAJRWUMKYHNKKJRCLZHZDUHSPEQSTWHZAXO");

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
    msg.setTimeStamp(0.0696256719961);
    msg.setSource(37916U);
    msg.setSourceEntity(26U);
    msg.setDestination(15508U);
    msg.setDestinationEntity(123U);
    msg.req_id = 12282U;
    msg.destination.assign("HUWCQEELJUDYIFJVHZUVTLHFZVWQWSRDDJMXIRRRYCLZBOOHWQPAZMCZJPIUHLUKXCWXDBYJFZLAMCQLHLEUFVUROQCHGSQCPJVNJSGUOTILKCDBVVNNEIMYKYXISMCLTIYPKGLZGMDBTIZAAOYVFAIWSXG");
    msg.timeout = 0.997876870248;
    msg.sms_text.assign("VOPDYMIQQCZKQASTOIWCXPOKTZOMQREWLVUEGMCNLKSBFBJPUBQEHYVKSLFUTJXIDACMZDCBTNPDCOYSXDXBAUDWPECNBRHODMYJCEFVRLPVHNJHZOIIGMJYPGBMESLFRALRZWOOABLEAGKDRVOYDSAUQRWJYMKTWUYNHRHJEKSYRGVXGFUJHGQANFLUHNPABGZZSGZEITWFKVKTAQDMFW");

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
    msg.setTimeStamp(0.300370507536);
    msg.setSource(17586U);
    msg.setSourceEntity(199U);
    msg.setDestination(14540U);
    msg.setDestinationEntity(83U);
    msg.req_id = 13518U;
    msg.destination.assign("ACBZOJPNEKJVAYOOUIYMWCOQURWEWHZPFPYAURVOYDKKUDMITRZIRSBBEKXNTARMAOGEMXNXDLODOLOYCVWRXQBPHHNEFSNZESSXGAGDVAWUGFDZQBPPVYFJIKUKFJGQDULNGEJUKCSXTT");
    msg.timeout = 0.627676835357;
    msg.sms_text.assign("KYHOKXYYJYRGARAZIFIHWDOBJJOCHJKSFFXFFAVMLGEANNOUFRXJFTCPRQTIUUNIIENEOULZXHKNQSPHQSDLOMDPWSZSJSOIMTIDCCPCQDUKXTDQD");

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
    msg.setTimeStamp(0.0590053128771);
    msg.setSource(13265U);
    msg.setSourceEntity(31U);
    msg.setDestination(43U);
    msg.setDestinationEntity(77U);
    msg.req_id = 56602U;
    msg.destination.assign("JSBSTXJDKCLNFRQWTVZDSRHKOGCZWHWFKSMDJZWQXRGCXZVHOYFIBOPC");
    msg.timeout = 0.505976727128;
    msg.sms_text.assign("PFFZEICREHIQNWUNWMIHLORRUPNCBKALDMKVTSGNFAPHXNWYAUDJBMCZETGXQOBKGZPCITRJLPQHFVFIWMDYDHCKJVQHHILEXYXAZCIANMULWIZPHMFZBBOJSUKAW");

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
    msg.setTimeStamp(0.318396555961);
    msg.setSource(2570U);
    msg.setSourceEntity(219U);
    msg.setDestination(28659U);
    msg.setDestinationEntity(146U);
    msg.req_id = 35770U;
    msg.status = 89U;
    msg.info.assign("JKINWTULSJKZMHZSXLJRDLLPDXPMLQKRTHYHPHEZOSVSQBMLCOHDFIDGQTHOAGUQVCYJENYFCGWBDSNXYXHZUNJBMLMEZKMJQDWLOIWBVPEWYAAWJOTDAEWGCRJSRSBYBSMDEDICCXSMQVYFATLTJVIPXUIWMIOVGEUDNBPCNYEYBTFOIKOXQHTKZHUBAFZEVIIRKHVUQGRGR");

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
    msg.setTimeStamp(0.913991756786);
    msg.setSource(18664U);
    msg.setSourceEntity(215U);
    msg.setDestination(13573U);
    msg.setDestinationEntity(98U);
    msg.req_id = 1267U;
    msg.status = 153U;
    msg.info.assign("NCXPUTJDIVJCVKHDCOZYMKEPNEQJPOAFLMEPGLTFXL");

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
    msg.setTimeStamp(0.673596555491);
    msg.setSource(60074U);
    msg.setSourceEntity(86U);
    msg.setDestination(34852U);
    msg.setDestinationEntity(24U);
    msg.req_id = 31058U;
    msg.status = 74U;
    msg.info.assign("YVHDRVRRQKXFIYADXIJXBANZQJBREXFQWQLARC");

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
    msg.setTimeStamp(0.292191297798);
    msg.setSource(11185U);
    msg.setSourceEntity(193U);
    msg.setDestination(43259U);
    msg.setDestinationEntity(214U);
    msg.state = 91U;

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
    msg.setTimeStamp(0.505825434188);
    msg.setSource(65495U);
    msg.setSourceEntity(172U);
    msg.setDestination(36930U);
    msg.setDestinationEntity(101U);
    msg.state = 215U;

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
    msg.setTimeStamp(0.954043645423);
    msg.setSource(63600U);
    msg.setSourceEntity(27U);
    msg.setDestination(19292U);
    msg.setDestinationEntity(98U);
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
    msg.setTimeStamp(0.0175960088189);
    msg.setSource(32359U);
    msg.setSourceEntity(143U);
    msg.setDestination(63759U);
    msg.setDestinationEntity(152U);
    msg.state = 177U;

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
    msg.setTimeStamp(0.0642012588902);
    msg.setSource(50047U);
    msg.setSourceEntity(49U);
    msg.setDestination(65097U);
    msg.setDestinationEntity(47U);
    msg.state = 101U;

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
    msg.setTimeStamp(0.276537686157);
    msg.setSource(5370U);
    msg.setSourceEntity(211U);
    msg.setDestination(38705U);
    msg.setDestinationEntity(159U);
    msg.state = 2U;

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
    msg.setTimeStamp(0.618073563923);
    msg.setSource(12220U);
    msg.setSourceEntity(66U);
    msg.setDestination(24485U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.100128091208);
    msg.setSource(35246U);
    msg.setSourceEntity(171U);
    msg.setDestination(12711U);
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
    msg.setTimeStamp(0.584202648443);
    msg.setSource(34289U);
    msg.setSourceEntity(77U);
    msg.setDestination(10955U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.753492250138);
    msg.setSource(15978U);
    msg.setSourceEntity(45U);
    msg.setDestination(31988U);
    msg.setDestinationEntity(200U);
    msg.plan_id.assign("OCIPQYZBMFJBISYVXTHAURMNFAKPVJFSNATTLUWTKJNELFPPNTDHXQKUDVDOMNGPDHNNUJRGF");
    msg.description.assign("NWINGUXLEQJRKQCDFWNHLXSPAAOOKLLVWSMHJMUEBIWFJKVHAGCFYNAQYXSWDQGIIUEORKRYVSZXGTXALMNIJMLWFZKYZKKGOVZWOPOVJKPEZUARLANXNDNFWUQCTZEMFJTHALPHRMQGRYSDQCABOVMVDFRDIUXZOVBDPOXHNPBUFFTHIVUKSEBT");
    msg.vnamespace.assign("QARUJQGTALNLIBKHZOQUAZJDYTWMWABEWAZOFUNTDNIQXFCYIBORPHOJPAYUSLPYLDQGFEIXDKXBUZFHOLRWRLCKXTDYCWIGPZCBRVZFPVPWXEL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GLCVAIBWBVGAPOBRRRRFHLAXGOWQVYMMBSSRZTNHCEZUSCDQPYTUGYFDROQRDIJWKKFCYYKEQBCMZTOOJUDAGJEMHKSTGXHIUOKOOSUPXZNQNARISVQICOXPUAZGXJCFVMNVTZNUTQDPWMHZBFNTWTALBCKIURXSTPGKAJLBNJYFDDASQTMWVXPJWWYSNM");
    tmp_msg_0.value.assign("XTFDRWSTJYJBFCMXNEOBFDMLTZZYHGJDTAIOHQYPTTAHVOLXNBYCQBZSLOLHISCVUKTKVXZAORLWKTMCFQEWRQXGBLGBLQYSSKNUEKASSNZVDMFPXYUAJXXOKFER");
    tmp_msg_0.type = 98U;
    tmp_msg_0.access = 188U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ICBKOKKIOKHEXSUFNUJKOECCWRGSXEPXOBRQCYDQQTDFMICJYHWLRCANPYNRHZVBEFZPTMJQRGLBGUVPFABYNIDIVUDQGLBENOEMTXGOTVVAXIOPYYZIMANBHJGAWSSBKHNXYNS");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("HHPNGQZTVCVUICGUZWFIDCFDAAXNKJCLOEZPTCLJTYDIHMBCEYBDJBVOVSSJWNUZHUUGWEZXQKDKEXPXRJGIPFNFXKZMOLRMYLRXRQNSMPBSJLBGDONSUYADOTQOZTAVAGAREBPZWPJJBOIQFWYNLLETEFEBRLTMQGWHYVHCTARGAGHJSUNQOUZKPWROKHWMXFVSFCSVIKWNFXPUEAIWSDFVRLVSTKIGCXRJLDCXQOBYBPMHYDYMTE");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 42081U;
    tmp_tmp_msg_1_0.custom.assign("MQVOPEYUZGOXMKVBBPZZIVLCOKLEFFIOOR");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::IndicatedSpeed tmp_msg_2;
    tmp_msg_2.value = 0.0390184608002;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::VtolState tmp_msg_3;
    tmp_msg_3.state = 149U;
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
    msg.setTimeStamp(0.516111967737);
    msg.setSource(20143U);
    msg.setSourceEntity(54U);
    msg.setDestination(50887U);
    msg.setDestinationEntity(212U);
    msg.plan_id.assign("TPAWZJGULANXBIAKNTVNVCESIVPZKRKYHTMKDXLDGPSBFMYAQUTCOUWLJRWEOBIQPQLKMWBNUOEXQVTHMCOXAHGMSJUDHFBVEWAYBGQXCUZYGLEINPDOJHHNDRIPVYBXJTDJIHSOTADNGSQIHWGFOJCELKYMELGYMDOYWTZNIFZEXNXBZZDMGPQWFXALTVZAGKRFEUKRMVSHNXSER");
    msg.description.assign("FQIHXXLLNDVBGKMVORGAGC");
    msg.vnamespace.assign("SFZSHGUKNHCJVEBKYHEDPDIHSBJRHJXITVOOPKLNADQRNISTCIYZEPOBAQQGCFM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HGIECAITPJKXOAWLLLVUUQEOYQMKOABZBUSUPODQNYAGNSFDMROEWTZRIFYHEFQDJJVMVVHLFPSXGCJRIMWHRTQXMZIYPFMFPSKPGBFSTIVNBOXKXRHIXWBTVCODFKZECWNWIQEYVNDZGBQHGWCSBJEYOTRBTCXKRNNRNXYUXKQACLULKGVPWCUDOZLHGYVLDNMSEJIJNTTBZOSHUSH");
    tmp_msg_0.value.assign("MNEYNEJYHBVUDDQTTULZQXSLVCODJPLCTKPTWMFWZHPOVPIWZKENRGEKQZIESQQGGGKGBLQBR");
    tmp_msg_0.type = 82U;
    tmp_msg_0.access = 171U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SBLAHNMFXBHPRVZSMIWUMGVTTQHYKYZKCMDWKEGXBGZZXDYXAWNZLGBACLSAIHFFMAPPATCCICBTOOPMWWWJICXOGLWDDMBIIVKJPUAJUNEBLYREJUSNYGGQQUGQOUSFOVFAXIMKSPFHZZMJBDTJVUPIEWWKRBEZKERTTGEVROOANVDSRHXDMPYQTHFLZEACQOQKKCRDVGJTRYRIDNBLHUQJYONVXFUPSULCSHLRNIFDQOLEKCHXNQ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("STGFXWUZFEZFEVOQYWQNMXYNRKCLOBEQMSDLVTWVDSJNOPRZ");
    IMC::Takeoff tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.981796430971;
    tmp_tmp_msg_1_0.lon = 0.785080948637;
    tmp_tmp_msg_1_0.z = 0.0380959448041;
    tmp_tmp_msg_1_0.z_units = 213U;
    tmp_tmp_msg_1_0.speed = 0.0478448877971;
    tmp_tmp_msg_1_0.speed_units = 160U;
    tmp_tmp_msg_1_0.takeoff_pitch = 0.527956229929;
    tmp_tmp_msg_1_0.custom.assign("FFCEOARALLKRGZQCYCZDEAOMCDIKJFVTEUCEBOSGMXGLTTUJCPAOSJOAFVBOKGWPPJVRJHNZRUTLAZYVSSWMNZRVEZISLRTXQAXTIWSZFPAUGOSKXEBYLPWKHNNPUJCRUWLQHGOXVBRIQLFQJQTWGMWUPBUTHSMGKBGKMZVAJILDFPNLKIUYMOQPBGDONIXDCAHZ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::ParametersXml tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.locale.assign("LFYLQSTGVTQNYKSUKLQRDBGCNRWLMWKPUKJIZQKXBFPBUHPMABZTUWQZ");
    const char tmp_tmp_tmp_msg_1_1_0[] = {-66, 119, 113, 81, -30, -22, 44, -30, 110, -110, -16, -104, -89, 115, 80, -23, 26, -47, -126, -27, 34, -128, 83, -14, 58, -125, -55, 93, -13, -89, -79, -70, 45, 27, -62, 70, 84, 52, -47, 36, 100, 71, -106, 65, -19, -98, -116, -73, -8, 21, -2, 55, -59, 3, -61, 86, 123, -26, -105, -56, -79, -82, 43, 38, -127, 13, 120, -17, -23, -98, 75, -67, 88, -99, -44, 107, 69, -53, 16, 71, 123, 112, -91, 126, 98, 85, 100, 107, -85, -32, 117, -1, 81, 64, 40, -26, -69, 27, -70, 41, -97, -27, -15, -32, 68, 126, -21, 65, 14, -28, 16, -39, 77, -30, -52, 36, -4, -104};
    tmp_tmp_msg_1_1.config.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::ImageTxSettings tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.fps = 52U;
    tmp_tmp_msg_1_2.quality = 87U;
    tmp_tmp_msg_1_2.reps = 23U;
    tmp_tmp_msg_1_2.tsize = 102U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("RBTWNAEZEBKSCJRBGMXVCONSVJFHUCMTMVMWYIYVMKIVOAXHNOHQDNULUJGFTKAYHKIXQEOELXXBTVBD");
    tmp_msg_2.dest_man.assign("OAPDMCHLLNJEWXTKQQEIKDNPADTUVIBBRGCPJVEKSDUFJUFEKHGFVLYWOHOMWPGWMOODOBVFHWVIFBWJRDNQGCPJCO");
    tmp_msg_2.conditions.assign("TKLSAEXQMVPXDPRXFRGJIIYJFCWPNXHWROHBTRBPNIOGZRBTKETASWLDDVIWDQWALMHXQZOWJUJPNVVKSFIUDETIFHZHGHFLUBLBXLDKYBQNXJRXUSFDICQSUGKTIHFHOLVGANBSEWNNQGIBCUAMNYGOCJOJCZLYCPKDRUNCLUYJBBHQTAXKYETWLCAZTCKAVYDRFWIZQHKYTQEYOOJEUZJGYMPDGPFMFVAMVPZMRS");
    IMC::LowLevelControl tmp_tmp_msg_2_0;
    IMC::DesiredThrottle tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.value = 0.437444518283;
    tmp_tmp_msg_2_0.control.set(tmp_tmp_tmp_msg_2_0_0);
    tmp_tmp_msg_2_0.duration = 47864U;
    tmp_tmp_msg_2_0.custom.assign("IUQUOUQYSTZARURMSUKRWKSJPTCAGORWLAQVHXPADYSTIWJHQCDEFLYVZXGLJGKKGBVWAEKZBGIIEAUFWHCLZDLAXPTDLMMRFVWRFBWFF");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::ButtonEvent tmp_msg_3;
    tmp_msg_3.button = 242U;
    tmp_msg_3.value = 153U;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::MsgList tmp_msg_4;
    IMC::LblEstimate tmp_tmp_msg_4_0;
    IMC::LblBeacon tmp_tmp_tmp_msg_4_0_0;
    tmp_tmp_tmp_msg_4_0_0.beacon.assign("ALHKEFDINYDULTQQVXGZVOAFIZYSPLJIHVNSYPY");
    tmp_tmp_tmp_msg_4_0_0.lat = 0.334707128181;
    tmp_tmp_tmp_msg_4_0_0.lon = 0.0355028512643;
    tmp_tmp_tmp_msg_4_0_0.depth = 0.382914719353;
    tmp_tmp_tmp_msg_4_0_0.query_channel = 212U;
    tmp_tmp_tmp_msg_4_0_0.reply_channel = 232U;
    tmp_tmp_tmp_msg_4_0_0.transponder_delay = 242U;
    tmp_tmp_msg_4_0.beacon.set(tmp_tmp_tmp_msg_4_0_0);
    tmp_tmp_msg_4_0.x = 0.091006258955;
    tmp_tmp_msg_4_0.y = 0.445800535076;
    tmp_tmp_msg_4_0.var_x = 0.30642848471;
    tmp_tmp_msg_4_0.var_y = 0.50058429999;
    tmp_tmp_msg_4_0.distance = 0.847925848499;
    tmp_msg_4.msgs.push_back(tmp_tmp_msg_4_0);
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.744538820275);
    msg.setSource(36687U);
    msg.setSourceEntity(54U);
    msg.setDestination(61075U);
    msg.setDestinationEntity(53U);
    msg.plan_id.assign("XSIYENLSXHCWDCXVMWGJFHTFYGAGOAZBCDZQMKONLILPNMDBKSCUJUTBA");
    msg.description.assign("FOTVILXBWKQENFGLJLPTQAWLIFIWGUWXZBEFYEKWMTRYPZDMAQNHSKEYDRNGWSPISQNHCPHRETYCCOHIWGPKRGXDXDZZKBYSQJLI");
    msg.vnamespace.assign("HATZPZEBTVZIKWFGVUFFKRCJGHPF");
    msg.start_man_id.assign("SOYHCYNPQNHNKYBSQNZKYXPOLTRFBQKGRTOGD");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("BATBIALWXNPYAKNOBDAVCEEDKGPJLWLAEHMRJQYWEZQQHPSCCFFRMOCZZULSRVNOCKTEPXKYQXPKYITNADWNZXEUUJUHSAFKQB");
    tmp_msg_0.dest_man.assign("RUWSBYWTDRSKWASJMZQBKBVRMHIXXSGUOHGXBWECVTPTUVSXNWINQYFIPIJILMUEUTQDTVZRYGMQUCLFLKWVVCLCZMEPADWRY");
    tmp_msg_0.conditions.assign("WTURLUYCDMFMEXNRJGPWKCNLROJBXNLZA");
    IMC::DevDataBinary tmp_tmp_msg_0_0;
    const char tmp_tmp_tmp_msg_0_0_0[] = {15, -107, -103, -79, -110, -27, 123, -51, 113, -13, -96, 45, 27, -96, -91, -73, 6, 35, -104, -101, -105, 110, -19, 22, 44, -14, -53, -92, -99, 46, -114, -68, 124, -120, 41, -47, -4, 102, 108, -112, -83, -96, 72, 121, 11, -55, 20, -105, 57, 33, -29, -13, 22, -25, 62, 56, 100, -55, 67, 56, -111, 29, -23, -56, 0, 88, -38, 87, -105, -25, 85, 112, -67, 97, -18, 49, -32, 65, 79};
    tmp_tmp_msg_0_0.value.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::FollowTrajectory tmp_msg_1;
    tmp_msg_1.timeout = 46796U;
    tmp_msg_1.lat = 0.91942198881;
    tmp_msg_1.lon = 0.470441229631;
    tmp_msg_1.z = 0.21386798233;
    tmp_msg_1.z_units = 237U;
    tmp_msg_1.speed = 0.854302434528;
    tmp_msg_1.speed_units = 8U;
    tmp_msg_1.custom.assign("WEGNOEJLLEDYQZPIBGOLXIIRDGTPKQPXYGNDVAICNMVXNFRRBBMPHZCZEIIQIZKTSJUXTNSWIATOVOWCYOWODSRCAGZQUCUHM");
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
    msg.setTimeStamp(0.587906937396);
    msg.setSource(45140U);
    msg.setSourceEntity(61U);
    msg.setDestination(60139U);
    msg.setDestinationEntity(108U);
    msg.maneuver_id.assign("WDOCEKNFEXOFRIGAEJEGDTQEIPQTENYPKRCSIBMRBPEQWHAVPULVQTVOKDTJJSTGCMYHVVCWCDNMSTIGJJFLVIGHKUMWDABEOLUWLYCPNANQUUELYS");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 14185U;
    tmp_msg_0.lat = 0.333384403558;
    tmp_msg_0.lon = 0.774894452494;
    tmp_msg_0.z = 0.177706075096;
    tmp_msg_0.z_units = 203U;
    tmp_msg_0.speed = 0.892085921962;
    tmp_msg_0.speed_units = 125U;
    tmp_msg_0.custom.assign("WQFHLTTPLFMWZPLRANUXDSDVOTHBKHVWHKVKYISNXGZTWOSMRNJPQGZVAKJOMIJSQVYDMYKQLCZWVMSDSXKXXIDFQUQTYCBTHPMCWZULFRATJDEATGDHISNEXNMWKCQ");
    msg.data.set(tmp_msg_0);
    IMC::TrajectoryPoint tmp_msg_1;
    tmp_msg_1.x = 0.48821020319;
    tmp_msg_1.y = 0.738041276162;
    tmp_msg_1.z = 0.0278849269067;
    tmp_msg_1.t = 0.634234531248;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Distance tmp_msg_2;
    tmp_msg_2.validity = 226U;
    IMC::DeviceState tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.x = 0.806250974556;
    tmp_tmp_msg_2_0.y = 0.104300171501;
    tmp_tmp_msg_2_0.z = 0.57401716069;
    tmp_tmp_msg_2_0.phi = 0.422749397223;
    tmp_tmp_msg_2_0.theta = 0.309561435285;
    tmp_tmp_msg_2_0.psi = 0.746674363112;
    tmp_msg_2.location.push_back(tmp_tmp_msg_2_0);
    IMC::BeamConfig tmp_tmp_msg_2_1;
    tmp_tmp_msg_2_1.beam_width = 0.62441543555;
    tmp_tmp_msg_2_1.beam_height = 0.363218270255;
    tmp_msg_2.beam_config.push_back(tmp_tmp_msg_2_1);
    tmp_msg_2.value = 0.179606275983;
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
    msg.setTimeStamp(0.979127984495);
    msg.setSource(11534U);
    msg.setSourceEntity(118U);
    msg.setDestination(18284U);
    msg.setDestinationEntity(2U);
    msg.maneuver_id.assign("HMABKWMADPMVFDIGVMDKWWPKWXHVWNYWMFOAUZYLNJSDXBDDJBTCTKLECRVKCJRQJHXOBGSXRCBYRTRCENPTLHBYCZFJQFCRADFQRXQPVOJGENOFGMETNLGUHKVJPKGOENLVUVKWEZHOMIYVALZMIWAZIXGNHLBQJSRSSKHAOQXAGF");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 51350U;
    tmp_msg_0.lat = 0.166437902327;
    tmp_msg_0.lon = 0.897251548814;
    tmp_msg_0.z = 0.563104983671;
    tmp_msg_0.z_units = 215U;
    tmp_msg_0.speed = 0.703473927261;
    tmp_msg_0.speed_units = 106U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.87930657677;
    tmp_tmp_msg_0_0.y = 0.566529092165;
    tmp_tmp_msg_0_0.z = 0.205996916381;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("UIVZDFWGUQHXCJXMJAQVSMDKYODELRBSNAHMCBIYDNGBOQJDYNDTVXMOUXPRAFEFIYLSHGHEGPGCCUSHXWRGKZNNARAROAEYHGDKTJENZBLQWBSAGIWTJNVOOXNTBNGZEJUZFBCLHGVQBUFPRTNRMXLIWIFZJMFTMWZOKJLA");
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
    msg.setTimeStamp(0.889932290606);
    msg.setSource(64015U);
    msg.setSourceEntity(91U);
    msg.setDestination(58290U);
    msg.setDestinationEntity(231U);
    msg.maneuver_id.assign("AEETSJKKLWWSNKREUBIVPFQOZLBNPJPMKUJYZOFQGBGFQWCCYHDHVTBGVOOPHFDYGBNAPFAWNUHYMOOFVPASTOFPDPXQDBBTIEIKKLJAWIJAIZLNKLUMERAMZOGYLFSWMXHVSKDMKXTQPGXYWEASWVMKMQJPGUHDL");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 5112U;
    tmp_msg_0.lat = 0.605398943747;
    tmp_msg_0.lon = 0.207487696092;
    tmp_msg_0.z = 0.705094720582;
    tmp_msg_0.z_units = 143U;
    tmp_msg_0.speed = 0.0394818876521;
    tmp_msg_0.speed_units = 107U;
    tmp_msg_0.custom.assign("DUKGEKOYDEVWEZQDSELXLGSWUYXBRSLUDBALPVJMXWWTAIPYFUKGCVPEBMJAQWITAGITFLEEOSOVONSKUTGZQDFGNZABTRHALOIFZMYOKTPNOMYFQPIDJXHUCAHWBTBCXQFFOVJSHSZNWMTCLRKAFBRNYQRZIRUMIJCULCPYIJHRBXQKQKBLZDMWWCDJSNUJMPHELXIQVYGGWPNRZJXAZCAVVEHOBKTJMSCFZRCSNUVNTPDGGHXHXPVFHYI");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.405754187932);
    msg.setSource(47292U);
    msg.setSourceEntity(45U);
    msg.setDestination(21739U);
    msg.setDestinationEntity(85U);
    msg.source_man.assign("MBERFHCZYDNUMCISPTKVETCDTGFEBNHJSQMZSQBADQEDXYBCCBKYGETTAXNDNWBDEGUWGGGACZVZSZVDVUYAOPLCMIUIZDLO");
    msg.dest_man.assign("USIHBFMKRSODZQUMOOGVMTUBNRGFCEHIJHFTVFCTDMZCVWXUAELHOINVKJQASUALXKQQGGZTOCNBFTUHCNN");
    msg.conditions.assign("UPLQSBMMJRNCNLGIRVWJMIQRXBLNFXVICPYJVTFLSSBZVWIYYCXOPFPEMYXRHZNARHVWNHVFXQWECTOHJE");
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 18942U;
    tmp_msg_0.type = 129U;
    tmp_msg_0.max_size = 63400U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.28194831545;
    tmp_tmp_msg_0_0.base_lon = 0.745875793029;
    tmp_tmp_msg_0_0.base_time = 0.767144859982;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.303571276033);
    msg.setSource(56370U);
    msg.setSourceEntity(252U);
    msg.setDestination(7640U);
    msg.setDestinationEntity(106U);
    msg.source_man.assign("RPRCLNDUJGFGAOCJRVMXFFQIOLNIUXJWNNKTOCSDNLFTJICDIANEAYWPUEEUIKXZHESKYRHDGSWDJJLGUVIRFDYLRBMRTOKASUXPVBGGYVQMJHGHJVHYIPROZKMIQKTHCAODCWNXQTZVLASFDBSKBEOBIZGTNKSWPUBQBOHHNMXOKCSEFRNVPITUEWDPPYCLGZMWMZZZLEAFBPKCW");
    msg.dest_man.assign("UMDGVSLPVYZCDTRCRMTGOSSWOHEXAZPTGXJKPFXPARKNBOWLFEQWNSKWRTCNIENBZXVNOWNQJAKXKIMGZGLEVWVNDYVABVRQWXAUSPMHTKYKEJXFGWBLYIRBHBUMHDJEX");
    msg.conditions.assign("MHQMCDRTJGKFDFZAMLNGJUDNTWDXLWBWNUOPHOMOYVUNFSVBCGCYLEKDQTRZDPHHNZXCRDQJNKVUQNYMKKUEYK");

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
    msg.setTimeStamp(0.795905664854);
    msg.setSource(54373U);
    msg.setSourceEntity(82U);
    msg.setDestination(31961U);
    msg.setDestinationEntity(131U);
    msg.source_man.assign("HVFDBNNFOZINCEUUZJYFVAXKVZSWGXAZGVQWRWTBYJGCUVAWLRPUTXSLHTWIOHLPDOGPVAXMPZXUINKZQHNUMPLOMICKXAZKNVNMIVGOPSJBVYMWTHITYSWECERAYEBEKSSHWOCKBIABJROKYMETYUFHWEDCEDDQACLQTGBAPECQHGUJJISQLLBVQXQFSWFGZXFGMRDHRSDIBJRKIRDXPPOJFTGBMNKKCLUEOJFHPADYSXMJYCRNLRTZZMDQUY");
    msg.dest_man.assign("OPUKSATCNPARRLPCNIQKFGPFDVQXVGGYGWIDTQHCYNBJDSTJFMJBCNGEKWROEZQNPXUNUBCUFZRQYKBQNIZRMZODNGELRWZLLGIECEHYYHUEXIAIBBMUOQQWEFYGXBIOLMF");
    msg.conditions.assign("ILTHRQAINKIHWBJVKJEXRNDRFWDPJYPOESVQMDMCHPXKTMFMAGFXEXRNOVGJVHUUQFTBSNYXFAQPFWRJGGUTEMAVCDRVABZASEHDQXLXLAVAQKPTSPWXWZIEQUIBIXRGWOQZFZLGGUMWVYSHTOZTURMCNBLICUHLKFZP");

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
    msg.setTimeStamp(0.837613880717);
    msg.setSource(47325U);
    msg.setSourceEntity(84U);
    msg.setDestination(26086U);
    msg.setDestinationEntity(31U);
    msg.command = 89U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XDLFCLTPCZIRTKYTKIHDJBNHICURXVZJESKMMUCCDYOEHXSXGZXOUACZDEQRODKHJCCNMCSBRDIBGH");
    tmp_msg_0.description.assign("HVPXNVNDMVUEEVHDBLAJWYDPQEITJUGSIAWMQKRQJKAVOBMTRCRCNUHKWGRAGDHZFME");
    tmp_msg_0.vnamespace.assign("ZYDXEYEWVVQQWTATOUZWLRGHSFLDABNNWDLECJGUASALGRBYADUODATXCQRPOEBDIKHO");
    tmp_msg_0.start_man_id.assign("EYULYEGAEKQTDQSHATBJVRGBFCSRFKYQGLIUEFEXGIZMQRYPDVZYCXSWKNYVNGAZBROTUKZONOZIZWKTPFMWPXOLKRWNDVTMCATCMQFRHBWBGFYVWDCXBOCEQHTEVWTRIAANVROUMAWBDZGIPUKQURBPEKLMHIPYBSQSLDPYLMJIQCJTJDEPJKVHEDSOHSWSXG");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("CKRGXAKNJFGWQGTRXWNXFVDBV");
    IMC::StationKeepingExtended tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.581378401043;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.962780355254;
    tmp_tmp_tmp_msg_0_0_0.z = 0.876212356248;
    tmp_tmp_tmp_msg_0_0_0.z_units = 27U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.310849567735;
    tmp_tmp_tmp_msg_0_0_0.duration = 38937U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.576520021273;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 56U;
    tmp_tmp_tmp_msg_0_0_0.popup_period = 34922U;
    tmp_tmp_tmp_msg_0_0_0.popup_duration = 43189U;
    tmp_tmp_tmp_msg_0_0_0.flags = 222U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("VOJSGHFKIAMDUMVAXXAXQZCDKLRQSXFAQYBECTVKVHEUUWQZNFVQCUYLIPJAYJTRBSSGNIYKCLPKONVEGNWNNPKPYPQTQWDUSJWHMMHI");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::TrexToken tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.timeline.assign("BFGCQAVNIOMRMKBOUIKBENXKDIDTPDHNSZGSXBWCGWWRAYNJVTKZDXZHQOQPAHUEOLSPRQIKBJIBEJABGEUYRLLVPKZUPSAGFYXHOUQSOLUWYD");
    tmp_tmp_tmp_msg_0_0_1.predicate.assign("PCTREKJMTVFQWVQFJDNQIKBOXMEOLARUHTOWMDDXGFQICPGSWRAYOUTNNXUHDRBAKKUV");
    IMC::TrexAttribute tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.name.assign("ENNSDXQFAOUJTBPMXYOLBYTEFMVBDGRZLHHWDMROPMEFIFTFZCGZOYKWZISNRWBTIEFOBRBTKDIMOLBDMSDAFWVYJGXOOQQNVIGKDVLSPRRGGTQWLPIKLPCEPETIHNTKBUT");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.attr_type = 161U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.min.assign("APKQVANEGJGMVZEQGEHSNSGVKRAEHMBNXJIDCFMGPWFCSIONEAJKTDNQPTZMUUXMBWPCOKOCIXJITPOTUUQMEYKJSTOXHRILLQBIHCPHMXOVQXARWLFCBHXBPASMFFOJYBMTGRSLBVBFYRZQQFVCWNOJVWIAWVHCDIXJNMGDINRZDTUYYKDKFRHERUXLWGATDTEDFUZUGDUFJZLALHDYGLBKPZEZXROTVSKSOSCWUCI");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.max.assign("ODABVRIKRHDAFUBYZNADIXQWBKJZLJSMTQMBTOHQVDGOPOAKFEJSQEXGJIVFFXJWPAYTMZHITLOILGNBHSHEZAASYUTXAOVMLRGQXRYVQNDHPTPBKMPHJBRXFVRVAACCUELDWXWGNUEOUEFMLICTECGSVUYWGNLOFZUDKNEYZSOIXYQFZUP");
    tmp_tmp_tmp_msg_0_0_1.attributes.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::VehicleCommand tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.type = 159U;
    tmp_tmp_tmp_msg_0_0_2.request_id = 49150U;
    tmp_tmp_tmp_msg_0_0_2.command = 82U;
    IMC::FollowPoint tmp_tmp_tmp_tmp_msg_0_0_2_0;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.target.assign("BZLZSLARFYUDPQHTMYPHDWERMWWGQZLXMOBVFHIFWRSKLTOIIPCDDOAUVFONQYWZAMIGXPMFCPIKTPILXUQZWQLCKTOMUOSHMHCPQEGYVJJHCNEZBRBCXEVPSUBYWLXVUEFENAEZUAJKOGMIRTEGQJDNRRCCTSDUQYPVLQGTCHAAJNABRVVSGCYKPBRXYGKEFDTNVKQWVJSOZJTBX");
    tmp_tmp_tmp_tmp_msg_0_0_2_0.max_speed = 0.0202986312684;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.speed_units = 24U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.lat = 0.569120448763;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.lon = 0.776877083872;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.z = 0.495556917092;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.z_units = 2U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.custom.assign("ILHBTKRSEBHMVXWWWUWBZQUSZGLXQCGFVUJAKCYPRMIJFGLSTHOQAXMNADAYGJEXFGCAHNLTSPRUJJNCRLBEEJFFHZKOANOMFKPLWYBSIGJAIISDOPCVNIOWXRYIDEJUEYPEQCQOTDRMKVYOPKDQVEDLISYGNDXEBTAXZRXGTKKG");
    tmp_tmp_tmp_msg_0_0_2.maneuver.set(tmp_tmp_tmp_tmp_msg_0_0_2_0);
    tmp_tmp_tmp_msg_0_0_2.calib_time = 12564U;
    tmp_tmp_tmp_msg_0_0_2.info.assign("YEKNYQBKWZZVTVHKVWSUMFEOZRUFHJRYCDHKVXTMMEXYPIC");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Distance tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.validity = 32U;
    IMC::DeviceState tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.x = 0.132679479963;
    tmp_tmp_tmp_msg_0_1_0.y = 0.494875429099;
    tmp_tmp_tmp_msg_0_1_0.z = 0.96102701248;
    tmp_tmp_tmp_msg_0_1_0.phi = 0.650500199955;
    tmp_tmp_tmp_msg_0_1_0.theta = 0.444743125476;
    tmp_tmp_tmp_msg_0_1_0.psi = 0.388003136494;
    tmp_tmp_msg_0_1.location.push_back(tmp_tmp_tmp_msg_0_1_0);
    IMC::BeamConfig tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.beam_width = 0.593287610728;
    tmp_tmp_tmp_msg_0_1_1.beam_height = 0.272860757938;
    tmp_tmp_msg_0_1.beam_config.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_tmp_msg_0_1.value = 0.9005772296;
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
    msg.setTimeStamp(0.277717322684);
    msg.setSource(59466U);
    msg.setSourceEntity(45U);
    msg.setDestination(39596U);
    msg.setDestinationEntity(167U);
    msg.command = 107U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GCAAGDZOTUAFVLNJDEGXSCWSSQVSOBBNHNRMGBWLKOKVWILZAHZRZJCJUIFPDHCYCIPAZELPYHSDDFFWGXQVUUPAHRPWWPRTCMHEYNYSDIAGOVLTONLTTFCIMQGHQBJDITYAUOPEXVVKBNZWG");
    tmp_msg_0.description.assign("EWCUEQNBXFNFZYUKSIPTPGIQHDJKZSXLYBLYDLUJOZKBMQZENTJOAPZAYKAXHZRMJIBFGIKKDVJHYWCJDGJTRDSFBNRQWZHIMMXARVMDAL");
    tmp_msg_0.vnamespace.assign("ZXEPHRIJCIUPDDMZRFVTCUPSMNKVWLLVWIAEJQFSLEUWIDKEZGCJJFVHPVLBRHGDRHJEASYENLWMNHWFEQMVBIXTSPBCFSCMVZQNZOXYAERTPDFOWLRAOYTWVDNRQJFIYGVTKGKTRPMGSUIHJTRYCXGPPKHZOBYADKXBLFZSFIXKYLNEYUWBBJOUMCGTPXSOOQYYNFOIXQHNMKAGOBZXNMGBJKDALHQSJQSMECNUBDITCCZWHGQOXUADURAZKA");
    tmp_msg_0.start_man_id.assign("IRGJVNXXAGGNEUVZOBYCSQBFKBQEMMQIWPRLWBMMRDVPTLQUUFXQJIZEBAFPKUFMRYSRGY");
    IMC::GpsFixRejection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.utc_time = 0.706205901087;
    tmp_tmp_msg_0_0.reason = 221U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.972021809595);
    msg.setSource(61291U);
    msg.setSourceEntity(65U);
    msg.setDestination(49343U);
    msg.setDestinationEntity(102U);
    msg.command = 55U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UCQBKSCUIXAXSRFEWQYJIQBIIAYOQXCXNRQNERDEVEWZYHKSTOLSHGZLNIORGHWCWDFLGLOPPRFSEOSZNDLOPZTBASDSHDZTUPVKNFZZJZYXPEAVAWPMCFZOPBIACVLWVKIWXWUAJTPNFMUPXRWRGBJKJINJFHXGJRMGCLRTYEQNATDYUMBEH");
    tmp_msg_0.description.assign("XFMGVOJAZSULXBUKTYISOPVNSEIWMCWTZHRTJYPRQQUVSBWRLHEQI");
    tmp_msg_0.vnamespace.assign("XCKPPDSJQELESSTAUKOPJLVBIIHBBKATEQFAOKARJQOHBIGCZWCNWLCGQIURSEYLUWCNVZOLYQQDATOSJGZTYEKPTAXZGZNKWYWGFXQXXLNPUVERODBYCMCMXCNTRTEDHZVOIADDZJNC");
    tmp_msg_0.start_man_id.assign("KTONZCZXEVSFJBEAMYYGAQLWBLUAJOXRYMXRDGLCAVEUQYJOIVFDB");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("WAWBXZNNHUXVODVPZSCTUPESHFPACYGUXERAHQEVHWBFUCEOKHIUCVOBXVOTQNHQCDUOSLCRZAKLMYYRGGRPWTYYYDLMYQTNDFSTAMJJURZAIDQFVSKVNKPRNIFMFBNSXGBJOGU");
    tmp_tmp_msg_0_0.dest_man.assign("PFJIPYQJTBKEWXMCUDYOWNQUIIPWCWOGMXBRNIHKCQFGRCLTOMTPAYOLDASGLSTXJUVQZXDAEDUVDRCMKWZFTDGGGHBXSKVFYHLSUOBMOWAGLHDIVNRMAUPBVXHJWJXUTRTZEXWORNKQCOHFLVKJZWCMPSOFVAFYZZHQZNMEXMVYBPCLREBJUTPZNFFQRVKSSGSIIUDEHIAXANEDGNZJJTBEPPKONEQL");
    tmp_tmp_msg_0_0.conditions.assign("XJGBTLUGHXMCUKWPDADIENJEVKYLOBTUYDDSWLBDIOXALQLQQYXFZPGGGTTWTBOPMBPPAFIKUNZIPIWFZBHVAVURGTNZQHQRNROMTKOFHQADPXMIACBPWOIBHMUDXRBACICKLUESMQLYHSEJYWJRJGWCHXAVEPKDISYFMYCVTKNZMRWQKSJNQTWZNHEKFSXQE");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::UsblAngles tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.target = 53679U;
    tmp_tmp_msg_0_1.bearing = 0.973682126607;
    tmp_tmp_msg_0_1.elevation = 0.924038931878;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::AutonomousSection tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.509568196866;
    tmp_tmp_msg_0_2.lon = 0.134037428119;
    tmp_tmp_msg_0_2.speed = 0.654838429101;
    tmp_tmp_msg_0_2.speed_units = 239U;
    tmp_tmp_msg_0_2.limits = 91U;
    tmp_tmp_msg_0_2.max_depth = 0.806019409808;
    tmp_tmp_msg_0_2.min_alt = 0.410945026621;
    tmp_tmp_msg_0_2.time_limit = 0.286075385596;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.879254250708;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.537489515852;
    tmp_tmp_msg_0_2.area_limits.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.controller.assign("CJIJPZXHBUXSWKXELCIALRCMFAPNFMHLJJVVUSNNIEUEXTSWKMWMXXBRBJIOTMUOYIPFAGSCMPJZJGTPDUUSDWTMYIGRNQKRFXMKQHLZDKLCLRLHMPJSGAGKBVVCLNDVUOEHHRYGOCBZHQXYNQJZPCBIYYROQVTZJNUWDIQBYPFCARPHTLUAYUEQQVEDWLAWKTVXFGNCYOAHD");
    tmp_tmp_msg_0_2.custom.assign("ZSFSHCBWWSLYACCNKNYNEOAJUIEXGIMISMFXZERKCBPCBPAKMYYYGOUDSMVKIYMNTPKNLGBSOTJGWQSBDZTHGXXNXRRNEVUWNPHJLGIQWIZFCZLVWRTLJFQGJOTFRQEJDWXUNOUIAOPEWABNYPEMDROZHXLTRDCIVAFYKQBF");
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
    msg.setTimeStamp(0.108044978436);
    msg.setSource(19836U);
    msg.setSourceEntity(65U);
    msg.setDestination(40122U);
    msg.setDestinationEntity(199U);
    msg.state = 127U;
    msg.plan_id.assign("ENBLWMTTRQFDHJGVIOVDWFITFASCDOCSADWUWAEFAQFCTREJJXGBNXMRFKD");
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
    msg.setTimeStamp(0.822788474325);
    msg.setSource(43282U);
    msg.setSourceEntity(236U);
    msg.setDestination(2321U);
    msg.setDestinationEntity(188U);
    msg.state = 51U;
    msg.plan_id.assign("WXCQANRGDEVNICONYNNMLLKHUCEUBHPFXRJLTWXHCTFGDZZI");
    msg.comm_level = 110U;

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
    msg.setTimeStamp(0.904383713514);
    msg.setSource(57959U);
    msg.setSourceEntity(244U);
    msg.setDestination(63590U);
    msg.setDestinationEntity(3U);
    msg.state = 56U;
    msg.plan_id.assign("ZCDPWZIDRRYZHVAIVYWGZSPCVGUMHUWOIAHOONWDLOUFIQWFJCKKHSFQETHMIXCTTVNNZNZUSXCESVKTIQCBETBJALXDXLPJXZHWTSQKAOGRUQDBWKFEJTYCXUXOVEAKNLLTGNGK");
    msg.comm_level = 23U;

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
    msg.setTimeStamp(0.713396737616);
    msg.setSource(58314U);
    msg.setSourceEntity(120U);
    msg.setDestination(34012U);
    msg.setDestinationEntity(125U);
    msg.type = 122U;
    msg.op = 6U;
    msg.request_id = 33107U;
    msg.plan_id.assign("VLSKZMHQCWFFLZBRXTRJXYWCHSBUKQGPOEMHHZIZISQBMRYZLOQRMDBQJWLSLROSJXVTDCHDSKTDNNAUVOPRPBPC");
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.847031790313;
    tmp_msg_0.y = 0.36566694504;
    tmp_msg_0.z = 0.156674422364;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KMKEUJXLOHZBPHJXVUAQKYFLDVHNZMSKRAKWYCMSRRAKLRZBDTRPEMJIMXMAVITPZLHRUEMDEJJOFQLNXJTUFRMQFGYHDGPOWZEOTACEQVDJASTQNMYVBBFWUHXYDYTACCSYIBCPESQWZHQHLFBDJGCFZXOCCWRCKIAXNGYNEWSSVKWTUBYNNNLQQRGGKVFT");

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
    msg.setTimeStamp(0.299922519036);
    msg.setSource(1670U);
    msg.setSourceEntity(157U);
    msg.setDestination(731U);
    msg.setDestinationEntity(156U);
    msg.type = 103U;
    msg.op = 135U;
    msg.request_id = 64236U;
    msg.plan_id.assign("KZMOOSBILPSIIYKMMWCVNSNHVXIESXBTKPGETNZTPCYVLUSKFIUUPPXAHVTNTWFTBAMKDUPSMJAHQXQJWQGXAQQR");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 27505U;
    tmp_msg_0.plan_size = 2077260861U;
    tmp_msg_0.change_time = 0.330393157476;
    tmp_msg_0.change_sid = 28004U;
    tmp_msg_0.change_sname.assign("TMBIFYGSGQDPJWMBQCDGSFWCLOSORYRCEFQTPBVXACRWZGWITKOQSJORHDZDHMVBTAKJHIHYFUHENCOXJNLZEUVOYWSYVOCFALOKFIENAZWQJTRQEIKSZPTVYRBGTLNBJDIOLYLGPPZLXEHBBQXFDMYLFQUFSRMNVNCJMJPSYE");
    const char tmp_tmp_msg_0_0[] = {-11, 61, -100, -123, -114, -114, 92, 75, 84, 114, 32, 84, -14, 85, 23, 18, -85, -122, -39, 2};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BXRLNUOVHHJMJGBYKITEUDOXFTSCAVPEKWKRTSNWJOBZFAPCTDVDYGVPVGQR");

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
    msg.setTimeStamp(0.314160691131);
    msg.setSource(65514U);
    msg.setSourceEntity(55U);
    msg.setDestination(40365U);
    msg.setDestinationEntity(115U);
    msg.type = 181U;
    msg.op = 62U;
    msg.request_id = 5859U;
    msg.plan_id.assign("XTTLYQHFULRWBMZXBMRAIRKUQZISPQHKLWNJSDOZUYNOPJWDMOGTCFLVSRNSMUNNKHWFTJKOLDCXVCAGCBQVMYQMEMFSGAGURSMHVELSZFYZWYNEHQDJIHANGIXCJWCROUYMAKCIJDESFKATELLPKRWNJFXVGVIEBGYHBBICSZIOZQPAVTZNBLEFTDUPFEPZOVIWXXDYBTUHPCUGTGPXEIHBJHOYKKRRZFGYTPAOAVPDQRDJXVJNMK");
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.595064383078;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DJAUQMSOPPIXBGNFOWCOJPRAOHFBMPXZFGQEKFEKBPCOJWHBUUVQQEKAWJM");

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
    msg.setTimeStamp(0.594558790908);
    msg.setSource(13116U);
    msg.setSourceEntity(29U);
    msg.setDestination(63850U);
    msg.setDestinationEntity(39U);
    msg.plan_count = 16694U;
    msg.plan_size = 498654425U;
    msg.change_time = 0.530232489519;
    msg.change_sid = 14827U;
    msg.change_sname.assign("YFSRJLCSIOGDOJROTFKAKPXCNKUHYAGIRBJSIKTUPRLPRNKVBTWXOJMHADVKDNQXYSCSMBBQFBWBCNVPROYLTEZNLMAIWQYSJLRAWGO");
    const char tmp_msg_0[] = {-21, 114, -28, 126, 68, -14, 61, 42, -19, -44, 121, -37, 27, 88, 113, -79, -35, 55, -110, 86, -35, 4};
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
    msg.setTimeStamp(0.0201750251246);
    msg.setSource(56292U);
    msg.setSourceEntity(54U);
    msg.setDestination(17922U);
    msg.setDestinationEntity(32U);
    msg.plan_count = 28032U;
    msg.plan_size = 3502374869U;
    msg.change_time = 0.399916458122;
    msg.change_sid = 44645U;
    msg.change_sname.assign("VLAOJIFLSKWPUCBSGKGNHBKIVHFOQSZYXVOCAKOUMETJGTWDKYVCCXQYDFLHFHUTJBHELGRXTL");
    const char tmp_msg_0[] = {-108, 26, -38, 3, 49, -7, 27, 126, -118, 65, -40, 43, 79, 111, -1, 94, 27, -82, 64, -53, -66, 107, -94, 104, 32, 48, -25, -1, -41, 64, -64, 6, 43, -19, -68, 16, 114, -91, -107, -8, 36, -69, 68, 103, -5, -13, -98, 101, -10, -9, 8, 14, 122, 39, -48, -100, -86, -107, -114, 84, -90, -32, -115, -32, -48, -112, 67, 40};
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
    msg.setTimeStamp(0.478429909415);
    msg.setSource(3096U);
    msg.setSourceEntity(150U);
    msg.setDestination(1442U);
    msg.setDestinationEntity(0U);
    msg.plan_count = 48280U;
    msg.plan_size = 4201015469U;
    msg.change_time = 0.226439781681;
    msg.change_sid = 1361U;
    msg.change_sname.assign("KEUSSJLUGLFGDUNWVEVVFMNQCZAVPOSTJGNFPAPFVHVKVUAWDLZHQDXBGFEBQASMYTTZSZHJNPKDQXIKVOCXLOEEQHUDCOHWOPQJOLTPYJKURWCNXBEEDQRRPQGWPGBJEFKLWFUYVJCOMMSYCOBRRAFIBYMXNAWBIJQMMNTILUMMVXUCDROYHNSFYNGLXBYEHBALCGATUMHWPCFHOGTIJKTS");
    const char tmp_msg_0[] = {16, 97, 22, 82, 31, 67, -31, -34, 62, -119, -15, 39, -44, 115, -108, 7, -68, 123, 7, 39, -99, -65, -26, 51, 103, 58, -17, 83, -127, 21, -34, 78, -3, 27, 118, 44, 45, -89, 49, -88, -81, -14, -48, 99, -110, -10, 94, -28, 58, -99, -112, -98, -73, 71, 78, -47, 73, -117, -88, 53, 115, 100, 49, 38, -78, 3, -16, -41, 31, -2, 96, 119, 38, 111, 126, 50, -114, -54, 26, -43, -75, -97, 103, 16, -124, -25, -95, -76, 97, 99, -23, -111, 103, -86, -27, 30, -120, 34, -101, 91, -17, 60, 67, 27, 69, 73, -64, 3, 37, 11, 61, -91, 65, -100, 67, 104, 106, -13, 71, -87, -41, -125, -103, -32, -90, 34, -77, -71, 5, -110, -54, 33, -106, -15, 41, -99, 11, -46, 100, -5, -10, 95, 22, 68, 98, 9, -73, 20, -28, 26, 111, 74, 46, 45, 7, -111, 57, -119, 107, -22, 55, 82, 57, -96, -91, -56, -27, -27, -124, 14, 34, -52, -118, 44, 110, 52, -58, -108, 2, 22, 70, 104, -15, -64, -2, -112, -121, -59, -103, 101, -125, 118, 78, 1, 88, -1, 122, 73, -9, -73, -85, 115, -107, 20, -57, 12, -110, -101, -69, 111, 46, 84, -25, 99, 24, 121, 7, 52, 56, 35, 65, -24, 44, -4, -101, -72, 97, -97, 56, -10, 104, 29, -28, -19, -35, 96, 113, 42, -12};
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
    msg.setTimeStamp(0.433812335434);
    msg.setSource(23095U);
    msg.setSourceEntity(1U);
    msg.setDestination(54513U);
    msg.setDestinationEntity(125U);
    msg.plan_id.assign("TIFFYWCKVSACYVQPSBNKZHNRDOKEWWNDUFKMTSIJYVRDHWDOSTWLJEVUMXSUAARERACLUROKTHFYPKQGRYHJZZNYFVBPQMPECAUJCJUBLSWJPXYJLIPLXWOZQBVXFZPIY");
    msg.plan_size = 56366U;
    msg.change_time = 0.0489023518902;
    msg.change_sid = 54799U;
    msg.change_sname.assign("VFPDPLDBGCXQCAUOYHCVEZZCZHBJAITDLGUISYHPZTXQUGOUKWOPOXLWRABCVADJYVHUEGJANMYZEWFAHLQWWIDTSMLMGLUPSCWHFEIALBRRXGBOPMHVGKF");
    const char tmp_msg_0[] = {45, 110, -79, 21, -82, -91, 103, 37, -7, 53, -74, 111, -59, 71, -115, -22, -114, 6, 117, 40, 22, 69, -88, 43, -29, -24, -120, 49, -9, 78, 40, -33, 65, -30, 56, -54, -28, 100, -62, -71, 77, 36, -101, 63, -116, 4, 102, -21, -56, 19, 123, -15, -33, 81, 117, -60, -55, 71, -8, 13, -90, 62, -49, 39, -70, 62, 115, 70, 93, -89, 31, 56, 43, 51, 116, 21, 101, -103, -96, -117, 77, 75, 84, 109, -48, 126, -67, 102, -17, 40, 111, -67, 112};
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
    msg.setTimeStamp(0.535568701678);
    msg.setSource(48192U);
    msg.setSourceEntity(176U);
    msg.setDestination(1065U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("KOMJOXZGGAHMIGBBUJCEHJKHZGOYEWTMVCYNSQLVNYGDWOHHSLPQEHZMCQPDEDMJVST");
    msg.plan_size = 25352U;
    msg.change_time = 0.0745913391908;
    msg.change_sid = 27245U;
    msg.change_sname.assign("SNZCETHFGVXSQVYDLKCGNZRUFSINIVPTDBIGDLGMIYTVKQVFLXFJOQVHYXQWEXUIXZOISRSNIRLOFAOFWUPGWCCJFLWJAEQBVZXAJNJKMCUQB");
    const char tmp_msg_0[] = {9, -100, -96, -35, 17, 103, 96, 91, -109, -72, 8, 114, 43, 118, -106, 55, 101, -26, -42, 116, 46, -9, -110, 75, 8, -94, -67, -43, -105, -55, -108, -45, -126, -55, 119, 22, 35, -21, -91, 11, -126, -83, 43, -25, -46, -49, -124, -71, 108, -5, -20, 59, 76, 19, 6, -94, -36, 109, 20, -122, 48, -13};
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
    msg.setTimeStamp(0.849940261956);
    msg.setSource(3488U);
    msg.setSourceEntity(10U);
    msg.setDestination(34630U);
    msg.setDestinationEntity(225U);
    msg.plan_id.assign("SYPVSSCDPEUQOUMCWDWLHXLZTUXLOVWDFIYLTVOFXDMOWVIDEITBZVRZLGKGAGJLZHOCFFKSDJUBRKLTWHKHQVFJTCYPYXKRPKEFQQUIQYORMKJCLMZNAVZPGWRIHX");
    msg.plan_size = 64687U;
    msg.change_time = 0.503203251239;
    msg.change_sid = 8920U;
    msg.change_sname.assign("PVXJDIMWKFLLEXTSNIVHEGZYNTWAAUJYUJIGDXROJTRODEUOGOUDQVHYSGNLBVITDWXGROYSPWBVCMKRYPPKTADFQHUZXQNXZANDNFGSFYPEARVJLQPSZKRLEVLRJIUYQDLQCCURHJBFAROZNQHHOAGVWAHLMXPMIQMJZTEBQWOPKNVYPXOSCCHFBHTKFCLFFGMUIBKBCJSAXNGUJCHKEICEISWYEKL");
    const char tmp_msg_0[] = {-14, 77, 61, -84, 10, -41, 117, 81, -2, 69, 110, -26, 24, 113, -112, -65, -29, -57, -56, 112, 53, -115, 72, -125, -51, 47, -72, -63, -82, 60, 13, -27, 80, -8, -14, -59, -70, 22, 11, -113, 58, -88, 13, 72, -60, -115, 68, 42, -9, 12, -35, 40, -81, 114, -27, 48};
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
    msg.setTimeStamp(0.908715993478);
    msg.setSource(47382U);
    msg.setSourceEntity(49U);
    msg.setDestination(36367U);
    msg.setDestinationEntity(33U);
    msg.type = 2U;
    msg.op = 234U;
    msg.request_id = 15531U;
    msg.plan_id.assign("DWONGPZJAXMOGVLACOFF");
    msg.flags = 45427U;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 163122191U;
    tmp_msg_0.state = 209U;
    tmp_msg_0.error.assign("VSLTUUGZRBDFLEMSAORMTTJIUYQAECCELCXEQPIDRNWTSKPEGGHVVYBIBMXRF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FIUVMQMOKTAAENWYTDMPSSZNGEKTUIEWHGBZZTTXCMRWHBCFNKOSAHPHCQFZOELIBTESQKBXGRJKKZBYQWECZWLLQEDNGKCWJXDSDYRMBEGRJKAUQMUMHIPVUVNAMLHNLQFYOODXXACOEPTLHHNVUUTPYTXGDRRWHEZICPRUWXAVCJYQGRRJVPF");

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
    msg.setTimeStamp(0.445235640109);
    msg.setSource(37856U);
    msg.setSourceEntity(8U);
    msg.setDestination(32885U);
    msg.setDestinationEntity(89U);
    msg.type = 133U;
    msg.op = 228U;
    msg.request_id = 62906U;
    msg.plan_id.assign("XUNHQAZGTRMOBHYADFSFJMNMFMKUCCQSASJNYRCSJEBYADUNADSCHTHXIRKOWJO");
    msg.flags = 51355U;
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 104U;
    tmp_msg_0.value = 0.43054322029;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PBYWPIRCRMSAZPGNFMBEWEMCMARVNSSQMJLRGZBRIKGPFZEPDACAJOUVBKUKDYNJLFHXZMBJNNVIEXXLGAWPBYKGTLRVCFMRQDTNIWVHXTEBBCYSIRTIGNLRULLOQJTTYSDQKFZCQIQLYDONVAIHNECFCNFSDKZDAJZXFOIOPWOYIJODQQQVTSBYTJSAFWKJOHDGTPHEWHVXGWLHKKGOVKOUMRWFUESHMXZAXPLUHVGUAZ");

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
    msg.setTimeStamp(0.11347547049);
    msg.setSource(31152U);
    msg.setSourceEntity(186U);
    msg.setDestination(43638U);
    msg.setDestinationEntity(60U);
    msg.type = 115U;
    msg.op = 120U;
    msg.request_id = 5551U;
    msg.plan_id.assign("RNUKJHBKNMKSEHFFZYCYCHRLDDJYOWOFFCJQSVOAXNGWRTOBWDITJGZWWIZWLCQNWXRAKZJLHHPADUXFCQTBJCQGQNHBTGIANZMDQEPBUQ");
    msg.flags = 680U;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.541513197265;
    tmp_msg_0.type = 33U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TZNKOHPBGRDUTZGLWGHRNNLQUBPVRANDLTTQVHGOKDWMIYNQPLYNZPARXUUZQAFTMLCBUKMJVJTAXVEQPHOBQJMMDQIVXXNGMORFYFJWHROLSFVMTEXGZZCCRIDVDUPBDJSWCEKMLOXAKUCSJISGCFEGIYOYCHPZKHBKLZFAFGTOZEUFOXFWWEIRVQKRVSCDIYINIBYPJLQKXYWSFEPYISJSWJEDSBQDUKAVMHAPCYHUBN");

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
    msg.setTimeStamp(0.0396328063678);
    msg.setSource(8335U);
    msg.setSourceEntity(243U);
    msg.setDestination(45400U);
    msg.setDestinationEntity(25U);
    msg.state = 105U;
    msg.plan_id.assign("WYUYCMPWSZULTEIUYXPIODEYQOGAAILDIHKBDAIWNWEJCLUSVZXHVQNTSHWXWUBTHQEMJRFMIVNHXJYRCDQKFASBMNPBOQEPATLJHDUMUNKYPFVRMFQOFZHUVOTJCRACGN");
    msg.plan_eta = -971030362;
    msg.plan_progress = 0.96839746883;
    msg.man_id.assign("VZKROMPCIAGHJLQEUGXSBNFYWDYKSTGCCVQDSTWQPWIKOUHFNVMMLHTVMKHRVDSHMNIRXHPUMEXVPSHVPABOOXOAKONYZHRCZJKDMGJBHIAPYMQLWRXJEHFOTRAFJWZNLAIIGZZAAGVFNVLGYTZDFZQICDNXCIBVEUQRFDWZMLUDESX");
    msg.man_type = 59742U;
    msg.man_eta = 725627366;
    msg.last_outcome = 145U;

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
    msg.setTimeStamp(0.755715218501);
    msg.setSource(53576U);
    msg.setSourceEntity(188U);
    msg.setDestination(58596U);
    msg.setDestinationEntity(156U);
    msg.state = 120U;
    msg.plan_id.assign("RYTTFWRQUPVCGBOWGRFIPJADGQVKFJDACVCCRTBEVIVKNYBYJADPBNWEGERSMGYSZSFYIZXMNWKOBPDXHMQLMSEBFACSCDNGUWSOXUELNJNDUQPMOFTDATTZHQWOZHFRQXKLJULRA");
    msg.plan_eta = -2134761834;
    msg.plan_progress = 0.242707150667;
    msg.man_id.assign("JKDUXFSNVQWCXZRFVDZHNSXUFVGKBGWYTGTPOIVPJNFBSQJMJLOBCMYHRFPPGUQHQCCJIOUASCNYWTNPXUDHONCFOJZVOXSIGLMVVGOTDAZMBKIQTRSLK");
    msg.man_type = 58970U;
    msg.man_eta = 1097619356;
    msg.last_outcome = 158U;

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
    msg.setTimeStamp(0.0144371582051);
    msg.setSource(3963U);
    msg.setSourceEntity(150U);
    msg.setDestination(60009U);
    msg.setDestinationEntity(48U);
    msg.state = 108U;
    msg.plan_id.assign("TGCNFQTCEXWQKBYZEGBYFJUHMMLLNGSXOWBMVMJFKXLPLUCTNJFVBODYOSB");
    msg.plan_eta = 696693593;
    msg.plan_progress = 0.11214213673;
    msg.man_id.assign("FAFPVNHSTKYCTDLNROCHOSFIOSSQAQKMPYKPNSQSIZH");
    msg.man_type = 30134U;
    msg.man_eta = -787397414;
    msg.last_outcome = 225U;

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
    msg.setTimeStamp(0.0189392413775);
    msg.setSource(24323U);
    msg.setSourceEntity(58U);
    msg.setDestination(30750U);
    msg.setDestinationEntity(241U);
    msg.name.assign("SIGJHPMXTZWUNCXFHDBWXBWVFUIVRIVZOPLUGIDULHXPMMFURKOLCPSNTBZZOOV");
    msg.value.assign("DUFENPASEQYCAUCWBLMQRRKYCRIZQFWESQFUBCGAJFITKFNBSUQXEYSLVCDBNGUNRYJZXNHNSTPMYHXWJVJLPPPOBHRAXFVIWVJBHOOBCGEZLXKVMODOTQMCJEKIWLFKRVGDKGQVZIEZXUFDGPAZTWCWJGMRAELYQUPYDTKZEPZMVMDTDRTUIGSYCIXRVQYAQWIYSNZPGSDMOLVLKSJBUELBHNZSWOPFLKAHTNHCWXHXOKATOR");
    msg.type = 154U;
    msg.access = 115U;

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
    msg.setTimeStamp(0.585397388704);
    msg.setSource(59087U);
    msg.setSourceEntity(10U);
    msg.setDestination(48393U);
    msg.setDestinationEntity(70U);
    msg.name.assign("RIFQUMCMUYDUAHBKDHZMBEZMBAHRDSITZOYACABOQPTCOEZHIFJVMGJEJRRLLFISNQWYOUFVIRHGPSHCGCRQPMEIZHQSQKMSGYCOVGTAXTNSPVXLWBDWUKAGYVAECEOXGCEDXCZESJNXTQTSYNLKVRVRYNOIJJPCATTGINJZXTROEWNX");
    msg.value.assign("QWTAGJEMWENJOHSVCVXLXDQIIBRHXOZZVDDORHSCZESOGSHFZFMWBPPOHQUJLUHTGGYJHVCGCGFMMLDDPILBXPZAKDBYZLMXUTKMTBEWPTKZEXQCGDKLBUCFGSBUYDKUPAKNRORBFIETXMVOPNUYKNYSBQTNAYFHWKIOWZTRFIAN");
    msg.type = 203U;
    msg.access = 97U;

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
    msg.setTimeStamp(0.44460177617);
    msg.setSource(18346U);
    msg.setSourceEntity(253U);
    msg.setDestination(38676U);
    msg.setDestinationEntity(52U);
    msg.name.assign("PHTXKDNABQEPOAIYWGWBZEHWMCQZFINSEQINYMKLOPIEALTURWPKBYRYEMVHKCTMKTBNQUNDIIHRXSVLYDRMMALZYPGXBKPOBKNJXFOEDSDSHUBPSBYFFZJGDTDUTCRZGUGKDXEUWZZSMPXRGJJWHWRCFCHSXCEYLRFMGDSAQVAELOZBCVZNRAXLQOGIHVJ");
    msg.value.assign("PHNUCXYHHQQKDGWXUYYHFLALBFUMPSCCOIHKAFVSMVNVXWNEDOVHQFAARKYJYSIZTTYTWALTPXWMBBUPDDXNOZCHROOIGZJ");
    msg.type = 119U;
    msg.access = 171U;

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
    msg.setTimeStamp(0.723212510477);
    msg.setSource(8755U);
    msg.setSourceEntity(187U);
    msg.setDestination(59240U);
    msg.setDestinationEntity(206U);
    msg.cmd = 27U;
    msg.op = 227U;
    msg.plan_id.assign("MIZJOSMIJHXUDEDMAGSFUYVOQASQQLGXMYPPIZXHWYNFCOUVBCTBBEHMBPMVDSGFZSQRVFGWHCTDGLCYIRRNVXJFJAHFHNOMWSCONYBLWVNRDEWBZGEQQTBZRB");
    msg.params.assign("ASONRFDVASNNPCCNIYHVAHVEKJPZQBOKGBSQJNKYODLJGCMUUREKWKZYLQ");

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
    msg.setTimeStamp(0.0372879179591);
    msg.setSource(42702U);
    msg.setSourceEntity(98U);
    msg.setDestination(23555U);
    msg.setDestinationEntity(25U);
    msg.cmd = 5U;
    msg.op = 155U;
    msg.plan_id.assign("IIKGSFRDHDHJCFZBAPUOXORCCOXMHCSKNMTTGOONRTGVNEWNAWQEUWFAMLBMMDLYNNHFCKKRQCFTTFLWQKIPRJRIESMDUBKTCHKPSGHVRNQXVUQEBQXLGYUTFKPPDZSQPTJHSIYJVLPAZYDUYVVOCWEOZWVGNYELAVEIJZJBLGLUUVLHRAAXZFWNKIXSXZIJJMIYSGCOBZMAOHJTBZUEBBXDQRWQOQXSKYAEPPFFYPJSADMMZWDG");
    msg.params.assign("PGORKJGCODEVJBIFATYXYHBVXYLTBOPUZLBSKENVKFGIPOXRQCQHERLOKIUPSJOZTXVWNORWNBXFHSWEIZBXBOLENTAXVGXSCHLYFOMUHJMTEK");

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
    msg.setTimeStamp(0.101294065946);
    msg.setSource(63999U);
    msg.setSourceEntity(159U);
    msg.setDestination(17022U);
    msg.setDestinationEntity(229U);
    msg.cmd = 248U;
    msg.op = 179U;
    msg.plan_id.assign("LVLYKCNCONQEJQHUQPSIJYELRPYKEWUBRIUGUIFODSUSEXHTBXYXQGSOXIZIZRYTBRWLHMOFAMFKASENAHJTGGUHGJYPTCOVN");
    msg.params.assign("PFTKVWLBAQEZNMTMOYQBYSEEMDUIDSNHWJSTHWVQLTXFITGJAPYTBCAZIRWSSEMWBYUKIVEGYPQNXSEROJQHCKUMUKHVEYXLCSDEJPWATKQIMVZLHGTOR");

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
    msg.setTimeStamp(0.48718920568);
    msg.setSource(11005U);
    msg.setSourceEntity(222U);
    msg.setDestination(54385U);
    msg.setDestinationEntity(41U);
    msg.group_name.assign("LECJBILAFDONMWLAQVNMDUIHQSRAHLIWBJHZEUXGHIMPJVPOLDHRLEZYIOPFNMJKPCIGFBCXJVRDWGZDERLXRQWF");
    msg.op = 184U;
    msg.lat = 0.190668452175;
    msg.lon = 0.532393267771;
    msg.height = 0.0449321754498;
    msg.x = 0.9277625681;
    msg.y = 0.712278947663;
    msg.z = 0.789665446862;
    msg.phi = 0.62065833989;
    msg.theta = 0.76977106551;
    msg.psi = 0.193267279338;
    msg.vx = 0.57887290213;
    msg.vy = 0.483001318834;
    msg.vz = 0.177771000137;
    msg.p = 0.194266884564;
    msg.q = 0.909312791141;
    msg.r = 0.857616816642;
    msg.svx = 0.435143314024;
    msg.svy = 0.431768236519;
    msg.svz = 0.874871062529;

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
    msg.setTimeStamp(0.833051744849);
    msg.setSource(41503U);
    msg.setSourceEntity(183U);
    msg.setDestination(46673U);
    msg.setDestinationEntity(39U);
    msg.group_name.assign("WTVGDUMPJAVCIJBAKEZGPJLEGMPUTMKHRVYTJDBDUNWSIQHWXGITRDWZFVWTHGEBUZPCUCVQOOKOYPPMVTGAYTSNXNOTWSSYOYDUPXJVJYCWHXNCSLYEZIEFWLLAYMIZKHSREFVQBNFSGBDKGHRJEMBUZIRQGFDYHWA");
    msg.op = 105U;
    msg.lat = 0.998361599353;
    msg.lon = 0.96517778405;
    msg.height = 0.661759546443;
    msg.x = 0.418419225494;
    msg.y = 0.283686851733;
    msg.z = 0.417040818472;
    msg.phi = 0.278599767849;
    msg.theta = 0.338734797963;
    msg.psi = 0.33977925913;
    msg.vx = 0.313362283163;
    msg.vy = 0.553876297951;
    msg.vz = 0.335744428904;
    msg.p = 0.802704308264;
    msg.q = 0.979289729593;
    msg.r = 0.921458361884;
    msg.svx = 0.534358028163;
    msg.svy = 0.709903317987;
    msg.svz = 0.777309070734;

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
    msg.setTimeStamp(0.880904891904);
    msg.setSource(36564U);
    msg.setSourceEntity(253U);
    msg.setDestination(21874U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("XEIKPYJUBWXIPNIHGORMKLOZSHMEQPAUDBSXAOLVLYXFKHRDCMHFCJOOJDCMMDEKFTNZXNUYTFNEOZYRGCGSXNZNVHAQIJBOLPUVEADXKOSJDTZFVPWAHNKAGWRTGBCQBGFCBVCIN");
    msg.op = 244U;
    msg.lat = 0.0123319506337;
    msg.lon = 0.761311578606;
    msg.height = 0.907379561027;
    msg.x = 0.34664887744;
    msg.y = 0.68767536124;
    msg.z = 0.625082850263;
    msg.phi = 0.323178950991;
    msg.theta = 0.392356651511;
    msg.psi = 0.251405660534;
    msg.vx = 0.0340286624166;
    msg.vy = 0.473730519929;
    msg.vz = 0.703102115955;
    msg.p = 0.714484821622;
    msg.q = 0.713609313261;
    msg.r = 0.747074872871;
    msg.svx = 0.44020976539;
    msg.svy = 0.559333082399;
    msg.svz = 0.340241289833;

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
    msg.setTimeStamp(0.480631413322);
    msg.setSource(25779U);
    msg.setSourceEntity(61U);
    msg.setDestination(22232U);
    msg.setDestinationEntity(168U);
    msg.plan_id.assign("CCNOJFSPIGHZMMMMHWGYQATIPAACLNLNKFJCCIVMFGWKVIHLVURBIMRKNUQYIXKYVQYEWLRSELVOKDOBHDDXDPCZRUMBTJHTXYTUPFGQBVEJOOWHBSBFJNBLUGNYOINRLKAFFJWQVTSODU");
    msg.type = 56U;
    msg.properties = 218U;
    msg.durations.assign("QQEUZKDGYAWHTOVKXGILNZEMDMJLUZSKWVBGEACJSNXPZHUDLPHYMGTNCYPYYNXFDUAHZEPGLZWDMSTAONECIOEKAQAPZZFIVITALSCICHJN");
    msg.distances.assign("UFABGZFPLCRHGPTNRESARVYVUVYMGZVTTJ");
    msg.actions.assign("GESFLQOMULQWZOOHFARRPDKNIERJKWKWNLEOLGYTIUSPRLUCFGJVOLAWZZDUMAVVIKMZLNTPOZXTEDGVRWWVU");
    msg.fuel.assign("VERQNWXPPXXWFKLWICUKKVCXGDDTBFQGKEIIBZBCNKTBJPHYOXRAYYNNCWOBZWFYZJ");

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
    msg.setTimeStamp(0.19167790522);
    msg.setSource(46917U);
    msg.setSourceEntity(176U);
    msg.setDestination(11317U);
    msg.setDestinationEntity(193U);
    msg.plan_id.assign("MHIDQRUCCXBIDHIUXDMWZHBXMYDSEVAULDWOAXUVMQJSUOIRTYUTWGZJLSMZQBIHWXYFHHEGDYOAGVRWKWESXVKKGFSPOGTAJEECLSTABTPZAKSICZWKSWOIUVBTLQNPBCUK");
    msg.type = 198U;
    msg.properties = 230U;
    msg.durations.assign("LTSTQJLADRPMXXBRVLAYRBVZQUGIAZCNDXFKAOHMPIVCOVWNDAUFXZNKZRICXLPWKMVJBGFZTIINHGQYMWWUFGCGWCCPHMKYTCEYRDVXVKIDSBYLNNSCKLEOOXHTGVJMPWEQJRJFUOEVIEFBTTHRWODBALBBZAOUWXMTFWDIPSGMKRYIYUZHPBPQGYTNUDNZQOBJFDTZKWNHAXHHYVIQREGEUU");
    msg.distances.assign("SRQHZYAFDYKWNMPHWTSRRIGXAUJTFXPLXQCEPOFOKGMRVHCNKNMIXJFXZTWDNKCVVOCARJEZQVHBITTMGTJBLSGSWFMAEWQISXRAJSNHOBKJMUGYQJCZNFPDHKYMOZUUTBCLGZXQNOUCLKVWLQQVYOFWOLSEPNAHRYDCIBXZUM");
    msg.actions.assign("HIHFNEVGQFRKPHAWOTKBKPODSGDDXMVUMVVKQTJSJDOXQLXRGZUBAERLNCE");
    msg.fuel.assign("RQSQETNXNFCMHBRFCTKPMZZHDOLTORKYHSWGYXLBHBTV");

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
    msg.setTimeStamp(0.0197264060334);
    msg.setSource(18840U);
    msg.setSourceEntity(33U);
    msg.setDestination(7902U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("VYJAWYZTEOIBEGZRHESKGDQFCNBWBTOCZMGCFJLWQBMDVRLJHEETTSUSHJQKWMDDQAUUTLNHMOLWJYZPEZFNWGNCOMXFANLDNMKODUSRPBGVFWKFHATYXPNIPSJBKRVWPJKTPJKFSHOAYOJRKSXVCXTYCIEW");
    msg.type = 12U;
    msg.properties = 181U;
    msg.durations.assign("RRJYYRPAQBWRSSRISMABPFHXVHXGKCIPNXVHWZBFTMZCDYQMSDQPQQYKNCLEGKJKPVBVUZFMULJGQNYTAWNMTDPYPCWQIYDBHLJNIZUGCXFDBALDWAGROOOXYEVXTHJKKMULUGWLAOVZISZMFMBFFAHKH");
    msg.distances.assign("WBGHHHSBDVPPYRTUJBZFLYWZLNVQWSYCUNMACRKEJHIOYMJPXZJRALOOOAPYSUPMVETMYUIKKOFOQMCVERDAIPLDDSWNCMLIZMFTGTBVHNNNXNUDFZDJKOLQLRXGBKTKGGSWAYQPYTGMOGTQSCOHAXDZXQCZHJIYJMJFPZAUUDFMBVSANFUKQFKWXZGPXILLRWDNWVYQNRFZLHVEIEFCKCUBWQXXGPAGIEJKBBC");
    msg.actions.assign("HJJKSAYAPDZYBZDPZGAHZJGWFLNIGRQHQQEPNSWCPGAKTIELDTHPDIHDKFJWVJUQEYUVMYLXORZDYLMGKHXFMVSOCPDPR");
    msg.fuel.assign("ZRTRROMBHSEIBEHQUJVXEKJYDSBAAWLIITIJUGXSZBVGEWHQJMZLIOHKZIESPXUXZHUFLDEXTSORAKBASFJDLJMZQYBJLXKHDQCVSOMNWKNGCXQFRZJUUORCDRZHODYTFWWNVSKYTPUAWOJWFQXKHCALVUMGVILOEYDXIYADRWIXWPNCMQPVAMTEULBKFPJOAABCVGGGVLBQMPPY");

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
    msg.setTimeStamp(0.358900219707);
    msg.setSource(60547U);
    msg.setSourceEntity(0U);
    msg.setDestination(44330U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.591637151863;
    msg.lon = 0.503340481499;
    msg.depth = 0.490927687192;
    msg.roll = 0.261227819524;
    msg.pitch = 0.133595081696;
    msg.yaw = 0.836103083025;
    msg.rcp_time = 0.51417723687;
    msg.sid.assign("PSRYOSNFEQFIZBEWYIHFKDQBPWARYCWCSVTYVKNKGCMWCXJIBTHGIOOHQTSVBMOCGJ");
    msg.s_type = 242U;

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
    msg.setTimeStamp(0.838593177266);
    msg.setSource(1568U);
    msg.setSourceEntity(44U);
    msg.setDestination(4816U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.775438387536;
    msg.lon = 0.775790628189;
    msg.depth = 0.189316456294;
    msg.roll = 0.623324295258;
    msg.pitch = 0.901610910232;
    msg.yaw = 0.909358109406;
    msg.rcp_time = 0.105857263474;
    msg.sid.assign("PTOWQHCFWAMYTEQXCEGTIEPOVGDPTLSYBQQXYDNBCVZKBT");
    msg.s_type = 150U;

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
    msg.setTimeStamp(0.745448398056);
    msg.setSource(34985U);
    msg.setSourceEntity(235U);
    msg.setDestination(42506U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.413235928731;
    msg.lon = 0.69273661426;
    msg.depth = 0.342189226397;
    msg.roll = 0.679408458437;
    msg.pitch = 0.33392436877;
    msg.yaw = 0.717918861117;
    msg.rcp_time = 0.249165565033;
    msg.sid.assign("CMIQLQVJXMLGJADGBYNUGZWUADZENPJASEEMCVSPYRUXCKMTZYHDRA");
    msg.s_type = 116U;

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
    msg.setTimeStamp(0.128825705577);
    msg.setSource(50107U);
    msg.setSourceEntity(30U);
    msg.setDestination(10972U);
    msg.setDestinationEntity(64U);
    msg.id.assign("BGNFJQCRKEKHWCGVJBBNFWYYPLRKXJVQQLLLONHYOSUXUSQVTLPIXIDNCSBTMVRWGFPKFIUKRFUZBHQZIEKRBYSGLOOPVVTKUIQHMOSIBTVVSCOOXTEMZVPIJJSRBTAAZDSQL");
    msg.sensor_class.assign("HKLYORANDGDBKPNZBBSPVWUMKVLFQOGHWWECOFPWINDRCHQQYTICKZJPRTUNJTPKQJXWUZDUHSFLMOBBIBNVYUGTTJPQ");
    msg.lat = 0.731259646151;
    msg.lon = 0.426261441858;
    msg.alt = 0.65782887831;
    msg.heading = 0.308286278419;
    msg.data.assign("MLAJLEOIQYUVSWCBNJULVPYKEHNIQTQKQCNFXLGMDUK");

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
    msg.setTimeStamp(0.650339578475);
    msg.setSource(57328U);
    msg.setSourceEntity(130U);
    msg.setDestination(24391U);
    msg.setDestinationEntity(64U);
    msg.id.assign("LJDPQCBHAOPJUKLYHTMEKZBEEKLZVROBUPIHWZNFEGXUIOQQXEGAYRDCOFFFWHUFDOJKNWVSJHSHWODPLGXPSJSIBIRQXNWUDJMYXNLGZNQIYTYISAXPNXRATPMZBVWMSRZOMQJGPLLBCEGBVBATDCEPNXUFUTHINREWDLMTMGAORYMCCUTOXRJYVCBKNZL");
    msg.sensor_class.assign("CJXQJEMRHBRCGOKPWNBKWNFADZYEMYVWILJUSYMECSLQLETKDZRZABRPHLZNYVHEBFNZTJFNTMYGT");
    msg.lat = 0.54500680267;
    msg.lon = 0.322776974927;
    msg.alt = 0.0736564865882;
    msg.heading = 0.0553025416477;
    msg.data.assign("GGDBGTSPKKKJCJRQAIWKMFIRGFY");

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
    msg.setTimeStamp(0.846320932094);
    msg.setSource(44958U);
    msg.setSourceEntity(75U);
    msg.setDestination(63976U);
    msg.setDestinationEntity(11U);
    msg.id.assign("LAHNCCBARTIXBNZAKGKQASQWJNFYXXKNOEDYKLPDBDRNRWWLQALHNZFWURRFWSSQGFDMPYPHECTYBYFRPQYFUZTJDZSGIEEVWHFBMOSOKKMMVCDYCUJLYJNXHEIORUTBJBVTDKUFKQZGSPLMNSRMEOOXLHOVIUEIOJUGIHWPXFHRSGQJBTESQPEQAALAJLGXYIWVIJT");
    msg.sensor_class.assign("VVGQUNNGDABJMKJHZ");
    msg.lat = 0.330700325027;
    msg.lon = 0.434743920051;
    msg.alt = 0.243961579256;
    msg.heading = 0.629399467376;
    msg.data.assign("WCCREQWMYVEKJKBAZLTOOXELEJWGO");

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
    msg.setTimeStamp(0.750720771496);
    msg.setSource(1034U);
    msg.setSourceEntity(147U);
    msg.setDestination(4466U);
    msg.setDestinationEntity(226U);
    msg.id.assign("NYUAJQRBGDKVPOUUCANHFFODIEVMALPNHXDNSHCLMIWQKJCDLSSXUIAPFTSOTHJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CEZYXHPYHPXFUMTWABKFMIOWOMIJEQBDAQHOQEVINDVLPNGUVUXKCSBLRIGRFZXEYJQQWIDHTWINAKZFTOQCPAZKEGYDGJLFPVVALLCESGUTNRRWSSXHNQTFJVUGXMDNVYHRLMSRUSECXQBGDWWDPDKMRRTYHBMWJHINZDERNBHYZOACFEKLIKGVUFIWAYQPZZFYRTECMMLDJZAOT");
    tmp_msg_0.feature_type = 204U;
    tmp_msg_0.rgb_red = 186U;
    tmp_msg_0.rgb_green = 2U;
    tmp_msg_0.rgb_blue = 141U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.785354415378;
    tmp_tmp_msg_0_0.lon = 0.662431591921;
    tmp_tmp_msg_0_0.alt = 0.97994111915;
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
    msg.setTimeStamp(0.862562776594);
    msg.setSource(50783U);
    msg.setSourceEntity(63U);
    msg.setDestination(65256U);
    msg.setDestinationEntity(222U);
    msg.id.assign("RFVVDDQFXGLPZUWXGUURTBSONVLKZOUMZUKTAAXQRYDPSQJJUHADMWXZESXDVCWGPWYVYXYMMQPTCFWQNLTEWBINVKTCFJQWHIBKMYFLOZGMCIEDYPVPOJJHAJY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SYSCYQDRZWHGTVJTDUVEBCTERGCZBTOYMIXVLCQSPHYTUSPJFUAPODEQXBIQPMEVPBQYNWXORXLYFKFXFTWTIMJVKQMKWLRWDEFUICGKRFNHEMSCRBCKDMRIXPWTRPVCQONSSQSLUJJHHEQZXAQHNIZANVZKJGNDRMGYILXZJNFGKGCKWNXAFUUOKAZFUHLJOADPYZOLIJUTMPHYAEBXDASGDYIJMMLZVWVKWPNLIUAHGOBNBDCSBAO");
    tmp_msg_0.feature_type = 165U;
    tmp_msg_0.rgb_red = 48U;
    tmp_msg_0.rgb_green = 215U;
    tmp_msg_0.rgb_blue = 168U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.512196130857;
    tmp_tmp_msg_0_0.lon = 0.56200039305;
    tmp_tmp_msg_0_0.alt = 0.66245220482;
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
    msg.setTimeStamp(0.817014688299);
    msg.setSource(15541U);
    msg.setSourceEntity(74U);
    msg.setDestination(489U);
    msg.setDestinationEntity(148U);
    msg.id.assign("BPLPKDVUEIHQGNCDYQSHFXTXYZFNACJMWWNULLTBGGBEMOPRFFGVHESFLPDSWHRVQNCVSLTYRRQMTYMAZMBTOOPCYRLOQQEJACWHCIHIVITAHXGKWOJMLPOXCANEWAWYDAZEUKSSXWFDXVO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PYBJYIKFSWXMMEETKREZLTPLNIGMLTEVDEFCAJYWLMJWHKQWQPSKWSLHCIXAGVVPMTISXEGDROZCWTEULIPJRDNOVCOASMQZPMYVGDQNBIHOBGZBKFKNRDPDGXFIMNAAVHLODBMQEMNSJJQQFBBUBDPOLSGXCRLEKUJWUQTCXCPTVFHCCDCHYGAUHWVPRSYSAZAVKGNOBYKZILZRGBOQFNXINETJZORAYIZXUYJORUWSJUUKVFXWAFRZQHND");
    tmp_msg_0.feature_type = 30U;
    tmp_msg_0.rgb_red = 201U;
    tmp_msg_0.rgb_green = 36U;
    tmp_msg_0.rgb_blue = 113U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0512223677879;
    tmp_tmp_msg_0_0.lon = 0.433416725441;
    tmp_tmp_msg_0_0.alt = 0.592154140892;
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
    msg.setTimeStamp(0.352155322832);
    msg.setSource(16793U);
    msg.setSourceEntity(160U);
    msg.setDestination(43872U);
    msg.setDestinationEntity(185U);
    msg.id.assign("ZSWBYUUUSHXRWOYZDLIQESSDPUBCQJIEESHWGLTCFGKETSVBLNKKDMGTEIVPJVNJGZQPAGHKBENZJYTWZQXNSXZOEICCFFOLVQAEQDWMBKYQLWPFCXDPFOMMYACROYJKAXM");
    msg.feature_type = 89U;
    msg.rgb_red = 100U;
    msg.rgb_green = 208U;
    msg.rgb_blue = 90U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.314701711667;
    tmp_msg_0.lon = 0.465180625885;
    tmp_msg_0.alt = 0.414891306409;
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
    msg.setTimeStamp(0.425221095799);
    msg.setSource(36465U);
    msg.setSourceEntity(55U);
    msg.setDestination(65148U);
    msg.setDestinationEntity(21U);
    msg.id.assign("MUYTNZJDPSDPHOZWFVDCXAYKDZQPXFCFRYERAHMFCXDROQXWBBHPJYECTSXAAUHUATYQPLWFSFBKCIVZPAXTGLLNFMYOEXPMJFMKSGVZLGYDLKSEZRQNOLETYRZHPQVGROSQZXKEEGGSGKNNRCNIIWPJAEHUTBVBJUCAZISBCLBWHJIBTVLSMMPYFWYHVQMMIDQAEKDTTUWIWJSOOXDHJJAVVIKNUKWEFLORNQBNNWOIUZ");
    msg.feature_type = 222U;
    msg.rgb_red = 187U;
    msg.rgb_green = 184U;
    msg.rgb_blue = 36U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.922599918738;
    tmp_msg_0.lon = 0.587490792862;
    tmp_msg_0.alt = 0.986370482493;
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
    msg.setTimeStamp(0.676507320451);
    msg.setSource(41052U);
    msg.setSourceEntity(203U);
    msg.setDestination(62150U);
    msg.setDestinationEntity(71U);
    msg.id.assign("GVTXNDHMOLDLMVWECUFYHENIATJGWGTIIAWXNCGWQMOWUIXEZFMKEPPPAXASIBRVKCEPJLHLUDDKBGEHUVRRI");
    msg.feature_type = 192U;
    msg.rgb_red = 38U;
    msg.rgb_green = 133U;
    msg.rgb_blue = 159U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.272809980143;
    tmp_msg_0.lon = 0.149490198551;
    tmp_msg_0.alt = 0.476307017228;
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
    msg.setTimeStamp(0.445074275062);
    msg.setSource(34245U);
    msg.setSourceEntity(187U);
    msg.setDestination(21252U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.7874633581;
    msg.lon = 0.595497415558;
    msg.alt = 0.48319863872;

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
    msg.setTimeStamp(0.684179048859);
    msg.setSource(18268U);
    msg.setSourceEntity(14U);
    msg.setDestination(35746U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.572558155307;
    msg.lon = 0.222256048464;
    msg.alt = 0.991926147738;

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
    msg.setTimeStamp(0.209526210488);
    msg.setSource(31155U);
    msg.setSourceEntity(85U);
    msg.setDestination(43164U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.405359100359;
    msg.lon = 0.149207711992;
    msg.alt = 0.575317169071;

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
    msg.setTimeStamp(0.969169083397);
    msg.setSource(49959U);
    msg.setSourceEntity(181U);
    msg.setDestination(48759U);
    msg.setDestinationEntity(12U);
    msg.type = 251U;
    msg.id.assign("QFCGADWHQTSUFXYLNRSDOYSJTIEPMKJLHQGNOMATMZTAPYFKLNIKYSGLCPXXPHNAXGDBQHWSNOIKXFULEKRJBGDFTNUOEUSAWIKLZVVWPJEWWWIOZRNZRCAVYLGMUAPRQ");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.172655260657;
    tmp_msg_0.converg = 0.781696157947;
    tmp_msg_0.turbulence = 0.557201569533;
    tmp_msg_0.possimmon = 55U;
    tmp_msg_0.commmon = 67U;
    tmp_msg_0.convergmon = 53U;
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
    msg.setTimeStamp(0.173577701532);
    msg.setSource(12348U);
    msg.setSourceEntity(163U);
    msg.setDestination(3294U);
    msg.setDestinationEntity(80U);
    msg.type = 132U;
    msg.id.assign("XAWQBNKLUPZVNVLFZWSXLBBAYDTCMNLVCCDBSTSGSRGCYDNYTXZWKKDQGTSRPHUOIAXCMFRBGYEHEVSUYBMEIUOARNLYDVZOJTTKKVOLRVQBPJNJYOBHJCTJXXYFZLOMWEPIHGTPVUSCBAJOVPAIKUNEWPIQDUAIVFASFPMUJACCYOMJQGRYZOKFZDJQIIRXCXWSINWWLXHTINGKGWELMGQZZDFTSEEDKROKPPQHGUEUJHB");
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 56U;
    tmp_msg_0.period = 1555563391U;
    tmp_msg_0.duty_cycle = 2657543448U;
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
    msg.setTimeStamp(0.378482978929);
    msg.setSource(48284U);
    msg.setSourceEntity(190U);
    msg.setDestination(34119U);
    msg.setDestinationEntity(142U);
    msg.type = 167U;
    msg.id.assign("TLEHVBXJIYUNAAAJDRWJGEDFELIRNJTPSNQXYOHPLCMYHCBVXNQAMAIFRNTZZLQ");
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.110375324885;
    tmp_msg_0.bias_r = 0.583458012137;
    tmp_msg_0.cog = 0.908684636108;
    tmp_msg_0.cyaw = 0.573367532939;
    tmp_msg_0.lbl_rej_level = 0.449448719964;
    tmp_msg_0.gps_rej_level = 0.0265298032195;
    tmp_msg_0.custom_x = 0.22426151994;
    tmp_msg_0.custom_y = 0.259636146969;
    tmp_msg_0.custom_z = 0.465282238717;
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
    msg.setTimeStamp(0.184530983253);
    msg.setSource(24386U);
    msg.setSourceEntity(35U);
    msg.setDestination(27890U);
    msg.setDestinationEntity(119U);
    msg.localname.assign("LGASCMHZJNQXGDYGZVLWSTNUXXKKBBQVKKOTH");

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
    msg.setTimeStamp(0.920830029699);
    msg.setSource(29083U);
    msg.setSourceEntity(249U);
    msg.setDestination(36531U);
    msg.setDestinationEntity(68U);
    msg.localname.assign("TCYNRSHQITKXNFDASXOOYHXMYTGVEOJNMYEPSRTBREQCGLIOLNXQQKRPSYGMXYILJYGKKPDRQYOVAESWPHZRLUJWU");

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
    msg.setTimeStamp(0.967467479226);
    msg.setSource(43158U);
    msg.setSourceEntity(45U);
    msg.setDestination(19630U);
    msg.setDestinationEntity(141U);
    msg.localname.assign("QMIUUMJDSTLDJRDOWHWHTYS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KCBOGYOQSVGPUZLDZKXBKZEAEEIFPRYJNPUBXTGMUELLY");
    tmp_msg_0.sys_type = 39U;
    tmp_msg_0.owner = 34773U;
    tmp_msg_0.lat = 0.0830470245196;
    tmp_msg_0.lon = 0.923171774725;
    tmp_msg_0.height = 0.79386276306;
    tmp_msg_0.services.assign("TQTUDUOSAUODXNMPQAAWDGZMDHTXPBRMIUAOQREKRZSAEVOCVZTWEJBUPKPWMDIGDRIFBGJCRNYELLKPFBBQMMQFYWXMYHTRFHGBGXELLYJWNGCHPYCVKZNGKNITTZFQFJJWHKWVZQDAXYB");
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
    msg.setTimeStamp(0.451972506668);
    msg.setSource(21526U);
    msg.setSourceEntity(197U);
    msg.setDestination(13664U);
    msg.setDestinationEntity(252U);
    msg.timeline.assign("KQXQJVLAKNBLUXWISUVOAMJHUDXRFLUA");
    msg.predicate.assign("RUWADNCSURZTOBRJIRCZGHLRELSVUTIIOGAFWQNKOYWYVBEOVHDXSIJGFZWRIPAEEFGOJJNAEZMATETDCXWPEFOIZNCVHDGPJWPIWJNQSUYDLJYVDWXHPCIKPOOIZAQXGMNIUATBDNVCZGBFGKZWRFVCNNMQQRMMDLG");
    msg.attributes.assign("CWJHMFCFWXGGLHEAEXFBATXEFFTSZBARTWXYKSZOVDUYCPWCDLNJPJSUSVEKLVIQBAQNGQKIQQWREOCRVNOIUZGIVQNSGAAJLKRMBNOIKSATUEYDOQXNVIPOLMGRZMBHTZXDMFZFLZJSFDLHQSIHPXDVAUMKPCKBIYKYYTVLTDOHFA");

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
    msg.setTimeStamp(0.548485377312);
    msg.setSource(8462U);
    msg.setSourceEntity(117U);
    msg.setDestination(38920U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("LJWPIPADFTWBZSOJTYBIMAPTMVZMEFZNJXTPUOWWDUAVVUURZGKYNIPWKGNJGVWRGQMXHKEEHYFUE");
    msg.predicate.assign("YJOJKEKESGSXXX");
    msg.attributes.assign("RTRBEUPIQDFCDCTVPZYLUQSRKWKISVZYMBVTQCQITAMOCAYLSCBGNBEVXEONJKUCQ");

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
    msg.setTimeStamp(0.71512047179);
    msg.setSource(5710U);
    msg.setSourceEntity(122U);
    msg.setDestination(64634U);
    msg.setDestinationEntity(78U);
    msg.timeline.assign("OQBWAWETIJVSBTAZVKNNQKNOKWDZJRSJDDQZZNFRGZOCD");
    msg.predicate.assign("YWCMYEECHSJQZIDTARZIHL");
    msg.attributes.assign("XXJLIWQKXQWTVPMFNYJNRXGDTVIURJTBWZ");

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
    msg.setTimeStamp(0.849757169364);
    msg.setSource(59596U);
    msg.setSourceEntity(59U);
    msg.setDestination(55848U);
    msg.setDestinationEntity(221U);
    msg.command = 210U;
    msg.goal_id.assign("CJJMLYKVCLTWGAMBRLXKDBMSQIANYZYEHZTENRRDQKKJUCPOEQDVXZKLRMRPOEDNTNZDFHOXLHAUPTTBCTUIIWGJCBSSWGGCJNLQQPWXIWPNGPABRYOJEFEVUPQFSMKVKEXSMRTZXZFWUAAYROEFURROKWEUNCJZVBJIMAJMXWWPBDFPWVBHHUCYZYVMCCUNKXGFQHIFIGLSSISNHKOGYDVTYHFSGODFPVMALJXOHZYHGUQBINABELIQZSDXT");
    msg.goal_xml.assign("RCVGSOJDCRQNAKFHUQAFNOJZOXAALFMIMYEVNCNTIOVXLKWUYIJSRUBENXLHWILRLIOJTTSLWGHEBHZVGCOMPMEEMOXQCXSDQRPBBFZOCDQNXYCMFAVSN");

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
    msg.setTimeStamp(0.434066969735);
    msg.setSource(34577U);
    msg.setSourceEntity(97U);
    msg.setDestination(54343U);
    msg.setDestinationEntity(141U);
    msg.command = 233U;
    msg.goal_id.assign("KEQOCULIGBFPHYAZCYUOLHLCLJGDPWKCKQJEWOGBQYHWEOVQHCIFGKSAHRXXYMOSUPNGQDOWWTWXWAYXEASFYFZDJELCSBUQNJYJVFMFHVIVOBKNJWAARPIMMTRRYMZCXUVEEJVSZDIZZWCPBHZMGHMADMIQDLBOULPERXOWLNUXGYEQQGNVIOP");
    msg.goal_xml.assign("ZAWKVKQSNWZCILXODEGUOVWTWULMWYQGDBFDOYSIUMDEVQLRKLBCOCDEUKLSAFPOPHCYXFEKQHZYHFHHJNEBMSILZCYRMJKUQIFPRWFPQULKGTBCIWONVNHJKBXOPIDGRUEUJONJLETTLPHVBXEJUVABX");

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
    msg.setTimeStamp(0.406395441814);
    msg.setSource(40032U);
    msg.setSourceEntity(20U);
    msg.setDestination(60077U);
    msg.setDestinationEntity(109U);
    msg.command = 134U;
    msg.goal_id.assign("AOAYKZZQQHGJUDWJZCLEGEUIRQPSFSPUDCWKJFMIAJWBLHJFFICDBAJOCNUYSTGVSYYSVPAYGZPOUEXBXOUZZCBYWBPPKAVNCZIBVAUOLSYULHOXZBNDMNBYNKAL");
    msg.goal_xml.assign("GICZGTOUCYPZLYWAVAXYZDJCXVSEHSETHCGALVLERQ");

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
    msg.setTimeStamp(0.165689070395);
    msg.setSource(5954U);
    msg.setSourceEntity(87U);
    msg.setDestination(25177U);
    msg.setDestinationEntity(73U);
    msg.op = 110U;
    msg.goal_id.assign("PTTPSSKQWVEKKIECVNQSAREDRFHWGHIOPRJAOKCOZNMAFCVFKNPQZXVGLKAZNCOKQJTWRXKDPLUOMQNUJDZFSKZHMCMIBUUCNBOWBVJIXFIBLLDPWLHIVXXDVIOHSBBZUWVTYFDAMHZTLGPXFYWCYQBTJKRBZUZNUDOSJVYFDLEYJRSGJTYHIEUXEUBGOA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UISATRWUCXZADQYPWFTGIBWZMKCATNHJKJWLEBXRMGWKBBQQADKPWXCODPTXPAOTVSQVNORXCSIFTNRFCEMLVGZJNRWXDMIDMEISXHJEIVDQOYOIEOKCRTYIIDSZAOWQYUGCJNRQPTYXPDMJOZQNNHUACQCMAEGGWONAKLZGVZBEDAT");
    tmp_msg_0.predicate.assign("LZDFTJQEUFUHGLPRASYBKMWNMZTSWAOLMQMKBHCBKNESSBXLKWGJVZWBSGWVADOGYONCYKAPARDPHIXLGCMVFXYPMTFEXSCJJHNNZFTZVBSQZRBDWUFDHOPHGHPYFDFDZCWOWNMELNNGJCRFKQQIRQFUK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PNRQPEVNGIOCVGBAZPSHRFSKZEQENEKAARQMLCEBYNJMYDVXLTPBTQYISRGHQMTXYJLYHMVRZQHUABNHJWPFSIAYLJOWEMEPXKXKAIGLKWCRDPNSFFBJXCHWZUTDYXDCCNFAKBIECIMDUXIZGJUYMTZNCJRVGMWKUDZTUTMURVDHXSXLSRATHBIQOUZ");
    tmp_tmp_msg_0_0.attr_type = 153U;
    tmp_tmp_msg_0_0.min.assign("MESAHPBPDXJSWTIIUGVTGQBMYNKELCDWUSKQVPRXUOZOMTZBINAXOZVJGHZZYMHLHCGGTUFDMJNNARWVKNWEVFZYFQEBTDJFQHLOAUFRSJUYWD");
    tmp_tmp_msg_0_0.max.assign("SRLLHQPEJKJYKADRHSNDZWISMWDKQ");
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
    msg.setTimeStamp(0.115072546273);
    msg.setSource(52233U);
    msg.setSourceEntity(6U);
    msg.setDestination(22901U);
    msg.setDestinationEntity(7U);
    msg.op = 223U;
    msg.goal_id.assign("XVAKFSHWTOWHTFRIAMBUGPUTVHGXNSELHWPFCKWMVNLYPJOWFQXIECDPSUOZNNUIUPKOIFVGNPYRZDSLASQNMUQBKBVBAWYBTKL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VZKFEYABYYOQPXSJHZGVJJUQVUXKFKXFBFTTMFASYAFEQKVHAGHXTUCZLHDBQBMJWEDLVYCTWZZZEASQPMVOIUQGILJCNECMDCNOICELZDTNALTVYOKUEPROMDMPTIWAXXXXSFXVRLNPUWMBURGIV");
    tmp_msg_0.predicate.assign("SNFEFAPBVLWXHLCSXDSQHQGUIEREKJQACDJBBTMEYLRZSHQTQAYKFEXZFBAIRRUIYVNBKOEPCLRJTYWJMAAJUWAXQZOHMNTOZUWRORFFAUIUKHLAWDDKUHVOBFNFLYNNGBCCKDSTEJMUWJEBYCZPLGVIKSMURCKZIXNFPVRBEGDZXWLGOQIQSEMGGJIUQTFPIVZXPIKGPNCVYCJMKAGSZHXHNDRLYHDXSWWQPMHZCNYVPWBYTOOGSPL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WCOLZWQBCTQGLSWYBERYKUJHFBNRUTSULHUUZCKXRMOYRDONHNIFDBPUGHOFJEOACIPPKRNWDEGAKQOPXZJIEEKCYXMZELVJIWFMOBYNFTXSHCWYLMJDQVZRNJBDGKWIYLJUMRHARSNEESHZTADSBUAUJZWQKKGVPQTPQYCCWTETBULFCSNHFVZHLTQIQDGRIGSALVDFXOCLPGW");
    tmp_tmp_msg_0_0.attr_type = 48U;
    tmp_tmp_msg_0_0.min.assign("CEWRRAKZJBSITCBQZFINDIXUPMJUJHXWUVJEYPTDXLDJQGXVVNVBNRABYAIXAYNWUMHIHCBDXWZFKZXYSJGYOZPEZEDORQHQRQKJMFJPULKVSNNTFIHLOHSOKGNYCTNGMMKRLELZDXUEZLEEHSDABJVHAFPVTSXFGUHCRMGSKFBTIGACKWUWCPTQLCOVACWBFGJMYM");
    tmp_tmp_msg_0_0.max.assign("ELKHOQXCVKFGULLVSIATAAJRIBWMPDWPJESTHKGVLTBMNYJSZDCSUMB");
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
    msg.setTimeStamp(0.846274256902);
    msg.setSource(31981U);
    msg.setSourceEntity(52U);
    msg.setDestination(16110U);
    msg.setDestinationEntity(109U);
    msg.op = 132U;
    msg.goal_id.assign("LQGQRCFUGDAWWFINJPEVFSRAKACMFRBZHJTLDIAESQYZLSOBWOXKTKKEHWQDKSLCIXIIQHWSRJCYYNUVLBQEFKVXGWTDEXLXNMHVLCDVEQPYRNBPZCKNNFFOJCIHSHOTXKLME");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RFQSWZXXTAKMMFKSCJVRPPOZQI");
    tmp_msg_0.predicate.assign("DRHKRCZMNICIWUTOWVJPHZSCALLVGFFJJPEXZAFPSLOCRFQQMKBPTJTVBNVAVUTBFCKIQRESBZNRVXOOSLQMGCYGLHDKJQTYUJVLNUUMUFTRGMNDXYRDPGKPMWYHNSGOKTSWJYGSJNVQOWJNHUEXEPGUGACWSEPBLKHFQOHZ");
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
    msg.setTimeStamp(0.781073903478);
    msg.setSource(985U);
    msg.setSourceEntity(34U);
    msg.setDestination(1310U);
    msg.setDestinationEntity(21U);
    msg.name.assign("WEMZZQESCXFVWSGEGQUYYFUNUVCTGJQYGFBAIEKQPOKSRLBBRDKXNLZZDTFZXTLYWAMULODCYPJPGILFVKKMGQMVGTRIANFBNLVNKPHIOOGFSDIWJILZENUBRUWFAGJNPRELENQUYHNFMA");
    msg.attr_type = 221U;
    msg.min.assign("HBNYDZMRHWXQCOUQQAAMBJWXCRSXLVBDUBBMXZZMWUVUWYFJCXFKLYYGRULMMAOOTNQHGVSVHOFUJNZEWATEETFZEPSPEDYBKIACKFXDIRSLJTSILPJQHOGRGKXGNZJLTYSDKDPQYRNJBYHNPDJJVRHWTZFGOQBSTAPMFGKWEVFYFKLWUCAWGPOQAPCIIHIICLSVKUQPUTRIMJXZVPWKMBCOLOSIREDEAU");
    msg.max.assign("QJFOTSYVAVXZTPFOZHREJIIWUXMXJHZDGNBHJWHYFRKUTVJMIWGQUNPGTDJXKPSTNNYAYBRZFCKMRVIWDVGOXDHLVQEKPCYLCQBQWLULXTQNOKHKNZPBVGSCGQBYCARVTDBBJDNACRBIQOLIIELDSNCMTORUWKMDUZUSBUDJFHEMR");

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
    msg.setTimeStamp(0.508283832366);
    msg.setSource(49018U);
    msg.setSourceEntity(97U);
    msg.setDestination(29889U);
    msg.setDestinationEntity(56U);
    msg.name.assign("HZXTPMRWZENRMVWOLAKABHEKBJXFKAYTOPWIOPAPAARLYVDIZWVEQQHFALIHBWEITHUCVMYATOEDGGPGONDKULTNF");
    msg.attr_type = 89U;
    msg.min.assign("LYTVYICFKVSHDFXNMZPMVDUKZWMOZVKHQPKYDCYQBYARYDOGNTPQWABIMURKNRTGWKXUWEILVVHZNPSOBFEUCQZPTJQBDNDXXGPAOQFMPLGZAZCWYJXUHJGIGVNAWTSRQPJTIJOBLUTHXHLAUFLXGEEAM");
    msg.max.assign("VNULRAXJXPZGEZWRFZBDFWECGJMTLIXSIRMWZIOOHHNBIPLCNYLLTSTSHFTYGXOHUQGYBNVOS");

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
    msg.setTimeStamp(0.535720603588);
    msg.setSource(12065U);
    msg.setSourceEntity(165U);
    msg.setDestination(25081U);
    msg.setDestinationEntity(145U);
    msg.name.assign("CRSWMOQJQWFVJLUKHAOYOEBOABWLXXJORZLXMABBDCPGTSUNCEIGWEPLZQEHZSQLKVFRTXXHETSIZEJVVJACNBQVRWPGWNHDEXXFAZJSFGRFRTYITLNCNIPMCZTCIMMDXURFFZYW");
    msg.attr_type = 110U;
    msg.min.assign("SWPERIWWXISSDDAHYAROTYVTKDQWHGUFJWFIQMLOJHCPDIXBNIVKMNGOUCFGYRFYEXMHZKBYCQVGMRSSAGGNUBSBVAHLMEDHCBPDRZUXPIAAQMQZOJTPLRZBDKDJGRMRIZEKTIJTTICOQXTHEHFVBCWNMZVMNXPGOQRX");
    msg.max.assign("OYVBYATAOCIQPZU");

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
    msg.setTimeStamp(0.483627052571);
    msg.setSource(35827U);
    msg.setSourceEntity(151U);
    msg.setDestination(12957U);
    msg.setDestinationEntity(63U);
    msg.timeline.assign("KSQHRMWFXONYDFARIDJWZKJXXVGHEDSBQPAIQQUYUMTBOGMTSOQBAGSSNIMUEIGTOVETCVSHCWLKVMKLCLALXBFBAKBTERWHZDJHFDWZAKLFXQMVRTOQGXZRSZGMTJJQPLYELHLAUUKGEGYBUMNCTPJCNIFBNCPFBVCGVRVCJEN");
    msg.predicate.assign("GRKGSSMHOTUUZZXGALVPACNOCPSTDHJLBYPUNEWJXBFLJGSVZTYTPQPYETIVWNLVMGBMMZTHVDHPEDOCRFWVEKYAOUSBGWWRYRRUH");

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
    msg.setTimeStamp(0.13995073011);
    msg.setSource(13201U);
    msg.setSourceEntity(14U);
    msg.setDestination(28232U);
    msg.setDestinationEntity(85U);
    msg.timeline.assign("HMUYGXGHRAQWVYHUTQZHZNBJOZFLDOVCVJREWVSFANOUZGQGQBJUVUZEOSYZYIKIKDDAJCPSHAXYBKPUFIMGRCCGVOVFVHZTDNLOQXAMBFPIJNPNYSAPOBBIFFCDYXPXTPQWXAMTUISTFWGASNADEDAUTOKENGJLSPWWQKWPLBMLYMXMGCXDKIGLNCZKRELFHBTHTSJISTRKUEQXNNCBQLMOHUVIOKPRZVYFRXYCLIKEJDERSELJRRHCZWTMMW");
    msg.predicate.assign("VGZDSHQBHGHMGEMPDWTKXCYPLIWIFIAYKDYTAGQMRFOUYXURBTNOHKQBJPUVLXLPBKHBHNFRAZRYDCSFCWDJPSTWDLRNCFVWDRXKAOKTIJDFLNHRXOVAJMCYQEZPYBTDOWLJVKXTBYPUNNBVMLEOEAEUEISXS");

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
    msg.setTimeStamp(0.748412975941);
    msg.setSource(59567U);
    msg.setSourceEntity(73U);
    msg.setDestination(8247U);
    msg.setDestinationEntity(73U);
    msg.timeline.assign("VGXVQXCFPHJDNEGFGCJIFQPZDPEUFHLYCUHYRWWUYPCJFHEMANKTVOLMAWAXLFSCFRHZIUECRMPXQTAYXKBJIABYQJYNMFLGTAWBVNKDHAMNJIKRBNXTSGBQTIJDUBORWDRJLUPIOFBVQVBSWULERHZRRYZRENOBEKXZPEYHNHSTKAJQJOOSGDSWYXTVOEKDFKPITDMAMTWUDAZNLZQGOIZLCKLWVPCZDMYI");
    msg.predicate.assign("WOYNKTGNTIURFAQVZGFUSGADSGNBUBDDKLMIXLORXGPOQNIEBZFWHTXFMBCAZILYEQJSQSCMGMLOXTATNYMNTIQREGWYNPYJDQIVVLUXWOFSANLRCJPBPXQUSEFVJDMSKPWVFBKXJHQKEIAFGJHJJYVMLOWDKHYPOTZVJUGPUPOKRGNZJADRMIMLIHEREKCNWLHFREXAURIHVATHBCVSWBXQP");

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
    msg.setTimeStamp(0.594772980532);
    msg.setSource(7738U);
    msg.setSourceEntity(9U);
    msg.setDestination(51301U);
    msg.setDestinationEntity(54U);
    msg.reactor.assign("PYFIZXKRCZKWMPVYBRXNTOYVQZVFKRQSZKOAWWCOYAUSITZWMHQPQGXMEDWABQETEAHNLCTGLCJDCYNXJUPASRNSVGMIRUWABJABDKGFDBSNRGXUOKVIPROGQJVEMGULFQCRHFDSWHDQTBXHDMBTZXGUXIKHVJQIYPAPNDLYPUJBDXZHTDVCFLEJMLETBVSYUONL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BCHJALVXGSDRLTRBLUKAHNPPNWYODVVJXXBJJPZYSQBCBJQFFTMAZFFCRIOINEKSJWMPILOERONSPHTWAYGSYOUKEULZQEJADLSQXFMIOUMZDUFCGBPITDDHUAZVDILZSSQAQIJZEXYABSJTVZILRKPNMUFQHYWOEXDKV");
    tmp_msg_0.predicate.assign("VJBLROMNLHJYMCTQXKNZDJHREWPGQAEYCOYIULSEHYBXYGSWVYBGOQAZIERHIDMSRCMPDEBOUILFPVKPSFBZEGWVBTVQYMEJSUMUIQRQCFZMWRRDLZLDPQA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZQZNACCCHDBULZJRCYGPXSDNTHJOSXPCNESAXHQYPPWLURMCGQONMTXZCJWWAYIYRJMZEOKUEAOYFXBZSDVZVRULMYWKFFMOE");
    tmp_tmp_msg_0_0.attr_type = 87U;
    tmp_tmp_msg_0_0.min.assign("VOUPBUIAXQNVPRGCEDFUSUPIGBEDYHCQULQZTPMTILOYSJMDWBSBZRWLSXNMPYCJSJELZFKONKBTCMNKZDRHQWXZDT");
    tmp_tmp_msg_0_0.max.assign("MMQXJFFRKWFBNHLUPAQMJVVACAYFEMTNGNAXIEEMFDAIZEBOTYEOUDOSOOKDXPUFRJHDNKYVZHDACAJQBNGZJYRPRZUSWPYLQSWZUYBWOLZSJMPNHUPJTMXKTRQQUIKEGVCDPEHTVKIBZHXNHDIZVFA");
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
    msg.setTimeStamp(0.18389491286);
    msg.setSource(36755U);
    msg.setSourceEntity(188U);
    msg.setDestination(19336U);
    msg.setDestinationEntity(232U);
    msg.reactor.assign("PHBYCQDOINXWWGYDAZSYUUMFWQSCLHWHBUFNTPBFVPMOCDUDDCHGVVZCWXZLYTKCFMGCFBLSUENKQTCVBQAKGLHIFRIYJZNJWUHXUCXLRGOXGLTLBEDVYAAXDTJHSMXQIZLYNPFUSLGWEHVQUJKJZMEZMFRKLIEBONENPAMOKZKXRGHTMWAGJPZYOWKIYFNDHJTUERIRRSQMDPASFEDRBVPYKOPVJZTSGBER");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PXUMRHAOODXJICWOJQABQNIFVXATMZKVMEGPSVTBFDUMWYGEZOAILSBUOHVMDFESNMBAUILNROSWPMDBTFGXRYECEJDKSWMWERBINLFTJCGDEZQZPCVKHFAPHGLHAJFWOTCQDLLJYBEKRWXVZNMTNPLQPVZKTNCJXTGQXHXAKZDJEUGSZVSRGJTGWAJPCKHLYQUPSXPWZCIS");
    tmp_msg_0.predicate.assign("KGSCITWTWVPTPMZJCZMEMZENCCXSPLJHLVKQPTLSOGQJHAIJWXMLQ");
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
    msg.setTimeStamp(0.325150517596);
    msg.setSource(64314U);
    msg.setSourceEntity(89U);
    msg.setDestination(38908U);
    msg.setDestinationEntity(45U);
    msg.reactor.assign("TNCQRVITBSVHDDFKUQQLJSKIHDXYIAPWFAXQGJUSQUFNZOLWOCCXZTQWYREWOJALDXZWFOUHKCENIBXDRYPCBOTGSZEMGMUIYJGNPFAMNWVINCSZVJRNSEQKRRHKPTEBZMQGLLBZHMBHOTOJXEGOGWFCJLRZRSLLQJMHDKBMU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KAPSROPHDDXGCXSYPHOVNZXVXCHMNIGABGGVTTWGKOIWPEJWZYBLMTNRCTLDWPYSQIKZO");
    tmp_msg_0.predicate.assign("YRULTGKTJINAOEVJMPKYQOMZEJBXAWSNMBHSCOIJDTLLOGSDUHRKYFZICNGXVLVQMCJDRPOGYAHSGRPFTRHGZLQMAUXZPOEAFKNFCHHNL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SGGWYNLXRZCSVDDOBCYMCKMGKRABNYOOVHECWRVAPLIQQKARNLMYOW");
    tmp_tmp_msg_0_0.attr_type = 103U;
    tmp_tmp_msg_0_0.min.assign("WEYVCNJFEVZGDGQEROLYSKOUPMBHWJOT");
    tmp_tmp_msg_0_0.max.assign("JGHWSEOPUZDXVCMYHDQGJFODJLEPDZJVTQNCBYZNSWUGMSHAITVWSEPJFEKJFHQMPGBQLCIOTKXZRRYWNCVOPRVXBBIEENGFTUTPKCXBHJZFKAAVLNMGUVSXEUBRYLIYMORTFYMGZKETPIASALWOIJGUFRYIFAHAOIDOWQNWQI");
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
    IMC::Event msg;
    msg.setTimeStamp(0.749142887393);
    msg.setSource(20449U);
    msg.setSourceEntity(35U);
    msg.setDestination(6841U);
    msg.setDestinationEntity(130U);
    msg.topic.assign("KHLXTCNPWAWBOVYMESYSUEMQVVGMBTIJGZBJYUOTLJHKGQZBONRTROVZMFILJMRVKKPIUXFWELEDSNSQJENPHRPMYLOMRZCMZBSBQKAGTUAOFDTWLACZMJJD");
    msg.data.assign("GFUKMCWTNOIPJOUNGYTCKVSQANTHNHAPGTZZUQBODCXYQHQMHGURPTGBZLKWMCLZJVEPCSDPRKSYVWFOZETGSUDCAEISFQKEIKRQNUQUZKCYHBCQOGXAVWNOTRROODD");

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
    msg.setTimeStamp(0.144293109626);
    msg.setSource(35895U);
    msg.setSourceEntity(209U);
    msg.setDestination(23036U);
    msg.setDestinationEntity(86U);
    msg.topic.assign("RVDIHDQQLQZORHPWNKRCPKTBFSSNAQMXJUBTGJWKHVNSPAWATSEEFXDDYHRLWJEGCAEIATDGZGALBMHBQZKMWGHLWACZLBIXFOHDIJPXPTCULCUOXK");
    msg.data.assign("ICHPOSVBOKEIIWHAXHWLARYGJFDJGMYHRSZDTWBLZBIUQSVKWMXQNKKEOCDSPHYCPQHJAQAMBNUZOUHHJMEJKKIXUBJECMCGQFJYUDDPFCFSWDHTPYNGTGMMIFQTIQYAPYHWLZGTOGVBEMEOAXBUJXFAUKFLTBSGPZVIRKPZRNXFJLSQNAEKVMRCNUUTVROVTSDLGJZICCNBZWLLXNFGOQWRESOYXMDAEOWRPFNILNBRTXPRZVAEQKTYZ");

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
    msg.setTimeStamp(0.357655078188);
    msg.setSource(26937U);
    msg.setSourceEntity(96U);
    msg.setDestination(28574U);
    msg.setDestinationEntity(102U);
    msg.topic.assign("GXUGWBZPELNRVVOCKNQRREOBAHMCBYRUVYIMYTDYQWGYEIZUUARRHODQJQTTAFFUJEYXQZFWFOAKDMCCXSSXLNBNEANHJBAYPWJKALCZYHJLRTHKDPLKUXDMZGQTEOZMHAAVQRJMCSJWBSNCSHIWGVOOEJNKGVSWPKEMTSCSMAJVPGBPJGQFZUFFWDHCCELTXUDOZLBXUXQT");
    msg.data.assign("DQATXGRPFVZKEMZMEDCDJABQPENPEIJTKIDBKO");

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
    msg.setTimeStamp(0.0293955630498);
    msg.setSource(45354U);
    msg.setSourceEntity(9U);
    msg.setDestination(58083U);
    msg.setDestinationEntity(62U);
    msg.frameid = 224U;
    const char tmp_msg_0[] = {27, -61, 87, -119, -63, 101, -10, 76, 18, 9, -91, -38, 121, 79, -11, -27, 26, -112, 63, -125, 52, -123, -7, -45, -75, -64, 83, 16, -63, -53, 124, -128, -107, 18, -6, -107, -97, -115, 107, 18, 77, 79, 102, 126, 114, -122, -24, -50, 14, 82, -37, -124, 68, 37, 110, -65, 13, -6, -25, -8, 51, 4, 12, 101, 29, -111, -72};
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
    msg.setTimeStamp(0.752710436226);
    msg.setSource(50008U);
    msg.setSourceEntity(213U);
    msg.setDestination(36225U);
    msg.setDestinationEntity(252U);
    msg.frameid = 103U;
    const char tmp_msg_0[] = {-72, 103, -119, 59, -100, 70, -118, -61, -32, -44, 1, -89, 83, 36, 96, -46, -47, 19, -7, -73, -71, -20, 33, -41, -66, -62, 1, 66, 19, 21, -89, 46, 90, -52, 93, 18, 107, -82, 121, -40, -117, -46, 41, -63, -27, 15, -64, -29, 53, -84, 9, 13, 60, -110, 111, 89, -103, -52, 27, -6, -18, 56, 112, -54, 65, -94, 16, -43, 22, -119, -55, 62, -11, -4, -122, -88, -124, -84, -117, 19, 48, 42, 107, -112, 0, -20, -117, 38, 9, 122, 97, -117, 92, 118, -2, 36, -112, -114, -15, -87, 116, -93, 118, -117, -120, 43, 17, -54, -45, -128, -23, 37, -29, -89, -7, 119, 17, -27, -90, -95, -35, -15, -104, 60, 44, 99, 86, 8, 53, 37, -23, 106, 123, -116, 57, -30, 87, 95, 6, 122, 51, -96, -41, -92, 89, -114, -122, 118, -7, 79, -44, -8, 120, -49, -31, 108, -62, 71, 13, -34, 39, -55, 30, -9, 124, 78, -119, -100, 50, 47, -107, 75, 123, 2, 110, -126, -113, 49, 28, 26, 90, 61, -13, -41, 95, -69, -57, 106, -90, -42, -112, 106, 82, -17, 122, -27, 101, 13, -45, -12, -92, -119, 93, -55, 23};
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
    msg.setTimeStamp(0.54568588925);
    msg.setSource(35366U);
    msg.setSourceEntity(112U);
    msg.setDestination(24797U);
    msg.setDestinationEntity(198U);
    msg.frameid = 4U;
    const char tmp_msg_0[] = {-90, 41, 100, 85, 46, -30, 31, 100, 97, 30, -83, -7, 55, 119, 7, 18, 76, 125, 124, 23, 110, 23, 5, 113, -98, -55, 94, -75, -108, 93, -12, -114, -64, 33, 14, 112, -8, 89, -120, -102, 12, -55, -81, -78, -107, 31, 99, -44, -15, 54, 26, -52, -38, 12, -38, -13, -14, 76, 23, 84, 67, -43, -71, 113, 31, 110, 69, 10, -37, 66, -95, -95, 46, 55, -63, 29, -93, 111, 88, 47, -3, -46, 45, 107, -10, 2, -57, 26, 45, 88, -11, 1, -86, -79, 37, 58, -116, 13, 74, 114, 110, -88, 86, -109, -88, 62, -92, -123, 57, 113, 50, 126, 9, 11, -75, 2, 108, 90, 11, 33, 92, -65, 14, 27, 104, 31, -41, 3, -98, 70, -61, 89, -23, -15, -53, -121, 43, 49, 111, 67, 55, 42, 15, 118, 14, -33, -46, 123, 96, -24, -20, 85, -110, 114, -75, 12, -96, -28, 75, -47, -30, 3, -47};
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
    msg.setTimeStamp(0.655917945277);
    msg.setSource(18724U);
    msg.setSourceEntity(196U);
    msg.setDestination(56264U);
    msg.setDestinationEntity(208U);
    msg.fps = 169U;
    msg.quality = 91U;
    msg.reps = 162U;
    msg.tsize = 75U;

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
    msg.setTimeStamp(0.184179960455);
    msg.setSource(20083U);
    msg.setSourceEntity(97U);
    msg.setDestination(16268U);
    msg.setDestinationEntity(143U);
    msg.fps = 143U;
    msg.quality = 46U;
    msg.reps = 61U;
    msg.tsize = 115U;

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
    msg.setTimeStamp(0.227124016281);
    msg.setSource(29132U);
    msg.setSourceEntity(62U);
    msg.setDestination(63862U);
    msg.setDestinationEntity(145U);
    msg.fps = 143U;
    msg.quality = 11U;
    msg.reps = 31U;
    msg.tsize = 118U;

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
    msg.setTimeStamp(0.73741129531);
    msg.setSource(45514U);
    msg.setSourceEntity(106U);
    msg.setDestination(44666U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.394442526448;
    msg.lon = 0.457924787582;
    msg.depth = 31U;
    msg.speed = 0.326952227715;
    msg.psi = 0.890454120093;

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
    msg.setTimeStamp(0.502341752545);
    msg.setSource(2742U);
    msg.setSourceEntity(210U);
    msg.setDestination(13628U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.32139319832;
    msg.lon = 0.535865019585;
    msg.depth = 50U;
    msg.speed = 0.168933804387;
    msg.psi = 0.101681560176;

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
    msg.setTimeStamp(0.911130568234);
    msg.setSource(16887U);
    msg.setSourceEntity(137U);
    msg.setDestination(49021U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.362787568824;
    msg.lon = 0.478475878573;
    msg.depth = 244U;
    msg.speed = 0.631925697986;
    msg.psi = 0.241202116186;

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
    msg.setTimeStamp(0.560318777237);
    msg.setSource(44703U);
    msg.setSourceEntity(59U);
    msg.setDestination(61953U);
    msg.setDestinationEntity(129U);
    msg.label.assign("KYSQJKRPVIBLMZDQYZGNAJWTDWMGIDUUBIHLQGDKAFWABUMIQEMRYBSZYKWGARVPTHIWPDTQEBSAYZRLVHWAFSPVLRXJFILLOCHDNTHPTZHAWOOCJBIIPZAZNEPMEXXQCFMAMBUMTLEYOQVKFNKOGHJUNHENFRGNSGMCOPXLGXTRMAEUCYEEGUWTSXYUJJIKRJJZONP");
    msg.lat = 0.208671766666;
    msg.lon = 0.80876216389;
    msg.z = 0.449044429925;
    msg.z_units = 199U;
    msg.cog = 0.259558388753;
    msg.sog = 0.862274325525;

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
    msg.setTimeStamp(0.00136612936308);
    msg.setSource(7147U);
    msg.setSourceEntity(97U);
    msg.setDestination(8541U);
    msg.setDestinationEntity(61U);
    msg.label.assign("PSHLZSECSOGQNZTTRDAFDPBYKKZLVQFFBVNDSWHJHDSXPXYGBWQZINCJEPATOBWPOPRJCFHTVSMGURGWXEFJNGXVGRYDAZBYWJTKWVKMNZZFYKXDEDVUGTBHUKQJPNATMQPSXLUMZELOIERUZJAPENMQWCLYNOIUAHTALBFKYLVHAOJBWKAAWHEIRQICHQOOUMQCIBPXSSCXRQTUGLZUYOYRUGBVHLNICLDIFD");
    msg.lat = 0.188572669258;
    msg.lon = 0.0358417126935;
    msg.z = 0.413880185447;
    msg.z_units = 173U;
    msg.cog = 0.914812296645;
    msg.sog = 0.314231701125;

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
    msg.setTimeStamp(0.0914311135856);
    msg.setSource(1918U);
    msg.setSourceEntity(35U);
    msg.setDestination(61594U);
    msg.setDestinationEntity(111U);
    msg.label.assign("RILUDGRACHIFKUQDQVWOPODYTMLHQJIRTLRIFWSGHEZOBGKLBGSAQOPPKTZPTKYQPVJNNQWSUHFVOQBYUXNFDJWOHZ");
    msg.lat = 0.717447382666;
    msg.lon = 0.486066623783;
    msg.z = 0.82392433661;
    msg.z_units = 28U;
    msg.cog = 0.718273413432;
    msg.sog = 0.401108460143;

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
    msg.setTimeStamp(0.555094990661);
    msg.setSource(45458U);
    msg.setSourceEntity(162U);
    msg.setDestination(29888U);
    msg.setDestinationEntity(68U);
    msg.name.assign("LHQXBCUDPUSRLAFFTJVZDKVYXQVFFBXMYRERYIDEEGCRNEBZNISFHYDNOLDZKXIQJVAKOEJWISTLSPDMXC");
    msg.value.assign("YFTFCYPNMPJTUPRIYCZKMZHXLWPFLSBAYBQCVHWZTQORRJTQJGVTEGAIEPSZGSQE");

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
    msg.setTimeStamp(0.807678101585);
    msg.setSource(47912U);
    msg.setSourceEntity(100U);
    msg.setDestination(39878U);
    msg.setDestinationEntity(50U);
    msg.name.assign("KZZNADBLIQORCWDSEGUIDYBOKLBLKCHVFFYPUZOBFNZDZYWVGIHTEUWSOBIUZJVPESBHMYLMGHCEESBHUCWFYTVZVRSAF");
    msg.value.assign("CLKORUEXELRTSJDHTFFGYQVPASWISALJSIIWOZKMRUETKXDWGOPFBEGVFCZQNSQMCYWBHACSZUWTZRDRJZMO");

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
    msg.setTimeStamp(0.23547470755);
    msg.setSource(42101U);
    msg.setSourceEntity(14U);
    msg.setDestination(39446U);
    msg.setDestinationEntity(109U);
    msg.name.assign("NYHDBLOLOADRJOVKVSRMBRSLFPYYXXCXB");
    msg.value.assign("JNZRABMHMQTJNROPOYQZEIMCCZILZKHOJJLDKZXUZBGWORCUNPFPCCWSMCFYTKHQRIFHDFHZFMXASAUTFDESFYYAXK");

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
    msg.setTimeStamp(0.0204231327131);
    msg.setSource(51140U);
    msg.setSourceEntity(22U);
    msg.setDestination(3687U);
    msg.setDestinationEntity(212U);
    msg.name.assign("TKGUXUCOOVEHRSJDBMROS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UCTCHSQXSDBJGZTMMCQVNJNOFEDVZSLIYTYTFBBEBYGKCTEZNJIBAYUXEDVFSOZPZKHQVCRXPANUYFMOGOKYULCQWLWZSUCTOSMPLMULFIHFNRDWXERWLWKIXZRCEQFKWSKXPWRQTNPMRXHYCXOUMVKMVIDLGMP");
    tmp_msg_0.value.assign("LTIIREOHOZRMEMRIBKPIPZHPGHUSOKAQSXJYSQBDNFIYRTLQILWUYYNSKMFUDGVRBTLCHFAGHFQBRTWKMNNMUEPWZSSWXBBUVOAZDFGNSIXXHOPV");
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
    msg.setTimeStamp(0.363293571073);
    msg.setSource(14675U);
    msg.setSourceEntity(213U);
    msg.setDestination(60697U);
    msg.setDestinationEntity(246U);
    msg.name.assign("AQBRLNAFOHIBVQTANSEDVGLZQPLKNPQVZIJMKUVLUISRYOCZKIZWHMDOOVAMBWKUBTNAUXHSZTWBJCZPGUXJIFCCXQQYNCLVAFKXGLGLDWYAKXFRPMZEWGPNOCRKYXRZDTESRYUOFJBNUEDWDWPEHJEZRBCYIQPFSLUGMMZVEKHRWCSTODXGIGWJFBUKYHJYXAMRPGFBOMTHORQNPHNDUYFSESLSEMXGQNHOJDCYTBLIVADJVFMXISQVJCK");

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
    msg.setTimeStamp(0.463765849911);
    msg.setSource(8491U);
    msg.setSourceEntity(12U);
    msg.setDestination(38717U);
    msg.setDestinationEntity(207U);
    msg.name.assign("TIHNYASDMVPXCOFIICAFNJFNDUSBQKLCJWCUZTZCJHX");

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
    msg.setTimeStamp(0.323293079756);
    msg.setSource(46554U);
    msg.setSourceEntity(66U);
    msg.setDestination(49947U);
    msg.setDestinationEntity(248U);
    msg.name.assign("EBVUDKNRGEJHFKZIVAWQYOWNZQPQUAOSHBGXUMCTRZMVFCTQFLAJJCWAYBUJXTBXTPETZSFKTDIGNZVFYDKXHZGVKWTMMCWVSPCOKDWLIBIBMIQLFR");
    msg.visibility.assign("RMWGSQMGLMXAPISKNKMEHKYYFFDBEIJGSHEEPCNZAICVZQVXBJXVNWALWKBRYREAFOSVLYNODNSEATWOKADMGNHYCYREXZLGZHQTFMVCBTJAJBFVTQFZEOLMTZTJMFGAUZGTLPRTDYUKHWZLCVUQSI");
    msg.scope.assign("CDPTVULQDVNOAKVBQQNIEMZSLMCLHMBWDTHHIZEBRZPIGNRQEPYXXWLRFFZTXPKUGDYHFAVQADP");

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
    msg.setTimeStamp(0.407182154061);
    msg.setSource(33541U);
    msg.setSourceEntity(171U);
    msg.setDestination(36424U);
    msg.setDestinationEntity(195U);
    msg.name.assign("MUFBBWVXJZYTIRRPJXYOCOUJZHCWTLDKTOPBUDVVPCVPCAONUECELETALUNTGAVQDJIHDWTPYSMRDFPKTKXMAAASAGBWKYQRFSKQIGMZZ");
    msg.visibility.assign("YRTFCITQUCLOTKUMKMNBTSTPMCRWEZHWJO");
    msg.scope.assign("WSVBBQANTZVAWHVMDPTEHGCQUHFEICNLRWXMTIOSVDVLLCKSHJNRKAMUXORMQIJRRUDTZYJJFZXEZNHUBHZRNJVFQKILLAEPXHWGIPJSLASGUXDWCUZGTACPMDUBYBIUBTZDHDKV");

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
    msg.setTimeStamp(0.809394355363);
    msg.setSource(50680U);
    msg.setSourceEntity(199U);
    msg.setDestination(3603U);
    msg.setDestinationEntity(81U);
    msg.name.assign("UNWSKKLGHNIFRYWEBREPWDRFJLUXXWUWDTEDYEVNFWBQNJIELBYFQEGPIYJAOXTLLPHNCCINHVCFWZPELSOQXGBSISPKOQXLPUTORUXZVYMAXGQMMHYLTEIIBMGKYGFCKTXUAUJCZKJTUVFHVQWDVEROWTSZZBBQHMAUYZYGKSOJGZINNOFPKPTBCLMMYGAHFAPURZKNAJOVDRMSQSVFWIHDXNGLCOCBDDSPKJVQDRO");
    msg.visibility.assign("TGEKBKPAWUGQQHLEIHQCZIKDIYNYOLFFBYLSNRBNZATZIVYYYHRUXSBIUXELXP");
    msg.scope.assign("YBZYSPGQRGNFAXWIBEVQVFKQMRUJIEDAGODJLKOEQILCXWYSOTHSAUNUABZDBLVFMFWQWK");

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
    msg.setTimeStamp(0.278293371863);
    msg.setSource(48534U);
    msg.setSourceEntity(195U);
    msg.setDestination(25681U);
    msg.setDestinationEntity(90U);
    msg.name.assign("IKFGTUUYCVVQLKGAYSUIZXMVMCJECQOOCEVHOECXBGODXOGJSSEGBEHLMTFPKWTWMGNVOGWXERNJTHRXHQNCIMUDPLKWSPTTGBSYSNKNBYHDHWCWJJYANSHLUWFRPYQMZDTIRQIRYHCBVNBUOCDBOFJDKXMKFKZUDUXNRQPTAMZYZPPMXCFPLTVBSZDAFQJEOTKFHEAVZYARRBZIIFLUJVZQWSNGLHQJPXWYAIIUASEKFZWBELMLJRD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CSDXQLGULC");
    tmp_msg_0.value.assign("QIDXRHWSTIRSTEUALVSDBLBTFPTWGRIXUKWVFWUOJAPKJPCPJFRVHPAQCJLGCTZZKONPZSHQENVNLOIYFEQLMTYCNMHVJMQABBFZCGAMKMXGHYQAYUUVVBUIEOZOPCUHSFAZVDCZBXEDDOKWIOFKRTIXQFIJZYSLHOCOURXKYBMXYWKRYGGGLXQVRWYBKWXSCFJGIQHMZDNKNMSEIHXMLNPRANG");
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
    msg.setTimeStamp(0.489156068439);
    msg.setSource(59545U);
    msg.setSourceEntity(3U);
    msg.setDestination(9511U);
    msg.setDestinationEntity(65U);
    msg.name.assign("VQEFMHAKWBSZTIIEHRKALHO");

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
    msg.setTimeStamp(0.0710462604326);
    msg.setSource(13453U);
    msg.setSourceEntity(172U);
    msg.setDestination(51501U);
    msg.setDestinationEntity(25U);
    msg.name.assign("GOXSYNYBYDSCKKTGNDVFDJOZBPPAVKLVLTZGVWCBPDHIAIQKTGIFSSENOKUVLZVTJQSMHAODIHEPFAYGBXLZJQZUXGEKZVRWOJXUWNDLUQRFNFBQZMWSSAXROXCTYJZMUFTHJLTG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LMIKPMDDCJYEYXCNVCLVPBJREBZGLFJCHZBZCQDIZGBXFURKVJSQHPTEHSWDLXZBUUTAPXOSKUAMMSZCETKPZALYFHDWMGFOGNTWKIDYROILOXHPTUUIDVXYZQBIWFVAVEWFWCNMAENONACHTJTMRYXFXVGNSWHJDYFTXCGRSJDBYSSOAUFBFLKGDQXRIVQEGEPAPHKNAKYYNWHMUQQONBPQKWIWCQJBUIQSEMZHTPG");
    tmp_msg_0.value.assign("ZUVMDOMAFBGUZNNOPOXNAVRICMSETZRMXXPIJDJGSKHVXSJQYVMIRLWWOSLAGPSEHXGYPDZUOFWHFQMKCVCEENTCFHNBZRGJXBVQOWVPYTWSTDWYJHAWKVHEIDLRRPTANNXPGCWOAKZGUIITBBLFBKWECMQDGDUBLLQKZXOCIU");
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
    msg.setTimeStamp(0.0925910111111);
    msg.setSource(28420U);
    msg.setSourceEntity(125U);
    msg.setDestination(36950U);
    msg.setDestinationEntity(241U);
    msg.name.assign("JQWSUOYMCKIFMAKMGKPZDKDSRVCYGBNFDRTPZJFF");

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
    msg.setTimeStamp(0.446453541737);
    msg.setSource(56795U);
    msg.setSourceEntity(120U);
    msg.setDestination(40329U);
    msg.setDestinationEntity(0U);
    msg.name.assign("AFMRRNBTWNGCKDFAMSTCTMVPZEZKMYFWIGUORCOGHOTCTCWKXZNVLHFYWLEKEPVKLUETCEWCNBSBUJYJOOSZSVEJFJHSLM");

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
    msg.setTimeStamp(0.107767630003);
    msg.setSource(6853U);
    msg.setSourceEntity(19U);
    msg.setDestination(13842U);
    msg.setDestinationEntity(23U);
    msg.name.assign("XKGCTOYTKAMOBTNASWCEMZJSEXFMXVSADZOQMBVPZ");

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
    msg.setTimeStamp(0.501452508363);
    msg.setSource(61802U);
    msg.setSourceEntity(103U);
    msg.setDestination(22307U);
    msg.setDestinationEntity(37U);
    msg.timeout = 98959385U;

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
    msg.setTimeStamp(0.919576344373);
    msg.setSource(54776U);
    msg.setSourceEntity(195U);
    msg.setDestination(26328U);
    msg.setDestinationEntity(31U);
    msg.timeout = 2198993715U;

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
    msg.setTimeStamp(0.883135247595);
    msg.setSource(20150U);
    msg.setSourceEntity(179U);
    msg.setDestination(4834U);
    msg.setDestinationEntity(70U);
    msg.timeout = 1859353144U;

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
    msg.setTimeStamp(0.480752264013);
    msg.setSource(45221U);
    msg.setSourceEntity(21U);
    msg.setDestination(13814U);
    msg.setDestinationEntity(110U);
    msg.sessid = 3197028721U;

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
    msg.setTimeStamp(0.501913640488);
    msg.setSource(45568U);
    msg.setSourceEntity(53U);
    msg.setDestination(58572U);
    msg.setDestinationEntity(195U);
    msg.sessid = 1365040799U;

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
    msg.setTimeStamp(0.610425633179);
    msg.setSource(39595U);
    msg.setSourceEntity(113U);
    msg.setDestination(38833U);
    msg.setDestinationEntity(49U);
    msg.sessid = 999441845U;

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
    msg.setTimeStamp(0.326785212038);
    msg.setSource(51946U);
    msg.setSourceEntity(220U);
    msg.setDestination(47059U);
    msg.setDestinationEntity(45U);
    msg.sessid = 2029584556U;
    msg.messages.assign("YCFXUPBVUFEOGDRUQWXYFXIGOXNNQGAZOVATMLQRTZVBBFSRPMWDEOXKQ");

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
    msg.setTimeStamp(0.628106847862);
    msg.setSource(61310U);
    msg.setSourceEntity(162U);
    msg.setDestination(39448U);
    msg.setDestinationEntity(136U);
    msg.sessid = 708108127U;
    msg.messages.assign("MBUTBPQVYPRDYYOBJEMIYZYPCPGPWMGOQGDITUUYLRCFXGQCHJFTORRQFRTLIAEJWCMINTVQLUZLHRLBKIPQQCNMBDFWMRGWLFSAIBHSEYLJKUZIFTUGONMYXRXEHXGFTJRLVDZODCPJBQKEXBZOWSLTHPNBCWSOTNXIKQKOCADMXVZZJFUAELWQDJEFVTXAUBXEKVIRGASCHAWWNIZESJFAPZYNGEKHMWHVKAPZUHDGYOJXNDNKHNVS");

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
    msg.setTimeStamp(0.996636543809);
    msg.setSource(55909U);
    msg.setSourceEntity(169U);
    msg.setDestination(6538U);
    msg.setDestinationEntity(119U);
    msg.sessid = 1764303856U;
    msg.messages.assign("SFGYZVQXCTMBUNANXIZWHOHYLAYKKVVAEIBNPDGUXUEAPJSBBWTLHUKVQIVRZMDPMKDJXFJAGIGGTXMISYOAFPQWPJUCIGCWKMSLTWHGUUDMGEVOORGSYZRFSPJQZFRXIETHCNFQENUUBFWQOMQRMBUXWDLSWKCEOSCKWFHDDHRNGQDPCBXTHJREFNZHVJCPTLNJRZSIKZDEEMBQYCJMKVFLZJHYBTOOZCVRTLAWSKBOYPAVINLNQDX");

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
    msg.setTimeStamp(0.266926175905);
    msg.setSource(17290U);
    msg.setSourceEntity(12U);
    msg.setDestination(27346U);
    msg.setDestinationEntity(29U);
    msg.sessid = 586415931U;

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
    msg.setTimeStamp(0.249880979131);
    msg.setSource(57119U);
    msg.setSourceEntity(114U);
    msg.setDestination(64255U);
    msg.setDestinationEntity(240U);
    msg.sessid = 3357574890U;

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
    msg.setTimeStamp(0.691751672332);
    msg.setSource(9008U);
    msg.setSourceEntity(29U);
    msg.setDestination(31684U);
    msg.setDestinationEntity(201U);
    msg.sessid = 2076593063U;

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
    msg.setTimeStamp(0.169756208553);
    msg.setSource(22868U);
    msg.setSourceEntity(156U);
    msg.setDestination(19708U);
    msg.setDestinationEntity(172U);
    msg.sessid = 930810592U;
    msg.status = 152U;

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
    msg.setTimeStamp(0.611341254051);
    msg.setSource(37956U);
    msg.setSourceEntity(251U);
    msg.setDestination(40143U);
    msg.setDestinationEntity(247U);
    msg.sessid = 101927112U;
    msg.status = 81U;

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
    msg.setTimeStamp(0.605666490064);
    msg.setSource(53907U);
    msg.setSourceEntity(43U);
    msg.setDestination(18331U);
    msg.setDestinationEntity(132U);
    msg.sessid = 2849617628U;
    msg.status = 64U;

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
    msg.setTimeStamp(0.753363223051);
    msg.setSource(46080U);
    msg.setSourceEntity(89U);
    msg.setDestination(13913U);
    msg.setDestinationEntity(15U);
    msg.name.assign("BKUEKOKGYFBIHNRSVLEAZCQYGMDPXHUMPFPTVZXJFNMRNPSEXIAWUVUHJMHETCMJIZQQUTDWUZOVXZAWAGDXFJVBLTKLPFMKQBSLGCUDVCFRYBABDEUCIQNJMLKABTDDLSKMQRIYMSWRGWGRESHOIJYYNHABOTASZGXJHXSQWEOBPUVOAXJVTKPDEFCVPKTLYPJIXSQKENOIULCVHXCLDWJOGCCYNRHNRMYYHQRLZ");

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
    msg.setTimeStamp(0.0833865460164);
    msg.setSource(7281U);
    msg.setSourceEntity(187U);
    msg.setDestination(62906U);
    msg.setDestinationEntity(115U);
    msg.name.assign("BYLLGAOZZIVVYAVRUMAHDMNEPXBOSYZEZTVSVEWGDUMBPJEXYGAKUGHREGLZWCVCZYAQIDJTCMDLNPGHSXQLQEQPWHDTTXFYZKIBLATQZYTWNPUHPKHOEEHITRXWEJMWVDOABFVBFSNUKRYMHPUCAQXFFPTXRONGYUCFGSCLCWQM");

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
    msg.setTimeStamp(0.59474355829);
    msg.setSource(9321U);
    msg.setSourceEntity(7U);
    msg.setDestination(18134U);
    msg.setDestinationEntity(15U);
    msg.name.assign("OEENZBFSVFHCFPBMYRXHO");

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
    msg.setTimeStamp(0.97863935876);
    msg.setSource(38276U);
    msg.setSourceEntity(245U);
    msg.setDestination(13591U);
    msg.setDestinationEntity(67U);
    msg.name.assign("WFZIWWEUGJQDXSXYKV");

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
    msg.setTimeStamp(0.420554226831);
    msg.setSource(59901U);
    msg.setSourceEntity(244U);
    msg.setDestination(21471U);
    msg.setDestinationEntity(253U);
    msg.name.assign("NOSEFLCDIMTWKEZWSIXXJWDMOKOIUXAKLRJAIFQMBSZYRNYZDANQUOKOIJHTHNUSTQGGTXRTLHSRCTGNBYJBUWYCHHEDPLLFWDNUGXBERKBAWYUJXEPGMFPSVRZZOJCWZMHCXCWQYLWQYAIVILUBUAJMODMVQOFDHE");

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
    msg.setTimeStamp(0.49849359726);
    msg.setSource(54141U);
    msg.setSourceEntity(212U);
    msg.setDestination(41936U);
    msg.setDestinationEntity(116U);
    msg.name.assign("RDXYLKLXDBFBGRUXZDNHIQOFIDLYDHATCNFSZJAWANMRKNSKREFNHCGPHKEYJHTTNQFGSHSLYRRLYSUQUEGRITQWEMOJABZMXDZFPHZOVQWXJNUYMABXMDDKEPJWQGBKCWQAIBOFBEFV");

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
    msg.setTimeStamp(0.568705126686);
    msg.setSource(34990U);
    msg.setSourceEntity(75U);
    msg.setDestination(12249U);
    msg.setDestinationEntity(27U);
    msg.type = 154U;
    msg.error.assign("DICVIFUVYSSUULXKTBINGJPGQTTQPAGHKP");

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
    msg.setTimeStamp(0.939064580398);
    msg.setSource(55385U);
    msg.setSourceEntity(16U);
    msg.setDestination(23777U);
    msg.setDestinationEntity(178U);
    msg.type = 153U;
    msg.error.assign("SFUKMQASZYEHCYAYLTSOHFTHLOOYUXQPHXZABHCEGPPTJANWRQKIOLYURGJNUSHMZNDRZEVGZILMBCCDUZQDLPHNXKW");

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
    msg.setTimeStamp(0.379932494222);
    msg.setSource(35559U);
    msg.setSourceEntity(162U);
    msg.setDestination(62032U);
    msg.setDestinationEntity(128U);
    msg.type = 11U;
    msg.error.assign("ZIYJHRWDOKOAZFVKQTJHYQKKISDYXNYASJRJATQDNSEJHTOIDGTXGUQOPMPLWNYZMTAIMYXGSJVWMUBPJIKVYTSCBUVQOCKMHGEWNLRXNDHFHQOASLQTLGKCPIRFZBNMXFBUKLZDIEHCJKSOUZZFPCAVEWLJZSLYWFAAHLVEEDNVQHAQRRYXLLXDWCGWQSCEINTKEBXGOIJYTUZDCGMMRVPURHBWCBTVBUXUOPCOPWIRFEUSMRFPNG");

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
    msg.setTimeStamp(0.642612886725);
    msg.setSource(62210U);
    msg.setSourceEntity(109U);
    msg.setDestination(59089U);
    msg.setDestinationEntity(170U);
    msg.seq = 52212U;
    msg.sys_dst.assign("XYWFKEHITINHQCRNFGXTJFOACYGSTPIMRHVBVSZYWHAYNGQMNSFXJEPPYSUJFOJWWCEGMBVHUAUWUDB");
    msg.flags = 183U;
    const char tmp_msg_0[] = {5, -15, 70, -109, -120, -108, 68, 15, 11, -25, 16, -117, -76, -118, -1, -35, 64, -25, 66, -15, -38, 62, 50, 43, 84, 101, -47, -102, -82, -123, -88, -109, -79, 65, -87, -113, -8, -68, 40, 29, -67, 66, -32, 59, -51, 5, 71, -57, -45, -128, 85, 72, -11, -67, 42, -121, -25, -75, 114, -48, 28, -122, -15, 36, -88, -16, -118, 70, -127, 5, -100, 122, -123, 76, -82, 97, 12, -28, -85};
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
    msg.setTimeStamp(0.143494523924);
    msg.setSource(30037U);
    msg.setSourceEntity(69U);
    msg.setDestination(65506U);
    msg.setDestinationEntity(62U);
    msg.seq = 5797U;
    msg.sys_dst.assign("AFLXHGNBKFPREALCXOJMHDWKJPVHAOTMRQMDUNPZONCPFWUQJPYKUYYCPUJNRHRAHMCMYEJGLVMUINKTZTIRQSPXTOEEHVFKGAEIUTKGIG");
    msg.flags = 198U;
    const char tmp_msg_0[] = {107, -91, 114, 18, -92, 125, -88, 77, -72, 73, 19, -40, -119, -1, -5, 75, 120, -66, 106, -36, -16, -86, 5, -17, -108, 91, 35, -72, 14, 98, -24, -51, 36, 122, -56, 52, 55, 112, -102, 114, 68, -76, -62, 82, 54, 15, -94, -116, -90, -47, 52, 10, 63, -5, 106, -15, -70, 91, -18, 114, -55, 115, 59, 43, -49, 33, 50, 38, 99, -73, 45, -118, -76, 104, 33, -110, -51, 105};
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
    msg.setTimeStamp(0.484511887629);
    msg.setSource(36137U);
    msg.setSourceEntity(71U);
    msg.setDestination(8671U);
    msg.setDestinationEntity(173U);
    msg.seq = 974U;
    msg.sys_dst.assign("HIYKDMVCMJSUXUGMFKZGYEVMPUDGFFWJLRDTUIBCNGNBBUQTOLZISHSGGHXQAOBTWCIYZYFONPJMGYXBIZUNLTHAUZWLDXGZOAQHNAZJLYEDWBQDWXTMQPEVZJVLSKJHTVWQSTSSTRCALPNIBQJRZREPJPKQINCVVINPXQCPHXTBJFORSFJRUCKSHEAYPKTIHADZUVC");
    msg.flags = 124U;
    const char tmp_msg_0[] = {103, -103, -56, -48, 53, 91, -109, 52, -52, 19, 38, 122, 79, 70, 59, 26, 77, 35, -72, -54, -100, -122, 110, -26, 114, 101, -18, -71, 126, -78, -109, 29, 71, -81, 86, -63, 41, -42, -95, 37, 126, -98, -102, 71, -44, 37, 59, -25, -35, -46, -127, -110, 126, -26, 23, 94, -46, -5, 1, 62, -41, 28, 116, 26, -18, 120, -124, 76, -92, -16, -78, 59, 26, 96, -82, 78, 81, -127, 55, 45, -106, -71, 40, -38, 68, -121, 86, 79, -115, -43, -87, 76, -122, 81, 73, 102, 102, 3, -90, -51, 122, 87, 48, -79, 43, -50, -67, -16, 106, -94, 2, -7, -114, -17, -42, -66, 36, -120, 22, -78, -60, -71, -90, -49, 97, 9, 53, 31, -109, -54, 30, 102, -123, -86, 47, -80, -54, -16, 92, -38, 15, 50, 68, -108, -58, -32, -101, -4, 1, -19, -8, 65, -84, -126, 108, -9, -120, -47, -107, -50, 39, 83, 107, 0, 89, 117, 10, -68, -110, 119, -96, -55, 49, 54, 15, 111, 11, 57, -79, 72, -1, -29, -94, -77, -76, 92, 101, -128, -36, 75, 43, 15, 1, 82, -70, -77, -28, -17, 16, -3, 92, -30, 20, 56, -37, -124, -41, -112, 103, -90, -38, 15, 75, -126, -105, -55, -117, -51, -55, 83, -36, 14, 6, -126, -74, 7, -4, -115, -109, 11, 96, -117, 63, 68, 47, 32, 13, -20, 118, -23, 33, 50, 72, -51, -77, 54, -79, 3, -46};
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
    msg.setTimeStamp(0.640767848163);
    msg.setSource(44560U);
    msg.setSourceEntity(237U);
    msg.setDestination(3519U);
    msg.setDestinationEntity(194U);
    msg.sys_src.assign("ADKZDCPWGGEEWJBNCHJIEOBVNKMAGGEAHYKNFYOHRPUSQWGIRCQZTTZSBQHSAFEQSMFRLLNIKYOHQKKVLST");
    msg.sys_dst.assign("FXBKGGLLSLASZYGQBCPCCJFRATWBJBWNHFNUAHBDDRSQPDAWHDJYBGZVBKQLYSKWONDI");
    msg.flags = 195U;
    const char tmp_msg_0[] = {26, 106, 52, 7, -52, 121, 52, 35, -69, -28, 33, 86, -79, -6, -50, 61, 125, -5, 123, -30, -28, -22, -127, 24, -28, -29, 31, 100, 108, 78, -54, -3, -73, 113, -35, 43, 95, -104, -93, 61, 24, 69, -125, -128, 21, -126, -9, -8, -112, 48, -8, -16, -95, -9, 90, -121, -30, 25, -124, 108, 96, 43, -34, -68, 121, -64, -105, -20, 13, -45, 45, -47, 10, -22, -78, -115, 59, 32, -60, -48, -83, -99, -3, -48, 109, -22, -95, -39, 39, -20, 99, -36, -12, -75, -105, -39, 33, -117, 67, -53, 68, -127, -116, -53, 70, -120, -8, -76, 46, -117, -100, 25, 77, -75, 76, -9, -31, 76, 89, 58, 97, 16, -33, 47, -75, -40, 29, -80, 24, 126, -28, -1, -91, -110, 103, -123, -76, -125, -78, -18, 106, 35, 55, -95, 98, -67, -93, -85, 37, -124, 25, 117, -99, -103, -121, -121, 100, -40, -33, -15, -56, 74, 76, 108, -83, 66, 30, -78, 0, 30, 47, -9, 90, -93, -56, 58, -86, -115, 94, -121, -35, -108, -46, -93, -114, 23};
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
    msg.setTimeStamp(0.527590739387);
    msg.setSource(39918U);
    msg.setSourceEntity(35U);
    msg.setDestination(27157U);
    msg.setDestinationEntity(177U);
    msg.sys_src.assign("XIQWMBCDKWQRVGCZPIRJDOACYWAFKKDQSPTSTMXEYUEUDYLRURTQKIXAXFXALGUOLNSNZVHTIEBHDIDPOAVYMXFEREVVJRBQEKQUUFCABJNPTPLSNDHWQCUPOHJZMBWUSTKFCKXWTFIJZSZANZDYFQZVMHLOSJNWTPMTHGYAKEGJKYVNEHFLGUGICWXRJMMXFZCDPLGBVJGNZQBXOVIJHAOOGONPSLCBLEBVTYSZBEDRPM");
    msg.sys_dst.assign("CMEYXNMHORFWAQKZCQZTPYRXNCZEJRFIFFBHTDJGMXTCAJAKHQDUZUXFGOKGIDXWAQKPKGFDVHBTGOVPCTBFERS");
    msg.flags = 80U;
    const char tmp_msg_0[] = {96, 66, 101, -8, 53, -42, -38, 112, 71, 23, -86, 116, -58, 83, -67, -56, 88, 104, -106, 49, -115, 29, -62, -14, 117, 92, -67, -73, 80, 33, -16, 16, 46, 26, 111, 8, -69, 42, 7, -30, -14, 33, -89, 118, -90, -110, 99, -57, 11, 63, -42, 114, -48, -102, 114, 22, 34, 101, 19, -100, 124, 97, -119, -86, 38, -88, 111, 111, -47, -75, 66, 38, 46, -30, 49, 45, 37, 66, -82, -56, 108, 91, 68, -87, -83, 38, -33, 2, -30, -70, 67, 57, -21, 53, 17, 104, 104, 62, -78, -8, -2, -118, -90, 81, -10, -94, 50, -19};
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
    msg.setTimeStamp(0.361894289777);
    msg.setSource(4181U);
    msg.setSourceEntity(118U);
    msg.setDestination(26932U);
    msg.setDestinationEntity(174U);
    msg.sys_src.assign("NRSTEKPANDOCPDATDCKMXIMVZASUHKCJJVTXMRXJQCGAHEYLJGGKKNEFNDSLYKFUQOHXEGZVGZQVSLGJQICDKETPMBSALRPABRSHBTWMGDHJKOQWWYVJMBZNCIAMTLGYWVWWWALWHEMZXFLHAFJXCEDKZA");
    msg.sys_dst.assign("SFWUQOCYFMTJPFEWTEOJIAEQMXQDXTOKIHKPRVLDPYNUKMSPJCXNNBVATLVWKOUIMGGZZHOAABSWRHCGFZCBUMWCECLRXFCSGVVPDRTYRAPMNDEFHRRLJINBTXRJHUVYLCLDPNIWKOLUUSKDDGKGOKFFQEOLILIESXBPUQYMYJTBAZQVASZBVDVGGZFPVZZMGYZOGANQUHKOEAMXZDXTTWNQKWNJRBADBQHUWJX");
    msg.flags = 100U;
    const char tmp_msg_0[] = {-108, -15, -80, 46, -25, -81, -46, 32, -41, 58, -77, 23, -117, 47, 86, 50, 82, -8, 54, -88, 85, 102, -95, 93, 56, 1, 1, -1, -125, -77, -43, 25, 87, 87, 124, 40, 82, -30, -92, 88, 72, 120, 84, 36, 107, 42, 23, 124, -46, -7, -93, -87, 113, 84, -32, -14, -4, -51, 124, -53, 40, -80, -89, 27, -78, -123, -35, -59, -3, -9, 40, -77, -96, 65, -33, 2, 28, 28, -94, -24, -52, 21, 119, 68, -64, 80, 116, -43, -25, 58, -48, -44, 36, -9, -128, -112, 112, -26, 55, -9, -69, -85, 74, 18, 66, -20, 32, 122, -116, -49, 25, 100, 31, 92, 48, 24, -48, -58, -19, 63, -75, -112, -86, -2, 87, 100, 60, -41, -109, 124, -100, 9, -125, -75, 122, -44, 82, 118, -21, 36, 92, 7, -123, 75, -5, -114, -114, -8, -110, -109, 15, -116, -67, -78, 15, 93, -118, -62, 55, 31, 114, -40, -78, -11, 8, -72, 2, 40, -82, 44, -22, 62, -32, -95, 2, 83, 69, 56, -99, -117, -77, -3, -113, 34, -4, -127, -65, -90, -14, 83, 58, -27, -44, 56, 56, 15, 126, -84, -13, -97, 87, 126, -117, 76, -104, -54, -22, -90, -95, 30, 1, -44, 69, -121, 84, -47, -1, -100, -91, 6, 13, -20, -74, 111, -37, -122, 86, 81, 97, -114, -50, -9, 120, -20, 37, 59, -114, -66, -100, -67, 124, 101, -71, -114, 57, 36, -102, 44, 98, -124, -93, 120, 29, -103};
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
    msg.setTimeStamp(0.572051842216);
    msg.setSource(61938U);
    msg.setSourceEntity(229U);
    msg.setDestination(47200U);
    msg.setDestinationEntity(136U);
    msg.seq = 16396U;
    msg.value = 97U;
    msg.error.assign("TYLAQWRUICWLYYFJKNQGXDHTOLPMPAQWCIFFKEEJUPVDENXOUSJHCOVLLRHBMUQYZAQHBGAHVAORTTVQLYWPDMJKJXEMOJLRBCHXCRFTOQESZPZMUABIYPKZVNTKEMEGIGXZJWAHXBNDXEWJYIZTBZGHUZMKRKYENUIQRX");

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
    msg.setTimeStamp(0.564382260794);
    msg.setSource(2925U);
    msg.setSourceEntity(50U);
    msg.setDestination(22005U);
    msg.setDestinationEntity(132U);
    msg.seq = 39524U;
    msg.value = 164U;
    msg.error.assign("INLZNTSTEXWRRGMBQMEZVOPSXRVWGTWQZMUIPSHAHFZOFAVKUWOYPSJVNJYBNYYDHCBWFYQCADESCUXKOCUPZPMSGIJWXDWMPBYDKHEADGQDOBEIXKVRYACZPDFXIZJJEVHTJXWOFKHKBYOTLOCTWPFCUGRIVZDTFMSUNGZSKERVLKIJUXGUTNFIQTVHORALS");

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
    msg.setTimeStamp(0.830532330231);
    msg.setSource(20763U);
    msg.setSourceEntity(113U);
    msg.setDestination(7990U);
    msg.setDestinationEntity(115U);
    msg.seq = 3891U;
    msg.value = 136U;
    msg.error.assign("BWPWDDXASOPHHYWXCNSZVOREOAKLITZALQNTCXKWDIKLKQZULBURVQBNDEATQUPJDAQPUJDOZHMOYFFANRMWUVBAQVYKZJEXYGLACNMLCRHPRY");

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
    msg.setTimeStamp(0.54201163345);
    msg.setSource(3154U);
    msg.setSourceEntity(124U);
    msg.setDestination(22580U);
    msg.setDestinationEntity(159U);
    msg.seq = 28706U;
    msg.sys.assign("TVJKGZHIZYNMMWBTOXNCVYQUAJSODCUFIGFMJLKIJWFQMJBNWVFASEVBRUYOJCSCBRCENXOTLUDILVYUGWKWDWTLEYUHZLRVMEQASXDQFAKZRKPMBFLHQMXQDPIISHGOZICDRJIRADAGCKWJPCQOEAHAXLPXMVPHDPPSATRTUGYYESVBITUQFHPZLGUEQFJEFBCBHVZNENRFLCINGOBOWUSWZXTDKONVHOXPLSKNXKNTYJGXK");
    msg.value = 0.0825702002747;

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
    msg.setTimeStamp(0.232323491729);
    msg.setSource(61088U);
    msg.setSourceEntity(206U);
    msg.setDestination(33624U);
    msg.setDestinationEntity(179U);
    msg.seq = 25551U;
    msg.sys.assign("SEDBZRJORAIAKWVIICULQOVAVDRSGGSIZKSXMXTXMQCOLEWPKZMHTUOZKBOCBDPRAQWOZNHEGLQXYMHWSBFAFNDKYNJRENWHEZNULQOQAMXCWMMVHDBBFMYCVBKJSRYDUDAIRLUUHTCCSYEAJIRUBFVVSPZHDPGEPABEYGJJAQYXTTPJHDFTVQLFH");
    msg.value = 0.437142658874;

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
    msg.setTimeStamp(0.818885848409);
    msg.setSource(27413U);
    msg.setSourceEntity(199U);
    msg.setDestination(43141U);
    msg.setDestinationEntity(134U);
    msg.seq = 18748U;
    msg.sys.assign("ZACEDTJDLARFMDPLDQHJMTKPVWSFNGHBFVQ");
    msg.value = 0.817329559774;

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
    msg.setTimeStamp(0.308990749088);
    msg.setSource(34534U);
    msg.setSourceEntity(102U);
    msg.setDestination(2604U);
    msg.setDestinationEntity(147U);
    msg.action = 65U;
    msg.longain = 0.610300552365;
    msg.latgain = 0.861991017849;
    msg.bondthick = 3149618503U;
    msg.leadgain = 0.537680951409;
    msg.deconflgain = 0.570278522591;

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
    msg.setTimeStamp(0.205733708879);
    msg.setSource(42215U);
    msg.setSourceEntity(221U);
    msg.setDestination(19836U);
    msg.setDestinationEntity(49U);
    msg.action = 249U;
    msg.longain = 0.620946185689;
    msg.latgain = 0.153457761207;
    msg.bondthick = 994289399U;
    msg.leadgain = 0.990908325577;
    msg.deconflgain = 0.0886578449755;

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
    msg.setTimeStamp(0.148337259413);
    msg.setSource(41753U);
    msg.setSourceEntity(118U);
    msg.setDestination(47244U);
    msg.setDestinationEntity(170U);
    msg.action = 202U;
    msg.longain = 0.0299541720376;
    msg.latgain = 0.488886694753;
    msg.bondthick = 3897722550U;
    msg.leadgain = 0.227118742533;
    msg.deconflgain = 0.756658966668;

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
    msg.setTimeStamp(0.763614067293);
    msg.setSource(62739U);
    msg.setSourceEntity(131U);
    msg.setDestination(42060U);
    msg.setDestinationEntity(169U);
    msg.err_mean = 0.200257402177;
    msg.dist_min_abs = 0.692980043284;
    msg.dist_min_mean = 0.892707399487;

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
    msg.setTimeStamp(0.633257424776);
    msg.setSource(37370U);
    msg.setSourceEntity(221U);
    msg.setDestination(42240U);
    msg.setDestinationEntity(4U);
    msg.err_mean = 0.5927214733;
    msg.dist_min_abs = 0.819408923637;
    msg.dist_min_mean = 0.79049619556;

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
    msg.setTimeStamp(0.317876235851);
    msg.setSource(25595U);
    msg.setSourceEntity(135U);
    msg.setDestination(33683U);
    msg.setDestinationEntity(96U);
    msg.err_mean = 0.681540601399;
    msg.dist_min_abs = 0.730468990419;
    msg.dist_min_mean = 0.510323766246;

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
    msg.setTimeStamp(0.0635046328028);
    msg.setSource(36223U);
    msg.setSourceEntity(205U);
    msg.setDestination(40758U);
    msg.setDestinationEntity(37U);
    msg.action = 16U;
    msg.lon_gain = 0.821937090536;
    msg.lat_gain = 0.562721403698;
    msg.bond_thick = 0.0357102735975;
    msg.lead_gain = 0.496490637935;
    msg.deconfl_gain = 0.245237709042;
    msg.accel_switch_gain = 0.494934844821;
    msg.safe_dist = 0.782814304813;
    msg.deconflict_offset = 0.0267177594226;
    msg.accel_safe_margin = 0.691559226688;
    msg.accel_lim_x = 0.762808593142;

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
    msg.setTimeStamp(0.500677157657);
    msg.setSource(44045U);
    msg.setSourceEntity(114U);
    msg.setDestination(58846U);
    msg.setDestinationEntity(95U);
    msg.action = 228U;
    msg.lon_gain = 0.467873544993;
    msg.lat_gain = 0.751398245871;
    msg.bond_thick = 0.459749886618;
    msg.lead_gain = 0.531377622857;
    msg.deconfl_gain = 0.298109464316;
    msg.accel_switch_gain = 0.355082402976;
    msg.safe_dist = 0.409425897663;
    msg.deconflict_offset = 0.494353844673;
    msg.accel_safe_margin = 0.951522823298;
    msg.accel_lim_x = 0.99051890923;

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
    msg.setTimeStamp(0.502590223939);
    msg.setSource(52733U);
    msg.setSourceEntity(219U);
    msg.setDestination(10238U);
    msg.setDestinationEntity(7U);
    msg.action = 148U;
    msg.lon_gain = 0.517012056735;
    msg.lat_gain = 0.0464839211157;
    msg.bond_thick = 0.0550313098116;
    msg.lead_gain = 0.247628982061;
    msg.deconfl_gain = 0.399189752014;
    msg.accel_switch_gain = 0.828529459314;
    msg.safe_dist = 0.191397652555;
    msg.deconflict_offset = 0.318936137374;
    msg.accel_safe_margin = 0.613998388426;
    msg.accel_lim_x = 0.505788050523;

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
    msg.setTimeStamp(0.934082429225);
    msg.setSource(57650U);
    msg.setSourceEntity(163U);
    msg.setDestination(28475U);
    msg.setDestinationEntity(237U);
    msg.type = 175U;
    msg.op = 60U;
    msg.err_mean = 0.169660737338;
    msg.dist_min_abs = 0.0805801030251;
    msg.dist_min_mean = 0.732011187955;
    msg.roll_rate_mean = 0.807086914752;
    msg.time = 0.0586902960132;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 118U;
    tmp_msg_0.lon_gain = 0.850865013463;
    tmp_msg_0.lat_gain = 0.973893194915;
    tmp_msg_0.bond_thick = 0.890810052451;
    tmp_msg_0.lead_gain = 0.388075579815;
    tmp_msg_0.deconfl_gain = 0.231256272346;
    tmp_msg_0.accel_switch_gain = 0.435011925861;
    tmp_msg_0.safe_dist = 0.89336505299;
    tmp_msg_0.deconflict_offset = 0.73741475299;
    tmp_msg_0.accel_safe_margin = 0.194465383101;
    tmp_msg_0.accel_lim_x = 0.655066909906;
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
    msg.setTimeStamp(0.41211421478);
    msg.setSource(2580U);
    msg.setSourceEntity(77U);
    msg.setDestination(42482U);
    msg.setDestinationEntity(207U);
    msg.type = 13U;
    msg.op = 69U;
    msg.err_mean = 0.901590462341;
    msg.dist_min_abs = 0.115629405368;
    msg.dist_min_mean = 0.271587821719;
    msg.roll_rate_mean = 0.418258915301;
    msg.time = 0.748255894433;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 124U;
    tmp_msg_0.lon_gain = 0.414025880299;
    tmp_msg_0.lat_gain = 0.305566716667;
    tmp_msg_0.bond_thick = 0.74041533861;
    tmp_msg_0.lead_gain = 0.342796893602;
    tmp_msg_0.deconfl_gain = 0.771418601603;
    tmp_msg_0.accel_switch_gain = 0.930913181302;
    tmp_msg_0.safe_dist = 0.323272531424;
    tmp_msg_0.deconflict_offset = 0.103839798212;
    tmp_msg_0.accel_safe_margin = 0.48690940062;
    tmp_msg_0.accel_lim_x = 0.913209416718;
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
    msg.setTimeStamp(0.342925290581);
    msg.setSource(41497U);
    msg.setSourceEntity(21U);
    msg.setDestination(51269U);
    msg.setDestinationEntity(103U);
    msg.type = 237U;
    msg.op = 249U;
    msg.err_mean = 0.537896217073;
    msg.dist_min_abs = 0.506952491136;
    msg.dist_min_mean = 0.907590561431;
    msg.roll_rate_mean = 0.488038619218;
    msg.time = 0.069576469576;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 63U;
    tmp_msg_0.lon_gain = 0.958383304031;
    tmp_msg_0.lat_gain = 0.872176285601;
    tmp_msg_0.bond_thick = 0.973550197782;
    tmp_msg_0.lead_gain = 0.612729214482;
    tmp_msg_0.deconfl_gain = 0.700041942478;
    tmp_msg_0.accel_switch_gain = 0.641960147744;
    tmp_msg_0.safe_dist = 0.739158356401;
    tmp_msg_0.deconflict_offset = 0.0344613690959;
    tmp_msg_0.accel_safe_margin = 0.789979454953;
    tmp_msg_0.accel_lim_x = 0.100823513353;
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
    msg.setTimeStamp(0.0599509128404);
    msg.setSource(55728U);
    msg.setSourceEntity(154U);
    msg.setDestination(60467U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.668263236517;
    msg.lon = 0.651493563871;
    msg.eta = 3056096504U;
    msg.duration = 41921U;

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
    msg.setTimeStamp(0.323320789836);
    msg.setSource(18679U);
    msg.setSourceEntity(58U);
    msg.setDestination(11245U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.510330627613;
    msg.lon = 0.328455821071;
    msg.eta = 750032043U;
    msg.duration = 18468U;

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
    msg.setTimeStamp(0.740406753931);
    msg.setSource(54483U);
    msg.setSourceEntity(215U);
    msg.setDestination(147U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.0495354408489;
    msg.lon = 0.586253022748;
    msg.eta = 1374035645U;
    msg.duration = 41023U;

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
    msg.setTimeStamp(0.708436991312);
    msg.setSource(10931U);
    msg.setSourceEntity(227U);
    msg.setDestination(32572U);
    msg.setDestinationEntity(240U);
    msg.plan_id = 50934U;

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
    msg.setTimeStamp(0.115522248071);
    msg.setSource(30385U);
    msg.setSourceEntity(218U);
    msg.setDestination(61639U);
    msg.setDestinationEntity(112U);
    msg.plan_id = 64319U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.823869471231;
    tmp_msg_0.lon = 0.143334700525;
    tmp_msg_0.eta = 2968152860U;
    tmp_msg_0.duration = 34637U;
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
    msg.setTimeStamp(0.70380179036);
    msg.setSource(19693U);
    msg.setSourceEntity(26U);
    msg.setDestination(38767U);
    msg.setDestinationEntity(3U);
    msg.plan_id = 11765U;

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
    msg.setTimeStamp(0.160918548866);
    msg.setSource(54681U);
    msg.setSourceEntity(197U);
    msg.setDestination(63567U);
    msg.setDestinationEntity(158U);
    msg.type = 214U;
    msg.command = 152U;
    msg.settings.assign("XWHTYZHQAKDINSGBOGSXPAGWFACIWYFTZJACNEWORYLNYOBHVDWEKBINGOQKSAMRKHVRNAMPIRQSUAVAFLJXPZTNLNHHDNKWHMBLACECOKZPMEECOGDMYZIIGGRYPSQXQBUZSREGLJZWVSVQEDYNLUTCFQWXXBURSFCZCSVPWVBDHJCERIFOMUDORGMMDKJKTKJUBTPVFOIMVPUCPE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 19942U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KDAJZMVCMXLOUWMQDTFHRYXKKREAUKHJRVKGADFSKTZJPKDTFHYJOZRNWQQMOPRASIFCUVAPDNAIUHLWLQFTNDIIOFTCOZMUQCYFDYRVFUXJDOPNBVVBIZLJCXPEVKTEJGFYFCMXGGHMXSQGNUNGBWVHLWDVUTHIXPKTBCSKEYUABNGMZUIRWABWSXBNJSWTILBYBQQZDORCBZEYHSSNHPEEGSXVINREIXPAYQMWROWOZEHGYCZLCLME");

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
    msg.setTimeStamp(0.114140073226);
    msg.setSource(15798U);
    msg.setSourceEntity(234U);
    msg.setDestination(55502U);
    msg.setDestinationEntity(107U);
    msg.type = 34U;
    msg.command = 111U;
    msg.settings.assign("XBBYPFQAEJLDBOKXWCSRJACKJFTNTZQHFIESWVAPRGLUDEARYIKYBTJVGXVQGCDIPIYMNLVSPIOHVUETCZPPQOUFWMJYKBIF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 54391U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GNMZTWDPXRWZPBTXBZOPXIRJATDSJFHQNORSEXMBHHLZDJISCJSPVLWQJMKHPNOLHWTBSUGCZLFXYYVNQBKACDRXIFVOCCQFDTWQKPDRNLEUFLZFYQEYWVHWNIPZBALKZPNPEVWGEFITAOHRQAWOTOME");

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
    msg.setTimeStamp(0.53338283822);
    msg.setSource(6615U);
    msg.setSourceEntity(236U);
    msg.setDestination(35908U);
    msg.setDestinationEntity(144U);
    msg.type = 109U;
    msg.command = 34U;
    msg.settings.assign("YYGBEOYMZTGVFEKMMREPTXNTRULJDSAQM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 48801U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OLNCWTDMKVVRSUQEHPEARCSIAEGZQJQJJYSXPXQYHIOVVMLWRMXKKETPGUDLINDMDHSVKAFEKOOULFXNJUDRRGJUHNLNIFTJYUGTXBAZCKYVGDRDNZCUHPYDZBKINTKBLEBSBBXMZIDROHYCXUETYRUAPWPWULWFPQCOARFSMXMGJAQYPBSGFWOLIVSPGVAMWPWZQZ");

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
    msg.setTimeStamp(0.162885870993);
    msg.setSource(45849U);
    msg.setSourceEntity(72U);
    msg.setDestination(22045U);
    msg.setDestinationEntity(73U);
    msg.state = 143U;
    msg.plan_id = 51726U;
    msg.wpt_id = 50U;
    msg.settings_chk = 5187U;

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
    msg.setTimeStamp(0.488957180648);
    msg.setSource(40243U);
    msg.setSourceEntity(43U);
    msg.setDestination(27518U);
    msg.setDestinationEntity(250U);
    msg.state = 109U;
    msg.plan_id = 64512U;
    msg.wpt_id = 188U;
    msg.settings_chk = 63559U;

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
    msg.setTimeStamp(0.460657914308);
    msg.setSource(35421U);
    msg.setSourceEntity(48U);
    msg.setDestination(18530U);
    msg.setDestinationEntity(244U);
    msg.state = 27U;
    msg.plan_id = 25979U;
    msg.wpt_id = 120U;
    msg.settings_chk = 38853U;

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
    msg.setTimeStamp(0.445581322881);
    msg.setSource(34473U);
    msg.setSourceEntity(148U);
    msg.setDestination(51401U);
    msg.setDestinationEntity(137U);
    msg.uid = 173U;
    msg.frag_number = 225U;
    msg.num_frags = 198U;
    const char tmp_msg_0[] = {45, 10, -109, 16, 90, 36, -88, 36, 65, 86, -116, -83, 97, -51, 15, -74, -119, -116, 23, 121, 48, 79, -67, 89, -52, 89, 42, -38, 13, -39, 92, 103, -95, 50, 38, -101, -104, -18, 88, 124, 79, -25, -99, -111, -97, -70, 120, -55, 72, -50, -103, -70, -38, -24, 30, 34, -4, -4, -19, -38, -15, -65, -9, -104, -125, -122, -31, -58, 73, -57, 32, 117, -106, -5, 103, 51, -17, -110, 97, 117, 25, -30, -62, 53, -36, 73, -105, -86, -53, -84, -59, 125, 70, -99, 33, -25, 102, -90, -60, 93, 37, -81, -75, -73, -71, -56, 14};
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
    msg.setTimeStamp(0.357727685526);
    msg.setSource(17347U);
    msg.setSourceEntity(10U);
    msg.setDestination(15475U);
    msg.setDestinationEntity(115U);
    msg.uid = 48U;
    msg.frag_number = 169U;
    msg.num_frags = 245U;
    const char tmp_msg_0[] = {-103, 41, -43, 65, 47, -69, 12, -9, 68, 35, 69, -62, 20, -27, -48, 6, -28, -71, -29, 121, -41, 29, -79, -33, -102, 45, 14, -33, -120, 86, 41, -107, 52, 110, -37, 65, 3, 16, -93, -48, -94, 62, 52, -127, 53, -13, 87, -98, 104, -15, 26, -40, -72, -55, 58, 95, 99, 110, 34, 106, 18, -32, -96, 10, 126, -26, -89, -31};
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
    msg.setTimeStamp(0.804873207086);
    msg.setSource(2990U);
    msg.setSourceEntity(23U);
    msg.setDestination(55840U);
    msg.setDestinationEntity(51U);
    msg.uid = 142U;
    msg.frag_number = 78U;
    msg.num_frags = 162U;
    const char tmp_msg_0[] = {-73, 86, 78, 9, 46, 99, 17, 98, 100, 98, 7, 82, -1, 6, 48, -93, -84, 123, -64, -37, 5, -57, -62, -10, 13, -62, 8, 115};
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
    msg.setTimeStamp(0.74632266102);
    msg.setSource(31870U);
    msg.setSourceEntity(139U);
    msg.setDestination(19496U);
    msg.setDestinationEntity(72U);
    msg.content_type.assign("YDPUKKPSWRGENUUSUWSOTOGJPVFEKZHVDLIMDZBAOPZBNOWRDW");
    const char tmp_msg_0[] = {98, 64, -80, 37, 80, 13, -92, -36, -34, -81, 22, 106, -26, -115, -36, -128, 50, 48, 17, -107, 59, -72, -31, 20, -24, 27, 105, 3, -101, -24, -106, 34, -4, 90, -51, 10, 44, -50, -43, 96, -6, -35, -31, 72, 70, 109, -122, 101, 5, -6, -8, 76, 52, 38, 16, -84, -123, -87, -89, -11, -115, 70, -84, 23, -20, 70, 34, -126, -40, 82, -17, -108, -113, 86, 70, 117, -33, 67, -97, -25, 67, -4, -80, 75, 44, -51, 51, -110, -95, 84, 56, 19, -32, -111, 74, -44, -34, -14, -42, 16, -122, 8, -1, 83, -47, -78, -4, -51, 123, 22, 58, -21, 98, 117, 116, -128, -88, -116, 11, -32, 83, 17, -16, -30, -123, 94, -77, 124, -70, 109, 109, -106, -8, -27, -104, -59, -21, -110, -49, 14, 63};
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
    msg.setTimeStamp(0.596831941238);
    msg.setSource(55812U);
    msg.setSourceEntity(75U);
    msg.setDestination(63668U);
    msg.setDestinationEntity(61U);
    msg.content_type.assign("FQDLEGCXYQAFIEBIMPRDZRTGZHOHKBAZNZKJOYGOVSURXVECMAKPYXRIGKMXSFVWNLSGJWKERBFZQAWUDEQDU");
    const char tmp_msg_0[] = {-55, 82, 23, -127, -11, -88, -67, 80, 25, 48, 74, 96, 67, -120, -43, -110, 58, -29, -127, -77, -1, 18, -24, -81, 41, -19, -113, -42, 70, 23, -75, -88, -80, -15, 44, 52, 93, -63, 87, 78, 72, 22, 42, 101, -94, 104, -69, 115, 7, 104, -91, -5, 62, 9, -80, -92, 77, 5, -36, -84, 122, 17, -125, -16, 112, -63, 67, -1, 50, 90, -127, -2, -47, 1, -64, 3, -57, 100, 19, -124, 96, 105, 80, -86, 47, -91, 47, -11, -35, -126, 105};
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
    msg.setTimeStamp(0.681593867809);
    msg.setSource(25714U);
    msg.setSourceEntity(146U);
    msg.setDestination(35199U);
    msg.setDestinationEntity(131U);
    msg.content_type.assign("NWYSHCGWYBSGDPVIXCSWEUYAVFNLMPHZELQKPQHJKWTLHEEEHCATOUENTQCXZZUGMUBLVCBZSAOABPBMRLPANUYRJWVTTRDF");
    const char tmp_msg_0[] = {-67, 0, -117, -90, 56, 59, -127, 54, -125, 38, -59, -14, 7, 63, -112, 117, -122, -9, -98, 14, 39, 63, 64, 23, -102, -101, -122, 5, -88, 51, -7, -34, -69, 62, -123, -85, 112, 119, 11, -125, -127, 26, 25, 122, -4, 113, 11, 121, 7, 99, -36, -21, 10, 73, -6, 88, 90, 22, 36, 99, 80, 53, 106, -104, 21, -42, 40, 80, -3, -2, -109, 105, 40, -85, 58, 28, 0, -100, -47, 65, -14, -33, 24, 103, -17, 38, -97, -112, -55, -35, 63, -32, -31, 66, -46, -40, -58, -113, 81, -35, 78, -124, -46, 125, -74, 54, 73, 3, 59, 106, -113, -62, -78, -119, 57, 41, 84, 8, -53, -11, -103, -72, 109, -34, 125, 9, -31, 25, 71, -56, 119, 96, -36, 15, 74, 55, -127, -102, 80, -82, 107, 30, 64, -9, 37, -2, -15, 4, -98, -73, 31, 15, -100, 5, -31, -60, -103, -119, -32, -79, 107, -36, 98, -23, -39, -112, -84, -50, -23, -78, -3, 60, -8, 26, 124, 63, -21, -61, -6, 102, 74, 98, -52, 106, 19, -101, -122, 72, 115, 48, 78, 90, -121, 18, 19, -93, 85, 111, -28, -100, -60, -71, 42, -106, 122, -59, -64, -33, -100, -44, 20, 58, 41, 54, 6, -63, -7, 102, -117, -57, -95, -60, -12, 106, 125, -36, 3, 84, 23, -35, -58, -89, -111, -94, -114, -30, 83, 94, -51, -74, -95, 60, -61, 63, -1, 118, 111, 49, 44, -73};
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
    msg.setTimeStamp(0.884297445133);
    msg.setSource(8392U);
    msg.setSourceEntity(200U);
    msg.setDestination(10492U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.279296635435);
    msg.setSource(10921U);
    msg.setSourceEntity(110U);
    msg.setDestination(51944U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.553968771895);
    msg.setSource(5094U);
    msg.setSourceEntity(130U);
    msg.setDestination(49047U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.366989646301);
    msg.setSource(57319U);
    msg.setSourceEntity(165U);
    msg.setDestination(39245U);
    msg.setDestinationEntity(174U);
    msg.target = 33922U;
    msg.bearing = 0.124866999333;
    msg.elevation = 0.455011907078;

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
    msg.setTimeStamp(0.810209802245);
    msg.setSource(12807U);
    msg.setSourceEntity(38U);
    msg.setDestination(55329U);
    msg.setDestinationEntity(67U);
    msg.target = 36272U;
    msg.bearing = 0.173883854866;
    msg.elevation = 0.228813176291;

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
    msg.setTimeStamp(0.977754241722);
    msg.setSource(26831U);
    msg.setSourceEntity(166U);
    msg.setDestination(8971U);
    msg.setDestinationEntity(13U);
    msg.target = 59511U;
    msg.bearing = 0.307499434288;
    msg.elevation = 0.0215477142875;

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
    msg.setTimeStamp(0.850827192273);
    msg.setSource(29444U);
    msg.setSourceEntity(31U);
    msg.setDestination(20636U);
    msg.setDestinationEntity(115U);
    msg.target = 51514U;
    msg.x = 0.23554317246;
    msg.y = 0.85226527734;
    msg.z = 0.0253773865419;

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
    msg.setTimeStamp(0.0461252178677);
    msg.setSource(41725U);
    msg.setSourceEntity(13U);
    msg.setDestination(30879U);
    msg.setDestinationEntity(94U);
    msg.target = 49868U;
    msg.x = 0.980536860423;
    msg.y = 0.660992567168;
    msg.z = 0.678858777015;

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
    msg.setTimeStamp(0.481813753456);
    msg.setSource(8130U);
    msg.setSourceEntity(22U);
    msg.setDestination(9063U);
    msg.setDestinationEntity(96U);
    msg.target = 19711U;
    msg.x = 0.0766928855466;
    msg.y = 0.824632956252;
    msg.z = 0.514128760269;

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
    msg.setTimeStamp(0.999548784487);
    msg.setSource(63999U);
    msg.setSourceEntity(154U);
    msg.setDestination(20412U);
    msg.setDestinationEntity(162U);
    msg.target = 51808U;
    msg.lat = 0.768676292758;
    msg.lon = 0.467985228589;
    msg.z_units = 140U;
    msg.z = 0.597806540771;

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
    msg.setTimeStamp(0.717839677229);
    msg.setSource(45004U);
    msg.setSourceEntity(229U);
    msg.setDestination(17551U);
    msg.setDestinationEntity(46U);
    msg.target = 29123U;
    msg.lat = 0.561605202011;
    msg.lon = 0.588820470518;
    msg.z_units = 227U;
    msg.z = 0.0359611904918;

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
    msg.setTimeStamp(0.508976193114);
    msg.setSource(24214U);
    msg.setSourceEntity(137U);
    msg.setDestination(41002U);
    msg.setDestinationEntity(248U);
    msg.target = 1438U;
    msg.lat = 0.337832590011;
    msg.lon = 0.24254899958;
    msg.z_units = 157U;
    msg.z = 0.350552192064;

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
    msg.setTimeStamp(0.0892830198868);
    msg.setSource(44335U);
    msg.setSourceEntity(16U);
    msg.setDestination(48024U);
    msg.setDestinationEntity(174U);
    msg.locale.assign("FUSJQEYVUHKULNICMFBTZQPFGJVSLDOPTRFGIMLJSWYNNAQCNYDRZJDARHENVXPYHJTZAXPZNKPLDXEZMCGTRV");
    const char tmp_msg_0[] = {-16, -54, -17, -52, 117, -39, -90, 60, 93, 46, -33, -122, 97, 78, 98, -88, 113, -82, -107, -88, -61, 105, -104, 34, -68, -10, -47, 114, -97, -96, 22, 89, 90, 123, -1, 32, 49, -45, -61, 33, -69, -106, 91, -52, -10, 49, 100, 49, 90, 87, -1, -46, 105, 70, -92, 117, -15, -36, 111, -39, 102, 39, 14, -113, 98};
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
    msg.setTimeStamp(0.0806916587878);
    msg.setSource(56084U);
    msg.setSourceEntity(177U);
    msg.setDestination(53997U);
    msg.setDestinationEntity(5U);
    msg.locale.assign("WJHRXUBTMCCVMKQLEGJRQVYFPHAIMFCDOQITKMZDKNKPCYDEYGRHCHXWXDRJHJGCTCITSYPUCLKBSNHXWSAZPGMXNVVOEFPFLZZMCEGIEYSLOFLBNIGQGYRIKXZRVVUWSUNANKNF");
    const char tmp_msg_0[] = {-110, -121, -9, -101, -1, 23, -9, 67, -56, -73, -99, -121, 61, -17, -22, -80, -27, 40, -15, 33, 47, -108, -79, -69, -117, -73, -34, 126, 80, 120, -10, -127, -125, 78, -121, -124, 47, 84, 2, 6, 22, 96, -12, -120, -46, 72, -105, -52, 97, -25, -25, 28, 126, 119, 53, 20, -87, -83, 52, -20, -37, -65, 3, 48, 78, -24, -110, -14, -49, -105, -88, -14, -10, 48, 31, 51, 85, 119, 68, -41, -128, -54, 68, -109, -116, 88, -124, -53, -112, -99, -5, -117, -18, -60, -108, 29, -109, -37, -88, 107, 52, 72, 79, -30, 125, 82, 31, -108, -33, -23, -20, -118, 68, 55, 101, 110, -85, -14, -122, 70, 74, -22, -87, -37, 117, 0, 123, -71, -25, -61, -105, -44, -12, 11, 3, -23, 118, -8, -81, -99, 89, 66, -103, 81, -68, 124, 121, -46, -126, 101, -103, 89, -58, 114, 20, 96};
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
    msg.setTimeStamp(0.466858518955);
    msg.setSource(18215U);
    msg.setSourceEntity(155U);
    msg.setDestination(23792U);
    msg.setDestinationEntity(168U);
    msg.locale.assign("TZLXJXABWHREQACCNSHVWJFXJVELFVRUYMUHUYRZMGBRMEUJRFBJRSMYIZLUGNOZCOLFFIROASEDDAKYOESJECEYKPYCVNAWNDQQIZTSPJDWPQORBPGYBXQGWSRTAWGIWTWALXQEANCPGMGKFWMNOMOENPIUSYKLXVQTKIWXOBZUANUXJKKXXUHLNSMQNDHZTQLBPGZHQRZFVCVVLYPEITHDIBOBHKSAZJI");
    const char tmp_msg_0[] = {-58, -128, -18, -4, -47, -90, 126, -22, 98, 87, 112, -55, 48, 70, -123, -77, -56, -127, 123, -59, -44, -118, -19, -88, 41, -85, -74, 41, 12, 78, 100, 92, 79, 60, -44, 84, 35, -23, -88, 81, -14, -66, 84, 58, 123, -113, -20, 72, 118, -127, 68, 3, 72, -67, -8, 104, -92, 13, 46, -119, 39, -51, -84, -31, 8, -59, 52, 19, -104, 109, 66, 124, -7, -59, 66, -74, 67, 31, 23, 113, 5, 11, 89, -107, 102, 71, 74, -99, 123, 125, 3, -86, 1, -116, -122, -42, -80, -57, -128, 29};
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
    msg.setTimeStamp(0.0767434172544);
    msg.setSource(32855U);
    msg.setSourceEntity(229U);
    msg.setDestination(10927U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.574633072834);
    msg.setSource(13311U);
    msg.setSourceEntity(163U);
    msg.setDestination(55803U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.431078805591);
    msg.setSource(25783U);
    msg.setSourceEntity(67U);
    msg.setDestination(27884U);
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
    msg.setTimeStamp(0.594582902227);
    msg.setSource(47614U);
    msg.setSourceEntity(186U);
    msg.setDestination(64614U);
    msg.setDestinationEntity(155U);
    msg.camid = 212U;
    msg.x = 34019U;
    msg.y = 17406U;

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
    msg.setTimeStamp(0.0105185923146);
    msg.setSource(945U);
    msg.setSourceEntity(85U);
    msg.setDestination(64629U);
    msg.setDestinationEntity(134U);
    msg.camid = 112U;
    msg.x = 15521U;
    msg.y = 29334U;

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
    msg.setTimeStamp(0.709806001876);
    msg.setSource(27075U);
    msg.setSourceEntity(161U);
    msg.setDestination(4384U);
    msg.setDestinationEntity(24U);
    msg.camid = 122U;
    msg.x = 5813U;
    msg.y = 32515U;

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
    msg.setTimeStamp(0.75466195106);
    msg.setSource(16615U);
    msg.setSourceEntity(158U);
    msg.setDestination(45023U);
    msg.setDestinationEntity(8U);
    msg.camid = 128U;
    msg.x = 37646U;
    msg.y = 46805U;

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
    msg.setTimeStamp(0.161436246242);
    msg.setSource(20623U);
    msg.setSourceEntity(66U);
    msg.setDestination(23363U);
    msg.setDestinationEntity(0U);
    msg.camid = 46U;
    msg.x = 12883U;
    msg.y = 15475U;

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
    msg.setTimeStamp(0.612932693078);
    msg.setSource(9946U);
    msg.setSourceEntity(50U);
    msg.setDestination(32667U);
    msg.setDestinationEntity(8U);
    msg.camid = 80U;
    msg.x = 14232U;
    msg.y = 5449U;

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
    msg.setTimeStamp(0.0119827179436);
    msg.setSource(8502U);
    msg.setSourceEntity(12U);
    msg.setDestination(44532U);
    msg.setDestinationEntity(239U);
    msg.tracking = 186U;
    msg.lat = 0.266859440662;
    msg.lon = 0.0681286298017;
    msg.x = 0.850399280974;
    msg.y = 0.501915378121;
    msg.z = 0.346685747422;

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
    msg.setTimeStamp(0.202931314118);
    msg.setSource(3743U);
    msg.setSourceEntity(125U);
    msg.setDestination(33794U);
    msg.setDestinationEntity(114U);
    msg.tracking = 108U;
    msg.lat = 0.0557139048487;
    msg.lon = 0.673723374511;
    msg.x = 0.639151797992;
    msg.y = 0.850302290723;
    msg.z = 0.567869646935;

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
    msg.setTimeStamp(0.952985498686);
    msg.setSource(7743U);
    msg.setSourceEntity(101U);
    msg.setDestination(49723U);
    msg.setDestinationEntity(122U);
    msg.tracking = 248U;
    msg.lat = 0.930674254233;
    msg.lon = 0.610165479289;
    msg.x = 0.597282918044;
    msg.y = 0.355884867409;
    msg.z = 0.588613575743;

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
    msg.setTimeStamp(0.404729260117);
    msg.setSource(18979U);
    msg.setSourceEntity(187U);
    msg.setDestination(49464U);
    msg.setDestinationEntity(248U);
    msg.target.assign("YFKVOLGFWUPEVMCUGYDNYAWGJJKPTQFNLYCVRSPOUZGLLIXRYRBZEULWDJUIFFPUZFLEVYSNZLFGQOOBKHHDOTTKSKGIOIIZSYGHJRIABAEZUJWYTXQHKZTMGNSRTOTMWPNSCOQAAKOBNJTNILMKWZMCAWARSPXYHWFBBXERNEERVSUFIVNPAHMVBEQJCXXQARXCHXEXPQZETVIT");
    msg.lbearing = 0.786486167678;
    msg.lelevation = 0.668810648972;
    msg.bearing = 0.945058446344;
    msg.elevation = 0.196047640716;
    msg.phi = 0.452974704445;
    msg.theta = 0.369766121784;
    msg.psi = 0.43822924673;
    msg.accuracy = 0.230575599753;

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
    msg.setTimeStamp(0.19246792972);
    msg.setSource(47554U);
    msg.setSourceEntity(95U);
    msg.setDestination(6665U);
    msg.setDestinationEntity(57U);
    msg.target.assign("ZAIUFEFORBKAA");
    msg.lbearing = 0.168584582563;
    msg.lelevation = 0.403752864662;
    msg.bearing = 0.73060499952;
    msg.elevation = 0.974090492102;
    msg.phi = 0.700461580518;
    msg.theta = 0.05005442963;
    msg.psi = 0.541254199354;
    msg.accuracy = 0.959348625702;

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
    msg.setTimeStamp(0.386256694073);
    msg.setSource(60587U);
    msg.setSourceEntity(72U);
    msg.setDestination(41179U);
    msg.setDestinationEntity(114U);
    msg.target.assign("JLFFCTWVMHSKVBRDQAAWPTADBXYVBHZQGYLZYAEPOTXQOSFJPENRLEYNIGCZACJPWVVGZQAXLLFZJJOOKYRFMSMKDOXKLCBMICUFODJHCMVWAWNHSHJBWTGADGXVIKUEEQDZZDEKGPBQWIHVDUTSROUBEPBMANANCSSIHVLHGIQFYCIYWPLNUGNWCKVCRNTRDJBOXUFILMUJOEXIFR");
    msg.lbearing = 0.427392244343;
    msg.lelevation = 0.00281257750912;
    msg.bearing = 0.790239033011;
    msg.elevation = 0.120364613482;
    msg.phi = 0.795426670815;
    msg.theta = 0.54728295433;
    msg.psi = 0.299435346287;
    msg.accuracy = 0.625838162697;

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
    msg.setTimeStamp(0.856036970628);
    msg.setSource(55872U);
    msg.setSourceEntity(191U);
    msg.setDestination(58018U);
    msg.setDestinationEntity(14U);
    msg.target.assign("WKVGGUYEKCVZEPHJDNCJFGPNLRFSRLRNXDLLKLIBVEMDWLAZUTJMPZASQLCZBJQNVWKLHNMIMQVDFMVFYYDTFGMZNQOZAWYR");
    msg.x = 0.778560522771;
    msg.y = 0.808572938861;
    msg.z = 0.0427716520292;
    msg.n = 0.795831257315;
    msg.e = 0.893915044332;
    msg.d = 0.140673720687;
    msg.phi = 0.788033574074;
    msg.theta = 0.660476424048;
    msg.psi = 0.33451508952;
    msg.accuracy = 0.62451860335;

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
    msg.setTimeStamp(0.976483728651);
    msg.setSource(5595U);
    msg.setSourceEntity(136U);
    msg.setDestination(41154U);
    msg.setDestinationEntity(1U);
    msg.target.assign("ZSOKVVESYOBMRRCTYILUIADSAJUNMBTTJTZEJFPLBQNUGHHIYDCFKZBGOZLSLYRLPRFOPGVBHFEBHUNIIFWQSMXOSWCORMVJWDWVBAMKCQXJKDUOYRUYRYWPJAHWJZLCXDBZQNCSXDXYMESKSJVKPREXKNXDCHNACTTKYSZIDEHHEIBGGMATXODOGFVRRWDPMUAIVGZEOIGVYCXQUPGNAUWQQQNNV");
    msg.x = 0.223376855716;
    msg.y = 0.937819402308;
    msg.z = 0.752419210499;
    msg.n = 0.812584878484;
    msg.e = 0.684014961451;
    msg.d = 0.893960725213;
    msg.phi = 0.315969789322;
    msg.theta = 0.426825649707;
    msg.psi = 0.986772060588;
    msg.accuracy = 0.966580808357;

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
    msg.setTimeStamp(0.653918140988);
    msg.setSource(17536U);
    msg.setSourceEntity(178U);
    msg.setDestination(32110U);
    msg.setDestinationEntity(117U);
    msg.target.assign("CQWTQNJAVZRNGOXUQUJNTYCGUMCTJIFYUGNSIDYSLZ");
    msg.x = 0.557497105708;
    msg.y = 0.947195547971;
    msg.z = 0.622772655946;
    msg.n = 0.797367787769;
    msg.e = 0.0498740952167;
    msg.d = 0.0389999966529;
    msg.phi = 0.718542118345;
    msg.theta = 0.658938235089;
    msg.psi = 0.324355510776;
    msg.accuracy = 0.771147503088;

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
    msg.setTimeStamp(0.693732881335);
    msg.setSource(51170U);
    msg.setSourceEntity(43U);
    msg.setDestination(28371U);
    msg.setDestinationEntity(84U);
    msg.target.assign("VEVTVCXANYDRCEOIWQHTTJYFVQZKDYCZEMAHRIOXRJSTWBQDLMENKGJJXNXZBBOITBBSWTPAXUQVAQVNJZDTMZGFUMEEPRUPAIHXRYYIXNSLJFMVJKGLGUIFJPABYOJBF");
    msg.lat = 0.372071122309;
    msg.lon = 0.713891566143;
    msg.z_units = 180U;
    msg.z = 0.827615159782;
    msg.accuracy = 0.0577078874968;

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
    msg.setTimeStamp(0.273663583166);
    msg.setSource(7525U);
    msg.setSourceEntity(40U);
    msg.setDestination(14650U);
    msg.setDestinationEntity(56U);
    msg.target.assign("ZMQGHNBBOHTCPTKUCXWVVSFBAJKFDADVPKGOBAWJFHSITSERNYMYHXOTQCCBOIDPQVZFVVBIXVDTPRXYWLVLGIRANWPBXHGILOOQXEOFAUWONHRLXSAREDQKBLUYNXUCGULWHEMMOZPLIZRVRPKMDGGMPDRQEFLZUILSAQSXFZCMDZSLKGVYEYNMQPUUEBSQKYOGKEWYWSMJJKZFZNHTXWNMNJFJJJZYWEIHUGCEHNAYA");
    msg.lat = 0.884315968334;
    msg.lon = 0.742850802635;
    msg.z_units = 22U;
    msg.z = 0.412690749653;
    msg.accuracy = 0.792357761345;

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
    msg.setTimeStamp(0.438034458921);
    msg.setSource(58309U);
    msg.setSourceEntity(174U);
    msg.setDestination(51011U);
    msg.setDestinationEntity(187U);
    msg.target.assign("DTXDQPMTXLZJHDVNDSMCYMFOHZSLVKJNEKGFRNWENTXBABWGURTZFCOIOIQBKGPJJJMOSKTCQLLMTBPSDGRNDFAYINGEVDYCFHNRVTTQKAWEGTEPZUXOWHRUOVDSMACNCNZCHFHWXAYYJGMOZXVMWXQURSYIFIYHBBRAQYOVWBPWPOZMRVCZREKLAPZQBIICHKFSEDWFELWFXAQLBRIOTQIJPQUGMLKXKGHLUSNPUXJDVZVUKUCEUASJYL");
    msg.lat = 0.0371253226016;
    msg.lon = 0.228776132149;
    msg.z_units = 153U;
    msg.z = 0.904382693575;
    msg.accuracy = 0.701583957203;

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
    msg.setTimeStamp(0.264562918265);
    msg.setSource(64828U);
    msg.setSourceEntity(173U);
    msg.setDestination(40625U);
    msg.setDestinationEntity(34U);
    msg.name.assign("PTTPQQORMRYFHZKFROFAIUSMRNXUXEBRHRCJIUMTQAZPSVVZZYJYTYAOLPECLIEWKGGBNMPDXMBANHILBUHUJYTSPBSDMWZOYMLTBLHYCXHSHWFJNBOICOKUBGPREWITVRZDGGSHKDCRSX");
    msg.lat = 0.483870129385;
    msg.lon = 0.333386245553;
    msg.z = 0.586407112409;
    msg.z_units = 158U;

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
    msg.setTimeStamp(0.934439555447);
    msg.setSource(40302U);
    msg.setSourceEntity(201U);
    msg.setDestination(18215U);
    msg.setDestinationEntity(225U);
    msg.name.assign("XFSKQQUNPHUFGDZGQLEMQAGVTBZMDZEZTLRSMHTLHFGVUQBAJCUZMXLSDUDMOTIPNHXFLDVCHXWXCPSXXALUIAUTBTAFWHDIIEECDVNNAOWJBASJEQVVOGTWJCJIOPABKBJVYGGWXKDKHNIPMPDYHEOSCTHZNALYRGKZGWQRTCHZRYWUW");
    msg.lat = 0.472222115344;
    msg.lon = 0.493086303571;
    msg.z = 0.269975743255;
    msg.z_units = 101U;

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
    msg.setTimeStamp(0.854954734202);
    msg.setSource(7262U);
    msg.setSourceEntity(11U);
    msg.setDestination(42227U);
    msg.setDestinationEntity(46U);
    msg.name.assign("LJNKCEDXEPPXSDOKIEDDYOHYBRADGRDSASXZMUTTPTGCQBLLGHXDSFRXFZXIQXNNBJYHQFJZQGZCZCJUGTKNBLMAKUGYVWAPGVMLWYHMGJMUBBBGYQVSHXIOEODQNDEBONUSWJKLFHEMPIAWSXQHCZYKSRCHSNAVBQIIFYUCRLAPJJIUBOQZFGEWUTLTSETNMPCIMAUORAWPHTKVEWQTJCPHLIEVP");
    msg.lat = 0.51527537539;
    msg.lon = 0.527061263088;
    msg.z = 0.108678624811;
    msg.z_units = 112U;

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
    msg.setTimeStamp(0.90027518765);
    msg.setSource(25516U);
    msg.setSourceEntity(39U);
    msg.setDestination(32894U);
    msg.setDestinationEntity(167U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.836403192666);
    msg.setSource(56901U);
    msg.setSourceEntity(55U);
    msg.setDestination(36483U);
    msg.setDestinationEntity(54U);
    msg.op = 112U;

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
    msg.setTimeStamp(0.516001220172);
    msg.setSource(44463U);
    msg.setSourceEntity(35U);
    msg.setDestination(64253U);
    msg.setDestinationEntity(233U);
    msg.op = 246U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ZMAWIJYSKFUGOPALPDMLENEGCHZACSNVSNOQHZGJJSMFABDUALZTADNKMGYWUMHEYABNUJFSVKPNTPVQEICGNXQFYRPJMYUKLBXYMLJFTKTK");
    tmp_msg_0.lat = 0.811034858061;
    tmp_msg_0.lon = 0.558672158076;
    tmp_msg_0.z = 0.266635610507;
    tmp_msg_0.z_units = 118U;
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
    msg.setTimeStamp(0.240086188337);
    msg.setSource(56081U);
    msg.setSourceEntity(232U);
    msg.setDestination(63547U);
    msg.setDestinationEntity(145U);
    msg.value = 0.00895575087787;
    msg.type = 55U;

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
    msg.setTimeStamp(0.646385049318);
    msg.setSource(42672U);
    msg.setSourceEntity(139U);
    msg.setDestination(13859U);
    msg.setDestinationEntity(90U);
    msg.value = 0.956283040117;
    msg.type = 44U;

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
    msg.setTimeStamp(0.46957905643);
    msg.setSource(54119U);
    msg.setSourceEntity(148U);
    msg.setDestination(65470U);
    msg.setDestinationEntity(178U);
    msg.value = 0.910132010503;
    msg.type = 2U;

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
    msg.setTimeStamp(0.638290792914);
    msg.setSource(45817U);
    msg.setSourceEntity(68U);
    msg.setDestination(64652U);
    msg.setDestinationEntity(11U);
    msg.value = 0.393913999593;

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
    msg.setTimeStamp(0.329397513151);
    msg.setSource(56894U);
    msg.setSourceEntity(103U);
    msg.setDestination(41410U);
    msg.setDestinationEntity(188U);
    msg.value = 0.966870878463;

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
    msg.setTimeStamp(0.544142210086);
    msg.setSource(21560U);
    msg.setSourceEntity(40U);
    msg.setDestination(10382U);
    msg.setDestinationEntity(110U);
    msg.value = 0.612162518848;

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
    msg.setTimeStamp(0.94205097279);
    msg.setSource(25639U);
    msg.setSourceEntity(68U);
    msg.setDestination(51209U);
    msg.setDestinationEntity(2U);
    msg.timestamp_last_service = 0.163896248032;
    msg.time_next_service = 0.183071686638;
    msg.time_motor_next_service = 0.745521123436;
    msg.time_idle_ground = 0.97523614185;
    msg.time_idle_air = 0.242487862414;
    msg.time_idle_water = 0.35384789347;
    msg.time_idle_underwater = 0.00412999214379;
    msg.time_idle_unknown = 0.20482894811;
    msg.time_motor_ground = 0.311930576032;
    msg.time_motor_air = 0.204117103817;
    msg.time_motor_water = 0.317443411706;
    msg.time_motor_underwater = 0.310218964888;
    msg.time_motor_unknown = 0.553802544304;
    msg.rpm_min = 24909;
    msg.rpm_max = 12962;
    msg.depth_max = 0.833500834263;

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
    msg.setTimeStamp(0.325830159346);
    msg.setSource(30267U);
    msg.setSourceEntity(145U);
    msg.setDestination(43695U);
    msg.setDestinationEntity(41U);
    msg.timestamp_last_service = 0.471177075851;
    msg.time_next_service = 0.547220687857;
    msg.time_motor_next_service = 0.728031951839;
    msg.time_idle_ground = 0.975715810297;
    msg.time_idle_air = 0.331345155225;
    msg.time_idle_water = 0.687670965155;
    msg.time_idle_underwater = 0.948721221089;
    msg.time_idle_unknown = 0.0774080015462;
    msg.time_motor_ground = 0.362334651211;
    msg.time_motor_air = 0.717983701197;
    msg.time_motor_water = 0.281113479552;
    msg.time_motor_underwater = 0.850394621706;
    msg.time_motor_unknown = 0.869667358915;
    msg.rpm_min = 25258;
    msg.rpm_max = 8814;
    msg.depth_max = 0.605811625141;

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
    msg.setTimeStamp(0.863115994774);
    msg.setSource(42584U);
    msg.setSourceEntity(58U);
    msg.setDestination(40586U);
    msg.setDestinationEntity(172U);
    msg.timestamp_last_service = 0.856980058055;
    msg.time_next_service = 0.39871828767;
    msg.time_motor_next_service = 0.521562824351;
    msg.time_idle_ground = 0.304156494909;
    msg.time_idle_air = 0.534712857483;
    msg.time_idle_water = 0.760019520598;
    msg.time_idle_underwater = 0.44193636966;
    msg.time_idle_unknown = 0.377255413266;
    msg.time_motor_ground = 0.31575075617;
    msg.time_motor_air = 0.871819168143;
    msg.time_motor_water = 0.470425621275;
    msg.time_motor_underwater = 0.380130096667;
    msg.time_motor_unknown = 0.173840494869;
    msg.rpm_min = -17804;
    msg.rpm_max = 11516;
    msg.depth_max = 0.104714876961;

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
    msg.setTimeStamp(0.421724616283);
    msg.setSource(21042U);
    msg.setSourceEntity(128U);
    msg.setDestination(33278U);
    msg.setDestinationEntity(250U);
    msg.severity = 208U;
    msg.text.assign("XTZROCIDICEZGUZQRCFQDNVWYYVPAMCXHGOCBDCELBNPLKWSAHNPRJFVJJYHLWTJDSBXKKKNMYVELTDHSOESYFBYGUOWGQRWMUWMLONLFAJEHMVOTK");

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
    msg.setTimeStamp(0.845223844316);
    msg.setSource(21457U);
    msg.setSourceEntity(209U);
    msg.setDestination(16807U);
    msg.setDestinationEntity(251U);
    msg.severity = 173U;
    msg.text.assign("WZZRHVQJCMOOMLGTXMEYEKCBHYYEAWUVGONHLDQLDOYXVWPRTPDMWAFEVJLYUSKHDDIDIJXFSHLXSSBSATNZSPBKUFLKNPCKZOCUZTPLJXAZAEDNWTJOTRTECKEZFMRNDANMVMCPLVBVCSRGNBDPWYJIAULKGIXWZVQ");

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
    msg.setTimeStamp(0.0468467599375);
    msg.setSource(57816U);
    msg.setSourceEntity(65U);
    msg.setDestination(41248U);
    msg.setDestinationEntity(37U);
    msg.severity = 187U;
    msg.text.assign("AQMHYJEKSLEVGCZDEHLSJTKGPOHZETS");

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
    msg.setTimeStamp(0.794063143573);
    msg.setSource(15634U);
    msg.setSourceEntity(41U);
    msg.setDestination(8676U);
    msg.setDestinationEntity(46U);
    msg.channel = 126;
    msg.value = -1468640822;
    msg.gain = 156U;

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
    msg.setTimeStamp(0.980498366567);
    msg.setSource(5002U);
    msg.setSourceEntity(68U);
    msg.setDestination(2886U);
    msg.setDestinationEntity(2U);
    msg.channel = -80;
    msg.value = 1752577780;
    msg.gain = 129U;

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
    msg.setTimeStamp(0.949262933561);
    msg.setSource(56638U);
    msg.setSourceEntity(5U);
    msg.setDestination(44396U);
    msg.setDestinationEntity(254U);
    msg.channel = -73;
    msg.value = 1929475377;
    msg.gain = 147U;

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
    msg.setTimeStamp(0.253258388979);
    msg.setSource(64452U);
    msg.setSourceEntity(91U);
    msg.setDestination(41217U);
    msg.setDestinationEntity(216U);
    msg.ch01 = 0.792147069561;
    msg.ch02 = 0.865872780044;
    msg.ch03 = 0.0867317536083;
    msg.ch04 = 0.52889087748;
    msg.ch05 = 0.140507420964;
    msg.ch06 = 0.827813650271;
    msg.ch07 = 0.587590323459;
    msg.ch08 = 0.19063213304;
    msg.ch09 = 0.485795473606;
    msg.ch10 = 0.419282821197;
    msg.ch11 = 0.760831504404;
    msg.ch12 = 0.948360627589;
    msg.ch13 = 0.427946584551;
    msg.ch14 = 0.913320865447;
    msg.ch15 = 0.991188380999;
    msg.ch16 = 0.123611092715;

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
    msg.setTimeStamp(0.108730435915);
    msg.setSource(65150U);
    msg.setSourceEntity(46U);
    msg.setDestination(5524U);
    msg.setDestinationEntity(100U);
    msg.ch01 = 0.964601636965;
    msg.ch02 = 0.788384616341;
    msg.ch03 = 0.506881368121;
    msg.ch04 = 0.540517454571;
    msg.ch05 = 0.136953769756;
    msg.ch06 = 0.327799075994;
    msg.ch07 = 0.0292226364631;
    msg.ch08 = 0.0417410435931;
    msg.ch09 = 0.880442716685;
    msg.ch10 = 0.705348967111;
    msg.ch11 = 0.434685247986;
    msg.ch12 = 0.571572631743;
    msg.ch13 = 0.725700765425;
    msg.ch14 = 0.615405475135;
    msg.ch15 = 0.12084479117;
    msg.ch16 = 0.465770829671;

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
    msg.setTimeStamp(0.437557652983);
    msg.setSource(14944U);
    msg.setSourceEntity(214U);
    msg.setDestination(11033U);
    msg.setDestinationEntity(16U);
    msg.ch01 = 0.243240391517;
    msg.ch02 = 0.948512301087;
    msg.ch03 = 0.654633698737;
    msg.ch04 = 0.706303918375;
    msg.ch05 = 0.0431157061431;
    msg.ch06 = 0.0735343584276;
    msg.ch07 = 0.976437825901;
    msg.ch08 = 0.0510209664973;
    msg.ch09 = 0.628270728759;
    msg.ch10 = 0.575287329129;
    msg.ch11 = 0.692532015846;
    msg.ch12 = 0.49306367692;
    msg.ch13 = 0.26814383243;
    msg.ch14 = 0.415812075258;
    msg.ch15 = 0.142727200289;
    msg.ch16 = 0.605081677082;

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

  return test.getReturnValue();
}
