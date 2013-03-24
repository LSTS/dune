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
    msg.setTimeStamp(0.4859010757769524);
    msg.setSource(14526U);
    msg.setSourceEntity(232U);
    msg.setDestination(710U);
    msg.setDestinationEntity(173U);
    msg.state = 87U;
    msg.flags = 82U;
    msg.description.assign("OJAZDNNGEITIWSKDRLPHDCAWZOXTBFODTKJBHZACXFQPDCRSHVQEUIUKBCXXCMTGGNAFPPEQFCLBQBCDGQSMVEQYLGIJZH");

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
    msg.setTimeStamp(0.9827713775785891);
    msg.setSource(31046U);
    msg.setSourceEntity(109U);
    msg.setDestination(25047U);
    msg.setDestinationEntity(199U);
    msg.state = 208U;
    msg.flags = 40U;
    msg.description.assign("RNWMXSKBPYKCOKCGVXEPFUGLXTRLTGFCZWMQAUSBARVMATUDXHALJFTQNCGXMSTWSHKVYMUCIXMWDRMIJLULNHTBUUPGWARJDMVEZHCOPBKJRRLZRAMDESYHHBRCEYLSGLOFLIKDEGDUAITFNPYXUCKFGQSEKZWFLVODGJNWDBPZJQGQWQXHYMDIZZOPXCKVDFYEWZHIIWNFISKBIJNNQRNIEYPQOAOJS");

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
    msg.setTimeStamp(0.08040663461935438);
    msg.setSource(6680U);
    msg.setSourceEntity(202U);
    msg.setDestination(40490U);
    msg.setDestinationEntity(242U);
    msg.state = 23U;
    msg.flags = 51U;
    msg.description.assign("RIZWDEPITVYSWTOBYZWALSFIUYZFFBXBGPXIDLACVJUVEUISPURAEZZTMWCUYFDXPDKPAVVNSONJJOPAQMXFKMVNCKXLAUHLBQIYHDBGGDORQQMKKLUTTAVGCFSHZERSEPTMPDRSEJBNY");

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
    msg.setTimeStamp(0.8732483409248576);
    msg.setSource(30858U);
    msg.setSourceEntity(239U);
    msg.setDestination(11491U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.5690831396015383);
    msg.setSource(47940U);
    msg.setSourceEntity(174U);
    msg.setDestination(680U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.32204200474489864);
    msg.setSource(51217U);
    msg.setSourceEntity(174U);
    msg.setDestination(59938U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.6675355585291363);
    msg.setSource(49787U);
    msg.setSourceEntity(197U);
    msg.setDestination(54341U);
    msg.setDestinationEntity(82U);
    msg.id = 182U;
    msg.label.assign("PAKXNNZYKVYLSNFJTYRMDIZSCGXNJPBVQLTVCVICNXWPJBRVCZCZNVWAPUIFBRADXHTPPBRACOOYQFQFEQGEHYFYQNMJQZKSOXRMDTCVXRLUKNHKYONMLIFHZCEKQZWIZMJKBUALMLFYGS");
    msg.component.assign("PKUDAGBMVLSFNFHUYOUOLCVCVJWHWDPRFSYIVUVETFOCMCWAEWGKEBBNYYTPZKMFHGZBKYDNYEORT");
    msg.act_time = 37250U;
    msg.deact_time = 19795U;

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
    msg.setTimeStamp(0.2922297077126158);
    msg.setSource(27742U);
    msg.setSourceEntity(123U);
    msg.setDestination(32789U);
    msg.setDestinationEntity(16U);
    msg.id = 216U;
    msg.label.assign("HTCWWVVEWQLREQODBWDOZURRKVKGNVWJAGGCFPNDFHELRBCIVJQTAWCTYQSEFPBCI");
    msg.component.assign("ADVCJEPMWMBWDYOWKMLLNEJXROSQDWNYLIOGYHQCJFYJQTEASAQNJRIFHSYVINDCVWFESKGKRKUXXBSGD");
    msg.act_time = 58623U;
    msg.deact_time = 39179U;

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
    msg.setTimeStamp(0.721796674798012);
    msg.setSource(43929U);
    msg.setSourceEntity(127U);
    msg.setDestination(62990U);
    msg.setDestinationEntity(86U);
    msg.id = 35U;
    msg.label.assign("GHIKLVFOTUKNVSBRCEQZOWXHXJZPAVTCBG");
    msg.component.assign("VKGAAIZRWKXQGBXEWDUMEJZOFZFWFRHQJZJISLCJDIVQRDXUMWSXUVCEPAJEWEOOSSGTLRWJQADQMBVHTPTKGCVRJDIBHNBOBSMZFWLUNHYDNGROPUYNVOXKQARSKKYIXNHOMYCHLCDCNGQZOXCCDNUXJIQCTTPFTPPEMMDRMLYNLJITGNLIFNLHYLVBAITX");
    msg.act_time = 27191U;
    msg.deact_time = 21979U;

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
    msg.setTimeStamp(0.4936425779485615);
    msg.setSource(20635U);
    msg.setSourceEntity(222U);
    msg.setDestination(32618U);
    msg.setDestinationEntity(166U);
    msg.id = 164U;

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
    msg.setTimeStamp(0.3926144537058278);
    msg.setSource(27471U);
    msg.setSourceEntity(110U);
    msg.setDestination(65009U);
    msg.setDestinationEntity(66U);
    msg.id = 30U;

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
    msg.setTimeStamp(0.43409625904581917);
    msg.setSource(49712U);
    msg.setSourceEntity(151U);
    msg.setDestination(3679U);
    msg.setDestinationEntity(80U);
    msg.id = 156U;

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
    msg.setTimeStamp(0.5446759502179965);
    msg.setSource(2523U);
    msg.setSourceEntity(156U);
    msg.setDestination(56122U);
    msg.setDestinationEntity(98U);
    msg.op = 250U;
    msg.list.assign("LDPUDHDWTBLZVFOVRHVRGXNIXPAJJDYJINCBWGVSVRMSWPAJMSUWSJQNINVMOEQXJHTBODBDMEGZWYECQCXUAEAOWUL");

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
    msg.setTimeStamp(0.012153702713167625);
    msg.setSource(47727U);
    msg.setSourceEntity(177U);
    msg.setDestination(61801U);
    msg.setDestinationEntity(39U);
    msg.op = 69U;
    msg.list.assign("QMGPXHIXCMLKZRNMGTNIIPJHSJBTBOVBOMGPQSUOPPZWLVPKHGBFJXWZRZDFHAPYMNRBYGVUCLUUHVIGTYJYOYCSXODNOLBYQIAVALVJFAWDUWNRQVCYJWKUTWDGARIAFTUXKZHLJMCKNUYKCBBOKRPCQTDHSREEFYELILEMGJSEZDTTYMFJCASDDIFDQEGWXDRQAQMSZGQSEAKXLWXNREEVPITUWCNKOZHXMZ");

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
    msg.setTimeStamp(0.6440607351957212);
    msg.setSource(1017U);
    msg.setSourceEntity(16U);
    msg.setDestination(28466U);
    msg.setDestinationEntity(105U);
    msg.op = 240U;
    msg.list.assign("MWEWATWTKSQKTXVJXUONPCQII");

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
    msg.setTimeStamp(0.1549775188152086);
    msg.setSource(3253U);
    msg.setSourceEntity(103U);
    msg.setDestination(36470U);
    msg.setDestinationEntity(93U);
    msg.op = 89U;

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
    msg.setTimeStamp(0.9313439604846167);
    msg.setSource(19937U);
    msg.setSourceEntity(176U);
    msg.setDestination(32257U);
    msg.setDestinationEntity(75U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.9466209199971264);
    msg.setSource(22186U);
    msg.setSourceEntity(159U);
    msg.setDestination(54257U);
    msg.setDestinationEntity(17U);
    msg.op = 79U;

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
    msg.setTimeStamp(0.24163544807986614);
    msg.setSource(58314U);
    msg.setSourceEntity(211U);
    msg.setDestination(53414U);
    msg.setDestinationEntity(174U);
    msg.value = 48U;

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
    msg.setTimeStamp(0.8466915169345457);
    msg.setSource(43739U);
    msg.setSourceEntity(77U);
    msg.setDestination(42565U);
    msg.setDestinationEntity(96U);
    msg.value = 18U;

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
    msg.setTimeStamp(0.7553034266106105);
    msg.setSource(15507U);
    msg.setSourceEntity(254U);
    msg.setDestination(18314U);
    msg.setDestinationEntity(18U);
    msg.value = 116U;

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
    msg.setTimeStamp(0.9456748391243495);
    msg.setSource(8084U);
    msg.setSourceEntity(209U);
    msg.setDestination(31881U);
    msg.setDestinationEntity(101U);
    msg.consumer.assign("KQLTSNJQKANFUDKDYWPBIGGWPTWGLVECWSCTEXKXEGVYFB");
    msg.message_id = 62924U;

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
    msg.setTimeStamp(0.8835528414933238);
    msg.setSource(55966U);
    msg.setSourceEntity(244U);
    msg.setDestination(52416U);
    msg.setDestinationEntity(114U);
    msg.consumer.assign("XNNFPKNUVNJADLRR");
    msg.message_id = 29320U;

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
    msg.setTimeStamp(0.7740370464757336);
    msg.setSource(63974U);
    msg.setSourceEntity(10U);
    msg.setDestination(47402U);
    msg.setDestinationEntity(237U);
    msg.consumer.assign("LXUPGQVIMDQLZSRMUJHCUXQPOWJRIWLELCBFDUQNLCSOIAZYTIVDMZHUEBJCQXJVSYFEZCKR");
    msg.message_id = 5036U;

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
    msg.setTimeStamp(0.15794218054717168);
    msg.setSource(10686U);
    msg.setSourceEntity(207U);
    msg.setDestination(58179U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.3081656491750582);
    msg.setSource(554U);
    msg.setSourceEntity(37U);
    msg.setDestination(62434U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.9507677039474752);
    msg.setSource(63771U);
    msg.setSourceEntity(101U);
    msg.setDestination(31127U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.36214233035496224);
    msg.setSource(37176U);
    msg.setSourceEntity(64U);
    msg.setDestination(19707U);
    msg.setDestinationEntity(239U);
    msg.section.assign("BCIBMWFWBZMPAENXXMBLWHBVCGTZQNKTXNSFNHHZQBOUEYFDAAYIYGYAVCAHDEREYLYUVNUDJCSUWQJAJAQSMKVXVBNHWHVXPOTBHUDOLJEJIUQGQESMFXCFILKCWFUGQPNOZROIXGBIFKJRVDWOPYMTSAGDKNQRFYISEJIDUXZNKEURMTVZRTZMVTZPRTCCXSPWOGPGPRCAYKNPHSJBOEK");
    msg.param.assign("XVPXFFSAQHJFSDUCIBNXZUNNVPNCDDHOHVKQQJHAABAHVALIKPHIIELQXUAYJTYROQDGLKTMGCUZMBMLCZERNWJR");
    msg.value.assign("JVUCHZXMVISKZEUWHRMPOHGOQSCWBOINTUKCVBGMMVEDDLDRRZWIKQTZEKBXBBHZWXJYCAFYRFHXZVWGEPEXRFLHK");

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
    msg.setTimeStamp(0.5916320134129459);
    msg.setSource(25642U);
    msg.setSourceEntity(254U);
    msg.setDestination(65413U);
    msg.setDestinationEntity(193U);
    msg.section.assign("GVEZLSXWGKWSZCWRGUJCKFYRZNZEAUDQWEHJEEXECZJDISOEYVNQNPXYALTVB");
    msg.param.assign("BUIZXDMMYMHHGGWSMJGIQQAJMLAJNHCTGCCDFDRPVPJKEBCPZKPBIQBTSFMYMKCOFEDICTCRFJBLYRDGURBPYVKOAXZKRYYUVRETUTENJRIVGWNULURZJNXFWUXZWBKVDOSFAHIFMYSOHVBOYXSSNHUCIYNSJLPCEZETNFBQAMZ");
    msg.value.assign("VHPUOCMKKZMONNLJDESRIEZXOYZCEMQYECTQQTXUBQBGXBIFUCSJQWHVAEPHGTDETIYQTYSGZCREXBKVUUBZZWVJ");

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
    msg.setTimeStamp(0.8675872346970706);
    msg.setSource(21875U);
    msg.setSourceEntity(195U);
    msg.setDestination(44224U);
    msg.setDestinationEntity(45U);
    msg.section.assign("CNUVBAPJZMIVHSZEPOYOXOLVASELQGQVYGABMMLLBLZGHDCULOMFAPWIODYIGUTYABQLWFGFBAJORXPYQYYKWRKFHZYFNOARKGCKPNEREZJXSRCFBSDHTPVQLSSAXZKDLNQ");
    msg.param.assign("GNOPAPFGPNWTHRXUHQUCKTWTTJDBYISTLJNWHMZCVLXUIFRFFXJDSBDGNYZKZETORXLZMNTUCBQGMWJHAOOVECKMZMBOIXWPILKWCJFYFBGHTEVQRCUVYVDCBRSUQKSWQIPZIXIGUYYJNSRAAPVDXAPQM");
    msg.value.assign("UWTLLWYUSNRLQNIHEQU");

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
    msg.setTimeStamp(0.45641314740066663);
    msg.setSource(25527U);
    msg.setSourceEntity(206U);
    msg.setDestination(21631U);
    msg.setDestinationEntity(192U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.26850905750556764);
    msg.setSource(42262U);
    msg.setSourceEntity(81U);
    msg.setDestination(41049U);
    msg.setDestinationEntity(170U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.8812674392092723);
    msg.setSource(32154U);
    msg.setSourceEntity(224U);
    msg.setDestination(17228U);
    msg.setDestinationEntity(92U);
    msg.op = 155U;

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
    msg.setTimeStamp(0.051407613184984546);
    msg.setSource(6462U);
    msg.setSourceEntity(48U);
    msg.setDestination(13723U);
    msg.setDestinationEntity(206U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.2566831589470848);
    msg.setSource(39404U);
    msg.setSourceEntity(158U);
    msg.setDestination(27253U);
    msg.setDestinationEntity(60U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.5625463710944444);
    msg.setSource(1367U);
    msg.setSourceEntity(72U);
    msg.setDestination(57975U);
    msg.setDestinationEntity(149U);
    msg.op = 83U;

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
    msg.setTimeStamp(0.9662487343717089);
    msg.setSource(60781U);
    msg.setSourceEntity(171U);
    msg.setDestination(34317U);
    msg.setDestinationEntity(18U);
    msg.total_steps = 246U;
    msg.step_number = 32U;
    msg.step.assign("CPVNNYGWTXCDTTLIIPRYJZPKRPUHNXNXHFRQWISKRRSHJTELKSIDQIVVDKAUZYOOJCBEVPBLOEVDFAYQMXJXZZUTHWPPWLTPIFWENZUSDIHOBUHGYVMZSDAVXHOIWNAFLMRAUWTNGMMLWDBNSQJMCDGTKCRHGQUSKSAALYIAYZMBOKMQOFJAEURCOWJLKZEOCMGJKYXGUCESBHJEFVGRBFGOFVIFLTBYQFPHBCYJEXUVGBXRDT");
    msg.flags = 41U;

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
    msg.setTimeStamp(0.6808819973934506);
    msg.setSource(27310U);
    msg.setSourceEntity(183U);
    msg.setDestination(31339U);
    msg.setDestinationEntity(247U);
    msg.total_steps = 201U;
    msg.step_number = 22U;
    msg.step.assign("LTTVYEYNYQZUPRAVYHKCNQOFNSWDREBITEIXCQWAFTOJRXWCTBYUAWQMEIVNWYRSOJPUBZNZLKLOJRYOKSPX");
    msg.flags = 193U;

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
    msg.setTimeStamp(0.19317346013175274);
    msg.setSource(21358U);
    msg.setSourceEntity(4U);
    msg.setDestination(47302U);
    msg.setDestinationEntity(85U);
    msg.total_steps = 22U;
    msg.step_number = 126U;
    msg.step.assign("DABMENQKNOLVYWUQFREBLCJBMEXEZIVLEHPOZCTGLVKRDUCWORVRUZJSEZXGPIAJJYXKCUYRRWYSFWEBNADICBNQFIFCLNPYEDOLVTYURSXTLQZSKPUKMZLPHIKHVNAJGMVA");
    msg.flags = 52U;

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
    msg.setTimeStamp(0.49420552517854943);
    msg.setSource(52224U);
    msg.setSourceEntity(137U);
    msg.setDestination(58641U);
    msg.setDestinationEntity(214U);
    msg.state = 81U;
    msg.error.assign("EZHCAXDLEEMYKEHRWZOLOHIRZSCVZHYORZAPCWMOPHUEQQOPLNVTPZZBZINFNAPHFIGBQOSFCWNBJTKCMSEPQGQQRKLQCXTXNVFKLWWKYSHOMGDBXGOYSUXMIBTVGCUDWKBUKBTRQIKYPDMATJYGRAGPRQFKUXVUUIWYFYNHLLABFXJSKRWETTOABDFRINJCFJRLMAPPVVUT");

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
    msg.setTimeStamp(0.8552880829101844);
    msg.setSource(33997U);
    msg.setSourceEntity(240U);
    msg.setDestination(42969U);
    msg.setDestinationEntity(190U);
    msg.state = 131U;
    msg.error.assign("GORSCKUDTBAXWCFAORCKVJFHQLANDPPRCULROA");

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
    msg.setTimeStamp(0.8540060874586856);
    msg.setSource(3180U);
    msg.setSourceEntity(228U);
    msg.setDestination(23424U);
    msg.setDestinationEntity(16U);
    msg.state = 33U;
    msg.error.assign("ZJUNDDRHBXKGDLAKQTEKGKFSOTRKUDYOANRQLURMCCMRRSILJTEVYALIDLZRXCJIYTSKQFXZGTPFZMOPMRWJJSYCPPJQCSAYYWGOFSNXLLFGMAEFEPCYIBOBQPWEAULIUZVINAKCEXYZEXKWIBHVHHPQEGBHWSXAHDWVBUCOUIGQAJZUVMMELWOTNSVZDWHMKHIOPKRTNTQIGPXQBDTJVBBDQF");

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
    msg.setTimeStamp(0.4357349573136392);
    msg.setSource(63146U);
    msg.setSourceEntity(159U);
    msg.setDestination(24141U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.1501183212983992;
    msg.lon = 0.7154343873990828;
    msg.height = 0.69780733260101;
    msg.x = 0.026109313746646823;
    msg.y = 0.9264044026480579;
    msg.z = 0.7148522390731521;
    msg.phi = 0.33529298888527126;
    msg.theta = 0.7918129827100656;
    msg.psi = 0.7290510749370993;
    msg.u = 0.2977148782284782;
    msg.v = 0.9497939113181046;
    msg.w = 0.676114555986304;
    msg.p = 0.8709787050248179;
    msg.q = 0.21424228179159988;
    msg.r = 0.8658257997036523;
    msg.svx = 0.9687487269351176;
    msg.svy = 0.11126687870449048;
    msg.svz = 0.0019240718245020494;

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
    msg.setTimeStamp(0.7151233769324732);
    msg.setSource(40516U);
    msg.setSourceEntity(106U);
    msg.setDestination(53142U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.4788975030376793;
    msg.lon = 0.026189388056477192;
    msg.height = 0.46496165324679173;
    msg.x = 0.11996940956446234;
    msg.y = 0.23520385180693615;
    msg.z = 0.32425753022263537;
    msg.phi = 0.9022654793638027;
    msg.theta = 0.8980739120882109;
    msg.psi = 0.5250333949220874;
    msg.u = 0.3731178353048581;
    msg.v = 0.21985529065475862;
    msg.w = 0.9062702205503818;
    msg.p = 0.5517422031030279;
    msg.q = 0.6677094357089186;
    msg.r = 0.05041792903485165;
    msg.svx = 0.08709102001094626;
    msg.svy = 0.20431667990309121;
    msg.svz = 0.7593992909296047;

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
    msg.setTimeStamp(0.2517427111235824);
    msg.setSource(51078U);
    msg.setSourceEntity(35U);
    msg.setDestination(42480U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.8446984017415191;
    msg.lon = 0.04411035053235979;
    msg.height = 0.43251490659437486;
    msg.x = 0.3165012042868325;
    msg.y = 0.5951415884333644;
    msg.z = 0.5649175678770871;
    msg.phi = 0.1364752977364535;
    msg.theta = 0.7674691300460365;
    msg.psi = 0.8607302278786432;
    msg.u = 0.5905085349615852;
    msg.v = 0.5666513060885976;
    msg.w = 0.10951668283783522;
    msg.p = 0.7490668810952255;
    msg.q = 0.8561811957566322;
    msg.r = 0.05970112349970469;
    msg.svx = 0.3936529431055976;
    msg.svy = 0.4825841238300492;
    msg.svz = 0.399956218207261;

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
    msg.setTimeStamp(0.08205828141485205);
    msg.setSource(11574U);
    msg.setSourceEntity(83U);
    msg.setDestination(29247U);
    msg.setDestinationEntity(35U);
    msg.op = 182U;
    msg.entities.assign("ITVDIZVUCIIOVAFIYSEGMVZNOMKSJUSVKPQEERDOLBOXKFTTGBZNQJGGQZQVCMKSLHZTHOYWHINDFWOJXONXXGLPBAQATSXPWNSPDQBWNCTVMXIZACGERFUWURPKIDAKQCLEELXNJYJRRMWYFJGUHLXRWSULCSGETTKTBDHAQRZEQXHXPYJGMDFJM");

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
    msg.setTimeStamp(0.4961827673581448);
    msg.setSource(13661U);
    msg.setSourceEntity(186U);
    msg.setDestination(39897U);
    msg.setDestinationEntity(246U);
    msg.op = 102U;
    msg.entities.assign("BWCKIOAJCJFGQIKPQQNIENHSYKKWDGNLDXFKCXIEODTFDVSBFVXLTXHUODNQQUSGPMFHCVLJRPUCZNKBRMEGJMJYSRWOEGNVMRPDQEE");

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
    msg.setTimeStamp(0.10956167323355914);
    msg.setSource(14598U);
    msg.setSourceEntity(95U);
    msg.setDestination(4433U);
    msg.setDestinationEntity(244U);
    msg.op = 113U;
    msg.entities.assign("SYDHBORKQAVZPGYRFDJJPNVLZMEDMNYOHVQOUZBQUGWJYFSUFRCQCUYCCWAJJQOXIFTWTUQKMSDMTHLLKUICNSBMAABHLXKOGQJZTTBLUOLFVGWHGSCXEUGRFIAJSCZ");

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
    msg.setTimeStamp(0.9843920719635401);
    msg.setSource(24871U);
    msg.setSourceEntity(224U);
    msg.setDestination(9471U);
    msg.setDestinationEntity(112U);
    msg.type = 74U;
    msg.speed = 34370U;
    const char tmp_msg_0[] = {22, 105, -96, -55, -22, 77, 90, -35, -100, 98, -56, 88, -127, 104, 105, -15, 76, 71, 34, -77, 7, 68, 27, 80, 8, 87, 78, -36, -97, -98, -22};
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
    msg.setTimeStamp(0.45844622223735854);
    msg.setSource(15145U);
    msg.setSourceEntity(243U);
    msg.setDestination(28430U);
    msg.setDestinationEntity(179U);
    msg.type = 12U;
    msg.speed = 46848U;
    const char tmp_msg_0[] = {68, -87, 6, 95, 108, 57, -50, 106, -2, 63, 87, -102, -79, -96, -96, -31, -82, -98, 63, 101, 106, -6, 46, 37, -78, -35, 95, 53, 117, -74, -128, -89, 71, 5, -94, 103, -6, 52, 83, -17, -23, -114, 68, 62, -121, 46, 122, 34, 79, -86, -94, -100, 37, -24, 49, -63, 71, -5, -18, 40, -56, 120, 69, 107, 94, -51, 63, 45, -3, -25, 90, 2, -20, -21, -70, -105, -110, 12, -65, 62, 77, -103, 80, -68, -92, 43, 82, 36, 81, -72, -80, -86, -37, -90, 96, 2, 97, -117, -53, -114, -112, 8, -122, -110, -114, 82, 57, 89, -110, 121, 125, 36, -67, -91, -18, 56, 28, 55, 29, -113, 95, 35, -45, 28, 59, 122, 109, -2, -49, 94, -17, -61, -96, -80, -113, -69, 18, -109, -85, 42, 32, -3, -95, 42, -52, -37, -99, 14, -86, -112, -53, -59, 2, -115, 73, -87, 93, 30, -40, -100, 8, 80, 8, 67, -57, 84, -124, 75, 24, 48, -62, -121, -103, -54, -36, -52, -53, 31, 99, 61, 79, 15, 42, -21, -41, -120, 19, 102, 89, -36, 54, 24, -6, -32, -43, 13, 45, -97, 125, 26, 80, -76, 36, -72, 123, 63, 112, -100, -45, -71, -50, -43, 36, 9, -25, -124, -57, 39, 50, 100, -89, 67, -35, 49, -67, 92, -26, -42, -13, -26, 8, 108, 10, 111, -111, 75, -125, 39, -77, 22, -41, -50, -91, -76, -108, 97, 78, 71};
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
    msg.setTimeStamp(0.8412986414164031);
    msg.setSource(41239U);
    msg.setSourceEntity(227U);
    msg.setDestination(38598U);
    msg.setDestinationEntity(220U);
    msg.type = 191U;
    msg.speed = 56580U;
    const char tmp_msg_0[] = {-91, -108, 29, -126, -89, 41, 115, 73, 57, 97, 1, -29, -5, -52, 13, -5, -38, -2, -41, 64, 6, 22, -76, 96, -100, -25, -11, -10, 79, -128, -115, -67, -106, -40, 32, -116, -52, 4, 91, 91, 32, 76, 21, -21, -22, -105, -109, -16, 119, -96, 3, 36, 79, -27, -65, 89, -22, -97, -103, 88, -100, 87, -16, -91, 64, 51, -31, 112, -83, -111, 88, -56, 61, -28, 16, -50, -54, 67, -94, -73, 9, -31, 14, -13, -87, 54, 89, -60, 25, 62, -108, 54, -124, 51, 0, 123, -65, -126, -121, -30, 14, -6, -27, -119, 126, 40, -67, -30, 68, 101, 57, 116, -106, -77, 2, -89, 50, -42, -29, 4, 43, 111, -90, -58, -80, 113, -31, -47, -46, 79, -67, -86, 14, 72, -112, -57, 3, 6, -4, -114, -84, 121, -29, 121, 93, 73, -43, 24, 99, 38, 111, 83, -114, 84, 64, 69, -43, 117, 59, 32, -75, -127, 51, -8, -87, -11, 103, -65, 65, -103, 21, -125, 59, -118, -104, 11, 82, 22, 6, -65, -7, -96, -113, 121, -39};
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
    msg.setTimeStamp(0.36261512950559627);
    msg.setSource(38204U);
    msg.setSourceEntity(16U);
    msg.setDestination(39667U);
    msg.setDestinationEntity(46U);
    msg.available = 1136469732U;
    msg.value = 157U;

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
    msg.setTimeStamp(0.2597041178055355);
    msg.setSource(62299U);
    msg.setSourceEntity(66U);
    msg.setDestination(23385U);
    msg.setDestinationEntity(222U);
    msg.available = 559137330U;
    msg.value = 184U;

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
    msg.setTimeStamp(0.8474143789815531);
    msg.setSource(4689U);
    msg.setSourceEntity(125U);
    msg.setDestination(36372U);
    msg.setDestinationEntity(179U);
    msg.available = 3187290393U;
    msg.value = 211U;

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
    msg.setTimeStamp(0.6120486794447201);
    msg.setSource(41654U);
    msg.setSourceEntity(136U);
    msg.setDestination(34035U);
    msg.setDestinationEntity(206U);
    msg.op = 228U;
    msg.snapshot.assign("RQSCDGAXVUMXSMDEZGOYNTWWPJHIBWXSNIAEKKWTIJHJBHXERYRSWSIEGQJFUPXSBWBFVUMLTOVMNSNNPOOUTZDZDJHSRWPFDGQPGCUFHIEDKKXLMZHLAQJYGOKVZUTRQEYNZOLEEUJYXALVINLRNZUCFYIQDVBKHFNFAGLRSVDGQAMHCMRWZMBFZLXPITXVOTQOOYPGHERBDPYCJSYJITBCUJ");
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 245U;
    tmp_msg_0.label.assign("RMMWUCJHPUQICTHROGIIURDMAFOUEQCILSQWNQYEWVFLQWCXZKVDEZZNJHDEXRDSTWFLBQOIMXAHQSLVBEWZWTKAJYLOXSHVFDBASDMCFHVIYDNGEBUSAXGAGPRTKGPNCOTJGMAKCAGLKVZWZBHVKNTRSRCJBFBJWYUOYVMYGZUIWZOPMYIN");
    tmp_msg_0.component.assign("BDIDPJJSCWDLSCVW");
    tmp_msg_0.act_time = 8918U;
    tmp_msg_0.deact_time = 61338U;
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
    msg.setTimeStamp(0.764030089858408);
    msg.setSource(30989U);
    msg.setSourceEntity(40U);
    msg.setDestination(60176U);
    msg.setDestinationEntity(45U);
    msg.op = 122U;
    msg.snapshot.assign("ZQFYJJWQYLATVPWTGXURVMZKISFRBMQWTOF");
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 109U;
    tmp_msg_0.value = 0.010524429872482921;
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
    msg.setTimeStamp(0.8152819288934113);
    msg.setSource(59628U);
    msg.setSourceEntity(130U);
    msg.setDestination(12717U);
    msg.setDestinationEntity(62U);
    msg.op = 86U;
    msg.snapshot.assign("HWUERNTKURDLVFRMUOOGKZSLYMNNVAUQTBFATIVGWVYZHVZEAPHITMDVQGRZTLWZYSPVNBFDUIHUOUHXJYNDLOIYLXGOHILMTPKGFFXCIFSPEDRJHCQMTFYMNQZSPDBOQSRBDCVXQCPGNRGNEHIBWAJPBVDXU");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 40123U;
    tmp_msg_0.lat = 0.3919691046459647;
    tmp_msg_0.lon = 0.40014316546286877;
    tmp_msg_0.z = 0.5354277209704138;
    tmp_msg_0.z_units = 85U;
    tmp_msg_0.duration = 46768U;
    tmp_msg_0.speed = 0.5869588622237066;
    tmp_msg_0.speed_units = 249U;
    tmp_msg_0.type = 30U;
    tmp_msg_0.radius = 0.8105159764023686;
    tmp_msg_0.length = 0.5881983895048478;
    tmp_msg_0.bearing = 0.9691920684426;
    tmp_msg_0.direction = 189U;
    tmp_msg_0.custom.assign("OIYWFULATJWJGMFILSELUFSYRNPONKGPNPMCYDVVEEZKCRWBRCMHFCPJK");
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
    msg.setTimeStamp(0.08969327261088489);
    msg.setSource(21231U);
    msg.setSourceEntity(164U);
    msg.setDestination(13967U);
    msg.setDestinationEntity(63U);
    msg.op = 135U;
    msg.name.assign("DHTGNPCMZZVIGBEAXXIECYNTSEYZQKXXLDJWKVVWVRARKTKAMGKSTOSHVSXDMWGMTWPZGOPYEKLGBQZLFTAIQOHMEQIFOJLPDNBEPKHQIWMSDVCXXUONIWUDBEBAJJYPFOZECHACRRDORMIKTGIQPTPPUBUSYTMBXNURVCHZRFFEDWRVZNSI");

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
    msg.setTimeStamp(0.4602658575974705);
    msg.setSource(40627U);
    msg.setSourceEntity(187U);
    msg.setDestination(57382U);
    msg.setDestinationEntity(20U);
    msg.op = 22U;
    msg.name.assign("HQYFQNZUHAZKVLTDKLSYNZEJWKTPIMESFEWUBGGQPRYWDQSXPAJTQBOOKOCGJERGZKIOXZAUXIUCYINGIKARZMIVAFUMDNPFQGLBMYDHDDVOOEMQWJJVDYFZEOTZKSHXLVOUABWQKVUMVERPHENCJGIPJSNJSLAMMTKHTIZQJS");

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
    msg.setTimeStamp(0.14202757299884805);
    msg.setSource(37729U);
    msg.setSourceEntity(133U);
    msg.setDestination(47356U);
    msg.setDestinationEntity(199U);
    msg.op = 241U;
    msg.name.assign("VZTUCIRXMDRDLSFNQHVMRW");

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
    msg.setTimeStamp(0.5459202374457675);
    msg.setSource(48448U);
    msg.setSourceEntity(40U);
    msg.setDestination(19820U);
    msg.setDestinationEntity(74U);
    msg.type = 192U;
    msg.htime = 0.4498217203276842;
    msg.context.assign("MJSSZRYXAQYYYHHGJPLZQLVEGMAVDIBHIMUEGQFVZKXXPXZCDNEKNJUSVSCYQKD");
    msg.text.assign("DZMAASCNJUHXLSEYQWTOFRVIJZWKZJVZSYWVLZDPYEPFINQXAPIAEOJMMUMVOPMOATPBGCZLNKBEIPCTWKMLWUVAGBXBLSULGWOMUJXCLBTHELUGIOOPEWRCDVGKXTDWADNCNQRLSTAHFVTVQHSHVMJASFIGIKYRSRPYQXWLGKURQERCMYF");

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
    msg.setTimeStamp(0.6487415857303069);
    msg.setSource(39669U);
    msg.setSourceEntity(180U);
    msg.setDestination(30393U);
    msg.setDestinationEntity(154U);
    msg.type = 82U;
    msg.htime = 0.43159245022721526;
    msg.context.assign("HQAJUVDSPKBGLQHRCPDEXPFFAKFOBDEIDEFEZEIJQDRQYWCZWZSCJAUINZAODHLVYVFPBOOHRNCUSSBNTOANMDXLTYJYUIKITUZOGEMXLHPWXAMPADMNCQASYIMLGGVTGMTYDYRPSEKCWXURXRPIIK");
    msg.text.assign("NNDEYNRAXVNFWWDAQDNRGYTMMWZYIJJUGKIDVMJHTNXFICZKZUACXZPRXSKYWIOBXJLDMWRVVUAMLFHSMAFFOCTXQIPOMBMSNYKHYLPFEUSUAVPZCLSTQZYFTIGXGRIWDAKDZUEVLODAFKVEEWOPCPSJGPTSQQQBIQZLURRYOLDCNJCGBHHULOEQWPXUZSMEQVBBOGDQAWFEVIUKYOHCPZGSCHWCJELFIOBBHTJYRXJLMKRXTASBH");

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
    msg.setTimeStamp(0.04334098886811166);
    msg.setSource(6353U);
    msg.setSourceEntity(245U);
    msg.setDestination(64973U);
    msg.setDestinationEntity(93U);
    msg.type = 43U;
    msg.htime = 0.9332161951258066;
    msg.context.assign("NKSDXYWGKUVBVC");
    msg.text.assign("XNGNOHGHPRMWBQKAULLBQSHFYWPTUZWCXFTBUCMBIWISPYVZSDKDNJLEUJKGETAYNOQVSFSZAMARYXJRHTURXCMILIKNPFJHVEHLDWTZZZRDFIWYQOZJAWNWPBXFCEEKTPUPHQFJLEYYNCKPVCTKAUCZUVFHREPMMQTETLOFHZJGYBSADDQDBIRBQSQGNHSGLIAIWBORXGAOGOPOSOZRACKCISMNL");

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
    msg.setTimeStamp(0.10920919478368074);
    msg.setSource(10398U);
    msg.setSourceEntity(204U);
    msg.setDestination(11091U);
    msg.setDestinationEntity(150U);
    msg.command = 219U;
    msg.htime = 0.0066991092547111775;

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
    msg.setTimeStamp(0.5017331109231822);
    msg.setSource(23886U);
    msg.setSourceEntity(163U);
    msg.setDestination(9336U);
    msg.setDestinationEntity(178U);
    msg.command = 226U;
    msg.htime = 0.22455800200662157;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 33U;
    tmp_msg_0.htime = 0.3511742419502184;
    tmp_msg_0.context.assign("TKTTPUYVBXTDRYXBQGGDHXJMRQUWPSILZPHVTYMJDIHIWWNTZHKWGZTHQGONYALLSB");
    tmp_msg_0.text.assign("RPBELMFPFTHHGCFKKODRSQIRJSQMDXOAHUVIPWBWKNRQGYYJQOTPPZWYQXSVGXPFWAWZDVODQ");
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
    msg.setTimeStamp(0.767571613609211);
    msg.setSource(63488U);
    msg.setSourceEntity(204U);
    msg.setDestination(45951U);
    msg.setDestinationEntity(132U);
    msg.command = 197U;
    msg.htime = 0.13119639650057313;

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
    msg.setTimeStamp(0.8675916664984786);
    msg.setSource(26328U);
    msg.setSourceEntity(94U);
    msg.setDestination(2712U);
    msg.setDestinationEntity(127U);
    msg.op = 114U;
    msg.file.assign("REUJVRQRINIVNJJUDDHMYXZLQUXDFHTRPBMHDIJDSNXEMZBWSLKPGOUFUQHNCYIRSZWKDSVBTHZUSUDJAVUTEMQWPLQRFAVKMXLOGROMPEDXKFRGVEYSQXBVZT");

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
    msg.setTimeStamp(0.6064516024102601);
    msg.setSource(27977U);
    msg.setSourceEntity(185U);
    msg.setDestination(20903U);
    msg.setDestinationEntity(236U);
    msg.op = 95U;
    msg.file.assign("QDGNVAIUAHAAYGSWULISWBWOSERPRIMYAWEZFQIS");

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
    msg.setTimeStamp(0.08824074619499533);
    msg.setSource(27035U);
    msg.setSourceEntity(179U);
    msg.setDestination(52451U);
    msg.setDestinationEntity(217U);
    msg.op = 9U;
    msg.file.assign("CWJGGGRQXQLEXVPSOQZ");

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
    msg.setTimeStamp(0.6822669995561376);
    msg.setSource(57164U);
    msg.setSourceEntity(30U);
    msg.setDestination(65307U);
    msg.setDestinationEntity(51U);
    msg.op = 0U;
    msg.clock = 0.8667481892654669;
    msg.tz = 56;

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
    msg.setTimeStamp(0.16116193099904308);
    msg.setSource(5638U);
    msg.setSourceEntity(11U);
    msg.setDestination(28648U);
    msg.setDestinationEntity(127U);
    msg.op = 114U;
    msg.clock = 0.35137248210473915;
    msg.tz = 117;

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
    msg.setTimeStamp(0.8473435183916224);
    msg.setSource(60693U);
    msg.setSourceEntity(83U);
    msg.setDestination(5570U);
    msg.setDestinationEntity(32U);
    msg.op = 235U;
    msg.clock = 0.5990520030275279;
    msg.tz = -86;

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
    msg.setTimeStamp(0.8095448894027328);
    msg.setSource(13739U);
    msg.setSourceEntity(204U);
    msg.setDestination(2036U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.37497266653820527);
    msg.setSource(52539U);
    msg.setSourceEntity(150U);
    msg.setDestination(60954U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.7420846488216295);
    msg.setSource(44211U);
    msg.setSourceEntity(130U);
    msg.setDestination(3945U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.751808584437467);
    msg.setSource(19331U);
    msg.setSourceEntity(55U);
    msg.setDestination(19489U);
    msg.setDestinationEntity(235U);
    msg.sys_name.assign("CQZDYAFFMIHPLWZAECMVPYBZLWFPSSSVWLIFYBFMVWC");
    msg.sys_type = 252U;
    msg.owner = 36081U;
    msg.lat = 0.9509244984959925;
    msg.lon = 0.7848221015686051;
    msg.height = 0.25580201035973615;
    msg.services.assign("AKJPNYNFLPAMMZXJOBRVDROZKUSHDEBAJWFKYPKHFJIHWCBUGCDNSVTSIDPSLOANMSTBHQPXVIQFQUZYISICIHZEGBWWJNTGKKYOPTCDKXHEGGVPSNQUCIHUVGMWPOAFTHZMPEAFNRMYWMOLEJCCSGCEBQNKJBXDXQMGURYOJIQDCFLQXUWXZLMVOKZUYWALBF");

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
    msg.setTimeStamp(0.10718763041824675);
    msg.setSource(13445U);
    msg.setSourceEntity(61U);
    msg.setDestination(64684U);
    msg.setDestinationEntity(97U);
    msg.sys_name.assign("EXBCYUYMVPLCJNQTVSXBXALVYEKWQZHBHFKOWAQIDGMFCKDTHEFJVCGAZNUZPBKXAKIEJFRXZWKYBXDHNMQLA");
    msg.sys_type = 165U;
    msg.owner = 12420U;
    msg.lat = 0.17868496531352995;
    msg.lon = 0.36896573801411103;
    msg.height = 0.8019270602718875;
    msg.services.assign("ZQNRUNXFWJXPAOSPXKSXEGKLXLAREIYSWTYBBVGTRMTIBKHZDJQBANEZYCTFPVUJYUHWTZHCYOGARVRJDQWZWMGXUFHIDSWTLJA");

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
    msg.setTimeStamp(0.22693687159436438);
    msg.setSource(15418U);
    msg.setSourceEntity(135U);
    msg.setDestination(42557U);
    msg.setDestinationEntity(177U);
    msg.sys_name.assign("ZNQKMOCIEMPRCMMVPUJPXVRYKQPUCVNPREIYFQGSRTPXUXRXLDWTZNXJWWLAULXQBMYIWHSFBNNEONZKHRDYOXLYHGVHKJMQJAWFVFBIJZHLUYSTKUAEDDZJFHQBCFUIFWMBBQGGOYAYFC");
    msg.sys_type = 249U;
    msg.owner = 46729U;
    msg.lat = 0.3320990443519466;
    msg.lon = 0.2634280606531789;
    msg.height = 0.837709727341849;
    msg.services.assign("BTQELTZDSSQOKEKWXOCCDRPWHFSKHUVJPOUYJQHUYPNCAMCRPFZHTURWVJQCXASWQOLX");

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
    msg.setTimeStamp(0.5096522458987804);
    msg.setSource(41275U);
    msg.setSourceEntity(215U);
    msg.setDestination(49398U);
    msg.setDestinationEntity(132U);
    msg.service.assign("GESLBPIOSVOISEBDLCUWTOYAOQKTWVZMFMQTMJZGHVPZPDQYJEL");
    msg.service_type = 7U;

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
    msg.setTimeStamp(0.6366440711506749);
    msg.setSource(61541U);
    msg.setSourceEntity(163U);
    msg.setDestination(21412U);
    msg.setDestinationEntity(174U);
    msg.service.assign("IBVCHIIAXNFGEWTSPKQGWKBFAFNHBRGXUUFHLLJLDHEHGKYBPOOTSZBZIAMNIIROWMVDJMDSLZWOSOVORJLKFYXVBRNHYCNJLYUZSNMTGQUYNAFXZJUANKJDEVQUNIWMPOYWIMLRCFTEXAEPKVPJCSCPDYFQQHSGDUVDHWFZRZISPVQQGQZTPCHLW");
    msg.service_type = 49U;

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
    msg.setTimeStamp(0.5705145435508557);
    msg.setSource(34652U);
    msg.setSourceEntity(39U);
    msg.setDestination(31108U);
    msg.setDestinationEntity(123U);
    msg.service.assign("LUUCYOTYNLVRSHLOOJHGZGRBCACMOONLGSRPWAMIYRKDUFHLHXXXTAKYPRFNCVYXUTVAPLVAVAXKTJFNWZEITSF");
    msg.service_type = 32U;

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
    msg.setTimeStamp(0.180191324574266);
    msg.setSource(11314U);
    msg.setSourceEntity(224U);
    msg.setDestination(31197U);
    msg.setDestinationEntity(23U);
    msg.value = 0.43260027708780524;

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
    msg.setTimeStamp(0.7632223072167773);
    msg.setSource(51741U);
    msg.setSourceEntity(119U);
    msg.setDestination(7088U);
    msg.setDestinationEntity(170U);
    msg.value = 0.30286001610845503;

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
    msg.setTimeStamp(0.5756193772166287);
    msg.setSource(34142U);
    msg.setSourceEntity(195U);
    msg.setDestination(20206U);
    msg.setDestinationEntity(237U);
    msg.value = 0.9226970391399495;

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
    msg.setTimeStamp(0.16743474196458674);
    msg.setSource(26198U);
    msg.setSourceEntity(195U);
    msg.setDestination(48590U);
    msg.setDestinationEntity(181U);
    msg.value = 0.4202844251637059;

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
    msg.setTimeStamp(0.7186801131375217);
    msg.setSource(56198U);
    msg.setSourceEntity(88U);
    msg.setDestination(57766U);
    msg.setDestinationEntity(225U);
    msg.value = 0.21197866491285022;

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
    msg.setTimeStamp(0.3511810790755797);
    msg.setSource(54984U);
    msg.setSourceEntity(228U);
    msg.setDestination(42945U);
    msg.setDestinationEntity(40U);
    msg.value = 0.24095316861619664;

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
    msg.setTimeStamp(0.5145965874189596);
    msg.setSource(27410U);
    msg.setSourceEntity(150U);
    msg.setDestination(38431U);
    msg.setDestinationEntity(70U);
    msg.value = 0.2926116577821164;

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
    msg.setTimeStamp(0.35595094054129506);
    msg.setSource(9305U);
    msg.setSourceEntity(243U);
    msg.setDestination(21586U);
    msg.setDestinationEntity(118U);
    msg.value = 0.10532773128732809;

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
    msg.setTimeStamp(0.9930563028719257);
    msg.setSource(9387U);
    msg.setSourceEntity(171U);
    msg.setDestination(20524U);
    msg.setDestinationEntity(54U);
    msg.value = 0.8779039092122018;

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
    msg.setTimeStamp(0.9552007234789112);
    msg.setSource(30621U);
    msg.setSourceEntity(233U);
    msg.setDestination(15160U);
    msg.setDestinationEntity(181U);
    msg.number.assign("JDAHCVBMAEKBOYKCPMANMRUXTASUCGHTMOOUQLQEOOPJBQFWFYSKTBKSKGRUYLJFNBDIGYSJTQERPZVOKXDCNGUEHMTDUJGWNIQHLXCJQEARHOSGCBDMD");
    msg.timeout = 43921U;
    msg.contents.assign("WIJAWCYKZGAWNOMZUQOXTYYBSFWJYYKZFJCAOAHDHTTDHMQEGSIPXFETOUWUCNUQSIVBVILGBPQZSBBEIGKYWIYNCQHAFX");

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
    msg.setTimeStamp(0.6834732501258317);
    msg.setSource(40611U);
    msg.setSourceEntity(227U);
    msg.setDestination(49149U);
    msg.setDestinationEntity(90U);
    msg.number.assign("XZBBNWSGOSWTWAFTKMCFVLOLOWEZQSIQNENJUBHXVRZPVZSALTWAKBXJJGLZITGKRBYOAEVFFNHOJGLHECNGJNMZPDKEPFQJUEPHRXOUCADLFRCRPKMNSIDLNYOYDZMOSITHCGZYVHKWBXIAYKJCAUUAZSVSWPCAEGRUDEMJIVFYWRFHDXKBTQQCQWPMETOCYEDUGXBKYJPLVQUTQSIFDLWIVIUGTXBMPMAJPRNIMXDRVM");
    msg.timeout = 11481U;
    msg.contents.assign("HEDZVPNUQWPVNKUKXWIYQBXHDESUMQRYGENDEHJSU");

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
    msg.setTimeStamp(0.9288122513212246);
    msg.setSource(27114U);
    msg.setSourceEntity(185U);
    msg.setDestination(54072U);
    msg.setDestinationEntity(166U);
    msg.number.assign("MSZPGFGQGYSQNSNCHZOWHPFKXZEVGTPKXLLBYYYRUFNUTCWBIOUAGSCLYASJKUZLMDPJMMGSVQMXOFEMBIX");
    msg.timeout = 64971U;
    msg.contents.assign("LFXYSEVZKIQLLUGOSSFBXNPMYRANQXDBZSCDHAGAOWWLWYEIJMOJYGRZNXBBHRHRMVWCDYUINSZEEZTFGBFIKSEQHXKFLLMWZEROBFCDEGELVMMPDHIZGKBNLJOFXUAHFIVVBUMLUYRZQBIPSY");

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
    msg.setTimeStamp(5.294145768319769e-05);
    msg.setSource(1873U);
    msg.setSourceEntity(72U);
    msg.setDestination(33750U);
    msg.setDestinationEntity(199U);
    msg.seq = 3539964495U;
    msg.destination.assign("QBTYUKHDKDJHDPVDAJKSGOSPWYTLQGZRGLJWOGHBPPVQKPYWMJMKLNAXVTWGRFYURMMBUCTXNFUMXUUGGEBINIOZIKERLHZFFOBFAQKBPZDCRUYYRBLZFCWWEQAGNOJYYTUGZT");
    msg.timeout = 35101U;
    const char tmp_msg_0[] = {-67, -110, -26, -103, 18, -107, -114, -109, 40, -118, -25, 90, -84, 15, -20, -115, -17, -102, 19, -97, 77, -35, 65, 87, -106, 60, 53, 43, 65, -118, -119, 2, 6, -66, 25, 111, 74, 6, -75, 68, 48, -9, -56, -68, -90, 108, -104, 3, -73, 6, 97, -21, -50, 57, 69, -7, -16, 103, -96, 55, 42, 21, 89, -64, -26, 32, 33, 6, -43, 105, 111, -88, 102, 55, -56, -99, -112, 44, 81, 43, -107, 91, -7, -114, 34, 123, -31, 125, -25, 30, 124, -71, -55, -36, -80, 51, 75, 27, -83, -62, 118, 29, -126, -115, 120, 3, -19, -86, -8, 50, -5, 41, -46, 81, 96, -90, -97, -125, 96, -124, -68, 55, 86, -2, 34, 77, -45, -86, 35, -25, 36, -41, 31, -1, -57, 35, 42, -72, 7, 7, 37, 29, 107, -61, -79, -57, 0, 25, -115, -12, 90, -75, -96, 70, 79, 58, 99, -49, 19, -43, -79, 60, 101, -77, -49, -68, -72, 61, -111, 74, 70, -123, -79, -70, -82, 65, 31, 48, 84, 59, 42, 82, 75, -78, 8, 88, -112, 48, 16, -99, 78, -128, -1, -10, 57, 100, -87, -90, -104, -24, -122, 44, -81, -83, -111, 57, 14, 67, -122, 18, 46, 47, 52, -97, 15};
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
    msg.setTimeStamp(0.6672731071627085);
    msg.setSource(38160U);
    msg.setSourceEntity(147U);
    msg.setDestination(18792U);
    msg.setDestinationEntity(70U);
    msg.seq = 3404601326U;
    msg.destination.assign("PURUKKDNVXOTOSJDYPWYYLITZQLEPTSRYIHOENKNYHUUIKIWAZLBDOCGSPDXHJPMRWPMQUZPPENFWRXQJHTBYMEXDMBOFKVZRGDMJCOYGKJAZRMNADYLLSSZCFIWBBRXXHWAITNQEAHVEDXUWC");
    msg.timeout = 51100U;
    const char tmp_msg_0[] = {-65, -11, -81, -22, -125, -79, -15, 4, -66, -21, -18, 84, -54, -2, 121, 7, -15, -60, -123, -38, 15, -102, -108, -77, -30, -57, 31, 35, 66, 61, -50, 3, 92, -64, 71, -1, 21, -77, -103, -6, -95, -117, 50, 20, -40, -97, -107, 87, -8, 33, 72, 63, -119, -21, -2, 1, -8, 113, -53, -85, 102, 8, -24, 70, -107, 98, 75, -97, -20, 58, -56, -85, -126, 101, 21, -9, -2, -4, 126, 98, -68, 78, 116, -108, 107, 25, 85, -24, 57, -13, 97, 93, 96, 64, 97, -24, -40, 117, -1, 5, 108, 27, -69, 31, -89, -86, 99, 10, -59, 73, 37, 88, -119, -108, -37, -21, -108, -81, -26, 44, 58, 123, -120, 123, 122, 36, 17, 117, 32, -62, -95, 126, 102, -79, 59, 51, 20, -72, -127, 99, -1, 6};
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
    msg.setTimeStamp(0.5549592070392673);
    msg.setSource(52558U);
    msg.setSourceEntity(47U);
    msg.setDestination(12807U);
    msg.setDestinationEntity(68U);
    msg.seq = 4046951080U;
    msg.destination.assign("POVQAKDQIRCTXCGZPNJLKKWROFHCFZJPOZSKVHBNILSYVLPIIJICITFPBOURSUFWVJEWNZWOTERVUUNOYYFKLLIZFQJAHXXKJAVOIUQAASBLSFEKLDABMDJRPGFCQXQHBUCBJRMDDBPWKKLZAMGNTNHQTOYYGMGIRTBZTCYSLSHEEWEDUEEZDAXSXVW");
    msg.timeout = 9780U;
    const char tmp_msg_0[] = {11, -77, -76, 98, -79, -113, 23, -68, 55, 115, -104, -11, 1, 37, -72, -84, -72, -82, -90, -111, -1, -76, -14, 65, 108, -4, 91, 118, -81, -90, -47, 87, -90, -21, -108, -85, -33, -89, -97, 57, -70, 104, 75, 64, -30, 91, 25, -109, 122, 45, -67, 17, 5, 111, -81, -110, -31, -75, -69, 28, -13, -92, -23, 92, 101, -67, -111, -37, -74, -76, -39, 86, -4, -115, 1, -83, -115, -3, -15, -19, -55, -85, -117, 72, -17, -121, -61, -22, 103, -20, -63, 31, 8, -86, 32, -35, 21, 29, -115, -80, -30, -51, 87, -83, 16, 0, -112, -80, 47, 95, -14, 47, 10, 77, 40, -82, 32, 23, 91, -88, 96, 120, -116, 70, 34, 55, -14, 84, 25, 44, 53, 24};
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
    msg.setTimeStamp(0.7146653074795589);
    msg.setSource(16576U);
    msg.setSourceEntity(178U);
    msg.setDestination(52625U);
    msg.setDestinationEntity(119U);
    msg.source.assign("NPNOPOECAMUPELIVCQSZJJFQOULIRHESZAOEKWDWGVPOBIILXYTMRWKSNXZRUJVNVCUEBKAFODXFJZSTPFKFGW");
    const char tmp_msg_0[] = {-63, -3, 76, -13, 60, -62, -101, 56, 26, 121, -34, -117, 101, 28, 35, 24, 113, -107, 60, 59, -76, -23, -48, 32, 73, 118, -4, 117, 99, 115, -118, -62, 97, 84, -42, 104, 51, 27, 45, -57, 122, -18, -88, -68, 99, 18, -47, 123, 49, 56, 113, 99, -22, -27, -40, -85, 98, -35, -11, 21, 86, 50, -44, -81, 78, -48, 35, 89, 72, 86, 17, -115, -17, 89, -10, 117, 81, -15, -12, -36, -46, -25, 114, 72, 12, -26, 114, 77, 13, -18, 100, 114, 87, -22, -89, -48, 102, -127, -43, -10, -37, 45, -115, -94, 56, 8, -31, 61, -57, 68, 93, 40, -32, -64, -98, 93, -32, 124, 117, -57, 40, -81, 38, -19, 11, -67, 80, -111, 64, 117, 105, 23, 80, 19, -28, 105, -6, -2, -25, 106};
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
    msg.setTimeStamp(0.9603590861270116);
    msg.setSource(15754U);
    msg.setSourceEntity(250U);
    msg.setDestination(49234U);
    msg.setDestinationEntity(250U);
    msg.source.assign("RJDUEDIMNCVWFAKSAIKTHCOWLRXGXHADGMHULIPKZQVJJWUBAOMYFYPDISTXPKELTGARFJTOZOXQUDZENGWGFOOFEYLTZJMN");
    const char tmp_msg_0[] = {-11, 117, 75, 36, 14, -92, 12, 46, 111, -43, 78, 24, -59, -89, 5, -19, -19, 10, -55, -7, -55, 50, 17, -67, 45, -128, -2, -108, 4, 61, 122, -104, 20, -39, 3, -74, -50, -42, 35, 126, -70, -57, -70, 90, -64, 56, -31, -4, -121, -46, 113, -98, 110, 30, 61, 7, -120, -23, 58, -44, -128, 47, -72, 82, -25, 100, 54, 26, -112, -19, -71, 5, -83, 35, -110, 107, -2, 109, 35, -106, -36, -116, -12, 38, -19, -2, 121, 15, -107, -32, -88, 41, -91, 125, 109, 32, 38, -9, 123, -92, 91, -115, 18, -59, 49, -20, -53, 25, 126, -1, 79, 1, -91, -39, -90, 38, 51, 120, 88, -3, 21, 115, -66, 23, -50, 65, 75, 33, -63, -80, 2, -50, -54, 11, -59, 89, 8, -13, 72, -5, 31, -27, 41, -50, -28, 111, -125, -121, -72, 69, 65, -38, -93, 76, 37, 95, 114, 73, -25, 22, -88, 64, -12, 77, 16, -84, 18, -43, -40, -70, -119, -108, 0, -82};
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
    msg.setTimeStamp(0.398807071368644);
    msg.setSource(6312U);
    msg.setSourceEntity(47U);
    msg.setDestination(31457U);
    msg.setDestinationEntity(100U);
    msg.source.assign("LSKIDMUWVBTRIIZORGLOXHZWADPTDJHKWYUODXOOCZQICUMVACWFBOLQZJFCAQETQLXQLNGYPFRTRUFQRAKXGPQKFEFVJVIUYIRQFYSFNSQNEKHSCAECHNCDBKDJNODXKZPKISOTMTOHRDSWSMKUM");
    const char tmp_msg_0[] = {-80, 60, 116, -123, 118, 11, -38, -110, -68, -99, 90, -96, 56, -102, -20, -101, -48, -38, 1, -101, 106, 48, -19, 89, -107, -31, 58, 102, -26, 81, 53, 62, 98, 105, 89, 59, 119, -108, -120, 18, -11, 125, -94, -67, 12, -107, 64, 39, 126, 14, 94, -5, 12, -123, 22, 15, -120, 10, 4, 59, 1, 18, 3, 22, -64, -125, -128, -99, -6, -113, 115, -44, 87, 88, -85, 42, 3, 89, 40, -103, -90, 77, 78, -97, -34, 9, 20, 93, -18, -31, -121, -24, 19, -57, -65, -67, 97, -10, 29, -28, 38, 23, 67, 12, -63, 27, -43, -55, -81, -99, 111, -3, 111, -88, 101, -124, 108, 107, 29, 125, 68, -56, 18, -93, -50, -9, 30, -107, 111, 61, -59, -64, -42, 71, 65, 68, 17, 14, -33, -14, -112, -122, -53, -105, 0, -43, 72, -123, -115, 77, -107, 101, 61, 37, -81, 45, -123, -111, 24, 41, -33, -90, 125, -107, 121, -16, 13, 31, 41, 98, 105, -70, 6, -61, 49, -57, 83, -74, 13, -50, 126, 107, 108, -64, -79, -38, -128, 62, -107, -9, 40, 125, -80, -94, 78, -20, 90, -8, -51, -127, -37, -127, -122, 1, 76, -39, 106, -85, -103, -54, 125, -50, -2, -6, -54, 109, 25, -25, 19, -114, -99, -110, -3, 70, -54, -63, -10, -74, 108, 62, 120, 68, 92, 76, 54, 16};
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
    msg.setTimeStamp(0.6688133706094391);
    msg.setSource(11079U);
    msg.setSourceEntity(234U);
    msg.setDestination(38582U);
    msg.setDestinationEntity(233U);
    msg.seq = 105013154U;
    msg.state = 173U;
    msg.error.assign("ATVDLTLITUCSXACUJZNVMUMXUTISIUJCRTGBRWYBDQGJPBIPVBMBFMNJNTPTIGYDRUXYZLZZZZQTNNXODVXWGHVQPWZCZLBQEHRHAHKSJGHKFODAEDXSEWIOXYMRVYMYNUDKYIAGFKJQQXMHQSMBSDUNJLSKOPDCCNHE");

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
    msg.setTimeStamp(0.9162682454571415);
    msg.setSource(52787U);
    msg.setSourceEntity(190U);
    msg.setDestination(5773U);
    msg.setDestinationEntity(20U);
    msg.seq = 2741317845U;
    msg.state = 113U;
    msg.error.assign("DXJUEQICOKZVXJWMBHIBAPGXJLYNRCQNZAEVSEBGXTPOEZLNZKDWYXOJVSYDUFTAQGWQSHR");

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
    msg.setTimeStamp(0.3887486822686572);
    msg.setSource(27659U);
    msg.setSourceEntity(86U);
    msg.setDestination(39357U);
    msg.setDestinationEntity(56U);
    msg.seq = 400276214U;
    msg.state = 154U;
    msg.error.assign("LSPYZPXGZUTSNPIAKYLYKWWJUYMTOQNNGGZUXRRDFGWVDVCMWCZRRLNWLCMWNRFYEYOMFCRBESNMOOEZMZGAQKLQCADKVPUMZXXDTBPJHWUVVSFHYHIATVKTDATHIPXYJAUCBSSEBLPSOCPBFKKPXNEVCQYSZJCWGDJKRFOKVVEQTUDJXKOAATNEHZEQOFBHGVPXJARFQTIBDHG");

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
    msg.setTimeStamp(0.3503032098355173);
    msg.setSource(45463U);
    msg.setSourceEntity(44U);
    msg.setDestination(11313U);
    msg.setDestinationEntity(80U);
    msg.id = 94U;
    msg.range = 0.859215124443111;

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
    msg.setTimeStamp(0.6153367481544337);
    msg.setSource(31243U);
    msg.setSourceEntity(14U);
    msg.setDestination(19913U);
    msg.setDestinationEntity(15U);
    msg.id = 202U;
    msg.range = 0.5754776060650041;

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
    msg.setTimeStamp(0.6401530531428719);
    msg.setSource(56390U);
    msg.setSourceEntity(30U);
    msg.setDestination(17049U);
    msg.setDestinationEntity(125U);
    msg.id = 43U;
    msg.range = 0.9455677801715823;

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
    msg.setTimeStamp(0.6691175400735595);
    msg.setSource(15010U);
    msg.setSourceEntity(74U);
    msg.setDestination(65302U);
    msg.setDestinationEntity(169U);
    msg.tx = 141U;
    msg.channel = 148U;
    msg.timer = 5781U;

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
    msg.setTimeStamp(0.293375766286737);
    msg.setSource(41295U);
    msg.setSourceEntity(110U);
    msg.setDestination(26548U);
    msg.setDestinationEntity(187U);
    msg.tx = 4U;
    msg.channel = 99U;
    msg.timer = 57313U;

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
    msg.setTimeStamp(0.7241423985980645);
    msg.setSource(39637U);
    msg.setSourceEntity(107U);
    msg.setDestination(13632U);
    msg.setDestinationEntity(222U);
    msg.tx = 236U;
    msg.channel = 195U;
    msg.timer = 4000U;

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
    msg.setTimeStamp(0.9601885009009716);
    msg.setSource(42607U);
    msg.setSourceEntity(164U);
    msg.setDestination(1725U);
    msg.setDestinationEntity(103U);
    msg.beacon.assign("VCYWIJHUXOQGMKYLOKEOZCBZEJVDHNBGKONUKBLUCXHHIHGXVQMMXSZLRQWHQNGXGFFJJPHPKXTYVNBGZPETRSPRTIKNAGDTLEQMRKCYWBPLJFRBGVWALYFTDLBHHFIHYDWQYURDMMSPVAUQXSQAZZPSRNAUETIKAAVTEIWSMICFRQTNOSLOUVEQFGPVNJFRBZRSUYEAAEOMBKDYIBUVMCXWSJDZPOO");
    msg.lat = 0.43238902101600274;
    msg.lon = 0.6600404883388739;
    msg.depth = 0.4746539484384197;
    msg.query_channel = 233U;
    msg.reply_channel = 94U;
    msg.transponder_delay = 133U;

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
    msg.setTimeStamp(0.18013663357586862);
    msg.setSource(45484U);
    msg.setSourceEntity(168U);
    msg.setDestination(29964U);
    msg.setDestinationEntity(162U);
    msg.beacon.assign("MHEZZXINRDBWJBTVYSNQILJQVEEURXN");
    msg.lat = 0.04754276253273815;
    msg.lon = 0.2546403065755768;
    msg.depth = 0.10300778937245525;
    msg.query_channel = 153U;
    msg.reply_channel = 149U;
    msg.transponder_delay = 73U;

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
    msg.setTimeStamp(0.7896222881406365);
    msg.setSource(20678U);
    msg.setSourceEntity(220U);
    msg.setDestination(16579U);
    msg.setDestinationEntity(175U);
    msg.beacon.assign("VWQTPZXNKZMZHQWVFYGCNGRQBNCEKBFBWKEYBLIQDFHMROBGWCJVIXJQHREAPLNGKFBXKISMMZSQLAUMSPFBCUZDRQJLKUDJBEJDXWBJVSHJSKZYLFSXDYZDUTGNVOODSQRAYGUPNHFVPOGXPCQXURMZUWGXSRKRFIYPOIMAUMFXHDJECQMHNPOAVVZJIGPNOLCNC");
    msg.lat = 0.8326097643260313;
    msg.lon = 0.07835907759246807;
    msg.depth = 0.21320230893616987;
    msg.query_channel = 207U;
    msg.reply_channel = 75U;
    msg.transponder_delay = 104U;

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
    msg.setTimeStamp(0.48651408714812305);
    msg.setSource(26558U);
    msg.setSourceEntity(61U);
    msg.setDestination(53762U);
    msg.setDestinationEntity(138U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.9745870306998019);
    msg.setSource(25370U);
    msg.setSourceEntity(90U);
    msg.setDestination(29170U);
    msg.setDestinationEntity(14U);
    msg.op = 143U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NJIEZGIBEXHAEUQTYKMGPEIOHLPWRJKFRTNRDNLIXWRSPNQKYYHRQSJADOEIGDXWEQYVAZVAQGISEBGYNVIHXSHOJLPGZLA");
    tmp_msg_0.lat = 0.4680900076234392;
    tmp_msg_0.lon = 0.7963621639189412;
    tmp_msg_0.depth = 0.24248527733155667;
    tmp_msg_0.query_channel = 28U;
    tmp_msg_0.reply_channel = 162U;
    tmp_msg_0.transponder_delay = 118U;
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
    msg.setTimeStamp(0.8390170120710588);
    msg.setSource(32610U);
    msg.setSourceEntity(66U);
    msg.setDestination(9155U);
    msg.setDestinationEntity(203U);
    msg.op = 85U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FJVDEOHUKVMIHVAXYEMXCHUNBITIBBDRWSIXRURNNWGBVPAZXMADSHPBCNOQBMHTOKIJXQ");
    tmp_msg_0.lat = 0.6901941494453414;
    tmp_msg_0.lon = 0.1320360190241625;
    tmp_msg_0.depth = 0.6898819526222768;
    tmp_msg_0.query_channel = 171U;
    tmp_msg_0.reply_channel = 25U;
    tmp_msg_0.transponder_delay = 45U;
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
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.4965011303757423);
    msg.setSource(61993U);
    msg.setSourceEntity(149U);
    msg.setDestination(62966U);
    msg.setDestinationEntity(196U);
    msg.address = 4U;

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
    msg.setTimeStamp(0.51027353903885);
    msg.setSource(26784U);
    msg.setSourceEntity(125U);
    msg.setDestination(21425U);
    msg.setDestinationEntity(146U);
    msg.address = 168U;

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
    msg.setTimeStamp(0.08857578410625755);
    msg.setSource(21384U);
    msg.setSourceEntity(11U);
    msg.setDestination(46110U);
    msg.setDestinationEntity(213U);
    msg.address = 69U;

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
    msg.setTimeStamp(0.8108595213543794);
    msg.setSource(25966U);
    msg.setSourceEntity(138U);
    msg.setDestination(12830U);
    msg.setDestinationEntity(43U);
    msg.address = 82U;
    msg.status = 173U;
    msg.range = 0.6393408723672892;

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
    msg.setTimeStamp(0.9937229979029223);
    msg.setSource(60762U);
    msg.setSourceEntity(107U);
    msg.setDestination(16412U);
    msg.setDestinationEntity(69U);
    msg.address = 212U;
    msg.status = 160U;
    msg.range = 0.8466898212601242;

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
    msg.setTimeStamp(0.9950760740419792);
    msg.setSource(1010U);
    msg.setSourceEntity(178U);
    msg.setDestination(7408U);
    msg.setDestinationEntity(162U);
    msg.address = 23U;
    msg.status = 160U;
    msg.range = 0.9915387398469065;

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
    msg.setTimeStamp(0.17258271663135283);
    msg.setSource(21893U);
    msg.setSourceEntity(123U);
    msg.setDestination(34990U);
    msg.setDestinationEntity(114U);
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1171656750581872;
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
    msg.setTimeStamp(0.35953350807314044);
    msg.setSource(9279U);
    msg.setSourceEntity(196U);
    msg.setDestination(307U);
    msg.setDestinationEntity(204U);
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("LWOFZVWYFTMZZRHMCUUROXDIXSTEQLYSAKMIFSXRBMUTCTVRRSDWAQRMZALERJCGOGUQPNTGJDAYWDEFWPZVIACMNIHUBHEVPCQCQKDMLXHRXUWMZWSBHTOFBUTWJPDXJQYOQEJXPQOVBHAVTLFVKBEIAGZKJPODZNUBEENEALOCYJXLFSYKISDECVUOGRZBYHUYGVFGNN");
    tmp_msg_0.predicate.assign("QPSUEHHBHKAILERCNMKOCAMWVBOQYL");
    tmp_msg_0.attributes.assign("DWSZMYIDISFXIRJSXWMKPOFUYUDHREKNTJCRXGLTGGLVKQYJHEBXPPXLQNXUYMMCEDVHYRUZVZHAFKZYATJQXFLCNACJHLFVKVTBOKWBFEXIBYQOQDZNRWUUAMSDOUEUMKPBYSNPAHGVFDIOZONWUDLRJDFPYZGAWKIVLFMNWGUSYTTECIOSHJTQBSRKSSTPQCRB");
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
    msg.setTimeStamp(0.11531982078475222);
    msg.setSource(6821U);
    msg.setSourceEntity(138U);
    msg.setDestination(25192U);
    msg.setDestinationEntity(26U);
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.19062519463833072;
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
    msg.setTimeStamp(0.813450281276778);
    msg.setSource(46068U);
    msg.setSourceEntity(13U);
    msg.setDestination(54406U);
    msg.setDestinationEntity(228U);
    msg.enable = 185U;

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
    msg.setTimeStamp(0.9682841384613152);
    msg.setSource(57756U);
    msg.setSourceEntity(192U);
    msg.setDestination(45909U);
    msg.setDestinationEntity(171U);
    msg.enable = 114U;

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
    msg.setTimeStamp(0.5564895261040755);
    msg.setSource(48157U);
    msg.setSourceEntity(100U);
    msg.setDestination(39087U);
    msg.setDestinationEntity(62U);
    msg.enable = 209U;

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
    msg.setTimeStamp(0.17070052427557125);
    msg.setSource(7042U);
    msg.setSourceEntity(180U);
    msg.setDestination(42732U);
    msg.setDestinationEntity(181U);
    msg.summary = 248U;
    msg.level = 13U;

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
    msg.setTimeStamp(0.9553024599722313);
    msg.setSource(51386U);
    msg.setSourceEntity(14U);
    msg.setDestination(41284U);
    msg.setDestinationEntity(245U);
    msg.summary = 110U;
    msg.level = 184U;

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
    msg.setTimeStamp(0.5579876361756739);
    msg.setSource(40287U);
    msg.setSourceEntity(59U);
    msg.setDestination(44574U);
    msg.setDestinationEntity(124U);
    msg.summary = 208U;
    msg.level = 7U;

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
    msg.setTimeStamp(0.12863915626418765);
    msg.setSource(48527U);
    msg.setSourceEntity(236U);
    msg.setDestination(64884U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.6039040034241258);
    msg.setSource(42791U);
    msg.setSourceEntity(158U);
    msg.setDestination(57621U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.37328257608354964);
    msg.setSource(64395U);
    msg.setSourceEntity(115U);
    msg.setDestination(38092U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.17343549868350738);
    msg.setSource(39069U);
    msg.setSourceEntity(209U);
    msg.setDestination(30337U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.09218101433967352);
    msg.setSource(11282U);
    msg.setSourceEntity(103U);
    msg.setDestination(15118U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.06347778845945573);
    msg.setSource(15923U);
    msg.setSourceEntity(19U);
    msg.setDestination(48067U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.13590978672793974);
    msg.setSource(8584U);
    msg.setSourceEntity(72U);
    msg.setDestination(27972U);
    msg.setDestinationEntity(94U);
    msg.op = 81U;
    msg.system.assign("KXDBIZMYSTDLAYEQSEPECAHHSQLESMZUMPVPNWWDGTIILBBRTRUHOWAAPISIKXIBM");
    msg.range = 0.4462463619442568;
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 4U;
    tmp_msg_0.entities.assign("YTGHDYUDFZ");
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
    msg.setTimeStamp(0.9606401815308561);
    msg.setSource(31476U);
    msg.setSourceEntity(97U);
    msg.setDestination(22602U);
    msg.setDestinationEntity(166U);
    msg.op = 13U;
    msg.system.assign("VKATDJOCHIKWCJEFMPKEVVJAHLXSDSXSAWJIKBZBTTXWXXFTDQVONZRQQIUTQRSYPZVNDBHMLPZIGVUONMLQXJPVWLQIIPCRMAEPAGEARYDSPZJZUGUSEUBMEYDIGXFZFBQHKVGOGSDKSUOFNCNLOWZFELLTSUSXDGYKHAYJQCELQHDUNRKML");
    msg.range = 0.2524059488655085;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.6280569827045044;
    tmp_msg_0.type = 242U;
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
    msg.setTimeStamp(0.3542133007469199);
    msg.setSource(22447U);
    msg.setSourceEntity(249U);
    msg.setDestination(45003U);
    msg.setDestinationEntity(137U);
    msg.op = 189U;
    msg.system.assign("ZMIJMCIMJJGOUWUNKUOYLDDTTSEPTWWLIXOWZLSBMZNLSUFHCVUZLOEEJNXAXOLPBOALAITUNJZWVTICEWHYHLWRHAGIFVKOOYTGMCBEFQFPQEFFFSVTIKNXRHPGHAZXMEKNQJHTSGCCDDSXDYFQCJCYQCVMPBVHGDNFJENBLDQRGWBAIQJUVLPYWUMSRUPXAMZVRHRPQHRVPKBTDGRSJG");
    msg.range = 0.438454132845688;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 138U;
    tmp_msg_0.request_id = 33675U;
    tmp_msg_0.command = 70U;
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 17766U;
    tmp_tmp_msg_0_0.lat = 0.15980429055283263;
    tmp_tmp_msg_0_0.lon = 0.2222111332185034;
    tmp_tmp_msg_0_0.z = 0.8773223089319133;
    tmp_tmp_msg_0_0.z_units = 145U;
    tmp_tmp_msg_0_0.speed = 0.01538022534777328;
    tmp_tmp_msg_0_0.speed_units = 46U;
    tmp_tmp_msg_0_0.custom.assign("ETZKIOVCSMWXWYSRHNQBAIPEOVQDOVWZIOJEOLTXWWZ");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 42115U;
    tmp_msg_0.info.assign("ONPYUSTJWTEUOCSOBORCTMGMXSBVSBXZJXJDYEVIQXFSFJ");
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
    msg.setTimeStamp(0.9083911703053563);
    msg.setSource(54844U);
    msg.setSourceEntity(192U);
    msg.setDestination(35139U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.6758162147544798);
    msg.setSource(20158U);
    msg.setSourceEntity(26U);
    msg.setDestination(8204U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.6723976152682343);
    msg.setSource(8167U);
    msg.setSourceEntity(245U);
    msg.setDestination(14263U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.7689498843095783);
    msg.setSource(43743U);
    msg.setSourceEntity(149U);
    msg.setDestination(24752U);
    msg.setDestinationEntity(238U);
    msg.list.assign("PPEWIXGJUFJZEFCXYZXWKDIPJVWGEQLUNYWECVHCSPQGXBLTUKJIBEOXAYZEHIUTLTKMGJRMQDSFUIFBKNXGQAAHVWPJVUDXQJHLSLNMGXVFSQBHRQJAAVCTLNBHMAJMFFKZDYCWFGZHXYRSRSUMDLCHBPQYETCZKKAIOCWNOYNSAE");

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
    msg.setTimeStamp(0.9455007292061214);
    msg.setSource(59388U);
    msg.setSourceEntity(110U);
    msg.setDestination(41991U);
    msg.setDestinationEntity(63U);
    msg.list.assign("EOCFEFUGIUOOXOZTQOZAIPMNUXXLDQQVFLWXGUEQGPYHWZXXFGBHIMNFMQXTFSCSBVKJYATUJWQISYHYMKCNLLVXOPKPMREOBOZJLAVEYQTOVYDVRHH");

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
    msg.setTimeStamp(0.819508352847718);
    msg.setSource(831U);
    msg.setSourceEntity(224U);
    msg.setDestination(1720U);
    msg.setDestinationEntity(103U);
    msg.list.assign("UYPBAMAOMLMKNWPISIXHI");

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
    msg.setTimeStamp(0.28552725562572157);
    msg.setSource(8589U);
    msg.setSourceEntity(127U);
    msg.setDestination(23351U);
    msg.setDestinationEntity(166U);
    msg.value = 13178;

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
    msg.setTimeStamp(0.8596938313408198);
    msg.setSource(62310U);
    msg.setSourceEntity(166U);
    msg.setDestination(42908U);
    msg.setDestinationEntity(92U);
    msg.value = -6098;

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
    msg.setTimeStamp(0.8416522896557499);
    msg.setSource(43259U);
    msg.setSourceEntity(159U);
    msg.setDestination(62366U);
    msg.setDestinationEntity(189U);
    msg.value = 25160;

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
    msg.setTimeStamp(0.6289889007416378);
    msg.setSource(54826U);
    msg.setSourceEntity(56U);
    msg.setDestination(56127U);
    msg.setDestinationEntity(47U);
    msg.value = 0.5633903203344904;

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
    msg.setTimeStamp(0.9252342566527838);
    msg.setSource(29928U);
    msg.setSourceEntity(93U);
    msg.setDestination(4677U);
    msg.setDestinationEntity(215U);
    msg.value = 0.7295154650066948;

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
    msg.setTimeStamp(0.44566797462128216);
    msg.setSource(41861U);
    msg.setSourceEntity(137U);
    msg.setDestination(38194U);
    msg.setDestinationEntity(147U);
    msg.value = 0.9627129059951662;

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
    msg.setTimeStamp(0.8648616510245808);
    msg.setSource(30508U);
    msg.setSourceEntity(210U);
    msg.setDestination(14629U);
    msg.setDestinationEntity(67U);
    msg.value = 0.06984293214167614;

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
    msg.setTimeStamp(0.841221086814871);
    msg.setSource(21585U);
    msg.setSourceEntity(173U);
    msg.setDestination(48296U);
    msg.setDestinationEntity(132U);
    msg.value = 0.43236255918362665;

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
    msg.setTimeStamp(0.5545053469941666);
    msg.setSource(55873U);
    msg.setSourceEntity(155U);
    msg.setDestination(14725U);
    msg.setDestinationEntity(123U);
    msg.value = 0.8503047330146664;

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
    msg.setTimeStamp(0.6385954441409515);
    msg.setSource(36708U);
    msg.setSourceEntity(86U);
    msg.setDestination(42810U);
    msg.setDestinationEntity(152U);
    msg.validity = 10778U;
    msg.type = 143U;
    msg.utc_year = 30720U;
    msg.utc_month = 70U;
    msg.utc_day = 247U;
    msg.utc_time = 0.2746125028872638;
    msg.lat = 0.5668819233115873;
    msg.lon = 0.5216889508008167;
    msg.height = 0.7775402433150592;
    msg.satellites = 152U;
    msg.cog = 0.38142625861691226;
    msg.sog = 0.18248846652218398;
    msg.hdop = 0.1714771369702155;
    msg.vdop = 0.6348895304893821;
    msg.hacc = 0.42787981993454316;
    msg.vacc = 0.43347637781482995;

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
    msg.setTimeStamp(0.2899394811776256);
    msg.setSource(44931U);
    msg.setSourceEntity(38U);
    msg.setDestination(36934U);
    msg.setDestinationEntity(213U);
    msg.validity = 47822U;
    msg.type = 144U;
    msg.utc_year = 59590U;
    msg.utc_month = 14U;
    msg.utc_day = 108U;
    msg.utc_time = 0.44470215852221195;
    msg.lat = 0.7387674722121472;
    msg.lon = 0.5310139577443109;
    msg.height = 0.15463625143103188;
    msg.satellites = 243U;
    msg.cog = 0.7495991448107072;
    msg.sog = 0.889550508544593;
    msg.hdop = 0.27531248667346564;
    msg.vdop = 0.9959972648760946;
    msg.hacc = 0.5832016955567316;
    msg.vacc = 0.775139410614262;

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
    msg.setTimeStamp(0.33230994976569794);
    msg.setSource(40153U);
    msg.setSourceEntity(157U);
    msg.setDestination(57216U);
    msg.setDestinationEntity(95U);
    msg.validity = 13726U;
    msg.type = 20U;
    msg.utc_year = 51273U;
    msg.utc_month = 233U;
    msg.utc_day = 73U;
    msg.utc_time = 0.9272248862951016;
    msg.lat = 0.590766727433343;
    msg.lon = 0.8762979955931127;
    msg.height = 0.4570630616555761;
    msg.satellites = 68U;
    msg.cog = 0.52809722885905;
    msg.sog = 0.9577672253572421;
    msg.hdop = 0.7850030293656569;
    msg.vdop = 0.2407455810566087;
    msg.hacc = 0.6583151119128351;
    msg.vacc = 0.03992710713292835;

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
    msg.setTimeStamp(0.1540573267844485);
    msg.setSource(28305U);
    msg.setSourceEntity(77U);
    msg.setDestination(33829U);
    msg.setDestinationEntity(24U);
    msg.time = 0.9014176840242016;
    msg.phi = 0.4907148737161342;
    msg.theta = 0.37111884175155807;
    msg.psi = 0.5890264179102169;
    msg.psi_magnetic = 0.15659171346877143;

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
    msg.setTimeStamp(0.6977161133802373);
    msg.setSource(50289U);
    msg.setSourceEntity(47U);
    msg.setDestination(16348U);
    msg.setDestinationEntity(11U);
    msg.time = 0.9331976879037749;
    msg.phi = 0.8573095518880702;
    msg.theta = 0.6527669463085285;
    msg.psi = 0.8741038586737186;
    msg.psi_magnetic = 0.43070488023848197;

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
    msg.setTimeStamp(0.6764706917508105);
    msg.setSource(43615U);
    msg.setSourceEntity(160U);
    msg.setDestination(48166U);
    msg.setDestinationEntity(43U);
    msg.time = 0.6970991982715151;
    msg.phi = 0.664595377934981;
    msg.theta = 0.08657369149074079;
    msg.psi = 0.5570713855782672;
    msg.psi_magnetic = 0.2669855146821246;

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
    msg.setTimeStamp(0.7346300041048692);
    msg.setSource(62455U);
    msg.setSourceEntity(20U);
    msg.setDestination(40116U);
    msg.setDestinationEntity(191U);
    msg.time = 0.13124642959996913;
    msg.x = 0.08785685964498591;
    msg.y = 0.31723820401951575;
    msg.z = 0.5039682544201636;
    msg.timestep = 0.07575584324291018;

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
    msg.setTimeStamp(0.22155104970135242);
    msg.setSource(9977U);
    msg.setSourceEntity(145U);
    msg.setDestination(48345U);
    msg.setDestinationEntity(29U);
    msg.time = 0.24195979952578794;
    msg.x = 0.814174112098188;
    msg.y = 0.19607308874960405;
    msg.z = 0.8009388037689036;
    msg.timestep = 0.6084492629396335;

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
    msg.setTimeStamp(0.9777145361799112);
    msg.setSource(21280U);
    msg.setSourceEntity(192U);
    msg.setDestination(26085U);
    msg.setDestinationEntity(153U);
    msg.time = 0.15104048623551036;
    msg.x = 0.49867387973812904;
    msg.y = 0.7762026068151828;
    msg.z = 0.48211588393891125;
    msg.timestep = 0.15651084695929285;

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
    msg.setTimeStamp(0.7142893510450794);
    msg.setSource(39784U);
    msg.setSourceEntity(46U);
    msg.setDestination(42225U);
    msg.setDestinationEntity(87U);
    msg.time = 0.5749009918265116;
    msg.x = 0.14709685169621045;
    msg.y = 0.7726854330006647;
    msg.z = 0.8640797941003808;

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
    msg.setTimeStamp(0.21549602788637978);
    msg.setSource(33830U);
    msg.setSourceEntity(155U);
    msg.setDestination(33140U);
    msg.setDestinationEntity(115U);
    msg.time = 0.7714747422484085;
    msg.x = 0.6356021913601164;
    msg.y = 0.6733781017897938;
    msg.z = 0.8874235285869894;

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
    msg.setTimeStamp(0.4009310555316006);
    msg.setSource(14409U);
    msg.setSourceEntity(226U);
    msg.setDestination(52800U);
    msg.setDestinationEntity(50U);
    msg.time = 0.19244750550915468;
    msg.x = 0.16224615928550734;
    msg.y = 0.0692218008917912;
    msg.z = 0.71999958339972;

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
    msg.setTimeStamp(0.2914105734269157);
    msg.setSource(16857U);
    msg.setSourceEntity(75U);
    msg.setDestination(31958U);
    msg.setDestinationEntity(44U);
    msg.time = 0.16648276497833492;
    msg.x = 0.9725250274891869;
    msg.y = 0.3200476282718575;
    msg.z = 0.3117201471675255;

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
    msg.setTimeStamp(0.36082157710829066);
    msg.setSource(18876U);
    msg.setSourceEntity(138U);
    msg.setDestination(42414U);
    msg.setDestinationEntity(62U);
    msg.time = 0.8115035087181446;
    msg.x = 0.01665834587022219;
    msg.y = 0.02915301054282149;
    msg.z = 0.15115925336802538;

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
    msg.setTimeStamp(0.2930579223693547);
    msg.setSource(63395U);
    msg.setSourceEntity(152U);
    msg.setDestination(9030U);
    msg.setDestinationEntity(28U);
    msg.time = 0.8891924387812036;
    msg.x = 0.6650499944494151;
    msg.y = 0.9860793712262882;
    msg.z = 0.6827368975395327;

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
    msg.setTimeStamp(0.7272066790966916);
    msg.setSource(50394U);
    msg.setSourceEntity(37U);
    msg.setDestination(41076U);
    msg.setDestinationEntity(179U);
    msg.time = 0.8024111094218023;
    msg.x = 0.79558058846158;
    msg.y = 0.6861136939066454;
    msg.z = 0.887142128190915;

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
    msg.setTimeStamp(0.4980869240367687);
    msg.setSource(30897U);
    msg.setSourceEntity(149U);
    msg.setDestination(10645U);
    msg.setDestinationEntity(215U);
    msg.time = 0.06371730213398041;
    msg.x = 0.16811623439979717;
    msg.y = 0.9266965334382745;
    msg.z = 0.202298774510967;

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
    msg.setTimeStamp(0.6343590430742566);
    msg.setSource(32345U);
    msg.setSourceEntity(154U);
    msg.setDestination(30391U);
    msg.setDestinationEntity(10U);
    msg.time = 0.5031164460601212;
    msg.x = 0.294633051193645;
    msg.y = 0.5333172349438402;
    msg.z = 0.3341428218813083;

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
    msg.setTimeStamp(0.4558861300804308);
    msg.setSource(37357U);
    msg.setSourceEntity(244U);
    msg.setDestination(28119U);
    msg.setDestinationEntity(38U);
    msg.validity = 197U;
    msg.x = 0.0028232981769235055;
    msg.y = 0.35409938437606425;
    msg.z = 0.6748364188002433;

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
    msg.setTimeStamp(0.31598750618814275);
    msg.setSource(47190U);
    msg.setSourceEntity(126U);
    msg.setDestination(46424U);
    msg.setDestinationEntity(69U);
    msg.validity = 180U;
    msg.x = 0.3363312405416711;
    msg.y = 0.27033991564042736;
    msg.z = 0.5863153111926405;

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
    msg.setTimeStamp(0.24910882202579054);
    msg.setSource(31061U);
    msg.setSourceEntity(48U);
    msg.setDestination(17625U);
    msg.setDestinationEntity(207U);
    msg.validity = 196U;
    msg.x = 0.9917764826243097;
    msg.y = 0.27593912282250344;
    msg.z = 0.4314662924148407;

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
    msg.setTimeStamp(0.07157251455369784);
    msg.setSource(48133U);
    msg.setSourceEntity(61U);
    msg.setDestination(63889U);
    msg.setDestinationEntity(139U);
    msg.validity = 50U;
    msg.x = 0.40862002529751074;
    msg.y = 0.9303244885789796;
    msg.z = 0.5573873011344636;

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
    msg.setTimeStamp(0.6684975153939008);
    msg.setSource(28786U);
    msg.setSourceEntity(9U);
    msg.setDestination(13141U);
    msg.setDestinationEntity(114U);
    msg.validity = 193U;
    msg.x = 0.9218567591408799;
    msg.y = 0.14636493845279297;
    msg.z = 0.5118565828183763;

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
    msg.setTimeStamp(0.677395244833776);
    msg.setSource(9079U);
    msg.setSourceEntity(64U);
    msg.setDestination(47432U);
    msg.setDestinationEntity(57U);
    msg.validity = 30U;
    msg.x = 0.17492646096730735;
    msg.y = 0.6934414200044106;
    msg.z = 0.8599982022118716;

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
    msg.setTimeStamp(0.013130640520754078);
    msg.setSource(28356U);
    msg.setSourceEntity(83U);
    msg.setDestination(57099U);
    msg.setDestinationEntity(126U);
    msg.time = 0.1925022122774872;
    msg.x = 0.10071591565142124;
    msg.y = 0.2616242712621356;
    msg.z = 0.5664525035768703;

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
    msg.setTimeStamp(0.6449485110905278);
    msg.setSource(29732U);
    msg.setSourceEntity(122U);
    msg.setDestination(20676U);
    msg.setDestinationEntity(44U);
    msg.time = 0.1095626226314853;
    msg.x = 0.39922416049975995;
    msg.y = 0.6863198192585623;
    msg.z = 0.5386135011003697;

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
    msg.setTimeStamp(0.980291012204193);
    msg.setSource(10787U);
    msg.setSourceEntity(155U);
    msg.setDestination(53946U);
    msg.setDestinationEntity(81U);
    msg.time = 0.9398178634184461;
    msg.x = 0.9611470482100529;
    msg.y = 0.5788462707203349;
    msg.z = 0.13340672610511373;

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
    msg.setTimeStamp(0.9797587210073564);
    msg.setSource(31844U);
    msg.setSourceEntity(164U);
    msg.setDestination(36577U);
    msg.setDestinationEntity(113U);
    msg.validity = 84U;
    msg.value = 0.39738331601918475;

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
    msg.setTimeStamp(0.11514460967278284);
    msg.setSource(27382U);
    msg.setSourceEntity(42U);
    msg.setDestination(8248U);
    msg.setDestinationEntity(59U);
    msg.validity = 22U;
    msg.value = 0.4367756512944876;

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
    msg.setTimeStamp(0.6605561058638738);
    msg.setSource(28781U);
    msg.setSourceEntity(43U);
    msg.setDestination(59093U);
    msg.setDestinationEntity(236U);
    msg.validity = 253U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.19995936327016572;
    tmp_msg_0.beam_height = 0.2154158103718512;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.16334967275577705;

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
    msg.setTimeStamp(0.8610747934523233);
    msg.setSource(51106U);
    msg.setSourceEntity(154U);
    msg.setDestination(48246U);
    msg.setDestinationEntity(72U);
    msg.value = 0.009512974415929132;

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
    msg.setTimeStamp(0.9264122787567282);
    msg.setSource(8631U);
    msg.setSourceEntity(231U);
    msg.setDestination(54603U);
    msg.setDestinationEntity(16U);
    msg.value = 0.2241435384995415;

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
    msg.setTimeStamp(0.9823387674975892);
    msg.setSource(22374U);
    msg.setSourceEntity(68U);
    msg.setDestination(21472U);
    msg.setDestinationEntity(53U);
    msg.value = 0.4351148246411416;

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
    msg.setTimeStamp(0.1213086879517491);
    msg.setSource(62135U);
    msg.setSourceEntity(253U);
    msg.setDestination(41095U);
    msg.setDestinationEntity(38U);
    msg.value = 0.4247688923634153;

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
    msg.setTimeStamp(0.9121004750880068);
    msg.setSource(35419U);
    msg.setSourceEntity(64U);
    msg.setDestination(36373U);
    msg.setDestinationEntity(143U);
    msg.value = 0.7537501403359114;

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
    msg.setTimeStamp(0.737099172355318);
    msg.setSource(49830U);
    msg.setSourceEntity(195U);
    msg.setDestination(5226U);
    msg.setDestinationEntity(191U);
    msg.value = 0.03181116032290454;

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
    msg.setTimeStamp(0.10211923931331801);
    msg.setSource(59000U);
    msg.setSourceEntity(198U);
    msg.setDestination(38508U);
    msg.setDestinationEntity(202U);
    msg.value = 0.764556546746893;

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
    msg.setTimeStamp(0.8307165909101247);
    msg.setSource(47354U);
    msg.setSourceEntity(104U);
    msg.setDestination(45058U);
    msg.setDestinationEntity(202U);
    msg.value = 0.4375391438315238;

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
    msg.setTimeStamp(0.2468662888817551);
    msg.setSource(19855U);
    msg.setSourceEntity(121U);
    msg.setDestination(21128U);
    msg.setDestinationEntity(231U);
    msg.value = 0.07388232439539588;

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
    msg.setTimeStamp(0.43975293333083865);
    msg.setSource(53429U);
    msg.setSourceEntity(105U);
    msg.setDestination(45707U);
    msg.setDestinationEntity(203U);
    msg.value = 0.14896395690983566;

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
    msg.setTimeStamp(0.864480631537624);
    msg.setSource(9185U);
    msg.setSourceEntity(88U);
    msg.setDestination(4867U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5402215113624761;

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
    msg.setTimeStamp(0.019443283232856712);
    msg.setSource(24949U);
    msg.setSourceEntity(121U);
    msg.setDestination(5174U);
    msg.setDestinationEntity(93U);
    msg.value = 0.43261380566935936;

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
    msg.setTimeStamp(0.7689975104639083);
    msg.setSource(18239U);
    msg.setSourceEntity(229U);
    msg.setDestination(21779U);
    msg.setDestinationEntity(238U);
    msg.value = 0.5346438948834734;

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
    msg.setTimeStamp(0.7501892409891829);
    msg.setSource(3104U);
    msg.setSourceEntity(79U);
    msg.setDestination(16428U);
    msg.setDestinationEntity(14U);
    msg.value = 0.48541552455599923;

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
    msg.setTimeStamp(0.44544884439736543);
    msg.setSource(4944U);
    msg.setSourceEntity(248U);
    msg.setDestination(28690U);
    msg.setDestinationEntity(36U);
    msg.value = 0.5716609580295884;

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
    msg.setTimeStamp(0.10355538663788);
    msg.setSource(28702U);
    msg.setSourceEntity(60U);
    msg.setDestination(32365U);
    msg.setDestinationEntity(226U);
    msg.value = 0.9697634382635437;

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
    msg.setTimeStamp(0.31707548020385445);
    msg.setSource(49345U);
    msg.setSourceEntity(251U);
    msg.setDestination(30205U);
    msg.setDestinationEntity(21U);
    msg.value = 0.4685646968609445;

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
    msg.setTimeStamp(0.5815117934663542);
    msg.setSource(11544U);
    msg.setSourceEntity(222U);
    msg.setDestination(33805U);
    msg.setDestinationEntity(73U);
    msg.value = 0.8763917444786828;

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
    msg.setTimeStamp(0.8762474679530066);
    msg.setSource(50894U);
    msg.setSourceEntity(160U);
    msg.setDestination(19454U);
    msg.setDestinationEntity(147U);
    msg.value = 0.33044694046146295;

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
    msg.setTimeStamp(0.8393594252830976);
    msg.setSource(54381U);
    msg.setSourceEntity(177U);
    msg.setDestination(9620U);
    msg.setDestinationEntity(196U);
    msg.value = 0.6264265666500685;

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
    msg.setTimeStamp(0.17418522501499212);
    msg.setSource(598U);
    msg.setSourceEntity(141U);
    msg.setDestination(30515U);
    msg.setDestinationEntity(88U);
    msg.value = 0.6266086094743609;

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
    msg.setTimeStamp(0.7482431007358284);
    msg.setSource(51483U);
    msg.setSourceEntity(128U);
    msg.setDestination(38298U);
    msg.setDestinationEntity(139U);
    msg.value = 0.9038378791838586;

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
    msg.setTimeStamp(0.05679159883455198);
    msg.setSource(49701U);
    msg.setSourceEntity(171U);
    msg.setDestination(5123U);
    msg.setDestinationEntity(25U);
    msg.value = 0.8544988919404041;

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
    msg.setTimeStamp(0.18217119925902658);
    msg.setSource(23603U);
    msg.setSourceEntity(151U);
    msg.setDestination(17816U);
    msg.setDestinationEntity(168U);
    msg.value = 0.1783244161344869;

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
    msg.setTimeStamp(0.9630201802462817);
    msg.setSource(36092U);
    msg.setSourceEntity(113U);
    msg.setDestination(33396U);
    msg.setDestinationEntity(92U);
    msg.direction = 0.31450233555376894;
    msg.speed = 0.4559681835110079;

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
    msg.setTimeStamp(0.7308083752054092);
    msg.setSource(13031U);
    msg.setSourceEntity(153U);
    msg.setDestination(27908U);
    msg.setDestinationEntity(56U);
    msg.direction = 0.6343670702439419;
    msg.speed = 0.5207991803876219;

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
    msg.setTimeStamp(0.7749091206629383);
    msg.setSource(34813U);
    msg.setSourceEntity(15U);
    msg.setDestination(35959U);
    msg.setDestinationEntity(254U);
    msg.direction = 0.4824834576902207;
    msg.speed = 0.7087446337528487;

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
    msg.setTimeStamp(0.35634358280733547);
    msg.setSource(134U);
    msg.setSourceEntity(38U);
    msg.setDestination(45087U);
    msg.setDestinationEntity(161U);
    msg.value = 0.1789881952026412;

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
    msg.setTimeStamp(0.8742537159820113);
    msg.setSource(30308U);
    msg.setSourceEntity(163U);
    msg.setDestination(64147U);
    msg.setDestinationEntity(2U);
    msg.value = 0.22761668488516484;

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
    msg.setTimeStamp(0.15308735408680718);
    msg.setSource(6520U);
    msg.setSourceEntity(205U);
    msg.setDestination(45334U);
    msg.setDestinationEntity(218U);
    msg.value = 0.005551148167611264;

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
    msg.setTimeStamp(0.5607231031749197);
    msg.setSource(45095U);
    msg.setSourceEntity(84U);
    msg.setDestination(3922U);
    msg.setDestinationEntity(114U);
    msg.value.assign("NYJBCZJWZWJPTMRFCANAZWFLSSQDXNVFFTGHYZXNGZWEQHYDUOIMUVQFRTRMBPPJAEYQXVHUIQBKJQYBIBLINKELMAZWPZTKDSCJOURGBUYPGAQCBJGNYEALYICMSJGXXGLVVIBUVZOLKUFKHRPSPELSPIOTKHEHFSSYDPJRCSWDXXBHVCATDZCRFDBRTCKLAVWTRDGJHWOKXKMQFNENMIQIXHSAFV");

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
    msg.setTimeStamp(0.30603048350508744);
    msg.setSource(57526U);
    msg.setSourceEntity(209U);
    msg.setDestination(65488U);
    msg.setDestinationEntity(142U);
    msg.value.assign("EPZPEOFQLPVRGSIVQKMQWFKREZMYKKSSDHMNRIXTOXKIMAFGIWDBVMEADXOTJNLPFPEJSSJRMSFZZFRYKGSPHIJAOCCOWGABSXGZCUXBPQYYTLQXZHAVWCVYDHNZMS");

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
    msg.setTimeStamp(0.4111190138052295);
    msg.setSource(45931U);
    msg.setSourceEntity(59U);
    msg.setDestination(59355U);
    msg.setDestinationEntity(90U);
    msg.value.assign("ITCCSPQXFVTPPQKUNXWLRFUDWTYFBHGJCZGAVUIVFPQFNQKRCJEQBAMQHPURMVHUTOOUMZZMFTWDNWJSYLDOHSMOOVGZKNCEMSEGDMGIPMODXMRGINEFHYNCDDZOXVLIBGGWIWYZGKOATMOEAPELTJEXRVITVSVTAUBFPAANBWQSHBNWYUSKWPHJI");

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
    msg.setTimeStamp(0.8634796062062321);
    msg.setSource(11446U);
    msg.setSourceEntity(18U);
    msg.setDestination(21424U);
    msg.setDestinationEntity(83U);
    const char tmp_msg_0[] = {-6, -36, 126, -58, -114, -39, -115, 70, 32, -92, 25, -81, 97, 104, 36, 72, -43, 24, -10, -107, -109, 8, -115, -28, 78, -54, 2, 118, -86, 15, 108, -66, -90, -52, 40, 39, -65, -76, 13, -83, 1, 119, 21, 82, -118, -57, 29, 116, 113, 58, 40, -105, -26, 15, -33, -36, 59, -23, 99, -76, 10, 14, 92, 96, -128, 62, 93, 16, 12, 63, 63, -31, -16, 54, 58, 120, -48, -89, -127, -85, -127, -103, -51, 81, 67, -16, -95, -48, -93, 71, 39, 26, -101, 95, -78, 66, -52, -42, -65, -54, -96, -58, -18, -44, -115, 14, 101, 46, -90, 31, 88, 28, -86, -58, -26, -111, -69, -52, 119, 3, 64, 125, -87, 111, 82, 94, 29, 83, -43, -55, -5, 21, 20, 40, 58, -23, -49, -22, 11, 37, -26, 41, -92, -45, 82, -108, -30, -20, 32, -34, 38, -43, 82, -108, 63, 7, -60};
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
    msg.setTimeStamp(0.14765502256479235);
    msg.setSource(50603U);
    msg.setSourceEntity(12U);
    msg.setDestination(42310U);
    msg.setDestinationEntity(44U);
    const char tmp_msg_0[] = {115, -13, 93, -80, -94, 16, -67, -115, 80, -62, -68, 83, 83, 125, -116, -127, -57, -7, -110, 32, 123, -44, 53, 45, -36, 5, 15, -54, 41, 53, -5, 118, 108, 34, -127, 34, -23, -123, 114, -32, 118, -26, -40, 81, 104, -65, 73, -21, 61, -75, -118, -56, 57, 43, 115, -18, -19, 25, 15, 76, -61, 15, -113, -76, 38, 70, -24, 125, 92, -2, 75, 18, -35, 118, -88, -86, 0, -27, 91, -48, -47, 34, -105, -24, -48, 19, 78, 101, -31, 6, 9, 88, -93, 10, 69, 68, -113, -83, 101, -112, -55, 62, -61, 46, 69, 17, 16, -33, -37, -68, -64, 3, 119, 93, 52, 57, -103, 31, -8, -48, -6, -6, 123, 44, -121};
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
    msg.setTimeStamp(0.10645994988177043);
    msg.setSource(57834U);
    msg.setSourceEntity(237U);
    msg.setDestination(10383U);
    msg.setDestinationEntity(13U);
    const char tmp_msg_0[] = {-40, 23, -118, -18, -116, -64, -100, -93, 90, 78, -3, 76, 47, 53, -20, 103, 63, 61, 50, 52, -69, 90, 52, 77, 123, -17, 31, 93, -16, 54, 109, 48, -108, 70, 28, 21, -89, -58, 18, 4, -85, 17, -22, 80, -82, -71, 82, 27, 74, -51, -10, 6, 86, 20, 3, -18, -58, -85, 71, 46, -84, -10, 10, 19, -52, 11, 96, 67, -102, -53, -77, -87, 99, -116, 18, -9, -126, 21, 96, -113, 22, 114, -47, -97, 63, 38, -45, 71, -98, 92, -67, 67, -61, -3, 42, -60, 78, 70, 0, -11, -91, 34, 59, -3, -102, 12, -52, 123, 66, -105, 68, -25, 14, -74, -42, -118, 62, -97, 120, 62, 92, 79, 40, -4, -109, -75, 114, 101, 88, -39, 65, -85, -85, -85, 39, -66, 16, -35, -68, -72, -98, 111, 35, -96, 107, 85, 88, -48, 13, 84, -76, -38, 56, 37, -56, 11, 74, 15, 10, -24, -14, 18, -114, 12, -127, 66, 43, 82, 82, 83, 123, -54, 118, 64, 42, 44, 0, 69, 60, -77, -71, -100, -32, 107, 94, -94, 12, 38, -108, 62, -63, -18, 111, -76, -89, -12, 57, 30, 107, -119, 123, -89, -15, 60, 98, 89, -11, -35, -64, -19, 96, 55, -11, -35, -2, 90, 13, 64, -122, -63, -74, 101, -92, 117, -67, -105, 71, 93, -108, -79, 38, -52};
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
    msg.setTimeStamp(0.3319707961439924);
    msg.setSource(48441U);
    msg.setSourceEntity(138U);
    msg.setDestination(63217U);
    msg.setDestinationEntity(122U);
    msg.frequency = 540980182U;
    msg.min_range = 40432U;
    msg.max_range = 11074U;

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
    msg.setTimeStamp(0.17078212047917907);
    msg.setSource(53329U);
    msg.setSourceEntity(70U);
    msg.setDestination(52224U);
    msg.setDestinationEntity(180U);
    msg.frequency = 1737727516U;
    msg.min_range = 10257U;
    msg.max_range = 63929U;

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
    msg.setTimeStamp(0.07467309456606708);
    msg.setSource(25137U);
    msg.setSourceEntity(207U);
    msg.setDestination(58604U);
    msg.setDestinationEntity(140U);
    msg.frequency = 1898611496U;
    msg.min_range = 11980U;
    msg.max_range = 45909U;

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
    msg.setTimeStamp(0.053853779765197674);
    msg.setSource(59359U);
    msg.setSourceEntity(70U);
    msg.setDestination(23450U);
    msg.setDestinationEntity(171U);
    msg.type = 49U;
    msg.frequency = 568455510U;
    msg.min_range = 8477U;
    msg.max_range = 17945U;
    msg.bits_per_point = 154U;
    msg.scale_factor = 0.0238935654483845;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.896245552597612;
    tmp_msg_0.beam_height = 0.44090157328020807;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-45, 3, -122, 111, 33, 79, -76, 31, -112, -42, 85, 111, 96, -92, 20, 83, 6, 79, -69, -3, 98, -116, -18, -100, 77, 122, 126, 79, 91, 118, -68, -2, -41, -57, -47, -22, 111, -47, -33, 113};
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
    msg.setTimeStamp(0.7791526899555921);
    msg.setSource(17270U);
    msg.setSourceEntity(83U);
    msg.setDestination(22439U);
    msg.setDestinationEntity(109U);
    msg.type = 251U;
    msg.frequency = 1673393921U;
    msg.min_range = 36424U;
    msg.max_range = 24017U;
    msg.bits_per_point = 114U;
    msg.scale_factor = 0.38940073980913414;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.1605898258734747;
    tmp_msg_0.beam_height = 0.128965099554063;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-42, -74, -66, 4, 46, -65, 7, -9, -35, -33, 47, 39, -104, -2, 115, 97, -1, -77, 96, -40, 69, -104, -108, 10, -20, -28, 116, 76, 35, -24, -33, -28, 33, -51, -50, -59, 7, 35, 73, 79, -52, -89, 68, -113, 79, -124, 25, 34, 112, 126, -22, -96, -23, -101, -56, 68, -24, -113, -58, -97, -30, 59, -43, 9, 14, 112, 65, -86, 21, 50, -114, 80, 96, 67, 102, 80, -44, -116, -10, 51, 112, 22, -120, -122, 108, -102, 83, -61, 26, -56, 62, 23, -100, 56, 84, -128, -52, -61, -9, 97, -55, -17, -87, -21, -91, 85, -103, 81, -65, -34, -86, 48, 79, 115, -19, 72, 125, 32, 98, 44, -57, 50, 66, 22, -28, 43, 82, 105, -26, -115, 17, 11, 89, -120, 73, 49, -33, 60, 113, 43, -55, -43, 48, -6, -13, 56, 53, -118, -68, -77, -1, 40, -5, 7, 75, 106, -68, -103, -47, 54, -58, -62, 23, -76, 32, 16, -90, -100, -84, -123, 75, -128, 38, 19, -104, -69, -110, 8, 124, -90, -18, -100, 70, 48, 5, 111, 53, 120, -105, 24, 98, -56, 82, 109, -122, -108, -31, 29, -82, 98, 83, -38, 46, 64, -91, -49, -114, -100, -53, -30, 6, 108, 117, 24, 72, -55, 68, 112, 101, 54, 82, -45, -93, 117, 91, 45, 33, 46, -76, 44, -37, -118, 44, 3, -52, 19, -94, 8, 22, -51, 83, 27, -56, -102, 112, 92, -42, 98, 57, -105};
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
    msg.setTimeStamp(0.17925944982162256);
    msg.setSource(63478U);
    msg.setSourceEntity(98U);
    msg.setDestination(57147U);
    msg.setDestinationEntity(159U);
    msg.type = 13U;
    msg.frequency = 3663024168U;
    msg.min_range = 58814U;
    msg.max_range = 48390U;
    msg.bits_per_point = 199U;
    msg.scale_factor = 0.08986207713549055;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.03049212103273402;
    tmp_msg_0.beam_height = 0.6606508687798902;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {17, 33, -71, 14, 104, -17, -36, -44, -3, 26, 72, 57, 116, -6, -94, -10, -81, -106, 37, 15, 116, -42, 126, 1, -112, 90, -62, -117, 15, 28, -27, -128, -46, -85, -39, 80, -31, 21, -108, 40, -68, -102, -88, 121, 126, -14, 106, 26, -34, 58, 63, 20, -40, 102, 102, -8, 28, -44, -7, -10, -33, -39, 5, 111, -16, 51, -36, 89, -34, 56, -38, -3, -90, 126, -39, 70, 54, 82, 105, 101, -25, -97, 7, -54, 80, 51, -36, -5, 69, 72, 101, -110, -80, 109, 55, 104, 109, 107, -80, 36, 16, -103, -97, 118, -25, 114, 94, -115, -2, 49, 10, -69, 84, 34, 112, -122, 76, -34, -43, 9, 50, -122, 22, 103, 54, -28, 92, 24, 12, 34, 112, -60, 11, -99, 38, -51, 36, 40, -11, 5, 115, 79, 40, -73, -107, 88, -36, -41, 9, 126, 13, -17, -39, -103, 50, 51, -41, 80, -69, -104, -75, -21, 77, -122, -64, 0, -121, 20, 8, 21, -91, -33, -33, 19, 54, -63};
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
    msg.setTimeStamp(0.9598010275364138);
    msg.setSource(60358U);
    msg.setSourceEntity(207U);
    msg.setDestination(38430U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.6032067871902475);
    msg.setSource(51241U);
    msg.setSourceEntity(167U);
    msg.setDestination(38093U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.3193047967152337);
    msg.setSource(37281U);
    msg.setSourceEntity(54U);
    msg.setDestination(60240U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.28587479011281625);
    msg.setSource(58468U);
    msg.setSourceEntity(234U);
    msg.setDestination(15178U);
    msg.setDestinationEntity(118U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.5742749152943075);
    msg.setSource(61545U);
    msg.setSourceEntity(91U);
    msg.setDestination(39940U);
    msg.setDestinationEntity(149U);
    msg.op = 116U;

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
    msg.setTimeStamp(0.2881542019631538);
    msg.setSource(31208U);
    msg.setSourceEntity(247U);
    msg.setDestination(11312U);
    msg.setDestinationEntity(158U);
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
    msg.setTimeStamp(0.9425591344130022);
    msg.setSource(45801U);
    msg.setSourceEntity(70U);
    msg.setDestination(45018U);
    msg.setDestinationEntity(61U);
    msg.value = 0.7028523614131788;
    msg.confidence = 0.8103120503085974;
    msg.opmodes.assign("EUFJWQFNSBTMTMLSWQPGLRURBEYLTYUBQRWDUYVATZUNCXBARJVRXGHRPNOXQCSDVYMCKZLATMNJTRZNSNIWBJ");

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
    msg.setTimeStamp(0.04346697489861351);
    msg.setSource(792U);
    msg.setSourceEntity(33U);
    msg.setDestination(61887U);
    msg.setDestinationEntity(196U);
    msg.value = 0.6940693265863661;
    msg.confidence = 0.2281791429321759;
    msg.opmodes.assign("ZWCFVLDFKANCSTMZSPVPXGHOHWUWOQSHWGIYUALEUBCJFOMSUVQQKCUQIAFQRFLREVYDHDDXFOWZKLNBNWBYCAYUDQGBMAEPNJNDKHRZKIPLKLHTAZYMBIROVQBATHWJLQGYHKANNYIGGFCRDJWGZSVOHIYZBTUNXHUPTXCZJCXMCZMEMRAGY");

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
    msg.setTimeStamp(0.8589070883456619);
    msg.setSource(50723U);
    msg.setSourceEntity(69U);
    msg.setDestination(26531U);
    msg.setDestinationEntity(115U);
    msg.value = 0.9238829299363722;
    msg.confidence = 0.36133352257051554;
    msg.opmodes.assign("KRPQQPDNIUNQQXVHXPVKUBZRFSLQIBEDGGOBKWWYOTHQXBLOLVZGBDPHPJETLEOOXJBIJNMTJWFVOMLRXDCBVUYFNAORCMASZFKUXIRMTXCFZOTZUDMZMJTNRGUDBLFNIKLFLQHASYZADAYKNEMCIIBRKPWAYCURKCVITOFWHNHSJVSXDWVZCKPAEWEZTJMWUHZNYJFAEYVSGDAAGHLISHCQSYYC");

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
    msg.setTimeStamp(0.7793774860572958);
    msg.setSource(64858U);
    msg.setSourceEntity(9U);
    msg.setDestination(19896U);
    msg.setDestinationEntity(22U);
    msg.itow = 4255427252U;
    msg.lat = 0.1614146141688222;
    msg.lon = 0.8716706340254958;
    msg.height_ell = 0.8669434059927994;
    msg.height_sea = 0.584949137486041;
    msg.hacc = 0.22626545346691462;
    msg.vacc = 0.49883425853828856;
    msg.vel_n = 0.41019830605015495;
    msg.vel_e = 0.9222458581414013;
    msg.vel_d = 0.4118092961554307;
    msg.speed = 0.6360762641735279;
    msg.gspeed = 0.2818512154111268;
    msg.heading = 0.7623715046091374;
    msg.sacc = 0.7237231850796755;
    msg.cacc = 0.6595681780235274;

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
    msg.setTimeStamp(0.25917489867409027);
    msg.setSource(9920U);
    msg.setSourceEntity(121U);
    msg.setDestination(2486U);
    msg.setDestinationEntity(34U);
    msg.itow = 1159442233U;
    msg.lat = 0.39589620413188253;
    msg.lon = 0.48923084705828923;
    msg.height_ell = 0.7215221358034916;
    msg.height_sea = 0.6496907061371081;
    msg.hacc = 0.7043130035341268;
    msg.vacc = 0.8976148959588047;
    msg.vel_n = 0.12939932556325073;
    msg.vel_e = 0.2252798092261672;
    msg.vel_d = 0.9205725136337386;
    msg.speed = 0.00669274212648896;
    msg.gspeed = 0.5153666126645403;
    msg.heading = 0.7246006643277285;
    msg.sacc = 0.0220204877957747;
    msg.cacc = 0.46406246477660407;

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
    msg.setTimeStamp(0.2887037014596532);
    msg.setSource(2055U);
    msg.setSourceEntity(175U);
    msg.setDestination(36049U);
    msg.setDestinationEntity(129U);
    msg.itow = 2969559611U;
    msg.lat = 0.160795329042291;
    msg.lon = 0.7877981503011067;
    msg.height_ell = 0.037807428110440355;
    msg.height_sea = 0.3939560897036072;
    msg.hacc = 0.5518801711469128;
    msg.vacc = 0.814473997579729;
    msg.vel_n = 0.14183611763548987;
    msg.vel_e = 0.40848397484234045;
    msg.vel_d = 0.5185793013909669;
    msg.speed = 0.7030762119293414;
    msg.gspeed = 0.20764916794280563;
    msg.heading = 0.33559077257470094;
    msg.sacc = 0.7578422780656834;
    msg.cacc = 0.8033184852947844;

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
    msg.setTimeStamp(0.3077286350871743);
    msg.setSource(27183U);
    msg.setSourceEntity(163U);
    msg.setDestination(36327U);
    msg.setDestinationEntity(136U);
    msg.id = 185U;
    msg.value = 0.4733770843409656;

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
    msg.setTimeStamp(0.7081426666378253);
    msg.setSource(61514U);
    msg.setSourceEntity(120U);
    msg.setDestination(33675U);
    msg.setDestinationEntity(57U);
    msg.id = 51U;
    msg.value = 0.8162150412942099;

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
    msg.setTimeStamp(0.9690751461912577);
    msg.setSource(17276U);
    msg.setSourceEntity(24U);
    msg.setDestination(60483U);
    msg.setDestinationEntity(218U);
    msg.id = 57U;
    msg.value = 0.37564360147440723;

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
    msg.setTimeStamp(0.9001595978010177);
    msg.setSource(10361U);
    msg.setSourceEntity(79U);
    msg.setDestination(5224U);
    msg.setDestinationEntity(253U);
    msg.x = 0.35764975026145274;
    msg.y = 0.21516971684294373;
    msg.z = 0.4136450433504676;
    msg.phi = 0.08183555983890145;
    msg.theta = 0.6741668854317114;
    msg.psi = 0.09478839436647557;

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
    msg.setTimeStamp(0.7629482413671915);
    msg.setSource(18030U);
    msg.setSourceEntity(205U);
    msg.setDestination(7954U);
    msg.setDestinationEntity(236U);
    msg.x = 0.1649796632054671;
    msg.y = 0.36568920482321154;
    msg.z = 0.4519785672110357;
    msg.phi = 0.2511649043510522;
    msg.theta = 0.16948301795036913;
    msg.psi = 0.6375735643765225;

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
    msg.setTimeStamp(0.8749969810098582);
    msg.setSource(2554U);
    msg.setSourceEntity(147U);
    msg.setDestination(11601U);
    msg.setDestinationEntity(253U);
    msg.x = 0.209747046846661;
    msg.y = 0.43394605434914113;
    msg.z = 0.949031136279137;
    msg.phi = 0.259192243777835;
    msg.theta = 0.021969059272908265;
    msg.psi = 0.8660237791740518;

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
    msg.setTimeStamp(0.26231075801572135);
    msg.setSource(58147U);
    msg.setSourceEntity(150U);
    msg.setDestination(50777U);
    msg.setDestinationEntity(163U);
    msg.beam_width = 0.07771642427770353;
    msg.beam_height = 0.21386755650482048;

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
    msg.setTimeStamp(0.5117371504485403);
    msg.setSource(35031U);
    msg.setSourceEntity(156U);
    msg.setDestination(56614U);
    msg.setDestinationEntity(152U);
    msg.beam_width = 0.30816731477531256;
    msg.beam_height = 0.856933359288451;

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
    msg.setTimeStamp(0.9088837769062759);
    msg.setSource(29789U);
    msg.setSourceEntity(30U);
    msg.setDestination(50719U);
    msg.setDestinationEntity(124U);
    msg.beam_width = 0.7453403023269619;
    msg.beam_height = 0.9995991138949014;

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
    msg.setTimeStamp(0.148937518832019);
    msg.setSource(59668U);
    msg.setSourceEntity(148U);
    msg.setDestination(56420U);
    msg.setDestinationEntity(165U);
    msg.id = 225U;
    msg.zoom = 37U;
    msg.action = 68U;

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
    msg.setTimeStamp(0.2968355829398951);
    msg.setSource(46321U);
    msg.setSourceEntity(235U);
    msg.setDestination(45558U);
    msg.setDestinationEntity(228U);
    msg.id = 159U;
    msg.zoom = 160U;
    msg.action = 253U;

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
    msg.setTimeStamp(0.5872379544018168);
    msg.setSource(17501U);
    msg.setSourceEntity(8U);
    msg.setDestination(14834U);
    msg.setDestinationEntity(61U);
    msg.id = 89U;
    msg.zoom = 133U;
    msg.action = 169U;

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
    msg.setTimeStamp(0.35153338572357384);
    msg.setSource(6059U);
    msg.setSourceEntity(149U);
    msg.setDestination(37748U);
    msg.setDestinationEntity(65U);
    msg.id = 21U;
    msg.value = 0.4367436554480042;

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
    msg.setTimeStamp(0.7698941048382555);
    msg.setSource(7309U);
    msg.setSourceEntity(57U);
    msg.setDestination(16767U);
    msg.setDestinationEntity(181U);
    msg.id = 162U;
    msg.value = 0.7130972724295703;

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
    msg.setTimeStamp(0.4478085055900939);
    msg.setSource(24385U);
    msg.setSourceEntity(228U);
    msg.setDestination(57232U);
    msg.setDestinationEntity(228U);
    msg.id = 169U;
    msg.value = 0.03762759316377595;

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
    msg.setTimeStamp(0.9914812767594442);
    msg.setSource(27670U);
    msg.setSourceEntity(209U);
    msg.setDestination(58613U);
    msg.setDestinationEntity(140U);
    msg.id = 170U;
    msg.value = 0.5176981643805847;

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
    msg.setTimeStamp(0.6976278380291382);
    msg.setSource(9862U);
    msg.setSourceEntity(54U);
    msg.setDestination(2912U);
    msg.setDestinationEntity(45U);
    msg.id = 203U;
    msg.value = 0.5824063298470573;

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
    msg.setTimeStamp(0.8527903304706158);
    msg.setSource(17107U);
    msg.setSourceEntity(102U);
    msg.setDestination(60917U);
    msg.setDestinationEntity(93U);
    msg.id = 102U;
    msg.value = 0.1527941777024059;

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
    msg.setTimeStamp(0.5053025606104394);
    msg.setSource(9703U);
    msg.setSourceEntity(228U);
    msg.setDestination(22860U);
    msg.setDestinationEntity(138U);
    msg.id = 118U;
    msg.angle = 0.31898564244033023;

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
    msg.setTimeStamp(0.9836747520103811);
    msg.setSource(35648U);
    msg.setSourceEntity(211U);
    msg.setDestination(43307U);
    msg.setDestinationEntity(90U);
    msg.id = 123U;
    msg.angle = 0.9512255275530099;

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
    msg.setTimeStamp(0.3860245432339202);
    msg.setSource(34623U);
    msg.setSourceEntity(84U);
    msg.setDestination(42222U);
    msg.setDestinationEntity(160U);
    msg.id = 247U;
    msg.angle = 0.5502336338509817;

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
    msg.setTimeStamp(0.8857695733389243);
    msg.setSource(4113U);
    msg.setSourceEntity(100U);
    msg.setDestination(55446U);
    msg.setDestinationEntity(6U);
    msg.op = 46U;
    msg.actions.assign("TZWTAVZDXKRLEYFIBRRQPOJXATSAPAGBUAKGJUEFAMJZXVIXQYLZFYLXPNIIJJLHBCYDDTSKEBJGRYFOUOVHTXTOLSGSMIAJQWMSLOCLPMEMJYNZUFHBWMXCDXEZPKUHTHHWSZRBAGQMNRFDOAKDNKNHOPWGEPUORIHSKYJNOTKWVGHKICQEV");

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
    msg.setTimeStamp(0.2742970166550883);
    msg.setSource(3572U);
    msg.setSourceEntity(99U);
    msg.setDestination(16911U);
    msg.setDestinationEntity(54U);
    msg.op = 79U;
    msg.actions.assign("REKRTEFBNMPMEPDRTNKSUFLTQFOBTONLSTMDLJWYHJYKDZGDCYUUVFSEWNUPLHABHPHWYIVAIYRCBYZVTCXKJZBHDLPVUVWHS");

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
    msg.setTimeStamp(0.8511194243069131);
    msg.setSource(51246U);
    msg.setSourceEntity(163U);
    msg.setDestination(15617U);
    msg.setDestinationEntity(161U);
    msg.op = 202U;
    msg.actions.assign("RRUCLXJIJCXQKZVROYAMXGQPCWXBBZATRENOSWFMSPOQHDMHQVEEQGBHRDLVKUGVEPRWGKBOLXDWVUZPKYIXADPSQMCHHLHYSTXEDZFBHNNVIFLQJWBIHTCAQBTZGFOMIMMVBUIXMKWSUIUGYOLWLJCTWKTNTSGWFPTEGFYJWIPNONKLURADYOJHCKQJCQPNXEJACKFFMKGASVCZEBZAPZUDEOZA");

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
    msg.setTimeStamp(0.0401244518095315);
    msg.setSource(30950U);
    msg.setSourceEntity(67U);
    msg.setDestination(56104U);
    msg.setDestinationEntity(94U);
    msg.actions.assign("EAGXUQMQBDVAUECHCRPODDZMIAHSTCTJBMYKZUSTZFMODROITJAOYBVYQJFFUJLAZQBRKYYILJSMZGPBJBNKSXCNOEN");

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
    msg.setTimeStamp(0.4695544733902153);
    msg.setSource(38811U);
    msg.setSourceEntity(174U);
    msg.setDestination(43637U);
    msg.setDestinationEntity(254U);
    msg.actions.assign("MWCRPZHDBGXCBGJKUIYEQKONTUIILOVYXSNTNDSEAVACONHYGPAPZSDELIPZOFTRBPESUHEKDVKVFCA");

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
    msg.setTimeStamp(0.6825376609845222);
    msg.setSource(22540U);
    msg.setSourceEntity(86U);
    msg.setDestination(62130U);
    msg.setDestinationEntity(186U);
    msg.actions.assign("JESZXPLTQFVEFWTWPHBUMBBXNOHUJIHWZRJGOCDTGMFGQWMAMZSPOCCVICNLQGGVKSGUIAOVNEXUNBFQQSFMIPBERYGFWTMIKXUDSWGPXZKAPHVROYYJMOQAURQIRADMTAGIKVKILKUFIJOEGFSNZQILESEYVCARXZFNZHPELNNZYCOQKCLTDVTWWYHYV");

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
    msg.setTimeStamp(0.3724681018332129);
    msg.setSource(2224U);
    msg.setSourceEntity(86U);
    msg.setDestination(23040U);
    msg.setDestinationEntity(152U);
    msg.button = 179U;
    msg.value = 30U;

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
    msg.setTimeStamp(0.43726498011556436);
    msg.setSource(63184U);
    msg.setSourceEntity(189U);
    msg.setDestination(24683U);
    msg.setDestinationEntity(146U);
    msg.button = 250U;
    msg.value = 122U;

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
    msg.setTimeStamp(0.3642933485015425);
    msg.setSource(24258U);
    msg.setSourceEntity(128U);
    msg.setDestination(29681U);
    msg.setDestinationEntity(49U);
    msg.button = 32U;
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
    msg.setTimeStamp(0.6966013346935576);
    msg.setSource(19364U);
    msg.setSourceEntity(238U);
    msg.setDestination(1020U);
    msg.setDestinationEntity(253U);
    msg.op = 189U;
    msg.text.assign("VVZTFEPOBUOJQAXOUSTMQMXMHXKTDKSXEWCUGMEJSEPSVILCCXLESZTZDTATOYNIHVFOIYNNFTNUJJAUYWARZLYBUFFZGCWJTJFIUWYEHRKBBWWEVCNKIMGIYWMWVWQZMZLSXKWVSHGYSDOADNHVRFQMKCPGR");

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
    msg.setTimeStamp(0.5306205506259322);
    msg.setSource(64947U);
    msg.setSourceEntity(87U);
    msg.setDestination(48187U);
    msg.setDestinationEntity(61U);
    msg.op = 7U;
    msg.text.assign("DILIMGXROJQWCZSOVEGHEDDVBDOSFJTGKQUDQQZSOANPIFHLWKVBBYBXEZQMPEVADJYUBHIOHFNVTEHBSPYXGLCCRFMWYPTKDGTFGLYXQXHIZMZHGSMCEPVMNBLRKAADZWBKSZDPOLFSRGEZEYPVGPQJVIVTVIASCELQXXTKRZAOSWNBNETCNJOLMRMHJMKXYWNLKAJYFLRIDFWJXNTAUQXUQWJOZRKHBYOUUCWJUSMUUTTFCRGIPFCKNUHARW");

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
    msg.setTimeStamp(0.10347545392112867);
    msg.setSource(57334U);
    msg.setSourceEntity(203U);
    msg.setDestination(49025U);
    msg.setDestinationEntity(177U);
    msg.op = 122U;
    msg.text.assign("LFPJZRZKCOWHMWHMMGFIVROAZVFYSFVXGOBWNNEWDX");

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
    msg.setTimeStamp(0.8358115699840805);
    msg.setSource(3970U);
    msg.setSourceEntity(225U);
    msg.setDestination(33528U);
    msg.setDestinationEntity(74U);
    msg.op = 32U;
    msg.time_remain = 0.8568382279476648;
    msg.sched_time = 0.922748986697687;

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
    msg.setTimeStamp(0.08155571465946465);
    msg.setSource(30958U);
    msg.setSourceEntity(167U);
    msg.setDestination(18065U);
    msg.setDestinationEntity(135U);
    msg.op = 190U;
    msg.time_remain = 0.5966328743270886;
    msg.sched_time = 0.43969999709433316;

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
    msg.setTimeStamp(0.14026558832466984);
    msg.setSource(44454U);
    msg.setSourceEntity(153U);
    msg.setDestination(62221U);
    msg.setDestinationEntity(233U);
    msg.op = 41U;
    msg.time_remain = 0.2916095172715658;
    msg.sched_time = 0.16835837170565016;

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
    msg.setTimeStamp(0.5308044642958419);
    msg.setSource(55522U);
    msg.setSourceEntity(206U);
    msg.setDestination(23546U);
    msg.setDestinationEntity(241U);
    msg.name.assign("VSIMUXHKLTTRTBDUYQHCQPDWUCIONOKRZITKPWASWQYJZRSEEBNGUALEPJRGXVJVIXZQFTAWUMMBEPNYPMGEDISAWLIHDRYYNTHJHFODAKMYYICOAIBOHA");
    msg.op = 126U;
    msg.sched_time = 0.11774418443067791;

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
    msg.setTimeStamp(0.24413115385099604);
    msg.setSource(44240U);
    msg.setSourceEntity(116U);
    msg.setDestination(21185U);
    msg.setDestinationEntity(95U);
    msg.name.assign("UCOOBTNTDUOSLQKXAZXBQACMYGEOQOXEDAXEZVFFHIPRVZJLQRLRFHCMHQJHKICKGTIPFZZLQKVOMTPFBLHUMSYKEPXRW");
    msg.op = 79U;
    msg.sched_time = 0.4592744816646477;

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
    msg.setTimeStamp(0.9292523106147641);
    msg.setSource(43253U);
    msg.setSourceEntity(243U);
    msg.setDestination(57402U);
    msg.setDestinationEntity(98U);
    msg.name.assign("QVMGAYYTRVZBGBCPOPLNIVJWTZJURTHWMKQJOTLZOYBWMOGDJMVNXJITDOCFTKHSEIWHBHCVGFFJPKHQMEKKYANRGNWMBHLEDHCIHDTYLKRSUZSTRRSDEWVTFAMGDEKNUZYLRDBXOIPYAXLDWK");
    msg.op = 174U;
    msg.sched_time = 0.7130924376344742;

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
    msg.setTimeStamp(0.7052998218425571);
    msg.setSource(17613U);
    msg.setSourceEntity(109U);
    msg.setDestination(12610U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.17119316383066996);
    msg.setSource(15411U);
    msg.setSourceEntity(247U);
    msg.setDestination(53237U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.7153154766649918);
    msg.setSource(27851U);
    msg.setSourceEntity(131U);
    msg.setDestination(44564U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.12325752297267867);
    msg.setSource(11459U);
    msg.setSourceEntity(153U);
    msg.setDestination(14343U);
    msg.setDestinationEntity(128U);
    msg.name.assign("FZSBRJQKXKGYAUZFYZTKSAHQUPTC");
    msg.state = 45U;

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
    msg.setTimeStamp(0.5246653258462501);
    msg.setSource(20153U);
    msg.setSourceEntity(11U);
    msg.setDestination(6890U);
    msg.setDestinationEntity(89U);
    msg.name.assign("AQAEPDBXUTXUWJFPKBMULKSROWAXYDPZGNGVFAZJNDQAKWKWGPCONRZYYJXHSZSLYYVYCPAIPZIVQMTHVJISKKBIWVPULCWQAJMGDELDBVNDZVHIOBWKUILUICHPNFILWRASTDTLJERKRFSMNOFUQEKFTUEOJMCUOUFGSTOBRNNRMMWRYMNBVCJGZDXIXXDGCBELBOEXTSHZCQMQ");
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
    msg.setTimeStamp(0.1456359981516382);
    msg.setSource(39094U);
    msg.setSourceEntity(230U);
    msg.setDestination(11101U);
    msg.setDestinationEntity(111U);
    msg.name.assign("WRZVLFPYVKEJIVGGQDERAFQVX");
    msg.state = 86U;

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
    msg.setTimeStamp(0.227199432062131);
    msg.setSource(57222U);
    msg.setSourceEntity(154U);
    msg.setDestination(4033U);
    msg.setDestinationEntity(136U);
    msg.name.assign("LFELEMQYABQPMLHTSXGNCQGBXWCBSHHXEJTCHEXMJKRUEJPQIAZBVYXUOBYAFBYZSIUMNQWWWIUXGLOJRPEICTKKSQRYAUVMKFRNWPJJNCEDNPGOVCVICTHWGWDT");
    msg.value = 161U;

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
    msg.setTimeStamp(0.585110107848707);
    msg.setSource(46230U);
    msg.setSourceEntity(34U);
    msg.setDestination(4262U);
    msg.setDestinationEntity(146U);
    msg.name.assign("DLQCJPSPIGSOWMSSKXGYMFKKZCKCYYTNJSVLHOVBMAUQBZMCCKOCWDEFZKPUEIINQRNBDXRWEKUAOIXYNNJXAYZDIUMFBMSVWWCFSBMQBBUGLEEHZQBDTOMBFZLOVJZRTJRDPHZHUQGPQTUINEOCGVRSFKNLEMERJXAANGHFQJEDTULDXPWSTHTNUSRPHL");
    msg.value = 160U;

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
    msg.setTimeStamp(0.35970158579648115);
    msg.setSource(47522U);
    msg.setSourceEntity(235U);
    msg.setDestination(30831U);
    msg.setDestinationEntity(247U);
    msg.name.assign("VZNGCRMWIZAZUPMI");
    msg.value = 214U;

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
    msg.setTimeStamp(0.49823939398820316);
    msg.setSource(15243U);
    msg.setSourceEntity(50U);
    msg.setDestination(27022U);
    msg.setDestinationEntity(176U);
    msg.name.assign("LEWUYIMPCVIIAAGANYIDMMOEMKBRVVLLRKYKMRZPIDJTVFMKEASUXWOLPOGZYFUVFBDDSDMBVKXYYXNAQIOCHVNCENEVANEFVJWQHLDCZBNNITYADMXQWCBQFRFHRRPCJJKYXZOBAHNHQXOPFGCLKTKOUHRQITSPHTUZJPTUSXQBWEZHJSYMWJWFLBXEBFHFNZUTJGGKT");

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
    msg.setTimeStamp(0.278101405066151);
    msg.setSource(60969U);
    msg.setSourceEntity(2U);
    msg.setDestination(37014U);
    msg.setDestinationEntity(105U);
    msg.name.assign("HYYORVXUBUCASSOVSAIMBQWNJOTNLHGZDNGZOGKXAECOJKFZCLMUXTJVTHMPYMXBKIQKMPXYFQSOTIHMHTHBDJGMBKLGSFFQHETFCQGPNDUQEFCDUZWUJPFWYARZVNYSQRWLNVLRWLYZWXVDKRJZWNEKVSVEIPZBGSR");

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
    msg.setTimeStamp(0.1379985294809134);
    msg.setSource(11654U);
    msg.setSourceEntity(207U);
    msg.setDestination(241U);
    msg.setDestinationEntity(139U);
    msg.name.assign("FWSNLYKFDOBDYNQNXZMXBXLWRQWXDPOAXVHRCMKVVTWGLGGFGYVQMFABWPODJZNJPCZDVRIYTULQULBPSSKBRYSATKNYUEZRIWFZGUIQPOTBUWJSTTEMUBUSLNVOSJANMCEIVDCNECWCOVOMARJHUJIUYAINHBKSYTSMFQEIDEEWBRXQAEJ");

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
    msg.setTimeStamp(0.873262846504961);
    msg.setSource(13309U);
    msg.setSourceEntity(192U);
    msg.setDestination(31627U);
    msg.setDestinationEntity(249U);
    msg.name.assign("BRXROPNRNNDPWMKNIYPSWIVTXVQLBMJMNKHGGHPYOBCUSZQKWEYFKKTDLKHKEBCWUFFNCVQOMHCGCCAHPEUMIOCLTQJNTZVUFZ");
    msg.value = 142U;

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
    msg.setTimeStamp(0.7354024586646681);
    msg.setSource(13869U);
    msg.setSourceEntity(217U);
    msg.setDestination(47174U);
    msg.setDestinationEntity(169U);
    msg.name.assign("SUOZFTODPIMTTFVGOUEIUEOUFRKCUNNZCHJRZVZJYGQHXDGHGNEQUGLP");
    msg.value = 39U;

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
    msg.setTimeStamp(0.5749830126884975);
    msg.setSource(47142U);
    msg.setSourceEntity(18U);
    msg.setDestination(34931U);
    msg.setDestinationEntity(0U);
    msg.name.assign("NPHUHZYDPZXACTLSZFYBNRNRWJPHQBWBTQIISGAZYUFPCKMU");
    msg.value = 19U;

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
    msg.setTimeStamp(0.07097258697681819);
    msg.setSource(8869U);
    msg.setSourceEntity(179U);
    msg.setDestination(47475U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.4364934647549791;
    msg.lon = 0.4856634536298372;
    msg.height = 0.41900550351016164;
    msg.x = 0.040611184538843936;
    msg.y = 0.1768317906396628;
    msg.z = 0.7184350491438134;
    msg.phi = 0.2477460005173675;
    msg.theta = 0.3345361262028743;
    msg.psi = 0.383575339349155;
    msg.u = 0.25232022489687844;
    msg.v = 0.14496117255603203;
    msg.w = 0.14614687251154046;
    msg.vx = 0.1368491190683867;
    msg.vy = 0.9037547039838171;
    msg.vz = 0.763286913022471;
    msg.p = 0.4755474132758192;
    msg.q = 0.38950810657952495;
    msg.r = 0.4101344620629558;
    msg.depth = 0.31846605292203733;
    msg.alt = 0.7504090682889305;

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
    msg.setTimeStamp(0.5729964964180222);
    msg.setSource(2569U);
    msg.setSourceEntity(3U);
    msg.setDestination(24575U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.45622913035568124;
    msg.lon = 0.35947749113844685;
    msg.height = 0.09425221604569833;
    msg.x = 0.18353495154793475;
    msg.y = 0.5716079556449334;
    msg.z = 0.20314978857077415;
    msg.phi = 0.1293708959193146;
    msg.theta = 0.08509377369556281;
    msg.psi = 0.5898524606198493;
    msg.u = 0.5049789775354724;
    msg.v = 0.05109232975029421;
    msg.w = 0.49840894762197296;
    msg.vx = 0.0839263733824428;
    msg.vy = 0.8102120695857324;
    msg.vz = 0.40599128957388286;
    msg.p = 0.3780919161743521;
    msg.q = 0.8911967263111162;
    msg.r = 0.04882488173916055;
    msg.depth = 0.48335702541043246;
    msg.alt = 0.02473726724503078;

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
    msg.setTimeStamp(0.10497721584798125);
    msg.setSource(51603U);
    msg.setSourceEntity(6U);
    msg.setDestination(60269U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.5051725989389928;
    msg.lon = 0.8505628231827405;
    msg.height = 0.21059764699906847;
    msg.x = 0.5955663560278309;
    msg.y = 0.628595485948701;
    msg.z = 0.4268462291116275;
    msg.phi = 0.17072887642264056;
    msg.theta = 0.1730518386754758;
    msg.psi = 0.8581427555367274;
    msg.u = 0.9044011431113985;
    msg.v = 0.42836697714539806;
    msg.w = 0.4595814581379747;
    msg.vx = 0.49432993656761703;
    msg.vy = 0.31733087160187556;
    msg.vz = 0.43131428972522456;
    msg.p = 0.2994073934134167;
    msg.q = 0.4163624442077889;
    msg.r = 0.6453603691684385;
    msg.depth = 0.2247541948073548;
    msg.alt = 0.16663978353596554;

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
    msg.setTimeStamp(0.36700898411930516);
    msg.setSource(4112U);
    msg.setSourceEntity(55U);
    msg.setDestination(32922U);
    msg.setDestinationEntity(132U);
    msg.x = 0.9462408153020204;
    msg.y = 0.0778058886059041;
    msg.z = 0.35504569939265107;

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
    msg.setTimeStamp(0.404552343764785);
    msg.setSource(50722U);
    msg.setSourceEntity(196U);
    msg.setDestination(54415U);
    msg.setDestinationEntity(43U);
    msg.x = 0.5110665064074513;
    msg.y = 0.6090301756426328;
    msg.z = 0.08304685900836473;

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
    msg.setTimeStamp(0.004006271647567505);
    msg.setSource(35394U);
    msg.setSourceEntity(168U);
    msg.setDestination(25587U);
    msg.setDestinationEntity(126U);
    msg.x = 0.3245995381382274;
    msg.y = 0.1412720277221673;
    msg.z = 0.34426017092604866;

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
    msg.setTimeStamp(0.39021702111773926);
    msg.setSource(56561U);
    msg.setSourceEntity(167U);
    msg.setDestination(5874U);
    msg.setDestinationEntity(178U);
    msg.value = 0.8661063678256644;

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
    msg.setTimeStamp(0.6208217191647623);
    msg.setSource(50407U);
    msg.setSourceEntity(139U);
    msg.setDestination(50814U);
    msg.setDestinationEntity(228U);
    msg.value = 0.2904607543694675;

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
    msg.setTimeStamp(0.8633534528518325);
    msg.setSource(51755U);
    msg.setSourceEntity(59U);
    msg.setDestination(64501U);
    msg.setDestinationEntity(193U);
    msg.value = 0.33434275083383014;

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
    msg.setTimeStamp(0.04195841531435174);
    msg.setSource(26064U);
    msg.setSourceEntity(237U);
    msg.setDestination(53760U);
    msg.setDestinationEntity(97U);
    msg.value = 0.8870783978724796;

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
    msg.setTimeStamp(0.07854561540032112);
    msg.setSource(46027U);
    msg.setSourceEntity(100U);
    msg.setDestination(8660U);
    msg.setDestinationEntity(139U);
    msg.value = 0.6424972075162714;

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
    msg.setTimeStamp(0.2370394423543828);
    msg.setSource(42473U);
    msg.setSourceEntity(29U);
    msg.setDestination(21696U);
    msg.setDestinationEntity(44U);
    msg.value = 0.8859878940056204;

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
    msg.setTimeStamp(0.4006257246688316);
    msg.setSource(8349U);
    msg.setSourceEntity(175U);
    msg.setDestination(25299U);
    msg.setDestinationEntity(215U);
    msg.x = 0.36383324424881336;
    msg.y = 0.21440834151642674;
    msg.z = 0.12278255300047136;
    msg.phi = 0.36915888918515005;
    msg.theta = 0.09081169451787163;
    msg.psi = 0.9328978977900769;
    msg.p = 0.007379235173074039;
    msg.q = 0.36471819183815535;
    msg.r = 0.18769125119144514;
    msg.u = 0.8916695024473855;
    msg.v = 0.08249818849186552;
    msg.w = 0.8752166841361149;
    msg.bias_psi = 0.9065039803808446;
    msg.bias_r = 0.5993287908411908;

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
    msg.setTimeStamp(0.13522874482072444);
    msg.setSource(2002U);
    msg.setSourceEntity(54U);
    msg.setDestination(24914U);
    msg.setDestinationEntity(12U);
    msg.x = 0.36304603652526457;
    msg.y = 0.6747096297560519;
    msg.z = 0.04068595115419049;
    msg.phi = 0.5951155612949807;
    msg.theta = 0.2697147878498434;
    msg.psi = 0.6070932573851421;
    msg.p = 0.37923921831624474;
    msg.q = 0.09675358913537468;
    msg.r = 0.6797941638422577;
    msg.u = 0.7494228341637675;
    msg.v = 0.09563938916363957;
    msg.w = 0.056120421889464756;
    msg.bias_psi = 0.825978539075089;
    msg.bias_r = 0.8687093849829626;

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
    msg.setTimeStamp(0.4448423712492149);
    msg.setSource(15863U);
    msg.setSourceEntity(212U);
    msg.setDestination(2568U);
    msg.setDestinationEntity(149U);
    msg.x = 0.9853795520235356;
    msg.y = 0.9133194370804567;
    msg.z = 0.694492980853135;
    msg.phi = 0.41976560194095747;
    msg.theta = 0.9772378423318736;
    msg.psi = 0.46395986570789094;
    msg.p = 0.8916158426682109;
    msg.q = 0.8052581041549999;
    msg.r = 0.5457861270021005;
    msg.u = 0.045632412865177274;
    msg.v = 0.6973747838210808;
    msg.w = 0.8019966877021442;
    msg.bias_psi = 0.01797704113336429;
    msg.bias_r = 0.09316590323343021;

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
    msg.setTimeStamp(0.6982069718968091);
    msg.setSource(45392U);
    msg.setSourceEntity(183U);
    msg.setDestination(58350U);
    msg.setDestinationEntity(41U);
    msg.bias_psi = 0.10327055682777309;
    msg.bias_r = 0.11418155170696065;
    msg.cog = 0.2662865788980334;
    msg.cyaw = 0.3831028615403145;
    msg.lbl_rej_level = 0.06519483213269828;
    msg.gps_rej_level = 0.44732822213011436;
    msg.custom_x = 0.005682805866799701;
    msg.custom_y = 0.669404697374471;
    msg.custom_z = 0.4068934822889547;

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
    msg.setTimeStamp(0.9839846547433492);
    msg.setSource(12167U);
    msg.setSourceEntity(18U);
    msg.setDestination(38700U);
    msg.setDestinationEntity(107U);
    msg.bias_psi = 0.9361581814582242;
    msg.bias_r = 0.19970665519949626;
    msg.cog = 0.08858152878028924;
    msg.cyaw = 0.7115822653427801;
    msg.lbl_rej_level = 0.7662819907104655;
    msg.gps_rej_level = 0.5479988478822334;
    msg.custom_x = 0.679417851862562;
    msg.custom_y = 0.7379237942867484;
    msg.custom_z = 0.3380522420221488;

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
    msg.setTimeStamp(0.016779728121376514);
    msg.setSource(32554U);
    msg.setSourceEntity(185U);
    msg.setDestination(11409U);
    msg.setDestinationEntity(35U);
    msg.bias_psi = 0.08875860299095084;
    msg.bias_r = 0.43712705957193;
    msg.cog = 0.7298073662072597;
    msg.cyaw = 0.5502566031954491;
    msg.lbl_rej_level = 0.20709830437822885;
    msg.gps_rej_level = 0.9157511887887935;
    msg.custom_x = 0.6089169247160544;
    msg.custom_y = 0.3525119728769599;
    msg.custom_z = 0.5126777941457548;

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
    msg.setTimeStamp(0.49754536534037364);
    msg.setSource(36578U);
    msg.setSourceEntity(209U);
    msg.setDestination(11366U);
    msg.setDestinationEntity(147U);
    msg.utc_time = 0.1271781610937388;
    msg.reason = 209U;

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
    msg.setTimeStamp(0.5985765025614455);
    msg.setSource(60885U);
    msg.setSourceEntity(144U);
    msg.setDestination(10947U);
    msg.setDestinationEntity(103U);
    msg.utc_time = 0.8636446285462096;
    msg.reason = 195U;

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
    msg.setTimeStamp(0.19028251152715436);
    msg.setSource(47149U);
    msg.setSourceEntity(149U);
    msg.setDestination(10990U);
    msg.setDestinationEntity(179U);
    msg.utc_time = 0.2536344072992134;
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
    msg.setTimeStamp(0.012970983254146362);
    msg.setSource(19851U);
    msg.setSourceEntity(213U);
    msg.setDestination(32127U);
    msg.setDestinationEntity(129U);
    msg.id = 139U;
    msg.range = 0.5314453512883485;
    msg.acceptance = 137U;

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
    msg.setTimeStamp(0.30461847213387583);
    msg.setSource(1904U);
    msg.setSourceEntity(67U);
    msg.setDestination(1227U);
    msg.setDestinationEntity(220U);
    msg.id = 164U;
    msg.range = 0.20074372790608064;
    msg.acceptance = 16U;

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
    msg.setTimeStamp(0.08290950269351571);
    msg.setSource(50952U);
    msg.setSourceEntity(108U);
    msg.setDestination(31451U);
    msg.setDestinationEntity(185U);
    msg.id = 107U;
    msg.range = 0.8661991014236027;
    msg.acceptance = 124U;

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
    msg.setTimeStamp(0.08223359912296546);
    msg.setSource(57156U);
    msg.setSourceEntity(168U);
    msg.setDestination(18879U);
    msg.setDestinationEntity(212U);
    msg.type = 165U;
    msg.reason = 181U;
    msg.value = 0.9284093154905139;
    msg.timestep = 0.5551121766999583;

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
    msg.setTimeStamp(0.9227291331974636);
    msg.setSource(8775U);
    msg.setSourceEntity(106U);
    msg.setDestination(65095U);
    msg.setDestinationEntity(223U);
    msg.type = 167U;
    msg.reason = 233U;
    msg.value = 0.785900919795911;
    msg.timestep = 0.7319335039632429;

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
    msg.setTimeStamp(0.9747832383272927);
    msg.setSource(23318U);
    msg.setSourceEntity(144U);
    msg.setDestination(27808U);
    msg.setDestinationEntity(227U);
    msg.type = 112U;
    msg.reason = 93U;
    msg.value = 0.48323081990503847;
    msg.timestep = 0.1820761550494967;

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
    msg.setTimeStamp(0.695968155907409);
    msg.setSource(51556U);
    msg.setSourceEntity(103U);
    msg.setDestination(7500U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.08678977460014947);
    msg.setSource(37441U);
    msg.setSourceEntity(197U);
    msg.setDestination(22187U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.217337383984741);
    msg.setSource(37508U);
    msg.setSourceEntity(138U);
    msg.setDestination(20003U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.9569305653952204);
    msg.setSource(42957U);
    msg.setSourceEntity(120U);
    msg.setDestination(5162U);
    msg.setDestinationEntity(32U);
    msg.beacon.assign("OCVDXFWPRXDCLRQSAFBQCLFRBCZAHMZLHFEJIVNPNAPIOYPVCBYHMGBEOXHHIZJLONRNSZKDESGJIDDLB");
    msg.x = 0.4887868342001326;
    msg.y = 0.4473271948950541;
    msg.depth = 0.2398990567920477;
    msg.var_x = 0.8915831499419621;
    msg.var_y = 0.33484290866809674;

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
    msg.setTimeStamp(0.3421729181669201);
    msg.setSource(41911U);
    msg.setSourceEntity(84U);
    msg.setDestination(39803U);
    msg.setDestinationEntity(156U);
    msg.beacon.assign("KLFZQPXSBUYCWEMHXWWJVJJGKBZSWNDOXUBVRHDRVFWFQGNYVAGFSAFCXTYCLZGWHXQJZPKFQOASQJTHJSKOYLEJBNYCAAOXWRUPXYDZHQUNKMFEESABLEVDHYPQTLBVDBYEFRRKSA");
    msg.x = 0.5781744425385893;
    msg.y = 0.7767287226298222;
    msg.depth = 0.5376749448061579;
    msg.var_x = 0.09286092645089739;
    msg.var_y = 0.870491806560789;

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
    msg.setTimeStamp(0.9837519132496657);
    msg.setSource(27097U);
    msg.setSourceEntity(65U);
    msg.setDestination(29517U);
    msg.setDestinationEntity(34U);
    msg.beacon.assign("GHTOQNBYYTHMUAYCRRRVMELOYUWTKEWUHOIFHVIDLPEOPNHTDIZYUGZZGHICCLMUFUXQEKGKZZOPUVNQTELHAKIVOVXZAVCXRDTDFYFIRRRJWAGDZWVQICBNWSRNJLPX");
    msg.x = 0.9300984213492077;
    msg.y = 0.522062988531783;
    msg.depth = 0.6048420179373951;
    msg.var_x = 0.5361856858171088;
    msg.var_y = 0.015581337631328518;

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
    msg.setTimeStamp(0.9816582263595104);
    msg.setSource(2255U);
    msg.setSourceEntity(46U);
    msg.setDestination(31068U);
    msg.setDestinationEntity(98U);
    msg.value = 0.20168872911739022;

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
    msg.setTimeStamp(0.7043056973788062);
    msg.setSource(49442U);
    msg.setSourceEntity(79U);
    msg.setDestination(16339U);
    msg.setDestinationEntity(26U);
    msg.value = 0.47452485059280647;

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
    msg.setTimeStamp(0.04276320396480515);
    msg.setSource(44925U);
    msg.setSourceEntity(2U);
    msg.setDestination(38903U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6173346856907328;

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
    msg.setTimeStamp(0.47991989928863554);
    msg.setSource(45113U);
    msg.setSourceEntity(245U);
    msg.setDestination(2063U);
    msg.setDestinationEntity(175U);
    msg.value = 0.8542140479050031;
    msg.z_units = 30U;

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
    msg.setTimeStamp(0.889357203083674);
    msg.setSource(19501U);
    msg.setSourceEntity(95U);
    msg.setDestination(37314U);
    msg.setDestinationEntity(108U);
    msg.value = 0.1688683041013901;
    msg.z_units = 190U;

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
    msg.setTimeStamp(0.5915950633322674);
    msg.setSource(49645U);
    msg.setSourceEntity(210U);
    msg.setDestination(7471U);
    msg.setDestinationEntity(64U);
    msg.value = 0.1918867384687567;
    msg.z_units = 61U;

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
    msg.setTimeStamp(0.781820701503046);
    msg.setSource(16597U);
    msg.setSourceEntity(131U);
    msg.setDestination(61279U);
    msg.setDestinationEntity(249U);
    msg.value = 0.9124399485360335;
    msg.speed_units = 89U;

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
    msg.setTimeStamp(0.11655946740737233);
    msg.setSource(24152U);
    msg.setSourceEntity(206U);
    msg.setDestination(18032U);
    msg.setDestinationEntity(159U);
    msg.value = 0.9072990290556053;
    msg.speed_units = 179U;

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
    msg.setTimeStamp(0.9572802073777253);
    msg.setSource(6050U);
    msg.setSourceEntity(157U);
    msg.setDestination(965U);
    msg.setDestinationEntity(74U);
    msg.value = 0.3055390520236929;
    msg.speed_units = 181U;

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
    msg.setTimeStamp(0.37812416391309933);
    msg.setSource(30837U);
    msg.setSourceEntity(183U);
    msg.setDestination(60762U);
    msg.setDestinationEntity(158U);
    msg.value = 0.05868446256555859;

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
    msg.setTimeStamp(0.25757880994406024);
    msg.setSource(35891U);
    msg.setSourceEntity(182U);
    msg.setDestination(33239U);
    msg.setDestinationEntity(54U);
    msg.value = 0.8742874997207707;

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
    msg.setTimeStamp(0.8006838530498639);
    msg.setSource(37461U);
    msg.setSourceEntity(209U);
    msg.setDestination(56401U);
    msg.setDestinationEntity(54U);
    msg.value = 0.06881532279004143;

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
    msg.setTimeStamp(0.6337510246619149);
    msg.setSource(44098U);
    msg.setSourceEntity(19U);
    msg.setDestination(49806U);
    msg.setDestinationEntity(182U);
    msg.value = 0.6516745410168817;

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
    msg.setTimeStamp(0.7914758008021971);
    msg.setSource(6720U);
    msg.setSourceEntity(248U);
    msg.setDestination(49632U);
    msg.setDestinationEntity(228U);
    msg.value = 0.5258536196667281;

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
    msg.setTimeStamp(0.24491826401866912);
    msg.setSource(36817U);
    msg.setSourceEntity(82U);
    msg.setDestination(27436U);
    msg.setDestinationEntity(5U);
    msg.value = 0.5435853864598242;

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
    msg.setTimeStamp(0.04922701448233191);
    msg.setSource(26594U);
    msg.setSourceEntity(83U);
    msg.setDestination(8818U);
    msg.setDestinationEntity(91U);
    msg.value = 0.7904708548695047;

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
    msg.setTimeStamp(0.06260089559432658);
    msg.setSource(62562U);
    msg.setSourceEntity(89U);
    msg.setDestination(1729U);
    msg.setDestinationEntity(189U);
    msg.value = 0.5036230115229667;

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
    msg.setTimeStamp(0.7568482465987435);
    msg.setSource(28110U);
    msg.setSourceEntity(216U);
    msg.setDestination(1152U);
    msg.setDestinationEntity(46U);
    msg.value = 0.751941404654627;

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
    msg.setTimeStamp(0.36444068980496724);
    msg.setSource(13003U);
    msg.setSourceEntity(74U);
    msg.setDestination(45782U);
    msg.setDestinationEntity(138U);
    msg.start_lat = 0.10460873053848685;
    msg.start_lon = 0.11052395196106546;
    msg.start_z = 0.9055491722644713;
    msg.start_z_units = 168U;
    msg.end_lat = 0.3779674689635608;
    msg.end_lon = 0.5267324657881399;
    msg.end_z = 0.804853368553625;
    msg.end_z_units = 125U;
    msg.speed = 0.4405282751672913;
    msg.speed_units = 72U;
    msg.lradius = 0.08057024601344842;
    msg.flags = 14U;

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
    msg.setTimeStamp(0.7313375205698813);
    msg.setSource(62021U);
    msg.setSourceEntity(61U);
    msg.setDestination(57465U);
    msg.setDestinationEntity(24U);
    msg.start_lat = 0.03732040529497871;
    msg.start_lon = 0.486139336389246;
    msg.start_z = 0.6280422299015456;
    msg.start_z_units = 254U;
    msg.end_lat = 0.08235258143770918;
    msg.end_lon = 0.641594581795792;
    msg.end_z = 0.937908479653136;
    msg.end_z_units = 30U;
    msg.speed = 0.8000190002020368;
    msg.speed_units = 114U;
    msg.lradius = 0.8810771379513191;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.6753081206659904);
    msg.setSource(4767U);
    msg.setSourceEntity(43U);
    msg.setDestination(7875U);
    msg.setDestinationEntity(176U);
    msg.start_lat = 0.2911953508044456;
    msg.start_lon = 0.8502132119532283;
    msg.start_z = 0.43285416002362276;
    msg.start_z_units = 243U;
    msg.end_lat = 0.4865641356634134;
    msg.end_lon = 0.2426721990810563;
    msg.end_z = 0.14086619707460124;
    msg.end_z_units = 232U;
    msg.speed = 0.42338415086457515;
    msg.speed_units = 128U;
    msg.lradius = 0.41669829630277533;
    msg.flags = 176U;

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
    msg.setTimeStamp(0.01805097367881514);
    msg.setSource(6720U);
    msg.setSourceEntity(22U);
    msg.setDestination(16004U);
    msg.setDestinationEntity(123U);
    msg.x = 0.5548208950193598;
    msg.y = 0.5898919847518396;
    msg.z = 0.13638082771783133;
    msg.k = 0.5569171799988535;
    msg.m = 0.13957949705721973;
    msg.n = 0.748931676550108;
    msg.flags = 99U;

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
    msg.setTimeStamp(0.09050589278442434);
    msg.setSource(28141U);
    msg.setSourceEntity(3U);
    msg.setDestination(9841U);
    msg.setDestinationEntity(88U);
    msg.x = 0.4211446095456317;
    msg.y = 0.2838870908336234;
    msg.z = 0.531903503537557;
    msg.k = 0.6957457273837927;
    msg.m = 0.6807302373826397;
    msg.n = 0.7981425546718509;
    msg.flags = 236U;

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
    msg.setTimeStamp(0.4466261290064848);
    msg.setSource(32117U);
    msg.setSourceEntity(127U);
    msg.setDestination(27199U);
    msg.setDestinationEntity(250U);
    msg.x = 0.47801435907456535;
    msg.y = 0.48530614928485705;
    msg.z = 0.4341681954902743;
    msg.k = 0.4320712684656064;
    msg.m = 0.6163834487562214;
    msg.n = 0.3832398823885903;
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
    msg.setTimeStamp(0.16778374616128655);
    msg.setSource(48013U);
    msg.setSourceEntity(37U);
    msg.setDestination(16227U);
    msg.setDestinationEntity(229U);
    msg.value = 0.4669262011255919;

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
    msg.setTimeStamp(0.4773445517573698);
    msg.setSource(4499U);
    msg.setSourceEntity(165U);
    msg.setDestination(37241U);
    msg.setDestinationEntity(228U);
    msg.value = 0.6792558022302219;

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
    msg.setTimeStamp(0.22690770572693975);
    msg.setSource(33U);
    msg.setSourceEntity(225U);
    msg.setDestination(13960U);
    msg.setDestinationEntity(41U);
    msg.value = 0.6756663920112007;

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
    msg.setTimeStamp(0.9915355610433796);
    msg.setSource(42158U);
    msg.setSourceEntity(133U);
    msg.setDestination(53610U);
    msg.setDestinationEntity(129U);
    msg.u = 0.33410398804285213;
    msg.v = 0.44959921532861724;
    msg.w = 0.342984706586942;
    msg.p = 0.5129925829301681;
    msg.q = 0.5166875680654947;
    msg.r = 0.5324650113682386;
    msg.flags = 129U;

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
    msg.setTimeStamp(0.46379374192454914);
    msg.setSource(28844U);
    msg.setSourceEntity(96U);
    msg.setDestination(32342U);
    msg.setDestinationEntity(121U);
    msg.u = 0.2577290506422726;
    msg.v = 0.18915172135575253;
    msg.w = 0.1387859138667008;
    msg.p = 0.026208878996564655;
    msg.q = 0.5362896191454507;
    msg.r = 0.5538616724324709;
    msg.flags = 171U;

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
    msg.setTimeStamp(0.8127014317326249);
    msg.setSource(15303U);
    msg.setSourceEntity(52U);
    msg.setDestination(34106U);
    msg.setDestinationEntity(165U);
    msg.u = 0.20618618846594294;
    msg.v = 0.6082139358463754;
    msg.w = 0.06956435801102978;
    msg.p = 0.3812916721786609;
    msg.q = 0.4127382259689919;
    msg.r = 0.4321937573563779;
    msg.flags = 157U;

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
    msg.setTimeStamp(0.586198928045251);
    msg.setSource(57762U);
    msg.setSourceEntity(21U);
    msg.setDestination(3560U);
    msg.setDestinationEntity(93U);
    msg.start_lat = 0.22286736065365043;
    msg.start_lon = 0.366502050259926;
    msg.start_z = 0.5145869807791487;
    msg.start_z_units = 205U;
    msg.end_lat = 0.7752397224956008;
    msg.end_lon = 0.7865062717210525;
    msg.end_z = 0.6280983104700105;
    msg.end_z_units = 92U;
    msg.lradius = 0.37528493628140525;
    msg.flags = 24U;
    msg.x = 0.8522881368902172;
    msg.y = 0.9072846160456682;
    msg.z = 0.8218050713480023;
    msg.vx = 0.35139952327705926;
    msg.vy = 0.7219109270669668;
    msg.vz = 0.18720423342510284;
    msg.course_error = 0.6618111504842538;
    msg.eta = 7571U;

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
    msg.setTimeStamp(0.5562020030216489);
    msg.setSource(46405U);
    msg.setSourceEntity(189U);
    msg.setDestination(11024U);
    msg.setDestinationEntity(240U);
    msg.start_lat = 0.7607275418595567;
    msg.start_lon = 0.04249189238157858;
    msg.start_z = 0.6113269630228242;
    msg.start_z_units = 17U;
    msg.end_lat = 0.5481612578704195;
    msg.end_lon = 0.2591046180560329;
    msg.end_z = 0.667574630385604;
    msg.end_z_units = 52U;
    msg.lradius = 0.8475861536220689;
    msg.flags = 194U;
    msg.x = 0.007599661708794225;
    msg.y = 0.11737154198841337;
    msg.z = 0.3298333539618453;
    msg.vx = 0.7088221507064026;
    msg.vy = 0.7551926095763305;
    msg.vz = 0.6923551819171988;
    msg.course_error = 0.026453190657889647;
    msg.eta = 23444U;

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
    msg.setTimeStamp(0.8753510924227342);
    msg.setSource(6554U);
    msg.setSourceEntity(65U);
    msg.setDestination(45376U);
    msg.setDestinationEntity(164U);
    msg.start_lat = 0.5047457421902712;
    msg.start_lon = 0.457383185657927;
    msg.start_z = 0.37047143355025447;
    msg.start_z_units = 81U;
    msg.end_lat = 0.43791308054760303;
    msg.end_lon = 0.1281203758384365;
    msg.end_z = 0.9000988750445309;
    msg.end_z_units = 180U;
    msg.lradius = 0.012161254766272833;
    msg.flags = 37U;
    msg.x = 0.4719976948585993;
    msg.y = 0.606228471479236;
    msg.z = 0.7193654190459153;
    msg.vx = 0.7427524731072925;
    msg.vy = 0.9439775006521652;
    msg.vz = 0.7899501491271202;
    msg.course_error = 0.6277522591151444;
    msg.eta = 53852U;

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
    msg.setTimeStamp(0.6983524616323913);
    msg.setSource(7981U);
    msg.setSourceEntity(61U);
    msg.setDestination(52565U);
    msg.setDestinationEntity(166U);
    msg.k = 0.8099066714947286;
    msg.m = 0.8123439777383045;
    msg.n = 0.5810133251121483;

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
    msg.setTimeStamp(0.5769662524508001);
    msg.setSource(60511U);
    msg.setSourceEntity(113U);
    msg.setDestination(1872U);
    msg.setDestinationEntity(162U);
    msg.k = 0.8867253707536368;
    msg.m = 0.3021746681387606;
    msg.n = 0.6260624308087556;

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
    msg.setTimeStamp(0.02856855174214934);
    msg.setSource(65057U);
    msg.setSourceEntity(120U);
    msg.setDestination(64649U);
    msg.setDestinationEntity(198U);
    msg.k = 0.2916202483098401;
    msg.m = 0.40417571828614507;
    msg.n = 0.006255991282088091;

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
    msg.setTimeStamp(0.5142251328970289);
    msg.setSource(8929U);
    msg.setSourceEntity(133U);
    msg.setDestination(44313U);
    msg.setDestinationEntity(98U);
    msg.p = 0.9159293587258746;
    msg.i = 0.0028230025022030203;
    msg.d = 0.6717508114861499;
    msg.a = 0.27828331775539805;

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
    msg.setTimeStamp(0.24454900106366118);
    msg.setSource(30622U);
    msg.setSourceEntity(242U);
    msg.setDestination(19787U);
    msg.setDestinationEntity(91U);
    msg.p = 0.6448256191366925;
    msg.i = 0.6506644924959885;
    msg.d = 0.02251254373995526;
    msg.a = 0.4222647365314839;

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
    msg.setTimeStamp(0.813532547820343);
    msg.setSource(35234U);
    msg.setSourceEntity(155U);
    msg.setDestination(19159U);
    msg.setDestinationEntity(240U);
    msg.p = 0.9358251415995598;
    msg.i = 0.5867662360650786;
    msg.d = 0.8905673906857533;
    msg.a = 0.0807535567952169;

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
    msg.setTimeStamp(0.05008689680748546);
    msg.setSource(17223U);
    msg.setSourceEntity(131U);
    msg.setDestination(35385U);
    msg.setDestinationEntity(102U);
    msg.op = 113U;

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
    msg.setTimeStamp(0.12332771804043874);
    msg.setSource(57111U);
    msg.setSourceEntity(193U);
    msg.setDestination(50060U);
    msg.setDestinationEntity(90U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.98651273475239);
    msg.setSource(58003U);
    msg.setSourceEntity(57U);
    msg.setDestination(47202U);
    msg.setDestinationEntity(116U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.1520824976647256);
    msg.setSource(41753U);
    msg.setSourceEntity(186U);
    msg.setDestination(33538U);
    msg.setDestinationEntity(155U);
    msg.timeout = 33220U;
    msg.lat = 0.9570269701289408;
    msg.lon = 0.19614507821012916;
    msg.z = 0.7974366491261786;
    msg.z_units = 68U;
    msg.speed = 0.3624940028231678;
    msg.speed_units = 92U;
    msg.roll = 0.6442348768558206;
    msg.pitch = 0.2392111564865359;
    msg.yaw = 0.7979811065301213;
    msg.custom.assign("OVNUZIGHKQCWHIRDFXKVKRLEUMDOSCNKIFYWDHZEOJMGJCUSQFTOMRYREVWCRXCJILPWSXTKVUHWZVZQFRNKDYHJXW");

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
    msg.setTimeStamp(0.5665285267579226);
    msg.setSource(4388U);
    msg.setSourceEntity(48U);
    msg.setDestination(4590U);
    msg.setDestinationEntity(173U);
    msg.timeout = 21985U;
    msg.lat = 0.38366812863562705;
    msg.lon = 0.7465601015381439;
    msg.z = 0.16464815281108658;
    msg.z_units = 240U;
    msg.speed = 0.7831989469830899;
    msg.speed_units = 49U;
    msg.roll = 0.4754718667126807;
    msg.pitch = 0.583631080167332;
    msg.yaw = 0.8982161112273048;
    msg.custom.assign("NYPCWIEFEUBJSURHCAQQBDMKVHHGXCELYEOUYLSEKT");

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
    msg.setTimeStamp(0.03751602773607887);
    msg.setSource(42299U);
    msg.setSourceEntity(161U);
    msg.setDestination(24485U);
    msg.setDestinationEntity(33U);
    msg.timeout = 45136U;
    msg.lat = 0.4046975839231466;
    msg.lon = 0.6474315258698634;
    msg.z = 0.9425261016273293;
    msg.z_units = 31U;
    msg.speed = 0.5728906962976995;
    msg.speed_units = 151U;
    msg.roll = 0.17845078522719082;
    msg.pitch = 0.20160686310759368;
    msg.yaw = 0.8953407252791475;
    msg.custom.assign("DFKRMHNLVSYQBEJUWSGEIFPNAMIAOIIMGMVAKYMCRWKBRCTDGEXTGRFTAUOKWSJOKNUZLHTXCADNFTRFMVUIXNEFTNRZEKOIPZQWMIJOWXCOYMYEJJFPWUKFAGGOCYXSHQXCSUGHTAXTHQEJSWHYLWRBZNZHLUQZEVQRHEVTUQSZTNIMZGFHJDLONOSPSXVPYBDDNXZPDBYYWDKWSKYPCXULLLPDQGBIC");

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
    msg.setTimeStamp(0.24511616213528808);
    msg.setSource(43983U);
    msg.setSourceEntity(138U);
    msg.setDestination(4169U);
    msg.setDestinationEntity(126U);
    msg.timeout = 46497U;
    msg.lat = 0.15690515399796545;
    msg.lon = 0.5749152387228506;
    msg.z = 0.34989350044618883;
    msg.z_units = 106U;
    msg.speed = 0.5475223502147197;
    msg.speed_units = 228U;
    msg.duration = 31696U;
    msg.radius = 0.3975047002723461;
    msg.flags = 9U;
    msg.custom.assign("NYVEGKRZHYNVYWJSSTCXXTGFDOZQLIRKKXJNEIRVHFPWLLLGMIEBDSMEQVZFNOWHAJHYBUUFKRFMPUADZDSAGWOQNHMITAYQCFXVZUVIRIMEUCHLSHGLJZQOBYBRLMERDOMRJAKPBAKXHEZXWTGDQJCHETJWWITZFCMVNDJWNSY");

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
    msg.setTimeStamp(0.8842167129445279);
    msg.setSource(16149U);
    msg.setSourceEntity(88U);
    msg.setDestination(37360U);
    msg.setDestinationEntity(191U);
    msg.timeout = 61015U;
    msg.lat = 0.22276640498542932;
    msg.lon = 0.9376682301904491;
    msg.z = 0.7176983560399399;
    msg.z_units = 247U;
    msg.speed = 0.7382458732352254;
    msg.speed_units = 169U;
    msg.duration = 7566U;
    msg.radius = 0.6974315570284749;
    msg.flags = 219U;
    msg.custom.assign("EDXNNGPIHSBGWPIO");

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
    msg.setTimeStamp(0.9525649324912707);
    msg.setSource(45646U);
    msg.setSourceEntity(181U);
    msg.setDestination(29320U);
    msg.setDestinationEntity(26U);
    msg.timeout = 55117U;
    msg.lat = 0.9614715709281231;
    msg.lon = 0.8382710801686292;
    msg.z = 0.7224945446045574;
    msg.z_units = 167U;
    msg.speed = 0.902668769474669;
    msg.speed_units = 167U;
    msg.duration = 20407U;
    msg.radius = 0.18006753034861422;
    msg.flags = 108U;
    msg.custom.assign("QNYVYXLNGRZSODKLZIMGJUNSIQMWTNDHJEEICJCFPNLWTAVDQJQONWLMFPCTQTTHKXJONISKLUNGTUKSFZEYKVGKOUGAWWIZSELUCEPRPAOSYLYRVBPEPTJUZFTDHMKGHDRCIDHFRGMGDFFRXJXIHQMBAWAAQMTAVQDHKVFFYTLZYXQJRVBRXHPZZ");

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
    msg.setTimeStamp(0.59427361675168);
    msg.setSource(24566U);
    msg.setSourceEntity(32U);
    msg.setDestination(56957U);
    msg.setDestinationEntity(85U);
    msg.custom.assign("ORIDDWSRXEQPPURZKGCALNLIADFJTULYXYSZQZTBPOSOBCSMVBXFUPXVLOQHJMHTGKVUCCZNZMGNAQHEJGEMKZCUSXMMFROEABVYDJZMAHDFWKYZMPTINWPQOYGOKJNLFCHNE");

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
    msg.setTimeStamp(0.6296770860747907);
    msg.setSource(1424U);
    msg.setSourceEntity(176U);
    msg.setDestination(43012U);
    msg.setDestinationEntity(226U);
    msg.custom.assign("SJADDPBIVTSMRKUKIGKACIUIWQLYC");

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
    msg.setTimeStamp(0.009918914066594064);
    msg.setSource(3452U);
    msg.setSourceEntity(151U);
    msg.setDestination(41714U);
    msg.setDestinationEntity(224U);
    msg.custom.assign("QJFSULMQRKDJAMPUINZVCRCFWZXOYPVZCEPXTZIBFMHVEWMBNHUFXCLISAVSJSIWAUAYSENDQDMEBEYTOWFJDDIJPGGTBXWSZHYJBEVYNHRWUABKGZOMPWCGLLRIBWDXOHLTGKTQCZUTENLYJQHEQILOXFYGFMVFQSNRNDDAABMYVMRKZKGNQTUJHAOTRHWEECGRTUKDFDQWFJKLKQSKZZHLCITLOVUBYIAGRMBVPVXNOPNOXYOSCHPCIGAU");

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
    msg.setTimeStamp(0.028069153190787843);
    msg.setSource(12988U);
    msg.setSourceEntity(245U);
    msg.setDestination(3425U);
    msg.setDestinationEntity(124U);
    msg.timeout = 57178U;
    msg.lat = 0.2352384875135095;
    msg.lon = 0.7801767031500636;
    msg.z = 0.1347783047656722;
    msg.z_units = 151U;
    msg.duration = 62345U;
    msg.speed = 0.18605167147499257;
    msg.speed_units = 114U;
    msg.type = 129U;
    msg.radius = 0.33861793752853786;
    msg.length = 0.5546420718949472;
    msg.bearing = 0.23354692893451334;
    msg.direction = 164U;
    msg.custom.assign("IVAURLUKVQPCHXDWXYHAPPPCKPVMBTTXMIFWR");

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
    msg.setTimeStamp(0.7616733512380088);
    msg.setSource(2563U);
    msg.setSourceEntity(73U);
    msg.setDestination(14915U);
    msg.setDestinationEntity(135U);
    msg.timeout = 26445U;
    msg.lat = 0.5296880374471443;
    msg.lon = 0.6874550789479918;
    msg.z = 0.49992088310071703;
    msg.z_units = 81U;
    msg.duration = 48145U;
    msg.speed = 0.37797744773874586;
    msg.speed_units = 113U;
    msg.type = 228U;
    msg.radius = 0.06507082491194593;
    msg.length = 0.415538779482872;
    msg.bearing = 0.6160659522593155;
    msg.direction = 176U;
    msg.custom.assign("SRCAVOJNKTDDGZPSZEHPMHSMQVCSERBMJKEJCPOEJBXUGJCGBZYOTPYIKFGUADNVDNKIDBDLEBAWTXBYWOMQKIFELCHCVHNZEQCKLUIVRAULAXGWNPLYUQXTHSAHPMUTYFRFQPYNMIU");

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
    msg.setTimeStamp(0.598921276567338);
    msg.setSource(47925U);
    msg.setSourceEntity(252U);
    msg.setDestination(31844U);
    msg.setDestinationEntity(54U);
    msg.timeout = 24764U;
    msg.lat = 0.10864748907621724;
    msg.lon = 0.5150959265915205;
    msg.z = 0.25538851286133746;
    msg.z_units = 248U;
    msg.duration = 50987U;
    msg.speed = 0.01829395214355789;
    msg.speed_units = 156U;
    msg.type = 145U;
    msg.radius = 0.5111419899826303;
    msg.length = 0.48571349107055595;
    msg.bearing = 0.1156359139322577;
    msg.direction = 247U;
    msg.custom.assign("OSECASQDPCRIJCBMZNRWCXCTXXZPFYVQCDJFEX");

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
    msg.setTimeStamp(0.6982522884470695);
    msg.setSource(56832U);
    msg.setSourceEntity(79U);
    msg.setDestination(32908U);
    msg.setDestinationEntity(199U);
    msg.duration = 32039U;
    msg.custom.assign("JHMKDAFDJTVUVELSEMAYMTVVRSOXLTTPJGCJCSYYZNLKQFUOWPZTBVQSJAPYRYRGHYHCZJEZIEABIXKIIBCWUUMNAHAOTWE");

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
    msg.setTimeStamp(0.31744829884845593);
    msg.setSource(35005U);
    msg.setSourceEntity(109U);
    msg.setDestination(39244U);
    msg.setDestinationEntity(103U);
    msg.duration = 55405U;
    msg.custom.assign("OOXWDRJXGKJYGDSQPMTVBNQTRGTCIBRGDLPEUWWFOMLHZJBGGOPZCJYKQVDOEIHQKTWPXNWRFFYXRADNLKXQWVUYOBZBQQGRIMLZTADLNWVASCCYCHLFZYQEKAEHNIKESSWACFRPCMWJXUAVFSDZMATAKFNNJNOUFBFGVXVYRVZMLMJXEXPHNXCOABIAIJTYGH");

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
    msg.setTimeStamp(0.5806739028495822);
    msg.setSource(46819U);
    msg.setSourceEntity(20U);
    msg.setDestination(56106U);
    msg.setDestinationEntity(44U);
    msg.duration = 12166U;
    msg.custom.assign("QAHWDSUKBBEXKDVERIZVKOOIXSDHBFPNSYSNTEWFLRNPZSGMTGOVGPDRTQTMBKCDICLSVPZLXNBWKWEIQSPJTVQPLLZWVFFSTCEFYJZRHKRXPBSQAGFOCYFBYBAIUWJMMLMQKZDHPEODHOLNAIADEKORNMYZYCACXFUGUYQWHLJGRMERTGICOFPKXWWBYWTXIHENZPKMUXALVJNXJJOYTUUNQGHJHUUJLUED");

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
    msg.setTimeStamp(0.7989435578827172);
    msg.setSource(50976U);
    msg.setSourceEntity(20U);
    msg.setDestination(40845U);
    msg.setDestinationEntity(9U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.7880673293751325;
    msg.control.set(tmp_msg_0);
    msg.duration = 38031U;
    msg.custom.assign("GSNUSSFLHMBRUPPRYKXTQVFTWHGNRXERBUPBGQJXHYQAGXCFNOWXDTINTRVFBHESWJDTQGEDGSDQEJICCKIFPJOGMKJHELCTCFVHBXIOUKTQVVNUZIWOVAUMOPYLCGFKLMPAYWSXOYHDRSLEJDUIDEQYVJWHVHKJZIXAERZYAMBDCNMFL");

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
    msg.setTimeStamp(0.4273230214834801);
    msg.setSource(52330U);
    msg.setSourceEntity(152U);
    msg.setDestination(3744U);
    msg.setDestinationEntity(122U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.8643150694887434;
    tmp_msg_0.z_units = 73U;
    msg.control.set(tmp_msg_0);
    msg.duration = 57659U;
    msg.custom.assign("LRRLPWDMXJGEPOWHOZMFUMKMSCWDUMYVLBJYYKUSWZBOFGCPRVIFXIVHZNUNKSVFAUUBOJTLTEIMYYIHBGTELZQGWNKTEUYVOBAJAARCXUALANDRPYCMETKXZQFJNWTWOYRJJGCEDFLDBJCVKCHMFARVDXPHLQIWIZGATDISZREGHKEBHCKIWIXACVNFJAQZPWSXIBGPENSHQN");

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
    msg.setTimeStamp(0.8984135282274903);
    msg.setSource(17565U);
    msg.setSourceEntity(190U);
    msg.setDestination(43792U);
    msg.setDestinationEntity(202U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.7692963923905667;
    msg.control.set(tmp_msg_0);
    msg.duration = 1270U;
    msg.custom.assign("SHXEDCWTNRJOEYMQLGASHWYHLJWFFRXDDXOWDXXTIMCATBQJCAGCKOCDYZQURPHBIZPDOUXQKAZJOVZGPKVCMT");

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
    msg.setTimeStamp(0.6826150485248277);
    msg.setSource(1889U);
    msg.setSourceEntity(83U);
    msg.setDestination(31629U);
    msg.setDestinationEntity(174U);
    msg.timeout = 1048U;
    msg.lat = 0.10828317106833074;
    msg.lon = 0.9192893772259945;
    msg.z = 0.9030021820840717;
    msg.z_units = 208U;
    msg.speed = 0.9315153134784212;
    msg.speed_units = 71U;
    msg.bearing = 0.8829282077294852;
    msg.cross_angle = 0.8644902207956026;
    msg.width = 0.03139947171301105;
    msg.length = 0.8999662289677663;
    msg.hstep = 0.0611768945666763;
    msg.coff = 143U;
    msg.alternation = 103U;
    msg.flags = 115U;
    msg.custom.assign("CFCWZAIKJHVOVHNTGQIKZVYIZXBIXZISCWTKAPBAGKNCDXLFMYCDMYCHBMWJCSKSIRMJFRQXSADUZOWLPHNGZQLEVYQNSDXSRNEBQYVTOBLOBXSOGFLAUUXEMRDMPTUAYJGFPJYELRMYTGUCWRLSLQKWIHPJHFNQQATHHJVZGGMHVLOGYKBXFWGOBUEAJNR");

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
    msg.setTimeStamp(0.6416319045547743);
    msg.setSource(946U);
    msg.setSourceEntity(124U);
    msg.setDestination(47144U);
    msg.setDestinationEntity(87U);
    msg.timeout = 7007U;
    msg.lat = 0.972495069033925;
    msg.lon = 0.864589729436018;
    msg.z = 0.19639158652186628;
    msg.z_units = 71U;
    msg.speed = 0.6134535956231522;
    msg.speed_units = 180U;
    msg.bearing = 0.8692252694118369;
    msg.cross_angle = 0.07495755716529262;
    msg.width = 0.006820391487334709;
    msg.length = 0.6898123629413287;
    msg.hstep = 0.44326149192360165;
    msg.coff = 241U;
    msg.alternation = 226U;
    msg.flags = 136U;
    msg.custom.assign("ELXYKZXMRPUDCRSNBAOUBGVASBKBRGMEGXDYC");

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
    msg.setTimeStamp(0.3154636408610576);
    msg.setSource(47409U);
    msg.setSourceEntity(168U);
    msg.setDestination(14808U);
    msg.setDestinationEntity(88U);
    msg.timeout = 44932U;
    msg.lat = 0.23439699737428532;
    msg.lon = 0.4617268370625547;
    msg.z = 0.2567116010066607;
    msg.z_units = 122U;
    msg.speed = 0.38364751691809384;
    msg.speed_units = 4U;
    msg.bearing = 0.5313677262201488;
    msg.cross_angle = 0.019078055790331616;
    msg.width = 0.7066600224645515;
    msg.length = 0.2460392520231066;
    msg.hstep = 0.310124916502692;
    msg.coff = 92U;
    msg.alternation = 102U;
    msg.flags = 162U;
    msg.custom.assign("WTJTBEBKUECARPNJLOOPVVCLJQUPEJZBAHEGZUIOTSHMMJGHBIASBIKYZNKOVRBFEXJBLZWGZWYGFXLTAQAPKKEVHUGDWWIPJCQDMDUQFNTQLQIHDQWSYZYSQWYJER");

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
    msg.setTimeStamp(0.8712741365026407);
    msg.setSource(29962U);
    msg.setSourceEntity(63U);
    msg.setDestination(5793U);
    msg.setDestinationEntity(73U);
    msg.timeout = 62974U;
    msg.lat = 0.058935148607078935;
    msg.lon = 0.018952269908679154;
    msg.z = 0.9546661412301534;
    msg.z_units = 237U;
    msg.speed = 0.2434436987352797;
    msg.speed_units = 227U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6414722409139751;
    tmp_msg_0.y = 0.41837515284729665;
    tmp_msg_0.z = 0.5198302256131281;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OBUNNVQVHATLHQFSUIRXIVCVXXSYVAFJDDKZFMEFTNHEPMDZSDKSJZALJNDDAECUAOYUJOMAGKRXLSXUXTNPZBUYRIQLZJEJOENNZCRMZBJJMWTBHWUTYOPVTFOMILTLGJGEQQWLUEOXCBCYIXDWIDNKZKXHHVYMPSKAGBWGZGTMPYIWZGAWPYMQABHFKRWGSX");

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
    msg.setTimeStamp(0.32886236367540966);
    msg.setSource(57264U);
    msg.setSourceEntity(97U);
    msg.setDestination(56863U);
    msg.setDestinationEntity(206U);
    msg.timeout = 4894U;
    msg.lat = 0.6494717503346633;
    msg.lon = 0.7372324941929621;
    msg.z = 0.4465443007166391;
    msg.z_units = 35U;
    msg.speed = 0.14834553382535332;
    msg.speed_units = 166U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5149740219091319;
    tmp_msg_0.y = 0.43811267288935984;
    tmp_msg_0.z = 0.4789273700855323;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DKWLQQUZTBHQMHRFRJQDDVPWIWAONBXRAGUTQKBYCUPGSPSNXSHTIMAPTXFVBLQCDDYREPEAGWAZMUHIFICGLGEWFZXJXYDXDCZYRCTMXGMQKRHPTNCIVINCLSVMVJEMIPNFGNLATYZDFPAKOUBWFHRBFMHENECXLBTKGOUYFYJJIAHWMZKIAYDFJKWUEBBVOZDCLHSUPVOWZSICJRVKZESVEONWUQQRAOORUYMYTPLKLJKBXNSZLG");

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
    msg.setTimeStamp(0.23498036967996194);
    msg.setSource(38006U);
    msg.setSourceEntity(126U);
    msg.setDestination(54996U);
    msg.setDestinationEntity(99U);
    msg.timeout = 38674U;
    msg.lat = 0.5578027043053291;
    msg.lon = 0.8323530377994168;
    msg.z = 0.11428806176988437;
    msg.z_units = 143U;
    msg.speed = 0.16939733465040563;
    msg.speed_units = 1U;
    msg.custom.assign("RXKWTVNONJQYZBGJSIVIALBXYOTLRA");

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
    msg.setTimeStamp(0.6808474442899806);
    msg.setSource(30970U);
    msg.setSourceEntity(116U);
    msg.setDestination(62904U);
    msg.setDestinationEntity(76U);
    msg.x = 0.9564526055543452;
    msg.y = 0.5907738922455037;
    msg.z = 0.2505764779948475;

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
    msg.setTimeStamp(0.9674812251129545);
    msg.setSource(38070U);
    msg.setSourceEntity(97U);
    msg.setDestination(49281U);
    msg.setDestinationEntity(90U);
    msg.x = 0.5350722444749397;
    msg.y = 0.8370081013506498;
    msg.z = 0.8267739578286234;

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
    msg.setTimeStamp(0.9589380214473067);
    msg.setSource(21534U);
    msg.setSourceEntity(112U);
    msg.setDestination(51712U);
    msg.setDestinationEntity(170U);
    msg.x = 0.11006872174915894;
    msg.y = 0.3879481388540844;
    msg.z = 0.4554661159778258;

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
    msg.setTimeStamp(0.24203403444896365);
    msg.setSource(22927U);
    msg.setSourceEntity(167U);
    msg.setDestination(50646U);
    msg.setDestinationEntity(109U);
    msg.timeout = 57845U;
    msg.lat = 0.5630630483255639;
    msg.lon = 0.20315267801833403;
    msg.z = 0.19491248101769054;
    msg.z_units = 242U;
    msg.amplitude = 0.34175299878063703;
    msg.pitch = 0.37938634708811647;
    msg.speed = 0.5213763945592653;
    msg.speed_units = 44U;
    msg.custom.assign("XHQCFDPBVQKWJVNTLLKWCRYCASGTZTIJSKOQKFOQFUILDGARJZMEPLSUGGSHMX");

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
    msg.setTimeStamp(0.2600033451966455);
    msg.setSource(22449U);
    msg.setSourceEntity(207U);
    msg.setDestination(12480U);
    msg.setDestinationEntity(4U);
    msg.timeout = 37186U;
    msg.lat = 0.5592042894012446;
    msg.lon = 0.055779364391632114;
    msg.z = 0.1569401860335048;
    msg.z_units = 157U;
    msg.amplitude = 0.017636731481384338;
    msg.pitch = 0.9762608783201253;
    msg.speed = 0.49310569681043503;
    msg.speed_units = 77U;
    msg.custom.assign("DUTNFXSRLURARDJQCOFBHGQQTWECXEXYOBCUSMQXGVPTMTOLUDTLWOAHIVYFJGJSNACUSYERPXHTVKVUPBUTTGPEROEILQDMFBDGMFHSRVYAYAOZIKRWJQHSZFJMAWBNKFXCMDGHYKCQCQYXEFREJYDPIVMPDIGFNZWPCJDVEVERGCIKHOICLQHJZKMW");

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
    msg.setTimeStamp(0.29412915676992457);
    msg.setSource(52374U);
    msg.setSourceEntity(111U);
    msg.setDestination(20080U);
    msg.setDestinationEntity(214U);
    msg.timeout = 256U;
    msg.lat = 0.4929552273985449;
    msg.lon = 0.6130700230541805;
    msg.z = 0.4139578583661958;
    msg.z_units = 57U;
    msg.amplitude = 0.8272924344796377;
    msg.pitch = 0.13860438786370888;
    msg.speed = 0.6801915419817919;
    msg.speed_units = 195U;
    msg.custom.assign("LWULITCGWOHFHOCABCMYSDRJCDFTDKCSNETUVJSUJHEOYQINYIEBJFYXLKZBDYNHJNMOYMOSUYEWZVJEELLAQMVHEPUWVCJGMWBFHNMRWXHXZGITZUTVZRFTLQWRAPDAZBOAZFCCUGGPNIGHKKAVATPFKJIDWBTSLQGUPPKRRUKGLQIQKOSXMQXXRGMMDTLMYLFDZQPORHUDEWVEABQKFIB");

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
    msg.setTimeStamp(0.39073909294370057);
    msg.setSource(2373U);
    msg.setSourceEntity(103U);
    msg.setDestination(40064U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.2016643969264319);
    msg.setSource(51879U);
    msg.setSourceEntity(185U);
    msg.setDestination(34723U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.6855273885500117);
    msg.setSource(38433U);
    msg.setSourceEntity(131U);
    msg.setDestination(29952U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.47847933491808436);
    msg.setSource(34266U);
    msg.setSourceEntity(214U);
    msg.setDestination(4597U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.46477958918750883;
    msg.lon = 0.14168510847353877;
    msg.z = 0.9866876526706075;
    msg.z_units = 83U;
    msg.radius = 0.3285921259865192;
    msg.duration = 47070U;
    msg.speed = 0.43887342730333756;
    msg.speed_units = 53U;
    msg.custom.assign("HURQMSDYDDWDSYDECTSJSIXOPEMISJBVUUOYTBYTOBKWHLHTNRRQIVBVQTDTZMHYKGJEDEMEYPDFUEZZUFPIXJNOVMOZPAYEZFAMMFZD");

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
    msg.setTimeStamp(0.7788363631372006);
    msg.setSource(6735U);
    msg.setSourceEntity(61U);
    msg.setDestination(19993U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.6270004065614345;
    msg.lon = 0.026556029805738457;
    msg.z = 0.39803743476037834;
    msg.z_units = 131U;
    msg.radius = 0.9711266780183978;
    msg.duration = 35350U;
    msg.speed = 0.47826107590692624;
    msg.speed_units = 125U;
    msg.custom.assign("HJAAOBMKXEPQSLZKBPRFELTFCVRSTDEGMAJKXGQOJYDRSNWVOZRHCNQZHEIDKEUULBUEUZRNOPWRLCXNEINJQUTIYMPCOFSTNYYPCJLUTOVSWQH");

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
    msg.setTimeStamp(0.3225029812044712);
    msg.setSource(5669U);
    msg.setSourceEntity(204U);
    msg.setDestination(31753U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.15944839405156708;
    msg.lon = 0.05131447526261412;
    msg.z = 0.7914211318986927;
    msg.z_units = 166U;
    msg.radius = 0.2991960595555375;
    msg.duration = 6696U;
    msg.speed = 0.6996771480666522;
    msg.speed_units = 18U;
    msg.custom.assign("OEKEWQZWCCCJQRYUMBCBNQZBNHRKXEYOJQEIYVEGFPWAWTIKIVCPIVNKTFAATMXDIFIFPMIAYOUPPANBHETCEBXZGSGSGNVVORWAVVX");

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
    msg.setTimeStamp(0.8416955262183162);
    msg.setSource(19605U);
    msg.setSourceEntity(2U);
    msg.setDestination(51656U);
    msg.setDestinationEntity(246U);
    msg.timeout = 1605U;
    msg.flags = 240U;
    msg.lat = 0.5007821737156193;
    msg.lon = 0.22448776007823457;
    msg.start_z = 0.05259863822727795;
    msg.start_z_units = 12U;
    msg.end_z = 0.9871733820766919;
    msg.end_z_units = 72U;
    msg.radius = 0.5526228990688655;
    msg.speed = 0.44584802428445447;
    msg.speed_units = 227U;
    msg.custom.assign("XAKLFHLUJVZGBJXFUHRQHCQCYYMMBBUCRXYJRLESQTBOJBPFFDSUYRSBGWFRLAECRATQZOKSFXPCGOJEOYODEIIHNKVKSSOGDTDVDIBWTNEQYUPADAYVBDCWEKZQNLMPTSXRXEWGNWKBGMMCGGXZXZNJMWLATOYHKYIRLLVPICVTZMPGZJNDINULBQUST");

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
    msg.setTimeStamp(0.13360388411747237);
    msg.setSource(62410U);
    msg.setSourceEntity(7U);
    msg.setDestination(47323U);
    msg.setDestinationEntity(116U);
    msg.timeout = 37593U;
    msg.flags = 130U;
    msg.lat = 0.25170087193082435;
    msg.lon = 0.5084483199038803;
    msg.start_z = 0.3800048168477763;
    msg.start_z_units = 199U;
    msg.end_z = 0.3040651916172793;
    msg.end_z_units = 8U;
    msg.radius = 0.8593009440842575;
    msg.speed = 0.13952869593512773;
    msg.speed_units = 33U;
    msg.custom.assign("QIPLNLTPRPWFVFGVWVOWDAGXLBQCNWXBNMTATOKIVLYMHVWARESBLEQNMRJBJKOSODVVJKVEXKSWZHPEZKRQASEMNOBFCGRSZQZDIMYAXOXFKILDYEYJPWOTIGCMAIUJUZVKRTPPAFYEXQQGFBPYEUHDHJTBUHBDZGJYWWZLDWOISTZSVHQDXKXHIYLQMGXAFUNRFOCKNCUIBCFBSSJREHGOGHIMLPUJATUTLTGUYK");

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
    msg.setTimeStamp(0.032124573148329616);
    msg.setSource(45839U);
    msg.setSourceEntity(72U);
    msg.setDestination(52137U);
    msg.setDestinationEntity(233U);
    msg.timeout = 48479U;
    msg.flags = 39U;
    msg.lat = 0.2718629919635568;
    msg.lon = 0.9592152368692974;
    msg.start_z = 0.06882300411178355;
    msg.start_z_units = 123U;
    msg.end_z = 0.1876995272647185;
    msg.end_z_units = 233U;
    msg.radius = 0.14229754695425167;
    msg.speed = 0.2011976616111799;
    msg.speed_units = 69U;
    msg.custom.assign("TBNVZIZDKYDNBYQYEQIJTVLUCKQWLNSNHPXGATTNBMOZOFVGBGXVOQWRVIWPNFQCAAXYINOOAYLEACQWWYJGXLKJEELCSARSCB");

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
    msg.setTimeStamp(0.3019024642758622);
    msg.setSource(36207U);
    msg.setSourceEntity(126U);
    msg.setDestination(49245U);
    msg.setDestinationEntity(18U);
    msg.timeout = 12305U;
    msg.lat = 0.8618952049410097;
    msg.lon = 0.3193026879864037;
    msg.z = 0.5163994561738279;
    msg.z_units = 20U;
    msg.speed = 0.3178469000427766;
    msg.speed_units = 130U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7469832971677711;
    tmp_msg_0.y = 0.456908445265809;
    tmp_msg_0.z = 0.09888807453372683;
    tmp_msg_0.t = 0.33923164877737566;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RTHEGSBNIDWHRYIGMRUNQNHQTCISUYSETHSWPEHYETKPBURZSEBZTZQDSPWBZMVGOIYOQZTLAHWAVWBUGVLOTXZXNGIQKUGPXDIECYFAIRYNOYYNDHMLCUJADUEVMKRCHKCVAHVMNIWJSUROLDQMJAXJWABFTJNMFPFQOGKNCXFFESADPGXSZRKXTFKKNLWXORTBALHZAXLLGODKZFJILOCBVKJEECZSBPJOPFRJYMWV");

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
    msg.setTimeStamp(0.8897974054862668);
    msg.setSource(32137U);
    msg.setSourceEntity(209U);
    msg.setDestination(64919U);
    msg.setDestinationEntity(253U);
    msg.timeout = 6730U;
    msg.lat = 0.1677060218662647;
    msg.lon = 0.8643264941469692;
    msg.z = 0.7656434975926493;
    msg.z_units = 144U;
    msg.speed = 0.29515772232889526;
    msg.speed_units = 124U;
    msg.custom.assign("CTDHOTFDKYLGHCALBPXGEFOLCSBBPLMXBVETXTKAEYSAGSXHEKRLPNUQFREPOOGWNPBEMHMPDSQFGWBMYDFTVTBMAYAIDECPEUGCRXQDQBITIFOXUOVRWLUROHCFZZFIAQJOFYVHDPSIXAJTIPISKNJCYHJUNUCJJHQNYGLGJ");

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
    msg.setTimeStamp(0.48601876719915116);
    msg.setSource(56837U);
    msg.setSourceEntity(117U);
    msg.setDestination(14043U);
    msg.setDestinationEntity(41U);
    msg.timeout = 32499U;
    msg.lat = 0.05656348680994039;
    msg.lon = 0.7311250288081722;
    msg.z = 0.6575973174114216;
    msg.z_units = 80U;
    msg.speed = 0.2564686994800517;
    msg.speed_units = 84U;
    msg.custom.assign("XJEACSDSTJYXARFCPPFVJLQLBHVXNYRRQWSMULJXMCMWMYIZHQRUNGLDAGHKETUIGZUYETQVTLLDFINJOVSBOWWTKKNROUPDSZBSMJFCQNMLBFYYPZTKIGNGTCUNAOJVHTDYDFLKZGGBSPMVVIHXDQHKARECHKXDGIVIKSQQZBEFRWCNYGCKQGZWMWPBUPZVXWBOVHMEIEMFAPARBRYKNIAOXFXJQHSSCOOHUTNEYJOZIDLBEPRUUAW");

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
    msg.setTimeStamp(0.46786478714098056);
    msg.setSource(20739U);
    msg.setSourceEntity(40U);
    msg.setDestination(13247U);
    msg.setDestinationEntity(48U);
    msg.x = 0.9890351890138525;
    msg.y = 0.4189100748645983;
    msg.z = 0.7569818644122043;
    msg.t = 0.4549222919935446;

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
    msg.setTimeStamp(0.19775819110330706);
    msg.setSource(20027U);
    msg.setSourceEntity(185U);
    msg.setDestination(39415U);
    msg.setDestinationEntity(73U);
    msg.x = 0.6405384139955568;
    msg.y = 0.25928949493680176;
    msg.z = 0.6826399845299428;
    msg.t = 0.12514733219096263;

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
    msg.setTimeStamp(0.1449714863008964);
    msg.setSource(11024U);
    msg.setSourceEntity(129U);
    msg.setDestination(32501U);
    msg.setDestinationEntity(128U);
    msg.x = 0.720885944518493;
    msg.y = 0.8885247537000159;
    msg.z = 0.02702638738452956;
    msg.t = 0.5686576671710009;

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
    msg.setTimeStamp(0.1007182453676504);
    msg.setSource(28017U);
    msg.setSourceEntity(113U);
    msg.setDestination(5039U);
    msg.setDestinationEntity(91U);
    msg.timeout = 24879U;
    msg.name.assign("YUNWXGUYGITCWIHEFTTCLRVOUJKVEBMLIYBQRBZDQESKJDLXNCWDRSMQPUUNEGKCQLHBJJGWBEOVCYKUDXJPNXPLFPAMEPYPATVDVQIAAHEFISIBZZSDLJBELWTPFPVGTSHWFG");
    msg.custom.assign("CWLFFNFXVJRSGOVYXOYWMCVGPUUTUKQLGDIMIXAUAPPLNAZJRUQYECNNPSXLPRCCWXWOBNVZTWPWMFEGOZKIEEHFJMZDTVHIRTEAQSGUBFVRTYNMDQXFWATGQBFWJMZHVCBEOIHRQBUTYYHYZEWJAMLBSUQWIOZBAAHSEOGGLCZYVAOFJCXQAHZTZDSPKIJBGPUXFKQMVNTQDHDSMRDSRXKTIPSLOGNCKHRDSLIUXIHNYRKJCBM");

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
    msg.setTimeStamp(0.3607398564085963);
    msg.setSource(4642U);
    msg.setSourceEntity(18U);
    msg.setDestination(64239U);
    msg.setDestinationEntity(207U);
    msg.timeout = 41374U;
    msg.name.assign("DFDVKNFAKPBEEQEKBFSUZGVNDNPYALSPTKOKKQOFUBPXGPQNTZHWOTLVQHLMVAZYRTXFZUPMZCZIYXISBXQASQEMOATYCHCMSUBPQOCWOITWKJQQDPYMVKLWJELVZLUTMIMGEGCOJJWFWIBLXFJOFRUERJGHCJKYYJEULBJGBXAWHZMTRVCHDFXWGGVNXRZHTFPLNVGHRSCTDEASWWSJ");
    msg.custom.assign("RDVNSROXNNLTUQFLEQDVCCFOOMYUDUEHJAXZNODSIZLKNWFTBIVNEMIWZWZSNJXRCGVXQHUYVRQBGFQRBLCTLFOBJHDCFXLGBOWMLUUMDJZEKVIEHKJQVIOHSWRGHENJMAAVCZJOJYUHSHYSHWPQXPEVS");

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
    msg.setTimeStamp(0.6919183557899841);
    msg.setSource(36670U);
    msg.setSourceEntity(25U);
    msg.setDestination(11999U);
    msg.setDestinationEntity(80U);
    msg.timeout = 19320U;
    msg.name.assign("BPJHFEEXYKFGQZIMVJNLAXVBUFZKRQZORMSLUHJGJHLBIQNKBLDQZZUOXDGSHVBJPMTXEZPGCORWMGCWYDLEKRNQGJCNBDDGFZRJKUMWBSMDHELWCGEKUVAOKYANTWEDYYTXJAWAOBTRZUIPROHAIHULYKKBOHOZMVA");
    msg.custom.assign("OXDTINJGFSAHSDMHZWTQLYPFXGIAZMHFOAAUIKUXGSPVOUPGXHJOJBSKARXKVWQXCSMVMAGBJGXEYBDIBICCJSNVIWERBLQPLWQEVSJUNPFLDBUCXCUNSEDKKLYUWCOHIMWDHQLMYTIHENRMJOBFHZKKUYOLNLRQKTCVSUMEGRHZXVMDFAPDJIYEYURFRMALQZPTAZQJWVIEGETCROLYJ");

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
    msg.setTimeStamp(0.8733015467568708);
    msg.setSource(8447U);
    msg.setSourceEntity(62U);
    msg.setDestination(19334U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.44205148544741635;
    msg.lon = 0.24385745282113724;
    msg.z = 0.7009676359282228;
    msg.z_units = 204U;
    msg.speed = 0.9276474961382426;
    msg.speed_units = 19U;
    msg.start_time = 0.5095655285988233;
    msg.custom.assign("UQVZXHDPZZGOFSNPADKMMYYIGAAJVJCBGROOPAFWIZRQUYAUCJELQJTVIGNXHXBXXTZXZGLFFZL");

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
    msg.setTimeStamp(0.9843544282304517);
    msg.setSource(32488U);
    msg.setSourceEntity(188U);
    msg.setDestination(62702U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.03713225340059856;
    msg.lon = 0.6961698029529736;
    msg.z = 0.8348291293345181;
    msg.z_units = 185U;
    msg.speed = 0.06335136738660241;
    msg.speed_units = 34U;
    msg.start_time = 0.9740400243921468;
    msg.custom.assign("NJXZIIURPKNLYOCZAWMYACGTJRIYCZZBKGHMNHSOADXJHPJYYSKMFCNBCPBXKJIVJRFAUKWIKRZYWHDTUVFUBQYMVMQITVYGSQOPEVISTSUXAMYBZORXAHRUXWLNTGWDWGGDQMILSVLFEOEITNTJOHBUWTOABBLIU");

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
    msg.setTimeStamp(0.8774907781973604);
    msg.setSource(12164U);
    msg.setSourceEntity(144U);
    msg.setDestination(6553U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.2627150219210118;
    msg.lon = 0.7554271627538104;
    msg.z = 0.3692532135757941;
    msg.z_units = 126U;
    msg.speed = 0.030413836294471253;
    msg.speed_units = 133U;
    msg.start_time = 0.1912303077048627;
    msg.custom.assign("PGRDYZNHJSDNBHNMVQMKZANZQDLYFPSWDSWOUXMKUYAQBBKRYGMWFTOBXHSLIJLGMVSIEVXGOBDRZVDLUITKXAFOIRSKWPKRACWHOETJELBAUZVH");

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
    msg.setTimeStamp(0.8848637806328461);
    msg.setSource(15490U);
    msg.setSourceEntity(180U);
    msg.setDestination(24499U);
    msg.setDestinationEntity(138U);
    msg.vid = 16257U;
    msg.off_x = 0.9258534425694477;
    msg.off_y = 0.8679979084718044;
    msg.off_z = 0.8207881799636091;

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
    msg.setTimeStamp(0.48924800836543714);
    msg.setSource(41281U);
    msg.setSourceEntity(194U);
    msg.setDestination(49452U);
    msg.setDestinationEntity(87U);
    msg.vid = 51736U;
    msg.off_x = 0.5761037863373228;
    msg.off_y = 4.256992049811448e-05;
    msg.off_z = 0.7490353743234156;

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
    msg.setTimeStamp(0.9964694344497301);
    msg.setSource(34835U);
    msg.setSourceEntity(82U);
    msg.setDestination(61458U);
    msg.setDestinationEntity(207U);
    msg.vid = 11406U;
    msg.off_x = 0.08026500432753247;
    msg.off_y = 0.4936683567678467;
    msg.off_z = 0.5606011947453816;

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
    msg.setTimeStamp(0.41884890908427774);
    msg.setSource(20474U);
    msg.setSourceEntity(85U);
    msg.setDestination(42495U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.7059956536626779);
    msg.setSource(65427U);
    msg.setSourceEntity(246U);
    msg.setDestination(10931U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.7776745010016061);
    msg.setSource(50759U);
    msg.setSourceEntity(48U);
    msg.setDestination(54457U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.11720488733271406);
    msg.setSource(13291U);
    msg.setSourceEntity(146U);
    msg.setDestination(23335U);
    msg.setDestinationEntity(137U);
    msg.mid = 52451U;

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
    msg.setTimeStamp(0.19314392541792147);
    msg.setSource(299U);
    msg.setSourceEntity(229U);
    msg.setDestination(2721U);
    msg.setDestinationEntity(52U);
    msg.mid = 16791U;

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
    msg.setTimeStamp(0.4540372613200597);
    msg.setSource(64114U);
    msg.setSourceEntity(36U);
    msg.setDestination(2606U);
    msg.setDestinationEntity(126U);
    msg.mid = 23146U;

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
    msg.setTimeStamp(0.05569874525004437);
    msg.setSource(64394U);
    msg.setSourceEntity(143U);
    msg.setDestination(48742U);
    msg.setDestinationEntity(72U);
    msg.state = 237U;
    msg.eta = 33075U;
    msg.info.assign("TDMCZNZOFXBUKIUGKFWRRMLHDGLIDRJXLBTHHUKOEEXHNDDPBUF");

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
    msg.setTimeStamp(0.5978922614779351);
    msg.setSource(8484U);
    msg.setSourceEntity(130U);
    msg.setDestination(29067U);
    msg.setDestinationEntity(115U);
    msg.state = 93U;
    msg.eta = 2509U;
    msg.info.assign("IDWGCIVFINCQKYCXWFDLEAJULYTUDEYRVDERZERHIZCSPXJJXOZSMKNYRXWWFTQQVDOQFFDCQPOPBLPBZLSHEXKQPMYSWHHCHGOXLKFTVNGUCCMZUNZYJPOISBGANKEZGTQBAFXORBJYDVHGBKNEFVMXSEQPWEWRMCKYDIISBWANRULTUUTAWLTQPXJFOPEHDGNVLYARKOGFUVOHBJCNBGTAHSNMKRMITVZWIXZAMATJVPDGJ");

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
    msg.setTimeStamp(0.7969546152786265);
    msg.setSource(33725U);
    msg.setSourceEntity(65U);
    msg.setDestination(17447U);
    msg.setDestinationEntity(123U);
    msg.state = 124U;
    msg.eta = 43673U;
    msg.info.assign("KSKRUEOVGYPYALABONPLSGZYYMIATWXHZJQXVEHXYUMMQTRDVCMWMFSGHDIYATEVXKLGGZRRFRANCGOXFPSRBZCTLQQNRFBTUDKMAAPMWKXCUUSJNEIXEXKVKNDIVMSAUOTQUSIIFWVOCMGBKWJOGPJBRQLJYVTRKFHHUDOHOWPOJZDSLJQFYDOPUHMWLWQTWQAFNIGANGTDZEQSPJNXCNNJCIFKEYPEBTIIHPVSREZYDZ");

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
    msg.setTimeStamp(0.8476373631155976);
    msg.setSource(49780U);
    msg.setSourceEntity(180U);
    msg.setDestination(26167U);
    msg.setDestinationEntity(105U);
    msg.system = 5036U;
    msg.duration = 13743U;
    msg.speed = 0.8466342255089558;
    msg.speed_units = 188U;
    msg.x = 0.69373767348801;
    msg.y = 0.4496039568915545;
    msg.z = 0.44763768414754457;
    msg.z_units = 198U;

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
    msg.setTimeStamp(0.07632130324203401);
    msg.setSource(20201U);
    msg.setSourceEntity(107U);
    msg.setDestination(40496U);
    msg.setDestinationEntity(105U);
    msg.system = 5604U;
    msg.duration = 35120U;
    msg.speed = 0.9436313493680213;
    msg.speed_units = 217U;
    msg.x = 0.46595933015676705;
    msg.y = 0.29318884353171226;
    msg.z = 0.4996697191844478;
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
    msg.setTimeStamp(0.6622315770871842);
    msg.setSource(51387U);
    msg.setSourceEntity(9U);
    msg.setDestination(7138U);
    msg.setDestinationEntity(144U);
    msg.system = 23682U;
    msg.duration = 54813U;
    msg.speed = 0.7536892033014102;
    msg.speed_units = 214U;
    msg.x = 0.4045470442698944;
    msg.y = 0.22094643398253966;
    msg.z = 0.5492211054940314;
    msg.z_units = 205U;

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
    msg.setTimeStamp(0.6759935092482378);
    msg.setSource(36691U);
    msg.setSourceEntity(11U);
    msg.setDestination(64118U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.9062592016809873;
    msg.lon = 0.21709768973631627;
    msg.speed = 0.6869460841458539;
    msg.speed_units = 17U;
    msg.duration = 34108U;
    msg.sys_a = 6907U;
    msg.sys_b = 58096U;
    msg.move_threshold = 0.7789890966767756;

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
    msg.setTimeStamp(0.5606558951019095);
    msg.setSource(44500U);
    msg.setSourceEntity(77U);
    msg.setDestination(55613U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.2144043422927806;
    msg.lon = 0.23542003704914605;
    msg.speed = 0.02938724228699452;
    msg.speed_units = 133U;
    msg.duration = 8231U;
    msg.sys_a = 49846U;
    msg.sys_b = 63169U;
    msg.move_threshold = 0.6430283058826177;

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
    msg.setTimeStamp(0.44983502551869936);
    msg.setSource(4540U);
    msg.setSourceEntity(131U);
    msg.setDestination(49893U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.5748465798103712;
    msg.lon = 0.112334241568114;
    msg.speed = 0.9979448430052086;
    msg.speed_units = 178U;
    msg.duration = 50589U;
    msg.sys_a = 24100U;
    msg.sys_b = 41778U;
    msg.move_threshold = 0.0971528275509399;

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
    msg.setTimeStamp(0.5436434708004382);
    msg.setSource(49132U);
    msg.setSourceEntity(83U);
    msg.setDestination(56518U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.8830320080817998;
    msg.lon = 0.34009905849752164;
    msg.z = 0.04863693624985943;
    msg.z_units = 213U;
    msg.speed = 0.17272982452612295;
    msg.speed_units = 245U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3359925645807208;
    tmp_msg_0.lon = 0.6330647337628246;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UUUGFUJVESPYXBJCWZAOKQGGQSNVHTXDGXBBHIVSJYUKEWJNBDNFOWXZCSOVDXRELFCHBVZTHMUDLZJUQYKHKIRCOYORPBSWTSWLMGTSX");

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
    msg.setTimeStamp(0.6092314637063968);
    msg.setSource(20178U);
    msg.setSourceEntity(220U);
    msg.setDestination(23211U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.6633887946608958;
    msg.lon = 0.4382844584373762;
    msg.z = 0.8551035388181094;
    msg.z_units = 158U;
    msg.speed = 0.6154260890867095;
    msg.speed_units = 78U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3943801917627501;
    tmp_msg_0.lon = 0.9862959604893985;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DNUSVBDIJKKIPXVMTGYHWMCYUCCIDFZHHJCKRFOMHUBMIGWGBIZXXTEOMOLNCJJYQZOFKXSOMRSJFWYKEEKWZZDGIBEFLUNHVBXKSUQKVPBBDYAFPLIQWFOTAPLZZQNTYLHPMTVRCVEGTNARPYXLSNXTUJQXVIBNUWSQQESHONO");

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
    msg.setTimeStamp(0.4302423048937285);
    msg.setSource(11620U);
    msg.setSourceEntity(39U);
    msg.setDestination(1110U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.2026163500473266;
    msg.lon = 0.4240407461159007;
    msg.z = 0.11776599258881659;
    msg.z_units = 231U;
    msg.speed = 0.8261814121539958;
    msg.speed_units = 99U;
    msg.custom.assign("ITQMKOUUJZBVRZPQLALGCDJGQQGGODYZEETSRGPSPTRMPSNQSQCSYXZCWOLPKZKJMOBAXTFAIPRILCWV");

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
    msg.setTimeStamp(0.7506818464077015);
    msg.setSource(44726U);
    msg.setSourceEntity(79U);
    msg.setDestination(28079U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.6909566648552423;
    msg.lon = 0.6410316484844168;

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
    msg.setTimeStamp(0.539332082895011);
    msg.setSource(59401U);
    msg.setSourceEntity(166U);
    msg.setDestination(22294U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.5919730703077882;
    msg.lon = 0.7790952639051947;

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
    msg.setTimeStamp(0.3271228785825031);
    msg.setSource(31222U);
    msg.setSourceEntity(49U);
    msg.setDestination(42442U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.5203237280412941;
    msg.lon = 0.8650919909834106;

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
    msg.setTimeStamp(0.5961319261466874);
    msg.setSource(16238U);
    msg.setSourceEntity(21U);
    msg.setDestination(14764U);
    msg.setDestinationEntity(133U);
    msg.timeout = 33656U;
    msg.lat = 0.3301548336890019;
    msg.lon = 0.307774550496692;
    msg.z = 0.210345801909546;
    msg.z_units = 128U;
    msg.pitch = 0.9751565226575665;
    msg.amplitude = 0.996307137717536;
    msg.duration = 31020U;
    msg.speed = 0.8875195720273925;
    msg.speed_units = 124U;
    msg.radius = 0.45681081339568996;
    msg.direction = 28U;
    msg.custom.assign("XYDHNRTLYPICWELFNSLAGXZSIKZBPYVTTSGTOBREPJCKRISTOQQFPIHCVSDLXNESOJDHFLCCJWMVTRDKPZYFMIDFEFJSYJDYHTCMUTSYKKQVRAOHXKJZVXWCKNRRZUEMCZXTDEFYXWBRPGKWJASDQNAZCAHUVABQCUJMUMMJDUUBPIONVYGWSBOBIQVOXUHIZFUBFANBWNZEURHAWJRKNFYGVVELLPZLHMOH");

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
    msg.setTimeStamp(0.1963076761703676);
    msg.setSource(61279U);
    msg.setSourceEntity(74U);
    msg.setDestination(48616U);
    msg.setDestinationEntity(45U);
    msg.timeout = 41085U;
    msg.lat = 0.7241996991111405;
    msg.lon = 0.9735952003539091;
    msg.z = 0.7265450055800285;
    msg.z_units = 202U;
    msg.pitch = 0.23789649890403985;
    msg.amplitude = 0.9311938442934498;
    msg.duration = 59786U;
    msg.speed = 0.002370946701593435;
    msg.speed_units = 60U;
    msg.radius = 0.6356554188219693;
    msg.direction = 27U;
    msg.custom.assign("WXDLWNFLQYYYBTRCKWRMPAWZQDSTBAOTYNRIOBRKXREBFCXPAVGPHAIUJBOI");

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
    msg.setTimeStamp(0.4840875285563895);
    msg.setSource(15800U);
    msg.setSourceEntity(153U);
    msg.setDestination(15498U);
    msg.setDestinationEntity(4U);
    msg.timeout = 61523U;
    msg.lat = 0.37107990803242763;
    msg.lon = 0.46527866295018605;
    msg.z = 0.17222237996969902;
    msg.z_units = 153U;
    msg.pitch = 0.4507925413352065;
    msg.amplitude = 0.5328511338136366;
    msg.duration = 3069U;
    msg.speed = 0.07906945656603326;
    msg.speed_units = 164U;
    msg.radius = 0.693131291547718;
    msg.direction = 235U;
    msg.custom.assign("DCHIOHYCKIUYGRPXTTAYSUCZVPBQXTOKOIODKRWPTZSAYNNLYVMKNPRJUPOJXMEPJIUSXMFQNKQCGQNGLMUBHIKXXYKFTRYWFSJOSMGLSFHBSADMFOEQTJVCJOJHLFZDLTEADUWLDGZENCGXBWTXZOWUAECDZQZVKCWYHCZMPUIWPBUVIPGWAFQNBQHWAREBTMLGYHURDLQHE");

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
    msg.setTimeStamp(0.9526244036724326);
    msg.setSource(20648U);
    msg.setSourceEntity(94U);
    msg.setDestination(32916U);
    msg.setDestinationEntity(245U);
    msg.control_src = 52520U;
    msg.control_ent = 74U;
    msg.timeout = 0.06499327131538668;
    msg.loiter_radius = 0.7530327535047665;
    msg.altitude_interval = 0.28137067756966183;

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
    msg.setTimeStamp(0.24979492063968);
    msg.setSource(64441U);
    msg.setSourceEntity(18U);
    msg.setDestination(43898U);
    msg.setDestinationEntity(174U);
    msg.control_src = 42639U;
    msg.control_ent = 68U;
    msg.timeout = 0.8008475893799734;
    msg.loiter_radius = 0.79941367061064;
    msg.altitude_interval = 0.8350310950275445;

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
    msg.setTimeStamp(0.9096718204904181);
    msg.setSource(11362U);
    msg.setSourceEntity(13U);
    msg.setDestination(59881U);
    msg.setDestinationEntity(208U);
    msg.control_src = 9176U;
    msg.control_ent = 143U;
    msg.timeout = 0.9869755652943611;
    msg.loiter_radius = 0.4957132840106172;
    msg.altitude_interval = 0.7782364335560437;

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
    msg.setTimeStamp(0.5740074579371488);
    msg.setSource(4105U);
    msg.setSourceEntity(54U);
    msg.setDestination(8221U);
    msg.setDestinationEntity(228U);
    msg.flags = 119U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.03649076222217473;
    tmp_msg_0.speed_units = 203U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.03900906954599426;
    tmp_msg_1.z_units = 156U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8938673845142941;
    msg.lon = 0.0076692567281581026;

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
    msg.setTimeStamp(0.3425037283649407);
    msg.setSource(20707U);
    msg.setSourceEntity(103U);
    msg.setDestination(10991U);
    msg.setDestinationEntity(220U);
    msg.flags = 170U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.45094674573327986;
    tmp_msg_0.speed_units = 110U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.019732165032114835;
    tmp_msg_1.z_units = 68U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.14392898812334232;
    msg.lon = 0.41234828158102066;

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
    msg.setTimeStamp(0.9454445534712628);
    msg.setSource(58158U);
    msg.setSourceEntity(50U);
    msg.setDestination(59687U);
    msg.setDestinationEntity(168U);
    msg.flags = 227U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1993080489751421;
    tmp_msg_0.speed_units = 37U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8171135639618053;
    tmp_msg_1.z_units = 174U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6815510741589803;
    msg.lon = 0.6005399315196799;

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
    msg.setTimeStamp(0.2250692214548612);
    msg.setSource(31584U);
    msg.setSourceEntity(108U);
    msg.setDestination(26598U);
    msg.setDestinationEntity(195U);
    msg.control_src = 48283U;
    msg.control_ent = 89U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 219U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5071761582491895;
    tmp_tmp_msg_0_0.speed_units = 206U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6335962596714055;
    tmp_tmp_msg_0_1.z_units = 229U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5734308806993795;
    tmp_msg_0.lon = 0.3392213393541976;
    msg.reference.set(tmp_msg_0);
    msg.state = 150U;
    msg.proximity = 26U;

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
    msg.setTimeStamp(0.9783524079111076);
    msg.setSource(23605U);
    msg.setSourceEntity(77U);
    msg.setDestination(38052U);
    msg.setDestinationEntity(226U);
    msg.control_src = 31423U;
    msg.control_ent = 5U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 219U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.16467860780406618;
    tmp_tmp_msg_0_0.speed_units = 153U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.025389577296494714;
    tmp_tmp_msg_0_1.z_units = 40U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7913651898072905;
    tmp_msg_0.lon = 0.48281068992598686;
    msg.reference.set(tmp_msg_0);
    msg.state = 166U;
    msg.proximity = 176U;

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
    msg.setTimeStamp(0.2975995843296835);
    msg.setSource(46140U);
    msg.setSourceEntity(158U);
    msg.setDestination(63527U);
    msg.setDestinationEntity(82U);
    msg.control_src = 64196U;
    msg.control_ent = 91U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 14U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9499608106997389;
    tmp_tmp_msg_0_0.speed_units = 96U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.09961713726494237;
    tmp_tmp_msg_0_1.z_units = 44U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5916478263770073;
    tmp_msg_0.lon = 0.11823650104411487;
    msg.reference.set(tmp_msg_0);
    msg.state = 170U;
    msg.proximity = 115U;

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
    msg.setTimeStamp(0.5745408400625612);
    msg.setSource(16995U);
    msg.setSourceEntity(68U);
    msg.setDestination(23141U);
    msg.setDestinationEntity(47U);
    msg.op_mode = 114U;
    msg.error_count = 158U;
    msg.error_ents.assign("VNTHLZIMNSUFCCQDSYJEHIHLBBPEFUAAIVDEGLBDM");
    msg.maneuver_type = 34315U;
    msg.maneuver_stime = 0.7711706828288335;
    msg.maneuver_eta = 13540U;
    msg.control_loops = 256273721U;
    msg.flags = 23U;
    msg.last_error.assign("JUAQCRCHVHSNOUSJYBZUPBJAAUYMMFQYACTNKKVJQQZZPDRCYFUWGTOBNWUSVKOISWGNRTARTAEXSV");
    msg.last_error_time = 0.17842993704982546;

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
    msg.setTimeStamp(0.7644124303466587);
    msg.setSource(51464U);
    msg.setSourceEntity(125U);
    msg.setDestination(14091U);
    msg.setDestinationEntity(91U);
    msg.op_mode = 22U;
    msg.error_count = 225U;
    msg.error_ents.assign("WEONZHOOPTQKYRZUZXNVTIIRHBSSDCLAPTHSVHJNZOKGQFYQFCMTLWQMABXMXIEUGKZDBRBFBXAUYICYUVZVSWNJFXYKSKPGCSWRWCYVLVATRTDJHCXEGXCMIOAASEBDPLLMTDFOYSOWIOXLDFNEINZIPNYBHDQLEKH");
    msg.maneuver_type = 36415U;
    msg.maneuver_stime = 0.3412962437532213;
    msg.maneuver_eta = 48161U;
    msg.control_loops = 198294913U;
    msg.flags = 139U;
    msg.last_error.assign("UEPFYBIKTPSIOUCAMRQHPWILVJHGWVXZJMZJKBXABNEERYRJMDPQZFXB");
    msg.last_error_time = 0.831654562643493;

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
    msg.setTimeStamp(0.8451874488123384);
    msg.setSource(12797U);
    msg.setSourceEntity(233U);
    msg.setDestination(18484U);
    msg.setDestinationEntity(56U);
    msg.op_mode = 242U;
    msg.error_count = 101U;
    msg.error_ents.assign("MHITIKXAAHIPSTFCRNKLABNAYAANXSXFKHXNUETOYKDWSBOYYLZWGUAPFVGLQZILTIQGQLLFPGMIUWDESUWDLUGFCABDHQBMMMSFIFNJEENPBCXFRQWVEBQHMBJUAICJJJMYEXLTKJCYEFEHYGOMTVCMETSJPRNBNDMOONKRCWSZJBRDPDQKPFCDORTVRZJHDWEVQOQSK");
    msg.maneuver_type = 560U;
    msg.maneuver_stime = 0.9764627595663802;
    msg.maneuver_eta = 16071U;
    msg.control_loops = 1485844065U;
    msg.flags = 94U;
    msg.last_error.assign("SVLSHPBGGHLYIFQYKAIVHAQCLJVFYOHFGORYLBRAWCKDHENNKKJZWRVUFOXXEJEYBKIHSLVUWBKTMXXJKNRSMFZXZNCAQCAGMQLTLOGRWNQNSGO");
    msg.last_error_time = 0.9135902583552898;

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
    msg.setTimeStamp(0.24234098865256182);
    msg.setSource(52290U);
    msg.setSourceEntity(128U);
    msg.setDestination(23058U);
    msg.setDestinationEntity(30U);
    msg.type = 196U;
    msg.request_id = 6880U;
    msg.command = 28U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 22741U;
    tmp_msg_0.lat = 0.332324987515659;
    tmp_msg_0.lon = 0.9883331964070411;
    tmp_msg_0.z = 0.8662742113018974;
    tmp_msg_0.z_units = 14U;
    tmp_msg_0.pitch = 0.9930232589806889;
    tmp_msg_0.amplitude = 0.27019202624364624;
    tmp_msg_0.duration = 28004U;
    tmp_msg_0.speed = 0.006216392840375118;
    tmp_msg_0.speed_units = 165U;
    tmp_msg_0.radius = 0.08680133111879162;
    tmp_msg_0.direction = 94U;
    tmp_msg_0.custom.assign("JTOBTQFRONVZVTYZWLSMUFZGHKLYDXHOZAJWBULVQBUHCVJHQKGVHJZRTUSTDIUKFJTMDEIEIDEPOCRKJWVDNSKXNINKMQEJPBLLZPIMWARBJNUCFAAXRVLFOSYVRYYCZBWEWYBRCGHKIEQQHGFYXSBPPLOMUMMHDUGKMEWZAVUZY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62868U;
    msg.info.assign("XCTPSQRQOMKKXNYNXUDNWTAXGNYMFVCMIWTMVGEERVCVYGLDBQAWALPGOCEAPZBFNHQZHDHKZULOCFYXOJVJWL");

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
    msg.setTimeStamp(0.3326443198984539);
    msg.setSource(36159U);
    msg.setSourceEntity(215U);
    msg.setDestination(35089U);
    msg.setDestinationEntity(63U);
    msg.type = 93U;
    msg.request_id = 30110U;
    msg.command = 171U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 32512U;
    tmp_msg_0.name.assign("QUBWXMXOXMXYNMUYUAIQIMBFGLHBNAABARCYXMGTUHQKRCOVVMVQKRAOOVRVOZYKNJKZOPZUJZJQGAELSZFEFSMLUPNHDFYCDIVAJLRIGKHENEHQYIJCBNGTBFCDSTKZFVXWNSMYELQJKISWSSHCKVWECEBGZXISALTHLTCIHZITDWGUPRYYOITGTKLJTQDHRKOGSBLDWXHWVURWOSTAEVALJD");
    tmp_msg_0.custom.assign("FBKXGUSEEIZBHTRDTLXILQMYIBNOADCELHTAJZQSATWZCAJTCPRMGFNOMBVORMJWOFZUPWSKNWMYSEVUNAMRLEYVFLDVOLOQDGJMYVXCLZHEEJUHWPZNWZQXCGFPPYZSYUWEOMSFKMPSXRYCCFUDIBKQUOKELNYNQXGIXTKFAHGTHCRJORWPUXNDAVIDGIFHSVKBDBZYHRCCVGRRDEL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6385U;
    msg.info.assign("NCSGWMTZUWEWPWQFJMSYIELGVDUCDRVFUWCEZQULUPDQTJIZPDYYMPXUAHDDDNUBYLRYSLPPSZBEVFKVCOYVXJFBTKGFTPWXXJJTMQUAXNHXGKOHHXGVRZAPJRKOSTHCQC");

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
    msg.setTimeStamp(0.18719185016107676);
    msg.setSource(48253U);
    msg.setSourceEntity(44U);
    msg.setDestination(31307U);
    msg.setDestinationEntity(134U);
    msg.type = 153U;
    msg.request_id = 34564U;
    msg.command = 92U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 47369U;
    tmp_msg_0.name.assign("PCJXYHSCRFCKRGAUSMRDYJZERFXDAMLGYDTOKBOKEHFSCJWTZVTXPESCTWYIHIZBNZECPBFLWQAGVZRIUIHIAUSQSZYNUNIKMJBUSEGOIJLCKODEQANHGHXMRUXFOJTKPXDBMUMLQLCBKNNOSOSXDEQJGNYYPVOZEWYZPUHNMTVAGLCNWMHBFAWNBLEIGWTFRIK");
    tmp_msg_0.custom.assign("ZTXMSOBQJEDTSFEMVYSIROLYUYYYLWKWBDEQLMLPOEHMRPXSVAGBOEUIOZUQFQKKIIVPMDNQQWOUNXRJHBLJNRQDPCCCFA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26955U;
    msg.info.assign("ZERIFHLMKNHHLYOLSRYHLQPMHEORIRBJVNBSJOVSQNQRXFIIQFDZTZQXOSPXMHASHUWCXPSFMMJXSGYNCYTDLKXDCXCTBCRKEDUOCTWEUQAEETMWDENAOCFCQXKGWPQPDIOBYYEYFBKGGJINWKADGAWUJRKNIHILMFVHTNUBWJTVTDDWWZSAMGZYLIEBAAIBNPNKKXUVAUTRHAJOLZUPFMLQVPCWTOCYBVUFSDJMZXPPVBOK");

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
    msg.setTimeStamp(0.5842032076309698);
    msg.setSource(15984U);
    msg.setSourceEntity(29U);
    msg.setDestination(28142U);
    msg.setDestinationEntity(194U);
    msg.command = 168U;
    msg.entities.assign("YGDZYFGHOMWJNKBLAVPTQIYODSTRHFITPJUOKORSWSHPXGGMEJVLJGEGQWBACRDDSIGLZNNFMUDXWFVYCZHXKUNYIYESQTNEQBKIJOYCQXMBZWLRDCIACQGLYRPRLPWNNFRFOLTSDYSILBERU");

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
    msg.setTimeStamp(0.27862355666627947);
    msg.setSource(27757U);
    msg.setSourceEntity(158U);
    msg.setDestination(8995U);
    msg.setDestinationEntity(230U);
    msg.command = 171U;
    msg.entities.assign("SQCJTTIXYFFZQAUKOXNYBMESIAMIHVYKJZKYGWUEWRGQKNVORNIMQVGZMQSWAPQLPOYTCDIVPFVSZGRXZZZYHUHBRFVNZTLAFPOWKHELZPHDZQMFCBLFLMBABEDKBPHUDIDKYXNRWWSGGANYMKTFTWXJXIVO");

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
    msg.setTimeStamp(0.762640305395028);
    msg.setSource(62839U);
    msg.setSourceEntity(176U);
    msg.setDestination(12410U);
    msg.setDestinationEntity(37U);
    msg.command = 10U;
    msg.entities.assign("XKALLUXOMEKURZBMVHJPKBDJFPKRVDBSINLWWNVBYB");

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
    msg.setTimeStamp(0.18835280773555152);
    msg.setSource(64187U);
    msg.setSourceEntity(183U);
    msg.setDestination(28221U);
    msg.setDestinationEntity(78U);
    msg.mcount = 188U;
    msg.mnames.assign("XTKVSZWHCVYUTZEQYERUXUJQRILPFMXQFNAGIVNMDUOMETBMBAUVYFDALNWOXYUWRPIHKSLTOQUNADVKYFMBAIRNZDEJPHLOGZQMEKTBJYPRQODIOULKHBPCZLWFBAHKWGMTVGNNXCDEJJGQHGDPPISDKKYIFPYZQRPJTWCFALWIBFXSVZHIXCYBTAWQFMDSLUCTJGUOKVXEWRMWBJLVC");
    msg.ecount = 15U;
    msg.enames.assign("AWATUZGEGVDAFALOGPUKMLSAMMLYPWDTLEFSGMFFMYVQLDUHHSCLZ");
    msg.ccount = 237U;
    msg.cnames.assign("CGVUAACQJVQSLDYIMYQLMXGSMZYXAPWDQZIDVMKAOJBLUJBWQYQVESIFPITOTOHNGCGXWCKSYMRPUFKJCPWEGHSHNKVDCFTYZYPUHIVBXDQOBJMITEPZFSCHUWLONFUQBBRHLTDEOFTOFPRXKWERGKXWKUIMONHUYTJLJAAKISMBVFZNRTTDRCRXGFASMLQWNBXINEBAIAHZKLDUKJYTLRXOEDNVDJGCOGUZNGRPNFSWCYH");
    msg.last_error.assign("HHIVEYAJEXCRNFMNNWXPPJYSQFJFYOOWLCZSGCYWKMNMHFZIIFDNCUQDJHUWMUIWGWABDOUYZFJJDONCPKWVRTKLCOVAGLMVIFSGLIBHHRVGASZNTSESORIEGVAXYRGUTWZTGIOEYHJKLJBSYEEC");
    msg.last_error_time = 0.0681779170340886;

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
    msg.setTimeStamp(0.8274842108407832);
    msg.setSource(43802U);
    msg.setSourceEntity(215U);
    msg.setDestination(46296U);
    msg.setDestinationEntity(193U);
    msg.mcount = 224U;
    msg.mnames.assign("HKWVKNFPSMBLPGSZNRSICSMKHXPJVHYTFKQZVZBUHDPSRAYENIWEISIMTVGHIOOFABTQJIUYUURFSSAQBNZMHYMOLGXCDTASITQCDMWNFUHERNZPJQMOQEZYTCQJFBMWLRPZNVRDUNAZALYZVIBEZDWKAYKFBYCRINFGUGOXWLGJMOEWPFCJUXKQLVGIDCWTPXAJVEXRXHXONOBLC");
    msg.ecount = 84U;
    msg.enames.assign("KIGMNXGMYSGFVJDIAMXOACDJJJDFHLQUVODVINSXHHSUERIHNBVVKXTWBNUNUGQHFLBPTSZZCZEIKBALFEDOWRSKZYYTCBNUDFCWOYSZGMVEHEFVNOSIZHPDWJVVQAKOPDTOPJCAMQAZFHRECXNEYXYAXKXFOBPGGKAUYZWSMZTPLRIGBCMDAYMWRXOWTTKYBJXJ");
    msg.ccount = 207U;
    msg.cnames.assign("AAIVDQDXDIJDXIMYGTUJZMFNATELBHNGWWVADYAJGPNSMZYJWPSFJFEOWYOWUBDOUKAUYTXGXCKDIKLZROTQYVV");
    msg.last_error.assign("FAHWIEXZNKLGXHUFOSLGWEYYXXEDZBPIQJVKDQMOLLPFCSALSMUMZTVDAIMCWAJATWPVMVHZEQTONQNOAGBZVTJNAYWCRPGRTWDPFLWRYRJCESMJNWRUOQKMOUGKWCYBRFOSNBZKRSFGOPQQBFHXBGUTUTNNTYHCDMQCSDVIXJXKRPZIFNVICZBCMEZDSTHEVBRJLDYSYIHTAGJDAFHBDUUPEUOGLPUXKVASKLP");
    msg.last_error_time = 0.3949458433799181;

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
    msg.setTimeStamp(0.7732957824530041);
    msg.setSource(6050U);
    msg.setSourceEntity(135U);
    msg.setDestination(641U);
    msg.setDestinationEntity(40U);
    msg.mcount = 126U;
    msg.mnames.assign("ZUGDFWFYSPZCGRFHBIOIBQJPINKJXPJW");
    msg.ecount = 166U;
    msg.enames.assign("PKTQNZXGIBHWOFRXMCBHIONCNEURJZSAIXNQWCQOFWMDJTWUSTVQIRSLAJMNWQZAKBOCUACJQYNEFTPVBCIDKERXRLUMXBUJOYFEKKBESUOVGYTYUZXODLZJPEDRDMAIXNJZDFGVYQKKVIYUTYBCGTGTCNGGSYMDVSKLLMFTDLSUNFLPMVEYKMDAAHDPPGTYIWEQLBNPWXCSOJZMUJEOBFIZQJRAWAPLKGAOIWGWFFQCXVHHSLZHVHPHRVHX");
    msg.ccount = 54U;
    msg.cnames.assign("UBFPOOQFLORWAMCDLLWWUVKPIWSFKXUHGHYZFBSJDBGDDYRCXIVHUEYRKWQQDXNGLZECQLJPOTGFSJSRPXQLZZAJ");
    msg.last_error.assign("PPKEJCTYFKPIXEGNTNXEBZLHSLQOABONNVNEOPLTAEKIRHFVSNDOCYTXJNWLRTDQFMUDXXIHCLWZBYZGWGFIXSFDA");
    msg.last_error_time = 0.7687354413566191;

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
    msg.setTimeStamp(0.6110276014741195);
    msg.setSource(49778U);
    msg.setSourceEntity(60U);
    msg.setDestination(54430U);
    msg.setDestinationEntity(125U);
    msg.mask = 199U;
    msg.max_depth = 0.9906660071587744;
    msg.min_altitude = 0.7084351143861343;
    msg.max_altitude = 0.4910227504927861;
    msg.min_speed = 0.6224055016235228;
    msg.max_speed = 0.14524357985665093;
    msg.max_vrate = 0.9072776973216091;
    msg.lat = 0.21262073639711598;
    msg.lon = 0.7992782742654968;
    msg.orientation = 0.28938978832379225;
    msg.width = 0.9477007109380619;
    msg.length = 0.729614714482169;

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
    msg.setTimeStamp(0.285954362725231);
    msg.setSource(13678U);
    msg.setSourceEntity(4U);
    msg.setDestination(54300U);
    msg.setDestinationEntity(113U);
    msg.mask = 233U;
    msg.max_depth = 0.3358992150755501;
    msg.min_altitude = 0.040663293380706955;
    msg.max_altitude = 0.7961681551391729;
    msg.min_speed = 0.5854026517151731;
    msg.max_speed = 0.673749026607097;
    msg.max_vrate = 0.06465899701231592;
    msg.lat = 0.4516106669865645;
    msg.lon = 0.7600698574850746;
    msg.orientation = 0.14236819817959312;
    msg.width = 0.5822886955525692;
    msg.length = 0.6753713235625224;

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
    msg.setTimeStamp(0.5758886616093308);
    msg.setSource(30482U);
    msg.setSourceEntity(174U);
    msg.setDestination(11552U);
    msg.setDestinationEntity(92U);
    msg.mask = 29U;
    msg.max_depth = 0.021418265581017115;
    msg.min_altitude = 0.0792544443221902;
    msg.max_altitude = 0.29372855101871664;
    msg.min_speed = 0.2606661112823162;
    msg.max_speed = 0.2278861505417954;
    msg.max_vrate = 0.7373589698868316;
    msg.lat = 0.6948642548683671;
    msg.lon = 0.9392398021548425;
    msg.orientation = 0.37861964901250134;
    msg.width = 0.9012149840442544;
    msg.length = 0.9575648781431781;

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
    msg.setTimeStamp(0.7450879808074147);
    msg.setSource(33394U);
    msg.setSourceEntity(142U);
    msg.setDestination(36295U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.08369076036918022);
    msg.setSource(64387U);
    msg.setSourceEntity(179U);
    msg.setDestination(8181U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.501954797150452);
    msg.setSource(47297U);
    msg.setSourceEntity(153U);
    msg.setDestination(27561U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.29517855945055527);
    msg.setSource(26733U);
    msg.setSourceEntity(157U);
    msg.setDestination(38452U);
    msg.setDestinationEntity(165U);
    msg.duration = 25236U;

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
    msg.setTimeStamp(0.7345881822020279);
    msg.setSource(17808U);
    msg.setSourceEntity(21U);
    msg.setDestination(62702U);
    msg.setDestinationEntity(123U);
    msg.duration = 31737U;

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
    msg.setTimeStamp(0.9349551782996043);
    msg.setSource(1482U);
    msg.setSourceEntity(206U);
    msg.setDestination(55312U);
    msg.setDestinationEntity(98U);
    msg.duration = 13543U;

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
    msg.setTimeStamp(0.12671385862470153);
    msg.setSource(64036U);
    msg.setSourceEntity(31U);
    msg.setDestination(51226U);
    msg.setDestinationEntity(16U);
    msg.enable = 89U;
    msg.mask = 129932828U;

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
    msg.setTimeStamp(0.3590013627399229);
    msg.setSource(37682U);
    msg.setSourceEntity(225U);
    msg.setDestination(12987U);
    msg.setDestinationEntity(107U);
    msg.enable = 239U;
    msg.mask = 1862035631U;

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
    msg.setTimeStamp(0.7786874578155092);
    msg.setSource(48681U);
    msg.setSourceEntity(24U);
    msg.setDestination(10906U);
    msg.setDestinationEntity(188U);
    msg.enable = 215U;
    msg.mask = 3971622474U;

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
    msg.setTimeStamp(0.4986264332738365);
    msg.setSource(59137U);
    msg.setSourceEntity(179U);
    msg.setDestination(12336U);
    msg.setDestinationEntity(122U);
    msg.medium = 226U;

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
    msg.setTimeStamp(0.14714493987983546);
    msg.setSource(63772U);
    msg.setSourceEntity(39U);
    msg.setDestination(60296U);
    msg.setDestinationEntity(217U);
    msg.medium = 71U;

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
    msg.setTimeStamp(0.725337666088334);
    msg.setSource(51432U);
    msg.setSourceEntity(179U);
    msg.setDestination(62809U);
    msg.setDestinationEntity(201U);
    msg.medium = 235U;

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
    msg.setTimeStamp(0.8307494516433259);
    msg.setSource(51771U);
    msg.setSourceEntity(177U);
    msg.setDestination(9764U);
    msg.setDestinationEntity(19U);
    msg.value = 0.6249069298822918;
    msg.type = 37U;

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
    msg.setTimeStamp(0.49130837394227667);
    msg.setSource(39075U);
    msg.setSourceEntity(191U);
    msg.setDestination(55042U);
    msg.setDestinationEntity(181U);
    msg.value = 0.03515202378743931;
    msg.type = 176U;

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
    msg.setTimeStamp(0.06252190762086274);
    msg.setSource(938U);
    msg.setSourceEntity(28U);
    msg.setDestination(55346U);
    msg.setDestinationEntity(204U);
    msg.value = 0.5154923935341458;
    msg.type = 25U;

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
    msg.setTimeStamp(0.6220329410638592);
    msg.setSource(3797U);
    msg.setSourceEntity(112U);
    msg.setDestination(19456U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.8726281596238982);
    msg.setSource(55468U);
    msg.setSourceEntity(128U);
    msg.setDestination(4330U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.9555774306022765);
    msg.setSource(11689U);
    msg.setSourceEntity(62U);
    msg.setDestination(28334U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.7944665288559841);
    msg.setSource(40382U);
    msg.setSourceEntity(249U);
    msg.setDestination(50504U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("AZVAORPKKMTRBZNRQDXQRXWWYZIASOGODBQQHLSGIVROECJVRDWEYBTUKYDOSYPUGJZAAVTHXEVPUFQFJXMJKE");
    msg.description.assign("VFAVQCBRKRVYYAPPYULDNJLSYPRZXJPLY");
    msg.vnamespace.assign("DOODOUFQRCYDBFMJPRPCSAJPCETEVGOMIWJ");
    msg.start_man_id.assign("PSWHHWUOFWBFJCWMCGDPZVATJVNFVKQZONNKYYMCODBFSOAOAESUPBHSNMKZNJTHFVFKQOAIKQMXIDNIMCXYBTLRHTXNHGSUXOIAEDQTPUEYXLILBEHDVRTYSCBEMCEXDWZURKIZIOYVPRWUW");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PZFXDADBUOUAAVIERQTTAEWPGLLOVPIMQRAWRGMVZJHMWIBBBVXHBLOXMRUSOGEJPPNPHFDCXMTEFPDMNXYNCQZUUJPAMKBSGUAYKRCVNKJZQLFZJKRZGRXMNAMRQZBIQTFHECRRYOODQUCTYJ");
    tmp_msg_0.dest_man.assign("XNITJBQFKZF");
    tmp_msg_0.conditions.assign("AHJOMWSUNCZIJXIFPSWZVVBYFRVKOYCWTKSLRTEUOVTUYRFQYHBIRHSYQTNAXKCXFVPEQTEIVFSGWYGYGETGUWWFZMYCQJRKHOWVUCKFLZOHCMMRYEBRZLZDQGCNAVGDDQOADJXZLBNHNEPOBZFCKNMXMPTIMOKDYCHNCDAPFAHPIRIQUDAXOGVWRWMXMXULTJSPBLAJBNLWTUNGITJSBPLSBXILFILMZBKDH");
    msg.transitions.push_back(tmp_msg_0);
    IMC::DesiredHeadingRate tmp_msg_1;
    tmp_msg_1.value = 0.5052705350767004;
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
    msg.setTimeStamp(0.48563983177536085);
    msg.setSource(26755U);
    msg.setSourceEntity(223U);
    msg.setDestination(44430U);
    msg.setDestinationEntity(100U);
    msg.plan_id.assign("OJEGDGWDULRMFCZBZMMISBXJSHGOIXQPYZJRIXYJFBHEUCFFVZMVHIVNOBDQNEOLYJQKTYFPISSNFDZQCGQRPJOWTFXPKWWEUBYNGKGCU");
    msg.description.assign("TLQVSYSZEZELAIEPCSQBJXZMECYHDKIDIQUWEDJBUPAPCJFEUWQWILMUNPVFKZGXOIGIBAGTLMBLXKFXKHLTOGOQIHUKPYZVWXRJQGGREBRPDQHIFNLAFWPEJGWSRAVWXMFYDCAGSTNXJRCTTZRRNUQNVKSXSVCDWPHTNHBASMZSGMBYKLUFQAJDNO");
    msg.vnamespace.assign("LMBYSWICVAMTVSXXLYOQGJEQJGOPQYNPWDKAWMFXOAHKZHWNOXJYKWEZJSBTFAVOJOJQUMFDQUTGYCYYIHFKQQQDRRSGBSKZFNTNSGRZDURCEOWCCWSNZKXDYKEPUPXDZVYAXNAJPVMSTFBOUDIBCGGAGBKBUJCWRHSQTNNJIBHPZNRMIHDCTXHPLAUMOFTGRLZVXFCAIQZURBASMKMVFLDNEBELITGJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DDRAMQFFIN");
    tmp_msg_0.value.assign("PXDHSTBCNVGZMQMPNONROICZHEUVAXPZICPIXLVROSMJENUBZFMSPOYDJQKPBNWBQKRUEFTRSEBKMKKZXICWHBADMUMOAJRPPYYUQGTLKSRDWLDIWGXFVEDGZLKNCVTKRGAHZGSLVOBLXTQDNDPFVZBRJKDFTJJYOMUICNCCEVFMUYBVLNUXBEUYUZYLWSJYDOACVHIFFFPTTNQIJSWAYWIYGAQJXOXHG");
    tmp_msg_0.type = 42U;
    tmp_msg_0.access = 205U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DARQREDFISYPXHTEBRTAFNBGASUYMOACNQYLMSYPCDHPIGKHYMRUKAUVVKCJJNHIIOYOYUGMWPBUNBKNLFYDQEQYXQEROWTTGPXSCABWCGUHMKPENAODBLVEPMQVUSXKMVZFRVQVGJDSPLCZKCRTOJDNVGGTGQMGPFZCJOICXSWTBW");
    IMC::GetOperationalLimits tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredPitch tmp_msg_2;
    tmp_msg_2.value = 0.0786076020624018;
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
    msg.setTimeStamp(0.33983647096514535);
    msg.setSource(54610U);
    msg.setSourceEntity(108U);
    msg.setDestination(1577U);
    msg.setDestinationEntity(226U);
    msg.plan_id.assign("ICIWVGLVYJPQMRQUUTWMQFMAZORVRPGPBBPRUMBYCDTGDYZOSCCNKTTQWDZJNCZNTSLJHAMZYSMTIWUBPQUSZADXALXFCHEFLRYGVAVNJHDYXYLZUZSCHJGGORONWOSSFNBLXIXFCLBOKKAIJIJZDKDQQXRFHICVOYWBUFGKEVEGDQLYHOKZTUNPEMGDELRVEMLTNBVWQPVWMOEFRUSHXQWJEKHFBOJKDIC");
    msg.description.assign("FWZVKUQTXLWQAHGKGQRFYZBOSRAXXGRYKEJOBWNPSCBWSRJPHBSXQKAUUOPGYOWFRKOPYLAJOKQQLMJDUWHXJZCSMEBRNDVNAYOWPEVRMYJIGUWKEFFCMGAFVNVCKYTPMNHBILULPEDRMHZCKMEJDZHHIOCMIYWPALENVLQVTIMUZYMHHIJJISISDECUPZXDCSVNEBTPQKDFCRNFOATVXHID");
    msg.vnamespace.assign("VEFVRGHTAUQFLJBSMLLOCZNDXUADOGBXCPIPROZMGGPYUOBSMJQYJLHOVYWFDCQUVYFBOOZGJDELMTNNJHSTNNWDQYJKKHUVQELAHPBTRILWWPNITEDNWKJQMSXQRIFEMCSBVGOATZWHQTIYKFZXRR");
    msg.start_man_id.assign("YDOJXZJIZZRYDNYSTHWCXQONYXITOOASJFLDMYJFCZUWJVXWUQOKLPDENNXRCRDUCOTBHVLULVXVIGXRAEJFWSHNJFIWOEWWYMJN");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JOKQHYCVTXIHFNPYGSVLQDEWEHGRGTUNBIUWYIRCIOPEBGNLMIFMNDSCJALZQBKPAEGCUXOUFNNFZAKWWOXLCJPJARHFNEHUQROSQWLBWAHFUYWVNIRPVGXYVXIBQPMWRTDOEBRLFGYKMUMFSJKBDTVDOJYOKTATILWZDHQXBEGUQGLCKPOMEEZDVZMUIAXCZSSZJCBMVPKZHQSATFTUQXRWAZDZIJVXOCLSCMXGF");
    IMC::CustomManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 55402U;
    tmp_tmp_msg_0_0.name.assign("XNUAUABLJPMNCLRKRLYBAGHRGUJKUDPWQLVZPBGFM");
    tmp_tmp_msg_0_0.custom.assign("SOINAEQFZJXXPHWQOLJGQXHFXGFAUSDKTDDHRJUGWSZBVVHKHIAMEOKVOJBSBGSHLAEZFBKMBDAQWYPZSKNJEYULOYGYULLKXNPIIIGMKKBMUNYPCFKERDCCFBYYSDHLPTFMWEQ");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SWKGMQONRAVYMJBXSQJHWOXMSUUKTUOBVSNCZKYRFBMTGONHRKCAVCYSCFTQIHTIXHCYIDWPJMVZQKNYPFSXTNNUFSOTGQAM");
    tmp_msg_1.dest_man.assign("WMXOYWTRGMGQVGBOZSELSTSQAKGOPUPWIRLAPTWSDOYQTJIVVWKBTRLRXZDQNKJDWYAWHXTBPFJRTVCZGJLGBTIONKXGYTMCMDFHSCPZUOJBDFXZAEGECZIJIMJVSYJDUEICPYLVRCEOFCQANUILMSUMAYONBEURNHOWNDBGFYPMXNKRX");
    tmp_msg_1.conditions.assign("NYVFFSTEEJOUMFQZHBBJOMAFACQMRIJZGWIGXCFWEQTNSIARNISRMGLFURWBVUMZESVNDXTVWXUEPUHJBUYOJUDQUAOXMQJLLCCOKPXEDYWVRQZKLBKZCIUKTGMOQANHOOHYKAGRCNMOLPBSPGBDLNGZHTREVITILHSPREXVLSMHEHEQUWKKVAJDCDPFTCICQZJXAHILZYNKFBSLTNDPWYDWFSNSABYBXWDRHYPGMZC");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Sms tmp_msg_2;
    tmp_msg_2.number.assign("YRGLCEQSIKYUYPLEWXMEKWMOMQCMHLOJLAQQWLVFXZRXJMQ");
    tmp_msg_2.timeout = 26885U;
    tmp_msg_2.contents.assign("XCXYNHVAZSHNQTIZKBFWNLQWNNCPAMVKEKJHAKYJCDHAEGKXPBBOYWHVLFHRDNNTJFMGLHIVWWUVIOBOYMJFMOQIGHFZBQCAOSSLGXCRAFQLQIXZLTUOQGSQYSPIPRBRCERDTLSTODXXVLEWTFTREXKUKSVSNEIXJPWZCQWCNK");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::FollowSystem tmp_msg_3;
    tmp_msg_3.system = 37417U;
    tmp_msg_3.duration = 45260U;
    tmp_msg_3.speed = 0.8903613432118737;
    tmp_msg_3.speed_units = 27U;
    tmp_msg_3.x = 0.4052850815144775;
    tmp_msg_3.y = 0.3971530747606119;
    tmp_msg_3.z = 0.20382275273447936;
    tmp_msg_3.z_units = 203U;
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
    msg.setTimeStamp(0.4208150297538834);
    msg.setSource(2163U);
    msg.setSourceEntity(233U);
    msg.setDestination(27755U);
    msg.setDestinationEntity(195U);
    msg.maneuver_id.assign("CWIVECEDTZYTWCPTUMYPCIUPGXJRCQEAGHMTGFASBKTLRNXSFRDERQWSKAOHJMMVMMGNX");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 54793U;
    tmp_msg_0.control_ent = 249U;
    tmp_msg_0.timeout = 0.1936615873389489;
    tmp_msg_0.loiter_radius = 0.5646842142093682;
    tmp_msg_0.altitude_interval = 0.5944107183570337;
    msg.data.set(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 14814U;
    tmp_msg_1.off_x = 0.8483863015616911;
    tmp_msg_1.off_y = 0.5995880057725188;
    tmp_msg_1.off_z = 0.23606034126201425;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredPath tmp_msg_2;
    tmp_msg_2.start_lat = 0.6578153137558392;
    tmp_msg_2.start_lon = 0.9286897211558702;
    tmp_msg_2.start_z = 0.1155435922687924;
    tmp_msg_2.start_z_units = 81U;
    tmp_msg_2.end_lat = 0.7206869970778418;
    tmp_msg_2.end_lon = 0.13149796990109452;
    tmp_msg_2.end_z = 0.05540626549554928;
    tmp_msg_2.end_z_units = 45U;
    tmp_msg_2.speed = 0.2546412642338156;
    tmp_msg_2.speed_units = 48U;
    tmp_msg_2.lradius = 0.11012048610089831;
    tmp_msg_2.flags = 58U;
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
    msg.setTimeStamp(0.5272406393766362);
    msg.setSource(35047U);
    msg.setSourceEntity(13U);
    msg.setDestination(27303U);
    msg.setDestinationEntity(60U);
    msg.maneuver_id.assign("AKIGQAHWWEOFJDGDANEFKKCHPUEFDYNZUMRVNZCHHJMAYAXJTISBZCHQCCZLVOYUVQEWXZIUKSKARXSFQBMVQZPQURKTLEWUWIBZYTZTDFKXGRBJJGXSUMDDMGNOTSAJLBHPERSGNVXUXYWVRY");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 18677U;
    tmp_msg_0.lat = 0.01620521404453612;
    tmp_msg_0.lon = 0.1567794255882624;
    tmp_msg_0.z = 0.9711164257988529;
    tmp_msg_0.z_units = 168U;
    tmp_msg_0.speed = 0.2774904017662454;
    tmp_msg_0.speed_units = 84U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8918890629884695;
    tmp_tmp_msg_0_0.y = 0.054683079955149316;
    tmp_tmp_msg_0_0.z = 0.5740115217233969;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("AFEGYONYDQIOFLTMTAMXEPKLVTEKHTIPRXNWPWKKGJHPUBQUUWTRDNWIHBISMNAOMYHXMITDKRTSQSHCPLDGSKXIZDVOMWMYIZZRERBBRQQQBSQZAGXLFMKJMTOUQQYJCFYGJIEADHAPFSDJUYECNAVFBRFPNPVGXCBKTOUBWJNOWPEMSWL");
    msg.data.set(tmp_msg_0);
    IMC::ClockControl tmp_msg_1;
    tmp_msg_1.op = 70U;
    tmp_msg_1.clock = 0.4325775528270026;
    tmp_msg_1.tz = 7;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Elevator tmp_msg_2;
    tmp_msg_2.timeout = 43655U;
    tmp_msg_2.flags = 85U;
    tmp_msg_2.lat = 0.6901469891645932;
    tmp_msg_2.lon = 0.9277734176730941;
    tmp_msg_2.start_z = 0.9061164121419343;
    tmp_msg_2.start_z_units = 2U;
    tmp_msg_2.end_z = 0.6044266455260542;
    tmp_msg_2.end_z_units = 83U;
    tmp_msg_2.radius = 0.6371389764575671;
    tmp_msg_2.speed = 0.6072231206377516;
    tmp_msg_2.speed_units = 251U;
    tmp_msg_2.custom.assign("UHXLBPVAXSGNSYPZDGSAQ");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.5713535916665826);
    msg.setSource(25497U);
    msg.setSourceEntity(114U);
    msg.setDestination(7868U);
    msg.setDestinationEntity(85U);
    msg.maneuver_id.assign("LQIBJTXXFRJHEHRN");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.6454724097645835;
    tmp_msg_0.lon = 0.7623591048359486;
    tmp_msg_0.z = 0.21716570907564547;
    tmp_msg_0.z_units = 37U;
    tmp_msg_0.speed = 0.792103460290789;
    tmp_msg_0.speed_units = 207U;
    tmp_msg_0.custom.assign("QGIDFXZONETDRJNVQATOLHBRHCVMWSVLYMZNAZPHKNJPEKTPQLIRMHRUYXFCLOAVZLIFCWTMWXPCQGGVEUMFUCIQGJLNDOKLEGHEBZOPNWXBOOKSNJXZRMYZPASCRDOYCECYKVRRSBGBTKFFKIUSKPMULADVPFWUYVEIHMQKD");
    msg.data.set(tmp_msg_0);
    IMC::CacheControl tmp_msg_1;
    tmp_msg_1.op = 40U;
    tmp_msg_1.snapshot.assign("TFSAJSTEKOSESLHYKRMUTDYYHMNMQEVBRXZATNSMGXMBOLXZIIJZSJFEHOWCIWDLNEENYBXVFBXCWLCLWQ");
    IMC::Goto tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 13718U;
    tmp_tmp_msg_1_0.lat = 0.5829171069806015;
    tmp_tmp_msg_1_0.lon = 0.2716419000529845;
    tmp_tmp_msg_1_0.z = 0.795038680090216;
    tmp_tmp_msg_1_0.z_units = 196U;
    tmp_tmp_msg_1_0.speed = 0.8431484066498613;
    tmp_tmp_msg_1_0.speed_units = 131U;
    tmp_tmp_msg_1_0.roll = 0.45217406055314147;
    tmp_tmp_msg_1_0.pitch = 0.9833300827537991;
    tmp_tmp_msg_1_0.yaw = 0.9577570110634953;
    tmp_tmp_msg_1_0.custom.assign("IEXWPYFJROTKLPKOCULLXVBTFEYAORFWBMDUYJUQQSHIAUEAENIKOXPLZRBPVHDWOQJNDSOJVWZKNSZLSDBHGNSXNQURL");
    tmp_msg_1.message.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.825848409738697);
    msg.setSource(3852U);
    msg.setSourceEntity(104U);
    msg.setDestination(10073U);
    msg.setDestinationEntity(87U);
    msg.source_man.assign("DKTAECPYRHXPJIQWXXKPF");
    msg.dest_man.assign("MCJGAOYHMDONCWIAPVVMLEXVZTRUPLCQZETLFUAGRXFJUVEHZYNEASAQXHJOXWSVEGDCKCFRLPXOBMXHMMHBVTNGIOPWLGDQBGPBGCSJKBIDJWFAYFSQAIKBACOTKJJTNEWURHJBLTZUGCRNWKRRMEOBHYGDURXJS");
    msg.conditions.assign("OWNCHUQGCQSKRNBYQG");
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.969788780062673;
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
    msg.setTimeStamp(0.900201785400162);
    msg.setSource(43600U);
    msg.setSourceEntity(28U);
    msg.setDestination(15293U);
    msg.setDestinationEntity(41U);
    msg.source_man.assign("PBMVKYPMFWCWDKBICPDBAEIOWZOOVFUWKVNVXHMLWMGYRXJGQAJCYEUABIESDUYWOJRQRTBUXLLJHDTGHSUQDJNONBCXGIMATEDHJCRQAIEOWLQIPKHPUBCPXUKZFJMJDTNVWTICRNPSVNUIEIERVGYMJZGTCYAMFSGHBNCX");
    msg.dest_man.assign("CEOQVXKWLWSTSNNDYQPNIPWUCIKBLZWZFISUZHXOPDDBCHRREMZYIJEFCJGVBIJXJWHGTOPRAQZCIKKXLQVANSUQXMBGKRHRKMBYSSUGDLDPZYMYKAOJLEHSVTUJETELYWQIXYGIWMUYLAJFDHRSMRHHMGRXFERTJYFFTNQECBOYLPWAGXZFUOVXSFKXVMCAZGJOVOTQNUKADCUMVDCTTALPUIDIEZMVQWQATPBEZ");
    msg.conditions.assign("CQREVYYLPQRWXFMFQLWSYKZLKPPMAJEBFOOYCSOUGSQMMVKTXRCMHRFMTJWUJDOIHUELURLHELQIVOVGHTBZJG");

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
    msg.setTimeStamp(0.19880763539490476);
    msg.setSource(20006U);
    msg.setSourceEntity(181U);
    msg.setDestination(23896U);
    msg.setDestinationEntity(233U);
    msg.source_man.assign("EHDZIRHIQULHGKHDGSFUIVGIMEQUBZGEJSZTJXUPNJQPNJWBMHSWAVEVAWMGQOETFNCQKZOVMCTTDFNBOVZFQRVDPLLJYGGTDYAPXRKLVIOHRQTUDQTCLWRXIYBRARMNGIQSPABMBCETDASVHYTLPNAEKYFBVZJYALMNOGOLIYNZJMKB");
    msg.dest_man.assign("APWXEHWFLNFFFGUSIWDCVBGYSQRNPXHDWVZBSFELYZQTGXYEOGTEKEUCNLRTUWBMTYZDKZNQZHTRMUZKYVKAPNOYUOOVDLLMAXGMJXDHDBXWUVIMXVTPZZCSJXIOUZJLUQPUYHJBPKJVITGPTBRCHRLNKOPAJMDIELMCKOFOCKJSNOWEQASHSANQRLSTBIFAEPIACIAVRFDQIFDBQNMCKLRE");
    msg.conditions.assign("HNQKHHRMXUJPWPEUWAACXFGXWKDBJVVJBPVX");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.8337650483798188;
    tmp_msg_0.lon = 0.8139702324025714;
    tmp_msg_0.z = 0.8771436584040879;
    tmp_msg_0.z_units = 30U;
    tmp_msg_0.radius = 0.6486943993016168;
    tmp_msg_0.duration = 4201U;
    tmp_msg_0.speed = 0.8597838839420946;
    tmp_msg_0.speed_units = 217U;
    tmp_msg_0.custom.assign("OERJSYGHZPQACUYZJXGBTBILQTBAFUIMNWEYPSBVKRBVPBAZYDAPEEZQSHFCLOCVCCGGFUENBKVLDKNWCLUPA");
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
    msg.setTimeStamp(0.4739880534993389);
    msg.setSource(8389U);
    msg.setSourceEntity(28U);
    msg.setDestination(29172U);
    msg.setDestinationEntity(109U);
    msg.command = 217U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("URJJHREPQPAYPVUTJTBQMDODRCGAPNHKYRUYQJQBFEGHZWZPKGZKRSVRPEEATTISZIPLYKMQODNKLFLHIXONXQWTJWJVCQODBVZWIMZXYOAHSFTY");
    tmp_msg_0.description.assign("GFKOJIVGQHQZWHSEMZHBLPJTCRQ");
    tmp_msg_0.vnamespace.assign("UMJEEOXWHCROQNFZYDSGOHGUTXVGOZTDVWACBVOMLNECQEDJYEEPQPJUULRIFDADSTODDWAWIUVCESQZPYOEFYCLMHIHRMCAFKWAICPHXZV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RENIQTOTMOQLBBVVEBJDCHHAJPDMZVFYOMTUDRBLMIYRVOUKMICIEBKLAEFDUPCXFQYYFXUHUFNKCOCRVXSVPWGOIZIQHEOZIXUCSWBGPXGKSSMK");
    tmp_tmp_msg_0_0.value.assign("DGYECNPHPEWDAXUUMNPUVEUNYIQHXSDAOVFZTTHZXBIZTAG");
    tmp_tmp_msg_0_0.type = 143U;
    tmp_tmp_msg_0_0.access = 249U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RXXBCFFGLCGMOBZMQOKWQIZAUYJELLFDHDIJGVXLVAWPXBVDULNIHAJOHYYDKDZQHCFOTSETAKCGEZMAXEGDJLTLCMBOWYFFVSUNFHPHBNCGNBQCYKNUPERNXAYUPIQKTNXRESPONRUJMTRXZWIOBVCCMPQDJEETZLQAWHIAUWRWBKWDKOGU");
    IMC::EmergencyControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.command = 82U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("IWQOSYOJRYAZFRRHDFODLEMEZBKLPCWZKMEWFWQKPJJMNVDYZGGOFCEMVXHORLEAQHBFFUNSWLVSX");
    tmp_tmp_tmp_msg_0_1_0.description.assign("DMEOHKKEVXBYRWMXWLLLDCUREKYNTKMFGAUFBEISGCCNYGAMJOOODGYVZBZIHGSQHRRNJYLSNORSXHCAXNFIVARMPPVBYXGUCOIFGIMQKANHIVWMITXAVOHZSEXRLKMWZPXFSWPPAFPYLNDIWDZHDIXTPMAZCHSTJEAEBRTJSWCJNHLFUQGJRDPMGFBLABODVQTQUXYPFUQWDECBCUQNGTKVOWZSZBEUDJZLQUFEKYKVUBQYJPWOTZIKNHLTRT");
    tmp_tmp_tmp_msg_0_1_0.vnamespace.assign("DMQAILDCPRQBMZXLHDHAKAFBDLERVTIXZVRQOAHSZZHBHOBPELTESNKEQBLCBXNEFMXQSYNKOMPMOGXMUUTRFNHHKQRSWUIZGJATEFOKUSAWKNQFUIERSWGKJOXJFOUWZVRDVRLTLLQWYASBGPNWXVTJOAVUYGTYKZDXYBPCYAHYELWFDVXGNUGTJIWQHMOITGLUDZIYKSYEPCVIJPC");
    IMC::PlanVariable tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.name.assign("JIZQVFZDVXTZGIACREQLQAHSJAEPXCJBRBRISKEQTOXLVNILRSTHTNXGVCDWJJABGYQNKCZNDQVG");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value.assign("GMXDKTKFFMHGKTWOJZWNGDKBRDVOQZUUBUSOZWLWCUFFYCPXSVVXXEDQEQYKLNDZKOVLDUSTXBXMPUZLRXAIOILLNJDRQLTEBOBJMZUGZVTFOTBDAHCXMWJREJYJHIBLKBEPVSAYPKYACYRCUWLUPVISIKMNJPAPHNCEHENHQHGFCYUROGRCMKYHARTIPZSFFWOYQMEATWMNCORNSJJSANIXDGZVQIPWQVHGFLIESJYRFQT");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.type = 186U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.access = 248U;
    tmp_tmp_tmp_msg_0_1_0.variables.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.start_man_id.assign("WXIMJRUQJCNYQIUPTAKOKYJSWDIMOVLSXDAFNBSKQKNEKIYVRBUBXLLKZTDGTRTPCAAQWDZIY");
    IMC::PlanDB tmp_tmp_tmp_tmp_msg_0_1_0_1;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.type = 120U;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.op = 94U;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.request_id = 24782U;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.plan_id.assign("LHYUCHKDQYBUYXYCWRMKREBOGQFSOBLIMALHGSHMIJZYNOBUEIECKLMPJZCPVWVDHRTHQGRCUKSRQBOEETTGDJUNCKUSWOMTOUZXPUILAIQYXJNNYEGGWMKNCVTXQORRXPWZPGSZDHSDVSRVJYHFQCJXSDSHRAAWXCPMWIMTPU");
    IMC::CommsRelay tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0.lat = 0.7601731107428773;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0.lon = 0.7720107076909007;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0.speed = 0.8917630182296294;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0.speed_units = 52U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0.duration = 13535U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0.sys_a = 1551U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0.sys_b = 54998U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0.move_threshold = 0.0509071228673893;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.arg.set(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0);
    tmp_tmp_tmp_tmp_msg_0_1_0_1.info.assign("ZBCQHZUWUPEUNYMWXLSFDTFSKCHKJTNBWKZDUBSMONOKDSFXMNKNPOVYJ");
    tmp_tmp_tmp_msg_0_1_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_1);
    tmp_tmp_msg_0_1.plan.set(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.6547386587515103);
    msg.setSource(20253U);
    msg.setSourceEntity(228U);
    msg.setDestination(43048U);
    msg.setDestinationEntity(4U);
    msg.command = 101U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ATDMXRVYPSYQCQPVTZRAWQNWCVBGEOTSAMIDYKXXAKUSGPCJHKWORCSGOFODHVJKXJTYONYZLHBIJTQTJCFQSBYJSFGNYOISEKLMWWZRQAWMKOHKUDRHLRPPEAIPRLEASPLAGNIZENHLMULBXJUBPFTNWQBQYVABOIXZDUXTCDPUYCBWECNZDHNXFGXINEDZGFEQWWNFCVFPLRLOMOVZMTMCHVYVGAEBUMJZJRKITFGUHIJKUZKLFGSIHERM");
    tmp_msg_0.description.assign("DCAEVQYLUUFPZNPUCKELXMHOHJSROEEYGLBKJILCEPWVKSMTCDGATYNJODDNZKVYVCQXKIMFGZMIRYNTIROZHXSJZBSZQTOTQVCPNXATWFSXHSBWSEEUDFISYLUETXDZBRJJQHUPSZKBYDMWIAOVRKRUIJENVNFTXBUNWVCBAZQFBLGWGPQARRCOYXWFYMIXNKADRZHIJOMXJHDOCTMVOGGHIWEDQPMPQUAFGGVWJHLHYLGFBSCPBM");
    tmp_msg_0.vnamespace.assign("TYHNZPXEITCMNPQAZYZPSNIJLSTQVDIZKYEAIZOWKLCVASEACKFBCUWPUWEBMWSAYRJHMLRBGVRXEXFHVMUHBNGQOCRJVTBFXKDIGDUQNWLEQDQXKJHQDTSOVKBSJMPOKASRLFBMXCOWPGPOYYLZVKJJMIUBHQDZECPRZRXSIWANANPGTMXGENULVQYEOWBVXGRTNLFLF");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FNRZUNFNFHMJOWHYZMBWGSBLBRZGQXOVBAYNKTETFEIYSDSRVBNKMUKPZCXFOMDXEGYAUALGKUGRIZWGBLTLILKNMDDROMJSIUWDTUGKQXSQFMSPSWJGTLECVMVBTNKCRCUHZHIQVDXIACDEAAJTBDJYHCGLLVBLXCEFNXIQSFYJHRDRVQKOQCSMPENZJIZARPQRVLPCHWPYOJSXFOVOQPWMYCKOPIVNHJKPAYZZU");
    tmp_tmp_msg_0_0.value.assign("OTZQQQRWFYACEEPGIMSBIHRRBVXDZQMVPYHDGBDMGBQUFAQJUFTZYVCJMXUDDUQHXFKFSWLEIDRJASKZNHJPOKSYXJBVXNWXUWRWTGUNEYZRZUMILEHJGDFOZKWOJHGIJUKKCGSSPJBESNYPKEZLMBXJRYVPNLRPPOYYXLEOLRHKEZSLVTZTXNFULTQWRIIAVWHVLMAPCEFTBAGBNDMALTWH");
    tmp_tmp_msg_0_0.type = 15U;
    tmp_tmp_msg_0_0.access = 137U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XBMDLIUMBUKRUDPJUYRLSYNLSMUEKOTXHYJUHPFVNLWQSQOZFHXYVWGDFMRUEGKKVQIRBOSPFKVQSCMXNNICDVZZILQAETGHGOBEZMSAIATRJDKOBGWMJNTKBAEPFIKFSEDXBUCPSXZHGFFXVRIRVHPHKTWSGJAZMRETOCHYQTNKZOALYLAZQEOCIBTJAWJAYCAOJGDVWXQWPWNCHTIWUGCHMCBPFVJYXESLRRF");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("WEGGGBJGMJ");
    IMC::Elevator tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 6511U;
    tmp_tmp_tmp_msg_0_1_0.flags = 74U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.006203682822708223;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.7897906964173649;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.38489855110646465;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 40U;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.022922583151354203;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 238U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.9066734273126393;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.2576043426418262;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 8U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("VIWDJKPTSDQRZHGPSKFNUXNOZQCOVIJTQDEACLQTZARRFJGYLDFGZIPCWLABMZUDHONCHTUOVHSFDFSICEDZZOXTFRHNZKSBSKUMQBRJOBAGANSXEAXUVQWNMMIZSCSENOCUOWIUKIPQPTSONPTGBKQYDKYVTOETLMFGXVIFTHJYAKGLWBGLRYGRHPALHMLQVABZRMJWMPYXMVWUJIRBHXIJCBCF");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::SessionStatus tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.sessid = 1858998528U;
    tmp_tmp_tmp_msg_0_1_1.status = 56U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.941133294790591);
    msg.setSource(40771U);
    msg.setSourceEntity(71U);
    msg.setDestination(6495U);
    msg.setDestinationEntity(62U);
    msg.command = 81U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AQOBKZVWELNZPQTZIPDCMHXSUVZPARSJBXXZNLWDODZCDQOFYWHZXINNNLQTCOWIRKDVEDNDWAVMTUHKWWROXXIUVPGLRMQMATICRDUIYAFAOITIIJFYMVGEVSFWBKGWAEBYQY");
    tmp_msg_0.description.assign("AOCTKASQMRNHQGBANWXGYTKFWWHEOVPJNKMHFSIWJUZRUDUJRPEJXMBTYCDNDHZITRLHSPWYUCDSNWVZZONGOLYPOIOPTBHRVQYZLUTHVFVCTENDDFQMEIWGYBQEAEGDEFNLGRDLKOMVSKMKKXTOXPGWLVXSIEKCNYBDSZVBCMVQDCQEYLZQWBNPIJOJ");
    tmp_msg_0.vnamespace.assign("APCWISYOEIWENGSQBOMUTDAYLCEWKCEPFNQTMDOFLXUSUGPEXZJQNGFPSCUMRRT");
    tmp_msg_0.start_man_id.assign("CYNMZZFFAZVHIRQLKZCJNIDQXAWTIXBMVZDJFOXGPWSIWTTVHWSNJKIULYUGORYVWNJUMRYSTMOLFJOGQMEOQFZBZTFBHEGSDKCXKNFOMDSWARDVWELAQCPCBIBNVTRHUAKMJNDCLDNWAUGTVOTYVYJKXPQK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("QJARNRVSXHNBVZMNSATDDTJXYCEOUBESOXRXHTJSRRIENTMOIJJCYHKGZDDVBMYLLGFCATEGDVLSEBISHXFAFNMUYOVGDMIJYCYLHLYJVUOXUMWEFMSDUINOUWFAQKMQYSRHFYVPHPKEUHKTQGKWMQBLZDWIJNWPKEUZWNKNGQALKLBIUAVCXWAAZZPW");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 2650U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("HKWWPJQEVDRUVYMSNYQJYDWWQGYUJMFTCTKXHNLEDASSJILNYLBUSJZFZJIYHOAKEGPQMXOVRTVFLYRRKIZVCBPZEVUSXBZWBNCQBEKGKTCXDFABMJRXRAHUZCWLIRMOOQVCZSAZHAHIFGOSDUBTTGTHEEUOBD");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("JQXYCDPARGDFOMKLCMASJLSHTUOMBAXRLMQMEAUVDVHJGTNYFLGNYMDXEDNTUCFEORKSPKBWPCKOTEIHQINWIVQL");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::CacheControl tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.op = 149U;
    tmp_tmp_tmp_msg_0_0_1.snapshot.assign("MQUKULVBPQAMBHDLYPHAGIMSS");
    IMC::SetServoPosition tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.id = 101U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.value = 0.6496282277859965;
    tmp_tmp_tmp_msg_0_0_1.message.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("PSVRYMXOQXOADV");
    tmp_tmp_msg_0_1.dest_man.assign("ASOMUOFRELUZYGZIMOEPDTCRGTAUTNTFKQAPBBWYAYEGQXGVKAIVDRSGFMWRULRDJTBZXWYYMOFLIGFISZPWEVJVCLKSBDHUBCLFVLQVWOYPACSOIDUYNFRUQZTGEMZIAKFQOMWHUVMJZDCXDPPSLMOHPHXWNGKMNPNWXJKXFEEJPRQBLQSAGZJXTRCYEOREOUCICYWJBTZKSNPSBBNJIQVGHXSMDHXNLQTTKHNEWJAYVIR");
    tmp_tmp_msg_0_1.conditions.assign("LMLDBRQEXMDFQIVVFHSKONVLDEPIPPHAOUDCYZQBWISGBBNCOOAEFRFMDORTLDGNOPSSOKNZTJAUCYUIWXRZZVHYEUXAVFYGURWIUBUINATVDEUTTXZLWBIECZOSMCNJPBBLGPBQKIJJMATVZHFGUKQXOHSFMDDCZFEWJRTQKQQYGAKXTMKYHGKHSNVYVMKPMRKESPGHRJCMANLGISNVPWWAGCXYIXTYRPFEZHJQWYJCSFXWZCADLJBQ");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SetServoPosition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 117U;
    tmp_tmp_msg_0_2.value = 0.6928484658043462;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.997901146387045);
    msg.setSource(29519U);
    msg.setSourceEntity(83U);
    msg.setDestination(16274U);
    msg.setDestinationEntity(0U);
    msg.state = 108U;
    msg.plan_id.assign("FQLJPMLTVWQJLWYHUJAREFVJEURMCOADRIFGPOAUHRWBMRTIEMYJZEOMBWUFYNDBCLANKVXNYOXHSCFDCLIOMUAYDZCQZFZSPTKSYCZQBHXMENGNPWPNXAFBOMPYRBCUBSJKILVPXSIYFSHSGKMJRLUYQOQDHAIGJYJXCGNDFEQGXVOV");
    msg.comm_level = 29U;

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
    msg.setTimeStamp(0.05379857976818403);
    msg.setSource(50943U);
    msg.setSourceEntity(154U);
    msg.setDestination(47503U);
    msg.setDestinationEntity(103U);
    msg.state = 254U;
    msg.plan_id.assign("THXZSPVQLNSPAUTAVW");
    msg.comm_level = 252U;

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
    msg.setTimeStamp(0.5789039187787451);
    msg.setSource(10130U);
    msg.setSourceEntity(74U);
    msg.setDestination(7913U);
    msg.setDestinationEntity(134U);
    msg.state = 56U;
    msg.plan_id.assign("JEXAUMRAFDRAUUHYWBSNPREIFPSIDCPQNJSKVPKKXIDEALLZAHYBOKYONNZVSGAZBNMSQEXJBCTOGTBXHLSQKKMHTJWTPQJIZRQVYDLZCWGVSUFNKUAGKFFAIQPBFAMFSHEJ");
    msg.comm_level = 104U;

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
    msg.setTimeStamp(0.8374119256045303);
    msg.setSource(15963U);
    msg.setSourceEntity(132U);
    msg.setDestination(64778U);
    msg.setDestinationEntity(1U);
    msg.type = 127U;
    msg.op = 207U;
    msg.request_id = 26099U;
    msg.plan_id.assign("DHECKBQASHMSDFFGYYVRNLLCNTIMEDZOHIQUDQUOMGEZHTMLZKPMLZPZJYQCVVXTFLIIPDRYKXREOWSZMCUXQPI");
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 182U;
    tmp_msg_0.op = 84U;
    tmp_msg_0.request_id = 31395U;
    tmp_msg_0.plan_id.assign("WGFJSYKNTNSSWGWIULPQDXIREUFHGEBACKNNSZUJMFX");
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 51036U;
    tmp_tmp_msg_0_0.off_x = 0.5719300954795534;
    tmp_tmp_msg_0_0.off_y = 0.03749308905474158;
    tmp_tmp_msg_0_0.off_z = 0.17190144110291494;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("FDRVPRNXUUYHOYFBARMGMCENJDBNCTSEWWQCLSNVZYNBJLMAZGCVQMDVDKVDFUPVKIXXRKLUOIMRYHDRUPODMXFPGWOTSIPMWLUKEIEAMHSPQSOSARZJSPCJTHCZTALSCBJGKXUXGLNTBEEJBOQGQJKHMCSITFSAUYYQDDHZHIHFXUVUCXWBRWTXYPBZTHYXVEEFNRHYGINIQGK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SKCJMNGOOGUKXIDRGUZDVQCQIQXUAXSTVUEVFXVPPLZTNZCUJBGBKATWELNMVPRIZFPWODTTMTGRBBYISKOXCXDFEEZOIYBTVEAROVJRAECGPMVZQCBHHAFJSWJDDZMLYTMRHGJJEBWHNWZIYHDFAAZI");

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
    msg.setTimeStamp(0.2870563516819544);
    msg.setSource(24416U);
    msg.setSourceEntity(102U);
    msg.setDestination(45693U);
    msg.setDestinationEntity(119U);
    msg.type = 123U;
    msg.op = 116U;
    msg.request_id = 30717U;
    msg.plan_id.assign("SWUFYGYKGNUTCIEVIWMLBMRHHNRXXVCNCRDNFFGFEXBOUXUPETLMLABDABLRZKKDEYJEIDTOHJPAISTUKZIVJIEQQVJVKDHIDUZNQZZJXYAL");
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 218U;
    tmp_msg_0.name.assign("AGUIJIRTDENPPTHJWYRHJBAOOINSZWCOTLTGLAVWKPQYDUFBNNFWXNUQFWKSFRZYHLAJBKEVDVTHMZZDRZURLNBZMAXKDTPKUHVAXYCBFMGLXFESQTOWZYRJJRUSYQDDMSSBCZVFGRXKHQOTWMERCNIOKKEPBL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MTSNJTXRIJHSVCITHBRIFQRIRNSWKIWDGPJETTUZDSXVODXZFOSGOBNWUKYEYKNRVSJUOLOCZJUOBSHYMQZAVQSBWCLLIYFCTKAJHPXDABAFMCQFAPLENINGMCPOWAXFGWRYFRBRQITHWJMMVRZDWUYIALMJHVGBHOULQFPDGKXKWEMNMPNSHKUDK");

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
    msg.setTimeStamp(0.9611907289669204);
    msg.setSource(57175U);
    msg.setSourceEntity(187U);
    msg.setDestination(58546U);
    msg.setDestinationEntity(6U);
    msg.type = 117U;
    msg.op = 74U;
    msg.request_id = 36482U;
    msg.plan_id.assign("ECYMVBXKVTAZOQEJKMYPFQOLCONQSNUTJEVURYKLTDGEM");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.start_lat = 0.7624882430373471;
    tmp_tmp_msg_0_0.start_lon = 0.10008766275051828;
    tmp_tmp_msg_0_0.start_z = 0.4273144463309766;
    tmp_tmp_msg_0_0.start_z_units = 80U;
    tmp_tmp_msg_0_0.end_lat = 0.8584572478335646;
    tmp_tmp_msg_0_0.end_lon = 0.030517954782926182;
    tmp_tmp_msg_0_0.end_z = 0.5081242022005298;
    tmp_tmp_msg_0_0.end_z_units = 230U;
    tmp_tmp_msg_0_0.speed = 0.15169251758418834;
    tmp_tmp_msg_0_0.speed_units = 120U;
    tmp_tmp_msg_0_0.lradius = 0.9423182379479668;
    tmp_tmp_msg_0_0.flags = 117U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 21646U;
    tmp_msg_0.custom.assign("NORDHGMUTIAEDNQFQNZFACOJPHXZXJNEFHHBBWWHUWRABLPYWHWKKWNJNXEYRUEQIDCVRQD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GQRAPIWPWVXXXHNWBFJIJGRKKWREZLSNWBYYHDGAUXJGAMNXLZPRTNLDYJBEAFZIAWHFICPBPVBZTVPLVEDMXDOGNDURGTKZGFQMZVWFSCHGJNOIAZSUIRWGKZUCZMKTCDIDQQ");

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
    msg.setTimeStamp(0.8177041556995556);
    msg.setSource(56465U);
    msg.setSourceEntity(149U);
    msg.setDestination(57930U);
    msg.setDestinationEntity(4U);
    msg.plan_count = 3972U;
    msg.plan_size = 4204380016U;
    msg.change_time = 0.1142423435300618;
    msg.change_sid = 65416U;
    msg.change_sname.assign("DPKWQIBLWAMPGZGHZBBMYVMEZZUGSKHSRHHDQIYLFKNLLTRYEXLCXJCYIQZXSWSUIYVNQTVUBGWOARDJMFTPKACHVTNPJSKGQYPJHFWURMGZDRNWKEWNDWFYZESJQPJARJEOVUWACOADJVLFJBPNVTCSMOVXLTNQ");
    const char tmp_msg_0[] = {57, -80, -92, 94, 21, 7, 10, 58, -75, -95, 123, 102, 4, -88, -11, 25, -82, 63, -119, -24, 69, -10, 68, -122, 80, 34, 48, 57, -66, -12, 110, -122, 95, 47, 60, 117, 59, 88, -32, 49, 81, -94, 34, 9, 118, 70, -113, 32, -29, 23, 57, 30, 28, -72, -50, 55, 122, 56, 15, 107, -121, -112, 63, 85, 126, -104, -88, -101, 91, -48, 113, 45, -114, 99, 90, 30, 88, -89, -34, 65, 87, -71, 34, 4, 122, -97, 113, -84, -75};
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
    msg.setTimeStamp(0.22860819097611684);
    msg.setSource(50086U);
    msg.setSourceEntity(43U);
    msg.setDestination(63768U);
    msg.setDestinationEntity(218U);
    msg.plan_count = 47304U;
    msg.plan_size = 2622519515U;
    msg.change_time = 0.3333706702220903;
    msg.change_sid = 7311U;
    msg.change_sname.assign("SBMCPQKSZFIIZNXSPCMRAUPFGQHOYFHAFWAQWBFAOXVKQCFVRJGKCBMPZCVOIKJGASARZMRGFMVEGBHQDRJNYHTDFQGRDXEYGTIWCEITEXMYUCOTDDBOBTMYOCMOEJRWLQEHVSNLFKUAVDGNWHELJSDUZJBYSUWGPLLZJUDCJSHDATXWMTOJWIKNCXBXZUPNOZKVQHRQNOTELZRPVVKBBGEWUKYPIRYTLXYFHVYANHZW");
    const char tmp_msg_0[] = {1, 2, 88, -7, -41, -59, 6, 38, -34, -33, 27, 16, -42, -81, 41, -60, -60, -85, 55, 38, -29, -30, -4, 22, 91, -23, -32, -42, 90, -24, -65, 124, -109, -40, 46, 84, 67, 99, 114, -48, -87, -60, 31, -89, 0, 34, -98, 65, -77, 117, 2, 58, -64, 25, 105, 92, 85, 35, -73, -83, 90, -116, -39, 5, 97, -93, -121, 92, -80, 52, 68, -113, -50, -62, 77, -66, -103, -106, -79, -90, -8, -100, -37, -27, 54, -105, 94, 7, -120, -48, 35, -60, -13, -87, -91, -40, -34, -15, -60, -123, -32, 49, 0, 117, 125, -15, 121, 47, 23, 70, -107, 69, -86, -52, -62, 45, -63, 51, 87, -16, 97, -37, -37, -45, 36, -114, -7, 5, 94, -91, -27, 96, -32, -81, -40, 20, 17, -107};
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
    msg.setTimeStamp(0.8744508528746084);
    msg.setSource(65226U);
    msg.setSourceEntity(34U);
    msg.setDestination(48230U);
    msg.setDestinationEntity(244U);
    msg.plan_count = 45196U;
    msg.plan_size = 3244610063U;
    msg.change_time = 0.3941954234783175;
    msg.change_sid = 58880U;
    msg.change_sname.assign("PGJZQBZBFBZHCNQQJFCOMTMRERNPYEYIMAKZTOWCDTNIQXMHUWHHZESEVAIQUPGMNSTXJULGVKQDFGYFVCAAJCKQUBRWEWFIOXQOXYIJBJMYDICKBXZDJJPAEJRWXVPRSIAVYTACNZYHWKOCRDIZGU");
    const char tmp_msg_0[] = {64, 5, -9, 46, 96, -34, -122, 61, -94, 34, 65, -96, -39, 70, -69, 76, 70, -35, -23, 9, 90, -73, 8, -117, -36, 14, -90, 17, -64, 100, 31, 52, 47, -19, -77, -1, 60, -69, 23, 3, 74, 19, 116, 109, -28, -20, 97, 104, -7, 27, -46, 83, 90, 98, 59, 84, -71, -116, 75, 76, -35, 49, 6, -110, 89, 76, 93, 44, -33, 4, 73, 89, 86, 52, -122, -37, 114, 80, -34, 68, 64, 99, -123, -3, 113, -49, 121};
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
    msg.setTimeStamp(0.6159113705130671);
    msg.setSource(29062U);
    msg.setSourceEntity(157U);
    msg.setDestination(26394U);
    msg.setDestinationEntity(221U);
    msg.plan_id.assign("POCMNGXRBOAWQHICSSMAOCJWUREOXJWDDZYSVUTUGFKPMMQGNBPLISIIZVBFOKAJBBEDRBDGFCLTAHHKNEXOXGWIVBJEBGPTAMRNNYFJBVAE");
    msg.plan_size = 33730U;
    msg.change_time = 0.7083406324471294;
    msg.change_sid = 2594U;
    msg.change_sname.assign("BGWTFLIYOTQBKFXQJKOBDNFEISDPFENOQFXCXAJSTGVFBVOMEJXWCJNREWGNZOJDGRCIXULHQAZMBCGLVYDHV");
    const char tmp_msg_0[] = {-88, 119, 95, -94, -7, 10, 81, -19, -14, 6, -7, -98, 87, -61, -36, -40, 7, -46, -49, -88, -60, 80, 120, -52, -108, -28, 44, -56, 15, 88, -67, 42, 65, 66, -106, -31, 9, 35, 24, -116, -8, -17, 93, 107, -94, 108, -96, 69, 80, -99, 56, -36, 65, 41, -121, -75, 114, 74, -18, 21, 86, -116, -10, 2, 10, -97, 4, 100, -38, -123, 6, 109, -89, -82, -41, -1, -125, -110, 90, 78, -39, 82, -61, 74, -47, -21, -16, 66, 118, 116, 125, -123, -124, 105, 80, 72, -111, -40, 90, 22, 99, 36, -24, -39, 125, -105, 3, -54, -103, 75};
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
    msg.setTimeStamp(0.04705485963632061);
    msg.setSource(53402U);
    msg.setSourceEntity(106U);
    msg.setDestination(54520U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("EBXNYOWUJMKFXSSLLDFKCBHSHFATKJTOREYMXTXOZPSSDGFRLMEWZNNGLYTIMIZDISSQDQBXNGWRGVLPFUBFRVEYKBLWKPSHZQZAFYY");
    msg.plan_size = 59683U;
    msg.change_time = 0.6613095560280092;
    msg.change_sid = 22414U;
    msg.change_sname.assign("ZXMTGMTUCCMWYIEXRZBGVAXBPUHUYLWDCELZDTBTFYTEYKTUJPVXRKHGACVOQBRQHHCSUIYLMXNNNHUSIGIJPTHFLPPCOUZRLMDXQKDLDZPOKJORTFDFYVWGRFDRUPOVGSRDEUZMSEWXRKGXWKOCVNLVWPGSEBLKAWYDZOQIBIADQNT");
    const char tmp_msg_0[] = {-119, -88, -26, 78, 77, -115, -71, 55, -60, -51, 97, -80, 30, -75, 1, -27, -50, 80, 43, 66, 80, -111, 125, -70, 53, 91, -109, -52, 85, -37, -92, -55, 66, -8, -83, 64, 115, 54, -83, -52, 59, 7, -31, -60, -59, 99, 60, 37, -48, -118, 25, 83, 59, -38, -20, 103, 60, 124, -84, -64, -97, 118, 30, -107, -23, 49, 13, 32, 8, -58, -56, -9, 11, 38, -118, 78, 71, 116, 4, 89, 14, -33, -58, -74, -105, -98, -67, 21, -33, -55, 45, -64, 6, -40, 26, -37, -58, -21, 77, -1, 3, -8, -39, 108, -126, 64, -82, -81, 83, -111, -20, -18, 40, 91, 39, -37, 11, -72, -9, -125, 117, 14, -37, -2, 105, -68, -23, -2, 43, 24, 69, 40, -46, -63, 75, -98, 23, 97, -84, -112, -72, -36, -60, -55, 99, -27, 82, -62, -20, 21, 75, 19, 87, -73, -73, 50, 21, 87, 46, -26, 85, 83, -97, -66, -11, 35, -50, -22, -25, -24, 33, 80, -97, -37, -52, 44, -112, 98, -109, -126, -19, -115, -73, -48, -35, -51, 15, 88, 6, -48, 24, -45, 6, 76, 31, 70, 32, -63, -100, 95, -9, 11, -72, 80, -77, -119, -29, -40, 72, 23, -32, -100, -59, -80, 74, -51, 26, -62, -52, -13, -71, -69, -73, -48, -1, -94, 33, 18, 63, 17, -64, 79, 12, -71, -74, -81, 114, -112, 2, -76, 56, -102, 119, 52, 43, 7, 60, -91, -108, -88, 88, 97};
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
    msg.setTimeStamp(0.06313607327808257);
    msg.setSource(34774U);
    msg.setSourceEntity(37U);
    msg.setDestination(61159U);
    msg.setDestinationEntity(181U);
    msg.plan_id.assign("QSTXQEZBXUDENTEAYBVRMRKFERPAKLITVZ");
    msg.plan_size = 18227U;
    msg.change_time = 0.22612304342172151;
    msg.change_sid = 43823U;
    msg.change_sname.assign("UNMBDMOSWNKEQFVVBPDRCFXNRLVTIMNKQLSQGTCTGMFEDCYRIXXDRDLWITRFKSFHUUPEFGENPMHTTLZZPAFSAKJYMDYNVZNSCLKJ");
    const char tmp_msg_0[] = {84, 42, -77, -87, 71, -103, -72, 4, -96, -45, 87, -4, -21, 50, -41, -23, 73, -85, -114, 104, -66, 49, -124, -34, 104, -20, 23, 10, 32};
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
    msg.setTimeStamp(0.8628988240074384);
    msg.setSource(19228U);
    msg.setSourceEntity(94U);
    msg.setDestination(40683U);
    msg.setDestinationEntity(107U);
    msg.type = 73U;
    msg.op = 86U;
    msg.request_id = 31613U;
    msg.plan_id.assign("HNWRCNSBZNMFOHAOJLOMSKXPZYPBKVRVWKSVZYAHGJPVFECXLFCPDGBUGGDHTQVL");
    msg.flags = 6583U;
    IMC::GetOperationalLimits tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TOMBUSTFPIHLKADPGNVKARNABQATYQZGLUDZKAFBPVRLMJJVFZXFICNNZJIHVBWSHQSJARAMMGIXFXICVNBCYVDZPDGJAXQKX");

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
    msg.setTimeStamp(0.8218123623685736);
    msg.setSource(52734U);
    msg.setSourceEntity(79U);
    msg.setDestination(6860U);
    msg.setDestinationEntity(58U);
    msg.type = 122U;
    msg.op = 18U;
    msg.request_id = 7094U;
    msg.plan_id.assign("QCNLDABMJDFJDPTQBQQZAASNZTWTOWEOQODBBGGVAECUQOFXAJREMCXNRRVJVVIKCBDOBFORABGSRYNHHSMCUXGYFOSMNISSJNECRNZHEPKFSEQGCGBKDRFQMNXWDAPPUNETPIPJQYLFIZLLEUTZEYXVGTYUXPWKTAPCKIKKYSIXPYKUZUPYHGLWIDGQWWCOHBMVRIUWZLJMDHVVHGWVFKTDVSZTMMJFAROBOZJLAXLINHJKFIZT");
    msg.flags = 58284U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 19241U;
    tmp_msg_0.lat = 0.940937294812338;
    tmp_msg_0.lon = 0.6827647020463773;
    tmp_msg_0.z = 0.19592373592826973;
    tmp_msg_0.z_units = 117U;
    tmp_msg_0.speed = 0.47047360260182314;
    tmp_msg_0.speed_units = 243U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.02479343692892;
    tmp_tmp_msg_0_0.y = 0.2595498785162077;
    tmp_tmp_msg_0_0.z = 0.5487371869944366;
    tmp_tmp_msg_0_0.t = 0.8766546074406094;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("IPGFJPKJEXQWXNEQXXQVDBVUCWPNVFRDNIGAUYPVQKVBLVMARPGIZTDJDBMCFZSQVMSVKIGLFZKNCXGYZPLLOCAHZLUHVLZKTKTRUCETIUJJHUCBTBIKMYCYONAOHSDEHOCQEDLPRHWPAXOSQDCYKWTHNUABMZBEGQXIDMQUYMTQFNELNDHBOGWFEASTLXJXPRNTASWKMZAJROSGROYORMJIHZCIOFXWTPYFBHJSNZALW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RIOBLSKKSCGYOGQFWDJHWVZXDQCJVOTGIEIIXMMIXPOQUCBWRESSNPZDKCELAUBLTUDOJZTVJOYVRGMONLKYJDQHZYNEFYNFVFMPGOKCJNGUIKJZGWVCSAPNSDRJVZMT");

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
    msg.setTimeStamp(0.8631909113949507);
    msg.setSource(11965U);
    msg.setSourceEntity(87U);
    msg.setDestination(11266U);
    msg.setDestinationEntity(231U);
    msg.type = 19U;
    msg.op = 164U;
    msg.request_id = 26594U;
    msg.plan_id.assign("LWMQVJOVPXKXRBJREVQMXJRZOJLREZRWEUXHLIXWQCZYTGSPXGDBRXIJAQZSHUKDCYJJKPTHRMXRCJYCOEDHZGKKWDBLHOWNMYTMZIQBRTIVFYQIPACDGOWLHBDQUGTJNCYVEXWMZFYSDI");
    msg.flags = 37866U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9092777778760432;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 44188U;
    tmp_msg_0.custom.assign("DUEZTXIQSUFOFBHNWIJEYVLOMKKLPMEJRYAXUTFBJVDURWMDOSDJOWDGFKCURWAJHQNAFNERZUAFMLIHLPKBCUCEAHIXPBZJXYEGUFMUOPLXKXCJMBGRHMBQTCLVRTNKSLVVNXKYJCPMGVZGW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZODLUIOIUXSVMYMNIHESKOVNEFQBMTCEJZKPNTYZRGVKGYBCQUPTLUOBKTQHJSIZNBRJHZROWFPBVLRYVTBHEYLXYSWEUETKXOWSVNXVDIPQXWAXYLDZCEEEXUPQUDGKYSQTGTTQHHCFBGDMHVHFRGGOHCTXWMCVAJZQLRWUAZNAKLBMISNVAWFNUNKYLGYFULXDJDXIEMFMCHDOMKFCSQI");

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
    msg.setTimeStamp(0.892739442455092);
    msg.setSource(50803U);
    msg.setSourceEntity(150U);
    msg.setDestination(29216U);
    msg.setDestinationEntity(78U);
    msg.state = 140U;
    msg.plan_id.assign("PQPNSSTDSDKZZNAFDLVBQWZMGKKAXMIYUXJLWHTMYBCMLOXKQPQNULRJQAHMWNSJCMRXTUYHIEZVOXVMUQEHDYAZTVSACGXGWILKYNBJZDPTIAFUVBFEEPNMSILGPGFHIIJZKMIVDWWQBXXAOIFRJGDJCNOMOFAZFNWNLOZOUVVEVORXHTYWBFBHAXCRYKPEIGJRDSUPSCQHE");
    msg.plan_eta = 156663619;
    msg.plan_progress = 0.8023464287232676;
    msg.man_id.assign("BUHGWQYLSSRWMUWRZSIXLYXUUBATSCACEPXGXKIEYRVW");
    msg.man_type = 39457U;
    msg.man_eta = -1046394700;
    msg.last_outcome = 216U;

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
    msg.setTimeStamp(0.9681552079842348);
    msg.setSource(46467U);
    msg.setSourceEntity(158U);
    msg.setDestination(4387U);
    msg.setDestinationEntity(99U);
    msg.state = 155U;
    msg.plan_id.assign("FXHEWKHMMZMCWXJEOUPNUJXTPFTEIYKUY");
    msg.plan_eta = 689352262;
    msg.plan_progress = 0.5287289261914625;
    msg.man_id.assign("CJBMVUDGYWBKITSXMOOZRXURUTETQDALBOQCAUJYPDLEPMNOUPUWRGZBMHRADTAQYHOSATKGTUIOZLTQCNZZCCJYNFKVVXHFEDANQKAIXIZLS");
    msg.man_type = 65243U;
    msg.man_eta = 1266866554;
    msg.last_outcome = 239U;

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
    msg.setTimeStamp(0.845165477300462);
    msg.setSource(39248U);
    msg.setSourceEntity(192U);
    msg.setDestination(27327U);
    msg.setDestinationEntity(251U);
    msg.state = 131U;
    msg.plan_id.assign("WGYBKLRQXJDILXMTQIUJXJZFUFUKRJLAVGLVPCAHYPNOXYLOCYFKMNQTEASLWNQJBCZXHARPSFPVWSOWPRBUUQNSOTHBBHIEECWZGJHEDJPSDNGVLVQWTVZSEGWOUGYFXCQAKUUZBSFRIIHQBMAPKCVLYHUYNYUFJSKVPR");
    msg.plan_eta = -1406428360;
    msg.plan_progress = 0.36373304353646607;
    msg.man_id.assign("RQFENRAJSYCAIOOTQXSMEDVYBAWZTBWSTPBWIHXQKNGKJMGVOOKZJPZFHKGKYOYVSGOYZNUACIMGHQJVJWHZDYHLLHZQELSMAPCKPBVWXNSXGSDFBLDDNHGNFFLJUITOQVTLUHHAUQCAPKQDVCXTKURRIVAZNMLIORU");
    msg.man_type = 27075U;
    msg.man_eta = -1532353229;
    msg.last_outcome = 99U;

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
    msg.setTimeStamp(0.041306190891923);
    msg.setSource(40955U);
    msg.setSourceEntity(79U);
    msg.setDestination(26457U);
    msg.setDestinationEntity(102U);
    msg.name.assign("ZEUTPWXVNXNMOVLGAZRJVCNGXZRZASUIACULYEMDXJEWRVCVFJMNJUSTMTLAHHJDFRSSGGTILQXKBYSKIGSWSHYBDNOLWBRCIXJKFHUHQVZNAUPKZGQMANYJTDUSGQRBOPIOIOXYBDTTALFRXKPTUHZELSODPBDQIFEENPF");
    msg.value.assign("ZTNBOURWUAFARNQLPZGRHTZOEWBJKWUSJGSXEAOVLHPHZCJTSMBYCEQHYNPJYDHOVNXVAS");
    msg.type = 52U;
    msg.access = 187U;

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
    msg.setTimeStamp(0.945215584885682);
    msg.setSource(39407U);
    msg.setSourceEntity(9U);
    msg.setDestination(36982U);
    msg.setDestinationEntity(65U);
    msg.name.assign("OIHDZQBLQISGAHZFVUPCLEHDIYOEOOUWUJTVZERKWIFKZSQWFWTNLACBSRNTWPQDALFGRPNCWDEPXORQMNFQPYOYJRPUCBYXVHVSYFMASHLQNZINONVKAIJCBIVDCLRNEBKJLJGXWMQZJNCUMCMM");
    msg.value.assign("KZTTYHRVSXNPOGWWVJBUXFDJCAPYVHLJCHEWTWWTJ");
    msg.type = 238U;
    msg.access = 252U;

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
    msg.setTimeStamp(0.4919526336254618);
    msg.setSource(12615U);
    msg.setSourceEntity(197U);
    msg.setDestination(16237U);
    msg.setDestinationEntity(82U);
    msg.name.assign("EKCSDAFCIKYSYCEAGBUECWSGLSXEEPOMAGWMNFVBKNPTPCLURCBBJTVLRIIHIOTBOJVFOHXDUHOAGZGFEXAIMHHPMZCCNDTOSKMJYSWGIWJDUYHELFKQWPWQYDKSRZNLVJROFDSVOTDQFTMSAWMVPMKRNBIJXBZJZVBGHHTMINEXQRAJCYJI");
    msg.value.assign("UPQHALGCGKJPANTEMVYJNQCCSJQKYNJMZMRFVXBKULZSHCJIBMCTYOSZEEAQVDUSIRIREKWOVBBCRRXVIAOLAQENZQXSAGHDYGBTSPMNUXHXOIFHBCZEPYQLDZXTWGHKXAFMFRDQZIJLMLJFTKTYWFDPBGHYOYOKIRVXKCXUUPZOKTAVTDVFDWWVASVNWCNHJGURUDOETNMFUFDJPSYFQYHLZGXEDPMBWPUNNLJBC");
    msg.type = 42U;
    msg.access = 5U;

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
    msg.setTimeStamp(0.7453262401734898);
    msg.setSource(24419U);
    msg.setSourceEntity(149U);
    msg.setDestination(44392U);
    msg.setDestinationEntity(201U);
    msg.cmd = 37U;
    msg.op = 239U;
    msg.plan_id.assign("FEWTOWFYGLURSTZLTWTWRDEMAO");
    msg.params.assign("SKPLCQTTATYDVRLZUFFCMRCBTMKNXZASRHDPSZHDAMBUURWSUCCXTCEJWGZGOPMYQLTOSLKSJZNYHYQADVI");

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
    msg.setTimeStamp(0.5568346100910674);
    msg.setSource(50501U);
    msg.setSourceEntity(154U);
    msg.setDestination(57229U);
    msg.setDestinationEntity(118U);
    msg.cmd = 67U;
    msg.op = 110U;
    msg.plan_id.assign("VDGCKOXXFWIZPBUPWUPCVRONFDMWIHLYRVQRGXTNTYOQFXGFBMDIDEGJLJFETQUWZCLDYODJXZFVSCNTRZJCAXPNILREMASJONFKMKECTZHOMTAKHQIGYMNYZAOOETJMWVJHBSSBRHTXUXLRHUBPTYWKVBXLUDUFGNGJVKIYEFVBALVAZZCIHQBH");
    msg.params.assign("CCQLKIMXNBMUMNXAGWBBEDLLCXFHYNHYTZPUIFTUXOTNNVEBRCDNCQWHAXOEGQZDPTYYWGIADSSRQMECKFQMIJALPUEEGTRVAKIZPAGZTPQDKUSBSJIWGOJDPKVNPZPFWILDJXMXRXUJBURGVVGJVLDWXYYKWRONYI");

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
    msg.setTimeStamp(0.10379256272227155);
    msg.setSource(7041U);
    msg.setSourceEntity(72U);
    msg.setDestination(18287U);
    msg.setDestinationEntity(202U);
    msg.cmd = 115U;
    msg.op = 202U;
    msg.plan_id.assign("WUIZPBZPGJTNIXICUUTDYUARCIVEVJXIRHWOBNRKJIDDLDQHHBURFWEAGFXBJLSFYQMRNCTVPSYYNPEKTTJIXTJZPKWESBHXVXGZUABGXSVQCOQOQPOAWXEZFTEFOAKKRCLJHBB");
    msg.params.assign("DUVVMDAETWIKGCRRUYYIVQGAIXJIFKSUSFHXHYZCLQPUXSHGFYTUZOYLVYNTJAKBVLRKEBDOSMVHRPTHEXVHBDTLWSZKDFWLZOPZSJWIYQNKJZDMOAOCRTECYBJNHZMQWESFCNKJDLIJMNAPSUBRCNBFQXLWNNGXFTAXXMUEYPCIDWT");

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
    msg.setTimeStamp(0.4936963989130183);
    msg.setSource(25011U);
    msg.setSourceEntity(64U);
    msg.setDestination(40416U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.7755320183874574;
    msg.lon = 0.8901714753052112;
    msg.depth = 0.5867228752160648;
    msg.roll = 0.32042793545408654;
    msg.pitch = 0.35140176980700044;
    msg.yaw = 0.8287380513126352;
    msg.rcp_time = 0.36861315832165265;
    msg.sid.assign("GMMFJILJOIAKXSEEHKHXSIGWWGGNURKPWVYKFVBDTZDZKFSXULPOIUFWCBIQPZCLASMGRKXOPQVTRQTKYBRNDYUDZWLWXCBHVFQAIDLARBCMR");
    msg.s_type = 127U;

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
    msg.setTimeStamp(0.27973318333161745);
    msg.setSource(51504U);
    msg.setSourceEntity(249U);
    msg.setDestination(42641U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.18396814858627109;
    msg.lon = 0.4990484348147307;
    msg.depth = 0.6695893359538954;
    msg.roll = 0.5743791249279183;
    msg.pitch = 0.8453048914165394;
    msg.yaw = 0.5517695818384404;
    msg.rcp_time = 0.27512313341252825;
    msg.sid.assign("ZLSAHQWDOWFEPJABPLZIDOTZYFAMKKQPJABZBGNGKXYNTOUFWQGQSYXGERYIIVIRYA");
    msg.s_type = 214U;

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
    msg.setTimeStamp(0.2007197759018422);
    msg.setSource(39782U);
    msg.setSourceEntity(90U);
    msg.setDestination(58797U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.3162090850577479;
    msg.lon = 0.6893092428866323;
    msg.depth = 0.3459429501561748;
    msg.roll = 0.7901255951388767;
    msg.pitch = 0.874090722065106;
    msg.yaw = 0.24657386203039822;
    msg.rcp_time = 0.3450297819620436;
    msg.sid.assign("GJUTIYCBSKDISYZLNBVFJTMYHHCKCIIENDPCJDTTPSUXRANRFXYYWFLTXJHVNECQMWHEEZIONGULCUQDRTMWYZPOBQFLEUPHEOUMBKVRYDR");
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
    msg.setTimeStamp(0.4463620058537673);
    msg.setSource(21501U);
    msg.setSourceEntity(228U);
    msg.setDestination(55869U);
    msg.setDestinationEntity(48U);
    msg.id.assign("WFOVBNWRYZJJGABMTHMZHNXTRDGECZJTRJEVZAPIINISXOFWBJYBKBLGOMZUXGUPVAPUDVGCXMJWKSEZCWUBWGPPNTLHFYENOXGLKINLHCUGTSPVDHZKGQKBFINXURXFCKQUPINQSDQQSIKKJSQSQFAHMYDMAVEOCXLXCTXRLYZUQEOKTFDZUPEVLEQSD");
    msg.sensor_class.assign("RUYKJVGAICZKYODWDFKXXPAVZRNTGEYSSEKPYMBBOTSMOOQJAJFVMDILBPJGNAHCMLQYAUYQRZOKUJIZIBZSBUKMHNGCZVWDWEIIHFXOFZUZIHCWFCQPXWMPSULRLXFTVVGHELGQNELBEPMCQZRQUAWDERNFUWXRROPTNIAKLIURTCWNCTFNCRHLEYUQKHVSVJZSTPDVOAGYGHDWWLPTQ");
    msg.lat = 0.4752655947294985;
    msg.lon = 0.9286444736671484;
    msg.alt = 0.7281428775071221;
    msg.heading = 0.08980001923599712;
    msg.data.assign("HXHJSRUHIVAFALROANRSRNJBLAXBZJKLOIUTQFGQDWCWXVSLANCWNKIKHIQVGNXYXPUMQNJDIDHHFPPMTCIIYYVTPFZWYNSJZFYGZSRPVRDSOTPSVLBUELRAYCOEUMRIGKXHQTDOWHJVFBSGETJKWQZBNCYUMEFEJBZTWFQAUXCOEGDLAENCOLEZARTQWIZPSYDPPDYRMHMUVLBKKCTPXIGQBCEHVZXT");

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
    msg.setTimeStamp(0.3843509477502003);
    msg.setSource(45169U);
    msg.setSourceEntity(122U);
    msg.setDestination(25819U);
    msg.setDestinationEntity(17U);
    msg.id.assign("BEOJQCLHMDNYYLSCSEVSOEVFDQXXMRMECZWBYZEIRVVLXQJRMUDPBBHKKTZAJMWIQKPSZGRWMAVYOWUQSMHSTTSGNYTIRJMUCYBALYCJTGMQOSVEWRNPZWCTUXABFW");
    msg.sensor_class.assign("ATMARQUBPGKJCYKNWCCADHWBDEOKMGLWQSFYIYVRELQPIHFRQZDJUSMMKZQWFCOQEGMNROXAZTGIAUPHGBZNDJRPJAOSYUWACZYJXBLVZJPFCMWVEWNLNSKSLUSGEVGQMHNJXHWAMCTYBEQSILGIBXNUSTYYRPDRPTVYJIVFAOZDXHXSDIULGCNUQXDTQKZMPOTHVDKFIDERBEOXLSBVIOXUEXH");
    msg.lat = 0.6620503278889308;
    msg.lon = 0.49724307305926674;
    msg.alt = 0.759716843900864;
    msg.heading = 0.37615891258301926;
    msg.data.assign("HTMNZGHEHYPWBFSSTZIVUYXJOQJRWHXMVXVILTFQNXWVKZKXRYEHKBQTYUUUCDELVEGRAMOJKJCVBNQKBNFFDTCWYWBNJKLSKIGQXGCZNZIECPSBGTWAIKNSTDADULPVLLAJMYJMRZSSWDRABSDA");

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
    msg.setTimeStamp(0.9192519729201174);
    msg.setSource(15281U);
    msg.setSourceEntity(96U);
    msg.setDestination(18475U);
    msg.setDestinationEntity(34U);
    msg.id.assign("YUQBFZRRFNDQYOOHCVAHROYZLWAYFDXUPPVWMXUWGATDSCDKCJBVRBAAWJDNZBJTBRXLGSUACYXUUKRGSDZNPZNTWNQLJWEIQMUUDBVDBEZAVXFCYRATPNKVQJNTNMSBFLOECMHPIQRVVGJCZXEPLOCPGQQAHFOGLMKKHLJDTSBMSUIKWOKGQVLDGXHIRLMSXSXTMEHTP");
    msg.sensor_class.assign("VDCBRGFEIJUGMODEPESSNYKFSTBBFSOJCIRPBJDXDQPQNVBDLFNLTEHYJUOCCAF");
    msg.lat = 0.9947470065024664;
    msg.lon = 0.4833539948661174;
    msg.alt = 0.4001264894040599;
    msg.heading = 0.25405733438436917;
    msg.data.assign("QPHGMTVQCSVLEUKXJTEIBLLAFQPEZMIRNYPRESNIAV");

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
    msg.setTimeStamp(0.5154696860253016);
    msg.setSource(58613U);
    msg.setSourceEntity(128U);
    msg.setDestination(22343U);
    msg.setDestinationEntity(41U);
    msg.id.assign("UBHBKKPRZNBFXVCTKTTKWPCEYGQAFJOFVYCLEOQKSHFUJZYPNRRQPLGSPALHAACVMYJHQPBOWEWBSKGZZXDHOZRGEWOBXLHIPGFDPBIFXRGSZXARNONYCUJKCG");

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
    msg.setTimeStamp(0.9802233049042309);
    msg.setSource(7273U);
    msg.setSourceEntity(209U);
    msg.setDestination(5463U);
    msg.setDestinationEntity(186U);
    msg.id.assign("XUANBCZOXUJYEEIZXECIZWBKSAPVFTZRRUHLKFHFBRCVSYFSDGSIFBCMMLHJXZOCWFOUEWWLLQBYOCYWOVMVRZNNKRKJUYGVGVJFQVLJBJPKRKGDSXDAQOWYTDHTNYNZAIBOSWBHTFDPCKUILTYXNQPDDINJWSFSSZKHJSHLIWAPTOHVPLZRPQCWUEZPELRRMNGEQQJGTQHHBCAMODGMIFQDATMEAUXXIJGNCPYXMKNOMVPTEDEAGAGRBVLM");

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
    msg.setTimeStamp(0.8221502164513841);
    msg.setSource(42771U);
    msg.setSourceEntity(162U);
    msg.setDestination(16937U);
    msg.setDestinationEntity(150U);
    msg.id.assign("SERGDQMKGSOTNFFDDZPBOMATPVCGHDWZSUOASUIGQELWQTNPEBYHCYLUOEGLVCAURAZWBIIWOXOMSKJUIYZKHZGWOXRIDJDQECNXRFBAPSAEZFJLQOHMZWZJRPHLPWRHGOKGVDKXFRULUTIUMNVSYHXSZTRJJOUJEDKKBAQYCQTMHKHICNWFFJFWETEUAGNRBSMPQIZXYHBAJLJKYXCNIPMPSGNLDREBPVVCWXLBMDML");

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
    msg.setTimeStamp(0.005371251619427531);
    msg.setSource(19018U);
    msg.setSourceEntity(35U);
    msg.setDestination(50858U);
    msg.setDestinationEntity(89U);
    msg.id.assign("WFEOVOEUHCAXFDWWPNSDZNQATTYSCKEZIQAHVFHKGALGMODBIKRMXTQROICSNDGDNASRTNWGRANAPYHBJHFULJFZBFLXYLWPYTEGXPLXGKJBKYDUMYZYIAIUIJHXRQXCCTIKOBTQLYJECKNVMCRIPNFUIUMNJZTDJQLSMHLMOGWSOBWDPCJZFMRDBHXURLSXEBHFZVFMUE");
    msg.feature_type = 181U;
    msg.rgb_red = 178U;
    msg.rgb_green = 42U;
    msg.rgb_blue = 46U;

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
    msg.setTimeStamp(0.6704522058176);
    msg.setSource(9127U);
    msg.setSourceEntity(52U);
    msg.setDestination(60913U);
    msg.setDestinationEntity(150U);
    msg.id.assign("WDSXIHESBJFEHQXJJPTVKKNNRBAVSLWMLREUWPKHN");
    msg.feature_type = 86U;
    msg.rgb_red = 247U;
    msg.rgb_green = 90U;
    msg.rgb_blue = 224U;

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
    msg.setTimeStamp(0.06301807862018105);
    msg.setSource(30399U);
    msg.setSourceEntity(221U);
    msg.setDestination(5731U);
    msg.setDestinationEntity(84U);
    msg.id.assign("IQIGAWRHFNMOZZXQCYDBLVBFIEZRBEMHLQWFNIPRJUBENMHUMNELJJVDTFSREOOKYQJPODYDCXHFFZPXCDNRDOJMAJWGAPNUTVGOUACHXRLVIAWQ");
    msg.feature_type = 60U;
    msg.rgb_red = 145U;
    msg.rgb_green = 3U;
    msg.rgb_blue = 206U;

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
    msg.setTimeStamp(0.7359910768064382);
    msg.setSource(40395U);
    msg.setSourceEntity(167U);
    msg.setDestination(23346U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.2511255897953124;
    msg.lon = 0.6418944699872036;
    msg.alt = 0.9214390721786619;

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
    msg.setTimeStamp(0.08999938834147958);
    msg.setSource(5721U);
    msg.setSourceEntity(158U);
    msg.setDestination(13074U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.6570637082404365;
    msg.lon = 0.911534580821775;
    msg.alt = 0.7136450826862255;

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
    msg.setTimeStamp(0.953670711374748);
    msg.setSource(2961U);
    msg.setSourceEntity(163U);
    msg.setDestination(14188U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.9193511524081661;
    msg.lon = 0.09200626509749377;
    msg.alt = 0.6583196981789046;

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
    msg.setTimeStamp(0.8834297101895111);
    msg.setSource(12680U);
    msg.setSourceEntity(186U);
    msg.setDestination(61274U);
    msg.setDestinationEntity(73U);
    msg.type = 172U;
    msg.id.assign("MDTJJCRDFLQCLKWGXSIOKZXWGQXBFMLKESPTNAI");
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 197U;
    const char tmp_tmp_msg_0_0[] = {79, 81, 29, -108, -52, -27, -17, -56, -3, 55, 51, -84, -58, -105, 42, 39, 84, -6, -64, -128, -127, 42, -9, 57, -90, 85, 52, 70, 24, 65, 12, 31, 100, -92, -67, -105, -120, -120, 36, 93, -30, 41, -83, -9, -56, -93, -116, 111, 86, 51, -55, 16, 79, 3, 119, 100, 20, 53, 51, -88, 70, 30, -37, 29};
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
    msg.setTimeStamp(0.19501751448273963);
    msg.setSource(55141U);
    msg.setSourceEntity(3U);
    msg.setDestination(30003U);
    msg.setDestinationEntity(26U);
    msg.type = 61U;
    msg.id.assign("FFZRETITGXYVMPHYMNEZESISEBDQRAYCOYWNGQGBKFSBGKGLINGQHPVUIAUSSZXGAVOOTYMKAWJIFMJWLRWWFLSMBXECJFYRDU");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 52160U;
    tmp_msg_0.lat = 0.49856057715765956;
    tmp_msg_0.lon = 0.09853896315502597;
    tmp_msg_0.z = 0.24422365880604413;
    tmp_msg_0.z_units = 26U;
    tmp_msg_0.speed = 0.6430167302897134;
    tmp_msg_0.speed_units = 213U;
    tmp_msg_0.bearing = 0.14093861717049516;
    tmp_msg_0.cross_angle = 0.5905396180536283;
    tmp_msg_0.width = 0.6094252123443258;
    tmp_msg_0.length = 0.0674186827562312;
    tmp_msg_0.hstep = 0.21845248017828833;
    tmp_msg_0.coff = 173U;
    tmp_msg_0.alternation = 50U;
    tmp_msg_0.flags = 203U;
    tmp_msg_0.custom.assign("EUJVKCKJEDYDTOMIRIJWBXPZFMTRTLQSKKDGNQVRXTIPVKYILHBWEQZGRQJYDXHBPSVBFNOUZYMYOQXCGWPWPCCGEUUJONTVDMPVUDQTWNDFCXCDSPJLSICHAIUHYHXSMBDRLNNCMALHVNUXIAJLSZSKFENQYBTXBFPAPFJFSKGWSUYMZ");
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
    msg.setTimeStamp(0.7261697483116593);
    msg.setSource(19940U);
    msg.setSourceEntity(113U);
    msg.setDestination(57957U);
    msg.setDestinationEntity(224U);
    msg.type = 85U;
    msg.id.assign("OFGRDITBZKOBFHNWMAQKHGHQZURCMLGWEVRIKE");
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.6887289619759822;
    tmp_msg_0.lon = 0.21231405401925096;
    tmp_msg_0.depth = 35U;
    tmp_msg_0.speed = 0.07856943363150926;
    tmp_msg_0.psi = 0.29194379985736685;
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
    msg.setTimeStamp(0.18047604853755594);
    msg.setSource(23273U);
    msg.setSourceEntity(45U);
    msg.setDestination(59333U);
    msg.setDestinationEntity(251U);
    msg.localname.assign("YDXEYMPRKYVCKCPEOZISRQBTMABIKVHXEHCRYMQVJPNPHIAAQVEOGKTEMWOZMGEHFLLETVGMUMIJYWVIXZHDUCZHFUOYDTFDVGWPJWZORTXJJXSDTZSEPLXQIFORKQUQKDSWICWNLAYTFWSJBGLJALVFRHWRNSURBDHEKFDAUXQSUGVNJNACXFPJCAA");

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
    msg.setTimeStamp(0.9478036867836942);
    msg.setSource(20958U);
    msg.setSourceEntity(13U);
    msg.setDestination(28823U);
    msg.setDestinationEntity(242U);
    msg.localname.assign("XNARMVFYLLAUYPIQTIAESNWRHBF");

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
    msg.setTimeStamp(0.2612488300008763);
    msg.setSource(7863U);
    msg.setSourceEntity(196U);
    msg.setDestination(23471U);
    msg.setDestinationEntity(127U);
    msg.localname.assign("ATQDCHTQGQRUNCHQBXPNISZAUIGJPAPTOOUBAXUIEPLGMIRJEMBYTCDYRYGLUYRZLBQJXFPGCCEGPSZKUVPZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HMZJZVHEKAGHZFWGXGUBMGRJEFLEPYBOEUQVCMRLDRZVQJIUKPRCKXRSODAHBUYCWRPQIIDLUWNAJSJJECYARBDFVNROTFXPFYFBCHQTCZATZBICXLMOPXQKZJHCXDTCBGLCIVQEFXPTANUINSSOSHTYSLWDMRXWASZWYTDOXGEVUFVJKOKDWMLYPOEWDUVIYBKYZJVOPQ");
    tmp_msg_0.sys_type = 227U;
    tmp_msg_0.owner = 55160U;
    tmp_msg_0.lat = 0.6364214925491637;
    tmp_msg_0.lon = 0.3681931475621244;
    tmp_msg_0.height = 0.13746518686179643;
    tmp_msg_0.services.assign("SWCWZMKNVWBWISDRUIQLCRBOWTEETVLOAHUJELZNIRJPMSNTDFFBBNSTGYAOAZRRMXJVSFPUGTUYCDEZLHOGFL");
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
    msg.setTimeStamp(0.8364535108218301);
    msg.setSource(1557U);
    msg.setSourceEntity(31U);
    msg.setDestination(29471U);
    msg.setDestinationEntity(71U);
    msg.timeline.assign("CQRHNAQGDQCMKPXQFESVRWWFHNGLMLUZRMKDAZPZBRYQHBZLOTLPKKWROXTHJDTZMHBTISMBFCIFICEPFWPEAPVNIJWCBMFEDRKSVMZPINLRXSIIRVAYXPJIHSGEEQSLBYYCUAXYCXNYKJHZTNVFRKAAZJLOGGJHWVWYOIQWQEKYBXMETQTEEUVOKCUNPBZBJODAWQSHFUVCYOXJLFONGUWHJOJXZRNIDUXAVG");
    msg.predicate.assign("WYUCUFINDPLGKZPPXLQXWLRLHZWDQRDXTNRNGQMVKAFSJODKNEUFCRJVHZFXCVVBFIZBAMIKYGZDYTMLXYEKDVVSHPHKQZNASZVQPIVFQOWDLGCUCJTJJPRNRUYINARBMEUZSIJALHOWXEEXGOZVBLYOYHRMMUGCFFQOQIOTDEKQSTALXBWCAWRN");
    msg.attributes.assign("YLVORKKPFZQYRQHCCMYWAVJGOEQWUTJZKTPTWQQDLLSGFEOPMFXUNUAVAPUOWSF");

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
    msg.setTimeStamp(0.42854217581084963);
    msg.setSource(11065U);
    msg.setSourceEntity(9U);
    msg.setDestination(56113U);
    msg.setDestinationEntity(237U);
    msg.timeline.assign("UWKXRWBSCPWRVDATVHPEQNECBRLFQAXALIOMBOSMBEODYYTFURENXJCLNWKUFTYHSIBJJKZMRKJYSGHYXHVRAKMVVDCFZTKPUALEQGLZDQIOIMZQJNCAW");
    msg.predicate.assign("FJPOLUTRHZYHMUIBXPLGOSCAJEFZIRGCKBHNUMTVCIZKIEBWJXVSPJURABYDPNCNVMTARNFRXZZCFZIPQLGSOOVYLRXOBOZEUFPGTQIYLX");
    msg.attributes.assign("APSRZFWMNZXGMKWHJETJPTQFDBKJSDCGGTOVNIJLSGSLJDMYFEGHCBURBQVWFWIPHHUSGKQX");

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
    msg.setTimeStamp(0.46001709984120565);
    msg.setSource(37065U);
    msg.setSourceEntity(94U);
    msg.setDestination(61216U);
    msg.setDestinationEntity(204U);
    msg.timeline.assign("UVERQXDBTFMHHWODBHQGQFTZPEORULMNUTWPSZYCAAZMKXCEGFOLYCRAXVRDJNJTFEXKE");
    msg.predicate.assign("OTMLXXNLNJPMRTVZLSDAEXRPFSEYEEXHQUCHHXDBTIWOYPCIHFJNMCAVDWZOVUAOJVTKRUWZCLFGTWZBXCWVMKQUKDGZBUYPVVWYAAHVJW");
    msg.attributes.assign("MFHCKDVHPDPTWUXPJORHVJVMOTYNMNSMILWIURFWLXAUHCBYDJBEOGYIQCCBQZNSEDJUXECLIUOIMWWFYZSNJZRBAGVPVTRLJOSOTJKQURGMZDKTAULFHNMAYWUDEJKEBLQHXYUJFYXGKBHREBGFABQJDQXRIZSWMIKQCDPGNXEEATIGMCNHPGEQPPTQTRBPILQSAZOLXTDYYSCRTFUOROFFNVKDLXH");

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
    msg.setTimeStamp(0.3795381866807077);
    msg.setSource(63062U);
    msg.setSourceEntity(210U);
    msg.setDestination(60982U);
    msg.setDestinationEntity(127U);
    msg.command = 115U;
    msg.goal_id.assign("MHXPAZOWVQRBOBJKHGAMXWXPTNKUWGRTRJBNEJAVSIGHONDDXYTLAYHUCWZFOPRQXLOGLFLEITVMQWRSFIFKDRNZQIDVYNQMPVGUIPAZRDISMLPSPEWPMULBYCLZA");
    msg.goal_xml.assign("TSVLPDHOGDUWFQQVRKJLOYCYRDIGOECTXVYXKTZFOGCBPXRRVMSSCQWSHQULIPEMDMKZDRUSUCTJDQCBULVZPVTHPTLPAKXJHRYGWLSVKDBIQPIMJXB");

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
    msg.setTimeStamp(0.2633668586231118);
    msg.setSource(55308U);
    msg.setSourceEntity(216U);
    msg.setDestination(54256U);
    msg.setDestinationEntity(64U);
    msg.command = 228U;
    msg.goal_id.assign("JFQPYWJMONOPFIJKPTBGXCBZCIFDNHRGCULYDAWFFMTBURXVQDDSEYINEACQVQANMOZVCFXIZMGJBJOYARPSWDMSDPUQGGUTVCTAJKJAHFPDPVEORJFPBUZTEB");
    msg.goal_xml.assign("JBDHIOVZOLPLMYOGVRWWLMXKRFXBVRKSCFJUDQWNCNEZXWVUIQTQEHROFAJNMIZAOGIEMQFYDWODIADGXYGTJTOYADHBNBEGGOYGNSJXLDKSDLQLPECUFWRNKXQRJHTFUMEPWSKPNHWSBHVVZIULCHTDMABWPVDKEXKXLFTCCUHGSZCAMSMXZYCEQFPLKNUSRFYJAQLBRIPJUZPZ");

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
    msg.setTimeStamp(0.3683176646970807);
    msg.setSource(36507U);
    msg.setSourceEntity(244U);
    msg.setDestination(7598U);
    msg.setDestinationEntity(146U);
    msg.command = 101U;
    msg.goal_id.assign("BNBDGDXSFTULMPSCOWJVQRLEDKLNPBDDYPRHTMGPRFFNI");
    msg.goal_xml.assign("UMQSJVGQHTWXCYASTAELXWZFRYLFYULQKDCZJKIOCVZKRABGDFPCHHPHDLQXMBGPOXHJIHLJNQZAFQKXUEINZMKRRVZRWLDBMCJVIGAONDXFDKIZEFDWPBUSBJTQIGNALBUYYSDQMDCVBJEGGARKMTJMUPXJWYTOVKEKNIEOLZYFLNPWSFS");

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
    IMC::VideoData msg;
    msg.setTimeStamp(0.24627761688051475);
    msg.setSource(13990U);
    msg.setSourceEntity(28U);
    msg.setDestination(25994U);
    msg.setDestinationEntity(103U);
    msg.id = 54U;
    msg.width = 62962U;
    msg.height = 39897U;
    msg.widthstep = 958U;
    msg.channels = 161U;
    msg.depth = 172U;
    msg.finaldata = 233U;
    const char tmp_msg_0[] = {-117, -48, 88, 91, -44, 28, -65, -60, -35, -89, 41, -111, 74, -71, -68, -41, -103, -32, 101, 30, -41, -103, 44, 67, -105, 9, 47, -118, -35, -67, -113, -37, 25, 7, 53, -34, 57, 117, -92, -36, 9, -82, 47, -83, -121, 77, 100, -94, -19};
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
    msg.setTimeStamp(0.5149567979082861);
    msg.setSource(15134U);
    msg.setSourceEntity(139U);
    msg.setDestination(58159U);
    msg.setDestinationEntity(235U);
    msg.id = 30U;
    msg.width = 15368U;
    msg.height = 61894U;
    msg.widthstep = 13975U;
    msg.channels = 177U;
    msg.depth = 114U;
    msg.finaldata = 144U;
    const char tmp_msg_0[] = {102, 15, 90, -104, -48, 75, 74, -1, -14, 20, 109, -81, 83, -82, 22, 8, 70, 78, -27, -118, -77, 41, -8, 97, -93, -58, 10, -7, 91, -100, -31, -15, -15, -108, 58, -81, -92, -7, 18, -7, -67, -30, -15, -104, -115, 17, 45, -88, 64, 77, -75, 72, 29, -28, 73, 113, 34, -31, 47, 49, 74, -72, -33, 34, -63, -107, 0, -41, -113, -116, -103, 83, -57, 64, 48, 87, 35, 3, 108, 114, 96, 2, 60, 12, 66, 65, 99, 124, 5, -24, 99, -35, -26, 3, 73, 26, 43, -19, 42, 124, 114, 109, 50, -47, 14, 86, 76, 100, -123, -122, 116, -79, 107, -104, 69, -3, 82, 72, 12, -61, 34, -63, -81, -94, -1, 48, -20, 25, 53, 64, -115, -75, -102, -67, -6, -5, -105, -99, 115, 41, -73, 64, 100, -16, 8, -115, -58, -52};
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
    msg.setTimeStamp(0.8688180665061953);
    msg.setSource(28834U);
    msg.setSourceEntity(202U);
    msg.setDestination(25153U);
    msg.setDestinationEntity(234U);
    msg.id = 116U;
    msg.width = 62891U;
    msg.height = 40750U;
    msg.widthstep = 22816U;
    msg.channels = 244U;
    msg.depth = 157U;
    msg.finaldata = 112U;
    const char tmp_msg_0[] = {-121, 40, 106, 75, 58, -7, -47, 88, 6, 15, 115, 85, 5, 125, -91, -62, -64, -96, -57, 126, -104, -52, -9, 1, -122, 30, -57, 80, -24, 62, -49, 22, -108, -74, 63, 38, 22, 10, 43, -13, 85, -51, -7, 89, -110, 100, -93, -120, 66, 60, -9, 83, -29, 74, -95, 100, -58, 22, 52, 0, 33, -12, -99, 92, 83, -109, 62, 85, -71, -45, -1, 50, 82, -29, 36, -103, 122, -82, -115, -63, -39, -109, 94, -88, -62, -93, -41, 46, -48, -113, 6, -61, 28, 28, 104, -75, -18, -48, -44, 97, 4, 94, 59, 6, 61, -113, 7, 59, 68, -4, -67, -52, 1, -24, -76, 119, -9, 99, 103, -92, -102, -125, 76, 35, 64, -4, -36, 124, 110, 88, 110, 20, 117, -124, -112, 18, -3, 37, 117, 22, -50, -122, 88, -117, -64, 24, 97, 53};
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
    msg.setTimeStamp(0.8295855878615058);
    msg.setSource(50362U);
    msg.setSourceEntity(173U);
    msg.setDestination(17168U);
    msg.setDestinationEntity(234U);
    msg.width = 57617U;
    msg.height = 1648U;
    msg.channels = 48U;
    msg.depth = 221U;
    const char tmp_msg_0[] = {-18, 28, 67, -93, 39, 99, -18, 1, -12, -51, -16, 82, -34, -4, 58, -56, -97, -55, 67, -45, -84, 119, -45, 10, 104, 82, -5, -76, 52, 43, -27, -35, -121, 49, 11, -14, -15, -92, 53, -64, -12, -122, -128, 61, -96, 119, 37, 29, -33, -75, -49, -7, 66, 106, -120, -49, -70, -84, -109, -110, 42, 63, 43, -17, -45, 60, -25, 44, 47, -102, 81, -75, -101, -92, -99, -103, 60, 107, -15, -65, -21, -109, 43, -54, -92, -74, -81, 124, -13, 90, 17, 65, -46, -124, 72, -44, -55, -44, 47, 43, 101, -43, -4, -93, 29, 60, 95, -64, -111, -20, 57, -76, -93, 75, 86, -40, -91, -48, -102, -125, 3, -109, 91, -122, 73, 50, -103, 69, -69, -54, 43, 1, -10, 67, 106, -43, 6, -100, -88, 56, -72, -53, -112, 72, -56, 52, -61, -109, 7, 125, 58, 23, 73, -1, 75, 79, -34, -61, -58, -39, 99, -53, -69, 85, 26};
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
    msg.setTimeStamp(0.847841683694435);
    msg.setSource(22809U);
    msg.setSourceEntity(199U);
    msg.setDestination(29101U);
    msg.setDestinationEntity(231U);
    msg.width = 37025U;
    msg.height = 31096U;
    msg.channels = 7U;
    msg.depth = 192U;
    const char tmp_msg_0[] = {7, -104, 11, -30, -12, 39, -85, -83, -19, -117, 121, 96, -48, -35, 73, -123, -31, 37, 106, -27, 10, -100, -122, -83, -71, -98, -122, 113, 18, 64, 50, 65, -66, -80, -52, -33, 52, -85, 7, -94, -72, -45, -43, 35, -45, -124, -51, -2, -23, -89, 16, 111, -65, 21, -42, -106, 16, -70, 100, 42, 105, -99, -61, 34, -46, 38, 0, 80, -94, -116, 26, -10, -12, 112, 33, -113, 31, -104, 77, -92, -22, -97, 115, -123, -102, 80, -75, 56, 36, 7, -52, -48, -74, -93, 71, 77, -70, -10, -115, -52, 71, -8, 2, 67, -106, 121, -124, -51, 25, 126, 126, -36, 103, -89, 19, -25, -123, -53, 26, -42, -92, -71, 17, 32, -118, -99, -90, -61, -91, 7, 81, -126, 118, 125, 74, 20, -41, -128, 37, 5, 18, -74, -113, -67, -20, 26, 126, 37, 43, 77, -44, -84, 82, 16, 76, 16, 37, 91, -9, -15, 80, -106, -20, 5, 111, -86, 82, -18, -33, 26, 91, 21};
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
    msg.setTimeStamp(0.43089521953082155);
    msg.setSource(54533U);
    msg.setSourceEntity(106U);
    msg.setDestination(63719U);
    msg.setDestinationEntity(1U);
    msg.width = 34068U;
    msg.height = 19627U;
    msg.channels = 159U;
    msg.depth = 240U;
    const char tmp_msg_0[] = {-86, 111, 112, 99, -84, -62, 36, 38, -25, 117, 31, -81, 26, 83, -115, -68, 111, -71, -73, -100, -123, 125, -69, 102, 12, -68, -43, 49, -128, -108, 27, 108, 44, 96, 27, 28, 108, 75, -54, 122, 10, 74, 120, -30, 76, 23, -29, -4, 101, -127, -76, 31, 85, -118, -42, 86, 23, 106, 55, -38, 80, 116, 27, 82, -33, -53, 117, -7, -98, 99, -1, -34, 74, -46, -126, -24, 86, -113, 100, 77, -39, -35};
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
    msg.setTimeStamp(0.2375678915598738);
    msg.setSource(7812U);
    msg.setSourceEntity(163U);
    msg.setDestination(22739U);
    msg.setDestinationEntity(207U);
    msg.frameid = 114U;
    const char tmp_msg_0[] = {-61, 89, -43, 125, -65, 125, 49, 115, 107, 36, 64, 8, -37, 57, -53, 81, -22, 21, 99, -121, 70, -13, -41, 87, 4, 59, -57, -81, -44, -102, -32, -11, -122, 11, -112, -120, 121, -8};
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
    msg.setTimeStamp(0.2975984719604704);
    msg.setSource(4025U);
    msg.setSourceEntity(70U);
    msg.setDestination(32800U);
    msg.setDestinationEntity(174U);
    msg.frameid = 121U;
    const char tmp_msg_0[] = {83, 25, -73, 9, -41, 126, -57, -6, 63, 114, 17, -29, 17, 120, 11, 61, 27, 98, -120, -115, -46, -85, -62, 102, -38, 53, 55, -32, -36, -48, -126, -50, -34, -19, 53, 99, -82, 111, -106, 6, -53, -37, 92, -62, -6, 122, -24, 82, 20, 12, 38, 89, 125, -85, -18, -37, -109, 55, -114, -83, 23, 61, -21, 43, -48, 89, -55, -63, -106, 8, -70, 101, -96, 17, 6, -32, -26, 53, -13, 104, -65, 45, -72, 19, 122, -46, -59, 120, 31, 8, 56, -27, -84, 90, -35, 11, 0, 23, -50, -26, -50, 21, -28, 44, -101, 27, 20, -117, 112, -54, 43, 106, -81, 82, -56, -14, 112, 120, -20, 64, -53, 5, -53, -92, -120, -119, 61, 52, -108, -109, 8, 97, 39, 94, 103, -106, 83, 110, 99, 113, -28, 9, 123, -28, -121, -96, -53, 12, -83, 37, 111, 17, 82, 82, 105, -7, 94, -65, 28, -58, -20, 123, -75, -102, -92, -56, 51, 74, 30, 24, 5, -68, 120, -87, -17, -11, 35, 5, -120, -7, 5, -55, -114, 70, 115, -42, -11, 121, 110, 62, 3, -102, -118, 14, 16, 49, 122, -86, 8, 52, 65, -47, -57, -57, -44, -42, -79, 85, 88, -62, -40, 21, -123, -31, 102, -125, 84, 53, 126, 38, 10, 64, -65, 35, -21, 51, -12, -9, 100, 10, 12, 113, -101, -66, 115, -15, -37, 116, 1, -119, 55, -56, 65, -84, 35, -9, 115, 70, -74, -62, 103, -84, 49, 51};
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
    msg.setTimeStamp(0.5106762385630708);
    msg.setSource(50427U);
    msg.setSourceEntity(217U);
    msg.setDestination(3746U);
    msg.setDestinationEntity(57U);
    msg.frameid = 74U;
    const char tmp_msg_0[] = {60, 28, -50, 125, 90, -50, -20, 12, -15, 7, -59, 89, -96, 45, 11, 68, 108, 89, 52, -47, 122, -28, -80, 30, -69, 91, 86, -101, 80, -4, 46, 36, 85, 22, -123, 123, -64, -24, -32, -53, 42, 79, 0, -57, -79, 96, 64, -28, 84, 104, -30, 45, -105, 95, -40, 79, -70, 46, 96, 94, -38, 84, -35, 121, 0, -27, -30, 126, 17, -69, 76, 89, -79, 69, 27, -56, 66, -63, 108, 91, 65, 104, 106, -104, -5, -62, 85, -44, 63, -61, -115, 46, -30, 31, -89, 58, 68, 126, 9, -77, -48, 10, -118, -108, 100, 42, 6, 114, -127, -119, -32, 56, 120, -64, -42, -6, -88, 36, 39, -111, -117, -73, 55, 6, -16, -50, -128, -5, -118, -54, 35, 19, 87, -70, -81, 52, 52, 61, -53, 115, 112, -1, 83, 50, 15, -7, -89, 25, 9, 27, 66, 108, -13, 68, -112, -3, -114, 101, -127, -55, -11, 14, 22, 30, 107, -109, -38, 37, -60, -119, 45, 27, -109, -114, 111, 120, -11, 35, 101, 4, -64, -99, 53, 95, -89, 70, 66, 66, -11, 125, -65, 102, -64, -120, 2, 106, -18, 43, 25, 76, 111, -35, 2, -6, -57, -92, -74, -107, -21, -3, -62, -17, 6, 63, -59, -84, 124, 117, 37, -115, -19, 0, -93, -115, 41, -17, 117, -85, -40, -95, -12, 124, -5, -5, -59, -43};
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
    msg.setTimeStamp(0.6337000339257707);
    msg.setSource(53091U);
    msg.setSourceEntity(51U);
    msg.setDestination(22754U);
    msg.setDestinationEntity(160U);
    msg.fps = 155U;
    msg.quality = 77U;
    msg.reps = 144U;
    msg.tsize = 244U;

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
    msg.setTimeStamp(0.2466681368770226);
    msg.setSource(3465U);
    msg.setSourceEntity(22U);
    msg.setDestination(27293U);
    msg.setDestinationEntity(192U);
    msg.fps = 169U;
    msg.quality = 42U;
    msg.reps = 227U;
    msg.tsize = 154U;

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
    msg.setTimeStamp(0.6892982072233172);
    msg.setSource(7083U);
    msg.setSourceEntity(116U);
    msg.setDestination(10457U);
    msg.setDestinationEntity(98U);
    msg.fps = 253U;
    msg.quality = 208U;
    msg.reps = 76U;
    msg.tsize = 21U;

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
    msg.setTimeStamp(0.5038557619212615);
    msg.setSource(32877U);
    msg.setSourceEntity(193U);
    msg.setDestination(54716U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.5503727256683243;
    msg.lon = 0.5465217107306408;
    msg.depth = 40U;
    msg.speed = 0.7212156554970165;
    msg.psi = 0.39387487928599785;

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
    msg.setTimeStamp(0.22000362482134572);
    msg.setSource(56380U);
    msg.setSourceEntity(223U);
    msg.setDestination(46803U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.7836709078591858;
    msg.lon = 0.32845561075685614;
    msg.depth = 139U;
    msg.speed = 0.36905264648097824;
    msg.psi = 0.0525493096102122;

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
    msg.setTimeStamp(0.6077996967918201);
    msg.setSource(53223U);
    msg.setSourceEntity(11U);
    msg.setDestination(34502U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.5040542549999393;
    msg.lon = 0.507231260948528;
    msg.depth = 123U;
    msg.speed = 0.41313742994312386;
    msg.psi = 0.13031090955948488;

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
    msg.setTimeStamp(0.2082567028816369);
    msg.setSource(9042U);
    msg.setSourceEntity(141U);
    msg.setDestination(53081U);
    msg.setDestinationEntity(166U);
    msg.label.assign("KMVNOSTCKCSGRYROJZNYGMAOBNGBQDEFMUWQSEDXYYNVW");
    msg.lat = 0.26594053018457287;
    msg.lon = 0.10847363766036766;
    msg.z = 0.9873787156738985;
    msg.z_units = 23U;
    msg.cog = 0.6292065760228422;
    msg.sog = 0.05950929079432654;

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
    msg.setTimeStamp(0.0700740035751447);
    msg.setSource(23213U);
    msg.setSourceEntity(210U);
    msg.setDestination(44060U);
    msg.setDestinationEntity(101U);
    msg.label.assign("LTDMMMBQYONJIQLJJZOXCIBCKKZVSHWKIQWIQTBGOLKSBVXAQXFATNWEUHGLZHTRAJYVPBKONPPQYBIUNFJFJCROFDHSOVEDONMIIWAWPYJGYWWNGUURZERPTGDZMZJMQAXHYYCJTWRPCUXPWDDVEPLSROGDKLVVNKAXTFUXFSQASKAEBGOVUSYHPWLMSEFXER");
    msg.lat = 0.6721601857001902;
    msg.lon = 0.6008390771172509;
    msg.z = 0.7238661712978556;
    msg.z_units = 199U;
    msg.cog = 0.3171168302450299;
    msg.sog = 0.4280454977808126;

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
    msg.setTimeStamp(0.46632363722578896);
    msg.setSource(56034U);
    msg.setSourceEntity(81U);
    msg.setDestination(65234U);
    msg.setDestinationEntity(38U);
    msg.label.assign("GOYREPCRUBTGAOSOCIDFIPWAQQVMQZNUEKOWAGAUGHUYKPAQJUZPLIBAKMHNXCXYUSHKYMWEHCLMTAGEVBXSRZDETCYDSDTBNHDSWFWZBRPSVWWNHNFDIJBXMRJYMEQRGSRGDM");
    msg.lat = 0.4932625859848653;
    msg.lon = 0.20482988966210114;
    msg.z = 0.19521661716667804;
    msg.z_units = 198U;
    msg.cog = 0.16086187615870762;
    msg.sog = 0.7629401369418147;

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
    msg.setTimeStamp(0.9348499103013219);
    msg.setSource(46524U);
    msg.setSourceEntity(185U);
    msg.setDestination(54670U);
    msg.setDestinationEntity(74U);
    msg.name.assign("IBDHWNTKJZJSWQPMAELQSECPQSJMEJZTYUTYIWLROMPIMEMELUGTDYAXXOQVZUROZDYINVIXDICFOLFFVILQXBXEGRKZTMZJKURRUBMCKRFDODGJCSWQPEYELFAOANGEQICKZVSLPWKSGURZPQIGAYNTBPCAVKNMGUIQHRUBVTSVHDPPLAAARHNTYHNBKBZJFDFJJEUZDLBXHPFOSJWH");
    msg.value.assign("ONQNKXEADSIVZOQDEKZHYHICDQRTQOZEYGEBDPWSLYZMXGTWSSOKCVCRQ");

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
    msg.setTimeStamp(0.7988941370809814);
    msg.setSource(4680U);
    msg.setSourceEntity(17U);
    msg.setDestination(36508U);
    msg.setDestinationEntity(166U);
    msg.name.assign("MSGSLAJJAVWZPMRCABQOFBHLMFVBUUVFAOINAUDYNKJZITVGLSMKPGZNTCTZOLDEJPXSPEHWCOPQVHRXYQXNQYXILLZRJGIYKPAVCLDDDNEBNEAQOPJKFP");
    msg.value.assign("VFYXKIXLSMJPJBJJRDSFVBPFIWUSBLCBQENZQJKDSBLAVTAKQGVVOCNYLWJSDXTGXEDOQKOIOGGGLMEULFHQZZDIVPUCHWEMCTGYOAGHI");

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
    msg.setTimeStamp(0.11866767635129127);
    msg.setSource(61618U);
    msg.setSourceEntity(166U);
    msg.setDestination(7076U);
    msg.setDestinationEntity(130U);
    msg.name.assign("EFFUCKVAUJWSEGDMGJBQMBMSCHIYHKDADDQBVNHRJOLLUSPFNONLWRTTMODCHVVFKYMCDXPWDYWRIEZEZBYTWNNR");
    msg.value.assign("ECUVTDJTTBMFJYGZBYLPVLKVFYZUDBNROOQMYLOPFIRTOAYSWJTEUJNHLHD");

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
    msg.setTimeStamp(0.30562631657136763);
    msg.setSource(26621U);
    msg.setSourceEntity(72U);
    msg.setDestination(47847U);
    msg.setDestinationEntity(122U);
    msg.name.assign("CUNHGVNUXDZBKTJPUPOHPLKASGLCEHLAIINOMLZSCBUCBTPFSTAWYDMOCQXIMMKABJEKKALTIGFIHOOQWAAMJLVRHFJGVQTYKOSRGKUYKHDEZNZVXXFQCGUBSXWXASCWQZJWEYGZQULFXPJQJOVCUPFDIJNSORMIGBPVRQEEGNDAYMBBTWTTNZVMEYOKDZNLZI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZSGQCKMRNENKOHAANYBDJLPATVZIBVPGUCBSPMQHOWFWI");
    tmp_msg_0.value.assign("UNDVIJSPVWFRSHINIGZAVKBWPJCMMNIVTHWZAEYGBQISPPOIEYJLHUATKRBTEKPMYQLIYBBASJAVUZNEFUMSWHQDKMBCVTGCLGBVOZLQLVXEYWQWNSQCFRZNGXTXMNFOSRCNQDLMHJBSJPEJUCKKPKXRJZATZDOUORFQYBCNOXDHNGCGXWXEZFMTUGPUMVFIDYORLXLKKMRWGJ");
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
    msg.setTimeStamp(0.14950827112186837);
    msg.setSource(16210U);
    msg.setSourceEntity(88U);
    msg.setDestination(46811U);
    msg.setDestinationEntity(233U);
    msg.name.assign("MJRCFMVUDMUQKIPMAIENKYIMRDDLSTXDVUDUJRRVWBYAJSCYGSTKCPLVTMHZTIYKVXQDWJHCXOVZHYTNIAWJBBRCZNGQOKXESLKVONPSAHZLUGAOEQLYYXMICPVBG");

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
    msg.setTimeStamp(0.48038668371042126);
    msg.setSource(33401U);
    msg.setSourceEntity(120U);
    msg.setDestination(29174U);
    msg.setDestinationEntity(195U);
    msg.name.assign("MBRVSZBLHMTXDFMUYPQVHRFDDGQVTBKJCYLQIZKERUEWRHQCPFQNQFCIWPBAZQIRTBWDWOTKYVBEOFDXNCXMYHAOOCEXOPOAUMMJWGNENWMFMPIYZLLGSSIJPATIRHLZUHTDOLPIFWLZVXLRKSPQNJKVMFULNGUOBGJPZDCCPZAVUQAQBOWNKHATYOGJEEHAISCEYDRAWNXSJITSKTEBUXMXGSDUKY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("POXFPYRHIGOZEZUQJWLRZLMIBRVNWGIGMKLMKMDMUOFUPWBNFYFQVOEFVQBGYIZJHATCBXOYJINMCXWVTKIJBFOOLPAEDEYNWABLEIMAQJKMBCJIKTSEGXBCCYCNULEBISCNYXEPJJTGDGGTXSYZDDPKDZMDRPZJCHLVUWCWFFSSKDQHVOSNDUPTBURDNFTCQKGAZXWGAHAUPXWFYOLQVVMHKZHSJYVALAUISXTWU");
    tmp_msg_0.value.assign("BKGPJSYZTCXUGLEGQTGWMHPMBNJFOTHYPYJWWHTLVJRKJGETVKPXHHWCAQLLRQLTCWIVAXZWEYZUNBTKFHVDCESBUJKMDWIYNDPTSOIMFZBPGSOEUFUBYUBRCZKZCDOFRIKDNTEWXACARSMJMPXUKRVSLDGIAHXLYQCOUIOUFHLJXGJDRNRFSFONIPQVIODXDQOWFYM");
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
    msg.setTimeStamp(0.2056574769993157);
    msg.setSource(3131U);
    msg.setSourceEntity(131U);
    msg.setDestination(11506U);
    msg.setDestinationEntity(129U);
    msg.name.assign("QVTAEMGDHIHJGHVTEPOVSNYMSVLSBYMHQTYERDWFYUBSDCQJQCFOIYRKDCWCOWSYVXJGBGGKZMZFCGLFBIFLAWXPLZPIKHCIKEZNUMSOHELJJBSEPGRRRTZOEWJJLKWRNWDKMJ");
    msg.visibility.assign("XNRTZYCUIIKRHRCVLGHMMCHVXZEUNFWGBUOLREWQXHXLBDJDNMWBWMAMNDYYLEHBOKJPNZUIHNOZUWTMFNOKKITDWMIRYT");
    msg.scope.assign("VRWOFCVECCQVJRZULUIVODGYXTDKSZALHDWFTUBKDPZGXMJUUIIGKPTCLMCETGMORKPAJNKPMNNQJFQWHVPJBMZCXKGJNMMLYOLGBHWSAVJATBZLTINWCWCGUNUFEIRZTWYCQIMTRQSARLAONESYBLZDNPFDNFRQZBVCAKTYVQYHGZWLIRJHBUBFDISAMESYQOFYGJASZYDUFHXXVOIEQHSNXUEEEFKBPVHRPPAKHQXIWEHMKBXPTOXOODSR");

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
    msg.setTimeStamp(0.08052079552941394);
    msg.setSource(44037U);
    msg.setSourceEntity(238U);
    msg.setDestination(40065U);
    msg.setDestinationEntity(235U);
    msg.name.assign("NSUIWZANTZVFYACEFREXOHPDVPIRSXXLVBXLDFVIYUBNDCOEKNDMZKHGMUQMXGDHSBKKAJGPQFFGZGKIMAVFTRBGJDZCBNXLJTHUXCISGIMSCQDRMPEEJGLPKHQAYENHYOTKOLVGYPWTKJMQSWTEONVSSHUWZRDOIFCFHTWNPLTGUVQIWWMZBYASYLRAKOCQFQHBDTQBUEOVTNOUWMXAWKPXRJARJYEDCUVYHNL");
    msg.visibility.assign("ZIGAAOGYMRAMKLSXCOUMISEMTBXIHNEGUPGGHQETISYOEZEZURFQLBGCPDQBPEIAJYWGAMKHCVLNLVYKNYOVSFQOMDBPAOUPUEPPVFCDRKWNDKPKIFRRCMQSOZWNALQWSDXCWXRLTBIXCVRJPFXJMINQRWDEQJYTZWDTIRYLKYXHSQBJWSTNEFFTHUTZVHKCHLVX");
    msg.scope.assign("IKWGEPLQMYDNBAMYZFRLVXRECVUPKRSAZWBWZMMSVNJFCYDLNYHJSAVJTKBFXVJZVCAKXBBEWSOZVCSLHQWIDFIQNFBQTUPSHBCKDOWRKIDGGQFLYIOAJZEIKJPIZXWADPDEPHVMEIMLPCLATRQUFUNOTPJHKBTMFQEHGVUOLJRCXTTGNTEAMGZSXHFYLCSOUUYQGFOAHUDLCXPRXKVMBGSIUZRHGJNJWTYBDDXTYOPWREMIKNXO");

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
    msg.setTimeStamp(0.9695320320985735);
    msg.setSource(2473U);
    msg.setSourceEntity(122U);
    msg.setDestination(65510U);
    msg.setDestinationEntity(118U);
    msg.name.assign("TNEQTRLJSALTBIYNBOXGPRTUBVHNNCOBVWZCEIWAONAJLXSHHROEDVWFTFVISYPHZUQROPUKRDEKVULXMRXHCFBMUDNNFIXZGSKAZEMGKLGSXNMGSGIJFYOQKBCPKMGWQQNWIUVTPJGCABUXVIFEWIHTTYFWSEHHRHLVDOYOAEVMDWLDPAJOZTJUPQDZF");
    msg.visibility.assign("UHPDIDNPOTGOXGQKUNNFCVQKLQZZBBUFSNYMPMWFVIWNHQPGIGFRLFLBTMEFTXPHRFYXTSZCIAHGSRWQPUZXMGZIVPELYAZWMRUQEMGTRUZOWEWKDTXIMECNNQDYQVKKNVPZBSZKOKODEULGLDIAAHXUXKJWKMSWFBFCAKYDJCWYGAJHLFXBJABJHOPYJOCYCVZRYUDRLELLSWIQHXOTRCRSAYJBJUASSCOEJPVDMIJG");
    msg.scope.assign("SNLFJIZFORIAYUUWKDWXTJCEGQDATAXVLXLEFIWPQXUEIGHYVPQSMWUOMBMGEGULCBKIMWVAVGDOUOZDFNSRTEBCIAJNEUSSHV");

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
    msg.setTimeStamp(0.918555659365286);
    msg.setSource(57496U);
    msg.setSourceEntity(23U);
    msg.setDestination(37296U);
    msg.setDestinationEntity(82U);
    msg.name.assign("GFMWWMDIXYPFNMEDNNJFIXVOCXUYRMNEVXWAZPXGCPAMIBJNLQXWUKQGZRKOEMLPHYHZPULYSCTPATJGCTXVQTOEQSYZZYGZMMKNFWWGBKUFCLFVVOSROSIEBQFQHQLRD");

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
    msg.setTimeStamp(0.027731267953948202);
    msg.setSource(8969U);
    msg.setSourceEntity(8U);
    msg.setDestination(59126U);
    msg.setDestinationEntity(94U);
    msg.name.assign("OAUUYPXLXTERHKMEENZBWPLXEUJJYAVIFXVYBCFXIZBNNEHVQGBTMGUMOPGQJSKAFAGJITAMJCHPWXPCDQOELPYUJQNREDASJNNFASNDSWRULYDYQGKOFSMDMKHGQXKRMQEDTPSVTGCWXOSTVXLPHHIECYFSUHWKKZBWPLRULRWMWENIUQLLCFTAQNRYNOWSDVGTPIIQZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VYPKSRAZBHIHGUFQOLXDPLJTEDPUX");
    tmp_msg_0.value.assign("LLKTDNSTAPOBNVFCXNMBCLKCACWDJICIBYPOBPCYCDYUAFOQETUDZRETSGMAQGEEPSJDZBXQXORWQIGTIWHBWRTNLVKJAWUDKZGGUTDECNMJFFTQOGQVH");
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
    msg.setTimeStamp(0.2820401824682225);
    msg.setSource(12551U);
    msg.setSourceEntity(41U);
    msg.setDestination(20707U);
    msg.setDestinationEntity(94U);
    msg.name.assign("TTIDVGAEVNHBLLUICFCGKALEHMOCBWLGTWRYYQLPDEXCBEQWSPHHKVRLIEMMMDDBZWZRPNIGGYCJKIAHLQTXCQSLVFNUIG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CJTTUDNYJCSVODUKBENQSQAQWXNAARVSLUJBJLITBYRDYMYOBEMPZLJTCGXIGNMOEEFAWQZJGFNRKWEJGORFACQCIYHWDFHRHQZUSIQLLKPZMHHQBYXEYSQNKGVDTIOHZOPMEFNJMLTYXTAULBZBMKAPMZSBPUDYADTXWQRFPOGXHOSHUVXKTUNSWMKZGFCFACRPFIFMPUNOSBKUYXHZRJGDXNZCIPWRXGVWKDLOWHP");
    tmp_msg_0.value.assign("UUNVTBOZZACVABMKDEFBRNPAINRJLGTQRXKOIBLHULXZSKGDPXPGVFAABNGRSVVQAXMDRUMLSXHOESCKJNWJEIDLIXRDWQJUJKEEXQBZXTFCYKBXQEZCJANBYOHKHSTFFLZTZCHOGLNCAOVEYRISGQEVCSXPY");
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
    msg.setTimeStamp(0.0005662398301355953);
    msg.setSource(48248U);
    msg.setSourceEntity(84U);
    msg.setDestination(11412U);
    msg.setDestinationEntity(178U);
    msg.name.assign("QGJZULISFWMVSZDPRXDBWHDMTCWBCAFNIYOCRUYAPLGZZAOWUFRMFLHECIPRNFCNCGARUPMSFIHCVUHXXEASYJZJMYJBLSMCBOJNXRSBMTZPEGZNT");

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
    msg.setTimeStamp(0.2309958794580077);
    msg.setSource(56947U);
    msg.setSourceEntity(46U);
    msg.setDestination(10193U);
    msg.setDestinationEntity(83U);
    msg.name.assign("GCNCXVOQIWTHLUIQYTSFZLBGSDMOQHRZJXKTVEW");

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
    msg.setTimeStamp(0.5997132001132204);
    msg.setSource(61407U);
    msg.setSourceEntity(36U);
    msg.setDestination(39412U);
    msg.setDestinationEntity(243U);
    msg.name.assign("RBWILXQWOJECEJDADPUYMGLYXGOXMFDEMTGANWBOOXCWYCOIYZHQUZSCFGVTDMAZUXHEQBYGBFEBZ");

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
    msg.setTimeStamp(0.35117955548305035);
    msg.setSource(12207U);
    msg.setSourceEntity(235U);
    msg.setDestination(21749U);
    msg.setDestinationEntity(140U);
    msg.timeout = 404874317U;

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
    msg.setTimeStamp(0.9127667154966462);
    msg.setSource(21570U);
    msg.setSourceEntity(10U);
    msg.setDestination(41581U);
    msg.setDestinationEntity(139U);
    msg.timeout = 4275469967U;

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
    msg.setTimeStamp(0.6986847841786555);
    msg.setSource(63286U);
    msg.setSourceEntity(170U);
    msg.setDestination(62125U);
    msg.setDestinationEntity(191U);
    msg.timeout = 1193827155U;

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
    msg.setTimeStamp(0.5502815303438746);
    msg.setSource(32485U);
    msg.setSourceEntity(231U);
    msg.setDestination(35028U);
    msg.setDestinationEntity(152U);
    msg.sessid = 2177070626U;

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
    msg.setTimeStamp(0.8700097398334578);
    msg.setSource(46051U);
    msg.setSourceEntity(171U);
    msg.setDestination(34800U);
    msg.setDestinationEntity(40U);
    msg.sessid = 3078315254U;

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
    msg.setTimeStamp(0.6693231500936255);
    msg.setSource(58140U);
    msg.setSourceEntity(185U);
    msg.setDestination(64267U);
    msg.setDestinationEntity(167U);
    msg.sessid = 3338723509U;

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
    msg.setTimeStamp(0.16675123141982928);
    msg.setSource(1421U);
    msg.setSourceEntity(81U);
    msg.setDestination(13616U);
    msg.setDestinationEntity(188U);
    msg.sessid = 2051213972U;
    msg.messages.assign("FRXCNACHMYRMGGQLCJJIEYLVEEOEBMEWZQQFEJHDFZMHJDUFNCDIXBSHXVVSIQSKJNPKRKHRAMGRAVJCOTYGXYABIFBEAWOFICRPLOVXGKSMOLUNUJNLBTDZWKGMORSWQRLWMUZPWUNWPUMHGPZTAEXUPPTXQBYVLSYOFNDTZQSBSFUVTICZYSLPABICKV");

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
    msg.setTimeStamp(0.7298983477541391);
    msg.setSource(17376U);
    msg.setSourceEntity(97U);
    msg.setDestination(39984U);
    msg.setDestinationEntity(175U);
    msg.sessid = 3793016341U;
    msg.messages.assign("XYXPMCKOGABAFXNCTAXGVCDQJUYUKXOPLGXHFFOOPYDEBNQLYBHUTRDMEGILVBSPFQEAWTGALUWKPZFMOJJTBRLZSWCEEDONFPQNYZICZHNMFKISBPDCZUJQYELHKZUZLWKWVSODMUTVIUJRMCIAIBSJAZZWMQHGDZNSWTSXDVGQXBVXWRBMBIUYYFTIWTAKLSVFTVHRVJHEOXUKTLOGHNPELEJPEJHRVMYWNIDRSANQKDRMIKHCONGPQ");

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
    msg.setTimeStamp(0.1765342058125392);
    msg.setSource(29865U);
    msg.setSourceEntity(151U);
    msg.setDestination(20234U);
    msg.setDestinationEntity(193U);
    msg.sessid = 2234090103U;
    msg.messages.assign("FNCDRUNGCDEQPQLPSOHYALTAGUHGFZJAPUOZIOUKYFPH");

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
    msg.setTimeStamp(0.32216472844718613);
    msg.setSource(13122U);
    msg.setSourceEntity(79U);
    msg.setDestination(58749U);
    msg.setDestinationEntity(225U);
    msg.sessid = 238909536U;

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
    msg.setTimeStamp(0.9784657459904659);
    msg.setSource(16382U);
    msg.setSourceEntity(252U);
    msg.setDestination(42527U);
    msg.setDestinationEntity(230U);
    msg.sessid = 3636031208U;

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
    msg.setTimeStamp(0.3580556217089361);
    msg.setSource(7185U);
    msg.setSourceEntity(104U);
    msg.setDestination(52971U);
    msg.setDestinationEntity(68U);
    msg.sessid = 1587696185U;

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
    msg.setTimeStamp(0.9098437054869591);
    msg.setSource(51U);
    msg.setSourceEntity(220U);
    msg.setDestination(50877U);
    msg.setDestinationEntity(94U);
    msg.sessid = 912263939U;
    msg.status = 79U;

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
    msg.setTimeStamp(0.9855515556024053);
    msg.setSource(10909U);
    msg.setSourceEntity(182U);
    msg.setDestination(57200U);
    msg.setDestinationEntity(234U);
    msg.sessid = 3001228068U;
    msg.status = 21U;

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
    msg.setTimeStamp(0.2457732171926501);
    msg.setSource(51U);
    msg.setSourceEntity(27U);
    msg.setDestination(30178U);
    msg.setDestinationEntity(188U);
    msg.sessid = 3944714869U;
    msg.status = 123U;

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
    msg.setTimeStamp(0.3539271885614321);
    msg.setSource(4284U);
    msg.setSourceEntity(72U);
    msg.setDestination(3249U);
    msg.setDestinationEntity(217U);
    msg.name.assign("ZKYIIZINOTRCUDUOQEHIOHEHFQEMKPTAJHDFIJPSOYVMIDMZMCGMCQQVCSMCGFGSKACVGKSUFZWPLBFOVGFMXKZTEATUKBWWBQVWZOTDMJQBDLWXXRSKRVHIMRDQLEBUOHZDDPPRZRSHPHRXSALOFNBENJLJO");

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
    msg.setTimeStamp(0.612254241003506);
    msg.setSource(64185U);
    msg.setSourceEntity(173U);
    msg.setDestination(52428U);
    msg.setDestinationEntity(230U);
    msg.name.assign("NMTOJQLEBYNDQWBJPGJENZITPBATUJTIREUAPXXDQOCXMZFWGDBJRVZHBRYYMPCLXRLPVKKMDQGNNPIZZPOKZLAOZBEYXDVIOSNUWJYUGDSYSHJHFBWFQMGGRQIFFVSJIOSXGXIUPJCQGSPTARAMAHVMIWHXWUEISWUHHOEEWOLQZETOVKTHKKSYTQLCVRIDCFQVCUKKUJHALXCFLNP");

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
    msg.setTimeStamp(0.3732130673263587);
    msg.setSource(15322U);
    msg.setSourceEntity(235U);
    msg.setDestination(41400U);
    msg.setDestinationEntity(75U);
    msg.name.assign("XXHYUHAJFANMLWZDVKTSDRRYJGJGIDSNWQBQPSBWRKLQJITFFGOXBDEYWMPWSZIHRAZOUYHRUTEPTEBVJEGNYGFNIBCZSKLJ");

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
    msg.setTimeStamp(0.9220595397300602);
    msg.setSource(48084U);
    msg.setSourceEntity(97U);
    msg.setDestination(60866U);
    msg.setDestinationEntity(22U);
    msg.name.assign("SUNDMTARFPQJEIPRHQZGZYHHGXOFARVVQYBTMOXZSEGCKCGWWJBJITJHCJHUOSTQNEFRUDAXAZSKUOVWMLVDSUMYZKQLQXNZLSTEGVDSGKICBPDNAYHKKCZMTXOIVIGNPZOFOWFXDPWMJGIDJCUBLOAETUBUGVLUAZJVHKIUYLNYPSLNIIPYFHYA");

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
    msg.setTimeStamp(0.4436874348349703);
    msg.setSource(37480U);
    msg.setSourceEntity(163U);
    msg.setDestination(21655U);
    msg.setDestinationEntity(217U);
    msg.name.assign("SSCHMVOOUFZGPLLHFXNSRYJWVJFSMQUAVVCFFKYNJRTEVZJWRMSZHBKXNIXUSARBTLABDQCDGOQTQODNKASBNDUZQCKGIXBKVGMUJSVTPUCYGJDIRWXLLKBCRVEWZBTBZEYMYNDYLWRDPUFEUHCPHDMLSJTATXGEYQXOAGLORTYGEEOQVMOJJHAEEWIMFZCIIMPPNFPWBTOGKYQQTHQ");

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
    msg.setTimeStamp(0.8524603194965238);
    msg.setSource(23273U);
    msg.setSourceEntity(102U);
    msg.setDestination(38480U);
    msg.setDestinationEntity(106U);
    msg.name.assign("RFSXNUBTIVZBWDQFDXHBOKJZBHQLVRSNIBIAIXQZYGFCWEKFDCCJJSUHLTITFEVMEMWDVENZJXBQTHJNOYKGVRQVRUMBSRKVQBEAYAMGMAFXKTOWGZMYVCWAIOKZWFSZLFTSAGRNWASMNSPEOJYSJFDCBRLDCDADGLDKXYHACGJNXQQLUMWNOLPYEMEYYLCZXVPMPCGHWSJQPLTUOPUZRZPKITRIYWKNCBPP");

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
