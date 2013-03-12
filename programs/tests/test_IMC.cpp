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
    msg.setTimeStamp(0.678812120727);
    msg.setSource(49993U);
    msg.setSourceEntity(233U);
    msg.setDestination(52854U);
    msg.setDestinationEntity(79U);
    msg.state = 174U;
    msg.flags = 205U;
    msg.description.assign("GQEFLBKSBHILACGERGPWSLLHPAHYHKRUQAWMINFYKVNOKAMGDFWUFFHZBVBMAYQZYDPTWMJTSXQTEUNOGSUYCCTPCDKZWMHCCEPRSOLPFQDKBNXQVXOOGLGQNMEHRAVIMEXBIDHVPJKNSORYZVQQNXWHVWDQ");

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
    msg.setTimeStamp(0.369592380326);
    msg.setSource(21041U);
    msg.setSourceEntity(149U);
    msg.setDestination(29569U);
    msg.setDestinationEntity(228U);
    msg.state = 66U;
    msg.flags = 177U;
    msg.description.assign("PWKEIKKCCSGFLNGUEJWSSNVAOQBZYMFQQWDVGXJGNKQAXPUETJXCMOJZWDWORFRYXJBJCARYZRZK");

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
    msg.setTimeStamp(0.482462343385);
    msg.setSource(28793U);
    msg.setSourceEntity(43U);
    msg.setDestination(37764U);
    msg.setDestinationEntity(50U);
    msg.state = 146U;
    msg.flags = 191U;
    msg.description.assign("AKDEJBSYVCSJZSFDOWDQPTCWSPARIPLDXKWVASZSIRBUXQNBKLTIAZRUMUAXMGILKRKAECIFEXQCUTQMYADWYH");

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
    msg.setTimeStamp(0.388590861532);
    msg.setSource(5383U);
    msg.setSourceEntity(125U);
    msg.setDestination(24682U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.12363024941);
    msg.setSource(26074U);
    msg.setSourceEntity(236U);
    msg.setDestination(1007U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.371398369646);
    msg.setSource(54205U);
    msg.setSourceEntity(248U);
    msg.setDestination(27735U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.90928688908);
    msg.setSource(26044U);
    msg.setSourceEntity(121U);
    msg.setDestination(40148U);
    msg.setDestinationEntity(17U);
    msg.id = 28U;
    msg.label.assign("YTWUXEMDQYOZBISBMYDTJHGXLKOPXTZOAYLHGHTOTNSPCFFUBACPHFSLCMYPHPNZYQPBYIZVJTIJUTGAWXMIXVNKRIUXEUWAJWXHWEAIIEAICBMBLGDQTWMAHCJYFECYXJGFMNVLVNZEHORAKNVLQPOWFEKQEQMCCJRFYPXZKZDREVPNSDTUSLVMGFHSDURDZKFKGUQQRNOZRSLZGNFIEPWWACQVRNDOJM");
    msg.component.assign("AETYWVPEEKZNSVGHEIDYMEAUOZROHGFLGTSPUWGSJKDLLLXXIIDNLEFKGBPEFNTTOIUCGMDKJXYJDJXQCIZHVFCWRBF");

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
    msg.setTimeStamp(0.0909661806643);
    msg.setSource(62864U);
    msg.setSourceEntity(183U);
    msg.setDestination(6804U);
    msg.setDestinationEntity(173U);
    msg.id = 203U;
    msg.label.assign("SYLEOMQRHZOBQQDVEWVPGFTPQQVVDMLPXOMASWUDWAIFHDISIIMKBGSULGQTFEJTJYCUCXHEPWTRNZIAPMASIRJSSARZXIEMTGVNQPGYFDBBKUHDUTLRSMKONZJOWDCYZNDXC");
    msg.component.assign("AMAUFAVFCZDEWFMILKMHQBOGRDCTRSNWZFZGLYAJJBNIZFPRXKTVUJOCDSGXTLXIECUBWMSPCQYVUWZFYTGCTGYJKBAWNNPXTJDFAPCGCKTIUEGFXJR");

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
    msg.setTimeStamp(0.0717889590822);
    msg.setSource(5198U);
    msg.setSourceEntity(166U);
    msg.setDestination(7707U);
    msg.setDestinationEntity(127U);
    msg.id = 153U;
    msg.label.assign("SLYPXNIDUOFICJPRKIGSSVEUERXYPVVKQFDEIUJYJLSGNXORNUXBADKIOFEJLWKNGIQOZBGAELAMHKXQEHENJZQCUBHMASWFQYGPYFPDTUHTFHFXNJWRHIAMRNIWMKBCAKQVLKBNYFTCRVFIANLCZOTZUPSZMGYWAVQBVMSDOBYBHZXTILSXTUCDPRWZDTMAVGWULXQCOAPTKERZCSPKRDTVJMGBGPJZYD");
    msg.component.assign("ZSYHHIGQHDNNQNBMJVJOFNZDYNJRVALWFMBLKXKUKDGCOAZVTSILVEETCZEIKKL");

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
    msg.setTimeStamp(0.871104618955);
    msg.setSource(33121U);
    msg.setSourceEntity(146U);
    msg.setDestination(54916U);
    msg.setDestinationEntity(246U);
    msg.id = 129U;

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
    msg.setTimeStamp(0.278010168055);
    msg.setSource(65097U);
    msg.setSourceEntity(142U);
    msg.setDestination(2393U);
    msg.setDestinationEntity(12U);
    msg.id = 137U;

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
    msg.setTimeStamp(0.507287164115);
    msg.setSource(59783U);
    msg.setSourceEntity(56U);
    msg.setDestination(13639U);
    msg.setDestinationEntity(183U);
    msg.id = 10U;

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
    msg.setTimeStamp(0.0357997847751);
    msg.setSource(63835U);
    msg.setSourceEntity(103U);
    msg.setDestination(35144U);
    msg.setDestinationEntity(160U);
    msg.op = 0U;
    msg.list.assign("FFQRLYWAGSIDFKCYQSCYHOCPQYTAFPKGNIVOIOPFBRIPUTBINOSXZEDRPKBZWWNVRHQJKSQMPZXIORKPEVACBXAMZHTYCEMHRQJNTGINYYFDCXQTULJEMVNVWJGESPLEELIZXHFLRLDL");

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
    msg.setTimeStamp(0.228506018355);
    msg.setSource(12009U);
    msg.setSourceEntity(178U);
    msg.setDestination(64933U);
    msg.setDestinationEntity(52U);
    msg.op = 167U;
    msg.list.assign("UVHEIJBMLTXREBTRSBNZPLXWDDENZKAVYZQWSJJWMIRYKXWKAEADEUQVUSXNZLHCDOGTUNSOCUKSFEDS");

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
    msg.setTimeStamp(0.294068671003);
    msg.setSource(21363U);
    msg.setSourceEntity(13U);
    msg.setDestination(20034U);
    msg.setDestinationEntity(180U);
    msg.op = 93U;
    msg.list.assign("ULRQDLLIBZTMEGBKIAZJQINVTCPWPKYBFHKJDTFVIEEWOSBBVIVBLOUECDTVZXRHMWPWDXJCEFPRZMDYAPVKMRPDOQZXNEHHHKYOOXXVDNGXTNQZSGM");

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
    msg.setTimeStamp(0.228899395829);
    msg.setSource(25001U);
    msg.setSourceEntity(52U);
    msg.setDestination(22788U);
    msg.setDestinationEntity(19U);
    msg.op = 28U;

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
    msg.setTimeStamp(0.996582601465);
    msg.setSource(26806U);
    msg.setSourceEntity(65U);
    msg.setDestination(40644U);
    msg.setDestinationEntity(79U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.814416917442);
    msg.setSource(46449U);
    msg.setSourceEntity(166U);
    msg.setDestination(16625U);
    msg.setDestinationEntity(148U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.283437459364);
    msg.setSource(58523U);
    msg.setSourceEntity(81U);
    msg.setDestination(19797U);
    msg.setDestinationEntity(234U);
    msg.value = 219U;

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
    msg.setTimeStamp(0.0907937450285);
    msg.setSource(32022U);
    msg.setSourceEntity(103U);
    msg.setDestination(25625U);
    msg.setDestinationEntity(157U);
    msg.value = 80U;

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
    msg.setTimeStamp(0.898157743579);
    msg.setSource(54641U);
    msg.setSourceEntity(158U);
    msg.setDestination(41342U);
    msg.setDestinationEntity(154U);
    msg.value = 106U;

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
    msg.setTimeStamp(0.750278807464);
    msg.setSource(54795U);
    msg.setSourceEntity(80U);
    msg.setDestination(16929U);
    msg.setDestinationEntity(221U);
    msg.consumer.assign("GJPULMXWMQVVZSQMGMTZGIPSNTDZPRJGEIBIRPHWEVORJLYDMJBDXULRGBDFBTCKNEFQCWRAZSLKVXUTEYDLEYEHADUWXFZWGAKIHFXYCLYWDANWQVLRUJDTZNCFXOCCOQTIBHQWXGIMAKYKNVVOIJDQBPPEBBKWKOKVNMIEKIRZXZJALNFGJFS");
    msg.message_id = 24073U;

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
    msg.setTimeStamp(0.642575190738);
    msg.setSource(38556U);
    msg.setSourceEntity(155U);
    msg.setDestination(51425U);
    msg.setDestinationEntity(173U);
    msg.consumer.assign("HFFYHHMAOZEKVMRVVRDOZGSSGPKDXXFZRRCEEVOKPLBHOCYLALGHKPZCGDRWQIPNNNUACPCJIGFTOZQXNHSENVMSJCEYLLGGJZHLNEGRHDNSUPDWTPDAJIOQMTVJWWXISQMANBNCQMOWXIVZLVQHTWYSFKOECKRJREXYATFVSDBLLIOTGTRMQQZXKBJWXJFMACIWZFVCURUENJXQFPIAKDTUEMIAFDBUXUPI");
    msg.message_id = 62270U;

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
    msg.setTimeStamp(0.0552372807495);
    msg.setSource(34066U);
    msg.setSourceEntity(36U);
    msg.setDestination(60889U);
    msg.setDestinationEntity(210U);
    msg.consumer.assign("ETSFEHEGNURLRINIMJAQUTPPCIWXBYKCMGEQIEVIWPZWAGHCTNAVSNMKMNGSCGGTLJHJMFBZ");
    msg.message_id = 35963U;

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
    msg.setTimeStamp(0.37952970064);
    msg.setSource(40682U);
    msg.setSourceEntity(220U);
    msg.setDestination(38357U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.111099032816);
    msg.setSource(18839U);
    msg.setSourceEntity(122U);
    msg.setDestination(31090U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.344853240053);
    msg.setSource(6437U);
    msg.setSourceEntity(236U);
    msg.setDestination(56686U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.304722699934);
    msg.setSource(3808U);
    msg.setSourceEntity(48U);
    msg.setDestination(29640U);
    msg.setDestinationEntity(82U);
    msg.section.assign("NBRBHHXEZBABUDMTQSEIXGTYYFIUTQQXSVAELPROWINNEGEKASJYNPBOCDMCGMDXJMNVVSOZPWNVCDXDCGLHSYTRHWCCWDNKLWBGDPRYOWJQIMPEAPRPTFTOYGUSZQSBAFZCKHSHHJMUCRVVHKLIQRDJWOZYVBJNLAZKCEKPTUUGXIPXMPZTHQIROLUVJFQWGBUDFFFBJOGKERHUIYYAIESUKFWT");
    msg.param.assign("IJMLPKVKWMIKUASYTBPBRVJRNOCRHXXBEGEEIRFULKFWYPTTKENYPQONXFAHBSYFKBKOONVBCHZKZNNWECDQXZQDSTBGMLVAZVTYKLIF");
    msg.value.assign("QUXQGNVCHKTQGYQZLROPGWZXGTDBHPHCNQCPWEJLAPYFZTZBABOACDEXHOPDWOYJFYFSRIMKRDPRTBJXJNWVBIFUIUCBSXHGJQALQMSIFWKYHYJAKESVSKPNLOYYTEIIWRNSXBYDWTAPMOKFQSVLHWEXRUREKEFXAUMKCGOLBW");

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
    msg.setTimeStamp(0.813318781267);
    msg.setSource(25962U);
    msg.setSourceEntity(129U);
    msg.setDestination(50666U);
    msg.setDestinationEntity(69U);
    msg.section.assign("XKXOEQBJKCHTQKCXRIZGUPKFYSWDLSNJQEAJNNVHVEADGCUTSPHMESVTCUUHDIANIAYPXYKPKABDFSLOJHYRAMRQBLILZTICWSMEWRYZYDFONPMAITFNDEVXGBZXRBKMQXRCWGALGCGVGVUFNMZMCMQLMPOPXQKUIQURCZPBQYOZDNFZFLPHYKWBOEWFVRNXEWIJWFDTEWZEVSGFZPJISCDOWDUBJUNTSQHKAMOLBSHRGLJYIOJVTHBUJAHR");
    msg.param.assign("CLRKZOFVPQYROCBUXBUXKEWJLMDMGDVXNFYGIQAAAOLPCICSWWSTSHKG");
    msg.value.assign("KFTWIYOJXDUWMLVZGIPQKCRFVZRHAXIZINMQUNNNCDYNBXZTUBRMOTXACWZFCBLMZ");

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
    msg.setTimeStamp(0.775091468172);
    msg.setSource(26069U);
    msg.setSourceEntity(33U);
    msg.setDestination(40085U);
    msg.setDestinationEntity(163U);
    msg.section.assign("BEFJGFLDRJMRQCXNGKPILUXQCFCMOCTMA");
    msg.param.assign("YHNKBJTEMHHBTFRYOSJCDIKBMSYGJLLJERGWFDPIBLZXJXMKHWPGFWHZIHYTNVUMZPDLQSAYFHRUAXCBBJKZXQYDUQQMTXZYAEJRGYSNFVHMGWRCIXNPUWGFFOCVKKPQCEHGODTDPKZILFLJEBERXUUPQIDAZWUJPMLBEUTCVOKGMQTUSWPOGRFAQCVSXSYOUIDNTELWVCREDWPKMRSVL");
    msg.value.assign("PEQFXABJVWKR");

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
    msg.setTimeStamp(0.312781687645);
    msg.setSource(23538U);
    msg.setSourceEntity(44U);
    msg.setDestination(36610U);
    msg.setDestinationEntity(108U);
    msg.op = 249U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("TNBDINSBSACHDILXCLIFKITRLRVQNBDAPYJOKHUSJMQGNPJEYMEPXWBEQXSHNBSOOGRHOTYYLOFGRVNMBMSRXHWRLKVKQRYAKAIJPWSFM");
    tmp_msg_0.param.assign("NPSQJPNNXDYUQUEXMBKHIDPCLCYFIWBKRAOEXTTFENKTTEPZZNDGBYLTPTIJUIHFRGYLFBHMEOFKSREILAYUEVTZSAAXHRKIYRAGXU");
    tmp_msg_0.value.assign("DFQVCLFJHDORJKUDUSOCEVTLLDWPEHRRPIUUXOBRJYLOVWPSFQIPBZENPPARKZOGN");
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
    msg.setTimeStamp(0.167655558813);
    msg.setSource(9085U);
    msg.setSourceEntity(60U);
    msg.setDestination(30002U);
    msg.setDestinationEntity(89U);
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
    msg.setTimeStamp(0.568374952706);
    msg.setSource(15969U);
    msg.setSourceEntity(83U);
    msg.setDestination(18305U);
    msg.setDestinationEntity(131U);
    msg.op = 239U;

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
    msg.setTimeStamp(0.825966480029);
    msg.setSource(3185U);
    msg.setSourceEntity(68U);
    msg.setDestination(30664U);
    msg.setDestinationEntity(26U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.379416388261);
    msg.setSource(41150U);
    msg.setSourceEntity(35U);
    msg.setDestination(52712U);
    msg.setDestinationEntity(60U);
    msg.op = 36U;

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
    msg.setTimeStamp(0.626814589006);
    msg.setSource(15708U);
    msg.setSourceEntity(192U);
    msg.setDestination(20409U);
    msg.setDestinationEntity(116U);
    msg.op = 157U;

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
    msg.setTimeStamp(0.854471751039);
    msg.setSource(62786U);
    msg.setSourceEntity(115U);
    msg.setDestination(48333U);
    msg.setDestinationEntity(10U);
    msg.total_steps = 64U;
    msg.step_number = 103U;
    msg.step.assign("TJLLSXKMYXSKKPTXVENACRUYLDUTQJWBLHVDMYJVXNDCQ");
    msg.flags = 147U;

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
    msg.setTimeStamp(0.989762604525);
    msg.setSource(37142U);
    msg.setSourceEntity(232U);
    msg.setDestination(59410U);
    msg.setDestinationEntity(76U);
    msg.total_steps = 136U;
    msg.step_number = 168U;
    msg.step.assign("OTLUGTKKDYKPMSXPEUSEPRKZSLXWAPYBVMAVIUNUFEGIKQBQTDFYNLOMXQLBIQDQHRELWOFTHIMGLYTFNQXFDKMTDBMOWGRXRCHNJAGTUGVWUBLOEZPMYPDHAFJWADIPGYUCVAXJXDTLSVZIJWNWYJNBINZMSFZZNHVQXMEZFOCKJDCZBTJRWCABOLYHRZVNFKDJGU");
    msg.flags = 211U;

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
    msg.setTimeStamp(0.676450402172);
    msg.setSource(26123U);
    msg.setSourceEntity(153U);
    msg.setDestination(51322U);
    msg.setDestinationEntity(20U);
    msg.total_steps = 42U;
    msg.step_number = 121U;
    msg.step.assign("DADEOJMTQXJLQMPNFYTXASROKJIGSEVIVPQIRQCBPKWYAPSNPTHGQBRBMWXEKCPFUYWHLHNPDBKBBRBRNHLKZKGAZZVYDGXOFZHNVEWJVOSEAFMDFNLTVKEROSISJLFZUFAHJMMGRPHLLMSUVELTBQDEKDRUIXQY");
    msg.flags = 121U;

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.211785679912);
    msg.setSource(26512U);
    msg.setSourceEntity(121U);
    msg.setDestination(35557U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.788962823116;
    msg.lon = 0.532931303701;
    msg.height = 0.0951402080239;
    msg.x = 0.586857014104;
    msg.y = 0.474768099047;
    msg.z = 0.836029902945;
    msg.phi = 0.0612205704043;
    msg.theta = 0.579648730659;
    msg.psi = 0.648687408524;
    msg.u = 0.870310180843;
    msg.v = 0.774804815193;
    msg.w = 0.180929018418;
    msg.p = 0.0655828401398;
    msg.q = 0.292209997786;
    msg.r = 0.755832535172;
    msg.svx = 0.384663643133;
    msg.svy = 0.869429067551;
    msg.svz = 0.0345871460317;

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
    msg.setTimeStamp(0.606518841249);
    msg.setSource(16405U);
    msg.setSourceEntity(87U);
    msg.setDestination(24116U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.0189556428809;
    msg.lon = 0.323043360772;
    msg.height = 0.875178020345;
    msg.x = 0.259984510124;
    msg.y = 0.289596892587;
    msg.z = 0.362987497383;
    msg.phi = 0.936070146073;
    msg.theta = 0.290751555263;
    msg.psi = 0.973359428433;
    msg.u = 0.230987788719;
    msg.v = 0.602877852461;
    msg.w = 0.163410105727;
    msg.p = 0.371661821558;
    msg.q = 0.742076288425;
    msg.r = 0.216074095971;
    msg.svx = 0.755816738181;
    msg.svy = 0.57897762395;
    msg.svz = 0.417446456858;

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
    msg.setTimeStamp(0.562150267512);
    msg.setSource(8420U);
    msg.setSourceEntity(143U);
    msg.setDestination(31084U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.572276889911;
    msg.lon = 0.156831556103;
    msg.height = 0.544993512074;
    msg.x = 0.414994818756;
    msg.y = 0.605657633028;
    msg.z = 0.515702890732;
    msg.phi = 0.017178677072;
    msg.theta = 0.207768607238;
    msg.psi = 0.452106946051;
    msg.u = 0.157792001974;
    msg.v = 0.748008352279;
    msg.w = 0.326819084003;
    msg.p = 0.0118090344702;
    msg.q = 0.404305918531;
    msg.r = 0.539110908968;
    msg.svx = 0.17628254878;
    msg.svy = 0.165495840236;
    msg.svz = 0.509054697457;

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
    msg.setTimeStamp(0.550285311058);
    msg.setSource(12934U);
    msg.setSourceEntity(66U);
    msg.setDestination(57172U);
    msg.setDestinationEntity(229U);
    msg.op = 37U;
    msg.entities.assign("TGCSGGAMMKCTWSZBBTENMFKZCUICIQROGLAWEKUKMNCUJOAEUWEVJXYTNUFRJPPDEHFLSSHVTILIJONNLSEHOFBZDQYOPLMLNLAHTDKJSLBPWIGARCVQTZVYUHZMWYCVAPNQRETXUXOEHIFLIMBJWTWDAXEVJ");

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
    msg.setTimeStamp(0.336639091283);
    msg.setSource(9118U);
    msg.setSourceEntity(9U);
    msg.setDestination(32621U);
    msg.setDestinationEntity(106U);
    msg.op = 23U;
    msg.entities.assign("OZUNQMZWHMQDHFGVXPTPLKWP");

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
    msg.setTimeStamp(0.283488366937);
    msg.setSource(6278U);
    msg.setSourceEntity(32U);
    msg.setDestination(39250U);
    msg.setDestinationEntity(133U);
    msg.op = 109U;
    msg.entities.assign("UUPQTCQEAANNVDJHMWVUKTSKVI");

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
    msg.setTimeStamp(0.317400989842);
    msg.setSource(28699U);
    msg.setSourceEntity(28U);
    msg.setDestination(48978U);
    msg.setDestinationEntity(202U);
    msg.type = 67U;
    msg.speed = 58816U;
    const char tmp_msg_0[] = {37, 48, -33, -9, -79, 24, 95, 50, 50, -47, -21, 8, -11};
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
    msg.setTimeStamp(0.714937099059);
    msg.setSource(19034U);
    msg.setSourceEntity(105U);
    msg.setDestination(18096U);
    msg.setDestinationEntity(184U);
    msg.type = 228U;
    msg.speed = 65081U;
    const char tmp_msg_0[] = {-110, 74, 64, 25, 7, 106, 108, -126, 108, 126, -6, -7, -91, -105, -88, 126, 58, -124, 6, -48, 22, -83, -32, 66, 117, 19, -2, 49, -52, 50, 122, -94, 70, 17, -68, -56, -29, 98, -54, -100, 78, -33, 81, 91, -103, 102, -116, -9, 9, -49, 113, 53, 77, 13, -59, 52, -1, 107, 109, -21, -35, 2, 96, 32, 37, 63, 13, 57, 94, 36, -103, -6, -96, 119, -46, 116, -44, 22, 52, -83, -70, 115, -41, 93, 57, -117, -84, 121, -57, -65, -37, -18, -34, -69, 102, -119, -100, 12, 40, 107, -86, 2, 75, 49, 86, 12, 14, 11, -101, -52, 15, -88, 105, 116, -14, 79, -21, 124, -98, 91, -70, -100, 2, -74, -41, -58, 34, -32, 3, 26, 123, 41, -124, 97, -53, 5, -13, 46, -115, -84, -92, -101, 1, 115, -47, 25, -53, -31, 6, 14, 65, -2, 18, 115, 61, -6, -79, 2, -111, -122, -110, 124, -73, 86, 102, -13, -24, -22, 80, 66, -68, -49, -33, 20, 51, 95, 67, 97, -46, -75, 41, -42, -46, -4, 110, -25, -7, -87, 59, 87, -40, -111, -77, -71, 14, -122};
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
    msg.setTimeStamp(0.356793471649);
    msg.setSource(65110U);
    msg.setSourceEntity(146U);
    msg.setDestination(8127U);
    msg.setDestinationEntity(242U);
    msg.type = 59U;
    msg.speed = 48442U;
    const char tmp_msg_0[] = {59, 72, 8, -17, 9, 108, -77, -58, 86, -4, -65, 58, 12, 20, -117, 34, -115, -73, -22, -125, 11, -61, 62, -76, -82, -35, 94, 41, -101, 84, -44, 85, 24, 78, 126, -36, -114, 52, 80, -15, -30, -48, 15, 96, -1, -14, -124, 41, 34, -53, -28, -64, -35, 21, -108, -27, -124, 79, 57, 89, 12, 68};
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
    msg.setTimeStamp(0.952857528966);
    msg.setSource(41551U);
    msg.setSourceEntity(154U);
    msg.setDestination(13559U);
    msg.setDestinationEntity(168U);
    msg.available = 1274062088U;
    msg.value = 141U;

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
    msg.setTimeStamp(0.615474539269);
    msg.setSource(29317U);
    msg.setSourceEntity(161U);
    msg.setDestination(51018U);
    msg.setDestinationEntity(203U);
    msg.available = 3246589706U;
    msg.value = 208U;

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
    msg.setTimeStamp(0.602994840729);
    msg.setSource(62755U);
    msg.setSourceEntity(168U);
    msg.setDestination(34472U);
    msg.setDestinationEntity(172U);
    msg.available = 1045605757U;
    msg.value = 253U;

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
    msg.setTimeStamp(0.629487653816);
    msg.setSource(35263U);
    msg.setSourceEntity(65U);
    msg.setDestination(48525U);
    msg.setDestinationEntity(130U);
    msg.op = 99U;
    msg.snapshot.assign("VNEBFEKZNSWHYBKNGFSXPMQKUHLBIWRFDZQXYOYHQCNLIZDGWKVQUNTVARXSLM");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 73U;
    tmp_msg_0.reason = 206U;
    tmp_msg_0.value = 0.320768785187;
    tmp_msg_0.timestep = 0.534178216258;
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
    msg.setTimeStamp(0.0762457006002);
    msg.setSource(3876U);
    msg.setSourceEntity(30U);
    msg.setDestination(7569U);
    msg.setDestinationEntity(27U);
    msg.op = 225U;
    msg.snapshot.assign("ZSWJCFZUJROFEDGJOOYMHNVPXPAXLMRPAYMRGBBIIYMNLESQDENSBSICWQUXKZUD");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("VKOYMYRMLMLUOINVXYMDKGHBITGMZANCYEKRLIERDUASHOSJJSBCBIXTZCBSXGSODAKUEDPMEBXXXKGEFHZTDDTJJZVNKRSUUZZNWVBNWPCJONIHWLOGSTJKLXMZYLFAQUTFPJDIIWOIPYI");
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
    msg.setTimeStamp(0.936129943853);
    msg.setSource(52947U);
    msg.setSourceEntity(112U);
    msg.setDestination(22962U);
    msg.setDestinationEntity(70U);
    msg.op = 235U;
    msg.snapshot.assign("ZFZUKEAEVPNAZQITCNZFOFXCLTMYKILUPNIQSKOVWZGOFTGKOHWURYYJSBDSSNFMIJIEKWBMCTAAZBJQQVWHACXVOPDLREEBELSXXKTDDFHKLREJOJLQTLHNVPOWXPTQSVUTBEAVURWRZPBXHYOJNOEGVRCGHLGSFPRYXMRDDRGWMIUXCDYEQUICPLCSBUGZKYWAWBOHHJFQUMMFLDXNGGAPBNZJZUYWHIBJSQCPTVQHASJMXDMI");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.350735803557;
    tmp_msg_0.speed_units = 6U;
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
    msg.setTimeStamp(0.654439226255);
    msg.setSource(31005U);
    msg.setSourceEntity(170U);
    msg.setDestination(37439U);
    msg.setDestinationEntity(39U);
    msg.op = 77U;
    msg.name.assign("MOPMIGIPGWBMHQJDBJNQEDGNRHXWYGTLXGXYIGFFZUMIXHOVCVXSURDFAFWWXIPVJTTCKYCDNCXDAWZQMDJPFLIRLPNJZATHEPFG");

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
    msg.setTimeStamp(0.785765956409);
    msg.setSource(1165U);
    msg.setSourceEntity(74U);
    msg.setDestination(65295U);
    msg.setDestinationEntity(154U);
    msg.op = 102U;
    msg.name.assign("RBLQJTKHOACUYQXJQRKDBOTDCVGTNFXFVVAIXZMGDYRQASGHSJTELPVAEASVDAOPZOMMYAHWSMQEDDKGTGPEFHWHNLYPVIGBKVLOOCFEMISEFRZUKNNLHCRIHUYPNICZW");

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
    msg.setTimeStamp(0.205896248249);
    msg.setSource(61732U);
    msg.setSourceEntity(218U);
    msg.setDestination(63397U);
    msg.setDestinationEntity(162U);
    msg.op = 129U;
    msg.name.assign("ZLVGYHOGKCMYPMTULFODBHMYRTBLDGPQRQVVOGSUNUSWYJRPOYAQEGOFFFHK");

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
    msg.setTimeStamp(0.930847175077);
    msg.setSource(47947U);
    msg.setSourceEntity(97U);
    msg.setDestination(48541U);
    msg.setDestinationEntity(63U);
    msg.type = 48U;
    msg.htime = 0.655741451937;
    msg.context.assign("LOUHRSGQWHPHFPIIDCZTQEYXSOYDCZIZXMKGZMPBRLOMOAZVYMAFLWJZDDNIPOGQUYEIOUSIGYVDEVHSEUUJXRMUOAQJBLVXTBLFFSWWFSVWGJRGQAHGQEXTCTZKQDYCVDRVACNXTKMXTROJEADIJMPQXVZEZTCGSUFLMQYRBKGPYFPHADAXYEOCRYKJWBBKFLKNSTNSBBINAQWAPPFJWMWOKGZ");
    msg.text.assign("DPIDSDTEQBRPIBHRYDGUNHRBOVPYRBSGZUZBOCQN");

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
    msg.setTimeStamp(0.541846179893);
    msg.setSource(35410U);
    msg.setSourceEntity(252U);
    msg.setDestination(26802U);
    msg.setDestinationEntity(218U);
    msg.type = 240U;
    msg.htime = 0.156836760232;
    msg.context.assign("YBUCLJWAKPNDRWUDXTOMBUYDEXZHKKRONHZYVKSMDYCOSVIGWXPBIJSVNTHOQIVOGHPLLFTANKRWZCVFCGQKSORLKHBXHPFRDDSJLOMHTCWPBTEYPBZANQOVRGGAIBTAFVMFQKJPDKLJVMOEIJQSUMTWTUEIGLXNDGETGFFPOBDVWIQWNZPEGJCCYRCQXAUCYNSSWZQIRAHQFM");
    msg.text.assign("DRMKLASIJFYZIOIEUQXKZCUDLMADADSMARVHCYVOCHQHJXGYLGSOVGFJRYAQQGGDRECNZKVEGCMNOGSCPWSPTNWYWQKUXRQFBMHLXVYTICAWIBBHWIPEZSNVUJKIKOBGFYTCZJDZTOOMUA");

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
    msg.setTimeStamp(0.351272113453);
    msg.setSource(63920U);
    msg.setSourceEntity(106U);
    msg.setDestination(48947U);
    msg.setDestinationEntity(165U);
    msg.type = 54U;
    msg.htime = 0.936170439986;
    msg.context.assign("GBEJGYDAIVDZIKZAQPQFQOESPURZRMQBGLTKNOQFGCSWNLMORJPSWSTYBXWDJAKMRB");
    msg.text.assign("WYIWMUWSPUAPAZDHCFJYTSLHXCVZZELRKAVYNNKDHGTSKDGHRZWKZRFORNBQFBZIVVIXZEKLJLIUXJKCENILVFBOSPFOZNAEQYSUTALFUMHTTDKJDPPZXOYCOGEVSLSEIOUGFNRBWAZNPACDXHFJOCDJEJVJIDXRKU");

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
    msg.setTimeStamp(0.00814525913414);
    msg.setSource(29003U);
    msg.setSourceEntity(98U);
    msg.setDestination(5735U);
    msg.setDestinationEntity(20U);
    msg.command = 162U;
    msg.htime = 0.412047854158;

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
    msg.setTimeStamp(0.555209923754);
    msg.setSource(18005U);
    msg.setSourceEntity(227U);
    msg.setDestination(39537U);
    msg.setDestinationEntity(53U);
    msg.command = 52U;
    msg.htime = 0.295932887213;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 50U;
    tmp_msg_0.htime = 0.151691314654;
    tmp_msg_0.context.assign("MOEKUAMKDXNCGSTULQYVHPYAZUJGPEDIMHXWJCPVCPUEVZZUKLYJXAXCNEMKDSPZFOOQWWXHTZERQNDJSQLUAGQNHFMDYHRLBPSCYQLEJPGJJDKNNFIWERYWRFHOWBUBGOTAFFHLYNIAZCXBIFMXDRAOZOIJSTVMCSPWTLMQHVAKAUFSIZHGIJMVXQTBRNCRYQDA");
    tmp_msg_0.text.assign("KJCTFVNPOJBJAQMLVTXLPYUPVLSTZDAIJYPKTCFDBSNIYKCWGDZJYLFLHRAOMILYQBPEQDQISIIDFBSGXQUXJAKFGCVRUYTEZMAUZNWWRCUPUHJUOEHMFRXVZDGITMTYNZADZXQVHMEFBNIGMRZ");
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
    msg.setTimeStamp(0.87597453085);
    msg.setSource(46502U);
    msg.setSourceEntity(153U);
    msg.setDestination(4211U);
    msg.setDestinationEntity(116U);
    msg.command = 161U;
    msg.htime = 0.0394782455111;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 49U;
    tmp_msg_0.htime = 0.141412967523;
    tmp_msg_0.context.assign("GGQARGPXGQSUGOJOABLETZSYRDIZRSDWZUVGDAKEUJCLRTIWVJXXBNOYKOPNNHYTBLBJZFOZMZDSMQEU");
    tmp_msg_0.text.assign("AHPTWJNXESWJXEIWXZJWUYMUDRRXQQLRUYARPLUOCOJEGOTSZGEEFPGSKKJCKTBDKGMLDIPXSWLCARBLF");
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
    msg.setTimeStamp(0.892290181262);
    msg.setSource(5378U);
    msg.setSourceEntity(41U);
    msg.setDestination(44470U);
    msg.setDestinationEntity(251U);
    msg.op = 14U;
    msg.file.assign("OZAJIHFZVGMOECHLQZZQMKCOPLYRCVHLXDWWEVKUOKMNGZUXLQFYGVZWVOYFK");

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
    msg.setTimeStamp(0.0985466723992);
    msg.setSource(50958U);
    msg.setSourceEntity(163U);
    msg.setDestination(48312U);
    msg.setDestinationEntity(80U);
    msg.op = 45U;
    msg.file.assign("PUESIHUBADGOJATYHPINNZTSKVPKYXRQNWRTSPBAZCVDQVPJVWKVFITUSSKHPFLLEGSMSQIRJLYHUHFEROYAWRMFEEVCMPNMAXWGIFMOXTJBHIKXHFCTPEJMXBJKBDZRJODQQCFEZWNDZKXYIGXNBORUXBBOJUUCTOJFVBUWHFNHNCQUVAWGLBYJKWGTVGGAOLENRSYRZADLYLQMOFWAGMZPCOCQXSTZZ");

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
    msg.setTimeStamp(0.836716300097);
    msg.setSource(33163U);
    msg.setSourceEntity(91U);
    msg.setDestination(6865U);
    msg.setDestinationEntity(105U);
    msg.op = 63U;
    msg.file.assign("SBQHYKYVBRJOEJILATDZHLKPEAXHLSQTIQCQVIXYMBHPTJW");

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
    msg.setTimeStamp(0.848648526886);
    msg.setSource(47751U);
    msg.setSourceEntity(167U);
    msg.setDestination(53063U);
    msg.setDestinationEntity(184U);
    msg.op = 3U;
    msg.clock = 0.598968206985;
    msg.tz = 120;

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
    msg.setTimeStamp(0.337799177453);
    msg.setSource(44983U);
    msg.setSourceEntity(242U);
    msg.setDestination(34264U);
    msg.setDestinationEntity(59U);
    msg.op = 19U;
    msg.clock = 0.87945105589;
    msg.tz = 111;

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
    msg.setTimeStamp(0.633374585552);
    msg.setSource(5942U);
    msg.setSourceEntity(10U);
    msg.setDestination(4459U);
    msg.setDestinationEntity(21U);
    msg.op = 242U;
    msg.clock = 0.52096358365;
    msg.tz = -106;

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
    msg.setTimeStamp(0.0182379048767);
    msg.setSource(61942U);
    msg.setSourceEntity(40U);
    msg.setDestination(48659U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.453302903852);
    msg.setSource(26036U);
    msg.setSourceEntity(30U);
    msg.setDestination(30085U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.234704206303);
    msg.setSource(15978U);
    msg.setSourceEntity(7U);
    msg.setDestination(16882U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.25459243408);
    msg.setSource(50537U);
    msg.setSourceEntity(148U);
    msg.setDestination(30744U);
    msg.setDestinationEntity(128U);
    msg.sys_name.assign("WDIBOCXKZLYPPSUBQNUXWATIMJFGFJDVQMNFQHBAU");
    msg.sys_type = 230U;
    msg.owner = 46337U;
    msg.lat = 0.538072263692;
    msg.lon = 0.686724519826;
    msg.height = 0.504297867267;
    msg.services.assign("DDEJVKJWNJCUNUFIWPXJYIDMTPXFINUQXATYEPCZTQOWDUBKXSHSSOPTFEVLYGUZKWGCJONKYEUWYULGKHTDYNBZSZSMNXLTHMIMCELFRPAPLGQVSBQDC");

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
    msg.setTimeStamp(0.239583686896);
    msg.setSource(16251U);
    msg.setSourceEntity(237U);
    msg.setDestination(12577U);
    msg.setDestinationEntity(92U);
    msg.sys_name.assign("VZOENQKQGAJCHDJQZQTTCHCBGCZXKAEJLW");
    msg.sys_type = 82U;
    msg.owner = 21987U;
    msg.lat = 0.0856047702472;
    msg.lon = 0.067848132867;
    msg.height = 0.512967113872;
    msg.services.assign("SZFZXEAVYAKF");

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
    msg.setTimeStamp(0.385289335726);
    msg.setSource(48272U);
    msg.setSourceEntity(246U);
    msg.setDestination(10915U);
    msg.setDestinationEntity(174U);
    msg.sys_name.assign("ZVMUPDJXQVPEJRHDLZJYMVGCGIFHNUHFIYILKNBKDFCMWJYROCUVUNQIUYHGKUQOTPQMMQXFZFDVNPUWNVBCODMNBHDPOYDZWSZVCUZNKCMDAQPVAWRERWIEWTNSTKJARLGELOZLCVZLETEFRRABAXSWYAJGQHSCEQZAGGYJHKOQSSTYBALRCMTGQGXIYURTIWVEJHHGJTMORXXHNKPCSNKTFSFOLBWBSLFDZEIKOPUXALWPXITXBFESK");
    msg.sys_type = 56U;
    msg.owner = 36406U;
    msg.lat = 0.699563329821;
    msg.lon = 0.700579144975;
    msg.height = 0.859743664729;
    msg.services.assign("USRLRVQNSZOXPCLRHSHVVUSKVJYJBQICFGRKUOVDOMXOWVKXIGFRCQSFBUEZGJXFTCNXPYYDEZOHIPNTTMDDASUEMJWGJSPPNOINRAKZAYEDJETQEMNQCXOBWJMZLCFHUNNCCEEKZW");

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
    msg.setTimeStamp(0.166594036885);
    msg.setSource(48950U);
    msg.setSourceEntity(207U);
    msg.setDestination(33898U);
    msg.setDestinationEntity(172U);
    msg.service.assign("CBBHHGYOFRKZBLYYFMXPNUGRWPFVCVCYQMOWIDJXTULRDILUCGRIIBMOACOZVASKSJXIUGWKNNPTMFWXHANMRYSXIJOPLZSJHRFXDWOVDOCEVGUUEHZVIZKSSDTNLHPEJPSMJXCDUSLPWCEPNOMZGOGCIQATVMGVKWOYAYLFTSUNIURQIBFHZAHVARBLRXKFNQJRESTLTQYZQJHDKGQBGJCYFE");
    msg.service_type = 1U;

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
    msg.setTimeStamp(0.653822650812);
    msg.setSource(42706U);
    msg.setSourceEntity(161U);
    msg.setDestination(27079U);
    msg.setDestinationEntity(102U);
    msg.service.assign("YKAHZCAVBAGFXCRPLFPWNQRFVUOLZEGHSEWRDVXSIYJMQPFMUMKBNDFHWYYTUYBJNMZUZYQTROQYESWBFJCHGMVILCRRQEWXBIRDKDAQDALPZFKJMMIHUFUOJXMSZSL");
    msg.service_type = 29U;

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
    msg.setTimeStamp(0.846194536886);
    msg.setSource(20351U);
    msg.setSourceEntity(125U);
    msg.setDestination(32577U);
    msg.setDestinationEntity(85U);
    msg.service.assign("FWPZMKAOARGOUUVWKTLRNWJCNOXMYZULMSLQQFFIVCVRPNHDAJYDPOALCPNBXKRFETXCSZVHNFRFJDIFQSMHGNHTHEETGKJHGSXHWBIEYZXGVCPABPUMYBNQWKYPIGGRTGNLZXHXKDUDYNVUCYGYFPIJXRLQBYWLOWVCEABEOBTYTMELSAOQEVAPDFUCEKMZDZQKGJBDSSMMKAIZZUDJRBTWQFXZIKOUIAEBIHJHQXDOSJSIJRWT");
    msg.service_type = 93U;

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
    msg.setTimeStamp(0.266359963454);
    msg.setSource(19358U);
    msg.setSourceEntity(160U);
    msg.setDestination(47231U);
    msg.setDestinationEntity(7U);
    msg.value = 0.36522566411;

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
    msg.setTimeStamp(0.572632796737);
    msg.setSource(38581U);
    msg.setSourceEntity(166U);
    msg.setDestination(3517U);
    msg.setDestinationEntity(186U);
    msg.value = 0.464864074863;

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
    msg.setTimeStamp(0.898713198527);
    msg.setSource(5555U);
    msg.setSourceEntity(177U);
    msg.setDestination(36237U);
    msg.setDestinationEntity(154U);
    msg.value = 0.0173772196475;

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
    msg.setTimeStamp(0.538233500885);
    msg.setSource(8643U);
    msg.setSourceEntity(54U);
    msg.setDestination(40862U);
    msg.setDestinationEntity(106U);
    msg.value = 0.0688551434234;

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
    msg.setTimeStamp(0.613699185591);
    msg.setSource(28941U);
    msg.setSourceEntity(165U);
    msg.setDestination(59636U);
    msg.setDestinationEntity(42U);
    msg.value = 0.255548955569;

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
    msg.setTimeStamp(0.475559135229);
    msg.setSource(65028U);
    msg.setSourceEntity(82U);
    msg.setDestination(50327U);
    msg.setDestinationEntity(15U);
    msg.value = 0.771409221222;

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
    msg.setTimeStamp(0.048964697391);
    msg.setSource(56247U);
    msg.setSourceEntity(23U);
    msg.setDestination(35344U);
    msg.setDestinationEntity(101U);
    msg.value = 0.0174659213843;

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
    msg.setTimeStamp(0.259124750855);
    msg.setSource(20972U);
    msg.setSourceEntity(97U);
    msg.setDestination(14056U);
    msg.setDestinationEntity(119U);
    msg.value = 0.736734923041;

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
    msg.setTimeStamp(0.889961029026);
    msg.setSource(61016U);
    msg.setSourceEntity(15U);
    msg.setDestination(52374U);
    msg.setDestinationEntity(6U);
    msg.value = 0.759483820283;

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
    msg.setTimeStamp(0.0669212060512);
    msg.setSource(60233U);
    msg.setSourceEntity(182U);
    msg.setDestination(54580U);
    msg.setDestinationEntity(156U);
    msg.number.assign("JUGUYZDVHYBXILQCVPFKSHBHHWKKFZKWDOJYGTGKJSOAHPNZPATNVFUMXCJYVPCGAEOEGVEPDYNUYKUQMOSNVRCICRTQDMAXMBTZCVEMEW");
    msg.timeout = 60825U;
    msg.contents.assign("XRCRQCXIFASVGMTANYLHYNUOIMQOSZKBFLDNZNQYBEEZMCQVXAUGWCRSIRXPYDLMLPAKEHSAJPMTDESTZVCPBLSYNWETUKXXJESHFMBGBJYPHJTKVAUTWEBJAUNIMGPORCACQQRBZGLLFQOHYIOCAVGDHUBXTYWDFDQLIKCTK");

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
    msg.setTimeStamp(0.929982776815);
    msg.setSource(2507U);
    msg.setSourceEntity(32U);
    msg.setDestination(35561U);
    msg.setDestinationEntity(234U);
    msg.number.assign("MABWTKEBFMBBCAXHXEOHOCHLWHUCAWFSNSZUV");
    msg.timeout = 39083U;
    msg.contents.assign("JDIALMZZURUEULVTXZOIYPTZCTFQKNWXOEBCWALEUUFCJJOANMUCRXESZDCDVKWFOZGJFHQNCPKGEAQJRFIFOLBRYSCWRNGKRNPUINBYSIJVZ");

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
    msg.setTimeStamp(0.930683753975);
    msg.setSource(42692U);
    msg.setSourceEntity(37U);
    msg.setDestination(38806U);
    msg.setDestinationEntity(199U);
    msg.number.assign("UHVIBHLHPCSSPEJGSGMZFKPTMMYDZDLTJLGXSXODTBQQQMDTIKDAKDFIRLOYJHSXQPZIQDJZENHMKUFVETNKAUI");
    msg.timeout = 64973U;
    msg.contents.assign("CJIPBWWTKGNJNFVLKIPHQZGHNMHIZSRZDYJLSYDINXOFGNQKTUGBSGDTRJYJOWZRPBKDKHLPXLOWJGUEFFMFAIMJSUPPZWUSCMZFATQHCLJDWVDECFZNEXHZGBXXUHGCEGAVXRBYYXHNZDMPQCFBNDDOUVSYU");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.618774795099);
    msg.setSource(47205U);
    msg.setSourceEntity(49U);
    msg.setDestination(53913U);
    msg.setDestinationEntity(133U);
    msg.id = 94U;
    msg.range = 0.340613446807;

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
    msg.setTimeStamp(0.0698306653984);
    msg.setSource(55269U);
    msg.setSourceEntity(34U);
    msg.setDestination(26603U);
    msg.setDestinationEntity(240U);
    msg.id = 216U;
    msg.range = 0.658788035171;

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
    msg.setTimeStamp(0.779307564974);
    msg.setSource(31904U);
    msg.setSourceEntity(191U);
    msg.setDestination(56746U);
    msg.setDestinationEntity(192U);
    msg.id = 45U;
    msg.range = 0.0194718183683;

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
    msg.setTimeStamp(0.185888044928);
    msg.setSource(37173U);
    msg.setSourceEntity(49U);
    msg.setDestination(55712U);
    msg.setDestinationEntity(5U);
    msg.tx = 123U;
    msg.channel = 162U;
    msg.timer = 64501U;

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
    msg.setTimeStamp(0.511435784224);
    msg.setSource(62789U);
    msg.setSourceEntity(185U);
    msg.setDestination(1489U);
    msg.setDestinationEntity(73U);
    msg.tx = 139U;
    msg.channel = 141U;
    msg.timer = 20364U;

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
    msg.setTimeStamp(0.88094060895);
    msg.setSource(6991U);
    msg.setSourceEntity(26U);
    msg.setDestination(22008U);
    msg.setDestinationEntity(83U);
    msg.tx = 133U;
    msg.channel = 84U;
    msg.timer = 23759U;

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
    msg.setTimeStamp(0.0215227372689);
    msg.setSource(54531U);
    msg.setSourceEntity(155U);
    msg.setDestination(20166U);
    msg.setDestinationEntity(215U);
    msg.beacon.assign("IQUHCTLUGEACIWOXWILIVNRZYFKJBZHGZYJDFLBSXDKSTVEAIYAVHNNOLAKWJTVSPJMAOCZGQAVYOPWSKYMIKQPMUPQIFEAVDEHRDNYB");
    msg.lat = 0.937216186623;
    msg.lon = 0.773156076284;
    msg.depth = 0.421941190343;
    msg.query_channel = 114U;
    msg.reply_channel = 21U;
    msg.transponder_delay = 8U;

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
    msg.setTimeStamp(0.321085562064);
    msg.setSource(46878U);
    msg.setSourceEntity(163U);
    msg.setDestination(64215U);
    msg.setDestinationEntity(14U);
    msg.beacon.assign("PNHKEZDRZRTSXTWVCPRAOTYXENJYXZZZSKDACGCBFXQCQVWGNQQUAHVENYEQTGXDZMBLRGWPXJBFKMCIUQMZSKMWPMVQTTOSYHACWEHYMLCDEOBQTUGLCKWYUFNWBBZMYXRXHKNBHAPKJWWCNFVAUNHDIOFSGUJARMOJYRP");
    msg.lat = 0.315571074804;
    msg.lon = 0.271585859495;
    msg.depth = 0.546018341852;
    msg.query_channel = 228U;
    msg.reply_channel = 142U;
    msg.transponder_delay = 189U;

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
    msg.setTimeStamp(0.616677175139);
    msg.setSource(55347U);
    msg.setSourceEntity(154U);
    msg.setDestination(10690U);
    msg.setDestinationEntity(74U);
    msg.beacon.assign("JLQRVNOFDTPQEMONYTGMOSUDYSOWGYSGEPXETKJVEBOFTOUCKMZTVMYEARLMQHLKXNRFHWPIYQIDZKWFEGNQBYJSYFLUAVBXUMQSWKWBKGWLAUQYCRAZZCYCHLNNDBAZZJKPSXZPXVKWRPAWFZAGTQNFVICTTMBSCERPUJIUELPBXSSIGPMKDRARJFFMOTXVYDILUWHCHZJTISB");
    msg.lat = 0.634995822944;
    msg.lon = 0.896969730071;
    msg.depth = 0.0592744769147;
    msg.query_channel = 69U;
    msg.reply_channel = 23U;
    msg.transponder_delay = 44U;

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
    msg.setTimeStamp(0.426931576678);
    msg.setSource(12820U);
    msg.setSourceEntity(79U);
    msg.setDestination(41189U);
    msg.setDestinationEntity(92U);
    msg.op = 149U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ADSKUBNWTTULCCCCVIHCVDWPFWIWRTBLZJMXODQELRHJQNSVTKPRHQALCUBHDFUIRFRZYQMOSWNKJUFMHGWUEBPDKWPMHZFHXROTZMZGWKXEGJJNYJYTRUSEBRGBFMAYSYFXIHVQSOJSIOILMQXACZGDFFYVHZLNIGJGM");
    tmp_msg_0.lat = 0.118623204931;
    tmp_msg_0.lon = 0.803917813875;
    tmp_msg_0.depth = 0.369416281272;
    tmp_msg_0.query_channel = 53U;
    tmp_msg_0.reply_channel = 83U;
    tmp_msg_0.transponder_delay = 0U;
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
    msg.setTimeStamp(0.490883129676);
    msg.setSource(53804U);
    msg.setSourceEntity(139U);
    msg.setDestination(51614U);
    msg.setDestinationEntity(130U);
    msg.op = 146U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YFPBVAIBPHKNYBPSWJQXUAUEIZGSPCLXKEQIAMJGWJUYVNGFLFYRDKOB");
    tmp_msg_0.lat = 0.710740401253;
    tmp_msg_0.lon = 0.190536993883;
    tmp_msg_0.depth = 0.388905474816;
    tmp_msg_0.query_channel = 19U;
    tmp_msg_0.reply_channel = 210U;
    tmp_msg_0.transponder_delay = 77U;
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
    msg.setTimeStamp(0.872360458268);
    msg.setSource(58741U);
    msg.setSourceEntity(214U);
    msg.setDestination(34249U);
    msg.setDestinationEntity(184U);
    msg.op = 106U;

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
    msg.setTimeStamp(0.366174218511);
    msg.setSource(33946U);
    msg.setSourceEntity(25U);
    msg.setDestination(3778U);
    msg.setDestinationEntity(138U);
    msg.address = 231U;

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
    msg.setTimeStamp(0.0644472056952);
    msg.setSource(53176U);
    msg.setSourceEntity(236U);
    msg.setDestination(42878U);
    msg.setDestinationEntity(37U);
    msg.address = 12U;

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
    msg.setTimeStamp(0.353563465909);
    msg.setSource(59107U);
    msg.setSourceEntity(226U);
    msg.setDestination(1374U);
    msg.setDestinationEntity(198U);
    msg.address = 169U;

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
    msg.setTimeStamp(0.0897520623356);
    msg.setSource(62407U);
    msg.setSourceEntity(201U);
    msg.setDestination(9099U);
    msg.setDestinationEntity(138U);
    msg.address = 226U;
    msg.status = 22U;
    msg.range = 0.992878695764;

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
    msg.setTimeStamp(0.773390093128);
    msg.setSource(29794U);
    msg.setSourceEntity(251U);
    msg.setDestination(54912U);
    msg.setDestinationEntity(246U);
    msg.address = 126U;
    msg.status = 209U;
    msg.range = 0.169553970237;

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
    msg.setTimeStamp(0.294241616425);
    msg.setSource(26974U);
    msg.setSourceEntity(188U);
    msg.setDestination(44239U);
    msg.setDestinationEntity(147U);
    msg.address = 166U;
    msg.status = 115U;
    msg.range = 0.636556943577;

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
    msg.setTimeStamp(0.520855977132);
    msg.setSource(16634U);
    msg.setSourceEntity(190U);
    msg.setDestination(57865U);
    msg.setDestinationEntity(20U);
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MZSDJOQSTKREGWOVKCTNHTCJAJVYAQTBWBYZHKZFMVOOGRKWEUILSYWLHKDMAWRDYHRLPURRIFNWTDZWPDNFYGVPZPFXMMSHJONUEUNXSCNEVJCUUFIQAAIWHXYCOBAZYGVJRBZKMURQGWGTPJOAVIEXPDUNDHSJTCXRZODBCXDONCIFZJLMMESIYAHCNKYPMSILAIQCELJBXBMZLQFTBSGDKLVLSITGVAXGQBBXEFYOLFWQNU");
    tmp_msg_0.sys_type = 93U;
    tmp_msg_0.owner = 21845U;
    tmp_msg_0.lat = 0.370696567026;
    tmp_msg_0.lon = 0.571946044978;
    tmp_msg_0.height = 0.710554863832;
    tmp_msg_0.services.assign("DGDNOMMORCWPOGOKDRURBBDGNIHDRZQQFSTEJGKDMIHYLQVPUJYAFUSSVW");
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
    msg.setTimeStamp(0.166863612163);
    msg.setSource(36788U);
    msg.setSourceEntity(28U);
    msg.setDestination(26042U);
    msg.setDestinationEntity(36U);
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("BKZHYWMDGERHFWQFPIUPYXAETTZCPZMOKNLJLBCVWHGBCWNDJFVMQMZSORBCAIGNAXGBLXVWKRGSASXBDYZJJLJIJCQEGKEAXUPUMGPJQLVNKSHVQNLKAOMDQOVLUELTCSYEDTMRNHMPJBTRNNEGJAWXOOHXFDSIYXZRITGAOSPXWIKCFEHIFUPJRFYGPNLCZTYHSOTVMFUIEYOAXDTI");
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
    msg.setTimeStamp(0.117675238468);
    msg.setSource(29953U);
    msg.setSourceEntity(83U);
    msg.setDestination(43524U);
    msg.setDestinationEntity(201U);
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 201U;
    tmp_msg_0.op = 95U;
    tmp_msg_0.request_id = 25208U;
    tmp_msg_0.plan_id.assign("ZFCYUEFPBJLUPMATPSRUBLJQGEYXZYVMGUFEUHKJBOAJNFVXOALWXJVWNXIASITDVLJUTONTOOGCMMQQAZPWCKRJIQHN");
    IMC::AcousticSystems tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.list.assign("SXYFFQDELUBVLIXIYRTKWIOFHQZPVHKPJPZLGTMVRVJQDOHSCLTXBWBNVRCX");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("GLEOLYKRSVLXFIMAGWYFRBPWCSXYAISAQTVDJTLZXDLIYCQUZQWGNDMZYJKYBQMDVFSFAOCUDCGBKXZH");
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
    msg.setTimeStamp(0.522121496814);
    msg.setSource(35328U);
    msg.setSourceEntity(107U);
    msg.setDestination(52751U);
    msg.setDestinationEntity(65U);
    msg.enable = 215U;

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
    msg.setTimeStamp(0.696993870145);
    msg.setSource(7369U);
    msg.setSourceEntity(168U);
    msg.setDestination(49111U);
    msg.setDestinationEntity(147U);
    msg.enable = 65U;

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
    msg.setTimeStamp(0.650201575288);
    msg.setSource(14540U);
    msg.setSourceEntity(86U);
    msg.setDestination(29331U);
    msg.setDestinationEntity(169U);
    msg.enable = 133U;

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
    msg.setTimeStamp(0.877181151503);
    msg.setSource(31798U);
    msg.setSourceEntity(204U);
    msg.setDestination(22396U);
    msg.setDestinationEntity(123U);
    msg.summary = 83U;
    msg.level = 79U;

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
    msg.setTimeStamp(0.704038208803);
    msg.setSource(54037U);
    msg.setSourceEntity(216U);
    msg.setDestination(42600U);
    msg.setDestinationEntity(57U);
    msg.summary = 72U;
    msg.level = 87U;

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
    msg.setTimeStamp(0.461111219434);
    msg.setSource(37625U);
    msg.setSourceEntity(107U);
    msg.setDestination(43292U);
    msg.setDestinationEntity(236U);
    msg.summary = 98U;
    msg.level = 227U;

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
    msg.setTimeStamp(0.293800641963);
    msg.setSource(53208U);
    msg.setSourceEntity(196U);
    msg.setDestination(1828U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.68544953171);
    msg.setSource(31883U);
    msg.setSourceEntity(244U);
    msg.setDestination(690U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.371640917325);
    msg.setSource(38215U);
    msg.setSourceEntity(140U);
    msg.setDestination(38956U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.645636524328);
    msg.setSource(19502U);
    msg.setSourceEntity(111U);
    msg.setDestination(51411U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.281497936755);
    msg.setSource(42491U);
    msg.setSourceEntity(182U);
    msg.setDestination(64786U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.816934160332);
    msg.setSource(62250U);
    msg.setSourceEntity(174U);
    msg.setDestination(35998U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.596970190498);
    msg.setSource(35562U);
    msg.setSourceEntity(87U);
    msg.setDestination(44686U);
    msg.setDestinationEntity(225U);
    msg.op = 114U;
    msg.system.assign("HDHQHLIBGGADRPYGGQSNPCOPEHNUKIRWZNLQAKQWOHKZISYRXKUWDAEVOQABOHPYJGRNMETSOMVKYQESLKWJEPZDTLJCMFCMMZAHYTUJFMHLAVDIZRDFOYCHAKSXCWAICEIVBZSKCRMTDGRYFRBOTEJDWRIUDTQXBICAPOUANBNZNBLXYCFTFJZSRXKKWSVYPLXZEBOWPHZTGMVVUGJPWBJJ");
    msg.range = 0.75839791204;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 92U;
    tmp_msg_0.id.assign("ATRXSPQDGCXVWJYWZCCCLXUUHFRGKHS");
    IMC::PowerChannelControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 179U;
    tmp_tmp_msg_0_0.op = 170U;
    tmp_tmp_msg_0_0.sched_time = 0.668229427672;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.845053208605);
    msg.setSource(38111U);
    msg.setSourceEntity(45U);
    msg.setDestination(2939U);
    msg.setDestinationEntity(94U);
    msg.op = 155U;
    msg.system.assign("UVYYJIGPASKQRSMJLXUXHFMNULAENJMGIZRIDDFQNZPMJXOYFMPETDWCBPPMNTWABBDPLNTVOYETXHUQHSZIRSFCBVLIARQXZCBIIHROSMEZUKJKZYFWTCQDYBBSHDEXTZJKUNKAOLIQGVLWHNLUYOPYRCECTFXBSKCHFHXYWLQYXWWNEPVPJCEOETQTWKGOADG");
    msg.range = 0.0135737987007;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.934229734465;
    tmp_msg_0.z_units = 117U;
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
    msg.setTimeStamp(0.46672512946);
    msg.setSource(41765U);
    msg.setSourceEntity(209U);
    msg.setDestination(24584U);
    msg.setDestinationEntity(4U);
    msg.op = 125U;
    msg.system.assign("OEKJMUQNDQQZJGICTXNPCOLHWKTUHRBDCREHREHTEXWBBWAUZWRAJH");
    msg.range = 0.422390336721;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.0707543455246;
    tmp_msg_0.lon = 0.315436371187;
    tmp_msg_0.z = 0.664741065284;
    tmp_msg_0.z_units = 113U;
    tmp_msg_0.radius = 0.780814966026;
    tmp_msg_0.duration = 36280U;
    tmp_msg_0.speed = 0.906935864746;
    tmp_msg_0.speed_units = 83U;
    tmp_msg_0.custom.assign("LQWQEBSQNKAIQFMQDAYHVHFVZRNIBEPXQSFSNCOLZDVGNBIYSTCTMTRQHVZJUJHVPBYUUTMCFWGMPVZEVNDWNZZPPDSJKGLBAOZAAAPSWFDEXGUAUYOGZBECOCTLEYGFUWLQIBFMYJLOICJXKHODMXNJPTINQNRSGLGOLKDXDHLILSKTKIAGWEJAWURPEKOTWDYJKOEMXPKYYTMRHZREKBXMHSYF");
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
    msg.setTimeStamp(0.852754374608);
    msg.setSource(48433U);
    msg.setSourceEntity(227U);
    msg.setDestination(36128U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.669568333015);
    msg.setSource(953U);
    msg.setSourceEntity(148U);
    msg.setDestination(16719U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.839443300768);
    msg.setSource(51121U);
    msg.setSourceEntity(96U);
    msg.setDestination(20882U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.33785858529);
    msg.setSource(35737U);
    msg.setSourceEntity(41U);
    msg.setDestination(5121U);
    msg.setDestinationEntity(22U);
    msg.list.assign("PDXEMFJBCIKXLICH");

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
    msg.setTimeStamp(0.889083673305);
    msg.setSource(24337U);
    msg.setSourceEntity(90U);
    msg.setDestination(11127U);
    msg.setDestinationEntity(202U);
    msg.list.assign("OLHKEADFQDJACBGTTWRRUJTJYDZXSBUSEFGCPGPVNRYXBXXOMVXWOVKSFPHSFFCUYAOGEQQCKEAYJKXDSCEBYPSQCOGK");

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
    msg.setTimeStamp(0.799883360249);
    msg.setSource(46182U);
    msg.setSourceEntity(155U);
    msg.setDestination(48461U);
    msg.setDestinationEntity(191U);
    msg.list.assign("YXRPPZBRIVKTESWSJKNUKDXPUGWILACTRBYJAIEAYERSKAQBLHCSCZHVHZYDQFJCOFUNQOGZNAGDQRUOOIZWWLFJVDVUADSBUBGANKCSMDLALZUBPXWCUMNXGWQPLFVKBOVQTTYYXLQJPEESJJTPQICTAHFFIREUMBSKROGZSRNLEMKYHVGMYPMXZIZBENZEEWWDFTDOHYUNAMFFSIYBXTWVMLQTNMXJCOHXIGGPPMTRHD");

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
    msg.setTimeStamp(0.921248394554);
    msg.setSource(56925U);
    msg.setSourceEntity(77U);
    msg.setDestination(60376U);
    msg.setDestinationEntity(172U);
    msg.value = -17603;

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
    msg.setTimeStamp(0.0700423500648);
    msg.setSource(39645U);
    msg.setSourceEntity(156U);
    msg.setDestination(62099U);
    msg.setDestinationEntity(25U);
    msg.value = 29799;

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
    msg.setTimeStamp(0.888748745378);
    msg.setSource(12623U);
    msg.setSourceEntity(170U);
    msg.setDestination(687U);
    msg.setDestinationEntity(160U);
    msg.value = -18382;

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
    msg.setTimeStamp(0.806739582799);
    msg.setSource(10475U);
    msg.setSourceEntity(98U);
    msg.setDestination(29566U);
    msg.setDestinationEntity(254U);
    msg.value = 0.811545018603;

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
    msg.setTimeStamp(0.757057774953);
    msg.setSource(57749U);
    msg.setSourceEntity(24U);
    msg.setDestination(26056U);
    msg.setDestinationEntity(156U);
    msg.value = 0.259852998061;

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
    msg.setTimeStamp(0.886757108767);
    msg.setSource(65012U);
    msg.setSourceEntity(185U);
    msg.setDestination(323U);
    msg.setDestinationEntity(97U);
    msg.value = 0.0787275126103;

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
    msg.setTimeStamp(0.000244363908518);
    msg.setSource(33548U);
    msg.setSourceEntity(252U);
    msg.setDestination(4451U);
    msg.setDestinationEntity(66U);
    msg.value = 0.835399451982;

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
    msg.setTimeStamp(0.279937729584);
    msg.setSource(31952U);
    msg.setSourceEntity(57U);
    msg.setDestination(30425U);
    msg.setDestinationEntity(110U);
    msg.value = 0.334658217163;

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
    msg.setTimeStamp(0.172716625856);
    msg.setSource(38751U);
    msg.setSourceEntity(30U);
    msg.setDestination(50498U);
    msg.setDestinationEntity(74U);
    msg.value = 0.579641981306;

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
    msg.setTimeStamp(0.957889338775);
    msg.setSource(47514U);
    msg.setSourceEntity(50U);
    msg.setDestination(52382U);
    msg.setDestinationEntity(252U);
    msg.validity = 14108U;
    msg.type = 180U;
    msg.utc_year = 20005U;
    msg.utc_month = 205U;
    msg.utc_day = 88U;
    msg.utc_time = 0.797135794652;
    msg.lat = 0.697476333251;
    msg.lon = 0.533008502177;
    msg.height = 0.934159523073;
    msg.satellites = 239U;
    msg.cog = 0.401066642145;
    msg.sog = 0.990002640673;
    msg.hdop = 0.866388831574;
    msg.vdop = 0.589856199481;
    msg.hacc = 0.0461964722071;
    msg.vacc = 0.946120679866;

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
    msg.setTimeStamp(0.794551627897);
    msg.setSource(20119U);
    msg.setSourceEntity(204U);
    msg.setDestination(18435U);
    msg.setDestinationEntity(238U);
    msg.validity = 9697U;
    msg.type = 49U;
    msg.utc_year = 59105U;
    msg.utc_month = 205U;
    msg.utc_day = 183U;
    msg.utc_time = 0.0432670792607;
    msg.lat = 0.144209110586;
    msg.lon = 0.677111705538;
    msg.height = 0.177698379668;
    msg.satellites = 159U;
    msg.cog = 0.76826927933;
    msg.sog = 0.376998988838;
    msg.hdop = 0.328101643374;
    msg.vdop = 0.906157459927;
    msg.hacc = 0.610945701955;
    msg.vacc = 0.380756561772;

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
    msg.setTimeStamp(0.181130525433);
    msg.setSource(15430U);
    msg.setSourceEntity(50U);
    msg.setDestination(20109U);
    msg.setDestinationEntity(73U);
    msg.validity = 11046U;
    msg.type = 224U;
    msg.utc_year = 36316U;
    msg.utc_month = 91U;
    msg.utc_day = 72U;
    msg.utc_time = 0.0453101018891;
    msg.lat = 0.994304354855;
    msg.lon = 0.953050798118;
    msg.height = 0.989671053943;
    msg.satellites = 228U;
    msg.cog = 0.142588115453;
    msg.sog = 0.281398463968;
    msg.hdop = 0.285896958257;
    msg.vdop = 0.804558948875;
    msg.hacc = 0.503507180007;
    msg.vacc = 0.577939168475;

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
    msg.setTimeStamp(0.845225375513);
    msg.setSource(51359U);
    msg.setSourceEntity(11U);
    msg.setDestination(9806U);
    msg.setDestinationEntity(23U);
    msg.time = 0.123902340002;
    msg.phi = 0.911925903767;
    msg.theta = 0.637582864695;
    msg.psi = 0.870473533662;
    msg.psi_magnetic = 0.752444367126;

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
    msg.setTimeStamp(0.358863560831);
    msg.setSource(59386U);
    msg.setSourceEntity(213U);
    msg.setDestination(19238U);
    msg.setDestinationEntity(106U);
    msg.time = 0.112193945653;
    msg.phi = 0.806422264697;
    msg.theta = 0.742614191392;
    msg.psi = 0.398521278175;
    msg.psi_magnetic = 0.274448094632;

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
    msg.setTimeStamp(0.126925746762);
    msg.setSource(10669U);
    msg.setSourceEntity(137U);
    msg.setDestination(47240U);
    msg.setDestinationEntity(205U);
    msg.time = 0.307327997242;
    msg.phi = 0.625819857579;
    msg.theta = 0.460512808698;
    msg.psi = 0.0790490816592;
    msg.psi_magnetic = 0.640119500317;

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
    msg.setTimeStamp(0.439836012252);
    msg.setSource(50845U);
    msg.setSourceEntity(26U);
    msg.setDestination(50632U);
    msg.setDestinationEntity(86U);
    msg.time = 0.514414483067;
    msg.x = 0.840041210895;
    msg.y = 0.889245939223;
    msg.z = 0.248995159377;
    msg.timestep = 0.523481715136;

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
    msg.setTimeStamp(0.687263997272);
    msg.setSource(51214U);
    msg.setSourceEntity(189U);
    msg.setDestination(62322U);
    msg.setDestinationEntity(176U);
    msg.time = 0.433216268504;
    msg.x = 0.646245769064;
    msg.y = 0.521947774896;
    msg.z = 0.129619128702;
    msg.timestep = 0.0813909628308;

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
    msg.setTimeStamp(0.744481138234);
    msg.setSource(31221U);
    msg.setSourceEntity(24U);
    msg.setDestination(30136U);
    msg.setDestinationEntity(40U);
    msg.time = 0.506634968439;
    msg.x = 0.75404667415;
    msg.y = 0.381929899642;
    msg.z = 0.886589655355;
    msg.timestep = 0.273704173798;

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
    msg.setTimeStamp(0.964680787982);
    msg.setSource(44827U);
    msg.setSourceEntity(158U);
    msg.setDestination(1080U);
    msg.setDestinationEntity(51U);
    msg.time = 0.634225849483;
    msg.x = 0.424871866369;
    msg.y = 0.036828968961;
    msg.z = 0.702029708834;

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
    msg.setTimeStamp(0.552619826744);
    msg.setSource(29658U);
    msg.setSourceEntity(166U);
    msg.setDestination(7539U);
    msg.setDestinationEntity(189U);
    msg.time = 0.923938137046;
    msg.x = 0.922551711828;
    msg.y = 0.981268382917;
    msg.z = 0.682641629226;

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
    msg.setTimeStamp(0.855457467954);
    msg.setSource(52746U);
    msg.setSourceEntity(112U);
    msg.setDestination(25607U);
    msg.setDestinationEntity(157U);
    msg.time = 0.761688666709;
    msg.x = 0.0558772064445;
    msg.y = 0.337719497419;
    msg.z = 0.834973637905;

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
    msg.setTimeStamp(0.559605775599);
    msg.setSource(7123U);
    msg.setSourceEntity(25U);
    msg.setDestination(41222U);
    msg.setDestinationEntity(42U);
    msg.time = 0.665050616575;
    msg.x = 0.627118213822;
    msg.y = 0.0178656796663;
    msg.z = 0.40677675849;

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
    msg.setTimeStamp(0.705648497827);
    msg.setSource(42335U);
    msg.setSourceEntity(177U);
    msg.setDestination(49503U);
    msg.setDestinationEntity(25U);
    msg.time = 0.141588417871;
    msg.x = 0.340376308121;
    msg.y = 0.704587394125;
    msg.z = 0.365136109484;

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
    msg.setTimeStamp(0.917151663638);
    msg.setSource(32265U);
    msg.setSourceEntity(229U);
    msg.setDestination(30459U);
    msg.setDestinationEntity(165U);
    msg.time = 0.8449647688;
    msg.x = 0.534257433674;
    msg.y = 0.319326199303;
    msg.z = 0.0648220695797;

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
    msg.setTimeStamp(0.53361416486);
    msg.setSource(14235U);
    msg.setSourceEntity(51U);
    msg.setDestination(2360U);
    msg.setDestinationEntity(5U);
    msg.time = 0.766240361753;
    msg.x = 0.0604962564466;
    msg.y = 0.115023459098;
    msg.z = 0.255922317395;

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
    msg.setTimeStamp(0.769892544548);
    msg.setSource(45060U);
    msg.setSourceEntity(100U);
    msg.setDestination(54481U);
    msg.setDestinationEntity(176U);
    msg.time = 0.470530121007;
    msg.x = 0.715961269547;
    msg.y = 0.440870101799;
    msg.z = 0.611806874117;

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
    msg.setTimeStamp(0.536294288344);
    msg.setSource(36987U);
    msg.setSourceEntity(11U);
    msg.setDestination(34920U);
    msg.setDestinationEntity(212U);
    msg.time = 0.846093686489;
    msg.x = 0.952333028755;
    msg.y = 0.261669419182;
    msg.z = 0.0905685662338;

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
    msg.setTimeStamp(0.798575286286);
    msg.setSource(19600U);
    msg.setSourceEntity(88U);
    msg.setDestination(19602U);
    msg.setDestinationEntity(215U);
    msg.validity = 116U;
    msg.x = 0.298661369424;
    msg.y = 0.927774903005;
    msg.z = 0.379424490151;

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
    msg.setTimeStamp(0.634481424017);
    msg.setSource(59352U);
    msg.setSourceEntity(13U);
    msg.setDestination(19230U);
    msg.setDestinationEntity(59U);
    msg.validity = 162U;
    msg.x = 0.127474549608;
    msg.y = 0.981588276646;
    msg.z = 0.648427908314;

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
    msg.setTimeStamp(0.534345161292);
    msg.setSource(23273U);
    msg.setSourceEntity(215U);
    msg.setDestination(27063U);
    msg.setDestinationEntity(199U);
    msg.validity = 42U;
    msg.x = 0.0249110282702;
    msg.y = 0.637832943658;
    msg.z = 0.809107669195;

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
    msg.setTimeStamp(0.936653076162);
    msg.setSource(20131U);
    msg.setSourceEntity(124U);
    msg.setDestination(38911U);
    msg.setDestinationEntity(61U);
    msg.validity = 201U;
    msg.x = 0.33103609326;
    msg.y = 0.921213173006;
    msg.z = 0.877915799954;

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
    msg.setTimeStamp(0.886105816967);
    msg.setSource(11971U);
    msg.setSourceEntity(195U);
    msg.setDestination(15283U);
    msg.setDestinationEntity(35U);
    msg.validity = 130U;
    msg.x = 0.723387076735;
    msg.y = 0.67993131613;
    msg.z = 0.146312652562;

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
    msg.setTimeStamp(0.736872340506);
    msg.setSource(14338U);
    msg.setSourceEntity(179U);
    msg.setDestination(4998U);
    msg.setDestinationEntity(1U);
    msg.validity = 155U;
    msg.x = 0.527509180069;
    msg.y = 0.119402784824;
    msg.z = 0.450472415494;

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
    msg.setTimeStamp(0.0593202922799);
    msg.setSource(14414U);
    msg.setSourceEntity(117U);
    msg.setDestination(35228U);
    msg.setDestinationEntity(166U);
    msg.time = 0.829236309744;
    msg.x = 0.54315039327;
    msg.y = 0.946630831003;
    msg.z = 0.852058315645;

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
    msg.setTimeStamp(0.69963854909);
    msg.setSource(54542U);
    msg.setSourceEntity(5U);
    msg.setDestination(25086U);
    msg.setDestinationEntity(156U);
    msg.time = 0.65772473511;
    msg.x = 0.382443273624;
    msg.y = 0.331632553814;
    msg.z = 0.73534158041;

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
    msg.setTimeStamp(0.00364967795222);
    msg.setSource(4736U);
    msg.setSourceEntity(232U);
    msg.setDestination(49358U);
    msg.setDestinationEntity(62U);
    msg.time = 0.626234547457;
    msg.x = 0.258675615468;
    msg.y = 0.922402493543;
    msg.z = 0.590035492485;

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
    msg.setTimeStamp(0.549548810486);
    msg.setSource(48038U);
    msg.setSourceEntity(90U);
    msg.setDestination(39085U);
    msg.setDestinationEntity(144U);
    msg.validity = 146U;
    msg.value = 0.524121519253;

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
    msg.setTimeStamp(0.492803596411);
    msg.setSource(22690U);
    msg.setSourceEntity(82U);
    msg.setDestination(62428U);
    msg.setDestinationEntity(46U);
    msg.validity = 171U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0943960402021;
    tmp_msg_0.beam_height = 0.394071590729;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.737767741451;

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
    msg.setTimeStamp(0.512997533179);
    msg.setSource(48917U);
    msg.setSourceEntity(10U);
    msg.setDestination(63412U);
    msg.setDestinationEntity(171U);
    msg.validity = 181U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.32736886543;
    tmp_msg_0.y = 0.18458425186;
    tmp_msg_0.z = 0.509695588408;
    tmp_msg_0.phi = 0.853529652328;
    tmp_msg_0.theta = 0.610609728791;
    tmp_msg_0.psi = 0.686538092174;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.0396093928949;
    tmp_msg_1.beam_height = 0.553846655636;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.633783566443;

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
    msg.setTimeStamp(0.484066461065);
    msg.setSource(62330U);
    msg.setSourceEntity(101U);
    msg.setDestination(11466U);
    msg.setDestinationEntity(91U);
    msg.value = 0.0563454539203;

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
    msg.setTimeStamp(0.245051002348);
    msg.setSource(35485U);
    msg.setSourceEntity(62U);
    msg.setDestination(52681U);
    msg.setDestinationEntity(38U);
    msg.value = 0.270398651707;

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
    msg.setTimeStamp(0.224858154519);
    msg.setSource(50855U);
    msg.setSourceEntity(27U);
    msg.setDestination(39165U);
    msg.setDestinationEntity(183U);
    msg.value = 0.0370736837308;

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
    msg.setTimeStamp(0.78213081395);
    msg.setSource(26424U);
    msg.setSourceEntity(168U);
    msg.setDestination(31763U);
    msg.setDestinationEntity(154U);
    msg.value = 0.0379247468983;

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
    msg.setTimeStamp(0.687739564366);
    msg.setSource(63143U);
    msg.setSourceEntity(74U);
    msg.setDestination(3710U);
    msg.setDestinationEntity(214U);
    msg.value = 0.234024978112;

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
    msg.setTimeStamp(0.922716814941);
    msg.setSource(42401U);
    msg.setSourceEntity(174U);
    msg.setDestination(45218U);
    msg.setDestinationEntity(23U);
    msg.value = 0.893365629115;

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
    msg.setTimeStamp(0.152209846565);
    msg.setSource(59763U);
    msg.setSourceEntity(235U);
    msg.setDestination(32637U);
    msg.setDestinationEntity(42U);
    msg.value = 0.282868581392;

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
    msg.setTimeStamp(0.746811165341);
    msg.setSource(29028U);
    msg.setSourceEntity(248U);
    msg.setDestination(61400U);
    msg.setDestinationEntity(79U);
    msg.value = 0.441831139008;

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
    msg.setTimeStamp(0.972658607361);
    msg.setSource(52797U);
    msg.setSourceEntity(181U);
    msg.setDestination(50870U);
    msg.setDestinationEntity(49U);
    msg.value = 0.671331734562;

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
    msg.setTimeStamp(0.261939565421);
    msg.setSource(53823U);
    msg.setSourceEntity(204U);
    msg.setDestination(55262U);
    msg.setDestinationEntity(42U);
    msg.value = 0.758924353508;

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
    msg.setTimeStamp(0.560445136912);
    msg.setSource(44923U);
    msg.setSourceEntity(175U);
    msg.setDestination(63261U);
    msg.setDestinationEntity(25U);
    msg.value = 0.863085344354;

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
    msg.setTimeStamp(0.79062549949);
    msg.setSource(54168U);
    msg.setSourceEntity(226U);
    msg.setDestination(4024U);
    msg.setDestinationEntity(172U);
    msg.value = 0.268222827789;

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
    msg.setTimeStamp(0.396018346961);
    msg.setSource(53975U);
    msg.setSourceEntity(109U);
    msg.setDestination(50263U);
    msg.setDestinationEntity(237U);
    msg.value = 0.457138407598;

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
    msg.setTimeStamp(0.893244743095);
    msg.setSource(42658U);
    msg.setSourceEntity(20U);
    msg.setDestination(14573U);
    msg.setDestinationEntity(117U);
    msg.value = 0.703970053664;

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
    msg.setTimeStamp(0.00928405546446);
    msg.setSource(30522U);
    msg.setSourceEntity(157U);
    msg.setDestination(49893U);
    msg.setDestinationEntity(58U);
    msg.value = 0.645138127514;

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
    msg.setTimeStamp(0.902538182298);
    msg.setSource(53896U);
    msg.setSourceEntity(160U);
    msg.setDestination(56528U);
    msg.setDestinationEntity(34U);
    msg.value = 0.919137508333;

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
    msg.setTimeStamp(0.147771038637);
    msg.setSource(32487U);
    msg.setSourceEntity(167U);
    msg.setDestination(17683U);
    msg.setDestinationEntity(25U);
    msg.value = 0.837571239202;

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
    msg.setTimeStamp(0.490175328914);
    msg.setSource(3096U);
    msg.setSourceEntity(49U);
    msg.setDestination(33152U);
    msg.setDestinationEntity(192U);
    msg.value = 0.0328109121222;

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
    msg.setTimeStamp(0.495623413601);
    msg.setSource(59174U);
    msg.setSourceEntity(235U);
    msg.setDestination(37750U);
    msg.setDestinationEntity(153U);
    msg.value = 0.0867523991906;

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
    msg.setTimeStamp(0.597183746136);
    msg.setSource(27093U);
    msg.setSourceEntity(214U);
    msg.setDestination(59191U);
    msg.setDestinationEntity(76U);
    msg.value = 0.0242066358314;

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
    msg.setTimeStamp(0.675396406443);
    msg.setSource(41821U);
    msg.setSourceEntity(83U);
    msg.setDestination(57621U);
    msg.setDestinationEntity(169U);
    msg.value = 0.623331962343;

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
    msg.setTimeStamp(0.339143010064);
    msg.setSource(43076U);
    msg.setSourceEntity(111U);
    msg.setDestination(52992U);
    msg.setDestinationEntity(135U);
    msg.value = 0.851318348327;

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
    msg.setTimeStamp(0.512794767593);
    msg.setSource(18577U);
    msg.setSourceEntity(214U);
    msg.setDestination(23214U);
    msg.setDestinationEntity(199U);
    msg.value = 0.0684086400178;

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
    msg.setTimeStamp(0.749035892208);
    msg.setSource(44964U);
    msg.setSourceEntity(149U);
    msg.setDestination(47206U);
    msg.setDestinationEntity(82U);
    msg.value = 0.854998276208;

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
    msg.setTimeStamp(0.905304634163);
    msg.setSource(32101U);
    msg.setSourceEntity(36U);
    msg.setDestination(55906U);
    msg.setDestinationEntity(243U);
    msg.direction = 0.319902131394;
    msg.speed = 0.266480332181;

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
    msg.setTimeStamp(0.885973921048);
    msg.setSource(2274U);
    msg.setSourceEntity(206U);
    msg.setDestination(39284U);
    msg.setDestinationEntity(56U);
    msg.direction = 0.867340097633;
    msg.speed = 0.989357473788;

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
    msg.setTimeStamp(0.206281765995);
    msg.setSource(37658U);
    msg.setSourceEntity(187U);
    msg.setDestination(59375U);
    msg.setDestinationEntity(114U);
    msg.direction = 0.826532061354;
    msg.speed = 0.511080191878;

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
    msg.setTimeStamp(0.864827940057);
    msg.setSource(43319U);
    msg.setSourceEntity(28U);
    msg.setDestination(64868U);
    msg.setDestinationEntity(244U);
    msg.value = 0.320741940315;

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
    msg.setTimeStamp(0.454544829373);
    msg.setSource(46667U);
    msg.setSourceEntity(132U);
    msg.setDestination(51666U);
    msg.setDestinationEntity(179U);
    msg.value = 0.672565084771;

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
    msg.setTimeStamp(0.145447841493);
    msg.setSource(53912U);
    msg.setSourceEntity(105U);
    msg.setDestination(63871U);
    msg.setDestinationEntity(194U);
    msg.value = 0.0651065572495;

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
    msg.setTimeStamp(0.0369350386941);
    msg.setSource(41160U);
    msg.setSourceEntity(126U);
    msg.setDestination(3253U);
    msg.setDestinationEntity(86U);
    msg.value.assign("KTHVVIZAGPKDWSSRUEXNNQTKXZAYQTNDQJPGMUWWUFPZMDYILAJJRAXZMPJERZOTSHFUYSZFFLXLWHYJKPCXRNSBHCQQNTBOADGIKDHMEBIGRENZHNCUUWNQMRDUFEXKGSPQPLGLYTMELKEGOIUFROJWKIRSAOFECQKHOBPSUZKALYVNXCRJZVFVOOPGCYFJCYZLMXCSVJIJCVDIAM");

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
    msg.setTimeStamp(0.81525802954);
    msg.setSource(19166U);
    msg.setSourceEntity(247U);
    msg.setDestination(54357U);
    msg.setDestinationEntity(73U);
    msg.value.assign("HCITVKBUKSPBNIIFAWHMSINOMRPJHSBYXQYWKKNYHHILUZKHHDWZXPVPNFQOLQQRLHFMNNRYSSJXWBPARXECMKJYT");

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
    msg.setTimeStamp(0.577268964957);
    msg.setSource(27279U);
    msg.setSourceEntity(62U);
    msg.setDestination(45988U);
    msg.setDestinationEntity(9U);
    msg.value.assign("UNSZCMNYAMDMJLCFGLHCVNHOQWEGKGWECLQNEJRTPWGPOOVADGZZPQMLKAVJPDYKFWIKRETPCXRILVSIXOHIATOXSJIAXYGRFMIZXALLCIYMQZBRQHRCOTONSVSNXDIYFFQTQZMTFONUABHDZGXMHJYHRSZDZTPRSYUUEAKFWDRBUZXBWVBUBHEHNSFEEMRHYITCXLELKCABVPEDDPJTKFJJWDNAGBKVWJO");

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
    msg.setTimeStamp(0.681366775327);
    msg.setSource(26183U);
    msg.setSourceEntity(211U);
    msg.setDestination(17852U);
    msg.setDestinationEntity(48U);
    const char tmp_msg_0[] = {-123, -44, 125, 114, 93, -43, -108, 62, 47, 110, 58, -116, -119, 45, -21, -90, 94, -101, 56, -128, -128, -23, 109, -22, -123, -17, -36, -27, -41, -56, -38, 101, -117, 33, 96, 98, 12, 116, 30, 113, 51, 69, 53, -65, -8, -10, -7, 28, 52, 4, -64, -83, 124, 1, -78, 21, -98, -73, -36, 13, -110, 72, -112, -10, 23, 34, -117, -109, -11, -99, 110, 45, 30, 93, 58, 114, -8, 121, -9, -46, -71, 65, 116, -118, -113, -62, 42, 105, -94, -44, 118, 18, 14, -79, 43, -89, 124, -88, 66, 95, 34, 121, 30, 121, -112, -90, 2, 103, 102, -45, -5, -29, 68, 32, 66, -31, -56, 37, 96, 35, 27, 102, 12, 12, -107, 68, -110, 23, -34, -67, -128, 31, 77, 96, -110, 104, 9, -7, 56, 93, 55, -127, 74, -52, 82, -124, 29, 20, -25, 76, -8, -114, -60, -128, -85, 94, -15};
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
    msg.setTimeStamp(0.934695331683);
    msg.setSource(8116U);
    msg.setSourceEntity(166U);
    msg.setDestination(16279U);
    msg.setDestinationEntity(46U);
    const char tmp_msg_0[] = {-121, 87, 96, -117, 43, 33, -92, -103, 113, -57, 84, -51, 109, 121, -8, -67, 111, -81, 14, 92, 116, -40, 63, -51, -14, -36, 90, 18, 21, -28, -52, -113, -35, 2, -104, -77, -125, 26, 35, 95, -106, -11, 15, 105, 123, -3, -50, 21, 30, -49, -38, -3, -3, 64, 86, -22, 12, -32, -70, -88, 32, 84, -105, -87, -48, -6, -15, -114, -86, -41, -8, 71, 6, -45, 35, -94, -2, -10, -63, 81, -51, 37, -61, 2, 16, -114, -75, -14, -43, -78, 6, 10, 102, -83, -126, 7, -109, -84, 19, -27, -11, 39, 44, 67, 93, -118, 69, 25, -3, -4, 60, 23, -31, -109, 16, 21, 44, 96, 55, -36, -6, 63, -51, 7, -102, 117, -103, -87, -68, -19, -77, 8, 36, -46, -75, 93, 10, 98, -40, 19, -74, -77, -109, 61, 38, 16, 42, -113, 106, -103, -88, 83, -56, 56, 94, 1, -80, 124, 47, 40, 38, -80, -29, -63, -115, 52, 12, 71, 118, 36, -115, 96, -126, 42, 15, -75, 103, 41, -63, 4, -33, -56, 60, 10, 41, -2, -5, 22, 39, 27, -35, -120, 22, 21, 107, -112, -70, -54, 72, -102, 106, -4, 67, 118, -19, 1, 72};
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
    msg.setTimeStamp(0.25546361754);
    msg.setSource(36733U);
    msg.setSourceEntity(159U);
    msg.setDestination(26701U);
    msg.setDestinationEntity(24U);
    const char tmp_msg_0[] = {-62, 45, 109, -54, 12, -103, -26, -54, -18, 45, 94, 54, 55, 97, -117, -5, -42, 57, 98, 95, -12, 75, 90, 70, 50, 122, -10, 9, -123, 72, 118, -1, 115, -70, -61, 50, 37, -46, 55, 100, -125, -6, -93, 66, -46, 9, -77, -46, -111, -85, -80, -58, -38, 70, -93, 63, 101, 104, 69, 21, -37, -76, 101, -119, -73, -25, -22, -26};
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
    msg.setTimeStamp(0.951914062191);
    msg.setSource(63037U);
    msg.setSourceEntity(92U);
    msg.setDestination(64099U);
    msg.setDestinationEntity(78U);
    msg.frequency = 3108819858U;
    msg.min_range = 64913U;
    msg.max_range = 40351U;

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
    msg.setTimeStamp(0.306988480805);
    msg.setSource(34255U);
    msg.setSourceEntity(11U);
    msg.setDestination(62646U);
    msg.setDestinationEntity(144U);
    msg.frequency = 2243575820U;
    msg.min_range = 21564U;
    msg.max_range = 5559U;

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
    msg.setTimeStamp(0.950137058468);
    msg.setSource(24470U);
    msg.setSourceEntity(171U);
    msg.setDestination(38409U);
    msg.setDestinationEntity(137U);
    msg.frequency = 2784356023U;
    msg.min_range = 55488U;
    msg.max_range = 26471U;

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
    msg.setTimeStamp(0.445658148258);
    msg.setSource(38350U);
    msg.setSourceEntity(177U);
    msg.setDestination(27164U);
    msg.setDestinationEntity(99U);
    msg.type = 6U;
    msg.frequency = 473708606U;
    msg.min_range = 62677U;
    msg.max_range = 32873U;
    msg.bits_per_point = 43U;
    msg.scale_factor = 0.640606283482;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.614474256304;
    tmp_msg_0.beam_height = 0.148135713627;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-72, -12, 18, -67, -5, -93, -60, -114, -124, 89, -32, -115, -45, -31, 85, -7, -36, -85, -16, -84, -37, -41, 90, 32, 52, -27, -80, -99, -78, 105, 62, -103, -119, -31, -15, -42, -128, -19, 29, -101, 43, -114, -123, 58, 28, 118, -69, -83, 92, -117, 120, -38, -28, -53, -25, -125, 100, 47, 47, -19, -8, -12, -93, -39, 77, -70, 90, 121, 36, 23, -106, 114, -19, -7, 60, -26, -22, 103, 50, 122, 44, -101, 70, 2, -80};
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
    msg.setTimeStamp(0.828658962388);
    msg.setSource(46981U);
    msg.setSourceEntity(165U);
    msg.setDestination(58003U);
    msg.setDestinationEntity(184U);
    msg.type = 89U;
    msg.frequency = 3670386468U;
    msg.min_range = 51232U;
    msg.max_range = 11344U;
    msg.bits_per_point = 43U;
    msg.scale_factor = 0.78695509873;
    const char tmp_msg_0[] = {37, 52, 25, -104, 91, -76, -96, -89, -55, -122, -31, -10, 102, 123, 84, -124, 43, -96, 44, -98, -77, 91, -51, 49, 18, 108, -40, -77, 62, 1, -80, -41, 68, -128, -51, 17, 124, 61, -25, -48, -114, -125, 64, 72, -37, 51, -111, -110, 105, 120, -84, 45, -77, -105, -47, 36, 122, 86, 91, -75, -45, -79, 12, 122, -113, -87, -108, 65, -63, 119, -46};
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
    msg.setTimeStamp(0.900904293971);
    msg.setSource(42023U);
    msg.setSourceEntity(18U);
    msg.setDestination(58471U);
    msg.setDestinationEntity(48U);
    msg.type = 157U;
    msg.frequency = 1619437016U;
    msg.min_range = 42858U;
    msg.max_range = 10153U;
    msg.bits_per_point = 130U;
    msg.scale_factor = 0.981285952132;
    const char tmp_msg_0[] = {-103, -111, -99, 47, -54, -94, 80, -33, 54, 34, 95, -20, 85, -4, 54, 55, 7, 108, -74, -10, 42, -41, 88, 62, -100, 56, -44, 66, -34, -75, -102, 96, 73, -83, -100, 60, -115, 102, 102, -21, -122, -5, 123, -4, 126, 23, -27, 60, 69, -60, -50, -41, -100, 93, -106, 101, 15, -57, 111, 102, 55, -87, 64, 103, 62, -64, -26, 106, -64, 61, -46, -23, 92, 21, 60, 74, -49, 24, -90, 51, -96, 109, 39, 29, -13, 40, 8, -119, -72, -124, 14, 48, 20, -23, 27, 114, 12, 39, -2, 113, -52, -105, -14, -102, 71, -60, -20, 42, 28, -13, -51, -102, 14, 18, -94, 33, -102, 60, 104, -48, 113, -51, 35, -43, -22, 13, -83, -27, 75, -58, -97, -106, 68, -86, 82, -100, 116, 59, 98, 67, 62, -6, -68, -69, -69, -90, 101, 61, 122, 74, -95, -109, -98, 114, 71, 12, 0, -91, -22, 125, -87, 64, 93, 79, -3, -41, 87, -34, 8, -33, -84, 1, 70, 0, -28, -24, -36, 59, 31, 44, -5, -68, 47, -19, 44, 60, -47, 118, -73, -6, -5, 126, -50, 83, -38, -23, -50, -33, -94, -53};
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
    msg.setTimeStamp(0.964454844573);
    msg.setSource(23343U);
    msg.setSourceEntity(13U);
    msg.setDestination(16432U);
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
    msg.setTimeStamp(0.722275832671);
    msg.setSource(25894U);
    msg.setSourceEntity(112U);
    msg.setDestination(15650U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.065372406674);
    msg.setSource(45179U);
    msg.setSourceEntity(79U);
    msg.setDestination(14263U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.36075882621);
    msg.setSource(25187U);
    msg.setSourceEntity(178U);
    msg.setDestination(6343U);
    msg.setDestinationEntity(74U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.843914490773);
    msg.setSource(57590U);
    msg.setSourceEntity(146U);
    msg.setDestination(51482U);
    msg.setDestinationEntity(105U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.606899056898);
    msg.setSource(13179U);
    msg.setSourceEntity(192U);
    msg.setDestination(37341U);
    msg.setDestinationEntity(190U);
    msg.op = 69U;

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
    msg.setTimeStamp(0.541517039254);
    msg.setSource(3300U);
    msg.setSourceEntity(214U);
    msg.setDestination(44204U);
    msg.setDestinationEntity(238U);
    msg.value = 0.780962863545;
    msg.confidence = 0.150745350714;
    msg.opmodes.assign("TUBNLUHYJEHYIZWKKFFGGBEEUTBPTZQNDVKAZLRQUJSJYOIXXZFXYHRJPVFGYMDOGPSEGVFWNQNCOZRSBHTCTJFTIXIBCNKIAGMOEOPLYXKFXKSODKCAMGMVZOMKLBHMYIGAFGMIDYLTWSSVXBCYREWFTVJLQMURQCPSNVOHJJBEDHRYDWLFZDZIUHPEUG");

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
    msg.setTimeStamp(0.974169470377);
    msg.setSource(51888U);
    msg.setSourceEntity(196U);
    msg.setDestination(19174U);
    msg.setDestinationEntity(116U);
    msg.value = 0.307552680419;
    msg.confidence = 0.0900832073044;
    msg.opmodes.assign("JHJHMFGIBQTFEYFBQGSQYAAAOCSRYLVLVFWLOREKUNVJNFESCJHMHINMLXZVBWDHWAUYJPGYKDALKQVLMDTUBAZXOZGUNCNJORCDQUGTDY");

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
    msg.setTimeStamp(0.226435972224);
    msg.setSource(56277U);
    msg.setSourceEntity(137U);
    msg.setDestination(36088U);
    msg.setDestinationEntity(226U);
    msg.value = 0.564665264127;
    msg.confidence = 0.100037303083;
    msg.opmodes.assign("OLKTDOBRIUCEHERMZAOLGOXQTCSSWFKRCGYIMVXYBEZGMUMYVRJQFQIXGKCAQMJNQPXSKFWJVDIUENZAHDBELSVSHYNRBIRYNHJIJAMWLHFVOQRXAORFQVFUGUNNJWCXKLZFCVXKPOILKHURWPNWTDETUBYPXBBWPDEQAQILZBDUUEJGMOBH");

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
    msg.setTimeStamp(0.0369661138407);
    msg.setSource(3730U);
    msg.setSourceEntity(237U);
    msg.setDestination(5311U);
    msg.setDestinationEntity(13U);
    msg.itow = 1672924378U;
    msg.lat = 0.180181550669;
    msg.lon = 0.754352140387;
    msg.height_ell = 0.542729297945;
    msg.height_sea = 0.00819264891155;
    msg.hacc = 0.760010649654;
    msg.vacc = 0.190026567745;
    msg.vel_n = 0.577347596639;
    msg.vel_e = 0.564207301257;
    msg.vel_d = 0.551745643741;
    msg.speed = 0.40364796355;
    msg.gspeed = 0.739824384931;
    msg.heading = 0.819501652723;
    msg.sacc = 0.834499708479;
    msg.cacc = 0.455351709528;

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
    msg.setTimeStamp(0.12725272732);
    msg.setSource(62685U);
    msg.setSourceEntity(219U);
    msg.setDestination(45359U);
    msg.setDestinationEntity(197U);
    msg.itow = 134635236U;
    msg.lat = 0.236404884499;
    msg.lon = 0.398686405227;
    msg.height_ell = 0.943064981226;
    msg.height_sea = 0.742463119423;
    msg.hacc = 0.356890604142;
    msg.vacc = 0.705070542861;
    msg.vel_n = 0.265927712155;
    msg.vel_e = 0.71309762508;
    msg.vel_d = 0.335205212577;
    msg.speed = 0.815815930813;
    msg.gspeed = 0.424339686729;
    msg.heading = 0.866514337815;
    msg.sacc = 0.957721601518;
    msg.cacc = 0.372389789084;

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
    msg.setTimeStamp(0.898412524837);
    msg.setSource(17017U);
    msg.setSourceEntity(137U);
    msg.setDestination(52821U);
    msg.setDestinationEntity(9U);
    msg.itow = 1141198696U;
    msg.lat = 0.176750653301;
    msg.lon = 0.304187629396;
    msg.height_ell = 0.807418212946;
    msg.height_sea = 0.309149719639;
    msg.hacc = 0.828823431194;
    msg.vacc = 0.356008414763;
    msg.vel_n = 0.248238218761;
    msg.vel_e = 0.0174744613564;
    msg.vel_d = 0.244154695379;
    msg.speed = 0.247184654426;
    msg.gspeed = 0.021106185893;
    msg.heading = 0.0917765729966;
    msg.sacc = 0.878621620733;
    msg.cacc = 0.357404705431;

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
    msg.setTimeStamp(0.648321542666);
    msg.setSource(34601U);
    msg.setSourceEntity(174U);
    msg.setDestination(51325U);
    msg.setDestinationEntity(63U);
    msg.id = 86U;
    msg.value = 0.645183851207;

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
    msg.setTimeStamp(0.883211707443);
    msg.setSource(28552U);
    msg.setSourceEntity(89U);
    msg.setDestination(17721U);
    msg.setDestinationEntity(216U);
    msg.id = 39U;
    msg.value = 0.0357897377946;

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
    msg.setTimeStamp(0.480251580359);
    msg.setSource(64868U);
    msg.setSourceEntity(97U);
    msg.setDestination(10684U);
    msg.setDestinationEntity(187U);
    msg.id = 182U;
    msg.value = 0.918744142736;

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
    msg.setTimeStamp(0.686406062287);
    msg.setSource(64987U);
    msg.setSourceEntity(207U);
    msg.setDestination(13541U);
    msg.setDestinationEntity(38U);
    msg.x = 0.33331706996;
    msg.y = 0.3409922078;
    msg.z = 0.934272280246;
    msg.phi = 0.221581073622;
    msg.theta = 0.251075534426;
    msg.psi = 0.516789068844;

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
    msg.setTimeStamp(0.379092601072);
    msg.setSource(28825U);
    msg.setSourceEntity(246U);
    msg.setDestination(10702U);
    msg.setDestinationEntity(157U);
    msg.x = 0.872114912594;
    msg.y = 0.457319478918;
    msg.z = 0.771809568803;
    msg.phi = 0.833833823449;
    msg.theta = 0.966374276141;
    msg.psi = 0.945569776413;

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
    msg.setTimeStamp(0.491368292211);
    msg.setSource(33330U);
    msg.setSourceEntity(39U);
    msg.setDestination(44050U);
    msg.setDestinationEntity(224U);
    msg.x = 0.0729680141803;
    msg.y = 0.325097428519;
    msg.z = 0.530121304605;
    msg.phi = 0.213758345621;
    msg.theta = 0.245558668323;
    msg.psi = 0.427445401315;

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
    msg.setTimeStamp(0.609088956191);
    msg.setSource(30862U);
    msg.setSourceEntity(206U);
    msg.setDestination(23102U);
    msg.setDestinationEntity(57U);
    msg.beam_width = 0.0624822644;
    msg.beam_height = 0.259740555818;

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
    msg.setTimeStamp(0.349372692669);
    msg.setSource(26074U);
    msg.setSourceEntity(30U);
    msg.setDestination(30950U);
    msg.setDestinationEntity(243U);
    msg.beam_width = 0.24672841367;
    msg.beam_height = 0.389872378849;

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
    msg.setTimeStamp(0.980935762808);
    msg.setSource(28633U);
    msg.setSourceEntity(87U);
    msg.setDestination(31921U);
    msg.setDestinationEntity(43U);
    msg.beam_width = 0.101715962727;
    msg.beam_height = 0.506631192843;

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
    msg.setTimeStamp(0.847595791683);
    msg.setSource(45153U);
    msg.setSourceEntity(72U);
    msg.setDestination(48053U);
    msg.setDestinationEntity(109U);
    msg.id = 139U;
    msg.zoom = 199U;
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
    msg.setTimeStamp(0.890716611097);
    msg.setSource(4584U);
    msg.setSourceEntity(71U);
    msg.setDestination(39131U);
    msg.setDestinationEntity(44U);
    msg.id = 251U;
    msg.zoom = 159U;
    msg.action = 177U;

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
    msg.setTimeStamp(0.0535299995133);
    msg.setSource(26984U);
    msg.setSourceEntity(19U);
    msg.setDestination(18611U);
    msg.setDestinationEntity(212U);
    msg.id = 54U;
    msg.zoom = 86U;
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
    msg.setTimeStamp(0.621470175575);
    msg.setSource(6243U);
    msg.setSourceEntity(107U);
    msg.setDestination(32872U);
    msg.setDestinationEntity(164U);
    msg.id = 21U;
    msg.value = 0.38933244039;

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
    msg.setTimeStamp(0.348962077086);
    msg.setSource(24868U);
    msg.setSourceEntity(95U);
    msg.setDestination(41465U);
    msg.setDestinationEntity(136U);
    msg.id = 248U;
    msg.value = 0.852090529844;

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
    msg.setTimeStamp(0.0876134487618);
    msg.setSource(49183U);
    msg.setSourceEntity(49U);
    msg.setDestination(37237U);
    msg.setDestinationEntity(21U);
    msg.id = 180U;
    msg.value = 0.716621645982;

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
    msg.setTimeStamp(0.78013429199);
    msg.setSource(3838U);
    msg.setSourceEntity(47U);
    msg.setDestination(49204U);
    msg.setDestinationEntity(227U);
    msg.id = 217U;
    msg.value = 0.97525448481;

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
    msg.setTimeStamp(0.940670406222);
    msg.setSource(49401U);
    msg.setSourceEntity(122U);
    msg.setDestination(44834U);
    msg.setDestinationEntity(65U);
    msg.id = 24U;
    msg.value = 0.717513146824;

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
    msg.setTimeStamp(0.116337550201);
    msg.setSource(44434U);
    msg.setSourceEntity(132U);
    msg.setDestination(9422U);
    msg.setDestinationEntity(205U);
    msg.id = 74U;
    msg.value = 0.0616494975617;

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
    msg.setTimeStamp(0.448874304362);
    msg.setSource(6403U);
    msg.setSourceEntity(234U);
    msg.setDestination(3344U);
    msg.setDestinationEntity(207U);
    msg.id = 236U;
    msg.angle = 0.909454084624;

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
    msg.setTimeStamp(0.185975506808);
    msg.setSource(31058U);
    msg.setSourceEntity(25U);
    msg.setDestination(30222U);
    msg.setDestinationEntity(58U);
    msg.id = 226U;
    msg.angle = 0.882330408865;

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
    msg.setTimeStamp(0.893070182179);
    msg.setSource(5796U);
    msg.setSourceEntity(207U);
    msg.setDestination(24640U);
    msg.setDestinationEntity(132U);
    msg.id = 52U;
    msg.angle = 0.241708699056;

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
    msg.setTimeStamp(0.941264970981);
    msg.setSource(7487U);
    msg.setSourceEntity(72U);
    msg.setDestination(59302U);
    msg.setDestinationEntity(50U);
    msg.op = 17U;
    msg.actions.assign("PUQFMVGWKHFROEEADMOQOFLJPXPGFVLWEDZZIBKKGLDYLBVPPHNPQPVRIERXKZHNKCTFJKZWTCPZMTSOTHZUGTXADBKIGIMDTQMVTUCVRGSFRXYILS");

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
    msg.setTimeStamp(0.613992554722);
    msg.setSource(63000U);
    msg.setSourceEntity(122U);
    msg.setDestination(12569U);
    msg.setDestinationEntity(145U);
    msg.op = 67U;
    msg.actions.assign("JFWVECDHALYKNBTNTXXKFIWUTVEFNENGNYOEPJEWLPBEZKRZBQKMTMMDQIXCDYGCENPFVTFPBYDVUTIXQUFIGZMOVCIULPLTWMGXOHDGSCHJEOWBLLKAIMLWGSSUAPUSRAZOKDJFOSDTJWHYAPACSEZVIQHGTUGFXJRNMOHHBXTGWMRZYABCPCBEJYVVIYWUFMUKJQDHVK");

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
    msg.setTimeStamp(0.493596879324);
    msg.setSource(54831U);
    msg.setSourceEntity(62U);
    msg.setDestination(7599U);
    msg.setDestinationEntity(11U);
    msg.op = 253U;
    msg.actions.assign("SXDSGOYYZNPPBFWKLEXHNXBBFNJUDITLVHZWZNYHSVOPXJOMNFARMOUFEFXBMLBHYZTCUZKHXDGGRYDQSAAIVXGFTDUKIQ");

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
    msg.setTimeStamp(0.577394975107);
    msg.setSource(22327U);
    msg.setSourceEntity(111U);
    msg.setDestination(44081U);
    msg.setDestinationEntity(71U);
    msg.actions.assign("HZVFKINZQADMFQUTVOGBVTCHPFBFONGKOPQPGJHYALSGHMSRVUJKCFJYSWNQWKNXXGFHEEGHJPZWMDQAVDHLIYMTAGXEJOFKPRKOVSZ");

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
    msg.setTimeStamp(0.627753595427);
    msg.setSource(45448U);
    msg.setSourceEntity(188U);
    msg.setDestination(24494U);
    msg.setDestinationEntity(171U);
    msg.actions.assign("YMADNPBOFICWBOMAJODCVWCBAUCEPIKSVQNVQZVGJFGMYMNSHVKBFSRPXSDRQKOZOSSOLJFMXONUPUODTNGQKLLKUVUPDXQUETVTEVSJKTSSDMXXRJOFEQOZGADWYLUHGDWNIRXAHIJAGKBZBLHZEHETNPZWUYQICBKZMGHFIDNCBSVIFXRNLKEXCJDBUCTXYAPLPQVQWNZBWJTXAKYPYWEEYTUHTLWGHG");

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
    msg.setTimeStamp(0.474448270154);
    msg.setSource(50541U);
    msg.setSourceEntity(240U);
    msg.setDestination(53081U);
    msg.setDestinationEntity(241U);
    msg.actions.assign("GJUFGDMUENFGMCQGDYHYPBLVINZCFSEDAVIQJWJJTRPMIXOZCGBWNTNBEKCFVHDWUVBHYWMVXANPAKCOLDECLKZIIXAFXTORYWTLPPFLHXEHLVMDYLNRWBODQIKYTGYVDCAWYETIP");

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
    msg.setTimeStamp(0.531773154102);
    msg.setSource(38785U);
    msg.setSourceEntity(213U);
    msg.setDestination(4677U);
    msg.setDestinationEntity(20U);
    msg.button = 161U;
    msg.value = 158U;

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
    msg.setTimeStamp(0.27175733291);
    msg.setSource(48506U);
    msg.setSourceEntity(49U);
    msg.setDestination(47674U);
    msg.setDestinationEntity(147U);
    msg.button = 225U;
    msg.value = 163U;

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
    msg.setTimeStamp(0.193115754389);
    msg.setSource(5036U);
    msg.setSourceEntity(117U);
    msg.setDestination(43287U);
    msg.setDestinationEntity(185U);
    msg.button = 125U;
    msg.value = 119U;

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
    msg.setTimeStamp(0.801718557548);
    msg.setSource(55172U);
    msg.setSourceEntity(191U);
    msg.setDestination(48802U);
    msg.setDestinationEntity(221U);
    msg.op = 121U;
    msg.text.assign("HWWRLGBJUSYATJSXINYDMLJFKFPVHRETWXTIXNDUYWVOPISCFEEVVYOHHIRKVRAEVZBFZESDEIUODQZYCPXWNECBDGCRUZRDOMSMNOHEBIQVOVWGKRHKEBPLNOQAQZJPDPKALMNJAGXUBSYKXHXFTSLUSTTQWNZVB");

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
    msg.setTimeStamp(0.722779531706);
    msg.setSource(16175U);
    msg.setSourceEntity(127U);
    msg.setDestination(49548U);
    msg.setDestinationEntity(5U);
    msg.op = 21U;
    msg.text.assign("VKCDABOFJQXGOVSQXRUECSHIRZLWZRSMXLOELOYEEGZHWPKXHAWAIQXTUEAGDWOXKNAMSAECFBPVIJDRQFDRYPBMBGFQIPJXSVSFKIQTQBWMDBGTDPZRQKYSZKZYEMLYBYDCJRCKMLWJOIFXCLNHKTBQOAVLZXHGZQAVIFFVJJUNIWTHGUOUUWLYNHLODYCTMRAHZPPYNTJKMBCPNZSACPD");

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
    msg.setTimeStamp(0.0640446528404);
    msg.setSource(30469U);
    msg.setSourceEntity(54U);
    msg.setDestination(53107U);
    msg.setDestinationEntity(211U);
    msg.op = 117U;
    msg.text.assign("UDPRIRYMVRUGMAQXYKDPEGWLAMRJMZVIVHBZMOUJVFLOWGNCZTLSPQDTBDNSRVPCDUOASXYCSBSHLHKRQJSKITWABFJWTFWXAXAYJOAUUXWFDLGSJEZCYIQPFODIALZTWQUOIGRSPJEBQKCYWTENNJVEQGWYHHQKNDLRAIHMULOTOLCHTGEHXFMYPDMCFEFLFNUTJQRBOCVPNDZPTEGSEHKJBIBMSKGUOZREKAYCVXVKKXMHXVZFYXZB");

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
    msg.setTimeStamp(0.180902786638);
    msg.setSource(56823U);
    msg.setSourceEntity(137U);
    msg.setDestination(58867U);
    msg.setDestinationEntity(191U);
    msg.op = 123U;
    msg.time_remain = 0.697669498928;
    msg.sched_time = 0.0857287985693;

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
    msg.setTimeStamp(0.753495478213);
    msg.setSource(41084U);
    msg.setSourceEntity(125U);
    msg.setDestination(46367U);
    msg.setDestinationEntity(250U);
    msg.op = 210U;
    msg.time_remain = 0.43192049149;
    msg.sched_time = 0.193888927112;

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
    msg.setTimeStamp(0.857274427357);
    msg.setSource(55708U);
    msg.setSourceEntity(109U);
    msg.setDestination(46446U);
    msg.setDestinationEntity(101U);
    msg.op = 246U;
    msg.time_remain = 0.146926780496;
    msg.sched_time = 0.619712566363;

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
    msg.setTimeStamp(0.162640485316);
    msg.setSource(25027U);
    msg.setSourceEntity(206U);
    msg.setDestination(21827U);
    msg.setDestinationEntity(17U);
    msg.id = 98U;
    msg.op = 178U;
    msg.sched_time = 0.298200498574;

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
    msg.setTimeStamp(0.704578515739);
    msg.setSource(57094U);
    msg.setSourceEntity(136U);
    msg.setDestination(44766U);
    msg.setDestinationEntity(145U);
    msg.id = 60U;
    msg.op = 190U;
    msg.sched_time = 0.0987777411045;

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
    msg.setTimeStamp(0.276197275563);
    msg.setSource(24539U);
    msg.setSourceEntity(151U);
    msg.setDestination(15594U);
    msg.setDestinationEntity(75U);
    msg.id = 253U;
    msg.op = 47U;
    msg.sched_time = 0.0966231629852;

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
    msg.setTimeStamp(0.968502439883);
    msg.setSource(48012U);
    msg.setSourceEntity(152U);
    msg.setDestination(15088U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.571198184417);
    msg.setSource(24611U);
    msg.setSourceEntity(169U);
    msg.setDestination(10850U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.789544253088);
    msg.setSource(58584U);
    msg.setSourceEntity(9U);
    msg.setDestination(42825U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.179355945303);
    msg.setSource(53321U);
    msg.setSourceEntity(88U);
    msg.setDestination(38297U);
    msg.setDestinationEntity(142U);
    msg.id = 245U;
    msg.label.assign("UDNDGHPBEAIBMDXSTVVZGETQPCCVKFPTZFYZBHXUQBLWGWZWUXVUZFIRGESKDQMGOYNOUIAZHXAWOPQNYHCRXKCSEMULLRJPSWOXKOJTNTMZIADZEEVDWGQUYLKTOLBLBMCJXYNOKPORMJJLNGEYTEKRJWNVTFPGUQZRJKQEHFFHDB");
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
    msg.setTimeStamp(0.540308693218);
    msg.setSource(6752U);
    msg.setSourceEntity(2U);
    msg.setDestination(5933U);
    msg.setDestinationEntity(24U);
    msg.id = 158U;
    msg.label.assign("FGWJCYFGNGULAEPYCRSWWHAJOVUDSBSUKHYZZUDXKCIVINAERZLWNKIPKKSJNXTMURHJWZHCMZXFJMEQNSYFLGTDTIWPQQTPUMKCVSYRGFTHIJEEUQDVBGXLPVZKBIARNISUTLGDPESYOKQPQRHDJQRVCOWTAZMPONDUNBQBBYFEWVOQYBCPXSFATBIONOWDDCAHSLFVXAKAMYGB");
    msg.state = 190U;

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
    msg.setTimeStamp(0.799269512744);
    msg.setSource(5151U);
    msg.setSourceEntity(43U);
    msg.setDestination(27104U);
    msg.setDestinationEntity(78U);
    msg.id = 43U;
    msg.label.assign("TYFZQBMYRQRTJJEISCJIKLBDOQYAENKBCVHDPRUVZFSQLNJPDOHZBIQGSMMVWPCBHKMWJGKCXHPT");
    msg.state = 160U;

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
    IMC::LedControl msg;
    msg.setTimeStamp(0.985263194356);
    msg.setSource(11001U);
    msg.setSourceEntity(206U);
    msg.setDestination(11457U);
    msg.setDestinationEntity(254U);
    msg.id = 200U;
    msg.op = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedControl msg;
    msg.setTimeStamp(0.594670316336);
    msg.setSource(34175U);
    msg.setSourceEntity(18U);
    msg.setDestination(10493U);
    msg.setDestinationEntity(28U);
    msg.id = 233U;
    msg.op = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedControl msg;
    msg.setTimeStamp(0.215814067983);
    msg.setSource(15275U);
    msg.setSourceEntity(125U);
    msg.setDestination(2183U);
    msg.setDestinationEntity(1U);
    msg.id = 42U;
    msg.op = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.80014405357);
    msg.setSource(8698U);
    msg.setSourceEntity(39U);
    msg.setDestination(19511U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.612438323593;
    msg.lon = 0.794493122151;
    msg.height = 0.557519466241;
    msg.x = 0.605656549428;
    msg.y = 0.757377185108;
    msg.z = 0.235909456949;
    msg.phi = 0.437493949264;
    msg.theta = 0.759732664123;
    msg.psi = 0.389794581754;
    msg.u = 0.980575307283;
    msg.v = 0.242421039245;
    msg.w = 0.0741904785291;
    msg.vx = 0.245005780323;
    msg.vy = 0.608491076913;
    msg.vz = 0.419520872541;
    msg.p = 0.323423667191;
    msg.q = 0.77102491404;
    msg.r = 0.71515552228;
    msg.depth = 0.948953712521;
    msg.alt = 0.880296576614;

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
    msg.setTimeStamp(0.338611797464);
    msg.setSource(1897U);
    msg.setSourceEntity(241U);
    msg.setDestination(7599U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.596622581818;
    msg.lon = 0.368561350846;
    msg.height = 0.350407457141;
    msg.x = 0.133996415644;
    msg.y = 0.62173372577;
    msg.z = 0.6710747227;
    msg.phi = 0.248918129679;
    msg.theta = 0.450727918666;
    msg.psi = 0.616185563076;
    msg.u = 0.904462048351;
    msg.v = 0.229263807245;
    msg.w = 0.726831249711;
    msg.vx = 0.894221266545;
    msg.vy = 0.588898197734;
    msg.vz = 0.700839578076;
    msg.p = 0.219548499622;
    msg.q = 0.82795436368;
    msg.r = 0.0011869169773;
    msg.depth = 0.451338215489;
    msg.alt = 0.0272254235943;

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
    msg.setTimeStamp(0.725526850007);
    msg.setSource(18707U);
    msg.setSourceEntity(28U);
    msg.setDestination(63770U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.8181559652;
    msg.lon = 0.429752155672;
    msg.height = 0.305516017577;
    msg.x = 0.509494953417;
    msg.y = 0.953383414267;
    msg.z = 0.334326365947;
    msg.phi = 0.799433725996;
    msg.theta = 0.747851215246;
    msg.psi = 0.140366769775;
    msg.u = 0.338073427474;
    msg.v = 0.511155895292;
    msg.w = 0.0725359310312;
    msg.vx = 0.263044310748;
    msg.vy = 0.974600968497;
    msg.vz = 0.291295322273;
    msg.p = 0.170402201361;
    msg.q = 0.221474277163;
    msg.r = 0.602435017773;
    msg.depth = 0.858170880916;
    msg.alt = 0.488886700281;

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
    msg.setTimeStamp(0.303294236302);
    msg.setSource(6013U);
    msg.setSourceEntity(126U);
    msg.setDestination(64329U);
    msg.setDestinationEntity(18U);
    msg.x = 0.358750617921;
    msg.y = 0.483196814875;
    msg.z = 0.276144736453;

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
    msg.setTimeStamp(0.189554588761);
    msg.setSource(30694U);
    msg.setSourceEntity(174U);
    msg.setDestination(51297U);
    msg.setDestinationEntity(76U);
    msg.x = 0.992372269299;
    msg.y = 0.62077190023;
    msg.z = 0.33307363939;

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
    msg.setTimeStamp(0.734655014462);
    msg.setSource(22674U);
    msg.setSourceEntity(128U);
    msg.setDestination(18183U);
    msg.setDestinationEntity(231U);
    msg.x = 0.149195253551;
    msg.y = 0.375166646981;
    msg.z = 0.305882110949;

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
    msg.setTimeStamp(0.212875293873);
    msg.setSource(20229U);
    msg.setSourceEntity(218U);
    msg.setDestination(24137U);
    msg.setDestinationEntity(20U);
    msg.value = 0.854855705136;

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
    msg.setTimeStamp(0.943994391614);
    msg.setSource(40107U);
    msg.setSourceEntity(72U);
    msg.setDestination(37935U);
    msg.setDestinationEntity(149U);
    msg.value = 0.613056091592;

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
    msg.setTimeStamp(0.788973326856);
    msg.setSource(58753U);
    msg.setSourceEntity(221U);
    msg.setDestination(615U);
    msg.setDestinationEntity(18U);
    msg.value = 0.786153534432;

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
    msg.setTimeStamp(0.247468804929);
    msg.setSource(55357U);
    msg.setSourceEntity(130U);
    msg.setDestination(10557U);
    msg.setDestinationEntity(235U);
    msg.value = 0.526085427843;

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
    msg.setTimeStamp(0.376092935914);
    msg.setSource(901U);
    msg.setSourceEntity(218U);
    msg.setDestination(52131U);
    msg.setDestinationEntity(221U);
    msg.value = 0.472986843132;

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
    msg.setTimeStamp(0.0210560606186);
    msg.setSource(63274U);
    msg.setSourceEntity(57U);
    msg.setDestination(34995U);
    msg.setDestinationEntity(124U);
    msg.value = 0.312559820362;

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
    msg.setTimeStamp(0.982664525543);
    msg.setSource(8944U);
    msg.setSourceEntity(182U);
    msg.setDestination(58278U);
    msg.setDestinationEntity(134U);
    msg.x = 0.973638493269;
    msg.y = 0.989867747664;
    msg.z = 0.144916099463;
    msg.phi = 0.844644973602;
    msg.theta = 0.556389374225;
    msg.psi = 0.820187374438;
    msg.p = 0.971341773986;
    msg.q = 0.372493480588;
    msg.r = 0.403367767982;
    msg.u = 0.572985738904;
    msg.v = 0.019231312117;
    msg.w = 0.401304090236;
    msg.bias_psi = 0.279459125392;
    msg.bias_r = 0.343384279478;

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
    msg.setTimeStamp(0.12623718403);
    msg.setSource(32574U);
    msg.setSourceEntity(48U);
    msg.setDestination(9236U);
    msg.setDestinationEntity(222U);
    msg.x = 0.855576703215;
    msg.y = 0.0780858801488;
    msg.z = 0.300826526943;
    msg.phi = 0.387521644175;
    msg.theta = 0.969632447693;
    msg.psi = 0.231386369954;
    msg.p = 0.11334256155;
    msg.q = 0.292872556516;
    msg.r = 0.0186015873313;
    msg.u = 0.498673890894;
    msg.v = 0.809810788855;
    msg.w = 0.546250955323;
    msg.bias_psi = 0.246761566425;
    msg.bias_r = 0.636077411092;

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
    msg.setTimeStamp(0.578715612048);
    msg.setSource(48880U);
    msg.setSourceEntity(212U);
    msg.setDestination(56551U);
    msg.setDestinationEntity(6U);
    msg.x = 0.23352797685;
    msg.y = 0.721951449768;
    msg.z = 0.817702297204;
    msg.phi = 0.363350814428;
    msg.theta = 0.284055670221;
    msg.psi = 0.428701131815;
    msg.p = 0.181746722767;
    msg.q = 0.730156185927;
    msg.r = 0.903292583351;
    msg.u = 0.490597349351;
    msg.v = 0.198538319189;
    msg.w = 0.376284374188;
    msg.bias_psi = 0.550571043544;
    msg.bias_r = 0.0856475111438;

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
    msg.setTimeStamp(0.0296785429438);
    msg.setSource(10525U);
    msg.setSourceEntity(188U);
    msg.setDestination(8698U);
    msg.setDestinationEntity(70U);
    msg.bias_psi = 0.4126654564;
    msg.bias_r = 0.635355697298;
    msg.cog = 0.799566354639;
    msg.cyaw = 0.30222776317;
    msg.lbl_rej_level = 0.356166937582;
    msg.gps_rej_level = 0.607553700114;
    msg.custom_x = 0.840961255596;
    msg.custom_y = 0.488054090418;
    msg.custom_z = 0.166071399345;

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
    msg.setTimeStamp(0.571931090296);
    msg.setSource(59155U);
    msg.setSourceEntity(92U);
    msg.setDestination(3549U);
    msg.setDestinationEntity(40U);
    msg.bias_psi = 0.225123306797;
    msg.bias_r = 0.172277439041;
    msg.cog = 0.946865786079;
    msg.cyaw = 0.644592987353;
    msg.lbl_rej_level = 0.406093886749;
    msg.gps_rej_level = 0.265774742261;
    msg.custom_x = 0.436268376005;
    msg.custom_y = 0.266100592515;
    msg.custom_z = 0.322143928843;

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
    msg.setTimeStamp(0.141925561112);
    msg.setSource(30919U);
    msg.setSourceEntity(253U);
    msg.setDestination(52073U);
    msg.setDestinationEntity(198U);
    msg.bias_psi = 0.126205054883;
    msg.bias_r = 0.455659830108;
    msg.cog = 0.288428449216;
    msg.cyaw = 0.606947481436;
    msg.lbl_rej_level = 0.859620920157;
    msg.gps_rej_level = 0.0435999486182;
    msg.custom_x = 0.73484030308;
    msg.custom_y = 0.515084308039;
    msg.custom_z = 0.421887886003;

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
    msg.setTimeStamp(0.894640609368);
    msg.setSource(8574U);
    msg.setSourceEntity(123U);
    msg.setDestination(32479U);
    msg.setDestinationEntity(99U);
    msg.utc_time = 0.181960205244;
    msg.reason = 201U;

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
    msg.setTimeStamp(0.548994636812);
    msg.setSource(47875U);
    msg.setSourceEntity(96U);
    msg.setDestination(22893U);
    msg.setDestinationEntity(207U);
    msg.utc_time = 0.951186839915;
    msg.reason = 78U;

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
    msg.setTimeStamp(0.226819965706);
    msg.setSource(55242U);
    msg.setSourceEntity(26U);
    msg.setDestination(58720U);
    msg.setDestinationEntity(233U);
    msg.utc_time = 0.10885324448;
    msg.reason = 64U;

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
    msg.setTimeStamp(0.738596305612);
    msg.setSource(21483U);
    msg.setSourceEntity(242U);
    msg.setDestination(55612U);
    msg.setDestinationEntity(225U);
    msg.id = 229U;
    msg.range = 0.624341009363;
    msg.acceptance = 149U;

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
    msg.setTimeStamp(0.901803850433);
    msg.setSource(32308U);
    msg.setSourceEntity(153U);
    msg.setDestination(60208U);
    msg.setDestinationEntity(12U);
    msg.id = 51U;
    msg.range = 0.535348624894;
    msg.acceptance = 203U;

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
    msg.setTimeStamp(0.211019482836);
    msg.setSource(23891U);
    msg.setSourceEntity(70U);
    msg.setDestination(18750U);
    msg.setDestinationEntity(164U);
    msg.id = 167U;
    msg.range = 0.941147304946;
    msg.acceptance = 105U;

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
    msg.setTimeStamp(0.223166964842);
    msg.setSource(34202U);
    msg.setSourceEntity(215U);
    msg.setDestination(30491U);
    msg.setDestinationEntity(148U);
    msg.type = 103U;
    msg.reason = 71U;
    msg.value = 0.736205574942;
    msg.timestep = 0.0940207476442;

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
    msg.setTimeStamp(0.676622051828);
    msg.setSource(20124U);
    msg.setSourceEntity(219U);
    msg.setDestination(77U);
    msg.setDestinationEntity(190U);
    msg.type = 96U;
    msg.reason = 234U;
    msg.value = 0.872921151135;
    msg.timestep = 0.271825802612;

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
    msg.setTimeStamp(0.363750634264);
    msg.setSource(52934U);
    msg.setSourceEntity(23U);
    msg.setDestination(43202U);
    msg.setDestinationEntity(187U);
    msg.type = 227U;
    msg.reason = 25U;
    msg.value = 0.67663412661;
    msg.timestep = 0.143358545451;

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
    msg.setTimeStamp(0.806114176599);
    msg.setSource(16710U);
    msg.setSourceEntity(6U);
    msg.setDestination(20542U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.326018836171);
    msg.setSource(30744U);
    msg.setSourceEntity(94U);
    msg.setDestination(5437U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.124901911492);
    msg.setSource(43392U);
    msg.setSourceEntity(205U);
    msg.setDestination(58452U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.501232488408);
    msg.setSource(56780U);
    msg.setSourceEntity(4U);
    msg.setDestination(26674U);
    msg.setDestinationEntity(130U);
    msg.beacon.assign("ZKZJXMDGUULGQYTUWXWIVNOKJLZHLQOJPPBQBBXBVQPSCIAQDHNSCSMMBQZRTUQEOKOFHMIEPZGZTUWBGFPGHIZTNPSNHMYSVDECWIKORNYKRTVCXRZAPMHYQASVDUGLXWILULRB");
    msg.x = 0.424913603341;
    msg.y = 0.061931478607;
    msg.depth = 0.198390509389;
    msg.var_x = 0.335604081905;
    msg.var_y = 0.960768770644;

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
    msg.setTimeStamp(0.182086648238);
    msg.setSource(49745U);
    msg.setSourceEntity(87U);
    msg.setDestination(3848U);
    msg.setDestinationEntity(203U);
    msg.beacon.assign("DSIBEYZBKTZGFHDQPTTRDZWNGKVATAPYAUOHDRICMDVVTSSSMVOKVQNBQMYHCULDQNGDUPMEXBCJSXHCQNDAFZAHPZYUIXFLLBZFYLRULTMBLFFAZIOEWNXTJNRWGIWAYFO");
    msg.x = 0.851088127684;
    msg.y = 0.523003908766;
    msg.depth = 0.155026148523;
    msg.var_x = 0.266348780573;
    msg.var_y = 0.479636280114;

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
    msg.setTimeStamp(0.394163930919);
    msg.setSource(36037U);
    msg.setSourceEntity(142U);
    msg.setDestination(32772U);
    msg.setDestinationEntity(243U);
    msg.beacon.assign("ZZTJSHTXAJSEYWRCWHRNDQXBIEGDWSZDYGCNEUNQDYFSQXFKTNNGHVZJTEHGXECHPKAAILACUDGFJUICGVDMKRAQUPUWNYOLVQZGRIRDIATGNWILMSKFUPXUVPPKQMZYNFHBNWMOMOPDBIIOHRPAZBWKXOWLMMYFJSHOPWB");
    msg.x = 0.37814163428;
    msg.y = 0.942855208367;
    msg.depth = 0.57254820883;
    msg.var_x = 0.947416158047;
    msg.var_y = 0.432586678659;

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
    msg.setTimeStamp(0.770999138557);
    msg.setSource(37007U);
    msg.setSourceEntity(87U);
    msg.setDestination(54675U);
    msg.setDestinationEntity(112U);
    msg.value = 0.123785196194;

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
    msg.setTimeStamp(0.849878884555);
    msg.setSource(31157U);
    msg.setSourceEntity(90U);
    msg.setDestination(29637U);
    msg.setDestinationEntity(139U);
    msg.value = 0.904708047514;

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
    msg.setTimeStamp(0.221475069734);
    msg.setSource(53608U);
    msg.setSourceEntity(243U);
    msg.setDestination(40599U);
    msg.setDestinationEntity(2U);
    msg.value = 0.0147728421778;

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
    msg.setTimeStamp(0.241224552641);
    msg.setSource(61334U);
    msg.setSourceEntity(201U);
    msg.setDestination(26200U);
    msg.setDestinationEntity(140U);
    msg.value = 0.382830874337;
    msg.z_units = 42U;

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
    msg.setTimeStamp(0.455186525607);
    msg.setSource(14681U);
    msg.setSourceEntity(121U);
    msg.setDestination(43553U);
    msg.setDestinationEntity(94U);
    msg.value = 0.470575564842;
    msg.z_units = 68U;

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
    msg.setTimeStamp(0.304693570331);
    msg.setSource(31828U);
    msg.setSourceEntity(129U);
    msg.setDestination(48183U);
    msg.setDestinationEntity(229U);
    msg.value = 0.582425700979;
    msg.z_units = 171U;

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
    msg.setTimeStamp(0.665455690576);
    msg.setSource(2530U);
    msg.setSourceEntity(233U);
    msg.setDestination(25406U);
    msg.setDestinationEntity(47U);
    msg.value = 0.81521461813;
    msg.speed_units = 82U;

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
    msg.setTimeStamp(0.718678679449);
    msg.setSource(17822U);
    msg.setSourceEntity(202U);
    msg.setDestination(15082U);
    msg.setDestinationEntity(81U);
    msg.value = 0.018072226921;
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
    msg.setTimeStamp(0.221281537236);
    msg.setSource(19782U);
    msg.setSourceEntity(25U);
    msg.setDestination(20169U);
    msg.setDestinationEntity(137U);
    msg.value = 0.866579270424;
    msg.speed_units = 49U;

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
    msg.setTimeStamp(0.00360766961429);
    msg.setSource(3379U);
    msg.setSourceEntity(192U);
    msg.setDestination(55553U);
    msg.setDestinationEntity(155U);
    msg.value = 0.642710526164;

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
    msg.setTimeStamp(0.969164393557);
    msg.setSource(39578U);
    msg.setSourceEntity(7U);
    msg.setDestination(27476U);
    msg.setDestinationEntity(244U);
    msg.value = 0.90720527015;

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
    msg.setTimeStamp(0.138508675976);
    msg.setSource(3511U);
    msg.setSourceEntity(226U);
    msg.setDestination(54481U);
    msg.setDestinationEntity(233U);
    msg.value = 0.224371120263;

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
    msg.setTimeStamp(0.852028793446);
    msg.setSource(45874U);
    msg.setSourceEntity(153U);
    msg.setDestination(20177U);
    msg.setDestinationEntity(147U);
    msg.value = 0.453088123346;

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
    msg.setTimeStamp(0.362246589601);
    msg.setSource(21581U);
    msg.setSourceEntity(66U);
    msg.setDestination(43589U);
    msg.setDestinationEntity(124U);
    msg.value = 0.999480517546;

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
    msg.setTimeStamp(0.213722926057);
    msg.setSource(45178U);
    msg.setSourceEntity(165U);
    msg.setDestination(64057U);
    msg.setDestinationEntity(227U);
    msg.value = 0.64372220949;

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
    msg.setTimeStamp(0.877233940113);
    msg.setSource(37727U);
    msg.setSourceEntity(121U);
    msg.setDestination(65533U);
    msg.setDestinationEntity(172U);
    msg.value = 0.377705167922;

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
    msg.setTimeStamp(0.403824980439);
    msg.setSource(49414U);
    msg.setSourceEntity(62U);
    msg.setDestination(55836U);
    msg.setDestinationEntity(25U);
    msg.value = 0.0616915557517;

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
    msg.setTimeStamp(0.681097625711);
    msg.setSource(64820U);
    msg.setSourceEntity(81U);
    msg.setDestination(29756U);
    msg.setDestinationEntity(58U);
    msg.value = 0.765883214492;

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
    msg.setTimeStamp(0.237924369884);
    msg.setSource(62796U);
    msg.setSourceEntity(203U);
    msg.setDestination(49677U);
    msg.setDestinationEntity(212U);
    msg.start_lat = 0.0943032949044;
    msg.start_lon = 0.824654451146;
    msg.start_z = 0.0746278660141;
    msg.start_z_units = 183U;
    msg.end_lat = 0.024546428426;
    msg.end_lon = 0.671928777165;
    msg.end_z = 0.430957093314;
    msg.end_z_units = 90U;
    msg.speed = 0.405871429402;
    msg.speed_units = 43U;
    msg.lradius = 0.352841231817;
    msg.flags = 78U;

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
    msg.setTimeStamp(0.877069232944);
    msg.setSource(12784U);
    msg.setSourceEntity(73U);
    msg.setDestination(32629U);
    msg.setDestinationEntity(24U);
    msg.start_lat = 0.0693738604138;
    msg.start_lon = 0.0655960600882;
    msg.start_z = 0.391990314463;
    msg.start_z_units = 210U;
    msg.end_lat = 0.262402508689;
    msg.end_lon = 0.184742373091;
    msg.end_z = 0.864464504759;
    msg.end_z_units = 161U;
    msg.speed = 0.180126671591;
    msg.speed_units = 40U;
    msg.lradius = 0.831570569177;
    msg.flags = 19U;

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
    msg.setTimeStamp(0.478048443868);
    msg.setSource(9914U);
    msg.setSourceEntity(204U);
    msg.setDestination(39795U);
    msg.setDestinationEntity(159U);
    msg.start_lat = 0.768766500817;
    msg.start_lon = 0.411033658203;
    msg.start_z = 0.550251059547;
    msg.start_z_units = 121U;
    msg.end_lat = 0.371524310043;
    msg.end_lon = 0.56390806523;
    msg.end_z = 0.42630998961;
    msg.end_z_units = 226U;
    msg.speed = 0.732981464336;
    msg.speed_units = 174U;
    msg.lradius = 0.667054613013;
    msg.flags = 239U;

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
    msg.setTimeStamp(0.981750794513);
    msg.setSource(13742U);
    msg.setSourceEntity(238U);
    msg.setDestination(37967U);
    msg.setDestinationEntity(208U);
    msg.x = 0.896926353527;
    msg.y = 0.273279368162;
    msg.z = 0.94368839941;
    msg.k = 0.102331962598;
    msg.m = 0.462744445003;
    msg.n = 0.624992266834;
    msg.flags = 186U;

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
    msg.setTimeStamp(0.381127624671);
    msg.setSource(13946U);
    msg.setSourceEntity(0U);
    msg.setDestination(51585U);
    msg.setDestinationEntity(92U);
    msg.x = 0.750174647451;
    msg.y = 0.678113886018;
    msg.z = 0.400184912326;
    msg.k = 0.680464474908;
    msg.m = 0.471160146166;
    msg.n = 0.3441974154;
    msg.flags = 104U;

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
    msg.setTimeStamp(0.170435640932);
    msg.setSource(48185U);
    msg.setSourceEntity(94U);
    msg.setDestination(11809U);
    msg.setDestinationEntity(10U);
    msg.x = 0.882888354136;
    msg.y = 0.217179779632;
    msg.z = 0.398476956777;
    msg.k = 0.982692831015;
    msg.m = 0.613478495347;
    msg.n = 0.207727446041;
    msg.flags = 100U;

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
    msg.setTimeStamp(0.93826500004);
    msg.setSource(46521U);
    msg.setSourceEntity(204U);
    msg.setDestination(53033U);
    msg.setDestinationEntity(185U);
    msg.value = 0.654976201555;

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
    msg.setTimeStamp(0.479916068353);
    msg.setSource(6820U);
    msg.setSourceEntity(20U);
    msg.setDestination(16460U);
    msg.setDestinationEntity(65U);
    msg.value = 0.17082683356;

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
    msg.setTimeStamp(0.61426031189);
    msg.setSource(35621U);
    msg.setSourceEntity(15U);
    msg.setDestination(8385U);
    msg.setDestinationEntity(77U);
    msg.value = 0.0837576408098;

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
    msg.setTimeStamp(0.260622768227);
    msg.setSource(19493U);
    msg.setSourceEntity(162U);
    msg.setDestination(38782U);
    msg.setDestinationEntity(154U);
    msg.u = 0.998952844148;
    msg.v = 0.475063028703;
    msg.w = 0.282676853734;
    msg.p = 0.461425404715;
    msg.q = 0.286024907209;
    msg.r = 0.969899950023;
    msg.flags = 172U;

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
    msg.setTimeStamp(0.562827358308);
    msg.setSource(44759U);
    msg.setSourceEntity(235U);
    msg.setDestination(13831U);
    msg.setDestinationEntity(186U);
    msg.u = 0.791771014199;
    msg.v = 0.477597788958;
    msg.w = 0.877646540284;
    msg.p = 0.829229400104;
    msg.q = 0.55995836879;
    msg.r = 0.0651851383881;
    msg.flags = 8U;

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
    msg.setTimeStamp(0.165845353831);
    msg.setSource(29840U);
    msg.setSourceEntity(6U);
    msg.setDestination(112U);
    msg.setDestinationEntity(240U);
    msg.u = 0.588226554688;
    msg.v = 0.826295207668;
    msg.w = 0.0124919853747;
    msg.p = 0.954433017491;
    msg.q = 0.0566398431927;
    msg.r = 0.468831222504;
    msg.flags = 76U;

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
    msg.setTimeStamp(0.0177115550273);
    msg.setSource(45094U);
    msg.setSourceEntity(26U);
    msg.setDestination(64022U);
    msg.setDestinationEntity(186U);
    msg.start_lat = 0.619770622426;
    msg.start_lon = 0.854765904039;
    msg.start_z = 0.121868961555;
    msg.start_z_units = 106U;
    msg.end_lat = 0.159064257892;
    msg.end_lon = 0.379701411483;
    msg.end_z = 0.154661877645;
    msg.end_z_units = 39U;
    msg.lradius = 0.587618255603;
    msg.flags = 202U;
    msg.x = 0.276181253648;
    msg.y = 0.856405992299;
    msg.z = 0.81363346194;
    msg.vx = 0.251743387951;
    msg.vy = 0.715965804216;
    msg.vz = 0.162556516952;
    msg.course_error = 0.490949146584;
    msg.eta = 35908U;

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
    msg.setTimeStamp(0.146494210273);
    msg.setSource(63978U);
    msg.setSourceEntity(126U);
    msg.setDestination(3712U);
    msg.setDestinationEntity(245U);
    msg.start_lat = 0.0659364562906;
    msg.start_lon = 0.307131272539;
    msg.start_z = 0.898670182035;
    msg.start_z_units = 189U;
    msg.end_lat = 0.264620301361;
    msg.end_lon = 0.661384530664;
    msg.end_z = 0.625570418496;
    msg.end_z_units = 121U;
    msg.lradius = 0.753248477991;
    msg.flags = 135U;
    msg.x = 0.421026623686;
    msg.y = 0.281262820726;
    msg.z = 0.235753604214;
    msg.vx = 0.35449603242;
    msg.vy = 0.607099461015;
    msg.vz = 0.3159172827;
    msg.course_error = 0.311595635836;
    msg.eta = 15919U;

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
    msg.setTimeStamp(0.895527413075);
    msg.setSource(1831U);
    msg.setSourceEntity(122U);
    msg.setDestination(15504U);
    msg.setDestinationEntity(234U);
    msg.start_lat = 0.176791731001;
    msg.start_lon = 0.174307884572;
    msg.start_z = 0.348279247205;
    msg.start_z_units = 97U;
    msg.end_lat = 0.00987633312532;
    msg.end_lon = 0.927971438277;
    msg.end_z = 0.29684321527;
    msg.end_z_units = 201U;
    msg.lradius = 0.0366247463168;
    msg.flags = 67U;
    msg.x = 0.203189693373;
    msg.y = 0.967781406616;
    msg.z = 0.0843999721385;
    msg.vx = 0.726757171676;
    msg.vy = 0.731950721934;
    msg.vz = 0.225899477653;
    msg.course_error = 0.541662175436;
    msg.eta = 16571U;

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
    msg.setTimeStamp(0.986136044863);
    msg.setSource(28445U);
    msg.setSourceEntity(65U);
    msg.setDestination(1621U);
    msg.setDestinationEntity(231U);
    msg.k = 0.730604995604;
    msg.m = 0.692427730526;
    msg.n = 0.0308114617438;

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
    msg.setTimeStamp(0.535429830437);
    msg.setSource(51507U);
    msg.setSourceEntity(60U);
    msg.setDestination(25082U);
    msg.setDestinationEntity(182U);
    msg.k = 0.327661385461;
    msg.m = 0.402828979163;
    msg.n = 0.67850965444;

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
    msg.setTimeStamp(0.221921783863);
    msg.setSource(17919U);
    msg.setSourceEntity(122U);
    msg.setDestination(52193U);
    msg.setDestinationEntity(241U);
    msg.k = 0.715762538387;
    msg.m = 0.472663641684;
    msg.n = 0.164751760124;

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
    msg.setTimeStamp(0.384189873738);
    msg.setSource(3627U);
    msg.setSourceEntity(161U);
    msg.setDestination(26493U);
    msg.setDestinationEntity(182U);
    msg.p = 0.0104981989483;
    msg.i = 0.37602611171;
    msg.d = 0.801008474235;
    msg.a = 0.354377082735;

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
    msg.setTimeStamp(0.756330246458);
    msg.setSource(28669U);
    msg.setSourceEntity(174U);
    msg.setDestination(20150U);
    msg.setDestinationEntity(197U);
    msg.p = 0.396705216856;
    msg.i = 0.459785592961;
    msg.d = 0.147992416794;
    msg.a = 0.41091896609;

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
    msg.setTimeStamp(0.93638862231);
    msg.setSource(8779U);
    msg.setSourceEntity(243U);
    msg.setDestination(5394U);
    msg.setDestinationEntity(48U);
    msg.p = 0.893657582989;
    msg.i = 0.216757085541;
    msg.d = 0.487792083299;
    msg.a = 0.279120917765;

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
    msg.setTimeStamp(0.763457133038);
    msg.setSource(264U);
    msg.setSourceEntity(146U);
    msg.setDestination(51821U);
    msg.setDestinationEntity(100U);
    msg.op = 199U;

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
    msg.setTimeStamp(0.85124598932);
    msg.setSource(5738U);
    msg.setSourceEntity(206U);
    msg.setDestination(7285U);
    msg.setDestinationEntity(251U);
    msg.op = 79U;

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
    msg.setTimeStamp(0.722283486169);
    msg.setSource(7101U);
    msg.setSourceEntity(98U);
    msg.setDestination(46586U);
    msg.setDestinationEntity(230U);
    msg.op = 149U;

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
    msg.setTimeStamp(0.843885568886);
    msg.setSource(65154U);
    msg.setSourceEntity(29U);
    msg.setDestination(8073U);
    msg.setDestinationEntity(225U);
    msg.timeout = 18024U;
    msg.lat = 0.419584406315;
    msg.lon = 0.100163995032;
    msg.z = 0.683995258336;
    msg.z_units = 237U;
    msg.speed = 0.162550662832;
    msg.speed_units = 228U;
    msg.roll = 0.198948966705;
    msg.pitch = 0.499074939992;
    msg.yaw = 0.151424130593;
    msg.custom.assign("RRDHNCTTKDTBEORIHFCGUIBHMIFZQZGZPQWULMQSOHTRIXCZYWU");

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
    msg.setTimeStamp(0.191468324293);
    msg.setSource(29860U);
    msg.setSourceEntity(222U);
    msg.setDestination(27274U);
    msg.setDestinationEntity(31U);
    msg.timeout = 18593U;
    msg.lat = 0.492601986589;
    msg.lon = 0.164282462335;
    msg.z = 0.654050204139;
    msg.z_units = 189U;
    msg.speed = 0.40406953332;
    msg.speed_units = 213U;
    msg.roll = 0.307043527085;
    msg.pitch = 0.171801177218;
    msg.yaw = 0.587882595419;
    msg.custom.assign("JCCCGBTRFZDNMDUALADYHPPNSKQUEZGRBZSKVTSSOJAWJLKOHTLCBNKYAMOKPSXQRVALHRLRPDWZOJXBVDVXPRKZJXAXKIAQWMGVMHIMNNDQOPUFUFJUJUSJHQHTXDXOLECNRYRRHLDLFUMYPAWEITBFAKVABIIEEFPWLNVOGYIPCGNHZGBPFTOBYTNUCJZBETTFJEWWF");

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
    msg.setTimeStamp(0.302955774344);
    msg.setSource(61799U);
    msg.setSourceEntity(193U);
    msg.setDestination(3750U);
    msg.setDestinationEntity(221U);
    msg.timeout = 50951U;
    msg.lat = 0.562373018491;
    msg.lon = 0.946782405185;
    msg.z = 0.258061983335;
    msg.z_units = 89U;
    msg.speed = 0.363218161067;
    msg.speed_units = 124U;
    msg.roll = 0.34605696589;
    msg.pitch = 0.492846963393;
    msg.yaw = 0.143342718186;
    msg.custom.assign("RWUPWMTXPUZZIMGGBMKGYMSWNXNMJRJXJXNVUABZAHKECOOHFXLKYQSBOUQRHKTTIFOGXUACMQLJJTPKVDBEIRLNRKRRYUJIFCIQAEYGTTLDCFEPEBGFNDGKRZBMTWWNIXDOHAZAQWVASXHKBSZSHDQQSWICFNLDPGNPIPHVYKZJYVUGVCSCRYVJDYISFSYNHJOOPSHHAETZCLELDQWXARVCULOQVETFFOXIEB");

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
    msg.setTimeStamp(0.0950068261685);
    msg.setSource(27115U);
    msg.setSourceEntity(31U);
    msg.setDestination(9637U);
    msg.setDestinationEntity(68U);
    msg.timeout = 55021U;
    msg.lat = 0.399176704715;
    msg.lon = 0.584424819636;
    msg.z = 0.966055046417;
    msg.z_units = 203U;
    msg.speed = 0.825250349464;
    msg.speed_units = 127U;
    msg.duration = 732U;
    msg.radius = 0.895871583193;
    msg.flags = 54U;
    msg.custom.assign("RUEDWJUUBJCATXGYRDMGKPPYCJJTXBSIAMYEONFMUNQIFKCMJPKWOORWHJGYVHLCYGKDFTQOMMZTGACFRTIGONNNLZKXFZAZNSSAICESLHXSDIPXSFJDIGCWUNBAWOYEYHDWABYMANTALMVACPTOGOLVFKIWZDRDPNPLZELXQZESVSTTMKLFJHWPXGEXIBVQQNVZKHUHJWHKVRLRFUBLRQOBDHZUOQZYWQT");

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
    msg.setTimeStamp(0.65401642277);
    msg.setSource(21700U);
    msg.setSourceEntity(16U);
    msg.setDestination(11141U);
    msg.setDestinationEntity(199U);
    msg.timeout = 38177U;
    msg.lat = 0.877434262382;
    msg.lon = 0.937436609475;
    msg.z = 0.589527593622;
    msg.z_units = 86U;
    msg.speed = 0.150375690552;
    msg.speed_units = 12U;
    msg.duration = 64630U;
    msg.radius = 0.305845037935;
    msg.flags = 10U;
    msg.custom.assign("VZNYCHKXCHZWYUBZSYQWXEKITXEWPVJCDBPVPCYJLERAAWLHSFNGHKICQLGMNZVXKDXIPAMIDOHTUIOAIWPVWRTMKFEYBNTQOJOUSSFTMRYGTMXYRLVBGVPKLNHMQDPQPEAY");

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
    msg.setTimeStamp(0.61932852506);
    msg.setSource(12728U);
    msg.setSourceEntity(253U);
    msg.setDestination(42683U);
    msg.setDestinationEntity(70U);
    msg.timeout = 51240U;
    msg.lat = 0.755537075585;
    msg.lon = 0.759266779062;
    msg.z = 0.628517182512;
    msg.z_units = 173U;
    msg.speed = 0.859443298325;
    msg.speed_units = 196U;
    msg.duration = 43145U;
    msg.radius = 0.49858664754;
    msg.flags = 166U;
    msg.custom.assign("SAPCDNYMSUVTTNVVAMZWQDYDJTUYSQEQCAXTOSKRWRWPOLUJDYFQISUULJCPRPXMIRNGUVSBYXJWMGHUHQLAGKAEZFEFMKHTMSHRCCHEOTORESMDKYLRLFVEMWXXJBIXWWYFKCNBIVOHCQUEBLZJXJZBNTGBDNTQKTSRTLKDDPOKHBLZOFDAKZAYPABFNYVAGKZZBQDNPNJEUIZMIGIVWMCOXHJBXEXPYL");

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
    msg.setTimeStamp(0.71307903513);
    msg.setSource(61072U);
    msg.setSourceEntity(173U);
    msg.setDestination(65106U);
    msg.setDestinationEntity(98U);
    msg.custom.assign("OISJZFXBRHIQZNRXIIUEGVAERDRYBOGHXDBUZWOLDCRMHZTHYMEKFQVGBXSTJZTWEBALXQTQRFDAFQEPELACYBAFYWLJBRAVFAYGKXHRTNGAIJZQOBMPNLWTUMYWMDKBSCVSNCHGFHVOSPYWOYATTDKCNX");

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
    msg.setTimeStamp(0.549631377944);
    msg.setSource(55703U);
    msg.setSourceEntity(140U);
    msg.setDestination(20966U);
    msg.setDestinationEntity(56U);
    msg.custom.assign("OUUXEMQIRBKZGQWHOQYRZOAZLKAKMDBYZINTLXXSJMXEHIOISFKWMQVGDLJCCVHELRRYDFRNVQBWFEGSDFYLAQBDIJAGJYEROFNVYOPOTNBNMTHXJBGRNYZTCVELXSMFDTSGZWULEHNVPIJWSZKLEDTJGPGHCNUACADUKJUCICFUVOFRZIAXOSWUTKBLDLCESMQZXKPMPTYIAWFGHHKYRXIQVVK");

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
    msg.setTimeStamp(0.415140298439);
    msg.setSource(16691U);
    msg.setSourceEntity(241U);
    msg.setDestination(59054U);
    msg.setDestinationEntity(218U);
    msg.custom.assign("JOQGTZYIXUCFBHVFDITTGANNIDLIQVHKWBNBJTAAGICJJGNCOFOMKFZTEIVHCLPBZPMXLKHWEQATYRUOSJWVMEAVKQNKLFPYRYYZYQFZKSNWQDETCDJVQNLEHMDXAWEHSVGLFASSEGZCIMGHJVNHUSTLPDBXUORWPQCGDSZHOZBRJODAKXJWCFVSAW");

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
    msg.setTimeStamp(0.175461816147);
    msg.setSource(15183U);
    msg.setSourceEntity(175U);
    msg.setDestination(57434U);
    msg.setDestinationEntity(14U);
    msg.timeout = 18504U;
    msg.lat = 0.899771013597;
    msg.lon = 0.0561326073319;
    msg.z = 0.971262355108;
    msg.z_units = 158U;
    msg.duration = 57694U;
    msg.speed = 0.387965196731;
    msg.speed_units = 65U;
    msg.type = 130U;
    msg.radius = 0.631493487599;
    msg.length = 0.660590464041;
    msg.bearing = 0.942974197901;
    msg.direction = 12U;
    msg.custom.assign("ATMSNTBSUSOFQHAGMQBEEWBSPDAFSQMTNRBVHCPDRGSNUOZXYGPXANKGMVLFIGNVWGHIOCDEIWSMVLZVQCAVLHFRXWIOEOPUNRTGXWIPDBUZNJZTHAQJKWYRCYBREKXXVYUBLLRLTLCMGDJHTDQKIRTSEYDVUECMZXJDXXP");

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
    msg.setTimeStamp(0.51195391377);
    msg.setSource(45573U);
    msg.setSourceEntity(204U);
    msg.setDestination(48744U);
    msg.setDestinationEntity(142U);
    msg.timeout = 57102U;
    msg.lat = 0.855355940786;
    msg.lon = 0.694837107463;
    msg.z = 0.222120563116;
    msg.z_units = 240U;
    msg.duration = 50937U;
    msg.speed = 0.464252861528;
    msg.speed_units = 217U;
    msg.type = 235U;
    msg.radius = 0.382956486189;
    msg.length = 0.0886192796098;
    msg.bearing = 0.80743347268;
    msg.direction = 64U;
    msg.custom.assign("RKINAOLBXZHQEFTSVDBUINRSJFMOGALGHPXZCRZSDAYPWJZKBNWFXTVBDIPPXXSFTWMRMGMMJBUTYLPGMWZBVHKANNSTNVVOESLDJJSETHQEFTVSUNLYVRNBKUPWIQQP");

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
    msg.setTimeStamp(0.766336622206);
    msg.setSource(48099U);
    msg.setSourceEntity(163U);
    msg.setDestination(57323U);
    msg.setDestinationEntity(165U);
    msg.timeout = 34035U;
    msg.lat = 0.216912793674;
    msg.lon = 0.468555571941;
    msg.z = 0.717857327872;
    msg.z_units = 145U;
    msg.duration = 33807U;
    msg.speed = 0.0590172181774;
    msg.speed_units = 53U;
    msg.type = 248U;
    msg.radius = 0.214618487405;
    msg.length = 0.114483864635;
    msg.bearing = 0.748422637653;
    msg.direction = 41U;
    msg.custom.assign("QYWCPGRIFNIIVLCIKUMBEKVZTHELVMMUNURBNTHDMGHEGXOJZEPJLCZLMAIUYGNCZAVIEWCQYAWFKBTNJYZJHGWIVCPWVASQCCOURFGNWFTBYXSBXEJHSVEKQBBKRAPQEGQOVBWDZQSBYJMIKQNAHYUXUSXHSUTHMDQOSLIAXWOTRTJYZPAJLLKSMDNDOYRTSRCZXQETDZWROIDH");

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
    msg.setTimeStamp(0.603873938633);
    msg.setSource(58749U);
    msg.setSourceEntity(63U);
    msg.setDestination(58080U);
    msg.setDestinationEntity(72U);
    msg.duration = 61856U;
    msg.custom.assign("FOGGGNFCKZROCFEYTRWENHPMXMWAECPZCPYSVCPDYUPIVJSOHXBHISPTWNERZUYBILNTBIVJKVXNRGNYSEBYFTGZDAHGIMXTEIR");

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
    msg.setTimeStamp(0.888174395484);
    msg.setSource(44019U);
    msg.setSourceEntity(40U);
    msg.setDestination(62637U);
    msg.setDestinationEntity(247U);
    msg.duration = 43442U;
    msg.custom.assign("RFHJFZTGSOXVFBLMYTXRRHBGRPXGLCWYNLDAGHBLLCBWEQDJWYNVXEAQBPOKDFZYBHPWCMLYACCIDPZOEUEWGGAXZLRUAHTXSKUKRUJMIXDJTHSCTYOBIZFLHD");

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
    msg.setTimeStamp(0.619221593217);
    msg.setSource(58326U);
    msg.setSourceEntity(193U);
    msg.setDestination(34463U);
    msg.setDestinationEntity(175U);
    msg.duration = 46858U;
    msg.custom.assign("IIJDCGQXXWIWAZKSJLEPEACUMUNKCJKYSMDGBOLEWYPPLVDAARSAAQKTFRFRBNWOAMCHNZESYRGIVITPBXHVLKAEJXVFRSPTHUHBODKCRZLFKQFDTUMCMQYNVANEOVJRCKHPQWOLZTWTUHNYNLSZXZTRAMNHLM");

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
    msg.setTimeStamp(0.054692659197);
    msg.setSource(52447U);
    msg.setSourceEntity(239U);
    msg.setDestination(7141U);
    msg.setDestinationEntity(114U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.76517775681;
    msg.control.set(tmp_msg_0);
    msg.duration = 40897U;
    msg.custom.assign("JCRAVWACXFDFVOYBNUL");

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
    msg.setTimeStamp(0.739378158929);
    msg.setSource(3254U);
    msg.setSourceEntity(10U);
    msg.setDestination(40393U);
    msg.setDestinationEntity(28U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.714073667372;
    tmp_msg_0.z_units = 70U;
    msg.control.set(tmp_msg_0);
    msg.duration = 25968U;
    msg.custom.assign("NIRIELNQWBJYALFBUXDOUSADCOBSDNOMHTDVZSORSIRHHGANQZFMYYYIBTGQGIPFDHENJYWCXJCZCKIBMUBRPYNRZHRXHPCWKUIHOYMFDBJMZQQDQQTMWCTHLEJFTVBINUDWGHUMWEKZPLPASIXFRLMEAJPVPLCKIDGAJCJOQNVEZG");

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
    msg.setTimeStamp(0.405146804601);
    msg.setSource(5882U);
    msg.setSourceEntity(42U);
    msg.setDestination(21120U);
    msg.setDestinationEntity(13U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0967377815738;
    tmp_msg_0.speed_units = 59U;
    msg.control.set(tmp_msg_0);
    msg.duration = 43442U;
    msg.custom.assign("CIUWKQNYPYNBDDUEUCCXOOUJBNOKXCMUTHDTBLNMWZBDPGJCDVBLUJMXTHMTQPQVERPESAJQMHPGAZWNEAMKFXSTCZVWXQJTSGQWTUEHXMOJYZAIIWTKJCGQCOZXVNTSHJGLLBSYXJLYANPPESROHDFBFXIKAHWRDLRZVKLYFAKKIWVIFITCYOVLVZBESVGJUGDXUEBYKSMCFMNPDRRBEFLKOREHQO");

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
    msg.setTimeStamp(0.383335430827);
    msg.setSource(61382U);
    msg.setSourceEntity(170U);
    msg.setDestination(51177U);
    msg.setDestinationEntity(144U);
    msg.timeout = 23648U;
    msg.lat = 0.956185798499;
    msg.lon = 0.313726139596;
    msg.z = 0.189977477376;
    msg.z_units = 213U;
    msg.speed = 0.0893046639166;
    msg.speed_units = 167U;
    msg.bearing = 0.957248823628;
    msg.cross_angle = 0.253730688224;
    msg.width = 0.916763142757;
    msg.length = 0.312137440103;
    msg.hstep = 0.491896977143;
    msg.coff = 18U;
    msg.alternation = 43U;
    msg.flags = 131U;
    msg.custom.assign("NQMJAZZFPJDLRWKMQCLXHRDIEVVKQCQKUJZIPPJJUPIBWDTVGORNCEUATEIOLDLMMKAMLUBKPZSVFCFCRAAVHCHOVJYGCTHMRRNZRUWTATBVSDYQNXSOLQBFQYNUHMWDBFYJFYOEDKQEHXXXINUGWPPVYKXTSUNAJHCCWQMGZARBTDNPWGYDUGNREZVWHFABBUHJSPVONIOCBZLITOHSMGLIEFTBY");

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
    msg.setTimeStamp(0.601878991847);
    msg.setSource(60898U);
    msg.setSourceEntity(194U);
    msg.setDestination(65255U);
    msg.setDestinationEntity(66U);
    msg.timeout = 52898U;
    msg.lat = 0.446101960227;
    msg.lon = 0.17937187104;
    msg.z = 0.440049107722;
    msg.z_units = 167U;
    msg.speed = 0.494000071005;
    msg.speed_units = 154U;
    msg.bearing = 0.892250768319;
    msg.cross_angle = 0.223836396289;
    msg.width = 0.306284767874;
    msg.length = 0.967044858895;
    msg.hstep = 0.77407637792;
    msg.coff = 51U;
    msg.alternation = 227U;
    msg.flags = 49U;
    msg.custom.assign("RNCAIUKZSFFRCUQKGHUSQRTOXINEEPGFWMIXHQGZMHGOTQVMASINDPYGLIPSQAKWFWTLJCWOBLONTXLXKCJWHYLHVYLYSBUUNRASBTCEHIZGROFYEOWWAYBDGPBNKBTGJQBMSTDKALJOJQNUPZVAMMTTQEFRDMFTYCDRJAZZESGZBIQPCKPJLSIWZHFECRFBLDKRVPUUARPJVWAZHOVHVXGMDJMNYYUZNBEYVDEKWIXUXOJDOEFILNKM");

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
    msg.setTimeStamp(0.153341280221);
    msg.setSource(20134U);
    msg.setSourceEntity(55U);
    msg.setDestination(7325U);
    msg.setDestinationEntity(176U);
    msg.timeout = 43048U;
    msg.lat = 0.572820092763;
    msg.lon = 0.234819499992;
    msg.z = 0.881554666153;
    msg.z_units = 29U;
    msg.speed = 0.481093490175;
    msg.speed_units = 117U;
    msg.bearing = 0.535035060474;
    msg.cross_angle = 0.535840667523;
    msg.width = 0.105979739586;
    msg.length = 0.154106263948;
    msg.hstep = 0.515521843413;
    msg.coff = 71U;
    msg.alternation = 204U;
    msg.flags = 179U;
    msg.custom.assign("DILCKZZTSIAPXYCLHCPZJG");

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
    msg.setTimeStamp(0.254771531326);
    msg.setSource(36002U);
    msg.setSourceEntity(45U);
    msg.setDestination(25890U);
    msg.setDestinationEntity(121U);
    msg.timeout = 14075U;
    msg.lat = 0.264322191352;
    msg.lon = 0.682262341128;
    msg.z = 0.424172971883;
    msg.z_units = 47U;
    msg.speed = 0.477341185052;
    msg.speed_units = 129U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.952206547326;
    tmp_msg_0.y = 0.703688441969;
    tmp_msg_0.z = 0.269886784372;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BZEHODMWYMIEPSTTCUHDWFNRRIGBDWWKWRYKEYVOQJXPPFQJGUHOBDOVYBRNFMNPBSIYDVBEWRYSEPELLVAOH");

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
    msg.setTimeStamp(0.359431614265);
    msg.setSource(55133U);
    msg.setSourceEntity(178U);
    msg.setDestination(64632U);
    msg.setDestinationEntity(225U);
    msg.timeout = 62391U;
    msg.lat = 0.34391386647;
    msg.lon = 0.501891877919;
    msg.z = 0.691632460018;
    msg.z_units = 222U;
    msg.speed = 0.747222862642;
    msg.speed_units = 203U;
    msg.custom.assign("YMOJJZRAFRFTSKLWAUVTUEZRGMPNFJZCLBBBBGHIVLESTBAXFXMTOTUYWLLSOBCHQAPXUOVEUZPVQJQIGDOXSVWEWAKIDCGJWVWLKNZQCQXMNQIUTBSPCHRZIVEKFHZFVJBKYUNYKJKMZEXGYHFMMRMIXPQLQHKYWRDORAXLPCOZLUDRIFRGNHEIBVACHUAEGIJOTOOSYDYNESXWIQSKNDZBJWUPYPDHDWMXVLGQPAAFNYMT");

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
    msg.setTimeStamp(0.31535574871);
    msg.setSource(47470U);
    msg.setSourceEntity(57U);
    msg.setDestination(59358U);
    msg.setDestinationEntity(65U);
    msg.timeout = 59667U;
    msg.lat = 0.865254382669;
    msg.lon = 0.682585467437;
    msg.z = 0.813471115208;
    msg.z_units = 68U;
    msg.speed = 0.524112536795;
    msg.speed_units = 235U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.742001407271;
    tmp_msg_0.y = 0.828545903568;
    tmp_msg_0.z = 0.637841010103;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SPPLLXWDWKHNTCENFUKNHMLXYKZXUVSUBLNUKPEFMFFYHKTFYZNECQZQEYKUCZZWPMWHXJMARVLGDLIXOAIYPJAHNLBFAOPZSMSUGGADSGHRGSNUVAURTIXVCVDPCJYIZBJWVWXFYRCQVPLSVUMQKPQSRHGDMRDDWEMOTFQYYKBAISSM");

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
    msg.setTimeStamp(0.941536798098);
    msg.setSource(34330U);
    msg.setSourceEntity(24U);
    msg.setDestination(25480U);
    msg.setDestinationEntity(114U);
    msg.x = 0.706232138817;
    msg.y = 0.661465930752;
    msg.z = 0.609077477077;

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
    msg.setTimeStamp(0.825950333896);
    msg.setSource(21895U);
    msg.setSourceEntity(212U);
    msg.setDestination(41205U);
    msg.setDestinationEntity(81U);
    msg.x = 0.381692741842;
    msg.y = 0.579849161506;
    msg.z = 0.144846059709;

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
    msg.setTimeStamp(0.0462657029823);
    msg.setSource(17325U);
    msg.setSourceEntity(97U);
    msg.setDestination(15438U);
    msg.setDestinationEntity(112U);
    msg.x = 0.601416445032;
    msg.y = 0.0689446326648;
    msg.z = 0.0777550709519;

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
    msg.setTimeStamp(0.876726990035);
    msg.setSource(19246U);
    msg.setSourceEntity(49U);
    msg.setDestination(17311U);
    msg.setDestinationEntity(107U);
    msg.timeout = 6697U;
    msg.lat = 0.730615095727;
    msg.lon = 0.493223307626;
    msg.z = 0.230128644419;
    msg.z_units = 152U;
    msg.amplitude = 0.848892619345;
    msg.pitch = 0.49691615508;
    msg.speed = 0.329666679784;
    msg.speed_units = 246U;
    msg.custom.assign("XIMLTFSCHWOHCDZYSBNMAJUCFGSXHGSKWZOJJDFHFEYQLCYYBPKLOFEBBREMZRNKXRMCUWTGZHNODPIAMFIZEEYPATMTJZVQYNJUSDGKJABROBQFLSAPYAROSIKCGFDDWXRGSUQNKXPNTILBYUTJUWIXQLGMJVRPTPDAPNVDRVTOUYIHEBGCLXVJFFTDVNWCVCWCLEUWIGUHQSW");

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
    msg.setTimeStamp(0.105664681699);
    msg.setSource(59089U);
    msg.setSourceEntity(43U);
    msg.setDestination(30193U);
    msg.setDestinationEntity(42U);
    msg.timeout = 46594U;
    msg.lat = 0.0947921495246;
    msg.lon = 0.617300262806;
    msg.z = 0.783059544102;
    msg.z_units = 165U;
    msg.amplitude = 0.309494406947;
    msg.pitch = 0.702280835578;
    msg.speed = 0.316169497555;
    msg.speed_units = 153U;
    msg.custom.assign("RFOPGAQXEMVRVOCSJDYVRJZWCTELABHDAFYNQPHGBUEGEFIAYEXPQWUWSKAQBJTSQGIIYFCLEUHZUDDXUYAMJTGBFIDVLWHJARPABUBNTFHOYZRNTWSAKTXEJQJEOLSIMTWJPVLVLGXOCHYUKYCMNGMNQXVKZXNJUWSKPJDMFHCIPWLOCESADONCPQVGBKNLOR");

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
    msg.setTimeStamp(0.405461861677);
    msg.setSource(28158U);
    msg.setSourceEntity(87U);
    msg.setDestination(16003U);
    msg.setDestinationEntity(235U);
    msg.timeout = 55035U;
    msg.lat = 0.800324145465;
    msg.lon = 0.538791372295;
    msg.z = 0.66836267019;
    msg.z_units = 132U;
    msg.amplitude = 0.0500762393751;
    msg.pitch = 0.502169582876;
    msg.speed = 0.856093349455;
    msg.speed_units = 151U;
    msg.custom.assign("XPRKQNFTJQIIBNWMNGYJGSGYLBALJJVHURAXCWXAR");

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
    msg.setTimeStamp(0.23368897195);
    msg.setSource(47910U);
    msg.setSourceEntity(231U);
    msg.setDestination(10331U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.905896859833);
    msg.setSource(52037U);
    msg.setSourceEntity(252U);
    msg.setDestination(14956U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.52832215942);
    msg.setSource(62535U);
    msg.setSourceEntity(126U);
    msg.setDestination(51882U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.302700848487);
    msg.setSource(37901U);
    msg.setSourceEntity(68U);
    msg.setDestination(57031U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.958474461003;
    msg.lon = 0.745173984653;
    msg.z = 0.961170402162;
    msg.z_units = 180U;
    msg.radius = 0.648241611336;
    msg.duration = 46816U;
    msg.speed = 0.068485753811;
    msg.speed_units = 12U;
    msg.custom.assign("CNOPFEKZUCRPSMCBLBRAPSVILEBOYZTINHIXJBUPSLKOPXDNAWMSRTQYFCSYTUMQENUZDKBOZOMVKWFYITS");

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
    msg.setTimeStamp(0.634202473133);
    msg.setSource(17365U);
    msg.setSourceEntity(29U);
    msg.setDestination(3462U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.270074703706;
    msg.lon = 0.824274202433;
    msg.z = 0.820058389398;
    msg.z_units = 251U;
    msg.radius = 0.601143922623;
    msg.duration = 37639U;
    msg.speed = 0.725122347744;
    msg.speed_units = 90U;
    msg.custom.assign("JGVSWDHBHDQCIERZRDNPUXTCYUOFAFMHHZAPJQAZNLKDGFLCPTQOLZNZROFBBDVCNJXOXITQNPNNAEZXVUEIPWFUTZRDMIEENSPQJSJMTI");

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
    msg.setTimeStamp(0.96061840079);
    msg.setSource(10283U);
    msg.setSourceEntity(38U);
    msg.setDestination(13048U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.339060953059;
    msg.lon = 0.603663369576;
    msg.z = 0.58120227549;
    msg.z_units = 249U;
    msg.radius = 0.270803244353;
    msg.duration = 625U;
    msg.speed = 0.125401246325;
    msg.speed_units = 238U;
    msg.custom.assign("IYQHKYFBFJIMFCILALD");

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
    msg.setTimeStamp(0.356716500536);
    msg.setSource(45986U);
    msg.setSourceEntity(200U);
    msg.setDestination(38510U);
    msg.setDestinationEntity(186U);
    msg.timeout = 27959U;
    msg.flags = 65U;
    msg.lat = 0.147091886288;
    msg.lon = 0.69119741222;
    msg.start_z = 0.697830102802;
    msg.start_z_units = 102U;
    msg.end_z = 0.302549448497;
    msg.end_z_units = 243U;
    msg.radius = 0.0415567251205;
    msg.speed = 0.628076369675;
    msg.speed_units = 66U;
    msg.custom.assign("KITWTMGROYNAJTGEDBPJZHOWHVWRMRABBJHUQROQSTNSWGJPZODMJZBLXIYXOLXHWYEPAYMHVCTDNSERSGJSESFDSCAAFABMHIXCUQCDFLUNRRPHCGNWUTYNGSMMVBEXBKSIYSQTZCZGVEXHFVNKWYYWDNMKXNZFLZQYKRUTUAVGOCATQLCFJUZMPVDUIJPCAKZCQWQWHVDPELEOKLIGDTHQFOAKUIRFOPELXJLIUVIDXBBYQV");

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
    msg.setTimeStamp(0.984407931218);
    msg.setSource(60967U);
    msg.setSourceEntity(212U);
    msg.setDestination(44637U);
    msg.setDestinationEntity(78U);
    msg.timeout = 16565U;
    msg.flags = 29U;
    msg.lat = 0.781884048539;
    msg.lon = 0.958523916818;
    msg.start_z = 0.441456789171;
    msg.start_z_units = 70U;
    msg.end_z = 0.161886023359;
    msg.end_z_units = 144U;
    msg.radius = 0.265115070735;
    msg.speed = 0.621992309039;
    msg.speed_units = 74U;
    msg.custom.assign("BBVKDGCSXINTUGQNXJPMSZIVEOFWKDXLEJVKJATKHRNSRBYQHCPNACODMWRRAXRDWHSMOZSSPWPFBHROVQZCQCKBVMVBGHJZCDVMUKTDYQLESIMROHYJCAJNQYAFCHJVLTVBOFWZWGBXIQGYELTEQHMEJWRXDYZUFCAVNUMKUZZZBRHCEIWNIPYOGETFQLXKDLYKISGFABHEULGOOANGXFNWJEXIIPTMJFYOPUS");

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
    msg.setTimeStamp(0.590064229024);
    msg.setSource(34548U);
    msg.setSourceEntity(164U);
    msg.setDestination(30776U);
    msg.setDestinationEntity(97U);
    msg.timeout = 53240U;
    msg.flags = 140U;
    msg.lat = 0.404795495024;
    msg.lon = 0.797887682583;
    msg.start_z = 0.14411019062;
    msg.start_z_units = 19U;
    msg.end_z = 0.373397762622;
    msg.end_z_units = 124U;
    msg.radius = 0.541064854378;
    msg.speed = 0.368514613509;
    msg.speed_units = 204U;
    msg.custom.assign("SVGHKONSQBJZDWXSVYBOCYGEAEFGJLUANWMPPSVTWGZWBXIYDKCHUMTAKLTLFYZUNSTLPYURYFJYYQCYTVFWZLVHHPKMKXBNRCMUJSBJNAHXBIPTZNVOKZAMSNNGVOMUAYXEJEBDQWCTCHJHRPQFTIFVRLSCVUBFLGGSGELAPQGMDMILOIDHDWQUZICXVOOERDHRODEBZJRCRFINPCLDXA");

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
    msg.setTimeStamp(0.853566647391);
    msg.setSource(22126U);
    msg.setSourceEntity(26U);
    msg.setDestination(48837U);
    msg.setDestinationEntity(226U);
    msg.timeout = 47037U;
    msg.lat = 0.0391326488141;
    msg.lon = 0.0549266250274;
    msg.z = 0.022138111435;
    msg.z_units = 7U;
    msg.speed = 0.779004059494;
    msg.speed_units = 52U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.501523156388;
    tmp_msg_0.y = 0.703567112426;
    tmp_msg_0.z = 0.430532986481;
    tmp_msg_0.t = 0.473857966072;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LVOOXQFEBTKDTFBQMSDBRWHIURKNTCYCAQJLOHCGVUJINGYHCNZDKMUBVGIQZXMQVSKNEUFZSCTONMYOLHIWJDSUSLUXOQORZEANKIDFNEQXRVDHHDCJPZZACTASFVMHJSLYDLJYPRHDCPJHPWNENOGDOQGEJAMEBUXULBACLAWTQPYPPTYQRMGINGZFTFXPTGWKCIJVIJOWISFYFGREWUMVKYHURMGBSVAZBKSFYKKEZARWVAXMPTL");

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
    msg.setTimeStamp(0.683222197566);
    msg.setSource(26092U);
    msg.setSourceEntity(164U);
    msg.setDestination(8078U);
    msg.setDestinationEntity(151U);
    msg.timeout = 50366U;
    msg.lat = 0.742390328075;
    msg.lon = 0.215748470806;
    msg.z = 0.290504003317;
    msg.z_units = 150U;
    msg.speed = 0.444979002484;
    msg.speed_units = 79U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.870468717432;
    tmp_msg_0.y = 0.387447845;
    tmp_msg_0.z = 0.142584940442;
    tmp_msg_0.t = 0.547372304251;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MGWCPSAUTSAQWNSQBANYYJPZEAKQAXXNSEGJVMVLVFLWTQZXCYHMGDKNFXGIHGSOFURLOLXCRTVDFJOKIDUOFQZXZZFTPLXXQKFBWKMRMVBAIPCILKGBQDNNUYEPRRBSKBYPB");

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
    msg.setTimeStamp(0.814195345989);
    msg.setSource(39249U);
    msg.setSourceEntity(85U);
    msg.setDestination(49664U);
    msg.setDestinationEntity(197U);
    msg.timeout = 19166U;
    msg.lat = 0.0879159868546;
    msg.lon = 0.316653715563;
    msg.z = 0.11129753756;
    msg.z_units = 254U;
    msg.speed = 0.164367055228;
    msg.speed_units = 232U;
    msg.custom.assign("HADFQOGXZDDQKCZFNPLAIYQCDOMBXAIBINKEOVPIMQTUMYZICNFFYNVSPTXWATVARDXVALHMAJHUTCOOLLRODZDZECYIHGYAGIJRLVPRMJYFTNSV");

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
    msg.setTimeStamp(0.125345870522);
    msg.setSource(5196U);
    msg.setSourceEntity(123U);
    msg.setDestination(32917U);
    msg.setDestinationEntity(80U);
    msg.x = 0.248065553184;
    msg.y = 0.401625891935;
    msg.z = 0.196810182284;
    msg.t = 0.663413350213;

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
    msg.setTimeStamp(0.758490552331);
    msg.setSource(20837U);
    msg.setSourceEntity(128U);
    msg.setDestination(51376U);
    msg.setDestinationEntity(117U);
    msg.x = 0.7921519365;
    msg.y = 0.742175132456;
    msg.z = 0.762301903762;
    msg.t = 0.453645560803;

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
    msg.setTimeStamp(0.816793295784);
    msg.setSource(27579U);
    msg.setSourceEntity(240U);
    msg.setDestination(40585U);
    msg.setDestinationEntity(111U);
    msg.x = 0.0209579788833;
    msg.y = 0.714631365792;
    msg.z = 0.246012003104;
    msg.t = 0.394135676776;

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
    msg.setTimeStamp(0.887828235271);
    msg.setSource(7495U);
    msg.setSourceEntity(112U);
    msg.setDestination(54098U);
    msg.setDestinationEntity(62U);
    msg.timeout = 44968U;
    msg.name.assign("ODZUOUPXCBTMPGUEUWVGDUJZFHEFYYARGBWTLXYMYYOHAXJZPWPSRGWPIQOLSHTNZBOBAWQPJXNNLMNMZUXFTMYTQJRSSCYCRELXIGENRLNBYIKIBGRHIRKTCVFDQPHBQADREWLFOVMMDET");
    msg.custom.assign("LQMWZVFTQAKRTRHIXFUVZMDZMCTVQFQFGARBFWMGTNYDQDGVKHLPRPNEXBHNESAADFFOXBPUMESCKEZRDJKDOCPVOBQIISLHYTBCTRYZGQPWMYJNMQZDZXRXZSJSSNNACQKIIUGNGBJAGRUOUILVUKBVSPGLKSOEJIEVLWFUMSMNLAWIJAP");

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
    msg.setTimeStamp(0.877156769981);
    msg.setSource(34065U);
    msg.setSourceEntity(109U);
    msg.setDestination(62506U);
    msg.setDestinationEntity(43U);
    msg.timeout = 22610U;
    msg.name.assign("YEZNVQKMFNKQTYVUDQYBIUSNNBHQUOYMKHEPLIZTHWOLJOEWAWFTLNIQACBVGQVUFESDJPJFGLPPSEGHYRDYPIGOQCBISALIZVXYWRSDXOGBIXXDOVMJZLG");
    msg.custom.assign("MYLIQBSIWXWVZPYDLHXWQVRUSOMFNCGLKTKRMZPWSWIAQYEGYFWVWZMUMSCPXQPEOXHHBSIKZPGFRJPMOCRYXDTFZUUUIFMFEVTVIJTCURLE");

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
    msg.setTimeStamp(0.532561350854);
    msg.setSource(34690U);
    msg.setSourceEntity(180U);
    msg.setDestination(54675U);
    msg.setDestinationEntity(98U);
    msg.timeout = 20850U;
    msg.name.assign("JTQFHATBXAJZBLWIZDDMKNSDCQCRKELVOEHQYVZRWWTXVRZPLPVIBRVNYTCAXVTOSQXLCPSAFJKUNBYXMIYGROZLLIHXENGSXHVLTEOPZHBADGMJNPMONSHGBTRYIJWSGWNQOFCYKHKNSVUEARJMGXDUAJBQHLWFYUPMDIIGPJBIHIWED");
    msg.custom.assign("AJRIMSYDCLGLYGKVRFWSBATUMZYCYYIVQYXTTCOYPBZHJOADVQNZNQTKJZJBSCVWXOMNGNSPIURFRADXIQLEXERNFSZHKMEO");

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
    msg.setTimeStamp(0.581494476305);
    msg.setSource(56048U);
    msg.setSourceEntity(71U);
    msg.setDestination(17100U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.844861006065;
    msg.lon = 0.728912761523;
    msg.z = 0.812484440709;
    msg.z_units = 224U;
    msg.speed = 0.885673101562;
    msg.speed_units = 117U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51120U;
    tmp_msg_0.off_x = 0.915345275216;
    tmp_msg_0.off_y = 0.0346640727172;
    tmp_msg_0.off_z = 0.119317050336;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.529038778421;
    msg.custom.assign("UAXPAQZSSPOOQOSLAXYFJYKDABIXOMMCMILKYDVIJDWCOJNUBDMLQXJFSXHNGIPMGLZISXQFOJPYFEAQZLQVTBBNDRFLRHDRBNYFIFEWSDLIRTCRTJCYKJPHVWMEDPXTRPVYUTXWSJHZPPAHLGBGWEJGUBZHFAORELMIEMEVNOIRGETYWCSDRJQTKZVKNESBVWGRSOUHXKCCZGKUMUAVHVB");

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
    msg.setTimeStamp(0.952958068096);
    msg.setSource(26948U);
    msg.setSourceEntity(39U);
    msg.setDestination(53749U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.612355887949;
    msg.lon = 0.563079993722;
    msg.z = 0.720400742466;
    msg.z_units = 203U;
    msg.speed = 0.548075356137;
    msg.speed_units = 227U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.798878362448;
    tmp_msg_0.y = 0.930102378585;
    tmp_msg_0.z = 0.381111143984;
    tmp_msg_0.t = 0.918365258479;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.118702942029;
    msg.custom.assign("ZKYGYCPIYUVDCVTRBBXHQGEODPADXJMJGWWKCPZDQGOUFIGMQLHRHMBHJGAPCFMZEEHDNZSOFGPYFCCIAQZBURSSWQJRUTEPQDBCLRUALKRMKMPVRKW");

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
    msg.setTimeStamp(0.375636608036);
    msg.setSource(10085U);
    msg.setSourceEntity(219U);
    msg.setDestination(25157U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.625624675746;
    msg.lon = 0.150569232197;
    msg.z = 0.6491432437;
    msg.z_units = 122U;
    msg.speed = 0.860920305914;
    msg.speed_units = 252U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.621737112994;
    tmp_msg_0.y = 0.92270922556;
    tmp_msg_0.z = 0.151225784752;
    tmp_msg_0.t = 0.385729972669;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 39549U;
    tmp_msg_1.off_x = 0.00869851292271;
    tmp_msg_1.off_y = 0.232497548459;
    tmp_msg_1.off_z = 0.907312198136;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.659187467006;
    msg.custom.assign("CMVIAQPYFBVSQUZTEYYRDWZBMKGEPNJPODNDQHWMJEJEVSTNHUEUBKKEDIETOTIZMVNIAHYSTTYZCDJTKKOZTXFSPYMNYXRWLIZFAKCAW");

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
    msg.setTimeStamp(0.123645734392);
    msg.setSource(53342U);
    msg.setSourceEntity(80U);
    msg.setDestination(8377U);
    msg.setDestinationEntity(99U);
    msg.vid = 25333U;
    msg.off_x = 0.30476337512;
    msg.off_y = 0.788151445145;
    msg.off_z = 0.925761321324;

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
    msg.setTimeStamp(0.146573737415);
    msg.setSource(49654U);
    msg.setSourceEntity(131U);
    msg.setDestination(1790U);
    msg.setDestinationEntity(120U);
    msg.vid = 7642U;
    msg.off_x = 0.0639243173661;
    msg.off_y = 0.956406000556;
    msg.off_z = 0.279545397989;

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
    msg.setTimeStamp(0.929477706418);
    msg.setSource(23264U);
    msg.setSourceEntity(20U);
    msg.setDestination(14393U);
    msg.setDestinationEntity(97U);
    msg.vid = 50446U;
    msg.off_x = 0.606763942601;
    msg.off_y = 0.378929675789;
    msg.off_z = 0.657671279072;

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
    msg.setTimeStamp(0.548446101876);
    msg.setSource(23180U);
    msg.setSourceEntity(160U);
    msg.setDestination(20359U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.640685748323);
    msg.setSource(57415U);
    msg.setSourceEntity(132U);
    msg.setDestination(49034U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.625026158935);
    msg.setSource(1777U);
    msg.setSourceEntity(50U);
    msg.setDestination(952U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.590867816569);
    msg.setSource(545U);
    msg.setSourceEntity(179U);
    msg.setDestination(62985U);
    msg.setDestinationEntity(249U);
    msg.mid = 57355U;

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
    msg.setTimeStamp(0.590715726089);
    msg.setSource(61890U);
    msg.setSourceEntity(15U);
    msg.setDestination(51595U);
    msg.setDestinationEntity(128U);
    msg.mid = 3886U;

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
    msg.setTimeStamp(0.560861476318);
    msg.setSource(6278U);
    msg.setSourceEntity(108U);
    msg.setDestination(22935U);
    msg.setDestinationEntity(40U);
    msg.mid = 537U;

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
    msg.setTimeStamp(0.208964013074);
    msg.setSource(54498U);
    msg.setSourceEntity(206U);
    msg.setDestination(45845U);
    msg.setDestinationEntity(230U);
    msg.state = 137U;
    msg.eta = 35462U;
    msg.info.assign("CDRKUOWVVQREEIZIXHXNDUHCISBSLJKTRNJJFCBEYUYHOIIMZLYWFIKFWXWLDVLHZZJTWOKSXQMFVDTMJPSYW");

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
    msg.setTimeStamp(0.0485731008519);
    msg.setSource(34493U);
    msg.setSourceEntity(106U);
    msg.setDestination(4255U);
    msg.setDestinationEntity(25U);
    msg.state = 121U;
    msg.eta = 22736U;
    msg.info.assign("JOGIDYRYCKRDFBYOFKXTEGXNEXTLYQRKQDWXQYQQCGDZFAOCEGCFAIMBITNNVPZKLNWRKUWJPKOVWNVHRBZXRMICMVDZSPINZZDPUJSJUTMOSWHVBTAFUUYZVWKEMFEWSUHLSBNDHXQHEGSRQVDFBULPHBOACTVJTQJUZJGJ");

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
    msg.setTimeStamp(0.507711145473);
    msg.setSource(17787U);
    msg.setSourceEntity(56U);
    msg.setDestination(12946U);
    msg.setDestinationEntity(241U);
    msg.state = 238U;
    msg.eta = 47643U;
    msg.info.assign("DGOZLFBIMZLITAEYRGWODXTSRQDEWYLOUCAZEKHOHCUKRNLVXZEIJULRAHRHNDTXFKCWVEUBPYJFWVEDNXUKOMRRXJOYYOLBMSZVLXXUNMJCWTKKOMAXRBBRFXJNAPMCEBGGNQFBSQPJTYICTHITJZIYHMAVCABFVIWGSMVOTHPJVPZKQMBEIDYSGYFSCRUPDQFHLQASDKEMDQ");

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
    msg.setTimeStamp(0.592037981603);
    msg.setSource(27029U);
    msg.setSourceEntity(80U);
    msg.setDestination(4121U);
    msg.setDestinationEntity(146U);
    msg.system = 32531U;
    msg.duration = 51960U;
    msg.speed = 0.647870925198;
    msg.speed_units = 228U;
    msg.x = 0.0507850992248;
    msg.y = 0.651962572183;
    msg.z = 0.148889329189;
    msg.z_units = 221U;

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
    msg.setTimeStamp(0.295137088942);
    msg.setSource(31142U);
    msg.setSourceEntity(242U);
    msg.setDestination(55905U);
    msg.setDestinationEntity(31U);
    msg.system = 62872U;
    msg.duration = 46905U;
    msg.speed = 0.769974418946;
    msg.speed_units = 117U;
    msg.x = 0.00257389456053;
    msg.y = 0.214573483202;
    msg.z = 0.160121592501;
    msg.z_units = 111U;

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
    msg.setTimeStamp(0.689248610711);
    msg.setSource(61254U);
    msg.setSourceEntity(186U);
    msg.setDestination(10507U);
    msg.setDestinationEntity(223U);
    msg.system = 5850U;
    msg.duration = 56239U;
    msg.speed = 0.526094161338;
    msg.speed_units = 188U;
    msg.x = 0.161775659456;
    msg.y = 0.919135896387;
    msg.z = 0.521379249879;
    msg.z_units = 192U;

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
    msg.setTimeStamp(0.928252343418);
    msg.setSource(52536U);
    msg.setSourceEntity(246U);
    msg.setDestination(19717U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.414146361371;
    msg.lon = 0.776414896498;
    msg.speed = 0.435109582397;
    msg.speed_units = 129U;
    msg.duration = 447U;
    msg.sys_a = 48612U;
    msg.sys_b = 57218U;
    msg.move_threshold = 0.16691207062;

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
    msg.setTimeStamp(0.140401088335);
    msg.setSource(22960U);
    msg.setSourceEntity(100U);
    msg.setDestination(41823U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.486672735142;
    msg.lon = 0.713200285667;
    msg.speed = 0.249854123409;
    msg.speed_units = 40U;
    msg.duration = 56700U;
    msg.sys_a = 63710U;
    msg.sys_b = 53725U;
    msg.move_threshold = 0.843678273833;

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
    msg.setTimeStamp(0.746562670668);
    msg.setSource(51952U);
    msg.setSourceEntity(247U);
    msg.setDestination(36280U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.129275028637;
    msg.lon = 0.0587250636419;
    msg.speed = 0.300534812974;
    msg.speed_units = 177U;
    msg.duration = 50548U;
    msg.sys_a = 62737U;
    msg.sys_b = 40218U;
    msg.move_threshold = 0.910712070706;

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
    msg.setTimeStamp(0.949608568342);
    msg.setSource(44300U);
    msg.setSourceEntity(182U);
    msg.setDestination(21437U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.439055144284;
    msg.lon = 0.689380022703;
    msg.z = 0.957810083724;
    msg.z_units = 204U;
    msg.speed = 0.158785248928;
    msg.speed_units = 16U;
    msg.custom.assign("ICOKNEMXQFVQKLBFLMJZFGDHHTFPDNCR");

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
    msg.setTimeStamp(0.0928959241564);
    msg.setSource(62355U);
    msg.setSourceEntity(173U);
    msg.setDestination(44051U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.520695592662;
    msg.lon = 0.624652031376;
    msg.z = 0.687894797363;
    msg.z_units = 12U;
    msg.speed = 0.111460861158;
    msg.speed_units = 157U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.704302579072;
    tmp_msg_0.lon = 0.546801658067;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VXCBPHYROKWAAYHUNYQOTPPGGHUUJDBMVMZCLDUDTWVWZLMGZTTOYMZSX");

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
    msg.setTimeStamp(0.498508778319);
    msg.setSource(46656U);
    msg.setSourceEntity(168U);
    msg.setDestination(51695U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.864555064364;
    msg.lon = 0.111434034451;
    msg.z = 0.369271186871;
    msg.z_units = 77U;
    msg.speed = 0.777124312531;
    msg.speed_units = 36U;
    msg.custom.assign("PJDCXHIWJVWAUVYWOAKAEMVRWIPSDDCJNMEHEQICDIZJSSQEYBLMXHGYFSRNKWDHTXTGDTCXXGBZTUGIMRNKOQMQPNNCMJNLNOKAVCXXGGEJBKNHWIERQMPRIUPPBVQFKDFSOWCFDRYYZCZJKZATSTLFRGLYJBQBWVZIYTVGYGSXZCVBWATVTLXUFPBHSZEFQSOWUBHHRGNXMYEO");

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
    msg.setTimeStamp(0.780813849696);
    msg.setSource(24871U);
    msg.setSourceEntity(8U);
    msg.setDestination(37439U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.172770277239;
    msg.lon = 0.689914795534;

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
    msg.setTimeStamp(0.390586890082);
    msg.setSource(4711U);
    msg.setSourceEntity(67U);
    msg.setDestination(611U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.949724701423;
    msg.lon = 0.87497955076;

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
    msg.setTimeStamp(0.299267526652);
    msg.setSource(25251U);
    msg.setSourceEntity(52U);
    msg.setDestination(58712U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.859627200036;
    msg.lon = 0.651686739372;

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
    msg.setTimeStamp(0.0550865574807);
    msg.setSource(38949U);
    msg.setSourceEntity(167U);
    msg.setDestination(45839U);
    msg.setDestinationEntity(36U);
    msg.timeout = 37723U;
    msg.lat = 0.532691851553;
    msg.lon = 0.214982766421;
    msg.z = 0.451226752626;
    msg.z_units = 115U;
    msg.pitch = 0.836073462966;
    msg.amplitude = 0.798468915603;
    msg.duration = 55289U;
    msg.speed = 0.49279973286;
    msg.speed_units = 104U;
    msg.radius = 0.37585473123;
    msg.direction = 238U;
    msg.custom.assign("FXEZBMWUMZOSKSPURARHJQBMAEOYGXKFZJFZUNGPAZQYUQMJNDJTPNSCJWTFGBXYOILTIULVVIOODWDKFKMGPMZLHRDNPYLXCFZGJNNFVXOGKQOEIYTYTLRZCVRKYFRQDTSUBSJGMKTCAMPJPKRDXVTCXQVSUPAGBUHWALWVHITHFWDPOUNSBLQAINALOYCWKVPHBNHUEYFCEIDHDKBCMRXODRIVXBIJJGQZXHTWEEZSSGQHSRALEQCYAWVLWM");

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
    msg.setTimeStamp(0.368571137539);
    msg.setSource(36692U);
    msg.setSourceEntity(219U);
    msg.setDestination(64272U);
    msg.setDestinationEntity(140U);
    msg.timeout = 18629U;
    msg.lat = 0.376085742984;
    msg.lon = 0.137112307877;
    msg.z = 0.693250334433;
    msg.z_units = 33U;
    msg.pitch = 0.903376958637;
    msg.amplitude = 0.173518967781;
    msg.duration = 26728U;
    msg.speed = 0.990970514941;
    msg.speed_units = 235U;
    msg.radius = 0.169439747167;
    msg.direction = 96U;
    msg.custom.assign("TWHPLEESVJELGXAJDDNIQGWULVTFLPJOPCKZUHXGRGMBAVQAWMMZBSKSIDLSQFXZEXWESEYJKBUVRNPHFKNDTWMBJIKMMERHSYTGVRQUEGROTZZWQORSFUOTCYNVMIADSVAQKRJTKAUBLHUADOYQYZGYLYUHXXJBOLZMPEXWCGDNPHXIEYKHNNHKNPAPQQTFTUCIDCSWDFLUKRCBIGANPVXOMLTCFCOZRXJMPOF");

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
    msg.setTimeStamp(0.575727721231);
    msg.setSource(38275U);
    msg.setSourceEntity(199U);
    msg.setDestination(32094U);
    msg.setDestinationEntity(47U);
    msg.timeout = 48592U;
    msg.lat = 0.457259771887;
    msg.lon = 0.820016039307;
    msg.z = 0.547245621397;
    msg.z_units = 51U;
    msg.pitch = 0.934141177363;
    msg.amplitude = 0.889336721427;
    msg.duration = 2459U;
    msg.speed = 0.965870263483;
    msg.speed_units = 142U;
    msg.radius = 0.875416809048;
    msg.direction = 128U;
    msg.custom.assign("CLKPYSSZLHINMOMAFCSVTLKESYGAPFUTOQEDJNNWPCRNDHQGAYZVWHGMJUXTWAUNIAFULSPYOFKJLUNCEOVTPFXMREVKHNYEJMYGXHXELQPKSEIYVVDUUFGBAIMBVZYIWEKRZGNORNBTOGZBWETDSQWHPMZCR");

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
    msg.setTimeStamp(0.217104689048);
    msg.setSource(792U);
    msg.setSourceEntity(177U);
    msg.setDestination(396U);
    msg.setDestinationEntity(215U);
    msg.control_src = 25425U;
    msg.control_ent = 29U;
    msg.timeout = 0.275153117655;
    msg.loiter_radius = 0.423020464236;
    msg.altitude_interval = 0.458974819013;

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
    msg.setTimeStamp(0.555575650338);
    msg.setSource(64236U);
    msg.setSourceEntity(161U);
    msg.setDestination(55850U);
    msg.setDestinationEntity(240U);
    msg.control_src = 11184U;
    msg.control_ent = 147U;
    msg.timeout = 0.245475006536;
    msg.loiter_radius = 0.279359775287;
    msg.altitude_interval = 0.666276467132;

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
    msg.setTimeStamp(0.909607339106);
    msg.setSource(16969U);
    msg.setSourceEntity(212U);
    msg.setDestination(55333U);
    msg.setDestinationEntity(217U);
    msg.control_src = 40303U;
    msg.control_ent = 211U;
    msg.timeout = 0.866219450172;
    msg.loiter_radius = 0.466485899811;
    msg.altitude_interval = 0.199327301725;

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
    msg.setTimeStamp(0.588345773892);
    msg.setSource(47106U);
    msg.setSourceEntity(204U);
    msg.setDestination(22084U);
    msg.setDestinationEntity(160U);
    msg.flags = 57U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.390705328579;
    tmp_msg_0.speed_units = 230U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.45066985281;
    tmp_msg_1.z_units = 45U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.734815452719;
    msg.lon = 0.536557559123;

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
    msg.setTimeStamp(0.104801882826);
    msg.setSource(14972U);
    msg.setSourceEntity(210U);
    msg.setDestination(13868U);
    msg.setDestinationEntity(126U);
    msg.flags = 129U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.318814709968;
    tmp_msg_0.speed_units = 34U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.254837579938;
    tmp_msg_1.z_units = 152U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0717503319347;
    msg.lon = 0.712422327877;

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
    msg.setTimeStamp(0.818681753051);
    msg.setSource(42602U);
    msg.setSourceEntity(66U);
    msg.setDestination(25829U);
    msg.setDestinationEntity(107U);
    msg.flags = 109U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.637195196684;
    tmp_msg_0.speed_units = 109U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.554721994165;
    tmp_msg_1.z_units = 215U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.719695502931;
    msg.lon = 0.110430338662;

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
    msg.setTimeStamp(0.781524765887);
    msg.setSource(51005U);
    msg.setSourceEntity(135U);
    msg.setDestination(29918U);
    msg.setDestinationEntity(187U);
    msg.control_src = 64706U;
    msg.control_ent = 210U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 111U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.549179644862;
    tmp_tmp_msg_0_0.speed_units = 94U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.351061019359;
    tmp_tmp_msg_0_1.z_units = 27U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.335961549382;
    tmp_msg_0.lon = 0.597552245657;
    msg.reference.set(tmp_msg_0);
    msg.state = 54U;
    msg.proximity = 183U;

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
    msg.setTimeStamp(0.977798015418);
    msg.setSource(10496U);
    msg.setSourceEntity(34U);
    msg.setDestination(62105U);
    msg.setDestinationEntity(34U);
    msg.control_src = 58827U;
    msg.control_ent = 130U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 51U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0381845114465;
    tmp_tmp_msg_0_0.speed_units = 230U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.968330473904;
    tmp_tmp_msg_0_1.z_units = 16U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.217893660801;
    tmp_msg_0.lon = 0.12263765817;
    msg.reference.set(tmp_msg_0);
    msg.state = 55U;
    msg.proximity = 0U;

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
    msg.setTimeStamp(0.0664660561645);
    msg.setSource(38862U);
    msg.setSourceEntity(73U);
    msg.setDestination(48484U);
    msg.setDestinationEntity(174U);
    msg.control_src = 4343U;
    msg.control_ent = 120U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 219U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.882312696535;
    tmp_tmp_msg_0_0.speed_units = 33U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.595974483572;
    tmp_tmp_msg_0_1.z_units = 35U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.688218357139;
    tmp_msg_0.lon = 0.113456537011;
    msg.reference.set(tmp_msg_0);
    msg.state = 194U;
    msg.proximity = 21U;

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
    msg.setTimeStamp(0.201923099569);
    msg.setSource(7144U);
    msg.setSourceEntity(157U);
    msg.setDestination(46992U);
    msg.setDestinationEntity(133U);
    msg.op_mode = 221U;
    msg.error_count = 217U;
    msg.error_ents.assign("XOGQCTQZUKKSXOTVVSHTXIJMHSTQSLJUMAYPXCWBRSDFKSGEVJEINQLHWDZUWFPEJFTHPXNLQHMVVCHMJLBKIBXBKZUPZGUMYBERBTCNABPEBGNWRLJUAYJIZDOGGQVDGCWUZPYUWZLEOVNRARVTAFOMZMOGWEYRQOZLAFCBMRLQDVPJINHFNBMDKRIQJXUSLFHYCUKNJTIKZADSAKTKNPWEPDWCOEXYIRYYEDAXFIMQL");
    msg.maneuver_type = 61936U;
    msg.maneuver_stime = 0.0671432411155;
    msg.maneuver_eta = 33195U;
    msg.control_loops = 1623092351U;
    msg.flags = 12U;
    msg.last_error.assign("ZOSPUNPJHBMYALIXXOALKJALWZQLERKKSPHMLFORTSEWQHLNUHGOJKTXGXSKVKCMCKWZBOWCQJMHONWRJEFSYGWYZBPFQSVCEIPXOJHXZTXEDVHUMLUGXBZDWZTDFJKEKIGAYPKZOEGXVQBNAPLPSFEGRDEDQZAQFRTYARBSRIGUMNFMRLTBPDTUDSRPWUIMCJJZWVDMQHOSIGYILDIVEFYCJCYIBVQBAXCNNNT");
    msg.last_error_time = 0.13422573121;

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
    msg.setTimeStamp(0.343867015038);
    msg.setSource(40647U);
    msg.setSourceEntity(208U);
    msg.setDestination(53385U);
    msg.setDestinationEntity(21U);
    msg.op_mode = 157U;
    msg.error_count = 126U;
    msg.error_ents.assign("PBUBTHSWOHKJZRJGPJEUAELFXDTMLUITIENCQXRJWNWBPCRPURZKLIMOLETHZDOVSDGARS");
    msg.maneuver_type = 3492U;
    msg.maneuver_stime = 0.0599044444791;
    msg.maneuver_eta = 49521U;
    msg.control_loops = 423757105U;
    msg.flags = 135U;
    msg.last_error.assign("BVXOVWJIWNVBRVAXVHCSLUOLQZZSUHCJAYBSPKNPAKQCWTYIYDKNQMTAUPPGIZDYXDXNMDROVLSMQQHLCBXFWSEJIPGIIZQSTGSZMNGTWZBQCTOJRTKWEFMOPBGHPWFOVLKMDDYQLEXWTFZSTOGIVGZGZBLJDARIINNUUJCFHLUUHECKWFKLYKEAGSNEYRYMFOVUNHRHYBPEVAORZUBATIDFXEELCCRJSMQJHERUDBDTGCFWANPAJO");
    msg.last_error_time = 0.726144185705;

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
    msg.setTimeStamp(0.0812028074033);
    msg.setSource(44512U);
    msg.setSourceEntity(66U);
    msg.setDestination(49828U);
    msg.setDestinationEntity(169U);
    msg.op_mode = 96U;
    msg.error_count = 161U;
    msg.error_ents.assign("XAKNTVUGYUAKJFFWYJBXCIWZMVVXOIPFZPVIXSWLORJEENSJYNXRUSEGBZTCZYPSEKDWZLFTBSKBRTLWINLHXBWLXAHDOSYOUCHUCDRYWDJQZSDZIVHPPIDONDEPCZLSRJAHVECEGEMMAHTJBYRDHAKUTOEAIBNSGPOORDCFNNGKXVOGJVMYMJNYTCHWLMQWZQIPFQSHOBQQFHUGGBRAKZMWMDXCFJUTXQKLEURPAYUGKCILVLBGQPMFA");
    msg.maneuver_type = 10854U;
    msg.maneuver_stime = 0.939469142222;
    msg.maneuver_eta = 10942U;
    msg.control_loops = 1716288156U;
    msg.flags = 60U;
    msg.last_error.assign("TQKYOJILXMISXJFYLFZXFWQ");
    msg.last_error_time = 0.831612204481;

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
    msg.setTimeStamp(0.670160218608);
    msg.setSource(8274U);
    msg.setSourceEntity(122U);
    msg.setDestination(3287U);
    msg.setDestinationEntity(197U);
    msg.type = 43U;
    msg.request_id = 34961U;
    msg.command = 147U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 64558U;
    tmp_msg_0.flags = 230U;
    tmp_msg_0.lat = 0.748563430005;
    tmp_msg_0.lon = 0.952071438615;
    tmp_msg_0.start_z = 0.362267192368;
    tmp_msg_0.start_z_units = 67U;
    tmp_msg_0.end_z = 0.0164917783605;
    tmp_msg_0.end_z_units = 125U;
    tmp_msg_0.radius = 0.850518073333;
    tmp_msg_0.speed = 0.0439658855956;
    tmp_msg_0.speed_units = 192U;
    tmp_msg_0.custom.assign("WWKLECJNFVOUUIKSOSSMRTRCOLZWVLJRFXCSKRCIQARHEQBSKXOMOKRWOOUDIRNHREGQDNTLANYFLKADRGC");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("ZPKNBXGAOTOKOVXRLSZYOEDHSXOVKFZYXPCRIIEUTPJSMALMPZGLKRBFHMRWGCQNTNJDHXMTYOVBCTSKEVSWHVYIYEHJIIMUQMRMPEYICPEQTFIZEQRFYWGDQAKFNVGTANRQLPWLWJSEWWLXAVTRKRLSMUGDBJNDAFFNTGVNNCDOUBVQCKRFDOIMBPSEFLHFMOKUQZGLJYNX");

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
    msg.setTimeStamp(0.306759816201);
    msg.setSource(3603U);
    msg.setSourceEntity(22U);
    msg.setDestination(22259U);
    msg.setDestinationEntity(69U);
    msg.type = 235U;
    msg.request_id = 17419U;
    msg.command = 205U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 26034U;
    tmp_msg_0.custom.assign("RZNGENFTMZYUIEHZKIBQHUXIVKDHKYABYPBKNGQPMYDODUDRUJEONFFMWGBCPWXVCKRMARBRPTAHGBENGHBAQAWTDDCXISBXQRD");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("TAQEBPPIJBATSCAICQZUCKQWZFZLMMUOJHVCAPYVVBTTSLSHGWUKWVHLFSBVOILRPXRQCDHOVCNWDZRUOFISYNIXO");

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
    msg.setTimeStamp(0.665947323265);
    msg.setSource(54303U);
    msg.setSourceEntity(81U);
    msg.setDestination(21398U);
    msg.setDestinationEntity(160U);
    msg.type = 20U;
    msg.request_id = 58766U;
    msg.command = 24U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 3539U;
    tmp_msg_0.name.assign("HOJEGRCTRIVKAYHBSJQXOPCKXAUCMFBJLTCFKGWZZASUSHDGVIXTZLSVWSGOPDAOQNWKKMMCZIXSFYJRFFMRPEBEJGYZPLBYCTUUBIQEEHHRNMNHGQZNFRYFAFNDCQVOSLQYEKWCDFTBVKTYNJLHLLRUQTIVXNYIVASEAWSKDNX");
    tmp_msg_0.custom.assign("NYTLCZPKCEGIGUDVLURZJXGSDBFWQJNDUHBOWNCEHYNORGWGBQBMFCYYRVSBDCDLPMSDQJYTIWREPRCBPHKTJHXEMKICKMJWALHPKAORVINOTSOSKPNAVWQIETUFPWKAOXTQFTVNQISXWJGMDOOXPJIQXNZUWGZJLCQBXTBUQSZMSCKPHQSAMXWAOYIKXYFYXZLLHDEHHTVEYMRCMFLIRURVGMZJVEFZAIGRUYVTLNDDJHGZLBUVSFEAEAA");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("YOIJCJXNRVWAGZQEMFDUNCKDSQRWLQSNNLMJDNNQAKSUCRFKLTILGTPDDLAAIQMAHVTNUGVRIUYTFKGSLOPKSZCEGJOFMDEHHLQOAAFEYJXBXGSZMWPGKTQZHZMKSQHSRVIIDQMNBWICUGXRXJUWXWPTBRNHEOIYZOVPUEBWXAHXFMGVKYIOEZBKUVTWRPQJRICOESDCTLVBOSOFYYCBXPJPDKAJZCCBFLTYTJHXLBBUFMAHZ");

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
    msg.setTimeStamp(0.828266963348);
    msg.setSource(46217U);
    msg.setSourceEntity(35U);
    msg.setDestination(35622U);
    msg.setDestinationEntity(77U);
    msg.command = 235U;
    msg.entities.assign("RMVBMXUNBSOHMLNXDUWFRP");

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
    msg.setTimeStamp(0.262644118519);
    msg.setSource(62978U);
    msg.setSourceEntity(27U);
    msg.setDestination(36280U);
    msg.setDestinationEntity(191U);
    msg.command = 35U;
    msg.entities.assign("BWSUQCDMZWAVYIRYYHUQCFEBYWDVQHTKIJPVLM");

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
    msg.setTimeStamp(0.737236870587);
    msg.setSource(36969U);
    msg.setSourceEntity(3U);
    msg.setDestination(39453U);
    msg.setDestinationEntity(4U);
    msg.command = 40U;
    msg.entities.assign("SSNBYYGXUOQMVUVIETQOLLSJJCBHQVUOMEAZMXUGJLYSIORKOVTEMYICSEJZPTXRISVKAWDGMWBPMJNZGYLXYWNUVXVOBLRKMYDDSFLSZCPAHZMTECYRHRJXPPDWHZIJBHOFMNPSNDJFQWAXQK");

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
    msg.setTimeStamp(0.728085060638);
    msg.setSource(43315U);
    msg.setSourceEntity(160U);
    msg.setDestination(55250U);
    msg.setDestinationEntity(118U);
    msg.mcount = 180U;
    msg.mnames.assign("POPGKUPZBKYRIMFFELXJPWDTXBNSJCDMYJMKCVUMRMCFNHADUADVIERGBNNMIMWXDJBUZXABJPVGWYLLGEOICLXQCPQOKEQXHHFVBKVWOICSVFBPYRQSGMEMHZVVRKIAKWAUGEUQEXSHCYRSTSNORLWNHTWEREVHTFJZITHFGTYNOCUNLLANHJUKAWKPHPSVPTBGZBRTLFZICDTQJDXMSY");
    msg.ecount = 72U;
    msg.enames.assign("RGKNINKEWMQCZYDGQVCPVULJKVNWXSUBZLTWJEAHDQDBEENKLAZGUPAQYXBIYXNMOSHMLJTPNREFDASNYUMUKKLIMCNMYUTKMRLGOTFBXRTPYJSQOFQDCSIOJVXQKFFLAPWBHBCBVCEYRDPXAZRXDTVOTPSPQVCFCWIFJUIXFLHPOWDG");
    msg.ccount = 163U;
    msg.cnames.assign("TEUKDBGGDRIVEVSJMIMIKGBQVYFMCOOWWEQRYVHPNZSAEBOLVGFXZDZUXJNJBRZMHTXCKLNISHBXCZYKWFP");
    msg.last_error.assign("PQNKICPGVCHJRUCXWEGABMVNCFICPHGLKTFDQJKSWLKWCZAQRLIUUMGTZWMFENZNBXLRHRDSJSQWNETXBNQLODMJBXGEMNOHXYXTVUTDEGWCKISPUWYOJXHQRNMW");
    msg.last_error_time = 0.225384539464;

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
    msg.setTimeStamp(0.810445157433);
    msg.setSource(32676U);
    msg.setSourceEntity(241U);
    msg.setDestination(57506U);
    msg.setDestinationEntity(15U);
    msg.mcount = 88U;
    msg.mnames.assign("KEWLOIJBAZEYIILFIGTGCAPSAKGJTPXRRBMIVLXWTFDHUBKLYYZMRXSRJXKVOJUPEUQCVQHGSQCPVJWWZOXV");
    msg.ecount = 95U;
    msg.enames.assign("ALXPFXFUFCBMXZOSVGMIMNUQTORRSWMEOOIYABBTNDQKKOOGMONILJFLPABFXKGDHRZJLBYEWYCJNAHQAOCLUFZPVJYFZPLGYWDGGDEBNYYFGWRICQIVEIETHCTSRHGRACPWPKSPUDXUGZUDQOTHNQZMFVVUERTVHADTYKMQJKSHY");
    msg.ccount = 106U;
    msg.cnames.assign("ANPLVJQWNRHCYDIRTVDITQUJRUPATCJMGALQLGGHDEVBXLPVSLVOATOKNWMTVODKYJLOTHXIQCBZDFUZAZFOOREEFUZJHTNYBPZWDKIEAVYWWGHESHRBGSVGQGIZPCSUSJZSRBINMZDATHHXXNKKMNCEMMNRCTMCSEYRFBZUHFRHNKOXYJIMFLBIEJVWEAWVXBAUODYPLLXKUCWFBJSYGMJYFKQXDUIWPUPSQQFQDNIPYBSPOXCQKXOGCKLRZ");
    msg.last_error.assign("RQOCGONTJZIWOJNVRPLHJLQCHISSYTVPQUMCRDDLXJWJIEKOUATSSOENCPYTEIOGAFEVZZKVCNPONHRRBPFGJCYKXFHSJJGGHEXAYDXWBGLVUY");
    msg.last_error_time = 0.309748261425;

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
    msg.setTimeStamp(0.956828170351);
    msg.setSource(4610U);
    msg.setSourceEntity(107U);
    msg.setDestination(50029U);
    msg.setDestinationEntity(96U);
    msg.mcount = 11U;
    msg.mnames.assign("RFEGFNKXMSEURFZAVVFGRLYOULBGOPCCINPWHTYXJEYMPBGWSEMTNYBXYQUQUWKJRKMDJHOIEGXDBMOJMNORBBHQFKHWFLAAQOCDCWXBKLGJQKXGRBYSVJDRAFCNMAILHOXVY");
    msg.ecount = 185U;
    msg.enames.assign("XPFCRFOZZHRHYHUCWFBRTOEOTMEAOUI");
    msg.ccount = 21U;
    msg.cnames.assign("YURLCAXQCFIZDJVRYZANFQUERHCXROAPSORDOBXSCZVWOTTWIOMSEYKWUNTFAKIDJVEREGVOBZJNQXCXJECSWVWCHAPZQQOAYSDIGTKPISEVNZRUQGUHGYEULOXUPTMADDUJXMXHKHKPBMSTDAEWEFYNJBGCL");
    msg.last_error.assign("NIKVDYQTAWTCCSIELVPFOXROJPPOSVVLZKDJEVKAWZAPAQKDBHZOHXIJXYIBBGCGXYNSHBGUNMBFZCLTULRENMVLJQZTVEGBIMMEYRDSWWBTHPSSPLAISSSAAARXRJZYFNWZGBVPMRYLTJGENGJQFXELWNMKTUCOWMTBVDMQGKMXWUHWIDKRYRDORAPTUCPNDHJOJXVUEOFFFHLAK");
    msg.last_error_time = 0.513246600127;

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
    msg.setTimeStamp(0.666479368949);
    msg.setSource(61647U);
    msg.setSourceEntity(45U);
    msg.setDestination(31963U);
    msg.setDestinationEntity(158U);
    msg.mask = 170U;
    msg.max_depth = 0.0860657557286;
    msg.min_altitude = 0.324531298372;
    msg.max_altitude = 0.987342027377;
    msg.min_speed = 0.30801190594;
    msg.max_speed = 0.0597855217095;
    msg.max_vrate = 0.298148234796;
    msg.lat = 0.951685253059;
    msg.lon = 0.0551110858004;
    msg.orientation = 0.523200003838;
    msg.width = 0.38461347598;
    msg.length = 0.624846834165;

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
    msg.setTimeStamp(0.347030651333);
    msg.setSource(7601U);
    msg.setSourceEntity(174U);
    msg.setDestination(12510U);
    msg.setDestinationEntity(49U);
    msg.mask = 236U;
    msg.max_depth = 0.40816395579;
    msg.min_altitude = 0.396399534781;
    msg.max_altitude = 0.440918624459;
    msg.min_speed = 0.732234489352;
    msg.max_speed = 0.870326058755;
    msg.max_vrate = 0.647072815194;
    msg.lat = 0.746891588403;
    msg.lon = 0.442802115765;
    msg.orientation = 0.411730645156;
    msg.width = 0.335134905906;
    msg.length = 0.963648630332;

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
    msg.setTimeStamp(0.525363355667);
    msg.setSource(21200U);
    msg.setSourceEntity(70U);
    msg.setDestination(59505U);
    msg.setDestinationEntity(9U);
    msg.mask = 44U;
    msg.max_depth = 0.342282931516;
    msg.min_altitude = 0.073500432395;
    msg.max_altitude = 0.813092692003;
    msg.min_speed = 0.573945854492;
    msg.max_speed = 0.591044675794;
    msg.max_vrate = 0.100883528669;
    msg.lat = 0.91620512193;
    msg.lon = 0.0698850197271;
    msg.orientation = 0.226876706007;
    msg.width = 0.472227405628;
    msg.length = 0.393315075629;

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
    msg.setTimeStamp(0.778482310893);
    msg.setSource(48623U);
    msg.setSourceEntity(132U);
    msg.setDestination(15946U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.624612644306);
    msg.setSource(6325U);
    msg.setSourceEntity(67U);
    msg.setDestination(58493U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.231989049019);
    msg.setSource(57730U);
    msg.setSourceEntity(30U);
    msg.setDestination(53913U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.580288605788);
    msg.setSource(19050U);
    msg.setSourceEntity(27U);
    msg.setDestination(18526U);
    msg.setDestinationEntity(48U);
    msg.duration = 42425U;

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
    msg.setTimeStamp(0.982935571257);
    msg.setSource(43498U);
    msg.setSourceEntity(54U);
    msg.setDestination(57921U);
    msg.setDestinationEntity(160U);
    msg.duration = 1221U;

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
    msg.setTimeStamp(0.237846649255);
    msg.setSource(49146U);
    msg.setSourceEntity(55U);
    msg.setDestination(61352U);
    msg.setDestinationEntity(193U);
    msg.duration = 15410U;

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
    msg.setTimeStamp(0.702955769191);
    msg.setSource(34244U);
    msg.setSourceEntity(161U);
    msg.setDestination(64869U);
    msg.setDestinationEntity(77U);
    msg.enable = 17U;
    msg.mask = 3697068866U;

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
    msg.setTimeStamp(0.81370908976);
    msg.setSource(34797U);
    msg.setSourceEntity(35U);
    msg.setDestination(28739U);
    msg.setDestinationEntity(96U);
    msg.enable = 206U;
    msg.mask = 1677413313U;

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
    msg.setTimeStamp(0.447287813126);
    msg.setSource(1866U);
    msg.setSourceEntity(127U);
    msg.setDestination(22182U);
    msg.setDestinationEntity(0U);
    msg.enable = 28U;
    msg.mask = 94633802U;

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
    msg.setTimeStamp(0.718803173613);
    msg.setSource(2841U);
    msg.setSourceEntity(158U);
    msg.setDestination(21494U);
    msg.setDestinationEntity(108U);
    msg.medium = 2U;

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
    msg.setTimeStamp(0.638240002975);
    msg.setSource(40156U);
    msg.setSourceEntity(19U);
    msg.setDestination(54710U);
    msg.setDestinationEntity(60U);
    msg.medium = 153U;

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
    msg.setTimeStamp(0.178597526338);
    msg.setSource(48398U);
    msg.setSourceEntity(11U);
    msg.setDestination(27554U);
    msg.setDestinationEntity(119U);
    msg.medium = 206U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.779277416636);
    msg.setSource(43226U);
    msg.setSourceEntity(21U);
    msg.setDestination(30226U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.967051486187);
    msg.setSource(25597U);
    msg.setSourceEntity(149U);
    msg.setDestination(61590U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.761927679151);
    msg.setSource(1604U);
    msg.setSourceEntity(252U);
    msg.setDestination(2862U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.245122532807);
    msg.setSource(44628U);
    msg.setSourceEntity(36U);
    msg.setDestination(5394U);
    msg.setDestinationEntity(16U);
    msg.plan_id.assign("SGROOZAUFHQKALIPCOLVQZKHGLOAWJ");
    msg.description.assign("RNLVQASMFAGDYBLDVPXHAUXNTLOLUCQTBILSJENFSMSHJDYXUPDFYTOWTOGAVLXNLDWQCIZUDZMWEDLMWWCRH");
    msg.vnamespace.assign("EUPABFWJXHRBGDIRDWBWZVQADUMVTCUXJPOVSMLIGCAKKNPDAZZXNCZSBDAFHYLNNAMHJBIFETRRGORVKZCCQYINWKSEXUPGAJGLQTODOE");
    msg.start_man_id.assign("CKDZGSYMYKESGHABLBNNRJBLROFZGJFSZEVHYYPMDJFLZRXGGGCVOJUHHWTNFPLFNUQLMHACIPVWCQWCWZLJDOOOTITHQEJIVCIIIDQZFDAKSAWBGAYUUKVECFQKWMTNWZDEXEAXVDNXGMJUCQQITYRUKQBQPFVBPWJFKRNPYSVMEPMDYOGHJJSLUSXFSMUCMRRBTIILSKOCZTTAMDXDXVINRKYWRPWEOUONE");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("CTNDMIKOXVYZENWKLQWHHCWGWGXLAZAIRKOWXSULBSOPEKVIVTDISUJJORAFAQQBDZFSNUHUJEVRJDZ");
    tmp_msg_0.dest_man.assign("EIAHXTAISAAWMSRRGOJSYIVXVMQTMZIERBLERMXWLEURAHWLFZARVFCEUNVSYONHJHBCKQBZJMUKLTGKOXYGKILESBTUNAERZPKFYJBDTZBUUCTVNYWBVFYPFCSIPNOZWWTXHJDLKUOCNDOOAULIQSWQWXUSKHKYFRCMCMGIYCNJDQMKYVXAEPAPPFBDBKQH");
    tmp_msg_0.conditions.assign("GORHJEPRWPOVQYGLSMOXXJIUCXSNKNBQJQVCSHQKDXYPLZKVPWMZJOAGQITLEITYNMBSJWTWITIRHTCHAQNRLVBBAMFHUEURSFKONVVZFIRLHGKYDDONNHXWZMJXAHMLTLJWQCUBYDGPEXJPPEMVUBITDQWNGBYUF");
    IMC::Calibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 32076U;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::VSWR tmp_msg_1;
    tmp_msg_1.value = 0.426998216706;
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
    msg.setTimeStamp(0.626904315828);
    msg.setSource(43883U);
    msg.setSourceEntity(7U);
    msg.setDestination(31704U);
    msg.setDestinationEntity(210U);
    msg.plan_id.assign("JOXERTMEGAVISJJGRYEORORWIXVBDGSCLYDTOZXMEW");
    msg.description.assign("TBYSEFKAFCLJYLRKWSJPDCGFFRULKGXTMOXKQSQJUCTAQHBMLICTWHGAQXRTZYAPYGUVVDSBVRUEZIX");
    msg.vnamespace.assign("CNNSGKAQKUXTLJJBUKWNEEIGIDBHKHHNNQBSFVVQIQUDPUNCUOKATFYVWJQQXRPFSRXYSZVENOJLGBWUMRXPXRTETURCZXDJKOGZPBIBAZHOMXHSMLXVITCSGYISZEUJAAQTWA");
    msg.start_man_id.assign("CGMACSBPPFMRNARJKLDCOJYEFUFZ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WIRDBLKENCCFRAYPUBGSTFGDXBPBAIHVUFMZVMLQUXSWNPZNOOFGECRRIRSOHQWVQLVEZOSMPUKUKBCJJSAOZJVYDDYUENOIJPDVQONKCPKTHAYZIHYQWHPIPYFVOFILRGEJYWXSD");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 12586U;
    tmp_tmp_msg_0_0.lat = 0.0594931338023;
    tmp_tmp_msg_0_0.lon = 0.707245999175;
    tmp_tmp_msg_0_0.z = 0.255580866584;
    tmp_tmp_msg_0_0.z_units = 84U;
    tmp_tmp_msg_0_0.speed = 0.0740788171433;
    tmp_tmp_msg_0_0.speed_units = 144U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.195409269223;
    tmp_tmp_tmp_msg_0_0_0.y = 0.647327618529;
    tmp_tmp_tmp_msg_0_0_0.z = 0.92962379367;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("HSIJMMGXCTCXUKYXZIXHWEOCUNLEFHCBETASROWDFQSDUGYIJBWWLNPRHKTFZWLOCLIPABAYLUSQVRLYZNOTDBRHFTBLJKINHVJYEVAPXQHJMXMSGXSREDQCDBXZKLYNCVMSMTWMGPDCFVFHFYYKVZYVBNZGJPIBUPFMJPIKWHGPENAMGBPOCQROAWQAUGNTCUKIIDREEEYZKOOGNARILBJQZFZRMUJODQDUUEKVWJDTATPNAKGQQVHFSOX");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AngularVelocity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.542686691501;
    tmp_tmp_msg_0_1.x = 0.362125821015;
    tmp_tmp_msg_0_1.y = 0.486493943445;
    tmp_tmp_msg_0_1.z = 0.10016569834;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.50253538124);
    msg.setSource(12740U);
    msg.setSourceEntity(21U);
    msg.setDestination(60687U);
    msg.setDestinationEntity(34U);
    msg.plan_id.assign("BDIQGGEUVLFUCSCBHHQSCRNLFGBYHRSIAXAUWKHIQFUZSKJPYUDOTGRRBCNSXHTULTORDPSDIZTMAALNYMCBDWQ");
    msg.description.assign("DFPXHJNONEZEBFKXRBTCKAHFANIZCTBQXLQTVYMZRIQIHHNFSUUYSTRKBJYGXGTNYBPDK");
    msg.vnamespace.assign("WZICQZLVDTGXDUPWXETFAYGKYJSAKZCHTRUFDOHLZBXDPILBMCWNKNYJMHJGDGVFDNDAHGRBYZFYBYLOXZIQPNLXFJMRURKJVUMTKTNMPSQVFBVEGIXGJCIDQWZKHUAPQTJEMSUOPFUHOIVCMKHQGTIPPAUCKWVACBTFLSQWISSXRVNTBSSLUEGWEZEOOEOYKCROZARIAMOLXBLQVEYYCQDRWEZFNSXJNFBAHHRAGLSRCJXDHOMPYEIKVWNM");
    msg.start_man_id.assign("QVEIPAXHMOIZKOMJXMDQEZLPONCDSBEDMUIACZDPGQNDPCGBPVEHIYSIYHNXUJYWYNETKAPGVJRXMYBMHSFWPUETFFUZSLPLQJSENQSRJK");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("XSGFOEWOAONCWAOUZATQPHFHLDVBZGVYODGGEUQZMZCVMWRSWRBEBCLBPUHISYORMZLYAYTWJUEGRKNIJRNFCVRJPSRROGNUCMNJMPLTIKKJISHQFCZVVNIEALKKDUVJDVVQUQEJXADEDBUXHKNYRSLGUFXT");
    tmp_msg_0.dest_man.assign("NXOMDGSCDHQLSGHNPRATTHYQTSPQYWXIDEZFLZEJYLWLEJASXIGVNARKZTZCRXVWIPRTUOVOHNCUVOXFPDONKVHYZAYSUICXPGQINUKWEMNMZMOYIYZCREOMRDJQRDBZLKRPKGECUYPBAWOCK");
    tmp_msg_0.conditions.assign("LVUUUYKLINXSURQCNITECQSDVAIFAQDTFIKEWAZGRFOQZMQPYCZUVHUJEMSSBQJJJGJXOSXTBPKMGBZWKVBZWJYPAGHOBEPXABSXMPPITMMYHHENWIAXCDMVRJQYVVESMGEDCQNFRFYCU");
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.964352738659);
    msg.setSource(43310U);
    msg.setSourceEntity(35U);
    msg.setDestination(22334U);
    msg.setDestinationEntity(146U);
    msg.maneuver_id.assign("EYIXFWQBRSYXJBAQTQJCQCHMMUWYBFDXAIHTERBGUPRQZEQSOUIGGREAOAKZHQWSMLCVSJLDAIMNPLNBGKVZKPDIUOUKUAGYJHWXXHFJWM");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 49269U;
    tmp_msg_0.custom.assign("YZBLYUTNXOELYOCEMYHSFFMSYCJILLBRKQPPOVTRLRGUZMDREABYENCJQECCVDBFFJWTSKGSHSRBUQLNOEDNXVTMHOBAJIDRCQRDEISUQPJUVMAEZAPNUIPNGKBWSJTOHYNJECHLTAAKBCBPTYZVIJHODWOGQVKRYNFIWWCXA");
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
    msg.setTimeStamp(0.485882299562);
    msg.setSource(36570U);
    msg.setSourceEntity(127U);
    msg.setDestination(18243U);
    msg.setDestinationEntity(80U);
    msg.maneuver_id.assign("TJWZWMSBMYUXSXCZKEDTHAMFILGLKBFOFKPFOXRXZSJKQALETYAZVAVTSOXAXINWUKIXVYODGHWNEBP");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 21397U;
    tmp_msg_0.lat = 0.890160059677;
    tmp_msg_0.lon = 0.137787535158;
    tmp_msg_0.z = 0.128021721137;
    tmp_msg_0.z_units = 120U;
    tmp_msg_0.speed = 0.773259913093;
    tmp_msg_0.speed_units = 193U;
    tmp_msg_0.roll = 0.106450463072;
    tmp_msg_0.pitch = 0.156527951215;
    tmp_msg_0.yaw = 0.742492182246;
    tmp_msg_0.custom.assign("OTXNWZDSEALCOQNYBQSJGFDGIDBRAYVVMETNWOJZKGFULQICJJECWFMBWGBVTOXCTGHVUDKICXTSHGSVUFYPRROAAAQNSXAPPEARBRONUNENDERWXPWRJTZPMZBTQLYMBFHOUVYDYKFZWMGOCBEXAUCLLM");
    msg.data.set(tmp_msg_0);
    IMC::Loiter tmp_msg_1;
    tmp_msg_1.timeout = 44360U;
    tmp_msg_1.lat = 0.462247298522;
    tmp_msg_1.lon = 0.576305455282;
    tmp_msg_1.z = 0.825664862666;
    tmp_msg_1.z_units = 149U;
    tmp_msg_1.duration = 14908U;
    tmp_msg_1.speed = 0.00230314337749;
    tmp_msg_1.speed_units = 189U;
    tmp_msg_1.type = 224U;
    tmp_msg_1.radius = 0.461800418241;
    tmp_msg_1.length = 0.436311139701;
    tmp_msg_1.bearing = 0.114911998187;
    tmp_msg_1.direction = 181U;
    tmp_msg_1.custom.assign("JBWTWQCRFDOEEVFREOCFMMKUBTHTJBBNCTJEVADPOFOAEHSKKCDYXNU");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LowLevelControl tmp_msg_2;
    IMC::DesiredSpeed tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.923186066022;
    tmp_tmp_msg_2_0.speed_units = 248U;
    tmp_msg_2.control.set(tmp_tmp_msg_2_0);
    tmp_msg_2.duration = 36229U;
    tmp_msg_2.custom.assign("WJRFBZBMDSPBXCOUFJXHFMYURYZMPNAEUVYLIANNCHVQKURRVCFBQQYZXCOEYETPUSBNVGSDOZPHMFJOLHZDFDPIQXYNNGAOLLZWCIASTKFKTDNJIEEKXVUHIHLSIQIBBVMDTHIXOLYGJXTFQWGZGB");
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
    msg.setTimeStamp(0.906045330679);
    msg.setSource(48189U);
    msg.setSourceEntity(34U);
    msg.setDestination(2571U);
    msg.setDestinationEntity(53U);
    msg.maneuver_id.assign("VRIRLGTVPSJPHTU");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 61928U;
    tmp_msg_0.lat = 0.404759388316;
    tmp_msg_0.lon = 0.84710101799;
    tmp_msg_0.z = 0.890202614521;
    tmp_msg_0.z_units = 146U;
    tmp_msg_0.pitch = 0.914993412556;
    tmp_msg_0.amplitude = 0.0306406502282;
    tmp_msg_0.duration = 18062U;
    tmp_msg_0.speed = 0.139070111769;
    tmp_msg_0.speed_units = 46U;
    tmp_msg_0.radius = 0.316474773698;
    tmp_msg_0.direction = 125U;
    tmp_msg_0.custom.assign("XXJKDYSXWFPEIVTSSGDVVBLMFQDVFJXWFESHNBNVUMYGDTJZBWXHJULLCQCFRLMPWICOQWLVWZRZTHYETVJSEXIXDU");
    msg.data.set(tmp_msg_0);
    IMC::CloseSession tmp_msg_1;
    tmp_msg_1.sessid = 2852135526U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SetThrusterActuation tmp_msg_2;
    tmp_msg_2.id = 26U;
    tmp_msg_2.value = 0.651624478377;
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
    msg.setTimeStamp(0.347850851742);
    msg.setSource(3057U);
    msg.setSourceEntity(156U);
    msg.setDestination(44201U);
    msg.setDestinationEntity(103U);
    msg.source_man.assign("AQVCXQCGTPVXNCLXGEKIUXORQWZYFRFZHPFHDMMTNYJCVLSOIOSPWZKNRBROHBFOECQKABHRIVEYVEKBDDLQZWSNUCPJAADCUDGLSKFHXILPYVEFRKSNTPCOXIJXLZMUHJYVGJEDWAAMEONRWOOMTFJBTUGZVXQWUMJMMHMBKHPSZVRWIF");
    msg.dest_man.assign("RNRDIZVBQSPGHGPBOBHRQACQFXPDMXQAXGONOWLOWSNEKBCVTVAUJQNUVIVPBHZJDUOPBZJMRKTNZMQAEFATWHWVWBXEPTBTCKQAGJALQYEFWXGNWXCRIYAYIDFAWGPDCTRGRJZRQLISUMMREJJVTSUIIAUXDUDHWPMZUSSSEIHCHWJFKKIOZHHYLLKKMOSSKOLNCKLMCDEGYXLJFFPZQLTGVFBZCUZOCUHERIDOLNV");
    msg.conditions.assign("VMIGZVXXGNGTIRNIIWJRSBCQAJUPRQFQMTHCAJZRTSRQDHNVRIXNWEBGIVOVGOCKGTBPPPWVDSTNHFVKDDCDGYPNTVFKCQKDDTRMHZUQLFFXMBMYPTMOUZCALBYFXXUQEKOANSJCIUAWFCSDJPNSHMSTXBHLOZKYWPOYUDKMIJEGDLJKREUNWPZYWJAXBUEHIEOQTOMHELJSLYGERCWLQAZZUZYO");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("OPJVMUJIBPGXNQOYOPEWXOMLIRCHHADFYPABRWPJFANHHSNSLJIFNLECGRAXWWEKLPKVHHAGKBKKZNGKSZXZDCDODQWZRKVYACTUTPTFJSIUHCOUTQZLWQNTNWZSYJITAGAWDVMWYFYRVFKMDHCBSMQVDLCRHRMKTSEYXMLKYAZYXHZSZGGLIRYDEEQAJCDQMQCZFCLQBGJXIOFNTJXGJUIORORXVUBVMST");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("DJKCRCFBPYVSDRKXSYJBEAOVBFZDDNPTQYNONGUIJGOCKOQJRIOJTQMXAXXGLKXBPJRQCINFYHJHFYEVGKSADDRUKHTQEBMPURNRPQSRBLKUWYSBPWVJJCXSLPGVTFATZDELOYLQVAPANWITDMGPXUAWTQIHLBFSELHRZUDTECLKXGJTEXRFVHML");
    tmp_tmp_msg_0_0.sys_type = 184U;
    tmp_tmp_msg_0_0.owner = 41441U;
    tmp_tmp_msg_0_0.lat = 0.607936319865;
    tmp_tmp_msg_0_0.lon = 0.471659621061;
    tmp_tmp_msg_0_0.height = 0.131512160925;
    tmp_tmp_msg_0_0.services.assign("SKBTYTMZCYFMVJJJPWGKKBHDZQUIFLPGFDFRUZNLPXNLSBNQATDAHQGQFNLQOOXU");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.340158477197);
    msg.setSource(58185U);
    msg.setSourceEntity(116U);
    msg.setDestination(58471U);
    msg.setDestinationEntity(164U);
    msg.source_man.assign("HXHPQWRUTTXIWAUZYOAVJFJPLGYSITYPUFEOFGFBWGBWAWYTITGUPEYCRJOKCUJYVEJCBEBLYDSXVYBAOLGIHVQSMWZIDCMCHQKGXOCYDMWMAJQDZVRQMNDXNUINKLNOFVDJEAQPMZRFKQVTPDKJEHOJKNPROTTXLGWGNSKLBHZKUSAGKEIBJDRWHUEWVSCNFTARHPZBNIMVMVXDARPOLZCPLLKXBSSHQEZYSTNEUDFFSFLCRGONQIHXIMUBX");
    msg.dest_man.assign("NWZVFLVXPHTPAYQORLJTVFAUHSAKNAGKMXFGEBNSCJKCUHOLTENIVNEJLEIJBMNYCNCWABBMFQROFTQIQNCROHNGEFSBZWFIXUCSTPLSQPEAQ");
    msg.conditions.assign("RCWCEDHBJPNZOWKOQICEGNISKDUQQXWJZNVPPFXNHIJUCOQRKCSIQHEUVMSKSIOFSZSQAMRGGZYBZVGTVJZATFLWUMNBFRRWTOOXESWDIXVTNOCPLXAMAGDTKBLGRYGTNFPLHJVOBUYCYBGUGTJPVNYBWBCTXCGSHJPQIZRJQANZVHERDRULMLMFFWEEIHMUQHXJJ");
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 866805466U;
    tmp_msg_0.value = 217U;
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
    msg.setTimeStamp(0.37094035304);
    msg.setSource(62117U);
    msg.setSourceEntity(19U);
    msg.setDestination(44616U);
    msg.setDestinationEntity(156U);
    msg.source_man.assign("XHWHGOBPEDYKDGOFASPNMDWQGVSZCKLSWSZFRTTPGYALLEMKPLEXDOMBOFINAEFETICUJRRHJCUIXLYPJMNQWOEMSHBKIUACALXRJQZWMITLKNWBOBIECFWFHZX");
    msg.dest_man.assign("TTLBRVEXSGMDPMAZACKPASOGBAEHVQZYEFTYCYJXJLKKMYKDNFFJBSSELRLYXXISHAUMYYEGNSFVDCGZBPNLSLCGATOJHSUEPQQKFWNENRGGHCMPDUNXTRDKBHCAIXVUQWDRKZCTWBWHBRWMRGTYHWUPHEFEQZJYXWCLBVDKJFZJOKMZUPIHXCGJONBIIVOOICOALNVOIDSLWDEFH");
    msg.conditions.assign("DINZQDEOAXAEYHUKJDXABRZMHFSLYQWPFYOZSUOIIUNVHCRFHKRAHXMRONLJKVSQGPDUWWLPMEYSNCZIBFQKAGBJFWZREQLXWAUMVZMRIBQEWTTGZPAVPWXUBVYNTODTZEGIOTIBTBPGXKSMUTPANWFOLQSMPHGKYCWLYIRYC");

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
    msg.setTimeStamp(0.670453107357);
    msg.setSource(25777U);
    msg.setSourceEntity(228U);
    msg.setDestination(64287U);
    msg.setDestinationEntity(50U);
    msg.command = 207U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UESNYMCWZBLGVGAXNCAEVOMARVDRLWLDMFUFSYZQNVOPGXCQALBJNHTCWOUZFBYOMEAJFRRTVXECATRDXFZLZTPALATBDQTYPDLRWFEGXJWHDSCWTORFKLJIHZICKOYQHTQFAGRUBESHOKIQDXXIHEENRBIXNZZOJHMJICPEDMPKVX");
    tmp_msg_0.description.assign("JRGMNWQHHFJLNZNSPQSBAYFROGHDERSDPMGKJZVHBLZTBGXYTFMSISRRLOUAKCXDIHEROHENHCCCXETWVRIWANFLANWWLMINQVMKCPAUBTYNNHFAFGUUEZXENJOSJWPTIPGDJIKZPHQMYGKPFXCXVEKRUJYDYTWVKOQADXUZPGYWLETZBZFWMMGFSHATBOUTMJXIKLEIZFAVOIDSOCEQYDOQPVWBCQMLYVBSYAVDSIBLRDUOCQ");
    tmp_msg_0.vnamespace.assign("WAIUJIZBYOMMDGTNOUXKQLRRJHDIKCVBNQQCXPCKALZRCYYJRFFKVGEIXZKZFJNZXMDQQLUKELWMEGVFEJAEUJDVGXIOSUOQGSQAGQVSADUADPDMYCKBUNJEYKJHFPIQXLXTNYOHCTPSKBTPYGKLVBBDXILYXRTEHOFLZFRWT");
    tmp_msg_0.start_man_id.assign("AQRGRMIODTREDLBYCZHNWHVRDZONNQEBSOOXOPMGJLHR");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("WLQHBJRTDIQBUYNYCQDEZYPBDUESBRA");
    tmp_tmp_msg_0_0.dest_man.assign("TNLEWITJMEZFHRVOSSWEKUDXNQTFZDJCDDAEROYUNHEEXTIQCYSFRLWUGLVOSODPARAVJZNQKCBZKMJQQLUOVITBIYAJIKAHGFWI");
    tmp_tmp_msg_0_0.conditions.assign("OEEMVRMFNMFBHAMJTFKJYICFULCLACUIQEPYQWGJIUNLRBYZOBINXBKASKLRVSWCGJVHMXVPMPFRFULVKCECQTECGPE");
    IMC::CompressedImage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.frameid = 93U;
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {-39, 57, 107, 123, 13, -111, 0, -93, 76, -7, 51, -41, -12, 25, 117, -67, 113, 100, -47, -3, 125, 7, 56, 51, 77, 101, -102, -41, 2, 51, 27, 4, 67, -43, -107, -72, -11, -33, -84, 86, 99, -65, 74, -92, 40, 18, -12, 46, -34, 43, 68, 46, -74, -22, 101, 83, 116, 18, -20, -126, 19, 53, -42, 45, 99, 91, 27, -10, -111, -25, 113, 58, 71, -76, -72, 110, -45, 75, -119, 106, 105, 81, 31, -36, -53, 126, 1, -89, -35, -19, -72, -42, 96, -128, -113, 84, -37, -92, 45, -40, 8, 125, 84, 22, 19, 68, -76, -101, 23, 3, 96, 23, -45, 101, 11, -24, -95, 114, 58, -128, -40, -65, -11, -14};
    tmp_tmp_tmp_msg_0_0_0.data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::SetServoPosition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 92U;
    tmp_tmp_msg_0_1.value = 0.606719376827;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DevDataText tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value.assign("HJBHNAOZDSDSOTYEZBWXRFCBPIOHSWVULGKYSEVFNRLTFIPBBXYUOANPFTUFQTDFAHAMCZTQXKQUBYFYWETJXDVOMIJTDGLESGN");
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
    msg.setTimeStamp(0.838455227517);
    msg.setSource(2445U);
    msg.setSourceEntity(167U);
    msg.setDestination(62753U);
    msg.setDestinationEntity(184U);
    msg.command = 247U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WIYPSPQVISPPSPAWCTRHMUVTXJHRXRM");
    tmp_msg_0.description.assign("FHZRSSDIWDSJPNQOMMAUIDUVZZHBNUEFFCAZKQZMKHZRUQMZVRIWDDPWZWARTHENXIUHAQUWGOTRIPTALYEJDTCVEPGDNLEEGHVKPCELSEUJXNJSMCDLQBKTRJJAOCTMAXYWRALGZGLAMKJVKTFXCXLMOUWYYYSKVPFQXENOEGJHHBITYGBCYOBQGRN");
    tmp_msg_0.vnamespace.assign("FBDZPJXTXASHXMGJSGQGHTMNUAPEQVURBLLFMAZDBEMEYAFBCWDEDOYJYDWYRUPRKYNMUDLXMZSNUWKRHQSKNQVZKIYUNJYOTRJODEOBM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PLHIZCIJARTUHTEFCYWBRFVYSTPXFYBWNJIKCJJXILYKGQMPRNUCHIVUVPBFNQOGZDKVTHWTZESLBTRVKROQAPCRZCSOVOCFTWGKDQOQZGMRDXQXQUVYFYVMNQAOWEXDQIJKVNDSXZUROHTSDMBSWYJHNJFBIPXWUOUDJBNEZMETHWAOUGGFWXSKLPDMEYPQCMALRLFCYGBHDDSFPACEAZGYAIULG");
    tmp_tmp_msg_0_0.value.assign("ESPPSYHXMWBTXKFRJMFQYSBFSEPQWXNRNJKTACGZAUMVHDUIZ");
    tmp_tmp_msg_0_0.type = 196U;
    tmp_tmp_msg_0_0.access = 138U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("AGQNUTONZNMIJVNWDRX");
    IMC::Brake tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 60U;
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
    msg.setTimeStamp(0.112571055616);
    msg.setSource(7766U);
    msg.setSourceEntity(21U);
    msg.setDestination(21985U);
    msg.setDestinationEntity(78U);
    msg.command = 229U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HHDLWBDUAYVBWHRSBVJWDFNDXWNPWBHFTELZECGMPAFFRDEBPDMMEWJICAIEKJRGWXRFYJQNDSHPQWONKUBESBPQXNNZRTKOTZOXLYCERKVQCGHUBZGLFHDXZBXYXUUAQVMSIUIGQUAORJTKTMCGVYYYANPBHCFSIMVNYUUJSGWMUFTIOKXLASKRLYILJPXEKYDP");
    tmp_msg_0.description.assign("GIDLVCBOMTQOMEOIXSKKMKFOLTRNSNSMHFIZRQASMPPXOXZJAWMDRHDGGAUIZKNYVOZBZGJBYHEPOIEYLLQWPUBSSAWHCUQCFRWINEPJWCRATUPTDHPXBSCQYVCFJGGROJVPYFFKIYBNLMXEXVTGDGUZQVYPFMSWEDJLVZVTNLRFYCKZMLDHXKWPJZRAXQGUHTBQHVNYLKCFBMQAFHVWKOBSTZTKOIEQCIRJNNXDRWISAUBNJWJUEUDY");
    tmp_msg_0.vnamespace.assign("TZEQONQXYQULIHFZGSYRHMZZRXBEICOKFEOCBZKFEWJEDSHQSOHDNPFMPCITJHZSICWJXWSVAFORNUGBJCSQXLWMGVDCZFPZDERTOAPJUGINQYHCQFWGONYZTUP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LGNDNYGBIOTHNBOKZEXTGCHLLAPUREUWTKEZDLUCBDXUMLXIPPJJPJGSTNAFTFVSNLMELNPCMY");
    tmp_tmp_msg_0_0.value.assign("UCKVXRSGECBNTVQJMPMSHKJUMMOBJXSOUPTHRLRNMPLUOCMDGHHXQKGBZJMAASWGVWWBIMTYJEAICRDBLWADDIDEEJOEPVGERTFVUNXZDMIGCYZOEULYJPMRXQAKRGFQPYODBTBTAQZUKXLYUXFWPEWGARZYIWVCONZSQTLOYLSKYDNNUCVYNBIDTHHLJQZFLPTVOXFKZSRWAGKRINSKCZNSNIGHPSWKWTIFXFXAIVBFU");
    tmp_tmp_msg_0_0.type = 186U;
    tmp_tmp_msg_0_0.access = 102U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GPCPJUEXQLTNYPYWKSHVCSWNTSVZCFGPXWIXDEFGFHTCXBBNHBJUQWNPENCCPHEAGYOZSEBVBOYOWHRUQKLSGAHPJKTROQLRFPVSXJADGYDOKNEEIOJBBRIILNCUQSMOMXCLAFQMULDBXUVQIJYKVATZZMKZFJWICRLAVDBXUTMOHZWDYOYJDBSKTUHGDLQIQIWUMAKNWYJLIMIQKMRRFMFVZEVDYPAJTPELAGSTAOVXEDGZZMFRKUXHWTRF");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ZRQUTEHAYQSYBKBDKFCYWXAXMYQJDIMNUSARYCSZYGFPXTDEKGREVVKESLHFEJKCWBVFIADNPPHPFYJFRZWFHJHBIZLCDFGEBRAHDPLGABODLOIBBSOVCJTQNYIXMKQKGZJTWLWBLTNGAMHLTPJSCCQDRCUTZGIO");
    IMC::Elevator tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 56666U;
    tmp_tmp_tmp_msg_0_1_0.flags = 75U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.950191831531;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.912036694431;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.836821920393;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 135U;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.744726286847;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 34U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.223467513868;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.240754447719;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 150U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("WAVCWUAVUSYGWLEMRENXLWWOZNYOTFJHBFMUQOQSTZDVXILYSFHMHHCRBVUJQOJMXAQSQUPPZMLXNGFKDOQSRAYILYYHPPHNOBXJKIHGNZHZCGUHCXOCAFQWESIRIJLPSWB");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DesiredPath tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.start_lat = 0.227794075743;
    tmp_tmp_tmp_msg_0_1_1.start_lon = 0.253656758931;
    tmp_tmp_tmp_msg_0_1_1.start_z = 0.85331039038;
    tmp_tmp_tmp_msg_0_1_1.start_z_units = 187U;
    tmp_tmp_tmp_msg_0_1_1.end_lat = 0.213240379897;
    tmp_tmp_tmp_msg_0_1_1.end_lon = 0.39312840998;
    tmp_tmp_tmp_msg_0_1_1.end_z = 0.993400355248;
    tmp_tmp_tmp_msg_0_1_1.end_z_units = 163U;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.853816630244;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 250U;
    tmp_tmp_tmp_msg_0_1_1.lradius = 0.496330741108;
    tmp_tmp_tmp_msg_0_1_1.flags = 144U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::AcousticOperation tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.op = 222U;
    tmp_tmp_tmp_msg_0_1_2.system.assign("OHIWTJNGFAYSROKAPDCIQCWSUGQUNEMPJLFKKNPRLMPOFTVBCQCXZKVBDPQXYLUURADOBZCMEPEVWQOFUZGHBTWRIRGDHYOAHGXXMCCXOLSKVUKJAVRLPVEQXZWGAHMZTYBXSWENSJHUIODUMZNYFDJVFGYVQTJPWRYOBSEMJMJFDITFEZXLNC");
    tmp_tmp_tmp_msg_0_1_2.range = 0.127014105735;
    IMC::PathControlState tmp_tmp_tmp_tmp_msg_0_1_2_0;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.start_lat = 0.40932467861;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.start_lon = 0.215274514151;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.start_z = 0.313617478955;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.start_z_units = 202U;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.end_lat = 0.961901171559;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.end_lon = 0.337443447765;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.end_z = 0.705315687189;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.end_z_units = 184U;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.lradius = 0.32021288711;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.flags = 233U;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.x = 0.857774773517;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.y = 0.306257810293;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.z = 0.63701847475;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.vx = 0.128483709921;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.vy = 0.927165458368;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.vz = 0.913764367921;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.course_error = 0.881506388895;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.eta = 11671U;
    tmp_tmp_tmp_msg_0_1_2.msg.set(tmp_tmp_tmp_tmp_msg_0_1_2_0);
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
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
    msg.setTimeStamp(0.838216352469);
    msg.setSource(2966U);
    msg.setSourceEntity(206U);
    msg.setDestination(56965U);
    msg.setDestinationEntity(240U);
    msg.state = 160U;
    msg.plan_id.assign("IMMPCUFQDAQHVVPMBSELPLNXWDJQOLXKSXDKCIPGYCKVKKIUTFJMXUZIKGYDJYORGCWDAGDABJLTHTDVZ");
    msg.comm_level = 204U;

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
    msg.setTimeStamp(0.913542392416);
    msg.setSource(62780U);
    msg.setSourceEntity(148U);
    msg.setDestination(29710U);
    msg.setDestinationEntity(74U);
    msg.state = 77U;
    msg.plan_id.assign("AEYSEZGLFWACNCQSMWAYUWXYUSORRBFOFJEMXBQOHXNNUKGHWNFAQTIDEGCLZQDNDCDZNVPLGVEZCIKVUCAQ");
    msg.comm_level = 70U;

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
    msg.setTimeStamp(0.153366457955);
    msg.setSource(379U);
    msg.setSourceEntity(195U);
    msg.setDestination(1825U);
    msg.setDestinationEntity(236U);
    msg.state = 41U;
    msg.plan_id.assign("DIJQMKOZVAZVHABOHCRSFGIQHXMNUVIDTDDPRKEKAAVSJZJPGULNQRVBPFLHGSFEYWBKNCGEMPGVCJQUMTRBROCQUKCZJSDASPXZYFMKOYYQJXSKWLABDIUUXDO");
    msg.comm_level = 155U;

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
    msg.setTimeStamp(0.0712043145103);
    msg.setSource(50140U);
    msg.setSourceEntity(53U);
    msg.setDestination(24652U);
    msg.setDestinationEntity(212U);
    msg.type = 227U;
    msg.op = 62U;
    msg.request_id = 38447U;
    msg.plan_id.assign("SUXUBRJEFBTJEPLNIRJZBTPGFTLPAGKSMSSXEMCCBVKGLQDKEVZJBEXJJIHQEZMNHNWPKYHNVQHIYWUEZCTBXRICKFXQQDK");
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 40U;
    tmp_msg_0.zoom = 131U;
    tmp_msg_0.action = 151U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CRUNSOOGFMVABHTXJEHYDZDDZJPVWAQSZTSREQXASSRLXXLDCIXJNBOGWLVUTMQTNDOIPCHIMPBYOTQIIISYUOCBIUVDFZHKPBUTEXKZBHUQRKKZNGODBROSKKMYFYOWXNJZCTAXZRSFLIMTVVCPBEJWLARGWRDKVGFPHTVICJAWJWXEPJCYUAGNMMKRGFFTHKNCMAUPQOLIBJLRQDKVGPEHHAVEAQSJYZGLHFQZFGNPFMUYCWWNELLYEYSB");

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
    msg.setTimeStamp(0.0696783178391);
    msg.setSource(4069U);
    msg.setSourceEntity(88U);
    msg.setDestination(18485U);
    msg.setDestinationEntity(84U);
    msg.type = 106U;
    msg.op = 29U;
    msg.request_id = 16385U;
    msg.plan_id.assign("ZLYJIRQUAWZCXGECEWUURUDTESUSHOPAYYMXBGWABSNPOJOTJHCIUKBVTDXKSMFLZHTHGVNNSOSMPZYMIRCJMFHXQYMWYLSOECRQJKXSWTOEPFCYQLRKTAIVQEJMWZFQZCGKUNQDIXLKRGVPXYUBAEQWFJJIZWFFARVMYRSGLETWAXNTQNSJHCALVFLGXOIHTUDHPVBZFI");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 240U;
    tmp_msg_0.text.assign("HYLTTEPZMJYDQEIIUGFVSRIYHCJBQAXSJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SVLFFTDUDMUUNUXUBNANHNYROHHBRAGFFDMGLVOQWWPQCSJAIFAARJKNXPCHZKFNPRILPSJMKRCXZYSJRHHYXJLRLBFAHCTCTSWCWVMPDIVTOIBDXPKTEEWLGTQHVYUEGEVNHESVKGIKQOLEYIWNIOYWMOBEYXQZFGXRMAIPGIWMOMRZDVCMCDLUJGBEEUOEXURQLCY");

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
    msg.setTimeStamp(0.385606317562);
    msg.setSource(58137U);
    msg.setSourceEntity(180U);
    msg.setDestination(22641U);
    msg.setDestinationEntity(156U);
    msg.type = 125U;
    msg.op = 8U;
    msg.request_id = 22003U;
    msg.plan_id.assign("BNGVPOSLVBIJIIKXCPAAIQLGCKUGCRCFZCGHEAWGWFYQDUBOQJHHPQZMEXDKFVGRRQKAGSZHOEBEADVDMURFENDNJKOZXHEYPMCPOGNKXRFTYTICTQJXAQWZVEBYBALNZQRZPZNTEBDYILBNFFVDTWHZGRHSUSBADNJNKMYIOTURJYLAOWHMIEMTUSIPULVJUBWXSUOFG");
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.561293433349;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MMQQETJRNRCILKIGGMTTUBENXPIELLWQLHDALYYJATJSSCHCITBNFNAKBPPCWYUSZTGAVPXEPEUUHZVBHIGIJOHTQFOEFNMKHWJJOSHBFDFWQUWGCHZAKYKCDOMHSMCNQATLUYKVZNSMXZDFEVOBYBGNJRXEMLDOWVWVAJFFMZSQWVYXRUQCWXIXSAPZNORDQCLDCGRZXIRZJBXVPUBEYRDZSNGWEO");

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
    msg.setTimeStamp(0.553785961295);
    msg.setSource(58640U);
    msg.setSourceEntity(99U);
    msg.setDestination(29030U);
    msg.setDestinationEntity(185U);
    msg.plan_count = 59560U;
    msg.plan_size = 2868461485U;
    msg.change_time = 0.724759921315;
    msg.change_sid = 56616U;
    msg.change_sname.assign("SFPNCLKRXSYDNFRCAXGJOSYKVLLNUIRLRONLKWMMESIOJBRVXCJFMJGUUVTSNVBERYPZEWJYZWQTNUTNUWWPQAIKZQWREHSGEAGFUPTHFYSWMBJJFXBVXPNHSWODAGEHAIJPYLTNEDCALLZQAAHPXMTWLICTVDWHTUMJDGKDBIVOPPFQSSARTUBKYHECOKBHIDJDKMLIXCVFDXMGEHMQMEBROGINZHBGU");
    const char tmp_msg_0[] = {-27, -101, -103, -55, -37, -86, -62, 74, 14, -126, -9, 1, -60, -60, -70, 72, 47, -90, -55, -90, -57, -72, -62, -106, -61, -94, -64, 50, 94, -60, -37, 24, -76, -2, 27, 6, -118, 5, 101, 35, -85, -15, 118, 111, -23, 98, 15, -11, 3, 93, -32, -118, -125, -126, -4, -76, -4, -43, 95, -11, -30, -31, -118, -51, 35, -18, 116, -62, -60, -47, -104, 90, -94, 82, 61, 41, -1, 80, -69, -83, -38, 85, 45, 65, 80, -121, -65, 32, -99, -31, 16, -100, -35, -90, -12, -79, -76, -48, 92, -42, 30, 126, -2, 23, 75, -13, 124, 35, 84, 40, 57, -66, -106, -29, -33, 77, 98, -84, 74, -92, -24, -106, 76, -58, 5, 103, 10, -108, 53, -27, 81, -72, 121, -106, -8, -61, -113, -99, -109, -75, -89, -11, 115, 63, -34, -48, -12, -64, -28, 77, 46, -5, -72, -128, -69, 95, 14, 114, -44, 79, 88, -112, 96, 41, -113, 40, 70, 100, 23, 66, -26, -113, -117, -94, -28, 118, 72, -112, 88, -31, 37, 29, 55, -112, 105, -63, -104, -51, 78, -60, 33, 97, 102, -48, 61, -2, -84, -108, -41, -123, 8, -83, 119};
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
    msg.setTimeStamp(0.648553328302);
    msg.setSource(8865U);
    msg.setSourceEntity(164U);
    msg.setDestination(56663U);
    msg.setDestinationEntity(252U);
    msg.plan_count = 33887U;
    msg.plan_size = 2888843221U;
    msg.change_time = 0.242651102546;
    msg.change_sid = 2074U;
    msg.change_sname.assign("BWJREBAZYAWPCVYKGSFTJASOCNK");
    const char tmp_msg_0[] = {-87, -28, -35, 6, 23, 63, -95, 117, -97, -15, 33, 79, -123, 59, -128, -70, -60, -7, 36, 45, 10, 89, -95, 28, 103, -106, -66, -109, -87, 33, -73, -46, -66, -3, 126, 4, -32, -33, 14, -86, 64, 82, 124, 7, 10, -116, 37, -30, -5, -121, 43, 35, 71, 106, -107, 107, -67, -83, -18, 45, -48, -69, 90, -77, 23, -94, -58, -72, 76, 10, 40, 16, -20, 62, 76, -109, -80, 86, -61, 92, -57, 62, 1, -70, -115, -18, -37, 39, -98, 39, 120, -89, -96, 126, 90, -88, 101, -7, 123, 64, 36, -67, -54, 49, 31, -51, -32, 51, 36, -89, -125, -126, 4, 19, 94, 6, -75, 64};
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
    msg.setTimeStamp(0.296170098591);
    msg.setSource(10009U);
    msg.setSourceEntity(150U);
    msg.setDestination(4070U);
    msg.setDestinationEntity(115U);
    msg.plan_count = 2673U;
    msg.plan_size = 103478880U;
    msg.change_time = 0.967189938193;
    msg.change_sid = 61724U;
    msg.change_sname.assign("MNZDUIUVUJOLFQNIGPJCYBWAHSJIIUNWOQGRNBQNZRPACVKYGEXSWYCDTSABMXTSDQKOPBHTPDKOWZOMXRHWLJJIGMXCLLFVGQVQSTDBULQXZBRDLHIDVVQRKILCFTEIUEWTAHZZTWJXEKNQYNF");
    const char tmp_msg_0[] = {-33, -5, -23, -90, 93, -87, -68, -88, -37, -81, 51, 95, -92, -128, 44, -37, 119, -74, -82, -123, 110, 113, 126, 22, 53, 27, 84, 35, -127, 9, 108, -43, 16, 35, 105, 38, -100, 6, 41, -109, -10, -100, -71, -96, 73, 13, -25, 122, -35, 89, -96, -60, 100, -63, 64, 54, 49, -70, 43, -80, 107, -35, 4, -77, 57, -116, -122, 28, -34, -85, 106, 29, -43, 16, 32, 119, -68, -88, 61, -68, 20, 12, -57, -90, 86, 51, -32, 3, -59, 46, 19, -5, -127, -47, 21, 5, -69, 29, -54, -85, -35, 71, 106, 91, 119, -55, 51, -11, -82, 69, 78, 120, -59, 109, 80, -78, -48, -117, 51, 46, 116, -29, -16, -113, -102, -61, -55, 52, 106, 94, 47, 60, -38, -2, 25, -112, -121, 1, 40, 78, 75, 53, 57, -121};
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
    msg.setTimeStamp(0.527146396629);
    msg.setSource(29717U);
    msg.setSourceEntity(19U);
    msg.setDestination(10504U);
    msg.setDestinationEntity(207U);
    msg.plan_id.assign("IMNCJCVQGODWRSNCAGDZAVNRGGKQPJIBVMOMBKPKOXXBZVDURHYXCORPHUASYYDGAPJBTCXUIQQIHFDBNVINEGCTLAPJLMYXDHAFRKLSHNEVVJPMHMJVDHSWPRZIISAFXKYESHXYSACKYKUTUFZZJWIWMDCUFOYEZQFFBSRLAWTRVZNWBJZNTIJHVK");
    msg.plan_size = 38664U;
    msg.change_time = 0.18251681127;
    msg.change_sid = 45052U;
    msg.change_sname.assign("EXPVCGMDLXNFKUOVWVKBZWCPAYFQPJRYOYNTWBAMVFUNNRAYCZDIHHPONJXTPNMJSEEBGQMPJMQWNTLTYIWDYALCZLHGCCRJJXWQKGEIOPFBUEZOMGVTSHEJFHJAZOQHAKVNRUHWTPQSVXBPZNKUWGUGLQKOJCUZUAFCHYTQMEMBXDIBRBRDPSJXQEYKRGTTCZILGKAVGLIESZLIDXRMYBH");
    const char tmp_msg_0[] = {39, 53, -26, -75, 71, -6, 82, -32, -73, -4, -115, 72, 107, -112, -92, 33, 29, -9, -30, -36, -98, 89, 123, 124, 47, -125, 5, -97, 44, -106, -124, 102, 91, 23, 58, -36, -79, 56, 25, 102, 8, 20, -39, 116, -115, -95, -26, 78, -116, 68, 88, -52, -84, 42, -57, -13, 5, 95, -17, 120, 53, 122, -113, 106, -31, 17, 41, 123, 77, -11, 34, -28, 74, -68, 28, 123, -110, -46, -104, -23, 84, 77, -72, -108, 7, -6, -114, -19, -113, -123, 43, -4, -15};
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
    msg.setTimeStamp(0.134288161687);
    msg.setSource(49340U);
    msg.setSourceEntity(168U);
    msg.setDestination(722U);
    msg.setDestinationEntity(168U);
    msg.plan_id.assign("LNBPGWAIFJNYHYSELWGAZZIDIBAUXPJCOKLCYNVSGBEVCPAPGONDDRRTMFQEWSGBFGPIJYTQZDXNUECTNKUDXUTHRUFGBFAHQBSBWFKBXMTCIDCRMEZLGUDRSNHXQWWOJMUJGUMCQTHYVJHMVSZALPAYVFKJKJEOFOFVDUYCVPLNXONEWOXLKLTAEHQLIUTOYKSZMQMRWYWKXKIOXZMHYKCMISVPJJVDNGABZELABVRRQCEPRFW");
    msg.plan_size = 30170U;
    msg.change_time = 0.172098180926;
    msg.change_sid = 4626U;
    msg.change_sname.assign("JRCFUJPAXYHQLHOCXZRZIXSQEGCUWGIYTCPHNMEEPPCAJQBLZCLTWRGLBSMSEDMPINUHVSAXZIWVSQQFYJUFBZOSWJPOAEUAGTWHTNJGTAFZRJRCIJXDKLBSVKEKROQIKNUAMNYADLKBCFPHNHHMRLCNEKJBSELWXEGNDVDNYGVBVWLIHGZGPBZDMIZFVWSOOBQNFVHXDVWYTTKCKMJYQOSZRXOUXIMKOROMTY");
    const char tmp_msg_0[] = {-28, 90, -14, 43, 122, 116, 22, 26, -61, 49, -106, -115, -82, 79, 23, -106, 15, 0, 30, 66, -9, -89, 117, -25, 109, -2, -38, -96, -63, -28, 40, -50, 49, 7, 65, 12, -127, 8, 19, 0, 99, 119, 2, 105, -127, 39, 104, -63, -79, 2, 88, -4, -63, -100, 86, -4, 82, 119, 42, 63, 69, 53, 104, -101, -104, -84, -4, -120, 18, 58, -65, 45, 67, -28, -90, -31, 117, 64, -58, 0, 6, 75, 63, -93, 10};
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
    msg.setTimeStamp(0.152704462687);
    msg.setSource(35350U);
    msg.setSourceEntity(243U);
    msg.setDestination(47261U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("BBXZJVYFPXDMVYBBNKIKXAFLWCMLNWLINDHMBOHYUQSALNHHABWTJEWONXREMAHJPIOQPMDHSXWJPZVBCHRNVTCUORAZJFOTKMNSEYLDKXAWXCADCVSOENRMHDERFFEUDQFCPGJVZGDAMRZ");
    msg.plan_size = 50133U;
    msg.change_time = 0.912609228697;
    msg.change_sid = 37946U;
    msg.change_sname.assign("NTSVRRXHULJLEXFJMMCVVTITOVGPQBRAINEIWCOWEMMUTSVRFNOEZTEFIYIHJKIXTGQKNYWVGOJRIAUZKEWQUMWSGTIFGRFBFAHWCXGRQOOCJDPBLDYZFANCSKNYECKKZBUYVTAMX");
    const char tmp_msg_0[] = {-31, -83, 4, -92, -10, -46, -90, 38, 93, -28, -19, 60, 117, 100, 38, 18, -25, 51, 55, -3, 81, -5, -114, -59, -59, -6, 109, 115, 46};
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
    msg.setTimeStamp(0.135614209306);
    msg.setSource(9648U);
    msg.setSourceEntity(239U);
    msg.setDestination(11968U);
    msg.setDestinationEntity(9U);
    msg.type = 205U;
    msg.op = 49U;
    msg.request_id = 36556U;
    msg.plan_id.assign("KYJHIDWMUPOGLWXWDFETMPIXHRCILFQGLACQDRIQFATWRGJSMPZXHBNHNBEVMJCHVOAUJSNXJEHNYODHCTRBFFQUYBDPMAJIYCWYOQSKJGNZQKLWVXZSYMTVNDLMKZTREDRGCRXCDANEAZSQVSTHCCBNAPGVGV");
    msg.flags = 60941U;
    IMC::VideoData tmp_msg_0;
    tmp_msg_0.id = 153U;
    tmp_msg_0.width = 11323U;
    tmp_msg_0.height = 21125U;
    tmp_msg_0.widthstep = 11481U;
    tmp_msg_0.channels = 177U;
    tmp_msg_0.depth = 134U;
    tmp_msg_0.finaldata = 202U;
    const char tmp_tmp_msg_0_0[] = {4, 117, 57, 80, -12, 109, 73, 7, -59, -4, -106, 95, 103, -9, -65, -117, -91, 23, 107, -57, 52, 41, 42, 85, 73, 10, -34, -35, 80, -24, 15, 54, 31, 11, -66, -6, -78, -49, -16, 111, -43, 110, 121, -75, 58, 25, 1, -58, 120, -66, -57, -23, 36, 67, -40, -119, -118, 25, 60, -25, 40, 120, 57, 98, -96, -47, -99, -25, -41, 21, 17, 48, 55, 25, 111, 107, -69, 44, 90, 14, 62, 29, 14, -123, 118, -19, -96, -56, 107, 67, 117, -71, -52, -59, 40, 29, 122, -122, 18, -84, 69, -74, 68, -19, -15, -56, -70, 42, 40, 85, -29, -123, -88, 102, -72, -114, -94, -122, 63, -65, -51, 82, 99, -64, 10, 109, -68, -13, -114, -115, 57, -26, -121, -41, 9, -11, -66, -57, 102, 99, 9, 67, 33, 105, -38, 117, 26, -39, 16, -106, 78, 63, 104, 113, -29, -114, 50, -114, -69, -86, -43, 61, -112, 110, 102, -24, -128, 29, 77, -101, -34, 78, 40, -120, 9, -97, 6, 87, -116, -22, 49, 107, 28, 15, -84, 86, -9, 77, -40, 8, -111, -22};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CYEXWBTAECRCQSPTCCQCKGKIFBEIYFHESXUIOSTBAHFRUUKTUXZBHAUZBEXQLKDOBBPWMGFTYXBZZYTNNOGDG");

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
    msg.setTimeStamp(0.697620786284);
    msg.setSource(13101U);
    msg.setSourceEntity(204U);
    msg.setDestination(23204U);
    msg.setDestinationEntity(41U);
    msg.type = 121U;
    msg.op = 105U;
    msg.request_id = 41506U;
    msg.plan_id.assign("DPWVYXMDTXDSPCCAPPIYHBCZPALULMHBEOYQJSJOSHYGDILKTNZRTUSOBIXGHVORFFQUZKBRBGOKGKWHTJEMUZKGEQQWPCLZHKXSSCYVDAQKEPAZMNXOZVUZXEPUTRIWAJQVVDWDBUTLJZMYVQSLXDEEOUFHLNRLIGFKFJJCTGTQOFJHCGEA");
    msg.flags = 6586U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.416970310696;
    tmp_msg_0.lon = 0.097387478296;
    tmp_msg_0.z = 0.577735954401;
    tmp_msg_0.z_units = 110U;
    tmp_msg_0.speed = 0.144715154792;
    tmp_msg_0.speed_units = 211U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.204457501387;
    tmp_tmp_msg_0_0.lon = 0.423128614688;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("WAEASPGKHTKMFVMNLQUALSWAAELPJMYWFCJSFEMXSVIAKTBSXPRMQRFJRCKMFFEIOTDLIZWVLMTUPDODUXEKMBJHGQDXQZY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SVDHLAKRWTEMRBBLPDWJOUHSDJPRIAGOZT");

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
    msg.setTimeStamp(0.208447423757);
    msg.setSource(30050U);
    msg.setSourceEntity(210U);
    msg.setDestination(6281U);
    msg.setDestinationEntity(206U);
    msg.type = 166U;
    msg.op = 100U;
    msg.request_id = 11197U;
    msg.plan_id.assign("ZSYNNJSAOKXPIEHWZNDYAKTAPFVNLRUAIEQDXTBKFUBUCBIAJDOU");
    msg.flags = 5176U;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 47U;
    tmp_msg_0.htime = 0.579131614905;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UBVOFPZTCYQPWNGVZDOYDPJTXBPEVXMREXHFBNPKUWXQKYMSFEDGOKUJQRQOGMTGOACUJSIKNYLUKETAHCSAYLPFJIXYMWHSUCDIBIRZWFEVNSHIDJWVHVOANNIUMOCWBLZAESOABCVKQVNRDFLIEJWTANBKJKRLRHUCISFDZGMYUKJHCGRIXKWZRAQDBMLENZNBXLAURPGHXYLBJWSJTZMFSXDTVQDTCGWOZPZYXME");

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
    msg.setTimeStamp(0.185640801507);
    msg.setSource(26469U);
    msg.setSourceEntity(49U);
    msg.setDestination(19341U);
    msg.setDestinationEntity(199U);
    msg.state = 225U;
    msg.plan_id.assign("UJPFBEXZZQGTROTUDLCISCNENATUHVZXSNST");
    msg.plan_eta = 7401770;
    msg.plan_progress = 0.532903628268;
    msg.man_id.assign("UPNNMMSAHBTALOCNNHSBHPMEQHXPXYKDWZGFNLRAGDQPTAXWHKGBEPDHJSJBVLJXKNVTQGQUZXILOSYCBJQZFTTUHEEKUKYECONMDGULJDEWVYDLLGWSFKERQOPXACCHFTVMZONA");
    msg.man_type = 56649U;
    msg.man_eta = -553389910;
    msg.last_outcome = 176U;

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
    msg.setTimeStamp(0.543881346489);
    msg.setSource(27138U);
    msg.setSourceEntity(42U);
    msg.setDestination(60731U);
    msg.setDestinationEntity(54U);
    msg.state = 145U;
    msg.plan_id.assign("XJIGSZKCLRHDBHKOAWBYEZHJIBGUSWQNPDQERPUOTJHXCGRKMMUPOOCUYLPESWNATITBUQJTWDWYTJZQDTSVWXCKPDIFKOOBXCFIWVMJVEMSFQIQKXVMUPYDRGEZNYUFLYMGKNDLQZUENBABVJFMXVIZKYKLAGTEFSNPOTQHHHSFATVOQWAAMIZEONJXPOVBCLFDLRJFGXRINLSZYRGHRWVKZESXFCNELAMDCWAUQRLJTGBMGRINV");
    msg.plan_eta = -1893099665;
    msg.plan_progress = 0.122536356075;
    msg.man_id.assign("VKCEFOLEIKZYBNCLXHRRCJDKBDJGVVRFNDLFJUMNRLIFNQOXQSHHGXGJJCPKGAQWZMZFDXMCFHZFYZBMAPZAISOLEGEJVSSRPCXUGPBLYBAON");
    msg.man_type = 3173U;
    msg.man_eta = -1563329467;
    msg.last_outcome = 167U;

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
    msg.setTimeStamp(0.430313819271);
    msg.setSource(37316U);
    msg.setSourceEntity(74U);
    msg.setDestination(26787U);
    msg.setDestinationEntity(71U);
    msg.state = 223U;
    msg.plan_id.assign("UTMNPWTISEKWNZKFNELVMFFWZOOCWTIISKWPFYKZEJSTFSUTUPQJVVGQLOGUBBFRXUXFGCXVLQYPVDJRTWDABIVMMJIJMUOQSGXEIWYCJZVRCGHHIONDLWRYDCSZVUQPOGVHKMNNBMFLTAUBDZCHLMOYWAXAJCLQNVQXZCHUBZJESDZKHYEXK");
    msg.plan_eta = -1664774141;
    msg.plan_progress = 0.0028730749678;
    msg.man_id.assign("QJBOQOFHBGDAWINPEXFKEPDQJDVCVEBXUZFMBACFEKYPIFEHK");
    msg.man_type = 39626U;
    msg.man_eta = -948041563;
    msg.last_outcome = 121U;

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
    msg.setTimeStamp(0.0701179096654);
    msg.setSource(34606U);
    msg.setSourceEntity(229U);
    msg.setDestination(8044U);
    msg.setDestinationEntity(176U);
    msg.name.assign("IVYWQNYCGDRYUUVGXICPESQBPQWNBKIGIXRAVOXAYDWSHONJZRUFMQXKPNOSPEBUTNJEKCBCWACTMEBEGRDYFKZTFHCGVZRMTSKIEUSLLHTFMGRBXLPJYCKYRPKTSAKFJQGYFZQOFPMLIDFAUNMWNTQWNPHTVDHCHDOCRRWMQIMUSJNGWZIAJWYGGAFXEAOHLDETZCHF");
    msg.value.assign("OUPUWYFDEJKWEUANQWIAJ");
    msg.type = 179U;
    msg.access = 75U;

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
    msg.setTimeStamp(0.73405857275);
    msg.setSource(54017U);
    msg.setSourceEntity(19U);
    msg.setDestination(52106U);
    msg.setDestinationEntity(216U);
    msg.name.assign("EIYAGITMNHCYPJEDHTAFOUWYOOHBVVQGCRJLHDJYHAPWERZBPOQWYOTXKYTBGPPPJKYUX");
    msg.value.assign("VSSPKOWARYTWCGFWBKCWCREIVUMADJCDEXIDZCLUEWTGVPWNZPITIIOYDJCNOSMSQMEKOCUDJKPQGRLJFTYAPHVXE");
    msg.type = 44U;
    msg.access = 80U;

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
    msg.setTimeStamp(0.580251450846);
    msg.setSource(52581U);
    msg.setSourceEntity(53U);
    msg.setDestination(26548U);
    msg.setDestinationEntity(227U);
    msg.name.assign("FUCZOCOUCOOOSAFXTUNETUTQFZLBDTGWHYUAPXZQMVKYZQSSCDICFMKLHGTFYMNZLHCFNOSVXVMHXYRSXHPOBQWLJQEHDFSNFABGADHTDETDXDIGVQJOAUBHVXPBIWYJMMAQSPLJFBVIAKWUXUJGWHVTPKMG");
    msg.value.assign("XQGEAIVCRALSOKNIYIUENFPFDZWPVZWJDMSOWSISSEOCAIHIEMYFBTYUGSRKFRPOQBXSHHBXLYMEHUBGLNLOWWJMRJAXKSNKAMQTTNGCLQPPRUCWONHZNVJRUXXCADJJUFKYQJQOZUDNVZBRQYIIYLTCGKIDWTPHETXGKFWEWIVXNYDRKRUYJAGHLQMGCGWT");
    msg.type = 100U;
    msg.access = 61U;

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
    msg.setTimeStamp(0.540052863214);
    msg.setSource(45760U);
    msg.setSourceEntity(14U);
    msg.setDestination(19770U);
    msg.setDestinationEntity(130U);
    msg.cmd = 241U;
    msg.op = 96U;
    msg.plan_id.assign("LATQNMGYJGXFSPUKVOPCDFHDOIQBNAZDUHQDWLIOEVLNYNJCFIOLMWICCPGDTTXKFNYVQAYBSGKYTNBSUSHKHQGYVQGRXYDUPJUTHEIAFKSKNIPYMPOABZJMEAXGUEVMWSOMOIILLJLEECPJYGWRBSTMZLPXZLVHCZRSMHHUJTUDUFWXQHFYXTEOQVEAUKGKDRWRCNRRVWQLJBVRPANWZRFDJFNAKOIDZWHFXMQCAZOX");
    msg.params.assign("AZXWYSNCZMHTHZXCMBMFJXVMEQNXTFRTQXTWRIEYLBLFPOHEECUWMIQOPYBVKNWVTPNLVUHWSJZSDIUGBNVHAIWLGCLRHICAMIUZJKPTJFDPZQPZAYBOGDOPJAGQMAMKFBDYBHZXQFHPSYAUBEDELTYGGDRDAIXYGQYTEXJTMVLQAFZJKODWLEWHWVXRNBPOJXGRULIFOGRMEGUSSQCRFQKYUO");

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
    msg.setTimeStamp(0.0464128527601);
    msg.setSource(33839U);
    msg.setSourceEntity(204U);
    msg.setDestination(53004U);
    msg.setDestinationEntity(231U);
    msg.cmd = 21U;
    msg.op = 107U;
    msg.plan_id.assign("KTWSQTOLDICSGQEHUILMYLYFTAYQOUAJJOMGMWKJBYOHBOLABCNPRVPKOKXYSTNHKLFFLASDTOPCCVIAEZRIXISD");
    msg.params.assign("UIPPIEURBHSBFDHWHKEHDEFNXDXHYTPCKVGLFZTUIAUSNGMIXLTSQGMZJWORKPLICFJAHVIOGLGC");

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
    msg.setTimeStamp(0.691954016653);
    msg.setSource(24093U);
    msg.setSourceEntity(203U);
    msg.setDestination(46409U);
    msg.setDestinationEntity(69U);
    msg.cmd = 95U;
    msg.op = 77U;
    msg.plan_id.assign("OGKZLBLKALUXGMZVPJGKNJRGEQFAPEZQMVIXBSCCWCHZGKNRFUTIUNZKDKIVKOHPGHQMWBFABNRLLTVTHEZVTT");
    msg.params.assign("FTKEWMUYRAFQTPHVTROUWIXBOTZJICHLCASLWJONRSDHFXROUKSUDBKUFPKFITPMALSIEIBDYOKREYVZISZYXDVHGCWWSHTEGYNTFVOUISQLZKTZCUNCEXNMHZZVLQGPQLRSYOJNQINEDRLOQPFUEYCFDJGVPWQKCVMMHJGRZOEENRYJJXMBAKCXWBQWHIGPOCZXSABXPBIAGDQLMDUGMMTSJYFXWMN");

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
    msg.setTimeStamp(0.939104345415);
    msg.setSource(33952U);
    msg.setSourceEntity(127U);
    msg.setDestination(2261U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.580193163899;
    msg.lon = 0.474998907042;
    msg.depth = 0.339907969595;
    msg.roll = 0.640119462822;
    msg.pitch = 0.571590064327;
    msg.yaw = 0.53646167762;
    msg.rcp_time = 0.871422618714;
    msg.sid.assign("YHJNNGIWJULQRZLJIIBQEBDAEHPYPMSZHTEPIABFSLYFEFVHWBMUSMDMDCCERHZGHAARPPKMNBEKWZXVUGFSUFOBOQMCWGDRVFLQYGKEXWPWXWDPNCVQXYFQZBSCWXRGRORLISTOJLIXKFBTKMMNTJYZSCYXG");
    msg.s_type = 45U;

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
    msg.setTimeStamp(0.481634969265);
    msg.setSource(38804U);
    msg.setSourceEntity(240U);
    msg.setDestination(53142U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.0106327660292;
    msg.lon = 0.0321609529155;
    msg.depth = 0.466427192011;
    msg.roll = 0.650242476272;
    msg.pitch = 0.245255315549;
    msg.yaw = 0.316667049428;
    msg.rcp_time = 0.582966209424;
    msg.sid.assign("QZRITXAGXZPDLKYNZSBFBIFWOCUDNBRFNRCORMTNSZOXVZORMQHZPNUHZULPDWGGXVEWLADCVGMDKHOYUNGFQTOHDCFXFJVMIHZQGYYVJLEGCATSKMANVBVWIPFCFEEFSPTNUALKKSPJRUWCUEBBLXJTRHEBGXWYWYQSYEATSKOWMSNQGRLUQYGZOHOMWMBZUBIUKAPYVVMSETJHCJPIHQJOXKLDALDEDJXEXQSRJCCWRFPKPBATJ");
    msg.s_type = 186U;

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
    msg.setTimeStamp(0.331436893605);
    msg.setSource(19070U);
    msg.setSourceEntity(98U);
    msg.setDestination(3760U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.141999558114;
    msg.lon = 0.994220219353;
    msg.depth = 0.855173467156;
    msg.roll = 0.67440084376;
    msg.pitch = 0.987003398566;
    msg.yaw = 0.327948988942;
    msg.rcp_time = 0.030393227519;
    msg.sid.assign("OXEFMVAZBHXEGPRLEHPNTQFXKOCDTCOSZHLYVJLVIDSGEICNYHQKTKGKESNTDDSMOAPBVFUPBMUWLKUPTOTQXGCACXNFDKJZJXRKRPHCCVZCLLRWRVFSRRBALDENMJJBXYMBHGIYGWKTAEZLDNAMFWMSGUHUBFPMHIBPOQOWOEUNGCWKAVZZYWXAALDHZRYURMSTJITZW");
    msg.s_type = 27U;

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
    msg.setTimeStamp(0.296652109719);
    msg.setSource(17239U);
    msg.setSourceEntity(110U);
    msg.setDestination(48683U);
    msg.setDestinationEntity(197U);
    msg.id.assign("XPYLDQUZIGXJSMSDWSIXTKGNGURWDLHBSBQFOSYZAHTIKBEZQEZUNDVEUFJLMZFQAWZTXQCJAOUOCFHYBHWLJMSPHVPTUGLJPMVXIQCJBPNIVYMULCNVWHXVKDPYTHFZOXDGWCUJFMRD");
    msg.sensor_class.assign("NCFLJKEIPXFJGZBZWJJWGSQVRQJOFCVKSVNDTAHCAYY");
    msg.lat = 0.187665751207;
    msg.lon = 0.898099755684;
    msg.alt = 0.223019281996;
    msg.heading = 0.820232334214;
    msg.data.assign("FEBGKTAJXLOPUHVLRZHAXEIUBYUOSXPPHEMQBTDHKFQXIWRGRRMIFEJJ");

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
    msg.setTimeStamp(0.303170141005);
    msg.setSource(2450U);
    msg.setSourceEntity(86U);
    msg.setDestination(6424U);
    msg.setDestinationEntity(230U);
    msg.id.assign("WARKPKOPMLMEYCWFUNIXQJVOHQCFMOLJBRGHFTKAPSESEWABGXNTUDBYFNLXDVAIBRJRUDOEQFEGLGBEL");
    msg.sensor_class.assign("TDJJSBSHQUKVYSOCCJCWHUCXMPNFZJPIOOEGCFLEOPZZAALJGVDQZQPSYXZKBNGTCOMSTXFCQRHPXNDKHZNBTUBGFUHKSEUAYGKQGPLGSNQZEPRAIJIRRBHHVSLYFUWQPNZVIIXVLBNUCAFWEAJJDWVNGKVHDVQMHITIIMXEYYRJMHRZOLETBTDWPXIGLGCVRMLUVYDWLWIDOMWXTM");
    msg.lat = 0.651592936259;
    msg.lon = 0.475662502831;
    msg.alt = 0.303223932284;
    msg.heading = 0.00122905620714;
    msg.data.assign("UNUXRLVHCQIPRDVABYVNOAWBLBSWIYUTDDKWEJCGHQNALKBDLNYZEXXZPFQOXRFWFTISLFXTAKKHBJPYIGBOSURINJAKLYFCMWEWMGAIHZHIFJYQZPHDVMSQXNTDZOGROJOPPAGNATNXSRBSEQLFYRVRLUMOLPWMDZMTIZFXCWUBHWKYXOHFEGGCGMELIGJSDUETJOHSUWVEDVTKUJENIPAJQKZQQRBOMETFUQJCGZ");

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
    msg.setTimeStamp(0.728706474102);
    msg.setSource(40889U);
    msg.setSourceEntity(195U);
    msg.setDestination(13763U);
    msg.setDestinationEntity(176U);
    msg.id.assign("CIYAUXQQTNMLOKSWHPVRFKHRRUMTCMFGLXKEXARFEZLPBMVIOMYJYYJWWSLJXZSSAFYUWPXDWQNMADGEPOXIQLNBIGRRTVQULZQDTZHUABCTXNOGUYTHFO");
    msg.sensor_class.assign("ZJCBXSEULUYCXXGIXWQCMZ");
    msg.lat = 0.19828011342;
    msg.lon = 0.179839374498;
    msg.alt = 0.114968480263;
    msg.heading = 0.909283825126;
    msg.data.assign("VGXNHVVEQKBHCMULMZJMHEAEFTLCBEECFIWAPMMEMKQYJDAOPUXZGTNUMKCRTUPIJZSAJHTTXXLHZOFKCFSGPEWZRGCZICPDJLVVHZQYXOOKXIBAYVAIRSNBSAVFNAUZLWIGBUWNTKLUQUGRHRWQIORESWKMCOBKXJDFFVRBYZXTPUMNSXVKIYYQSCPGOBDSYWBPADJOJGITWDRFLQQJHFEOCRUQLYZIDTDHWAXNDNJTYSRMSVOENGLPDFHBKY");

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
    msg.setTimeStamp(0.228769270282);
    msg.setSource(52734U);
    msg.setSourceEntity(67U);
    msg.setDestination(31623U);
    msg.setDestinationEntity(23U);
    msg.id.assign("RPXTROYVEZSTALMZPWFIJBDOJYPMHINANKQHODLFNLEPDRSTOSYQUONJWUNMCWYAUUEMJJWYKHZQKNIANMZHVNKMLIRKRQTFCCXOETDQTCFDUKBHSDXDIMSHWHNZPKJTFCETDVUQIBGXGCWGZAAFXEVSWULREAAXQMDFATNYJPGGIVXASZDVKVPLTBJVOGRVKGBZOFEFUKBCIXJYRCLBUC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FGVXZPRSJOBVKTAOX");
    tmp_msg_0.feature_type = 242U;
    tmp_msg_0.rgb_red = 51U;
    tmp_msg_0.rgb_green = 52U;
    tmp_msg_0.rgb_blue = 199U;
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
    msg.setTimeStamp(0.0870896704567);
    msg.setSource(37105U);
    msg.setSourceEntity(100U);
    msg.setDestination(43124U);
    msg.setDestinationEntity(228U);
    msg.id.assign("XRTLTGYFVSDWZRHTZBXJPODERLUOMRCRUGKXMGAEVBF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MSEWLKNIGGCVWCRLUZZTRXTBOMIYQVAOXPHHZSQCABFRZMVRAQQPVLZVTGWBOVSAUPWSEESDMSWOEYVKLLZEPWTGFIBOAFTSMHUAFUGXDFYDAXRXNUOYCYHDNNPOXIEURTTWYEDHLRQZFGJBHHYJJHZWVJWSKKBXDXKAQIDIFOREGXOPYMKHPSLBRAYMFUQKNTGZCQNGCUNPBMFTCWJEKALBJOVUGFQDMBZYCNKPTIKVLJIQDDCSJ");
    tmp_msg_0.feature_type = 48U;
    tmp_msg_0.rgb_red = 2U;
    tmp_msg_0.rgb_green = 208U;
    tmp_msg_0.rgb_blue = 201U;
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
    msg.setTimeStamp(0.0785099534233);
    msg.setSource(96U);
    msg.setSourceEntity(185U);
    msg.setDestination(24050U);
    msg.setDestinationEntity(176U);
    msg.id.assign("ANBFNQMVROFVDQGIZHQJAMUDCNISCHTVKZULTDWNVYMFNIMJJPXQPJKFYRKOHZHLCHIVGXBQKZTXJMOWMYVRTZAILQDERRZSPELYUTCSBCGYZLWYPMVHNMDGELGQFEHAKWEDZIPXPJNUJOVXSGAUFHEYUUGCEAFAPWMEODAYSWNCRDQBTIVTKPNOGLSTYKQXPRSWIVCSZNABILFWTABSOLEZTBYFBOXPXHXKGFCXUL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WDZHWOMHSJPDKUKVAXGALDMBAYRJTEVHFLVFVO");
    tmp_msg_0.feature_type = 138U;
    tmp_msg_0.rgb_red = 223U;
    tmp_msg_0.rgb_green = 166U;
    tmp_msg_0.rgb_blue = 185U;
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
    msg.setTimeStamp(0.632994491796);
    msg.setSource(29312U);
    msg.setSourceEntity(210U);
    msg.setDestination(30611U);
    msg.setDestinationEntity(208U);
    msg.id.assign("OECRRRXDLUCACALODMOXPPLGHQAWBQSBQCSLVVUFR");
    msg.feature_type = 208U;
    msg.rgb_red = 6U;
    msg.rgb_green = 178U;
    msg.rgb_blue = 186U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.904293693982;
    tmp_msg_0.lon = 0.343510397347;
    tmp_msg_0.alt = 0.474840386802;
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
    msg.setTimeStamp(0.413033078283);
    msg.setSource(20439U);
    msg.setSourceEntity(157U);
    msg.setDestination(2570U);
    msg.setDestinationEntity(207U);
    msg.id.assign("LNFIHEKPBENGXHLSCZTDYMOMNXSZSGOQLVHWBSNSZEXITZCCNAVOWQEWPWUPENNFVEWGNGITUFKYPVRQLUCVBIWIQKJPMLJQPGXKOETTRGDXYDFUPLQMCPNHSAFVLQZPCXOJKK");
    msg.feature_type = 128U;
    msg.rgb_red = 150U;
    msg.rgb_green = 15U;
    msg.rgb_blue = 152U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.200058188287;
    tmp_msg_0.lon = 0.419955218923;
    tmp_msg_0.alt = 0.11071034557;
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
    msg.setTimeStamp(0.268884945199);
    msg.setSource(64556U);
    msg.setSourceEntity(190U);
    msg.setDestination(11125U);
    msg.setDestinationEntity(27U);
    msg.id.assign("EMXBYQJUJWBRTFQNOGNKWJHXVSDAAIBZVSKJNOOPADDSAMKZFHKVQRYGRYVPWCNOMMYVGITKQ");
    msg.feature_type = 7U;
    msg.rgb_red = 221U;
    msg.rgb_green = 123U;
    msg.rgb_blue = 44U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.890884050358;
    tmp_msg_0.lon = 0.963307402745;
    tmp_msg_0.alt = 0.778464936584;
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
    msg.setTimeStamp(0.0509656100925);
    msg.setSource(8641U);
    msg.setSourceEntity(154U);
    msg.setDestination(6655U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.0409879350235;
    msg.lon = 0.647854401743;
    msg.alt = 0.882640702322;

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
    msg.setTimeStamp(0.155607056395);
    msg.setSource(3693U);
    msg.setSourceEntity(244U);
    msg.setDestination(8419U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.237494374696;
    msg.lon = 0.691003838997;
    msg.alt = 0.828335148695;

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
    msg.setTimeStamp(0.0228995277355);
    msg.setSource(39500U);
    msg.setSourceEntity(17U);
    msg.setDestination(58674U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.287086401875;
    msg.lon = 0.305349624717;
    msg.alt = 0.948249657952;

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
    msg.setTimeStamp(0.807968131813);
    msg.setSource(53933U);
    msg.setSourceEntity(111U);
    msg.setDestination(20554U);
    msg.setDestinationEntity(114U);
    msg.type = 205U;
    msg.id.assign("VTDTBYOZVJPGWAQYZEKASSONGOJHGTWXRWQRPMJVNONYGQKZEAKVMRRBHXJDAVMQYUJVHMRNQAYZQTWCXFUDXROPSMLLTHQWHQGKXNCZMICPIVRJVRNGKFLAFDUIOZVBAEMJLHKGUAFBYEXOBFZNZHFDUEOSKKSBRXYGMSUCLDWWPDCPUHPFWBOSCXCNEYTAGTOM");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 60U;
    tmp_msg_0.system.assign("DQOAUEYCZOCZSHBZECKFRGUDJBMQHQYWCHFNDTRHUOICNVUJMKVPXWYSUQUOMZNXILBMEHYPJWPJCGONZOPGKYQINQLFYFWNQHEGCVVPDGBRKLGONKAUSWYRJAH");
    tmp_msg_0.range = 0.764515013796;
    IMC::LogBookControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.command = 153U;
    tmp_tmp_msg_0_0.htime = 0.549454197351;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.834846215771);
    msg.setSource(11032U);
    msg.setSourceEntity(117U);
    msg.setDestination(42456U);
    msg.setDestinationEntity(161U);
    msg.type = 31U;
    msg.id.assign("HYKDRVTERLVOCQMHEUZSCBUWATYHORIMUSZA");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.0773963984975;
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
    msg.setTimeStamp(0.670892020178);
    msg.setSource(64066U);
    msg.setSourceEntity(14U);
    msg.setDestination(21770U);
    msg.setDestinationEntity(146U);
    msg.type = 242U;
    msg.id.assign("FBJMALIJGFKLMDISOWYXGWUMFCEUAIOHKXMRCYNTZBQLJOUVWUJSRSZFIWUYFOEIKXEMWUCBNKXOVDZWGBPVEQPLORNVBCZIMFPFENHBYHPFAHXVKDGPRMZCOSPRQLAQOGMTDDNDVQ");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("TCNETSKYUMGUQLNGWJLVJVOMYYTBFWB");
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
    msg.setTimeStamp(0.803659340292);
    msg.setSource(23794U);
    msg.setSourceEntity(101U);
    msg.setDestination(17961U);
    msg.setDestinationEntity(110U);
    msg.localname.assign("KSHRQAKZFXJVSVLXVWMKIQCFQGMAWWDAUSBANIKUQYPDYBVSAHWCULARHWQHODEJPLRDKFDVTIHYPIYFZHQVWZXBSMDXDMXALVXFBYJOFCSOJTINCUECBRBOSSFSTZZRTONRQLUVPUXKRQFENUOPG");

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
    msg.setTimeStamp(0.180911844829);
    msg.setSource(47667U);
    msg.setSourceEntity(85U);
    msg.setDestination(8452U);
    msg.setDestinationEntity(202U);
    msg.localname.assign("XPLQGVIELAQUPJUGDBWDXUZICIDKRKACSGLKYWHMQZN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FDWYJSZDWIVKWPWEVPADMTZCBIXYCLZOSIBSRNTF");
    tmp_msg_0.sys_type = 93U;
    tmp_msg_0.owner = 61796U;
    tmp_msg_0.lat = 0.162577181702;
    tmp_msg_0.lon = 0.226055429369;
    tmp_msg_0.height = 0.0720491620362;
    tmp_msg_0.services.assign("JFPCIDLONQLAIZZJCMXBSAUGYGP");
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
    msg.setTimeStamp(0.619108852292);
    msg.setSource(7572U);
    msg.setSourceEntity(101U);
    msg.setDestination(56891U);
    msg.setDestinationEntity(146U);
    msg.localname.assign("FDLMRZMWTZBZYCYKLBNROUTLVWRLBEXFIDIVZDLXOSAGVPHVFYPOMPSHSXBXZLCGOPATGVVQNTPUOGNIKSJWAWKATDFQCMDNJQQENEQNPGTHKDKWWYELAWHCNXHMKFUEPQUKZOMOJYZBCQCIBGXIUGQFTXIFHKGZGTRHBJMRUJUVNMRNMJYJFWSOCREVFEWSIPIJKOENUCQDP");

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
    msg.setTimeStamp(0.98070560091);
    msg.setSource(24003U);
    msg.setSourceEntity(186U);
    msg.setDestination(53985U);
    msg.setDestinationEntity(100U);
    msg.timeline.assign("QGZSPWIMDJIVWGPASKHMIRBIEPGCRKUNWDFQWMVHGQBAMQWLLLRRZOCCUPZMTFCXYXGHEASIELTRRJFYQTUFFUXNJEVGVDCMJQFNOQIEDUBOPYYBZKSOHDFWLOVBATAITFOMGUWTRDYCJXEALZINOJZBHWNPDAGBUNHXTPLCYWELKSNRHTBXJXKOKQNDUYPLDKSVN");
    msg.predicate.assign("NPVZTHRSBTEUPLZHFOCEFRUNQMDSAPRJOGCYCXMFBDTMUCXZIMWQLYYWUHTAGUBXZBUDPHRRLSISCZOIVOAR");
    msg.attributes.assign("GNCXUESILCKMQFFNJLXTTYHRROGKKGLSMRHSVAQNHMVYPTVNPVFOREOVRGWLIOVUPNEINWGIRUUCQVUUQQCZVCYMPFZIFJJBMXSCQQFREILGBZZQPTILBQRXGYPXMTNADJZXGHUSR");

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
    msg.setTimeStamp(0.850075648698);
    msg.setSource(64622U);
    msg.setSourceEntity(192U);
    msg.setDestination(30029U);
    msg.setDestinationEntity(127U);
    msg.timeline.assign("PFJFDBYGCMKRACWJYFVCFFAUWQKHLJNPBFZRBUOUVBKUOQJLCSOTMOJPGXUEIDRLNVEKAQJEDKWZPITRQHTNQFACOAMUXKPNUZECXPIRWXYEGBDICDMQGYHVABMYJBIJLUJOBXAXMIEQNDDFYWYSDPHSOPGHBEHSKFSDEHRRSWTZMNYCZAMKWZMQKONXNLYVZVRTAKQGZYVXXZUFIMUHLSSDLNRHQPOIPGTICRESLOXTVINLLAJTHVWB");
    msg.predicate.assign("PHWZCCVLXDVDGNEQMFQZKUWASIHBFFBAGTDZRXMIHALNJCGBDEOMYHKSJRBONYWDVHG");
    msg.attributes.assign("ETCEBYFZKYIJAXDQHBVDXYTRCZODIJCLPKJGGBJHCFDUDNXAUWKZWSAJBWQYPHGWQQSUGYTCFGIXAMXJCMLEGBANFVVRMCELEALMVBSOSJORTOLYHOIGIWZMUMVFKLQXSHNGYWSLRZNQWHDOATELGKVYBJTFXWOMGZIPNDTMX");

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
    msg.setTimeStamp(0.364152598604);
    msg.setSource(60938U);
    msg.setSourceEntity(173U);
    msg.setDestination(41624U);
    msg.setDestinationEntity(131U);
    msg.timeline.assign("ZKVKRENECLYVXRNUQFABBOG");
    msg.predicate.assign("XZCUTWXCINVMZZCHKNHBLAEACHMDCPSGGGCFJAOODOOEVMBXDESRAYUQAVLVIUJNJYTGPVEOMRCXKJBGZFUQFJIKLNNYZSNZOFNUMWURADHSEWKRYRYHXAKLVDSPDZXEISRWKTTUABRGHXPTGEHLBNJCKVKFFMQTPJLHKQBXHIPFFIQTOUJGYABYI");
    msg.attributes.assign("MYLATFQZVCLLJPJSFHSTGXUJFXSSKUFJNAKFSQPWAFSOGNRHQTOFOSZNOTKUNYVGRXMRYMLJUQHZXRQBWMCCJHZAGVTPLTXZIZPZGEMDWGGNUABAYVBUAIKDXCDDKXOZANWYJSISLDTQNEQRJASDFGADWXLVUQJEYIVMEWEBVINENXERWOBWCJUHPFRETOWCMRBTLVPVCCQKDPFYKYKCOPGDZKIUEPL");

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
    msg.setTimeStamp(0.741799856876);
    msg.setSource(8441U);
    msg.setSourceEntity(244U);
    msg.setDestination(31253U);
    msg.setDestinationEntity(199U);
    msg.command = 87U;
    msg.goal_id.assign("CCBKUFQHYIMMDSFGHVGVJASMDPSZZYRRDBCWRXGMNEUQWWATFUGMZNHQSJEIWAUVPTHBGDPCPXCEZJBLCJZPTDSLGABIRSWBYETBJNSFLXLGDVKXOKWMEMBZEVOHNJEJMTELMPPUNIKIA");
    msg.goal_xml.assign("GSSODEGAOFEOLQFNHNMRTAQWPSYKLBWORGLIGIJPRJALDNPUURNHNUJLHBECWUBMTFMYZSTLDEQZHYZYYIEMRKWDCVVPFOGPTIHNKXRAAZAMFDQDRAZOQHFEWJVGGYUDODJKUMWAIYVSQCSKKGFHFVCMLHGOSFBUPACTTFLVUJPBBNGBULWSEIOZRSTKN");

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
    msg.setTimeStamp(0.360775187703);
    msg.setSource(62141U);
    msg.setSourceEntity(165U);
    msg.setDestination(47849U);
    msg.setDestinationEntity(106U);
    msg.command = 228U;
    msg.goal_id.assign("VITCPVKIRLZIWTKORXRAGWQMQSDRPZTLTDABVGIFFGDJSTJLGFGCTQQXOCAHJXGIVIURUTSKSBXODVNUYBLPYWYIUXQWNPVDIFMHFXXUONJUDCJZIVSCWFLDLXKPEKEBENQAMPLYROAFNMVEPAZKLOBNQAETMQEMORCRZPSAHHNDBYWMHZKUMNKJNNOZVEEOWSTCPGHJIQXYKUQKH");
    msg.goal_xml.assign("JPUOFBPZCPWBQDJUYSTNOSZFEMVKWETDFVHXQNOATOCXCFMVYBWOUBYMYXUDGBFTXKSQWJDLFASAMKQAZWECGAXNHSBOZVVUSTKWXMRPGUHKLHUHBYRCAVHXNXGGRKCPSPGMOKQZEETITLVYCUZZIQBIIFDAIMZEYDRKIUHJCVWQZDFIKWXFAY");

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
    msg.setTimeStamp(0.9145750509);
    msg.setSource(19940U);
    msg.setSourceEntity(65U);
    msg.setDestination(46135U);
    msg.setDestinationEntity(38U);
    msg.command = 152U;
    msg.goal_id.assign("NHNPXZTCQJYGIWQAAKRDIWRXBXDJCBTYVYIPHALIUD");
    msg.goal_xml.assign("BJUVALHTYIEDWVLUQVRRGECTKASXWAKGOIBKKDWJJZYCZPVWQFXVQYUURJQHJAMHIFEFLMRJCZTQSSFDXXFYNTAXWD");

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
    msg.setTimeStamp(0.129518913611);
    msg.setSource(55903U);
    msg.setSourceEntity(227U);
    msg.setDestination(611U);
    msg.setDestinationEntity(233U);
    msg.id = 179U;
    msg.width = 11043U;
    msg.height = 26049U;
    msg.widthstep = 40367U;
    msg.channels = 214U;
    msg.depth = 199U;
    msg.finaldata = 243U;
    const char tmp_msg_0[] = {59, -68, -17, -26, -109, -78, 21, 22, 93, 0, -18, -72, 112, 114, -41, -76, -34, -91, 96, 88, -60, 22, -11, -25, -62, 41, -125, -4, 29, 58, 97, 59, 41, -112, -87, -107, 69, 50, -29, -13, 6, 108, -74, -89, 101, -76, -82, 62, -114, 93, 55, -66, 28, -117, -119, 113, 72, 4, 114};
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
    msg.setTimeStamp(0.656217038129);
    msg.setSource(23311U);
    msg.setSourceEntity(51U);
    msg.setDestination(3189U);
    msg.setDestinationEntity(219U);
    msg.id = 93U;
    msg.width = 27789U;
    msg.height = 59072U;
    msg.widthstep = 32363U;
    msg.channels = 59U;
    msg.depth = 150U;
    msg.finaldata = 176U;
    const char tmp_msg_0[] = {-109, 118, -14, -45, -11, 5, -56, 85, 56, -53, -23, 114, 75, -63, -84, 97, -67, -50, -113, 81, -98, 82, 94, 41, -14, -113, 112, 41, 84, 104, 49, -72, -36, 112, 26, -83, -36, -21, 104, 106, -95, 85, -102, -1, 53, 73, -27, -77, -90, 104, 96, -22, -59, -11, -60, 100, 37, 79, 17, 76, -22, -42, 33, -20, 50, 73, -21, 39, 19, 111, 52, -18, 25, 73, -7, -82, 18, -36, -30, 118, 15, 34, -100, -113, 106, -102, -79, 61, 69, -93, -28, -79, -59, -68, 69, -45, 34, -57, -83, -105, -113, 15, -119, -28, 21, -96, 1, -69, -10, 0, 113, -78, 71, -35, -28, -14, 97, 77, 112, 108, -40, 102, -98, 69, 55, 120, 36, 97, 3, -8, 83, 8, -23, 123, 18, -114, 109, 96, -32, -18, 21, -15, 3, 43, 39, -88, 82, -128, -41, 103, 28, -65, 45, -32, 6, 4, -65, -3, 55, -128, 68, -101, -95, 112, -29, 78, -120, 32, -122, 40, 54, 83, 60, 51, 66, 107, -44, -79, -32, -123, -63, 60, -27, 53, -2, 119, 14, -123, 38, -64, 122, -83, 70, 124, -56, -1, 53, 59, -108, -61, -13, -33, -46, -53, 123, 80, -79, 14, -121, -13, 62, 33, 26, -54, 84, 123, -66, 84, -19, -72, -65, 6, 95, 65, 86, 7, -2, 10, 53, -17, -51, 8, 63, -38, -78, -118, 51, -70, 45, 126, 67, -32, 62};
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
    msg.setTimeStamp(0.676704983994);
    msg.setSource(34967U);
    msg.setSourceEntity(203U);
    msg.setDestination(51486U);
    msg.setDestinationEntity(157U);
    msg.id = 157U;
    msg.width = 49262U;
    msg.height = 2907U;
    msg.widthstep = 45619U;
    msg.channels = 240U;
    msg.depth = 35U;
    msg.finaldata = 166U;
    const char tmp_msg_0[] = {-124, 38, -68, 100, 58, 98, -5, 99, 80, 99, 73, 82, 73, -44, -34, -41, 43, 87, 117, 24, -14, -127, -119, 43, -22, 71, 52, -125, 49, 43, 31, -82, -98, 106, 51, -112, 9, -125, 37, -98, -9, 108, -36, 10, -117, -128, 72, -81, -79, 118, -125, -100, -37, -26, 120, 11, 121, -8, -29, -8, 77, -82, -45, -28, -75, 41, -10, -10};
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
    msg.setTimeStamp(0.354754431203);
    msg.setSource(14487U);
    msg.setSourceEntity(220U);
    msg.setDestination(15646U);
    msg.setDestinationEntity(145U);
    msg.width = 31882U;
    msg.height = 11079U;
    msg.channels = 254U;
    msg.depth = 236U;
    const char tmp_msg_0[] = {-111, -65, -2, -56, -19, -86, 96, -60, -98, -127, -41, 55, 116, 83, -93, -75, 102, -105, -49, 91, -73, -113, 79, -48, 74, 88, 16, 96, 61, -90, -118, -51, -109, 104, 69, -25, -115, 10, -86, 103, -125, -41, -7, -10, 109, 49, 54, 54, -113, 37, 72, -23, -88, -100, -60, -49, 18, -110, 4, 101, 22, 29, 60, -4, 37, 77, 46, -125, -118, 103, -10, 126, 97, 55, 30, 126, 63, -23, 108, -97, 3, -111, 13, -123, 58, 24, 20, -67, -52, -46, -44, 67, 10, -115, 61, -128, 112, -63, 89, -110, -91, 59, -27, 79, 31, 20, 97, 104, -92, -124, 105, -59, 66, 25, 79, -115, -85, 82, -73, -113, 27, -18, -57, -19, 36, 57, 77, -4, -128, -110, 42, 26, -60, 43, 35, -84, -24, -29, 69, -106, 47, -105, -96, -97, 95, 10, -126, 93, 24, -64, 120, 9, 94, 24, 115, 106, -57, -3, -34, -76, -55, 48, 119, -101, -62, 68, 23, 126, -12, 73, -113, -54, -19, -94, 16, -29, 34, 80, 86, 118, 70, -30, -32, -22, -34, -38, -27, -63, -125, -70, 26, -102, -19, -106, -66, -121, 44, -21, -123, -58, 20, -127, 126, -41, -87, -60, -84, 107, -29, -50, 44, 13, 112, 74, -107, 41, 62, 103, 49, 76, 51, -34, 34, -128, -100, -86, 74, 84, -28, -82, -12, 74, -102, 105, 117, 104, -65, 110, 28, 74, -48, -121, 126};
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
    msg.setTimeStamp(0.516486899377);
    msg.setSource(53994U);
    msg.setSourceEntity(179U);
    msg.setDestination(46797U);
    msg.setDestinationEntity(254U);
    msg.width = 35874U;
    msg.height = 40690U;
    msg.channels = 113U;
    msg.depth = 225U;
    const char tmp_msg_0[] = {74, 125, 31, 9, -104, 55, 56, -60, -121, 126, 41, -89, -66, -69, -35, 14, -34, -85, -59, -1, -81, 120, 85, 113, 62, 36, 111, 29, 90, -37, 105, 3, 78, 56, -46, 23, -94, 22, 3, -10, 86, 80, -119, -50, -85, -102, 124, -90, 99, 64, -47, -39, 58, 29, 95, 111, -107, -48, -55, -44, 84, 117, 105, -116, -46, -109, 72, 117, 67, -37, 81, 83, -109, -7, 103, 58, -63, 21, -23, 57, -106, 42, 77, -112, 55, 45, -1, -47, 75, -97, -87, 29, -122, -37, 41, 122, -117, -5, -3, 80, -88, 93, -127, -80, 71, -2, 94, -9, 69};
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
    msg.setTimeStamp(0.132646983189);
    msg.setSource(63019U);
    msg.setSourceEntity(221U);
    msg.setDestination(14647U);
    msg.setDestinationEntity(191U);
    msg.width = 38994U;
    msg.height = 44425U;
    msg.channels = 191U;
    msg.depth = 23U;
    const char tmp_msg_0[] = {38, 34, -3, 123, 37, 99, -88, -45, -58, -41, -23, -76, 49, 29, 59, -122, 57, 45, 93, 20, 86, -73, 123, 81, 48, -46, -81, -43, 57, 124, -104, 113, 50, -61, -82, 28, 24, -63, 50, -26, 94, 16, -126, -46, -67, -101, -112, -73, -40, -103, 84, 24, 15, -77, 13, 90, -65, 29, -44, -121, 94, 95, 69, -41, 109, 119, 78, 19, -17, 96, -60, 13, 13, -67, -99, 101, 101, -19, -23, 94, -5, -76, 56, -41, -114, -84, -22, 7, -14, 52, -22, 8, 125, 71, 12, 75, -24, -52, 124, -1, 9, -56, 49, -61, 90, -6, 37, 43, 27, 53, -39, 88, 2, 119, 118, 48, -94, -109, -59, -76, 47, 18, 87, 82, -57, -34, -14, 19, -33, -116, -69, -36, -77, -87, 98, 102, -102, -96, -46, 48, 117, -114, -14, -23, -66, -54, 64, 7, -28, 72, 107, 95, 107, 109, -11, 94, -24, 29, -68, 39, 15, -64, -102, -94, -34, 44, 32, -55, -110, -121, 122, -15, -54, 14, 31, 4, -71, -2, 71, 55, -81, 64, 13, -110, -120, 8, 44, -34};
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
    msg.setTimeStamp(0.0922104099282);
    msg.setSource(29239U);
    msg.setSourceEntity(46U);
    msg.setDestination(34175U);
    msg.setDestinationEntity(4U);
    msg.frameid = 141U;
    const char tmp_msg_0[] = {-41, 126, 124, 80, -67, -90, 15, -11, -38, -16, -31, -90, -89, -48, -52, -106, 110, -15, 117, -42, 96, 63, 40, -104, -67, -116, 63, 61, 118, -110, 74, -54, 126, 59, 101, -99, 111, -21, -26, 108, 120, -98, 86, -120, -94, -19, 30, -10, 69, -27, -13, -39, -72, -34, -9, 10, -86, 87, -43, 69, 59, 114, -91, -34, -105, 126, -102, 94, 32, 124, 71, 88, -115, 126, 54, -84, -33, -46, 87, -37, -66, -65, -118, 38, -117, 21, 63, 63, -88, -91, 40, -53, 104, 124, 55, -15, 122, -84, 29, -106, -107, 114, -12, 62, -121, -105, -84, -106, 84, -117, 10, 29, 36, 26, -110, 13, 86, 120, -72, -57, 46, 84, -56, -4, 118, -28, 42, 3, -88, 43, -73, -118, 93, -120, 42, -18, -62};
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
    msg.setTimeStamp(0.139726798254);
    msg.setSource(59617U);
    msg.setSourceEntity(155U);
    msg.setDestination(17768U);
    msg.setDestinationEntity(213U);
    msg.frameid = 134U;
    const char tmp_msg_0[] = {-56, -56, 94, -29, 23, -89, 98, 16, -59, -51, -95, 25, 5, 85, -25, -95, 67, -29, 19, -70, 6, 91, 69, 1, 92, -85, 65, 21, 94, -122, -47, -7, 67, 47, 15, -16, 100, 6, -21, 75, 102, -111, -8, -84, 1, -87, -51, 76, 101, -113, -91, -24, -1, -65, -128, 120, 108, 71, -46, -55, 38, 117, -85, -26, 74, -16, 105, 71, -59, 108, 126, -24, 14, -93, 53, -126, -31, -97, -27, -73, -2, 68, 86, 112, -67, -42, 105, -125, 53, 90, 115, -91, -126, 48, -79, 97, -84, 8, -125, -119, 102, 95, 121, -49, -25, 51, -14, -127, 42, -3, 95, 4, 56, 102, -124, 46, 3, -37, 58, 104, 73, -8, 5, -80, 57, 82, -10, 115, 26, -33, -123, -46, -92, -3, -88, 47, -101, 16, -72, 49, -30, 3, 117, -96, -6, 62, 56, 52, -120, 126, 99, -66, -35, -72, -5, 125, -92, 53, 78, 64, 79, -95, -60, 114, 91, -28, -104, -121, 126, 119, -85, 105, -81, -121, -100, 10, -117, -61, -127, 43, 41, -105, 80, 94, -70, -80, -34, 64, -82, -87, -42, 75, 33, -125, 108, 84, 74, -58, -87, -17, -47, -114};
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
    msg.setTimeStamp(0.445035963695);
    msg.setSource(29089U);
    msg.setSourceEntity(251U);
    msg.setDestination(55562U);
    msg.setDestinationEntity(145U);
    msg.frameid = 214U;
    const char tmp_msg_0[] = {-71, -13, -87, -125, -43, 66, -78, 66, 16, -91, -24, 111, -119, 49, 80, -81, -100, 126, -6, -102, -77, -57, 72, 73, -33, 23, 38, -23, 24, 103, 72, 110, -60, -51, -40, -82, 125, -26, -55, 0, -126, -2, 69, -9, -79, 51, -54, 115, 103, -127, 45, -26, -113, 126, 114, 43, -107, -72, -119, -25, 48, -15, 7, -45, -13, -108, 57, 70, 74, -55, 110, -3, -69, 34, 7, -14, 119, -30, 20, -3, -33, -121, -27, -64, 120, 15, 57, 46, -4, -62, -104, 91, -27, -13, 110, 24, 9, -128, -59, -84, -62, 46, 40, 52, 30, -104, 45, 23, -8, -31, -66, 56, 91, -78, -17, -40, 95, 9, -84, -97, -7, 104, -114, -25, 60, -86, 89, -19, -110, 66, 11, -5, -119, 114, 31, -119, -36, 3, -89, 117, -12, 17, -57, 125, -7, 56, 3, -51, 27, 116, 11, -13, 105, 45, -116, -114, 102, 93, -128, -30, -88, -102, -18, -42, 18, -68, 68, 125, -52, 83, -2, -16, -77, -88, -79, 26, 99, 33, -28, -59, 48, -51, -29, 84, -127, 62, 63, -18, 2, 48, 54, -39, -50, 53};
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
    msg.setTimeStamp(0.446335523305);
    msg.setSource(27747U);
    msg.setSourceEntity(252U);
    msg.setDestination(26264U);
    msg.setDestinationEntity(216U);
    msg.fps = 158U;
    msg.quality = 180U;
    msg.reps = 237U;
    msg.tsize = 139U;

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
    msg.setTimeStamp(0.460201911867);
    msg.setSource(24199U);
    msg.setSourceEntity(96U);
    msg.setDestination(53518U);
    msg.setDestinationEntity(174U);
    msg.fps = 227U;
    msg.quality = 10U;
    msg.reps = 173U;
    msg.tsize = 54U;

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
    msg.setTimeStamp(0.182315926752);
    msg.setSource(35139U);
    msg.setSourceEntity(199U);
    msg.setDestination(62492U);
    msg.setDestinationEntity(224U);
    msg.fps = 51U;
    msg.quality = 18U;
    msg.reps = 41U;
    msg.tsize = 177U;

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
    msg.setTimeStamp(0.763249386389);
    msg.setSource(38299U);
    msg.setSourceEntity(133U);
    msg.setDestination(39383U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.0301262133986;
    msg.lon = 0.990836601858;
    msg.depth = 208U;
    msg.speed = 0.489546628114;
    msg.psi = 0.942916656033;

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
    msg.setTimeStamp(0.140314599623);
    msg.setSource(48666U);
    msg.setSourceEntity(90U);
    msg.setDestination(117U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.821062441491;
    msg.lon = 0.688565747309;
    msg.depth = 77U;
    msg.speed = 0.221836003832;
    msg.psi = 0.925226484803;

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
    msg.setTimeStamp(0.460341656031);
    msg.setSource(16070U);
    msg.setSourceEntity(106U);
    msg.setDestination(2636U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.872029450365;
    msg.lon = 0.919504925851;
    msg.depth = 127U;
    msg.speed = 0.181557860186;
    msg.psi = 0.410366759017;

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
    msg.setTimeStamp(0.201808181681);
    msg.setSource(13601U);
    msg.setSourceEntity(24U);
    msg.setDestination(57705U);
    msg.setDestinationEntity(91U);
    msg.label.assign("WPCEAWBHUMVJWCNHNHDXMJGUQIBKAMMCWKLRJTTWFEBZNEFMXLCANTBZUOHDKEJITYWSY");
    msg.lat = 0.17451135696;
    msg.lon = 0.538585306922;
    msg.z = 0.787291472454;
    msg.z_units = 197U;
    msg.cog = 0.271690046114;
    msg.sog = 0.859232784267;

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
    msg.setTimeStamp(0.0716909314299);
    msg.setSource(39469U);
    msg.setSourceEntity(41U);
    msg.setDestination(61480U);
    msg.setDestinationEntity(125U);
    msg.label.assign("LZOKXTAGOUHYTOTEXCTWRFMWVUEUIDXQCFGPRHEMARGFOSJSEGYVJLNXDKFRIDDKLQECADMVTJVJINYIQWRCMZGLTRQMFZBPYFJSUPGZYWFZNBZXLZRJOSUICWWKRHMPUOPIOVFXISMZKDULOOHYANXQBJJQASLC");
    msg.lat = 0.361592826424;
    msg.lon = 0.944080269882;
    msg.z = 0.60153554038;
    msg.z_units = 183U;
    msg.cog = 0.970147208742;
    msg.sog = 0.434294786894;

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
    msg.setTimeStamp(0.00394815613048);
    msg.setSource(63116U);
    msg.setSourceEntity(76U);
    msg.setDestination(42123U);
    msg.setDestinationEntity(159U);
    msg.label.assign("TCIRLFXVEKHUAVEINHVKZFPABSCIHGYDZAWTSOJRDQAVEJHVEGFAMRHOFHXKYNEPJYYNKYAXYKXXGEBJLLZKQXMSMQEKTPMXDWNDFGUZZRTIUTCUXPGRDRJUCTAYQIECPWFITPVGJBVQZVCADSUHOIOSVZXTLJLPMESPOROBCTKAMIFOMPNGOPOFBGNHDDIOGBMUQBNBUMZRWDMSFKLWCRSXSYRFIHJWQUKNZVLY");
    msg.lat = 0.552184564346;
    msg.lon = 0.636586790915;
    msg.z = 0.00337453869524;
    msg.z_units = 40U;
    msg.cog = 0.42914246449;
    msg.sog = 0.366548176506;

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
    msg.setTimeStamp(0.944936373468);
    msg.setSource(3874U);
    msg.setSourceEntity(215U);
    msg.setDestination(24699U);
    msg.setDestinationEntity(2U);
    msg.name.assign("MVERPBPIXEKYXXUMTEJYEEGUOHICWZGHSZHZTKAQTZZLAWHVGWIAMGQPMCZVHQFIBPFVEWJDCKPDUVLVKQRXYRIJWXTAULPKCFMFXPNJFVCOOWOSDQYXBDSJCNDMJEBMMACLJOBULBNGKRKTYUGCYYWHCF");
    msg.value.assign("NJULMZNTOKSQPUXOC");

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
    msg.setTimeStamp(0.0217887423817);
    msg.setSource(13869U);
    msg.setSourceEntity(181U);
    msg.setDestination(14712U);
    msg.setDestinationEntity(184U);
    msg.name.assign("LYKNAQEIXEGTAFMUVKDGGAKMZMUSWRINZLRWHCURZEIYZKKQLJCGFBBHEEEJLPXMMJYSQNFHENWGXCFWSLBVBDNLKGJVLMVCDFTHOR");
    msg.value.assign("UDLPFQWISHRHJZDIAJR");

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
    msg.setTimeStamp(0.780377944288);
    msg.setSource(65495U);
    msg.setSourceEntity(230U);
    msg.setDestination(1270U);
    msg.setDestinationEntity(142U);
    msg.name.assign("YEBTMBYRPOFTQYSLTV");
    msg.value.assign("TSQBSZODPSZFHARADBDLCIEVIUVKXFXXZOSPQOQNXAZBKVYQGNPGLHRWEEITWLKLOUQZNNVJCBPLAZCSMXEPBSFVAXDDTYXHJTQPMUZCGKSBKELTHDEMRJINMOGNMIUWEHMNDTFJWQOFAGVJAUBGMLHXUGDRDHBGBWLNKQWATANHTKVYUZTYYYHEPJEFSOLSTPOWLI");

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
    msg.setTimeStamp(0.826941472431);
    msg.setSource(64030U);
    msg.setSourceEntity(59U);
    msg.setDestination(3819U);
    msg.setDestinationEntity(238U);
    msg.name.assign("BUWXDUHUIZSOGINQCTKRZMBGPARDUCPMJHESQFYBYCFCEBBFEXFGKITYFDZKWJRJHDSVOZVTTTLENDIGKBSTEKR");

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
    msg.setTimeStamp(0.977499018508);
    msg.setSource(26333U);
    msg.setSourceEntity(212U);
    msg.setDestination(28280U);
    msg.setDestinationEntity(199U);
    msg.name.assign("DIPQIWRQEPBUEDHWZZOWUMCSPSZAYFBPJEXVOAAOHP");

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
    msg.setTimeStamp(0.0583567828963);
    msg.setSource(54153U);
    msg.setSourceEntity(141U);
    msg.setDestination(21923U);
    msg.setDestinationEntity(243U);
    msg.name.assign("QIVLERWEEQWSHVOZJIAHPHWPKVOMQSLUEHUNYUBTXYMTPGAZTSPZKXOZWZJMTOEPNWJSPWKXKIVFFDNVYDCNEZOKYQYCUGBBGGIFNYALSJKRTGVAPQWNUJBRXUOUXJLECMLHNKYYEDAXXSONIWTEQDZQPSIQNUCCOHAZWYTFDMXWZKMAGBRBTHDCGFVLMFCVQBGLPFJJMUKRIGBHHOQRXSJRIIBADKSRHOTDBDLAUFJCCZTVXNSIDFGYLCR");

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
    msg.setTimeStamp(0.866328139054);
    msg.setSource(10350U);
    msg.setSourceEntity(21U);
    msg.setDestination(20015U);
    msg.setDestinationEntity(192U);
    msg.name.assign("KPYORXJQUFDMOVSDDLLDPWOAJSIFTGSIBIFWZBLEKEXCGPDAYWGIKCXTWFOQEWHAAMGKTXNXVHYZZZQLQADSXZNPJK");
    msg.visibility.assign("QDYXWDWPQUHPIPUDGPOHPBXPGNEXGIOBSTHBFGKYDLEIRLQZ");
    msg.scope.assign("HQFHKMLWBLGUVAVSSASSDPEFRCXWHLXWTPTUAYTJYUIPKTGQBVHDSDWSNLTEPVJRFYVAMINCUXMBUZRUJSGHDIJAWBHXYNRKU");

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
    msg.setTimeStamp(0.287454333287);
    msg.setSource(52989U);
    msg.setSourceEntity(60U);
    msg.setDestination(31209U);
    msg.setDestinationEntity(26U);
    msg.name.assign("WQMDSDEJUBGWGZEETJIRHSJTIKIVFTDQGLJFOXWSRZKKVDJZRFZRFJOPUBHYKCYPECOQRFSLCXHMVQQGNJVNEVZENPSAXQWKNVXZAHPGPBXYAIUOOMNFGSUKEDMEAIXMJNOZBEROCTKOWUWVBHYYINCWYVCWFLWAVDTLBRXUMPZ");
    msg.visibility.assign("FCBBGDFJZVUDPYVDXSVAKWWDZKPIWSASOQFXKPRCOSHIVUHYJFDYHMBLNKOTZKHTBEELOJSRIXCMTVEPCQADQUCEGQVXROZEDANUTZPUHOGUYZHNPFNTSUNJIQIQJKQRYMVLZYTDPVEFBBHEYRMCWTWJCSYUXQRPHIFPSVAHKFRXMWLZTMIGKEX");
    msg.scope.assign("GTCTNKOWEAACFYEWBLAYBKFNDSKVOXOXRNLKBDDTMMHBTFZAXDCWXWJRUHLNYGMIEPLHKVQEHOLXPVJLPGNMKKCRL");

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
    msg.setTimeStamp(0.42460355923);
    msg.setSource(15965U);
    msg.setSourceEntity(199U);
    msg.setDestination(31091U);
    msg.setDestinationEntity(39U);
    msg.name.assign("JKLAYXAMUCZEJAZVSQDGSPDFYQYCSQIOESXYUUOMMHMIWHBRXULGZVQDHKJKKQOBRJLPWPSLYBTDNWNIZBRMTFVXFYPILHUNPRWZHQJUODHKYZFNJSADMICBZMPCWNUENVGQSGDBFVWFKRKPTBETUZEMBGHLUVVSZFQXBHRPEOJAOTINTRXTAMIWDNEWNGHLFNGVAIAWKDPGFUORQRLAGRHKYCCCTYCWQCZXOGTXXAKFMDOVEJELS");
    msg.visibility.assign("LCOMFSJPZXJFWIEGKESAOLPFHZRJRUVQKFSWXHHODTINGGFCEHQCGPUUTZNOEQHBUBLYEZKPUQGVYJDBLADUARGTCLNVTOPCTOHRYXISFWEYEIZVRIOLRAZY");
    msg.scope.assign("HXWVPTIYJIXZVGDRTECJXKCNKGXPIJJWSAMSHQPWSDHBHFTHLOKMZGEDZNQTDTCUYEGMAJRQNYQXLKSFLKITFBIJKOLUPDYARABORYHKVYWBVASFVMEZAPLNRLRLTHNEFSWCIZZQQOSBDVUIVMYUJWYCBPELONBVQXDGRFQROPXUURDWAEBYLPJTAIRNIXFMUVAHGZDCNJKFMGJQWEOMEUFPGOKGUS");

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
    msg.setTimeStamp(0.324238062832);
    msg.setSource(24313U);
    msg.setSourceEntity(7U);
    msg.setDestination(50730U);
    msg.setDestinationEntity(227U);
    msg.name.assign("CLVCQTZWGKBFJJXSZPOSMYSGVYGYWRFBWUGWDPRQGTLGZKBFUVVCNRXUBFINXDSJPKTFXLHLFETMZJCBPGTIZZUDANPUJEYWMDKOBMMOAWVIECLZLJNJAUFYEWFXKMYJLXNQPAQEZFLJVAPZSWGRORHKXHAHTQPTQRSHHJNDPHDCQUHOLDMVKELIMOOMGKORSYTDZAIXVHKNDINY");

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
    msg.setTimeStamp(0.0960702831069);
    msg.setSource(28859U);
    msg.setSourceEntity(43U);
    msg.setDestination(32861U);
    msg.setDestinationEntity(252U);
    msg.name.assign("AZPVTDLHLFKYMXVNYIEJBFPBKDROZFGSKOSCLYRSVWYWYWJLNFBJDJKIRQTIIWQUKNABQZETJVICTFLQVDFUBRSSQCYZLELHWVHQLMMZWCRGVGEZSSTUGXVONBCGAKWLAZBZFINAVMRNXKPFXACJMMWXOBXUMDHOGHUZDTYOPRXFJEARWJPYPHIEGEXHTSAXPKBJIYO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LKWDEJRHRSEWVBMXBNAIDQELKETVPHNZ");
    tmp_msg_0.value.assign("LRNRMOWCUJGHVCEGWAPZUAHXIACDQAGVKCBVMYIYICTMFKWQCYWMTOVDUIKQBNZKBAMLBRIWFIMMRJEQOOUTYDQUZDHEPXPFZNMOPDLYYCHUZDRAIQIXEAAXBNLPKWNTTNKMX");
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
    msg.setTimeStamp(0.706168094586);
    msg.setSource(46906U);
    msg.setSourceEntity(50U);
    msg.setDestination(15224U);
    msg.setDestinationEntity(59U);
    msg.name.assign("ARHQYUBEPBNDRTFHFLOPUMZEKVVCAFDKPIWBBQCGWW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NQCSSEDRJKIQODGILBIBPTIKRAQSRDLOHLWUKLUBJASCVPCZSKPGBNZYFPVQPSXNAMHXXMTWFFWIHDCEHRQBAMPNUAHTOCEXHLMCRFFCGYKPZZAWDEJCUQGFZYVXGQURAEZGXMOKDLITMHFMXVVKBOPYSCYVIJTIYOQVJBQOGMFXRUTMVJDTCIVJSKAMBGDDFSUNWOWW");
    tmp_msg_0.value.assign("UITPNYNLHPPREYVWCIDNSSGTLINUXNGHGG");
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
    msg.setTimeStamp(0.194250439463);
    msg.setSource(33954U);
    msg.setSourceEntity(236U);
    msg.setDestination(41077U);
    msg.setDestinationEntity(101U);
    msg.name.assign("AYUOVPCQVHVBFPVZQKQDBERVKBCLYVJEOXFRESHHURXAIAFLBANIFAHJPCPLGPCYVRHOKQGGZYMSWWSRSRMFMDKOTDQZCTZXJDSAKIJRORNVMGIZBIDOKRBWDMXJTUVAYSHIUQUMYEWGGKPEPYKMUFOFSIAZWFWZRWJYILYELHLPKIJXHXCONAWQSTVWLZNNFBMXLCGOSBJDTNKJAPPTXEQSGUGCTLTOBBNDDZNGCUEYCQUNTZDHIQUE");

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
    msg.setTimeStamp(0.0961719434437);
    msg.setSource(3949U);
    msg.setSourceEntity(242U);
    msg.setDestination(64189U);
    msg.setDestinationEntity(96U);
    msg.name.assign("OJPYJQFLQDYJYYOHZUVLNQLMMMULPIPFXWBCQKYJXNTOGNZXUBDORCXFZDECIGVZDL");

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
    msg.setTimeStamp(0.0667189650961);
    msg.setSource(16052U);
    msg.setSourceEntity(206U);
    msg.setDestination(57687U);
    msg.setDestinationEntity(27U);
    msg.name.assign("PVQIINRBSBWZLDAOTQRGMHNGGALJLEAFXTLKXYUVRTRSLDXDLXYWXCGCFTWOVOCUBEGJBNUCXUYHVMHSMZUEFCAUNEZCHZEUHSPWIITFUDIOVKEMEAPHYBJTWGTQBKZGJWHQYLMIFXROPSBSKWDTRVZJKNONHJBWPAIOXXMZCALIPNISPWDVAKYRZSJRNMTZTEGVSBFJURNXGMOSYPNFWZYAMKQCUYKHLGCEDQKHYDP");

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
    msg.setTimeStamp(0.0420880136169);
    msg.setSource(12256U);
    msg.setSourceEntity(177U);
    msg.setDestination(47223U);
    msg.setDestinationEntity(23U);
    msg.timeout = 3620384911U;

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
    msg.setTimeStamp(0.894283709144);
    msg.setSource(12054U);
    msg.setSourceEntity(115U);
    msg.setDestination(64457U);
    msg.setDestinationEntity(136U);
    msg.timeout = 102692309U;

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
    msg.setTimeStamp(0.93114056701);
    msg.setSource(16142U);
    msg.setSourceEntity(97U);
    msg.setDestination(46675U);
    msg.setDestinationEntity(136U);
    msg.timeout = 3571435835U;

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
    msg.setTimeStamp(0.268986388572);
    msg.setSource(32997U);
    msg.setSourceEntity(149U);
    msg.setDestination(2336U);
    msg.setDestinationEntity(139U);
    msg.sessid = 1398240998U;

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
    msg.setTimeStamp(0.846931166355);
    msg.setSource(40089U);
    msg.setSourceEntity(190U);
    msg.setDestination(3250U);
    msg.setDestinationEntity(100U);
    msg.sessid = 592536948U;

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
    msg.setTimeStamp(0.986940022513);
    msg.setSource(7521U);
    msg.setSourceEntity(104U);
    msg.setDestination(20908U);
    msg.setDestinationEntity(31U);
    msg.sessid = 2649333498U;

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
    msg.setTimeStamp(0.694005435617);
    msg.setSource(20698U);
    msg.setSourceEntity(103U);
    msg.setDestination(13009U);
    msg.setDestinationEntity(93U);
    msg.sessid = 2820957960U;
    msg.messages.assign("QGWILZPQJUXWLTZGMESYOBDVUHWJXQIEYFBOUFMIQQMTDYVSAAJEZCRULZKOVKGPTOTDXCFFNPXZQVGGJUNBNSDYBQDJRMRPPQMTVFDZBNYCEIAFRUACCYPFDTHZHRFKRWCKJMNUNTBDAFPWLIHH");

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
    msg.setTimeStamp(0.81165655292);
    msg.setSource(62477U);
    msg.setSourceEntity(63U);
    msg.setDestination(2598U);
    msg.setDestinationEntity(132U);
    msg.sessid = 2866595929U;
    msg.messages.assign("XIBFRFVXBTDUMJAGHKPMVPCKUVCKNPVRDINYQPSESQKLLWXOUHIGOTYZRYKCCDLDRMGPYGSPBNNETWWQLFBJWABYKQBPVXXXHYMODOUOIJVWNHOAYVRFSOQHDZJYIJUFDWFPCSUJSEOG");

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
    msg.setTimeStamp(0.428707946109);
    msg.setSource(18780U);
    msg.setSourceEntity(63U);
    msg.setDestination(5127U);
    msg.setDestinationEntity(174U);
    msg.sessid = 3699875129U;
    msg.messages.assign("XJKTEWBIDKSVIGAVLSPVYWRKZGIEIBFFFQXDXKJEYPSBOGONELSJPMGSPTXTNQPZXQBUMBAYLMAXMFHMRUERRTLXIUDMACIXBCJWOPVAZCMVWFCRYOHRDGEUVEHMNTYFONKOHGTPNDQODANICKULHGDKBWSTLQCAUUBYDJCQBMXZJWTPGGNXMLSRNYLWHAURTKFWIQDCQSUNZCTUJAQYRGVKYZOOLELJZSFFPOHHZPQYWVKVJJCI");

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
    msg.setTimeStamp(0.781294406848);
    msg.setSource(5458U);
    msg.setSourceEntity(31U);
    msg.setDestination(20269U);
    msg.setDestinationEntity(229U);
    msg.sessid = 3525808649U;

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
    msg.setTimeStamp(0.966646741213);
    msg.setSource(39797U);
    msg.setSourceEntity(0U);
    msg.setDestination(39510U);
    msg.setDestinationEntity(118U);
    msg.sessid = 550957592U;

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
    msg.setTimeStamp(0.556970752504);
    msg.setSource(60773U);
    msg.setSourceEntity(18U);
    msg.setDestination(63792U);
    msg.setDestinationEntity(2U);
    msg.sessid = 3744789124U;

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
    msg.setTimeStamp(0.309285405056);
    msg.setSource(29552U);
    msg.setSourceEntity(179U);
    msg.setDestination(47015U);
    msg.setDestinationEntity(93U);
    msg.sessid = 4264182764U;
    msg.status = 142U;

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
    msg.setTimeStamp(0.537014712137);
    msg.setSource(19749U);
    msg.setSourceEntity(252U);
    msg.setDestination(14408U);
    msg.setDestinationEntity(107U);
    msg.sessid = 839047357U;
    msg.status = 87U;

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
    msg.setTimeStamp(0.796308843095);
    msg.setSource(12234U);
    msg.setSourceEntity(119U);
    msg.setDestination(56307U);
    msg.setDestinationEntity(117U);
    msg.sessid = 110346678U;
    msg.status = 253U;

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

  return test.getReturnValue();
}
