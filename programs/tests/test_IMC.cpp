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
    msg.setTimeStamp(0.7506012608232092);
    msg.setSource(39665U);
    msg.setSourceEntity(169U);
    msg.setDestination(46409U);
    msg.setDestinationEntity(219U);
    msg.state = 246U;
    msg.flags = 20U;
    msg.description.assign("HULICEGFFGJXJNHPGQDAKHYJSFCCZAPTZYJQXTYTUCLAJKITBHVAVANVKYSHTMSDNKNWSXKRZZSSBOYNBLQTZZAPMVOXKDEUODPURXRFVQNCBGCSHEWQOFJKLGARYEBWPKYIJWIDVLXUOIOAVESJODPHUJEEZLWPACNTGMDQDBUPDYSGX");

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
    msg.setTimeStamp(0.7772593965424613);
    msg.setSource(60011U);
    msg.setSourceEntity(120U);
    msg.setDestination(22869U);
    msg.setDestinationEntity(25U);
    msg.state = 115U;
    msg.flags = 198U;
    msg.description.assign("RMVWZUFSXCBDJQXVTYCGVAAJLNEAUQOPIDQNCIRBLLGYYGMHBCKVRQEIYLXJTJDZZHHUVQLFZSPPETKRSYJTDYIALWCBBYHOOCMMSCXVXHRYAMSDGKWCXHIMSACDFXATDAGRODTJHXWFOXEZKERKWQDA");

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
    msg.setTimeStamp(0.6239784398880084);
    msg.setSource(50653U);
    msg.setSourceEntity(80U);
    msg.setDestination(8926U);
    msg.setDestinationEntity(88U);
    msg.state = 212U;
    msg.flags = 136U;
    msg.description.assign("PYIRQSEHXJHTFWDOLAJOLTPLMSBDBSUQAVBERASZWALLKFNOUNDYEIICGVSHCZXXITNDKQWYRUVGGGYNFPVXXYSR");

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
    msg.setTimeStamp(0.2593589862173987);
    msg.setSource(10399U);
    msg.setSourceEntity(167U);
    msg.setDestination(5733U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.5015375561288808);
    msg.setSource(61343U);
    msg.setSourceEntity(43U);
    msg.setDestination(47177U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.09810725190737746);
    msg.setSource(42390U);
    msg.setSourceEntity(185U);
    msg.setDestination(40997U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.10720350986900251);
    msg.setSource(56277U);
    msg.setSourceEntity(80U);
    msg.setDestination(53495U);
    msg.setDestinationEntity(153U);
    msg.id = 189U;
    msg.label.assign("RNWFNUMLGETMCMDYPTUMHDQPVGJURNVPVVLRHBCLXVKPZXHLWKQNOJEOZCEJDIBWZSZUXSJKQMFOBGZVYUKLXVENSBOTPIADFIRNOGXADOJLQMNHUBGQIBVCSKWXCLZWCTEWPYAHGPUFFSJCIFIRCPFUHTTHOHMSWYUKQ");
    msg.component.assign("BTIXESLWKMMPEKAHZDHKYQORNBFSLGMVPOZFTANXWIZHLXYUOVSKNXHSVMRBDCMKDBQFZEGMCMAIABPSZRPJVECIOLAIECCCLNJCBRXDMJYSCRDTUNUUSROAYGJYHYWEFKXBYEIRYJFUNPBWPUCZZUIRVCNSNTXWTKKEGRAJQSLSHJKDDDYBZLDJPRGGFZVGLOTPAIWIMVOAVKTUHJLIQHTQWGAVWTMVFHNEPFWTXBDWXGXQLQPUQZNFQH");
    msg.act_time = 47146U;
    msg.deact_time = 36552U;

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
    msg.setTimeStamp(0.048078629080223534);
    msg.setSource(49051U);
    msg.setSourceEntity(242U);
    msg.setDestination(348U);
    msg.setDestinationEntity(10U);
    msg.id = 81U;
    msg.label.assign("WJUEVLZZLIYKWLHWQVIPDCTUOVIHDFGZAXAYVBTGWKBKSLJLTDYNISCQESXHAYGSCRXYWCUCAQZPFTOPFCZTTQSJPKUFDMELBGCSDUAXPMVMXAWJN");
    msg.component.assign("YFCXQTTRJCGHZPRJMEFJFPUVZSTKBZSZESSDNXKOTPGXCKVDBAMTLFUAOBMIWELZLWBPEVYASPNBOVEJFLACQIEAOHPNKAPOVYJRVIWFMMDDSEOKDHQYMMNQRNY");
    msg.act_time = 46607U;
    msg.deact_time = 59716U;

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
    msg.setTimeStamp(0.4312354302814737);
    msg.setSource(24820U);
    msg.setSourceEntity(179U);
    msg.setDestination(52296U);
    msg.setDestinationEntity(161U);
    msg.id = 115U;
    msg.label.assign("XRXAHJGUDSPEQCDKPSSEISSFPKVQCZIOAVHNIEORJYKEYS");
    msg.component.assign("SAEZLTCFKLIC");
    msg.act_time = 50754U;
    msg.deact_time = 15614U;

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
    msg.setTimeStamp(0.6635618875680621);
    msg.setSource(3761U);
    msg.setSourceEntity(140U);
    msg.setDestination(65427U);
    msg.setDestinationEntity(248U);
    msg.id = 167U;

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
    msg.setTimeStamp(0.18734366153586102);
    msg.setSource(22729U);
    msg.setSourceEntity(201U);
    msg.setDestination(21706U);
    msg.setDestinationEntity(88U);
    msg.id = 67U;

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
    msg.setTimeStamp(0.23344431306678115);
    msg.setSource(6142U);
    msg.setSourceEntity(201U);
    msg.setDestination(11654U);
    msg.setDestinationEntity(230U);
    msg.id = 101U;

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
    msg.setTimeStamp(0.23667326017845214);
    msg.setSource(36070U);
    msg.setSourceEntity(189U);
    msg.setDestination(37527U);
    msg.setDestinationEntity(124U);
    msg.op = 83U;
    msg.list.assign("UZSDCOEEBHZBILZCMEIOMARFTENYDUHBCGHIXMQALWXLUAZNYJZMNEIFMGYJDLHTSATUPADRKEXGLGWOZXROPBHQXMJEJFYQVDI");

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
    msg.setTimeStamp(0.27623526155051514);
    msg.setSource(48896U);
    msg.setSourceEntity(185U);
    msg.setDestination(32989U);
    msg.setDestinationEntity(51U);
    msg.op = 229U;
    msg.list.assign("ITRWUDVWMEKO");

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
    msg.setTimeStamp(0.4237081525720532);
    msg.setSource(59U);
    msg.setSourceEntity(171U);
    msg.setDestination(30298U);
    msg.setDestinationEntity(211U);
    msg.op = 99U;
    msg.list.assign("FTCCUGEYRHVEPMWFYHQTNSEUQSVYBFAZPDQANWAWYHUFDEXTEQDSKLRYOEOONTRREVPHVCXPRIXCNRLNYYCXVOWTVZPASPFYNNMILUAMFBSXIBGKBUKEXLDMGIYVJZMIPKBJRWOTXNLJPHLHBWJDRSGXQDWIKSJBHGZCZMZGTQEK");

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
    msg.setTimeStamp(0.37804809228398417);
    msg.setSource(3379U);
    msg.setSourceEntity(221U);
    msg.setDestination(63686U);
    msg.setDestinationEntity(96U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.27716491419579325);
    msg.setSource(63635U);
    msg.setSourceEntity(182U);
    msg.setDestination(58722U);
    msg.setDestinationEntity(243U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.39021366062037555);
    msg.setSource(54035U);
    msg.setSourceEntity(18U);
    msg.setDestination(19015U);
    msg.setDestinationEntity(124U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.711573911583323);
    msg.setSource(13009U);
    msg.setSourceEntity(184U);
    msg.setDestination(37817U);
    msg.setDestinationEntity(201U);
    msg.value = 184U;

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
    msg.setTimeStamp(0.15035798732914707);
    msg.setSource(48971U);
    msg.setSourceEntity(193U);
    msg.setDestination(44366U);
    msg.setDestinationEntity(206U);
    msg.value = 125U;

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
    msg.setTimeStamp(0.3147577531375051);
    msg.setSource(12713U);
    msg.setSourceEntity(10U);
    msg.setDestination(27508U);
    msg.setDestinationEntity(44U);
    msg.value = 70U;

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
    msg.setTimeStamp(0.16253754417482857);
    msg.setSource(10392U);
    msg.setSourceEntity(205U);
    msg.setDestination(21682U);
    msg.setDestinationEntity(144U);
    msg.consumer.assign("LTGWGILQWYAMQJPCNVZKVMGTMWXNBWCIYSUTBEARDIDNJ");
    msg.message_id = 2739U;

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
    msg.setTimeStamp(0.9956171028085964);
    msg.setSource(11381U);
    msg.setSourceEntity(149U);
    msg.setDestination(55456U);
    msg.setDestinationEntity(42U);
    msg.consumer.assign("LHFEIWEYSOBGKNWJYFILTMKLDMIGZVZLFOEQGZFEDHDOAOEQJUGYNPBXADUGPJDFMOJZRTLMKXFXNKCEHCCJBEMRABRGNSYHCHIVKYKVGTXRDSWQUSVBXPAHVDBIGPBUAUDVLFFGTCHCSTFRPCITSOGJLTYIPXKSMUAWUXNVUEALBQODVYYSZRXFYZNOUNLKJLTZRAQPIZKNAJHQRZWPWRTBHXW");
    msg.message_id = 61173U;

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
    msg.setTimeStamp(0.2785363814870194);
    msg.setSource(26158U);
    msg.setSourceEntity(53U);
    msg.setDestination(33161U);
    msg.setDestinationEntity(224U);
    msg.consumer.assign("UXIHWMVTGKVFUROLLECJGFQVHQREJYSUBDDOZXIWRIXYQKBNTWPNEBVTWKXOVKYONLEICUPQEGUYUNXALESUHTYSCKXDXEHCGHARSTIYTNNSMVZBAPZXBFTH");
    msg.message_id = 58245U;

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
    msg.setTimeStamp(0.8338417005596257);
    msg.setSource(33711U);
    msg.setSourceEntity(101U);
    msg.setDestination(52091U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.9092791222541986);
    msg.setSource(53214U);
    msg.setSourceEntity(197U);
    msg.setDestination(41625U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.53417037186592);
    msg.setSource(3424U);
    msg.setSourceEntity(246U);
    msg.setDestination(5696U);
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
    msg.setTimeStamp(0.4446934369856349);
    msg.setSource(9223U);
    msg.setSourceEntity(51U);
    msg.setDestination(25273U);
    msg.setDestinationEntity(68U);
    msg.section.assign("CKVIAEDWRNDFLKMYFTVDSMTQKWPXUBVQZJIWEAUDGOHXUBPSJDUHFHROHLTNQGCFNDXBORASRCFZLGBJ");
    msg.param.assign("VZQXNPUSDSDRMWNBSEHROOXIZMOCQYUKSKBCCOVBIXCIPGIIJHLPOVIGHVHQLYAOWSLPVYJCBDDKQABAWUXHPKDMOXMORZLNYKMTFHWAEMPJWKGA");
    msg.value.assign("ISBJGXPJRWBPGTELXBYSYJQPPIJVUQVDWFLVCCDJHKQEVYFWCQEOGDOSHMTWNKUEHQXLDSYFWLINLTZTLHMUYOVMLSXDAKSBKREVOQJNURFQXEGOYDLJTXCICTPSDRVAJKCWZVFKXNZWFSZGAUPIMRWLAMPLIFZUBNNCCUNEISDBKXQWMSQFYRTNIHUGAJFQJZGEMT");

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
    msg.setTimeStamp(0.06510038493084414);
    msg.setSource(17816U);
    msg.setSourceEntity(146U);
    msg.setDestination(9889U);
    msg.setDestinationEntity(35U);
    msg.section.assign("UGCFVSLOKAKPPREEEVDMQPXGKRAQNBQHBBUQCJYVLMZSFYRMAWKPUNZHY");
    msg.param.assign("YJCUHIIRWDMRIWYFLTTWKDHKSUSESUVQDBBGNBXPOMUGWNXLLEAYXSBZVLFPKKGHKBVVYBOZLNGEONTEDOKIUMUJEZANJNLIAKYYT");
    msg.value.assign("QRYFTNRLDALHJLCKWXQQSVEJOYESCAPNDTOKTPFLBDTIKVWJMYINSPCRZWXKOUUDXEGEZAFETWHBYJZMDNWOVCFAXLLJNCINCTQKEDOPFUHEGMTYPGARSRJSUJMMMJCBUVVMLRRPHQWUUWTUIZOGBAFAZKAZPFIRXMLXGIBFDUGZAQZTYBOWIQWONFBSVEPHCXPBJOZDSLIDIUIMEJVEMPASGXXKBNFHOVKVQZCLGVKXGH");

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
    msg.setTimeStamp(0.017092363707636227);
    msg.setSource(3944U);
    msg.setSourceEntity(132U);
    msg.setDestination(58492U);
    msg.setDestinationEntity(171U);
    msg.section.assign("YLTZLOHUVHCYLPNWVOHREEZVMJMDBETZGFQNXMDTOYYTADRBBAKPFICXSRMIJRGOVZPCESBHPQQOQXSZAFQFCZQBYNYFTFGHFGYWYLUSIBWAKXJJGJZWXETMBESDPNNLHQXWQPUMIBAHIDLRBGCWWVOAPUVMZIL");
    msg.param.assign("ZMYHLEZFWZDDECXHQMDPKYSTLXOHBAIELGNCAXDUERTRPPWKNGMFTFMDFSXNMGRALTBVHAQRKNV");
    msg.value.assign("MTICKHREZDJQBXNZEUXHZJGPFELSACYSB");

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
    msg.setTimeStamp(0.753344679395604);
    msg.setSource(58748U);
    msg.setSourceEntity(4U);
    msg.setDestination(61834U);
    msg.setDestinationEntity(109U);
    msg.op = 250U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("TCSLKJXVGPDFACWBDESDXSZTDPYOKVXFVSYFALHURCOBLPZGMWQXHPKSTNUXBQUKVTOFWJCOAEEVLYRNUFNOCJXELQUSADGTVKIKJXIJJIRCRQMTTHRMEDFGELSNURYHGZOSQXCTJOIKBDKZHMVMMALGYJAVNDPAPEWUBSMWNYIZAFFWVGLO");
    tmp_msg_0.param.assign("ZABJCCAPWRTJRMUOQHQCTSTUYKOZFFEZVNHQSHSHYESNEWEELWMQVFRXDLWRCJXLFOFOTVUYIQVIROVNQTWJJVIQWXAMUATKTIXHSXIHIHSMIZKUZCRPDLLBHDKTGZWSPGDZZNIUGPY");
    tmp_msg_0.value.assign("AXCLXMOIKPCVBTGYFRENTMVOSXFQYSWTSFAJWYYNLDPGOGEDJXOEDQPFNRAMYRVURIZIPCNFWLFNZWSXQVXJJJAWDOMFSDZLGELUHZMWEBKDCMQIFEHKEKWFTVXZZYEUMMOMZEIPKCGJANAJVAVZISYJDHNUGRCZOSPNGBXAONTTBPIHMQQBABBQXKRHUVZDKDGORSKT");
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
    msg.setTimeStamp(0.10820615708069459);
    msg.setSource(13499U);
    msg.setSourceEntity(204U);
    msg.setDestination(3161U);
    msg.setDestinationEntity(43U);
    msg.op = 45U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("GGKRFQNHMXNFIIKZKUCNQUDTEILHIRYFUVTZBCFEQMLNUZDPJWCZALAOZIOAMOYSTLDSQSSEZQVJRLEPKXJFVNILDPDWIDXUKNRAXGGBMYYYABJKHQNFZXHNDAHVPWGKWHVQPKVYSFMFWMMJWWSJBGQLTGJGEXAZQIXTLVKXAEVFLCTZSOHJABROBYRRWYGSMWJYKCOUOUDESFDZRBYQDIHRLTNMROXHGCVECBWJCTIUNBUOVMEABTPP");
    tmp_msg_0.param.assign("QAFUZUAKMCHJFEXRVTYUNCOKXGMYGLOUJFQYMSSYJHIZBAKYEVVMKRRJGTDWEJVKSHTWEKPKQDNOJRBGXLPXWGQHDKAHCQPCWZMCISIMCEBQHDRKSKWZYVINNUQSYQSXLRBZIHCNDQSAPUGBLLANYTPFWBLSTHEVHNJWMZWORGXOLERBLDFSTEMUMOTOZTDPCCNZRNXPEONCFTIWFPXMYFJJPPDOAUVVYGVGX");
    tmp_msg_0.value.assign("AUQVCJCGCEYBRSKSEMKDGVMBLYWNJJDWFIRQYTJYGVMUSCILRPMBQYEHZNZIIWPXOOVNKIMHXGBMPMIHVSRTLYXPOBQPZCUXGIBZFDHZUPEJLQTOJSSOGXLDGVIDLQYSULARURMJFDZPZIRCHNDOHTWFGOWPXCCLNWN");
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
    msg.setTimeStamp(0.20030056706569865);
    msg.setSource(2229U);
    msg.setSourceEntity(56U);
    msg.setDestination(47210U);
    msg.setDestinationEntity(135U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.9907220988105702);
    msg.setSource(65082U);
    msg.setSourceEntity(58U);
    msg.setDestination(30099U);
    msg.setDestinationEntity(164U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.30499683597595506);
    msg.setSource(56901U);
    msg.setSourceEntity(217U);
    msg.setDestination(30912U);
    msg.setDestinationEntity(124U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.594337752827767);
    msg.setSource(33706U);
    msg.setSourceEntity(109U);
    msg.setDestination(2015U);
    msg.setDestinationEntity(236U);
    msg.op = 170U;

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
    msg.setTimeStamp(0.9111988189297869);
    msg.setSource(27549U);
    msg.setSourceEntity(178U);
    msg.setDestination(32767U);
    msg.setDestinationEntity(68U);
    msg.total_steps = 26U;
    msg.step_number = 160U;
    msg.step.assign("JMJVXTIQVSJCZEWTKJDIXOUKOGFYWAHUTEGJBSVMHPJUGBNVKROPDYQGJMRZXHATCWFHEFBEQESQGNSDZRUNXYGAFMATMLCDARRSUHBDILCREAOHZWBOVLNAFCTTBNRTSJINVITLMPXUTKYMLKVQXEDLPOCPNPIGAMIQHDFA");
    msg.flags = 169U;

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
    msg.setTimeStamp(0.633312645548627);
    msg.setSource(14571U);
    msg.setSourceEntity(173U);
    msg.setDestination(60892U);
    msg.setDestinationEntity(4U);
    msg.total_steps = 222U;
    msg.step_number = 101U;
    msg.step.assign("ZABKZAEGBDCYOJGTBYRZHXHFAMTMZVIOBSSNSOJVZEUWETHHXKDYJQZV");
    msg.flags = 7U;

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
    msg.setTimeStamp(0.20286899040871675);
    msg.setSource(21345U);
    msg.setSourceEntity(17U);
    msg.setDestination(46836U);
    msg.setDestinationEntity(13U);
    msg.total_steps = 113U;
    msg.step_number = 198U;
    msg.step.assign("MBGSNUZJAKOQEWZZAAAHVCOACKQNJQLCKP");
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
    msg.setTimeStamp(0.6134165186738783);
    msg.setSource(43307U);
    msg.setSourceEntity(185U);
    msg.setDestination(9583U);
    msg.setDestinationEntity(124U);
    msg.state = 84U;
    msg.error.assign("CUFYFRKFXLTXVJKMJUXOAEIJBOPCRTTXDBHHMQCF");

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
    msg.setTimeStamp(0.9870977277031123);
    msg.setSource(46659U);
    msg.setSourceEntity(237U);
    msg.setDestination(23510U);
    msg.setDestinationEntity(139U);
    msg.state = 89U;
    msg.error.assign("FTTPWKBCLMNFCIOSTRMBZOVGJVFSTRJKXMMETPWRQXBJEHXWXBUPPTGNWCXPVGIFIIFOZNBJSFYHWMYTASSCRSQZIFHQBRIGKG");

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
    msg.setTimeStamp(0.874909549821306);
    msg.setSource(52753U);
    msg.setSourceEntity(28U);
    msg.setDestination(17031U);
    msg.setDestinationEntity(151U);
    msg.state = 253U;
    msg.error.assign("QUSSBQHWHKZTKONVRNRUJASDEVLHKOYVCGWAYGLHBPTJQSCQXTJBUDYXVGFNWLFBEODCUTVTZKHYLGZIUAKPIVPBRBNCKIFFXNWHFYIIMVJOKNRUJGJRTDQPPKYMCNETRMCMABJCDNXJMMDFAYSHUAQVEFELDUHFUECSSOTQEZDAWWYPYXMSRZXEISUZBCLWSGZTGLXPNWPKXPIBCVIVJLOHMIQKQJGOMLWFZEGQTPMWALADIZOXDYRHO");

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
    msg.setTimeStamp(0.17106128803553233);
    msg.setSource(25470U);
    msg.setSourceEntity(202U);
    msg.setDestination(45448U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.7905838640879164);
    msg.setSource(28199U);
    msg.setSourceEntity(43U);
    msg.setDestination(42579U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.8951018706588623);
    msg.setSource(165U);
    msg.setSourceEntity(208U);
    msg.setDestination(1292U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.9143564858876608);
    msg.setSource(31575U);
    msg.setSourceEntity(106U);
    msg.setDestination(49239U);
    msg.setDestinationEntity(148U);
    msg.op = 117U;
    msg.speed_min = 0.011776114662856774;
    msg.speed_max = 0.7930642789977098;
    msg.long_accel = 0.6876895108959864;
    msg.alt_max_msl = 0.8880720094994549;
    msg.dive_fraction_max = 0.9827875521763056;
    msg.climb_fraction_max = 0.5567181683338854;
    msg.bank_max = 0.05581617260807048;
    msg.p_max = 0.16783893321586107;
    msg.pitch_min = 0.7684312112516466;
    msg.pitch_max = 0.005728192312485003;
    msg.q_max = 0.30198877072123964;
    msg.g_min = 0.9093303000598256;
    msg.g_max = 0.01305824267318123;
    msg.g_lat_max = 0.4278309884765048;
    msg.rpm_min = 0.7250554286458253;
    msg.rpm_max = 0.1671248917814172;
    msg.rpm_rate_max = 0.14769285189419445;

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
    msg.setTimeStamp(0.9425627678019229);
    msg.setSource(14026U);
    msg.setSourceEntity(159U);
    msg.setDestination(18658U);
    msg.setDestinationEntity(83U);
    msg.op = 158U;
    msg.speed_min = 0.6276962412169551;
    msg.speed_max = 0.014803282501981263;
    msg.long_accel = 0.43745921877673244;
    msg.alt_max_msl = 0.5259525341141873;
    msg.dive_fraction_max = 0.8327734846914465;
    msg.climb_fraction_max = 0.22277903065463522;
    msg.bank_max = 0.4445720350172725;
    msg.p_max = 0.8247400010162903;
    msg.pitch_min = 0.233571670722456;
    msg.pitch_max = 0.420689982868914;
    msg.q_max = 0.6910976532767621;
    msg.g_min = 0.0003975048399320613;
    msg.g_max = 0.8994376723786718;
    msg.g_lat_max = 0.9979471938788234;
    msg.rpm_min = 0.9748792275100124;
    msg.rpm_max = 0.8196649667295345;
    msg.rpm_rate_max = 0.37363131993980303;

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
    msg.setTimeStamp(0.511698230238089);
    msg.setSource(33314U);
    msg.setSourceEntity(79U);
    msg.setDestination(42861U);
    msg.setDestinationEntity(228U);
    msg.op = 151U;
    msg.speed_min = 0.8852138644106257;
    msg.speed_max = 0.25269021365518507;
    msg.long_accel = 0.7498517904090057;
    msg.alt_max_msl = 0.13356514431276534;
    msg.dive_fraction_max = 0.25865735341684737;
    msg.climb_fraction_max = 0.7582726249057404;
    msg.bank_max = 0.5364255813061173;
    msg.p_max = 0.3894681941509892;
    msg.pitch_min = 0.552551593762194;
    msg.pitch_max = 0.8959523629696012;
    msg.q_max = 0.8668064711826515;
    msg.g_min = 0.5239476285330882;
    msg.g_max = 0.5961710747340099;
    msg.g_lat_max = 0.5421648314802094;
    msg.rpm_min = 0.9629979548302308;
    msg.rpm_max = 0.840551341510976;
    msg.rpm_rate_max = 0.8389405878553257;

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
    msg.setTimeStamp(0.8138112582075605);
    msg.setSource(60820U);
    msg.setSourceEntity(147U);
    msg.setDestination(13615U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.6896478738393792);
    msg.setSource(26660U);
    msg.setSourceEntity(3U);
    msg.setDestination(48038U);
    msg.setDestinationEntity(89U);
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 69U;
    tmp_msg_0.error.assign("ZLKYKJZHOETMEUWRMADSMEPDVYEXHVMZDSJBMHHPQIKXSIGXTZSAX");
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
    msg.setTimeStamp(0.27753682231381216);
    msg.setSource(27169U);
    msg.setSourceEntity(136U);
    msg.setDestination(3371U);
    msg.setDestinationEntity(147U);
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 61997U;
    tmp_msg_0.lat = 0.9128495964994712;
    tmp_msg_0.lon = 0.9354492334927726;
    tmp_msg_0.z = 0.9026571557533305;
    tmp_msg_0.z_units = 52U;
    tmp_msg_0.pitch = 0.4990005888158666;
    tmp_msg_0.amplitude = 0.7656555249729409;
    tmp_msg_0.duration = 4126U;
    tmp_msg_0.speed = 0.39299517672824125;
    tmp_msg_0.speed_units = 241U;
    tmp_msg_0.radius = 0.819183931013782;
    tmp_msg_0.direction = 131U;
    tmp_msg_0.custom.assign("HPNJNBUPBKAJCQZGZACIBYLICEXOZVAFIIKACPYCXOQIURUNYDJKJHMHLZOXHSNUSTMSYQXSVTGWLRKIXBLGECCBJGPNFHZOVAEIEHXTRVZQQSWPPOKEMXQTBVALLFNABMUKBAHUYRZDRZIDFTCJTRWDFEMIUUDJWCVVVALWEV");
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
    msg.setTimeStamp(0.14031661050225042);
    msg.setSource(48518U);
    msg.setSourceEntity(62U);
    msg.setDestination(53322U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.2635768370734267;
    msg.lon = 0.9722939834882034;
    msg.height = 0.7291532235387576;
    msg.x = 0.14994986799978727;
    msg.y = 0.45561802185711675;
    msg.z = 0.8378368543860676;
    msg.phi = 0.9388036898280552;
    msg.theta = 0.026002729053561047;
    msg.psi = 0.11614384750631812;
    msg.u = 0.9809419899579098;
    msg.v = 0.5605652779117339;
    msg.w = 0.8545296498207433;
    msg.p = 0.6672254032078638;
    msg.q = 0.5834488507329191;
    msg.r = 0.7859437924420786;
    msg.svx = 0.11709054337154767;
    msg.svy = 0.5161835162998094;
    msg.svz = 0.8282971135710022;

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
    msg.setTimeStamp(0.47764990176843003);
    msg.setSource(9598U);
    msg.setSourceEntity(184U);
    msg.setDestination(49986U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.6936857637548296;
    msg.lon = 0.09283042328105973;
    msg.height = 0.35067579685338246;
    msg.x = 0.5305387765148543;
    msg.y = 0.10372554010069601;
    msg.z = 0.7020585707803967;
    msg.phi = 0.9722417811992731;
    msg.theta = 0.5078420151434646;
    msg.psi = 0.036079980406252266;
    msg.u = 0.2107679890109485;
    msg.v = 0.16470268134685873;
    msg.w = 0.1433025921212805;
    msg.p = 0.36184121032739425;
    msg.q = 0.31802815061548084;
    msg.r = 0.6008730848405834;
    msg.svx = 0.17859576557984502;
    msg.svy = 0.44085004471281075;
    msg.svz = 0.6284382656950369;

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
    msg.setTimeStamp(0.14046408895831453);
    msg.setSource(59891U);
    msg.setSourceEntity(82U);
    msg.setDestination(8830U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.712900376257649;
    msg.lon = 0.24093059150437046;
    msg.height = 0.5433966278070275;
    msg.x = 0.8669517765826859;
    msg.y = 0.7356911987122525;
    msg.z = 0.8840128725461559;
    msg.phi = 0.8926971131677771;
    msg.theta = 0.8904908202004781;
    msg.psi = 0.42188715279956646;
    msg.u = 0.2206676524480785;
    msg.v = 0.9384963903075207;
    msg.w = 0.06566467334422954;
    msg.p = 0.988444534539418;
    msg.q = 0.20983441260211821;
    msg.r = 0.22001868087044674;
    msg.svx = 0.6294592471357792;
    msg.svy = 0.6218575367084116;
    msg.svz = 0.7549920797712194;

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
    msg.setTimeStamp(0.8817823848833473);
    msg.setSource(15706U);
    msg.setSourceEntity(75U);
    msg.setDestination(4169U);
    msg.setDestinationEntity(41U);
    msg.op = 240U;
    msg.entities.assign("DDWTEWFOYHIPVZIYHPJPLJYVSDAHJWQYDFVRQZSUAVFGVSTPPOHGTTWJUJQEXNRIWINXFQMEOVGUORVIJNHKKQQSBJMXCUTPAPYOECA");

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
    msg.setTimeStamp(0.6717400740479406);
    msg.setSource(59271U);
    msg.setSourceEntity(42U);
    msg.setDestination(38014U);
    msg.setDestinationEntity(179U);
    msg.op = 193U;
    msg.entities.assign("YSFKNSQUXDXSUCJKGQLQZGLWVAPGIFORIYPLRJCMJABSHPHFFIVCLCTGBVDAIIICRKHW");

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
    msg.setTimeStamp(0.5558518104028386);
    msg.setSource(53205U);
    msg.setSourceEntity(120U);
    msg.setDestination(58177U);
    msg.setDestinationEntity(99U);
    msg.op = 171U;
    msg.entities.assign("QMWYOGELKQIVEUSXWZWJWPQWSFRAGGAEYTLPNAUFZSLUCTANNHLCX");

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
    msg.setTimeStamp(0.5386254295293175);
    msg.setSource(7444U);
    msg.setSourceEntity(54U);
    msg.setDestination(46587U);
    msg.setDestinationEntity(247U);
    msg.type = 31U;
    msg.speed = 48595U;
    const char tmp_msg_0[] = {106, 50, -73, 81, -46, 59, -107, -64, 121, -20, -28, -7, 7, 88, 19, 76, -6, 100, 89, 17, 14, -51, 123, 125, 114, 55, 28, -59, 27, -43, 14, -48, -9, -108, -58, 79, -121, -4, -88, 122, 123, 70, 123, -103, 85, -6, 78, -4, -17, 1, -44, -18, 112, -96, -72, -13, -13, -111, 35, -51, -52, -39, -86, -89, 118, 70, 13, -56, 59, 119, -80, -55, 19, -1, 45, -3, -56, 116, -117, 96, -66, 39, 27, -71, -42, -3, 55, 74, -90, -120, -3, -15, -8, 95, 25, -57, -50, 31, 50, 117, -127, 97, 90, -91, 94, 46, 97, 97, -44, 15, -73, -27, 93, 33, -95, -47, -95, -40, -100, 2, -29, -32, -119, -63, 126, -88, 5, -80, -114, 21, -43, 105, -67, 81, 102, 119, -29, 43, -49, -89, -84, 118, 9, -120, 76, -10, -64, 49, -61, 64, -5, 67, -2, 68, -59, -92, -82, 22, -124, 123, -104, 43, 115, 120, -91, -92, 126, -80, 57, -82, -24, 67, -119, 98, 28, -45, 25, 108, 4, 61, -3, -82, -44, 57, -83, 63, -3, 94, -40};
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
    msg.setTimeStamp(0.2105440567461695);
    msg.setSource(22772U);
    msg.setSourceEntity(101U);
    msg.setDestination(57357U);
    msg.setDestinationEntity(197U);
    msg.type = 117U;
    msg.speed = 4104U;
    const char tmp_msg_0[] = {-74, -66, -9, -59, 105, -99, 114, -5, 122, 82, -96, 54, 80, 23, 72, 103, 37, 90, -1, -127, 11, -89, -29, 103, 108, -42, 89, -11, -122, 94, -47, -51, -99, 106, 120, 76, 81, -64, -60, 32, -20, 46, -109, 111, 71, -1, 59, -40, 37, 79, 79, 46, 65, 110, -5, -88, -40, -85, 39, 10, -122, -48, 69, 39, -114, -20, 17, 86, -103, -58, 52, -75, 39, 4, 38, 118, 105, -53, -30, 87, 52, -87, -41, 90, 114, 121, -59, 29, 34, 31, -20, -73, -29, -81, -26, -13, -120, 36, -47, -106, 75, -47, 28, -62, 20, 93, -72, -122, -67, 28, -26, -55, -33, 38, -80, -39, 73, -80, -83, 8, 107, -47, -119, -32, 30, 106, 120, 41, -51, 66, -34, -102, -42, 7, -73, -82, 41, 0, -72, 63, -58, 33, 74, -62, -33, -38, 8, 4, 60, 58, 57, -115, -91, 9};
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
    msg.setTimeStamp(0.21857163464638785);
    msg.setSource(48907U);
    msg.setSourceEntity(121U);
    msg.setDestination(20966U);
    msg.setDestinationEntity(155U);
    msg.type = 57U;
    msg.speed = 65377U;
    const char tmp_msg_0[] = {-13, -35, -104, 76, 48, -11, -114, -37, -58, 78, 16, 50, 96, -77, -39, 35, 79, 51, -117, -123, 91, 103, -41, -60, 56, -46, 17, 97, 67, 16, 40, 94, 109, 70, 14};
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
    msg.setTimeStamp(0.15678278968552384);
    msg.setSource(34160U);
    msg.setSourceEntity(90U);
    msg.setDestination(5654U);
    msg.setDestinationEntity(60U);
    msg.op = 122U;
    msg.tas2acc_pgain = 0.7721420571196012;
    msg.bank2p_pgain = 0.9031179584951314;

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
    msg.setTimeStamp(0.03102598504196763);
    msg.setSource(5975U);
    msg.setSourceEntity(189U);
    msg.setDestination(2216U);
    msg.setDestinationEntity(18U);
    msg.op = 183U;
    msg.tas2acc_pgain = 0.27031366415735103;
    msg.bank2p_pgain = 0.5596660856749378;

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
    msg.setTimeStamp(0.3240149151778742);
    msg.setSource(35827U);
    msg.setSourceEntity(166U);
    msg.setDestination(40242U);
    msg.setDestinationEntity(254U);
    msg.op = 137U;
    msg.tas2acc_pgain = 0.8942287153267113;
    msg.bank2p_pgain = 0.2949454569619777;

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
    msg.setTimeStamp(0.19573657869968253);
    msg.setSource(19469U);
    msg.setSourceEntity(130U);
    msg.setDestination(30962U);
    msg.setDestinationEntity(187U);
    msg.available = 2853406930U;
    msg.value = 32U;

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
    msg.setTimeStamp(0.35696944792318974);
    msg.setSource(57374U);
    msg.setSourceEntity(240U);
    msg.setDestination(63523U);
    msg.setDestinationEntity(217U);
    msg.available = 1562689134U;
    msg.value = 116U;

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
    msg.setTimeStamp(0.025634302313335855);
    msg.setSource(5308U);
    msg.setSourceEntity(42U);
    msg.setDestination(31069U);
    msg.setDestinationEntity(227U);
    msg.available = 3017031661U;
    msg.value = 188U;

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
    msg.setTimeStamp(0.4627182274013403);
    msg.setSource(42536U);
    msg.setSourceEntity(188U);
    msg.setDestination(34910U);
    msg.setDestinationEntity(124U);
    msg.op = 212U;
    msg.snapshot.assign("LRKQZUFSYJQBDTMSJNKIGMASGHCXIRAPECVGITCPNLPVNRQRAIRZULDYZOMHXO");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.12057869946312405;
    tmp_msg_0.x = 0.5900885528635279;
    tmp_msg_0.y = 0.5549951729055905;
    tmp_msg_0.z = 0.3650380523164781;
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
    msg.setTimeStamp(0.21626090655902297);
    msg.setSource(62919U);
    msg.setSourceEntity(74U);
    msg.setDestination(51438U);
    msg.setDestinationEntity(44U);
    msg.op = 174U;
    msg.snapshot.assign("WSFUCPGCEEVFQMIUHNXGIUCLBZILUTKPBPJMOYPGLXFBEAHVMVIREYCELGHFWQYTJVFATANKCJZSTHTIXASRBKTZDABGSARFCUKDHMXZHDLMUYSZMZEYOLRETMZJSWVONQOGLKZUMHKFPFTNJIGSLWHNV");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.16933955846177795;
    tmp_msg_0.x = 0.4721076839740995;
    tmp_msg_0.y = 0.7645337322076757;
    tmp_msg_0.z = 0.920443901673576;
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
    msg.setTimeStamp(0.5920355144866283);
    msg.setSource(42343U);
    msg.setSourceEntity(235U);
    msg.setDestination(13376U);
    msg.setDestinationEntity(108U);
    msg.op = 116U;
    msg.snapshot.assign("UNRRPECXHIVWGCOPU");
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 191U;
    tmp_msg_0.mask = 2398906138U;
    tmp_msg_0.scope_ref = 1889313576U;
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
    msg.setTimeStamp(0.7462450913575767);
    msg.setSource(20063U);
    msg.setSourceEntity(51U);
    msg.setDestination(59920U);
    msg.setDestinationEntity(23U);
    msg.op = 232U;
    msg.name.assign("UHSPKVWLYKCHFFIZWZZYQXXIAWYBRQHSAFKJJBTGZUTYXWQDAXNBJNR");

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
    msg.setTimeStamp(0.9005724228782849);
    msg.setSource(3519U);
    msg.setSourceEntity(227U);
    msg.setDestination(46432U);
    msg.setDestinationEntity(214U);
    msg.op = 95U;
    msg.name.assign("TCJLWRPXLJVUNSEYUFLPXEPXQYPQCQUWDJDERMOMGGWLYB");

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
    msg.setTimeStamp(0.2769940734197778);
    msg.setSource(35000U);
    msg.setSourceEntity(196U);
    msg.setDestination(6134U);
    msg.setDestinationEntity(106U);
    msg.op = 113U;
    msg.name.assign("XLKLEPDILFIEPLNFPVZWKDEABAHXMDPSNRJCFBXHCKYLBQUATAHRNIBOGFULBVZOOZHYJGPXXGGMYYCWUZEIKDZNCJXDFXNWFUOGVSRKTSZATYQORBILLVWEVNCCMTKCTNOUASHQLQEAIRNIXZGXTVWOJSETHRTFCAVIPYTVVWSFTGHAOOMEFWCSQRMAJNXBMDRUJGMWRBYHMCRILDQZPGKUUSHKGDHEISEJWNZYMVQUMFWJBPUKPYS");

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
    msg.setTimeStamp(0.04116018260989962);
    msg.setSource(25220U);
    msg.setSourceEntity(213U);
    msg.setDestination(52953U);
    msg.setDestinationEntity(46U);
    msg.type = 159U;
    msg.htime = 0.8730182835870428;
    msg.context.assign("FORQWPTHYKURWLJIZBQKBDCRTGUBENXIBXNMPUKPNNMWUTYYLDJHEYXKUHOOATTIC");
    msg.text.assign("EWYDAYIWWQKPAJKZUCOQGGADMXKCNVFIXPTDEJKHWFZRMZWERBFKSBSYZZPLHWIMNRROETHK");

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
    msg.setTimeStamp(0.3595109428065796);
    msg.setSource(12825U);
    msg.setSourceEntity(207U);
    msg.setDestination(54094U);
    msg.setDestinationEntity(249U);
    msg.type = 144U;
    msg.htime = 0.5614114448672035;
    msg.context.assign("UGYRVAFSEJKMUBODKTWNWTIKNSGMXUHPMLCMLMWDODKOWNOGSPNADJBKKTVUCMIRCHHCIGKNUZBYCFXSWONBFZOVZERQXTJAFSQZVPUVEJVAPJRJWSNYCZXAEMBRLXZARFZHSHQQOPSEUHEFSZUIBYPX");
    msg.text.assign("IQKBXCBBAKCCTNKPHNNBKZSMMIZSYYPHWIZKRCVJQVWEEOBDXATYZRRNNMXFLCMDNHULOYEAQHFCOAXVQXDEWGYSQHZJVVMZLGSJLBIIQMUDGLPTCGXVZWQPFKAYIDHUMSTUPRKFZJNJPOGVJTEBBPGWUFNDOUTJEC");

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
    msg.setTimeStamp(0.07506693810324916);
    msg.setSource(63929U);
    msg.setSourceEntity(71U);
    msg.setDestination(31075U);
    msg.setDestinationEntity(9U);
    msg.type = 133U;
    msg.htime = 0.8455193128466951;
    msg.context.assign("OWVLGQJLTPNM");
    msg.text.assign("EJTQWNALSNJJZQSPGUEXWSKMCEVBHJZFBUKLWAATHSOHHQQLDJOEWDVSVRPIFCGAWIIBKIBDPDZDFZDQHCLSWYYHMQRKPTNFBBCXRHYMPAMRTTGGAMAVNDJPXVICNSRSFRYCXURTZUEVYGOMZXKNBENRASVXEJXMQG");

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
    msg.setTimeStamp(0.5988624364813608);
    msg.setSource(19749U);
    msg.setSourceEntity(176U);
    msg.setDestination(47460U);
    msg.setDestinationEntity(105U);
    msg.command = 19U;
    msg.htime = 0.390219795434124;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 113U;
    tmp_msg_0.htime = 0.16004477851940824;
    tmp_msg_0.context.assign("BIBBFARBWOJLTCMHVLZMLRCCEFBPQYPORNVWPJKOXMNFPJOTXRKT");
    tmp_msg_0.text.assign("MZJYHXNIIHHJIBZKJRRPXEWUBJKHQNOTBRTFJELKFRPIQRDVYPHSQVAMBRHNQSEKZKBYDMCXCPELSWCODLXRXCDOFYJGWVAMBNPVMFYUGWQTGEXOEMVPLFMNVYIZYQGQPKNKZOUACASZGTCGSOOCYQOTXUVVDJJIGTCEONUPZUDTTWYSESTAEDYWAKSQBM");
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
    msg.setTimeStamp(0.5275061283934549);
    msg.setSource(32501U);
    msg.setSourceEntity(233U);
    msg.setDestination(52050U);
    msg.setDestinationEntity(130U);
    msg.command = 106U;
    msg.htime = 0.944170863083026;

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
    msg.setTimeStamp(0.7913516783204491);
    msg.setSource(43346U);
    msg.setSourceEntity(34U);
    msg.setDestination(12417U);
    msg.setDestinationEntity(182U);
    msg.command = 34U;
    msg.htime = 0.8228187303941278;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 58U;
    tmp_msg_0.htime = 0.4564590135603206;
    tmp_msg_0.context.assign("IUIHYEONAMOEOJXNVJCJMKOROVQJGSGBCMCGDILVRZSHWTKRIYYHFBPGSFFQWLZEXAHEYDKCZZASQYORCDOWEXJKBLPDPFBBONMSBPMFWPVYUTRHDSPBHFGQDFVSTIUUZIFJKHYKNDCPREVXAANRBMLNKTKIUECWAKRUAJUFZWQZHLLDUGQZHWDXWRJISXAMGEPXTIMBJINQWMSDTJBMEXTLVCYRONXPCALTVLLSQAZPZUHYK");
    tmp_msg_0.text.assign("VZXNPSNOGXXJADKXOLCYZJTBWIPLWCIIHQQURNPJKSFYCWZEBCHRXYLJMQBBDOUUOXDPBELBKPTFVFZNHMISLWUODYOQVWLVRFFYKKGFIQWPRMYATCFVNERHWAZKRXVRNJUSNAKUVE");
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
    msg.setTimeStamp(0.9723165980351064);
    msg.setSource(54558U);
    msg.setSourceEntity(237U);
    msg.setDestination(3083U);
    msg.setDestinationEntity(81U);
    msg.op = 225U;
    msg.file.assign("KJVRHZXISPTQTDZHBBPSMMOPWJKXBEEQWMJATGUTFWOQCYZEOBDHDIFUMFPHWXIUDQAYWGZXLXJSNVBVPNVQGPLSRUSCEFGNOPOUORYNVCATCCQTWQJLIRODKDJLUUJMSRYMYF");

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
    msg.setTimeStamp(0.8263074474523583);
    msg.setSource(29532U);
    msg.setSourceEntity(0U);
    msg.setDestination(21184U);
    msg.setDestinationEntity(176U);
    msg.op = 50U;
    msg.file.assign("AOVOJCMGBLKPBWGHQRTMCJJMSLMJYVBEZZOQDOJKUOCZLNKSSWZKDGA");

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
    msg.setTimeStamp(0.6661493983213241);
    msg.setSource(24010U);
    msg.setSourceEntity(19U);
    msg.setDestination(56856U);
    msg.setDestinationEntity(23U);
    msg.op = 230U;
    msg.file.assign("RISKZMKXOXWHURFQUJRWYUOCQPMLYIOSAQEHQNQBHJCLRSKGPMEQQMJEVIVHAWDMDIFLYVTPZ");

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
    msg.setTimeStamp(0.01817162235093328);
    msg.setSource(660U);
    msg.setSourceEntity(229U);
    msg.setDestination(59630U);
    msg.setDestinationEntity(63U);
    msg.op = 139U;
    msg.clock = 0.7873530972587562;
    msg.tz = 61;

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
    msg.setTimeStamp(0.8728854736183606);
    msg.setSource(13002U);
    msg.setSourceEntity(6U);
    msg.setDestination(43006U);
    msg.setDestinationEntity(225U);
    msg.op = 85U;
    msg.clock = 0.8811355644315538;
    msg.tz = 47;

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
    msg.setTimeStamp(0.6308121894887665);
    msg.setSource(34702U);
    msg.setSourceEntity(119U);
    msg.setDestination(36080U);
    msg.setDestinationEntity(79U);
    msg.op = 99U;
    msg.clock = 0.6515251875956459;
    msg.tz = 78;

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
    msg.setTimeStamp(0.48753546215541244);
    msg.setSource(6199U);
    msg.setSourceEntity(229U);
    msg.setDestination(21416U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.35627088261435336);
    msg.setSource(29199U);
    msg.setSourceEntity(231U);
    msg.setDestination(25302U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.5074201609959275);
    msg.setSource(49032U);
    msg.setSourceEntity(216U);
    msg.setDestination(41579U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.6211254116726369);
    msg.setSource(20672U);
    msg.setSourceEntity(65U);
    msg.setDestination(42196U);
    msg.setDestinationEntity(129U);
    msg.sys_name.assign("OQNLQGWTRCWTYRTAZCDOQUYBJXHLGVDFQAQMVUIGJJZEGNPXCISYVOGSKARMKLRQYCBDAIYMOPKHPRNUIZBKWEXIFHOKKDOBSYEXKBQJTWEDEXUSAHZMHHWLWANNWTMLIXZIWLPVNTFXYSBVXEZNZUFFEBFHRGRPWTCASCDPENDWUSMPGAEQRIONCIRGKSMXSVJMYNYKUKUPGPJFDJHDIRVOFVTMZEBCFJZOPAX");
    msg.sys_type = 16U;
    msg.owner = 22796U;
    msg.lat = 0.7018705633202219;
    msg.lon = 0.027291609497286373;
    msg.height = 0.5706928952689744;
    msg.services.assign("TIDYHKXCDJYMQXJDAOLNJSMGROUVSVATRZOGTSHFSYALZADTNIGYPIONAKFXESOAZVXNWPQJJRAFEZBPNXFMZUDHEYLTJBBCSKMACQKNKZYMLITCUDVJGIQECBDXLNIUFHOZC");

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
    msg.setTimeStamp(0.08047569325989501);
    msg.setSource(5658U);
    msg.setSourceEntity(7U);
    msg.setDestination(62432U);
    msg.setDestinationEntity(102U);
    msg.sys_name.assign("HPDTHDTHIOOGXAKVMALMDIXQSSOWGCYMAQXFVKVIZQNWGTSRFCWGDRLJTMZIQFVKCLBOZWTFMXRPNRRAIXZOEEOVBRQGCFNKMCYSMUXNEXIJUKYEAQHDGWDCMGISFUFHWTLUWBYZDJICTQJBZEXPNYBHULNIHPQLLVPPINAYZTSEOFSETJGM");
    msg.sys_type = 235U;
    msg.owner = 43672U;
    msg.lat = 0.5182020308494149;
    msg.lon = 0.6231868351735494;
    msg.height = 0.33729954861442346;
    msg.services.assign("QOJQSILMBFVCGAFJIPOVFU");

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
    msg.setTimeStamp(0.7067653800166691);
    msg.setSource(32686U);
    msg.setSourceEntity(79U);
    msg.setDestination(51312U);
    msg.setDestinationEntity(146U);
    msg.sys_name.assign("RZPXQGNCBPNSNTEHJFQTQMMXMEGEZKMCIUIOJYFGSYJMYMYFLLDCZVDVIQOXINFQQZPWTAABJSVLUEVAVZCOXBUEIHSEJJTDDTYOBHKSBFAHAXRHIDTHXF");
    msg.sys_type = 24U;
    msg.owner = 62337U;
    msg.lat = 0.8686650539680795;
    msg.lon = 0.5834934173905875;
    msg.height = 0.07055426114091756;
    msg.services.assign("QMSNJWRBMSKFUHSLHVYKMYSOMSFAGIBROEXXIWIZBVGABTNELZYKUFVNQQJQDBXDBCUAAXSLJHERQOHJJTCWOIRPMKYVVLHVWOCPBJLDTBEIXDDXHUKDPXNNHDGSRTEIGXZPAUOPVJSBWFNGWONRJCEE");

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
    msg.setTimeStamp(0.8071798912923036);
    msg.setSource(5198U);
    msg.setSourceEntity(199U);
    msg.setDestination(4156U);
    msg.setDestinationEntity(114U);
    msg.service.assign("CCTMCUSAMBKRWOPMIUVOGXGRVRKEKQNTDQJXEANAAERLLIXPOLNBKKNONIHHHDJLQJPGQCRMNGAEBNYSKIIZCTXYXZRZSIEFJD");
    msg.service_type = 14U;

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
    msg.setTimeStamp(0.727487598470404);
    msg.setSource(36605U);
    msg.setSourceEntity(50U);
    msg.setDestination(8153U);
    msg.setDestinationEntity(187U);
    msg.service.assign("LBHDTYZUXYXUUCGYQNVHVMRGTWGACKFXNCPFYQVKNUUUWJMYQNCHOSGXGIPOZTHVRZIWNEUIOLPQQFENHXRORNKMPVDXOMAAFGYJBWZOEGCEAPNLLSYIICBOOGV");
    msg.service_type = 177U;

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
    msg.setTimeStamp(0.1103798534922199);
    msg.setSource(25601U);
    msg.setSourceEntity(136U);
    msg.setDestination(56604U);
    msg.setDestinationEntity(178U);
    msg.service.assign("JEQULESMXGCKJGSVHLWHWNCICBWPRDLALWTZOPVNJTPEYQXCEKUBSNIPYJQLOJLDMFYXUDHOYKRXJVPAMFRZUZHSTFGURYUAQMPEXOQXTBNGCSZNQDJQWAZXYLTWDFISDISFIXBARCMDDZZKNTJEOVKHKQYARABIWEBUIFXIWGOKAKIRBSRCEHGMEFPZUABVMVWTNLGK");
    msg.service_type = 191U;

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
    msg.setTimeStamp(0.24254620822489614);
    msg.setSource(33277U);
    msg.setSourceEntity(194U);
    msg.setDestination(28574U);
    msg.setDestinationEntity(146U);
    msg.value = 0.31053469794603483;

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
    msg.setTimeStamp(0.14593225845995716);
    msg.setSource(39079U);
    msg.setSourceEntity(119U);
    msg.setDestination(21228U);
    msg.setDestinationEntity(231U);
    msg.value = 0.5347367738503102;

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
    msg.setTimeStamp(0.9977923627264041);
    msg.setSource(12934U);
    msg.setSourceEntity(186U);
    msg.setDestination(1421U);
    msg.setDestinationEntity(211U);
    msg.value = 0.7569554555550586;

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
    msg.setTimeStamp(0.3718148651297021);
    msg.setSource(45721U);
    msg.setSourceEntity(233U);
    msg.setDestination(18714U);
    msg.setDestinationEntity(54U);
    msg.value = 0.1190204252718936;

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
    msg.setTimeStamp(0.8234961070621712);
    msg.setSource(34666U);
    msg.setSourceEntity(154U);
    msg.setDestination(9977U);
    msg.setDestinationEntity(239U);
    msg.value = 0.2696834152072759;

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
    msg.setTimeStamp(0.1168145769614024);
    msg.setSource(36291U);
    msg.setSourceEntity(236U);
    msg.setDestination(19327U);
    msg.setDestinationEntity(11U);
    msg.value = 0.25738623947718386;

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
    msg.setTimeStamp(0.7062008054534946);
    msg.setSource(49564U);
    msg.setSourceEntity(8U);
    msg.setDestination(49277U);
    msg.setDestinationEntity(227U);
    msg.value = 0.7459748297222567;

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
    msg.setTimeStamp(0.4787226223234895);
    msg.setSource(59047U);
    msg.setSourceEntity(186U);
    msg.setDestination(24750U);
    msg.setDestinationEntity(21U);
    msg.value = 0.10479257625583949;

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
    msg.setTimeStamp(0.02085153348964497);
    msg.setSource(7452U);
    msg.setSourceEntity(62U);
    msg.setDestination(56142U);
    msg.setDestinationEntity(124U);
    msg.value = 0.020546183782483185;

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
    msg.setTimeStamp(0.9304997046317931);
    msg.setSource(52214U);
    msg.setSourceEntity(219U);
    msg.setDestination(48873U);
    msg.setDestinationEntity(172U);
    msg.number.assign("JLHOMBGEIIMQAFZCXBPVCLQAEMNFWNHJVPXYMOUKFSMESQXCZGTXXTYLCEWMWQTZBFJVAQGVHXYYVPYHTUOFZNUTOA");
    msg.timeout = 19835U;
    msg.contents.assign("LVDNROJWGHAMCOXXHISPUZXWJURSOREUUXCYQETEYMAQBVOQWKFQYLFCHZGBAMQWCLZNRJLAVLHGNKZEACDQPDKSYBZBVVPKGIRCBXQNLJOKSLJPDYUPOPGZ");

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
    msg.setTimeStamp(0.07759760330508536);
    msg.setSource(11827U);
    msg.setSourceEntity(157U);
    msg.setDestination(54858U);
    msg.setDestinationEntity(81U);
    msg.number.assign("JRPKWQDAGTJUMULIWSWYNASTKGSTQYJWHIHARZQXGPAIEEIJHTLGCHAWMJIYFEUGNIZSPSRKMWTJKFACYIVTQUSNGFCDBOPHBDXCSWSLQUCNQLKHFJWKUMXRENIKDZVPRGXYOVXLVULMLQZLZM");
    msg.timeout = 2856U;
    msg.contents.assign("XPXLGYKMTHRAEPQGZOLUUAERWQQNTPOSIRORWXFXKBJCMGJKNGIBDUSSIJFLDZNLYBKRNVBZSV");

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
    msg.setTimeStamp(0.44225934213854223);
    msg.setSource(54374U);
    msg.setSourceEntity(99U);
    msg.setDestination(41034U);
    msg.setDestinationEntity(197U);
    msg.number.assign("SEDVSYAHEATLUITPJKGHSEVWIABSOOKGPUQSNBBDWHJDIJQV");
    msg.timeout = 54360U;
    msg.contents.assign("UZZHRYVUTHADJIBWMDNQLCQ");

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
    msg.setTimeStamp(0.6828754520464543);
    msg.setSource(60608U);
    msg.setSourceEntity(235U);
    msg.setDestination(12580U);
    msg.setDestinationEntity(189U);
    msg.seq = 2021823531U;
    msg.destination.assign("RECGZGYMCWPFYQTMPEXOUNOWAWSKYNJYZTVBAEWTDORVVXKLKIEHYIESKQFEJHKIJBNMPBNZYFHDFGWCJIFQNMEIFAZXRCOJUDXGCBHBVSDYWVJVGDLLCQLMOBXWLJEAFFVPRZAKPNKDWSLUQFQHSNO");
    msg.timeout = 11453U;
    const char tmp_msg_0[] = {74, -2, 67, -51, -45, -40, 84, -14, 90, 123, 62, 97, 75, -81, -121, 119, 62, 122, 60, -8, -49, -13, 43, -74, 62, -121, -68, 48, 1, 43, 27, -29, -67, 55, -44, 27, 40, -64, 20, 6, -103, -100, 56, -21, 0, 56, -78, 0, 88, -4, -97, 104, 46, -128, -66, -87, 51, -121, 122, 55, -60, 92, -66, -23, -120, 2, -15, -114, -10, 22, -88, 47, -86, 59, 42, -76, 63, -29, 109, -5, -103, -5, 51, 64, -16, 26, -51, 78, -73, 54, -26, 44, 48, 94, -119, -62, -52, -67, -35, -34, -90, 60, -91, 113, -123, 56, -57, -21, -73, -106, 102};
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
    msg.setTimeStamp(0.4831799166955312);
    msg.setSource(28850U);
    msg.setSourceEntity(52U);
    msg.setDestination(43966U);
    msg.setDestinationEntity(72U);
    msg.seq = 677823540U;
    msg.destination.assign("UKZWDAHTHGVYILZVBPPXFBQPOGPJPENXBNIAOTTJUUGBPAQCWHTQMIVJSEQJFBOMAHDURTRJGUKTZUWOIAUSNOCNZL");
    msg.timeout = 24956U;
    const char tmp_msg_0[] = {119, -51, -18, 55, 85, -39, -22, -56, -35, 45, 115, -99, -34, 85, 65, -117, 40, -119, -127, 69, 27, -110, 105, -85, 44, -16, -76, -89, 74, 87, -70, -92, 114, 19, 102, -54, -5, 17, 58, -12, 124, 99, 35, -29, -52, 73, 105, 68, -92, -9, -53, 45, -72, 123, 58, 47, -85, 7, -112, -125, 27, 85, 40, 75, -45, 105, 29, -68, -63, 16, -120, -22, -102, 0, -78, -69, -52, 73, -58, -115, -6, 59, 12, -13, 102, -100, 15, -80, -62, -14, -56, -19, 40, -89, 22, -126, 9, -99, 3, -85, 52, -46, 96, -66, 36, -84, 16, 5, -40, 14, 113, -8, 83, -64, -21, -69, -69, -32, 97, 117, 121, -13, -26, 55, -76, 113, -79, -119, 18, 41, 93, -42, -45, -94, 121, 94, 25, 70, 79, 94, -86, 66, -68, -14, 38, 4, -119, 106, 10, -67, 94, 61, 12, -37, -77, -20, 105, -107, -10, -72, 64, -90, 59, 43, -28, 35, -121, -102, -84, -66, -107, 52, -33, 66, 64, -47, 78, -3, 126, -76, 67, 26, -32, 65, -97, 70, 98, -110, 121, -97, -3, 86, -69, -67, 112, -84, -73, 85, -41, -111, -92, -3, -42, -115, -117, -111, 58, 30, 118, -94, -1, 9, 52, 66, 42, -94, -67, 76, -10, 11, 110, 50, 14, -100, -95, 94, 90, -126, -56, -83, 84, -55, 87, -6, 23, 26, -101, 48, 82, 16, -84, 75, -86, 49, -118, 61, -113, 84};
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
    msg.setTimeStamp(0.7595984748135187);
    msg.setSource(21685U);
    msg.setSourceEntity(139U);
    msg.setDestination(55913U);
    msg.setDestinationEntity(186U);
    msg.seq = 3629634590U;
    msg.destination.assign("SBNYZESMDXFSWIVGCAWMYLNSKSTZAOLNPQPCSYNRPOCNOUQUNOPQHOIJSKXWHMLATXMCZZGMJZBYRIBAMDEKCOTTVABJJTETGXKUMCAJPJIXSUGWJRMUJEDPKAMZWSAFWOLHTAEVVIDVFBDWQEGVOQHR");
    msg.timeout = 20806U;
    const char tmp_msg_0[] = {-23, 17, -97, 38, 56, 1, 46, -62, 46, -55, -44, 76, -81, 107, -87, 73, -113, -99, -99, -123, 24, 21, -26, -55, -42, 60, 42, 21, 124, 19, -67, -82, 11, 1, -103, 38, 17, -83, 9, -45, 56, 125, -106, 77, -117, -20, 71, -99, 21, 24, 88, 84, -3, -65, -13, 63, 108, -123, -4, 95, -96, -108, 48, -12, 7, -46, -70, 92, -97, 40, 1, -18, 112, 96, 88, 58, 16, 7, -122, -79, -92, -55, 34, -93, 89, 125, -76, -2, 120, -30, 100, -72, 122, 96, 75, -66, 59, -65, -69, -76, -106, 21, -102, -99, 46, -62, -126, 20, -48, 44, 89, -9, -59, -52, -69, 84, -106, 111, -7, -24, -62, -86, 23, 34, -76, -110, -2, 112, 46, 96, -18, -98, -105, 52, -82, 109, -117, 111, 45, -31, 85, 59, -58, 99, 9, -63, 75, 92, 12, 104, 48, -90, 124, -15, 20, -19, -63, -77, 41, -44, -100, -113, -97, 49, 87, -53, -15, -39, 78, -50, -83, 2, -75, 17, -15, 56, 124, -10, -17, -18, -52, 108, 81, 32, -70, -1, 59, -119, 6, -10, -103, 69, -95, 117, 11, -80, -51, -1, -108, 113, 40, 60, 6, 74, 17, 53, 35, -56, -128, -21, 107, -70, 60, -2, 85, 85, -13, -29, -94, -118, -113, -99, -70, 15, 109, -18, -91, -69, 89, 81, -86, -96, 13, -35, -23, 123, -56, 119, 41, -112, -38, -65, 123, 126, 78, -7};
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
    msg.setTimeStamp(0.8912042086122586);
    msg.setSource(32830U);
    msg.setSourceEntity(160U);
    msg.setDestination(13728U);
    msg.setDestinationEntity(49U);
    msg.source.assign("WAIPJCZZXFIPKOWZILDWDVGBTXXBWEGGSGIKNQHQBSHAEYMERZXVMYRCPCYCSMJNMWVNWLBUHBKSTZXTAFVCTOTNLTFKAVIOCEPDUHPONVNYBFJMUPWVUGCEHEDGVBQZRXLBOFGARZQWEUKPXQOVNYHYDLHTWUQXILBOFSKYNAIBHNJKOSESQUTLQGQMQCXPZGPRCFNSAZESJUDXVR");
    const char tmp_msg_0[] = {-116, -36, -16, 67, -116, 62, 121, -111, 88, -115, -66, 125, -74, -90, 116, -98, 80, 120, 120, 10, -49, 101, 32, 11, -11, 31, 48, -44, -127, 118, -100, -33, -103, 27, 124, -6, 118, -46, -93, -2, 30, 36, -63, -96, -87, -45, -122, -33, 94, 50, -98, -49, 60, -116, -72, -51, -5, -126, 10, -109, -111, 30, 92, 46, -58, -87, -95, -47, -70, -37, -70, 109, 79, 116, -8, -117, 126, -61, -107, -116, 91, -84, 119, -41, 6, 19, 84, 7, -97, -117, 54, 65, -55, -111, 13, 60, -78, -19, -6, -24, 9, -96, -77, 19, 38, 51, -93, -3, 110, -107, 99, 107, 58, 11, 36, -13, -73, -98, 0, 38, -117, 8, -26, -91, 113, 34, -61, -127, -51, -2, -117, 33, -72, -23, 109, -81, -80, -100, 108, 80, 50, 91, 56, 70, 26, 15, -113, 7, 110, -13, -20, -103, -74, -85, -65, -87, -18, 27, 19, 98, 105, -91, 53, -126, -19, 74, 63, -96, -16, -66, 107};
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
    msg.setTimeStamp(0.7494386480387945);
    msg.setSource(51283U);
    msg.setSourceEntity(242U);
    msg.setDestination(61140U);
    msg.setDestinationEntity(184U);
    msg.source.assign("NQJSBQZXEFLGYGFLISTUUDJXJXRCBFMPFBZGACWFXVJVOTHRFKRCVNNMVUBDKCKVNPLQRMCETSSSNKMITKJMZUFQVEMTJWWBWYIUEHARLEZZEDGXSRXDGPPSEOOMICJYOHJIIPLNSHXOTUZZDLSMYKURADMWKNAIEUYGHWWPHLDTHAGCQPEFQBPVOQB");
    const char tmp_msg_0[] = {-93, 107, -102, -108, 121, 17, 95, 99, 61, 121, 60, 24, 57, 31, 95, 72, -26, 111, -116, 38, -84, -83, 53, 4, -36, 0, 96, 34, -14, 77, 35, -44, -98, -66, 23, 23, 45, 0, -45, -68, 37, 108, 5, 65, -125, 0, -3, 126, 10, 67, -16, 82, 1, -96, 31, -8, -44, -116, -34, -37, 45, 11, 64, 50, 78, -41, 113, 5, -19, -94, -20, 28, 76, -73, 4, 69, 56, 31, 38, 73, -75, 109, 34, 7, -103, 98, -118, -48, 121, 0, -53, 90, -89, 38, 108, -28, -79, 124, -25, 74, -122, 90, 89, 5, -6, -127, -36, 75, -75, -127, -22, 58, 103, 78, -126, 64, 51, -41, 89, -17, 90, -83, -37, 97, 63, -85, 31, -18, 57, 34, 47, -51, 103, 36, -70, -68, 48, -127, -81, -93, 65, 83, -119, 52, -57, -13, -40, 77, -6, 45, 95, -98, 53, 90, 54, -20, 43, -96, -66, -69, -33, -77, -49, 124, -34, -26, 36, -20, -123};
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
    msg.setTimeStamp(0.1434618301879813);
    msg.setSource(42124U);
    msg.setSourceEntity(181U);
    msg.setDestination(8672U);
    msg.setDestinationEntity(29U);
    msg.source.assign("KEGMLSFLPGEWVJABDDPTZBFCMFWWLDITGDYPKSTGBJXQARKOSPZBEMGGRORZCMNVUVXEFCUSTNRQUIVJNRIYHXRDDTKAYHOVNYJCXCEAHVINFMQMAMLFATFCKMYLKMIVIPFKDBIWSWUBNBSHHYCOLXEOAOFPYHITJCQZUPSIXHWMNXWKQASUUEOXYOTJCIVQYGAQNPETODVYHHEBS");
    const char tmp_msg_0[] = {-56, -18, -109, -38, 84, 11, -114, -107, 113, 116, -9, 119, -29, -89, 54, -66, -122, 85, 28, 87, 97, 100, 18, -9, 61, -28, 81, -99, -37, -93, 109, -78, 30, -56, 55, 126, 15, -45, 76, 17, 125, -64, 52, 0, 118, -99, 120, -31, 69, -116, -59, -108, -56, 115, 96, -80, -46, 99, -33, 10, -53, 25, 108, -118, 4, 0, 23, 122, -99, 25, -51, -74, -31, 12, 13, 12, 2, -80, -26, -27, -45, -6, 117, -126, 56, -17, 77, 35, 12, 76, -42, 25, -46, 79, 61, -83, -112, -26, -92, 3, -27, 73, -103, -9, 37, -107, 109, -53, -85, 37, 108, -53, 32, 76, 8, -7, -58, -64, 34, -10, -55, 117, 74, 51, 15, -3, 122, -122, 5, -59, -27, -33, -24, 31, -98, 121, 18, 70, 112, -125, 87, -84, 2, 66, 94, -72, 108, 108, -118, 83, -22, -16, 112, 38, -37, 24, -33, 76, 16, 115, -70, 111, -82, -119, 9, -126, -59, 60, -73, 0, -11, -128, -74, 99, 82, -121, -85, 44, 107, 1, 85, 88, -76, 120, -95, 49, -47, 20, -11, -6, -101, -25, 83, 97, -76, -13, 26, -22, 81, 25, 61, -27, 74, -49, -97, -121, 113, 9, 82, -77, -56, 58, 2, 65, 51};
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
    msg.setTimeStamp(0.43182596124513484);
    msg.setSource(63154U);
    msg.setSourceEntity(243U);
    msg.setDestination(38479U);
    msg.setDestinationEntity(232U);
    msg.seq = 827835995U;
    msg.state = 100U;
    msg.error.assign("JZFGOZSLPINYAQUKOVDFAVLBOWZMTXODHAOUNCLERUSIKRKKJRGLZGPSYTPIQBHUGQMUQEQWOFDGRQLTGUJFZMKRPRYERMKWFPWDXJZYAXDGEUQBYSWBVEHJXCTHAVLYXX");

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
    msg.setTimeStamp(0.6273731417294152);
    msg.setSource(63651U);
    msg.setSourceEntity(62U);
    msg.setDestination(2146U);
    msg.setDestinationEntity(237U);
    msg.seq = 917766614U;
    msg.state = 78U;
    msg.error.assign("OSTENPXXOFALFYAWJBRJLHOTLZRQHVHPNWNYAEXGNIZDYTARZMKBUWMUPJFRUOHOQPYCMQYFGBSHOFUDKYMRUVDMSQJQEPMVXAJTEPSGXLUOYPZLIVW");

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
    msg.setTimeStamp(0.9961937920057438);
    msg.setSource(35405U);
    msg.setSourceEntity(220U);
    msg.setDestination(26652U);
    msg.setDestinationEntity(215U);
    msg.seq = 299237453U;
    msg.state = 162U;
    msg.error.assign("GTACCQXLUDBIIOBGBIENOPBEEUWTCNQJVEMEGKSEIGDVJKXOSPCMNOKFKOXNZY");

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
    msg.setTimeStamp(0.06840699166567898);
    msg.setSource(31716U);
    msg.setSourceEntity(87U);
    msg.setDestination(12564U);
    msg.setDestinationEntity(38U);
    msg.origin.assign("IUILCSLJXHCFJAUGKYEOFTZETHZOVBXJWPJQJQBVDGBSQIULDKGSZZKRQHPQETFPYCKEYFPMHFYWCIVOXDCHHOEOAGVRUOAWRDAAWUIXRFTDQJOC");
    msg.text.assign("CQAGEDWLGIVHIKANQPAXVPWQBGOPDHTEXYBWCNMCPRDSOIWTCQAFLVJNQQQZMLAJBKDRCQTZAMNZURLSJIGZKLUKVPVMBQETBMDECKIEABJHQRHYULJFIXDUEOEDVASOHYLPXSXSCNKYBZZ");

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
    msg.setTimeStamp(0.6090648213700954);
    msg.setSource(26072U);
    msg.setSourceEntity(88U);
    msg.setDestination(39311U);
    msg.setDestinationEntity(197U);
    msg.origin.assign("NVOELVQYJTWAYVQSAXNOUOYFQWUAHBSREUAFTFMXPTHZTYEGJJRORVMGTWEKSISOFSPHZBVCXPJQUELPKMPDBCAXITRCVPNRDUBJRVAKGKEIUDGAHKSDKGCXPTJKXREDNBAFLLTQYBORIWSILHGJZBNCBZNNNGMVDFMVGOELDRXKIZJOEYJHSZKUHYPFQZDIMUWZISMWCJLCLQGYLAUFFPFHX");
    msg.text.assign("XVBQFHIGTUURSPQDUKNMHLASSQSOCOZMGBLUTMGXPEHVEJBNPFQYLXFTFBJWYOIBVJIFYIUTADYPSQTJUIEGCAFEQUYPTMOOKDGCNZZZBJZRHYNEEGYNWGJJQRKNXNLHVDVBKAGCOIZKUGZFWXLMYHBDCRGCEAOFQKXZLXSTVQLXKWIUASHCVMDPWXCAROISAZIWQITR");

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
    msg.setTimeStamp(0.8575911991166356);
    msg.setSource(3411U);
    msg.setSourceEntity(185U);
    msg.setDestination(65184U);
    msg.setDestinationEntity(157U);
    msg.origin.assign("KRHQVHFANHFYWWPTYPLDXFESLYTQERJRCUAJTSKDMBOBKESSYPBCRGZNMUZAVYVORVTTWKZBOCRAJWFARUUMQZGUTNSAHLQCNVXFPNWMGZSAXLBEDCZSJP");
    msg.text.assign("NFLZBTINYMRCXGVVCSJIFGKVTGDAXBEYYNUSMJBUUKNQQKGISURNMPXPMAUFVYRZGLBIPSCUMOEQGXJOXPIWFRDCEHMIWUZAYYRJMDBMHACJPPUFTTDLINKTHLSYOLLADRBFCTVGOWIVWQOSZWMTHPFKEJZQXGHNYEDZQACWSIKNVZDJEJXHLOPRUROXHMFAXQQBOQTEIBDPUZT");

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
    msg.setTimeStamp(0.24268023682979767);
    msg.setSource(39755U);
    msg.setSourceEntity(92U);
    msg.setDestination(14421U);
    msg.setDestinationEntity(86U);
    msg.origin.assign("WVQLOJTAXUMVPIAEFVTHTMGAYOEXDBBJYYZXWHZIHSZOVPDFQXGODICKKTUDQRLLZSMEILHQTUOSPVIHTOPEFAELGMCWKAUHBNBOMXNYGULBQXOJLUFKLBYVMRUFZKCAZD");
    msg.htime = 0.555352572703002;
    msg.lat = 0.8679495027923824;
    msg.lon = 0.46261073256674967;
    const char tmp_msg_0[] = {-43, -29, -39, -122, -77, 125, -119, 97, -109, -29, 111, -22, -80, 4, 48, -69, -33, 105, -99, 97, 8, 0, 126, 97, 38, 51, 122, 119, 118, 33, -51, 30, -85, -9, -99, -10, -83, 30, 79, 65, 76, 123, -15, 0, -71, -42, 29, -50, -52, 52, 100, 0, 77, -22, -99, 34, 8, -54, -39, 88, -55, -70, -49, 117, -68, -30, -106, -45, -99, 84, 13, 37, -53, 73, -57, -49, 79, -54, 5, -33, -83, 11, 98, -85, 67, -85, 98, -119, 18, 59, 98, -29, 62, -17, -40, 60, -42, 105, -61, 76, 119, 97};
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
    msg.setTimeStamp(0.5776682689324961);
    msg.setSource(62131U);
    msg.setSourceEntity(139U);
    msg.setDestination(34847U);
    msg.setDestinationEntity(60U);
    msg.origin.assign("FUJYBLGEHZJHJAERWOULLNJQMNWJTPFCJTWUUQLWFCYGLFFSHGCNRGQUUBQDYCVIENKCZAESNAYBSHGDKPSGAIMNSBTAQCSDTZEWUOFVATKVTRNYYXKWQRRAOXMEXJSXCLPOTYMIKGUNHRLRYIPDWRKQTSKIYONJVMXHZAPBZVYLIMFQUZWJOIXPEBZKXDJCBPDPXLXIDNFTGWGIFSFBLOEOVBRZQQEDMMMKMARIETVHCKOZVDSPZHBWVHDGH");
    msg.htime = 0.3383903851382063;
    msg.lat = 0.2872285789119351;
    msg.lon = 0.9564462463465281;
    const char tmp_msg_0[] = {-44, -29, -68, 100, 97, -41, 102, -50, 103, -98, 17, -14, 100, 5, -99, 55, 29, 45, 34, -18, -96, -15, 52, 120, 54, 1, 101, 75, -36, 77, 4, 97, -55, 14, 79, -63, -69, 123, -11, 3, 28, 67, 39, 123, 101, 19, 104, -67, -7, 103, -7, 123, -80, 89, 73, 36, -32, 49, -113, 87, 24, -116, 126, 26, 20, -114, 22, -115, 48, 48, 73, -71, 78, -46, -24, -100, 85, 52, 20, -44, -23, -19, 15, 26, 39, 39, -61, -108, -35, 2, -25, -26, -15, 8, -108, 93, 85, -25, -55, -77, -109, 19, -121, 104, -120, -69, -76, -6, 103, 62, 126, 65, 67, -90, -9, -68, -79, 99, -93, 74, 3, 10, -104, 51, -94, -25, -61, 101, -71, 101, 7, 92, -92, 109, -123, -105, -87, 9, -25, -73, 76, 115, 11, 126, -6, 64, 51, 80, -45, 107, -111, -34, 18, 44, 59, -36, 74, -87, -67, -1, -125, 77, -18, -33, -74, -26, -39, -82, -38, -17, 19, 80, 32, 114, 89, -15, 95, 5, 91, -32, 30, -55, -119, 98, -54, -110, 33, 62, -98, -125, 51, 63, -76, -17, 40, -34, -13, 27, -128, -56, 10, 72, -26, 97, 44, 61, 18, -43, 100, -64, 65, -90, 104};
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
    msg.setTimeStamp(0.5291335564410435);
    msg.setSource(41780U);
    msg.setSourceEntity(95U);
    msg.setDestination(21054U);
    msg.setDestinationEntity(181U);
    msg.origin.assign("GDXQUCAYCQGAQAMSTWPZHERDMBSUMAHMRVKKKFCNITLOWJKPCFVAOUTLNLDVOWUCABPDGIYISCGIASPWAEYFNPHYFELGZXBVTKWDBWLAGYHPCHAZMXJLQBYGXULDTYOBOMRSERDWVGMYWRGROCECJOTOTZIFIZSZEQSEQRHUVCNNLMIXJFZXQFHIQZXLNVJMFJPNWBOXHSXBJFPHBYEVPDQFYNOVZKQZKKRNUUEHWKKNISLJXUDBIDRTJPE");
    msg.htime = 0.6570331819731644;
    msg.lat = 0.30705350833429457;
    msg.lon = 0.847987811311491;
    const char tmp_msg_0[] = {5, 117, 98, 29, 120, -77, -75, 66, -109, -74, -58, -9, -3, 112, 64, 18, -53, 91, -73, 61, -14, 87, -60, -128, 83, 71, -11, 32, 99, -104, 62, 120, -108, 16, 51, 55, -8, 52, -12, -32, 45, -4, -47, 124, -10, -30, -53, -31, -36, 38, 104, 10, 88, 38, 99, -57, 25, 110, -84, 114, 92, -18, 52, -10, -26};
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
    msg.setTimeStamp(0.5182706126123535);
    msg.setSource(50636U);
    msg.setSourceEntity(5U);
    msg.setDestination(30342U);
    msg.setDestinationEntity(73U);
    msg.req_id = 24579U;
    msg.ttl = 22083U;
    msg.destination.assign("AJQKWCSVKWKTCOCBQYLBKRJLLNGOYNJOPXTATHUAYQZJXDNVARKBPDTTTKUMXL");
    const char tmp_msg_0[] = {39, -82, -5, 95, -54, -12, -117, 106, -63, 14, 108, 96, 102, 40, -75, 63, 46, 26, 112, -71, 38, 0, -23, -103, -54, -58, 21, 20, 18, 77, -91, 114, -97, 30, 113, 12, 93, -50, 10, 74, -115, -121, 73};
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
    msg.setTimeStamp(0.2880415001334534);
    msg.setSource(49510U);
    msg.setSourceEntity(104U);
    msg.setDestination(48686U);
    msg.setDestinationEntity(194U);
    msg.req_id = 27342U;
    msg.ttl = 29941U;
    msg.destination.assign("EBTVZTZTVBBGZRHYYKVGISHMISCMUORMLECDTVKRCNXYJRUYQOAJUFQUNKNCHXSOBLOISFEALXTKBWPLXEZJMNWMIWQFIIDPCVIANDIRLUZSNPWXAGMYTROKEQMRYTLZPFNGHAZXELYPJDBZSRR");
    const char tmp_msg_0[] = {40, -126, -11, 68, 52, 109, 110, 72, -55, -121, 82, 104, 106, 41, -35, -123, 115, -86, 95, -19, 96, -79, -105, 58, -43, 74, 126, 91, -60, -46, -3, 55, -105, 40, 110, 101, -27, 74, 123, -64, -118, -89, 114, 25, 104, 75, -27, 111, -91, -82, -5, 99, -1, -44, 43, 90, 103, -126, -86, 79, 101, 100, 2, 101, 29, -113, -67, -95, 35, 121, 68, -73, 23, 114, -102, 40, 71, 114, 112, -101, 3, -38, 56, 53, -86, 72, 60, 40, -56, -100, 17, -89, -47, 7, -73, 11, 57, -123, 77, 125, -78, 36, 22, -120, 82, -1, 9, 1, -65, 42, 123, -120, 10, 37, 102, -11, 61, -49, 77, -88, -5, -54, -37, 75, 23, -22, 102, -12, 108, -122, 38, -18, 11, -118, -68, 33, -53, 110, 38, -30, -123, 105, -66, -103, -5, -23, 5, 121, -91, 65, -38, 126, -78, 93, -110, 92, 24, 12, 19, -127, 82, -121, 32, 93, -71, 15, 26, -107, 25, -80, -66, 40, -59, 113, 77, -101, 85, -5, 19, 105, -78, -109, -96, 82, -116, 65, -71, -20, 100, 101, -53, -81, -70, -34, -62, -35, -9, -127, -68, 83, -56, 58, 101, -107, 111, 3, 84, -94, -18, -13, -69, 8, -15, 14, -60, 85, 77, 101, -54, 85, -116, 55, 26, 123, 41, 103, -14, 1, -25, -73, 109, 107, -38, -87, 78, 65, 5, 87, -53, -34, -110, 98, 84, 117, 40, 103, -30, -16, 119, 12, 100};
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
    msg.setTimeStamp(0.12437264512818957);
    msg.setSource(22185U);
    msg.setSourceEntity(244U);
    msg.setDestination(54595U);
    msg.setDestinationEntity(153U);
    msg.req_id = 52647U;
    msg.ttl = 31844U;
    msg.destination.assign("AUWSFHQNSQZCQIWJXTRVFSLDRPPGMEJPJUFQEQNGTHXQYWQYLVMJZVUYWOSFDPJ");
    const char tmp_msg_0[] = {-84, -57, 78, -26, 32, -81, 119, 61, -89, 33, -95, 96, 66, -25, -20, -65, -92, 122, 35, -116, -95, 1, 98, -70, -125, 110, 47, 13, -80, -51, -92, -85, 43, -20, 98, 113, 57, 27, -104, -55, -108, -88, 78, 84, 82, -56, -128, 86, -59, 47, -93, -50, -22, -34, -19, -83, 78, 45, 40, -61, 37, -32, -43, 41, -38, 60, 62, 109, 44, -126, 102, -128, -109, 1, 73, -66, 114, 98, 93, 64, -85, -8, -124, -48, -78, -39, -70, -61, -122, -58, -115, -96, 54, 108, -45, -75, -121, 95, 26, -94, -9, 2, 108, 111, 91, -70, 57, -34, -81, 42, -113, -6, -55, -41, -100, -120, 17, 117, -80, 73, 31, 78, 65, 42, 34, 44, -55, -12, -123, 66, 84, 86, 42, 125, -97, -51, 82, -2, -43, 3, -18};
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
    msg.setTimeStamp(0.60607705662998);
    msg.setSource(32438U);
    msg.setSourceEntity(84U);
    msg.setDestination(20135U);
    msg.setDestinationEntity(125U);
    msg.req_id = 29945U;
    msg.status = 222U;
    msg.text.assign("YOEGBBNRXDYCHYABNWOAIHNYZDVURIBDQDECCDXWHPLJRQWFEOJMGAGVBYXTHRZKXGHSZXSFUJZAXBKXJTWCWRDCRKVVLPCUOTFKNVKUUUARHEBESMDNVPHSHGTDLAMQJNOJQIFXFSZPKHUQIGIIKFKCGLWBTNAZEPVAYZSWMEHWFEOTEYPQDNMMGJIRNBVL");

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
    msg.setTimeStamp(0.938906311172456);
    msg.setSource(28151U);
    msg.setSourceEntity(235U);
    msg.setDestination(41611U);
    msg.setDestinationEntity(125U);
    msg.req_id = 42873U;
    msg.status = 105U;
    msg.text.assign("FQFLWKYBZCWTGXURXPFRHAVUEDBJIIWFKRQTEFOJQLNUMHRVXSYLBRIZKOIPSSUWRAEAFBZIPRMPXWJUJGMCNQAIUXZUGDCMXOHKZSAQDYCDEKZBEPLWMYVQWEYCYSXYOLCZXKLLIGOTUVXOGNTTNAHZLEDTLZFZGQUJBGWWDDYNTBCYTSCKNPKUSDAPCRHFSYVKCQRQOJPBMHRPGADOVNAGEHMFVN");

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
    msg.setTimeStamp(0.27107350477282777);
    msg.setSource(47054U);
    msg.setSourceEntity(43U);
    msg.setDestination(43258U);
    msg.setDestinationEntity(130U);
    msg.req_id = 48923U;
    msg.status = 197U;
    msg.text.assign("GYXLAGIVLLUBUHGJZNFDUJJLGNDQMJWIXZSSPASBYTYSOLWSIJGRCTJCZOUBXBEMVYZYUPFHHXIFJYJRNMUWWNRRQWIGAHZYHQSDSTVFQWYFZNGMJVAKNUCMEERBQTWNDPCZPQIEZLLICOWCOARHFLOFQB");

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
    msg.setTimeStamp(0.7180033268614425);
    msg.setSource(60165U);
    msg.setSourceEntity(38U);
    msg.setDestination(28494U);
    msg.setDestinationEntity(49U);
    msg.group_name.assign("TYPATIAWZWEDICRAIKFLDUPGNJAQLMOWPJZPUPZHISHZKYQGBEOQTAIVYQIJDVWJXQLOXSOXBYSUSZQBPEMFJHECRPYZWLYXEGIFKDRYWUIUTMCDUZOXOXJJYGSRLABTD");
    msg.links = 2216049203U;

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
    msg.setTimeStamp(0.8314192495988552);
    msg.setSource(33236U);
    msg.setSourceEntity(82U);
    msg.setDestination(55272U);
    msg.setDestinationEntity(47U);
    msg.group_name.assign("KNJRNSIRNTFXKNKBGWPPEXINVZOVOYYBDTDMAZGNULQYIOGKEULCRCVFPZEVZWMENPALFFGRSEXSPZBGSZHQLBAOTMDBADMJQJJMPVSTUZYYIYUCOSHNIXLHIXQXQWCTPFKWYNUSZSLBDMZRXDWVUVWGBIMQJSXLXHGRKUZOAMVDQTAJJVEVGOXCKFFAHNJHATHW");
    msg.links = 3287437599U;

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
    msg.setTimeStamp(0.9290064290346528);
    msg.setSource(29101U);
    msg.setSourceEntity(15U);
    msg.setDestination(53827U);
    msg.setDestinationEntity(120U);
    msg.group_name.assign("GZMPXOYGTUWBEMVTIHTLSIFHICRCZTHJOJXWFBBCQZMOZSHZQAEPYOTSROWPBRFAWVDPKHTQLYTOSSJCITVKWSTAVIYKBGIQWDCCPKMAJKWUK");
    msg.links = 2326065000U;

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
    msg.setTimeStamp(0.18168798834332545);
    msg.setSource(19779U);
    msg.setSourceEntity(247U);
    msg.setDestination(55611U);
    msg.setDestinationEntity(178U);
    msg.groupname.assign("NCFEBYNISHFBNGKMYAXDEJKGDJHVLWOBPTUNFWKFQSEUVZKXPDDYYLVQRAOSEQQLTXFXZNVCXBHZDVJTIKTESUIIDQZHWIAPUWBYNZFCRHSRMPXMJGOADGRODSZDIXNUOLKULYBGJEWEEINXG");
    msg.action = 170U;
    msg.grouplist.assign("IOAENNRMDFWUDPARYEJIGWKLNBRHVPBCTJPKIXQAXKSBGSGMZUQFJJKDXKFCBCCSEAZYECIVQIFAJMZM");

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
    msg.setTimeStamp(0.32478769055381884);
    msg.setSource(42698U);
    msg.setSourceEntity(241U);
    msg.setDestination(41757U);
    msg.setDestinationEntity(254U);
    msg.groupname.assign("XMOXGTYCFBUDOPBHILONFNNLJILZTAUPNRNXNCVLFJEOFGIGHHGJXEOQHWAESCBFZBYZJAADYESZKIAKDOSRQDCTVIJSKWRRPUNSFBPSLWHKGJXJWDWLISSBVEELHFBEPFT");
    msg.action = 217U;
    msg.grouplist.assign("SMKELWAGSNIMMLYRLVKDHYTRLPSPAWZGTTNCACEEHSIRYTMDTMBQHEAEKRDUWFANIMPSMJEOXKIMWGDTKLPPGVFVZYXXJLTZTJLUSIGLEGDODENRDVKUBTWZJHWIOANKSYFHUHWAVCZAJJURBR");

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
    msg.setTimeStamp(0.3759534678106434);
    msg.setSource(43154U);
    msg.setSourceEntity(100U);
    msg.setDestination(56428U);
    msg.setDestinationEntity(254U);
    msg.groupname.assign("LTCVNGUKAGQAIFFEMIEJWHXIKBPUUBDJRDOZFFDICXFEOCBPSIGQXHGTPP");
    msg.action = 142U;
    msg.grouplist.assign("NWGSNUMSEPGCRHRWGBGYAEPMWSDAVIPPHJHYVDAFWEISALJQKDBFIDFESRZGRMZRKYCCZNMHJPKXXBOXYQLDAAUELEILIVBZZNVNWKGKTVDMONSTFPYJULFSYKTIRKBQYILHUSXIMZMYECIAHQKSOZWCZMHIHRCPJXTTLGNOEDTVXBRWGFPFOCUMOVOGJVBYNPEXRWTWUHFSTUOXJNMNKXHOWJJUYQDLCXDKAUQEVBOQL");

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
    msg.setTimeStamp(0.3575377039819856);
    msg.setSource(50222U);
    msg.setSourceEntity(116U);
    msg.setDestination(28891U);
    msg.setDestinationEntity(81U);
    msg.id = 77U;
    msg.range = 0.49255113263140793;

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
    msg.setTimeStamp(0.8700124022798104);
    msg.setSource(49878U);
    msg.setSourceEntity(202U);
    msg.setDestination(37876U);
    msg.setDestinationEntity(108U);
    msg.id = 10U;
    msg.range = 0.7530541165750521;

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
    msg.setTimeStamp(0.5262474963123467);
    msg.setSource(5804U);
    msg.setSourceEntity(145U);
    msg.setDestination(47357U);
    msg.setDestinationEntity(156U);
    msg.id = 122U;
    msg.range = 0.12072423138870758;

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
    msg.setTimeStamp(0.1768805349665007);
    msg.setSource(8823U);
    msg.setSourceEntity(99U);
    msg.setDestination(53340U);
    msg.setDestinationEntity(98U);
    msg.tx = 132U;
    msg.channel = 60U;
    msg.timer = 65334U;

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
    msg.setTimeStamp(0.11392051811432413);
    msg.setSource(36654U);
    msg.setSourceEntity(129U);
    msg.setDestination(23408U);
    msg.setDestinationEntity(103U);
    msg.tx = 61U;
    msg.channel = 73U;
    msg.timer = 35345U;

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
    msg.setTimeStamp(0.875299064009396);
    msg.setSource(25313U);
    msg.setSourceEntity(45U);
    msg.setDestination(5642U);
    msg.setDestinationEntity(208U);
    msg.tx = 135U;
    msg.channel = 193U;
    msg.timer = 8993U;

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
    msg.setTimeStamp(0.054786361086124113);
    msg.setSource(2570U);
    msg.setSourceEntity(26U);
    msg.setDestination(41321U);
    msg.setDestinationEntity(245U);
    msg.beacon.assign("ORWTLAPPRKLVMYNLPCVXFH");
    msg.lat = 0.5065278362529563;
    msg.lon = 0.8360312496039547;
    msg.depth = 0.8409040697858218;
    msg.query_channel = 120U;
    msg.reply_channel = 17U;
    msg.transponder_delay = 125U;

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
    msg.setTimeStamp(0.6810020705250772);
    msg.setSource(48337U);
    msg.setSourceEntity(251U);
    msg.setDestination(10566U);
    msg.setDestinationEntity(104U);
    msg.beacon.assign("HIYLYJUHONAWQMCVMTFMEJ");
    msg.lat = 0.18513227898199702;
    msg.lon = 0.19865984654706126;
    msg.depth = 0.24365434079334947;
    msg.query_channel = 15U;
    msg.reply_channel = 108U;
    msg.transponder_delay = 177U;

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
    msg.setTimeStamp(0.27658723129384966);
    msg.setSource(59470U);
    msg.setSourceEntity(214U);
    msg.setDestination(34878U);
    msg.setDestinationEntity(186U);
    msg.beacon.assign("UMQLFVVHNXITPCRHBQBMPGCQFXDAPTGHQDQKSQFRTVJP");
    msg.lat = 0.8394234090635226;
    msg.lon = 0.29771536046537994;
    msg.depth = 0.13559850480076396;
    msg.query_channel = 225U;
    msg.reply_channel = 202U;
    msg.transponder_delay = 236U;

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
    msg.setTimeStamp(0.6014763896963884);
    msg.setSource(40748U);
    msg.setSourceEntity(120U);
    msg.setDestination(40460U);
    msg.setDestinationEntity(142U);
    msg.op = 88U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MAFHSQNDKJEIJREBMBKBNECARPRGWFOJPBDQMGZBLZQOVETZSWHNYYTIMKLAHIXORHDNZZQJLQHHISSXTWUFDMRFGEZTXNKKTSBNUJJMVGYHBGGCIYVAPUULSPMNUIHSOWPYPKXGCRLFEMAVSAWQOFETCIWAFDYORFLJHIBVAOWJVCBPQOLCDCZTKFXKVUOTBWLHELDYUZQZJNVXRS");
    tmp_msg_0.lat = 0.6676575170534809;
    tmp_msg_0.lon = 0.023151612039478686;
    tmp_msg_0.depth = 0.10068537986333148;
    tmp_msg_0.query_channel = 220U;
    tmp_msg_0.reply_channel = 111U;
    tmp_msg_0.transponder_delay = 205U;
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
    msg.setTimeStamp(0.725769012611902);
    msg.setSource(11310U);
    msg.setSourceEntity(173U);
    msg.setDestination(59247U);
    msg.setDestinationEntity(40U);
    msg.op = 48U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NJOKRSCSWQAXFGKUSVOLICKGYJODAQUEPXSPGRWICHBZHNTZRBYIELZVSXAUIXWVBCUMBFKSAXSQAEUIQHXIHFVERKONYICHWSWASLRYJJTJULDCTNFORFNLCRJAOINZMVRYZLVQDRQOEPUFWMNDDPUBTGLVMDEVHTTCJDHMHDDVHTZPTXGWPQMXKPLBMZMFQIJBBKE");
    tmp_msg_0.lat = 0.5578781876523273;
    tmp_msg_0.lon = 0.997486073054334;
    tmp_msg_0.depth = 0.261075469737718;
    tmp_msg_0.query_channel = 43U;
    tmp_msg_0.reply_channel = 16U;
    tmp_msg_0.transponder_delay = 72U;
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
    msg.setTimeStamp(0.5711277001564887);
    msg.setSource(51963U);
    msg.setSourceEntity(252U);
    msg.setDestination(40897U);
    msg.setDestinationEntity(84U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.8853887171069709);
    msg.setSource(40175U);
    msg.setSourceEntity(49U);
    msg.setDestination(51252U);
    msg.setDestinationEntity(240U);
    msg.address = 116U;

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
    msg.setTimeStamp(0.9121062235745104);
    msg.setSource(8764U);
    msg.setSourceEntity(214U);
    msg.setDestination(1278U);
    msg.setDestinationEntity(232U);
    msg.address = 226U;

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
    msg.setTimeStamp(0.6196137989215025);
    msg.setSource(24134U);
    msg.setSourceEntity(56U);
    msg.setDestination(15079U);
    msg.setDestinationEntity(87U);
    msg.address = 41U;

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
    msg.setTimeStamp(0.7491585266600607);
    msg.setSource(57854U);
    msg.setSourceEntity(251U);
    msg.setDestination(41055U);
    msg.setDestinationEntity(60U);
    msg.address = 144U;
    msg.status = 71U;
    msg.range = 0.2469280671170334;

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
    msg.setTimeStamp(0.5844670343326493);
    msg.setSource(41474U);
    msg.setSourceEntity(187U);
    msg.setDestination(47993U);
    msg.setDestinationEntity(186U);
    msg.address = 100U;
    msg.status = 168U;
    msg.range = 0.9322195690052318;

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
    msg.setTimeStamp(0.12216668720928103);
    msg.setSource(62116U);
    msg.setSourceEntity(148U);
    msg.setDestination(47639U);
    msg.setDestinationEntity(159U);
    msg.address = 251U;
    msg.status = 218U;
    msg.range = 0.09786057124553782;

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
    msg.setTimeStamp(0.5405294633892725);
    msg.setSource(48308U);
    msg.setSourceEntity(51U);
    msg.setDestination(61672U);
    msg.setDestinationEntity(93U);
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.1596576568166711;
    tmp_msg_0.y = 0.3413819043071352;
    tmp_msg_0.z = 0.33472591417703346;
    tmp_msg_0.t = 0.2868634519484742;
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
    msg.setTimeStamp(0.13378627227395146);
    msg.setSource(56311U);
    msg.setSourceEntity(238U);
    msg.setDestination(19032U);
    msg.setDestinationEntity(45U);
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("AGDTKAPWOIXINKGLQRZUZVHICBFYLDFJQILMMYNSKPRAHQONCZHIDOO");
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
    msg.setTimeStamp(0.9508313228010276);
    msg.setSource(45627U);
    msg.setSourceEntity(40U);
    msg.setDestination(53052U);
    msg.setDestinationEntity(43U);
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 194U;
    tmp_msg_0.list.assign("PUPBWRWHSLPSGBCHFHFPFDBZZTTQEGRBSUJVHYGVPPIQPZXFNKEBDDESHFDAOAZZENLVYOMKIHVPMLLWZNRQZGKCRCCDQWYWS");
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
    msg.setTimeStamp(0.30434055601814247);
    msg.setSource(29589U);
    msg.setSourceEntity(209U);
    msg.setDestination(44715U);
    msg.setDestinationEntity(23U);
    msg.enable = 76U;

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
    msg.setTimeStamp(0.5142900297857695);
    msg.setSource(41928U);
    msg.setSourceEntity(66U);
    msg.setDestination(61904U);
    msg.setDestinationEntity(96U);
    msg.enable = 214U;

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
    msg.setTimeStamp(0.5900918090178979);
    msg.setSource(14450U);
    msg.setSourceEntity(202U);
    msg.setDestination(62972U);
    msg.setDestinationEntity(49U);
    msg.enable = 44U;

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
    msg.setTimeStamp(0.020585692415768464);
    msg.setSource(9486U);
    msg.setSourceEntity(82U);
    msg.setDestination(37059U);
    msg.setDestinationEntity(23U);
    msg.summary = 101U;
    msg.level = 164U;

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
    msg.setTimeStamp(0.7189695256606902);
    msg.setSource(60690U);
    msg.setSourceEntity(126U);
    msg.setDestination(21459U);
    msg.setDestinationEntity(73U);
    msg.summary = 60U;
    msg.level = 244U;

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
    msg.setTimeStamp(0.1794992153832955);
    msg.setSource(11994U);
    msg.setSourceEntity(105U);
    msg.setDestination(19763U);
    msg.setDestinationEntity(18U);
    msg.summary = 56U;
    msg.level = 184U;

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
    msg.setTimeStamp(0.9264452300756435);
    msg.setSource(56818U);
    msg.setSourceEntity(11U);
    msg.setDestination(58906U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.4792911090085127);
    msg.setSource(56531U);
    msg.setSourceEntity(88U);
    msg.setDestination(51786U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.35131790365346915);
    msg.setSource(3435U);
    msg.setSourceEntity(240U);
    msg.setDestination(2058U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.5150259616054532);
    msg.setSource(59652U);
    msg.setSourceEntity(229U);
    msg.setDestination(51733U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.46449377685864024);
    msg.setSource(43557U);
    msg.setSourceEntity(99U);
    msg.setDestination(65443U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.3684971498286733);
    msg.setSource(47320U);
    msg.setSourceEntity(234U);
    msg.setDestination(56929U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.5646146787977161);
    msg.setSource(46652U);
    msg.setSourceEntity(120U);
    msg.setDestination(63871U);
    msg.setDestinationEntity(225U);
    msg.op = 58U;
    msg.system.assign("DWTTKCGBKSEQEWBTFQIAPCZDORAOAIWCTALASUARDZFRSKVQNBOVKOHPLMPIUDDVNKXNWJBPLHFAJCBMBONSCLYSJJTUNDRGUCZMJTHKIUSJMGYVEVOMGQWDYVYGJPBREXJQLPTXYQDNUTYIVWEOHSNLLZXKUFEHPXKSZJHEZWZOSMGVHKMBGTRXJZRUYCPLWDRFANPQFIFYUEWXMSOBCNHNBCZK");
    msg.range = 0.5743134214132726;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.43202084245301475;
    tmp_msg_0.type = 180U;
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
    msg.setTimeStamp(0.7388864705618435);
    msg.setSource(48380U);
    msg.setSourceEntity(24U);
    msg.setDestination(59091U);
    msg.setDestinationEntity(194U);
    msg.op = 173U;
    msg.system.assign("LDYRWMGJXCUOCVKBRZNQILCDZQCPGMIZGHKRSAYNDXTOGHPLUAPBJZKUASTAYCURTTF");
    msg.range = 0.45173929847545813;
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 44U;
    tmp_msg_0.label.assign("DFYVRBVJBVQAYYA");
    tmp_msg_0.component.assign("GAQFBNWNDUSDTOUERMHZBUTCYHLRYTXMLGFSRXMLOEFSLUZZZCDLNMHUKRCQIGJCEDWHSVATONJRAZXUHYQPYIVNOIQOTPJPGFJWZVHQIRHLAREKXKJVXVLBKLCQPIVCNWADPUHFSRMNAWSZFJAEPFYWDJKYIUQZDKYYYXAEKGYRBJXQTAJBBKNL");
    tmp_msg_0.act_time = 2074U;
    tmp_msg_0.deact_time = 23729U;
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
    msg.setTimeStamp(0.006559909763902527);
    msg.setSource(7607U);
    msg.setSourceEntity(253U);
    msg.setDestination(21222U);
    msg.setDestinationEntity(122U);
    msg.op = 231U;
    msg.system.assign("TCGNPRPSYJACFTPHAOMMZHWRRFBBANJEVBLUSGQUUEANIMKITVXNGTDBJGIWVFCXYCVIXZOJZTXO");
    msg.range = 0.6159301432811392;
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = 8312;
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
    msg.setTimeStamp(0.1902078203410622);
    msg.setSource(5544U);
    msg.setSourceEntity(28U);
    msg.setDestination(13745U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.2548856604587423);
    msg.setSource(20910U);
    msg.setSourceEntity(60U);
    msg.setDestination(45385U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.38065188145391626);
    msg.setSource(13096U);
    msg.setSourceEntity(209U);
    msg.setDestination(51567U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.6846131236155182);
    msg.setSource(26820U);
    msg.setSourceEntity(184U);
    msg.setDestination(60050U);
    msg.setDestinationEntity(57U);
    msg.list.assign("DWJMTTCQLUCJVXQNOCYNWUMCKHINCTEMIEHMPYAGGXFHASUWBUAMZBQRPBGOXHPTERXWBBNYIXHJCMDVOPWBPVJJ");

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
    msg.setTimeStamp(0.22105543427492858);
    msg.setSource(28091U);
    msg.setSourceEntity(147U);
    msg.setDestination(8804U);
    msg.setDestinationEntity(136U);
    msg.list.assign("IQNTPHXOJFHKEVJKLVVVIWLRSQGGTTPJBYMNIEBFSAYCNHVZGOOOPJWEEQDMPILQIJUKSYNHKTLX");

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
    msg.setTimeStamp(0.46659252151427133);
    msg.setSource(6507U);
    msg.setSourceEntity(240U);
    msg.setDestination(45129U);
    msg.setDestinationEntity(138U);
    msg.list.assign("XXRNCHNLFODNBLDAEKQIKINQFSJLQPRGKUTEOYOORRHJQEZOASUSMKSXJVKWBCDMVHZCBVEBQLHWLKFBZGTJHIPHAS");

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
    msg.setTimeStamp(0.4848527077022594);
    msg.setSource(28123U);
    msg.setSourceEntity(93U);
    msg.setDestination(48910U);
    msg.setDestinationEntity(125U);
    msg.value = 4603;

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
    msg.setTimeStamp(0.7663166788960352);
    msg.setSource(18424U);
    msg.setSourceEntity(98U);
    msg.setDestination(36666U);
    msg.setDestinationEntity(244U);
    msg.value = -23837;

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
    msg.setTimeStamp(0.9651221211494537);
    msg.setSource(259U);
    msg.setSourceEntity(202U);
    msg.setDestination(25030U);
    msg.setDestinationEntity(102U);
    msg.value = -11297;

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
    msg.setTimeStamp(0.014224231623214845);
    msg.setSource(13662U);
    msg.setSourceEntity(18U);
    msg.setDestination(32761U);
    msg.setDestinationEntity(14U);
    msg.value = 0.19481456223880333;

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
    msg.setTimeStamp(0.32977120419674355);
    msg.setSource(52323U);
    msg.setSourceEntity(130U);
    msg.setDestination(26971U);
    msg.setDestinationEntity(14U);
    msg.value = 0.9018063096884275;

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
    msg.setTimeStamp(0.6845498283339149);
    msg.setSource(39377U);
    msg.setSourceEntity(178U);
    msg.setDestination(20019U);
    msg.setDestinationEntity(190U);
    msg.value = 0.5072700369939851;

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
    msg.setTimeStamp(0.0639655701032541);
    msg.setSource(6411U);
    msg.setSourceEntity(123U);
    msg.setDestination(26617U);
    msg.setDestinationEntity(85U);
    msg.value = 0.37683461218008174;

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
    msg.setTimeStamp(0.5622115181989155);
    msg.setSource(46688U);
    msg.setSourceEntity(91U);
    msg.setDestination(59403U);
    msg.setDestinationEntity(44U);
    msg.value = 0.13642015735199398;

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
    msg.setTimeStamp(0.3730754087261431);
    msg.setSource(49843U);
    msg.setSourceEntity(206U);
    msg.setDestination(14592U);
    msg.setDestinationEntity(30U);
    msg.value = 0.10969386288750493;

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
    msg.setTimeStamp(0.37430423304286775);
    msg.setSource(52795U);
    msg.setSourceEntity(203U);
    msg.setDestination(35816U);
    msg.setDestinationEntity(41U);
    msg.validity = 10977U;
    msg.type = 21U;
    msg.utc_year = 31726U;
    msg.utc_month = 6U;
    msg.utc_day = 83U;
    msg.utc_time = 0.7333776492611731;
    msg.lat = 0.4346400033167642;
    msg.lon = 0.07139473216942427;
    msg.height = 0.46061555807030974;
    msg.satellites = 48U;
    msg.cog = 0.3775195278629899;
    msg.sog = 0.4673132004392836;
    msg.hdop = 0.2600888186455471;
    msg.vdop = 0.4472938911813845;
    msg.hacc = 0.12084880155895572;
    msg.vacc = 0.14213290861006855;

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
    msg.setTimeStamp(0.2995872564628559);
    msg.setSource(64694U);
    msg.setSourceEntity(151U);
    msg.setDestination(11983U);
    msg.setDestinationEntity(175U);
    msg.validity = 36073U;
    msg.type = 150U;
    msg.utc_year = 22760U;
    msg.utc_month = 218U;
    msg.utc_day = 33U;
    msg.utc_time = 0.9945632495613125;
    msg.lat = 0.560158103856051;
    msg.lon = 0.8055199845131962;
    msg.height = 0.20483104584096978;
    msg.satellites = 182U;
    msg.cog = 0.26281314870421046;
    msg.sog = 0.78402975381;
    msg.hdop = 0.8839434198655919;
    msg.vdop = 0.9581170775356048;
    msg.hacc = 0.6617356113772637;
    msg.vacc = 0.8578785166351339;

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
    msg.setTimeStamp(0.16209232751351343);
    msg.setSource(27139U);
    msg.setSourceEntity(245U);
    msg.setDestination(41326U);
    msg.setDestinationEntity(239U);
    msg.validity = 41252U;
    msg.type = 207U;
    msg.utc_year = 12330U;
    msg.utc_month = 212U;
    msg.utc_day = 149U;
    msg.utc_time = 0.25999935731261836;
    msg.lat = 0.32201531008179285;
    msg.lon = 0.9886618410619119;
    msg.height = 0.9027479339516674;
    msg.satellites = 215U;
    msg.cog = 0.19743339229553392;
    msg.sog = 0.38166563916130514;
    msg.hdop = 0.31608761335122504;
    msg.vdop = 0.8439572913316993;
    msg.hacc = 0.11964400102949324;
    msg.vacc = 0.48861462375820097;

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
    msg.setTimeStamp(0.07523424357341857);
    msg.setSource(45355U);
    msg.setSourceEntity(215U);
    msg.setDestination(378U);
    msg.setDestinationEntity(246U);
    msg.time = 0.4361187368462657;
    msg.phi = 0.5721426052458733;
    msg.theta = 0.9358190454863445;
    msg.psi = 0.8305936283597858;
    msg.psi_magnetic = 0.759071719772032;

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
    msg.setTimeStamp(0.880364345694812);
    msg.setSource(19657U);
    msg.setSourceEntity(175U);
    msg.setDestination(9315U);
    msg.setDestinationEntity(19U);
    msg.time = 0.9739008239164396;
    msg.phi = 0.962670113728492;
    msg.theta = 0.37437761307791595;
    msg.psi = 0.4849445951689306;
    msg.psi_magnetic = 0.39679919325468815;

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
    msg.setTimeStamp(0.049714745482716816);
    msg.setSource(27598U);
    msg.setSourceEntity(238U);
    msg.setDestination(40068U);
    msg.setDestinationEntity(216U);
    msg.time = 0.8878014358695955;
    msg.phi = 0.16750005942277513;
    msg.theta = 0.5240946457562278;
    msg.psi = 0.9374371587828066;
    msg.psi_magnetic = 0.8732464812701954;

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
    msg.setTimeStamp(0.07330558528138198);
    msg.setSource(47457U);
    msg.setSourceEntity(129U);
    msg.setDestination(36280U);
    msg.setDestinationEntity(219U);
    msg.time = 0.7219661246072498;
    msg.x = 0.5220287113784642;
    msg.y = 0.07892101238375904;
    msg.z = 0.03964028383696194;
    msg.timestep = 0.6404010757019021;

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
    msg.setTimeStamp(0.5117077464155997);
    msg.setSource(43509U);
    msg.setSourceEntity(188U);
    msg.setDestination(52800U);
    msg.setDestinationEntity(173U);
    msg.time = 0.0787267432599994;
    msg.x = 0.8426504712858041;
    msg.y = 0.7737498561905647;
    msg.z = 0.9863194344258334;
    msg.timestep = 0.7533884395375834;

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
    msg.setTimeStamp(0.5187631138410006);
    msg.setSource(16826U);
    msg.setSourceEntity(223U);
    msg.setDestination(54959U);
    msg.setDestinationEntity(205U);
    msg.time = 0.791998707741067;
    msg.x = 0.8094283361693728;
    msg.y = 0.9387451444634224;
    msg.z = 0.25870719737391323;
    msg.timestep = 0.9769059338549273;

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
    msg.setTimeStamp(0.860782205005593);
    msg.setSource(55492U);
    msg.setSourceEntity(207U);
    msg.setDestination(23503U);
    msg.setDestinationEntity(70U);
    msg.time = 0.5248345038852;
    msg.x = 0.35342744730899356;
    msg.y = 0.22485629197900447;
    msg.z = 0.6331516606540598;

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
    msg.setTimeStamp(0.8311259436384674);
    msg.setSource(61809U);
    msg.setSourceEntity(32U);
    msg.setDestination(33614U);
    msg.setDestinationEntity(81U);
    msg.time = 0.6879730421520269;
    msg.x = 0.04035597560618209;
    msg.y = 0.07354627575202832;
    msg.z = 0.23029280776143435;

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
    msg.setTimeStamp(0.4033842387090766);
    msg.setSource(1663U);
    msg.setSourceEntity(66U);
    msg.setDestination(39562U);
    msg.setDestinationEntity(211U);
    msg.time = 0.9954406256137384;
    msg.x = 0.10898734673495958;
    msg.y = 0.7999831205719445;
    msg.z = 0.4512290526245911;

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
    msg.setTimeStamp(0.678112911330463);
    msg.setSource(33332U);
    msg.setSourceEntity(7U);
    msg.setDestination(16294U);
    msg.setDestinationEntity(249U);
    msg.time = 0.7021912057711445;
    msg.x = 0.04818377593951617;
    msg.y = 0.6522862774872398;
    msg.z = 0.9672939856807606;

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
    msg.setTimeStamp(0.4532819217216889);
    msg.setSource(35595U);
    msg.setSourceEntity(139U);
    msg.setDestination(53135U);
    msg.setDestinationEntity(228U);
    msg.time = 0.2168413104828687;
    msg.x = 0.08930422773748159;
    msg.y = 0.5601205818154865;
    msg.z = 0.31167433088086927;

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
    msg.setTimeStamp(0.9664201994175688);
    msg.setSource(12299U);
    msg.setSourceEntity(77U);
    msg.setDestination(35314U);
    msg.setDestinationEntity(153U);
    msg.time = 0.2209118302638453;
    msg.x = 0.921760160663869;
    msg.y = 0.9154403308453066;
    msg.z = 0.02700218111831032;

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
    msg.setTimeStamp(0.6370562907972473);
    msg.setSource(8664U);
    msg.setSourceEntity(211U);
    msg.setDestination(35850U);
    msg.setDestinationEntity(132U);
    msg.time = 0.11394884143704986;
    msg.x = 0.9133672633360503;
    msg.y = 0.9889532125526869;
    msg.z = 0.9244322749050268;

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
    msg.setTimeStamp(0.39690607422161306);
    msg.setSource(12811U);
    msg.setSourceEntity(76U);
    msg.setDestination(47547U);
    msg.setDestinationEntity(161U);
    msg.time = 0.362965249427707;
    msg.x = 0.24444342984117562;
    msg.y = 0.8697695431676621;
    msg.z = 0.7899427457509138;

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
    msg.setTimeStamp(0.5793833345193313);
    msg.setSource(35427U);
    msg.setSourceEntity(74U);
    msg.setDestination(63463U);
    msg.setDestinationEntity(151U);
    msg.time = 0.38261298921796394;
    msg.x = 0.7023783832015227;
    msg.y = 0.1265120415746418;
    msg.z = 0.8234706681936059;

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
    msg.setTimeStamp(0.5131874599522287);
    msg.setSource(64559U);
    msg.setSourceEntity(248U);
    msg.setDestination(47242U);
    msg.setDestinationEntity(200U);
    msg.validity = 118U;
    msg.x = 0.6179743198440008;
    msg.y = 0.3790953186202508;
    msg.z = 0.41248472529709823;

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
    msg.setTimeStamp(0.8145839094724406);
    msg.setSource(30520U);
    msg.setSourceEntity(63U);
    msg.setDestination(23204U);
    msg.setDestinationEntity(219U);
    msg.validity = 232U;
    msg.x = 0.5899619114886802;
    msg.y = 0.7746403617736799;
    msg.z = 0.8046879617425069;

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
    msg.setTimeStamp(0.5169247965066379);
    msg.setSource(24777U);
    msg.setSourceEntity(241U);
    msg.setDestination(58967U);
    msg.setDestinationEntity(249U);
    msg.validity = 119U;
    msg.x = 0.49844200194032284;
    msg.y = 0.35864779213748244;
    msg.z = 0.9963302931161021;

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
    msg.setTimeStamp(0.4604590579398279);
    msg.setSource(50357U);
    msg.setSourceEntity(123U);
    msg.setDestination(2264U);
    msg.setDestinationEntity(23U);
    msg.validity = 253U;
    msg.x = 0.04987835526108331;
    msg.y = 0.8128741074078789;
    msg.z = 0.9632055825944927;

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
    msg.setTimeStamp(0.12820156110568082);
    msg.setSource(59296U);
    msg.setSourceEntity(90U);
    msg.setDestination(31738U);
    msg.setDestinationEntity(241U);
    msg.validity = 120U;
    msg.x = 0.7237919443841927;
    msg.y = 0.3700261177027151;
    msg.z = 0.6931089544591083;

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
    msg.setTimeStamp(0.9792832340641701);
    msg.setSource(26003U);
    msg.setSourceEntity(67U);
    msg.setDestination(61823U);
    msg.setDestinationEntity(76U);
    msg.validity = 237U;
    msg.x = 0.44412839741555077;
    msg.y = 0.9890155281022992;
    msg.z = 0.33542965381813483;

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
    msg.setTimeStamp(0.9637811238413364);
    msg.setSource(41385U);
    msg.setSourceEntity(99U);
    msg.setDestination(35529U);
    msg.setDestinationEntity(39U);
    msg.time = 0.36519406030138324;
    msg.x = 0.6842144196659865;
    msg.y = 0.869150487239634;
    msg.z = 0.7017843957998015;

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
    msg.setTimeStamp(0.5342223230823951);
    msg.setSource(52645U);
    msg.setSourceEntity(243U);
    msg.setDestination(24433U);
    msg.setDestinationEntity(31U);
    msg.time = 0.90417875986983;
    msg.x = 0.032472393035879676;
    msg.y = 0.3535470510000248;
    msg.z = 0.6368191705479596;

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
    msg.setTimeStamp(0.42039453802326476);
    msg.setSource(54073U);
    msg.setSourceEntity(195U);
    msg.setDestination(64908U);
    msg.setDestinationEntity(30U);
    msg.time = 0.6608831061337263;
    msg.x = 0.04748344846071806;
    msg.y = 0.9388476755752533;
    msg.z = 0.7889984820304862;

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
    msg.setTimeStamp(0.7073121310655536);
    msg.setSource(52000U);
    msg.setSourceEntity(21U);
    msg.setDestination(61419U);
    msg.setDestinationEntity(141U);
    msg.validity = 103U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.10594330167873289;
    tmp_msg_0.y = 0.12147332149041301;
    tmp_msg_0.z = 0.7230069218320431;
    tmp_msg_0.phi = 0.6445374254783258;
    tmp_msg_0.theta = 0.18290723090255745;
    tmp_msg_0.psi = 0.2296230934020823;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.10098094983740757;
    tmp_msg_1.beam_height = 0.47990921489246596;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.3076445621681487;

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
    msg.setTimeStamp(0.5262719070562022);
    msg.setSource(9016U);
    msg.setSourceEntity(1U);
    msg.setDestination(24162U);
    msg.setDestinationEntity(29U);
    msg.validity = 148U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.30626903866299526;
    tmp_msg_0.y = 0.4746730827508703;
    tmp_msg_0.z = 0.6798749025499649;
    tmp_msg_0.phi = 0.04294019660351922;
    tmp_msg_0.theta = 0.7888338179474139;
    tmp_msg_0.psi = 0.14090581468126995;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.2837886029268931;
    tmp_msg_1.beam_height = 0.5974492559004033;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.03337357954168396;

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
    msg.setTimeStamp(0.01970172136163051);
    msg.setSource(64322U);
    msg.setSourceEntity(47U);
    msg.setDestination(57806U);
    msg.setDestinationEntity(92U);
    msg.validity = 8U;
    msg.value = 0.2756097894396201;

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
    msg.setTimeStamp(0.4988145306035613);
    msg.setSource(28920U);
    msg.setSourceEntity(247U);
    msg.setDestination(13724U);
    msg.setDestinationEntity(57U);
    msg.value = 0.36907292977826156;

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
    msg.setTimeStamp(0.3784913778086262);
    msg.setSource(62822U);
    msg.setSourceEntity(151U);
    msg.setDestination(59442U);
    msg.setDestinationEntity(147U);
    msg.value = 0.6361430491424331;

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
    msg.setTimeStamp(0.9759548376253273);
    msg.setSource(44131U);
    msg.setSourceEntity(55U);
    msg.setDestination(62971U);
    msg.setDestinationEntity(46U);
    msg.value = 0.9695823141210972;

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
    msg.setTimeStamp(0.8521511807091808);
    msg.setSource(46303U);
    msg.setSourceEntity(81U);
    msg.setDestination(27866U);
    msg.setDestinationEntity(213U);
    msg.value = 0.8491811116806686;

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
    msg.setTimeStamp(0.47648163980719427);
    msg.setSource(38101U);
    msg.setSourceEntity(66U);
    msg.setDestination(21317U);
    msg.setDestinationEntity(4U);
    msg.value = 0.6152881770683625;

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
    msg.setTimeStamp(0.5070815775036445);
    msg.setSource(53855U);
    msg.setSourceEntity(44U);
    msg.setDestination(10758U);
    msg.setDestinationEntity(61U);
    msg.value = 0.2328389181570094;

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
    msg.setTimeStamp(0.2577385742863534);
    msg.setSource(12541U);
    msg.setSourceEntity(86U);
    msg.setDestination(46288U);
    msg.setDestinationEntity(187U);
    msg.value = 0.17852578217568926;

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
    msg.setTimeStamp(0.7072434399282747);
    msg.setSource(60006U);
    msg.setSourceEntity(70U);
    msg.setDestination(14700U);
    msg.setDestinationEntity(10U);
    msg.value = 0.0009270905514987549;

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
    msg.setTimeStamp(0.23481964251145482);
    msg.setSource(54880U);
    msg.setSourceEntity(14U);
    msg.setDestination(59120U);
    msg.setDestinationEntity(158U);
    msg.value = 0.9987491927986167;

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
    msg.setTimeStamp(0.0053780128626819135);
    msg.setSource(27795U);
    msg.setSourceEntity(201U);
    msg.setDestination(34099U);
    msg.setDestinationEntity(239U);
    msg.value = 0.5077200953618775;

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
    msg.setTimeStamp(0.691879118617401);
    msg.setSource(48798U);
    msg.setSourceEntity(184U);
    msg.setDestination(50292U);
    msg.setDestinationEntity(209U);
    msg.value = 0.757793815811775;

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
    msg.setTimeStamp(0.8034281704552724);
    msg.setSource(46402U);
    msg.setSourceEntity(22U);
    msg.setDestination(60177U);
    msg.setDestinationEntity(7U);
    msg.value = 0.7180950620535983;

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
    msg.setTimeStamp(0.9918498560821212);
    msg.setSource(56908U);
    msg.setSourceEntity(181U);
    msg.setDestination(25406U);
    msg.setDestinationEntity(13U);
    msg.value = 0.17734837741769316;

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
    msg.setTimeStamp(0.42196942504188584);
    msg.setSource(35157U);
    msg.setSourceEntity(171U);
    msg.setDestination(25220U);
    msg.setDestinationEntity(252U);
    msg.value = 0.12910087559855687;

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
    msg.setTimeStamp(0.9694057260446628);
    msg.setSource(8669U);
    msg.setSourceEntity(25U);
    msg.setDestination(45308U);
    msg.setDestinationEntity(12U);
    msg.value = 0.9946451587470999;

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
    msg.setTimeStamp(0.021337987729308616);
    msg.setSource(52383U);
    msg.setSourceEntity(191U);
    msg.setDestination(63013U);
    msg.setDestinationEntity(35U);
    msg.value = 0.7403127522014947;

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
    msg.setTimeStamp(0.5611365001697629);
    msg.setSource(21628U);
    msg.setSourceEntity(64U);
    msg.setDestination(24793U);
    msg.setDestinationEntity(56U);
    msg.value = 0.658747870418015;

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
    msg.setTimeStamp(0.04419863784690059);
    msg.setSource(28645U);
    msg.setSourceEntity(94U);
    msg.setDestination(28804U);
    msg.setDestinationEntity(94U);
    msg.value = 0.9622579078297068;

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
    msg.setTimeStamp(0.7604251387493874);
    msg.setSource(11957U);
    msg.setSourceEntity(83U);
    msg.setDestination(25060U);
    msg.setDestinationEntity(115U);
    msg.value = 0.5192972569005724;

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
    msg.setTimeStamp(0.9182645115701213);
    msg.setSource(57631U);
    msg.setSourceEntity(173U);
    msg.setDestination(47643U);
    msg.setDestinationEntity(1U);
    msg.value = 0.10376273226046484;

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
    msg.setTimeStamp(0.4372841934605326);
    msg.setSource(13739U);
    msg.setSourceEntity(147U);
    msg.setDestination(34363U);
    msg.setDestinationEntity(53U);
    msg.value = 0.7462198414949102;

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
    msg.setTimeStamp(0.5177432485300878);
    msg.setSource(37787U);
    msg.setSourceEntity(101U);
    msg.setDestination(41642U);
    msg.setDestinationEntity(7U);
    msg.value = 0.3673666239390011;

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
    msg.setTimeStamp(0.2052478431340189);
    msg.setSource(14972U);
    msg.setSourceEntity(149U);
    msg.setDestination(54441U);
    msg.setDestinationEntity(197U);
    msg.value = 0.3120140386689456;

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
    msg.setTimeStamp(0.41821463259325964);
    msg.setSource(18044U);
    msg.setSourceEntity(153U);
    msg.setDestination(61008U);
    msg.setDestinationEntity(47U);
    msg.value = 0.45703814825346456;

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
    msg.setTimeStamp(0.9941775673369679);
    msg.setSource(33760U);
    msg.setSourceEntity(179U);
    msg.setDestination(23270U);
    msg.setDestinationEntity(210U);
    msg.direction = 0.44037679648484673;
    msg.speed = 0.37159492592534904;
    msg.turbulence = 0.72316902527212;

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
    msg.setTimeStamp(0.5441877991973285);
    msg.setSource(5220U);
    msg.setSourceEntity(170U);
    msg.setDestination(20272U);
    msg.setDestinationEntity(14U);
    msg.direction = 0.8138688983389202;
    msg.speed = 0.504653428570516;
    msg.turbulence = 0.7952500138175026;

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
    msg.setTimeStamp(0.16008506047786308);
    msg.setSource(34105U);
    msg.setSourceEntity(151U);
    msg.setDestination(34747U);
    msg.setDestinationEntity(84U);
    msg.direction = 0.9491780111213148;
    msg.speed = 0.5497385143001445;
    msg.turbulence = 0.13446661676436544;

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
    msg.setTimeStamp(0.9634723332796569);
    msg.setSource(32211U);
    msg.setSourceEntity(14U);
    msg.setDestination(12280U);
    msg.setDestinationEntity(77U);
    msg.value = 0.8971179340346246;

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
    msg.setTimeStamp(0.6360256930725289);
    msg.setSource(60143U);
    msg.setSourceEntity(26U);
    msg.setDestination(18765U);
    msg.setDestinationEntity(168U);
    msg.value = 0.07656472049322116;

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
    msg.setTimeStamp(0.44718854690648846);
    msg.setSource(2505U);
    msg.setSourceEntity(229U);
    msg.setDestination(60863U);
    msg.setDestinationEntity(249U);
    msg.value = 0.7676464008992229;

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
    msg.setTimeStamp(0.7249589171418604);
    msg.setSource(54226U);
    msg.setSourceEntity(23U);
    msg.setDestination(63486U);
    msg.setDestinationEntity(74U);
    msg.value.assign("FSGLRZWXMYBQRZZQFKTPCNAUJMGBYNMCEYKZACYLTQKUMGSYIRUKCHOYUEDTWTJKGKROZWAHDVOZNVEVXKLIVSROCDDENZTIAVPOGXJTPGJMIXQIWNPICQEJXHYEAMPJBVHWCQCFSRTVQPWHABCXVMOVLMOKEEDFJYBUAXDFTHI");

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
    msg.setTimeStamp(0.17423785381309764);
    msg.setSource(25046U);
    msg.setSourceEntity(106U);
    msg.setDestination(6201U);
    msg.setDestinationEntity(9U);
    msg.value.assign("EBBFSQHAKUHJRLLTNAETBCSFRAMRGDNZDTJLKCIFLPNXOZMUPOFVSMVLZJRYDZQYOPHRFXSICYPEWKFRRCSVMTPLJNYPOEEVGETDHMYWWQGNDDXIEFYZGPZXHTECTFEAXJWUBAXDRSJHABNKTXKSOOIGOQGMFVWUHQMBZUTIGWAPLBIBDGHUNOOAFDPOMIAZUVRSKQNUKCYPXQCGLXMNUWWCYRXNJYVKHJVUWVCIBMBVEKZLSZ");

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
    msg.setTimeStamp(0.43137177203645316);
    msg.setSource(33657U);
    msg.setSourceEntity(111U);
    msg.setDestination(47881U);
    msg.setDestinationEntity(204U);
    msg.value.assign("AJFNRUMKYSCCBLQPVTTGQDVVASTMBLOAZGCNSAGUXIGFEYEIILMPOVXAWPMPJMOFJYRDBDUNUKPHOWQTPROAEEKHCZKPEXIVNVXDSTQKLKWYLVZBTYUVBIEGRFNCFMPYMHUXRGHTZJALVRZDY");

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
    msg.setTimeStamp(0.5010927561699515);
    msg.setSource(62483U);
    msg.setSourceEntity(48U);
    msg.setDestination(14044U);
    msg.setDestinationEntity(214U);
    const char tmp_msg_0[] = {-72, -91, -83, 124, -10, 108, 77, -42, 120, -114, -21, -105, -127, -25, -97, -90, 31, -39, -99, -116, 9, -8, 78, -45, -99, -113, -128, -79, -101, 93, 120, 48, -67, -118, 9, 47, -52, 48, -128, -32, 40, -55, 95, -12, -121, 69, -9, 2, 75, -82};
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
    msg.setTimeStamp(0.03660136936489278);
    msg.setSource(40184U);
    msg.setSourceEntity(137U);
    msg.setDestination(9281U);
    msg.setDestinationEntity(198U);
    const char tmp_msg_0[] = {56, -29, -115, 58, -65, -27, -97, 93, 78, -11, 79, 20, -97, -83, 120, -62, -9, -46, -62, 34, 116, 31};
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
    msg.setTimeStamp(0.07948423793500137);
    msg.setSource(52369U);
    msg.setSourceEntity(131U);
    msg.setDestination(8034U);
    msg.setDestinationEntity(171U);
    const char tmp_msg_0[] = {-61, 44, 55, 22, -77, 111, 101, -74, 31, -26, -44, -108, -110, 28, 122, 28, -32, 51, -5, -127, -42, -96, 26, 48, 103, -1, -44, -48, -1, 109, -49, -5, -96, -5, 98, -37, 43, -69, 46, 106, 25, -72, 43, 82, -18, -30, 20, 10, -110, -29, 7, 95, -46, -116, -81, 60, -57, 17, -43, -85, 81, 119, -13, -91, 110, 28, 78, -88, -82, -93, -10, -122, -16, 61, -22, 21, -24, -106, -31, -23, -35, 5, 35, -63, 41, -4, -81, -98, -72, 109, 69, -119, 92, 32, -91, 84, 118, -99, 90, 41, -31, 24, 19, -74, -102, -40, -43, -127, 121, 53, 105, 14, 101, 122, 54, 27, 102, 97, -103, -19, 39, -107, -124, 43, 18, -83, -90, 45, 98, -58, 3, -113, -103, -77, -110, -24, 31, -12, -124, -116, -89, -45, 38, 69, -45, -94, -117, 77, -10, 89, -81, 39, 41, 99, -105, 42, 92, -78, -13, -5, 41, -114, 55, 74, 27, -66, -90, -16, -74, -73, 78, 50, 47, -125, -100, 78, -102, 93, 7, -26, -40, -74, 19, -82, 77, -84, 96, 51, 37, 24, -51, 26, 40, 26, 96, 45, 83, 27};
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
    msg.setTimeStamp(0.3720292797304724);
    msg.setSource(734U);
    msg.setSourceEntity(29U);
    msg.setDestination(63014U);
    msg.setDestinationEntity(46U);
    msg.frequency = 5198155U;
    msg.min_range = 47316U;
    msg.max_range = 4748U;

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
    msg.setTimeStamp(0.6426362821013715);
    msg.setSource(61444U);
    msg.setSourceEntity(95U);
    msg.setDestination(5908U);
    msg.setDestinationEntity(145U);
    msg.frequency = 3508153949U;
    msg.min_range = 62508U;
    msg.max_range = 45683U;

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
    msg.setTimeStamp(0.08304617197962849);
    msg.setSource(10400U);
    msg.setSourceEntity(62U);
    msg.setDestination(58078U);
    msg.setDestinationEntity(193U);
    msg.frequency = 1209211359U;
    msg.min_range = 44438U;
    msg.max_range = 5953U;

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
    msg.setTimeStamp(0.27919691150543857);
    msg.setSource(60006U);
    msg.setSourceEntity(129U);
    msg.setDestination(6256U);
    msg.setDestinationEntity(97U);
    msg.type = 125U;
    msg.frequency = 2588820814U;
    msg.min_range = 48849U;
    msg.max_range = 53973U;
    msg.bits_per_point = 105U;
    msg.scale_factor = 0.9960393493621005;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8724024667305366;
    tmp_msg_0.beam_height = 0.7111706869382254;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {102, 45, 58, 91, 88, -20, 77, 85, -60, 15, -70, -99, -75, -96, -31, -91, 37, -12, -6, -68, -95, -39, -53, -51, -87, 28, -66, 115, 63, 98, -61, -46, 102, 58, -55, 20, 43, 88, -18, -30, 89, 22, -13, -19, 65, -63, -86, 85, -74, -106, 102, -96, -24, 73, -4, -111, -12, -114, 53, -4, -60, 66, 110, 43, 121, -66, 92, -64, 39, 97, 72, 32, -36, -11, -92, -127, 1, -117, 74, 73, -49, 9, 124, 106, 62, 48, 121, -92, 59, 123, -49, -91, -14, 31, -37, 57, -103, -122, 3, -93, 35, -104, 10, 97, -12, -27, -22, -79, -110, -81, -66, -60, 73, 82, -10, 45, -16, -118, 2, -19, -24, 96, -93, -113, 83, 26, 12, 57, 116, -42, -51, 53, 21, 114, 101, 4, 63, -21, 16, 98, -107, 85, -46, 100, -5, -112, 43, -123, 69, -107, -23, -65, 52, -95, 78, 110, 56, 3, 9, -21, -51, 115, 4, -89, -103, 96, -27, -64, 67, -110, 94, 76, 88, -84, -52, 115, -119, -19, -86, -82, 92, -32, 55, -6, 116, -4, 4, -18, 96, 51, 25, 105, 121, 29, 91, -102, 51, -86, -124, -21, -74, -26, 90, -9, 29, -95, -74, 98, -56, -31, -6, 75, -67, -108, 35, 3, -73, -115, -98, -122, 121, 81, 125, 124, -112, 77, 54, 27, 26, -95, -39, -87, -119, -48, 15, -73, 34, 45, 124, 39, -94, 74, 114, -107, 51, 99, 108, 39};
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
    msg.setTimeStamp(0.46926824395228506);
    msg.setSource(59863U);
    msg.setSourceEntity(159U);
    msg.setDestination(12414U);
    msg.setDestinationEntity(57U);
    msg.type = 220U;
    msg.frequency = 4286180179U;
    msg.min_range = 62827U;
    msg.max_range = 37279U;
    msg.bits_per_point = 1U;
    msg.scale_factor = 0.483129054147984;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.26352026623523095;
    tmp_msg_0.beam_height = 0.9478725550851905;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {116, -119, -28, -73, -96, 20, 101, -84, -110, -95, -52, 86, 60, -68, -114, 60, 70, -63, 103, 111, -91, -31, 76, 123, 30, 46, -32, -77, -96, -128, 63, 109, -115, -93, 21, 123, 69, 46, 37, 65, 101, 31, -107, -53, 106, -38, 52, -19, 6, -10, -30, -59, -85, -1, -59, -115, 63, -46, -28, -121, 58, 85, -39, -66, 126, -80, 25, -127, 75, 76, 36, 2, 125, -68, 10, 86, 88, -48, 18, -101, 119, -99, -100, -21, -107, -96, 29, -94, 44, -46, -49, -34, 105, 54, -73, -83, -1, 125, -116, -71, 114, -29, -85, 104, 94, -66, -106, 58, 96, -52, -106, 3, 95, -93, -94, -121, -84, -123, 84, -58, -1, 31, 112, -105, 115, -24, 105, -60, 41, -124, -97, 85, -13, 82, 47, 89, 119, 63, 115, -41, -127, 109, 69, 54, -29, -69, 87, 106, 28, -109, -73, -17, -61, -8, 104, 98, -61, -71, -117, 21, 116, -126, -57, 88, -104, -39, -71, 59, -92, 109, -23, 89, -55, 70, -50, -78, -66, -56, 70, 33, 122, 47, 45, 84, 66, 71, -105, -54, -117, 35, -117, 124, 90, 66, 10, 76, -47, -11, 112, 51, -94, 102, -19, 105, -31, 65, -7, 82, -24, 86, 13, -9, -83, -75, 63, -81, -30, 7, 113, -57, 104, -103, 102, 97, -14, -82, 114, -26, -103, -105, -22, 121, 79, 123};
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
    msg.setTimeStamp(0.9755761897205762);
    msg.setSource(21841U);
    msg.setSourceEntity(79U);
    msg.setDestination(33699U);
    msg.setDestinationEntity(52U);
    msg.type = 248U;
    msg.frequency = 1905337043U;
    msg.min_range = 58498U;
    msg.max_range = 52387U;
    msg.bits_per_point = 118U;
    msg.scale_factor = 0.3535545449891302;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8598275082243483;
    tmp_msg_0.beam_height = 0.9513100726148749;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-52, 74, 29, 16, 68, -10, 65, -103, 93, 35, -8, -31, -24, -104, 52, 66, 99, -113, 8};
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
    msg.setTimeStamp(0.35638452783664976);
    msg.setSource(8631U);
    msg.setSourceEntity(45U);
    msg.setDestination(50182U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.239745098530582);
    msg.setSource(40728U);
    msg.setSourceEntity(86U);
    msg.setDestination(13661U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.1501100146707387);
    msg.setSource(8885U);
    msg.setSourceEntity(238U);
    msg.setDestination(58617U);
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
    msg.setTimeStamp(0.41605271502457986);
    msg.setSource(3279U);
    msg.setSourceEntity(0U);
    msg.setDestination(26819U);
    msg.setDestinationEntity(150U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.743594592417867);
    msg.setSource(39826U);
    msg.setSourceEntity(89U);
    msg.setDestination(47467U);
    msg.setDestinationEntity(65U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.7773029677440502);
    msg.setSource(26759U);
    msg.setSourceEntity(205U);
    msg.setDestination(64862U);
    msg.setDestinationEntity(233U);
    msg.op = 200U;

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
    msg.setTimeStamp(0.09657629454282468);
    msg.setSource(5319U);
    msg.setSourceEntity(72U);
    msg.setDestination(55400U);
    msg.setDestinationEntity(135U);
    msg.value = 0.877988544051769;
    msg.confidence = 0.7876838542838426;
    msg.opmodes.assign("PQYMKVILLIDCKSZQZJXWGAJTUHGMYAJUNJJIJPFUMCGGCYURZQNVPASTOBW");

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
    msg.setTimeStamp(0.2364730528252521);
    msg.setSource(55919U);
    msg.setSourceEntity(185U);
    msg.setDestination(28249U);
    msg.setDestinationEntity(2U);
    msg.value = 0.5615206434781639;
    msg.confidence = 0.8484926614216302;
    msg.opmodes.assign("QNIKVOIMXQSJMYSDMZRJURUNLZXABODIMMZP");

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
    msg.setTimeStamp(0.8023075026592446);
    msg.setSource(8289U);
    msg.setSourceEntity(90U);
    msg.setDestination(18945U);
    msg.setDestinationEntity(195U);
    msg.value = 0.2511359034762628;
    msg.confidence = 0.35321045932943707;
    msg.opmodes.assign("FWBPQXRZJHVCPUTBRMLMIIOKRBXDVEQGAOOWIPQNTGXSWKVSZIJHQCTNCEVVRVMFBJUYMEVNFTQECOUHYMIMKRPOYBEAMWMSDIPKKPEIJWNOPGYMZFGEKELFKENDIFTNFCXBHSQ");

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
    msg.setTimeStamp(0.5932977523941048);
    msg.setSource(51455U);
    msg.setSourceEntity(217U);
    msg.setDestination(19223U);
    msg.setDestinationEntity(22U);
    msg.itow = 2128208726U;
    msg.lat = 0.8796076347726632;
    msg.lon = 0.6740465858350565;
    msg.height_ell = 0.07139684050590445;
    msg.height_sea = 0.9685639108123049;
    msg.hacc = 0.7514560190004749;
    msg.vacc = 0.29851787258683105;
    msg.vel_n = 0.8888279445881362;
    msg.vel_e = 0.8766775271370209;
    msg.vel_d = 0.10246115747121765;
    msg.speed = 0.16732874848397428;
    msg.gspeed = 0.5800150646828804;
    msg.heading = 0.43696048886731276;
    msg.sacc = 0.5110585956279224;
    msg.cacc = 0.7223948474881068;

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
    msg.setTimeStamp(0.8833429687286682);
    msg.setSource(25679U);
    msg.setSourceEntity(133U);
    msg.setDestination(37847U);
    msg.setDestinationEntity(7U);
    msg.itow = 1487442533U;
    msg.lat = 0.15396966453747374;
    msg.lon = 0.8714349323010022;
    msg.height_ell = 0.8335607202519816;
    msg.height_sea = 0.4165275736850109;
    msg.hacc = 0.9350763377028635;
    msg.vacc = 0.07213047585106147;
    msg.vel_n = 0.20243179099593178;
    msg.vel_e = 0.23545786669511415;
    msg.vel_d = 0.719221861889932;
    msg.speed = 0.3555958233826346;
    msg.gspeed = 0.6815368319615689;
    msg.heading = 0.6768343385442062;
    msg.sacc = 0.1818070231726081;
    msg.cacc = 0.6194479597284043;

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
    msg.setTimeStamp(0.5575448001367311);
    msg.setSource(47758U);
    msg.setSourceEntity(228U);
    msg.setDestination(23589U);
    msg.setDestinationEntity(20U);
    msg.itow = 1054321756U;
    msg.lat = 0.09361515258098274;
    msg.lon = 0.5671492358582727;
    msg.height_ell = 0.307651918205051;
    msg.height_sea = 0.7630665655842604;
    msg.hacc = 0.01273048570744617;
    msg.vacc = 0.5273546226430711;
    msg.vel_n = 0.32828900322740395;
    msg.vel_e = 0.21674420146955642;
    msg.vel_d = 0.8473034032761865;
    msg.speed = 0.06413348432865174;
    msg.gspeed = 0.6737992267688128;
    msg.heading = 0.9084195604481633;
    msg.sacc = 0.26548021142272504;
    msg.cacc = 0.6664626380466244;

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
    msg.setTimeStamp(0.3722152895026263);
    msg.setSource(43144U);
    msg.setSourceEntity(186U);
    msg.setDestination(49170U);
    msg.setDestinationEntity(234U);
    msg.id = 47U;
    msg.value = 0.5426507791536956;

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
    msg.setTimeStamp(0.08635082763021995);
    msg.setSource(13268U);
    msg.setSourceEntity(125U);
    msg.setDestination(24982U);
    msg.setDestinationEntity(79U);
    msg.id = 202U;
    msg.value = 0.9242225460557602;

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
    msg.setTimeStamp(0.8825798085379001);
    msg.setSource(30930U);
    msg.setSourceEntity(65U);
    msg.setDestination(48201U);
    msg.setDestinationEntity(165U);
    msg.id = 186U;
    msg.value = 0.6604671446086053;

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
    msg.setTimeStamp(0.42317137944756067);
    msg.setSource(37508U);
    msg.setSourceEntity(232U);
    msg.setDestination(19555U);
    msg.setDestinationEntity(3U);
    msg.x = 0.8615744697365608;
    msg.y = 0.6683649219936846;
    msg.z = 0.15740538990931296;
    msg.phi = 0.9615481282066376;
    msg.theta = 0.6118425001959373;
    msg.psi = 0.578147213554696;

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
    msg.setTimeStamp(0.9005097668615829);
    msg.setSource(51698U);
    msg.setSourceEntity(204U);
    msg.setDestination(38852U);
    msg.setDestinationEntity(46U);
    msg.x = 0.24360146449827547;
    msg.y = 0.17722370227713868;
    msg.z = 0.4484997309070804;
    msg.phi = 0.4088754683570779;
    msg.theta = 0.34847864624681313;
    msg.psi = 0.26459611296629826;

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
    msg.setTimeStamp(0.5818790449969808);
    msg.setSource(59620U);
    msg.setSourceEntity(201U);
    msg.setDestination(48776U);
    msg.setDestinationEntity(171U);
    msg.x = 0.27441060492283453;
    msg.y = 0.9499327820524954;
    msg.z = 0.4329355772144251;
    msg.phi = 0.9246388412816605;
    msg.theta = 0.5821826483676994;
    msg.psi = 0.8413089652646338;

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
    msg.setTimeStamp(0.6909109271068409);
    msg.setSource(264U);
    msg.setSourceEntity(201U);
    msg.setDestination(46108U);
    msg.setDestinationEntity(167U);
    msg.beam_width = 0.0227319461868285;
    msg.beam_height = 0.873493718125886;

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
    msg.setTimeStamp(0.5537326198954995);
    msg.setSource(26574U);
    msg.setSourceEntity(182U);
    msg.setDestination(17764U);
    msg.setDestinationEntity(150U);
    msg.beam_width = 0.6302078432234015;
    msg.beam_height = 0.8509800877111098;

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
    msg.setTimeStamp(0.7508550263171173);
    msg.setSource(10045U);
    msg.setSourceEntity(108U);
    msg.setDestination(19691U);
    msg.setDestinationEntity(229U);
    msg.beam_width = 0.6538169135405207;
    msg.beam_height = 0.0034397158823160634;

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
    msg.setTimeStamp(0.9794147174738937);
    msg.setSource(49353U);
    msg.setSourceEntity(45U);
    msg.setDestination(56523U);
    msg.setDestinationEntity(227U);
    msg.sane = 12U;

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
    msg.setTimeStamp(0.361396372409976);
    msg.setSource(69U);
    msg.setSourceEntity(140U);
    msg.setDestination(38271U);
    msg.setDestinationEntity(74U);
    msg.sane = 199U;

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
    msg.setTimeStamp(0.845463369780627);
    msg.setSource(21429U);
    msg.setSourceEntity(19U);
    msg.setDestination(1437U);
    msg.setDestinationEntity(245U);
    msg.sane = 249U;

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
    msg.setTimeStamp(0.11076606060495053);
    msg.setSource(55298U);
    msg.setSourceEntity(127U);
    msg.setDestination(52896U);
    msg.setDestinationEntity(126U);
    msg.id = 97U;
    msg.zoom = 2U;
    msg.action = 223U;

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
    msg.setTimeStamp(0.8683204300985908);
    msg.setSource(52397U);
    msg.setSourceEntity(110U);
    msg.setDestination(8872U);
    msg.setDestinationEntity(108U);
    msg.id = 220U;
    msg.zoom = 222U;
    msg.action = 68U;

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
    msg.setTimeStamp(0.47342459363611944);
    msg.setSource(55966U);
    msg.setSourceEntity(169U);
    msg.setDestination(31522U);
    msg.setDestinationEntity(67U);
    msg.id = 159U;
    msg.zoom = 193U;
    msg.action = 179U;

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
    msg.setTimeStamp(0.44283328728420734);
    msg.setSource(58814U);
    msg.setSourceEntity(208U);
    msg.setDestination(6094U);
    msg.setDestinationEntity(188U);
    msg.id = 49U;
    msg.value = 0.6689804623391427;

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
    msg.setTimeStamp(0.9023381528687587);
    msg.setSource(20160U);
    msg.setSourceEntity(64U);
    msg.setDestination(51140U);
    msg.setDestinationEntity(199U);
    msg.id = 55U;
    msg.value = 0.08782387240986034;

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
    msg.setTimeStamp(0.889513534290586);
    msg.setSource(47717U);
    msg.setSourceEntity(249U);
    msg.setDestination(42303U);
    msg.setDestinationEntity(27U);
    msg.id = 200U;
    msg.value = 0.7441425774164847;

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
    msg.setTimeStamp(0.019529950526928075);
    msg.setSource(56944U);
    msg.setSourceEntity(25U);
    msg.setDestination(39429U);
    msg.setDestinationEntity(180U);
    msg.id = 132U;
    msg.value = 0.42044586406663476;

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
    msg.setTimeStamp(0.47105317303739547);
    msg.setSource(53536U);
    msg.setSourceEntity(105U);
    msg.setDestination(64944U);
    msg.setDestinationEntity(106U);
    msg.id = 135U;
    msg.value = 0.3736766768091132;

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
    msg.setTimeStamp(0.5094857230230472);
    msg.setSource(40622U);
    msg.setSourceEntity(247U);
    msg.setDestination(26472U);
    msg.setDestinationEntity(150U);
    msg.id = 219U;
    msg.value = 0.6300062922289063;

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
    msg.setTimeStamp(0.9350289673532567);
    msg.setSource(45567U);
    msg.setSourceEntity(221U);
    msg.setDestination(15825U);
    msg.setDestinationEntity(149U);
    msg.id = 7U;
    msg.angle = 0.09400406409268891;

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
    msg.setTimeStamp(0.9879041080189837);
    msg.setSource(46910U);
    msg.setSourceEntity(4U);
    msg.setDestination(16044U);
    msg.setDestinationEntity(224U);
    msg.id = 42U;
    msg.angle = 0.33300554759824863;

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
    msg.setTimeStamp(0.18181725547208205);
    msg.setSource(51406U);
    msg.setSourceEntity(114U);
    msg.setDestination(21571U);
    msg.setDestinationEntity(79U);
    msg.id = 26U;
    msg.angle = 0.9568804398491331;

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
    msg.setTimeStamp(0.4592183972395205);
    msg.setSource(6127U);
    msg.setSourceEntity(161U);
    msg.setDestination(24373U);
    msg.setDestinationEntity(230U);
    msg.op = 85U;
    msg.actions.assign("HMHGUQHAYYVKTSIXAOBTTAFFCBUZBLVPEXZPESKCLFGKYKKJKCJBLDRSWXLOOTAOGTRIUGRMFGQWNDCJVEEVOQNPNQ");

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
    msg.setTimeStamp(0.5669833966487383);
    msg.setSource(39224U);
    msg.setSourceEntity(92U);
    msg.setDestination(59794U);
    msg.setDestinationEntity(225U);
    msg.op = 224U;
    msg.actions.assign("OPDWDEURRKAYKKMETIGUBLZBTIWKXAJEEZQPBCOAKWERZJXOIKRBHXSOBNFDGSAJPXXCZYHFIGICHYJBVEZYLOQTIHYGMEDUCUQSKOUZNQGGPDPJMMFSSMZJGFDPYIVOPXXYWNDFVUWRNBPJTAMSWKXZAIVBLGKEUOANCCALHTCVRSPTWTQXDHYRFZVTRVWGVML");

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
    msg.setTimeStamp(0.7397196475885114);
    msg.setSource(8045U);
    msg.setSourceEntity(193U);
    msg.setDestination(62973U);
    msg.setDestinationEntity(190U);
    msg.op = 246U;
    msg.actions.assign("UPTUAIPJZEQSAJZSFIYWEISPUMBRGALLBEOYXUGXBXJJIFEJNOZSVAPPPTEQTMWHVLPNBDECAIOKWKWSOYNDWM");

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
    msg.setTimeStamp(0.022050259598217936);
    msg.setSource(27637U);
    msg.setSourceEntity(146U);
    msg.setDestination(26981U);
    msg.setDestinationEntity(218U);
    msg.actions.assign("QVHLOZOQSKRCTOBXDJXTGOMBKASFTPMRXKVYKNNKMYHGXYNNJDODPELOTSUGYQZUNAUPRAOTFEYZEQUAJSVWBMLFCIWVXGZZFEPXQULIIIZIVMRJCJBOCIYPRGJJUSFQXATBFKSVMDVQTRENKLNCABWANYSWFWCTAPXNVHMWCELEHQZALPLWRSSPNMYBMOKDEEHKIRQGLGGSJQGIJHFBOYVKCXDHIZBTUYFWUWRLZJCRGCTIPMHDAEDZUHU");

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
    msg.setTimeStamp(0.4390980489782105);
    msg.setSource(22318U);
    msg.setSourceEntity(10U);
    msg.setDestination(62525U);
    msg.setDestinationEntity(66U);
    msg.actions.assign("ZWLSYJHTZFTVHRTRIBCMMBGAHZWNTOEMDAASYERIBENQEGYQAFNVSCNYBIRWWEVFHXHOPRMBBJHLNLOH");

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
    msg.setTimeStamp(0.2999588275560464);
    msg.setSource(65315U);
    msg.setSourceEntity(43U);
    msg.setDestination(58632U);
    msg.setDestinationEntity(133U);
    msg.actions.assign("LMMRUHDFJATVFWXOWTAVDOFNLCUVJJDEQYSUPXJBELZYYHQUHFBRBWGJQPWIHATUNNETZGMYMXKKFSFVTARWJKI");

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
    msg.setTimeStamp(0.7198130015068244);
    msg.setSource(49918U);
    msg.setSourceEntity(54U);
    msg.setDestination(1640U);
    msg.setDestinationEntity(84U);
    msg.button = 37U;
    msg.value = 249U;

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
    msg.setTimeStamp(0.5111799268629693);
    msg.setSource(41385U);
    msg.setSourceEntity(158U);
    msg.setDestination(45936U);
    msg.setDestinationEntity(13U);
    msg.button = 127U;
    msg.value = 103U;

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
    msg.setTimeStamp(0.38862215394351807);
    msg.setSource(46315U);
    msg.setSourceEntity(30U);
    msg.setDestination(42757U);
    msg.setDestinationEntity(86U);
    msg.button = 78U;
    msg.value = 95U;

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
    msg.setTimeStamp(0.9004475669745456);
    msg.setSource(19229U);
    msg.setSourceEntity(92U);
    msg.setDestination(55675U);
    msg.setDestinationEntity(198U);
    msg.op = 38U;
    msg.text.assign("LXNVVQKMZMVEQPCOEKOSTSEIPAQAXERJFCSAQFKLYJTCXBVRJJOVKRBPIFMEBHYMTSPTOZCWNRLRJZURKGUKEDIWTKNDWDLAJIYUFMAIGWPUVQTUOWTHKYPWNEGYVLRQXZMCVGLGMSIHZPOLHDGDLXXCSAHCKJMYAFUBIXQWCFOOUHZOCAIHEVBEKYDLYWYZEHGFGPONNZPTFJBDLQSB");

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
    msg.setTimeStamp(0.9939211659916899);
    msg.setSource(54335U);
    msg.setSourceEntity(12U);
    msg.setDestination(44234U);
    msg.setDestinationEntity(200U);
    msg.op = 27U;
    msg.text.assign("XLNHOBJOUXKICFCKTOQNJAZZTQCLQSJZMKMVUZUWAMWKSQFHPEYMMOSEXPXECUFMMXRXJZAWCPFQQJUTTNVBOAKZSBJRULNDVBKGWXRYJEZGDEECFIP");

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
    msg.setTimeStamp(0.694792478870374);
    msg.setSource(11980U);
    msg.setSourceEntity(65U);
    msg.setDestination(52405U);
    msg.setDestinationEntity(45U);
    msg.op = 177U;
    msg.text.assign("ALGSLGXPHWZVDAUHYTBWMOQLXMQYVOWFELMVCYBBBKDBZCIIHFDLWSASWQHAFJAXIOJZCMUDEGRTRGVNKKWKRSVGMGRGEIDKONLNSDQMPWXXRJYXMZKIAPXNNSVUUTRGFCES");

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
    msg.setTimeStamp(0.6891678341211097);
    msg.setSource(12694U);
    msg.setSourceEntity(90U);
    msg.setDestination(24341U);
    msg.setDestinationEntity(135U);
    msg.op = 133U;
    msg.time_remain = 0.28969120253040037;
    msg.sched_time = 0.947877645110109;

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
    msg.setTimeStamp(0.25752965582754517);
    msg.setSource(43054U);
    msg.setSourceEntity(126U);
    msg.setDestination(49092U);
    msg.setDestinationEntity(60U);
    msg.op = 53U;
    msg.time_remain = 0.04708233291961261;
    msg.sched_time = 0.4280933593983839;

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
    msg.setTimeStamp(0.9732134841204458);
    msg.setSource(1182U);
    msg.setSourceEntity(134U);
    msg.setDestination(51627U);
    msg.setDestinationEntity(63U);
    msg.op = 123U;
    msg.time_remain = 0.48784257138286624;
    msg.sched_time = 0.44553152758951886;

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
    msg.setTimeStamp(0.5242041268631149);
    msg.setSource(13297U);
    msg.setSourceEntity(181U);
    msg.setDestination(49954U);
    msg.setDestinationEntity(43U);
    msg.name.assign("QYRDLVQYYVGZRRRGAENQQC");
    msg.op = 116U;
    msg.sched_time = 0.505732884001873;

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
    msg.setTimeStamp(0.35518725328210055);
    msg.setSource(47156U);
    msg.setSourceEntity(240U);
    msg.setDestination(37682U);
    msg.setDestinationEntity(116U);
    msg.name.assign("RJAINXKNJHPFMZWNVSYERTJRUDNAROLSCACDAWAUIMOXBKMQLDDTBDZQYCPBZDOMXYFWPNJJWHEHDQMPVTCKZEIOMRHOESWXQMGJTCBOCKWPMTNLHNMGUPXCSHYKGBYDAYAHFRIZTVLSEIJJXIBRS");
    msg.op = 155U;
    msg.sched_time = 0.39399023491706786;

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
    msg.setTimeStamp(0.2754033286428854);
    msg.setSource(19035U);
    msg.setSourceEntity(110U);
    msg.setDestination(53764U);
    msg.setDestinationEntity(6U);
    msg.name.assign("VYISTFBTCIFJBZQFPWULMYZLIQTTAZANRDLDWSVGYKLKX");
    msg.op = 130U;
    msg.sched_time = 0.9259262896183876;

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
    msg.setTimeStamp(0.4407591243797989);
    msg.setSource(47670U);
    msg.setSourceEntity(85U);
    msg.setDestination(59649U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.29440758035387804);
    msg.setSource(20353U);
    msg.setSourceEntity(199U);
    msg.setDestination(40792U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.47603769726392786);
    msg.setSource(32462U);
    msg.setSourceEntity(32U);
    msg.setDestination(53731U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.4523425011845935);
    msg.setSource(13827U);
    msg.setSourceEntity(2U);
    msg.setDestination(58009U);
    msg.setDestinationEntity(28U);
    msg.name.assign("NJKBLPWPRGQSXUEQGLMMOQQJDHMNWBKTKYTEFNIKWKUUXSVUTRFPUNDXDGCUTIWGVDMUREQAJSEFWRJPKFYDRNRBZTUIVEOCFGBJMZLSHJXSFDMGVEQSROAAYDDENSNFHZJOTTLYILQIFNWIPRHHHLJBCLHBAAELZQGNBBSMBEXMWLZJPPSFKQDZCJVOXVAYAYYOAQZKVWRWMFZXIRYPHBUOCYIDLIVGXVXCO");
    msg.state = 58U;

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
    msg.setTimeStamp(0.5960658465654972);
    msg.setSource(13777U);
    msg.setSourceEntity(252U);
    msg.setDestination(52036U);
    msg.setDestinationEntity(225U);
    msg.name.assign("IAYDXQWHTEVOKHXIZWRMGHHAPOZBFVPGPUO");
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
    msg.setTimeStamp(0.4320966120228097);
    msg.setSource(6472U);
    msg.setSourceEntity(100U);
    msg.setDestination(56199U);
    msg.setDestinationEntity(22U);
    msg.name.assign("CRUGKZJHBKTWVBQXLPGNNDZHFPOCHTKGEJLRIJTHQOYXBIIGRYBCDYDLXEHEZSZTNPASAAYVJWGQFFAOFCWCPSHIXQVHRPANXTCZUQABAZDGLQVFEKEEAOJPPSNVKMKHSLPNNVWTNRZQESQNOKYVVQMIFIXDUBWZQXYWUTUDL");
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
    msg.setTimeStamp(0.4902709094862707);
    msg.setSource(58921U);
    msg.setSourceEntity(20U);
    msg.setDestination(37177U);
    msg.setDestinationEntity(163U);
    msg.name.assign("ZWAGXMAGBXJNUDVCGZEHUFASNKZA");
    msg.value = 209U;

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
    msg.setTimeStamp(0.8632593942125427);
    msg.setSource(46425U);
    msg.setSourceEntity(178U);
    msg.setDestination(61351U);
    msg.setDestinationEntity(39U);
    msg.name.assign("GYNHTCIQASFFNLMIAWHFTRFLCYUYQRRPMZVAJKHPGLXXYSQLBREKCTMJONAAUVMYDKLOBOQNUZSHEVYCBECNQTFF");
    msg.value = 209U;

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
    msg.setTimeStamp(0.4152153156868904);
    msg.setSource(1558U);
    msg.setSourceEntity(81U);
    msg.setDestination(63734U);
    msg.setDestinationEntity(241U);
    msg.name.assign("XJTXAEVMEZGPOESZSFZQWRVEKRBEBAKVNTGMTWFOCOGLGLYIXNSKZBQIMFBFTHNKDICNOCSKHUGJEDLBMTZOXXWPFJQZADYQGPNSPLHRNPQQVAJJAUTQORMCLDIYHXUWQOACCEWZBPWSUJBPSDWVAMRUKPNDMVFUHZOYSSAFBKJTTPZYMVERRINWOHJDFNJCTRDVXXKKHIKAFNM");
    msg.value = 109U;

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
    msg.setTimeStamp(0.9622000036383919);
    msg.setSource(14232U);
    msg.setSourceEntity(169U);
    msg.setDestination(62574U);
    msg.setDestinationEntity(225U);
    msg.name.assign("LKKOAAYEEKHTMVHWGDDSMDJESIVNRUPRZNLOZYDZAPGJZWHFPXMIXDIFDYIBWBKNARAQJTQONOSHVFPXGQAYKUORXOYRDWEBFTEVJGMJXUFZJVNGWATFCICETJYKICUTAWJCZGFHNZSTFPLGTUVGLHPGXXPOBRYHEQFBLZSSVQ");

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
    msg.setTimeStamp(0.9594234649659351);
    msg.setSource(32623U);
    msg.setSourceEntity(126U);
    msg.setDestination(18418U);
    msg.setDestinationEntity(62U);
    msg.name.assign("CYLUIJEKMBTXKNTLBQNISABXSENXRAEDMQACGGKKQQXYCHQWHGMBYFUOPFQZNUZVDJPROXCNCLVL");

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
    msg.setTimeStamp(0.3951909436406492);
    msg.setSource(62569U);
    msg.setSourceEntity(57U);
    msg.setDestination(27300U);
    msg.setDestinationEntity(199U);
    msg.name.assign("ZIPCIXKNGAFJDOCYWDNSQCISBMBBWMRDNIAIVYEDVLJNAXPLGSFFOACHRHQOGRYOKLKAFWIFVYCUIMQGYODQMXUOVMYADAONJEKSEHOPCUKBOBPPWKUODWLVWFLIZPGSLGAZABKZJXQZTVTYSRLJQPSYJBVSMAZRKZXFWTQXGHPFRNF");

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
    msg.setTimeStamp(0.5579772581025542);
    msg.setSource(16921U);
    msg.setSourceEntity(248U);
    msg.setDestination(45509U);
    msg.setDestinationEntity(93U);
    msg.name.assign("XQDSXTBQMZVIUJCIKEHNALNTTWHFSNHUKOOAPEYPPKCJQSUQCMLZFYRHLUDXBJLJHJVDNXTYVZANRLSSRGVZIPLJKPTZE");
    msg.value = 155U;

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
    msg.setTimeStamp(0.4726369777309569);
    msg.setSource(10671U);
    msg.setSourceEntity(223U);
    msg.setDestination(10900U);
    msg.setDestinationEntity(245U);
    msg.name.assign("LXSZLSKKWLCVCUKIQTSGEIIFAWBSPFPJAJHLCEJOJIDOQYRDJMZATDMLNXJNMFGXYBCSATNIRHORVGEU");
    msg.value = 149U;

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
    msg.setTimeStamp(0.42513257189671083);
    msg.setSource(18316U);
    msg.setSourceEntity(30U);
    msg.setDestination(22300U);
    msg.setDestinationEntity(53U);
    msg.name.assign("BXJTPFYULMIBMEGTLCIZBTXLDUOWAYFLNOJMYKVFLRBZHSVSXWBNOFKOTSQRGITHYMUPNQDOTFHRZIWCDERLBMMVVRXSBBVWZFWDZCEYAVGIQUCDEXNOJWQUHIVYZ");
    msg.value = 134U;

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
    msg.setTimeStamp(0.31415429353498336);
    msg.setSource(18960U);
    msg.setSourceEntity(231U);
    msg.setDestination(7191U);
    msg.setDestinationEntity(150U);
    msg.id = 12U;
    msg.period = 1510985205U;
    msg.duty_cycle = 95252629U;

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
    msg.setTimeStamp(0.09398857421331042);
    msg.setSource(5591U);
    msg.setSourceEntity(42U);
    msg.setDestination(27011U);
    msg.setDestinationEntity(161U);
    msg.id = 27U;
    msg.period = 1249059189U;
    msg.duty_cycle = 1860516210U;

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
    msg.setTimeStamp(0.9828786083164113);
    msg.setSource(62928U);
    msg.setSourceEntity(210U);
    msg.setDestination(45907U);
    msg.setDestinationEntity(237U);
    msg.id = 152U;
    msg.period = 1320581982U;
    msg.duty_cycle = 1248642707U;

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
    msg.setTimeStamp(0.6389174438268241);
    msg.setSource(25231U);
    msg.setSourceEntity(166U);
    msg.setDestination(54091U);
    msg.setDestinationEntity(28U);
    msg.id = 147U;
    msg.period = 3514083619U;
    msg.duty_cycle = 4086255189U;

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
    msg.setTimeStamp(0.6974628188775973);
    msg.setSource(54628U);
    msg.setSourceEntity(114U);
    msg.setDestination(43965U);
    msg.setDestinationEntity(249U);
    msg.id = 172U;
    msg.period = 57838567U;
    msg.duty_cycle = 4042148983U;

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
    msg.setTimeStamp(0.1722727968707799);
    msg.setSource(26838U);
    msg.setSourceEntity(72U);
    msg.setDestination(20884U);
    msg.setDestinationEntity(245U);
    msg.id = 110U;
    msg.period = 1953842606U;
    msg.duty_cycle = 1003448694U;

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
    msg.setTimeStamp(0.8085647576377367);
    msg.setSource(50021U);
    msg.setSourceEntity(162U);
    msg.setDestination(51036U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.8585371895595648;
    msg.lon = 0.9092857976604644;
    msg.height = 0.6397635756401978;
    msg.x = 0.12176817283685415;
    msg.y = 0.28967152577778643;
    msg.z = 0.0531245023389908;
    msg.phi = 0.8510382147496143;
    msg.theta = 0.7982855980120885;
    msg.psi = 0.46094510643682074;
    msg.u = 0.32888777993677776;
    msg.v = 0.2982548385992214;
    msg.w = 0.031740881010364874;
    msg.vx = 0.8238824988579351;
    msg.vy = 0.5490444792427192;
    msg.vz = 0.10154989818750937;
    msg.p = 0.5897744568316795;
    msg.q = 0.3445571007353442;
    msg.r = 0.03301420281013234;
    msg.depth = 0.6564317464604547;
    msg.alt = 0.963207066601424;

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
    msg.setTimeStamp(0.1534660937916672);
    msg.setSource(58145U);
    msg.setSourceEntity(145U);
    msg.setDestination(25001U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.9861098298542722;
    msg.lon = 0.854521488852356;
    msg.height = 0.608189627368179;
    msg.x = 0.03106239649005227;
    msg.y = 0.11924715014609921;
    msg.z = 0.04867529577940899;
    msg.phi = 0.5198166303872249;
    msg.theta = 0.05805810856474314;
    msg.psi = 0.4784646812395419;
    msg.u = 0.335606980583362;
    msg.v = 0.4191576094821835;
    msg.w = 0.8075635037004956;
    msg.vx = 0.21015708310245895;
    msg.vy = 0.5948648755925926;
    msg.vz = 0.891275303493664;
    msg.p = 0.6174854187393409;
    msg.q = 0.4572121058411759;
    msg.r = 0.1963548394242749;
    msg.depth = 0.32959022360694357;
    msg.alt = 0.007635515395345016;

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
    msg.setTimeStamp(0.1989462442092551);
    msg.setSource(2918U);
    msg.setSourceEntity(207U);
    msg.setDestination(60885U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.5561267014902919;
    msg.lon = 0.2983435263317781;
    msg.height = 0.49253473441783147;
    msg.x = 0.9303206856621009;
    msg.y = 0.7244826536718335;
    msg.z = 0.8077449023743082;
    msg.phi = 0.8100173177329064;
    msg.theta = 0.8765830997464445;
    msg.psi = 0.8695873007486921;
    msg.u = 0.9010366484274446;
    msg.v = 0.17029166631407944;
    msg.w = 0.6187968246674939;
    msg.vx = 0.8731054965184123;
    msg.vy = 0.6494676976779743;
    msg.vz = 0.18117527368797803;
    msg.p = 0.6878357405291409;
    msg.q = 0.7772167973863098;
    msg.r = 0.025710493448133698;
    msg.depth = 0.3532596315845946;
    msg.alt = 0.9934389339853779;

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
    msg.setTimeStamp(0.8621717326371693);
    msg.setSource(5600U);
    msg.setSourceEntity(106U);
    msg.setDestination(35163U);
    msg.setDestinationEntity(35U);
    msg.x = 0.017487455476087432;
    msg.y = 0.7638984426619018;
    msg.z = 0.830676651402269;

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
    msg.setTimeStamp(0.37955237664244534);
    msg.setSource(7486U);
    msg.setSourceEntity(141U);
    msg.setDestination(38214U);
    msg.setDestinationEntity(43U);
    msg.x = 0.9189259348705061;
    msg.y = 0.4560023685308141;
    msg.z = 0.7057222350985315;

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
    msg.setTimeStamp(0.7131840501157487);
    msg.setSource(22277U);
    msg.setSourceEntity(120U);
    msg.setDestination(23063U);
    msg.setDestinationEntity(94U);
    msg.x = 0.6874197840700854;
    msg.y = 0.8797544476541058;
    msg.z = 0.84771501343704;

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
    msg.setTimeStamp(0.2347483761730521);
    msg.setSource(24205U);
    msg.setSourceEntity(212U);
    msg.setDestination(48177U);
    msg.setDestinationEntity(250U);
    msg.value = 0.7262385012175082;

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
    msg.setTimeStamp(0.5150389591046713);
    msg.setSource(16387U);
    msg.setSourceEntity(223U);
    msg.setDestination(34391U);
    msg.setDestinationEntity(200U);
    msg.value = 0.45605368706614013;

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
    msg.setTimeStamp(0.7726819388082536);
    msg.setSource(17011U);
    msg.setSourceEntity(35U);
    msg.setDestination(10002U);
    msg.setDestinationEntity(24U);
    msg.value = 0.3894987063084885;

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
    msg.setTimeStamp(0.8759038047197597);
    msg.setSource(54732U);
    msg.setSourceEntity(214U);
    msg.setDestination(3546U);
    msg.setDestinationEntity(248U);
    msg.value = 0.212424024453716;

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
    msg.setTimeStamp(0.5625574938155695);
    msg.setSource(44833U);
    msg.setSourceEntity(187U);
    msg.setDestination(51311U);
    msg.setDestinationEntity(4U);
    msg.value = 0.4740696980882563;

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
    msg.setTimeStamp(0.6436207332556304);
    msg.setSource(29875U);
    msg.setSourceEntity(15U);
    msg.setDestination(7159U);
    msg.setDestinationEntity(226U);
    msg.value = 0.9947968535086352;

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
    msg.setTimeStamp(0.07515341911618811);
    msg.setSource(25200U);
    msg.setSourceEntity(230U);
    msg.setDestination(41094U);
    msg.setDestinationEntity(228U);
    msg.x = 0.9112631758836035;
    msg.y = 0.5323973824233534;
    msg.z = 0.6294575744131486;
    msg.phi = 0.6464600490147633;
    msg.theta = 0.45720190796472815;
    msg.psi = 0.3450206722281136;
    msg.p = 0.6985265744253607;
    msg.q = 0.30109260489789436;
    msg.r = 0.003439535801511906;
    msg.u = 0.4236360799594724;
    msg.v = 0.15202719129386688;
    msg.w = 0.5471787221991958;
    msg.bias_psi = 0.833397797589514;
    msg.bias_r = 0.38887074017322987;

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
    msg.setTimeStamp(0.7354046945426249);
    msg.setSource(3505U);
    msg.setSourceEntity(150U);
    msg.setDestination(49618U);
    msg.setDestinationEntity(24U);
    msg.x = 0.10669400727022871;
    msg.y = 0.39194059378082924;
    msg.z = 0.5678648066898346;
    msg.phi = 0.6263886551788141;
    msg.theta = 0.7262276907292549;
    msg.psi = 0.9779737706195015;
    msg.p = 0.20520084085863566;
    msg.q = 0.26599087952148825;
    msg.r = 0.21477467635761904;
    msg.u = 0.21171214220203494;
    msg.v = 0.17316489032769578;
    msg.w = 0.10019804480190175;
    msg.bias_psi = 0.0013983207452465951;
    msg.bias_r = 0.14089864673768437;

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
    msg.setTimeStamp(0.6987624545734288);
    msg.setSource(9938U);
    msg.setSourceEntity(83U);
    msg.setDestination(12365U);
    msg.setDestinationEntity(190U);
    msg.x = 0.13878184089046597;
    msg.y = 0.6414292751751431;
    msg.z = 0.37997118033752597;
    msg.phi = 0.7520187021248125;
    msg.theta = 0.14131963452308394;
    msg.psi = 0.6781234440928401;
    msg.p = 0.44219268789326904;
    msg.q = 0.9384489248273673;
    msg.r = 0.6797488898436203;
    msg.u = 0.43698775301361814;
    msg.v = 0.47318109332228353;
    msg.w = 0.45251281427127643;
    msg.bias_psi = 0.4000062947209455;
    msg.bias_r = 0.6186326062961204;

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
    msg.setTimeStamp(0.949214071042297);
    msg.setSource(39170U);
    msg.setSourceEntity(15U);
    msg.setDestination(42306U);
    msg.setDestinationEntity(42U);
    msg.bias_psi = 0.32257021890549054;
    msg.bias_r = 0.5943065887707235;
    msg.cog = 0.7797850061235522;
    msg.cyaw = 0.9680762111259994;
    msg.lbl_rej_level = 0.6935793513744545;
    msg.gps_rej_level = 0.9155589227243128;
    msg.custom_x = 0.9364202582609981;
    msg.custom_y = 0.7935416238980288;
    msg.custom_z = 0.8820692715240958;

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
    msg.setTimeStamp(0.9655350041144226);
    msg.setSource(62120U);
    msg.setSourceEntity(246U);
    msg.setDestination(13077U);
    msg.setDestinationEntity(228U);
    msg.bias_psi = 0.6624912209553587;
    msg.bias_r = 0.24271331328561718;
    msg.cog = 0.8809929930187544;
    msg.cyaw = 0.5490006200197584;
    msg.lbl_rej_level = 0.01360939770681524;
    msg.gps_rej_level = 0.261664039459249;
    msg.custom_x = 0.4032539677067595;
    msg.custom_y = 0.7524129143384554;
    msg.custom_z = 0.6191574435315017;

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
    msg.setTimeStamp(0.5966231397953503);
    msg.setSource(1248U);
    msg.setSourceEntity(164U);
    msg.setDestination(55739U);
    msg.setDestinationEntity(152U);
    msg.bias_psi = 0.6930618409928401;
    msg.bias_r = 0.7940618121204012;
    msg.cog = 0.7114829377241257;
    msg.cyaw = 0.17650960460063658;
    msg.lbl_rej_level = 0.14378410124009933;
    msg.gps_rej_level = 0.5340090807404563;
    msg.custom_x = 0.6551516373503784;
    msg.custom_y = 0.7939241559898815;
    msg.custom_z = 0.38762911051285476;

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
    msg.setTimeStamp(0.8738321233496414);
    msg.setSource(56708U);
    msg.setSourceEntity(147U);
    msg.setDestination(49797U);
    msg.setDestinationEntity(209U);
    msg.utc_time = 0.23976172686053188;
    msg.reason = 40U;

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
    msg.setTimeStamp(0.41776264787567896);
    msg.setSource(31947U);
    msg.setSourceEntity(16U);
    msg.setDestination(17944U);
    msg.setDestinationEntity(11U);
    msg.utc_time = 0.8828263727698329;
    msg.reason = 63U;

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
    msg.setTimeStamp(0.32950665935199064);
    msg.setSource(52670U);
    msg.setSourceEntity(124U);
    msg.setDestination(52872U);
    msg.setDestinationEntity(114U);
    msg.utc_time = 0.23724324848730882;
    msg.reason = 59U;

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
    msg.setTimeStamp(0.9061787159108193);
    msg.setSource(26099U);
    msg.setSourceEntity(56U);
    msg.setDestination(3735U);
    msg.setDestinationEntity(210U);
    msg.id = 12U;
    msg.range = 0.06468342255958814;
    msg.acceptance = 123U;

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
    msg.setTimeStamp(0.9349596451108705);
    msg.setSource(61907U);
    msg.setSourceEntity(180U);
    msg.setDestination(37528U);
    msg.setDestinationEntity(42U);
    msg.id = 175U;
    msg.range = 0.8341836977898518;
    msg.acceptance = 213U;

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
    msg.setTimeStamp(0.6114367644221634);
    msg.setSource(59633U);
    msg.setSourceEntity(27U);
    msg.setDestination(6266U);
    msg.setDestinationEntity(219U);
    msg.id = 160U;
    msg.range = 0.30269391704239246;
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
    msg.setTimeStamp(0.8002405759810787);
    msg.setSource(56403U);
    msg.setSourceEntity(40U);
    msg.setDestination(35941U);
    msg.setDestinationEntity(101U);
    msg.type = 74U;
    msg.reason = 114U;
    msg.value = 0.714995552615806;
    msg.timestep = 0.8499171327406204;

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
    msg.setTimeStamp(0.3715334623588963);
    msg.setSource(33795U);
    msg.setSourceEntity(105U);
    msg.setDestination(7334U);
    msg.setDestinationEntity(229U);
    msg.type = 115U;
    msg.reason = 144U;
    msg.value = 0.9863928304500735;
    msg.timestep = 0.7975186564138081;

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
    msg.setTimeStamp(0.17422000755792166);
    msg.setSource(32469U);
    msg.setSourceEntity(175U);
    msg.setDestination(20981U);
    msg.setDestinationEntity(189U);
    msg.type = 95U;
    msg.reason = 138U;
    msg.value = 0.2865503499129488;
    msg.timestep = 0.5282253999539529;

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
    msg.setTimeStamp(0.30169288087411583);
    msg.setSource(26218U);
    msg.setSourceEntity(171U);
    msg.setDestination(35953U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.8638009421422715);
    msg.setSource(36705U);
    msg.setSourceEntity(47U);
    msg.setDestination(52833U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.7545863241848402);
    msg.setSource(42753U);
    msg.setSourceEntity(187U);
    msg.setDestination(19131U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.21265384001393994);
    msg.setSource(26828U);
    msg.setSourceEntity(146U);
    msg.setDestination(47670U);
    msg.setDestinationEntity(19U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IHTBMABBSSIFVBDXGIVILCYDWFAPGODEFHFTPCSYTIRNGQQOKPIPDKUNKNRJQYCDBRSDMBJAEHYPMB");
    tmp_msg_0.lat = 0.8017639058621835;
    tmp_msg_0.lon = 0.6356022979424198;
    tmp_msg_0.depth = 0.2509325822543672;
    tmp_msg_0.query_channel = 210U;
    tmp_msg_0.reply_channel = 95U;
    tmp_msg_0.transponder_delay = 211U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6799057352908536;
    msg.y = 0.36626823152717203;
    msg.var_x = 0.786521311103569;
    msg.var_y = 0.43269083654248597;
    msg.distance = 0.033569694149948925;

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
    msg.setTimeStamp(0.061472841730703);
    msg.setSource(51632U);
    msg.setSourceEntity(234U);
    msg.setDestination(703U);
    msg.setDestinationEntity(143U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IDJFTAGCOXCUBCTRURXBEACPVTFHKWRQEEGXZLEVCASCQNCAKMZOWQSUWFDJQKRUCVFPHIYJXYXWPKDNKOFPJDQMZJMZWRYPWEOAGKJGTTKGBYBBFQTVZGSHTYNIDVLFUMJCUIPQIHNMEAHYTKN");
    tmp_msg_0.lat = 0.9604969758486428;
    tmp_msg_0.lon = 0.13613499098078785;
    tmp_msg_0.depth = 0.24905010766403346;
    tmp_msg_0.query_channel = 104U;
    tmp_msg_0.reply_channel = 220U;
    tmp_msg_0.transponder_delay = 12U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9852615130847141;
    msg.y = 0.8931175705382591;
    msg.var_x = 0.07100081420784732;
    msg.var_y = 0.6346743867714482;
    msg.distance = 0.999422613559589;

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
    msg.setTimeStamp(0.43904172852585843);
    msg.setSource(3200U);
    msg.setSourceEntity(3U);
    msg.setDestination(8168U);
    msg.setDestinationEntity(157U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XUHTHDLVTGYANQEMCMNNUILYGQCZWEJYWHQCGKEDLSZTBQAXVRUSCPVDTNLSSYISYIWJPHFMPUBXWAAJBEZBOAGWFRHDVTOWKYNNFFBZSFGNMCQIFGWPQPZZBGRTYKPTEKQMVXLBDBDXJNKVPUMKOX");
    tmp_msg_0.lat = 0.9372621690910866;
    tmp_msg_0.lon = 0.12529872114399232;
    tmp_msg_0.depth = 0.06443569609926891;
    tmp_msg_0.query_channel = 213U;
    tmp_msg_0.reply_channel = 208U;
    tmp_msg_0.transponder_delay = 192U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4658360971981367;
    msg.y = 0.13007297628275016;
    msg.var_x = 0.6820518617822651;
    msg.var_y = 0.3961017522363466;
    msg.distance = 0.7583632726355359;

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
    msg.setTimeStamp(0.08867067062176637);
    msg.setSource(22402U);
    msg.setSourceEntity(206U);
    msg.setDestination(3295U);
    msg.setDestinationEntity(126U);
    msg.state = 202U;

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
    msg.setTimeStamp(0.5304302277311218);
    msg.setSource(21430U);
    msg.setSourceEntity(110U);
    msg.setDestination(22513U);
    msg.setDestinationEntity(193U);
    msg.state = 43U;

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
    msg.setTimeStamp(0.3811708493766537);
    msg.setSource(17921U);
    msg.setSourceEntity(128U);
    msg.setDestination(14253U);
    msg.setDestinationEntity(67U);
    msg.state = 123U;

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
    msg.setTimeStamp(0.17244198497842556);
    msg.setSource(2845U);
    msg.setSourceEntity(176U);
    msg.setDestination(43485U);
    msg.setDestinationEntity(42U);
    msg.x = 0.10709311229173324;
    msg.y = 0.25116914775452925;
    msg.z = 0.9197447248187056;

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
    msg.setTimeStamp(0.7206676893380938);
    msg.setSource(22319U);
    msg.setSourceEntity(193U);
    msg.setDestination(25914U);
    msg.setDestinationEntity(39U);
    msg.x = 0.008798822589705768;
    msg.y = 0.8058713279033752;
    msg.z = 0.6723209214970568;

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
    msg.setTimeStamp(0.4319597004766419);
    msg.setSource(39606U);
    msg.setSourceEntity(71U);
    msg.setDestination(54850U);
    msg.setDestinationEntity(157U);
    msg.x = 0.3002794251801485;
    msg.y = 0.5269251002359088;
    msg.z = 0.31786236310357285;

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
    msg.setTimeStamp(0.9762868712836937);
    msg.setSource(1854U);
    msg.setSourceEntity(93U);
    msg.setDestination(12998U);
    msg.setDestinationEntity(156U);
    msg.value = 0.947495404588888;

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
    msg.setTimeStamp(0.5881522059197299);
    msg.setSource(10051U);
    msg.setSourceEntity(70U);
    msg.setDestination(58564U);
    msg.setDestinationEntity(100U);
    msg.value = 0.5743487940037441;

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
    msg.setTimeStamp(0.20522520421574297);
    msg.setSource(34001U);
    msg.setSourceEntity(202U);
    msg.setDestination(43922U);
    msg.setDestinationEntity(156U);
    msg.value = 0.020342679319266366;

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
    msg.setTimeStamp(0.07638831640511745);
    msg.setSource(4292U);
    msg.setSourceEntity(81U);
    msg.setDestination(22281U);
    msg.setDestinationEntity(248U);
    msg.value = 0.2209862593150551;
    msg.z_units = 208U;

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
    msg.setTimeStamp(0.46440053690386307);
    msg.setSource(40092U);
    msg.setSourceEntity(176U);
    msg.setDestination(15492U);
    msg.setDestinationEntity(19U);
    msg.value = 0.9399989130797002;
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
    msg.setTimeStamp(0.5699524670884348);
    msg.setSource(32015U);
    msg.setSourceEntity(243U);
    msg.setDestination(42517U);
    msg.setDestinationEntity(24U);
    msg.value = 0.16353130333881438;
    msg.z_units = 125U;

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
    msg.setTimeStamp(0.8232895650704356);
    msg.setSource(5381U);
    msg.setSourceEntity(216U);
    msg.setDestination(6362U);
    msg.setDestinationEntity(163U);
    msg.value = 0.22605282233760793;
    msg.speed_units = 119U;

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
    msg.setTimeStamp(0.004517817920898226);
    msg.setSource(22206U);
    msg.setSourceEntity(33U);
    msg.setDestination(44850U);
    msg.setDestinationEntity(190U);
    msg.value = 0.4089539405141681;
    msg.speed_units = 103U;

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
    msg.setTimeStamp(0.24418243427853892);
    msg.setSource(45615U);
    msg.setSourceEntity(160U);
    msg.setDestination(21856U);
    msg.setDestinationEntity(88U);
    msg.value = 0.10414745119117541;
    msg.speed_units = 143U;

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
    msg.setTimeStamp(0.09386348344239492);
    msg.setSource(63312U);
    msg.setSourceEntity(66U);
    msg.setDestination(3001U);
    msg.setDestinationEntity(157U);
    msg.value = 0.2101764633176999;

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
    msg.setTimeStamp(0.4128301895668618);
    msg.setSource(236U);
    msg.setSourceEntity(26U);
    msg.setDestination(18108U);
    msg.setDestinationEntity(159U);
    msg.value = 0.22287083021394838;

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
    msg.setTimeStamp(0.10336928313840255);
    msg.setSource(60877U);
    msg.setSourceEntity(1U);
    msg.setDestination(61130U);
    msg.setDestinationEntity(14U);
    msg.value = 0.01834059091999385;

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
    msg.setTimeStamp(0.617390300623437);
    msg.setSource(19945U);
    msg.setSourceEntity(83U);
    msg.setDestination(18838U);
    msg.setDestinationEntity(48U);
    msg.value = 0.3806408526933778;

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
    msg.setTimeStamp(0.9429897567783581);
    msg.setSource(38482U);
    msg.setSourceEntity(146U);
    msg.setDestination(49491U);
    msg.setDestinationEntity(138U);
    msg.value = 0.23655825351895732;

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
    msg.setTimeStamp(0.8535693407469729);
    msg.setSource(1316U);
    msg.setSourceEntity(129U);
    msg.setDestination(30019U);
    msg.setDestinationEntity(131U);
    msg.value = 0.9225640459232702;

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
    msg.setTimeStamp(0.5129105012977325);
    msg.setSource(26718U);
    msg.setSourceEntity(41U);
    msg.setDestination(43696U);
    msg.setDestinationEntity(53U);
    msg.value = 0.6915396210529929;

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
    msg.setTimeStamp(0.9751393276928375);
    msg.setSource(20004U);
    msg.setSourceEntity(61U);
    msg.setDestination(39686U);
    msg.setDestinationEntity(14U);
    msg.value = 0.11377645612494725;

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
    msg.setTimeStamp(0.6088746925508188);
    msg.setSource(29867U);
    msg.setSourceEntity(77U);
    msg.setDestination(22247U);
    msg.setDestinationEntity(13U);
    msg.value = 0.4414328676214706;

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
    msg.setTimeStamp(0.9905342322114155);
    msg.setSource(22605U);
    msg.setSourceEntity(139U);
    msg.setDestination(62489U);
    msg.setDestinationEntity(70U);
    msg.start_lat = 0.39665217843714207;
    msg.start_lon = 0.9958147172416751;
    msg.start_z = 0.008748021743165357;
    msg.start_z_units = 145U;
    msg.end_lat = 0.9670670079894021;
    msg.end_lon = 0.9248191164512519;
    msg.end_z = 0.02823056956085812;
    msg.end_z_units = 6U;
    msg.speed = 0.8761498948112181;
    msg.speed_units = 59U;
    msg.lradius = 0.5505237809296655;
    msg.flags = 143U;

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
    msg.setTimeStamp(0.08986925654177469);
    msg.setSource(40515U);
    msg.setSourceEntity(121U);
    msg.setDestination(63419U);
    msg.setDestinationEntity(42U);
    msg.start_lat = 0.31848692326233174;
    msg.start_lon = 0.7937207676709579;
    msg.start_z = 0.6704307582849164;
    msg.start_z_units = 84U;
    msg.end_lat = 0.16448770097362242;
    msg.end_lon = 0.13892319158443545;
    msg.end_z = 0.8429152176479541;
    msg.end_z_units = 105U;
    msg.speed = 0.561464727464972;
    msg.speed_units = 58U;
    msg.lradius = 0.6877674497039002;
    msg.flags = 21U;

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
    msg.setTimeStamp(0.41521398864851977);
    msg.setSource(22711U);
    msg.setSourceEntity(94U);
    msg.setDestination(59478U);
    msg.setDestinationEntity(77U);
    msg.start_lat = 0.4456872056539739;
    msg.start_lon = 0.5633676702967214;
    msg.start_z = 0.12151543351316907;
    msg.start_z_units = 88U;
    msg.end_lat = 0.28634585751401387;
    msg.end_lon = 0.6780213145469558;
    msg.end_z = 0.6751673747150027;
    msg.end_z_units = 238U;
    msg.speed = 0.17546319291461943;
    msg.speed_units = 107U;
    msg.lradius = 0.9726037972957019;
    msg.flags = 158U;

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
    msg.setTimeStamp(0.5848606769557523);
    msg.setSource(10395U);
    msg.setSourceEntity(58U);
    msg.setDestination(9002U);
    msg.setDestinationEntity(154U);
    msg.x = 0.2399057060370342;
    msg.y = 0.5179530895496683;
    msg.z = 0.4216387696117757;
    msg.k = 0.0890272975829366;
    msg.m = 0.6609921834483147;
    msg.n = 0.9013813744655483;
    msg.flags = 156U;

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
    msg.setTimeStamp(0.3196984654143712);
    msg.setSource(63607U);
    msg.setSourceEntity(94U);
    msg.setDestination(47433U);
    msg.setDestinationEntity(220U);
    msg.x = 0.3419605536909006;
    msg.y = 0.7575551330237176;
    msg.z = 0.689985795752338;
    msg.k = 0.8397118036906539;
    msg.m = 0.6061656323949147;
    msg.n = 0.11331243698015003;
    msg.flags = 175U;

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
    msg.setTimeStamp(0.11017183149428611);
    msg.setSource(64109U);
    msg.setSourceEntity(203U);
    msg.setDestination(60730U);
    msg.setDestinationEntity(111U);
    msg.x = 0.48525579251227924;
    msg.y = 0.011000791331856163;
    msg.z = 0.04896534291383581;
    msg.k = 0.09271323725175673;
    msg.m = 0.7959007962255384;
    msg.n = 0.8258740759602564;
    msg.flags = 165U;

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
    msg.setTimeStamp(0.38172865432377134);
    msg.setSource(32195U);
    msg.setSourceEntity(230U);
    msg.setDestination(4944U);
    msg.setDestinationEntity(96U);
    msg.value = 0.9068726263321264;

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
    msg.setTimeStamp(0.6142972882933267);
    msg.setSource(49028U);
    msg.setSourceEntity(77U);
    msg.setDestination(3627U);
    msg.setDestinationEntity(177U);
    msg.value = 0.6542777528433661;

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
    msg.setTimeStamp(0.9273539433902985);
    msg.setSource(54833U);
    msg.setSourceEntity(135U);
    msg.setDestination(25788U);
    msg.setDestinationEntity(214U);
    msg.value = 0.8962014264029236;

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
    msg.setTimeStamp(0.783811396807506);
    msg.setSource(41191U);
    msg.setSourceEntity(33U);
    msg.setDestination(40290U);
    msg.setDestinationEntity(137U);
    msg.u = 0.8136304540817545;
    msg.v = 0.6971272905525666;
    msg.w = 0.4731527164699887;
    msg.p = 0.6329531847201596;
    msg.q = 0.735922295621639;
    msg.r = 0.3092815531357237;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.779885618233681);
    msg.setSource(16940U);
    msg.setSourceEntity(152U);
    msg.setDestination(14374U);
    msg.setDestinationEntity(78U);
    msg.u = 0.9944013579258174;
    msg.v = 0.34830575929469565;
    msg.w = 0.8353530358107792;
    msg.p = 0.5594962354033362;
    msg.q = 0.2503513370118716;
    msg.r = 0.6440852518567558;
    msg.flags = 205U;

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
    msg.setTimeStamp(0.3653882318801165);
    msg.setSource(18457U);
    msg.setSourceEntity(233U);
    msg.setDestination(58286U);
    msg.setDestinationEntity(223U);
    msg.u = 0.8488536622324477;
    msg.v = 0.40948222331932616;
    msg.w = 0.2890311894624997;
    msg.p = 0.07329550113374206;
    msg.q = 0.7339540632399862;
    msg.r = 0.25110764984516354;
    msg.flags = 183U;

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
    msg.setTimeStamp(0.36902053391814416);
    msg.setSource(31222U);
    msg.setSourceEntity(101U);
    msg.setDestination(26396U);
    msg.setDestinationEntity(119U);
    msg.start_lat = 0.1843111545634395;
    msg.start_lon = 0.5933615485713317;
    msg.start_z = 0.38125035048961764;
    msg.start_z_units = 192U;
    msg.end_lat = 0.8176434533550276;
    msg.end_lon = 0.30619119177308574;
    msg.end_z = 0.07161061911865574;
    msg.end_z_units = 147U;
    msg.lradius = 0.02668361205314773;
    msg.flags = 207U;
    msg.x = 0.8871417610518332;
    msg.y = 0.05152782175316717;
    msg.z = 0.6005906170063406;
    msg.vx = 0.8593447380347894;
    msg.vy = 0.33790435104322636;
    msg.vz = 0.5363183356761078;
    msg.course_error = 0.7112589064684076;
    msg.eta = 6938U;

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
    msg.setTimeStamp(0.8494058648525746);
    msg.setSource(15055U);
    msg.setSourceEntity(73U);
    msg.setDestination(33868U);
    msg.setDestinationEntity(251U);
    msg.start_lat = 0.05031928080625814;
    msg.start_lon = 0.06842493408743144;
    msg.start_z = 0.11737823594301944;
    msg.start_z_units = 118U;
    msg.end_lat = 0.7135340513253408;
    msg.end_lon = 0.38325338367529704;
    msg.end_z = 0.4649176680217215;
    msg.end_z_units = 44U;
    msg.lradius = 0.6216276052886007;
    msg.flags = 86U;
    msg.x = 0.517494585158256;
    msg.y = 0.5247759857160093;
    msg.z = 0.7639339122127178;
    msg.vx = 0.22877516477179494;
    msg.vy = 0.1768673211908759;
    msg.vz = 0.38037507696893436;
    msg.course_error = 0.9442346372727545;
    msg.eta = 39164U;

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
    msg.setTimeStamp(0.7208943309197209);
    msg.setSource(53057U);
    msg.setSourceEntity(30U);
    msg.setDestination(51366U);
    msg.setDestinationEntity(167U);
    msg.start_lat = 0.7046222768432634;
    msg.start_lon = 0.6477085209394249;
    msg.start_z = 0.8665887712794045;
    msg.start_z_units = 64U;
    msg.end_lat = 0.415473431569206;
    msg.end_lon = 0.13474675880020037;
    msg.end_z = 0.3107855361724263;
    msg.end_z_units = 106U;
    msg.lradius = 0.9435035355720018;
    msg.flags = 249U;
    msg.x = 0.7817394450891229;
    msg.y = 0.10947743135459764;
    msg.z = 0.884168421398558;
    msg.vx = 0.6141704116610085;
    msg.vy = 0.8420973518986689;
    msg.vz = 0.43505402856442466;
    msg.course_error = 0.8012758514157516;
    msg.eta = 11167U;

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
    msg.setTimeStamp(0.01720911257868396);
    msg.setSource(41296U);
    msg.setSourceEntity(250U);
    msg.setDestination(42884U);
    msg.setDestinationEntity(116U);
    msg.k = 0.7697616204215992;
    msg.m = 0.12986630122206022;
    msg.n = 0.43166033061956;

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
    msg.setTimeStamp(0.2856114588667613);
    msg.setSource(43681U);
    msg.setSourceEntity(83U);
    msg.setDestination(34811U);
    msg.setDestinationEntity(12U);
    msg.k = 0.7805335155971355;
    msg.m = 0.10759792554450132;
    msg.n = 0.8594013932543275;

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
    msg.setTimeStamp(0.00018892327607578085);
    msg.setSource(62455U);
    msg.setSourceEntity(68U);
    msg.setDestination(10646U);
    msg.setDestinationEntity(182U);
    msg.k = 0.5772531460601855;
    msg.m = 0.27208610664214494;
    msg.n = 0.03211888826154374;

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
    msg.setTimeStamp(0.2121890164435104);
    msg.setSource(38782U);
    msg.setSourceEntity(196U);
    msg.setDestination(54376U);
    msg.setDestinationEntity(213U);
    msg.p = 0.6557734621981127;
    msg.i = 0.6090919011153277;
    msg.d = 0.620842505907707;
    msg.a = 0.4899694030671241;

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
    msg.setTimeStamp(0.8658493547778544);
    msg.setSource(2291U);
    msg.setSourceEntity(18U);
    msg.setDestination(29705U);
    msg.setDestinationEntity(180U);
    msg.p = 0.9022453717817359;
    msg.i = 0.05479198738479363;
    msg.d = 0.0668776338015562;
    msg.a = 0.3707117270800948;

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
    msg.setTimeStamp(0.6780599938561442);
    msg.setSource(46110U);
    msg.setSourceEntity(28U);
    msg.setDestination(64017U);
    msg.setDestinationEntity(218U);
    msg.p = 0.4807060103116396;
    msg.i = 0.18635475245983157;
    msg.d = 0.050758232881047194;
    msg.a = 0.8322937646541831;

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
    msg.setTimeStamp(0.007541119343852598);
    msg.setSource(45779U);
    msg.setSourceEntity(131U);
    msg.setDestination(19138U);
    msg.setDestinationEntity(147U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.03835351597334191);
    msg.setSource(18629U);
    msg.setSourceEntity(134U);
    msg.setDestination(27113U);
    msg.setDestinationEntity(240U);
    msg.op = 106U;

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
    msg.setTimeStamp(0.7660711554378576);
    msg.setSource(48059U);
    msg.setSourceEntity(134U);
    msg.setDestination(60863U);
    msg.setDestinationEntity(27U);
    msg.op = 114U;

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
    msg.setTimeStamp(0.7943986472778573);
    msg.setSource(43124U);
    msg.setSourceEntity(185U);
    msg.setDestination(37686U);
    msg.setDestinationEntity(253U);
    msg.timeout = 31974U;
    msg.lat = 0.3676045213866681;
    msg.lon = 0.44904029640795695;
    msg.z = 0.7846421309966713;
    msg.z_units = 35U;
    msg.speed = 0.8070599024318776;
    msg.speed_units = 97U;
    msg.roll = 0.20826686950572226;
    msg.pitch = 0.9367310219959103;
    msg.yaw = 0.7735360063231022;
    msg.custom.assign("CNETOBQVPLFLEJJZPNCDBYWJTYGMMOOJPJOLWITSWKUGXPDEFYFKHCMBEVITRFUKQQHIMVZX");

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
    msg.setTimeStamp(0.16493851983174257);
    msg.setSource(37523U);
    msg.setSourceEntity(16U);
    msg.setDestination(42338U);
    msg.setDestinationEntity(197U);
    msg.timeout = 22326U;
    msg.lat = 0.8277566548510048;
    msg.lon = 0.80245398464635;
    msg.z = 0.8692197330980822;
    msg.z_units = 131U;
    msg.speed = 0.7704605079788156;
    msg.speed_units = 248U;
    msg.roll = 0.5193114629227342;
    msg.pitch = 0.7223923484004416;
    msg.yaw = 0.08669109322528945;
    msg.custom.assign("ZPMPTPREDIQ");

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
    msg.setTimeStamp(0.6762008716872272);
    msg.setSource(56724U);
    msg.setSourceEntity(174U);
    msg.setDestination(41842U);
    msg.setDestinationEntity(209U);
    msg.timeout = 55193U;
    msg.lat = 0.348902738651807;
    msg.lon = 0.16194681415680345;
    msg.z = 0.5329072153156026;
    msg.z_units = 195U;
    msg.speed = 0.9810705009029919;
    msg.speed_units = 224U;
    msg.roll = 0.9539989503438717;
    msg.pitch = 0.662755280335617;
    msg.yaw = 0.7142434821419569;
    msg.custom.assign("AAJPXZKIFTZEGSKUTGSUOOSELTXZCIZPLWBGCEEXVMCWTHOOCMOKZNXKSJEMJWWEFHHXVFIMJDPJYKDSASAVYYROPBMQQQZCH");

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
    msg.setTimeStamp(0.6704405615284337);
    msg.setSource(61749U);
    msg.setSourceEntity(39U);
    msg.setDestination(62426U);
    msg.setDestinationEntity(56U);
    msg.timeout = 2187U;
    msg.lat = 0.6326499961662998;
    msg.lon = 0.43080872501351675;
    msg.z = 0.3013158794554964;
    msg.z_units = 127U;
    msg.speed = 0.23078086916429708;
    msg.speed_units = 141U;
    msg.duration = 35712U;
    msg.radius = 0.9797578246632807;
    msg.flags = 222U;
    msg.custom.assign("AIGBTQFLYHWNHLEVLTTKKPWTZROUAIIVXTYJKZCZEQMVPCGIIZGGUNBDXQNDHOOLSLUGLVWSISUQNUEECHCQWSWFPKMQPRJZZCXVIOGKCXMFUDVMJOXDXWFHJDACMDKRYRBFPRYJLLNWYAJQOWAZTTPCMNCAHCFQKGXLMAOHBVBNTWGXBVQBYTDROFSKJKSIZQPDGYUZJXAPNLBAHBBSSEYEJDMGUUHIKOEEXMEPFIEFHJDFS");

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
    msg.setTimeStamp(0.03573157213702016);
    msg.setSource(2196U);
    msg.setSourceEntity(158U);
    msg.setDestination(55839U);
    msg.setDestinationEntity(190U);
    msg.timeout = 48750U;
    msg.lat = 0.27744142909481506;
    msg.lon = 0.6417871625788971;
    msg.z = 0.5031636383719809;
    msg.z_units = 134U;
    msg.speed = 0.5718104555190121;
    msg.speed_units = 43U;
    msg.duration = 40079U;
    msg.radius = 0.28623028516582016;
    msg.flags = 251U;
    msg.custom.assign("NSZDOAXEQQCIFNLLZLUESDSLSJERHTQMZCCIVCGBUCZIFXLKTLFLFARSAJWSLBJXYCODCBESNDCUWKJZEGKWZUHAJRWVIYWMKUZOAPGYKVFRQXPGJJXGJRDUNIAZMUAJVVDHNWEXKTNMKHDBXFOOBEYTMYIMMPAWQIXPIVKJZTWYBQTZDOFLTEHTPMQBXOFOVPIUH");

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
    msg.setTimeStamp(0.31596142856881393);
    msg.setSource(41808U);
    msg.setSourceEntity(146U);
    msg.setDestination(33059U);
    msg.setDestinationEntity(85U);
    msg.timeout = 25092U;
    msg.lat = 0.7129024567536268;
    msg.lon = 0.7063307529391302;
    msg.z = 0.23174586648593065;
    msg.z_units = 205U;
    msg.speed = 0.5777993303598402;
    msg.speed_units = 14U;
    msg.duration = 56551U;
    msg.radius = 0.4547454704482802;
    msg.flags = 112U;
    msg.custom.assign("SWDLZWNKVQLVOCFIUGVELXVOJJCBYRHRPHM");

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
    msg.setTimeStamp(0.8539642134091435);
    msg.setSource(21354U);
    msg.setSourceEntity(172U);
    msg.setDestination(61847U);
    msg.setDestinationEntity(43U);
    msg.custom.assign("XVVQGPGYSYSJEUUTCOEIIILNATIRKJEXRNBYWPWPKBBFFQTVJPMAEDVFEALNMHECMOMWYOVMIBQTZVKXRZMIDVUAUOEPQKYUSRBFOZGIKKXULXUBUCMJHTPBTGZASZQKFPHPCRKXWUGYQRTDJQXZSGTSWCWKFNJNRBLZHCHGVBDQDZIALRJSPLRIDNAIWYOLNNOXLGYBCMHDMWMHFND");

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
    msg.setTimeStamp(0.4785621951336062);
    msg.setSource(25774U);
    msg.setSourceEntity(168U);
    msg.setDestination(9081U);
    msg.setDestinationEntity(75U);
    msg.custom.assign("HPNSAOLQWBCZKVWVFFZZXHYUXSUPTJDBCZPLNWSOBTAPNBYZZSHYICGXETUKZCIKYNTURNQWCOQOVGMQDSEIGPVGJETETXAYNEWJFJPDKHGUHNRAFXLKTUO");

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
    msg.setTimeStamp(0.2326316903604102);
    msg.setSource(63244U);
    msg.setSourceEntity(221U);
    msg.setDestination(9673U);
    msg.setDestinationEntity(30U);
    msg.custom.assign("EZCNBRELILAVSMAQIMRNVXAMFNODBWPQNENLBVHKNXGFITIKMXGPFCZBBJSXSMGCLIRAVGDYUTIBJCQSHHDMMKEOYIQEKHAECGDVKGWNAKSUVVUBFTWXLXGIQJNXOSLYKWJIXCBIJMPSCPZOULWJRRZYMZUQJUHMWWZKEWJDECTLYXHVHSTU");

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
    msg.setTimeStamp(0.6097786951666223);
    msg.setSource(47293U);
    msg.setSourceEntity(115U);
    msg.setDestination(63410U);
    msg.setDestinationEntity(244U);
    msg.timeout = 50628U;
    msg.lat = 0.2923771624440553;
    msg.lon = 0.4205414235966324;
    msg.z = 0.7463184844086275;
    msg.z_units = 245U;
    msg.duration = 4276U;
    msg.speed = 0.454667599205444;
    msg.speed_units = 218U;
    msg.type = 91U;
    msg.radius = 0.0537609072041354;
    msg.length = 0.7957849386439159;
    msg.bearing = 0.14857347743322336;
    msg.direction = 199U;
    msg.custom.assign("DTEEIROJBLDVRNFUANGDATDMYJ");

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
    msg.setTimeStamp(0.011694418046296451);
    msg.setSource(18370U);
    msg.setSourceEntity(176U);
    msg.setDestination(42898U);
    msg.setDestinationEntity(139U);
    msg.timeout = 33228U;
    msg.lat = 0.733933810556656;
    msg.lon = 0.8609949998995166;
    msg.z = 0.5544208259996438;
    msg.z_units = 15U;
    msg.duration = 30428U;
    msg.speed = 0.23640481720533568;
    msg.speed_units = 86U;
    msg.type = 74U;
    msg.radius = 0.4592800016292795;
    msg.length = 0.2857314047805991;
    msg.bearing = 0.0022007653331497234;
    msg.direction = 12U;
    msg.custom.assign("GBBUHBSMANJIVMLFJUTVWRBQWRCWYELFPCZLDHNYHUGZEGSXJIMFJBJRJLBUSXDJZFKYQORORVGJNAOOCHNJIMRNMGRIFPNGGSSOVGPFXDOXLLYI");

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
    msg.setTimeStamp(0.15893800400237545);
    msg.setSource(272U);
    msg.setSourceEntity(85U);
    msg.setDestination(35533U);
    msg.setDestinationEntity(34U);
    msg.timeout = 21985U;
    msg.lat = 0.5048200861488958;
    msg.lon = 0.2341288950673316;
    msg.z = 0.8472691775190317;
    msg.z_units = 166U;
    msg.duration = 24104U;
    msg.speed = 0.0847127053704847;
    msg.speed_units = 41U;
    msg.type = 103U;
    msg.radius = 0.21263026835052512;
    msg.length = 0.6069906249745196;
    msg.bearing = 0.2608171113663631;
    msg.direction = 116U;
    msg.custom.assign("NPVYHXXRUEWFGKGXSRVYUYMVZZRJSVYKINCNUQIHTPWCBKQHNTPIOMSKFPUDTVNKDVPDCCSDYKIPGQLBDJBDSAOXSDRMQMTGLFQEYRVWEKRHONZLBTWEXJYBBHCEMILJEUHWUKQPIXNVQAFZJLOQ");

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
    msg.setTimeStamp(0.145471152648056);
    msg.setSource(40178U);
    msg.setSourceEntity(154U);
    msg.setDestination(9172U);
    msg.setDestinationEntity(108U);
    msg.duration = 19184U;
    msg.custom.assign("SMQQPFZXJGOQEIAXDVREJFGESYCWXVTAANJPLUQHUZUZUNMTWMUJNTLUBFBMECNMDZSEHRQLTGTBTPIVXJLGEVAHLONHAAJ");

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
    msg.setTimeStamp(0.49954648778067423);
    msg.setSource(37333U);
    msg.setSourceEntity(90U);
    msg.setDestination(32147U);
    msg.setDestinationEntity(135U);
    msg.duration = 24424U;
    msg.custom.assign("HKDAEAIJLCHAVKQTFIQQGAFFRWKMHUGYLVOQCQPALOMLTVBXPTLNUMRQHOBFEXNPATJMWUNWJMXWRZTLYFGO");

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
    msg.setTimeStamp(0.6297500089521781);
    msg.setSource(1339U);
    msg.setSourceEntity(42U);
    msg.setDestination(4411U);
    msg.setDestinationEntity(93U);
    msg.duration = 25490U;
    msg.custom.assign("ENCGAEDDIXKOOVKEADUZKTDMFUMQOHMWHLAFWCIHQFXLQFZKDWQSTSBEPUZCAQIPPGOLUPVWCZDPPRAOELWNKMXQHFASYTFPDBXACTHMYLAWX");

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
    msg.setTimeStamp(0.9732095330763902);
    msg.setSource(62798U);
    msg.setSourceEntity(92U);
    msg.setDestination(39702U);
    msg.setDestinationEntity(240U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.6993861369242409;
    tmp_msg_0.start_lon = 0.35609213308409904;
    tmp_msg_0.start_z = 0.48693698881168446;
    tmp_msg_0.start_z_units = 108U;
    tmp_msg_0.end_lat = 0.8914772309883091;
    tmp_msg_0.end_lon = 0.22978315725684018;
    tmp_msg_0.end_z = 0.4843744371691203;
    tmp_msg_0.end_z_units = 245U;
    tmp_msg_0.speed = 0.5626699054751267;
    tmp_msg_0.speed_units = 211U;
    tmp_msg_0.lradius = 0.9062968050546876;
    tmp_msg_0.flags = 172U;
    msg.control.set(tmp_msg_0);
    msg.duration = 57453U;
    msg.custom.assign("OPNQPVJFGPRRWDOWHFHUWMQXHTYGLIASAXFRMBADIZRKSVQAZTMNJDWNOIOKOCCJEA");

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
    msg.setTimeStamp(0.33101772388186634);
    msg.setSource(21494U);
    msg.setSourceEntity(201U);
    msg.setDestination(29697U);
    msg.setDestinationEntity(98U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.5674920289699509;
    msg.control.set(tmp_msg_0);
    msg.duration = 9993U;
    msg.custom.assign("GBBUIQNFCQFXWSPMLHLIZEQBYUZRUVTVCJQFMEINMJVSJRWCQKZCUKDPIPUHMYYTAELYMQRWZFZEKSNXXKELWEFUFGCTBXBEUFGRPVUCJPYBNYAIRHSATOSHTXVXHKSLQMRCHIRZFAZGHHGYVPZZWKJUDJQLNBVZOMWKJHOETAVVWIQNUDSDMRRODOKOPOSBNBOTKPSWFYYOAEBVDNICDLGTGG");

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
    msg.setTimeStamp(0.7006339353837191);
    msg.setSource(51665U);
    msg.setSourceEntity(105U);
    msg.setDestination(27557U);
    msg.setDestinationEntity(251U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.27937305997360107;
    msg.control.set(tmp_msg_0);
    msg.duration = 57017U;
    msg.custom.assign("OVGDCGSXSPIFUMVXEDLPAXEUCWJVJQNBJITXBBOWEUESLKCWHKYOHFRMMHOLWPZVPLUGFVQMWJAIOBTJSAHGFBPRCECGQNSRJAZYUKUAQZDPEDANGFTOOWCUQWBRNZYRJRTLHCCOXDKVBXUVAQTFDZYTKSGZFXBANVYVHILJPKWDYLYHJRLXTMRNGICTSIIKMDNSLNCMZJEXA");

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
    msg.setTimeStamp(0.9176914230296458);
    msg.setSource(11494U);
    msg.setSourceEntity(53U);
    msg.setDestination(43697U);
    msg.setDestinationEntity(176U);
    msg.timeout = 6736U;
    msg.lat = 0.6562048142360021;
    msg.lon = 0.16809293830433847;
    msg.z = 0.8188912842293471;
    msg.z_units = 128U;
    msg.speed = 0.5688534226514536;
    msg.speed_units = 76U;
    msg.bearing = 0.8961725942438239;
    msg.cross_angle = 0.20811944886310196;
    msg.width = 0.9169147677218219;
    msg.length = 0.740811497958544;
    msg.hstep = 0.0960544288406463;
    msg.coff = 163U;
    msg.alternation = 151U;
    msg.flags = 211U;
    msg.custom.assign("LGMMTRPVXQXJOFDJRDBYTLIUBNURZLYPWFEPTULBMQIYKJTZDBDXRPWBVNSOVVBFDBSZYYQHZRJOGNNZ");

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
    msg.setTimeStamp(0.9734128281854427);
    msg.setSource(63972U);
    msg.setSourceEntity(100U);
    msg.setDestination(15881U);
    msg.setDestinationEntity(208U);
    msg.timeout = 15857U;
    msg.lat = 0.4354990820778524;
    msg.lon = 0.9584649086248966;
    msg.z = 0.6369637878660084;
    msg.z_units = 117U;
    msg.speed = 0.2317266654552903;
    msg.speed_units = 53U;
    msg.bearing = 0.08966386336186838;
    msg.cross_angle = 0.1251559009020946;
    msg.width = 0.9050976545917658;
    msg.length = 0.5470640296476624;
    msg.hstep = 0.726780433704221;
    msg.coff = 28U;
    msg.alternation = 164U;
    msg.flags = 197U;
    msg.custom.assign("OQCTBTEWHBYRCCRPJMEIQERFIJDARBGPHVUYKFDNKHMOXWBAYGOLTAVDLSRNMREPUHMNUIXZXKFSPNRJZZHKJDTQMJXVUIHLWYPLIVADUJFLGIOGDFFSPITQWMXRBVVXSAMCCTXSJNAGZECKG");

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
    msg.setTimeStamp(0.49223431965254216);
    msg.setSource(19323U);
    msg.setSourceEntity(4U);
    msg.setDestination(8996U);
    msg.setDestinationEntity(197U);
    msg.timeout = 25292U;
    msg.lat = 0.7302778953600869;
    msg.lon = 0.4590832509499342;
    msg.z = 0.4064890508583091;
    msg.z_units = 64U;
    msg.speed = 0.41404577748658145;
    msg.speed_units = 207U;
    msg.bearing = 0.43043995715906913;
    msg.cross_angle = 0.4770211374083302;
    msg.width = 0.06757189078043924;
    msg.length = 0.18554051646427772;
    msg.hstep = 0.8061801778391772;
    msg.coff = 31U;
    msg.alternation = 87U;
    msg.flags = 132U;
    msg.custom.assign("EUKYLUTFCQHGAZYFIBIHRIGBOPXTBVNXAIILEDWOZEFSPNYWSGNSHDZWUJXAIQAGSXEVUCLMKKBPRXSMWPSDTBWOJAATXFYLJKIQJENJSZEOIRKPSFMYARLNDNUZJHYATSVVMUONOIDYHHQHQSMNGNGKMZAFYVBWJDPVZCLCPXHZGDMCKMRBDBZK");

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
    msg.setTimeStamp(0.570806028670681);
    msg.setSource(39891U);
    msg.setSourceEntity(80U);
    msg.setDestination(49705U);
    msg.setDestinationEntity(15U);
    msg.timeout = 52416U;
    msg.lat = 0.05811957864078454;
    msg.lon = 0.24443621353664935;
    msg.z = 0.376810781971736;
    msg.z_units = 65U;
    msg.speed = 0.4919843926262819;
    msg.speed_units = 107U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.004154295286111331;
    tmp_msg_0.y = 0.1148798515218783;
    tmp_msg_0.z = 0.9508763314234522;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PJEKVKUUXEFCPABBVDGSIUDPGSQNHZVPITFKREANSLGACGWYEPBUQSGHJSTTXTKJTTQVHMBKFXXYNQDIAZCJZKWBYWNJVIAKQJCTZBMRKOOEGMLEPYODRHZQWFHXOSSOTLCMILALFLKNWVFVJARRXYOQUYBBBWRRANRYGQNLGDMPDHFEZZVZLPGJUQSIUEHDODPPMYNOXFRQXHEWCGTWM");

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
    msg.setTimeStamp(0.33419201415243616);
    msg.setSource(26873U);
    msg.setSourceEntity(40U);
    msg.setDestination(58553U);
    msg.setDestinationEntity(9U);
    msg.timeout = 27175U;
    msg.lat = 0.5339337215980584;
    msg.lon = 0.4987998436729907;
    msg.z = 0.4529484298026367;
    msg.z_units = 42U;
    msg.speed = 0.906394795333765;
    msg.speed_units = 28U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.16333889631196086;
    tmp_msg_0.y = 0.09852181060980492;
    tmp_msg_0.z = 0.5195698503635682;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TISBHZTXLZGJTQZISKVFUMYAZERCXIYKPKAVCWZMEGBQDZXKNGEWCHBPTFNYRCLGUEBAOASDFVVVJEFFNBSTBLJDFNQBRPQZYEDAJMXMPORUAPIMHJEPLTKKEOUNSNCHECYKRZMGVCDRAAVTLULIKWQNOCJSGIFXFQDBGJYXYOOCIQWSLYHJIKOQWWSHOIXWRNMTZUHOTFYGMROZKUAVHSGPGLTPWNEWDHJXVJWNU");

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
    msg.setTimeStamp(0.049063180461556);
    msg.setSource(34441U);
    msg.setSourceEntity(225U);
    msg.setDestination(59635U);
    msg.setDestinationEntity(203U);
    msg.timeout = 30629U;
    msg.lat = 0.9186280512065151;
    msg.lon = 0.9572766980191839;
    msg.z = 0.7246946509114326;
    msg.z_units = 19U;
    msg.speed = 0.6625251383757499;
    msg.speed_units = 227U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.22494402862825857;
    tmp_msg_0.y = 0.3491388232778131;
    tmp_msg_0.z = 0.10193716170712808;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WNIDLTTQEACQAWSMOREGKPXSVEAQPGILJKFNRXHYQICJDBUJZHFJYYDLVQUQVKUMEARCJSAZJVLBQDCSJVZORYDZYAIRCBAOEPPVNTEQLNQBKWZFBVUBYZKTDTLDRSEXWNWAJFCKGBUFXLSMYMUPSWOCMDLGIICFAXMXPUUBJFXWNMMKODHTOIYUGDGINNTSZLFPGTXTMGVORBEWPUKSCRZZXFPNFBMZXR");

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
    msg.setTimeStamp(0.5685691543941092);
    msg.setSource(13494U);
    msg.setSourceEntity(54U);
    msg.setDestination(23117U);
    msg.setDestinationEntity(195U);
    msg.x = 0.8465352856246191;
    msg.y = 0.9782639781726036;
    msg.z = 0.7353003161369038;

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
    msg.setTimeStamp(0.04674673408771446);
    msg.setSource(16024U);
    msg.setSourceEntity(72U);
    msg.setDestination(27904U);
    msg.setDestinationEntity(191U);
    msg.x = 0.3266060249450209;
    msg.y = 0.14123929877028008;
    msg.z = 0.864509757217579;

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
    msg.setTimeStamp(0.7004446140776343);
    msg.setSource(21346U);
    msg.setSourceEntity(109U);
    msg.setDestination(702U);
    msg.setDestinationEntity(114U);
    msg.x = 0.7947792555782033;
    msg.y = 0.003332667468391337;
    msg.z = 0.1429458913788042;

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
    msg.setTimeStamp(0.10422520703524696);
    msg.setSource(13705U);
    msg.setSourceEntity(209U);
    msg.setDestination(11910U);
    msg.setDestinationEntity(23U);
    msg.timeout = 55175U;
    msg.lat = 0.04109524908151063;
    msg.lon = 0.45459253833209456;
    msg.z = 0.11502064537219436;
    msg.z_units = 55U;
    msg.amplitude = 0.32455530292923396;
    msg.pitch = 0.11247322881231503;
    msg.speed = 0.45369490287869096;
    msg.speed_units = 64U;
    msg.custom.assign("WMXKYJLXTHAKFNEPHRRXWBDQJVFTDCPEBWNTNPRGPTSZGWPYOQKBTQPKQUHRXDKTYAUHVRFEFMIQQDUDKHUNYAMANECEOUOJFVYZRDVNLIAYEGJSSGHEPZBIXMG");

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
    msg.setTimeStamp(0.8318556620605874);
    msg.setSource(26982U);
    msg.setSourceEntity(168U);
    msg.setDestination(7912U);
    msg.setDestinationEntity(31U);
    msg.timeout = 26830U;
    msg.lat = 0.12226952665256352;
    msg.lon = 0.9718514019670801;
    msg.z = 0.08413845507734086;
    msg.z_units = 25U;
    msg.amplitude = 0.19078550387591986;
    msg.pitch = 0.943344884307341;
    msg.speed = 0.9999284654025101;
    msg.speed_units = 254U;
    msg.custom.assign("NHJZTUNBKSXXYJZFKTNECYHGIKVGUKCICPJETVZLVTDJWPMOIMQFFHQCNFFZCQGBRVWBCLGUWBJMSHRUCDEMAEQTKSEOBOTCBYAYSEDPXUVMLMVIUPGJHFDBPXYIAQGCYWUNPIQHHIMOONZABUDTLSWGRFOZIWXOSXAXYXJRGJZQQAXRMYMHNAPUERWUONVADWFOATVRWDPYKQSDHMSXLGTVPYEDGOBEZLLRSPFKJKSTDK");

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
    msg.setTimeStamp(0.6274818292786545);
    msg.setSource(30175U);
    msg.setSourceEntity(155U);
    msg.setDestination(87U);
    msg.setDestinationEntity(38U);
    msg.timeout = 23287U;
    msg.lat = 0.06072602990366016;
    msg.lon = 0.9006043733375765;
    msg.z = 0.9773789487091299;
    msg.z_units = 26U;
    msg.amplitude = 0.31996682790646336;
    msg.pitch = 0.947077698405168;
    msg.speed = 0.13973229590724834;
    msg.speed_units = 126U;
    msg.custom.assign("RFXPSNRLUIWEBVPHHMLVUYEMADAKZBFPRBDBOTEPCHWYMKGSCCFEROVRYHUDGGPJRKYWBDWWWVAOBVMXTXSAMIWGAZTFVHOSTCSYROQKHPKWDPENNLCLKVQZOEZUFRLEMZFIGZPYQDIMFUAJJJJEDAILECWYSFZBINUKOLBZNDQERUBOBNJIYGCKCFFYMCNGKDICSQDJQVQKTQUWAHLUQLZNIXPAHJMAMXGTGOGX");

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
    msg.setTimeStamp(0.7155015202956685);
    msg.setSource(18098U);
    msg.setSourceEntity(159U);
    msg.setDestination(48898U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.0802629641921736);
    msg.setSource(38282U);
    msg.setSourceEntity(121U);
    msg.setDestination(38408U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.06911643721428151);
    msg.setSource(51668U);
    msg.setSourceEntity(213U);
    msg.setDestination(62040U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.9289398825745979);
    msg.setSource(24090U);
    msg.setSourceEntity(142U);
    msg.setDestination(50433U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.10384987403759516;
    msg.lon = 0.7988406709541692;
    msg.z = 0.13634675601794444;
    msg.z_units = 142U;
    msg.radius = 0.8651837975620555;
    msg.duration = 34543U;
    msg.speed = 0.8370106493499391;
    msg.speed_units = 9U;
    msg.custom.assign("ERNUQQXWUYHEWINEPYLGPTODUUCUPEYASFGTBYXXURKRXXDEBAGLWPVPZAOKFEACQPOFSFIPWHYHMZIJMHMBHUMGQVAHEAYJGYDCWMDWRGEMIKMSLFHRKWOITKNMILCOVSOCTVOSCBTZBBFENBDVNFQKXDJUKUASZSOHLBNCXTTLTRFVKGKZHOQLOUNZJXIRCQWKYPBRGHGJVWNIMYJZVTQALQDXZSRZNLDXJFDBDPSJCYA");

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
    msg.setTimeStamp(0.908733654030681);
    msg.setSource(59068U);
    msg.setSourceEntity(185U);
    msg.setDestination(9616U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.7361776212507835;
    msg.lon = 0.1385856382018218;
    msg.z = 0.34517028554257323;
    msg.z_units = 126U;
    msg.radius = 0.9037806755475749;
    msg.duration = 43220U;
    msg.speed = 0.33882110935646503;
    msg.speed_units = 83U;
    msg.custom.assign("BANXTSZKFFXVEIGTSNHIJGAHUGKNJPEEUEMXIRB");

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
    msg.setTimeStamp(0.7491235003927399);
    msg.setSource(23211U);
    msg.setSourceEntity(158U);
    msg.setDestination(21551U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.5897146289045753;
    msg.lon = 0.32502192227923643;
    msg.z = 0.11088703357801755;
    msg.z_units = 5U;
    msg.radius = 0.7627848891997119;
    msg.duration = 21044U;
    msg.speed = 0.8631488179325914;
    msg.speed_units = 11U;
    msg.custom.assign("CSFZSPDKSTOFDBNKGCSUTNDAHRXRTCMJOMWIVWJVOREJQKPIQJZTLXESEEIFUUFNYLUQUKPBHHJWVEARTOZPMTCMFINKOAMGOYYZLVMWBJAHJYYBPIBCEMARWBLLWHZEUFFXTQECPIB");

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
    msg.setTimeStamp(0.4471679276232988);
    msg.setSource(25749U);
    msg.setSourceEntity(208U);
    msg.setDestination(57545U);
    msg.setDestinationEntity(128U);
    msg.timeout = 49675U;
    msg.flags = 101U;
    msg.lat = 0.5321598201237817;
    msg.lon = 0.2162148176526676;
    msg.start_z = 0.6476116417857397;
    msg.start_z_units = 159U;
    msg.end_z = 0.6636611791798069;
    msg.end_z_units = 45U;
    msg.radius = 0.7391649684532005;
    msg.speed = 0.6931186952536077;
    msg.speed_units = 76U;
    msg.custom.assign("ZXPTDBSUURDJZSUYYTNKRIMFDQIHIPSRQBGKZBLXTXUDLVJLAWFVQOFCGIVDWATADKTCWJMAORZNEWOTSPBCUAGVTJJEOAPPZDIFHIBPSBVRCZJMWLTGNYAQXELGNBXZCPTHKUYDPJZBLMVEKIHMOJXFFLVVXYHFZWBRMROFHWCXCXGQJFMTEYGSRHOOKXLAUKGRYOSDWEMUQSVPGSQNWLNU");

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
    msg.setTimeStamp(0.827418162358413);
    msg.setSource(14675U);
    msg.setSourceEntity(123U);
    msg.setDestination(12693U);
    msg.setDestinationEntity(106U);
    msg.timeout = 20706U;
    msg.flags = 171U;
    msg.lat = 0.7339020147573582;
    msg.lon = 0.5914855037463217;
    msg.start_z = 0.21097179887600725;
    msg.start_z_units = 209U;
    msg.end_z = 0.1567738972051289;
    msg.end_z_units = 46U;
    msg.radius = 0.42516228151648894;
    msg.speed = 0.6850592873803809;
    msg.speed_units = 13U;
    msg.custom.assign("ZINXZESAVTXTYBKMQYTZTZVYOIASGCOHJHOTIWNEGIXLGUZMQUBHLPKHKVTBDXQPKWNFFRPTKLQZKVRDECNSNRJRANIQWJDKHLPORYGGHVSPRMXFZMIUFLGEFKPFRTZBXQCUOVROWHBQQHNYJMSIEHCTNACJAKBXMUJLIXVVMACDPXWLULWUMOEBYFTSZBCJMLUYPDWZEWDRMYOOHEAXUKBNUOGDCQSBWDNSQACFPGJSGAWV");

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
    msg.setTimeStamp(0.33253003339692766);
    msg.setSource(46886U);
    msg.setSourceEntity(209U);
    msg.setDestination(2773U);
    msg.setDestinationEntity(159U);
    msg.timeout = 16786U;
    msg.flags = 82U;
    msg.lat = 0.9244436235954099;
    msg.lon = 0.6050883748961323;
    msg.start_z = 0.8949433852971811;
    msg.start_z_units = 75U;
    msg.end_z = 0.819988745875529;
    msg.end_z_units = 38U;
    msg.radius = 0.7854078503652664;
    msg.speed = 0.6684663379258595;
    msg.speed_units = 179U;
    msg.custom.assign("TDUAEEPYEFHSQVBSCLLW");

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
    msg.setTimeStamp(0.49933643108022563);
    msg.setSource(55455U);
    msg.setSourceEntity(101U);
    msg.setDestination(56160U);
    msg.setDestinationEntity(35U);
    msg.timeout = 28702U;
    msg.lat = 0.3542529354313121;
    msg.lon = 0.09640683164475061;
    msg.z = 0.897523275553912;
    msg.z_units = 138U;
    msg.speed = 0.9104873707792184;
    msg.speed_units = 70U;
    msg.custom.assign("CYLCAAQDHOZUJZOELKXOBEDZPLCOFHULNMWJESPIUZVQSKHO");

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
    msg.setTimeStamp(0.9404207188341732);
    msg.setSource(40911U);
    msg.setSourceEntity(110U);
    msg.setDestination(8439U);
    msg.setDestinationEntity(4U);
    msg.timeout = 64215U;
    msg.lat = 0.6910180330014026;
    msg.lon = 0.8591227102012179;
    msg.z = 0.058827174183698316;
    msg.z_units = 161U;
    msg.speed = 0.14568615772544902;
    msg.speed_units = 238U;
    msg.custom.assign("JBUSSFZXGBUWQYFFJKAMMYSQQNQJPOPYOEGNTSQNNRHZRLCCBTINDGUNTDXULQZQRLEMEIFVKYQPPHAIJYFELNORPXFDMSMRUVVCDVUTBHIPSSLYHALKPVJGEVEZCXZILAHCEBTCHTIDDSVBYPASKNIOZUYAXXKGWWGRCJQVLQOVHRRCHLBOZZIWBAIKEJOWFKWMPXDFYDJMNWTJRWEXULGBOXFAWVOJ");

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
    msg.setTimeStamp(0.9695295048216906);
    msg.setSource(62594U);
    msg.setSourceEntity(21U);
    msg.setDestination(25397U);
    msg.setDestinationEntity(79U);
    msg.timeout = 51268U;
    msg.lat = 0.5645143634775982;
    msg.lon = 0.9317842746805594;
    msg.z = 0.11306771144691463;
    msg.z_units = 186U;
    msg.speed = 0.30477064512887964;
    msg.speed_units = 62U;
    msg.custom.assign("ZGLAKTGHRHVYETNPKDBZISWRISZWXYGJFLLGIUVCQCNCPJJDZVHQFKDWWDRMJOIEGQNLTCVOSSJWNYDHIJFIGHYDHFMRCCDARZAVULPOBCMYHXFNTWBJVVWZYNSXRLEMWITQNYEELWZJMRYTZMMXYFKXZABEFQJZUXQBXBIRXUKOFPVSPMCAMBCLPEFJANBWUKOPQTALHKOVISRHONQGFISKDGACOYSBUPADTPLNGSKHQ");

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
    msg.setTimeStamp(0.5662212260335262);
    msg.setSource(6834U);
    msg.setSourceEntity(23U);
    msg.setDestination(58186U);
    msg.setDestinationEntity(127U);
    msg.x = 0.2176684397013504;
    msg.y = 0.7295301595228326;
    msg.z = 0.737545581964517;
    msg.t = 0.9125933448847947;

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
    msg.setTimeStamp(0.22170083932210272);
    msg.setSource(49863U);
    msg.setSourceEntity(243U);
    msg.setDestination(43070U);
    msg.setDestinationEntity(115U);
    msg.x = 0.4939739193837669;
    msg.y = 0.12983663674429713;
    msg.z = 0.6184729806858541;
    msg.t = 0.015610786652560327;

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
    msg.setTimeStamp(0.7673678987289081);
    msg.setSource(14146U);
    msg.setSourceEntity(156U);
    msg.setDestination(64273U);
    msg.setDestinationEntity(172U);
    msg.x = 0.6562300694421128;
    msg.y = 0.8106997911865652;
    msg.z = 0.9351027145368432;
    msg.t = 0.6150640169822672;

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
    msg.setTimeStamp(0.7234358825881689);
    msg.setSource(33004U);
    msg.setSourceEntity(19U);
    msg.setDestination(43990U);
    msg.setDestinationEntity(59U);
    msg.timeout = 28893U;
    msg.name.assign("JPVSZDPCUKEGOFYAAWKERXZLKEHBBDUZBOIFDMVQXDSKMDTJULZICSBISCYEWOSAGYBWWPQ");
    msg.custom.assign("XGHDRWBFBCJSDIQWMNXBQJKKVSGIDSLUZNXPHAYOBAUUVTI");

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
    msg.setTimeStamp(0.14041788289641122);
    msg.setSource(61394U);
    msg.setSourceEntity(199U);
    msg.setDestination(58291U);
    msg.setDestinationEntity(119U);
    msg.timeout = 58482U;
    msg.name.assign("LJDZCGABMKHVIIEHDBAZCOODMUIMKTPZXSXANRQTEKBGKSRZIBDNKCDWDACXSLRHPGQOJUJOGIJDXOSQPWUHYCVYXTJDJBOQUNGEIFDLWWZARBWILQQCMCMFOLFRGSNMNEFLOTZHFUFSSJLMZXFMXHP");
    msg.custom.assign("QGKOSXRVZPSNHMGTRJZWNSSBESYHUAQBASBVVGPPMPVFRJGHPRVOQONLWVGIFLKMBURVEDIYWKRJXOJYZFQUKXEKVXBKBMGAQMJXPJMETMLSSFMBCVFCRINZOISWLCFCWPAPSNFIOE");

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
    msg.setTimeStamp(0.15403218932131857);
    msg.setSource(30234U);
    msg.setSourceEntity(120U);
    msg.setDestination(59228U);
    msg.setDestinationEntity(1U);
    msg.timeout = 46223U;
    msg.name.assign("CUTWPYXYKYROXZCNFOHYKLJTPRNICEJCWFGRICESKAMCADKLGMWYTBRTKGPMPVNVWHUHPAEFOTHXWUEERAPICSXQZZGLRQZBAADETUROVDOWZXMZVQYRWDYICQAQDJXFOUZMKOJGTCVVSEPBBNLMNQIFFSTGBVGVOULSYQNWAWIINXPBKHXJSZYLQOIF");
    msg.custom.assign("DXONLZJVIWIBPASIFEMYFHHJYRDYRVAXBWIUQWTJEMUICXABLZETSKUAOIAQUQVJNBTVGYNDAOHSMBDNKVWFGGJVJYLGLZJLAPWEKJUKCOBSIZNSJMJKPRREQKNFYQVUPF");

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
    msg.setTimeStamp(0.7630297686186077);
    msg.setSource(56737U);
    msg.setSourceEntity(9U);
    msg.setDestination(29712U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.7380170801163236;
    msg.lon = 0.9100066418832645;
    msg.z = 0.8409658962712654;
    msg.z_units = 252U;
    msg.speed = 0.3336497012210151;
    msg.speed_units = 128U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56750U;
    tmp_msg_0.off_x = 0.06872085773615066;
    tmp_msg_0.off_y = 0.9225964751751983;
    tmp_msg_0.off_z = 0.36935871799537257;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.7961635119274283;
    msg.custom.assign("QWILZHUTULOHXYZBCZDNYMVNWRRGDERAWJNUQJVBZTFSIFSWKSKWKLMPZQYZCPRNHXOMTDGILMECYGEUHDLPKLPIOUSQ");

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
    msg.setTimeStamp(0.9289992787357121);
    msg.setSource(221U);
    msg.setSourceEntity(43U);
    msg.setDestination(30713U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.829603341749007;
    msg.lon = 0.7359410660023402;
    msg.z = 0.042535281408503156;
    msg.z_units = 128U;
    msg.speed = 0.18900865654329035;
    msg.speed_units = 59U;
    msg.start_time = 0.010821732769293102;
    msg.custom.assign("YXIKYESEAVJPFQAJVFFIADORLZBNCJSAYOAEVLP");

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
    msg.setTimeStamp(0.19099314043172877);
    msg.setSource(58139U);
    msg.setSourceEntity(66U);
    msg.setDestination(51595U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.3846092947571972;
    msg.lon = 0.9693395223544019;
    msg.z = 0.21786391599766153;
    msg.z_units = 123U;
    msg.speed = 0.21054387150929843;
    msg.speed_units = 235U;
    msg.start_time = 0.6648852586094147;
    msg.custom.assign("ABMNXQEQAAWZDECNJGFYEIWKEIOSSEJGNMKPLEXSFWVFUQPRPAHCKTRQOAHQBOYHCRVZFZMVJBJZUGXQVBKSMWYELYPRNXOOHRYMYIGSFGVYJETZIICXMTJGFPLQPEDUBDDCWIGSTAUORWLRVHNAXQXNHJJIM");

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
    msg.setTimeStamp(0.7115720877488526);
    msg.setSource(51745U);
    msg.setSourceEntity(124U);
    msg.setDestination(4704U);
    msg.setDestinationEntity(14U);
    msg.vid = 44868U;
    msg.off_x = 0.7703239665838928;
    msg.off_y = 0.42349094200149984;
    msg.off_z = 0.4266058937431988;

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
    msg.setTimeStamp(0.6325379513458044);
    msg.setSource(26736U);
    msg.setSourceEntity(52U);
    msg.setDestination(10957U);
    msg.setDestinationEntity(209U);
    msg.vid = 39961U;
    msg.off_x = 0.5168043799975051;
    msg.off_y = 0.9295143107249719;
    msg.off_z = 0.4875773722477902;

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
    msg.setTimeStamp(0.1395231702153643);
    msg.setSource(31943U);
    msg.setSourceEntity(102U);
    msg.setDestination(46655U);
    msg.setDestinationEntity(136U);
    msg.vid = 16944U;
    msg.off_x = 0.894836816236139;
    msg.off_y = 0.6806848061113169;
    msg.off_z = 0.20516347521408795;

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
    msg.setTimeStamp(0.2418039845863078);
    msg.setSource(16248U);
    msg.setSourceEntity(140U);
    msg.setDestination(33618U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.7318059178515353);
    msg.setSource(52392U);
    msg.setSourceEntity(152U);
    msg.setDestination(50005U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.08288457957642748);
    msg.setSource(51379U);
    msg.setSourceEntity(9U);
    msg.setDestination(49788U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.75201597627902);
    msg.setSource(17500U);
    msg.setSourceEntity(80U);
    msg.setDestination(48451U);
    msg.setDestinationEntity(36U);
    msg.mid = 46200U;

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
    msg.setTimeStamp(0.009560982701365739);
    msg.setSource(18053U);
    msg.setSourceEntity(172U);
    msg.setDestination(8979U);
    msg.setDestinationEntity(2U);
    msg.mid = 57756U;

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
    msg.setTimeStamp(0.4369491971316395);
    msg.setSource(52028U);
    msg.setSourceEntity(57U);
    msg.setDestination(16326U);
    msg.setDestinationEntity(183U);
    msg.mid = 62773U;

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
    msg.setTimeStamp(0.9532480142468677);
    msg.setSource(23450U);
    msg.setSourceEntity(105U);
    msg.setDestination(13707U);
    msg.setDestinationEntity(83U);
    msg.state = 214U;
    msg.eta = 32485U;
    msg.info.assign("XKCPSNRAJLKTYZFSBSFCTMEVYRWQYJKJEJVAUCMGJCPHODMCPXSVOITIOYWMVOHFWLIPWXTIFXVSBHQKKFGCU");

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
    msg.setTimeStamp(0.5589136056551128);
    msg.setSource(23502U);
    msg.setSourceEntity(41U);
    msg.setDestination(57002U);
    msg.setDestinationEntity(88U);
    msg.state = 49U;
    msg.eta = 34928U;
    msg.info.assign("JTIPJNYEMPSCOFCAJYBJUIMFRXEKRYMSORCZXBPSZRRUWKAMDLSPPBETUHWIOIGBWSDAUAWGOLECGYFTVPRHIQZFDGDKSDNLA");

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
    msg.setTimeStamp(0.4889925796412481);
    msg.setSource(12220U);
    msg.setSourceEntity(95U);
    msg.setDestination(63416U);
    msg.setDestinationEntity(170U);
    msg.state = 60U;
    msg.eta = 59679U;
    msg.info.assign("ABMNGJFJOMMNQCHDVSQKBPTXGVLELXYXYDUFWKNERTBIGYMSOMKIRCVBVQUUNXGSIOPYWVFIJBOZRPDOPRSYHFIKIKDCBMYPQNSGUJZYIXZKBVAAFUTNHPLNUEHXNQJEKCEWXXVAHOYDCOXR");

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
    msg.setTimeStamp(0.6538958592488018);
    msg.setSource(49027U);
    msg.setSourceEntity(179U);
    msg.setDestination(16284U);
    msg.setDestinationEntity(35U);
    msg.system = 64472U;
    msg.duration = 46489U;
    msg.speed = 0.6428431552931826;
    msg.speed_units = 108U;
    msg.x = 0.05120394850096488;
    msg.y = 0.3328390050861971;
    msg.z = 0.5669511562303141;
    msg.z_units = 166U;

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
    msg.setTimeStamp(0.27754283233790644);
    msg.setSource(21855U);
    msg.setSourceEntity(224U);
    msg.setDestination(65404U);
    msg.setDestinationEntity(191U);
    msg.system = 53086U;
    msg.duration = 63371U;
    msg.speed = 0.06648529962148475;
    msg.speed_units = 118U;
    msg.x = 0.3551844349720009;
    msg.y = 0.15827613012820896;
    msg.z = 0.5712333333372032;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.5001158323112963);
    msg.setSource(34074U);
    msg.setSourceEntity(54U);
    msg.setDestination(20320U);
    msg.setDestinationEntity(106U);
    msg.system = 20812U;
    msg.duration = 2398U;
    msg.speed = 0.22932226433991076;
    msg.speed_units = 19U;
    msg.x = 0.4295502223797476;
    msg.y = 0.2685597950195172;
    msg.z = 0.7373407681236206;
    msg.z_units = 37U;

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
    msg.setTimeStamp(0.8602404672886841);
    msg.setSource(22289U);
    msg.setSourceEntity(165U);
    msg.setDestination(20133U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.9453893850648346;
    msg.lon = 0.5156765914983813;
    msg.speed = 0.7523862741061481;
    msg.speed_units = 18U;
    msg.duration = 43035U;
    msg.sys_a = 28366U;
    msg.sys_b = 16111U;
    msg.move_threshold = 0.08793512210672105;

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
    msg.setTimeStamp(0.27377476963845937);
    msg.setSource(65330U);
    msg.setSourceEntity(68U);
    msg.setDestination(7723U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.14973399877132554;
    msg.lon = 0.17237825401177598;
    msg.speed = 0.8594789354349065;
    msg.speed_units = 71U;
    msg.duration = 52339U;
    msg.sys_a = 55015U;
    msg.sys_b = 15611U;
    msg.move_threshold = 0.3367380129488068;

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
    msg.setTimeStamp(0.7492350831156316);
    msg.setSource(62465U);
    msg.setSourceEntity(23U);
    msg.setDestination(28074U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.3998850075512024;
    msg.lon = 0.9834007688071524;
    msg.speed = 0.4917416455973349;
    msg.speed_units = 233U;
    msg.duration = 52934U;
    msg.sys_a = 61823U;
    msg.sys_b = 62162U;
    msg.move_threshold = 0.5115362402923903;

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
    msg.setTimeStamp(0.7194396092980763);
    msg.setSource(49851U);
    msg.setSourceEntity(77U);
    msg.setDestination(1844U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.9591587135919711;
    msg.lon = 0.8734470029473719;
    msg.z = 0.7387099399935092;
    msg.z_units = 64U;
    msg.speed = 0.3204515639901001;
    msg.speed_units = 96U;
    msg.custom.assign("AIGBORMUQSWYMXDJENXFW");

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
    msg.setTimeStamp(0.3466419889973348);
    msg.setSource(16171U);
    msg.setSourceEntity(49U);
    msg.setDestination(56665U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.31842198146633915;
    msg.lon = 0.7388417697994981;
    msg.z = 0.6277901616360573;
    msg.z_units = 104U;
    msg.speed = 0.7994054073895043;
    msg.speed_units = 67U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.016352033199285687;
    tmp_msg_0.lon = 0.26328571542233636;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GMDOOHDXRGUTITJBPDAUJLZKWEOXFJZULUQQDWAIJOPITPDXVFCGLNQNNGCLZONBWRRDYIVJYSGZHZWBJCMPSWEMWJYQZYKBKOMJUBMEIAOLTACJGLEQSLBKCYIKYTHEFOSMHEUPVHPECQBEPHMOARZQNCPVVRPASHIEVCBNSFUIFJDKZSYVNA");

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
    msg.setTimeStamp(0.6236008221707696);
    msg.setSource(5207U);
    msg.setSourceEntity(248U);
    msg.setDestination(54862U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.24839535448066918;
    msg.lon = 0.8173835885790354;
    msg.z = 0.5110351191408166;
    msg.z_units = 52U;
    msg.speed = 0.5990883819887706;
    msg.speed_units = 242U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.928279534199499;
    tmp_msg_0.lon = 0.2605761913835245;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PTRQGBVPZLVEWNEKRIWPASGQYANZKQYTLJLBZIDMSYPBZNWZWXMUICPUIHWEXVRTFYIFWANRAFAFVXNYFNJWLDIEXZVHPOGCFECDFOZRKALSRLSEEGJBVOADMIUFGUSBSQOWCOQOXDHUUCEOIHTHYHXRODCMTXVKJHYVBVSUKSYXUKPVOLLDKEJJWMCDZOEKAGGIJAHBAMMKDRJIZHGKTFTQJPCRMGUQUYLS");

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
    msg.setTimeStamp(0.21523439339330208);
    msg.setSource(11167U);
    msg.setSourceEntity(15U);
    msg.setDestination(4045U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.91827366657034;
    msg.lon = 0.48346162555971994;

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
    msg.setTimeStamp(0.48082163945409084);
    msg.setSource(49534U);
    msg.setSourceEntity(51U);
    msg.setDestination(60046U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.032623969618236326;
    msg.lon = 0.9729080301638312;

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
    msg.setTimeStamp(0.06712127233608067);
    msg.setSource(9649U);
    msg.setSourceEntity(194U);
    msg.setDestination(6392U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.14679394799063705;
    msg.lon = 0.2598769830878801;

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
    msg.setTimeStamp(0.39526665297004104);
    msg.setSource(5792U);
    msg.setSourceEntity(133U);
    msg.setDestination(58912U);
    msg.setDestinationEntity(133U);
    msg.timeout = 57855U;
    msg.lat = 0.6496300776924926;
    msg.lon = 0.43235267638282115;
    msg.z = 0.6871043956294011;
    msg.z_units = 171U;
    msg.pitch = 0.5151782550054156;
    msg.amplitude = 0.7258253092341777;
    msg.duration = 9847U;
    msg.speed = 0.5630198896532908;
    msg.speed_units = 189U;
    msg.radius = 0.989061824102972;
    msg.direction = 233U;
    msg.custom.assign("JEVTRAILEYHWXKZBTQTLMDKJJMQXPVDSFWPHXHXWKLISATIZXBMEFRXWIOMNWLOATQZPBYYSQKGUUIPLALOSDJHPJNMGHNVCQGCRSYKFFUFPURONFQLCMPQOCYOETGKAUNWRIHLWMNZAYXOCEYEMWVRSBJNGYBMTRLKOSEJDREZEYVFHHDXNDANNKCAUFVSJTRIYXIPIWZDQSUAUOCTABFJCPZ");

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
    msg.setTimeStamp(0.661991934270369);
    msg.setSource(64954U);
    msg.setSourceEntity(147U);
    msg.setDestination(26466U);
    msg.setDestinationEntity(16U);
    msg.timeout = 14978U;
    msg.lat = 0.032576483113638144;
    msg.lon = 0.7798662389977532;
    msg.z = 0.8376680133882165;
    msg.z_units = 97U;
    msg.pitch = 0.6334989889021984;
    msg.amplitude = 0.5109300876418137;
    msg.duration = 24105U;
    msg.speed = 0.5915760051680503;
    msg.speed_units = 71U;
    msg.radius = 0.5601411216915937;
    msg.direction = 147U;
    msg.custom.assign("HMZYYWYNWIZGJCBYLUXHBXQBKYTKOGUEVKYXKHSUNGIANVOPBKIVSMILJWUUVSHDNMHEHXZVRPQAMCTRZNOLCSWZVPCEETACMSCNMREGJAVHEXAPEUKWEBSQMIBLTSRYDPNLTKZNGLZJQFWJCUFODAXGVQKRIUIDFXLEYHUTIURPFRJODDIFJVQDYCPONQVPIOBJQGYWFPHTXZGPALDWQMGCFSAGNJKFTRSTOBFOXMCAZF");

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
    msg.setTimeStamp(0.8587288266063753);
    msg.setSource(58638U);
    msg.setSourceEntity(125U);
    msg.setDestination(31844U);
    msg.setDestinationEntity(249U);
    msg.timeout = 45960U;
    msg.lat = 0.19718369237497468;
    msg.lon = 0.839912270289326;
    msg.z = 0.009592821687787856;
    msg.z_units = 114U;
    msg.pitch = 0.4699957623503077;
    msg.amplitude = 0.9421010291080371;
    msg.duration = 15031U;
    msg.speed = 0.9528154321893217;
    msg.speed_units = 163U;
    msg.radius = 0.8931446666024692;
    msg.direction = 90U;
    msg.custom.assign("PPSQLPBJJBERXYSMWHTZAKFSHVUZVSPLIADJQZLDFAMCIPKODTNGIUTOKEMNIPCGNMXQYSKIUOGKHFVORBPNMU");

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
    msg.setTimeStamp(0.35620016893838413);
    msg.setSource(50057U);
    msg.setSourceEntity(210U);
    msg.setDestination(59322U);
    msg.setDestinationEntity(204U);
    msg.formation_name.assign("VOPMVSECBNNYUVFBJYFXFJLRPTTZXQNVHDAAPHSUYFYOQGOTSSQDJMVBSHKXJSLDRLKZSNAUULMXPIMWNWWCUTC");
    msg.reference_frame = 148U;
    msg.custom.assign("KUSCUNXYGOYJFMPILHDCSGXVMEVUMMCGEYWSKPHZZLDRQBIFHAUFJKAZNPDSVAPBYIHECRYIRSZBKHRIPQKDBETKEDMGFLONSWQTPJRRMVIXNTTNGLXPRNPNVCJVB");

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
    msg.setTimeStamp(0.4179479571980734);
    msg.setSource(27392U);
    msg.setSourceEntity(237U);
    msg.setDestination(51365U);
    msg.setDestinationEntity(1U);
    msg.formation_name.assign("TEUJRFKHFGWWOVDAZTSWNDVEFSDAKNCEXKOGMOCMTSFDMYIKVFYZPXCKVIXSVDOHTLZLRQANNLDIJOCUGAVLMOLQUGUASMIKTXRZESOYZXAKQAOEJXTFPHHWPPLWDPQIHJTJYNGFIUKUXZXCJVQNGYLDPVQQONSIJZVQLEBBDBBMGHBKAROYYBH");
    msg.reference_frame = 97U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 23897U;
    tmp_msg_0.off_x = 0.7624968186243113;
    tmp_msg_0.off_y = 0.6035153788665634;
    tmp_msg_0.off_z = 0.7808744218586955;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NUHTRSIJUULTSZGZMCLKVZFEWGGSBYGAAJQVETVASWAJLKLWKPIVTWRXQXGXBNFLPPXUCHKRZUQCAMYYBABUEKODPWHBTKVCIIJMXLYFZDOUTGLVZISDPDRGOHQQAEFKJKVFNNFLLMWPQTIYZQENRPEDPSCBHYHB");

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
    msg.setTimeStamp(0.4198973091990068);
    msg.setSource(51965U);
    msg.setSourceEntity(166U);
    msg.setDestination(30367U);
    msg.setDestinationEntity(230U);
    msg.formation_name.assign("DWQVNKYRUSOZQZMKXORWBRCIHCQKCAIRNPBOVVBJGJMFVDSTCNZUBFSYGZTCVHPRDAOAYYNLVTXZZQEUWORAETMGDHTDHFBLUGXKKXCKIARPBMMXQLWHRMFPCLFPCNVGMOELYLAWSBZIGJSDDQSHXAORQFQTICGL");
    msg.reference_frame = 167U;
    msg.custom.assign("MEAJGJMFWKASMSAANGHKXEBPSSZUVIURLVTQZPTRUGAQYPYDEFKSZVSQCMEPLWXIENLSWJOBMPADVEJZBHLVGMFGGFUKDHZDYHCOPEIRYWBXYEIXNFMCZCWXBKKLONJTANGUQTNZNDVGOBKHVUOWKIRRQBCPXHGTMWOCJY");

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
    msg.setTimeStamp(0.6957103469187026);
    msg.setSource(18503U);
    msg.setSourceEntity(192U);
    msg.setDestination(50559U);
    msg.setDestinationEntity(73U);
    msg.group_name.assign("OLBEKGXETDYCVZKBUPDOJINEZXQUQHRFUXZSVGKUYEMTQNMHOCTBECWGLZCDWZUQPUPTFVOHYYGTNOMIQRVCFPA");
    msg.formation_name.assign("TMFXNPMXULMFECDIPUKUSFCYGGODRZQLIEQBJLGBQGXHNXYTHDJGIOXEHGRHTUVLRSIANBNOKTCWSKOVVZMLWSDREESZYVXKKTKSNLSHVPXVIBFNGVNPDFYRVQYYTBDIYZPBECIATUKYSMMWFHNURNWYZFLRAAGQZJPWGJHZKBAIFLMURQMORBXKOSTPFFQJETWJVYWJTMACJCUCVAKIEDCZNJWODSQOQGMUDHOIC");
    msg.plan_id.assign("ZZMLCWSDRNSHWBMDGXARNOSGHAKOCJWGKNVKACEFBFXEVBBDRJYNMGYXTASXLHBLGUUUNZDVXMNFZMYYISODKWJRGZTHVGRELYHUAPWEYTVGLHIKLRCTDATQBHASUEWWQKAMJJQEXWZWUSFCXCCOFIDQJYOEOFOQJTITPLPIVSAHPNRJKBDINZRLFPXV");
    msg.description.assign("TRGAEEEPUWESAREBFFIKBRWLNPSNRKTZQGLBTNPKMLAFTZLXIHDMARWOONYANOYCYKPUGLTWCPLJURKXUXPVSIKZDCEHUFDHVEOYNWAFUVYQRIDMRIDHPGSNFCBKBDDGYJGOFPQ");
    msg.leader_speed = 0.889237957336829;
    msg.leader_bank_lim = 0.968045071668991;
    msg.pos_sim_err_lim = 0.024593662638534353;
    msg.pos_sim_err_wrn = 0.319500204064576;
    msg.pos_sim_err_timeout = 54188U;
    msg.converg_max = 0.555895309418424;
    msg.converg_timeout = 53110U;
    msg.comms_timeout = 58270U;
    msg.turb_lim = 0.30787952639099525;
    msg.custom.assign("JYCBUVJVOBVMXNYCRRSXMHDSPUWCOHGETYTVXKJHGIWRC");

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
    msg.setTimeStamp(0.7730946211110635);
    msg.setSource(14897U);
    msg.setSourceEntity(130U);
    msg.setDestination(25608U);
    msg.setDestinationEntity(46U);
    msg.group_name.assign("DCZMMYGVWBILIJTJEKDWMCGRAOEJIKXOTWHVHWQAWADRGAXUVZFFGHWYTMHFVWCWJPAFMIHKDEKARMPZFYHLTOTPGXSBNSQGQMEXSWGLRSKXYTDFUVJYDQBRNREDSJQQQBSLIBGXGNVUPOIEXOAQZKANXLPVEACTTQYSBZNFMBSRNQCGJVNHSLFBNJUFUYVXCHLUOEURJZ");
    msg.formation_name.assign("VJXXIIJAQDLFTIBLZFNVXQDLSXSJQLHYFZTGIDYEJZHOVUDSIRQTBLHUKCCNNNWPCIEBTBLESVBHJAAUGYKDQKRXSWPQBFLJSHFPIKZAIWLWBGVBTZWLCMQYOONMEDUKRMFMVYNRCRIRYCOUGWGOPQPJOGNEHMGCYACNSUDFZTVYAGHPRCTXAMEKQYYEVZKWILAVZHAJHWOBANE");
    msg.plan_id.assign("OONQZAJULIREDQCXUWNADYSKYXEQUX");
    msg.description.assign("ESCFTQOCQWWGUCIMQYTOAGOVUBDUPFWUWKMYIKSIRASALKNXTRIEADTNZCNNIXRHUFCBZTKDTFMNHVYAGFJFEKPYNPXEFJLXBUUZNQZPTLQRXOZMGRIRZADDJJCKBNBERZJZMOZVBETXOMVLNUCMPWKVYVEV");
    msg.leader_speed = 0.006912215562905777;
    msg.leader_bank_lim = 0.47905547212460864;
    msg.pos_sim_err_lim = 0.039829516083730865;
    msg.pos_sim_err_wrn = 0.39312467380314775;
    msg.pos_sim_err_timeout = 27952U;
    msg.converg_max = 0.7921772601435967;
    msg.converg_timeout = 55178U;
    msg.comms_timeout = 62332U;
    msg.turb_lim = 0.30670836946368674;
    msg.custom.assign("VCCWOMSKEONGHXUUHIKKGDQDMEXAAICFTGTZDLXEKVQVZJJQOOBB");

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
    msg.setTimeStamp(0.8757876482099493);
    msg.setSource(661U);
    msg.setSourceEntity(65U);
    msg.setDestination(27257U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("OQXCIVSKGCEDWITNRGMGDHTTZCLFBXGJSPXWIWAQVCMXJNMQONAJNYXAMSWYKAMPVLFLBJTXAKIWHEHJLRORFSBWADIPXLRDUBFJLQUYYAZYNBEZUXEHTKEDQVGKYICOCSYQBKAEJBIDCETYCRVUWIGXMTCJTGQULSWZHFOPHHCRKRKNPPVGFPFRRXIYMQFODDQTBULUZYVHWEJHAUEZDZFBLUZNSVSPMSKPFZGBOMMVNSEZUOLRNIJDGQTNH");
    msg.formation_name.assign("BKWZPHEYNJWQZOBDPQXNJSISLNUBCOFMTMEHNLSKKOJADHVENBYTBZRYFILBMBJTDRRAHVZZZCFBVXFGQTWGABOZQKXSCMJVAKXIIFNILITJOLJVSYRNRAN");
    msg.plan_id.assign("XFDJADQNZDNLKILWIZVHPTHGIKHEANYXKZZDVEGRFNSQQNJUQQMNWEPISFFOYDGKTCOQVBLFXGEZKMQRDTPDWAHXJOFRSFWIZJKYTYAGYARWBVFKNTGCLEJFKNOAURAKYPLCVTCDSQJLJQQISAUBZYMROCBDUNHCTZYWBVBFHMRTLBTGOJUUCGXPE");
    msg.description.assign("MOWENWHWDHRR");
    msg.leader_speed = 0.11406989359186515;
    msg.leader_bank_lim = 0.9914167875129679;
    msg.pos_sim_err_lim = 0.3069132206354793;
    msg.pos_sim_err_wrn = 0.792612583060319;
    msg.pos_sim_err_timeout = 36834U;
    msg.converg_max = 0.6890103425640739;
    msg.converg_timeout = 55393U;
    msg.comms_timeout = 26447U;
    msg.turb_lim = 0.8302820986204065;
    msg.custom.assign("GVFFEBXAEOBWPLMHNZNZJXSZBCWUAXOHZBHTFFQFQEBVNOXHHVQWUQAIBRXGKEPPSFDRORGMQYIZGBSDODSSWMOWMJBQLOMAQTIGLTCKYULWWPEPBMGUTJTRSWPCVKFZPXHTGDMEKYUYYMSIJAICJKVODREYFVOSVPMWNEXLKGLUYVKVQZKXAMICNJAEILNYIHAUSRCGTXLALQ");

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
    msg.setTimeStamp(0.7256183893752014);
    msg.setSource(45897U);
    msg.setSourceEntity(160U);
    msg.setDestination(7822U);
    msg.setDestinationEntity(186U);
    msg.control_src = 37492U;
    msg.control_ent = 132U;
    msg.timeout = 0.847267406784581;
    msg.loiter_radius = 0.07947899524032076;
    msg.altitude_interval = 0.27394446863408994;

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
    msg.setTimeStamp(0.8126930737208989);
    msg.setSource(61579U);
    msg.setSourceEntity(76U);
    msg.setDestination(49830U);
    msg.setDestinationEntity(27U);
    msg.control_src = 32672U;
    msg.control_ent = 164U;
    msg.timeout = 0.39928552242983373;
    msg.loiter_radius = 0.32373472940352155;
    msg.altitude_interval = 0.3190613355275991;

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
    msg.setTimeStamp(0.5138883412771137);
    msg.setSource(11570U);
    msg.setSourceEntity(162U);
    msg.setDestination(58230U);
    msg.setDestinationEntity(134U);
    msg.control_src = 24848U;
    msg.control_ent = 70U;
    msg.timeout = 0.14123057439411602;
    msg.loiter_radius = 0.80971857002197;
    msg.altitude_interval = 0.14164856274491233;

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
    msg.setTimeStamp(0.7045615740775166);
    msg.setSource(54971U);
    msg.setSourceEntity(187U);
    msg.setDestination(49386U);
    msg.setDestinationEntity(77U);
    msg.flags = 42U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5889804577107066;
    tmp_msg_0.speed_units = 124U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2591359176713057;
    tmp_msg_1.z_units = 29U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9889870284664322;
    msg.lon = 0.5338108531305469;
    msg.radius = 0.080042609615387;

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
    msg.setTimeStamp(0.5656900969915122);
    msg.setSource(32961U);
    msg.setSourceEntity(108U);
    msg.setDestination(33939U);
    msg.setDestinationEntity(154U);
    msg.flags = 131U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8372476265730376;
    tmp_msg_0.speed_units = 211U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.13108188256170228;
    tmp_msg_1.z_units = 208U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.23052305820506713;
    msg.lon = 0.6108250992962251;
    msg.radius = 0.5464534245306286;

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
    msg.setTimeStamp(0.6710492916212684);
    msg.setSource(29211U);
    msg.setSourceEntity(138U);
    msg.setDestination(30338U);
    msg.setDestinationEntity(91U);
    msg.flags = 11U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2089403879627698;
    tmp_msg_0.speed_units = 240U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.1967870573191961;
    tmp_msg_1.z_units = 143U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6675596430267625;
    msg.lon = 0.7417966786427076;
    msg.radius = 0.37905207447584366;

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
    msg.setTimeStamp(0.9626167192178825);
    msg.setSource(2254U);
    msg.setSourceEntity(138U);
    msg.setDestination(37310U);
    msg.setDestinationEntity(130U);
    msg.control_src = 30218U;
    msg.control_ent = 253U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 209U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5741680300416511;
    tmp_tmp_msg_0_0.speed_units = 137U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7344741421798601;
    tmp_tmp_msg_0_1.z_units = 130U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8430351681572571;
    tmp_msg_0.lon = 0.06332954758553866;
    tmp_msg_0.radius = 0.7173012755817579;
    msg.reference.set(tmp_msg_0);
    msg.state = 138U;
    msg.proximity = 216U;

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
    msg.setTimeStamp(0.23151426316619717);
    msg.setSource(9153U);
    msg.setSourceEntity(150U);
    msg.setDestination(31920U);
    msg.setDestinationEntity(189U);
    msg.control_src = 40788U;
    msg.control_ent = 12U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 165U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.573419498221631;
    tmp_tmp_msg_0_0.speed_units = 186U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.093378207372949;
    tmp_tmp_msg_0_1.z_units = 59U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.26550112389382463;
    tmp_msg_0.lon = 0.8195970676343596;
    tmp_msg_0.radius = 0.7984451360295916;
    msg.reference.set(tmp_msg_0);
    msg.state = 236U;
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
    msg.setTimeStamp(0.5119469946292788);
    msg.setSource(83U);
    msg.setSourceEntity(54U);
    msg.setDestination(5184U);
    msg.setDestinationEntity(172U);
    msg.control_src = 27773U;
    msg.control_ent = 25U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 211U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.012410050026458008;
    tmp_tmp_msg_0_0.speed_units = 71U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.08220115554797447;
    tmp_tmp_msg_0_1.z_units = 237U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.73127555985716;
    tmp_msg_0.lon = 0.14037556009494467;
    tmp_msg_0.radius = 0.26653448226680365;
    msg.reference.set(tmp_msg_0);
    msg.state = 7U;
    msg.proximity = 54U;

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
    msg.setTimeStamp(0.2606678615650585);
    msg.setSource(42776U);
    msg.setSourceEntity(113U);
    msg.setDestination(26737U);
    msg.setDestinationEntity(14U);
    msg.op_mode = 61U;
    msg.error_count = 140U;
    msg.error_ents.assign("ISNNIOXEPFCGSUQITRCLDSXRDEUZAVZEPGWHKYZYXFZMUDPMNXXTDBVUQZAKCSMIWWOCXIJVABRNOYLGTVEIXBBCAFEYWKUAZHIHDADWMJBZFTORQHDVGBAYQWQAPFGHNVOULZEHSVLCJFJVADKHGYYZCTBTGZTPIWBKJCCWKPUMWQYUQJ");
    msg.maneuver_type = 58306U;
    msg.maneuver_stime = 0.5439720603083876;
    msg.maneuver_eta = 55119U;
    msg.control_loops = 4064970363U;
    msg.flags = 23U;
    msg.last_error.assign("EGBFVIRVCQPXSRQIVOLSHKRRIVICTNMWRQGFXBQRWCIAOYXXEOLTOZZKPWZABETPKDJSYCEKJJAGTEAYRNKEAZNXUNNIVGJDCJIMAHGDQHLUTMLYTAADMMUTFAMLRFTWVDBGCBSOAJOKCLUIJSOZXYGTIDFDDFZWPYHPBSMUHWQVNMWSBWHJOCZ");
    msg.last_error_time = 0.45351322782895664;

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
    msg.setTimeStamp(0.3291611498520759);
    msg.setSource(56642U);
    msg.setSourceEntity(120U);
    msg.setDestination(17704U);
    msg.setDestinationEntity(160U);
    msg.op_mode = 84U;
    msg.error_count = 216U;
    msg.error_ents.assign("IGXNNTREGKOFYPMYGDLDWXZIKZOPKDXOENIJGKFDQSUPTJCOMKJAUZRTJVNOHRRJMLAZACFRULPCEFFGIOMHPGQRVHQQAIYBSKCVXTVBHNYVAPXHNSCLDWCBCFTALBUGMBIYHWIJOHOZEBSKKWMYYEMEBJCKWIHUQPTYLTOUXRV");
    msg.maneuver_type = 48239U;
    msg.maneuver_stime = 0.9368039159697177;
    msg.maneuver_eta = 36423U;
    msg.control_loops = 3102035129U;
    msg.flags = 222U;
    msg.last_error.assign("FZGUQMYWXIDJXFSPCFZWTHYCOFRTJHPDQQVVZAWGBKKALVYVZITMUKNGXBFJITUUDANHJQJCDGXYZVVLGTJZNIQNGMESFPWTAVFYEXVQEKSRXWUNOYYSDML");
    msg.last_error_time = 0.5230873926866884;

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
    msg.setTimeStamp(0.4311822379498925);
    msg.setSource(41474U);
    msg.setSourceEntity(174U);
    msg.setDestination(62563U);
    msg.setDestinationEntity(253U);
    msg.op_mode = 249U;
    msg.error_count = 98U;
    msg.error_ents.assign("QNMYCOKWTFCXTKRLVBNSWBFFNNOERDBZVIPNFFDJDLCHOALVAVMFHTIZNSDQCDMIHQYJUWHPXUBDSIKOCDEBHYGIHKPQOUYVFWCAEAJRIGGMTPYSGULQDPLMNFPPG");
    msg.maneuver_type = 40670U;
    msg.maneuver_stime = 0.7275367641264298;
    msg.maneuver_eta = 58456U;
    msg.control_loops = 3070582749U;
    msg.flags = 34U;
    msg.last_error.assign("NHFZRWHQGFEBZVOGDCNMEWAUTYTCYEGPPINAWYEDZEZQQUMGQPSSIVXRNCYAKWRLIISKPZSOSMJJNLHPVNWXCUJYTBKCHAHETBOHBBYFTFDMTMBJLQNXHKTFSQMFUGDLAOODRHYJJVZYGGUEXGMEQIEFAIUXWCXPQKIEPALLVSTOVKGDRWRXBVNAKKRDDXICNOZHSJWFZUPKSSCVO");
    msg.last_error_time = 0.20212361910330345;

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
    msg.setTimeStamp(0.572290492768024);
    msg.setSource(30184U);
    msg.setSourceEntity(95U);
    msg.setDestination(32607U);
    msg.setDestinationEntity(217U);
    msg.type = 123U;
    msg.request_id = 44280U;
    msg.command = 67U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 32394U;
    tmp_msg_0.control_ent = 165U;
    tmp_msg_0.timeout = 0.01735179865135361;
    tmp_msg_0.loiter_radius = 0.4513544619210421;
    tmp_msg_0.altitude_interval = 0.40311008507183066;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 28208U;
    msg.info.assign("AWMTCTXJMODNUJKIHXESRGUIBHPSWFHTPYAMPSOVIEBHBPUQHHVZCNDNLXXNMOKNXBAVIWHXLZFGXUZAPLIYYCXGFRGTOVWDVZBTMZVWZEJGMJNKMMVQ");

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
    msg.setTimeStamp(0.81175625815864);
    msg.setSource(19474U);
    msg.setSourceEntity(15U);
    msg.setDestination(4662U);
    msg.setDestinationEntity(151U);
    msg.type = 197U;
    msg.request_id = 1727U;
    msg.command = 176U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 34520U;
    tmp_msg_0.lat = 0.19603646937501873;
    tmp_msg_0.lon = 0.35939328697039363;
    tmp_msg_0.z = 0.7726336150603533;
    tmp_msg_0.z_units = 25U;
    tmp_msg_0.speed = 0.18762815255273158;
    tmp_msg_0.speed_units = 178U;
    tmp_msg_0.roll = 0.3195177078017427;
    tmp_msg_0.pitch = 0.5878675641385583;
    tmp_msg_0.yaw = 0.7872645601848716;
    tmp_msg_0.custom.assign("BXEXVFHIVPVABTAYFTHJWZRNDLMCHMXTLOBOUTXKDLTD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33846U;
    msg.info.assign("OOBLSUARUIGOEAMTXPWZGOSVLBNTRUHCATJVCILBTYKFDPVUTHYWLRASUKCBHNQIOIHWDEWDPUVOMYRNHBCBQFRXFITRYYICJQMZGMZPGISHUOAOCQLOMKLANTXNDWVMJLAQZLEYEHKMEDKXKPAQYYJS");

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
    msg.setTimeStamp(0.5244504220511785);
    msg.setSource(64418U);
    msg.setSourceEntity(153U);
    msg.setDestination(45852U);
    msg.setDestinationEntity(31U);
    msg.type = 173U;
    msg.request_id = 39643U;
    msg.command = 78U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("UNUJHZNTYLVDKNAYGIRTSGNOBDOAPXSYWZAYEVRBAIWLAREQRGBWGCZYDQNDQQVSWYWLHCDVSQLFLZZRWXYEPXXTEMMSBCFAJWKBIPBLUPPGHSENHZXMUPAIDTYSHVVMIIXCCOCZHVLJBTFHMDZNITHIGOJFFFOUWJW");
    tmp_msg_0.formation_name.assign("SNIRQEDIEQBKSWGWRTJATDLOJXCDKANJPPGEOYVGXSFDBFSKDDTOFUAZHHUSIZOWJHPHHOAFCWOGCYTFYKBJBILMRXWLBYIVQACNIUYZGOYRGLKODILSQXCVYQHUQIVUVILMPBGVYUPMBTFECMGYDOWNQI");
    tmp_msg_0.plan_id.assign("HMOFSHGLEFBQCYSKKMSIGWJRTNUAMWQAFXFLFRXVRMZOJZAVIOEGZZHSZDZNYSBKCUJVXJYLGPNNQCIHESRIUSBDEUTHAWRYMMCGFSMDKXPNDUWLVYUNDBEQJKAJLNQQLZTGETPWVMCWFOKOVXOOYBXKFEYPLWJXITAIOOQMVAS");
    tmp_msg_0.description.assign("EPMQAEUXTMDXSYUKXQBDGZQBGOROBMTPQPUWDYHUQNSIJOZFCCTFBLEEVJQRWZWIWOOCJYGQBUQNLJOIJDHYLENBFLBTJLSSQSLBYXKZTDBWFIZVIUFAZKCR");
    tmp_msg_0.leader_speed = 0.32006470097698536;
    tmp_msg_0.leader_bank_lim = 0.5389677998462764;
    tmp_msg_0.pos_sim_err_lim = 0.3492223083518675;
    tmp_msg_0.pos_sim_err_wrn = 0.02767577204431948;
    tmp_msg_0.pos_sim_err_timeout = 48963U;
    tmp_msg_0.converg_max = 0.001408676518725338;
    tmp_msg_0.converg_timeout = 38320U;
    tmp_msg_0.comms_timeout = 16975U;
    tmp_msg_0.turb_lim = 0.17805906123232473;
    tmp_msg_0.custom.assign("BOZFOMMUXXCQOIMZXPJUCTXZDGXBACUNWHNINAGYZETYRYJTQAQUHKNQLAPGXPWKKNGRDFGXVFMJKRLOQLSLYXMZZOYWOILFEERHFSCTUDTYWIYSHXYVGGBJIWNKEHLFCAJPDFLQUJWKOBKPNRSSCHVUBEFACHMETGNSAPZMXZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59613U;
    msg.info.assign("SCVEHFBFUOAMDARKWIGWOAXBTFDHWRZLMLDRBZGISEYRCJBZUXJEYUHJJCVMPMCJOBABVIRXRDZTXNLVKGBKQQXSEDPNXWNUYQURKMTQZVE");

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
    msg.setTimeStamp(0.6598268092547371);
    msg.setSource(5202U);
    msg.setSourceEntity(157U);
    msg.setDestination(30241U);
    msg.setDestinationEntity(3U);
    msg.command = 177U;
    msg.entities.assign("OAKDMQXWFNECLPAEFJJGVBSTZCLJFKZHAGBPTNIVRPINQXDLORCHHNPLHSVMOYHVOBVJYUXBTNADOLDELAH");

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
    msg.setTimeStamp(0.9616448439263463);
    msg.setSource(50577U);
    msg.setSourceEntity(39U);
    msg.setDestination(55091U);
    msg.setDestinationEntity(161U);
    msg.command = 215U;
    msg.entities.assign("RQMHHDLBKSXJDXGPRZNFQNIMNPYZJDUMFUOLGRCHLRGSUKHCSCWQZKOFWVEICQYCXECLDWILSQBYOJIOHRNNWUKCTHQEHNPSAZGRMXZKTMGZINOYSUANBCIMSNUHCYOKWTBRJRABQKDJTUAZZBJEFMFFXVKMIVJSZVDEPTWFLKGHVLCTFJEBKGBGPUAFBDVWPAQTFIWJJVPOSADEGXYITXBVLDPEAWMINDAUVXQOOMGTSRXYOXEQAYUYPERYV");

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
    msg.setTimeStamp(0.5244612112038685);
    msg.setSource(47745U);
    msg.setSourceEntity(30U);
    msg.setDestination(25253U);
    msg.setDestinationEntity(83U);
    msg.command = 139U;
    msg.entities.assign("PRTPPJYBDXHCCLGUQLBGTXHAZCNALWQRSDRLNKVGVCERENHJMBCUNZHVXFYWGJKNMBHYSPFDWKFEDAZQBIZMEYFTTFMATYUBMXGTQWOAOAVTLOMSGEZLANLJSEBIUKHPSKVWQRYYANKISTDVLIBWKZJQJXXXVJFRKPSIFOQJDTZRYUVXUNQS");

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
    msg.setTimeStamp(0.5138664987573162);
    msg.setSource(36368U);
    msg.setSourceEntity(159U);
    msg.setDestination(20587U);
    msg.setDestinationEntity(92U);
    msg.mcount = 133U;
    msg.mnames.assign("OPTWJULSZRCZYRPMSZZZUELGRDLSLKQWFJNVWAVTLUJTKIEDORFAHP");
    msg.ecount = 183U;
    msg.enames.assign("PTTSFKRYBPIUFPJFOMWDFEJGNXXZEAQZBBTNXYDSGDVHDNAKVSHUAWWYBMUPOLOLJOMMBTXDLGIGOYUYVRMVHSRZQDDRSGHTJOGYPIIQRICRFRVGKABYBLECKWKPTCCEIESBNLVNOIVUTRQXDJPKHCAHJIZTUGUDUQGASQLYTQHUSAEVNLCCWJWVBMLOEOXFJIAGODMSNZBZCZHJMI");
    msg.ccount = 206U;
    msg.cnames.assign("KVYELRRZZLTWQDHKYAJLBEGWJDLMJDNXZZCCDSJPZTUISP");
    msg.last_error.assign("TXFYUWBGDHSGZFUUIAVIQEBPOOLURYBWYAOAROZHNZCDRQMWZWQZREDRYTZEWVXCQ");
    msg.last_error_time = 0.5940054040642535;

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
    msg.setTimeStamp(0.6239217309293827);
    msg.setSource(40743U);
    msg.setSourceEntity(71U);
    msg.setDestination(3155U);
    msg.setDestinationEntity(108U);
    msg.mcount = 202U;
    msg.mnames.assign("PVWBXMSIOVBIJZZCBURJMKGTVXXNZOWXRHMD");
    msg.ecount = 173U;
    msg.enames.assign("OTPJJSGRGEQCQTDMVCQDTNNHXPILXQFUVOQMJKXKPQWNRFZVAGECZTWAAADCYUJJEOISAAMHUMPKYWHKNBSETKIFIUYUZYZWWBFBORVRFUVGFHXZGMOXKQXPIRNYMLBIWLHYEXDZQFWTNNCTVSMKHDEVZRVLYGCCTEESZHXVMCFMKASORWSBPYGGOBKIVLNIDYTDXUZYBQBCHUTRSLIKRRGJDPSPAUAOJENLWLCNIJFPBOJHHLBAOSGWPL");
    msg.ccount = 126U;
    msg.cnames.assign("UCGZWZQAXVHJEZDTRTETBPCTARGGGMTYFRRWVNCQBFQHYCEHKFMNNWRSCWZMJEYLJSSDHOATXXOLSSIYYVUKYZOPCKCUSKMKKJPAUONYAIYVBIUWQFIFPHWAZEEFNTVRGHBOBIGMTAQOYGHKNL");
    msg.last_error.assign("NAVFFNSVVFZYZCZBULVPHUFGIWMFCUEQZEXDWANOCJHKQUGPITHIWBWDRTYROYCONLSNGVKNLIEPDSKYSFSFEHWCDJNQQSKTMBUFGYTBRTHEPMWGAPLDYSZOCLSYHATMNKJDA");
    msg.last_error_time = 0.2302394078853064;

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
    msg.setTimeStamp(0.8430563685215098);
    msg.setSource(25739U);
    msg.setSourceEntity(126U);
    msg.setDestination(46447U);
    msg.setDestinationEntity(59U);
    msg.mcount = 135U;
    msg.mnames.assign("QIKJBPLJXRVVPMWDMJCRGDOQG");
    msg.ecount = 118U;
    msg.enames.assign("EFCHZCCUNHEWCDWAKANQPAMNTMIOSWVLJUEPATQKRDZWUQQPBOMRDAVIBKVNSSRWYXPTIUGQSHBOEIOUTVRHGCTFDFGOKJJWPYOKRUIUXZOYGEAJCVLZCNPGALUYUOHTCAFHQKSLYLPDZNIVEZFJMFOICXPRZTJKMXZMJKPRYWIHDNBWRFL");
    msg.ccount = 107U;
    msg.cnames.assign("BXTZJZMDUQWDTYLDGUIZQUNLENETZDVXJNPDBXVWOJPIOACBGRIVPWIHQNZFUIHVTAISONRHSMEOBTUUPXNLYYCNCMWGRWJFEGNSHSFCRKMVVSFQOWHMRQEF");
    msg.last_error.assign("GQNYINSGDGPSFGBUECGBIYGRXMWCEEHBXMNZHTWSRZCMUSKTIJBKIOVELHWKTEZOLIJGVBQ");
    msg.last_error_time = 0.7286074239487554;

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
    msg.setTimeStamp(0.3392759461743734);
    msg.setSource(59114U);
    msg.setSourceEntity(217U);
    msg.setDestination(55614U);
    msg.setDestinationEntity(185U);
    msg.mask = 50U;
    msg.max_depth = 0.9221619438649205;
    msg.min_altitude = 0.6163770256737868;
    msg.max_altitude = 0.771865179855205;
    msg.min_speed = 0.06596548840228844;
    msg.max_speed = 0.9578827590404093;
    msg.max_vrate = 0.8767985943223806;
    msg.lat = 0.9694415935472426;
    msg.lon = 0.9309368724909007;
    msg.orientation = 0.4150149887374919;
    msg.width = 0.5332852479364728;
    msg.length = 0.2715507467445525;

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
    msg.setTimeStamp(0.4797566547296702);
    msg.setSource(31531U);
    msg.setSourceEntity(37U);
    msg.setDestination(47789U);
    msg.setDestinationEntity(135U);
    msg.mask = 198U;
    msg.max_depth = 0.2205670529214797;
    msg.min_altitude = 0.6712581327205602;
    msg.max_altitude = 0.9194241665329163;
    msg.min_speed = 0.5061261538691615;
    msg.max_speed = 0.7939983648628927;
    msg.max_vrate = 0.8639160241593544;
    msg.lat = 0.2507436770116108;
    msg.lon = 0.95581308624446;
    msg.orientation = 0.3919660552949108;
    msg.width = 0.09604800787457457;
    msg.length = 0.9917248934408539;

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
    msg.setTimeStamp(0.027457797928319594);
    msg.setSource(46857U);
    msg.setSourceEntity(75U);
    msg.setDestination(61868U);
    msg.setDestinationEntity(246U);
    msg.mask = 131U;
    msg.max_depth = 0.7765565028960206;
    msg.min_altitude = 0.29193183978052173;
    msg.max_altitude = 0.501401170460666;
    msg.min_speed = 0.06621750555832939;
    msg.max_speed = 0.32089640650032414;
    msg.max_vrate = 0.9076893179636483;
    msg.lat = 0.03818463950025286;
    msg.lon = 0.9584590375728081;
    msg.orientation = 0.7169639112235506;
    msg.width = 0.3945833912282505;
    msg.length = 0.3831155663621124;

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
    msg.setTimeStamp(0.3349961174195487);
    msg.setSource(21879U);
    msg.setSourceEntity(118U);
    msg.setDestination(40466U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.9572602268924708);
    msg.setSource(4983U);
    msg.setSourceEntity(87U);
    msg.setDestination(60470U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.6413033749126746);
    msg.setSource(11427U);
    msg.setSourceEntity(250U);
    msg.setDestination(57451U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.5688967356034119);
    msg.setSource(55866U);
    msg.setSourceEntity(114U);
    msg.setDestination(33807U);
    msg.setDestinationEntity(80U);
    msg.duration = 9057U;

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
    msg.setTimeStamp(0.06176823269322351);
    msg.setSource(48690U);
    msg.setSourceEntity(189U);
    msg.setDestination(40934U);
    msg.setDestinationEntity(212U);
    msg.duration = 2786U;

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
    msg.setTimeStamp(0.893570488725722);
    msg.setSource(38213U);
    msg.setSourceEntity(5U);
    msg.setDestination(35578U);
    msg.setDestinationEntity(195U);
    msg.duration = 8502U;

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
    msg.setTimeStamp(0.02935766478882662);
    msg.setSource(52784U);
    msg.setSourceEntity(177U);
    msg.setDestination(27339U);
    msg.setDestinationEntity(25U);
    msg.enable = 135U;
    msg.mask = 718985447U;
    msg.scope_ref = 289051135U;

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
    msg.setTimeStamp(0.8451720428623347);
    msg.setSource(22770U);
    msg.setSourceEntity(187U);
    msg.setDestination(17358U);
    msg.setDestinationEntity(169U);
    msg.enable = 37U;
    msg.mask = 590552638U;
    msg.scope_ref = 143421971U;

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
    msg.setTimeStamp(0.15297666244898);
    msg.setSource(64547U);
    msg.setSourceEntity(40U);
    msg.setDestination(15857U);
    msg.setDestinationEntity(84U);
    msg.enable = 1U;
    msg.mask = 679115507U;
    msg.scope_ref = 2610909622U;

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
    msg.setTimeStamp(0.4701487289386398);
    msg.setSource(58911U);
    msg.setSourceEntity(219U);
    msg.setDestination(19618U);
    msg.setDestinationEntity(31U);
    msg.medium = 27U;

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
    msg.setTimeStamp(0.5340399351791725);
    msg.setSource(41184U);
    msg.setSourceEntity(136U);
    msg.setDestination(31347U);
    msg.setDestinationEntity(253U);
    msg.medium = 254U;

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
    msg.setTimeStamp(0.6618196665249336);
    msg.setSource(44079U);
    msg.setSourceEntity(112U);
    msg.setDestination(53784U);
    msg.setDestinationEntity(23U);
    msg.medium = 137U;

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
    msg.setTimeStamp(0.6193383010361746);
    msg.setSource(5369U);
    msg.setSourceEntity(106U);
    msg.setDestination(45889U);
    msg.setDestinationEntity(188U);
    msg.value = 0.9920625750885042;
    msg.type = 117U;

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
    msg.setTimeStamp(0.5050206889654245);
    msg.setSource(25592U);
    msg.setSourceEntity(94U);
    msg.setDestination(49430U);
    msg.setDestinationEntity(236U);
    msg.value = 0.3383327440175402;
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
    msg.setTimeStamp(0.5308201471490471);
    msg.setSource(32171U);
    msg.setSourceEntity(65U);
    msg.setDestination(208U);
    msg.setDestinationEntity(8U);
    msg.value = 0.5472603120275611;
    msg.type = 74U;

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
    msg.setTimeStamp(0.6943787269209405);
    msg.setSource(25853U);
    msg.setSourceEntity(26U);
    msg.setDestination(16200U);
    msg.setDestinationEntity(183U);
    msg.possimerr = 0.9992891603502404;
    msg.converg = 0.1611244150510287;
    msg.turbulence = 0.12014404109001597;
    msg.possimmon = 58U;
    msg.commmon = 81U;
    msg.convergmon = 94U;

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
    msg.setTimeStamp(0.3095120661088442);
    msg.setSource(29117U);
    msg.setSourceEntity(152U);
    msg.setDestination(26588U);
    msg.setDestinationEntity(179U);
    msg.possimerr = 0.5121744308390253;
    msg.converg = 0.2349244854605017;
    msg.turbulence = 0.4372963663692495;
    msg.possimmon = 105U;
    msg.commmon = 23U;
    msg.convergmon = 77U;

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
    msg.setTimeStamp(0.7215242776244929);
    msg.setSource(12785U);
    msg.setSourceEntity(38U);
    msg.setDestination(37734U);
    msg.setDestinationEntity(30U);
    msg.possimerr = 0.007400390991933459;
    msg.converg = 0.9722853896250883;
    msg.turbulence = 0.7495858644419765;
    msg.possimmon = 152U;
    msg.commmon = 175U;
    msg.convergmon = 88U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.5381567487010128);
    msg.setSource(33712U);
    msg.setSourceEntity(73U);
    msg.setDestination(59975U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.6216734439281566);
    msg.setSource(31426U);
    msg.setSourceEntity(5U);
    msg.setDestination(27851U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.8341886471691441);
    msg.setSource(56639U);
    msg.setSourceEntity(176U);
    msg.setDestination(437U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.1472488836888146);
    msg.setSource(13182U);
    msg.setSourceEntity(121U);
    msg.setDestination(54438U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("SLQICCSCPRZBKAXUWNXGUWZHSIYNDJFKBDSLXFOOE");
    msg.description.assign("QEVRWLONWNVAYVCGUQVILGUFETCKBGXPBOXVVCNTDSYBPRIENXDHYDMYRFJGYKXGLFQHMFLAZFRSJNKGLDIWDBJCMJUUFPSLSVLQIIFNWOJEKTYHSDZHMRSLJXQTSBXZKAOONBQPDKAMVJAVWHUYKNH");
    msg.vnamespace.assign("ZQAXIWLKCNAFTGSIHBGXMPXEKYLUXEOAXEVQOITZFSZYBOPIQTFYZRPJXAELPOJCTEQYDCDDFMTPZDWPVBEHKSBCMCQOWDLZKOGCFRNBUWTDCEZGBUHSNMANQRUCJXHIVDLWBKINBJMVSPVDHTZMRRMVXUWTJWVFDRNAGYVXRMWIALSUYFQVSKPJHNPJHSHMYIAOPUGQLOGGKYEKTJYCQURJFNVN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CCKOVPSVCFFRXBEUSPLJNHAXDQEKZPUMMFDJAFSREWJNBSVRNYKHCPGHOWQTMWWHBYTWPVOHNKERZOCDJKSZPKQWAZUAWDMNMSGUJDSUVGJLWTTFMYTDQD");
    tmp_msg_0.value.assign("CXBNPFVWPCHKWYUKQNWTMVQMDYNPPVJCQXEBCKMIBJIRKGXGTUZNAJXAVHHDBMIYHTEFEHPSDMIWRQMEUNJBPIGCLMWANAISFPTELFGKSHEVKDVXNKCYJZBAJALDDUAXDFOKMTJZOOZSSYGUOSJCUAIMQFZDWPQGTULZXSQWFXWTBKDQEEXYEZYB");
    tmp_msg_0.type = 164U;
    tmp_msg_0.access = 85U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DNCRMXEZJYUODNGPMNFHQDBOWYHZYTISBUWGUYYHNVSJEJCVWGTWMERYDXOHQIJCEEPKFKGEIXHROQACRPGLFRBHTCJVJMDMKFEZFKWSZTWQLAVQSEACYNWGXPMDLPQKCXBVZFSXLOKIAQSVMDLVAGMDVDTNHDBBTUWVSFZTRNUYTXROUKHBZWJLFPP");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("LDYACKBEGSOFMPTXCQINJFEHLXUNWKDFDAIVKROVLHIVBVUKPFIWICQXHLPNZJFZHRPGJUWHLTTGSXMOXRZSDTYZM");
    IMC::Teleoperation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.custom.assign("UUMFXDIBNUYOYZQMCWGMCENPDGVNHKLPVHPBDXYSBHVQTBYGIZFOCGBKRSQVOXANGTWYYNVHJBFSRUICCSJFAUZQQHDYXLSVEFEYRYXRDJJTONWMDPRIZITPZNQTKHKXNFZILXWELJILWMQHJEMMKSESWPPOQJLMJTGAKBLJSAWWVOCFNAOEBTXPWEDXDZCAC");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::AcousticOperation tmp_msg_2;
    tmp_msg_2.op = 159U;
    tmp_msg_2.system.assign("GWJGXWALZJGWQIFPFNWEYNBUEOKTZCQCYSEFPAEKPLQTHNZYVQHPMHBNKURICMDOHCIVAQXXJHBLJDORIVSLTESEADOLDFZOBDKMRHVXTPLYVFYKUJEDWGBBMWCUYREGVPQJVTMAHRMOZEOVTFFZMMINGBUFOLCXLBTCWTZRXWJBYQLKYXUUXKSJIHGPNDPFPYM");
    tmp_msg_2.range = 0.25401154868209896;
    IMC::SessionSubscription tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.sessid = 3316871167U;
    tmp_tmp_msg_2_0.messages.assign("OQBCVLRVTWSHGJBBRVJKPJOWYMLWADFPLZETCLUNWMHQVJMZYXHJBBINT");
    tmp_msg_2.msg.set(tmp_tmp_msg_2_0);
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.21804691523285424);
    msg.setSource(26099U);
    msg.setSourceEntity(46U);
    msg.setDestination(3917U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("FWBJYOIPBNLKVNUAJDRMWKOLGATDYPWWXIDURPBQAUXRZSJLIPSEFCBRXOAIENUFJRHYIVMGBDHBUFVQKYQVMAUH");
    msg.description.assign("MDRALWQZVLTTBVVFUDKFVYEWJISRWPLUIDSKYHQZHRGNLPCGNFERNZSWJVMSXIUNISNZMLHJKVLZUWOCVFUJDEQVUPOWHKNSMPBCQXTTQCMAENAXHGAAECEXXSBDXZTUSVJGRGYXJICBHJFCMAPULILGQEFBIHFKRCOJZRDGWCMQRYBRQXTTOBOAJKRPNKSQZKWDIELQYDHBSMT");
    msg.vnamespace.assign("SRRRPHAXDIKZICM");
    msg.start_man_id.assign("LAZEHSDZDKOHCFYACGDMQWVYTSZVPNEOAZRQAYLZXBGALFJUMTHKBUAIGFMFYFOLWWTHAPNEKKGUQKQNJCKVUPUCJZPSPTUMMDGYHBACWHPYDJWYJMXUXIJBFCGKWWOCPRIOKEVAKGYRTENVENAIOFDTHESLEGZWGWLBFXLNFRJVQJVINOCZUBLWOHRBJNI");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CFFLTSHKJDHRZTAFHNOLHOXIVJWRRQSWZRRAMCCZARSEHUQYCGLLAEPALIMYUIQJNMCQDBYNOINTWFZNOTNZLQOIKIEWELZNEGVXKSBVLXHWWLMKTBUASYPBDDQZIJKPVUCMGCYJXURCPEBZHCKIDXEUTTJEBYMYATJOFPPVUVPZRUNRGYVSGTLAFJXUDQHRXKWVOWQVJXSSKWFAUMGYGCK");
    IMC::FormationPlanExecution tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("FLMBECCKQVOUNXKVRMBDGWNIPKACKZWWPRBWQFWIWYGIFAWQFXGEHRNINUTRZPOLDFVFFCGLWQGDVHLYIHBMNBHDAAJRXCWAKOGOCXFUKPBYAASOHHIHYLBNAVSGO");
    tmp_tmp_msg_0_0.formation_name.assign("VJVNLAFLWJWBEONSXNDUQVIFPDDJAVBOSEIENZXYACWQLQGRHBWBQVXQPZRJITGLRIPQTHIOUVNVRTFSZGNCYRCHTGUHNMNEGKRAMMPXCEXLOE");
    tmp_tmp_msg_0_0.plan_id.assign("ZSFJDEMHUAPCYJGKFBBDGPMFGIMZFTOLUIYHLRUABHZONANGRZHEMBKVYGNNQKRFCQXK");
    tmp_tmp_msg_0_0.description.assign("NEFDUGDBRMKJVBVAWHLNMYIFGHRIBLPXYISBTCTQTTMKRKBQTHLNGATOZWCAULNUFKVNEQTIHQLSULKZSMINEOAYENBPTZOFZISRCFLMWOC");
    tmp_tmp_msg_0_0.leader_speed = 0.8362979403187052;
    tmp_tmp_msg_0_0.leader_bank_lim = 0.7085042364465541;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.34458935844768357;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.4307663353889104;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 48581U;
    tmp_tmp_msg_0_0.converg_max = 0.996735329412708;
    tmp_tmp_msg_0_0.converg_timeout = 25472U;
    tmp_tmp_msg_0_0.comms_timeout = 58020U;
    tmp_tmp_msg_0_0.turb_lim = 0.29767100632759347;
    tmp_tmp_msg_0_0.custom.assign("PMEBEPEFJWTIASBAXFSOQJTATITAOZETDALYQZXQJKOHRVUPASBQEPJQFUPQZTSDNFHIGVBLUZGOOSIOPINKMXNKNKVUYKXRUJWHHRNAFBTGCMXOCDYKIJMMSMXRIHAOGNVESQDGPVWGZUURCCBRJDHQJHWFFYMYUNBGRWAIZELFJRFGPXUVHDAWVVLNVLYLWGIOGMTWZQPSKZBKCLECDWTMCZDDXTSUIEPCLYFMNSBDXW");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EmergencyControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.command = 173U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_id.assign("CRXGDDIZTQIMFHYRZNGHSUSPNMAGWRFEITEJFFCBLYUKSKLMXRNJMCNDJULHOKQNVKULOBOOJDKTDZOQRGDMAJGJYLPLPCAQPGHTMYRXDLBNCXUROWVYDYQCERMVOTPFZQYKYWUXNYBSEEJJZCELHBVIWVSLWLTFMGEZDBVDIHABH");
    tmp_tmp_tmp_msg_0_1_0.description.assign("PRMIQXHLJXGHEVRRBBLPFPJVCJNATXEKFPWJZEBOYTSXVNOIQVNMYRYKRAFWQTZUSVPGRPCOXYSUEMNBVQHCZYYNUBWFDEYNBTCANQATGJTWSLREDWMTFXIZFMUZNWUMOGIZARPSBWRAVOKY");
    tmp_tmp_tmp_msg_0_1_0.vnamespace.assign("QMUNOUENAONTBGEYONXDZQNHDGDVFRZQSSVEDLIPQEMKRLZSJWDKWFIJPSBYUTMTXHEBAOORGTVPBUJMJKQPWXQCVMHXFIWQAAIVLDVCNXLXXWYJZNTELSNUIYVJUOARSMGXFNUJICWPBMKGTZHTGEADYGVIPOZCDASYVJNUMZWJZXKCRCWELIBQBTPVHSYKYIOEHWHFTGBWOBKLFKIJLDFFR");
    IMC::PlanVariable tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.name.assign("GAXKCYOZZEOMYCAQFHWQHIVLPEHJFLTCOZPXRYJFUBEFRVVMYZBADJDNJWSTMANEGKPGNOSMOTKLBKDYJVBBQTUZSPBCHZEBMSMQQPJIOGFKDSFPZKTLQYADPADUNWUCLCOZEUAOHIGIGTIIWVSWXIBOENIBPTWHEDWZQRXLNYVTPUNCHAQMUQSSDVNSEUGLXVGADWBGXJFLYYCHRIWJVKFTLADFMEOLNRMTKNQJRRWPZYVHRIRJ");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.value.assign("CVSFQJFNMNMUBBLPWITWIPZOYZJPEGGLJOSMYCRVSMXSCPACWHSISQEQXNVJNBPSGKPRQBRYFXEOKXCHAYMZZARTDHFQTRXJWZODJQUYMRHIVKFLKPATHQLTJHIGDNZSZMHLUDEDUBVLKONWYCFJTYNDBDTIBLUFEIUMOAVWAARYDEIGBCBGPTFCZFQXHVAXLVBMWGJCOILTDERUUMVSKWAXEVNXSRKC");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.type = 2U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.access = 184U;
    tmp_tmp_tmp_msg_0_1_0.variables.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.start_man_id.assign("BQXCEPYSRDVJNECITXAVWOJXXHQFGZDUIJPCYMRNQBFDYLSDMGIYZSIYEMPLRQSYMWN");
    IMC::PlanTransition tmp_tmp_tmp_tmp_msg_0_1_0_1;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.source_man.assign("OFYRGVVLRINWOFHVSPXKELEWZKTGIGVDLXAOBHPQKJNJEEEOXWODXGJMFSNIEEXCMMHTZCBRUMWZADTBADNHWTUTXVIPWAJRLTSQPELXWPMQOBUPJDHLXTJBYVULUSYJYFKKIPAFANOQQNZBPXIDR");
    tmp_tmp_tmp_tmp_msg_0_1_0_1.dest_man.assign("FODIVPVVCWSPADEGREWMSXQFPSXIONREQNLYZZUORJJSWPXUQVLCPIJAMQQYPYNNPOMEZEBWCVUFCCHLLZDMGAZXIIDKXQYGTMEWUVASUTTYDKWPW");
    tmp_tmp_tmp_tmp_msg_0_1_0_1.conditions.assign("RKIAUYBKZYFFBHGHPOADNVQAXQEKPUYASDCPHXZNERMKSAZSYDQCRLNJXHWRZZIUBGABMYHPCDUWOLPDVQYBFGQFVAACCQWIDMF");
    IMC::GpsFixRejection tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0.utc_time = 0.6674862541994822;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0.reason = 241U;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.actions.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_1_0_1_0);
    tmp_tmp_tmp_msg_0_1_0.transitions.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_1);
    tmp_tmp_msg_0_1.plan.set(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.17958054224708142);
    msg.setSource(63193U);
    msg.setSourceEntity(197U);
    msg.setDestination(64067U);
    msg.setDestinationEntity(229U);
    msg.plan_id.assign("ZDZDXLLBLHPIKRMJRQLDFWBIVBEBXVEALJMWUPZDGOFRTNSNBBOYGINQAGBINHOYPXWVZLUEYLMGLAMAAFRQCUSCJTXQYOYKWAVCZMGMQJHHSBDDTZKHGLPFKNORHTUMPEHGQXR");
    msg.description.assign("ONDCAHKNDXBLYXNCYQFUCSVPYRJDMQRESEBLZXJZBELUUISCAWRVSJHVRBVNADNNVFNZGVZIMQZVYMNAFZPKDIJZGCONTJORHRGQDKTPSXFYOWMIKGJONJHQXMEOZTPALRFCURUWYCGIMHZSYVTIWDVDSPXTTPFEWMEAMBGEXUUSHYKKILGQLPRKMPJLSHHXLKIQHABQKMBTUUFSFEPTGXK");
    msg.vnamespace.assign("ZGVHGBDFXYDFKSNNAZJMFEYSBLQRBXQWFFEZSKBCGVQCXBOKQMRSDQRMMNPLOTZZCGOOUGTJCFEWYPZWOAIKIRNPEHVWTNIJTLNASNEUJKGDL");
    msg.start_man_id.assign("TTVDRCKMJJTWVWKFUWJHNPHLBZUEFWUMIUCICMLMRUSBKMVTWOHGNIGYZEXENKYQBJTOQQYQWQGKPPHXVPOLNISFXFYABBFQKPHSCJVDMZFOVXTMULJSHBRETKASNGKSQRGZDVCYFZAXPECLCDYLJAGMKNXUEUPWUURMELDZOJLFOVSRFBPJD");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("RDSOJHZQZKZJVFWGNDRNMNGRHCGUMZQPD");
    IMC::Loiter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 35276U;
    tmp_tmp_msg_0_0.lat = 0.3178755829133475;
    tmp_tmp_msg_0_0.lon = 0.2571133161361193;
    tmp_tmp_msg_0_0.z = 0.7068613505397113;
    tmp_tmp_msg_0_0.z_units = 77U;
    tmp_tmp_msg_0_0.duration = 52649U;
    tmp_tmp_msg_0_0.speed = 0.14354680092360916;
    tmp_tmp_msg_0_0.speed_units = 137U;
    tmp_tmp_msg_0_0.type = 215U;
    tmp_tmp_msg_0_0.radius = 0.960784473961869;
    tmp_tmp_msg_0_0.length = 0.1032393741248937;
    tmp_tmp_msg_0_0.bearing = 0.8049360096098044;
    tmp_tmp_msg_0_0.direction = 137U;
    tmp_tmp_msg_0_0.custom.assign("ZCMEXJZJVOITFRAMMCTTMXHWLNUKZXKLRXKGZOEOACBDFPPRVWPTDYTEFUEPNFYKKYLGIUZUZBXSNWRUPETNSSSOUDOGPNGQJDEJJRAVSPQRMCWCOZIKISWMDBYRNOKECAQTEMJHTRNQXZWOIMILHJBXJWUAUDFCWNHRLVSFGOTQEAKGUKLAHRLIVPQQYDQYHBVGYMXBHGVFUYVHNGYFCLAVWKDZBJSHTQCXBDFSBIYHQOIWAEABDVZPMGXL");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::TrajectoryPoint tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.5208453334915728;
    tmp_tmp_msg_0_1.y = 0.8707666771664174;
    tmp_tmp_msg_0_1.z = 0.14302832238999574;
    tmp_tmp_msg_0_1.t = 0.225788296444137;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::VideoData tmp_msg_1;
    tmp_msg_1.id = 145U;
    tmp_msg_1.width = 46111U;
    tmp_msg_1.height = 11688U;
    tmp_msg_1.widthstep = 60644U;
    tmp_msg_1.channels = 224U;
    tmp_msg_1.depth = 148U;
    tmp_msg_1.finaldata = 59U;
    const char tmp_tmp_msg_1_0[] = {57, 123, -7, -28, -99, 75, -69, -112, -43, 5, 90, 82, -19, -93, 33, 59, -10, 126, 35, 50, -46, -101, -70, 101, -60, 86, -127, 100, -94, 33, 104, -124, 95, -71, 56, 28, -37, 71, 59, 70, 51, -106, 31, 95, 99, 2, -119, 117, 54, 78, -106, 112, 98, -42, -102, 125, 116, 93, -78, 1, 13, 6, 6, 46, -46, 116, -31, 86, -103, -57, -127, 113, -113, -42, -59, -54, -67, -15, -8, 109, -90, -14, -14, -91, -81, -99, 22, 124, -107, 0, -27, 120, -7, 29, -67, -21, -73, -125, 15, -15, 74, 6, 97, 17, -49, 122, 13, -38, -63, 28, -64, 116, 101, -39, -23, 120, 61, -58, 9, -64, 119, -53, -60, -45, -40, -118, 112, 16, 26, -110, -55, -19, -82, 22, -93, -95, 11, -48, 77, -124, -111, -124, -73, 95, -113, 62, 94, 46, 18, -37, 77, -35};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.2335180209861819);
    msg.setSource(60377U);
    msg.setSourceEntity(168U);
    msg.setDestination(55343U);
    msg.setDestinationEntity(14U);
    msg.maneuver_id.assign("RHUIQHRHQMNEZIFFWXSPCUZBLGHMKPIGOOVHYVKZNUQJHKOITHQVTJAUAGPYVTOJJDVLRCXESDMTIRBZRMFXKQNNEGCCDZQEBCKYSVSXBFMGXHDCAOASUGGDULYNWRWPGETJKRHYALBKNZZDWRSCUBMAD");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("WWXZQIWJJLUYNBKFJTORZY");
    tmp_msg_0.formation_name.assign("CJSRJAGERSDKEUHKQUZDHH");
    tmp_msg_0.plan_id.assign("QZKMGFQHPWWRPXGLHGQNKILOEWSXHVLZIHKOLNUQLQTCILTBUFBGEUPLKCHCZUPNYSVGSURJAAYARBSEYTXXYFRHWCGIUTBUMSSXZSEAVLJOQEQMDUENNBBVTIIZPFYCDMPDGDSVZRJAMKXRYFVCCINNJJTCHIRAMPJDEQHMWPRT");
    tmp_msg_0.description.assign("YZMSHGYLSFBIAKBQUYLKGCOXAOGANFTPFYYOOWDYXOMXZQVWVFIENAUCIANRCNTHADZGCCPDULWJISQRMDTMISEOSTOGRJZKVKRZVMTSELIKLSUUJFQFWCT");
    tmp_msg_0.leader_speed = 0.3677445617196762;
    tmp_msg_0.leader_bank_lim = 0.3788966458763041;
    tmp_msg_0.pos_sim_err_lim = 0.2476154317862843;
    tmp_msg_0.pos_sim_err_wrn = 0.9606365695459487;
    tmp_msg_0.pos_sim_err_timeout = 53879U;
    tmp_msg_0.converg_max = 0.020025337854000735;
    tmp_msg_0.converg_timeout = 43792U;
    tmp_msg_0.comms_timeout = 3264U;
    tmp_msg_0.turb_lim = 0.7873052498754569;
    tmp_msg_0.custom.assign("JRWEGYRFWGEPFTOGKSPIDQSZTYMZLBAHYGOWBENAYILJBINRJXHECXCZFWSFPNGGCLJTKWSMJWTWHSNLRPMDYUTBASOOUSGGWPBCQEPTLDODRPFVDVZCIHRHARJKGKURIKHMAFXALZMDTXZIYEYYXQWVEMQM");
    msg.data.set(tmp_msg_0);
    IMC::SmsTx tmp_msg_1;
    tmp_msg_1.seq = 2427686450U;
    tmp_msg_1.destination.assign("JXYPTPMAXDPHWIEZUKXL");
    tmp_msg_1.timeout = 49635U;
    const char tmp_tmp_msg_1_0[] = {-8, -93, -86, 12, 89, -19, 18, -15, -68, 60, 19, -87, 24, 36, -6, 9, 13, 89, 8, -113, -20, -56, 7, -104, -95, -107, 18, 101, 75, 113, -74, 80, -28, 85, 14, -78, 2, -25, -90, 106, -47, -102, -97, 21, 45, 75, 105, -59, 48, -4, 8, -118, 49, -44, 84, 19, -79, -78, -76, -85, -34, 2, -40, 89, -48, 1, 9, -118, 84, 124, -3, -110, -5, -113, 50, -107, 103, 42, 4, -92, 59, -39, 10, -113, -36, 36, 115, 69, 11, -37, 1, 45, 76, -71, 21, -126, 84, -98, 81, -46, -26, 44, -59, -23};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.47374403570791457);
    msg.setSource(61411U);
    msg.setSourceEntity(72U);
    msg.setDestination(3454U);
    msg.setDestinationEntity(229U);
    msg.maneuver_id.assign("TNKDPHMTIBOXJLKMABHQBGZLORPQSKMNTXAPIPOLZJQHVTMIVKJSRTVMTZYGGSJESVESUACYHCNIAUDQDYOFUYYKEGZJCOBWWYJYVMLEWYWHOAPFUGEHZEIIVCWHALUCATDIXDLGXARV");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 37048U;
    tmp_msg_0.lat = 0.8256227287936727;
    tmp_msg_0.lon = 0.35653098460706645;
    tmp_msg_0.z = 0.10192540642768677;
    tmp_msg_0.z_units = 46U;
    tmp_msg_0.speed = 0.9682270075302764;
    tmp_msg_0.speed_units = 212U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.4856142303927914;
    tmp_tmp_msg_0_0.y = 0.7918229128877584;
    tmp_tmp_msg_0_0.z = 0.4106088879880624;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("ATFPIOEMKHOCGZMVHOZYCKEIIELEFRYNOUPOBBVLYHSALLKOYDKEVRVZVIZMFWPLTJRHMCCUYHXTWJIDTHFGGGDDRJTTZIXGSBBQDBGOQMEXFCBRWMTULQWUNPSMAQKRKFBVZXCGJATXTUMSSWAUXZUWASQELMPALIPQXNPYDRDJWKIWUNJGNFISSPAZXBFMYFAVFKLQDHOSRXHYTRJNVECRP");
    msg.data.set(tmp_msg_0);
    IMC::CommsRelay tmp_msg_1;
    tmp_msg_1.lat = 0.7492288146583443;
    tmp_msg_1.lon = 0.26149780094457475;
    tmp_msg_1.speed = 0.9547992291018677;
    tmp_msg_1.speed_units = 187U;
    tmp_msg_1.duration = 17122U;
    tmp_msg_1.sys_a = 17876U;
    tmp_msg_1.sys_b = 36971U;
    tmp_msg_1.move_threshold = 0.48959026124932525;
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
    msg.setTimeStamp(0.6982849673829287);
    msg.setSource(25012U);
    msg.setSourceEntity(73U);
    msg.setDestination(2742U);
    msg.setDestinationEntity(33U);
    msg.maneuver_id.assign("KBSAREBVMLZCFDCSVDYVFJIATTUVZKCHJTKQZKGZYXAXDOJQZYMHNWXOMOQXYBDAUWVPHFAIYFXNHYHOARJESSUXLNKCWMXAIPIVWQCFVJEFTRNLUYKMTHRGEPUZWTSWQHOGLERSZMWKXGZNCIGHGNXSAOGLFSMZGPZMHWBWMORPJFVPJJIKUBEGRDERYUAFVJ");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 4382U;
    tmp_msg_0.lat = 0.07030007007019845;
    tmp_msg_0.lon = 0.48722741923271484;
    tmp_msg_0.z = 0.9752515842606283;
    tmp_msg_0.z_units = 57U;
    tmp_msg_0.speed = 0.704997197734489;
    tmp_msg_0.speed_units = 33U;
    tmp_msg_0.duration = 11693U;
    tmp_msg_0.radius = 0.09503409223205539;
    tmp_msg_0.flags = 141U;
    tmp_msg_0.custom.assign("PJRCKQKVZYYUEYBFOEICNRAFVACUIHZKCNPWLNHZWHLZEPUXJGRKDAFKQREDQHUTZERKOLOFXRLNQTLLSPMBIISBYWK");
    msg.data.set(tmp_msg_0);
    IMC::ButtonEvent tmp_msg_1;
    tmp_msg_1.button = 160U;
    tmp_msg_1.value = 4U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredHeading tmp_msg_2;
    tmp_msg_2.value = 0.3351006146067591;
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
    msg.setTimeStamp(0.2962545256437492);
    msg.setSource(3471U);
    msg.setSourceEntity(174U);
    msg.setDestination(6497U);
    msg.setDestinationEntity(171U);
    msg.source_man.assign("NDURHRTORRXWVWMTBXEMLBETJJMVJOUWPITIJZPOFPADIWIQUNATGAECVCAHXDOQSBZPULKZANCCKXDFRWBSRMGVLKYBGR");
    msg.dest_man.assign("DHLBSGRHYXXPZRDSQIHPSRHNBUNFEFPMAIOPEGCGDLNQLHPXMJX");
    msg.conditions.assign("MKGDLGPYAQMUVZHRFYHWIFBITAMLWMKQEIZBPBGMAENXLFIVCYQMOPJKHQPEWXUNYTRCIXGELTSTSONTBRNBHR");
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.8688906220178044;
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
    msg.setTimeStamp(0.5986619676129453);
    msg.setSource(18676U);
    msg.setSourceEntity(201U);
    msg.setDestination(13086U);
    msg.setDestinationEntity(176U);
    msg.source_man.assign("TBAMLEMCELYYTGFZSPYIXCEWQEVTMLVLLJZWMKBXIBKDNANDFWDZB");
    msg.dest_man.assign("XOIVTFZEYRIYDJPALTOAARTCVMIEJKEXMLVBNNYLMNHKKUCDYLREZSJWCLSHZOIEFFXUYPOUOYKSEZPQEXDPAAYKZJKTJICUNDYSDNSSOUGJHWMOBVGVTIQWIHQWPWCKLBYLAWVOJDQCLWRF");
    msg.conditions.assign("UCFUONDQBSOVFXPYNSLXIGJBSRITENCAURKCCEPFLYNDMYILOYSPGQKDRFNJKTHGIGOKXCJMJVQFOBLRQRTRSXAEKLEZLDOPMGPLZDKWDPIMWHSWMTGBUUJGKVMGJQXVOKDTZWE");
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("ULVNHLNJMZAGFVBHJQYXMDFEXYMIYJUQKSVENQMVLSHLMOOCGEBKBFVUZKOISYYZTIDDIMCTWYMFTELRLHURESDJPNTXNFWAJFONGPOQEVPMBUCSAQBESJSGRSDGEPHNRIDLTSVYOWFRZHANPTHFXAWUPLXV");
    tmp_msg_0.text.assign("SWIGBYVTFGTPUJFKATIASDFHZGULTVQHLFBHETQYMAOCGDVFBADYPXRYMXIVPXBHNGROMNKHLBCXTAHRQTWIZKSDTCXQKAELKQORQTMBJPEUVWKYZPNZLAKWECLYWVNZGRFLEOWIPSCRRNGIOAWNRGNSJZRPVCJWLXSYEUPDRXMQVEDNILXXDQFZJKUBJKUCDPHCMCYMS");
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
    msg.setTimeStamp(0.6529434445062974);
    msg.setSource(22011U);
    msg.setSourceEntity(248U);
    msg.setDestination(12392U);
    msg.setDestinationEntity(252U);
    msg.source_man.assign("QODDXHZODSIAYCIBUGQZJSECPSMBGPVERKPURTYKSKDGITJORQFDIQEDJJMGVYFVKOMHBHOVRIDCAWXHEIHNWNKTPMZOUKRUFHXRQEFCOYZZVGQFGJUBSXKJZBXGLWBOFENTHORDPKAMLDLAMVZNUYVNLIVC");
    msg.dest_man.assign("BOFXVMWAMNOEDRJVBNVIGSNYFPIQQRZDHHNABLKEFTTOTMXSEMUUDYQRXLXJQOBAJVLICWMRBFGIFZRUMUALVZWFFWBWAWXCFKOQIUHGRHLKYASJBHDOUGYXSZSDDPDITUMHOHJHQBSRPCFCJZKNXMUOCASGRTRMZPXKPIBAPQFCIIKXKWVZHPPVECJOUZXZGYQNDJGZTLCTRNTSEOCNLDYAWEGBVGEJWTSCSQVK");
    msg.conditions.assign("NNXFYNZSHTUPMUMZRKLI");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.16790997783620298;
    tmp_msg_0.y = 0.015385765807185314;
    tmp_msg_0.z = 0.7037161727883766;
    tmp_msg_0.k = 0.9388987524727882;
    tmp_msg_0.m = 0.28731229555913707;
    tmp_msg_0.n = 0.9975426750089962;
    tmp_msg_0.flags = 95U;
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
    msg.setTimeStamp(0.6890197574461018);
    msg.setSource(273U);
    msg.setSourceEntity(102U);
    msg.setDestination(36643U);
    msg.setDestinationEntity(196U);
    msg.command = 93U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HSPMAXEHVQYPVNGFURZKRJYFWBSNENFKFBPPQPTVULTKDUICKZIXYYVHVLWHJJQIUBLADRMUCDIUABYDTITFJLDFNSROADWHZ");
    tmp_msg_0.description.assign("UVVRIVEWYKWXWTCCKDQZGBCJFRXJL");
    tmp_msg_0.vnamespace.assign("PIEPXCQHYXMWVCQZTYSJKVEPTFAAXOSOATYNDUJBURQDBZLUHYMDRIDJAIQERFLILYVOWCMLVIXMVKKIENFRQJRFPH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VMDENZRWYIKQFYCXYJNQSWMTQXNJEMYKSCYZUEFCGOXTEKGTANCSORWACDPTDOGGFERIGNZIJQ");
    tmp_tmp_msg_0_0.value.assign("SUKYRNQVOKFQFLFVSOGSPFHPPYXABMSRIEVTRYJBDJNCIGOMXVNEG");
    tmp_tmp_msg_0_0.type = 104U;
    tmp_tmp_msg_0_0.access = 37U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YWXMARRVWRWYXOKGSVPCMCOAPZXGKHTEGXLYAETZRSJJTBVKVELOEZDIWRFYSICPKQJPBPNHVLHMCWQJEMIQMLFAJOOBUZUTWWSBFJYHKWNBG");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("MOZPUYDMYWUHJHLJZCOODPFWJQFQHSHRKINMVJYDARULFANQUWNTQNMDSSRLTQEIWJQNEQKBHSHDGIRXELVWPPVNZCZIKESKZTKIOGXBMDETPIRCXAUJEHV");
    tmp_tmp_msg_0_1.dest_man.assign("UPFGOLMGBKKACDALUYZNBVWPNHKMRPHNAULTXZGUTBGSULURZKPEYWNTOVEAPPVDABNWBTKZXBNFHJZLXFKOIMHIQQZSVCWFIHNZVIFEJEOGPZOXHJHMYWUWOOSVSTNQYALWEGYRCCBECKQJSYKRQRJEJFQPJGLGMTRTMMYTXKROFZHXDL");
    tmp_tmp_msg_0_1.conditions.assign("IEHZKDSYFTJJOKMNZBALCRUCGJFHICXJOZZLNMFLHAFXCRVRXQLNNPJPLWMPMMG");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 8808U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.3002401877061639;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.5900616154011142;
    tmp_tmp_tmp_msg_0_1_0.z = 0.29782150316045586;
    tmp_tmp_tmp_msg_0_1_0.z_units = 155U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.8152489913825384;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 121U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("OPRWNTBWEBJNEDDBBIJMGEDAZQHAVIYSJAFKQSPINFDGQZFVWFZEZAMYHFDHMJIHZNUMKULHUYNNRDVR");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PulseDetectionControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 193U;
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
    msg.setTimeStamp(0.15287125799827372);
    msg.setSource(53075U);
    msg.setSourceEntity(117U);
    msg.setDestination(34890U);
    msg.setDestinationEntity(190U);
    msg.command = 97U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RPHMSWGPLCSOISZIMLDYPRHOESSRKTFGYISACHVBNKEMRNYFVFKTQMFLCQLFWIQEJEUMORMUZOGRIKMKVJUBXWJTLVCNUQZRXAPPAMWNUVNVXPWJPGVTHBYYOVTJSWCNFABACSHWBMYUZTHWGKRUVHZEDB");
    tmp_msg_0.description.assign("SCQKFJIOOAEHEBJFHHXETKSYJWXSMFXDDKKJSARHZQVGTWMHRPWXJPUJPBYIUOFDPDVECWOEVYUGADNYWXBUOWDWZQHLOMCNWSTNCDRKPBQKYHBLVWVDEAIBFBZILWXZSZYHFIASTDTFPUYSNRLKSRPPNMAQOD");
    tmp_msg_0.vnamespace.assign("RJBMPGIEGTUDXPGYNWSEKPEBHRKCBRTAUDROXSTNNCSZPGJHGPCCOXOJLWSRXDWSAQ");
    tmp_msg_0.start_man_id.assign("AVZGCREHSXIDHKBQQYAMHSTBSTGZTNOGPQVFJFHUBINPRQHOXZRESYCSUMEXUYLEZDNIYKUZZHOSIQFVLDUNUDVOMAEBJFPHEXIJLYKZWVUHACREICNJOTAMNTEJ");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("XFXYZYVZQDMWKJYQEPXUIFBAEZERJFPBNKLNCSOUOCZFFFVKRMMXFXELADYQZQWQMIPTWSBHELAXJSMWSPVGRPUDNGOENMFTQRTVHHGORJBWWKRDMHXIRZGQIHIKAZDYRGDHOOLVTLUUBXCDALLT");
    tmp_tmp_msg_0_0.dest_man.assign("NJRQGBGZZQBNCKGENPBEKVFJCUGFOYDOWDDTHBAEAUEWZTDASXSDAAUCBAZKYIHXMLOBJYTXWQOGQVRVPQCOGCJUQSRWJSIZXMGHHKQLXVDWMIVXIXASUYXEHONBTRRUKEDUFVYIJKUSPMLZTTMWAOFCBHNDOYLVTHMFMDOCQAWFIPGJKLPPPIKWKSGT");
    tmp_tmp_msg_0_0.conditions.assign("UCWEIHDCNDSCIPHLEQQCYCRMTUWZMHNLLRBJUJFCZD");
    IMC::RawImage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.width = 6647U;
    tmp_tmp_tmp_msg_0_0_0.height = 27925U;
    tmp_tmp_tmp_msg_0_0_0.channels = 151U;
    tmp_tmp_tmp_msg_0_0_0.depth = 61U;
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {-91, 33, 67, -100, 26, 122, 21, 50, -76, 12, 89, 91, 37, -95, 119, -93, -109, 22, 68, 23, -74, 107, 14, 83, -61, 12, 81, 14, 77, -42, -19, -11, -40, 107, -30, -79, 115, -104, -52, -67, -86, 100, 99, 79, 81, 78, -17, -64, 19, 34, 125, 64, -70, -128, 96, -59, 91, -95, 65, -82, 80, -18, -56, -54, -103, 60, 85, 9, 116, -58, 78, -33, -18, -74, -64, 105, 63, 97, 79, -46, -83, 41, 77, 65, -108, -98, -127, 109, 113, -45, -106, -31, -9, 24, -37, -37, 17, 3, -125, 125, 78, 42, -20, -11, 87, -84, 126, -41, -105, -72, 84, 52, -14, 116, -47, 89, -46, 44, 12, 7, -42, 78, 32, 52, 86, -30, 70, -8, -71, 79, 72, -85, 76, -95, 30, -80, -29, 83, -62, 28, 97, -36, 92, 82, -30, -122, -121, 73, -102, 33, 101, -100, -121, 36, -101, 59, 20, -63, 27, -66, -75, 39, 44, -97, -94, -79, -127, 22, 88, -115, 119, -34};
    tmp_tmp_tmp_msg_0_0_0.data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::LeakSimulation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 46U;
    tmp_tmp_msg_0_1.entities.assign("PEJVOLYBETBZRAGBOIKBWNIPQUDKGKJLKIMYKKSYAFQRXKSZNQGMPUNCVYMVJZMJWDDYOQTBJHVPCZEFHRXGONNTRWNYISXZFHHLYGAOBUYJXBUGFQBMDCOPLLBJGPVFXADYUAHJCCQDUNHUMVCZQKRETNASOYTTSWFVHROEXZRVCDKFCVPIXTRLJXUWPIWQLSTAIJNEWN");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.1639531945219701);
    msg.setSource(4637U);
    msg.setSourceEntity(86U);
    msg.setDestination(38332U);
    msg.setDestinationEntity(196U);
    msg.command = 38U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JGPBCIDVIVPETHXTYZLXTDLTAOJSBSASWZTGBVUUJMOJKCXSGFKRHJIALLXWDFGUCQEHHVALBYAQLFKRLMJTRUBWEEEWGQZBIECJDIQOXBKSPYVPCNBLRYSWFPXVONMKEVYI");
    tmp_msg_0.description.assign("BYGGEEINRTMFNFQGUPBKSMLDNAEHEZMOYKLSRVHIMGBPRTTONWFTKMKDDHJDCEUBRNQNGLCQVXJKWHLAXCRWTXSVTKZQJVTWVBKVDJWAJGVBUKSBZHPEQQCZXMAJTLSFIZIIXOUBIOJBQNKINAXZUKCAOESAFDECGXFYPIVCTXOZHDVSAGMJXQUDRRPUCCEPQDWRNUYSISLYOPHHEYPWQPOPUCFLMSVLRBRTWAF");
    tmp_msg_0.vnamespace.assign("UYZOHHUMVJGXQUZJGHWYRJUEIEENYRYQSYZHWXNDUXIBARAIAPIXOIQDLHFSGQELTIVJZBGLSOTWBCFDCSFDCKYAKIPNTOIPEYNELXTKTWVJGEZGTFCWGBBDWNRKCJOEMEUKFDLLPCKTIKADAJLDSOXGRMVAFXPHFQSTYLRLWZWCNCVKNRMLRAPUBVP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VDSWCFYDDNTPKVRIMXEIUBDTBHOEBPMIRJMGPQBUJFACYQNGPXOTRKHCOTWHULKYXQSHACPZIBXQICAQWCZFBAIBHTRJDKMWFORKYVVOKQXCNSLVXBTJXGPTNGVIQMKNJHYKYPWFZLUQOUASMEUDGWRRUMSSTPAWCGFGVTXOSZEEVLZAIJMLRCEDGDFELYSP");
    tmp_tmp_msg_0_0.value.assign("NALUVAEVZWJWDMCQBFJPBQKABJOGYFCTBEPFYQVTTXNTFYYKKNCZSBEJLEKDNMWDJXDYFEHAUGINFBQGLPRWXUFWRQGPMUVRAOBOTCLXIPJSUBPZ");
    tmp_tmp_msg_0_0.type = 171U;
    tmp_tmp_msg_0_0.access = 245U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PDCRVILWLBGWAKMMKIYFUTVGQDDEPOBXZWSBJOBSKKHEZRUIDJJUNQLMRETROQBLMFDYZNUJMFEIZZINLWAOGBTCNSIEMTKKRHBUMWEXKUURMITPLDQVXEHPYJSNBOZHVBRPVTACWZCDFTCXYVGHYJGRMLNLAFHAYXOPASJTKNFX");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("JOUEZQCZMFISIJBSDTSLMMSAFEFPFDRMSOZNRSZJCXGYDLFTBKOHSBKFQWGVUSNECWHZEUUTGHNORINYQGPOYCAJPVJASGCVXA");
    IMC::Goto tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 32198U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.9963197411416783;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.9274387164640532;
    tmp_tmp_tmp_msg_0_1_0.z = 0.922392621256043;
    tmp_tmp_tmp_msg_0_1_0.z_units = 32U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.7126611207760772;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 71U;
    tmp_tmp_tmp_msg_0_1_0.roll = 0.4107282653191927;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.484472631386869;
    tmp_tmp_tmp_msg_0_1_0.yaw = 0.33753804593335823;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BZLEIPHUFKOFTFXVRYGMCOBSZOATFTAEMYUQWBJAFQEUYYTQINJEJHNKPQZXYUVIZLKPDAYFHRSWDWMIOAATCMDLENSQDKDWZGSHJONVZTDXXWVWMGDQKLWZALFQXMIJNKALVMJSFCNDRKINIGJVVMRUEOHITUCS");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Teleoperation tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.custom.assign("XPJJCEHPUOFVKLRGPLRDWKXIPHQMQLBCRAJTKXENUTEGBWJKLZVHFBESQKVIVNVLNXOSDRGUKXCRDRPWASVYWQUKMNFNBXTBIUFNEAMQSQLHQOWOYVUBTGGCQSWDESLTMHWBTXSMPOOGYAOMDZICXHUNCVOZIQPFDAYZEUEYJRKWCYPLZYXZRCKMGAWAEYDYFVINWBRZQMFAVSHTJZIR");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("PQVCCKDVZANOPTDTHYHIHMVBF");
    tmp_tmp_msg_0_2.dest_man.assign("FNMJAQVJGQHUIIAAVCEMWOCXFGTGBPBYFRDWJEXGTSPGIQQZLLWVVFXTJABUJETWXXZNZBYRSMMKWPKHAGUAADGIADNNZHKI");
    tmp_tmp_msg_0_2.conditions.assign("UPOBXRESFNHNSTQVITXYMAVMIUNMXGUKGZIRSCSNLKAQDAGHIPJLYOHGNPHYLMACSWNYEECRLOFGDBLDSYQGCUBQSKVZJYWFXNTMODQJRMPEBJVDTJZHAQRQIIBRCLYDZZKHIOZNPTK");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::SessionSubscription tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.sessid = 2135443861U;
    tmp_tmp_msg_0_3.messages.assign("ZWATIBZFNFQGKAANYKHAMNNNRCBVNISUDPVUCKOJLZWOOWCJWFXGLTITPWQBXKQLLGSPDGKFHGEJZSPBREDAGIXSIPMGHWOHLCWMCUNSABERZAMKVAIELUBQUGMGMWEKIKXEBDHPRKMUVMJXJMUXRNHRJJEZQQJCUY");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.40986496448987064);
    msg.setSource(2796U);
    msg.setSourceEntity(162U);
    msg.setDestination(60092U);
    msg.setDestinationEntity(211U);
    msg.state = 175U;
    msg.plan_id.assign("LOCQGMMXWFADAWXGLTQHYBGUSNJDUQZGOCEPXKBHXGIITKVSQNEDALYCPLSCLL");
    msg.comm_level = 111U;

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
    msg.setTimeStamp(0.8099751067696497);
    msg.setSource(31692U);
    msg.setSourceEntity(85U);
    msg.setDestination(3333U);
    msg.setDestinationEntity(154U);
    msg.state = 96U;
    msg.plan_id.assign("NBCLEIMAYNPIUWIPGDVBGPHUERWVBSQKSQZBEOTHQUFYFTPXJMSDBALIYAMIQPULFHAAHHMFZUXTXOTPUKRCJGIRSKQGEMUUBKZJGQJTOXKRAAPEQFKJFRVCJTLDWCRAUETDWMZNSKGXCSTRGHYOQSXVDL");
    msg.comm_level = 139U;

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
    msg.setTimeStamp(0.9776874051784479);
    msg.setSource(4589U);
    msg.setSourceEntity(254U);
    msg.setDestination(36843U);
    msg.setDestinationEntity(179U);
    msg.state = 139U;
    msg.plan_id.assign("IMVCHGOQOTPFTGOSDVXJOLBHBRFLGQLEYWBESQJKUVAUOGUEXKQSZLZWPDWCPYZHVJDUBDLDDLCXHINMOADYFTRNWMEJMRMFRKOIFPMIEKSQWIBUHYEHFMGPTUIIBWERPFQIYNIXVYNZXAUKQYSPANPUZWNJFDKXDYVAZZZCLFTRHHBWQEGKFENXPJTMVRTMXOWRAVHXCGSRJVZLRUAZMNTAXDSYGVWSTAACYSCLEPSGJUOB");
    msg.comm_level = 137U;

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
    msg.setTimeStamp(0.36813197125620223);
    msg.setSource(18893U);
    msg.setSourceEntity(92U);
    msg.setDestination(39854U);
    msg.setDestinationEntity(4U);
    msg.type = 0U;
    msg.op = 180U;
    msg.request_id = 18879U;
    msg.plan_id.assign("HPCRUGQQFMPWGXZTRQVZJSCIGBEKYAOQPHRSZYTCEPIITQWADQY");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("BOWJAIELDWYGOVMPXUNVXSJNBTIERTKRMGZNJFGVKMECROATDXHRUIEDZRJNLHLGLHVPCUROSMDVIHJCWUYKSBSVJASBAFPTWAZZUIHMPCUXVYNBLZYKZTVLSAIBQRBRYQKFWWZVMCINUUGWSTBCQSGCHCLMPQLECY");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LRSOSQISDQINXXREXBETXKQMCOIMNDSAVJFBDIKBCASPEUUGHXOWMTOBDAPPPCZINGCQYFYCEVUSLQZGOWSRMSUREJTTKVYRBLMKYQRROJFGFFSOZQHKAJVUXZGSTFDXBCGQWVJMCMZUYLYGNPDZVKAFAIZPONCFUBCIAAHEZWGEPPLRWBHTQYWGRLWXHTKHLIOHIKEKVJBUFWMP");

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
    msg.setTimeStamp(0.07674417779272302);
    msg.setSource(64694U);
    msg.setSourceEntity(137U);
    msg.setDestination(17753U);
    msg.setDestinationEntity(189U);
    msg.type = 159U;
    msg.op = 203U;
    msg.request_id = 55086U;
    msg.plan_id.assign("ROMHEJUPWOFJOFZYKINIUIZMSMBAXIGOPEGVZRVKIOODFHLBQHLBZXIPXSJDDJSHLTMLKAQMNLEHEVRTGZHYNVSRYUXMVGASIWVNMPXGFRTTUINOFYEKDGBVXDLFKQBYCBTTTGNPQKNJFBKDQAHQHMEJRLECJTXAUNAOCKASIZJCPQGESXGZPDWUYYRATRNYCUWMWHIWBCWKPYEPJVQEDXSVYLRNALUZWQCBAWUGZDCFCDJOHKZOXPFRMVBTFW");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 42U;
    tmp_msg_0.file.assign("MWGVWBHALRWIAURIMYQVBNLHXNEDFUQUXUSVNMQTQLJZDFPXKYWYAVBVPKXJEQWDVPD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LBJTMAZGSKVVMFTPLMFZMWQLGVIZOQGFQTXUNKNPDTOOVLCOQZLCNTXBCLAZHNEMKTCTYUGDWZLFZGEYFCEFJKYKAVDPXLISJJSZYNUPWRYHKUKRSKOKMQLCPNOCZIPXQJMSBJIVQBQQRGORJBWDRIUHAAHNTNHIBGSXJEEGENXXIVUROCVRYDZOEXJPURDFNTMSYRHFBUBWAYIGAAYDXWUMIXEGDSAYPKFWHJDCWVQWEPEHPLIDVCRSAHWOBU");

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
    msg.setTimeStamp(0.8518706664697372);
    msg.setSource(63724U);
    msg.setSourceEntity(7U);
    msg.setDestination(20759U);
    msg.setDestinationEntity(118U);
    msg.type = 232U;
    msg.op = 195U;
    msg.request_id = 48325U;
    msg.plan_id.assign("JPIDDAHXRGXDLYELXXXXRAPSRQOLFWKNEUQJOOZSTMDYIELQVUOCSYDBZBFMKSYBDEZFRKZLFEIJGKTBEJUCIGLZPKIAFLCJWIQEJOXWBKNOBVIEQSWZAWJGIDDRZQQVKZYOTWRAUSMPTPKVPUHURLZATLSWRQCCHHWVCFVBACNATBNYPMJLNTWHMKJMTURDNZUCYUNXGWPVOHHAICNEOTT");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 28028U;
    tmp_msg_0.value = 180U;
    tmp_msg_0.error.assign("RKHGAHIJGKEUSZRRPSFBWOFWCUYKJEIIAUSTXZHSQRYUYPBOMOUGNIDSOTJILPSWBWOWTACCIHAQBPQTEVVRQCMQTSSDLDHTEZNALIRKFOBQQWBVAYLDZYDGCJNLMOPGJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NFKFBKTYATWKRRJNHMODBFLATSYRDMJCEYPMBGTMPQKKBNOAZXIHDMQBPVFUMHORLAVJCURQUUWQISSUVHSIILYVDHZXUZPWRREGZJHTDBGZKENUNGILCUOALXPSLXPRMZCNEHGNJIYTGXVDQWHSDWFLZSOGDBEXWEYQAHQYOVVCZXVYJMISWCKCDBPEYFYUOBWCZTVATIJFXTJ");

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
    msg.setTimeStamp(0.10502831940934698);
    msg.setSource(8120U);
    msg.setSourceEntity(202U);
    msg.setDestination(10944U);
    msg.setDestinationEntity(205U);
    msg.plan_count = 36784U;
    msg.plan_size = 1855634554U;
    msg.change_time = 0.785193864700168;
    msg.change_sid = 7054U;
    msg.change_sname.assign("UXWHOGAKPKJBZPRSATMPMRUDBOWNNGAEZZVSUXZGXWLBFFYBYXQCTYTNTTJZCINPIXDSAORQMNOBWHFHRGCILRLHXEWLQUZCNYOHZBVDYCMJWVJFJUGGOAOQAQGVLELSJHKXSMEAEKGTKIPIT");
    const char tmp_msg_0[] = {74, 19, 106, 47, -56, 61, -120, 8, -2, -125, -42, -56, 74, -82, 84, 121, -62, 31, -116, 16, 77, -11, -110, 81, 45, 119, -103, 117, -29, 125, -127, -126, 51, -57, 73, -80, 61, 19, -97, 87, -56, -8, 96, -54, -49, 33, -28, -98, 40, -77, -33, 61, -40, -28, 91, -5, -93, 65, -7, -87, 46, 92, 15, 95, 88, 59, -6, 122, -125, -21, -2, -25, -81, 98, 102, -116, 46, -9, 72, 49, 92, 19, -50, -67, -12, 93, 126, -45, 27, 116, -16, -26, -54, -20, 106, -41, 40, 23, -53, 86, -36, -32, 75, -38, -100, 83, -67, 79, 20, -48, -5, 91, -128, 87, 15, -74, 3, -76, 52, -14, -45, -29, 116, -7, -117, 15, -56, -60, 96, 77, -77, 30, -116};
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
    msg.setTimeStamp(0.17001806987985502);
    msg.setSource(20896U);
    msg.setSourceEntity(233U);
    msg.setDestination(25193U);
    msg.setDestinationEntity(36U);
    msg.plan_count = 54416U;
    msg.plan_size = 1024969949U;
    msg.change_time = 0.45304967497042536;
    msg.change_sid = 20272U;
    msg.change_sname.assign("KAJMEKVQXPPWFZKVIXIKGNKHSNBOTQCWDNECSBPGFEDIQRYDACDRXVDYQJTFIF");
    const char tmp_msg_0[] = {101, 92, 126, 20, 4, -35, 1, 109, -84, -9, -126, -107, -101, 114, -109, 62, -125, -69, 81, -78, -2, 91, 94, 54, 13, 48, 74, 41, -81, 15, 38, 32, 62, 122, 31, -17, 51, -90, -49, 82, 7, -54, 23, 51, 73, -79, -104, 7, -120, -105, 101, -91, -44, -61, 35, -66, -54, -54, 7, -92, -117, -18, 103, 1, -69, 49, -88, 20, 8, 57, 74, 34, 110, 24, 49, 62, -4, -115, 101, 121, -78, 0, 119, -39, 54, -7, 67, 120, 70, -100, 40, 55, 36, -88, 85, 53, 74, -36, -23, -81, -104, 84, -97, -18, 89, -72, 7, -36, 112, -83, -25, 31, -119, 10, -2, 95, 46, 47, -94, -38, -8, -108, 28, -62, -123, 81, 81, 124, -60, -26, -110, 16, -60, -120, -86, 49, 81, 33, -56};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("YXWDCPKSEZGOUCFAATMDGSYFCJQ");
    tmp_msg_1.plan_size = 10801U;
    tmp_msg_1.change_time = 0.08548397808000407;
    tmp_msg_1.change_sid = 42222U;
    tmp_msg_1.change_sname.assign("NXZNBNKJGYHGWAOXWAXUXEGMCJZYVSREBADSWSBOGXTUCJLLADESBLXXLJSNSNVNUDNM");
    const char tmp_tmp_msg_1_0[] = {57, 45, -2, -22, 10, -16, -23, -70, 109, 116, -81, 118, 18, 24, 118, 83, 51, 126, 0, -25, 43, 55, -80, -101, 29, 62, -55, -88, -5, -25, -8, -33, 85, -36, 30, -48, -85, -1, 54, -45, 6, 83, 22, 10, -17, -89, 109, -99, -53, 98, -115, -101, -41, 104, 54, -53, 50, -49, 50, -8, 118, -88, -62, -116, -104, 76, -90, 111, 54, -95, -103, 88, -71, 57, -47, -57, -90, -17, -90, 3, 44, 24, -42, -2, -100, 109, -62, -22, 11, -14, -110, -101, 19, -60, -69, -7, -87, 103, 120, 77, 97, -84, 42, 41, -32, -116, 0, -55, -39, 112, 59, 44, 46, -36, 123, 55, -56, 94, -45, -128, -94, 99, 117, 118, 3, 113, 78, -29, 63, 78, -32, -15, 9, -77, 9, -103, 114, 35, -61, 44, 58, -72, 95, 14, -15, -94, -96, 24, 14, 95, 27, 35, -51, -79, 67, 46, -10, -29, -14, 48, -89, -42, 91, -17, -117, -92, 46, -89, 56, -24, -19, 47, 71, 76, -53, 79, -97, -107, 65, 2, -41, 96, -67, -121, 10, 20, 120, -75, 94, -6, -85, -11, -23, 38, -65, 30, -93, -66, -28, -22, -95, -91, -98, 64, 57, 2, 112, 21, -88, 46, 49, 67, 4, 34, 5, 87, -41, 23, -123, 37};
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
    msg.setTimeStamp(0.18344857397699788);
    msg.setSource(32146U);
    msg.setSourceEntity(100U);
    msg.setDestination(19999U);
    msg.setDestinationEntity(41U);
    msg.plan_count = 24805U;
    msg.plan_size = 1342805025U;
    msg.change_time = 0.41139818162481756;
    msg.change_sid = 17982U;
    msg.change_sname.assign("MZUCNLSWOLBBWGYRPDF");
    const char tmp_msg_0[] = {113, -69, -13, 17, -74, 55, 115, 71, 61, 36, 119, 94, -51, 74, -28, 1, -74, 78, 45, 30, 22, 18, -7, 57, -102, 93, -78, 88, 84, 57, 118, -49, 109, -59, -77, 114, 26, -67, 124, -110, -60, -25, -68, 63, -36, -57, -22, -85, -4, -69, 43, -50, -54, 109, 113, 47, 10, 112, 86, 21, 10, 80, -63, -25, -22, -34, -69, -21, -12, -123, -2, -12, 7, -25, 84, -86, 114, 85, 63, 62, 108, -34, 116, -1, 3, -29, -94, 116, 126, 99, -104, 108, 76, 50, -76, -111, -26, 79, 74, -42, 50, -101, -87, -110, -20, -41, -11, 7, 80, 17, 48, 12, 68, 33, 13, 61, -21, 90, -8, 4, 88, -8, 0, 58, 9};
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
    msg.setTimeStamp(0.6063442571161323);
    msg.setSource(53668U);
    msg.setSourceEntity(5U);
    msg.setDestination(54805U);
    msg.setDestinationEntity(148U);
    msg.plan_id.assign("GDRNGCWIODNSXDVOPRHFJQCOPOLRFBTUKTZTWZFEQNRBUTAHNKVSOMSBBHTEVQVUSTIMEPSVPVDXNBSLGCARHYBMLZEOSECFREJQFXQXIRIJPFVXMOTVOFDCUUYNKZYGPPGYMXWUAFKKLQRTVCIWUWUJSVEDRKZZZGBCXNLBGKKUAXOYLGHLYNWPGADMTHJMWJKYAEYSWZMIXGLEXUQCKICQIPYBHFAJAIAHCWEILAJDR");
    msg.plan_size = 14901U;
    msg.change_time = 0.45447998723163796;
    msg.change_sid = 50323U;
    msg.change_sname.assign("MQEAFOSGJDSRVJUMXWWDUMAYPRKWHHXIFUJMBREVTRCNOCVZDTEMCSQZP");
    const char tmp_msg_0[] = {123, 63, 22, 88, -75, 12, -40, 31, 57, 33, -28, 62, 10, 21, -117, 12, 90, 55, -63, -71, -111, -98, 36, 126, -103, 41, -73, 1, -13, 95, -103, 43, 124, 121, 94, -17, 71, -88, 25, -39, 93, 70, -111, 45, -91, -109, 45, -53, -34, 44, -12, 11, 72, -95, -108, 121, -54, -28, 51, 25, -95, -72, -84, -81, 122, 68, -56, -126, -121, 33, -102, 73, -65, 21, -57, -88, -43, -35, -58, 85, -91, 10, -64, 126, -46, -28, -50, -109, 53, -9, -127, 81, 65, -81, -54, -119, -38, -66, 79, 29, -103, -77, 106, 78, 16, -72, 78, -13, -106, -96, -20, 31, -74, 47, 31, 64, -52, 42, -88, -52, 83, 34, -75, -33, 120, -17, -49, 39, -87, 1, 106, -24, -52, -128, 58, -33, -125, 103, 6, 19, 14, 6, -26, 104, 89, 55, 94, 116, -74, 123, 16, -34, 31, -15, -92, 34, -121, 28};
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
    msg.setTimeStamp(0.6827451660785292);
    msg.setSource(6802U);
    msg.setSourceEntity(188U);
    msg.setDestination(56396U);
    msg.setDestinationEntity(10U);
    msg.plan_id.assign("HXUTOBUNMTSRSGOCSADDDHVPAUPEIOOIQAZTYIFOLQMFQAQKFBTRBJFCYNMHADTWTLCKWLNMWMWZQDXSXVRBIFNNKPBRSGELSRMWFIHPLEKFLFEHOEQGVTPKYL");
    msg.plan_size = 8693U;
    msg.change_time = 0.10031679688536321;
    msg.change_sid = 46006U;
    msg.change_sname.assign("IOPINAZCZFQYOUSLKCRIWGWAKFOPJYCSTCXOTWVEPYEFYRLAJAJACPUU");
    const char tmp_msg_0[] = {-11, 6, 6, 32, -64, 71, -71, 90, 6, 47, 47, 16, 120, 47, -25, -82, -116, 67, -59, -85, 62, -55, 12, 90, -96, -64, 41, 18, -61, -120, 28, -110, -85, -36, -44, 33, -109, -64, -83, -74, -51, 9, -18, 111, 84, 79, -34, -111, -42, 5, 123, 42, 51, 88, 89, -116, -39, -103, 5, -105, 34, 110, 71, 27, 96, -50, -62, 91, 36, -67, 50, -124, -25, 17, -26, -16, 35, 91, 10, -72, 79, -103, 42, -53, -34, -118, -77, -117, -84, -111, 118, 109, -64, -48, 93, -105, 2, 33, -44, -92, 112, -62, 38, -24, 20, 34, -41, 54, 88, -7, 43, -126, -24, -65, -6, -60, 46, -49, 28, -35, 33, 62, -85, 117, -80, 74, 30, -77, -96, -27, -49, -13, -82, -6, 11, -54, -61, 117, -121, 70, -32, 8, -6, -89, 16, 67, -31, -73, -121, 86, 46, -120, 25, 28, -15, -36, -104, 85, -54, 113, 87, 92, 97, -87, -95};
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
    msg.setTimeStamp(0.19045395327262016);
    msg.setSource(1755U);
    msg.setSourceEntity(253U);
    msg.setDestination(43867U);
    msg.setDestinationEntity(229U);
    msg.plan_id.assign("EOVWBJPZUYHDRGEOIXSLNGQYMQJDXNLVXITQCRNNUNQCWZVZZVUKEXBQUPVULTAMMYSYAEMMJWTCOAQMDSORSDBNCJFRHGEPFCGACQGLLBIMQPKCDKIJXJEBZBYPVDVYVURSFXCRTPSEGNLFFKSIFPQHDFNATWEWTAAISXOJSZUHWQHBLRZZAJPYUJVCEBOXIMYDH");
    msg.plan_size = 40760U;
    msg.change_time = 0.736173615074444;
    msg.change_sid = 43607U;
    msg.change_sname.assign("QKFQMMBUJNYRWBIHMTXIZMJFROGNODMWLZFBVOTDIVCOCNKLEDUXHFBPSQIMTMBKOTVDWJLRAJOQDVYWPUINTOKKUCZXPYYCKJPKYUWBSUQSVHPQSLJYDMIKWRFPZBNAXE");
    const char tmp_msg_0[] = {120, -103, -73, 77, 20, 47, 82, -57, -7, -81, -5, 97, -126, 11, 77, 89, 3, -9, 69, 88, -43, -20, 115, 24, -27, -23, 108, -28, 88, 71, 53, -76, -49, 58, 45, 58, 51, 125, -81, -98, 78, -72, 57, -38, -106, 81, 108, 77, 98, -93, -52, 112, 84, 51, -24, 71, -114, -117, 68, -98, -92, -88, 49, -66, -36, 97, 125, -46, -38, 53, 18, 102};
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
    msg.setTimeStamp(0.021823720868568208);
    msg.setSource(16046U);
    msg.setSourceEntity(171U);
    msg.setDestination(45450U);
    msg.setDestinationEntity(195U);
    msg.type = 51U;
    msg.op = 89U;
    msg.request_id = 30136U;
    msg.plan_id.assign("APQCLQIJUTZZXYRPPGYSRITEGJQHZSKKCPONLUETFCEAFXAVOWGDHFZQFIABRJQRAUKK");
    msg.flags = 28044U;
    IMC::VideoData tmp_msg_0;
    tmp_msg_0.id = 251U;
    tmp_msg_0.width = 53663U;
    tmp_msg_0.height = 34981U;
    tmp_msg_0.widthstep = 29181U;
    tmp_msg_0.channels = 215U;
    tmp_msg_0.depth = 23U;
    tmp_msg_0.finaldata = 127U;
    const char tmp_tmp_msg_0_0[] = {12, 75, 123, -107, -18, 58, -39, -58, -80, 99, -64, -60, -124, -100, 11, -21, 68, -73, -21, 36, 18, -51, -76, -33, 44, -28, -51, -84, 27, -107, 47, 10, 84, -56, 125, -42, -126, 19, -31, -117, 23, 33, -95, 34, 92, 106, 4, 26, 96, 40, 110, 98, 59, 22, 110, -108, -103};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NFSJQUDMGENTPCKUFCCDPAHPRNETUWLJMGAEYAOIQKAXFOHJWVWIPIBMXZTWKNEHFDFINCLSTSOBTRKEHFVMTHMKYDFOEQJMUYIJRAUJNXCHDAZWRCPAGRMLUGIIEKFKQBAEMVQJLFPCYYOGHAKWEUBLSYWBZGSPBLFMKSNWXUQLGVGTYZXHZRSIVSVDBRJZHNSZLXDIVUZBSOOYCC");

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
    msg.setTimeStamp(0.9601160193073843);
    msg.setSource(16942U);
    msg.setSourceEntity(95U);
    msg.setDestination(25261U);
    msg.setDestinationEntity(115U);
    msg.type = 201U;
    msg.op = 181U;
    msg.request_id = 63899U;
    msg.plan_id.assign("EEHQJRGIROUVCPWAXDFKNVMDQGSJQEPSNFZFMFFUTAQWKTXHWKTWPWVJUJWBYRYXGZOJRXRJYKBDVUYFLJACCVMCJUVIXLCGBCGHHFSUUYMYCENMAMAGVZLIJYRBMZDQMHZJKVFRVVTTXPAKDYDSGHILXIHDDTXQUEFIGUZOXEWZ");
    msg.flags = 38796U;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("SQINRJDSEHVBVFOTHDYADLZF");
    tmp_msg_0.op = 24U;
    tmp_msg_0.lat = 0.4617513248446147;
    tmp_msg_0.lon = 0.8910780209525548;
    tmp_msg_0.height = 0.9284015170622683;
    tmp_msg_0.x = 0.4506530320461496;
    tmp_msg_0.y = 0.2429258592131709;
    tmp_msg_0.z = 0.8106154247697035;
    tmp_msg_0.phi = 0.3976350113352617;
    tmp_msg_0.theta = 0.32307657332695894;
    tmp_msg_0.psi = 0.12774115265497032;
    tmp_msg_0.vx = 0.9066263187167463;
    tmp_msg_0.vy = 0.29285852943496204;
    tmp_msg_0.vz = 0.09247730111191232;
    tmp_msg_0.p = 0.5666932750599363;
    tmp_msg_0.q = 0.9124787807074959;
    tmp_msg_0.r = 0.752381301695151;
    tmp_msg_0.svx = 0.8162431925524972;
    tmp_msg_0.svy = 0.9818528421958708;
    tmp_msg_0.svz = 0.6859579318061017;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SAHSGANKHXICPVGMHCUBPBRIHEOCEWJBZLB");

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
    msg.setTimeStamp(0.4444375604916734);
    msg.setSource(29658U);
    msg.setSourceEntity(196U);
    msg.setDestination(28967U);
    msg.setDestinationEntity(162U);
    msg.type = 215U;
    msg.op = 15U;
    msg.request_id = 11908U;
    msg.plan_id.assign("PLBIYOFXSMAOVPSL");
    msg.flags = 61307U;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.14632605166658486;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DFIUIINNTVWBAEZWGHJYKKZSICSRGHQYSDMISBTKDQWTUVPVCGQQOULXZWENRJEKZTLGMAPPSOXGYYSMFYUOZFKJBINPGXQQZFORJDSDBDUOXZJZNBTKTTWIVDEGEQUPAABKYCCQKEOPWQINGRFMHFJ");

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
    msg.setTimeStamp(0.12822316675539192);
    msg.setSource(21789U);
    msg.setSourceEntity(176U);
    msg.setDestination(15587U);
    msg.setDestinationEntity(17U);
    msg.state = 132U;
    msg.plan_id.assign("CESNDFIAJMWEBSADBERAYMVDJUFSRRVOQXYHCKEVTSYNCUAAQNHKNMKNRKIUZXIWADABBTFDJWTBAGSCZXPTGFGXRIJYJLFPXDOBLLMGRPWSLXMIONMUWNJKXLIVGUYRUZSHGILHHMLEVPOEOQDQVMCYRQFCZEGPCKBEICZGBYLTFQWYWKOWKTM");
    msg.plan_eta = 2023593413;
    msg.plan_progress = 0.03955792371197109;
    msg.man_id.assign("MYUBFDRMQLANMWJCFCPGIPSWBBZOKEZYDVWUCSSZTLQRAXFDVLTUQZCHSNSFFMGJTOVNXYIKKDZKZBQBGYRU");
    msg.man_type = 23088U;
    msg.man_eta = -1862283290;
    msg.last_outcome = 177U;

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
    msg.setTimeStamp(0.9380394769486332);
    msg.setSource(32827U);
    msg.setSourceEntity(164U);
    msg.setDestination(25458U);
    msg.setDestinationEntity(157U);
    msg.state = 70U;
    msg.plan_id.assign("YPTYNQCGBWGDASWAKGSHQRRUACKLUWUXKEMVPHNLAQDWDNNPGMQVZZCLWXSZFLADFADBWRMLYBGUTONQWNOCSCFBTXEKAENUZJPQTFMSJFIPIYTEQLRXNABPGMWAXVVSWJHHCDIKOBYHEPSLJIZOXXENJROVVSUEHSJJKKRDZFIFGNMBOPXIQYRCMRPHGIGRVFHIRWLIXYUCMXUEDBTOYZEPJKEQIAUYOVKMTZVTMFOULLCTYVBD");
    msg.plan_eta = -733788493;
    msg.plan_progress = 0.6404891423035657;
    msg.man_id.assign("YXRIJYAEVKXSTOLEDZBQFBSLCMZGKKEAMDUIGPDUXNHPUFPIOGFCIIJUTONI");
    msg.man_type = 51950U;
    msg.man_eta = -2129706420;
    msg.last_outcome = 126U;

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
    msg.setTimeStamp(0.8470751132993449);
    msg.setSource(12497U);
    msg.setSourceEntity(86U);
    msg.setDestination(52148U);
    msg.setDestinationEntity(198U);
    msg.state = 113U;
    msg.plan_id.assign("SFVUQJIRFAONZHISDHDZWGSKDVLOPDPQMJIANUYJSOXTEIQOKCPDSYOFLJWLNCEEEUECCADYMYFXNGQRBIVRFVCNMAYLZEBLSSKQFNANHJWIQHJSBURAITEHGRPUPSBQJGBNVIBMTTTTUYZKPKXMGTAVHLEHKURYARLXIJGZIVMHTYPXWDYUMKTLRUOYWGPNWUZOXJCDBGRNWMZBOWVQQSAXXEOGMHFWFLZQPCKFBRTLZBCGFXCX");
    msg.plan_eta = -245214121;
    msg.plan_progress = 0.12529295353517578;
    msg.man_id.assign("KDAOTLNECIPXFDYPWZJYELLZFSQFHDSUITBUKJPIRUNJYBLKYFOPBETBHMWVUHMBIIGZDXPGKNZXEITXJIQWGVQPWHXQVAEOFAOGCPWTIZVDMORJLGWFCPRASRGXBVWRIOMXJCCUUHRVQGRUKMSAENZMKKQOEMFRNAOSYZZQSRJQNVHRTJJVBUCAEHSOCTDONTWDWLDEZYXWATFLHYKKYNDJFHUZ");
    msg.man_type = 48435U;
    msg.man_eta = 1904873637;
    msg.last_outcome = 141U;

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
    msg.setTimeStamp(0.03860579414522025);
    msg.setSource(17649U);
    msg.setSourceEntity(46U);
    msg.setDestination(60600U);
    msg.setDestinationEntity(205U);
    msg.name.assign("IUGBNYOCGTOFBKRUEGSHSXKTUHKQPGHGPYCULWFRXGRDOUTPBRWVLNBQXOHLFEJOMKLNYPPHYCWBQJIBMALODGMTZMNLZSQHJPAGFENPIDWLECWIYYRSLTIYSKSNACCPMZUXUIIZXQKDXMAVQZVMFDBAZJCJATJTIVBWQCPNTASYFWNOVODDXQEMU");
    msg.value.assign("WCJUVSCRPCJZOKIWMGVZASBFDQNDSBQVUEDJIKYTCHCGANGZHEJPSRPAOWRWYXXDTLEQBQFUFGAYLALIJHLUSOIYTEGZBHTSYXCFQZIPZFJREUMIVMUMANHCMYFHFTEAIWSMPNQRUHKFTKMUBEPQVVYRVXMWAESBBKXZRRTJVZWOHLDQNZDNIAETEOJKQAXUXPGSNNDLDJFGXGOPVY");
    msg.type = 68U;
    msg.access = 6U;

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
    msg.setTimeStamp(0.8666121897456591);
    msg.setSource(46623U);
    msg.setSourceEntity(191U);
    msg.setDestination(21748U);
    msg.setDestinationEntity(131U);
    msg.name.assign("PNKFLYORDDGKSCXJEPGGBSRQAWWHEVHNFCMLDRXRZLGEYUBHTWTGFFVALSQJKQRYXRHNKEJAJMYJENDMKYZVFMVVTGFIZVBHMPBTALDQXCVPKMXLJJOQIEGISHOTDTHNJLSXSMWPWBXVLUAPZURACDBINEDCIFWYETDUKSVNTYWLZXWYYSFLXTUDAZQPJFIJFIPZCSMOBXOEUNASU");
    msg.value.assign("MRCNGJDRIUCFQZRWLNZVMTQXTPIHDACOYKJWVXGNPHVFUSMOYYQIIDPRCTAQILVLQAGTIYRJKLJJNBMHQWLXDWUAYWUMSOONPLLKMXBEHSVUWUTNFBWNOCQXWSZCBZYFYCUKGBDGFPTJPHHIOGCYZJXBXDRBBEMCVAXRSKEGCWAUAELOEEFFBIJDDZUHVUQFPEKPITHMQAJRSSPMORZTHKMNAZWOANRIPDSJLOEXVKYGES");
    msg.type = 191U;
    msg.access = 246U;

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
    msg.setTimeStamp(0.1098403515518166);
    msg.setSource(34382U);
    msg.setSourceEntity(78U);
    msg.setDestination(9636U);
    msg.setDestinationEntity(158U);
    msg.name.assign("HMGVQIFERCPLMHDZRJWCKRZOTAOVJJFFHTMPIITLCOIDCEBWFZJHNIQUPRW");
    msg.value.assign("QWINCRCMNJSSXRVHSLBKIGYFLOFLDWPLJRQWISMRUBMDTKWOTLYTEULHQSDTZZBDSRXAJQSXYOHEEPRWALMYDJGPYJQMXNRVZUOGYTXKMGPFAKCAFSDHTTDQCJECKWNVVNZQZWECNTQPVEOBHSOIPUMA");
    msg.type = 118U;
    msg.access = 120U;

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
    msg.setTimeStamp(0.15037133200867014);
    msg.setSource(46104U);
    msg.setSourceEntity(226U);
    msg.setDestination(2652U);
    msg.setDestinationEntity(147U);
    msg.cmd = 23U;
    msg.op = 101U;
    msg.plan_id.assign("ARDMDPURJDIMZGBIJWQSIACECYTLXCYUGSBTVYCJOZEFCWVIYREBCZQUUSLK");
    msg.params.assign("VYXSJJYYBEFOPJUKPDNVGPCMTIRCRVNEBTD");

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
    msg.setTimeStamp(0.488378763227609);
    msg.setSource(35986U);
    msg.setSourceEntity(166U);
    msg.setDestination(64099U);
    msg.setDestinationEntity(191U);
    msg.cmd = 34U;
    msg.op = 30U;
    msg.plan_id.assign("HJVKJINDNTXAPYQP");
    msg.params.assign("GEHOZTKKJZSMRWPERYHRAXCCOZJZVZWAAISNTPJQVUSDVEQBOKJGQYXKWPDEIVFCDDUTXNRASJFGEY");

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
    msg.setTimeStamp(0.18497751596865375);
    msg.setSource(13548U);
    msg.setSourceEntity(146U);
    msg.setDestination(13932U);
    msg.setDestinationEntity(105U);
    msg.cmd = 73U;
    msg.op = 169U;
    msg.plan_id.assign("IEJHNJXEFGSAWKVNUWTLZWULNZMDDSCGHFXLOSTLASDXUNNJFLBDDFZQQZTHCVYVMPOWQVCDMHIZJQLXAOKRPWJRCOWRHQMEHJYWPNGZTYDUJGSYWETOWBHIGXUBRQSFQNEHIPPVSLBDUKMASECEKIGEPTPOYGMIATMSMYZKDAFPWXCFHBITB");
    msg.params.assign("SYAKZXXOBDIHXTEKBFCRQSKGCNPGUEOULIGVDNHJWRGZKHXZATEWLVTHESIQRDPOYQYDATSOBQGRAWZFPRLVVH");

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
    msg.setTimeStamp(0.14335829044454584);
    msg.setSource(3290U);
    msg.setSourceEntity(237U);
    msg.setDestination(49281U);
    msg.setDestinationEntity(118U);
    msg.group_name.assign("ORCJOYASMJMIAZFUIXOZRDZKJHAIXKTWBZHECMHCJXVMCYRSTDNJOQKJHFLCNOPHQTNE");
    msg.op = 85U;
    msg.lat = 0.27705358839207417;
    msg.lon = 0.8235328240495237;
    msg.height = 0.9822866279697858;
    msg.x = 0.749498213251001;
    msg.y = 0.08250729340445973;
    msg.z = 0.45927236947104444;
    msg.phi = 0.413530543683286;
    msg.theta = 0.2823565316407697;
    msg.psi = 0.5255326637025308;
    msg.vx = 0.20352074217499583;
    msg.vy = 0.35816715734154325;
    msg.vz = 0.2577749178261727;
    msg.p = 0.5756132368579642;
    msg.q = 0.7400159494485836;
    msg.r = 0.9230382320040817;
    msg.svx = 0.24534759822661156;
    msg.svy = 0.014342103074098111;
    msg.svz = 0.0028517594089070286;

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
    msg.setTimeStamp(0.7981241199615247);
    msg.setSource(1646U);
    msg.setSourceEntity(43U);
    msg.setDestination(6049U);
    msg.setDestinationEntity(65U);
    msg.group_name.assign("OTLGNXQOUMDNYTUABWXFQLMOGVNQGVMRYFWYUHVNGOIEZZCXDIFQHCISCYNCHKBHYJKVTDMPTGDDWJXRRZVOQRAPKPMPEBNNGVWUJBKIKYRPSTJHCQXJWDFZBTADSWEXEWFUEIZOURYUBOHEYCIGLSQXHPLPWRBSESLOIFIPXQSWCECUKCBTLTEBYMUAGMVXZT");
    msg.op = 205U;
    msg.lat = 0.6953651021471582;
    msg.lon = 0.8143497500491225;
    msg.height = 0.15224527878352823;
    msg.x = 0.11845131697160838;
    msg.y = 0.7475441429389682;
    msg.z = 0.4110601726747539;
    msg.phi = 0.09839002875573621;
    msg.theta = 0.43651594444560704;
    msg.psi = 0.9959890461695996;
    msg.vx = 0.2920992546988076;
    msg.vy = 0.42675219082979254;
    msg.vz = 0.29664693038323897;
    msg.p = 0.6202046873076743;
    msg.q = 0.7649520174621675;
    msg.r = 0.6196157993842116;
    msg.svx = 0.416361299406924;
    msg.svy = 0.3233309004282323;
    msg.svz = 0.38442462242826814;

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
    msg.setTimeStamp(0.067847840605327);
    msg.setSource(45730U);
    msg.setSourceEntity(181U);
    msg.setDestination(39802U);
    msg.setDestinationEntity(244U);
    msg.group_name.assign("STPJOLRBGLINBJUYGFGVBNZMVWTUVQYKTQMAKRNMOUIPPFWTHPOHBPDKUCAZLMOMBYORMNDKWKLKTOHUDGTHRVEZJYUJYZEBSKFYLTLZLCB");
    msg.op = 178U;
    msg.lat = 0.989746859405874;
    msg.lon = 0.7883297210872178;
    msg.height = 0.029500377151969293;
    msg.x = 0.8916404075385053;
    msg.y = 0.362845993273451;
    msg.z = 0.31183409883752766;
    msg.phi = 0.737409864112903;
    msg.theta = 0.8927146456741591;
    msg.psi = 0.9563025371813229;
    msg.vx = 0.9158578686796359;
    msg.vy = 0.8983744229616712;
    msg.vz = 0.48803468966824504;
    msg.p = 0.03370486453119936;
    msg.q = 0.4167900836402737;
    msg.r = 0.2691599991600666;
    msg.svx = 0.7016403900906327;
    msg.svy = 0.8354599311389782;
    msg.svz = 0.37128852422209535;

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
    msg.setTimeStamp(0.36701535505624483);
    msg.setSource(38206U);
    msg.setSourceEntity(69U);
    msg.setDestination(21027U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.5832056172511139;
    msg.lon = 0.00316726420723501;
    msg.depth = 0.909332066157579;
    msg.roll = 0.18533851215358832;
    msg.pitch = 0.5145506557863623;
    msg.yaw = 0.1914181912249049;
    msg.rcp_time = 0.37031912167069647;
    msg.sid.assign("JSNICWPTJTAAIKETRUHYNPOWLZPNMOVDBHGQPCFFCRKLCJVFNEGLRCTJLXSWBXKFWKIQYENIYWOEFYVWTCSQMYSVAGGYVBSIWKXQTVVDZLWZAOBYDZUCOFLGKIOWEAJVBRMBMHDK");
    msg.s_type = 24U;

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
    msg.setTimeStamp(0.4466943770449272);
    msg.setSource(45757U);
    msg.setSourceEntity(161U);
    msg.setDestination(42083U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.08351782126870155;
    msg.lon = 0.18260106604715165;
    msg.depth = 0.16338326480134968;
    msg.roll = 0.4818382604910293;
    msg.pitch = 0.7141186657638975;
    msg.yaw = 0.8615881724270037;
    msg.rcp_time = 0.5033387955043702;
    msg.sid.assign("DSWZIMTQQNKIEMTNEOBAYFLSUXMRASMSXHWKVYBFUVEQZQIGPXRWGKMJANIHFYYBJDRGDSKWVQLKEROFPCWVOXWDGUJUYACGOPHMACFKPEVLAOZSCDCLFDQUGKVHAVPEWSHDBULUTTHSORXEVYBFJFTZXYDIUMOTELHHKRUNNTAIXWIMMCZPWYWFZOISD");
    msg.s_type = 20U;

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
    msg.setTimeStamp(0.7909279872603867);
    msg.setSource(32806U);
    msg.setSourceEntity(131U);
    msg.setDestination(12800U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.5619531282356944;
    msg.lon = 0.5881805616700692;
    msg.depth = 0.30703252081561316;
    msg.roll = 0.2784300421073894;
    msg.pitch = 0.4868126511134059;
    msg.yaw = 0.6779401501639535;
    msg.rcp_time = 0.016416336948140042;
    msg.sid.assign("TLKWYLBRQKYSANZASGPSYIFPIGOZMRBLDBVQMUOGLMNDUAUFUVIAYHNKLKGGTLHKNRUGXZFGRSNOLZJVXWECOXICPNXQOBPCQXSBFJYUEGPVDXTBJUDRBQICEROEFHATIYEXFJBVDBPSKDNDHOLYTWMCTLWSWZRUVJJNUCNHKRWGVCWHDPXMAYQTPQMQVQPNTKSJFJMZHWUZGJPD");
    msg.s_type = 86U;

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
    msg.setTimeStamp(0.7602267379661161);
    msg.setSource(8441U);
    msg.setSourceEntity(138U);
    msg.setDestination(21014U);
    msg.setDestinationEntity(78U);
    msg.id.assign("GGPCBHEGNYTIVRVBULUYHHYJODXAKRAJWLPDPCVQSQLQHVZNRUJQFWDTAUDCXTKJUKCQAIHBWAOERSULSCGZOLFXQBYJVIPLFMCRCWHNLYSLWFGAGAGEIMVTZOZZXONWJKEZKIFOWBAFNODXSHINQPPEGETTPMHSBBEPVWNDXDOMNKWEUIQUMZYYAFRCBITXLXIVZSEKTZYMPMVQ");
    msg.sensor_class.assign("VTVSTJDVFTBWBMJUZDCYOHFGLRKWCFDPTLAUHPOMGEFYUTSIYKQDOGAEARSEJLRUIVKEABZDUZIYNPINQTPFAVCMSWMMAIOHLSXWVUHBZNGVSXTCSRCJJFPRAKXRWKPJUYWHEGMWKQVHCMQIGVOKJOQDHXXZPTPUXB");
    msg.lat = 0.9441654803591453;
    msg.lon = 0.8561610088767547;
    msg.alt = 0.31677225776428486;
    msg.heading = 0.9906526308099322;
    msg.data.assign("GTZCOFSPOXZWKQLBXRPUFEKYNSGQRDWLNSPHKUMJDEFFRYDBEMOOQWDCTAWCZOVKOGOQQIXCCHENVGBTGSAAQCVLXZFLLSBVVPJAKWFFMGLSIGLXQSUHTUSGMYELJPNUMCMTEKZCUNNIACPVIBRYDOTHZEWBYQISNZDRQVYKGXWOUJIYXFJTIKXTIRNVNKBXHEPDFACYZADPZIQNDLDPVGRWRBMYBIXABWEFLYHAJMT");

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
    msg.setTimeStamp(0.42936694381091756);
    msg.setSource(10387U);
    msg.setSourceEntity(50U);
    msg.setDestination(39851U);
    msg.setDestinationEntity(117U);
    msg.id.assign("KNLCGTLUNRZNUBZJPDQZAIDDLZKJIEOQDVGUJUHNWDTWAIHKNWSAFSSZOJMSBPJDVSEZVXPSITJGLWKIZGFXTZPGIJCBYHRYGPKSIZXEAABYYNVHMLDPMUFGJRYQOQORHREFECMMGEVUFXHLXCFCOBCFMLJAYKPQKAOLPWIOKWVESMNBHFYMCQMZTEEROHXSPAVGNBFAYRRRQVIKWCFWQRPBTOTNCXHTYBYCJDUUTKHWTEQUIVABULM");
    msg.sensor_class.assign("KGYBLMPFRWJQLUROTNSOXVCFWDQOOKIAXIFKZYPLQWPWGHTAOVUDBXCRCQYPUBFIYENARAPAUCLTJSOSSGVXPFBDAJZRBVJFLNFUHRTVXAZB");
    msg.lat = 0.6337275989417268;
    msg.lon = 0.6548832634043036;
    msg.alt = 0.025772373678308313;
    msg.heading = 0.8861990914610735;
    msg.data.assign("KZXAHRKFEKLFMEMYBDDBRRSQRZUQBUCHZIYXEZRTMQTDIHDYDBVKTQEBREUOODLSWDAMAWPJQFDIOWWAXPQVFPIMHLVNONLZXPPAGPUJ");

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
    msg.setTimeStamp(0.4066797098055994);
    msg.setSource(8386U);
    msg.setSourceEntity(113U);
    msg.setDestination(41896U);
    msg.setDestinationEntity(17U);
    msg.id.assign("UYDBWKUHXBCTUOLICZV");
    msg.sensor_class.assign("RTVVDFKPZXQJRVLIPQFA");
    msg.lat = 0.2902217980117078;
    msg.lon = 0.5657113553708314;
    msg.alt = 0.9128712109951923;
    msg.heading = 0.16421060983339986;
    msg.data.assign("JHIGSCSMIANDMOGXKHZQANDDZMVEYDWBUPEWGJYDT");

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
    msg.setTimeStamp(0.4673949380373733);
    msg.setSource(28574U);
    msg.setSourceEntity(247U);
    msg.setDestination(60657U);
    msg.setDestinationEntity(58U);
    msg.id.assign("BVCRDEFAEHJQCETPBZAUCGKCALJIHPSSOWUXQJOSUDMKLWZIXLUUIKSRJROQOLPVWGNWVMZRFYMVDUMQFBJHYCDVMHRTVQCEPRYNSYHJMENLDEIBRRDWLHXHSMPFZDH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PHWIKNJKMZTRLIWWGRYXXYWTOLOFF");
    tmp_msg_0.feature_type = 181U;
    tmp_msg_0.rgb_red = 249U;
    tmp_msg_0.rgb_green = 191U;
    tmp_msg_0.rgb_blue = 146U;
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
    msg.setTimeStamp(0.5624135726682231);
    msg.setSource(60730U);
    msg.setSourceEntity(244U);
    msg.setDestination(56960U);
    msg.setDestinationEntity(110U);
    msg.id.assign("DCYHKBEMHETBTPEGAOOKCMWHUWWPDHETIDLBDXXPXIRXTJSIXXFDJCNCLIWRYORGQTZAWTBEAZGRSDEHFFOJFTHDQDDYXQPUOLEQQNUOYSNNYKGVIYJILOYLFPZUYORSFLRAREXLGJTMYZJDGJNMHBIRXIELMPBJCIZMWZQUVGKCKNMMGZCWRKBIRKBQPUJSLATVTUYSAOVVFKVKZWBFCNP");

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
    msg.setTimeStamp(0.10302833439964754);
    msg.setSource(65497U);
    msg.setSourceEntity(246U);
    msg.setDestination(23044U);
    msg.setDestinationEntity(27U);
    msg.id.assign("BXFVYQUBPWXQKRNNAUMMUWZLQYZANNIOGBTTICGFHPKITOXJGSPHCCKLSMGVWABQZEPFDQOMMEKEODDRYFBUDTPVUNZSRLBIZWKCLJWGHRJZUJPOEDAHZJNQEHGUDYEVMJWHLFBOHHELKGIFTWNFSZQJSWABNDZRATVCIRMIPICGSXGAVMVXFWPYJNTJVCHSXOXQMKAVKXCTHCDFPURBNCIEATFKYWVEPLXOSEQOJLYDASRSYDBUXMZYIOG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AXVPEVOOUXQRDLYUVTNSUD");
    tmp_msg_0.feature_type = 213U;
    tmp_msg_0.rgb_red = 118U;
    tmp_msg_0.rgb_green = 108U;
    tmp_msg_0.rgb_blue = 168U;
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
    msg.setTimeStamp(0.9722137704025526);
    msg.setSource(2305U);
    msg.setSourceEntity(80U);
    msg.setDestination(1410U);
    msg.setDestinationEntity(165U);
    msg.id.assign("FVXMEFZYKBWAKISRJPCCTGITPBRRNYOIVXEVLZJFIGEYLLSZNDAOULOVPAXKXVWGHXVXESKYZJBUBMWFITMIUOWCPLUPSIPDAHDDTWMQFTMANEMCTXRCBDKRRVHKBCFPCJGUJQYWYETXGZDFRRGGQGWZ");
    msg.feature_type = 74U;
    msg.rgb_red = 194U;
    msg.rgb_green = 100U;
    msg.rgb_blue = 241U;

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
    msg.setTimeStamp(0.8234194650904202);
    msg.setSource(54688U);
    msg.setSourceEntity(72U);
    msg.setDestination(45397U);
    msg.setDestinationEntity(249U);
    msg.id.assign("OZJJTNIQQSPBXSKZPDYKCUFMKQVHENNFROOVCFAXREUXLJTLHYPFGGBUXMYJGTVKPQJWJMXBOTOAERCFPFE");
    msg.feature_type = 12U;
    msg.rgb_red = 2U;
    msg.rgb_green = 31U;
    msg.rgb_blue = 2U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5142653255467786;
    tmp_msg_0.lon = 0.4111321122828211;
    tmp_msg_0.alt = 0.05367342728691338;
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
    msg.setTimeStamp(0.30315080523644855);
    msg.setSource(45981U);
    msg.setSourceEntity(176U);
    msg.setDestination(45642U);
    msg.setDestinationEntity(37U);
    msg.id.assign("GAYZVXQQOLTCZGMZRFOLLIGPJBWWTZGQALBIMWETHKVPJNCPOHNGPLEWRFCAAORPJMDDE");
    msg.feature_type = 53U;
    msg.rgb_red = 145U;
    msg.rgb_green = 129U;
    msg.rgb_blue = 173U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.542475144098043;
    tmp_msg_0.lon = 0.8676010033865879;
    tmp_msg_0.alt = 0.11898918031092987;
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
    msg.setTimeStamp(0.7008883928684971);
    msg.setSource(65316U);
    msg.setSourceEntity(103U);
    msg.setDestination(48409U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.24110288150664128;
    msg.lon = 0.9859968877475292;
    msg.alt = 0.590945159657312;

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
    msg.setTimeStamp(0.6712116034291702);
    msg.setSource(60200U);
    msg.setSourceEntity(121U);
    msg.setDestination(36499U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.6467426185218543;
    msg.lon = 0.9513223559949165;
    msg.alt = 0.49735993247608545;

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
    msg.setTimeStamp(0.5279332181853007);
    msg.setSource(38946U);
    msg.setSourceEntity(63U);
    msg.setDestination(48754U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.18834592188098864;
    msg.lon = 0.06287891419797087;
    msg.alt = 0.7786529770166913;

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
    msg.setTimeStamp(0.9761350517064042);
    msg.setSource(52843U);
    msg.setSourceEntity(16U);
    msg.setDestination(42238U);
    msg.setDestinationEntity(59U);
    msg.type = 145U;
    msg.id.assign("YENQTTLXBVAWKYNSPEZWVCFMVLDHZPDRGOALPOKVDCWZGIGTMHBMMACSSQJWTOFCFOMRRFEPLUUJITMBXLENJWYHOSHXIHYOSYSPLTOVQGSJLFNNJIRRIEIKSIACKTGHLXKYHTTKEWTQFDQRGPZNDUFYCCJZDXLXCMURVVXWJBBNZDMRUKDZABEUUWMOGZIBJEVWLAREBIHAPYCZNGPZPGAKJVDVQUBIXFQOHRQQMFQYHPKXAUWKJUCNYDA");
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 4872U;
    tmp_msg_0.sys_dst.assign("EQKXUBDHVOYWJTNINDOADARYIDHUFCUVNFKWLIVLDNSJFJTDCQYNKVMERQEXAP");
    tmp_msg_0.flags = 106U;
    const char tmp_tmp_msg_0_0[] = {46, -111, 49, -55, -92, 126, -51, 118, 31, -6, 60, -74, -8, -70, 106, 6, -10, -87, -112, -116, -111, 72, 119, 123, 37, -19, -57, 112, -6, 16, -33, -82, -7, 59, 68, -92, -101, -121, -9, 9, 23, -73, -113, 36, 74, -58, -123, 124, 16, 11, -13, 46, 98, -20, 9, -114, -113, -36, 56, 39, -17, 107, 18, 48, 15, 23, -49, -14, -19, -67, -10, -72, 35, -65, -125, 90, -34, -10, 48, -18, 125, -83, -25, -33, -101, 66, 88, 115, 49, 9, 39, -69, -128, -47, 2, 16, 43, 118, 92, 17, -85, -10, 3, -4, 117, -93, 89, -116, -80, -16, -122, 33, 84, 5, 49, 12, -30, 41, -76, 44, -27, 113, -53, 116, -75, 13, -68, 21, -101, -16, 30, 76, -50, 47, 120, -51, 61, 11, 121, -100, 70, 74, -96, -49, -13, 80, 29, 79, -33, -74, -115, -66, -78, 16, -60, -105, 43, -32, 83, 49, -125, -109, -50, 90, -14, -118, -73, 95, -75, 54, -5, -5, 93, 120, -25, -59, 67, 17, 27, 49, 94, 112, -110, 50, -52, -44, 36, 29};
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
    msg.setTimeStamp(0.5728581477323703);
    msg.setSource(20130U);
    msg.setSourceEntity(73U);
    msg.setDestination(35945U);
    msg.setDestinationEntity(227U);
    msg.type = 10U;
    msg.id.assign("VTVLNSFRAIQEUMLGHEDJKEPWYKUGNGCJCOMBMIFLOLWZQSHCBAUXZCDXQXNWYNIIBJNVDCJDLMSH");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("BNJOTWWQYFXSPGEMVLHEJOENADYUICOZZOKLSFUOWKDTKILBNCTH");
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
    msg.setTimeStamp(0.4008580737909404);
    msg.setSource(25953U);
    msg.setSourceEntity(44U);
    msg.setDestination(28886U);
    msg.setDestinationEntity(128U);
    msg.type = 17U;
    msg.id.assign("OUMWPGLEKXLNEKBWSGCLHQVOIYAHSWERWENXFKIQPGPGBQEMPAMHXNJDPGDGBVZJQMGMBIBWWNKDRYZISLLCVQSQNVPYKVDCVTBLWETJRXYZOXPIDORZELTKLZUPQAINU");
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("LASXVEMLYSNDJPVOGHOIYCOPCFQSDXOMHAXACYNETKTRPUFBKZBEWATUKLCMVUHVZDJBXUSRAPPIFMILYYQLWWQVFCENSG");
    tmp_tmp_msg_0_0.lat = 0.19199624251553138;
    tmp_tmp_msg_0_0.lon = 0.8409329412777901;
    tmp_tmp_msg_0_0.depth = 0.08524573429398685;
    tmp_tmp_msg_0_0.query_channel = 1U;
    tmp_tmp_msg_0_0.reply_channel = 154U;
    tmp_tmp_msg_0_0.transponder_delay = 11U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.5043790050894905;
    tmp_msg_0.y = 0.22673283635148433;
    tmp_msg_0.var_x = 0.31299349459580306;
    tmp_msg_0.var_y = 0.26666906123690015;
    tmp_msg_0.distance = 0.9532208987479383;
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
    msg.setTimeStamp(0.48735673586558526);
    msg.setSource(21758U);
    msg.setSourceEntity(105U);
    msg.setDestination(3337U);
    msg.setDestinationEntity(196U);
    msg.localname.assign("VRYEJQUSNYXBKIRBOACBHXTBGZZTQZBDFMROKVFPYRIDLNONJDDUKPIPHNAZWEISJIFTNOLYABAOSYSBHUCOLFLKEMJWPEOWBHLQMZCPGTWOHCNMWVXZPFTAJVZWZBUTZVEPSJFKSVRRUEGSLKRDJCWMGSQBYATEXDMFJDOAIIMQKGUHMTYCUKVLAHDPJCIMRTEQUSFUVRRAHXWCDNGNGXQYYLLWQQZJQVPDHKUI");

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
    msg.setTimeStamp(0.5182337946184994);
    msg.setSource(56535U);
    msg.setSourceEntity(205U);
    msg.setDestination(14310U);
    msg.setDestinationEntity(58U);
    msg.localname.assign("BHQKJLVTGZIYFLKIWACDFQAJGOUSSKBZZIJSYRRHIIVNWJCONXHYDNMDEECMPQANLPQAUYJVLFQXLHHXZQOZKRMVKFFAETOVLRLMUGDFCXDSVTOUWDDVIBAXEPGMMARVWEPOCKNMOKJRTBYWEYJOKGOSEZBGBBJHWNFNZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UIMYKRAHGTNIOCLCAVMTJOVSQQUBYIRDGKTBXILPYGTXZHPKRTQWSKDOYPBUILQCNYZGTBORAQSFLELKKZALHUSINYGFQVYVEHBC");
    tmp_msg_0.sys_type = 125U;
    tmp_msg_0.owner = 44159U;
    tmp_msg_0.lat = 0.8184868364109201;
    tmp_msg_0.lon = 0.04038071702038504;
    tmp_msg_0.height = 0.06604713235884585;
    tmp_msg_0.services.assign("NLOPJVUBJYRQRIVIDUEEXPHJYZFFKVZPDROLETUCQCOFOXMAYLXWRXVQHQRL");
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
    msg.setTimeStamp(0.7600287478121899);
    msg.setSource(38736U);
    msg.setSourceEntity(39U);
    msg.setDestination(19275U);
    msg.setDestinationEntity(231U);
    msg.localname.assign("NJPMJIEWHYQF");

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
    msg.setTimeStamp(0.15212587338481376);
    msg.setSource(5211U);
    msg.setSourceEntity(142U);
    msg.setDestination(54431U);
    msg.setDestinationEntity(199U);
    msg.timeline.assign("ACPBWLUYBGBUCMBXFTRYJMYKDAARLSLCBHLFRTEYPEXGMEVKVJWHFFPHFEDQIRUAHEMFTKHARWTGPIZWUTOCAVNLSKCTMDXEPWVHGNOYBNJOJUXHOKREYSSMZZSNSQDUQSGHOLQJIDVTLNRQKJHFPRSZEGLQT");
    msg.predicate.assign("WHYEGNACYELUBJLHUFQLSYBQMMXXZQRNCFZXODYHGSEWIKGUGLWN");
    msg.attributes.assign("RFHRKJMQCNTHOWBRKMPXZAKEPOILHHDFGROBQDEFLNNFSZXVGBEKHUVOYRXCHZUHTSNWWATPCIRHFDKPKFQLEOJXOSLNRSNULYEMGNVNVMGBKAUQAVWGIVJYTQMOHILLLBGKAICUFVTPEQPASTIVOHGSOJDWIQCMNEYNUXBIYDUKBTJAGSGRTIJJVYEJBLWSXXCZWJYSMZEMDSWPZFMAQOXYRBBT");

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
    msg.setTimeStamp(0.6716569012480356);
    msg.setSource(22313U);
    msg.setSourceEntity(155U);
    msg.setDestination(11441U);
    msg.setDestinationEntity(201U);
    msg.timeline.assign("SRRMSQDNQPFGXCOLGNVIGVTNNDLQEPURWEJYYYLAJVAVAWRSAEPKEOKQBQSFCJGTXPLCWZNINMSFVCCMOOXIWNZRZAJLMRMUBVZJKMCGKAMUXBRDPWDPYQVTGQIYSWEXTKFUTHBMRPDHYJUHABKUWAOCXLQVOAUJGLFQJHXUDUYKFDTZYTRZNNLLXFSPH");
    msg.predicate.assign("UZJSCAKTBIYUPFDPTXYNKERYOOJYHQYCZIHIJBRTAUOVUNWWANXLSSTHMXIIEFPBSZLQPSZRFASEQFHBZLLDLWURDVWXALJBGTJRSWNPJGWVVEYJPMDOTUETFCHAHTKFCEVYKHLMZDSRLCONUEVYVJFDDMFZQXCPNEOGUTKPHXDWBYDWCKIJCQSZIBBXXQLORFBWPNUYQGOTHGGKACHXRMZAESK");
    msg.attributes.assign("FCGQYRLTJFGWEJKESHICPNSIJPBE");

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
    msg.setTimeStamp(0.17171870762692498);
    msg.setSource(58506U);
    msg.setSourceEntity(91U);
    msg.setDestination(39924U);
    msg.setDestinationEntity(90U);
    msg.timeline.assign("QXTECLHIKJEYJIUOUYBKETVTCRTLZNKMQLLDFVPXDJQMX");
    msg.predicate.assign("OCHZFCMQSCPLSABYJEEUKCBX");
    msg.attributes.assign("KDJPZLTUVLNBMLKXZQNOAPA");

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
    msg.setTimeStamp(0.4695123819708471);
    msg.setSource(54650U);
    msg.setSourceEntity(38U);
    msg.setDestination(26704U);
    msg.setDestinationEntity(204U);
    msg.command = 247U;
    msg.goal_id.assign("JYBIPTVZMCLDTMGNKWRIZCTVUDENOSJWLDTDJZREHSCJFGLSOUQKUDYYYKGYTQ");
    msg.goal_xml.assign("IINFVGBPPJRUDKEJJYWEOMWRTHJIOCGJXOMZRDLHAATJTKXLZNVMKFQHALMIKLIKWDYNXDLYTZGFSNSMDDPLAHXXKICAUZZXHWHPNDQQQRMBFWFAPGSVARMKSZEUXPDLAYATVWSYWTZORFSEUGNPOIYCRYFKOJYQWNGCUDXOZJKUBJYADMIBQUMKPSVYVLBOCQETCNVVERBOLOEBUQE");

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
    msg.setTimeStamp(0.5974826129119223);
    msg.setSource(45804U);
    msg.setSourceEntity(29U);
    msg.setDestination(63272U);
    msg.setDestinationEntity(71U);
    msg.command = 27U;
    msg.goal_id.assign("BYHBVDVVLDSTWOSPKNFQGMLHEEXIINMRGKWUTFBRPEUMJRLGBYANITZMCNDSGUOZYEUKNSWUAJTTJQXUKNMJFFHJJATTXLGBCMTBRCLOVIRBCIUZEQK");
    msg.goal_xml.assign("UNZIZRZKUAIQKRGDIZXGCQFQVBHAWYMTMDEOBSEMHICMDHMRTATCZNWJAANDNNONLHUFTLCRSIXTGEEKCLOISEBEGJGAXVHOOLJDCIKDQHCVPYHVPWXBJSPAQAJCMXYXQPUJXOQGIMYFWPOVMRPGFAEEODLBJSUGWYKFNJNVLVFUBTRKLWWKKYVZGBFXFTXHTNSTEWEQIWRYCSZBBYDNQU");

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
    msg.setTimeStamp(0.4105636947477883);
    msg.setSource(62439U);
    msg.setSourceEntity(115U);
    msg.setDestination(53235U);
    msg.setDestinationEntity(87U);
    msg.command = 53U;
    msg.goal_id.assign("CHKYEDQHJTFTVWLDABUBSZWPISCXEAZKPUMVVXFVQHTPYMAGQQNEXSGCVPJCNJXRBLRBGULKAVDEINZTOFILRBFIIAMFUSLZOJMIZLRPDPSXV");
    msg.goal_xml.assign("EMPOELOLBNLPGORPOKREIOZWAYRLPKFGQFVLMSZQJZDVWFBYAHDLCBFTTIMLIAZYAUTTCSDZVJEPSASQXOBIPXVNYBHSCMVIMDMREZNZBTEVWJHXXUQMXXJKGBNWEVJXJZTGUNOVHNUXPOWNOAEYTQDPDQSGFKFWDCHWQZYRYQUGDTJBUBZYBFKJARKRMACUHHRPMCSCUADNLULYTLPGKSUHWEIGXIWOIIGSHCCFCDKSWFGQKQNJEVMIRH");

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
    msg.setTimeStamp(0.22447220391328027);
    msg.setSource(64237U);
    msg.setSourceEntity(143U);
    msg.setDestination(59652U);
    msg.setDestinationEntity(44U);
    msg.op = 112U;
    msg.goal_id.assign("IQPVEDIXTIRYOEJDLPGSERUHNAKUTWSMAHXSHZOMEJPPLIFZHNMQDJHYLNEYBBTPFKFTHYBUCNVNXHBXRBCXIAPUILWSBCJWOUTQRZCPREBKWIDUBKPKIGNSUIRQWANFWJLVMOMPIDLQFHQDUFOMGXSCRFBSZLWUFOTVGHEYRAZWBYYWVXTVLOLGWEQDJCSSVKJOEGTFOSJARJZKNDDCXOVTNHNMPAYVC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MFOSQBHYDWMYNFWOSTFREXJMKLWMFDIYBORMDISGPKBLWKPJUEISAGBHCGGMZRICKABCRDHZVRPBNGTJKTNFXLXVCLUTASNTZEHRHOHKYJULDUNVZNQMGZPETBWFDUALXVDSQXRXNQCBUDEIPIMAYUPVSQBCLPVGAKIEEYEVUZWYQZJKAXYLZQRUGBADIJJSVHCMP");
    tmp_msg_0.predicate.assign("BDGYJOLUCGELXUMRWTWQXJJUAM");
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
    msg.setTimeStamp(0.9432748192977378);
    msg.setSource(27041U);
    msg.setSourceEntity(119U);
    msg.setDestination(20222U);
    msg.setDestinationEntity(252U);
    msg.op = 65U;
    msg.goal_id.assign("RPCEBPBSZPGNQXRJWIJHHYMLBFPWCAWUIRPLVFFBYGRKXOHNEYYZMRRAOZMTUTMKNHAYSEDJLMPXXTUBKALOFOPZQGQZNPKQLTXSIAIFNCWYGGWBXNUSTCEHLTEGCRMEESIBGOQXIJLALAMRKLTVDOIJBUFQNI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JNPPGFRJNOXTPUBWOOHSIZTAKJPQQXAAGJMVD");
    tmp_msg_0.predicate.assign("BDIIFGEOSELHRNEPQHVVMNUDSRMCUCQNABAYKKWSFVEDKSJGWPYWYUDWOVOUWAY");
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
    msg.setTimeStamp(0.09006216088811936);
    msg.setSource(25320U);
    msg.setSourceEntity(172U);
    msg.setDestination(11020U);
    msg.setDestinationEntity(166U);
    msg.op = 34U;
    msg.goal_id.assign("RDMPYLGNOQYEJPPNFQUXJIZPQZXKKOGWVTQYNVBUEMEKWOUSWJUYHBLRBRKCRJSCWYYEEWMXSZAOQVVLHQOUSAFWFMHCVNTBQJMIBAATG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AASIZSRNODQSRQOXEBMXBMTAPGDQAWCPUPDYQJLWENUZRIHVPCAXEMDLBKPASYYWRNHAOVQWUXJZEBRJNLCEXWJLACHYEGCNVSMVNNVKRIPDXUDYAZJFHCNPLFWJFHSHHNLLKMXZXBETJURTVMEPFFUTRYQIWMNFWBKISG");
    tmp_msg_0.predicate.assign("TYZGFZIAUXQHJMIBIP");
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
    msg.setTimeStamp(0.4235546313454678);
    msg.setSource(55146U);
    msg.setSourceEntity(78U);
    msg.setDestination(30483U);
    msg.setDestinationEntity(91U);
    msg.name.assign("XJOQKUNGOTUZZWKWCLFLDLMDNZAQPIYCOMIPCFMRZLEINGWFZLDHWLDBEUQEFOIRXTKX");
    msg.attr_type = 232U;
    msg.min.assign("ICWCIXFKXLVLVFUJOIZETISNEGDGSIMMLQAGEDABYDWLPVMRSHKTQUNMGCMT");
    msg.max.assign("CLFRDFESCKAIOXRPLTGHAVBBKAUUEURUVNINXYJMYBLLXIGJUIUKISEPFMQCDDZMQQGONCKRTCEUTBFBCNWCVJWPRWDGUVTARJTDXKPFYXQBZUZMVWBBDIYOLPJQHFBYETJOHAHZAAVTKKEDAKGCSZYOLYSVSJGNIHXYMGNLPRFIHFNTOOZNOWEATQMZIERWCPDDKCVFYPBQNRSHJJLWSZXAMRNWHQKZWMPHDFQXHLGQTXPEJVM");

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
    msg.setTimeStamp(0.9816487191387673);
    msg.setSource(49654U);
    msg.setSourceEntity(249U);
    msg.setDestination(58703U);
    msg.setDestinationEntity(162U);
    msg.name.assign("NBANSVURXZBWVKLQCGHUETOBANSEZSJLDGSTTWOCJBRSMZDWXDJTLEIRUIGIRFSUEBJBWGVGBKQRBNONKRLHWCIPKIYCTPCGWUIUQEQXFAZRYMCASLLRQZAAOWLFOFTPXFXNGUYITIZBVJHVOIXUEPFDHPMAMYP");
    msg.attr_type = 239U;
    msg.min.assign("LGEZAOWIWFYUUBHIGEQUKZXRELPIDHBIPWAEZETSCOPPNCOECHDYMDBODHPXSNI");
    msg.max.assign("OGMDMALNAHLCANSMTORLJHNXIPCFYQZVUURVRUOXLQSXTJYZVDOHGZLKOWRYDQCEDLROPIHVTZKWJMCYSLEIDBHEXEGGQEPQXGEOMGQSUKVKBSITMTOERMS");

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
    msg.setTimeStamp(0.3298959551030358);
    msg.setSource(824U);
    msg.setSourceEntity(123U);
    msg.setDestination(43716U);
    msg.setDestinationEntity(152U);
    msg.name.assign("WAFRYYZCJMXIDDRKRYLOKPMIJTNDPWRKGTOWEIRJZLUHSKMOFYQHSZRFOOOXDQEVFULZWBKBJWHFPKERWDRBVQTRWEXEPVGHSBNMMZTCKZMOAIFOCJPMIGNVVBPXHAWANIGKHJVZJPCCGKLNUFPSLGGXSVANHETLJYCQLGIKQITFUVFGHLHQXBPNSPBVFMXUR");
    msg.attr_type = 199U;
    msg.min.assign("BTOLWJKHFQIANUIKWCWGQEFMUTAKXNOXCOHDYNYPBXRAVMITPQFJGLSWURLLEBTQZKZTOOQFRULZGSRGOLCECLXFAUEPZEUHOVCXQBPDDSKJNRCOFMV");
    msg.max.assign("NVKHPCGHBLKIRUOMLPLNJBJWAHRSUMXVLAVQOPKFMSQZTHXJHMDDSDJGOKRYYQNPFCLBCTJRUWQWWRGYFCABCEUDESXIATOXQHNHWXTILBBRBJMTNGILIOMYMJFTZUOQTYDMXUESBDCNLQDOFVPEPTNALJWUCXSGZVECIOQKOIZSXRIVVZOKPYJXDKWTHVNEEWRIFKISUAVHDEGPPSYKWJNRBMWZG");

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
    msg.setTimeStamp(0.20923887219450243);
    msg.setSource(33354U);
    msg.setSourceEntity(140U);
    msg.setDestination(4050U);
    msg.setDestinationEntity(158U);
    msg.timeline.assign("NSDGVWJPPWKAMIYMJDXWESGARMGZVNUBTQNUBQWJFMYPODJBMWHAUBLQAZOSIDRSDMIMFANXNWMYLEVSSFGXNFUGOFQPWOZVHAUOIPSCUKY");
    msg.predicate.assign("DODZQDXOQNXVEGTMGHININFEUCLPMGHTAPUSNBWZKVHJITJFYMFZBZQZTSKFICWVQRAHLXZKFPIRHWZDPUYKTXFQLCRVFTUMYRHIORJGSMPBYTCIHBWDQSDKNKSKCSGBRPZDHCVOTPPWCWMWBRYHXUDQOONBKSIVMYODLTJMVUAUXYLGUEPM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZXZIGKYEKBKCLADCSJFIPARYLXYERJUMQTDXMURLXRDPBHRCEXZFKYOSWSNAZVTJUJWWFHIVOWZFSENXKNMAUIIEJOANKSROYOQACCFHOYXEN");
    tmp_msg_0.attr_type = 238U;
    tmp_msg_0.min.assign("SPOVLGBPVZLGRMRSZHEMFXJQKKNGYKMONSOHGEBETJYOQACBUVJBYLSXRKWWRUNXRSAMDFTTLTUUDWRNHIAYJYZJGOCMZROSKEMJAOKLDUYLWOHQAHSIGVICTZDCJPZTKHTNYPZZNPHJBIDVEPKIYTALGMXCDCDLQFISFXMNUABGRYJSIBEPHECBKNXUKIAPQJWPIEWAZVZVWRWYMQVOEVHFQDWUXSA");
    tmp_msg_0.max.assign("OCUFRXRNIOOHITEAWIBNKTRYUYWRMEMKU");
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
    msg.setTimeStamp(0.9549250916146624);
    msg.setSource(34994U);
    msg.setSourceEntity(231U);
    msg.setDestination(16538U);
    msg.setDestinationEntity(247U);
    msg.timeline.assign("KCOMKRYWXDUVTFJLINKGJOJMJHAYEMDTCOEVZGDRIYGLBQRXMHIYLEBFPNNZJYKGSCJXFZXDKXOUFIPGPAZEFQTZNHYTZTLKTRLQKGYPYODHGRBBGW");
    msg.predicate.assign("JTFQYUDIKLJZFETCPVANAUUKUDDFSDHPSWOMVRZGEXMVDWOXXESPRRIJQVUGJXQXXLHMURTMELKQXZCEMJGDALHJBLABWFJQ");

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
    msg.setTimeStamp(0.2448450657186131);
    msg.setSource(17157U);
    msg.setSourceEntity(248U);
    msg.setDestination(20527U);
    msg.setDestinationEntity(84U);
    msg.timeline.assign("XXVWROYPCZIHMTGZNGJCUYWKUJFCSBUVLIPUODNJQFKSERYCNEUOYSZPCKEFRJBBEAILH");
    msg.predicate.assign("KUWZEHNLLJRESOFJXIAWLGHFSJCNBJQCSOOFDTRKZPMJOYYBCDAQDWDJANVGPODGXTHDZOYMKVXLKCWQLNNYRTFBPHZUAUQXNIHPTAXOPIZUVSKVEWGJVAZXNLDVLHRPQETEQFTTBCMMGHFUJPSORDOTBWEXLGD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OYIGVWFDIRUWOTSLBVSXSGQGZPSQPFMKCYMAQSUFHIVGTJLNFZRRVJAVMGKPOKFRMT");
    tmp_msg_0.attr_type = 142U;
    tmp_msg_0.min.assign("XZGCPBMMLJGLXUHKKDIBSRGOAIATMAPZVJIOVCIFHCKJSHBNJVQGPUKBKRRURDFYNVAWTSLMXAXUXWFBYSPWCOUERLBFZODZVKMDCSYPDIHXNAZZMWZJCLWSHCQLFFETPDMVMAXHWLXQOUNYNOOTNYDIENUXKAGYTWFXPDIHZTVGOESUJBLLDQWGFAGGSQKIRBYWHEZHRJJREKPTQBBFESFOVMRGYQJYHNNLUJCENMQ");
    tmp_msg_0.max.assign("VMLBLTSATRICFXAKIQNOYWMUTGFBRFSXEZWAXRUHNCPALRFHXWDLUOJUYSLC");
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
    msg.setTimeStamp(0.7432514707236532);
    msg.setSource(63255U);
    msg.setSourceEntity(235U);
    msg.setDestination(8560U);
    msg.setDestinationEntity(141U);
    msg.reactor.assign("SLXJOACFGGAHGHEYYYYELTSLSKFSORREZQRPDZWPYTHQGLSIHWUKQUNLRPOFJLKOCKZVRIUQVHGMVNJMGZTXLJNXWBUCKBHYQF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JFUKUKWZBTYGSAIQSDUJAZCRNGLSTZXFFTX");
    tmp_msg_0.predicate.assign("GBMMDAZDQKUXASUIWYWBPGLTFBTSVORNOLTXFUUEGYWRSGBYIJXSYPWWFAQQPFHBAMPELGXFWYUQCIYRSTNSUJWHFGAMVUWEPECQZGEIGFCZMYKZQAQRLIRIZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SYDXVASFINTEBPHHUNCNMOSXDLVQGVTIMRLFVAUXYSYSMKWTNDSUKCQTFNJIYRNEHYMXAQRCOGGETGZLBNFVVKGJCUMZLEHPWVWQFICHNZJRHDYIBROAPEBJZXDWQHAKOJHQBDBTPNPEUKSUFUNCEJXSOPKAFOSFPMUOBGJIBZXUYMYWWKEGQPZKQLBFTLPRJJGLARRMFDKAWCZOELAALWMVGOITUGRQRZEWOBHIZDVPTZCI");
    tmp_tmp_msg_0_0.attr_type = 64U;
    tmp_tmp_msg_0_0.min.assign("QBYPOSOLRLMTJDLHXHBTPHQUATWEFZVEJXHPFUUHMDNYHMKDVKJALFUYFROFRYBCNQHDOKVXNNDOAHFWZCHAKAILSBEJJSWMCOMZNJXCJSUBDKWQIVOFEKVXZCQLIWJAVTVTKCNPAWAGUPMWZCGRSRZQWZSJTPYYGNMSSKFXISEOVCXZCBDDYTZN");
    tmp_tmp_msg_0_0.max.assign("OWTRFCCTICQAJMKLNAILKISEHDKMEBWYGBGNNEJCWXUAUMVLEQPXLSYACNXFIBFQNCJZGIQTXQNAWSYYN");
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
    msg.setTimeStamp(0.43946585027975305);
    msg.setSource(45391U);
    msg.setSourceEntity(173U);
    msg.setDestination(48853U);
    msg.setDestinationEntity(102U);
    msg.reactor.assign("VMJUEHBCKWXOTWLUWPRRPSDHJEMKFOLAGDZNFGPRSMTTTNQGDMRCVXIZJFWIBGNAXAALXZBSOIEVPGBLTHGVDSTINMEUKSQEXOFPFXNWQMPYFYTKHPCWKIQJUNNQJWTSPPXLGSZYHHDOOMKZZE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SUVWGHMMGDPCUFQGSTVKPKEJGOCVLTPWIPVLIXJCKOBIRBUSNNHSDEHLXQMDHUVAJUOZRMGBAINWTDMPLJYRIFKYNFKEXRXSXWNXFZLUFJVZXSISZFDJBMTJFAOURWKSAOQCEDPZCRLVMOMCPHHAQTYJAJAPUPXFGUZEBXCITISKINEYNRBLCEWVQKSLGYQGYAQFDBTPYRARZFDKZOZKDHUDWVYTIQTGLNY");
    tmp_msg_0.predicate.assign("QANVGSDUBGQLWMINPLXJJHTVOBRWUUKFJNQLGPFAOESEEJRWGNHMFSADPDDSYBDHHNPZOIHYAYCBVZPRBZJOGTOPFAAFFJIOUMRUIWJNKNPLVBNRODZWDQVYCLYFDHSCGVJUDTIRVYKAMLSMCZAITVQMZTRLFLKCKZBUL");
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
    msg.setTimeStamp(0.36832640671737504);
    msg.setSource(41656U);
    msg.setSourceEntity(115U);
    msg.setDestination(37696U);
    msg.setDestinationEntity(46U);
    msg.reactor.assign("MAXEQIOVQJPKFLBPTIBVOZTAGBTXJXBSLWORCNWPKJERHFSSJNHWOYJCFTQICEZZDYHOYBZOELUWZMGLIMZKKDQPYHFCXTTSRUMZJXHDMYNTXUUCJDHFASXVWCEKMEABSGFILRYRGHRYGMQQCEDXQVWVMKWMVUQVFKXYADYRJWLFBKRIDPAZFDVALCRYXGSNUBGEICNAHFTEQU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DBBZEGWKLGELRQBASHNPYPYCUMMUIIIPTALMVUBBHLFHCIJNPOYHVUXERRKSUFYQDOBRBDMRKGNWGJAWXTZDHEUFXISWYCRZJUNIQMSVMZNBYBGTNYTH");
    tmp_msg_0.predicate.assign("SPSGWAXNUQGZKJVPBHLTGBHRRDDHMDFOYUAXDPWNQZQKKLBACQBYTZJSAPJHINTITBLPJITZRAWNYSKQIF");
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
    msg.setTimeStamp(0.8769107795492783);
    msg.setSource(62970U);
    msg.setSourceEntity(171U);
    msg.setDestination(11672U);
    msg.setDestinationEntity(57U);
    msg.id = 4U;
    msg.width = 19010U;
    msg.height = 11006U;
    msg.widthstep = 53944U;
    msg.channels = 145U;
    msg.depth = 240U;
    msg.finaldata = 57U;
    const char tmp_msg_0[] = {63, -8, 53, -103, 66, -36, 51, 87, 78, 119, 36, 16, -28, 101, 6, 30, -120, -4, -55, 52, -26, -69, -26, -119, -49, 19, -105, -125, -24, 100, 53, 50, 8, -119, 28, -81, 74, 70, -9, -90, -42, 103, -75, -18, 104, 33, -102, 3, -102, -88, 63, -62, -96, 33, 111, 7, 27, -77, -62, 99, 16, -128, -28, -14, 56, 29, 86, -2, 55, -53, -58, 46, 119, 0, -71, -112, -107, -45, 80, 52, 19, -110, -83, 4, -60, 83, -33, 110, 4, -114, -106, -46, -18, 61, -104, -21, 21, 120, 89, -32, -83, 100, -104, 50, -111, 23, 54, 76, -66, -125, 81, -96, -42, -21, -82, -106, -7, 114, -119, 104, 84, 89, 21, 0, 93, -97, 87, -51, 9, 46, -11, -57, -19, -85, 62, 79, 17, -109, -14, -43, -68, -76, 75, 95, 83, 104, 114, -29, 0};
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
    msg.setTimeStamp(0.5747058505392546);
    msg.setSource(62053U);
    msg.setSourceEntity(148U);
    msg.setDestination(5874U);
    msg.setDestinationEntity(49U);
    msg.id = 106U;
    msg.width = 2043U;
    msg.height = 6324U;
    msg.widthstep = 32149U;
    msg.channels = 63U;
    msg.depth = 178U;
    msg.finaldata = 45U;
    const char tmp_msg_0[] = {48, -90, 5, -116, -121, -113, -84, -47, -26, -103, 1, 55, 15, -31, 37, -67, 85, 95, -120, 4, 94, -118, 77, 48, 58, 73, -122, -54, -56, 46, -87, 23, 119, 24, -7, -53, -110, -17, -3, 38, -63, 67, -51, 78, 95, -10, -127, -12, -95, 114, -62, 104, -124, -66, -80, -19, -51, -12, -102, 91, -14, 120, -13, 112, -42, 46, 114, 75, 52, -73, -42, -5, 2, 47, -40, -24, -58, -25, 39, -111, 54, -2, 90, -94, 124, -41, -96, -13, -84, -61, 118, 108, 92, 51, 34, 16, 42, -126, -104, -107, -42, 77, 59, 90, 78, -38, 93, 96, -86, 83, -30};
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
    msg.setTimeStamp(0.7642302045169276);
    msg.setSource(25588U);
    msg.setSourceEntity(107U);
    msg.setDestination(43722U);
    msg.setDestinationEntity(45U);
    msg.id = 107U;
    msg.width = 2577U;
    msg.height = 44099U;
    msg.widthstep = 31585U;
    msg.channels = 188U;
    msg.depth = 83U;
    msg.finaldata = 90U;
    const char tmp_msg_0[] = {-28, 77, 119, 44, -57, 51, 82, 73, 65, -114, -113, -40, -108, -100, 122, 104, 101, 10, -116, 103, -95, 52, 12, 102, -35, -46, 98, 53, 65, 48, -91, 14, 69, 37, 110, -25, -97, 24, -77, -47, -40, 73, -112, 27, -101, -10, 74, -49, 121, -14, 91, -113, -63, -122, 23, 118, -95, 75, 111, 73, -6, 34, -34, 31, 92, -11, -106, -60, 52, 53, -33, 63, 78, 94, 69, 55, 117, -107, -104, 78, -106, -66, 17, -51, 46, -65, 36, -125, 57, -117, -17, 113, -30, -38, -36, -2, 119, -99, 113, 49, -90, 43, -15, 89, 98, 66, -124, -38, -83, 90, 83, -30, -121, -2, -59, 92, 108, 65, 102, -90, 36, 87, -78, -120, -42, -48, -110, 10, 89, 89, -24, -26, 24, 115, -53, -42, 104, 8, 24, 7, -5, -28, 113, -112, -9, 16, -29, -27, -59, 29, 101, 20, 75, -13, -74, -75, -71, -25, -1, -1, 28, -11, -93, 111, 56, -106, 114, 113, 11, 75, -42, 51, 34, 39, -114, -52, -67, -98, -82, 38, 123, 113, -45, 119, 97, 12, 104, -115, 25, 118, 92, 39, -44, 72, 47};
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
    msg.setTimeStamp(0.0462746349321439);
    msg.setSource(50742U);
    msg.setSourceEntity(111U);
    msg.setDestination(39116U);
    msg.setDestinationEntity(197U);
    msg.width = 56632U;
    msg.height = 60545U;
    msg.channels = 196U;
    msg.depth = 150U;
    const char tmp_msg_0[] = {125, -117, -9, 0, -16, -3, -45, -123, 20, -30, -47, 90, 52, -10, -1, 51, -120, 74, 66, 76, 45, 32, -37, 54, 41, -29, -98, 88, 48, -72, 37, -7, 125, -64, 34, -3, -23, 63, -126, -114, 22, -76, -51, 125, -58, -3, -66, -50, 31, 18, -83, -38, 23, 56, -120, 89, 74, -46, -7, -94, 13, -5, -81, -16, -75, -120, 73, 106, -80, 15, 114, 16, -94, 49, 43, -32, 18, -38, -114, -72, -62, 82, 81, 98, -84, 80, -57, -27, 43, -36, -97, -46, 2, -88, 88, -6, 37, 29, -44, -59, -94, 80, -114, 82, -42, 47, -119, 124, 112, 98, 114, 46, -22, 120, -84, -42, 61, 43, -114, -49, -57, 48, -44, 42, -63, -103, 65, -7, 97, 109, -15, 79, -38, 11, 0, -73, 20, -70, 58, -73, 51};
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
    msg.setTimeStamp(0.3487738226777626);
    msg.setSource(51658U);
    msg.setSourceEntity(241U);
    msg.setDestination(12918U);
    msg.setDestinationEntity(44U);
    msg.width = 59994U;
    msg.height = 53130U;
    msg.channels = 73U;
    msg.depth = 223U;
    const char tmp_msg_0[] = {97, -32, 54, 83, 121, -89, -102, 46, -6, 42, 66, 11, -120, -43, -73, 109, 70, 54, -48, -48, -29, -93, -78, 69, 95, 115, -80, 8, 120, -74, -2, -56, -31, -6, -18, -56, 98, 84, -26, 11, -68, -72, -62, -56, 53, -126, -92, 58, 72, -114, -20, 85, -24};
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
    msg.setTimeStamp(0.5895526548029919);
    msg.setSource(63362U);
    msg.setSourceEntity(177U);
    msg.setDestination(28127U);
    msg.setDestinationEntity(87U);
    msg.width = 1591U;
    msg.height = 12529U;
    msg.channels = 220U;
    msg.depth = 219U;
    const char tmp_msg_0[] = {33, -95, -22, -117, 112, 78, 62, -34, -67, 87, -126, -1, -50, -16, 46, 66, 48, 53, 120, -9, 47, -121, 119, 88, 12, 113, -50, -63, 40, 48, 115, -31, -109, 102, 99, 3, -45, 8, -28, -12, -59, 37, 42, -89, 124, 24, -30, -76, -108, -19, 33, 63, 19, 50, 92, 5, 60, 67, 79, -46, -45, -15, -64, 81, 28, -121, -111, 54, -1, -119, 9, 87, 46, 12, 93, -46, 87, 89, -72, -44, 116, 39, -125, -30, -108, -49, 68, 24, 95, -76, -82, -97, 98, 15, 121, 76, 62, 109, -113, 117, -7, -123, 107, -6, -86, -109, 69, 96, -128, -108, -58, -110, -109, -39, 34, -117, 109, -1, -107, -17, 90, 67, 26, 33, 56, -97};
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
    msg.setTimeStamp(0.7143355106063685);
    msg.setSource(50424U);
    msg.setSourceEntity(17U);
    msg.setDestination(11261U);
    msg.setDestinationEntity(103U);
    msg.frameid = 67U;
    const char tmp_msg_0[] = {49, -84, -69, 25, 104, -112, 121, -94, 27, -20, 115, -113, 121, -56, 14, -113, -11, 25, 106, -108, 82, 20};
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
    msg.setTimeStamp(0.6186003193553137);
    msg.setSource(9767U);
    msg.setSourceEntity(175U);
    msg.setDestination(3927U);
    msg.setDestinationEntity(158U);
    msg.frameid = 112U;
    const char tmp_msg_0[] = {117, -97, 112, 39, 86, -73, -34, 84, 52, -49, -40, -13, 8, 111, 64, -111, 104, 113, -107, 89, 33, -98, -93, -78, -57, 60, -12, 110, 107, -112, 79, -4, 110, -12, -44, 64, -92, -66, -86, -70, -122, -71, 69, -43, 1, -98, 123, -21, -25, 16, 102, 17, 88, -54, -39, -103, 84, -113, 83, -24, -8, -112, 36, 46, 105, 111, 40, 119, 118, 35, 78, 32, -60, 34, 116, 115, -45, -108, 117, -74, -93, -75, -78, 30, 76, 36, -46, 11, 55, -63, -4, -54, 38, 40, 52, -113, -116, 86, 53, -8, 41, -85, 115, -29, -70, 117, 107, -75, -106, 79, 104, 13, -33, -120, 65, -30, -122, 33, 92, -77, -96, 80, -122, -42, 107, -54, -36, 41, -72, 105, 108, 118, -85, -76, 110, 109, 109, -32, -10, -126, -52, 114, 96, 82, 65, -2, 10, -17, 81, -80, -7, 98, 44, 63, 98, 28, -20, 16, 38, 112, 95, 9, 34, -14, 106, 16, 10, 60, -115, 48, -64, 67, -9, 116, -51, 78, -66, 76, -87, 84, 94, 35, -51, 45, -15, -126, -71, -39, -49, 75, -118, 117, -15, -62, 72, -89, 107, 113, -84, 99, -51, 12, -113, -94, -99, -9, 105, -14, 12, 96, -47, 117, -47, -8, 116, -61, -2, 62, -7, -97, 94, -23, -108, -118, -40, 9, 19, 14, -109, -126, 84, -71, 89};
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
    msg.setTimeStamp(0.5330855935930557);
    msg.setSource(42208U);
    msg.setSourceEntity(51U);
    msg.setDestination(6184U);
    msg.setDestinationEntity(92U);
    msg.frameid = 244U;
    const char tmp_msg_0[] = {-90, 88, 5, 17, -88, 96, 19, -109, 34, -31, -17, -98, -48, -49, 24, -103, -2, 84, -50, 15, -18, -123, 64, -68, 106, -42, 117, -99, 14, 58, -3, 113, 98, -36, 55, -121, 61, 118, -45, 122, -56, 56, 13, -86, -35, 58, -12, 101, 91, 65, -62, 93, 99, 21, 121, 34, 94, -63, 33, -16, -53, -40, 100, -73, -47, 109, 16, 46, -67, 44, -4, -21, -67, -20, -7, -49, -18, 73, -121, -63, 107, -98, 98, -99, -112, 86, -53, -128, -34, -37, 81, -92, -112, -58, 121, 26, -64, -41, -90, -52, -48, 51, -55, -70, 102, -60, 124, -93, -15, 104, -33, -81, -55, 19, 91, -44, -114, 64, -29, 110, -14, -49, -63, 54, 1, -71, 126, 54, -94, 17, 32, -110, -118, 84, 88, 126, 37, 47, -73, 54, 49, -18, -24, 8, 98, -64, 88, 48, -44, -60, -85, -22, 45, -103, 24, 11, -104, 101, -83, -91, 34, 110, 20, -79, -59, 49, -75, -60, 105, -120, 40, 3, -107, 22, 30, -69, -47, 81, -109, 29, -118, -84, 97, -28, 111, -10, 7, -69, -83, 109, -104, 81, 52, -90, 124, -125, -127, -34, 69, 126, 56, 32, -77, 22, 72, -84, 31, -92, -45, -124, 17, -113, -77, -32, 60, -62, -74, -65, -95, 99, -125, -38, -79};
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
    msg.setTimeStamp(0.8108067146275749);
    msg.setSource(26926U);
    msg.setSourceEntity(36U);
    msg.setDestination(37896U);
    msg.setDestinationEntity(215U);
    msg.fps = 160U;
    msg.quality = 27U;
    msg.reps = 245U;
    msg.tsize = 185U;

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
    msg.setTimeStamp(0.09303326598755368);
    msg.setSource(45179U);
    msg.setSourceEntity(242U);
    msg.setDestination(23829U);
    msg.setDestinationEntity(80U);
    msg.fps = 70U;
    msg.quality = 12U;
    msg.reps = 216U;
    msg.tsize = 228U;

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
    msg.setTimeStamp(0.3168942105190764);
    msg.setSource(16324U);
    msg.setSourceEntity(226U);
    msg.setDestination(26692U);
    msg.setDestinationEntity(59U);
    msg.fps = 63U;
    msg.quality = 213U;
    msg.reps = 83U;
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
    msg.setTimeStamp(0.044186957611219047);
    msg.setSource(46543U);
    msg.setSourceEntity(175U);
    msg.setDestination(12519U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.020417336389875196;
    msg.lon = 0.10557073536398887;
    msg.depth = 236U;
    msg.speed = 0.1699858429784591;
    msg.psi = 0.5173844619706616;

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
    msg.setTimeStamp(0.06216179143897804);
    msg.setSource(52241U);
    msg.setSourceEntity(189U);
    msg.setDestination(25733U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.687985552122598;
    msg.lon = 0.7965226511571203;
    msg.depth = 210U;
    msg.speed = 0.4248301681450274;
    msg.psi = 0.722720318496286;

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
    msg.setTimeStamp(0.9043072051854143);
    msg.setSource(45474U);
    msg.setSourceEntity(86U);
    msg.setDestination(6416U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.05364626322567312;
    msg.lon = 0.7977858184902777;
    msg.depth = 133U;
    msg.speed = 0.362498802487494;
    msg.psi = 0.014110757922338402;

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
    msg.setTimeStamp(0.5771589261241534);
    msg.setSource(54590U);
    msg.setSourceEntity(192U);
    msg.setDestination(51114U);
    msg.setDestinationEntity(113U);
    msg.label.assign("DEWMJVUZVHEQHKSPNVVNPXABINGWMFRCCYACFOUUCMQMZCUFCPKCLZNLMQZHOJYNJLNGJEMNZAGELBPBVYPIXOUHYFDGIWSFIXSGXUXOZPJRVRHJNLTZKHELABYKSMSSIBGSNVILWBITWGJRKQATUADOBDDESRXXDKWKWEVFRYBERHCAPGPEFXDOVFOFNMQTMJZIYSQRWTJXGRQTTWITUSCQYDAFAYKWPPXDKH");
    msg.lat = 0.08221526583657146;
    msg.lon = 0.3583998324904515;
    msg.z = 0.921638781805537;
    msg.z_units = 141U;
    msg.cog = 0.11704926183802733;
    msg.sog = 0.5178485144339379;

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
    msg.setTimeStamp(0.6544324476510098);
    msg.setSource(40253U);
    msg.setSourceEntity(93U);
    msg.setDestination(42463U);
    msg.setDestinationEntity(13U);
    msg.label.assign("USRRHVRMOQCOUPYLGTIJPUXUQZIEXSDEHXIDAECYQHNMCESKDYZFXTMKBDVBSNCWMMIEJCZARJTJLCTGVPWVPHXLTTIHXJRYQUALIUJJOGREMHWEWGBIDFOUKVYBFQLKMSIZGZFMBSCEKHBBOQONPZAYIVTSFWMF");
    msg.lat = 0.2947754137114257;
    msg.lon = 0.3122828801343599;
    msg.z = 0.9860233923377502;
    msg.z_units = 180U;
    msg.cog = 0.7503947437994662;
    msg.sog = 0.29632744886242524;

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
    msg.setTimeStamp(0.21611903648847275);
    msg.setSource(39533U);
    msg.setSourceEntity(49U);
    msg.setDestination(51829U);
    msg.setDestinationEntity(1U);
    msg.label.assign("PELVGMBLNWCYFBFSONRIEREDJENVVSFWUPTGOTEGDHCGJVZJZPXUKJEQETATGFAQNKZRMYRSGBMYHZVHRXZEFPZQGMIWZMKSXIAHBKOWSYBYRWWLWCIRTTHUHNMABDLFIUPADDETUIPPBUANKXXPGILSXQOHXUKATALJRKCODQCXWUQZOAPWJBICOVWNGZVBDFCQLUHYYDDORSTIRHQXOMVPDYNL");
    msg.lat = 0.1590014109369673;
    msg.lon = 0.19322227784315615;
    msg.z = 0.2130956209310283;
    msg.z_units = 99U;
    msg.cog = 0.2316446460873932;
    msg.sog = 0.9636175655783373;

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
    msg.setTimeStamp(0.11069921025917506);
    msg.setSource(22888U);
    msg.setSourceEntity(189U);
    msg.setDestination(28614U);
    msg.setDestinationEntity(127U);
    msg.name.assign("PXOISDCPEBEVDVKMGGUPBKBBRDVNKMTBINHCEMTRUZGLSQVJAOTVVXHOCYXJNQLESWKAPYGCPLKWYIHJLGUHRZKATLJJFWWEGYLTRDOUIHFMSBRMDVMLPSFUOCHBWKZZXNWLWKABFOGEO");
    msg.value.assign("YSFPWVSDGTNGNOVHWRHBRDWBABDVLHQPAUXRYMYHZETUUDUZWGJATXKKMMCSJDCEFUDQXMPFTUWJJZTFWCNXKSQJEBCSPKEDNIRBFYMKHJMHUNCOIKJLLKGSZIPNCQSVPTWQLACIZMJVWZGPYBJQNAOIVROTVBOZQIKAIXDNIZQUSTZQXHARGCIXVOFHFGPYWVCLMS");

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
    msg.setTimeStamp(0.9181587017334442);
    msg.setSource(50670U);
    msg.setSourceEntity(224U);
    msg.setDestination(23700U);
    msg.setDestinationEntity(240U);
    msg.name.assign("NPPGPXNKBXSAYPGQNOZXHISHLTPXKVYMMQRZNLNZTSJFUUAYBWVSYVSFRMGHQOCHKWZCYMFROTJKPUIBJWJBOQIDYX");
    msg.value.assign("LOGVWDCTEXIAIGDSHLZBPPITEMVNXPJMXZRDCZKDXRLSJIVJCSJVPDHECROAZEXBPFFSOCZAVWRERFLDCBLQBSTVSNFYJSGNVQQNMDTNGWKLEPMWZUMYQANCKYOXRZUPTTIHOT");

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
    msg.setTimeStamp(0.13474767476942973);
    msg.setSource(50122U);
    msg.setSourceEntity(87U);
    msg.setDestination(11100U);
    msg.setDestinationEntity(110U);
    msg.name.assign("VYQTOIHRGZNUQVAELYOKIDIKLCYBSEQDTAVBXDEOHTSJGCNFQFEPPAUZOICXTMCWYCYWUGLQZPIRMQERPEZWHPWIRZBJNHEMJMELCCKLSFGRLNFNKMKBNKWSUFXBRNZPMKSAYAYJIPJZVBBBGLAZDFGAWTHOYYPDVOTNJKSAXMQTFBUJJLIOXUDWHFRPWKTWQOOVBHHWVGSDQCS");
    msg.value.assign("GGSMKJPRZEZOYNIZWHHTRHXCQLSIUKRJEKYMWWRXSXOMLKWTCMYBPOTGKXQIODXHJLLQPQTOXPMYEVEIEKLNHXQASDNJNQCJJLFPZVZAUDRDJVFVLSDXRDBWYJVQRRDAJUCHTHGVGWKXDWAUNCNMSCBRGMFMPZKYENMVTPAFPKINOYOABLFOFVGVBARWUYSHLUACBD");

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
    msg.setTimeStamp(0.14530528281936295);
    msg.setSource(30376U);
    msg.setSourceEntity(239U);
    msg.setDestination(27420U);
    msg.setDestinationEntity(252U);
    msg.name.assign("AFXDDCWANTVWUFJRIIEQZZFJENMGHAYRQSHSZQGDNEHCKYYRFPJZLMKGSJYZSOUPXPBRBDOEQVNORQFXOBCWUOSOTTJWHGWUXKIFOLXGDDLRDSBGGZRHIGFWJLUJLBWGTWQMNRLMVECFAAHLXVLYZCAIKISUXIMUEQDMYPVQEYEHAZVICHCVSENPMKBYBYHPVKKJWNPMGWXJBRIXOYKQSPUUAHOSATTDCXNACTUMBFZPEFBVDNNKQVKPZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FVTRWICZWVFRBKVBPOTAPAPQRNABIIXHHQSXDDTOYLEALDCRNVBCLMRLSQFVIJEJOXCEEFUMDUNOTBKXVASJZQRABVKZSZJHULDSVJHWIIJZVRGWGOXZQCOYQUDIGFKRNJNLXDTKFGGETPLESEXYDTYHHQWKUFMWYLTWJMZKFAMMBTANUMCXIHMSWZCIOFPQSNQYOKWYGEPGE");
    tmp_msg_0.value.assign("MSJDPTZRMJLWCIXAOPNRROKYSLA");
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
    msg.setTimeStamp(0.25875696780355295);
    msg.setSource(34357U);
    msg.setSourceEntity(246U);
    msg.setDestination(41957U);
    msg.setDestinationEntity(204U);
    msg.name.assign("STQFYPCJVJZPGMEFIPCKNYQJRNFAUDHCZWWNTRGWVZDDEJCVTGIFXVLVGOMYMX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WCHUCWONZLTVACBFAEWTMWYBJDKHQFKNVDCDJQDSMJDPSJOEHQAXUVUGQMLKEQEOSNOOKLFLKOUXUNBRPBAIYDICMTVOPYUYNJKBFEJHGBXTNIMZMHGMGLIVDLZJGJGTONKRLMFTEPUQWCKRXPSEXYGWAVQLDRFQSRHZPGYJVQLOZDTHMIVNOXEPZYTPNFTXWGBSCEHAAWRADTZARIWZKXRUQSIPIUSGZRBSACNRHEZCXYFLIWBSFIUXVYKF");
    tmp_msg_0.value.assign("KQIXALXOESHUHZAHXPZCVWJDVBVIVAOEQEDUBZRHDBHUETTGJPCQBWLUWCGARMDAEOUWAOGQZTVNJNJDZXJADUHDSUYAVKLRDZGKNIYRGQGLFSRXNMUOFCGWJCSFKWFFQLYBSFPNVPDIOZGQKZPMKVIUQMUYTRHLRZXLNXSQRPTLTYXJEMWXORENPMYSFTEOCQYNCLWMCDBYNFJHWJAPMIH");
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
    msg.setTimeStamp(0.24502737140300423);
    msg.setSource(14565U);
    msg.setSourceEntity(208U);
    msg.setDestination(49913U);
    msg.setDestinationEntity(83U);
    msg.name.assign("KSPMYSRQOWHEXEZWTQGNPBFECCPBSDGAEIHUINPUXCLJVTVYDWKFRQKQDMJKLQTQMZZOVINWSYQYPTMJFBGUOGSHKUVSLAEIHHQZSLCLPLORZXFEHKZYCKJTZJXFSWONUHJRNTWAAUAXFGJZHOEDNXYBPTD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DXVIYNLRZQKHJDVCINIWYQZXKYASAQPHVYQMFDKSUNNJLPVCGWJLPGUNLMHYRWRIQAGRFOMUFANWBBOUTRLOXLCDNGYEZSSUYIHOXSQMCOIRKMEEERTHMPQJEHYIZKNXCAKBWGDETOWYFWFOGHAXVDEZXEZXLBAMUOFAZQTGQRPHUCMJJJXDIUL");
    tmp_msg_0.value.assign("ZAGXQLMJAPGIZDWOIQJIATLFHVPKGTRHQWUJVTXRMFDHFLPQHMMDDMLBUEORROLBUIEUNYQLEQWCVLWIANOPXWYBWTEXUKIFIDKESSNMSJZPVBAISJBVXUICYPGKQHHZJCPYBXQXOFEBMHKNFSZGAUXOAZNHDYRYTATYTDKVKRZTGXEKJTNHCURVLSXDCNSKYWPZRVNFOCESSFGEAUODCAPPCBTOGBRIUWDOQFCQGJVZWY");
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
    msg.setTimeStamp(0.9510487288227164);
    msg.setSource(17012U);
    msg.setSourceEntity(101U);
    msg.setDestination(1870U);
    msg.setDestinationEntity(229U);
    msg.name.assign("PJASYEFNVVDZTYVJQGNGYRSBJCVLRDBXDWPXTPOZRTERZXCAOPGEBWCHXGSIQIMMICNHJHNPXDMAJFAVZTDWKOYMQMHFLGVDTFRCSIYLGSQYIXHAWWPUEQSQMQEFWZCUOKGUHCGAVSPAWPXBNHKRRYEIWTOAUTXJUMNCSRZEKWIGKAJONYWYOFBIBLQMENDSSBZ");
    msg.visibility.assign("YEIXKYQZXIINVLAATPCJLWPEKUDDSUFCAHMNMOCNPTBRVIWHXFGWYLOZUEALSK");
    msg.scope.assign("MZWLLTDXHHVAXTMJMFDCSSGNMSNEMCTQITRDMKBBZRPFJUPRPZYUJXZPKMQBGTRPUFOPBWUNHTUACLEOBFMKVDJZVAEVUSQPIJFHCNVNEGYXOUZNOYEDQWGVHRRWDIAECDKNSSDOLBFZHQKOKFFFURWEAKCWLOGKEOSQCTULXCGBPMADRJBLLKRWOHQYDEIFZYXGUXNLMGCSYNLWZTVAJSCBET");

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
    msg.setTimeStamp(0.5197526971719721);
    msg.setSource(29582U);
    msg.setSourceEntity(163U);
    msg.setDestination(38044U);
    msg.setDestinationEntity(52U);
    msg.name.assign("DZZFPDFSGVUDSYXJIPGCXSZNPVSQNDPEOXNRJOELBBEICVGMEZTUVPKDKQOQUGQXCWKYIHBTFSLWRLQJRNZYRAJEYSTPWAAABWHHDEAAELMQFGORZBVIXOBRYNZCGBOKXIICRDQQAHYTSFTEGUJJKUSFJVACVDPWWTLGLFNNFFOJTJVYDSPCMSCQKRQWHBMTNLHMVMUXUXXEBUDLMLZLFOZRXATWMKHOGTVIMPKHHBKJKROZEIYM");
    msg.visibility.assign("NLFDGXTCAKMUHRPERSXOYAWUTOYLTHNZFZWJZJNVOYGEQUZQXTQWISNQPSEHEWYDHIWMRMOAKYBNIXAWPLKWAOSPOQKIRABBMMSJLBGTJJAURGDTPBIISYCKNOVGMNBJLWJVYKHHZRMSDCXPMKAVSCMOMYIXNVQLSDUNVQLYQPTGJRECIZFDXNKDGZCCUPFEZVFVKXIQRHFQFZXDCRDTJBH");
    msg.scope.assign("ZYGUCUEBTUCGGMYTRWIKOOJCQORMJDMKKAHUCWHSMTNQUPLRHHCSIKNBATFQWMTSLYGPHOMXYNBVIHDFRNPQZTGWZXWPKXZNLRLQDIWARNTYXBGJWEVYSIZOBWSFTDJFJPNIKXNIIMKKMPSOJHTNBNRCSLKEZSGLFUAXVR");

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
    msg.setTimeStamp(0.4893707066991334);
    msg.setSource(2117U);
    msg.setSourceEntity(86U);
    msg.setDestination(55365U);
    msg.setDestinationEntity(80U);
    msg.name.assign("CLKRDKYLFSQBEBTRXMWFOFJEKKRSHABJCAPMGTXPXNDLYQGQIKWQXGWMQTIMNYEZLGNJUBAUILFBFNLFAKNHBMFMGOYICSNSMVJWAZOQRXRSDNRISESWAZUHHOIGPUXYWWUABDJXUNHKVSVBDCNHQDDELFWJSTOEGRHEEZQZUMFD");
    msg.visibility.assign("EYIVPBNFNWKYWRFUPOXKZKWUURCAMSYQWZLOIAZEQNUYAPZEOPUZRTKAHVCIMHZNGZOTJWXJIHGHFJDQIICNVWBAOJSFEWFPJQWRNCNIJYMRFMTLDFLTVQESQSEDGGDSCQPGZRBAGJXQJLOMYSLBEDMVJKHOJDTSESLXYOTYDUIOUPNVKFGGHHKCXGTMBRAQNHKKLZLUBSMOLQBBHTCCEVVXUSMRDARBARVBACYDPPPEWDMIUXXLHCYTKIXGZ");
    msg.scope.assign("FZHAEJJCUGVAPRDQZJUPMHREGNZCBNZTMVPFBJGEPWKVYNPROQELRIFHIHEXOFQWWRBUWYTIKLCNUKSUIOYEIJKLGFTNBVLCCUYGIRVPKIRSZDIZXU");

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
    msg.setTimeStamp(0.2857057006174133);
    msg.setSource(30144U);
    msg.setSourceEntity(234U);
    msg.setDestination(26056U);
    msg.setDestinationEntity(0U);
    msg.name.assign("ZTCJLRVXPMPLDFQKOVMAIVCEJSKDWXHDIQIIQNTSWLIOFBGGSNTDEGBWUUDYMFUPCYJCZMXQIJKVZHJAOWBZAAFNANHWSDLRFHRXUWEXVGB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BYIFGPBLCGWAGSRJSRNUJLPLJWGFKMXNDGVJOCBZLOEXPVHZTDDHAZWSYEUUTUHCYGEHTOZZGJDFSNHFXBDRFPXXMQLPMNYOIDVVLDCHIQLBIUERZECJXDWQIQC");
    tmp_msg_0.value.assign("KNABCLRTAHQTNGIPLLZLUZQDJTSTRIFOPCHBDYZNSZGDRZWUOQJZEDQYIQLXVBYEFFWXCAIYUNGMWOVVVICJIKWSBUFNDYHVKNJYERKMLLRMTHOEABHGXPTECWQSUUAOMPDPRVRFQJMZXAOZSYZGQAMCNIPXJWXJTBWVXBASBUFR");
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
    msg.setTimeStamp(0.48258295848111765);
    msg.setSource(54674U);
    msg.setSourceEntity(225U);
    msg.setDestination(12039U);
    msg.setDestinationEntity(18U);
    msg.name.assign("IILDRQETZGGNXHEWQHDJKRXTJXLYBNQMGAEXIYDFLROHSIXKNBHMZZSACUZTBPHUZVAVXHFGTEGEPIDOUHTCMAZHULULMQCOOYJSQBUQRYIUYXNLGJWBSLVQMWMOUIWTPVTALFCRWLFXAENAIFHSJPLAEDOQVZSCMOIBREQCKCYJSPCBKPWBNTENXUJGSIATZVRFNCMWVWFPNGKFJYPNBYHDWFVDCFPTRXKBVJGRWOAPOOMKSYEZDJSYK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NNKUDUGDAGZHZMCYUAUBYCFTDBJIJWPVMHCPVJGIUKFZMXRXEZGLHATUTNLNNJQSQQOMGVXNEGKOYQZBRIDGMBOFAFENIKZQHDGWOTBTNIVPDKRLAOXOHPRXZSUJESHWPMSVLYOYVXWXXUPYYELPSNHWFZWDCZRORGGMPLJFRQJJCYUFDKWIJQTET");
    tmp_msg_0.value.assign("ZXCXOWTTLMQOUNKELRHGUYNDAAYEOXDSNEMAMWRQVWJUFDTPPGVQPPJLGCXLNDOSIGNFKZKTBFRM");
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
    msg.setTimeStamp(0.8717444791360002);
    msg.setSource(29732U);
    msg.setSourceEntity(185U);
    msg.setDestination(37468U);
    msg.setDestinationEntity(207U);
    msg.name.assign("ZPAPFBOMHESMFPWMPIXSWYCNUBSGEHVKSPLUXVKYXRDXNAVUJJLAUVITKTGDJYTQFOBRDDNRYYHQRBMMYAQQSCJWDQTRMUESCOAKIWRCMHGXGZWEZPZETXOGFKCSVZGNTNIWAHDCGPVIEZZRJWWAUJKXWVABOZKFDBYUQRG");

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
    msg.setTimeStamp(0.2013658334220928);
    msg.setSource(43303U);
    msg.setSourceEntity(215U);
    msg.setDestination(26121U);
    msg.setDestinationEntity(117U);
    msg.name.assign("YFBERNWAAPEQQLZZEUPUXVTSZFCZPGCOIUKHUVRVTBXNYZEILWPYNYXUOPBNYTLJAQEJQVIRGPMFMMGKHCSYBGFZBIKJIDAXWSLSDLYTDVLOVADNMGYNTDJFFCFQMRGZDPSHOUMRKAKJTAGAFECXQFBYOOPHTJNOOHMNBQIRUPMXYCCQHKZBWSIZNNATCUVSLEHRXLJVOSKWSGVLCETVOCBGWUWDMHREREQKZWMHBWPIKLXXGDWATDXKS");

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
    msg.setTimeStamp(0.016577496849958018);
    msg.setSource(27989U);
    msg.setSourceEntity(7U);
    msg.setDestination(39300U);
    msg.setDestinationEntity(143U);
    msg.name.assign("BRFBJVVUXDMKPAYTNHXYSZJNYDWSXAAGMAZKTJWGYIECYHHZYXXOANNFMDKPBWQGTULKDMVTCCRHRUGGIWRAIEBMSBBLTGAZLWLXTZIOVLJFFJVQREUVRQRZJBQKIOXKQROEYCRCTZHNVFFDDNEKSFSFVPWOVPPLMBJUIJMDSLMSKEXNVOBXQTLQQFECWOYWOHCPAWMZDHIFGEOKL");

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
    msg.setTimeStamp(0.8008152973752241);
    msg.setSource(50329U);
    msg.setSourceEntity(113U);
    msg.setDestination(49064U);
    msg.setDestinationEntity(32U);
    msg.name.assign("ICSRXBLLSBDTWQXHDYOSXAFSC");

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
    msg.setTimeStamp(0.32635731948658775);
    msg.setSource(55520U);
    msg.setSourceEntity(74U);
    msg.setDestination(54963U);
    msg.setDestinationEntity(187U);
    msg.timeout = 4081406899U;

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
    msg.setTimeStamp(0.4184365232082844);
    msg.setSource(27071U);
    msg.setSourceEntity(118U);
    msg.setDestination(13371U);
    msg.setDestinationEntity(164U);
    msg.timeout = 272278989U;

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
    msg.setTimeStamp(0.6635590535173688);
    msg.setSource(37820U);
    msg.setSourceEntity(47U);
    msg.setDestination(5175U);
    msg.setDestinationEntity(61U);
    msg.timeout = 3383776903U;

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
    msg.setTimeStamp(0.9206201492847211);
    msg.setSource(46888U);
    msg.setSourceEntity(173U);
    msg.setDestination(3963U);
    msg.setDestinationEntity(162U);
    msg.sessid = 349697021U;

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
    msg.setTimeStamp(0.8918714438695939);
    msg.setSource(60961U);
    msg.setSourceEntity(244U);
    msg.setDestination(58729U);
    msg.setDestinationEntity(144U);
    msg.sessid = 1731605261U;

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
    msg.setTimeStamp(0.9502961097366196);
    msg.setSource(57551U);
    msg.setSourceEntity(208U);
    msg.setDestination(62259U);
    msg.setDestinationEntity(132U);
    msg.sessid = 4288910228U;

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
    msg.setTimeStamp(0.807059329397774);
    msg.setSource(33090U);
    msg.setSourceEntity(68U);
    msg.setDestination(23820U);
    msg.setDestinationEntity(153U);
    msg.sessid = 4253320019U;
    msg.messages.assign("XWJZKLOJDTHKDNDJEITGKRWPWPDAVVZBXOLLZKQMRCYSJZTNLZSTKRUYFHOYXWSWXAKGOWIPZUEAREFQURFPCQTCNLTKUFUFIMRKBKXXGAGDBWEZSYIOVVRDNHVYMGJLLICHXPBEOROPUYPODMMLEHDSHWSFOYYILJPNUCRVBHVMHGJMQQANT");

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
    msg.setTimeStamp(0.9127130182841051);
    msg.setSource(53461U);
    msg.setSourceEntity(179U);
    msg.setDestination(9605U);
    msg.setDestinationEntity(174U);
    msg.sessid = 2425635731U;
    msg.messages.assign("PRMGFZXSLQUQHPYVYPWBNLRSIOKDFTFFUZXOIZZBOMYCXEIUXMSHRXNFMLPWGZJHJZBAUKTEZHHVCITFTBMLROOLIUPEQZEYLSVVAJAVTGHCWNXIXLRBYNDJGGRJSD");

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
    msg.setTimeStamp(0.7309989671958395);
    msg.setSource(56602U);
    msg.setSourceEntity(91U);
    msg.setDestination(21994U);
    msg.setDestinationEntity(246U);
    msg.sessid = 3926776111U;
    msg.messages.assign("DKRQRVSJQCPNGTCJUUKJXQXEOQVYOFCLEMCJBYAHAUPATPILEZPMEWFYTGAHDYXTAONKKBUZXFKUAITOVMXEELBCYSGOYJITZDETKVVIELPDAXXNSQVYPHZOTYQFAEDLPSSHXBIVSAWZFCOODGYRJUEDH");

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
    msg.setTimeStamp(0.01572538436344284);
    msg.setSource(32942U);
    msg.setSourceEntity(176U);
    msg.setDestination(44336U);
    msg.setDestinationEntity(121U);
    msg.sessid = 2505709668U;

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
    msg.setTimeStamp(0.5494482951435281);
    msg.setSource(10815U);
    msg.setSourceEntity(247U);
    msg.setDestination(9694U);
    msg.setDestinationEntity(224U);
    msg.sessid = 1256127260U;

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
    msg.setTimeStamp(0.14957213726667795);
    msg.setSource(5075U);
    msg.setSourceEntity(180U);
    msg.setDestination(46889U);
    msg.setDestinationEntity(53U);
    msg.sessid = 358759384U;

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
    msg.setTimeStamp(0.20375273073094724);
    msg.setSource(46028U);
    msg.setSourceEntity(31U);
    msg.setDestination(45300U);
    msg.setDestinationEntity(220U);
    msg.sessid = 3167413217U;
    msg.status = 139U;

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
    msg.setTimeStamp(0.37386177397497933);
    msg.setSource(7148U);
    msg.setSourceEntity(231U);
    msg.setDestination(37636U);
    msg.setDestinationEntity(36U);
    msg.sessid = 3225283683U;
    msg.status = 229U;

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
    msg.setTimeStamp(0.721443473490976);
    msg.setSource(16981U);
    msg.setSourceEntity(234U);
    msg.setDestination(39783U);
    msg.setDestinationEntity(107U);
    msg.sessid = 248057183U;
    msg.status = 55U;

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
    msg.setTimeStamp(0.392481958293326);
    msg.setSource(44794U);
    msg.setSourceEntity(86U);
    msg.setDestination(20153U);
    msg.setDestinationEntity(190U);
    msg.name.assign("BEQRSOICJBTYQPUSRUFCAZZDUOYOJIKIIUUMSCQHVFCKKUPBGPQLMPJONJKWGTULTMBRGKXYDOFVTWJJOLJOHTVTNENXTEFCCTXPALMVQAHPCESBMKZYPXUSYMNFBI");

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
    msg.setTimeStamp(0.8870547698844415);
    msg.setSource(19320U);
    msg.setSourceEntity(26U);
    msg.setDestination(16268U);
    msg.setDestinationEntity(243U);
    msg.name.assign("AYYYXQKVSRFXYAKMIUGURTUDPQENXNDCOWNTPDTWXIDGQMHAJFXUVLBXQWFHGOZHRJLPFKBUWIJBSENZTQNJOBQIGRYFCIJVVGGNHXHBFKESKHLFZAZNAAXROAYTOLHXVWPFYAMCSCSFIWNMJWMGVCTLRBKMEUUBEBDAPMCUPRLZCTDOLHBEYZJITGDZFOLSZGPZTMRRPSISMDDWTEHOLOYPNWQAHKJXQVOLRKVUDMSKVQ");

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
    msg.setTimeStamp(0.6330107663201044);
    msg.setSource(64288U);
    msg.setSourceEntity(170U);
    msg.setDestination(4870U);
    msg.setDestinationEntity(252U);
    msg.name.assign("TDBVYZUJYYJAMEESZHUIFIQIZALPHEOATMJWEAIFDPLXJKVNRQHPCYOMFBZAROKOURMZTPZGHPKEDGJMTXCGRNXZWSKZXNUQFRPBCBNNDLUBGWPGLFIUMADKSVTJBXGXZIXSJHWQGHMDYUQWWVCDPVPIMBXIWRCVSOWQFDRAYLOUUHHETBYYLGEACQVQENJKPZKYSSTWCXJEOOHCNANRJXNTIMCSKIFLBUALLQOGRFQTVODV");

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
    msg.setTimeStamp(0.20606447379285875);
    msg.setSource(13870U);
    msg.setSourceEntity(14U);
    msg.setDestination(1412U);
    msg.setDestinationEntity(112U);
    msg.name.assign("HUPUUOKTLTDQUOFMXBCUCSUYZQSDGTVQAKYNRAMZMVUAQFFHKPYIPRWDCOWZCCHPIGZJWEBLYFADKARPLBVMOABYERGIQWBASYOHGDECXERZNJOEKGLCSXFZTWUTHNDOCGGPJTLTVMBELEUYLLCSNUOIVPJQZRWVYIFKLVSIXRYCWRQHJDBNBKEZ");

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
    msg.setTimeStamp(0.32996802498919964);
    msg.setSource(26977U);
    msg.setSourceEntity(100U);
    msg.setDestination(42838U);
    msg.setDestinationEntity(32U);
    msg.name.assign("KYTZKJEUCDJHKVNHORFGIAEEERMOYGRJQYCFXNCMDMUMZXEUTIUZNDJGYNFLGWBTRFHMTBZNYAYNYUMEAZVMFERXOXMBCBDIDVOVAUHWPDUOYALSFSSSQYUSVBXWXXDYZQSREKOFBHHCVOWLAZGLLIIXHLQUQQLDUCZMCFNGB");

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
    msg.setTimeStamp(0.9245029507854796);
    msg.setSource(63557U);
    msg.setSourceEntity(223U);
    msg.setDestination(30721U);
    msg.setDestinationEntity(188U);
    msg.name.assign("PBIYLSSUMAZSCMTGLXSPIWEDJNGISJDHBXJULVSQAWCZCAYMBEHPPRRVTBKGHVNJIWHHYXHTWRZWLXXMQELELAKTDJOJUEWRIDJOKVVAFSCGGNVJQMDNCGLKPOAXTFEKYZAFKRWNQVNFUPQQCAFY");

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
    msg.setTimeStamp(0.6969576204894463);
    msg.setSource(64197U);
    msg.setSourceEntity(37U);
    msg.setDestination(16246U);
    msg.setDestinationEntity(23U);
    msg.type = 83U;
    msg.error.assign("SGUYXRDYMBYLNGVPCOUOKXITAJGKVJYHNMNCUOBVJIHPHSKFMWQAHPDWOFVLDOLFREBOYXKFABCVHJARRCUZXGTFQZBTSNJJDHNDVEFBSOMEXLDMPYJSMWPLPERQITLMJDDKZROAIWSVCCZV");

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
    msg.setTimeStamp(0.9341162191690161);
    msg.setSource(3595U);
    msg.setSourceEntity(115U);
    msg.setDestination(27092U);
    msg.setDestinationEntity(151U);
    msg.type = 13U;
    msg.error.assign("LACZXEAUPSRKNUKFPODEXOJSBBPQYHKIBWUTYTNPWTWFIBNVAWVJTWFLOUZBWSFCTEYDKIXVJKOQYHJOVYGXDNVNHPRCUMJSUMEYPHLQURALZCAWGYGMGNQ");

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
    msg.setTimeStamp(0.9956599767933894);
    msg.setSource(8084U);
    msg.setSourceEntity(195U);
    msg.setDestination(59322U);
    msg.setDestinationEntity(162U);
    msg.type = 18U;
    msg.error.assign("LSBATFRBMHFALFSRWCXIFCEHGLXPXHQPOEULKBXBAEGUPHRKNPKNRKGVDGYKLUIJ");

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
    msg.setTimeStamp(0.7169041791480806);
    msg.setSource(51230U);
    msg.setSourceEntity(28U);
    msg.setDestination(28501U);
    msg.setDestinationEntity(67U);
    msg.seq = 7817U;
    msg.sys_dst.assign("WLGJRMWIFVOAEBXQLODCMWBXLMSNSKOYXRKWBYSPGXCHSEZIPFXOLMQKZSIIBCNLKXAMCTPLVFZAJYVPRUOYOJFVFVMXTNCBTHCJXCPZWYEWPMMOIBJQNQDBVNDTSTIQKNTAHOOGDRYVQQAUWVFQJHJPZIOY");
    msg.flags = 126U;
    const char tmp_msg_0[] = {-34, -99, -119, -7, 21, 30, -42, 45, 122, -100, -118, -43, -92, -31, -76, 102, 55, -61, -96, -6, 44, 37, -121, -53, 59, -72, -100, 97, -102, -65, -43, -14, -54, 93, -37, 113, -29, -1, -21, -112, 102, 32, 22, -50, -112, 97, 9, 87, 78, -120, 30, -78, -118, 71, -76, -20, 45, -101, -21, 12, -55, -20, -127, 50, -9, 72, -93, 33, -98, 120, 79, -82, 48, 103, -99, 106, 71, -12, 59, -93, -126, -57, 28, 90, 7, -21, 76, 14, -92, -126, -70, -103, 122, 22, -93, -62, 121, -91, -56, 77, 13, 78, 94, -51, -121, 52, 95, 102, 104, -120, -65, 0, -86, 72, -78, -36, 38, -51, 42, 112, -8, -120, 28, 1, 0, -55, 120, 32, -60, -111, -6, -3, 80, 108, 25, -116, 84, -104, -82, -39, -60, -120, 85, -28, 26, 79, 115, 91, 8, 16, 3, -22, -8, -38, 55, -95, -24, 77, 22, 18, 20, -118, -82, 66, -104, 56, 119, 32, -50, -63, 11, -11, 10, -112, -97, 17, -9, 11, 56, 1, -7, -100, 123, 24, 101, -84, 79, 77, 112, 42, -4, -36, 109, 38, -8, -87, 83, -63, 108, -10, -110, 37, 118, -21, 93, 92, 87, -34, -125, 87, -114, -85, -42, -127, -31, -2, 94, -95, 23, -124, -98, 80, -33, -82, 45, -87, -44, 10, 54, 45, 30, -121, 27, 50, 107, 116, 76, -18, -113, -69, 55, -6};
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
    msg.setTimeStamp(0.9127115112913481);
    msg.setSource(57661U);
    msg.setSourceEntity(77U);
    msg.setDestination(41027U);
    msg.setDestinationEntity(159U);
    msg.seq = 158U;
    msg.sys_dst.assign("HNPSGXQGJZIHWFIBYJCNEJYKJFCPUGWGEAAHVCRBKGKUYKBG");
    msg.flags = 142U;
    const char tmp_msg_0[] = {50, 123, 95, -32, -28, 31, -41, -53, -100, -36, -70, -71, -10, -127, -30, -104, -97};
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
    msg.setTimeStamp(0.0003432041294936239);
    msg.setSource(44791U);
    msg.setSourceEntity(89U);
    msg.setDestination(27640U);
    msg.setDestinationEntity(179U);
    msg.seq = 43683U;
    msg.sys_dst.assign("PKFSTJIADGDSULBAKQNPMFEGLZBKQJNNFHPYVWLLKZNVFCCEMOQUXXHCGSVOYCSOPUIFITQGDUJTRIZDHAXWMONVTAADAMCFXYNMXKPOHJRQLSJEMNLLXWZRGETVUTAWTFJIYRXRHYHJKYVOBLKWDIBYESFYGIGYWOYHXEHMEOMBSNUNGCWJSCBBVOXAZPAXWSJLQRZZVMKGBIRTHPCNWTIRDCZQQEKPVDEMJPQUZCWKVLFGPDAZU");
    msg.flags = 199U;
    const char tmp_msg_0[] = {-91, -122, -61, -33, 104, -116, 72, -109, -96, 27, 13, 43, 77, -49, -109, 107, 70, -78, 21, 9, -55, 24, -7, 91, 29, -113, -65, 8, 23, 116, 84, -93, 38, -9, -19, -90, -59, 96, -122, -89, -49, 28, -125, -97, 53, -87, 84, 28, -106, 63, -19, -11, 29, 35, 63, -84, 56, 101, 60, -64, -6, -43, 73, 62, -102, 111, 84, 90, -15, 41, 110, 89, 12, -92, 41, 79, 26, -123, -28, 72, -38, 84, 10, -70, 66, -88, 116, -105, 37, 81, -122, 14, 61, -60, 71, 51, -2, -40, -103, -9, 8, -58, 107, 119, 120, 115, 28, -54, -43, -122, -110, -10, -49, 41, -68, 25, -97, 51, -20, 84, -88, -9, 102, -8, -125, -85, 6, 73, 121, 101, 26, -33, -9, -99, 99, -58, 81, -53, -112, 107, -19, -102, 75, -41, -24, 98, -80, 114, 8, 18, 93, 63, 99, 33, 50, -46, 13, -113, -48, 67, -118, -122, -36, 118, -45, 85, -57, -15, -109, 108, 124, 35, -54, 97, -28, 72, -52, -121, -23};
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
    msg.setTimeStamp(0.6868492239536321);
    msg.setSource(65368U);
    msg.setSourceEntity(241U);
    msg.setDestination(49219U);
    msg.setDestinationEntity(98U);
    msg.sys_src.assign("NEKSONDBUUUIQHHHICIIWLYZHNGJBUZEYIMVKXCDSDALDASIDIDYMRRLZJDLJLCOSOZSWEWZJPWNGASVLMKWABLYONTRVAQQYFPMJQHTFHKBGNMKNCHVENMQYIAEJZZWXBVSGGPLDVPXZOMRTTOTJQGJMMXWFAXOGAPAPKTW");
    msg.sys_dst.assign("UGIAPLRWKEKNDJIKPXSYYPROBWWZLGAFUICOBVGJS");
    msg.flags = 252U;
    const char tmp_msg_0[] = {-5, -83, 96, -69, 14, 4, 32, -39, 30, -71, -73, -12, -16, -65, -10, -112, 67, -54, 106, -103, -67, 13, 126, -35, -93, -96, 19, 96, 31, 122, -126, -67, -54, -59, 37, 124, 31, 97, 121, 56, -100, -117, 2, 101, 66, -36, -81, 114, 47, -43, 26, -97, -19, 124, -71, -12, 46, -49, 92, -121, -18, -3, 0, -26, 10, -36, -68, 7, -85, -26, 117, -22, 116, 2, -53, 36, 18, -102, 119, 4, 108, -91, 15, -29, -43, -36, -57, 60, -5, 42, 126, 29, -95, -101, -60, -10, -92, 123, -80, -14, -98, 92, -34, -4, 22, -104, -27, 96, -32, 48, -114, 1, -123, 43, -19, 64, 100, 85, 88, -63, -16, 122, -25, 37, 76, -84, -13, -86, 56, 117, -26, -53, -94, 31, 16, -36};
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
    msg.setTimeStamp(0.746034243630283);
    msg.setSource(1832U);
    msg.setSourceEntity(83U);
    msg.setDestination(812U);
    msg.setDestinationEntity(143U);
    msg.sys_src.assign("AQMLKHXRHLALAVHMFQHJMCGNBFCZROQQTORMRZTHEGTVNWYN");
    msg.sys_dst.assign("IOGCWDHUFRTKCXGUMYQWNLFQJKXBTVSQZWJXFLTTQLJQFXMQBFAUVCLCSAVKCUFJPLTSZSKLOIGDYNWJVLWYDATVOHFDFHQZGMMRSJDBMBKAPNNAMDUEJLEFKMTWPWSZODLXUCNBUIDISDHRIEYPORWUZSPHEVTRQOIRLRXNBRGGNRFVZYUSPYIJRQIXHNSGKTJVHOAWBPVXCZXEMPIJYGHTZCEYAWNOZMIYBNKYCBGEOHVEG");
    msg.flags = 134U;
    const char tmp_msg_0[] = {93, -84, 0, 34, 24, 28, -98, -109, 80, 22, 91, 126, 40, 16, -103, -29, 18, 58, 87, -116, -61, -101, 109, -66, -28, -18, -13, -22, 8, -92, -122, -44, 114, -43, -59, -42, 76, -87, 75, 38, -49, -29, -54, 29, 18, 122, 111, -25, 74, 32, 71, 95, 16, 55, 83, 51, -54, -31, -108, -45, 26, -102, 59, -17, -12, -80, -123, 85, -35, 20, 113, 97, 122, -35, -41, 47, 37, -22, -11, -29, -111, 87, -67, -48, -122, 37, 106, -102, -31, -8, 81, 24, 46, 33, -5, -11, -2, -65, 19, -63, -56, 80, -125, 39, 31, -65, -30, -15, 81, -115, 78, 63, -97, -72, -5, -74, 126, 100, 5, -15, 124, 100, 71, 26, 110, -96, 83, -110, -6, -25, 82, 88, 89, 33, 53, -24, -101, -89, -33, 65, -57, 30, 72, 102, 80, 27, 123, 110, -100, 70, 34, -112, 30, 79, -101, -89, -96, -120, 88, -67, 50, -125, -40, -77, 8, 89, 14, -63, 105, 31, 47, -100, -105, 82, -20, -110, -83, -21, -21, -58, 93, 90, -24, -121, -51, -18, -47, 38, 4, 80, 43, -48, 26, 105, 111, -55, -82, 0, 118, -44, 95, -111, 124, -27, -4, 93, 76, -40, 102, -63, 22, 41, -71, -111, 71, -69, 74, -67, -5, 7, 80, -29, -106, -126, -72, 65, 17, 6, 25, -126, 73, -24, 41};
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
    msg.setTimeStamp(0.221630828348773);
    msg.setSource(14956U);
    msg.setSourceEntity(249U);
    msg.setDestination(52027U);
    msg.setDestinationEntity(212U);
    msg.sys_src.assign("KEINVIOGSYKHCXXEPUOAEFRQTBMHPWFTLANILMIJJGKSXSOQPFDHAEKCZQTBPEWDTYNWDAFUTMCAAWMJUVBFBEZP");
    msg.sys_dst.assign("GBUOACNCBJMEQCNSFXLKITKKNRRVRRJHTYUXFTMCYLYAETYNWKDOPTYZUDVXOOWFVCGVHCKPTQDVLMMORZJSNBQROUALDHFGFAXGRABIWNNZDQJFMOYHEZDXJVPSHFPLQWCXNUKUUGISBTSJHGWJEQVKEFLDMB");
    msg.flags = 174U;
    const char tmp_msg_0[] = {-58, -108, 67, -43, -125, -67, -64, -96, -7, 108, -90, 91, 37, -7, 118, 11, 95, -86, -115, -62, -39, 27, -114, 66, -75, -43, -42, -92, 20, 53, -98, -78, 33, 85, 88, 91, -77, 32, -71, -127, -99, -55, 76, 111, 124, 92, 40, -25, -44, 14, -29, -39, -66, 33, -118, -63, -35, -3, -121, 11, -4, -19, 99, 84, 46, 9, 100, 108, -96, 119, -31, -11, 61, -27, 46, 84, -24, 27, -49, -93, 42, -86, -9, 36, 122, -128, -97, -36, 46, 33, -78, 45, -109, -112, -19, -2, -107, -105, 57, 28, 39, 8, -122, -91, 16, -120, 28, -60, -97, 64, -64, 60, 85, 75, -27, 124, -73, -52, -22, 45, -120, 82, 57, 86, -123, -29, -21, -4, -3, 20, -54, -85, 117, 17, -83, -121, -105, -64, -30, 63, 21, 12, 35, -95, 22, -65, -99, -48, 117, -128, 74, -81, -114, -60, -67, 110, 71, -6, -5, -39, 7, 34, 65, 28, -30, -115, 109, 89, 73, -25, 17, -91, -68, -34, 63, -20, -62, 98, -30, 19, 64, 84, 111, -122, -79, 37, -69, 57, 119, 69, 11, 36, 16, 11, -21, 97, -126, -61, 44, 71, 120, -91, 61, 112, -78, 72, -5, -95};
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
    msg.setTimeStamp(0.9851894042509992);
    msg.setSource(29220U);
    msg.setSourceEntity(213U);
    msg.setDestination(64604U);
    msg.setDestinationEntity(244U);
    msg.seq = 31209U;
    msg.value = 151U;
    msg.error.assign("ZZEDMBBTADCYYGARJYDPDUWUBOYTQSSSSLJGKOVTOXBLOFYIDGKQVDMRNEWZVRSCGUUTRHZLNDNLUVIHJJXCZQFRQRCJLETQCQBEIQZEOHCGZBDQVFNZLTBAYQGHJSFGGYUTMXFLRQPBAEJIIMWEXKMSLNREAUGENFVHBLKOYPEAI");

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
    msg.setTimeStamp(0.16837400197685326);
    msg.setSource(49926U);
    msg.setSourceEntity(194U);
    msg.setDestination(46008U);
    msg.setDestinationEntity(206U);
    msg.seq = 41319U;
    msg.value = 128U;
    msg.error.assign("QTKCXNTRSRLJLLMHBVABWPKUPPAJNIFAOKAZOVPORHTKHUGQNNPOBGJTFXVDNJJEQMOYUQFWVWZTLARRBDOLIZQHTDCXXWGBRZFITSOCNXPVUIUHDDYDTHQGWFHMZMQAAUEYQEIFPNTASVWBMGAMZZDIWJROEOMHRFKZLJRCUEYCNIYMXGKSXFJICYYKCIPWKXEWSQABZUDLLF");

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
    msg.setTimeStamp(0.6451005503629177);
    msg.setSource(55006U);
    msg.setSourceEntity(210U);
    msg.setDestination(3303U);
    msg.setDestinationEntity(152U);
    msg.seq = 54602U;
    msg.value = 83U;
    msg.error.assign("QDEOKTIACTFUDDFYHMQPLTRAWQEEPDPMKSOQTZNATISVSJZRRWDYAFLGDMOVNWUXMCABJKYIFKLUORSSYIKQJGTNHFNEZSXMEUWBLNNFREBGVTNIJVPBMEYZHZQKWHILJVCWPHZVPAAVSHCADAHKVMOXGHXYP");

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
    msg.setTimeStamp(0.7305554054624558);
    msg.setSource(6728U);
    msg.setSourceEntity(109U);
    msg.setDestination(24750U);
    msg.setDestinationEntity(102U);
    msg.seq = 27040U;
    msg.sys.assign("DCPSUBWIIKZPYJTGCOKHXRSTPMFOVULISIYNHEDPEAAEFJKVJJGSKQDTMWNESDOLJWKAXYSNATLTUJMPGBCBNOQQPDRLBZELIDKXOWATGQYVTPOQWDABWHIHGFAEHRREVKPLRNHXXIFSHCXJGOQCQFGZNCOGZEYZJ");
    msg.value = 0.5475137944391719;

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
    msg.setTimeStamp(0.14827708754324576);
    msg.setSource(19043U);
    msg.setSourceEntity(35U);
    msg.setDestination(31706U);
    msg.setDestinationEntity(24U);
    msg.seq = 7013U;
    msg.sys.assign("CAMDBRVKRBAGDTGPYFTULCISJTVZAHDSUIZWCZLIAJYOMNRLQFXDGFVRJOWIVCOFXSSLSEATQIAKLJXGBEJUCPDYQTZPQUXVUDOSMNXHTHNVZPFXYPNOXKHMQXRCSHEGBQIUHRIZLANYERWHNXILWNCJKJGSGLWFIHFRWTUCEKZXWYREFNKWOOYDBQBFBBHQVV");
    msg.value = 0.994568680577597;

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
    msg.setTimeStamp(0.7394923342111415);
    msg.setSource(6891U);
    msg.setSourceEntity(113U);
    msg.setDestination(22748U);
    msg.setDestinationEntity(7U);
    msg.seq = 63692U;
    msg.sys.assign("DLHXPERVNYOUBCGYYURUJQFTRIMPKUVFUHZSVGMZIKLXDHQZTLPEDJJCOQAOWNTNMVDSCJKFAJMKEUDXXFXJTGMHYZWEZBQSHQBX");
    msg.value = 0.7258978683389309;

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
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.8928870585361702);
    msg.setSource(35509U);
    msg.setSourceEntity(11U);
    msg.setDestination(29078U);
    msg.setDestinationEntity(36U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.3630731482698788);
    msg.setSource(52909U);
    msg.setSourceEntity(54U);
    msg.setDestination(60719U);
    msg.setDestinationEntity(250U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.20561650502578843);
    msg.setSource(1285U);
    msg.setSourceEntity(74U);
    msg.setDestination(23096U);
    msg.setDestinationEntity(116U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #2", msg == *msg_d);
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
    msg.setTimeStamp(0.5276604407938927);
    msg.setSource(53807U);
    msg.setSourceEntity(92U);
    msg.setDestination(50609U);
    msg.setDestinationEntity(147U);
    msg.action = 38U;
    msg.longain = 2875669897U;
    msg.latgain = 3528182434U;
    msg.bondthick = 3904310536U;
    msg.leadgain = 2222465076U;
    msg.deconflgain = 985252645U;

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
    msg.setTimeStamp(0.9846714427839571);
    msg.setSource(42766U);
    msg.setSourceEntity(196U);
    msg.setDestination(6488U);
    msg.setDestinationEntity(116U);
    msg.action = 141U;
    msg.longain = 2571395182U;
    msg.latgain = 1813779877U;
    msg.bondthick = 1704631588U;
    msg.leadgain = 4089099309U;
    msg.deconflgain = 3284855360U;

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
    msg.setTimeStamp(0.591505651215017);
    msg.setSource(31975U);
    msg.setSourceEntity(26U);
    msg.setDestination(5720U);
    msg.setDestinationEntity(124U);
    msg.action = 55U;
    msg.longain = 1094381629U;
    msg.latgain = 2697492264U;
    msg.bondthick = 267300718U;
    msg.leadgain = 2114041013U;
    msg.deconflgain = 3116031124U;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.18014907949186654);
    msg.setSource(61463U);
    msg.setSourceEntity(143U);
    msg.setDestination(55341U);
    msg.setDestinationEntity(184U);
    msg.uid = 212U;
    msg.frag_number = 123U;
    msg.num_frags = 142U;
    const char tmp_msg_0[] = {-92, -87, -75, -111, -57, 75, -95, -94, 2, 61, -1, -72, 117, 7, 85, 60, 96, -102, 0, 66, -36, 8, -71, -112, 98, -104, -111, -24, -2, -99, -18, -19, -48, 83, 44, 83, 18, -43, -82, -80, 124, -107, 44, -124, 18, 90, 11, -78, 28, 96, 26, -22, 15, 52, -12, -1, 97, 117, -47, -31, -37, 58};
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
    msg.setTimeStamp(0.844241161808522);
    msg.setSource(56481U);
    msg.setSourceEntity(23U);
    msg.setDestination(6138U);
    msg.setDestinationEntity(11U);
    msg.uid = 180U;
    msg.frag_number = 77U;
    msg.num_frags = 145U;
    const char tmp_msg_0[] = {-18, -105, -105, 60, 90, -94, -128, -97, 43, -91, -67, 18, -57, -53, 81, 100, -11, 87, -55, -126, 44, 53, -114, 34, 119, -17, -28, 4, 24, -9, 27, 45, -64, 75, 64, -74, 57, -101, -40, 39, 88, 123, 80, 36, 15, -57, -119, -9, 79, 84, -106, -93, -42, -33, 4, 78, 55, 67, 23, 1, 1, 2, -102, -120, 58, -40, -62, 105, 104, -38, 32, -74, -53, 108, -88, 93, -30, -119, -61, 48, -39, 20, -41, 17, 107, -31, -80, 117, -117, -115, 85, 107, -22, -84, -65, 45, -84, -91, 0, 68, -11, -77, -114, 62, -126, 19, 56, 113, -70, 78, -3, -58, -25, -92, -101, 125, -91, -49, 44, 87, -51, -23, -98, -67, -60, -49, 15, -67, 56, -106, -112, 86, -74, -21, -45, 97, 72, 54, -69, 61, -46, 1, -85, -79, 20, 95, -118, 70, 32, -55, 114, 112, -41, 22, -118, 42, 49, 26, -114, -36};
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
    msg.setTimeStamp(0.8923194753647006);
    msg.setSource(19764U);
    msg.setSourceEntity(176U);
    msg.setDestination(23092U);
    msg.setDestinationEntity(51U);
    msg.uid = 39U;
    msg.frag_number = 143U;
    msg.num_frags = 134U;
    const char tmp_msg_0[] = {30, -13, 106, 58, -97, 9, 68, -124, 63, 109, -125, 117, 81, -7, -1, -125, -38, 14, -58, 118, 106, 13, 123, -86, 124, -66, -21, -34, 20, -55, 109, 101, 51, -21, 100, 26, -110, 57, -19, 17, -107, 125, 87, -116, 73, -57, -96, -97, 83, -33, -26, -46, -105, -126, 126, 118, 125, -98, -51, 9, -56, -34, -10, -113, 43, -103, -1, 118, 75, 80, -30, 120, -75, -13, -34, -71, 74, -17, 1, 14, 112, 25, -88, -94, -109, -44, 118, -2, 8, 85, -91, 75, 42, 3, -86, 29, -6, 22, -15, -71, -64, -39, -115, 80, 40, 60, 50, 114, 90, 122, -6, 106, -26, -13, -51, -81, 118, -75, -112, 16, 2, 0, -99, 82, 32, 56, -78, -78, 5, 34, -118, 58, 67, -91, 122, -108, -116, 54, 56, 47, -87, 61, -122, -126, 50, 120, -123, 94, -8, -95, 66, 75, 76, 110, -104, -74, 95, -76, 60, -19, 22, 7, -43, -122, -127, 49, 60, 109, 6, -110, 52, -53, 124, -70, -113, -108, -91, 121, 114, 27, -61, -41, 15, -128, 70, 53};
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
    msg.setTimeStamp(0.8539807790366404);
    msg.setSource(46015U);
    msg.setSourceEntity(112U);
    msg.setDestination(55040U);
    msg.setDestinationEntity(173U);
    msg.content_type.assign("CTUOBMSGAFYHNOKIDRZQROTWFKXQOAACJUBEH");
    const char tmp_msg_0[] = {88, -47, 82, -23, -41, -34, -1, 34, -98, -112, 84, -91, -95, -64, -22, -38, -81, -81, -108, 1, -82, -100, -54, 15, -116, 91, 102, -128, 56, -28, -98, -105, -80, 68, 113, 16, 89, 49, -17, 88, -31, 116, -40, -87, 76, -60, 25, 6, -51, 115, -121, -87, -106, -44, 108, 52, -50, -8, -79, -59, -18, 108, -24, -13, -63, -74, 34, -78, -109, -94, -100, 119, -13, 36, 95, 33, -77, -53, -116, -126, -76, -94, -21, -69, 108, 8, 29, -102, -42, 62, -31, -58, -64, 67, 30, -128, 72, -49, -47, -92, 83, 108, -53, -39, -95, 109, -116, -1, 116, -78, -122, 6, 36, 97, 104, -118, 116, 20, -50, -35, -84, -68, 82, -3, -81, 100, 60, 76, 126, -118, 36, -69, 30, -53, -91, -78, -123, -60, -46, 26, 61, 113, 11, 79, 26, 19, -30, 95, -96, -112, 60, 3, -113, -29, 124, -70, 53, 0, -3, -33, 110, 65, 15, 49, 54, 17, 15, -117, 51, 46, -16, 92, -96, 105, -98, 105, -55, 104, 70, 75, 51, 79, -16, 16, 2, 121, 31, -86, -74, -93, 84, -102, 123, 90, 110, -56, -90, 119, -105, 122, -2, -87, 111, -122, -122, 27, -54, 70, -123, 84, 114, 31, -97, 121};
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
    msg.setTimeStamp(0.10385685013040513);
    msg.setSource(13511U);
    msg.setSourceEntity(62U);
    msg.setDestination(14597U);
    msg.setDestinationEntity(1U);
    msg.content_type.assign("ZPEJQCZTKFTTSOACBNHDOIYODPFAHIKSQJDMZUNXUMBBNLCFYHAFNFYUNMEPSRZSIZYGYTXLHKTUIHCXXLESVRSRIGAGCVJZZWCF");
    const char tmp_msg_0[] = {-117, 21, 30, -94, -35, 66, 78, -123, -7, -120, 19, 117, -91, 82, 28, 65, 78, -117, -25, 37, -39, 61, -117, -39, -55, 88, -93, 57, -83, -86, -119, 33, 122, -104, 78, -40, 89, 82, 32, 119, -10, -122, 119, -127, -22, -119, -117, 86, -37, -27, -5, -124, 42, 115, -35, 109, 118, -36, 47, -57, 32, 74, -36, -41, 95, -61, 39, -116, -16, 111, -93, -120, -21, -47, -82, 58, -114, -39, 88, 26, -86, -22, -30, 39, -1, 46, 49, -51, -61, 79, 114, -40, 63, -5, -124, -84, 103, -55, -8, 23, 96, 68, -21, 122, 5, 9, -73, -31, 119, 24, 118, -67, 101, -92, -44, -91, -59, 95, 48, 30, -100, -50, -105, 51, 122, 23, 64, 50, 12, 57, 27, -3, 76, -96, 16, -48, 42, -86, 75, 9, -117, 55, 41, 89, 31, -53, 38, -75, 29, 115, -25, -29, -41, 72, 120, 20, -118, -69, 39, -125, -9, 97, -85, 75, -102, -98, 63, 118, 121, -117, 18, -128, -109, -52, -78, 79, -73, -4, 50, -61, 26, 82, -43, 104, -12, -89, 98, 73, 109, 82, 62, -77, -88, 64, 0, 13, -117, -74, 119, -63, -115, -55, 29, -87, 10, 50, -13, -115, -126, 80, 0, -13, 70, -75, 102, -101, -44, 109, 9, 55, -67, 78, 32, 52, -67, 94, -38, 109, -86, -60, -125, -78, -7, -56, -34, -55, 76, -104, -1, -69, 60, 25};
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
    msg.setTimeStamp(0.8954813486253708);
    msg.setSource(39301U);
    msg.setSourceEntity(95U);
    msg.setDestination(3429U);
    msg.setDestinationEntity(120U);
    msg.content_type.assign("CEIPWPZLGJLIWMINXXBFDSIZTGPGKPHQVCCNMEPGVIOYTSRPXBUVDNEQYJFWEJKUEQCLHNRGAXZGKUROTNMEUBKXCOUGZVDJTZIGZOAEYOPUHZZYNJMRSKHJMEUSOBRFAEQUHMHFMRZLVWROQSXBVVLHQMONLLLDQTLNRJBXFAZQETADNYBRJOTVFSPDSSYMKG");
    const char tmp_msg_0[] = {109, -37, 69, 51, 96, 20, -74, -104, -39, 119, -13, 34, 44, 9, 89, 4, -71, -32, -77, -26, -118, 22, 78, -105, -13, -85, 123, -75, -76, 57, 24, 100, 88, -46, 32, -95, -9, 102, 111, -127, 93, -59, -85, 76, 50, -66, -34, 79, 9, -89, -7, -62, 121, 45, -109, -17, 6, -31, 38, -112, -33, 44, -123, -24, 21, 35, -10, 18, -23, -105, 102, 108, 1, 126, 50, -94, 87, -8, -31, -112, 11, -104, 35, 77, -33, -56, -123, 63, 2, 76, -123, -116, 70, 49, -24, -114, -109, 118, 34, 115, 94, 73, 45, 37, -86, 106, 99, -65, 52, 111, -57, -113, -55, 76, -124, -26, 76, -80, 0, 121, 32, 1, -46, -107, 31, 0, -73, 126, -67, -119, 40, -36, 68, -116, 97, 65, -83, -10, -105, 71, 36, -73, 28, -94, -79, -19, -29, 111, -25, 56, 19, 62, 15, -124, 65, -89, 11, -111, -57, -126, -40, -127, 5, -65, 42, -76, 64};
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

  return test.getReturnValue();
}
