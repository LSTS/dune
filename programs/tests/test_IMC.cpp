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
    msg.setTimeStamp(0.252400074773);
    msg.setSource(12142U);
    msg.setSourceEntity(134U);
    msg.setDestination(23722U);
    msg.setDestinationEntity(200U);
    msg.state = 150U;
    msg.flags = 21U;
    msg.description.assign("HBCVMAXJIGDDVXSZKQUZELZGAWIZVVGHLOYYJIRZULIIRPQDFXTSCAYLWCJXB");

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
    msg.setTimeStamp(0.465855902987);
    msg.setSource(1754U);
    msg.setSourceEntity(32U);
    msg.setDestination(35155U);
    msg.setDestinationEntity(46U);
    msg.state = 177U;
    msg.flags = 136U;
    msg.description.assign("LRGHLQSTBFEVLBJKZVEWHNJXBLKZUHCLJAXMQQZPEMKWQR");

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
    msg.setTimeStamp(0.854295688412);
    msg.setSource(30393U);
    msg.setSourceEntity(203U);
    msg.setDestination(18011U);
    msg.setDestinationEntity(50U);
    msg.state = 253U;
    msg.flags = 70U;
    msg.description.assign("FVMIGKBQLIBJIQZPLZFMCSFMKBDSGBBYLXSKJAQKZPWURGXCGDUJLYUDIFFOWEHMWSVRJJPIGXUONZCTIWCXLORINFQUDRNZKQUWWLUGKDIACHXALNLNMPWQEYYDPMSBWNVHLI");

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
    msg.setTimeStamp(0.49594565117);
    msg.setSource(23602U);
    msg.setSourceEntity(68U);
    msg.setDestination(44610U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.29219103333);
    msg.setSource(30783U);
    msg.setSourceEntity(156U);
    msg.setDestination(51254U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.126240221206);
    msg.setSource(54400U);
    msg.setSourceEntity(14U);
    msg.setDestination(42054U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.859245895906);
    msg.setSource(35070U);
    msg.setSourceEntity(195U);
    msg.setDestination(11638U);
    msg.setDestinationEntity(231U);
    msg.id = 64U;
    msg.label.assign("JHPTMJGZAWYNCBRAJIRAQZTZIUJLMDEYLGPHDSXSENQQQFCWQSNZVJNVWLBLCCLTNOBTPKMZRJCGMEQXWPJHIFOKGBFIUULAFNKTXGXWUATQCNWOEOBYVFIBOUGIXYMKWFQHMHVAWF");
    msg.component.assign("MUGZOKFSIWHSVTFCBEELLXEYJQNQTNVKTHQLGVVANLOGLEXUPZQPBCDZWCUXLJIMNYRJEAJMSGFKCCOXPTYFHEYFNUVTYYCZJRVPOJQSFYAHWPSAKVDIAHRPNDRHTFTIMMMGGIAKXBLTTPSOWBUVNODFDKHXQBCRZERZJDCSWIAGUOCRUJEHQAMLGDFKYUQOBDIYMSWLLRXKGECJRRAWIYWSZMEKVQWQSXPZFDXABDOZMUXUN");
    msg.act_time = 14748U;
    msg.deact_time = 20347U;

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
    msg.setTimeStamp(0.697512415985);
    msg.setSource(35736U);
    msg.setSourceEntity(202U);
    msg.setDestination(18340U);
    msg.setDestinationEntity(170U);
    msg.id = 80U;
    msg.label.assign("GOKQUTMWPLEQBJ");
    msg.component.assign("SBGQEDBRMGILTYGZGQNVREENIGIZIGRONBPKJLVUGFKTAUCBMGNRPMAWPSRVXWPXTJHMMKPNYDQLHHCNYZVIINAHTDZOFAVDSJWHUODKETYKYKFFCXBXNEHMQSLKIALSKLDPYJGIHIZDUFRYMSMLTAPJBBKPVFLWOJIVQHUVWDWMBTCLEFXWHATYJUOCXYZCMQWOZOWOCGDEZXT");
    msg.act_time = 33610U;
    msg.deact_time = 63303U;

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
    msg.setTimeStamp(0.0639242529525);
    msg.setSource(57271U);
    msg.setSourceEntity(102U);
    msg.setDestination(32376U);
    msg.setDestinationEntity(190U);
    msg.id = 84U;
    msg.label.assign("KTBGLFIYMLASJQOEAVRDTTQDRSOENTIZDMPIFQGSYOEWBGQZ");
    msg.component.assign("NQHVOCYHWNYRGQLWHEZFFVGJIBDSZCFVFMCSBHOLWTIEPTSIUDVLRBKCKWAOQNH");
    msg.act_time = 55832U;
    msg.deact_time = 3080U;

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
    msg.setTimeStamp(0.144674622973);
    msg.setSource(61282U);
    msg.setSourceEntity(194U);
    msg.setDestination(4801U);
    msg.setDestinationEntity(245U);
    msg.id = 29U;

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
    msg.setTimeStamp(0.100373046947);
    msg.setSource(34973U);
    msg.setSourceEntity(69U);
    msg.setDestination(16807U);
    msg.setDestinationEntity(23U);
    msg.id = 164U;

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
    msg.setTimeStamp(0.939495548339);
    msg.setSource(38422U);
    msg.setSourceEntity(128U);
    msg.setDestination(56109U);
    msg.setDestinationEntity(87U);
    msg.id = 74U;

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
    msg.setTimeStamp(0.174803089818);
    msg.setSource(51910U);
    msg.setSourceEntity(21U);
    msg.setDestination(35656U);
    msg.setDestinationEntity(64U);
    msg.op = 209U;
    msg.list.assign("PRDMVKGYBHBKVLQBIUBZLZRIUDCPWXSBXOQESOQRFZJSXNYDKRAXANHSFHOQWTREVRDSMHYJQJIPDUTISFFFHCAVGWKQTHPKWVCCMEDNYJMBELLEXPPDZTGYSNAYECYEMONGTKU");

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
    msg.setTimeStamp(0.889925063528);
    msg.setSource(49156U);
    msg.setSourceEntity(114U);
    msg.setDestination(43359U);
    msg.setDestinationEntity(146U);
    msg.op = 227U;
    msg.list.assign("WHZSPNTFLZMCVUJOEZAVDQRAMTBNPXVITCSRDURAXECYSHEXJBY");

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
    msg.setTimeStamp(0.421264602566);
    msg.setSource(40627U);
    msg.setSourceEntity(211U);
    msg.setDestination(17751U);
    msg.setDestinationEntity(249U);
    msg.op = 81U;
    msg.list.assign("DJTWSKYYZQTEUMISOIVCBWOCCMXZCPVQVYKKCMDRZOZZAWBTOZYGKRJIDOIHBPABTVYEBWRPQXLWTWJSGTGDGJLSPQHFRGNUVIFQNJHYIVMNXKOYMUBAULALDWETDRNPFPQGXFXHSONQUHKLSFDHWELRNECZRHMQWSUGMFJCQCLEGVOMRIAKUELSXHFBCITUANUFZOFGBYMBSJAPVHPXDRGRKNMDPCHIEFENXDNEWLZKVSBYJU");

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
    msg.setTimeStamp(0.881040853089);
    msg.setSource(31191U);
    msg.setSourceEntity(177U);
    msg.setDestination(23600U);
    msg.setDestinationEntity(162U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.981167558537);
    msg.setSource(65177U);
    msg.setSourceEntity(174U);
    msg.setDestination(25216U);
    msg.setDestinationEntity(235U);
    msg.op = 219U;

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
    msg.setTimeStamp(0.197186217092);
    msg.setSource(1712U);
    msg.setSourceEntity(24U);
    msg.setDestination(27981U);
    msg.setDestinationEntity(84U);
    msg.op = 196U;

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
    msg.setTimeStamp(0.0994944987432);
    msg.setSource(45339U);
    msg.setSourceEntity(155U);
    msg.setDestination(3570U);
    msg.setDestinationEntity(241U);
    msg.value = 53U;

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
    msg.setTimeStamp(0.331346413264);
    msg.setSource(32696U);
    msg.setSourceEntity(230U);
    msg.setDestination(57730U);
    msg.setDestinationEntity(177U);
    msg.value = 218U;

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
    msg.setTimeStamp(0.428942417965);
    msg.setSource(23196U);
    msg.setSourceEntity(210U);
    msg.setDestination(10306U);
    msg.setDestinationEntity(197U);
    msg.value = 177U;

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
    msg.setTimeStamp(0.650044999835);
    msg.setSource(30582U);
    msg.setSourceEntity(114U);
    msg.setDestination(1165U);
    msg.setDestinationEntity(178U);
    msg.consumer.assign("NZAGMQYJHRFODIWGXEVIXTKPQMNLDQBFCSDSDWNCLJABMIJEYFOTZHMJMXYUXPBAOTJKCDXNODGEHCXZBFAUBWBP");
    msg.message_id = 59267U;

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
    msg.setTimeStamp(0.131282301353);
    msg.setSource(46468U);
    msg.setSourceEntity(1U);
    msg.setDestination(48151U);
    msg.setDestinationEntity(216U);
    msg.consumer.assign("RACYOWQYJBAPJMKZSMXYVEAHOKQDTVOIUSXXKBNQRJIPTXSJDPEDGFTRU");
    msg.message_id = 23136U;

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
    msg.setTimeStamp(0.552826337651);
    msg.setSource(51207U);
    msg.setSourceEntity(166U);
    msg.setDestination(54279U);
    msg.setDestinationEntity(133U);
    msg.consumer.assign("BOKOBLFJZFQBSOCEXBKARBHZLZCAYZSYVTBCFOUZXSMQIGPUUTVYJHLRIPTKBGHYTTOAO");
    msg.message_id = 38638U;

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
    msg.setTimeStamp(0.783014085709);
    msg.setSource(16383U);
    msg.setSourceEntity(138U);
    msg.setDestination(62084U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.232689304399);
    msg.setSource(54872U);
    msg.setSourceEntity(225U);
    msg.setDestination(22728U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.745615125665);
    msg.setSource(10281U);
    msg.setSourceEntity(182U);
    msg.setDestination(2624U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.662936921796);
    msg.setSource(45371U);
    msg.setSourceEntity(189U);
    msg.setDestination(28163U);
    msg.setDestinationEntity(23U);
    msg.section.assign("BZTUTDXVFGYPJVOHUQIURQJNAVFHTVTAVBNTEHWDZVUCUSSZQHAZVUKVLZNSKYINZMBMPKYGGPHZSNRCDIRAPIKZPDXERNSKYHDMQIJRHEULGXLWFKXBMYQGMPTNMXRCWBOEOVRBXELJOQXDZDSPIMENCELJCQPMIYLAHGTJUIFGFECWF");
    msg.param.assign("CLMRNQPDOYVTWKDAKYWGSXXGFZKAUJZZCWAGSQUBFSOFMUBBJANJUMUVLENHKWZXHTUGNFDRRXXSDYQVBLRYELNW");
    msg.value.assign("QNDIBAMVXVJTCSNUKXOHTYBPYDCJMOFGMLWKFYJRTOOJTLLFWCKZYBHJOHXRUKKRADPSSLFDNUIPWREAQQHSATEBBQQOVIFSKYRNXJZSRFUZYSJBDEOCZBGJDPHLGLNQAEAECZFHBHMTVMTQXOYCGMVSIRZWEULAWSDQVMVKPUWNPTKIQXNZUWYXLAPPCEVLGPOXIEDINAIFEGZRGTZUWUFDW");

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
    msg.setTimeStamp(0.323130046943);
    msg.setSource(45353U);
    msg.setSourceEntity(94U);
    msg.setDestination(20884U);
    msg.setDestinationEntity(80U);
    msg.section.assign("KOFAXSWJXHDHUUWRNRPMJDQYGMDYEJJELDZVTJGHTHBYLPTHQNWPIGYIFGQUWADHAOOXQOWEFXAITCDGKJXRVVSGBSFVWZZHBPRKMEIESOMOHTFRCPKILRFANIC");
    msg.param.assign("PNOHPCMDXNAWGEFAIEDSWXGCNMXDBROBXSIKVKPNWUUZKPZTZXDYIVTPJMXGCQUGTQNXTYREKHEJCIEEYEIFOQOBLQKNSURJYALZBXRIGJLDUFSBYXTJGLOKHUVGJJYUQYVVFZDCBOSQA");
    msg.value.assign("YYLESLNFSEWDDVQNVGPRKVFYCRBGVXBPVMWTVIQPQHWKWJTDUSOZJPWJIDMKLSEBUPIUOCTROOJHUTBFFAKJZHWLZUZCT");

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
    msg.setTimeStamp(0.0743519434869);
    msg.setSource(904U);
    msg.setSourceEntity(54U);
    msg.setDestination(52202U);
    msg.setDestinationEntity(232U);
    msg.section.assign("FJPTLEUEKDGTJOWAMCHQYHJNCQDDJBLHIKZMDGGXMIUOZYCEROSKIAETULOSWUBAQWLMELJSOKSCFONCJDOGBRAQBCUJDBJNVHNWHXIPKSDMIWRLBBEWEEZSZAIUGSVMWQKVFWATCFGZMAUNZYCVRKXZNLRHXODFGFRKVIFXQEZGXTGDXPQRTFIMTNLPO");
    msg.param.assign("NOXJYGYLNZZYVFCXDZIXOYXBBBGXVDWEHXAQQROTCHYIUVVCXLOHCCHTCDSUMAFQUAKQLWVSSZRMDEBRTIGWUIEKOIBQMNHPLGEWXFWPKQPUVNJCNYGFRKBEHNGMSAAMJOFQZSRJFEHPBMQJTYIXZRAVNLYBDGNEPMWKRXCABANENVIQSTLJ");
    msg.value.assign("OBJMJQTTYBYZJGKQMKBBZZYKVHEGX");

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
    msg.setTimeStamp(0.250174589207);
    msg.setSource(3316U);
    msg.setSourceEntity(188U);
    msg.setDestination(15770U);
    msg.setDestinationEntity(230U);
    msg.op = 128U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("QYVNJZYEINOAO");
    tmp_msg_0.param.assign("WZYEGSNHNABYOCDWZKYYYANMMCZGLNGGKMVXJFXMZGLROSQZBBZSTAUXAIDAEBLPTQXIKCKBXMEBWMIPUVYBWDJFDSURTCOZQVVBTMGTPFLJWLXWWPUBPHXHNNMEAGINTUECSRHQACVSDXICALJCLHEFMWFFHRFDVZWTQRZOGKAIGLVNPXQKOUJIPWKHEJUGYNYVDTSKOCVEHHSQRUSSUPLKIJJTQOLKRNXFBIYROEOAEOQHD");
    tmp_msg_0.value.assign("YMLRDLGLTBNWY");
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
    msg.setTimeStamp(0.430863869158);
    msg.setSource(28165U);
    msg.setSourceEntity(187U);
    msg.setDestination(49907U);
    msg.setDestinationEntity(159U);
    msg.op = 172U;

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
    msg.setTimeStamp(0.418528478913);
    msg.setSource(52880U);
    msg.setSourceEntity(35U);
    msg.setDestination(16545U);
    msg.setDestinationEntity(251U);
    msg.op = 59U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("VXKNUBQABRFGYJQYUVRBZJ");
    tmp_msg_0.param.assign("GIEPNTHDSGGBNHYYWSSIMQXJUZAPLFKVUFBDBSKJKYEJKYSAFEROXSQIMXHLYCFDCKNMLDLYYKTFBOVBWGHREPHXVYAUDEINVNIFXDAQFKVLCFIWIYSXCRXEIKHOBHSXPTOPWAWEEWQ");
    tmp_msg_0.value.assign("KCPOYBHHTBQQURIQVSSJUMSOBFMOQISUKIXMJIIHJXCEDRNWKCDVXUGPTALWIFUQBAWYTZLFGZVXDJXIACUDXTAMCRMXQSDAOKLBLKNJDNWALGRREDMEMCNJZFNBZXA");
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
    msg.setTimeStamp(0.899407510568);
    msg.setSource(32909U);
    msg.setSourceEntity(114U);
    msg.setDestination(17945U);
    msg.setDestinationEntity(146U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.696838755488);
    msg.setSource(52951U);
    msg.setSourceEntity(83U);
    msg.setDestination(26408U);
    msg.setDestinationEntity(197U);
    msg.op = 249U;

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
    msg.setTimeStamp(0.84262707731);
    msg.setSource(17257U);
    msg.setSourceEntity(88U);
    msg.setDestination(38084U);
    msg.setDestinationEntity(130U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.375601035085);
    msg.setSource(45394U);
    msg.setSourceEntity(202U);
    msg.setDestination(57851U);
    msg.setDestinationEntity(151U);
    msg.total_steps = 250U;
    msg.step_number = 60U;
    msg.step.assign("TEYRWWTDGMWRSIBEXJVYETPYTALMIXPCAWZSNIZJQBRFAIUVPNGLAZHRUTIVLQOUVHAMNSXKSDRMKXOBJQFZMWSSDVPRJSLUVCNOUKUGBADFHSUICMUDKCYLUFQBOJMFWLBOCKNWYHDFCJMNZPOBPGCPEPXJTPYHETXYWWEYKOSADKQFWALZVFIXXDSQGQZMBGYMHHTJVHLDVQEKGINCAXRCTGRQQ");
    msg.flags = 35U;

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
    msg.setTimeStamp(0.699477208903);
    msg.setSource(50758U);
    msg.setSourceEntity(204U);
    msg.setDestination(49783U);
    msg.setDestinationEntity(179U);
    msg.total_steps = 202U;
    msg.step_number = 236U;
    msg.step.assign("SXEXSQXDIBEBHVLJTQSTDNGKCCOEEMXQLXCA");
    msg.flags = 122U;

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
    msg.setTimeStamp(0.587674746201);
    msg.setSource(32379U);
    msg.setSourceEntity(184U);
    msg.setDestination(45063U);
    msg.setDestinationEntity(81U);
    msg.total_steps = 150U;
    msg.step_number = 98U;
    msg.step.assign("FTBEEYCOLTNXTJLQUWVSDGKZFMRWVVJGVOZXVBTNZREZUFRLPGEAHKFHCMXCHDZDZIXYPEAGSHWPPRWFNPESILMAGAXZDVPPTCJDIAUQLBXNTDMCSBWSLYRIROQKMQJLDVKXJANUOQMFJYRUBUPZBIWTXYIZQNKACOJGDUAEKCMLGRYZSHLUXIDABKFO");
    msg.flags = 122U;

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
    msg.setTimeStamp(0.226325125071);
    msg.setSource(41831U);
    msg.setSourceEntity(226U);
    msg.setDestination(11384U);
    msg.setDestinationEntity(189U);
    msg.state = 101U;
    msg.error.assign("LKKESPCKLLQLQWAURWBMTYCAFOMZVNCDHZOQDHLYECOMQPMRWGXTVMOYXWPXVFEYEYZSEZRCOJFOBUWJNXHLGVHRADYTDRIHBEUNFJPZPQSDKIFZDPFRIDBCFCVUMHYUREKMPQBDPOFMDAEGTNBJEGXCOGGXWKBXRINWCEZISBYCVTSIUNITTKHGZUQLWGVJSKSXFMBYTHVAQIAZGTUNSAKL");

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
    msg.setTimeStamp(0.534010864732);
    msg.setSource(61041U);
    msg.setSourceEntity(40U);
    msg.setDestination(39538U);
    msg.setDestinationEntity(120U);
    msg.state = 187U;
    msg.error.assign("MPQGRXPDXEFRFAUWLXORJMZGDRQEONFMRGTUEETHFNPULBWZUHIOLMVGVVJGUYNXKDCXIKKWKAEUQXTRIYBPGZTXJOPLBASVZYANVYCVDHIFBCYSATDQKJDPFRKETSNHSIIPFMMCZBDMWCWDNABRJAUQYLMXSPAVOSDMITVXECYRZHLUZTOOSICIENOFZVFOLHNGWRUIYJEPZBTZCKJCGHQJHSAPKBBSDVS");

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
    msg.setTimeStamp(0.0513522974534);
    msg.setSource(57713U);
    msg.setSourceEntity(214U);
    msg.setDestination(27095U);
    msg.setDestinationEntity(120U);
    msg.state = 81U;
    msg.error.assign("HHDQYBQIPJMMDLUASIMNMYFKZGIFTSCCNYKLANUUVXVQJRFRPBHJYYDGWYEDOGRWZEYYLWKB");

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
    msg.setTimeStamp(0.737746161486);
    msg.setSource(44608U);
    msg.setSourceEntity(119U);
    msg.setDestination(27453U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.732135524603;
    msg.lon = 0.24127761746;
    msg.height = 0.979568077669;
    msg.x = 0.486012898925;
    msg.y = 0.83273298478;
    msg.z = 0.114735722398;
    msg.phi = 0.96963602768;
    msg.theta = 0.924668101367;
    msg.psi = 0.414636378434;
    msg.u = 0.305058910476;
    msg.v = 0.402054199145;
    msg.w = 0.318414495026;
    msg.p = 0.517150516191;
    msg.q = 0.435932224179;
    msg.r = 0.0537500256111;
    msg.svx = 0.214725510009;
    msg.svy = 0.942161039193;
    msg.svz = 0.906064292364;

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
    msg.setTimeStamp(0.538190810041);
    msg.setSource(2257U);
    msg.setSourceEntity(88U);
    msg.setDestination(13317U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.483834041329;
    msg.lon = 0.433311095752;
    msg.height = 0.990610723316;
    msg.x = 0.90794535971;
    msg.y = 0.0213590429967;
    msg.z = 0.743124904947;
    msg.phi = 0.169172528781;
    msg.theta = 0.0897165925791;
    msg.psi = 0.977426428385;
    msg.u = 0.0565281453387;
    msg.v = 0.577713429913;
    msg.w = 0.840711948903;
    msg.p = 0.104960564424;
    msg.q = 0.93125523864;
    msg.r = 0.125475206054;
    msg.svx = 0.242629056554;
    msg.svy = 0.550655042776;
    msg.svz = 0.205064979561;

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
    msg.setTimeStamp(0.17853208153);
    msg.setSource(60302U);
    msg.setSourceEntity(200U);
    msg.setDestination(44805U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.778525843715;
    msg.lon = 0.0737782649376;
    msg.height = 0.382173913054;
    msg.x = 0.700008579786;
    msg.y = 0.755758188649;
    msg.z = 0.935046285451;
    msg.phi = 0.239253028066;
    msg.theta = 0.116326070854;
    msg.psi = 0.152813620409;
    msg.u = 0.396419465198;
    msg.v = 0.838426950254;
    msg.w = 0.0330757844575;
    msg.p = 0.394100586939;
    msg.q = 0.204903915439;
    msg.r = 0.334724895357;
    msg.svx = 0.568518543551;
    msg.svy = 0.615223771174;
    msg.svz = 0.29182613636;

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
    msg.setTimeStamp(0.505388748651);
    msg.setSource(35344U);
    msg.setSourceEntity(29U);
    msg.setDestination(30508U);
    msg.setDestinationEntity(14U);
    msg.op = 213U;
    msg.entities.assign("WIDENIEBBNUAYSLIUTHZSSWJGOLSCZSUTLEQKHHGUKCTPFPQDRTDBAVFLEALZRIVQJCLNHPOAUBOFU");

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
    msg.setTimeStamp(0.855632912447);
    msg.setSource(17599U);
    msg.setSourceEntity(47U);
    msg.setDestination(24864U);
    msg.setDestinationEntity(19U);
    msg.op = 61U;
    msg.entities.assign("FSAHCKSTCHIOALAJTNXJGVIMCRYFIWMUVBTJWYNQPLGXRKHDLEIXRLSEEAOMQWYNVIVYQVYXPBJHBNYLXNRSPRNLTFTZXHAUDOBLUDFSQBPYUECREBZPUWXRXQVYSINMXWXTKNOUPWKDEUGTOEOZFIZDWGHZQZAIMDHKEZSLZJURBIFBWPG");

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
    msg.setTimeStamp(0.688390373534);
    msg.setSource(25170U);
    msg.setSourceEntity(84U);
    msg.setDestination(7335U);
    msg.setDestinationEntity(195U);
    msg.op = 228U;
    msg.entities.assign("SMCWHMUNTGICCYGFWEQZOLSWHQHKEHD");

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
    msg.setTimeStamp(0.917790827606);
    msg.setSource(5449U);
    msg.setSourceEntity(86U);
    msg.setDestination(36657U);
    msg.setDestinationEntity(222U);
    msg.type = 140U;
    msg.speed = 17018U;
    const char tmp_msg_0[] = {76, 69, -97, 88, -97, 49, 21, 58, 37, -7, -120, -33, 29, -52, -27, -123, 91, 57, 22, 51, 87, -88, -28, 69, 11, 44, -22, -124, 125, 122, -69, 118, 41, -102, -67, 115, 69, -25, -109, -104, 110, -23, -113, 117, -45, -99, 41, 55, -41, -20, -19, 103, 43, 47, -74, 62, -95, -110, 44, 62, -116, 53, 70, 13, 22, -110, -25, -9, -40, 89, 36, 113, -65, 50};
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
    msg.setTimeStamp(0.56698145201);
    msg.setSource(50628U);
    msg.setSourceEntity(175U);
    msg.setDestination(8744U);
    msg.setDestinationEntity(22U);
    msg.type = 204U;
    msg.speed = 61342U;
    const char tmp_msg_0[] = {41, -42, -51, -102, -59, 121, 17, -31, -48, -70, 29, 60, -101, 121, 69, -20, 122, 39, -54, 26, -71, -109, 79, 0, -122, -58, -11, 46, -59, -12, 40, -112, -41, 37, 64, 54, 14, -81, -54, -70, -1, 20, 117, -19, 92, -88, -35, 101, -60, 51, -15, -14, 20, -103, 97, 64, -123, -58, 63, -1, -100, -12, 51, -10, 19, 18, -5, 44, 39, 68, -60, 108, -17, 111, -23, -108, 116, -10, 124, -30, 15, -94, 107, 79, -125, -92, -61, 29, 40, -113, 11, -31, 46, -71, -49, -28, -52, -44, 46, 41, -77, 61, 42, -31, -22, 36, -47, 17, 53, -48, -54, 111, 107, 56, -27, -75, 88, -71, 89, 68, 99, -9, 68, 10, 20, 72, 7};
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
    msg.setTimeStamp(0.54418438875);
    msg.setSource(16923U);
    msg.setSourceEntity(213U);
    msg.setDestination(53358U);
    msg.setDestinationEntity(30U);
    msg.type = 210U;
    msg.speed = 28579U;
    const char tmp_msg_0[] = {-103, 71, 92, -44, 88, -5, 103, 88, -79, 50, -74, -33, -107, -54, -102, -71, -97, 71, -118, 70, -114, -21, -6, 43, 24, 54, -9, 8, -127, 7, 91, 96, -37, -128, -117, 110, -14, -75, 0, 37, -24, -126, 125, -98, 89, 81, -49, 12, -80, -124, -41, 20, 112, 50, -17, -121, -53, -117, 84, -54, 81, -47, -18, -79, -126, -126, -5, 96, -110, -126, -116, 82, 79, 19, 16, 118, -121, 82, -128, -15, 93, -11, 59, 57, 38, 121, 61, 90, 35, 31, -104, -113, 32, 105, -112, -117, -29, 8, 72, 107, 89, 32, 118, -112, 34, -3, 56, -24, 90, 11, 58, 105, 36, -128, -114, 124, 115, -43, 126, -1, 59, -70, -47, 39, -47, 88, 113, -19, -86, -53, -33, 85, -1, 0, -5, -52, -20, 65, -118, -6, 1, -77, -7, -10, 84, 94, 53, 5, -46, 91, -64, -86, 50, 87, -46, 14, -31, -78, 74, 95, 88, -34, -118, -50, 90, 18, -88, 54, 38, -8, -44, 89, -117, 115, 89, 114, 117, -91, 67, -5, -58, -93, -62, -23, 51, -76, -80, -99, -65, -106, -86, 103, -98, -57, -48, 94, 92, -6, 4, 3, 50, -27, -46, 19, -30, -33, 57, -90, -74, -1, 18, -28, -90, 117, -34, 61, 113, 20, 15, 37, -60, -104, 75, -35, 41, -57, -54, 18, -114, -80, 4, -60, -57, -89, 97, -125, 111, 25, -65, -4, -62, 56, -79, -107, -24, -27, 4, -52};
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
    msg.setTimeStamp(0.537318965282);
    msg.setSource(41795U);
    msg.setSourceEntity(116U);
    msg.setDestination(58350U);
    msg.setDestinationEntity(201U);
    msg.available = 4248331750U;
    msg.value = 18U;

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
    msg.setTimeStamp(0.591158084095);
    msg.setSource(6617U);
    msg.setSourceEntity(61U);
    msg.setDestination(17187U);
    msg.setDestinationEntity(150U);
    msg.available = 3246554517U;
    msg.value = 49U;

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
    msg.setTimeStamp(0.694869516134);
    msg.setSource(65382U);
    msg.setSourceEntity(90U);
    msg.setDestination(45019U);
    msg.setDestinationEntity(83U);
    msg.available = 1932181623U;
    msg.value = 173U;

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
    msg.setTimeStamp(0.345897798348);
    msg.setSource(64084U);
    msg.setSourceEntity(214U);
    msg.setDestination(58009U);
    msg.setDestinationEntity(39U);
    msg.op = 200U;
    msg.snapshot.assign("ANIKMASQEQJVCNQYRUMBBUFYQMEQHJEMWDSFLRKTAVLIHKDNHLTFHCIMXTVGACPDYOAPBZGJWRTFFQLGIMRBIYYXEAPAOMSWCXVRXZJMGPOFTWOWUDOECJWOUJPYQBSJNZCCINNDSXXAHWRFFRBCVISEQYZNOGZNOVKZDZINVCMGEIWRSJKXQGEKSO");
    IMC::NavigationReset tmp_msg_0;
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
    msg.setTimeStamp(0.718164761189);
    msg.setSource(61185U);
    msg.setSourceEntity(164U);
    msg.setDestination(1327U);
    msg.setDestinationEntity(72U);
    msg.op = 246U;
    msg.snapshot.assign("SGITYGDEHDDTVKYIVURDHZYOXRCTDTMZKZQLXHXRSWAESAIPJVZTWGWUJPBNLMQTNJWNVVCCMLKCFOAKPILBMBFLSSVQLSXNZPSWUMDWXQLAMOQCFCCPJHGQRGYUOGTXJHWTRXKYMIFONORFOQZCUBAXOTEDECDJURNAFJJYQNYEEYGELBGFFVBKUXLNWTCQFGUDMEJLSPPKIUBVOXNVKIJPPBAMUDKAFQWWY");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("QSWZGIMVFVEBQWURGCLIRPEJEFIDLJTQZHKHMAFVBCFNUXBSAJDTJAKDRKTUEUIIWLAZWPMLFFQSGTZHYNNLHXXMVSRGCAWQDJXXMMYNECLQTAVHXSKJMYIRBPACZJJPCHWEZDOZUCEGBJUKZ");
    tmp_msg_0.timeout = 52253U;
    tmp_msg_0.contents.assign("JHDQKZKNYCIQARDWNGRETBGBCMHWLKMCXLOZCJVKQXHWDSOWLJYFEDRBFEJXZTNIFCLXVPPMZAVKYXABUYKABNQDRUWGRMXGVODSONCKIFTZPDTUXHLRLCFJVMFACGGWHOXSRWAQQIFYFQUILOKQVPQJNIJGKJMPKEDSPYBUYYGNZIFLVNEAPL");
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
    msg.setTimeStamp(0.579958714076);
    msg.setSource(46972U);
    msg.setSourceEntity(17U);
    msg.setDestination(26202U);
    msg.setDestinationEntity(245U);
    msg.op = 200U;
    msg.snapshot.assign("OZNPPEHUVIHVXSTFLMNQQYLEIWJPRMMREBJCJTZSFZNMODCWJKFGACZLVJRUADWUPDHXRDZRAOSTCBUJQNYQOVMOEWGTCXRBEQPWSGNTUKPAOGKBCXHKBDIXRPULOMNVGLYZDYKZZWBQVEQDCUSPLXZFKQRSVEV");
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 152U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.389936859646;
    tmp_tmp_msg_0_0.y = 0.620066113043;
    tmp_tmp_msg_0_0.z = 0.470593724372;
    tmp_tmp_msg_0_0.phi = 0.84664899272;
    tmp_tmp_msg_0_0.theta = 0.0611826341465;
    tmp_tmp_msg_0_0.psi = 0.754653132026;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.value = 0.323253377271;
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
    msg.setTimeStamp(0.587693040735);
    msg.setSource(17737U);
    msg.setSourceEntity(154U);
    msg.setDestination(55608U);
    msg.setDestinationEntity(178U);
    msg.op = 224U;
    msg.name.assign("TRNCNZFMRJSNKANHZHNTHKVJXAXQHFKAQJMECGBLDPLWBUXRXFVKTMYUWBZGZAZRFFOYHSBTPIJRTCUNSDMICUWLOFOXZJKQXGJQGFONBXVBM");

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
    msg.setTimeStamp(0.487646564917);
    msg.setSource(49003U);
    msg.setSourceEntity(134U);
    msg.setDestination(7548U);
    msg.setDestinationEntity(118U);
    msg.op = 41U;
    msg.name.assign("SGRAUMJVSJFMSPGKYATTBVNPOLATSRAXKFUZUZLEUMXWBBBRZTKFPMJWWNOUMHRHYIFRMRXYJLHUPELSVEVGQGDWJWQDVZENCKXCFHFWGKLVHXDNUYADTYRNJISZSPCIYIERCTQDQPTXPJOQGIOYCOVAMIVFFXBEDMRLCUGWHPALCDABKMLGWFTBWJIIUQRNXIXZSCYHQGYOGODAHTKBZZLNXBIHTVDECYFEMAWZNPZKSKQLSHQJEKQCVEOND");

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
    msg.setTimeStamp(0.999446885384);
    msg.setSource(37899U);
    msg.setSourceEntity(29U);
    msg.setDestination(46747U);
    msg.setDestinationEntity(231U);
    msg.op = 170U;
    msg.name.assign("TCRMTCZOPROQYBXXGSKTZLJQBTNRWSWPKNQWHCIOACEXKUVBSPJMBMMRFBVVWIDHHZNUHDGTTPHYUUUWJCZRGEUYDIAGIOGIIVOMLGRLQKHYNTWTQNCQ");

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
    msg.setTimeStamp(0.221265105561);
    msg.setSource(65250U);
    msg.setSourceEntity(135U);
    msg.setDestination(27059U);
    msg.setDestinationEntity(194U);
    msg.type = 156U;
    msg.htime = 0.799373570136;
    msg.context.assign("AHWYZXPUYVQVFWJ");
    msg.text.assign("CJEZMCOLPFULVGQIXIRZHFIPINCHTPUCXTQKESKNMMRRANRBESSBVPFTNPOZKVQBSQQLFFEJAMNKLLIXCMMJFZAGCHRWAYOTYYFDZSURTYWUSAIOKOLBZDYONXPPAOYKWTGZWONUUISJTPYXSPHLVQYCUR");

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
    msg.setTimeStamp(0.0884555122225);
    msg.setSource(60733U);
    msg.setSourceEntity(236U);
    msg.setDestination(41956U);
    msg.setDestinationEntity(16U);
    msg.type = 173U;
    msg.htime = 0.694233608618;
    msg.context.assign("YYMGJAAATJUZLITFPVJPDQSNOLHWFXXBBIOYTMNSHVXQBDKSNKKASAKWBWISYQNXTKSVXKZNNQOCXKCLRBWJICW");
    msg.text.assign("TPHZPWORKZOIOEVVEFAJVMUSUPHQUPFDEAGUIIKDAQUNZEBMCNQURAECWJLXWZRQSEXRBDIMXFMXWTHBGIASHKKLOKWBVLOH");

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
    msg.setTimeStamp(0.873223452682);
    msg.setSource(1367U);
    msg.setSourceEntity(86U);
    msg.setDestination(20133U);
    msg.setDestinationEntity(3U);
    msg.type = 232U;
    msg.htime = 0.260173400308;
    msg.context.assign("OULZJXIUWEHPWKJTMIDUSHVXDCJRQPARZZTZNQREXJLDOMYBDVFRCNSHNSJKRPESXIKWNGFMBBIYBRFBTYESAZAADLZKVSJEFFIBNNIARVIOOQXCVAUSLTGFGPWNGHCGMYPNCQLLKWSIQQMYJKUHDOGMPKEVZBFULUCCYRQYEOGOSGKQTDZAILVACMPEITQCKFXBHOQUAXMOJZXEDYVKHAHFFJGVWOLBYBTLXMWTCXUEWYDPMVHWZRPWDNPH");
    msg.text.assign("JYTRFHSYAGLUVZXRALWQIOZVJHCGGCKRPDZGQDQXJPODEOWIUTEDCMJYMDVYWGVXHAUMNSIOGUCKBEBLKRNUCKDLNBWDJFOXTZNTPFFCHSAKSGXAMDAVNVLHBLCKWKBWVXXKFBHQBEIYQPAJZUQPIXSHTFIZSE");

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
    msg.setTimeStamp(0.886608743662);
    msg.setSource(47492U);
    msg.setSourceEntity(163U);
    msg.setDestination(30785U);
    msg.setDestinationEntity(3U);
    msg.command = 245U;
    msg.htime = 0.679419381132;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 175U;
    tmp_msg_0.htime = 0.895917376492;
    tmp_msg_0.context.assign("VMLXYOOTKWNRRBXYJYKQYJSZLWXBABGBBCQQEFEUCGLMZIXABV");
    tmp_msg_0.text.assign("MWUDVSYOJLAPJLXBUIOZEMPZWHCYXWDDBNGULPFDOIGARRHNFKPXCISEZAVTWGBRTVVKHRHCILBQLSFDOJISDMLUZGFIKTQBVYSOSMVSHGKRZAXYOQUZJIMZYWOPSLPXYIT");
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
    msg.setTimeStamp(0.79213653063);
    msg.setSource(6215U);
    msg.setSourceEntity(175U);
    msg.setDestination(55188U);
    msg.setDestinationEntity(97U);
    msg.command = 79U;
    msg.htime = 0.129366592594;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 51U;
    tmp_msg_0.htime = 0.96727909693;
    tmp_msg_0.context.assign("QOWBHLZHJJJXTHPWANYMMCOFSENEDRLKLPOTJHAIPOUAQECFAVOUORFVPTTJOZBJIYWEKYRWMMTILQFYKRLHSGXQSQIUGKNWADOSPZGCETUNRIKGUEQNLKAJTSRZPHVWIHFNCLUENSPSYQKRUMLBFUEZZDGGYQXMRQXWRZFIVVAPCEPKHWJNXIJTDIFZUQZXHXBSVVCPEGNAVKCWRCOAWYCDDMDGODIKVXFSXVMDB");
    tmp_msg_0.text.assign("GXBWSGVZCEJIYMAEPXYTOCNGLCTARSZWEGGHJOKMBRNLUJKORMRZUVALHDYBVKJFJYNDKDOIQQNRUFAUDXWSCQPAQMGXMXWDEHCHSKAWLUQVFEKVZBKGVTAFFRINIVVXIFOGEPSLTUMRFEFOPWWTZDZYPDZYICSUPEMNLOASNWVM");
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
    msg.setTimeStamp(0.397777493167);
    msg.setSource(56714U);
    msg.setSourceEntity(151U);
    msg.setDestination(42135U);
    msg.setDestinationEntity(171U);
    msg.command = 175U;
    msg.htime = 0.334181565261;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 17U;
    tmp_msg_0.htime = 0.624639001699;
    tmp_msg_0.context.assign("ZFNTGOCXPVEOGVVLMGVRHVISJXTURMDETYMVRWJFTPINSPAHUSIGBPNXIVUGYHJXJFRHFEWETRWWMJLLZNFTOHWHPNABLSAKKCIZFQXEZGBOIAD");
    tmp_msg_0.text.assign("NLELTTIDRLPLOHJTJBGTYNXSNPHLWGKURMMZWBMBKOWQYPSDXRGCKVPZOYEBXWPTZCSZKEEXHMFKBBMFZSRPSXM");
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
    msg.setTimeStamp(0.548538308497);
    msg.setSource(3019U);
    msg.setSourceEntity(102U);
    msg.setDestination(30173U);
    msg.setDestinationEntity(200U);
    msg.op = 241U;
    msg.file.assign("HAXVPTRUOBONXWHATWLATJDYROPSRSXINMYRSTYJDOESAEVKOIGEPQPQJYLNQTSXPEYVJLIS");

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
    msg.setTimeStamp(0.401984227808);
    msg.setSource(48158U);
    msg.setSourceEntity(192U);
    msg.setDestination(57599U);
    msg.setDestinationEntity(236U);
    msg.op = 87U;
    msg.file.assign("YAFQLMVRBREWBHNWKTMWIRVSOWETGROUOTAQRWTRCLGAAEQMXFAPCA");

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
    msg.setTimeStamp(0.414755417069);
    msg.setSource(12457U);
    msg.setSourceEntity(56U);
    msg.setDestination(5131U);
    msg.setDestinationEntity(114U);
    msg.op = 132U;
    msg.file.assign("ZTWAZUPWHXJEBLMCDSCJJOMZJEMKSLDUEVSFVRFBIQIEEIFWBOOYTNMCODZJHLJXOIVWXZPTSRWGHZMXECLCDLGPOGDPTAGAAMNJRLFBOMRNKGNMARZCMCSDQPRWNIUVXIZICVMUKLXUDNKUIQXGVCRAEQQUYRPFGAVYSDHKTVQNFXFOVNAJKTRFUG");

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
    msg.setTimeStamp(0.701466335409);
    msg.setSource(17027U);
    msg.setSourceEntity(131U);
    msg.setDestination(32237U);
    msg.setDestinationEntity(151U);
    msg.op = 175U;
    msg.clock = 0.196892624811;
    msg.tz = 3;

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
    msg.setTimeStamp(0.950636965873);
    msg.setSource(3050U);
    msg.setSourceEntity(200U);
    msg.setDestination(3477U);
    msg.setDestinationEntity(154U);
    msg.op = 48U;
    msg.clock = 0.332754623413;
    msg.tz = 2;

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
    msg.setTimeStamp(0.939843709072);
    msg.setSource(33574U);
    msg.setSourceEntity(192U);
    msg.setDestination(21393U);
    msg.setDestinationEntity(226U);
    msg.op = 238U;
    msg.clock = 0.401905152535;
    msg.tz = 12;

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
    msg.setTimeStamp(0.240254890297);
    msg.setSource(54097U);
    msg.setSourceEntity(64U);
    msg.setDestination(25419U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.613782492296);
    msg.setSource(34189U);
    msg.setSourceEntity(173U);
    msg.setDestination(9877U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.0535775521655);
    msg.setSource(28186U);
    msg.setSourceEntity(221U);
    msg.setDestination(24128U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.515916663536);
    msg.setSource(23746U);
    msg.setSourceEntity(128U);
    msg.setDestination(30954U);
    msg.setDestinationEntity(160U);
    msg.sys_name.assign("AHBOATQXURLRWEFRUDEXDZGDSQJBMNVAYOTZTSGGBGZFNPZYBHDWJPGVEJVZJKCHEMFHBFJLEVKHOKZAAIJLXCUWUNPFJMCBABKVHDTKYBLHIOWIVSMUVDYLQKQXINQFYPJOIUDQOIEGWSWSQQCINBPREYXBSLMFNTSACXZCTACXYNTSQSQYNOVVUXHAFMWKTRDDPNLPYALGWRKERTFGCCUU");
    msg.sys_type = 114U;
    msg.owner = 39676U;
    msg.lat = 0.909657082106;
    msg.lon = 0.300952327153;
    msg.height = 0.326494217376;
    msg.services.assign("BKGGMQZHBWHFRKZGLIQLGMUTWJSXICGCROOTPLZXRGAYWFJLAYPHHQABLXPARADOTPSUYMVEUSABUQOWILMPBVEYVKDSXRPIJPCKVUEESNJJKNHMBIREBICPPCWGEXYLZIUOFDUYRFHIOGJHFQKCDAQRSXJYBXLZKBOCGZCYSQOFEWFKMTKVUAAIDUJHXDZHY");

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
    msg.setTimeStamp(0.640433362772);
    msg.setSource(30078U);
    msg.setSourceEntity(98U);
    msg.setDestination(42239U);
    msg.setDestinationEntity(85U);
    msg.sys_name.assign("QYNCFLVLSDIUVCYNUSIDOAWQHPWRIBTRBOTSMCRIAUMTHKZCJFEBIUAHVZRXGUCAIEYLHRIOEGSMVNNNYZWNCCIWVDMCEVPTPPCES");
    msg.sys_type = 134U;
    msg.owner = 24446U;
    msg.lat = 0.943820889805;
    msg.lon = 0.822615357935;
    msg.height = 0.685373376429;
    msg.services.assign("BRTADEHFNIROROFYTOMSIBXELQWWNPWEJSKMKWPQPPSSXAEJUYXKPXMTBCCLQAZKOONBGVMLFQJLGSJNFARILUUNIBFCIRRDFOHJVUZZBFMHXJHTEHXWYHDTANDHWBGWWGUFYYSNAJQOSETJTDQEPHAIPCZUYTBSLMTQMCNWSGL");

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
    msg.setTimeStamp(0.993984769164);
    msg.setSource(17707U);
    msg.setSourceEntity(87U);
    msg.setDestination(32668U);
    msg.setDestinationEntity(249U);
    msg.sys_name.assign("DUFHMBMKXMFYPYILXLNVMTFNVMAEEJSLLIWQXKVWGKSLVLIHTUZRPSCHTBSOUNDNMXUFRSSEZBQOOGGTLUKFCURDJZIAFCGHRAKAKHWUNXLRFCNQPZUOPIZEPLOTKEDQGNDZRKPPGWAUNXCYYHKHYJTOCYIROQBWSWE");
    msg.sys_type = 54U;
    msg.owner = 8501U;
    msg.lat = 0.614405796686;
    msg.lon = 0.874111504162;
    msg.height = 0.291396935239;
    msg.services.assign("JTGVXXZXKXWJTBZAMRXSKCYLFFODWOCZTNQCBPANFSDIBCOFVUOVPLQGFPTEFAYSKGRVBUEMEOAUZBFRKQVGWALHNKKDYNHW");

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
    msg.setTimeStamp(0.695504218395);
    msg.setSource(27304U);
    msg.setSourceEntity(151U);
    msg.setDestination(3476U);
    msg.setDestinationEntity(144U);
    msg.service.assign("ZLPFQEUEOHUDZVEUKNMABHFFWOLYKJYCNXWEZBXUOTQYUJXPXVWV");
    msg.service_type = 222U;

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
    msg.setTimeStamp(0.511627503838);
    msg.setSource(41705U);
    msg.setSourceEntity(208U);
    msg.setDestination(32433U);
    msg.setDestinationEntity(0U);
    msg.service.assign("LWJBMPUMCBCWPFLWSWEEEWEMCTVZNIASZHFWXJIFXTANVHUKNQRJRTKNHOZZSGLHYAGIRWYKVOEXTPZTOIOEPUFNDXUQDBKWZHADXTLZQATAQOIFBRXCSVUDJZVKGCANUHEQSMXJKITEIRCBIAFUMXRLPNHHXVYCGPOVPGPEYYMFCYGVRJDWOLGDHFDSJVQQYMHJFKALQZRQTDDZNWRRKPGIOLUBBISMTNYGBMA");
    msg.service_type = 100U;

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
    msg.setTimeStamp(0.19531370227);
    msg.setSource(60884U);
    msg.setSourceEntity(71U);
    msg.setDestination(2300U);
    msg.setDestinationEntity(169U);
    msg.service.assign("JYBABHMLIULMHJGRZCTRCVTPOKLUBCNFOWXYPAVDDWNKUFNUSRJGLBQAFURPZNVGWPQY");
    msg.service_type = 34U;

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
    msg.setTimeStamp(0.455511216993);
    msg.setSource(20947U);
    msg.setSourceEntity(222U);
    msg.setDestination(57691U);
    msg.setDestinationEntity(42U);
    msg.value = 0.907430957741;

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
    msg.setTimeStamp(0.0424626171757);
    msg.setSource(58041U);
    msg.setSourceEntity(160U);
    msg.setDestination(19576U);
    msg.setDestinationEntity(246U);
    msg.value = 0.886586589663;

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
    msg.setTimeStamp(0.206200385676);
    msg.setSource(13678U);
    msg.setSourceEntity(237U);
    msg.setDestination(8930U);
    msg.setDestinationEntity(188U);
    msg.value = 0.674808961556;

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
    msg.setTimeStamp(0.320089768965);
    msg.setSource(47731U);
    msg.setSourceEntity(18U);
    msg.setDestination(50425U);
    msg.setDestinationEntity(72U);
    msg.value = 0.933642957183;

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
    msg.setTimeStamp(0.356512483771);
    msg.setSource(35881U);
    msg.setSourceEntity(70U);
    msg.setDestination(40307U);
    msg.setDestinationEntity(182U);
    msg.value = 0.540910660401;

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
    msg.setTimeStamp(0.244994130186);
    msg.setSource(34620U);
    msg.setSourceEntity(31U);
    msg.setDestination(41332U);
    msg.setDestinationEntity(140U);
    msg.value = 0.304301950711;

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
    msg.setTimeStamp(0.264212748179);
    msg.setSource(7482U);
    msg.setSourceEntity(23U);
    msg.setDestination(40089U);
    msg.setDestinationEntity(205U);
    msg.value = 0.81960404482;

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
    msg.setTimeStamp(0.177616007056);
    msg.setSource(47897U);
    msg.setSourceEntity(146U);
    msg.setDestination(43932U);
    msg.setDestinationEntity(118U);
    msg.value = 0.458395174982;

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
    msg.setTimeStamp(0.184249247309);
    msg.setSource(16324U);
    msg.setSourceEntity(58U);
    msg.setDestination(48814U);
    msg.setDestinationEntity(213U);
    msg.value = 0.671557098124;

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
    msg.setTimeStamp(0.919463889368);
    msg.setSource(63567U);
    msg.setSourceEntity(12U);
    msg.setDestination(64074U);
    msg.setDestinationEntity(251U);
    msg.number.assign("WLLTKTAQHSTIEZCIXKJCYJPWNJGRVCZOPFOYVWIZLUCLEYGQXJCXDQJRXSRACYUNMCUGHBNDMNTVQZVIAYKXE");
    msg.timeout = 36437U;
    msg.contents.assign("PHFGEBTRDGTIRBKRZSADVJNXEJUYYALFSVQKTFHHXXBJNVCEWJDZALDUGULEAQVTNTOBNPNXMOPVJEKZFVSCCPAFKOMXDPQINOYMXEGOLBFIKJMQVZGZQCPHBQYHUHMCSFMOAEPSLTWRAZRKQUYTNVKHIDYCHIRMTWQSHSLYZLFIRAGDXNYJWBFKLCOYEVWIWTDZRXBGBLWGGWRDUSKBLPZJESKA");

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
    msg.setTimeStamp(0.332310550511);
    msg.setSource(27145U);
    msg.setSourceEntity(117U);
    msg.setDestination(25268U);
    msg.setDestinationEntity(57U);
    msg.number.assign("LNDTFNRVMFIMDHQYQIUUJPFYYSMLLFTKEMBPWUBWAHKBFJTTJCY");
    msg.timeout = 14165U;
    msg.contents.assign("UGVLWFMNEGXRKQDEDJJHZKAEOBFXQWYSPTGOSLYWVKCNQWOIOFUYNXACRJZDKTOXHNAYGZFDFURIMYX");

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
    msg.setTimeStamp(0.513891524253);
    msg.setSource(61048U);
    msg.setSourceEntity(88U);
    msg.setDestination(46650U);
    msg.setDestinationEntity(10U);
    msg.number.assign("NYTDWSDINQOFWKTHZMOCIUUMMSLREYMXFGOAFUIGGKWEVQPCBYEFYLLXTURMXXSWCXBGQYQMXAQJFBEJVKXUVHKCXPVVSNNOKGQDZCLZKUSOKAJGDUMRHSZADXLAQIAJDMRJVBQEPCWRNHPUCIBVGBPZUOHTCOLWTGERRKZPINBMYFSNTDRLNDADTQFYQFILOAHYVJNJCEV");
    msg.timeout = 28501U;
    msg.contents.assign("NCIBZMNPAZFELVNLOJHHCWEODVUGCRGBMYBWRWWFWDGDYJVBMMTRQBVYCKLUPJURNMWMIORMJNKXDXJPXVGPZZASDSGKNRIF");

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
    msg.setTimeStamp(0.682849837002);
    msg.setSource(4638U);
    msg.setSourceEntity(195U);
    msg.setDestination(52837U);
    msg.setDestinationEntity(201U);
    msg.seq = 2156958276U;
    msg.destination.assign("BIOJQCQZELJBGNRFFJRGMZHVYXSPSAAICSSWPNODGLLPQFCXOZZLYIFUEDYKEFLLGRPSFYMDNCDWWZDARTWAHHOLAPPAFZYVUIFUVYARW");
    msg.timeout = 35732U;
    const char tmp_msg_0[] = {68, -35, -22, -19, 107, -101, 4, 123, 78, -52, 123, 52, -9, 102, 104, 80, -49, 60, -26, -52, 56, -95, 90, -122, 1, -50, 66, 32, 122, -14, -33, 118, 5, 103, -10, 64, -35, 86, 53, 36, -84, 38, -98, -88, -18, -107, -4, -5, 17, -127, 78, -86, 107, -81, 79, 79, -79, 5, 54, 24, 20, 102, -1, 37, -101, 104, 14, 47, -12, 55, 15, -49, -101, -119, -88, -16, 76, -46, -96, -98, -14, 40, 94, 3, -127, -40, -109, -114, -123, -4, 99, 110, -12, -88, -7, 20, 9, 57, -42, 118, -71, -16, 65, -79, -75, 23, -14, -34, 22, 92, -41, 10};
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
    msg.setTimeStamp(0.364492386887);
    msg.setSource(57962U);
    msg.setSourceEntity(6U);
    msg.setDestination(13881U);
    msg.setDestinationEntity(175U);
    msg.seq = 2956370963U;
    msg.destination.assign("DDCKKRJOTVKMMGVTPXLAVAIKXTFDZDYUKFRYJFXKXQEXHAILOCBBOKBIMFEPGYNYSBTIOZS");
    msg.timeout = 5232U;
    const char tmp_msg_0[] = {-22, 96, 125, 81, 112, 121, 5, -34, -21, -30, -101, 5, 64, -9, 121, -16, 114, 89, -56, 95, -42, 99, -56, 17, -126, -42, -98, 76, -112, -25, 21, -22, -75, -53, -60, -8, 78, -20, -14, 117, -75, -84, -120, 12, -93, -78, 98, -51, -75, 31, -59, 1, 123, 99, 10, -90, -38, 5, 104, 1, -118, -117, 94, -55, -12, -44, -33, 77, 8, 84, -120, -91, -32, -19, 2, 122, -108, -104, -82, 121, 74};
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
    msg.setTimeStamp(0.391995140332);
    msg.setSource(15660U);
    msg.setSourceEntity(216U);
    msg.setDestination(5409U);
    msg.setDestinationEntity(123U);
    msg.seq = 249874544U;
    msg.destination.assign("ZUXNRXXJVOTOZOWRFFLCPPZVSQAUQUCEXQQJGFTURUSHKNDGTZZWHAOIIYOJJKAFHYHUTAXEFYXGDTFPETZDHLBKIVRSOGGYMEQXMWLNKDRFWXERZGASLRSUWBBQNEHTGDTNPZWBBSIJCVVKYMRVEKCJNHAHIUYCDMWIRYPLLIJOCEBHMMFQLQUPILLWVWFECVTYYBMNSUMJOQWYAPKZKOQSHKPAGBINPNBNJ");
    msg.timeout = 1783U;
    const char tmp_msg_0[] = {-70, -55, -114, 95, 18, -50, -116, 59, 109, -57, -78, -11, -89, 101, -89, -15, -82, 26, -26, 89, -49, -39, -86, -94, 52, 48, -43, -21, 34, -24, -46, -33, -118, -118, 13, 94, -14, 82, 41, -101, 41, 10, 83, 126, -83, 83, 107, -123, 60, -28, -17, -112, -73, -84, 4, -114, -88, -84, 75, 113, 19, 121, 33, 98, -6, 125, -9, 84, 8, -89, 74, 92, 41, 51, -95, -58, 125, 16, 37, 104, 27, -31, -36, 76, -34, 116, -81, -45, -81, -58, 56, -28, -76, -127, 57, -44, -26, 120, 46, 114, -51, -99, -103, -6, 79, -118, -23, 38, -1, -99, 31, 116, 5, 75, 70, -112, 21, 23};
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
    msg.setTimeStamp(0.527314069652);
    msg.setSource(39628U);
    msg.setSourceEntity(142U);
    msg.setDestination(52360U);
    msg.setDestinationEntity(201U);
    msg.source.assign("RGZMJDOBAQZSJLCOEDCUYEPMONDJISLCVRMQJTQJAXMLUKKWQVBDEJ");
    const char tmp_msg_0[] = {74, 79, 120, -1, -59, -111, 64, 63, -48, -110, 29, -110, -114, 84, 23, -119, 15, 47, 33, -43, 92, -18, -21, -73, -89, -75, -98, -90};
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
    msg.setTimeStamp(0.895457086875);
    msg.setSource(58930U);
    msg.setSourceEntity(36U);
    msg.setDestination(33598U);
    msg.setDestinationEntity(19U);
    msg.source.assign("TPYRELQJNSUPSXDZXXFHLMSWBAEUABMEAZGUOMZELJGEIYICSSMXRKNQUNVGIVIPBCDCVMUQWAFVPQGMWYOSTDYBGPYTWEJHHDIWAOZCDCWBXVHYGQGPHHMQRJKTXFCTVFAJPDZWKGDEOFHOUNSDCLICALRDYJOXESKVVNVNABFTENDUZZKCLEVOTOKTIOFPZRSW");
    const char tmp_msg_0[] = {104, 9, 25, 93, 13, 41, 1, -52, 122, 15, -46, -111, -40, 25, -125, 106, 108, -107, 96, 59, -95, -53, 57, 94, -106, 104, -20, -88, -93, 46, -113, -41, 26, 102, -3, 17, 111, -68, 38, -105, 57, 30, -75, -43, -33, -25, 109, -103, 111, -57, -37, -72, -63, 22, 56, -63, 99, -105, 79, -124, -13, 58, -66, -25, -69, 118, 123, -72, 106, 7, 42, -14, 108, 95, 114, 21, -38, -38, 113, -59, -124, 64, 77, -121, 8, -42, 46, -6, 24, -34, -66, 84, 85, 62, 88, 36, 92, -38, -116, 60, 125, -101, 23, -118, -23, 54, -65, -128, -115, -67, 20, -2, 76, 107, 79, -27, 11, -66, 77, 71, -3, 75, 102, 122, 4, 73, 89, -57, 32, 78, -35, 81, 67, 95, -85, -115, 108, -1, 73, 74, -121, 27, -48, -30, -28, 85, -60, 125, 22, 112, 110, -7, 109, -59, 63, -70, 91, 42, -80, 76, 106, 78, 20, 25, 56, 18, 113, -64, 2, -48, -115, -110, 97, -83, -66, 70, 71, 43, 112, 5, 9, -74, 51, -84, 12, -6, 122, -3, 124, 118, 14, -97, -14, 33, -28, 85, -53, 61, 12, 55, -53, -59, 83, -48, 122, -27, 36, 4, 2, -105, 109, -7, -128, -119, 117, 96, -62, -111, 13, 4, 76, -28, 81, 31, 88, 22, 87, 38, 81, -28, -37, -121, -17, -43, -115, 101, 126, -56, 55, -41, 82, -72, 47, 45, 57, 29, -63, -35, -14, -28, -74, -82, -82, -37};
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
    msg.setTimeStamp(0.402520902031);
    msg.setSource(56026U);
    msg.setSourceEntity(163U);
    msg.setDestination(48561U);
    msg.setDestinationEntity(28U);
    msg.source.assign("QGXNZTWAZYWJRINUEWJUAACUMIPHENXMBSSBHEDVGIRPJACKEOGYJULYSPJMZOXNCFYPDLWH");
    const char tmp_msg_0[] = {-125, -59, 124, -48, -34, -97, 78, 109, -108, 19, -126, 20, 94, 0, -113, 51, -74, 109, -53, -38, 17, 11, -51, -50, 26, -118, -5, 32, -44, -60, 74, 114, -27, -3, -48, 99, -27, 78, 70, -102, -109, -89, -101, -102, 13, 64, 97, -83, 114, 117, -63, -19, -16, -57, -94, 38, -97, 14, 38, -34, -93, 123, -49, -96, 93, -23, -108, -76, 62, -103, -94, 103, 111, -32, -46, -25, 20, 74, 86, -35, 95, -65, -111, 44, -41, 117, 55, 105, -62, -13, -101, -115, -88, 5, -30, 74, 67, 33, 101, -77, 42, -101, -9, -86, 17, -49, -80, -88, -84, 91, -110, -107, -102, -58, 104, -17, 104, -73, 52, 88, 123, 68, 76, -38, 6, -88, -7, -104, 84, 71, 1, 15, 112, 9, -93, 121, 39, -30, -113, 121, -30, 115, -36, 0, 18, 13, -16, 120, -55, -122, -97, 96, 87, 102, 103, -94, 14, 114, -82, -15, -87, -100, -16, 102, 61, -29, 70, -102, 112, 28, 43, -79, 17, 124, 17, 3, 87, -119, 88, 97, -49, 43, 80, -113, -87, -89, -40, -38, 49, 12, 46, -105, 90, 45, 72, -40, 66, 70, 37, -81, -54, -42, 80, 10, 30, -86, 69, -59, 36, 96, 48};
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
    msg.setTimeStamp(0.473465818888);
    msg.setSource(11604U);
    msg.setSourceEntity(218U);
    msg.setDestination(41907U);
    msg.setDestinationEntity(24U);
    msg.seq = 398837567U;
    msg.state = 36U;
    msg.error.assign("PGRDJJHAPHBGQIMOMDLICCFUTJOZDMVIOHUMHYRQCISREOLVQRPCPLVANUQYSZKHYMMAHDGV");

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
    msg.setTimeStamp(0.577319148643);
    msg.setSource(19641U);
    msg.setSourceEntity(215U);
    msg.setDestination(65189U);
    msg.setDestinationEntity(104U);
    msg.seq = 579083080U;
    msg.state = 45U;
    msg.error.assign("DCIQVDJXVEYQKRUJKGSULDFHTNHAXMYBQENYXAFDZZDMPFFTZOUNGSGMWFJTYLZXPBPBHCQVFRWSDITNNAVAYMALJJXBMSLUSCLPHLIZNOQYHEHMNKFQJZSZIOKRYUGOPYLEHZUUJRBCDPBNUOICWKTKDOASGXNXEITIZXDVAVEQRGPBEPJOBUXTVERVR");

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
    msg.setTimeStamp(0.118929866645);
    msg.setSource(20311U);
    msg.setSourceEntity(220U);
    msg.setDestination(46977U);
    msg.setDestinationEntity(189U);
    msg.seq = 565777242U;
    msg.state = 232U;
    msg.error.assign("INWKKXQWXYPAICRSRIVSUZQAAUJDDKPKFOLDIZAHMMXQGMQDQCSHTJEHXZVYJSTOFEGMNWLNEA");

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
    msg.setTimeStamp(0.274007871475);
    msg.setSource(33525U);
    msg.setSourceEntity(253U);
    msg.setDestination(30954U);
    msg.setDestinationEntity(80U);
    msg.origin.assign("XPKAIZCMLUUDHVQXTSEFVQCSIHMBTVITAUBGTCNKIKXBFKOZYJDYJZRXNYRZ");
    msg.htime = 0.82673888405;
    msg.lat = 0.103553762633;
    msg.lon = 0.199891835088;
    const char tmp_msg_0[] = {25, -61, -52, 62, 65, 2, -91, -109, 95, 90, -90, 17, 57, -94, 25, -56, -56, -127, 88, -29, 80, -93, -4, 78, 45, -49, -6, 85, -13, -53, 51, 42, -3, -109, 61, -44, -41, -62, -57, 101, 123, 54, 121, -23, 83, 75, -8, -79, -74, -9, -105, -60, 58, 116, 93, 54, -83, -119, -101, 29, -13, 58, 44, 3, -104, 72, 72, 103, -113, -111, 31, -62, 62, -80, 76, -68, 125, 84, -51, -37, 58, 57, 44, 39, 120, -114, -15, -12, 47, -59, -62, -1, 82, 42, -64, -128, -75, -34, 108, -119, -24, -22, 59, -103, -56, -51, -57, 82, -5, 85, -13, -24, -42, 42, -33, -68, 52, -75, 83, -80, 46, 58, 59, -90, -32, 61, -3, 82, 79, 122, -55, 38, -22, 33, 52, 61, 116, 92, 22, 36, 13, -102, 92, 124, -42, -14, 115, 126, -25, -8, 46, 91, -123, -6, -19, -80, 22, 68, -58, 59, 112, 31, 80, 14, 87, 21, 113, 125, -18, -104, 111, 100, 94, 124, -115, -67, 75, -116, -61, -57, 51, 6, 77, -83, 108, -30, 53, 31, -124, 94, -73, 55, 29};
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
    msg.setTimeStamp(0.180055343932);
    msg.setSource(63559U);
    msg.setSourceEntity(140U);
    msg.setDestination(26848U);
    msg.setDestinationEntity(83U);
    msg.origin.assign("COAVDGBZFPIOSGFCDRGBKTYBELHXRFNUYYJXKCCLYHNPDWXMHWUTCQKCMBKWQTOMOVSMYLEOUSQEJIMYEZMSQJJRWVH");
    msg.htime = 0.828488287712;
    msg.lat = 0.555643366422;
    msg.lon = 0.223983568657;
    const char tmp_msg_0[] = {-69, 47, -35, 31, -9, -65, 94, -117, -99, -94, -104, 8, 6, -40, -73, -21, 123, 11, 48, 111, 58, -88, 116, -50, 67, 26, 92, 90, -19, 75, -3, 24, 66, 108, 106, 87, -8, 46, -94, -36, 56, -70, 47, 45, 7, -5, 111, -19, -83, -8, 116, 34, -119, -127, 4, 92, -48, 121, 59, -21, 73, 126, -10, -56, -3, -69, 55, -90, 59, 112, -39, 30};
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
    msg.setTimeStamp(0.241148772892);
    msg.setSource(875U);
    msg.setSourceEntity(181U);
    msg.setDestination(13289U);
    msg.setDestinationEntity(126U);
    msg.origin.assign("IONXOAPUEIGQOQEWAAKCSDUTOVRKPFVSVVOUAVEGYAKQGCLVBSRLSNLCUHKPGRDCBHQKSWANQZSKZHBRRZPROEXCUQMZFZETBADIVTCZLMGZGJJILXK");
    msg.htime = 0.331187691651;
    msg.lat = 0.39075383244;
    msg.lon = 0.0807039141303;
    const char tmp_msg_0[] = {73, -126, 88, 97, 6, -59, 100, 83, -53, 124, 101, 114, 80, -90, -2, -76, -76, 19, 96, -69, 59, -67, -102, -43, 111, 3, -26, -9, 87, -110, 89, 98, 117, 98, -28, -58, -15, 87, -79, -109, 8, -66, 68, -15, -15, 8, 99, -2, -36, -43, -48, -50, -70, 105, -97, -12, 34, -18, 120, 64, -93, 78, 5, 125, -66, 83, 75, 84, 16, 67, 55, 15, 104, 120, 20, -62, 7, 83, -49, 110, -53, -128, -8, -106, 99, -95, -115, -35, 39, -22, 18, -68, 89, 105, -22, 10, 125, 93, -94, -119, -97, 16, -13, 28, 45, -127, 100, -32, 108, 124, -62, 9, 5, 110, 84, -105, 101, 47, -104, 68, -24, -74, -53, 15, -38, 78, -47, -38, -111, 24, -106, -19, 4, 4, -61, 93, -87, -21, -8, -80, 122, -128, -119, -114, 16, 25, 123, 32, 115, -102, 100, -73, -70, -67, -122, 112, -31, 124, 73, 0, 111, -90, 30, -20, -54, -43, 21, -53, -15, 92, -75, -101, 48, 36, -100, -71, 14, -118, 73, -128, 72, -18, -83, -63, 58, -71, -5, -40, 77, 121, -67, -93, 4, -62, 104, 58, 92, 97, -125, 123, 43, 77, -31, 23, 37, -111, 39, -21, 91, -104, 17, -78, 70, -35, 75, 61, 84, -45, 117, -86, -112, -21, 123, -58, 120, -103, 12, 28, 29, 108, -67, -94};
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
    msg.setTimeStamp(0.498166805144);
    msg.setSource(57667U);
    msg.setSourceEntity(163U);
    msg.setDestination(9704U);
    msg.setDestinationEntity(180U);
    msg.req_id = 10695U;
    msg.destination.assign("YPIEXPYCQNUAPOQKEHMTGZMCSKAQNRPBSIRUEKDSNTPUOKJMDYGMJBESUQXGMJTRPZWTWXYQYWJZBJSDTCFTIQBBBKIARAIAGDNPCYFLGOEW");
    const char tmp_msg_0[] = {29, -125, -51, -37, -117, 54, -114, -29, -103, 46, -25, 102, 3, 23, -108, -49, 45, -13, 74, -44, -62, 121, -21, -63, 115, -80, 118, 65, -4, 96, 4, 108, -58, 83, 114, 40, -47, -83, -104, 7, 77, 81, 59, -55, -101, -72, -16, 19, -91, -10, -76, -51, 54, -38, 122, 7, 83, 42, -21, 107, -35, -98, 36, 25, -16, 22, 70, 21, 9, 86, 4, -47, -23, -49, 4, 28, 62, 89, 95, 60, 15, -89, 82, 102, -127, 17, 6, 11, -65, 54, 53, 41, 122, 72, -47, -96, 20, 84, 19, 40, 49, 49, -49, -21, 48, -76, 98, 63, -81, -103, -62, 92, 32, -126, 5, 72, 69, 5, -98, -126, 11, -34, -54, 47, 45, -59, 52, -55, -30, -124, -105, 60, -103, 116, 77, 63, -29, 99, 54, -25, -40, -10, 123, 103, 17, 81, -14, 25, -54, -41, 92, -40, 8, -49, 80, 116, -80, -59, 97, -89, 73, 4, -71, 45, -3, -33, 117, 51, 36, -5, -75, 66};
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
    msg.setTimeStamp(0.278151918821);
    msg.setSource(42744U);
    msg.setSourceEntity(17U);
    msg.setDestination(61043U);
    msg.setDestinationEntity(16U);
    msg.req_id = 44429U;
    msg.destination.assign("FMMOFYWRKAZJEGZEJROBNEMGYVCECBZRVSWYQHCACLIEAXVPBSZWNKPLFJWUGUXPRLNWFSBSOKMLNHCPDQTQQRLKCKKZUDDNPNFGBHYDJGHVLAIZDSTISWSHTUQOUSBQLJINFYENODMLHJVHLDAPJQJUSIRIGKTVWLEJBTTQZTXVZQYXZTCTDIIOCYOPKKPAWVHHOXBXRRCFWRJNVIEBMYTMCX");
    const char tmp_msg_0[] = {-26, -75, 107, 94, -96, 106, 45, -119, 117, 12, 69, 116, 19, 103, 70, 31, -87, -127, -43, 11, 4, 58, -18, 92, 81, -37, -49, 66, -97, -124, 1, 34, 64, 79, -14, -96, 99, 95, 123, 87, -58, -52, -122, -8, -33, -16, 65, 90, 55, -90, 79, 53, -121, 94, 27, 42, -8, -126, 30, 37, -9, -23, -53, -61, 119, -111, -126, -35, -106, 7, 113, -105, 57, 118, -74, 107, 86, -4, -33, -23, -99, 87, -44, 16, -105, 60, -32, -19, 114, -94, -93, 80, -3, 51, -91, -11, 93, 118, -11, -46, 11, 124, -121, -83, 32, 32, 4, -61, 90, -11, -53, 55, -100, -24, -109, 102, -84, 82, -42, -27, 40, 97, 39, 58, -47, -53, 73, -20, 96, -45, 69, 28, 64, -37, 46, -18, 122, -16, -72, -14, 81, 96, -44, 31, -27, 28, -24, 48, -49, 47, -42, -30, 12, 51, 0, 86, 82, 72, 68, -104, -61, 8, 112, -37, 125, -69, 112, -32, -96, -115, -52, 109, 103};
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
    msg.setTimeStamp(0.890475634821);
    msg.setSource(35304U);
    msg.setSourceEntity(231U);
    msg.setDestination(28092U);
    msg.setDestinationEntity(219U);
    msg.req_id = 31880U;
    msg.destination.assign("WHBAKFLBQMOMQSZONTCXRVJKONQUEMARZCXENUVHLOGBZPQDBQGMIECTUSOJXDNEBAYWICYTSVCPKIKSCFKTMFTIELSZEUQHUGPIGARCVJUZOYVKCSRTEEYXHHLAXHRGFDXDSJUAPIDSCMWQLZWWTPBBTOHDKRFJGJVKCOHAALPRQYUQ");
    const char tmp_msg_0[] = {-118, 48, 80, -117, -119, 74, 70, -126, 69, 78, -68, 115, 97, -31, 85, 126, -70, 121, 46, 59, -71, 16, -70, 16, 112};
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
    msg.setTimeStamp(0.364134308467);
    msg.setSource(63604U);
    msg.setSourceEntity(134U);
    msg.setDestination(33038U);
    msg.setDestinationEntity(138U);
    msg.req_id = 43600U;
    msg.status = 183U;
    msg.text.assign("UTZUSSHNATROVJPSCZZHTJQCMQEGJDEHZGCEZEJDYIZMTQTUQGBNFWOKRLKBIKPCGNIAIFLXFAVLBNOBCWTTPKKPSULGUJJDXFSTEBYUJLPWHWDBMLHYAFRRSVGYXNNKCVLDOQQGFMXRPMEMMMPLPRQQU");

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
    msg.setTimeStamp(0.967231877366);
    msg.setSource(24068U);
    msg.setSourceEntity(182U);
    msg.setDestination(59478U);
    msg.setDestinationEntity(97U);
    msg.req_id = 43352U;
    msg.status = 115U;
    msg.text.assign("BKPNDEAIMAZFTMEQHAGGKSWLXCCJXRDDNUJDWLXRNTHGBBBEXDJDMWZTPQRNQMHJTKMHVBBOO");

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
    msg.setTimeStamp(0.822364582418);
    msg.setSource(49084U);
    msg.setSourceEntity(36U);
    msg.setDestination(47812U);
    msg.setDestinationEntity(206U);
    msg.req_id = 20258U;
    msg.status = 79U;
    msg.text.assign("KDCHKHVRDIPRGYFYPJCOYCQSBKTGNSVIKIBQWCFKUOUWEZQIZFNBWHVUWGXPUMDNHFPEZGZGZSJCZZCWAQMYUKGJTNMSFL");

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
    msg.setTimeStamp(0.133899358871);
    msg.setSource(10222U);
    msg.setSourceEntity(222U);
    msg.setDestination(17192U);
    msg.setDestinationEntity(55U);
    msg.id = 102U;
    msg.range = 0.518157673865;

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
    msg.setTimeStamp(0.78718259432);
    msg.setSource(48488U);
    msg.setSourceEntity(123U);
    msg.setDestination(4840U);
    msg.setDestinationEntity(238U);
    msg.id = 72U;
    msg.range = 0.625455615753;

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
    msg.setTimeStamp(0.603927038677);
    msg.setSource(19676U);
    msg.setSourceEntity(10U);
    msg.setDestination(7900U);
    msg.setDestinationEntity(43U);
    msg.id = 166U;
    msg.range = 0.178428562608;

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
    msg.setTimeStamp(0.740111470252);
    msg.setSource(42599U);
    msg.setSourceEntity(226U);
    msg.setDestination(33884U);
    msg.setDestinationEntity(115U);
    msg.tx = 153U;
    msg.channel = 59U;
    msg.timer = 30721U;

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
    msg.setTimeStamp(0.333506581311);
    msg.setSource(54183U);
    msg.setSourceEntity(178U);
    msg.setDestination(14143U);
    msg.setDestinationEntity(58U);
    msg.tx = 124U;
    msg.channel = 109U;
    msg.timer = 47867U;

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
    msg.setTimeStamp(0.428482236074);
    msg.setSource(22558U);
    msg.setSourceEntity(10U);
    msg.setDestination(42986U);
    msg.setDestinationEntity(218U);
    msg.tx = 174U;
    msg.channel = 154U;
    msg.timer = 64155U;

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
    msg.setTimeStamp(0.928938745609);
    msg.setSource(35043U);
    msg.setSourceEntity(65U);
    msg.setDestination(6266U);
    msg.setDestinationEntity(239U);
    msg.beacon.assign("UFYJHNMTVJIEWFRBVFUHWZJXKBJGSRAMAGSTZQWHHQCPOONOHYILVEXLFGXIYZTSXZBORICERMHUPQSQJGKBHSFUTTDOQZPCMYCYBQNBKLAMFJAIDKVVX");
    msg.lat = 0.954838975209;
    msg.lon = 0.995673413907;
    msg.depth = 0.663800926547;
    msg.query_channel = 173U;
    msg.reply_channel = 165U;
    msg.transponder_delay = 35U;

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
    msg.setTimeStamp(0.440745537835);
    msg.setSource(38926U);
    msg.setSourceEntity(51U);
    msg.setDestination(3950U);
    msg.setDestinationEntity(65U);
    msg.beacon.assign("DKKQIHRNJSNWBBBXPZWXBZVOFJLVDJYRAWOQFJSZFQAOAQQLRWVYWMHGMGPYGJKFXAOTKCRWQAEBDJGUQXYNRZBMUFTAOTWKFTVXHPCOGKXKVSOKSFHSGUCN");
    msg.lat = 0.445031736352;
    msg.lon = 0.150880137825;
    msg.depth = 0.962802395812;
    msg.query_channel = 34U;
    msg.reply_channel = 127U;
    msg.transponder_delay = 54U;

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
    msg.setTimeStamp(0.782412859186);
    msg.setSource(4524U);
    msg.setSourceEntity(132U);
    msg.setDestination(2508U);
    msg.setDestinationEntity(79U);
    msg.beacon.assign("BNDABAJUAELPQSEAYVYTUOPJVUMVEGKESHYYQLCFTZIPPCBNXOATTAKPILLZHINMHSYCUTVXNZSMDJMDCBAHJOKKRPQBSLNHTCBXIEOCIZVGGGZZCGJKROLQZEGYRKFJYIRVGWDKFQCVGRNUOXFSOQMZLRPYPEWUOUYRPHXODQKXZUTBKZMFGCHLTIHNHBWUFTIDXJRIWWMGDJLPRRSDLDWEWAVEXNNCVVQSMWSFABYABDOIXHF");
    msg.lat = 0.0268475131586;
    msg.lon = 0.569080796651;
    msg.depth = 0.0693839666315;
    msg.query_channel = 12U;
    msg.reply_channel = 209U;
    msg.transponder_delay = 65U;

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
    msg.setTimeStamp(0.96199465055);
    msg.setSource(3996U);
    msg.setSourceEntity(246U);
    msg.setDestination(10182U);
    msg.setDestinationEntity(98U);
    msg.op = 197U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YWJDWGSKNAWUHEV");
    tmp_msg_0.lat = 0.358872974306;
    tmp_msg_0.lon = 0.764764357955;
    tmp_msg_0.depth = 0.73943818341;
    tmp_msg_0.query_channel = 83U;
    tmp_msg_0.reply_channel = 119U;
    tmp_msg_0.transponder_delay = 123U;
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
    msg.setTimeStamp(0.177452494113);
    msg.setSource(33130U);
    msg.setSourceEntity(20U);
    msg.setDestination(28899U);
    msg.setDestinationEntity(131U);
    msg.op = 197U;

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
    msg.setTimeStamp(0.732253464442);
    msg.setSource(52098U);
    msg.setSourceEntity(219U);
    msg.setDestination(44317U);
    msg.setDestinationEntity(114U);
    msg.op = 244U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BGLAFYKVDEUOXYNBITERWNCTVUBPREOJBJWTDPAEDKTGRFKKYFLKZDWDTVUANVLMICLNETXMJEFHGQNUGKHROGDPJBZPUQWIIHOCJQGVEKRVCBQOFZOSGWIIPHEZJ");
    tmp_msg_0.lat = 0.537498810034;
    tmp_msg_0.lon = 0.549565862979;
    tmp_msg_0.depth = 0.469650113594;
    tmp_msg_0.query_channel = 15U;
    tmp_msg_0.reply_channel = 192U;
    tmp_msg_0.transponder_delay = 162U;
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
    msg.setTimeStamp(0.210875479318);
    msg.setSource(36346U);
    msg.setSourceEntity(34U);
    msg.setDestination(33801U);
    msg.setDestinationEntity(57U);
    msg.address = 226U;

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
    msg.setTimeStamp(0.866316754964);
    msg.setSource(27219U);
    msg.setSourceEntity(58U);
    msg.setDestination(36729U);
    msg.setDestinationEntity(9U);
    msg.address = 103U;

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
    msg.setTimeStamp(0.941335637029);
    msg.setSource(64911U);
    msg.setSourceEntity(24U);
    msg.setDestination(53384U);
    msg.setDestinationEntity(32U);
    msg.address = 248U;

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
    msg.setTimeStamp(0.475755639604);
    msg.setSource(57454U);
    msg.setSourceEntity(67U);
    msg.setDestination(63964U);
    msg.setDestinationEntity(60U);
    msg.address = 143U;
    msg.status = 123U;
    msg.range = 0.273873870349;

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
    msg.setTimeStamp(0.609216901191);
    msg.setSource(24422U);
    msg.setSourceEntity(107U);
    msg.setDestination(20603U);
    msg.setDestinationEntity(182U);
    msg.address = 162U;
    msg.status = 156U;
    msg.range = 0.504009273255;

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
    msg.setTimeStamp(0.516129218164);
    msg.setSource(24156U);
    msg.setSourceEntity(7U);
    msg.setDestination(25163U);
    msg.setDestinationEntity(185U);
    msg.address = 223U;
    msg.status = 21U;
    msg.range = 0.36215595084;

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
    msg.setTimeStamp(0.223222362389);
    msg.setSource(28977U);
    msg.setSourceEntity(112U);
    msg.setDestination(21320U);
    msg.setDestinationEntity(166U);
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TOOGLJCKTPMXNHDQGTLZSUEISSXHEKODLMEWSHADFCNWWVGFKJGYHSTAALXFOSERDXJTUZEAEWXNRJPUWKWSTTR");
    tmp_msg_0.description.assign("ZEEIONUWAZQDAWWIEOPVPOOZDAJABZTFPFMLUJYWRZYKBJZEJJNMPIQVRVQYKCSBOCGWEB");
    tmp_msg_0.vnamespace.assign("SSZXLKEXRWWZCZWXRFYEAPUVJQRTDMDINOXASOKAIFGOJODSEHLLYOZMCYHSIKPXYOVYVSGLUTQPCPQRRLIRBQTZFUIFNTDBYHLHRNLZZNLKHCJWVMFGRYIVVNYBDATAOQWQEUUJAOFKAYBDFUYSGAHUMAFJPMXGNBPWHJNPPCIBVMGEUTPDJVBQEFSCMZJKLTOIEXMCENEHWXLVQKKHGDXXKMZQTWPSZHDRSB");
    tmp_msg_0.start_man_id.assign("ORJSFLPSXTLLAYAORQLOHJUJFGYJXMSIPCRQXYVEQALMCBCSWRSV");
    IMC::SessionSubscription tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 694777015U;
    tmp_tmp_msg_0_0.messages.assign("NOSEVLIPVCQKWXIALWQEVJAHLURCFKPQGGYCVVFERPDUYTKPAUQWDEAUJGIRLOSTRJVKQKRHBNFKABALNFKGGCPUSPSTRJWYWETQEWMYDMHTYXFLQZIDKHBBIMCNYBJFHGMDQMSDDIZFBNUCCZNGSQLXXHSATJDTZXBZGJPWWTMUCRHNHGEEYTXO");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::AcousticRange tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.address = 227U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.647872197383);
    msg.setSource(38807U);
    msg.setSourceEntity(118U);
    msg.setDestination(13059U);
    msg.setDestinationEntity(37U);
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 121U;
    tmp_msg_0.list.assign("YAPZLPWPEQLKASOSBVKWXBCNSZDVLYEJWHEOHMATXTXKBGDUJYUXQCEXEAOWJHEUNWZRZUWENWEDDMIHJUKZZIMRQGJSVXOTQQUGCOOSHDTCBIPTUPKLRRSCSMRSHANWEDVDLBACZYARPPLGGUQSCDPRWVPYKKZVWHBXMRHXFLGQBTRKMJBTQCBNYKRFOQFXZHVOEGXONVMJFLCFKNZUGJMVUBGQGIFAALTIFTFYNIIVN");
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
    msg.setTimeStamp(0.831109216409);
    msg.setSource(35003U);
    msg.setSourceEntity(167U);
    msg.setDestination(20474U);
    msg.setDestinationEntity(41U);
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 16U;
    tmp_msg_0.entities.assign("FBNNMTAXKJOBHPWACEHGYAOKTVRETRAZVHYHWFXONHJYPNZWHYNGHZJWSGUVIJDCCYZMWEAFQSBBLQJHRYFUICMMZEDGPITMGRJVOWOLAPNLLNQGELRJPGCRIVSMSLWXVCWUQREIFCEEIQOQKXSSMXLUCGAVXTTEUFJODRBFUKNHSIUPSCONYVDWTRGP");
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
    msg.setTimeStamp(0.148701661038);
    msg.setSource(25569U);
    msg.setSourceEntity(171U);
    msg.setDestination(27150U);
    msg.setDestinationEntity(226U);
    msg.enable = 115U;

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
    msg.setTimeStamp(0.208109393626);
    msg.setSource(16231U);
    msg.setSourceEntity(113U);
    msg.setDestination(22054U);
    msg.setDestinationEntity(149U);
    msg.enable = 86U;

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
    msg.setTimeStamp(0.482527727794);
    msg.setSource(49564U);
    msg.setSourceEntity(109U);
    msg.setDestination(63566U);
    msg.setDestinationEntity(241U);
    msg.enable = 94U;

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
    msg.setTimeStamp(0.535951568423);
    msg.setSource(52765U);
    msg.setSourceEntity(165U);
    msg.setDestination(64343U);
    msg.setDestinationEntity(93U);
    msg.summary = 25U;
    msg.level = 45U;

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
    msg.setTimeStamp(0.291657654196);
    msg.setSource(64767U);
    msg.setSourceEntity(237U);
    msg.setDestination(17526U);
    msg.setDestinationEntity(145U);
    msg.summary = 4U;
    msg.level = 205U;

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
    msg.setTimeStamp(0.415159794993);
    msg.setSource(44978U);
    msg.setSourceEntity(229U);
    msg.setDestination(62599U);
    msg.setDestinationEntity(137U);
    msg.summary = 55U;
    msg.level = 120U;

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
    msg.setTimeStamp(0.924690863238);
    msg.setSource(33537U);
    msg.setSourceEntity(202U);
    msg.setDestination(35473U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.265906348786);
    msg.setSource(44565U);
    msg.setSourceEntity(39U);
    msg.setDestination(59169U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.649453370091);
    msg.setSource(59583U);
    msg.setSourceEntity(234U);
    msg.setDestination(24542U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.996065205753);
    msg.setSource(58837U);
    msg.setSourceEntity(198U);
    msg.setDestination(57384U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.141494856316);
    msg.setSource(57232U);
    msg.setSourceEntity(164U);
    msg.setDestination(24750U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.489528222468);
    msg.setSource(33062U);
    msg.setSourceEntity(246U);
    msg.setDestination(6814U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.308627111023);
    msg.setSource(19817U);
    msg.setSourceEntity(234U);
    msg.setDestination(38239U);
    msg.setDestinationEntity(136U);
    msg.op = 82U;
    msg.system.assign("EGFJJBXVJIYOXGRPYTUHWLOYTVHCLLGWDKMJAGXQWFJHOOYQYO");
    msg.range = 0.627892730158;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 131U;
    tmp_msg_0.op = 33U;
    tmp_msg_0.plan_id.assign("WUMUPPLMKCYSDDOMDCBIZSALZTJJGSXHUPWEECHQXVMVN");
    tmp_msg_0.params.assign("WKUQLJRDWAGHUFKIRKUAIOLJNGTSOTKNAOEBBFOFTBTVXJVSLTHRDIDPSHKDUNUMDUYPKJGVLXMDDNEIFAWWIWDAKUPAHZ");
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
    msg.setTimeStamp(0.508006085079);
    msg.setSource(50460U);
    msg.setSourceEntity(74U);
    msg.setDestination(37549U);
    msg.setDestinationEntity(134U);
    msg.op = 194U;
    msg.system.assign("DGSDVMVSFKQUAZUMKZBLQEXGNPDONHJXZLLYWTQMVHKICGYRXZFDUBOPVRAUPTWNSZUTRRVEQMIEQJDSOLDCKIHCFBEXNFBBHYGBKGTFVOGCAJCCFCSKRCLZWITPPMZOWGLJXFHCFVEIZL");
    msg.range = 0.988276089212;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 3085760258U;
    tmp_msg_0.destination.assign("PVJAXVHGDLCTIFKQDFGQEWNKMZOIXYPKMQULYBLIDAAUTVXWQZTLPOXKXPNHOARMRTGBFRINJIJKSEHRSURZWJUBYFYNZVHPKZXCTXFAKPGMHXIVSFSUZQGBLLYAKTWHDSDPWNTHDVSPIYNEGBVQEPEWOFOEAQCURONZJOLU");
    tmp_msg_0.timeout = 14856U;
    const char tmp_tmp_msg_0_0[] = {-17, 119, -65, -104, 106, -98, 111, 69, 44, -25, -13};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.461733089757);
    msg.setSource(3401U);
    msg.setSourceEntity(164U);
    msg.setDestination(19161U);
    msg.setDestinationEntity(216U);
    msg.op = 38U;
    msg.system.assign("XSARTEUEHNDCGDBIQHNGCEBJMLVZZKBKQTRJBTGZFYZBXWPMKNWXUMTFYQDLECLPFNVKVRLUSBQVNPBXUIHYZMFVAJODDTVJCUMLSQROOPKCOYBFMDSOFGDTAJSTQDGYKPHGEAHISLZ");
    msg.range = 0.64043499496;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.958947993152;
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
    msg.setTimeStamp(0.444813426178);
    msg.setSource(41270U);
    msg.setSourceEntity(177U);
    msg.setDestination(64581U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.402343111461);
    msg.setSource(433U);
    msg.setSourceEntity(187U);
    msg.setDestination(40242U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.0196786001091);
    msg.setSource(33411U);
    msg.setSourceEntity(173U);
    msg.setDestination(36684U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.21229820247);
    msg.setSource(8909U);
    msg.setSourceEntity(16U);
    msg.setDestination(3803U);
    msg.setDestinationEntity(81U);
    msg.list.assign("QSFROJHQOEYEHOCRLLVGLUNRKGYGDODEASTMVQZQKMVARWVCDABVMBCXPNAPJRXLDZSVDJNYKJFTLCAGSNNEBMZCFKMQEAIYAWRUWICZKLHVHJOIMUBUSIEFINVLXOFTYRPRQPBVGGUNECEOXUHZLSJQINXCHNAZTMEEKGPJGWJHYTWJBHXYPQTPOSKORWMDTITZFIKZPTHGCOUUMRQBJDGFCKBDXVPBIXW");

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
    msg.setTimeStamp(0.667187232211);
    msg.setSource(61885U);
    msg.setSourceEntity(39U);
    msg.setDestination(16565U);
    msg.setDestinationEntity(137U);
    msg.list.assign("DCNGXAQRMVZLYCFSWUKNRILJCOUVGBXZQFQSMXOIOXNJAMWTFAJBYNLTRMFCKXHHIHADEZLEICMAMBYTCHSZGEYMHZTJZHMZJFIAVXNVUPBNRSUBTJBXSJEKBKOHPWKEDOVFPSPOOTVXSZVPYQKTXLNACQRPTQJQDRUKWSSOLKADRHH");

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
    msg.setTimeStamp(0.414621537271);
    msg.setSource(7817U);
    msg.setSourceEntity(30U);
    msg.setDestination(59116U);
    msg.setDestinationEntity(247U);
    msg.list.assign("BPRATHHTZWYJHAHZEEKZCRXKADKHCDWSGLEDQUJWTIBXALXERTJK");

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
    msg.setTimeStamp(0.841909205379);
    msg.setSource(10652U);
    msg.setSourceEntity(54U);
    msg.setDestination(19033U);
    msg.setDestinationEntity(62U);
    msg.value = 24357;

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
    msg.setTimeStamp(0.728002056911);
    msg.setSource(20068U);
    msg.setSourceEntity(201U);
    msg.setDestination(53772U);
    msg.setDestinationEntity(47U);
    msg.value = 20908;

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
    msg.setTimeStamp(0.409238172549);
    msg.setSource(30716U);
    msg.setSourceEntity(200U);
    msg.setDestination(25734U);
    msg.setDestinationEntity(99U);
    msg.value = -32086;

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
    msg.setTimeStamp(0.556402796377);
    msg.setSource(13899U);
    msg.setSourceEntity(115U);
    msg.setDestination(42395U);
    msg.setDestinationEntity(107U);
    msg.value = 0.644288277484;

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
    msg.setTimeStamp(0.4867874498);
    msg.setSource(62509U);
    msg.setSourceEntity(124U);
    msg.setDestination(38136U);
    msg.setDestinationEntity(164U);
    msg.value = 0.414654442476;

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
    msg.setTimeStamp(0.849789275068);
    msg.setSource(40866U);
    msg.setSourceEntity(50U);
    msg.setDestination(16327U);
    msg.setDestinationEntity(182U);
    msg.value = 0.711930848112;

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
    msg.setTimeStamp(0.25968770458);
    msg.setSource(46742U);
    msg.setSourceEntity(236U);
    msg.setDestination(18476U);
    msg.setDestinationEntity(67U);
    msg.value = 0.984614946422;

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
    msg.setTimeStamp(0.315422101652);
    msg.setSource(27229U);
    msg.setSourceEntity(185U);
    msg.setDestination(46042U);
    msg.setDestinationEntity(9U);
    msg.value = 0.252780068752;

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
    msg.setTimeStamp(0.93401869547);
    msg.setSource(38176U);
    msg.setSourceEntity(7U);
    msg.setDestination(54092U);
    msg.setDestinationEntity(108U);
    msg.value = 0.55520839135;

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
    msg.setTimeStamp(0.193671466496);
    msg.setSource(4937U);
    msg.setSourceEntity(184U);
    msg.setDestination(23201U);
    msg.setDestinationEntity(98U);
    msg.validity = 31032U;
    msg.type = 202U;
    msg.utc_year = 36208U;
    msg.utc_month = 246U;
    msg.utc_day = 49U;
    msg.utc_time = 0.356617777867;
    msg.lat = 0.595535171234;
    msg.lon = 0.914575611481;
    msg.height = 0.26079091776;
    msg.satellites = 122U;
    msg.cog = 0.290315120055;
    msg.sog = 0.772840213263;
    msg.hdop = 0.0591520821864;
    msg.vdop = 0.952274103548;
    msg.hacc = 0.442627840442;
    msg.vacc = 0.0391121479473;

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
    msg.setTimeStamp(0.00784924433309);
    msg.setSource(52376U);
    msg.setSourceEntity(82U);
    msg.setDestination(26817U);
    msg.setDestinationEntity(30U);
    msg.validity = 35260U;
    msg.type = 78U;
    msg.utc_year = 59368U;
    msg.utc_month = 155U;
    msg.utc_day = 248U;
    msg.utc_time = 0.35015784369;
    msg.lat = 0.907320533984;
    msg.lon = 0.364716724256;
    msg.height = 0.551906311534;
    msg.satellites = 72U;
    msg.cog = 0.862862232437;
    msg.sog = 0.50794435279;
    msg.hdop = 0.06296503773;
    msg.vdop = 0.150476203339;
    msg.hacc = 0.69695404429;
    msg.vacc = 0.706356579056;

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
    msg.setTimeStamp(0.782376374929);
    msg.setSource(49256U);
    msg.setSourceEntity(48U);
    msg.setDestination(9899U);
    msg.setDestinationEntity(188U);
    msg.validity = 57436U;
    msg.type = 77U;
    msg.utc_year = 18941U;
    msg.utc_month = 87U;
    msg.utc_day = 78U;
    msg.utc_time = 0.743937429685;
    msg.lat = 0.812323540205;
    msg.lon = 0.86424552623;
    msg.height = 0.886782304009;
    msg.satellites = 133U;
    msg.cog = 0.165620146583;
    msg.sog = 0.71339482936;
    msg.hdop = 0.879282421635;
    msg.vdop = 0.409736078335;
    msg.hacc = 0.155756200232;
    msg.vacc = 0.783283410201;

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
    msg.setTimeStamp(0.360071459755);
    msg.setSource(58074U);
    msg.setSourceEntity(10U);
    msg.setDestination(23019U);
    msg.setDestinationEntity(47U);
    msg.time = 0.701844942457;
    msg.phi = 0.473742611483;
    msg.theta = 0.559626757843;
    msg.psi = 0.485394854476;
    msg.psi_magnetic = 0.590557072006;

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
    msg.setTimeStamp(0.565737839064);
    msg.setSource(56087U);
    msg.setSourceEntity(214U);
    msg.setDestination(24495U);
    msg.setDestinationEntity(22U);
    msg.time = 0.0163062638126;
    msg.phi = 0.21492246805;
    msg.theta = 0.725053773239;
    msg.psi = 0.293342647173;
    msg.psi_magnetic = 0.976573636367;

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
    msg.setTimeStamp(0.158971008566);
    msg.setSource(38323U);
    msg.setSourceEntity(91U);
    msg.setDestination(49351U);
    msg.setDestinationEntity(216U);
    msg.time = 0.610931988829;
    msg.phi = 0.747563700779;
    msg.theta = 0.381999301005;
    msg.psi = 0.773776083445;
    msg.psi_magnetic = 0.98495728124;

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
    msg.setTimeStamp(0.480422789093);
    msg.setSource(53885U);
    msg.setSourceEntity(44U);
    msg.setDestination(30980U);
    msg.setDestinationEntity(242U);
    msg.time = 0.520916451005;
    msg.x = 0.359312249081;
    msg.y = 0.187215333484;
    msg.z = 0.564824072523;
    msg.timestep = 0.849986590318;

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
    msg.setTimeStamp(0.0377380476483);
    msg.setSource(17008U);
    msg.setSourceEntity(253U);
    msg.setDestination(64173U);
    msg.setDestinationEntity(135U);
    msg.time = 0.346642496192;
    msg.x = 0.579433944752;
    msg.y = 0.536272512391;
    msg.z = 0.446725126892;
    msg.timestep = 0.886983320866;

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
    msg.setTimeStamp(0.378969417746);
    msg.setSource(5189U);
    msg.setSourceEntity(96U);
    msg.setDestination(9052U);
    msg.setDestinationEntity(135U);
    msg.time = 0.847818407841;
    msg.x = 0.596335396269;
    msg.y = 0.202263729881;
    msg.z = 0.591818687108;
    msg.timestep = 0.128424533295;

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
    msg.setTimeStamp(0.651113933496);
    msg.setSource(11255U);
    msg.setSourceEntity(4U);
    msg.setDestination(7546U);
    msg.setDestinationEntity(136U);
    msg.time = 0.463632726696;
    msg.x = 0.803272100865;
    msg.y = 0.79751699935;
    msg.z = 0.301585551979;

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
    msg.setTimeStamp(0.636961706354);
    msg.setSource(27574U);
    msg.setSourceEntity(251U);
    msg.setDestination(5082U);
    msg.setDestinationEntity(142U);
    msg.time = 0.261431600394;
    msg.x = 0.360667580947;
    msg.y = 0.745427862998;
    msg.z = 0.311989005517;

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
    msg.setTimeStamp(0.990721384672);
    msg.setSource(14120U);
    msg.setSourceEntity(154U);
    msg.setDestination(5769U);
    msg.setDestinationEntity(247U);
    msg.time = 0.772506167536;
    msg.x = 0.263254636204;
    msg.y = 0.532295386123;
    msg.z = 0.422312170084;

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
    msg.setTimeStamp(0.592602535232);
    msg.setSource(4235U);
    msg.setSourceEntity(243U);
    msg.setDestination(63675U);
    msg.setDestinationEntity(23U);
    msg.time = 0.424519492452;
    msg.x = 0.985664175324;
    msg.y = 0.266448640281;
    msg.z = 0.040927701438;

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
    msg.setTimeStamp(0.129166864541);
    msg.setSource(27604U);
    msg.setSourceEntity(145U);
    msg.setDestination(32532U);
    msg.setDestinationEntity(83U);
    msg.time = 0.722305083906;
    msg.x = 0.979174801273;
    msg.y = 0.0814944917245;
    msg.z = 0.552686137221;

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
    msg.setTimeStamp(0.288212187863);
    msg.setSource(33886U);
    msg.setSourceEntity(41U);
    msg.setDestination(50979U);
    msg.setDestinationEntity(156U);
    msg.time = 0.960763618929;
    msg.x = 0.431554637688;
    msg.y = 0.776210171173;
    msg.z = 0.192717398074;

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
    msg.setTimeStamp(0.142376333353);
    msg.setSource(30811U);
    msg.setSourceEntity(47U);
    msg.setDestination(62672U);
    msg.setDestinationEntity(56U);
    msg.time = 0.0317770310701;
    msg.x = 0.77297297998;
    msg.y = 0.0513596953608;
    msg.z = 0.562133010575;

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
    msg.setTimeStamp(0.926857840465);
    msg.setSource(30333U);
    msg.setSourceEntity(32U);
    msg.setDestination(57784U);
    msg.setDestinationEntity(138U);
    msg.time = 0.980366060926;
    msg.x = 0.568552202961;
    msg.y = 0.919657429943;
    msg.z = 0.997277082268;

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
    msg.setTimeStamp(0.228627219621);
    msg.setSource(27857U);
    msg.setSourceEntity(19U);
    msg.setDestination(884U);
    msg.setDestinationEntity(85U);
    msg.time = 0.845369746519;
    msg.x = 0.707666276506;
    msg.y = 0.012261580986;
    msg.z = 0.277462831744;

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
    msg.setTimeStamp(0.906343896083);
    msg.setSource(15661U);
    msg.setSourceEntity(167U);
    msg.setDestination(62863U);
    msg.setDestinationEntity(28U);
    msg.validity = 20U;
    msg.x = 0.0318834077756;
    msg.y = 0.864321052707;
    msg.z = 0.317204712424;

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
    msg.setTimeStamp(0.777444757106);
    msg.setSource(40521U);
    msg.setSourceEntity(238U);
    msg.setDestination(38097U);
    msg.setDestinationEntity(189U);
    msg.validity = 92U;
    msg.x = 0.0219887600892;
    msg.y = 0.108618170481;
    msg.z = 0.162143393862;

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
    msg.setTimeStamp(0.549111375509);
    msg.setSource(18363U);
    msg.setSourceEntity(58U);
    msg.setDestination(60423U);
    msg.setDestinationEntity(184U);
    msg.validity = 191U;
    msg.x = 0.218721779288;
    msg.y = 0.676147506215;
    msg.z = 0.817758408245;

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
    msg.setTimeStamp(0.391403753319);
    msg.setSource(38508U);
    msg.setSourceEntity(183U);
    msg.setDestination(44034U);
    msg.setDestinationEntity(122U);
    msg.validity = 254U;
    msg.x = 0.884943082839;
    msg.y = 0.82247661635;
    msg.z = 0.0425128031418;

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
    msg.setTimeStamp(0.101292685332);
    msg.setSource(11078U);
    msg.setSourceEntity(228U);
    msg.setDestination(39441U);
    msg.setDestinationEntity(185U);
    msg.validity = 214U;
    msg.x = 0.307650937006;
    msg.y = 0.886143172747;
    msg.z = 0.672962001339;

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
    msg.setTimeStamp(0.528468570832);
    msg.setSource(57295U);
    msg.setSourceEntity(204U);
    msg.setDestination(41903U);
    msg.setDestinationEntity(117U);
    msg.validity = 254U;
    msg.x = 0.282157216955;
    msg.y = 0.730143773413;
    msg.z = 0.606441572739;

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
    msg.setTimeStamp(0.918586214875);
    msg.setSource(61377U);
    msg.setSourceEntity(198U);
    msg.setDestination(16109U);
    msg.setDestinationEntity(122U);
    msg.time = 0.495313063782;
    msg.x = 0.216568437227;
    msg.y = 0.359401302374;
    msg.z = 0.408238578671;

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
    msg.setTimeStamp(0.0173131063223);
    msg.setSource(8394U);
    msg.setSourceEntity(75U);
    msg.setDestination(41860U);
    msg.setDestinationEntity(220U);
    msg.time = 0.413884298977;
    msg.x = 0.455574135869;
    msg.y = 0.178808797734;
    msg.z = 0.296565347969;

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
    msg.setTimeStamp(0.815231116086);
    msg.setSource(37144U);
    msg.setSourceEntity(77U);
    msg.setDestination(33052U);
    msg.setDestinationEntity(210U);
    msg.time = 0.0241220438184;
    msg.x = 0.402721877085;
    msg.y = 0.0793671326864;
    msg.z = 0.841834928956;

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
    msg.setTimeStamp(0.664765415217);
    msg.setSource(62256U);
    msg.setSourceEntity(205U);
    msg.setDestination(6767U);
    msg.setDestinationEntity(32U);
    msg.validity = 54U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.572192594909;
    tmp_msg_0.beam_height = 0.3795803539;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.286506034197;

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
    msg.setTimeStamp(0.569615938738);
    msg.setSource(48641U);
    msg.setSourceEntity(126U);
    msg.setDestination(15701U);
    msg.setDestinationEntity(238U);
    msg.validity = 121U;
    msg.value = 0.103888886635;

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
    msg.setTimeStamp(0.0437723848086);
    msg.setSource(45343U);
    msg.setSourceEntity(212U);
    msg.setDestination(7584U);
    msg.setDestinationEntity(236U);
    msg.validity = 220U;
    msg.value = 0.173039190703;

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
    msg.setTimeStamp(0.462974540485);
    msg.setSource(10970U);
    msg.setSourceEntity(74U);
    msg.setDestination(56746U);
    msg.setDestinationEntity(95U);
    msg.value = 0.610559001008;

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
    msg.setTimeStamp(0.0590757692548);
    msg.setSource(3264U);
    msg.setSourceEntity(170U);
    msg.setDestination(19189U);
    msg.setDestinationEntity(151U);
    msg.value = 0.903859815083;

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
    msg.setTimeStamp(0.912543596637);
    msg.setSource(46512U);
    msg.setSourceEntity(175U);
    msg.setDestination(48401U);
    msg.setDestinationEntity(180U);
    msg.value = 0.0459895117387;

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
    msg.setTimeStamp(0.218668840653);
    msg.setSource(50181U);
    msg.setSourceEntity(205U);
    msg.setDestination(33777U);
    msg.setDestinationEntity(248U);
    msg.value = 0.538206110307;

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
    msg.setTimeStamp(0.219368342875);
    msg.setSource(23928U);
    msg.setSourceEntity(185U);
    msg.setDestination(64873U);
    msg.setDestinationEntity(233U);
    msg.value = 0.653428605838;

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
    msg.setTimeStamp(0.470456931519);
    msg.setSource(31976U);
    msg.setSourceEntity(49U);
    msg.setDestination(63711U);
    msg.setDestinationEntity(121U);
    msg.value = 0.331558186375;

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
    msg.setTimeStamp(0.207054492766);
    msg.setSource(28719U);
    msg.setSourceEntity(202U);
    msg.setDestination(57142U);
    msg.setDestinationEntity(122U);
    msg.value = 0.627959699084;

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
    msg.setTimeStamp(0.166642732615);
    msg.setSource(34579U);
    msg.setSourceEntity(3U);
    msg.setDestination(65043U);
    msg.setDestinationEntity(75U);
    msg.value = 0.709916655378;

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
    msg.setTimeStamp(0.444706439924);
    msg.setSource(35941U);
    msg.setSourceEntity(155U);
    msg.setDestination(25122U);
    msg.setDestinationEntity(105U);
    msg.value = 0.605335935842;

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
    msg.setTimeStamp(0.0594593435124);
    msg.setSource(56213U);
    msg.setSourceEntity(154U);
    msg.setDestination(38364U);
    msg.setDestinationEntity(45U);
    msg.value = 0.812566627383;

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
    msg.setTimeStamp(0.314156054654);
    msg.setSource(59241U);
    msg.setSourceEntity(237U);
    msg.setDestination(42582U);
    msg.setDestinationEntity(176U);
    msg.value = 0.688242071011;

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
    msg.setTimeStamp(0.672827284269);
    msg.setSource(50760U);
    msg.setSourceEntity(253U);
    msg.setDestination(2035U);
    msg.setDestinationEntity(61U);
    msg.value = 0.794339164269;

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
    msg.setTimeStamp(0.890020943265);
    msg.setSource(8670U);
    msg.setSourceEntity(95U);
    msg.setDestination(41965U);
    msg.setDestinationEntity(18U);
    msg.value = 0.357964265029;

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
    msg.setTimeStamp(0.703019323972);
    msg.setSource(49300U);
    msg.setSourceEntity(89U);
    msg.setDestination(23085U);
    msg.setDestinationEntity(11U);
    msg.value = 0.454786785925;

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
    msg.setTimeStamp(0.963177044103);
    msg.setSource(20586U);
    msg.setSourceEntity(170U);
    msg.setDestination(9336U);
    msg.setDestinationEntity(28U);
    msg.value = 0.983563336116;

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
    msg.setTimeStamp(0.848596885702);
    msg.setSource(47048U);
    msg.setSourceEntity(237U);
    msg.setDestination(44598U);
    msg.setDestinationEntity(225U);
    msg.value = 0.931721703677;

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
    msg.setTimeStamp(0.172710076573);
    msg.setSource(15403U);
    msg.setSourceEntity(115U);
    msg.setDestination(21630U);
    msg.setDestinationEntity(246U);
    msg.value = 0.884956233759;

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
    msg.setTimeStamp(0.882649334095);
    msg.setSource(17443U);
    msg.setSourceEntity(128U);
    msg.setDestination(1795U);
    msg.setDestinationEntity(121U);
    msg.value = 0.115689343864;

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
    msg.setTimeStamp(0.202617889064);
    msg.setSource(28928U);
    msg.setSourceEntity(189U);
    msg.setDestination(14324U);
    msg.setDestinationEntity(201U);
    msg.value = 0.265539798524;

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
    msg.setTimeStamp(0.709014103817);
    msg.setSource(4187U);
    msg.setSourceEntity(85U);
    msg.setDestination(45831U);
    msg.setDestinationEntity(172U);
    msg.value = 0.377436122651;

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
    msg.setTimeStamp(0.538333220511);
    msg.setSource(22076U);
    msg.setSourceEntity(238U);
    msg.setDestination(53689U);
    msg.setDestinationEntity(92U);
    msg.value = 0.0219132234559;

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
    msg.setTimeStamp(0.235043899034);
    msg.setSource(9660U);
    msg.setSourceEntity(218U);
    msg.setDestination(56069U);
    msg.setDestinationEntity(185U);
    msg.value = 0.380764215454;

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
    msg.setTimeStamp(0.269108885458);
    msg.setSource(7877U);
    msg.setSourceEntity(156U);
    msg.setDestination(53327U);
    msg.setDestinationEntity(34U);
    msg.value = 0.353629208504;

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
    msg.setTimeStamp(0.779867484582);
    msg.setSource(13037U);
    msg.setSourceEntity(98U);
    msg.setDestination(46815U);
    msg.setDestinationEntity(226U);
    msg.value = 0.131029675908;

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
    msg.setTimeStamp(0.482744997689);
    msg.setSource(27425U);
    msg.setSourceEntity(250U);
    msg.setDestination(22116U);
    msg.setDestinationEntity(48U);
    msg.direction = 0.787436396794;
    msg.speed = 0.515920632239;

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
    msg.setTimeStamp(0.350813311944);
    msg.setSource(31772U);
    msg.setSourceEntity(57U);
    msg.setDestination(3906U);
    msg.setDestinationEntity(245U);
    msg.direction = 0.499701771467;
    msg.speed = 0.953907931556;

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
    msg.setTimeStamp(0.0225307356739);
    msg.setSource(59259U);
    msg.setSourceEntity(28U);
    msg.setDestination(40191U);
    msg.setDestinationEntity(13U);
    msg.direction = 0.140903970832;
    msg.speed = 0.514637613416;

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
    msg.setTimeStamp(0.433615499317);
    msg.setSource(64274U);
    msg.setSourceEntity(106U);
    msg.setDestination(44718U);
    msg.setDestinationEntity(77U);
    msg.value = 0.748263936375;

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
    msg.setTimeStamp(0.172578724476);
    msg.setSource(44588U);
    msg.setSourceEntity(31U);
    msg.setDestination(35187U);
    msg.setDestinationEntity(194U);
    msg.value = 0.45858461941;

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
    msg.setTimeStamp(0.792398723121);
    msg.setSource(19218U);
    msg.setSourceEntity(144U);
    msg.setDestination(18360U);
    msg.setDestinationEntity(150U);
    msg.value = 0.859609188458;

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
    msg.setTimeStamp(0.354342337579);
    msg.setSource(28413U);
    msg.setSourceEntity(45U);
    msg.setDestination(165U);
    msg.setDestinationEntity(235U);
    msg.value.assign("GDBDRRJNCDORVKZWCVSHNDHWQUIHEF");

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
    msg.setTimeStamp(0.896424324133);
    msg.setSource(24958U);
    msg.setSourceEntity(106U);
    msg.setDestination(24027U);
    msg.setDestinationEntity(131U);
    msg.value.assign("MVTUTXVBAILUCZAYGACLLKIPKUTKK");

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
    msg.setTimeStamp(0.089153290905);
    msg.setSource(12744U);
    msg.setSourceEntity(218U);
    msg.setDestination(53555U);
    msg.setDestinationEntity(103U);
    msg.value.assign("WNUWFCOGWZNZQRATNEVRPGVTPMWVFNXQBMGKJAJPLKLULUQIOAJEHOBCSMKMKXCKXNBHNVKQMLFSUCUMKGVBVKTWHGEJHRIFNVJIFQGVPMNDASFYBSLXIFGQLPCBZENPEXAGREYNHYZMZCXFEZIHWBTSLDYELCWKLYMUOYORHTRRQHXPGWDJAOYSDDAXHJZOIQ");

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
    msg.setTimeStamp(0.306721195577);
    msg.setSource(57340U);
    msg.setSourceEntity(37U);
    msg.setDestination(45710U);
    msg.setDestinationEntity(64U);
    const char tmp_msg_0[] = {-122, 60, 111, -66, -48, -52, 25, -19, -12, -26, -77, -71, 41, -66, -79, 21, -39, 32, 77, -101, 115, 60, 81, 82, 49, 84, -98, 89, -91, 105, -30};
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
    msg.setTimeStamp(0.348957273253);
    msg.setSource(33777U);
    msg.setSourceEntity(152U);
    msg.setDestination(19668U);
    msg.setDestinationEntity(149U);
    const char tmp_msg_0[] = {84, 86, 16, 90, 12, -27, 7, -70, -60, 16, -115, 90, 24, -70, 91, -78, 59, -116, -34, 83, 100, -68, 97, 49, -19, 35, 44, 101, -104, 81, 36, 64, 74, -40, -52, 92, 12, 109, 62, -96, -102, -99, -56, -100, -29, 75, 26, 102, -22, 81, -52, -23, 3, -46, -85, -86, 115, -6, 4, 7, -99, -18, 120, -39, -41, 66, 99, 79, -125, 56, 6, 76, 82, -128, 113, 94, 100, -37, 50, 21, -17, 35, -58, 93, 96, 101, 110, -2, 32, 98, 71, -128, -43, 65, -60, -41, 55, -76, -128, -32, 71, 76, 100, 101, -32, 24, -94, 54, 83, 90, -109, 84, -120, -43, 4, 49, 6, 51, -80, -93, -73, 99, -127, -126, -13, -61, 92, -119, -59, 45, -123, -46, 108, 88, 101, -37, -51, -91, 57, -17, -47, -20, -12, -40, 5, -100, -40, -108, -124, -108, -38, -40, 32, -42, 49, -78, 67, 80, 63, 126, 110, 56, 46, 84, -99, 13, -65, 59, -96, 89, -20, -59, 98, 24, -45, 4, 112, 16, 0, 110, 74, -85, 100, 120, 111, 40, 110, -25, -58, 117, -9, 32, 93, -119, -30, 62, 52, -15, -25, -55, 120, -10, -6, -7, -36, -123, 44, -10, 1, 80, -121, -111, 60, 106, -125, 55, 42, -30, 95, 122, 89, 79, 14, -99, -7, -23, 2, -74, 61, 19, -43, 98, -107};
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
    msg.setTimeStamp(0.461362643445);
    msg.setSource(36646U);
    msg.setSourceEntity(12U);
    msg.setDestination(40581U);
    msg.setDestinationEntity(161U);
    const char tmp_msg_0[] = {73, 78, -99, 0, -76, 41, 79, -32, 64, 63, -41, -20, -104, -24, 52, 11, 4, -95, -119, -102, 68, -61, 98, -58, -123, -121, -128, -118, -111, 12, -98, -106, 2, -33, -33, 0, -26, 102, -60, 55, -116, -75, -56, -36, -113, 113, -5, -74, -13, 124, -71, 6, 55, 54, -52, 63, -103, 119, 77, 89, 46, -110, 82, -127, -40, 68, 50, 117, 122, 117, 50, 53, 7, -106, 123, 65, 5, 110, 87, -9, 10, 115, 51, -48, -49, 114, -20, -2, 119, -12, 59, 45, 2, -68, 26, 75, 24, 88, 97, 27, 93, -9, -103, -116, -27, -4, -69, 93, -57, -22, 21, -32, -66, 97, 51, 29, -118, 24, -67, -89, 89, -2, -128, 2, 27, 58, -42, -67, 17, -44, 104, 122, -117, 63, -119, -113, 81};
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
    msg.setTimeStamp(0.127713855722);
    msg.setSource(39086U);
    msg.setSourceEntity(202U);
    msg.setDestination(29859U);
    msg.setDestinationEntity(157U);
    msg.frequency = 1124383317U;
    msg.min_range = 18024U;
    msg.max_range = 3947U;

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
    msg.setTimeStamp(0.39894330609);
    msg.setSource(34481U);
    msg.setSourceEntity(233U);
    msg.setDestination(41380U);
    msg.setDestinationEntity(245U);
    msg.frequency = 1404812368U;
    msg.min_range = 24864U;
    msg.max_range = 45702U;

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
    msg.setTimeStamp(0.00757468197623);
    msg.setSource(54990U);
    msg.setSourceEntity(143U);
    msg.setDestination(22710U);
    msg.setDestinationEntity(96U);
    msg.frequency = 2078051779U;
    msg.min_range = 22712U;
    msg.max_range = 50319U;

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
    msg.setTimeStamp(0.926105608813);
    msg.setSource(8048U);
    msg.setSourceEntity(243U);
    msg.setDestination(15744U);
    msg.setDestinationEntity(91U);
    msg.type = 164U;
    msg.frequency = 2612036730U;
    msg.min_range = 33905U;
    msg.max_range = 47015U;
    msg.bits_per_point = 32U;
    msg.scale_factor = 0.134532599996;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.207532522556;
    tmp_msg_0.beam_height = 0.37854641749;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {63, -24, -65, 18, 32, -96, -112, 125, 5, -67, 84, -108, 34, 6, -114, -19, -95, -60, 34, 101, 113, 106, 30, -86, 1, -122, -91, -75, -55, -92, 120, 10, 13, 84, -80, -122, -81, 55, 107, -96, 113, 98, -4, 59, -21, -108, 0, -107, 92, 87, 80, -105, -42, 83, 27, 17, 2, -4, -42, 117, -41, 114, 6, -72, -1, 118, -62, -26, -44, -23, 10, -56, -19, -99, -117, -55, -45, 26, -120, 27, 30, 74, 81, -89, 56, 104, -65, -75, 91, 40, -82, -10, 54, 109, 103, -88, -25, 113, -31, 119, -55, -109, -40, -76, 124, 64, 40, 116, 35, 89, 29, -82, 6, -82, 90, -36, -82, 125, 60, 4, -30, -97, 16, -17, 71, 83, 102, 0, -85, -32, -86, -71, -100, -102, -24, 79, 82, 44, -7, -88, -74, -32, 33, 15, -25, 6, 6, -13, -55, 70, -62, 100, 80, 94, 10, -118, 98, -127, 89, -26, -25, -33, 26, -54, 114, 5, -50, 100, -69, 37, 61, 71, 61, -48, -127, 94, 101, -102, 34, 113, -82, -90, -44, -71, 88, -103, 33, 112, 119, -45, 48, 53, 12, -8, 54, -85, 4, 0, 102, 89, 102, 35, -34, 112, -52, -71, 32, -1, -3};
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
    msg.setTimeStamp(0.938696289952);
    msg.setSource(34366U);
    msg.setSourceEntity(16U);
    msg.setDestination(4343U);
    msg.setDestinationEntity(214U);
    msg.type = 55U;
    msg.frequency = 265717636U;
    msg.min_range = 27913U;
    msg.max_range = 10555U;
    msg.bits_per_point = 51U;
    msg.scale_factor = 0.439190601753;
    const char tmp_msg_0[] = {6, -26, 40, 117, -50, -25, -43, -36, -54, 79, 58, 53, -116, -118, -88, -18, 86, -2, -99, 48, 102, 113, 124, 104, 103, -6, 107, 65, -10, -109, -48, 101, 48, 45, -7, 35, -95, 44, 55, -62, 52, 106, 18, -84, 115, -101, -48, -67, 15, 55, -109, -55, 110, 105, 20, -91, -98, 96, -61, -26, -8, 86, -84, 69, 0, -56, -2, 73, -66, 16, -53, 89, 8, 96, -78, -24, 66, 124, 35, 33, 87, 51, -43, -34, -8, 112, 105, 75, -68, -14, -128, 29, -34, -44, 60, 2, 48, 96, 28, -69, 69, -121, -112, 28, -19, -117, -116, 24, -91, -14, -83, -40, 54, -74, 36, -48, 45, -95, 64, 119, 101, 13, -23, 107, 102, -28, 34, 23, 94, 108, -59, 113, -23, -68, 83, 61, -70, -3, 82, -48, 13, 45, 99, 73, 6, 76, -47, -68, 117, -112, -67, 37, -108, 66, -20, -121, 71, 26, 18, 79, 42, 118, -15, -124, -15, 126, -108, -43, 23, 74, -43, -70, -121, -43, 61, 110, 0, -105, 108, 92, -19, -2, -111, -15};
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
    msg.setTimeStamp(0.333577078443);
    msg.setSource(31962U);
    msg.setSourceEntity(39U);
    msg.setDestination(6841U);
    msg.setDestinationEntity(254U);
    msg.type = 178U;
    msg.frequency = 1836034145U;
    msg.min_range = 5739U;
    msg.max_range = 63215U;
    msg.bits_per_point = 56U;
    msg.scale_factor = 0.65133063457;
    const char tmp_msg_0[] = {51, 35, 90, -108, -12, 79, 29, -101, 75, -123, 77};
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
    msg.setTimeStamp(0.871132604383);
    msg.setSource(43681U);
    msg.setSourceEntity(92U);
    msg.setDestination(53629U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.669966838294);
    msg.setSource(65233U);
    msg.setSourceEntity(237U);
    msg.setDestination(62263U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.838272711879);
    msg.setSource(64792U);
    msg.setSourceEntity(175U);
    msg.setDestination(25503U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.998128994554);
    msg.setSource(25378U);
    msg.setSourceEntity(147U);
    msg.setDestination(29080U);
    msg.setDestinationEntity(240U);
    msg.op = 120U;

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
    msg.setTimeStamp(0.963330139327);
    msg.setSource(15195U);
    msg.setSourceEntity(79U);
    msg.setDestination(37081U);
    msg.setDestinationEntity(250U);
    msg.op = 120U;

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
    msg.setTimeStamp(0.842317239753);
    msg.setSource(54492U);
    msg.setSourceEntity(204U);
    msg.setDestination(29809U);
    msg.setDestinationEntity(176U);
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
    msg.setTimeStamp(0.360424907256);
    msg.setSource(3590U);
    msg.setSourceEntity(167U);
    msg.setDestination(39667U);
    msg.setDestinationEntity(213U);
    msg.value = 0.819893429173;
    msg.confidence = 0.82889543682;
    msg.opmodes.assign("FDSTQWAAPXLRXVIJINALWRZGVVWNFTGEBKUNPECLXMIUBYEFTXIAKYQGCWYYJYKJJMBXERJZKMZJUORVTFWHSUWJILXVMSDNLNHELT");

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
    msg.setTimeStamp(0.336280226197);
    msg.setSource(22430U);
    msg.setSourceEntity(178U);
    msg.setDestination(6089U);
    msg.setDestinationEntity(108U);
    msg.value = 0.607654727747;
    msg.confidence = 0.373818078288;
    msg.opmodes.assign("BMVQXDOBUMTVCJWUQHSXNPYAQJAZZHOZESAGKCHNYHUOYMLFDSIUCJCXHYIUMILKFFIAIPQMEFVNCESAWGJQALYIOXKHIVPMOOUWWUJGRAWBWZGXVFRFTPCGHRSLZYGTBTSKDRHTRPYVWKLKGXQNJXBNYPSGBN");

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
    msg.setTimeStamp(0.115322211521);
    msg.setSource(33518U);
    msg.setSourceEntity(249U);
    msg.setDestination(64001U);
    msg.setDestinationEntity(212U);
    msg.value = 0.882127290566;
    msg.confidence = 0.227714821671;
    msg.opmodes.assign("VABVQLBJSPFUAJHTBMUCTCOQRT");

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
    msg.setTimeStamp(0.333667659571);
    msg.setSource(17156U);
    msg.setSourceEntity(139U);
    msg.setDestination(23653U);
    msg.setDestinationEntity(20U);
    msg.itow = 2261409043U;
    msg.lat = 0.146437598574;
    msg.lon = 0.911888204033;
    msg.height_ell = 0.997510683264;
    msg.height_sea = 0.885999881677;
    msg.hacc = 0.926151772828;
    msg.vacc = 0.445064591849;
    msg.vel_n = 0.836125250417;
    msg.vel_e = 0.490466778132;
    msg.vel_d = 0.706802294685;
    msg.speed = 0.585561507609;
    msg.gspeed = 0.326477611547;
    msg.heading = 0.481963446419;
    msg.sacc = 0.14325563462;
    msg.cacc = 0.20258707363;

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
    msg.setTimeStamp(0.639076649705);
    msg.setSource(12830U);
    msg.setSourceEntity(221U);
    msg.setDestination(47574U);
    msg.setDestinationEntity(215U);
    msg.itow = 1607938595U;
    msg.lat = 0.35902133047;
    msg.lon = 0.50572629124;
    msg.height_ell = 0.35096086324;
    msg.height_sea = 0.777961651861;
    msg.hacc = 0.639147440006;
    msg.vacc = 0.710366590526;
    msg.vel_n = 0.705399330651;
    msg.vel_e = 0.175310446913;
    msg.vel_d = 0.096028965961;
    msg.speed = 0.816029725116;
    msg.gspeed = 0.00545631882551;
    msg.heading = 0.92991794957;
    msg.sacc = 0.953897431001;
    msg.cacc = 0.566203293403;

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
    msg.setTimeStamp(0.958144153874);
    msg.setSource(47196U);
    msg.setSourceEntity(199U);
    msg.setDestination(28158U);
    msg.setDestinationEntity(153U);
    msg.itow = 1547796369U;
    msg.lat = 0.909131328372;
    msg.lon = 0.779935085601;
    msg.height_ell = 0.7264408952;
    msg.height_sea = 0.553120014027;
    msg.hacc = 0.463713169893;
    msg.vacc = 0.22590171008;
    msg.vel_n = 0.036478928127;
    msg.vel_e = 0.324273140008;
    msg.vel_d = 0.966860490113;
    msg.speed = 0.0856039669191;
    msg.gspeed = 0.0796224314376;
    msg.heading = 0.368739275008;
    msg.sacc = 0.425464759711;
    msg.cacc = 0.88740120926;

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
    msg.setTimeStamp(0.588723012297);
    msg.setSource(8196U);
    msg.setSourceEntity(234U);
    msg.setDestination(4503U);
    msg.setDestinationEntity(131U);
    msg.id = 200U;
    msg.value = 0.793368573118;

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
    msg.setTimeStamp(0.943399840909);
    msg.setSource(52738U);
    msg.setSourceEntity(178U);
    msg.setDestination(56158U);
    msg.setDestinationEntity(67U);
    msg.id = 182U;
    msg.value = 0.366933880104;

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
    msg.setTimeStamp(0.255317753724);
    msg.setSource(33778U);
    msg.setSourceEntity(27U);
    msg.setDestination(8840U);
    msg.setDestinationEntity(130U);
    msg.id = 227U;
    msg.value = 0.667530532059;

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
    msg.setTimeStamp(0.636261923045);
    msg.setSource(19063U);
    msg.setSourceEntity(146U);
    msg.setDestination(8860U);
    msg.setDestinationEntity(83U);
    msg.x = 0.853920010182;
    msg.y = 0.364354102205;
    msg.z = 0.532998411451;
    msg.phi = 0.809342995986;
    msg.theta = 0.533186884289;
    msg.psi = 0.19690751487;

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
    msg.setTimeStamp(0.446384232779);
    msg.setSource(25214U);
    msg.setSourceEntity(131U);
    msg.setDestination(27778U);
    msg.setDestinationEntity(86U);
    msg.x = 0.816741578361;
    msg.y = 0.910835922167;
    msg.z = 0.490118048428;
    msg.phi = 0.790664842862;
    msg.theta = 0.19467039821;
    msg.psi = 0.00546906919459;

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
    msg.setTimeStamp(0.701074378196);
    msg.setSource(65234U);
    msg.setSourceEntity(89U);
    msg.setDestination(2215U);
    msg.setDestinationEntity(124U);
    msg.x = 0.726645906926;
    msg.y = 0.790591115461;
    msg.z = 0.955330025731;
    msg.phi = 0.830650338264;
    msg.theta = 0.212900332538;
    msg.psi = 0.0110415317074;

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
    msg.setTimeStamp(0.328232156395);
    msg.setSource(29208U);
    msg.setSourceEntity(82U);
    msg.setDestination(28385U);
    msg.setDestinationEntity(118U);
    msg.beam_width = 0.580488131937;
    msg.beam_height = 0.199875264453;

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
    msg.setTimeStamp(0.974650635014);
    msg.setSource(35961U);
    msg.setSourceEntity(130U);
    msg.setDestination(50731U);
    msg.setDestinationEntity(47U);
    msg.beam_width = 0.218709761935;
    msg.beam_height = 0.533394075973;

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
    msg.setTimeStamp(0.315582327997);
    msg.setSource(46502U);
    msg.setSourceEntity(42U);
    msg.setDestination(14671U);
    msg.setDestinationEntity(19U);
    msg.beam_width = 0.775961937871;
    msg.beam_height = 0.407034583615;

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
    msg.setTimeStamp(0.194221634281);
    msg.setSource(25952U);
    msg.setSourceEntity(183U);
    msg.setDestination(49865U);
    msg.setDestinationEntity(93U);
    msg.id = 142U;
    msg.zoom = 143U;
    msg.action = 163U;

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
    msg.setTimeStamp(0.0826889445007);
    msg.setSource(57245U);
    msg.setSourceEntity(46U);
    msg.setDestination(58422U);
    msg.setDestinationEntity(73U);
    msg.id = 45U;
    msg.zoom = 101U;
    msg.action = 1U;

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
    msg.setTimeStamp(0.888643736873);
    msg.setSource(14924U);
    msg.setSourceEntity(151U);
    msg.setDestination(51118U);
    msg.setDestinationEntity(140U);
    msg.id = 11U;
    msg.zoom = 72U;
    msg.action = 148U;

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
    msg.setTimeStamp(0.218820889187);
    msg.setSource(60624U);
    msg.setSourceEntity(137U);
    msg.setDestination(39054U);
    msg.setDestinationEntity(224U);
    msg.id = 12U;
    msg.value = 0.868291781205;

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
    msg.setTimeStamp(0.697579882648);
    msg.setSource(46306U);
    msg.setSourceEntity(188U);
    msg.setDestination(61179U);
    msg.setDestinationEntity(155U);
    msg.id = 26U;
    msg.value = 0.25399853899;

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
    msg.setTimeStamp(0.954366231642);
    msg.setSource(26U);
    msg.setSourceEntity(239U);
    msg.setDestination(27901U);
    msg.setDestinationEntity(130U);
    msg.id = 49U;
    msg.value = 0.64712977996;

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
    msg.setTimeStamp(0.319186426796);
    msg.setSource(2341U);
    msg.setSourceEntity(242U);
    msg.setDestination(32595U);
    msg.setDestinationEntity(50U);
    msg.id = 184U;
    msg.value = 0.929661631259;

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
    msg.setTimeStamp(0.0804190352078);
    msg.setSource(19246U);
    msg.setSourceEntity(29U);
    msg.setDestination(15020U);
    msg.setDestinationEntity(30U);
    msg.id = 91U;
    msg.value = 0.620265249352;

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
    msg.setTimeStamp(0.785364012454);
    msg.setSource(37043U);
    msg.setSourceEntity(165U);
    msg.setDestination(57029U);
    msg.setDestinationEntity(119U);
    msg.id = 206U;
    msg.value = 0.50549228099;

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
    msg.setTimeStamp(0.810096680699);
    msg.setSource(31856U);
    msg.setSourceEntity(177U);
    msg.setDestination(3427U);
    msg.setDestinationEntity(152U);
    msg.id = 236U;
    msg.angle = 0.392537518536;

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
    msg.setTimeStamp(0.897807967121);
    msg.setSource(38498U);
    msg.setSourceEntity(81U);
    msg.setDestination(12129U);
    msg.setDestinationEntity(150U);
    msg.id = 17U;
    msg.angle = 0.273725199546;

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
    msg.setTimeStamp(0.0405535443401);
    msg.setSource(63238U);
    msg.setSourceEntity(46U);
    msg.setDestination(37002U);
    msg.setDestinationEntity(12U);
    msg.id = 14U;
    msg.angle = 0.212186119108;

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
    msg.setTimeStamp(0.432944496877);
    msg.setSource(41970U);
    msg.setSourceEntity(193U);
    msg.setDestination(60759U);
    msg.setDestinationEntity(165U);
    msg.op = 47U;
    msg.actions.assign("BVLQUZFYVAWGUFOWLMRAJWAHAHEMIFWTZZJLNNH");

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
    msg.setTimeStamp(0.694915134427);
    msg.setSource(36066U);
    msg.setSourceEntity(212U);
    msg.setDestination(9071U);
    msg.setDestinationEntity(56U);
    msg.op = 16U;
    msg.actions.assign("PSHCGIWZRHWFBGLKTVTCFOTBPJKEDQYBZBAMWDQTVURDXHXQCMWOKBWIKLQMMVJEUVRBRCFFKRZQSICFUWVYVLNAVNSCSZI");

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
    msg.setTimeStamp(0.694199873976);
    msg.setSource(24690U);
    msg.setSourceEntity(187U);
    msg.setDestination(45280U);
    msg.setDestinationEntity(192U);
    msg.op = 170U;
    msg.actions.assign("KRUVTZIPCKUOTSUFZNQWRAHEJOJJZZJCQJNTOEHISGOXCQVZISGKXLEPGYOWQTXSDUYSQUVEWQLASNVYWGAYTPVNLFMGCVXEMLBHKYYNLZMWKBUYBHYBDSFJZGBLKCBTAKNNKRLVRWVXWOPMCXPBFADARIFQEOWNKLEHDBGMIDDPFMMPUMYCJUHA");

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
    msg.setTimeStamp(0.305755834471);
    msg.setSource(8693U);
    msg.setSourceEntity(225U);
    msg.setDestination(35685U);
    msg.setDestinationEntity(222U);
    msg.actions.assign("ARZEDJAZGTUYJCRHLPMCWAJXGULYOBQHXGMPSFQBZOOOJUYTAMMVCSQWJXATKWRVKZKTJUVOCYRKTMTEMYZASKBOYGFQLLRVA");

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
    msg.setTimeStamp(0.823202547961);
    msg.setSource(36698U);
    msg.setSourceEntity(200U);
    msg.setDestination(14666U);
    msg.setDestinationEntity(221U);
    msg.actions.assign("CYNZRQBKTPUNRSGFPJTYWWQABYQDYNHGUGMVGLZAAJPVHQERHKDVRKBVIDNOBMNTSCWFJXNCKSCGPVHDRHSFOLOIAAOIIMPBLWEDMFCIKBYIANMFOQDFVZRTPWVQZCUVHTCRBKAWGCJDMESXXBRXEGFAJEEXUQZLXBJNPEXFUMLHUXEMWOZPEBZULTPGFZ");

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
    msg.setTimeStamp(0.5982165199);
    msg.setSource(46645U);
    msg.setSourceEntity(87U);
    msg.setDestination(58114U);
    msg.setDestinationEntity(53U);
    msg.actions.assign("VXJIMIMLGQWQGQXMNWKSCHAEXINYMWXEIUUSPGEQGRMYHOQOFSICVNETSGTPDRWVRILLXDLSXNFTBKKUNDBZJUQQJCWEZBWYPFMZGVRNZHTOBCRZHWQFLEYROFKYDNHOJCTLFZTASRPTLJSVAVXPGCZFLBXOIIVVCDDKQMHYGLNUDAQMBJZAFNHPCKAHTXMBSSJZEGTLSYOYWIBWYJUKDIJHEFPJVXKPDZCEAAVPNAKPRHUMOFURCA");

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
    msg.setTimeStamp(0.934948306812);
    msg.setSource(63267U);
    msg.setSourceEntity(41U);
    msg.setDestination(2920U);
    msg.setDestinationEntity(162U);
    msg.button = 3U;
    msg.value = 114U;

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
    msg.setTimeStamp(0.485153405482);
    msg.setSource(41262U);
    msg.setSourceEntity(96U);
    msg.setDestination(41954U);
    msg.setDestinationEntity(232U);
    msg.button = 21U;
    msg.value = 242U;

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
    msg.setTimeStamp(0.400604768654);
    msg.setSource(28629U);
    msg.setSourceEntity(233U);
    msg.setDestination(27456U);
    msg.setDestinationEntity(107U);
    msg.button = 149U;
    msg.value = 230U;

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
    msg.setTimeStamp(0.91995633397);
    msg.setSource(43152U);
    msg.setSourceEntity(127U);
    msg.setDestination(26185U);
    msg.setDestinationEntity(15U);
    msg.op = 129U;
    msg.text.assign("STSRSSOOHCMMBYLKUDCPWRFCNJWMXZRKIVBWYGZPRCSWQH");

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
    msg.setTimeStamp(0.920781196668);
    msg.setSource(29180U);
    msg.setSourceEntity(77U);
    msg.setDestination(38692U);
    msg.setDestinationEntity(68U);
    msg.op = 16U;
    msg.text.assign("UWQRLIHAPLBNGGEVPJRXEGXTVNLBOKPJABWVYNYHMDFTSCJJHKNVMNHSSYMQZVMGMEKTGUFAFEOIFJODTEEECUVXQTNWXJYGQLDJZWHBQLSBBNYCKWUERGJMLRVAFXDUXTFKKFYYZOGQSKYVDOOAMOQTOLSCRVDCMAQQJPSZQCRDEZYUDDZPNWYUTNKHAAPDIBHCZZCWIOPKRFELZASTZWBNHUAIKXIJPGVHXWFRXSHIXITBRBMLI");

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
    msg.setTimeStamp(0.639773106521);
    msg.setSource(9817U);
    msg.setSourceEntity(19U);
    msg.setDestination(48245U);
    msg.setDestinationEntity(193U);
    msg.op = 25U;
    msg.text.assign("ZDXAECTJIPWWLIKDYMYBPYVWXFAHTXFZQVUQBHKXIQTNECRYZTYGOQEPDPLTXWFIAJBTISKFJTFDNUEAGQTDYHY");

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
    msg.setTimeStamp(0.649993175522);
    msg.setSource(9008U);
    msg.setSourceEntity(158U);
    msg.setDestination(55106U);
    msg.setDestinationEntity(136U);
    msg.op = 172U;
    msg.time_remain = 0.0634695641555;
    msg.sched_time = 0.888131388432;

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
    msg.setTimeStamp(0.106538718468);
    msg.setSource(16095U);
    msg.setSourceEntity(226U);
    msg.setDestination(5123U);
    msg.setDestinationEntity(73U);
    msg.op = 186U;
    msg.time_remain = 0.58335334346;
    msg.sched_time = 0.66364414971;

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
    msg.setTimeStamp(0.257126087665);
    msg.setSource(11075U);
    msg.setSourceEntity(124U);
    msg.setDestination(27615U);
    msg.setDestinationEntity(246U);
    msg.op = 8U;
    msg.time_remain = 0.151756834619;
    msg.sched_time = 0.647064731646;

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
    msg.setTimeStamp(0.0881285311775);
    msg.setSource(12319U);
    msg.setSourceEntity(195U);
    msg.setDestination(2692U);
    msg.setDestinationEntity(36U);
    msg.name.assign("DMYDYQWHEMBAQOHPIBOSHSLFRLUOZGUULRGTCFTGJTWQTXMJIZC");
    msg.op = 104U;
    msg.sched_time = 0.635114288083;

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
    msg.setTimeStamp(0.961017630271);
    msg.setSource(9332U);
    msg.setSourceEntity(223U);
    msg.setDestination(30876U);
    msg.setDestinationEntity(165U);
    msg.name.assign("DPNSEZVIERKDMQGOJKDAXZLLO");
    msg.op = 136U;
    msg.sched_time = 0.968639364785;

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
    msg.setTimeStamp(0.31043587922);
    msg.setSource(5925U);
    msg.setSourceEntity(108U);
    msg.setDestination(28122U);
    msg.setDestinationEntity(210U);
    msg.name.assign("QTICLOCKFJCSAXQUSHKDOEJWQZMQPVUVPNVEBAYXLKWUHEEXMSNGCTGTIGYHRCVFWFWYVZ");
    msg.op = 130U;
    msg.sched_time = 0.896294693285;

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
    msg.setTimeStamp(0.69980512865);
    msg.setSource(2354U);
    msg.setSourceEntity(91U);
    msg.setDestination(7690U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.491292221993);
    msg.setSource(55646U);
    msg.setSourceEntity(53U);
    msg.setDestination(29383U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.46586914884);
    msg.setSource(30632U);
    msg.setSourceEntity(116U);
    msg.setDestination(297U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.860299371917);
    msg.setSource(23943U);
    msg.setSourceEntity(227U);
    msg.setDestination(64392U);
    msg.setDestinationEntity(254U);
    msg.name.assign("MTRBTKAXQSHULCMGOMUAWLUGIRWQPUBNEEEVUYHIALIISHCADWIPFPANDOECFFEMDKTQGVACHAURQRNWPHXNVZLIEMVSTOYZSRLFRJCJGXX");
    msg.state = 235U;

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
    msg.setTimeStamp(0.929117910899);
    msg.setSource(51466U);
    msg.setSourceEntity(180U);
    msg.setDestination(30384U);
    msg.setDestinationEntity(178U);
    msg.name.assign("INFXVYEKNPMMAHPXRHUUYEGHLXKKFNWOBDBIDGPZODNCGJRQIOJUZXESXBEGTTNRCQFHGEBDQNADJECOIMJVZTOWJUJNGQDSCWYSLMEZQTZVOQALYBTONKOUHSCIRCCMSSETVIFLGLYOVINRQBHWZXLZSAHFVJJXBJARMBDTLLUCLJWUGEN");
    msg.state = 148U;

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
    msg.setTimeStamp(0.238008121017);
    msg.setSource(64878U);
    msg.setSourceEntity(50U);
    msg.setDestination(64503U);
    msg.setDestinationEntity(114U);
    msg.name.assign("OLOQKPZOBSPSPJJXFCUZGFOTTXMMMRDMBBYEIFXRKSKQAIGYBGECRADVDWLXPGNHGIDDYPMFJWLZJJVRJHSKTMTREUSCJLFGUIXNWKEUJCODTEPJNVVSXTVKAFNRFYHXHURPIEZMZXGYOCUDBOLENUOZWHTMQSUGYAYZAQKNW");
    msg.state = 68U;

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
    msg.setTimeStamp(0.693082374266);
    msg.setSource(16782U);
    msg.setSourceEntity(251U);
    msg.setDestination(15373U);
    msg.setDestinationEntity(134U);
    msg.name.assign("RLYZTDAAPNXUAWSSDEJYTMYEFKVUZRJRCCNWPNAHWPVGGPSWNGWNMCYELSPCXUFJTCTAZEHIZSPUFAJGCXQAXOHNGXTTRHWEVUUYOQWQDIIBPOBYINJDAHIXVLMXFJQHOJGQCMKREVWIQDERVKXGBMTCMCLOPUKYUIYEKVEFFMDVSGKLHOMALRSODKFBLZJSOVZLIMBAXHPFDJ");
    msg.value = 208U;

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
    msg.setTimeStamp(0.840842122189);
    msg.setSource(43350U);
    msg.setSourceEntity(175U);
    msg.setDestination(23434U);
    msg.setDestinationEntity(84U);
    msg.name.assign("KIUOGZBFYJJIYNUJSCROVZMHSCFLMBICQSJOEIWNDYPKH");
    msg.value = 105U;

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
    msg.setTimeStamp(0.800454651966);
    msg.setSource(44100U);
    msg.setSourceEntity(236U);
    msg.setDestination(12651U);
    msg.setDestinationEntity(160U);
    msg.name.assign("HPQKOGCJRSQSRLVDGLVKNSZYIOBCCDMYOEIDZQWUSUXRPYXTHNQUKCJVJRGPXMULJDPYTHTABYAQQEREOUFIDHHMKTZBGRUFPZEJSHKBCFZKPMXTXYONYAFUWXNDQPSIEFSLMLCNIDOGPLVBOAZNEFWRWBXFONVIMSQQUJVBCTWDPXYJQLWNWCCOYFNMEAVDSORJEVGMFTUE");
    msg.value = 127U;

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
    msg.setTimeStamp(0.197364687134);
    msg.setSource(16337U);
    msg.setSourceEntity(190U);
    msg.setDestination(4507U);
    msg.setDestinationEntity(210U);
    msg.name.assign("VTSAROWVCZFIDMYPRUBXWIIIYSTYUKPHHCTOUWZEUTYVRRIGJYKEPFJNDMCXKPIEQGHUTDVXPHMFKHNFECUHPZBNRLCFLRDQBAVWQF");

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
    msg.setTimeStamp(0.976085640371);
    msg.setSource(15155U);
    msg.setSourceEntity(122U);
    msg.setDestination(41425U);
    msg.setDestinationEntity(220U);
    msg.name.assign("KLYVVQIBULHTXGFEKTAZAWFPDFHQNDRLZPLSUUTLTOBGHBZONAADNKJGDSODIZTEWHEJCTRLISSLLQBKKGVNSZIPGSVCEXPRYHZAWQFTIJVFDPCJIYUQJXAKMAOYQMBLMBXFZUJMPGXPSYEFWWGZKQEKXZMHCOFWCUECAMDDWYJVXHBDJGCRYPIXJETSWQT");

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
    msg.setTimeStamp(0.745948791949);
    msg.setSource(17565U);
    msg.setSourceEntity(15U);
    msg.setDestination(53349U);
    msg.setDestinationEntity(159U);
    msg.name.assign("AELJQGZAYWLAXBKQXGEFYPPIFLVZGBIFYCRNVSUVEHQAUDKDNZWJHPNOXTGNMPROMYGFKBWYCJCQLSNDCKDAJMWBUUCXFIUSGXGGPMIXFLFDJDMNQNOTEYSJKAROMDODCMEAGHJKTRUBWEDLHPZHSSVSPJMRKWGUSTMXIBZYIXURPFRVTSTVJQCWOWRCYZIVANEVANRVVCHWJKLQKXZEYLI");

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
    msg.setTimeStamp(0.203938791963);
    msg.setSource(37210U);
    msg.setSourceEntity(240U);
    msg.setDestination(17012U);
    msg.setDestinationEntity(69U);
    msg.name.assign("YPHSAPOQGPWFVZAWUPKUFQXOMWYXNGSDPUOZKGCRSZIBHBRUAHFCJBVRLBNKTTEJFBXWPHBTYN");
    msg.value = 160U;

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
    msg.setTimeStamp(0.318337259713);
    msg.setSource(57761U);
    msg.setSourceEntity(214U);
    msg.setDestination(8304U);
    msg.setDestinationEntity(69U);
    msg.name.assign("GUZIXOHWICOORAZAKQCLJPVAVLOWINVXPXFFDJSDRESBVHWAEEQKPOJPEETGSOAJEFCTZNMYTFUBFQWQBHBRMUZOLMBDSGQGNYQBMZGHILNCBYZEGNFCGUIECNNKXOMZUPHYVWQXSSUIVRHHDTPQPACOYGTKURKDAMZLKNKIJTLLQWJARDMHKDTWYOGKNFVXRCIXCAGIYXYKDBBVTXBHPFIYVDSCWNPJUJESMRAZJDLY");
    msg.value = 222U;

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
    msg.setTimeStamp(0.283832812762);
    msg.setSource(26581U);
    msg.setSourceEntity(56U);
    msg.setDestination(14763U);
    msg.setDestinationEntity(183U);
    msg.name.assign("FMVDRZBCCNXWOMMGSPEDJCVJENIPSDKQYIXUZJGDZURMZBKBNUSZSEILYSVAPFYMXFLQMKOJKQXUKBAYDXJWOLQXERIFPDGZVPZDWOSTVTYNYFQDEPMWECGITAOWKDXQWUZRPXECRSHNAHHLFSBEGCRJFSAPWEGTBHSTOKRVLFUQKXCUGAOEVLRFJNYXNITBBTHCHHYYVABJIUWAPGHLMGNOQTCCRMALQGOWTVKDTYNJAK");
    msg.value = 228U;

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
    msg.setTimeStamp(0.346078720597);
    msg.setSource(7683U);
    msg.setSourceEntity(162U);
    msg.setDestination(30909U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.791204373503;
    msg.lon = 0.958494658694;
    msg.height = 0.52341156771;
    msg.x = 0.623527855298;
    msg.y = 0.105272404621;
    msg.z = 0.889938823709;
    msg.phi = 0.911680120629;
    msg.theta = 0.294802409278;
    msg.psi = 0.58482354978;
    msg.u = 0.857235423068;
    msg.v = 0.234704295628;
    msg.w = 0.838567277986;
    msg.vx = 0.120500909561;
    msg.vy = 0.181859808701;
    msg.vz = 0.129778672915;
    msg.p = 0.561904143203;
    msg.q = 0.808830428749;
    msg.r = 0.622253442941;
    msg.depth = 0.846788225245;
    msg.alt = 0.626450815426;

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
    msg.setTimeStamp(0.797859434166);
    msg.setSource(13377U);
    msg.setSourceEntity(143U);
    msg.setDestination(8158U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.741723048691;
    msg.lon = 0.776469330166;
    msg.height = 0.980288901761;
    msg.x = 0.945326995613;
    msg.y = 0.743407035941;
    msg.z = 0.323274345796;
    msg.phi = 0.417786498991;
    msg.theta = 0.929010016516;
    msg.psi = 0.999994367762;
    msg.u = 0.20394375747;
    msg.v = 0.734708758386;
    msg.w = 0.957575415378;
    msg.vx = 0.255384266244;
    msg.vy = 0.30694091626;
    msg.vz = 0.633256978443;
    msg.p = 0.284438348393;
    msg.q = 0.761397942341;
    msg.r = 0.257885238424;
    msg.depth = 0.743005102414;
    msg.alt = 0.409759508025;

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
    msg.setTimeStamp(0.597452476034);
    msg.setSource(22071U);
    msg.setSourceEntity(95U);
    msg.setDestination(63413U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.760843015574;
    msg.lon = 0.395764546087;
    msg.height = 0.715757561461;
    msg.x = 0.58126545669;
    msg.y = 0.181187547271;
    msg.z = 0.830768620142;
    msg.phi = 0.558551409125;
    msg.theta = 0.203805046472;
    msg.psi = 0.585958879775;
    msg.u = 0.734678025107;
    msg.v = 0.691785665397;
    msg.w = 0.484789714005;
    msg.vx = 0.0422826070722;
    msg.vy = 0.822773733007;
    msg.vz = 0.572599573814;
    msg.p = 0.92641868468;
    msg.q = 0.601003993533;
    msg.r = 0.547541909228;
    msg.depth = 0.367546064347;
    msg.alt = 0.913428040823;

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
    msg.setTimeStamp(0.804223022897);
    msg.setSource(63608U);
    msg.setSourceEntity(126U);
    msg.setDestination(27815U);
    msg.setDestinationEntity(241U);
    msg.x = 0.990634253918;
    msg.y = 0.978998444779;
    msg.z = 0.981494610192;

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
    msg.setTimeStamp(0.128471606834);
    msg.setSource(57840U);
    msg.setSourceEntity(242U);
    msg.setDestination(42223U);
    msg.setDestinationEntity(222U);
    msg.x = 0.71389533444;
    msg.y = 0.901258070467;
    msg.z = 0.132301871116;

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
    msg.setTimeStamp(0.624216000761);
    msg.setSource(22819U);
    msg.setSourceEntity(94U);
    msg.setDestination(40582U);
    msg.setDestinationEntity(218U);
    msg.x = 0.831895535147;
    msg.y = 0.764796035939;
    msg.z = 0.491755862768;

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
    msg.setTimeStamp(0.116450516474);
    msg.setSource(13310U);
    msg.setSourceEntity(117U);
    msg.setDestination(16984U);
    msg.setDestinationEntity(208U);
    msg.value = 0.661793896402;

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
    msg.setTimeStamp(0.434525661531);
    msg.setSource(62371U);
    msg.setSourceEntity(2U);
    msg.setDestination(35689U);
    msg.setDestinationEntity(176U);
    msg.value = 0.975650975482;

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
    msg.setTimeStamp(0.702530685816);
    msg.setSource(8359U);
    msg.setSourceEntity(115U);
    msg.setDestination(47257U);
    msg.setDestinationEntity(71U);
    msg.value = 0.625664193966;

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
    msg.setTimeStamp(0.778022431389);
    msg.setSource(64518U);
    msg.setSourceEntity(87U);
    msg.setDestination(41284U);
    msg.setDestinationEntity(186U);
    msg.value = 0.44325007503;

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
    msg.setTimeStamp(0.278528869616);
    msg.setSource(48235U);
    msg.setSourceEntity(145U);
    msg.setDestination(4276U);
    msg.setDestinationEntity(31U);
    msg.value = 0.561006159604;

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
    msg.setTimeStamp(0.516764413996);
    msg.setSource(3098U);
    msg.setSourceEntity(59U);
    msg.setDestination(46464U);
    msg.setDestinationEntity(148U);
    msg.value = 0.203763645581;

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
    msg.setTimeStamp(0.813762511041);
    msg.setSource(42575U);
    msg.setSourceEntity(47U);
    msg.setDestination(31273U);
    msg.setDestinationEntity(235U);
    msg.x = 0.208912994385;
    msg.y = 0.0595258297248;
    msg.z = 0.74995755324;
    msg.phi = 0.0898649675439;
    msg.theta = 0.284906695822;
    msg.psi = 0.058511762991;
    msg.p = 0.631696306592;
    msg.q = 0.638089644433;
    msg.r = 0.309675904689;
    msg.u = 0.136207084965;
    msg.v = 0.791701214546;
    msg.w = 0.890690171894;
    msg.bias_psi = 0.234855122686;
    msg.bias_r = 0.726430350491;

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
    msg.setTimeStamp(0.266068945599);
    msg.setSource(4582U);
    msg.setSourceEntity(226U);
    msg.setDestination(25472U);
    msg.setDestinationEntity(247U);
    msg.x = 0.874652103368;
    msg.y = 0.684188378546;
    msg.z = 0.83505465581;
    msg.phi = 0.990990502277;
    msg.theta = 0.625407089469;
    msg.psi = 0.351090032164;
    msg.p = 0.686701960553;
    msg.q = 0.0126129037544;
    msg.r = 0.1936838176;
    msg.u = 0.30139102537;
    msg.v = 0.810452021538;
    msg.w = 0.891663391262;
    msg.bias_psi = 0.790160203204;
    msg.bias_r = 0.837382712364;

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
    msg.setTimeStamp(0.760676183817);
    msg.setSource(32102U);
    msg.setSourceEntity(128U);
    msg.setDestination(46826U);
    msg.setDestinationEntity(45U);
    msg.x = 0.475517518831;
    msg.y = 0.574132288023;
    msg.z = 0.429211755725;
    msg.phi = 0.551226114533;
    msg.theta = 0.872604837413;
    msg.psi = 0.432596730641;
    msg.p = 0.0338921313881;
    msg.q = 0.318888230501;
    msg.r = 0.441711117588;
    msg.u = 0.0548511577072;
    msg.v = 0.478531510161;
    msg.w = 0.219965360416;
    msg.bias_psi = 0.850941072882;
    msg.bias_r = 0.718853223886;

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
    msg.setTimeStamp(0.54157026245);
    msg.setSource(48659U);
    msg.setSourceEntity(188U);
    msg.setDestination(7617U);
    msg.setDestinationEntity(31U);
    msg.bias_psi = 0.441114477272;
    msg.bias_r = 0.783082917033;
    msg.cog = 0.712005443768;
    msg.cyaw = 0.931090240389;
    msg.lbl_rej_level = 0.944077849227;
    msg.gps_rej_level = 0.82052955767;
    msg.custom_x = 0.505891355177;
    msg.custom_y = 0.424239815252;
    msg.custom_z = 0.0125093307487;

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
    msg.setTimeStamp(0.325744288093);
    msg.setSource(22892U);
    msg.setSourceEntity(142U);
    msg.setDestination(4364U);
    msg.setDestinationEntity(95U);
    msg.bias_psi = 0.216593313744;
    msg.bias_r = 0.89566966069;
    msg.cog = 0.328597008939;
    msg.cyaw = 0.457680891883;
    msg.lbl_rej_level = 0.0320033129805;
    msg.gps_rej_level = 0.982075892337;
    msg.custom_x = 0.66715624289;
    msg.custom_y = 0.063479610488;
    msg.custom_z = 0.648316705489;

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
    msg.setTimeStamp(0.424309457632);
    msg.setSource(31240U);
    msg.setSourceEntity(82U);
    msg.setDestination(36127U);
    msg.setDestinationEntity(55U);
    msg.bias_psi = 0.106732425457;
    msg.bias_r = 0.796947378893;
    msg.cog = 0.138768453072;
    msg.cyaw = 0.129509197101;
    msg.lbl_rej_level = 0.657142286263;
    msg.gps_rej_level = 0.327121347178;
    msg.custom_x = 0.220180212572;
    msg.custom_y = 0.406820830833;
    msg.custom_z = 0.274664832024;

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
    msg.setTimeStamp(0.681173139639);
    msg.setSource(3316U);
    msg.setSourceEntity(102U);
    msg.setDestination(35973U);
    msg.setDestinationEntity(13U);
    msg.utc_time = 0.875471301371;
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
    msg.setTimeStamp(0.411658208325);
    msg.setSource(7174U);
    msg.setSourceEntity(127U);
    msg.setDestination(16347U);
    msg.setDestinationEntity(39U);
    msg.utc_time = 0.182935688914;
    msg.reason = 8U;

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
    msg.setTimeStamp(0.866214450744);
    msg.setSource(27400U);
    msg.setSourceEntity(132U);
    msg.setDestination(50069U);
    msg.setDestinationEntity(215U);
    msg.utc_time = 0.0234522573057;
    msg.reason = 16U;

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
    msg.setTimeStamp(0.651048514046);
    msg.setSource(6392U);
    msg.setSourceEntity(188U);
    msg.setDestination(61698U);
    msg.setDestinationEntity(4U);
    msg.id = 205U;
    msg.range = 0.252420351664;
    msg.acceptance = 68U;

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
    msg.setTimeStamp(0.17703291624);
    msg.setSource(15259U);
    msg.setSourceEntity(94U);
    msg.setDestination(36429U);
    msg.setDestinationEntity(115U);
    msg.id = 60U;
    msg.range = 0.922795307013;
    msg.acceptance = 83U;

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
    msg.setTimeStamp(0.0306191944738);
    msg.setSource(50595U);
    msg.setSourceEntity(1U);
    msg.setDestination(13603U);
    msg.setDestinationEntity(169U);
    msg.id = 173U;
    msg.range = 0.924039018834;
    msg.acceptance = 173U;

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
    msg.setTimeStamp(0.772188153835);
    msg.setSource(19477U);
    msg.setSourceEntity(30U);
    msg.setDestination(58858U);
    msg.setDestinationEntity(128U);
    msg.type = 136U;
    msg.reason = 218U;
    msg.value = 0.999492507574;
    msg.timestep = 0.669800793291;

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
    msg.setTimeStamp(0.372067524221);
    msg.setSource(6516U);
    msg.setSourceEntity(146U);
    msg.setDestination(32371U);
    msg.setDestinationEntity(42U);
    msg.type = 234U;
    msg.reason = 27U;
    msg.value = 0.197580023769;
    msg.timestep = 0.419070992877;

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
    msg.setTimeStamp(0.387728833307);
    msg.setSource(4737U);
    msg.setSourceEntity(51U);
    msg.setDestination(63955U);
    msg.setDestinationEntity(9U);
    msg.type = 158U;
    msg.reason = 61U;
    msg.value = 0.241973505252;
    msg.timestep = 0.843487599415;

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
    msg.setTimeStamp(0.446699677833);
    msg.setSource(61269U);
    msg.setSourceEntity(135U);
    msg.setDestination(38666U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.906725552341);
    msg.setSource(51099U);
    msg.setSourceEntity(54U);
    msg.setDestination(6192U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.168220594526);
    msg.setSource(4177U);
    msg.setSourceEntity(29U);
    msg.setDestination(12438U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.705390581985);
    msg.setSource(57461U);
    msg.setSourceEntity(37U);
    msg.setDestination(48450U);
    msg.setDestinationEntity(172U);
    msg.beacon.assign("QBOLWZFWZERSYHUIXKIPSYDVUEJNJEOCBPEZRFKGSNDBYUACISNGWTCJUGNPQIANSIHMARCAJUEHOFQWRABGMXIXVGWKPFHDIACYT");
    msg.x = 0.907118520922;
    msg.y = 0.429198354678;
    msg.depth = 0.258882138171;
    msg.var_x = 0.286620104881;
    msg.var_y = 0.180841612667;

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
    msg.setTimeStamp(0.279575200304);
    msg.setSource(3829U);
    msg.setSourceEntity(18U);
    msg.setDestination(27034U);
    msg.setDestinationEntity(212U);
    msg.beacon.assign("JXEIDTMMAITZTVZBPNFADHPLLHUIPQCWWWCUYLFYXJDZWYPYJOSGYBBMWRHGWIBPNYVGNMAKYPHLIKHHUHSAXMQODKMTLCCBMEAOMXBCSNCJCWZXQUBLKKRNTRITSAODJLEURGJTPIFGYPAZQFKIVKCTNQUNFFDOWEORFGXYHTXNEZKJMUGKFDGSSOZ");
    msg.x = 0.559011632147;
    msg.y = 0.760166724434;
    msg.depth = 0.409958074651;
    msg.var_x = 0.219402317288;
    msg.var_y = 0.306283558681;

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
    msg.setTimeStamp(0.0959019932837);
    msg.setSource(6325U);
    msg.setSourceEntity(77U);
    msg.setDestination(36648U);
    msg.setDestinationEntity(3U);
    msg.beacon.assign("AYJKTJWDWVBNKMDNCHVKHVPGGPMWBBYDWDVPESQJMUXLPAWHSHUGXLNTZKFYOSTPXLXCNFQNMZIUUNOCVTPQECTWGUENBZAVXFEKHCRODMZGURBWZISSFZLRICGCLNLOEXWXUCOLQQSPFHHYCXHOIYYCEDBJOFGGJUJAZEWIJVXVEBAAGOITAMYKKDKRHMHUZZSLPPFTRRARIKZ");
    msg.x = 0.440938515553;
    msg.y = 0.080572185934;
    msg.depth = 0.878120020067;
    msg.var_x = 0.107360746705;
    msg.var_y = 0.340998169526;

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
    msg.setTimeStamp(0.528562413392);
    msg.setSource(59759U);
    msg.setSourceEntity(80U);
    msg.setDestination(13145U);
    msg.setDestinationEntity(142U);
    msg.value = 0.643248180456;

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
    msg.setTimeStamp(0.857497303898);
    msg.setSource(38066U);
    msg.setSourceEntity(198U);
    msg.setDestination(38812U);
    msg.setDestinationEntity(134U);
    msg.value = 0.678166819173;

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
    msg.setTimeStamp(0.982979104366);
    msg.setSource(50914U);
    msg.setSourceEntity(189U);
    msg.setDestination(6238U);
    msg.setDestinationEntity(185U);
    msg.value = 0.109857686094;

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
    msg.setTimeStamp(0.472261027996);
    msg.setSource(5426U);
    msg.setSourceEntity(193U);
    msg.setDestination(35897U);
    msg.setDestinationEntity(200U);
    msg.value = 0.985708494707;
    msg.z_units = 203U;

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
    msg.setTimeStamp(0.32121460808);
    msg.setSource(41768U);
    msg.setSourceEntity(61U);
    msg.setDestination(41135U);
    msg.setDestinationEntity(65U);
    msg.value = 0.724006024491;
    msg.z_units = 240U;

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
    msg.setTimeStamp(0.52311154622);
    msg.setSource(13138U);
    msg.setSourceEntity(180U);
    msg.setDestination(44424U);
    msg.setDestinationEntity(3U);
    msg.value = 0.781083972335;
    msg.z_units = 164U;

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
    msg.setTimeStamp(0.145264964841);
    msg.setSource(59208U);
    msg.setSourceEntity(40U);
    msg.setDestination(5939U);
    msg.setDestinationEntity(11U);
    msg.value = 0.998839675337;
    msg.speed_units = 171U;

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
    msg.setTimeStamp(0.597937545771);
    msg.setSource(58322U);
    msg.setSourceEntity(136U);
    msg.setDestination(39382U);
    msg.setDestinationEntity(25U);
    msg.value = 0.419243523363;
    msg.speed_units = 119U;

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
    msg.setTimeStamp(0.840624869058);
    msg.setSource(49530U);
    msg.setSourceEntity(203U);
    msg.setDestination(20442U);
    msg.setDestinationEntity(61U);
    msg.value = 0.833645446823;
    msg.speed_units = 155U;

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
    msg.setTimeStamp(0.323401307718);
    msg.setSource(11161U);
    msg.setSourceEntity(83U);
    msg.setDestination(23508U);
    msg.setDestinationEntity(67U);
    msg.value = 0.407305147345;

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
    msg.setTimeStamp(0.710186850137);
    msg.setSource(18370U);
    msg.setSourceEntity(128U);
    msg.setDestination(25381U);
    msg.setDestinationEntity(180U);
    msg.value = 0.125656881962;

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
    msg.setTimeStamp(0.644295309604);
    msg.setSource(25355U);
    msg.setSourceEntity(206U);
    msg.setDestination(38613U);
    msg.setDestinationEntity(29U);
    msg.value = 0.843173960444;

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
    msg.setTimeStamp(0.940065584696);
    msg.setSource(7081U);
    msg.setSourceEntity(14U);
    msg.setDestination(29800U);
    msg.setDestinationEntity(80U);
    msg.value = 0.608764144092;

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
    msg.setTimeStamp(0.782354911557);
    msg.setSource(35874U);
    msg.setSourceEntity(60U);
    msg.setDestination(36065U);
    msg.setDestinationEntity(74U);
    msg.value = 0.672378326599;

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
    msg.setTimeStamp(0.253009528065);
    msg.setSource(23001U);
    msg.setSourceEntity(200U);
    msg.setDestination(42054U);
    msg.setDestinationEntity(44U);
    msg.value = 0.700350676606;

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
    msg.setTimeStamp(0.678231803031);
    msg.setSource(46206U);
    msg.setSourceEntity(180U);
    msg.setDestination(13231U);
    msg.setDestinationEntity(51U);
    msg.value = 0.745145628654;

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
    msg.setTimeStamp(0.460802853027);
    msg.setSource(23034U);
    msg.setSourceEntity(57U);
    msg.setDestination(65237U);
    msg.setDestinationEntity(219U);
    msg.value = 0.423585676408;

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
    msg.setTimeStamp(0.0372275248821);
    msg.setSource(37134U);
    msg.setSourceEntity(22U);
    msg.setDestination(28943U);
    msg.setDestinationEntity(24U);
    msg.value = 0.400797393216;

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
    msg.setTimeStamp(0.473929380323);
    msg.setSource(32860U);
    msg.setSourceEntity(140U);
    msg.setDestination(47779U);
    msg.setDestinationEntity(130U);
    msg.start_lat = 0.786044410797;
    msg.start_lon = 0.466924637251;
    msg.start_z = 0.810657896749;
    msg.start_z_units = 66U;
    msg.end_lat = 0.402695295462;
    msg.end_lon = 0.426577967767;
    msg.end_z = 0.733231361291;
    msg.end_z_units = 4U;
    msg.speed = 0.0218025862291;
    msg.speed_units = 144U;
    msg.lradius = 0.22208965317;
    msg.flags = 222U;

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
    msg.setTimeStamp(0.545396911458);
    msg.setSource(35448U);
    msg.setSourceEntity(115U);
    msg.setDestination(6868U);
    msg.setDestinationEntity(227U);
    msg.start_lat = 0.951707809893;
    msg.start_lon = 0.577519398576;
    msg.start_z = 0.497320008375;
    msg.start_z_units = 210U;
    msg.end_lat = 0.228482806029;
    msg.end_lon = 0.634110972511;
    msg.end_z = 0.8311000364;
    msg.end_z_units = 94U;
    msg.speed = 0.334900295062;
    msg.speed_units = 111U;
    msg.lradius = 0.124843244659;
    msg.flags = 154U;

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
    msg.setTimeStamp(0.481505188692);
    msg.setSource(18553U);
    msg.setSourceEntity(183U);
    msg.setDestination(35487U);
    msg.setDestinationEntity(137U);
    msg.start_lat = 0.583488198773;
    msg.start_lon = 0.980414187299;
    msg.start_z = 0.819610037609;
    msg.start_z_units = 163U;
    msg.end_lat = 0.294632870259;
    msg.end_lon = 0.562343626032;
    msg.end_z = 0.380447818755;
    msg.end_z_units = 92U;
    msg.speed = 0.548679554604;
    msg.speed_units = 168U;
    msg.lradius = 0.661194155805;
    msg.flags = 241U;

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
    msg.setTimeStamp(0.442826787707);
    msg.setSource(50699U);
    msg.setSourceEntity(150U);
    msg.setDestination(8229U);
    msg.setDestinationEntity(8U);
    msg.x = 0.540707911913;
    msg.y = 0.746205029212;
    msg.z = 0.80234953459;
    msg.k = 0.816787419846;
    msg.m = 0.426173375069;
    msg.n = 0.722686487945;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.411659279992);
    msg.setSource(7839U);
    msg.setSourceEntity(184U);
    msg.setDestination(45740U);
    msg.setDestinationEntity(89U);
    msg.x = 0.601939993018;
    msg.y = 0.429760470081;
    msg.z = 0.653953433236;
    msg.k = 0.271869653036;
    msg.m = 0.597908486029;
    msg.n = 0.0532176468849;
    msg.flags = 196U;

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
    msg.setTimeStamp(0.210349744579);
    msg.setSource(55816U);
    msg.setSourceEntity(163U);
    msg.setDestination(30706U);
    msg.setDestinationEntity(35U);
    msg.x = 0.0735572238559;
    msg.y = 0.951629178617;
    msg.z = 0.39203310532;
    msg.k = 0.0764917357783;
    msg.m = 0.37961042932;
    msg.n = 0.178585915455;
    msg.flags = 113U;

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
    msg.setTimeStamp(0.781268464455);
    msg.setSource(16785U);
    msg.setSourceEntity(187U);
    msg.setDestination(46215U);
    msg.setDestinationEntity(113U);
    msg.value = 0.196440611233;

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
    msg.setTimeStamp(0.108735583024);
    msg.setSource(15080U);
    msg.setSourceEntity(95U);
    msg.setDestination(22903U);
    msg.setDestinationEntity(24U);
    msg.value = 0.0522425208927;

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
    msg.setTimeStamp(0.232688381992);
    msg.setSource(38994U);
    msg.setSourceEntity(81U);
    msg.setDestination(56334U);
    msg.setDestinationEntity(89U);
    msg.value = 0.587140841896;

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
    msg.setTimeStamp(0.297408789124);
    msg.setSource(14394U);
    msg.setSourceEntity(127U);
    msg.setDestination(60943U);
    msg.setDestinationEntity(225U);
    msg.u = 0.56951398482;
    msg.v = 0.268429897368;
    msg.w = 0.350584768512;
    msg.p = 0.56055656851;
    msg.q = 0.709793618103;
    msg.r = 0.540668583129;
    msg.flags = 0U;

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
    msg.setTimeStamp(0.810891082608);
    msg.setSource(44735U);
    msg.setSourceEntity(68U);
    msg.setDestination(14787U);
    msg.setDestinationEntity(234U);
    msg.u = 0.0944843360174;
    msg.v = 0.76305382565;
    msg.w = 0.277941936786;
    msg.p = 0.417491999066;
    msg.q = 0.17032193804;
    msg.r = 0.303370244358;
    msg.flags = 74U;

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
    msg.setTimeStamp(0.228631278971);
    msg.setSource(29669U);
    msg.setSourceEntity(64U);
    msg.setDestination(35509U);
    msg.setDestinationEntity(6U);
    msg.u = 0.513535395812;
    msg.v = 0.88000462243;
    msg.w = 0.484703392198;
    msg.p = 0.743412808018;
    msg.q = 0.760634428126;
    msg.r = 0.695752130192;
    msg.flags = 226U;

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
    msg.setTimeStamp(0.519915655054);
    msg.setSource(6162U);
    msg.setSourceEntity(55U);
    msg.setDestination(29472U);
    msg.setDestinationEntity(133U);
    msg.start_lat = 0.557357499183;
    msg.start_lon = 0.336973217294;
    msg.start_z = 0.570550053052;
    msg.start_z_units = 195U;
    msg.end_lat = 0.9518175015;
    msg.end_lon = 0.445230202993;
    msg.end_z = 0.656905160318;
    msg.end_z_units = 67U;
    msg.lradius = 0.276909701116;
    msg.flags = 179U;
    msg.x = 0.36828135242;
    msg.y = 0.782758495096;
    msg.z = 0.340876604592;
    msg.vx = 0.44184661183;
    msg.vy = 0.911208589841;
    msg.vz = 0.0529657477841;
    msg.course_error = 0.430362957152;
    msg.eta = 29038U;

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
    msg.setTimeStamp(0.526700783337);
    msg.setSource(11423U);
    msg.setSourceEntity(215U);
    msg.setDestination(44031U);
    msg.setDestinationEntity(217U);
    msg.start_lat = 0.930174509827;
    msg.start_lon = 0.662555547725;
    msg.start_z = 0.446510122559;
    msg.start_z_units = 171U;
    msg.end_lat = 0.890497533445;
    msg.end_lon = 0.701770909938;
    msg.end_z = 0.865911209069;
    msg.end_z_units = 106U;
    msg.lradius = 0.520383842587;
    msg.flags = 115U;
    msg.x = 0.505478003135;
    msg.y = 0.606460874974;
    msg.z = 0.797409402054;
    msg.vx = 0.276853800476;
    msg.vy = 0.771707910212;
    msg.vz = 0.756230682255;
    msg.course_error = 0.115970873663;
    msg.eta = 42084U;

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
    msg.setTimeStamp(0.945375596454);
    msg.setSource(18866U);
    msg.setSourceEntity(71U);
    msg.setDestination(20162U);
    msg.setDestinationEntity(209U);
    msg.start_lat = 0.853344968004;
    msg.start_lon = 0.98832483236;
    msg.start_z = 0.633639857797;
    msg.start_z_units = 186U;
    msg.end_lat = 0.00456471845258;
    msg.end_lon = 0.952816690651;
    msg.end_z = 0.0956186163955;
    msg.end_z_units = 141U;
    msg.lradius = 0.82104856625;
    msg.flags = 146U;
    msg.x = 0.522752593533;
    msg.y = 0.447671174832;
    msg.z = 0.358827718098;
    msg.vx = 0.31364721791;
    msg.vy = 0.176497006696;
    msg.vz = 0.657475849874;
    msg.course_error = 0.524445663096;
    msg.eta = 55859U;

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
    msg.setTimeStamp(0.645695027622);
    msg.setSource(9872U);
    msg.setSourceEntity(62U);
    msg.setDestination(21349U);
    msg.setDestinationEntity(251U);
    msg.k = 0.443365164972;
    msg.m = 0.474998946302;
    msg.n = 0.0301294820903;

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
    msg.setTimeStamp(0.0698016818255);
    msg.setSource(53815U);
    msg.setSourceEntity(207U);
    msg.setDestination(19197U);
    msg.setDestinationEntity(127U);
    msg.k = 0.875658903465;
    msg.m = 0.629080898606;
    msg.n = 0.835351017803;

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
    msg.setTimeStamp(0.370183592068);
    msg.setSource(5761U);
    msg.setSourceEntity(125U);
    msg.setDestination(48690U);
    msg.setDestinationEntity(0U);
    msg.k = 0.134451018952;
    msg.m = 0.67022989386;
    msg.n = 0.969512592563;

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
    msg.setTimeStamp(0.0216005463428);
    msg.setSource(22968U);
    msg.setSourceEntity(155U);
    msg.setDestination(24482U);
    msg.setDestinationEntity(164U);
    msg.p = 0.92216360334;
    msg.i = 0.880612542456;
    msg.d = 0.164047242975;
    msg.a = 0.990250658309;

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
    msg.setTimeStamp(0.49494324785);
    msg.setSource(11330U);
    msg.setSourceEntity(169U);
    msg.setDestination(4808U);
    msg.setDestinationEntity(177U);
    msg.p = 0.255998700661;
    msg.i = 0.0169724554757;
    msg.d = 0.895186585925;
    msg.a = 0.553890722457;

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
    msg.setTimeStamp(0.464547725529);
    msg.setSource(15117U);
    msg.setSourceEntity(5U);
    msg.setDestination(31705U);
    msg.setDestinationEntity(104U);
    msg.p = 0.574036146997;
    msg.i = 0.303805996206;
    msg.d = 0.313917968053;
    msg.a = 0.323642954565;

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
    msg.setTimeStamp(0.818038884498);
    msg.setSource(63050U);
    msg.setSourceEntity(218U);
    msg.setDestination(26975U);
    msg.setDestinationEntity(171U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.232935814418);
    msg.setSource(63215U);
    msg.setSourceEntity(30U);
    msg.setDestination(27928U);
    msg.setDestinationEntity(31U);
    msg.op = 66U;

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
    msg.setTimeStamp(0.123363749631);
    msg.setSource(13529U);
    msg.setSourceEntity(41U);
    msg.setDestination(45372U);
    msg.setDestinationEntity(8U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.457215527475);
    msg.setSource(5968U);
    msg.setSourceEntity(187U);
    msg.setDestination(39306U);
    msg.setDestinationEntity(132U);
    msg.timeout = 26297U;
    msg.lat = 0.914605580011;
    msg.lon = 0.25730589565;
    msg.z = 0.157591504791;
    msg.z_units = 137U;
    msg.speed = 0.703047959366;
    msg.speed_units = 81U;
    msg.roll = 0.712075201256;
    msg.pitch = 0.195530269203;
    msg.yaw = 0.690585289171;
    msg.custom.assign("NPZDSPTYJQKJNWYXHBDKOFTELQQYDNUAMCIAXIXWSERJNGCBNGOGGVVQLMMDKZIGIBWAFEYUDLTRJSGXHPCSOPNZANTASQTJQVHMXHVUYERUKIRLBBAFFOTDICGNRPRGCNWOKHMSRERWTAHCUESVEAWCDUPMQQCMLYVAEHULZFMFVJSFWTSDBGCUMZIJZYWLZTFBJQ");

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
    msg.setTimeStamp(0.987876008438);
    msg.setSource(63204U);
    msg.setSourceEntity(153U);
    msg.setDestination(42987U);
    msg.setDestinationEntity(155U);
    msg.timeout = 9183U;
    msg.lat = 0.711447258506;
    msg.lon = 0.230258834551;
    msg.z = 0.592600639176;
    msg.z_units = 86U;
    msg.speed = 0.0471368067602;
    msg.speed_units = 223U;
    msg.roll = 0.650108571506;
    msg.pitch = 0.876827078523;
    msg.yaw = 0.86241713412;
    msg.custom.assign("UIKHIYFUWKUXUMPOQXXKSTVRECWUMEGVMCHPIPTPGNEZEERDCHKMOSVOLIAUMBXJTOVDHZDGJIHKUEZRJAVXSTITGYJSOYSXZSOQDUMONASRSGVFVBPCDHDFWTAXXZQCKLLAZPQZMGWAJLFTPPOJYTYNGECWAXBLHLWBHBDRGPDHBWJFTIJZNFIWLFPKUDYLEJMEGGOBRYYQKTSARYVIACCNODZRHSWUAQWKCLZXIRCQYV");

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
    msg.setTimeStamp(0.404081302072);
    msg.setSource(46244U);
    msg.setSourceEntity(184U);
    msg.setDestination(11768U);
    msg.setDestinationEntity(82U);
    msg.timeout = 6822U;
    msg.lat = 0.0995077084962;
    msg.lon = 0.93602973795;
    msg.z = 0.314237911559;
    msg.z_units = 177U;
    msg.speed = 0.0842597903458;
    msg.speed_units = 239U;
    msg.roll = 0.269585011582;
    msg.pitch = 0.635642301265;
    msg.yaw = 0.961247485763;
    msg.custom.assign("INUTHPWICFYVKUKLSLTQVJAEGARVTQIYAZWXSMCAZ");

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
    msg.setTimeStamp(0.955556349897);
    msg.setSource(50608U);
    msg.setSourceEntity(212U);
    msg.setDestination(34994U);
    msg.setDestinationEntity(67U);
    msg.timeout = 51710U;
    msg.lat = 0.105200676506;
    msg.lon = 0.718846381436;
    msg.z = 0.820004519193;
    msg.z_units = 113U;
    msg.speed = 0.0504305503194;
    msg.speed_units = 234U;
    msg.duration = 57955U;
    msg.radius = 0.772756267012;
    msg.flags = 251U;
    msg.custom.assign("MSUCLCRWBSGDWOZDUHOWXNJHAJPGYMAPCEIKZYJUSAOYQSTXXFQTZZEMSNLLZQRTNF");

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
    msg.setTimeStamp(0.931590309009);
    msg.setSource(38254U);
    msg.setSourceEntity(52U);
    msg.setDestination(29913U);
    msg.setDestinationEntity(251U);
    msg.timeout = 42477U;
    msg.lat = 0.640971233265;
    msg.lon = 0.767401337027;
    msg.z = 0.975580892834;
    msg.z_units = 222U;
    msg.speed = 0.843211476749;
    msg.speed_units = 57U;
    msg.duration = 19643U;
    msg.radius = 0.688675274758;
    msg.flags = 216U;
    msg.custom.assign("WPRZRYNLWGLLNULVCWEXRBIRWHFSMCYZCQYMBCPHHVEUHQBSKNZZWYUCMMFZOJMXEAEIDOJXZLHLRSWVVH");

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
    msg.setTimeStamp(0.205981193172);
    msg.setSource(53300U);
    msg.setSourceEntity(98U);
    msg.setDestination(2235U);
    msg.setDestinationEntity(180U);
    msg.timeout = 12851U;
    msg.lat = 0.814173231184;
    msg.lon = 0.597714346056;
    msg.z = 0.570657452064;
    msg.z_units = 241U;
    msg.speed = 0.626970302575;
    msg.speed_units = 185U;
    msg.duration = 39761U;
    msg.radius = 0.402710611876;
    msg.flags = 53U;
    msg.custom.assign("RWOJREFNHNLSUIHHGVSTCUJPAAGAQSPTLLUTVAOYOTUBRSYTEZAMZYNXGBNHMCZKHKVXJWMOEZKDICDGRGHFFDHMBQWVFOOVBKTXCIWLJCUPVBDBGQOFHXPXYQYQAVWRATCWISSKGVFFXPNELMCUUJKDOIRZJSW");

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
    msg.setTimeStamp(0.0864726698218);
    msg.setSource(54503U);
    msg.setSourceEntity(200U);
    msg.setDestination(37178U);
    msg.setDestinationEntity(46U);
    msg.custom.assign("QLROVVENJIESCJYOOXZZGVAUPMFIOEXFSMRGMPACFCASTYLIDFTPWUXKJZSEBENXGUKGBYNDROYIWXBMSLRJTVLQIYGVQKHSKYIAOYOAXLTQGEYUVOHILDZAPXJDZRLKGGQHSJEKEUIPOVLFTHHKUVNJDEREMQDXSXRNT");

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
    msg.setTimeStamp(0.87216610688);
    msg.setSource(28117U);
    msg.setSourceEntity(87U);
    msg.setDestination(6018U);
    msg.setDestinationEntity(115U);
    msg.custom.assign("MFMSSGCDTAWOKUPMMPGAXLZYAGIPXUTOLQCWUILDDXELZRDATVNCDPYEIZXHSQMDCYYUYURRJCVNDHEDLKEUHBQWKKNZQNGYFGSBCJSBFVHKIZSIXZYGWBWYOHBFIOCTCEFRIKJPGXR");

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
    msg.setTimeStamp(0.999788589115);
    msg.setSource(43365U);
    msg.setSourceEntity(191U);
    msg.setDestination(49625U);
    msg.setDestinationEntity(7U);
    msg.custom.assign("FVXJDSVBAWABWVFEOXBAKBMEYSTPJGLXHACRFUCYMFPVYGORAGHJQWEGLOWENJAQDRLIVHKRICM");

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
    msg.setTimeStamp(0.916633361598);
    msg.setSource(53654U);
    msg.setSourceEntity(188U);
    msg.setDestination(13390U);
    msg.setDestinationEntity(233U);
    msg.timeout = 56971U;
    msg.lat = 0.384652748015;
    msg.lon = 0.481524579092;
    msg.z = 0.3248245899;
    msg.z_units = 166U;
    msg.duration = 59569U;
    msg.speed = 0.751574399392;
    msg.speed_units = 39U;
    msg.type = 86U;
    msg.radius = 0.821957036099;
    msg.length = 0.0268383185753;
    msg.bearing = 0.431932505746;
    msg.direction = 101U;
    msg.custom.assign("WWWVUMJTGHCZBAEIXFTXSDEMQUFPJONULZGPOLCIOKLVFVOUCLPXBWQOXPZDJYRGFRCTNXNYDCASGMTPUXVVWDQVPKFQKJRSOQOYOPJJTUUTURXXITWBKGASJZEUZEIMEBHBEGEEFYLMRNDVKYLXAYGNTGFRMNCVOZEGQKQMNAIPIMUPKYRYSSTYHWVZCAALAKHKIWYEZ");

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
    msg.setTimeStamp(0.618396033114);
    msg.setSource(60490U);
    msg.setSourceEntity(215U);
    msg.setDestination(26276U);
    msg.setDestinationEntity(115U);
    msg.timeout = 39334U;
    msg.lat = 0.62135296499;
    msg.lon = 0.661292631582;
    msg.z = 0.360900840635;
    msg.z_units = 63U;
    msg.duration = 9113U;
    msg.speed = 0.330777388587;
    msg.speed_units = 20U;
    msg.type = 129U;
    msg.radius = 0.781399501454;
    msg.length = 0.472598392322;
    msg.bearing = 0.0870102687369;
    msg.direction = 26U;
    msg.custom.assign("IFCTRMAFIHVL");

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
    msg.setTimeStamp(0.0776398196211);
    msg.setSource(2121U);
    msg.setSourceEntity(29U);
    msg.setDestination(44442U);
    msg.setDestinationEntity(95U);
    msg.timeout = 60376U;
    msg.lat = 0.224459443943;
    msg.lon = 0.198702137892;
    msg.z = 0.250224655411;
    msg.z_units = 154U;
    msg.duration = 39162U;
    msg.speed = 0.537064129568;
    msg.speed_units = 175U;
    msg.type = 192U;
    msg.radius = 0.388890161674;
    msg.length = 0.469633250853;
    msg.bearing = 0.626243698957;
    msg.direction = 3U;
    msg.custom.assign("DNCMFOQOWQUYFRLYVSPALCWFNKMUBWFQBOYYRQPFPWZSOTJXDWGTEDKXMTKECAWZBPLYNASQADNTNXETPMTPGEKUPKGKDYWZS");

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
    msg.setTimeStamp(0.540253353773);
    msg.setSource(7729U);
    msg.setSourceEntity(245U);
    msg.setDestination(33424U);
    msg.setDestinationEntity(112U);
    msg.duration = 39271U;
    msg.custom.assign("AHQKVBNVVCBLUOJFRCYFBFOUDLOMHPEVRXVFGAXLKQPKXZLXALTEEDRITMQTJOLWWHTYHKSCNMSRYYSUCQGTZWYTGWWYSJCHAOBSPBPBZUDTICPANYWAZDIUFQONAHITOCSKHROXLXIRGAGHRMXLOQQFUGNNLZRCBKWQSBEYSVUWYECIZAMYMDNPFMIEMUFQEBOS");

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
    msg.setTimeStamp(0.135747805084);
    msg.setSource(19308U);
    msg.setSourceEntity(1U);
    msg.setDestination(7836U);
    msg.setDestinationEntity(115U);
    msg.duration = 26959U;
    msg.custom.assign("LCRIGPUVCRVOCWBAIYQGATPLQRG");

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
    msg.setTimeStamp(0.474092844455);
    msg.setSource(10436U);
    msg.setSourceEntity(131U);
    msg.setDestination(2750U);
    msg.setDestinationEntity(179U);
    msg.duration = 40472U;
    msg.custom.assign("PXQLXIEQCEKIPNUXTXOKEDJVMLBRBTQVDOMLXKUUVYUJQVEVLKMOGPQJRYCXHAEQMYPVHFYZYHXJOF");

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
    msg.setTimeStamp(0.438489397821);
    msg.setSource(60718U);
    msg.setSourceEntity(219U);
    msg.setDestination(21671U);
    msg.setDestinationEntity(85U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.540862759658;
    msg.control.set(tmp_msg_0);
    msg.duration = 53305U;
    msg.custom.assign("KCGVYKUUNWQGZMJVNGQVXJJTNTCFZRONTKTRAQPLOFOMRMYZAARDMZT");

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
    msg.setTimeStamp(0.542947637965);
    msg.setSource(15822U);
    msg.setSourceEntity(30U);
    msg.setDestination(5415U);
    msg.setDestinationEntity(203U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.123432273112;
    tmp_msg_0.start_lon = 0.621530055754;
    tmp_msg_0.start_z = 0.478909707839;
    tmp_msg_0.start_z_units = 66U;
    tmp_msg_0.end_lat = 0.634112310717;
    tmp_msg_0.end_lon = 0.122793232432;
    tmp_msg_0.end_z = 0.870606107359;
    tmp_msg_0.end_z_units = 22U;
    tmp_msg_0.speed = 0.938319992401;
    tmp_msg_0.speed_units = 121U;
    tmp_msg_0.lradius = 0.648013002183;
    tmp_msg_0.flags = 67U;
    msg.control.set(tmp_msg_0);
    msg.duration = 23123U;
    msg.custom.assign("VQHDKCGFJZYOEFMTWRXBGNIOEAKHIFSLYOPJQAGPKCXSXEUUIKBFCOLCJQFRCAVNJQERNNFODDRYQLQWZEITIESSCYJBFDKRLOZWWVVYQBGASKADTMHQMDNMBABJXMWGMXE");

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
    msg.setTimeStamp(0.617018687876);
    msg.setSource(11030U);
    msg.setSourceEntity(94U);
    msg.setDestination(11995U);
    msg.setDestinationEntity(189U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.392434989839;
    msg.control.set(tmp_msg_0);
    msg.duration = 4055U;
    msg.custom.assign("JQTEMWRYHESKVREJLKEBONILZXRQYGMNAPGNCBKVOSDAHUSOVAVHSZVOZKNXQPWINYLBGCRQPTRTRPDJOJUUEQOPXFPKMIUENYBCF");

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
    msg.setTimeStamp(0.617520052001);
    msg.setSource(19557U);
    msg.setSourceEntity(41U);
    msg.setDestination(33759U);
    msg.setDestinationEntity(67U);
    msg.timeout = 48503U;
    msg.lat = 0.0576582534776;
    msg.lon = 0.150855350582;
    msg.z = 0.0789979792074;
    msg.z_units = 9U;
    msg.speed = 0.411852474522;
    msg.speed_units = 70U;
    msg.bearing = 0.914879528156;
    msg.cross_angle = 0.56563793991;
    msg.width = 0.804803606733;
    msg.length = 0.670653077111;
    msg.hstep = 0.488658373989;
    msg.coff = 221U;
    msg.alternation = 112U;
    msg.flags = 135U;
    msg.custom.assign("TNTPNPOMDDQNQVPPWJUSUSXDDFOCLLSPREJKSIAFDPDRTZLYWOSINYECZYWTFQAJNIOIKJXRVKLXRIMNVCHTRRJGUUCILJTCAMUBDZOMGUIJCQZXLCTFIAWEBKEFGCGGXFAYPPLVVBCCNINMIVEAUEAEYBKSBFZQZMTBRLBWZSMKBVFGEQFKSGPEYHKQHAYDLHBKLGHMOXSSOYARZHAHOWPDWUNJGTHWKYGHJBRRZNWVXUQW");

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
    msg.setTimeStamp(0.82267316583);
    msg.setSource(60732U);
    msg.setSourceEntity(217U);
    msg.setDestination(35242U);
    msg.setDestinationEntity(57U);
    msg.timeout = 11001U;
    msg.lat = 0.107770928372;
    msg.lon = 0.538534119054;
    msg.z = 0.98644076616;
    msg.z_units = 60U;
    msg.speed = 0.904734614564;
    msg.speed_units = 87U;
    msg.bearing = 0.202346817423;
    msg.cross_angle = 0.0396433468439;
    msg.width = 0.676465313435;
    msg.length = 0.00972529146983;
    msg.hstep = 0.20416358985;
    msg.coff = 4U;
    msg.alternation = 254U;
    msg.flags = 140U;
    msg.custom.assign("TRAIEHEZFJRBWMJMGMOUHWOCFBTDEFIAPFUDTEIXNVJXZYIEJGFCKPFYVIOXBKJAHTWPVHIDPGABBMNPOWLHJUVKQUKNXUMVRQLAUGHOSSWNFKTTRXEKMXLBKNSISXTYVUIGLRZLLZQRRRQHRBVGVSNSGOQAGVSJCPBDOQFDZHWEYMEZCQPJADYZAFCZ");

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
    msg.setTimeStamp(0.892006237574);
    msg.setSource(27573U);
    msg.setSourceEntity(11U);
    msg.setDestination(478U);
    msg.setDestinationEntity(196U);
    msg.timeout = 1812U;
    msg.lat = 0.506636708101;
    msg.lon = 0.988025909344;
    msg.z = 0.974998126642;
    msg.z_units = 11U;
    msg.speed = 0.948157888791;
    msg.speed_units = 225U;
    msg.bearing = 0.583001775554;
    msg.cross_angle = 0.943803885326;
    msg.width = 0.836036688943;
    msg.length = 0.385353599904;
    msg.hstep = 0.953457630073;
    msg.coff = 2U;
    msg.alternation = 55U;
    msg.flags = 94U;
    msg.custom.assign("HEJSKFCHSAMUTVINMLZZCMCKXPJNFPARTJTLZCYSLOOXKYNDRDWYMPPVOHAEPFPIZUKUKJXOTFDTFAHDCHNGMRBXNWCSGDDHBTSVWWLKMVVEKWMZQTYQCBIRXGTOUWASRZDVFVEWBJERZOLKOGUEQBQZAQNYNYYGRZLMFFMPNHYJIHNXJPULGDLWYDSOGCRBX");

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
    msg.setTimeStamp(0.294776643043);
    msg.setSource(12604U);
    msg.setSourceEntity(197U);
    msg.setDestination(16229U);
    msg.setDestinationEntity(251U);
    msg.timeout = 35695U;
    msg.lat = 0.433200609228;
    msg.lon = 0.111882103222;
    msg.z = 0.426318291478;
    msg.z_units = 176U;
    msg.speed = 0.158730232209;
    msg.speed_units = 218U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.297245439626;
    tmp_msg_0.y = 0.046896186065;
    tmp_msg_0.z = 0.214344239406;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JQLGMUPCDLERL");

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
    msg.setTimeStamp(0.961393540191);
    msg.setSource(3471U);
    msg.setSourceEntity(158U);
    msg.setDestination(43203U);
    msg.setDestinationEntity(174U);
    msg.timeout = 40910U;
    msg.lat = 0.062034126323;
    msg.lon = 0.16922096623;
    msg.z = 0.145558486677;
    msg.z_units = 198U;
    msg.speed = 0.574052334265;
    msg.speed_units = 17U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.490668277944;
    tmp_msg_0.y = 0.731339451344;
    tmp_msg_0.z = 0.28664084819;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AVTEYMFKOVYHQZZPWALGWBZVXWCSDYNPEYEJLRJZYNY");

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
    msg.setTimeStamp(0.666697363192);
    msg.setSource(39889U);
    msg.setSourceEntity(128U);
    msg.setDestination(30866U);
    msg.setDestinationEntity(36U);
    msg.timeout = 24068U;
    msg.lat = 0.0928221514428;
    msg.lon = 0.195483984012;
    msg.z = 0.680047990154;
    msg.z_units = 63U;
    msg.speed = 0.479945442324;
    msg.speed_units = 66U;
    msg.custom.assign("IPEHRNCRWJNTVUZDFWIJUYTNTOAEAIZPYZMPMDBNVVKOSRLQIYKOORQBYCRRUIFXFXNQPMXYUQCZXYLICQEEMKFWZSGVPGOGLGTUNAMHLFMJBZSLQOETGDWXMPSKAAHNOVUPOHXHWREYLDJQXHDGROLNKYIIJKWORPZXCTXWKKKDREUNFZZHYXPQHQWWAFDKNECHHDUTVCCGTEBFEVBBQBSJASUBCZJBFSBJJDYGDAVSATIWULMSVMGIGTJ");

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
    msg.setTimeStamp(0.60001940798);
    msg.setSource(30750U);
    msg.setSourceEntity(36U);
    msg.setDestination(12274U);
    msg.setDestinationEntity(45U);
    msg.x = 0.90679637304;
    msg.y = 0.384707167018;
    msg.z = 0.783082507227;

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
    msg.setTimeStamp(0.176892127413);
    msg.setSource(27281U);
    msg.setSourceEntity(76U);
    msg.setDestination(332U);
    msg.setDestinationEntity(192U);
    msg.x = 0.195771236377;
    msg.y = 0.622932757196;
    msg.z = 0.648955437694;

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
    msg.setTimeStamp(0.140447086263);
    msg.setSource(12527U);
    msg.setSourceEntity(182U);
    msg.setDestination(64425U);
    msg.setDestinationEntity(232U);
    msg.x = 0.0663053808963;
    msg.y = 0.560228625534;
    msg.z = 0.435094907914;

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
    msg.setTimeStamp(0.425290583107);
    msg.setSource(56956U);
    msg.setSourceEntity(41U);
    msg.setDestination(54223U);
    msg.setDestinationEntity(173U);
    msg.timeout = 45952U;
    msg.lat = 0.704184783757;
    msg.lon = 0.0207741039175;
    msg.z = 0.0045875060126;
    msg.z_units = 11U;
    msg.amplitude = 0.520400517396;
    msg.pitch = 0.14592969222;
    msg.speed = 0.139765307421;
    msg.speed_units = 17U;
    msg.custom.assign("NLRHYVLOHJPEGXCHEURPVWJEZHZORSMKSENOMFSYARRASAVKODAFTBTQNMMTGXKLSQRVWMYZZDHUIPYFYDHMAFPXJQKUFVQPEBVWICNDTBQKLBJCQZZXJVAXQCSTANRUDXSYNJSGUNWBYYJGUYRNWTGMSDCTWVHAWECUFTEGRMGUMIHOXOWLEOXLFHKXJGVPZIWIHNUZOYOIGCPJQ");

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
    msg.setTimeStamp(0.696370112641);
    msg.setSource(6295U);
    msg.setSourceEntity(130U);
    msg.setDestination(11526U);
    msg.setDestinationEntity(132U);
    msg.timeout = 43781U;
    msg.lat = 0.250135947443;
    msg.lon = 0.844837845413;
    msg.z = 0.140215458346;
    msg.z_units = 138U;
    msg.amplitude = 0.991620718031;
    msg.pitch = 0.651787690801;
    msg.speed = 0.288916327006;
    msg.speed_units = 90U;
    msg.custom.assign("JOZMREXWYLGISFUIEYTMLIKHDUTJN");

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
    msg.setTimeStamp(0.697611993244);
    msg.setSource(1177U);
    msg.setSourceEntity(100U);
    msg.setDestination(62202U);
    msg.setDestinationEntity(133U);
    msg.timeout = 61282U;
    msg.lat = 0.622208723479;
    msg.lon = 0.694055561614;
    msg.z = 0.383059096298;
    msg.z_units = 124U;
    msg.amplitude = 0.739008658561;
    msg.pitch = 0.316991955464;
    msg.speed = 0.806155044502;
    msg.speed_units = 38U;
    msg.custom.assign("VXFYXDHSLIEHVYQNZXRJREJGHCERJKHUDSDDYPZEPRGFIZKQGYNUVOCUYLTGYFOSFTUCRMYIUJKZOKEGEBFRXGPVAZSMAWHBOXQPLDNKIIUCAIRIBBLNXYITDKKIAMLWUETQSPGWFVSMOMEFBYMAACUDGCWLNTTPZXRTTW");

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
    msg.setTimeStamp(0.775713605753);
    msg.setSource(19979U);
    msg.setSourceEntity(41U);
    msg.setDestination(43966U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.27860407583);
    msg.setSource(36973U);
    msg.setSourceEntity(191U);
    msg.setDestination(50184U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.46388635502);
    msg.setSource(43668U);
    msg.setSourceEntity(42U);
    msg.setDestination(18741U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.820692972685);
    msg.setSource(26996U);
    msg.setSourceEntity(165U);
    msg.setDestination(59708U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.110265137017;
    msg.lon = 0.594953517428;
    msg.z = 0.490901141976;
    msg.z_units = 58U;
    msg.radius = 0.560862053963;
    msg.duration = 22687U;
    msg.speed = 0.359126756238;
    msg.speed_units = 78U;
    msg.custom.assign("COVBFYGHHLSFTVCMJZLFVOUCOSVFNVPDRSSNHZGJWQGQRINZTPPEUMAJKJTLAEZEFRKNFRLIXAKAJTVSRDFOEBNWXGU");

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
    msg.setTimeStamp(0.51927418481);
    msg.setSource(37554U);
    msg.setSourceEntity(170U);
    msg.setDestination(59848U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.632639570872;
    msg.lon = 0.137974928519;
    msg.z = 0.995955836461;
    msg.z_units = 78U;
    msg.radius = 0.306050774674;
    msg.duration = 14029U;
    msg.speed = 0.679504751979;
    msg.speed_units = 251U;
    msg.custom.assign("MFDWRGHYIXX");

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
    msg.setTimeStamp(0.241611560972);
    msg.setSource(43019U);
    msg.setSourceEntity(21U);
    msg.setDestination(33839U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.71519623109;
    msg.lon = 0.976047394345;
    msg.z = 0.141074423981;
    msg.z_units = 29U;
    msg.radius = 0.621302622607;
    msg.duration = 15214U;
    msg.speed = 0.114400548435;
    msg.speed_units = 121U;
    msg.custom.assign("HVUHDRFBKBCHTFTZIHMHSHJPQILNLFOYOTDDXBKRSBIMCLJGLDIYHQBFCJIMXWTXCXJUNTUOJWAAOUCIGQYZDCNIAWKAJUEIFQBZEBUCKMWPZYRGNQTZJKYXDFAGRSFGLEZXEOZHCUFSRWRPDN");

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
    msg.setTimeStamp(0.458643544975);
    msg.setSource(54613U);
    msg.setSourceEntity(59U);
    msg.setDestination(40206U);
    msg.setDestinationEntity(161U);
    msg.timeout = 45714U;
    msg.flags = 62U;
    msg.lat = 0.474436564996;
    msg.lon = 0.344593524638;
    msg.start_z = 0.809572299519;
    msg.start_z_units = 17U;
    msg.end_z = 0.436444271905;
    msg.end_z_units = 163U;
    msg.radius = 0.527983455982;
    msg.speed = 0.0335664428522;
    msg.speed_units = 117U;
    msg.custom.assign("FHRSURCIVYQDIMVQRKLGCXABXGZIYJOKLOLGVCWWDKWZEEXRJPUKKSVLMDWIDXPCCEBOQBPPNUOJLMXBJUJVTOSAZTIWDLHDHLBEFXCAXOZYTATMVZFBYFUYADRSMPUQRXMRQQMGKGYNFSAOWIQVTJKUQUYBFVVNHQIIOBJYSGOZZS");

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
    msg.setTimeStamp(0.760834919152);
    msg.setSource(37552U);
    msg.setSourceEntity(146U);
    msg.setDestination(30460U);
    msg.setDestinationEntity(33U);
    msg.timeout = 60557U;
    msg.flags = 128U;
    msg.lat = 0.560183784316;
    msg.lon = 0.645577471373;
    msg.start_z = 0.220643982857;
    msg.start_z_units = 114U;
    msg.end_z = 0.650238381329;
    msg.end_z_units = 228U;
    msg.radius = 0.925348842225;
    msg.speed = 0.075767409757;
    msg.speed_units = 181U;
    msg.custom.assign("VRBFNQDFMLTEQAZBWWFWXDAOFYSGYPOZDTROEMASZWNXLOCMUWTCFGAJZLSPZPCCJKKENSNEDIZYWERVSXINFKJADLGMAPSJDPLXHEGUTXUVRYITCLHSHRBFPGLZXHDTOAQDEASZNBKVGBAPEBMVBHZEWYJQCRIYFKJLBQQ");

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
    msg.setTimeStamp(0.0146890901515);
    msg.setSource(1671U);
    msg.setSourceEntity(96U);
    msg.setDestination(33913U);
    msg.setDestinationEntity(34U);
    msg.timeout = 47155U;
    msg.flags = 170U;
    msg.lat = 0.814958756174;
    msg.lon = 0.996936846092;
    msg.start_z = 0.904409037569;
    msg.start_z_units = 27U;
    msg.end_z = 0.316243649;
    msg.end_z_units = 178U;
    msg.radius = 0.0552143923749;
    msg.speed = 0.949402583383;
    msg.speed_units = 61U;
    msg.custom.assign("EEMKMJHILDLAWQYKOCLLRGUXYAFVBROHTCISVHMZNMJZIZLKBXHYLBWTVDWBCOBKZBIQUPEFXOPXFCJQGULBNTGQUBSHZDWPJTPNTDKSWMVYXXXGRVZULRCJEYEWMPFWAFFJSMDQNBN");

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
    msg.setTimeStamp(0.286034527274);
    msg.setSource(926U);
    msg.setSourceEntity(104U);
    msg.setDestination(22205U);
    msg.setDestinationEntity(195U);
    msg.timeout = 46098U;
    msg.lat = 0.257611152138;
    msg.lon = 0.628560332236;
    msg.z = 0.0590834634738;
    msg.z_units = 21U;
    msg.speed = 0.257548113032;
    msg.speed_units = 97U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.555549470647;
    tmp_msg_0.y = 0.462826316413;
    tmp_msg_0.z = 0.0539658598736;
    tmp_msg_0.t = 0.208969820622;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KAJZONFPPRLRZCHTHQYXXDVPRKKPTKHADAAVFQHWNOPFLRABNTZBIGHFLMBUQXFJJSKCSNFKWGTXWLUJEMJEWWPLTHVNMQVTU");

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
    msg.setTimeStamp(0.758568056298);
    msg.setSource(44479U);
    msg.setSourceEntity(5U);
    msg.setDestination(49215U);
    msg.setDestinationEntity(251U);
    msg.timeout = 51844U;
    msg.lat = 0.161444511202;
    msg.lon = 0.778222547927;
    msg.z = 0.793520103394;
    msg.z_units = 104U;
    msg.speed = 0.26349226772;
    msg.speed_units = 150U;
    msg.custom.assign("RIDYEOTHZKEBULSFVTWHKQGXTJXTCVJJOSPJLNSDMLHPOQSIKYAOYJVLSDBFDAPLUTETZJCGNEMVNCBZXIFULJVORNJQNQMLJQMXWEZKSKLXRVOGZMKOHIXPJWCVHEMONOESPFPLYDXFWWVFBNDGVUGGTWULZCSMPUUAFQCBXIAMBFWXNCKIRHYQQGBNSYTIEEGRYWOYITCFPFX");

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
    msg.setTimeStamp(0.906618773661);
    msg.setSource(18680U);
    msg.setSourceEntity(32U);
    msg.setDestination(25981U);
    msg.setDestinationEntity(28U);
    msg.timeout = 52070U;
    msg.lat = 0.11944303384;
    msg.lon = 0.976043560374;
    msg.z = 0.897051681218;
    msg.z_units = 236U;
    msg.speed = 0.293877679219;
    msg.speed_units = 47U;
    msg.custom.assign("AHAZDUILYWRYOSREVUQPFENUUNMTBSVRYVFBLXGJLFSBZUTSPOBXHNGXPGIHEPHNDDORUYVXIXAVEEFACKIJXLCQOVMBQOQAOFJDTKXYHCSXYJLKDFHLGZAUGPDTNCOPTNTBWNPKXTQIOYWLYRMICICJFZHBZNYSUTEXDJKWGIDWHRE");

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
    msg.setTimeStamp(0.243910748689);
    msg.setSource(57139U);
    msg.setSourceEntity(102U);
    msg.setDestination(44216U);
    msg.setDestinationEntity(116U);
    msg.x = 0.19552292326;
    msg.y = 0.697592276615;
    msg.z = 0.80597777596;
    msg.t = 0.726835895237;

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
    msg.setTimeStamp(0.1893043604);
    msg.setSource(23459U);
    msg.setSourceEntity(247U);
    msg.setDestination(51003U);
    msg.setDestinationEntity(111U);
    msg.x = 0.52741662189;
    msg.y = 0.705632513573;
    msg.z = 0.176944522433;
    msg.t = 0.256831964608;

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
    msg.setTimeStamp(0.924394621358);
    msg.setSource(44763U);
    msg.setSourceEntity(214U);
    msg.setDestination(34668U);
    msg.setDestinationEntity(52U);
    msg.x = 0.220746329404;
    msg.y = 0.355420315168;
    msg.z = 0.870052838065;
    msg.t = 0.480716237143;

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
    msg.setTimeStamp(0.504676659081);
    msg.setSource(19545U);
    msg.setSourceEntity(62U);
    msg.setDestination(11509U);
    msg.setDestinationEntity(189U);
    msg.timeout = 7677U;
    msg.name.assign("CHDPZKTRNZCMUQFLHUDSWLJXIDKFWYLCUYZQYEXGXVOEPXGMWFFSVZDRCOYPQVBLVAZOOSGHLUXDTHIKTNVICRYGCNGEYTXNNOSOFGMVCMWZHISUXRWAQXPMUWP");
    msg.custom.assign("OFFVMLUHRZEVTOBCBJJSYCULUOATCJGSDPIABYAAENFNKKLGMZQDAHTBDXIQLUTWAKSDFELRUAHJCWCFXNZBXNOXQXQHSUUMTHRCRVIMMBGVZJRIKRNSDVVSBXYPKNBYGHKEGWDHYZPWQOWNALIEMRFV");

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
    msg.setTimeStamp(0.129991775737);
    msg.setSource(3912U);
    msg.setSourceEntity(79U);
    msg.setDestination(46861U);
    msg.setDestinationEntity(220U);
    msg.timeout = 29967U;
    msg.name.assign("TFGOEDDWRQODGBVQCUJIXMBJSMOOHUNWPSKCUEZWHCPTLETVUGWTKJBVUVKDIZYIQZYFHHBQZVTXBRBAFOQTXXSHXSMAEFRPIHRTDOCRMDRULAEZSIJZALMVRCYYCNVXYLXFOHJGLFKJGLGURMNKWNFGDZBEAHJROMKQFJDIUAGNCBSHKNJAHUPSLTQNMOQKVCEYPXWYEZKEIZXQTQNOCASP");
    msg.custom.assign("WJUUOQHBLQKOAMYWKNTRIYXLAPHENOBAFMECJIQOAZRYMKBHURSVFBIXDZKHUJYGPQKJEUQHDVRJUXRUPJRAFXETLZFOOOSBDLVCKGSGMLPPPRZBVVWTYGBFOOCPHNISBKMTSXPIYAATMMEXDLNAZQQNUDYFVDSNWWYYGKQNLQIABHDJUOWTXFCSNJWPTBKTCXZUEDGZECGHFWERXTCSHGCWNVLMMTIXPCHJVDVEQRSI");

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
    msg.setTimeStamp(0.944055053349);
    msg.setSource(29850U);
    msg.setSourceEntity(91U);
    msg.setDestination(46465U);
    msg.setDestinationEntity(77U);
    msg.timeout = 1029U;
    msg.name.assign("NPAZBVDXDPUCKBLYJBVOWNIEFXRGRAJZTXMQKUSQQWMCUIBMXMADIYHEHTUWSFECRSTPBNZUQQPKPIDHDZ");
    msg.custom.assign("XZXSLQVQGAMVRBGWBUHYTKDFVSMGATCHTZUMZBXLVXVRMKQFBPORENVWZDRBNEFPBQDWWZORKIRPHWOWWJTAVEYYSFIOJTTRDKXLDENIPWBPHSPJVQBUTREIAMKVYUGGYLPLQCDYFVJUYSZCHZAMAOHKTFJWXGUOBCIAXNJYZISIJAZXOGJLRNAGPGTCNSEWEFUCMOXEDFPS");

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
    msg.setTimeStamp(0.673734214577);
    msg.setSource(16163U);
    msg.setSourceEntity(253U);
    msg.setDestination(56646U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.221355623493;
    msg.lon = 0.33817877751;
    msg.z = 0.462316954713;
    msg.z_units = 23U;
    msg.speed = 0.584965644987;
    msg.speed_units = 175U;
    msg.start_time = 0.979102026482;
    msg.custom.assign("DULFBYCGGSBCLTJOXYKXGBWESFAOWUTRMETEDAPQKKFSKGSMENIYIPTKAIAXSKBZAXXQVPXAYJFVOBVNPMCLZAZCREHVHROIYJMQTNDSCWXCRPDZOADFWVVPRLMRNJNYRZIZJIUUJLGXHCNLTZTRMBQJRUFCOPEKZKFTFXSQZTQISEGOVUSMPWNOUUVLTQHOJIHKAMLCSWNXWDEGBEGYZGMOJCMEPLNVFDPJVDBIWUHDHBKYBHUWARYNG");

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
    msg.setTimeStamp(0.377832192471);
    msg.setSource(46177U);
    msg.setSourceEntity(52U);
    msg.setDestination(38290U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.0580249322211;
    msg.lon = 0.616070372436;
    msg.z = 0.872418536908;
    msg.z_units = 138U;
    msg.speed = 0.25670780273;
    msg.speed_units = 28U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.392029957118;
    tmp_msg_0.y = 0.122280153808;
    tmp_msg_0.z = 0.60628233113;
    tmp_msg_0.t = 0.734362009105;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 55454U;
    tmp_msg_1.off_x = 0.985606537919;
    tmp_msg_1.off_y = 0.600966336307;
    tmp_msg_1.off_z = 0.198996353258;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.837962990205;
    msg.custom.assign("DBPXXTFPYGFWSRYBXSQGSAROTVBDWPGRCSVPPYKQXFUEKCVGMRCIABEYERZLVXCGYQFOBPGJOANVSWRTJJEIFLEUXIZNZUFDMVWKISQQHDNLTGMHELCBNBABG");

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
    msg.setTimeStamp(0.732994485515);
    msg.setSource(30684U);
    msg.setSourceEntity(50U);
    msg.setDestination(33928U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.220247152145;
    msg.lon = 0.680642812915;
    msg.z = 0.903828784713;
    msg.z_units = 83U;
    msg.speed = 0.980946297499;
    msg.speed_units = 181U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.643572591183;
    tmp_msg_0.y = 0.0955723377062;
    tmp_msg_0.z = 0.552541360911;
    tmp_msg_0.t = 0.0250636958317;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 16368U;
    tmp_msg_1.off_x = 0.129737320717;
    tmp_msg_1.off_y = 0.193202669095;
    tmp_msg_1.off_z = 0.302730537875;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.968809242262;
    msg.custom.assign("TVRWQAIAOISUQUKYXMAELAMPVDYDHGYMLHJIQTNNWPBKVQVEGDEREWYYTRBHAZYUKIFOXXYLTWUBDQCJFEYOYTZRRJDTUCLLUFFJLJFOAHHPNUGA");

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
    msg.setTimeStamp(0.099480553974);
    msg.setSource(43478U);
    msg.setSourceEntity(74U);
    msg.setDestination(46210U);
    msg.setDestinationEntity(229U);
    msg.vid = 48194U;
    msg.off_x = 0.466574922194;
    msg.off_y = 0.867502474569;
    msg.off_z = 0.981621253122;

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
    msg.setTimeStamp(0.620879617709);
    msg.setSource(58853U);
    msg.setSourceEntity(20U);
    msg.setDestination(46858U);
    msg.setDestinationEntity(208U);
    msg.vid = 60338U;
    msg.off_x = 0.926891465948;
    msg.off_y = 0.133639211491;
    msg.off_z = 0.0907176764318;

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
    msg.setTimeStamp(0.82157623924);
    msg.setSource(52468U);
    msg.setSourceEntity(47U);
    msg.setDestination(38930U);
    msg.setDestinationEntity(40U);
    msg.vid = 989U;
    msg.off_x = 0.251613438498;
    msg.off_y = 0.762553023045;
    msg.off_z = 0.918918075894;

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
    msg.setTimeStamp(0.966299114817);
    msg.setSource(41288U);
    msg.setSourceEntity(9U);
    msg.setDestination(11116U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.476293948945);
    msg.setSource(61350U);
    msg.setSourceEntity(154U);
    msg.setDestination(64268U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.75361262981);
    msg.setSource(1749U);
    msg.setSourceEntity(184U);
    msg.setDestination(14661U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.621921035855);
    msg.setSource(52134U);
    msg.setSourceEntity(139U);
    msg.setDestination(26670U);
    msg.setDestinationEntity(67U);
    msg.mid = 47170U;

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
    msg.setTimeStamp(0.316949850191);
    msg.setSource(44199U);
    msg.setSourceEntity(230U);
    msg.setDestination(34331U);
    msg.setDestinationEntity(29U);
    msg.mid = 40458U;

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
    msg.setTimeStamp(0.81356665132);
    msg.setSource(25172U);
    msg.setSourceEntity(177U);
    msg.setDestination(62611U);
    msg.setDestinationEntity(76U);
    msg.mid = 50566U;

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
    msg.setTimeStamp(0.380872910481);
    msg.setSource(25025U);
    msg.setSourceEntity(97U);
    msg.setDestination(34041U);
    msg.setDestinationEntity(33U);
    msg.state = 234U;
    msg.eta = 26006U;
    msg.info.assign("CBGOGCVCENYPMIWGIZYMWDHNUHXEWUJPKUWZMNEKJVEJTYNLYPJALBEOZXCZMGGMDHSLRXFCXBVSWNREFXDRYGTRSAAIIKHSGGSLAQJODSOZUQLWCQNXLSCULFJIASFNBOFEPDENVTRCPFXPHZWOHKAFVIHTEVKQHRCOYMPVMKTIJATDNOQOZDJO");

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
    msg.setTimeStamp(0.658614151463);
    msg.setSource(64360U);
    msg.setSourceEntity(152U);
    msg.setDestination(43684U);
    msg.setDestinationEntity(116U);
    msg.state = 231U;
    msg.eta = 13133U;
    msg.info.assign("RPVRFJABUKNGXHJXLXUPFHEMREBLTWBICZBNECYOEMVQNRSSGUQATRRJGWLRVISZWTMCATWQVJBJDIOOLSPCQYJYVPLHFKQVNULHWFHYZTMEUXVYTWOAKXAMKHEGCTZXDRIRNXMGFIRGZGNGCVSPYOHDXJNDFNDWZJLB");

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
    msg.setTimeStamp(0.618333816262);
    msg.setSource(49359U);
    msg.setSourceEntity(44U);
    msg.setDestination(3990U);
    msg.setDestinationEntity(137U);
    msg.state = 131U;
    msg.eta = 7879U;
    msg.info.assign("XYFQMXZHRTUDBVPNVMBTVBYVSOLUHWRBIMZWAXQWMFFUOJVLKIQROHPKBXDXKMBUTIOVQHSUKWYSGABOKDCNQCACKKYROOTHFJWPZJFYSXERIWFACQNEHDTVGJHKEJMDEXYSNNNTAJDPRFFGAUWNZYGQLEOSSYTWQN");

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
    msg.setTimeStamp(0.162745987837);
    msg.setSource(11972U);
    msg.setSourceEntity(216U);
    msg.setDestination(44421U);
    msg.setDestinationEntity(62U);
    msg.system = 39711U;
    msg.duration = 10974U;
    msg.speed = 0.247992965616;
    msg.speed_units = 211U;
    msg.x = 0.252976648677;
    msg.y = 0.337112361537;
    msg.z = 0.603860006823;
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
    msg.setTimeStamp(0.395773932315);
    msg.setSource(64585U);
    msg.setSourceEntity(128U);
    msg.setDestination(38134U);
    msg.setDestinationEntity(167U);
    msg.system = 9089U;
    msg.duration = 24872U;
    msg.speed = 0.214610782083;
    msg.speed_units = 23U;
    msg.x = 0.334038706211;
    msg.y = 0.596606245062;
    msg.z = 0.023012950842;
    msg.z_units = 184U;

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
    msg.setTimeStamp(0.113601689731);
    msg.setSource(45333U);
    msg.setSourceEntity(4U);
    msg.setDestination(53124U);
    msg.setDestinationEntity(39U);
    msg.system = 5875U;
    msg.duration = 64236U;
    msg.speed = 0.713846330453;
    msg.speed_units = 179U;
    msg.x = 0.353889093502;
    msg.y = 0.971410730225;
    msg.z = 0.61003069505;
    msg.z_units = 162U;

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
    msg.setTimeStamp(0.867961180483);
    msg.setSource(19047U);
    msg.setSourceEntity(186U);
    msg.setDestination(21U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.462802120981;
    msg.lon = 0.0600602433471;
    msg.speed = 0.303896790239;
    msg.speed_units = 219U;
    msg.duration = 26679U;
    msg.sys_a = 63564U;
    msg.sys_b = 44205U;
    msg.move_threshold = 0.691360205181;

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
    msg.setTimeStamp(0.633903993198);
    msg.setSource(11881U);
    msg.setSourceEntity(251U);
    msg.setDestination(41320U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.385924283355;
    msg.lon = 0.54741856037;
    msg.speed = 0.298411227673;
    msg.speed_units = 213U;
    msg.duration = 37202U;
    msg.sys_a = 20972U;
    msg.sys_b = 54206U;
    msg.move_threshold = 0.971059041929;

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
    msg.setTimeStamp(0.415310852891);
    msg.setSource(2725U);
    msg.setSourceEntity(13U);
    msg.setDestination(51974U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.761847230255;
    msg.lon = 0.974532472535;
    msg.speed = 0.19985801708;
    msg.speed_units = 117U;
    msg.duration = 26155U;
    msg.sys_a = 25629U;
    msg.sys_b = 12719U;
    msg.move_threshold = 0.678853182204;

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
    msg.setTimeStamp(0.55664824776);
    msg.setSource(8883U);
    msg.setSourceEntity(64U);
    msg.setDestination(46579U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.253570049492;
    msg.lon = 0.100606192955;
    msg.z = 0.24853282753;
    msg.z_units = 101U;
    msg.speed = 0.0470758071932;
    msg.speed_units = 53U;
    msg.custom.assign("JTSCVERHNWALFERCBTXNQKUUAHHHWL");

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
    msg.setTimeStamp(0.617827639979);
    msg.setSource(44605U);
    msg.setSourceEntity(245U);
    msg.setDestination(30176U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.725025431392;
    msg.lon = 0.484370429915;
    msg.z = 0.711985344767;
    msg.z_units = 111U;
    msg.speed = 0.383407497815;
    msg.speed_units = 203U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.374382644588;
    tmp_msg_0.lon = 0.350823095827;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YFAZEUYVIEGMLJUWFKPFTXMUCCNPJEBFNENGEOITODYCSRPKHACYCFJHNXQFPXKBESLUAVAUMIQNZOLWVRBLCLWTXJSLPDJGRWEMMHIMVFDE");

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
    msg.setTimeStamp(0.424703714073);
    msg.setSource(3251U);
    msg.setSourceEntity(135U);
    msg.setDestination(33945U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.637893939567;
    msg.lon = 0.194828317242;
    msg.z = 0.892803099897;
    msg.z_units = 31U;
    msg.speed = 0.19168457744;
    msg.speed_units = 79U;
    msg.custom.assign("UUANNIPDHBNOTIJNHSLWZQVMQRYRHOABMBPCXTTFWWFIBJJFAYCRDSFIVDERPTNJQJHEKWYYCXZIEPKXDBLJJMWHAOISHYJWTIRVTKZFTDYYOQMLWMVGKGNOLGKXPAAPZZBKPLPVZ");

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
    msg.setTimeStamp(0.424732731015);
    msg.setSource(19743U);
    msg.setSourceEntity(168U);
    msg.setDestination(49300U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.388902963557;
    msg.lon = 0.445407281848;

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
    msg.setTimeStamp(0.885167958373);
    msg.setSource(10080U);
    msg.setSourceEntity(5U);
    msg.setDestination(24405U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.00261638077936;
    msg.lon = 0.796760748718;

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
    msg.setTimeStamp(0.557376159643);
    msg.setSource(53534U);
    msg.setSourceEntity(199U);
    msg.setDestination(46135U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.0090190445635;
    msg.lon = 0.81331907421;

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
    msg.setTimeStamp(0.538297397822);
    msg.setSource(62398U);
    msg.setSourceEntity(245U);
    msg.setDestination(33077U);
    msg.setDestinationEntity(215U);
    msg.timeout = 54478U;
    msg.lat = 0.756679997559;
    msg.lon = 0.74295403109;
    msg.z = 0.546291954602;
    msg.z_units = 25U;
    msg.pitch = 0.934965264799;
    msg.amplitude = 0.269982903407;
    msg.duration = 57792U;
    msg.speed = 0.254475859507;
    msg.speed_units = 138U;
    msg.radius = 0.325419344915;
    msg.direction = 114U;
    msg.custom.assign("OKCMMHRAYNPHHJQHUGEBNLFLFNSAIKKGREDLNZVKN");

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
    msg.setTimeStamp(0.478941542108);
    msg.setSource(8432U);
    msg.setSourceEntity(26U);
    msg.setDestination(46836U);
    msg.setDestinationEntity(144U);
    msg.timeout = 26713U;
    msg.lat = 0.757595101344;
    msg.lon = 0.924232352598;
    msg.z = 0.153047253108;
    msg.z_units = 151U;
    msg.pitch = 0.860930018595;
    msg.amplitude = 0.573596012754;
    msg.duration = 7194U;
    msg.speed = 0.749809100731;
    msg.speed_units = 139U;
    msg.radius = 0.0889848393601;
    msg.direction = 29U;
    msg.custom.assign("PHMGTXNVAMZLMZVVCUJNSUAVQOVUYZOJLNYEJJPHZRFRSGRNDE");

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
    msg.setTimeStamp(0.647317710004);
    msg.setSource(34350U);
    msg.setSourceEntity(145U);
    msg.setDestination(35142U);
    msg.setDestinationEntity(122U);
    msg.timeout = 11050U;
    msg.lat = 0.944505751703;
    msg.lon = 0.458329821865;
    msg.z = 0.361327664589;
    msg.z_units = 14U;
    msg.pitch = 0.528161023518;
    msg.amplitude = 0.604147589356;
    msg.duration = 2107U;
    msg.speed = 0.44668199648;
    msg.speed_units = 172U;
    msg.radius = 0.45074827993;
    msg.direction = 115U;
    msg.custom.assign("QRUXYTENFPSCWOYOOPLINZKGIFNWXQREORCGUOODUNJKIVXTUSHWRGDPAUDXHREDFOHKYTDGJJJSXKFQZYPFJHIAJCQTQMNUUTZBKUNFVRNTEIELDJSLTGSXJRXHWWSJIMZPHCVWVZDASQV");

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
    msg.setTimeStamp(0.417600853393);
    msg.setSource(35837U);
    msg.setSourceEntity(6U);
    msg.setDestination(51926U);
    msg.setDestinationEntity(61U);
    msg.control_src = 15975U;
    msg.control_ent = 29U;
    msg.timeout = 0.653347010574;
    msg.loiter_radius = 0.469793829542;
    msg.altitude_interval = 0.907729864424;

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
    msg.setTimeStamp(0.983351699783);
    msg.setSource(13337U);
    msg.setSourceEntity(77U);
    msg.setDestination(5244U);
    msg.setDestinationEntity(14U);
    msg.control_src = 28922U;
    msg.control_ent = 149U;
    msg.timeout = 0.541641082119;
    msg.loiter_radius = 0.181990185729;
    msg.altitude_interval = 0.908949461104;

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
    msg.setTimeStamp(0.182004062);
    msg.setSource(12071U);
    msg.setSourceEntity(21U);
    msg.setDestination(42822U);
    msg.setDestinationEntity(201U);
    msg.control_src = 26339U;
    msg.control_ent = 60U;
    msg.timeout = 0.3094767858;
    msg.loiter_radius = 0.737689600263;
    msg.altitude_interval = 0.891611258897;

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
    msg.setTimeStamp(0.847232679479);
    msg.setSource(39437U);
    msg.setSourceEntity(85U);
    msg.setDestination(13241U);
    msg.setDestinationEntity(112U);
    msg.flags = 135U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.600709777273;
    tmp_msg_0.speed_units = 10U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.387878951072;
    tmp_msg_1.z_units = 89U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0946461509666;
    msg.lon = 0.652463130838;
    msg.radius = 0.538569493597;

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
    msg.setTimeStamp(0.978340887795);
    msg.setSource(19130U);
    msg.setSourceEntity(91U);
    msg.setDestination(14563U);
    msg.setDestinationEntity(238U);
    msg.flags = 211U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0370971644886;
    tmp_msg_0.speed_units = 92U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.532821784262;
    tmp_msg_1.z_units = 203U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.136311784956;
    msg.lon = 0.109151389672;
    msg.radius = 0.336845069679;

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
    msg.setTimeStamp(0.922055762033);
    msg.setSource(61691U);
    msg.setSourceEntity(26U);
    msg.setDestination(4493U);
    msg.setDestinationEntity(18U);
    msg.flags = 161U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.725587331228;
    tmp_msg_0.speed_units = 219U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.315338002494;
    tmp_msg_1.z_units = 187U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.492777765019;
    msg.lon = 0.29743362111;
    msg.radius = 0.286315944112;

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
    msg.setTimeStamp(0.279958360658);
    msg.setSource(50745U);
    msg.setSourceEntity(206U);
    msg.setDestination(5334U);
    msg.setDestinationEntity(172U);
    msg.control_src = 13837U;
    msg.control_ent = 224U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 155U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.294899366832;
    tmp_tmp_msg_0_0.speed_units = 90U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.455065262716;
    tmp_tmp_msg_0_1.z_units = 23U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.750509104811;
    tmp_msg_0.lon = 0.815167344889;
    tmp_msg_0.radius = 0.23928391751;
    msg.reference.set(tmp_msg_0);
    msg.state = 11U;
    msg.proximity = 218U;

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
    msg.setTimeStamp(0.82542036292);
    msg.setSource(57452U);
    msg.setSourceEntity(117U);
    msg.setDestination(36675U);
    msg.setDestinationEntity(112U);
    msg.control_src = 63773U;
    msg.control_ent = 73U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 103U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.214428361823;
    tmp_tmp_msg_0_0.speed_units = 147U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.384684778387;
    tmp_tmp_msg_0_1.z_units = 79U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.201665218459;
    tmp_msg_0.lon = 0.241038141472;
    tmp_msg_0.radius = 0.673030096236;
    msg.reference.set(tmp_msg_0);
    msg.state = 58U;
    msg.proximity = 101U;

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
    msg.setTimeStamp(0.2069022067);
    msg.setSource(2877U);
    msg.setSourceEntity(99U);
    msg.setDestination(15139U);
    msg.setDestinationEntity(215U);
    msg.control_src = 39510U;
    msg.control_ent = 207U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 12U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.225428666035;
    tmp_tmp_msg_0_0.speed_units = 166U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.881927734202;
    tmp_tmp_msg_0_1.z_units = 219U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.774305311566;
    tmp_msg_0.lon = 0.964231792579;
    tmp_msg_0.radius = 0.828457702908;
    msg.reference.set(tmp_msg_0);
    msg.state = 68U;
    msg.proximity = 172U;

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
    msg.setTimeStamp(0.465930415442);
    msg.setSource(47165U);
    msg.setSourceEntity(238U);
    msg.setDestination(37986U);
    msg.setDestinationEntity(39U);
    msg.op_mode = 130U;
    msg.error_count = 167U;
    msg.error_ents.assign("EGGNNCODRERHZFBLTIDTVJZSPJUPOQZIHQFNWYWKWAZVOJNFKMBHMQMYUFGPAOCRMHISRUEZIVICXNBQDABPDSGLHWUNDGGLYUKALLKALUSCYRVNEXDIJJWTQXAXNSTSYMILOPCECBPIUUUQWTGIWEMRMOVPTDAMBJRYFEJDFGOJBWDQHEZKAFJOQYCHKTFCKSAATEU");
    msg.maneuver_type = 15929U;
    msg.maneuver_stime = 0.579131647572;
    msg.maneuver_eta = 20805U;
    msg.control_loops = 3644660891U;
    msg.flags = 1U;
    msg.last_error.assign("ASNYVJIVJWUVRHWGXOYYGJPWHJXEMIEVNMDTFNHBWQOPFOODRBAANCUOEFPPYBRZSZEFGJQYOEJSCNQPMMTLVQJFVFQXUZDLJZULTTVAUXDORTGKBGCKSPZLLXASVLBZGFONJKBXYHKWYAEUKUKCXABWJCXNPGZICHZEOIDARCQHRHZECZOIPRNULIVYDFKTX");
    msg.last_error_time = 0.910964142732;

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
    msg.setTimeStamp(0.929035544092);
    msg.setSource(63837U);
    msg.setSourceEntity(11U);
    msg.setDestination(9670U);
    msg.setDestinationEntity(176U);
    msg.op_mode = 223U;
    msg.error_count = 183U;
    msg.error_ents.assign("CGEMWOPSFNYMSFATOGRJYRTSJAKUQOLDCKVMWQZJPKJVKUQBPWBHVZIMWZNPWGUMJPUAJXLWTKLBFAUOSNLBCETPOZDYECOAAIXZ");
    msg.maneuver_type = 48497U;
    msg.maneuver_stime = 0.714480803987;
    msg.maneuver_eta = 37878U;
    msg.control_loops = 2456161522U;
    msg.flags = 162U;
    msg.last_error.assign("ZDHUMEZOTRMPUIAUWYEWTBKXIBUQKCNIZKXKMEVHLHJCZYGAZADDYHEPTTVMPOUJSGXQJVUNFOSZPCEXDCSPKQRFAQEDLDUYTGLROXKJM");
    msg.last_error_time = 0.420357836192;

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
    msg.setTimeStamp(0.595697696731);
    msg.setSource(33137U);
    msg.setSourceEntity(32U);
    msg.setDestination(56576U);
    msg.setDestinationEntity(79U);
    msg.op_mode = 59U;
    msg.error_count = 226U;
    msg.error_ents.assign("JJPUDOFDVPJDVZLPEFDMHXGFTLEJQXHGPXCRTXMAXKZAJZMAZBQNQYOUHKVDQETKIRZRDODKUGOZBQOXYNLBWMNLOUZ");
    msg.maneuver_type = 23570U;
    msg.maneuver_stime = 0.0459872625887;
    msg.maneuver_eta = 41215U;
    msg.control_loops = 4026225446U;
    msg.flags = 150U;
    msg.last_error.assign("THPEQWZXLURNNRPKSWICEAQHGGOZJMHH");
    msg.last_error_time = 0.104241419565;

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
    msg.setTimeStamp(0.712703975037);
    msg.setSource(38293U);
    msg.setSourceEntity(63U);
    msg.setDestination(46720U);
    msg.setDestinationEntity(117U);
    msg.type = 28U;
    msg.request_id = 13669U;
    msg.command = 127U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("TZTNKBQPYEJHUEKDDCXAGOFEHLBAWPJUJNIGZIPAFKYGPSJMGUWLIOATZKAAVUYNETZILYSCZIWDLOESYRSXFWDURGXNQRMHLBIXEVSGVJKGOVQOCNBSMPIUVYMQNHMXRUXHCJFMHZENW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58443U;
    msg.info.assign("YTKYXIXXORYZSZOVDBICZQTMZDVOAVGQEWXEVAAPQBLJJGXQJAUKYISBSKIGNHFUNYFUDCWGHOHZJFOPPTSCRYFKWXNEBDKEMMVPGEDWQEVTQJRYFHPWODDTIMHDZCLBHNRGTKIBHCWKZPQRKFYIVEMASSJCOOUJNVALLFZBKPEKDWMWURZCULRMGXHIFIFLGGXXSWQSSJBUBTMRPAULIFODSCNQZALVEVNHMNEWNBMATCYAPTNGJRUPRTXJU");

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
    msg.setTimeStamp(0.833433688944);
    msg.setSource(47978U);
    msg.setSourceEntity(114U);
    msg.setDestination(37901U);
    msg.setDestinationEntity(225U);
    msg.type = 107U;
    msg.request_id = 26493U;
    msg.command = 149U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.770087247054;
    tmp_msg_0.lon = 0.767889098869;
    tmp_msg_0.z = 0.481710746204;
    tmp_msg_0.z_units = 86U;
    tmp_msg_0.speed = 0.428217496823;
    tmp_msg_0.speed_units = 115U;
    tmp_msg_0.custom.assign("AQTNKHVSPWRWMLAYWXGBPNIROWNAKBEKENFABKVYEGZGPVIQXHEUZUMNKRXQSEYCCKTTJYNUSWZZDSFWPVNICOCVUNUBFVFMAQEYUIYTRTOFMJDJYSCFOQYIVLGHBLGMHLFLTFOHBZIVKBZOXRJXEACBEJDASVYZLDPDTWGTPQAREKBXKASDOEDFWRYJGWLMQXRXOCSUJZCVHBXUAHLUQZGI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50593U;
    msg.info.assign("YXVLBZODDSVSHLKXHBJWGQPIOIUBDUQVTLBLRPWGVPQRZCWIXNBJGUWDSFYFNXJMNAUOYILLTMSOCJBJXJAHDIMTCQKRFYENIXXFZZBPJZEZGGRIKFDFPYEDEMHPPRUXMXMGXTDRNAVFYCDCZGOCGFCHNQENPYCHAURACDTMUFUWWEIAHVVOSOOTSPVSZTAWSMHNTQJVMKMGRQQGQJWL");

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
    msg.setTimeStamp(0.756638588636);
    msg.setSource(36639U);
    msg.setSourceEntity(208U);
    msg.setDestination(27858U);
    msg.setDestinationEntity(213U);
    msg.type = 235U;
    msg.request_id = 24164U;
    msg.command = 139U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 339U;
    tmp_msg_0.custom.assign("CWGZWYOSSNPBZUAIYKWFXMEFNYJCUWXMCVNYAOZHXICLIYXKZJCPXENLXVFTOQPIYHFAKFMGURMUHHQKGWGPLJTCJUTCBDVGLVNBJWBVNUHPTN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 39877U;
    msg.info.assign("AADLETYYUKNGXMNFCFKWCWJDHBFDYOONQOUEQFJLDHPEQGCZOWPNAXWMIXGZCNESDMGRWVSJTUIRPIBJYMRDHTHKVMSCGNPBPKUBSWPYLZRDZFYTOMMXTRWHVNUHSIEJLZZEGGOZTAMXHAAQIVVVUPUBHSCOCVQJ");

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
    msg.setTimeStamp(0.743810320017);
    msg.setSource(25111U);
    msg.setSourceEntity(153U);
    msg.setDestination(18160U);
    msg.setDestinationEntity(79U);
    msg.command = 171U;
    msg.entities.assign("DUCHLTZDAQORDSFOOIANSHHUTVBGRQDXIHQKCUKLOEGLMUHPBJFVSJZZBFLPGFPGNYCLWODZFTBNQVHVRHZWIWKNOSIWRNXUELJROWBVJTCUSSEMHZGNTOXHBQGAZISKHJMPCGRFXTUKZCRRKKWOPWVDYYVIUYZMMPGZJXLXPYEJQQFWAFOEFLDYANKVJDTXWICLBYCTJSLIVPUXNRNMNCDWKPAXPBVSEBGGYAAEQAKMIIYFESJA");

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
    msg.setTimeStamp(0.926189640608);
    msg.setSource(41496U);
    msg.setSourceEntity(13U);
    msg.setDestination(8394U);
    msg.setDestinationEntity(139U);
    msg.command = 95U;
    msg.entities.assign("MHZPTWFXUJCDIMQADGFYPUIPIVUEUKPSLXXGWUQKDFOKXOJQBECJGFWBBKFIVTUOQEGTCBVVHAOROZTLWJXCNDFBFYKOSBAGMJEEVKYLTWTNYWPCAYXDJUHDBMWCIVXAESKASQEZNCCXTZYRTASHSEJ");

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
    msg.setTimeStamp(0.903987616368);
    msg.setSource(12272U);
    msg.setSourceEntity(68U);
    msg.setDestination(29215U);
    msg.setDestinationEntity(114U);
    msg.command = 151U;
    msg.entities.assign("AONTKMVMBGMHPFXIUHZWFLJEPXFRLZELOSBYTVNDURWVXS");

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
    msg.setTimeStamp(0.664057253884);
    msg.setSource(36605U);
    msg.setSourceEntity(219U);
    msg.setDestination(14473U);
    msg.setDestinationEntity(215U);
    msg.mcount = 67U;
    msg.mnames.assign("SNOFBRHPFTCWPMH");
    msg.ecount = 34U;
    msg.enames.assign("YCALCZHIQJEKFIKDEOXRISREXAABYCKKFPUVSXJTEMFSVAVGHPEVMSOXMJOUUFWQZHUVZFQKMGZPOIXBGIINGJTQEWCKAYQLGQOUZJYTQSTYFBMZRXHZKMNGHOCDBRMNUHJCURBHBGYLWZDYAWLNTRMPDWUNPVQNGCPWMPJSBSAYLDZCTNLSLEKXHFVWVXYYEBOTVPLZIDRUDGDBWLDHTSKNPCEFAHRDIFOBJWIKSPJRARQXXOCG");
    msg.ccount = 142U;
    msg.cnames.assign("BMIZKRVDOAACWTVBNSKWEFLLEXSJFZ");
    msg.last_error.assign("LIPESHVMFGOIWORGFKMKVUAMQBCVVBSUKMLDZBSKKKXKJDDHTDDGYIPNTGLZDCLNTJWAYREQBUJCWHYOFNENHINRWVXUJSOJZZALACUUBZAWRFMRSAHNMFWGIFVTRXBZQQNITUJEZSJECGXOVVGVYKIQRFESTMBFQQXIOYWCRQLHILECFTNJ");
    msg.last_error_time = 0.995694464777;

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
    msg.setTimeStamp(0.37841947676);
    msg.setSource(32451U);
    msg.setSourceEntity(2U);
    msg.setDestination(47572U);
    msg.setDestinationEntity(182U);
    msg.mcount = 213U;
    msg.mnames.assign("QGUVMWQGZDOATKKSLUMEGJQUYWBSYBHBYDDRDPBHGTLTKVNSIHQOMYMYKCABTOXARGHISWEONSUDHVELGFVZVAFHMJTMZXEXKTNNXLLOQCVLJZNRFJWYARIJXSZPATYVOFAFGGCWHMVPLC");
    msg.ecount = 132U;
    msg.enames.assign("AKZNFOQSKOMUVOKUPOPWJPHYJMTSNKJAAUZNQYXYSGWXGOHRCHPQCBXLVLBMJTUPTMNYNHQQNOPMYAHLWXESATDTIYLPYIZTBPHWFEFRXIIXJAXWCFINRDBTIVCGDQEXGXZURSLBEIBMZCULBWBKMMEAESYYLCVESTZLZILRVSGAFRNBOUVTZRFBOOKWHFJJKGPEJVWCDVKFZDDAIQEQIZMYOGDNHGGXEQDJMFGCNRVPHSUHWSQKCD");
    msg.ccount = 152U;
    msg.cnames.assign("KPYOHFEMVGPXETZSNJFMEFVMVRL");
    msg.last_error.assign("SSCWZKNSTGSKGLJVGXYQRVVAUXPFMBDCRAFOPVFQXWKKBUPTOHDFJEWZVEYZYBGIFNMYJMCDFBMMEPLONOXRLHJQCSIKKJUMQTBVPCUBPUNVOHCDPMMKEFEAQFRREOEXLXRHLIAXCZIAUSSYQPHHAHBTTWKPAICLJXNQWJLGDXQIRWWPEZNIGGWSCJASFKONGBITUYTNTIHLNVTYOGUAQYJDJRWVIYMZVZ");
    msg.last_error_time = 0.870561101344;

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
    msg.setTimeStamp(0.406642388288);
    msg.setSource(55858U);
    msg.setSourceEntity(29U);
    msg.setDestination(33327U);
    msg.setDestinationEntity(92U);
    msg.mcount = 60U;
    msg.mnames.assign("CSEGTUZJZFNZVODXILNXIWZFHWTHLNABJXOHRWPIKMMTXVBRYWKBBPKNLVQGFADVNQMEOIDPENYZMRPAWHOAKOCXNJSOVXFERWUYQGCBSRUYGQKLTQWLSGAHAXYMJBZVYIKORTUBHEILUGYSQDRSTDCOQZBPJMDTZJFKVGJBNKHDPVFUIWHSYUZCIFNGVQXYICHFLAKGUBVWJEKSFZCMWOSXHXTPGEASPUE");
    msg.ecount = 254U;
    msg.enames.assign("JQDZEPMCVZNNIKUYMQMQQZGVVLMZTRCTJYGYVYFQKZTFUEOZWUQDLYWWVFGT");
    msg.ccount = 123U;
    msg.cnames.assign("ZQDDVYOKETYKWMSVRVUQXLUTNXKXFZKYCBCBMJNLPOAZATCXBQOJJYJWZRIPKUOKANTHKUGKSEZBKEZFDZSLBFSNFGJRRMOSPTYEFXIKCANQHPWUWGNMRIBCDYVLHMQMECOXUWXEJJQVLYSTFMUTNIGWHHACWQMJILQDQCDWNILOSWHFUXOARIGLBRPCYBTAHSICXSNTDAUFVHBVPZZJBGLERJWOIXMGNPTV");
    msg.last_error.assign("SLTCYPJOKCNEWRDDKUHSWUCGCGLLQEAXNEJNHUOQQOZZTOCDZTOPRHIAEEGPVMLYIDHCDXDUREXAZCJUXMDIHGMFYTFFGGXGEBAORVMPAXYTCKYXXBLSYIKBDZMWTFWMAFZLNODBUSBNP");
    msg.last_error_time = 0.307722948262;

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
    msg.setTimeStamp(0.782428387347);
    msg.setSource(38917U);
    msg.setSourceEntity(158U);
    msg.setDestination(56126U);
    msg.setDestinationEntity(60U);
    msg.mask = 83U;
    msg.max_depth = 0.472146447732;
    msg.min_altitude = 0.957023219133;
    msg.max_altitude = 0.392828708525;
    msg.min_speed = 0.349734751762;
    msg.max_speed = 0.316222411428;
    msg.max_vrate = 0.785585684186;
    msg.lat = 0.385845688051;
    msg.lon = 0.482013378439;
    msg.orientation = 0.0534827777832;
    msg.width = 0.870544345036;
    msg.length = 0.708453723685;

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
    msg.setTimeStamp(0.984404420161);
    msg.setSource(1427U);
    msg.setSourceEntity(42U);
    msg.setDestination(23807U);
    msg.setDestinationEntity(16U);
    msg.mask = 16U;
    msg.max_depth = 0.326753867301;
    msg.min_altitude = 0.913151956294;
    msg.max_altitude = 0.8928515386;
    msg.min_speed = 0.0502712131838;
    msg.max_speed = 0.0488204943749;
    msg.max_vrate = 0.649145718158;
    msg.lat = 0.614784498497;
    msg.lon = 0.225648465364;
    msg.orientation = 0.313925826924;
    msg.width = 0.934143467972;
    msg.length = 0.833733820223;

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
    msg.setTimeStamp(0.605388432134);
    msg.setSource(57411U);
    msg.setSourceEntity(1U);
    msg.setDestination(33150U);
    msg.setDestinationEntity(213U);
    msg.mask = 246U;
    msg.max_depth = 0.449825070522;
    msg.min_altitude = 0.443904458809;
    msg.max_altitude = 0.715487548966;
    msg.min_speed = 0.651399232792;
    msg.max_speed = 0.726971619826;
    msg.max_vrate = 0.619724183767;
    msg.lat = 0.233402491705;
    msg.lon = 0.0688129073561;
    msg.orientation = 0.452027719705;
    msg.width = 0.063048532192;
    msg.length = 0.510852626475;

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
    msg.setTimeStamp(0.905064825849);
    msg.setSource(8650U);
    msg.setSourceEntity(117U);
    msg.setDestination(27181U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.498748172426);
    msg.setSource(30574U);
    msg.setSourceEntity(31U);
    msg.setDestination(26921U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.293187623952);
    msg.setSource(20536U);
    msg.setSourceEntity(4U);
    msg.setDestination(11865U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.751570253564);
    msg.setSource(52590U);
    msg.setSourceEntity(144U);
    msg.setDestination(50368U);
    msg.setDestinationEntity(33U);
    msg.duration = 40095U;

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
    msg.setTimeStamp(0.0877334110748);
    msg.setSource(65518U);
    msg.setSourceEntity(3U);
    msg.setDestination(42684U);
    msg.setDestinationEntity(11U);
    msg.duration = 29981U;

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
    msg.setTimeStamp(0.868574115018);
    msg.setSource(49852U);
    msg.setSourceEntity(187U);
    msg.setDestination(33325U);
    msg.setDestinationEntity(241U);
    msg.duration = 38958U;

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
    msg.setTimeStamp(0.0384803434632);
    msg.setSource(12934U);
    msg.setSourceEntity(179U);
    msg.setDestination(43543U);
    msg.setDestinationEntity(157U);
    msg.enable = 159U;
    msg.mask = 2626429898U;
    msg.scope_ref = 0.286174603105;

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
    msg.setTimeStamp(0.254817131905);
    msg.setSource(9134U);
    msg.setSourceEntity(238U);
    msg.setDestination(17295U);
    msg.setDestinationEntity(9U);
    msg.enable = 72U;
    msg.mask = 2605065111U;
    msg.scope_ref = 0.92100636558;

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
    msg.setTimeStamp(0.259398966836);
    msg.setSource(43280U);
    msg.setSourceEntity(12U);
    msg.setDestination(35634U);
    msg.setDestinationEntity(85U);
    msg.enable = 196U;
    msg.mask = 1297579579U;
    msg.scope_ref = 0.564840800638;

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
    msg.setTimeStamp(0.839724205794);
    msg.setSource(15765U);
    msg.setSourceEntity(168U);
    msg.setDestination(31540U);
    msg.setDestinationEntity(174U);
    msg.medium = 145U;

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
    msg.setTimeStamp(0.00867702530907);
    msg.setSource(5131U);
    msg.setSourceEntity(205U);
    msg.setDestination(53564U);
    msg.setDestinationEntity(231U);
    msg.medium = 72U;

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
    msg.setTimeStamp(0.440995023281);
    msg.setSource(30027U);
    msg.setSourceEntity(13U);
    msg.setDestination(54047U);
    msg.setDestinationEntity(64U);
    msg.medium = 166U;

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
    msg.setTimeStamp(0.138486697344);
    msg.setSource(17106U);
    msg.setSourceEntity(96U);
    msg.setDestination(40924U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0483278129653;
    msg.type = 133U;

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
    msg.setTimeStamp(0.105642512322);
    msg.setSource(62727U);
    msg.setSourceEntity(80U);
    msg.setDestination(11513U);
    msg.setDestinationEntity(75U);
    msg.value = 0.879774219163;
    msg.type = 167U;

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
    msg.setTimeStamp(0.467522969021);
    msg.setSource(30109U);
    msg.setSourceEntity(16U);
    msg.setDestination(61326U);
    msg.setDestinationEntity(93U);
    msg.value = 0.0408835366749;
    msg.type = 79U;

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
    msg.setTimeStamp(0.752476158743);
    msg.setSource(15282U);
    msg.setSourceEntity(122U);
    msg.setDestination(8377U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.664032140238);
    msg.setSource(27081U);
    msg.setSourceEntity(36U);
    msg.setDestination(58826U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.93311424938);
    msg.setSource(54871U);
    msg.setSourceEntity(127U);
    msg.setDestination(11397U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.648902294433);
    msg.setSource(47766U);
    msg.setSourceEntity(146U);
    msg.setDestination(4452U);
    msg.setDestinationEntity(186U);
    msg.plan_id.assign("PYWOWIZWPVHHBWPFQDKMMGXNZJZOXKXUFMYZCKUCWALUPBRMCBALDIFUTKEUHQUOCFJCHEMAZDJZJJSSYJCWLFVUOPSAIUIRVPEFREXSWGGTVQLHRTZBOKVOHNONPABEPWNWKAWVBLSMSEHNMLYFTQBJAESDFE");
    msg.description.assign("CYKSDTILMNBOOIZKWPKWKWUNHUPWPEQTTVFILAADZQKDBJXEEYJBHXGMHSFRWBLQKMAYKGUAGDOOWOFNPQMOEYMEFCZAXLLZBIUMWCPRQAAUINFJBSENTNGIXRCNFXAWITZHXJLTLRRVBXSPCQRDEGPNJTZYTIPHPFCUETVNDVQMVPVOV");
    msg.vnamespace.assign("YKNHOJQAWPABABDUKSPYLZYPFHHNUUOUGWRMHDNRFGHLKMUQZQJCFDEJLXZEHESNKJLBGBLSRVATDIIGGPCPMPONMHWFMWBKXIXPGOFZXDZBVAIGOSBDSWUAVCDYBJVFSVVRYPZFQWCGDCLEZLCIZRTNAJERCNOJRTTPSXIZCUOB");
    msg.start_man_id.assign("QJALJHYONKHVITPCHPYWBMNPDFBONTOECMVXPPFYJVNLEUHTPBFAWAWMSKDZUWDELVAIZYSZCIRSDMGOYRCUBPAUMMELFGHFVMTATXIDBTYVOCKIQERGKXOWSKCRJSOZRCLQQWDJPFBZWDEVLRNHUMPERHWYTOAXNMZSEBNXAVBQFURIQEUGSGPMYDFLTJGIQIUUOGFXINLCCZLLRVZSJZKHTADRXWJBKITHBEGYHVJSGXDAUJWK");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("PUUDGOZXGAZQKYLMBAZXYLRMXNEGFLQXRTGKTAHJOULODIZHVBRSLTKYVIRIOSYKVFZVMZJFEZHLFWTVPVFKDVUXGLMMNUROMSOULBAAKXPHMTBEITKBEQJPIPIJWJXT");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 4713U;
    tmp_tmp_msg_0_0.lat = 0.254014605333;
    tmp_tmp_msg_0_0.lon = 0.241204613239;
    tmp_tmp_msg_0_0.z = 0.295506874265;
    tmp_tmp_msg_0_0.z_units = 131U;
    tmp_tmp_msg_0_0.speed = 0.61371691714;
    tmp_tmp_msg_0_0.speed_units = 188U;
    tmp_tmp_msg_0_0.duration = 3199U;
    tmp_tmp_msg_0_0.radius = 0.528619903886;
    tmp_tmp_msg_0_0.flags = 82U;
    tmp_tmp_msg_0_0.custom.assign("NOACMBJKEYMQUQRNKJMWLFSIFGKEXFNTYPMHSRJPZQMBVHUOEZBDDLQEQCSKKJSRRHCKDDHFMGPXDZQAVPLJWEMPOXKGLSGOTDMBTS");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EntityParameters tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("XYFSWAWNAXBXNQBMQPETBEAGMAGHYILFOILHDTBFGZIXBISWQGDKUXBKZUDJNAUADNJIVS");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.name.assign("ZQPHROVTTVMLEDTGNTLOKNIJSEKFKFCOPQIGVINXTUMVLSNWXLFINQVZDBOYPOKAPBFIYZXOVVEQZWBENECQQGGKNXZSHDKHXYJQLLOGISSPRMBSTEABHHRTIFTYRDAWMGJWXUKGJDCFDSJZOYSWBBXHZVAFKRXQMMUCGHWELPCTXGJVGOUNAWRJFMLCBJIAJ");
    tmp_tmp_tmp_msg_0_1_0.value.assign("CODQNJOOGZHGWKLLUYXSHJXMMALNIQEQMPFKITBWJOFDZSOVHCZSWBRYTSMDXNNZYUHHGACBUGYZIBBFJRKEAFUELDKVGHUGWCVINLCITSZRBTCQSTCAVUKAJAPBALNWLTXRVKETKQHXUQKNJPFWEVYZLGROIYYZ");
    tmp_tmp_msg_0_1.params.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("OXJGTHVJTZGCGAFAEPINZBIUGHUKXZEFJVKU");
    tmp_msg_1.dest_man.assign("LJVRCKAFSYXYSIFLQSXXIWAZAMRQTCEQQGPXOEJEDNOTTLFJYIJSLDPRZXFVVNSHQQEPOIUYOFDYJDNUGHCFYJOHSMWAXNJNERCTXZUUPXZAIKYWHUKCLNCGEMQIRGVCTHKVBBRBQDFPFTKRMBGOOH");
    tmp_msg_1.conditions.assign("KSXPYYUXADWYCASCOMOXVYMLGUMRWWQKTNDCQEKNHBTNHZYBJOLEPAEURIJVEPHCYLEEEPJIPVDSAFCLLDHOAQMATOWCBFOAAFZYTTWVJNTOGSTXSQGYCFWFDMMNQCXF");
    IMC::StorageUsage tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.available = 1019140647U;
    tmp_tmp_msg_1_0.value = 104U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Conductivity tmp_msg_2;
    tmp_msg_2.value = 0.710256939057;
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
    msg.setTimeStamp(0.905574035312);
    msg.setSource(63503U);
    msg.setSourceEntity(25U);
    msg.setDestination(33043U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("SUQRHUBBNZUDTSCZKWFEVETQNBDGMIKYSXENSSRNROULVXYFJRLOQMLIMIJMXDUJFVHTMDWRFIWRXCSMADGZQOXSOJDKAAAMGZYEULCAMOJKQZTCACTGCKXTEJZH");
    msg.description.assign("BVPKSRISWELMDTLAIYTBHKISAOVRGWJNHYRGREPINCWXLZRPKLHMQCRHJOQCKKGCJFLPBDGUGHYGBXUEDANOXFVTXQXALUNQWDONNTUCVBSWUYRYODPTJFECQBMPETBXNABTWIIMPLRVYDRLSBWEKDEYTEAAQQHOZZPDFQOISIWKOMLPKIOLYBVMUFGJSJTKDSGJCUFVNZNZFXZIFAJGFHZGZZHJYPJQERXVMYADHVSKUNFVS");
    msg.vnamespace.assign("EEMALESCYGZFTBNAGGTKDQVOUBX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UGSETDNQOCSJMWNNKXWBSAOHZXTRZIXMVPVBVAOUQJZZKLINQLTTRKTEFUCAOADDGHUURBGVEEZKJCMQFOWLPRWFDXVWJYFGBQRMIFQFJPTCYFPYHQRRZBJLDFLFMALVGMNBDHXZSNDYEICGMPTKNAONXDVAICCISTKKHNUSUYBJLBVYMQPWPRZAVEINKJTXODWPAXEELYIGYFXRJUYGBRLILOSSEKGXCWSPJ");
    tmp_msg_0.value.assign("DPZSUZGLAIQYULAE");
    tmp_msg_0.type = 249U;
    tmp_msg_0.access = 239U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HJJAIWZUJHDNELCFRUILQIZADUXKHWFHPMRYZXVGHJPFQTVMOEGHBGVTZGJBIVOKOFOBPEXQAADSGOYTUTDBCYDKJFVDSEWUZVVPJSOZNIWGUSXKQNQJQRPOKRNQLNBATCRBWR");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("WZBCIDNSYSAEEOCMUVXNMFWZJTVGVQBBPFDYKVNXMJPCPLLTYKNRWBFTQLWTQFSCKSKPOEJHRYMACJIHZDTSYJARQOBCKUSVJRJIYFBKYQHQMIEMGEIZAIWNCGNMNDXZRQPFGYOHMAQDXGETJSLVFZTFHSTDHUIK");
    tmp_msg_1.dest_man.assign("FVPSKBUQNVKVFKLPANICMWQWIUKHZRYENYPIUSCTGVQHXDHSMCDMTGCYVHFXACXDXPATVJDBSIAEOMDQYENWWBASWRPJOEYZFELOLRPSSHTAUQXVGISLFVNQKCKHYSUPUFRHZUUPJLGWFAVDWAMEYFNOGNOBIOMJJXAXXAYZBBOUODZNTRLZSGLCMKZTTQRGMHRLLCGGGFNNHDZKEOJZ");
    tmp_msg_1.conditions.assign("OYYFVMEYLFLOFBITZHVOTGKTGVAMEQBJXOHRESZLRDWKNNXPDGNVVUDSDNHQUMQPKXAQUMBJBYGWCFXAGPENRIMJFHYTDXCZUSILMEUGIWOPYOWJEHJZLVSQKAQNCFIHEYPCWPFLURSTSVGLPIGFQAHLXFAYAJBBVTEBABIJOXQZSUQWCTDKYDRVWWDTUKEUXWQZENSMCPIMRBMLMRZVAPGWJHHN");
    IMC::Collision tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.857052281789;
    tmp_tmp_msg_1_0.type = 155U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Goto tmp_msg_2;
    tmp_msg_2.timeout = 41845U;
    tmp_msg_2.lat = 0.868437748846;
    tmp_msg_2.lon = 0.787162875218;
    tmp_msg_2.z = 0.600836623668;
    tmp_msg_2.z_units = 95U;
    tmp_msg_2.speed = 0.74426335061;
    tmp_msg_2.speed_units = 208U;
    tmp_msg_2.roll = 0.629572030036;
    tmp_msg_2.pitch = 0.224567976223;
    tmp_msg_2.yaw = 0.871701619572;
    tmp_msg_2.custom.assign("NJDBWVAMWLFTDQIITBOADRHUJEVVOEDJBLWYESQKHVWHYTZMCXJLBAAOTONYCZIHJXVUOUCVCJGREIKXUNMRBQGRIZUKDPKSUXJQHTBFFCONOAVTYPWS");
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
    msg.setTimeStamp(0.0159831418651);
    msg.setSource(23680U);
    msg.setSourceEntity(85U);
    msg.setDestination(34818U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("MFQYGLLUJNLTMVYGAGMTWWGRVCYGNPIWCOXEDNQ");
    msg.description.assign("FDWZCEXYZWXPXNABCQDWZNRFRCIUYJTZOELSFFFDNEWAXOZMKFSZWRGBEPXQGWMIEHKLXADHCPGTRJLKSTPBQGVLRM");
    msg.vnamespace.assign("VFAWJUCQLMRRQZCHQAMWFYURVGFSDBTUORSRXNCMTHNMDHJVFLKJLYHZUOHGICBDNYLYJYUIPVRSKWSIJWRDXOZDMLFOZOTNQEAZSPBGIAQLRPBIGHAVFGOHXEZDBBSESCXBEKTYNANWKPHJOQQWHSIREGPYTVPFNQCNHXMVJUIMXQGENBTUFMVAEWLCJKEMWTZOMXCTGDDZKUAPJDJAVKA");
    msg.start_man_id.assign("MICAHHZXVGNEYCJHBTIAUCAPQZZSPSRCOMMJKQBHMXNTQAQDFRZTPJODMOWENLFGHJIJLFHP");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YHUXITODFBEKWTEKZPKURMTBMXUVHSFSZKCAPMIMAFVCCFFUUYQJRFLPLBZFPAJNQAPIEDWRRHNYELVXRURYDGIYANGONWYGIJEKXISCBYHWHNHSCIEMPRZCGPTRYFMIHTBDAXYRBIBLOQCPSKOXNTVFTYVDSBMNZKOAEZELJIUSVAAOJJDOVXVRNMTDCLJQW");
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 60639U;
    tmp_tmp_msg_0_0.lat = 0.779295191563;
    tmp_tmp_msg_0_0.lon = 0.593495068381;
    tmp_tmp_msg_0_0.z = 0.805368509243;
    tmp_tmp_msg_0_0.z_units = 151U;
    tmp_tmp_msg_0_0.duration = 29730U;
    tmp_tmp_msg_0_0.speed = 0.442965599362;
    tmp_tmp_msg_0_0.speed_units = 31U;
    tmp_tmp_msg_0_0.type = 0U;
    tmp_tmp_msg_0_0.radius = 0.0393745832854;
    tmp_tmp_msg_0_0.length = 0.707591621357;
    tmp_tmp_msg_0_0.bearing = 0.614684333444;
    tmp_tmp_msg_0_0.direction = 175U;
    tmp_tmp_msg_0_0.custom.assign("WTXUWBYYENJZSKOYCTCZBFJBAKEFX");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AllocatedControlTorques tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.k = 0.620350215559;
    tmp_tmp_msg_0_1.m = 0.799300744438;
    tmp_tmp_msg_0_1.n = 0.277207658746;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("GJPBVYWMSQFHMAHKTVNMLGKYG");
    tmp_msg_1.dest_man.assign("KBICDHWHKDSRYONMIILMFBYCZUYQKRWMXTQVJLHTHATLFUAADZXQNUDJCHLHNQSKEDOJUJPSSIYWVEMXWOPOBXTSPUAFJGWHKOIKPECNCJGFOPLBWBYCEHBNMVKNECIARPDCMNADVAGXTGXRRGIFNDRTZAVEPTTZSSQUGHTKQJ");
    tmp_msg_1.conditions.assign("ELYYGAEPIPWOTELTYMRGWPNTIOQAWJZLZABRVYGBLKYUQBBLXBRXXDJUNDWLQANDBXHYWSUCXCDTBNFLHJEYMZNUHLKBCEPMQACKFYMVIBCFSAVPMHGDRYIJTVROADVQCJIKPKFCFZDMZAUUFNCR");
    IMC::PowerOperation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.op = 114U;
    tmp_tmp_msg_1_0.time_remain = 0.171495804189;
    tmp_tmp_msg_1_0.sched_time = 0.0748437718013;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::LblEstimate tmp_msg_2;
    tmp_msg_2.beacon.assign("OVTGZONAQBXXZYDPEIVUKIPVSALTDZEYZUQLOZNLZIBRWXWSEVMIAPDJKLCHEXHVUZHGHNSXNTNRDKIBYLHUWUNJPCEAGFYBRFJGSHMDWIYRYBKYUKMDTNSAOKALXWCWKQLLOFEPCOGMTLSEQDNUTJXAQWESGHZZJJBKSRDQROGKBACFMBXYKRJEJQMCRUVQMCFMUCIJOVXRXQIDWITWFCSHZVBGFNNPGVHTPURJCIPOASBVTQ");
    tmp_msg_2.x = 0.0157510357899;
    tmp_msg_2.y = 0.845402931423;
    tmp_msg_2.depth = 0.474472176878;
    tmp_msg_2.var_x = 0.932155626609;
    tmp_msg_2.var_y = 0.913471636586;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.59181605637);
    msg.setSource(32282U);
    msg.setSourceEntity(48U);
    msg.setDestination(56233U);
    msg.setDestinationEntity(132U);
    msg.maneuver_id.assign("WQWNZEIHBKPWBPDATDUJWUKEQCFGFHSGTYKMBDVRGDOBCDLUDHPYSANLICNTJXMWUPPUMGHWXNNRCYIRDVBMQCIP");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 63704U;
    tmp_msg_0.lat = 0.399029714683;
    tmp_msg_0.lon = 0.982171454379;
    tmp_msg_0.z = 0.943923619634;
    tmp_msg_0.z_units = 28U;
    tmp_msg_0.speed = 0.276926143675;
    tmp_msg_0.speed_units = 32U;
    tmp_msg_0.duration = 15366U;
    tmp_msg_0.radius = 0.897798901036;
    tmp_msg_0.flags = 206U;
    tmp_msg_0.custom.assign("HUJGXVWOGGXPLTGEYETWESNAZOLKBOZMMDYMDAXVIWKSUVUHDUTAGFVLCGIIJVOKFDLYMFSENSBZJFFDHORJLQTKMMQWQFPECVOKIBXGYCXAJUVSINLXTIHENKGSAJTBEOXEODLMFMCKDZTLLYTHWAWQXIIVCCJFYWDVJJHSFXHZXMCWZBRVDHUEQ");
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
    msg.setTimeStamp(0.762718282337);
    msg.setSource(32383U);
    msg.setSourceEntity(24U);
    msg.setDestination(63880U);
    msg.setDestinationEntity(94U);
    msg.maneuver_id.assign("FMBXQIPJGXBCXBQFXNFEFFTBKLCSBJLHGEFWEWDVNBAMUGRTHJARIRKAZFJSRZYQFXTWKRPPEGBWETWQHVTYTSKNELSEIEATVMQOKOTRHWULDZOVCGMDUINCVUGCLOLHJVRVHMBDZHVASIYNKR");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.277353953664;
    tmp_msg_0.lon = 0.113209513224;
    tmp_msg_0.z = 0.709046051753;
    tmp_msg_0.z_units = 196U;
    tmp_msg_0.speed = 0.200049445927;
    tmp_msg_0.speed_units = 243U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.368915759928;
    tmp_tmp_msg_0_0.y = 0.379326180293;
    tmp_tmp_msg_0_0.z = 0.237208001149;
    tmp_tmp_msg_0_0.t = 0.321095393844;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 19209U;
    tmp_tmp_msg_0_1.off_x = 0.468046515554;
    tmp_tmp_msg_0_1.off_y = 0.887885549914;
    tmp_tmp_msg_0_1.off_z = 0.555733582591;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.289001679575;
    tmp_msg_0.custom.assign("WNIHBGTXTWIFOBHTTCJXXRLTLJQMWQGFXAEVTRJKQKUHDYESAGOYRAWPRMLUMGTYZNXVYUFZGSGVAJPUNVHPSZQACLXMQQJKKRYVRUEAPKJXPJWXXQUZRQIEOGVEIELIWSMOCBMCVUNPCFKHHDNIPAEHGBWHRODUFFEBTOKABONUVECMMCVBADTZFJAYQLVODDKRCZDELIPLOFWJZNYKSJPQHNSBMDGLNSRHUYSMWYTC");
    msg.data.set(tmp_msg_0);
    IMC::CacheControl tmp_msg_1;
    tmp_msg_1.op = 160U;
    tmp_msg_1.snapshot.assign("SXVCNJWMDGGZWFJANAOFZPIXFFXRNLDPQYEHGGMHAZBZTNRIWVBTGHIQPBWOLQEHCSQJXRSYDSYLOVXQJPBEJCUSBIUAXNTFQMEPZYUVFYIBKUXMVKKHKTEZBPDGZKAHGKQIJNBLMXVUTTJUFCRUWJHSKYLCWECRZIPMBZVDFIKEPTWENYOOZOAWRQVTDKANCYMDLFRTYTJREVAQODROVCASSMNWHHUBJCYKMAWRQGSGPGNIXLDE");
    IMC::DevCalibrationState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.total_steps = 148U;
    tmp_tmp_msg_1_0.step_number = 96U;
    tmp_tmp_msg_1_0.step.assign("WPYUHNIIQCHSQYASYXHSJKTFQCNVIBGJYOUBGCPEZXSTARDPTFHRKDPEFHMNKLYGGEVJLAWDVTMAEQOUINWOFYRCXLN");
    tmp_tmp_msg_1_0.flags = 112U;
    tmp_msg_1.message.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::StopManeuver tmp_msg_2;
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
    msg.setTimeStamp(0.92804461043);
    msg.setSource(3178U);
    msg.setSourceEntity(143U);
    msg.setDestination(26750U);
    msg.setDestinationEntity(94U);
    msg.maneuver_id.assign("LOXCDHNXFPLFWVRONNEDYYPAJBGWVGXRPLCXSYIAFJXGCHKRIPYMYUUVAPQTZRNMCVVGZHCSQOMKTKQFZIOBIKTI");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.900734007257;
    tmp_msg_0.lon = 0.284306482841;
    tmp_msg_0.z = 0.346814717468;
    tmp_msg_0.z_units = 166U;
    tmp_msg_0.speed = 0.176903820314;
    tmp_msg_0.speed_units = 228U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.0597817121118;
    tmp_tmp_msg_0_0.y = 0.304839090052;
    tmp_tmp_msg_0_0.z = 0.178630897302;
    tmp_tmp_msg_0_0.t = 0.273519061367;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.190177692238;
    tmp_msg_0.custom.assign("FTUCCDUILGEWEFERMILMYUKTKAVTHPYEQSMAALBKJQJ");
    msg.data.set(tmp_msg_0);
    IMC::PlanDB tmp_msg_1;
    tmp_msg_1.type = 34U;
    tmp_msg_1.op = 98U;
    tmp_msg_1.request_id = 51167U;
    tmp_msg_1.plan_id.assign("PJVFYSUMGJTNDKCDDVOJSINBFGOHOCOIFUZMUNWKYXYHYRYFDGINLFUHRRVHQTWXHATCXHEXWVZIUIXRLCMPONTJPMCQVSCBJAWITSZKQTOGZQDNPMVXGAEEBGJDRWNMSFNENCUVVBMXTZLLJDWDEGDQYQQYWTACEOBBCAEIGWLPSWFXAHFBPIRTBKUFYXJOTYMQLZBEAUHFLZJZRDUKPHPKVPOVJKKLROSAMQGQLX");
    IMC::ClockControl tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.op = 139U;
    tmp_tmp_msg_1_0.clock = 0.158429768579;
    tmp_tmp_msg_1_0.tz = -40;
    tmp_msg_1.arg.set(tmp_tmp_msg_1_0);
    tmp_msg_1.info.assign("IMTDVARTSXKYKTJSVPXSKZKIFPUKTSJEAXGLJOJYQDXKZZEBZDEDEZYIWUMEULGZXGIM");
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
    msg.setTimeStamp(0.0305974929949);
    msg.setSource(43560U);
    msg.setSourceEntity(180U);
    msg.setDestination(15730U);
    msg.setDestinationEntity(64U);
    msg.source_man.assign("WWXYJYTRRORFDLPNMKPTCCSXHJOWFFRVBOS");
    msg.dest_man.assign("IJGFHSFQVAFSZYXKVEQIXPVDSTGSCVXAVDHTJAERGOK");
    msg.conditions.assign("HJITDFBMMGFDLODVKREGZZNIGSTKJNYYFLPTYAESOZMEWEDJSWAUPNHNBOITXMIYFPXFJDQXOCVDTWXIDEKOOIXBHVUNCJCVTUTHYRBFMI");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.123240250961;
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
    msg.setTimeStamp(0.586838261859);
    msg.setSource(7402U);
    msg.setSourceEntity(144U);
    msg.setDestination(42710U);
    msg.setDestinationEntity(204U);
    msg.source_man.assign("TMBBOWJOVSHCDQGKDFVCRJCRQOANUGM");
    msg.dest_man.assign("OLKYXJDXVJWAGFEPBRGK");
    msg.conditions.assign("QQSSSQKJMXFBZFYUYGECQWNIVIOJMQSKJRERVYJQOISMJYQEUZVLWLDYHLEA");
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 83U;
    tmp_msg_0.goal_id.assign("RBIUEPYYRHAPOJXIVBYJIBNLXKMFXGNVTGMQOAGARBOJKTBLILVFZKQSQHHAYBFJNCJSDMRYGXEMKOZHQAEEJFWIDCEETBJWOYTNWLAYAXC");
    tmp_msg_0.goal_xml.assign("SOUKLOGFQEGCRJERSLMGKDXEKPEHHMTUFRWDEJESJPMYPZTHYDNUTXQOMBQPYBSHAVJYXQJZNXRDZJMCXIDVKXSTINERYPGZTVLSWVYLVTEQBQBLAZJJVUG");
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
    msg.setTimeStamp(0.6739228345);
    msg.setSource(42402U);
    msg.setSourceEntity(218U);
    msg.setDestination(46266U);
    msg.setDestinationEntity(148U);
    msg.source_man.assign("VWKSVOLQYTQIHCHTDRPLWSYXIPKDTJXAZQXAGSHCQRJHANQEFIVUSMUZVJSOGNRPYXOPOBODSGCAKWAEJMPSJQGV");
    msg.dest_man.assign("SGXFXVYAYIEITPYWMFUZISAGHJNNNVHJPTKCQLCEJKLOEWBZNXGRPOMOVDKLGLRQLNBVGODQCSUFEUZFVQXXSAULTEWIXJADLZWSYNDJEZLXPPGWUOYZYNMRQKBOESMMIADIKKETBALDIVBDMMGYRKBAFPXVIHSHNTQOYZTCJQDBSTIPPALQDHJFJVWCGDXHO");
    msg.conditions.assign("CYAWDVUYPVXKCBSPFWYAWMVNJTXWRFLMTKEPCJRIUPPBEMEADDOHREMXZJRXIQVHKKNTVPAJUSLARGHOELNIVDAUFGMDEIFTQDBXUWMTCIYQYBCRGJZTNASRGXMJJEXSETTLJQKGQSPTCFOKFIHBWNVTXDUWSCVBDPQZSFZIZGBAFMSHUZXIUBOYXONVUMIHHQYPKZEDYICFQUNJELNZARWGVLHZZGCDOSLLOGHW");

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
    msg.setTimeStamp(0.946000439383);
    msg.setSource(19454U);
    msg.setSourceEntity(134U);
    msg.setDestination(28554U);
    msg.setDestinationEntity(248U);
    msg.command = 26U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MYYTSVMSTGFDJMNUJGTRAXLCRDFZQJWSARTPAZAZBLFHQBYIBAJKIEQKQNLUV");
    tmp_msg_0.description.assign("LPCONRTXEEUBPCAMUFQXCBVSGKWDMQJYHLNLZMYYMNFWOITQLLQBPBIUZYSVXHSWFGCDVMQSURDFDSOFEDYNDTRMOJGBFWXKUHFOTKYHVPHEKIVQUNZVMAAOFDCPRJVPQMCSZRXIBCCXUKLOWETEUGPOZNIEXYYVUNSHSONTAVIMREGTDGIVJGXLCJWLPZRPATLJFKDFMQDGZHARIZBBQZKKXOYCLXATWEIEKZNJHRPISBGJWNGB");
    tmp_msg_0.vnamespace.assign("PXKDZDQHQG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PACXAHCKKTGPELJKRBNFSLZRRCKJITIOUUNBZQFXMJFHAGGFHRSIYPGWEBHQBCHDSJVXLZTYGKMTCEWUAGZQOLJAPMEFIGETWYTXDDKITVYSUKXDBHCWSQLMWRJCMFNHDVNOVYQALCUVATQYTQJQDRGMFKDZEBLYPUFOZWP");
    tmp_tmp_msg_0_0.value.assign("GGSDSBIYZVWAONBSDZWCJFDCYYDJVJEERPKFMCBTVMLXYDXZCOYKVAOGMZEQUTRSZTMKPWJQIFJAQUQOUWUELEHXOIEWFCBQMNVQUHXLEULCFTXMHJIAAFFGRHODOSRURZCAKBDHWWDXNVGLTTNNHFIZPLAMMGNJLKRKPXEGQQH");
    tmp_tmp_msg_0_0.type = 13U;
    tmp_tmp_msg_0_0.access = 160U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IFCGONWSCAGKGSKVUDSOOZUUAWVLVWQELIEXZKMURJMQMHLMQLOMJBDZRTFSSFNVRUXHEQOIKPARQYCNJEABXTVLGYBFOMZERAKFIOAYCWHROIPRGJHDW");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("RBUSIZAXAWPCYXLPDFCFQZXYUERZPUBSJAAUDCKCFWLIKPIO");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_1_0;
    IMC::DesiredRoll tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value = 0.966029950379;
    tmp_tmp_tmp_msg_0_1_0.control.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.duration = 37405U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BUBYHDLGEPHJPZRLZTIMCEXPOZQSMXOBXPXLFHJANPTRUZBAQONFEAEVJNNSIVGCNQKUDXHADOVCVJMNCIKEEVDWTGQDYJWRURJWYLMVXBJNRZQIRCLYBSHGEQGIDHXGYGQCVFHCAWYPONILXDVFQZPSLWEOWSUJTKQFSAKSSHKSEALHLMFOJTJRPWZYOZYLMWFMCITUYGCGOBMIATKYD");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::AcousticRangeReply tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.address = 137U;
    tmp_tmp_tmp_msg_0_1_1.status = 134U;
    tmp_tmp_tmp_msg_0_1_1.range = 0.543809161562;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("FGGDGSTQMCVGBFEKPRONSNKDOZIPISZTNDRYIAUSLEMDQYFPRKWTMUSLCPRHDZIKOKKJGVVKUFVTHJBWIYTZBELBVTTQLEFOFXHAVMCZCHNXCZKHHKMZCWPERTJPXYKAZXIVDREGJLUFITHJVEWOBNABLNRJNMSXQIYHOGILWQOEWRQDOCAPVJGUEXOMYSQPBAYMNJXXZRCWJUYUNJUPMDDSSRFVMADSBWFAHICFEOXUZAYHCABWQQBLQTLYPX");
    tmp_tmp_msg_0_2.dest_man.assign("MJUWMNDNYJMTVCLVTFWAISYTPIMULAETZXQNBYZBJQUBWZYIBZEGWWUXSEFNXORENPVQFSPSPUMZPAHTKLTLAUJYBOHRUMELQSUQWOKSPTGADJBGXKABNCEXCXXIRJFCJKNYODMLGCKJFEDBNLXDRUIGPJHIKSBZZ");
    tmp_tmp_msg_0_2.conditions.assign("EKMLWTRFDCWROBHNAHRAEQKOSTBRACFVTSTMCFWMSANZPPRWOYTVZINGCNHQIHUEIJDMCEXWPHUONRXFYFJZCCJYPBUSOLXIBSEBLHFGEIQBHOHBNCTIQWTVZKRDSJHG");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.162749347046);
    msg.setSource(49074U);
    msg.setSourceEntity(160U);
    msg.setDestination(39037U);
    msg.setDestinationEntity(94U);
    msg.command = 98U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EQHNRNARBLXDMJNMHMOZQJFGTTGLJSIRBNQWPRPPRCJYSYEMRISCAIKLKYV");
    tmp_msg_0.description.assign("PVCEKAPIBXMHQTIZHNZYFOFIQGNXPOJKHPBNQVBDTBLMKBJMXZGAQLEUFWOGOVIFCXINWWAAQ");
    tmp_msg_0.vnamespace.assign("VLNXNCRYCVLJYAGPBWPHTDOBNINYKKDFUJOZJU");
    tmp_msg_0.start_man_id.assign("UAGGSEGTWDVODCNYGDZKUWXCNKRXPPOPNEWMQCULML");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("YURBLXOGZFDASOQNJANMNHXBORXKPLKEHESAADJVHWCQSCNKDJRUCCCXWKXZBGYLWWETPHQIZQTYDSOWTEMWOOFSVTXYIRLVEJBSPUBKOUIDIZZWGJCMLARORJAAJHREZQTGCJQMLKGPKSIFAHHJUGKWYMTVQIMFL");
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 16960U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.438098520474;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.263482465603;
    tmp_tmp_tmp_msg_0_0_0.z = 0.638807283875;
    tmp_tmp_tmp_msg_0_0_0.z_units = 145U;
    tmp_tmp_tmp_msg_0_0_0.duration = 25190U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.310393696162;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 238U;
    tmp_tmp_tmp_msg_0_0_0.type = 19U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.579858181624;
    tmp_tmp_tmp_msg_0_0_0.length = 0.346614247342;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.0528940972436;
    tmp_tmp_tmp_msg_0_0_0.direction = 184U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FTWUTFPCNQSLPQSEYIQFZAMVPLUPQGDCOJDIKLRWDRSUJSXYAYUIIELVSKVHXUTIGQCWNOGZPKMURAQBOKYPVRSHAWKKMNEPHKMUDSLWZBYCVODWMSOZGXNBXFLPAEXHVJATTZGSDEAQNBGONRIFTTGYRBJJQMZMGBFQN");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::QueryPowerChannelState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::CameraZoom tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 6U;
    tmp_tmp_msg_0_1.zoom = 31U;
    tmp_tmp_msg_0_1.action = 42U;
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
    msg.setTimeStamp(0.751551711);
    msg.setSource(39926U);
    msg.setSourceEntity(224U);
    msg.setDestination(21523U);
    msg.setDestinationEntity(106U);
    msg.command = 6U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ERLFWLPEQLPUCMRJCJLEJXBSGZKYSAECMWEDJYTYRNAIFTWHUNAJBDVZFUFTQIIOQRYLOJKOCDASBPHAWBVQQDWGGGTZMSHMYSPPNOCKGUYGEOFPTVXVIYACJNSIOBMMCZHQOCXFYQOXUURDNHBIPN");
    tmp_msg_0.description.assign("CRBQYYGKBRUAVRGCYIWMBARGUKVKRGMECOKXLCTPTFOVSZPWGRLMIMTEFXTUCHVPNUSLJSKUAKOUJWHOMEMSMHFVYGXQNVWZGRGPAOZIEXDJAMQAKQPVDPILEYITDJOECCXBZAEOXOTFQDBYJEWKXLRWQTJNYUSIGHZCPUJPYDLKBYVNLJFLNDUDJSFGPLNQRHZQBDIZANIPTLZEDHT");
    tmp_msg_0.vnamespace.assign("JEMDZMXSFQJPUUKRDNXMVRAIJLZQHHSYMQEBMRRHTKTSGCCNIYVOEIXYGOXETAWMECPAOGVSJATTDENPLBCPLOHURUFGLILBQDYTFLTLFIPCSUWKTVZZDCKOATDWWIKMBNYHYWINJFEOOEARHNRPQBRWHPLPGVS");
    tmp_msg_0.start_man_id.assign("JJQPNAVSTPUZKNFYGVXFCLTZLWUMXNEWRBTPAGTYVZUEEAKABREPYDKJAXXTXZFVEFMZSCGJGJBTPDVGINRKLLRYMIPMCHECMVUQEKYIZOIRCSPPWJRIVUSXXNYJSZPTHCNOAICNRUWUOBQYWMAQQYEUHOLTCVKOFKSODQDIWRHRMNQGAFBSJBTKZJHSLUWZXHFISJHVALWTDOQP");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("JDGOVBAGUWYSTFGPYOJRKXJPLQKENDFRVYFQBTMPUJXNFMCJAHAASEBPNQXDUNRTRWCOZFVNYBKHQJTEZZOZWYRRNCETRBLXGDVSUOTDHEYWECBLQXZFGOKXIMZIVERVVLDSHDAUSXJCMGJZIAKIPCOKXWHWUBUUALTOWHCNVOMNFTYXHASLQ");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.439745421442;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.204355133269;
    tmp_tmp_tmp_msg_0_0_0.z = 0.788710889702;
    tmp_tmp_tmp_msg_0_0_0.z_units = 207U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.817401159608;
    tmp_tmp_tmp_msg_0_0_0.duration = 232U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.794738233158;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 254U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("QZPUPAYYXTWJRHIFLTWZANEBTUSSIHWRHDXNMNJQOGNZOGWFPBLNQLNFWIACCNRG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Current tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.835439285484;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::SmsRx tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.source.assign("ZXTEWYHLEGMQMMCJDLMBXUJZKKKYPQFWEWLWBJEDUBOTBQEDBFXGTVTCRBHYHWNDCZASEOMDCBPRU");
    const char tmp_tmp_tmp_tmp_msg_0_0_2_0[] = {125, 93, 58, 21, -23, 60, 118, 103, 53, -123, 89, -21, 63, 105, 67, -49, 0, 45, 66, -123, 14, 101, -119, 16, 22, -53, -124, 50, 99, 28, 77, -100, 0, -5, 37, 58, -7, -84, -102, 115, 122, -124, -29, 58, -67, 35, -88, -92, -37, 93, -53, -89, -8, -56, -37, 68, -101, -17, -35, -5, -83, 68, -6, -116, -13, -77, -24, 116, 17, 69, 80, -106, -120, 62, 22, 22, 79, 73, 71, 109, 85, 17, 73, 78, 25, 77, 34, 96, -73, -52, 95, 109, -39, -23, 64, 5, -119, -107, -45, -53, -88, -38, 4, -76, -16, 71, -96, -49, 84, 30, -11, -81, 36, -99, 5, 81, 10, 104, 64, 76, -58, -117, -67, -62, -112, -17, -117, 82, 52, -58, -125, 18, 87, -71, 101, 73, 56, 14, -100, -32, -17, 109, 22, 75, -118, 13, -71, -124, -99, -96, 108, -104, -104, -98, 59, 62, 14, -105, 125, -98, -10, -5, -100, 74, 41, 121, 113, 10, -102, -59, 67, -117, -36, -85, -18, 28, 103, -11, 105};
    tmp_tmp_tmp_msg_0_0_2.data.assign(tmp_tmp_tmp_tmp_msg_0_0_2_0, tmp_tmp_tmp_tmp_msg_0_0_2_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_2_0));
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("NXDYCGAJZRNZHMCUKYQHFEPMTZAARWZAAJOPHQQLFNLHINVOLGJHYDYWSTCMPHKVIJSFGPSROUIZRMNKFGULKVPYIBGINOIYJBBTMMFPQQUPBIVWUUATTZROSDWEWEYDCXXAZJGZHQGSEOEKSEMKJDLTDYKLVDCQUSBREXVXGGHMTMJYTPNSKJYFPWQF");
    tmp_tmp_msg_0_1.dest_man.assign("PNXVTDVIKXWWATMBJLOFHBWPFKUTHNSBMIJSEQFWKVUHRMLZYPVMTFAXVXTQCKDGEIQEIZQSLVNFNQBLESCILUDYCGIZAXWOMWZHNCGGFFCIZRETRAINAVGOHEUGGLYCHBJPTKSOZSYCWLZPWIVRUYQJZHYKJSDYPODHXTQNRNMTBFLPOETAMHKMCRLARJPKZSJLR");
    tmp_tmp_msg_0_1.conditions.assign("IPORICBGCLYUGZCQKZWGRZABELDOYKCVCSDNOUXMKYNLXAMNAMULLXPAUQITRXBJSIWEFPDELSHCASZOHTSSAEVKOGNIQMJV");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Abort tmp_tmp_msg_0_2;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::PlanDBState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.plan_count = 5420U;
    tmp_tmp_msg_0_3.plan_size = 3511825560U;
    tmp_tmp_msg_0_3.change_time = 0.825652654713;
    tmp_tmp_msg_0_3.change_sid = 24436U;
    tmp_tmp_msg_0_3.change_sname.assign("LPLVEYVTJBSHHWFBKTNRUBAIGXBPYNZSLEXQLKYEGNCYKDVYPJDJOXAIVRXCOUAOTGQWFPPOWCKPCFWIHDOBMQTRGSHDUMERUTDBKSLCRGMISUGSHYWZIAFCLQJZTXXIAUTSUKKLLITZAZVQWFHWDQNCFOKXCXNOFRGACZTWMVUEJDOHXPMGZMSDTVZOAMJNDRQZIHHPOPFYQQMZIU");
    const char tmp_tmp_tmp_msg_0_3_0[] = {-83, 105, -60, 35, 114, -94, 111, -16, 102, -45, -118, 112, 33, 99, 59, -119, 15, -47, 117, -125, 123, -57, -113, 4, -78, 102, 7, 37, 2, -15, 70, -53, 25, -115, -122, 18, -56, -35, 122, -117, -31, -79, -104, 112, -60, -102, -106, 13, 22, -56, 17, 31, 109, 82, 116, 44, 124, -34, 0, -6, -99, -34, 80, 4, 55, 1, 113, -111, 80, 115, -49, -126, 113, 11, 45, 26, -43, -83, 121, -116, 81, 72, -38, -72, 72, 49, -14, 26, -34, 1, -29, 3, 16, 121, 76, -74, -108, 109, 94, 53, -125, -16, -91, -22, -66, 118, -97, 89, -88, 6, 100, 98, 11, -33, 11, 74, 87, -109, -43, -6, 111, 110, -62, 42, 32, -55, -46, -85, 32, -75, 121, -116, 117, -111, 112, 66, -66, -79, -73, -102, -74, -56, 25, 44};
    tmp_tmp_msg_0_3.md5.assign(tmp_tmp_tmp_msg_0_3_0, tmp_tmp_tmp_msg_0_3_0 + sizeof(tmp_tmp_tmp_msg_0_3_0));
    IMC::PlanDBInformation tmp_tmp_tmp_msg_0_3_1;
    tmp_tmp_tmp_msg_0_3_1.plan_id.assign("DZWHAMMLSJVXGUBFBMXWCUMQEMOBXOPYKNLBGIUGCBYMHAQVIIJCKIOYKZZXWYSKZDRFCNQSGILLWDZRUVAIIGWRSCEQFZJKORLKLMUAFPPRNTQODHXNITKZPLTANCAFKPQCPAUGHTVRXZTUYVQJBODMVXBDPSPEQRBRLIJONYBXMYSZYPVBCDNHLTDRHOGHOUWYWGFFOWTFSTNNDKGMJVCZVCSHWTXNJEDYJHQUFEHEGFPEAE");
    tmp_tmp_tmp_msg_0_3_1.plan_size = 17616U;
    tmp_tmp_tmp_msg_0_3_1.change_time = 0.933501782346;
    tmp_tmp_tmp_msg_0_3_1.change_sid = 22038U;
    tmp_tmp_tmp_msg_0_3_1.change_sname.assign("GNHMEQUKPTVUPGMQOPUIHVSJNNSKUETOLUYSTGIOEUCQBNWRSRXBRIYCWTNDJPDEDYAGESVWAUDDCYNMCWZZVCSRTOLEEFQLYJYHKKWAMCFYPAOTQPVF");
    const char tmp_tmp_tmp_tmp_msg_0_3_1_0[] = {-122, -77, 125, 36, 47, -42, 102, -35, -75, -9, 78, -104, 63, 58, -31, -91, 16, -90, -62, 73, -15, 37, 61, 69, 41, -7, -98, 42, -70, -63, -66, -51, -72, -58, -10, 95, -2, -87, 79, -113, -41, -68, 29, 79, -36, 71, -18, 126, 124, 122, -63, -44, 100, 30, -71, -46, 115, 69, -32, -76, -55, 91, -66, 42, 80, 83, 107, -4, -72, -85, -28, -89, 23, 44, 1, -125, 30, -101, 4, -4, 43, -63, -93, 98, -93, 92, 46, 31, -75, 126, 21, 29, -83, -106, -92, 72, -72, -33, 97, 25, -83, -55, -43, 73, -105, 3, 0, 71, -57, -57, -20, 90, 125, -124, 117, -72, -85, -49, 124, -17, 26, -63, 14, -88, 16, 54, 35, 60, -54, 47, 100, 84, 43, 98, -125, -35, 108, -33, -92, 124, -69, -29, -108, 75, -7, -61, 32, 1, -24, -116, -88, -107, -107, -84, -26, -71, 96, -80, -10, 16, -29, -82, 10, 111, -93, 70, 2, -24, -68, 35, -121, -2, 63, 85, 75, 118, 91, 117, 51, 107, 63, -111, -77, 29, 50, -77, -7, 52, -54, -33, -27};
    tmp_tmp_tmp_msg_0_3_1.md5.assign(tmp_tmp_tmp_tmp_msg_0_3_1_0, tmp_tmp_tmp_tmp_msg_0_3_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_3_1_0));
    tmp_tmp_msg_0_3.plans_info.push_back(tmp_tmp_tmp_msg_0_3_1);
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
    msg.setTimeStamp(0.033857110023);
    msg.setSource(53690U);
    msg.setSourceEntity(46U);
    msg.setDestination(61513U);
    msg.setDestinationEntity(74U);
    msg.state = 13U;
    msg.plan_id.assign("QCQGITXSXYOZTYAVKJCJCMEZICACCAZRZFRYKKIUFMYGRGCUIEXRRPQKBAYBWOTICXQBYITJLHRGLLAHHVSNFKGNQGDBNFIEADZJUNJSOOZORNVLLGQYTQPBFGJXAVHYTFUKPOWSOKLJNTAWFGPRMUZORHJXSPDHQHGYKBVESLOHFDPDWZUBDOPTDLMIVZ");
    msg.comm_level = 210U;

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
    msg.setTimeStamp(0.524673888746);
    msg.setSource(33615U);
    msg.setSourceEntity(111U);
    msg.setDestination(48617U);
    msg.setDestinationEntity(234U);
    msg.state = 79U;
    msg.plan_id.assign("PHUZBVCLMNTEODHZYFEJTHGTCCRAMZMRZSYAHYNNJGVIDGGUKBIBFYALGESBVSVCRTJNIEARNQSPRVONIDBJIWNKULRPFYPQNHOBXJWDUWMMCOEB");
    msg.comm_level = 14U;

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
    msg.setTimeStamp(0.930466886216);
    msg.setSource(13106U);
    msg.setSourceEntity(93U);
    msg.setDestination(35269U);
    msg.setDestinationEntity(107U);
    msg.state = 150U;
    msg.plan_id.assign("SSQXJHUTMHKVLORFNKEZYJUHRZUCGAVETYIAKDYKWFUYRIMLFEBZUCEXQCJKGGSLZUKXIXEZELWNEUSRBTNAZHBFHXTMOLMJLTKOCYHGIOWTOGXSYDMCWAXSVNBFPPWANMIKEQDHBILQICIFIDVSJWHDZZJFVMRFLBGEWAMMPRPOXBKPTTCJFOAPOORHCIEGTNRDNNQDBFSQUJXVCUVYAAKPGJTVJUVWMCY");
    msg.comm_level = 0U;

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
    msg.setTimeStamp(0.742894367179);
    msg.setSource(8961U);
    msg.setSourceEntity(189U);
    msg.setDestination(2741U);
    msg.setDestinationEntity(234U);
    msg.type = 252U;
    msg.op = 201U;
    msg.request_id = 24055U;
    msg.plan_id.assign("EONGVZYLRWXJMIKTABNWOGTXLLJUKWUVBPNHVWBCLSUDIYJJMWFRPOVOMYKAYXNGBFFRQQATEICJOLEYMGRZGLCVHNMSUNEMTTSJZCIBNWYBLYFUPRCCHANQJICXTOVXKEDVDJUSGFCAUQUFKRTAGHSNBRZPKJID");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.919373440608;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PLBNQWNHNAGUUQARKMWCCUIDKNXESTGQACJQRYZGTILQGKBBHXLGEFHIJFVSCCETEKFDMSQWFHSGFBDZZVGOQDVJZNETIXCMYPTBOOQETMXYV");

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
    msg.setTimeStamp(0.471871823846);
    msg.setSource(48540U);
    msg.setSourceEntity(115U);
    msg.setDestination(35218U);
    msg.setDestinationEntity(206U);
    msg.type = 63U;
    msg.op = 27U;
    msg.request_id = 63649U;
    msg.plan_id.assign("VIHEHJAIQSSRZSIBEWHXDTBICFFSLUINKMCTTEBMEBQJEABSOOMCEOXNEJQGUYRHVCRSKXDZUOBNVIYZKDYAMHLFBTCVMAGHGCVVYTIWVIKJPUPDRUZZLTAUZZGPNGQHUYCEVVPYKPRVQNFALHJXJYQYRGWPUOLTMWILJXFIXDPNAEJRFAOPKOTMCGKWKMWDPLLWPCO");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 28591U;
    tmp_msg_0.status = 101U;
    tmp_msg_0.text.assign("SITDQQDWEEMSAMJBUIRJRQFGYGSWEAZTOOEZKOFYEKSEUPLRIZHRXNEBJZVGX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PTSRRNODZMVLGOTRALARVMQVMFYETRPALQVYMILLPIIBMICRRJNUUW");

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
    msg.setTimeStamp(0.541735239808);
    msg.setSource(28354U);
    msg.setSourceEntity(130U);
    msg.setDestination(17020U);
    msg.setDestinationEntity(64U);
    msg.type = 195U;
    msg.op = 47U;
    msg.request_id = 38603U;
    msg.plan_id.assign("TRRCXPNOUCSELXXEWUG");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.14198665491;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RFMBKVUQSEITQUTKLFDXODIRMGGFAZAHQEBPJXLDHYPKWEQRVUDCPVJLDGETTZIDHJIXYAJCINCNVLWRCKJURRHCHMUOF");

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
    msg.setTimeStamp(0.512911923579);
    msg.setSource(35758U);
    msg.setSourceEntity(175U);
    msg.setDestination(19184U);
    msg.setDestinationEntity(80U);
    msg.plan_count = 32659U;
    msg.plan_size = 3735271108U;
    msg.change_time = 0.943706587632;
    msg.change_sid = 31422U;
    msg.change_sname.assign("PTGVOTRFTHRTYNNKHXNRXQEMKCACCZJWHVLJKDWVV");
    const char tmp_msg_0[] = {0, 22, 21, 79, 105, -74, -87, -114, -96, 112, -104, 58, -89, -97, -87, 83, 72, 83, -62, 79, -75, 124, 109, 52, -68, -116, 45, -105, -120, -108, -100, 76, 21, -78, 112, 91, -122, -9, -96, 61, -67, -62, 60, -84, -71, 77, 119, 22, -29, -63, 13, 60, -105, 79, 43, 39, -112, 6, -45, 103, -4, -55, -121, 98, 65, 7, -106, 81, -8, -18, -18, -51, -79, 100, -34, -124, -30, -117, -44, -76, 102, -103, 64, 66, 4, 20};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KMFTIBRCPFHXZHUTTBNVCXPHXQGTDXBFLKPJCOIKEEBDVHBWVTNLDPQVWNNWYHMVJSOAIOJZCWQXZWRNUQTDQDZATNM");
    tmp_msg_1.plan_size = 28510U;
    tmp_msg_1.change_time = 0.561756050312;
    tmp_msg_1.change_sid = 29508U;
    tmp_msg_1.change_sname.assign("TUFZNLYGHYHQHPMVFLSISDNYUGCYSQOXOKIFCHDJTDXPDGKDP");
    const char tmp_tmp_msg_1_0[] = {-79, 58, 50, -97, -68, -69, -37, 84, -51, 49, 103, -67, -39, 40, -3, 68, -65, 23, -101, 62, -58, 84, -124, -70, 6, -73, 83, 33, -109, -73, -25, -5, -24, -118, -124, -59, -41, 78, 47, -93, 57};
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
    msg.setTimeStamp(0.543657307132);
    msg.setSource(33657U);
    msg.setSourceEntity(28U);
    msg.setDestination(61881U);
    msg.setDestinationEntity(185U);
    msg.plan_count = 12889U;
    msg.plan_size = 628042803U;
    msg.change_time = 0.825254278621;
    msg.change_sid = 37685U;
    msg.change_sname.assign("TIHAFLCJNRNCUPAIZHAQSJPELLUHBGGOGEUZBOUYIBYGFRSIDKTGEVRCXQVJIHMKSURGDDSBKKXX");
    const char tmp_msg_0[] = {17, -48, -60, 46, 121, 102, -70, 42, 111, -125, -114, 2, 114, -103, -14, 15, 105, 12, -102, 85, 80, 93, -95, 29, 84, 77, -27, 26, 26, -97, 108, 62, -99, 94, 112, -65, -91, 63, 103, -102, -115, -109, -78, -75, -117, 20, 15, 125, -60, -77, 108, 30, -3, 106, -32, -9, 42, 67, -75, 56, -34, -17, -69, 121, 8, 108, 51, -94, 115, 59, -19, -42, 110, -20, 40, 13, 72, -7, -93, -99, -114, -8, 109, 60, -68, -87, -31, -35, -82, 88, -86, -107, 116, 16, -6, 93, 65, 49, -80, 41, -67, 94, 6, -118, -118, 115, -74, -45, 50, 54, -119, 70, 46, -23, 25, -99, -61, -17, 85, -7, -98, -11, -58, -9, -81, 65, -46, -94, 3, 107, 30, -92, 12, 72, -123, 28, 60, 52, -128, 61, -28, -55, -53, -123, -72, -84, 102, 39, 91, 11, -91, -20, 15, 3, -30, -6, -40, 68, 22, -122, 40, -79, -79, -54, 62, 80, -80, 84, 34, -106, -3, 125};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WKWVCASDOKNJVWVBFVGMGTQJFXLBE");
    tmp_msg_1.plan_size = 22744U;
    tmp_msg_1.change_time = 0.324692895856;
    tmp_msg_1.change_sid = 28803U;
    tmp_msg_1.change_sname.assign("PFCJYICGVFDAWFFQCBAANKNTUTZYTPQJKHNRIOFDEOOVMBMHJCIFVOJ");
    const char tmp_tmp_msg_1_0[] = {-91, -42, -20, -109, 47, 52, 126, -106, -60, 94, 83, 113, -33, 69, 124, 102, -91, -11, -127, 72, -51, 122, 94, -114, -70, -10, -98, -6, 94, -120, 71, 35, 4, 14, 99, 85, 33, 85, -73, -88, -19, 12, -23, -3, -31, 125, 9, -107, -45, 56, 12, -85, -24, -16, 25, 12, 14, 99, 34, 30, -119, 83, -37, -46, -36, -128, 49, 12, 48, -128, 37, -39, -72, 79, 9, 54, 65, 28, -18, 43, 112, -16, -46, -40, -18, 14, -21, -54, 49, 88, 19, 15, 115, -85, -101, 50, -66, 113, 78, -62, -97, -62, -1, -66, -113, -117, 75, -87, 58, -121, -108, -35, 45, -102, 72, 106, 2, -14, 11, 10, 104, 62, 15, 116, 31, 70, -42, 81, -59, 90, 23, -125, 0, -6, 7, -53, -125, -121, -107, -39, 34, 63, 103, 100, 12, -64, -123, 3, -108, 59, 41, -115, -22, -81, -1, 61, -103, -116, 123, -102, 37, 83, 87, 27, 81, 115, -110, 26, 57, 60, -12, 116, 75, 0, -82, -112, 119, -122, 68, -100, -52, -83, -73, -31, -4, 0, -109, 125, -54, -52, 72, 22, 3, 76, -124, -62, -73, -121, 89, 4, -10};
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
    msg.setTimeStamp(0.318589595966);
    msg.setSource(5392U);
    msg.setSourceEntity(247U);
    msg.setDestination(40446U);
    msg.setDestinationEntity(233U);
    msg.plan_count = 44456U;
    msg.plan_size = 2273318892U;
    msg.change_time = 0.210641460037;
    msg.change_sid = 26538U;
    msg.change_sname.assign("UBLOJQIUEJQWBZGRGGPYYUCEMIWKFBJLPXLXGPNCRREXAMDDUKLIYAFMNAFAZPPLQWNQCQMBUKUKKGQFYULTHZDEXTRXHWHKHFFIODVVJNTDMHSMWZQOPUILNTOSVJCEWJGSZTFJXHVJEIMO");
    const char tmp_msg_0[] = {-52, -59, 23, 100, 99, 124, 53, -128, -64, -108, -47, -104, 45, 11, -103, 31, 51, 116};
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
    msg.setTimeStamp(0.181846335566);
    msg.setSource(53754U);
    msg.setSourceEntity(241U);
    msg.setDestination(8122U);
    msg.setDestinationEntity(191U);
    msg.plan_id.assign("QZIFZVEXAZPMXIPRMXRKKGCRAGJEGFKDAXZWONEOCDBUVRFQUGSRHFLYLZWWINUKZYDHLVTNIOESVFQHTOYKCBPWKNMGXABIUXMULJLFFWSDEVZJIEEXPSBUTQFBPVYTQYTHPNHGQJMHYROVDBYHSPSEGIATEKMCOAUSOGBJIDTYNVYDZWLRCCTUOUWLAGSJCCNSQPENJIBILPTVMLARDTNW");
    msg.plan_size = 50969U;
    msg.change_time = 0.314277564269;
    msg.change_sid = 50907U;
    msg.change_sname.assign("FCJOWUQXSAMIBMCGBGUHBBVVYWRRQYFIXCFJGRSYZOPKSLC");
    const char tmp_msg_0[] = {125, -115, 107, 120, 45, -18, -56, 111, -125, 7, -43, 97, -22, 92, -95, 105, 122, -13, -88, 32, -127, 99, 59, -74, 122, 50, 87, -69, -40, -99, -48, -111, -90, 35, -101, -56, -86, 40, 23, 30, -68, -10, 76, -13, 104, 86, -56, 52, -24, -40, 7, -36, -93, 71, -101, 39, 33, 43, 42, 86, 17, 121, 119, -32, -116, 98, 106, 90, 35, -85, 74, 111, -73, -37, -118, -115, -113, 94, 27, -99, 123, -99, 59, 20, -18, 21, 32, 123, 51, -98, -99, 26, 8, -121, -71, -86, 60, -30, 36, 58, -25, 110, -36, 39, -29, 18, -88, 3, -121, -73, 11, 82, -38, 19, -5, -122, -104, -57, -116, -46, -55, 111, 40, -85, -30, 102, 88, -110, 22, -120, 18, 91, -76, 103, -25, 29, 44, 1, -18, -46, 118, -98, 29, -80, 42, -36, -86, -66, -110, 94, -118, 9, -122, -101, 97, 105, 68, -80, -8, -26, 26, -86, -66, 55, 111, 83, -21, 104, 73, 25, -98, 108, 67, -119, -27, 1, 115, -49, 16, -61, 49, -32, 82, 58, 26, -43, -70, 88, -83, -83, -67, -92, -105, -38, 57, -43, 86, -82, 75, -107, 25, 3, 115, 123, 100, 106, -62, -106, 56, -34, -75, -92, -68, -97, -63, -50, 4};
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
    msg.setTimeStamp(0.884598515592);
    msg.setSource(53354U);
    msg.setSourceEntity(231U);
    msg.setDestination(38754U);
    msg.setDestinationEntity(46U);
    msg.plan_id.assign("DKWCUIHVSQSCDBTZQAPHIRGTMIIWKZNNOGEEPZKENHIYTCBYQBGXSFBWTUYTJZTKIOFAPXQRPNBJFBESQVADTXTUVHVISJHYJEAJOMNBOMZLHLDLFCAFZJCUXMURPFGVMJMBFR");
    msg.plan_size = 12906U;
    msg.change_time = 0.831849414048;
    msg.change_sid = 53979U;
    msg.change_sname.assign("JOXKZMDVBYINTGNVMVIDHKEUXFWOAVR");
    const char tmp_msg_0[] = {-2, 88, -67, 87, -11, -75, -64, -97, -75, -114, 103, -61, 91, 10, 108, 15, 115, -36, -38, 104, -21, 22, 77, 34, -108, 105, 100, -7, -49, 77, 77, 48, -68, -111, -95, -39, -73, -127, 93, -33, 19, -10, 108, -20, -22, 20, 109, 78, 83, 82, 43, 22, -101, -91, -32, -44, 20, -108, 99, 58, -2, 85, -59, 13, 19, 66, 69, -127, -51, -78, 75, 86, 21, -88, -69, 44, 117, 21, -2, 96, -123, 125, 116, -42, -30, -128, 115, 76, 5, 101, -96, 68, 23, 26, -20, 85, 45, -18, 67, -108, 53, 98, 22, 103, 103, -61, 41, 107, -120, -99};
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
    msg.setTimeStamp(0.307549442772);
    msg.setSource(13730U);
    msg.setSourceEntity(208U);
    msg.setDestination(40703U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("NYSMTZEJTCBGYCHFEVLKDDIOJWNFNKGFMEJRTYQDTCGLSOUPSVZXABBOURBUWUAJ");
    msg.plan_size = 54011U;
    msg.change_time = 0.35926807207;
    msg.change_sid = 2059U;
    msg.change_sname.assign("IMJPTHLYXOZLZSFAHRRPZDTYVASQVWKJTDEFKOQMKIEHMGCZEFJTTUGNJNCUCGUELTZPJXOCVNXOSUMWPQETRPHIHXQBZNKODXHSJYRVUISDWXFRWJMBGAKRGUQSWXAUQPSXZMBIFOIBNQDTYYXOMNPIIHLGPWIEDIVSREOHQCYDKWHWWRJNBQOSVMNABREVLQVJBJUBTWEGXYZACFKDGSVLAEGVACHFYZDLYG");
    const char tmp_msg_0[] = {73, -16, -17, -116, 78, 45, -55, 21, -54, -126, -29, -77, -91, 77, -125, -7, 10, 38, 115, 78, 44, -113, 16, 28, 31, 103, -48, 60, -91, -27, -7, 52, -13, 15, -2, 46, -3, -104, -119, 14, 32, -112, -6, -103, -71, -115, -27, -105, 37, 23, 20, -75, 0, -63, 4, 31, -30, -70, 124, -66, -24, 34, 42, -40, -106, 94, 123, 39, -9, 31, -27, 47, 27, -3, 53, 2, -89, -4, -42, 3, 33, -63, 30, 87, -71, 20, -121, -39, 21, -41, -29, 17, 78, -12, -117, 92, -118, 29, -93, 55, 4, 9, 75, 34, 58, -60, 87, 77, -127, -41, 35, -82, -38, -62, 110, 105, -52, 24, -111, 76, 42, -114, 114, 86, -9, 6, 38, -45, -87, -93, 40, 93, 83, -55, 102, 122, -98, -3, -86, -36, 118, -33, -40, -99, 28, 24, -82, 23, 114, -59, -38};
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
    msg.setTimeStamp(0.491472889825);
    msg.setSource(23073U);
    msg.setSourceEntity(164U);
    msg.setDestination(30213U);
    msg.setDestinationEntity(91U);
    msg.type = 135U;
    msg.op = 168U;
    msg.request_id = 11357U;
    msg.plan_id.assign("ANPKCWINZZIWAGBXODOTAWYQFQVBRMRTEZYPIVJZROB");
    msg.flags = 61356U;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.215841641204;
    tmp_msg_0.lon = 0.134239687149;
    tmp_msg_0.height = 0.724736512889;
    tmp_msg_0.x = 0.0732917903261;
    tmp_msg_0.y = 0.990386399968;
    tmp_msg_0.z = 0.129290052168;
    tmp_msg_0.phi = 0.115933882983;
    tmp_msg_0.theta = 0.352665251303;
    tmp_msg_0.psi = 0.206894394419;
    tmp_msg_0.u = 0.928341247246;
    tmp_msg_0.v = 0.79347879452;
    tmp_msg_0.w = 0.49360322127;
    tmp_msg_0.p = 0.304083118009;
    tmp_msg_0.q = 0.852352714183;
    tmp_msg_0.r = 0.763088394066;
    tmp_msg_0.svx = 0.70215795825;
    tmp_msg_0.svy = 0.929872296946;
    tmp_msg_0.svz = 0.924494447541;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QMKEVFJDTIGCQCNWMVJMGASGEPDYFRLLXHVNFGKZZRHDBLQLXCIOTUGSKJESXYWZRYFUPCNDISNEDLEYOFYOTYFJTSAMNDOYKGEZGUXQESUTMJXFJOIXOGXMLJKSTNGECIWRLOLUHZKRZIYCUTVVQZDZZFNCCEANH");

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
    msg.setTimeStamp(0.858686657264);
    msg.setSource(227U);
    msg.setSourceEntity(189U);
    msg.setDestination(60717U);
    msg.setDestinationEntity(178U);
    msg.type = 156U;
    msg.op = 156U;
    msg.request_id = 41576U;
    msg.plan_id.assign("EOJAPTRCHPJCZSOVWYFYGJDISZKWDMJUIMEHAXTFHWSQNLYPKMQERJFZOOUSXXVSIKGJEDRAWQAKTKNNNSVXWHALJDUMHEKGOKVUDEGDUVJPFZIBDBCFBKUKSZQIUPBMJWOVQHRMPRFZRUXVMCTGLAYLGLYQMQRCCECXFXISATXHLTYQUCWYTVBQZJEARMHFDUCKNZEBYTYBLPBCOXOTFVWIXAOILNZ");
    msg.flags = 13345U;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 51U;
    tmp_msg_0.eta = 42698U;
    tmp_msg_0.info.assign("KXDGAREZFJUJBXHNWUCNAUVSYHDCLIEALKNHYYEGXTRKNHSNKGLMSLIPPPQIASDFYAJFLGODPJWRVTDHXKMSLLLFGXSPUHZMOYHKGYIMSIBOMVBQPKCWJOEXCELMBX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BXFLSHQNPKILQIUWOQQCWCHNEEEMABZSLXPBTDSUGGFDHFDNVLYQGSQLBRUMWTCBNBSELVXIVKCRLXILKG");

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
    msg.setTimeStamp(0.0162743212672);
    msg.setSource(25352U);
    msg.setSourceEntity(250U);
    msg.setDestination(58896U);
    msg.setDestinationEntity(129U);
    msg.type = 49U;
    msg.op = 132U;
    msg.request_id = 55922U;
    msg.plan_id.assign("FYEZCEGKIASXELAHEZBGMHRNCCPMWHKZIBDMXMBFFJJLDLTGVYVIHOXDOOPHRIVQKKWUQSUZPJ");
    msg.flags = 9588U;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 93U;
    tmp_msg_0.zoom = 93U;
    tmp_msg_0.action = 25U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PIHIOFLNFHDQCICADRED");

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
    msg.setTimeStamp(0.414548503185);
    msg.setSource(40020U);
    msg.setSourceEntity(232U);
    msg.setDestination(11949U);
    msg.setDestinationEntity(158U);
    msg.state = 134U;
    msg.plan_id.assign("DBWRXGKDYZDVGUHZZGYSZGWKOTVLBCOMVQOEWVCSSRZYPQUNPINPSEFQWONTLCXMFNFELJXLJHPBCYDGLNSIZZVSOSFJUOHKMUCIAQAPVBHKXVF");
    msg.plan_eta = -1055287507;
    msg.plan_progress = 0.577119040275;
    msg.man_id.assign("DFQIWSUIESIHVFUTJOSDDBSBKDFFATCVKAGKFKWEWDTYBQLYIUMPG");
    msg.man_type = 43168U;
    msg.man_eta = 1552095870;
    msg.last_outcome = 58U;

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
    msg.setTimeStamp(0.501151203066);
    msg.setSource(28581U);
    msg.setSourceEntity(175U);
    msg.setDestination(33762U);
    msg.setDestinationEntity(78U);
    msg.state = 110U;
    msg.plan_id.assign("PJHJPONUMJWRLGHUEGZICINTFAJBELURKYGBBUYCDYPZBJQOPPE");
    msg.plan_eta = -1543924037;
    msg.plan_progress = 0.491779624488;
    msg.man_id.assign("ZTBPTLIQBGCTJWLQLJILSJXQPMBNQOZHGXAZGAUMVQOUVKSGOIRPMDTYDKWBAXGSRDIQHCJIKSCNAHJDZNVCKRBEROAJUPNXXFEYFAKTWZFHCLHHWDYOSEZKJMZWMMXLKUZSHVUHVGRRFLBHAKGGMSQFCDNWTOWYSXUEP");
    msg.man_type = 2777U;
    msg.man_eta = 779290735;
    msg.last_outcome = 249U;

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
    msg.setTimeStamp(0.538294113746);
    msg.setSource(20085U);
    msg.setSourceEntity(38U);
    msg.setDestination(11812U);
    msg.setDestinationEntity(216U);
    msg.state = 79U;
    msg.plan_id.assign("DZNATMMIWXCBAGLGSYJOTVTQLUTINGFRARPQBRGIXVAZBSRWAOIJHECLIJMRFLQPPBWDNEYXEWVYGUYXELAVUKVHQZJCERZWXPEXSKWMOVYJZAKJMNIBDQRIBVXBUFWVFTITDL");
    msg.plan_eta = 698781333;
    msg.plan_progress = 0.00988698778639;
    msg.man_id.assign("ZACNRNDHNXLECDNJNIOYYAATMWWOQTYYRNMBTLMONGPYJJEALDIIMPEOKFJHWAPVIHGRWASWRJZALZNSJULCUIWCZTXZVSMUZRDBPIKUKHSZBXEQAPVKXUGEHDFWOQLCTOJCEWBQVXFMTDGQYMUCEKUTCHTGVSAQILQVHBSFGRYMPOPRXNLUEZJKKKVLVFQCPPHGEJKYGXROBPBSEDDTZLCJSUF");
    msg.man_type = 62381U;
    msg.man_eta = -1488781340;
    msg.last_outcome = 47U;

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
    msg.setTimeStamp(0.0989356911464);
    msg.setSource(7420U);
    msg.setSourceEntity(115U);
    msg.setDestination(37351U);
    msg.setDestinationEntity(251U);
    msg.name.assign("ZDJHYBKQGDIOSDMKTHRMZDNESEJBWSXZTKLBTKFAUQMSFGCKRWUWVXUAUCFRYICFPQRJQXYTNUOBJGKIZZJXQEJISDKMFXSEADXGPVOWPWQQRLPYLISDGSDSMWAPEVNTJUWRHNRQPACHBMVIMUGMYIIHDLGJIYEFRXHCNLS");
    msg.value.assign("VMHNPNZHKAZSLEUDKRIMJRYCNKIJZTMAUGJWXVEJATEXDUWHQBTTUCPKJVTOJJOTNBXXUGKLVDIWWSSLPYYEYRLTWMGHYEMDOSQDQDOBGCQCVUNFOZFEQQLQTRFJFCPBHZFSGRJYKGYAWAEPFYUUAFQQHVAIXCSIPXCNZCHNVSMGIOUBRXZ");
    msg.type = 34U;
    msg.access = 3U;

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
    msg.setTimeStamp(0.8196745568);
    msg.setSource(61192U);
    msg.setSourceEntity(179U);
    msg.setDestination(60417U);
    msg.setDestinationEntity(73U);
    msg.name.assign("HDSUYYZXRPMPVJJBZSJLIFQXNMSEADPHCHKZEOLTAONX");
    msg.value.assign("EARUGHOGGOUJVGXPPSMOYIWLQXECMBEKWYLEPDELXAVXZRGNKIKOGSQDHETAKGIQPJRKILRYLYMZJFQFZZMHBIAAZTRPDURTPOSKWFKEFZCVXHMDPZTVFLYYVINOFDDDAJLWGCLZJYCXQCCBTHSCSYXNEWQMZNBAARSAZDJDVKVGIRWKTBUJNPHFPRNFVOJWCTUGYQNHBKISFJWY");
    msg.type = 187U;
    msg.access = 136U;

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
    msg.setTimeStamp(0.13628248712);
    msg.setSource(57772U);
    msg.setSourceEntity(145U);
    msg.setDestination(39104U);
    msg.setDestinationEntity(192U);
    msg.name.assign("HDYHLAKPFDLMJKJOFKNDMTIZOQWWHQEJXKGBQKYGPSQXFLVUXCSONMVYQCM");
    msg.value.assign("ORPBXQOHEYGGNUCSMDWEOFDFFQSYZXHULEOVAYHCJNABTNOYNVMQCMNFIHUIJMHGLJQUIRSGAPMKBHRIWMYYNIVERLXDHZZSMWVCRQEVACPVXKGXDSIZJZJTZTCQVXODRRFLELDJAGJAUBZUCPNJTVMYWBDBMSWEOVZWJDFBCBKXITTMNLEPZQBONDIAOXQSWQG");
    msg.type = 110U;
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
    msg.setTimeStamp(0.961039828424);
    msg.setSource(31810U);
    msg.setSourceEntity(123U);
    msg.setDestination(24113U);
    msg.setDestinationEntity(104U);
    msg.cmd = 4U;
    msg.op = 29U;
    msg.plan_id.assign("TMMQZXJPSDYFOEDWNBKHQIBVAVWVIFTHQOBCDDFJRBMKUFFDNRPSUYZZFWDGQXZOHDWJEEAQGURGCJWSTIXULPASDGSAHNLNXHNKEGZQETMLXBOPCSIJCNWVKZKSDHYHAJZULGFGBMTCPTNRMKHEOBBUTSPRAVVPEAINWYCQTOGHYJFIVIQNYTHPGXWGULOKAUYBZMKVQEFOKLCRQCCRMJEZXNRLXLJULWYABMOKJTPXLSYWYFASURV");
    msg.params.assign("EFXBHRWKDIZHSUZLEUXWHUTDLIKKVEYVNSHLRCODFTEGONQBXDIYACEXQDZSNFQPMMPSMFXCMFLZGKPVTOTWYREIUJGZETLRWRJWBQUXMOYPUGTAGDPLAYPWMXKRNGKQOOQJAC");

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
    msg.setTimeStamp(0.166659800479);
    msg.setSource(36873U);
    msg.setSourceEntity(15U);
    msg.setDestination(61491U);
    msg.setDestinationEntity(153U);
    msg.cmd = 76U;
    msg.op = 254U;
    msg.plan_id.assign("YZQSVXJWLXWGHHDNAMOCNHSSUJVCITID");
    msg.params.assign("KIAGBRYWKRYPDXIICPAVTGRQQELXVIUAUZMJSDLNTOFFHTFBQGWKQMOWPINZMMFDXDFDHGEUQ");

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
    msg.setTimeStamp(0.0557090453561);
    msg.setSource(29641U);
    msg.setSourceEntity(14U);
    msg.setDestination(26046U);
    msg.setDestinationEntity(113U);
    msg.cmd = 253U;
    msg.op = 216U;
    msg.plan_id.assign("DZXWLYSDJNSGXTFJWDKSQEOPRKBBQMAYU");
    msg.params.assign("IVZRULZJVBOTHEIWBOXSNPEPOGPKAWPAIJFOIXMZYIYXGDJC");

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
    msg.setTimeStamp(0.983946794324);
    msg.setSource(22293U);
    msg.setSourceEntity(45U);
    msg.setDestination(54911U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.914084061126;
    msg.lon = 0.21233467234;
    msg.depth = 0.483277288866;
    msg.roll = 0.824863180268;
    msg.pitch = 0.110629364962;
    msg.yaw = 0.368309283823;
    msg.rcp_time = 0.791377164572;
    msg.sid.assign("SXSKOOUVPNZGSZZGPAIGTTCXDEANMYEDOGNUYXYZSGRBQESOHGLTXQYIRKHPSQPULKIUUFFZYLNFG");
    msg.s_type = 1U;

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
    msg.setTimeStamp(0.630694089501);
    msg.setSource(52431U);
    msg.setSourceEntity(144U);
    msg.setDestination(24016U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.629104567764;
    msg.lon = 0.582159939753;
    msg.depth = 0.784007355253;
    msg.roll = 0.375945377865;
    msg.pitch = 0.722860491913;
    msg.yaw = 0.343121760977;
    msg.rcp_time = 0.823575262964;
    msg.sid.assign("JRZVWFSTUFNXPHDJDHFIARVJNGZIDCYTRPVEJBAQSGEEDMIXYQRBKYTGVHZNZ");
    msg.s_type = 139U;

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
    msg.setTimeStamp(0.552730606822);
    msg.setSource(36100U);
    msg.setSourceEntity(42U);
    msg.setDestination(4205U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.818090486782;
    msg.lon = 0.389479904213;
    msg.depth = 0.276682790473;
    msg.roll = 0.749267714798;
    msg.pitch = 0.595895007536;
    msg.yaw = 0.911272791394;
    msg.rcp_time = 0.163850168327;
    msg.sid.assign("KRCHSGXXSDXLDYLBPOVJOTMXPRAMQKKEKIZWTLIPJWRNXFENZCBSVKFHMQASAZSEHIIZZHBSTKJXQFRHVRWLVRUMGWOONQVBGFYGMAPYDASBMBUOWFBWAFYECGUUDKGIUQHMFTYVGXZJEJUNLTDYPXUEEETQNDFDAJKONUFAJFYQUAOHCJMGLSBRKPUGGDZQBVCZEPXQSHWJIIKZOIROZT");
    msg.s_type = 102U;

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
    msg.setTimeStamp(0.100541957714);
    msg.setSource(19397U);
    msg.setSourceEntity(62U);
    msg.setDestination(4245U);
    msg.setDestinationEntity(250U);
    msg.id.assign("AYVJZEDFGNRGLLSZTGLTBYJVQDHJHHNTNVYTSRAOBZWBJTPRFTRQYHSDGUUGUKOMGUOUKVAQLKQJNPXMISMSFJVIFKTYXHWWDYZVC");
    msg.sensor_class.assign("IWABXTNCTPJENQDMSZWBHPAUWVEQMXQPKEOOIZBKHKNDTUGYYRBSOIADVEYUSURVRRLTFEYWSSJCFBDKB");
    msg.lat = 0.156021376523;
    msg.lon = 0.188676209292;
    msg.alt = 0.801322863903;
    msg.heading = 0.837303583571;
    msg.data.assign("XXOPCZCOQZQFPQCZYDRIKQRMLIXUUYQMAWGANLUQTXSVTNGPBSIWEEGWQIMVKWZOYHWTTAFVCMEWDBWARHENBOKZYGKDEHGHSLSGQUESJDCDGDJZVSJAHVBBSTTPGV");

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
    msg.setTimeStamp(0.923278919645);
    msg.setSource(30536U);
    msg.setSourceEntity(122U);
    msg.setDestination(4907U);
    msg.setDestinationEntity(177U);
    msg.id.assign("AXVVLDFJOKYOKFYKEARIFFWHEBLZKISNOUDNTLXBQXWYSPZSZRUBWNCCZNFOIYNPMAFOJRBGARMPPIELLKPEMOLTGOECDDFMKYROIYXVDKVNRYPQCEWJRYRUYJJPMHPUSJGBOHZSKNMVQIRGVAGUXCOHTHWWTSZTUVTAGMHQLBBCEQZVDXSYWUPCAHKVNJSBJQTGLLIQSIWKJAUCFLH");
    msg.sensor_class.assign("LVPWQVKZWLXJSAXZXRXHSRPAORNPIGYCTLJUIEFDRTMNLBPYDNFXIONCGETPFEFLEREYUQVXIKAMCPQMQDZAAPXWZIDXYVDHOSFBLUVFDPQEFYNDIWWNQWPQMMKEYWUGHTUIQKLSHNTTFUDSXKJLKMBSHBFUQDBJRAUGTSMFKWCMOQCIGXYBSBGUAVEUHKRTTHANCSZLHCYCIBVZGOMGECGDOJJHRKGRRYJPLMTZABCEOAKISOJVNYJZO");
    msg.lat = 0.857054944466;
    msg.lon = 0.379802032211;
    msg.alt = 0.503405078423;
    msg.heading = 0.954050396323;
    msg.data.assign("VSBIJYPNADGKQRMHEAGPRWAXOHNKOVMGFWEOCMIFPZHBTPAWKXABKPEAXJGIEHBKBPUUWATJKCULVULYAMYSDTGNUYZNSRJXCXLE");

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
    msg.setTimeStamp(0.0964815985681);
    msg.setSource(28111U);
    msg.setSourceEntity(157U);
    msg.setDestination(61785U);
    msg.setDestinationEntity(174U);
    msg.id.assign("SXMGHUAYZUQQIBUBQWJVDIANBYIKNPUTNNAFKQHZTLMTSXOIWTLQHZOMELXYLRMTJTDCXCPDWABKWIAZWCLHRTK");
    msg.sensor_class.assign("JYVCFWMPSYMYMAZQCHRBLDBHWNPK");
    msg.lat = 0.2537010533;
    msg.lon = 0.397542738025;
    msg.alt = 0.78475386544;
    msg.heading = 0.00400765195405;
    msg.data.assign("DCDAHPBLIGCUZICPWOXFQIEAHIIPMTPL");

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
    msg.setTimeStamp(0.636442333522);
    msg.setSource(39562U);
    msg.setSourceEntity(86U);
    msg.setDestination(62103U);
    msg.setDestinationEntity(83U);
    msg.id.assign("NETOYMWTZCCKQYNMOEXGDSZMYNDUPCQBNYWRVMTFHVNDSTNZTYIKTVSXLDTRIILEIZNRFCYH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MNGQITOVXDHPUIHRYEZGRWVAQJZJDLKBY");
    tmp_msg_0.feature_type = 169U;
    tmp_msg_0.rgb_red = 210U;
    tmp_msg_0.rgb_green = 34U;
    tmp_msg_0.rgb_blue = 99U;
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
    msg.setTimeStamp(0.782111569242);
    msg.setSource(62222U);
    msg.setSourceEntity(143U);
    msg.setDestination(41702U);
    msg.setDestinationEntity(26U);
    msg.id.assign("HDPLIOFGLLQNUHTBDCBGVVMMAWNORVVQYSELIDNHXDWAFCFWSTWRIJPSZWILTAUQYEUXWFGARTQBJKYEQKXTJRORVHF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CJNVHKFJTNYGWYFTFMTQDKEUWBXKSPARWYVGPPGIAVDVUZEFYVEIIBBECLWYQFZMWNNKMXOOKXOETUFIIDUWSNJZMZDA");
    tmp_msg_0.feature_type = 132U;
    tmp_msg_0.rgb_red = 179U;
    tmp_msg_0.rgb_green = 232U;
    tmp_msg_0.rgb_blue = 13U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.109699793809;
    tmp_tmp_msg_0_0.lon = 0.57546443078;
    tmp_tmp_msg_0_0.alt = 0.480520452952;
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
    msg.setTimeStamp(0.734256764822);
    msg.setSource(62815U);
    msg.setSourceEntity(154U);
    msg.setDestination(44490U);
    msg.setDestinationEntity(231U);
    msg.id.assign("KVXSFHCXHJDWXRHTWCODLKRBIFLFVTRVDEREYPQRDEYEWS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("GJSNTOAUWHAJTDRLESZCWBSCNGFKYKFVDSXBRBRMVAVYWOEANZLSFDLPMGFDSYMNTXBYHXIOHPPNFZLKDAUOVLGKWYANBUDHJGDEXAACZGWCOJVTJXUBQVOWRETPFRIOEWQJKQYOKIPBFXZQQQHVYCXHOGFIGNEPESZXZCMYNJBMINIQHCMHLVXPXNTJZWIKKBHAVUC");
    tmp_msg_0.feature_type = 6U;
    tmp_msg_0.rgb_red = 61U;
    tmp_msg_0.rgb_green = 74U;
    tmp_msg_0.rgb_blue = 62U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.34279835844;
    tmp_tmp_msg_0_0.lon = 0.921054912448;
    tmp_tmp_msg_0_0.alt = 0.546891527503;
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
    msg.setTimeStamp(0.174770452617);
    msg.setSource(2402U);
    msg.setSourceEntity(40U);
    msg.setDestination(17413U);
    msg.setDestinationEntity(2U);
    msg.id.assign("OXXJFVMEWLBMEDAYPKHVFRCFOYBKITKWETVYLZJREGDBGAWCZAHGSOCGCQYCKCSUKHZPGXJPLSSGNOSXMOMUBXWXVOWMCQWGAUXJBZAFVNQHQWBVNFYE");
    msg.feature_type = 45U;
    msg.rgb_red = 54U;
    msg.rgb_green = 190U;
    msg.rgb_blue = 6U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.651188074808;
    tmp_msg_0.lon = 0.9800468324;
    tmp_msg_0.alt = 0.329453282955;
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
    msg.setTimeStamp(0.546542069521);
    msg.setSource(3527U);
    msg.setSourceEntity(134U);
    msg.setDestination(2043U);
    msg.setDestinationEntity(128U);
    msg.id.assign("QTVIHBTDBJCDUETRSSKOJXJURXNNCKSAPWRGKYNQEPKAZPDJTJQILGSIWQLTIDWIITZOMZZEHGRMEEBBNGHBNUMFIDJPZMBGXQ");
    msg.feature_type = 24U;
    msg.rgb_red = 228U;
    msg.rgb_green = 214U;
    msg.rgb_blue = 82U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.617582525176;
    tmp_msg_0.lon = 0.233089442117;
    tmp_msg_0.alt = 0.0785520412869;
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
    msg.setTimeStamp(0.745438841876);
    msg.setSource(18233U);
    msg.setSourceEntity(244U);
    msg.setDestination(20529U);
    msg.setDestinationEntity(170U);
    msg.id.assign("QDWAGEWFGBRONSRKLBVOKYDJROIHLXYYMYFOLJMPPTOIXUQQRCJCOPBQIMDGUHGWDPZUVRVCNWGZKTRNCNNLCEHBGMRXAEOAOXFSIHNXVCACVMFPHEBVMPJIAZPLTDEFNNTDGGBVAYUUEQHQAXSNNATIVLXF");
    msg.feature_type = 172U;
    msg.rgb_red = 127U;
    msg.rgb_green = 253U;
    msg.rgb_blue = 99U;

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
    msg.setTimeStamp(0.859435854835);
    msg.setSource(38349U);
    msg.setSourceEntity(87U);
    msg.setDestination(64241U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.608295780143;
    msg.lon = 0.594294538433;
    msg.alt = 0.499396640415;

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
    msg.setTimeStamp(0.362596921625);
    msg.setSource(40010U);
    msg.setSourceEntity(24U);
    msg.setDestination(55763U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.335988564895;
    msg.lon = 0.818662104925;
    msg.alt = 0.152787987276;

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
    msg.setTimeStamp(0.477781929985);
    msg.setSource(43505U);
    msg.setSourceEntity(191U);
    msg.setDestination(52033U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.757690732132;
    msg.lon = 0.334673659536;
    msg.alt = 0.382895362498;

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
    msg.setTimeStamp(0.713149195232);
    msg.setSource(43233U);
    msg.setSourceEntity(243U);
    msg.setDestination(47111U);
    msg.setDestinationEntity(49U);
    msg.type = 175U;
    msg.id.assign("ZWUPIPOLNKNIRVCOVSLYACEEHPTMUOYYCJURZKYLQNLIGXSDKXEOMKHQUFMGBRAENWOCNWZXIJHIGZHRSQTMOYXZMIQSWZSWOJFQLBNFZUDNIYTHPDVAEJKGUTCPTBFLDZKKBVPXEGVFWCUCXG");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 12U;
    tmp_msg_0.clock = 0.440018835473;
    tmp_msg_0.tz = -77;
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
    msg.setTimeStamp(0.407933427984);
    msg.setSource(30736U);
    msg.setSourceEntity(74U);
    msg.setDestination(58930U);
    msg.setDestinationEntity(41U);
    msg.type = 81U;
    msg.id.assign("PMMMPLCRNPCPSKTNIWXGKNCGLYSDZTYBGJKUQKWH");
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.968471323586;
    tmp_msg_0.type = 209U;
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
    msg.setTimeStamp(0.147911557061);
    msg.setSource(41600U);
    msg.setSourceEntity(240U);
    msg.setDestination(18009U);
    msg.setDestinationEntity(238U);
    msg.type = 228U;
    msg.id.assign("WQTNLIVMIBAUWOFXTGEANQKQETFDAZXTOVYPFEHPWLNKQSACSLTCOEIPKPMTRMYCQLAXMRHROKSVCWBLUTZOJQEAVJWRFNZKLHZCRJMCYINUWGEUDGOMSBXUHF");
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.685039760736;
    tmp_msg_0.type = 160U;
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
    msg.setTimeStamp(0.405820821373);
    msg.setSource(2334U);
    msg.setSourceEntity(182U);
    msg.setDestination(33285U);
    msg.setDestinationEntity(164U);
    msg.localname.assign("OGWTXAUNBFPONBDKMVKPTKVHQEFJTFQDKNIHTRRCUFLDKFYQRBGQAHZDECSYHOQDGUSPGJCRVTLIDTHFJJPGLMRILSIXXHNWZNSUKNMWZPJNFTLXBSMKDPZQZYKWDACOGSAGZYCXZZDWVYXVNIEECSLQHLBUXBBLMGKTJVNHXOINPZHFBVJUFJRCRMIXRXEOMUAEUAWMVKRDILBHEEYYQCILYWEURCPOAAFTGJPZVOGMQWASW");

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
    msg.setTimeStamp(0.565632527958);
    msg.setSource(55416U);
    msg.setSourceEntity(244U);
    msg.setDestination(56587U);
    msg.setDestinationEntity(205U);
    msg.localname.assign("YNHFJEANAQJEANWAMLQKVIKLJZBHYILQCCNUPGYJQOECQOGNGOUPBMOHDDIBXIBDGCYPRBYUPMRHIDWVVKLWUBBXZZCQTOMURJNQGLMDKPRASEUKHYXUBNEVYMVWHGSKJHFSXLFQIFMAJWDEWSOJGSYSCTBVRPZFSMCRHEZKHELZOTDGXPYXAFXVFMAQUENDOWKCOUTOLRRFFIHCUSILXLDIWJ");

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
    msg.setTimeStamp(0.964796180714);
    msg.setSource(11622U);
    msg.setSourceEntity(181U);
    msg.setDestination(64470U);
    msg.setDestinationEntity(146U);
    msg.localname.assign("UCICUTEBUUKFOVJTPHGCKNXXOVYUNLGTNKPFQQFUVQYDIJLTRJRNHQWFLABKBLPSRIUUTBHWJYNXZNZUEVMODEBSAIVWKLYLXOPPVZPSEXRNXCJDGLAZXZKPQQGWILZFAJLDOSFKMQCWISOM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FOFZKJZCWDAPKVMFNVXEZOVFBJKULEPBTBMOJJVSILXVYHLUUIPNWWAWJKPRXFFRPGQSHGHAWOEBCGQYIALNQNCQYQRIPYCJHHSMRYZKCZCNBNFGDOCAXKFXUYTDPEPEXPZIMPRLLOQEGAOMIESNTTUGJXKVOCSYAKEQDGIFZTHIDGSHGGMBUKWAMIVNUVUAZTLVMBTJHEXZFRQXWDWQMHVJJYWKWSZNYDSSTHLTRYLUNCDBLIECTOBUAMRSB");
    tmp_msg_0.sys_type = 147U;
    tmp_msg_0.owner = 23566U;
    tmp_msg_0.lat = 0.889566675911;
    tmp_msg_0.lon = 0.376855288045;
    tmp_msg_0.height = 0.219330561705;
    tmp_msg_0.services.assign("EMPRHJMJDYTUINVNVCQOZNKQQFSOOBBFQNORMQKXOMXWWJPJALETSPUEFXUNZKTCDKWSYBPXWKFYAGWBNZHEEVVOZJTGLBCZZXVKDXGGFIJINLGPHKQDJAPEOZYCXPWNKLKBEXWYSLLWZNPETMAUNFEFMXUATBEPCDFCRAYHTFAFIYIGZKSPQLQDUGRDIIHDCIXMSUBTRGBMI");
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
    msg.setTimeStamp(0.517470230467);
    msg.setSource(14385U);
    msg.setSourceEntity(112U);
    msg.setDestination(41562U);
    msg.setDestinationEntity(94U);
    msg.timeline.assign("LYBFBAEVMJUPITKFLHPNPSXMIBZBTJJKUFSHORWJVBAPOCJJNDXHZCEDHYUHQXCHOXBTLDQEMPDESGGYTSNBIZASTDQLXUYMIVVKVTZYOVOCEQYNVDYLYL");
    msg.predicate.assign("WFQQLNHZNOETDZFNQULVXCZZJPUKHBRGRVFBVOJETAXZSABNINTQMSKEHLJKDCWQVIGRVPGNRASXEMNPKVLEFIYCPGRSALUGXRMLFNBBMZZONWTPQGDPYQHIIRLSKOJIPEGRRCMWQXPUSYTJZOJWL");
    msg.attributes.assign("EHXAWVOLMLCENFMZBKGJQWAHQPFQOEUAACUZCWNLNYYXJOSSPJPWQWDVYUOGKZBMRSZZJBTRXIO");

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
    msg.setTimeStamp(0.685646324486);
    msg.setSource(52636U);
    msg.setSourceEntity(177U);
    msg.setDestination(30980U);
    msg.setDestinationEntity(198U);
    msg.timeline.assign("AHQSMUQMZEVGQAMGUVYZWLJBRCYEIYCRH");
    msg.predicate.assign("RAZKBWMQBKERLBBBATRUBOEDFFSJNMLPNSIOEYRCE");
    msg.attributes.assign("EIIVNAQGVNPMXZPSMOFXOOGIVMHRRHNGFTRCWYNQPZOPYOEBSTE");

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
    msg.setTimeStamp(0.868866584138);
    msg.setSource(61417U);
    msg.setSourceEntity(84U);
    msg.setDestination(14785U);
    msg.setDestinationEntity(235U);
    msg.timeline.assign("QCEOHMSNUAUKDIFOSNWCARAKHWGJIBTCQOPVJBCCEJDGUVJQMWZOWXIC");
    msg.predicate.assign("ZWKMIFJHVBCKKGXNVMWNOFETUCRGMXERPFVDTIIMRGHYDFBDPWCULPBNQAIYYFMGZNYLKKXANPCXBRLRRHJQPSQCLUESC");
    msg.attributes.assign("OWXYESCFARNBUNYOCGOICEWEQZTJDWGQDWPXQPCJZBXFQWKZDSOSLFUAIMWDFDQCIGFJQAIKRRWITNYCDSCNBARYBMLTRVBITBHGOFEXEYUZWSKWNPRUOLEMZFCUDUHHRHGXMQVSHOVSATGNAAPPKMMLBDMVPHBCJHNFOUTHFMCNGZJVWKVKXKYRGUYJGNKYLQYXXKIP");

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
    msg.setTimeStamp(0.353784785366);
    msg.setSource(14269U);
    msg.setSourceEntity(254U);
    msg.setDestination(3030U);
    msg.setDestinationEntity(160U);
    msg.command = 93U;
    msg.goal_id.assign("TZCYMPEGKBLJHCBGECNWXOKTEPXLIEZOHOAUVTNCLRMAQXOWSZUDQJVQEESSQSSQFFIQUDFONFZZWLGYIHJSTCR");
    msg.goal_xml.assign("MHKEDUJSOYTOTVPBAWFXKWIDTIGBPQIVQXGVJADYFAQXOUPMGCHKSQOYWBEBMNRYWLYRUMMVEAPUIZJEFTCPEDASHSWMSRUKCXRMHXPJBEIWFMQUGZFGFZSNYRYQFJWMVQQIHNZBNMOQCGXEPIBXEVALROVPUCGXAZNUWOSXOAD");

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
    msg.setTimeStamp(0.513619247058);
    msg.setSource(60229U);
    msg.setSourceEntity(7U);
    msg.setDestination(28076U);
    msg.setDestinationEntity(206U);
    msg.command = 252U;
    msg.goal_id.assign("JHEGSGVWAGRSLQMKJIZJRUSWKJFDWXEOCKBOOZIXCFEVXKQBBOHDAZGPHODFUPJFLDVZTCZGNNFYQYQ");
    msg.goal_xml.assign("CAMWSJEPSKCOQDHWANLUVCIAKGGSOZRFYRBKLREXKZEMIKJTWVAXSDDZINVATDHIPNGENRYOUKZRJTZYUBVZZLPOYMQLVRYETLAPBFFGUJESEJCXWIBNTKNNQFSPHZPHVMOBBAFTRRYILCXIJULXTMAUVLGIOFSDZQYXBTTLVNHXFKGLCGMEWKNRWWYPZXYQMUTMOPODGIPFVJFVHWARQOCBXFKJBHSD");

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
    msg.setTimeStamp(0.718332456292);
    msg.setSource(52291U);
    msg.setSourceEntity(183U);
    msg.setDestination(43365U);
    msg.setDestinationEntity(120U);
    msg.command = 196U;
    msg.goal_id.assign("LDLMGFWEGROBDHWHWYEMYNZQCBXORPIZXJTRSVBMSIVDBEFTNDOSKSIGBCQWLMTNOMQYGDYJWNCHUNUKUMJZPSTTKUVGEBJAAHUZKXVHWZPOGZCKRVSEBKAHAGFCHAQRYCSSRCQLTJJQSBFCWFNPODDWXILAGZXPSDWVVTQFPDHITOJFKJRQIMNNEFYZEQXMYCEPLBIWHAUXDXYPMTNIYIOJVAPRAZUULOML");
    msg.goal_xml.assign("QMZRZXSQNGMJJNEMABFEDGWKLULRDMABKHQTZPHRIZPBLAYPMQFPILCRCASPKHQYWHEYSEMAVRDLOPKAWVJVIOBENBBCFLWCSTGFXVMIWEXVZYUCWUIEURDEQJTGMGLCXSBRNQKYBUSSAJJHKDXMDXFNEOUGZIHQZXYIPOXVIVJHPYPGTMUIHUTFGCDDTOWFTOOYLVGBVJGPNCWNFKRDKTRIKNWLAZFWVQBNUYUXOASKLTJQSTHNXZYSDOCJC");

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
    msg.setTimeStamp(0.216084581914);
    msg.setSource(23215U);
    msg.setSourceEntity(153U);
    msg.setDestination(10047U);
    msg.setDestinationEntity(80U);
    msg.op = 241U;
    msg.goal_id.assign("YNCHKYTOSRETUVWUVAXPUQXKKXVECFEMVLIIBWNKRQFRTQSFJIXNHYJVCZHUQIJBFNCWZAUXJDCQSOUP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IDBCKRHTUVMXKUSGJHYNMBFLD");
    tmp_msg_0.predicate.assign("GBUQWNVCLMOOFCBSWFBPRWZQRFYMJDLISRTEUNPVTQKBJZXIJJWUPOEPIFGKAWQNLEQADKNJUAXOCMPVTXVONOBFWAZTJHUZTHGKBUTJKERKVGFGKHUMDSBXWUICDHEYMCPBKHRZYGESZLVRWIDSSRMVEGIJUQOLRCNGOCMPVEHYDSEONMXDIXAFUADSZZPXBEGTXHASTGWQJSLKZCCQATJYYQPNFHNLTHPYYMY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XEZUJBFNESSPBQSMWPZOWYGUBKZQQYLSRVKIJOVGRVPMVVEDUVMYWYPFAEBNZSBV");
    tmp_tmp_msg_0_0.attr_type = 64U;
    tmp_tmp_msg_0_0.min.assign("GPMNIHMQZJUSIGAZZIWMQUGMINNSHSTRTVLRNCPZMXGWXNYREFAERWH");
    tmp_tmp_msg_0_0.max.assign("GHSSICSEZCTVUEXBWCSLRZXWRMNJBBLMVJSYYRETOGLKJUBGYEQTDFIJVHVXNGDRTUWPKLUEDPWESWZHGGSAFACEFDFHAFYCMQBZDBDHDTLMYQALNQGAQYPWQZVHZYWILXOHABMPNQZQMDEVRTGIZNOIEEORGB");
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
    msg.setTimeStamp(0.758532583996);
    msg.setSource(41639U);
    msg.setSourceEntity(22U);
    msg.setDestination(14574U);
    msg.setDestinationEntity(43U);
    msg.op = 185U;
    msg.goal_id.assign("XEBPDRKNWLBESEHMGRFZFMINUTQXOKXNJVFOBWYCMSCPRHHOCMKPODKHGFAZDBNAMK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HNTQUOXANNHJHLKVUMYRUGOAPANQEEQ");
    tmp_msg_0.predicate.assign("GZCXRQAHEKUIJTWPPZDIVBCLJZEFSEHOJFQWHSZHPOSWPDTSRVJEPBNNOBKBHWCENMPVTDHSFXSWGBJHLFZCIKQDFPGUBZOGGKIADACNMXEQNTOXUUTEALJYCF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WCQKDWTFZDLKAVYEFYUZDXQEJJSOAMNKNLEDSIASRFEWWHLNKELYPWVPGIHMMBGBBJRXHDGSCGPRWEUMCUJOSWVCIDZOEATHJHXNCOXVNWPGZTOYEZNTBQOULHLBVHIOYLQSAFKDFSRZBUAFJQGUEGUKNJLIRUNDTOTIISZRJMXQWQDRL");
    tmp_tmp_msg_0_0.attr_type = 163U;
    tmp_tmp_msg_0_0.min.assign("AEHDHUFXSHQGOYEBHRLRYAYLQJGSHFVBIQAKQMLZKSCGDCJEKNPRNKTJJHPOCSXLJKIQWMDRXPFVXJCFZQRMULITDVJADZ");
    tmp_tmp_msg_0_0.max.assign("LUWAYQUUTYAQQBJNHZHHVSMMDIQEAMUXNHFEERWGIRXVCBZBGJMWKUCJDOYWCNGYMXDRBKJBANFLPJYTOGVRQIPJMDXQEVAPBCKWVYOBZDWONEGTPISZCUKKNDLSFPUJXDHHSIJEFNRGUFLFTAITEFGWVITOSPDPAYVSLALXFXTCRLQKFCICMGSTNQZNCQT");
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
    msg.setTimeStamp(0.916603129016);
    msg.setSource(15744U);
    msg.setSourceEntity(113U);
    msg.setDestination(15929U);
    msg.setDestinationEntity(20U);
    msg.op = 223U;
    msg.goal_id.assign("AIBWJWEFWZEZWFGAPSGDLHROYUJMAUKHAPPOLZRMDESHHGTXVMXQRVVACNFKXQQICDZIAMOPJRYNHUZSIOHUSCRGMYHNTBJQALGZIOXUGNXXDIAVDGVDTLSWQSRXSTBKVUYVZPKHURNMBEJFNTHDEOEMCLPCIMCYNTYRCO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WQNUOMJUYKNVLMCRDAJCSXTFXMNDFQEGNYUBWYDIQEZANSIDTGFVZQIYIALFBEYVVHCMLOJWPFOUTYZOVZDDRINXYGWEHBLMJHUXYSASPCNJQBMKBFAFRWDRAJTYCGKUHLPJRLWCSSW");
    tmp_msg_0.predicate.assign("MQVCROQQNCAYFUHUHIRCHFNDZYIZQTUVVBTKCBEVJTBFPKOPZDERMYWBXMGIXCLYHLTNBNDJLWENQSDNMAQADIWZLXANKOXGSUSFSAPTSPAWXJFFLKMGLPTQMAZLFCDORHVEWESSDJVZDBWDXKIEJOZPYUA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IQAPZGOPBVLFXQHVJHLJXKUDSRRCVEDJVQZTZLYRQHBZGKTVPFNIKXJEWWOXZWTWUKXDEBQTCNIASVNZSIGUPDKNKDBVZVY");
    tmp_tmp_msg_0_0.attr_type = 253U;
    tmp_tmp_msg_0_0.min.assign("AIOHWGPGDLREYHEYSCBWAUZZOTQRYDHOSFTWTEETPZOENYVMJZPVYYFKUCFNHQKKMKNRTWFCONSSXAGSKZNLDVQCELJOXHHJVAQWINXIPBWKUIVAVBZN");
    tmp_tmp_msg_0_0.max.assign("JGYRWIXBNZCVGPDNUWKZDUQAEWOEHIWKNHKHC");
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
    msg.setTimeStamp(0.383366071094);
    msg.setSource(10291U);
    msg.setSourceEntity(146U);
    msg.setDestination(17192U);
    msg.setDestinationEntity(115U);
    msg.name.assign("WITAAJYUTXUYBHDMYQTECQYLRTKDTVQNWAKLCGVJEKNLCCPFMUBSUOXRPIXH");
    msg.attr_type = 37U;
    msg.min.assign("BGXPLUDZFAHBLFUHIOJHJFYDEQOMSUTJFCZUTBMVENPAVVVDCKDPWSBOWBQYPLYYNGVETSMEGZMMROQNLTNDYYCIQZXSMBRFDSNLTWEVJZORAZFXEPNRUIWBZXXKWGQNJVCYIGEVCUOJXNDFPGRMLOIKBTUXQPKSJWCELTGKLJNCUSKCHXIAHYFIHVPPUTIOAMYHDTMADSXSAQKQGRBFBAELZGHDCAAT");
    msg.max.assign("DWZTQUFYEWCOYRT");

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
    msg.setTimeStamp(0.94646395732);
    msg.setSource(59259U);
    msg.setSourceEntity(196U);
    msg.setDestination(43718U);
    msg.setDestinationEntity(81U);
    msg.name.assign("MZHNULGTQPQJDGPVAZJTJKZVSERHYXHPYVGKPQOUUBPMZECLCGKVDFPWUKIJESHYCVDTEMAOJRCCXSBMSCBQSFARZTYNDNOAVRBWWABOYZTXNZXSADUXWGSDZRKJHBLAYNOGAFIULFGQNQFWLIUOLRYODDEFXKHMUVWVKYQEZXCWACLVKINQPDOLIMSDWHZETPMMXJPQNUPJBFGJU");
    msg.attr_type = 95U;
    msg.min.assign("PIXLZAWEMMZHSXGUOEPXOFNNSTBENHDQVWCCCYJFRWGUQISVDQQCBSWDDRKYVGZAXFZUORIMAEXWPMTWIPPLKNEWTLOJKECBTWHWHJLOKFNSRXBPQYULPUGXJDFBETCQMQMILRYRBNEPRGQTSUSZWAGKNYAVYKBVPYAOFJZJIIHGUKOSXLQISKXNLIHY");
    msg.max.assign("GPCLGXPSEFPBQZOCZKUISQAOQAXTYZMMWOMVJPTJNEVUEZSWVDRONRKLAAE");

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
    msg.setTimeStamp(0.119548921365);
    msg.setSource(37798U);
    msg.setSourceEntity(151U);
    msg.setDestination(39214U);
    msg.setDestinationEntity(77U);
    msg.name.assign("YOBJKLYTWJTVZZQQWDYFRFDKEGWSCULCCAQGDHPENMSIPHWQMWEYJHILNDLIXXXLIGYNXWKRTRFQBJAWHKQISNMZKVRTLUGMONOPUZZMKSZOUUGGBGKHBIAVRSUBCTJUDSYAFU");
    msg.attr_type = 129U;
    msg.min.assign("GAIOQOCBULHIOUCUTRIZOGNQAWWKFCPVMGPNALVLWSYCMYRRDDFSAGGRCDUIBPRZZTHKOMDILKLPJQXXJSWKPXPEICFTDNGNBVNTYHTUZWWVKNBEVZYPJTTKIHRYHH");
    msg.max.assign("GZUHZOVLCTYHCCURLJVTIFKRIEGBPXZOHELUOYIAKJUPIYAIWOTAEPYQJWFCLGUQGYKGRQXNNSNMBBEVEOWQKZXTVVXGCHQXRIWWISVGJRMZGYAFFFBBTDCMNCFRDIXMUTHLHHRDPKJESPKJFOWYILNBNSRDEBAMJNQKEDMPSSDOVAJYWBEADSUUCQXUENKZFMLYNRSUXVZDTMDSPQKYSTIVHFWZPTMKAZLPAGOO");

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
    msg.setTimeStamp(0.68373350218);
    msg.setSource(6955U);
    msg.setSourceEntity(233U);
    msg.setDestination(59505U);
    msg.setDestinationEntity(103U);
    msg.timeline.assign("QULMIBTUFBOMFVPANPFJDKFYSHMXQIALDZZJKQCRRYFJHGLWXRCEQVRCWNINVREBLPCJWVEYLPMIRVESWHRXDTKSSEZLOGRKY");
    msg.predicate.assign("JTFXKRLMRRKJUIHZYXPHTZRNSEJBWTRVVBDJMPLIADXDWFAOEGSXZPDBGCEGHVZYLEMTQGLZMGYUFBBZKCPGZTVRFGICBQZXGMODAVNCAUPHKHXNQNSITAHKPUXYEYQWKXFEWJPVGAWCZTMEHDLTISQMBWKXIUOKAJKAQEMHNSQRCAY");

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
    msg.setTimeStamp(0.314773863646);
    msg.setSource(14172U);
    msg.setSourceEntity(194U);
    msg.setDestination(37046U);
    msg.setDestinationEntity(149U);
    msg.timeline.assign("WURLPZQETDOAPPJKSMAHZSWHXSPPJBRWFIMNMKIBPTSTVAREUKSBVGWKZCCOBPQGEZFLTGYJDFHYFAACNLXDYNKZNJOOKVKTNYRRQULNFSIEBXYOWOYFBQTUONIAYIUGLCHEHT");
    msg.predicate.assign("ADHNESHWGGYLFRQHKPIFTOYXBMXGXAUEVCVINWQXEIPKRTICOJRSAJYFNCTGSUMBEDKBNJSMZKDMYDBQYMXZBIJJUZILWYRFBVJKYFCHEQFCGGTQOPRFMBKHPXPIAVWTPUCDZQITQRVKKWQUSXWCBOPZVLJLARKUPDOAMVAHXUMIJASCNDLXGTRYEBASDJHLUEIGNO");

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
    msg.setTimeStamp(0.182929473949);
    msg.setSource(32598U);
    msg.setSourceEntity(151U);
    msg.setDestination(8856U);
    msg.setDestinationEntity(162U);
    msg.timeline.assign("VEUSLORUENZIRUYSFCJKUTDRGBDNWJEPEFZAXNMKIJAHIDKMGWIMHMFSWFZUWNYSUQVZCBXHDMOSCOLYCZQVVLAPRGYTDVZNIMOYWXMABVGOJKLCJDAOGPSEIUVGPZEQBZECOQYBDPWYLFCGRSDQXAWFVAERTBXPOCTQLNASBQMFWPJIRJQPTQKWXUNLRTNUPXJIZDQHXYKXLTNHCZPGHOLSNEFHTBHJM");
    msg.predicate.assign("HYXZJFJNPGSTSWXFLQPHZUHTBYIOXEKOUBNHKTECIBGBDFRIBUDWLMOGZMCVBOFDREGLSVCMCGLLNNHLZLPHMYHAXXAQEFTA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KGMIOEMVIGWZORAMUVJSBNZWLOEDXDXYRPPMXYSCYHTQGUIFKBPUFDLIDKXXPAALBQXQHEMUBONYBVCGJTOGKLHADWBCIZRWCFVHNUVHACRMPLMINEONMPNDIRKZTZQUHVEGARESZHAFQFPWHTJKWDSUGFYHQRVGL");
    tmp_msg_0.attr_type = 140U;
    tmp_msg_0.min.assign("YRIYSTSFZMAWBCOUPLKLBURTJSJIDUPONRCODEQMCJKYKVQFFXHNQZSEJRZWAONLBAAQGFBVBGNBZAFBVQTMIEYXHICHWTUJMVIVIETENHWAVYZKLUPVXVPUYDDSCGAHDQXRLNMMSQGVXZNDPZJHOYQUEOTAEBYABLWWPNDRMGWKJPQKWSGKXJDPSEFWHDOTCNYNLBWKXLICPRXUTVXHOMOCGEKCPOU");
    tmp_msg_0.max.assign("GZSNKFSQGTZNJYDMVDYQUJAULRXMWNMLPHGQMUAEKORWPBQMQOBBINNATYXCBYUGRWTVCDRXMQMEJMFXJDFZZIOVPCFNIGDVCUPBTZEASYACGCHZFBIRWVZG");
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
    msg.setTimeStamp(0.987905191606);
    msg.setSource(2445U);
    msg.setSourceEntity(24U);
    msg.setDestination(32635U);
    msg.setDestinationEntity(29U);
    msg.reactor.assign("BPXEVCFSAWXDHXIWCYJTBZPSSMQNMQAJFFYCAHKFKZHRRLIQQBKDCNDQCMGXVYEEBBJNUIXHEEAHISDSTHQRUBDOHAYCLDOCXPL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ATYGCANSVGZICKYNVJVQCJBOIMUDUHGPXPYONRXXRJZXKQQEWVYUJCIKATSTTEHKAKBIEOJZKIGDUVFVVBINNFOSULNHRJYPDTEWGLSTZPLHPTRKSHWMIYDWFLVEEHZBLMMYBPZRHGMAHLBCCNMFMGLDZAFBZPSBHUSXQQZWPNAXORKHSXMUUXDEJNGWLJDXYIGDYOWCBOOVFINQUBTLSREZQ");
    tmp_msg_0.predicate.assign("LWKIASBUNFJLWNKSFBHNIAVEVGWIAYIMARGWOZLFXWYRDPVRAMMIYI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GLHFZULIDMFSFJZNNVXHZIHLLEMMJTEHKSHUZFUOGSDVAVFWUQAWCNIBPIHPYNLJQDXFTYJLTAPOEZGQEO");
    tmp_tmp_msg_0_0.attr_type = 158U;
    tmp_tmp_msg_0_0.min.assign("VWSWPWNGAAXXIHIH");
    tmp_tmp_msg_0_0.max.assign("HBRHYFUJWPXFZDNOGNODRJVOLCHXCNXQNBFZUNEXILBVBWYOESULTYUBHHDVQBGIRKKHDKSVCBUJKTCMFPPXAEJYHNUGJBPCXOXRLNSTVLRGXSQIXUUPDDGJAKZVNWQJDSSIJTORMWWHPRMATIOGEYQMITQJRULQVG");
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
    msg.setTimeStamp(0.561176057109);
    msg.setSource(36920U);
    msg.setSourceEntity(94U);
    msg.setDestination(58083U);
    msg.setDestinationEntity(33U);
    msg.reactor.assign("WVBEPOAUGOIZJDMVGSKOOYOXDJWBEIXDCUFFDBMWRQKEPTSDTWKZKJHEYSHGBXONDYYUJZLHDFJYTXCKBAWPUIHSPVANLIMTUKEQAYNTUMVWIIYCOFAZZGRKVMGQPRWHGPSJTEDHJOQWQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BDTQNAWBIQGV");
    tmp_msg_0.predicate.assign("SEPOVDBWZTKJSQGAPEDYQPYQSIBJKVIDGAOUMPOMVFSNJFZWZBRIWZIPZPJIPBLNGZCWRXXOVQFULVSYAOBEZNCUPRYWVHBHMNGHCMKOWHUVGZKAOBERRBGCHXILDKMXXRLMRFJRUKCTEAINPFAGQEYASTAYTZHJTUUJLQFNDFLFBDJH");
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
    msg.setTimeStamp(0.0749108202742);
    msg.setSource(9065U);
    msg.setSourceEntity(106U);
    msg.setDestination(23371U);
    msg.setDestinationEntity(76U);
    msg.reactor.assign("PYQEMHBAZXBCGORZKDWTBDSQFVKCTDBVNGZITGLONLLZSBJWRVZUFWZVLNAIWKIXXHQSYFVMUJYMOHARSELCGATYVLBAQTICYPPBTJOYXAHRWXYAGVJONJLRNEVQXCGUMUOUCLIIPATDFWMPMKRKOXBEQVCMJWRDYQMEDCAPDWEHHUPPLSWRBGDGYOGFILJ");

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
    msg.setTimeStamp(0.930800802896);
    msg.setSource(18432U);
    msg.setSourceEntity(154U);
    msg.setDestination(60918U);
    msg.setDestinationEntity(128U);
    msg.id = 117U;
    msg.width = 38969U;
    msg.height = 61560U;
    msg.widthstep = 48635U;
    msg.channels = 237U;
    msg.depth = 173U;
    msg.finaldata = 19U;
    const char tmp_msg_0[] = {-51, -82, -24, -125, 81, 21, -120, -12, -80, -109, -45, 126, -85, -35, -18, -114, 57, -59, 103, -105, 78, -73, -86, 37, -110, -110, 117, 96, 11, 13, -44, -76, 43, -93, -106, 57, 48, -92, 95, 101, 123, -7, 69, 27, -127, 106, -17, -86, -40, 105, 28, 97, 39, 1, 18, -85, -101, -8, -94, 22, 47, 32, 36, -46, 71, 51, -39, 33, 78, -127, -41, -99, 90, 24, -42, 50, -55, -13, 116, -57, -63, 31, 89, -96, -63, -43, -74, -99, -16, -74, -82, 108, -128, 0, 5, -16, 20, 52, 82, 60, -21, -123, 115, -101, 98, 115, 67, -30, 17, 8, 52, -119, 8, -111, -100, -126, -80, 34, -116, -108, -71, -15, -25, 119, 65, -75, 40, 32, 104, -125, 119, 110, 115, 93, -99, -45, 12, 48, 39, 64, -97, -124, -72, -68, -2, 73, 100, 37, -65, 7, -90, -13, -124, -73, 114, -46, 35, -70, 68, 75, 110, 74, -98, -3, -12, 31, 95, 30, 45, -63, 68, -86, 4, -62, -48, -63, -13, -101, 25, 15, -79, -100, -128, 47, 48, 106, -34, 108, -90, 54, -1, -44, 39, -108, 65, 13, 33, 70, 73, 112, -117, -12, 60, -65, 126, -44};
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
    msg.setTimeStamp(0.448410235689);
    msg.setSource(40001U);
    msg.setSourceEntity(61U);
    msg.setDestination(10384U);
    msg.setDestinationEntity(50U);
    msg.id = 116U;
    msg.width = 54661U;
    msg.height = 54718U;
    msg.widthstep = 3054U;
    msg.channels = 227U;
    msg.depth = 110U;
    msg.finaldata = 143U;
    const char tmp_msg_0[] = {122, 110, 109, -4, -20, 19, 62, -72, 79, 93, -21, 57, -116, -61, -45, 113, -38, 79, -105, 51, -52, 86, 36, 91, 19, -14, -67, 74, -22, 15, 82, 83, 95, -74, -25, 104, -40, -57, 118, -37, 20, -60, 14, 115, -46, 7, 2, -42, -97, -48, -47, -38, -72, 75, -69, 126, -42, 98, -80, 110, -113, 104, -25, 99, 35, 125, -53, -100, 111, -37, -115, 46, 72, 86, 52, -76, -43, -12, 24, -60, 82, -50, 84, -57, -69, -44, -27, 120, 78, 88, -26, 63, 110, 72, 67, 61, 107, -72, -87, 81, -80, 86, -27, -31, -126, -49, 126, -101, -49, -102, 5, 68, 78, 63, -26, 50, 15, 11, 36, -54, 124, -70, 88, -75, 16, 120, -79, 40, 85, -22, -75, 120, 37, 74, -79, 15, 100, -69, -28, 42, 111, -124, 57, 115, 112, 34, -124, -58, 48, -42, 121, 103, 11, 109, 100, 96, -71, 110, 9, -53, -105, 103, 6, -42, -88, 106, 32, 101, 61, 18, -76, 85, 118, -126, 11, -36, -125, -113, 103, -95, -1};
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
    msg.setTimeStamp(0.883484633326);
    msg.setSource(58203U);
    msg.setSourceEntity(52U);
    msg.setDestination(23784U);
    msg.setDestinationEntity(243U);
    msg.id = 251U;
    msg.width = 45860U;
    msg.height = 32660U;
    msg.widthstep = 9980U;
    msg.channels = 75U;
    msg.depth = 136U;
    msg.finaldata = 9U;
    const char tmp_msg_0[] = {-70, -109, 104, 52, -72, -108, -17, -103, -45, -101, -28, 110, -41, 54, 76, -76, -53, 28, -127, -102, 20, 72, -122, -112, -104, -22, 2, -108, -60, -125, -25, 53, -86, 57, 74, 23, -119, 22, -77, -103, 58, 100, -28, -59, -75, 78, 12, 90, -65, -51, 116, 17, 123, -44, 122, -110, 118, 125, 92, 114, 13, -19, -116, 11, 42, 17, 11, -104, 8, -13, 76, -81, 106, 118, -43, -78, 43, 108, 55, -109, 27, 41, -42, 111, -113, 39, 122, 59, -126, 25, 56, -62, 89, -117, -31, -27, 58, -82, 26, 126, -82, -94, -113, 13, 60, -106, -8, 15, 112, 20, 92, -75, 68, 107, -72, -65, -108, 123, -64, 58, -88, -99, -47, 6, 77, 37, -103, -102, 91, 40, -90, 13, -16, -24, -14, -88, -40, -122, -40, -108, 85, -79, -125, 80, 125, -61, -118, 109, -13, -122, -95, 22, 91, 15, 64, -8, -58, -107, -10, 34, 12, 87, -84, -79, -88, -8, -20, 116, -28, 21, 7, 101, 33, -44, 105, 24, 22, 2, 67, 114, 25, 53, 67, 27, 105, -49, 85, 118, -65, 116, -19, -109, -65, -120, -86, 107, 32, 8, 114, -99, 81, -21, -93, -33, -118, -82, 10, -3, -112, -22, 85, -24, -111, 119, -56, 7, -118, 22, 52, 29, 80, -53, -117, 79, -14, -26, 3, -101, -29, 81, -77, 57};
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
    msg.setTimeStamp(0.423226896016);
    msg.setSource(44713U);
    msg.setSourceEntity(217U);
    msg.setDestination(54594U);
    msg.setDestinationEntity(103U);
    msg.width = 57821U;
    msg.height = 53929U;
    msg.channels = 64U;
    msg.depth = 172U;
    const char tmp_msg_0[] = {-20, 54, -68, 2, 98, -75, -32, 32, -63, -96, 9, -81, -126, 62, -46, 121, -21, 45, -119, -69, 74, -79, 124, 112, 84, 69, -72, 69, 91, 98, -11, 13, 81, 13, -62, 110, -72, 40, 126, -42, -109, -13, 36, 80, 56, -56, -70, 18, -20, 19, -97, 116, 16, -25, 15, 63, -96, -98, 58, -124, -74, -86, -4, 38, 126, 36, 126, 61, -119, -124, -104, -3, 50, -36, 51, 21, -4, -67, 50, -37, 40, -115, 60, 37, 19, -32, -111, 57, -26, 97, -61, 13, 65, 18, -101, 105, 38, -85, -84, 8, 119, 40, -85, -35, -44, 49, -65, 104, 83, -76, -108, -6, -80, 5, 20, -47, 107, 83, 98, -120, -73, 9, 78, -75, -123, -94, 125, 45, -127, -53, -25, 38, -1, 104, 104, 99, 90, 12, 105, -23, -54, -21, 47, -60, -7, -95, 122, 65, -68, 126, 0, -77, -93, 78, -108, -63, 23, -67, -107, 115, 109, -85, 29, -91, 46, 36, -26, -121, -2, 21, 76, -10, 14, 101, -19, 37, 74, -60, 14, 113};
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
    msg.setTimeStamp(0.88600280835);
    msg.setSource(29293U);
    msg.setSourceEntity(200U);
    msg.setDestination(51350U);
    msg.setDestinationEntity(136U);
    msg.width = 33108U;
    msg.height = 43210U;
    msg.channels = 123U;
    msg.depth = 145U;
    const char tmp_msg_0[] = {-68, 34, -118, 26, -77, -119, 91, -116, 31, -113, 86, -71, -102, 123, -38, -123};
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
    msg.setTimeStamp(0.887259165962);
    msg.setSource(65079U);
    msg.setSourceEntity(101U);
    msg.setDestination(24030U);
    msg.setDestinationEntity(205U);
    msg.width = 9950U;
    msg.height = 16020U;
    msg.channels = 190U;
    msg.depth = 57U;
    const char tmp_msg_0[] = {53, 78, -88, -108, -128, -19, -102, 118, -71, -113, -31, -44, 73, 79, -5, -40, 38, -66, 91, -31, -93, -86, 66, -65, 38, 50, 49, 69, 73, 49, -38, -98, 53, -105, 75, -26, -78, -115, 10, 19, -25, -38, -9, -85, -26};
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
    msg.setTimeStamp(0.399050303598);
    msg.setSource(42874U);
    msg.setSourceEntity(215U);
    msg.setDestination(40317U);
    msg.setDestinationEntity(34U);
    msg.frameid = 244U;
    const char tmp_msg_0[] = {-116, -78, 117, -36, -121, -74, -44, -115, -21, -82, 61, 43, 89, -65, 113, 57, 31, 40, 67, -62, -17, -112, 62, -123, 119, -78, -33, -79, 125, -81, -52, -100, 119, -84};
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
    msg.setTimeStamp(0.0140407414183);
    msg.setSource(58261U);
    msg.setSourceEntity(191U);
    msg.setDestination(64096U);
    msg.setDestinationEntity(103U);
    msg.frameid = 213U;
    const char tmp_msg_0[] = {94, 119, -19, 64, -26, 125, -33, 116, -78, -43, 102, -17, 125, 73, 79, -81, -119, -24, -118, -43, 58, 0, 18, 28, -35, 111, -36, 23, 0, 47, -59, 98, 108, -72, -114, 74, 25, -2, 83, -27, 18, -33, -90, -19, 74, 73, -69, -123, -85, -57, -101, -24, 89, -33, 102, 89, 47, -90, 23, -20, -48, -41, 59, -2, -73, -8, 87, -89, -49, 11, -49, 20, 11, -90, 1, 28, 97, 119, -45, 14, 41, -52, 91, 31, -118, -37, -71, -77, -110, -63, -54, -100, -87, -2, -46, 73, 74, -6, -76, -23, -15, 0, 124, 23, -89, -85, 121, 92, 26, -43, -103, 113, 75, 86, 43, -103, -61, 21, 70, 85, -72, -58, -16, -62, -1, 21, -77, 48, 99, -108, -39, -114, 23, 15, 101, 30, 64, 17, -117, 47, 37, -1, -81, -54, 92, -26, -5, 118, 8};
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
    msg.setTimeStamp(0.454124758468);
    msg.setSource(65153U);
    msg.setSourceEntity(67U);
    msg.setDestination(49736U);
    msg.setDestinationEntity(167U);
    msg.frameid = 127U;
    const char tmp_msg_0[] = {33, 116, 120, -26, 37, -83, 65, -118, -128, 108, 41, 110, -29, -49, -22, 84, -17, 70, 118, -57, -28, 90, 1, 121};
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
    msg.setTimeStamp(0.843325654921);
    msg.setSource(48615U);
    msg.setSourceEntity(76U);
    msg.setDestination(20824U);
    msg.setDestinationEntity(133U);
    msg.fps = 58U;
    msg.quality = 96U;
    msg.reps = 151U;
    msg.tsize = 33U;

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
    msg.setTimeStamp(0.211906051834);
    msg.setSource(42074U);
    msg.setSourceEntity(47U);
    msg.setDestination(14183U);
    msg.setDestinationEntity(202U);
    msg.fps = 178U;
    msg.quality = 26U;
    msg.reps = 108U;
    msg.tsize = 86U;

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
    msg.setTimeStamp(0.782870491266);
    msg.setSource(48757U);
    msg.setSourceEntity(86U);
    msg.setDestination(48590U);
    msg.setDestinationEntity(129U);
    msg.fps = 234U;
    msg.quality = 120U;
    msg.reps = 246U;
    msg.tsize = 139U;

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
    msg.setTimeStamp(0.938424260157);
    msg.setSource(4415U);
    msg.setSourceEntity(242U);
    msg.setDestination(59415U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.90528529057;
    msg.lon = 0.356684395586;
    msg.depth = 168U;
    msg.speed = 0.782221555225;
    msg.psi = 0.377401189691;

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
    msg.setTimeStamp(0.0615864420714);
    msg.setSource(21104U);
    msg.setSourceEntity(174U);
    msg.setDestination(63609U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.544682899686;
    msg.lon = 0.350665756463;
    msg.depth = 89U;
    msg.speed = 0.0304231887124;
    msg.psi = 0.912018917146;

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
    msg.setTimeStamp(0.836437554612);
    msg.setSource(52793U);
    msg.setSourceEntity(231U);
    msg.setDestination(20410U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.0182066290578;
    msg.lon = 0.0725458591941;
    msg.depth = 216U;
    msg.speed = 0.487971194478;
    msg.psi = 0.191021199943;

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
    msg.setTimeStamp(0.826546746675);
    msg.setSource(49331U);
    msg.setSourceEntity(225U);
    msg.setDestination(17521U);
    msg.setDestinationEntity(209U);
    msg.label.assign("SOPTYETJKYGUBRIGWWQKSNHMJFDXLRDZWBVGXNMYXKREBVCKUEEDFMFUKTAEATNEXWQXKXTRZVVOQUUCOCPDPOAAUCQFMVGZBCZBHZZNATWLYLBZLCJKEIAIWOQVYONFQLIA");
    msg.lat = 0.235019250202;
    msg.lon = 0.01550320106;
    msg.z = 0.105730567004;
    msg.z_units = 228U;
    msg.cog = 0.930264575114;
    msg.sog = 0.649416116608;

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
    msg.setTimeStamp(0.235349976815);
    msg.setSource(24572U);
    msg.setSourceEntity(115U);
    msg.setDestination(43361U);
    msg.setDestinationEntity(11U);
    msg.label.assign("RWBOZPNFLVUJSBTGVRJRKJVOHSFUJ");
    msg.lat = 0.334707936874;
    msg.lon = 0.796080953605;
    msg.z = 0.30535950097;
    msg.z_units = 177U;
    msg.cog = 0.972487842335;
    msg.sog = 0.429133688735;

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
    msg.setTimeStamp(0.194485342412);
    msg.setSource(56428U);
    msg.setSourceEntity(175U);
    msg.setDestination(31024U);
    msg.setDestinationEntity(92U);
    msg.label.assign("YBGBKIYVXSJDKEHCXOOCIXQLQJMVNQIXENBDKEJPIAGBZZXEJGVSSYTUVFSZYSJYVUGNOLHULXZTYAFAIITKBZKHPTODSRESURBTUMIDUFLKLHPRVFPXLTVKRRGWDFBFBDTOLONFNFCWIAKITKLCSYASOHAMCIZNGHCTZDQEJPMPLCJUEDOOTRBYMRWWQPEGPNGVDZXGWM");
    msg.lat = 0.789612695872;
    msg.lon = 0.641432405585;
    msg.z = 0.00821570209897;
    msg.z_units = 121U;
    msg.cog = 0.025844325077;
    msg.sog = 0.814060107174;

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
    msg.setTimeStamp(0.576561353937);
    msg.setSource(63515U);
    msg.setSourceEntity(69U);
    msg.setDestination(60574U);
    msg.setDestinationEntity(202U);
    msg.name.assign("IGHQOFTTLYHJXDAAOOTXNSBMEYPVBFXQYOQWCPOLKLAKFFSQTKAKALYNNEUGHMVGPQBLEICZMMWDKCAWKFRYIHUQHRQJZUGATCROUNJYSKIVNFHTNZYSUNEZHF");
    msg.value.assign("TDYSHSRMZDLHKPBPRFMNCFJZBEMIECOFRFYMKUOFLEYAGVJRLQMGUHGWNPVUAHXVNITRZVPJLKYWPXLYONZCFXTZRSPPNTYIKGKRETSPCEMWIAWMTWQKZQJTUWPBSSXJIOXXJGDULYVEVCWASRKLOCLDXXGGVBQKHOJSWOIFNYNNHNAGVCXZZ");

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
    msg.setTimeStamp(0.278829205193);
    msg.setSource(9781U);
    msg.setSourceEntity(16U);
    msg.setDestination(54535U);
    msg.setDestinationEntity(193U);
    msg.name.assign("YSXHMUNPKOZSRECPORGYRAWLCEQPOEANXPSADFSPNRWASQJBDCEJCHFHLZNDUTCWKYTKBUXHBRTTNSVRBBTKCPQQ");
    msg.value.assign("TMXYZEZIBAARRBQEGGSVENLNKHLLUWTGLMSKHNKUFUKTNORBMIBQFXKMXYTBJPTQSQYKGROWZSZONYNPZPRAUGEAODPGUNJCZPKGLIFXXXHFTXOLVEZJCBSOYPASGCWCLRG");

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
    msg.setTimeStamp(0.820376571428);
    msg.setSource(41301U);
    msg.setSourceEntity(254U);
    msg.setDestination(4900U);
    msg.setDestinationEntity(238U);
    msg.name.assign("KRLNTPAUFJPLYZUGUQDPVFYVMCQQTAAWGHKHPWUTBVFWSPBRDSFWENIDKKNPUOGHCODVGIJGAVNOXETOMJOHPXZQRZDFZJJYICXLELDCKPWBUGOYHMMLWLMKBJFDVCSBNVJX");
    msg.value.assign("JGOCETIVPVADGPPLKKTFFHDJRSJVZQIUNDCDMGEIOFBJBPHZFQTANXEVWSLBFLOPALJUENLGWWZEKEMXHQGYSLXIPKJALZVRUDIYOHAYXFACGKWBOMMGVLIAT");

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
    msg.setTimeStamp(0.282787939873);
    msg.setSource(29054U);
    msg.setSourceEntity(115U);
    msg.setDestination(48838U);
    msg.setDestinationEntity(3U);
    msg.name.assign("AUUDCOPNBZYOCJDZURUFQCANTAFQLSDTIJNDTYEIHIRAFZDLTTEWZOUMRVXYACRPZGVQOJXEFDDEWGRPQJQSYGGJISLJHCYEVFXMAKWUVTNFOOXAORMKEBOVLBZVRHSZHMKXHCWHPBPHUFXD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QHXHUPDWNDOJOLHQQSGVRWYJITTMYUYULJUZSXFEOJDEHRCGMZGILDHJFLSIPKJQSLSYEDQYOQHIFXUGYPLCHF");
    tmp_msg_0.value.assign("WFXRFSLWDNJQNMYAQRTIWJHDZCBFYVWVMXTOCHCKBWBNIQZWKKCGHRSMEYYOBVUPPGRMLZPHEGLVSEFKBMCMZDNVDIXMFPOBAFF");
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
    msg.setTimeStamp(0.133973444521);
    msg.setSource(45579U);
    msg.setSourceEntity(242U);
    msg.setDestination(17562U);
    msg.setDestinationEntity(197U);
    msg.name.assign("DFOYRORBQOVBLYSTYBJDVCNENPRLVGXWZFAHGEZTTXPSMFFWUHLFSMUFOEEKTJXXBFQKVZAVTMWQXXCSMDHKQIHNPUBSHAZCEBWSHOETKGCKIZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KQVOLINUUCUVEVAMWIIXGQAFWIGJGUYDXMRZHZZSZNKDVZNEREWQUSBQOUIGXHJRYCTQYSAZJUBOWGMYMFZDPEFPAJMTGQHVFZOHBOADACKQJNRLRBKZLMHFAMPCDVJDKSNPDHGEKIBDLYSETOLGPGKSNSGTXIMQM");
    tmp_msg_0.value.assign("KLAHOSPXCIRBGUIZFVYMZSVFLRQ");
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
    msg.setTimeStamp(0.473894221181);
    msg.setSource(22493U);
    msg.setSourceEntity(16U);
    msg.setDestination(55026U);
    msg.setDestinationEntity(175U);
    msg.name.assign("ZRQLYVBAZWFBPKWPKWTYHFUNSIQMNHQVNJNMUYCSDDQLNQPUEMXCWWLUDXFLDTZINGWEJSZKTEIRGCPPFMAOXEFRKQHTKDUXLDJLSCNCGOBLJOGXGHHV");

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
    msg.setTimeStamp(0.577379336292);
    msg.setSource(18884U);
    msg.setSourceEntity(20U);
    msg.setDestination(61696U);
    msg.setDestinationEntity(141U);
    msg.name.assign("KKSMKXBVEHKMFXYCROCQMIBVOFIUTHZOXCQJPTIZFBKBGVCW");
    msg.visibility.assign("CZLTUPNRISIHKTOISKFNWXLQUQBWLEUZJOUPYCFZYSLGTZQHWWFSWPVQCMXJYQYMXKTIQACLYHXJKBAFNBZFMYDKDPQNDKDEUFZVHPGVAFATZQJRIDPUBKLJUNXKHGMMADRAMCMZBSRJWSTWJGECRLCOMEKGTIOVHVZVCFXGEPEPIUEFKSXBRNOSSORIDWWQDOEWQGYBJSXPAEBUNNJIUGAV");
    msg.scope.assign("YVWRBNDYAMXJRCYWNZTMJRGHBFNCLRYFZKGMOMZITMIJVXZZEFNTYMUSHLSQQESQCUVNHPLYDZZVUVIDHBSEUPPTWMIRHLLPSAQUCXIDKBHWNKCXHAJGAFSBPGGEACXWIUZDXIOLQVJBPIEOPOWATEVENTTGSVBNCUYNKBIEJOGFKFKLZPJJTFERCUEOTUWRPDLGHKQDIQASLDST");

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
    msg.setTimeStamp(0.370942835171);
    msg.setSource(55463U);
    msg.setSourceEntity(122U);
    msg.setDestination(31584U);
    msg.setDestinationEntity(81U);
    msg.name.assign("EVRIQKYUSUSTQYTJBRYJYNNIIZDGPDAHXVZSLEWAXMLZXVITAMHTWPO");
    msg.visibility.assign("ZTSIEZOOKFTVJGRIMDAWVEOWKUWCCJIXMRYARIEOTTXMBCWNYHSWZGISLNYBSQJNKUKCPGWUVPDKDVTDPMZPOKCZZMVOQSBYYRSUZJPGHWLGNJAVGXKHUGUYVFFGFNTJDABILHPWEPFIVEKXYEDARBAZAHNWHHOUSDBITQMDVCJLQCIQDXNNUYHYMOLXXAMQUCKRBATIOWEDFBRAMGXVRFFGRUHJYZTLBXF");
    msg.scope.assign("UXPYAFSWISYUGCVBWOAVVZXYLBXHXKGANWIRKBINRHJXQJOETLMYMEJFOUBUYBNPDKEYPNZQNQUCVTTTRYWRGGUVJOUNITOGAFSLDDDIKLEOTHFTZZBPDETGYYIEFMBL");

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
    msg.setTimeStamp(0.390203421982);
    msg.setSource(45903U);
    msg.setSourceEntity(90U);
    msg.setDestination(60744U);
    msg.setDestinationEntity(252U);
    msg.name.assign("XWNHRFYCGTDBJENWFDLGQOHHLCHUDSWYEFEQFGASPKXUWXQEHUEXDVAXMYHKZNJIENOULQRJIJTIBPESCVVIYFAIEOKHZGTYUSRQZKSWTWATRBQMPICKIVUXMNQMXJZMCDMSRIAADULZTLVXRTYSVBLQMBCZFFKWXNHSZWEFDNKNJGGKOHQPRQPBNGCUKCDZOWSHFVCAKIBPYMTVAOJGXLMS");
    msg.visibility.assign("FJTAIMTONCVDSADTXROMYJWEKJVGGIT");
    msg.scope.assign("RSRZMHYYKMDNQNBYIBMBR");

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
    msg.setTimeStamp(0.89951855534);
    msg.setSource(15422U);
    msg.setSourceEntity(182U);
    msg.setDestination(57191U);
    msg.setDestinationEntity(253U);
    msg.name.assign("IXYFNOIZBURNCNRCYOALMLQEGVOWUXPGTPMSDGEZZBRDQTWJYZHMSKWKVBXFISOCIDTGJSWTVTHLYJQMDDVOLMXMCRXFNHBATMMRMIQIEOYNKTQRAZQCZRHJREKLVP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BXMZHKWPNTBDDHUSJOCDZXMCFLLZYWTYOJRUJGPSBQCEGGADHJDVDYLYFZGJPXXZTRLDOREI");
    tmp_msg_0.value.assign("ONGYMEQAUSOICKSUMNDUTAFRRINASBZKCKVSEJJZOOVOVLIP");
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
    msg.setTimeStamp(0.720808800837);
    msg.setSource(38072U);
    msg.setSourceEntity(47U);
    msg.setDestination(49768U);
    msg.setDestinationEntity(64U);
    msg.name.assign("GRDAKSCEEWCEIVPUIOQZOMBJXGJTPRDZHGBNGNBPCMVCESTTKTIDSCUJNRKAMPRULZZNLJWHVXHVGEFVLIDBVMMXFTTVUPAXKVVFCXFLFAURYJKDFUNAMSTJGUIOQHRELNWYFZQYNYYPHIZEFKODSYMCLVWDMKXWEJQOCEIQBLHJPRBBQDIUTIGULYXQNHAMSOSDIOWLUYW");

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
    msg.setTimeStamp(0.873912316975);
    msg.setSource(28258U);
    msg.setSourceEntity(235U);
    msg.setDestination(35265U);
    msg.setDestinationEntity(147U);
    msg.name.assign("BXXZNQGKBUXCEPWCTCNUVJUGOLSFIHYDQHCHMDKLAGESIASLAIF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CICLDGIDHDMQXGUNRYUIVEKPJNXKXFQZNQGYQCDQJAPHFMLCHUIJQKQLKILFPKMEBUQGNVBBVJRXOWRMETVFXVLRSCHXDTLUQDJMAWEJMVUMSLJZVOEKHDONSWOJGDPSAZITHAZFUMLMYNGOXATPEGNPYZZXZTMPDCHSRERZFRYDTLTGYRWEBQPRGZNKOITBFSLBPKWHIVCTSWHPKOCFAHOZ");
    tmp_msg_0.value.assign("HUKYLIATTDRRAXWFOODDJPMUUSMXKEYLGHBRFTFHVFOBZZFHAPLHEIWOLCNGDEFKYGPFOKPMTICQVGPNUOEXUURNBRUJUKIYCBJKVQJZRHTFZAWCKPWKEVIPYNYOZMUBNM");
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
    msg.setTimeStamp(0.519686964817);
    msg.setSource(26207U);
    msg.setSourceEntity(28U);
    msg.setDestination(25623U);
    msg.setDestinationEntity(158U);
    msg.name.assign("CDWADTUEXSBJWZNVVBNMBTRKZUVYXUAHEKFKNIUAHSLIJSWCJZTKDXPQONYPGGOCRYBETQVJGIURDB");

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
    msg.setTimeStamp(0.0488078032109);
    msg.setSource(34333U);
    msg.setSourceEntity(122U);
    msg.setDestination(15862U);
    msg.setDestinationEntity(125U);
    msg.name.assign("JYXPSEAUFYUBMHSMMMINQWAKFJIXEOFWWHIVNQSCZRUHCNMHHROOAWGRDYCVAPIHTKBRQQIJJYJGLNEQZZUOTLNTGURNKBLQDMCDXSXXSYVBZRRCHMYLXRAADOPIOVENZJBCJVVRTAWZLWGWAVF");

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
    msg.setTimeStamp(0.647892916895);
    msg.setSource(26952U);
    msg.setSourceEntity(4U);
    msg.setDestination(48509U);
    msg.setDestinationEntity(149U);
    msg.name.assign("MKPVMSWPZOLMBDTTHQKPNHTTOKSCUAQVAZKZCZTQBPVGUJZCRRNYPDKNMHDQAQZRDWDEJXEQOUYUDEXRWBBVPQMWPIVGCGYASUZHFAPXQVBWQRLFADORZBUBDNCKKVGSNOIWFEAEMOTWAYATWLCSGOGIELYUXTLIKHOWMXEYPHIXCIQKFZZNSJOLFMJRYGFISGJXMFEDNYLSNPKVW");

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
    msg.setTimeStamp(0.673910590331);
    msg.setSource(30264U);
    msg.setSourceEntity(44U);
    msg.setDestination(25536U);
    msg.setDestinationEntity(167U);
    msg.timeout = 3518595322U;

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
    msg.setTimeStamp(0.50430756966);
    msg.setSource(50900U);
    msg.setSourceEntity(203U);
    msg.setDestination(4903U);
    msg.setDestinationEntity(92U);
    msg.timeout = 3845363477U;

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
    msg.setTimeStamp(0.0110291148321);
    msg.setSource(29549U);
    msg.setSourceEntity(222U);
    msg.setDestination(28348U);
    msg.setDestinationEntity(176U);
    msg.timeout = 3510829671U;

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
    msg.setTimeStamp(0.385264581478);
    msg.setSource(11471U);
    msg.setSourceEntity(97U);
    msg.setDestination(46707U);
    msg.setDestinationEntity(104U);
    msg.sessid = 1533799210U;

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
    msg.setTimeStamp(0.871684847234);
    msg.setSource(48625U);
    msg.setSourceEntity(99U);
    msg.setDestination(5050U);
    msg.setDestinationEntity(101U);
    msg.sessid = 3469280713U;

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
    msg.setTimeStamp(0.955954999559);
    msg.setSource(16820U);
    msg.setSourceEntity(242U);
    msg.setDestination(49950U);
    msg.setDestinationEntity(139U);
    msg.sessid = 1546689513U;

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
    msg.setTimeStamp(0.228558103474);
    msg.setSource(40543U);
    msg.setSourceEntity(28U);
    msg.setDestination(36024U);
    msg.setDestinationEntity(183U);
    msg.sessid = 2468539618U;
    msg.messages.assign("XPSIQNUPTIZTERBQCJTUWKHLCDQZLBUCVULGPHWGBMZASDONKANKCDUZYAXWWANPBZBNMSETJISJGQEFOIEDRPHLEUNVRHRTQMHABVFKMWNFFCCPAYQMNRQMJHHXMBTLSPRAETGPODNCYIKAXVSUKGJHETFLFXIXDZTYLSROVLYPFVZYUVGRYSJGDXSLDCBJKFWWEQOUQZIIJNDWFHKXZD");

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
    msg.setTimeStamp(0.625230802387);
    msg.setSource(45771U);
    msg.setSourceEntity(183U);
    msg.setDestination(1083U);
    msg.setDestinationEntity(21U);
    msg.sessid = 3915318502U;
    msg.messages.assign("FBRPYSDWGXSGKILSDABVYTOHGEILBTFCIBFKIUKPVVDQHUMFDUSONAELRQQZSCRHYNUDCOJKFETWAOIHOPDSNMOGFWWTXXEAFLVRWARJVWOJMIBCDIUCEWALEYDASXKRWBCKATKKXGLLPGBMGVEUJSYOPDWJXAJBPJQOZMYMHFGLWHVQXTRQGPPHZVNBKCTMNYHXAJOE");

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
    msg.setTimeStamp(0.0987714849727);
    msg.setSource(31301U);
    msg.setSourceEntity(219U);
    msg.setDestination(2970U);
    msg.setDestinationEntity(211U);
    msg.sessid = 1943952666U;
    msg.messages.assign("RAXHKRUQTBQCFINZFFFVRNJKYSHOBFPYSWUSCYYRPQQSEZKMGKCOEUNVPZKVTBJRDGACMDWDDXZLIXTFOLLUOKYLIVILUNYVNBYAMMYMOLEQHQWAGHJBUQROXAEBDSQVDPWINBHIZFECQPATJLSRMJRQDNDMKTZBMZHEEAVEHCR");

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
    msg.setTimeStamp(0.35527420851);
    msg.setSource(11033U);
    msg.setSourceEntity(98U);
    msg.setDestination(48950U);
    msg.setDestinationEntity(31U);
    msg.sessid = 2327950050U;

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
    msg.setTimeStamp(0.27471008889);
    msg.setSource(374U);
    msg.setSourceEntity(85U);
    msg.setDestination(30324U);
    msg.setDestinationEntity(71U);
    msg.sessid = 1793267884U;

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
    msg.setTimeStamp(0.386104288182);
    msg.setSource(45721U);
    msg.setSourceEntity(112U);
    msg.setDestination(44706U);
    msg.setDestinationEntity(125U);
    msg.sessid = 792272000U;

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
    msg.setTimeStamp(0.992450988006);
    msg.setSource(25724U);
    msg.setSourceEntity(126U);
    msg.setDestination(59591U);
    msg.setDestinationEntity(93U);
    msg.sessid = 2533476024U;
    msg.status = 116U;

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
    msg.setTimeStamp(0.586136039244);
    msg.setSource(19262U);
    msg.setSourceEntity(171U);
    msg.setDestination(48797U);
    msg.setDestinationEntity(209U);
    msg.sessid = 3553705072U;
    msg.status = 108U;

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
    msg.setTimeStamp(0.00355790624312);
    msg.setSource(150U);
    msg.setSourceEntity(133U);
    msg.setDestination(38068U);
    msg.setDestinationEntity(8U);
    msg.sessid = 3072052237U;
    msg.status = 164U;

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
    msg.setTimeStamp(0.821644035581);
    msg.setSource(6632U);
    msg.setSourceEntity(141U);
    msg.setDestination(32812U);
    msg.setDestinationEntity(97U);
    msg.name.assign("REOAVDIRDOGZQQ");

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
    msg.setTimeStamp(0.265817635508);
    msg.setSource(58958U);
    msg.setSourceEntity(120U);
    msg.setDestination(29900U);
    msg.setDestinationEntity(157U);
    msg.name.assign("UFTFZPYURNBPCBBFZHTNYRCBQLEJOUWAZSPMDRKLADWQFMBLRYBIOASTWJLTWGCGWIFRALOXJFKSNXKAGNEXWXPMHRDHDDPEPUMCRGZZFHEXITGTOTSCENWBAJHVXUBKQSCKGGHSILSVPMOMQKBSUTEMVUJOHYUWVXKDKDNVJDRIYRIMIYZZAVJYPOZOLLXKQFLVSYFGAJZBCQIICNAPYJWQDVNOGYFU");

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
    msg.setTimeStamp(0.261940166894);
    msg.setSource(3219U);
    msg.setSourceEntity(214U);
    msg.setDestination(3714U);
    msg.setDestinationEntity(65U);
    msg.name.assign("IEXHZUSITBZTNTBUOLACPGAKUGHFYKQNIXILZEARQTMMQRPYEJFHYUUFPFZTGFHNRRTCGOOPCBVPUBRWHUDWLHBMJRSXFEZLPJBMDOJSSXRWZDGKABSFSWVXDMCOJHQMNDLWBEUMDDUZCKHLNSJMZAJPTILTOJXMUKYJDWFRQTAL");

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
    msg.setTimeStamp(0.502552976511);
    msg.setSource(3715U);
    msg.setSourceEntity(253U);
    msg.setDestination(61898U);
    msg.setDestinationEntity(190U);
    msg.name.assign("XSSZFNOKIVHMIKVSWUMEPFZHFSGGPKUVJOYEFPGKYLMDEQUBFNPGBILEBQRBGLYSFABQRKMKHKCEMYZEVZGURWBIXVIFRMGNDSCULSTYADJZWPSNHHCJIRZBDKUXOHHQTDDGTTVTFXYZOUPBOWUJGWERYNQWTWWRLQLCMDPHXCWCMMXHVNJQLXPFCOWLXDNAFTUYTKI");

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
    msg.setTimeStamp(0.383101340204);
    msg.setSource(61656U);
    msg.setSourceEntity(199U);
    msg.setDestination(24632U);
    msg.setDestinationEntity(73U);
    msg.name.assign("ELMIKOUAFKOOEWOVIDNFJQRRYUDJLNUMHZBBQBJHSSGJFDPFKENNLRKVSFXJXLWRRETWXURGHMCWYVLQVZNGVZWHPLSZOQHCSYUNWTANXJOAKIEAINTLTGUCTEGYYMZRBSHKAIZDQ");

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
    msg.setTimeStamp(0.919397883328);
    msg.setSource(41032U);
    msg.setSourceEntity(78U);
    msg.setDestination(42300U);
    msg.setDestinationEntity(225U);
    msg.name.assign("ZIJRHZILMEKNHVSKTFTXWQRLTYQDOTDSBRBKCLNGGVONLUXYHPOGFEJDRNUZJDRQGYZPKVLZNMBJLKECEVBGKJJBQQTMAMHRVVPJWSKUUFLCSUODVELPPVIYAWXMUMYGIFGDKACTSCIPVXOJYSBYPXZWWTMMSWFAWROIHQAWDGICBISAMHLOYETZXUTNSXIRDCQEFYFAGQUFYRZHZESOECHENHNFLAZBPWPAMOGCNDDIJRQPNFXBAU");

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
