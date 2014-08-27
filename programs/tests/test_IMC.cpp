//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
    msg.setTimeStamp(0.6736443055371995);
    msg.setSource(63797U);
    msg.setSourceEntity(211U);
    msg.setDestination(21085U);
    msg.setDestinationEntity(248U);
    msg.state = 58U;
    msg.flags = 6U;
    msg.description.assign("XXSQAGQIUCDJFOBTGVGNSALDMESZFEXNPVLXVOVDHWAVVMZDUIEUNQNYRXLAFMELQJUKQLRIMJDNNKBOVTMQHERHYTAMGTXDGESTPPAFQWPLDNYWFWU");

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
    msg.setTimeStamp(0.3712268207954099);
    msg.setSource(37143U);
    msg.setSourceEntity(53U);
    msg.setDestination(45569U);
    msg.setDestinationEntity(16U);
    msg.state = 213U;
    msg.flags = 32U;
    msg.description.assign("RRYLUSKEDAODRZZGLOUNZLMJQWWKUPQOG");

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
    msg.setTimeStamp(0.7505812105158792);
    msg.setSource(34208U);
    msg.setSourceEntity(180U);
    msg.setDestination(35185U);
    msg.setDestinationEntity(13U);
    msg.state = 13U;
    msg.flags = 10U;
    msg.description.assign("LUNJRKYGHRTKANFUHACKDOGCLJHQACPZPDRQIXRVTGCONZBIGTNMQXUFFVWFQSOACGKIXZFKNILUXTVYTSWVMJFDSBVNRYGEWZHJPNZMIQCJIMPUEQYYEUZPLTBIYOAEMWQCQMXZXBWBSYTLVCKJKBDUHPAAOILGPRLWBURSYIXLTNKBSCEDHLVNORAFWHCQPFAVHUXGUYJXLKOMDOEVASFYZKPTWDSTMJMDXPDDGOBMORIWSSFZ");

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
    msg.setTimeStamp(0.42474391993900684);
    msg.setSource(34403U);
    msg.setSourceEntity(159U);
    msg.setDestination(35681U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.6479949158586759);
    msg.setSource(23999U);
    msg.setSourceEntity(226U);
    msg.setDestination(44743U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.031586214131733015);
    msg.setSource(42994U);
    msg.setSourceEntity(242U);
    msg.setDestination(3582U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.5160665120417532);
    msg.setSource(49191U);
    msg.setSourceEntity(7U);
    msg.setDestination(12631U);
    msg.setDestinationEntity(225U);
    msg.id = 206U;
    msg.label.assign("GEQNORCXBVMSPVAOYLFYPLCBRRUZRJEIZLEJUMXUIKLIYROSHGZLKSPPFKWDJHRTCCSRWTZVRYJHNKTQGCWPMBHWAOIADENPFGYMBNYGXSBVFVAFWOLTTTJWTVUKMTQUWBQKQIDDOUNXHRHASUUGXZKZHOBBWOBYLBU");
    msg.component.assign("GPNLLNFRINQDXXTKVSHCBDAYXCPGFCOFAJTEOGJEJQB");
    msg.act_time = 30390U;
    msg.deact_time = 64639U;

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
    msg.setTimeStamp(0.13424285684768567);
    msg.setSource(29429U);
    msg.setSourceEntity(102U);
    msg.setDestination(30143U);
    msg.setDestinationEntity(8U);
    msg.id = 150U;
    msg.label.assign("XZEWDUHSWIZBNLLUTQHXYCQQEVRGYWFUFGZOZNWCBFALYFIVMNTWSYE");
    msg.component.assign("PTPIZALWHLYOYTJORDEIMVBGDUKWZRIUWCXFNGHJ");
    msg.act_time = 49116U;
    msg.deact_time = 63410U;

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
    msg.setTimeStamp(0.5849774260825972);
    msg.setSource(41315U);
    msg.setSourceEntity(110U);
    msg.setDestination(34723U);
    msg.setDestinationEntity(236U);
    msg.id = 224U;
    msg.label.assign("MLQOYVFWWKOGXBCEEGCCDWARHWBMIJQKBJVLAUOUFYJZDJEZJULFXPYQXYBBODMFEQLCCFLIRSKXZUAHCPMTKPLULTYTNWUHQNDJMOIFESSHWZXBZXLROVEGPEGTIMGGNQKWCDAVPQFDHJRHFUNJPARSSTXSGMWFVALNPRAIWTVQTUEJHOIOCKDAYQRPZSZRGHUOJERXYMCKGMYMXVISETNTTBHDKIBHUBZOYAKPVS");
    msg.component.assign("PDMYRRMCWQKNRHHQIYDLOCNRXGOUWUZBUZFLSREMJSBPWJBVSGWLIJTOVVIBKEXVYTOGABWMYC");
    msg.act_time = 37670U;
    msg.deact_time = 58554U;

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
    msg.setTimeStamp(0.27757559994486813);
    msg.setSource(14944U);
    msg.setSourceEntity(221U);
    msg.setDestination(51261U);
    msg.setDestinationEntity(113U);
    msg.id = 154U;

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
    msg.setTimeStamp(0.34926323272271576);
    msg.setSource(33212U);
    msg.setSourceEntity(117U);
    msg.setDestination(38962U);
    msg.setDestinationEntity(99U);
    msg.id = 161U;

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
    msg.setTimeStamp(0.7536205910027854);
    msg.setSource(60162U);
    msg.setSourceEntity(78U);
    msg.setDestination(50195U);
    msg.setDestinationEntity(229U);
    msg.id = 72U;

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
    msg.setTimeStamp(0.5002453320068921);
    msg.setSource(6271U);
    msg.setSourceEntity(162U);
    msg.setDestination(9913U);
    msg.setDestinationEntity(123U);
    msg.op = 62U;
    msg.list.assign("KAURYNAJBHZGBXUKEPNIYONIRXOFFDPAFMZYPXCXUTBIGPNUGHSCRZDPLVVILEVFQNMMVSXBMOEDWAFNYVVECLJTODIAVIOFCHZQJMXIFWPHZBMEGXOGRRKJOATPAQURUKVAKIREDUBGDQC");

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
    msg.setTimeStamp(0.49632244907889755);
    msg.setSource(35977U);
    msg.setSourceEntity(231U);
    msg.setDestination(387U);
    msg.setDestinationEntity(95U);
    msg.op = 42U;
    msg.list.assign("HHQWWAZQCMGBBYWJKVKYQWIZKWXIAZXJYZEPQTRFHHFLWTZBNVNCLJTUSNDOOXQREKEBNOK");

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
    msg.setTimeStamp(0.5775054247911567);
    msg.setSource(58190U);
    msg.setSourceEntity(151U);
    msg.setDestination(7435U);
    msg.setDestinationEntity(96U);
    msg.op = 202U;
    msg.list.assign("JKLFBCOLVAXBXCGPUNDAZAAFHLSNMALCJUYJJSDQGKKQWVUMYUVKGOJQCPHHTJTQVSWLQRKIUYZTEWVHOMLOSFSCZXDZTKFYTVEIBUJRBMATLUEBGSZSCWABONNITIZTCHWFWHYGGZPKRYOPEFQFPHM");

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
    msg.setTimeStamp(0.2800117212381613);
    msg.setSource(2902U);
    msg.setSourceEntity(104U);
    msg.setDestination(46554U);
    msg.setDestinationEntity(61U);
    msg.op = 119U;

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
    msg.setTimeStamp(0.9532392911514729);
    msg.setSource(46359U);
    msg.setSourceEntity(192U);
    msg.setDestination(40658U);
    msg.setDestinationEntity(96U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.24678922570887485);
    msg.setSource(32446U);
    msg.setSourceEntity(36U);
    msg.setDestination(50537U);
    msg.setDestinationEntity(126U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.5393495564537238);
    msg.setSource(59169U);
    msg.setSourceEntity(222U);
    msg.setDestination(61549U);
    msg.setDestinationEntity(215U);
    msg.value = 83U;

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
    msg.setTimeStamp(0.5831017845308507);
    msg.setSource(54849U);
    msg.setSourceEntity(203U);
    msg.setDestination(2584U);
    msg.setDestinationEntity(129U);
    msg.value = 100U;

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
    msg.setTimeStamp(0.8792518158878977);
    msg.setSource(58256U);
    msg.setSourceEntity(189U);
    msg.setDestination(47621U);
    msg.setDestinationEntity(86U);
    msg.value = 233U;

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
    msg.setTimeStamp(0.41136613275868583);
    msg.setSource(5289U);
    msg.setSourceEntity(221U);
    msg.setDestination(58404U);
    msg.setDestinationEntity(94U);
    msg.consumer.assign("ANUXRJQCYKKPNQMZNGDSDGVOCGXPIYZLDFAERUHLOVIBSGDTPFHQCMNBTTITWFEKBOHJMUCBZNZEYSCAPDTDXMPZEVHOWAQSXPVQQZOKKLWRRXLQVFYRRCHEJQOMRGACJSBVEMQUTZNHXBORVFDJSABBIYYUCELWZY");
    msg.message_id = 30911U;

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
    msg.setTimeStamp(0.9408009509392826);
    msg.setSource(65045U);
    msg.setSourceEntity(156U);
    msg.setDestination(3177U);
    msg.setDestinationEntity(144U);
    msg.consumer.assign("RVEVMUWADCAZLJHQKXDLBOSKPNMFUNEYVYILOHIECLCHSYMNAJYBZNULSEUZBUTKNDFPHQGWRGQGFGAHTXBNKWJVQOUXNYQTEFAKMLOHNRKZLSFFVUDXCMSGFXIRBMXRRMWYWZRYEPOUXTDYPVVGEUQXP");
    msg.message_id = 11992U;

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
    msg.setTimeStamp(0.7821689517382491);
    msg.setSource(59771U);
    msg.setSourceEntity(162U);
    msg.setDestination(50034U);
    msg.setDestinationEntity(13U);
    msg.consumer.assign("PSYUUYIZHLEDKXJGENUOXQTAVBHJTPCJHHVPWQBAVWCOTRSKXWARKTNEBRIFZSDICCWZXEQXLMOHAVDRIMKWEZ");
    msg.message_id = 54168U;

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
    msg.setTimeStamp(0.12313702824272721);
    msg.setSource(46150U);
    msg.setSourceEntity(40U);
    msg.setDestination(50428U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.9700337013382108);
    msg.setSource(17058U);
    msg.setSourceEntity(10U);
    msg.setDestination(22833U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.566704134871984);
    msg.setSource(31992U);
    msg.setSourceEntity(139U);
    msg.setDestination(25423U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.023834736111036148);
    msg.setSource(59710U);
    msg.setSourceEntity(60U);
    msg.setDestination(11088U);
    msg.setDestinationEntity(117U);
    msg.section.assign("GWDIIZCLHOXPSIWISPPGKIVOMXPHZNBQBQZEWTZNRUWSVKHJTXASUQMMHBFCYTBYWNJRPYKXFFAA");
    msg.param.assign("AWGGXZEVYISYEOIWIQGOZWDCBUWNFDMBDVQFCCKKKSEIAFTNOLJMXJBCPKCBMLGAEZEBRHJVAPTSLKQHUZFYBNUIPFKJIXTKCOQGADRLLTVZPSXBPXDMSYJNQAFIMKWHWVXAFLSMRYATYFXNQIMBVOFOVTSZDDJZGYCAXIZRHYRUVLTCEHM");
    msg.value.assign("FPPTCQLIYNDLRITRVUNPCRMUMNSHNNQDJFOVABOXREWXAACVTPRWCOCJZTKQIZKDMAXFSQUSFLTZVJXBEOHWSSSHIXYJQLWFSMNIHJRNEEJKZKKYBFTGEZZWYATOWGUZQVBKOYEXWGYQCZRNFICRCYYVYLWADULOZDGDNGDJFFLHUPSKEKIGOBPSMKYTXEAHBJFQZUPHMXLELBWMHAGUGTVORI");

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
    msg.setTimeStamp(0.9275307531865856);
    msg.setSource(47778U);
    msg.setSourceEntity(175U);
    msg.setDestination(54958U);
    msg.setDestinationEntity(107U);
    msg.section.assign("UZIFJGENHVSCPCUUFSDAPXZWQOCJVOYBAJMPLNWTJRIWDYU");
    msg.param.assign("GAMVOEOJYILSGVOEFHPZRQAPJJMRXVIGNMXPVROIJYZPVRAKTHFDXASCMYCCFJLYBDMPMRZOQHRUCJKGZLMKWQSUWPIEQHFGOLETWJQHBGLMPJNWWRAGASUSINWDLEEDKMINHXQHTFBDCFIPCOLLYUYVLTTKIDNQNBUGXVBKGCBPRFVJQZUBUDABZOHETWYSUZQXMTSAPNSEDJESOQIFTKUB");
    msg.value.assign("ZNVFDUEUZQISQIMLJSIHPAPHASFBFAJYCUKSDCVANMUISVRVZNPSWHEIFNIGAQXTEVXEXILTZEWWQYDO");

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
    msg.setTimeStamp(0.8149715487015023);
    msg.setSource(59337U);
    msg.setSourceEntity(123U);
    msg.setDestination(24144U);
    msg.setDestinationEntity(171U);
    msg.section.assign("QRMMFOLGWHRHSUDFQQWIYUWK");
    msg.param.assign("ZMXHKVFRTOZQINVSYXDMBMSGVIMHVANBBCTADYMDIONQHGHEYCPKWRLQYAKWWFKDTJTYLUNAZXFVMKNDFRSSBTMJMTJFDRKEWPEWILINGHPIIRBFVJQLSVMOOYDWGIRUAULXCTIGKSQGAQHMTXYRNLAQZELSHCPBCUPWEUHAYSRDNAOCBRHHDPQRTUQOPOCCUXYPOAGGJUXIUECP");
    msg.value.assign("TXHUQFDFRACGBUGXGKALUMWNBZCUJSDMHVNZOFIFTNTSONQPJXMEWVYBHJQLDWAGSVCXQNRTBYMJAFNDXFUVHTLKMWJQMPSDBZDOZXUVKCQWRQPFKZJNCLJWEEAPYDBXRGZPFTIYAKBAIIXPPAUVSCK");

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
    msg.setTimeStamp(0.3900933049635308);
    msg.setSource(5547U);
    msg.setSourceEntity(222U);
    msg.setDestination(33264U);
    msg.setDestinationEntity(162U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.3878236227291403);
    msg.setSource(16170U);
    msg.setSourceEntity(180U);
    msg.setDestination(63920U);
    msg.setDestinationEntity(14U);
    msg.op = 148U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("MQRYEADVUCFNHLBCRFXRRQPTOFJKWPKEQWJYMRSEACDWUCUCAQKVGOMWWKLHAWDAVPJJISEVZPZOJMOTRBLTPOGWHIZZKXNABPGMFYQAKEHUSANZECOFTJBTNQGFJWSVLDIMJLWHDGGLAXBESTLOSHJXKBXELCNRWZGQVKVKUOSXZHDCINFBIXDYZ");
    tmp_msg_0.param.assign("DIRPHMEGVBPQKGIMYIZJEXXNOUKSCTKMORTFAIJXRQCDCSFFIMOQQVCUZLHFZAGYJOHWKTLFKDXPEB");
    tmp_msg_0.value.assign("JLKZOVHWOMQVQWCXYCNCBRISGFENXKUBRGXSGMHNIKALFGOYSPOIOPSTJDUQYXQURWLBXUPNATYTHIKVHDVWFPINUHRDJCPQNEDBRXZNVWROTTENT");
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
    msg.setTimeStamp(0.02762955634757125);
    msg.setSource(34012U);
    msg.setSourceEntity(130U);
    msg.setDestination(15574U);
    msg.setDestinationEntity(103U);
    msg.op = 124U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("ZNXASPOPWJWKGDWGEOESJDYSULSLFAWELCTEDIVPAYTNYZXLGTOXWTZYCYDUPWMEPOGXQQBGBVIRBMKFRQVJGVSFEZJMHHMEBEQGQUHRFCNCVHYUPNUDKTBFUWBTIK");
    tmp_msg_0.param.assign("RGPOMALNMTXIWLNKXUYAMYIBDJTHOFUXKWR");
    tmp_msg_0.value.assign("EQIYYGWYNVADCKIOUPQOVUVHYCGSEEGXOTYFFDJACJMFHPLWJLJQZLWQCMJUJAZBGAGHXNGK");
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
    msg.setTimeStamp(0.5642762060605903);
    msg.setSource(58877U);
    msg.setSourceEntity(184U);
    msg.setDestination(62933U);
    msg.setDestinationEntity(27U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.4848553268621624);
    msg.setSource(54708U);
    msg.setSourceEntity(134U);
    msg.setDestination(45697U);
    msg.setDestinationEntity(160U);
    msg.op = 159U;

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
    msg.setTimeStamp(0.6046065844546279);
    msg.setSource(53063U);
    msg.setSourceEntity(137U);
    msg.setDestination(43570U);
    msg.setDestinationEntity(180U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.4418686319431463);
    msg.setSource(14094U);
    msg.setSourceEntity(57U);
    msg.setDestination(56671U);
    msg.setDestinationEntity(229U);
    msg.total_steps = 48U;
    msg.step_number = 181U;
    msg.step.assign("AZWVINZFOIRRYFFQSVBIDHNKJYWXPSREWPURQBECJOXFOCSEEECOLWEDBDYCPVMVJCFYRUDDZMLXJGKKKDWTJSAFVZKXOUIJZNUTSIYF");
    msg.flags = 250U;

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
    msg.setTimeStamp(0.5216125090792234);
    msg.setSource(18726U);
    msg.setSourceEntity(8U);
    msg.setDestination(53841U);
    msg.setDestinationEntity(68U);
    msg.total_steps = 7U;
    msg.step_number = 0U;
    msg.step.assign("EGHNBHECVXSXWDMZJGQHQSWPYAWQJRCBTOMDFILICPMWZYDEGTPAEVUHGFKJPROXVMRVRU");
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
    msg.setTimeStamp(0.4379797678570798);
    msg.setSource(3638U);
    msg.setSourceEntity(108U);
    msg.setDestination(28517U);
    msg.setDestinationEntity(40U);
    msg.total_steps = 6U;
    msg.step_number = 97U;
    msg.step.assign("WEVQEVBKESYRUHOXHTXCGWRDSWSUEYMHWADSSYKIAXGQJQPODCDHKTNBIQEBMGIAWZKVNPLPUDBJSFAIZNYPIUFLFRPUYDMVXZVNKRFFADMFNGHGPVBFWWHNMJTIXBPVCONJAMHTJVNOZICX");
    msg.flags = 160U;

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
    msg.setTimeStamp(0.3251414401571451);
    msg.setSource(30844U);
    msg.setSourceEntity(89U);
    msg.setDestination(63952U);
    msg.setDestinationEntity(198U);
    msg.state = 154U;
    msg.error.assign("UHWFJMBUICZBDBFTKXVJEYERZVVHDWKCWOTYKCWXPTVHPT");

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
    msg.setTimeStamp(0.42104017389578685);
    msg.setSource(62438U);
    msg.setSourceEntity(107U);
    msg.setDestination(15468U);
    msg.setDestinationEntity(145U);
    msg.state = 145U;
    msg.error.assign("CJVVZVTNZIAGKUYCELGROLTMDWPFPDUPHLISLUXNWWOQCPKTMZNNJADHNPZDCEJRBTJAECVMURFSSBHBKNUSIOLWGBBIDDHTTJXVLFUGFDFYQKHEFDZCEYQYYYVTZQNYXKWMCY");

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
    msg.setTimeStamp(0.8445315080356218);
    msg.setSource(9305U);
    msg.setSourceEntity(250U);
    msg.setDestination(34595U);
    msg.setDestinationEntity(204U);
    msg.state = 7U;
    msg.error.assign("OGYPOQGOPEBGEFKGBSJRXPGPCGIPVOBEZJNZZRVCDIEBZQXLADIFFKIWQIZAAYBRDUQSNTGUDMCUNAMTYTHXWJZHNQOF");

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
    msg.setTimeStamp(0.082265803581556);
    msg.setSource(61017U);
    msg.setSourceEntity(53U);
    msg.setDestination(29334U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.3267473506655608);
    msg.setSource(39338U);
    msg.setSourceEntity(104U);
    msg.setDestination(35729U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.5799297482281045);
    msg.setSource(5238U);
    msg.setSourceEntity(64U);
    msg.setDestination(28052U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.1545753780131669);
    msg.setSource(21940U);
    msg.setSourceEntity(41U);
    msg.setDestination(59517U);
    msg.setDestinationEntity(117U);
    msg.op = 70U;
    msg.speed_min = 0.23863238714771562;
    msg.speed_max = 0.8006999300508018;
    msg.long_accel = 0.9295133397912037;
    msg.alt_max_msl = 0.24464609814328886;
    msg.dive_fraction_max = 0.3792572866796219;
    msg.climb_fraction_max = 0.9716451488591266;
    msg.bank_max = 0.7020493687462723;
    msg.p_max = 0.24921849433762056;
    msg.pitch_min = 0.8080860882244719;
    msg.pitch_max = 0.3794125873021289;
    msg.q_max = 0.7707091816414675;
    msg.g_min = 0.07006576567006562;
    msg.g_max = 0.5455237099473281;
    msg.g_lat_max = 0.7899646401946308;
    msg.rpm_min = 0.6814212588189432;
    msg.rpm_max = 0.09891327218818369;
    msg.rpm_rate_max = 0.7084985846018137;

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
    msg.setTimeStamp(0.7276540861568942);
    msg.setSource(59393U);
    msg.setSourceEntity(226U);
    msg.setDestination(19536U);
    msg.setDestinationEntity(131U);
    msg.op = 65U;
    msg.speed_min = 0.5412118147541867;
    msg.speed_max = 0.37596583536800554;
    msg.long_accel = 0.07346338984811707;
    msg.alt_max_msl = 0.7721112699857284;
    msg.dive_fraction_max = 0.17202993863150595;
    msg.climb_fraction_max = 0.23065159496525278;
    msg.bank_max = 0.7012434926134343;
    msg.p_max = 0.23270641510039958;
    msg.pitch_min = 0.4645824345170084;
    msg.pitch_max = 0.808047356742712;
    msg.q_max = 0.5161556732439309;
    msg.g_min = 0.6687872790294767;
    msg.g_max = 0.37396173256103715;
    msg.g_lat_max = 0.15412581042536178;
    msg.rpm_min = 0.2501225807079016;
    msg.rpm_max = 0.07258835234014716;
    msg.rpm_rate_max = 0.1977313114153484;

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
    msg.setTimeStamp(0.7619004419596883);
    msg.setSource(64711U);
    msg.setSourceEntity(50U);
    msg.setDestination(4833U);
    msg.setDestinationEntity(227U);
    msg.op = 155U;
    msg.speed_min = 0.6112938345863613;
    msg.speed_max = 0.1356576290046122;
    msg.long_accel = 0.5987680574638086;
    msg.alt_max_msl = 0.6192738226849719;
    msg.dive_fraction_max = 0.11499025676757646;
    msg.climb_fraction_max = 0.1232880084937169;
    msg.bank_max = 0.004849688182906764;
    msg.p_max = 0.11146541468035265;
    msg.pitch_min = 0.32599222555629137;
    msg.pitch_max = 0.960903981222557;
    msg.q_max = 0.82074580731216;
    msg.g_min = 0.4360413993708371;
    msg.g_max = 0.10788941223629334;
    msg.g_lat_max = 0.46179957756808176;
    msg.rpm_min = 0.6695933058245961;
    msg.rpm_max = 0.3077849598932142;
    msg.rpm_rate_max = 0.4816172427717996;

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
    msg.setTimeStamp(0.03571897135785107);
    msg.setSource(34226U);
    msg.setSourceEntity(204U);
    msg.setDestination(56578U);
    msg.setDestinationEntity(80U);
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 104U;
    tmp_msg_0.angle = 0.7823561627425257;
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
    msg.setTimeStamp(0.8231129270476035);
    msg.setSource(16398U);
    msg.setSourceEntity(217U);
    msg.setDestination(63375U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.9621896610631673);
    msg.setSource(21370U);
    msg.setSourceEntity(37U);
    msg.setDestination(8001U);
    msg.setDestinationEntity(206U);
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 18U;
    tmp_msg_0.file.assign("HEPOKYNBWXEPBFOJTBGZKVLXJVBIDVZXWNARUIFWFJYFHGMSYNSCDTEUAGXGWYAK");
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
    msg.setTimeStamp(0.964896290972934);
    msg.setSource(36501U);
    msg.setSourceEntity(29U);
    msg.setDestination(455U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.5541563782938811;
    msg.lon = 0.057378419580570106;
    msg.height = 0.5668633962690109;
    msg.x = 0.9626898861046743;
    msg.y = 0.8006507800226387;
    msg.z = 0.40776105112978045;
    msg.phi = 0.9389941962853486;
    msg.theta = 0.042765242860479113;
    msg.psi = 0.9536036289784657;
    msg.u = 0.23993445830112103;
    msg.v = 0.5601932021064996;
    msg.w = 0.7818407740605;
    msg.p = 0.5095556101999114;
    msg.q = 0.22011877359146004;
    msg.r = 0.6170564788020136;
    msg.svx = 0.6526741523459253;
    msg.svy = 0.2577915869132944;
    msg.svz = 0.30706957862345186;

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
    msg.setTimeStamp(0.9539056885249738);
    msg.setSource(51884U);
    msg.setSourceEntity(136U);
    msg.setDestination(43053U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.5443335091329136;
    msg.lon = 0.6863791285552034;
    msg.height = 0.49553746749888183;
    msg.x = 0.062956643906517;
    msg.y = 0.09338004460627713;
    msg.z = 0.4949144464587216;
    msg.phi = 0.7358558474060543;
    msg.theta = 0.23153024037465386;
    msg.psi = 0.2449877815588628;
    msg.u = 0.2834700290066733;
    msg.v = 0.05012074005650613;
    msg.w = 0.3884478187675605;
    msg.p = 0.698176568518079;
    msg.q = 0.49853234714701433;
    msg.r = 0.04579925299293586;
    msg.svx = 0.09615179645223493;
    msg.svy = 0.5574697348858194;
    msg.svz = 0.6921870605268179;

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
    msg.setTimeStamp(0.24767557379453398);
    msg.setSource(10125U);
    msg.setSourceEntity(184U);
    msg.setDestination(13532U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.23992855402048363;
    msg.lon = 0.19539234451847365;
    msg.height = 0.7296721507517462;
    msg.x = 0.5629195511111702;
    msg.y = 0.09864657075623895;
    msg.z = 0.0010756869048740292;
    msg.phi = 0.739496549104699;
    msg.theta = 0.4448692809539494;
    msg.psi = 0.7852107196786163;
    msg.u = 0.4152790535468972;
    msg.v = 0.9524637467757796;
    msg.w = 0.6584485267925917;
    msg.p = 0.6632627965287522;
    msg.q = 0.8574079640145992;
    msg.r = 0.30103878322859456;
    msg.svx = 0.37098742992586065;
    msg.svy = 0.5670866647848355;
    msg.svz = 0.8274500020040225;

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
    msg.setTimeStamp(0.6820978099281909);
    msg.setSource(12648U);
    msg.setSourceEntity(194U);
    msg.setDestination(40448U);
    msg.setDestinationEntity(37U);
    msg.op = 78U;
    msg.entities.assign("DELKWYSXSFYNRFSZBUBPKYTIORLNTYLNOMDZRQQHXXYVUEJRMNBVJEGOKJRUIBIHWFYUPKTHELACLD");

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
    msg.setTimeStamp(0.008299210304835047);
    msg.setSource(57302U);
    msg.setSourceEntity(212U);
    msg.setDestination(45501U);
    msg.setDestinationEntity(18U);
    msg.op = 152U;
    msg.entities.assign("GZAZPAOHEAFNUOUWXJEPQADXKKQJQIYEVDLSNEFLWNDYBRCWIFMVGTFQFVXJTXAJHNSCHSJHRNWKWDAKLOWBIEFGVRVBRCHDDXBLRVWIHGKIMCNCZELXYNHUYOPZBNAYIWPZPDGJOLIMHUQKKXPMFGJYCVTPMKHKMSJT");

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
    msg.setTimeStamp(0.22703607710148588);
    msg.setSource(6309U);
    msg.setSourceEntity(196U);
    msg.setDestination(55181U);
    msg.setDestinationEntity(160U);
    msg.op = 204U;
    msg.entities.assign("ZCZKYNRQJNXFODOLBBMKOYGTRSVBONPZSDAVRJDQBRBEABAFMCHWUKECKLYXLXMQPAVKPCPAEZUATPCHQKBLAELVIIDYGKIRGHRQNYEEWYJUHJLNHTINUGSKZGJDPVZPYZOALUXIQDASLQGVMCFYWFXBHXFE");

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
    msg.setTimeStamp(0.9691390521635156);
    msg.setSource(64151U);
    msg.setSourceEntity(107U);
    msg.setDestination(18454U);
    msg.setDestinationEntity(154U);
    msg.type = 177U;
    msg.speed = 9965U;
    const char tmp_msg_0[] = {-102, 79, 61, -115, -2, 72, 111, -55, 24, 64, -83, 112, 57, -46, -80, -74, 0, -123, -34, -46, -85, 6, -88, -82, 43, 20, -26, 91, 40, 118, 95, 43, 13, -6, 102, 23, -30, -49, -109, -7, -122, 95, 100, -114, 83, -26, -35, -4, 95, -116, -37, -90, 49, 16, -76, -16, -86, -118, -34, -108, -106, 75, -24, 16, -45, 28, -77, -127, -33, 9, 3, 31, -48, 107, 66, -8, 126, -71, -22, 50, -25, -91, 6, -103, -93, -90, -67, -21, 53, 112, -99, -50, 30, 59, 81, -89, -20, 19, -86, 56, 112, -105, 12, 93, 20, 101, 7, -70, 50, -39, 119, 36, -41, 5, 71, 89, -89, 58, -121, -118, -124, 17, 126, -15, -114, 10, -46, 98, 73, 8, 43, 72, -111, 111, -101, 22, -30, 84, -113, -75, 101, -33, -44, 125, 89, 70, 35, -8, 52, -126, 45, -88, -125, -97, 72, -65, -35, 90, -119, -13, -99, -79, 107, 12, -70, 19, 121, -45, -73, 113, -44, -13, -74, 120, 53, -4, 108, -27, -18, -102, -119, 122, -42, -119, -39, -50, 124, -7, -64, -104, -71, 64, -39, 45, -103, 122, -128, 115, 19, 69, -127, -125, 47, 8, -107, -28, 121, -50, -46, 22, 76, 0, 8, -32, -15, 65, 9, 80, -43, 64, 49, 59, -30};
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
    msg.setTimeStamp(0.6241529535251555);
    msg.setSource(43206U);
    msg.setSourceEntity(179U);
    msg.setDestination(55630U);
    msg.setDestinationEntity(39U);
    msg.type = 203U;
    msg.speed = 28174U;
    const char tmp_msg_0[] = {-80, -128, 124, -8, -7, -68, -33, -9, -42, 102, 59, -122, -22, -69, 30, -72, 88, -85, -7, 56, -40, -80, -42, -60, 117, 26, 124, -61, 80, -79, 30, -89, -13, -77, 51, 119, -81, -83, -88, -69, 62, 67, -90, 97, 19, 67, -122, -48, 59, 43, 68, 102, -96, 48, 83, -24, -59, -88, 2, 45, -44, 20, 55, 97, -3, 104, 14, 21, 90, 50, -97, 5, 61, 32, -6, 97, -21, 47, -6, 1, -76, -78, -83, -116, -81, 78, -69, -18, 22, -41, 7, -114, -81, -111, -126, -105, 84, 39, 6, -40, -41, -11, 43, 19, -87, 5, -79, -52, 111, 46, -80, 7, 93, -89, 78, 79, 6, -111, -96, -31, -97, 11, -22, -58, -126, -30, -75, -16, -46, 80, 55, -117, 95, 108, -49, 69, 115, -47, -104, -98, -25, 70, 83, -57, 48, -56, -8, 3, 31, -99, 119, -113, 34, 68, 37, -92, -85, 54, 42, 98, -94, -69, 12, 107, -73, 28, -6, -19, 31, 57, 69, 36, -73, -3, 90, -126, -122, 117, -56, -49, 110, -40, 40, -111, -116, 51, -113, 59, 26, -65, 9, -63, -40, -46, -76, 12, -17, -19, 35, -104, 85, -21, 44, 69, -63, 12, 13, 2, -115, 49, 119, -15, 11, 41, -17, 94, -101, -24, -40, 29, 57, -20, -84, -103, 90, 78, -59, -56, -89, 11, -27, 64, -19, 58, -47, -126, -123, -48, -113, 115, -36};
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
    msg.setTimeStamp(0.21394409418323557);
    msg.setSource(47794U);
    msg.setSourceEntity(63U);
    msg.setDestination(53111U);
    msg.setDestinationEntity(162U);
    msg.type = 12U;
    msg.speed = 21445U;
    const char tmp_msg_0[] = {70, 74, 6, -50, -87, 78, 1, 32, -50, 15, -52, 45, -87, -104, 22, -87, -83, -76, 120, -58, 77, 110, -16, -14, -53, -11, 47, 113, -54, 84, 98, 83, 111, -22, 115, 97, 75, 86, 81, 108, 41, 63, -20, 66, -77, -2, -19, 110, 102, 122, -81, -105, 33, -127, 44, 33, -21, 123, -27, -57, 104, 21, -39, -94, -86, 33, 38, -74, -70, 31, -38, 43, -119, 124, -33, -123, 52, 7, -14, 6, -66, -42, -96, -109, 17};
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
    msg.setTimeStamp(0.7460182064205411);
    msg.setSource(8303U);
    msg.setSourceEntity(206U);
    msg.setDestination(41159U);
    msg.setDestinationEntity(2U);
    msg.op = 146U;
    msg.tas2acc_pgain = 0.10604900751667712;
    msg.bank2p_pgain = 0.7665430691221439;

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
    msg.setTimeStamp(0.02782676642056625);
    msg.setSource(33479U);
    msg.setSourceEntity(38U);
    msg.setDestination(39683U);
    msg.setDestinationEntity(177U);
    msg.op = 123U;
    msg.tas2acc_pgain = 0.32094989598736257;
    msg.bank2p_pgain = 0.6844791495221381;

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
    msg.setTimeStamp(0.07932438818194376);
    msg.setSource(17754U);
    msg.setSourceEntity(116U);
    msg.setDestination(47619U);
    msg.setDestinationEntity(215U);
    msg.op = 160U;
    msg.tas2acc_pgain = 0.4198809842002277;
    msg.bank2p_pgain = 0.7907681522265189;

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
    msg.setTimeStamp(0.3809742074911052);
    msg.setSource(17504U);
    msg.setSourceEntity(194U);
    msg.setDestination(5576U);
    msg.setDestinationEntity(29U);
    msg.available = 386755064U;
    msg.value = 200U;

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
    msg.setTimeStamp(0.9127712668014442);
    msg.setSource(45936U);
    msg.setSourceEntity(71U);
    msg.setDestination(2274U);
    msg.setDestinationEntity(126U);
    msg.available = 834539940U;
    msg.value = 254U;

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
    msg.setTimeStamp(0.35272701529949957);
    msg.setSource(24090U);
    msg.setSourceEntity(40U);
    msg.setDestination(4347U);
    msg.setDestinationEntity(173U);
    msg.available = 4031498054U;
    msg.value = 17U;

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
    msg.setTimeStamp(0.11922730698551398);
    msg.setSource(46436U);
    msg.setSourceEntity(143U);
    msg.setDestination(58666U);
    msg.setDestinationEntity(126U);
    msg.op = 95U;
    msg.snapshot.assign("IHMQLCPIZSFTYAIOCPFPSUHKNRNWNMWSQYVVUYNLOAN");
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.3822960944544195;
    tmp_msg_0.lon = 0.43580501933381577;
    tmp_msg_0.height = 0.08031734535327173;
    tmp_msg_0.x = 0.473270106466944;
    tmp_msg_0.y = 0.1966203119849793;
    tmp_msg_0.z = 0.21590935954378143;
    tmp_msg_0.phi = 0.5055639387588875;
    tmp_msg_0.theta = 0.8648949411099459;
    tmp_msg_0.psi = 0.024986505057129405;
    tmp_msg_0.u = 0.7756385880493365;
    tmp_msg_0.v = 0.6891354545467766;
    tmp_msg_0.w = 0.8755781098917436;
    tmp_msg_0.vx = 0.5366481294874228;
    tmp_msg_0.vy = 0.5006113622137716;
    tmp_msg_0.vz = 0.9486908781795393;
    tmp_msg_0.p = 0.059802887448195285;
    tmp_msg_0.q = 0.6326828961443508;
    tmp_msg_0.r = 0.018637263236709556;
    tmp_msg_0.depth = 0.4433870821815722;
    tmp_msg_0.alt = 0.037273495602554996;
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
    msg.setTimeStamp(0.6762643989299798);
    msg.setSource(29217U);
    msg.setSourceEntity(22U);
    msg.setDestination(55246U);
    msg.setDestinationEntity(36U);
    msg.op = 211U;
    msg.snapshot.assign("YRWRTKAHQZNETMKNXUHLZSHEYUQCRNLQQPWPSKDLGDCUONBDYVMFALIQCHLSQFKFYIGFIIRKJOWREPAPXLIDJMUUYIIESNVDMGLGPMIKFGYBOFKBUSEOJKKETXCVFDMXNTEPWGMU");
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.36829464929122535;
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
    msg.setTimeStamp(0.8387055370061173);
    msg.setSource(1464U);
    msg.setSourceEntity(205U);
    msg.setDestination(45432U);
    msg.setDestinationEntity(84U);
    msg.op = 96U;
    msg.snapshot.assign("JBKJLFXSSMCBJMFLNPOFGRRBREIEXGBJUBNURBJD");
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YBYOSPNNYSWCXETTZQURKVRVYDMXWEZJPDFISVHAQRUCDSZBWHMJJAMUTAMDYVRSIMVZPKFLKNKCQV");
    tmp_msg_0.description.assign("HRUWWUIMRINKWMEISKYBXNNMYVYLDEOVQOJXCSAWXCYKJTNWQBUYAEJNBXVFHCFNDXTVRDFJB");
    tmp_msg_0.vnamespace.assign("CWEOXMNRRDAGTDEMAJSKMCAUZQQVCYCGTIEVOQEADLWIJIXSUZZEXHFTYMULBOFCFLCOOBAILDINYMQWEIEAUBVVPBOGNGLCQMWUIPKIAXPRYTOFGWDLKDKUSXWHRWKGTNEMOUWDSGAHRDNDTLQJHJ");
    tmp_msg_0.start_man_id.assign("HAVCMJAPOAESUOCYEBTJMHO");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("EAPRLAQJYRYTILXLAHZHJFGWJICHJDKMZYZPUSERNXFCQVCQVFATHFQOBWQGWXBGQFRKLIEJKCMVUUANTNXPDMOHLGIPCFJXTLOLZVUDAAFAQNSJMIDIZOHSSMRTKDGYBVUEVQHLZLYGWKXBHBMVQOEVPRXUXBVSTBNQCCDPRJEOBKCWEISMZFGFWXBNKTBWHHUZIETAY");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ZILQVLNMUMWN");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EntityParameters tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.name.assign("GAUIZDXEWPTAKYLEMJWRYLAIVGUKXJHULBEPGVCQBBONBHFVQCMXNIMONTGGRENZFOVOPQAOCSZVKMCWDKHIFTFEQPCBGLJYSMQLZSFDRZMEDOTNIUEBOWKAPJMHFIJKPNQSWYPRDASNWXKNCCWKVTSPFJAKKFDJBRZSVZYSEZHNASTTLREYVMJAHDIRULYVFHVXYMXUEOTZDBHJQLXOGWLGNWSUHBDBFPIIZGRJTCUPQWRHRM");
    IMC::EntityParameter tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.name.assign("QHASMWVXSASEVSJRQMKZ");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.value.assign("VALYGGWVYPAIXLUHLCFRDOSQEXBKOSTGKOGPZKZYCNNXSQUWNFVCRLUAZVP");
    tmp_tmp_tmp_msg_0_0_1.params.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::LblConfig tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.op = 120U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("HZHDDWUPVYGZQZSKVEGYXRDYKDFLGYZBMOCPBHQUTRHYBSJRQIVFPUWEKORNUXTJJIBUXYVOFZPMAGKPLSPIRNLURYNWBKIOTXKFXQKTSYPOXNQJFVZRVSOGCCCTYGBBMKCAMROLALJMCVAPCNJFSNOCAEIUSBWLLXMJHALER");
    tmp_tmp_msg_0_1.dest_man.assign("LINWSQVWIZODJRAFHHBOCQXCKOBQMJEGCEENRODTSQYQAUGMDDCSLAMCNXKVDGMNGQRWPKRWIXHMIHYHYJFHZBVS");
    tmp_tmp_msg_0_1.conditions.assign("DQCOWNPBCATIPOFZFKYXLTWTLCFNBCQHTUWIQSGEEBO");
    IMC::FormationParameters tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.formation_name.assign("SJQBEONPNSUTTF");
    tmp_tmp_tmp_msg_0_1_0.reference_frame = 153U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.vid = 1067U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.off_x = 0.7786317432038441;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.off_y = 0.037932983364731165;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.off_z = 0.7260739936511547;
    tmp_tmp_tmp_msg_0_1_0.participants.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.custom.assign("KZBIXAUEGAPOBFJPJMKGCOPTFYISSVRJAQCEY");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::VehicleOperationalLimits tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 244U;
    tmp_tmp_msg_0_2.speed_min = 0.07300065478986406;
    tmp_tmp_msg_0_2.speed_max = 0.46050239911532054;
    tmp_tmp_msg_0_2.long_accel = 0.7046844903532296;
    tmp_tmp_msg_0_2.alt_max_msl = 0.7979855307565275;
    tmp_tmp_msg_0_2.dive_fraction_max = 0.5236917587946087;
    tmp_tmp_msg_0_2.climb_fraction_max = 0.8798669872466701;
    tmp_tmp_msg_0_2.bank_max = 0.2748402993588137;
    tmp_tmp_msg_0_2.p_max = 0.02831496038850745;
    tmp_tmp_msg_0_2.pitch_min = 0.8850061692464521;
    tmp_tmp_msg_0_2.pitch_max = 0.6178439839788562;
    tmp_tmp_msg_0_2.q_max = 0.7001252918157332;
    tmp_tmp_msg_0_2.g_min = 0.6915327864004829;
    tmp_tmp_msg_0_2.g_max = 0.6967451585735625;
    tmp_tmp_msg_0_2.g_lat_max = 0.3275517768570121;
    tmp_tmp_msg_0_2.rpm_min = 0.8142290624047458;
    tmp_tmp_msg_0_2.rpm_max = 0.49524355857879576;
    tmp_tmp_msg_0_2.rpm_rate_max = 0.3423454169056267;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.31272896278967877);
    msg.setSource(21855U);
    msg.setSourceEntity(228U);
    msg.setDestination(34322U);
    msg.setDestinationEntity(187U);
    msg.op = 93U;
    msg.name.assign("GTAFOQSFHGHZCCCZGSNBIJVUVHODGNVTYLHWXTETFTCECRZPQPLAWNITJNRACDQGDTSIYSANYMUJBUDMKBYIWMSBWEEVNOCEKBYNCRXGGYGAPWPVXHRBMUELXYDPJCBDPQODKCDF");

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
    msg.setTimeStamp(0.6033626248177468);
    msg.setSource(6824U);
    msg.setSourceEntity(105U);
    msg.setDestination(57902U);
    msg.setDestinationEntity(202U);
    msg.op = 209U;
    msg.name.assign("TOTYZTWFKZLYFTS");

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
    msg.setTimeStamp(0.6449889436608024);
    msg.setSource(29574U);
    msg.setSourceEntity(32U);
    msg.setDestination(59030U);
    msg.setDestinationEntity(97U);
    msg.op = 116U;
    msg.name.assign("JKXBBQVXLESJSIZNJBURGQPXLWYYAXCLPRVDWELSPNMRAWNIOJYFDFSGQUFGYEFKUBJDHFCHOMCZWVTVNK");

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
    msg.setTimeStamp(0.6939977270350625);
    msg.setSource(15465U);
    msg.setSourceEntity(116U);
    msg.setDestination(25952U);
    msg.setDestinationEntity(7U);
    msg.type = 63U;
    msg.htime = 0.03154013329873595;
    msg.context.assign("FNTGFUNOUWDJZXPKHJCATWUQYVNNIBKREQSYUAPAQHICXSUTGFHUBKTTSXJVLZEDDKATYMIDRZNOXRQMDHBSMCHUGSYIZJLAMQQNPHEFNMMHVOZERIVNLSFOWIWCMZELIGNVKDHDECYWYJSZKLSLOJBRHVFWBQRAHXGFUCSKVJRYITIVXZAVMMOFDIJBXTCAXKOVCGMOBZEWB");
    msg.text.assign("QSIPQSWTUHMYZAQIKLPXYVXRVGHXLJJWJOCTCHFSIDDUKPUVHPJOWAZOQEJEJTRXRZYMXULBMZQVGUWWSYLLCNMKFWGAKZAKTTJSAPEDHARDXIZ");

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
    msg.setTimeStamp(0.1996748223863155);
    msg.setSource(64689U);
    msg.setSourceEntity(2U);
    msg.setDestination(29683U);
    msg.setDestinationEntity(144U);
    msg.type = 139U;
    msg.htime = 0.5659397927379739;
    msg.context.assign("NQFOZSPINDMZRCITPQYXLLKOWBJECEGNDFCV");
    msg.text.assign("UBITCSSNONYSQOKRDUUWGLMQFXJBHAYRIOSGUOAUXRRVVABMGPZYHFKBAXEEPABYHWVDGLNQTJIZGLKICSTPKP");

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
    msg.setTimeStamp(0.40497636195853615);
    msg.setSource(4157U);
    msg.setSourceEntity(111U);
    msg.setDestination(20735U);
    msg.setDestinationEntity(126U);
    msg.type = 44U;
    msg.htime = 0.852886173722316;
    msg.context.assign("BNLJWRITPFPAZLXSSQZPGJMUHALQUAOCIVOGRNXDKSIEODNBIIQVUXSWWLGNEROVJBQBSRPKYWTJBKMAZVWZMJZZIKLRQIIRPZOMQGUOAVLUGSVFQYHJIDUTVQSMFNYHOAKFJENEEWYGDVGDFRROCSMDJYXBLUPHLMUXWQCAAEYDEPXFMTLTF");
    msg.text.assign("ASAZOHPIXGBSYVJABXUVEVGMOPYPQBXDHKALNODZLPSZZYRNBVXNETYMQPTFJDTMRTVKXWFPRKWMCNYFUXGUIYRSRTFCEHBQPJLGESPKKMDVNGTAZMMUXMLFJDAKNCSJGIWEXHLQWHKIESQOGGJOCNSDFQYYOCGPIEFREWZABXKVLKCLANAPZSKBHUHZTBAHHJBLSMORETCWQIXIJZJQRQWDM");

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
    msg.setTimeStamp(0.9505334380861142);
    msg.setSource(27984U);
    msg.setSourceEntity(208U);
    msg.setDestination(38419U);
    msg.setDestinationEntity(202U);
    msg.command = 125U;
    msg.htime = 0.5449353917198205;

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
    msg.setTimeStamp(0.37627083768942526);
    msg.setSource(10972U);
    msg.setSourceEntity(120U);
    msg.setDestination(53616U);
    msg.setDestinationEntity(154U);
    msg.command = 81U;
    msg.htime = 0.2809950134673106;

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
    msg.setTimeStamp(0.16151331603423869);
    msg.setSource(47205U);
    msg.setSourceEntity(13U);
    msg.setDestination(62039U);
    msg.setDestinationEntity(249U);
    msg.command = 90U;
    msg.htime = 0.8687259795286665;

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
    msg.setTimeStamp(0.8990648470355368);
    msg.setSource(42583U);
    msg.setSourceEntity(45U);
    msg.setDestination(27821U);
    msg.setDestinationEntity(94U);
    msg.op = 236U;
    msg.file.assign("XXJCXTYATOFHGMREHVGUIEXSCWVBFRSMRQNPRFKBHDRSVILQUOAQOWMJZLMSYRJRZYXPUBJUOWVZKXUPNTAPPYJBPWEDEORDBCOGNZTGKEUNGFYAJNBZEFYQBJGCDSIBAUD");

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
    msg.setTimeStamp(0.09196821072127148);
    msg.setSource(25440U);
    msg.setSourceEntity(98U);
    msg.setDestination(46066U);
    msg.setDestinationEntity(195U);
    msg.op = 43U;
    msg.file.assign("WQCBLPUUVIZSXOHWPTMNCSQYWIPBBQUJDSFKMJOCPEZAZCKRJIABCRBLAYETOSIHXXSUYXOUCVKXDUNIAGMKNNXZTRVSXQHQAZTWUKMVVOPSCZJWKFEHIZOHLAHISHRSKLQMNEKRKFBXXDMDIJTWUVFTETDCGBEGGLKCJYQGRFOHTYRMYNLQDVPPNWGTBLPDPHWLUTYSEZMNOQCDVRZFRXVYGDJIFFNAEAFVG");

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
    msg.setTimeStamp(0.3065224889043241);
    msg.setSource(4167U);
    msg.setSourceEntity(253U);
    msg.setDestination(45619U);
    msg.setDestinationEntity(253U);
    msg.op = 155U;
    msg.file.assign("KIYHGQMFYZRKZNARXSMPAPTNQVJKEHIYEUAAHWMCUODZBHCUFHYGEDKQUSUARWRNCDFYPOXKUGBIJCXFLHYEMTQMLZIIRIRASQVPVZCQEYZPZMYUCGFSJWRWXSTOUJEVNKJRTOSLVHFGTDBUXMKWQHZNQNAJSVZGNQDOWLLNTOYDUAIEEJVH");

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
    msg.setTimeStamp(0.25085443626840553);
    msg.setSource(42195U);
    msg.setSourceEntity(80U);
    msg.setDestination(57752U);
    msg.setDestinationEntity(107U);
    msg.op = 237U;
    msg.clock = 0.3117062409179088;
    msg.tz = 24;

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
    msg.setTimeStamp(0.661949143245857);
    msg.setSource(18982U);
    msg.setSourceEntity(104U);
    msg.setDestination(44230U);
    msg.setDestinationEntity(133U);
    msg.op = 1U;
    msg.clock = 0.6275797339353973;
    msg.tz = -22;

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
    msg.setTimeStamp(0.31743344475664914);
    msg.setSource(48742U);
    msg.setSourceEntity(169U);
    msg.setDestination(64338U);
    msg.setDestinationEntity(65U);
    msg.op = 26U;
    msg.clock = 0.40196489632503685;
    msg.tz = 107;

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
    msg.setTimeStamp(0.7476760612291012);
    msg.setSource(48411U);
    msg.setSourceEntity(141U);
    msg.setDestination(51449U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.7506332956927393);
    msg.setSource(56374U);
    msg.setSourceEntity(174U);
    msg.setDestination(31334U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.8394096809309475);
    msg.setSource(56212U);
    msg.setSourceEntity(247U);
    msg.setDestination(47957U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.6653062408739921);
    msg.setSource(17020U);
    msg.setSourceEntity(251U);
    msg.setDestination(17945U);
    msg.setDestinationEntity(159U);
    msg.sys_name.assign("XHOYBRWTPWNHUVXAFFSDAJUGCSAXTYUZVPREJMSHFSETWLBLTOBZMHCKWVODZCCZAGAYEKKAISDGOAQJYPJDFABIGMBOQAPQUYAUMFEGLTMWFLPLXBRCMMLNDWBNXUXZWBJWEXWDIKFKYHMRYIDGVHYVEZGHBMFGVCUNZIIRCWBPOEXOGQDJNIPKIQSIYONSJQIGLPNYTLHRCVNRHZQHRKOLLRSJQXMEZFSTCDFVEDXUPKKUNZTVTJQ");
    msg.sys_type = 144U;
    msg.owner = 18378U;
    msg.lat = 0.5065544990115893;
    msg.lon = 0.032549227237559264;
    msg.height = 0.3613054776243352;
    msg.services.assign("LMKUPDLRIZJWNYWCYMEKSMXKVSRYTUDWBBREUYFQVROOHHVSVMZTQHWXPEANCSMGSZGNPSERJUQJLIZOFGQYVJXOQBOYCTCCHCNKELMCQNODIKNWIVBGPFFNMGVCGFSJNGQFHPYQWICOJHZMZHBTRUOXAUAKSFNYXDERVZIZWUBGXDPAHYJIDULLFLKRLVTPKNKXMMFGTHEVTAYEETZIKXFLSHICUDDAQAJTRWJDOUEWB");

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
    msg.setTimeStamp(0.4164053593200603);
    msg.setSource(13467U);
    msg.setSourceEntity(154U);
    msg.setDestination(23429U);
    msg.setDestinationEntity(224U);
    msg.sys_name.assign("IOVQVEVTQINIDKILLNUFUIWPLRUSZJPOKMKFYTTUJDXACZDJTHDGWVHMXUNGURSFHGFOBVQTAEOVNTDCHWQOSBEJENYUAHBZHWRELCGEY");
    msg.sys_type = 22U;
    msg.owner = 45146U;
    msg.lat = 0.6044512286078898;
    msg.lon = 0.9780992503416848;
    msg.height = 0.3151289826616185;
    msg.services.assign("YPOXQDIGNIUQQGBHJHYZRTMBELEYOKLJBUXECOAWSWRILXPUYIHI");

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
    msg.setTimeStamp(0.051299352812279375);
    msg.setSource(49493U);
    msg.setSourceEntity(187U);
    msg.setDestination(53363U);
    msg.setDestinationEntity(62U);
    msg.sys_name.assign("ESHJULMPRFLFAGSAISICWJOCJOQXHJGDYBCQMLVODWEBWCQZMXGBFTGQTURZDWLSQVFONA");
    msg.sys_type = 237U;
    msg.owner = 26919U;
    msg.lat = 0.8571778962923279;
    msg.lon = 0.9196210121714306;
    msg.height = 0.06478436442197277;
    msg.services.assign("WLHAEAABOAIREXGRUNGUZLDTCONOQECQFBTPNZDNRRFGHPWOSOWXDRZBMENULPSOZPVOLBMFRGAYTQPQAXTUFYJBJSGDQSXEUETDNKIVNKUIAZYBNYEYXJOFUOUVSCMWCAZLIMBKRVSDZTTCWMVXWVLJQLQMSBRHYSDTEUEKPPBHYCNAGIHFVLORTYLIIDYKMVFPH");

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
    msg.setTimeStamp(0.2633222021529541);
    msg.setSource(35519U);
    msg.setSourceEntity(98U);
    msg.setDestination(6113U);
    msg.setDestinationEntity(78U);
    msg.service.assign("XGGQTDHEMRSOERFMSQANBOPBABSSKECXDNLRSNHJKBRKQUCUDJXDCALEVWYWFKITIIXBQUCLVLQZCZTGVDYPHUVHWZHZFWNPXFTRYFNFANQFYONDIOLIOXQENUXTMNPDTNYCJWUEYPSOHHIPWCJFSKVBSIRLWUEBLKGJJQXBMKCATWKRMMZLBCWPGDGAGOSEFMTDYUGZADUHGPZHYPXJGI");
    msg.service_type = 138U;

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
    msg.setTimeStamp(0.8401270781289752);
    msg.setSource(51178U);
    msg.setSourceEntity(107U);
    msg.setDestination(30276U);
    msg.setDestinationEntity(180U);
    msg.service.assign("KBKKKXWSEPVEYEZQRQDMIEHKJFDHVIFOMWPAGALOZUSGQKFKSZBVGLPTSHWCSAMKRHCLDGLGLAUNOVEILDPBCJJVWDXPHKYXHARCRZJJEFYJQTVIMRNUBCAZJOOTQYAMFOLMXFPVDHMGEYVLBHRAIYLGNXVXECQBPHNYRIMCBQKMDEI");
    msg.service_type = 168U;

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
    msg.setTimeStamp(0.007155238535646702);
    msg.setSource(4546U);
    msg.setSourceEntity(213U);
    msg.setDestination(13835U);
    msg.setDestinationEntity(164U);
    msg.service.assign("NNXHUTCUGFJDRXVMAOUJTZVPUJPIORYBTTHJAJLDFSYSGNJABNPHVSOORIRERKKGEAEQDIPHYSAFKZYWHGLACKUOGXHKSQHNUCSQSXTRUOMZIYMETIZYFJGTGMEALZGWIEBZWRNHVTVWJWNPFPVLKXICFDFGTPLQDRMMEEQOOBUZGLBJFNCKNRXPXBRSSWBDMDMDVFICNHWOQBT");
    msg.service_type = 249U;

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
    msg.setTimeStamp(0.41256442177630903);
    msg.setSource(21727U);
    msg.setSourceEntity(245U);
    msg.setDestination(65106U);
    msg.setDestinationEntity(116U);
    msg.value = 0.8678386673038575;

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
    msg.setTimeStamp(0.763367048286858);
    msg.setSource(20179U);
    msg.setSourceEntity(115U);
    msg.setDestination(1622U);
    msg.setDestinationEntity(213U);
    msg.value = 0.7615296385029479;

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
    msg.setTimeStamp(0.6352769909417639);
    msg.setSource(39007U);
    msg.setSourceEntity(34U);
    msg.setDestination(33004U);
    msg.setDestinationEntity(83U);
    msg.value = 0.9121366491863367;

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
    msg.setTimeStamp(0.11008054328112049);
    msg.setSource(10171U);
    msg.setSourceEntity(80U);
    msg.setDestination(33670U);
    msg.setDestinationEntity(54U);
    msg.value = 0.11587677144652264;

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
    msg.setTimeStamp(0.28512269883103225);
    msg.setSource(40590U);
    msg.setSourceEntity(81U);
    msg.setDestination(18687U);
    msg.setDestinationEntity(37U);
    msg.value = 0.6986694548127774;

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
    msg.setTimeStamp(0.37942843815120686);
    msg.setSource(33387U);
    msg.setSourceEntity(197U);
    msg.setDestination(54605U);
    msg.setDestinationEntity(148U);
    msg.value = 0.5171875926103779;

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
    msg.setTimeStamp(0.9863674860525311);
    msg.setSource(59798U);
    msg.setSourceEntity(33U);
    msg.setDestination(39725U);
    msg.setDestinationEntity(170U);
    msg.value = 0.075794560947823;

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
    msg.setTimeStamp(0.6023266791566253);
    msg.setSource(25946U);
    msg.setSourceEntity(72U);
    msg.setDestination(17375U);
    msg.setDestinationEntity(138U);
    msg.value = 0.9292807915994259;

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
    msg.setTimeStamp(0.7669425583950865);
    msg.setSource(11037U);
    msg.setSourceEntity(164U);
    msg.setDestination(31307U);
    msg.setDestinationEntity(11U);
    msg.value = 0.5634057073449855;

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
    msg.setTimeStamp(0.17001987426167542);
    msg.setSource(35854U);
    msg.setSourceEntity(89U);
    msg.setDestination(41218U);
    msg.setDestinationEntity(40U);
    msg.number.assign("QKDZZBSLEULJELRTHSVIYTXYHGHJWPDUHSOWPVDHWODBQSSTQPDWMNOULSHAFQWXICJBWYOYOXMKQDZOHLZMIDFALUNNYNCUZCSGPZFJLIWUEPJQMXZEAUUOVFNVPXVGMOIAJRKRTJMNFXARWFTDDBJQAKMGUVRGYGCDNYIIZAXGECFJPTTNHHEBOWSLXNGCOJVEKKEQBBHNFBCRCIKTACRAAVYFZMSTEKMMP");
    msg.timeout = 1544U;
    msg.contents.assign("DGAJTVSMWWEBIZTNTSUZUPPJTNMZHDKYLAFCJYPDOCIMXZOMWHJCIAFKRSITXDLNXDIEBAWYWSYJRBUUZQYEHARBGEHFQKLIHKZGECXSMPVKWELAHJRRNOYRRMXJMVQQZGSBIVXYOFKVXFHNVYLOOBCKGLDV");

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
    msg.setTimeStamp(0.006718529009038354);
    msg.setSource(35808U);
    msg.setSourceEntity(198U);
    msg.setDestination(38402U);
    msg.setDestinationEntity(135U);
    msg.number.assign("DSPRWKEGTPMHWYMCLRLKXUDUWACABATUZUJKEUBNNFJDXLZUEQGOGPVCXFIQJBHRYI");
    msg.timeout = 4707U;
    msg.contents.assign("TTMEMSXOIYJOKIWFQFVHVHFPHYEUSKYMUVGIZEXKRPWLZFQZMCTXWGIYBFNEQMETJBVPRTBCMPGQSZLDGTCTGXBUUFDRNNBTWKNZWCASOGHCDOWQKWKCRVUQRZHPGYAKJTVODNUNIJBNHLVJKHXLBBOANPFDAGLSRMUABXNSIDJJMECXPZIVRQAFUZSYCKJLYMOLQFZAGPPKWVWUUXHCNHEBQRSVRSJEHEQPCIAWAIJZRDLGILMYYF");

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
    msg.setTimeStamp(0.5330281748965546);
    msg.setSource(63752U);
    msg.setSourceEntity(52U);
    msg.setDestination(19204U);
    msg.setDestinationEntity(7U);
    msg.number.assign("VJALQBARGFTULLHMXFWIJQNDSYJGPTDIWAENQXQYWTOFPQNQSDBTUOTRKAQCHLWOEEPYPLPLLTVFWIAVWZFFSCBZSIPVHTWNXVJSXWUMQSIDCYNJYZAYJGQOEKBNWRJBGVAOREHOSBGZGFKMXSNCI");
    msg.timeout = 25150U;
    msg.contents.assign("QXHHELIJXSCCAFTNNJYTDFJQUVVQKTCRWCAMFSWMGDOBWLPFMOKAESWNNDLEUDHFPEIKCPYPUUWWTBGLMONGOVOMCQPREEGRZYNPYZRARHBMQSYDEMWZGBZQDXAVYITUOBCCQPOHLPFICAISGIXMXLXEQORONLSFROJAGFMVIJKXKRIZJEVQTYGJAN");

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
    msg.setTimeStamp(0.16944562338070057);
    msg.setSource(12608U);
    msg.setSourceEntity(164U);
    msg.setDestination(19525U);
    msg.setDestinationEntity(158U);
    msg.seq = 81026740U;
    msg.destination.assign("GWLZHECPRLTFURWMLFOFUKVKDOBFSQECNOSUOYVXQARDZSHTGMNRXGXAVEWTIAUGTPFGDMPBTQWFAJQZQKZBLVZRMIFBJKDROYYWDLWHNBMLEZQPDPHXSAZQIXZJOBHTVZHAPPUNIYSYFSCUPZOVRAGRIBJMCXYIJIHTFHSNGMKXLYQRWJ");
    msg.timeout = 31800U;
    const char tmp_msg_0[] = {-74, -4, 91, -102, 81, 34, -46, -30, 62, 24, -30, 13, 22, 26, -85, 18, -51, 55, 51, 117, -22, 60, -86, -94, 19, -42, 71, -81, -95, 32, -19, -58, 78, -72, 97, 39, 68, 82, -45, -78, -18, -111, -47, 93, 116, 27, -126, 95, -128, 57, -68, 15, -115, -65, 32, -10, 24, -10, 12, -48, 112, -56, 41, 120, -95, -16, 94, -27, 59, 65, -71, -90, -67, 75, 107, 94, 2, -16, -109, 103, -100, -51, -59, -87, 41, -91, 78, -55, -98, -92, 120, 16, -92, 124, -55, -123, -32, 44, 44, -25, -21, 78, -77, -70, 28, 111, -80, -36, -12, 56, 89, -49};
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
    msg.setTimeStamp(0.6478646090084689);
    msg.setSource(5140U);
    msg.setSourceEntity(220U);
    msg.setDestination(2006U);
    msg.setDestinationEntity(87U);
    msg.seq = 3930367243U;
    msg.destination.assign("IMSJJYNJKOKALVWGHGNIRQSOCAKDPHSVJTWCCDLCOCOYDEOLVXMBZPFVKHPUHQERNYLBKKXJTKJZTGKCUDTQDDEHLNWJXUPWFWRUUALBTRFPSZNEAGTZHTSP");
    msg.timeout = 37391U;
    const char tmp_msg_0[] = {124, -10, -118, 104, -71, 27, -65, -33, -106, -78, -20, 118, -103, -22, 47, -17, -105, -77, -99, -45, 51, -13, -33, 95, -86, -21, -95, -95, 42, 81, 124, 89};
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
    msg.setTimeStamp(0.21259982095110697);
    msg.setSource(49184U);
    msg.setSourceEntity(220U);
    msg.setDestination(25087U);
    msg.setDestinationEntity(72U);
    msg.seq = 849795459U;
    msg.destination.assign("RAJHMUJVXYQHOJHCNKTMMAXNSWKNGALKFIQXQIJOAJDXQBDPEMYDKEFYRIKYSPEUPTJTXBXSCWFFVGQLUVWSMFUGMDUO");
    msg.timeout = 65203U;
    const char tmp_msg_0[] = {-50, 63, 111, 105, 24, -96, 102, 105, -47, -46, -75, 58, 116, 40, -16, -46, 16, 48, -126, -35, 27, 98, -20, -78, 106, 102, -103, 55, 49, 48, -55, -2, 97, -43, 121, -44, 52, 69, 77, -73, -112, 99, -22, -49, -74, 93, 92, -40, 5, 2, -38, -58, -77, 85, -59, -53, -95, -26, 113, 26, 96, 67, 87, -80, 121, -123, -64, 22, -98, 79, 75, -85, 91, 56, 114, 118, -98, -78, 123, -89, 125, -50, 31, -70, -30, -36, 86, -25, -63, 18, 101, -78, -69, -63, 4, -1, -117, -43, -85, -70, 56, -65, 60, 84, -86, 27, 24, 40, 111, -26, -56, -123, 71, -91, -44, 97, -40, -69, 40, 76, 75, 28, -51, 93, 20, 74, -42, -31, 16, 60, -18, 29, -4, 95, -107, -93, -71, -119, -96, -85, 81, -23, -81, 52, 65, 31, 35, -22, -56, 35, 36, 101, 23, -40, 67, 77, -78, -23, 87, 70, -12, 121, 99, -48, -41, 52, 96, 72, -64, 45, -87, 104, 51, 112, -28, 76, 105, -111, 34, -43, -101, -37, 94, -97, 106, 107, -72, -98, -113, -118};
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
    msg.setTimeStamp(0.2744640049901579);
    msg.setSource(11961U);
    msg.setSourceEntity(228U);
    msg.setDestination(35303U);
    msg.setDestinationEntity(207U);
    msg.source.assign("NIRGJXOXGPDKLPSABENAPRKHWJNTRKZJWOSQSPXDOOYGVFMRFKKQJ");
    const char tmp_msg_0[] = {89, -40, 61, -128, 51, 98, 4, -87, -128, 119, -42, -83, -39, 100, -126, -80, -108, 118, 33, -20, 86, 65, 75, -92, -118, -124, -82, -61, -95, -38, -75, 46, 10, -26, -83, -87, -96, -31, 96, 25, 73, -45, -83, -68, -72, -23, -123, -105, 82, -31, -103, -92, -77, 57, 27, 97, -107, 94, -68, 30, 1, 64, 30, -52, 125, -99, 117, 30, 118, 71, 29, -62, 121, 61, 39, 16, 57, -30, 116, 19, 43, 35, -84, 93, 25, -123, 77, -18, -101, -125, -27, 89, 32, -94, 64, 101, 19, -9, -43, -94, 59, -18, -75, 123, 92, 68, 1, -43, 34, 92, 65, 20, -24, 11, -33, 93, 97, -128, -93, 67, 18, 55, -111, -1, -105, -2, -87, 102, 55, 106, 78, 98, 59, -48, -91, -56, 79, -14, -128, -75, 13, -41, 79, 88, -89, -65, -86, -30, -120, -2, 6, -32, -24, -50, -60, -116, 53, 6, 66, 109, 30, -99, -65, 108, 111, 124, 98, -127, -43, -95, 36, 22, -6, 61, -44, 115, -28, 55, -84, 101, 99, 73, 74, -28, -55, 8, 76, -84, -27, 40, 122, 96, -115, -21, -80, -25, 40, 3, 60, 63, -34, 52, 8, -102, 108, -71, 42, 69, 43, -50, -110, -23, 57, -89, -15, -109, 86, 55, 30, -85, 37, 61, -94, -78, -98, 53, 48, 7, -95, 62, 34, -24, 3, 43, -15, -85, 81, -101, -73, -86};
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
    msg.setTimeStamp(0.3548664305029319);
    msg.setSource(41055U);
    msg.setSourceEntity(134U);
    msg.setDestination(50287U);
    msg.setDestinationEntity(208U);
    msg.source.assign("QUBWUPSNAGDVXVNQDGTHOQFVGEOEFBZYSQXWEKBYHUERMQULNWXVAGCIYLCDMKVMRCSQNAVOQERMOQ");
    const char tmp_msg_0[] = {24, -12, -74, 47, 102, 3, -69, 37, -28, -18, -94, -50, -117, -28, 35, 62, 6, -36, -8, 69, -23, 58, 75, 39, 11, -124, -52, -19, -22, -90, 78, 23, -128, -4, 91, 23, 35, 72, 2, -16, -70, 78, 1, 56, -76, 119, -13, -46, -34, -80, 27, 111, 22, 101, -81, 123, -20, 83, -90, -86, -45, 55, 74, -111, 30, -14, 104, 14, -6, -30, -109, 34, 63, 72, -92, -9, -82, -30, -21, 7, -17, 106, 15, 36, -22, 5, 122, 67, 1, -59, -71, -40, -45, 66, 4, 44, -124, 0, 63, -78, -91};
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
    msg.setTimeStamp(0.925202488545449);
    msg.setSource(5619U);
    msg.setSourceEntity(198U);
    msg.setDestination(47774U);
    msg.setDestinationEntity(177U);
    msg.source.assign("UOXDAUQZAIXLLSXZCVBUFFCTZKDDUBFDRYABPGRHXZYUWKEKYSVDNEGYJUTVXRNTBBICPKZGAYMHSAIMMHCIEFRLSNGLVONMCTWZYSXMWFRVNWQFDSQPJSEVMQGLQJQURHELTSOPNJAKCYBKGPZHBHOCGRPFODIVEZCE");
    const char tmp_msg_0[] = {118, -12, -69, -95, 114, -87, 102, -95, 107, -94, 42, 58, -85, 102, 82, 89, 59, -115, 118, -28, 1, -63, 110, 99, 60, 90, -84, -41, 44, 19, 8, -54, 23, 82, -93, -48, 102, -64, 121, -64, 9, 93, -117, 120, -23, -98, -60, 81, 49, 75, 40, -113, 24, -107, -53, 90, -60, -78, -8, -31, 55, 79, -20, 86, -32, -113, 7, 72, 95, 111, 87, 104, -102, 13, 100, 123, -121, 51, 113, 41, -78, -83, 33, -46, -47, 118, -98, -12, -88, 4, -87, -68, -113, 122, -94, -91, -92, 15, 51, -105, 80, -78, -10, -95, 109, -7, 71, 15, -40, -98, -80, -56, 80, -46, -50, -15, -49, -116, 36, 119, -51, -49, -67, -117, -57, 48, -4, -112, -29, 107};
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
    msg.setTimeStamp(0.07202286279546954);
    msg.setSource(30800U);
    msg.setSourceEntity(37U);
    msg.setDestination(32962U);
    msg.setDestinationEntity(200U);
    msg.seq = 2821604921U;
    msg.state = 143U;
    msg.error.assign("RPKBTIINSZVZKVTPODJCQRVKOQFFOAHQWXRFQEHZERJAZOQVZYY");

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
    msg.setTimeStamp(0.4336657512201847);
    msg.setSource(50452U);
    msg.setSourceEntity(252U);
    msg.setDestination(47938U);
    msg.setDestinationEntity(90U);
    msg.seq = 2039244192U;
    msg.state = 217U;
    msg.error.assign("YSQDIDKDWQOIHACQHRXZYMILLNYXXEJGLLRWCZPTICDTJMOPGWWKZNWGPLMHKINDTJRJQOMNNMUBHQBNHNHXQJBSSWSKTYGZZITAAXZZYABFXAHTFKOBBFVAVYYIPMXFGSMREIFUXSLGSPBMWLEVPYJVIJEHFGPKVXYU");

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
    msg.setTimeStamp(0.7846182963746783);
    msg.setSource(50719U);
    msg.setSourceEntity(9U);
    msg.setDestination(41443U);
    msg.setDestinationEntity(44U);
    msg.seq = 3253895878U;
    msg.state = 64U;
    msg.error.assign("EQMHENOSIUOCTDAZEMJXZQFOQTDYZGHCWKFJYHQLNGAIJDSBRUKBVSPLSXOKNXWCZDRGRDNMXXTTKHARKPMQXDCNMBHWYIVBOQWWGOJEPUMPXDXIJZJJKTEPPOQKUCWESMONFASPLLLRZGN");

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
    msg.setTimeStamp(0.8940715784469027);
    msg.setSource(20937U);
    msg.setSourceEntity(1U);
    msg.setDestination(28242U);
    msg.setDestinationEntity(119U);
    msg.origin.assign("VUARVRDTNBCPNLXXBHGSARIWHZKFQTVOHIMPIZAJFJMHNUGZZCLGBWQSDTOOHMGWYNNCQEDTEHDQMLDXWPBYUUNWAYLFQMOXRXOSVLGVKJSMOJETDWZQVENYDUCTZKTYAZGGWBERXKSAYVRXTZRPTFWWKJI");
    msg.text.assign("BAPYZINXPJBXVVCVUTPMEWRI");

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
    msg.setTimeStamp(0.07912467131883916);
    msg.setSource(60887U);
    msg.setSourceEntity(112U);
    msg.setDestination(26194U);
    msg.setDestinationEntity(149U);
    msg.origin.assign("JIZMZLUPYYPVQSGFBHMRUNLGTTFZXNBCODYRZIPCCGVSRDIOCAYXTKSMATEY");
    msg.text.assign("FLDRBWNGZSCQOQRLXZBPBMCAZNBFTJQEKOCNJAGFLGUOULEUOJPJRQRZVPOAKX");

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
    msg.setTimeStamp(0.5600261439670629);
    msg.setSource(6230U);
    msg.setSourceEntity(141U);
    msg.setDestination(24262U);
    msg.setDestinationEntity(164U);
    msg.origin.assign("CMUHCYZEGSZFXTANHQBUWJJPORWAVPKJNXDJXLCYFILDMSWZBORDDBSYVSNPQPCROCMLYIECQMYULQURIIOZTHGJOJLKWCHRXACSGIGASGFKYLKLRIOWFNNDOXGHFZYIVTECMIQNETXVPNXSEGQZUDMVDOVWTIKHMPHOVWSBMTOZFPYQSAEDAEULPTRHPNWFRWKTRYKGJYQFUQBFDUAZBKDVBJENKLZXR");
    msg.text.assign("GDFQUUEHSRYTQXWNHXJGMZXCRKIDKNTYZPQYYTPSXWBSFZREDWYWVEKEPZKPLAQSYMJOFZTFLWCNPPCBPVCW");

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
    msg.setTimeStamp(0.45001938654160656);
    msg.setSource(18049U);
    msg.setSourceEntity(180U);
    msg.setDestination(14039U);
    msg.setDestinationEntity(122U);
    msg.origin.assign("MRDBWOOIZXKBAVWLIDLTTCQITFXSKZIIOAARRYYIDHFZAXIPCUSISVSYULPMURQFWHBGEKADFOUVNZTWNVDSNEEMKYGZLSLWJHQVNKOHXKYVWTYRZEVOECBQMUFLQWVHEOZKDFZJCYPOAJXONHUWLESQRANLTPJYBQMCHBHJRSFRPKQMUJXYFGTMUFNQCGZIUPBEDNDR");
    msg.htime = 0.14606965953770568;
    msg.lat = 0.8806228317148848;
    msg.lon = 0.9418927832206948;
    const char tmp_msg_0[] = {126, 113, -60, -50, -90, -61, 70, 109, 22, -35, -82, 89, -96, 99, 32, -34, 51, 99, -12, -103, 114, 17, -56, -93, -27, 73, -34, 32, 121, 61, -21, 28, 82, -105, -107, -7, 40, 35, 20, -66, -55, 23, -5, -122, -46, 13, 107, 6, -105, 120, -52, -41, 44, -55, 22, -21, -84, 69, 85, 96, 52, 43, 32, 41, 27, -104, -102, -40, -41, -30, 5, 26, -85, 61, -14, -89, -11, 15, 11, 53, -5, 125, 50, 3, 25, 120, -104, 21, -113, 77, -12, 4, 26, -21, 41, -36, 12, -92, -80, -113, 41, 65, -102, -10, -126, -105, 46, -79, 62, 35, 55, -53, 24, 113, -19, 104, -110, 34, -123, -107, 95, -121, 71, -43};
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
    msg.setTimeStamp(0.12034878628999646);
    msg.setSource(52293U);
    msg.setSourceEntity(116U);
    msg.setDestination(26758U);
    msg.setDestinationEntity(227U);
    msg.origin.assign("HEKMPNNNXIFIDZFVHGBIOASCCOPCMEZIIAJJHWYKNGPTYFXRGFNOWECBIQQDFVBJQNHSHHGIWKLOLRJSULJWNFTLPVXJHRPHWBBEVMLQSUNKVDESMUXTDIDCAYGIRZNWUJVBZSTFYYQPYZDAOOPXRSAQRDYHXZCMVGOKEVAAPJKQVLUWGXKYYUBS");
    msg.htime = 0.23764505563140081;
    msg.lat = 0.5510907001743425;
    msg.lon = 0.4241212689986814;
    const char tmp_msg_0[] = {99, -66, 95, 102, 49, -82, -102, -40, 62, -123, 112, -100, -19, -32, 42, -110, 87, 86, 28, 76, -83, 26, -12, 46, -65, 4, -103, -116, 49, 79, -116, 70, -21, -37, 87, -117, 77, -98, -126, 86, -5, -56, 23, 88, -6, 18, -65, -41, -19, 83, 80, -44, -49, 19, 96, 50, 44, 72, -70, 22, 31, 122, 16, 21, 110, 35, -84, 63, 49, 53, 57, -40, 104, -91, 78, -55, -63, 22, -113, -115, -35, -118, 125, -38, -86, -18, -109, -52, 16, -53, -85, -68, 23, 56, 121, 45, 89, 114, -88, 36, -108, -70, -21, -106, -20, 48, 93, -54, 33, 24, 10, -8, 29, 29, -87, 106, 83, 12, 61, 101, -47, -71, -102, -14, 45, 15, -110, -21, -104, -102, 49, -83, -126, -2, -63, 104, -8, -115, -28, -11, 108, 100};
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
    msg.setTimeStamp(0.20825666204113247);
    msg.setSource(64376U);
    msg.setSourceEntity(144U);
    msg.setDestination(60299U);
    msg.setDestinationEntity(235U);
    msg.origin.assign("FXYXEDUREBHJQRSLXZWUNDYSPXEOOZCNWCFXUUFRJSDQXBPLLMASAPATMVZQRDPOTKTJCCMUIVZOHZNQMDIGWYXGFAGUYOYSFWGWAEGQSCLPCQOKETQFIMXPKHWWGRGQDGHICWZOZIVXIAVDJKLNQLRZNGLHMAVXEHVYKYVNZZRFOHBPUNHCEHNFJATIMWMLRBCSUTEEBSTOSBCABKLJVBWDJONJPIQKGKYMJLNKJUHDSFPBDTAM");
    msg.htime = 0.4838238378353015;
    msg.lat = 0.8410271328920259;
    msg.lon = 0.1128499827806646;
    const char tmp_msg_0[] = {-48, -1, -44, 94, 22, 33, -111, 19, 47, 3, 106, -4, -69, -49, 117, 3, 80, -47, 125, 80, -9, -121, 103, 33, 121, -127, -126, 34, -48, 83, -48, 95, 30, 20, -96, 45, 48, 21, -109, 20, 14, -61, 21, 60, -61, -26, 37, -93, -20, -69, -39, -59, 5, -108, -7, -120, -71, -1, 3, -106, -8, 6, 108, 19, 39, 116, -21, -37, 123, -48, -38, -117, -62, -55, 11, 120, -69, 56, 85, 19, 103, 123, -3, -64, 110, -67, 23, -114, 51, -103, 51, 86, 100, -85, -47, -77, -71, 63, -85, -94, -6, -85, -83, -9, 26, -35, -110, 60, 68, -10, -111, 54, 3, -106, 37, 17, 33, 81, -112, -125, -24, -115, -33, -19, -110, 2, -8, 113, -125, 37, 104, 62, 13, -20, -20, 115, 95, -39, 7, -54, 50, -68, -85, 49, -63, 82, -16, -25, 41, 107, 35, -26, 63, -62, -20, -29, 81, 46, 75, -125, -107, 110, 57, 56, -38, 80, -51, 48, 113, 113, -14, 43, 97};
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
    msg.setTimeStamp(0.35357569803182);
    msg.setSource(18476U);
    msg.setSourceEntity(149U);
    msg.setDestination(13063U);
    msg.setDestinationEntity(88U);
    msg.req_id = 58537U;
    msg.ttl = 33374U;
    msg.destination.assign("KKWYJYMALDWQPWIBAQYCWTYYQGTUOGNTTTHHZCLH");
    const char tmp_msg_0[] = {101, -18, 78, 109, 77, -27, -123, -3, -82, 25, 15, -81, 76, -110, -18, -97, 29, 85, -29, 126, -42, -94, 55, -34, 14, 120, -81, 53, 8, -111, -55, -68, -108, -40, -27, 27, 124, -113, -23, -18, 64, 113, -90, 21, -118, 47, -91, 45, 33, 123, 31, 17, -54, 95, 56, 16, 6, -46, 85, 70, 82, -119, 115, -63, -110, 75, 114, -107, 6, -48, 39, 34, 76, -100, 71, -126, 120, -51, 49, -58, 105, 93, 104, -76, 53, 32, 59, 15, 111, -63, -45, -108, -22, -105, 98, -65, -31, 94, -105, -49, -59, -73, -64, 76, -29, 96, 71, -43, -77, -70, -75, -37, 103, -85, -64, 90, 28, 3, -36, -30, 69, 57, -91, 70, -72, 47, 30, 113, 42, -80, 25, -57, -30, 98, 11, -42, 55, 24, 63, -3, 117, 31, -75, 64, -77, 61};
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
    msg.setTimeStamp(0.5686463464172388);
    msg.setSource(46055U);
    msg.setSourceEntity(233U);
    msg.setDestination(42842U);
    msg.setDestinationEntity(229U);
    msg.req_id = 45918U;
    msg.ttl = 61142U;
    msg.destination.assign("ZOCRGXILLRDGSJABGSVDXOQIKOHQEBBFPMTJSSCUNFXCVQIGYNPHDFVRZEOLUZITLYDZLXNBECMWMLVCYOTDJHAJAARSGXMPEBHZRBMFMNHXBXAUZSPNICVKATRUKCWXEPXWDYHLVKLYOWTJUQFSMGUJWALBWAEYCEFVBUGKWQRKELKIENPFN");
    const char tmp_msg_0[] = {27, 41, 0, -120, -6, 92, -36, -38, -105, -69, -81, -13, -2, 87, -45, -9, 117, 64, -121, -93, 20, 39, 32, -92, 22, -44, 88, 111, -35, 37, 32, 87, 106, 27, 71, 119, 14};
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
    msg.setTimeStamp(0.15218948997100934);
    msg.setSource(12176U);
    msg.setSourceEntity(43U);
    msg.setDestination(24787U);
    msg.setDestinationEntity(189U);
    msg.req_id = 2880U;
    msg.ttl = 2926U;
    msg.destination.assign("EKTVPSCAWBSELFGCYYLFFIUSOQTKTEXGNPRDXGZYUOSKZHNITMVSOEPNBJBHJFLLBSLTJHGDXWQGDLXVRTKCWCGFJRZAZGBSAGYORRLZOEAMJCEMXVBKAFXICXAODRMZIRHTKZXNOBZYOOZUFUDYUTNPDNSQMSECFYPWQPCZNWNFMMNJIJUGHWLIMQHDYAELSPEQUIUHIXWYIVD");
    const char tmp_msg_0[] = {-84, 99, -121, -94, 100, -89, -121, 112, 36, 82, -20, 125, 119, -24, 30, -123, 71, 86, 124, -61, -95, -111, 101, -8, 49, 61, -64, -90, -45, -73, -65, 1, 46, 119, -124, -97, -103, -68, 71, -39, -81, -55, -92, 114, 60, -83, 1, 118, 9, 115, 12, -80, 68, -102, 88, -89, 86, 98, 109, 101, 45, -103, 18, -38, 87, -118, -24, 91, 21, 65, 91, 4, 88, 118, -16, 1, -84, 74, -21, -108, -79, -1};
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
    msg.setTimeStamp(0.15181011670076394);
    msg.setSource(56555U);
    msg.setSourceEntity(202U);
    msg.setDestination(44826U);
    msg.setDestinationEntity(27U);
    msg.req_id = 27288U;
    msg.status = 39U;
    msg.text.assign("XTUHVWTDPGIUEUVRWLMBJCLSBXFZRAEOQPXDHVYDMIIPHDBIYNLOSZSMYQAVUCYAKAPDCJARGRMOMOALXQFTSSCSKVUZEUBGJPKDWFNZBJBGZXRDQLMFEYQISDOSHUMNTTJNVIKYLIAXNFVYSFRQHXYOLZLXDQUTNNNWIYACPECWPEGRZHOJWDBKFJ");

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
    msg.setTimeStamp(0.3632418258696565);
    msg.setSource(57234U);
    msg.setSourceEntity(93U);
    msg.setDestination(14651U);
    msg.setDestinationEntity(52U);
    msg.req_id = 17985U;
    msg.status = 48U;
    msg.text.assign("ZZWBDJUMYQUMHRNKLDSVGGEPXDYUVCNZETEZBTRBTPUELZBFQUBRIGJAYRSMXGDIDCGIGNSYGNWZIHFPCVACMETYOBKDMOXLFUCHXAJF");

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
    msg.setTimeStamp(0.39902468976812566);
    msg.setSource(16133U);
    msg.setSourceEntity(76U);
    msg.setDestination(3601U);
    msg.setDestinationEntity(210U);
    msg.req_id = 57311U;
    msg.status = 131U;
    msg.text.assign("ZLSVEHVEKEVTHRETVVQFNQYEQYSXLWIIVQFOXTLARRMDKTQGZLNRULCHYCWPJDWMGFORHZFNHFAIYNIZPWCJJKNJPAIBKQWSOOZJYSECKOPBPGUIAAMDKKUFNHNMDIIPMKMWASDFNOVCEBLYSBHUVOBIF");

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
    msg.setTimeStamp(0.9189905646658864);
    msg.setSource(53205U);
    msg.setSourceEntity(103U);
    msg.setDestination(24089U);
    msg.setDestinationEntity(84U);
    msg.group_name.assign("BNQKPFNYBRYJKZKEVXJQXOEZZYZNMCWYUGUKEPTWJDSOGLIVFESTMXKAVIFQAMW");
    msg.links = 2501762725U;

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
    msg.setTimeStamp(0.4653099576034757);
    msg.setSource(59626U);
    msg.setSourceEntity(196U);
    msg.setDestination(15231U);
    msg.setDestinationEntity(250U);
    msg.group_name.assign("QRWEQMNIHCRIHFGPSBPZJHPAOYSJUVUIDHHESFLCZWIVBPJFGYLCVBOWFLPBYWXMCFXTOLBCNUCTKPGWJKEVLMCSJKKATFWHVGKSODXVHTDTBAHXMNESJDQOFHENIQLWYRDDOVMMALKUCREQZFEIUBALJBUXXHUAXKETNOYZSQWDZRTYYBTUKZVDKWQMMLDFIPNCAG");
    msg.links = 3366175992U;

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
    msg.setTimeStamp(0.8103447679345948);
    msg.setSource(57129U);
    msg.setSourceEntity(3U);
    msg.setDestination(58122U);
    msg.setDestinationEntity(179U);
    msg.group_name.assign("TNGEWMZUASUSQRKPALBJJAQSRVDWUANXAXITKLDXBGWTFJQCYEGWXEDQUGFEHSIWKBHOYRXQPVEHICOLIAFWKPBOQXVMHNSCVCPEPBCRKLFXGSVRVMXTFTFMMUOLRPIKNYWDHTNZDQJOTSUKPIZQNKJKEVGTMFMBLZUTAOGNCSYEDWRVHVZERZXYAMDNDYSZCMYBZAIOIUBRJDFIZPDHY");
    msg.links = 2597260849U;

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
    msg.setTimeStamp(0.35425745048857993);
    msg.setSource(1348U);
    msg.setSourceEntity(167U);
    msg.setDestination(42726U);
    msg.setDestinationEntity(84U);
    msg.groupname.assign("RMQTGAAHJGNGFUHXMHUZPOLRFDJOLIVAIJFDPRFZNWVKMQXSILKHSPGBTIAAHVQKEMSSJXECLJSRFLRBDAFXXBZWMPWDOKOMZXDYSFDCZIHUCTKHYAHDWOVPYSOLGCTUVIUGROZEEEYSLMVYKCPPLUOYPWNAXHBJICCULTJFTIQRBRCOBKWJBGOSBQWTQQBAYENDVQNLUDDEQZRSFWBKYWMXRXNGQAPMTKEIYXJITKVZNNMYWJ");
    msg.action = 3U;
    msg.grouplist.assign("XMSZLIQDZBMRNSWXOWOAFQYWCCBJLYNNUTFHOFWEQBGKHOUECRBYLIGDMSEFCWFJX");

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
    msg.setTimeStamp(0.5190243379745069);
    msg.setSource(5136U);
    msg.setSourceEntity(15U);
    msg.setDestination(64089U);
    msg.setDestinationEntity(34U);
    msg.groupname.assign("DPFWBNMNYKETSNKEMFAZEZVSIPDTKMRVYECYKPCXJTMVCVRFVVFXLIGPLLFBMVVNULABKYIFQSQQKESRHLTONRTDXJBHTUAHTAWAPIDOCHSSBWDUFCJOTKMGUGZMGXICWWQWFGAXCNLPIOBQUZZBYSTBDWZLGHYORPCHJAUZXGGRGXYVROODXFCANGRYLXUUWWDEQAQPJJZELIWSMJHHJSEF");
    msg.action = 91U;
    msg.grouplist.assign("PWAXPWBDLISQLETNLMQMINRGNHMOKJCPSFSFVTVKIUOOHFXKMCHUYZAIYRRRNGDQQVFTTFEOEXURNOK");

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
    msg.setTimeStamp(0.9416051566992734);
    msg.setSource(40284U);
    msg.setSourceEntity(107U);
    msg.setDestination(2416U);
    msg.setDestinationEntity(115U);
    msg.groupname.assign("BYRJCONSTRHGBDIVYGCCORWVQANBAZMAUKRDRMDLSCWXZEHANUTTIWQBYRZARFPBJETHZNEYQ");
    msg.action = 218U;
    msg.grouplist.assign("DNFJGWDBRCLUEIXKVCYODMQBTIQDTUOWJBDGYJCLOAHCLEABMSRCKQEMXYYFGPMMWAHAIYXQERPAXPNPXEFOGPLDZZQKIBZEZLFSIKRRFWZOSCHOCARBNPHISXYJZIASB");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.5466707185812073);
    msg.setSource(30742U);
    msg.setSourceEntity(235U);
    msg.setDestination(39018U);
    msg.setDestinationEntity(170U);
    msg.id = 163U;
    msg.range = 0.1691093629012429;

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
    msg.setTimeStamp(0.4531243281823133);
    msg.setSource(5142U);
    msg.setSourceEntity(135U);
    msg.setDestination(13453U);
    msg.setDestinationEntity(182U);
    msg.id = 217U;
    msg.range = 0.7258952805571702;

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
    msg.setTimeStamp(0.5396953378445005);
    msg.setSource(37109U);
    msg.setSourceEntity(77U);
    msg.setDestination(6572U);
    msg.setDestinationEntity(119U);
    msg.id = 87U;
    msg.range = 0.4355985297417483;

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
    msg.setTimeStamp(0.5272050366975726);
    msg.setSource(46700U);
    msg.setSourceEntity(22U);
    msg.setDestination(15464U);
    msg.setDestinationEntity(240U);
    msg.tx = 231U;
    msg.channel = 163U;
    msg.timer = 63256U;

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
    msg.setTimeStamp(0.7500554651492266);
    msg.setSource(5559U);
    msg.setSourceEntity(30U);
    msg.setDestination(12193U);
    msg.setDestinationEntity(245U);
    msg.tx = 230U;
    msg.channel = 203U;
    msg.timer = 40615U;

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
    msg.setTimeStamp(0.8850390849543888);
    msg.setSource(29585U);
    msg.setSourceEntity(100U);
    msg.setDestination(31970U);
    msg.setDestinationEntity(254U);
    msg.tx = 152U;
    msg.channel = 45U;
    msg.timer = 44589U;

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
    msg.setTimeStamp(0.18063863559498483);
    msg.setSource(28694U);
    msg.setSourceEntity(243U);
    msg.setDestination(57913U);
    msg.setDestinationEntity(124U);
    msg.beacon.assign("VNCLBDQFIJMRZWXZLZFPGPFJWBJOBFHASNADPAEKXZCZCEINTWQPGNUUNNKLPAUEYBNROIGCVHTBEIQTAGROJGZDYPCKYBXXHZZAHSHWKTJCEHPRIRMWTHTOWOYIKWEOE");
    msg.lat = 0.6579998496695367;
    msg.lon = 0.3917818944559043;
    msg.depth = 0.5866718204579378;
    msg.query_channel = 138U;
    msg.reply_channel = 124U;
    msg.transponder_delay = 7U;

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
    msg.setTimeStamp(0.9373896618897103);
    msg.setSource(37951U);
    msg.setSourceEntity(117U);
    msg.setDestination(64502U);
    msg.setDestinationEntity(143U);
    msg.beacon.assign("THYTXDOSWXYAFBEWUTKXHOAFQNOZWQVYWSJUWZAEIMEXFFOCYCQUZTMWLLJDDPSU");
    msg.lat = 0.9806987627988172;
    msg.lon = 0.1783808255954158;
    msg.depth = 0.8086132014207673;
    msg.query_channel = 80U;
    msg.reply_channel = 118U;
    msg.transponder_delay = 2U;

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
    msg.setTimeStamp(0.110946732096185);
    msg.setSource(44879U);
    msg.setSourceEntity(237U);
    msg.setDestination(29841U);
    msg.setDestinationEntity(50U);
    msg.beacon.assign("ESDBKTDXBWEOWYGGKDAWIJOIRKKROVWHLPTIZYVWLJFAZFHGKJITLYCTZSINZUHNSLTDLSPTQENRLVXKEJPWAIUZFZELHBOVETROKWUXAYYJPFYMCTMRVUSYXYGM");
    msg.lat = 0.5630302119643161;
    msg.lon = 0.5604520884799367;
    msg.depth = 0.11622043784436997;
    msg.query_channel = 63U;
    msg.reply_channel = 202U;
    msg.transponder_delay = 174U;

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
    msg.setTimeStamp(0.2917890001299944);
    msg.setSource(23819U);
    msg.setSourceEntity(205U);
    msg.setDestination(46289U);
    msg.setDestinationEntity(162U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.9807124398085878);
    msg.setSource(63320U);
    msg.setSourceEntity(33U);
    msg.setDestination(36123U);
    msg.setDestinationEntity(51U);
    msg.op = 163U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TDYDIROAMOKAACFSTPQDGOSBUUDWBROQDNXUVLSXICYUNJJBOKLQBTYTSCVFOUPHEHSLXSCTKNKRFXGFVFZMMHNNOYJIXZRPJIDRCSTPEFWJHZPKGSGEKVHVCWYBMZTIYJWEQWKHUQGYOUBTWBKNNMNWZXTELIDQZSV");
    tmp_msg_0.lat = 0.14797792484518524;
    tmp_msg_0.lon = 0.9201217188838234;
    tmp_msg_0.depth = 0.3650915915257531;
    tmp_msg_0.query_channel = 86U;
    tmp_msg_0.reply_channel = 85U;
    tmp_msg_0.transponder_delay = 120U;
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
    msg.setTimeStamp(0.80899620242128);
    msg.setSource(27590U);
    msg.setSourceEntity(34U);
    msg.setDestination(52549U);
    msg.setDestinationEntity(80U);
    msg.op = 158U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XYIRKTSZQXBFLAHJFYKOHBPGZWRFENLDUYINLFTPLSKQERUSPOXCUHBHASETOKZQXCGGSKEAMQPDBECEJCUOBDIZPDUEKHYUOMAMGPZJECAMOISJBKNSWRIXVNBSMWGASYDNLIGRVOHQMAVVYPTXEUYZMQNXKZPIVRYZGWLFLNCEMWHWFYLLCWW");
    tmp_msg_0.lat = 0.20309030406127326;
    tmp_msg_0.lon = 0.02965670381716856;
    tmp_msg_0.depth = 0.9094211543080839;
    tmp_msg_0.query_channel = 46U;
    tmp_msg_0.reply_channel = 131U;
    tmp_msg_0.transponder_delay = 52U;
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
    msg.setTimeStamp(0.8980715640479844);
    msg.setSource(44773U);
    msg.setSourceEntity(102U);
    msg.setDestination(21265U);
    msg.setDestinationEntity(34U);
    msg.address = 184U;

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
    msg.setTimeStamp(0.19133152356292482);
    msg.setSource(39898U);
    msg.setSourceEntity(228U);
    msg.setDestination(43013U);
    msg.setDestinationEntity(73U);
    msg.address = 209U;

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
    msg.setTimeStamp(0.4583176027121425);
    msg.setSource(62072U);
    msg.setSourceEntity(49U);
    msg.setDestination(34163U);
    msg.setDestinationEntity(158U);
    msg.address = 6U;

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
    msg.setTimeStamp(0.6132156645827909);
    msg.setSource(49990U);
    msg.setSourceEntity(109U);
    msg.setDestination(49679U);
    msg.setDestinationEntity(225U);
    msg.address = 157U;
    msg.status = 112U;
    msg.range = 0.6186854084675286;

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
    msg.setTimeStamp(0.14148466445474595);
    msg.setSource(3283U);
    msg.setSourceEntity(84U);
    msg.setDestination(57826U);
    msg.setDestinationEntity(230U);
    msg.address = 21U;
    msg.status = 63U;
    msg.range = 0.5777159223530499;

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
    msg.setTimeStamp(0.771301388238209);
    msg.setSource(47773U);
    msg.setSourceEntity(55U);
    msg.setDestination(28815U);
    msg.setDestinationEntity(227U);
    msg.address = 215U;
    msg.status = 199U;
    msg.range = 0.8795167835722625;

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
    msg.setTimeStamp(0.00190027869050291);
    msg.setSource(2741U);
    msg.setSourceEntity(88U);
    msg.setDestination(10654U);
    msg.setDestinationEntity(221U);
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.8922342464153458;
    tmp_msg_0.type = 16U;
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
    msg.setTimeStamp(0.9591874719467034);
    msg.setSource(52931U);
    msg.setSourceEntity(174U);
    msg.setDestination(21353U);
    msg.setDestinationEntity(222U);
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 12781U;
    tmp_msg_0.name.assign("SYSUYZZGBPZFJOMJRLGCUPDLUZEYOHBPWOHPJVLEWPCNDSJEFUGCHREJVRNNCQCRNGHBMJIHHDECWPUYRFMXILRUVOEVLEXIEXSJPWIXULMTHRLBXXBRAT");
    tmp_msg_0.custom.assign("IKNKBOMCSXNCBKSKGXWAHBMRZTAFRBNQFEGRWDQAOMLJNMUFPOGRJFBYDFEPBKHQWTZKAQSWZDXNPMGCPGEQBSJVVSNHJYBEHGXSDTNZVHUFYOJYCKBLUYFRTLMVLXUPHUEAJLTDWQHPJAIZJMODVXHQXGWDRVYUAGAETWKNMRXIIFWDCZNEYTPIIJRTJMLCSIDIMRXEZONUAVYOAUWZKLRYWLFCXVBSHHSVULZKOQCFUOP");
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
    msg.setTimeStamp(0.6294452571642692);
    msg.setSource(62423U);
    msg.setSourceEntity(164U);
    msg.setDestination(34124U);
    msg.setDestinationEntity(161U);
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 29770U;
    tmp_msg_0.ttl = 36015U;
    tmp_msg_0.destination.assign("JNCTABLVJLPHWBGMRKXSAIEBPXIALZYOKMSXY");
    const char tmp_tmp_msg_0_0[] = {-21, -123, 20, 11, -40, 41, -98, -21, 49, -106, -59, 42, -73, 36, -80, -40, -19, -101, -75, -128, 42, 18, -7, -118, 104, -11, -126, 83, -25, 58, 57, 17, 29, -79, -48, -35, 84, -100, 36, 50, 30, 107, -58, 126, 74, -80, 106, 54, -83, 101, -90, 48, -40, -96, 38, -96, -51, 36, -1, 8, -114, -42, -78, 118, -79, 66, 52, 35, 20, 29, -22, 93, -8, 0, 81, -41, 33, 59, -18, 95, 59, 77, -4, 63, -86, 69, -91, -14, -3, -87, 124, -75, 1, 91, 49, 71, -45, 103, -121, 76, 45, 92, -4, 116, 70, -77, -25, -5, 118, -25, 9, -53, 24, 63, -86, -5, -89, 49, 19, -121, 103, -69, 79, 106, 5, -126, 69, 6, 45, -102, -73, 48, -39, 37, -118, -82, 67, 126, -14, 120, 93, -19, 120, -78, 94, -3, -73, -88, 43, -63, 106, 53, 90, -55, 99, 13, -100, 96, -34, 86, -6, 25, 123, -91, -113, -65, -32, -88, -111, 0, -24, -25, 91, -2, 69, 73, 53, -90, 8, -51, 22, -98, -108, 31, -37, 79, 99, -98, 68, -102, -5, -4, 103, -32, -11, 110, 92, 40, -2, -124, 53, -25, 98, -17, -50, -16, -93, 122, -26, -54, -81, -110, 124, -10, 73, 57, -37, -116, -70, 61, -66, 9, -39, -3, -48, 14, -7, -73, 17, -68, -109, 32, -117, 42, 64, -94, 37, 96, 97, 17, -64, 54, 78, 11, -59};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.32252573117864514);
    msg.setSource(8445U);
    msg.setSourceEntity(56U);
    msg.setDestination(15793U);
    msg.setDestinationEntity(157U);
    msg.enable = 139U;

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
    msg.setTimeStamp(0.35675611962351983);
    msg.setSource(25926U);
    msg.setSourceEntity(215U);
    msg.setDestination(40973U);
    msg.setDestinationEntity(126U);
    msg.enable = 157U;

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
    msg.setTimeStamp(0.8275459602296881);
    msg.setSource(28412U);
    msg.setSourceEntity(76U);
    msg.setDestination(52547U);
    msg.setDestinationEntity(26U);
    msg.enable = 188U;

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
    msg.setTimeStamp(0.07182895786838805);
    msg.setSource(96U);
    msg.setSourceEntity(191U);
    msg.setDestination(60752U);
    msg.setDestinationEntity(18U);
    msg.summary = 206U;
    msg.level = 93U;

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
    msg.setTimeStamp(0.7150649072814056);
    msg.setSource(64605U);
    msg.setSourceEntity(142U);
    msg.setDestination(56565U);
    msg.setDestinationEntity(240U);
    msg.summary = 112U;
    msg.level = 148U;

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
    msg.setTimeStamp(0.2812384516070915);
    msg.setSource(21904U);
    msg.setSourceEntity(170U);
    msg.setDestination(18126U);
    msg.setDestinationEntity(56U);
    msg.summary = 37U;
    msg.level = 68U;

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
    msg.setTimeStamp(0.4603135684847115);
    msg.setSource(54030U);
    msg.setSourceEntity(196U);
    msg.setDestination(48643U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.455925876482551);
    msg.setSource(59708U);
    msg.setSourceEntity(245U);
    msg.setDestination(15456U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.7406249024442253);
    msg.setSource(33368U);
    msg.setSourceEntity(103U);
    msg.setDestination(46292U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.183868634119434);
    msg.setSource(34996U);
    msg.setSourceEntity(226U);
    msg.setDestination(51122U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.6114008818844775);
    msg.setSource(57086U);
    msg.setSourceEntity(253U);
    msg.setDestination(63302U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.9011789222743067);
    msg.setSource(13557U);
    msg.setSourceEntity(187U);
    msg.setDestination(3814U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.11879563536057614);
    msg.setSource(48707U);
    msg.setSourceEntity(225U);
    msg.setDestination(27336U);
    msg.setDestinationEntity(60U);
    msg.op = 123U;
    msg.system.assign("JLHJVOKXEHMWGVBSWKPOGGXNLCQDHLPYVHVAVCIZNEZFYREMFIHTFYLBKFTHOTOIELRLKMNUQW");
    msg.range = 0.7097966123737174;
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 220U;
    tmp_msg_0.x = 0.55245534203389;
    tmp_msg_0.y = 0.4715164859397598;
    tmp_msg_0.z = 0.5668722731782856;
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
    msg.setTimeStamp(0.25280350284774133);
    msg.setSource(2337U);
    msg.setSourceEntity(92U);
    msg.setDestination(47213U);
    msg.setDestinationEntity(7U);
    msg.op = 245U;
    msg.system.assign("BSYHXTNYDOENDBOBHTCOVYUMWUUKEGZOANJPXUNEJCCQLDXWUBFXLIKXTJSGFTQIAQVADUCREXXPRMPGYRSWJGAVSCKRGIJVIYVULFMUXCDOOWQVPAMXXWTMCFQWDKSJKBFGRBCZAAPNZTYKGZLPSEHNPLLYSRVLOFLHZATQUHYJLWNMYOZGWGZVLR");
    msg.range = 0.5545282961678956;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 233U;
    tmp_msg_0.period = 2236777295U;
    tmp_msg_0.duty_cycle = 2445146033U;
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
    msg.setTimeStamp(0.3529700717052261);
    msg.setSource(10329U);
    msg.setSourceEntity(10U);
    msg.setDestination(27721U);
    msg.setDestinationEntity(187U);
    msg.op = 46U;
    msg.system.assign("VKZFXTYTMNXKWCTZEJTGYKXTD");
    msg.range = 0.27740161801410457;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("OFNTEFKPQIANCYXINFEMBCXVBTRTTHIYYSJFXNWURGKAOMOGLHDGKVSWLNQUXKKCZSETVOFQZUFTQSFDVBBAZAPIFEXWMVUJRCHDVHTYWPDHRQEDRMZZKUWSEMVMDGNKHYTLLGHBRBRKRPMGNO");
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
    msg.setTimeStamp(0.1031911100150269);
    msg.setSource(38963U);
    msg.setSourceEntity(29U);
    msg.setDestination(41215U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.21389288363358616);
    msg.setSource(23931U);
    msg.setSourceEntity(128U);
    msg.setDestination(40325U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.5767860794397137);
    msg.setSource(49280U);
    msg.setSourceEntity(242U);
    msg.setDestination(21419U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.49017473391927624);
    msg.setSource(13474U);
    msg.setSourceEntity(228U);
    msg.setDestination(31627U);
    msg.setDestinationEntity(170U);
    msg.list.assign("ZRJQYCDDLGZTGZENWCBSYHGJEXNDHYBDXUZLYXFQFGVREWKHBTYKJFVVHBXBBJGTTBEEPVCEHPZIDQOLMOSKLJIOPAXNGLTQQJSF");

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
    msg.setTimeStamp(0.09726874839889976);
    msg.setSource(33687U);
    msg.setSourceEntity(148U);
    msg.setDestination(45406U);
    msg.setDestinationEntity(116U);
    msg.list.assign("MHAYSFIJOLODSPGTWFGPGIXREPGJZJAGYXEIBBNMQODXTZUTZYXQILZVNGXNHJSJAZCBSCMLLAFVQICEVAPHCVRRHOCQBPIUXHINEXCLLTZHAPCVHFUKNPJLEFCMWYKRKQFTTDSNEVBAUYNFEQIM");

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
    msg.setTimeStamp(0.0757221111055506);
    msg.setSource(29507U);
    msg.setSourceEntity(73U);
    msg.setDestination(44162U);
    msg.setDestinationEntity(208U);
    msg.list.assign("CCEUDFXVMQJVNQEVAINFMYOWQVODEYJQVWOZHLBQLLENMBTUXLXXLEPZMXAZLRXUFLMKUTBBNJNMLSRENUAZSAKSPXXJVRTRCKGCDYNYYUCPNPQFNSZGMTDVFQTKOUYSJWYIKHPKWDYYEWBIBRDSOIJTCUVASFHSLGXMOHJMRGNYSPF");

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
    msg.setTimeStamp(0.08845161986487649);
    msg.setSource(60292U);
    msg.setSourceEntity(237U);
    msg.setDestination(33153U);
    msg.setDestinationEntity(185U);
    msg.value = -6078;

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
    msg.setTimeStamp(0.012597268368404801);
    msg.setSource(6081U);
    msg.setSourceEntity(220U);
    msg.setDestination(30540U);
    msg.setDestinationEntity(248U);
    msg.value = 20118;

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
    msg.setTimeStamp(0.027579960774550827);
    msg.setSource(679U);
    msg.setSourceEntity(235U);
    msg.setDestination(20430U);
    msg.setDestinationEntity(82U);
    msg.value = -1689;

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
    msg.setTimeStamp(0.5971028701056867);
    msg.setSource(47751U);
    msg.setSourceEntity(174U);
    msg.setDestination(29345U);
    msg.setDestinationEntity(78U);
    msg.value = 0.8638729522774381;

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
    msg.setTimeStamp(0.4499864106125576);
    msg.setSource(28573U);
    msg.setSourceEntity(221U);
    msg.setDestination(39650U);
    msg.setDestinationEntity(27U);
    msg.value = 0.006999963975919066;

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
    msg.setTimeStamp(0.9782313406163231);
    msg.setSource(30080U);
    msg.setSourceEntity(128U);
    msg.setDestination(13103U);
    msg.setDestinationEntity(99U);
    msg.value = 0.8879018436115347;

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
    msg.setTimeStamp(0.14689506766844262);
    msg.setSource(11766U);
    msg.setSourceEntity(121U);
    msg.setDestination(25998U);
    msg.setDestinationEntity(171U);
    msg.value = 0.4826379979203086;

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
    msg.setTimeStamp(0.3940393220545707);
    msg.setSource(22601U);
    msg.setSourceEntity(44U);
    msg.setDestination(9062U);
    msg.setDestinationEntity(206U);
    msg.value = 0.3494862496310669;

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
    msg.setTimeStamp(0.47855548330891196);
    msg.setSource(45417U);
    msg.setSourceEntity(199U);
    msg.setDestination(42441U);
    msg.setDestinationEntity(117U);
    msg.value = 0.4145985866774269;

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
    msg.setTimeStamp(0.9131683868041931);
    msg.setSource(24939U);
    msg.setSourceEntity(73U);
    msg.setDestination(36884U);
    msg.setDestinationEntity(26U);
    msg.validity = 58701U;
    msg.type = 40U;
    msg.utc_year = 13719U;
    msg.utc_month = 23U;
    msg.utc_day = 205U;
    msg.utc_time = 0.012292531561838627;
    msg.lat = 0.45793122795412877;
    msg.lon = 0.947489825803273;
    msg.height = 0.7913567315508628;
    msg.satellites = 22U;
    msg.cog = 0.8340444158759075;
    msg.sog = 0.8563384648888913;
    msg.hdop = 0.3085136226723646;
    msg.vdop = 0.9999840703755972;
    msg.hacc = 0.6400385703650942;
    msg.vacc = 0.3309768117215178;

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
    msg.setTimeStamp(0.7288631398460931);
    msg.setSource(23356U);
    msg.setSourceEntity(41U);
    msg.setDestination(9454U);
    msg.setDestinationEntity(78U);
    msg.validity = 45158U;
    msg.type = 98U;
    msg.utc_year = 59359U;
    msg.utc_month = 242U;
    msg.utc_day = 119U;
    msg.utc_time = 0.21952106929509108;
    msg.lat = 0.36886542049905624;
    msg.lon = 0.36297955761048417;
    msg.height = 0.4145634462086022;
    msg.satellites = 124U;
    msg.cog = 0.5192018160173919;
    msg.sog = 0.06178160760879825;
    msg.hdop = 0.5861972883487061;
    msg.vdop = 0.08134190140144493;
    msg.hacc = 0.9964271784737095;
    msg.vacc = 0.46006799803324316;

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
    msg.setTimeStamp(0.8105348155688515);
    msg.setSource(9779U);
    msg.setSourceEntity(54U);
    msg.setDestination(30621U);
    msg.setDestinationEntity(115U);
    msg.validity = 15151U;
    msg.type = 221U;
    msg.utc_year = 64623U;
    msg.utc_month = 2U;
    msg.utc_day = 124U;
    msg.utc_time = 0.16704607634484092;
    msg.lat = 0.5708215629299379;
    msg.lon = 0.16354100801390214;
    msg.height = 0.25679897507040805;
    msg.satellites = 214U;
    msg.cog = 0.487723172230464;
    msg.sog = 0.5495400106757748;
    msg.hdop = 0.8611675736080613;
    msg.vdop = 0.36160874188324355;
    msg.hacc = 0.024545710798057896;
    msg.vacc = 0.1354949446261049;

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
    msg.setTimeStamp(0.9031811708182169);
    msg.setSource(37807U);
    msg.setSourceEntity(191U);
    msg.setDestination(59046U);
    msg.setDestinationEntity(156U);
    msg.time = 0.5420751549710248;
    msg.phi = 0.9756476489113135;
    msg.theta = 0.9438990166969424;
    msg.psi = 0.8703444779688453;
    msg.psi_magnetic = 0.9121131121752485;

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
    msg.setTimeStamp(0.028358616957407823);
    msg.setSource(31561U);
    msg.setSourceEntity(49U);
    msg.setDestination(40534U);
    msg.setDestinationEntity(216U);
    msg.time = 0.25410991992813514;
    msg.phi = 0.7743620159900343;
    msg.theta = 0.20277688248844972;
    msg.psi = 0.28527935635089274;
    msg.psi_magnetic = 0.8088473850051028;

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
    msg.setTimeStamp(0.11749928189997949);
    msg.setSource(8171U);
    msg.setSourceEntity(66U);
    msg.setDestination(19693U);
    msg.setDestinationEntity(83U);
    msg.time = 0.8753948424081462;
    msg.phi = 0.31885277856383365;
    msg.theta = 0.767839489007551;
    msg.psi = 0.5894072905518877;
    msg.psi_magnetic = 0.7302823440728826;

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
    msg.setTimeStamp(0.20564961596041953);
    msg.setSource(33991U);
    msg.setSourceEntity(140U);
    msg.setDestination(4803U);
    msg.setDestinationEntity(205U);
    msg.time = 0.1382079562651548;
    msg.x = 0.2923654118535939;
    msg.y = 0.6047730590007422;
    msg.z = 0.4448097997355782;
    msg.timestep = 0.25874943127004035;

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
    msg.setTimeStamp(0.9148122077660653);
    msg.setSource(16370U);
    msg.setSourceEntity(235U);
    msg.setDestination(38488U);
    msg.setDestinationEntity(40U);
    msg.time = 0.6749263331391337;
    msg.x = 0.21041698037465884;
    msg.y = 0.7872052313541639;
    msg.z = 0.960205538507207;
    msg.timestep = 0.9447393095773791;

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
    msg.setTimeStamp(0.2029833503989622);
    msg.setSource(19588U);
    msg.setSourceEntity(91U);
    msg.setDestination(16382U);
    msg.setDestinationEntity(69U);
    msg.time = 0.6021312126241295;
    msg.x = 0.6671552578047367;
    msg.y = 0.19554937603047495;
    msg.z = 0.2978371808298572;
    msg.timestep = 0.061282226128982376;

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
    msg.setTimeStamp(0.927299413432872);
    msg.setSource(63179U);
    msg.setSourceEntity(83U);
    msg.setDestination(55154U);
    msg.setDestinationEntity(153U);
    msg.time = 0.43880750461324247;
    msg.x = 0.5322623385384112;
    msg.y = 0.5661859127827489;
    msg.z = 0.5606421141374764;

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
    msg.setTimeStamp(0.0548836685924714);
    msg.setSource(33494U);
    msg.setSourceEntity(86U);
    msg.setDestination(1451U);
    msg.setDestinationEntity(181U);
    msg.time = 0.11347457907816394;
    msg.x = 0.3216643269031798;
    msg.y = 0.04889937563298541;
    msg.z = 0.25880085696644783;

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
    msg.setTimeStamp(0.765170515238312);
    msg.setSource(18060U);
    msg.setSourceEntity(79U);
    msg.setDestination(36783U);
    msg.setDestinationEntity(187U);
    msg.time = 0.4695611774601468;
    msg.x = 0.9149299445548955;
    msg.y = 0.8940083429080988;
    msg.z = 0.2282447517316205;

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
    msg.setTimeStamp(0.38327063292256236);
    msg.setSource(8082U);
    msg.setSourceEntity(130U);
    msg.setDestination(13944U);
    msg.setDestinationEntity(211U);
    msg.time = 0.2768090889881073;
    msg.x = 0.016037008522381768;
    msg.y = 0.6178105299428108;
    msg.z = 0.38984712338942307;

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
    msg.setTimeStamp(0.9819068570961218);
    msg.setSource(61368U);
    msg.setSourceEntity(141U);
    msg.setDestination(30901U);
    msg.setDestinationEntity(231U);
    msg.time = 0.7949770336013203;
    msg.x = 0.6652312901213419;
    msg.y = 0.7053558520636252;
    msg.z = 0.17839607524216738;

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
    msg.setTimeStamp(0.6597007207323932);
    msg.setSource(27108U);
    msg.setSourceEntity(172U);
    msg.setDestination(9905U);
    msg.setDestinationEntity(152U);
    msg.time = 0.7269845656024811;
    msg.x = 0.9350219790126426;
    msg.y = 0.4538241530102093;
    msg.z = 0.4347122902627456;

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
    msg.setTimeStamp(0.3496774421114268);
    msg.setSource(13523U);
    msg.setSourceEntity(74U);
    msg.setDestination(27460U);
    msg.setDestinationEntity(217U);
    msg.time = 0.5648539258804408;
    msg.x = 0.09997650807987402;
    msg.y = 0.08079622468636172;
    msg.z = 0.007962568376202017;

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
    msg.setTimeStamp(0.8760303919439381);
    msg.setSource(1425U);
    msg.setSourceEntity(233U);
    msg.setDestination(20062U);
    msg.setDestinationEntity(1U);
    msg.time = 0.12174456711325987;
    msg.x = 0.1835517080705571;
    msg.y = 0.4459017468646427;
    msg.z = 0.9216272911263225;

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
    msg.setTimeStamp(0.4265863975293036);
    msg.setSource(47605U);
    msg.setSourceEntity(97U);
    msg.setDestination(13395U);
    msg.setDestinationEntity(102U);
    msg.time = 0.4872536677345506;
    msg.x = 0.9017209138137589;
    msg.y = 0.30190892600701047;
    msg.z = 0.025344856077531674;

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
    msg.setTimeStamp(0.922115739019959);
    msg.setSource(38838U);
    msg.setSourceEntity(53U);
    msg.setDestination(5235U);
    msg.setDestinationEntity(126U);
    msg.validity = 39U;
    msg.x = 0.38445328291192993;
    msg.y = 0.3221575519704214;
    msg.z = 0.16580747457224132;

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
    msg.setTimeStamp(0.47948453658747137);
    msg.setSource(20496U);
    msg.setSourceEntity(136U);
    msg.setDestination(24532U);
    msg.setDestinationEntity(116U);
    msg.validity = 228U;
    msg.x = 0.17773815069101928;
    msg.y = 0.22436660400948183;
    msg.z = 0.9784617615298654;

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
    msg.setTimeStamp(0.2731323711260544);
    msg.setSource(55100U);
    msg.setSourceEntity(153U);
    msg.setDestination(3630U);
    msg.setDestinationEntity(160U);
    msg.validity = 50U;
    msg.x = 0.5398218501703637;
    msg.y = 0.07752502720506138;
    msg.z = 0.8028329973563065;

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
    msg.setTimeStamp(0.48073460418719305);
    msg.setSource(39589U);
    msg.setSourceEntity(138U);
    msg.setDestination(16636U);
    msg.setDestinationEntity(70U);
    msg.validity = 246U;
    msg.x = 0.836358725171289;
    msg.y = 0.9077961612888321;
    msg.z = 0.11246445304654418;

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
    msg.setTimeStamp(0.9118964786412638);
    msg.setSource(61855U);
    msg.setSourceEntity(89U);
    msg.setDestination(5029U);
    msg.setDestinationEntity(124U);
    msg.validity = 183U;
    msg.x = 0.873064560270264;
    msg.y = 0.2207634668814641;
    msg.z = 0.7839297666807179;

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
    msg.setTimeStamp(0.9515684598068985);
    msg.setSource(65265U);
    msg.setSourceEntity(68U);
    msg.setDestination(1933U);
    msg.setDestinationEntity(83U);
    msg.validity = 145U;
    msg.x = 0.17146009547586505;
    msg.y = 0.3632735944750771;
    msg.z = 0.4220481976727537;

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
    msg.setTimeStamp(0.2529015910860123);
    msg.setSource(38067U);
    msg.setSourceEntity(125U);
    msg.setDestination(32468U);
    msg.setDestinationEntity(252U);
    msg.time = 0.9299796458089404;
    msg.x = 0.4939752314175472;
    msg.y = 0.8940320966562705;
    msg.z = 0.7829915618144924;

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
    msg.setTimeStamp(0.5377078583030729);
    msg.setSource(7059U);
    msg.setSourceEntity(250U);
    msg.setDestination(39300U);
    msg.setDestinationEntity(59U);
    msg.time = 0.8420067735991035;
    msg.x = 0.6535009993691164;
    msg.y = 0.46642005748914817;
    msg.z = 0.8055860848164665;

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
    msg.setTimeStamp(0.3085831862873373);
    msg.setSource(42510U);
    msg.setSourceEntity(240U);
    msg.setDestination(37204U);
    msg.setDestinationEntity(90U);
    msg.time = 0.20908618176204385;
    msg.x = 0.44995195819587286;
    msg.y = 0.18935470855964354;
    msg.z = 0.8040087879351231;

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
    msg.setTimeStamp(0.6929259236728846);
    msg.setSource(61632U);
    msg.setSourceEntity(212U);
    msg.setDestination(3367U);
    msg.setDestinationEntity(17U);
    msg.validity = 92U;
    msg.value = 0.8307141025275305;

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
    msg.setTimeStamp(0.21731214966251944);
    msg.setSource(20102U);
    msg.setSourceEntity(95U);
    msg.setDestination(52063U);
    msg.setDestinationEntity(230U);
    msg.validity = 7U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9333756378346305;
    tmp_msg_0.y = 0.18293942869469448;
    tmp_msg_0.z = 0.17264767178691576;
    tmp_msg_0.phi = 0.2982010545559798;
    tmp_msg_0.theta = 0.010242908960827801;
    tmp_msg_0.psi = 0.35599437638151343;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.2289647233371741;
    tmp_msg_1.beam_height = 0.9481654538743717;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8562910110126022;

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
    msg.setTimeStamp(0.05371626817319208);
    msg.setSource(44042U);
    msg.setSourceEntity(18U);
    msg.setDestination(36859U);
    msg.setDestinationEntity(194U);
    msg.validity = 123U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.01123069262862475;
    tmp_msg_0.beam_height = 0.9764406408826777;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.6621572843360802;

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
    msg.setTimeStamp(0.2285666413642401);
    msg.setSource(60339U);
    msg.setSourceEntity(128U);
    msg.setDestination(3075U);
    msg.setDestinationEntity(229U);
    msg.value = 0.6463238210242502;

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
    msg.setTimeStamp(0.3556685268433072);
    msg.setSource(10059U);
    msg.setSourceEntity(18U);
    msg.setDestination(39786U);
    msg.setDestinationEntity(136U);
    msg.value = 0.41182592233134196;

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
    msg.setTimeStamp(0.3370690796631478);
    msg.setSource(22884U);
    msg.setSourceEntity(83U);
    msg.setDestination(7667U);
    msg.setDestinationEntity(144U);
    msg.value = 0.8791262068376463;

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
    msg.setTimeStamp(0.08040030730528469);
    msg.setSource(40299U);
    msg.setSourceEntity(33U);
    msg.setDestination(49960U);
    msg.setDestinationEntity(218U);
    msg.value = 0.4276375968061179;

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
    msg.setTimeStamp(0.49102315480079173);
    msg.setSource(57256U);
    msg.setSourceEntity(242U);
    msg.setDestination(40656U);
    msg.setDestinationEntity(113U);
    msg.value = 0.9987435423018048;

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
    msg.setTimeStamp(0.10063544561514115);
    msg.setSource(34982U);
    msg.setSourceEntity(219U);
    msg.setDestination(14398U);
    msg.setDestinationEntity(168U);
    msg.value = 0.09019907033740027;

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
    msg.setTimeStamp(0.288614789738446);
    msg.setSource(16092U);
    msg.setSourceEntity(109U);
    msg.setDestination(22974U);
    msg.setDestinationEntity(102U);
    msg.value = 0.6209319676382438;

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
    msg.setTimeStamp(0.12068707838987025);
    msg.setSource(6386U);
    msg.setSourceEntity(71U);
    msg.setDestination(9337U);
    msg.setDestinationEntity(151U);
    msg.value = 0.2672473078029547;

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
    msg.setTimeStamp(0.6650620398771789);
    msg.setSource(37866U);
    msg.setSourceEntity(231U);
    msg.setDestination(40238U);
    msg.setDestinationEntity(79U);
    msg.value = 0.17164933066681987;

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
    msg.setTimeStamp(0.20902603846715095);
    msg.setSource(44841U);
    msg.setSourceEntity(165U);
    msg.setDestination(20614U);
    msg.setDestinationEntity(122U);
    msg.value = 0.028257068005422603;

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
    msg.setTimeStamp(0.40593905585698087);
    msg.setSource(23590U);
    msg.setSourceEntity(45U);
    msg.setDestination(5801U);
    msg.setDestinationEntity(211U);
    msg.value = 0.4835051129134663;

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
    msg.setTimeStamp(0.20163888921589268);
    msg.setSource(11174U);
    msg.setSourceEntity(179U);
    msg.setDestination(25351U);
    msg.setDestinationEntity(3U);
    msg.value = 0.37443420549684026;

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
    msg.setTimeStamp(0.1928031723225586);
    msg.setSource(592U);
    msg.setSourceEntity(225U);
    msg.setDestination(49148U);
    msg.setDestinationEntity(2U);
    msg.value = 0.24853317451754808;

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
    msg.setTimeStamp(0.890115924434116);
    msg.setSource(41473U);
    msg.setSourceEntity(229U);
    msg.setDestination(22649U);
    msg.setDestinationEntity(227U);
    msg.value = 0.12477605666391911;

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
    msg.setTimeStamp(0.843056104431172);
    msg.setSource(20713U);
    msg.setSourceEntity(45U);
    msg.setDestination(51296U);
    msg.setDestinationEntity(122U);
    msg.value = 0.7810009117174638;

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
    msg.setTimeStamp(0.628590043618714);
    msg.setSource(29487U);
    msg.setSourceEntity(89U);
    msg.setDestination(8432U);
    msg.setDestinationEntity(171U);
    msg.value = 0.13144076907243352;

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
    msg.setTimeStamp(0.9409237380808929);
    msg.setSource(10686U);
    msg.setSourceEntity(220U);
    msg.setDestination(61166U);
    msg.setDestinationEntity(166U);
    msg.value = 0.6783139772361272;

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
    msg.setTimeStamp(0.6896969660623083);
    msg.setSource(10372U);
    msg.setSourceEntity(104U);
    msg.setDestination(41904U);
    msg.setDestinationEntity(171U);
    msg.value = 0.9520898066756288;

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
    msg.setTimeStamp(0.27520977995982876);
    msg.setSource(36066U);
    msg.setSourceEntity(206U);
    msg.setDestination(53711U);
    msg.setDestinationEntity(99U);
    msg.value = 0.35575795136897936;

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
    msg.setTimeStamp(0.8624048489122524);
    msg.setSource(28421U);
    msg.setSourceEntity(69U);
    msg.setDestination(15273U);
    msg.setDestinationEntity(183U);
    msg.value = 0.6646376230575006;

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
    msg.setTimeStamp(0.5624542373793855);
    msg.setSource(29391U);
    msg.setSourceEntity(5U);
    msg.setDestination(280U);
    msg.setDestinationEntity(212U);
    msg.value = 0.26078727770914356;

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
    msg.setTimeStamp(0.7417148589414697);
    msg.setSource(9180U);
    msg.setSourceEntity(117U);
    msg.setDestination(4941U);
    msg.setDestinationEntity(179U);
    msg.value = 0.1039342086336521;

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
    msg.setTimeStamp(0.5995301412945595);
    msg.setSource(1655U);
    msg.setSourceEntity(136U);
    msg.setDestination(45585U);
    msg.setDestinationEntity(209U);
    msg.value = 0.9863728737233642;

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
    msg.setTimeStamp(0.26014124916579007);
    msg.setSource(58359U);
    msg.setSourceEntity(192U);
    msg.setDestination(12045U);
    msg.setDestinationEntity(215U);
    msg.value = 0.1333804248749072;

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
    msg.setTimeStamp(0.18966438752026238);
    msg.setSource(32011U);
    msg.setSourceEntity(79U);
    msg.setDestination(911U);
    msg.setDestinationEntity(149U);
    msg.direction = 0.17383367264983296;
    msg.speed = 0.9328884683297051;
    msg.turbulence = 0.44194265685278855;

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
    msg.setTimeStamp(0.25441605082295493);
    msg.setSource(605U);
    msg.setSourceEntity(116U);
    msg.setDestination(5240U);
    msg.setDestinationEntity(42U);
    msg.direction = 0.9700265364235567;
    msg.speed = 0.2583084571473647;
    msg.turbulence = 0.3304345953907194;

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
    msg.setTimeStamp(0.035862256468557674);
    msg.setSource(25301U);
    msg.setSourceEntity(3U);
    msg.setDestination(59805U);
    msg.setDestinationEntity(174U);
    msg.direction = 0.756005187315474;
    msg.speed = 0.44895849963734225;
    msg.turbulence = 0.294496234549784;

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
    msg.setTimeStamp(0.013119762085532116);
    msg.setSource(36305U);
    msg.setSourceEntity(164U);
    msg.setDestination(50396U);
    msg.setDestinationEntity(188U);
    msg.value = 0.9176850221310008;

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
    msg.setTimeStamp(0.020591831387206994);
    msg.setSource(57108U);
    msg.setSourceEntity(27U);
    msg.setDestination(51141U);
    msg.setDestinationEntity(199U);
    msg.value = 0.8272591328325325;

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
    msg.setTimeStamp(0.8602501229344186);
    msg.setSource(40245U);
    msg.setSourceEntity(211U);
    msg.setDestination(463U);
    msg.setDestinationEntity(196U);
    msg.value = 0.6126179672888662;

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
    msg.setTimeStamp(0.30295595674175413);
    msg.setSource(3205U);
    msg.setSourceEntity(32U);
    msg.setDestination(51926U);
    msg.setDestinationEntity(247U);
    msg.value.assign("TVKFQQLFAFUFXGJMHGWPCMKNRAVFCAKJGLHAZESPWXBVULNLRBNCLZQPUIWHHXEGEGRRZYQJXMGKSSQSBNOFBUWIACPEJXCOVEOBNEROBIIHLGSONVQWOYRZOBMYTVZDGNEJDIILTQHMKJVTMRPVVPWCUQARL");

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
    msg.setTimeStamp(0.1921802646378129);
    msg.setSource(3392U);
    msg.setSourceEntity(132U);
    msg.setDestination(23900U);
    msg.setDestinationEntity(49U);
    msg.value.assign("VNKXXOYMRQQAOQUBJRTSCTRSJSHYLBHXZJJTJASPYKWGIDWNGQWIDAXMQBQ");

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
    msg.setTimeStamp(0.7390334968231365);
    msg.setSource(43617U);
    msg.setSourceEntity(59U);
    msg.setDestination(561U);
    msg.setDestinationEntity(51U);
    msg.value.assign("YYWJNAWSIMPDMXDLZRDVATHEOGRIWMFECIKQATGOVVVKXPFCLAUDAMRBPXRQCJTVQACOPZBZDCLYCOZCJNHBLRPWKOKEJUBS");

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
    msg.setTimeStamp(0.914220341346751);
    msg.setSource(25151U);
    msg.setSourceEntity(116U);
    msg.setDestination(20942U);
    msg.setDestinationEntity(110U);
    const char tmp_msg_0[] = {-65, -102, 96, 92, -49, 96, -37, -101, 95, 105, -2, -31, 43, -76, 90, 58, -9, -67, -100, -105, -66, 31, -38, 8, -27, 117, 120, 26, 5, -30, -122, 65, 13, -36, -72, -85, -55, 90, -127, 42, 86, 17, -126, 40, -65, -82, -31, 122, -105, -66, -93, -126, 113, -66, 115, -127, 25, -78, 86, -49, -15, -81, 62, 100, -52, -101, -62, -122, -21, 22, -106, 37, -107, 85, -2, 81, 105, 24, 44, 99, -74, 81, -125, -17, -49, 70, 66, 92, 7, 84, 113, 53, 8, 28, -93, -15, -9, -44, 98, -31, -45, -125, -53, 9, -21, -52, -8, 107, -11, 62, -126, 87, -14, 6, 22, 80, -102, -73, 71, 87, -118, -10, 27, 25, 13, 62, -107, -91, 88, 47, -79, -66, -24, 50, -127, -49, 10, -23, 110, 41, 13, 37, 54, -2, -65, 7, -62, -74, -20, -41, 110, 83, 10, -128, 87, 17, 3, 89, 43, 1, -63, 45, -107, 111, 93, 9, -109, 78, -91, -20, 23, -90, 31, 51, -109, 69, 118, 40, -93, 26, -51, 10, 72, 77, -123, -90, -67, 25, 51, -25, 46, 96, -32, 8, 23, 104, 72, 122, 62, 22, -22, 67, -83, -1, -100, 110, -50, -100, 44, -94, 95, 102, -78, 41, -112, 3, 45, -17, -35, 26, -14, 114, -40, -11, -32, -70, -99, 96, 102, -36, -23, 40, -38, 25, -1, -32, 25, -67, -79, -125, 14, -15, -80, -51, -97, -70, -35, -96, 102, 0, -123, 22, 114, 51};
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
    msg.setTimeStamp(0.8926549769503614);
    msg.setSource(910U);
    msg.setSourceEntity(113U);
    msg.setDestination(58972U);
    msg.setDestinationEntity(62U);
    const char tmp_msg_0[] = {52, -97, -50, 23, 79, 83, 62, -98, 38, 101, 77, 75, -95, 104, 43, -124, 78, 111, 114, 66, 106, 41, 62, -65, -57, 44, -13, 3, -92, -15, 125, -93, 96, 88, -114, -63, -21, 28, 126, -50, 15, -26, 30, -71, -75, 76, -22, -23, -44, 52, -5, -117, -42, -1, 48, 115, -117, -65, 11, -14, -87, -3, -53, -106, 87, -17, -50, 86, 73, -108, 78, 82, -81, 62, -19, -113, 32, -24, 57, -2, 24, -52, 6, -36, -8, 83, 33, 96, 77, 69, 11, -107, 82, -96, 93, -13, 59, -5, 87, -71, 60, 39, 103, 11, -89, -48, -114, -22, 20, -7, 7, 82, 60, -65, 124, -124, 40, 58, 71, 79, -2, -125, -34, 29, -96, -13, -122, 50, 84, 40, 79, 22, -23, -2, 24, -122, -72, 75, 54, -15, -90, -126, -33, 20, -111, -49, 20, -9, 63, 17, -101, -20, 81, 82, 94, 101, -74, 107, -21, 122, -121, 114, 12, 118, -51, 51, 46, 9, 18, -25, -50, -71, -85, 44, 66, 73, 34, -19, -125, -89, 88, -122, 49, 103, 5, 55, -61, 117, 88, 61, -48, -47, -30, 60, -109, -66, -16, 11, -40, -65, -18, -32, 74, 35, -17, 84, -125, -107, -61, -53, -94, -65, 66, -93, 126, 100, -65, 39, -21, -5, 97, 117, -62, 9, 3, -48, -87, 120, 76, -70, -66, 44, 70, 111, 75, -126, 96};
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
    msg.setTimeStamp(0.5966590698548109);
    msg.setSource(50811U);
    msg.setSourceEntity(2U);
    msg.setDestination(34250U);
    msg.setDestinationEntity(100U);
    const char tmp_msg_0[] = {-21, -21, 55, -26, -96, -85, -88, 117, -105, 82, -70, -16, -56, 121, 0, -6, -126, -33, -13, -42, -112, 35, 102, 5, -50, -117, 65, -19, 91, -70, 93, 107, -97, 65, 67, -51, -90, -44, -76, 49, -74, 34, -4, 48, -41, 31, -39, -106, -84, 50, 73, 31, 75, 22, -89, 50, -125, -70, 24, 32, 106, -89, -3, 19, 65, 46, 84, 19, -100, -91, -92, 13, 41, -122, 74, 52, 38, -97, -114, 104, -121, 70, -49, 15, 30, 36, -11, 55, 108, -31, -68, 45, 122, -66, 34, -88, 30, 80, -2, -125, 100, -99, 19, -6, -86, -37, 1, -15, -84, 38, 101, -107, -58, 46, 51, 65, -92, -39, -126, 46, 6, 57, -16, -127, 83, 118, 98, 53, 109, 6, 86, 59, -5, -128, 62, 28, 117, -45, 8, 96, -54, 12, -107, 30, 44, -82, 87, -120, 69, 61, 57, -113, -1, 114, -122, -104, 50, 77, 110, -50, 111, -125, -24, -84, -52, -49, -20, 84, -11, 31, 125, -90, -27, 56, 71, -101, 46, -108, -73, 85, -70, -110, -66, -82, 71, 14, 16, 56, 72, 68, -82, -100, -96, 83, 98, 68, 110, -45, -99, 31, 61, 101, 122, 47, 22, 40, 22, -101, 54, 16, -82, 75, -92, -96, -22, 52, 46, -128, 83};
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
    msg.setTimeStamp(0.9992276598865333);
    msg.setSource(8091U);
    msg.setSourceEntity(116U);
    msg.setDestination(25764U);
    msg.setDestinationEntity(14U);
    msg.frequency = 2138823092U;
    msg.min_range = 40152U;
    msg.max_range = 23372U;

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
    msg.setTimeStamp(0.3494563657973756);
    msg.setSource(29824U);
    msg.setSourceEntity(121U);
    msg.setDestination(403U);
    msg.setDestinationEntity(97U);
    msg.frequency = 783924466U;
    msg.min_range = 44032U;
    msg.max_range = 24151U;

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
    msg.setTimeStamp(0.4953732435737159);
    msg.setSource(31049U);
    msg.setSourceEntity(23U);
    msg.setDestination(19573U);
    msg.setDestinationEntity(92U);
    msg.frequency = 504732917U;
    msg.min_range = 21614U;
    msg.max_range = 49481U;

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
    msg.setTimeStamp(0.8952010722631836);
    msg.setSource(8500U);
    msg.setSourceEntity(211U);
    msg.setDestination(63153U);
    msg.setDestinationEntity(210U);
    msg.type = 18U;
    msg.frequency = 276592793U;
    msg.min_range = 15389U;
    msg.max_range = 22637U;
    msg.bits_per_point = 62U;
    msg.scale_factor = 0.3879938371138253;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4869631264654414;
    tmp_msg_0.beam_height = 0.8952811712851305;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {23, 76, 92, -17, 68, -48, -13, 58, 75, -102, 14, 93, 34, -56, 96, 67, 96, -10, -49, 93, 90, 98, 113, -27, 8, 104, 102, -1, 60, 4, -101, -13, 106, -74, 44, -48, -90, 100, 103, 1, -8, -8, -23, 55, -80, -29, 43, -35, -120, -97, -63, -56, -62, 11, -82, -10, 89, -99, -18, 35, -18, 110, 51, 51, -88, 62, 26, 78, 65, -103, 84, -76, 108, -20, 118, -117, -57, -99, 84, 81, 99, 108, -66, -47, 92, 17, 87, 66, 111, 92, -79, 111, -31, 110, 75, 116, 80, 79, 116, 113, 98, 52, 77, -106, -101, 35, 35, -21, -90, -109, -111, -44, 75, 21, 69, 65, -14, -35, -33, 102, 35, -34, -109, -107, -14, -65, 81, -107, 125, -123, -109, 76, 4, -65, -63, -55, 108, -90, -108, 0, -108, -83, -106, -117, 101, -122, 45, -120, -4, 82, 43, -100, 46, 14, -123, 69, -2, 120, 42, 124, -55, 125, -35, 11, -89, -30, 56, -32, -22, 36, 125, 68, -99, -8, 34, 37, -99, 115, -73, -96, -14, 86, -71, -81, 99, 64, -110, -3, -71, -12, 75, 38, 28, 63, 118, 43, 7, -82, -100, -102, 102, 12, 32, -21, 45, 79, 30, 24, 50, 89, -8, 52, -77, 66, -126, -35, 87, -65, 87, 101, -3, -52, 22, -51, 115, 56, -51, -82, 89, -78, 65, 67, 76, 65, 42, -69, 8, 13, -58, -37, -90};
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
    msg.setTimeStamp(0.42802488090097124);
    msg.setSource(32184U);
    msg.setSourceEntity(236U);
    msg.setDestination(62641U);
    msg.setDestinationEntity(204U);
    msg.type = 22U;
    msg.frequency = 2874082845U;
    msg.min_range = 3190U;
    msg.max_range = 59440U;
    msg.bits_per_point = 176U;
    msg.scale_factor = 0.4924231865300961;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.14227324278365394;
    tmp_msg_0.beam_height = 0.6706941183817425;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-33, -40, -81, -108, -80, -1, 62, 122, 56, -88, -59, -43, -20, -63, 42, -90, 74, 54, -91, 71, 23, -74, -115, -13, 32, 108, 40, -128, 41, 87, -124, -4, -24, 42, 82, 48, -13, 113, -102, -57, -25, 51, -37, -50, -75, 28, -13, 35, 40, -117, 28, -96, -109, 90, 53, -61, -41, -70, 68, 25, 107, -82, -114, 52, 51, 63, -120, -121, -97, -95, 116, -94, -23, 60, 108, -62, 66, -49, 82, 28, 68, -111, 17, 97, 42, 0, 42, -101, 92, 106, 45, -108, 110, -65, 12, 28, 16, -27, -24, -87, -91, 89, 25, -80, 27, -68, -41, 122, -57, -102, -66, 14, -115, 119, 5, 123, -92, -110, 9, 117, -22, -56, 83, -75, -52, 73, -102, -62, 124, 107, -69, -67, 107, -19, -12, 6, -101, -95, -91, -38, -51, 63, 95, 90, 14, -41, 16, 42, 22, -48, -83, -57, -47, -4, 74, 2, -40, 114, 32, 71, 5, 16, 120, -110, -81, -117, 14, 79, 104, 69, -31, -67, -30, 72, -94, 123, -66, -6, -71, -36, -39, -126, 60, -82, -128, 63, -62, -8, 118, 103, -84, 58, 26, 56, 121, 41, 80, -119, -78, 31, -64, -41, -19, 123, 34, -65, 125, 94, 52, 88, 123, 68, -92, -108, -71, 125, 5, -118, 96, 115, 55, 35, 34, 91, -62, -25, -121, 67, 85, 8, 38, -49, 27, 66, 81};
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
    msg.setTimeStamp(0.6818885556401076);
    msg.setSource(26014U);
    msg.setSourceEntity(164U);
    msg.setDestination(54135U);
    msg.setDestinationEntity(209U);
    msg.type = 2U;
    msg.frequency = 1480940534U;
    msg.min_range = 58092U;
    msg.max_range = 29457U;
    msg.bits_per_point = 142U;
    msg.scale_factor = 0.06136344781037861;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6274047034584216;
    tmp_msg_0.beam_height = 0.5796212518373967;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {10, -49, 34, 28, -91, -117, 55, 34, -66, -99, 86, 64, -89, -1, -28, -122, 40, -20, 6, -64, -66, 21, 92, -78, 19, -85, -98, 88, 107, -115, 97, -112, 93, 120, 16, -110, -25, -36, 95, 78, 44, 126, 23, -117, 81, 101, -125, -37, 114, 3, 78, -6, -82, -20, -128, 59, 4, -89, 57, -22, -61, 77, -22, 34, 33};
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
    msg.setTimeStamp(0.20051249599817456);
    msg.setSource(12127U);
    msg.setSourceEntity(220U);
    msg.setDestination(65522U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.7116801087327906);
    msg.setSource(4079U);
    msg.setSourceEntity(45U);
    msg.setDestination(49163U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.06066698890477318);
    msg.setSource(60284U);
    msg.setSourceEntity(99U);
    msg.setDestination(38122U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.8325578616403955);
    msg.setSource(58884U);
    msg.setSourceEntity(140U);
    msg.setDestination(40072U);
    msg.setDestinationEntity(71U);
    msg.op = 30U;

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
    msg.setTimeStamp(0.8173024511437237);
    msg.setSource(15357U);
    msg.setSourceEntity(230U);
    msg.setDestination(6271U);
    msg.setDestinationEntity(78U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.763637402147856);
    msg.setSource(52318U);
    msg.setSourceEntity(81U);
    msg.setDestination(30809U);
    msg.setDestinationEntity(144U);
    msg.op = 213U;

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
    msg.setTimeStamp(0.2504980063253043);
    msg.setSource(19938U);
    msg.setSourceEntity(125U);
    msg.setDestination(1190U);
    msg.setDestinationEntity(220U);
    msg.value = 0.9415613484592561;
    msg.confidence = 0.9086713152605662;
    msg.opmodes.assign("RCJBYLFQSKVHLRKOPQKUECXIQSGHWVWWWQDDBRFJGNKLOKMLAPRFPUYIDNLHSHRNJMNMUVTYONWRRTBVNLNBEDFPZ");

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
    msg.setTimeStamp(0.7143233751407241);
    msg.setSource(64537U);
    msg.setSourceEntity(247U);
    msg.setDestination(37058U);
    msg.setDestinationEntity(138U);
    msg.value = 0.6132085059159365;
    msg.confidence = 0.6162089359682763;
    msg.opmodes.assign("WQIWTIRIMZRGSECUTEJDZHVPEAHJDMLJIGSMWOHXPFBJTTHSXBPBIFOSRUI");

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
    msg.setTimeStamp(0.9883209435068151);
    msg.setSource(11345U);
    msg.setSourceEntity(10U);
    msg.setDestination(1568U);
    msg.setDestinationEntity(243U);
    msg.value = 0.20616277023471796;
    msg.confidence = 0.5109619901469451;
    msg.opmodes.assign("OXBSJRZCNYNSFWEFZAALLTQZWPPKJJPHBDZQACQBMVSPXUYJGRFLUCQGTLJTDAHECGCURZAUXQNEMUTKOEYRCNXMUHVZYVSZLXVDDKBOE");

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
    msg.setTimeStamp(0.5928528797309442);
    msg.setSource(432U);
    msg.setSourceEntity(21U);
    msg.setDestination(42611U);
    msg.setDestinationEntity(170U);
    msg.itow = 3611109304U;
    msg.lat = 0.11403302918324121;
    msg.lon = 0.7090668073805519;
    msg.height_ell = 0.015962301297066994;
    msg.height_sea = 0.13619882745657041;
    msg.hacc = 0.7801450655919293;
    msg.vacc = 0.01544305216955899;
    msg.vel_n = 0.8427430783872232;
    msg.vel_e = 0.5074780605215093;
    msg.vel_d = 0.9845255607564594;
    msg.speed = 0.979576217767437;
    msg.gspeed = 0.6450649889449207;
    msg.heading = 0.9534880443130533;
    msg.sacc = 0.335169745369864;
    msg.cacc = 0.4894383930111371;

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
    msg.setTimeStamp(0.3236000952160746);
    msg.setSource(44168U);
    msg.setSourceEntity(43U);
    msg.setDestination(33126U);
    msg.setDestinationEntity(160U);
    msg.itow = 2684699771U;
    msg.lat = 0.7492350894060303;
    msg.lon = 0.3423353864499995;
    msg.height_ell = 0.38270358788084746;
    msg.height_sea = 0.12889508246256498;
    msg.hacc = 0.8030852416021832;
    msg.vacc = 0.8803816463425678;
    msg.vel_n = 0.28391045049212205;
    msg.vel_e = 0.03141928343754108;
    msg.vel_d = 0.04948191471289487;
    msg.speed = 0.36554610463974824;
    msg.gspeed = 0.8199049100622177;
    msg.heading = 0.9454214443596913;
    msg.sacc = 0.5221690687125825;
    msg.cacc = 0.6568169610491059;

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
    msg.setTimeStamp(0.23498222322901618);
    msg.setSource(58938U);
    msg.setSourceEntity(40U);
    msg.setDestination(33484U);
    msg.setDestinationEntity(6U);
    msg.itow = 1690442872U;
    msg.lat = 0.7526858971713016;
    msg.lon = 0.4975973765154287;
    msg.height_ell = 0.47643841791836483;
    msg.height_sea = 0.9475878513907687;
    msg.hacc = 0.3884223830813204;
    msg.vacc = 0.8689448449194012;
    msg.vel_n = 0.5535989458217205;
    msg.vel_e = 0.5396996714300145;
    msg.vel_d = 0.8028298574012068;
    msg.speed = 0.10308854578726967;
    msg.gspeed = 0.11757701062154724;
    msg.heading = 0.8922782759402409;
    msg.sacc = 0.11455924264117379;
    msg.cacc = 0.06113566542784499;

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
    msg.setTimeStamp(0.06375117381517437);
    msg.setSource(53362U);
    msg.setSourceEntity(17U);
    msg.setDestination(6616U);
    msg.setDestinationEntity(37U);
    msg.id = 3U;
    msg.value = 0.602625839626947;

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
    msg.setTimeStamp(0.0739397806692299);
    msg.setSource(57454U);
    msg.setSourceEntity(110U);
    msg.setDestination(48867U);
    msg.setDestinationEntity(135U);
    msg.id = 93U;
    msg.value = 0.2339174930126997;

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
    msg.setTimeStamp(0.38692143373613086);
    msg.setSource(57473U);
    msg.setSourceEntity(47U);
    msg.setDestination(53367U);
    msg.setDestinationEntity(121U);
    msg.id = 147U;
    msg.value = 0.6122475073793181;

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
    msg.setTimeStamp(0.6044876933443553);
    msg.setSource(18813U);
    msg.setSourceEntity(244U);
    msg.setDestination(45525U);
    msg.setDestinationEntity(156U);
    msg.x = 0.5927118256916175;
    msg.y = 0.8168461722204786;
    msg.z = 0.42705387381904847;
    msg.phi = 0.8386483972962552;
    msg.theta = 0.8027669265129628;
    msg.psi = 0.5480454332235877;

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
    msg.setTimeStamp(0.31425535923987713);
    msg.setSource(55494U);
    msg.setSourceEntity(80U);
    msg.setDestination(4585U);
    msg.setDestinationEntity(249U);
    msg.x = 0.35854677765761056;
    msg.y = 0.08802843088793777;
    msg.z = 0.41662428145404184;
    msg.phi = 0.632750761582106;
    msg.theta = 0.723792420943261;
    msg.psi = 0.9928803969364957;

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
    msg.setTimeStamp(0.1307831542026947);
    msg.setSource(22691U);
    msg.setSourceEntity(179U);
    msg.setDestination(41783U);
    msg.setDestinationEntity(16U);
    msg.x = 0.20414755060118484;
    msg.y = 0.9907562421226177;
    msg.z = 0.126472229822156;
    msg.phi = 0.024455410430400004;
    msg.theta = 0.05009465983477346;
    msg.psi = 0.6832558474315701;

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
    msg.setTimeStamp(0.372223190495265);
    msg.setSource(17620U);
    msg.setSourceEntity(38U);
    msg.setDestination(62886U);
    msg.setDestinationEntity(18U);
    msg.beam_width = 0.01102544596335775;
    msg.beam_height = 0.3692441632253922;

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
    msg.setTimeStamp(0.2469624067650329);
    msg.setSource(11847U);
    msg.setSourceEntity(122U);
    msg.setDestination(51451U);
    msg.setDestinationEntity(118U);
    msg.beam_width = 0.685309868634209;
    msg.beam_height = 0.036083741144318005;

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
    msg.setTimeStamp(0.5381679424340505);
    msg.setSource(46652U);
    msg.setSourceEntity(81U);
    msg.setDestination(1874U);
    msg.setDestinationEntity(42U);
    msg.beam_width = 0.6528185125880377;
    msg.beam_height = 0.6673956756295326;

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
    msg.setTimeStamp(0.6371924798446601);
    msg.setSource(49827U);
    msg.setSourceEntity(21U);
    msg.setDestination(14447U);
    msg.setDestinationEntity(49U);
    msg.sane = 94U;

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
    msg.setTimeStamp(0.8956379395147186);
    msg.setSource(32537U);
    msg.setSourceEntity(234U);
    msg.setDestination(14286U);
    msg.setDestinationEntity(248U);
    msg.sane = 149U;

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
    msg.setTimeStamp(0.05429342114186897);
    msg.setSource(9581U);
    msg.setSourceEntity(70U);
    msg.setDestination(34628U);
    msg.setDestinationEntity(201U);
    msg.sane = 43U;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.13023658691599427);
    msg.setSource(49597U);
    msg.setSourceEntity(61U);
    msg.setDestination(31556U);
    msg.setDestinationEntity(250U);
    msg.id = 62U;
    msg.zoom = 83U;
    msg.action = 22U;

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
    msg.setTimeStamp(0.5240908744951983);
    msg.setSource(9814U);
    msg.setSourceEntity(232U);
    msg.setDestination(26810U);
    msg.setDestinationEntity(113U);
    msg.id = 39U;
    msg.zoom = 69U;
    msg.action = 151U;

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
    msg.setTimeStamp(0.6946427609619676);
    msg.setSource(39558U);
    msg.setSourceEntity(13U);
    msg.setDestination(36170U);
    msg.setDestinationEntity(18U);
    msg.id = 40U;
    msg.zoom = 77U;
    msg.action = 244U;

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
    msg.setTimeStamp(0.7203188845365819);
    msg.setSource(44420U);
    msg.setSourceEntity(23U);
    msg.setDestination(18075U);
    msg.setDestinationEntity(10U);
    msg.id = 140U;
    msg.value = 0.8688584813207813;

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
    msg.setTimeStamp(0.20601485084048798);
    msg.setSource(54058U);
    msg.setSourceEntity(49U);
    msg.setDestination(38758U);
    msg.setDestinationEntity(16U);
    msg.id = 239U;
    msg.value = 0.31526577597592065;

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
    msg.setTimeStamp(0.743979592933149);
    msg.setSource(28298U);
    msg.setSourceEntity(54U);
    msg.setDestination(50530U);
    msg.setDestinationEntity(207U);
    msg.id = 166U;
    msg.value = 0.7339430272249893;

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
    msg.setTimeStamp(0.2080636620538806);
    msg.setSource(51689U);
    msg.setSourceEntity(87U);
    msg.setDestination(62610U);
    msg.setDestinationEntity(119U);
    msg.id = 141U;
    msg.value = 0.6713925892992448;

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
    msg.setTimeStamp(0.49500998963668685);
    msg.setSource(15748U);
    msg.setSourceEntity(240U);
    msg.setDestination(10307U);
    msg.setDestinationEntity(74U);
    msg.id = 161U;
    msg.value = 0.8289270740424284;

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
    msg.setTimeStamp(0.8983418037480797);
    msg.setSource(59661U);
    msg.setSourceEntity(46U);
    msg.setDestination(63474U);
    msg.setDestinationEntity(29U);
    msg.id = 158U;
    msg.value = 0.5285514816634523;

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
    msg.setTimeStamp(0.09328822058899544);
    msg.setSource(28979U);
    msg.setSourceEntity(38U);
    msg.setDestination(39575U);
    msg.setDestinationEntity(90U);
    msg.id = 217U;
    msg.angle = 0.08855825098813441;

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
    msg.setTimeStamp(0.49699264695764467);
    msg.setSource(40753U);
    msg.setSourceEntity(27U);
    msg.setDestination(19265U);
    msg.setDestinationEntity(101U);
    msg.id = 179U;
    msg.angle = 0.5517566831058694;

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
    msg.setTimeStamp(0.425082161736399);
    msg.setSource(14030U);
    msg.setSourceEntity(225U);
    msg.setDestination(52446U);
    msg.setDestinationEntity(252U);
    msg.id = 142U;
    msg.angle = 0.0874216715297369;

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
    msg.setTimeStamp(0.4361563238401992);
    msg.setSource(47941U);
    msg.setSourceEntity(37U);
    msg.setDestination(65117U);
    msg.setDestinationEntity(242U);
    msg.op = 155U;
    msg.actions.assign("RDSAFEKGBHIMVXDLFDVWNXICFQMLGETJDKBJTGZSHLMKXYNYALQBUUZPEPJDOTRCWLUYWFNFEZQSAYNMJGDPKENAPPHARSRCHYPIUHJBVRKNMFWOHMLUOZTIJTH");

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
    msg.setTimeStamp(0.877768182053136);
    msg.setSource(1050U);
    msg.setSourceEntity(190U);
    msg.setDestination(37026U);
    msg.setDestinationEntity(129U);
    msg.op = 80U;
    msg.actions.assign("HMAKTVDTYMAKLBIPDAEVKUWICLAMGAMJHEXLDGHLXOFXCFHQZPMTBHFCBXOPRWSNBBWNMNQLPRYUMVSISEAWDVZFWUCSWRRQYIYTVWHXVTQENVQEIQONZJKHOKYTEWZMYXRQFOKTEOKZ");

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
    msg.setTimeStamp(0.7714428016492877);
    msg.setSource(13720U);
    msg.setSourceEntity(28U);
    msg.setDestination(6366U);
    msg.setDestinationEntity(232U);
    msg.op = 195U;
    msg.actions.assign("RZEPPQKBFGPSTAHJZX");

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
    msg.setTimeStamp(0.8969134007346715);
    msg.setSource(53997U);
    msg.setSourceEntity(38U);
    msg.setDestination(59803U);
    msg.setDestinationEntity(247U);
    msg.actions.assign("SCUXIRZOINQOKMWBSPWPKDZICINXLWQVPFYNXUCUOIENYWISRCHJTAUXDGLRNBYJLWQZEDDZJSLYYPTXLHSLWDGVJERWJUXUXUCMKGSIMCHEAFNNYTBPYQNPAKLKBXVLFQCFBATGEOHFJONPZCZBOJDHBEHUEFGQFOREZMBKEFTBHVXAVMADGVAIVRGTUMRGRDPOVWMSLCTGZWAKKUH");

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
    msg.setTimeStamp(0.03367353871016243);
    msg.setSource(22669U);
    msg.setSourceEntity(135U);
    msg.setDestination(58787U);
    msg.setDestinationEntity(85U);
    msg.actions.assign("SUHKRDRUXYMFYPGZNEYRFWWIZWGOFQZEPJVOVUXKY");

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
    msg.setTimeStamp(0.9926449945248967);
    msg.setSource(41241U);
    msg.setSourceEntity(172U);
    msg.setDestination(17769U);
    msg.setDestinationEntity(123U);
    msg.actions.assign("ZBFSAVIIWMJPLLLVBTNFOTRNBOKLFNIYJEXSDCKEISAADPQQBUCJHSCYWPZBHVJRUMCSVAQWGUZUXKUHJWXMEWJYSZQMCQQKAITMQWPXMTYTSURNRLXWDPXPJHKMBZCLTMR");

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
    msg.setTimeStamp(0.726880157585561);
    msg.setSource(56909U);
    msg.setSourceEntity(27U);
    msg.setDestination(38883U);
    msg.setDestinationEntity(180U);
    msg.button = 222U;
    msg.value = 160U;

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
    msg.setTimeStamp(0.25150880482326743);
    msg.setSource(60833U);
    msg.setSourceEntity(107U);
    msg.setDestination(4899U);
    msg.setDestinationEntity(99U);
    msg.button = 43U;
    msg.value = 153U;

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
    msg.setTimeStamp(0.6351229693618576);
    msg.setSource(34860U);
    msg.setSourceEntity(252U);
    msg.setDestination(7236U);
    msg.setDestinationEntity(252U);
    msg.button = 27U;
    msg.value = 181U;

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
    msg.setTimeStamp(0.17036501725421516);
    msg.setSource(31363U);
    msg.setSourceEntity(90U);
    msg.setDestination(55311U);
    msg.setDestinationEntity(39U);
    msg.op = 206U;
    msg.text.assign("IYLGVDLWYOHUPKAWGXFZPUPFIPMUGGQIVZBFDA");

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
    msg.setTimeStamp(0.8093130969092058);
    msg.setSource(48722U);
    msg.setSourceEntity(60U);
    msg.setDestination(8537U);
    msg.setDestinationEntity(123U);
    msg.op = 32U;
    msg.text.assign("JEMNOIEQOMIAEXIZOTYOOZFGWSTZMAHLHVGUASBEVMYDIXYRLQXXFTSPGWOXDAANDHQMHUGLRZUSVXUWLTAFWTXVFPVNXHPFCRVIVJOEMWJPLFHYODSJGPVJZBVDMPBBAIBOQOEQGJLBUKLZIGRKBT");

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
    msg.setTimeStamp(0.4433036090556166);
    msg.setSource(45772U);
    msg.setSourceEntity(17U);
    msg.setDestination(42811U);
    msg.setDestinationEntity(125U);
    msg.op = 154U;
    msg.text.assign("XFWKLSNCNTOCFXPMIVYTHTLUCDOWIAJARAMBTRDYYANTMEXNDFUWIPOEEJYLWLANFRGEWUGQFQULWZDQXFBHZCIDZJNECLAKVOHMZAWLZCMRVENOTEJSPKTGEINJHULRTYMUGXKVVBYMPOSGMSROVQUEKBJBFQGKBLDQXCTAQVZHSBPZPYBIHKYBPGDWSZQKRQ");

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
    msg.setTimeStamp(0.12755389596625388);
    msg.setSource(50695U);
    msg.setSourceEntity(218U);
    msg.setDestination(48989U);
    msg.setDestinationEntity(175U);
    msg.op = 163U;
    msg.time_remain = 0.9175553020530866;
    msg.sched_time = 0.46806668397179596;

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
    msg.setTimeStamp(0.6743921327453178);
    msg.setSource(50625U);
    msg.setSourceEntity(173U);
    msg.setDestination(32594U);
    msg.setDestinationEntity(85U);
    msg.op = 138U;
    msg.time_remain = 0.3815747111306398;
    msg.sched_time = 0.7606493497991749;

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
    msg.setTimeStamp(0.30123828894457094);
    msg.setSource(24682U);
    msg.setSourceEntity(157U);
    msg.setDestination(12624U);
    msg.setDestinationEntity(244U);
    msg.op = 90U;
    msg.time_remain = 0.48746977824369264;
    msg.sched_time = 0.34095923448764287;

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
    msg.setTimeStamp(0.7073500331126573);
    msg.setSource(25887U);
    msg.setSourceEntity(175U);
    msg.setDestination(40809U);
    msg.setDestinationEntity(250U);
    msg.name.assign("PKDGXURYRRYRNBQZNDYQFZVIBXSXMPUQZNPRPEEHXQIOLSYQXOPQOZSKUFNBTFKYARNELFXWCOGJSSZLMYCMHVQIGWAS");
    msg.op = 184U;
    msg.sched_time = 0.3500394855794533;

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
    msg.setTimeStamp(0.9114598486671018);
    msg.setSource(28605U);
    msg.setSourceEntity(253U);
    msg.setDestination(24315U);
    msg.setDestinationEntity(158U);
    msg.name.assign("TXRLKXGBHDGGIUYWZRPYSQBHCTQPYBNHEJVFYIAYZBHRZHMNSDCOMCXMEFKKCWMUEZWQYZKPXLLPAZJVHFYOUSVOALFXSCIJNQURTDIAIRFGKUZADQEPISULCTDDOBVQJSRWFDMVEBJFVJRILRGQHKUTCKNCOHUGIGLBQEKUWJINJFAZECPOFYAWYXK");
    msg.op = 128U;
    msg.sched_time = 0.5397273625337751;

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
    msg.setTimeStamp(0.8698850666132204);
    msg.setSource(6168U);
    msg.setSourceEntity(64U);
    msg.setDestination(33854U);
    msg.setDestinationEntity(34U);
    msg.name.assign("MXLVTRDBFGYUZYPFWMQXSBYTKUBIQBBCGBFRIOPILGXQHGSZOWEQUVIDTKWPYWDSYZCTOQLEFSYLIOVMXEHDJPMHIFKBDHOCAJTTVMGKZZRRBAZDYHKPNUENAZASHATMLHWWUNMBZDRJAMSYMFPGRNCQFHEOOPTVRHG");
    msg.op = 86U;
    msg.sched_time = 0.29269537485169383;

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
    msg.setTimeStamp(0.4501439503252336);
    msg.setSource(8463U);
    msg.setSourceEntity(19U);
    msg.setDestination(38596U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.7719153544269882);
    msg.setSource(42867U);
    msg.setSourceEntity(139U);
    msg.setDestination(1065U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.43286468828474645);
    msg.setSource(356U);
    msg.setSourceEntity(204U);
    msg.setDestination(53546U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.20499335134004038);
    msg.setSource(24445U);
    msg.setSourceEntity(18U);
    msg.setDestination(47384U);
    msg.setDestinationEntity(125U);
    msg.name.assign("QQLBLDHSGKQXDKVYMLCWFZUQHLWYGVXDDYFTPDZTVDPCHRSPGFFZMBBXLOSIJHVAJYPCKHFJINNXJDALYPMIYPNQRMIFVUZHREMBYOEBKLWBUIOPTZEWZBVISRRXDWUHVLOQEJCENAMGAUQBFGOMVEEHGPRZFUYQKWCSSNKXGKRWSOSQBTSASHRAVTVKMUZMOJNPLGITFNXTCERWZQJDAJLHRXTMTGBIAWUAIUNONXP");
    msg.state = 136U;

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
    msg.setTimeStamp(0.8204569663849232);
    msg.setSource(7061U);
    msg.setSourceEntity(132U);
    msg.setDestination(49373U);
    msg.setDestinationEntity(190U);
    msg.name.assign("AVMYGPZESSAKWPGVWVIIJFFVWDNLOJUSMCTXIEGLFOHRAZHXFQTJDNBNUSTORLHNRBPRZRCJGULSBJZGMEUNNJTROBVSUPCPI");
    msg.state = 124U;

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
    msg.setTimeStamp(0.788590095294227);
    msg.setSource(17399U);
    msg.setSourceEntity(250U);
    msg.setDestination(36497U);
    msg.setDestinationEntity(10U);
    msg.name.assign("BJOKCWZIPREJEDCUOPSZFRKISVLTBPBUBXNRPCCIXVCWYDNAZZYSOQJDPFKXIBXNZEDYHADIYVNVTSPFSPTYCLYMMGYENGLGMPVOTHCPLYBDYWBUJKFUQQZRLOSRJHVOWAMQTNGICSEKWXKBOUQFKLLUEEEITVVTIGJKDLTMGDIGPNMZDWHNCUWOBCXRMBYSERLZJFXGXAOMQZKWQHSSGVRJ");
    msg.state = 84U;

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
    msg.setTimeStamp(0.23874388426955984);
    msg.setSource(46867U);
    msg.setSourceEntity(8U);
    msg.setDestination(53723U);
    msg.setDestinationEntity(164U);
    msg.name.assign("OESIBTYUSKJXYEAJIUZMIOYWXUPEGGFZEKNTQPNCAPIFVHXUSGCKDKNVOJVWQZYTSKYJTZAUORZMUHOBIFSURNYLJSTDJYNPXTRLBGDDKMIHUEWQIMLBQVQQQHNPMLYDRFNKVCQEIBSDHSFOHUWCBMG");
    msg.value = 237U;

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
    msg.setTimeStamp(0.47454697652922817);
    msg.setSource(22934U);
    msg.setSourceEntity(57U);
    msg.setDestination(57311U);
    msg.setDestinationEntity(46U);
    msg.name.assign("GWKMCMHVTPNEXZFQVFMCRXIFR");
    msg.value = 131U;

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
    msg.setTimeStamp(0.9625741514783);
    msg.setSource(22735U);
    msg.setSourceEntity(208U);
    msg.setDestination(48947U);
    msg.setDestinationEntity(2U);
    msg.name.assign("RFACPAJOHNBZSLLCLFAQDXVSLXMHBRYPIDXBEPMMKOVTYKLNYGIXDSFOYZREHHIWKHBXRIYVDORQBLXLCVQXPJFTTYSOEKMNGPOVGWCGOYYKKNKEJIGHWLQ");
    msg.value = 76U;

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
    msg.setTimeStamp(0.9466727398010089);
    msg.setSource(5665U);
    msg.setSourceEntity(248U);
    msg.setDestination(36864U);
    msg.setDestinationEntity(130U);
    msg.name.assign("VZYDIJZVPEPYFDRQGBIKRHJDLCGBUPJKCXHCFAQUEZYHQBKSULTQSOAPGFYAWQOHLMRITQOZSLUIYV");

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
    msg.setTimeStamp(0.8084262546398515);
    msg.setSource(41951U);
    msg.setSourceEntity(182U);
    msg.setDestination(50389U);
    msg.setDestinationEntity(90U);
    msg.name.assign("EBVMPXYDFRBGYCRFCRIUSKVFLGXHKZAUUPUPLEUNDJKNHEOWNRMRAVKYACBKROCBJMGOQNMJSPLYLFQECJAXPIKFHIYNHNZOLXQWQZDTQPGZZ");

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
    msg.setTimeStamp(0.08268720585083345);
    msg.setSource(2707U);
    msg.setSourceEntity(84U);
    msg.setDestination(52177U);
    msg.setDestinationEntity(25U);
    msg.name.assign("CVOEPYDATBNEZDPMWBYGYNXFPZCSFKMQDSHZQQIRVUAGQAOTXEYJRKA");

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
    msg.setTimeStamp(0.4795251356157946);
    msg.setSource(32670U);
    msg.setSourceEntity(53U);
    msg.setDestination(21918U);
    msg.setDestinationEntity(104U);
    msg.name.assign("VXKAHDMTGXLFVKYLOXMSWGRQSJJVUBUWASBJUKPDDFSZE");
    msg.value = 124U;

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
    msg.setTimeStamp(0.5509817655344403);
    msg.setSource(27925U);
    msg.setSourceEntity(196U);
    msg.setDestination(15364U);
    msg.setDestinationEntity(158U);
    msg.name.assign("ZDYDTHDHXXVGAULKSBEAQXIDQBWKOCGAMFRFNNPZIBXLSKPHUAZXLCYFVRJSMVBCJUUTRFMYSAWYEXROGKEVQNTXIKHOBGJYFGPHHOE");
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
    msg.setTimeStamp(0.9358219426277933);
    msg.setSource(43476U);
    msg.setSourceEntity(183U);
    msg.setDestination(32248U);
    msg.setDestinationEntity(46U);
    msg.name.assign("LFDGXYOSWKTVLAVXSPEBRZQAYHXPNZSEMPBNPNOCWOVBGXZYIJLCIHHFJRUKKVOVZUDAZMFFMMHDDYUIVJCTJNSSDQYBVBKUVDGJILPMGHSQUGGWZVXGDNTIHBIBFSARIQELYELRTMNSYQIEHVCXRYBNFPTKDBTKJMJARK");
    msg.value = 32U;

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
    msg.setTimeStamp(0.7013710624585003);
    msg.setSource(27030U);
    msg.setSourceEntity(107U);
    msg.setDestination(31714U);
    msg.setDestinationEntity(95U);
    msg.id = 31U;
    msg.period = 4098039517U;
    msg.duty_cycle = 490188903U;

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
    msg.setTimeStamp(0.5413905174620806);
    msg.setSource(1548U);
    msg.setSourceEntity(71U);
    msg.setDestination(2098U);
    msg.setDestinationEntity(134U);
    msg.id = 212U;
    msg.period = 2935765697U;
    msg.duty_cycle = 509686493U;

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
    msg.setTimeStamp(0.6218797305422372);
    msg.setSource(33913U);
    msg.setSourceEntity(41U);
    msg.setDestination(10068U);
    msg.setDestinationEntity(194U);
    msg.id = 37U;
    msg.period = 3934584765U;
    msg.duty_cycle = 231971123U;

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
    msg.setTimeStamp(0.6177546339383143);
    msg.setSource(6367U);
    msg.setSourceEntity(111U);
    msg.setDestination(13247U);
    msg.setDestinationEntity(199U);
    msg.id = 203U;
    msg.period = 922075373U;
    msg.duty_cycle = 3628606203U;

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
    msg.setTimeStamp(0.0840464208689976);
    msg.setSource(62845U);
    msg.setSourceEntity(164U);
    msg.setDestination(14416U);
    msg.setDestinationEntity(1U);
    msg.id = 66U;
    msg.period = 1337055389U;
    msg.duty_cycle = 2069737923U;

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
    msg.setTimeStamp(0.930805612730284);
    msg.setSource(53950U);
    msg.setSourceEntity(232U);
    msg.setDestination(2478U);
    msg.setDestinationEntity(200U);
    msg.id = 1U;
    msg.period = 44599885U;
    msg.duty_cycle = 132696053U;

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
    msg.setTimeStamp(0.07595137388848838);
    msg.setSource(2632U);
    msg.setSourceEntity(236U);
    msg.setDestination(37683U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.02662274617165461;
    msg.lon = 0.25327974645985984;
    msg.height = 0.8691390043456922;
    msg.x = 0.05811369990958415;
    msg.y = 0.4730506848591557;
    msg.z = 0.6839015943256781;
    msg.phi = 0.3212858272756711;
    msg.theta = 0.4084308477686158;
    msg.psi = 0.9468055164218251;
    msg.u = 0.4032841186822408;
    msg.v = 0.2372800849391351;
    msg.w = 0.052057687193788005;
    msg.vx = 0.5587682911676994;
    msg.vy = 0.17859898550832565;
    msg.vz = 0.6053545841189961;
    msg.p = 0.7528794145721299;
    msg.q = 0.12148852188698755;
    msg.r = 0.7749979930110534;
    msg.depth = 0.2729606770284039;
    msg.alt = 0.06248760820037558;

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
    msg.setTimeStamp(0.9756109244055426);
    msg.setSource(33496U);
    msg.setSourceEntity(156U);
    msg.setDestination(42023U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.3596696268410634;
    msg.lon = 0.8235128106319352;
    msg.height = 0.44633035005584065;
    msg.x = 0.44322423145146284;
    msg.y = 0.013285982394481421;
    msg.z = 0.5345207716937791;
    msg.phi = 0.18244975200001612;
    msg.theta = 0.07138751282172906;
    msg.psi = 0.7487386762315671;
    msg.u = 0.9499028418362514;
    msg.v = 0.4223793477717296;
    msg.w = 0.0005319526261530205;
    msg.vx = 0.4289065049547033;
    msg.vy = 0.2560599208731973;
    msg.vz = 0.7778087983821563;
    msg.p = 0.859703863691791;
    msg.q = 0.08344578721420148;
    msg.r = 0.5236774640870268;
    msg.depth = 0.3783601460007573;
    msg.alt = 0.011043261314617303;

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
    msg.setTimeStamp(0.17817695583606308);
    msg.setSource(47916U);
    msg.setSourceEntity(185U);
    msg.setDestination(12434U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.09340095528194348;
    msg.lon = 0.8362935954386856;
    msg.height = 0.8315274840348182;
    msg.x = 0.016521338697835564;
    msg.y = 0.625595784768141;
    msg.z = 0.6065507570555732;
    msg.phi = 0.1823833567896499;
    msg.theta = 0.8430702759841793;
    msg.psi = 0.2454634323372028;
    msg.u = 0.5334531086817385;
    msg.v = 0.8261280977802303;
    msg.w = 0.11549735295373376;
    msg.vx = 0.5684861990875151;
    msg.vy = 0.7902676163979448;
    msg.vz = 0.36864021493342813;
    msg.p = 0.9969918469951539;
    msg.q = 0.3784499388623057;
    msg.r = 0.2219201598448527;
    msg.depth = 0.9268402496785747;
    msg.alt = 0.009381526530204631;

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
    msg.setTimeStamp(0.9291750151714169);
    msg.setSource(14277U);
    msg.setSourceEntity(108U);
    msg.setDestination(21906U);
    msg.setDestinationEntity(43U);
    msg.x = 0.7055445072864748;
    msg.y = 0.8080062201649031;
    msg.z = 0.8022186872984944;

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
    msg.setTimeStamp(0.5350799923417288);
    msg.setSource(22880U);
    msg.setSourceEntity(131U);
    msg.setDestination(10635U);
    msg.setDestinationEntity(150U);
    msg.x = 0.8988887496850272;
    msg.y = 0.8303496942043822;
    msg.z = 0.024693899220888493;

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
    msg.setTimeStamp(0.16471245664118284);
    msg.setSource(46881U);
    msg.setSourceEntity(179U);
    msg.setDestination(2524U);
    msg.setDestinationEntity(197U);
    msg.x = 0.80572147490568;
    msg.y = 0.8149321005001895;
    msg.z = 0.39488957336880437;

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
    msg.setTimeStamp(0.9366344868157207);
    msg.setSource(55214U);
    msg.setSourceEntity(36U);
    msg.setDestination(57399U);
    msg.setDestinationEntity(251U);
    msg.value = 0.8045507958328311;

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
    msg.setTimeStamp(0.8981801000888943);
    msg.setSource(34005U);
    msg.setSourceEntity(173U);
    msg.setDestination(42044U);
    msg.setDestinationEntity(169U);
    msg.value = 0.2385037090082568;

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
    msg.setTimeStamp(0.23357200568910497);
    msg.setSource(51360U);
    msg.setSourceEntity(131U);
    msg.setDestination(5133U);
    msg.setDestinationEntity(0U);
    msg.value = 0.07181621169548447;

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
    msg.setTimeStamp(0.2134409770824831);
    msg.setSource(12350U);
    msg.setSourceEntity(31U);
    msg.setDestination(59049U);
    msg.setDestinationEntity(203U);
    msg.value = 0.4880852360561242;

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
    msg.setTimeStamp(0.8016006074841605);
    msg.setSource(56172U);
    msg.setSourceEntity(163U);
    msg.setDestination(11680U);
    msg.setDestinationEntity(213U);
    msg.value = 0.373506875672747;

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
    msg.setTimeStamp(0.5093610049818115);
    msg.setSource(4283U);
    msg.setSourceEntity(150U);
    msg.setDestination(20199U);
    msg.setDestinationEntity(166U);
    msg.value = 0.7721566960361609;

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
    msg.setTimeStamp(0.4949524087280702);
    msg.setSource(20603U);
    msg.setSourceEntity(91U);
    msg.setDestination(1942U);
    msg.setDestinationEntity(119U);
    msg.x = 0.9162204136634298;
    msg.y = 0.521738192887836;
    msg.z = 0.019500907997256123;
    msg.phi = 0.4090599644759001;
    msg.theta = 0.603416860449074;
    msg.psi = 0.8720854376573596;
    msg.p = 0.8374056359501523;
    msg.q = 0.4724447738579265;
    msg.r = 0.7965434405470994;
    msg.u = 0.13437829653981348;
    msg.v = 0.3516985976813509;
    msg.w = 0.8410433140022525;
    msg.bias_psi = 0.5599716664338867;
    msg.bias_r = 0.9403521655501413;

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
    msg.setTimeStamp(0.28822888321923945);
    msg.setSource(31899U);
    msg.setSourceEntity(254U);
    msg.setDestination(10073U);
    msg.setDestinationEntity(247U);
    msg.x = 0.40773626096313975;
    msg.y = 0.11712408367686256;
    msg.z = 0.9242952547386866;
    msg.phi = 0.9452276340274176;
    msg.theta = 0.09666685163734567;
    msg.psi = 0.2593604873767088;
    msg.p = 0.16574522864032604;
    msg.q = 0.4569892140335394;
    msg.r = 0.5400730419016121;
    msg.u = 0.932893269528504;
    msg.v = 0.14896853160518142;
    msg.w = 0.0807624417090872;
    msg.bias_psi = 0.9136863208020702;
    msg.bias_r = 0.8620717620756507;

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
    msg.setTimeStamp(0.23619931914580916);
    msg.setSource(34577U);
    msg.setSourceEntity(87U);
    msg.setDestination(57155U);
    msg.setDestinationEntity(33U);
    msg.x = 0.0960380190274831;
    msg.y = 0.668317439941319;
    msg.z = 0.013589890734176935;
    msg.phi = 0.43876241000032223;
    msg.theta = 0.24393143435568387;
    msg.psi = 0.9828771607253628;
    msg.p = 0.2778860004670961;
    msg.q = 0.9018846134830282;
    msg.r = 0.5209096057747481;
    msg.u = 0.3528130541952148;
    msg.v = 0.9376510340890936;
    msg.w = 0.1682067996127693;
    msg.bias_psi = 0.31492420285388756;
    msg.bias_r = 0.6521568673751055;

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
    msg.setTimeStamp(0.24460249409232881);
    msg.setSource(58654U);
    msg.setSourceEntity(100U);
    msg.setDestination(7648U);
    msg.setDestinationEntity(189U);
    msg.bias_psi = 0.9358365135071758;
    msg.bias_r = 0.26768684934578857;
    msg.cog = 0.46168794592491325;
    msg.cyaw = 0.9126929189735126;
    msg.lbl_rej_level = 0.09376975465237469;
    msg.gps_rej_level = 0.1210145049182978;
    msg.custom_x = 0.8243460889902191;
    msg.custom_y = 0.103260898571776;
    msg.custom_z = 0.4976894727439397;

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
    msg.setTimeStamp(0.2910455840273767);
    msg.setSource(23275U);
    msg.setSourceEntity(219U);
    msg.setDestination(56142U);
    msg.setDestinationEntity(137U);
    msg.bias_psi = 0.11082795908482868;
    msg.bias_r = 0.6385053784688828;
    msg.cog = 0.36329914370760696;
    msg.cyaw = 0.6009864326049772;
    msg.lbl_rej_level = 0.16955545423895002;
    msg.gps_rej_level = 0.7044292234958627;
    msg.custom_x = 0.39680362963740423;
    msg.custom_y = 0.2710843191703608;
    msg.custom_z = 0.33203083409056744;

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
    msg.setTimeStamp(0.07759752255632357);
    msg.setSource(29114U);
    msg.setSourceEntity(196U);
    msg.setDestination(18166U);
    msg.setDestinationEntity(112U);
    msg.bias_psi = 0.3671505539340375;
    msg.bias_r = 0.0800662653672003;
    msg.cog = 0.39927862747076104;
    msg.cyaw = 0.38447386675029627;
    msg.lbl_rej_level = 0.48162769191546717;
    msg.gps_rej_level = 0.40880283246716964;
    msg.custom_x = 0.43910222256515996;
    msg.custom_y = 0.3553955069993965;
    msg.custom_z = 0.394995861254691;

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
    msg.setTimeStamp(0.13938238752311316);
    msg.setSource(9726U);
    msg.setSourceEntity(53U);
    msg.setDestination(62713U);
    msg.setDestinationEntity(133U);
    msg.utc_time = 0.2233888626300673;
    msg.reason = 162U;

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
    msg.setTimeStamp(0.37018975855814085);
    msg.setSource(46612U);
    msg.setSourceEntity(68U);
    msg.setDestination(29669U);
    msg.setDestinationEntity(227U);
    msg.utc_time = 0.38310338040354597;
    msg.reason = 155U;

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
    msg.setTimeStamp(0.32625879475067954);
    msg.setSource(24935U);
    msg.setSourceEntity(63U);
    msg.setDestination(32217U);
    msg.setDestinationEntity(85U);
    msg.utc_time = 0.7713205132744098;
    msg.reason = 213U;

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
    msg.setTimeStamp(0.5171687095920108);
    msg.setSource(19631U);
    msg.setSourceEntity(36U);
    msg.setDestination(61858U);
    msg.setDestinationEntity(17U);
    msg.id = 114U;
    msg.range = 0.6457585111503302;
    msg.acceptance = 56U;

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
    msg.setTimeStamp(0.09928515111839553);
    msg.setSource(31134U);
    msg.setSourceEntity(65U);
    msg.setDestination(62162U);
    msg.setDestinationEntity(50U);
    msg.id = 206U;
    msg.range = 0.3248928039400203;
    msg.acceptance = 135U;

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
    msg.setTimeStamp(0.158149442836777);
    msg.setSource(1837U);
    msg.setSourceEntity(6U);
    msg.setDestination(13663U);
    msg.setDestinationEntity(231U);
    msg.id = 103U;
    msg.range = 0.09504564532715432;
    msg.acceptance = 181U;

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
    msg.setTimeStamp(0.9886422098065771);
    msg.setSource(25450U);
    msg.setSourceEntity(19U);
    msg.setDestination(64094U);
    msg.setDestinationEntity(21U);
    msg.type = 178U;
    msg.reason = 110U;
    msg.value = 0.9340398686203207;
    msg.timestep = 0.12495709826850632;

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
    msg.setTimeStamp(0.2379621735154569);
    msg.setSource(42056U);
    msg.setSourceEntity(124U);
    msg.setDestination(24288U);
    msg.setDestinationEntity(20U);
    msg.type = 184U;
    msg.reason = 234U;
    msg.value = 0.08429895466256365;
    msg.timestep = 0.6598051165615204;

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
    msg.setTimeStamp(0.727719481156892);
    msg.setSource(34618U);
    msg.setSourceEntity(230U);
    msg.setDestination(56800U);
    msg.setDestinationEntity(7U);
    msg.type = 109U;
    msg.reason = 34U;
    msg.value = 0.32876284749147433;
    msg.timestep = 0.9699025024069964;

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
    msg.setTimeStamp(0.7478032670247382);
    msg.setSource(55920U);
    msg.setSourceEntity(119U);
    msg.setDestination(9117U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.6799637508918968);
    msg.setSource(11553U);
    msg.setSourceEntity(131U);
    msg.setDestination(11935U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.9553723188302461);
    msg.setSource(11999U);
    msg.setSourceEntity(4U);
    msg.setDestination(49532U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.8024030353651075);
    msg.setSource(40843U);
    msg.setSourceEntity(41U);
    msg.setDestination(2776U);
    msg.setDestinationEntity(183U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IUJXQWMSUCPIGKDUTEUXSEJUEPFNRMPGIWFJORGFWVFCQAFBJODNNUOYODFMOIVRGMYMXIPFIQZOJVNKUTGCTBPLDQUQZBWVKHJOZXSTQREYRDDAPAAHQTSWBGGWKYELXTSHPIZLSZENAFARNFBCCMKVZDWGCLSS");
    tmp_msg_0.lat = 0.7598648898734226;
    tmp_msg_0.lon = 0.8928593708956567;
    tmp_msg_0.depth = 0.0027041563428700233;
    tmp_msg_0.query_channel = 134U;
    tmp_msg_0.reply_channel = 68U;
    tmp_msg_0.transponder_delay = 132U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6383083781758816;
    msg.y = 0.15287566928031038;
    msg.var_x = 0.10451614149605704;
    msg.var_y = 0.5518016168262408;
    msg.distance = 0.7564814601299388;

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
    msg.setTimeStamp(0.4574046770576147);
    msg.setSource(62276U);
    msg.setSourceEntity(217U);
    msg.setDestination(35748U);
    msg.setDestinationEntity(142U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QVRSALNNEHTWOXCJTBMUILECZEQKDQBOTTESIIHWBOQSZSVAOSNIXHGJICGSPMITYIPHDRDJBKAVXPUMKHPWVGUOXCSUJNDVQQNFKYAAEWRJWPMXSRZVUYQPGOQMCKBTKLBCZPOWSWEIANTQP");
    tmp_msg_0.lat = 0.9107671100804468;
    tmp_msg_0.lon = 0.22311714764148838;
    tmp_msg_0.depth = 0.15362284408575422;
    tmp_msg_0.query_channel = 75U;
    tmp_msg_0.reply_channel = 118U;
    tmp_msg_0.transponder_delay = 112U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.15919802621478096;
    msg.y = 0.9374640602886215;
    msg.var_x = 0.8968684771323537;
    msg.var_y = 0.8574827415984254;
    msg.distance = 0.19463378972751566;

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
    msg.setTimeStamp(0.7421773566130337);
    msg.setSource(16082U);
    msg.setSourceEntity(131U);
    msg.setDestination(12620U);
    msg.setDestinationEntity(18U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HZLQNRBEEVTTOFEUYDEWOQRLKLWKZNMRHWFSGQRKCNLEQBPMYZPBUHAHJIWRXMPKLGCYGRDLKHNVPDTCLUGFMSPJDSCXIVVYDZRKHPIUTOWQVBMFSSGNFJFJCDJWNAEYXOTRXPJPBJKDLRBHIZOUWVBIQQHMJGUUSIGFDIWKCCXPJGOXTEKUPNEDFIOWUILSAQSYYEBMBYVIXYFTVLZZMAFNTHA");
    tmp_msg_0.lat = 0.23117550575033652;
    tmp_msg_0.lon = 0.621220420042013;
    tmp_msg_0.depth = 0.989651673727276;
    tmp_msg_0.query_channel = 158U;
    tmp_msg_0.reply_channel = 186U;
    tmp_msg_0.transponder_delay = 175U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.791373818367669;
    msg.y = 0.8611494397870294;
    msg.var_x = 0.3226726820918503;
    msg.var_y = 0.6531749946262245;
    msg.distance = 0.6195808670678223;

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
    msg.setTimeStamp(0.40058713874906227);
    msg.setSource(8186U);
    msg.setSourceEntity(89U);
    msg.setDestination(43774U);
    msg.setDestinationEntity(201U);
    msg.state = 51U;

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
    msg.setTimeStamp(0.4397134604642099);
    msg.setSource(48183U);
    msg.setSourceEntity(178U);
    msg.setDestination(8170U);
    msg.setDestinationEntity(144U);
    msg.state = 39U;

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
    msg.setTimeStamp(0.13006638654933467);
    msg.setSource(32414U);
    msg.setSourceEntity(108U);
    msg.setDestination(20690U);
    msg.setDestinationEntity(82U);
    msg.state = 6U;

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
    msg.setTimeStamp(0.5447090938661908);
    msg.setSource(2539U);
    msg.setSourceEntity(18U);
    msg.setDestination(52535U);
    msg.setDestinationEntity(221U);
    msg.x = 0.7643857962152925;
    msg.y = 0.25046399814709974;
    msg.z = 0.49117258490201965;

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
    msg.setTimeStamp(0.01843705228181014);
    msg.setSource(5621U);
    msg.setSourceEntity(37U);
    msg.setDestination(5471U);
    msg.setDestinationEntity(209U);
    msg.x = 0.34002169427278184;
    msg.y = 0.8123808805690029;
    msg.z = 0.7168369612176076;

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
    msg.setTimeStamp(0.426932284568017);
    msg.setSource(3258U);
    msg.setSourceEntity(232U);
    msg.setDestination(23000U);
    msg.setDestinationEntity(145U);
    msg.x = 0.7831875313034348;
    msg.y = 0.5278567380124116;
    msg.z = 0.5389649831909863;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.16157659142756464);
    msg.setSource(60542U);
    msg.setSourceEntity(233U);
    msg.setDestination(27495U);
    msg.setDestinationEntity(250U);
    msg.value = 0.1952265294985096;

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
    msg.setTimeStamp(0.1973359378477162);
    msg.setSource(7452U);
    msg.setSourceEntity(202U);
    msg.setDestination(50719U);
    msg.setDestinationEntity(110U);
    msg.value = 0.8301357181426237;

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
    msg.setTimeStamp(0.9285549252859397);
    msg.setSource(46952U);
    msg.setSourceEntity(172U);
    msg.setDestination(64434U);
    msg.setDestinationEntity(222U);
    msg.value = 0.961608826307353;

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
    msg.setTimeStamp(0.8652251753136811);
    msg.setSource(59239U);
    msg.setSourceEntity(68U);
    msg.setDestination(52658U);
    msg.setDestinationEntity(230U);
    msg.value = 0.225471478668833;
    msg.z_units = 83U;

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
    msg.setTimeStamp(0.03163724245540034);
    msg.setSource(7842U);
    msg.setSourceEntity(2U);
    msg.setDestination(22254U);
    msg.setDestinationEntity(61U);
    msg.value = 0.7343160190003628;
    msg.z_units = 122U;

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
    msg.setTimeStamp(0.8657944455367639);
    msg.setSource(51716U);
    msg.setSourceEntity(164U);
    msg.setDestination(4159U);
    msg.setDestinationEntity(27U);
    msg.value = 0.082950976350189;
    msg.z_units = 217U;

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
    msg.setTimeStamp(0.8075615342061064);
    msg.setSource(49407U);
    msg.setSourceEntity(165U);
    msg.setDestination(59960U);
    msg.setDestinationEntity(110U);
    msg.value = 0.8744910457697963;
    msg.speed_units = 252U;

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
    msg.setTimeStamp(0.4502081147235677);
    msg.setSource(8294U);
    msg.setSourceEntity(171U);
    msg.setDestination(31602U);
    msg.setDestinationEntity(30U);
    msg.value = 0.6031727197901358;
    msg.speed_units = 171U;

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
    msg.setTimeStamp(0.8035985036490094);
    msg.setSource(24145U);
    msg.setSourceEntity(76U);
    msg.setDestination(23878U);
    msg.setDestinationEntity(199U);
    msg.value = 0.8776818566956283;
    msg.speed_units = 157U;

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
    msg.setTimeStamp(0.45006100190909093);
    msg.setSource(2813U);
    msg.setSourceEntity(108U);
    msg.setDestination(57619U);
    msg.setDestinationEntity(75U);
    msg.value = 0.14917331728573524;

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
    msg.setTimeStamp(0.8406051998904207);
    msg.setSource(35666U);
    msg.setSourceEntity(75U);
    msg.setDestination(31628U);
    msg.setDestinationEntity(219U);
    msg.value = 0.957723454725541;

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
    msg.setTimeStamp(0.508963001845921);
    msg.setSource(39998U);
    msg.setSourceEntity(176U);
    msg.setDestination(49715U);
    msg.setDestinationEntity(177U);
    msg.value = 0.31888679360886063;

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
    msg.setTimeStamp(0.5813475997747553);
    msg.setSource(18648U);
    msg.setSourceEntity(123U);
    msg.setDestination(9817U);
    msg.setDestinationEntity(38U);
    msg.value = 0.4962273755432173;

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
    msg.setTimeStamp(0.6779770267556187);
    msg.setSource(55791U);
    msg.setSourceEntity(173U);
    msg.setDestination(6110U);
    msg.setDestinationEntity(42U);
    msg.value = 0.7915190016457478;

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
    msg.setTimeStamp(0.5818471311322138);
    msg.setSource(60382U);
    msg.setSourceEntity(69U);
    msg.setDestination(30114U);
    msg.setDestinationEntity(112U);
    msg.value = 0.9729386371866925;

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
    msg.setTimeStamp(0.9810579927423739);
    msg.setSource(9896U);
    msg.setSourceEntity(29U);
    msg.setDestination(32507U);
    msg.setDestinationEntity(134U);
    msg.value = 0.01998437742846737;

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
    msg.setTimeStamp(0.5696928346840221);
    msg.setSource(11263U);
    msg.setSourceEntity(144U);
    msg.setDestination(38557U);
    msg.setDestinationEntity(214U);
    msg.value = 0.21157774334176715;

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
    msg.setTimeStamp(0.5517518853925831);
    msg.setSource(25043U);
    msg.setSourceEntity(80U);
    msg.setDestination(33477U);
    msg.setDestinationEntity(243U);
    msg.value = 0.046273874885930044;

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
    msg.setTimeStamp(0.23380203416031242);
    msg.setSource(35133U);
    msg.setSourceEntity(134U);
    msg.setDestination(26375U);
    msg.setDestinationEntity(172U);
    msg.path_ref = 526007412U;
    msg.start_lat = 0.3848386159706644;
    msg.start_lon = 0.08802262279386452;
    msg.start_z = 0.07178443369574283;
    msg.start_z_units = 187U;
    msg.end_lat = 0.7528511635529517;
    msg.end_lon = 0.528000329275632;
    msg.end_z = 0.5016225727402401;
    msg.end_z_units = 214U;
    msg.speed = 0.505149789135711;
    msg.speed_units = 17U;
    msg.lradius = 0.377192505474671;
    msg.flags = 138U;

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
    msg.setTimeStamp(0.615770059907822);
    msg.setSource(28943U);
    msg.setSourceEntity(41U);
    msg.setDestination(12468U);
    msg.setDestinationEntity(214U);
    msg.path_ref = 2034238987U;
    msg.start_lat = 0.02528284814093218;
    msg.start_lon = 0.8092603400396096;
    msg.start_z = 0.22427590467109093;
    msg.start_z_units = 156U;
    msg.end_lat = 0.8773707571338649;
    msg.end_lon = 0.3555763891946404;
    msg.end_z = 0.9796669396896927;
    msg.end_z_units = 65U;
    msg.speed = 0.13039804123122567;
    msg.speed_units = 57U;
    msg.lradius = 0.3394705818805701;
    msg.flags = 203U;

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
    msg.setTimeStamp(0.5478179778945385);
    msg.setSource(27030U);
    msg.setSourceEntity(71U);
    msg.setDestination(19855U);
    msg.setDestinationEntity(148U);
    msg.path_ref = 4113727295U;
    msg.start_lat = 0.37590272995169904;
    msg.start_lon = 0.8725546562767347;
    msg.start_z = 0.413200427084517;
    msg.start_z_units = 68U;
    msg.end_lat = 0.4939190636705343;
    msg.end_lon = 0.863183470133387;
    msg.end_z = 0.5169894475820244;
    msg.end_z_units = 158U;
    msg.speed = 0.31373863531587975;
    msg.speed_units = 22U;
    msg.lradius = 0.8749681004994551;
    msg.flags = 188U;

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
    msg.setTimeStamp(0.07018281077321953);
    msg.setSource(755U);
    msg.setSourceEntity(234U);
    msg.setDestination(9191U);
    msg.setDestinationEntity(156U);
    msg.x = 0.047439582403529856;
    msg.y = 0.9941089340821325;
    msg.z = 0.2733863979142024;
    msg.k = 0.2176910811542756;
    msg.m = 0.39902862299217134;
    msg.n = 0.8655580455200775;
    msg.flags = 232U;

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
    msg.setTimeStamp(0.8266076291372112);
    msg.setSource(60190U);
    msg.setSourceEntity(136U);
    msg.setDestination(55157U);
    msg.setDestinationEntity(55U);
    msg.x = 0.5141116379692033;
    msg.y = 0.0643511898322835;
    msg.z = 0.6102349550297647;
    msg.k = 0.060879816642811724;
    msg.m = 0.5316887866046915;
    msg.n = 0.78664276230501;
    msg.flags = 206U;

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
    msg.setTimeStamp(0.698003753905373);
    msg.setSource(50509U);
    msg.setSourceEntity(93U);
    msg.setDestination(50856U);
    msg.setDestinationEntity(154U);
    msg.x = 0.5303962847760119;
    msg.y = 0.3313517571251605;
    msg.z = 0.4913342335619464;
    msg.k = 0.6641873521374088;
    msg.m = 0.6790645351558471;
    msg.n = 0.7463362052922814;
    msg.flags = 94U;

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
    msg.setTimeStamp(0.77321195317094);
    msg.setSource(6855U);
    msg.setSourceEntity(71U);
    msg.setDestination(52824U);
    msg.setDestinationEntity(144U);
    msg.value = 0.6060344566176812;

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
    msg.setTimeStamp(0.973993895558653);
    msg.setSource(3236U);
    msg.setSourceEntity(178U);
    msg.setDestination(58226U);
    msg.setDestinationEntity(92U);
    msg.value = 0.17265142040779635;

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
    msg.setTimeStamp(0.6206923604653535);
    msg.setSource(5080U);
    msg.setSourceEntity(171U);
    msg.setDestination(61392U);
    msg.setDestinationEntity(41U);
    msg.value = 0.5987524731907178;

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
    msg.setTimeStamp(0.7354730810366724);
    msg.setSource(10768U);
    msg.setSourceEntity(56U);
    msg.setDestination(61739U);
    msg.setDestinationEntity(196U);
    msg.u = 0.5798053644055747;
    msg.v = 0.5224901483504284;
    msg.w = 0.400110121517703;
    msg.p = 0.8517026988404386;
    msg.q = 0.6050900759849813;
    msg.r = 0.11508508174903076;
    msg.flags = 105U;

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
    msg.setTimeStamp(0.21522711799623817);
    msg.setSource(50234U);
    msg.setSourceEntity(171U);
    msg.setDestination(21097U);
    msg.setDestinationEntity(226U);
    msg.u = 0.09640969706212876;
    msg.v = 0.8727431102727391;
    msg.w = 0.6701075033849744;
    msg.p = 0.510716309059006;
    msg.q = 0.17040710180340357;
    msg.r = 0.4156569484311905;
    msg.flags = 107U;

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
    msg.setTimeStamp(0.576685060098402);
    msg.setSource(48521U);
    msg.setSourceEntity(233U);
    msg.setDestination(53083U);
    msg.setDestinationEntity(40U);
    msg.u = 0.4398928230600181;
    msg.v = 0.41871223867933016;
    msg.w = 0.48912330328343123;
    msg.p = 0.6817533708345636;
    msg.q = 0.9249205800211335;
    msg.r = 0.44250369407017087;
    msg.flags = 111U;

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
    msg.setTimeStamp(0.5614195762136471);
    msg.setSource(13098U);
    msg.setSourceEntity(80U);
    msg.setDestination(34408U);
    msg.setDestinationEntity(215U);
    msg.path_ref = 646950741U;
    msg.start_lat = 0.2814419497468297;
    msg.start_lon = 0.6960125328438213;
    msg.start_z = 0.04124814265867793;
    msg.start_z_units = 52U;
    msg.end_lat = 0.6318922596103385;
    msg.end_lon = 0.9231166944881142;
    msg.end_z = 0.27676539670371425;
    msg.end_z_units = 77U;
    msg.lradius = 0.6248252624040063;
    msg.flags = 33U;
    msg.x = 0.4383772068558367;
    msg.y = 0.13508192768259353;
    msg.z = 0.6673553271304995;
    msg.vx = 0.4265904985972868;
    msg.vy = 0.4459025852340023;
    msg.vz = 0.31161908887179357;
    msg.course_error = 0.8552810660508946;
    msg.eta = 49635U;

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
    msg.setTimeStamp(0.4941063926811802);
    msg.setSource(12959U);
    msg.setSourceEntity(49U);
    msg.setDestination(19827U);
    msg.setDestinationEntity(144U);
    msg.path_ref = 2259921526U;
    msg.start_lat = 0.24684128599903787;
    msg.start_lon = 0.9543333819526001;
    msg.start_z = 0.0034841543140213815;
    msg.start_z_units = 20U;
    msg.end_lat = 0.17212586151406772;
    msg.end_lon = 0.24270886107603296;
    msg.end_z = 0.37134053717699456;
    msg.end_z_units = 106U;
    msg.lradius = 0.16943021451652251;
    msg.flags = 192U;
    msg.x = 0.6536865084858652;
    msg.y = 0.017062847582027363;
    msg.z = 0.5831385216226118;
    msg.vx = 0.9298326424681358;
    msg.vy = 0.1440739514212407;
    msg.vz = 0.1182190130516505;
    msg.course_error = 0.48470249481068006;
    msg.eta = 14263U;

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
    msg.setTimeStamp(0.09562652730338117);
    msg.setSource(52386U);
    msg.setSourceEntity(9U);
    msg.setDestination(48860U);
    msg.setDestinationEntity(170U);
    msg.path_ref = 2854783781U;
    msg.start_lat = 0.8225269635468003;
    msg.start_lon = 0.9784921407570164;
    msg.start_z = 0.2470173140667623;
    msg.start_z_units = 97U;
    msg.end_lat = 0.3276896887987988;
    msg.end_lon = 0.698598470303911;
    msg.end_z = 0.7723216921803192;
    msg.end_z_units = 128U;
    msg.lradius = 0.5906930006002126;
    msg.flags = 167U;
    msg.x = 0.9302571398592357;
    msg.y = 0.4135593643325052;
    msg.z = 0.5413054927803929;
    msg.vx = 0.7120308697301594;
    msg.vy = 0.06582470503037763;
    msg.vz = 0.640310715229506;
    msg.course_error = 0.5310295560841628;
    msg.eta = 65267U;

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
    msg.setTimeStamp(0.9928927391592597);
    msg.setSource(60145U);
    msg.setSourceEntity(49U);
    msg.setDestination(16730U);
    msg.setDestinationEntity(217U);
    msg.k = 0.5172871763979732;
    msg.m = 0.6094997892113124;
    msg.n = 0.09956870747067514;

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
    msg.setTimeStamp(0.38497737407727073);
    msg.setSource(30450U);
    msg.setSourceEntity(13U);
    msg.setDestination(16965U);
    msg.setDestinationEntity(105U);
    msg.k = 0.5786998709300571;
    msg.m = 0.9733265543798989;
    msg.n = 0.20968467915015954;

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
    msg.setTimeStamp(0.6745544454566751);
    msg.setSource(29331U);
    msg.setSourceEntity(2U);
    msg.setDestination(38363U);
    msg.setDestinationEntity(162U);
    msg.k = 0.11591138485869823;
    msg.m = 0.8353990086359105;
    msg.n = 0.8504005460868344;

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
    msg.setTimeStamp(0.6822862064931757);
    msg.setSource(51399U);
    msg.setSourceEntity(100U);
    msg.setDestination(50925U);
    msg.setDestinationEntity(115U);
    msg.p = 0.8657675645159802;
    msg.i = 0.41054997508226043;
    msg.d = 0.9298063939346766;
    msg.a = 0.013807806068527939;

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
    msg.setTimeStamp(0.658505772505029);
    msg.setSource(41304U);
    msg.setSourceEntity(226U);
    msg.setDestination(44180U);
    msg.setDestinationEntity(202U);
    msg.p = 0.720315524147209;
    msg.i = 0.16560422427326726;
    msg.d = 0.9401249001238369;
    msg.a = 0.17696318402019273;

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
    msg.setTimeStamp(0.9280347160369407);
    msg.setSource(6300U);
    msg.setSourceEntity(75U);
    msg.setDestination(34576U);
    msg.setDestinationEntity(173U);
    msg.p = 0.012125809976206714;
    msg.i = 0.6422553534969941;
    msg.d = 0.20978127373130107;
    msg.a = 0.993735758731936;

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
    msg.setTimeStamp(0.45213566536036753);
    msg.setSource(45707U);
    msg.setSourceEntity(129U);
    msg.setDestination(43301U);
    msg.setDestinationEntity(219U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.32657372480593083);
    msg.setSource(37549U);
    msg.setSourceEntity(132U);
    msg.setDestination(23636U);
    msg.setDestinationEntity(51U);
    msg.op = 107U;

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
    msg.setTimeStamp(0.8190041149501509);
    msg.setSource(61103U);
    msg.setSourceEntity(212U);
    msg.setDestination(57955U);
    msg.setDestinationEntity(229U);
    msg.op = 202U;

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
    msg.setTimeStamp(0.10186253394561828);
    msg.setSource(30436U);
    msg.setSourceEntity(251U);
    msg.setDestination(16478U);
    msg.setDestinationEntity(4U);
    msg.timeout = 45091U;
    msg.lat = 0.5060642499177549;
    msg.lon = 0.884524134347113;
    msg.z = 0.41253762402169614;
    msg.z_units = 119U;
    msg.speed = 0.46889978114648856;
    msg.speed_units = 243U;
    msg.roll = 0.5432860885895933;
    msg.pitch = 0.005931198579051333;
    msg.yaw = 0.8338484610218644;
    msg.custom.assign("LEKXADQFBMLNDAVUOWHDWUYUOHTPCKRJOEWNMPSHBAOBDSMZUHPGXIXVOULYCCMUIVGECHIXNFMIGJOGBTKNVTPSIMLXPZHGTBCCEDUYHQQNKOVZFRXJTPBTOUZJSIRPSSDYMRRWVMFASKEFNQKLZLTMLKKYWYIIKGEYAYSDAUXVSICYJDKYWNZCSTHGFXRJBZINAGRWAZHNQPJEDAFGWGJELJRZDQQCFLBOFXZVOCEVWBPVQF");

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
    msg.setTimeStamp(0.1985382962073562);
    msg.setSource(42251U);
    msg.setSourceEntity(235U);
    msg.setDestination(35940U);
    msg.setDestinationEntity(216U);
    msg.timeout = 63959U;
    msg.lat = 0.05455450059036726;
    msg.lon = 0.4969016445436796;
    msg.z = 0.8299255719019027;
    msg.z_units = 232U;
    msg.speed = 0.020392916379665338;
    msg.speed_units = 193U;
    msg.roll = 0.19840511533129868;
    msg.pitch = 0.1507553165167761;
    msg.yaw = 0.13642231930557946;
    msg.custom.assign("ULAUCJFDXMTYQFJRWYVKMHROGEZOQZ");

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
    msg.setTimeStamp(0.570927335029657);
    msg.setSource(26057U);
    msg.setSourceEntity(162U);
    msg.setDestination(48937U);
    msg.setDestinationEntity(131U);
    msg.timeout = 31880U;
    msg.lat = 0.3387771032562662;
    msg.lon = 0.7517344588364514;
    msg.z = 0.897207340186599;
    msg.z_units = 56U;
    msg.speed = 0.00023587913097455893;
    msg.speed_units = 179U;
    msg.roll = 0.9025656277150628;
    msg.pitch = 0.7072519534279931;
    msg.yaw = 0.8203813842235808;
    msg.custom.assign("YSOCOOAXISULZZJOOQRIOUESXYAHBPDMBKGTSLMDMPQYBJNRNENNPFTXPLQCNHFBGPRVIQBBLSVTPLSRZRWLEEWTCNSDUAVRECJFJJPIEFFQYYFUVKYTKFZKAUTGCVASOCDWFDUUFAUPZNJRXHDRWQJDJMKVSKOEOQMIUFXMDEAIGYQBIK");

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
    msg.setTimeStamp(0.07305931866705662);
    msg.setSource(59041U);
    msg.setSourceEntity(203U);
    msg.setDestination(32300U);
    msg.setDestinationEntity(231U);
    msg.timeout = 63315U;
    msg.lat = 0.7894817927806169;
    msg.lon = 0.6358943637151702;
    msg.z = 0.22623478913154815;
    msg.z_units = 84U;
    msg.speed = 0.8594099473483089;
    msg.speed_units = 122U;
    msg.duration = 42401U;
    msg.radius = 0.07907761240957512;
    msg.flags = 13U;
    msg.custom.assign("OKXHHEHLUTQXRAPBPMSKLAJNRBETUOIYUFBXIFEPOAMILXJFBQL");

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
    msg.setTimeStamp(0.39216717096882825);
    msg.setSource(64174U);
    msg.setSourceEntity(206U);
    msg.setDestination(42869U);
    msg.setDestinationEntity(90U);
    msg.timeout = 49642U;
    msg.lat = 0.9501337999425391;
    msg.lon = 0.0024154701747599594;
    msg.z = 0.4077834787903426;
    msg.z_units = 117U;
    msg.speed = 0.016767513867984474;
    msg.speed_units = 39U;
    msg.duration = 34510U;
    msg.radius = 0.06226642606298183;
    msg.flags = 222U;
    msg.custom.assign("JXXRQMJBTMTIYTWWZPOLPNLAKICRXNRCSKHETLWDTGYXXUWFBFRWJHOOCSHMOZJOXEKCXEAMAFMPVJKWFBYKLWHAUNZIIRUTELPFPZDRHUDSLKOLEQSMBNGMQRBZQOVAUQWCIVQHVUSTIBEUDTBYESMDVFLMLVRYIYQUNXSIFIYIRZDWJGTSKOPADYCXHJDNHCAVSZAKPCBQGSQLDFXRKGJUEQYEUHGGVGZFMZATVNAZOPKEJHCOYPCGPNJNDN");

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
    msg.setTimeStamp(0.8804985313861724);
    msg.setSource(61661U);
    msg.setSourceEntity(179U);
    msg.setDestination(7452U);
    msg.setDestinationEntity(188U);
    msg.timeout = 63304U;
    msg.lat = 0.2250120232775079;
    msg.lon = 0.6365883004374006;
    msg.z = 0.13265555012215402;
    msg.z_units = 136U;
    msg.speed = 0.2810420391121943;
    msg.speed_units = 103U;
    msg.duration = 2430U;
    msg.radius = 0.30566190532512516;
    msg.flags = 228U;
    msg.custom.assign("LSUKQCINRHQJUCUEAOWTANKRKZLIZERVQIBCXLOBYKAFXLOHMNTLHGGUGSOPXLCAFSIVZTFXNWYZRPZOTBIUJADNGJTHXGDQIMVGTKBXMTPFYXMPJKPFULKVKPEKRWAMKHSFPUHRGEMVQNYBEDSVZCJVVAPYRJVJILNTNIGRSSWQBSGTAQHXOZFFQDBMXWBDLUMINBD");

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
    msg.setTimeStamp(0.01745906583329848);
    msg.setSource(10284U);
    msg.setSourceEntity(62U);
    msg.setDestination(47938U);
    msg.setDestinationEntity(27U);
    msg.custom.assign("WZJSBKZUFIVDOSTHTHWNGLQKPHXMRGQVMJIETDPHTUFWNDPNWZIESJLIPHDLIOBUFFNSFOAHWVKHUSUYCKLFGBRYAARLTREXKCTXOSCLBETOSKJACGXECWRLCQDIYUELFOCJNAPYGAYDVPABZNRSHRVLWJTVIQNEQNPEKUEVRZYDGWXDVIMDXZTCIQZYZKTMSMMXKPFFXBRAIWBYRMZMKOGXWJYUBGHZASJNQNHJAVQYEOQOBUMLDMVBQOCCX");

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
    msg.setTimeStamp(0.27744290721241227);
    msg.setSource(36896U);
    msg.setSourceEntity(139U);
    msg.setDestination(31759U);
    msg.setDestinationEntity(159U);
    msg.custom.assign("OTBRNEWAFUREUFTUFOCRTZYXQLWYPMLNGOPZOVBRQPBEWCMIFGNXXMEVJIAXFXALAYHFHLCGWNBBHKND");

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
    msg.setTimeStamp(0.7264783774733263);
    msg.setSource(21145U);
    msg.setSourceEntity(1U);
    msg.setDestination(14117U);
    msg.setDestinationEntity(89U);
    msg.custom.assign("CXYXDCVCIMDAJFSIAFHJRDKGDFYPILNVRKBMOGHKXEOOTQYOSUIXZCFHPVOFSGRXSGEMFZHSNVLDPBSRUJVEZIGUFKUVFIJIRARPOGCWYDAQMLJIQHLCNBJUFTDYAXJZMMAAZMPZANISCHGQFXDWXVJSLTA");

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
    msg.setTimeStamp(0.27906746941344873);
    msg.setSource(46757U);
    msg.setSourceEntity(158U);
    msg.setDestination(12393U);
    msg.setDestinationEntity(14U);
    msg.timeout = 60444U;
    msg.lat = 0.7043774682312129;
    msg.lon = 0.09419566543771896;
    msg.z = 0.32081818261459005;
    msg.z_units = 85U;
    msg.duration = 39074U;
    msg.speed = 0.65891036711655;
    msg.speed_units = 144U;
    msg.type = 72U;
    msg.radius = 0.19580710239680288;
    msg.length = 0.419109447309565;
    msg.bearing = 0.64052918543054;
    msg.direction = 247U;
    msg.custom.assign("HWDPFIKNLIWOKJCCZGQQPJSQASMTOVDGQCDNQYWUTGFJSPBCXUOKBSBHNHOZCTVUZRVYXRNMMCXMLBDBJMGZLUITDGPNVPQEGVLSVVPQZAXJERUBYAOHMKWZGXHSUHIUQYUEFGTTEALKFABMRDKAHRAZZARIXTJWPTEVJOJOPPSAXGEMQKWCRLLKSADNETINFLDJYHFIVEBMYWFSEEVROQCZ");

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
    msg.setTimeStamp(0.6788636908477802);
    msg.setSource(16634U);
    msg.setSourceEntity(131U);
    msg.setDestination(13252U);
    msg.setDestinationEntity(72U);
    msg.timeout = 59108U;
    msg.lat = 0.6075598470829253;
    msg.lon = 0.4300055350433074;
    msg.z = 0.2663186720046389;
    msg.z_units = 78U;
    msg.duration = 10240U;
    msg.speed = 0.8682431025704158;
    msg.speed_units = 118U;
    msg.type = 235U;
    msg.radius = 0.36630157644441086;
    msg.length = 0.4095302261167022;
    msg.bearing = 0.21088385570883939;
    msg.direction = 6U;
    msg.custom.assign("ESORQPGNRMCOWJBJPEZQFBLTXTMKFCSFJKWNQVHYLOILSNWYANDJEYQQHCNNVXZGPPIAPKZLMMCITSEKSAACHQRHVTQKDILHGPPTASIRBGLREPYSULMBTHYWGNUDPVHGZDXISUMWYJFRTJGFVPDXWIAUUXZUUFFCDZLOTNUONCOJDKCRWNQYEWHOTBSSUOYWQBXZDJBTRJLYOLEDAFOEAFX");

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
    msg.setTimeStamp(0.6813892296490248);
    msg.setSource(15108U);
    msg.setSourceEntity(148U);
    msg.setDestination(7963U);
    msg.setDestinationEntity(229U);
    msg.timeout = 21539U;
    msg.lat = 0.9207043746295025;
    msg.lon = 0.9087148947394565;
    msg.z = 0.16234230524525406;
    msg.z_units = 5U;
    msg.duration = 57444U;
    msg.speed = 0.8426516730702494;
    msg.speed_units = 29U;
    msg.type = 111U;
    msg.radius = 0.13634276410816082;
    msg.length = 0.558810496067584;
    msg.bearing = 0.39737275187840315;
    msg.direction = 108U;
    msg.custom.assign("UHZNZSHIHOUHVXZHMNQTESOKBCWDEUNPKEYKSOLATBRAFOAUIFPPYGVSNEJEHXCMFMJKIRACYUZVKFFQTPMXJZIOUARYCTPQMAAQCWGZSVDDTELJRRUQZFRONSFEWDLGSQV");

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
    msg.setTimeStamp(0.30662675960654084);
    msg.setSource(9180U);
    msg.setSourceEntity(119U);
    msg.setDestination(7213U);
    msg.setDestinationEntity(42U);
    msg.duration = 18101U;
    msg.custom.assign("EZXKVRWYRVVCDBPZURSLLIOQLKTLYPRXSWVCLZQOVRVSJQJLGIHXGITYAHEEDLPIKIVPGYPWFUABRHTMDJXDPZWJKCCNETXQHYUMXJWYHCYNSMHOINXBTUJDKXVDKEOVFZQPAUGBHCXGCZGQEPFPC");

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
    msg.setTimeStamp(0.8618923125506368);
    msg.setSource(14600U);
    msg.setSourceEntity(74U);
    msg.setDestination(54409U);
    msg.setDestinationEntity(92U);
    msg.duration = 13303U;
    msg.custom.assign("ODLNWVUIISRKXYMYBJKKQGQZTHSECIVUEOKZMTKHUPRWDLGWXHMOVKMQPKDOJJNPLQQIFGPNVCUAVSOHTVCJTWANODXUYPJPRHOPGBTIXMEDEQJAFFECBZKTHZASLTRXXYRTFUYBP");

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
    msg.setTimeStamp(0.013553366719274318);
    msg.setSource(21686U);
    msg.setSourceEntity(246U);
    msg.setDestination(27075U);
    msg.setDestinationEntity(115U);
    msg.duration = 3935U;
    msg.custom.assign("KNHGKWRIEWXDMC");

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
    msg.setTimeStamp(0.6813616439790084);
    msg.setSource(38361U);
    msg.setSourceEntity(12U);
    msg.setDestination(62376U);
    msg.setDestinationEntity(164U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.968923269857882;
    msg.control.set(tmp_msg_0);
    msg.duration = 8993U;
    msg.custom.assign("LTFWMSGTWECINIDAGKBONUAIYREDJOUMCZGNWNNLCWUZQOPOYUXMCVPITRQAEXPRQVVDENSSVXLCKSWAEJPYTTWADEGYZSBJPYAZMCYUJXDUFKQEIGBLSDHZIJRKBKHFBJOXYBPQ");

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
    msg.setTimeStamp(0.639741813113512);
    msg.setSource(47838U);
    msg.setSourceEntity(179U);
    msg.setDestination(36239U);
    msg.setDestinationEntity(82U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.11044962583203233;
    msg.control.set(tmp_msg_0);
    msg.duration = 51126U;
    msg.custom.assign("ANXSIBBDFFCZHDTIVAPIEGACXWLJLRCYWEOKFMNKTBGBKUVJVJQUSWHGVFEGMDOOPCIVATLNDPENUUTWKSOTRSILCOKVUAXAWSFGDUHSFIOQLNPYHSVYYWRQAXEPFKHOHMOZQMLHUFZZKTEAQPAYIMZXNDUTKIRIZWPJEOBKQCBYVCGCNVSDWLUOFXGPTCQEJAPNEMZZMZMYWBXIWGLKSHJDXCRNXLYQLRRRNYDR");

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
    msg.setTimeStamp(0.04082689752453461);
    msg.setSource(18442U);
    msg.setSourceEntity(241U);
    msg.setDestination(33092U);
    msg.setDestinationEntity(127U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.9584747524016898;
    tmp_msg_0.z_units = 118U;
    msg.control.set(tmp_msg_0);
    msg.duration = 19690U;
    msg.custom.assign("ANIYHZFLGEPOSYOKICYVCYJZBPUSDFOKYULLBGHDBNUMWJNKGQTJDFTUUXUEVCPFRBBCLY");

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
    msg.setTimeStamp(0.4561942264444304);
    msg.setSource(26046U);
    msg.setSourceEntity(93U);
    msg.setDestination(13045U);
    msg.setDestinationEntity(27U);
    msg.timeout = 21513U;
    msg.lat = 0.9890732695352668;
    msg.lon = 0.4531710357284934;
    msg.z = 0.5866713918023442;
    msg.z_units = 0U;
    msg.speed = 0.4714667410090697;
    msg.speed_units = 115U;
    msg.bearing = 0.984378888265641;
    msg.cross_angle = 0.4379609187714587;
    msg.width = 0.4552062891640234;
    msg.length = 0.8631666188137187;
    msg.hstep = 0.7485556964410972;
    msg.coff = 214U;
    msg.alternation = 138U;
    msg.flags = 138U;
    msg.custom.assign("XEUTYWVGFWLCNBBELNISWGCYFLHOKRAPYERHZJRWUBDHMRZKUGUVITULCGIZEBNCSVADGXJQEMSVXREOKOJOFAJOXBYCJE");

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
    msg.setTimeStamp(0.5415219739425983);
    msg.setSource(9232U);
    msg.setSourceEntity(18U);
    msg.setDestination(13215U);
    msg.setDestinationEntity(84U);
    msg.timeout = 44567U;
    msg.lat = 0.8926475936794382;
    msg.lon = 0.7359971195352031;
    msg.z = 0.17106565787170203;
    msg.z_units = 150U;
    msg.speed = 0.04653901314651998;
    msg.speed_units = 25U;
    msg.bearing = 0.9800532659453528;
    msg.cross_angle = 0.05687236266068685;
    msg.width = 0.6575339782302507;
    msg.length = 0.9222514607342148;
    msg.hstep = 0.1924511363694642;
    msg.coff = 233U;
    msg.alternation = 252U;
    msg.flags = 212U;
    msg.custom.assign("IEZOVCFEVIPZZHMXCWSTLLAYIEYGNPHYZSEQGWACDZIVYQCBYXXASHNJVMZSPNTUUJSPOLTQSRRXWGBRHFJUOOTKQGBTKSXRKRWKMWCUDWDPOVGJIETDEOBXFRFXIMMPOVYZCDYNMWBXGHZRMKBJFJGFPRJHENQLTIODQLNKNSJSPHWQRFKUNFNKWLCYVHGTXHDALMABAUOILQRHDLLTWEAFEA");

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
    msg.setTimeStamp(0.2627446926788902);
    msg.setSource(65222U);
    msg.setSourceEntity(71U);
    msg.setDestination(577U);
    msg.setDestinationEntity(111U);
    msg.timeout = 27205U;
    msg.lat = 0.2345424251937921;
    msg.lon = 0.32240925894346606;
    msg.z = 0.9590463239730789;
    msg.z_units = 199U;
    msg.speed = 0.8764577227833604;
    msg.speed_units = 116U;
    msg.bearing = 0.38486237889930264;
    msg.cross_angle = 0.7896459332891252;
    msg.width = 0.7654888253453113;
    msg.length = 0.6352938824939756;
    msg.hstep = 0.7370041842636877;
    msg.coff = 72U;
    msg.alternation = 44U;
    msg.flags = 178U;
    msg.custom.assign("KBQZKGLBBXVQCGZZRETRDFIYINQDVTBHYMGWREXBJMKBCDUTOFMMJNNKKLRLAIFZHFTMIXJIXZC");

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
    msg.setTimeStamp(0.5271028729951361);
    msg.setSource(28793U);
    msg.setSourceEntity(147U);
    msg.setDestination(55763U);
    msg.setDestinationEntity(70U);
    msg.timeout = 64923U;
    msg.lat = 0.8433006793182259;
    msg.lon = 0.8694023546710928;
    msg.z = 0.813176660492816;
    msg.z_units = 87U;
    msg.speed = 0.424904694734731;
    msg.speed_units = 94U;
    msg.custom.assign("RDUOIYJIWGGAAPKXMZQVFCRYCMKIUKFKTBJPSYFVNZAGCDSTJMYKGQVSKZNHSPWEYOQNLXIDAZHUHOVQXPDHQDGEGWXLJDDNZTGOXEHLEQLFMQNMEXIICWIOSNWWVUSTBEMFDPBLGBTZEMYNGSNOC");

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
    msg.setTimeStamp(0.808095875184165);
    msg.setSource(26474U);
    msg.setSourceEntity(89U);
    msg.setDestination(42474U);
    msg.setDestinationEntity(235U);
    msg.timeout = 55181U;
    msg.lat = 0.0781358277257197;
    msg.lon = 0.7916374402967227;
    msg.z = 0.37161898519226344;
    msg.z_units = 175U;
    msg.speed = 0.7556095756056052;
    msg.speed_units = 144U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.43190031334230805;
    tmp_msg_0.y = 0.7521012177356157;
    tmp_msg_0.z = 0.13332498330463094;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OVIMCKEBEQPRXGFKWRDYNISQPYNXZYSHCQLBPRZGJHGKFZUSEGINLLQESBTNTAALOKPIOJULPSAMDAPGCDHPLKVCZNFCZBSAMYWNVEDAJCGOWVYRUIFPMXSVGYXNPSJUJNHUDJZDIIEGFTNUIBLYZAJHUKJZRUFDDEVLTOWMCZWBQAXJXMRMDZOYEFMHQUBVMRJNKYO");

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
    msg.setTimeStamp(0.18278167743992235);
    msg.setSource(22846U);
    msg.setSourceEntity(38U);
    msg.setDestination(41355U);
    msg.setDestinationEntity(46U);
    msg.timeout = 6283U;
    msg.lat = 0.33842263083159885;
    msg.lon = 0.867891708161889;
    msg.z = 0.5443111268393246;
    msg.z_units = 214U;
    msg.speed = 0.4515971890686148;
    msg.speed_units = 7U;
    msg.custom.assign("QVPAMAGHBKTWCBPLXQGEKPOZSLNGWURSAIQXMYXJZVZRTFBVNKPPASPEWOHUAZJSIRODXLIDURCIBVGZQRGCIMPQCEUNTOHHUHICIELAOLGDY");

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
    msg.setTimeStamp(0.13538711479588017);
    msg.setSource(44534U);
    msg.setSourceEntity(49U);
    msg.setDestination(17282U);
    msg.setDestinationEntity(79U);
    msg.x = 0.37483312008431235;
    msg.y = 0.47948951035092635;
    msg.z = 0.021481113160605303;

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
    msg.setTimeStamp(0.46919287246981367);
    msg.setSource(42219U);
    msg.setSourceEntity(15U);
    msg.setDestination(57476U);
    msg.setDestinationEntity(223U);
    msg.x = 0.36632090809053286;
    msg.y = 0.06571164685234976;
    msg.z = 0.3860925253219969;

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
    msg.setTimeStamp(0.5152032470323695);
    msg.setSource(26299U);
    msg.setSourceEntity(186U);
    msg.setDestination(4690U);
    msg.setDestinationEntity(118U);
    msg.x = 0.2927044385679146;
    msg.y = 0.7090717196057542;
    msg.z = 0.6197764237187593;

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
    msg.setTimeStamp(0.011760264006319465);
    msg.setSource(59193U);
    msg.setSourceEntity(153U);
    msg.setDestination(36969U);
    msg.setDestinationEntity(163U);
    msg.timeout = 13458U;
    msg.lat = 0.0057149417390712776;
    msg.lon = 0.1288543598650781;
    msg.z = 0.08272924037331275;
    msg.z_units = 163U;
    msg.amplitude = 0.3125392073668457;
    msg.pitch = 0.21570390055144428;
    msg.speed = 0.25937241510410514;
    msg.speed_units = 100U;
    msg.custom.assign("SHCSOJGKYGXYNPBKEASVAPYNQNOPWZWUHKDNKPMLMFMTVWAVGIFHJXIZFCVGSEJRJFOOXELXQDMDYOXHTR");

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
    msg.setTimeStamp(0.6340501989169999);
    msg.setSource(41042U);
    msg.setSourceEntity(200U);
    msg.setDestination(49716U);
    msg.setDestinationEntity(197U);
    msg.timeout = 3133U;
    msg.lat = 0.3866230305748932;
    msg.lon = 0.5308910768331478;
    msg.z = 0.01997522563172871;
    msg.z_units = 252U;
    msg.amplitude = 0.2485057719709718;
    msg.pitch = 0.7458538455351532;
    msg.speed = 0.7412094948443215;
    msg.speed_units = 200U;
    msg.custom.assign("CMVSGHWZCYTVEMDWRIPBQDAOCRWKCSQAJNJUSNCSIKLZTUTVPOYETFHTMPIJRNFALYYGXDBPLKDDHGHPAPJBBSOPWXRXZDSWMFHRKDQGLGNPLAIYSEBOAQ");

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
    msg.setTimeStamp(0.166010712978772);
    msg.setSource(62986U);
    msg.setSourceEntity(129U);
    msg.setDestination(31412U);
    msg.setDestinationEntity(181U);
    msg.timeout = 30358U;
    msg.lat = 0.6579101081262375;
    msg.lon = 0.3844173120956381;
    msg.z = 0.5083632377787741;
    msg.z_units = 59U;
    msg.amplitude = 0.7562181717119563;
    msg.pitch = 0.9163239720118694;
    msg.speed = 0.7933115766934545;
    msg.speed_units = 223U;
    msg.custom.assign("HZJQMMYLOMPXHTXXICCAZEPSPPLUHFDXZ");

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
    msg.setTimeStamp(0.8155368877829218);
    msg.setSource(11648U);
    msg.setSourceEntity(94U);
    msg.setDestination(31050U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.8448938833226506);
    msg.setSource(35967U);
    msg.setSourceEntity(94U);
    msg.setDestination(4281U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.6557964590709697);
    msg.setSource(31125U);
    msg.setSourceEntity(137U);
    msg.setDestination(32168U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.7316683168096851);
    msg.setSource(54131U);
    msg.setSourceEntity(1U);
    msg.setDestination(17507U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.4047899077221403;
    msg.lon = 0.667950812081694;
    msg.z = 0.0466460005135656;
    msg.z_units = 199U;
    msg.radius = 0.6105631380341743;
    msg.duration = 7628U;
    msg.speed = 0.03028484675403187;
    msg.speed_units = 6U;
    msg.custom.assign("ICDHARWOTUSYHMNUZWTBJJVNPKFGHVRCUYGHJLCTLVNMSIPDBILXECDOEQESTXTNVRJVXAFVAXNOZGSMTOUTLKKQMDALFWCBUKPJWPKYDYYDQPUZFRBBTALYOJRGBQARNSSJXPBKUQHPBLFWERRBIAZMXKLUFMSGMESNWXYLIMJGXQDDAZDGGXIGSTJHOUC");

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
    msg.setTimeStamp(0.16785149988507586);
    msg.setSource(27426U);
    msg.setSourceEntity(7U);
    msg.setDestination(50113U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.7202882481360249;
    msg.lon = 0.8881214716234127;
    msg.z = 0.15233233919378875;
    msg.z_units = 205U;
    msg.radius = 0.30815556030155045;
    msg.duration = 62298U;
    msg.speed = 0.5844477381575703;
    msg.speed_units = 242U;
    msg.custom.assign("YTGHTODQCZLOUMAQNATLRTVFCEATWEHEKERDNHWKUNKJAWKFCZMPJVKTBIQLUGWJSSJABFMYEYBTZYLFNRDDVJPK");

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
    msg.setTimeStamp(0.05550832710129672);
    msg.setSource(24967U);
    msg.setSourceEntity(120U);
    msg.setDestination(2099U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.09510094204844488;
    msg.lon = 0.7236454656195385;
    msg.z = 0.01837360968567725;
    msg.z_units = 130U;
    msg.radius = 0.8885581041806538;
    msg.duration = 856U;
    msg.speed = 0.25661602330567446;
    msg.speed_units = 212U;
    msg.custom.assign("CANCRLNXYRCWBLMLGEJVUCWLYSYSRRJYICMFHBQMKBDIPHVITVNBJDZRVLZNXDAPZINYYSUFUFVKPSDCSFINJJEMZPAXDTJUHNLYXFIEDVRRQNIPILADKTUDKWIBWIOOXAZFKOQOGAORMSJEGSWMFKQCUEBNHWTFOTDDOQSVGPGTWHZJVBFMPX");

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
    msg.setTimeStamp(0.6155982489214337);
    msg.setSource(42885U);
    msg.setSourceEntity(241U);
    msg.setDestination(35698U);
    msg.setDestinationEntity(110U);
    msg.timeout = 34208U;
    msg.flags = 19U;
    msg.lat = 0.7307567735288407;
    msg.lon = 0.0383987658665389;
    msg.start_z = 0.40298921554482114;
    msg.start_z_units = 60U;
    msg.end_z = 0.3511861744157503;
    msg.end_z_units = 185U;
    msg.radius = 0.8443033444579127;
    msg.speed = 0.05731846681307162;
    msg.speed_units = 181U;
    msg.custom.assign("HPSLYUDKFERJZBSAMTGFBOGKBOJTNMFOTUAEDMHFMUJXTKECJPGEGWJMLANCDENBPPRLPCOEZ");

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
    msg.setTimeStamp(0.4747425773336088);
    msg.setSource(33894U);
    msg.setSourceEntity(12U);
    msg.setDestination(27939U);
    msg.setDestinationEntity(186U);
    msg.timeout = 47311U;
    msg.flags = 96U;
    msg.lat = 0.9255320569601488;
    msg.lon = 0.8228386994661672;
    msg.start_z = 0.18598570769252432;
    msg.start_z_units = 4U;
    msg.end_z = 0.8797730703054665;
    msg.end_z_units = 86U;
    msg.radius = 0.45184823790510154;
    msg.speed = 0.3705779879648756;
    msg.speed_units = 202U;
    msg.custom.assign("VSLUGVMNGNHLZAREUND");

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
    msg.setTimeStamp(0.024938195985165);
    msg.setSource(39584U);
    msg.setSourceEntity(129U);
    msg.setDestination(12458U);
    msg.setDestinationEntity(244U);
    msg.timeout = 9476U;
    msg.flags = 84U;
    msg.lat = 0.9483670307722402;
    msg.lon = 0.8766303353521752;
    msg.start_z = 0.26317680845737657;
    msg.start_z_units = 114U;
    msg.end_z = 0.9809231883119008;
    msg.end_z_units = 88U;
    msg.radius = 0.03717622652584718;
    msg.speed = 0.1479602712337159;
    msg.speed_units = 40U;
    msg.custom.assign("SAJGKVBZPYUFQKGQOIZRXUVJNZMRVNHHWEASQWXMGEDAJYLJLEEB");

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
    msg.setTimeStamp(0.6030670335065764);
    msg.setSource(56190U);
    msg.setSourceEntity(108U);
    msg.setDestination(62420U);
    msg.setDestinationEntity(16U);
    msg.timeout = 6192U;
    msg.lat = 0.8844546592787269;
    msg.lon = 0.03644752451184219;
    msg.z = 0.7580310427354672;
    msg.z_units = 190U;
    msg.speed = 0.20621423657221427;
    msg.speed_units = 131U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8170644699590791;
    tmp_msg_0.y = 0.9228495824563587;
    tmp_msg_0.z = 0.3543818344342875;
    tmp_msg_0.t = 0.07731112458406186;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RQZBDSMZHZAJXLWEZGEBGYXAOIJDCOYNPZQPYTVZKXIFKUXVPLXOCPEEKKVBZIVKPSIYSEWYTAGBZBJPUUPDSHTUXQDYEONYSLMO");

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
    msg.setTimeStamp(0.920909778043448);
    msg.setSource(5811U);
    msg.setSourceEntity(153U);
    msg.setDestination(58334U);
    msg.setDestinationEntity(60U);
    msg.timeout = 54589U;
    msg.lat = 0.6443591103030905;
    msg.lon = 0.010199020125570946;
    msg.z = 0.6314093014785114;
    msg.z_units = 156U;
    msg.speed = 0.357086923758858;
    msg.speed_units = 61U;
    msg.custom.assign("NOAXEFDPAHPYMZBUTJRGZQSSRJTVKETTZXXMYSWOLIIJIBADNBFDUMYOROSEBMWSJWAGJLHOYMTRHCDZCGSXPQGOGJTKACQCQCDE");

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
    msg.setTimeStamp(0.862028576049);
    msg.setSource(22377U);
    msg.setSourceEntity(176U);
    msg.setDestination(65295U);
    msg.setDestinationEntity(143U);
    msg.timeout = 31326U;
    msg.lat = 0.71656807498708;
    msg.lon = 0.6780984231477869;
    msg.z = 0.41879003606596243;
    msg.z_units = 215U;
    msg.speed = 0.2731763116401196;
    msg.speed_units = 161U;
    msg.custom.assign("VUVTPCGRSKVVUAJDFDOLBOIZRZENNIRBWTIBCMFFLTLBJUEAUXDVALQDXCESIUYBYMKPYKRYLAMJPHRLXFBGIPQHTORZNZWCBTAQRTVVKNGAICVHQXLHBOPFIOJPPJSQQTIYHMNCDJPPCSAAXCMXWFIJMMUONEXSRULHKMZKZOXZNSWUHEXKYCJQUWGWUHJWG");

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
    msg.setTimeStamp(0.2704740656065092);
    msg.setSource(3175U);
    msg.setSourceEntity(85U);
    msg.setDestination(51419U);
    msg.setDestinationEntity(119U);
    msg.x = 0.7911238972899736;
    msg.y = 0.8270302083198224;
    msg.z = 0.8458932518438949;
    msg.t = 0.07833053161714532;

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
    msg.setTimeStamp(0.3579622470319609);
    msg.setSource(18594U);
    msg.setSourceEntity(218U);
    msg.setDestination(40998U);
    msg.setDestinationEntity(26U);
    msg.x = 0.603690511449986;
    msg.y = 0.8970457291725984;
    msg.z = 0.35438845961642806;
    msg.t = 0.8647369851016865;

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
    msg.setTimeStamp(0.06976954437845728);
    msg.setSource(7776U);
    msg.setSourceEntity(186U);
    msg.setDestination(25323U);
    msg.setDestinationEntity(215U);
    msg.x = 0.144933418252431;
    msg.y = 0.4013622093291158;
    msg.z = 0.049703293359219525;
    msg.t = 0.41127215030036623;

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
    msg.setTimeStamp(0.5973524883156267);
    msg.setSource(49754U);
    msg.setSourceEntity(63U);
    msg.setDestination(48974U);
    msg.setDestinationEntity(101U);
    msg.timeout = 52177U;
    msg.name.assign("AMRXIQIPCTFXMTSQLTLCCUOBBMADEUHMFRLWFJHJCO");
    msg.custom.assign("EAASURCQNNOWWDQN");

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
    msg.setTimeStamp(0.9432786594358337);
    msg.setSource(36815U);
    msg.setSourceEntity(228U);
    msg.setDestination(12025U);
    msg.setDestinationEntity(86U);
    msg.timeout = 43018U;
    msg.name.assign("SZUPVLNGJRNZOIAKZCDGUTEFYXMKGBTYYNFCMIFCQPYBZPNITZDJCUTAXTUUSYDPYAXEJXRVPCHBSLNTYBUZKCLRLFJJAOHLWOKOEFDFNURSFFTFPVWQBDHXNRMJVABBMBEWWMXOSEEEKRCGNZFJWPWMYDVWGRDODQSQKCPALQVVAISIGWRBREBUOHUP");
    msg.custom.assign("VRCREJVOXEDKNCADIZRTXF");

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
    msg.setTimeStamp(0.9348540114423778);
    msg.setSource(11228U);
    msg.setSourceEntity(250U);
    msg.setDestination(37568U);
    msg.setDestinationEntity(102U);
    msg.timeout = 29087U;
    msg.name.assign("DUBDRCZCHMAWBEDJAHJYSWXP");
    msg.custom.assign("LHBKHYMVTPSB");

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
    msg.setTimeStamp(0.13699118595655424);
    msg.setSource(2884U);
    msg.setSourceEntity(132U);
    msg.setDestination(20680U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.38638949372738185;
    msg.lon = 0.9762990904932518;
    msg.z = 0.17381276642897547;
    msg.z_units = 163U;
    msg.speed = 0.9378923577073442;
    msg.speed_units = 69U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7659227444093595;
    tmp_msg_0.y = 0.9878933915210022;
    tmp_msg_0.z = 0.47562347966489227;
    tmp_msg_0.t = 0.7300167185570449;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.012668315343456027;
    msg.custom.assign("MXEMDVHDOSFKXUIRJCFQEPPFEQLAHTBLJIGNZPWRTDMXWZFZTEBIQYLPQWHNCOGYZZUWDRPGSQGGFHBBXSTCAETNNIOHIPMDYDKMKJVZXOFYVLKFQWPWKRNTPX");

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
    msg.setTimeStamp(0.19485896400017655);
    msg.setSource(63713U);
    msg.setSourceEntity(146U);
    msg.setDestination(30924U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.3859741339794719;
    msg.lon = 0.7684563678348736;
    msg.z = 0.17207426676013649;
    msg.z_units = 195U;
    msg.speed = 0.9924662118325305;
    msg.speed_units = 63U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.39845663494505856;
    tmp_msg_0.y = 0.74082693814596;
    tmp_msg_0.z = 0.7167258702466062;
    tmp_msg_0.t = 0.5032490622924513;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0041542020408160685;
    msg.custom.assign("MLAJIEASSNKSRBSXZBJPBHYSBCWTHMDFSMNXGHTKEAOAUCROMJFNIQBVKOFKBRIUPQKGMFCIGAYZYDOPZGYVMQUGLYIZFFLIBHFDUQLDRJKAKXCELVVVOTVFQ");

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
    msg.setTimeStamp(0.23225754849192592);
    msg.setSource(28312U);
    msg.setSourceEntity(135U);
    msg.setDestination(8549U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.42874224855935217;
    msg.lon = 0.8877064482086067;
    msg.z = 0.8833792228751581;
    msg.z_units = 254U;
    msg.speed = 0.8022723954751599;
    msg.speed_units = 180U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39382U;
    tmp_msg_0.off_x = 0.815668010744667;
    tmp_msg_0.off_y = 0.20704419506530025;
    tmp_msg_0.off_z = 0.44650432249734084;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5473856662492825;
    msg.custom.assign("CPOHIPUBCYQXLSJMAGUUXYCWFOEYOQHXUFVLSUSWANLDBAIJAFZOVMEMLXONGWNKEVYGSZDUHQJPDHJBYMPCIWFVIRPXILTONGKCKGQUEVVKRWENQGJPULDSDPFZFHVCZODTITNHZYAYLS");

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
    msg.setTimeStamp(0.819056160200558);
    msg.setSource(30148U);
    msg.setSourceEntity(103U);
    msg.setDestination(29838U);
    msg.setDestinationEntity(171U);
    msg.vid = 7289U;
    msg.off_x = 0.49356180358171686;
    msg.off_y = 0.7789947806577184;
    msg.off_z = 0.43053257880162765;

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
    msg.setTimeStamp(0.703687830320853);
    msg.setSource(40998U);
    msg.setSourceEntity(34U);
    msg.setDestination(43120U);
    msg.setDestinationEntity(217U);
    msg.vid = 15404U;
    msg.off_x = 0.1838275277556578;
    msg.off_y = 0.5285141450609214;
    msg.off_z = 0.5524231295890415;

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
    msg.setTimeStamp(0.7659651542755641);
    msg.setSource(29887U);
    msg.setSourceEntity(189U);
    msg.setDestination(25006U);
    msg.setDestinationEntity(57U);
    msg.vid = 58782U;
    msg.off_x = 0.569930830584974;
    msg.off_y = 0.5503396450555677;
    msg.off_z = 0.7978637648664125;

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
    msg.setTimeStamp(0.8813777631934151);
    msg.setSource(31564U);
    msg.setSourceEntity(53U);
    msg.setDestination(48326U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.3441513014221401);
    msg.setSource(3515U);
    msg.setSourceEntity(0U);
    msg.setDestination(22307U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.7965072936406123);
    msg.setSource(8495U);
    msg.setSourceEntity(159U);
    msg.setDestination(55823U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.09884451867538535);
    msg.setSource(11066U);
    msg.setSourceEntity(210U);
    msg.setDestination(7473U);
    msg.setDestinationEntity(5U);
    msg.mid = 2788U;

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
    msg.setTimeStamp(0.567167852300756);
    msg.setSource(144U);
    msg.setSourceEntity(24U);
    msg.setDestination(19050U);
    msg.setDestinationEntity(119U);
    msg.mid = 20133U;

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
    msg.setTimeStamp(0.15629564007668817);
    msg.setSource(54571U);
    msg.setSourceEntity(83U);
    msg.setDestination(44189U);
    msg.setDestinationEntity(244U);
    msg.mid = 5323U;

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
    msg.setTimeStamp(0.4426720331943036);
    msg.setSource(28281U);
    msg.setSourceEntity(201U);
    msg.setDestination(53436U);
    msg.setDestinationEntity(89U);
    msg.state = 28U;
    msg.eta = 34754U;
    msg.info.assign("VOEURPUJSWTHCODTOVQRLNYAGMAOBGILWFEUQGUWLHFLBECZCJQBYNIHBLKVTEFXMMRKGWKEADXJIJPJQWFSUFGJNBSUPUXBMYSODN");

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
    msg.setTimeStamp(0.5454452084387594);
    msg.setSource(48970U);
    msg.setSourceEntity(102U);
    msg.setDestination(21343U);
    msg.setDestinationEntity(212U);
    msg.state = 129U;
    msg.eta = 40104U;
    msg.info.assign("IXVJXDCBMMKDWFKOYIHRANLATMKTATGKWZQIUSSWUZDENGLUZAQBSHXJBWFRHISQYLPZEQFGKBRKXSONHYHHDGPRJYGXLXYCWPJCIHLXPWZNVPGULHDENAAQYFKZWVPOFJFWUCNNQQRSUMQUNONKIJIDVBEBZFHTJAHZWOOVLXCTMBLIUVBRAITGRSFTLYYZDRCJMCPYGMJEPEYOVDMQESLSXTUNBVCJVEOORIGABZMMEECAFFDCSTKGTXPKVQ");

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
    msg.setTimeStamp(0.9250755102146603);
    msg.setSource(56308U);
    msg.setSourceEntity(134U);
    msg.setDestination(54392U);
    msg.setDestinationEntity(235U);
    msg.state = 100U;
    msg.eta = 21732U;
    msg.info.assign("GPHFUVJDUKESFKBTCCBPQOWLBJEVQZPWNBPZVWDFOHGJYWRKYILTNXTXPMCIIONIMFAOXGEROAYMAIYLJYEBUCVWXPLYVQNYUZADJLAGEEZYNDMNRWJJKMUKCNLGCIBNTMRRDHQDZJRCQZASVSNMFKSYIQZQLSCUFEADHOSBVLFXMTEMKHPILOFDEBXXOWWCAAKSVERQNVG");

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
    msg.setTimeStamp(0.10065379382726991);
    msg.setSource(37537U);
    msg.setSourceEntity(138U);
    msg.setDestination(31501U);
    msg.setDestinationEntity(237U);
    msg.system = 14998U;
    msg.duration = 24411U;
    msg.speed = 0.6502414997183784;
    msg.speed_units = 244U;
    msg.x = 0.6076626640369107;
    msg.y = 0.4691591799904937;
    msg.z = 0.7320356809180354;
    msg.z_units = 135U;

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
    msg.setTimeStamp(0.8483071287153968);
    msg.setSource(49600U);
    msg.setSourceEntity(120U);
    msg.setDestination(12368U);
    msg.setDestinationEntity(67U);
    msg.system = 62238U;
    msg.duration = 34895U;
    msg.speed = 0.09354724818805771;
    msg.speed_units = 189U;
    msg.x = 0.6856378558729491;
    msg.y = 0.6906402422949428;
    msg.z = 0.2622029070054631;
    msg.z_units = 86U;

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
    msg.setTimeStamp(0.1465566727759119);
    msg.setSource(36202U);
    msg.setSourceEntity(76U);
    msg.setDestination(32389U);
    msg.setDestinationEntity(88U);
    msg.system = 8997U;
    msg.duration = 27930U;
    msg.speed = 0.8765996723532048;
    msg.speed_units = 141U;
    msg.x = 0.3412382054419516;
    msg.y = 0.017218858118425162;
    msg.z = 0.5213155569321511;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.01740710458965311);
    msg.setSource(37635U);
    msg.setSourceEntity(174U);
    msg.setDestination(11083U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.7290068662355388;
    msg.lon = 0.4902549442670363;
    msg.speed = 0.8127674391183117;
    msg.speed_units = 176U;
    msg.duration = 23729U;
    msg.sys_a = 10546U;
    msg.sys_b = 26461U;
    msg.move_threshold = 0.39035441645226243;

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
    msg.setTimeStamp(0.7845484416141394);
    msg.setSource(392U);
    msg.setSourceEntity(162U);
    msg.setDestination(36885U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.2446829447987764;
    msg.lon = 0.8649756800500414;
    msg.speed = 0.8311214746645764;
    msg.speed_units = 76U;
    msg.duration = 8938U;
    msg.sys_a = 62506U;
    msg.sys_b = 47042U;
    msg.move_threshold = 0.6898099228657576;

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
    msg.setTimeStamp(0.5089075379191383);
    msg.setSource(10509U);
    msg.setSourceEntity(218U);
    msg.setDestination(21156U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.8214337185386463;
    msg.lon = 0.2114530329201587;
    msg.speed = 0.8645146460270224;
    msg.speed_units = 198U;
    msg.duration = 30737U;
    msg.sys_a = 37257U;
    msg.sys_b = 213U;
    msg.move_threshold = 0.2556557073625604;

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
    msg.setTimeStamp(0.44301208371489276);
    msg.setSource(9514U);
    msg.setSourceEntity(123U);
    msg.setDestination(13219U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.5734363828428386;
    msg.lon = 0.5555192673219541;
    msg.z = 0.8870319859991996;
    msg.z_units = 130U;
    msg.speed = 0.4435263818271009;
    msg.speed_units = 233U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.08168406361864544;
    tmp_msg_0.lon = 0.4520859608674037;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UPRPVIZJISLOLNEWBQBBNTYUVSIKHGAJXOYEACNZABEGGKMYQRDMWCDSAPJPYQVLCUAXMXMNQPGTVNYEDCCNHATDTFOOXREJGKWCCOFLVZQNIYKYQLOZIPDQWFCXSZTVQQNFQLWIBKFKXGM");

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
    msg.setTimeStamp(0.4462443531879402);
    msg.setSource(23232U);
    msg.setSourceEntity(173U);
    msg.setDestination(55456U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.5433154393998529;
    msg.lon = 0.8112100033645245;
    msg.z = 0.2116061070604658;
    msg.z_units = 159U;
    msg.speed = 0.1368411626635534;
    msg.speed_units = 236U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8729570731257942;
    tmp_msg_0.lon = 0.8448849092347845;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HZYKAQXXZCFAFJMEYGIDMHPDLCJZSMDTKORUTXDOYILDWOIAYKCTBCYHYXGPEHWJTFEAUZQNBDCGLPXGVUHKLZPYFMBCOJENJJKUNJEMGBFKKQCBMBIWNORZLGRFVGKHZHEBBJNURYDHSRLKOAQXRXOPADUZWGOVNMQFWA");

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
    msg.setTimeStamp(0.36146364808628517);
    msg.setSource(38310U);
    msg.setSourceEntity(250U);
    msg.setDestination(56258U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.6498715421450381;
    msg.lon = 0.11561038388575517;
    msg.z = 0.503193812189149;
    msg.z_units = 180U;
    msg.speed = 0.6708297399020555;
    msg.speed_units = 109U;
    msg.custom.assign("PXIEOHNYKLNPOEOJSAAZFJMGJFMXQWXEIXWWTAELGBWIHKUCXJYUXHXRXZVPRGYCUSUGEDCBUHHZBHCLEMZLISPURZTLJTUQKLTBGFWDOSLNGKBEHUJKHLWACDVQN");

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
    msg.setTimeStamp(0.19051838976063917);
    msg.setSource(56471U);
    msg.setSourceEntity(159U);
    msg.setDestination(43854U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.7529350729154262;
    msg.lon = 0.3430824834407715;

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
    msg.setTimeStamp(0.29647436591966914);
    msg.setSource(16769U);
    msg.setSourceEntity(209U);
    msg.setDestination(5972U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.6395411077293666;
    msg.lon = 0.462845298308025;

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
    msg.setTimeStamp(0.26124633302994327);
    msg.setSource(7815U);
    msg.setSourceEntity(113U);
    msg.setDestination(38165U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.6799648026047338;
    msg.lon = 0.23053371013500512;

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
    msg.setTimeStamp(0.44959709443853446);
    msg.setSource(40336U);
    msg.setSourceEntity(222U);
    msg.setDestination(17840U);
    msg.setDestinationEntity(115U);
    msg.timeout = 10722U;
    msg.lat = 0.14659826371538098;
    msg.lon = 0.41424243084691603;
    msg.z = 0.3612203990851509;
    msg.z_units = 48U;
    msg.pitch = 0.17822171400000697;
    msg.amplitude = 0.21423747405174276;
    msg.duration = 46705U;
    msg.speed = 0.16765400723036927;
    msg.speed_units = 6U;
    msg.radius = 0.7102142355148985;
    msg.direction = 45U;
    msg.custom.assign("YTNQPJUPIFRHEOFAOAONLEIBNKPHECXIVFASJXBCMUHYGNHLRCTGKXKCVZFZDAYXLKEVFMRKWJUDWAQFGWXSKPIDDNUJOBVX");

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
    msg.setTimeStamp(0.48730620062325236);
    msg.setSource(44942U);
    msg.setSourceEntity(205U);
    msg.setDestination(25812U);
    msg.setDestinationEntity(11U);
    msg.timeout = 28608U;
    msg.lat = 0.44979838349711476;
    msg.lon = 0.6291093487130829;
    msg.z = 0.12852084196487223;
    msg.z_units = 207U;
    msg.pitch = 0.349772600513347;
    msg.amplitude = 0.5213345513405242;
    msg.duration = 29475U;
    msg.speed = 0.05367118706282348;
    msg.speed_units = 209U;
    msg.radius = 0.5873910904734437;
    msg.direction = 183U;
    msg.custom.assign("RWEOSSWRVUEJYRISFOJIKGCUHRNBAJXADMUHKRNICFVJALYDNXLQEOQRYHEUHJYWODWULCIMDKZJZNXFYLGZVENQGGO");

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
    msg.setTimeStamp(0.33283865228685283);
    msg.setSource(31965U);
    msg.setSourceEntity(232U);
    msg.setDestination(26076U);
    msg.setDestinationEntity(155U);
    msg.timeout = 43408U;
    msg.lat = 0.10640204251966168;
    msg.lon = 0.8216892086860896;
    msg.z = 0.4142863090288825;
    msg.z_units = 109U;
    msg.pitch = 0.5723710037621563;
    msg.amplitude = 0.7838319616602769;
    msg.duration = 788U;
    msg.speed = 0.7214899434887313;
    msg.speed_units = 244U;
    msg.radius = 0.355213820563113;
    msg.direction = 40U;
    msg.custom.assign("RMBPXHVNBAEQXJRKZRUQSMJIXFVBZOIHEFJZZXIGNDASNZQBCTFHQWFVEMPDFVWTPURAGLKCWEZLSOESCYKRQHVDNVLCWYLYWGVHKBBXPIIIDLRGDLLUZNTIUYPGIYJMYCMBEZXTSA");

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
    msg.setTimeStamp(0.2209486858986407);
    msg.setSource(53328U);
    msg.setSourceEntity(42U);
    msg.setDestination(36949U);
    msg.setDestinationEntity(36U);
    msg.formation_name.assign("HGEGWYQXHLTJERJOBWUFVGILKYSPRFUQNBDFJQCPMBXXKPZMXHMQSKRAZREIULZWZMSNAGYCHVNITCFPXWIMTCPSIGOEBDSDDYMBNZPQJOVBWXDAHWIXUCHXJBKKEVTESTZYXJTMYMKTQRUVHRIJYNIVGVDUGAVFTDLEUAVGNZNREZXIKZPZMAWSATIONOLEBJQHECYGYJUTDCDQHAPAQGLURPRWWOSLUF");
    msg.reference_frame = 30U;
    msg.custom.assign("UUAFEYIWQPFNEVAGBCXLXZPLBAXSBEIDOKGGNPYXIEMCZYCSTULZJMOGOEOUPPRFCAMSZHYFIMKWYGRNVRQXPTQWLUWSBZETRWKVWAUQFBPKYVLSDJKOGLYZHMJDPQRFVEMNLMKCLHFHRTWVDDZJMBUWTRXBNCSQDXFICJHANMDIEFYRBSQAEZRJUJYHIBQHJZEHCVHLIGTWCPDHZNTWISXVKSCDUVMOYPOTFGJDSXVOGKNKOXK");

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
    msg.setTimeStamp(0.5466519629134445);
    msg.setSource(12464U);
    msg.setSourceEntity(233U);
    msg.setDestination(1196U);
    msg.setDestinationEntity(67U);
    msg.formation_name.assign("PHTIQZIGCINFIJESJWIUVMCTUPUZYHWVDAGFKZCUMRXADCOFHJXBVNTYJGLQLXNFZXFZGBVISOOSHVBMNJAELDCVQPPDBNMBBHIYMCNOENZE");
    msg.reference_frame = 100U;
    msg.custom.assign("PDZEQTYDDCDXVNYRBBZFNWWMWOBPOTKUDOPMIVMACELEFKZAEPJEYVOSQJTLYLOSVLHMFNGUSZCSNHSKUBWCGDRQVOFHIWCPGIGSKFXXGSSQRSZKBAMDPPAWTNRZVQ");

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
    msg.setTimeStamp(0.9934671887460645);
    msg.setSource(63534U);
    msg.setSourceEntity(11U);
    msg.setDestination(50411U);
    msg.setDestinationEntity(34U);
    msg.formation_name.assign("XABJQAEXAILMTIESSJPFJVCQEOIGZGGRYOJVEQXXGZCUJKVAUHLFBWIVNDCZDXNZOTERPBZSETHNNCPNMCNWJMYHQDNHMATNITSWRPMUMTKLBAICYQRDQHMKWKXOFGTUHNLBVAIDBPCUSQUIRPKSZRLYDLKXPMWYXEQHJOWMCOGVLYDUWWTFXEYLAVSGGSUIPZMQDHATDSRYGFYO");
    msg.reference_frame = 21U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11022U;
    tmp_msg_0.off_x = 0.6531410046897743;
    tmp_msg_0.off_y = 0.14883550300932802;
    tmp_msg_0.off_z = 0.45325783891923876;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JLOGNLPCPOVVRZBHU");

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
    msg.setTimeStamp(0.5966448242739477);
    msg.setSource(3774U);
    msg.setSourceEntity(214U);
    msg.setDestination(32048U);
    msg.setDestinationEntity(2U);
    msg.group_name.assign("ORMPVSRRPCLIHEKJUIPQSHJJTCNWKQAFKVCFOHGGZFNEMBJVEUTIKDDJFPQUQKUYUXWHQSSXUMGGKFZZYEPLVVMPKXTZXMWLADQOBEWIVANIATFULEHVDAWERGJPYNYHRZNGOSFZBTBAFKCHGFWZPRPSJFAMXOJDOBYTTUDCHWBWNGOTRBVDDAVCX");
    msg.formation_name.assign("SYAPBMNWQDHGULJS");
    msg.plan_id.assign("NQRWDTYXOMGZBXOYLJTKUEDYPKOZPTIXIZUVRWNQALVVDTDRJKHOVESEGISLXVWBTJFRUSZSFFDAH");
    msg.description.assign("UZEVFSGPOAMUZCROKQRSPNNCULFNHCWUIAIOTBBBKSDFJITBLQZMSVVJKHCJFBHZAALIRJORAWXQCVSBDZLOAIPJKMUOLUKDCJJPTCVYVFHGWDHPYEQIXYIGWXKEDMCFGUSWNDEFBXMGIRRLMXEQPMNGPVTKYRBRNYXJCPFDNQFTDVGRSQIRBFPYTTJNECZOWOZQALMHYEAZNVEKOBTSYAGZJPSSXXWYTDOMHGHLQ");
    msg.leader_speed = 0.8468472145903251;
    msg.leader_bank_lim = 0.46360623832379066;
    msg.pos_sim_err_lim = 0.3937984429185539;
    msg.pos_sim_err_wrn = 0.941915042971813;
    msg.pos_sim_err_timeout = 45303U;
    msg.converg_max = 0.3065785334180591;
    msg.converg_timeout = 64200U;
    msg.comms_timeout = 13837U;
    msg.turb_lim = 0.15750905303002705;
    msg.custom.assign("NFSICZEFHPPPKOSFBEBRONIYGZSSUUDIFXGBBSUWZMCPIXYYGZBHKDVHNJMOATBMPMVYEEBLFTQHLRWZKSXXVNMJYGWKYLLDNSAUWBNLGQUTVRKNZHTPPLHNLVGOYGKGKDUNLXADKCEUZQITRSICDCWBWJDHWQYXCCFRAALJRGYJOEOQXXPBFVMCVEEOSAQFFDRJRWQXITVKJKOXAETWUJMYAPHEHJTQCMOLDOQVASVPM");

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
    msg.setTimeStamp(0.2957358182383435);
    msg.setSource(6851U);
    msg.setSourceEntity(91U);
    msg.setDestination(14364U);
    msg.setDestinationEntity(49U);
    msg.group_name.assign("WIYPHMKSVTWPHYFLQHDCDTFFQOAFRJDGNEXVKOXQKCEBUUPBIOTMDPVHSTJDRNIXYOEIVNLYVFGPIIEUXUFKCCWVHFGMNSBIQGSDSZXTTEEVRRYLBAKCSUJLBAYMATPPYNOTLUJWZIQVWXJRKAOSSQRLTZAKWXEZGLMOJHGLACBOKBZLBGSWCENFMGXXRHMFQJRXPDANRCZNAYZAYGLQINWBHDOZ");
    msg.formation_name.assign("UYFSAWDVVYVGBSZKXNUNSMELDGNJHKUXNMCQRVWZCQIQULDPFOJYFXIJFLOTKWTHHVXHNXWSWHTQSTXTGXXOSFCPTOZOMIRVJWLDFKPABNQKWAABLMFEBBJOKJMRCDSCYREJZIRTUVPQQBQRGIEUDCAMARJAVLPWNMLGYQUZIYSGDAEFCFZESCAGBMHZNKPOWCRGTPPUUIVUYYISHTMWCBDNGLAXRYZOLFVKKKE");
    msg.plan_id.assign("GKHATCZRIHIXVNKNUADKLATFZNEFQXMDIMPKRFMLYVBTLSQYJWZGRHNKOBUEBGUM");
    msg.description.assign("FELHMHHKSCKVECTCYSYFBOADXNWDXOLAIRGMVAXYXVZMSDBNCJYJVKSHFIAVHWCJOTRATQBRRBVKMCJWDZRMHSSXMKZZDLZBJNRMZJGPOBLZOPTPZQQAGNXNASLYRIVDFUKIPTGEQTTGTVIMYBUYFPUIUZDIQHTLGLESPUXUHLKFOOHIYXPLEDYQNOXXDFRAWHKWBPSOQEEUZUPWCNIGUVJIYLFOUEEWBAFVGKJGMNRERACSJQPKQNW");
    msg.leader_speed = 0.9352930007145318;
    msg.leader_bank_lim = 0.0001920758805686873;
    msg.pos_sim_err_lim = 0.6792758963097195;
    msg.pos_sim_err_wrn = 0.8177122876900368;
    msg.pos_sim_err_timeout = 25288U;
    msg.converg_max = 0.8036988184399698;
    msg.converg_timeout = 19144U;
    msg.comms_timeout = 18948U;
    msg.turb_lim = 0.5560125805024908;
    msg.custom.assign("IFGCPAORTTAXYYGVXNUROGQXSKQQGKFXVSUXLDQXEVWKBGTTHHVIGVZXOBNALQMIUNMULEUXCCBBWKMMZTRYZDZMLINPOGPSLDAVKDVGKWHKSPZEQTJTPPMTWHSZNSWJEJNRYNJVQBGFDMYZRSWCBDCXQPWZUFAQFUOYCKBUJKJJSIZVAAHOSMLH");

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
    msg.setTimeStamp(0.3779471606405218);
    msg.setSource(8066U);
    msg.setSourceEntity(230U);
    msg.setDestination(11326U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("VDWUVLJNPSZBDGIGCBJHQAQYXVWTKZOVEFEFVUSDEOIIKITLKYHSCKABNDFJYYWEFQCHYZWTMNGMCPZRWYMVBAVXLLBWWMZOOMXRTACTDBFGUPDEOUHUILORTCTNXPHSXBWJGNYLAXSYPMEYNVAJFJRXLSUQNZAQOPTOIGGRQSKWNDEKFGJBQUDRZNDZCISPXGXSOKTARFBCURHHTNWQKMKJAFCZ");
    msg.formation_name.assign("FBWALFHLXVBZICQMNSMERPGVQLJZWEJRVYBDWHFAXDEIUORDTLPALNERUVWCGQNRSYPBGCNUTTCSDIVAKYXFMWJDVXTQSFBGSEDKCGZQUDCHZSKKE");
    msg.plan_id.assign("FCEXHCDWFPKVIEUKAGYQMR");
    msg.description.assign("GIXTQTMRPACRUVFQRVWKYSMYFJLNYRNMDYGPEWAMTIFXZDVOWIHSBGFZZGCJLSECOYUHBSHUGNCMECDAUBROXUJIXPWCBVGKWMJHKMYIAKBFLQY");
    msg.leader_speed = 0.42126536479759424;
    msg.leader_bank_lim = 0.6082994045894592;
    msg.pos_sim_err_lim = 0.1684316321577537;
    msg.pos_sim_err_wrn = 0.14369042004658328;
    msg.pos_sim_err_timeout = 25416U;
    msg.converg_max = 0.5271301002444019;
    msg.converg_timeout = 41306U;
    msg.comms_timeout = 8634U;
    msg.turb_lim = 0.8812219691236441;
    msg.custom.assign("ATPLIDXSOTTZXLSSINWUTIWVNZEJERWIOYEMOFTZZDBBJRJ");

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
    msg.setTimeStamp(0.7974036016148691);
    msg.setSource(43715U);
    msg.setSourceEntity(221U);
    msg.setDestination(54521U);
    msg.setDestinationEntity(168U);
    msg.control_src = 36575U;
    msg.control_ent = 128U;
    msg.timeout = 0.09442310063319748;
    msg.loiter_radius = 0.9791929835822925;
    msg.altitude_interval = 0.5952366241713691;

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
    msg.setTimeStamp(0.4245346218310576);
    msg.setSource(32881U);
    msg.setSourceEntity(242U);
    msg.setDestination(12884U);
    msg.setDestinationEntity(54U);
    msg.control_src = 50337U;
    msg.control_ent = 145U;
    msg.timeout = 0.6789938755411022;
    msg.loiter_radius = 0.6228815919063689;
    msg.altitude_interval = 0.1603909666395681;

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
    msg.setTimeStamp(0.9822284807307645);
    msg.setSource(34213U);
    msg.setSourceEntity(159U);
    msg.setDestination(10397U);
    msg.setDestinationEntity(141U);
    msg.control_src = 5641U;
    msg.control_ent = 101U;
    msg.timeout = 0.3967720962664406;
    msg.loiter_radius = 0.5932704140509459;
    msg.altitude_interval = 0.606373611900461;

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
    msg.setTimeStamp(0.8329460741734565);
    msg.setSource(13117U);
    msg.setSourceEntity(91U);
    msg.setDestination(19621U);
    msg.setDestinationEntity(176U);
    msg.flags = 209U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5958929643363368;
    tmp_msg_0.speed_units = 30U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9275302744419694;
    tmp_msg_1.z_units = 175U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.4555569578632478;
    msg.lon = 0.9455211458270185;
    msg.radius = 0.7145498052122529;

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
    msg.setTimeStamp(0.687342119292494);
    msg.setSource(8128U);
    msg.setSourceEntity(214U);
    msg.setDestination(37027U);
    msg.setDestinationEntity(67U);
    msg.flags = 19U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6219118992296485;
    tmp_msg_0.speed_units = 34U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4260306025681546;
    tmp_msg_1.z_units = 213U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8423711094893941;
    msg.lon = 0.5628213250987486;
    msg.radius = 0.9178464234676552;

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
    msg.setTimeStamp(0.37668357350046344);
    msg.setSource(63398U);
    msg.setSourceEntity(162U);
    msg.setDestination(42974U);
    msg.setDestinationEntity(243U);
    msg.flags = 228U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.34099277888358925;
    tmp_msg_0.speed_units = 223U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.14712747992561814;
    tmp_msg_1.z_units = 136U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.20751961254276252;
    msg.lon = 0.5608740004495238;
    msg.radius = 0.5376913518781263;

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
    msg.setTimeStamp(0.3000314789278318);
    msg.setSource(32659U);
    msg.setSourceEntity(213U);
    msg.setDestination(64625U);
    msg.setDestinationEntity(246U);
    msg.control_src = 20911U;
    msg.control_ent = 77U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 251U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4285544953594935;
    tmp_tmp_msg_0_0.speed_units = 225U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.40059249063678604;
    tmp_tmp_msg_0_1.z_units = 142U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.40523102302862546;
    tmp_msg_0.lon = 0.45238000151117463;
    tmp_msg_0.radius = 0.7582580853735352;
    msg.reference.set(tmp_msg_0);
    msg.state = 66U;
    msg.proximity = 133U;

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
    msg.setTimeStamp(0.2354032146973114);
    msg.setSource(63238U);
    msg.setSourceEntity(131U);
    msg.setDestination(28982U);
    msg.setDestinationEntity(205U);
    msg.control_src = 50463U;
    msg.control_ent = 119U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 126U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5193808997581408;
    tmp_tmp_msg_0_0.speed_units = 241U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5518409223985837;
    tmp_tmp_msg_0_1.z_units = 125U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5791310129252776;
    tmp_msg_0.lon = 0.7702659610722692;
    tmp_msg_0.radius = 0.5961166431234406;
    msg.reference.set(tmp_msg_0);
    msg.state = 11U;
    msg.proximity = 248U;

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
    msg.setTimeStamp(0.6418567844612469);
    msg.setSource(41143U);
    msg.setSourceEntity(145U);
    msg.setDestination(60520U);
    msg.setDestinationEntity(27U);
    msg.control_src = 60531U;
    msg.control_ent = 22U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 172U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3322057252421967;
    tmp_tmp_msg_0_0.speed_units = 184U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7341740694798475;
    tmp_tmp_msg_0_1.z_units = 81U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3612496392090432;
    tmp_msg_0.lon = 0.20766432958839887;
    tmp_msg_0.radius = 0.8382856777477581;
    msg.reference.set(tmp_msg_0);
    msg.state = 170U;
    msg.proximity = 207U;

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
    msg.setTimeStamp(0.21169964309521483);
    msg.setSource(56480U);
    msg.setSourceEntity(253U);
    msg.setDestination(34321U);
    msg.setDestinationEntity(233U);
    msg.ax_cmd = 0.4773156185265718;
    msg.ay_cmd = 0.89644128069467;
    msg.az_cmd = 0.8643427150454611;
    msg.ax_des = 0.7835410425790008;
    msg.ay_des = 0.08216495645187272;
    msg.az_des = 0.4007723391389506;
    msg.virt_err_x = 0.7365218177519588;
    msg.virt_err_y = 0.8498604906796307;
    msg.virt_err_z = 0.3635316423087258;
    msg.surf_fdbk_x = 0.2027476012334508;
    msg.surf_fdbk_y = 0.15965351902295455;
    msg.surf_fdbk_z = 0.3282768665053344;
    msg.surf_unkn_x = 0.5938138133833628;
    msg.surf_unkn_y = 0.7383067606459461;
    msg.surf_unkn_z = 0.9115266421266579;
    msg.ss_x = 0.15278340531928125;
    msg.ss_y = 0.11647916410602532;
    msg.ss_z = 0.038877372798554855;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AWAHEALYXNDWIOYESRAJKFMYUNMEQURTGKVUDCRZBDZJUXZMPGEFPLGHNRGVRCHWUXAUCGOICJMFOBIMHHZWBCVDOCPISTBLRQPJSPKXLINFXZUDBNVJGONTRZOGRAQSLLMKYYRB");
    tmp_msg_0.dist = 0.47905090677397266;
    tmp_msg_0.err = 0.4462262563295435;
    tmp_msg_0.ctrl_imp = 0.402494402446135;
    tmp_msg_0.rel_dir_x = 0.6364785860461147;
    tmp_msg_0.rel_dir_y = 0.9436957990423808;
    tmp_msg_0.rel_dir_z = 0.5666536184093167;
    tmp_msg_0.err_x = 0.7395271407384942;
    tmp_msg_0.err_y = 0.9030836208329819;
    tmp_msg_0.err_z = 0.771061930261793;
    tmp_msg_0.rf_err_x = 0.5628900378877603;
    tmp_msg_0.rf_err_y = 0.6514473821755067;
    tmp_msg_0.rf_err_z = 0.731079214496112;
    tmp_msg_0.rf_err_vx = 0.5681955123216584;
    tmp_msg_0.rf_err_vy = 0.6499404011768428;
    tmp_msg_0.rf_err_vz = 0.32264329817324466;
    tmp_msg_0.ss_x = 0.10469263627469416;
    tmp_msg_0.ss_y = 0.08879027459133515;
    tmp_msg_0.ss_z = 0.4425255474716099;
    tmp_msg_0.virt_err_x = 0.5218058010165803;
    tmp_msg_0.virt_err_y = 0.02087531466648318;
    tmp_msg_0.virt_err_z = 0.7403128643119506;
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
    msg.setTimeStamp(0.8974626167307826);
    msg.setSource(28717U);
    msg.setSourceEntity(199U);
    msg.setDestination(47762U);
    msg.setDestinationEntity(253U);
    msg.ax_cmd = 0.8364658956929892;
    msg.ay_cmd = 0.9421014361386525;
    msg.az_cmd = 0.9623314936042334;
    msg.ax_des = 0.7866862431975121;
    msg.ay_des = 0.6836116693420776;
    msg.az_des = 0.891657604293311;
    msg.virt_err_x = 0.7927240099606561;
    msg.virt_err_y = 0.18916825295188022;
    msg.virt_err_z = 0.49419255737986045;
    msg.surf_fdbk_x = 0.9452118556285686;
    msg.surf_fdbk_y = 0.7741178016022033;
    msg.surf_fdbk_z = 0.542851294824067;
    msg.surf_unkn_x = 0.6704997861112443;
    msg.surf_unkn_y = 0.9182222101390689;
    msg.surf_unkn_z = 0.01594381050978322;
    msg.ss_x = 0.19300951439190417;
    msg.ss_y = 0.7164813785467766;
    msg.ss_z = 0.16984291802412743;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("CFUIWIGJMIQJLNSOMEEYMFUSRNPIQPWQDJBBQYLNUASPFSTRDVEKWJFHTTFOERARVKRXTTZCGJEPAJQZJJKLDLSWTDIBVHIDUBWT");
    tmp_msg_0.dist = 0.46552764808725755;
    tmp_msg_0.err = 0.2172979424431407;
    tmp_msg_0.ctrl_imp = 0.9269089938513269;
    tmp_msg_0.rel_dir_x = 0.078340712005177;
    tmp_msg_0.rel_dir_y = 0.1964260331230525;
    tmp_msg_0.rel_dir_z = 0.9315199601521725;
    tmp_msg_0.err_x = 0.8568414456624325;
    tmp_msg_0.err_y = 0.17241847651946418;
    tmp_msg_0.err_z = 0.8180884783548301;
    tmp_msg_0.rf_err_x = 0.7980637566976273;
    tmp_msg_0.rf_err_y = 0.4157506390561002;
    tmp_msg_0.rf_err_z = 0.9509731683362317;
    tmp_msg_0.rf_err_vx = 0.28182122146760336;
    tmp_msg_0.rf_err_vy = 0.24283745557748115;
    tmp_msg_0.rf_err_vz = 0.9095405112843905;
    tmp_msg_0.ss_x = 0.9836363242864878;
    tmp_msg_0.ss_y = 0.2943039299498055;
    tmp_msg_0.ss_z = 0.5177525329845046;
    tmp_msg_0.virt_err_x = 0.7310382358920126;
    tmp_msg_0.virt_err_y = 0.49165306879248083;
    tmp_msg_0.virt_err_z = 0.16324034983859925;
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
    msg.setTimeStamp(0.5616119647266644);
    msg.setSource(19569U);
    msg.setSourceEntity(89U);
    msg.setDestination(19900U);
    msg.setDestinationEntity(145U);
    msg.ax_cmd = 0.3968018134174305;
    msg.ay_cmd = 0.2536219166768303;
    msg.az_cmd = 0.3863385363515821;
    msg.ax_des = 0.23737597322313508;
    msg.ay_des = 0.9684089800380743;
    msg.az_des = 0.7309073291914745;
    msg.virt_err_x = 0.21108436024891697;
    msg.virt_err_y = 0.07592012282603255;
    msg.virt_err_z = 0.9257509695943985;
    msg.surf_fdbk_x = 0.7895329272035886;
    msg.surf_fdbk_y = 0.9654186434998477;
    msg.surf_fdbk_z = 0.721707953385589;
    msg.surf_unkn_x = 0.04573672223437042;
    msg.surf_unkn_y = 0.06561124854460076;
    msg.surf_unkn_z = 0.9025786573819045;
    msg.ss_x = 0.316294624063002;
    msg.ss_y = 0.8564070653727417;
    msg.ss_z = 0.95251045997004;

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
    msg.setTimeStamp(0.484680704593366);
    msg.setSource(53578U);
    msg.setSourceEntity(18U);
    msg.setDestination(50032U);
    msg.setDestinationEntity(67U);
    msg.s_id.assign("NNJOWZUWBFYXYVLSFMTLFPDVCCRUJGRCHYKNINYGEPHWCXSZVGJRWCRBGSBHESAJRNHOCZMQVFHVBOIQKUIIQLWTYFDFUOKQPBLZOGEZMNPSHVZDJEWHDETJQMDLTKUFTXRKPPLATJRINSSIXCBMLLPORBVXGGTOUPJHYGDEEXXFYYAJDWYKFWDIQUCNMMNSAHNXAEZLBMFVLIRXACMTUZKGQDHBAKWQVAWERXYQSTUVGOZIZJKEOKC");
    msg.dist = 0.8097617949137829;
    msg.err = 0.6868917048948254;
    msg.ctrl_imp = 0.1499970205606902;
    msg.rel_dir_x = 0.584613918015547;
    msg.rel_dir_y = 0.1943607047935173;
    msg.rel_dir_z = 0.5211009346286058;
    msg.err_x = 0.4154447540228433;
    msg.err_y = 0.9074836122517853;
    msg.err_z = 0.6515254894818644;
    msg.rf_err_x = 0.7242358291793252;
    msg.rf_err_y = 0.6503000611602191;
    msg.rf_err_z = 0.7742028334990996;
    msg.rf_err_vx = 0.6300498159489156;
    msg.rf_err_vy = 0.5641449560462152;
    msg.rf_err_vz = 0.06522353838421913;
    msg.ss_x = 0.9884515085096366;
    msg.ss_y = 0.6387054984948907;
    msg.ss_z = 0.4743163296634805;
    msg.virt_err_x = 0.08949015539598837;
    msg.virt_err_y = 0.2692719867652922;
    msg.virt_err_z = 0.501718963269515;

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
    msg.setTimeStamp(0.3696611492426185);
    msg.setSource(17262U);
    msg.setSourceEntity(104U);
    msg.setDestination(24529U);
    msg.setDestinationEntity(118U);
    msg.s_id.assign("UHUGKJQKUGNTWRZIBKFZOOCERIGMGVUWAKMHZOBDWVKTCJPLESFJAOJQNKWLYMNPLKRULLILPMWXHQCO");
    msg.dist = 0.6346926316003819;
    msg.err = 0.4666659597296331;
    msg.ctrl_imp = 0.4150354672910742;
    msg.rel_dir_x = 0.9083285108610024;
    msg.rel_dir_y = 0.8951834057336846;
    msg.rel_dir_z = 0.5393532433322046;
    msg.err_x = 0.3723066793990385;
    msg.err_y = 0.6950580923891898;
    msg.err_z = 0.9570435033360314;
    msg.rf_err_x = 0.533411658421162;
    msg.rf_err_y = 0.6717828438357228;
    msg.rf_err_z = 0.3594267241202356;
    msg.rf_err_vx = 0.5595533019418826;
    msg.rf_err_vy = 0.9345360985720038;
    msg.rf_err_vz = 0.8077309990952077;
    msg.ss_x = 0.28270996312718744;
    msg.ss_y = 0.802805289614756;
    msg.ss_z = 0.08329543262827088;
    msg.virt_err_x = 0.9129152592712522;
    msg.virt_err_y = 0.3074948744289041;
    msg.virt_err_z = 0.76702361264249;

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
    msg.setTimeStamp(0.601922214251669);
    msg.setSource(60539U);
    msg.setSourceEntity(221U);
    msg.setDestination(42347U);
    msg.setDestinationEntity(177U);
    msg.s_id.assign("QCUYSOHRHFOAFATFWLGVFGYPODVQKIWWLDEBHUAXNFFLDKOFJTQSSPJAGZZRMSIWKTDGBLIZDGBMGDSQVBTWJJXPJIJCPCPALLRWGCVRUJKGOYXLZDGWRSQQWATKMV");
    msg.dist = 0.09459800998056511;
    msg.err = 0.9233910311117377;
    msg.ctrl_imp = 0.6788917668840913;
    msg.rel_dir_x = 0.14841611739208904;
    msg.rel_dir_y = 0.08121644815675355;
    msg.rel_dir_z = 0.9660519861699258;
    msg.err_x = 0.5113363212562089;
    msg.err_y = 0.6293273807512172;
    msg.err_z = 0.03898768543483422;
    msg.rf_err_x = 0.2762520535995755;
    msg.rf_err_y = 0.3445258522387382;
    msg.rf_err_z = 0.0669265764965511;
    msg.rf_err_vx = 0.7166918124319385;
    msg.rf_err_vy = 0.055905924762769454;
    msg.rf_err_vz = 0.18357551086080015;
    msg.ss_x = 0.2726866581985734;
    msg.ss_y = 0.7079820465463716;
    msg.ss_z = 0.5058016051512072;
    msg.virt_err_x = 0.35585276276986055;
    msg.virt_err_y = 0.7247826678095473;
    msg.virt_err_z = 0.5795712472090251;

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
    msg.setTimeStamp(0.2811735249954681);
    msg.setSource(24504U);
    msg.setSourceEntity(174U);
    msg.setDestination(1228U);
    msg.setDestinationEntity(133U);
    msg.timeout = 56082U;
    msg.rpm = 0.1651060273425491;
    msg.direction = 76U;
    msg.custom.assign("AHCDJCTIWLKANYUFKUOZUYVVVJBQHARCWILWQXNDEEPBZGCAPYYDQTXEJVTVSRWUWPMOTISHCNRAOVKDQRVGPESFDOYXJLFMPXDJPPBLBDPCFRCSYVNGHRULVHBUIMFMMGZLBEQBNTYSXUMOKVDSIUNDHEGIAZTFROKAXXLGKZEYGFGZYNKOZHRAQUTNFZWUBTGCMPGKMSXTPNYIXMQAQ");

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
    msg.setTimeStamp(0.9864550132759126);
    msg.setSource(54339U);
    msg.setSourceEntity(180U);
    msg.setDestination(50976U);
    msg.setDestinationEntity(36U);
    msg.timeout = 3637U;
    msg.rpm = 0.11600674880652151;
    msg.direction = 132U;
    msg.custom.assign("NPSIKUGRKPJWYPAGFRBPMATUYUJRVYLQHTEMJQCMU");

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
    msg.setTimeStamp(0.6902867563065898);
    msg.setSource(65015U);
    msg.setSourceEntity(117U);
    msg.setDestination(35000U);
    msg.setDestinationEntity(75U);
    msg.timeout = 4193U;
    msg.rpm = 0.7334841566464694;
    msg.direction = 2U;
    msg.custom.assign("PGECLGSNLIOOFELQPXFUFEGRCRKVWYHSCPPBMXMYKURXDDNFFIHJJHXPESMDHKWDFCCILBXDDGQLZEQIANQYINRONYOHMO");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.5495196459506327);
    msg.setSource(26480U);
    msg.setSourceEntity(180U);
    msg.setDestination(13004U);
    msg.setDestinationEntity(107U);
    msg.op_mode = 13U;
    msg.error_count = 55U;
    msg.error_ents.assign("LBYBJOKTHOMZYOQBPXJVZRCMGAIFCJLRREUUYMKEHGKDOTZNWUWHLIPXGXIYUQOPYKJEAJKMMSACRTFXIFRBUEFQWPJCSYLGVAOGWZFTJPBNNEERTFAGRYCDNKFJECVVSXDOPHJBVDHSDSZNVWWTVHQQCGZKIFLGBXQCRLTSPDNMDQJWUQIYIVAQOZIQXHOG");
    msg.maneuver_type = 23959U;
    msg.maneuver_stime = 0.035122187176976016;
    msg.maneuver_eta = 15125U;
    msg.control_loops = 3010206066U;
    msg.flags = 227U;
    msg.last_error.assign("HPHKBQQLSVIEWBCPORWENZRNCSPXLOLUDADSRQPAKKXXIOKMZSCUYZTFJCSNVAUXWVUQRZLPWMUEI");
    msg.last_error_time = 0.6069424180458659;

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
    msg.setTimeStamp(0.24738185149029934);
    msg.setSource(41911U);
    msg.setSourceEntity(111U);
    msg.setDestination(9419U);
    msg.setDestinationEntity(224U);
    msg.op_mode = 200U;
    msg.error_count = 25U;
    msg.error_ents.assign("JPLSVZWCMHKMUQIUGWCGVCMEAMOXEHGDHTLQJFIBYSKJVRAZXXSRGZOSZLSBWIWWDAJIXBODACZNUBPDFBJOHOPCDCUJUVYVIJHMKZTOUOGUSKCDNTOGTXVVTINIPE");
    msg.maneuver_type = 57502U;
    msg.maneuver_stime = 0.7720296837020881;
    msg.maneuver_eta = 47712U;
    msg.control_loops = 2251228056U;
    msg.flags = 139U;
    msg.last_error.assign("SRTMGNYYKIWZNHGRAEMHGPGGZZPIFZURFBEQTSMUQCVGTJVPCXHASCOFXMMULPXNVQXYDOFYFPUBYQJUBBXDCKSMZDNBJEVAIWANVSROPRJQNFVRFWHIZZ");
    msg.last_error_time = 0.2190618744122883;

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
    msg.setTimeStamp(0.10388389837070744);
    msg.setSource(56507U);
    msg.setSourceEntity(18U);
    msg.setDestination(23245U);
    msg.setDestinationEntity(160U);
    msg.op_mode = 109U;
    msg.error_count = 103U;
    msg.error_ents.assign("FHYSANQGNCKAGPQOTFCFKETORAYCKYMIHNKXPWFHEPZCVDINNPLILQKHRGKSCGAPYNBZUBDVRJOEQDWYSXZEQDAXQGQMMFDBJPMCLUWVY");
    msg.maneuver_type = 3022U;
    msg.maneuver_stime = 0.298634098509723;
    msg.maneuver_eta = 65112U;
    msg.control_loops = 2490420218U;
    msg.flags = 78U;
    msg.last_error.assign("ZLGPZLKMHVOLJYYQEZCZXGHNSMYLDOBUXEOBMQJNQOBAKVJRYPVLDLGSUFRBWNHNDAHYILQQMFSPFEBIKVONCECRPTJOCURXFZJPEQQFLCGPUXLAEUMUXENRRFNBGNWPSJIFJZVKZ");
    msg.last_error_time = 0.8650075966785138;

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
    msg.setTimeStamp(0.17773737181100524);
    msg.setSource(63703U);
    msg.setSourceEntity(37U);
    msg.setDestination(64214U);
    msg.setDestinationEntity(48U);
    msg.type = 44U;
    msg.request_id = 25383U;
    msg.command = 9U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 4506U;
    tmp_msg_0.custom.assign("SYIEKOPFVKAZGNMWLCZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53674U;
    msg.info.assign("RVDPFYVEQH");

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
    msg.setTimeStamp(0.5064266189587255);
    msg.setSource(61772U);
    msg.setSourceEntity(114U);
    msg.setDestination(20388U);
    msg.setDestinationEntity(218U);
    msg.type = 42U;
    msg.request_id = 44498U;
    msg.command = 88U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 53110U;
    tmp_msg_0.custom.assign("AAMHMZRNMXZSNQMQJCUIUEFFPOTZJWSGEBVUDRQHWOMZYCAVWRECIOTXVLPPFJSDDHKYKNXNGGDXKVLWGCTKAJDOHVYHBQKVPWZIFXVDRKTFSPEJBAXCYNCZZGBXLBQZDYJSCAQRKNFNZYPBUAIHRETSKVWUFQQDABGUGMMQFOIJEAHENPQF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50844U;
    msg.info.assign("SRPYGMZQUHLRIKZQFJTJVPOCAOYNOABDWEEHUGKGGDMDISRKOIDTSVGOEXNUWPXXZYFFNLHZYUVDCJOAXNJRMBQLIZUSHXZURFIEBHKJPCRJQTRWBMHCUXFANJNKADLASIIGNEKLUPSEJPCQFNLUPYTJHSVJNQXEABIDWPHLAWCCVBEQL");

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
    msg.setTimeStamp(0.40699443607658914);
    msg.setSource(60444U);
    msg.setSourceEntity(80U);
    msg.setDestination(32130U);
    msg.setDestinationEntity(119U);
    msg.type = 123U;
    msg.request_id = 49178U;
    msg.command = 127U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("AXIWCBSNKBYAIJSHMWAAJOVPRBCMFINTLMJFTDIHZZWGJZXVFOLJQCUUAZUARAWSTEYKWQSMHQXOPIRLDDAZTRUNEYDTTCHWRXIJUQSQJHPFPESPFBQVOYTRIXLIVECXVFGNDFDNUMJUASNMXG");
    tmp_msg_0.formation_name.assign("QZDRESEOPMSZHNVJFWJTMLJKGIOLDGKYALPMSEJWXW");
    tmp_msg_0.plan_id.assign("FYNSVLHWOPBZCEMRMKUCZBXPRUDQFIAWHCGTKEINEDVPGNAJKXDIAZBRYUGABSQKQRWIYDNMDPOKFBHWYEQZJAUQIYLDCKCXJXBHWUGGEEJYZULQCYLEGHPRW");
    tmp_msg_0.description.assign("FODLQUBMEAQQQZGIDVGBASUYXTSLLLKOZNNOLABNYVBMWXKYMTBCIEWHJTVSRMKRGNECAWMFOGBFBIUTADHZVJTXQKTLECXISSFPBCPHVEUUCKFFPFGXIYVDCGSZUQEHTGNLRBPPGMVNUJMCJOYXRCSHNDMOCFBXPDDPYNKUEROJQEAXFJGENZWPYVAVQISZKTSAPOXWUCRIHYPTJKHLDIHORZO");
    tmp_msg_0.leader_speed = 0.07661993129488531;
    tmp_msg_0.leader_bank_lim = 0.06421429933061329;
    tmp_msg_0.pos_sim_err_lim = 0.7993350933351534;
    tmp_msg_0.pos_sim_err_wrn = 0.4334065150906401;
    tmp_msg_0.pos_sim_err_timeout = 19595U;
    tmp_msg_0.converg_max = 0.8664422513595856;
    tmp_msg_0.converg_timeout = 37989U;
    tmp_msg_0.comms_timeout = 56055U;
    tmp_msg_0.turb_lim = 0.5911475644117434;
    tmp_msg_0.custom.assign("BBZWXJSZDUQCLWIADOUFGTPVSKHAIFFCGNWEXVILNHOJYDUKWDKUVIQDYTPJKRROAMQVRPELZGVHGLOWKVHEOGTUIDBFFU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41933U;
    msg.info.assign("UGNOXRJRQHIGNAWBVFTKHESZTMYYBFQPMQCXENZSIFWYSJPY");

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
    msg.setTimeStamp(0.6273938155666074);
    msg.setSource(18594U);
    msg.setSourceEntity(167U);
    msg.setDestination(62866U);
    msg.setDestinationEntity(58U);
    msg.command = 42U;
    msg.entities.assign("HCFQJUBFHOENNQGJGUAMEQUUYPOURTUTYHVVKFEFHAXAHTOZSARIOSZSXHIHZGJVPEWAXZLQKFJMBGTTLXQMPGGMLFDOANRVRPZIOVAASTNCWCVUIXDZHDWEHTLUDSYPBIYXZDJPPSSKRLQRCUXRBIBJJCKW");

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
    msg.setTimeStamp(0.10364808491908839);
    msg.setSource(5688U);
    msg.setSourceEntity(244U);
    msg.setDestination(13959U);
    msg.setDestinationEntity(112U);
    msg.command = 130U;
    msg.entities.assign("PGHBTWUJOLSBDQQZAPKPRLVFEQOGDHXNEZFTGEW");

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
    msg.setTimeStamp(0.3217025696195742);
    msg.setSource(47896U);
    msg.setSourceEntity(202U);
    msg.setDestination(62590U);
    msg.setDestinationEntity(142U);
    msg.command = 196U;
    msg.entities.assign("LUSSGFVECNIHUTNBAWRUQCFSXNIUFPMBAQEMEPCPCIYYZMKBLKEJDZRLASRLFWBLRJZVXMYPXRYSCAKPKQJYGBEEFKHOPJMLTXOBWCVCFHHXHVZWTBJIODNRDQZUQUMTWKJKYAVWQIGIXJSMDFGZIVYXSDHZHTDJNQOJLRWMQIUFDLFTDYVZTYLSNKPGA");

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
    msg.setTimeStamp(0.5919344394072537);
    msg.setSource(55147U);
    msg.setSourceEntity(233U);
    msg.setDestination(149U);
    msg.setDestinationEntity(195U);
    msg.mcount = 33U;
    msg.mnames.assign("RMGTDNOKZPDOEKIKXDCHTDIXKDHBROHVYHTNPHJRPPPIUAWJNRRZXJYEMUGEWCMPCXZNSCBWVPORBJVIHKUJXIGHAGACYVQZVDBIYXALTZMLCKYDRSKMXLESVUXGQWEWYBZVSKWWHSMUFCIAQQOSZDO");
    msg.ecount = 153U;
    msg.enames.assign("WRYAPEPZSFTCUUQNYONFAZGAXZKYKZUWNFJIXATENONLLZOHBHDGYJEWBPDCDXVVBQVXJUSHUSFJMEBHZOLRNKBOVMRMJOGTJBQMDCYUIJCQHTFYXGGUNQLPV");
    msg.ccount = 172U;
    msg.cnames.assign("SSOGDIHTQXTDPXRMWYCUARCFFMOPKCWEMUMADTSQBDCUNHOBKSHFPAFVVIZTCKWXETKVAMQTLCEWWVRNJXDQGEAPIDMFPFXOZXWQLSXBMNGVQOIUUVJFUNJJEOJYXNLJTOWOBTGGRWGWRGLUVSHPUCXJXREVMSKFYJCHBWTGHAYOQJILEDQYUCZKSLJIZYRZAYPNIFQKDZAGKZ");
    msg.last_error.assign("PYHVDKEQJLGJBPCTMWWELGTZUIFMCEHALCZVDUOJUIYDIUTXSQJDNBDSZPFX");
    msg.last_error_time = 0.3476163325358048;

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
    msg.setTimeStamp(0.5125834292883857);
    msg.setSource(18346U);
    msg.setSourceEntity(176U);
    msg.setDestination(16178U);
    msg.setDestinationEntity(231U);
    msg.mcount = 234U;
    msg.mnames.assign("RHTEUXZDYFZTOETYUJXNOVYPTOXFDARFKLGGOJIPKXGUFVFQMMYLKCLEZVAIECIBWYZEBBLSSJZDNQCGASVLZAELRPRDHQKMHFADZOIRXTWPEMHYXQSGDTFQGFWXVJBJKROLWHAMDLRAININYCNFUBJFXPOKULNRBUBTXSJSKGTELOYKVMHNHVIVYWWNCAKZPRTDZUANINSPUQJERUHDPCVBQGYCGAWIGPEBV");
    msg.ecount = 222U;
    msg.enames.assign("AWUMWQZBMOIXNRAYFKTEFUCCCYCVQKKOASDOYVXJFGBAIPGYVLAIZEIEZBXLQRNMBJXDFDNVPQTBHHHVLXIUXZCKJIVGYZMLUYKYSPNIRMKGZLDQBAOGSFTOHGJNHUJ");
    msg.ccount = 82U;
    msg.cnames.assign("OXDDFLWCSUHVJEPKVPZPRIUFALIKFJAQMRSQXJUDCJTYTKHBLDDQWNFQOJUMXIFRHULBDVWGCNLXYQLUXNLCULUR");
    msg.last_error.assign("PZSMEKSMLNXXCESWFUVZKLBVFUQBGGWMGEYPILLVJKPMDKVMDODRENOTBEQVDQDCROOIANWFINZORCJDSJKTXYKIFPUFOGXAHZIQTXAOQZ");
    msg.last_error_time = 0.8937317857615592;

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
    msg.setTimeStamp(0.15766094900056227);
    msg.setSource(33059U);
    msg.setSourceEntity(229U);
    msg.setDestination(41588U);
    msg.setDestinationEntity(188U);
    msg.mcount = 240U;
    msg.mnames.assign("FBXCRVSDTEPFFLNVNIWJWQBGYRSLUZFQGFGYZQJQAZFHEQFZMXHPZWUODAFIBNOLWAHROKKZAEIWUAOXEVEKJHUJCGR");
    msg.ecount = 125U;
    msg.enames.assign("LQTCGBESMPVNFDUIPVYWMNDPYLXFEEVGXFEJMRCLPHYMLUPIBQVOGRYGFOEZNHBDUOWZQAOGXPEQDZAGISDFBRSMVABJQFPUPJRKSTQFKTWIHEFBLRXZFXEBTVFMJYTBEIJSZMXUARCLEMAHNTRHKNXYOHOJQOAIKDAKSCGVSVKUBUWZIGLSQYPXYHKCONHLURZVGWKQAWZNJDXYTSTZCDAIWCUDDKTTCNORNZAILPOWHCQXRWJMKISBJUYCMG");
    msg.ccount = 99U;
    msg.cnames.assign("NPLXYPKKKCGYFQMJPUZMTJVZDAPGBYDQXJDRUMLBDPOKLHIQPROYEQAZNYGFURQPTMHLFWHKGBBYFCOONOYNRSSHPWMSIDQGSWXWTWIVAUEREUVKKEVDVBOATZSHWCWZJZFWLCHNNILOIOJSCHWXIKOTFTZVSIHLRJUZESNLRBEOXIVMCC");
    msg.last_error.assign("CUXEFQIVEIMKZVQWZMKTRODESNFTZUHLKVNYIDPXJJYPNGRHHIVWCFVUAKMRMQATLTMXWOYHXXDRKLGAHZMJJULRJZXDNHJSCPTWJZUSSPABKFAGHALDDPQKKWKBRFYBDOXGSSOBNMGEVIQMFSILHOMPNBMVGFYUEQBONVWVPHQIWCEDWDACOZASYAEILYQPVYLJLZRI");
    msg.last_error_time = 0.04574134953586062;

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
    msg.setTimeStamp(0.9282652798057891);
    msg.setSource(9622U);
    msg.setSourceEntity(192U);
    msg.setDestination(55673U);
    msg.setDestinationEntity(226U);
    msg.mask = 210U;
    msg.max_depth = 0.40949664763415683;
    msg.min_altitude = 0.3798553182924159;
    msg.max_altitude = 0.753165857426716;
    msg.min_speed = 0.3280602460584823;
    msg.max_speed = 0.4534608534413166;
    msg.max_vrate = 0.07499230661627909;
    msg.lat = 0.38810771714234593;
    msg.lon = 0.5745098145282723;
    msg.orientation = 0.8003514529558357;
    msg.width = 0.029655041889636635;
    msg.length = 0.7622373828440897;

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
    msg.setTimeStamp(0.7224164712636425);
    msg.setSource(48143U);
    msg.setSourceEntity(120U);
    msg.setDestination(11881U);
    msg.setDestinationEntity(18U);
    msg.mask = 201U;
    msg.max_depth = 0.41573282562178904;
    msg.min_altitude = 0.3644897587424243;
    msg.max_altitude = 0.7824617918645893;
    msg.min_speed = 0.3813042226872526;
    msg.max_speed = 0.37280433025241244;
    msg.max_vrate = 0.1585643130081119;
    msg.lat = 0.5301945557485924;
    msg.lon = 0.6805011922112654;
    msg.orientation = 0.25022899350245964;
    msg.width = 0.42879099571941504;
    msg.length = 0.05425153045519582;

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
    msg.setTimeStamp(0.8772974702768622);
    msg.setSource(37410U);
    msg.setSourceEntity(194U);
    msg.setDestination(32466U);
    msg.setDestinationEntity(244U);
    msg.mask = 181U;
    msg.max_depth = 0.6591181399380672;
    msg.min_altitude = 0.5900079718094561;
    msg.max_altitude = 0.6312808454899581;
    msg.min_speed = 0.3090616048054231;
    msg.max_speed = 0.9984672039028717;
    msg.max_vrate = 0.7137481711388541;
    msg.lat = 0.6131783873221042;
    msg.lon = 0.71304459796042;
    msg.orientation = 0.8884149903875034;
    msg.width = 0.859224178584388;
    msg.length = 0.4914419771041625;

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
    msg.setTimeStamp(0.392219240676389);
    msg.setSource(55269U);
    msg.setSourceEntity(9U);
    msg.setDestination(35041U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.351388473912153);
    msg.setSource(14086U);
    msg.setSourceEntity(76U);
    msg.setDestination(8745U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.6317933393582761);
    msg.setSource(12100U);
    msg.setSourceEntity(209U);
    msg.setDestination(12161U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.44491748504762063);
    msg.setSource(40783U);
    msg.setSourceEntity(139U);
    msg.setDestination(35201U);
    msg.setDestinationEntity(10U);
    msg.duration = 24797U;

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
    msg.setTimeStamp(0.7627238438823136);
    msg.setSource(13118U);
    msg.setSourceEntity(108U);
    msg.setDestination(29764U);
    msg.setDestinationEntity(139U);
    msg.duration = 61726U;

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
    msg.setTimeStamp(0.7813234943794055);
    msg.setSource(51968U);
    msg.setSourceEntity(254U);
    msg.setDestination(61812U);
    msg.setDestinationEntity(163U);
    msg.duration = 53708U;

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
    msg.setTimeStamp(0.41004836389569654);
    msg.setSource(15803U);
    msg.setSourceEntity(74U);
    msg.setDestination(33620U);
    msg.setDestinationEntity(29U);
    msg.enable = 163U;
    msg.mask = 3702387568U;
    msg.scope_ref = 2286749186U;

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
    msg.setTimeStamp(0.8867527718484527);
    msg.setSource(18632U);
    msg.setSourceEntity(197U);
    msg.setDestination(29869U);
    msg.setDestinationEntity(32U);
    msg.enable = 201U;
    msg.mask = 623954378U;
    msg.scope_ref = 3522051541U;

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
    msg.setTimeStamp(0.5021706319629375);
    msg.setSource(33302U);
    msg.setSourceEntity(230U);
    msg.setDestination(22778U);
    msg.setDestinationEntity(193U);
    msg.enable = 206U;
    msg.mask = 1045910610U;
    msg.scope_ref = 4241437146U;

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
    msg.setTimeStamp(0.07900423933128731);
    msg.setSource(3711U);
    msg.setSourceEntity(35U);
    msg.setDestination(26692U);
    msg.setDestinationEntity(92U);
    msg.medium = 230U;

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
    msg.setTimeStamp(0.22059263515979832);
    msg.setSource(52529U);
    msg.setSourceEntity(19U);
    msg.setDestination(18746U);
    msg.setDestinationEntity(61U);
    msg.medium = 211U;

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
    msg.setTimeStamp(0.7113950146820605);
    msg.setSource(46153U);
    msg.setSourceEntity(125U);
    msg.setDestination(48112U);
    msg.setDestinationEntity(154U);
    msg.medium = 124U;

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
    msg.setTimeStamp(0.12690854649466965);
    msg.setSource(3842U);
    msg.setSourceEntity(148U);
    msg.setDestination(9843U);
    msg.setDestinationEntity(35U);
    msg.value = 0.17808151178174447;
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
    msg.setTimeStamp(0.7110173635715816);
    msg.setSource(53124U);
    msg.setSourceEntity(126U);
    msg.setDestination(22318U);
    msg.setDestinationEntity(190U);
    msg.value = 0.3419358708041964;
    msg.type = 24U;

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
    msg.setTimeStamp(0.5398013813201562);
    msg.setSource(5526U);
    msg.setSourceEntity(20U);
    msg.setDestination(35894U);
    msg.setDestinationEntity(163U);
    msg.value = 0.8357373994916097;
    msg.type = 245U;

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
    msg.setTimeStamp(0.7609556497382062);
    msg.setSource(47863U);
    msg.setSourceEntity(99U);
    msg.setDestination(16986U);
    msg.setDestinationEntity(233U);
    msg.possimerr = 0.3400206992832504;
    msg.converg = 0.8143658914225866;
    msg.turbulence = 0.6072057840716844;
    msg.possimmon = 57U;
    msg.commmon = 23U;
    msg.convergmon = 86U;

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
    msg.setTimeStamp(0.2960182324856464);
    msg.setSource(24570U);
    msg.setSourceEntity(163U);
    msg.setDestination(13938U);
    msg.setDestinationEntity(18U);
    msg.possimerr = 0.9971077079687962;
    msg.converg = 0.09464116941815526;
    msg.turbulence = 0.786758868291291;
    msg.possimmon = 211U;
    msg.commmon = 77U;
    msg.convergmon = 93U;

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
    msg.setTimeStamp(0.20967800974374018);
    msg.setSource(13654U);
    msg.setSourceEntity(206U);
    msg.setDestination(6506U);
    msg.setDestinationEntity(44U);
    msg.possimerr = 0.4581049303052446;
    msg.converg = 0.9687000840622546;
    msg.turbulence = 0.18771680224370646;
    msg.possimmon = 186U;
    msg.commmon = 54U;
    msg.convergmon = 186U;

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
    msg.setTimeStamp(0.05502783416805712);
    msg.setSource(2363U);
    msg.setSourceEntity(231U);
    msg.setDestination(43492U);
    msg.setDestinationEntity(253U);
    msg.autonomy = 183U;
    msg.mode.assign("IUJZXRMJOBVDYEMJIEHUPLWTORMUCGJEGIMDAAJYZQYYURSAXYBVHEWLDKBXASEZZSALFWFUTVDXQANCEKSIDTGOZWOTNPTXDVHJRIJYTZSZQJIAEREIPXLOFNGPO");

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
    msg.setTimeStamp(0.21037125552996916);
    msg.setSource(25466U);
    msg.setSourceEntity(232U);
    msg.setDestination(176U);
    msg.setDestinationEntity(254U);
    msg.autonomy = 207U;
    msg.mode.assign("JSCQQPSBYAVOPUVLWAPPLNJVGQCEPUSYJCGNHZMICQOSYGJKJWDCFNBKRFESYXOQKWOISDEVOOTRBXTIKJNYBLKJXLUMMXOCWNAL");

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
    msg.setTimeStamp(0.21951151849287676);
    msg.setSource(51823U);
    msg.setSourceEntity(157U);
    msg.setDestination(55124U);
    msg.setDestinationEntity(145U);
    msg.autonomy = 129U;
    msg.mode.assign("FWWPNSTYGMSTSLNYDTXCTJNZVJLKHSSQODAZFDUWBHQLVARDWKARUHMQOZSDXX");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.5410944141332258);
    msg.setSource(48684U);
    msg.setSourceEntity(115U);
    msg.setDestination(49830U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.264221828968083);
    msg.setSource(48471U);
    msg.setSourceEntity(191U);
    msg.setDestination(42047U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.8233375377724511);
    msg.setSource(46107U);
    msg.setSourceEntity(243U);
    msg.setDestination(20359U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.3271623508613004);
    msg.setSource(23008U);
    msg.setSourceEntity(99U);
    msg.setDestination(281U);
    msg.setDestinationEntity(181U);
    msg.plan_id.assign("VBZOMNQDIYQQSTQBIPFZVPYPWKXXWCJRLLRDIMUWCQNHZJRCEEYBTFPRIMCMADFKXLOMWNLREBSSWTFZUWNXKKFSEEFHGKBAXPBQHGGZUYNAOWUVUAELIGJVYJCCXMKULDGTUSHTYUHDIYPKQJEMSATAZMJOFVCGTXRNCNLRPARVLHWSNHDPWZJPGLVDOIAZSTPYBETFHIC");
    msg.description.assign("LSWJHQDLVPBVQIHGJGXIFSEEAODUJXOTNGMDGCTEBBCSPMKBKWQMYOZISUHUZQRNNYSEMAXNXFHBHBCAWDARCUWQMBT");
    msg.vnamespace.assign("VEILLUFKXBFMTXTXZSKZRVBAQEOTTJJQYQCWXQGPFJZAJBCUGQAPZOYBKDDDKWHQNFCVOSBOFJBJFXNFDADMLRETIDLAGYMBWWTVAKIETCCDHIAXBPWRPISRIYHEOXJUYSELZHRRYMLRDEXGNHTVQNLMSEEKCJNKBWAFMSUVNZRRPNMVDZGJCQNIXKTGUOUHYSLFVAOPYWMZSCPWUNHLGC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RPQUMSAUBSLKTEKHHJSAEDXRZAMBYYYHEAA");
    tmp_msg_0.value.assign("MIYFCEWWNWRDAFKUQDXBARXJBMOQGHOVSWJNMAPJJGKVIMBUPKVINDSLFVQIBPXDXZKLXUZDCIHNTOJCHFETOXYJSJVLHCNANLKZTQQFEHRYAHLZOWOEITXRKUHFSWGUSYUXPPGTKYNRSAVFSUKULDTCDSMMNHQ");
    tmp_msg_0.type = 62U;
    tmp_msg_0.access = 78U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("AHKDALGDFTEMXUEOJAJFVGRXGEQBLKXCBRUIHNVGAHEOVWNWRZFQCIEWXOPJUNVMJSWZYVMJMFDTARYQJZIBMBEHOVTSGUHZLFDUCTDSBKIPQFIALJJOWZMCKKOQDPNQJOLCDDCRUUXJZQNSYKRMFAWBFXFWDTPHRQMCYSFLLGOIIIPLTTHYTUKCXZHNPBROBARYYUECESZCPPGSTSAYKVAY");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ZBBVNKOBWNVZAIIFKQFEBCFQHHNZPPDRKQLDOXHSTVEJMYEMZAKBLRBXCHAIIDYCGGSGWGJRCKXUVQMVKQPOIXYWAAUFIPPUMLZITSTSCWKRC");
    tmp_msg_1.dest_man.assign("ALGLZBPOMOIDXITSVKRIMROUJEMJGFDTOLSNODNFRVRUAHWEHFWIGBVAVYSQUEQFPQTINPZJKAXBEYJOFZMJOUWPCFKHLMVZSVGPNTROOJBXYIRAEHRDHNQWDPAXIECPPWENUSHBFGPPTKKBLLYSABSCUAQIMKXLEAMFFTDJKWKDTCTQLCTGZATUHHVJBBGYCCZEDQWXUJLRXSIQOJGWVLHFNMBXDDNSZRUYXN");
    tmp_msg_1.conditions.assign("BZSGEUGSZRQETRQXCIAULTBWIYJVWIJAAHKBDRUFZDFDWQGZTNYVOBIYLHXKMZAXVKQJGNKZJYTSLMUUAGXXEUINWAAPXLIQKNBFYSFHPEKWYWQPSCFEMILNQPJUJCRCLHPIFFVDOHRVNLCDSSEMHYSLTXSKAFPCBKMOVBULRTONCMZBCTAJPYEHUNRVNDBPTICAJHQVPOSOBGHRMWQD");
    msg.transitions.push_back(tmp_msg_1);
    IMC::ServoPosition tmp_msg_2;
    tmp_msg_2.id = 22U;
    tmp_msg_2.value = 0.4539915437688815;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.2248585701549778);
    msg.setSource(5256U);
    msg.setSourceEntity(22U);
    msg.setDestination(46563U);
    msg.setDestinationEntity(164U);
    msg.plan_id.assign("ERPSZAKEBTNUYIUGSPSEXCWDCWDEXMIUBQJGNRKTOOOLVVWNMPLIVJKNWMFWUZUEGFXIVNEYGVQZDFQOQVDWDHYUAIWZIRXLTWHCOQTZZNSMZZCPZXOKGLAPCFQ");
    msg.description.assign("UIDIZNDWTLHKHJRMYEAMXALBOBYPGKFKFLGDQMJOEZVOEYRMHCKJNALBAGNPCUCQIKIWDJSGYRSXMUAMAAHREBEUXEDRZRVSVRQGJMLKXQKBZTPUTQMWUFRXHTXIIESDZYWLZSELVKDIHVVOTWYGQKXNFQRUPFOFUJHGLMDTFBPAZNKSZWQZVSJPHLGOHWGWZVLHMYTSWEPGCOJIVXQCOTTYNNJDFDFIBSCIPANYYNXOOBAFEXTUCSBPBNCRCQ");
    msg.vnamespace.assign("EOHRVSYYTITPLBSFREXHGNLCMWYBFRJDRROGWFKKHFGZDAKJSLAQUBBMJT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BIUJVJQOVIFMJZKWGPAZXTGNHXRAHDAPQJCGGMGUNAPEUUIETWBIVQVFRUIRBRACLEHFKNKMCYZLVJJOVCKDYNNOSLUEPOGOQZIWPYQXCLFWPQSQSUPSBUJEVEVXATYTBMPGHJZHDMMETNSAFDRVIXHDPFBJTDMEYWZSKGXYDRKKN");
    tmp_msg_0.value.assign("TINLWAMRSHJKFRZGOCCLRNNZQXONUTGBVERNBPDGZVRJSIHYWEWCDOPQUHPSSQQDWNCFANTEIYDIMXZVGPUEHMAWDYTRSDIFYPLEMLBUTZAKPUVOOHWYXKQUMPVFEOCZJFZEKOYBSJEGBXPEDHYKDKUMYGIFYCFTLNZXGTGKOXCMQHZAVWI");
    tmp_msg_0.type = 114U;
    tmp_msg_0.access = 4U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WKUSXAJLBZQCGDLQXXFHVPVWWACYJNSHPW");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SWMGCGIPDRFCDOSHDHPDLSJRONZVDUENAGQYNYWFVVUSUKGTMJLRXTVJIEKXEIPPMTUWEKKVVXOQZWNTDTZH");
    tmp_msg_1.dest_man.assign("COSIUEZTVBC");
    tmp_msg_1.conditions.assign("DZYHZRJEFCVJPXGNFSGNVNCZYVULOAPBRTGSLDJFNLSTQVQJCNCJOQUCXOTWSMMZHABHDPONNWYCEWOIVFDUJYMLOHCRHXGJSLPHXAWMTKDBFHMEYIHBVZGXRLFWLGIEUUYIKUPDRKWIDFYMRXHGBLAEIVBUBKAIGRDTSPMRIVQEBPYGGLKKUWTSVCEEZDZQODEVNNQPFOKLWKZBQWEZCMTSOPMFYU");
    msg.transitions.push_back(tmp_msg_1);
    IMC::EulerAngles tmp_msg_2;
    tmp_msg_2.time = 0.8066082175922201;
    tmp_msg_2.phi = 0.02600900796748995;
    tmp_msg_2.theta = 0.5306216537055994;
    tmp_msg_2.psi = 0.6323420126604732;
    tmp_msg_2.psi_magnetic = 0.5406895523137938;
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
    msg.setTimeStamp(0.2694088601992999);
    msg.setSource(27258U);
    msg.setSourceEntity(251U);
    msg.setDestination(23699U);
    msg.setDestinationEntity(76U);
    msg.plan_id.assign("BCHEHAXPTWMTOOBARUAKTVBACBYUZQPWBFXHYJDXGLRPBETSYXQKOUT");
    msg.description.assign("WNNZYJKKRDZARQKWNJOBJSZYPMZRABVIJFESPXLAEBHTCFNOKIJDQBWKSPGWYUJTTDXUBMVPXPVOEWQZWBXHQNEQWIQCBADUMTXRPOBZTSNHDBLFTVCETONXCGKREOVVSUGEIEYONEIGKPMDLMA");
    msg.vnamespace.assign("KCANSLBSZHLSJSEQYYHFJFDDFMGGPWUWPANTOPVDAURWFDQDKNHTACENQIXIXYRFCAPJB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GOJGGPVERIGZVDOIEXFOOFIHQSLFUUEJKN");
    tmp_msg_0.value.assign("OSLKOSXYULKLGTBSATYGRXTIAFWYYJPYIR");
    tmp_msg_0.type = 119U;
    tmp_msg_0.access = 80U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ETRSNKQXPKJSOFUCPPRNRITIQ");
    IMC::ControlLoops tmp_msg_1;
    tmp_msg_1.enable = 104U;
    tmp_msg_1.mask = 1484878015U;
    tmp_msg_1.scope_ref = 1229044583U;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.43288581152658767);
    msg.setSource(32282U);
    msg.setSourceEntity(230U);
    msg.setDestination(61358U);
    msg.setDestinationEntity(19U);
    msg.maneuver_id.assign("TMPUJVSVFMETNROEQCGTAZNLEPWOAHKFKHYHOHKWBQXYKZUNMNHPOHJRGQMAFFWQRYXPQIDBQVWRLRIZVYTRQZDDNVRSLCOLXDKKVEUIZBPGUHELTSADDXULCQTLCYGSGOPKGBRQEDVADAMSSTJPBAZZUSICTUF");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 27845U;
    tmp_msg_0.lat = 0.15622189209725923;
    tmp_msg_0.lon = 0.4118267358959329;
    tmp_msg_0.z = 0.7329160480970782;
    tmp_msg_0.z_units = 110U;
    tmp_msg_0.speed = 0.9676973855464437;
    tmp_msg_0.speed_units = 63U;
    tmp_msg_0.duration = 64588U;
    tmp_msg_0.radius = 0.9063316089361416;
    tmp_msg_0.flags = 20U;
    tmp_msg_0.custom.assign("KCHDEJZWMEPKHERCGGKULHMKFTAXBMEKJYCZVKGJSCVQFIVGETRXLHUGHCRBLAPWMSYWQRYQHFJRQPUYEANBMKKAJ");
    msg.data.set(tmp_msg_0);
    IMC::RelativeHumidity tmp_msg_1;
    tmp_msg_1.value = 0.11731134258289388;
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
    msg.setTimeStamp(0.30478626390032726);
    msg.setSource(44140U);
    msg.setSourceEntity(109U);
    msg.setDestination(60363U);
    msg.setDestinationEntity(59U);
    msg.maneuver_id.assign("BQLDCVELRACGSJBEMRNZPYRAJXDRAUVKYJUHKNKEKLYXNFEEKWIGWXDBHNGYSUPCZXUTAFDTTQZZCXEMGLXNYCDJBHLMOXVXVCYPUOMTTSQORSRJFEGQMQPTPUFTLPALKWKHGPWZJQKHMVD");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.6556104000911013;
    tmp_msg_0.lon = 0.0033507912508680127;
    tmp_msg_0.z = 0.2658442397327093;
    tmp_msg_0.z_units = 127U;
    tmp_msg_0.speed = 0.06097322363298041;
    tmp_msg_0.speed_units = 233U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7036210726042691;
    tmp_tmp_msg_0_0.lon = 0.1762722353268712;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("FUMWEWOHMRMNILTJYJLPRMASQQIGFKPDVCJVTEVDSJSVNBGTAPELTTZORVDISDQUUWXVBYAEV");
    msg.data.set(tmp_msg_0);
    IMC::RemoteState tmp_msg_1;
    tmp_msg_1.lat = 0.43996394598337063;
    tmp_msg_1.lon = 0.19778245906266034;
    tmp_msg_1.depth = 129U;
    tmp_msg_1.speed = 0.3605806674165245;
    tmp_msg_1.psi = 0.1582472457847599;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DevDataText tmp_msg_2;
    tmp_msg_2.value.assign("ZRZLMOGQBVAUKJWVKPYENODWRUSXBMZYCDZTTXPFUPKXTNWIZUNTQJIGVNNHZHKPBAGEBVBTRPFSZGSCNTSCPLQCCGIAGEDJICFGKNALQYMHCZKQKJWJLLAKKHLXWRKCIFMXSPDOIJSSLYIBGLEOMDVQBUASHXFVEDWMUUSAYPPDQIHJXBBICYWMTMOMHQDVZL");
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
    msg.setTimeStamp(0.8464061162170933);
    msg.setSource(28949U);
    msg.setSourceEntity(8U);
    msg.setDestination(24854U);
    msg.setDestinationEntity(41U);
    msg.maneuver_id.assign("MPSYAZAWZQJFSLEQKLWDGAUGYJINXLYMFDMIFGMOPNCEAWSYTQGALJECBXNTQYQUVXVRMWQOFJU");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.7577765548912042;
    tmp_msg_0.lon = 0.6004367817988455;
    tmp_msg_0.z = 0.54352576015479;
    tmp_msg_0.z_units = 75U;
    tmp_msg_0.radius = 0.43367491702562333;
    tmp_msg_0.duration = 39415U;
    tmp_msg_0.speed = 0.9327949134287838;
    tmp_msg_0.speed_units = 160U;
    tmp_msg_0.custom.assign("XAFFHUMJOUFXBWWEUDPVDLWKYSIQKKFSRBDOPPTJUTBDYRBGIAT");
    msg.data.set(tmp_msg_0);
    IMC::QueryPowerChannelState tmp_msg_1;
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
    msg.setTimeStamp(0.9136189786774087);
    msg.setSource(38191U);
    msg.setSourceEntity(69U);
    msg.setDestination(40418U);
    msg.setDestinationEntity(226U);
    msg.source_man.assign("LXQJZGOUEXTNDATSFFWKRLSEQHFNHAESUPCQHRAGBQESPYWUKMQCYJUNZHETLRVIJXCOTMLNMZZZZQCQAYITOAWXIQHEDKVPRFPUGDMAMLYISNROGBYWUSNDLIHDLNFWCDGDKKEVPZYFOEOUBXYAOMYGGFXMRRXOTRENAGJBNUTAKEJPBIPYBVHJPWZJXBDLKIIKCMSJRSWIMJIWX");
    msg.dest_man.assign("PJUPJRWTZZVHTUNJNHRRHLQHCXMAPCBLGNFUKHCSQGAUWSAMNWWXMFYYDOBHWADTKPFTMZFXODGIOCSIPYQLZRGQTVFGEBYVBVDWSGTPXOYJOSAKXBEJAXSJZARTENIDJCIKTUJLFAZYKNQFSYBCEGVALXCTMDQCKBIDLIQBGRNUCUSQNHFVZBPEVSMYOPGTOWEPKPUWCDQOZHDVOQUNHFEVIONMZKLEWKLKYVJIBWEJZRGRS");
    msg.conditions.assign("WQAVUZEEZKQOTSBEZRKJQZPRTXUQWBKUTONXKSILKROFTJZOJLYBULVLEVUBKXLNTMIIJCWBASEZFQIHAFGHO");
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 232U;
    tmp_msg_0.id.assign("VOIBWUPJKVGOFTDUABNQPWAWEOMYONIJJSRYNKBJTNFKTQVSGDDYFPNUHZXCIMEKJLSXELMVAJJBFFQWMXLXTCOQPUKICQRGJXYFINMOXCRDOVRMCOLQTPYYILWSQUUAXLGCBXAUTSKBGQERNYYMXLGPDEHEVLLACIMNKKREZKFREZJPAZZRHDNGUCZPHZLSMFBTWHBZROAGVUHTPERCGGBQVVBAMPNXIHDITJOD");
    IMC::DesiredHeadingRate tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8575233091604242;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7405261199278427);
    msg.setSource(49841U);
    msg.setSourceEntity(14U);
    msg.setDestination(60690U);
    msg.setDestinationEntity(212U);
    msg.source_man.assign("GVZMZNOBCVQBJYQDAEXKDUNZFKVRVUVVALOGMBQWCBZHPJVAISCUBTBMHMHPHIMWFPFEORMSPYSDVGCYLDUOJLOKIWMJXQUXUTCBMTCDEHIFGDZPWEKSOTZEZAYKKATGSAWCLCIYFGQZELJFCQHFKSIVESGRJNTQUMPKLYIWRX");
    msg.dest_man.assign("UXIVQPMBTSMQPOQVRBGYOCLNAOOBSAFU");
    msg.conditions.assign("PVMYQUTREEERJAKKNPDBXOHQWSBADIKMJUEOTTYLHWSYIOCDGEINIAYCGQPMBVOJGLSJEDFWLKUONVJYIRFQHNPQZUXWMJLPPRRSTPBQRTJDLBETYPHZRSGGRXCKSWMFAXXXOHHCSXHBEVAZFTW");
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.6529707830362173);
    msg.setSource(3918U);
    msg.setSourceEntity(219U);
    msg.setDestination(9257U);
    msg.setDestinationEntity(7U);
    msg.source_man.assign("YYNSOKGNICEFBJPDJWTCRMGRUBJWEAHIFADXGUUTKONXCTMHXBJCWYISHQVZMAPWMKOHGTTMVFRREYHAXIMJZSNVSARP");
    msg.dest_man.assign("KRSGHVJBDGTVYJNVVSZAHFDKLGVBDXHKXEBROOFSPGWNDRHTOZCFYPSUQYCABHIMUWOOZSIAIWCVALSBLAEVIDQEHHPNBOSTNIPRFRCNCGHKZCGBBPAJPWJMESOVDBUQPXWSHNULUWIJGWYEZFYEMLUFX");
    msg.conditions.assign("CRVHXQHELYDOYGJSDYIOZEPPJQVEVRBZ");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 75U;
    tmp_msg_0.error.assign("MXPONZFZNDQEMGRKBRPVSETCEWATJWUTPUEHIJIKU");
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
    msg.setTimeStamp(0.2786910416612668);
    msg.setSource(3055U);
    msg.setSourceEntity(158U);
    msg.setDestination(41759U);
    msg.setDestinationEntity(206U);
    msg.command = 171U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HVLJUPXVRPLTWGSFQUUVFRAWPFXWDB");
    tmp_msg_0.description.assign("YDKESIROMFEJAHDSBUWXRTONVOZRHCHJIEXCDUZLDRJNPZUPPXNKFNBGCNVIPAJDZJLDBPVZTCRKBLHWQLAYFVSEYLIKKMMEXWQLNLIEQGZOJLQBVSPCQUHPFYPJYDHYUWJMZGADKAPVJQSGXLCFIDQVF");
    tmp_msg_0.vnamespace.assign("RYTZMZMUXHDLNKNMNPBNHCTDRPJQFMFXCWCSJIAGXFACJOWVDLWXRTRICKYIVXQQYZMITBJZZEBDPSSYSQZGOTYDEBNGPSKZVOYKGHQSAUBOVVUDXARWULGWMPINXDMZVJBHVHPSSLJTSGVOTGWALUHCYNXFZPPARBPHQPAQULDFREGJKCCILAOXYMGNWGE");
    tmp_msg_0.start_man_id.assign("NZCJHNAFGECRZZQCEUWF");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("HXDELTZZYBLGXMPHLNOAPIFLHJOWQYQJUOBKAGSDTYIKGDSJNLKQCTTXQZKMKSLUBYTAGRLPINYWHMZMNSXUMHACLPZFUOPRJCZOKEUTEXBXMJROJOUZTYRXUDFQBOVVMXHKVMIFHWCNEIBXVKAFWAYZPVBPSWQ");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 19510U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("LZUDUQEYJIGJLQHDTNUCAMHOIOZAZYVXDMYQXLLBYWQSLWDUBMCVYFPSHMGAOWBEZRLQUENTFEOTDIKKKPDKGKWVMBHMRKNQOXZIFFIHDJUGQFBXVLQNPMIRORFRAPSSACHPSBUEARWAZPNJASNSZLNCISKNMSWPVWEJWCIIMTJIEOHEFSVCBLXKACVWCYBHLXXUQZPYPXGTTOKGRJFETYHGOYGKPDOBBXJVXTTGHQZMF");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.name.assign("YCVDAXOEVPFPDQTTQGTYMWYWVRPHSMJSVXCONPPGNICDLSQYIDAHISFJIEDPZYBHJGLQPKYOTRHCAZHTPNQGSBMKNDRTUVXOZGNDIBIXIUXJEKWLGMQ");
    tmp_tmp_tmp_msg_0_0_1.value.assign("BGZKWSOFLEYIJCIZTRTKLBOANPSRJECQUGWPGVLDAQLXFKNGMWGDNQELJWRYWFALFSAPYX");
    tmp_tmp_tmp_msg_0_0_1.type = 128U;
    tmp_tmp_tmp_msg_0_0_1.access = 130U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VWEGCSNSSAFRYBEDXLWWNNWCGABXZJDXLJVTEEKOUUPJPIMOQHIQTGRVBIA");
    tmp_tmp_msg_0_1.dest_man.assign("EJPIQNRODYNQGBEASXPXTRASAUSKKINJNFRZJUTZYHLBXALCOUAVWFCGRGBYEXAHMXDZOOSKABUNDHBLZMHXUVSVDGBDYWHZGTRPHROJXPIKYPOAFWCZYTEMQQHXIHSHVGEVTZJQEFITMGVOUCTCLMJRPHTKDFNRMMINFSZOWRJMPVIWDIEGNVYWDYCLLCWQBKFQLEJCVFYGPEBTUMCKQXYLEFBABUJSZJSLDTUOKCFUDWPKPKQORNL");
    tmp_tmp_msg_0_1.conditions.assign("YENMLUAOHOEODLMIFMUMLJVSYRQKENBTCESGPX");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.4663156546634941);
    msg.setSource(62560U);
    msg.setSourceEntity(53U);
    msg.setDestination(9916U);
    msg.setDestinationEntity(47U);
    msg.command = 36U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZROBBCZGYIYATBQQJXSYXBDGMSZMXIMPRNEELGBKVEYTGYQHLAQVRWTBMAQFUPTZNPPIYYGXFLJWCSJZSZDHLEYIFUUWSAJOMHFWGDPZVINXVFNXNVTHN");
    tmp_msg_0.description.assign("SGWEWFCULYCYGRNHYTXATBMGQJAAQLZQDEXMUWHZKYVNHTJXFOHPRGLNTOEXUPMFVKPHZUSNZCEASPDVEEEJNBSIZZHVSOUVLMATOQPBSCLIIKJSGGQRKUJYZRDWIMOFOUGPTVQIRWCLRXCHNTDZXRLYJUXAJF");
    tmp_msg_0.vnamespace.assign("PMLUEIRUFAREYEJDXQXLFBDHZHWXDGGJTDIIFWYANIJUYSQNNWUSTQYVOXZPJELHCONTJFJUOQH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JIZFRFMLMMIBMVNENSAWHKFWBHKGCBNTBYEOKYNMWAPDHCIXRQTIJUZMROPQLRTOFATFHEWJFWCKNIEBJANZXDCDCKPW");
    tmp_tmp_msg_0_0.value.assign("ZKCEGUUXVLTFMRWCQHJDGLQPBHAVCKY");
    tmp_tmp_msg_0_0.type = 163U;
    tmp_tmp_msg_0_0.access = 165U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TBCFWAHHNMARHZONOSCKFENITKQD");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("XCOGBOHRLUQQMRSDXWJNNYYCFAXQTKBLVHUFYXANEQZZZQEEIOGDIKLASXVJDUPPFGQDKYTTWKAIMARFVRPCTORSRALDVASSPZWMLVHOZCWHKUUBK");
    tmp_tmp_msg_0_1.dest_man.assign("SOXIIQELQFWUKGECTNKFRNDUHQLMMQWNXZPYIBTAAHRAUWJDMTRBEZOVZRTDMPJNZYCQPPNCLLZIWFCJJCWFBJMWBYPES");
    tmp_tmp_msg_0_1.conditions.assign("TGEUALEMZZVMDJIPYHNCXWKDULBIRBDUKOXPBWTGQOWECGWG");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PathControlState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.path_ref = 2603238738U;
    tmp_tmp_msg_0_2.start_lat = 0.2948973950664071;
    tmp_tmp_msg_0_2.start_lon = 0.7965752595221021;
    tmp_tmp_msg_0_2.start_z = 0.002520815207963434;
    tmp_tmp_msg_0_2.start_z_units = 40U;
    tmp_tmp_msg_0_2.end_lat = 0.5872862175279671;
    tmp_tmp_msg_0_2.end_lon = 0.005744574356945309;
    tmp_tmp_msg_0_2.end_z = 0.1441927503160343;
    tmp_tmp_msg_0_2.end_z_units = 143U;
    tmp_tmp_msg_0_2.lradius = 0.7331975477740991;
    tmp_tmp_msg_0_2.flags = 78U;
    tmp_tmp_msg_0_2.x = 0.38321256336456244;
    tmp_tmp_msg_0_2.y = 0.6371824209437758;
    tmp_tmp_msg_0_2.z = 0.11561536442353582;
    tmp_tmp_msg_0_2.vx = 0.49128419529496037;
    tmp_tmp_msg_0_2.vy = 0.18072146576984205;
    tmp_tmp_msg_0_2.vz = 0.15313106510007368;
    tmp_tmp_msg_0_2.course_error = 0.14152281570071001;
    tmp_tmp_msg_0_2.eta = 46778U;
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
    msg.setTimeStamp(0.5649997985160564);
    msg.setSource(22867U);
    msg.setSourceEntity(235U);
    msg.setDestination(16006U);
    msg.setDestinationEntity(159U);
    msg.command = 97U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GCATXFKWJODFGGHSZMYVYDPLVXIZEVNCSLDIUUATDANTCBGCCXKUSVYBJTNELNRPGUQZEHJQYHRFMEYXZPMHIVTUJAHKNELQAFFZEOSO");
    tmp_msg_0.description.assign("EFZFBRUKPVIXLDFOTHBYLVWSRFMAZBMMKGVKWOSUYXIEHXTPJCDSPRNHOOAYYAOERTJDMXLUMMRAJUGJNUNNGDIHTZNQXILWVFGUECUPIYBQWMB");
    tmp_msg_0.vnamespace.assign("DMZLIMIRNVMKUBBFFUEVEFIJAKZJWCDTTYWNYVWPMYGZHEBEDLACCQARFQEGPGWMJJOSZCYPUASBWPXHSSORNFPTVWQKVOLLYNVHOGBQASCNHIDXDUPIZXQDFDOIGXKMTEQEPQKCBINUKRBWXEZGNIJFYHJAXRPLCXKJYHSLJJOPWDCNAJGTRKHFCBYVVUOEWRSMVYMLEZWTNLHKZARXSQRTKVLDGYMXTXTFLUUIUSOGASUPOTZCQZDGQ");
    tmp_msg_0.start_man_id.assign("ZXRXAQAEXDIYXSYUWTQCCVTSAATVVEWIQZWLEMDNOHGGKVRETFBKFRMADMOVECIUQAAAPTLICIGGMFNGHHPBPTIEFOPWOQJSIVJEKGFRWQKHXPPTNHFDBEYKMUYCXFOIAYXPCFWJYGTYW");
    IMC::IridiumMsgRx tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.origin.assign("AWVJHHBQTWGGUUFZLTYBWOOJZECVSJKWIWYYBDVNOPIVMNWEUYWPLYVHGPVABJEIMKHGTBDSVQXKQRQEKGDAHNTDLCACCUOJKNOISZLXEAFFYRNRFOOYCMMNXXNTKARLFQGBCKEDMNMKIQFQADUPSUZNHLSZKROFCYAODBIZSUADRTGXRZFMVHSZE");
    tmp_tmp_msg_0_0.htime = 0.4308008273668549;
    tmp_tmp_msg_0_0.lat = 0.4874309189422237;
    tmp_tmp_msg_0_0.lon = 0.6324729545906347;
    const char tmp_tmp_tmp_msg_0_0_0[] = {0, -42, -125, 55, -7, -81, 24, -44, 86, -113, 64, 54, -122, -28, -24, 64, -127, -124, -9, -9, 31, -128, -67, 61, -52, 75, -105, 108, -119, -82, 78, -3, 22, 102, 91, -30, -108, -95, 105, 75, 51, -88, 120, -75, -39, -86, -14, -5, 116, -37, 24, 57, 79, 73, 66, -40, -28, 118, -77, 48, -85, -38, 58, -41, 87, 54, -18, -104, 77, -97, 22, 26, 6, -56, 79, -39, -84, -57, -73, 33, 84, 86, -85, 45, -101, 94, -128, 68, 84, 63, -9, 16, 55, 1, 116, 113, 103, -63, 32, 42, -100, 34, 36, -30, -56, 122, -97, -30, 73, -86, 11, 85, -31, -60, -78, 98, -103, -6, 33, -15, 56, -77, -110, 55, 84, -17, -11, 10, 50, 17, -70, 72, 12, -44, 78, 16, -96, 18, 84, -93, 18, -18, -46, -60, -92, 104, 6, -35, -84, 27, 80, 123, 122, 10, -38, 96, 42, -120, 103, -42, -44, -71, 18, -111, -85, 83, 107, -59, -3, 58, 16, -52, 89, -62, -49, 56, -60, -102, -24, 45, 87, 113, -106, 90, 72, -6, 76, -119, -52, 8, -56};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::FollowReference tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.control_src = 43741U;
    tmp_tmp_msg_0_1.control_ent = 143U;
    tmp_tmp_msg_0_1.timeout = 0.4031363724958982;
    tmp_tmp_msg_0_1.loiter_radius = 0.13686169733838194;
    tmp_tmp_msg_0_1.altitude_interval = 0.47145265150996396;
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
    msg.setTimeStamp(0.1688156438032138);
    msg.setSource(24783U);
    msg.setSourceEntity(178U);
    msg.setDestination(32406U);
    msg.setDestinationEntity(84U);
    msg.state = 221U;
    msg.plan_id.assign("AKMYDHJMNLFZCTMGAGCFFUAVPSGTTWEWGKBFBNHKVQBVODSCQURFUMENJVEYMZZNPXTEYCKTRGHCMSGCSAKYHQCSIEEWVDYKQXPFONLEASBAILYTBFWHPWZIUABITEGZJOLXNZBRZWJVODMUJGPLVSSYQIZDVZIFRAKK");
    msg.comm_level = 9U;

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
    msg.setTimeStamp(0.8025735156539464);
    msg.setSource(7534U);
    msg.setSourceEntity(50U);
    msg.setDestination(22709U);
    msg.setDestinationEntity(178U);
    msg.state = 120U;
    msg.plan_id.assign("EEBHNQKSTPGCKDMWCXNKGVJRJOSOCPGRNAOWILAFOVJUMBSDHKOOWBZJYDMRDTYBJJNRBYWDGMVMTNJEGXBURTGKQYQINPFZSFAUCLMMGVZODLYAVUTAHXNIBPKHOLQRZQCMUIPDZEKUFLEUXNYIWWJPTQKXDIIFPCVPPZISSNHVXETBXRZZLQURXAFDTYMYJKLAZLELWEQS");
    msg.comm_level = 79U;

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
    msg.setTimeStamp(0.9089459482312584);
    msg.setSource(28670U);
    msg.setSourceEntity(159U);
    msg.setDestination(63562U);
    msg.setDestinationEntity(194U);
    msg.state = 65U;
    msg.plan_id.assign("SYLNXWDQSZPIGRZPASCNDCOWJBBDWNLVRSRTTGSTTOHZNQGSPUAXGYKQBHFHMJHJXXCGGZWAKDEQOIRWSGKDSEBGWMNLLXWUKEUIIFKNYRLZJPEXJZQXHBYYFDWEUAYEPKMXCZYILUMTKJOTZXFCPALJUACUVORZQMTDDLQMBRQAHKFNOEUHGNUCCJVQPFEPVBERKICMLRILADHNOPIMENOVMVAY");
    msg.comm_level = 219U;

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
    msg.setTimeStamp(0.8232827950555952);
    msg.setSource(40289U);
    msg.setSourceEntity(90U);
    msg.setDestination(48529U);
    msg.setDestinationEntity(111U);
    msg.type = 107U;
    msg.op = 9U;
    msg.request_id = 17283U;
    msg.plan_id.assign("WCJFPIQZHZAMUGQPXRQMGNWUEGRUPFORXKHLIAORKZVIABSBGIXNXUOPTQVDSCBZYHEWOZHKFJSADPVTMLWGLHTLVGDXFKIMJLQYAPXJPXHBMNUDMA");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 209U;
    tmp_msg_0.tas2acc_pgain = 0.1335443562026365;
    tmp_msg_0.bank2p_pgain = 0.17254336370255097;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NTNWAIRDWVRWCRVDDGFDXGBTYSYEBOOOQZJHSPLYYAZUXHLBIIMFQXUUKCNHLMMFISVXAJLLIJOWLRXUNMERJPEXHFNRTZTFGQPZBZLZXGNKOOTXQVATEDOPSBXQMCCXAKJIMQLWQESCBHZTNGKQDERKHNCRVHDJGYRZHSRKWCAGCESWFTGJPSOIJMMCUCWFYUZBZVEFUYOGE");

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
    msg.setTimeStamp(0.4360715545562327);
    msg.setSource(60205U);
    msg.setSourceEntity(95U);
    msg.setDestination(13616U);
    msg.setDestinationEntity(195U);
    msg.type = 141U;
    msg.op = 111U;
    msg.request_id = 11395U;
    msg.plan_id.assign("DGNNHSTIGQAVYTZBYU");
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.9070587554468901;
    tmp_msg_0.y = 0.4274662687971885;
    tmp_msg_0.z = 0.5780378198008985;
    tmp_msg_0.phi = 0.5375823809296897;
    tmp_msg_0.theta = 0.43318685547161306;
    tmp_msg_0.psi = 0.6439101852202528;
    tmp_msg_0.p = 0.7501730661906225;
    tmp_msg_0.q = 0.5910224729238114;
    tmp_msg_0.r = 0.19617222639013165;
    tmp_msg_0.u = 0.9479645541502855;
    tmp_msg_0.v = 0.4334748343156811;
    tmp_msg_0.w = 0.9972754151515966;
    tmp_msg_0.bias_psi = 0.37210097024403865;
    tmp_msg_0.bias_r = 0.927347851726628;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BFKAHJOEYPTPQUOUFKUSXXPNGHMOXTFYNRMSYZNMHOOIPZAPGKCBVSTDASGVQWY");

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
    msg.setTimeStamp(0.0403767707252215);
    msg.setSource(61233U);
    msg.setSourceEntity(23U);
    msg.setDestination(43446U);
    msg.setDestinationEntity(75U);
    msg.type = 206U;
    msg.op = 18U;
    msg.request_id = 6643U;
    msg.plan_id.assign("EKOSCLZBVZUFVQKCTNRVHJCIGTSCLBLLADMUWSHMRDPIGBHFTXOVXDTAMTVWVBQZOJSHWRFYPOJUQWVPBMVXAOCPNBXNWNJGMPSYIIWZQARNLDHGFRKSWJLQFMEKGWUOPAIYCAXNYSVRXXHSFRKKCQDIEPHUZOIEDEQZSYMXZGPKWDICZEOVBOEKJBFIFAMHQTCAKLX");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 136U;
    tmp_msg_0.text.assign("ENCBDYXFZNQBPMWJNRWUNUPPXQJEIDHKDMRKDYMGPUQMFZRBGRWPSYPVJOHVQAEOEAXZARUUKBZRDCOCTTCNUOIFEJCYFTXEJTAAHEXTQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MYRMAZBJCZOQVEYQCQEFFZESEVCZPNMJUPJNOICDZIKMLMWTPAAAVIQUPXNGHPGTVGPJKUTBXARIXDAHX");

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
    msg.setTimeStamp(0.9855177459571323);
    msg.setSource(1664U);
    msg.setSourceEntity(70U);
    msg.setDestination(41068U);
    msg.setDestinationEntity(47U);
    msg.plan_count = 11529U;
    msg.plan_size = 2590546835U;
    msg.change_time = 0.9059875130323454;
    msg.change_sid = 7260U;
    msg.change_sname.assign("JDHLDJDDOINSRXIDPKAEHDFLQYUHAMBVYUJPSJIZEFVTUEYBWZPQLKGOOHMCKYTGNWNSMDEKZCCIZLZRPPAHGLLAAZQXTS");
    const char tmp_msg_0[] = {20, -47, 82, 118, 65, 47, 72, 25, 28, -24, -80, -88, -108, -32, 74, 4, -42, 15, 45, -14, -126, 42, -5, -61, 46, -34, -94, 81, 30, -62, -55, 17, 96, -6, -87, 71, -95, 12, 108, 47, 120, 20, -9, -42, -14, 80, -80, -102, 77, -119, -114, 40, -102, 111, 1, -111, -59, 101, -117, 109, -43, 32, -18, 47, -116, -60, 13, 119, 58, -81, -52, -90, 61, 88, -89, 109, -99, -123, 15, 37, -3, 54, 35, 24, -93, -35, 38, -114, 68, 33, -125, -5, -34, 0, 54, -78, 14, 124, -115, 116, -87, 5, -25, -105, 109, 40, -89, 112, 56, -4, -9, -62, 87, 23, -124, -101, -119, -90, -39, -91, 0, -14, -69, -7, -20, 68, 13, 106, -58, -40, -21, 69, 30, 35, -17, -50, -109, -24, 77, -35, 0, -14, 88, -51, -111, -2, -34, 109, -49, 57, -32, -122, 76, -127, -5, -93, 109, -50, -102, -112, -123, 12, -62, 67, -2, -114, -126, -124, -98, 112, 7, -87, 55, 57, -50, 87, 63, -101, 23, -64, -1, 118, -87, 115, -68, 86, 30, 30, 84, -6, 3, -96, -124, 18, 108, -112, -19, 48, -57, -97, 82, 33, 11, 56, -98, 10, 19, -68, 35, 110, 116, -74, -9, -104, -102, 78, -104, -99, -73, -80, -72, 45, 29, 83, 23, -40, -73, -62, 92, 52, 121, 109, 16, 77, -24, -83, -77, 105, 23, 104, 117, -85, 126, 54, 112};
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
    msg.setTimeStamp(0.017659595444961984);
    msg.setSource(63246U);
    msg.setSourceEntity(4U);
    msg.setDestination(20326U);
    msg.setDestinationEntity(172U);
    msg.plan_count = 20287U;
    msg.plan_size = 2630981847U;
    msg.change_time = 0.7606731956350796;
    msg.change_sid = 37147U;
    msg.change_sname.assign("KWBWHIJPFTICNILENZLZPOSTUCBDGVHNSXNZFLRCHDFMSXNKTKVVXGESQDUGUMZEKWRRJJLJXYYLOE");
    const char tmp_msg_0[] = {-58, 99, 94, -128, 36, -50, -86, -102, 58, -119, -18};
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
    msg.setTimeStamp(0.5850877238437795);
    msg.setSource(5853U);
    msg.setSourceEntity(48U);
    msg.setDestination(8473U);
    msg.setDestinationEntity(229U);
    msg.plan_count = 48864U;
    msg.plan_size = 4251377588U;
    msg.change_time = 0.35100804746515313;
    msg.change_sid = 53110U;
    msg.change_sname.assign("JULEKZYYHBCUBASBIKQJUXNYLTYWBDOSQIQDQETNSPIALUDAVJLMNHRELTAYPYQMVMGB");
    const char tmp_msg_0[] = {49, 34, -80, 36, -114, -2, -55, 92, -90, 82, -7, 40, -17, -5, 36, 97, -94, 26, -54, 94, -87, 97, -30, -124, -47, 112, 68, -109, 73, -95, 89, 9, -9, 96, -88, -67, 108, -124, -61, 9, 101, 26, -28, -35, 4, -51, -62, -69, -48, 17, 36, -29, 41, 107, 31, -34, 75, -113, 103, -15, 123, -57, 102, -76, 106, 18, -99, 102, 113, -40, 120, 105, 126, -96, -111, 111, -54, 24, 109, -26, -21, -43, -1, 72, -8, 73, -19, 3, -44, 53, -85, -30, -71, 116, -65, 98, -67, 80, 119, -103};
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
    msg.setTimeStamp(0.49645564224818506);
    msg.setSource(13393U);
    msg.setSourceEntity(40U);
    msg.setDestination(63551U);
    msg.setDestinationEntity(167U);
    msg.plan_id.assign("WKHIMIRPSGWUWBDIVOUY");
    msg.plan_size = 49947U;
    msg.change_time = 0.6139638272829311;
    msg.change_sid = 3143U;
    msg.change_sname.assign("UZZJHLPAOAVNUMNPJZHJUOBSHRLCHXJCQHGZSUEIORPSWPOQHIIDRHDXFMJRBUNETSOGBSRFTVCITYSGESTNRQZVEMGFWLWIJLTQMXYRLNIKNFFRDXEKAVLKQMYCEYMDAKBVETYTKDXNKOAWJDLYFYKAGMVTDNJTCPSBCVUBGMJXYDCXEGJWWZQSQPIKBWAOEPXHCIAFWZZ");
    const char tmp_msg_0[] = {42, 3, -48, -6, 16, 98, 56, 2, 37, 105, -64, -71, -57, 66, -14, -62, -29, 19, -122, -25, 47, 27, 74, -6, -108, 86, -96, 60, 88, -97, -8, -75, -7, 96, 24, 29, 57, 10, 118, -44, 92, -52, 80, -47, 42, 12, 85, -117, -77, 91, -112, -38, 2, 74, 125, -46, 32, 57, 62, 21, -83, -97, 98, -115, 3, -106, -56, -42, -80, -69, -37, -11, 57, -36, -121, 49, -14, 97, -36, -45, 29, -6, -106, -117, 13, 43, 56, 111, -121, -117, -88, -11, 84, -54, -77, 67, -86, 102, -127, 61, 78, 59, -79, -4, 31, -71, 51, 53, 21, 69, -47, -33, -100, -119, 84, -99, 122, -47, 109, -47, 106, -10, 1, 102, 120, -120, 86, -67, -36, -101, 64, -57, -73, 78, 88, 76, 62, 37, 6, 52, 81, -99, -95, -44, -32, 27, -111, -2, 6, 118, -83, -23, -61, 41, 57, 57, 26, -111, 72, 76, 41, -32, -63, -11, -125, 121, -23, -111, -6, -25, -53, 24, 5, -121, -114, -20, -73, -7, -36, -78, -76, -109, -57, -105, -93, -54, -39, -32, 20, -85, 28, -24, -96, -29, 65, -83, 18, 33, 10, 120, -20, 83, -101, -2, 48, 3, 114, -2, -5, -74, -19, -64, -44, -77, -67, 114, -11, -20, -80, 7, 116, 5, -6, 46, 26, -30, -90, 59, 30, 64, -73, -43, -3, -37, 84, -62, -53, 51, 14, 121, -11, 103, 100, -89, -95, 40, -76, 120, -98, 31, -40};
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
    msg.setTimeStamp(0.6012961351449114);
    msg.setSource(44059U);
    msg.setSourceEntity(153U);
    msg.setDestination(29141U);
    msg.setDestinationEntity(238U);
    msg.plan_id.assign("FBHUTYHVTWQHHWULFFZQSLXTLJYOWTIRURGWCMFBFVQQJOULNDZNBPSNANUYSSIZEOMXAIMLZHCCHDWDPWQTJVWRIZXTDCVUSELGXSMOSSTJOZQWKVMCWMABIIRABRYSCGUQYGBPUYGMPQDOUNHKIRNDVNNAKOJXPKKEVSMLRARBQFJPYDBFEHFBFJMNYWALICDBKYVCKNEGKZJXGEELHOEAZMDXPFVPUOKKPHEQCZYTXAGVTEXATPCOLGX");
    msg.plan_size = 28567U;
    msg.change_time = 0.2749707876808076;
    msg.change_sid = 38200U;
    msg.change_sname.assign("QPZNNRKILSJZPAYJSDYWMVOVUWWEIJXJJDHKTWIZVGANHPCMSSGZBWHBMQWOZSMXHHDVCCGRXMWKAHHXOFYDAKDYGLERTTMKYQRLQSCFLUOVURCEVYGUBQEMIYPWLZBPGPFVJLQOPLXYGLTTJCVAJZNKDZZLEDRXTELFUAQQBKFFGBJXMZNBFPISUTROXPNTEPOGKRKAAXKUCORIDIXGBWHAMSNFYCJUIISNEBDETTUCHVESR");
    const char tmp_msg_0[] = {-106, 12, 83, -115, -88, -48, 19, 105, -13, -96, 51, -124, -84, -36, -112, 73, 95, 43, 74, -48, -12, 87, 71, 113, -112, 8, -67, -121, -7, 53, 30, -10, -44, 55, -12, 60, 121, 124, -31, 82, -24, 71, 94, -26, 76, -44, 114, -89, 26, 99, -63, 18, 2, -67, 26, 62, -64, -109, -77, -75, 43, -49, 62, -84, -44, -35, 78, 123, 113, 126, -73, 6, 43, -108, -35, 117, -9, 64, 124, 8, -42, 84, 22, -78, -74, -127, -13, 120, -12, 76, 120, -101, -56, -71, -123, -105, -59, 76, 73, -79, 64, -11, 63, 30, -104, -42, 91, -124, -85, 40, 67, -113, 117, -80, 104, -13, -25, 36, 63, -90, 0, 14, 118, -52, -80, 1, 0, 3, -120, 113, 57, 35, -6, -59, -42, -82, -31, -92, 119, 54, 13, -32, -98, 124, -93, 103, 27, 46, -26, 58, -92, 64, -65, -5, 1, 92, 26, -25, -37, 90, -13, -72, 79, 41, -65, 71, -124, 89, -51, 52, 31, -94, -67, -98, 126, 13, -41, -28, 85, 95, -110, 45, -46, -44, 98, -18, -109, 22, 47, 87, -14, 54, 104, 73, -41, -78, 87, 29, -25, 47, -90, -117, -8, -4, -58, -17, -95, 89, -124, -2, -82, -48, -59, 85, -117, -66};
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
    msg.setTimeStamp(0.6631440098659508);
    msg.setSource(41899U);
    msg.setSourceEntity(91U);
    msg.setDestination(24177U);
    msg.setDestinationEntity(46U);
    msg.plan_id.assign("DWLFMBEMWTDITYAUMAFUHMSKSHVVUKQBCKAOKXDLTQSXSIQBFFOFYWQUSDTRTRJAXCRIKWISUBOZGLQKLDOPHWLBSZNZZRBMJYNGPRPZJGFEPBCYIZHNWJTQOZXXTCTOVJEIRBHFXECUNJRVMFUJRLCAVKSYNHCESNPVMAVRQOHIPEQUXYVGCWJGLYATXBFPYLPVUXWMPKGHML");
    msg.plan_size = 50589U;
    msg.change_time = 0.33522469681009903;
    msg.change_sid = 56917U;
    msg.change_sname.assign("YLNELVGKQAJQZBAQIEHUKSJVKOOMYBFWPLZNISJXTUUXMHUZRDRXIEHFJNHNYSPMLAEUZVRDWVTRMHXGICVYZWWNOCMDPCRBIGXDMRKWKITGNFZLEQYYFDIDFAEFSNESXSFWOVQLGBBTJWMKVWXLGVHPPRCBXNJZGGGPS");
    const char tmp_msg_0[] = {64, -66, 57, 65, 20, -73, 45, -28, 119, -112, -11, 97, -53, -25, -74, -51, -63, 49, 17, -8, -122, -106, -82, -81, 35, -125, 28, 64, -95, 40, 60, 77, -43, 112, 61, 84, -103, -102, 61, -8, 7, -35, 120, -127, 120, -126, -68, 58, -94, 34, 89, -14, -79, 78, -71, -41, 44};
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
    msg.setTimeStamp(0.8900944939257797);
    msg.setSource(38979U);
    msg.setSourceEntity(107U);
    msg.setDestination(37371U);
    msg.setDestinationEntity(53U);
    msg.type = 15U;
    msg.op = 199U;
    msg.request_id = 12754U;
    msg.plan_id.assign("QVMWHAYHTSVYOQMUNIV");
    msg.flags = 43858U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 30263U;
    tmp_msg_0.rpm = 0.2787969656791838;
    tmp_msg_0.direction = 2U;
    tmp_msg_0.custom.assign("KUGMRAVWWBNRAAHLPPVKLFDONBOSWAHWTBMVXZDJKGEUZLXYSXEVDJIBFSRQHU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PIBHFEQLUBBUETFVNWBJMQFXEALFHCGOBNPRYLGTMYNULHEGODICXKTUXQVTDDDAFTKQSSRVTKFYJPSVKXDLNMXJMQX");

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
    msg.setTimeStamp(0.34966498577158345);
    msg.setSource(8598U);
    msg.setSourceEntity(14U);
    msg.setDestination(49116U);
    msg.setDestinationEntity(37U);
    msg.type = 243U;
    msg.op = 9U;
    msg.request_id = 61774U;
    msg.plan_id.assign("HLIKQJZGVLZHUHAWSMAGDJMGEACKXELLFRLJKZTSWXBKMMSJVZEJFURWVDABTSOXBAPQMOZXTJPSQFXBHDHUPJEQCLADPSIHZQEIPCORTDBKFWYQGCASPRIQRIMITOCRMVONAUSXWCAYZIWNTWYLNG");
    msg.flags = 3051U;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("CAAWTAPSTOUHAHVXGDWBXQCJHNWFCORXODBKVUCNPFEEDIPDVTYOSCVWNFMLBCDIJEGDQAZRUPWZOSWMIBGNBMSAOVZFYOZUZYSWBKYJITQYUULLMNRGTHXVRTFXWKPHZWDTRSDIYEJTVDHNRGJKNUHBYKPBBSQEYFFZZLUSISAIKJEPCRKUPKLHHLTRVFYXQQRJOPMLCKULRXSKEGMAFQHOJNPDFQMZYCMILAWTBVNJEGIXGNMECMAZGGJI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QVRZNXFYYHVAN");

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
    msg.setTimeStamp(0.6796854756187143);
    msg.setSource(28875U);
    msg.setSourceEntity(202U);
    msg.setDestination(27545U);
    msg.setDestinationEntity(233U);
    msg.type = 247U;
    msg.op = 124U;
    msg.request_id = 11429U;
    msg.plan_id.assign("DPGXFYOIAPAIREQTPCPDWCUXUERGLZTMBDPDQXVFHFPKXUVWNZEWKWKPMYNNWRGGFMQMFXISAWQPSBRMZZNIOZIYVFOSADGLYOJAMNKQEZJAKLGDJFEAICVQGSBJHBNHJXYLARWWENEUAKUUUDNCLGVFBKHCPCQLDQYYWAORYQOCM");
    msg.flags = 23911U;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.3032212510636463;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IXGFWVNQMSGRKZFXVZDBSYNNHNRPSE");

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
    msg.setTimeStamp(0.13843912513042644);
    msg.setSource(27428U);
    msg.setSourceEntity(229U);
    msg.setDestination(28647U);
    msg.setDestinationEntity(129U);
    msg.state = 4U;
    msg.plan_id.assign("RZULQZWGBIZLFGBFYDDAVGOCPXNLVYTNJLHRLIBLKGFFOQDAIXMWNUEOAKJWPMCHETVXJEYURUZWAAPPJTZEDSNXXBSHACWYSQYVYWJOQKTHQCOGSFL");
    msg.plan_eta = -914262149;
    msg.plan_progress = 0.537604271052187;
    msg.man_id.assign("HVLDDNTVMIMQIXXMNYFUROEXARFIAUVCXIHLRCNZNYFCADJKGYRAMPZOKDWZJEQKEOWWVPIJYFTZQJCFASGHUDKPXOWEULIYDGELEHHPFRJVTPSXLLBCCGWGJYSPQKTWARVOBUOFURIMLKUOGGFWOQBXDTSBRNGTKMCEZORMACWHVTC");
    msg.man_type = 50614U;
    msg.man_eta = -1268389060;
    msg.last_outcome = 237U;

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
    msg.setTimeStamp(0.26814246521448026);
    msg.setSource(59833U);
    msg.setSourceEntity(96U);
    msg.setDestination(1167U);
    msg.setDestinationEntity(19U);
    msg.state = 85U;
    msg.plan_id.assign("PIFXYZQIJVKLSWMBDXLQGJZAUQLJPUOXWTYXXFNSTXGRIMEBWBHICCMDFAWEUROBJUNKREMZWGXORKSKFOXSHTZPRLKKEVLMRYNWZFBHHYIAGZWYANKHUUPGEHFPMANDDSDGCFCOVSCOIOPNZKKDYSLVPONHQQRBGWCXVQUQNIOBMSBLCATIJZWDISITFYYLJGGZEBRUTGVDSUBCEAJXNKQVCHJF");
    msg.plan_eta = 1920799067;
    msg.plan_progress = 0.2654922086717233;
    msg.man_id.assign("THOLZYOJKOGSMMBXUDQQWRBPNXQVYGTYDIUZEDFCPYLIJJTAXAOFDMBDPTUMCPJURGHAOKTP");
    msg.man_type = 63104U;
    msg.man_eta = 2140577202;
    msg.last_outcome = 49U;

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
    msg.setTimeStamp(0.4234772186708563);
    msg.setSource(15936U);
    msg.setSourceEntity(59U);
    msg.setDestination(4829U);
    msg.setDestinationEntity(103U);
    msg.state = 243U;
    msg.plan_id.assign("ETRHJLTMNNCGSVQYWDEHAJUJNBSDUJIBWYGOJLTDWPUKCIOMPMXPRDEMZXQYEWFEHISZUCIOQRHWFVZUPIURGRGGVVTITQFQYXTRDACOYSBHDUSBXZFYEGOKKFEAPKTLQWABPYNVNWYDPCVFIAMNAIGEZFVCMDRBPEZXGHLZOHMJCNWJXKYS");
    msg.plan_eta = 385836600;
    msg.plan_progress = 0.471297068335222;
    msg.man_id.assign("EVVRLFHLOIZKWDZPFDZSUTDVTPEYGWXVEJMZRPOEFJNQOQCUMAWVRITSUIWXXEQNABBQJQVLGZCHRNSSPMXGVHKJYLNBFJUYYDVOUJAQLROMZNXUKTPMKJLYMHNUZQRBNYYFAN");
    msg.man_type = 51360U;
    msg.man_eta = 2066978680;
    msg.last_outcome = 21U;

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
    msg.setTimeStamp(0.2184015526984594);
    msg.setSource(62711U);
    msg.setSourceEntity(105U);
    msg.setDestination(47388U);
    msg.setDestinationEntity(224U);
    msg.name.assign("DTJXXYTCHMQLSWETZTSPBUMFBVAQMJBMEJWXCNEPICRDPBYULNSXJKAQKNLOZFURULKFQTUQ");
    msg.value.assign("NEUKTFFPRAJVUNBKLNHBXQDIGQRWGIPAYHOSVQPOSKXFQRJJIUKSOPKROHMNFNGGJSGVXDCOCDJYBMSBMNVHZCXYTWHHWLWYXZJCPVITZLQPEHESTXPLUEJCHIZBNDMLWQFWLERLQWFDQXAVPBBEHZCDXTGTGIKLORQAULOXMMFYYFEZUGDBNJAOSWZDKTAWCSFRDRPTUYHSIMMUSVWUDCCUAAZTFJOMGREEYKMAIRNYCVKJZI");
    msg.type = 92U;
    msg.access = 200U;

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
    msg.setTimeStamp(0.8618465043817388);
    msg.setSource(1326U);
    msg.setSourceEntity(43U);
    msg.setDestination(17630U);
    msg.setDestinationEntity(116U);
    msg.name.assign("RKNVIJBDDFPPDLOFHEOVRPXTSUSBBIJFEVLNSNNYOEAHZCFZQTXZNQAEUUSMMDDCGSIXXPVUYBYAUVMIHHTNUYGINUVCCHKMVFRDVC");
    msg.value.assign("LQLPFFNVOEDMZOXYPLHCNERBGKQOCBEETEBDNWUMNSURVVZOQZUJPLWLDCKTKXCXUWMMHKRHGOXZGKKFZVJJQXAPLLISYHTPMISTDNRMHPYFVADIXEAKTOQADFADZWNHHSDRLEERVPZOQOGUWTQFNC");
    msg.type = 81U;
    msg.access = 181U;

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
    msg.setTimeStamp(0.2976227680140061);
    msg.setSource(12614U);
    msg.setSourceEntity(165U);
    msg.setDestination(7177U);
    msg.setDestinationEntity(95U);
    msg.name.assign("SIEYXWBHCKFZUYFRKRSLHQNNYPSVXMYDWCRMTLBGKQFWIAUATEAACDXCFVUZSTOOAWOAUMKUP");
    msg.value.assign("EZMAKZOILSIMWATZIMXQHICJUWQRJVFJGPJLOYNRWEAWMAHSDELNALLHNFWNKXOZYTOJNICHPKEVYTKDM");
    msg.type = 40U;
    msg.access = 222U;

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
    msg.setTimeStamp(0.4225758167577284);
    msg.setSource(38190U);
    msg.setSourceEntity(219U);
    msg.setDestination(34240U);
    msg.setDestinationEntity(127U);
    msg.cmd = 36U;
    msg.op = 156U;
    msg.plan_id.assign("AASPCFDFOIFWCXTJPQMZEGKMBOREWLWSUUOHKVPWSWGIGIDVTZAJMTAUTKYXXLRKFJXZAHQDDDPUTUHSERRGPFPCZUYNDVMIBHWAJLEOMUVFARBAYPQLCSLWRGWGBITCKJVOVCMXTTVHZFRXDUXZXNYFRGIVICKUK");
    msg.params.assign("KJITSBCFCBIBAKSZDIMG");

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
    msg.setTimeStamp(0.0446605164925975);
    msg.setSource(31250U);
    msg.setSourceEntity(13U);
    msg.setDestination(30693U);
    msg.setDestinationEntity(250U);
    msg.cmd = 192U;
    msg.op = 243U;
    msg.plan_id.assign("JALRLIMEQSG");
    msg.params.assign("RPWCPAIJFRDWXPUXDALKUXYHVXUWAYMOHFWUGHGGTPCXBQZIAKJAVSCNGVREUBXBSZVAEZFCNYHJPTKHSYTMVYKOZKKGAINKKNNUSZRFZSMGJNGSJFLLDYLDWPHBFYPWDTRIUHDNCRIETVNJXWSMDUZOIZQCYBBGHOOIVYHGRVTNFIWQTZOBEWQLEZJBPXVLGNXQLCTMVELOFQDJEHXKKM");

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
    msg.setTimeStamp(0.20678257097457398);
    msg.setSource(63399U);
    msg.setSourceEntity(71U);
    msg.setDestination(46068U);
    msg.setDestinationEntity(94U);
    msg.cmd = 172U;
    msg.op = 87U;
    msg.plan_id.assign("JYTDIYBYOLEMGYDHDHBLMDQJZQLFANKACVMBMIBMHHSTR");
    msg.params.assign("VZZGWLJFKMVWTSIXETOGHDOBGRYTJBIGNUHQVPHYFIGDAKSAGACBELJPKIJMCEMUOIWBHBSXEYSDZISKVMXXNPKLVHRRLTQPUDYJYUFADQTJVOONMONZQCRLRHKFPFDTUTJMRSCCYNOKJSJECPZDFAGWNLHYGXZEBVAFLZVOQAPAFZBSMCCLBRRFLSYXCUWKHMUWPGTUDACWNQDIHMXQPWYUIQNOIBKNGWWUKEBVDQHVRY");

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
    msg.setTimeStamp(0.9104953543444609);
    msg.setSource(51157U);
    msg.setSourceEntity(130U);
    msg.setDestination(43423U);
    msg.setDestinationEntity(213U);
    msg.group_name.assign("LQZXXTZWVFXOJTRKRJCVIMGEDCGKZOOISAKZLRDFMJALNGSXULNEPBGQTIQGBKBIHPOYIQMZNEMCLWYLIWKJWXHUFTHBRPAYBDADQKENYGVGUTCRTANPXMNRPSIAEVUNZLFFRITOUEMVPHRUOZKLFPFJEWDQAWJQDESW");
    msg.op = 2U;
    msg.lat = 0.8947795146819892;
    msg.lon = 0.3665988050624567;
    msg.height = 0.9460033531908636;
    msg.x = 0.37675148087088794;
    msg.y = 0.26570441430920577;
    msg.z = 0.8204840005142258;
    msg.phi = 0.44578151171528124;
    msg.theta = 0.475823542165571;
    msg.psi = 0.27245300257831173;
    msg.vx = 0.7117215513975246;
    msg.vy = 0.5068000756974175;
    msg.vz = 0.22745736624323043;
    msg.p = 0.9836812666303264;
    msg.q = 0.16491007097665344;
    msg.r = 0.6014802539497907;
    msg.svx = 0.06720980077970573;
    msg.svy = 0.08630709952342785;
    msg.svz = 0.7632751798589303;

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
    msg.setTimeStamp(0.7100307723518078);
    msg.setSource(25572U);
    msg.setSourceEntity(41U);
    msg.setDestination(65095U);
    msg.setDestinationEntity(22U);
    msg.group_name.assign("ALCGKDBYYJVGJKWIVXHFXSTBSZOEEZQRIBZAUDSNSVIXOFRFZJNVVWAPWQREKCDQHZKTBPIOXNEYTZLSLPUIDJUUVWBPPJNRKHXGGFHPASMYAOUIXRXUNHODTFLATRVDECTYKOSLDATFMARWCLRQJMQGHCQJYFVTYCHW");
    msg.op = 217U;
    msg.lat = 0.4868858619500187;
    msg.lon = 0.5750519673183982;
    msg.height = 0.053108364143891196;
    msg.x = 0.7225489869637168;
    msg.y = 0.6792544786336366;
    msg.z = 0.23481031372098848;
    msg.phi = 0.6225357088958259;
    msg.theta = 0.920755591680512;
    msg.psi = 0.7612339397528242;
    msg.vx = 0.7245338943447416;
    msg.vy = 0.3664205551334526;
    msg.vz = 0.5736512904869141;
    msg.p = 0.992296232853357;
    msg.q = 0.48239134775268866;
    msg.r = 0.9337628513508274;
    msg.svx = 0.7950226363692169;
    msg.svy = 0.6288984869170288;
    msg.svz = 0.4644861788779886;

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
    msg.setTimeStamp(0.5372944431152714);
    msg.setSource(16628U);
    msg.setSourceEntity(201U);
    msg.setDestination(6022U);
    msg.setDestinationEntity(28U);
    msg.group_name.assign("JKSYIPMTOTYPNPIGNNCIFRGRKURAWQFTDWHDWUMUGJXYJPBDAGWQTSLZAICLFZVJZCOHEXFYYTAPHBZNWLTQUXHBEKUGULUDCLASBEXSLGXBYDFXHVJTFYYOZWZZBLRBVHEBINHQMONTDGQMZKISWOKPNAAQXSAIIELEJVGSDOKSBKGSWCVNUQPYVHUW");
    msg.op = 205U;
    msg.lat = 0.08033753760727746;
    msg.lon = 0.36072837323075146;
    msg.height = 0.9356464983005457;
    msg.x = 0.8244980072525847;
    msg.y = 0.5226588438647263;
    msg.z = 0.5625630680330295;
    msg.phi = 0.8742834081651828;
    msg.theta = 0.19721244467640686;
    msg.psi = 0.1768580085956849;
    msg.vx = 0.5979209808853989;
    msg.vy = 0.19347479548818847;
    msg.vz = 0.4724218618648065;
    msg.p = 0.020419499324483947;
    msg.q = 0.8000302638263511;
    msg.r = 0.9724410385327271;
    msg.svx = 0.6710017450901631;
    msg.svy = 0.23799812036062107;
    msg.svz = 0.3383709236841922;

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
    IMC::ReportedState msg;
    msg.setTimeStamp(0.4370897674416374);
    msg.setSource(37557U);
    msg.setSourceEntity(150U);
    msg.setDestination(39209U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.45588941755983436;
    msg.lon = 0.8864494518899257;
    msg.depth = 0.5187288710321882;
    msg.roll = 0.28212831804527616;
    msg.pitch = 0.6771700715946494;
    msg.yaw = 0.027521923101826662;
    msg.rcp_time = 0.3858500338306603;
    msg.sid.assign("VUMUXXVBAYQFKAZITMORDIXSTXVROKGPTYGONQMUZZNNLQOXTKITFDJRLZUWHNNBSRKKCWCOPTSZEQHMCUPQNJHKVJPVYFUWJIKDVEWNHDPCHNCDTMQTQJBDFDKWLOBVBSICIVGMSSBYRUFFDGELMIJJWSCCLHANSWSZEGGZDGQTIAFMWGAXVYJIBLYOMKDQJOIQUUEYERHAAPXKLXRJLAWXPAFCPR");
    msg.s_type = 86U;

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
    msg.setTimeStamp(0.9677720674475161);
    msg.setSource(10286U);
    msg.setSourceEntity(175U);
    msg.setDestination(62514U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.356071723186032;
    msg.lon = 0.7877303768672556;
    msg.depth = 0.21877267020738267;
    msg.roll = 0.29431632101498295;
    msg.pitch = 0.810253970806084;
    msg.yaw = 0.41153543770142764;
    msg.rcp_time = 0.5528562328199387;
    msg.sid.assign("MRXUNOJPSYUWNYFHRKZMXQZKRUARTBACRZQABOZIQGCEPAUITDWNYOHVDBJIPJZHGDJFXTQAWDLGXQUOYGXKNQOCYKLZICBQFUXALEMVNZJSLEPMHRTMJLAHAVSRCDTPGFNEICSVCGMUBFMLRJNVRFVVG");
    msg.s_type = 78U;

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
    msg.setTimeStamp(0.6375968421062397);
    msg.setSource(11129U);
    msg.setSourceEntity(184U);
    msg.setDestination(32907U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.5297009745645346;
    msg.lon = 0.9581074178648324;
    msg.depth = 0.5199052975068372;
    msg.roll = 0.8013817680982431;
    msg.pitch = 0.23107622115397675;
    msg.yaw = 0.8446759677042656;
    msg.rcp_time = 0.2587344571839657;
    msg.sid.assign("LAMONDOBHUPZTXLWWLSWFBXIDYZJQGI");
    msg.s_type = 132U;

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
    msg.setTimeStamp(0.6699247240575382);
    msg.setSource(19204U);
    msg.setSourceEntity(32U);
    msg.setDestination(4763U);
    msg.setDestinationEntity(191U);
    msg.id.assign("LTIFEUCVKKNITSBBSBDSXOCMEKSA");
    msg.sensor_class.assign("WLLZSYIUMXNZBXVAOINFZYGBETCABMRTDSXXZLEDJTNZGOUAWGVMZMJGQBPQUICKHYHOFES");
    msg.lat = 0.6822108169499947;
    msg.lon = 0.1932585867356572;
    msg.alt = 0.03087935925224039;
    msg.heading = 0.5303157093011478;
    msg.data.assign("BSHZNXDYFIEBSPZEICOYEV");

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
    msg.setTimeStamp(0.2248459701457709);
    msg.setSource(26683U);
    msg.setSourceEntity(116U);
    msg.setDestination(630U);
    msg.setDestinationEntity(245U);
    msg.id.assign("VXZXKMAHZTWMKYMUETNOUTFWCTVLWZPUHGIZPVPKUDTXODEMOQQQPRGGNQVRKLXILJJFBGSCIAROJBHWVBJAJVCADODDVNCMJOSTDVHSWKFNXSZEF");
    msg.sensor_class.assign("JKVUDDMIFEMVUIUSUKMMSZQERACFNAVFOJXXXKSREOBIZBNVBSDBYGPDRWMCQHSWLGYUULJOPFBOBTPQNQJUCWTPXPINK");
    msg.lat = 0.948615590744522;
    msg.lon = 0.8707492478196619;
    msg.alt = 0.13689499293955232;
    msg.heading = 0.43427678089192145;
    msg.data.assign("ULGKYPKBWCECVYKJNXFBNUBNZXWVGIERFDOYBNFSNPRVBLCLUSJMYODAIAXAFIOOMETDGTZPLHZUYAXSJHAPXIKINWFXKLPGNDYRNVASBURQTGOHWCHIVCDZMWOJHSUGYPKQWBJOTUZBHRVVJTYAJYMC");

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
    msg.setTimeStamp(0.026892408986687655);
    msg.setSource(51152U);
    msg.setSourceEntity(197U);
    msg.setDestination(38984U);
    msg.setDestinationEntity(178U);
    msg.id.assign("BRSYBADKTYHWTWYLHHETGZTKPPFPFZQSOEJVMICIXNMHEOERMDXYSALHWGLTCHTHGOLAXXXZKAQNJRKYBDREOGGMZEJASBJOXP");
    msg.sensor_class.assign("XMWPLMJAVFEIJHWDTUMASZKCTJCBLZKEFUJCYWDCLKSIACXEZEYSSVLQOXOWBFRDFKUUQVECSFGEZNJXFXKUDKLYBJRNIPQTWIBMYROUTDFRAULJESFHQTDGBDJOSKQBYMDHRSTWBVIXIQGDLZHZHHWRPAYPOWAAFOHWODQRZSXHCNAPYCONVL");
    msg.lat = 0.12824310923791082;
    msg.lon = 0.10989023861849223;
    msg.alt = 0.6528500774698214;
    msg.heading = 0.8727189271349233;
    msg.data.assign("TMENGFPASECIVTJICSVHOFREDXBZRIFMUXBBFJQTXYVVFPBIXOCDDXRHOPQACONASYLXULAZJNKEHRNAEQPXGPUPBGVTEQOJQZILCAUWORBXEPLMXYVJWXMOOKHJTGGBPAQYBKWGNPRKM");

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
    msg.setTimeStamp(0.48984230226108827);
    msg.setSource(39371U);
    msg.setSourceEntity(162U);
    msg.setDestination(32945U);
    msg.setDestinationEntity(17U);
    msg.id.assign("GFOXZDACOAMOLMCRPILADOQCQDNMNZBIYYANZTVQUTJFBRBEYMJBSBCPOEBZRTWUGOXEEPTOAWWGYTTHFXXBPKKYSGKXWPTWJCKIUPXBAWOSRGMJVDQYQHWNPKHCISJVULTYQMXVADRLPNKGLSIJKCFUUSWUZSBOVSMQNDNGENKEUEHJDIEHFRJZHMZNVRCTCVLAQFHHYHAJAUE");

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
    msg.setTimeStamp(0.2009617734882193);
    msg.setSource(54544U);
    msg.setSourceEntity(15U);
    msg.setDestination(7867U);
    msg.setDestinationEntity(61U);
    msg.id.assign("XVSEEXIXKSYGXLPAKXCOEZYVNXKZZLNFKMLHOOVEZROWFUJDJTKJAKWVZLKRANJYAPEHOSNIPGDIWMUENHVKAYASRCQHUTMACESBDFSHSBCUQZZLBRQYAVHZXRUQBILJSZIYNJDDELKOEDCDNTPBFXGPG");

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
    msg.setTimeStamp(0.26917632233064137);
    msg.setSource(34436U);
    msg.setSourceEntity(180U);
    msg.setDestination(1394U);
    msg.setDestinationEntity(6U);
    msg.id.assign("MLRCBQEYXWXFF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SIZQRKXYGUKNJCEHZAIEUAETGBSCFHUNSKVDBXSTSBWROQMFPAWRQWMUVYTHHDCQGVJWFKVPTYDIJLHGATSCQFJRDHXONKPFVHJTPBZEYWWFCSZMCTCJPBONYULMFSBUDXKOGAJIUZQLMVAOYDEIBHYDITBQWL");
    tmp_msg_0.feature_type = 222U;
    tmp_msg_0.rgb_red = 249U;
    tmp_msg_0.rgb_green = 212U;
    tmp_msg_0.rgb_blue = 242U;
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
    msg.setTimeStamp(0.5101311826089486);
    msg.setSource(26224U);
    msg.setSourceEntity(204U);
    msg.setDestination(51691U);
    msg.setDestinationEntity(220U);
    msg.id.assign("UZIYNOXDILHTBDTDONLKZDBYMTXCWLPLDVUHAGSPVIRVBZDOPQBFCNIWFWFLLATIYWHVVUPQUGUGOYXTSQHHAIWFWABXBJKHLHIFFSTSUMGMCISCNQGMREPAZTJZHQCVKHVNKVREDIQEXMKDKVRLEIMAORBMXPRPESARPAUNSGGUCXUWDJWXESQNZVXWZSKMUYGQKJENFCYOJTT");
    msg.feature_type = 52U;
    msg.rgb_red = 179U;
    msg.rgb_green = 176U;
    msg.rgb_blue = 142U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3904969249592377;
    tmp_msg_0.lon = 0.1277061394943544;
    tmp_msg_0.alt = 0.35011454969121747;
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
    msg.setTimeStamp(0.09898722035687024);
    msg.setSource(34605U);
    msg.setSourceEntity(41U);
    msg.setDestination(21416U);
    msg.setDestinationEntity(63U);
    msg.id.assign("DWHGKIGUTCDQLJOPDYXJGMUMBYSHSTIZTWPSTWBMXCPEQSNLCPXGXKKLBYQEVHXZAJFQRHZALWKSVRBAJDDUFZTVFZMURMUGGYBBECJWRFQDGOQOYGLKRLAGVNNIHZTNWDXHAER");
    msg.feature_type = 155U;
    msg.rgb_red = 29U;
    msg.rgb_green = 34U;
    msg.rgb_blue = 7U;

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
    msg.setTimeStamp(0.9898751116189595);
    msg.setSource(8304U);
    msg.setSourceEntity(168U);
    msg.setDestination(17443U);
    msg.setDestinationEntity(36U);
    msg.id.assign("DPWUHNFFKMKCS");
    msg.feature_type = 46U;
    msg.rgb_red = 137U;
    msg.rgb_green = 72U;
    msg.rgb_blue = 231U;

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
    msg.setTimeStamp(0.6592159168220313);
    msg.setSource(6471U);
    msg.setSourceEntity(156U);
    msg.setDestination(54103U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.7717766367772879;
    msg.lon = 0.7151331658703411;
    msg.alt = 0.0762948407811983;

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
    msg.setTimeStamp(0.8074600125094563);
    msg.setSource(46949U);
    msg.setSourceEntity(123U);
    msg.setDestination(7078U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.48847088741888267;
    msg.lon = 0.3935773705441723;
    msg.alt = 0.5569465078670471;

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
    msg.setTimeStamp(0.4003047172243057);
    msg.setSource(58951U);
    msg.setSourceEntity(28U);
    msg.setDestination(62640U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.5654135466479255;
    msg.lon = 0.2404758025268271;
    msg.alt = 0.564533390443518;

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
    msg.setTimeStamp(0.8487956312752852);
    msg.setSource(49932U);
    msg.setSourceEntity(152U);
    msg.setDestination(38196U);
    msg.setDestinationEntity(35U);
    msg.type = 218U;
    msg.id.assign("NCZOEPZUTOUPDSFLMZZMWKVGOJXNVWQZEWITNATSSBJQFDWMRLKKKGHFJAXOBHZXGMDFLYRLFKN");
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 235U;
    tmp_msg_0.name.assign("JVOPHVAKGMKMPYOARGRURVATBCMHUFWQGITGFZSUPIWZFPSQGSAKUIKNUXIQIUACZAMLRBEECNBLJMPIXLQOWCYSYBNOXZEPNMPBHVGQELOFXTRCKMYMXDFKDIXHVDOJXTWXUTLRTNVZZQTDFJFFWRGCREARBJYZOCPGEWYZWMVIUQOJOTDABICDAJVXZOHUWVHSQVWXPEFHBQPNGIYNTESYDLLKSDTJCYARZSWLESBL");
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
    msg.setTimeStamp(0.8542004500933357);
    msg.setSource(34173U);
    msg.setSourceEntity(128U);
    msg.setDestination(1657U);
    msg.setDestinationEntity(161U);
    msg.type = 237U;
    msg.id.assign("ZVUADCPGUHBQZKYEATAQUOTHFSBRVLHHNQRBWKIMFYUCQMVDAODMUSCKGNLTYRGCKHXLZECXUX");
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.2185346161025824;
    tmp_msg_0.x = 0.940491181798447;
    tmp_msg_0.y = 0.5012293111073778;
    tmp_msg_0.z = 0.7982859175273459;
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
    msg.setTimeStamp(0.6889770920802474);
    msg.setSource(3635U);
    msg.setSourceEntity(8U);
    msg.setDestination(47269U);
    msg.setDestinationEntity(36U);
    msg.type = 4U;
    msg.id.assign("STGGQZBCOFTOBVRLEDNUVPLJCRAJSFKCXBIHKOUWQIUXPPCZAQBKMTXLUTCNHZUBDVKXAHGCOZGTNLHUNQJSLPEMIDVYDTPXGGFDYVSZQJAVXQTHYOIRPAFMUJIZHNYPFMJRROGAQIBLI");
    IMC::EntityControl tmp_msg_0;
    tmp_msg_0.op = 91U;
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
    msg.setTimeStamp(0.170611544429066);
    msg.setSource(32155U);
    msg.setSourceEntity(212U);
    msg.setDestination(64245U);
    msg.setDestinationEntity(2U);
    msg.localname.assign("WIZEBTAUCSPOPPVSKBXIEIHXVNQTBOHAVUGOAVRJUPUIDRYHODMRWTAYCQXAEOIZCEKLFXTVLBRHLVDBKBZCKNUJUYTGGGJZXLBXWLNIMHCNHRZPOQPZNFNXPERYGMHDGEXBSIFYIWXKOUYYENHWKMLRWSTLPQJXMETCPUSFDLTRONTFZPQQMBJRFRISSAJAGJWMMSCFVWSSWEEMQFVYLVADCCWJIKZOQKAOJGDYZQDKJNZQTAFNUDGHM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JOAFXRUHSOGCPTNSIPWHAIWZERUPBOKKKXXAOHGVWVBDWLGQKPZFPFCEIINWHHZYJFMJDQNXTSUGHNEYLVJKXAEXZYJCBOMXKDMGAWWMHVXVBBQNWCTAMQJFDCGPJNFYFEUUBGCTLVCMBTRLKFWMVZNCCCQDAIREYZQYUNJRIZAUZIPLTBUOKUARQZIFSKERHFQPVSQTYXJDSHGEWLLLNKOJUROGAGBYETHBL");
    tmp_msg_0.sys_type = 126U;
    tmp_msg_0.owner = 8226U;
    tmp_msg_0.lat = 0.677834264424162;
    tmp_msg_0.lon = 0.39711117108768257;
    tmp_msg_0.height = 0.5088570582068217;
    tmp_msg_0.services.assign("BXYFIZGKFYPBQDJNQRZRVMBAIZMOFYVJCYNTLSSYLCYVESCSCBOPLQUXBFOXOMESLURPKKLPQLZIUPRQASGHFIMSKYVZIPDUXUTHBWTGHNEVABDCLJGQUNUNCRAVBGJXFFQJMO");
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
    msg.setTimeStamp(0.16736137628490078);
    msg.setSource(41192U);
    msg.setSourceEntity(7U);
    msg.setDestination(45821U);
    msg.setDestinationEntity(212U);
    msg.localname.assign("TDVXYZXZXQXPZQLMGJZDAZSDDUSXCHZGCICANKNCRJRVPEFOUFMQKFJBLJTMQRGRZMSUYZSDTMMTILDJFKIVQFJKBSKCWWJYOHYFTFXNSPXYUQNNYBOTSEQUCUKDGIXYAGOERBANQKLUYCLAGOCFRRODTBWJTLHLFNWEVWSHMIQYGVSBEWPKTHBTEMEEKSDMEHBCPRGAIIOU");

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
    msg.setTimeStamp(0.20144941012579443);
    msg.setSource(63718U);
    msg.setSourceEntity(154U);
    msg.setDestination(25809U);
    msg.setDestinationEntity(5U);
    msg.localname.assign("ESTAUMIPUFJBNIFMDJADPGIZBSCLUOTSIWDJREJBCWZQRXTCRVURIJECCBOQLQBVMXDJDUYUTQMKVOFWXMMNDKSNJQRYQGNFVLPTFYXAXRYKHCGLFVNYNIWMNQVAZRYWPIOGFHOBXSCLEIIKSQIEYKHGUHGVKSWLQTKNPFUGPLPLAGZSRERAUMHOLBHCTBMEVNTLFJKHATXTNQJEOV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QFTDYZZSJJWYQLNNIFCEOVXMSZRNWJZTMKJRLVQMGPYYGDGYZYRLAUULOHEBKQFNEMRQUAQNBTJADXHCBYRVPIEIPUVMHKNQKBWKXAFUZWHZORSGYCVPFX");
    tmp_msg_0.sys_type = 112U;
    tmp_msg_0.owner = 10601U;
    tmp_msg_0.lat = 0.19196469065542232;
    tmp_msg_0.lon = 0.21487623075868945;
    tmp_msg_0.height = 0.4201302461869073;
    tmp_msg_0.services.assign("VWQPIBCYVILJKWDRCNUESHLHTOKOJIENRARXMXKOCNVSKHZAMCUFFJWFHYDRWXEMIEUZVYHMHJWYKTVPFRDWWWEOZCQGZUGQVFJOVDQJOUZBXBQJQMEXAIMNDFFPGYPZLTSGNLFNGKSBXVZKXPSAQHMBINTPEFCIUSBKATMSELZDZYWUOGHXUGRL");
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
    msg.setTimeStamp(0.019894017352868);
    msg.setSource(13766U);
    msg.setSourceEntity(110U);
    msg.setDestination(29016U);
    msg.setDestinationEntity(37U);
    msg.timeline.assign("MGFGXDMKTEALPEDTKLQYHCWIQKVQXXBURSHJBCSWLTUQUDYRPVXJAYAJIJJAHYNWHOHJNAWNSWRYPZXSBLDKMGQXSCFRMTLVNUCRBEQMNYMEKLQARWPPNQJJYOVWRAABTHQZCYDDJEWVVHSRV");
    msg.predicate.assign("FRVBQRBHQSMLUQYMXQBQXHKVKOALHYTQVLBDPQAWWVLPERFJOBWSWXRXVGVVIUPDUWRWC");
    msg.attributes.assign("JSLKFDBVSSZAOMVEKDWTZIOVUKEIJUYTMAXF");

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
    msg.setTimeStamp(0.4866623420551014);
    msg.setSource(6412U);
    msg.setSourceEntity(13U);
    msg.setDestination(47705U);
    msg.setDestinationEntity(226U);
    msg.timeline.assign("TZTKCQCPVHBUYAEWXDSWYMBTWSHHXKA");
    msg.predicate.assign("AZAPRRADUXFGQRUBMWSDNMYHFSHBPPXHHFQWGRCZBVROSOLGKYYCQMIIDQOTHZVZGYTFFKMUISTYPYCQRKYACFNBSDSCFJGCGVMVINECKNIHFOWEOFESLXHXHCLWKSIHKJXDGPXOYJVNUVUIEJVVMOENPUXLALLEZQKXSTJJQNRBBEMTCDYNTTPOMBXIJWFELWNDWGTAYIJRPQLKPOWVDUDZHDQAEWBTQKZZNJVEUTBBMRWCROAZ");
    msg.attributes.assign("QKVCNKBQSPQEIBOORUXMGWVYZNZXDQRQIFBRFVHJVIVISJGMWMCJCWWYXMRPJNOUYFIKRBBXJZKEDKHUCASEXYSXAGGDUTUNHIGHCVPEBVZEKNWDBDERKOSTAMQTEFVDYXHNMPULXDZAJGLSHOOYXTTUJILQKQBTQIOSQRGLLVA");

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
    msg.setTimeStamp(0.9015935118585964);
    msg.setSource(59590U);
    msg.setSourceEntity(175U);
    msg.setDestination(6841U);
    msg.setDestinationEntity(219U);
    msg.timeline.assign("VKQDXHRWGRQZKMSYECQVGNBHHTNSZBLZGAIQRCZOWDAVHLULZNTQJYKOVWJCQLMYTVYMJRCOECJFTBZOHCPTBKQUJDAVLMXYEPPBINNLODTHLJBSFWCBWSKNUSFSXXOFMGWFFVYOMELDGGSCRFYZXMRATQKDXYYGJOTNZIKZNWYEAODZJJMRPXUAWHKBVDEPKDBEKCXFGGFECAURPFRISUMJPAVNIIUAWQLX");
    msg.predicate.assign("NWFVWPZYIMGQPRMICXTMRGSKCNBQEAHDUAYYOULNVVIKTQVCMTXLUQECXAMJSLOJLHNX");
    msg.attributes.assign("VRMWYCIBDPFUOSWKUAEGYTDXKOTFOYTVMLNWHGRWSQPANCWDYIGCZFEXLDCQGEVBHSDKAIQDLQUJBRYL");

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
    msg.setTimeStamp(0.8440926964868313);
    msg.setSource(36278U);
    msg.setSourceEntity(206U);
    msg.setDestination(17121U);
    msg.setDestinationEntity(71U);
    msg.command = 30U;
    msg.goal_id.assign("USOEKIFTGGKZPLQHABWFFQSNIYLOCTRKRSNBEPDSAFDKJPIGTVLTWLVIPGMHLUAAB");
    msg.goal_xml.assign("OTWTRZQFCYRXPXBHEUFCUBCBQJTAKIYYSPGJGJXHCYWJSQFTQDCHTEZBEEEGZEBTDQPHFXVIOFPPSUWKEKIHVWIJFQCDOVGMNRJBMVGAYPWJARSMLZVKYTOLSVUHJNOBUHFXVGHXCBOQDMZVCCSXBYADIZDQGQITWKKEPXCLFIKRGMKUJLXKGKLNWQNLNWOWOZEPPAJMLNHSSIAUFTTPZDASLLRRYMGRNUZDIVMYMHOMZDEDRLOUYWVAIAXRB");

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
    msg.setTimeStamp(0.5099694436969666);
    msg.setSource(22583U);
    msg.setSourceEntity(198U);
    msg.setDestination(11473U);
    msg.setDestinationEntity(82U);
    msg.command = 76U;
    msg.goal_id.assign("VVXTZPSZRZQXYI");
    msg.goal_xml.assign("YYYGRGUJBGXVRLRKXFZIHXZLPDTNIAFKZKRMXJEQUWYQKHJYTHPDDJTPZEREILMNIMYDEOQOOEVRZOUGVJFWZDLAQLMWCNVC");

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
    msg.setTimeStamp(0.984420929488806);
    msg.setSource(29311U);
    msg.setSourceEntity(227U);
    msg.setDestination(5332U);
    msg.setDestinationEntity(30U);
    msg.command = 206U;
    msg.goal_id.assign("LOZBQTNTKKJZBYCRLIXTNENDKUZGUVRYLSGOPEQTMURPWJOPBUQERVOWBXJJNJIOHRCWVEAJ");
    msg.goal_xml.assign("KZMHYCVYYBSONFGUTKECRHSUYNZFVZHYHSKLHYAMT");

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
    msg.setTimeStamp(0.41378374707784116);
    msg.setSource(405U);
    msg.setSourceEntity(194U);
    msg.setDestination(42799U);
    msg.setDestinationEntity(92U);
    msg.op = 41U;
    msg.goal_id.assign("ZJELSNEWMPUCQAQNQBPEOLBGUOXZMBKJEZWOFPLNGVRPMTCITNHNZIGDIREWFFRXYQSHBSYBAEI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KBIXRSFBUWDHOQMMURAHWNSMLRUGRYCDSBVDTPQIPNQMYWZYBOLCOXDSLWYPFLGKFTFZBZKQGFIBDLHEFEEVKCNAPXOUOUHYXMDVRTKUWCDVLYLWEMTMOXSNXXIVJQSFZSQHPTEHWNMIWCAGHDZUNAUWICPBJZMVFNERUFZEZRCQJPTGOLPEBQAGTGGVKVTLWTYIUPXSOHOLYKIHADKQYBQXTJMRDRAKJJEBYNIVEZCSVPOJAAJCNRSCFJIGJN");
    tmp_msg_0.predicate.assign("GJKFVCPREWSHBQYUTEPSTOFLMJJWELOVWRSNDVYBCUOUMRLZFMKTLYZYVMULVXMDGXZPJRGXOZPBIGXGBJRAWVNWXYKLYHRWBAPHCLWFQPKJDBYTIIZOXUFEZGAIHGPLHBDVIRUPCQXHLTFCQFPDOKGWEGNWSTTJYI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ROAHRHVCZUTXMPLEBQHLVNMBIXJLGFSBKHNVUNMJLFLXEKOBOZCQRSUDYEPNTFN");
    tmp_tmp_msg_0_0.attr_type = 166U;
    tmp_tmp_msg_0_0.min.assign("VUJQSOIZYDNMFNKMCVRGTWKQBGPGGTSWURFLFFKSZXDTDGHQIHGIUWSSZXOFLHUCAMHNSXTUSOJQGYHNDELGZUTNBMCQBNDZKKDHTICXSUGAITJLBXBFEVFYMEXKRAWYNREJJOAQDFOSAQOAVZZFJOQMRYURCMMXRMEVDEVEROPGYXPJPOEHWVHVCDPKLRVYFNQTKRNCP");
    tmp_tmp_msg_0_0.max.assign("TECYMGPWQJJLTIVAOHFSUNCITERDLWZBPTCMSHLWOXYYUJZKLSLJBON");
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
    msg.setTimeStamp(0.6185151639456338);
    msg.setSource(31526U);
    msg.setSourceEntity(103U);
    msg.setDestination(61955U);
    msg.setDestinationEntity(128U);
    msg.op = 57U;
    msg.goal_id.assign("WKHRPHOQRMSXCNXBLDUYKB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FFFSMWIKPPZTJLZDUHIOXTZEBXUOYCUVMVYWXZAAUZQMCNXITFEHAFWIRXSURXLIGJZRMSHMLLOYMGLOQNBKTGLPERULBWRPVYZPSQJDTQJNIPCCWWNKVVIAZJEDWOZRBARJZFSCMKJOIRBMWDUNRDKUEPHQDHHKNIHLGSCHFSVAKFVUDEDBIYYVSGGSJGMPKEEVQACXXXABNQJOQJYYWNECTFLKTCSTV");
    tmp_msg_0.predicate.assign("FLLCFBDSUFEFUDJUMOACYQQGRHKIUITFPVJOHIBJOMFUGRKDGWCYEHDLBNTYEKYYDNXGWPHXRNLZROIMLMLOCKPFQOGHRIOUKTRTACAWWPENPCSNEVXKBNSYJJFVJIBESMPDUHAKMJWIPVPOSNDEMSAABRKAUEVYGLJDRLZZIGGIHSZTXJBZZOXLVHMZLNGCYVQEWWCUHQ");
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
    msg.setTimeStamp(0.7462178157615801);
    msg.setSource(45167U);
    msg.setSourceEntity(106U);
    msg.setDestination(40506U);
    msg.setDestinationEntity(77U);
    msg.op = 27U;
    msg.goal_id.assign("SFRWAMLIKEUYONZRFVMKGNBFBUOFAFEEZISJDTJLWHK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TTBGWDCTUCNIOWPSCLZLBMQOXNCPKBDTGKOAHXILIQOEUHLFEVIVEQHZIGGVWZZZOHLSLFWEDOPVHZMYTAKVJMNPIHCNYFGTRVASXXRMCSYNYMRJPSTMZQPAMPKRKGSNBNKYBCVFDRQVW");
    tmp_msg_0.predicate.assign("JPYZVBSNCFRMQWNGCGDJFZHHIOXPZUWDLKUVNRMBYESMKUYKBPLFEYYQITYJPJULMVAHZXPODTTLIRFIHOCEHWRO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JTRVHYLYFOPXDCHKAHFFZEKDRIOVPUHWSQDFBLZZWOPQGMRSDGKJCDZRICYVCKFYUHLTVCQSWAWIXXDGLIUPUZFQEECDLAOTGGOPZXWWTAUGGNLSVMPMESORITRBLYIBAJQYOHNNAOXTKEMC");
    tmp_tmp_msg_0_0.attr_type = 254U;
    tmp_tmp_msg_0_0.min.assign("ZTCRMHGFSZMJLADFYDWXBRPSRENAKADDOFVCXDVEOUSAHJUKUBMFWQPQBVQLACNIRIVTHAFQXGZTJIYERWGLSEFDQTHXZCKMZLTYMGGDOUIEQWCNLEUNMPWCTOCZRPDTKBASNBJQOXIGCRPJYV");
    tmp_tmp_msg_0_0.max.assign("EVOXRDEBYVYQBSTWMAHLQXAWXXBODRCNYQBMTTBDUUUKLSUCGHINOTXISATVBSKMVHWAAPFOHFHDUATJYSGHNWXACBZKEEQDUORRKGYXZLFNLBHKISVLYAZKWVIJXIZVYDLPCKRNOQOCMFLWNPGIFHTQMSTUKOTOCMPEGPVFPLJWHRNBPQFEMMJIJWQJKUXJCLRGZDQXCDYRN");
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
    msg.setTimeStamp(0.3346767145545221);
    msg.setSource(62000U);
    msg.setSourceEntity(110U);
    msg.setDestination(59762U);
    msg.setDestinationEntity(112U);
    msg.name.assign("FQIFQSYCYAIXOPYDOTYJIDBFKLCQPBPZRSIWDTPNKHMZZZURDGPOJUWZMKKVEQHSRGOAMVETCZVHNNHNYQOQRBWONWAJSRZHXCECPYPWRDBTXYTPGMHFUJOLQHMSGICSFUEUBXZWVJXTNDJGLAIEJAFIZFLFDVTLTEWSOCVEWSRLQMDPIXWQYRULYKFMXGOGYGKBCLVUQVARESUPAMNDMBUHNHUEKVCHAGCNLXOE");
    msg.attr_type = 162U;
    msg.min.assign("SBHXVEPTDRAKGXWPYQHVINLTAIACZPCOFFGDWCBSZTUXNFRWZUARJKZIZNCPSLRUQWNUUIRNFPWGYNNZDTHVEROHCZLEPDHNGNYDEIMZKSIMDSGVSKUSEAJQHTGHRKIZBLBVJQYDJXDWFQTKEILQUG");
    msg.max.assign("LRWGLZNNLFTVJOOIVKSPPPJVJUBXASPUIYUVGSSVIZCFQZXCYPCDYKFPJMYEHUXLSNSDWXFLINFBEGZSROJOICKWITJUKBQEHMCHOH");

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
    msg.setTimeStamp(0.08067166574576634);
    msg.setSource(22540U);
    msg.setSourceEntity(135U);
    msg.setDestination(59903U);
    msg.setDestinationEntity(192U);
    msg.name.assign("CCLWLGNYIMDIAFYLFXDFWHVQZJBXCHHQNDVYZKDKCEBHLPORWXRSNJLGCURZUUOASENZNMEYEVWDDLRJRYCAIY");
    msg.attr_type = 187U;
    msg.min.assign("RLDOFZGJGBTXWQKXSWMYDQEXAMTXYVJRCOYQTFVGCYYXKOIPNLBOQCILVISYPPTLKMHEQGFDHONOKFNEZGJGQAS");
    msg.max.assign("BSYSPHXMHTJNRIGPPWEYFWTSEGQXQKHUSEUAVTXEACDVZRBMVJCIRZFBUTIQFOHDECLVLWOYQMMYAWSYJVCKXXCEWVFCWOFUQUJWEHRNHXZLDQVOHAMQATPADQXAADJTHGIRUMVNBRXCXKBZGCYMNTSZPRKKGBFPINSBBVDEJHKOYLEMNQIWMZJLERRLDLGIJUGCDAJZZSXBLPLKONWL");

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
    msg.setTimeStamp(0.598160056540488);
    msg.setSource(17275U);
    msg.setSourceEntity(212U);
    msg.setDestination(37910U);
    msg.setDestinationEntity(254U);
    msg.name.assign("LPTTISFQJCOBHCPBMUXKXVGJVIULYTXBWXOHQRGGMTUPOQPIDSWYEHNDCEMAPQNRZAENURCLAZZVZBULYKODUKJVRBORYVIOVHMJTAGFAIUVSDKWSHIABYYEMHSYSILMJTSAWWTQEJXTSKCWZCM");
    msg.attr_type = 148U;
    msg.min.assign("OESANREZOFKPSDAKBOUJDKVVQZWWHQIHKHLFRPLHCPXUTXODEIQTNWBTASJXQLDDYJMBPVKWSWPJYZMSSBRAWMDTJVERQGTLEGFUZGCRSOPJ");
    msg.max.assign("CXWCIVLKXYLUOBPEDQLHJJGVKZXYSZNCGSATHHBCNGJJWAQPWOYCGFGGUUCFTOHIJUXEVPCKNDOYJSKIZSQYXRMBDKOMZPWZMEHKBIVRRQLGSEAATUINUXAQFWAAYGBDXFDYKSYAQPMSELJMRTMRKNBWORTNLFFGPXVBQKLWHWNQNFZPZJFMMIVHODEXTLRFVAZZDCVREESWFOTZR");

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
    msg.setTimeStamp(0.7693926538248911);
    msg.setSource(10990U);
    msg.setSourceEntity(211U);
    msg.setDestination(626U);
    msg.setDestinationEntity(52U);
    msg.timeline.assign("CMYMNOVCTPRIORHSZHHONEEIZRWHQDOLDORZTYXVELGWCAQDIEEWIDFURBFOGFAVNDJECSXXMYPVFBXKIAOIZZANTHURKNLLUJBPWFMKNSTNQJJLMOGDAYUTPWWSXMDPKQTSNQSJQAYF");
    msg.predicate.assign("ROAJUDFMHNWCAFHNCJXMZQSEEFTGCVNTGKWNQAPASUNVMCKTQXGZAQWDDIEEBZHJCFPYEPLJUEZAZJIMRDSNEWRYXSOHQPSTQOWTKZGFBMJROHKPVUGTZASACPGYHFJPKAXXHRPBEHXISKVBTNBOYHSMVMRGNLOPKXUFEZDRUIYLYBDILPRYBWLQYWMITUQJAOJIDBRKUVEOQFGLLZMULCGTLDBTOSHWNCIGRDY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SLMOTCCSAPEKNRYLQUIWYBEVZKPFLDDYXEXGYJQOHYSKSTUXDCXMJFJEKR");
    tmp_msg_0.attr_type = 93U;
    tmp_msg_0.min.assign("MMUDBJFWLOJXWQZJFQMKPWWCGMDFJHWIIIYYGMNUKYYMBVZBNCEYZDAFKUVTTEQHQUFPCPJBZWDKZXNDXSWLONRGZH");
    tmp_msg_0.max.assign("ROFMJIRXRHRCIFKKCNICKD");
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
    msg.setTimeStamp(0.43981999686774875);
    msg.setSource(9981U);
    msg.setSourceEntity(27U);
    msg.setDestination(44328U);
    msg.setDestinationEntity(243U);
    msg.timeline.assign("BZAIQJDTYGGKLXKGOGKDGHSHUHSJUTERJTWHZRELDKMNSTAVETCYDACYGAMYSPRQUHVFPJNRCMXIWBLIEPFYJVEKOBIHFRYVXLSUQKOIPAAGWWGNUVHVHPLSFFNJSABXIOAXQCNQOPJMECLKNNFPWGTRLXC");
    msg.predicate.assign("PVRMSHDKZUMTXSDLOUFKWTLWYJPSQZTALUPCZLEGWRJAXAIMAWZOEIOUGLAYNVNYSVIZYDYPXIEKGVFCDUYJVCRNGCWFZUJUPKMDFXHATNDPXWHWGHBKBSINVFAHEJJFTDCBHRMRJMSS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TTPVEVPPAOZLQINSQQBOUKIYUHJOAGFNQJYGAVILBSLJRTDXUIOAJBWHMHJZJAXYYTOEUGCWDSXJOBHWRYGFDMIDGQKLPVRBSPFKKN");
    tmp_msg_0.attr_type = 119U;
    tmp_msg_0.min.assign("PRVFHSMESJKZKYDHZNMXPQJYTJKWUTHDJSKHXFWURWBEOQARTHFWQKPCTEXWHVMADEVOBRFFSYMGAEXMWDGRTZSVCXBOOCJTOIYPQLDISNVXYUADIILHVXGAXGAUAMNWPZGONPECZQALHVWNSWZQVT");
    tmp_msg_0.max.assign("CQDGUTHHJDOOEKELSCXTQINFNVDICMFQBVEYUKSZGMXTCLYALPEMVESKQGCVBMROQKZRKWOPNMPWXSPYSONHZKJAGCYXWJAAEPJMRAWYSWWSFKZFHLCQ");
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
    msg.setTimeStamp(0.5644546563220754);
    msg.setSource(39523U);
    msg.setSourceEntity(111U);
    msg.setDestination(50236U);
    msg.setDestinationEntity(142U);
    msg.timeline.assign("SDFJMGWRFIIEPPUTDLBSNZAFBPEGIFQFQFWYDTCOTQCESGASWCSNGFLOJZAUYALALNMUPKOFX");
    msg.predicate.assign("WXAGLPTXACVORZRHJOWVCXYQZLRCIFZVVEPNDALHABOQVFPOCWDFUCLHLEIHZGMEBCWKAEFFXJUYTOEJHCCMZUDSDBZIVYJTAYEGZFPVHKDRIIVOFUYPNSNTKUQGTQGJMHOIRKLQJVZRPTOTLBVYRWOJWJFGSHHWKSGMKTNAWREJMCSQIXBMITMEDOBGFRBBQSLGFBWXNWPALDNACEDSGZYANQNLPXTUSSEJKPQKXMYIPYSRUU");

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
    msg.setTimeStamp(0.09030970029203778);
    msg.setSource(1158U);
    msg.setSourceEntity(129U);
    msg.setDestination(62854U);
    msg.setDestinationEntity(241U);
    msg.reactor.assign("WZGLSOSRCJZWEFIXDAMHXBXDTMQJQOTJKSCPEEMLCKUHFADWYCTKHGGRGSDGITGYMSEMGBSZQVIDUOTFSMFVMFCKPQQCSERNXBUQQBFWUOYPVJDLMWHZXQHGRJLDYWNUQKKM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BRDCMUOIXDGBYOJWWLPYLKJWPHIWSHCXDYUFRBAJDPIQGOEZWKQQTFQSDYXBMJESMRRAFQFMIIAMPSFOFNRDVJPQXJESNCKJLIJRZVHBPWIAGHNVCYVFCQOLNRGQGDXRPZSMUTPVNLYGHDNSEOHWYMLINCQAZTJUTRWLBXTOZAYKEFFGNQCAZKZADXKHOBVLHVOUESHWMBBXCDWLXAST");
    tmp_msg_0.predicate.assign("WBZBFDPHGOTCLFHSYZDEHGCIPUMFPDJRCBJABNXAJXVRQULIWTFAZJPKKUWHMNNUXSSEAFALKODRKILOETQOLQIKNZSDWVZYUCHBWAQEOFVSOFXWWMMRMXEHVJDYVKTHPCEEQGUVJBMKGYSRFXNDESRYTCGLOMJNNFDL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TFQFKSCPGNTINSDMZZQLLIVOWCYXOBWGATZCZHEBDQJIBEWNVJXHJJGDCCGEAIQNVQCQYAASPXJUQGMPVIXXIBCUKEFOHSKBDMOHTFVDZSWKWAKRSKFYJLWPNBYDARBDFMKWXRVDFRIQCQREMANXHNTNHTTUPUOSZPIGGSLJRIUGYHMRNQPJ");
    tmp_tmp_msg_0_0.attr_type = 150U;
    tmp_tmp_msg_0_0.min.assign("VAKBUZUMHVWMYHZSIQJSGWGDDFUVNPIYXTVBHWRJKQEORVHOSUQRTTSEXWBQRKUJOGWBEUMFJ");
    tmp_tmp_msg_0_0.max.assign("DRPTFPHOXVOAGCJMHKWYDP");
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
    msg.setTimeStamp(0.4955275400679199);
    msg.setSource(29011U);
    msg.setSourceEntity(107U);
    msg.setDestination(51167U);
    msg.setDestinationEntity(55U);
    msg.reactor.assign("PUCVJFOEUKXPFLOKMECSWRRKJVOWDDJPINNZJYEZCLFVFZTPHYMKKXECQBJKAPSOJLMRTIGOOYUAQTVPADMOYQKIGYPNOXGDDTFCQLVTWUGZRKBWLPCUPXLEFBFMQZJIJOBBWRBZHUANEXYXDTLADHUTBLHVIHHNPIVFTIYWTMAWGRSKVBZERXSYJMWGNXUWLNAVEGSARCZZXDKZQYEQFYSHNSMLNMASRIDFGHHQDCJON");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GHMAWXAIHIMUJCXEEJLLYIJWSWDPDRYTUDLFHNPKMVKSGWDXKFULFERPIUREVZTAJNVTRNYFKBPPSKOMOFLDSPQESAGBITOYEVTLHLACCZOXACKJZRZSPCEPXUFXJHJXUVHQO");
    tmp_msg_0.predicate.assign("AYFCAYKUOKKINDAFQVOTUXQMQVITGNZNIEKSEKZDCLUVFAVRJLAFHGTITQTYBXTIPIFMCHJFABBYJGHJZSNZVNKSVEYUPHVLPXPORHKYPSQOMVZGZBGMGJZSWFRYDKYNZXPUISXXOSLEONCJBDWFBELUMAHKJEVQDIWRQJMIFUMD");
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
    msg.setTimeStamp(0.2521661585716465);
    msg.setSource(25431U);
    msg.setSourceEntity(171U);
    msg.setDestination(52670U);
    msg.setDestinationEntity(213U);
    msg.reactor.assign("GZYGUFHWJKMVGCANSHPOJTJXPARDIEEDWKWFYKPGQOUSIZOUXMBOQNSQIVGTPZHROHRBAJLSNLZUBMFITLKFSHQHQEYNUXEVKWDIILOCMZKDQTOLUVFFLRDRYPXNVITCHYYPCDQZXVKMUJJAZCEEGKBRFWSTMPMXFFTWZHWQDMDYJWMQBIHFAQUZXWIASLJHUBEGEOGAPSLTPYKJKLTCVO");

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
    msg.setTimeStamp(0.9449604503790079);
    msg.setSource(40082U);
    msg.setSourceEntity(13U);
    msg.setDestination(15659U);
    msg.setDestinationEntity(127U);
    msg.id = 113U;
    msg.width = 56001U;
    msg.height = 50872U;
    msg.widthstep = 9965U;
    msg.channels = 111U;
    msg.depth = 126U;
    msg.finaldata = 196U;
    const char tmp_msg_0[] = {-32, 83, -10, -93, -59, 103, 2, -99, -48, -105, 98, 91, 65, -126, -63, -126, 72, 99, 34, 89, -107, -96, -68, -101, 29, 95, 111, 62, -55, 24, -83, 56, 72, -40, -89, 54, 54, -66, -8, -95, 77, -5, 69, -76, 7, 75, 61, 45, -46, -4, -89, 0, -7, -12, 104, 20, -112, 85, 101, -112, -73, -49, 66, -113, 74, 105, -36, 122, 74, -49, 103, -92, -95, -84, 113, 114, -4, 68, -34, 51, -45, -32, 0, 74, -76, 21, -114, 51, 56, 116, 49, -87, 59, -102, 36, 116, 50, 65, -90, 104, -43, -61, 23, -43, 119, -4, 70, 106, 72, 93, -36, 28, -8, -50, -102, -28, -69, 92, 20, 5, -46, -71, -31, -59, 126, 13, 121, -96, -36, -93, -55, -127, 91, 108, -127, 64, 110, -89, 96, -22, -27, -46, -34, -121, -34, 84, 59, -53, 115, 65, -67, -82, -104, 44, 34, 52, -43, -110, -93, 87, 2, 106, 94, 122, 117, -93, -49, 92, -4, 64, 5, 101, 107, -88, -56, 51, 1, -80, 58, 71, 54, 92, 17, -20, -20, 107, -49, -7, -86, 30, 70, -33, -110, -57, -67, 60, 14, 33, 71, 43, -23, -51};
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
    msg.setTimeStamp(0.6683919664847271);
    msg.setSource(54714U);
    msg.setSourceEntity(202U);
    msg.setDestination(22358U);
    msg.setDestinationEntity(32U);
    msg.id = 25U;
    msg.width = 9198U;
    msg.height = 25566U;
    msg.widthstep = 35074U;
    msg.channels = 19U;
    msg.depth = 86U;
    msg.finaldata = 90U;
    const char tmp_msg_0[] = {-67, -89, 96, -122, 95, 116, 73, 116, -60, 96, -126, 81, 9, 118, -66, 7, 25, 49, 68, 116, 52, -4, 27, 27, 17, -58, 45, 19, 5, -60, -103, -109, 56, -2, -83, -89, -4, 29, 55, 73, 91, -23, -51, 113, 37, -8, 52, 58, -120, -97, 79, 108, 74, 91, 17, -111, 5, 26, 103, 43, 60, 70, -93, -61, -39, 83, -112, 70, -108, 42, 104, 111, -58, -91, -5, 44, -84, -89, -55, 56, 121, 8, 103, -42, 13, 12, -19, 92, -41, -63, 39, 50, 102, -7, -77, -44};
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
    msg.setTimeStamp(0.08060708626038549);
    msg.setSource(58562U);
    msg.setSourceEntity(31U);
    msg.setDestination(24245U);
    msg.setDestinationEntity(115U);
    msg.id = 238U;
    msg.width = 44279U;
    msg.height = 28459U;
    msg.widthstep = 14263U;
    msg.channels = 31U;
    msg.depth = 249U;
    msg.finaldata = 78U;
    const char tmp_msg_0[] = {90, -43, -52, -65, 8, 65, -26, -49, -81, -113, 94, 90, 81, -93, -18, 29, 118, 13, -122, -117, -65, 37, 79, -34, 4, 110, -9, 41, 90, -80, -125, -37, -43, 97, 95, -87, -113, 36, -57, -99, -30, 34, -15, -85, -45, 123, -54, -25, -16, -96, 88, -26, 104, -72, -49, 31, 73, -107, 43, -75, -12, -94, 10, 1, 116, -39, 111, 51, -70, 29, 80, 31};
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
    msg.setTimeStamp(0.13915407181842798);
    msg.setSource(13418U);
    msg.setSourceEntity(136U);
    msg.setDestination(55942U);
    msg.setDestinationEntity(166U);
    msg.width = 19960U;
    msg.height = 27705U;
    msg.channels = 213U;
    msg.depth = 226U;
    const char tmp_msg_0[] = {100, 43, -13, 60, 68, -100, 17, -74, 34, 97, -38, -43, 86, -60, -78, -111, 82, 91, -60, -66, 88, -91, 31, 51, 111, 109, -93, 17, -72, -104, 7, -29, -92, -5, -20, 79, -110, 42, -110, -76, -30, 78, -37, -62, 67, 48, -94, -37, 84, 12, -9, -94, 4, 82, 0, -30, 58, 115, -89, 60, -34, 97, 8, -28, -51, 43, 8, -99, -69, 58, -32, -11, -77, 8, 107, -83, 49, 33, 110, -92, -81, 43, 36, 25, 37, -4};
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
    msg.setTimeStamp(0.21103284811054057);
    msg.setSource(54231U);
    msg.setSourceEntity(81U);
    msg.setDestination(27148U);
    msg.setDestinationEntity(26U);
    msg.width = 7137U;
    msg.height = 32253U;
    msg.channels = 80U;
    msg.depth = 190U;
    const char tmp_msg_0[] = {75, -19, -25, -52, 111, -38, 33, 87, -5, 57, 89, 49, 27, 61, -74, -58, -41, 54, 2, -80, -21, -31, 13, 26, 51, -84, -99, -71, 77, 48, 56, -52, 68, 28, 59, -108, 22, 80, -100, 62, -118, -98, -55, 43, 71, -40, -32, -6, 43, -27, 17, -13, 21, -13, -45, 51, 91, -47, -102, -26, 42, -55, -13, 78, -38, 65, 5, -106, 89, -35, 2, 24, 4, -21, -62, -113, 87, -1, 39, -104, 20, 72, 101, 123, -13, 88, 67, -30, 64, -31, 74, -49, 13, -10, 125, 123, -111, 112, -32, -58, 80, 4, 121, 121, -67, 126, 71, -76, -30, 8, 9, 47, -127, -81, 51, -15, 63, 10, -50, -57, 72, 71, 85, 12, 49, -3, 7, 69, 70, 10, 106, 107, -3, -11, 64, 93, 103, 58, -106, -74, -59, 75, 89, 40, 53, 99, 22, -96, -80, -41, -122, -32, 73, -15, 72, 111, -71, 36, 99, 106, 118, 20, -9, 109, 92, 57, 23, 91, -96, 46, -123, 18, 53, -41, -109, 91, -29, -60, -1, -80, 90, 46, -77, 75, 1, 23, -78, 45, -22, 27, 92, 3, -19, -92, -13, -57, 33, -86, 78, -65, 99, 125, -85, -128, -93, -98, -116, -101, -63, 111, -77, 90, -73, -14, -57, -45, 45, 20, 120, 6, 14, 4, -34, -125, -44, -17, 17, 55, -8, 24, 63, -29, -68, 94, -119, -98, -97, 117, -121, 120, 6, 122, 123, 1, 27, -24, 90};
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
    msg.setTimeStamp(0.6755202121786753);
    msg.setSource(118U);
    msg.setSourceEntity(147U);
    msg.setDestination(31295U);
    msg.setDestinationEntity(75U);
    msg.width = 14838U;
    msg.height = 19295U;
    msg.channels = 46U;
    msg.depth = 201U;
    const char tmp_msg_0[] = {-127, -24, 98, -3, 62, 76, 100, -13, 110, -113, -106, 44, -87, 5, 49, 59, 108, 50, -40, -90, -25, -94, 72, 20, -59, 39, -94, -26, 12, -34, -64, -102, -75, -96, 17, -29, 72, -12, 46, -14, 46, 27, -37, -28, -11, 22, -30, -101, -119, 111, 116, -16, 84, 104, -98, 94, 54, -20, 97, -120, -57, 33, -107, 41, -73, -32, 72, -11, -61, 90, 104, 87, -127, -59, 34, -33, -116, -57, 33, 14, 113, 41, 87, -45, 112, -55, 5, 2, -35, 124, 120, 24, 121, 21, 96, 72, 8, -12, -5, -91, -72, 54, 65, 64, -128, -55, 63, 119, 17, -68, 90, 83, 56, -120, -32, -2, -69, 117, 4, -30, 79, -15, -19, 85, -10, -53, 9, -31, -91, 14, -45, -51, -104, -90, 79, 17, -55};
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
    msg.setTimeStamp(0.25691796860467486);
    msg.setSource(14249U);
    msg.setSourceEntity(58U);
    msg.setDestination(38558U);
    msg.setDestinationEntity(78U);
    msg.frameid = 31U;
    const char tmp_msg_0[] = {-14, 11, 58, -57, -41, 49, 16, -49, -56, -28, 42, 47, 104, 113, 88, 35, -103, -115, 20, 71, -126, -103, -73, -68, 87, -106, -13, -111, -103, -93, -25, 5, 105, -70, 38, -22, 19, 17, -37, -41, -48, 102, 121, -25, -32, 38, 89, 6, 47, 64, -19, 48, -51, -78, 72, 108, -64, 20, 98, 90, 122, 50, 55, -68, 49, 27, -22, 63, -69, -75, -115, 61, -101, 124, -112, 11, 78, -84, 90, 78, 66, 105, -69, 60, -80, 57, 123, 84, 107, -48, 105, -55, 49, 31, -13, 119, 84, -83, -41, 122, 39, 12, 120, -60, 49, -17, 16, 60, -52, 109, -55, -108, -43, 117, 67, -102, 108, 25, 108, -91, 39, 24, -35, 61, -103, -34, -78, 99, 39, 1, 57, -61, -29, 28, -41, -43, -108, -6, 22, 109, -90, 50, 121, -87, -115, 90, 103, -12, 68, 98, -12, -46, 86, -109, 60, -40, 72, -9, -89, 116, -107, -110, -26, -127, 6, 92, -88, -117, -112, 85, -26, 41, -63, -20, 121, -29};
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
    msg.setTimeStamp(0.19112149111087962);
    msg.setSource(9911U);
    msg.setSourceEntity(15U);
    msg.setDestination(62586U);
    msg.setDestinationEntity(132U);
    msg.frameid = 172U;
    const char tmp_msg_0[] = {-66, -87, -111, -11, 40, -7, 7, -89, -117, -52, 123, 93, -115, 13, 63, 15, 19, 6, -92, -112, -91, -93, -6, -78, 54, 78, 81, -77, 17, -124, 6, 10, -122, -42, -8, 0, 58, -72, -30, -40, -104, -35, 78, -89};
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
    msg.setTimeStamp(0.8186715137623021);
    msg.setSource(43999U);
    msg.setSourceEntity(204U);
    msg.setDestination(23349U);
    msg.setDestinationEntity(224U);
    msg.frameid = 186U;
    const char tmp_msg_0[] = {118, 70, 59, -58, 46, 112, -51, -9, -15, 99, -121, 59, -104, -16, -127, -111, 12, 67, 64, -64, 7, 119, 88, -7, 114, -46, -121, -92, 76, 0, -105, -20, -38, -124, -106, -65, -19, 69, -94, 75, -33, 56, 119, -96, 98, -116, -75, -85, -86, -53, 51, 24, 2, 62, -7, -4, 106, 109, 70, -28, 32, 69, 42, -105, 117, -105, 113, 96, 116, -49, -19, -45, 76, 39, -110, -72, -113, 7, 63, 44, 2, -85, -70, -87, -117, 120, -78, 65, 122, -62, -1, 6, 122, -92, 4, 22, -38, 115, -17, 44, -106, -118, -103, -111, 53, 38, -18, 101, -89, 86, -91, 64, 111, -53, -13, 126, -116, -13, -107, -18, -29, -75, -11, 73, -102, -23, 109, 56, -91, 5, -64, 11, 2, 72, -22, 93, -94, -75, -90, 16, 42, 81, 68, 88, -123};
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
    msg.setTimeStamp(0.4890750143578845);
    msg.setSource(45833U);
    msg.setSourceEntity(76U);
    msg.setDestination(40755U);
    msg.setDestinationEntity(99U);
    msg.fps = 33U;
    msg.quality = 72U;
    msg.reps = 241U;
    msg.tsize = 17U;

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
    msg.setTimeStamp(0.7580977746780182);
    msg.setSource(26261U);
    msg.setSourceEntity(86U);
    msg.setDestination(8350U);
    msg.setDestinationEntity(3U);
    msg.fps = 247U;
    msg.quality = 98U;
    msg.reps = 144U;
    msg.tsize = 94U;

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
    msg.setTimeStamp(0.355472337105433);
    msg.setSource(28415U);
    msg.setSourceEntity(251U);
    msg.setDestination(46939U);
    msg.setDestinationEntity(31U);
    msg.fps = 189U;
    msg.quality = 142U;
    msg.reps = 200U;
    msg.tsize = 209U;

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
    msg.setTimeStamp(0.6474121991503128);
    msg.setSource(47703U);
    msg.setSourceEntity(165U);
    msg.setDestination(45705U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.3392150697361688;
    msg.lon = 0.3522387015334808;
    msg.depth = 176U;
    msg.speed = 0.34921275367842974;
    msg.psi = 0.5407952758527835;

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
    msg.setTimeStamp(0.48903299977787873);
    msg.setSource(32149U);
    msg.setSourceEntity(13U);
    msg.setDestination(37125U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.7665376486062551;
    msg.lon = 0.36423609196713147;
    msg.depth = 29U;
    msg.speed = 0.27990887307884904;
    msg.psi = 0.2140367310096981;

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
    msg.setTimeStamp(0.11648158342752146);
    msg.setSource(13003U);
    msg.setSourceEntity(231U);
    msg.setDestination(58881U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.42070901104397285;
    msg.lon = 0.8178556466239376;
    msg.depth = 112U;
    msg.speed = 0.7827462194763392;
    msg.psi = 0.506176770784675;

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
    msg.setTimeStamp(0.6754134068184033);
    msg.setSource(56773U);
    msg.setSourceEntity(151U);
    msg.setDestination(28364U);
    msg.setDestinationEntity(35U);
    msg.label.assign("WZRVONZRVIDAWAHLEYQNFROZXWLXJBAKRTEJTTSXBKQFDWBSXGLFVJLNXTWMJONOPLDMHRXSRBECACCYRSNMRHBVJSOSBVJYDQMQHINRJPEKYYCIGDAPBUYIEWQOFFGCBHWVKLXIATFQTGUTYQMSSKZPKCJGCOTUCAUENIUCZZPWVXYQEMKDGJMUTKTDNX");
    msg.lat = 0.8241262735016872;
    msg.lon = 0.556470841211945;
    msg.z = 0.7915012786640664;
    msg.z_units = 133U;
    msg.cog = 0.14659232446800452;
    msg.sog = 0.4734847388023149;

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
    msg.setTimeStamp(0.7520578164988018);
    msg.setSource(46434U);
    msg.setSourceEntity(228U);
    msg.setDestination(13469U);
    msg.setDestinationEntity(210U);
    msg.label.assign("BKEUBEXPTYCIFXOVZGHLPMZRNYJAKWNUMGMDPNUJGLCVKVTUQVRZPXFCZXMJALKZACVAORHZAAKBKLSXAJZQYYQIFGWUILDBZRICSKDQFUSZEDTKNBAXLJORHNBTCSTJRORMBONFNTTJVHOSNHPIHMHUSISFJOIRBOVDULWGPGZYUPECELNK");
    msg.lat = 0.2529773994110245;
    msg.lon = 0.12488900600297403;
    msg.z = 0.08129942341322827;
    msg.z_units = 150U;
    msg.cog = 0.1846074065009765;
    msg.sog = 0.4835407193592053;

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
    msg.setTimeStamp(0.34228807783926374);
    msg.setSource(30240U);
    msg.setSourceEntity(85U);
    msg.setDestination(449U);
    msg.setDestinationEntity(69U);
    msg.label.assign("PWOIZMOLPFRFK");
    msg.lat = 0.9048702143781144;
    msg.lon = 0.20574266239375105;
    msg.z = 0.054604867502975996;
    msg.z_units = 119U;
    msg.cog = 0.6404106920689338;
    msg.sog = 0.4380581156661518;

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
    msg.setTimeStamp(0.08218201875585485);
    msg.setSource(29631U);
    msg.setSourceEntity(254U);
    msg.setDestination(54505U);
    msg.setDestinationEntity(107U);
    msg.name.assign("KXRILGLLMZGFAAWEUYYUUTFVCEA");
    msg.value.assign("STXFSKRARNEGHPAXQJHFCMVAYZBNFDWVFVIHIEXTMOOLORQZMNVWPXKMUOGVQZIWQUNLSVBHBRNMOTIVUS");

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
    msg.setTimeStamp(0.07195248601349269);
    msg.setSource(28826U);
    msg.setSourceEntity(125U);
    msg.setDestination(53153U);
    msg.setDestinationEntity(193U);
    msg.name.assign("JNSOCGYWTKHGZWRXBXUGEHIKPYTMMTDDRJUMTELOTYPUKVGVVYQEGWVGSEBEHCBAHVHTTWPLY");
    msg.value.assign("BKJEYNECMWXMDLLDAKSZIITXIOHSXIUIHCHTZHUGCAQYAFOLQSZQMBMDTBRDOXFWUKCXQMGYTLVHYONXSHRFRNGUAJJRABAJOVLBQKVWRWWYRVHLFPCJWYBYRYYOTZDZPEUUMPBHGZEMEJSNKAFTFOSKVVIPJMATWCQBJBBPSUPEIRKFZLUDZGRLVWNNKIQGUONZXCEDGJTPSQECPVFGRFIUNSNKEPHXCVXIMMVCGQOFDLNTYZWEHGKQA");

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
    msg.setTimeStamp(0.7278746364194254);
    msg.setSource(45089U);
    msg.setSourceEntity(2U);
    msg.setDestination(33240U);
    msg.setDestinationEntity(30U);
    msg.name.assign("CKUFTMFDDUQLZYPXXIRBUAHEMVEKAARMCJUOTYDDSMYWJWWVSOZIKJHHHSIBXJOZDTVEMLNFJIOSCVCWXOQRFLNZGLETABPFCDQMVGPUEARZHJHKFBGXPQIQGBABXUCODTUJZFAJCRGFTNEQTPRJIBOEPVCMQXO");
    msg.value.assign("TYMPYRMFEIUPJDIATQMCBHDYFHWFXRUEUUOFVMKQFIVC");

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
    msg.setTimeStamp(0.1374166398354545);
    msg.setSource(38879U);
    msg.setSourceEntity(152U);
    msg.setDestination(23234U);
    msg.setDestinationEntity(112U);
    msg.name.assign("PQXOXQLCBQNHXVWDSEUAHEIVXHMUZBMRTFPGPUCYDUJHLQQVRBOHBKE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BHVNUSQRFRASZTTJMTWPHDAVGCYBWPYTAOGVFSBXAOEQWZCNIUOGUQONPMDXKGZSYRIBEKVFRNGHDPRIVYFDZJIAWCFGCOAKUMRTRMEMMTFOLBRJWYJEJBJLCSUDSQWLKMIZHGOSXFJHQNKAEHENYTQGQBRTXVPYEZTKOISWUIJYHKLKQZQONVFCRPZPHXSMEUDCDLHJDCATUBSWIJQWLKNZMWEFXKCOPMLPXBBCLZLAIIVGGHFXYYXXAPVDDU");
    tmp_msg_0.value.assign("RVDVIGESATTRUYBOSDFZYMSVJECLWJVSJHRYGELWXMMACIZNWLYCBDPCYXKHLNOATOXKCHUMXIUSWPQTBVPFPLVDLIDZVUFJHJWBEGDG");
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
    msg.setTimeStamp(0.7903971020152134);
    msg.setSource(43565U);
    msg.setSourceEntity(63U);
    msg.setDestination(19275U);
    msg.setDestinationEntity(165U);
    msg.name.assign("VXVSSTYKJOEZNULBHHLBNJMOTUDJAUWOXTALMPUTGGPISLQDRABNLQWIREKTWFZVCKBZHGKKZDPUVBRKYJZQGPEMAGKYXZHLQZVCGFXGCDDOSRCVFEOQYOVNHGQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YZOJSYNEBSOXPWAXBTZSPTIBUNOLEEHIPASLVGWSCXBWOZYQCYAJNDGYHCNREGTVHAOZLTFBCPZSRHTUIMIWXYOPEZGIQMVYELIM");
    tmp_msg_0.value.assign("KEWSKCFETPQHPWOHAQIAEFXEMQXVOMMJLDURGNEYCYXAPVMGKRJISVVTLYZTJLLSFDHJUYWURNNXBGUHGOLSVBRYQNCWQBZJADJDSNHOUOLJBFIZMPBQFCIQRJPQMBSSCEEBSLFWMKGUTJLDXKTEKMWDZCKNTXOYMZHONSPFGCXIKPEDDCKVTOGWOGYGYPFTZIUUWVVPRMQFQAHURRAZTFYJY");
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
    msg.setTimeStamp(0.09751392846253759);
    msg.setSource(52220U);
    msg.setSourceEntity(75U);
    msg.setDestination(2282U);
    msg.setDestinationEntity(232U);
    msg.name.assign("XHLFJYLJMPSLYJPEDAWMQTXHHNEDARSBCBQCUZJXDCCYBROBUFZJDGAWDONBLCJTXKAURRZOENTTBEFVQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MXSCRBQVGKTWBSSBKOIEDNRVUQATZBTMFWSGIXGAHQDWUNLXFMPCZAUZNEJGMOLUZWFENPTYRGDALALGIKPORJDYXXVUARVFHATYKBJVSXPPNDYKHFKLY");
    tmp_msg_0.value.assign("IDITSZENJBSSFARGDLSNVZOVKTVAFUMQFIQRZROZWWRYWQOMRQWTVLWLJYDDKLSNWFUPFJNMXRBZXIY");
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
    msg.setTimeStamp(0.11523224818760824);
    msg.setSource(46710U);
    msg.setSourceEntity(247U);
    msg.setDestination(5578U);
    msg.setDestinationEntity(78U);
    msg.name.assign("TYWKZEGEXPHZALWYNBIQLVJFPRGXMFOHSCQEWSMWORRMHCFJNDXOOBWPGAAFFTVGTEMLXJJQWIIYCYCWTPYZBGFUQXSQOUTJJHSQPDILUCISDHRLSIAQQQXLBKBDCTCACNLMJNRUKMTLAOFEZZGYZNVJGSAWVTPNMDZSWCERGUJHBSKKUZKDHNKXL");
    msg.visibility.assign("QZJEEBYNTQBRFQXCYOAAICGNIXHUEHTUTKJKXLBJJPZIFNWUOADPUSYDGSVXTMMJVUXYQIEFEBJRYPVMSRAEVVFBPWACKOOROWDQCFKUKZJVKYSOKPIJHNMATBGBVJPGBLFVVGTDZSTDOQNXFHZCTYGDDHYFLFRLEOYCAZMQFCUMMQLZRYPIRMWLLNMNSGSBPIWWBSOXQPJNZRWLUPAREINSIIEEQOZUHVHGZGAKXCSHWCKGDXDW");
    msg.scope.assign("XFPIFBZQYRFLXAJKBDWSOCENTSVXKRXXNRQ");

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
    msg.setTimeStamp(0.8911609259590343);
    msg.setSource(30504U);
    msg.setSourceEntity(111U);
    msg.setDestination(12880U);
    msg.setDestinationEntity(183U);
    msg.name.assign("FTVFKEAWMMPNHTVJUGLLRJYKXRMDHUZFGILLUHFKONJMICBXXNEVRBJPD");
    msg.visibility.assign("ULBAWZTXDLQWRINMRFSLQDEBICUNCBFZDMHVXXUZZVASNFOWSCZJUPGFTOCUBSEYRPBXRDJAPWOIQCVKWSVBIJTYDPMLYKUQQMCCBVZYIDXQIEDBSPZKVLHLCGXJKEEGIFRTUOGGYTVJMTQTHPDNKJCFHVTGXEAIKTAJMSYRJSHXHEZRNFQYAONZZGMSPMHOEUMTULOWFIRWWONIVGHKFKYPOAOCDJBY");
    msg.scope.assign("OJMIGCTODGLDIWZMKTJSYRQNEVKMOHWVARLQPYUJJWGRQNKADPXSUZUEPZLRXJXUJVKSOUMZHXQLMBTUBTMSNQOCWXKZTJAYKXGHVYQEPSAIVFBMPOHFSDBDROYWMHKGEGRSTPURYMCBIEZSXBQCYPOLNKIDRWULPFJOCHPHZIWA");

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
    msg.setTimeStamp(0.275881285364714);
    msg.setSource(33003U);
    msg.setSourceEntity(38U);
    msg.setDestination(12255U);
    msg.setDestinationEntity(48U);
    msg.name.assign("LCNUXTHOJSIIIYOOHUCWOJYEFUZVEIBXDNMMCCGKNZZYTKWGSSF");
    msg.visibility.assign("TNLWOVNUUASGIRFHHELBIMEARAGTQZYTXCSOPDRIKMOVKFXH");
    msg.scope.assign("GYPYUFPNXOLBWHGSURYCKNHZROSTJCOUBMTCNQJTEJELPIULVIALAWQEEQIFHRVJOOIVSDKVNHCMJZASXLTKEJDEMXSCHRHVLYTUKGEPDSYBLWKIGVEWTKOCPZICFKXBGPFOXBFSUDMWRNFIYZWOAUQQBRFEXZDMQLDZMZAQJSUGHLTWFOPJRMNYAEGAKDF");

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
    msg.setTimeStamp(0.800092795115167);
    msg.setSource(53737U);
    msg.setSourceEntity(175U);
    msg.setDestination(9383U);
    msg.setDestinationEntity(30U);
    msg.name.assign("STLKJRYBQOIOZPAYPXGPSWOADWLLPUTHCCMKWVYRAJACYUBKNQDGUCYEAOQDUZEGWUKVJHWHPICPUMNJRSFTYXZRFBLVWCVGFZPWQKFQTBJTGSDSOSQDDXIHXFMJTXNNVHKPNFKINNICJXGLQHJMBEADMVXLBUFPMUDRBCAREOEYPNAZABKAZEMTGIBS");

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
    msg.setTimeStamp(0.34857199839590824);
    msg.setSource(35910U);
    msg.setSourceEntity(52U);
    msg.setDestination(5194U);
    msg.setDestinationEntity(58U);
    msg.name.assign("SKYGFWHMCDSMUYQUZWZLJTHBQVSOUBPCPDNWGKLPBFDQAEGPBRIQWRWFKOTKJVQBGOKHYROZVCEMZVPZBXFHTJFQOQJHHUILAWEAWIFGRUEQYGNADJXSPXGNSZKFQDSJWBSDFBUTVSMLGVWCYJAMIOHJLAGPTUDSCENCZCXJPIIURHNSVEZPKBHDWTDCHRXIOKZAYFGMEOFBCUXNKEKLVRLORNU");

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
    msg.setTimeStamp(0.8133506582679685);
    msg.setSource(37739U);
    msg.setSourceEntity(56U);
    msg.setDestination(28767U);
    msg.setDestinationEntity(196U);
    msg.name.assign("FMBTMKNCVSJWQAUXIRVLXIBGQIXVHCAIOUUEBVGUWZYPDXH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HVOPMNRTCJEQOECMSPQXEOHILNXNUYOETRUBAZFFMLUXFONJPDYDVHSBJNMYGVVHCQMBNZPRKSUMIWETEFSIAXDGGAKKSSKLKJLZVLUQYPIQEQZZMDPTFQCZWZDDAFWWIOENLRJOQIIBGSBCROSLHZSWURRWGXKVKKIMITNUGDC");
    tmp_msg_0.value.assign("SBPPCWHMQMRJPXKBWLJYMFCLCKLYPZNBODWXBPGIMGTHUXCCAOGCYVAGGJZFEPSQCZAAHUHESENRSWTZAGKLTCOLFYUGZVLIVJKPYZFZAXNRHKWVKWLUFFEACWSWAPDOOSDOVYQXZQEZBINQXSJIYHTEUMP");
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
    msg.setTimeStamp(0.13996269541451833);
    msg.setSource(16013U);
    msg.setSourceEntity(234U);
    msg.setDestination(60152U);
    msg.setDestinationEntity(37U);
    msg.name.assign("VDIRIZTMCQNHMJCTXPTJBSMGHESAKNXJUWKHILTCYJKZTXWTWLQCSGINKZHCXEOYZNKNAQJATBMYUFQGLQPKZBPBYYRZOGDANTZSGBDFFQYXSXSGEOYQMEURAMTVLFEFNVNFPVQVWOUECIHSKHXRFAPBJUJCNDXINWHWAIZLOMVFELDLBRPMOMDUQBHSGYVFKPVDTEWZDFUBEJRKRROAUCGIHOCLYAWKDGOIVURVHBSXEWCYXMJGI");

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
    msg.setTimeStamp(0.705486672443484);
    msg.setSource(16182U);
    msg.setSourceEntity(176U);
    msg.setDestination(23080U);
    msg.setDestinationEntity(204U);
    msg.name.assign("VSBWJGWZGOHQQVGOMJZQTHLIYJPPAERORTAPPLUHSAZYFQIXKKFWDILGPEZPUOQAIJFAONLAICUHMUZFMHFYVBWZEYESVP");

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
    msg.setTimeStamp(0.2835704982639965);
    msg.setSource(8365U);
    msg.setSourceEntity(85U);
    msg.setDestination(47028U);
    msg.setDestinationEntity(254U);
    msg.name.assign("AGIVVYFHHAROVORWWUIWEZBCWMLPYSQJLAGNIEABZGVQNYUEMEDVEJBITUBBMODTKWOTFOBUIBZVDADPJWWSMJGPSJTXVZKYOXLZWFJFHPEQMZ");

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
    msg.setTimeStamp(0.35359091289513367);
    msg.setSource(4304U);
    msg.setSourceEntity(43U);
    msg.setDestination(65356U);
    msg.setDestinationEntity(157U);
    msg.timeout = 2746604604U;

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
    msg.setTimeStamp(0.9823997824218909);
    msg.setSource(57866U);
    msg.setSourceEntity(92U);
    msg.setDestination(25579U);
    msg.setDestinationEntity(150U);
    msg.timeout = 166398921U;

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
    msg.setTimeStamp(0.669550987465313);
    msg.setSource(35190U);
    msg.setSourceEntity(156U);
    msg.setDestination(504U);
    msg.setDestinationEntity(74U);
    msg.timeout = 645721327U;

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
    msg.setTimeStamp(0.8110061393075759);
    msg.setSource(32948U);
    msg.setSourceEntity(122U);
    msg.setDestination(37309U);
    msg.setDestinationEntity(60U);
    msg.sessid = 3516034280U;

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
    msg.setTimeStamp(0.10373703983575644);
    msg.setSource(49133U);
    msg.setSourceEntity(177U);
    msg.setDestination(28476U);
    msg.setDestinationEntity(193U);
    msg.sessid = 404468440U;

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
    msg.setTimeStamp(0.03659749153531078);
    msg.setSource(54639U);
    msg.setSourceEntity(220U);
    msg.setDestination(12016U);
    msg.setDestinationEntity(130U);
    msg.sessid = 3769544301U;

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
    msg.setTimeStamp(0.5794343947009271);
    msg.setSource(4215U);
    msg.setSourceEntity(167U);
    msg.setDestination(62476U);
    msg.setDestinationEntity(120U);
    msg.sessid = 2581768431U;
    msg.messages.assign("ZSUEMIMCRZEEYYPNKMDHOGGGCZJKGXFFNAPCKQLSMUOHONXBPRHENQGDDNKAWTJCJRRUOJIULHVQLBTBSVUYKMPWNDQLUPNWQSVKCNSNKGIBFUPXAXOOXGPJWEMHXPFEAYFTAKNDILPUTEMMUVZXZUTIOFZCSJWAERIZFDOYYMRVBLIXVTRC");

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
    msg.setTimeStamp(0.5119074675867825);
    msg.setSource(6122U);
    msg.setSourceEntity(123U);
    msg.setDestination(8272U);
    msg.setDestinationEntity(62U);
    msg.sessid = 120580435U;
    msg.messages.assign("MWILMMGASPMRDCWKFQJSTABVDTVBPGSGKVKUNJVTEPYJHRHRCFQCASZ");

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
    msg.setTimeStamp(0.37967335481480147);
    msg.setSource(10851U);
    msg.setSourceEntity(235U);
    msg.setDestination(7136U);
    msg.setDestinationEntity(223U);
    msg.sessid = 328112397U;
    msg.messages.assign("ALWLFUOCUBRFDNJKKSPYKATQXJFOLQOAHACFKNYMEDRQXOLUZAWKPMSTVEPYMFMUFIRZLWORKIGIAVZILTDBQQUEJRCBRFILMZZMPXAYHXERISDSWJTUXECCCQVTOGFRGGBPBAWPOYKHSCRVJFVBPNNCNNIAYQNNZDDPZEYTKPBZWBZWNWQIDGDESSZBUOGTYHYK");

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
    msg.setTimeStamp(0.1421833833257724);
    msg.setSource(29810U);
    msg.setSourceEntity(189U);
    msg.setDestination(45781U);
    msg.setDestinationEntity(235U);
    msg.sessid = 3677525112U;

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
    msg.setTimeStamp(0.5238758886589753);
    msg.setSource(24003U);
    msg.setSourceEntity(119U);
    msg.setDestination(5374U);
    msg.setDestinationEntity(29U);
    msg.sessid = 1480866772U;

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
    msg.setTimeStamp(0.3071307222647863);
    msg.setSource(12705U);
    msg.setSourceEntity(201U);
    msg.setDestination(25680U);
    msg.setDestinationEntity(67U);
    msg.sessid = 1199657630U;

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
    msg.setTimeStamp(0.7102601191323493);
    msg.setSource(17211U);
    msg.setSourceEntity(233U);
    msg.setDestination(34970U);
    msg.setDestinationEntity(100U);
    msg.sessid = 2009338410U;
    msg.status = 35U;

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
    msg.setTimeStamp(0.7739569148470961);
    msg.setSource(34825U);
    msg.setSourceEntity(202U);
    msg.setDestination(43622U);
    msg.setDestinationEntity(243U);
    msg.sessid = 535691324U;
    msg.status = 171U;

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
    msg.setTimeStamp(0.5482906802980017);
    msg.setSource(46940U);
    msg.setSourceEntity(71U);
    msg.setDestination(11887U);
    msg.setDestinationEntity(226U);
    msg.sessid = 3364730173U;
    msg.status = 47U;

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
    msg.setTimeStamp(0.2560477855226948);
    msg.setSource(14597U);
    msg.setSourceEntity(220U);
    msg.setDestination(28367U);
    msg.setDestinationEntity(62U);
    msg.name.assign("VEXGSDPEFLRHKLCVDMSMJHWPSQDYFXZCXSEMQSONGSOYRAMIFEMPWARNHEFOTVJYCJUPGWAANWZKIBDARIBYPORHGIFAA");

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
    msg.setTimeStamp(0.45401597367281143);
    msg.setSource(3517U);
    msg.setSourceEntity(79U);
    msg.setDestination(13738U);
    msg.setDestinationEntity(195U);
    msg.name.assign("PJHDQZTXWOMMQMTKIGYLXHMESOMNAILMGUZGVVPLBGKHPZAZSCHHJYVASDRKSXHMWOGECPUSIELGPAGWFJQRXCFDNPEFHUUABUTXQSALJXCWAOKUWUZAUVRLRCKZKLWQDRJCDTKCFCPOISFOWBTSIVQNOZVAXFFYNEXGTNNJKBNENHVDTD");

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
    msg.setTimeStamp(0.4257808141270021);
    msg.setSource(7974U);
    msg.setSourceEntity(220U);
    msg.setDestination(62251U);
    msg.setDestinationEntity(62U);
    msg.name.assign("QBLWPPMIBUPCHCWGIHIKTNVMOLGPYUZHIWKQZZYKUPEPXPNWABNDMXRLUMSJJXRGVFAJCCUGFKKNCYGDSVYYBMSVARHRHISJTTNOOERFYOIZMNINJPCPOLRSVFVWFSTDLIMQTPEQOGEAOLEQMCEHEUZQXGVDFRCDNKXZKTWXRBYQFFETVHZEGOZZAEY");

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
    msg.setTimeStamp(0.44985822887006);
    msg.setSource(30164U);
    msg.setSourceEntity(22U);
    msg.setDestination(51447U);
    msg.setDestinationEntity(220U);
    msg.name.assign("YYLHIUMDNIDQHXEAVBURDJOIYOGKPNVJZIHGXULCKIZKFQQPKOJKKMCJAFPRAALJZOBOLCEHWROBRSZCFOTWRFQSXLTYZQZXWPJGDEHRZREXEXTBFEICCFLURUMGXPIYVSZBNATSTPLVBGKSSQEXJ");

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
    msg.setTimeStamp(0.2258351323052199);
    msg.setSource(42066U);
    msg.setSourceEntity(251U);
    msg.setDestination(44717U);
    msg.setDestinationEntity(197U);
    msg.name.assign("EORYZAHNQLREXPCTSAOJSROFRXDBXJFHTPWACICLQFXMPFSFTAKEPKOQSRFWKUFBMBBGPGVREYZVLGYEOOLHDBYDBKISTZPXUHOMCWANUZPYKXIUMQBQVRDQLGKGUDGCZJCJRKWLTMUJVMGNTZDLUACEPZIKZNGYWWUHJICMNTCONDVIFAIHQJSYKOZLBQMYAEIXLVTDDHVJUHHDWRGQPANKWTZVYXCXVSIEFITV");

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
    msg.setTimeStamp(0.9656491181751237);
    msg.setSource(22261U);
    msg.setSourceEntity(60U);
    msg.setDestination(48740U);
    msg.setDestinationEntity(126U);
    msg.name.assign("XMVBWOBAHJYOAFXDSNNPIRGPCNHWOUHCTIKNXVPZGZYLLTOHFHOUJGVHDRBCTESRVBNHRFQHXJNIJDVSCAKIEIVUWMNBJASEOPJWKWOWIKALFMBEIFQYGUADDXTGCEYQALEYXZVDQGUAOSCOFUGZUAYKZWWFDDMLTZJCTGEUQ");

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
    msg.setTimeStamp(0.7297771485589631);
    msg.setSource(14436U);
    msg.setSourceEntity(65U);
    msg.setDestination(13029U);
    msg.setDestinationEntity(195U);
    msg.type = 128U;
    msg.error.assign("KWBZRYMDRYUPJIYVTKRZPYVQKTXJJGVACMGEFBOFEXVFQLMYFDVBRRJPCSDJAXJSIMFCVTSUIPXBWUHXELFLOBHDZPYNLSTIOGLQIJSPPPGSAQJGIYWCEXQHRNVXGUZRECMNZHBULEADVOHFDUXOIEDLREMBALLAJUYM");

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
    msg.setTimeStamp(0.39991855146329613);
    msg.setSource(51004U);
    msg.setSourceEntity(5U);
    msg.setDestination(50881U);
    msg.setDestinationEntity(38U);
    msg.type = 90U;
    msg.error.assign("AUOQQYMJCBZZZOFUZPNJJBSBCZYAICODPGCLRTKQRYFQAFMGOPZNENNAUQAKKJZJYIZLYOSGMVKVNKHWVKIUHHTBEIQYZRNBECSXWSOPOLLE");

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
    msg.setTimeStamp(0.37257307883395885);
    msg.setSource(41880U);
    msg.setSourceEntity(32U);
    msg.setDestination(52491U);
    msg.setDestinationEntity(177U);
    msg.type = 30U;
    msg.error.assign("UQAVYAZXJFKPLCWYMWZGHTFOWSOEQEBUGOKGBMNQZWVXRTVEWKVBYYXNPNCGXIAADQKCHRFSZZPPREIXUBRUCGRVTTIJWPIIBZOQZLTFAHSKEODBIHSSIHLHNC");

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
    msg.setTimeStamp(0.40340343915770405);
    msg.setSource(26706U);
    msg.setSourceEntity(51U);
    msg.setDestination(27513U);
    msg.setDestinationEntity(97U);
    msg.seq = 14164U;
    msg.sys_dst.assign("PASWRUDLXQMNPLKOSHDCJDNYJCTZUOFCVUSEELJTGPAFOQWQICNKIHOXZFYXBRUUKJTRZGLERRTQARBUQLIAAFQHNVMWHWOICQHLYIPFZYY");
    msg.flags = 243U;
    const char tmp_msg_0[] = {-15, -105, -24, 120, 103, -36, -77, 117, -82, -92, -96, 31, -66, -79, 12, -89, -36, -108, 87, 68, 50, 109, 85, 116, -82, 43, -68, 60, 74, 3, 73, 38, -47, -52, 70, -6, -97, 50, -121, -54, -80, 70, 59, 15, 52, -76, 14, 53, -16, -85, -117, 41, 101, -93, 85, -71, -53, -97, -61, -46, 64, 96, 25, 90, 39, -8, 8, -4, -33, -110, 26, 39, 51, 42, -72, 65, 119, 8, -59, -29, 53, -10, 14, -5, -116, -58};
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
    msg.setTimeStamp(0.5207500421918333);
    msg.setSource(17856U);
    msg.setSourceEntity(163U);
    msg.setDestination(53901U);
    msg.setDestinationEntity(12U);
    msg.seq = 21226U;
    msg.sys_dst.assign("QENZQJUMPEKLYMXDOXTUICNXDWCYPDYSKFKHOFLUEPFVSEVJQCGQQTBVYEUBMTANGLDTEJSMFANODZSAUZDHWIXFMAPYFORXGMKBYUGNDNTIJUDWACPNARQZTLIKZLDXARRJFXHQMLMCXFPAPJRCZNTHQBAESIWHWOBJSCRRZEEQSHJBPEHLTLZMCCZCRVNOPGGKUKWTHRWTYOKLBIHVBGYVIUYFPSINOHVRWSMOGWQBJVIWXYOBFVLUADXKVG");
    msg.flags = 160U;
    const char tmp_msg_0[] = {43, 33, -113, -7, -78, -82, 93, 122, -102, -116, -21, 125, -50, 72, 60, -83, -98, -36, 73, 11, -92, -8, -110, -48, -13, -48, 26, 41, 125, 4, 38, -12, 13, -108, 11, 82, 2, 101, -26, -63, 0, -89, 42, 19, 92, -110, 95, 1, -98, -119, -30, 18, 15, -32, 77, -64, -101, 31, -63, 39, 57, -127, 12, -86, -26, 74, 108, -93, 124, 1, 37, -38, -15, 65, 1, 43, 47, 68, 118, -112, 83, -50, -50, 103, 74, -22, 45, 104, -106, -84, 2, 15, 9, 78, -8, -91, -89, 114, -56, -100, 25, -16, -10, 59, -127, 57, 27, -124, -122, -50, -84, -118, 38, 32, -113, -94, -5, 17, -73, 38, 87, 53, 99, 22, 23, -50, -21, 118, -96, 125, -27, 109, -124, 27, 32, -14, -12, -32, 119, 29, 119, -114, -91, -14, -112, -110, -116, 3, -58, 48, -37, -84, 92, -105, -45, -21, -56, 48, -55, 3, -121, -72, -108, -38, -40, 98, -72, -15, 21, 13, 42, 126, -70, -96, -83, 122, -13, -13, 32, 2, 121, 84, 62, 56, 21, 0, 93, 97, 50, -122, 63, 110, -128, -92, -19, -100, 47, 72, -117, -109, 56, 62, -51, 0, 113, -101, -103, -83, 125, -44, 24, -11, 17, 106, -116, 79, -126, 111, -56, 117, 42, 121, 122, -109, 18, 105, -66, 20};
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
    msg.setTimeStamp(0.32003246566007626);
    msg.setSource(24655U);
    msg.setSourceEntity(247U);
    msg.setDestination(1661U);
    msg.setDestinationEntity(135U);
    msg.seq = 33625U;
    msg.sys_dst.assign("WWWLCBHLSETETXNPNMITYKSFWVEDPHLGODDFFOPLZINPEGQPL");
    msg.flags = 29U;
    const char tmp_msg_0[] = {-103, -31, 17, 73, -115, 9, 31, 64, -14, 92, 47, 6, 19, -82, -30, -36, -14, 27, 13, -94, -112, -81, 17, -59, 24, -89, 6, 53, 52, 23, 108, -96, -18, -64, 81, 58, 56, -58, -5, 78, -98, -116, 101, -46, 76, -88, -110, -27, -39, -66, 123, 22, -35, 4, 18, -106, 36, 57, 82, -75, -128, -76, 22, -13, -37, 84, 39, 73, 5, -32, -35, -99, 53, -8, -19, 117, -19, 91, 26, -71, 77, -102, -106, -120, 48, 33, 74, 122, 65, -116, 98, 104, 105, -127, 37, 16, -52, -8, -81, 87, -51, -60, 117, 70, 37, -37, -30, 124, 87, -8, -127, -62, -16, -121, -91, 71, -110, -98, -81, -24, -119, -109, 102, -71, 4, 102, -49, -78, 26, -47, -20, -54, 29, -86, 123, -79, -91, -81, 8, 22, 47, 29, -35, 79, -89, 35, 119, -86, -40, -9, -76, -15, -14, 9, 112, 118, -116, 121, 15, -95, 49, -127, 101, -23, -30, -89, 85, -65, 110, -106, -25, -108, 58, -49, -110, -120, -93, -56, 35, -94, -23, 80, -108, -111, -28, 94, -72, -32, 13, 82, 35, 102, 21};
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
    msg.setTimeStamp(0.7218805428677548);
    msg.setSource(3264U);
    msg.setSourceEntity(227U);
    msg.setDestination(49340U);
    msg.setDestinationEntity(106U);
    msg.sys_src.assign("SHTVDDNBYPJGKTJYVUIBASNQUBGREMFMWHXZDNOOAJDCOSQCEUEIRCZISAJAYILSQSECZPLMSTPXBCVAKPHRKZMZOHLYPBLRLEKEKUVNUCRPQVCZXKXEVXLTXHJRJVQNYILNRLQFWVIYPPIHXVZKAIHFUUJEMOHHOYAXAMPCHGTLDZKPNUJGWSQNUZFUWDTBWMRTFFCNOXMFMWYDRQBOIEGVBJCLIZGAMFKYEYDQN");
    msg.sys_dst.assign("NXMIPRIJGDMADWFYYWEBSZKNIQIBRDQHRCLBZFMPJWSAXZZIB");
    msg.flags = 149U;
    const char tmp_msg_0[] = {40, -20, 12, 54, -127, 97, -84, 45, -10, -77, -74, -107, -39, -128, 94, 9, 34, -23, -63, -41, -127, 89, -105, 13, 44, -47, 105, -117, -57, 103, -74, 82, -87, 46, 121, -112, -92, -13, 31, 17, 96, 21, 110, -120, 29, 97, -72, -48, 123, -63, -8, 112, -100, 57, 76, -41, 80, -50, 69, -44, -27, 114, 107, 40, -52, 80, -127, 81, -77, 48, 52, 68, -37, -80, -57, 123, -85, -127, 99, -41, -73, -71, 50, -84, -82, 67, -104, 44, 26, -45, 113, -62, -128, -128, 119, -79, -14, 32, 108, 54, 76, 0, -121, 51, -74, -127, 52, 88};
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
    msg.setTimeStamp(0.4524992218597036);
    msg.setSource(57098U);
    msg.setSourceEntity(145U);
    msg.setDestination(37078U);
    msg.setDestinationEntity(99U);
    msg.sys_src.assign("ALNFDFQHBXAEBVHFKVESENELYUOAZHSQBCMYAWOKWLDQDFQZVIYZGMDMKRSGMUSMKPXWHOFUWLEKKHDXENZCXGSYVPKOTTNROADTURHWQSGPFYJSMEIIQFZFZBTCVJYJTVXGAAITWFXUSZLBBNKMCENCNOQYIRPUJHHZXGVCTCQEMSJICIDQIPRVAJOAHXLPCRWAYPOBDJNWBYVUGLZTZJHWULLYTFXTWDXUBRGJGQMCP");
    msg.sys_dst.assign("AJYKYIEPIMTXCXEITUAXSTAHIDNBFESCFBVPAGDSUOBSVOZVONQATRWWDPSTMWLVTQLCNYQCVNVMGNENRZPZMPMDLRPJNKMOCUQHHJKYNBQGSJGBLKYLJZWPIHWAPVBDEOTKZCXFWABBCULHHDFYNOAIZHBTEKGDJURWSUDZZEELYQAGGUASWROWEKYMQGHVISL");
    msg.flags = 19U;
    const char tmp_msg_0[] = {-18, 122, 47, 74, 70, -88, 5, 108, -115, 18, 67, 38, 59, -23, 4, 71, 55, -5, -120, -34, 98, -6, 96, -110, 5, -64, -90, 103, 49, -7, 82, -13, 57, -125, 59, -105, -116, -59, 63, 57, -65, -97, 23, -70, -79, 11, -41, -36, -99, -12, -99, 33, 121, -12, 29, 78, 71, -55, -69, 45, -91, 29, -52, -33, -95, -48, -33, 116, -106, 95, -127, 27, 39, -68, -5, -28, -98, 124, 115, 23, 104, -83, 38, 88, 107, 74, -34, 54, 25, 31, 44, 103, 68, 65, 108, -92, 21, 86, -1, 47, -23, -113, 107, -8, 38, 81, -58, -60, -39, -51, 103, 0, 50, -100, 22, 89, -11, 118, 13, -114, 62, -121, -128};
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
    msg.setTimeStamp(0.6339874471375289);
    msg.setSource(24009U);
    msg.setSourceEntity(151U);
    msg.setDestination(10556U);
    msg.setDestinationEntity(1U);
    msg.sys_src.assign("CLGULDXVBQQBSGPLBRADNJQKDOXBGINBJIPGLHHAZWVCEHEESHYEXSMSRQZTFRZBKASERLVDROBAFFPNUAQOMWZTSWKQUIAWDKFOSYJCKUDRKRBXEUZVJPRIEXPZTCYBIVCDQTCFVFOMAPTFGFMMYOVPQVAYPNOTCAIQICTMCDKXYJYZSUSXNODNJHNZUXTHYEWTWEOWVTMEONFJWFGBHMU");
    msg.sys_dst.assign("XQWCRYXKWIJNCYCFVXJKETBPSFUUFPRSBPGYCHCVNVOHXZQBVRRZSFRMIFJPOLDZKEORZBLBTNAQXUOLFPPIBDVIQDGULAWOFMVXDTKMIHFJISTLWFDXAZDDXIHMHNUEQNEGGJVNHPAWJWKLVSQYBVGWQNNHGPZZLNEXURQAQGGERTOKVJCTTOWW");
    msg.flags = 106U;
    const char tmp_msg_0[] = {-17, -105, -86, 18, -1, 93, -21, 33, 24, 1, 83, -77, -67, 36, -109, -60, 62, 85, 123, 22, 99, 77, -98, -37, 23, -3, -41, 25, 103, 109, -92, 66, 101, 60, 23, 108, 87, -55, 114, -56, 103, 43, 103, -71, 65, -24, 125, -65, 44, -92, 15, -28, 108, -123, -65, -128, 110, -125, 25, -27, -27, 93, -84, -69, 97, -51, -102, -116, 119, 14, -81, -50, 23, 97, -75, 30, 66, -88, -121, 2, 11, 82, 111, -38, 113, -109, -12, -111, -7, -34, 47, 97, -75, 70, 38, 52, -49, -68, -76, 76, 50, 40, -33, -111, 35, 32, 38, -79, -95, -75, -115, 19, -120, 77, 29, -38, 17, 41, -9, -80, -37, -118, 42, -6, -47, 40, 31, 115, -82, 78, -101, -18, 103, 113, 121, -59, -99, -64, -115, -6, 1, 21, 85, 48, 40, 10, 37, 103};
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
    msg.setTimeStamp(0.36569608637091233);
    msg.setSource(35651U);
    msg.setSourceEntity(50U);
    msg.setDestination(27492U);
    msg.setDestinationEntity(108U);
    msg.seq = 24379U;
    msg.value = 244U;
    msg.error.assign("TWNQOYWHVETRCFPDPATGILROMVPKFFRIGCWQCSNCURVNIAETOTBAVKZNESNHPKNHCOCLJFSURPEQIDCHWTYENGXFLQHOJZGXVBLJFHM");

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
    msg.setTimeStamp(0.5545153785128567);
    msg.setSource(56939U);
    msg.setSourceEntity(0U);
    msg.setDestination(4116U);
    msg.setDestinationEntity(32U);
    msg.seq = 58323U;
    msg.value = 5U;
    msg.error.assign("NITLZJFDIAGRQZAFXOFRQPKNDHKYUAVBTMRXJEKRYMTEFIEJDPEIOTBXCLRYJHWHWJGMRHBTBSRPCEGJYKOM");

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
    msg.setTimeStamp(0.8216569034535223);
    msg.setSource(45444U);
    msg.setSourceEntity(191U);
    msg.setDestination(18536U);
    msg.setDestinationEntity(208U);
    msg.seq = 17086U;
    msg.value = 174U;
    msg.error.assign("KUADABOEPURXPAJVNAYFGNUMEWWGBUIVNHICRXKNEGMZFHRDIJPGMDSZXJZLZIQVLGYAPGBBTXQWOPKCZERKTMXSHCRSTOIODIECKLBOFEPFEKPTZFSOJZGQNXNLLDGEJ");

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
    msg.setTimeStamp(0.7544803063711093);
    msg.setSource(21327U);
    msg.setSourceEntity(194U);
    msg.setDestination(10907U);
    msg.setDestinationEntity(25U);
    msg.seq = 7728U;
    msg.sys.assign("TVUNNZIJEBGEAKAAZZXAQROIWVXAYUTYWMWWQMDBSBGORLCNCPBLKGJUQTSESUNKYLDMHOTQOHXEAEOKTBDIUXQYZVWQSOFKP");
    msg.value = 0.2027820346315513;

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
    msg.setTimeStamp(0.7615869442915435);
    msg.setSource(3635U);
    msg.setSourceEntity(69U);
    msg.setDestination(41050U);
    msg.setDestinationEntity(214U);
    msg.seq = 58812U;
    msg.sys.assign("HSXHQQPZVSATRKYHJWSYGJPDOLCBYEIFSNKXFOGLGASTWVSWERZSCCOQTIIDUAPGNMRXQQYKJUATYTBGFKWAGBFXLHRXYWZBMMJ");
    msg.value = 0.6479951944803212;

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
    msg.setTimeStamp(0.5118630149122804);
    msg.setSource(44281U);
    msg.setSourceEntity(89U);
    msg.setDestination(45754U);
    msg.setDestinationEntity(65U);
    msg.seq = 42445U;
    msg.sys.assign("UDRZWVTCQSGQGHWUVOBLUZYJKAKRNMOLDXRSQBVWYKVGWAC");
    msg.value = 0.7839808852084759;

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
    msg.setTimeStamp(0.2939264102112503);
    msg.setSource(24541U);
    msg.setSourceEntity(87U);
    msg.setDestination(2826U);
    msg.setDestinationEntity(226U);
    msg.action = 84U;
    msg.longain = 0.5899869918549858;
    msg.latgain = 0.3327915000342698;
    msg.bondthick = 290474751U;
    msg.leadgain = 0.04322511866348999;
    msg.deconflgain = 0.12027280462347945;

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
    msg.setTimeStamp(0.3302436776014632);
    msg.setSource(49983U);
    msg.setSourceEntity(50U);
    msg.setDestination(63482U);
    msg.setDestinationEntity(104U);
    msg.action = 9U;
    msg.longain = 0.9211148064510186;
    msg.latgain = 0.49942131930021194;
    msg.bondthick = 2166901493U;
    msg.leadgain = 0.4690215001219148;
    msg.deconflgain = 0.4932166843611998;

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
    msg.setTimeStamp(0.5684418654179493);
    msg.setSource(10027U);
    msg.setSourceEntity(115U);
    msg.setDestination(4452U);
    msg.setDestinationEntity(9U);
    msg.action = 71U;
    msg.longain = 0.2801505573187778;
    msg.latgain = 0.8963230979731434;
    msg.bondthick = 3476348674U;
    msg.leadgain = 0.5453762834241346;
    msg.deconflgain = 0.4889357495134856;

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
    msg.setTimeStamp(0.007866651658244073);
    msg.setSource(19994U);
    msg.setSourceEntity(97U);
    msg.setDestination(56689U);
    msg.setDestinationEntity(50U);
    msg.err_mean = 0.4431881542092523;
    msg.dist_min_abs = 0.23959022159714793;
    msg.dist_min_mean = 0.10276300186078957;

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
    msg.setTimeStamp(0.6714616951749082);
    msg.setSource(29754U);
    msg.setSourceEntity(57U);
    msg.setDestination(29201U);
    msg.setDestinationEntity(76U);
    msg.err_mean = 0.7922543073717916;
    msg.dist_min_abs = 0.5553981010623764;
    msg.dist_min_mean = 0.6530525418618881;

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
    msg.setTimeStamp(0.9818544898291375);
    msg.setSource(27856U);
    msg.setSourceEntity(172U);
    msg.setDestination(43441U);
    msg.setDestinationEntity(249U);
    msg.err_mean = 0.2793035089285263;
    msg.dist_min_abs = 0.2641319609694781;
    msg.dist_min_mean = 0.17633424391795682;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.8974295337219542);
    msg.setSource(47463U);
    msg.setSourceEntity(220U);
    msg.setDestination(6893U);
    msg.setDestinationEntity(244U);
    msg.uid = 151U;
    msg.frag_number = 183U;
    msg.num_frags = 84U;
    const char tmp_msg_0[] = {78, -91, -125, 45, -78, 59, -100, 101, 70, -128, 119, 83, 41, 124, 75, -82, 0, 64, -111, 106, -128, 69, 82, 13, -15, -68, -55, 14, 4, -100, -45, -42, -5, 26, -40, -83, 12, -18, 86, 37, -75, 0, 50, 0, 56, 22, -25, -21, -7, -16, -59, 115, 108, -69, 101, 28, 67, -29, 2, -22, -60, 28, 21, 86, -31, 94, 110, -102, -107, -120, -39, 43, -56, 103, -9, -52, 110, -73, -15, -15, -36, 114, -36, 0, -43, -8, -56, 95, 89, 23, -77, -121, 106, -30, -32, 109, 111, 21, -47, -12, -41, -51, 43, 84, -87, 86, -25, -29, 122, 105, -43, -71, 90, 18, 22, -3, -52, 38, 57, 33, -110, -18, -48, 60, 15, -67, 64, 13, 30, -63, -85, -70, 90, -2, 3, -71, 48, -74, 90, 60, 68, 91, -77, 105, -53, 85, -47, 14, 92, 24, -54, 114, -122, -54, -21, -39, -36, -22, 56, -62, -98, -108, -78, -94, 97, 92, 115, 87, 53, 25, 40, 125, -23, -70, -19, -91, 29, 5, 71, 51, 17, -59, 70, 84, -2, 104, -114, 42, 17, 51, 53, 98, 119, -34, -49, -48, 99, -12, -119, 91, 106, 16, -91, 99, -125, 43, -73, -121, -123, -89, 47, 83, 55, -127, 105, 75, 81, -108, 19, -39, -61, 117, 123, 41, -95, 7, 9, -28, 70, -58, -41, -52, 43};
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
    msg.setTimeStamp(0.36590177575337524);
    msg.setSource(27736U);
    msg.setSourceEntity(95U);
    msg.setDestination(7313U);
    msg.setDestinationEntity(5U);
    msg.uid = 158U;
    msg.frag_number = 200U;
    msg.num_frags = 62U;
    const char tmp_msg_0[] = {85, -123, 62, -113, 103, -17, 11, 59, -78, 47, 23, -47, -120, 92, 32, 98, 38, -78, -119, -43, -14};
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
    msg.setTimeStamp(0.8485431740249045);
    msg.setSource(34146U);
    msg.setSourceEntity(167U);
    msg.setDestination(6008U);
    msg.setDestinationEntity(27U);
    msg.uid = 169U;
    msg.frag_number = 35U;
    msg.num_frags = 208U;
    const char tmp_msg_0[] = {27, 5, -7, -41, -13, -27, -96, -75, -88, -34, 8, -76, -97, -97, 109, 32, -80, 114, -83, -69, -125, 115, 40, 118, -43, -92, -27, -26, 12, -73, -118, 49, 65, -14, -64, -8, 53, 58, 71, 3, 8, 51, 26, 87, 126, 48, -51, -100, 62, -42, 96, -125, -43, 64, -47, 71, -55, 14, 30, -81, 29, 105, -38, 90, -126, 93, 12, -66, 24, 80, -111, 27, -79, -37, 124, 102, -116, 114, -45, 96, 64, -43, 73, 37, -33, 25, -113};
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
    msg.setTimeStamp(0.30255102195775485);
    msg.setSource(41579U);
    msg.setSourceEntity(73U);
    msg.setDestination(61617U);
    msg.setDestinationEntity(103U);
    msg.content_type.assign("YXKZPYUMILREYOPWRWRAXDNGWAHVENLZAHKZTBNSQASMTKFQJGMHQOFJQGROIUEZCTYQVUUNYKXWOVGSEDWOGFKOHMCGSLRJZBNLVOLIJDK");
    const char tmp_msg_0[] = {-31, -69, -17, -67, 75, -76, 112, 5, 80, -128, -28, -24, 44, -99};
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
    msg.setTimeStamp(0.769612592644825);
    msg.setSource(13590U);
    msg.setSourceEntity(119U);
    msg.setDestination(17727U);
    msg.setDestinationEntity(133U);
    msg.content_type.assign("JOAIYBGQALMLPZLIEQRJMJKCGHIHOLMBFWLDAMLXZQPQPKRHUAMRSJLCKBTXZEKW");
    const char tmp_msg_0[] = {-99, 31, -112, 42, 8, -95, 37, 69, -128, -99, -107, -42, -70, 95, -94, 107, 81, -63, 77, 109, -3, 110, -71, 30, -28, 44, 126, 36, 74, -10, -100, 81, 26, -7, 99, -63, -128, 110, 9, -49, 59, 56, 121, -91, -76, 26, 122, -38, 118, 25, -59, 78, -103, -78, -122, 89, 66, 35, -118, -117, 4, 15, 114, -50, -115, 5, -64, 36, 86, 29, -47, -27, -122, 87, 4, -32, -34, 26, -94, -13, 112, -118, -62, 30, 48, -43, -45, -11, 57, -95, 71};
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
    msg.setTimeStamp(0.365962083366404);
    msg.setSource(5277U);
    msg.setSourceEntity(140U);
    msg.setDestination(51206U);
    msg.setDestinationEntity(44U);
    msg.content_type.assign("DJXACSPCTNGYYBPHSVTYJOCPMZZBMTVHBFBIMISGOBOOYAPRWVIBXNQNJTTFWYOFWKISRNDOBHVFQUXLUJEUWRPDDZM");
    const char tmp_msg_0[] = {8, -27, 9, -93, -84, 2, -104, 98, 103, 8, -54, -21, -124, -127, 110, -121, -57, 79, 42, -78, -5, -8, 89, -89, 37, -90, 120, 118, 115, -101, 65, -25, -71, -31, 13, 109, 124, 121, 64, -33, -112, -91, 98, 13, -108, 112, -44, -18, -56, -91, 110, 24, -113, -37};
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
    msg.setTimeStamp(0.34338803437931975);
    msg.setSource(9743U);
    msg.setSourceEntity(111U);
    msg.setDestination(45666U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.23307627170948664);
    msg.setSource(50001U);
    msg.setSourceEntity(1U);
    msg.setDestination(39151U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.03691303095393483);
    msg.setSource(63486U);
    msg.setSourceEntity(251U);
    msg.setDestination(1786U);
    msg.setDestinationEntity(19U);

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

  return test.getReturnValue();
}
