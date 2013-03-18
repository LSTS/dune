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
    msg.setTimeStamp(0.0621693112483801);
    msg.setSource(24862U);
    msg.setSourceEntity(139U);
    msg.setDestination(57046U);
    msg.setDestinationEntity(65U);
    msg.state = 1U;
    msg.flags = 235U;
    msg.description.assign("IGKGOLCUIBUSNKATZTHXBDJEXCUXGRQARJXTPTLPHWNNUWALREFPSJVALWOWDKZUIOXLCPLMLGKSEGJRDWUBXYQIYFYYHLTTUMBFZTQIOABDWFNBRONWRUCI");

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
    msg.setTimeStamp(0.7854266350986566);
    msg.setSource(11238U);
    msg.setSourceEntity(195U);
    msg.setDestination(18079U);
    msg.setDestinationEntity(27U);
    msg.state = 19U;
    msg.flags = 9U;
    msg.description.assign("JTBUQWULFLTTVWHSDFBRXMFEUTHNJQZFPFDRCCVMYRQNZYJRATSUOTJQBFQZCAYKLFMWAKRKMUG");

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
    msg.setTimeStamp(0.4700534025536297);
    msg.setSource(43551U);
    msg.setSourceEntity(159U);
    msg.setDestination(40251U);
    msg.setDestinationEntity(19U);
    msg.state = 60U;
    msg.flags = 81U;
    msg.description.assign("BVGIYPDFGWDSPSHXQGBZL");

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
    msg.setTimeStamp(0.8069817804452553);
    msg.setSource(63487U);
    msg.setSourceEntity(220U);
    msg.setDestination(23894U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.8412388552282123);
    msg.setSource(48405U);
    msg.setSourceEntity(201U);
    msg.setDestination(44531U);
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
    msg.setTimeStamp(0.9247536984210234);
    msg.setSource(11665U);
    msg.setSourceEntity(104U);
    msg.setDestination(48943U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.322731803740236);
    msg.setSource(51275U);
    msg.setSourceEntity(225U);
    msg.setDestination(45987U);
    msg.setDestinationEntity(143U);
    msg.id = 115U;
    msg.label.assign("UYJKZMMAZKJRAXVRQSUPGAYGFXNXWWGKZTUQHXORCJSNFLMYXFVAHNISYJSVLRFECTXVKQEIPUKGCCFBWMXQJWSMMHUQWKZXNNOFRPSTTGYLLNHYBMRLICLSPLTDIIODMAROBSKMTCTIUHGEKWOEQPDGJQEBWTVWJIEBQXYDVTJAUKCRBAZEIPDLOTULFHPZOBZOHVIDKEALFWIPJSDNCUCOQBGRNRAZGEWZDGOF");
    msg.component.assign("GLGMCNMINQJCVINURWWLHMVIIDFGMNYOXWFQYMAADZOXWRZQZGFMGCZHSYDCHEUUAXFSLLCETRPUDTQFETBIYH");
    msg.act_time = 4299U;
    msg.deact_time = 23424U;

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
    msg.setTimeStamp(0.2576720474327422);
    msg.setSource(10467U);
    msg.setSourceEntity(211U);
    msg.setDestination(7015U);
    msg.setDestinationEntity(128U);
    msg.id = 210U;
    msg.label.assign("SRFQYJRWHCCCOJAAJYKPQWQYTXPGYWNBTVHVNRJLKOOPBDKSIJLUADHQRPIVDZTUSYMBBQWLQJKEZVALKNRCXUXSULTVIJSTXTRKAGZINVPXVGAOENFNBQMIPNRUFJOYSIPFMAZSUJTBHMKRHFVCADTUNCFDCFLSEBUDXPAWQGOYERXDXMMNBIIGZSQ");
    msg.component.assign("DFMIVXTGEPYUDOJSARBKAYCWSDALLGKZRYONIEWNAUGBXIASEUSWSVERBHZJR");
    msg.act_time = 64540U;
    msg.deact_time = 48646U;

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
    msg.setTimeStamp(0.9384761194223357);
    msg.setSource(41910U);
    msg.setSourceEntity(213U);
    msg.setDestination(17658U);
    msg.setDestinationEntity(58U);
    msg.id = 253U;
    msg.label.assign("VPVOEYBYOCEBKDQNEUJSEJZBLXZFHWVCLEVUPQEBXMRIHHSOLSGMESRQNBTOAGQIZBPDAZZKGGNJVPHIJHTKBSKFMQANPEDWYYCLOPKEVACGWIWRFOSJRXMPRCCCOTUFDFYNFJJMKXRNANXPPUTLTOTTIFUSTBMARQASANLCLUWFJPVGJUHOVDCLXGLQFRZZWDZWBQHIXHUQIMDKIIYCOMXHUZUHNYKV");
    msg.component.assign("RWNOMWHKWDNDSQVJPNJTVABJIRTAXHZQVJOYFCVAWLNDWQEN");
    msg.act_time = 58132U;
    msg.deact_time = 40251U;

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
    msg.setTimeStamp(0.3894911396438242);
    msg.setSource(31743U);
    msg.setSourceEntity(168U);
    msg.setDestination(4436U);
    msg.setDestinationEntity(1U);
    msg.id = 161U;

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
    msg.setTimeStamp(0.15998655394910788);
    msg.setSource(18498U);
    msg.setSourceEntity(251U);
    msg.setDestination(50225U);
    msg.setDestinationEntity(213U);
    msg.id = 44U;

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
    msg.setTimeStamp(0.5389961531491116);
    msg.setSource(38384U);
    msg.setSourceEntity(132U);
    msg.setDestination(6163U);
    msg.setDestinationEntity(96U);
    msg.id = 130U;

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
    msg.setTimeStamp(0.9695184476253416);
    msg.setSource(54510U);
    msg.setSourceEntity(118U);
    msg.setDestination(3229U);
    msg.setDestinationEntity(150U);
    msg.op = 233U;
    msg.list.assign("PNRKXMELNKJKNBBWPZMHFNLXWXKMSZBOLFAQZYPOQUUZQPCUHUETCAEJEEKBGFIHAAFRVVBDWMOSOWYKOBVZGQRBCWFZHGIMYACHSYEHOWHGMRQYZGBCVOJNQWVNYTHYZIDXLIMIGDVDIESVRJG");

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
    msg.setTimeStamp(0.013223370166794868);
    msg.setSource(16237U);
    msg.setSourceEntity(79U);
    msg.setDestination(4538U);
    msg.setDestinationEntity(72U);
    msg.op = 165U;
    msg.list.assign("MBOWVJLPLEWXFSGZRFMYYBEDBVYRUQGFSSOUKOGRTKEJDRFQIYLRMTJUCPQBUXHVVUNZLWTHIYVKITTZHIMSYMAVTWSARLHOBVQYDWCGEKCJIICKOTWDLFPRZAQTHGDSKXPPHMRQHYNNXEQINXXFMESJNUAZUREHPPBUGJFNCMOZDKOHDZRBCPVOILXILNVYIAGASKDOQBZQBHETAGWNKLBWPZNANMTLYQMWJXJEWJUOUGPSACZ");

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
    msg.setTimeStamp(0.5130680711710026);
    msg.setSource(62469U);
    msg.setSourceEntity(126U);
    msg.setDestination(42390U);
    msg.setDestinationEntity(115U);
    msg.op = 32U;
    msg.list.assign("YHTNAHJLMCQPFJTXZUTIDIIBFHULGOSZTOZEZCCIAGWKQYRZNVUDPKKIAXBNXYNDUQWNCLKCWBXMRFKDTQOBFGCAKXJGFJPBHQGOLYOXCKRGRMHOUDETWVYNFTVNQGWAAWGPSUFUAJSGRCKWBREMJSMHZWHLSCIJVOHARZRLEJPEVMNJRXTWSDVZESPMLHOPQTPYBQBIVDQVNJPFVIOYUEFWIMUYPLLKDXDDMYEHSEKZXBQAY");

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
    msg.setTimeStamp(0.47317321886767305);
    msg.setSource(22390U);
    msg.setSourceEntity(163U);
    msg.setDestination(30142U);
    msg.setDestinationEntity(230U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.4483482356057732);
    msg.setSource(60788U);
    msg.setSourceEntity(169U);
    msg.setDestination(38377U);
    msg.setDestinationEntity(68U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.20076804290422157);
    msg.setSource(8439U);
    msg.setSourceEntity(158U);
    msg.setDestination(36451U);
    msg.setDestinationEntity(48U);
    msg.op = 169U;

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
    msg.setTimeStamp(0.9105803785210409);
    msg.setSource(41266U);
    msg.setSourceEntity(254U);
    msg.setDestination(31019U);
    msg.setDestinationEntity(191U);
    msg.value = 17U;

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
    msg.setTimeStamp(0.6579966766329581);
    msg.setSource(38720U);
    msg.setSourceEntity(232U);
    msg.setDestination(2930U);
    msg.setDestinationEntity(68U);
    msg.value = 71U;

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
    msg.setTimeStamp(0.6422253138830839);
    msg.setSource(19963U);
    msg.setSourceEntity(138U);
    msg.setDestination(20370U);
    msg.setDestinationEntity(104U);
    msg.value = 250U;

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
    msg.setTimeStamp(0.39559344379034855);
    msg.setSource(51804U);
    msg.setSourceEntity(207U);
    msg.setDestination(57028U);
    msg.setDestinationEntity(49U);
    msg.consumer.assign("CLRWPORHDHLYBKIFTVAKJMMRUOVNQUERWLVAEPKHBJQOJLDC");
    msg.message_id = 48158U;

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
    msg.setTimeStamp(0.009929807416082181);
    msg.setSource(54857U);
    msg.setSourceEntity(251U);
    msg.setDestination(5255U);
    msg.setDestinationEntity(80U);
    msg.consumer.assign("ATTHLSFVOI");
    msg.message_id = 20989U;

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
    msg.setTimeStamp(0.30314129158915326);
    msg.setSource(18689U);
    msg.setSourceEntity(117U);
    msg.setDestination(48229U);
    msg.setDestinationEntity(89U);
    msg.consumer.assign("QQXKOGDLGKCAWCRTTOATMWRVCLGZNTDX");
    msg.message_id = 49451U;

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
    msg.setTimeStamp(0.6313930719695945);
    msg.setSource(31515U);
    msg.setSourceEntity(20U);
    msg.setDestination(19389U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.8385138712045755);
    msg.setSource(20414U);
    msg.setSourceEntity(227U);
    msg.setDestination(26802U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.8016994644317075);
    msg.setSource(3001U);
    msg.setSourceEntity(132U);
    msg.setDestination(12330U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.686107543618876);
    msg.setSource(5384U);
    msg.setSourceEntity(18U);
    msg.setDestination(30297U);
    msg.setDestinationEntity(6U);
    msg.section.assign("MWFKFOAVTSPPZXDXHOQMGAOIXZXZDNVYCJYBYXKMIWINCXRPMFRHOSARLUQOIFRLYNDHAUZMNBGTWNOLOJMAVCYGITLPHPJZKXLSDYHSHVKAKLZLJHEVRZDDRJYUUSQGGPIBSQRRNUPFERKZUMMJCCEFHTKATMWQWDNBBYGZOFOKBATCNTE");
    msg.param.assign("WJNIUWWAMBFLXVUSJJPWFQLRSGMZNOLIKUPBOWLLKTDZOUZEJHOBDALWQTATZJLHEKLVHCTXKUIWZPUDCJMVYNROFZDMWAQHDXCFPFKXFD");
    msg.value.assign("NLFXYICFEDLTZISFJHXOJAHUUWDHBHLWAGPEZTYLTMYYHDKIOVUXBLGBODCNOEQLCYAVQRATJZFGOE");

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
    msg.setTimeStamp(0.030473213706566527);
    msg.setSource(10920U);
    msg.setSourceEntity(147U);
    msg.setDestination(62348U);
    msg.setDestinationEntity(179U);
    msg.section.assign("XXBYXKDBTSHMYGMHKYLKBKWLMDAONYDUTWWOSQVQGSIDLLXNTBYCBVCJZUULAQ");
    msg.param.assign("RRETAKALUINVGCKOUBOVPQWJZHPYTYANWWUITUQUFMEGQQHLECKHDVMOANURISNAQWRXJMJJLZELYSQHRLPUFLLZPGYTKFTYNTIRNNZGZDHZQUUKJZKPMGYPSBBOXDWXNJSVVQLFPJCDHVIHOIDSZORWEVHIHYDXOVEANEBEYCXKPIPSRISHFJAFKGICTDGCGFBVAKRWWM");
    msg.value.assign("PSCKNKQJGVASZXJNZHJMXHHPRGJWHTQOIMWYWUYWEWVAOIJNBCVXPSVLQUKOEBYLQNAYXOASPUTMFNQBNMECRZZXAXVEGQTFTRIUGAHBOXKLDFFRMXZLUPPNQYUJKJWLRHRATYTZZKGANZIDQIRBHOOYDEUXRQVMSBVICMCFLOYXESRWDNPCKLSSNIECLKTEARGMFDDIWTOFKCHVFMJVL");

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
    msg.setTimeStamp(0.0732274970943596);
    msg.setSource(17176U);
    msg.setSourceEntity(47U);
    msg.setDestination(52937U);
    msg.setDestinationEntity(85U);
    msg.section.assign("GUTYTOCMAMVLNBQLRUIBEDYSTLSBCMCEHJCRBFNGFMZFJQHPOBSJNFODWILDZTARNEWDIBLADJIGEJCKOFIKJWXFYHFIOKCFHXMMNYGOBDOQOMVGRQTTZRX");
    msg.param.assign("ZGHTJFRUYNVLPDAPAPSCAFECVKJRQUFQBCRDEYSIKRWNXEZRYQEVTGAJIOWUWNSJDHPQIYVOYKDOGDXUIQSMCOWYOFCGPGPAMCRVGDXYD");
    msg.value.assign("OYAOHHFQENWCNWYAPWLWBNRNTAXSVMFYCAGGJEAWDJNYOKTMPCCKSJDOEYFVUVWZUKPPDRVDJQWZHEVRHZOKQLXSJNLUUHZEDUYDSFOEJQENIBVTAQAKTZICQNFFTLHONEZLWLFSDGHYMEOIWXMELDGMRMCVCNKJUAUWFDCBPQCPXIRMTQQHBLDYIVKZRGBLIAHPIGMFTPMGIC");

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
    msg.setTimeStamp(0.39593917589952665);
    msg.setSource(55709U);
    msg.setSourceEntity(79U);
    msg.setDestination(58588U);
    msg.setDestinationEntity(193U);
    msg.op = 141U;

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
    msg.setTimeStamp(0.4414001593571234);
    msg.setSource(6863U);
    msg.setSourceEntity(108U);
    msg.setDestination(45805U);
    msg.setDestinationEntity(218U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.7127831297915652);
    msg.setSource(34042U);
    msg.setSourceEntity(74U);
    msg.setDestination(63511U);
    msg.setDestinationEntity(13U);
    msg.op = 137U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("PTXKYFRROULQFFDPVBNXQLICZOUWVARXEHMULUOYXMKVQPIWBECEEQDJTISLNGUHDDSHPHSJKSLEPOMCQEJRVLSTAKWFXQINHGHFGAYMDSEO");
    tmp_msg_0.param.assign("KBZHUZAJSCLHGOAFZPXNZHBHZYMECCPFMWLNVZQWWXFAJWPFAYFUXPCXIPLOPAKTBDIPTQGKDMEUNNEWIXPBKEKERVSMIOJMFILJDLTXQGGJKJGJMYFHSVURORUTFHXRHRGBBLDXDICWKYQHDWDTBKUXMZSUQUQGMOPIACQOYSTWALNOOVRLEYDQNEVEZWUHCTISWKMITRLYYESDCHAQRONNLNBSVZBEBYCSGVAMDJVXTZJRSOYARFGQNKUI");
    tmp_msg_0.value.assign("MOZELSGNXISVDJJAIVVUTPBSCPEKIABVLKHHRTFMMITNEJSRAREXGCZUEOJBACRIKEGZGHYOTZVLRRENLBSXSADPERNDGYHOQFQCOKJVJUKITJYMCCNAAZTTSBFUZHLFLXZYNBXOLAGCBPTRUGEMQCWUBAGK");
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
    msg.setTimeStamp(0.019929795496075764);
    msg.setSource(13741U);
    msg.setSourceEntity(103U);
    msg.setDestination(11769U);
    msg.setDestinationEntity(216U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.8846800062179859);
    msg.setSource(48672U);
    msg.setSourceEntity(61U);
    msg.setDestination(47891U);
    msg.setDestinationEntity(149U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.7773487702100319);
    msg.setSource(179U);
    msg.setSourceEntity(232U);
    msg.setDestination(29890U);
    msg.setDestinationEntity(7U);
    msg.op = 50U;

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
    msg.setTimeStamp(0.7860179852443594);
    msg.setSource(50608U);
    msg.setSourceEntity(245U);
    msg.setDestination(17212U);
    msg.setDestinationEntity(185U);
    msg.total_steps = 27U;
    msg.step_number = 177U;
    msg.step.assign("PRJZYNQIKNNYNVVIRVSIOYXRBRRXMXAF");
    msg.flags = 60U;

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
    msg.setTimeStamp(0.7478074618404664);
    msg.setSource(1801U);
    msg.setSourceEntity(127U);
    msg.setDestination(31075U);
    msg.setDestinationEntity(159U);
    msg.total_steps = 175U;
    msg.step_number = 13U;
    msg.step.assign("NVGRGTSXTBKCFVNROSIMMGLBZRHDIQNZWBXKJWFBFKLJDGSAFNLAFYKJFLPATONWAOYQWJPPYNQNKMXRQTEWIXXYBSJUTGDEZRDAAKXSIF");
    msg.flags = 246U;

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
    msg.setTimeStamp(0.42580195566491086);
    msg.setSource(40412U);
    msg.setSourceEntity(1U);
    msg.setDestination(64693U);
    msg.setDestinationEntity(56U);
    msg.total_steps = 218U;
    msg.step_number = 85U;
    msg.step.assign("QGTGEDDFQWDWKUXKJYSWCXKPVILGTCOEOUFRCWBADGSNYIJGIKYVYUPBQUVYELCZAILBXLAUBJANCCPQVQUFPTBBWJATIKEPTSLNMYODKJJOIIKFFZKRTGSKFZVUHJSLLXBYXQRZZFQOBDULOSTIHSHNEJLNPIKDMSDBHJJMCOAVNYRYHHZNPWUQMQXVSDGZARUZPDMZGRPTNZGMAWVHFMRVEXCOEMVFERAMOSCMBXYRNHLWITHEQWPRHWG");
    msg.flags = 243U;

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
    msg.setTimeStamp(0.1679949355660031);
    msg.setSource(55556U);
    msg.setSourceEntity(240U);
    msg.setDestination(4375U);
    msg.setDestinationEntity(191U);
    msg.state = 188U;
    msg.error.assign("GURXHUJQJMWMZRHHGZKMYBXZCGSOKWSINBJJDH");

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
    msg.setTimeStamp(0.23854986619005425);
    msg.setSource(37440U);
    msg.setSourceEntity(0U);
    msg.setDestination(16097U);
    msg.setDestinationEntity(240U);
    msg.state = 162U;
    msg.error.assign("CDSYRBWCPQBATYCRHDIWAVMDGLFJLEBAMIBYOQPPIMJWEMICNYZMGOVOQHDRNWACWMKQTWVPTEREUSRLFPOTODWXGTLKZSIXOIQBEHUCFBKVLSJUCXMBJBFDAXVXM");

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
    msg.setTimeStamp(0.26668834191658064);
    msg.setSource(29978U);
    msg.setSourceEntity(31U);
    msg.setDestination(11070U);
    msg.setDestinationEntity(20U);
    msg.state = 50U;
    msg.error.assign("ATNFPLMDBNDUFELSXXVQDLNGTDJUODPZLNCBXIREGGEOVMZJTWYJVYCGSYVPHKAXPKMQBIAZANRKFEBPSPSFRSUCFSABTFDLNFMEATVWTLFJXQDJQXUHRKCTMWERBHUHKIXCFIQITLDMOKHRLVFDXRHYGVGGUOYANHOYMSOQAUQMLJHWTJEWUUQZJXQBOPWLDYYNAMKPZPCRTWJVACIWIGM");

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
    msg.setTimeStamp(0.9632524917570525);
    msg.setSource(57837U);
    msg.setSourceEntity(201U);
    msg.setDestination(64664U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.9977377866152046;
    msg.lon = 0.08345747418332705;
    msg.height = 0.6555622282589958;
    msg.x = 0.9588107003347932;
    msg.y = 0.19789656984821802;
    msg.z = 0.3985921942813183;
    msg.phi = 0.35833849776659554;
    msg.theta = 0.01476456274635174;
    msg.psi = 0.7749427548552456;
    msg.u = 0.7592103242856091;
    msg.v = 0.9107566687410039;
    msg.w = 0.12676853230988605;
    msg.p = 0.18948925334569722;
    msg.q = 0.778981856003416;
    msg.r = 0.4186955119756388;
    msg.svx = 0.27025544308196925;
    msg.svy = 0.950656201463086;
    msg.svz = 0.2360707821723833;

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
    msg.setTimeStamp(0.9040840663818688);
    msg.setSource(42783U);
    msg.setSourceEntity(44U);
    msg.setDestination(20447U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.35074012132533827;
    msg.lon = 0.7602375422653513;
    msg.height = 0.6377630708972388;
    msg.x = 0.8716044861451774;
    msg.y = 0.9470878588628873;
    msg.z = 0.2221628896813872;
    msg.phi = 0.7780289080613513;
    msg.theta = 0.2568897688959413;
    msg.psi = 0.4545958424192411;
    msg.u = 0.5717335833315556;
    msg.v = 0.8435680755615397;
    msg.w = 0.5107799749168616;
    msg.p = 0.017882798412413026;
    msg.q = 0.6424440086157347;
    msg.r = 0.8047025655632464;
    msg.svx = 0.10019293909118443;
    msg.svy = 0.5016522258947215;
    msg.svz = 0.9077511929902731;

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
    msg.setTimeStamp(0.7305323880932006);
    msg.setSource(42955U);
    msg.setSourceEntity(151U);
    msg.setDestination(10230U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.9106001902446325;
    msg.lon = 0.5986537616807316;
    msg.height = 0.7850140834538079;
    msg.x = 0.6973858728926884;
    msg.y = 0.14021235793787645;
    msg.z = 0.7546953566061725;
    msg.phi = 0.3094531942549319;
    msg.theta = 0.6085698665527289;
    msg.psi = 0.30650783724758146;
    msg.u = 0.5124265686745789;
    msg.v = 0.9383763567752753;
    msg.w = 0.039454114466458634;
    msg.p = 0.09172706127634411;
    msg.q = 0.19666833871173994;
    msg.r = 0.9474162544751096;
    msg.svx = 0.026787387679478303;
    msg.svy = 0.01164640968281172;
    msg.svz = 0.5190211082449712;

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
    msg.setTimeStamp(0.606713377257292);
    msg.setSource(62527U);
    msg.setSourceEntity(145U);
    msg.setDestination(33682U);
    msg.setDestinationEntity(218U);
    msg.op = 254U;
    msg.entities.assign("ROHKQAVRQNZMPIGDGOVVXXSWDPTLXTWNFVOFACNYEKOHUUTZEORIRJAETHCNSQCDRBLTUKMYAAIJPVUIEZLSWX");

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
    msg.setTimeStamp(0.9096264464704041);
    msg.setSource(16131U);
    msg.setSourceEntity(162U);
    msg.setDestination(16717U);
    msg.setDestinationEntity(84U);
    msg.op = 118U;
    msg.entities.assign("SAYJYRTWFFVIVBCKPZEJGDMDINHVNMXEUKYAUYOCEAZWUSTNWBGBNXJOSBQIDFMXLZAGGDFTCFAWVXFCZOKOXIPDFJTITHWSEJRYRRWHZIYNKMKBYMVNSCDWUQPFXHLINDMYOWGKRUOLGVXCZFOQIQZRRLHKYTJUBFDZAYEPHTHEPMLIZHGJ");

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
    msg.setTimeStamp(0.6060736754431861);
    msg.setSource(8261U);
    msg.setSourceEntity(109U);
    msg.setDestination(9313U);
    msg.setDestinationEntity(94U);
    msg.op = 66U;
    msg.entities.assign("CQXFAYHKDNIMRLFYDINUMFZMVZZJPRJBCYRMAPIHQPLNZXAARIBTCJKBSVKPEFZGPHXECPYULYJFHDTKJFZBXQXKEGVVUESCOEOLVU");

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
    msg.setTimeStamp(0.2915694256064799);
    msg.setSource(48675U);
    msg.setSourceEntity(24U);
    msg.setDestination(4717U);
    msg.setDestinationEntity(17U);
    msg.type = 155U;
    msg.speed = 47205U;
    const char tmp_msg_0[] = {-98, -64, 90, -89, 31, 105, 14, 89, -51, -126, 38, -17, 65, -39, -98, 29, -104, -1, 0, 15, -32, 28, -117, 24, 3, 115, 15, -1, 103, 47, -93, -60, 92, -21, 4, 105, -89, -96, 12, -7, 0, -113, -98, 99, 38, -22, 65, -50, -75, -85, 44, -18, -10, 41, 79, -15, 103, 6, -26, -74, 86, 17, 17, -25, -128, -44, -22, 89, 84};
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
    msg.setTimeStamp(0.27969401252683423);
    msg.setSource(43104U);
    msg.setSourceEntity(115U);
    msg.setDestination(29356U);
    msg.setDestinationEntity(131U);
    msg.type = 172U;
    msg.speed = 38474U;
    const char tmp_msg_0[] = {-20, 68, 13, 106, -49, 14, -96, 70, -110, -95, -7, 74, 40, 10, 50, -120, -125, -37, 91, -112, -52, 3, 57, -125, -97, 47, 39, -118, 27, -86, 25, -53, 40, -43, 6, 106, 91, 85, -112, -69, -99, -102, -52, -81, 20, 122, 120, 85, 6, 77, 96, -9, -97, 111, -113, -53, -107, -43, -50, 90, 61, -90, -118, 23, -60, -12, -10, 89, -8, -43, 100, 103, -42, -114, -103, 19, 114, 111, -77, -19, 77, 56, -84, 21, -3, -41, -15, -121, 7, -36, 43, -125, -101, -118, -37, -17, 86, -74, 11, 96, -86, -97, 86, -73, -63, 87, -28, 21, -88, -109, 62, -46, -15, -44, 100, -99, 115, 74, 22, -116, -73, -2, 126, -5, -83, -88, 92, -4, -102, -21, -27, -4, 13, -27, 95, 30, 8, 98, 41, -4, -17, 90, 45, 30, -105, -32, -24, 109, 50, 85, -47, 23, -11, 59, -89, 22, -125, -34, -106, 74, -67, 78, 16, -89, 119, -12, -116, 121, -106, 82, -93, -33, 78, 6, 85, -32, 57, 43, -55, 26, -120, -90, 25, 21};
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
    msg.setTimeStamp(0.8097342784862002);
    msg.setSource(40936U);
    msg.setSourceEntity(143U);
    msg.setDestination(36106U);
    msg.setDestinationEntity(10U);
    msg.type = 199U;
    msg.speed = 5547U;
    const char tmp_msg_0[] = {-109, -85, 40, 37, -58, 78, -32, 66, -77, 79, -3, -120, 110, 105, -55, -19, 114, 126, -73, -43, -39, -124, 90, -77, 61, 31, -85, 29, 12, -51, -124, 55, -72, -80, 9, 124, -24, 115, -23, -101, 123, -96, 116, -4, -2, -24, 80, 68, 62, 125, 59, -83, 65, -100, -39, -34, 50, -21, 74, -114, -88, -93, -126, 28, 94, -65, -124, -69, -11, -49, 69, 38, 77, -22, -29, -73, -28, 12, -37, -84, 72, 2, -18, 70, 2, 25, 120, 97, 85, -87, -26, 102, 95, -96, 57, 35, -75, -105, 102, 102, 112, 71, 47, 32, -61, -15, -29, -89, 23, 104, -127, 105, 81, -106, 91, -69, -38, -75, -86, 112, 3, 40, -41, 74, 47, 20, -86, 118, 115, -30, -55, 115, -63, 50, 58, 44, -54, -91, 66, 84, -82, 122, 60, 108, -42, 121, 33, -94, 31, 17, -44, 91, 34, 97, 39, 85, 111, -47, -108, -61, 0, 69, -68, 11, -24, 42, 13, -120, 15, 97, 96, 7, 103, -60, -122, -28, -45, 36, -65, -38, -31, -32, -12, -12, 21, 69, -113, 116, 11, 40, -114, 26, 35, -53, 60, -7, 31, 11, -128, -84, 61, -111, 108, -18, -43, -3, 64, 89, -87, 77, -42, -7, -76, -68};
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
    msg.setTimeStamp(0.9415486614351527);
    msg.setSource(1056U);
    msg.setSourceEntity(58U);
    msg.setDestination(18939U);
    msg.setDestinationEntity(26U);
    msg.available = 405419184U;
    msg.value = 187U;

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
    msg.setTimeStamp(0.7681241940011523);
    msg.setSource(46735U);
    msg.setSourceEntity(114U);
    msg.setDestination(64387U);
    msg.setDestinationEntity(20U);
    msg.available = 2185919153U;
    msg.value = 41U;

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
    msg.setTimeStamp(0.264035345480082);
    msg.setSource(51501U);
    msg.setSourceEntity(55U);
    msg.setDestination(34330U);
    msg.setDestinationEntity(143U);
    msg.available = 1991607816U;
    msg.value = 134U;

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
    msg.setTimeStamp(0.04781005526537152);
    msg.setSource(25785U);
    msg.setSourceEntity(213U);
    msg.setDestination(54467U);
    msg.setDestinationEntity(9U);
    msg.op = 135U;
    msg.snapshot.assign("YQNDVWFXSJUCSTQEMZOWTENKFDZRCZSTX");
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.02926674272887342;
    tmp_msg_0.v = 0.217932163667806;
    tmp_msg_0.w = 0.21183828957499684;
    tmp_msg_0.p = 0.9721189466970138;
    tmp_msg_0.q = 0.2984610209458376;
    tmp_msg_0.r = 0.22559967124008173;
    tmp_msg_0.flags = 145U;
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
    msg.setTimeStamp(0.9568115626169452);
    msg.setSource(1503U);
    msg.setSourceEntity(153U);
    msg.setDestination(16838U);
    msg.setDestinationEntity(223U);
    msg.op = 45U;
    msg.snapshot.assign("LDIROZFNLGKQLAKTPIULFJIUCGFBJBGHAMEIKBLOPXJTEFTZBFXAEETEFBVICSPNUMZITBKCOKEYYKQNWJPRYPVLEOMVHARWULZGWUMCIWURK");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.8321981821244435;
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
    msg.setTimeStamp(0.2261140671997557);
    msg.setSource(2037U);
    msg.setSourceEntity(50U);
    msg.setDestination(24609U);
    msg.setDestinationEntity(28U);
    msg.op = 220U;
    msg.snapshot.assign("BPQZTJDUCQXYVIBOZOJCDVJQGVONOYMTNSLYEWPZOQWDQKCAHZTLNFSDPGMVMZSXPYCULBTIVNSNGOUAUIIRFCFVHRARHSILEGXQVCDRUDEYXIEOMELJAQJBNFQJUFTFSPHWHXWXFKIPTOAMRQREWXARKZIRDHUXBSSMKIONWZCTKCYUBHQTXJLGYBYYBIHMMNWFBNTXZLPRVWBZDLGAMTAKUDFRJVGEPHEYCKPACWHNLJKEWUGKJSGVPFK");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.9867004802615758;
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
    msg.setTimeStamp(0.21705732187085824);
    msg.setSource(19115U);
    msg.setSourceEntity(74U);
    msg.setDestination(45365U);
    msg.setDestinationEntity(205U);
    msg.op = 87U;
    msg.name.assign("HJECRKBLYOXWXGRQEPJXGZILYDCPQGKBVSRFIQAVDWYTEXBGFAMZALULHDRAQWOWBABFNHITPAHMMIKPISMTNCPGZVCPSQEVZDOSHQHETRKUTHNCUNMNMWMJEAOLAHONWSQZLDEQTEWUDDFYNVDUOMWGYDLRIJFXATQPIMBWOROGRELCXJTVBNUWUNLBKXFGBSSJUYDRKXJJVLPQFZPEZJAPYOKTYUIUVNFCGHRZYZXFSSHTCS");

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
    msg.setTimeStamp(0.34760472034400236);
    msg.setSource(15225U);
    msg.setSourceEntity(189U);
    msg.setDestination(63408U);
    msg.setDestinationEntity(11U);
    msg.op = 91U;
    msg.name.assign("SAYXHGMJAWULHPPSSTZBMWFKBSERZBTTSDYVAQKICHMJYFVTYLKEZNJBBOAHYYEMYXXWVNOWPAWCATWUJJZIVGRWPALTHQOLXKDFNCPRQYQ");

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
    msg.setTimeStamp(0.17494948844739044);
    msg.setSource(23083U);
    msg.setSourceEntity(54U);
    msg.setDestination(63335U);
    msg.setDestinationEntity(250U);
    msg.op = 42U;
    msg.name.assign("SDWCMLBPXIYLKWIWYDQCLGRZSIEAQJWKCSXXZTWFJGNEFJMODOZERJQTOZHOXSHRBZANUPVIZEXPTNFTYLRQSPQKMYINDPYAOGHXSEJHRUNNIJAEXZHTQXHXKKKYQMMTIWBKJVGVWN");

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
    msg.setTimeStamp(0.3303382596341413);
    msg.setSource(3251U);
    msg.setSourceEntity(29U);
    msg.setDestination(61727U);
    msg.setDestinationEntity(114U);
    msg.type = 21U;
    msg.htime = 0.05165797874249234;
    msg.context.assign("SVQLGWBTHADBEVVVINYUZIHMKDVJPZMLFUSHWNMVNOTJDMJTCARGLLYATSBDGSLOUEVVIITSMWWASESLWFUTPKUAHBCTHIONMCNLTQSDNPMBMQFKCGXJGJYEFMRZQUYUAQYFIRXXBDUWFRQPLVEJXNOPPQSCCPLAROGZIOKBPQCJHQWEEOAYFDOAGNFIDYUZGKBRXZIXXBWCHPOXCZFZXGREYDXCWKARZGSML");
    msg.text.assign("NBVJUDOIVFEUGHFWBSUENTFJETLUKYYOJAHEGUFVRVSGYDAHWDULIDPDYXHKQGBTNLKYMKQXEAVWAAIQKIFCCQOMBBDLRHIJMDLPOWKDRSGXKHCTQYMZUZMZWKWYAMMHJJYALQSKFGDCSZSFRSYOJBUZTMWIVGVGJGOYTQNZFJBIMCIPCVMOPTWXEINEBXGHTNKPPUJSSPHDPCPXNZFRPBROCAXULRL");

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
    msg.setTimeStamp(0.8924056184267273);
    msg.setSource(52181U);
    msg.setSourceEntity(143U);
    msg.setDestination(29486U);
    msg.setDestinationEntity(223U);
    msg.type = 34U;
    msg.htime = 0.3350229297242374;
    msg.context.assign("RNBYUNIPYEBHKZEGAELACLSXQAKCPJDYXAWGBKSZLGXNFRCXWHYKLYAFPHJNGTIQBTYNLDVRXSMKTJPUEHDVSRBOEWELANVGUJHKM");
    msg.text.assign("YBQXPGDOXVLFCZKJYRNEUKCLRTVFMPOIVFTPLMPHTUMACRHYIYDITIKPUUJWBBEGKDDAGBLQGTGOPAZVAHDIWZKOEFWIOQUU");

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
    msg.setTimeStamp(0.4060131613486764);
    msg.setSource(19758U);
    msg.setSourceEntity(80U);
    msg.setDestination(60047U);
    msg.setDestinationEntity(236U);
    msg.type = 208U;
    msg.htime = 0.6245954275019495;
    msg.context.assign("UBLKQZERTZEDBFTUQPNSKZGYMIFOZHRGRXISDQIVFDZYXDQWJCZJVJKVXFTENAASUKCOISMNUMREOUSEKNNGXXWYHZWBBGLPAQIAHAKOUHLJJWCMDYSDHPDNCBNQORYBJPGYGEERHXCVTJMIEURAAOPCLTLKEV");
    msg.text.assign("YCLVYJNWTKDPTLWVBPURCILRXBDHTDJUTODNPZYTYHSZQJOFBHPEFOUPUQLHYLF");

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
    msg.setTimeStamp(0.34921772856085365);
    msg.setSource(18433U);
    msg.setSourceEntity(59U);
    msg.setDestination(21371U);
    msg.setDestinationEntity(52U);
    msg.command = 186U;
    msg.htime = 0.6868794527436206;

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
    msg.setTimeStamp(0.5187010855354878);
    msg.setSource(9624U);
    msg.setSourceEntity(91U);
    msg.setDestination(45066U);
    msg.setDestinationEntity(188U);
    msg.command = 161U;
    msg.htime = 0.7045875833811797;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 7U;
    tmp_msg_0.htime = 0.007673238203198096;
    tmp_msg_0.context.assign("ACXLSRTHKOTUDVKDVHWAWJHGVOPQRSLCHMRIMBMIUKYUTTCUMEACVCVMJHONLBDYFFBDAFPHJXEMOHXRDWSIDSCGRTCAPPKIVZNYJBYSZGXUYQZPIQIOSYOFLQXXOKDGAKUJQRVFTLNWQZJLWOPDLQNFYMZSXW");
    tmp_msg_0.text.assign("XSUTWQBEGETAOOTADOOYFWKXDSJBPVBPGMXDIQEDQCMYMYMWRZPOIAIUVAJFUGNKRUVIMWDCOQEWLKNVUJYLARJGGCIHBNDZKYGZYSLDKPCRRVRBJQPYXNBXSBZVYAQBKNWGIPMLPFXWRRHUINCNRCEHLCPPTROAQJZCGXATWEMKQZSTFUNLSAUZPIDBZSUIZSZHQFJOMAKMVTXXNETGNCLEYHWKTEOTDHHMGQOVHCLFFDXFJHIF");
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
    msg.setTimeStamp(0.5643633772460092);
    msg.setSource(63265U);
    msg.setSourceEntity(121U);
    msg.setDestination(8375U);
    msg.setDestinationEntity(212U);
    msg.command = 234U;
    msg.htime = 0.42025011877731644;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 158U;
    tmp_msg_0.htime = 0.4063071545551933;
    tmp_msg_0.context.assign("QAMJSUBDXIZVYEKJHHRTWTEWOAGMSABCD");
    tmp_msg_0.text.assign("TKQVMEEOUPZEWRJCLDXVOIZAHKPKPFVZHNTQFCJBCUSSALBUBMBADSENIJCEYRQVAWOLLEFDWYFZFKPHIBJUATHSNGQLILRSGEUWXXOTZKHXHBMMDEDYZMZYRTWYQIOECIRUDKBPQXDQNGKTGNXQPTMPFRUGVZWGPJFZQHQYAMYHWBENCUNIURKLWNRXB");
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
    msg.setTimeStamp(0.47253241144326286);
    msg.setSource(1148U);
    msg.setSourceEntity(251U);
    msg.setDestination(40461U);
    msg.setDestinationEntity(70U);
    msg.op = 180U;
    msg.file.assign("QGMJLDSVVFCZSNFFSDNTHTMCECZIUGJECOFDAOWHFDRPYZEJKEZLHYQRRSGRZTTVEMKROHOJPXMBZIMXPODLIBHYJOBZSCNKJKWBQKXLUEABQWBSHBSIFQVWQXDMAKWGHTOKSUNLIEQUIAIEQQZUPTIPDCNJWNGYHMGKCXPTDNFFASGDMJUKJJVALKWGMYVTPBYAYWFEPXURCYIRVWLIYQUELUBXRRO");

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
    msg.setTimeStamp(0.5284503513969685);
    msg.setSource(44384U);
    msg.setSourceEntity(220U);
    msg.setDestination(41465U);
    msg.setDestinationEntity(128U);
    msg.op = 192U;
    msg.file.assign("YCTPXUOHOGHNJOQQSEWDVKYMZVQRTDXWOOEWABCCTUVFSKQQJSXXYTCENJGHJMTLNTYGMYHEYQOGBFNDUUVWBZKYCRFFZAOYOAYSTDFMXWXMIZGUILBBKDDMQ");

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
    msg.setTimeStamp(0.9924599707742979);
    msg.setSource(65103U);
    msg.setSourceEntity(169U);
    msg.setDestination(35688U);
    msg.setDestinationEntity(96U);
    msg.op = 194U;
    msg.file.assign("ZSOOKLSBJOUCUQQPBFTEJJMZGDYRHUTAFLVANKVZZEFXUYXSSDQVPDQRAQPOYIKBUGWLULTTDYROYFBLWPGIVEGCTTNKTCFEXNFUHWHGWIVABCAQNPBQGSWZPLXDNAEKACRVMHMLCXVWFCMRMKRRXSWBUGAGSLFSODJKGHNACYFTHHZZVOPZIMTJFIDQWQJJMYNPHKSWNBGEIMIYERMHRYQ");

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
    msg.setTimeStamp(0.043674047881331);
    msg.setSource(48258U);
    msg.setSourceEntity(227U);
    msg.setDestination(14495U);
    msg.setDestinationEntity(227U);
    msg.op = 44U;
    msg.clock = 0.19450938002639706;
    msg.tz = -105;

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
    msg.setTimeStamp(0.7773105847831806);
    msg.setSource(52368U);
    msg.setSourceEntity(139U);
    msg.setDestination(11886U);
    msg.setDestinationEntity(2U);
    msg.op = 206U;
    msg.clock = 0.5773936235844008;
    msg.tz = -122;

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
    msg.setTimeStamp(0.2098463668338153);
    msg.setSource(64015U);
    msg.setSourceEntity(234U);
    msg.setDestination(182U);
    msg.setDestinationEntity(239U);
    msg.op = 107U;
    msg.clock = 0.01962385341623496;
    msg.tz = -117;

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
    msg.setTimeStamp(0.7900004326492717);
    msg.setSource(15186U);
    msg.setSourceEntity(205U);
    msg.setDestination(63497U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.9186378051286382);
    msg.setSource(3604U);
    msg.setSourceEntity(94U);
    msg.setDestination(23455U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.01908620235045455);
    msg.setSource(64621U);
    msg.setSourceEntity(123U);
    msg.setDestination(34521U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.9111806870526323);
    msg.setSource(65463U);
    msg.setSourceEntity(36U);
    msg.setDestination(6085U);
    msg.setDestinationEntity(121U);
    msg.sys_name.assign("GGWHKTHHXAWRZJVCJEINJYFUHPRNCCOCFOVNPSUAVEWZIFXOKMTKPZRDPQSRQCFBUTHJRAHTUSEADEXAPZDGGMZBAC");
    msg.sys_type = 146U;
    msg.owner = 28916U;
    msg.lat = 0.028729770328426052;
    msg.lon = 0.2812448223204802;
    msg.height = 0.7425499154193462;
    msg.services.assign("YXDJVHONPKQKDHCIAGSLSZFZHGZATNLMQCXHJBTFTY");

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
    msg.setTimeStamp(0.34527354112130215);
    msg.setSource(41393U);
    msg.setSourceEntity(100U);
    msg.setDestination(47960U);
    msg.setDestinationEntity(91U);
    msg.sys_name.assign("SBWZNOIIQIKXUQAJJNZPKGMWRQATAFUGYQKSPVYFDOEERDJZHHNGKDWAUGABRZTMZFSKSRCUUCHFNKWRZBVSXFOTLHYYBQBIOSBUANHPCPGSDDGOGHLJWGYPENOIVUZILNRUNVSBMRHMHBTX");
    msg.sys_type = 191U;
    msg.owner = 29538U;
    msg.lat = 0.611872939929065;
    msg.lon = 0.8715306768312079;
    msg.height = 0.1454444846754187;
    msg.services.assign("EDTNTYZFSQ");

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
    msg.setTimeStamp(0.1340143546877718);
    msg.setSource(59929U);
    msg.setSourceEntity(51U);
    msg.setDestination(37011U);
    msg.setDestinationEntity(191U);
    msg.sys_name.assign("LKCFZANIWXMBAFOOYIIACCFRRTVTWNOAJXRLSNUEOHZRYXAJTGQOIKNEJGGHGLYCNWANYBWDKTVZKCZUXBAJXMVEEKNBCLSQXNZGBFHYDDWIGPBPUMUHRZMKGASIVTYRQEEMVLINIZJJPFQEMQJPBLDPEIKUUDCOTWUTTKXGSZPYSEQXFHDBSGQKCMYFSJSPV");
    msg.sys_type = 43U;
    msg.owner = 41269U;
    msg.lat = 0.594215108859843;
    msg.lon = 0.11568722365731021;
    msg.height = 0.11559786624759272;
    msg.services.assign("AYXMCMHLXNBZGXBPUJVILPWQSEZUVWJIPQFIRPXRLUOAPVPVNJZZEAAQEFSWNDRYOKYZKTROGSHUKBNYAZMRHZWZTFEMJRJUDGCMIYIJAAPPFSSXHKLQS");

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
    msg.setTimeStamp(0.927133255140016);
    msg.setSource(8455U);
    msg.setSourceEntity(157U);
    msg.setDestination(1282U);
    msg.setDestinationEntity(231U);
    msg.service.assign("QUIYWVGARSPGLVKDXREEHPMKZUDBCRTVM");
    msg.service_type = 227U;

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
    msg.setTimeStamp(0.06515993877376669);
    msg.setSource(35320U);
    msg.setSourceEntity(207U);
    msg.setDestination(61067U);
    msg.setDestinationEntity(123U);
    msg.service.assign("FLCMJOGSEXUQJXCWPGQNJRQXVYLBCVRIWENHPOYNUJHREXICVAITIZMMFQVUVYXDCPDEFEKGEVZGAPXDKHXTIQTGEBNYDKBJZNHSGDOILAIDATUJGTLSRTBSSHEPWUBBSBKGOJPJRFLCQHPJFWROUQMATWMAEQTHVZKCWYKFZTDLMDPUAQFWPVMLNYOURYOSUXZYNKNCLIDRFCDHWNOKLZMXGZLOWSUWBVQHTYANAKRKIIZF");
    msg.service_type = 38U;

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
    msg.setTimeStamp(0.7542916004500463);
    msg.setSource(61819U);
    msg.setSourceEntity(188U);
    msg.setDestination(21723U);
    msg.setDestinationEntity(191U);
    msg.service.assign("OZZHNGAAKPSTXBSUOUFKOANCCGINXFIIXHPYVZFIQGUVYZZHHBLEQVDPMXSWGWQRLDKECAFROFNDROCADLXBEAROGTEKJSVSSDETKQUGBSADFQNWTHRWJNDAXIOFIFYKHZSCCNBOUVLTWYIZFPGGJUA");
    msg.service_type = 226U;

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
    msg.setTimeStamp(0.42777357566854923);
    msg.setSource(57991U);
    msg.setSourceEntity(88U);
    msg.setDestination(38016U);
    msg.setDestinationEntity(177U);
    msg.value = 0.18546047009980104;

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
    msg.setTimeStamp(0.5708711993451993);
    msg.setSource(45805U);
    msg.setSourceEntity(9U);
    msg.setDestination(34725U);
    msg.setDestinationEntity(1U);
    msg.value = 0.8977378130462763;

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
    msg.setTimeStamp(0.4737812025566184);
    msg.setSource(11276U);
    msg.setSourceEntity(203U);
    msg.setDestination(6295U);
    msg.setDestinationEntity(114U);
    msg.value = 0.7673980456436774;

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
    msg.setTimeStamp(0.7086545309789726);
    msg.setSource(59547U);
    msg.setSourceEntity(11U);
    msg.setDestination(14368U);
    msg.setDestinationEntity(246U);
    msg.value = 0.8500650462246635;

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
    msg.setTimeStamp(0.638362249495882);
    msg.setSource(13876U);
    msg.setSourceEntity(105U);
    msg.setDestination(32544U);
    msg.setDestinationEntity(1U);
    msg.value = 0.864936297925341;

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
    msg.setTimeStamp(0.6056842685851214);
    msg.setSource(41875U);
    msg.setSourceEntity(84U);
    msg.setDestination(59620U);
    msg.setDestinationEntity(74U);
    msg.value = 0.7939100958254783;

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
    msg.setTimeStamp(0.07594821932796259);
    msg.setSource(19975U);
    msg.setSourceEntity(242U);
    msg.setDestination(2986U);
    msg.setDestinationEntity(8U);
    msg.value = 0.014623995329062;

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
    msg.setTimeStamp(0.8920107848430633);
    msg.setSource(65316U);
    msg.setSourceEntity(114U);
    msg.setDestination(40644U);
    msg.setDestinationEntity(166U);
    msg.value = 0.8523195672423972;

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
    msg.setTimeStamp(0.9659054082611976);
    msg.setSource(58362U);
    msg.setSourceEntity(132U);
    msg.setDestination(42689U);
    msg.setDestinationEntity(35U);
    msg.value = 0.3366464900156412;

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
    msg.setTimeStamp(0.704211149960794);
    msg.setSource(20553U);
    msg.setSourceEntity(43U);
    msg.setDestination(45047U);
    msg.setDestinationEntity(244U);
    msg.number.assign("QEALJTVIEUOOSHQIGETDUNFLDFXRSRJAFNIVWVRKPGNNBYVBKFCSNECWYDVWWFXHGMBKRTKZLNQCUYQUVOQGOEFUYMXPVBVRXTSJXSAMLEMQFRXDCBHOJMPHGWYSPRBBNJMZSVDIPJZKUYWNEIUIGIOGLJKCCZYTC");
    msg.timeout = 44397U;
    msg.contents.assign("QHATRJMGXBIAIIUUYPUTBPNCZKXBABUWRGDDDPCJTRBPTF");

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
    msg.setTimeStamp(0.32994010617925473);
    msg.setSource(58396U);
    msg.setSourceEntity(182U);
    msg.setDestination(49000U);
    msg.setDestinationEntity(71U);
    msg.number.assign("BGXLURWVBQXEMHJFZNLGNYKHRVVBZPDPIHSPVPAQDIHICAPJZGWDGJKXAJRSRHLQUHYUVONBNEFJUVREOTWEWIFQOOQXSIDIHWXGLFVCUWBZNMQXBYDHABBTLEDFYQNSSJBCZIWCKQJTAAMXLMDFSVLRAZPYYBYLMURNGWFKOMFHIEHECKOTISTYDUPSCXZGZNXTDMJSKQMKWUTKLMOVWSYGCJGPREITPRXCTNJLKEACFOOVAA");
    msg.timeout = 60010U;
    msg.contents.assign("QRACFDGWPBMJUZKJKGXETSZUTGRHOHHBNFVMOLHEAPDBYANDTKJUZWAQIWJAODRVUEIKFHSCJQIDORNARJZNIQQYOHGAEEMIVXJHTWRZNBWINESOCQVYCPUSTMSLXGYGBXBUZGBFLEJYVCWUWCNJTSKMAWCAGDHGPSPNFPXPYILXIKRYEZXMVGZBLXUVHRQEMKBHCLLQSSTFRYOFNBKVMTIYTMORKMVCWNEOQDXPUFADLDKFDXYLCU");

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
    msg.setTimeStamp(0.08988615638752362);
    msg.setSource(16092U);
    msg.setSourceEntity(244U);
    msg.setDestination(56340U);
    msg.setDestinationEntity(32U);
    msg.number.assign("APLBHPHUAZDRGJRESHHTLYKGOEYSNICIIMLYPLWGXDKQFSBKBJAHJTVYKWTNPAYJKMGVGYJXGXCODZTVWRETMMPHJTOLFQMWKRZRNPDOZDUBKONPODWWAIQUSJFCZIHOJWGDMEICRLUQZITXHNIXLBTXHAQASPCCSQCMMNCNUUDBADFRIZNSGLVEBAVYUTUWCYQZEQZWVGOZXLOKOQFPEYQIERSVSRJRBVFMLTFSFHUDXEF");
    msg.timeout = 43131U;
    msg.contents.assign("FUDBAYBRARGMSQWAHFCXZWIXRETKYOMHFOEDBERWDNBLOAUQRFBRUGSYPYJASGPFZGUHVIPJFMPEPUNJWIDHNWXQOAFHZUPVCCMGNGTQWUJLRVDKRNDOXBKOLQVZYQVJZGMBSQKWKDNCQYCGMVUVJLFEJSSOEOKICTCXLXAXMQYCNQLKHDACECLWPBVSIOKULXEPNPLWJZIAFVKKFYHBUHYMMEJ");

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
    msg.setTimeStamp(0.19977923845652357);
    msg.setSource(31799U);
    msg.setSourceEntity(58U);
    msg.setDestination(13640U);
    msg.setDestinationEntity(173U);
    msg.seq = 2709048057U;
    msg.destination.assign("KQZMZNUSDPBDGIOR");
    msg.timeout = 26835U;
    const char tmp_msg_0[] = {0, 108, -127, 18, 108, 119, -14, -85, 27, -97};
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
    msg.setTimeStamp(0.8876636370276809);
    msg.setSource(60987U);
    msg.setSourceEntity(13U);
    msg.setDestination(19924U);
    msg.setDestinationEntity(193U);
    msg.seq = 1767700114U;
    msg.destination.assign("ZROREENDCDESMSLFSBZUXERBSARNZGLNCIKHVTLVUBYWETKRRGBWIDQJMYVONRGHMFQQOMMFPPFGFMNTJHASNGVXFFVBKTDILJWTYBWIQTSFHQKGXXUKPUDTZVWIMWAPGTOAJJVXHYAQYHYR");
    msg.timeout = 39155U;
    const char tmp_msg_0[] = {116, -87, 123, -73, 59, -125, 74, 42, -24, -27, -46, -95, 120, -54, -29, -122, -11, 37, 85, -12, -81, 15, -93, -62, 52, -33, 76, -75, -22, 85, 105, 117, 122, -17, -62, 89, -69, -36, 35, -96, 50, 4, 16, -16, 80, -68, -49, -121, 11, -53, 68, -118, 123, -57, -88, 108, 95, 97, -98, 74, 120, -58, 14, -53, 122, 73, 78, -25, -50, -39, 52, 68, -13, -36, -6, 33, -76, 80, 111, 20, 75, -104, -67, -80, 110, 29, -119, -22, -34, 75, 22, 5, -42, 13, 123, -116, -81, 74, -29, -28, 62, -34, 23, -57, 31, -22, -104, -77, -99, -24, -17, 87, -23, 51, 83, 42, 98, -71, -57, 118, -40, -37, -60, 34, -7, -20, -108, -112, -94, -21, -65, -96, -106, 38, 34, 23, 92, -53, 64, 74, 33, -20, -64, -25, 57, -89, -3, 79, -111, 88, -58, 115, 21, 94, -7, 27, -116, -115, 79, 25, -121, -10, 114, 85, 115, -78, 58, 23, -96, -102, 96, -88, 17, 95, 51, -37, 16, -19, -20, 106, -53, 81, 26, -38, -114, 102, -105, 98, 122, 115, 41, 92, 32, -92, -32, -22, 20, -72, -20, 15, -96, -23, 85, -25, -112, -61, -70, 3, -6, -13, 22, -87, -105, -115, 66, -110, -93, -38, -97, 11, 40, 38, -105, 16, -90, -29, 95, -102, 97, -55, -81, 72, 123};
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
    msg.setTimeStamp(0.9437474043391232);
    msg.setSource(51427U);
    msg.setSourceEntity(134U);
    msg.setDestination(8080U);
    msg.setDestinationEntity(141U);
    msg.seq = 3502977685U;
    msg.destination.assign("NEAEZUYAARZGLJCGDHAGTQ");
    msg.timeout = 31024U;
    const char tmp_msg_0[] = {-30, 124, -64, 88, -72, -81, 36, -89, 52, 29, 6, 27, -66, -94, -14, 63, 112, 23, -39, -71, 73, -101, -14, 65, 79, -13, 99, -69, -128, -38, 76, -6, -41, -85, -112, -76, -97, 37, 18, 113, -121, -72, 122, -61, -62, 124, 75, -66, -20, -112, -54, -61, 37, -85, 100, 31, -122, 100, 2, 84, -112, -12, -32};
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
    msg.setTimeStamp(0.24915214877037706);
    msg.setSource(21584U);
    msg.setSourceEntity(64U);
    msg.setDestination(40970U);
    msg.setDestinationEntity(47U);
    msg.source.assign("IAMDFJUZXESUZYATIWCVKHJMIAPDJWNYBDYWIESSFZGEBNMMGIVXDIANJKHRJRMNQUGIAZZORKDTWRTIBVWKLBRQHHKKPRTGKNUCFRSZNGURCXVYPAXDTWLWVFORCGKXOCOKSHMBCPFHDUVHBHNYDCLZAN");
    const char tmp_msg_0[] = {-94, 110, -1, 9, -103, -52, 6, 29, -106, -43, 104, 120, 74, 83, 55, 100, 43, -111, 6, -117, 64, -28, -30, 120, -115, 123, 86, 79, 29, -62, -18, 14, -57, 45};
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
    msg.setTimeStamp(0.7187065192505573);
    msg.setSource(47782U);
    msg.setSourceEntity(89U);
    msg.setDestination(37879U);
    msg.setDestinationEntity(157U);
    msg.source.assign("KGMAOMBMSTSYRTIEGFYPDZCUQQIRWFKIHXWGUKBZTZTOUBVUMXJAPEKMWBZDYNEATLJERYWDGYIMOQLXTTRVVPRCOJKFRMLCHWUPPQXVNIYCOEGNYSUKFPOFICYEDQXMZSNTXAJWWASAZLAWONLNIHPRSJEPQDFSKGELHVJTZJZOWVRZCIYNQRFDSUBGLBDGDGDANVFQEHIXHUVMEICMNCAAJVXQUHBZFKVH");
    const char tmp_msg_0[] = {-86, -118, 88, -5, -92, -64, 34, -66, -22, 111, -9, -85, 22, 19, -122, -108, 115, 81, 123, 26, 15, 39, -38, -122, -13, -6, -19, -100, 98, -53, -38, 21, -97, 11, 123, -76, 7, 72, -116, 120, -34, -86, 109, -61, 73, -109, -119, -113, 43, 23, 68, -107, -85, -71, 17, 118, -53, 100, -111, 98, -112, -4, 67, -43, -26, 115, -87, 113, -104, 15, -61, 36, -70, 52, -107, -31, -55, -108, -98, 115, 102, -103, 47, 112, 3, 70, 44, 97, 100, -37, 53, 62, -116, 38, 50, 27, 108, -72, -41, -20, -82, 62, -128, 97};
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
    msg.setTimeStamp(0.7705387078111615);
    msg.setSource(55213U);
    msg.setSourceEntity(134U);
    msg.setDestination(34770U);
    msg.setDestinationEntity(43U);
    msg.source.assign("KVNWZFEUYJNDAIVNTEVDHVPWYKMAVAZSYSCOMQJGHHIFIXEMDIVUTUGLQWPPBQRJRMSQCYXQSNGLLBCVFJUAGVWNBYNEYHEDRWFCXPUZOKRSOCKBJXLDNKGTJTEAMSOZHZWSPLCHOBO");
    const char tmp_msg_0[] = {-24, 77, -74, -73, -112, 39, -119, -79, -42, 57, -73, 23, -55, -78, 26, 89, -117, -60, -124, -66, -106, -42, 118, 35, -48, 76, -113, 119, -20, -87, 42, 1, -48, 71, 79, 52, -79, -104, -40, 102, -47, 7, 60, -105, 80, 26, -116, -84, 103, -29, -98, 37, 71, 107, -80, 23, -12, -90, -105, -17, -7, -82, -22, 77, 44, -8, 57, 62, -20, -125, -90, -83, 94, 47, 65, -28, 12, 109, -56, 90, 2, 34, -37, 33, 30, -98, 115, 9, 30, 57, -103, -93, 62, 15, -100, -74, -81, -123, 120, 85, 2, 2, -56, 32, 50, 50, -117, 25, 19, -86, -6, -56, 70, 2, 76, 76, 49, -100, -64, -97, 122, -10, 112, 81, 70, 68, -9, 4, -109, 5, 24, -56, -93, -87, -57, 28, -89, 61, 61, -12, -111, 67, -84, 33, -96, -118, 22, -101, 95, 58, 44, -96, 109, 74, -96, -108, 4, -6, -121, 12, 126, 21, 101, 64, -98, 13, 98, -34, -66, 93, -2, -44, 42, -77, -76, -43, 118, 48, 6, -119, 38, -25, 80, -114, 59, -92, -110, -47, -4, -56, 122, -33, 6, 69, 44, -26, -109, 123, -86, 13, -51, -51, 43, 110, -111, -111, 41, 51, 77, -80, 90, -38, -69, 52, 113, -16, 23, 48, -88, 79, 77, -74, -73, -12, 61};
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
    msg.setTimeStamp(0.44929850583178677);
    msg.setSource(17700U);
    msg.setSourceEntity(211U);
    msg.setDestination(1965U);
    msg.setDestinationEntity(76U);
    msg.seq = 757348134U;
    msg.state = 85U;
    msg.error.assign("GWRBSHSVIHZQVEUQEKCVXLPUFPXGSXSMCVBTOXOQDFRZQODGJFAZSJYNWLTQQTHAOLMJALCZKLBFJTDK");

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
    msg.setTimeStamp(0.2419320433856852);
    msg.setSource(58068U);
    msg.setSourceEntity(218U);
    msg.setDestination(21924U);
    msg.setDestinationEntity(79U);
    msg.seq = 2290655690U;
    msg.state = 90U;
    msg.error.assign("YOOCRHQIETMIXYSVUVNPWJFIVYPDVLWAJHOABXEGWNWRTLNTRCSMOZNJJQJTNJAMOSULRCYBOLNLHUJTKRMOGKYPZSSBCKXXNGEJPUSIWEIWXNVZFFQDPYTWFLKEETHCUIAUXHFLUQV");

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
    msg.setTimeStamp(0.11475345844041063);
    msg.setSource(35583U);
    msg.setSourceEntity(41U);
    msg.setDestination(45297U);
    msg.setDestinationEntity(190U);
    msg.seq = 2585543653U;
    msg.state = 198U;
    msg.error.assign("CGUWUONIYQRPDGMKVQKUXGVUKWSYZAILJENTSZSOOAYHLLBRNZNFDIXSJIHAEVJPOWALVXFEFWDZDLMXMACMWCWDCITGVUVLDJIZPNVBLWLGRVEMZDPRQCNRFUTALDXIBKPUNQPHJHYHQQSXBSQNEAMHWMIUMBRAXSPQZBEGWSKHBEYCZKLFPJESRFTNIBHGICDVYEFFOYBWRYOXOXTJBMPKTJROV");

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
    msg.setTimeStamp(0.7328563792352721);
    msg.setSource(57191U);
    msg.setSourceEntity(45U);
    msg.setDestination(52518U);
    msg.setDestinationEntity(215U);
    msg.id = 246U;
    msg.range = 0.27301246414879876;

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
    msg.setTimeStamp(0.060209206353989186);
    msg.setSource(48078U);
    msg.setSourceEntity(98U);
    msg.setDestination(28560U);
    msg.setDestinationEntity(205U);
    msg.id = 251U;
    msg.range = 0.27812772256092644;

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
    msg.setTimeStamp(0.11804586084790669);
    msg.setSource(58433U);
    msg.setSourceEntity(90U);
    msg.setDestination(21141U);
    msg.setDestinationEntity(244U);
    msg.id = 169U;
    msg.range = 0.31104392223299715;

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
    msg.setTimeStamp(0.8499135848837773);
    msg.setSource(65011U);
    msg.setSourceEntity(136U);
    msg.setDestination(61608U);
    msg.setDestinationEntity(172U);
    msg.tx = 180U;
    msg.channel = 108U;
    msg.timer = 43312U;

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
    msg.setTimeStamp(0.5155365414059487);
    msg.setSource(15518U);
    msg.setSourceEntity(225U);
    msg.setDestination(62130U);
    msg.setDestinationEntity(150U);
    msg.tx = 217U;
    msg.channel = 216U;
    msg.timer = 39607U;

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
    msg.setTimeStamp(0.5563548312791493);
    msg.setSource(60751U);
    msg.setSourceEntity(205U);
    msg.setDestination(55094U);
    msg.setDestinationEntity(104U);
    msg.tx = 185U;
    msg.channel = 78U;
    msg.timer = 11212U;

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
    msg.setTimeStamp(0.052666701859548914);
    msg.setSource(64612U);
    msg.setSourceEntity(237U);
    msg.setDestination(3663U);
    msg.setDestinationEntity(213U);
    msg.beacon.assign("DMTCKKQLGAXUBAJXGRJVPFTZQKHPWSJNZLITFZSLHINSOQMYOSPNCQIXMZZGSNIQJHHKXRJYBYRMTLUFJCHEJEEWKVFYFZNKEMUJLAAQERRWZKNYOTAOYDCRLCFIEAADASYWFKGBFDQISCEISPUCITTFWDUXXRPRJ");
    msg.lat = 0.5379474925653869;
    msg.lon = 0.9125219811031088;
    msg.depth = 0.8234601030589612;
    msg.query_channel = 235U;
    msg.reply_channel = 127U;
    msg.transponder_delay = 121U;

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
    msg.setTimeStamp(0.03817237751390612);
    msg.setSource(19298U);
    msg.setSourceEntity(123U);
    msg.setDestination(42395U);
    msg.setDestinationEntity(202U);
    msg.beacon.assign("PXTHCQXMEYRTQQNQWZNBPVKYTVWEBLUXGLLRPXCVJOABDFVCANOCTKIAGBDDBOZYPARDRPFJMIJCTGZHMWBHWFHQTOKMJSZQLKYESLIEKKCFYGMWOFNRVOPIZTVIURMAXYUKGYPHVNYNXKNESLARFQLQHNBNFOUUOEESJSUXZXTDHDYSANCJZJAPBMWYVTZEUSDRIZWSATFGFWULGQMOKCGHGMOE");
    msg.lat = 0.7733828468517936;
    msg.lon = 0.586334081217696;
    msg.depth = 0.38514075543972726;
    msg.query_channel = 228U;
    msg.reply_channel = 243U;
    msg.transponder_delay = 90U;

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
    msg.setTimeStamp(0.27670671156902393);
    msg.setSource(55761U);
    msg.setSourceEntity(68U);
    msg.setDestination(27675U);
    msg.setDestinationEntity(196U);
    msg.beacon.assign("YGAULQWTSTIUMJWSEJKVSAJVEIFMMFNTKCWWXJKCQCORRZZEPUBOYKIFVULONWYDUZCLMCQZEBEZNMARETNYUTWOARRZKGFQUKBAHCGKQRFBWCTVWEIXJBIGYNIAJJYBXDRPXGVNMXHQPHLSDGHGFDOVWBNUCPUSRQIWKACAXPZSHXLPIPLY");
    msg.lat = 0.13990894530117648;
    msg.lon = 0.41954355870393756;
    msg.depth = 0.06341274749903125;
    msg.query_channel = 113U;
    msg.reply_channel = 38U;
    msg.transponder_delay = 199U;

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
    msg.setTimeStamp(0.6651102666864359);
    msg.setSource(2063U);
    msg.setSourceEntity(211U);
    msg.setDestination(49009U);
    msg.setDestinationEntity(238U);
    msg.op = 84U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ICTAWWRFMVAEGEPIDGDEKSRVGBDJEHKYOARMBPJFTURDBUMIWENBQREFMIPZENK");
    tmp_msg_0.lat = 0.13643570954788842;
    tmp_msg_0.lon = 0.03014934974841188;
    tmp_msg_0.depth = 0.9369858399530777;
    tmp_msg_0.query_channel = 143U;
    tmp_msg_0.reply_channel = 209U;
    tmp_msg_0.transponder_delay = 13U;
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
    msg.setTimeStamp(0.0516906765095676);
    msg.setSource(1459U);
    msg.setSourceEntity(169U);
    msg.setDestination(45427U);
    msg.setDestinationEntity(23U);
    msg.op = 226U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TXBASIGJSJFFIMLZHRWCJVLZWDRKSKEOLUDFPEYUUZCSFJEQVNWDQKVBWNXKCDZGJDXDMGSTYEAPGKRYQANVLSTTRUVTMHPGNRLCGNZAGOCQQUFVLETOBNDHID");
    tmp_msg_0.lat = 0.192912583990419;
    tmp_msg_0.lon = 0.43711605540524556;
    tmp_msg_0.depth = 0.6221061651295267;
    tmp_msg_0.query_channel = 83U;
    tmp_msg_0.reply_channel = 1U;
    tmp_msg_0.transponder_delay = 13U;
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
    msg.setTimeStamp(0.881432590696917);
    msg.setSource(55104U);
    msg.setSourceEntity(236U);
    msg.setDestination(21305U);
    msg.setDestinationEntity(50U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.26694198316122053);
    msg.setSource(5648U);
    msg.setSourceEntity(175U);
    msg.setDestination(6593U);
    msg.setDestinationEntity(127U);
    msg.address = 70U;

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
    msg.setTimeStamp(0.5818514988899961);
    msg.setSource(50824U);
    msg.setSourceEntity(181U);
    msg.setDestination(18890U);
    msg.setDestinationEntity(139U);
    msg.address = 198U;

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
    msg.setTimeStamp(0.6465346067476819);
    msg.setSource(59669U);
    msg.setSourceEntity(153U);
    msg.setDestination(20814U);
    msg.setDestinationEntity(35U);
    msg.address = 119U;

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
    msg.setTimeStamp(0.9933926107417951);
    msg.setSource(57822U);
    msg.setSourceEntity(154U);
    msg.setDestination(43466U);
    msg.setDestinationEntity(126U);
    msg.address = 11U;
    msg.status = 103U;
    msg.range = 0.5813612649722939;

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
    msg.setTimeStamp(0.8836776574518498);
    msg.setSource(14519U);
    msg.setSourceEntity(197U);
    msg.setDestination(42222U);
    msg.setDestinationEntity(42U);
    msg.address = 200U;
    msg.status = 55U;
    msg.range = 0.7547367070369007;

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
    msg.setTimeStamp(0.07715599866775591);
    msg.setSource(6353U);
    msg.setSourceEntity(243U);
    msg.setDestination(59277U);
    msg.setDestinationEntity(228U);
    msg.address = 183U;
    msg.status = 152U;
    msg.range = 0.6775100688098;

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
    msg.setTimeStamp(0.39056280556146805);
    msg.setSource(29345U);
    msg.setSourceEntity(197U);
    msg.setDestination(11054U);
    msg.setDestinationEntity(72U);
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 159U;
    tmp_msg_0.quality = 227U;
    tmp_msg_0.reps = 113U;
    tmp_msg_0.tsize = 41U;
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
    msg.setTimeStamp(0.44357589399057007);
    msg.setSource(21715U);
    msg.setSourceEntity(154U);
    msg.setDestination(56356U);
    msg.setDestinationEntity(129U);
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7852557770970736;
    tmp_msg_0.lon = 0.778926899408202;
    tmp_msg_0.alt = 0.661551073927046;
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
    msg.setTimeStamp(0.8659661312249094);
    msg.setSource(26799U);
    msg.setSourceEntity(202U);
    msg.setDestination(41481U);
    msg.setDestinationEntity(104U);
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 56659U;
    tmp_msg_0.lat = 0.4163836712500796;
    tmp_msg_0.lon = 0.6979796589852192;
    tmp_msg_0.z = 0.4292484403553256;
    tmp_msg_0.z_units = 36U;
    tmp_msg_0.speed = 0.06887751827408894;
    tmp_msg_0.speed_units = 133U;
    tmp_msg_0.duration = 52858U;
    tmp_msg_0.radius = 0.639662342986344;
    tmp_msg_0.flags = 27U;
    tmp_msg_0.custom.assign("JCTOFJABYYCWLHVQAQKOBVZKCMWJZFTUBGXCEXWNIFNKXMTSTGEMVINYPPMLKQDTYIYUDKCJHVCVJOFFCHOGFXLZOKICYUJNHPWVLJHZZHSFQTRGMKMASMZRMCFTUYEPLMRRPDXOJXYLSQAAKVZDUWTTPUNINGRAGJGLEUBSOM");
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
    msg.setTimeStamp(0.17352706052187916);
    msg.setSource(47210U);
    msg.setSourceEntity(54U);
    msg.setDestination(24409U);
    msg.setDestinationEntity(188U);
    msg.enable = 163U;

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
    msg.setTimeStamp(0.6220540217660134);
    msg.setSource(14508U);
    msg.setSourceEntity(134U);
    msg.setDestination(48056U);
    msg.setDestinationEntity(52U);
    msg.enable = 123U;

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
    msg.setTimeStamp(0.5297411674071884);
    msg.setSource(24009U);
    msg.setSourceEntity(46U);
    msg.setDestination(61016U);
    msg.setDestinationEntity(205U);
    msg.enable = 227U;

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
    msg.setTimeStamp(0.6811158453683089);
    msg.setSource(50893U);
    msg.setSourceEntity(10U);
    msg.setDestination(48853U);
    msg.setDestinationEntity(147U);
    msg.summary = 0U;
    msg.level = 84U;

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
    msg.setTimeStamp(0.3390393106712454);
    msg.setSource(5481U);
    msg.setSourceEntity(173U);
    msg.setDestination(52039U);
    msg.setDestinationEntity(217U);
    msg.summary = 76U;
    msg.level = 210U;

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
    msg.setTimeStamp(0.25913234903139426);
    msg.setSource(5120U);
    msg.setSourceEntity(218U);
    msg.setDestination(24096U);
    msg.setDestinationEntity(112U);
    msg.summary = 122U;
    msg.level = 135U;

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
    msg.setTimeStamp(0.14051999554557804);
    msg.setSource(58207U);
    msg.setSourceEntity(152U);
    msg.setDestination(4226U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.5007432033743978);
    msg.setSource(5186U);
    msg.setSourceEntity(100U);
    msg.setDestination(36057U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.40177740469462486);
    msg.setSource(49145U);
    msg.setSourceEntity(205U);
    msg.setDestination(544U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.4310586454010802);
    msg.setSource(24043U);
    msg.setSourceEntity(106U);
    msg.setDestination(56549U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.30261506909225155);
    msg.setSource(13254U);
    msg.setSourceEntity(18U);
    msg.setDestination(49419U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.9387459401574754);
    msg.setSource(37523U);
    msg.setSourceEntity(153U);
    msg.setDestination(46841U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.03624027495572446);
    msg.setSource(56096U);
    msg.setSourceEntity(149U);
    msg.setDestination(53499U);
    msg.setDestinationEntity(91U);
    msg.op = 104U;
    msg.system.assign("AGTCBFACPJIKPQHNZYJYMWJGUVMSLWGUKZBMTHCYUESQIOYVDOQMZFSPEJHRGOXNLTIEFUFNAABXLMYKXLIBEIZSQMQOSLFPKTEJQZXFURLVIYWVZALWCWSYXIJJQBKAYKRRHIUFGOKFNPTDNBADRVNBCCBQUWHXTXWVFQGXVOTNHTEHRPPXQZCHEKZLORWGPVTEXBISJLSPOYCMEDMHDUZARODDVNLGRCWUDNWRM");
    msg.range = 0.4267241753618145;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 15U;
    tmp_msg_0.error.assign("TPBIPISZSEO");
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
    msg.setTimeStamp(0.21232370273053736);
    msg.setSource(849U);
    msg.setSourceEntity(250U);
    msg.setDestination(63193U);
    msg.setDestinationEntity(207U);
    msg.op = 122U;
    msg.system.assign("ONPIXCVFMJPUIQYDRTKZTJHFSUJYUXSMOMBENWJATSPOVPWKWAQFKEMZWJEGEITVWGSXYEDRYUSQHZJZJBYBSMDLSIWVSVZCPRFXPHKMCNRLLRUQDVFOAZZUBBAFBTIMWONXKKXSCFHLDKTC");
    msg.range = 0.5540309717332987;
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.16645927662785742;
    tmp_msg_0.y = 0.2981097530247153;
    tmp_msg_0.z = 0.2175409314071397;
    tmp_msg_0.phi = 0.48802437466003024;
    tmp_msg_0.theta = 0.9068732202259677;
    tmp_msg_0.psi = 0.5425783234790462;
    tmp_msg_0.p = 0.29750822846978564;
    tmp_msg_0.q = 0.5721243433581455;
    tmp_msg_0.r = 0.8546077313031458;
    tmp_msg_0.u = 0.31329983750589485;
    tmp_msg_0.v = 0.3342177908548857;
    tmp_msg_0.w = 0.5964146030967611;
    tmp_msg_0.bias_psi = 0.5931419669548716;
    tmp_msg_0.bias_r = 0.9200263076104713;
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
    msg.setTimeStamp(0.8074702407975196);
    msg.setSource(20162U);
    msg.setSourceEntity(206U);
    msg.setDestination(48501U);
    msg.setDestinationEntity(46U);
    msg.op = 178U;
    msg.system.assign("INMYDXENVTVCJDAHPCBVBWIMPEGTS");
    msg.range = 0.046155602014888;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.34880918218744184;
    tmp_msg_0.lon = 0.10050714083027801;
    tmp_msg_0.z = 0.010997528986254168;
    tmp_msg_0.z_units = 148U;
    tmp_msg_0.radius = 0.5806482483041168;
    tmp_msg_0.duration = 18515U;
    tmp_msg_0.speed = 0.8672914278180162;
    tmp_msg_0.speed_units = 165U;
    tmp_msg_0.custom.assign("SKFKPCLVMGGVHZTSYOWLWAMIQPWXCOTNLUBUCGZA");
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
    msg.setTimeStamp(0.17557247047850777);
    msg.setSource(60655U);
    msg.setSourceEntity(238U);
    msg.setDestination(37638U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.96510004318621);
    msg.setSource(31795U);
    msg.setSourceEntity(133U);
    msg.setDestination(50285U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.08131757291121733);
    msg.setSource(15465U);
    msg.setSourceEntity(55U);
    msg.setDestination(27305U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.08962723193504596);
    msg.setSource(29697U);
    msg.setSourceEntity(219U);
    msg.setDestination(44901U);
    msg.setDestinationEntity(18U);
    msg.list.assign("FMPEXHEQZQGKTNIXUNEFENXTFXAZOOYKTSALKPNGEING");

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
    msg.setTimeStamp(0.8233632108707039);
    msg.setSource(57978U);
    msg.setSourceEntity(72U);
    msg.setDestination(46827U);
    msg.setDestinationEntity(148U);
    msg.list.assign("HLGUCGPQNKXFDWAJPZMPJUWHYCIJXINTVTFJNIAUCHPKGLBUOLOBLURQTGMBENIKBNAVJSLPHKXWUXTPKPGOEKOQIQY");

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
    msg.setTimeStamp(0.26837704923809913);
    msg.setSource(16656U);
    msg.setSourceEntity(254U);
    msg.setDestination(25919U);
    msg.setDestinationEntity(252U);
    msg.list.assign("NCSFQPVVJTRSLCAGQPVFRVAULCYCKIPDBQ");

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
    msg.setTimeStamp(0.0320246766683554);
    msg.setSource(54368U);
    msg.setSourceEntity(176U);
    msg.setDestination(26208U);
    msg.setDestinationEntity(115U);
    msg.value = -25680;

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
    msg.setTimeStamp(0.3144041037747448);
    msg.setSource(48393U);
    msg.setSourceEntity(48U);
    msg.setDestination(24093U);
    msg.setDestinationEntity(201U);
    msg.value = 11440;

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
    msg.setTimeStamp(0.8610607172509304);
    msg.setSource(40433U);
    msg.setSourceEntity(224U);
    msg.setDestination(12726U);
    msg.setDestinationEntity(103U);
    msg.value = -5175;

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
    msg.setTimeStamp(0.709416874800248);
    msg.setSource(47534U);
    msg.setSourceEntity(218U);
    msg.setDestination(1614U);
    msg.setDestinationEntity(186U);
    msg.value = 0.860617056254812;

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
    msg.setTimeStamp(0.33738858608400735);
    msg.setSource(6834U);
    msg.setSourceEntity(164U);
    msg.setDestination(62271U);
    msg.setDestinationEntity(44U);
    msg.value = 0.8721130102561345;

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
    msg.setTimeStamp(0.9049931878095526);
    msg.setSource(54550U);
    msg.setSourceEntity(174U);
    msg.setDestination(38031U);
    msg.setDestinationEntity(251U);
    msg.value = 0.33325993021364086;

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
    msg.setTimeStamp(0.2364074273455652);
    msg.setSource(10552U);
    msg.setSourceEntity(55U);
    msg.setDestination(55441U);
    msg.setDestinationEntity(79U);
    msg.value = 0.07032272776584092;

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
    msg.setTimeStamp(0.7390438384347167);
    msg.setSource(27020U);
    msg.setSourceEntity(253U);
    msg.setDestination(58464U);
    msg.setDestinationEntity(150U);
    msg.value = 0.2814398474076494;

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
    msg.setTimeStamp(0.14453906777044834);
    msg.setSource(14336U);
    msg.setSourceEntity(115U);
    msg.setDestination(63857U);
    msg.setDestinationEntity(115U);
    msg.value = 0.6599897302888704;

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
    msg.setTimeStamp(0.6394739044090073);
    msg.setSource(45571U);
    msg.setSourceEntity(90U);
    msg.setDestination(36492U);
    msg.setDestinationEntity(115U);
    msg.validity = 63847U;
    msg.type = 168U;
    msg.utc_year = 42826U;
    msg.utc_month = 178U;
    msg.utc_day = 181U;
    msg.utc_time = 0.04502623655810212;
    msg.lat = 0.5265309412979409;
    msg.lon = 0.13179327960976583;
    msg.height = 0.24480094010161002;
    msg.satellites = 240U;
    msg.cog = 0.20287486913143649;
    msg.sog = 0.8464963212164832;
    msg.hdop = 0.2896179443002934;
    msg.vdop = 0.6802299167425538;
    msg.hacc = 0.8437790535552991;
    msg.vacc = 0.9284236641686653;

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
    msg.setTimeStamp(0.21225280678260838);
    msg.setSource(36270U);
    msg.setSourceEntity(121U);
    msg.setDestination(30880U);
    msg.setDestinationEntity(138U);
    msg.validity = 37605U;
    msg.type = 145U;
    msg.utc_year = 31698U;
    msg.utc_month = 30U;
    msg.utc_day = 129U;
    msg.utc_time = 0.8680927626993876;
    msg.lat = 0.21870000376692633;
    msg.lon = 0.17336109500977448;
    msg.height = 0.16232838191208177;
    msg.satellites = 73U;
    msg.cog = 0.5735572332197294;
    msg.sog = 0.5498363041200339;
    msg.hdop = 0.2594741782101113;
    msg.vdop = 0.503944244395464;
    msg.hacc = 0.015998398305412942;
    msg.vacc = 0.9656801151407622;

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
    msg.setTimeStamp(0.7513645454965576);
    msg.setSource(51189U);
    msg.setSourceEntity(141U);
    msg.setDestination(50949U);
    msg.setDestinationEntity(131U);
    msg.validity = 11800U;
    msg.type = 214U;
    msg.utc_year = 30602U;
    msg.utc_month = 12U;
    msg.utc_day = 137U;
    msg.utc_time = 0.8066820047807661;
    msg.lat = 0.3079346155745647;
    msg.lon = 0.44973208693286104;
    msg.height = 0.6630097135850769;
    msg.satellites = 241U;
    msg.cog = 0.9378611768091544;
    msg.sog = 0.09113233701045553;
    msg.hdop = 0.6731371190961885;
    msg.vdop = 0.20867661941387228;
    msg.hacc = 0.0461980530204974;
    msg.vacc = 0.1760768898994005;

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
    msg.setTimeStamp(0.1972021583571284);
    msg.setSource(10439U);
    msg.setSourceEntity(143U);
    msg.setDestination(31192U);
    msg.setDestinationEntity(12U);
    msg.time = 0.4792812452059182;
    msg.phi = 0.09134744762210822;
    msg.theta = 0.8581775009120901;
    msg.psi = 0.016205714361580803;
    msg.psi_magnetic = 0.814188785729394;

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
    msg.setTimeStamp(0.9935619776380449);
    msg.setSource(8171U);
    msg.setSourceEntity(202U);
    msg.setDestination(61452U);
    msg.setDestinationEntity(123U);
    msg.time = 0.026323052728705942;
    msg.phi = 0.2645516652400923;
    msg.theta = 0.5499034952850905;
    msg.psi = 0.31735713675264376;
    msg.psi_magnetic = 0.597547118615531;

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
    msg.setTimeStamp(0.9486513711646724);
    msg.setSource(29212U);
    msg.setSourceEntity(228U);
    msg.setDestination(15750U);
    msg.setDestinationEntity(28U);
    msg.time = 0.8853953188419523;
    msg.phi = 0.6662412287141191;
    msg.theta = 0.5463402929295597;
    msg.psi = 0.7059233959894925;
    msg.psi_magnetic = 0.4738246836403952;

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
    msg.setTimeStamp(0.4521451022642674);
    msg.setSource(55243U);
    msg.setSourceEntity(236U);
    msg.setDestination(58964U);
    msg.setDestinationEntity(137U);
    msg.time = 0.4751539169110325;
    msg.x = 0.8795522517168068;
    msg.y = 0.9422659042548303;
    msg.z = 0.4151678942254329;
    msg.timestep = 0.9159808554509152;

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
    msg.setTimeStamp(0.5978796945073221);
    msg.setSource(16973U);
    msg.setSourceEntity(128U);
    msg.setDestination(34365U);
    msg.setDestinationEntity(140U);
    msg.time = 0.4827939454303757;
    msg.x = 0.42146988625311244;
    msg.y = 0.046025315923163945;
    msg.z = 0.8506941881863276;
    msg.timestep = 0.4591688448635628;

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
    msg.setTimeStamp(0.42162226723750673);
    msg.setSource(8846U);
    msg.setSourceEntity(200U);
    msg.setDestination(57993U);
    msg.setDestinationEntity(228U);
    msg.time = 0.384545438583467;
    msg.x = 0.597694603324288;
    msg.y = 0.905285570271505;
    msg.z = 0.699890838614965;
    msg.timestep = 0.5976108760621597;

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
    msg.setTimeStamp(0.4817867201768913);
    msg.setSource(7509U);
    msg.setSourceEntity(190U);
    msg.setDestination(24576U);
    msg.setDestinationEntity(185U);
    msg.time = 0.30991517633140386;
    msg.x = 0.8108206809909572;
    msg.y = 0.9701671520984555;
    msg.z = 0.19581531797813712;

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
    msg.setTimeStamp(0.10113224494482087);
    msg.setSource(10561U);
    msg.setSourceEntity(116U);
    msg.setDestination(40509U);
    msg.setDestinationEntity(181U);
    msg.time = 0.02880374580270051;
    msg.x = 0.2364797634013831;
    msg.y = 0.12291599446831447;
    msg.z = 0.869883885576883;

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
    msg.setTimeStamp(0.6941880500321995);
    msg.setSource(62665U);
    msg.setSourceEntity(123U);
    msg.setDestination(53998U);
    msg.setDestinationEntity(16U);
    msg.time = 0.7222520033402104;
    msg.x = 0.710551674730222;
    msg.y = 0.6190095983288796;
    msg.z = 0.49456969802111705;

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
    msg.setTimeStamp(0.6014648163158408);
    msg.setSource(18118U);
    msg.setSourceEntity(159U);
    msg.setDestination(61095U);
    msg.setDestinationEntity(37U);
    msg.time = 0.21231020133415546;
    msg.x = 0.6890861683575519;
    msg.y = 0.40746153111289474;
    msg.z = 0.15072450756317968;

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
    msg.setTimeStamp(0.05489521262376795);
    msg.setSource(54068U);
    msg.setSourceEntity(29U);
    msg.setDestination(20623U);
    msg.setDestinationEntity(203U);
    msg.time = 0.7402335305393487;
    msg.x = 0.13767656765785186;
    msg.y = 0.27528124796405895;
    msg.z = 0.1528474222868348;

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
    msg.setTimeStamp(0.09876981829881593);
    msg.setSource(29217U);
    msg.setSourceEntity(194U);
    msg.setDestination(56840U);
    msg.setDestinationEntity(164U);
    msg.time = 0.9098697072341282;
    msg.x = 0.37881913395889244;
    msg.y = 0.7731264460507475;
    msg.z = 0.7411510071049493;

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
    msg.setTimeStamp(0.3678417947321607);
    msg.setSource(54824U);
    msg.setSourceEntity(238U);
    msg.setDestination(27117U);
    msg.setDestinationEntity(121U);
    msg.time = 0.8723545365889013;
    msg.x = 0.3424641547998698;
    msg.y = 0.7628595833762088;
    msg.z = 0.25659590368289165;

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
    msg.setTimeStamp(0.9612144806209937);
    msg.setSource(31490U);
    msg.setSourceEntity(39U);
    msg.setDestination(4273U);
    msg.setDestinationEntity(28U);
    msg.time = 0.20718939715748363;
    msg.x = 0.8813043190914359;
    msg.y = 0.582169528664555;
    msg.z = 0.1439619527832119;

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
    msg.setTimeStamp(0.15363104175298192);
    msg.setSource(20306U);
    msg.setSourceEntity(11U);
    msg.setDestination(43689U);
    msg.setDestinationEntity(71U);
    msg.time = 0.38437937027482305;
    msg.x = 0.04548286718082406;
    msg.y = 0.4129896952492189;
    msg.z = 0.6813381586349048;

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
    msg.setTimeStamp(0.20338776903303146);
    msg.setSource(31774U);
    msg.setSourceEntity(186U);
    msg.setDestination(37693U);
    msg.setDestinationEntity(165U);
    msg.validity = 214U;
    msg.x = 0.6523087896905336;
    msg.y = 0.7104463241989938;
    msg.z = 0.015495270420047946;

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
    msg.setTimeStamp(0.45659021185931503);
    msg.setSource(59173U);
    msg.setSourceEntity(234U);
    msg.setDestination(51008U);
    msg.setDestinationEntity(21U);
    msg.validity = 106U;
    msg.x = 0.02315796377527457;
    msg.y = 0.9969257585805282;
    msg.z = 0.956838795325279;

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
    msg.setTimeStamp(0.3792618565303634);
    msg.setSource(18212U);
    msg.setSourceEntity(2U);
    msg.setDestination(5804U);
    msg.setDestinationEntity(248U);
    msg.validity = 38U;
    msg.x = 0.025615236584870416;
    msg.y = 0.08647204696886901;
    msg.z = 0.10620438330535609;

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
    msg.setTimeStamp(0.5169761069128271);
    msg.setSource(58315U);
    msg.setSourceEntity(236U);
    msg.setDestination(19196U);
    msg.setDestinationEntity(120U);
    msg.validity = 252U;
    msg.x = 0.5179369668302248;
    msg.y = 0.3308595664017495;
    msg.z = 0.23656037386013973;

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
    msg.setTimeStamp(0.4525381486080543);
    msg.setSource(50559U);
    msg.setSourceEntity(42U);
    msg.setDestination(64394U);
    msg.setDestinationEntity(229U);
    msg.validity = 70U;
    msg.x = 0.23183657069114072;
    msg.y = 0.36592584319776755;
    msg.z = 0.3712732029792978;

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
    msg.setTimeStamp(0.5443431067832106);
    msg.setSource(59838U);
    msg.setSourceEntity(139U);
    msg.setDestination(40633U);
    msg.setDestinationEntity(98U);
    msg.validity = 50U;
    msg.x = 0.4566236972860306;
    msg.y = 0.2312901387864028;
    msg.z = 0.023530728751324004;

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
    msg.setTimeStamp(0.14259005288041593);
    msg.setSource(52214U);
    msg.setSourceEntity(107U);
    msg.setDestination(40898U);
    msg.setDestinationEntity(222U);
    msg.time = 0.8140785678375331;
    msg.x = 0.8468722574434115;
    msg.y = 0.191564708466068;
    msg.z = 0.6207138727125207;

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
    msg.setTimeStamp(0.28925223901005004);
    msg.setSource(2674U);
    msg.setSourceEntity(75U);
    msg.setDestination(24147U);
    msg.setDestinationEntity(28U);
    msg.time = 0.2353273576641427;
    msg.x = 0.7765314019881385;
    msg.y = 0.19241483356132427;
    msg.z = 0.7666670224581598;

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
    msg.setTimeStamp(0.35620052456900075);
    msg.setSource(60772U);
    msg.setSourceEntity(179U);
    msg.setDestination(8234U);
    msg.setDestinationEntity(144U);
    msg.time = 0.8647738828952788;
    msg.x = 0.20462870211051243;
    msg.y = 0.8856811282659532;
    msg.z = 0.4524074981288211;

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
    msg.setTimeStamp(0.6482046842954533);
    msg.setSource(57876U);
    msg.setSourceEntity(249U);
    msg.setDestination(40882U);
    msg.setDestinationEntity(59U);
    msg.validity = 153U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8523547870352648;
    tmp_msg_0.beam_height = 0.026132437577644052;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.13904328976340785;

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
    msg.setTimeStamp(0.5429741879445723);
    msg.setSource(53658U);
    msg.setSourceEntity(147U);
    msg.setDestination(30662U);
    msg.setDestinationEntity(161U);
    msg.validity = 232U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.49154143940146755;
    tmp_msg_0.y = 0.8191961394865342;
    tmp_msg_0.z = 0.7579968083922071;
    tmp_msg_0.phi = 0.7183219141406143;
    tmp_msg_0.theta = 0.49035645340314005;
    tmp_msg_0.psi = 0.6114051738648236;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.6001323356306724;
    tmp_msg_1.beam_height = 0.9812280266673756;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.2668557189390728;

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
    msg.setTimeStamp(0.8925546574313706);
    msg.setSource(13678U);
    msg.setSourceEntity(59U);
    msg.setDestination(5195U);
    msg.setDestinationEntity(48U);
    msg.validity = 0U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.052028112303066254;
    tmp_msg_0.y = 0.344994279050027;
    tmp_msg_0.z = 0.09284708097190464;
    tmp_msg_0.phi = 0.30581005666108874;
    tmp_msg_0.theta = 0.22495471451486282;
    tmp_msg_0.psi = 0.2600729116105345;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5612091294532916;

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
    msg.setTimeStamp(0.09300926094319228);
    msg.setSource(9880U);
    msg.setSourceEntity(97U);
    msg.setDestination(15810U);
    msg.setDestinationEntity(9U);
    msg.value = 0.9873939221316176;

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
    msg.setTimeStamp(0.8610737121200517);
    msg.setSource(9571U);
    msg.setSourceEntity(48U);
    msg.setDestination(15436U);
    msg.setDestinationEntity(178U);
    msg.value = 0.7725956233162224;

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
    msg.setTimeStamp(0.3472429021320186);
    msg.setSource(29468U);
    msg.setSourceEntity(74U);
    msg.setDestination(4201U);
    msg.setDestinationEntity(193U);
    msg.value = 0.23841057472687677;

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
    msg.setTimeStamp(0.9505800374038813);
    msg.setSource(36294U);
    msg.setSourceEntity(148U);
    msg.setDestination(9967U);
    msg.setDestinationEntity(154U);
    msg.value = 0.01970304421327873;

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
    msg.setTimeStamp(0.8182487197119378);
    msg.setSource(44656U);
    msg.setSourceEntity(230U);
    msg.setDestination(806U);
    msg.setDestinationEntity(117U);
    msg.value = 0.22949410240749457;

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
    msg.setTimeStamp(0.8878672587824031);
    msg.setSource(15125U);
    msg.setSourceEntity(13U);
    msg.setDestination(21147U);
    msg.setDestinationEntity(145U);
    msg.value = 0.8576826252869719;

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
    msg.setTimeStamp(0.4608932325372468);
    msg.setSource(63617U);
    msg.setSourceEntity(187U);
    msg.setDestination(52755U);
    msg.setDestinationEntity(84U);
    msg.value = 0.23012862795394817;

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
    msg.setTimeStamp(0.7074302477851779);
    msg.setSource(42135U);
    msg.setSourceEntity(50U);
    msg.setDestination(60147U);
    msg.setDestinationEntity(22U);
    msg.value = 0.21558746500393067;

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
    msg.setTimeStamp(0.39170147168436553);
    msg.setSource(8705U);
    msg.setSourceEntity(24U);
    msg.setDestination(49784U);
    msg.setDestinationEntity(197U);
    msg.value = 0.7618645611955446;

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
    msg.setTimeStamp(0.01017891973071594);
    msg.setSource(51146U);
    msg.setSourceEntity(148U);
    msg.setDestination(41547U);
    msg.setDestinationEntity(171U);
    msg.value = 0.754967463844383;

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
    msg.setTimeStamp(0.6574159604233528);
    msg.setSource(41226U);
    msg.setSourceEntity(243U);
    msg.setDestination(2905U);
    msg.setDestinationEntity(163U);
    msg.value = 0.4077189290108646;

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
    msg.setTimeStamp(0.59064662140518);
    msg.setSource(41214U);
    msg.setSourceEntity(177U);
    msg.setDestination(31735U);
    msg.setDestinationEntity(85U);
    msg.value = 0.6169846350465988;

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
    msg.setTimeStamp(0.6502120395059902);
    msg.setSource(26712U);
    msg.setSourceEntity(104U);
    msg.setDestination(13267U);
    msg.setDestinationEntity(189U);
    msg.value = 0.7484331858063071;

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
    msg.setTimeStamp(0.14331040926728011);
    msg.setSource(63256U);
    msg.setSourceEntity(147U);
    msg.setDestination(6478U);
    msg.setDestinationEntity(228U);
    msg.value = 0.85903613814585;

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
    msg.setTimeStamp(0.787334750616986);
    msg.setSource(38871U);
    msg.setSourceEntity(101U);
    msg.setDestination(32808U);
    msg.setDestinationEntity(236U);
    msg.value = 0.7321060851985665;

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
    msg.setTimeStamp(0.6757158285476298);
    msg.setSource(6981U);
    msg.setSourceEntity(53U);
    msg.setDestination(14871U);
    msg.setDestinationEntity(182U);
    msg.value = 0.7763458821037811;

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
    msg.setTimeStamp(0.7992290142848841);
    msg.setSource(42714U);
    msg.setSourceEntity(80U);
    msg.setDestination(28796U);
    msg.setDestinationEntity(25U);
    msg.value = 0.460527177361471;

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
    msg.setTimeStamp(0.38220002698899125);
    msg.setSource(25944U);
    msg.setSourceEntity(195U);
    msg.setDestination(58002U);
    msg.setDestinationEntity(163U);
    msg.value = 0.33941163857614864;

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
    msg.setTimeStamp(0.5078388985594504);
    msg.setSource(46126U);
    msg.setSourceEntity(159U);
    msg.setDestination(61838U);
    msg.setDestinationEntity(133U);
    msg.value = 0.7026198036611523;

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
    msg.setTimeStamp(0.9621631903875112);
    msg.setSource(46645U);
    msg.setSourceEntity(249U);
    msg.setDestination(57769U);
    msg.setDestinationEntity(34U);
    msg.value = 0.5903385404662972;

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
    msg.setTimeStamp(0.27117747269003334);
    msg.setSource(28465U);
    msg.setSourceEntity(137U);
    msg.setDestination(43931U);
    msg.setDestinationEntity(65U);
    msg.value = 0.2576178496941105;

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
    msg.setTimeStamp(0.9803052239013142);
    msg.setSource(4928U);
    msg.setSourceEntity(194U);
    msg.setDestination(11369U);
    msg.setDestinationEntity(86U);
    msg.value = 0.9254403785158032;

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
    msg.setTimeStamp(0.8470566808607649);
    msg.setSource(42968U);
    msg.setSourceEntity(228U);
    msg.setDestination(29109U);
    msg.setDestinationEntity(220U);
    msg.value = 0.6072556446735181;

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
    msg.setTimeStamp(0.04166423182415102);
    msg.setSource(8671U);
    msg.setSourceEntity(69U);
    msg.setDestination(532U);
    msg.setDestinationEntity(50U);
    msg.value = 0.19275445427885596;

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
    msg.setTimeStamp(0.08971792642954768);
    msg.setSource(46133U);
    msg.setSourceEntity(178U);
    msg.setDestination(56803U);
    msg.setDestinationEntity(241U);
    msg.direction = 0.7850720596673332;
    msg.speed = 0.9551948006330021;

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
    msg.setTimeStamp(0.20424736950082945);
    msg.setSource(5599U);
    msg.setSourceEntity(220U);
    msg.setDestination(32595U);
    msg.setDestinationEntity(83U);
    msg.direction = 0.5642338242164292;
    msg.speed = 0.8242400829962685;

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
    msg.setTimeStamp(0.4442879386905987);
    msg.setSource(47374U);
    msg.setSourceEntity(226U);
    msg.setDestination(17380U);
    msg.setDestinationEntity(117U);
    msg.direction = 0.5679329222833054;
    msg.speed = 0.9167561368409197;

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
    msg.setTimeStamp(0.9886225069471493);
    msg.setSource(13695U);
    msg.setSourceEntity(111U);
    msg.setDestination(39982U);
    msg.setDestinationEntity(219U);
    msg.value = 0.483420231144566;

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
    msg.setTimeStamp(0.7203401829070004);
    msg.setSource(14144U);
    msg.setSourceEntity(12U);
    msg.setDestination(47324U);
    msg.setDestinationEntity(15U);
    msg.value = 0.6242718769280833;

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
    msg.setTimeStamp(0.37107952951610845);
    msg.setSource(46018U);
    msg.setSourceEntity(36U);
    msg.setDestination(15180U);
    msg.setDestinationEntity(44U);
    msg.value = 0.9013524881195102;

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
    msg.setTimeStamp(0.7829556294517848);
    msg.setSource(52493U);
    msg.setSourceEntity(169U);
    msg.setDestination(62328U);
    msg.setDestinationEntity(194U);
    msg.value.assign("AMKOZQDZBWWRSYDKFAGIJOLCVPNHPXNWJCDDMJWVNQXTVANLIISHVMEMQAILNDFZPDSWKUYURCQEWUYUZMUUXUNKEIGIFQVRSB");

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
    msg.setTimeStamp(0.37709361320885515);
    msg.setSource(64623U);
    msg.setSourceEntity(90U);
    msg.setDestination(6429U);
    msg.setDestinationEntity(8U);
    msg.value.assign("PLWRCZQFHTRPTKVSTUNCEBIWIHENZUAABUVZXWQWVLJZGDGDKXYFXKCFHGJKTSZBEQPFVUKJTMXYBLORQIWIEBEBJTRCOUQOSFJDEPNPKXYBMGYAFRRHEPOLMACBSJOQRWHCAOAHSDXGOUWNGLGIYCFGIYLSDQUYQIMURFDCSIWWTZFVMPSVEVSEKQXPZNDIGIXWN");

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
    msg.setTimeStamp(0.45110524953117026);
    msg.setSource(24755U);
    msg.setSourceEntity(93U);
    msg.setDestination(30682U);
    msg.setDestinationEntity(214U);
    msg.value.assign("TSUAVTTCZVWWMUDYPPJJWOXXVFGLJOXBVSBEMJHLA");

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
    msg.setTimeStamp(0.10385679975550044);
    msg.setSource(24096U);
    msg.setSourceEntity(233U);
    msg.setDestination(51553U);
    msg.setDestinationEntity(253U);
    const char tmp_msg_0[] = {85, -34, -126, 71, -73, 15, 46, 84, 107, 18, -119, 81, -33, 120, 23, 102, -38, -13, 4, 22, 59, 14, -77, -109, 92, -81, 104, -5, -48, 68, -87, 59, -113, 106, 61, 64, 0, -119, 119, -52, 100, 73, 67, -45, -87, -20, 96, -74, 4, 95, 20, -29, -25, 77, 118, -61, 83, -94, 52, -78, -118, 119, 124, 100, 30, 29, 78, 38, 38, 71, 124, -82, -66, 125, -61, 44, 55, -36, -16, -21, -61, -33, 57, 25, -125, 72, 95, 92, 39, -113, -35, -33, -75, -17, 88, -39, 32, 41, -115, -15, 116, 89, 2, -48, 107, 45, -21, -125, 107, 8, -37, 85, 104, -67, -122, 94, 55, 39, -30, 69, 47, 118, 39, -75, -35, 102, -66, 12, 57, -1, 110, 43, 74, -50, -35, 82, 38, 72, 72, 118, -110, -56, 104, 94, 24, -100, 123, 117, 45, -93, -39, -5, -4, 111, 61, -17, -6, -49, 82, 14, -2, 49, 65, 125, -32, -95, -107, -60, -123, -91, 60, 22, 101, 119, 66, 85, 82};
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
    msg.setTimeStamp(0.33969880946383046);
    msg.setSource(4130U);
    msg.setSourceEntity(235U);
    msg.setDestination(60460U);
    msg.setDestinationEntity(74U);
    const char tmp_msg_0[] = {93, -12, 106, -126, 110, 56, -4, -108, -111, 75, 43, -90, 98, 24, 37, -55, -33, -109, -57, 112, -30, -115, -42, -25, -80, 57, 95, -16, -103, -4, 84, -80, 104, 24, 86, -22, 101, 53, -13, -37, 17, 57, -68, -82, -58, 37, -111, -10, 67, 85, 85, 104, -67, -108, 116, -97, -107, -93, -68, 0, 27, 124, -16, 114, -53, 105, 9, 35, -3, 88, -63, 68, -126, -61, -26, 112, 54, -87, -50, 13, 73, -110, -57, -39, -47, -84, 114, 78, 125, -65, -63, 88, -100, 28, -54, 47, -71, 87, 118, 76, 23, -50, -13, -1, 109, -61, 73, 124, -3, -6, -122, 87, 8, -92, 118, -63, 20, 3, -28, 50, 101, -41, -24, 56, 94, 106, -67, -110, -103, 60, -92, -29, -64, -96, 117, 38, 124, 14, -36, -80, -81, 36, 55, 87, 45, -44, 3, -85, -108, -23, 123, -86, -37, 41, -80, 31, 116, -81, 15, 75, 70, 25, 108, 25, 39, 96, -43, -117, 26, -104, 71};
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
    msg.setTimeStamp(0.2802969195080439);
    msg.setSource(7643U);
    msg.setSourceEntity(34U);
    msg.setDestination(59189U);
    msg.setDestinationEntity(63U);
    const char tmp_msg_0[] = {66, 115, 89, 81, -111, -80, 101, -25, -60, -33, -80, 56, 21, -37, -103, 25, -73, -76, -76, -12, 28, -72, 92, -120, 32, 42, 97, 6, 2, -21, -119, 69, -52, -81, -102, 8, -100, 124, 122, 96, -61, -128, -51, 68, -112, 67, -72, -31, 6, -55, -100, -111, 16, 102, 57, 101, -88, 43, -3, 81, -109, -75, 24, -109, 84, 31, -99, 29, 97, -78, 98, 122, 119, 14, -67, -73, -38, -1, -61, 91, -25, 72, -30, 5, -58, -79, -27, -13, -102, -118, -45, 82, 34, -80, -79, -80, 57, -125, -96, 117, 68, -13, -47, 108, 95, -125, -94, -51, 51, -10, 120, -54, -66, 63, 61, -38, 32, -45, -13, 30, -92, 98, 98, -77, 51, -54, 124, -41, 23, -70, -126, -38, 108, -41, -17, 65, 25, -125, 20, 74, -80, -85, -118, 97, -81, 34, 70, 23, -90, -89, -65, 13, -31, -103, -73, 8, -73, 75, 85, -126, 55, -30, -96, 51, -70, -55, -96, -126, 64, -101, 70, 50, -25, -116, -39, 78, -71, 2, -112, 7, 56, 71, -85, 15, -54, 26, 83, 23, 85, -76, -25, 34, -36, 111, 12, -123, 66, -66, 120, 34, 24, -98, 37, 59, -60, 0, 102, -96, -34, 119, 40, -63, -60, -107, 38, 26, -16, -69, 7, -27, -26, 123, -122, 88, 61, 83, -7, 15, 118, -61, 28, -112, 115, 36, 62};
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
    msg.setTimeStamp(0.5325537175281398);
    msg.setSource(62376U);
    msg.setSourceEntity(216U);
    msg.setDestination(40918U);
    msg.setDestinationEntity(209U);
    msg.frequency = 818266415U;
    msg.min_range = 40645U;
    msg.max_range = 27010U;

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
    msg.setTimeStamp(0.7124843149187464);
    msg.setSource(58214U);
    msg.setSourceEntity(76U);
    msg.setDestination(4189U);
    msg.setDestinationEntity(207U);
    msg.frequency = 3386775484U;
    msg.min_range = 516U;
    msg.max_range = 18164U;

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
    msg.setTimeStamp(0.5774352369609026);
    msg.setSource(19168U);
    msg.setSourceEntity(58U);
    msg.setDestination(19494U);
    msg.setDestinationEntity(76U);
    msg.frequency = 3001601951U;
    msg.min_range = 34514U;
    msg.max_range = 7294U;

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
    msg.setTimeStamp(0.9524082007775364);
    msg.setSource(3413U);
    msg.setSourceEntity(237U);
    msg.setDestination(52366U);
    msg.setDestinationEntity(30U);
    msg.type = 221U;
    msg.frequency = 1661739883U;
    msg.min_range = 7777U;
    msg.max_range = 13851U;
    msg.bits_per_point = 40U;
    msg.scale_factor = 0.1111759244424807;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9324563814488198;
    tmp_msg_0.beam_height = 0.5964803660025273;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {90, -40, -31, 38, -27, 29, -13, 113, -65, 40, -95, -125, -90, -10, -37, 36, 82, -110, -56, 113, -56, 53, 125, 71, 123, 74, 11, -90, -44, -107, -59, -127, 72, 36, -60, 64, -99, -82, -22, -5, -13, -97, 85, 38, 103, -24, 72, 57, -33, -56, -9, 26, 54, 44, -75, 83, 78, -62, 48, -69, -56, -73, -49, 121, 56, -68, 118, 120, 96, -31, 99, 124, 102, -116, -54, 46, 74, -29, -122, 48, 21, -34, 117, 40, -109, -66, 90, -117, 65, 77, -40, -70, -13, 25, -43};
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
    msg.setTimeStamp(0.5403792385608341);
    msg.setSource(57111U);
    msg.setSourceEntity(103U);
    msg.setDestination(22289U);
    msg.setDestinationEntity(58U);
    msg.type = 130U;
    msg.frequency = 2767262065U;
    msg.min_range = 24197U;
    msg.max_range = 29254U;
    msg.bits_per_point = 205U;
    msg.scale_factor = 0.6176699991121631;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7542513279879873;
    tmp_msg_0.beam_height = 0.8451508399546535;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-48, 102, 71, 59, 115, -24, 101, -17, 90, -61, -83, 70, 59, 43, -105, 85, 21, 19, -122, -104, -31, -63, 72, -22, -99, -98, -38, 74, -77, 66, 93, -79, 33, -107, 4, -112, -11, 118, 78, 4, -119, -111, -45, -33};
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
    msg.setTimeStamp(0.7921570910753637);
    msg.setSource(7383U);
    msg.setSourceEntity(155U);
    msg.setDestination(29211U);
    msg.setDestinationEntity(145U);
    msg.type = 26U;
    msg.frequency = 4018314176U;
    msg.min_range = 36029U;
    msg.max_range = 23690U;
    msg.bits_per_point = 141U;
    msg.scale_factor = 0.3067299477620865;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.18228121842635892;
    tmp_msg_0.beam_height = 0.024051756597820884;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {34, 66, 42, 51, 119, -104, 55, 83, -95, 65, -28, -14, 66, 53, -87, 49, -55, -60, 58, 118, 61, -3, -38, -18, 104, 0, -49, 106, 26, -28, -12, -32, 46, 71, 17, -3, 5, -83, 116, -29, 90, 70, -41, -58, -28, -77, 101, 116, 44, 18, -76, -128, -22, -28};
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
    msg.setTimeStamp(0.5195712510493612);
    msg.setSource(2556U);
    msg.setSourceEntity(90U);
    msg.setDestination(59655U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.1124892518786148);
    msg.setSource(35681U);
    msg.setSourceEntity(213U);
    msg.setDestination(49812U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.48475326644044603);
    msg.setSource(17019U);
    msg.setSourceEntity(225U);
    msg.setDestination(7687U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.7453970888715898);
    msg.setSource(2351U);
    msg.setSourceEntity(119U);
    msg.setDestination(58900U);
    msg.setDestinationEntity(158U);
    msg.op = 247U;

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
    msg.setTimeStamp(0.5695303867141926);
    msg.setSource(61841U);
    msg.setSourceEntity(224U);
    msg.setDestination(27245U);
    msg.setDestinationEntity(245U);
    msg.op = 117U;

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
    msg.setTimeStamp(0.49946642058267343);
    msg.setSource(4136U);
    msg.setSourceEntity(72U);
    msg.setDestination(13761U);
    msg.setDestinationEntity(51U);
    msg.op = 51U;

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
    msg.setTimeStamp(0.19868843889277943);
    msg.setSource(35546U);
    msg.setSourceEntity(161U);
    msg.setDestination(14823U);
    msg.setDestinationEntity(187U);
    msg.value = 0.9115678130440773;
    msg.confidence = 0.9135264536796998;
    msg.opmodes.assign("WYANCUILPRGDSARIEWYYQVQDVEMKZNJOCJEF");

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
    msg.setTimeStamp(0.15032787821662685);
    msg.setSource(44900U);
    msg.setSourceEntity(34U);
    msg.setDestination(35602U);
    msg.setDestinationEntity(19U);
    msg.value = 0.3316849940196085;
    msg.confidence = 0.6312283615307176;
    msg.opmodes.assign("OWXXXPNMITGCDCUYZPZXSFRHQURDOVNCOQADKLCCTTZDYGABEPFMSOJTYTJOYONBMKIWWXKFFOMBWRSLEBXFPSGHKAVWIMHLJMWDOUGCSFABDBWNTLXQQYNUFALEJ");

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
    msg.setTimeStamp(0.23132843393198166);
    msg.setSource(22216U);
    msg.setSourceEntity(120U);
    msg.setDestination(53793U);
    msg.setDestinationEntity(7U);
    msg.value = 0.7223073545254677;
    msg.confidence = 0.899705636897665;
    msg.opmodes.assign("YMYUQNAUQMELHLRFNOCQKGFJNXVULFTRTHWFWUSCNTXBMSZDQKFLNZLKIXJNAREECLBPMSOUXIRZUNVAYXOEOWPZPJKNDAWHFPVJBAEYRICTIXGHAYHVCAORFBZCYESDXPKYJMDVXOJRJDWLIYBIQIHDVUAZHWGWFPSXPSBIZEBPFHZHKUUQMYMNRCKMIZEJDNSODREKKLSGCVBBGLHWVIKGXVGMBJQGDQRDJWLYOZGEOTMTTQTTCPT");

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
    msg.setTimeStamp(0.07283843771031562);
    msg.setSource(51028U);
    msg.setSourceEntity(165U);
    msg.setDestination(37457U);
    msg.setDestinationEntity(86U);
    msg.itow = 1574854897U;
    msg.lat = 0.5638123585825738;
    msg.lon = 0.5909722522391823;
    msg.height_ell = 0.9760162102872036;
    msg.height_sea = 0.9186647304699108;
    msg.hacc = 0.8431059938760568;
    msg.vacc = 0.4078580325178637;
    msg.vel_n = 0.3356867098420331;
    msg.vel_e = 0.624264972267582;
    msg.vel_d = 0.5754875067195259;
    msg.speed = 0.5818229512645952;
    msg.gspeed = 0.7289445788723812;
    msg.heading = 0.5763954389689243;
    msg.sacc = 0.6540716175936868;
    msg.cacc = 0.07899209221513304;

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
    msg.setTimeStamp(0.00042121198115974146);
    msg.setSource(44514U);
    msg.setSourceEntity(192U);
    msg.setDestination(24712U);
    msg.setDestinationEntity(92U);
    msg.itow = 4052264938U;
    msg.lat = 0.2758901239635714;
    msg.lon = 0.3422239451040272;
    msg.height_ell = 0.4910634322968326;
    msg.height_sea = 0.5113724145353524;
    msg.hacc = 0.40898163086882067;
    msg.vacc = 0.8290570605759493;
    msg.vel_n = 0.18111867541413262;
    msg.vel_e = 0.39085465589008117;
    msg.vel_d = 0.2420104371687457;
    msg.speed = 0.9658864142033131;
    msg.gspeed = 0.39402080896495917;
    msg.heading = 0.8722682683205211;
    msg.sacc = 0.9155346088322968;
    msg.cacc = 0.6627080555381877;

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
    msg.setTimeStamp(0.2881328112603324);
    msg.setSource(61576U);
    msg.setSourceEntity(113U);
    msg.setDestination(49065U);
    msg.setDestinationEntity(119U);
    msg.itow = 2861629514U;
    msg.lat = 0.6446711240029723;
    msg.lon = 0.0687987019036882;
    msg.height_ell = 0.2515934223967753;
    msg.height_sea = 0.7982049593533077;
    msg.hacc = 0.20077007378213785;
    msg.vacc = 0.23562222155791424;
    msg.vel_n = 0.13389941059355215;
    msg.vel_e = 0.9410608214011185;
    msg.vel_d = 0.9181353403690107;
    msg.speed = 0.9580152132912656;
    msg.gspeed = 0.10486592911886705;
    msg.heading = 0.44350557951377356;
    msg.sacc = 0.8262455041942744;
    msg.cacc = 0.5029901087620985;

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
    msg.setTimeStamp(0.5111574609291286);
    msg.setSource(1551U);
    msg.setSourceEntity(237U);
    msg.setDestination(29164U);
    msg.setDestinationEntity(205U);
    msg.id = 99U;
    msg.value = 0.00421764033904537;

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
    msg.setTimeStamp(0.7481847222703777);
    msg.setSource(57055U);
    msg.setSourceEntity(226U);
    msg.setDestination(35063U);
    msg.setDestinationEntity(170U);
    msg.id = 164U;
    msg.value = 0.6318050896063487;

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
    msg.setTimeStamp(0.01982713314129081);
    msg.setSource(23328U);
    msg.setSourceEntity(197U);
    msg.setDestination(12111U);
    msg.setDestinationEntity(213U);
    msg.id = 125U;
    msg.value = 0.4534158862340181;

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
    msg.setTimeStamp(0.8026235317685841);
    msg.setSource(20231U);
    msg.setSourceEntity(5U);
    msg.setDestination(49485U);
    msg.setDestinationEntity(241U);
    msg.x = 0.22727850270284056;
    msg.y = 0.29519173817189803;
    msg.z = 0.1400880562781469;
    msg.phi = 0.12844012258830273;
    msg.theta = 0.09277716239468403;
    msg.psi = 0.33533700018632684;

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
    msg.setTimeStamp(0.27082579134524476);
    msg.setSource(48898U);
    msg.setSourceEntity(169U);
    msg.setDestination(28988U);
    msg.setDestinationEntity(254U);
    msg.x = 0.25828418904965555;
    msg.y = 0.505449942262827;
    msg.z = 0.6540194613260611;
    msg.phi = 0.7505429994066323;
    msg.theta = 0.3628057574168514;
    msg.psi = 0.19583864442960297;

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
    msg.setTimeStamp(0.5480833283800962);
    msg.setSource(56880U);
    msg.setSourceEntity(20U);
    msg.setDestination(35365U);
    msg.setDestinationEntity(190U);
    msg.x = 0.09273379212457289;
    msg.y = 0.469098204013885;
    msg.z = 0.05489765394966073;
    msg.phi = 0.6453266690110877;
    msg.theta = 0.4465063455919639;
    msg.psi = 0.5422564816410785;

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
    msg.setTimeStamp(0.6255174552665106);
    msg.setSource(35951U);
    msg.setSourceEntity(201U);
    msg.setDestination(22299U);
    msg.setDestinationEntity(2U);
    msg.beam_width = 0.5635585171052832;
    msg.beam_height = 0.23349913815015322;

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
    msg.setTimeStamp(0.3977782967029724);
    msg.setSource(40181U);
    msg.setSourceEntity(231U);
    msg.setDestination(51830U);
    msg.setDestinationEntity(1U);
    msg.beam_width = 0.2628603881983471;
    msg.beam_height = 0.7420495557549048;

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
    msg.setTimeStamp(0.8805127052332317);
    msg.setSource(59653U);
    msg.setSourceEntity(95U);
    msg.setDestination(28224U);
    msg.setDestinationEntity(169U);
    msg.beam_width = 0.0965784192016853;
    msg.beam_height = 0.5158382326568607;

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
    msg.setTimeStamp(0.8641693188251272);
    msg.setSource(20766U);
    msg.setSourceEntity(105U);
    msg.setDestination(41329U);
    msg.setDestinationEntity(212U);
    msg.id = 106U;
    msg.zoom = 73U;
    msg.action = 204U;

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
    msg.setTimeStamp(0.5762562570858039);
    msg.setSource(6682U);
    msg.setSourceEntity(172U);
    msg.setDestination(42066U);
    msg.setDestinationEntity(11U);
    msg.id = 88U;
    msg.zoom = 87U;
    msg.action = 89U;

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
    msg.setTimeStamp(0.8124662167365261);
    msg.setSource(22880U);
    msg.setSourceEntity(55U);
    msg.setDestination(34679U);
    msg.setDestinationEntity(165U);
    msg.id = 23U;
    msg.zoom = 26U;
    msg.action = 59U;

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
    msg.setTimeStamp(0.5232098347835465);
    msg.setSource(65001U);
    msg.setSourceEntity(60U);
    msg.setDestination(21910U);
    msg.setDestinationEntity(251U);
    msg.id = 105U;
    msg.value = 0.47154281005468457;

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
    msg.setTimeStamp(0.7307732773764075);
    msg.setSource(51341U);
    msg.setSourceEntity(163U);
    msg.setDestination(11701U);
    msg.setDestinationEntity(56U);
    msg.id = 171U;
    msg.value = 0.7763755137033215;

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
    msg.setTimeStamp(0.5736667878558158);
    msg.setSource(8206U);
    msg.setSourceEntity(207U);
    msg.setDestination(10441U);
    msg.setDestinationEntity(123U);
    msg.id = 84U;
    msg.value = 0.8482979753364187;

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
    msg.setTimeStamp(0.4037936146669725);
    msg.setSource(8247U);
    msg.setSourceEntity(227U);
    msg.setDestination(57308U);
    msg.setDestinationEntity(91U);
    msg.id = 159U;
    msg.value = 0.008243876786542148;

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
    msg.setTimeStamp(0.9634091993876271);
    msg.setSource(51109U);
    msg.setSourceEntity(102U);
    msg.setDestination(63055U);
    msg.setDestinationEntity(75U);
    msg.id = 232U;
    msg.value = 0.3967090216949213;

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
    msg.setTimeStamp(0.07452109512156402);
    msg.setSource(61908U);
    msg.setSourceEntity(244U);
    msg.setDestination(27213U);
    msg.setDestinationEntity(110U);
    msg.id = 3U;
    msg.value = 0.2683890921986378;

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
    msg.setTimeStamp(0.7826209071568279);
    msg.setSource(59234U);
    msg.setSourceEntity(129U);
    msg.setDestination(17358U);
    msg.setDestinationEntity(69U);
    msg.id = 111U;
    msg.angle = 0.7858145823569536;

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
    msg.setTimeStamp(0.7599940087882872);
    msg.setSource(49819U);
    msg.setSourceEntity(39U);
    msg.setDestination(62952U);
    msg.setDestinationEntity(86U);
    msg.id = 152U;
    msg.angle = 0.7872938741340888;

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
    msg.setTimeStamp(0.2772889731766478);
    msg.setSource(7973U);
    msg.setSourceEntity(6U);
    msg.setDestination(28624U);
    msg.setDestinationEntity(193U);
    msg.id = 243U;
    msg.angle = 0.27621174271077775;

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
    msg.setTimeStamp(0.7266297698583529);
    msg.setSource(43290U);
    msg.setSourceEntity(71U);
    msg.setDestination(53261U);
    msg.setDestinationEntity(161U);
    msg.op = 144U;
    msg.actions.assign("XDRILHBGICLQRQSBYNPVZTPETRFIYTUDJDFGEWSZERLUAJXUJEBUEJYDPMHADLGZMELWKRFBCBGGNOXCDSCNOFVAKDODHKVLIAFNTISAGUVICZPVKKOMDNYFWZNNUZRNHWZUGBAOALQYHYELKOCJAVBXSXQWACQXWIBCWCFIXMVSUJBUSGIMSUPZHNQLPEQOVYBTZYRMHJYPKXGPYTRMNOOEKKQFLQRSP");

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
    msg.setTimeStamp(0.2822955656751647);
    msg.setSource(32088U);
    msg.setSourceEntity(74U);
    msg.setDestination(21066U);
    msg.setDestinationEntity(246U);
    msg.op = 166U;
    msg.actions.assign("AKMQHORVPMDOJXAICVKOHYDCSLAZNSBSWLAIAFYGYYMGDXVJDYVZXDSGFLTFOXUUUMXRHMUMKCJIWQETWFBQMYQTBKQDTSLBVOLGENWGKZGICDWHBSRJVGOUYNIKJT");

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
    msg.setTimeStamp(0.8815737858043713);
    msg.setSource(56694U);
    msg.setSourceEntity(52U);
    msg.setDestination(17281U);
    msg.setDestinationEntity(178U);
    msg.op = 140U;
    msg.actions.assign("YHTUNGSRPSSRGFGKUBVAQAYBSJMUKXVBSEXOINSCYPGETDEENTKKGIYYZMOAZEQEWBUDGQOCHGONDOQEAHKBHKMIJPPPQMUMSQNSWRVWICVMDGKZRKCJEULGDLLWALPHOCQYLQHVHFGBBZUERHJOAWCNWOFXTFFIZDSBRVPXFWNWFIDUITFTTJMXC");

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
    msg.setTimeStamp(0.28885420201006584);
    msg.setSource(54294U);
    msg.setSourceEntity(241U);
    msg.setDestination(2423U);
    msg.setDestinationEntity(35U);
    msg.actions.assign("GSMPQSFSMAXDYCYXNALFJOPBHSHLGOYCWNQKVJTTVRWSHJCBLZGZQICKGBPQAAZQKWBINRDTTJBLEDJZWTRZYJJPVSIBEYMFFHGIMWXDUZGXXHEUXEPECXAQYMGUFSASUZKURFROQLYVTAXLKDBUBDLROMWHPCIAJPONVEBQXOGKWHIFHTRRFEDRPVVTJMIODLKQOVWGNNEKCFBLDVCTIQMDPJAZGNHFKELCINHUUOPAMETYYZWSVUMCWUK");

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
    msg.setTimeStamp(0.2566842003621135);
    msg.setSource(14476U);
    msg.setSourceEntity(107U);
    msg.setDestination(20354U);
    msg.setDestinationEntity(205U);
    msg.actions.assign("YKTEQQTPZOWWFQHIVWWVFGKRRYIZOLTAJWWCFQGDSQYISTCNLFZJDWHXYEJPQKJESZDGAFXIXGRFPVDIRBCINNBDTJYPVLKLERYTMNSHU");

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
    msg.setTimeStamp(0.024941803881329494);
    msg.setSource(13493U);
    msg.setSourceEntity(167U);
    msg.setDestination(40524U);
    msg.setDestinationEntity(29U);
    msg.actions.assign("MISEMFPDHUIXCFXEMTVWYNHAFGLQUOKGPLKDNCXFVQDZUTLWXZUEXWHVK");

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
    msg.setTimeStamp(0.8648738670841);
    msg.setSource(14976U);
    msg.setSourceEntity(17U);
    msg.setDestination(22455U);
    msg.setDestinationEntity(229U);
    msg.button = 61U;
    msg.value = 68U;

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
    msg.setTimeStamp(0.4065024663522051);
    msg.setSource(1616U);
    msg.setSourceEntity(79U);
    msg.setDestination(12967U);
    msg.setDestinationEntity(184U);
    msg.button = 122U;
    msg.value = 222U;

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
    msg.setTimeStamp(0.1602009137719944);
    msg.setSource(12239U);
    msg.setSourceEntity(93U);
    msg.setDestination(25973U);
    msg.setDestinationEntity(96U);
    msg.button = 200U;
    msg.value = 129U;

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
    msg.setTimeStamp(0.4403908477951395);
    msg.setSource(41823U);
    msg.setSourceEntity(146U);
    msg.setDestination(44635U);
    msg.setDestinationEntity(161U);
    msg.op = 175U;
    msg.text.assign("LDOYQLEFVVUKLAQSQVSTUXOUSGHBISTZTRLEYMDOEOTREUFTLZMJRPFERFMHRAYYAACDXGNFNBWJWWNYLSEXGVKXGLNHTZPVFCHMQEYWWXGJCABJTRIMXJKJKIPFYGAIUQPZFGCNPBSDRNXTYQWEHAKMFJZQMBTSHSVDJXWSZZKNORBMXWSKOZVHPBONKCADIICIDG");

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
    msg.setTimeStamp(0.6139165154086477);
    msg.setSource(30794U);
    msg.setSourceEntity(247U);
    msg.setDestination(9695U);
    msg.setDestinationEntity(177U);
    msg.op = 73U;
    msg.text.assign("IQZSGMQPSREWJDFIAFISGOAUWVXDBKFDAMWMTJGCKZERJQYNTHTZFPSBXGLHZPKWVLWQBGCMYUCDAEQTYQGTAMJJXHU");

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
    msg.setTimeStamp(0.937930980763969);
    msg.setSource(56460U);
    msg.setSourceEntity(127U);
    msg.setDestination(57985U);
    msg.setDestinationEntity(241U);
    msg.op = 220U;
    msg.text.assign("HXUDMAOXBLZXFUAKLEFHMSWBCWYGOJBXANVTBBERKPLIMEGTAJQWJKKJTSMX");

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
    msg.setTimeStamp(0.6201352762997279);
    msg.setSource(20807U);
    msg.setSourceEntity(249U);
    msg.setDestination(3358U);
    msg.setDestinationEntity(34U);
    msg.op = 128U;
    msg.time_remain = 0.3187341864212614;
    msg.sched_time = 0.49282268699794074;

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
    msg.setTimeStamp(0.7869603931080642);
    msg.setSource(49484U);
    msg.setSourceEntity(80U);
    msg.setDestination(15605U);
    msg.setDestinationEntity(239U);
    msg.op = 215U;
    msg.time_remain = 0.6212607241618213;
    msg.sched_time = 0.23852260884982457;

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
    msg.setTimeStamp(0.5327935189001206);
    msg.setSource(37402U);
    msg.setSourceEntity(247U);
    msg.setDestination(255U);
    msg.setDestinationEntity(7U);
    msg.op = 162U;
    msg.time_remain = 0.4663749975458654;
    msg.sched_time = 0.9439538350751717;

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
    msg.setTimeStamp(0.5048620245194702);
    msg.setSource(54196U);
    msg.setSourceEntity(151U);
    msg.setDestination(33779U);
    msg.setDestinationEntity(131U);
    msg.name.assign("WCRBMZDMVZAFFANQMQNWZVCEPBVDRVFKCJECLEUSUOGUAWJSDQCQBOFRUDYVIACBLQIMXURGATBFSOLGKHIIPGSBVHLJGERACAEGIWVBNPLDKJLESYOKMPRBKCDECKKCNFMFHSIXTUITQOE");
    msg.op = 145U;
    msg.sched_time = 0.804550900492369;

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
    msg.setTimeStamp(0.7362791128790066);
    msg.setSource(5903U);
    msg.setSourceEntity(31U);
    msg.setDestination(30459U);
    msg.setDestinationEntity(247U);
    msg.name.assign("GKNEYLCDLXJGUQZKPRJETPUBGNMDKSWLOJNVXJDTYJITUAIFDSVDA");
    msg.op = 9U;
    msg.sched_time = 0.015540938936930426;

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
    msg.setTimeStamp(0.7446634660667978);
    msg.setSource(50203U);
    msg.setSourceEntity(229U);
    msg.setDestination(8725U);
    msg.setDestinationEntity(68U);
    msg.name.assign("MWGQHDGTSDILNRHUYNCFHENRSCNTSXCHBFZIJSICGPBLMIOFLXAZPBWEQNBZIQIDGZMJTIIJLXKZTXODMPSTYVRJYEBTDFCRFCGAPJBWBRKGMMHOQYNFCRWEUTLUAPCUKRBXXXYDXCXUZEPRWSAZWWOZLAYWMSKVELSOQUXRODYMKFAJQUAPITOVEZTLEGUGPJOCVZGEUKDQYVTYU");
    msg.op = 157U;
    msg.sched_time = 0.01912530459254569;

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
    msg.setTimeStamp(0.14554086751635986);
    msg.setSource(10735U);
    msg.setSourceEntity(152U);
    msg.setDestination(39515U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.6492264168669424);
    msg.setSource(5654U);
    msg.setSourceEntity(199U);
    msg.setDestination(19189U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.06770387728659599);
    msg.setSource(22858U);
    msg.setSourceEntity(201U);
    msg.setDestination(29392U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.6482143058914612);
    msg.setSource(25181U);
    msg.setSourceEntity(178U);
    msg.setDestination(4726U);
    msg.setDestinationEntity(107U);
    msg.name.assign("AJIPLUTZGWWEFJABXYCFHBQXTYSSZEVEMRHLQZTMZGKUSWNQCPUCFTYCVKUWOKLATFIMKOVLWYXBWPBEOXIMDGAXTODEZHOJNAPNGWIYDFJXTNWMABEDCTBIISHIHKGRNNNURYJAKVCPNDXALSWZFGKBULOGDXRVYZRGQJZRM");
    msg.state = 77U;

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
    msg.setTimeStamp(0.11675693143047938);
    msg.setSource(11372U);
    msg.setSourceEntity(69U);
    msg.setDestination(52249U);
    msg.setDestinationEntity(58U);
    msg.name.assign("KNQTDPFJLXWMHBHHJMTKXADFHLKXL");
    msg.state = 32U;

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
    msg.setTimeStamp(0.08452094178176006);
    msg.setSource(61061U);
    msg.setSourceEntity(232U);
    msg.setDestination(36228U);
    msg.setDestinationEntity(115U);
    msg.name.assign("HEMPFQBZRBDOIRFPYXLVRFATBMKGTSXCIYGUYALTFOCZMHFAKEMIAHODGVBLLAEXJOJAAILYUCUKWGSTHJTDHNEMNCFWPXHZRCNEWOGKREMDRUJTDVYLSVIKMXUADPSMZRNOYBSWWXJTQQQXTZZPVN");
    msg.state = 243U;

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
    msg.setTimeStamp(0.9306698070498681);
    msg.setSource(34648U);
    msg.setSourceEntity(217U);
    msg.setDestination(41445U);
    msg.setDestinationEntity(67U);
    msg.id = 175U;
    msg.op = 28U;

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
    msg.setTimeStamp(0.8831898879115919);
    msg.setSource(36034U);
    msg.setSourceEntity(254U);
    msg.setDestination(6885U);
    msg.setDestinationEntity(114U);
    msg.id = 61U;
    msg.op = 207U;

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
    msg.setTimeStamp(0.9430542075918952);
    msg.setSource(56534U);
    msg.setSourceEntity(217U);
    msg.setDestination(64489U);
    msg.setDestinationEntity(167U);
    msg.id = 239U;
    msg.op = 64U;

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
    msg.setTimeStamp(0.17587074095629973);
    msg.setSource(23331U);
    msg.setSourceEntity(142U);
    msg.setDestination(33329U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.4788610997210202;
    msg.lon = 0.5315196975028844;
    msg.height = 0.2011156558617052;
    msg.x = 0.030529157306664167;
    msg.y = 0.8415279694895934;
    msg.z = 0.8225694438019078;
    msg.phi = 0.3867397560357223;
    msg.theta = 0.5343727304511952;
    msg.psi = 0.17670504737580017;
    msg.u = 0.22589502971908781;
    msg.v = 0.6690646299112999;
    msg.w = 0.49226101551536405;
    msg.vx = 0.32007910343428214;
    msg.vy = 0.41514798656303953;
    msg.vz = 0.1419819120209994;
    msg.p = 0.3929416020454811;
    msg.q = 0.39987764151168315;
    msg.r = 0.25545523007004745;
    msg.depth = 0.609797245893945;
    msg.alt = 0.7659944410576027;

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
    msg.setTimeStamp(0.6814883329523853);
    msg.setSource(10128U);
    msg.setSourceEntity(234U);
    msg.setDestination(37103U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.10429063239271807;
    msg.lon = 0.5156613548972083;
    msg.height = 0.3851089546982558;
    msg.x = 0.07736114478123834;
    msg.y = 0.7859918509116465;
    msg.z = 0.5923082607536575;
    msg.phi = 0.9675789709868702;
    msg.theta = 0.8792727890285874;
    msg.psi = 0.3579301072920389;
    msg.u = 0.854374559271648;
    msg.v = 0.6553169836089653;
    msg.w = 0.8986769208542056;
    msg.vx = 0.00023238976250683496;
    msg.vy = 0.8728683159366765;
    msg.vz = 0.2915578677254693;
    msg.p = 0.8202860684016118;
    msg.q = 0.21510136901319865;
    msg.r = 0.3807226426512571;
    msg.depth = 0.8773103428536088;
    msg.alt = 0.19266402419452333;

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
    msg.setTimeStamp(0.4466832231317638);
    msg.setSource(9019U);
    msg.setSourceEntity(247U);
    msg.setDestination(62772U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.12537025512708333;
    msg.lon = 0.7593364768752485;
    msg.height = 0.2386419680168872;
    msg.x = 0.9989996467855455;
    msg.y = 0.6727952240516326;
    msg.z = 0.4017803189728846;
    msg.phi = 0.38230118217520237;
    msg.theta = 0.5740479923997108;
    msg.psi = 0.9614767239705577;
    msg.u = 0.09207423167257767;
    msg.v = 0.40910053523035794;
    msg.w = 0.5654010969529241;
    msg.vx = 0.9662280386231853;
    msg.vy = 0.24649437790066386;
    msg.vz = 0.2192765522403466;
    msg.p = 0.41303029867989494;
    msg.q = 0.4719981543576518;
    msg.r = 0.17495491073734237;
    msg.depth = 0.9228738034595333;
    msg.alt = 0.6053068743198098;

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
    msg.setTimeStamp(0.7260112283769563);
    msg.setSource(20601U);
    msg.setSourceEntity(151U);
    msg.setDestination(39185U);
    msg.setDestinationEntity(242U);
    msg.x = 0.4620483461103724;
    msg.y = 0.8413020678814186;
    msg.z = 0.5085681561473597;

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
    msg.setTimeStamp(0.7030378806033646);
    msg.setSource(5707U);
    msg.setSourceEntity(74U);
    msg.setDestination(16601U);
    msg.setDestinationEntity(101U);
    msg.x = 0.7739002687454487;
    msg.y = 0.1220859670543637;
    msg.z = 0.4718029720719944;

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
    msg.setTimeStamp(0.8307389942412179);
    msg.setSource(884U);
    msg.setSourceEntity(85U);
    msg.setDestination(8420U);
    msg.setDestinationEntity(165U);
    msg.x = 0.849479319271028;
    msg.y = 0.327061239904169;
    msg.z = 0.4323030384157416;

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
    msg.setTimeStamp(0.521160721294692);
    msg.setSource(61612U);
    msg.setSourceEntity(197U);
    msg.setDestination(52062U);
    msg.setDestinationEntity(224U);
    msg.value = 0.48101382252845815;

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
    msg.setTimeStamp(0.1330254304694528);
    msg.setSource(31118U);
    msg.setSourceEntity(98U);
    msg.setDestination(36430U);
    msg.setDestinationEntity(67U);
    msg.value = 0.25989091170559586;

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
    msg.setTimeStamp(0.6209670309355595);
    msg.setSource(37783U);
    msg.setSourceEntity(139U);
    msg.setDestination(57894U);
    msg.setDestinationEntity(45U);
    msg.value = 0.15825313519997408;

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
    msg.setTimeStamp(0.732431247247156);
    msg.setSource(57822U);
    msg.setSourceEntity(53U);
    msg.setDestination(22898U);
    msg.setDestinationEntity(169U);
    msg.value = 0.9108296581767612;

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
    msg.setTimeStamp(0.3834541695920981);
    msg.setSource(5513U);
    msg.setSourceEntity(35U);
    msg.setDestination(27722U);
    msg.setDestinationEntity(81U);
    msg.value = 0.21374792106832774;

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
    msg.setTimeStamp(0.25255194786322044);
    msg.setSource(17501U);
    msg.setSourceEntity(146U);
    msg.setDestination(54827U);
    msg.setDestinationEntity(16U);
    msg.value = 0.233982081520706;

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
    msg.setTimeStamp(0.12405511334351382);
    msg.setSource(48294U);
    msg.setSourceEntity(141U);
    msg.setDestination(12418U);
    msg.setDestinationEntity(131U);
    msg.x = 0.20904898971743513;
    msg.y = 0.9743586756211796;
    msg.z = 0.617182413580177;
    msg.phi = 0.0015445627027218523;
    msg.theta = 0.4584245390491434;
    msg.psi = 0.904385254723401;
    msg.p = 0.03186153818246107;
    msg.q = 0.24427654874913818;
    msg.r = 0.7894443671374848;
    msg.u = 0.7839633060755938;
    msg.v = 0.03628563128270412;
    msg.w = 0.724383092481082;
    msg.bias_psi = 0.2660513414619621;
    msg.bias_r = 0.4101775083481981;

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
    msg.setTimeStamp(0.009887938834103771);
    msg.setSource(16493U);
    msg.setSourceEntity(218U);
    msg.setDestination(42188U);
    msg.setDestinationEntity(91U);
    msg.x = 0.7985771207533251;
    msg.y = 0.6590341732042084;
    msg.z = 0.5431979589199818;
    msg.phi = 0.46935813237711865;
    msg.theta = 0.21072383855015853;
    msg.psi = 0.5174222921512474;
    msg.p = 0.36774664975901283;
    msg.q = 0.4155272669622101;
    msg.r = 0.2112928866405812;
    msg.u = 0.8179895370594448;
    msg.v = 0.9227511535444617;
    msg.w = 0.6017757745912563;
    msg.bias_psi = 0.640817057596096;
    msg.bias_r = 0.8979682286413684;

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
    msg.setTimeStamp(0.3870997512924611);
    msg.setSource(30707U);
    msg.setSourceEntity(20U);
    msg.setDestination(6111U);
    msg.setDestinationEntity(118U);
    msg.x = 0.1465722885322137;
    msg.y = 0.7309058980010571;
    msg.z = 0.1806468824731925;
    msg.phi = 0.9584474413892258;
    msg.theta = 0.29600410747056094;
    msg.psi = 0.5626964727913265;
    msg.p = 0.04865919244875827;
    msg.q = 0.006388637274789;
    msg.r = 0.9872969883721674;
    msg.u = 0.1956124985494775;
    msg.v = 0.3631110947578087;
    msg.w = 0.7698034556686295;
    msg.bias_psi = 0.9880608719584273;
    msg.bias_r = 0.19013840247938352;

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
    msg.setTimeStamp(0.2688008941848462);
    msg.setSource(12331U);
    msg.setSourceEntity(107U);
    msg.setDestination(12250U);
    msg.setDestinationEntity(5U);
    msg.bias_psi = 0.264157618592881;
    msg.bias_r = 0.8783393902801788;
    msg.cog = 0.2721059425645944;
    msg.cyaw = 0.48678596680584685;
    msg.lbl_rej_level = 0.9032158079898048;
    msg.gps_rej_level = 0.44856046648495007;
    msg.custom_x = 0.29966153348397406;
    msg.custom_y = 0.9398782351843673;
    msg.custom_z = 0.5748115479375002;

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
    msg.setTimeStamp(0.29797821606616115);
    msg.setSource(51755U);
    msg.setSourceEntity(32U);
    msg.setDestination(15359U);
    msg.setDestinationEntity(223U);
    msg.bias_psi = 0.8054838013289713;
    msg.bias_r = 0.44264676095665156;
    msg.cog = 0.8383917765173514;
    msg.cyaw = 0.941410430289033;
    msg.lbl_rej_level = 0.6622795218061984;
    msg.gps_rej_level = 0.48451558894115676;
    msg.custom_x = 0.2441110014179707;
    msg.custom_y = 0.33791117219295774;
    msg.custom_z = 0.8916620240760943;

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
    msg.setTimeStamp(0.519204142128186);
    msg.setSource(2405U);
    msg.setSourceEntity(204U);
    msg.setDestination(26328U);
    msg.setDestinationEntity(41U);
    msg.bias_psi = 0.966632179973434;
    msg.bias_r = 0.12981579974546587;
    msg.cog = 0.49936560325220936;
    msg.cyaw = 0.782441217043533;
    msg.lbl_rej_level = 0.9302249139648482;
    msg.gps_rej_level = 0.646274770001151;
    msg.custom_x = 0.238036997079476;
    msg.custom_y = 0.9704705529371963;
    msg.custom_z = 0.83590676779678;

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
    msg.setTimeStamp(0.20771203494585588);
    msg.setSource(60193U);
    msg.setSourceEntity(138U);
    msg.setDestination(21273U);
    msg.setDestinationEntity(230U);
    msg.utc_time = 0.7951154532822512;
    msg.reason = 36U;

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
    msg.setTimeStamp(0.9440694275992672);
    msg.setSource(63511U);
    msg.setSourceEntity(101U);
    msg.setDestination(18897U);
    msg.setDestinationEntity(135U);
    msg.utc_time = 0.5860590325367624;
    msg.reason = 29U;

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
    msg.setTimeStamp(0.5617380481095131);
    msg.setSource(30858U);
    msg.setSourceEntity(9U);
    msg.setDestination(19825U);
    msg.setDestinationEntity(232U);
    msg.utc_time = 0.9414531887849471;
    msg.reason = 187U;

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
    msg.setTimeStamp(0.8131867103265149);
    msg.setSource(63307U);
    msg.setSourceEntity(51U);
    msg.setDestination(14351U);
    msg.setDestinationEntity(106U);
    msg.id = 242U;
    msg.range = 0.11722421271289907;
    msg.acceptance = 226U;

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
    msg.setTimeStamp(0.8878823562012415);
    msg.setSource(60307U);
    msg.setSourceEntity(92U);
    msg.setDestination(49916U);
    msg.setDestinationEntity(33U);
    msg.id = 28U;
    msg.range = 0.030098795754839203;
    msg.acceptance = 228U;

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
    msg.setTimeStamp(0.1728608423975071);
    msg.setSource(28794U);
    msg.setSourceEntity(218U);
    msg.setDestination(65289U);
    msg.setDestinationEntity(251U);
    msg.id = 68U;
    msg.range = 0.200223632595676;
    msg.acceptance = 46U;

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
    msg.setTimeStamp(0.5891438937936542);
    msg.setSource(35909U);
    msg.setSourceEntity(206U);
    msg.setDestination(35751U);
    msg.setDestinationEntity(111U);
    msg.type = 121U;
    msg.reason = 189U;
    msg.value = 0.12409652289086115;
    msg.timestep = 0.9410549081638535;

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
    msg.setTimeStamp(0.19926743371217326);
    msg.setSource(13603U);
    msg.setSourceEntity(226U);
    msg.setDestination(44311U);
    msg.setDestinationEntity(135U);
    msg.type = 100U;
    msg.reason = 19U;
    msg.value = 0.6956764822160749;
    msg.timestep = 0.7574777427889412;

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
    msg.setTimeStamp(0.7620040388002769);
    msg.setSource(36614U);
    msg.setSourceEntity(46U);
    msg.setDestination(4247U);
    msg.setDestinationEntity(173U);
    msg.type = 214U;
    msg.reason = 68U;
    msg.value = 0.02683984166034259;
    msg.timestep = 0.9784674932094131;

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
    msg.setTimeStamp(0.6428765040892577);
    msg.setSource(35981U);
    msg.setSourceEntity(97U);
    msg.setDestination(41282U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.24736935892031187);
    msg.setSource(61722U);
    msg.setSourceEntity(98U);
    msg.setDestination(46452U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.9062642617176304);
    msg.setSource(20112U);
    msg.setSourceEntity(221U);
    msg.setDestination(4190U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.10723593691315925);
    msg.setSource(10412U);
    msg.setSourceEntity(161U);
    msg.setDestination(18221U);
    msg.setDestinationEntity(26U);
    msg.beacon.assign("DOEXCGRJCVDXYHZCQEDZCWUWKVITJTAOYWAMKKEHCDFEJFLXSHEBJWFSAUPVHRPSPFIQWRJYLZXNCBOFBMTTVKWYCQCFZAMTTGFSMZLHYXVZCSJSLBHLYIIJTCDQTDWJDSONMIPLRBIKRSNUBHGYIFPQNJGGXGRNBXZOARMRFXQLOPAOGIUKEDNOYUGHYMWQELFZJNTBYXGPLOGUUKVWPKERAPBNQMIZ");
    msg.x = 0.9798846727050766;
    msg.y = 0.2344223851377728;
    msg.depth = 0.08889330728216582;
    msg.var_x = 0.6545204658454598;
    msg.var_y = 0.6223470609200168;

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
    msg.setTimeStamp(0.5240894632194609);
    msg.setSource(52143U);
    msg.setSourceEntity(100U);
    msg.setDestination(61720U);
    msg.setDestinationEntity(165U);
    msg.beacon.assign("AROLEFUNWULLWCYLLJYINKSHPZROGOLSRPMDGTIWQMCYMLKUDQNXOALEIUEOYXYARVZNGIGVKYMDETRZPHCPITSBXHFUCQQZDSTSBDCXXJKGPBRCZKWRMANNNEQONV");
    msg.x = 0.659180816192392;
    msg.y = 0.7646183641594647;
    msg.depth = 0.7698911590497545;
    msg.var_x = 0.5780184843154222;
    msg.var_y = 0.4847082774403768;

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
    msg.setTimeStamp(0.7438750065919205);
    msg.setSource(3345U);
    msg.setSourceEntity(59U);
    msg.setDestination(1199U);
    msg.setDestinationEntity(203U);
    msg.beacon.assign("IXESXWWIDZACLGEXOLWVYQNKMQZUWYPDTXSMYSIFBIQJSPDPURVWQHENUJLFKTOJZJIAIGUZMNVKHHSCQNIRHEMCELBEXVF");
    msg.x = 0.9165061344626999;
    msg.y = 0.6345246348279853;
    msg.depth = 0.7422977536209745;
    msg.var_x = 0.8893259953866544;
    msg.var_y = 0.5518526926916701;

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
    msg.setTimeStamp(0.28489586849525006);
    msg.setSource(15963U);
    msg.setSourceEntity(26U);
    msg.setDestination(32227U);
    msg.setDestinationEntity(217U);
    msg.value = 0.5323067736887213;

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
    msg.setTimeStamp(0.8289766343640267);
    msg.setSource(24891U);
    msg.setSourceEntity(174U);
    msg.setDestination(39033U);
    msg.setDestinationEntity(69U);
    msg.value = 0.5800204280468612;

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
    msg.setTimeStamp(0.36882498097211736);
    msg.setSource(3338U);
    msg.setSourceEntity(248U);
    msg.setDestination(33962U);
    msg.setDestinationEntity(246U);
    msg.value = 0.6098863632078979;

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
    msg.setTimeStamp(0.7543574140305866);
    msg.setSource(6851U);
    msg.setSourceEntity(21U);
    msg.setDestination(16180U);
    msg.setDestinationEntity(193U);
    msg.value = 0.867671297793838;
    msg.z_units = 89U;

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
    msg.setTimeStamp(0.36718669843783414);
    msg.setSource(378U);
    msg.setSourceEntity(161U);
    msg.setDestination(5761U);
    msg.setDestinationEntity(15U);
    msg.value = 0.4349407809500684;
    msg.z_units = 66U;

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
    msg.setTimeStamp(0.5402570801456062);
    msg.setSource(508U);
    msg.setSourceEntity(125U);
    msg.setDestination(50867U);
    msg.setDestinationEntity(208U);
    msg.value = 0.8597833028571737;
    msg.z_units = 131U;

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
    msg.setTimeStamp(0.32058668000131085);
    msg.setSource(2215U);
    msg.setSourceEntity(43U);
    msg.setDestination(31908U);
    msg.setDestinationEntity(6U);
    msg.value = 0.6338525619581883;
    msg.speed_units = 157U;

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
    msg.setTimeStamp(0.6594168590049703);
    msg.setSource(63684U);
    msg.setSourceEntity(85U);
    msg.setDestination(52723U);
    msg.setDestinationEntity(35U);
    msg.value = 0.14476004643228002;
    msg.speed_units = 15U;

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
    msg.setTimeStamp(0.06960686838986796);
    msg.setSource(6589U);
    msg.setSourceEntity(7U);
    msg.setDestination(50427U);
    msg.setDestinationEntity(171U);
    msg.value = 0.20929462210269234;
    msg.speed_units = 138U;

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
    msg.setTimeStamp(0.3416844488266967);
    msg.setSource(51774U);
    msg.setSourceEntity(145U);
    msg.setDestination(37258U);
    msg.setDestinationEntity(32U);
    msg.value = 0.15800125932050713;

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
    msg.setTimeStamp(0.12787488852011508);
    msg.setSource(4798U);
    msg.setSourceEntity(16U);
    msg.setDestination(4500U);
    msg.setDestinationEntity(243U);
    msg.value = 0.05126045295708137;

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
    msg.setTimeStamp(0.2731493292503747);
    msg.setSource(62182U);
    msg.setSourceEntity(115U);
    msg.setDestination(45057U);
    msg.setDestinationEntity(159U);
    msg.value = 0.4056517057013618;

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
    msg.setTimeStamp(0.9900419246611262);
    msg.setSource(24051U);
    msg.setSourceEntity(110U);
    msg.setDestination(64078U);
    msg.setDestinationEntity(178U);
    msg.value = 0.4681870708213839;

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
    msg.setTimeStamp(0.8030945334255427);
    msg.setSource(42391U);
    msg.setSourceEntity(38U);
    msg.setDestination(3411U);
    msg.setDestinationEntity(16U);
    msg.value = 0.7332952604868698;

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
    msg.setTimeStamp(0.6718040920531299);
    msg.setSource(47814U);
    msg.setSourceEntity(157U);
    msg.setDestination(56795U);
    msg.setDestinationEntity(6U);
    msg.value = 0.6166708952397091;

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
    msg.setTimeStamp(0.29567541549948173);
    msg.setSource(28452U);
    msg.setSourceEntity(74U);
    msg.setDestination(7259U);
    msg.setDestinationEntity(30U);
    msg.value = 0.942492421745158;

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
    msg.setTimeStamp(0.38161336797914613);
    msg.setSource(55355U);
    msg.setSourceEntity(206U);
    msg.setDestination(52891U);
    msg.setDestinationEntity(159U);
    msg.value = 0.3897332600895024;

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
    msg.setTimeStamp(0.21907103195543765);
    msg.setSource(6659U);
    msg.setSourceEntity(2U);
    msg.setDestination(3136U);
    msg.setDestinationEntity(235U);
    msg.value = 0.9734094838626715;

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
    msg.setTimeStamp(0.03169187823445563);
    msg.setSource(56624U);
    msg.setSourceEntity(237U);
    msg.setDestination(18825U);
    msg.setDestinationEntity(131U);
    msg.start_lat = 0.6952050697992728;
    msg.start_lon = 0.1870342285522738;
    msg.start_z = 0.5345462612350999;
    msg.start_z_units = 47U;
    msg.end_lat = 0.6220302204981792;
    msg.end_lon = 0.042701438417947934;
    msg.end_z = 0.40219433945252836;
    msg.end_z_units = 27U;
    msg.speed = 0.21525048470962826;
    msg.speed_units = 112U;
    msg.lradius = 0.5869460224739774;
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
    msg.setTimeStamp(0.08547505957320833);
    msg.setSource(55159U);
    msg.setSourceEntity(201U);
    msg.setDestination(8354U);
    msg.setDestinationEntity(31U);
    msg.start_lat = 0.7001029038303314;
    msg.start_lon = 0.9315077012590962;
    msg.start_z = 0.7921383042210757;
    msg.start_z_units = 241U;
    msg.end_lat = 0.7053380302089977;
    msg.end_lon = 0.9991017568641054;
    msg.end_z = 0.3611857235152782;
    msg.end_z_units = 44U;
    msg.speed = 0.9742568025014067;
    msg.speed_units = 131U;
    msg.lradius = 0.2639669335204088;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.8499836303043317);
    msg.setSource(63329U);
    msg.setSourceEntity(237U);
    msg.setDestination(6678U);
    msg.setDestinationEntity(161U);
    msg.start_lat = 0.3239110078350288;
    msg.start_lon = 0.47290410256412874;
    msg.start_z = 0.317471366247587;
    msg.start_z_units = 41U;
    msg.end_lat = 0.27052256393676477;
    msg.end_lon = 0.05398300624244512;
    msg.end_z = 0.3504677476857071;
    msg.end_z_units = 46U;
    msg.speed = 0.8378581564724898;
    msg.speed_units = 29U;
    msg.lradius = 0.9616758588602892;
    msg.flags = 34U;

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
    msg.setTimeStamp(0.9579640385417104);
    msg.setSource(27108U);
    msg.setSourceEntity(140U);
    msg.setDestination(22147U);
    msg.setDestinationEntity(125U);
    msg.x = 0.6414991895671545;
    msg.y = 0.23646390949940232;
    msg.z = 0.5822016193880513;
    msg.k = 0.2566185020975854;
    msg.m = 0.9187462489778724;
    msg.n = 0.22149540400836965;
    msg.flags = 205U;

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
    msg.setTimeStamp(0.46497902986998496);
    msg.setSource(7714U);
    msg.setSourceEntity(238U);
    msg.setDestination(47013U);
    msg.setDestinationEntity(199U);
    msg.x = 0.6135879214885083;
    msg.y = 0.3798808978835315;
    msg.z = 0.1332201927508787;
    msg.k = 0.7655162847063771;
    msg.m = 0.35524823043991816;
    msg.n = 0.5036418081495008;
    msg.flags = 24U;

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
    msg.setTimeStamp(0.30686282826530675);
    msg.setSource(31328U);
    msg.setSourceEntity(102U);
    msg.setDestination(52634U);
    msg.setDestinationEntity(253U);
    msg.x = 0.7687141157012495;
    msg.y = 0.7030682643216994;
    msg.z = 0.8408251570508162;
    msg.k = 0.46534162564669157;
    msg.m = 0.25091846258876516;
    msg.n = 0.9517093247193;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.8160336295998846);
    msg.setSource(27861U);
    msg.setSourceEntity(146U);
    msg.setDestination(50326U);
    msg.setDestinationEntity(19U);
    msg.value = 0.7495067810208628;

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
    msg.setTimeStamp(0.7481876580689544);
    msg.setSource(21025U);
    msg.setSourceEntity(117U);
    msg.setDestination(1682U);
    msg.setDestinationEntity(68U);
    msg.value = 0.4746149693875352;

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
    msg.setTimeStamp(0.7349989842133072);
    msg.setSource(33796U);
    msg.setSourceEntity(248U);
    msg.setDestination(59845U);
    msg.setDestinationEntity(115U);
    msg.value = 0.20304161022007805;

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
    msg.setTimeStamp(0.3341193411543806);
    msg.setSource(35375U);
    msg.setSourceEntity(63U);
    msg.setDestination(43170U);
    msg.setDestinationEntity(116U);
    msg.u = 0.4182339942512183;
    msg.v = 0.6665857892482776;
    msg.w = 0.914582384654429;
    msg.p = 0.6060098165247324;
    msg.q = 0.7868975120394608;
    msg.r = 0.5100076233631506;
    msg.flags = 96U;

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
    msg.setTimeStamp(0.4532795820581301);
    msg.setSource(43400U);
    msg.setSourceEntity(64U);
    msg.setDestination(64095U);
    msg.setDestinationEntity(112U);
    msg.u = 0.37358944965855223;
    msg.v = 0.20804055533513943;
    msg.w = 0.9424592566991417;
    msg.p = 0.0705160979242323;
    msg.q = 0.968807657642325;
    msg.r = 0.13777633790082544;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.09509491197692799);
    msg.setSource(64617U);
    msg.setSourceEntity(242U);
    msg.setDestination(49337U);
    msg.setDestinationEntity(83U);
    msg.u = 0.5770645169045225;
    msg.v = 0.37291531594207505;
    msg.w = 0.43944736085892655;
    msg.p = 0.3920545549768436;
    msg.q = 0.938870668004461;
    msg.r = 0.9993569379171825;
    msg.flags = 152U;

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
    msg.setTimeStamp(0.2881497126214644);
    msg.setSource(771U);
    msg.setSourceEntity(216U);
    msg.setDestination(8301U);
    msg.setDestinationEntity(216U);
    msg.start_lat = 0.7219984065299047;
    msg.start_lon = 0.8733272494104023;
    msg.start_z = 0.9232796140534469;
    msg.start_z_units = 37U;
    msg.end_lat = 0.22868908477576444;
    msg.end_lon = 0.8923558007372768;
    msg.end_z = 0.8655882617467701;
    msg.end_z_units = 142U;
    msg.lradius = 0.3751625847434811;
    msg.flags = 223U;
    msg.x = 0.39668893687756457;
    msg.y = 0.9414311425577313;
    msg.z = 0.003043643778985028;
    msg.vx = 0.48591755139738113;
    msg.vy = 0.05617106907448843;
    msg.vz = 0.83618488419771;
    msg.course_error = 0.3744836530604344;
    msg.eta = 30970U;

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
    msg.setTimeStamp(0.6416573373806902);
    msg.setSource(47120U);
    msg.setSourceEntity(95U);
    msg.setDestination(18256U);
    msg.setDestinationEntity(191U);
    msg.start_lat = 0.4950314164952262;
    msg.start_lon = 0.5632827727230845;
    msg.start_z = 0.9275344635304824;
    msg.start_z_units = 243U;
    msg.end_lat = 0.19272006661999863;
    msg.end_lon = 0.2282021652501549;
    msg.end_z = 0.25741330238891325;
    msg.end_z_units = 79U;
    msg.lradius = 0.5034668154622681;
    msg.flags = 98U;
    msg.x = 0.9338886518884894;
    msg.y = 0.5012211374463452;
    msg.z = 0.9352923251836032;
    msg.vx = 0.46961420174532376;
    msg.vy = 0.31581559463248765;
    msg.vz = 0.25145817167564144;
    msg.course_error = 0.09564659208609338;
    msg.eta = 65332U;

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
    msg.setTimeStamp(0.7991690797859582);
    msg.setSource(32791U);
    msg.setSourceEntity(196U);
    msg.setDestination(22498U);
    msg.setDestinationEntity(174U);
    msg.start_lat = 0.4412919041796749;
    msg.start_lon = 0.2381120282416267;
    msg.start_z = 0.46951006460949185;
    msg.start_z_units = 131U;
    msg.end_lat = 0.3754620903777336;
    msg.end_lon = 0.42748476620375064;
    msg.end_z = 0.7569871696403964;
    msg.end_z_units = 35U;
    msg.lradius = 0.029384947548709905;
    msg.flags = 178U;
    msg.x = 0.8840275190132871;
    msg.y = 0.2152665715957427;
    msg.z = 0.20620094224742958;
    msg.vx = 0.4388152899847687;
    msg.vy = 0.6861668082313668;
    msg.vz = 0.607342520993093;
    msg.course_error = 0.5536491578734806;
    msg.eta = 7767U;

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
    msg.setTimeStamp(0.9659703465292445);
    msg.setSource(36090U);
    msg.setSourceEntity(61U);
    msg.setDestination(34431U);
    msg.setDestinationEntity(140U);
    msg.k = 0.6998669489713746;
    msg.m = 0.39022281652575763;
    msg.n = 0.134818810011193;

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
    msg.setTimeStamp(0.03884029839755754);
    msg.setSource(5071U);
    msg.setSourceEntity(28U);
    msg.setDestination(37031U);
    msg.setDestinationEntity(45U);
    msg.k = 0.12241584971215247;
    msg.m = 0.5549466217146203;
    msg.n = 0.09858752866925247;

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
    msg.setTimeStamp(0.5982126014323087);
    msg.setSource(11473U);
    msg.setSourceEntity(144U);
    msg.setDestination(27510U);
    msg.setDestinationEntity(87U);
    msg.k = 0.48555777305898085;
    msg.m = 0.4427508206387255;
    msg.n = 0.5085817245152452;

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
    msg.setTimeStamp(0.5218804467190634);
    msg.setSource(17469U);
    msg.setSourceEntity(208U);
    msg.setDestination(54398U);
    msg.setDestinationEntity(51U);
    msg.p = 0.9331587621827826;
    msg.i = 0.8917959413443137;
    msg.d = 0.4958406154089643;
    msg.a = 0.2663735188779982;

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
    msg.setTimeStamp(0.9787185356157547);
    msg.setSource(31755U);
    msg.setSourceEntity(222U);
    msg.setDestination(53187U);
    msg.setDestinationEntity(126U);
    msg.p = 0.8673039475325401;
    msg.i = 0.8870043272599453;
    msg.d = 0.9271077375270753;
    msg.a = 0.5815505175520305;

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
    msg.setTimeStamp(0.06812166449567059);
    msg.setSource(39762U);
    msg.setSourceEntity(6U);
    msg.setDestination(51909U);
    msg.setDestinationEntity(173U);
    msg.p = 0.9673856166510661;
    msg.i = 0.30439408716609384;
    msg.d = 0.3031491303034174;
    msg.a = 0.6791541119607714;

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
    msg.setTimeStamp(0.07928149314498201);
    msg.setSource(33516U);
    msg.setSourceEntity(237U);
    msg.setDestination(48361U);
    msg.setDestinationEntity(151U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.19364415507816402);
    msg.setSource(39246U);
    msg.setSourceEntity(64U);
    msg.setDestination(39509U);
    msg.setDestinationEntity(35U);
    msg.op = 204U;

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
    msg.setTimeStamp(0.5843086329755034);
    msg.setSource(23065U);
    msg.setSourceEntity(153U);
    msg.setDestination(12857U);
    msg.setDestinationEntity(235U);
    msg.op = 22U;

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
    msg.setTimeStamp(0.8055826118909022);
    msg.setSource(29595U);
    msg.setSourceEntity(89U);
    msg.setDestination(28000U);
    msg.setDestinationEntity(10U);
    msg.timeout = 26705U;
    msg.lat = 0.5975260883782834;
    msg.lon = 0.5169785403352718;
    msg.z = 0.510707772633165;
    msg.z_units = 59U;
    msg.speed = 0.8580597891007481;
    msg.speed_units = 126U;
    msg.roll = 0.957614202990072;
    msg.pitch = 0.824007582012338;
    msg.yaw = 0.473443164833926;
    msg.custom.assign("TQIYCHGIWRRLGRQNTPZSHSNEAZRUMLNYVLJCFXVHWPEFPLVQEHFXACNNLJVIWOOOJVSPKSJIXFBHUYOTOUKKTWHAMKKSTMXGMLDJWRRGSO");

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
    msg.setTimeStamp(0.865354283178362);
    msg.setSource(34000U);
    msg.setSourceEntity(1U);
    msg.setDestination(61814U);
    msg.setDestinationEntity(4U);
    msg.timeout = 19857U;
    msg.lat = 0.40896958440390263;
    msg.lon = 0.16545470108124383;
    msg.z = 0.26938653850039695;
    msg.z_units = 93U;
    msg.speed = 0.22415315151541548;
    msg.speed_units = 166U;
    msg.roll = 0.8225046445490012;
    msg.pitch = 0.6073356214095771;
    msg.yaw = 0.6187629615454278;
    msg.custom.assign("CWQZZTCPSMFZIIXZAXQHDXPRBCMSLSPPKNCSIWKMJZPVLTSUYYFZUQDQONOUXKNVIWQUKGBHUQJSPMZHEAV");

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
    msg.setTimeStamp(0.9160895834055958);
    msg.setSource(45534U);
    msg.setSourceEntity(246U);
    msg.setDestination(8571U);
    msg.setDestinationEntity(79U);
    msg.timeout = 49410U;
    msg.lat = 0.8408857380123154;
    msg.lon = 0.7489414934371841;
    msg.z = 0.9302634295890425;
    msg.z_units = 63U;
    msg.speed = 0.8261014068558816;
    msg.speed_units = 87U;
    msg.roll = 0.6577978130055665;
    msg.pitch = 0.6771885644989541;
    msg.yaw = 0.7532257947289457;
    msg.custom.assign("KHOCSHWNFKLORWJBEXNRUFDANRSXPLXUXDWYIASTRUCJHUEUBKQMQQQPFKHSEUIIVBKVVSSUBYVEMYDLOFYFTHVIIH");

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
    msg.setTimeStamp(0.9529644754641453);
    msg.setSource(33249U);
    msg.setSourceEntity(81U);
    msg.setDestination(46773U);
    msg.setDestinationEntity(189U);
    msg.timeout = 37915U;
    msg.lat = 0.6934586849974129;
    msg.lon = 0.9334358769395138;
    msg.z = 0.7467492552676422;
    msg.z_units = 37U;
    msg.speed = 0.889941662766659;
    msg.speed_units = 45U;
    msg.duration = 49366U;
    msg.radius = 0.6968601243882663;
    msg.flags = 139U;
    msg.custom.assign("NXOAVSHSKNGFLINHKRYVSLVJLQTLWOTYV");

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
    msg.setTimeStamp(0.6323239454044216);
    msg.setSource(57699U);
    msg.setSourceEntity(57U);
    msg.setDestination(41089U);
    msg.setDestinationEntity(246U);
    msg.timeout = 4388U;
    msg.lat = 0.6293060224354535;
    msg.lon = 0.5165065883686759;
    msg.z = 0.3904614107862312;
    msg.z_units = 75U;
    msg.speed = 0.07315810400087075;
    msg.speed_units = 60U;
    msg.duration = 45649U;
    msg.radius = 0.985857105364688;
    msg.flags = 71U;
    msg.custom.assign("OKIWQZZJNTJEHXDYXPCVYIZHRSNOTJERYPRVLEDDOGXYFGQJBKXDMMLHNN");

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
    msg.setTimeStamp(0.04148377944535531);
    msg.setSource(63017U);
    msg.setSourceEntity(110U);
    msg.setDestination(17791U);
    msg.setDestinationEntity(186U);
    msg.timeout = 40662U;
    msg.lat = 0.4541432791964902;
    msg.lon = 0.9069413746667854;
    msg.z = 0.28802518472007255;
    msg.z_units = 249U;
    msg.speed = 0.0649142654234387;
    msg.speed_units = 180U;
    msg.duration = 12586U;
    msg.radius = 0.21740502885100454;
    msg.flags = 237U;
    msg.custom.assign("ZCQYPIBRGCUPUMZESWMQEMELUFNHDDQB");

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
    msg.setTimeStamp(0.3871790099265223);
    msg.setSource(1951U);
    msg.setSourceEntity(59U);
    msg.setDestination(40450U);
    msg.setDestinationEntity(192U);
    msg.custom.assign("SOLCYMUSPFVHCLGDZMBHAKQORJJKODLMCVWOWVTXZAQNJLWZULXRAAUSQKXPB");

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
    msg.setTimeStamp(0.15125073503187603);
    msg.setSource(56917U);
    msg.setSourceEntity(113U);
    msg.setDestination(6067U);
    msg.setDestinationEntity(56U);
    msg.custom.assign("BAORVFQPINMHLLVFBGYHDQSVCNZOWQHPWKFSJTOYUAZDPFLKYQJJKE");

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
    msg.setTimeStamp(0.11027519780157535);
    msg.setSource(15663U);
    msg.setSourceEntity(78U);
    msg.setDestination(15163U);
    msg.setDestinationEntity(251U);
    msg.custom.assign("HWPJACJFVRVEGDNBUABPQFDGZXJSPGHEKPQRWYEBQPACOYTZJXFFHYOTUSRNNWKZLTKMXBFILMKFTCECMEWIWZIURSYRQZEZMQULNQIRWUDLNEYZVDAJPCMTIGAOWGODXUUITDXKJFYIYMHABHXWWNRBVKODOMVYJIQDMCNXSGPOHABFQHSDVRLHVUHTLROCCTPAEGNZDMLJNLSKKZQYKMHGPLAVGCIWJBXVABSEUST");

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
    msg.setTimeStamp(0.8430902385623654);
    msg.setSource(59269U);
    msg.setSourceEntity(153U);
    msg.setDestination(51582U);
    msg.setDestinationEntity(231U);
    msg.timeout = 9455U;
    msg.lat = 0.925159685876979;
    msg.lon = 0.05886940261261853;
    msg.z = 0.11853351941017476;
    msg.z_units = 167U;
    msg.duration = 10627U;
    msg.speed = 0.7226094077244533;
    msg.speed_units = 105U;
    msg.type = 193U;
    msg.radius = 0.7564771792215979;
    msg.length = 0.8021369673260986;
    msg.bearing = 0.17834574786107638;
    msg.direction = 141U;
    msg.custom.assign("LUAALEMGWNSWQNXASENDJAMAIHKTGJAQIBOFLMLRFJCBQYJROPCBPRVQYNKJFKTYZXRIQITMRJXWDTCQOPYRUKWGUXPEHEFDXATCPLFYZYSRMQHEQZDXNYFOMGSS");

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
    msg.setTimeStamp(0.3017861562941846);
    msg.setSource(16047U);
    msg.setSourceEntity(204U);
    msg.setDestination(65169U);
    msg.setDestinationEntity(191U);
    msg.timeout = 48236U;
    msg.lat = 0.9890941408863468;
    msg.lon = 0.24395157596700567;
    msg.z = 0.09498575546197419;
    msg.z_units = 43U;
    msg.duration = 57972U;
    msg.speed = 0.6603849785432625;
    msg.speed_units = 176U;
    msg.type = 182U;
    msg.radius = 0.6733331440220377;
    msg.length = 0.6356275329954907;
    msg.bearing = 0.7265426146305929;
    msg.direction = 104U;
    msg.custom.assign("CLATSSQAUQIXAUPSBPYNFUNVEZQRGTBGLHPXVDZCGMUQFSZLBNXGHJCCOSLFHKCMWWBYRJKVLREIRRHUDINYUMDEAIDBRCMPYZIXBOVJQFBUDNKJESBPHTQEJQWTKVTDSHOBMIRGPPGRMKOKTAECGEMDRQLZYGOFNWWLSOZDYKUZZXAJGVIEVXJFEQRFIKIPTODWQHFIWFWANMPYLGXWVUODSYWYKHKULMZVLCSFNHJYNCPEOTXTBTAVXZAH");

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
    msg.setTimeStamp(0.9429234548153579);
    msg.setSource(498U);
    msg.setSourceEntity(76U);
    msg.setDestination(9631U);
    msg.setDestinationEntity(141U);
    msg.timeout = 63096U;
    msg.lat = 0.12195818780942802;
    msg.lon = 0.6760150829674872;
    msg.z = 0.32288654119074645;
    msg.z_units = 144U;
    msg.duration = 60142U;
    msg.speed = 0.9299562313121041;
    msg.speed_units = 210U;
    msg.type = 237U;
    msg.radius = 0.749036821323205;
    msg.length = 0.07996848311276605;
    msg.bearing = 0.44387598800080463;
    msg.direction = 162U;
    msg.custom.assign("THEEJIHWVRUPPQYGSWLDNTEPQZHGSUDIOQMOJEAYHAXKWNRTOFOZAVVBKBMQEMRXNIITLQZOTLCQJRVXFYCGUEINUPFLNMMDXPSHFQPCGEYCMMMBRZSBKBLEGRRUJAXHDJYSHLRHZNAIUSCXYATDPKXCZUSOKWIKYQZNPIJLDNBVCCAVJRBOKGFXQFBDLIFL");

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
    msg.setTimeStamp(0.7324659659509939);
    msg.setSource(38169U);
    msg.setSourceEntity(133U);
    msg.setDestination(54640U);
    msg.setDestinationEntity(249U);
    msg.duration = 56052U;
    msg.custom.assign("VMMYAZKYACGERJISHJNVTUAGFNCAOOYCOYXRILCVTMXYVWZETPMEKCDTKKFKREAYNMDPQTCOWSPNLFIPRJRFDHZJSFLBHZHCCGHAMMQVBENRRPNDLIKWHCIIHOFPSRHRZLBWX");

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
    msg.setTimeStamp(0.37327999976442683);
    msg.setSource(8068U);
    msg.setSourceEntity(164U);
    msg.setDestination(16260U);
    msg.setDestinationEntity(201U);
    msg.duration = 45300U;
    msg.custom.assign("XEEMCHMZGSAQTPOEZUTZHDPMWFUWBRJYJCLCDRBUMQLLXVIBNKYKSNYXZWUDCYALRAYRYEGDIULCIFBHEOMGWHVBKGUEUFQENTFSTJLZWCBVZXHSNSSJWUODANSWPIQYSDFGCDVPNGITVTVIXONNWFCRDQUGOPPKPJJNTLMJGJQQDAMFIXBKCOFWIOQVLIS");

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
    msg.setTimeStamp(0.882231762657026);
    msg.setSource(29035U);
    msg.setSourceEntity(27U);
    msg.setDestination(30479U);
    msg.setDestinationEntity(139U);
    msg.duration = 12333U;
    msg.custom.assign("WFVQTYOCZXNBPMOLKCLQNPOMEQCZPHMCBUXLEASLDODXKDYPCQDMLTJVORVUPNGYYVZFRMSRUDTNSAJHLVDFSNKMCKZIORDVZIFJBNSXTLBAYYGREFJSBZURKCKBAFCQJIWPNRWKGQPRGHIHZVZWUERWPKRFGINXZIMOUITEBUDGVPXHMJPXKNUQJXTLJFTTHOBYTYSHWEEGWBK");

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
    msg.setTimeStamp(0.1341409510988658);
    msg.setSource(21126U);
    msg.setSourceEntity(152U);
    msg.setDestination(43449U);
    msg.setDestinationEntity(49U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.1615811734357503;
    tmp_msg_0.z_units = 163U;
    msg.control.set(tmp_msg_0);
    msg.duration = 51088U;
    msg.custom.assign("RRGAHMDXWBVDEMKXZDWHVKPMWXVUYJUEPKFQZDTOSWCELALLTNAWTSTRIWQWRBWKQXUVVHJVQGCSSICZNUHTDZQXNBLOASQGBFJPJSOWYRMAYNFVLOFLOGJLYNFCFFILMPNAMZEIUIYTKXPDHHBAGDUZEKZFQOBNEAILYBYPUZZQCPNOSNAOJYUPUMEDKNCMMJMHWFVCGKDEYZVPQHRITRQRIJJIGKKIYGCVESHXC");

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
    msg.setTimeStamp(0.5163770217464355);
    msg.setSource(48158U);
    msg.setSourceEntity(29U);
    msg.setDestination(12934U);
    msg.setDestinationEntity(50U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.12752792148382175;
    tmp_msg_0.start_lon = 0.22817631127300753;
    tmp_msg_0.start_z = 0.31536084928501096;
    tmp_msg_0.start_z_units = 214U;
    tmp_msg_0.end_lat = 0.6267478977660027;
    tmp_msg_0.end_lon = 0.4455453451801754;
    tmp_msg_0.end_z = 0.007957332552461116;
    tmp_msg_0.end_z_units = 245U;
    tmp_msg_0.speed = 0.6052097857256755;
    tmp_msg_0.speed_units = 151U;
    tmp_msg_0.lradius = 0.7958111906968501;
    tmp_msg_0.flags = 120U;
    msg.control.set(tmp_msg_0);
    msg.duration = 25855U;
    msg.custom.assign("KQHRGDDNEPMRWWETDYSMOVTDSPPBQXUZRTUHRJATPFPRRUCKOJYNSKVFVTYQQMICNCLOAOLJARUNMKRQTJSQXNFISBXPLXBEDWXBAZKYVWQLFGHCTITXNIUBIZXVGLZABGDSFEYEHJKOCOGNQJGJUYWENEHIAYRULUVTSHEBOLCXCXZVAOGUEOSVKQJJZZFRFTECCVZFMHNHLHKNKDVHCSMWPAMYLJYAWFPDIDIWMLGUMIIXOGZQBWPFWABD");

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
    msg.setTimeStamp(0.330399426466381);
    msg.setSource(25238U);
    msg.setSourceEntity(156U);
    msg.setDestination(14892U);
    msg.setDestinationEntity(58U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.06503712090575753;
    msg.control.set(tmp_msg_0);
    msg.duration = 47172U;
    msg.custom.assign("FCZNGSFSIHOYOMKQCJVPYHOWSENYIFWJMYCNGKDTXTGPQPBUH");

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
    msg.setTimeStamp(0.06623202167372133);
    msg.setSource(48825U);
    msg.setSourceEntity(124U);
    msg.setDestination(60594U);
    msg.setDestinationEntity(114U);
    msg.timeout = 30186U;
    msg.lat = 0.8949472069484389;
    msg.lon = 0.3717201106981517;
    msg.z = 0.16738109497062093;
    msg.z_units = 23U;
    msg.speed = 0.7233072478657627;
    msg.speed_units = 198U;
    msg.bearing = 0.5534279869139652;
    msg.cross_angle = 0.7028682308833104;
    msg.width = 0.6173730631344375;
    msg.length = 0.09768957760317942;
    msg.hstep = 0.01035135772485496;
    msg.coff = 107U;
    msg.alternation = 26U;
    msg.flags = 253U;
    msg.custom.assign("OPORXVHCAXWAHERVAQOIOXZNZYVWSBVZPZSKPYCQQRIJPRCRLTQGKFRUSQUVFKDBKLMPMHJYEGVBMEYULMKZTAVFDNPQULLJL");

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
    msg.setTimeStamp(0.25568619009429916);
    msg.setSource(3373U);
    msg.setSourceEntity(20U);
    msg.setDestination(2590U);
    msg.setDestinationEntity(147U);
    msg.timeout = 10602U;
    msg.lat = 0.8254649493892073;
    msg.lon = 0.3656743182321921;
    msg.z = 0.2495599553793133;
    msg.z_units = 159U;
    msg.speed = 0.12869017477658795;
    msg.speed_units = 176U;
    msg.bearing = 0.9376165224699714;
    msg.cross_angle = 0.060430665206825274;
    msg.width = 0.7184136372887995;
    msg.length = 0.533851133013903;
    msg.hstep = 0.4987204372338572;
    msg.coff = 147U;
    msg.alternation = 236U;
    msg.flags = 203U;
    msg.custom.assign("KHBOSPFBORHZPPJQXXBYIUXXXKFDITCYFEFREKNBENNQXUBIQDEYNLBWZRLMHAITPPVYGYVHXTSCALUPORZADAVWUGAHONMDODUTEYVWKGVGCYRWTGILLIKLFDCVYQEUTMLSAGQPMGVPAPNDHJJTJUAOIUFBRCSCHCNFMZVJHHOAWQJWLGMKXRSDWZCECMEZQ");

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
    msg.setTimeStamp(0.11521483744097494);
    msg.setSource(28106U);
    msg.setSourceEntity(21U);
    msg.setDestination(24298U);
    msg.setDestinationEntity(231U);
    msg.timeout = 25915U;
    msg.lat = 0.5934122773823587;
    msg.lon = 0.1584934726578766;
    msg.z = 0.9889109090725251;
    msg.z_units = 53U;
    msg.speed = 0.453398743869186;
    msg.speed_units = 197U;
    msg.bearing = 0.9191639750452834;
    msg.cross_angle = 0.22792862488491905;
    msg.width = 0.4977256300084405;
    msg.length = 0.9977044121227105;
    msg.hstep = 0.2476798236894313;
    msg.coff = 180U;
    msg.alternation = 144U;
    msg.flags = 220U;
    msg.custom.assign("HNGTXNGFYRTRGSUCMHFVQCQXQLAZIOJY");

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
    msg.setTimeStamp(0.9855861442304803);
    msg.setSource(5218U);
    msg.setSourceEntity(179U);
    msg.setDestination(47119U);
    msg.setDestinationEntity(44U);
    msg.timeout = 2214U;
    msg.lat = 0.3477290270475122;
    msg.lon = 0.4540292674831431;
    msg.z = 0.3626277178820698;
    msg.z_units = 236U;
    msg.speed = 0.9884103347313793;
    msg.speed_units = 157U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.42274015608466553;
    tmp_msg_0.y = 0.2992853924507397;
    tmp_msg_0.z = 0.3190892834711847;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EGRAOQJHREIJMALOTRBIPS");

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
    msg.setTimeStamp(0.21056667360613623);
    msg.setSource(13056U);
    msg.setSourceEntity(9U);
    msg.setDestination(8031U);
    msg.setDestinationEntity(46U);
    msg.timeout = 15882U;
    msg.lat = 0.8172940942436266;
    msg.lon = 0.33556753330821365;
    msg.z = 0.4956363016073162;
    msg.z_units = 191U;
    msg.speed = 0.6966849281580426;
    msg.speed_units = 15U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.49077483727973825;
    tmp_msg_0.y = 0.8383588902295971;
    tmp_msg_0.z = 0.4025489040399236;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FZDBHYBWRSTDRHYAGEYKGAWTRTFWLWMLIEKAIQPWQQKNDZMJMOEKWCUENMGBFFRZSFKXUOXSESEMGJEIDBUDIMMJQANTJOYCEPKNLLURHXCVCICKFVCXORRRABVDEDUULAZGSKKXNMZIJTELWOJRYPJHOZXCWYSCBVMZBUUHHVPDALDOCXNLGIXUSPHTUSSNJYFQVXQRPZKBBVVHSTTYHZQMITPQGJPXVWPYDAZLCBON");

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
    msg.setTimeStamp(0.965629319151349);
    msg.setSource(49000U);
    msg.setSourceEntity(146U);
    msg.setDestination(19537U);
    msg.setDestinationEntity(59U);
    msg.timeout = 24630U;
    msg.lat = 0.758138206432277;
    msg.lon = 0.256540184443273;
    msg.z = 0.9037151250610183;
    msg.z_units = 181U;
    msg.speed = 0.35812393088846917;
    msg.speed_units = 132U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.539717317858026;
    tmp_msg_0.y = 0.5314756933873541;
    tmp_msg_0.z = 0.5735911506854108;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XLQDOXEFIUARGUDFWVXUNYVZLTHIONQWCNZQJBRSZAQYSIGUOBAFBWPFDYONUBRJHTKHNWPKRBRJBTHPZMEEXBQIVYEPSMZXPXKETPUWGWLHOZUJJBYMROQJHKVBGDQHRUOAKC");

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
    msg.setTimeStamp(0.5966770827227016);
    msg.setSource(55556U);
    msg.setSourceEntity(87U);
    msg.setDestination(29000U);
    msg.setDestinationEntity(111U);
    msg.x = 0.2948867666236308;
    msg.y = 0.783411558049142;
    msg.z = 0.7528083589515291;

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
    msg.setTimeStamp(0.8111049856146609);
    msg.setSource(44578U);
    msg.setSourceEntity(216U);
    msg.setDestination(12109U);
    msg.setDestinationEntity(130U);
    msg.x = 0.7435320263623504;
    msg.y = 0.6592251338179055;
    msg.z = 0.7904809374416236;

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
    msg.setTimeStamp(0.8618556093332677);
    msg.setSource(15506U);
    msg.setSourceEntity(9U);
    msg.setDestination(31280U);
    msg.setDestinationEntity(197U);
    msg.x = 0.906148097014105;
    msg.y = 0.219862550696571;
    msg.z = 0.6866603895095185;

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
    msg.setTimeStamp(0.7196753791253031);
    msg.setSource(64113U);
    msg.setSourceEntity(242U);
    msg.setDestination(50556U);
    msg.setDestinationEntity(75U);
    msg.timeout = 29806U;
    msg.lat = 0.04756476922983066;
    msg.lon = 0.11556379203676226;
    msg.z = 0.4656233718993277;
    msg.z_units = 126U;
    msg.amplitude = 0.5660896321892226;
    msg.pitch = 0.3014048286091786;
    msg.speed = 0.1452215854050638;
    msg.speed_units = 155U;
    msg.custom.assign("HMJWBPKYGUHRNNJLYUIPUVIVSTKGWJWUMBOYRQLEMFIAGXCXCOSXDJGUXEFLROCLSLZHLSDODARLDMVYKZNWTZUZKFNQMGXDTAJNXFPWFOJDDYFRYZTFSMEOCHMWBLBBWKNJGDQEEGGWCDRYIYOHXVTMYEPCEVKKRQLRNANOFVQTPCLYSISIWTUQXARPFPUNPQBWVDSZBXCHJTOTQVPGISUZBAQSVQKJHXEOUZAZBCIKKBHRZMNHFIEIA");

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
    msg.setTimeStamp(0.6382216079739765);
    msg.setSource(39480U);
    msg.setSourceEntity(237U);
    msg.setDestination(55812U);
    msg.setDestinationEntity(81U);
    msg.timeout = 14706U;
    msg.lat = 0.12439620751270941;
    msg.lon = 0.343695859170146;
    msg.z = 0.6436565110104181;
    msg.z_units = 79U;
    msg.amplitude = 0.5769652153007535;
    msg.pitch = 0.5108751891680053;
    msg.speed = 0.313299791165658;
    msg.speed_units = 145U;
    msg.custom.assign("SWAABDLVRYULHCDDTWBLGKKFLXCMIILMYCQWMFOBZKBMWNHEJQGQPQQHITZYS");

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
    msg.setTimeStamp(0.6515506949296765);
    msg.setSource(7774U);
    msg.setSourceEntity(177U);
    msg.setDestination(55399U);
    msg.setDestinationEntity(4U);
    msg.timeout = 35700U;
    msg.lat = 0.3240932354484224;
    msg.lon = 0.03312667602479746;
    msg.z = 0.10432600644184897;
    msg.z_units = 16U;
    msg.amplitude = 0.17771984457065915;
    msg.pitch = 0.3330704627341503;
    msg.speed = 0.05479906762678066;
    msg.speed_units = 228U;
    msg.custom.assign("ZYDFRPGJIEFTBTMFRUYMWHSFDUVFPASQVUMJOYQJILNCUEWBQQMMNDNEGSPCKCVPIBJSJXUMJDDPIBTLMWYRTARSERCVGOBKGNTOFVIFGJURXVEKGZDYAWUSWQXFONHSDZNDZRNXJMBBAIVQVGODEHKWHKKTZJCZSGBFTVNPXLHRWECZKLUEUPOJBIVLAYNHQDPCWNEAAYXYHAIEFXLHKYPXLBCLRATPLGOIXAUOHYKQLKTHZ");

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
    msg.setTimeStamp(0.0871416886409958);
    msg.setSource(17099U);
    msg.setSourceEntity(150U);
    msg.setDestination(26543U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.965010499320026);
    msg.setSource(35475U);
    msg.setSourceEntity(226U);
    msg.setDestination(26707U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.13787937259594707);
    msg.setSource(38530U);
    msg.setSourceEntity(123U);
    msg.setDestination(39624U);
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
    msg.setTimeStamp(0.004641520317888226);
    msg.setSource(52774U);
    msg.setSourceEntity(54U);
    msg.setDestination(14600U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.597112367872428;
    msg.lon = 0.2708636094334902;
    msg.z = 0.9541321675930982;
    msg.z_units = 186U;
    msg.radius = 0.25566429985496597;
    msg.duration = 4140U;
    msg.speed = 0.5174600170881525;
    msg.speed_units = 186U;
    msg.custom.assign("UTYTCYQRQIKAVREGCSCXARNVMXPHSDHJOSAAITSHYUSLQFVWZLIBMHUJEYFDYZQVQYLZIDMOFJDADNKJUHJCPNBXXOSFGNPFLASXKRQRVZFLNOZWUZVOELEGJHHNITBIMHTCBLRPWUUTEGXYVXCWWNCEHFSWPRBDGOKKPQQESRNEEDKZPBBTDTGMUIKXCZGWWQBQTKGCOXFFOGVUYLRKMNWDRPEANDAPMZIGUMWABYASJFKZI");

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
    msg.setTimeStamp(0.6205143607542423);
    msg.setSource(30067U);
    msg.setSourceEntity(116U);
    msg.setDestination(26540U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.6010649951907627;
    msg.lon = 0.6458083183908111;
    msg.z = 0.30238532869291934;
    msg.z_units = 223U;
    msg.radius = 0.9400081286601805;
    msg.duration = 27421U;
    msg.speed = 0.23108848157740514;
    msg.speed_units = 159U;
    msg.custom.assign("HGWAAQXXNPNSPIBWVBGXUSANZTMQZZSGTCEMDNAFBLVYBVSXVFQRCIZMHXWUKJRDZVWSDQTAYOODDEQQEUZAJUGDNOFJHGLYJBEPFPFULLORDFZHVRFNQKITFKVIMNLRITRJEKHISCNPWGRTSQBJJJWAQKQMNVTGXBRBDBSVCWIUATHEECOYPFIYOLWPOGHU");

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
    msg.setTimeStamp(0.5155567193612722);
    msg.setSource(4947U);
    msg.setSourceEntity(250U);
    msg.setDestination(35659U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.4701910719646857;
    msg.lon = 0.5109521720221513;
    msg.z = 0.2269312219328039;
    msg.z_units = 141U;
    msg.radius = 0.5320827760362056;
    msg.duration = 10048U;
    msg.speed = 0.01839767919642943;
    msg.speed_units = 123U;
    msg.custom.assign("VBRNEIRXCND");

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
    msg.setTimeStamp(0.8013749438147596);
    msg.setSource(17314U);
    msg.setSourceEntity(223U);
    msg.setDestination(15012U);
    msg.setDestinationEntity(192U);
    msg.timeout = 58632U;
    msg.flags = 151U;
    msg.lat = 0.5676493791253352;
    msg.lon = 0.296080343172511;
    msg.start_z = 0.718053666338664;
    msg.start_z_units = 33U;
    msg.end_z = 0.6904605947754554;
    msg.end_z_units = 9U;
    msg.radius = 0.4624831647796074;
    msg.speed = 0.8367335719679129;
    msg.speed_units = 106U;
    msg.custom.assign("IUWXCREVIFDCGWTGVYIXMCZQQFILRHULSJOBANEYLAJPQHYGJAKBAFOFDZPXKOEMZCTQPFNSBORSKZNMHBGJSHYWJNRUFJXOPRFDWPABZQNTMOLNVSSRBEFTTAQLDVHILAQXPDDGLYWTYCUKGUJUFENRHUBZWTOPUGBRWXCHULNDIKW");

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
    msg.setTimeStamp(0.9806774732945434);
    msg.setSource(15639U);
    msg.setSourceEntity(2U);
    msg.setDestination(19059U);
    msg.setDestinationEntity(121U);
    msg.timeout = 898U;
    msg.flags = 232U;
    msg.lat = 0.937691512797711;
    msg.lon = 0.8607700615134665;
    msg.start_z = 0.7918665275053478;
    msg.start_z_units = 182U;
    msg.end_z = 0.06520655975203893;
    msg.end_z_units = 209U;
    msg.radius = 0.6595228744592325;
    msg.speed = 0.39503306244872727;
    msg.speed_units = 49U;
    msg.custom.assign("BVYZJVKAFNESWFQTRJHWNZTULCBSFTYPNZDALHJTNCLHSXYFDSPNMYFNVRRVPOXPODITAZQYJZRQHVJBKDWLEIQICHUQPGSLMBARWLXKBOAPMXRNTKIEIUJWPOQDSHIKXPGXEJCVEOKBMXALUCKBZWGPKRMDFCHNIE");

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
    msg.setTimeStamp(0.36112657761038836);
    msg.setSource(15646U);
    msg.setSourceEntity(197U);
    msg.setDestination(58344U);
    msg.setDestinationEntity(112U);
    msg.timeout = 1362U;
    msg.flags = 211U;
    msg.lat = 0.35710883214539724;
    msg.lon = 0.15103804334176385;
    msg.start_z = 0.6161241164553936;
    msg.start_z_units = 215U;
    msg.end_z = 0.8837561317600416;
    msg.end_z_units = 81U;
    msg.radius = 0.760617536537362;
    msg.speed = 0.2057494524552429;
    msg.speed_units = 238U;
    msg.custom.assign("HFCZTGPWGXIECOKDSRUVPCLKOFXNFAMPKOLABKVSJJIBMDPMRURIHCZGGRSTTTBYLHGVHMXXSLSUQQFBMPCJJUBYDAZKEDEGVCQAXZSZWXJOEWWSYIVTCRXVCMWPYUBVNTAKUIUVORNUOTQMETIJNQTAGVFXLROHPNQLOJIAFBZXFHZLGBQVYDSHFZNANGUAEWKPOGNMLDIYBODXKZFEQTQDCRYNWNI");

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
    msg.setTimeStamp(0.6829423983078519);
    msg.setSource(58828U);
    msg.setSourceEntity(161U);
    msg.setDestination(50886U);
    msg.setDestinationEntity(131U);
    msg.timeout = 42748U;
    msg.lat = 0.5334605505122844;
    msg.lon = 0.19202651864087927;
    msg.z = 0.43708298539200086;
    msg.z_units = 158U;
    msg.speed = 0.871766952781691;
    msg.speed_units = 153U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4027673415882914;
    tmp_msg_0.y = 0.07132135980039389;
    tmp_msg_0.z = 0.3767210730852728;
    tmp_msg_0.t = 0.22587525917111384;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TZYWWCDORGHKCJEFREJGUVQJAFRZVRLFPMLLAUQONZFCEBHAAIDTEQWTVCXFSGWHGQPALYFBWDPQOBPWMBZBITNQSPAGYJKQYOXIEXFVNIMLHODZOTADTXXYYNEHYDVGZVQIWKSYTGUWBBNSDBXFWCHHALEDAPCGSUCHYMLLVCUSJKPIFJMSOOIISUTYKNFRXTPKCUDRRJGEGUSXMHXLZCDZMZKPKOMPUSQEJKNRQM");

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
    msg.setTimeStamp(0.8645218654554393);
    msg.setSource(21530U);
    msg.setSourceEntity(100U);
    msg.setDestination(37720U);
    msg.setDestinationEntity(51U);
    msg.timeout = 44065U;
    msg.lat = 0.1889773420785682;
    msg.lon = 0.4963328456936765;
    msg.z = 0.9140635437252731;
    msg.z_units = 171U;
    msg.speed = 0.8146029962751825;
    msg.speed_units = 42U;
    msg.custom.assign("TYRHAQGMONBVKHMYQNWCTQERLKNZHZGZTLYASCUJLJOUFGNHMSGBDBXGFJGXTHAIEXKPDS");

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
    msg.setTimeStamp(0.9299969576346421);
    msg.setSource(50598U);
    msg.setSourceEntity(119U);
    msg.setDestination(17991U);
    msg.setDestinationEntity(118U);
    msg.timeout = 25266U;
    msg.lat = 0.8685478741280381;
    msg.lon = 0.9293065741476664;
    msg.z = 0.1680086109610286;
    msg.z_units = 129U;
    msg.speed = 0.7213860729420913;
    msg.speed_units = 40U;
    msg.custom.assign("EWMAWFDDMGSNKQKHJAMUQTAGALBTQFHVTNKNLDORIQUYUMQYMZRZXXYPCISPPXPIDYKZCRWLPULRWWKCFLZJDBRELWFJVOQSGINVECQBMGVOCBKPFZRHECDKJEEFZCMHYNENTSWPHBDNGUOWKHSOVUSAJTVQ");

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
    msg.setTimeStamp(0.7277177735049369);
    msg.setSource(18871U);
    msg.setSourceEntity(1U);
    msg.setDestination(58360U);
    msg.setDestinationEntity(108U);
    msg.x = 0.30131198994451935;
    msg.y = 0.37944680839362166;
    msg.z = 0.6412583303470463;
    msg.t = 0.9556238397400569;

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
    msg.setTimeStamp(0.007492532361630055);
    msg.setSource(29141U);
    msg.setSourceEntity(87U);
    msg.setDestination(8476U);
    msg.setDestinationEntity(117U);
    msg.x = 0.5223600643161165;
    msg.y = 0.0007116722365639871;
    msg.z = 0.8299924963559699;
    msg.t = 0.11612807758121302;

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
    msg.setTimeStamp(0.9521643490558614);
    msg.setSource(9160U);
    msg.setSourceEntity(214U);
    msg.setDestination(55686U);
    msg.setDestinationEntity(184U);
    msg.x = 0.06543886239454766;
    msg.y = 0.10037970851758071;
    msg.z = 0.03258204980397483;
    msg.t = 0.41231742853974795;

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
    msg.setTimeStamp(0.6915544970075546);
    msg.setSource(60124U);
    msg.setSourceEntity(179U);
    msg.setDestination(10499U);
    msg.setDestinationEntity(134U);
    msg.timeout = 41999U;
    msg.name.assign("SRLCNOLAJTROQHADXYTKNZYPMJZTMJLERZWDTWLIHVUUSCMCMSFBWUEBOJGDQVXVZHDUEGGFYFKBEIKMQEDKHAZRBGQSTUVOUDXOHNEGONIUADVRSOFKIKQXPPEYDLELCOHGBSCFEWMSWIBTFFMANSXRQSPVKTMBYILF");
    msg.custom.assign("QYXCIZKGGBVOEQXNGVHZBMITXTCUZPWHSOPHJOPSZCVHEXDXTAVXTGONSWCJXLUBWGGNIYMLSEWLKVVFAAPCPMATVPWJRKXBZRRUMKYGRNULYKYTCCFFKMTODGJJMAVAVKANYAMZMQOERNFJSHEDFHRJDEUF");

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
    msg.setTimeStamp(0.07355626661256054);
    msg.setSource(34082U);
    msg.setSourceEntity(208U);
    msg.setDestination(58251U);
    msg.setDestinationEntity(92U);
    msg.timeout = 6786U;
    msg.name.assign("TUPHTIJDIUKAFEGQDFRTEXBTPLRWPVOKQQCIULTWPEXFJZRBZIWDPXFAWUWNZDXJNXLEYIQHKDLFOLARKEVUFUBIEMBVTYUWHVENMIBBYCPCWPMZYMJTHPEHZBQLGQAVSQJSMWSOACNIUBVKOKGYVCHLHOSJXGONZRADNKNYDMACAYBRWYGMHEXGQNKMIRRLDCFSDNEYCQMQHZXSPJZGUXSTGNADTOCKLMSCLUHFTRJASZKYIJFGOFS");
    msg.custom.assign("HNUNHVBHMPOAGDIBLI");

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
    msg.setTimeStamp(0.6518908870450809);
    msg.setSource(37463U);
    msg.setSourceEntity(197U);
    msg.setDestination(6313U);
    msg.setDestinationEntity(116U);
    msg.timeout = 49068U;
    msg.name.assign("RBSLFBDXTWFHURBDMBWIGUJVIHLKXXEEMUQERZSVWHITJOFSMONLFHZYKMRWDNERGFFSNPLDNNTGFWKYJDBJFHGSQAAGDXGUJANPPIXCDTJOEXHVCNX");
    msg.custom.assign("VWKQUIKFCRYDBIGNFVDNZRWBOGAKKZMMGJBMTSRBUMXEQIEWFAPUEJLVILPYSYGYHKUPWCPHZSVBKAVRHSENJUSDLZZCNTCQZIBQHUBIXXQGYHDPTVWGUCJAWTHRBNNGWYTJMRXQFFEHOFXZSAWZILIHYKRMOMNOGXKTLKEPRDJNADDCZTYLQLPNTCSKYPUFCRMEQWFIZUJSOQLXGTQEPVMOVOXPF");

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
    msg.setTimeStamp(0.09358474405001671);
    msg.setSource(21830U);
    msg.setSourceEntity(173U);
    msg.setDestination(64349U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.8349112846151925;
    msg.lon = 0.7721275963918726;
    msg.z = 0.03739109260931972;
    msg.z_units = 174U;
    msg.speed = 0.9935158012055015;
    msg.speed_units = 247U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22201U;
    tmp_msg_0.off_x = 0.26765117641107394;
    tmp_msg_0.off_y = 0.7273275587926333;
    tmp_msg_0.off_z = 0.5427691651184188;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.08726729607472694;
    msg.custom.assign("MZYCRPKIYKUTEDPUCZZZPWUWKZXVAUYSZBTIJYRTWDHSSRVYPBMFMRVJBGITZNJIIBJQEXHWVAHPUDCCDAVVKTPURKWOUEJLOQLFCQYTTRKANCIJREKVPOJ");

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
    msg.setTimeStamp(0.6140728987335135);
    msg.setSource(20808U);
    msg.setSourceEntity(103U);
    msg.setDestination(50149U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.6084319299405616;
    msg.lon = 0.06393178268487831;
    msg.z = 0.12226456077465941;
    msg.z_units = 188U;
    msg.speed = 0.662868640867683;
    msg.speed_units = 198U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6918U;
    tmp_msg_0.off_x = 0.5583638618473277;
    tmp_msg_0.off_y = 0.04692856554707869;
    tmp_msg_0.off_z = 0.6083035369726989;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5131814796779824;
    msg.custom.assign("TVFCCSFIRBOQPIKGUMKZRBENEFAARIJQQEBXSYFNGPNOTBLSMWNEQOCKQDARJEXVXS");

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
    msg.setTimeStamp(0.896073851065583);
    msg.setSource(34610U);
    msg.setSourceEntity(22U);
    msg.setDestination(6922U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.6781301217814099;
    msg.lon = 0.7616988943605292;
    msg.z = 0.9407736636320925;
    msg.z_units = 61U;
    msg.speed = 0.881870627357655;
    msg.speed_units = 82U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5557854191041387;
    tmp_msg_0.y = 0.1847523650919567;
    tmp_msg_0.z = 0.48315006826935136;
    tmp_msg_0.t = 0.1582378283113699;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.25780329796035817;
    msg.custom.assign("UHAAFNBUCIIZEKVWLAXULZLZZBVAHVMMKFOSATZMICAUOKRFXXPTWCPJDREYDELJURIBWASNYMXWGDENYOHOHRGFMHDVKWCQKCGKDQNUTGQUCGJJPTRNFSRYOGQTJYSVNBPLXFAPSZNQAVPXBPODDXTZSKOCNYHMEZSVDRBQVLQRWLQEUKEYCZLMIMSRKCOWDOSEHTTRIPHKDLEPWINBW");

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
    msg.setTimeStamp(0.6252770712113845);
    msg.setSource(62797U);
    msg.setSourceEntity(42U);
    msg.setDestination(53166U);
    msg.setDestinationEntity(214U);
    msg.vid = 10272U;
    msg.off_x = 0.9265681032393065;
    msg.off_y = 0.13407963992660143;
    msg.off_z = 0.09292195441516893;

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
    msg.setTimeStamp(0.7667308866280307);
    msg.setSource(22322U);
    msg.setSourceEntity(92U);
    msg.setDestination(7531U);
    msg.setDestinationEntity(52U);
    msg.vid = 61792U;
    msg.off_x = 0.4019353891739309;
    msg.off_y = 0.5204661219172358;
    msg.off_z = 0.8560197853639357;

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
    msg.setTimeStamp(0.45937321227267913);
    msg.setSource(29713U);
    msg.setSourceEntity(71U);
    msg.setDestination(59214U);
    msg.setDestinationEntity(167U);
    msg.vid = 33389U;
    msg.off_x = 0.7061503736470748;
    msg.off_y = 0.8159131031991207;
    msg.off_z = 0.46472750022995524;

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
    msg.setTimeStamp(0.7472559091967201);
    msg.setSource(56019U);
    msg.setSourceEntity(154U);
    msg.setDestination(22041U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.8064535645232949);
    msg.setSource(7535U);
    msg.setSourceEntity(236U);
    msg.setDestination(54832U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.17483034709717815);
    msg.setSource(46738U);
    msg.setSourceEntity(215U);
    msg.setDestination(19833U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.4364846923766186);
    msg.setSource(685U);
    msg.setSourceEntity(148U);
    msg.setDestination(61798U);
    msg.setDestinationEntity(213U);
    msg.mid = 58017U;

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
    msg.setTimeStamp(0.9057550885695544);
    msg.setSource(59163U);
    msg.setSourceEntity(66U);
    msg.setDestination(8328U);
    msg.setDestinationEntity(245U);
    msg.mid = 1172U;

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
    msg.setTimeStamp(0.6967015260790177);
    msg.setSource(12769U);
    msg.setSourceEntity(230U);
    msg.setDestination(12960U);
    msg.setDestinationEntity(35U);
    msg.mid = 56736U;

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
    msg.setTimeStamp(0.9194806134005068);
    msg.setSource(42417U);
    msg.setSourceEntity(231U);
    msg.setDestination(16526U);
    msg.setDestinationEntity(68U);
    msg.state = 211U;
    msg.eta = 49823U;
    msg.info.assign("TDEWSLRNRBEMCJHFDJUQXNEBQPDFDILXSUTAMYIJWWLCNFAQACOKMULVOAKXBCKFZPLSITQELPTKPTDCHJFSPNXV");

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
    msg.setTimeStamp(0.5839273474171672);
    msg.setSource(64142U);
    msg.setSourceEntity(117U);
    msg.setDestination(9355U);
    msg.setDestinationEntity(55U);
    msg.state = 63U;
    msg.eta = 65015U;
    msg.info.assign("BAKTSMWRUMVUKMSDBAIDVYDCQWOBRMFUHCEMCJXHRIFABDQZZQVOXCZLNXRXIGYXSONVPNPFXSNSOKULVGQWQPPVSGZJTHHOFQQEPVSTTFEAFCIYDGPSBTWJEGIBUCYXHUXQLWDDLZABEMQUSVLIY");

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
    msg.setTimeStamp(0.8166570885164194);
    msg.setSource(1944U);
    msg.setSourceEntity(73U);
    msg.setDestination(6862U);
    msg.setDestinationEntity(191U);
    msg.state = 181U;
    msg.eta = 5790U;
    msg.info.assign("WCBYGPZFUEQKSKOQDHCHYQTRHTKURFUBSCTNAQTRSEQXMFVULIXMGOHGLSKKJBXLLZIPYNVJIBIXRIYWVEDBXBUJXZHPMOOUCDKGTPWSVGZVEYWEWCQNTPKNWBPFXLRHEJHWUUUFHPDSJSMJRGLOFLVYLZEMRCMOJNMEVOBZMDJTFNTETICQYZLAHANAGAAPIOYFI");

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
    msg.setTimeStamp(0.4090323966969136);
    msg.setSource(30325U);
    msg.setSourceEntity(34U);
    msg.setDestination(7060U);
    msg.setDestinationEntity(201U);
    msg.system = 4638U;
    msg.duration = 35449U;
    msg.speed = 0.443978639483692;
    msg.speed_units = 48U;
    msg.x = 0.4450728033961483;
    msg.y = 0.5339749365424384;
    msg.z = 0.8020221420514918;
    msg.z_units = 112U;

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
    msg.setTimeStamp(0.8250766971883426);
    msg.setSource(26382U);
    msg.setSourceEntity(127U);
    msg.setDestination(54916U);
    msg.setDestinationEntity(161U);
    msg.system = 45756U;
    msg.duration = 10877U;
    msg.speed = 0.4731217001685981;
    msg.speed_units = 162U;
    msg.x = 0.6011810477279489;
    msg.y = 0.10533342547109481;
    msg.z = 0.37688116915932635;
    msg.z_units = 56U;

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
    msg.setTimeStamp(0.08102758504288565);
    msg.setSource(54612U);
    msg.setSourceEntity(31U);
    msg.setDestination(36139U);
    msg.setDestinationEntity(7U);
    msg.system = 28327U;
    msg.duration = 14984U;
    msg.speed = 0.8018206108715137;
    msg.speed_units = 139U;
    msg.x = 0.6304623575833482;
    msg.y = 0.5722386924130566;
    msg.z = 0.24702839713645897;
    msg.z_units = 181U;

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
    msg.setTimeStamp(0.30348239473135463);
    msg.setSource(6588U);
    msg.setSourceEntity(31U);
    msg.setDestination(44930U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.42240329256793274;
    msg.lon = 0.28569885158253105;
    msg.speed = 0.44994055243953734;
    msg.speed_units = 224U;
    msg.duration = 41077U;
    msg.sys_a = 3043U;
    msg.sys_b = 22301U;
    msg.move_threshold = 0.44428414265528837;

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
    msg.setTimeStamp(0.3824047874709864);
    msg.setSource(48907U);
    msg.setSourceEntity(235U);
    msg.setDestination(9U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.31116510777528683;
    msg.lon = 0.14490681418736695;
    msg.speed = 0.019832427526691676;
    msg.speed_units = 215U;
    msg.duration = 19973U;
    msg.sys_a = 27604U;
    msg.sys_b = 41554U;
    msg.move_threshold = 0.9085146245291342;

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
    msg.setTimeStamp(0.14692425204039616);
    msg.setSource(25169U);
    msg.setSourceEntity(193U);
    msg.setDestination(24225U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.4549053900457952;
    msg.lon = 0.7599597431287253;
    msg.speed = 0.7297976045728427;
    msg.speed_units = 115U;
    msg.duration = 35726U;
    msg.sys_a = 37661U;
    msg.sys_b = 45224U;
    msg.move_threshold = 0.0011503138325680284;

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
    msg.setTimeStamp(0.6858447108896207);
    msg.setSource(59228U);
    msg.setSourceEntity(158U);
    msg.setDestination(39986U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.9460676404501305;
    msg.lon = 0.038131061368385066;
    msg.z = 0.42373239836436705;
    msg.z_units = 141U;
    msg.speed = 0.7996667655339592;
    msg.speed_units = 98U;
    msg.custom.assign("WDOUGBHAHOZMSMPPXUKYIGQHAUTBWFTJZWSTBPQEOSZJVERLNMCATYVLWMVKRGSDFVEIVDUNUUEDXZQZQQNVEUPJUNAZFSWOMJHG");

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
    msg.setTimeStamp(0.6978013880593956);
    msg.setSource(39720U);
    msg.setSourceEntity(125U);
    msg.setDestination(10442U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.7260014792314826;
    msg.lon = 0.5797452105570973;
    msg.z = 0.5632814929233826;
    msg.z_units = 194U;
    msg.speed = 0.8292815977156734;
    msg.speed_units = 95U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6921298480946009;
    tmp_msg_0.lon = 0.6583589516450796;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DSYVTVZSXLRDLNBQFXDZUWCLKIOSDIHHPWQXJCZOJXJSCHCTFYFMHGKZOGQLRSWO");

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
    msg.setTimeStamp(0.560850548931812);
    msg.setSource(15835U);
    msg.setSourceEntity(228U);
    msg.setDestination(55256U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.19056993359555285;
    msg.lon = 0.11798212123049512;
    msg.z = 0.19531130997115476;
    msg.z_units = 154U;
    msg.speed = 0.5674415178336406;
    msg.speed_units = 42U;
    msg.custom.assign("ZAVLZYCLUQKDPMXLRARZJBHDVPVJBLCBIWYTNOSSXNPNAIVEQGKKMXXDHCZFFOSXDOVNUGFRTNUARQVLAIQTCKMATTUDGOPIEURLRWBTFJVEESCEXZJCQEROSXLOEGYMHJNDWZQGLBHBDJDRCHIJOSIHMZEPWNGXUHIAXKMZFQQFJZPISPTABKYFGGMBOEVTHOMUFJDYCUBQWGMYEPWSNJYUK");

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
    msg.setTimeStamp(0.8801518752761003);
    msg.setSource(55150U);
    msg.setSourceEntity(136U);
    msg.setDestination(31727U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.5871409782214867;
    msg.lon = 0.6770554135480046;

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
    msg.setTimeStamp(0.18810788021636848);
    msg.setSource(4706U);
    msg.setSourceEntity(154U);
    msg.setDestination(23833U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.7756246579604801;
    msg.lon = 0.211466036895117;

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
    msg.setTimeStamp(0.3177317626681222);
    msg.setSource(40507U);
    msg.setSourceEntity(215U);
    msg.setDestination(33090U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.6027905360702945;
    msg.lon = 0.5553772714620563;

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
    msg.setTimeStamp(0.7757340674580385);
    msg.setSource(65372U);
    msg.setSourceEntity(70U);
    msg.setDestination(2872U);
    msg.setDestinationEntity(76U);
    msg.timeout = 14816U;
    msg.lat = 0.1402770060993569;
    msg.lon = 0.06300026173310813;
    msg.z = 0.038023858190999515;
    msg.z_units = 166U;
    msg.pitch = 0.5398069476233872;
    msg.amplitude = 0.6032353836935199;
    msg.duration = 61032U;
    msg.speed = 0.09349707393256779;
    msg.speed_units = 227U;
    msg.radius = 0.5555311847045142;
    msg.direction = 73U;
    msg.custom.assign("OMKFBHOMUKASOGINHOKFIGNSEVQJZUCNKETHYGRKZSPHWZHCWCXVLDQRZDUOMPLUV");

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
    msg.setTimeStamp(0.7380609600813125);
    msg.setSource(53228U);
    msg.setSourceEntity(58U);
    msg.setDestination(48077U);
    msg.setDestinationEntity(77U);
    msg.timeout = 48356U;
    msg.lat = 0.47969519740206734;
    msg.lon = 0.44310946468602863;
    msg.z = 0.7320795013709687;
    msg.z_units = 86U;
    msg.pitch = 0.8204787634904775;
    msg.amplitude = 0.37830080320084414;
    msg.duration = 4489U;
    msg.speed = 0.707339162641693;
    msg.speed_units = 115U;
    msg.radius = 0.6332102480073377;
    msg.direction = 171U;
    msg.custom.assign("RCIYUNMTOGKOUWNYJNDOZLPBWHBJLHLSUAWXMVTASOKUQRVFBCWQIUCGWTTRVNNPPYYXYKADQFHHVXVKNEECIQDROQVMBJWBBSHVCLMSDFRAIAEGPWQFZDBVSEKWUDMKXN");

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
    msg.setTimeStamp(0.8147619858824761);
    msg.setSource(60344U);
    msg.setSourceEntity(59U);
    msg.setDestination(18331U);
    msg.setDestinationEntity(158U);
    msg.timeout = 18705U;
    msg.lat = 0.629681863900779;
    msg.lon = 0.6990605232191242;
    msg.z = 0.8962789619114744;
    msg.z_units = 46U;
    msg.pitch = 0.9764002011422883;
    msg.amplitude = 0.44493736879215917;
    msg.duration = 43853U;
    msg.speed = 0.6239849990335196;
    msg.speed_units = 2U;
    msg.radius = 0.1148962967937186;
    msg.direction = 121U;
    msg.custom.assign("MRVDHNJTTVCHZAIGABJPFZSYNOZTNDBLNTVCJXQRHZIXURZLDZWSTGEDLBHWKUWDFOTCZNFAFUUJGRGJSEUONGPMIMBYIAQTMHXSEWAGDMSLREKZYTCSBYQGAMDZDDLPGRWYQRQBESVHUKY");

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
    msg.setTimeStamp(0.6933696995747032);
    msg.setSource(42843U);
    msg.setSourceEntity(111U);
    msg.setDestination(48730U);
    msg.setDestinationEntity(82U);
    msg.control_src = 29593U;
    msg.control_ent = 251U;
    msg.timeout = 0.9720715811813089;
    msg.loiter_radius = 0.8318315656238576;
    msg.altitude_interval = 0.01727505009189645;

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
    msg.setTimeStamp(0.24794495985596354);
    msg.setSource(49105U);
    msg.setSourceEntity(141U);
    msg.setDestination(6662U);
    msg.setDestinationEntity(12U);
    msg.control_src = 13180U;
    msg.control_ent = 78U;
    msg.timeout = 0.8423639347333147;
    msg.loiter_radius = 0.4558805408951092;
    msg.altitude_interval = 0.7363900356800944;

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
    msg.setTimeStamp(0.5155669746281772);
    msg.setSource(54861U);
    msg.setSourceEntity(217U);
    msg.setDestination(45896U);
    msg.setDestinationEntity(136U);
    msg.control_src = 37274U;
    msg.control_ent = 253U;
    msg.timeout = 0.06849515705927633;
    msg.loiter_radius = 0.7444156417583194;
    msg.altitude_interval = 0.2839439316574873;

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
    msg.setTimeStamp(0.27033798317330004);
    msg.setSource(30801U);
    msg.setSourceEntity(236U);
    msg.setDestination(61762U);
    msg.setDestinationEntity(239U);
    msg.flags = 11U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0495259783854598;
    tmp_msg_0.speed_units = 225U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7196060751020233;
    tmp_msg_1.z_units = 124U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5625087054231631;
    msg.lon = 0.12873581866436967;

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
    msg.setTimeStamp(0.4621361004366298);
    msg.setSource(30740U);
    msg.setSourceEntity(158U);
    msg.setDestination(12685U);
    msg.setDestinationEntity(244U);
    msg.flags = 244U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9882856415265664;
    tmp_msg_0.speed_units = 45U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6568075334424904;
    tmp_msg_1.z_units = 167U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9371083899773431;
    msg.lon = 0.0813238655630163;

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
    msg.setTimeStamp(0.8453965482110265);
    msg.setSource(10600U);
    msg.setSourceEntity(87U);
    msg.setDestination(19176U);
    msg.setDestinationEntity(174U);
    msg.flags = 56U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.19966565137943137;
    tmp_msg_0.speed_units = 226U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.08560510009871847;
    tmp_msg_1.z_units = 153U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.07269678931349033;
    msg.lon = 0.7983949718291484;

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
    msg.setTimeStamp(0.36098615001991086);
    msg.setSource(47134U);
    msg.setSourceEntity(10U);
    msg.setDestination(13402U);
    msg.setDestinationEntity(124U);
    msg.control_src = 27969U;
    msg.control_ent = 121U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 156U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5587570966974388;
    tmp_tmp_msg_0_0.speed_units = 235U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.46648164545569004;
    tmp_tmp_msg_0_1.z_units = 162U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.24293289800577889;
    tmp_msg_0.lon = 0.7540759774927014;
    msg.reference.set(tmp_msg_0);
    msg.state = 78U;
    msg.proximity = 172U;

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
    msg.setTimeStamp(0.00032484244304553656);
    msg.setSource(47841U);
    msg.setSourceEntity(246U);
    msg.setDestination(43738U);
    msg.setDestinationEntity(199U);
    msg.control_src = 56918U;
    msg.control_ent = 92U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 181U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0622298872969842;
    tmp_tmp_msg_0_0.speed_units = 149U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9189617066239664;
    tmp_tmp_msg_0_1.z_units = 76U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6350193721544678;
    tmp_msg_0.lon = 0.697796385996415;
    msg.reference.set(tmp_msg_0);
    msg.state = 131U;
    msg.proximity = 98U;

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
    msg.setTimeStamp(0.45717101781423697);
    msg.setSource(19117U);
    msg.setSourceEntity(147U);
    msg.setDestination(46953U);
    msg.setDestinationEntity(227U);
    msg.control_src = 38929U;
    msg.control_ent = 65U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 241U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4946595935796637;
    tmp_tmp_msg_0_0.speed_units = 186U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.06751470510639901;
    tmp_tmp_msg_0_1.z_units = 102U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2502935816397084;
    tmp_msg_0.lon = 0.5545789795782244;
    msg.reference.set(tmp_msg_0);
    msg.state = 23U;
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
    msg.setTimeStamp(0.5406824526831151);
    msg.setSource(10558U);
    msg.setSourceEntity(251U);
    msg.setDestination(31798U);
    msg.setDestinationEntity(47U);
    msg.op_mode = 162U;
    msg.error_count = 187U;
    msg.error_ents.assign("YPSKZLFZLFJUGJFRHZUIXLDOJDBKDJUGODWHJBEAPCFDUPQPYKMXOFYKFFTORNAZZDOSVEVYEWPVKMRKQWKNIWIXTJHQBYAISJLWOIRTRBVXOPRBAXJHCOCYPXNBNXASLTEMVJPEBWQQAZCRZXITNAGHMRNGSCMMQKRDMHMYSGUGKIMCVYFNWGNASZSUOH");
    msg.maneuver_type = 52297U;
    msg.maneuver_stime = 0.12063802810123647;
    msg.maneuver_eta = 55620U;
    msg.control_loops = 922554396U;
    msg.flags = 182U;
    msg.last_error.assign("YPZZFVGNDGZMFPRXTICXKFRLIABRLXBPOVKZBRLYQLHUTMHIJOEJHANTTEXXNGMLBAVQUEIWCXSRYMOUJWKCWNJYXHHEMNLIQMDYQJWSBRLPMMHKKTVCILAVBEBWBEFHGZUPVYYPODZVKRNKKAJFXDEJUPCHCOUPKHUFDSGJNUYWADVSSTSRTFOHDOPXCZRQPQWTGFWANRMWQGKOIOWQZNZDSYGCLFYGZDSCEQOIUAGVCUSBJEAFMSDXEQIVI");
    msg.last_error_time = 0.1907318911466609;

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
    msg.setTimeStamp(0.9720801577115571);
    msg.setSource(39992U);
    msg.setSourceEntity(248U);
    msg.setDestination(8355U);
    msg.setDestinationEntity(127U);
    msg.op_mode = 54U;
    msg.error_count = 174U;
    msg.error_ents.assign("SOOFURSRVJLPFXDWTDWPMBLAULTLQLJVDBUSOJKSLRWCZCVCBXLZWVEON");
    msg.maneuver_type = 56943U;
    msg.maneuver_stime = 0.26178939514159016;
    msg.maneuver_eta = 17212U;
    msg.control_loops = 3818577827U;
    msg.flags = 120U;
    msg.last_error.assign("PGAQPBSYOZZRMZIMBWRFGARONKFLTOKYKHXTCKRFSNJMDISMIISYMCOJXBDEPIOLDWRHAYSKIYIZZEEA");
    msg.last_error_time = 0.9405755858349896;

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
    msg.setTimeStamp(0.5589961436763482);
    msg.setSource(30926U);
    msg.setSourceEntity(42U);
    msg.setDestination(27863U);
    msg.setDestinationEntity(19U);
    msg.op_mode = 89U;
    msg.error_count = 99U;
    msg.error_ents.assign("ABXOKGWGDQFWZAKEVRJLGGMUKVRFNRSRAFEOPQOIVDYQEC");
    msg.maneuver_type = 1911U;
    msg.maneuver_stime = 0.7406802055737327;
    msg.maneuver_eta = 42598U;
    msg.control_loops = 2552845550U;
    msg.flags = 124U;
    msg.last_error.assign("EBXSHNKHHPRNQLGZBSTLYK");
    msg.last_error_time = 0.30811464700699676;

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
    msg.setTimeStamp(0.8278123779910987);
    msg.setSource(29158U);
    msg.setSourceEntity(181U);
    msg.setDestination(30863U);
    msg.setDestinationEntity(227U);
    msg.type = 195U;
    msg.request_id = 18941U;
    msg.command = 245U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 47222U;
    tmp_msg_0.name.assign("JUTDVZURTJKGFVNPJJIQTDBBHGMEEESCPXFCFNUUBFNGVVDCQLRCGAJRTLZQDLXIELWQCYLXSZNPUZQSGAHMOHANSNCWPRKQBAYPFVKPKQYZIDXXVK");
    tmp_msg_0.custom.assign("HLXLYIFKPHUTQANJCAWFYMSTERKFOVRWMSBTGZTKHOMZAGGWQBTNJDTZVUKGPAQANUDOXMPBZDYEABHRYVEUDGIDWXUTPGIPDMYWDRIZUVOJDVYTXIPZJSPBROUHVMLDNOUCVHHSIRBKLRKSCLYX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 28538U;
    msg.info.assign("LBCZSPQGSIJEFKIGKMXIWMAFFEBMILRKUPJUAAWEHTYMJOYNYJIQRXGHXMWSGVGEIHDACUSJREIBWKPPUVHZJOOPTGZYHQLVTUVPBIOCQTXMGCLCWSKYHRUFDDJCKVTQLGKWNTZSKHAYZMMRFDEBDBFPWMNPRPETUTQMRCHUNQQSXVQZXVLNC");

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
    msg.setTimeStamp(0.017842667288474945);
    msg.setSource(45252U);
    msg.setSourceEntity(75U);
    msg.setDestination(16249U);
    msg.setDestinationEntity(51U);
    msg.type = 120U;
    msg.request_id = 11879U;
    msg.command = 88U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 4851U;
    tmp_msg_0.lat = 0.5077178719464566;
    tmp_msg_0.lon = 0.46252549527952325;
    tmp_msg_0.z = 0.952333271845999;
    tmp_msg_0.z_units = 245U;
    tmp_msg_0.speed = 0.5999310541974333;
    tmp_msg_0.speed_units = 181U;
    tmp_msg_0.bearing = 0.7665481575667618;
    tmp_msg_0.cross_angle = 0.5485911940788982;
    tmp_msg_0.width = 0.08126173006143056;
    tmp_msg_0.length = 0.4148215843555165;
    tmp_msg_0.hstep = 0.8712384094499808;
    tmp_msg_0.coff = 108U;
    tmp_msg_0.alternation = 5U;
    tmp_msg_0.flags = 206U;
    tmp_msg_0.custom.assign("DOSXVUIXTBCHQLFJLIGXOZUPVHIQWKHSNLZSWNEVICYNZDVUHATRFSOCOWOABMRLZWTLMQKLNMXZWERHRDCXCSUDIMABXGRSCQRGBPBGVVDKNQUJSKWEDHRVPOKUWKCFPJGEAOXJFATCYLJTJIEKZQBGBBFGQCFOUHPXPGYNJIJAMZIKQZWFNKUFNYDJYNYEOCETKAMMHMNTARYGXIEYUUQHTPVPTDEYVIFWSDLYW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 2747U;
    msg.info.assign("GYRIVMFNLHUEAMCNSGEWXSHERDGNIVTIBWZJYWFPNRZGDHOWQAQJGVMQCLBNDVLPXSKNRWGCALLAPSPZPEUYOQGWIYCJBUACEIMAFPFOVFMUICOLXBOLS");

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
    msg.setTimeStamp(0.3791025172559118);
    msg.setSource(30142U);
    msg.setSourceEntity(116U);
    msg.setDestination(45399U);
    msg.setDestinationEntity(165U);
    msg.type = 208U;
    msg.request_id = 61172U;
    msg.command = 72U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.27090797217015994;
    tmp_msg_0.lon = 0.5886722886186261;
    tmp_msg_0.z = 0.895150636244854;
    tmp_msg_0.z_units = 89U;
    tmp_msg_0.speed = 0.16766547226911666;
    tmp_msg_0.speed_units = 89U;
    tmp_msg_0.custom.assign("UGHZQDXHEXTFFGVJKRDRIVKQXTLUXUFZPZBYHIRCTDGQHZAJVNVYEEVCQEJDXTQFNLZZGXCOWYROMDWFZIAAIRGIGOQSUOKBZSAJPXLITGMPECBWZXWIAQVGQCFWWHKCYAJLNVDTONLMBRRHNQJCPUSSFBNPMPM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 16741U;
    msg.info.assign("OXIEVOBYPVCGRIMVDAMPZLMEFCGWDIUSBTFYNMKZZJTAQMPKNBCCRDXCVAXWTEXKQAGGPD");

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
    msg.setTimeStamp(0.45787712949333936);
    msg.setSource(34394U);
    msg.setSourceEntity(206U);
    msg.setDestination(52734U);
    msg.setDestinationEntity(16U);
    msg.command = 252U;
    msg.entities.assign("ESBCWFKZOMEUVBCBNRMMXWQWFUTYXWKVHQHQYNLHZCRROVOPTUXMERAWTNMZNCGXITUJRWXPWPQWBQOIBZRGVZOEGFLXTJTTSHSSHRPSCLXBPJAHTUPMLBHJRAVMSFIPVEVZDOHIYARCOIFLZEFAYNCXYQDMEYZDCFJVQKHNEBDHAIONGQSKDJLFN");

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
    msg.setTimeStamp(0.19562597758106215);
    msg.setSource(53838U);
    msg.setSourceEntity(103U);
    msg.setDestination(1838U);
    msg.setDestinationEntity(84U);
    msg.command = 162U;
    msg.entities.assign("QZDKRMCVFXJEEUOEOFJIEVLTSYQEDRSQZ");

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
    msg.setTimeStamp(0.34336917980788506);
    msg.setSource(28718U);
    msg.setSourceEntity(171U);
    msg.setDestination(63715U);
    msg.setDestinationEntity(78U);
    msg.command = 235U;
    msg.entities.assign("AFJTCXRGTZFDSVRGZKXUTCOAMQJIDVESEPKMPAOUVIBNPOCOXNEWQZLAYEDHFIDNLXZQWEPIXLSGMBAYQMQSCKHWKDZODMZMSCBSTTNRFUVJRPQEVDEQMKGIABJGDLYGNKOVCPWOJXOFZ");

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
    msg.setTimeStamp(0.39737727187359184);
    msg.setSource(24598U);
    msg.setSourceEntity(54U);
    msg.setDestination(10754U);
    msg.setDestinationEntity(228U);
    msg.mcount = 214U;
    msg.mnames.assign("ALAMIGWBYQYYIAHCSDEFGFBQLLYXIJKMNEWDEAQOMGWMGYJXFGLSPZCQEROQKTJEUJJHPRMNMSTHOIHLDCTJQSODXLAVZTZDVZRWTIDVXHJQVPSOUNMNJLAFIVFDXKVAWVIGGNYCEJIKXRWLHOGBQKONCUGFDKUGBUHYNMPWEBTZSBPBNZURMODOQKFXKYPWAHZTKFPWSREXCALLUZSPBRZCRPSFFQTIOJCRIVARUVNHEKEPWCUVNZXTYD");
    msg.ecount = 72U;
    msg.enames.assign("VLFRZCUBDIQLD");
    msg.ccount = 66U;
    msg.cnames.assign("GLFNVZNBXHVZAHRBXSBYQCGKDQR");
    msg.last_error.assign("CMFWXKYLZTHUNLLDGQGNYBRCMDQYYFHWWFHDQQOCLECWGGFLWUCRIGPBNICXMIZJVXBDBDBSPAIAJOPXEKUBPXXWMSSJSXFAQBSXZYFJUPXZPKAZAYIQVW");
    msg.last_error_time = 0.546369928923559;

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
    msg.setTimeStamp(0.7767062459674203);
    msg.setSource(47817U);
    msg.setSourceEntity(6U);
    msg.setDestination(19246U);
    msg.setDestinationEntity(35U);
    msg.mcount = 5U;
    msg.mnames.assign("FMCZIWSMPDLFPSLUNHGOFMXXMQQKBAQYFVGHHCNUGZDEGKTCUHERQMREALIAEDLECKHCYVXQWBRZXANHQKVAXGMOWLKUPSRIKWZEUMRMPYSODJS");
    msg.ecount = 83U;
    msg.enames.assign("DHBWEEDIASGTTLJBXZUUHFYRMOLIWTZOSPFCHNHOOAXVPPCBZYNDGJAEUCWHUFTFNJQTMRRZZAVKFQYOAUXUPERYOLKQWZJBHHVGPSLBJFKBYWWGJKASQSQDOMCXPRMDNIUNFUNDMPWOIIPAUBEYGVFPZSDWECNTUVTEHQEGAFMPDTQNCIZIKLRZJMOLMKCYRVVVWLBQIYXFKLBSMW");
    msg.ccount = 5U;
    msg.cnames.assign("UUCRKQGWHFHXJKTZEDMFSGPZGASNIPBSASYLZHVYNYBAJROSBNDQPIVDAAKSLMZIZBRICLEIEVESPJBGFOHMWQKONDCFMXVBQRDLPJMNAKHEKLBFNJIPQHJWYDOZEWYJWXIYTGXRTUCFUPLODXAGUGMCHXJSVTGZEAROCXIFYHWUWFDRBWCQOCXHIQEOTKZFNRVHDXANIKZTWYJKUYJNY");
    msg.last_error.assign("OABGHKBHPIJCWJSXLETVDMLHHGEIFWVPOQUUOOCFHWZXMARDXYAEARDDBTAQUZRARXFXJLCGSQEYDHWBTYIATDWEBBBOSFRPWQMGUJUKDGDVUWNFAVEZTCEOYURZLCKHPPRSIQNBKMIRHEKJMNYMXFYJLXFJQPVFLMWSRTPSASLYSCPNTLWHVOJGXDCOICKGGOZNXKZNKIVNLTOYQQQVJLYIXWMFZCKPAYSGBJPRIKNUNZ");
    msg.last_error_time = 0.7126452607334705;

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
    msg.setTimeStamp(0.3138478412664063);
    msg.setSource(20966U);
    msg.setSourceEntity(251U);
    msg.setDestination(13424U);
    msg.setDestinationEntity(243U);
    msg.mcount = 15U;
    msg.mnames.assign("KNUGRNCGIDZZUABXSDFPBYDHVKVMICZESGOMRCRLVMTNOQGDBVVQKPCFEGKSA");
    msg.ecount = 36U;
    msg.enames.assign("RIVXLPTZQRLOGTBFFVOSVDLEZJAQCSXJKCUDTDMEBYQYJPJOUFTPBEINIYRUUVHHXAZEZQOKUCVHITCLDIXQNNRWPSIZVGJYREXKRFGKGYTNQWLVMTFAUBKPSHW");
    msg.ccount = 71U;
    msg.cnames.assign("GFXMZFNBEIKLQJLCNYOFLEIXQSMGOVZVATTTBCZRBCXAQGXUCUFIHDNDUQFWZGKIWULQPNHJHMSYMIUWGJUPOWYADIZXBQKRWN");
    msg.last_error.assign("QPAEZITXVEMGNBGBRLIBCAKYFUAZSWEQCROGUQXJANTLQTVGMBHNKJRRFGFDVGWTCPKRV");
    msg.last_error_time = 0.011794276241766655;

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
    msg.setTimeStamp(0.011604400910337986);
    msg.setSource(20233U);
    msg.setSourceEntity(240U);
    msg.setDestination(59648U);
    msg.setDestinationEntity(27U);
    msg.mask = 104U;
    msg.max_depth = 0.22717655719949692;
    msg.min_altitude = 0.749211025073621;
    msg.max_altitude = 0.6885744818247787;
    msg.min_speed = 0.5963158827694799;
    msg.max_speed = 0.5018104084416717;
    msg.max_vrate = 0.20809829914684985;
    msg.lat = 0.12935842393552432;
    msg.lon = 0.33335631931308063;
    msg.orientation = 0.8848476945897965;
    msg.width = 0.01441665412673776;
    msg.length = 0.9655081299561661;

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
    msg.setTimeStamp(0.6913013556874729);
    msg.setSource(43597U);
    msg.setSourceEntity(40U);
    msg.setDestination(54791U);
    msg.setDestinationEntity(62U);
    msg.mask = 226U;
    msg.max_depth = 0.405137195092373;
    msg.min_altitude = 0.7376084526459658;
    msg.max_altitude = 0.8976317876062161;
    msg.min_speed = 0.21010650687218901;
    msg.max_speed = 0.9772035181401778;
    msg.max_vrate = 0.8966051408479935;
    msg.lat = 0.07416581760832941;
    msg.lon = 0.027676232243482812;
    msg.orientation = 0.07115643649769687;
    msg.width = 0.883420634444292;
    msg.length = 0.8348574320382206;

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
    msg.setTimeStamp(0.8959011661588221);
    msg.setSource(25227U);
    msg.setSourceEntity(136U);
    msg.setDestination(11580U);
    msg.setDestinationEntity(234U);
    msg.mask = 225U;
    msg.max_depth = 0.551344033766031;
    msg.min_altitude = 0.6644136759775362;
    msg.max_altitude = 0.7286645300690431;
    msg.min_speed = 0.40865539168577014;
    msg.max_speed = 0.6836505800325325;
    msg.max_vrate = 0.858101528556572;
    msg.lat = 0.4819415637887513;
    msg.lon = 0.04945086166805335;
    msg.orientation = 0.2161921338337086;
    msg.width = 0.9134546635872858;
    msg.length = 0.044173449082612226;

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
    msg.setTimeStamp(0.39797486920689684);
    msg.setSource(54288U);
    msg.setSourceEntity(192U);
    msg.setDestination(30250U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.282369225873663);
    msg.setSource(35712U);
    msg.setSourceEntity(112U);
    msg.setDestination(24261U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.1296117027076703);
    msg.setSource(1006U);
    msg.setSourceEntity(164U);
    msg.setDestination(65033U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.030749174684043257);
    msg.setSource(21509U);
    msg.setSourceEntity(170U);
    msg.setDestination(14330U);
    msg.setDestinationEntity(93U);
    msg.duration = 37647U;

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
    msg.setTimeStamp(0.45722908794875294);
    msg.setSource(29444U);
    msg.setSourceEntity(15U);
    msg.setDestination(36345U);
    msg.setDestinationEntity(60U);
    msg.duration = 44657U;

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
    msg.setTimeStamp(0.9391624853471282);
    msg.setSource(47689U);
    msg.setSourceEntity(115U);
    msg.setDestination(60224U);
    msg.setDestinationEntity(116U);
    msg.duration = 8071U;

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
    msg.setTimeStamp(0.3355077520247902);
    msg.setSource(21298U);
    msg.setSourceEntity(58U);
    msg.setDestination(2374U);
    msg.setDestinationEntity(189U);
    msg.enable = 168U;
    msg.mask = 3577238650U;

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
    msg.setTimeStamp(0.180617129110883);
    msg.setSource(14846U);
    msg.setSourceEntity(49U);
    msg.setDestination(13836U);
    msg.setDestinationEntity(110U);
    msg.enable = 48U;
    msg.mask = 3005348321U;

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
    msg.setTimeStamp(0.08921327754132613);
    msg.setSource(9968U);
    msg.setSourceEntity(228U);
    msg.setDestination(59856U);
    msg.setDestinationEntity(1U);
    msg.enable = 129U;
    msg.mask = 1135355713U;

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
    msg.setTimeStamp(0.9090477638983606);
    msg.setSource(30025U);
    msg.setSourceEntity(166U);
    msg.setDestination(20139U);
    msg.setDestinationEntity(234U);
    msg.medium = 244U;

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
    msg.setTimeStamp(0.4246726276030689);
    msg.setSource(31194U);
    msg.setSourceEntity(34U);
    msg.setDestination(2323U);
    msg.setDestinationEntity(85U);
    msg.medium = 210U;

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
    msg.setTimeStamp(0.07782658247467311);
    msg.setSource(52940U);
    msg.setSourceEntity(195U);
    msg.setDestination(63842U);
    msg.setDestinationEntity(45U);
    msg.medium = 193U;

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
    msg.setTimeStamp(0.47816726454414127);
    msg.setSource(6298U);
    msg.setSourceEntity(51U);
    msg.setDestination(19022U);
    msg.setDestinationEntity(202U);
    msg.value = 0.16664957383039347;
    msg.type = 235U;

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
    msg.setTimeStamp(0.8693056347194028);
    msg.setSource(56722U);
    msg.setSourceEntity(31U);
    msg.setDestination(7344U);
    msg.setDestinationEntity(169U);
    msg.value = 0.8645124662609674;
    msg.type = 25U;

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
    msg.setTimeStamp(0.08659337790249833);
    msg.setSource(11362U);
    msg.setSourceEntity(22U);
    msg.setDestination(19388U);
    msg.setDestinationEntity(98U);
    msg.value = 0.2088193606434332;
    msg.type = 23U;

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
    msg.setTimeStamp(0.35561519404457187);
    msg.setSource(36769U);
    msg.setSourceEntity(122U);
    msg.setDestination(17431U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.06574676549289016);
    msg.setSource(63555U);
    msg.setSourceEntity(88U);
    msg.setDestination(60653U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.43270796104249487);
    msg.setSource(22510U);
    msg.setSourceEntity(100U);
    msg.setDestination(55619U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.6832256742448978);
    msg.setSource(44965U);
    msg.setSourceEntity(173U);
    msg.setDestination(56082U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("BBAJWCWMDNZBJKBKZFJMAPOESVIUOCAIONCKWOEGJJOCCTYLQSRYTHFMSXKJWYDYMZHGFQIDYNKUADBWNSIIIXIQRBKDRULUPLQMAHNCVLZVNQVIOHAYQEWWSDYBWHXITGVEVRRKFUJBDODSKRVFHJYWKTAHLLPXSQGGEKTCNOUTXCJESOPGLTFCZPTMFQXXPBXZVZFWLCZ");
    msg.description.assign("FRXLGIKVZKJMLNNUKWADRAXPZEYFYIO");
    msg.vnamespace.assign("VFUSLVMGQBDXDWRPRPOUAIMKVOAJLQUBASNHVXOEBKAJTCEUDTZBHIXIUECTHYYFYSROTYGIZXBBEDAPQTXBDBZCEFKTHFVSXYZFPZSWNDKIIQCGIDWEOKFVVENIUTWBZUOXSAGJPLINPYLZKNNQNRNUMCDAYRKAQJJCTGHXWRWLSSTUMMFOOUKHHYJWGHEGQDOCGNFE");
    msg.start_man_id.assign("VQYSFXYGXHZYPBEDRAOFFDUBDHXOVGLSWMESNYQCDEUBDFHDLYXYSNPCJMHJOJWBCYQSBCRPTGCEXCAJHJFINFKOBCRWMLGLKWIANZXTLTHWGZVHAGOGLATYKXQMRCWBNTORTQIKUTUPSYVUGUTQMWLPEUSWDCEPDUZCFIRHINSRVNLTFEJMVLMUQMIZQOIBBVRKIQBOPXHOZPOG");
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3878495507321995;
    tmp_msg_0.beam_height = 0.147407927083558;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::StorageUsage tmp_msg_1;
    tmp_msg_1.available = 1926611852U;
    tmp_msg_1.value = 168U;
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
    msg.setTimeStamp(0.33203088628360977);
    msg.setSource(34410U);
    msg.setSourceEntity(97U);
    msg.setDestination(9390U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("NYABVDGBUQAMPWUYTNALFSCMVPBBCPGQNKYRHQSNXZCEMAZOSJGQIFVCQHSBCOEWFDTXQLRKITRVEJPADTLSDIUBPTIVUKCOWYNRXUHO");
    msg.description.assign("IFLJUYUTPYKNLIQRVXBDHWLEYNLEIRTAMJWIJVDRYPAKHGJQSMCTCFCIBOZPPZMXTOMDXPAYQBNVRGWVWCQZHPOSGWSLKJFYNQAKSDSAHQJNHKAJUEBMTMVWUNBOLGXOEDDMOCZFBGPBVTAFUBQOYYCNTTFASHUIOXUQIHFEEZUZKRFALXVMDMKWHWFKCSCGWJEPRNGRTNZVHCOSIUZYXHSURFOQ");
    msg.vnamespace.assign("YKJBQLHRZUDFTRZATOUWAMWBRRGEQFUDMLEZTZYRZSHVAYC");
    msg.start_man_id.assign("FZQLDPIWHIWPUTAQLTFJWVGFRGNNPKLPSEWNADHDGVJBERUYSZXUPWZALETCUNGJIQJGRFDOLXVFPXRARPUTFANWBAKMCCNMXKFLVGDBUBYXVQPRMYSIOZCQVUYRJCRKHCJWXSHDHLNZJLHBDECHGWYZYXTIWSYQWMOITCEZJKIHISOYGFVBVTMETSTEDQ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("ZAGATACNRTSHPPNOLQUVDOCNYHQGUKSBEWUOESDFOFPWWXTCYIRBAOCGHPUELAMRPAVQTIZJKEMBHWK");
    tmp_msg_0.dest_man.assign("WFZWDZRUISSTNGALQLDFCQHWJQJLOYUAEHYDXQXFEPOF");
    tmp_msg_0.conditions.assign("NXDZHWESGNEWKQRZPNLMZVBUAUYQRWCJITFEZOLROKUWSFKIZHOJILIXBHSJEIHHTMDHUEPBXQFVQDVZGMOPNUBGPLQCSSMLYYVATGUQIINYBYHJYNAXGOCPTBFIGGRDFQFMTQDDTOFWYUERVDKSXFSDZRTSCHVNSBRAUOHCUQLXYALHXZWJJCLVXCIMJUTYGEBNLWCMYVAIWTOARPMBPJSXQGKFWERVFDZAXPKLKBCJKGEAPPMNMJTKOKWV");
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.398484512618431);
    msg.setSource(22530U);
    msg.setSourceEntity(181U);
    msg.setDestination(17907U);
    msg.setDestinationEntity(122U);
    msg.plan_id.assign("TCTCNVBFBIIJSSCGHRWJLEUZQATRMQIUECAJPGHSMFKQXMLUPYUGDXXDYBVXDKTKJSP");
    msg.description.assign("ZXBGGDKAUNABNSYCSFIBLKRDUYFHSBXTGEQRWNPKUWLSQTLPGJCUTVIELMQXNKHVSJJYLMYKNTFCXXZOOYJWIQGZRWIRUDCEIMLVOVBAXZMLIDYDTZBLZTRREZGIVGQEOFIJPCAMPUEIHHPAJBHWRXZMJBFCZPWG");
    msg.vnamespace.assign("IEYCIAAYEAGMJKFNUQHQMLPWKRHMGNIORASQBQOECBYXACVILFXRGNAYXTKHPTBETRGJWNZZHGYGIRCATLDVOFVDFDCUNXXHGNCBNLDKRSTEIKJVFYVKPATUGQJBLOIVBLFGVJTBZMOYDTOMXMKBEMRSBPQFEEFOHQNWZPVZONQMWZUUYU");
    msg.start_man_id.assign("UHQTKIDAKHELGEAEEZWFNCXBFRKACEZUIDZABSQYTGWSRUNRJQKKGOFGOLFWRGWBZONIAUTMQQYPMFWMGGXRIONDYTLTPCUPTMCHLTLADOVJAOIVIJULJWPNZAZYK");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("JCWPBMLIGOOJDXVFIWZSALEDQSIWFDNZPELRLYCAGHTZPXFUSSRPKJJMNTRLMORPHBJAWADOIEURJXZUNXQOBFHLKGEMNKCVOKVDHUSNJQQGVYFAMWGOCOTZASTIHYZGLEWMOPTUJUFQWCVTBYPTKSLWXEIQEMMKCFTNYSSGMQUVJIEYCHIXFNVSLHDCZARHBYU");
    tmp_msg_0.dest_man.assign("BMNRDGRCQJMDLNEBJSLQXGUKUUZHGLALVBVJLNVYXIIEXVQOEFTHHUKRR");
    tmp_msg_0.conditions.assign("GACQUXTXKUAXFVSCOCTLYAELZNKOYADTWUHUKDIRXPYBVOKHSUJVMZNUIYLSPPKGLIYBJDGOGEFBERHKNBZQTRQZURNYEOGOKRECVXLBYVEUMLAJZYCURTJWBXTVKEGVWFLEQZFLQQPLHONULMDSKWWBZWPMXRJYFQPBWGNWASTXGNDMMHACJFRVYCTCIVFPFZSHHHCMAZXDJWGJONCPRVQIRK");
    msg.transitions.push_back(tmp_msg_0);
    IMC::CacheControl tmp_msg_1;
    tmp_msg_1.op = 139U;
    tmp_msg_1.snapshot.assign("DRWCHSDTKJXWQMPSSSASSEFIZRCFJZVZRONFWGERASHMTOYXUADFFOPTBBIQDYHVNJRNOEYJLWNICYIGOXKUXUSAXMCEGCFJZDVVHKYXNCQMSDHPMTOQZMKVPTWZXULZNGNUMJFIIRBELAYVENYQMZTWQLOVVKMOQFGUAKXHAYH");
    IMC::ReplayControl tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.op = 114U;
    tmp_tmp_msg_1_0.file.assign("QAAAQUNHRCONAJQIBRIONXUQFBYLKWWDRXYHECOVYVYIXVKTKFMZTWSPMHAHTUFKBCATRDBZVNBDLJLYCLIGMDMGNEVKEJZXJUJOYSRZLS");
    tmp_msg_1.message.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.006430661744849853);
    msg.setSource(58207U);
    msg.setSourceEntity(242U);
    msg.setDestination(40325U);
    msg.setDestinationEntity(231U);
    msg.maneuver_id.assign("UVFUWHBFRXRUBOHZAEYYCFETQXRYPGYXGNJEURNXQTUSNAJQCLGCOJUTXBBOFOSWEPFZMJESMFNNIPHPIXCKJMDHAZCNJMNISDGZTLZLREADSUBNWIZDRPNOKDMJBGZCXMQMGIWTVRYLSHKODIFLBVQPECTOYUELHKDPCCDYPVSMA");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 20731U;
    tmp_msg_0.lat = 0.4148324824989088;
    tmp_msg_0.lon = 0.9585829357517648;
    tmp_msg_0.z = 0.03539433742302123;
    tmp_msg_0.z_units = 62U;
    tmp_msg_0.speed = 0.859977815150055;
    tmp_msg_0.speed_units = 22U;
    tmp_msg_0.duration = 26538U;
    tmp_msg_0.radius = 0.5123751178510967;
    tmp_msg_0.flags = 82U;
    tmp_msg_0.custom.assign("KTORTJDTGBSXYQGKHYCPIQQNVEFUNBMBKJCAKLXGXFUUSIFGD");
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
    msg.setTimeStamp(0.8364501075476072);
    msg.setSource(42054U);
    msg.setSourceEntity(227U);
    msg.setDestination(38699U);
    msg.setDestinationEntity(196U);
    msg.maneuver_id.assign("YTANCKNJRWLAHLSNMTFJFMZFFQSXRMPSJUMMHNUROFTBYEILDOBDAJHXTSQGPHLXXKYIHVPRCOUCQKRDWDVKSJXZZQWQXVHGWBIGXKSEEUGVCNYVJKTCLBWJAGKEDUVXWZAAQEPKZFDELUHFUIEPJURGEMOQTWNMTGYY");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 38329U;
    tmp_msg_0.lat = 0.31437549380315144;
    tmp_msg_0.lon = 0.3190751190727157;
    tmp_msg_0.z = 0.8795314127009972;
    tmp_msg_0.z_units = 132U;
    tmp_msg_0.speed = 0.9947341991422594;
    tmp_msg_0.speed_units = 153U;
    tmp_msg_0.bearing = 0.6588572793462312;
    tmp_msg_0.cross_angle = 0.13413285643456563;
    tmp_msg_0.width = 0.49434850933687957;
    tmp_msg_0.length = 0.583985890199224;
    tmp_msg_0.hstep = 0.9805679741432872;
    tmp_msg_0.coff = 205U;
    tmp_msg_0.alternation = 190U;
    tmp_msg_0.flags = 69U;
    tmp_msg_0.custom.assign("ARTQFSOCPIXQAGFGDMTSLKHECXIANOZSFYTNXRIBZGVSMCDWJDDHJFQJZMPFUYYEGVNZIMLRPZCCMQRUBKGAXNZEWBCKYDTJYCZHWNINZYEDWXHFHBTGRMEVGXTYIMQUNUDBWGJHTQYJDPJZK");
    msg.data.set(tmp_msg_0);
    IMC::MapPoint tmp_msg_1;
    tmp_msg_1.lat = 0.35530546586224565;
    tmp_msg_1.lon = 0.5010424832034758;
    tmp_msg_1.alt = 0.31695183493139356;
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
    msg.setTimeStamp(0.006063220506715483);
    msg.setSource(64419U);
    msg.setSourceEntity(172U);
    msg.setDestination(39607U);
    msg.setDestinationEntity(23U);
    msg.maneuver_id.assign("CGOOOUTYPCDESFPVICKGBVMWDFSAXWQSBNRQWERQOXGIQPWHLTBJTVNKLZFBWJAOQHABQMECUHFUALUUMMGKDTRPYEVHKRLJXOAV");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 37276U;
    tmp_msg_0.lat = 0.896258402368417;
    tmp_msg_0.lon = 0.7634134334652161;
    tmp_msg_0.z = 0.8648869633202405;
    tmp_msg_0.z_units = 44U;
    tmp_msg_0.speed = 0.9295774043736059;
    tmp_msg_0.speed_units = 127U;
    tmp_msg_0.roll = 0.20618553885499225;
    tmp_msg_0.pitch = 0.23364837253262638;
    tmp_msg_0.yaw = 0.7360439149012665;
    tmp_msg_0.custom.assign("AJCDSZLJTONXRIGSZEOHWKCYKJTYQSIPEJDMLULZZEVJLTTVXHVAIJOGWMKOHGROMXIBFALVKZBYSTXMRUMVZELFWEV");
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
    msg.setTimeStamp(0.46340692658465454);
    msg.setSource(24774U);
    msg.setSourceEntity(112U);
    msg.setDestination(46417U);
    msg.setDestinationEntity(108U);
    msg.source_man.assign("CBJHOKLRKBFDDDEENMKLSDUFZMTSYXWUHNKMVMTYMIQTBLBQNDIDJGRPKACZWPACGTVXCSKQQUHZEPGSVJAKXPRMIZOZPKZWTYHTOOHLENYGNRLPWHSBUQUYJXJMECSIPCJZSDXEVJFVVVWYOCADERXUOQVWQUUCUOTNA");
    msg.dest_man.assign("HIEXILJUHESSVOWZGRRCWBQJKTQZHWLYZUJCVQTUHFPRKSDGGOJWYDTLRZJVWQGCLNADXHPJIDMYGENUSEZEZDNBDAPRZVUMCPZOZASXCXLXYESJMMKQDUKBKQKTOYNBMKRFRJTRLBDBBMRTWTPBCXMLCNJAYTGWPNXXCOFDHKTUVQLFWECGIAINRAUNVSBALPIOTIFPAVQIQYPGEZLUWXOKMVHHYVUHGYFKMMPSOAOOIXSYANGIQNFJFEVF");
    msg.conditions.assign("DPLEVSPPOKUJNDYMYCHAWXUGDMJIBCWYQCFHZGBSZLXIALTOGRCQRBVOIGREWXNRRYWSQMOOHQQOHMBENECDLUEXUWGVLZSWJBZRIBPFPZDTSNCAOAOXEJPGQKANINTTCAKOZHTIQCHVHUDFHTEYZKYFMGMSFL");
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 116U;
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
    msg.setTimeStamp(0.932487447967905);
    msg.setSource(15422U);
    msg.setSourceEntity(133U);
    msg.setDestination(16911U);
    msg.setDestinationEntity(191U);
    msg.source_man.assign("SWNCZPTUXUUB");
    msg.dest_man.assign("OSVAHKGUBPICYPFNVTXWWCFIANBDIMQQBKFWJUPUFVCDRYHNNMGMCWLDOYBRAEECMKIGWUVRYQMGJLUXTSGJNFVIRIXQKYTLTVBLHWYWYNYLBDVFBALEA");
    msg.conditions.assign("OFETOZYYDYXKPHOAHMWLCITCZYQSMRXL");

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
    msg.setTimeStamp(0.0780236256937239);
    msg.setSource(9895U);
    msg.setSourceEntity(219U);
    msg.setDestination(8616U);
    msg.setDestinationEntity(74U);
    msg.source_man.assign("BDONGTRKCYMZREBCUEVBSIMBECVUJRQWXCOFNARFXFFVUTHRPACCTSEKKYKMOVXNGQIMTLQQFCELYHTZDSOSMKDJKGFEBEJORDVCUPXQYCALIWYABWPXMKTJPAZ");
    msg.dest_man.assign("CESZPFENVHSYRTUWINWKAAPFHNOYCYIKFKDVPXQQMWVHDZUGEOZBLOGBIJGFZKVYIKRXMLXUKNRENBDYQCZQXELKWDVCGSEFMOSRLZUKHMDBWGAJRQJIIBSTQVABZDEJGLVUXKSOFJXDGLSYYIOHUWWPXTJDZTTFCUEMLZATGCJTMPXHP");
    msg.conditions.assign("UMUZPXUFMHROGSWPQBMININUJ");

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
    msg.setTimeStamp(0.2584749224507631);
    msg.setSource(52043U);
    msg.setSourceEntity(215U);
    msg.setDestination(20417U);
    msg.setDestinationEntity(94U);
    msg.command = 181U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SMRTRBPHFTJNGVKAOFFQRGNCDSEHVDWMIQHYHIPRWGDZSSXPUTIWZWNYTDEA");
    tmp_msg_0.description.assign("VANAZLWHCDFRMHHRCRDZGXYSQMDULMMPYWEVIJABBSBS");
    tmp_msg_0.vnamespace.assign("ZTRLVFDNFFWAMEFSMOKULMOJVGXTZGPCLUUYZUK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IBYZRDPWJSEQMHEENOJSFIWUUHDKRKWRVSADLTYSTDLPTBUPCFTKAVXWYHLSHYTVBXZYPHEKVBZYDNGZGEUMYKFMAQCPDQVDIGNUUCNLZSSNVQXTUINJCOCVJGTYBGCURMAOFQRAOZHLFNOWOXZGLFEAXJMAODWUQTXGZDKJMVHTOJOBHIPNKRFMAVLGXESCEUKMFNTCZEJKXMQLHPVSIFPORHWR");
    tmp_tmp_msg_0_0.value.assign("XONQKSKIADKBMIOXZTNUJGKMLHEURONWGCBXBEFLIYAAKPOBAPSYICNSPOBJMZJEEWDBGIMFOXBDASFLQNWDHZHDVMGRSYMDQQDVNSJXQCWNCJAXBCHCTZCNVKYVZFLIIPOBCEHPFXCVKMLTLSWEHTOMPFFRXFTFLVZXWLEZRRIWCPEJYWHKFTUJTAGRZQTPNASDGKULWUBO");
    tmp_tmp_msg_0_0.type = 167U;
    tmp_tmp_msg_0_0.access = 30U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HPHZKFDAZPUGPFRKJLWNBUWSUZIET");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("HJFBYENEGFCYLMWHQSMIXGAGETSFNW");
    tmp_tmp_msg_0_1.dest_man.assign("QGTDFUMCFHMGDZZMAWELNSBISGRNQQFGRWRYMCHCXIZOFLNNLUBCQMVYKYRLKKYSKUDVRAQVUPGXLMONCWLHDI");
    tmp_tmp_msg_0_1.conditions.assign("KUIADTUCBGPAZWMSECGBJMDKEBMOWUDQQPZLFGAMWVVXZRTKFUOPKNGOOYJUDEPURTAFTNUSWVKITELLVAUSHLGFXSKMBQGPTRYSFZIQCXJ");
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
    msg.setTimeStamp(0.0332067086660508);
    msg.setSource(21633U);
    msg.setSourceEntity(14U);
    msg.setDestination(44989U);
    msg.setDestinationEntity(15U);
    msg.command = 20U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WYZPCAHDMXRLBQKLXFSDZEMNAKJWPAWRSVDQVDAOOHZGHHYSEZNKGGYSCHIYSCGBFNVWSFTBIETENAIXMEUZXUVJLNSRSXRHNZTKKTKTGFYELZWDTWUBWQMVWZPR");
    tmp_msg_0.description.assign("TGYYSXVOULKOGEJRXCVCLPHMVQXTGLIWVELEQXNCQDPHSDPLZBEJTBSUCYBBYWW");
    tmp_msg_0.vnamespace.assign("UCUMXYKBXGQEFDLE");
    tmp_msg_0.start_man_id.assign("XGNPYTUASESVNBLYQRFHJUUMXEOPJWZPSZRHFRLMFVHBJDMGCCMCKKPKDJMRHZSVSUONRVJXUTQXCNPEZBYAOOEYZQGPYCVSLLZAXDHBSIRXTAKPGDKISMWDUBCIKRGYETCIDVLYUNGBQJCVWBPQIRGAXFXSOHEIBWDWQNVITFILGRQ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("LYGQDDYEJXPVYIEKVKBJLDVZSPYGAVDMAKUVPBHGBQRBYASNXOCVHFENJRQWRIPATLBPFNFPYHQWFDIWUYVVDTNGAZBZFKCFIFMNXJDOGGXPIIXATKFYMOXCDASMCNWLLHIQNUOSIWUQWMTTXZJIRSNPZTXSGLORTHLKERDKDCEQHV");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 63937U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("BHUZPBKOODSXDXIWUGZOATEKOPNRSREYWYGZBHQGBRPHONTMMIXZTHCESUCGXFJMJUDRWXAXRJIWXBSPVZJYJFNKCLFZYTMAIRUHQLFVFWQKIPHFRAZIJMTCPDUWWA");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("GCJJTALZETJSMZQQPPCTNETVGGVARFBXOYOEJWSKIJMHGQCYGDXYSIBFTAPDDANFVESKLKWIVNRIGXAPPKXGPUBQTVVLIMDMLXZSLCKPZPWWWYRVXHKDLZTDHZENOJORQLUCRLPJNHQAQHMOBOATHEBMHGRQCKDVXOZMY");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::MonitorEntityState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.command = 139U;
    tmp_tmp_tmp_msg_0_0_1.entities.assign("OCROQWOBTAERIPUZZVRKTHZBKYDVNPVJLPMGQIMLCCZRHOSEFTNNMZTZBCIASBHIOYGBFAEERJKKBIVYORXGIELIHADDQRHSLGANWCXWSLMPOJMYBRJWJPUMEKFNGYMWQXFDAUXTOLDHS");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::DesiredHeadingRate tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.value = 0.04889635727798802;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::RegisterManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.mid = 56979U;
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
    msg.setTimeStamp(0.4155578195222128);
    msg.setSource(2648U);
    msg.setSourceEntity(53U);
    msg.setDestination(27856U);
    msg.setDestinationEntity(87U);
    msg.command = 233U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BUXZHHPLFXEBTYLYMKUHSQCITGXXJIJWHCZHJCXMXSAGVHWUGMCZULAWUGDDMHQXOZFBEQRFIASLCDEKKQSWOSPKJVOAQQXRAPZMWDFIGUAVTACLNGJNULEATLBNCRTWPZIXBMLJSJERNRHYSUATLZYDOIVIGBRNTJGBSQFNVZHLOVFBVOMWUU");
    tmp_msg_0.description.assign("PRGPKREHXKGJXUAXRHGMFISHCVMSTLPPRUCBKZEAYDWMJLHWOWJPLWKQEFBANIDZWPRLXIJMTXOCVBTFWVTQZQJIYIMXMCLSZTUVGZJSDJAUBCQHXOOFZNSLSYPEIIWDWBROIVOTGLDUXOHK");
    tmp_msg_0.vnamespace.assign("OMVSTUKPLBZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QVIASBZYGEUUIWXKRFQPVAIBDISFPFFJVNITUAGNITFGPCPGUHWRNASCSOXJKSMOOHJEMRNRYOXEDZTDFJMROGHAKWDWMPQJCQXZWOIOONSVZHPKSLMMAXIMDKJBESIQUQYNWAXDPDGDXKAZUBXTHQLQLPNKVMFTJOFWLTZINPESNCLLAHVLADKTECKYWCXFRJHVREGEUDRYUYYWEMRBLSH");
    tmp_tmp_msg_0_0.value.assign("YBBOHFCPMZNCSIAGGMIJBZJKJJUKAYFPPQKTLZAZWECWOXDTMSGRYDWHXSORQWS");
    tmp_tmp_msg_0_0.type = 85U;
    tmp_tmp_msg_0_0.access = 178U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OLYDRHOFVUCJBZXLDQONEAMNUKYSPVXJQPSAYCBVUEFUFCNLUJGHVSNRBDTUQAWPQSVECXKIHLEGBRIQ");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("UGVVSJRZUSKQRTEUXSRFILPTMEQBOBAWWSDAWHIMDMQLVYJAPNGPRMVNFRNBPITLLAFMXKBQVYNMEETIAIUYHODEJLPEAWQDHWXZKDTXKXBJZZFCQUSGUSKZXEURTPKPFMNNOGFQTGBKUJYGCMXWHTXYHVBXRXPEABOYCZHNYJLUDRZQVPLBCIKIGQBILWIZOUSCHPMGSHOMLAFEVHYDNVGFNCAKJDWRYIFQCOAZGWC");
    tmp_tmp_msg_0_1.dest_man.assign("PZRFMTERDRLBK");
    tmp_tmp_msg_0_1.conditions.assign("NZHYGCPLVWAIXNUZAQLOFSNCKOYQMLIZZPMKPXTBIFILIRXKGQIANVGPACCUDAMRWVDVUVENMZDEFWJJHUHPAOAEYELEZGIXCAXROQSNULFBRVYRSLKXYVMWBHCDTPWNTMNSBGPJHKNVHTJOYOGYFCTVIURDRSJCRKSQZBWRPLKFOTLSSGHIPQGFLBGYB");
    IMC::LcdControl tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.op = 100U;
    tmp_tmp_tmp_msg_0_1_0.text.assign("XAVQZUSWTZXIFAWJQYAHNAOTGZYVZDJZCEEODYVCXXCPIBITEJXOFKSWLRUZIBQYOFEMEFXMVRFLPFBKBGSCIFNASKRNTRNOUCSMKAKNEDEGURDBADDTSLHYOKKGHPPQADPHJLXLXYUDIEQMUJHALMJNTGWXG");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Voltage tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.3275226968740055;
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
    msg.setTimeStamp(0.8456031393907587);
    msg.setSource(51236U);
    msg.setSourceEntity(88U);
    msg.setDestination(46558U);
    msg.setDestinationEntity(99U);
    msg.state = 224U;
    msg.plan_id.assign("HCIKGPCMKNMEOASMRLNGSRDJYBKJQHBRJVKAIEHPWWLCKLMVDBKZCIIEJRNOZSWNAZXBSCIAKHYXBU");
    msg.comm_level = 77U;

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
    msg.setTimeStamp(0.38525351457370416);
    msg.setSource(30602U);
    msg.setSourceEntity(180U);
    msg.setDestination(59204U);
    msg.setDestinationEntity(197U);
    msg.state = 103U;
    msg.plan_id.assign("XDGZOMKCRJPVFOBALKUPIXZYAHTMGRNZNNDWIOUYRJMOREOYQHJRUDKQITXRDNCESNVZQSLEWYQYOIPCNCFHGTSQVQAGALMNQKLHAVOZJLXRJHGSBUEIENFRNQAPRMLZ");
    msg.comm_level = 199U;

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
    msg.setTimeStamp(0.9723920373607603);
    msg.setSource(63827U);
    msg.setSourceEntity(109U);
    msg.setDestination(55232U);
    msg.setDestinationEntity(100U);
    msg.state = 136U;
    msg.plan_id.assign("TOWAYEIFVVYHHFBFFSDIUQDBYXPQYZMTTPIQCDHQVJJUPNAZBBTJWUOZKSAGUPRIZTCEURCCZJXVUYGLMRYOXPNORHOJTROLAKNKFAPNSGNCKIEXPVPLOOPRJSWJLRVIXHQHNQBGMQEHFMMQNKADSBHIYFXMGRBWTDNQETYGLDHESVSKVJCXXEGVKRLXICMUIZZWDUMYNGAFTAWQSOHW");
    msg.comm_level = 97U;

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
    msg.setTimeStamp(0.3953743567116915);
    msg.setSource(15633U);
    msg.setSourceEntity(247U);
    msg.setDestination(48219U);
    msg.setDestinationEntity(117U);
    msg.type = 226U;
    msg.op = 213U;
    msg.request_id = 36639U;
    msg.plan_id.assign("OOTFKETLEDXJVFDKBEMRGFQIWGFRAYXINNGFVYKELXDJYKAMKGFOHJZWSSPQWSLQCAHDEVLVOKQXUECJDFWKRIBACLJHHSNMURIFZVPVURSVZYZKQITETDOVBUOSLWZWJPQTUMIZNNMLRAZTGJGFLCKUPBNKGOYOZFUAXBSARBUCYBGHMEXQMTAONIGTYJGBWLADHCYQDXVTHYPEQJ");
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.11496833562957054;
    tmp_msg_0.lon = 0.9382241874959275;
    tmp_msg_0.height = 0.936040507221125;
    tmp_msg_0.x = 0.39102029562819374;
    tmp_msg_0.y = 0.08804833802751366;
    tmp_msg_0.z = 0.8991994207376254;
    tmp_msg_0.phi = 0.09116818501288737;
    tmp_msg_0.theta = 0.7793898762745558;
    tmp_msg_0.psi = 0.25182641375137393;
    tmp_msg_0.u = 0.13645161611786782;
    tmp_msg_0.v = 0.6048884413323288;
    tmp_msg_0.w = 0.8250191944154659;
    tmp_msg_0.vx = 0.3028819574127829;
    tmp_msg_0.vy = 0.3727734988563247;
    tmp_msg_0.vz = 0.2198789334594916;
    tmp_msg_0.p = 0.6295079675096708;
    tmp_msg_0.q = 0.746943821048746;
    tmp_msg_0.r = 0.5255598065944738;
    tmp_msg_0.depth = 0.6011405544942576;
    tmp_msg_0.alt = 0.7979740385737488;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EXPSVBCWXKAOKHHUPISJXTKCHFESUFOYGAKVPQFBNJPDLCRLEIXBFEOETMJFQBDTMICWJZPPIDYOVMAJPNYIDHTCDTHFMRKQNHRGUWALDMCTHCERQQGOILXTGYDNAGXRJJIRSKKVPQHACJOUMJRZBZEIDUBZBLULWSIFYRWUFXRNJOHUDTV");

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
    msg.setTimeStamp(0.4794089105793088);
    msg.setSource(36020U);
    msg.setSourceEntity(212U);
    msg.setDestination(38448U);
    msg.setDestinationEntity(15U);
    msg.type = 248U;
    msg.op = 220U;
    msg.request_id = 30263U;
    msg.plan_id.assign("WDWKFHBHHRCDZBXYCCMBPNVHQORAPGVNVLIEOIGVSIHCILIRNWUPWMPDUHKVQCJPEJVLOIKYCAEYRRUQSJGHLZJTOYNEWVFLKFUEDGYXSTAXURNHEXGWXRJFUZMCZYLTBBFNXQNXNYDYSAJK");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56927U;
    tmp_msg_0.off_x = 0.8072188604656109;
    tmp_msg_0.off_y = 0.15412045166122912;
    tmp_msg_0.off_z = 0.34528213722162615;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UVBDITZEQZGQQWKUTQJJEIAWCYIWXSYSKXGVLPGNIKBOOKCYTZHZAIBWHPNEEMBNAFGSIFVMNQBURATNKEDXHZUOQUHZJKVXDONZFKITCYNOCMHVDGRTYGGZLTTBWXJQMXZBSOMPMIRUELLIPMXVHLUOSUGBWHYADDWVSATPWIYEOLYXSCD");

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
    msg.setTimeStamp(0.6014264484746115);
    msg.setSource(39098U);
    msg.setSourceEntity(230U);
    msg.setDestination(11966U);
    msg.setDestinationEntity(39U);
    msg.type = 133U;
    msg.op = 57U;
    msg.request_id = 5716U;
    msg.plan_id.assign("YNXWUFSWQKUCRCXKAOXFWSCGIHEQJCDACKRKACIQXTZDORMPYFHJGDUVMRZNILVGFNTZBALKJKHYKHJNKDXEVKLMOEIQVABNVALSQCRNHQCESAWIXSHOLLMOOGTZZVGRMSSSTGVLUPAOPGRPDPMRBBBXBGETPQHUZJHCTDPJWNZCWQFUUYMPDBHWNUIMASYTDKOYBVTZUHVFMGWUWDNENE");
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.5824260870347718;
    tmp_msg_0.x = 0.08548066297175227;
    tmp_msg_0.y = 0.758817174441169;
    tmp_msg_0.z = 0.9628184810153528;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LGPHYBVUDTWOYVCXHAGITIDKYWOMQUPMJRGDQPLFYELYRUWUPDYBAQGFEVJHEBGFDAXGBSSLXPVOJTFUSDJTHXMAYIBK");

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
    msg.setTimeStamp(0.5455459873207499);
    msg.setSource(65286U);
    msg.setSourceEntity(70U);
    msg.setDestination(59360U);
    msg.setDestinationEntity(137U);
    msg.plan_count = 40009U;
    msg.plan_size = 148132799U;
    msg.change_time = 0.4753985052004466;
    msg.change_sid = 60900U;
    msg.change_sname.assign("SWCWUBUCFRYKGOOHCLISUBMDGAMLDMFRCUAYOAYRHSQHHGQTRHNADJCNZYZKEVNNDIZZRIXIUMNVEOEXOAGBBMMYRRAXSNHZTSBSBQBNWVFWLULKZPBCIHSTYXFOGEJCTWLIXMFVUTGKZENVOHTGZDTXYQLEAJYTDFJFKACWQMGBXQNTLOZPKEGKJWYRESWRFVVXRUKPVJTQSZJLIEMICEKKYQD");
    const char tmp_msg_0[] = {-68, -23, -60, -119, 64, -79, -31, 30, 107, 43, 98, 125, -15, 121, 114, -90, -62, 27, 71, 29, 94, -113, -102, 37, -9, -29, -116, 63, 66, -77, -48, 126, 2, 120, -63, -59, -14, 95, 92, 44, 107, -82, -124, 81, 101, 47, 22, -123, 100, 120, -30, -49, 7, -35, -11, -21, -35, 94, -83, -4, -128, -99, 57, 111, -88, 28, 29, -36, 10, 102, -33, 88, -42, -103, 7, 88, 60, 119, -121, -70, 49, 78, -21, 41, -78, 111, 67, -66, -24, -72, -91, 64, -22, -115, 111, -117, 24, 72, 43, 112, -63, -31, -79, -58, -122, -41, -64, -33, -36, -18, -93, -63, -3, -59, 87, -12, -15, 73, -91, -48, 0, 19, -57, 112, 108, -52, 80, 106, -67, -33, 108, 80, 42, -85, 45, 36, 30, -77, 41, -48, 79, -29, 61, 106, 108, -31, -125, 19, -44, 103, -56, 119, -41, 42, -59, -65, 22, 15, -90, -48, -7, -93, 0, 111, 112, -102, 123, 40, -106, 119, -76, 91, -29, 92, -35, -124, -101, 79, -29, -57, 24, -89, 58, -84, 115, -91, -54, -6, 116, 117, -58, 19, 39, -104, 45, -95, 120, -18, 58, -75, -71, -18, -41, 55, -111, -62, 10, -115, -116, 117, 106, -12, 99};
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
    msg.setTimeStamp(0.1981413828600328);
    msg.setSource(64207U);
    msg.setSourceEntity(140U);
    msg.setDestination(35237U);
    msg.setDestinationEntity(165U);
    msg.plan_count = 2714U;
    msg.plan_size = 1485014873U;
    msg.change_time = 0.5187805281488064;
    msg.change_sid = 7942U;
    msg.change_sname.assign("LMMIZGZQSMNKHPNRSMXBDUPQAJVYSCRVHZYKPNFDPYPLVDDXHELTRHKDUERZKOBJYUAQHWBFFHHTYLASGWGWUBEFUIBVDRUWXJZOKPHKTEQBMWQBAYCSXRROJPLLOIASJEHWKTFGVWCQVYVZDYXJESWVILGNMCCLULFYIZCFTZOKIRVTGYPGOGNELETNCJQKNDKVWNJXIQOOATUAIDCANUSMPEIPDSXBFNWRMJSBOCZAFTGFOZIHX");
    const char tmp_msg_0[] = {-34, 80, 62, -69, -79, -30, -64, -62, 27, -97, 14, -75, -49, -76, -23, 42, -55, 45, -123, 14, -55, 76, -111, 99, 58, 57, 52, 84, -124, 2, 79, -98, -51, -109, -25, -24, 29, -6, 70, -99, 88, 65, 12, -37, 45, -101, -104, -58, -7, -127, 80, 72, -92, -52, -98, -88, -62, -18, -77, -7, -54, -86, 81, 100, 6, 76, 0, -67, 21, 56, -126, 46, -50, -36};
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
    msg.setTimeStamp(0.41658664530361456);
    msg.setSource(1018U);
    msg.setSourceEntity(62U);
    msg.setDestination(51089U);
    msg.setDestinationEntity(81U);
    msg.plan_count = 48303U;
    msg.plan_size = 3315712411U;
    msg.change_time = 0.8380097831007178;
    msg.change_sid = 63717U;
    msg.change_sname.assign("NWFIEKGKWDSRVPTWNGADFBUMYKOAOPPFNJFYTFUXGCHKPLNDHHRTIVRQWQBUYMSDBMGHLPEBMSWBQYNVUIDCRLMXAYXXAOJFSCHAFUJYHQXZNLLDVRIBTSVZZTKVCWMQTMRHLZKUBOLFPDWAENGLYOIZDTXSBHUXIIXVCEMZUEEVAXOSORWJISJJETQPDHKAOVRABEXCNTPWYLOZUCBNGKCKIFGZITJLUVGJHWKJQFRENQOGSARZZ");
    const char tmp_msg_0[] = {0, -97, 76, 77, 117, -66, -105, 89, 47, 81, -84, 24, -73, 98, 58, -70, 26, 85, -57, 54, 98, -19, -80, 62, 8, 86, 71, 95, 46, -17, 16, -43, 84, -76, 15, 4, -123, -6, 41, -35, 11, 70, -21, -50, -3, -82, 49, 54, 90, 25, 118, -70, 47, -80, 71, -67, -36, 41, -3, 111, -22, 16, 98, -106, 60, -25, -46, 76, -91, 50, 115, -121, -117, 45, -34, 121, -24, -51, 80, -34, 90, 85, -36, 84, -95, -90, -78, 99, -17, 81, 100, 120, -29, 84, 94, 65, -76, 58, -103, -108, -86, 78, 83, -24, -113, 0, 24, 22, -46, -120, -15, -81, 23, 80, 91, -41, -30, 21, -123, -97, -51, -101, -66, 23, -98, -75, 67};
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
    msg.setTimeStamp(0.8404125510717014);
    msg.setSource(7714U);
    msg.setSourceEntity(133U);
    msg.setDestination(30818U);
    msg.setDestinationEntity(153U);
    msg.plan_id.assign("LRLTOKTDNAGZBJCLJMIMDYNHVYZALBJZMNRZDUFMVGCXFUJVPFKYXYEQERFTODKTBZVGDVJWLYTAXSXQODMCNXZQOQGYVKHQSCABUJPEBQXEWTQHEMDMNRLCAKUGOLNTKNSLVFPSHHNEKKOWOUIXJWCCPJOCALGMHCVAUGCUXTYBYOTSIFRIDWTIBSUEL");
    msg.plan_size = 51268U;
    msg.change_time = 0.23001559875332744;
    msg.change_sid = 9814U;
    msg.change_sname.assign("TZUJEEXCVGWGMQVFICCQUPTLDIVAHHXTVNDQMSRHXMMOORACJLIGHZDFFXXRMSOHQCAGJZZUURH");
    const char tmp_msg_0[] = {86, 62, -74, -41, 3, -59, -32, 25, 102, -101, 98, -125, -61, -36, 80, -41, -108, 64, 25, 18, 113, -108, 50, 80, -31, 25, -62, -29, 110, -87, -55, -25, -63, -10, 32, -68, -80, -6, 67, 73, -87, 91, -45, -105, -49, 103, -117, -63, -29, -4, -93, 35, -55, 26, 58, -107, -30, -12, 70, 38, -21, 39, -111, 50, 77, 103, 100, -8, 14, 59, 71, -65, 73, -1, -124, -53, -83, 42, -60, -45, -97, -54, -92, 102, -66, -86, -27, -83, 67, 67, 74, -125, 47, 77, -3, -47, 82, 49, 85, 42, 87, 94, 106, 51, -7, 53, 80, 27, 60, 13, -40, 33, -65, -62, -116, 120, 55, -58, 113, -52, -107, -36, -119, -6, -40, 101, -10, -118, -56, 65, -118, -38, -28, -44, 65, -26, 17, 0, -79, -125, -72, 14, 99, 81, -26, -27, -121, -105, 106, -8, 103, 78, -128, 122, 16, 118, -2, -26, 99};
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
    msg.setTimeStamp(0.9804171914897094);
    msg.setSource(9861U);
    msg.setSourceEntity(70U);
    msg.setDestination(63840U);
    msg.setDestinationEntity(71U);
    msg.plan_id.assign("DZPLBROTGSJIUNQHLOWFPEF");
    msg.plan_size = 43734U;
    msg.change_time = 0.8113740158438008;
    msg.change_sid = 30700U;
    msg.change_sname.assign("GXNOLECXCHFNLHKRLAIBTJJUCELEISFBNJXMLYORBUCQWPEHHICKYHCTJUYSWAXFTBBQORLSXDQUEHFPVOUADGJOVRGXZPLZCDQHIGRFAWDFIVGGPYUPSJNTFKYKZYNADADTAXOFLYXNRSVLRBMGEVZAFVBOKEDTUCVZQNZEIHMWFTPUJMJDLBSMRQKMSNPYNICQWRBWZQMWIPRMUJIOVHJGCE");
    const char tmp_msg_0[] = {-40, -70, -16, -67, 101, 110, 64, -109, -62, -29, 114, 24, 38, 124, 28, 39, -13, -81, -21, -76, -25, 105, -64, 86, -66};
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
    msg.setTimeStamp(0.06134593458753357);
    msg.setSource(38134U);
    msg.setSourceEntity(158U);
    msg.setDestination(51736U);
    msg.setDestinationEntity(179U);
    msg.plan_id.assign("AGAYPMRZFBRALBZNSDXWQR");
    msg.plan_size = 2314U;
    msg.change_time = 0.5239277693427843;
    msg.change_sid = 47003U;
    msg.change_sname.assign("CEZQIIMVPOEUMXUCXJLWASFDKNTPBHUCSZCZZRNXARMYCDPMXXNQJOWSVDUSDLBVHQYMMEKCQT");
    const char tmp_msg_0[] = {1, -79, 36, -50, -121, -97, 100, 90, 126, 118, 34, 86, 49, 44, -38, 64, 77, -103, -58, -68, -99, -44, 21, -127, -61, -127, 50, 111, -39, 73, 21, 77, -48, 64, -66, 0, 96, 117, -42, 89, -66, -108, 18, -22, 73, -35, -89, -104, -78, 101, -88, 63, -126, -92, -13, 52, -45, 41};
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
    msg.setTimeStamp(0.69482756496132);
    msg.setSource(42135U);
    msg.setSourceEntity(221U);
    msg.setDestination(52597U);
    msg.setDestinationEntity(220U);
    msg.type = 26U;
    msg.op = 150U;
    msg.request_id = 6730U;
    msg.plan_id.assign("SOBMNKBDDTEALDVBXPQKOTGCCYQHNVNVQNUKIGPXASFNYBRMCLUSEGMXOYXYDUGXEXWTDPEWGNYDFAHNZJQSSVWLELADIIZVVHQYWSHRBDFKGSCF");
    msg.flags = 52920U;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 3145501267U;
    tmp_msg_0.destination.assign("NFTBSEULIPVWKUYHTFIYRBWHZKVUSKXFHEUFXYKNVIIOWZAEVPBLCYEVVNOAWZTPYWJBKAEQMSMMXLHGOUZPLIATCROGFKNGXSZDHAKVBVTKZ");
    tmp_msg_0.timeout = 56767U;
    const char tmp_tmp_msg_0_0[] = {-76, -105, 66, 107, -89, -38, -80, -65, -40, 80, -45, 47, 109, -1, -116, -128};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KXQPNQOMFINAGCWVWBUJGOKVNGTVLHXZZBDWGVOEMZCAICEEGNRGOCHPOJGDDATVKVCOHWZYUDATGLRNNIBSWPLLHMKXUTFFIBYOECMRQPMKHGCLYDWDJIHZXMHPSJXDREVYIYVAXFFETAQQNFFCJISMPMZXTWVLWZUWZKMHZDQJNULJRUUZTKTKRSJIUQCTEBSXRSFYBGYFLAIEXSWJNOKTSYQMRLEKBIBULHYQSRPOYCAD");

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
    msg.setTimeStamp(0.9886996417750685);
    msg.setSource(35057U);
    msg.setSourceEntity(137U);
    msg.setDestination(44211U);
    msg.setDestinationEntity(150U);
    msg.type = 0U;
    msg.op = 194U;
    msg.request_id = 37945U;
    msg.plan_id.assign("GAUVQHVVDYUKWIQONQWAXGTCJLMNYCZRUEGHLYXWEZPPLZRIJDVLRCNDSIYJUXYJAGIAJBCTQDKMSJHXUQPMOPJLDNFGDYVJQSQWCVSPFEZGHWKPOMVOBTCZFFEBABHISZPFDMWEFFTDZXSBLHYRTSQNXARMGNUBGAWTJTHRWMHAIZAJXKKTMFUYOIZLORHUPBONNDGIDQSVVPUWOEKELXBXFXBCCIRLLRSKVZEKCYURFE");
    msg.flags = 8660U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15123U;
    tmp_msg_0.off_x = 0.5028470265914384;
    tmp_msg_0.off_y = 0.13566832768664694;
    tmp_msg_0.off_z = 0.5413339179868045;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FIXCRKYJTPJBAISBBLBVYROGWGJNUZIKNTIAMBPUQRCVEGRCKEMGSEUITOWTTGTEKXJZZMPNUHNQUGWKIIPIGASDELJVYFQKXUTZXUMHPDWHSYZVJXWTZPCSEDYV");

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
    msg.setTimeStamp(0.9431498631695266);
    msg.setSource(36723U);
    msg.setSourceEntity(54U);
    msg.setDestination(65387U);
    msg.setDestinationEntity(113U);
    msg.type = 189U;
    msg.op = 201U;
    msg.request_id = 33635U;
    msg.plan_id.assign("BGFFBSDBJGNFLINJMWOGVKLLCFQQBCDOIMLQPNEHMUGUSUXDKAQSJRRMAEEEVVDWYXTHJLKIZRATPRWQDAWVOTNMLJICSPBYRWCIBKEZOCHIFVLMGBUMPZYIWSFASFYZVODGZIROESEBVKQTXPEGFTRVYDKPWKCMXAWHRUESXHYRXDJZCUEXJHXCUKYNBPNHAGDYMAYRTPHJWUGJIOHNKW");
    msg.flags = 64919U;
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 3832747265U;
    tmp_msg_0.lat = 0.20268698337886215;
    tmp_msg_0.lon = 0.8290279351897245;
    tmp_msg_0.height_ell = 0.8251349393878353;
    tmp_msg_0.height_sea = 0.7753893891174582;
    tmp_msg_0.hacc = 0.7410645640447829;
    tmp_msg_0.vacc = 0.7732227605931195;
    tmp_msg_0.vel_n = 0.508876215887009;
    tmp_msg_0.vel_e = 0.6304019883258386;
    tmp_msg_0.vel_d = 0.04404904508426577;
    tmp_msg_0.speed = 0.22324851176917238;
    tmp_msg_0.gspeed = 0.581461949011861;
    tmp_msg_0.heading = 0.03712952407796111;
    tmp_msg_0.sacc = 0.01161117638892184;
    tmp_msg_0.cacc = 0.7718327114356904;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZGFPPRAPPABEKKQBCXCAJKSTKXNOWUUVAWLPTVSUYBLERDZKYYJTZSVRMDJNETJJDTNDCNFRNSDYQFQOXHPMZZXRMXPDIQHMNERPKHXBUCMDMZOSKLGICWJQGHIXEFOJOKSXYZMFVHRLBTWGTH");

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
    msg.setTimeStamp(0.20356068173198594);
    msg.setSource(8146U);
    msg.setSourceEntity(121U);
    msg.setDestination(31708U);
    msg.setDestinationEntity(219U);
    msg.state = 241U;
    msg.plan_id.assign("JRGSNOIDAUDEHDORFSSAPBDR");
    msg.plan_eta = -998851399;
    msg.plan_progress = 0.09865275333574586;
    msg.man_id.assign("FNUMQZMVDEPYPYCVKHWGZONIRTUSZGZPNWXHUCFQCHJNKKRBCRTQJOSKYSOEEKSDFDFEUVGCKATEPHFJYYMISJTZIKCILSXQPROIQBMCAXLEBOLPWFPVNQIDUOVCKJZXCTBMPORGGHWMAZYMWZSBXDURYMLJFHJRHYVJWEBUYTHBBFDUVUAQETFWXCNIVDLI");
    msg.man_type = 50031U;
    msg.man_eta = -1814393722;
    msg.last_outcome = 108U;

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
    msg.setTimeStamp(0.5507219290217192);
    msg.setSource(63865U);
    msg.setSourceEntity(134U);
    msg.setDestination(4155U);
    msg.setDestinationEntity(100U);
    msg.state = 7U;
    msg.plan_id.assign("QWPYVPSOEUWIAEMVVTGNUHSZSDHVJMFLDFQBFMKCBZQFOXUUUNGXHNVHVRZCOPIJIKBRGTJSTDSTEWYCGLVRPQYXPQNFOHNEMZUIOYAFAHOVCNICKEMECLLYRUOPIUCVY");
    msg.plan_eta = 1122771751;
    msg.plan_progress = 0.5122953639676378;
    msg.man_id.assign("RYWQTSHRBMEHAGGFQPZYXTNADVYKVALAJFXZIIQTEYUNXJSVULAISKSTMPLYWECCLBLGXBUCSWPJRYNBRDMVCU");
    msg.man_type = 37014U;
    msg.man_eta = -1497194328;
    msg.last_outcome = 69U;

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
    msg.setTimeStamp(0.010530188164439958);
    msg.setSource(29799U);
    msg.setSourceEntity(133U);
    msg.setDestination(26847U);
    msg.setDestinationEntity(159U);
    msg.state = 89U;
    msg.plan_id.assign("NWGSGAUQLBQJWMBSLTTNYOTEVFQSIEBNZKFAVOCTDSHSIHGKXSTLZDWBGXPKMKNLFCELRDFWDKZQKCBWVQRIYHMUVVPFUUYCFUZVOXPTOFJJRJFRVLUSYGSDRABUJPNXCLMCPLIZOCEZMVWYJBREIKXEUAZPXZJYUTEXKJRLTOAQGWXGYGRMKBDBSIPPWMMYAQG");
    msg.plan_eta = 1480050700;
    msg.plan_progress = 0.5444045077333293;
    msg.man_id.assign("OQWBYUOJNBRHENQPGVPGVEZTKZVPAESRKDSLGNJZDLPCGBGCJRXSOIJUTWIOXNRNQCEPBOXWLFXLOYSWPHXAZXBTBQZYBFNYAKBIFCPQKGUTFVFJYJUDHYVXBITUSFDUISSNVZDYRXWFWN");
    msg.man_type = 39751U;
    msg.man_eta = -268752480;
    msg.last_outcome = 13U;

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
    msg.setTimeStamp(0.6917301658861683);
    msg.setSource(25573U);
    msg.setSourceEntity(108U);
    msg.setDestination(57809U);
    msg.setDestinationEntity(97U);
    msg.name.assign("UFDQXYPKDJSAPAUFAMMOMQMVNHDVFUXIWALJWEATDDZMRYMTIVVMHGIWMDBNWRIBZCFBOJOXDUERXFYHDBGCGTKTETJUSSHMZPVFQCAVJBQOHQRTYNIUBRLSBJGEYKFEZKQYYTMLUIZNJZLZSSOEXOQWZ");
    msg.value.assign("AJKOWASSFRTMQLKBFJREDMIOZSACEAGRGJUTSYCJUJYBUKJDSVVGPDIKKTOSYYYWIQHHBONGBVBLOWMSHCBAAQXDXMLYOVPTQNRCILCPHZFZDXGMDCSXNF");
    msg.type = 1U;
    msg.access = 25U;

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
    msg.setTimeStamp(0.24840879131598803);
    msg.setSource(21499U);
    msg.setSourceEntity(191U);
    msg.setDestination(589U);
    msg.setDestinationEntity(122U);
    msg.name.assign("QEJZKMTXJCVIEQBAOWWYHGAXUSNASQYPZLIYBOZDFJIXWXYWPREGVPVDBFTFKKGFXCPAYRJCLDQMACMGISSFBTETKPSOLARVWGHKNAYVQJEFBIDOTGUSPKNU");
    msg.value.assign("SUHJCPELTBMRRFIUGXLABIFPXEJHXBJDKZXZVDYUFNWPEKHAGWMMNZXVDEAZDREUVHCNBCJOQNETHBOJVVSQDCQGWKNWQPLJCCQTGIMIWJIWKQNXCWOTYVVFZQOLZODLDFLXFMFTCUUEGKBJAUOHUFKPHSYLOSTSSESIIMLWVORLIAXMNYRRNTMRCGDGZIYZBSKPX");
    msg.type = 171U;
    msg.access = 193U;

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
    msg.setTimeStamp(0.9449006327330821);
    msg.setSource(2671U);
    msg.setSourceEntity(15U);
    msg.setDestination(22759U);
    msg.setDestinationEntity(172U);
    msg.name.assign("RIXCGIXYQQQLDWUHNESLOYBSHIYSGAQBTBMIGNVQMEXUCD");
    msg.value.assign("LIOWSWDMUYRQTTQOZZFHMZBAUMIYJDWELHQCSOMOYBGFOKVYNITHAFMVVNXGJJNINZTHEQCWTXPQRBDKHJIEZUEBIWXBDPPSAHZLBLVXQADUNJOKBZSBAFATQONNEKSWUVKFGLXGFMTWKUDEQC");
    msg.type = 93U;
    msg.access = 64U;

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
    msg.setTimeStamp(0.4296596101192197);
    msg.setSource(39924U);
    msg.setSourceEntity(250U);
    msg.setDestination(51189U);
    msg.setDestinationEntity(110U);
    msg.cmd = 76U;
    msg.op = 74U;
    msg.plan_id.assign("LHXQSEHADOJWKMTNRULCQCBXEHWONMDFSOKZPWASUNCYVZNXJPZWANYDIYOQLFVZYJPTMHHYIRNAOSTBZTRGDXTLTRGXGQNGWKVRUNLNVLYLEEEOBGHPJKUCHKVZSLILCBPBIEYBBSLWEFAYMTOYDUPXDDCRSVKMKWVXJECEABCZEROCJMRJFIIHXQDWAZRTQOJQPG");
    msg.params.assign("GJNLHRJMQIFJHQTBZPKRQMGLZEWEVBYQYBBOLFYMTGQAINUEDZLJVNTSTAESOEWANSKFYTSKKMVXMBNBYIOCOXZOYCGPWEIZVKGPHPVTVQUTQNGSHJOSTRKIGLMTDHNLKLBXQUFRRHUAMSCKCPOBWEPRCAMHTUAIXWNCZEPSUAKEVV");

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
    msg.setTimeStamp(0.7272531422614592);
    msg.setSource(33779U);
    msg.setSourceEntity(253U);
    msg.setDestination(44355U);
    msg.setDestinationEntity(115U);
    msg.cmd = 63U;
    msg.op = 96U;
    msg.plan_id.assign("PRKOJRIYHZCLMRTQEXNXTCLQYDLCAINNRGQTMUEWLRMHMBWQNVDUTPOVYAOZPBHCKYEBPFBZFMLUAZKVUZRQWJHRAAJZPMUMTQRUAWFIVUEGESUHQAGYFVPSSOIKCGFZSZ");
    msg.params.assign("UIZRNOKXPVCMNECSAJMSRVEGHQTXBKJRMISNXRWXPUTBGRLEXAUHQTNHJVLQTKJCZELZGUDOJFQEMSKFHTVLLDYKFTXAPBYDYXUVGAUQOFVISWVYAGFHWDBFPPXWWSCYCPDMSCMZGAFIZIMHMAOR");

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
    msg.setTimeStamp(0.7618097540063021);
    msg.setSource(30916U);
    msg.setSourceEntity(1U);
    msg.setDestination(24730U);
    msg.setDestinationEntity(225U);
    msg.cmd = 52U;
    msg.op = 137U;
    msg.plan_id.assign("JZFXXUMFPZYRPNDLWSFOBWRKARHQMFDKXYISRTSCGQGWJKAOQAHZQCFBQEROOXKMSSZDSWVXFPWCEDOUAIYERBEKHQJMVQEVWLNUPIRDUAELDXMYZMBKBAJLTNJJSKYMWAYKTEFSNYIMGCNETHTTVINWGXZCTHM");
    msg.params.assign("CNQRJJRIEFHISYLLBZXNZXCKQWPOXNLUCRZVWWJGUEWRILTXTMYNMSDBFKRMGVQAJRVRZUUDHBXFTXPTOBUIENQKCSZKGPKPIGWUIEYVHZCNTLZSUFRCFJKVTMFUARSOMAHNYGWYBPEYETULWZCYBZFXELGCCAGOMQPMKTFHBAYNQOSXUDGGDDXW");

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
    msg.setTimeStamp(0.5158707768746444);
    msg.setSource(54673U);
    msg.setSourceEntity(133U);
    msg.setDestination(6326U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.14173124488324484;
    msg.lon = 0.5643477190248954;
    msg.depth = 0.7824281348918952;
    msg.roll = 0.5778934803142098;
    msg.pitch = 0.5504478365777796;
    msg.yaw = 0.7766254062961683;
    msg.rcp_time = 0.764993146678691;
    msg.sid.assign("PWEQGPKTZZBMICLBRXVHNHPNRFCKARUNAASBIVWYSMHVCEYQWQKFMDNUCNMAPESQCBXZDWIIUSTIAVOOHKLSBIYJDTPBWMEFFUXLJNTMGADXZUMWZFHGRBQDVJPOCJTTRYQSEKNZNVFZYVJNUIQHPYOBIRZLXGMYEQZKVDLROLTYAQH");
    msg.s_type = 195U;

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
    msg.setTimeStamp(0.9943711889198324);
    msg.setSource(64687U);
    msg.setSourceEntity(217U);
    msg.setDestination(51832U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.858021316025376;
    msg.lon = 0.1271091671868878;
    msg.depth = 0.9012978180869257;
    msg.roll = 0.8311547282954934;
    msg.pitch = 0.6188950537141941;
    msg.yaw = 0.33686706813643863;
    msg.rcp_time = 0.4670499000902235;
    msg.sid.assign("GHZLWYPRUUBU");
    msg.s_type = 84U;

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
    msg.setTimeStamp(0.4460812950757742);
    msg.setSource(12375U);
    msg.setSourceEntity(124U);
    msg.setDestination(31286U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.203897730612416;
    msg.lon = 0.430550391817331;
    msg.depth = 0.329498865270054;
    msg.roll = 0.7241108432030774;
    msg.pitch = 0.8924559756373941;
    msg.yaw = 0.4089327146370868;
    msg.rcp_time = 0.670359191840907;
    msg.sid.assign("NKBCILBXGVVCCTNWEIGBJQQIKWOFYGANYRNPEBIWUQYMVQWLDEFOIWZMWEQYYZHQOYBZLGPFVQHWJHVPZJXBKCARDGKCITNRKXJRNLGXHHRSCPHMARSMFJGWFLODIULTPAJEKVANTRMVHOKUEALQPYSGSBOTHLPUOSGHWADDUUFPAKZSFFMXDUFMTRTUCYSCAIWZKRZARJMKEQTGJNZOJIXDLZSX");
    msg.s_type = 32U;

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
    msg.setTimeStamp(0.4914183312448104);
    msg.setSource(446U);
    msg.setSourceEntity(147U);
    msg.setDestination(18941U);
    msg.setDestinationEntity(37U);
    msg.id.assign("ROIOANKTLJKGVQVDERUCZJCUQEWHPHMLQTIPPOCEFUEBVDZTYLFVCDMGGRTWBZIDPAYKDUULXAMPZHLZSNAV");
    msg.sensor_class.assign("TYDQIUFTAXZTFRANWLWRIVDPEMPDECGZMHKJXGIPRZSNYPCOABCYBLXAOEABDLJWQKSOVBOSRMWSQNYUINGUFYXCVGUTTHHSKMHMKPJMBAXCKSBRZJTMIMCVGSWSQPIAIWTXMNULZRWAFVJEYWJEGKLEXLVFHQHKUFNNCVNJJPIDLQGDOHYTZUCUFPQTLRGVLWLDHOBIGCKYOPBZFUOWBQRKQFKISFDNRDDOBHMHOXQEYEPANCGRZZ");
    msg.lat = 0.6192979428879368;
    msg.lon = 0.6915793107539889;
    msg.alt = 0.6967849718840369;
    msg.heading = 0.2555290721788761;
    msg.data.assign("FYTREWQGUXHUJVPUFHEQOXWGNPSDNFSPQJNZUFLXHGKRPCRROEDGRWJHYDUZKBVMLKOKLCOVZCOKIGCJDXFVBSZGSBZDQFUEFNQKFMJXMMDCYIUDILVWYQMVOPAAZZDHPAJLAQXBAHEHZHMETNNBNYBWIOKOSVZIIRLASQFPNCHTCYLEEXVGMMBEWOYLVAEBPPBBSYRJPXTGVSIYWUGIZKMTTUATYSRTRTJRFTWWAJQ");

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
    msg.setTimeStamp(0.6559117901465445);
    msg.setSource(17491U);
    msg.setSourceEntity(98U);
    msg.setDestination(60404U);
    msg.setDestinationEntity(176U);
    msg.id.assign("XSWAKQVZBHOEZFUAKBNBTBCHKQXZHQ");
    msg.sensor_class.assign("HOIEUFSSWNYYFVSJOSAAXGDNMVWJBBTCQZGJSCKFUPSYCOTYDTLUXHLDRJJCHHXGIUMEPURPAYQHCIFUBNRACAGLRMPBAGOZICIOGVZEVUHKMESOXIUJSXXKQDNVXQBEM");
    msg.lat = 0.6439247725437183;
    msg.lon = 0.637760587307855;
    msg.alt = 0.4151010672333032;
    msg.heading = 0.23302882892110577;
    msg.data.assign("ZPONDPYAIWOWVNIVSUJIIHAQYRAXBXCSRWCZNKVEZRFESFJYBTZCANBOPVFJMARDNYTBCZPVNUWGCQETHPURZOAEAEBMBDKZDPKQKTLYSWQLNHSDGSODNXHXOGDGKDRDFPKWUTENEGISLSAHYSBFKVYRWFRPPAEJWEGOVHQTLFJ");

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
    msg.setTimeStamp(0.3181703650040715);
    msg.setSource(43913U);
    msg.setSourceEntity(144U);
    msg.setDestination(12355U);
    msg.setDestinationEntity(80U);
    msg.id.assign("SKYPHWDCOVTETVAIRKTNVGDSWJCFWCRPCGFWMBHLHMBAVFHQBHZJEKPFHL");
    msg.sensor_class.assign("CUOLPIOCKGMBINHMMTTAUJRVGMPJNHZMNNLPJACXPRAEEVSOLMFKHBXJVRTSBWGCTOXXFMLKWQAOOCQKZDTWDWWYZJQW");
    msg.lat = 0.6359594586521247;
    msg.lon = 0.8991539915410834;
    msg.alt = 0.7129212795180216;
    msg.heading = 0.1606129307591;
    msg.data.assign("XBAIDRMKNLLIUZTVJGAYFNXAYTMIWZVPBVUCLEGVGLBICOFSYUAQEXUDABFNGSQSKLHELUAOMKDCETPZAYWYKXRELWJRWCKXGTCPIZGOHMQYVHQRATCBSDFRUZFQPPFSOWEYBFPLXFZOTORIMKQMVCHTCRSHFGKLBJOEWLYFUNPXBDPJSSUOYJPOIMNEVRS");

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
    msg.setTimeStamp(0.7018854213578498);
    msg.setSource(3749U);
    msg.setSourceEntity(29U);
    msg.setDestination(10576U);
    msg.setDestinationEntity(154U);
    msg.id.assign("FDBESGGBIPCLTJGNTDMUCDSQTEOQVRGNNYVHPCQZAMFBVDINVJDKHEFQOJRCECVBSDKCLIWXFNHJKXIYKJQNBIOOAJYXXRDPMXWKPEIJXWZAKFNVYRHTVVRAPXPUAHZFLTWSCAPWZRMUDTCXAX");

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
    msg.setTimeStamp(0.04153928861047218);
    msg.setSource(56036U);
    msg.setSourceEntity(73U);
    msg.setDestination(33781U);
    msg.setDestinationEntity(62U);
    msg.id.assign("DXWDHFPOPATVVAWBBCOMPFKUTWZRIZYCFVEJBSSCPIQRYTRSEFBHCZQHGGFCMFSRXVNQNLCTIMXAWRKLNSXWGUTKVTVGLJOHW");

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
    msg.setTimeStamp(0.7808911963352505);
    msg.setSource(54361U);
    msg.setSourceEntity(146U);
    msg.setDestination(4761U);
    msg.setDestinationEntity(132U);
    msg.id.assign("LJWWQIQHFSWDQOPJWMWALIHVXNDPZSLGWJXMVPZDQKSOTEAUMUJEJBWNLYGFZODGRUHOKTMENLHDBCPFIVPTIY");

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
    msg.setTimeStamp(0.36786872789111313);
    msg.setSource(45093U);
    msg.setSourceEntity(58U);
    msg.setDestination(37267U);
    msg.setDestinationEntity(52U);
    msg.id.assign("JDSVBTWIXQUOOTTRZE");
    msg.feature_type = 63U;
    msg.rgb_red = 91U;
    msg.rgb_green = 127U;
    msg.rgb_blue = 22U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8480962271673353;
    tmp_msg_0.lon = 0.5646794487111597;
    tmp_msg_0.alt = 0.872992684928214;
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
    msg.setTimeStamp(0.3647869430689311);
    msg.setSource(17263U);
    msg.setSourceEntity(165U);
    msg.setDestination(34218U);
    msg.setDestinationEntity(69U);
    msg.id.assign("WPRDYFGNJMDTILGOHKZUWJYXZZVVHVMEPOMYMBGFMAJYCNLVMEPCFTSUOHDYUTPBXCVJYLOQBFJYMNIPIKAGRXBHKFLDKMTZCLNRKQCFKUKPLAHCEDXWALZYXVZAHZDLSJEHTBLPWNAOGBWQAQGTUCWUROXNTXDKRNJANMUKIRZIWFPGSOTNISFAYRLBJDEICEFBQXTDIRUIHZEWOUSSMSHVEASSJKVWVVSICFBYEQGJQQEOQ");
    msg.feature_type = 232U;
    msg.rgb_red = 114U;
    msg.rgb_green = 173U;
    msg.rgb_blue = 105U;

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
    msg.setTimeStamp(0.48837759485999754);
    msg.setSource(63635U);
    msg.setSourceEntity(83U);
    msg.setDestination(34927U);
    msg.setDestinationEntity(20U);
    msg.id.assign("TUSNMAMEWPICBQDGMOHULRPKBYTQNYMCYGUFOJELAWINGTXVXKAIHVVJZGZFWTKFCRZZNITDPWHHIKBLEAQCAAXCYWKEFIKOEDVLKVCBJXMIHKAZUQZUSGNGXNRYLORRYRXSNCTLZDEBFJBYDILJSFOJQAUPYGQQHJHQWSUWNIJYDFLNJSOROXTUMUYPLVACAUXHMF");
    msg.feature_type = 34U;
    msg.rgb_red = 161U;
    msg.rgb_green = 72U;
    msg.rgb_blue = 91U;

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
    msg.setTimeStamp(0.5544314477533234);
    msg.setSource(1648U);
    msg.setSourceEntity(200U);
    msg.setDestination(60800U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.6478462789665529;
    msg.lon = 0.8933097857031795;
    msg.alt = 0.35671611659952607;

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
    msg.setTimeStamp(0.5317559300296228);
    msg.setSource(24017U);
    msg.setSourceEntity(101U);
    msg.setDestination(23089U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.06916775695470234;
    msg.lon = 0.862940866756482;
    msg.alt = 0.15771561885831709;

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
    msg.setTimeStamp(0.09701538308650248);
    msg.setSource(3924U);
    msg.setSourceEntity(111U);
    msg.setDestination(3727U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.8696535946381605;
    msg.lon = 0.6919312717918136;
    msg.alt = 0.24149293689288553;

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
    msg.setTimeStamp(0.05710082224525881);
    msg.setSource(23202U);
    msg.setSourceEntity(236U);
    msg.setDestination(57926U);
    msg.setDestinationEntity(129U);
    msg.type = 85U;
    msg.id.assign("OWDJOWIACIQHMBKBDVEFZLWJMMDULJAWTJGJTYGOVZYSZYHMIPAUUYQVTQWBPTMY");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 62312U;
    tmp_msg_0.plan_size = 1804046912U;
    tmp_msg_0.change_time = 0.060379544278716835;
    tmp_msg_0.change_sid = 58357U;
    tmp_msg_0.change_sname.assign("JCMGNJKCSWUFQOQDQZGYYIEWTVFJFPTNHXVZYPCPNPVYEHEFFDJPOPTAKNRFZKAIXENQGGOQPBDTQUARIPXBHIVWPOJLMIDFDQHQXBFLJEGSTJOIJSRIZZGMROCCDYOSXL");
    const char tmp_tmp_msg_0_0[] = {-53, 78, -56, -127, 71, 74, -86, -72, -78, -125, -28, -16, 19, -84, 4, -118, 102, -116, 64, 71, -89, -17, 10, 23, -20, 73, -78, -119, -128, -124, 112, -81, 37, 116, -4, -78, -92, 97, -40, -45, 30, -70, 105, -8, -120, -96, 109, 92, -68, -64, 10, 16, -84, -74, -8, 23, -41, -61, -6, -70, -32, 114, 15, -5, -117, -59, 75, -105, -74, -77, -86, 34, 56, -96, 11, 28, -50, -76, -10, 16, 96, -46, -41, 117, 3, -128, 70, -15, 55, 91, 3, -113, -73, 1, 15, 106, -12, -127, -118, 124, 8, 34, -41, 23, -82, -12, 93, 104, -46, 11, 54, 106, -114, -9, 31, 97, 90, -75, 72, 87, -18, 67, 67, -44, -82, 6, 8, 55, -19, 97, -99, -65, -16, -29, -11, 81, 107, -120, 29, 75, 125, 54, -5, 46, -103, -26, -4, -66, -74, 87, -75, 1, 73, 92, -41, 113, -78, -23, 88, -62, 12, -103, -73, -85, 58, 89, -55, -103, 74, -49, 71, 102, -69, 11, -55, -24, 36, 80, -54, -86, -78, -54, 28, -29, -63, 12, 99, -106, -90, -118, -109, -80, 63, 76, -10, 6, -104, -4, -11, 114, -128, 75, -30, -2, 6};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.6530482603525146);
    msg.setSource(59697U);
    msg.setSourceEntity(172U);
    msg.setDestination(45692U);
    msg.setDestinationEntity(0U);
    msg.type = 70U;
    msg.id.assign("ASAIGCMYXUCYGJBB");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.8793365884834052;
    tmp_msg_0.speed = 0.15051177046803366;
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
    msg.setTimeStamp(0.7437537186879487);
    msg.setSource(47718U);
    msg.setSourceEntity(215U);
    msg.setDestination(45022U);
    msg.setDestinationEntity(219U);
    msg.type = 125U;
    msg.id.assign("SWPIHXNCDZTTCOGHKJYLBRTQFBKFDERJVWADSVNFOGCXLYNYIWIBSMPVULIEQJZFKZNJIEBICEAMUXCDTXQEPCVS");
    IMC::RestartSystem tmp_msg_0;
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
    msg.setTimeStamp(0.9045629118105339);
    msg.setSource(53992U);
    msg.setSourceEntity(229U);
    msg.setDestination(21041U);
    msg.setDestinationEntity(151U);
    msg.localname.assign("LBJYTETNGYHZIPWJVNXAQTHCACZPZKRVXDZITARHXIDQHVCSXRLLBAZVHBSTQTMSRDANCEUTKOAHSQRBREKVKWKZFBNTBVNAOIFTQJLAMIJMFHHKUEYDGFDDWSAGIWZJZUFJ");

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
    msg.setTimeStamp(0.26366705480174824);
    msg.setSource(24839U);
    msg.setSourceEntity(116U);
    msg.setDestination(17900U);
    msg.setDestinationEntity(154U);
    msg.localname.assign("KTUZPFVGREBXADVTYOQNTFXUKYVGHVJUAREXIAAJKPBPHKDUZWBVFCHQIYRXGYWFQLUIZNG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LCWIDHPVFTFMKGDQJMMHJTXBVAJFNQQOVOLADRADZXXBHIIOKPTBTFULSGJUDCPCDFYPSPAADQCNYHFDEHMUIKEBJZWCIVWVTSQLRXZKAGUZISUEGKEGNTWWNWNTOJOHKINVJYGGMOQERWEXHYYMXHKRUDXVBN");
    tmp_msg_0.sys_type = 102U;
    tmp_msg_0.owner = 17713U;
    tmp_msg_0.lat = 0.5272185032368579;
    tmp_msg_0.lon = 0.16670656971845355;
    tmp_msg_0.height = 0.9502235849738456;
    tmp_msg_0.services.assign("KHZSUKVFOVMEVNMLHABWTSRIRCITMRGPIAOFTYZOGWSZ");
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
    msg.setTimeStamp(0.7680699459795531);
    msg.setSource(48414U);
    msg.setSourceEntity(124U);
    msg.setDestination(57652U);
    msg.setDestinationEntity(153U);
    msg.localname.assign("TQSOZPIMYXKXELAZGDEROWDKZKGSNVIZUQIRYBIJUDUFCPGHQDLPUAVGCSILAVHDAFUATINNJSYLGUMPSICXCSFVNOTIMCWXJLTIYLCABUXLRTMKWCNVFTEPDVWVRRHYUNKMAEMJDRUHNFXBOHQWWACRNZQKEPACFGBRJSU");

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
    msg.setTimeStamp(0.2540432969768107);
    msg.setSource(2661U);
    msg.setSourceEntity(4U);
    msg.setDestination(40002U);
    msg.setDestinationEntity(183U);
    msg.timeline.assign("VMQZDTHTBQMJXLEAZRBWKDEKZJPQFONRBLCLUNIXHPHAUYOZUTKGVCZXCVISPRDIEQQCIVKEKGRHFYSOFGORJLYJLBOKUZVAAWDSTXJZTHCSRPPFXMRQHLGBXUNDVYDFVAYZGNMZAVRMAFARINWRWWEIUAFSIIPOVYDPGKOEWYKTMYVELLMCHXQYSPZWUKUHXFX");
    msg.predicate.assign("GSRUDLBHDIWWCKHMZWUXWLTTDQFSNOVXVWJRLCIMGOQBYCJVKRCLURIQQUUZDSCNDLNLQTPGUHPZYNMSTGXIOBDFNEARMJPRPLKBAPZAQFYUZVSQALBBNFIGTUZYZGJVIEOWYBQAHXJOOCMXIGYSEVVAENSEFCTSJNYR");
    msg.attributes.assign("KSJTAEMOXAANPRJWABXJOAYQEFSCDOFNIOZETWIHNVVKDSBFWXLBUWPCGRSROVLZMOULZOGMNGWCGUHYKLTXXJZRDUOQTVJFPDYWSCGNBUMRIKBEMMIZGWLTQUZOGBYFXRZHGRLCRLIQWKIGPRTYFPMPNBNPCD");

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
    msg.setTimeStamp(0.6915512878002453);
    msg.setSource(60672U);
    msg.setSourceEntity(158U);
    msg.setDestination(24791U);
    msg.setDestinationEntity(100U);
    msg.timeline.assign("BREGZSVRLXWPYTQOCDDFYKRJVGXVCPBMGPYHRPASWHZUWTVYLBZVIDKGHQTMNERJPZHXQTHYMXQXRYDBAIRWQAHUSSYLFXUWBLAUCBKNMVNIGFNWXFTNFUO");
    msg.predicate.assign("KGWQDUCKNIJXHJGPLTHARARYNFLRWULRBCGLIADTLNEYWQOPVVJESWARDLUSJSBUFQWOEZGBPFQKZBOMZWVSIZOHIMJCHXCOAAOPQFEVFFWSSELIT");
    msg.attributes.assign("SUVLVRPDYRXPSFTJRRAATUGPFCPTQLGBDPVIHRFJLOOMDTQCMJLBSGGXRBKUKGNXIXQWE");

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
    msg.setTimeStamp(0.6593496012980163);
    msg.setSource(61436U);
    msg.setSourceEntity(12U);
    msg.setDestination(54932U);
    msg.setDestinationEntity(115U);
    msg.timeline.assign("HXJIKFNNWTNOSQSYVTHLARFPGJORPQHYCLWRFPUDCQKSDZIGIZSPDBXGEEZXKZLVWTMRLNNCXYKDOIERHCWJXGDORYQMYBTJIPIKGYZQVWGTHGFAKOXQUQGMOIDEFPSQUUAMYWYJKAXHBJPJIZYUNVUWMAVULPGDPNWULOJWA");
    msg.predicate.assign("MCVEAOFJXPVASMXSJGLVNQYRUKNMAWPVZNTDNGDWAWUOICOYFQQUSJYEDSNGFDRGIOQXBTWYZPQIGJRRBVXOQLUPXBZPKHKENWNCSAEHGLILCVMQYOL");
    msg.attributes.assign("ERLKCXKXVHLIIMKJWDQETBRCSCOKXPAYXALFNOCJMNIBYERUWPK");

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
    msg.setTimeStamp(0.8293162415845785);
    msg.setSource(59948U);
    msg.setSourceEntity(154U);
    msg.setDestination(18039U);
    msg.setDestinationEntity(81U);
    msg.command = 35U;
    msg.goal_id.assign("XQACPBHXFAFLLGGVJKEBSKLVGZVDJVZFYVAYBTJZOHRMKEZFDLIIMDCBETPWAOITDECXCZJSHJMBBAKTSDROWTVLIUOHYTQWZGSDXTVKSRMGTXULJQGJCGURRFEFDUYRENTHKOPDNJSRMPQUMBSCXNIIWFFKACKOVNHZNPZIOCTSBMYOOYPFUUYCMXPWXNQQQPYGVBMYUQXLJSDWHNLQBRAGUKZEZCJNLWWKVYNOAPRPUAMG");
    msg.goal_xml.assign("NAHRSBTIJBAGLOCUIJLYFFVKRUAFWKEDBJKYETVUSVWHBCUZWFQIBUTYOLFZODJOFNQETVUPZMGGXEDNLQHMCZHGGRNTXYFIVZPCJRSSCBWYKCEZQMDIHIXSRATWOGLPGTNZUOXSKPEMANKJMQSXXDZSAVENMCPLQPVINQDVYMYLTWJAVWRXRHYFHBWIUXRBKUUMPBGZDSHKPZI");

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
    msg.setTimeStamp(0.18050765879936292);
    msg.setSource(62259U);
    msg.setSourceEntity(88U);
    msg.setDestination(64392U);
    msg.setDestinationEntity(189U);
    msg.command = 114U;
    msg.goal_id.assign("JEAMSALZVBXSUZTDBIJAWQCSIKNNDEOKPOYPGCUJXFYPECQINJRVRBQVJWOTKZVMXYNBFZYBKQKTNSCRWVKZVLFCPEUDROWMPDHEKWGRUXEWQHUNFBBSCYDMQQKEEFLMAIHTNUY");
    msg.goal_xml.assign("FKXNKSQHZWUTIPQLFADQHIHGHUXLRYYOPVVNDORBCJWBXRZFEJKOZFNRIARCQWFIMYLLITJJABQSUCEHBSDNROBGRSCAIZCARTNMZPAJYAFTMOGKJDLCPYOGZXGAEEYTZSSHVUUMJKYQFVSDFJDHQFSXVNCCDCBUBBIWTGYEKOYLMBQTAOHIU");

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
    msg.setTimeStamp(0.6401187436458431);
    msg.setSource(59390U);
    msg.setSourceEntity(228U);
    msg.setDestination(31546U);
    msg.setDestinationEntity(33U);
    msg.command = 206U;
    msg.goal_id.assign("SFCHRVOYITNZPUJXMDJCGWPYQDMSRWSEFVUTXCWFSFLDZEFMIODBYMQOWXXYWBUYPVXXCCUGOECAQRQXQTQTKOZTGVMKZNLKVJWLFLGSJKAEEIOBLIRAZEFNSHUDJFNHWXCJNBBLUZIRPTZHTGHGJWROPSGHHWGYFSLKVSPPLNUWURQN");
    msg.goal_xml.assign("YUXJXUNHRKSBWQGSKBIYHOPELCZNNMIJHXBFVCDBAPMZUWGQZUFRXQYKLPMKMBPPOGJYMWZYXJBOOQCMWQRAETAHMEGSEGRWYDNSYSZQSNAIJFTUSZNEQLKCBYQDPNFQRWEIKJADKZHNIJUCUSKOZOPCADOHTGFVLFXANOJJKMTVTUMJIXHCRCGWIXPHXIWLBUFDGVVIWPAFYXRBELFZVDAGKHEVTBAEOCLWSTVDH");

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
    msg.setTimeStamp(0.07658074268921566);
    msg.setSource(33523U);
    msg.setSourceEntity(88U);
    msg.setDestination(13585U);
    msg.setDestinationEntity(52U);
    msg.id = 230U;
    msg.width = 22568U;
    msg.height = 6987U;
    msg.widthstep = 9619U;
    msg.channels = 49U;
    msg.depth = 146U;
    msg.finaldata = 41U;
    const char tmp_msg_0[] = {109, 84, -30, 96, 108, -46, 98, 111, -97, -55, 35, -39, -9, -113, 81, 79, -104, 18, 34, 10, 31, -107, 45, -124, 61, 0, -122, -28, -9, 112, -47, 98, -43, -71, -55, -6, 39, 72, -117, -58, -83, -29, -98, -67, -32, 62, 110, 45, 125, -105, -99, -64, -3, -63, 102, 88, 122, -94, 92, -25, -25, -60, 49, -47, -106, 92, 18, 9, 74, -57, -84, 93, 2, 31, 113, -118, -3, 34, 27, 105, -69, -74, -106, 121, -60, 17, -45, 37, -124, -44, -97, -114, 117, -58, -63, 23, -75, -112, -61, 80, 43, -106, -87, -2, -13, 23, 43, -103, 92, 50, 57, 65, -41, -82, -113, -74, 34, 17, -72, -3, -12, -33, 118, 24, -68, 37, 108, -51, -24, 47, -23, -57, -116, -65, -1, 88, -123, -69, -35, -125, 27, 43, 80, 36, -18, 62, 103, 107, 16, -118, -127, -125, -60, -121, 113, 124, 33, 31, 34, 103, -11, -75, 94, -121, -71, 22, 89, 111, 79, -119, 83, -48, 37, -112, -33, -62, -62, -95};
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
    msg.setTimeStamp(0.34476281085147953);
    msg.setSource(37016U);
    msg.setSourceEntity(214U);
    msg.setDestination(6529U);
    msg.setDestinationEntity(146U);
    msg.id = 91U;
    msg.width = 1095U;
    msg.height = 56275U;
    msg.widthstep = 53196U;
    msg.channels = 77U;
    msg.depth = 19U;
    msg.finaldata = 31U;
    const char tmp_msg_0[] = {41, -60, -43, 2, -45, -24, 76, 12, -42, -63, -20, -103, -52, 99, 36, -85, 106, 84, -81, -69, -63, -29, 44, 69, -46, -29, -48, -22, -127, -65, -39, -88, -112, 80, -5, -11, -27, -71, 9, 62, 1, 59, 115, -96, -4, 106, 77, 25, 115, 56, -96, 67, -86, -107, -33, -57, -71, -115, -6, 119, -56, -39, 18, 53, -19, 7, 75, -60, 48, 50, -33, -126, -105, -58, 62, 102, -35, -2, 93, -59, 20, 95, 114, 33, -24, -17, -84, 43, -38, 35, 88, 93, -27, -110, -11, 56, 19, -100, -68, 61};
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
    msg.setTimeStamp(0.44741314124840204);
    msg.setSource(51010U);
    msg.setSourceEntity(102U);
    msg.setDestination(36006U);
    msg.setDestinationEntity(18U);
    msg.id = 43U;
    msg.width = 1838U;
    msg.height = 39359U;
    msg.widthstep = 31976U;
    msg.channels = 221U;
    msg.depth = 183U;
    msg.finaldata = 56U;
    const char tmp_msg_0[] = {113, -121, 124, -82, 117, 9, 66, -56, -78, -26, -66, -102, -99, -107, -119, 103, -89, 117, -124, 24, -101, 52, -86, -73, 10, 76, -95, 16, -2, -61, -63, -93, -46, 75, 69, 112, -103, 86, -3, 3, 29, -69, 34, 41, -29, 78, 11, 44, 46, -13, -13, -64, 95, 76, 58, -8, 3, 85, 95};
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
    msg.setTimeStamp(0.10650809618905066);
    msg.setSource(29971U);
    msg.setSourceEntity(130U);
    msg.setDestination(53665U);
    msg.setDestinationEntity(178U);
    msg.width = 8428U;
    msg.height = 58369U;
    msg.channels = 233U;
    msg.depth = 118U;
    const char tmp_msg_0[] = {83, 55, -102, -48, 95, 33, -59, -32, -94, 27, 69, 79, -116, 103, -107, 13, -88, 40, 108, -44, 60, 54, 24, 68, -100, -91, -48, -98, -96, -87, 58, 89, 46, -38, -5, -56, -127, -41, -20, -106, 93, -74, -127, 97, -89, -84, -27, 103, 100, 59, 7, -108, 21, -19, -55, 72, 14, -77, -39, -59, 126, -114, 81, -71, 24, -50, -19, -3, 90, 45, -28, 98, 113, 112, 97, 109, -32, 9, 110, 62, -8, 13, 1, 102, 77, 85, 70, 54, 21, -39, 40, -109, 74, -31, 24, 38, 19, -88, -51, 35, -123, -63, -50, -84, -112, 61, -16, -69, -113, -6, -70, -28, -23, 100, 11, 60, 99, -114, -43, -18, -4, 102, 124, 19, -66, 37, -39, -45, -114, -119, 93, 57, -53, 46, 12, 18, 13, -122, 108, 36, -55, 73, -116, 30, -52, -98, -40, 60, 115, -87, -65, 42, -80, 107, 18, 109, -36, 82, 38, 48, -39, 56, 86, 26, -90, -18, 97, 44, -109, -16, -32, -97, -68, 72, -8, -18, 101, -53, 48, -48, -60, 70, -100, 89, -100, 40, -72, 25, 58, 60, 3, 7, 112, -10, 80, 61};
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
    msg.setTimeStamp(0.1694854880529545);
    msg.setSource(32786U);
    msg.setSourceEntity(30U);
    msg.setDestination(2409U);
    msg.setDestinationEntity(54U);
    msg.width = 4213U;
    msg.height = 46120U;
    msg.channels = 177U;
    msg.depth = 42U;
    const char tmp_msg_0[] = {23, 72, 8, 61, 17, 103, -125, -2, -21, -120, 73, -29, -2, -34, -86, -38, -65, 1, -102, 11, 73, -31, -87, -75, -106, -71, -70, 26, -78, -111, -41, 74, -3, 56, -29, -1, 34, -106, -38, -59, -99, 56, -52, 40, -125, 100, -27, 23, 124, 92, 105, 51, 87, 126, 35, 13, 9, -71, -113, -127, -54, -55, -41, -32, 80, 90, 24, -55, -97, -17, 42, 48, -29, 42, -93, 71, -56, -20, -36, 55, -11, -83, -32, 48, 113, 25, 72, -9, 3, -76, 121, -10, 5, -103, 88, -123, 73, -70, 57, -83, -21, 51, 45, 116, 86, 63, 72, -19, -120, 99, 38, -122, 90, 35, -47, 32, -58, -93, 33, 108, -102, -92, -99, -67, -121, -45, 19, -47, -63, 103, -86, -20, -118, 4, 109, 31, -69, 25, -4, -114, -87, 26, -9, 117, 107, -113, -89, -24, -12, -39, -71, -23, 42, 49, -10, -108, -72, 90, -90, -64, -16, -4, -75, -55, -9, -13, 55, -20, -91, 118, 58, -105, 117, -88, -105, -81, 45, 91, -91, -96, -76};
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
    msg.setTimeStamp(0.6059365849414329);
    msg.setSource(62194U);
    msg.setSourceEntity(91U);
    msg.setDestination(64830U);
    msg.setDestinationEntity(107U);
    msg.width = 51057U;
    msg.height = 14746U;
    msg.channels = 226U;
    msg.depth = 81U;
    const char tmp_msg_0[] = {120, 64, 86, -62, -115, 112, -7, 42, 52, -110, -23, -22, 54, -85, 109, -5, -48, 68, -95, 66, -62, 28, -37, -12, 73, -65, 44, 49, -46, -117, 86, 118, -55, -20, -79, 121, 2, 14, -109, -102, 27, 74, 29, 122, -42, -42, 101, -8, -51, 32, 15, 101, -24, 25, 53, 50, -116, -37, 112, -91, -101, -15, -81, 37, -34, -101, 120, -102, -9, 53, 89, 63, -107, -80, 1, -22, -75, 107, -128, 119, 8};
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
    msg.setTimeStamp(0.6997155670632517);
    msg.setSource(16773U);
    msg.setSourceEntity(91U);
    msg.setDestination(10334U);
    msg.setDestinationEntity(113U);
    msg.frameid = 117U;
    const char tmp_msg_0[] = {-97, 84, 34, 9, -62, 14, -71, -110, -124, -8, -27, -55, 97, 90, 91, 117, -89, -4, 105, -30, -64, 24, -53, 59, -34, -71, -79, 32, -57, 74, 116, -3, 3, -60, 32, 72, 47, 18, -40, -30, -50, 121, -119, -3, -39, 24, 1, -73, 50, -70, -20, -34, -4, 92, 58, -45, -4, 108, -76, 18, -30, 106, -44, 82, 32, 118, -50, 69, -10, -24, 90, -116, -18, 4, -61, -17, -50, 56, -113, 1, -40, 92, 48, -30, -100, 22, 26, -68, 15, 58, -93, 81, 81, -51, 110, 61, 67, -13, 91, -43, 118, -19, -12, -121, 97, 26, 50, 96, -46, 58, -2, -3, -80, -67, -120, 38, -127, -20, 59, 77, -25, -77, 0, -58, -79, 46, 45, 3, 58, 105, -46, -27, -56, -95, 9, 20, -55, 52, 74, -55, 97, -127};
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
    msg.setTimeStamp(0.5973010469824002);
    msg.setSource(20034U);
    msg.setSourceEntity(68U);
    msg.setDestination(63051U);
    msg.setDestinationEntity(183U);
    msg.frameid = 86U;
    const char tmp_msg_0[] = {-30, -22, 57, 119, -102, 62, -64, -36, -104, 89, 83, 24, -35, -51, -127, 38, 60, 12, -49, -21, -7, -99, -97, -105, 23, -39, 124, 37, -41, -94, 74, -73, 16, -127, -55, 86, -124, 84, 36, 49, -1, 11, -96, -120, 85, 18, -22, -14, 99, -15, -17, 78, -108, -45, 20, -117, 109, 53, 3, -23, -34, -108, 106, 65, -107, -77, 8, -106, -96, -81, 30, -123, 21, -81, -127, 80, -39, -12, 1, -18, -74, -104, 76, -116, -54, 93, 65, 40, 121, -108, 12, -97, -12, -67, 59, -20, 29, 22, 102, -90, -40, 71, -49, -2, 60, -105, -48, -114, -55, 76, 95, -93, -10, -13, -45, -83, 67, -126, -119, 115, -56, -42, -5, 60, -7, -20, -87, 120, -75, 20, -55, 45, 101, -41, 93, 82, 114, -77, -67, 95, -63, -53, 66, 32, 107, 46, -50, 104, 73, 67, -88, -126, 17, -4, -81, 76, -118, 40, -118, -12, -23, 95, 116, 16, -20, 115, 46, 52, 91, -32, 95, 50, 7, -11, 69, -86, 93, 4, -36, -83, 59, 73, 83, 84, -126, -110, -93, -15, 104, -103, -29, 39, -110, -75, 16, 43, -120, -6, -1, -68, 38, 96, 57, -7, -85, 11, -70, -89, -90, -59, -15, 53, -45, -46, 47, -31, 116, 45, 16, -109, -98, -114, 121, 71, 109, -13, 109, -12, -32, 26, 126, -34};
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
    msg.setTimeStamp(0.9544693054002419);
    msg.setSource(62450U);
    msg.setSourceEntity(216U);
    msg.setDestination(8103U);
    msg.setDestinationEntity(8U);
    msg.frameid = 18U;
    const char tmp_msg_0[] = {-45, 126, -81, 35, 110, 126, 41, 93, 91, 124, 32, 20, 121, -98, 56, 32, 56, 8, -61, -117, -26, 76, -19, -75, -88, -127, -128, 22, 33, 119, 45, 32, -15, -94, -90, -89, -34, -94, -97, 6, 8, -100, 36, -70, -69, -118, -27, -39, -82, -10, 16, 66, 18, 84, 32, 49, -1, 97, -65, 86, -32, -40, -11, 50, 35, -124, 110, 66, -57, 105, -59, 118, 34, 114, 16, 91, 40, 34, -93, -3, -54, 57, 31, -30, -105, -116, 79, 54, 8, 69, -52, 120, 112, -19, -19, -128, -47, 46, -90, 53, 56, 53, 109, -11, -22, 26, 117, 97, 69, -88, -96, -21, 49, 79, -120, 69, 26, 70, 5, 91, -88, 61, -40, 75, -97, -67, -118, -48, -92, -15, -35, 49, -75, -2, -17, -31, -92, 101, 111, -103, 29, -37, -60, 90, -2, -83, -16, -8, -49, 27, -83, 110, 76, -76, -3, 15, 10, -51, 9, -38, 68, -12, -86, 30, -61, 4, -114, 40, 90, -19, 76, 60, -94, -20, 21, 115, -114, -100, -69, -107, 105, -25, -18, 113, 44, -16, 125, 97, -83, -99, 93, 30, -47, 85, -19};
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
    msg.setTimeStamp(0.29721622080037435);
    msg.setSource(7564U);
    msg.setSourceEntity(113U);
    msg.setDestination(5068U);
    msg.setDestinationEntity(21U);
    msg.fps = 218U;
    msg.quality = 78U;
    msg.reps = 83U;
    msg.tsize = 177U;

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
    msg.setTimeStamp(0.6492384751312549);
    msg.setSource(35815U);
    msg.setSourceEntity(73U);
    msg.setDestination(44147U);
    msg.setDestinationEntity(126U);
    msg.fps = 183U;
    msg.quality = 228U;
    msg.reps = 163U;
    msg.tsize = 67U;

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
    msg.setTimeStamp(0.7667338964293776);
    msg.setSource(50665U);
    msg.setSourceEntity(69U);
    msg.setDestination(5126U);
    msg.setDestinationEntity(30U);
    msg.fps = 2U;
    msg.quality = 202U;
    msg.reps = 109U;
    msg.tsize = 192U;

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
    msg.setTimeStamp(0.8369975038094886);
    msg.setSource(2316U);
    msg.setSourceEntity(81U);
    msg.setDestination(15674U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.8524799066055229;
    msg.lon = 0.918282462888458;
    msg.depth = 43U;
    msg.speed = 0.6458643532119631;
    msg.psi = 0.5669106343828064;

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
    msg.setTimeStamp(0.0048861458652542655);
    msg.setSource(19059U);
    msg.setSourceEntity(119U);
    msg.setDestination(50919U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.24322562143419346;
    msg.lon = 0.687886811001898;
    msg.depth = 232U;
    msg.speed = 0.21774043519103503;
    msg.psi = 0.9093054356679131;

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
    msg.setTimeStamp(0.6720658428932113);
    msg.setSource(42272U);
    msg.setSourceEntity(69U);
    msg.setDestination(56669U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.46441309454726376;
    msg.lon = 0.6354578430244675;
    msg.depth = 130U;
    msg.speed = 0.5891973996608105;
    msg.psi = 0.44341997854713033;

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
    msg.setTimeStamp(0.39594211047554706);
    msg.setSource(11126U);
    msg.setSourceEntity(207U);
    msg.setDestination(47041U);
    msg.setDestinationEntity(148U);
    msg.label.assign("SSAWAYENNE");
    msg.lat = 0.7866217539325224;
    msg.lon = 0.8392800239412472;
    msg.z = 0.05871253189670089;
    msg.z_units = 107U;
    msg.cog = 0.3178052649114367;
    msg.sog = 0.4996976084493222;

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
    msg.setTimeStamp(0.492954002857691);
    msg.setSource(48026U);
    msg.setSourceEntity(116U);
    msg.setDestination(3866U);
    msg.setDestinationEntity(66U);
    msg.label.assign("ZYPZWGMBAFMXIVLCDIWROCAYZUTHVKZXCSEHHKPIYSMNXSGQCDDTOTKGZQWXMNPULVJCYTSSQYZSXP");
    msg.lat = 0.34042023031847135;
    msg.lon = 0.9145491826591019;
    msg.z = 0.9378849606417424;
    msg.z_units = 131U;
    msg.cog = 0.8522332348550037;
    msg.sog = 0.7462208360045788;

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
    msg.setTimeStamp(0.27903866626247187);
    msg.setSource(28291U);
    msg.setSourceEntity(116U);
    msg.setDestination(209U);
    msg.setDestinationEntity(126U);
    msg.label.assign("FPDLBEADVELDE");
    msg.lat = 0.5701702848178853;
    msg.lon = 0.5784771411615759;
    msg.z = 0.9729408844341031;
    msg.z_units = 130U;
    msg.cog = 0.02367907956620363;
    msg.sog = 0.1421763125276846;

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
    msg.setTimeStamp(0.38569605597593626);
    msg.setSource(50565U);
    msg.setSourceEntity(97U);
    msg.setDestination(26081U);
    msg.setDestinationEntity(237U);
    msg.name.assign("LENQDFRLSTOIKSTZBUKPOSUIXQCJWEOPHL");
    msg.value.assign("FDJBKNUQHIWAGLJMEUWAPJPFXHQFACWLQUIOQOHCJTIIJYKCMRYSBABJKEDANMTAVPSFZNKVRWOEKXGTXURGMNNBZMGDTCSPRGXBDCDNXRVFYSZQZNWVXMNHBDQJWNMZDQCZAIDTMGEYUZYOCZORGBFVLYQSIYNVBKTHHUFIFWXUIWOTMZPPTLKSIARCSALQMKYWSEHLBXJYLEKTEXSGHBKHTPLCOODPGWLJQVYEJIOCERVVG");

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
    msg.setTimeStamp(0.25711131324749914);
    msg.setSource(34329U);
    msg.setSourceEntity(174U);
    msg.setDestination(12012U);
    msg.setDestinationEntity(201U);
    msg.name.assign("FBNGXUZRDURQMEDIQJWUQCVSMRRTVYYXXBCYMCYHVGKRPTXYBEEXGBJWJBCERDPGJBQQFMCWJDDHYYALZGTOSFCPHATCVZT");
    msg.value.assign("VHJELXLNCZHFOLYHOULUPZMISNLEJGVPDXKQVTSDINVKNIEQOCEJGXZYKYRWJEGVMWOCWQRPRZPXEYJYZZBUGMBLOXINQGAYLHJYNHTMJGQCTOUCFCBGMOEKNSVFKNEBIGHNYDCHWWVRCBNQRXTVZFUBPSWFPEQSTSSOTRPOTDVWMBFKDHPBPDDAFZAZIYPTIWRUOYIKMADMRQBXXLVAFSJAIKGLQQXBRUAZD");

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
    msg.setTimeStamp(0.29331455865642164);
    msg.setSource(1621U);
    msg.setSourceEntity(92U);
    msg.setDestination(32478U);
    msg.setDestinationEntity(96U);
    msg.name.assign("WEVXPUVUZFXXCLBWGCPYIXJYLAKFNSEWLFSGQPXOAEKCTRPCZCAJRJZMSDJVIFMHIZNNTXTOGXNROECBHNOUMLGGVNBJDONRBYYVECQPLUHLMFUASHMFSDLJUZWZZPGRVAZHRTXAUHVIYPBKTSDQTNYSWLMTQAWWYKOHBFSQQOKRCBPESYIINKDMXVEVQZHJIKIMQTUBDRBTAWADOALJMMIFGCWYGHLCBJDGERYFFQKHDOXOWREEJGPSPQ");
    msg.value.assign("DSGQZSCBJMLIBLKQNZTCIEGLSYRUNSOREDHKKCITHFRZUFWXASRFDBTPHFQOBLNJRWPRCOZUYCSIMLCAVUWYAAFWDUOQYBRQXEHVGETUENBMNKHXGEVEGIQMXRWULDSCYPRJGLGGJPBKFTMZWFNVQANPA");

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
    msg.setTimeStamp(0.0010371267405832052);
    msg.setSource(49055U);
    msg.setSourceEntity(197U);
    msg.setDestination(59191U);
    msg.setDestinationEntity(235U);
    msg.name.assign("BXCRMFGPSRRGTWFXFTBGQCTPCFLABSZUNFHHWTUBRMYSIHJACTSVECDSVOVXBAIML");

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
    msg.setTimeStamp(0.7324101314581187);
    msg.setSource(50558U);
    msg.setSourceEntity(31U);
    msg.setDestination(41153U);
    msg.setDestinationEntity(76U);
    msg.name.assign("EQEWADEYOGSIDQTFWLYOJZJWCIQIPNPCNMKQHCIWASGALPPMYUKNLDSJXIMTHGLYSXIGVFIEJANSKAQXFUVSAOIQFCZXQUFGCTOSXIKTDCHOKBBRFKDMRLLNFHZPNYEVYLRYBVZRNFBBZWWHJUARMBQVPCMTOMGEOVEAZDVJKWJRYNGRCBUGZCLFWURJVUSQTJRSUDDBHKVAMHNFXKQUI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XYHPJGAIMXIKOWVYASWUYMRVQOWETFUDCQXKIREAAZGSZLELDJNSCXGBRRGPEDKOTXVOPSNSQGBHZRDPFDZTHTUZBEYAVVLXDUKTPOKIXIECZZNLYPWIBUCGDNUVSRZHMJCQKKVM");
    tmp_msg_0.value.assign("LLJQHJIFOPMATLCAIDBVVRGHIGRSAUPMTVFQWGINNDHEMXSKNFRFVDJMPCJCYTCSICPZXLZHRNEYNUZOHGCKXBZQOVSXSMKVDWJEPTRBRV");
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
    msg.setTimeStamp(0.42105937188491405);
    msg.setSource(26243U);
    msg.setSourceEntity(95U);
    msg.setDestination(6867U);
    msg.setDestinationEntity(176U);
    msg.name.assign("NMDKYKTLROSZUHVREWHINRNFHWLRDWXQZTZKPVWSPAEAFGUEXNQCLYCVWRUYXPXJAFGFZBUVCAMZTOSMKMYENPRVJCWALLPOOEYEHRAHGVHPTKFVTFKUMHFTCJE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LTQVUEZNYCICBIWWJJVYOPKXIMBFOCXQRAYJYKXPSFMKGKHKGAPJSQOKHBRTYANBEWDAIBQVEQOJWMMSKPINJUFTVUMXNQEWLHJPDHUFIJNAXNSLTPCST");
    tmp_msg_0.value.assign("BTTDUNOULSXIKTXDCWFLAXMMRVGRFGKSNHIFZHJSYOQBETYGHGDIXPMKJCVKFZDAIWFGMPOURTFJMUNZXRNFLSIDUAUXYZDPZTGAYEVHIBKTAYSLDRUPQXIYREAOVNZ");
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
    msg.setTimeStamp(0.39618720472101443);
    msg.setSource(52443U);
    msg.setSourceEntity(192U);
    msg.setDestination(14734U);
    msg.setDestinationEntity(126U);
    msg.name.assign("JPHWTWKJBRXJLTAMAUBHTIIOOEKQZSRFIDZYOWYNAWMLBNTWEODWGGGJKXVLYKWHNHAGZTBKXYTUSRJBPWPYZCFZNLGVCPFFOSIIESFOLCOXUSCHEMGVNUFDXFBZUGOOZCRJVPZWJBQIDILRPAQQPQLNQMHHGDUIVNQFSKGMCZJRXKJLAPVSVUXBEY");
    msg.visibility.assign("VJZKBITQUGYSZD");
    msg.scope.assign("PFRENZBXQUQWYU");

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
    msg.setTimeStamp(0.6608664144380274);
    msg.setSource(47010U);
    msg.setSourceEntity(19U);
    msg.setDestination(15447U);
    msg.setDestinationEntity(165U);
    msg.name.assign("IBUQROYEBJCWSLEDWJITNDARAZVMRIBWOVPDNCCVEUQGSRAWTPUGBRXDIXFFLIUEPNGCYLKOXKYPNJAKZFQWTCCMZJKCXFQOXOEGJPQMUVSHXGFZLIDZGEUJYMZFZVMWT");
    msg.visibility.assign("PUUTIUONMXCHS");
    msg.scope.assign("WCXZKLKPRMYCDOMDXEPNYVVATYSGLYKBEGGATLIVJUOMSTEBDNLPHYQNHQMOOIDIIKQXHAPFCWSGJFZABEOUFXYMUFQXJKXMODWLEUPYYPDWZKBSRPQQHDVETOFGIQNPUSZSSRCRFIARNIBWJCCRVJHRSZUTZNHVLHUFJFTOWMPMK");

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
    msg.setTimeStamp(0.403920693389906);
    msg.setSource(12912U);
    msg.setSourceEntity(30U);
    msg.setDestination(10267U);
    msg.setDestinationEntity(65U);
    msg.name.assign("KUEBVSRPPOGRQDSSCUPYIYQMELLIIFJBYEDIPJAYOLOMUXIBGVETDYKNRZGBPKAVXXAYNBFWVUXEIUSDCVAFAOWMPHRHMSCFTHTCJOBWJGFLYCCUWHGWRNQQDHVGRZIVYIJZVEDLPQFZZWXJKYXANRFUFHZBXRAGHSMMZEXKJJAQUQAQPMTNMZHKKBIPCGOTVMWNDXOCJRLNWZEUOP");
    msg.visibility.assign("YICCMMWVXZAPPIVALJTJTMDGWTTONLRTFJYPAVDHNUZRSWQATWKRYSIILXWVBMGPZQBHXADOMFFMJICBEKANUYGCBDFHBKEWPKONLBNORDTWDSTFJPUAQV");
    msg.scope.assign("RNVBWNCZQIACXCEGKKWWOSLDGEGPGNSOQZHEIPXDVUMIMCZTPUHUFLVSQIATWJLCPDYFJKKX");

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
    msg.setTimeStamp(0.3097611971885629);
    msg.setSource(34198U);
    msg.setSourceEntity(215U);
    msg.setDestination(35792U);
    msg.setDestinationEntity(250U);
    msg.name.assign("EFYKOARBRFWTJFQQREXOKIKXQAMNYQXBEQMDKLWJCGYEJFMWLTYCECLFQEYFPYHKTSJSGWDZIVNXFGNOQTUMSZJWCGZZPIGRPTNJBDAVLOPRTM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HNZLWPVHCNNVGJUYCIQQFSREHTYJTBDJSIQHYOFRMWKOMULYAVSGZATSIVIURGIPDUBOUCKAEAMJLWFTWMPFGYUWTZNRHATVKELFEESMDSEXVHWCOGIYOEWIUJBBYHBZIBRXVTDOASCYKWXNIPKYGZARCPZVAWRNCNXKGPAPD");
    tmp_msg_0.value.assign("JGFVKBJEGQSNOHOVFIRWYPEUDCYBBKDQKTVFSWBAUAMFQWAOQRBFVQLYDVDZQRTSZHMSVARDNXLTROFUCJDAZRIBEOXPTNTSRWMYQGXVMNAWGHWYDNHGXTIGRVJRGUPWZMBCJLBNSLIAKQZJLGHDHCJPFCSPFJHPYMKZKDNEYPOOCXZQLCBRMPGAPEKELCIONNZ");
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
    msg.setTimeStamp(2.1945219867869348e-05);
    msg.setSource(9314U);
    msg.setSourceEntity(45U);
    msg.setDestination(35692U);
    msg.setDestinationEntity(81U);
    msg.name.assign("WODYLIPKNVQBZRKBVKZCKXFWJUGQFDYVNBVOSFYOJJHWEDCNHJHHEKHUDAMTADRPHSCREMTLEZPYUNQIEKQJFS");

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
    msg.setTimeStamp(0.26880089902957327);
    msg.setSource(19392U);
    msg.setSourceEntity(147U);
    msg.setDestination(20231U);
    msg.setDestinationEntity(67U);
    msg.name.assign("IIQVBCNNIFEUQBTUXFSHCDOLRKEVCLFEVWKQHZZYPSTPAQORFNQAAMUISQUZEUMOOMLUSWSTRZUJCGPRJTRAMSMHKCYNITZUVRQAAGXCHIVGPXVHCUYCIJPYKTUJHLFOYPZKDDTRFXYLJXBXZHGIMMPQABDXGFYNNRLLHTNQWWDVWARHXCLJPEXKIKWABGLJEXZASFWDTFS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KINQHBOZXEQMZABHXMYOJKHLUKYNDLJTHXKQBXABFTDMGXNMVIVJEAQCQUSUQTMCLCAMVZTGIUXJDPIEMIVSFICAMTSJOZKLRPGTDCNBGFFDBWRESXPDBURXCNRXKDTYSZZSFBPEUSKKSHEQOZWUEUVGNFYMIWAFJLUFAPWZYLRHPOLHKWPJVHYYGFTRLIOVPGLWWSTRWYAGXYROCDZOABVFDTSNKU");
    tmp_msg_0.value.assign("JUEWOMFYIKYXZSMFEPINIJBWXIFNGYFBDPDZQSXTRHHBBARIDULXLRJKXEREYLRMGTAWZFRCJVXEVDPLAHSVKZPKMXKNGVQJJPJQVM");
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
    msg.setTimeStamp(0.3834058104227984);
    msg.setSource(27968U);
    msg.setSourceEntity(141U);
    msg.setDestination(8688U);
    msg.setDestinationEntity(189U);
    msg.name.assign("ZSOADGRNNSPZKNGHOKJSAQUEDHWIVBLFTXBCRUHYYZWIXQQXXZZJEYTMDLCUOAKWO");

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
    msg.setTimeStamp(0.4309527960105506);
    msg.setSource(8687U);
    msg.setSourceEntity(133U);
    msg.setDestination(59170U);
    msg.setDestinationEntity(64U);
    msg.name.assign("MZVDRZJGBNHMLDKFOOKWCGSCEQXEHLVRBDNVZYAMFTQRZ");

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
    msg.setTimeStamp(0.15607075266111192);
    msg.setSource(46918U);
    msg.setSourceEntity(253U);
    msg.setDestination(30926U);
    msg.setDestinationEntity(65U);
    msg.name.assign("BEJMRKPOUDLOHLWGIYGJGCIIEDNJSLSPRJNXXWXHLOKAQQTGUTQPCWOATVQCSKWWEGCQNHXVZYFEIKITXQMCSVVOSAOAGEWXYJFSHVQRCDEWVAZRRXFCUAMSJUDGPBHTMLYOVXFPZMNPUUDALDPRLTBFXGYRGNAVMWVZEMBYQCDKYFIDKJDRZBYHLCVJFTSTYHENUUKGWZMOUBRIOFMWKLAZBKNJFNDI");

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
    msg.setTimeStamp(0.474253192634412);
    msg.setSource(46897U);
    msg.setSourceEntity(8U);
    msg.setDestination(56902U);
    msg.setDestinationEntity(91U);
    msg.timeout = 4153710337U;

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
    msg.setTimeStamp(0.552007391396493);
    msg.setSource(26547U);
    msg.setSourceEntity(124U);
    msg.setDestination(64481U);
    msg.setDestinationEntity(128U);
    msg.timeout = 717636041U;

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
    msg.setTimeStamp(0.6039653609253871);
    msg.setSource(18793U);
    msg.setSourceEntity(152U);
    msg.setDestination(35869U);
    msg.setDestinationEntity(47U);
    msg.timeout = 2558666333U;

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
    msg.setTimeStamp(0.2676186315339816);
    msg.setSource(19079U);
    msg.setSourceEntity(31U);
    msg.setDestination(19673U);
    msg.setDestinationEntity(25U);
    msg.sessid = 1135940945U;

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
    msg.setTimeStamp(0.8606064127861878);
    msg.setSource(24502U);
    msg.setSourceEntity(86U);
    msg.setDestination(39952U);
    msg.setDestinationEntity(17U);
    msg.sessid = 483899499U;

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
    msg.setTimeStamp(0.6121388273471918);
    msg.setSource(45521U);
    msg.setSourceEntity(172U);
    msg.setDestination(59099U);
    msg.setDestinationEntity(136U);
    msg.sessid = 4202212522U;

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
    msg.setTimeStamp(0.4268121521378193);
    msg.setSource(45789U);
    msg.setSourceEntity(216U);
    msg.setDestination(40482U);
    msg.setDestinationEntity(83U);
    msg.sessid = 3378557906U;
    msg.messages.assign("TBURVGBNIZMAFAUVXZHAUEINC");

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
    msg.setTimeStamp(0.24931521439984783);
    msg.setSource(46151U);
    msg.setSourceEntity(248U);
    msg.setDestination(47109U);
    msg.setDestinationEntity(68U);
    msg.sessid = 3792883233U;
    msg.messages.assign("KSNWYUMWMCGDORLAIMVAQANQURYDWXBFFYWIOVLEDISPCBZCQ");

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
    msg.setTimeStamp(0.12173130573163204);
    msg.setSource(57850U);
    msg.setSourceEntity(172U);
    msg.setDestination(54168U);
    msg.setDestinationEntity(215U);
    msg.sessid = 3116007741U;
    msg.messages.assign("MPWOJVWKVFQDXQBMJALJDXUGREAKOKVPTYBYANOMFAFQOEEAFDZTCEPLIKHESMRBYHIWUUXLKHCGVSADKCOIQXCNNFDTEQEWX");

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
    msg.setTimeStamp(0.0315138190784372);
    msg.setSource(53684U);
    msg.setSourceEntity(29U);
    msg.setDestination(687U);
    msg.setDestinationEntity(157U);
    msg.sessid = 619761333U;

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
    msg.setTimeStamp(0.8982819988969312);
    msg.setSource(35835U);
    msg.setSourceEntity(243U);
    msg.setDestination(18547U);
    msg.setDestinationEntity(236U);
    msg.sessid = 2163125225U;

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
    msg.setTimeStamp(0.04872864899847318);
    msg.setSource(26154U);
    msg.setSourceEntity(222U);
    msg.setDestination(54690U);
    msg.setDestinationEntity(50U);
    msg.sessid = 3969052199U;

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
    msg.setTimeStamp(0.36147637157947676);
    msg.setSource(8114U);
    msg.setSourceEntity(164U);
    msg.setDestination(20828U);
    msg.setDestinationEntity(140U);
    msg.sessid = 1301293579U;
    msg.status = 98U;

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
    msg.setTimeStamp(0.6798544102940776);
    msg.setSource(26939U);
    msg.setSourceEntity(24U);
    msg.setDestination(24879U);
    msg.setDestinationEntity(130U);
    msg.sessid = 147495539U;
    msg.status = 102U;

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
    msg.setTimeStamp(0.6910504694391671);
    msg.setSource(36787U);
    msg.setSourceEntity(178U);
    msg.setDestination(41964U);
    msg.setDestinationEntity(168U);
    msg.sessid = 3327193863U;
    msg.status = 154U;

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
    msg.setTimeStamp(0.7723415153612364);
    msg.setSource(47981U);
    msg.setSourceEntity(144U);
    msg.setDestination(58976U);
    msg.setDestinationEntity(91U);
    msg.name.assign("AZWIXZHTWTEDFSZJOJKUXQTIZFVAORRLQLJOXLHQESDU");

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
    msg.setTimeStamp(0.6691431186873854);
    msg.setSource(37481U);
    msg.setSourceEntity(47U);
    msg.setDestination(23130U);
    msg.setDestinationEntity(146U);
    msg.name.assign("XVTJXHVMGEEXXHSCXBGCALDKXQHLYIBLSVRLOFK");

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
    msg.setTimeStamp(0.4576013218840189);
    msg.setSource(9519U);
    msg.setSourceEntity(194U);
    msg.setDestination(10718U);
    msg.setDestinationEntity(254U);
    msg.name.assign("HQQHOUJGPTSMZCWXFRCVTHTSRYKDGBYALZCYFKDBPSCVMOCNUHJWRPTEQIWEZKAZHLEUMUDVSGCUFATWMDZWXIICQRKXMGWOMMJTLGUIOJNSTFVPEJNNSQDKLXFXNPIHEHEKIWRDPAOQHGFKVJETTJNLORGVABBXPLPXEENKAFJYELAIVYNLSPDWBBGOCZSAZOGQRULSBYRWMQHVBGYVIZJHPICAJMDDXXNRFZIURWLBMFUVASYKQKFXTCN");

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
    msg.setTimeStamp(0.8452090899602239);
    msg.setSource(31728U);
    msg.setSourceEntity(162U);
    msg.setDestination(34756U);
    msg.setDestinationEntity(152U);
    msg.name.assign("RPMSSHXPGBSOJROTDWMSEXWQPZSAZAJQQIFNKVLLUDIDPJEQJAHOZOMSNVRTVFMLUATKSEEZYYZCETFDVYWTXTJGVQHHPIGAPYNDBTXAPBBUIBXMZEZYXJDOEWDGCDDNRVBUMFQBYRSOHKCRNLGITSJXCKPNZQDHOBKLCNENLKGEBTKLYXWWCYFQKVCAWVHFCAOILLGJHRVXKUMFIGUCF");

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
    msg.setTimeStamp(0.054915096150336073);
    msg.setSource(6256U);
    msg.setSourceEntity(193U);
    msg.setDestination(64569U);
    msg.setDestinationEntity(143U);
    msg.name.assign("KADMTCKNDOOYRUNWGEGHMPJHWEQCUSF");

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
    msg.setTimeStamp(0.30404551868975005);
    msg.setSource(4089U);
    msg.setSourceEntity(39U);
    msg.setDestination(36095U);
    msg.setDestinationEntity(72U);
    msg.name.assign("TOCJXYVFEHELZWQBIXPETRVCJTUHPXKOEWIUSBEVDTXAAULSSYTJZLUMHNCWEZGXDGPMOGGFFRDBFJBKSNGNMDRFGFKSCQRLBPJVXOIAOPPABHNUSUYXMFNABMMVVIDPAVHDKCOHSZJGIOVWECALIRVYFYQXKJTHTXRWUQPOZBEEWRPFNNMCTKYNLQKKGAQYXMDTZKQUMZCICGUIYNQZSWDFLSWBZQV");

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
