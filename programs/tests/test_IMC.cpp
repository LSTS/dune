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
// IMC XML MD5: 00461bdf5ee51803f5b42f972c159299                            *
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
    msg.setTimeStamp(0.9062231466618497);
    msg.setSource(27732U);
    msg.setSourceEntity(102U);
    msg.setDestination(36781U);
    msg.setDestinationEntity(235U);
    msg.state = 65U;
    msg.flags = 85U;
    msg.description.assign("QKSCYWCREUYOHKFPLGBSSGI");

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
    msg.setTimeStamp(0.42045272740060724);
    msg.setSource(53229U);
    msg.setSourceEntity(112U);
    msg.setDestination(27968U);
    msg.setDestinationEntity(119U);
    msg.state = 232U;
    msg.flags = 116U;
    msg.description.assign("QGQVYGWIBIYIWBLXQIAZSUZFHZYRRVSMNBKCDSHKGEEFWQELXAVOGSBHNZAZMLDNZEZOFTBMFGURNGYFXIUKXICJAPWCSESWWUPIRBFPDJFPVBAATCXJGJXUDDRMHYDRKWTBBLIUFNATMLTOPVNRYTUSQXJZQVYSNJCNENUKPEKOVRAPLRMMKYYTKJQHEXQTHWFVRSDOQFDVHOLGTJCHGM");

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
    msg.setTimeStamp(0.522439049540389);
    msg.setSource(54257U);
    msg.setSourceEntity(151U);
    msg.setDestination(28323U);
    msg.setDestinationEntity(240U);
    msg.state = 91U;
    msg.flags = 124U;
    msg.description.assign("XJMEODAPMTDLMTCMCDEIAFHCCBLLNWYAYRXJLNLUNZ");

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
    msg.setTimeStamp(0.5408461580919457);
    msg.setSource(27692U);
    msg.setSourceEntity(156U);
    msg.setDestination(38090U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.7747370437264358);
    msg.setSource(51891U);
    msg.setSourceEntity(188U);
    msg.setDestination(5835U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.6340917568137308);
    msg.setSource(33374U);
    msg.setSourceEntity(137U);
    msg.setDestination(49206U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.6851447727421351);
    msg.setSource(35514U);
    msg.setSourceEntity(242U);
    msg.setDestination(24230U);
    msg.setDestinationEntity(103U);
    msg.id = 157U;
    msg.label.assign("QGXMVPVCHOXWFVLZHPSBJMLPVLYKJRDGTXEYCTCXGWPQIVVJWPTXBQUVHIGUVQXNWCFGJQNPEXXBATYUJKDBZOLSFAMAKWIALFSCDULEQAORNHMO");
    msg.component.assign("DEWHBFJJQOQUMQQPFGEVJJSKTEMOPPIPNFYPZDKFVFSCADUGRNUDODKXFOWLWZILOALHBMGZYLTIDRASMBJQH");
    msg.act_time = 32023U;
    msg.deact_time = 61227U;

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
    msg.setTimeStamp(0.8027052079667694);
    msg.setSource(37556U);
    msg.setSourceEntity(250U);
    msg.setDestination(51528U);
    msg.setDestinationEntity(58U);
    msg.id = 79U;
    msg.label.assign("FDIUHFSAOTOWOHIQMDUSBUDHPYEWOJBFYPVCTXENDVAAZLVZRVWPTVKAJVPMCOZBHABNKQPEQSEWWGOCETDLEYMRTQLBEHIKRWUNAANZZPLPXRICIXHZZLNLDOQJDUACYMSARI");
    msg.component.assign("TMLSNYIUYQCAKBAASMCZXNPVFQJBGPHXAXWYRTFVMBOZVCGBEHPWXIFSJWCNXAWKWFRDVFTPDIUGDTSDTFFRFRQEWQINRGDLAYEPMKBENMGPMJPDIUZULEBDYFPQLOTLHPVZXOGVCIMDAEVRCYENZKANC");
    msg.act_time = 52987U;
    msg.deact_time = 35644U;

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
    msg.setTimeStamp(0.22431418225419675);
    msg.setSource(22494U);
    msg.setSourceEntity(12U);
    msg.setDestination(50377U);
    msg.setDestinationEntity(19U);
    msg.id = 0U;
    msg.label.assign("NHNCMOAYPASDHETQNXLWOGHCZOEWLXYMBGYRCEMGIANPWWIIRWQKVRBXXAFJTYZANUPZVQJRZGUDAIDYHCNCUQLEHBSTJQLOHNLYPLTDEOPUZTVMKHMKRYFBG");
    msg.component.assign("AVHUGCYEPXDOTWTLEQRSDFFJPOKMWCCIXFPYHRJQLVZOGZMPYOPZQBDTXEFQBHXWRNOMDHYEYMHZMWLRODSLHTNBZBRSNSWWXCLAHTA");
    msg.act_time = 33806U;
    msg.deact_time = 29330U;

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
    msg.setTimeStamp(0.27904418481670124);
    msg.setSource(55705U);
    msg.setSourceEntity(31U);
    msg.setDestination(19616U);
    msg.setDestinationEntity(2U);
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
    msg.setTimeStamp(0.24790266597134147);
    msg.setSource(11416U);
    msg.setSourceEntity(225U);
    msg.setDestination(12089U);
    msg.setDestinationEntity(110U);
    msg.id = 252U;

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
    msg.setTimeStamp(0.26898422268575006);
    msg.setSource(24716U);
    msg.setSourceEntity(48U);
    msg.setDestination(49597U);
    msg.setDestinationEntity(137U);
    msg.id = 123U;

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
    msg.setTimeStamp(0.1039644516592313);
    msg.setSource(37599U);
    msg.setSourceEntity(100U);
    msg.setDestination(3989U);
    msg.setDestinationEntity(24U);
    msg.op = 233U;
    msg.list.assign("FVFWLXBXDPLHXVSKFUHYARYMOFUQXTKWJAKLKVGPZPANCDWSJMIUZDCAC");

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
    msg.setTimeStamp(0.008614597209516517);
    msg.setSource(55171U);
    msg.setSourceEntity(198U);
    msg.setDestination(47031U);
    msg.setDestinationEntity(92U);
    msg.op = 155U;
    msg.list.assign("ZUZUOYYOTHIBNXBJRAFHLNMPFZNFVUKTKXLDACTQYEHHSGMLTEGCFOVQESQXBJNEIPQMYYTWILDVIPRDTHXHJZKJHBKNMTFGOARBDYXCKLUSMZUJWRZELBVBSEZGQWOLDUIGXVIGCTSFNFMWJIRAPJXPVSXMPADQZJYCMCEPHQEQZQFNAWPZOCBMNOAWJCONUBDFRKAGC");

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
    msg.setTimeStamp(0.9030282183673575);
    msg.setSource(28270U);
    msg.setSourceEntity(225U);
    msg.setDestination(23503U);
    msg.setDestinationEntity(215U);
    msg.op = 2U;
    msg.list.assign("HGHRKZQEZIBBMXOXYMPBCNLELHDRDXDTNUXTRSSFMJYTLAHTKRYYKKFECRGJMXFULVOOJFFFLIWWDFLARCVXPPHLAURBEMKEJBROOZZOZUMIJUGQCPHDMVADSEFWGMLIQGDJKQALONNOGQSSLYPONWQUCVAAGNJJIYBZYWXOKIDVHWVNGSINTZPFCCAMZVAKUBIRPHPD");

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
    msg.setTimeStamp(0.4682245316899982);
    msg.setSource(20452U);
    msg.setSourceEntity(61U);
    msg.setDestination(29264U);
    msg.setDestinationEntity(193U);
    msg.value = 179U;

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
    msg.setTimeStamp(0.08262148009642412);
    msg.setSource(57649U);
    msg.setSourceEntity(109U);
    msg.setDestination(46974U);
    msg.setDestinationEntity(247U);
    msg.value = 69U;

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
    msg.setTimeStamp(0.24190446544624766);
    msg.setSource(48044U);
    msg.setSourceEntity(108U);
    msg.setDestination(62694U);
    msg.setDestinationEntity(179U);
    msg.value = 151U;

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
    msg.setTimeStamp(0.2619277698994704);
    msg.setSource(38141U);
    msg.setSourceEntity(220U);
    msg.setDestination(49588U);
    msg.setDestinationEntity(46U);
    msg.consumer.assign("FKODWSBANOKKFUOVIEFSRVYURJPBZNEIASLQHVJPEMVWVFPOCWTANFFKAFAUOYRJRMRDIPZCCOMWFGRTDNWJGCYQWYZNCENZKPCTWHYDSLXC");
    msg.message_id = 64711U;

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
    msg.setTimeStamp(0.4577528299423895);
    msg.setSource(24364U);
    msg.setSourceEntity(198U);
    msg.setDestination(45112U);
    msg.setDestinationEntity(68U);
    msg.consumer.assign("NHYMABEWXBRMSZVVJWDIPBCYGOACMCPBNHZZGBKFNILOMSVDZMXJOKWXLZCKPKVDWZHYHQYFMZQAVAQXKFBEOYQPUUEYQKHUITJGUFBAJECEMGYZTDHQROJXICUFDJEWIQVGLSDNIMWRGFWZPCXLM");
    msg.message_id = 53422U;

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
    msg.setTimeStamp(0.23840962056561343);
    msg.setSource(60315U);
    msg.setSourceEntity(169U);
    msg.setDestination(2029U);
    msg.setDestinationEntity(83U);
    msg.consumer.assign("UDYFPBHWVQDFHJJXKATGZLQWKYIWSUAIAKCMGVAHKIQQOAKRVIQGPVMPCXVSBQZORYAMLTQSFAEGJYYNFRBMVTDPNHVTOTJQUPOOHZJDMGXLTHCPOPNOUOHDEFCDKMSSBRSLYJFZKSEFZHNEYZVHIKENLHXVWURLAROXGXCBSWNRZIADEUWK");
    msg.message_id = 57964U;

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
    msg.setTimeStamp(0.04170122591911962);
    msg.setSource(17364U);
    msg.setSourceEntity(120U);
    msg.setDestination(30113U);
    msg.setDestinationEntity(25U);
    msg.type = 52U;

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
    msg.setTimeStamp(0.9330876058880984);
    msg.setSource(63103U);
    msg.setSourceEntity(147U);
    msg.setDestination(7618U);
    msg.setDestinationEntity(36U);
    msg.type = 210U;

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
    msg.setTimeStamp(0.39545682234609336);
    msg.setSource(63703U);
    msg.setSourceEntity(140U);
    msg.setDestination(532U);
    msg.setDestinationEntity(88U);
    msg.type = 119U;

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
    msg.setTimeStamp(0.9467188682839587);
    msg.setSource(27307U);
    msg.setSourceEntity(119U);
    msg.setDestination(57196U);
    msg.setDestinationEntity(6U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.8929547773801977);
    msg.setSource(39409U);
    msg.setSourceEntity(14U);
    msg.setDestination(57178U);
    msg.setDestinationEntity(176U);
    msg.op = 191U;

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
    msg.setTimeStamp(0.9743125641277244);
    msg.setSource(53191U);
    msg.setSourceEntity(50U);
    msg.setDestination(24339U);
    msg.setDestinationEntity(26U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.8966107839799492);
    msg.setSource(13697U);
    msg.setSourceEntity(66U);
    msg.setDestination(25542U);
    msg.setDestinationEntity(15U);
    msg.total_steps = 146U;
    msg.step_number = 251U;
    msg.step.assign("WSVVFZEVKIHBAPOILFKNDAICHWGOCBVQREQNURYJXMGPYSSOFMHFDIYZDJFTVDZQFXKXEASNKQZRUEYVRRTWPBLGNJMMUAHRBXSSKLZPTHNHADKIFCWNDWIUDQIXUGNCOQCILEFRCEYLFSTNOUTVEDLKTOBZAERGGULHBTZLBZKPKEUATMGUYCMGBABXGWYQQQKHGPOCMHWPAIIJOYPCDJCZEYNYJTVXVLZDSUSNXJTHVRPFJMXMRLBJWSOJXM");
    msg.flags = 160U;

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
    msg.setTimeStamp(0.07885629048006981);
    msg.setSource(54985U);
    msg.setSourceEntity(151U);
    msg.setDestination(42653U);
    msg.setDestinationEntity(94U);
    msg.total_steps = 186U;
    msg.step_number = 79U;
    msg.step.assign("TQOFWNXXUUUGUXUDGGJBGSGPCFPBVBMRWEIYMCDTETOMIZPSIATWGVTQSWYYPLQXNLAVENNAODUBCKFVVFDEYVHAODBHFSHISZDRBNBHQSFJDMWNCDKTFOMZFXOWKDBTJKYJXEVRHCBUYIFYTETZLYURWAISPIPIJAKGCLRLMWRSYIXLXSAOPBKCKRHZYIGDOEPEKOCKWAMTEQUJVEKNLCMGH");
    msg.flags = 204U;

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
    msg.setTimeStamp(0.5025044061047687);
    msg.setSource(63195U);
    msg.setSourceEntity(138U);
    msg.setDestination(26852U);
    msg.setDestinationEntity(49U);
    msg.total_steps = 186U;
    msg.step_number = 166U;
    msg.step.assign("VNAROXOIWUZZJJLWABONQNFMUVMGMCXVWEJFUCHJPWPSNKMTFTYDGAYPODVFZDOIKJYXBDGYWQEAOFZPTRRHUBIKUDPVLBJQTNIXQFZCUYAQXYDTNMRIVUWSGKZOKHYLEFNKWENPGUXLMERLMQXCAPRJWHJFEEDQULEYZKNDPWNHICYCHCGZVIIHFVSZOSTKBSFATRGBUOWSHM");
    msg.flags = 115U;

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
    msg.setTimeStamp(0.7526605965708092);
    msg.setSource(56878U);
    msg.setSourceEntity(13U);
    msg.setDestination(44616U);
    msg.setDestinationEntity(173U);
    msg.state = 172U;
    msg.error.assign("VNYKOFFXJPYPEATIFTIUJSYNDQGQYPKVK");

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
    msg.setTimeStamp(0.092068891421206);
    msg.setSource(39330U);
    msg.setSourceEntity(64U);
    msg.setDestination(58615U);
    msg.setDestinationEntity(89U);
    msg.state = 213U;
    msg.error.assign("RAGAHSCQUSIQNMSMPXFZHTZELNNXHNVZLOBNYQZKYNRODSQZFULIFUPAHDIYFDMDWFKRSCGPWUHCKIWQWWIOUXRJJIJVHRLDYJBMCVLYEPANXZDKEUBSQRBIYBTJQTPMUQLKPVGESGQYSWCAACVXFOCPKGLBSTYVJPUYGXMBGMJZJPHMBYFLQ");

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
    msg.setTimeStamp(0.4712439661362232);
    msg.setSource(58934U);
    msg.setSourceEntity(211U);
    msg.setDestination(16083U);
    msg.setDestinationEntity(132U);
    msg.state = 220U;
    msg.error.assign("MNHUKJSAVHHOHMVYNNRYFWLOYSIMWCCXDWMSBLTCCVXDOAURKBPZTZHPUOHCOYDXRXINJIPUSVCQEEKSBBAVCLSYZ");

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
    msg.setTimeStamp(0.04617060119251348);
    msg.setSource(9441U);
    msg.setSourceEntity(164U);
    msg.setDestination(23975U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.41186007933932167);
    msg.setSource(32615U);
    msg.setSourceEntity(35U);
    msg.setDestination(25745U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.5536753577899844);
    msg.setSource(37181U);
    msg.setSourceEntity(138U);
    msg.setDestination(64451U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.3378338768450123);
    msg.setSource(19513U);
    msg.setSourceEntity(154U);
    msg.setDestination(46211U);
    msg.setDestinationEntity(33U);
    msg.op = 71U;
    msg.speed_min = 0.190073010103061;
    msg.speed_max = 0.6651561783557207;
    msg.long_accel = 0.8972435522694303;
    msg.alt_max_msl = 0.2892123568332907;
    msg.dive_fraction_max = 0.8762819270382206;
    msg.climb_fraction_max = 0.04517630224119695;
    msg.bank_max = 0.2169049537866814;
    msg.p_max = 0.016560093101021356;
    msg.pitch_min = 0.9971919252581356;
    msg.pitch_max = 0.3026423992680527;
    msg.q_max = 0.13363765932195193;
    msg.g_min = 0.6771643157561423;
    msg.g_max = 0.7135121205880065;
    msg.g_lat_max = 0.7785314006079441;
    msg.rpm_min = 0.33211667363569786;
    msg.rpm_max = 0.24161160601491194;
    msg.rpm_rate_max = 0.7608390750800439;

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
    msg.setTimeStamp(0.5196051515428914);
    msg.setSource(60902U);
    msg.setSourceEntity(159U);
    msg.setDestination(57600U);
    msg.setDestinationEntity(65U);
    msg.op = 190U;
    msg.speed_min = 0.011306701465996993;
    msg.speed_max = 0.8245730257247187;
    msg.long_accel = 0.8624897196381457;
    msg.alt_max_msl = 0.1367248200973975;
    msg.dive_fraction_max = 0.41958481161047756;
    msg.climb_fraction_max = 0.6193268351300374;
    msg.bank_max = 0.8743336172631812;
    msg.p_max = 0.9274724007565778;
    msg.pitch_min = 0.8247355525538933;
    msg.pitch_max = 0.523387073032811;
    msg.q_max = 0.5913991905766162;
    msg.g_min = 0.9550744495219503;
    msg.g_max = 0.6486543646808859;
    msg.g_lat_max = 0.7339404930932015;
    msg.rpm_min = 0.5891553486570196;
    msg.rpm_max = 0.022371077798821304;
    msg.rpm_rate_max = 0.2566701947101615;

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
    msg.setTimeStamp(0.9793086545085474);
    msg.setSource(56346U);
    msg.setSourceEntity(171U);
    msg.setDestination(11486U);
    msg.setDestinationEntity(227U);
    msg.op = 9U;
    msg.speed_min = 0.367833741894529;
    msg.speed_max = 0.45640434988736445;
    msg.long_accel = 0.22397392943889582;
    msg.alt_max_msl = 0.6650366445020289;
    msg.dive_fraction_max = 0.6200436458353926;
    msg.climb_fraction_max = 0.19494090193632285;
    msg.bank_max = 0.8158188485753615;
    msg.p_max = 0.11803739481544373;
    msg.pitch_min = 0.19334632244744543;
    msg.pitch_max = 0.5417571098954853;
    msg.q_max = 0.4479352930812883;
    msg.g_min = 0.7510701951254275;
    msg.g_max = 0.7930115186205549;
    msg.g_lat_max = 0.22028977811036543;
    msg.rpm_min = 0.19933506054353511;
    msg.rpm_max = 0.416587548437384;
    msg.rpm_rate_max = 0.8196093249641738;

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
    msg.setTimeStamp(0.4169034909364736);
    msg.setSource(36222U);
    msg.setSourceEntity(37U);
    msg.setDestination(12476U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.03164947718328526);
    msg.setSource(47578U);
    msg.setSourceEntity(214U);
    msg.setDestination(38041U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.8224723566432474);
    msg.setSource(23839U);
    msg.setSourceEntity(212U);
    msg.setDestination(61035U);
    msg.setDestinationEntity(75U);

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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.9724196144039395);
    msg.setSource(52798U);
    msg.setSourceEntity(237U);
    msg.setDestination(12762U);
    msg.setDestinationEntity(65U);
    msg.value = 0.1858486691627088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.39206050153722205);
    msg.setSource(12693U);
    msg.setSourceEntity(207U);
    msg.setDestination(49907U);
    msg.setDestinationEntity(119U);
    msg.value = 0.9835778174987851;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.354040529370381);
    msg.setSource(10259U);
    msg.setSourceEntity(65U);
    msg.setDestination(22508U);
    msg.setDestinationEntity(50U);
    msg.value = 0.7049070134869055;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9074079399353462);
    msg.setSource(55256U);
    msg.setSourceEntity(120U);
    msg.setDestination(30310U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.10188021021499749;
    msg.lon = 0.1351292315114666;
    msg.height = 0.6265230084453002;
    msg.x = 0.9638771054030588;
    msg.y = 0.8163715929337508;
    msg.z = 0.6551830137056969;
    msg.phi = 0.6848381419168235;
    msg.theta = 0.963767507612132;
    msg.psi = 0.6915081895774694;
    msg.u = 0.860137204242504;
    msg.v = 0.7427486632532977;
    msg.w = 0.7752103304585068;
    msg.p = 0.1277961755850543;
    msg.q = 0.0015716669884752177;
    msg.r = 0.08646092293310403;
    msg.svx = 0.6094479580383932;
    msg.svy = 0.015003620338577828;
    msg.svz = 0.3831197124766188;

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
    msg.setTimeStamp(0.8502351482473166);
    msg.setSource(47767U);
    msg.setSourceEntity(2U);
    msg.setDestination(60709U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.8900846672787245;
    msg.lon = 0.9860999857713626;
    msg.height = 0.31076828184970284;
    msg.x = 0.6323093426731685;
    msg.y = 0.38139975182280617;
    msg.z = 0.29703851033120976;
    msg.phi = 0.9608730202764215;
    msg.theta = 0.31720722008665736;
    msg.psi = 0.1432445546535961;
    msg.u = 0.6927249217699744;
    msg.v = 0.07207248224048535;
    msg.w = 0.8125362311911777;
    msg.p = 0.03101299852193906;
    msg.q = 0.151973925611123;
    msg.r = 0.08000310609895767;
    msg.svx = 0.32861603404928996;
    msg.svy = 0.6580621426373487;
    msg.svz = 0.7750874538281223;

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
    msg.setTimeStamp(0.1699822602744826);
    msg.setSource(30771U);
    msg.setSourceEntity(48U);
    msg.setDestination(65242U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.7851605077092177;
    msg.lon = 0.9640457046985348;
    msg.height = 0.1146208362419957;
    msg.x = 0.23656808843230426;
    msg.y = 0.03826654619994174;
    msg.z = 0.7219512250530162;
    msg.phi = 0.8464013786930095;
    msg.theta = 0.12017985594545899;
    msg.psi = 0.747640807755306;
    msg.u = 0.28308573084697053;
    msg.v = 0.7297081355677454;
    msg.w = 0.01772242554560821;
    msg.p = 0.7452994993236028;
    msg.q = 0.09936157895067499;
    msg.r = 0.10874431014187202;
    msg.svx = 0.5964975297452134;
    msg.svy = 0.10258848457023528;
    msg.svz = 0.44747992028424044;

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
    msg.setTimeStamp(0.6014216053943032);
    msg.setSource(48365U);
    msg.setSourceEntity(218U);
    msg.setDestination(48060U);
    msg.setDestinationEntity(172U);
    msg.op = 28U;
    msg.entities.assign("ONDBBKVOSABUFHPLPQEJPBEVEPCSQRFHNIJQLKSSLBOWUURYZNDHEAYARPSGJAGVRNZRPCNFIXVMWWZIQOSONZLYUMJUMNQFIUZIYXYDBFZKJCVWKFLCIAHPXKMEAZLFEKLVSKHRCEWMIVWYLZBCMJFCTDXXBYHGHLMOTONTBHYWDUXPDGDJTRIGTENXOEWYTRTXZRLAGSVCROMQWNGGJVDABSCMDUGSDOQQKXXIUTHTUKMFATQCEJYPJ");

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
    msg.setTimeStamp(0.45337809590508915);
    msg.setSource(40111U);
    msg.setSourceEntity(25U);
    msg.setDestination(32737U);
    msg.setDestinationEntity(140U);
    msg.op = 150U;
    msg.entities.assign("GUCATNBXQYXQSJXCDXCADRKAUGEFUSKWUNLTNPPVWEGNAMVMLTHLXQGLCYPFSTUYBNFNRTCGDMOVHQARFMQROBSECCHTWIIZYOALRGIHRJUGDBBNTSYIWWYKMDAXKQWSDLFIAKLPOGAUIFXVVUJTEPXVBDIEAKLJHPCWJ");

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
    msg.setTimeStamp(0.8724547600871662);
    msg.setSource(7565U);
    msg.setSourceEntity(217U);
    msg.setDestination(65345U);
    msg.setDestinationEntity(117U);
    msg.op = 80U;
    msg.entities.assign("CUUMHOCFGOWRWUVBZIOUPBNTADLSYAOGJJUKTZUCSKSAINGNLDT");

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
    msg.setTimeStamp(0.1971478021510491);
    msg.setSource(41167U);
    msg.setSourceEntity(111U);
    msg.setDestination(61903U);
    msg.setDestinationEntity(230U);
    msg.type = 215U;
    msg.speed = 55193U;
    const signed char tmp_msg_0[] = {94, 19, -28, 23, 74, -61, -72, 88, -26, 34, -16, 73, -102, 66, -45, -4, -69, -5, -82, -39, 18, -125, -7, 15, 107, 98, 57, -108, 3, -77, -96, 92, -13, -86, 122, -24, -66, 23, -116, -47, -33, -62, -15, 98, -8, 66, 40, 61, 42, -106, -78, 106, 83, -80, -65, 105, -30, 46, -42, 73, -62, -125, -36, -121, -79, 28, -84, 77, -57, -71, -22, 126, 25, 23, 71, 72, 64, 95, -108, -14, 54, -127, -123, 77, -49, 52, 59, 24, 10, 29, -6, -56, -105, -29, -95, -9, -28, 61, 101, -74, -39, 83, 45, -42, 7, 78, 44, -78, -50, 18, -10, 107, 85, -99, -97, -4, -60, -65, -73, -5, -82, 34, -88, -62, 66, 113, 116, -47, 53, -117, 44, -35, -15, 38, 63, 60, -21, -25, -32, -69, 98, 80, -59, 11, 117, -64, 77, -48, 92, -29, 30, 119, 123, 113, 32, -62, 68, 20, 109, 91, -55, -16, -82, -56, 68, -30, 62, -80, -121, -40, -101, -69, 1, 43, 52, 66, 62};
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
    msg.setTimeStamp(0.7124516927298266);
    msg.setSource(15727U);
    msg.setSourceEntity(22U);
    msg.setDestination(844U);
    msg.setDestinationEntity(251U);
    msg.type = 219U;
    msg.speed = 60758U;
    const signed char tmp_msg_0[] = {-112, -113, 65, -127, -51, -66, 15, 92, -97, -6, 33, -1, -16, -46, -51, 126, 118, 48, -107, 126, -110, -76, 36, -10, 94, -96, 110, -32, -6, -47, 45, -106, 62, -63, 77, 18, -106, -68, -103, -81, -7, -93, 99, 56, -72, 41, -15, -1, 10, -127, -70, -37, -18, 65, 126, 27, -122, 51, -52, 86, 10, 40, -55, -120, 72, -5, -54, 105, 68, 102, -15, -89, 30, -17, -33, -6, -116, -65, 33, 36, -51, 100, 25, 60, -33, 66, -60, -86, -107, 118, 45, -40, -67, -34, -89, -51, 126, -10, -6, 83, 31, 2, 92, -20, -114, -95, -68, 81, 55, 22, 119, -107, -11, 66, 51, -112, 109, -91, -107, 68, 95, 86, 22, -12, 5, -45, -116, 109, 24, 93, -7, 32, -92, -108, -17, -43, -31, -22, 30, -30, 116, -28, -34, -77, 53, -126, -22, 44, 51, 31, -50, 115, -86, -120, 1, 65, 79, 68, 6, 79, -98, -47, 74, 114, -16, -57, -15, 70, -78, 72, -88, 36, 34, -114, 33, -77, -10, -116, 38, -42, 28, 80, 69, 37, 109};
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
    msg.setTimeStamp(0.04137903717562286);
    msg.setSource(21292U);
    msg.setSourceEntity(53U);
    msg.setDestination(51025U);
    msg.setDestinationEntity(162U);
    msg.type = 7U;
    msg.speed = 17615U;
    const signed char tmp_msg_0[] = {-112, 105, 104, -32, -9, 115, 63, -125, 71, -118, -62, -26, 78, 81, -17, 76, -8, 28, 78, -24, 15, -121, -77, 21, -31, -52, -14, 112, -61, 14, 61, 1, -112, -57, 40, 111, 85, 38, -49, 82, -7, 73, -108, 56, 28, 5, 8, -93, -36, 111, -9, 46, -27, -29, -12, 103, 126, 45, 45, -101, 116, -71, 64, 30, 119, -93, -20, -61, 50, -6, 74, -30, 109, 72, 2, -35, -46, -113, 97, -105, -75, 119, -70, -50, -109, -85, 10, -78, 48, -63, -120, -31, 70, 120, 125, -122, -120, 70, 97, -37, 62, 1, -74, 33, 23, 113, 120, -61, -9, -36, 60, 87, -120, -82, 51, -101, 23, 27, -85, 60, 38, -82, -37, 17, 5, 86, -72, 119, 84, -87, 100, -61, -77, -82, -6, -67, 86, 53, -33, 99, -60, -25, -18, 102, -100, 74, 10, -102, 75, -109, -124, 33, 70, 6, 95, -107, -13, -117, -52, 95, -69, 19, 87, -111, 38, -36, 119, -92, 1, 44, 5, -17, 51, 56, 55, 31, 58, 7, -87, 32, -80, -38, -23, -94, -74, 85, 26, -23, 72, 54, 34, 41, 48, -29, 94, -33, 70, -45, -72, 114, -16, 12, -1, 113, 34, -25, 76, -55, 82, 55, 119, -73, -2, -54, -32, 75, 87, -43, 110, -39, 82, -17, -19, 48, 36, -17, -15, 94, 11, 36, 16, 91, -83, -47, 19, -92, 2, -34, 72, -69, -81, 6, 12};
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
    msg.setTimeStamp(0.0815600646100828);
    msg.setSource(35974U);
    msg.setSourceEntity(218U);
    msg.setDestination(14311U);
    msg.setDestinationEntity(122U);
    msg.op = 185U;
    msg.tas2acc_pgain = 0.8392765614325618;
    msg.bank2p_pgain = 0.23566667735051217;

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
    msg.setTimeStamp(0.05060240317113929);
    msg.setSource(4496U);
    msg.setSourceEntity(177U);
    msg.setDestination(55114U);
    msg.setDestinationEntity(128U);
    msg.op = 59U;
    msg.tas2acc_pgain = 0.12111931671728882;
    msg.bank2p_pgain = 0.04887634819638653;

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
    msg.setTimeStamp(0.6916555112381823);
    msg.setSource(35612U);
    msg.setSourceEntity(78U);
    msg.setDestination(30038U);
    msg.setDestinationEntity(20U);
    msg.op = 102U;
    msg.tas2acc_pgain = 0.8607015685872538;
    msg.bank2p_pgain = 0.42892485092374677;

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
    msg.setTimeStamp(0.9257533051714103);
    msg.setSource(8144U);
    msg.setSourceEntity(53U);
    msg.setDestination(60302U);
    msg.setDestinationEntity(151U);
    msg.available = 420738922U;
    msg.value = 36U;

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
    msg.setTimeStamp(0.3677208417853205);
    msg.setSource(57629U);
    msg.setSourceEntity(74U);
    msg.setDestination(10112U);
    msg.setDestinationEntity(116U);
    msg.available = 1326953074U;
    msg.value = 19U;

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
    msg.setTimeStamp(0.9669761171469334);
    msg.setSource(33860U);
    msg.setSourceEntity(116U);
    msg.setDestination(64920U);
    msg.setDestinationEntity(218U);
    msg.available = 2110791666U;
    msg.value = 45U;

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
    msg.setTimeStamp(0.055556925196941664);
    msg.setSource(46780U);
    msg.setSourceEntity(232U);
    msg.setDestination(29357U);
    msg.setDestinationEntity(119U);
    msg.op = 117U;
    msg.snapshot.assign("ZGCSMHIWGWDMTARDBIRRQAJUINOOWODIIBKUBYMQHJWXMNULGGMQTUSZNURLOLLQZHVLSDVOCTEGOYZBXRIRHVCZ");
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("MIQFCTADIVKYUTRSYNGQBQANYAVXLSKVWWYGEISQWTBIBWZUXNWNUMMPICTRZVOMJJXTFRWRJWGHPECXSMNAVYCJUEQZZDSIVPCUCUPTRAKDLSIXKDJKVBGNILHKFNEJYNGJRQOTFUP");
    const signed char tmp_tmp_msg_0_0[] = {-71, 75, 47, 31, 54, -125, -55, -81, -29, -83, -66, -51, -100, 31, 66, -7, -92, -101, 98, -87, 82, -91, -97, 123, -127, 74, 41, 113, 100, 87, 90, 115, -99, -42, 54, -127, -55, 14, 26, -58, 78, 11, -44, 70, 7, 76, 99, 29, 107, 0, 105, -101, 25, -60, -8, 103, 66, -81, 112, 64, 124, -108, 119, -59, 118, 11, 1, 89, 32, -62, 85, 12, 63, -19, -128, 93, -128, -7, 93, 121, 30, -82, 21, -31, -118, -127, -105, -73, -44, 83, -123, 20, -48, 112, 63, 39, 24, -107, 118, 66, 1, -32, -19, -117, 4, 46, -112, -3, 57, -121, -104, 33, -65, 20, -128, -59, 98, -101, -13, -68, 14, 110, 43, -81, 107, -36, 7, 88, 3, -1, 45, 27, 77, -77, 0, -46, -48, -97, -91, 89, -67, 105, -70, 12, -66, -4, 88, 78, 70, -79, 42, -18, -7, -92, -45, 37, 64, -63, 10, -100, -9, 81, -23, 44, 48, -102, 44, 23, -62, 122, 7, -21, 112, -26, 5, -61, -96, 120, -85, 10, -116, -79, -56, -100, 43, -3, 6, -125, -7, 126, 108, 17, 106, -86, -22, -57, 126, 121, 108, 24, -105, -122, 10, -113, 36, 90, -17, 103, 112, -121, 57, 13, -55, -47, -89, 79, 119, -58, 67, 26, 5, -48, 17, 70, 106, 122, 110, -43, -18, 23, 25, -87, 118, 56, 73, -35, 34, -93, 126, 60, -75, 105, -121, 79, 35};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.24943179456954379);
    msg.setSource(22133U);
    msg.setSourceEntity(170U);
    msg.setDestination(26625U);
    msg.setDestinationEntity(203U);
    msg.op = 37U;
    msg.snapshot.assign("EWVVDGMCZUKIWPSFZDBTIQLJFEGBMRFTOCOEEHTRTSGGKUOFXZABZSVTDBYQXZLSNXNBZYIVWPXCOMIFZNEAYHLWRKLQORYRNPUVXDWVKPJYDBVITJFAJJSAQQPKMXLHNJHHPUVUMFLLKYBGTQVQGQMGOCZZSCUCHXQARBDMTBRKARCMMJGIVPCMARYQPHDDKWSRDGYKPYJHCKTWLFIENOBOXCNEWNIPLEZSUIGIOEAJUFYFUUTSXNEODNWXL");
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.5244439549135439;
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
    msg.setTimeStamp(0.7605348942258991);
    msg.setSource(59289U);
    msg.setSourceEntity(36U);
    msg.setDestination(6816U);
    msg.setDestinationEntity(13U);
    msg.op = 121U;
    msg.snapshot.assign("UNEOKIILMYJGUKRGRAFXBHURNNOYBQOALXQTZYCJKZTYLZARPBQWBTOCQNDBPLLDMSC");
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 104U;
    tmp_msg_0.name.assign("BWYMSTQITQBFQWOVDWHMJKRRFJPGOHJOYEQWUABPGCNIZXAKADEVEPMRVHNBZTIMNSZBKWOAQQFKAPRRMETPWRKTWYZDVXNKLSUFNTYLGCILVOLFWESSHHADOMNUXGVVCALJXAEXDXUQNDICOZBKIJVFXJKOBLPJAKPHUCPGXGSPBRWESZGYJRZFBHCLVNHYEMFQCHWU");
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
    msg.setTimeStamp(0.9070211498515689);
    msg.setSource(47749U);
    msg.setSourceEntity(70U);
    msg.setDestination(9371U);
    msg.setDestinationEntity(169U);
    msg.op = 110U;
    msg.name.assign("COVNQBFJKEYLEQEAZDQHRYOFUVMTZXQNUJYDCWVSVUDYPLSPMJHEMFRFOJYEOZSMMC");

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
    msg.setTimeStamp(0.6005515019606837);
    msg.setSource(8979U);
    msg.setSourceEntity(138U);
    msg.setDestination(8331U);
    msg.setDestinationEntity(152U);
    msg.op = 88U;
    msg.name.assign("THFUYJLAQYRPPOGBTEJAGOQR");

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
    msg.setTimeStamp(0.5981880667016949);
    msg.setSource(57636U);
    msg.setSourceEntity(25U);
    msg.setDestination(13220U);
    msg.setDestinationEntity(69U);
    msg.op = 115U;
    msg.name.assign("NTWYLCSUTYFMMFJNXJS");

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
    msg.setTimeStamp(0.5957754727464359);
    msg.setSource(44719U);
    msg.setSourceEntity(59U);
    msg.setDestination(15475U);
    msg.setDestinationEntity(27U);
    msg.type = 100U;
    msg.htime = 0.6125549935302392;
    msg.context.assign("UKJSBDIIJIASBGVFVVWNJCQNDECBGTQFBOVVEWQJIQUUCNEWYYAOTUENMNCHKHNWLGZSTCEJLZXVATCRHAMTDHPUSCUVCGVMLPNFVQRXTOQIZRPGLEPYBDODEJMYBYEOUZKLKHYZYSLDBQMWDYTXIZFPCTTFQ");
    msg.text.assign("VOZJHRDCHENXTMSDNXTQUBMKBKZLCVLDINSTTFBZAUVYUDWTUUXKOKTHIVDPQYOPXIUYQEVRUHVEHWNSNQXUBOPVJRPBAFUAXKDGEYXNYRRJMFEQSRYNTGWGZCTJLCZYCMWHJMIJXFYLAJBSDPOWQQLIRINICGELJACHNYOFGCOKDHMRFSWSAMGGWLCLBWZOQSEVMJRKKIPWPIXFRAODWDAQFHAMFGLIZENVKCBGLZPBOPTG");

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
    msg.setTimeStamp(0.6407954865150294);
    msg.setSource(32686U);
    msg.setSourceEntity(149U);
    msg.setDestination(250U);
    msg.setDestinationEntity(8U);
    msg.type = 108U;
    msg.htime = 0.3908736136656653;
    msg.context.assign("YOZBOJSVADJPLZICWWVUPMTNRFLYSRLKSCQBRPFAOFGKJCGPKMAAFWRIIDTEUPMMOIKTUQJEWEWEHYMEPVKLGPBOZQJXQONMUGGJPGODLODIATATVJGNBZESUKWQTDANGDXFIHECFCAUYZRIDIETIERSFSR");
    msg.text.assign("UHDIKPQFTDSVGKGZQSMFTLNTRUVFXHPDGTBTGKKPWBTJVHLMIXIERJIUUYAZNYHNMMACNMKNPTSSUOQBZYYRRUDFV");

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
    msg.setTimeStamp(0.23898563236273385);
    msg.setSource(49119U);
    msg.setSourceEntity(15U);
    msg.setDestination(46914U);
    msg.setDestinationEntity(226U);
    msg.type = 207U;
    msg.htime = 0.8656339695377553;
    msg.context.assign("VYYQDLDUDGEGQQWMMSFLXFSGUHAWDBFMFXTYORKKPZUOTHOHXOLXRARVPNVOUDMPZBSWQDPLDNQVEZOJBXIYPDHYRVOSAGYORSNVVPNWKBWXFLFIZTKAFTGAYXVFFETMJJGPCBKIIJECYSXETWZJJSCIZREMUTNCTAGYPHIDAHHLGOFPKVJJUWJNCRQGLICRNTHEEQLAHQLBMIHSMCACZCW");
    msg.text.assign("IXXNIWYDHUGOGCCZEJBRBDRJUWWEZYIPABXEOSFRRZMQQLHEEJJTZNSJBHMTVARTWSHPPCRJQWXBVHL");

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
    msg.setTimeStamp(0.08637468313723884);
    msg.setSource(1068U);
    msg.setSourceEntity(90U);
    msg.setDestination(5091U);
    msg.setDestinationEntity(173U);
    msg.command = 146U;
    msg.htime = 0.43241749620486325;

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
    msg.setTimeStamp(0.644501340179517);
    msg.setSource(43019U);
    msg.setSourceEntity(180U);
    msg.setDestination(24875U);
    msg.setDestinationEntity(70U);
    msg.command = 80U;
    msg.htime = 0.2883090861155456;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 165U;
    tmp_msg_0.htime = 0.9297062370107033;
    tmp_msg_0.context.assign("PUTIKELITWNPYBDIJCZLIRXJHMCQVBSPHJPAGRPDTXHVANQLMSJIYPINPDOFXZJZIGVXEUGMXXAMQHWTTXQRHUEJVJSJCSGSEVNELGCQDFSFXKWPECWOTRTYOGROYLMDVLKFYLGQCKMNVCONPDAVRHOYCWFLZUZSHIYZUKORSGLQIGBBANAMPAW");
    tmp_msg_0.text.assign("JIZJBSDGQZXLQBPEARWBNNGVAOSRDAYMJUWUTSDHXSICSFZLHXEWUCFOJXOZVHFMELGQVEDEFIRPQNRLWBRVXTURTCVOUGWNYEVWCOHRZWKDWAWCMDIJNZLQMKJTBDFKNFDIHTPFHBKMQCMKJXUXYIQYJEICJKQBBLPTGJHKCGNEIRTSKVUROAVPIEYZPDOSVBIHNSFOXWHBPLZLGPSTXTMYKXMOUMKAFODERAQPZQZGALYUYSYHGCPVC");
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
    msg.setTimeStamp(0.1818828878085602);
    msg.setSource(2702U);
    msg.setSourceEntity(69U);
    msg.setDestination(7369U);
    msg.setDestinationEntity(85U);
    msg.command = 126U;
    msg.htime = 0.9973687958223357;

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
    msg.setTimeStamp(0.2936420692051962);
    msg.setSource(59421U);
    msg.setSourceEntity(134U);
    msg.setDestination(26113U);
    msg.setDestinationEntity(83U);
    msg.op = 126U;
    msg.file.assign("SIETCSSBWPXJIXQSPNKPJIYUWJONNBEHWMRZLDMGXKWGEYFHICMRNNBEASUQUNABHXSAIKQTEMNUOXWIYNEDZJYFWHSMEFKFBDLVTQFPZTUKGCDUQRMHMBLABQOFBCQPZDCLHXKVPORCLNKGDDKNVXLFYMVZBOLHGETRDQVEJAXRTJRCJQRZIUGALHFFLCVTAUUVWPHKPOSMROYYWWTOCZOXYCUTRLAIVZAEPHYQVGIPFJZDAIKMZ");

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
    msg.setTimeStamp(0.9871077850761087);
    msg.setSource(59447U);
    msg.setSourceEntity(178U);
    msg.setDestination(37754U);
    msg.setDestinationEntity(213U);
    msg.op = 109U;
    msg.file.assign("UHDEEMTROZASKCNFSXEYJRNYZQGEWXFRNNWPWBHAPGWCYHQRFDZXADXIVDVJCQLHCQUFKJAROSANOASWPKMOGXWLMCIAYLOHYGZCKVVHQCUMJONRKOPMRHZVRISIMODZEMYB");

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
    msg.setTimeStamp(0.3322520488849757);
    msg.setSource(40064U);
    msg.setSourceEntity(67U);
    msg.setDestination(7372U);
    msg.setDestinationEntity(183U);
    msg.op = 203U;
    msg.file.assign("HVQAMQEIXCGFYKPVFTZYOZQSCPDUNKFYRWTSBSPVEPNACFXUHJIBIMZMMCWYDDBOHTGFSFEVISYEKJGYTWBCUDECAQHRFEGQNWMDRPZHJUGJLHIUQOIKLCVVGOKMKTTLMDUIODBFJSOXZZOWAYRLBEBWBKECEYSNWQZRXKMANQRXVRQYKANBAZVOHMAPZWLASAPGJRVCDOJBGLHJLLXTGUOLGJJXFIEHIKPXUNMNDSXPT");

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
    msg.setTimeStamp(0.5686509422619884);
    msg.setSource(47254U);
    msg.setSourceEntity(107U);
    msg.setDestination(55476U);
    msg.setDestinationEntity(19U);
    msg.op = 210U;
    msg.clock = 0.9024821488324487;
    msg.tz = 38;

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
    msg.setTimeStamp(0.6187030820209753);
    msg.setSource(16206U);
    msg.setSourceEntity(10U);
    msg.setDestination(6777U);
    msg.setDestinationEntity(215U);
    msg.op = 215U;
    msg.clock = 0.05586470186110715;
    msg.tz = 60;

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
    msg.setTimeStamp(0.6932262050543596);
    msg.setSource(1684U);
    msg.setSourceEntity(9U);
    msg.setDestination(62666U);
    msg.setDestinationEntity(240U);
    msg.op = 222U;
    msg.clock = 0.10486383782397868;
    msg.tz = -14;

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
    msg.setTimeStamp(0.6793977580744555);
    msg.setSource(6634U);
    msg.setSourceEntity(235U);
    msg.setDestination(56261U);
    msg.setDestinationEntity(135U);
    msg.conductivity = 0.5703831363550175;
    msg.temperature = 0.5608928581775415;
    msg.depth = 0.6234135245327271;

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
    msg.setTimeStamp(0.03966444867117458);
    msg.setSource(11522U);
    msg.setSourceEntity(135U);
    msg.setDestination(54737U);
    msg.setDestinationEntity(46U);
    msg.conductivity = 0.8829803306675807;
    msg.temperature = 0.8337517541295195;
    msg.depth = 0.5813783102186174;

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
    msg.setTimeStamp(0.09811996126406286);
    msg.setSource(28894U);
    msg.setSourceEntity(171U);
    msg.setDestination(23512U);
    msg.setDestinationEntity(52U);
    msg.conductivity = 0.09389188985864205;
    msg.temperature = 0.5876945697354657;
    msg.depth = 0.09033552764726316;

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
    msg.setTimeStamp(0.9358305589113848);
    msg.setSource(50329U);
    msg.setSourceEntity(254U);
    msg.setDestination(4294U);
    msg.setDestinationEntity(246U);
    msg.altitude = 0.755468970507483;
    msg.roll = 42103U;
    msg.pitch = 23779U;
    msg.yaw = 30946U;
    msg.speed = 21076;

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
    msg.setTimeStamp(0.2841998197432676);
    msg.setSource(29529U);
    msg.setSourceEntity(185U);
    msg.setDestination(40078U);
    msg.setDestinationEntity(142U);
    msg.altitude = 0.5474131148510976;
    msg.roll = 39737U;
    msg.pitch = 38863U;
    msg.yaw = 42588U;
    msg.speed = 6090;

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
    msg.setTimeStamp(0.4047268361975528);
    msg.setSource(61155U);
    msg.setSourceEntity(138U);
    msg.setDestination(4937U);
    msg.setDestinationEntity(177U);
    msg.altitude = 0.19494957250504297;
    msg.roll = 60538U;
    msg.pitch = 23166U;
    msg.yaw = 5366U;
    msg.speed = -23582;

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
    msg.setTimeStamp(0.7921910391374111);
    msg.setSource(3454U);
    msg.setSourceEntity(43U);
    msg.setDestination(23488U);
    msg.setDestinationEntity(137U);
    msg.altitude = 0.7103411682547387;
    msg.width = 0.7490622551150278;
    msg.length = 0.5674664405103628;
    msg.bearing = 0.8582220130868949;
    msg.pxl = 8616;
    msg.encoding = 179U;
    const signed char tmp_msg_0[] = {104, -52, -22, -119, 108, 86, 58, 39, -15, -42, 97, 63, -100, -53, -10, -49, -34, 108, 126, 118, -30, 121, 24, 49, -116, 95, -19, -38, -112, 72, -18, 102, -29, -80, 18, 92, -22, -13, -78, -94, 74, -70, -7, -20, -1, 7, -54, 122, 98, -124, -109, 96, 106, 22, -111, 116, -37, -105, -51, -124, 94, 51, -85, 109, 98, 73, -26, -27, -1, 62, -21, -12, 77, 45, 91, -38, -38, -2, 20, 46, -16};
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
    msg.setTimeStamp(0.6719872785276385);
    msg.setSource(2057U);
    msg.setSourceEntity(109U);
    msg.setDestination(36132U);
    msg.setDestinationEntity(191U);
    msg.altitude = 0.5482378598423674;
    msg.width = 0.6760832346337133;
    msg.length = 0.6738379347811075;
    msg.bearing = 0.13389720350652967;
    msg.pxl = -3810;
    msg.encoding = 51U;
    const signed char tmp_msg_0[] = {35, -22, -118, -110, 83, 122, 115, 33, -9, -38, -101, 31, -76, 11, 20, -70, 122, -56, 97, -102, 19, -68, -39, -122, -96, 43, -48, 9, -78, 8, -97, -60, -43, 24, -91, 48, 120, 11, 107, -7, -122, -35, -88, -23, 8, -34, 32, 44, 68, 2, -41, -15, -22, 54, 39, -90, -82, -44, 60, -66, -95, 62, 22, -9, 84, -119, -56, 110, -95, -47, 123, -91, -42, 45, -72, 125, 62, 15, -118, 32, 28, -41, 44, 111, -115, -48, 84, 60, -11, 25, 8, -87, -1, 58, 78, -86, 23, -85, 96, 40, -108, -63, -82, -20, -1, -69, -44, -124, -87, -127, -80, -73, -47, -102, -1, 59, -71, 55, -53, -27, 24, 2, 98, -114, 28, 7, 83, 6, 8, 5, 122, 90, 117, 93, 26, -102, 2, -65, -3, -70, 61};
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
    msg.setTimeStamp(0.04982763872421625);
    msg.setSource(42167U);
    msg.setSourceEntity(170U);
    msg.setDestination(938U);
    msg.setDestinationEntity(200U);
    msg.altitude = 0.040881252857459804;
    msg.width = 0.43932625786267654;
    msg.length = 0.21641687063168458;
    msg.bearing = 0.8896244114419289;
    msg.pxl = -18005;
    msg.encoding = 174U;
    const signed char tmp_msg_0[] = {28, 87, 21, 42, -46, 54, -115, -101, 102, 11, 99, -40, -18, -36, 41, -36, 93, 105, -19, -50, 93, -118, -85, -114, 116, -3, -63, -34, 4, -14, 61, -79, -117, 29, -85, -33, 4, 62, 38, 89, -89, -79, 70, 102, 42, -13, 20, -49, -126, 21, -12, -36, -12, 120, 28, -121, -63, -42, -7, -17, -9, -108, -69, 52, 100, 97, 49, -91, 108, 96, 2, -48, -71, -89, -81, -105, -33, 121, 69, -122, -83, 70, -96, 84, 104, -29, 114, 66, -127, 91, 104, 90, -78, -41, 67, 28, 61, 54, -1, 110, -127, -111, 13, -124, -18, 10, 36, 99, 33, -1, 108, -21, -70, 84, -16, 58, -99, -73, 61, -102, -57, -112, 107, 98, 112, 52, -90, -92, 100, 54, 0, -113, -36, 87, -25, -42, -65, 12, 59, 18, -59, 33, 115, -77, -81, 95, -67, -124, 123, 59, -60, 97, 48, 9, 95, 76, 64, -33, 75, -55, -120, 80, -68, -109, -111, -64, -62, -95, 70, 54, -113, -80, 84, -2, -59, -12, -69, 99, 78, 54, 67, -53, 49, -47, 50, 35, -118, -39, -15, 17, -109, -66, -20, 83, 107, 67, -79, -73, 101, 35, -24, -46, -75, 4, -114, 121, -43, 71, -126, -96, -114, -124, 44, 28, 112, 123, -94, -82, -125, 71, 94, 103, 64, -101, 82, 75, 126, -52, 41, 32, 74, 54, -69, -4, -60, 27, -34, 96, -82, -111, 118, 111, 113, 14, -74, 95, -119, -10, 10, 64, 5, -31, -94};
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
    msg.setTimeStamp(0.9322868493818869);
    msg.setSource(16615U);
    msg.setSourceEntity(223U);
    msg.setDestination(40617U);
    msg.setDestinationEntity(193U);
    msg.text.assign("MTRBMORKONOWYVHWJZISRUDDQQUAYXAEMMZRZWPMDLUBPMHDTEZLTJHCUYNSDAOFBEMXQSURHPJBSTMOUBNLWPWOXQPFTVHNFUYAIKKYGAYWOWIXBSNXCLHFRJCSYAZKSQDVZDAQWZVKOMFGNTFGKXEZHGTWGCEJVBJDSEUMWDPQVAXEQCEGGNJSJAXCACIVPLCKZFPJHIKKNIRREHUDIBFTSIORG");
    msg.type = 60U;

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
    msg.setTimeStamp(0.32539449124166364);
    msg.setSource(1961U);
    msg.setSourceEntity(122U);
    msg.setDestination(49423U);
    msg.setDestinationEntity(157U);
    msg.text.assign("CJASNDRQJQFLHZOXGAOHCFKOAOPMMVAIONZVGNFWWYDLYQOCAURBTISXRVEQPUEHVLRNNHDWFHPPLAKVFUWUSQMACQOIRIMAXWEHKKLMBPJGBBIHXERPTCYPGLHFDCENYBZNBMJVEJDWMYTGELKKXRYGQHBEQSTYTDOKCXBQFXMSUZUHZXAAWVJBPFXEWJZVPLUCNBITYYZXUPGJVDGDSILMW");
    msg.type = 100U;

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
    msg.setTimeStamp(0.06430572031677351);
    msg.setSource(36984U);
    msg.setSourceEntity(158U);
    msg.setDestination(34686U);
    msg.setDestinationEntity(189U);
    msg.text.assign("JRMGXFDBWJAKTPNGTVJNKFYXHQSRLPWUHAKUJSBGYXUIR");
    msg.type = 157U;

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
    msg.setTimeStamp(0.8020832302614546);
    msg.setSource(34464U);
    msg.setSourceEntity(252U);
    msg.setDestination(52055U);
    msg.setDestinationEntity(51U);
    msg.parameter = 11U;
    msg.numsamples = 96U;
    msg.lat = 0.6709954192782126;
    msg.lon = 0.004858636288757712;

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
    msg.setTimeStamp(0.41836036791506437);
    msg.setSource(26928U);
    msg.setSourceEntity(33U);
    msg.setDestination(54055U);
    msg.setDestinationEntity(43U);
    msg.parameter = 61U;
    msg.numsamples = 194U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 45612U;
    tmp_msg_0.avg = 0.2023685548111831;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.38934378538514036;
    msg.lon = 0.9238371910443026;

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
    msg.setTimeStamp(0.7625367573044822);
    msg.setSource(3215U);
    msg.setSourceEntity(242U);
    msg.setDestination(19748U);
    msg.setDestinationEntity(15U);
    msg.parameter = 91U;
    msg.numsamples = 170U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 9273U;
    tmp_msg_0.avg = 0.12621674633231306;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.05049593251179041;
    msg.lon = 0.45532372236072916;

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
    msg.setTimeStamp(0.5495597668806812);
    msg.setSource(53575U);
    msg.setSourceEntity(16U);
    msg.setDestination(51458U);
    msg.setDestinationEntity(207U);
    msg.depth = 7719U;
    msg.avg = 0.5382397958283378;

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
    msg.setTimeStamp(0.4173807605098121);
    msg.setSource(15792U);
    msg.setSourceEntity(10U);
    msg.setDestination(8156U);
    msg.setDestinationEntity(1U);
    msg.depth = 54862U;
    msg.avg = 0.1732059520144834;

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
    msg.setTimeStamp(0.16214816439078994);
    msg.setSource(52836U);
    msg.setSourceEntity(25U);
    msg.setDestination(52963U);
    msg.setDestinationEntity(166U);
    msg.depth = 8952U;
    msg.avg = 0.14051097697301096;

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
    msg.setTimeStamp(0.7395890462766751);
    msg.setSource(574U);
    msg.setSourceEntity(170U);
    msg.setDestination(51670U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.15348038943571118);
    msg.setSource(55088U);
    msg.setSourceEntity(13U);
    msg.setDestination(41482U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.4228937705855974);
    msg.setSource(28316U);
    msg.setSourceEntity(34U);
    msg.setDestination(10873U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.4770552832471904);
    msg.setSource(35587U);
    msg.setSourceEntity(45U);
    msg.setDestination(52679U);
    msg.setDestinationEntity(61U);
    msg.sys_name.assign("RTJIGDMJCOFLJYDXJHRUZTTPSPMFDQZUOGHXPLIUYKHEBNNKQQQERKZIRRWZZDTBSPLJWIGRHNC");
    msg.sys_type = 2U;
    msg.owner = 40417U;
    msg.lat = 0.8647093715534794;
    msg.lon = 0.16409905413165826;
    msg.height = 0.987906904499512;
    msg.services.assign("UXMEVOAGWELRHXMTYIPCIJERUYEBONBHQZOQGKSMAHUPJWVYODQIEWLRPTPHDJCSGJXGTAMAWFVDTJXADMZAETQVFKWROETSSKDAJIGNCLJEPZPVDBIFNKXKDZSMLRNCUUQZVGRTAVYWSYEYSPSWPBPHNXHXQEIGNZLCRGYJUHNFUZDNHGYRYTJIFOCFQOXWKWBOOCQAZLAHDCKBNGFCMFXIIULNWQTMOYBVRZPLRVTUMHIFLXKDFBBQLCU");

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
    msg.setTimeStamp(0.2024932051220112);
    msg.setSource(53357U);
    msg.setSourceEntity(52U);
    msg.setDestination(12715U);
    msg.setDestinationEntity(111U);
    msg.sys_name.assign("LSMUSOLSHGIDFZVDRGOHZAKHJPTXHCUNXZLGVARPQCECRDPJECULEIMXQCMHINPKDOFJQVASKNYYEEFAAOORPWMRGPNUJUVBNBBYBNSLAXYTUXKUILCLYRXADTUJTUMONDGEWZEKDGQTHWRGEREDITMWOFSIGSPCXTWRIVBAYYNWFIJHUJMLCPGWRBVTLGHPXYBLZZ");
    msg.sys_type = 6U;
    msg.owner = 32425U;
    msg.lat = 0.45805247651189906;
    msg.lon = 0.14441530868536312;
    msg.height = 0.6092999825341189;
    msg.services.assign("JAZLVQODQTKJZOUBXFVPBLNCIJUWKVUJUXPMETQGVTHNMCYLJNRBRCUB");

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
    msg.setTimeStamp(0.1547317120351427);
    msg.setSource(13816U);
    msg.setSourceEntity(216U);
    msg.setDestination(33580U);
    msg.setDestinationEntity(131U);
    msg.sys_name.assign("PAUEPFBVXTOSBHIVXHWLLQXNMRPUQYDJSVWBAKTVCWFZOZYMCPXRDDPWQNGQKMYIQWIRXHSFFBUMMNVSOUKIELIOTZPEXEFLSYKHCEHCSUKYLYKODRVTKPQCEYYFEUSXHYIMONMNGBNJVRRXSLDJZHXRPUFRRTFLNJHAWDCC");
    msg.sys_type = 231U;
    msg.owner = 14070U;
    msg.lat = 0.39775775973478567;
    msg.lon = 0.6766915876724702;
    msg.height = 0.9349995167427537;
    msg.services.assign("VTPGKTTIJGUCWYWDVLMRCYFVZYCYUUAVEBPMKGIKQQUTLXBZTUUVMISREAFXGPKDOWMIRONJHVNJXHTZZLORXFVAQCMEXXSROVYCEDLQUJCKKHONLRDBGDPMLQMJACSTSRCLUDJBYIJPWFJOHSLDHZUPFPZWGNEUKBNQXWRAOANBMTFSSYHMWRLIBQRASPNKLTEWVHQWMQZPEXGIYDYTNBJAZHFVODESASBBOEHGNOFIQDHENKIAIXY");

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
    msg.setTimeStamp(0.18322001311765157);
    msg.setSource(44159U);
    msg.setSourceEntity(147U);
    msg.setDestination(13251U);
    msg.setDestinationEntity(250U);
    msg.service.assign("QLZSEMEFTFWROVZVESHNOAOMCXSYBOARXJDNRMIEWTUECBYLNPKGVAJVPPKSHYQYATBMQLHGDLJWHWTVFVVWJCIIBRRHRXMDLVWOMRAZKBBWINGMDJVCFKGWQNLQZEXMUCSTZKUK");
    msg.service_type = 19U;

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
    msg.setTimeStamp(0.6563702804267981);
    msg.setSource(30613U);
    msg.setSourceEntity(253U);
    msg.setDestination(7672U);
    msg.setDestinationEntity(136U);
    msg.service.assign("FXAHOGCMTVKLXNANDDUSAXIHOML");
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
    msg.setTimeStamp(0.6170499169624291);
    msg.setSource(41768U);
    msg.setSourceEntity(75U);
    msg.setDestination(6381U);
    msg.setDestinationEntity(52U);
    msg.service.assign("BJJKVLUERQCEDDPNMMGUSKTCJAMPGEUBVAVWKABHFZFBHQEZDLIDDPRSIVSZKGWWWOHXTZTFGWROWEPNYKXXZNYIJUXJOOZAYPRBCSHTBPGGPYQANYIMERSVAFCR");
    msg.service_type = 199U;

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
    msg.setTimeStamp(0.5656540639855229);
    msg.setSource(17678U);
    msg.setSourceEntity(245U);
    msg.setDestination(26375U);
    msg.setDestinationEntity(52U);
    msg.value = 0.2582437402680019;

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
    msg.setTimeStamp(0.43081704157605116);
    msg.setSource(9226U);
    msg.setSourceEntity(109U);
    msg.setDestination(64490U);
    msg.setDestinationEntity(200U);
    msg.value = 0.7249353546163788;

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
    msg.setTimeStamp(0.2534650424567433);
    msg.setSource(18266U);
    msg.setSourceEntity(8U);
    msg.setDestination(1924U);
    msg.setDestinationEntity(174U);
    msg.value = 0.80773940338435;

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
    msg.setTimeStamp(0.08208807447556588);
    msg.setSource(7379U);
    msg.setSourceEntity(31U);
    msg.setDestination(11940U);
    msg.setDestinationEntity(237U);
    msg.value = 0.6041683081943088;

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
    msg.setTimeStamp(0.9277639084599701);
    msg.setSource(37184U);
    msg.setSourceEntity(135U);
    msg.setDestination(60568U);
    msg.setDestinationEntity(254U);
    msg.value = 0.23971079213933988;

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
    msg.setTimeStamp(0.9989724747342823);
    msg.setSource(17499U);
    msg.setSourceEntity(34U);
    msg.setDestination(13496U);
    msg.setDestinationEntity(9U);
    msg.value = 0.3758147447320104;

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
    msg.setTimeStamp(0.4654481227955406);
    msg.setSource(42363U);
    msg.setSourceEntity(105U);
    msg.setDestination(56565U);
    msg.setDestinationEntity(4U);
    msg.value = 0.6403918628063973;

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
    msg.setTimeStamp(0.16913617291622018);
    msg.setSource(40047U);
    msg.setSourceEntity(251U);
    msg.setDestination(5406U);
    msg.setDestinationEntity(234U);
    msg.value = 0.9543435160949504;

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
    msg.setTimeStamp(0.8879531294000201);
    msg.setSource(29002U);
    msg.setSourceEntity(209U);
    msg.setDestination(28328U);
    msg.setDestinationEntity(184U);
    msg.value = 0.3721482426718784;

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
    msg.setTimeStamp(0.04918773171171442);
    msg.setSource(32416U);
    msg.setSourceEntity(74U);
    msg.setDestination(63537U);
    msg.setDestinationEntity(4U);
    msg.number.assign("RIJNNZRAKERMLDCOSPLASOIGIJVXZWDUSD");
    msg.timeout = 62751U;
    msg.contents.assign("OIEWSWTZCREHEQLPSFRXIJZNEQEDNJPGKYGJOETAAWIQNVHXUOJVKIMPPALSCEEBVTHHALSAGLDKPDFJBFMPMXCRMJUDHBTFKASOWGCHCDOTVINHBRGWTWMVEBFOICSUTVSYNYKCJPZFITFLKNHLGAWZYNC");

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
    msg.setTimeStamp(0.5626521525497106);
    msg.setSource(22713U);
    msg.setSourceEntity(72U);
    msg.setDestination(36486U);
    msg.setDestinationEntity(146U);
    msg.number.assign("SKSVCXPCRKTQVAJTGNSFXGDP");
    msg.timeout = 8253U;
    msg.contents.assign("CTWYBNAWSORECUINLXQRZPMJFJZAXCVVYEUCOWHZDNRZLKQPAKYLJBDVMNFXWJEBGNLHUQITCIAFWFGTPXVZGAQEQXFTRESUHHRRSBBVUGGORAXZACBYRMOBWBPUJJPISLHPQIMYCIXXFFQOUJZZMDKJSPTUKUMKEMLRLTEQGLDNTANFDHYKHLSUMEDTHSSPKYGGIPHDNOKOWKOYACPJIYVAJKDXS");

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
    msg.setTimeStamp(0.9245175156175381);
    msg.setSource(3527U);
    msg.setSourceEntity(121U);
    msg.setDestination(47639U);
    msg.setDestinationEntity(178U);
    msg.number.assign("LLHJYHTYIGTUKOIMKEPHOIJAMDEPVO");
    msg.timeout = 1800U;
    msg.contents.assign("CSDFQXIZBUXDCLCAMHXQGRTPJFVEDAPCSTEWHSIAIIZPVUHVDBWAVGYIDSGUQBLHYKKCKOFQEWKPCHMBIXZPYGTUTQWWRJJPORPIOWXNUMGOCQ");

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
    msg.setTimeStamp(0.2170228340722773);
    msg.setSource(38389U);
    msg.setSourceEntity(151U);
    msg.setDestination(62567U);
    msg.setDestinationEntity(70U);
    msg.seq = 3837251134U;
    msg.destination.assign("SVOAHUMVKIYGWNCALNGSVLAB");
    msg.timeout = 26121U;
    const signed char tmp_msg_0[] = {-85, -47, -112, -51, 89, -89, 101, -11, -17, 80, -72, 48, 2, -127, -127, 107, 56, -30, 104, -96, -122, -47, -59, -26, 56, 125, 31};
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
    msg.setTimeStamp(0.9171799569261684);
    msg.setSource(15876U);
    msg.setSourceEntity(7U);
    msg.setDestination(64304U);
    msg.setDestinationEntity(208U);
    msg.seq = 1147934994U;
    msg.destination.assign("ORRMDFYVAOHQYCOFPBNLTZ");
    msg.timeout = 36694U;
    const signed char tmp_msg_0[] = {-39, -125, -128, 95, -105, 29, -122, -73, -121, 17, -56, -102, 8, 54, -10, 52, -77, -112, 125, 53, 120, -51, -44, 102, -78, -24, -121, -32, 62, 78, 42, -68, -3, -17, 87, 79, -57, 57, -83, 92, -79, 95, 71, 21, -2, -99, 121, 19, 14, -90, 10, -59, -92, 48, -92, 34, -42, 125, 119, -16, -106, 116, -13, -120, 74, -46, -41, 11, 82, -29, -119, -72, -127, -30, -84, -39, 42, -33, -1, -20, 23, -100, -2, -123, 30, -75, -83, 55, -52, -100, -28, -21, -66, 81, -69, -126, 69, 19, -43, 26, -104, 68, 4, 18, -61, 68, -22, -105, -101, -33, 31, 78, 34, 54, 89, -89, 108, -33, -48, -68, 95, 61, -65, 101, -126, 95, -69, -5, -74, -9, -93, 82, 41, -11, -86, -62, 95, -71, 71, -51, 28, -26, 102, -121, -4, 50, 79, 103, 97, 95, -80, 21, -116, 107, 62, -98, 99, -46, 52, -99, 74};
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
    msg.setTimeStamp(0.22888426751194169);
    msg.setSource(25876U);
    msg.setSourceEntity(79U);
    msg.setDestination(60294U);
    msg.setDestinationEntity(157U);
    msg.seq = 1500369601U;
    msg.destination.assign("PENSAJBQDLKZXKROUPMDQHJYKNEJRHXACSDZOWBZVCWLAIWFUGUHAPXYJZQYFAIUJCPIMVLYRVOUBKMXLIWTNGFXPTTIAXDSNQOTZNWBZUNYOCJORMVVW");
    msg.timeout = 58633U;
    const signed char tmp_msg_0[] = {-121, -127, 41, 94, -83, -91, -21, 65, -114, 105, 18, -104, -40, -126, 0, -60, 2, -48, 0, -78, -3, -85, -4, 108, 92, 20, -36, -27, -65, 23, 50, -12, -52, -4, -74, -15, 66, -39, -55, -115, -5, -64, 23, 38, 53, -104, 59, 25, 23, -63, 76, 1, -128, -40, 70, -98, 51, -81, 99, -9, 41, -25, 68, -104, 50, 1, -66, -102, 103, -14, 71, -121, -87, 42, -66, 15, 26, 56, 124, 69, 66, -4, -89, 33, -57, 110, 117, -3, -67, 119, 44, 75, -28, -57, 43, -53, -55, -78, 49, 85, -108, 65, -96, -66, -62, 65, -72, 55, -14, -87, 18, 102, 42, 24, -117, 53, 80, -47, -84, 123, 27, 45, 35, -83, 36, -21, 42, 55, 86, 108, -56, 93, 82, -29, -9, -44, 118, -93, -123, -95, 70, -42, 58, -79, 85, -8, 124, 82, -43, 13, 88, -37, 112, 51, -50, -31, -65, 78, 80, -15, 104, 22, -35, -80, -91, -16, -127, 27, 68, 15, 49, 68, 51, -102, -36, -107, -110, 70, -107, -81, 6, -28, -24, 118, 112, -63, 1, -85, -7, 100, -63, 15, 91, 34, -50, 16, -73, 72, 25, 81, 24, 29, 53, 103, 78, 13, -5, -105, -37, -25, -109, -117, -19, -18, 30, -112, 85, 34, -119, -39, -41, -24, 119, 116, 38, -127, -84, -1, 79, 52, 1, -39, 85, 73, -117, -32, -85};
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
    msg.setTimeStamp(0.1537727772466959);
    msg.setSource(8312U);
    msg.setSourceEntity(32U);
    msg.setDestination(48259U);
    msg.setDestinationEntity(169U);
    msg.source.assign("BKAMXDOVGAAJKYROIKQECRKKPEPOCZFVLQWOAGEGOQHTHGAWEWPZPTIXJMWZPXPCLHVMPQVFFKQUDSYRWDVXSHRWLANRDITKFZTYGMLUCLQMXURZCTXLOHCDEOBZJNUUFZDJIMUYBUSOVZJQ");
    const signed char tmp_msg_0[] = {-109, 6, 90, 71, -116, 61, -72, 9, -90, 108, -35, -76, -43, -15, 26, -21, 58, -124, 95, 82, -2, -79, -47, 69, -78, -37, 74, -117, 125, 92, -2, 40, 26, -55, -46, 89, -14, 35, -126, -8, -104, 48, 62, 108, 53, 87, -5, -59, 40, 12, 126, 62, -117, -117, -104, 109, -32, 102, 52, -22, 111, 126, -110, 28, -103, 9, -67, 67, -24, 69, -97, 91, 114};
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
    msg.setTimeStamp(0.10659702391845649);
    msg.setSource(42452U);
    msg.setSourceEntity(153U);
    msg.setDestination(47025U);
    msg.setDestinationEntity(134U);
    msg.source.assign("ENBIHMXWZJTKYKMMFONXRYYWMELFWPZVBLOHPGVSEWPLWJUTXDJQIGLHJUYIIGANQGVOUVERNDROSXKLJFRNHESLIDULEMBXYSFRVFZUTRVDSHZVZQEDAXIFOWJOXULBYDCMZFJGQJVSPDKPUBTP");
    const signed char tmp_msg_0[] = {-37, -4, 33, 88, -8, 51, -102, -52, 28, -117, -79, 49, 32, 34, 3, -107, 0, -14, -26, 10, -55, -6, 87, 3, -70, -63, -107, -95, 119, 69, 14, 9, -123, 58, 48, 20, 82, -83, -51, 53, 17, -82, -33, 22, 7, 124, 90, -40, 77, 87, -108, 90, -28, -60, -36, 38, 103, -62, 24, -10, 27, 54, 78, -117, -28, 28, -44, -48, 2, -102, -78, -98, 76, -62, -5, -85, -87, 61, 111, -76, 109, -74, 28, -125, 76, -116, -78, -116, -73, 126, -10, 50, 70, -121, 16, -39, -121, -49, 20, 121, 31, 87, -121, -89, -109, -21, 13, -74, 37, -101, 102, 7, -8, -111, 84, 2, -8, -68, 105, -45, 10, -83, -66, -93, 45, 24, -31, -60, 115, 71, -85, 111, -57, 88, 51, 46, -15, -52, -111, 71, -109, -53, -31, -25, 56, -102, 0, -104, -92, -57, -55, -63, -12, -20, -98, 86, 102, -16, 84, -116, 96, -4, 48, -7, 42, -107, 35, 55, 70, 91, 28, 54, 72, -41, 93, -122, -116, 10, -14, -35, -19, 41, 28, 39, -85, -119, -76, -117, 34, 19, 0, 30, 6, -16, -65, -18, -124, -10, 97, -46, 105, -84, -112, -19, -21, 22, 118, 85, 4, 89, 58, 120, 81, -70, -115, -14, 27, 85, -4, 38, -54, -73, 34, -53, -124, 77, 123, -102, -65, -13, 59, 122, -79, 90, -82, -90, 113};
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
    msg.setTimeStamp(0.9285090422240003);
    msg.setSource(61502U);
    msg.setSourceEntity(181U);
    msg.setDestination(25530U);
    msg.setDestinationEntity(229U);
    msg.source.assign("ARVCGIZIIRXGRAZJZL");
    const signed char tmp_msg_0[] = {-1, 4, -32, -27, -51, 89, -13, -6, 84, -97, -92, 109, 107, 111, 119, -88, -81, 2, -55, 46, 109, 102, 20, 0, -83, 22, 20, 82, 7, -4, 70, -97, 66, -2, 35, 60, 70, -74, -66, -60, 29, 26, 8, 57, -96, 27, 121, -83, -12, 38, -121, 7, 96, -69, 13, -128, 90, -26, 9, 46, 40, -16, -19, 111, -115, 15, -38, -13, 92, -69, 87, -84, 107, 1, -115, -125, 72, 36, -19, 12, 123, -9, 123, 26, 23, -66, 8, 6, -101, -118, 112, -14, 34, -113, 58, 5, 62, 5, 54, -6, -26, -39, 89, 70, 54, 93, 44, -32, -117, 117, -81, 45, -106, 72, 122, -35, -30, 114, -104, -95, 6, -6, -100, 117, 81, 53, -2, 85, -19, 73, 49, -11, 105, -121, 80, 24, -53, 24, 56, -34, 26, 74, -125, 85, 65, -73, 7, 61, 1, 76, 27, -4, -125, -66, 83, -32, 79, 21, 0, 16, 12, -116, 115, -107, -70, 52, 111, 63, -39, -50, -41, -42, -24, -2, -121, -92, -30, -41, 84, -77, 102, -68, 7, -60, 39, -94, 24, -89, -118, 52, 90, 48, -77, -59, 59, 104, -97, -38, 31, -121, 59, 74, 24, 29, 43, 41, 125, 77, 111, 60, 82, 63, -42, -118, 3, 65, -7, 33, -11, -103, -61, 68, -7, 41, -15, 97, 0, 95, 84, 5, -42, 25, 124, -2, -17, 118};
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
    msg.setTimeStamp(0.420321253238394);
    msg.setSource(18365U);
    msg.setSourceEntity(110U);
    msg.setDestination(1097U);
    msg.setDestinationEntity(16U);
    msg.seq = 3723610521U;
    msg.state = 102U;
    msg.error.assign("PYCRYNCMKXMHLPZBOCBJRFZAFXZTGUVEIACPJAVKUTDLAMCFPQJYGBVLWNZBSQRSAJOUTJQFLUHPHDAXDYWQMCKIRMCWYTIKHGGTSSONTNYLAVUUZYHUEBWFKIQEMKDI");

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
    msg.setTimeStamp(0.23764401443149574);
    msg.setSource(26375U);
    msg.setSourceEntity(217U);
    msg.setDestination(8131U);
    msg.setDestinationEntity(217U);
    msg.seq = 2961162150U;
    msg.state = 224U;
    msg.error.assign("FKQKZXHLDQVYWKTHRHLZTAAFFGCNQDUCFOOGRHXEZKMRNSFQGZEWESLVDYRAERNWMZXVZTPBFKDIWXUCJQHURYACUBOICVMTLUILXPGUJPABHZMJNXWVSSCJEYYQQMGETVTIOE");

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
    msg.setTimeStamp(0.5978294381089913);
    msg.setSource(33081U);
    msg.setSourceEntity(35U);
    msg.setDestination(34880U);
    msg.setDestinationEntity(64U);
    msg.seq = 1053626243U;
    msg.state = 122U;
    msg.error.assign("OCFHAWROOYKBHWRPBSUNIDYPEGMLXDAIFQLYAMNSZEWWUJAKYSYOWIOYXIQMTVTADZGMRPUGEPSHXBKAWCEUSGPFJLKTBLQKQUMSLJJGGNWCFJHAVDZNQVUKWHECCHFJLWTOMJRTUCXILDZVYPLQTSNKCWKCLVOCZUQGNFPPRMVVRDXEOARJRIVSKRZEIONOJNEKUYVBZAIHVBEFPXNCGITFSXIDTTDB");

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
    msg.setTimeStamp(0.5087819652962271);
    msg.setSource(22334U);
    msg.setSourceEntity(252U);
    msg.setDestination(42254U);
    msg.setDestinationEntity(143U);
    msg.origin.assign("KCCLJIEAVDFBYRFKAFIGHDZWHRMTTVOODAIIOBZEEVRSLECSYAZWYXFZUFKBJVXEAGKWRTNYWOSXNYZKANTHMPFWXZXIHIYZKTQBATIUHTSRQOLAJKWWJGUSQAPRNILHQVSERVDLXTLNFGWXDOEGQCMQWUGRMSPYUGCUUDVYMTLE");
    msg.text.assign("HKWYAEVNSIMATGLTBSGHVYTLGJBEEHLQWEJIOUJPKMINTDCICUTNDFECNAUMSUJPXLODNVFDAKCBMRJMCDODZWAYZUKOIYXUPGLIPMHXTYRHWJVYLOSCNDFTNEZGBEWHTKLR");

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
    msg.setTimeStamp(0.705672200212432);
    msg.setSource(29933U);
    msg.setSourceEntity(83U);
    msg.setDestination(24672U);
    msg.setDestinationEntity(159U);
    msg.origin.assign("VIDOCJAJDCDWV");
    msg.text.assign("SGYTBYPDXMCLOZGLZTGBUTQGSOHVFJQCMGWEPNTOEOBOEKTVRLGRJFZNQDLBLCXVAFVPPVPWHPSIRVUIHSUEDVCJJNKYFHVVOLUWMZCURMPJJOOMBWHXSCOEGKYNEKZURAOIMHXYNGXXHFNCXKQCDUAZBRKIWPNWUMLABDYKBXMAYIHMXJPTGIDWJYZNF");

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
    msg.setTimeStamp(0.027263361048432744);
    msg.setSource(61715U);
    msg.setSourceEntity(138U);
    msg.setDestination(47743U);
    msg.setDestinationEntity(205U);
    msg.origin.assign("FLSUWNVBOEYDXTDTFSIAKRLJUJQEZWXHECEXUPAXDPKMPVSFMTNTULGMOULWQYIPRPGTSMJEHWXHYIZDRUGUAZJKHDYDGZIVTNRAOWVCRYOOHXWTDVTBJQMWPVZMUWIJBJAXCMZSAKYLCBUKZHIKNERFQFIT");
    msg.text.assign("VIRXGFTZQGQEGXKCLAJOAQBRBPOYQSYZLHAMVDGYEYNHXPUDZKMARMQGTHPZEZDHGAESGTVCYHAHIRLESRDWHKNAIEUOUQCSNXNNYNKPYTSZUBBTWXANDVJKJBJDYISRSBIUKVFKMICBVJWQOAIPTNFOZOBPHXQDKXFEPYBDFEUNQRCYLLCGTRZBCSWFLVEUXXLFACQMIHLPZFV");

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
    msg.setTimeStamp(0.6074035691316259);
    msg.setSource(11444U);
    msg.setSourceEntity(229U);
    msg.setDestination(7712U);
    msg.setDestinationEntity(120U);
    msg.origin.assign("JEEJSWYSCKXNIFVPWHPFHBOPLRDNNGYXCFSUDZRBXNTLYGPUESRDKUEWWUGMYBVCPFGMRSTEIEWUCHOGDWOBIZDXFKYITKMEHTNNCNZVUSQMGBSYKHTNABVPKJVKFPIBOUJSLPCE");
    msg.htime = 0.33680331803422836;
    msg.lat = 0.4605216459058613;
    msg.lon = 0.8782626665964892;
    const signed char tmp_msg_0[] = {-32, -29, -35, -3, -106, 90, -25, 40, 78, 97, -95, 102, 96, -102, -124, 96, -121, 47, 88, 26, -4, -13, -111, 87, 68, -16, -109, -105, 84, -17, -64, 48, -123, 13, -24, 2, -111, -3, -21, 118, 55, -34, 67, -100, -12, -7, -105, 29, 78, -50, 39, 57, -96, -41, 67, 109, -36, 21, 76, -126, -13, -29, 121, -4, 104, 28, 103, 9, -60, -109, 114, -7, 51, 78, 99, 70, 15, 81, -44, -40, -20, -103, 33, -80, -101, 103, 7, -14, 103, -4, 2};
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
    msg.setTimeStamp(0.06878158890295072);
    msg.setSource(12367U);
    msg.setSourceEntity(246U);
    msg.setDestination(6796U);
    msg.setDestinationEntity(227U);
    msg.origin.assign("PLCJMGYPSBQYDQDZTOMUWFCGJAXQNJEQMZCFAQLRHKNJYGEIOSLFKZJOZFIHBVWHDGNGNZCIUXXQIPHHQRTWDGLMBOEXGYVFAVLPUEBBIFTSUUGTKOSKQUDVSTFMEUDBTCYISJKWZSDZENVNAHVRVCMIKCMCMNGXLKLEGOARTIOASLRITSXSRHTMJEWFVRDNFOOUAQQAEYPCHBWOITXHWJBDXXWZPJZYLAWHKURWKNXDMFP");
    msg.htime = 0.8456671267128194;
    msg.lat = 0.7751897254287093;
    msg.lon = 0.8655768140818002;
    const signed char tmp_msg_0[] = {-73, -6, 9, -99, -90, -65, 41, -103, 6, 73, 42, 120, 75, -48, 82, 37, -8, 62, 92, -127, 89, -8, -127, 10, -47, -109, -111, 43, -9, -80, 125, -110, 31, -88, -87, -8, 21, -101, 9, 90, -14, -58, -13, -20, -89, 120, -59, -49, -78, 94, -89, 66, 16, -52, 71, 37, -63, 40, -42, 49, -101, 47, 34, -109, 109, 88, 82, -101, 45, -96, 41, -109, -70, 30, -38, 51, 76, 121, -68, -104, 31, -114, -95, -39, -42, 103, -19, 81, 81, -64, -81, 2, -88, -89, -87, 65, 104, -13, -60, -119, 56, 27, 31, 120, 85, -128, -83, 83, -79, 104, 27, -74, 86, -110, 39, 70, 54, 83, 99, 65, 34, 59, 109, 71, -45, -73, -50, 34, 36, -55, -102, 74, -62, 66, 81, 111, -88, 16, 36, 38, 65, 68, -67, -95, -123, 68, -124, -27, 58, 65, 93, 126, -116, 106, -126, -51, 17, -4, -105, 88, -98, 118, 100, -60, -101, -8, -86, -120, -73, 67, -33, 89, -120, 34, -53, 61, 11, -124, 29, 94, -35, 55, 22, -100, -31, -6, 58, 108, 45, 112, 50, 0, 22, 3, -125, 105, 69, -27, 4, 37, 23, 125, -107, -121, -28, 69, 89, -75, 68, -128, 114, 25, -40, -28, -36, -112, 6, -14, 112, 30, 106, -24, 49, 23, 13, -115, -12, -23, -32, 1, -66, -36, 40, 54, 97, -67, -81, -97, 10, -108, -97, -114, 115, -50, -7, -27, -55, 98, 43, -126, 61, 100, -1};
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
    msg.setTimeStamp(0.25851080089612377);
    msg.setSource(7363U);
    msg.setSourceEntity(113U);
    msg.setDestination(46834U);
    msg.setDestinationEntity(47U);
    msg.origin.assign("WMKWKVWCUDFKIYQFUMRBYWTLHUZRWSUNKQGKCOBOAFFPKMINIKNEEVLRDZDHKWKRNUBYIJXDGXIADAOIQZYLOPFPNEUBZSSMOMGOHCCSVYLEDXZNJIJSLYXDUZBCHNFWYMQEDGNVAECXZRHVJAVAPBWRIYRVLAHULJXHSEVQCBTYJEYBPASPZDCSBGIAHTTEINMFAZS");
    msg.htime = 0.10210602469088681;
    msg.lat = 0.05125249566087864;
    msg.lon = 0.8053361795146529;
    const signed char tmp_msg_0[] = {22, 64, 92, -64, 73, 124, -75, 44, 20, 3, 81, -106, -23, 4, 5, -65, -112, 96, 80, 57, -100, 4, 108, -59, -28, 37, -79, -8, 1, 3, 101, 68, -107, 94, 29, 21, 52, 49, -103, 119, 6, 61, 38, 31, -72, 91, 16, 34, 3, -67, 114, 41, -65, -4, 53, -57, 39, -49, -32, 82, -93, -116, 30, -39, 16, 26, -96, 46, -125, 111, 58, -56, -27, -114, -67, -106, 103, -86, -15, 3, -12, 2, 104, 26, -57, 124, -92, 7, 22, 98, -15, -104, -4, 40, 119, 1, 76, -104, 99, 60, -125, -67, -49, 11, 73, 108, 117, -110, 1, 64, 69, -106, -69, -72, 0, 101, -44, -41, 36, -44, -31, 107, -124, 24, -66, -78, -116, 31, 100, 108, 24, -8, -117, 28, -115, -10, -83, 14, -127, 111, 115, 119, -45, 106, -4, 3, -125, 122, 23, -103, 65, -101, -100, 60, -51, 25, 98, 26, -98, -76, -53, 66, -14, 96, -75, -23, -78, 6, -15, -24, 29, 29, -92, -23, -63, -92, -6, -50, 17, 99, 45, 25, 12, 2, -2, 34, -16, 126, 25, -66, 117, 7, 16, 41, 85, -124, -58, -16, 51, -104, 44, -78, 92, -65, -95, -87, -8, 113, 90, -4, -43, 88, -38, -12, 95, 4, 101, 60, -66, 117, -5, 26, 92, -37, 0, -114, -105, -22, -91, 103, -46, -128};
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
    msg.setTimeStamp(0.9228731565253122);
    msg.setSource(43642U);
    msg.setSourceEntity(88U);
    msg.setDestination(10914U);
    msg.setDestinationEntity(166U);
    msg.req_id = 42823U;
    msg.ttl = 14551U;
    msg.destination.assign("PYLUVXQSWMBVOGCJSCCJNRXYUHXQCWQYNMYAZGGKBKBUPBACVGISVZIS");
    const signed char tmp_msg_0[] = {-39, 21, -33, 80, -33, -5, 23, -117, -13, -19, -54, 84, 118, 103, -23, -56, -21, 63, 114, 125, -88, -47, 37, -56, 90, -77, -15, -54, 98, 91, -87, -93, -5, 44, 59, 61, 0, 13, -116, -98, -50, -110, 97, 56, -75, 77, 1, 63, 39, 118};
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
    msg.setTimeStamp(0.5888644293430477);
    msg.setSource(49301U);
    msg.setSourceEntity(4U);
    msg.setDestination(58786U);
    msg.setDestinationEntity(190U);
    msg.req_id = 10066U;
    msg.ttl = 52009U;
    msg.destination.assign("WVHDDOGTSCYYXOWZUACSVGAJQXYOEZQPOJSPLYNKQQQWOMTFIUTDWCLJNQELVBLDAINGPEMDXZVXTQNBKKUDKINMBURRHDGXY");
    const signed char tmp_msg_0[] = {46, -69, 38, 52, 9, 50, 44, 2, -24, 42, 123, 109, -108, -86, -42, 66, -123, 113, -124, 74, 80, 15, 120, -61, 102, 126, 64, 48, 69, 7, 98, -16, 118, 15, 23, 96, -82, 32, -118, 30, 73, 37, 14, -67, -18, -115, 72, -60, 92, -11, -85, 32, -96, -20, 112, 118, 72, -97, 2, 32, 3, -22, -127, 7, -31, -47, -52, -60, 31, -117, 114, -118, 4, -39, 6, -127, 59, 33, -44, 51, -82, 92, -78, 42, -21, 98, 25, 13, -50, 92, 61, 87, -70, -100, -116, -82, -85, 41, -101, 67, -127, 69, 78, 56, -92, -71, -127, -57, -55, 25, -18, -116, 7, -71, -34, 52, -77, 96, 8, -83, -50, -13, 39, -69, 61, -108, -71, 113, -65, -27, -75, -52, 8, -111, -76, -40, 0, -99, 118, -108, -6, 5, 71, 4, -27, -109, -59, 115, 53, -108, 101, -53, 95, 51, 26, -43, 6};
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
    msg.setTimeStamp(0.250081957037422);
    msg.setSource(14117U);
    msg.setSourceEntity(247U);
    msg.setDestination(3597U);
    msg.setDestinationEntity(246U);
    msg.req_id = 38795U;
    msg.ttl = 46128U;
    msg.destination.assign("JXGZTKWHFPOQFQNFSCDEVLILOVWITIZCWTAHASSZULLQLMAMGKBMTEFTUEJNNRPTVDRWNDRZFUIRCWSANYIPJQKRHNZVLRHYULYIEASPQUUB");
    const signed char tmp_msg_0[] = {-93, -91, 8, 80, -7, 50, 116, 53, -118, 56, -71, 5, -79, -118, 11, -125, 33, -22, -87, 126, 6, -100, 105, -23, 89, -33, 34, 2, -8, -54, 44, 53, -123, -106, -109, -30, 7, -19, 61, 76, 56, -122, -31, -7, -128, 43, 84, -113, 11, 106, 60, -60, 70, 30, -105, 74, -65, 126, 14, -49, -116, 26, 39, 36, 34, -6, 41, -45, -102, -10, 13, -77, -37, 23, -66, -35, -50, 65, 92, 44, 86, 59, 3, -46, 14, 107, 100, 116, -120, -51, 37, 9, 42, 71, -36, -55, 16, 126, -108, 7, -31, 54, -94, -100, -4, -125, -103, -96, -122, 66, 83, -18, -98, -12, -41, -105, 67, 61, -112, 68, 119, -40, -32, 14, -92, 15, -74, -23, -4, -67, 5, 29, -32, 103, -29, -18, 60, 11, -69, 98, 96, 35, -122, -54, -19, 90, -55, 7, -76, 83, -22, -96, -19, 24, -110, -112, -89, -62, 80, -93, 126, -53, 69};
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
    msg.setTimeStamp(0.9045266675706215);
    msg.setSource(64350U);
    msg.setSourceEntity(157U);
    msg.setDestination(29629U);
    msg.setDestinationEntity(7U);
    msg.req_id = 45703U;
    msg.status = 41U;
    msg.text.assign("NIGXONVKDRYPVBFBPPFHWBTKEQUWUFLUSQHVDCPAICWMLOJGIAGTMEBYYFJMCKWNMGJHURHROWZILEMUSWQOOQPCDASIYLMJGZETAHUFYNFLDRQMXTEAPDYEUISKQNLHMAGTSFLSTZRJJXXCCRHJSXVIXCDRKAVOYUVJDZZLPKGOLKTJUZQHXIMBUYKEZXBBOPVZRBEWSEDTQDZHG");

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
    msg.setTimeStamp(0.6384036014924654);
    msg.setSource(62776U);
    msg.setSourceEntity(45U);
    msg.setDestination(8824U);
    msg.setDestinationEntity(138U);
    msg.req_id = 24490U;
    msg.status = 109U;
    msg.text.assign("LMXGOOJTBJNKSQLYBHMESIJQZVKLPRIQWVTQVCLJVHRICGODIPGWXOXRNXAGMNCFXKOGIPUBXPAT");

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
    msg.setTimeStamp(0.24863810657045549);
    msg.setSource(18773U);
    msg.setSourceEntity(200U);
    msg.setDestination(16196U);
    msg.setDestinationEntity(121U);
    msg.req_id = 42936U;
    msg.status = 16U;
    msg.text.assign("EYXVLBXWTZWWNOGVUZRVALHUKRDKKRPMQOISHFNXAZZCJBBMXIRYQGQIPKJTTCDHBRZFRZWAHZGFXTOMYYPVSDGRWJPEWNHJJVCDPYPLWKOOGBAURMPMEPJSCJNDXXUCFDTZLLUABRUCYXFAIGQOXVESDCFIVOTTLSCNLKECNSTBKIZAFIJUQKJWLFQINMQYFE");

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
    msg.setTimeStamp(0.24262473051164513);
    msg.setSource(6328U);
    msg.setSourceEntity(177U);
    msg.setDestination(5125U);
    msg.setDestinationEntity(167U);
    msg.group_name.assign("SONUFANZCBCXUZHJROZKFYODMYJZNTGHRBMSEFWWGHVIDWNAOYXOSCUCPXVPRFFUKWBQRG");
    msg.links = 3876417157U;

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
    msg.setTimeStamp(0.4384425428125237);
    msg.setSource(34271U);
    msg.setSourceEntity(8U);
    msg.setDestination(40570U);
    msg.setDestinationEntity(170U);
    msg.group_name.assign("SGGIFOYOZWVEXSQNCTXLFMALCPINTAUONHTUHIJRYSAXEZPFXUHDJDAGSBPGNHSZWGWOKBQPMFLAHADDYMPDJCVOUGLZXFADPNOAMJXQNFQWRXZHYYVSEGTBXVDBKYXPUULJHYZTANOZLZYWLWEPMHIVFMSHCWPKKBYKBRTDTGGIOIQCWTNFLCVEI");
    msg.links = 723561918U;

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
    msg.setTimeStamp(0.20727329705838304);
    msg.setSource(4482U);
    msg.setSourceEntity(122U);
    msg.setDestination(46774U);
    msg.setDestinationEntity(72U);
    msg.group_name.assign("LVJQLZZAGYKFAPIEVDADBQXPODIANNFYSKJZWJDULMVRIFRGIIBJCDDPVFENPIWLBBUOABGTMQHHRKZQMBXRVNTQZGGJGKQNUUIFQHQENBBEUFZKTJMADWUATAHMTCTSLSVWRAYHUUWLJSVXWNQZYIISEZXLYORKOCGOPKCUUKNZCNCSGTRHEWPSPHCKEPYDAXRSHXJTPOYQXD");
    msg.links = 2970541740U;

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
    msg.setTimeStamp(0.5508955962121355);
    msg.setSource(12418U);
    msg.setSourceEntity(153U);
    msg.setDestination(15778U);
    msg.setDestinationEntity(50U);
    msg.groupname.assign("RXMQTMIVRZPOEAOQCOKQNBXEIYYDJLQXNRMXPXEDAKHMXMKCFKAPLWODUTIVEDKRWAXMHWBZBDTSSKYDNZSJSQFHUNHSVWZFHQTOZMDFRPYYJVZIIFGOJWARYXNLSCVFHJYPJAHWEUCPGIKEQZIVSRVJVQSBBRAQFHPVGUQTELULEWCCGFFKBBJLMIBBNBTNC");
    msg.action = 162U;
    msg.grouplist.assign("VRJPXEGTTKIQHBOBCPCSPATHRUZULKWGRIUAYAIVPFJBSZZJQRFPGOHSJCLIMGSVXHUYDOJKSHYWWQRWZJBYAHXAMLGTHPKLARXIQTKBDMKFMKKNBIEBVMHPXFQRYVYVAQZUOLCDRZTAWJGVEWDFYGNQRNQQWSUNTNJOFAFJ");

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
    msg.setTimeStamp(0.43722641687541164);
    msg.setSource(51389U);
    msg.setSourceEntity(195U);
    msg.setDestination(38169U);
    msg.setDestinationEntity(37U);
    msg.groupname.assign("PLRHLKGDOQPVHUPNDIYJHQSLXSPVRNNXQALYSKBPHABEZWCANEHTQDFOICDFUJQC");
    msg.action = 187U;
    msg.grouplist.assign("TUZEGPYHVGWYQUXICGQDDMTHQEAKWTMFNDCLBZKPEWBXPQUDCLNAOSORANWBJKJKSUKSNAXIKTXTTIFVWMIGSZYVDVXKRUHSRAFNYWRBBBJLTGEAIMWGCDXPHPULROYHSPWODZZFLJZQOIMHPVYTTFXEELNBJCNMEPOQJBKZXVHKVJSAGVUMSWDFQDICMJOPLMSKBTHVZUCAYXIGJYYMERLNQLRQZCBQRNZ");

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
    msg.setTimeStamp(0.05857820467192687);
    msg.setSource(55159U);
    msg.setSourceEntity(144U);
    msg.setDestination(12429U);
    msg.setDestinationEntity(35U);
    msg.groupname.assign("SKAMYPCLOZTGOVSBEFETRTFMDADTFYUBYATOGSIWVRMFIPUWCDNJHCQJHUOLPLHBJVKHI");
    msg.action = 119U;
    msg.grouplist.assign("KZNJQUSTUNOP");

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
    msg.setTimeStamp(0.5146863824945292);
    msg.setSource(44961U);
    msg.setSourceEntity(31U);
    msg.setDestination(5170U);
    msg.setDestinationEntity(66U);
    msg.value = 0.8762895809213656;
    msg.sys_src = 21612U;

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
    msg.setTimeStamp(0.5765248432700246);
    msg.setSource(65468U);
    msg.setSourceEntity(193U);
    msg.setDestination(24836U);
    msg.setDestinationEntity(69U);
    msg.value = 0.8520289875919567;
    msg.sys_src = 53294U;

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
    msg.setTimeStamp(0.3448167800814108);
    msg.setSource(57217U);
    msg.setSourceEntity(168U);
    msg.setDestination(38678U);
    msg.setDestinationEntity(175U);
    msg.value = 0.4207876602054247;
    msg.sys_src = 9990U;

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
    msg.setTimeStamp(0.948742418907534);
    msg.setSource(79U);
    msg.setSourceEntity(72U);
    msg.setDestination(57103U);
    msg.setDestinationEntity(143U);
    msg.value = 0.5314180393168786;
    msg.units = 186U;

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
    msg.setTimeStamp(0.13435415212082713);
    msg.setSource(51990U);
    msg.setSourceEntity(0U);
    msg.setDestination(56480U);
    msg.setDestinationEntity(198U);
    msg.value = 0.7347381211153189;
    msg.units = 161U;

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
    msg.setTimeStamp(0.4548698333506068);
    msg.setSource(28654U);
    msg.setSourceEntity(107U);
    msg.setDestination(31220U);
    msg.setDestinationEntity(54U);
    msg.value = 0.9134769177010589;
    msg.units = 94U;

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
    msg.setTimeStamp(0.20954537483491498);
    msg.setSource(47613U);
    msg.setSourceEntity(6U);
    msg.setDestination(12921U);
    msg.setDestinationEntity(147U);
    msg.base_lat = 0.28193994610759743;
    msg.base_lon = 0.00416424403269644;
    msg.base_time = 0.14705540561132102;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 36563U;
    tmp_msg_0.priority = -126;
    tmp_msg_0.x = -10054;
    tmp_msg_0.y = -29131;
    tmp_msg_0.z = -20284;
    tmp_msg_0.t = 8778;
    IMC::UsblAnglesExtended tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target.assign("HBZEGFKJDSUOGVFPLXABWMSIEAYDGHIVESSSTROHZIDTUIBQWHTNRJJSPORWQRPCPYZZNCHMECLM");
    tmp_tmp_msg_0_0.lbearing = 0.9023981976990245;
    tmp_tmp_msg_0_0.lelevation = 0.395364671322211;
    tmp_tmp_msg_0_0.bearing = 0.2311027163730185;
    tmp_tmp_msg_0_0.elevation = 0.4148742189132989;
    tmp_tmp_msg_0_0.phi = 0.4878428243562738;
    tmp_tmp_msg_0_0.theta = 0.3127507001828076;
    tmp_tmp_msg_0_0.psi = 0.2878828171854698;
    tmp_tmp_msg_0_0.accuracy = 0.8460721672866306;
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
    msg.setTimeStamp(0.9402312096810906);
    msg.setSource(2368U);
    msg.setSourceEntity(231U);
    msg.setDestination(13282U);
    msg.setDestinationEntity(0U);
    msg.base_lat = 0.4035110909106786;
    msg.base_lon = 0.23394649617130725;
    msg.base_time = 0.9797311175524283;

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
    msg.setTimeStamp(0.6985540483956324);
    msg.setSource(38255U);
    msg.setSourceEntity(176U);
    msg.setDestination(25095U);
    msg.setDestinationEntity(158U);
    msg.base_lat = 0.9759767530852748;
    msg.base_lon = 0.7728487491123768;
    msg.base_time = 0.17783832678097433;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 12236U;
    tmp_msg_0.destination = 34623U;
    tmp_msg_0.timeout = 0.8946845295269056;
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("NNYBGIRBNOWYVGOBYVPXZFEQNWMLEXICNHFUMURHXDKAFMVUPXKSZANTVPXPJGFHLTNZKRARCFROPKEETUKKVLGETLJQISQIOOGTUSGTMLDWHLZCJWADUPKXBOGPYXSJZZVAYMTRWQGWERFTFCDREBCCWBHZMAYJGFSRSDWIGOQCJAPCJAQYPVIJIURCQDBEFVQSSJVL");
    tmp_tmp_msg_0_0.predicate.assign("QDSCRJFZIZONMIDWDTHNGERWRBVPKKFEVVEDTCTZRXPWZVHEHLTBYQLN");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("OZEAPAPFDLVGKGXXRXSNYDURLDXEYJEAPNLTXTBWNGJJPC");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 66U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("IHGKLRFQSVLKTD");
    tmp_tmp_tmp_msg_0_0_0.max.assign("YQTOWPOSFAQYXWDFRZNVRTSTVSEVECBWZOPYLLSGFPEWOPSQMUAEEMAUKNBMKYTEBHGGXWBXZHCTDMNCQLGXSWMMHDONKGDOKZRAKNTRS");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.6722415555832211);
    msg.setSource(38333U);
    msg.setSourceEntity(96U);
    msg.setDestination(45529U);
    msg.setDestinationEntity(236U);
    msg.base_lat = 0.3153606212414438;
    msg.base_lon = 0.08262673119688013;
    msg.base_time = 0.9371224947532083;
    const signed char tmp_msg_0[] = {-38, 1, -83, 93, -41, -108, -75, 83, -6, 66, 78, -104, 25, -42, -44, -100, 58, 111, 75, 10, 18, 5, 56, -80, 96, -121, 1, 79, 77, 29, 23, -120, 8, -27, 76, -3, -124, 44, -67, 12, 8, 88, 35, -13, 41, 28, 56, 40, 99, 47, 107, -104, 17, 22, 85, -14, 62, 85, -72, -92, 72, -87, 55, 100};
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
    msg.setTimeStamp(0.9712080055841501);
    msg.setSource(24232U);
    msg.setSourceEntity(183U);
    msg.setDestination(43278U);
    msg.setDestinationEntity(206U);
    msg.base_lat = 0.44337826704541616;
    msg.base_lon = 0.7617983521910162;
    msg.base_time = 0.9532159274800566;
    const signed char tmp_msg_0[] = {80, -90, -54, -13, 39, -101, 77, -76, -90, -117, 28, 53, -34, -7, 48, 91, 76, -97, 25, 80, -29, -85, 96, -83, -3, 11, 18, 83, 68, 96, -4, -121, -63, -122, 85, 63, -68, 93, -108, -1, 49, 83, -82, 2, -125, -110, -115, -33, -70, 100, 21, -75, -20, 95, 51, -1, 22, -59, -11, 20, -44, 109, -75, 6, -60, -98, -113, -96, 35, -75, 42, 91, -109, -18, -78, -81, 22, 57, -15, -47, 3, -36, 126, -99, -42, 39, 56, -72, -5, 20, -109, 38, 121, 100, 96, 75, 79, -58, -123, -99, -36, -104, -19, 27, 104, 46, -3, -28, -8, -44, 14, -53, -46, -73, -42, 83, -46, -91, 118, 12, 81, 68, 122, 64, -120, -106, 47, 93, 85, 14, 97, -98, -105, 0, -44, 32, -1, 115, -27, -82, -34, -44, -6, 78, 126, 37, -13, 100, 80, 26, 66, 66, 10, -121, -34, 45, 110, -48};
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
    msg.setTimeStamp(0.11381141992709387);
    msg.setSource(28360U);
    msg.setSourceEntity(157U);
    msg.setDestination(51652U);
    msg.setDestinationEntity(26U);
    msg.base_lat = 0.2831199014333542;
    msg.base_lon = 0.1753963638061411;
    msg.base_time = 0.949184274251579;
    const signed char tmp_msg_0[] = {-35, -42, 5, 39, 19, 69, -22, -90, -81, -81, 44, 24, 15, -95, 20, 107, 65, 108, -109, 113, 67, 33, -99, 46, 66, -6, -66, -6, -33, -92, -124, -25, 106, 109, 83, 45, 35, 15, -30, -45, -5, -33, 40, -43, -120, -69, -22, -91, 11, 6, 3, -121, -22, -25, -122, 5, -102, 39, -114, -21, 16, -118, 126, 42, 109, 114, 111, -82, 20, 125, 85, 112, -61, 56, 7, -45, -116, 117, -92, 79, 125, -68, -70, -38, -75, 73, 25, 89, 84, 35, -43, -59, 89, 87, -45, 65, 24, -23, 39, -10, -40, 119, 52, 59, -79, 24, 40, -49, -16, -50, -69, -126, -3, 108, -1, -128, -97, -1, 15, 66, -54};
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
    msg.setTimeStamp(0.2960908132978557);
    msg.setSource(14705U);
    msg.setSourceEntity(231U);
    msg.setDestination(18828U);
    msg.setDestinationEntity(138U);
    msg.sys_id = 62507U;
    msg.priority = -86;
    msg.x = -952;
    msg.y = 28855;
    msg.z = 15916;
    msg.t = -17781;
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.9873699670000514;
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
    msg.setTimeStamp(0.05726879534268048);
    msg.setSource(17440U);
    msg.setSourceEntity(44U);
    msg.setDestination(18174U);
    msg.setDestinationEntity(176U);
    msg.sys_id = 11321U;
    msg.priority = -21;
    msg.x = 25336;
    msg.y = 9455;
    msg.z = 29598;
    msg.t = 30523;
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CHKPWQDVFRELFJTCDHBFYQRKQBZGRXDATBLRUJLQPAYLUKHPEGIXHDIMQBVAPVIGFRYIWPI");
    tmp_msg_0.value.assign("PLHNMESQREZNPPUHIARPICYMRZYATBELOYISWKVDAOJEFKVONVMBHCALTUPGUVHUYSOHRWFWWHIXB");
    tmp_msg_0.type = 12U;
    tmp_msg_0.access = 231U;
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
    msg.setTimeStamp(0.947952998534399);
    msg.setSource(58083U);
    msg.setSourceEntity(124U);
    msg.setDestination(56073U);
    msg.setDestinationEntity(66U);
    msg.sys_id = 45433U;
    msg.priority = -24;
    msg.x = -12825;
    msg.y = -6754;
    msg.z = -24416;
    msg.t = -3969;
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("MCIVSZKZNEKOWWHQQUNWPTNTRXAAXMTBQBBOMJOXVHEAOVRJFSFAWKEZIDTZXSA");
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
    msg.setTimeStamp(0.5723418116695267);
    msg.setSource(11362U);
    msg.setSourceEntity(193U);
    msg.setDestination(20887U);
    msg.setDestinationEntity(106U);
    msg.req_id = 25881U;
    msg.type = 38U;
    msg.max_size = 7118U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8746015559689243;
    tmp_msg_0.base_lon = 0.6548723369198325;
    tmp_msg_0.base_time = 0.12198134740515398;
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
    msg.setTimeStamp(0.03423094670527149);
    msg.setSource(57216U);
    msg.setSourceEntity(233U);
    msg.setDestination(29723U);
    msg.setDestinationEntity(70U);
    msg.req_id = 65085U;
    msg.type = 122U;
    msg.max_size = 25225U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0312994121913871;
    tmp_msg_0.base_lon = 0.1185717689493414;
    tmp_msg_0.base_time = 0.8653126899131082;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 63545U;
    tmp_tmp_msg_0_0.destination = 47296U;
    tmp_tmp_msg_0_0.timeout = 0.7962399500520254;
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.1292622935844936;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.2455004690305862;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.8352461831300044;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 200U;
    tmp_tmp_tmp_msg_0_0_0.limits = 17U;
    tmp_tmp_tmp_msg_0_0_0.max_depth = 0.33114558191618537;
    tmp_tmp_tmp_msg_0_0_0.min_alt = 0.17075798950030563;
    tmp_tmp_tmp_msg_0_0_0.time_limit = 0.8392243619087351;
    tmp_tmp_tmp_msg_0_0_0.controller.assign("TGKIODXQLWJUIJUPI");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OKVTJQWRXUNOHRXMHXGIYVFKSGGBPQYIMXFTMXQCDFTJVHENOFVUGZCSNHJZKUNEOJHKFDSJZDIESENKJBBWUAYXQDCPSLHCEOGLCVDYLWRTBDHCWMGPUF");
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
    msg.setTimeStamp(0.014722335211710735);
    msg.setSource(17835U);
    msg.setSourceEntity(236U);
    msg.setDestination(46282U);
    msg.setDestinationEntity(97U);
    msg.req_id = 34116U;
    msg.type = 45U;
    msg.max_size = 28932U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.19898063820179968;
    tmp_msg_0.base_lon = 0.29944321290753895;
    tmp_msg_0.base_time = 0.7533713281219659;
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
    msg.setTimeStamp(0.9256424248276968);
    msg.setSource(54931U);
    msg.setSourceEntity(192U);
    msg.setDestination(38291U);
    msg.setDestinationEntity(171U);
    msg.original_source = 24032U;
    msg.destination = 34478U;
    msg.timeout = 0.17777081059585342;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 166U;
    tmp_msg_0.range = 0.6852852145141677;
    tmp_msg_0.acceptance = 114U;
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
    msg.setTimeStamp(0.11050911033294464);
    msg.setSource(1116U);
    msg.setSourceEntity(86U);
    msg.setDestination(45481U);
    msg.setDestinationEntity(80U);
    msg.original_source = 60857U;
    msg.destination = 61863U;
    msg.timeout = 0.7138920178503227;
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 154U;
    tmp_msg_0.x = 14367U;
    tmp_msg_0.y = 9164U;
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
    msg.setTimeStamp(0.0508121078462449);
    msg.setSource(48960U);
    msg.setSourceEntity(21U);
    msg.setDestination(41422U);
    msg.setDestinationEntity(64U);
    msg.original_source = 36919U;
    msg.destination = 50796U;
    msg.timeout = 0.5112922518986788;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 2078804489U;
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
    msg.setTimeStamp(0.9598224638566373);
    msg.setSource(17767U);
    msg.setSourceEntity(37U);
    msg.setDestination(58054U);
    msg.setDestinationEntity(238U);
    msg.type = 60U;
    msg.comm_interface = 50005U;
    msg.model = 13494U;
    msg.list.assign("OIATKMTHMALKDUSDGQECCGXGCJLSNUFNBIZHYADZMKMRSQKLKOWMHXGWCIMTJYOUMFVBDENPPHYIXJCYIZBTFLDRVXZLZQCTEGVEOWQRORXZODCFHRQPYXZEQXYMMPUWNWDAPIBAOOAFBSITHJVEYNECRXFLSNTYXVAUF");

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
    msg.setTimeStamp(0.3084911484613877);
    msg.setSource(42288U);
    msg.setSourceEntity(43U);
    msg.setDestination(31777U);
    msg.setDestinationEntity(52U);
    msg.type = 111U;
    msg.comm_interface = 62717U;
    msg.model = 54666U;
    msg.list.assign("UWOCNEVPPYOKLUQPSYVDCJFXKJCXSOYMWZFZTPZUGFJNBAYBQDCOJFKBHJMPZYRTWDUEWTSXOBNHYQROVIAIYOBLDMQIMRHGFUMVVTFWYRLKSPWWVTNZAKWLFFJGDLHSVDICEXEEEKSCZUZQ");

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
    msg.setTimeStamp(0.5794795666600113);
    msg.setSource(3744U);
    msg.setSourceEntity(24U);
    msg.setDestination(15989U);
    msg.setDestinationEntity(248U);
    msg.type = 177U;
    msg.comm_interface = 46538U;
    msg.model = 42390U;
    msg.list.assign("RJSKDMOJJFUFMZUANHPHOBRRMBPMTQMZSFYYNLUCXAOWLULGOJCPDDQGWYNTHSRQQBYZGJHWAAVNPSDBKEZGYUGEEIKZFEVOPOSVXQUDEEBNWTGQAZPWHASNHDXPDKKXDTBRKKSCLGAIZFAYHLIUJTSIVNRYDCLPKCLEFXUIYXCMSGWUBPPZXMOGYTVMTLBBIXVFHFWITRJQIWTICDBTUJCEXROZFHKAEVOHMVJLZQGWYI");

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
    msg.setTimeStamp(0.5002685296542281);
    msg.setSource(28899U);
    msg.setSourceEntity(106U);
    msg.setDestination(60445U);
    msg.setDestinationEntity(210U);
    msg.type = 166U;
    msg.req_id = 1544550344U;
    msg.ttl = 32820U;
    msg.code = 8U;
    msg.destination.assign("QKYJCAQIABZOEYKCFJXVHDNYXLDHOSUGLXMLPSBJRFCIWUERMARJMQMIRZBWAKNZHSZQIHMDYSBLSIVCRKBZXIAEYACXVFAJXTRTAQDMFNRCGBALNWMZGDBUNFYZREERVDFROVKTMDGNCSEOKVVSUAGPWCQZWEUIVOSTVODOPHGTWQYXBJVPTPIWUWJYLPEYWCPJCKOSDTXNUOLNZHXIMUJWQTY");
    msg.source.assign("PEGIGVUFMMRRHCUTJELWWOZKNWYCHKKWDWXYROMNFVAPOFQLKDFQTZQVZDDSVAMBJK");
    msg.acknowledge = 100U;
    msg.status = 251U;
    const signed char tmp_msg_0[] = {-31, -63, -107, -35, -17, 33, -49, 28, -36, -94, -35, 110, 31, -119, -1, 104, 45, -10, 107, -91, 36, -21, -125, 34, -20, 89, 26, 124, 100, -83, 18, -86, 123, 92, 26, 3, 117, 37, -58, -93, 73, -108, 120, 2, 42, -63, 106, -2, -6, -108, -118, 116, 108, 24, 123, 125, 87, -60, 51, -55, 26, 44, 97, 34, -98, 5, 70, -15, 19, 44, 26, -7, -1, 46, -79, 46, 81, 91, -96, 74, -13, 97, 48, -96, -54, -91, -119, 54, -59, -50, 27, 77, 29, 41, 25, -43, -75, -8, -100, -33, 49, 29, 61, 31, 79, -106, -55, -22, -2, 98, 112, -75, -28, 126, -1, 108, 12, -56, -19, -68, 121, -110, 108, 6, 89, 95, -22, -90, 76, -101, 112, -44, 44, 35, 77, -23, -114, 26, 68, 40, -118, -27, -93, 66, 120, 80, -15, -20, 79, 42, 71, -31, -69, 100, -20, -89, -30, -7, 51, -95, -79, 100, -7, 123, -59, 8, 21, 33, 64, -115, 50, 16, -27, -73, 46, 83, -4, 33, -4, -95, 118, -24, 104, 63, -60, 56, 47, 30, -54, 50, 9, 30};
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
    msg.setTimeStamp(0.5662299527505801);
    msg.setSource(2547U);
    msg.setSourceEntity(4U);
    msg.setDestination(23668U);
    msg.setDestinationEntity(78U);
    msg.type = 0U;
    msg.req_id = 2753494786U;
    msg.ttl = 62276U;
    msg.code = 76U;
    msg.destination.assign("YCIMZPDRNYMASCZFPEAPREQVCKRUGSTDCHHLEUKKJFNZLMGEBJVWTJREMQYUHMIVIVVNFHAPFTUSSRLYMTNWDBOUAGMCRUTLZYVGWYDXYQFZLAPDKPBQGBXVAJNTRIKCOORNJFELCCMNIRXHWDALFBOSCEOXNAYVWCHOGWTEHVBQOKTWAIUHRQ");
    msg.source.assign("LFVZXJSZPSYOAYYNEMRQUIQUHKNGEOD");
    msg.acknowledge = 22U;
    msg.status = 223U;
    const signed char tmp_msg_0[] = {-81, -1, 51, 25, -101, 23, 122, -80, -105, -23, -5, 13, -83, -51, -20, 87, 53, 23, 98, -2, 18, 94, 96, -60, 56, -69, -8, 80, 0, -82, 59, 84, -28, -34, -76, 42, -103, 111, 110, 46, 116, -126, 10, 71, 49, -42, -94, -45, -125, -35, 59, 49, -29, 94, -70, -93, -119, -3, -61, -87, 4, 42, 35, 88, 39, -27, -106, -110, -104, 113, -110, 120, -65, 112, -122, -111, 71, -128, -15, 19, -40, -98, -32, -14, -102, -65, 86, -3, -85, -77, 118, 76, 17, 10, -122, -97, -50, -87, 82, 21, 31, 75, -120, 17, 34, -15, -68, -108, 103, 86, -116, 54, 37, 99, 11, 120, -100, 82, -119, -111, -5, -110, 29, -63, -32, 62, 91, 82, 3, 50, 7, -46, -16, 69, -6, -65, 20, 54, 47, 48, 82, -77, -74, 123, 28, 15, -24, 32, 5, 126, -42, 52, -94, -100, 88, -82, 29, 95, -102, -73, 110, 75, 120, -28, -50, -88, 66, -120, 112, 67, -18, -51, 42, -18, -63, 65, -18, -19, 69, -13, -51, -85, -7, 82, -53, -85, 74, 48};
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
    msg.setTimeStamp(0.9782764110559283);
    msg.setSource(30965U);
    msg.setSourceEntity(235U);
    msg.setDestination(59834U);
    msg.setDestinationEntity(133U);
    msg.type = 76U;
    msg.req_id = 3451907726U;
    msg.ttl = 22603U;
    msg.code = 214U;
    msg.destination.assign("LNGWKDAERDWNGWADMZHPXCKNDWOYQJOZLPLUWBTVMGMLCYWWEJKFBYPLVZCTGKPFJABCOMLVHOAOYSOHNSHEJQLPGQUMXPFHIRTGXTICHKCUIZZQVINSQFFPAGNDEHCCUBRSIVUAKKVGWUEYZGCAHIZBOHRZICVJLMFRSOBNBOFEMJRZUNAQWKTLS");
    msg.source.assign("GUKXVQRMCJAEDERZPGMMYLZTTBCFCKLXQCKZEJEZABMAXQYTERKOEJZVFBTPYZSNSDNMFULOEU");
    msg.acknowledge = 253U;
    msg.status = 46U;
    const signed char tmp_msg_0[] = {8, -43, -63, -94, 80, 101, -18, -32, -83, 99, 26, -29, -48, -54, -62, 113, -55, -55, -73, -112, 89, -41, -45, 25, 32, -97, 29, -50, 10, 124, 74, 52, 94, 49, -24, -12, -100, -4, 99, 116, -58, -122, 110, -68, 66, 32, 27, -116, 71, 109, 122, 23, 7, -99, -115, 64, -9, 46, -83, 22, -107, -17, -33, -92, -15, -103, -45, -60, -3, -112, -58, -15, 125, 29, -45, 23, -76, 27, -72, 84, -66, -119, 31, 112, -59, -6, 24, 11, 49, -32, -91, -120, 36, 80, -27, 93, 50, 15, 121, 41, -113, 105, -86, 65, -49, -82, 75, -20, 40};
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
    msg.setTimeStamp(0.8918611022063482);
    msg.setSource(20371U);
    msg.setSourceEntity(119U);
    msg.setDestination(47831U);
    msg.setDestinationEntity(22U);
    msg.id = 195U;
    msg.range = 0.5697556225552475;

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
    msg.setTimeStamp(0.8508142833316918);
    msg.setSource(49463U);
    msg.setSourceEntity(88U);
    msg.setDestination(55373U);
    msg.setDestinationEntity(23U);
    msg.id = 218U;
    msg.range = 0.4979972676690998;

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
    msg.setTimeStamp(0.2746876878435307);
    msg.setSource(5899U);
    msg.setSourceEntity(195U);
    msg.setDestination(23668U);
    msg.setDestinationEntity(177U);
    msg.id = 84U;
    msg.range = 0.6324457603394548;

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
    msg.setTimeStamp(0.8438256553652844);
    msg.setSource(25295U);
    msg.setSourceEntity(14U);
    msg.setDestination(49722U);
    msg.setDestinationEntity(172U);
    msg.beacon.assign("KJEXJQFXNPLUYABKPBYJFNWJZHPRVMFVKDAZDGQMTJVDMAMKCPEIVLWCUAZRDFEKYCLIGOZRSGPBAINYLSBDGNXVJJALWSPRWXVESICWYD");
    msg.lat = 0.9692980621083741;
    msg.lon = 0.174192252823258;
    msg.depth = 0.8435798053177892;
    msg.query_channel = 114U;
    msg.reply_channel = 180U;
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
    msg.setTimeStamp(0.04278501332267548);
    msg.setSource(40385U);
    msg.setSourceEntity(211U);
    msg.setDestination(40305U);
    msg.setDestinationEntity(37U);
    msg.beacon.assign("DPTMMHLBYTEVGLPRAKCUSOUQES");
    msg.lat = 0.9343145577676121;
    msg.lon = 0.6068102591426512;
    msg.depth = 0.5321780472455161;
    msg.query_channel = 211U;
    msg.reply_channel = 140U;
    msg.transponder_delay = 229U;

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
    msg.setTimeStamp(0.9292604200939849);
    msg.setSource(44020U);
    msg.setSourceEntity(63U);
    msg.setDestination(49798U);
    msg.setDestinationEntity(77U);
    msg.beacon.assign("JIALWDIKSWKZTNRKBVIOWENGFVLIVKWTOHBHAMKIZGDLNQCUDUUPOEZZVSFTKRYXTVYEGRZYXWJPULN");
    msg.lat = 0.4880304286974163;
    msg.lon = 0.7886509272054496;
    msg.depth = 0.6763110121016033;
    msg.query_channel = 32U;
    msg.reply_channel = 115U;
    msg.transponder_delay = 94U;

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
    msg.setTimeStamp(0.29922843268168264);
    msg.setSource(19981U);
    msg.setSourceEntity(89U);
    msg.setDestination(38601U);
    msg.setDestinationEntity(148U);
    msg.op = 63U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ESDPIOBRMWAWCODOMJCPIFSVQEHYLAHOTKRQFDSADYYZFOIKSLMVT");
    tmp_msg_0.lat = 0.23344705077795158;
    tmp_msg_0.lon = 0.9469481698045035;
    tmp_msg_0.depth = 0.12300552433659928;
    tmp_msg_0.query_channel = 206U;
    tmp_msg_0.reply_channel = 148U;
    tmp_msg_0.transponder_delay = 218U;
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
    msg.setTimeStamp(0.9864918333227239);
    msg.setSource(2329U);
    msg.setSourceEntity(242U);
    msg.setDestination(48295U);
    msg.setDestinationEntity(217U);
    msg.op = 113U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TZYHGLTUPIHFOUMIOBULZRZPGKBJNFZCPHGDAMDAOCTKMBQWHOLDOSHVUQBCSPLRDFTYMFJNWW");
    tmp_msg_0.lat = 0.6597307171895055;
    tmp_msg_0.lon = 0.6868430540902435;
    tmp_msg_0.depth = 0.28735985415613385;
    tmp_msg_0.query_channel = 109U;
    tmp_msg_0.reply_channel = 175U;
    tmp_msg_0.transponder_delay = 181U;
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
    msg.setTimeStamp(0.37076308042019823);
    msg.setSource(58637U);
    msg.setSourceEntity(42U);
    msg.setDestination(37619U);
    msg.setDestinationEntity(193U);
    msg.op = 233U;

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
    msg.setTimeStamp(0.17883768542092027);
    msg.setSource(2973U);
    msg.setSourceEntity(31U);
    msg.setDestination(64105U);
    msg.setDestinationEntity(79U);
    IMC::MessagePartControl tmp_msg_0;
    tmp_msg_0.uid = 151U;
    tmp_msg_0.op = 224U;
    tmp_msg_0.frag_ids.assign("QYUXJONHGXKZTLESKJNITTBJIMHNKMMUPGABMUNVKLNHHACEFERQUPPHRBSLIJMZKHEFECXWSDLDLHFOVVDSZATMZYRLVTENGDYPCYBKOFTPPAVLLZWRWZXLDIQKNATSSMPIYNOGDAUBEGQGFKQ");
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
    msg.setTimeStamp(0.7277120709250592);
    msg.setSource(64315U);
    msg.setSourceEntity(254U);
    msg.setDestination(1528U);
    msg.setDestinationEntity(211U);
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 178U;
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
    msg.setTimeStamp(0.33010542598711545);
    msg.setSource(58052U);
    msg.setSourceEntity(159U);
    msg.setDestination(50186U);
    msg.setDestinationEntity(14U);
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 61331U;
    tmp_msg_0.control_ent = 251U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 171U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.35056996752343217;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 0U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.02506088913749116;
    tmp_tmp_tmp_msg_0_0_1.z_units = 131U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.2758310290292527;
    tmp_tmp_msg_0_0.lon = 0.9268293244355763;
    tmp_tmp_msg_0_0.radius = 0.03169237844202211;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 114U;
    tmp_msg_0.proximity = 16U;
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
    msg.setTimeStamp(0.3628038878122176);
    msg.setSource(29128U);
    msg.setSourceEntity(191U);
    msg.setDestination(38979U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.592809230782968;
    msg.lon = 0.6506792949932966;
    msg.depth = 0.059852609902176224;
    msg.sentence.assign("WIUGNGMFAIZMLBELBBXPASQXWRCKOCUZJHCVPOYAMUNFHRKNVXQQYFJLYUDCREMIGPVKVZXPDWHUTPBLARGNQVHORFKYGSCZDADP");
    msg.txtime = 0.15817033449792517;
    msg.modem_type.assign("QYGVVXCAFAAQHCVUPCFMMNHVFGYNTZEIWKIXUHDJGYIYYPOZCQBASYKFSSNGZYZEKDLFGHKREEYIAUDNPERMPWMKWTWNLETHVYUBLBAYRSMQUITDWZALOAKJJRBPTKSJKOBPJPNFLXNCLPORLMGHRULSWFXWNOZJCDKIFXSMVTBTFNB");
    msg.sys_src.assign("RMNHGIAQDKHPZRCQXNWMOVIOGPEEOFYDSHHXWDIDILDRGTDREESCMP");
    msg.seq = 15239U;
    msg.sys_dst.assign("TIRTSMMTZDHJUXV");
    msg.flags = 34U;
    const signed char tmp_msg_0[] = {109, -54, -66, 75, -49, 64, 16, -64, 115, -72, -3, 74, 88, 108, -102, -70, 54, -59, 24, 51, -81, -66, -8, -61, 18, 50, 35, -78, -104, -102, 62, 34, 29, -81, 62, -39, 124, -39, 113, -54, -93, -30, -8, -87, -90, 114, 79, -38, 12, -41, 58, -51, 39, 53, 8, 54, -43, -32, 93, -48, 22, -35, 101, 23, -13, 5, 59, 1, 32, 99, -96, 43, -4, -11, 46, -97, -99, 22, 2, -37, -11, -61, 66, 66, 32, 123, 1, -80, -124, 117, -12, -48, 118, 32, 0, -106, 30, -56, -1, -1, 5, 61, 2, -72, -78, -95, -115, 3, 26, 6, 85, 60, -32, -90, -115, 88, -93, -104, -85, -69, -5, 97, -37, -20, -21, 87, 74, -95, 73, -26, -35, 71, -14, 123, 115, 87, -107, -61, 72, -21, 51, 27, -31, 121, 36, 72, -122, -6, -9, -14, -16, 105, 35, -20, 49, -47, 84, 32, -101, -104, 7, 1, 30, -60, 93, -50, -28, -80, -15, -8, 107, -51, -102, 9, -29, 25, 73, 65, -2, -98, -11, 47, -69, 90, -38, -74, -112, -96, -110, 28, -84, 39, -62, -123, -115, -33, -109, -70};
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
    msg.setTimeStamp(0.0335273933642789);
    msg.setSource(59098U);
    msg.setSourceEntity(90U);
    msg.setDestination(5916U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.5318450553749745;
    msg.lon = 0.06696819904606466;
    msg.depth = 0.1851234456601797;
    msg.sentence.assign("TMFFORHZBHDRAJJHIGSMZNQUUDLSUZLUHKMSJMYYSTWABXAQVQNAT");
    msg.txtime = 0.18183595338094927;
    msg.modem_type.assign("MHUJKAYSGJFLXTCTAALEZYUDANNBKJKTOWYHOQCDZS");
    msg.sys_src.assign("PVVEXJBEXFYAUMSYDYHTOLWYIIBGIENPAAEAUGGKHRWCNCDKWEPJ");
    msg.seq = 9688U;
    msg.sys_dst.assign("AMOLCGXORVRJUNUOIBRBITCVVOSSDSHMXPUUHLZQACPBWMNQDWFZLLNSHIKWRCAUGIJFNOTBOYPTNMKULJSWIGKMHOQWTDAIYYDDIDTESBJFEQALPBIKVTQPEZQIKAFYZNJTSZHAFVKPEWXDFPULYAQADHMH");
    msg.flags = 171U;
    const signed char tmp_msg_0[] = {64, -11, 126, -16, 52, 38, 91, 24, 34, 30, 113, -25, 71, 71, -121, 42, -55, -64, 10, -118, 66, -127, 81, 113, -94, 106, -104, 123, 13, -47, 23, -36, 86, 112, -120, 11, 41, -107, -105, 60, -104, 12, 56, 62, 84, -1, -52, -107, -77, -85, 60, -50, -45, -37};
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
    msg.setTimeStamp(0.07857109787938454);
    msg.setSource(57324U);
    msg.setSourceEntity(146U);
    msg.setDestination(61476U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.7887935926851921;
    msg.lon = 0.48702844989422334;
    msg.depth = 0.628756231689535;
    msg.sentence.assign("BMPSZPXVMNVVSROPRWEWGWVOJWRTXYRMJTIPNYLCCWCLCAXEIKFADBXGPJXSKQCAJCVVHMUQZNQJLHBRSWTFSNGRHLURIKAVAMOEWCPJIENGHXFDOWQFFDNMBGRDUUCTXFIYEEORLNVBLEUOAZMSNXQUYZEQJYTJGTBEKDIHOLDIAQHDKGFSJKGOZHKYFLZKDOFXXBLEINHHKHMQBVIYDPFUWGWNMSM");
    msg.txtime = 0.596634943113655;
    msg.modem_type.assign("PTZIXABYBSVFCRBKBVYXZLGKYWPLAEPVFONENTKXWLHCPXIIADDBUFORMSHDKZGGOWVFJZYLTJMXAKMMATCNOWORLQJAQEUAQMGREGLCDFARCKEPNIJQHTBIQSFSDYHWNPRTHIYNVXHZQBEQBUFRSWDJGZLKOLZCDF");
    msg.sys_src.assign("FOCDAYEQDPMWILJAOBYKHIRFPNIKRFGHLNDPYKTRNVPMSVCHSAVTQTXOEYOTUALNEBJULLKVXWQWEPIZRIHNLDHUAYZTMINBZEHOJTFESZZEEWUBJJXRSGJBCBJXKDAOLQDTWSPITSCBMWLACGZHMQXMSHMDMXMFCQZSWHWSQVDBJWRAOTQAGQUDKYKAWOZUJCPOVPKGDYNISUGROFVEVXZKNRXC");
    msg.seq = 61998U;
    msg.sys_dst.assign("MTCKFMZZXIJPGMVOELTRTKAQYZKBMGKFIYDJUJVPQOVRHMFXSUELAIAWOUUAHLZZKRDWBURSMWWCSVZGLDBBHEWYMLCRHGPLFHYEVGORIGSIHSNJEINCWSGDZRDFWY");
    msg.flags = 9U;
    const signed char tmp_msg_0[] = {30, 85, -59, -127, -60, 81, 81, 101, 46, 98, 102, 55, -32, 67, -38, -39, 45, -22, -28, -2, 119, -121, -49, -41, -85, -16, 72, -29, 55, -17, 108, -82, -63, -125, 82, -23, 85, -31, 86, -55, -37, 47, 56, -8, -108, -48, -59, -3, 75, 110, -69, 39, -10, -76, 11, 59, 40, 122, -96, -5, 7, -27, 84, -30, -81, 109, 92, -128, 66, -104, 101, 23, 110, 96, 77, 116, -8, -86, -7, 52, -56, -68, 88, 1, -45, 75, -48, -9, -13, 47, -53, 112, 52, 109, -6, -53, 79, 35, 114, -64, 68, -87, -99, -98, 115, -42, -48, 122, -11, -42, 61, -4, 116, 125, -101, -91, 30, -33, 70, 23, 51, -123, -62, 118, -77, -70, -53, 2, -127, 117, 99, 73, -36, -39, 3, -90, -117, -87, -24, -36, 40, -59, -17, 90, 41, -36, -58, 95, -104, 19, -75, 70, -34, 40, 20, -6, 15, -79, -81, -61, -43, -15, -67, -114, 4, 44, 13, -38, -64, 17, -94, 14, 105, 117, -65, -128, -61, -70, -110, 45, 2, -100, 77, 95, -90, -82, -34, -34, 125, -24, -37, -16, 125, -16, 72, -86, -121, -45, 72, 85, 41, 57, -33, -99, 58, 12, 70, -97, -61, 9, 118};
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
    msg.setTimeStamp(0.36064898061935247);
    msg.setSource(29763U);
    msg.setSourceEntity(170U);
    msg.setDestination(14323U);
    msg.setDestinationEntity(190U);
    msg.op = 97U;
    msg.system.assign("DHDSDZSFURHWNGMCETXPFRSIDHPNQJKROKZAJAQXWJOPTJQIJEBXYMNKQQAKHCOLHAEWMRBOZBYCEJFXTFYBUWGRBQDEOYOWDFMTNYH");
    msg.range = 0.9947867217923712;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 182U;
    tmp_msg_0.zoom = 217U;
    tmp_msg_0.action = 63U;
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
    msg.setTimeStamp(0.9569225289375488);
    msg.setSource(392U);
    msg.setSourceEntity(205U);
    msg.setDestination(34106U);
    msg.setDestinationEntity(246U);
    msg.op = 156U;
    msg.system.assign("WJWZDRUCNUYCXNVSTURYWGFHOOCBSBXUQAJCXKKBFXRMGNG");
    msg.range = 0.3888597379960861;
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.5850662678626493;
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
    msg.setTimeStamp(0.5648341932508453);
    msg.setSource(55752U);
    msg.setSourceEntity(216U);
    msg.setDestination(32826U);
    msg.setDestinationEntity(125U);
    msg.op = 72U;
    msg.system.assign("YBEDMVJVPEJOMQHPAXGMOBRVTZDZEWLFPKXOLFYSHCDVOFAYTMIRGJTVLLJYITSGOKUCAGMSDMBUUCICBFXAFQGEGGKCITFUPSXQBHWYOPZVBZZRSWIIAKMJTPFBMQQHJYNJLESPXSCNFBSVTWNEWU");
    msg.range = 0.5478735364825259;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 99U;
    tmp_msg_0.frequency = 1273768357U;
    tmp_msg_0.min_range = 13681U;
    tmp_msg_0.max_range = 34106U;
    tmp_msg_0.bits_per_point = 85U;
    tmp_msg_0.scale_factor = 0.07778731035136832;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.239893667216599;
    tmp_tmp_msg_0_0.beam_height = 0.3722527726635295;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    const signed char tmp_tmp_msg_0_1[] = {-47, -108, 95, -17, -28, 89, 38, 88, -35, -10, -38, -100, -116, -63, -30, 97, 3, -103, 22, -123, -57, 109, -41, -32, -52, -114, 52, 102, -26, -22, 86, 45, -102, 69, 52, -39, -40, -100, 0, 48, -84, -9, -111, 67, 57, 113, -34, -43, -58, 39, 47, 71, 21, 30, 124, -125, -125, 27, 59, 32, -122, 77, 42, -25, 106, 111, -101, -81, -82};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.05165827526123845);
    msg.setSource(42338U);
    msg.setSourceEntity(65U);
    msg.setDestination(1561U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.5934578314039162);
    msg.setSource(56099U);
    msg.setSourceEntity(243U);
    msg.setDestination(27162U);
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
    msg.setTimeStamp(0.4474036803027557);
    msg.setSource(7578U);
    msg.setSourceEntity(233U);
    msg.setDestination(64109U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.9158239601459306);
    msg.setSource(60306U);
    msg.setSourceEntity(112U);
    msg.setDestination(45627U);
    msg.setDestinationEntity(212U);
    msg.list.assign("SLQUHSPTFCAGDOEQSBSLUJBYAKRHGVQCSTHPFWSBAUNXNOGYZIMQWRVCSFETEOKBZNUYAADNBUKGJIQNNUMEDSUKXOKZLPUEYMJWGWKBIZLQBVOOWTAFJCIKTIHWNTOXKXLMMSWYDBIIJCARGDVCEYDGUXDHVYXRYOCDFVQUVETZKDJNZEFTPVEWLAJJJIHEDBNNQHLIOZLGPAVQLQIFPPWAPCLYRR");

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
    msg.setTimeStamp(0.6670065890107056);
    msg.setSource(38045U);
    msg.setSourceEntity(114U);
    msg.setDestination(20731U);
    msg.setDestinationEntity(92U);
    msg.list.assign("NAYSDOTAKDTDCAUHSTCOFWXULNRGHVAIWMOXCTBBQTIYUFRXEGGFTIHUSCUJBEQFGYVNFLXCIDIKJ");

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
    msg.setTimeStamp(0.789230739176581);
    msg.setSource(35860U);
    msg.setSourceEntity(107U);
    msg.setDestination(7222U);
    msg.setDestinationEntity(209U);
    msg.list.assign("COSPBTCRUQQRVPWYYOMGMHEBMJBKETBPBIHHNIZWXGTGXJQNHXLDGAWOQMZYCSGEDEBHZNYUMNETJQCLVQYFZWWVDXKVFUKFJKTHIHZFEGTUXXMKQVONDIVBKWMJSMRYGYWKRDPPTZNLIFNMHRCWVSI");

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
    msg.setTimeStamp(0.9705098136204464);
    msg.setSource(64334U);
    msg.setSourceEntity(113U);
    msg.setDestination(58343U);
    msg.setDestinationEntity(195U);
    msg.peer.assign("QHEKGTROOUQQEUXWGSQNTXMJZBYHLQLHJETAFAAMRVQTRXXNNMPXENTAGZEKPMAIRLPYTKWUHRDOSOCDIJFZFFZFBCMJACRIEZUPHDYKLSZAULPYLHCVWQDTJVJWLDIICYMYWNCQGZZBOUFVNUXIUEXWVHUGONBMVKDHPHEKMDCVPSWNNPSVSBXGBAALKFUQIJGWZJRYBCKLCARYIYBJXXSTIWQDYSVFOPRKKDOENLOZCOMSVPBJMGFIEDRTH");
    msg.rssi = 0.9592509366967216;
    msg.integrity = 9433U;

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
    msg.setTimeStamp(0.2257067076616962);
    msg.setSource(37484U);
    msg.setSourceEntity(245U);
    msg.setDestination(59335U);
    msg.setDestinationEntity(13U);
    msg.peer.assign("YLRNVOJIIXATPYMNADKESJDVGEATZRFYTUPIVCLZFFFDPHZKLJQEGLROHBWBELHSPYJBCQKBINWTFJSBSHGSMFNUCHMURPJHWIFZDPQDXKTXBBUCUPRCYTVZEOVFMGAOJNXKXYQEBDKMRHLQZUMQARZDSWONHLKDWMQNUFHTAPVXGXPCXWIZISAIAAIQRKYWXNC");
    msg.rssi = 0.6631151173758397;
    msg.integrity = 32093U;

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
    msg.setTimeStamp(0.8189919938987046);
    msg.setSource(40845U);
    msg.setSourceEntity(8U);
    msg.setDestination(9835U);
    msg.setDestinationEntity(58U);
    msg.peer.assign("KHGRLYYHFDNEVDJOYZVQIMMRPHYERFQMGZQIHAOCIQDEZLHGAYBXKNRZXQGCPPCSURMUEUNLFVRANSEOROGWDKBPJFUBZOHSTVXHWGSKDBGKEVIXRITMBOCCZXWXDHKVBSNOZTWGNNVMEWQCXLPJCMITFUBQBFJMBIDGTGTTSJ");
    msg.rssi = 0.7564171086973577;
    msg.integrity = 36569U;

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
    msg.setTimeStamp(0.8075814641710677);
    msg.setSource(36571U);
    msg.setSourceEntity(154U);
    msg.setDestination(52664U);
    msg.setDestinationEntity(16U);
    msg.req_id = 10112U;
    msg.destination.assign("GSIHAJLPLTSNFXOWAVVCIDHCZUCUNQEEPBTGPGIFFWCUSKGCHFTWGHKWEDSJZTAPQJOQRKAPDHBMKNWNGFBFNDPJCRUUXEYNIDTRJAXOBUZTIIMAXCOBMHLWPXFREEFMUWMBRIEQYJRA");
    msg.timeout = 0.8629496722558667;
    msg.range = 0.7258677958067888;
    msg.type = 131U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 57985U;
    tmp_msg_0.lat = 0.1133297476230154;
    tmp_msg_0.lon = 0.9268082711944702;
    tmp_msg_0.z = 0.35222793616353354;
    tmp_msg_0.z_units = 81U;
    tmp_msg_0.speed = 0.6555824238495824;
    tmp_msg_0.speed_units = 228U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.729308524894448;
    tmp_tmp_msg_0_0.y = 0.2184733194625783;
    tmp_tmp_msg_0_0.z = 0.12902230663555148;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("YABKUGTGTVFDLLCSKFPSVIPTTAKBVNHJRHSLIZOETBNKHRFWRLYQJNYSUELTOZYAOGWKEMKVQSFYYMMIORWFJAXWEHMWHQPHWIDSUKEZGCZWJLCOCMQPPADUQWXGREIYAGYOFPAPPFXJUEBVTZDHZCXJLG");
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
    msg.setTimeStamp(0.9132308052136527);
    msg.setSource(61810U);
    msg.setSourceEntity(193U);
    msg.setDestination(1878U);
    msg.setDestinationEntity(39U);
    msg.req_id = 37516U;
    msg.destination.assign("KTCJYQSRNGVOG");
    msg.timeout = 0.4959811805086405;
    msg.range = 0.25455204357918515;
    msg.type = 143U;
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -10785;
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
    msg.setTimeStamp(0.3550236457019458);
    msg.setSource(61544U);
    msg.setSourceEntity(47U);
    msg.setDestination(55001U);
    msg.setDestinationEntity(47U);
    msg.req_id = 18984U;
    msg.destination.assign("TSDZMUBSEVHRYXSXGFGPDXFJUBTNVRJZNZFBGVTHEKNMSBDNCXWUCIDWCLPEHPQVHRPMLYFWFTGSWQNODYJGKICDOUTJUJUEXOEIHHGQNKNWTJFIQRMQTEQRUEUFBFSEMRCPYMKZOUMZGVAHBAQNIVQWVLALBYJKZOJLEVVPCRPWSGIADCZCXDMTORALKDPPKEMKZYSIYLYSLBDHQRAOPGZXNAKY");
    msg.timeout = 0.9542355765819867;
    msg.range = 0.12506352893442318;
    msg.type = 133U;
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.5184173062573068;
    tmp_msg_0.y = 0.38968884941928383;
    tmp_msg_0.z = 0.7456130070517172;
    tmp_msg_0.phi = 0.9432794508313026;
    tmp_msg_0.theta = 0.04057533125958046;
    tmp_msg_0.psi = 0.4167377688440117;
    tmp_msg_0.p = 0.3664704837433881;
    tmp_msg_0.q = 0.7074821719816538;
    tmp_msg_0.r = 0.16353665783605997;
    tmp_msg_0.u = 0.5884063886572287;
    tmp_msg_0.v = 0.4375100038929173;
    tmp_msg_0.w = 0.8027298098645256;
    tmp_msg_0.bias_psi = 0.9691115165051253;
    tmp_msg_0.bias_r = 0.9965155295482138;
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
    msg.setTimeStamp(0.06711983404563038);
    msg.setSource(44594U);
    msg.setSourceEntity(173U);
    msg.setDestination(16846U);
    msg.setDestinationEntity(132U);
    msg.req_id = 65092U;
    msg.type = 222U;
    msg.status = 54U;
    msg.info.assign("UBIVAKDJEUDZICEEUZKPFYVNNOOEELFYHDTXWFAJJGHFMPIUIQFYSBBZASCNZWRWRNTTKXDSMHFUNXQFPTPJVWQYLL");
    msg.range = 0.7183914107064152;

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
    msg.setTimeStamp(0.9885969900327285);
    msg.setSource(15550U);
    msg.setSourceEntity(118U);
    msg.setDestination(41344U);
    msg.setDestinationEntity(195U);
    msg.req_id = 31428U;
    msg.type = 61U;
    msg.status = 208U;
    msg.info.assign("QSOPHDPXWQKBURGBPBZRXVYDYEFWOPYSSNVJTIUKTHXCYCPHPTTGBZGBDZPOXBTIDYWMUIXDVGOHPUAVSUDJNOOBKUGRLGTVGLGLUFSAWVLXMESOKMKSZMTYXDJVCRAXMTACWMUMDMHIPLITBIJVVDNRJGYDAJZWQNBHEFNAHYGQCUNQLFNEHRWRSZO");
    msg.range = 0.9710892415661591;

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
    msg.setTimeStamp(0.45688168215407143);
    msg.setSource(55981U);
    msg.setSourceEntity(185U);
    msg.setDestination(33976U);
    msg.setDestinationEntity(181U);
    msg.req_id = 26191U;
    msg.type = 174U;
    msg.status = 87U;
    msg.info.assign("AFECZMLQPQVBEIGNSXFHSSBYYEPFNEJXWGWWMOGXYLXGQWXTAUJUCMJZWPEVLSSLACQONRYJRIJFIQZOWDYTQZZQOFKDXDDORZHRABSWPAPVLBKWHVRTMHOHIEIMFNUHAGRGCLXLPFTPNYJBYVBZSYZAMVAMSCDUTHRRWTDWVIIIXORULLODUVFFDDSTYOKOVJCQUNESZKTGXBDCHAENJUCUKQAKPRUBZHBKJCPBTIKEEJMVKNGLGNCHNM");
    msg.range = 0.450248541345046;

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
    msg.setTimeStamp(0.541272383335286);
    msg.setSource(28521U);
    msg.setSourceEntity(74U);
    msg.setDestination(48650U);
    msg.setDestinationEntity(133U);
    msg.system.assign("QRUGDNMRSDOQCPKYKLVETTLCVVPVZSEPNRDGQ");
    msg.op = 200U;

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
    msg.setTimeStamp(0.4133025632087304);
    msg.setSource(1817U);
    msg.setSourceEntity(114U);
    msg.setDestination(41827U);
    msg.setDestinationEntity(182U);
    msg.system.assign("IBPPIKUYDBDNIOLZDEBAQZPTEXZXXSFKFIOFMYCIATRLUSNRJAKNXYCIPDUGJBHDYKVEYUOSBGKRMOKELPXWMQUMUJFGFSKETUAHXYRWMQMHNOWZAPXQNUZAVTDSTBVQRKMZIAJD");
    msg.op = 246U;

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
    msg.setTimeStamp(0.9629386978206252);
    msg.setSource(17466U);
    msg.setSourceEntity(150U);
    msg.setDestination(40608U);
    msg.setDestinationEntity(205U);
    msg.system.assign("RFDQDJOFPAQHGKQBICNYILZTIJ");
    msg.op = 156U;

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
    msg.setTimeStamp(0.727189564217735);
    msg.setSource(56549U);
    msg.setSourceEntity(160U);
    msg.setDestination(37933U);
    msg.setDestinationEntity(170U);
    msg.value = -3138;

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
    msg.setTimeStamp(0.5609848406421528);
    msg.setSource(40336U);
    msg.setSourceEntity(34U);
    msg.setDestination(26278U);
    msg.setDestinationEntity(227U);
    msg.value = 9106;

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
    msg.setTimeStamp(0.501965498283289);
    msg.setSource(46039U);
    msg.setSourceEntity(75U);
    msg.setDestination(52560U);
    msg.setDestinationEntity(54U);
    msg.value = 29525;

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
    msg.setTimeStamp(0.2057892293565171);
    msg.setSource(20790U);
    msg.setSourceEntity(200U);
    msg.setDestination(6890U);
    msg.setDestinationEntity(19U);
    msg.value = 0.688162094972151;

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
    msg.setTimeStamp(0.32931573104423173);
    msg.setSource(20766U);
    msg.setSourceEntity(120U);
    msg.setDestination(10102U);
    msg.setDestinationEntity(142U);
    msg.value = 0.9856637225122495;

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
    msg.setTimeStamp(0.9692855826171811);
    msg.setSource(10071U);
    msg.setSourceEntity(16U);
    msg.setDestination(19554U);
    msg.setDestinationEntity(0U);
    msg.value = 0.315078234562008;

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
    msg.setTimeStamp(0.06525267337583096);
    msg.setSource(14785U);
    msg.setSourceEntity(169U);
    msg.setDestination(63087U);
    msg.setDestinationEntity(194U);
    msg.value = 0.8086258068475276;

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
    msg.setTimeStamp(0.22753426626250528);
    msg.setSource(31425U);
    msg.setSourceEntity(147U);
    msg.setDestination(16129U);
    msg.setDestinationEntity(112U);
    msg.value = 0.8917779644565006;

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
    msg.setTimeStamp(0.002757532960074416);
    msg.setSource(27525U);
    msg.setSourceEntity(21U);
    msg.setDestination(23857U);
    msg.setDestinationEntity(134U);
    msg.value = 0.8145341507668917;

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
    msg.setTimeStamp(0.33825141446898355);
    msg.setSource(9556U);
    msg.setSourceEntity(254U);
    msg.setDestination(2374U);
    msg.setDestinationEntity(226U);
    msg.validity = 18022U;
    msg.type = 79U;
    msg.utc_year = 22489U;
    msg.utc_month = 236U;
    msg.utc_day = 244U;
    msg.utc_time = 0.15399871020307176;
    msg.lat = 0.6565022634314778;
    msg.lon = 0.392261904863623;
    msg.height = 0.024980241971538364;
    msg.satellites = 31U;
    msg.cog = 0.9556395959919892;
    msg.sog = 0.9933160215514545;
    msg.hdop = 0.09173314418006462;
    msg.vdop = 0.0030611040470955864;
    msg.hacc = 0.958819907095613;
    msg.vacc = 0.8117370281131734;

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
    msg.setTimeStamp(0.642840609643167);
    msg.setSource(1171U);
    msg.setSourceEntity(194U);
    msg.setDestination(57124U);
    msg.setDestinationEntity(157U);
    msg.validity = 31461U;
    msg.type = 192U;
    msg.utc_year = 56117U;
    msg.utc_month = 51U;
    msg.utc_day = 15U;
    msg.utc_time = 0.7492049024280402;
    msg.lat = 0.780640567821074;
    msg.lon = 0.5464495125835034;
    msg.height = 0.9064668876450308;
    msg.satellites = 66U;
    msg.cog = 0.254046787114783;
    msg.sog = 0.01357388445163965;
    msg.hdop = 0.6320316579247438;
    msg.vdop = 0.8509953052635434;
    msg.hacc = 0.5520672877246252;
    msg.vacc = 0.06572422719346993;

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
    msg.setTimeStamp(0.5195626896602138);
    msg.setSource(3263U);
    msg.setSourceEntity(197U);
    msg.setDestination(38299U);
    msg.setDestinationEntity(206U);
    msg.validity = 38645U;
    msg.type = 156U;
    msg.utc_year = 12845U;
    msg.utc_month = 42U;
    msg.utc_day = 18U;
    msg.utc_time = 0.3447397458244773;
    msg.lat = 0.2407604677328542;
    msg.lon = 0.6165276935327413;
    msg.height = 0.2641271082616963;
    msg.satellites = 98U;
    msg.cog = 0.7593508768251663;
    msg.sog = 0.6505827110554058;
    msg.hdop = 0.8931880051276465;
    msg.vdop = 0.6661513510788685;
    msg.hacc = 0.8860879509969561;
    msg.vacc = 0.33430246290466703;

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
    msg.setTimeStamp(0.6990596564695013);
    msg.setSource(63516U);
    msg.setSourceEntity(212U);
    msg.setDestination(32063U);
    msg.setDestinationEntity(249U);
    msg.time = 0.6305839639007139;
    msg.phi = 0.5086406917885957;
    msg.theta = 0.7966877433352706;
    msg.psi = 0.6687153893487079;
    msg.psi_magnetic = 0.5597031924194056;

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
    msg.setTimeStamp(0.599218158270283);
    msg.setSource(24083U);
    msg.setSourceEntity(202U);
    msg.setDestination(25360U);
    msg.setDestinationEntity(134U);
    msg.time = 0.5098569484013971;
    msg.phi = 0.7818863959099384;
    msg.theta = 0.4919848198004909;
    msg.psi = 0.3163830548992419;
    msg.psi_magnetic = 0.1706295620639955;

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
    msg.setTimeStamp(0.08679878755437587);
    msg.setSource(57640U);
    msg.setSourceEntity(152U);
    msg.setDestination(64617U);
    msg.setDestinationEntity(35U);
    msg.time = 0.927866596715633;
    msg.phi = 0.7097054925209104;
    msg.theta = 0.824243928215881;
    msg.psi = 0.3059217960470042;
    msg.psi_magnetic = 0.8592130837238428;

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
    msg.setTimeStamp(0.8660876143632017);
    msg.setSource(2838U);
    msg.setSourceEntity(88U);
    msg.setDestination(44646U);
    msg.setDestinationEntity(39U);
    msg.time = 0.7053416618078487;
    msg.x = 0.488298526144338;
    msg.y = 0.10153517312379379;
    msg.z = 0.4626040051407486;
    msg.timestep = 0.5050968356330312;

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
    msg.setTimeStamp(0.8906693965979685);
    msg.setSource(62979U);
    msg.setSourceEntity(69U);
    msg.setDestination(53973U);
    msg.setDestinationEntity(204U);
    msg.time = 0.1512171982266134;
    msg.x = 0.22343630426669847;
    msg.y = 0.017515332118475224;
    msg.z = 0.39853508757114275;
    msg.timestep = 0.48617220690934126;

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
    msg.setTimeStamp(0.5368141121454512);
    msg.setSource(48121U);
    msg.setSourceEntity(143U);
    msg.setDestination(17188U);
    msg.setDestinationEntity(176U);
    msg.time = 0.973115082337468;
    msg.x = 0.4619883496068933;
    msg.y = 0.7611536495179396;
    msg.z = 0.17435993648385406;
    msg.timestep = 0.2526586102748034;

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
    msg.setTimeStamp(0.5381629631454636);
    msg.setSource(60162U);
    msg.setSourceEntity(20U);
    msg.setDestination(18732U);
    msg.setDestinationEntity(57U);
    msg.time = 0.8391913977685768;
    msg.x = 0.7189949484453367;
    msg.y = 0.8374994698898675;
    msg.z = 0.7263199414549163;

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
    msg.setTimeStamp(0.6586501282315848);
    msg.setSource(13086U);
    msg.setSourceEntity(155U);
    msg.setDestination(49299U);
    msg.setDestinationEntity(185U);
    msg.time = 0.1876548400105148;
    msg.x = 0.33813948187120946;
    msg.y = 0.29424219213222413;
    msg.z = 0.1223330933114466;

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
    msg.setTimeStamp(0.7888698940855157);
    msg.setSource(7273U);
    msg.setSourceEntity(7U);
    msg.setDestination(29847U);
    msg.setDestinationEntity(82U);
    msg.time = 0.06885049338653704;
    msg.x = 0.15304736615705605;
    msg.y = 0.8370336163311548;
    msg.z = 0.7742572359050648;

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
    msg.setTimeStamp(0.5861776494121056);
    msg.setSource(10941U);
    msg.setSourceEntity(187U);
    msg.setDestination(7422U);
    msg.setDestinationEntity(65U);
    msg.time = 0.14114986565832255;
    msg.x = 0.31743775367691907;
    msg.y = 0.1927069072024863;
    msg.z = 0.40061734156214956;

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
    msg.setTimeStamp(0.4709799281798116);
    msg.setSource(34294U);
    msg.setSourceEntity(75U);
    msg.setDestination(34216U);
    msg.setDestinationEntity(182U);
    msg.time = 0.5197998180413681;
    msg.x = 0.41009229119928536;
    msg.y = 0.25663902734626465;
    msg.z = 0.4653681645367437;

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
    msg.setTimeStamp(0.17907578429462756);
    msg.setSource(27003U);
    msg.setSourceEntity(34U);
    msg.setDestination(31629U);
    msg.setDestinationEntity(201U);
    msg.time = 0.4598302741827901;
    msg.x = 0.9546966344136143;
    msg.y = 0.11151673027960252;
    msg.z = 0.925756327934469;

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
    msg.setTimeStamp(0.6482759851809214);
    msg.setSource(486U);
    msg.setSourceEntity(70U);
    msg.setDestination(55009U);
    msg.setDestinationEntity(52U);
    msg.time = 0.1319749627996808;
    msg.x = 0.15707185783317934;
    msg.y = 0.15396754981891547;
    msg.z = 0.04838718018491739;

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
    msg.setTimeStamp(0.268909624273305);
    msg.setSource(7561U);
    msg.setSourceEntity(149U);
    msg.setDestination(22408U);
    msg.setDestinationEntity(217U);
    msg.time = 0.4878461809493616;
    msg.x = 0.5236666785258025;
    msg.y = 0.9493162870897517;
    msg.z = 0.426582888837457;

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
    msg.setTimeStamp(0.25720652301204494);
    msg.setSource(11603U);
    msg.setSourceEntity(106U);
    msg.setDestination(3881U);
    msg.setDestinationEntity(82U);
    msg.time = 0.15559830026026222;
    msg.x = 0.4948155298275124;
    msg.y = 0.6285733014853276;
    msg.z = 0.5065018054317804;

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
    msg.setTimeStamp(0.2915596275914484);
    msg.setSource(45564U);
    msg.setSourceEntity(195U);
    msg.setDestination(59583U);
    msg.setDestinationEntity(225U);
    msg.validity = 63U;
    msg.x = 0.5419709015006389;
    msg.y = 0.773880242004948;
    msg.z = 0.9827169720719989;

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
    msg.setTimeStamp(0.7504301338962318);
    msg.setSource(6857U);
    msg.setSourceEntity(220U);
    msg.setDestination(16152U);
    msg.setDestinationEntity(47U);
    msg.validity = 110U;
    msg.x = 0.28397207552142467;
    msg.y = 0.8746727500077033;
    msg.z = 0.19724040039473556;

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
    msg.setTimeStamp(0.411740190886028);
    msg.setSource(11171U);
    msg.setSourceEntity(81U);
    msg.setDestination(20442U);
    msg.setDestinationEntity(230U);
    msg.validity = 103U;
    msg.x = 0.5761539249663806;
    msg.y = 0.11556111848505757;
    msg.z = 0.9165896702569658;

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
    msg.setTimeStamp(0.016312018916269988);
    msg.setSource(33056U);
    msg.setSourceEntity(171U);
    msg.setDestination(41610U);
    msg.setDestinationEntity(204U);
    msg.validity = 7U;
    msg.x = 0.19954450364011111;
    msg.y = 0.1167872105026444;
    msg.z = 0.9102928544765168;

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
    msg.setTimeStamp(0.18763217716036684);
    msg.setSource(4974U);
    msg.setSourceEntity(87U);
    msg.setDestination(19428U);
    msg.setDestinationEntity(112U);
    msg.validity = 193U;
    msg.x = 0.5259435676743268;
    msg.y = 0.4556297372721686;
    msg.z = 0.2672888749753257;

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
    msg.setTimeStamp(0.29956197630509895);
    msg.setSource(36617U);
    msg.setSourceEntity(41U);
    msg.setDestination(35936U);
    msg.setDestinationEntity(201U);
    msg.validity = 19U;
    msg.x = 0.45590980837305095;
    msg.y = 0.517189657120116;
    msg.z = 0.35417647783595596;

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
    msg.setTimeStamp(0.785846805995576);
    msg.setSource(50033U);
    msg.setSourceEntity(14U);
    msg.setDestination(43834U);
    msg.setDestinationEntity(105U);
    msg.time = 0.3315080102157577;
    msg.x = 0.3503441692377399;
    msg.y = 0.6752078212520463;
    msg.z = 0.37031043593017865;

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
    msg.setTimeStamp(0.34729415075683345);
    msg.setSource(33364U);
    msg.setSourceEntity(206U);
    msg.setDestination(65125U);
    msg.setDestinationEntity(114U);
    msg.time = 0.5915334002938925;
    msg.x = 0.993624450677753;
    msg.y = 0.19130866204655017;
    msg.z = 0.230272440007242;

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
    msg.setTimeStamp(0.19010949375170272);
    msg.setSource(35629U);
    msg.setSourceEntity(184U);
    msg.setDestination(20312U);
    msg.setDestinationEntity(45U);
    msg.time = 0.18566326741196137;
    msg.x = 0.80468849003858;
    msg.y = 0.9690896055229685;
    msg.z = 0.9009630143590766;

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
    msg.setTimeStamp(0.12639497576198955);
    msg.setSource(13739U);
    msg.setSourceEntity(111U);
    msg.setDestination(43111U);
    msg.setDestinationEntity(233U);
    msg.validity = 248U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0036731758276934423;
    tmp_msg_0.y = 0.2609597638996457;
    tmp_msg_0.z = 0.4118890767381499;
    tmp_msg_0.phi = 0.8445245727825195;
    tmp_msg_0.theta = 0.10799011700665506;
    tmp_msg_0.psi = 0.6212482645263098;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.44066590945786777;

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
    msg.setTimeStamp(0.6523575160506966);
    msg.setSource(53508U);
    msg.setSourceEntity(173U);
    msg.setDestination(11733U);
    msg.setDestinationEntity(155U);
    msg.validity = 163U;
    msg.value = 0.2945590865871214;

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
    msg.setTimeStamp(0.33256133466034277);
    msg.setSource(42396U);
    msg.setSourceEntity(196U);
    msg.setDestination(57371U);
    msg.setDestinationEntity(132U);
    msg.validity = 52U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.2165780138694695;
    tmp_msg_0.y = 0.9372706417692507;
    tmp_msg_0.z = 0.7927339645486464;
    tmp_msg_0.phi = 0.24072216285102144;
    tmp_msg_0.theta = 0.7219892518909268;
    tmp_msg_0.psi = 0.895527372618931;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.12322932670820685;

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
    msg.setTimeStamp(0.5103649494274052);
    msg.setSource(27536U);
    msg.setSourceEntity(205U);
    msg.setDestination(29618U);
    msg.setDestinationEntity(173U);
    msg.value = 0.36606639708341904;

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
    msg.setTimeStamp(0.5784397716988824);
    msg.setSource(13094U);
    msg.setSourceEntity(42U);
    msg.setDestination(13730U);
    msg.setDestinationEntity(162U);
    msg.value = 0.08688623820812913;

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
    msg.setTimeStamp(0.5919859336486605);
    msg.setSource(36249U);
    msg.setSourceEntity(96U);
    msg.setDestination(62566U);
    msg.setDestinationEntity(127U);
    msg.value = 0.2417755256428611;

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
    msg.setTimeStamp(0.6795773173516395);
    msg.setSource(44667U);
    msg.setSourceEntity(153U);
    msg.setDestination(44734U);
    msg.setDestinationEntity(231U);
    msg.value = 0.29357677163303786;

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
    msg.setTimeStamp(0.38305742215751915);
    msg.setSource(47399U);
    msg.setSourceEntity(155U);
    msg.setDestination(25548U);
    msg.setDestinationEntity(233U);
    msg.value = 0.2629368425201226;

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
    msg.setTimeStamp(0.039523233696887705);
    msg.setSource(26188U);
    msg.setSourceEntity(48U);
    msg.setDestination(65284U);
    msg.setDestinationEntity(107U);
    msg.value = 0.8048120537231827;

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
    msg.setTimeStamp(0.9216894289006771);
    msg.setSource(477U);
    msg.setSourceEntity(98U);
    msg.setDestination(58627U);
    msg.setDestinationEntity(79U);
    msg.value = 0.4591023044327608;

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
    msg.setTimeStamp(0.7813138690078775);
    msg.setSource(19260U);
    msg.setSourceEntity(187U);
    msg.setDestination(60189U);
    msg.setDestinationEntity(178U);
    msg.value = 0.09087654673460732;

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
    msg.setTimeStamp(0.7828887775152628);
    msg.setSource(25449U);
    msg.setSourceEntity(25U);
    msg.setDestination(61277U);
    msg.setDestinationEntity(23U);
    msg.value = 0.48926694028110396;

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
    msg.setTimeStamp(0.994766997752527);
    msg.setSource(39925U);
    msg.setSourceEntity(37U);
    msg.setDestination(12687U);
    msg.setDestinationEntity(18U);
    msg.value = 0.6331662521784635;

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
    msg.setTimeStamp(0.281221911365918);
    msg.setSource(10863U);
    msg.setSourceEntity(18U);
    msg.setDestination(55309U);
    msg.setDestinationEntity(32U);
    msg.value = 0.10976501535894645;

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
    msg.setTimeStamp(0.5114514394111503);
    msg.setSource(55637U);
    msg.setSourceEntity(204U);
    msg.setDestination(13560U);
    msg.setDestinationEntity(128U);
    msg.value = 0.8950268426541447;

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
    msg.setTimeStamp(0.692871938817414);
    msg.setSource(2189U);
    msg.setSourceEntity(68U);
    msg.setDestination(43651U);
    msg.setDestinationEntity(47U);
    msg.value = 0.04440227143872788;

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
    msg.setTimeStamp(0.8652615222567087);
    msg.setSource(18576U);
    msg.setSourceEntity(123U);
    msg.setDestination(47498U);
    msg.setDestinationEntity(78U);
    msg.value = 0.08843016026303874;

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
    msg.setTimeStamp(0.03917612407566151);
    msg.setSource(11324U);
    msg.setSourceEntity(123U);
    msg.setDestination(9094U);
    msg.setDestinationEntity(219U);
    msg.value = 0.8364868394929575;

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
    msg.setTimeStamp(0.6743872688922796);
    msg.setSource(25259U);
    msg.setSourceEntity(153U);
    msg.setDestination(43575U);
    msg.setDestinationEntity(13U);
    msg.value = 0.7053988443969758;

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
    msg.setTimeStamp(0.04372530952672571);
    msg.setSource(18365U);
    msg.setSourceEntity(93U);
    msg.setDestination(35501U);
    msg.setDestinationEntity(0U);
    msg.value = 0.628607540223037;

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
    msg.setTimeStamp(0.7692833468873534);
    msg.setSource(63099U);
    msg.setSourceEntity(55U);
    msg.setDestination(49506U);
    msg.setDestinationEntity(222U);
    msg.value = 0.7078791217437971;

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
    msg.setTimeStamp(0.034414099423656586);
    msg.setSource(33521U);
    msg.setSourceEntity(84U);
    msg.setDestination(6058U);
    msg.setDestinationEntity(226U);
    msg.value = 0.18099339344005283;

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
    msg.setTimeStamp(0.656275536738431);
    msg.setSource(39406U);
    msg.setSourceEntity(70U);
    msg.setDestination(32343U);
    msg.setDestinationEntity(225U);
    msg.value = 0.7615256697944217;

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
    msg.setTimeStamp(0.8929173552232293);
    msg.setSource(18788U);
    msg.setSourceEntity(70U);
    msg.setDestination(9379U);
    msg.setDestinationEntity(223U);
    msg.value = 0.624319325767236;

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
    msg.setTimeStamp(0.07879390947709564);
    msg.setSource(38972U);
    msg.setSourceEntity(26U);
    msg.setDestination(37505U);
    msg.setDestinationEntity(247U);
    msg.value = 0.7691947950675718;

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
    msg.setTimeStamp(0.24066866221179362);
    msg.setSource(55080U);
    msg.setSourceEntity(101U);
    msg.setDestination(6491U);
    msg.setDestinationEntity(27U);
    msg.value = 0.3692148726823289;

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
    msg.setTimeStamp(0.1007150825687898);
    msg.setSource(10920U);
    msg.setSourceEntity(201U);
    msg.setDestination(16244U);
    msg.setDestinationEntity(189U);
    msg.value = 0.3194907814725253;

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
    msg.setTimeStamp(0.39165244997289206);
    msg.setSource(30808U);
    msg.setSourceEntity(107U);
    msg.setDestination(34243U);
    msg.setDestinationEntity(53U);
    msg.direction = 0.7588926630457962;
    msg.speed = 0.5923234404885446;
    msg.turbulence = 0.29528530133677167;

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
    msg.setTimeStamp(0.37739887140931194);
    msg.setSource(4813U);
    msg.setSourceEntity(93U);
    msg.setDestination(33881U);
    msg.setDestinationEntity(178U);
    msg.direction = 0.11735030067377183;
    msg.speed = 0.5457587694886565;
    msg.turbulence = 0.6718963625632313;

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
    msg.setTimeStamp(0.427131016649566);
    msg.setSource(46173U);
    msg.setSourceEntity(91U);
    msg.setDestination(42012U);
    msg.setDestinationEntity(17U);
    msg.direction = 0.004371642150228006;
    msg.speed = 0.2507761996345774;
    msg.turbulence = 0.5470459091579931;

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
    msg.setTimeStamp(0.5885564881907435);
    msg.setSource(3928U);
    msg.setSourceEntity(158U);
    msg.setDestination(21615U);
    msg.setDestinationEntity(204U);
    msg.value = 0.44496089907881686;

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
    msg.setTimeStamp(0.784878334049523);
    msg.setSource(36850U);
    msg.setSourceEntity(146U);
    msg.setDestination(37003U);
    msg.setDestinationEntity(164U);
    msg.value = 0.8145700422707195;

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
    msg.setTimeStamp(0.7505911589866016);
    msg.setSource(61384U);
    msg.setSourceEntity(43U);
    msg.setDestination(1618U);
    msg.setDestinationEntity(89U);
    msg.value = 0.29835155612965225;

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
    msg.setTimeStamp(0.019782418225656295);
    msg.setSource(52459U);
    msg.setSourceEntity(110U);
    msg.setDestination(52781U);
    msg.setDestinationEntity(149U);
    msg.value.assign("ENFCAUMSHG");

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
    msg.setTimeStamp(0.0351966209940463);
    msg.setSource(29888U);
    msg.setSourceEntity(57U);
    msg.setDestination(51690U);
    msg.setDestinationEntity(216U);
    msg.value.assign("AJUCJKCMYENYASKWGSZDCEXZZOTFXRZELMAHKABIGGVNAPOVLKTZUOUSYZWZEDRFNFE");

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
    msg.setTimeStamp(0.8489807560003826);
    msg.setSource(43659U);
    msg.setSourceEntity(61U);
    msg.setDestination(10000U);
    msg.setDestinationEntity(245U);
    msg.value.assign("RBAJGKDXUVKXAMACEIGNDFIKMTRJZWCGILRGMHCVHCAPPXVUEZDWTDYDFJGDXGDTBQXVNWHEACQISBOUAVOQSXQRNTLNLMUZRZYOMGVJBHCSYIGLOYYURUDJBKENCSPYNZSPHWBWFHIZAFSTYSUNOAIWIG");

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
    msg.setTimeStamp(0.12026730676822606);
    msg.setSource(37371U);
    msg.setSourceEntity(137U);
    msg.setDestination(28229U);
    msg.setDestinationEntity(149U);
    const signed char tmp_msg_0[] = {-9, -95, -31, 5, -95, -71, 93, 110, 46, -30, -7, 108, -38, -111, 62, 102, 83, -51, 33, -54, 83, -55, 81, 80, -87, -68, -86, -72, 17, 119, 94, 111, 64, -45, -64, 103, -53, 42, 78, -87, 79, -61, 49, -97, 82, -9, -111, 61, 32, -48, -123, -111, 23, -7, -8, 103, -33, 117, -8, 123, 96, 119, -33, -65, 66, -116, -15, -15, 62, -124, -33, -17, 13, -96, 97, -25, -7, -48, -68, 22, 75, -41, -27, 105, 64, -21, -7, 72, 16, 40, 11, 54, 69, 5, -103, 87, -22, -2, 115, 104, 112, 50, 57, 19, 31, 86, -127, -118, -112, 10, -122, 21, -125, 118, -103, -108, 35, -21, -66, -77, 79, 15, -44, -25, 3, -73, 40, -110, -51, -9, 109, 64, 29, 76, -18, 48, -77, -72, 20, 113, -80, -99, 110};
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
    msg.setTimeStamp(0.41684794116563206);
    msg.setSource(10270U);
    msg.setSourceEntity(194U);
    msg.setDestination(37784U);
    msg.setDestinationEntity(10U);
    const signed char tmp_msg_0[] = {72, -41, 97, 115, 90, -119, 125, 81, 88, 50, -9, -15, 121, 0, -113, 14, 99, 7, -18, -60, -106, -14, 114, -86, -66, -82, 86, -124, -78, -9, -106, 89, -13, 91, 88, -73, 105, 74, 77, -116, -7, 3, -95, 109, 69, 48, 56, -59, 126, 55, -69, 67, -23, -45, 47, 66, -3, 86, 63, 38, 101, -87, -99, -124, 97, 60, 64, 124, 106, -67, 31, 1, 122, 110, 26, -63, -119, 65, 11, -67, 56, -35, 121, 112, -118, 115, 77, -45, -119, 64, 83, 68, 50, 24, 35, -98, -7, 87, -13, 58, -100, -107, 69, 109, -117, -124, -32, -39, 13, -104, 49, 35, 124, -93, -64, 43, 81, 6, 80, -95, -75, -2, -32, -25, -3, 37, -102, 99, 61, -55, -66, -89, 95, 63, 110, 59, 69, 60, 124, -118, -77, 118, -43, -112, -109, 90, 32, -105, -32, 71, -49, -33, -43, -30, 86, -43, -54, -41, 62, -25, 80, -117, 113, -82, -44, 92, 8, 40, -109, -72, 63, 64, 85, -5, -114, -91, 77, -102, 2, -91, -17, 7, -108, 60, 110, -11, 50, -68, -107, 79, 69, 73, 8, 45, -17, 64, -94, -18, -84, -30, 39, -100, -45, -93, 82, -80, -55, 70, 50, 124, -114, -91, 74, -105, -119, -68, -105, -10, 99, 69, 40, -116, 125, 115, 107, 33, -99, 26, 41, 69, 8, -75, 114, -48};
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
    msg.setTimeStamp(0.9196780016772896);
    msg.setSource(47427U);
    msg.setSourceEntity(103U);
    msg.setDestination(10479U);
    msg.setDestinationEntity(158U);
    const signed char tmp_msg_0[] = {33, 59, -107, -19, -46, 86, -69, 30, -5, -118, 89, -94, -15, -15, -117, -52, 124, -68, -39, -20, -74, -116, 81, -36, 107, 56, 72, 118, 92, -92, -67, -75, -11, -99, -91, -45, 98, 96, 7, 38, 59, 30, -102, 74, -123, 6, -14, -123, -78, -41, 87, -26, -111, 84, -103, -123, -61, -27, 119, 56, 84, 40, 111, 88, -28, -101, 41, 77, -78, 68, -22, 122, -35, -125, 111, -107, -114, 75, -115, -32, 81, 101, 80, 61, 36, -93, -21, 7, -83, -119, 75, 5, -83, 14, -65, -41, 18, 70, -76, 22, -123, 56, -29, -11, -66, 7, 126, 64, -96, 7, -13, -19, -109, -116, 114, -112, 20, 110, -104, -84, 22, 57, -94, -36, -103, -26, 123, -107, -25, 16, 38, 125, -7, -38, -49, -71, 88, 106, -125, 125};
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
    msg.setTimeStamp(0.0645947706530664);
    msg.setSource(418U);
    msg.setSourceEntity(120U);
    msg.setDestination(2450U);
    msg.setDestinationEntity(55U);
    msg.value = 0.47952868729875;

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
    msg.setTimeStamp(0.18153801609817155);
    msg.setSource(42369U);
    msg.setSourceEntity(124U);
    msg.setDestination(26392U);
    msg.setDestinationEntity(177U);
    msg.value = 0.9307873006590909;

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
    msg.setTimeStamp(0.6628329812494119);
    msg.setSource(25423U);
    msg.setSourceEntity(150U);
    msg.setDestination(45052U);
    msg.setDestinationEntity(100U);
    msg.value = 0.12894189019639235;

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
    msg.setTimeStamp(0.5659769046718242);
    msg.setSource(48263U);
    msg.setSourceEntity(184U);
    msg.setDestination(46779U);
    msg.setDestinationEntity(230U);
    msg.type = 42U;
    msg.frequency = 3293692187U;
    msg.min_range = 10926U;
    msg.max_range = 14931U;
    msg.bits_per_point = 63U;
    msg.scale_factor = 0.7352473423403718;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7054476003365168;
    tmp_msg_0.beam_height = 0.583947746408911;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-109, -124, -80, 114, -30, -84, 4, 73, 61, -5, 95};
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
    msg.setTimeStamp(0.4153705042084518);
    msg.setSource(61843U);
    msg.setSourceEntity(30U);
    msg.setDestination(40527U);
    msg.setDestinationEntity(23U);
    msg.type = 229U;
    msg.frequency = 3249433727U;
    msg.min_range = 56866U;
    msg.max_range = 58755U;
    msg.bits_per_point = 17U;
    msg.scale_factor = 0.4282299740444331;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.19960953269665982;
    tmp_msg_0.beam_height = 0.7803710832677124;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-50, 52, 51, -57, 15, -105, -85, -66, 6, 0, 33, -34, 43, 93, 104, -85, -73, -126, 2, -1, 26, -111, 25, -103, 24, -23, 41, -72, -20, -14, -45, 82, -84, -89, 96, -37, -44, 6, 81, 93, -77, -95, 0, 76, 25, -97, 0, 122, 20, -45, 71, 75, -113, 119, 2, 13, 94, 77, 79, -66, -91, -90, -6, 126, 126, -113, 85, -32, -62, 73, 114, 3, -100, -124, 9, 56, 58, 94, 19, 35, 3, 30, -86, -42, 82, -90, -104, 64, -89, -25, 75, 42, 69, 17, -98, -45, -94, -28, 101, 52, 61, -89, -97, 114, -30, -55};
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
    msg.setTimeStamp(0.08891276851276719);
    msg.setSource(47638U);
    msg.setSourceEntity(127U);
    msg.setDestination(13299U);
    msg.setDestinationEntity(218U);
    msg.type = 194U;
    msg.frequency = 1275938275U;
    msg.min_range = 8134U;
    msg.max_range = 58581U;
    msg.bits_per_point = 243U;
    msg.scale_factor = 0.9349371541148507;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4386539544662902;
    tmp_msg_0.beam_height = 0.6403306459395359;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {53, -117, -63, 29, 115, 27, -118, 7, 99, 54, -80, 108, 95, -23, -108, 48, 15, -123, -100, 124, -81, 115, 50, 101, 42, 68, -118, 101, -47, 41, -98, 67, -49, 43, -53, -10, 66, 33, -23, 26, -36, 115, -74, -65, 96, -67, -108, -46, -12, -68, 33, -2, 102, -83, 103, 16, 0, -9, -21, -110, 32, 57, -19, -15, 77, 93, -52, -116, 15, 113, -102};
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
    msg.setTimeStamp(0.3700815564814669);
    msg.setSource(52353U);
    msg.setSourceEntity(175U);
    msg.setDestination(39941U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.29201426449338963);
    msg.setSource(26134U);
    msg.setSourceEntity(15U);
    msg.setDestination(24083U);
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
    msg.setTimeStamp(0.2857886631844929);
    msg.setSource(53605U);
    msg.setSourceEntity(132U);
    msg.setDestination(39593U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.033705199212922476);
    msg.setSource(31895U);
    msg.setSourceEntity(181U);
    msg.setDestination(38155U);
    msg.setDestinationEntity(246U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.5258067981745944);
    msg.setSource(60557U);
    msg.setSourceEntity(92U);
    msg.setDestination(44375U);
    msg.setDestinationEntity(212U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.9825456899912439);
    msg.setSource(26574U);
    msg.setSourceEntity(11U);
    msg.setDestination(23359U);
    msg.setDestinationEntity(113U);
    msg.op = 233U;

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
    msg.setTimeStamp(0.7291585880475611);
    msg.setSource(8986U);
    msg.setSourceEntity(106U);
    msg.setDestination(12777U);
    msg.setDestinationEntity(144U);
    msg.value = 0.6402283374329324;
    msg.confidence = 0.39788366818605647;
    msg.opmodes.assign("PZYSWNFXWLKAYFNMFVYUEEZOEOCBTYYYRPVDPMFGRUAQSGJMCLHPQWJKAXFAXVXRTXBLURYYAPQIWCKLLBNIRBJTPZHEGDHMMIKOSREIUJHQGCWOXPKBOWQCCHRFBUSIDBSMVPEZPFFQOJKNZLVDGAGTVMZKGLZLOEVSSRNDWZCDHJNGLOIHJYSHTUUDDIWHJMCTMXGPSAVRHKZMNTJCOFOICAYJTESXVWKNKXRTXFABNVQ");

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
    msg.setTimeStamp(0.28448419108409884);
    msg.setSource(25003U);
    msg.setSourceEntity(217U);
    msg.setDestination(55730U);
    msg.setDestinationEntity(247U);
    msg.value = 0.915357469540631;
    msg.confidence = 0.01298542099493949;
    msg.opmodes.assign("EOTXGUGCZFKQZRXMBQXOOEVQPGOSESNUTGZHEMDPZEZUSBJRNOVOPKUMHJJVNRXCGVKGHOGJLMUDKQJRWGBWXARPWMYCCFAJ");

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
    msg.setTimeStamp(0.8967637993804234);
    msg.setSource(46629U);
    msg.setSourceEntity(73U);
    msg.setDestination(27855U);
    msg.setDestinationEntity(110U);
    msg.value = 0.12884898596140493;
    msg.confidence = 0.6137687275934671;
    msg.opmodes.assign("FKYVGXXHNYXTINMVIVCBBSBONPBRAYGROZIETATYEOZKOGWAHCKSGTZEKXULAFJKMLSGNNPUHLIQAKVKITWRHEOGUECJDISRXPZGPLXWOECSFQWBYZWJHCJKQMSUVZGXCNRLQHPVMIPIPRDMDVQULNOFAJKZERQQABDUTVJMLLEJSBMJPCHCDUICYWFSJOBVDFGRPNNWYHNDAUYHJRDTEQDWLYIOQXBVMOZTSTHCUEMTFRUFBZASAWFQDKXZL");

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
    msg.setTimeStamp(0.9403777115633096);
    msg.setSource(16228U);
    msg.setSourceEntity(53U);
    msg.setDestination(32424U);
    msg.setDestinationEntity(116U);
    msg.itow = 2297771275U;
    msg.lat = 0.8156810549573748;
    msg.lon = 0.33342508884548394;
    msg.height_ell = 0.9191191811615481;
    msg.height_sea = 0.0897408139564696;
    msg.hacc = 0.683090014146707;
    msg.vacc = 0.6674967292430726;
    msg.vel_n = 0.659855334012057;
    msg.vel_e = 0.45993980974300175;
    msg.vel_d = 0.8431851981038906;
    msg.speed = 0.4308332295819203;
    msg.gspeed = 0.7403450308325777;
    msg.heading = 0.023233822096008105;
    msg.sacc = 0.6807310230628066;
    msg.cacc = 0.09185960465570009;

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
    msg.setTimeStamp(0.734476625597388);
    msg.setSource(21400U);
    msg.setSourceEntity(197U);
    msg.setDestination(56583U);
    msg.setDestinationEntity(202U);
    msg.itow = 1869756799U;
    msg.lat = 0.4854153535051684;
    msg.lon = 0.6236094431365565;
    msg.height_ell = 0.3975671794281107;
    msg.height_sea = 0.3999483360473043;
    msg.hacc = 0.5712158675200337;
    msg.vacc = 0.9014348553255556;
    msg.vel_n = 0.28947345273731917;
    msg.vel_e = 0.19948393555428534;
    msg.vel_d = 0.02141514060121974;
    msg.speed = 0.1774967093890032;
    msg.gspeed = 0.8549270016906516;
    msg.heading = 0.5241656197000151;
    msg.sacc = 0.22078672784268705;
    msg.cacc = 0.20420292787375305;

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
    msg.setTimeStamp(0.0012499752536550002);
    msg.setSource(50140U);
    msg.setSourceEntity(99U);
    msg.setDestination(39959U);
    msg.setDestinationEntity(105U);
    msg.itow = 4254213037U;
    msg.lat = 0.17304275567271243;
    msg.lon = 0.3258871298561443;
    msg.height_ell = 0.22290555451208005;
    msg.height_sea = 0.0896501706884093;
    msg.hacc = 0.5932871697828258;
    msg.vacc = 0.5966086962101026;
    msg.vel_n = 0.6827965629844381;
    msg.vel_e = 0.256139767993087;
    msg.vel_d = 0.35240873936632944;
    msg.speed = 0.47875845252622884;
    msg.gspeed = 0.6551776348764188;
    msg.heading = 0.03037019992520995;
    msg.sacc = 0.857014609037349;
    msg.cacc = 0.6979813757502797;

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
    msg.setTimeStamp(0.10990770967593788);
    msg.setSource(61754U);
    msg.setSourceEntity(40U);
    msg.setDestination(18684U);
    msg.setDestinationEntity(54U);
    msg.id = 51U;
    msg.value = 0.48079917685856877;

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
    msg.setTimeStamp(0.9369147672717772);
    msg.setSource(19290U);
    msg.setSourceEntity(215U);
    msg.setDestination(41293U);
    msg.setDestinationEntity(169U);
    msg.id = 126U;
    msg.value = 0.4537758935259619;

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
    msg.setTimeStamp(0.02590547902265261);
    msg.setSource(16384U);
    msg.setSourceEntity(62U);
    msg.setDestination(9777U);
    msg.setDestinationEntity(191U);
    msg.id = 168U;
    msg.value = 0.28602506771928726;

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
    msg.setTimeStamp(0.6835256592941735);
    msg.setSource(27872U);
    msg.setSourceEntity(152U);
    msg.setDestination(50914U);
    msg.setDestinationEntity(251U);
    msg.x = 0.5326428949226919;
    msg.y = 0.559301212376435;
    msg.z = 0.6436636711685925;
    msg.phi = 0.6040398516150749;
    msg.theta = 0.06119850462059573;
    msg.psi = 0.9905825793037569;

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
    msg.setTimeStamp(0.10515988277498312);
    msg.setSource(57095U);
    msg.setSourceEntity(123U);
    msg.setDestination(61311U);
    msg.setDestinationEntity(200U);
    msg.x = 0.9655067587673838;
    msg.y = 0.29939883178310256;
    msg.z = 0.2961450256175796;
    msg.phi = 0.6600874285635312;
    msg.theta = 0.7685703888667448;
    msg.psi = 0.07965103796965878;

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
    msg.setTimeStamp(0.9618148095867949);
    msg.setSource(64302U);
    msg.setSourceEntity(172U);
    msg.setDestination(15327U);
    msg.setDestinationEntity(116U);
    msg.x = 0.11808039051122199;
    msg.y = 0.23208172842299446;
    msg.z = 0.1686855301517789;
    msg.phi = 0.1079104343677737;
    msg.theta = 0.3600344025770654;
    msg.psi = 0.6722731441442401;

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
    msg.setTimeStamp(0.9005144848340073);
    msg.setSource(29403U);
    msg.setSourceEntity(132U);
    msg.setDestination(1991U);
    msg.setDestinationEntity(187U);
    msg.beam_width = 0.3851035481218563;
    msg.beam_height = 0.5985268850984252;

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
    msg.setTimeStamp(0.34454761899690856);
    msg.setSource(55110U);
    msg.setSourceEntity(87U);
    msg.setDestination(55752U);
    msg.setDestinationEntity(130U);
    msg.beam_width = 0.1832923524441219;
    msg.beam_height = 0.8287358009180867;

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
    msg.setTimeStamp(0.6621843049538919);
    msg.setSource(30903U);
    msg.setSourceEntity(176U);
    msg.setDestination(40257U);
    msg.setDestinationEntity(200U);
    msg.beam_width = 0.36556069912685807;
    msg.beam_height = 0.4993139199742037;

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
    msg.setTimeStamp(0.5358311227446814);
    msg.setSource(24344U);
    msg.setSourceEntity(77U);
    msg.setDestination(60378U);
    msg.setDestinationEntity(29U);
    msg.sane = 59U;

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
    msg.setTimeStamp(0.7765767258572406);
    msg.setSource(45087U);
    msg.setSourceEntity(239U);
    msg.setDestination(14211U);
    msg.setDestinationEntity(138U);
    msg.sane = 56U;

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
    msg.setTimeStamp(0.39586494724636145);
    msg.setSource(28142U);
    msg.setSourceEntity(91U);
    msg.setDestination(49024U);
    msg.setDestinationEntity(62U);
    msg.sane = 62U;

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
    msg.setTimeStamp(0.06711096260897342);
    msg.setSource(21998U);
    msg.setSourceEntity(178U);
    msg.setDestination(48838U);
    msg.setDestinationEntity(30U);
    msg.value = 0.08901067756583059;

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
    msg.setTimeStamp(0.9572368493310561);
    msg.setSource(5678U);
    msg.setSourceEntity(112U);
    msg.setDestination(32477U);
    msg.setDestinationEntity(205U);
    msg.value = 0.8561089501552362;

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
    msg.setTimeStamp(0.25896570093933124);
    msg.setSource(26231U);
    msg.setSourceEntity(235U);
    msg.setDestination(65531U);
    msg.setDestinationEntity(86U);
    msg.value = 0.7884009112554579;

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
    msg.setTimeStamp(0.6670846216280254);
    msg.setSource(27021U);
    msg.setSourceEntity(161U);
    msg.setDestination(3925U);
    msg.setDestinationEntity(162U);
    msg.value = 0.8618472605488222;

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
    msg.setTimeStamp(0.03964833656804556);
    msg.setSource(54738U);
    msg.setSourceEntity(2U);
    msg.setDestination(1505U);
    msg.setDestinationEntity(221U);
    msg.value = 0.878043556333927;

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
    msg.setTimeStamp(0.8739660771231543);
    msg.setSource(32190U);
    msg.setSourceEntity(0U);
    msg.setDestination(36139U);
    msg.setDestinationEntity(1U);
    msg.value = 0.9326709659204895;

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
    msg.setTimeStamp(0.22747841435395189);
    msg.setSource(56058U);
    msg.setSourceEntity(194U);
    msg.setDestination(8027U);
    msg.setDestinationEntity(192U);
    msg.value = 0.8442069562986221;

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
    msg.setTimeStamp(0.31955872277830566);
    msg.setSource(30520U);
    msg.setSourceEntity(16U);
    msg.setDestination(43924U);
    msg.setDestinationEntity(126U);
    msg.value = 0.9367908776649532;

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
    msg.setTimeStamp(0.27172627462460064);
    msg.setSource(41257U);
    msg.setSourceEntity(145U);
    msg.setDestination(28647U);
    msg.setDestinationEntity(199U);
    msg.value = 0.06599948173451131;

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
    msg.setTimeStamp(0.8131781801973873);
    msg.setSource(25138U);
    msg.setSourceEntity(102U);
    msg.setDestination(35483U);
    msg.setDestinationEntity(37U);
    msg.value = 0.4511294531483827;

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
    msg.setTimeStamp(0.5708086157273157);
    msg.setSource(21547U);
    msg.setSourceEntity(186U);
    msg.setDestination(36082U);
    msg.setDestinationEntity(187U);
    msg.value = 0.3145107864498393;

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
    msg.setTimeStamp(0.09045344153732271);
    msg.setSource(42099U);
    msg.setSourceEntity(24U);
    msg.setDestination(20154U);
    msg.setDestinationEntity(78U);
    msg.value = 0.05349895191693754;

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
    msg.setTimeStamp(0.03939764654855871);
    msg.setSource(34073U);
    msg.setSourceEntity(37U);
    msg.setDestination(33925U);
    msg.setDestinationEntity(9U);
    msg.value = 0.9791153404627255;

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
    msg.setTimeStamp(0.3732064382560111);
    msg.setSource(62460U);
    msg.setSourceEntity(145U);
    msg.setDestination(2146U);
    msg.setDestinationEntity(210U);
    msg.value = 0.12675595697103237;

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
    msg.setTimeStamp(0.6263616893148499);
    msg.setSource(41239U);
    msg.setSourceEntity(50U);
    msg.setDestination(9054U);
    msg.setDestinationEntity(112U);
    msg.value = 0.3255953073545147;

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
    msg.setTimeStamp(0.03703162733801335);
    msg.setSource(51670U);
    msg.setSourceEntity(184U);
    msg.setDestination(19220U);
    msg.setDestinationEntity(138U);
    msg.value = 0.5347294096000628;

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
    msg.setTimeStamp(0.6139980487001296);
    msg.setSource(3568U);
    msg.setSourceEntity(154U);
    msg.setDestination(23385U);
    msg.setDestinationEntity(79U);
    msg.value = 0.21656242300504203;

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
    msg.setTimeStamp(0.9121622019339986);
    msg.setSource(18125U);
    msg.setSourceEntity(20U);
    msg.setDestination(2094U);
    msg.setDestinationEntity(94U);
    msg.value = 0.2918296678634874;

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
    msg.setTimeStamp(0.07422661660558871);
    msg.setSource(55589U);
    msg.setSourceEntity(6U);
    msg.setDestination(58812U);
    msg.setDestinationEntity(167U);
    msg.value = 0.2527074026370625;

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
    msg.setTimeStamp(0.8914433079634005);
    msg.setSource(21795U);
    msg.setSourceEntity(170U);
    msg.setDestination(511U);
    msg.setDestinationEntity(52U);
    msg.value = 0.4124223354950993;

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
    msg.setTimeStamp(0.9077521902660243);
    msg.setSource(55166U);
    msg.setSourceEntity(212U);
    msg.setDestination(1784U);
    msg.setDestinationEntity(158U);
    msg.value = 0.573017090715924;

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
    msg.setTimeStamp(0.5333908298602217);
    msg.setSource(39960U);
    msg.setSourceEntity(87U);
    msg.setDestination(64485U);
    msg.setDestinationEntity(30U);
    msg.value = 0.45858013144411114;

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
    msg.setTimeStamp(0.9880720150191604);
    msg.setSource(42557U);
    msg.setSourceEntity(24U);
    msg.setDestination(58516U);
    msg.setDestinationEntity(16U);
    msg.value = 0.6728855630379141;

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
    msg.setTimeStamp(0.9334562131243244);
    msg.setSource(34053U);
    msg.setSourceEntity(169U);
    msg.setDestination(39292U);
    msg.setDestinationEntity(217U);
    msg.value = 0.722738226174083;

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
    msg.setTimeStamp(0.1760661889210805);
    msg.setSource(29700U);
    msg.setSourceEntity(21U);
    msg.setDestination(12395U);
    msg.setDestinationEntity(152U);
    msg.validity = 8842U;
    msg.type = 161U;
    msg.tow = 845948250U;
    msg.base_lat = 0.6495140942210952;
    msg.base_lon = 0.641286473549123;
    msg.base_height = 0.12536743286427265;
    msg.n = 0.6083971956462142;
    msg.e = 0.08862948911556989;
    msg.d = 0.48775267078454143;
    msg.v_n = 0.04799231973264162;
    msg.v_e = 0.6515707453837705;
    msg.v_d = 0.7047818312310161;
    msg.satellites = 50U;
    msg.iar_hyp = 51905U;
    msg.iar_ratio = 0.9471347092713617;

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
    msg.setTimeStamp(0.8149816246190354);
    msg.setSource(54586U);
    msg.setSourceEntity(26U);
    msg.setDestination(887U);
    msg.setDestinationEntity(155U);
    msg.validity = 53164U;
    msg.type = 105U;
    msg.tow = 602407778U;
    msg.base_lat = 0.33433872538189247;
    msg.base_lon = 0.7298485403867159;
    msg.base_height = 0.42666588188379295;
    msg.n = 0.039586952349423;
    msg.e = 0.19220792346470417;
    msg.d = 0.8254064279125191;
    msg.v_n = 0.9747799889656436;
    msg.v_e = 0.32108675761444705;
    msg.v_d = 0.5371819019779254;
    msg.satellites = 220U;
    msg.iar_hyp = 48720U;
    msg.iar_ratio = 0.9287115823738187;

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
    msg.setTimeStamp(0.1627705314146921);
    msg.setSource(6073U);
    msg.setSourceEntity(122U);
    msg.setDestination(38302U);
    msg.setDestinationEntity(86U);
    msg.validity = 18393U;
    msg.type = 177U;
    msg.tow = 2925690029U;
    msg.base_lat = 0.9961146084452012;
    msg.base_lon = 0.7299793970519899;
    msg.base_height = 0.7968844701534503;
    msg.n = 0.3680007384710303;
    msg.e = 0.3829018375317643;
    msg.d = 0.7068870912768619;
    msg.v_n = 0.8194737073366574;
    msg.v_e = 0.13661725904616207;
    msg.v_d = 0.7646075069660713;
    msg.satellites = 232U;
    msg.iar_hyp = 13542U;
    msg.iar_ratio = 0.632223123289959;

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
    msg.setTimeStamp(0.60029319461183);
    msg.setSource(51224U);
    msg.setSourceEntity(121U);
    msg.setDestination(4895U);
    msg.setDestinationEntity(222U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.2951856551536898;
    tmp_msg_0.lon = 0.7697276810460814;
    tmp_msg_0.height = 0.7174931302301024;
    tmp_msg_0.x = 0.4627273137367425;
    tmp_msg_0.y = 0.9893367562286086;
    tmp_msg_0.z = 0.22762038942353546;
    tmp_msg_0.phi = 0.884100227082042;
    tmp_msg_0.theta = 0.5152257803591834;
    tmp_msg_0.psi = 0.4300786736338281;
    tmp_msg_0.u = 0.2002972437238537;
    tmp_msg_0.v = 0.6321978479906869;
    tmp_msg_0.w = 0.4705944897034654;
    tmp_msg_0.vx = 0.4086375605941398;
    tmp_msg_0.vy = 0.26707665242496637;
    tmp_msg_0.vz = 0.394520114517682;
    tmp_msg_0.p = 0.4677915543308;
    tmp_msg_0.q = 0.8235618395471727;
    tmp_msg_0.r = 0.43276476207835146;
    tmp_msg_0.depth = 0.20200644214925645;
    tmp_msg_0.alt = 0.7328114487248215;
    msg.state.set(tmp_msg_0);
    msg.type = 214U;

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
    msg.setTimeStamp(0.9794368729460206);
    msg.setSource(5351U);
    msg.setSourceEntity(40U);
    msg.setDestination(6051U);
    msg.setDestinationEntity(159U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6286611762754306;
    tmp_msg_0.lon = 0.8131564525917042;
    tmp_msg_0.height = 0.09788756257002995;
    tmp_msg_0.x = 0.052828894867187004;
    tmp_msg_0.y = 0.5249545338598774;
    tmp_msg_0.z = 0.8525923207669344;
    tmp_msg_0.phi = 0.7181242988198803;
    tmp_msg_0.theta = 0.2936275019975413;
    tmp_msg_0.psi = 0.052131952714234875;
    tmp_msg_0.u = 0.43745845696366215;
    tmp_msg_0.v = 0.27257786285611574;
    tmp_msg_0.w = 0.40672154322746634;
    tmp_msg_0.vx = 0.07086397468388783;
    tmp_msg_0.vy = 0.5857543943521749;
    tmp_msg_0.vz = 0.9207834729012435;
    tmp_msg_0.p = 0.02254841619613679;
    tmp_msg_0.q = 0.4311169489228712;
    tmp_msg_0.r = 0.9176769472711457;
    tmp_msg_0.depth = 0.4759856463869244;
    tmp_msg_0.alt = 0.5447429498512183;
    msg.state.set(tmp_msg_0);
    msg.type = 227U;

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
    msg.setTimeStamp(0.24946609341827175);
    msg.setSource(42344U);
    msg.setSourceEntity(96U);
    msg.setDestination(15616U);
    msg.setDestinationEntity(19U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8541195619679696;
    tmp_msg_0.lon = 0.6146195286344015;
    tmp_msg_0.height = 0.3427895837675684;
    tmp_msg_0.x = 0.5207358775031153;
    tmp_msg_0.y = 0.41595874865846416;
    tmp_msg_0.z = 0.2191164242305006;
    tmp_msg_0.phi = 0.4303578676232772;
    tmp_msg_0.theta = 0.9934588279227057;
    tmp_msg_0.psi = 0.16656086173582452;
    tmp_msg_0.u = 0.11837159669883557;
    tmp_msg_0.v = 0.6226637232894274;
    tmp_msg_0.w = 0.36517833710151426;
    tmp_msg_0.vx = 0.4167129350406765;
    tmp_msg_0.vy = 0.07499615131723691;
    tmp_msg_0.vz = 0.7091388333314775;
    tmp_msg_0.p = 0.8349039915091202;
    tmp_msg_0.q = 0.4515313612729801;
    tmp_msg_0.r = 0.09168440502203434;
    tmp_msg_0.depth = 0.6735684957729169;
    tmp_msg_0.alt = 0.4592762212745184;
    msg.state.set(tmp_msg_0);
    msg.type = 30U;

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
    msg.setTimeStamp(0.16785952426888395);
    msg.setSource(62393U);
    msg.setSourceEntity(184U);
    msg.setDestination(60943U);
    msg.setDestinationEntity(194U);
    msg.value = 0.1592275329860029;

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
    msg.setTimeStamp(0.6534904720349143);
    msg.setSource(38961U);
    msg.setSourceEntity(53U);
    msg.setDestination(65424U);
    msg.setDestinationEntity(222U);
    msg.value = 0.3767344441401509;

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
    msg.setTimeStamp(0.9185281940838518);
    msg.setSource(32094U);
    msg.setSourceEntity(145U);
    msg.setDestination(37294U);
    msg.setDestinationEntity(36U);
    msg.value = 0.3746529782444731;

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
    msg.setTimeStamp(0.3754482564579942);
    msg.setSource(22532U);
    msg.setSourceEntity(90U);
    msg.setDestination(12569U);
    msg.setDestinationEntity(206U);
    msg.value = 0.20343212062717597;

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
    msg.setTimeStamp(0.02952034029302808);
    msg.setSource(18326U);
    msg.setSourceEntity(106U);
    msg.setDestination(25489U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6147045612823201;

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
    msg.setTimeStamp(0.38513466255675);
    msg.setSource(63895U);
    msg.setSourceEntity(185U);
    msg.setDestination(8259U);
    msg.setDestinationEntity(217U);
    msg.value = 0.5447865311472287;

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
    msg.setTimeStamp(0.09333694756834199);
    msg.setSource(1152U);
    msg.setSourceEntity(110U);
    msg.setDestination(7391U);
    msg.setDestinationEntity(123U);
    msg.value = 0.42194379688064;

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
    msg.setTimeStamp(0.23961640277989638);
    msg.setSource(58003U);
    msg.setSourceEntity(99U);
    msg.setDestination(50790U);
    msg.setDestinationEntity(105U);
    msg.value = 0.29007250566887266;

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
    msg.setTimeStamp(0.5018690551015831);
    msg.setSource(31540U);
    msg.setSourceEntity(228U);
    msg.setDestination(263U);
    msg.setDestinationEntity(194U);
    msg.value = 0.7887527514207666;

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
    msg.setTimeStamp(0.4079160025398332);
    msg.setSource(9672U);
    msg.setSourceEntity(57U);
    msg.setDestination(31715U);
    msg.setDestinationEntity(88U);
    msg.value = 0.453690273736404;

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
    msg.setTimeStamp(0.7090083459556438);
    msg.setSource(20178U);
    msg.setSourceEntity(163U);
    msg.setDestination(20953U);
    msg.setDestinationEntity(78U);
    msg.value = 0.03770241641792116;

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
    msg.setTimeStamp(0.9005006417051381);
    msg.setSource(27955U);
    msg.setSourceEntity(192U);
    msg.setDestination(56524U);
    msg.setDestinationEntity(51U);
    msg.value = 0.4872931249002138;

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
    msg.setTimeStamp(0.041392900261488896);
    msg.setSource(4471U);
    msg.setSourceEntity(54U);
    msg.setDestination(12329U);
    msg.setDestinationEntity(88U);
    msg.value = 0.22322362969384146;

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
    msg.setTimeStamp(0.20331240379444426);
    msg.setSource(20827U);
    msg.setSourceEntity(243U);
    msg.setDestination(15544U);
    msg.setDestinationEntity(149U);
    msg.value = 0.6395940680890337;

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
    msg.setTimeStamp(0.25490531927353033);
    msg.setSource(33848U);
    msg.setSourceEntity(137U);
    msg.setDestination(52022U);
    msg.setDestinationEntity(62U);
    msg.value = 0.630602394508485;

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
    msg.setTimeStamp(0.23067786863616868);
    msg.setSource(61868U);
    msg.setSourceEntity(82U);
    msg.setDestination(4374U);
    msg.setDestinationEntity(39U);
    msg.id = 52U;
    msg.zoom = 167U;
    msg.action = 69U;

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
    msg.setTimeStamp(0.6527014882198794);
    msg.setSource(49957U);
    msg.setSourceEntity(154U);
    msg.setDestination(23706U);
    msg.setDestinationEntity(226U);
    msg.id = 202U;
    msg.zoom = 198U;
    msg.action = 123U;

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
    msg.setTimeStamp(0.391616179740518);
    msg.setSource(53753U);
    msg.setSourceEntity(17U);
    msg.setDestination(991U);
    msg.setDestinationEntity(205U);
    msg.id = 29U;
    msg.zoom = 127U;
    msg.action = 124U;

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
    msg.setTimeStamp(0.05945124023734727);
    msg.setSource(2860U);
    msg.setSourceEntity(22U);
    msg.setDestination(40653U);
    msg.setDestinationEntity(204U);
    msg.id = 75U;
    msg.value = 0.48617993540828464;

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
    msg.setTimeStamp(0.8525231480690728);
    msg.setSource(44204U);
    msg.setSourceEntity(99U);
    msg.setDestination(55774U);
    msg.setDestinationEntity(134U);
    msg.id = 97U;
    msg.value = 0.9840394494621802;

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
    msg.setTimeStamp(0.9304868451413055);
    msg.setSource(40587U);
    msg.setSourceEntity(16U);
    msg.setDestination(3885U);
    msg.setDestinationEntity(254U);
    msg.id = 156U;
    msg.value = 0.5766951955466737;

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
    msg.setTimeStamp(0.20857040910679248);
    msg.setSource(20265U);
    msg.setSourceEntity(91U);
    msg.setDestination(18621U);
    msg.setDestinationEntity(165U);
    msg.id = 168U;
    msg.value = 0.36359693356161804;

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
    msg.setTimeStamp(0.5109544073724598);
    msg.setSource(53170U);
    msg.setSourceEntity(249U);
    msg.setDestination(38371U);
    msg.setDestinationEntity(153U);
    msg.id = 37U;
    msg.value = 0.2704307476013219;

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
    msg.setTimeStamp(0.4420902092318837);
    msg.setSource(33333U);
    msg.setSourceEntity(4U);
    msg.setDestination(21758U);
    msg.setDestinationEntity(44U);
    msg.id = 200U;
    msg.value = 0.4784090191192477;

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
    msg.setTimeStamp(0.2673523838003852);
    msg.setSource(59519U);
    msg.setSourceEntity(179U);
    msg.setDestination(26530U);
    msg.setDestinationEntity(209U);
    msg.id = 80U;
    msg.angle = 0.3861348757597589;

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
    msg.setTimeStamp(0.24688734473392926);
    msg.setSource(36613U);
    msg.setSourceEntity(87U);
    msg.setDestination(13210U);
    msg.setDestinationEntity(140U);
    msg.id = 154U;
    msg.angle = 0.017204843895718636;

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
    msg.setTimeStamp(0.2665560334552355);
    msg.setSource(18812U);
    msg.setSourceEntity(143U);
    msg.setDestination(37339U);
    msg.setDestinationEntity(130U);
    msg.id = 247U;
    msg.angle = 0.0007491447776215576;

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
    msg.setTimeStamp(0.7315028718177681);
    msg.setSource(48369U);
    msg.setSourceEntity(87U);
    msg.setDestination(31542U);
    msg.setDestinationEntity(174U);
    msg.op = 110U;
    msg.actions.assign("JTBCCJOTRASQFLENQOG");

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
    msg.setTimeStamp(0.3310997095274413);
    msg.setSource(32703U);
    msg.setSourceEntity(109U);
    msg.setDestination(29418U);
    msg.setDestinationEntity(180U);
    msg.op = 83U;
    msg.actions.assign("JTYIFGJWFLGY");

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
    msg.setTimeStamp(0.20268604062472662);
    msg.setSource(2446U);
    msg.setSourceEntity(72U);
    msg.setDestination(6756U);
    msg.setDestinationEntity(237U);
    msg.op = 109U;
    msg.actions.assign("GQLBJDXBWGVNMXQULQFRERHLZBNGQEDKXCJIDEEILRBEDQKHRTHHSCNTLIINOOAOSQPPMOYWUBCNBMTPKAWCPSGFWSSPJZZDTMBWNMQLXAAUWVKAAIVRTJSUYRYTWKKOHFEPTNYJWFCEFJNMXISYTZUMMJBUFAHUCAVHEYZYYHTQGBORVXLXMTAHVYFUCZOGKFIOVXURGEGXPSYOPEDVLJLHDVIZNXJCVKMGKRFS");

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
    msg.setTimeStamp(0.8609878409775316);
    msg.setSource(5441U);
    msg.setSourceEntity(143U);
    msg.setDestination(25753U);
    msg.setDestinationEntity(217U);
    msg.actions.assign("ULTPGAWHDTJGWCYKOAWFEWSISWHXUQMESOYOTFPWHDGSYRVYMAGZNEVXOQWIAALTXBHGJGCYKBOMFZMDCFRVYZFJANHGNFRJTYANVERLSVCNIMJRPZLKDMCKKYHQGUPBELBHSVXZQMFJBPWVXDUUEIMYKSUBJFCVUUOTHXZZCXSDTKPKLPOFIPJKCRZTVWRXRAXILQTOMWQSHOVDIBUEYIDZNDPREIMLELNGAKOPQINJCTBHSZQAFRXNBNJ");

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
    msg.setTimeStamp(0.2876337920624732);
    msg.setSource(8153U);
    msg.setSourceEntity(7U);
    msg.setDestination(18769U);
    msg.setDestinationEntity(57U);
    msg.actions.assign("EVPLPBNVBQSTGMXLXFNQULTPCWJBHTHMRILTLJOVLOEFLGAOKWWOMCMULPIQPCESDKSSDIMKVXYEEGYIUIUJFPABWFADGIGXDXJTRAEIQNSA");

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
    msg.setTimeStamp(0.49064968159173183);
    msg.setSource(26119U);
    msg.setSourceEntity(250U);
    msg.setDestination(15349U);
    msg.setDestinationEntity(120U);
    msg.actions.assign("BKICBXADNLBCWUCJTFXGZIYNVAQLJEKWBHFGKLSXWIYQDZMA");

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
    msg.setTimeStamp(0.16760416300593006);
    msg.setSource(57084U);
    msg.setSourceEntity(176U);
    msg.setDestination(51844U);
    msg.setDestinationEntity(224U);
    msg.button = 79U;
    msg.value = 23U;

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
    msg.setTimeStamp(0.7504082546950928);
    msg.setSource(26469U);
    msg.setSourceEntity(176U);
    msg.setDestination(46834U);
    msg.setDestinationEntity(91U);
    msg.button = 160U;
    msg.value = 152U;

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
    msg.setTimeStamp(0.4192380715934244);
    msg.setSource(11583U);
    msg.setSourceEntity(10U);
    msg.setDestination(61862U);
    msg.setDestinationEntity(170U);
    msg.button = 65U;
    msg.value = 142U;

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
    msg.setTimeStamp(0.6491204906433697);
    msg.setSource(59640U);
    msg.setSourceEntity(207U);
    msg.setDestination(63288U);
    msg.setDestinationEntity(56U);
    msg.op = 33U;
    msg.text.assign("TEQMZIJMKIEBYKDUEDLXLDCIUAHVOJRYJSCEKCSIDZNWTKNFITHDMQIMOGRUAJPHXYCAOXCVMWNAGGVBFSJYHUCBBGSDLFMQFKLSUWYUKMYUCSIIXPTZTEPAMFRLZHNLZRROLOVQJNENGPBXBWSWHNZPZWHRAVBPMJNWFLAPR");

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
    msg.setTimeStamp(0.2915994022857009);
    msg.setSource(31519U);
    msg.setSourceEntity(169U);
    msg.setDestination(28002U);
    msg.setDestinationEntity(181U);
    msg.op = 60U;
    msg.text.assign("PQOQSYIPFOTDYIRQLDJCWQPXESLBFZZKBDHLZIQKHAIATFYQXBZQEGBMUMKCZCBLHHERAHWIVAJTBDWENLISEQRKMYWKGCVJLGMRYQTTKXWABOHVOEUNWOMYXSZTNCNNIIXURMGBZJVKCDFXETMTIYWRWGSPGXDCVFUVFPNJSLDNYJITVOATGAKAHVVJSEUENRNCUPUHLEDUBXZ");

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
    msg.setTimeStamp(0.32950902520116687);
    msg.setSource(44910U);
    msg.setSourceEntity(58U);
    msg.setDestination(62720U);
    msg.setDestinationEntity(61U);
    msg.op = 209U;
    msg.text.assign("WMBMBPEJVEEMRLDWKQDRZTQAUDORHZDTISPCUSCTNSBMYCBAPKCFQLTFUESLYZAYBNXQIFJWP");

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
    msg.setTimeStamp(0.0680983783585718);
    msg.setSource(40693U);
    msg.setSourceEntity(234U);
    msg.setDestination(61117U);
    msg.setDestinationEntity(25U);
    msg.op = 61U;
    msg.time_remain = 0.9121158556848105;
    msg.sched_time = 0.7509211254899439;

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
    msg.setTimeStamp(0.6209472307993481);
    msg.setSource(42267U);
    msg.setSourceEntity(163U);
    msg.setDestination(64745U);
    msg.setDestinationEntity(111U);
    msg.op = 221U;
    msg.time_remain = 0.9369837995770333;
    msg.sched_time = 0.8176662512097947;

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
    msg.setTimeStamp(0.2657671998491685);
    msg.setSource(13960U);
    msg.setSourceEntity(10U);
    msg.setDestination(27018U);
    msg.setDestinationEntity(200U);
    msg.op = 78U;
    msg.time_remain = 0.801451449146411;
    msg.sched_time = 0.7408261176782903;

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
    msg.setTimeStamp(0.22014254527794241);
    msg.setSource(4705U);
    msg.setSourceEntity(147U);
    msg.setDestination(50100U);
    msg.setDestinationEntity(117U);
    msg.name.assign("MTUICEHSZQPHXOFXZWUTMHPUZBHRKVPYZJAVUUKDALFMBNGKWXCDEBPFMUISVCDWPOGPFDCVFAHVMIFIJXBZNISACFWBLOOAOYCOIGQJUKSPIWMZFZSZNYSWIDQRNTLLEADDXT");
    msg.op = 24U;
    msg.sched_time = 0.033385675438743156;

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
    msg.setTimeStamp(0.7175797500550409);
    msg.setSource(40229U);
    msg.setSourceEntity(1U);
    msg.setDestination(52507U);
    msg.setDestinationEntity(234U);
    msg.name.assign("XDOPBTRORBJLHUBREOMQLMTKRSYFZCAASHNJJXNUBNAZOXSMCNGIGNICTGPAWODACTRSSUNQAYQTVFSXTJEWQIRPGEKMKKLVXEBWVBYLIFFGFUUVLIEXTDJNTXASROSVVJDGUIKVBMYWHDPUKLEEJIRCZHCQUQPDGOGWRFBFSZUPMWHJJLWAWTPRHYYQVQCKMFWQZDEPYOGFHMM");
    msg.op = 89U;
    msg.sched_time = 0.9746461206199948;

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
    msg.setTimeStamp(0.0322175673813867);
    msg.setSource(27828U);
    msg.setSourceEntity(163U);
    msg.setDestination(65049U);
    msg.setDestinationEntity(115U);
    msg.name.assign("UVVEHFKTCTTYFHTFNCPCOEHZUXSLUKIUWBJJAZSPWBTVEZWYOSUXJNNYENPAAGDEMYUFDDBGFGGLCORXTBSCDPLDMGPIIIYOQUMVXEGNKUOXH");
    msg.op = 236U;
    msg.sched_time = 0.6005046363577069;

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
    msg.setTimeStamp(0.34848631397329455);
    msg.setSource(8988U);
    msg.setSourceEntity(241U);
    msg.setDestination(37072U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.770661319279641);
    msg.setSource(62378U);
    msg.setSourceEntity(66U);
    msg.setDestination(7484U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.2868625294220697);
    msg.setSource(47198U);
    msg.setSourceEntity(79U);
    msg.setDestination(11815U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.050838520022233324);
    msg.setSource(34287U);
    msg.setSourceEntity(232U);
    msg.setDestination(54986U);
    msg.setDestinationEntity(161U);
    msg.name.assign("GVCQZOEHHQKZNJXLWGOYXQYTVMVQYEKGWQNSXUUCVXJRJCEAFACGWMUBZJLTFPNTDEPAKDUMWGJPLIAMSKUDHEFTJLSPQBSSITFBBOXIDEUZKPEDJDWAEXVFDPHFMWLWIZNVXRUAZMPJUVWCHGTUSLMLIVLGQECKYORCBANBGRSBPTGIDYNSY");
    msg.state = 160U;

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
    msg.setTimeStamp(0.5105760211174829);
    msg.setSource(17742U);
    msg.setSourceEntity(18U);
    msg.setDestination(52792U);
    msg.setDestinationEntity(80U);
    msg.name.assign("ZGRWBVMQDJISEGUBJLHFJVWDVXYMBMVQUOVUTGPFREZZKLHGTHIHDNCYUEMLIUZSJSUICOVJKAJAOSWVNTZQQIKFNULYDMCOPHCBBLZOOEDGFXSXMSWPNKXA");
    msg.state = 201U;

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
    msg.setTimeStamp(0.2527435189500232);
    msg.setSource(25214U);
    msg.setSourceEntity(82U);
    msg.setDestination(14282U);
    msg.setDestinationEntity(207U);
    msg.name.assign("UDVAPFOHMLZZFRQJXJIGKMYALUZGCXAHSSHNDSEJARDBEJEYYVKOUOIVXVPGACWDJZBZCEBWNKMCBIFAYTIDQPOFYSSCXTBWHBVYLNIHSEMSXAEJMTNUQBXGMURDWKYQRUVIHHSKKHKKVTEPQJTJIUQQEMLONOKIGJAEPLSVTOQOZUDLGWAHUNIVM");
    msg.state = 161U;

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
    msg.setTimeStamp(0.023860541735909346);
    msg.setSource(65465U);
    msg.setSourceEntity(102U);
    msg.setDestination(18476U);
    msg.setDestinationEntity(199U);
    msg.name.assign("HRUYTIJTXNUNDCLFLPSWPIZZXAKSUTPCGYGOCPJQNRZGQWPBFVBIZMJOPLKIBGMVVHOLCOS");
    msg.value = 169U;

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
    msg.setTimeStamp(0.9610005695169751);
    msg.setSource(44642U);
    msg.setSourceEntity(183U);
    msg.setDestination(53816U);
    msg.setDestinationEntity(225U);
    msg.name.assign("UIORKMEYTJHOJLFB");
    msg.value = 50U;

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
    msg.setTimeStamp(0.7466618249645005);
    msg.setSource(35332U);
    msg.setSourceEntity(152U);
    msg.setDestination(32370U);
    msg.setDestinationEntity(13U);
    msg.name.assign("RBZNIEMXDVUDZIQRAIHXAUNFTDPEPAPDGDCUKMWVPOSRFJBFHMTKDTGHLLYWQLOUCJISPNFYQQZUYOSBUPIVOAYEIWUZASDZSJLRXWHLXDKHNCHY");
    msg.value = 83U;

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
    msg.setTimeStamp(0.8464392037564566);
    msg.setSource(41896U);
    msg.setSourceEntity(3U);
    msg.setDestination(36806U);
    msg.setDestinationEntity(42U);
    msg.name.assign("UCSBKOMHMANGLPVEXMSFJJDJFWBWABKKRQQDCAEFXRAHGOXUUHHFTNQHUXGSCEMBWCGSBNTDBRKPASZJZERQTRDMTHSNGEYWPIKKUZSLETRGEYRBGGTPOFNADUDAXRQCXNPCQOKDLDOLECSXQCBVSAYJTFHOZVDHIZSWLPPIMZPNNVVBMVJFVJIVFJZYFUNKYUTWYTZPTOZARXILQUIBLJWWEALYEIOGMRCVUWXQMWIZYFGP");

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
    msg.setTimeStamp(0.7047324866752029);
    msg.setSource(62518U);
    msg.setSourceEntity(221U);
    msg.setDestination(21379U);
    msg.setDestinationEntity(110U);
    msg.name.assign("BUOAVHQTHXZFQFJFKJHNCVDYEMONFYLUZOFLBZXGSTXZHPZBLSAUMUDJQOXCNXLSCTTZAENKRYLMJNXUMSGYZYIZVQLGPECOYAUOTGIUQIVXKRSHRIBCIYAPVMMBGIXWLWSWARDUEGHOVPCTKSCFUAEWG");

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
    msg.setTimeStamp(0.8923186904168158);
    msg.setSource(65164U);
    msg.setSourceEntity(236U);
    msg.setDestination(54386U);
    msg.setDestinationEntity(226U);
    msg.name.assign("YYWRWURCCQWHZXAQOMSSRZQJJJSVMFKKFYXEKCZNYDBBKLSVUFXKVCOHCOHMITGNCTGQYCNTYDYFFHRGWWVUVHNYOIXTKL");

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
    msg.setTimeStamp(0.7690065598546405);
    msg.setSource(46304U);
    msg.setSourceEntity(86U);
    msg.setDestination(46881U);
    msg.setDestinationEntity(215U);
    msg.name.assign("YHLBIECPSYFXCVNKDQFFXORFISBXACODMTMDZTNHYIXAHDLYJVGBZIFUJMQKKTCZKMOTJIFUVQZOUWGKDUJTPWLPPLZKSRPNKPUWWUMGWAQE");
    msg.value = 215U;

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
    msg.setTimeStamp(0.24173282575331667);
    msg.setSource(59393U);
    msg.setSourceEntity(209U);
    msg.setDestination(5376U);
    msg.setDestinationEntity(23U);
    msg.name.assign("TFUKLQHBSXNNLJVERGRNJKCNXQXFEKMTGYNCQLTXBMKHPYGSQHLWVENRMNZDIBTVJJJDXJRARZMAZQAOHWZPYHHBCZUNXVDQXAYUNJGICCGAVSDKSXYYYDLFUHTQWFGL");
    msg.value = 101U;

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
    msg.setTimeStamp(0.5299230659765548);
    msg.setSource(30772U);
    msg.setSourceEntity(119U);
    msg.setDestination(45131U);
    msg.setDestinationEntity(128U);
    msg.name.assign("ZOVZWHTLIRKIXTHJIQWKDXYGQVFPUWMTJEIJLUSCHHLGA");
    msg.value = 80U;

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
    msg.setTimeStamp(0.4932641355363818);
    msg.setSource(20456U);
    msg.setSourceEntity(93U);
    msg.setDestination(13624U);
    msg.setDestinationEntity(48U);
    msg.id = 54U;
    msg.period = 1061778475U;
    msg.duty_cycle = 3075215669U;

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
    msg.setTimeStamp(0.9427817129868606);
    msg.setSource(10215U);
    msg.setSourceEntity(223U);
    msg.setDestination(11053U);
    msg.setDestinationEntity(165U);
    msg.id = 183U;
    msg.period = 32454769U;
    msg.duty_cycle = 1434716897U;

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
    msg.setTimeStamp(0.14553057160883898);
    msg.setSource(5593U);
    msg.setSourceEntity(30U);
    msg.setDestination(64093U);
    msg.setDestinationEntity(183U);
    msg.id = 38U;
    msg.period = 1317886420U;
    msg.duty_cycle = 183534881U;

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
    msg.setTimeStamp(0.30234739411143097);
    msg.setSource(19456U);
    msg.setSourceEntity(50U);
    msg.setDestination(26465U);
    msg.setDestinationEntity(20U);
    msg.id = 153U;
    msg.period = 2327681215U;
    msg.duty_cycle = 547629525U;

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
    msg.setTimeStamp(0.6151615423146302);
    msg.setSource(37224U);
    msg.setSourceEntity(43U);
    msg.setDestination(49594U);
    msg.setDestinationEntity(84U);
    msg.id = 190U;
    msg.period = 3448280740U;
    msg.duty_cycle = 590873152U;

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
    msg.setTimeStamp(0.327316037224364);
    msg.setSource(59812U);
    msg.setSourceEntity(68U);
    msg.setDestination(61493U);
    msg.setDestinationEntity(166U);
    msg.id = 214U;
    msg.period = 586936816U;
    msg.duty_cycle = 1705081789U;

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
    msg.setTimeStamp(0.18772679802087133);
    msg.setSource(24348U);
    msg.setSourceEntity(52U);
    msg.setDestination(60387U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.8445811421395559;
    msg.lon = 0.9967928636436866;
    msg.height = 0.646388353291638;
    msg.x = 0.9532109663451829;
    msg.y = 0.08345769053864427;
    msg.z = 0.7634968821262309;
    msg.phi = 0.17332584530742456;
    msg.theta = 0.3532753119752948;
    msg.psi = 0.990942948788267;
    msg.u = 0.6186171456067525;
    msg.v = 0.7460589903935231;
    msg.w = 0.23967278189013463;
    msg.vx = 0.6260763312571589;
    msg.vy = 0.17304912308897868;
    msg.vz = 0.6048961994808936;
    msg.p = 0.606702743305698;
    msg.q = 0.8838932885379722;
    msg.r = 0.42362992513458275;
    msg.depth = 0.7154414027195813;
    msg.alt = 0.6556944968233974;

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
    msg.setTimeStamp(0.6971472636878376);
    msg.setSource(20339U);
    msg.setSourceEntity(214U);
    msg.setDestination(24115U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.07855446813874234;
    msg.lon = 0.03576650090554423;
    msg.height = 0.8504173445261228;
    msg.x = 0.7201407538071041;
    msg.y = 0.6300339141344414;
    msg.z = 0.13111011199951506;
    msg.phi = 0.3335062858424038;
    msg.theta = 0.9575655207312433;
    msg.psi = 0.2112716288134684;
    msg.u = 0.684847741615529;
    msg.v = 0.5818118617176586;
    msg.w = 0.061370214589846706;
    msg.vx = 0.3239459658867314;
    msg.vy = 0.9519503980900168;
    msg.vz = 0.1363828355935438;
    msg.p = 0.4034116857147484;
    msg.q = 0.25440549467489093;
    msg.r = 0.169573666971374;
    msg.depth = 0.3338419568093488;
    msg.alt = 0.9936249783281538;

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
    msg.setTimeStamp(0.935464569836571);
    msg.setSource(20208U);
    msg.setSourceEntity(25U);
    msg.setDestination(61356U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.9068300327105479;
    msg.lon = 0.03029009620519907;
    msg.height = 0.5230578169434081;
    msg.x = 0.4628707915613288;
    msg.y = 0.9263622978277657;
    msg.z = 0.7158737707512769;
    msg.phi = 0.9792813624562617;
    msg.theta = 0.24257366685841641;
    msg.psi = 0.6351747465432065;
    msg.u = 0.9075160283721346;
    msg.v = 0.016920865225793613;
    msg.w = 0.010899288013987096;
    msg.vx = 0.4266790734225653;
    msg.vy = 0.9641848641952495;
    msg.vz = 0.21786390730030425;
    msg.p = 0.12445513083411996;
    msg.q = 0.6491808701664011;
    msg.r = 0.18036710346121299;
    msg.depth = 0.3390908689247142;
    msg.alt = 0.692185266758057;

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
    msg.setTimeStamp(0.577995980586668);
    msg.setSource(3671U);
    msg.setSourceEntity(36U);
    msg.setDestination(44411U);
    msg.setDestinationEntity(17U);
    msg.x = 0.698186763811585;
    msg.y = 0.9582648254368171;
    msg.z = 0.7680748739781117;

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
    msg.setTimeStamp(0.4187052794902425);
    msg.setSource(5755U);
    msg.setSourceEntity(247U);
    msg.setDestination(33387U);
    msg.setDestinationEntity(28U);
    msg.x = 0.2820273358115978;
    msg.y = 0.7336154927457366;
    msg.z = 0.6980895605963928;

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
    msg.setTimeStamp(0.5159916534744403);
    msg.setSource(18036U);
    msg.setSourceEntity(83U);
    msg.setDestination(40628U);
    msg.setDestinationEntity(199U);
    msg.x = 0.7962985377251252;
    msg.y = 0.32177834451878007;
    msg.z = 0.8973308729039129;

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
    msg.setTimeStamp(0.27464542635180533);
    msg.setSource(19125U);
    msg.setSourceEntity(6U);
    msg.setDestination(23502U);
    msg.setDestinationEntity(149U);
    msg.value = 0.34856521191251344;

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
    msg.setTimeStamp(0.663364422815442);
    msg.setSource(38352U);
    msg.setSourceEntity(186U);
    msg.setDestination(17542U);
    msg.setDestinationEntity(88U);
    msg.value = 0.8389480460461807;

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
    msg.setTimeStamp(0.04478018111135185);
    msg.setSource(33812U);
    msg.setSourceEntity(134U);
    msg.setDestination(38933U);
    msg.setDestinationEntity(66U);
    msg.value = 0.6245139108439586;

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
    msg.setTimeStamp(0.8018675481684255);
    msg.setSource(16749U);
    msg.setSourceEntity(97U);
    msg.setDestination(4575U);
    msg.setDestinationEntity(106U);
    msg.value = 0.6852718566576163;

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
    msg.setTimeStamp(0.03651987990972727);
    msg.setSource(16985U);
    msg.setSourceEntity(47U);
    msg.setDestination(4521U);
    msg.setDestinationEntity(178U);
    msg.value = 0.7845716532082728;

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
    msg.setTimeStamp(0.4954486875002614);
    msg.setSource(61452U);
    msg.setSourceEntity(83U);
    msg.setDestination(55218U);
    msg.setDestinationEntity(18U);
    msg.value = 0.6597048664059709;

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
    msg.setTimeStamp(0.32673836124134914);
    msg.setSource(9313U);
    msg.setSourceEntity(25U);
    msg.setDestination(57155U);
    msg.setDestinationEntity(65U);
    msg.x = 0.4780817883496312;
    msg.y = 0.7744179265889766;
    msg.z = 0.5019064021772254;
    msg.phi = 0.14795532302743353;
    msg.theta = 0.01339577484772092;
    msg.psi = 0.05239187385567334;
    msg.p = 0.7299257009274995;
    msg.q = 0.7585149265199477;
    msg.r = 0.9759808472964923;
    msg.u = 0.048800176061028266;
    msg.v = 0.6961625488906132;
    msg.w = 0.48134323629525744;
    msg.bias_psi = 0.5112680714642179;
    msg.bias_r = 0.919228234194392;

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
    msg.setTimeStamp(0.32178056176392467);
    msg.setSource(54028U);
    msg.setSourceEntity(125U);
    msg.setDestination(53918U);
    msg.setDestinationEntity(135U);
    msg.x = 0.5262666389016921;
    msg.y = 0.8399490463945698;
    msg.z = 0.9939546680861518;
    msg.phi = 0.044534288061265026;
    msg.theta = 0.4314883678677094;
    msg.psi = 0.01479792901555188;
    msg.p = 0.29263393616221844;
    msg.q = 0.017154786453878135;
    msg.r = 0.7335208835164864;
    msg.u = 0.7520040962746439;
    msg.v = 0.44684399754070536;
    msg.w = 0.34882589271527753;
    msg.bias_psi = 0.5855077400527274;
    msg.bias_r = 0.2512485494123866;

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
    msg.setTimeStamp(0.5436725760852591);
    msg.setSource(24426U);
    msg.setSourceEntity(124U);
    msg.setDestination(28634U);
    msg.setDestinationEntity(222U);
    msg.x = 0.5215172581092591;
    msg.y = 0.9673577117724469;
    msg.z = 0.1451844965684641;
    msg.phi = 0.33172729893544783;
    msg.theta = 0.2907895826053174;
    msg.psi = 0.09193733424280082;
    msg.p = 0.9300027918670918;
    msg.q = 0.842801490659936;
    msg.r = 0.6220516489118315;
    msg.u = 0.6737782840420614;
    msg.v = 0.588693327729745;
    msg.w = 0.8614875336064248;
    msg.bias_psi = 0.1768461221431321;
    msg.bias_r = 0.24568867074575818;

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
    msg.setTimeStamp(0.3906618935525903);
    msg.setSource(17189U);
    msg.setSourceEntity(228U);
    msg.setDestination(44481U);
    msg.setDestinationEntity(224U);
    msg.bias_psi = 0.1748496965324713;
    msg.bias_r = 0.5797468132204036;
    msg.cog = 0.43594991986143095;
    msg.cyaw = 0.8098495522089714;
    msg.lbl_rej_level = 0.11691744670674509;
    msg.gps_rej_level = 0.7271650489501357;
    msg.custom_x = 0.4567845211736057;
    msg.custom_y = 0.4029697256888114;
    msg.custom_z = 0.9034872270490631;

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
    msg.setTimeStamp(0.7691900681148691);
    msg.setSource(11190U);
    msg.setSourceEntity(155U);
    msg.setDestination(5389U);
    msg.setDestinationEntity(241U);
    msg.bias_psi = 0.8486055399259196;
    msg.bias_r = 0.5705527913652317;
    msg.cog = 0.7571467636905123;
    msg.cyaw = 0.9166466622831029;
    msg.lbl_rej_level = 0.11807969897355908;
    msg.gps_rej_level = 0.47665628898835244;
    msg.custom_x = 0.6267995469592629;
    msg.custom_y = 0.06096999200670894;
    msg.custom_z = 0.8739199849225165;

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
    msg.setTimeStamp(0.6007389491036612);
    msg.setSource(18676U);
    msg.setSourceEntity(200U);
    msg.setDestination(51411U);
    msg.setDestinationEntity(178U);
    msg.bias_psi = 0.8867668726020901;
    msg.bias_r = 0.9284022142370896;
    msg.cog = 0.37518849470419446;
    msg.cyaw = 0.2766288006155512;
    msg.lbl_rej_level = 0.7887618307284981;
    msg.gps_rej_level = 0.9619331431438748;
    msg.custom_x = 0.023426616984429605;
    msg.custom_y = 0.7933099756138404;
    msg.custom_z = 0.37819870264013233;

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
    msg.setTimeStamp(0.9277690147267381);
    msg.setSource(23304U);
    msg.setSourceEntity(73U);
    msg.setDestination(13903U);
    msg.setDestinationEntity(4U);
    msg.utc_time = 0.6073239487312219;
    msg.reason = 42U;

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
    msg.setTimeStamp(0.3854032280769941);
    msg.setSource(39775U);
    msg.setSourceEntity(185U);
    msg.setDestination(59109U);
    msg.setDestinationEntity(77U);
    msg.utc_time = 0.7139811541036679;
    msg.reason = 121U;

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
    msg.setTimeStamp(0.1759560399966238);
    msg.setSource(10872U);
    msg.setSourceEntity(64U);
    msg.setDestination(12910U);
    msg.setDestinationEntity(66U);
    msg.utc_time = 0.04451631922925248;
    msg.reason = 160U;

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
    msg.setTimeStamp(0.8882148088354919);
    msg.setSource(40965U);
    msg.setSourceEntity(7U);
    msg.setDestination(1421U);
    msg.setDestinationEntity(203U);
    msg.id = 62U;
    msg.range = 0.34594512660584464;
    msg.acceptance = 163U;

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
    msg.setTimeStamp(0.48444807331430806);
    msg.setSource(63664U);
    msg.setSourceEntity(209U);
    msg.setDestination(57582U);
    msg.setDestinationEntity(90U);
    msg.id = 108U;
    msg.range = 0.303233684602086;
    msg.acceptance = 244U;

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
    msg.setTimeStamp(0.8683933157916918);
    msg.setSource(13888U);
    msg.setSourceEntity(204U);
    msg.setDestination(26548U);
    msg.setDestinationEntity(185U);
    msg.id = 60U;
    msg.range = 0.795875299599321;
    msg.acceptance = 41U;

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
    msg.setTimeStamp(0.7327376448941888);
    msg.setSource(9345U);
    msg.setSourceEntity(105U);
    msg.setDestination(59752U);
    msg.setDestinationEntity(85U);
    msg.type = 47U;
    msg.reason = 68U;
    msg.value = 0.20888886813968865;
    msg.timestep = 0.006430783717042421;

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
    msg.setTimeStamp(0.37398865677279736);
    msg.setSource(5507U);
    msg.setSourceEntity(232U);
    msg.setDestination(27849U);
    msg.setDestinationEntity(179U);
    msg.type = 179U;
    msg.reason = 68U;
    msg.value = 0.9049200220234972;
    msg.timestep = 0.15957811754669382;

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
    msg.setTimeStamp(0.7210004698881601);
    msg.setSource(45628U);
    msg.setSourceEntity(70U);
    msg.setDestination(37471U);
    msg.setDestinationEntity(6U);
    msg.type = 229U;
    msg.reason = 240U;
    msg.value = 0.7126562794344458;
    msg.timestep = 0.4235186986128272;

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
    msg.setTimeStamp(0.7730319859543153);
    msg.setSource(31425U);
    msg.setSourceEntity(94U);
    msg.setDestination(50115U);
    msg.setDestinationEntity(162U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KICIOTMXDAHPFUPCBZPMFJWLESOOZQAZVNJFCMNMRLGEKKZCSTGFYJQZLBZIQBXJIMRUOEOJWTWRJTQBBTUQYGRPVIYVUAEFKBDWXWQI");
    tmp_msg_0.lat = 0.8743256253395841;
    tmp_msg_0.lon = 0.1449656070884543;
    tmp_msg_0.depth = 0.7123700040068284;
    tmp_msg_0.query_channel = 53U;
    tmp_msg_0.reply_channel = 242U;
    tmp_msg_0.transponder_delay = 67U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5588793801143226;
    msg.y = 0.7768640714819216;
    msg.var_x = 0.3029731313163052;
    msg.var_y = 0.9437504771413271;
    msg.distance = 0.8578999169506306;

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
    msg.setTimeStamp(0.25826937967547114);
    msg.setSource(26253U);
    msg.setSourceEntity(107U);
    msg.setDestination(30881U);
    msg.setDestinationEntity(115U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EPHQKUULIHXNECGUZKTHBAZBSBAXSXRQDFEUATFNFGKYEGZWYIUUQYWYRRTYRJNPOHTBNAGSTXINDPTMQMWAHBMISCTPNJGWKBUECVGQJONCVSQKWCKJARDAPXKZOBLGZFVFOMICHZVWKHSD");
    tmp_msg_0.lat = 0.891989900033243;
    tmp_msg_0.lon = 0.25744682147704767;
    tmp_msg_0.depth = 0.03014846054314191;
    tmp_msg_0.query_channel = 213U;
    tmp_msg_0.reply_channel = 207U;
    tmp_msg_0.transponder_delay = 250U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9100688972997645;
    msg.y = 0.5959411449675592;
    msg.var_x = 0.23710167845036378;
    msg.var_y = 0.8851325313454135;
    msg.distance = 0.921412524556085;

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
    msg.setTimeStamp(0.4526067512419456);
    msg.setSource(2290U);
    msg.setSourceEntity(170U);
    msg.setDestination(45161U);
    msg.setDestinationEntity(50U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NADURCTESOPOOCKMATBSWMGNSJGGETXPQAVLSHAOQOQMMQDIHFIVSFYVXKEWONJLIYCXAXDPGGNMYRGADHQOGMEITFBUIRAPNNZWUUPVCHKHLIWASARWVGBYRZFQCZGHCWXYCLYZVPQKCJMUOXSWUFKNICPZDBRNVIWFIRHEETQMLYTZWEKZDTSWUQXNPEODTIUSJVPTBRBKZVVFEBPOKTGUBLJMKBYDXXMBJJXEFJFYHLRYZJ");
    tmp_msg_0.lat = 0.45734168434554645;
    tmp_msg_0.lon = 0.5949274477161336;
    tmp_msg_0.depth = 0.3773230713710555;
    tmp_msg_0.query_channel = 208U;
    tmp_msg_0.reply_channel = 50U;
    tmp_msg_0.transponder_delay = 150U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.44290883766358846;
    msg.y = 0.6890398996354261;
    msg.var_x = 0.9558882109215359;
    msg.var_y = 0.25924211465688507;
    msg.distance = 0.7597805668911702;

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
    msg.setTimeStamp(0.88307465869182);
    msg.setSource(37885U);
    msg.setSourceEntity(126U);
    msg.setDestination(21929U);
    msg.setDestinationEntity(253U);
    msg.state = 236U;

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
    msg.setTimeStamp(0.750375778857092);
    msg.setSource(59341U);
    msg.setSourceEntity(122U);
    msg.setDestination(55854U);
    msg.setDestinationEntity(114U);
    msg.state = 215U;

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
    msg.setTimeStamp(0.046031546991217476);
    msg.setSource(57687U);
    msg.setSourceEntity(8U);
    msg.setDestination(5861U);
    msg.setDestinationEntity(170U);
    msg.state = 72U;

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
    msg.setTimeStamp(0.46932298815839124);
    msg.setSource(11095U);
    msg.setSourceEntity(171U);
    msg.setDestination(31660U);
    msg.setDestinationEntity(75U);
    msg.x = 0.07595351187019006;
    msg.y = 0.5653128642737543;
    msg.z = 0.4698176367053962;

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
    msg.setTimeStamp(0.08004042372837983);
    msg.setSource(55912U);
    msg.setSourceEntity(35U);
    msg.setDestination(40962U);
    msg.setDestinationEntity(7U);
    msg.x = 0.5405570848585942;
    msg.y = 0.1861962724765741;
    msg.z = 0.9045508426451886;

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
    msg.setTimeStamp(0.4563843874540805);
    msg.setSource(33044U);
    msg.setSourceEntity(233U);
    msg.setDestination(42098U);
    msg.setDestinationEntity(47U);
    msg.x = 0.9639714053292505;
    msg.y = 0.1234714486985834;
    msg.z = 0.5627778829107745;

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
    msg.setTimeStamp(0.5552153336966564);
    msg.setSource(45588U);
    msg.setSourceEntity(159U);
    msg.setDestination(34922U);
    msg.setDestinationEntity(62U);
    msg.va = 0.9397418262216987;
    msg.aoa = 0.7923533700410528;
    msg.ssa = 0.13272309071092048;

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
    msg.setTimeStamp(0.8338995480423274);
    msg.setSource(49349U);
    msg.setSourceEntity(17U);
    msg.setDestination(28091U);
    msg.setDestinationEntity(71U);
    msg.va = 0.6510177298987148;
    msg.aoa = 0.7233070121333526;
    msg.ssa = 0.31945955739373233;

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
    msg.setTimeStamp(0.7351297121284646);
    msg.setSource(33774U);
    msg.setSourceEntity(20U);
    msg.setDestination(11523U);
    msg.setDestinationEntity(106U);
    msg.va = 0.6177655667665016;
    msg.aoa = 0.26721043636638575;
    msg.ssa = 0.07499253724266808;

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
    msg.setTimeStamp(0.5640125452328475);
    msg.setSource(27034U);
    msg.setSourceEntity(73U);
    msg.setDestination(59571U);
    msg.setDestinationEntity(54U);
    msg.value = 0.48394258031347603;

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
    msg.setTimeStamp(0.20587064139722933);
    msg.setSource(583U);
    msg.setSourceEntity(134U);
    msg.setDestination(15420U);
    msg.setDestinationEntity(81U);
    msg.value = 0.5679266027988126;

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
    msg.setTimeStamp(0.8148802398913368);
    msg.setSource(31027U);
    msg.setSourceEntity(219U);
    msg.setDestination(40319U);
    msg.setDestinationEntity(152U);
    msg.value = 0.6346925382409907;

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
    msg.setTimeStamp(0.28077892030532214);
    msg.setSource(17862U);
    msg.setSourceEntity(164U);
    msg.setDestination(19409U);
    msg.setDestinationEntity(139U);
    msg.value = 0.3524392393470597;
    msg.z_units = 109U;

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
    msg.setTimeStamp(0.024298102147966905);
    msg.setSource(51638U);
    msg.setSourceEntity(113U);
    msg.setDestination(15189U);
    msg.setDestinationEntity(209U);
    msg.value = 0.9427659221456749;
    msg.z_units = 39U;

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
    msg.setTimeStamp(0.7150296451850195);
    msg.setSource(24239U);
    msg.setSourceEntity(213U);
    msg.setDestination(19156U);
    msg.setDestinationEntity(105U);
    msg.value = 0.8655843021427022;
    msg.z_units = 15U;

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
    msg.setTimeStamp(0.3878166332788695);
    msg.setSource(41953U);
    msg.setSourceEntity(229U);
    msg.setDestination(15106U);
    msg.setDestinationEntity(114U);
    msg.value = 0.29454371899504483;
    msg.speed_units = 122U;

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
    msg.setTimeStamp(0.6887766672839573);
    msg.setSource(38412U);
    msg.setSourceEntity(163U);
    msg.setDestination(13120U);
    msg.setDestinationEntity(221U);
    msg.value = 0.19324918113141643;
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
    msg.setTimeStamp(0.3332549425503528);
    msg.setSource(18568U);
    msg.setSourceEntity(163U);
    msg.setDestination(54202U);
    msg.setDestinationEntity(202U);
    msg.value = 0.4819942246793736;
    msg.speed_units = 57U;

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
    msg.setTimeStamp(0.9807948063396149);
    msg.setSource(9482U);
    msg.setSourceEntity(209U);
    msg.setDestination(33967U);
    msg.setDestinationEntity(93U);
    msg.value = 0.44482428933658413;

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
    msg.setTimeStamp(0.8414474460969862);
    msg.setSource(29256U);
    msg.setSourceEntity(0U);
    msg.setDestination(42884U);
    msg.setDestinationEntity(73U);
    msg.value = 0.43650975210935894;

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
    msg.setTimeStamp(0.35304161565344305);
    msg.setSource(12549U);
    msg.setSourceEntity(14U);
    msg.setDestination(2196U);
    msg.setDestinationEntity(0U);
    msg.value = 0.2049047001108555;

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
    msg.setTimeStamp(0.14772698265769124);
    msg.setSource(35967U);
    msg.setSourceEntity(77U);
    msg.setDestination(21669U);
    msg.setDestinationEntity(83U);
    msg.value = 0.7984214321554338;

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
    msg.setTimeStamp(0.23242447729422);
    msg.setSource(23731U);
    msg.setSourceEntity(238U);
    msg.setDestination(25704U);
    msg.setDestinationEntity(156U);
    msg.value = 0.4862182635740153;

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
    msg.setTimeStamp(0.7496813688755843);
    msg.setSource(15058U);
    msg.setSourceEntity(102U);
    msg.setDestination(37000U);
    msg.setDestinationEntity(10U);
    msg.value = 0.8736176187770089;

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
    msg.setTimeStamp(0.6597471387724405);
    msg.setSource(22398U);
    msg.setSourceEntity(171U);
    msg.setDestination(13917U);
    msg.setDestinationEntity(207U);
    msg.value = 0.5717358384938565;

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
    msg.setTimeStamp(0.6443399619262087);
    msg.setSource(28821U);
    msg.setSourceEntity(15U);
    msg.setDestination(11967U);
    msg.setDestinationEntity(221U);
    msg.value = 0.8655800993881494;

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
    msg.setTimeStamp(0.3871316374156166);
    msg.setSource(21583U);
    msg.setSourceEntity(51U);
    msg.setDestination(752U);
    msg.setDestinationEntity(127U);
    msg.value = 0.09286345123243223;

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
    msg.setTimeStamp(0.022552467247095698);
    msg.setSource(15477U);
    msg.setSourceEntity(235U);
    msg.setDestination(11886U);
    msg.setDestinationEntity(223U);
    msg.path_ref = 2356646921U;
    msg.start_lat = 0.8414212095268746;
    msg.start_lon = 0.38133816463105163;
    msg.start_z = 0.2821097942758013;
    msg.start_z_units = 96U;
    msg.end_lat = 0.45786316415937045;
    msg.end_lon = 0.19134705208620384;
    msg.end_z = 0.6661577387709886;
    msg.end_z_units = 188U;
    msg.speed = 0.41487927126554847;
    msg.speed_units = 224U;
    msg.lradius = 0.6799966076643436;
    msg.flags = 139U;

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
    msg.setTimeStamp(0.8003650152896163);
    msg.setSource(34666U);
    msg.setSourceEntity(133U);
    msg.setDestination(48571U);
    msg.setDestinationEntity(63U);
    msg.path_ref = 4193442535U;
    msg.start_lat = 0.5990599808506897;
    msg.start_lon = 0.6690066047451921;
    msg.start_z = 0.47726585494687834;
    msg.start_z_units = 170U;
    msg.end_lat = 0.6057817697279146;
    msg.end_lon = 0.9883770936250981;
    msg.end_z = 0.5891533819464283;
    msg.end_z_units = 221U;
    msg.speed = 0.7829780462845561;
    msg.speed_units = 233U;
    msg.lradius = 0.5474202670672306;
    msg.flags = 61U;

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
    msg.setTimeStamp(0.44409104172504743);
    msg.setSource(48147U);
    msg.setSourceEntity(195U);
    msg.setDestination(7919U);
    msg.setDestinationEntity(238U);
    msg.path_ref = 1924628629U;
    msg.start_lat = 0.11179761108783237;
    msg.start_lon = 0.5116276575824136;
    msg.start_z = 0.40281984326995135;
    msg.start_z_units = 121U;
    msg.end_lat = 0.7663079695560309;
    msg.end_lon = 0.5175264339257774;
    msg.end_z = 0.23503950023290532;
    msg.end_z_units = 135U;
    msg.speed = 0.8743440013856915;
    msg.speed_units = 1U;
    msg.lradius = 0.23073451571610015;
    msg.flags = 11U;

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
    msg.setTimeStamp(0.34079111565514164);
    msg.setSource(46872U);
    msg.setSourceEntity(11U);
    msg.setDestination(8527U);
    msg.setDestinationEntity(45U);
    msg.x = 0.8861275343509227;
    msg.y = 0.7169736157612697;
    msg.z = 0.9854998330290896;
    msg.k = 0.1321711611275851;
    msg.m = 0.4645100228921831;
    msg.n = 0.4705836079839312;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.12410736791189825);
    msg.setSource(59488U);
    msg.setSourceEntity(5U);
    msg.setDestination(57884U);
    msg.setDestinationEntity(204U);
    msg.x = 0.8405493014423637;
    msg.y = 0.711289414120794;
    msg.z = 0.5122565655218368;
    msg.k = 0.2609857510232978;
    msg.m = 0.724783583326723;
    msg.n = 0.7036119740591322;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.5109407990876119);
    msg.setSource(18761U);
    msg.setSourceEntity(77U);
    msg.setDestination(39003U);
    msg.setDestinationEntity(11U);
    msg.x = 0.566974900813234;
    msg.y = 0.13290788541427367;
    msg.z = 0.4908890938113395;
    msg.k = 0.9680569823855116;
    msg.m = 0.981338757295381;
    msg.n = 0.11162719495594242;
    msg.flags = 89U;

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
    msg.setTimeStamp(0.6570262170679569);
    msg.setSource(60252U);
    msg.setSourceEntity(249U);
    msg.setDestination(11776U);
    msg.setDestinationEntity(180U);
    msg.value = 0.4627456854518631;

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
    msg.setTimeStamp(0.5072582295567055);
    msg.setSource(43892U);
    msg.setSourceEntity(24U);
    msg.setDestination(23681U);
    msg.setDestinationEntity(108U);
    msg.value = 0.02669424635382589;

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
    msg.setTimeStamp(0.9536287051283201);
    msg.setSource(5456U);
    msg.setSourceEntity(216U);
    msg.setDestination(35643U);
    msg.setDestinationEntity(154U);
    msg.value = 0.8162897522683232;

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
    msg.setTimeStamp(0.33012982784550826);
    msg.setSource(52282U);
    msg.setSourceEntity(70U);
    msg.setDestination(29610U);
    msg.setDestinationEntity(214U);
    msg.u = 0.6248506880059326;
    msg.v = 0.5768987776976773;
    msg.w = 0.708111472440519;
    msg.p = 0.7277935704200481;
    msg.q = 0.6956079532577236;
    msg.r = 0.28064251637076565;
    msg.flags = 239U;

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
    msg.setTimeStamp(0.7632842824328216);
    msg.setSource(24865U);
    msg.setSourceEntity(94U);
    msg.setDestination(57344U);
    msg.setDestinationEntity(63U);
    msg.u = 0.011482363659615302;
    msg.v = 0.9324427785446526;
    msg.w = 0.3577537236957202;
    msg.p = 0.4945303434074926;
    msg.q = 0.9856682573565471;
    msg.r = 0.5542653246960739;
    msg.flags = 4U;

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
    msg.setTimeStamp(0.21950551122382778);
    msg.setSource(18714U);
    msg.setSourceEntity(123U);
    msg.setDestination(46694U);
    msg.setDestinationEntity(81U);
    msg.u = 0.26864595091955457;
    msg.v = 0.5069034369615407;
    msg.w = 0.5226224558779137;
    msg.p = 0.15395592050579232;
    msg.q = 0.011836747255903557;
    msg.r = 0.42034088707278683;
    msg.flags = 179U;

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
    msg.setTimeStamp(0.8111580527279554);
    msg.setSource(14535U);
    msg.setSourceEntity(254U);
    msg.setDestination(55156U);
    msg.setDestinationEntity(164U);
    msg.path_ref = 2109026002U;
    msg.start_lat = 0.24387756970191243;
    msg.start_lon = 0.7415019596470482;
    msg.start_z = 0.2019400875616807;
    msg.start_z_units = 161U;
    msg.end_lat = 0.7141025114973458;
    msg.end_lon = 0.38299575320360346;
    msg.end_z = 0.15897696784240523;
    msg.end_z_units = 101U;
    msg.lradius = 0.7695046429933454;
    msg.flags = 67U;
    msg.x = 0.5372051996361324;
    msg.y = 0.8541747842013406;
    msg.z = 0.4054340946489441;
    msg.vx = 0.14386207637898119;
    msg.vy = 0.5268022312677122;
    msg.vz = 0.21450382493303133;
    msg.course_error = 0.413053867252304;
    msg.eta = 63566U;

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
    msg.setTimeStamp(0.3802853845295536);
    msg.setSource(41374U);
    msg.setSourceEntity(6U);
    msg.setDestination(20775U);
    msg.setDestinationEntity(46U);
    msg.path_ref = 2367122360U;
    msg.start_lat = 0.5158771439885355;
    msg.start_lon = 0.5997856305859967;
    msg.start_z = 0.47283088773713733;
    msg.start_z_units = 69U;
    msg.end_lat = 0.7692988703740294;
    msg.end_lon = 0.47033901444212767;
    msg.end_z = 0.11356686930181992;
    msg.end_z_units = 202U;
    msg.lradius = 0.09704539563515735;
    msg.flags = 103U;
    msg.x = 0.41486871704954087;
    msg.y = 0.039860214020942863;
    msg.z = 0.7201142128532103;
    msg.vx = 0.6115449346013327;
    msg.vy = 0.63123313601696;
    msg.vz = 0.873788769446278;
    msg.course_error = 0.5659774738812475;
    msg.eta = 63448U;

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
    msg.setTimeStamp(0.43684972759019736);
    msg.setSource(7497U);
    msg.setSourceEntity(230U);
    msg.setDestination(2336U);
    msg.setDestinationEntity(119U);
    msg.path_ref = 2404395491U;
    msg.start_lat = 0.7416234086271875;
    msg.start_lon = 0.9049714072889162;
    msg.start_z = 0.8580894777807383;
    msg.start_z_units = 245U;
    msg.end_lat = 0.21876507674351475;
    msg.end_lon = 0.24702403111276727;
    msg.end_z = 0.023478394572366;
    msg.end_z_units = 1U;
    msg.lradius = 0.5514882048842964;
    msg.flags = 215U;
    msg.x = 0.2402767386618565;
    msg.y = 0.328524658592405;
    msg.z = 0.6079910632470625;
    msg.vx = 0.9311102552445332;
    msg.vy = 0.7505397629576592;
    msg.vz = 0.7288044835956543;
    msg.course_error = 0.8056372613801467;
    msg.eta = 41727U;

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
    msg.setTimeStamp(0.5309126771747273);
    msg.setSource(23151U);
    msg.setSourceEntity(49U);
    msg.setDestination(58999U);
    msg.setDestinationEntity(189U);
    msg.k = 0.43902420907802187;
    msg.m = 0.9733856431518116;
    msg.n = 0.2928446199813701;

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
    msg.setTimeStamp(0.6972249332276116);
    msg.setSource(19920U);
    msg.setSourceEntity(96U);
    msg.setDestination(970U);
    msg.setDestinationEntity(232U);
    msg.k = 0.10346641913914312;
    msg.m = 0.10338828621232721;
    msg.n = 0.8099610067359198;

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
    msg.setTimeStamp(0.8559556447105983);
    msg.setSource(24241U);
    msg.setSourceEntity(239U);
    msg.setDestination(40354U);
    msg.setDestinationEntity(199U);
    msg.k = 0.3370172352619709;
    msg.m = 0.3689481546103688;
    msg.n = 0.6604761369836116;

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
    msg.setTimeStamp(0.5539859603152398);
    msg.setSource(57332U);
    msg.setSourceEntity(190U);
    msg.setDestination(54351U);
    msg.setDestinationEntity(173U);
    msg.p = 0.6500798162374101;
    msg.i = 0.45607720865712964;
    msg.d = 0.9702203262806595;
    msg.a = 0.4939936224670278;

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
    msg.setTimeStamp(0.7294534508322258);
    msg.setSource(23579U);
    msg.setSourceEntity(91U);
    msg.setDestination(53909U);
    msg.setDestinationEntity(221U);
    msg.p = 0.7887835381001214;
    msg.i = 0.30921305076646277;
    msg.d = 0.5668472038764326;
    msg.a = 0.0774400230258997;

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
    msg.setTimeStamp(0.4208288222556692);
    msg.setSource(52506U);
    msg.setSourceEntity(251U);
    msg.setDestination(53827U);
    msg.setDestinationEntity(14U);
    msg.p = 0.7133753584098919;
    msg.i = 0.5859912216714499;
    msg.d = 0.4175390446732874;
    msg.a = 0.6581416432977463;

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
    msg.setTimeStamp(0.14925305365099406);
    msg.setSource(44533U);
    msg.setSourceEntity(170U);
    msg.setDestination(23967U);
    msg.setDestinationEntity(75U);
    msg.op = 106U;

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
    msg.setTimeStamp(0.6683238909424514);
    msg.setSource(50582U);
    msg.setSourceEntity(79U);
    msg.setDestination(52435U);
    msg.setDestinationEntity(240U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.5059005382270838);
    msg.setSource(20011U);
    msg.setSourceEntity(56U);
    msg.setDestination(25341U);
    msg.setDestinationEntity(195U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.45916253079537506);
    msg.setSource(46076U);
    msg.setSourceEntity(153U);
    msg.setDestination(57989U);
    msg.setDestinationEntity(238U);
    msg.x = 0.6665937588669747;
    msg.y = 0.037181511940048706;
    msg.z = 0.34848280299709045;
    msg.vx = 0.6378862169440835;
    msg.vy = 0.6075524649948006;
    msg.vz = 0.577689378820402;
    msg.ax = 0.37104742010364844;
    msg.ay = 0.5562818003741913;
    msg.az = 0.12589289568388407;
    msg.flags = 4703U;

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
    msg.setTimeStamp(0.1214605554718543);
    msg.setSource(53784U);
    msg.setSourceEntity(24U);
    msg.setDestination(4306U);
    msg.setDestinationEntity(102U);
    msg.x = 0.647389382916027;
    msg.y = 0.3755544605654606;
    msg.z = 0.33894607627358453;
    msg.vx = 0.7905509970396697;
    msg.vy = 0.8670612946854234;
    msg.vz = 0.767724281623824;
    msg.ax = 0.8376791740703499;
    msg.ay = 0.9207117715884359;
    msg.az = 0.7469386350214524;
    msg.flags = 32575U;

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
    msg.setTimeStamp(0.5795353584997646);
    msg.setSource(39327U);
    msg.setSourceEntity(203U);
    msg.setDestination(5353U);
    msg.setDestinationEntity(170U);
    msg.x = 0.4592760974168779;
    msg.y = 0.7459609534140996;
    msg.z = 0.966504680456798;
    msg.vx = 0.16432176155871536;
    msg.vy = 0.12417266987677344;
    msg.vz = 0.44825714134003236;
    msg.ax = 0.8718640135811018;
    msg.ay = 0.6088986518978671;
    msg.az = 0.8678916932169424;
    msg.flags = 25904U;

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
    msg.setTimeStamp(0.33734549600719044);
    msg.setSource(33949U);
    msg.setSourceEntity(80U);
    msg.setDestination(33885U);
    msg.setDestinationEntity(88U);
    msg.value = 0.5924250956186238;

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
    msg.setTimeStamp(0.2689230919160095);
    msg.setSource(57610U);
    msg.setSourceEntity(154U);
    msg.setDestination(14763U);
    msg.setDestinationEntity(70U);
    msg.value = 0.6441333527394524;

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
    msg.setTimeStamp(0.2920235712757504);
    msg.setSource(7807U);
    msg.setSourceEntity(254U);
    msg.setDestination(6271U);
    msg.setDestinationEntity(2U);
    msg.value = 0.20193067786330943;

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
    msg.setTimeStamp(0.48159271371219603);
    msg.setSource(48433U);
    msg.setSourceEntity(185U);
    msg.setDestination(19364U);
    msg.setDestinationEntity(169U);
    msg.timeout = 53701U;
    msg.lat = 0.7606540664845513;
    msg.lon = 0.8833591246905871;
    msg.z = 0.02487274349769375;
    msg.z_units = 87U;
    msg.speed = 0.4412591174106063;
    msg.speed_units = 204U;
    msg.roll = 0.18787046557180742;
    msg.pitch = 0.5606822137484928;
    msg.yaw = 0.945482383719817;
    msg.custom.assign("XRPVJTOPANCGFXQFTSAFJSPSJKKRREWVPBBOFZNHPDSACVHYIZGJGRLKHBLMJYZQAWAUYLXXCDIYFUIOEDGIEMLBGIUERSEJBCKBVSTQZMANOOFQAGHCMLPDTNZDUSCVXDMICYDMIJTNVPTO");

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
    msg.setTimeStamp(0.07815799795841905);
    msg.setSource(17595U);
    msg.setSourceEntity(231U);
    msg.setDestination(17082U);
    msg.setDestinationEntity(7U);
    msg.timeout = 34101U;
    msg.lat = 0.7825668723836691;
    msg.lon = 0.925764075398214;
    msg.z = 0.4032767601349835;
    msg.z_units = 216U;
    msg.speed = 0.3248913552889384;
    msg.speed_units = 62U;
    msg.roll = 0.3812234760674269;
    msg.pitch = 0.8572780255513971;
    msg.yaw = 0.4091323996922319;
    msg.custom.assign("GMFIUZHBIJVDJVSWU");

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
    msg.setTimeStamp(0.5062755198702418);
    msg.setSource(12649U);
    msg.setSourceEntity(246U);
    msg.setDestination(52876U);
    msg.setDestinationEntity(151U);
    msg.timeout = 20374U;
    msg.lat = 0.7577074808938895;
    msg.lon = 0.003864488617765338;
    msg.z = 0.5484040806917405;
    msg.z_units = 188U;
    msg.speed = 0.03948637634231178;
    msg.speed_units = 217U;
    msg.roll = 0.6097156952859625;
    msg.pitch = 0.4899108364133853;
    msg.yaw = 0.23818255314963477;
    msg.custom.assign("NOFVIXYVVCFAHFOGIKHXDCMMBKZQAHEBWGMEYEWVGJZMEYUKJLOTMUQESXCHPRYLROSCYYXWRLJGEXMTXFSCPUAORFUTK");

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
    msg.setTimeStamp(0.39169351104522954);
    msg.setSource(2096U);
    msg.setSourceEntity(40U);
    msg.setDestination(34803U);
    msg.setDestinationEntity(238U);
    msg.timeout = 56486U;
    msg.lat = 0.5481942589095241;
    msg.lon = 0.18129644023487002;
    msg.z = 0.19217989083977238;
    msg.z_units = 188U;
    msg.speed = 0.8485399398225796;
    msg.speed_units = 17U;
    msg.duration = 11655U;
    msg.radius = 0.1281871032861165;
    msg.flags = 141U;
    msg.custom.assign("KZLPIQEAHTMYDXTNVKNXISXZSHANYOCDPROKPZD");

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
    msg.setTimeStamp(0.6992875578766478);
    msg.setSource(42818U);
    msg.setSourceEntity(236U);
    msg.setDestination(25689U);
    msg.setDestinationEntity(67U);
    msg.timeout = 16176U;
    msg.lat = 0.30096583336116967;
    msg.lon = 0.7059416900677584;
    msg.z = 0.5517879897407161;
    msg.z_units = 146U;
    msg.speed = 0.18603105265240327;
    msg.speed_units = 105U;
    msg.duration = 33639U;
    msg.radius = 0.36970420957817096;
    msg.flags = 253U;
    msg.custom.assign("JUQPDHMOIPMKDATEGMRGOUSXRWOEJUJYCZENPWYFJVPHCPSPPWUVRCAJEHUQQIVMNSOZKKNNNGYRKFSBFCXXXVVWKVLIXFIVDWUKOAVSYBWGNFMKLMEYERIIUHMHVFRBPABSTZEDDWOHATGWXHTZDZODDTZYRESGCJXFDCSLUCGW");

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
    msg.setTimeStamp(0.5226707078439494);
    msg.setSource(52706U);
    msg.setSourceEntity(188U);
    msg.setDestination(27426U);
    msg.setDestinationEntity(31U);
    msg.timeout = 59246U;
    msg.lat = 0.06469691186445103;
    msg.lon = 0.33491746605763706;
    msg.z = 0.3985959146317182;
    msg.z_units = 19U;
    msg.speed = 0.24974253926016865;
    msg.speed_units = 115U;
    msg.duration = 31256U;
    msg.radius = 0.1742800844757877;
    msg.flags = 116U;
    msg.custom.assign("XCMPGZFTDMGDPAKEMUVCGSVZYXVGLGIXJMDKKENFHTJVBDAZOOYZXXOQFQOCRUADANCNYGBHSXVMDIXEUQTLSUKGYCWIOFAAORRKEDSFRLISIMDHKUXWJOEFRZAH");

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
    msg.setTimeStamp(0.738226654306027);
    msg.setSource(6880U);
    msg.setSourceEntity(186U);
    msg.setDestination(20526U);
    msg.setDestinationEntity(104U);
    msg.custom.assign("QDCULYQHNHOXVKXTKJUSGLZKAQUCKXIBESLFEAPPPFQTRBWTIHJOBXOOJFFH");

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
    msg.setTimeStamp(0.47294733956357715);
    msg.setSource(46121U);
    msg.setSourceEntity(124U);
    msg.setDestination(32859U);
    msg.setDestinationEntity(138U);
    msg.custom.assign("OSVKCAQVOZZWULUENXDWTSMLBBLDNUVTAIOBEDHHRUTRNDOMEGEMTUXQNLJPODYFELIIPXFUMHHHVP");

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
    msg.setTimeStamp(0.670692662788052);
    msg.setSource(27031U);
    msg.setSourceEntity(113U);
    msg.setDestination(58999U);
    msg.setDestinationEntity(187U);
    msg.custom.assign("TBMDOTVAGYRHQDWOZPJELIREKUSQDUJUPZWAMKPVZMSDSUYCFTQZUESWBVGMOPKKGNDCRILJHEEPMFNTBPN");

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
    msg.setTimeStamp(0.6485741248919514);
    msg.setSource(17892U);
    msg.setSourceEntity(184U);
    msg.setDestination(61551U);
    msg.setDestinationEntity(89U);
    msg.timeout = 54422U;
    msg.lat = 0.4858197185813179;
    msg.lon = 0.28313649870344115;
    msg.z = 0.2170167114146173;
    msg.z_units = 163U;
    msg.duration = 39863U;
    msg.speed = 0.1422023273647428;
    msg.speed_units = 163U;
    msg.type = 82U;
    msg.radius = 0.4948488822841821;
    msg.length = 0.9262172467385569;
    msg.bearing = 0.9043582809100036;
    msg.direction = 81U;
    msg.custom.assign("UAXKZPROCTGXDEFKLJPCZZTEYQNURALCYGTFGNXKKNPHTFHMRFPVJCGHWSJXIJWQYRZFGDLMFTBGBVZUOVYQMVEMAFVQDHVAPDUKBAFMCMWIZCVFRQHOSNEXUBSNKIMNYNLIGLBAVGHDOELHJOEIMWABEALRBZDYKLATXAKBHPRNSSROZZQUSWSTUXTSIZYXCRDTNSQQYHOYJTWYWLXMW");

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
    msg.setTimeStamp(0.5197128714755084);
    msg.setSource(11073U);
    msg.setSourceEntity(187U);
    msg.setDestination(31704U);
    msg.setDestinationEntity(135U);
    msg.timeout = 8425U;
    msg.lat = 0.7068273771115633;
    msg.lon = 0.900027558828723;
    msg.z = 0.537199622534221;
    msg.z_units = 149U;
    msg.duration = 41554U;
    msg.speed = 0.3824624178145203;
    msg.speed_units = 245U;
    msg.type = 222U;
    msg.radius = 0.31161555022206955;
    msg.length = 0.7932374680046431;
    msg.bearing = 0.5705797989967302;
    msg.direction = 2U;
    msg.custom.assign("WQDTZMKLMEVIPZCJKIXBYZFSTULEJPKUSCAKKNYOXIDFCHRRONVDYRBZQBVMEIRUNATOUCNQVISOSZZAFYKFNUSQXSBYTAYEBAGFFLJFCWGHQEHPVUWLLRGQPPQZPBJQPYXUCBNMSVRNHXTDOPCTCFBKGUNXYWDNXJWPGDKBTZSXGJUQAHLYADRZVVALTWAAJRQJZIMMKMIIHJTWFELOCWWXLGHOUIGBOODDHGMKVEFMEJXVMCOYIRES");

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
    msg.setTimeStamp(0.21940831357940216);
    msg.setSource(49991U);
    msg.setSourceEntity(164U);
    msg.setDestination(57764U);
    msg.setDestinationEntity(38U);
    msg.timeout = 14036U;
    msg.lat = 0.494016123354335;
    msg.lon = 0.8140416569751182;
    msg.z = 0.6108287058729698;
    msg.z_units = 238U;
    msg.duration = 49593U;
    msg.speed = 0.33055153355309574;
    msg.speed_units = 20U;
    msg.type = 209U;
    msg.radius = 0.8432128347842113;
    msg.length = 0.18444333568883509;
    msg.bearing = 0.21694242783368045;
    msg.direction = 182U;
    msg.custom.assign("UGKJQGLLZBZORERYAXXXSTVRDBZPGBXINMWCSBFWFPMIOVHRSLRBMUQLELUSKDBYFTSEWHZNHHDANGQJYVNXJACIHNOTXOF");

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
    msg.setTimeStamp(0.42669925284982513);
    msg.setSource(31484U);
    msg.setSourceEntity(199U);
    msg.setDestination(9825U);
    msg.setDestinationEntity(38U);
    msg.duration = 58954U;
    msg.custom.assign("TMDUGXSQNOZOLJYHXMNHZZUYHMXERDOVWXLPCWQFYIRRBARLUTUKOSDYDGMLLVSEPZIZOVQVPTPPPAPFGCRCRBCYAGOYVDEKDJREXKMECWXGSXETCWMZKBVLMNXFGBTJHKZJIUNHRB");

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
    msg.setTimeStamp(0.05893339734921865);
    msg.setSource(57139U);
    msg.setSourceEntity(120U);
    msg.setDestination(47290U);
    msg.setDestinationEntity(186U);
    msg.duration = 2495U;
    msg.custom.assign("QPODISZYJZYFJBJXUWHUFKWNFLKTSYDMKOFITKYXEQCZTBRFHBYOWGPMDDCPEFCOPPCOQDVGATUBVQBMIILGWVSXRCHA");

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
    msg.setTimeStamp(0.6348286776842829);
    msg.setSource(19442U);
    msg.setSourceEntity(201U);
    msg.setDestination(38748U);
    msg.setDestinationEntity(88U);
    msg.duration = 47158U;
    msg.custom.assign("TPVMHOUAHDWSZEBMXJPXEVDOGWUAKPCOIFEGVANRTGKURMCCXYZJNIBWBLXQEIQECAOYHBKYAVGTCFYOF");

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
    msg.setTimeStamp(0.7023255588763114);
    msg.setSource(28074U);
    msg.setSourceEntity(215U);
    msg.setDestination(41180U);
    msg.setDestinationEntity(22U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.23110808540143257;
    tmp_msg_0.speed_units = 222U;
    msg.control.set(tmp_msg_0);
    msg.duration = 57137U;
    msg.custom.assign("YPAAZFSQTDKVTOSNJCEXSNOTIBNTCHMTBAWSKVFCRWHMEKAAUXZZKLBWWKKXFERWANPDAIQRQEIPLMUEAXYKYBBGPJKZSMHWMFMBXRWDGEZDUGBRCRLOTQQUXJGJXOIQIYOIWSJFVHHQLGPDZKWTCSUDEPLHVZLIGXCFDXRXBSUVVTGQGJYANVNGIRZJPJVMHQJNSYMRNIDNKCYHZOELGWAFPPYFMFHFOUDMNIYOSCZYVTVUBQEBCLUDLOL");

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
    msg.setTimeStamp(0.12672176942635238);
    msg.setSource(55577U);
    msg.setSourceEntity(13U);
    msg.setDestination(1259U);
    msg.setDestinationEntity(116U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.6020844464541657;
    msg.control.set(tmp_msg_0);
    msg.duration = 38141U;
    msg.custom.assign("YITBWGFVDCVQGTKXAVHDFEPHMTYLROJUUBKKBZZOUPNHCEIINIQPOSSATWHGWCBORBJRFYGPWUGRTXDDJBLYHCSPINBANULWYWQYJJQWEMLCNDMNZHXQFXXCXHMTFSIZKPMCZKPEACMJKVIEPPDOLMGHYUXQLQMCSVYBRWOV");

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
    msg.setTimeStamp(0.010489993340349502);
    msg.setSource(28316U);
    msg.setSourceEntity(185U);
    msg.setDestination(46619U);
    msg.setDestinationEntity(195U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.030225746681053933;
    tmp_msg_0.speed_units = 151U;
    msg.control.set(tmp_msg_0);
    msg.duration = 9200U;
    msg.custom.assign("OCRLJQXGZUOBFLKTMTAZHEIKMJZKGUXDSTYARBYGYFNDQNZDDIFEYUTIEPNJKPOXSLWHUVYCZCIJVDCBUKFXMGSAXWLOMNLNZIYWBBILHHBZUMQCHXAWBBWKIQSPHDGJFFPRADQFYFWVPLRTKOJBOSFJCHOIKCHAER");

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
    msg.setTimeStamp(0.936583154702105);
    msg.setSource(21490U);
    msg.setSourceEntity(159U);
    msg.setDestination(16372U);
    msg.setDestinationEntity(17U);
    msg.timeout = 30011U;
    msg.lat = 0.5097199313827602;
    msg.lon = 0.7238430228750355;
    msg.z = 0.4391648119145043;
    msg.z_units = 181U;
    msg.speed = 0.7643512942735723;
    msg.speed_units = 11U;
    msg.bearing = 0.8271451865527113;
    msg.cross_angle = 0.9141128333340984;
    msg.width = 0.7507790710481774;
    msg.length = 0.28907396044169875;
    msg.hstep = 0.005293413535922609;
    msg.coff = 62U;
    msg.alternation = 98U;
    msg.flags = 94U;
    msg.custom.assign("WNKYGWOGEUVJMSZNUKTQPBCYLBQQTRNXNEPDHJJZHYBLCDLXOCJCWFNJHZFEUFUHLATJRPWDTEXLRAYMTDPVSJJEMGXOMBRIDODFAFYWFDBXJORKRWYICIUXXRPESOOVXHXQUFWSRNDSGYGQXAHCSIVKWCPGSGZIVFPAPGHNQZZMEEUZDCLZSLCIAMCPVABMKUKLUIKVMATNHSF");

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
    msg.setTimeStamp(0.982904508531716);
    msg.setSource(18969U);
    msg.setSourceEntity(97U);
    msg.setDestination(63368U);
    msg.setDestinationEntity(115U);
    msg.timeout = 17253U;
    msg.lat = 0.5110114907419006;
    msg.lon = 0.37726786606084395;
    msg.z = 0.4201793953146815;
    msg.z_units = 25U;
    msg.speed = 0.08805947816551296;
    msg.speed_units = 60U;
    msg.bearing = 0.29264176530814223;
    msg.cross_angle = 0.8527736750965852;
    msg.width = 0.8825301501499504;
    msg.length = 0.8610712968495611;
    msg.hstep = 0.07761552334454802;
    msg.coff = 14U;
    msg.alternation = 204U;
    msg.flags = 193U;
    msg.custom.assign("GZBZJJQVAPRXBXCQINFNINDJAJGFJFVFNWFZCCYTHMGEVAIPJSEPVYZTJEXUWBZIVJDCKOORLLXNAIDYIXWRSEUTMDBOEUTLRLHMDVUKDHNPAORLCFKHDQWAMWIVSLFMQUBUDLCNPCYPPGKXBEOZZYRLZTJGGNXHHTVJRAYZVCYFMUWKKKUMSAWQQMUIPETTKOVYDZBRAOH");

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
    msg.setTimeStamp(0.016108953552907535);
    msg.setSource(27932U);
    msg.setSourceEntity(213U);
    msg.setDestination(56307U);
    msg.setDestinationEntity(234U);
    msg.timeout = 47880U;
    msg.lat = 0.7291965001566127;
    msg.lon = 0.13433589101445798;
    msg.z = 0.8143037337091925;
    msg.z_units = 186U;
    msg.speed = 0.9110687185417337;
    msg.speed_units = 214U;
    msg.bearing = 0.060826938843809186;
    msg.cross_angle = 0.8934729961522023;
    msg.width = 0.2928161364615066;
    msg.length = 0.9322907897686391;
    msg.hstep = 0.5872740182973213;
    msg.coff = 244U;
    msg.alternation = 248U;
    msg.flags = 139U;
    msg.custom.assign("GSXBITHCHBKESBDKHCGQRKJMLUKFMGDQVAQUZQISIYGFDHRRIZXDBVVOIVCJYCAZGMOCPHVXFUHGZOYFESPJXJFDKUPEPCX");

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
    msg.setTimeStamp(0.31920928138918647);
    msg.setSource(1982U);
    msg.setSourceEntity(18U);
    msg.setDestination(18041U);
    msg.setDestinationEntity(44U);
    msg.timeout = 36469U;
    msg.lat = 0.21032311125338854;
    msg.lon = 0.5038964936393658;
    msg.z = 0.4526299451602349;
    msg.z_units = 114U;
    msg.speed = 0.9104185443571434;
    msg.speed_units = 246U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.2513357208761672;
    tmp_msg_0.y = 0.6805584586031728;
    tmp_msg_0.z = 0.5311837538933426;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AETKVGKERIXCNTYRVJESTFBZPNAETKZDSUGGTXXQFDBKILLIKUCYSLXZRZQFZGJJDWLUWRRFYBROHFSNTI");

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
    msg.setTimeStamp(0.18130446307392722);
    msg.setSource(24419U);
    msg.setSourceEntity(128U);
    msg.setDestination(28334U);
    msg.setDestinationEntity(142U);
    msg.timeout = 63622U;
    msg.lat = 0.5128841780322353;
    msg.lon = 0.7101763612916225;
    msg.z = 0.040723591916082214;
    msg.z_units = 182U;
    msg.speed = 0.602234187593428;
    msg.speed_units = 158U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7762236560793727;
    tmp_msg_0.y = 0.16238522763736007;
    tmp_msg_0.z = 0.687248700504028;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AJMAJDPTEFPALZUQXGCRREUXUJKWLLWLNKSB");

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
    msg.setTimeStamp(0.42236263010241926);
    msg.setSource(60140U);
    msg.setSourceEntity(15U);
    msg.setDestination(39392U);
    msg.setDestinationEntity(96U);
    msg.timeout = 4211U;
    msg.lat = 0.5075170306597925;
    msg.lon = 0.5991821589839752;
    msg.z = 0.21254739977993442;
    msg.z_units = 208U;
    msg.speed = 0.5867372218386596;
    msg.speed_units = 194U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8990582919486789;
    tmp_msg_0.y = 0.000612752223706714;
    tmp_msg_0.z = 0.0799328588059901;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VNZWLCITATQNATELZMEBLHWVHBVKPQYIKWONGYMSHERRMHUHDPXIUUNNZVGTFAOZYGCOVTZNWZKZRUTYVBPHCCXNEFQXJDRBDDOCYPBKSTIQVYEBEMWDZQSGFBSGFTNJGDXFSXFOLGSNZLGETKWJPAUKXURSPQAMFJ");

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
    msg.setTimeStamp(0.8053345805365184);
    msg.setSource(43140U);
    msg.setSourceEntity(139U);
    msg.setDestination(49009U);
    msg.setDestinationEntity(101U);
    msg.x = 0.5324025513448971;
    msg.y = 0.9808856186945093;
    msg.z = 0.07311307874383666;

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
    msg.setTimeStamp(0.8184190348524991);
    msg.setSource(3335U);
    msg.setSourceEntity(52U);
    msg.setDestination(38100U);
    msg.setDestinationEntity(251U);
    msg.x = 0.44743143954671105;
    msg.y = 0.5552568858937564;
    msg.z = 0.5665197109125429;

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
    msg.setTimeStamp(0.9558459813919405);
    msg.setSource(44638U);
    msg.setSourceEntity(185U);
    msg.setDestination(41932U);
    msg.setDestinationEntity(254U);
    msg.x = 0.5020847949792976;
    msg.y = 0.4860413424560822;
    msg.z = 0.01413493050403869;

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
    msg.setTimeStamp(0.24910589636482328);
    msg.setSource(44765U);
    msg.setSourceEntity(154U);
    msg.setDestination(1601U);
    msg.setDestinationEntity(212U);
    msg.timeout = 60281U;
    msg.lat = 0.7721148855158207;
    msg.lon = 0.3893799521015726;
    msg.z = 0.8867040713447996;
    msg.z_units = 139U;
    msg.amplitude = 0.7420176250113;
    msg.pitch = 0.2051197416601036;
    msg.speed = 0.0044367412940991;
    msg.speed_units = 143U;
    msg.custom.assign("RFYLSOZCRPURLXILCGBHEVSQHFDAMQRQMKOVNGB");

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
    msg.setTimeStamp(0.6184373460518728);
    msg.setSource(21993U);
    msg.setSourceEntity(234U);
    msg.setDestination(5616U);
    msg.setDestinationEntity(128U);
    msg.timeout = 4490U;
    msg.lat = 0.24254800914531172;
    msg.lon = 0.9673614658848511;
    msg.z = 0.6482697948241087;
    msg.z_units = 193U;
    msg.amplitude = 0.9487696109673517;
    msg.pitch = 0.06043969795830251;
    msg.speed = 0.6757142119680232;
    msg.speed_units = 200U;
    msg.custom.assign("NTRIGZWNIMZQXIAWZXLXBOMUZIBPSDBJQXXMLESUORDRRGSGPFUTPIVWFKMGUMLZRRELBSWYCJWYCJOOYBKJUVVJSJANVFDNMOKHSEQQDXZFBYJFQHWFHWJRVAUNYRHLTAYNYIYEKHTVQZOPWCYXPDPTDGFFEQKILGOGOTVLTABQKAIVKDIFMEZNABMTPCN");

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
    msg.setTimeStamp(0.5796995199349146);
    msg.setSource(9144U);
    msg.setSourceEntity(166U);
    msg.setDestination(8900U);
    msg.setDestinationEntity(168U);
    msg.timeout = 13526U;
    msg.lat = 0.5538930337272423;
    msg.lon = 0.4894757708908708;
    msg.z = 0.13235696806906272;
    msg.z_units = 88U;
    msg.amplitude = 0.126807531273623;
    msg.pitch = 0.08811883026943634;
    msg.speed = 0.07043873607914519;
    msg.speed_units = 150U;
    msg.custom.assign("NUUMVRXEDRDJQEXNGSDZXUFIAGFYPWSCUDBYULDUYSZTEZBJMJOAJLRFCRPOZHBYLIJKVHNNZXLHCWWLPUAHYVPZAQXJTWTTAGOBXSPUXDEKSKBZCKOIRTFNXAVYMILLTFEWCOZWOKBXRGBRBLUHGNQYOQFJWHOKWTWNGYQPQHMZECMKFVCVOQVHHGTMLNFINDWOSMPFSJICXVIPQAVYGAGMJGMRKDRS");

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
    msg.setTimeStamp(0.4728673338127395);
    msg.setSource(34616U);
    msg.setSourceEntity(182U);
    msg.setDestination(56510U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.08549618411740689);
    msg.setSource(25018U);
    msg.setSourceEntity(147U);
    msg.setDestination(48675U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.9460227913254317);
    msg.setSource(9260U);
    msg.setSourceEntity(165U);
    msg.setDestination(6442U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.080541448669594);
    msg.setSource(19626U);
    msg.setSourceEntity(134U);
    msg.setDestination(1065U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.06298413204981856;
    msg.lon = 0.42395713413949176;
    msg.z = 0.2414515349727835;
    msg.z_units = 45U;
    msg.radius = 0.374973245619292;
    msg.duration = 9213U;
    msg.speed = 0.5102286585495136;
    msg.speed_units = 231U;
    msg.custom.assign("ZNIUKNHCQRSZPKRNZWERZCBMOVIBTJKNKGSLXTIQVEMQEIONTAOEYAEBGSTCUOWVDVASSFTWDIRFADKUJCLCYUJYVGXSKWPWJVLQNXWBEZPYSXQQOSFIRMZAHSMMXGZVNLLPTAPCIWUFQYWJDKRFNMEJXFBMLISGGZGDBYEGUIKWRQXJYVQPYZDVTHLHDMDAUPJB");

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
    msg.setTimeStamp(0.9355180636540056);
    msg.setSource(3665U);
    msg.setSourceEntity(161U);
    msg.setDestination(57313U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.8487044183312448;
    msg.lon = 0.48504232480954146;
    msg.z = 0.44345295983834954;
    msg.z_units = 88U;
    msg.radius = 0.3693759869243629;
    msg.duration = 24482U;
    msg.speed = 0.9614412674189714;
    msg.speed_units = 242U;
    msg.custom.assign("ZSVFNKPRBAVCUYBQXLKFYSLSQMPRQU");

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
    msg.setTimeStamp(0.9650588150018998);
    msg.setSource(35916U);
    msg.setSourceEntity(136U);
    msg.setDestination(4119U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.8130561999583303;
    msg.lon = 0.5032426960723464;
    msg.z = 0.1712414514810573;
    msg.z_units = 101U;
    msg.radius = 0.44683422972929443;
    msg.duration = 36043U;
    msg.speed = 0.6258344116411066;
    msg.speed_units = 115U;
    msg.custom.assign("LYHSXFRYVDNFSFTZQTSKVPVHZROMTQXXEKPCTQGWKILNIDBBIXUHHJUYDCDTPCSTDRCJGNDFPSZPDBPLEQJKUJBFRRLPBHYHURYXOZMJWBXZJOGWLUG");

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
    msg.setTimeStamp(0.25965812103590635);
    msg.setSource(56049U);
    msg.setSourceEntity(142U);
    msg.setDestination(26749U);
    msg.setDestinationEntity(109U);
    msg.timeout = 32278U;
    msg.flags = 8U;
    msg.lat = 0.6753834019992778;
    msg.lon = 0.37957273910351563;
    msg.start_z = 0.15169104278693946;
    msg.start_z_units = 98U;
    msg.end_z = 0.5469120366153597;
    msg.end_z_units = 1U;
    msg.radius = 0.14461148047562822;
    msg.speed = 0.5460061893057703;
    msg.speed_units = 102U;
    msg.custom.assign("XRAPBLNEWGWETRBICLAAPBKHEUDWZYAVIMJLKOKVRIRUFOPHRMIOPUESOJLTMRWGGHSCFSSFKGWBRQCJPTVNBOPVSDQEFHLTWZKPXZOORLESXMNME");

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
    msg.setTimeStamp(0.8525849572284754);
    msg.setSource(37473U);
    msg.setSourceEntity(207U);
    msg.setDestination(28808U);
    msg.setDestinationEntity(73U);
    msg.timeout = 31030U;
    msg.flags = 155U;
    msg.lat = 0.39227185902890527;
    msg.lon = 0.5706772136386029;
    msg.start_z = 0.5467863337960571;
    msg.start_z_units = 253U;
    msg.end_z = 0.6338473259959175;
    msg.end_z_units = 135U;
    msg.radius = 0.6397673218145824;
    msg.speed = 0.7460511991664781;
    msg.speed_units = 120U;
    msg.custom.assign("JJEDRPNFLKVANCKUVUPIZHRZWBBLZAWGWUDPIPYGORTNRUCYNVPHWODJHDDOIZXDRZQQFHKXZFIGPHMSCZTWXYCTHCNTXXAQHTSEEGORMFXPVWJISRMQQWNEBIVYKDLLEDTOVYFZQSKBUTEMPGERMIXNEQLOFKBCNYTPGSAVWBJCSLKUEVEKYHGMDLABUDGMIUOQVXZIJSGKO");

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
    msg.setTimeStamp(0.24736554621962192);
    msg.setSource(58742U);
    msg.setSourceEntity(19U);
    msg.setDestination(31959U);
    msg.setDestinationEntity(143U);
    msg.timeout = 14158U;
    msg.flags = 45U;
    msg.lat = 0.9644940861589589;
    msg.lon = 0.40161509783415084;
    msg.start_z = 0.9334199454061183;
    msg.start_z_units = 127U;
    msg.end_z = 0.21107890415986108;
    msg.end_z_units = 23U;
    msg.radius = 0.3753260884632973;
    msg.speed = 0.7451357506648385;
    msg.speed_units = 72U;
    msg.custom.assign("IMPZOXICSYUEIFTPRUQASBCDHCNDVRUHFSWTDJQDUWNYZHSRSCFZEDHBQOUYLHFMGCNLIIJKWBVGMGKNEHXMTZSHWDRXFKOMMXKAPJFGZCRXGSRSLQLLBKVTLPEPIUHZUOJYPTAJPCEVFWXYEATGGAZROBQIWFTKBTSLPLKMECEKNALMNOVRVZJQCNOVPBZUJBVNWDCOMAHXXDKFGAYTJZQBAGVYMWFYHQLWUXNOVOQDJGNDPXJRATISIEEY");

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
    msg.setTimeStamp(0.7916613695326491);
    msg.setSource(51067U);
    msg.setSourceEntity(101U);
    msg.setDestination(2494U);
    msg.setDestinationEntity(171U);
    msg.timeout = 14755U;
    msg.lat = 0.5160881527650416;
    msg.lon = 0.6021777352040699;
    msg.z = 0.9760022523665669;
    msg.z_units = 100U;
    msg.speed = 0.10296925497768816;
    msg.speed_units = 169U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5784917416764263;
    tmp_msg_0.y = 0.7546544492828988;
    tmp_msg_0.z = 0.8195919811255082;
    tmp_msg_0.t = 0.05509277075488894;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XLVSZIGVRTBZIBCNQRZGNPTRXTEWZYRUCCCLYKSGYJCWULQGSNFIQFESASWFJOFURDMNXDDHFJLGTVPVIGEDKDGAIWIAZBQOYJINJHPORDKZQOPKYRPDYFMFFWVAQYFAWLCD");

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
    msg.setTimeStamp(0.8330842685316846);
    msg.setSource(33012U);
    msg.setSourceEntity(221U);
    msg.setDestination(43601U);
    msg.setDestinationEntity(235U);
    msg.timeout = 58498U;
    msg.lat = 0.8948706405480044;
    msg.lon = 0.07242512028862003;
    msg.z = 0.204532022313049;
    msg.z_units = 118U;
    msg.speed = 0.3041075515482996;
    msg.speed_units = 12U;
    msg.custom.assign("JJDMRHVJVXYJSEMJCDONDTEEMZTNOVTSYVYPQBRANKIGIXGCKMSCALLMKLRWSNIUKDONBPPPCOBAFHFUPNXGBJGCWMWKDSNESNTZZHDBUSHFUJRRNUIHOCXFCVTQGQZXGTZQYIWHYGQZXMYWFIAGGMAYAAVRTSDLUOZPTFSRUZZWVVCBKIXLCFKPHDQFAOMPYYOEKCELBXHQODVVKBRELJQFLBUGQZQHIJPXORLAINIPJMXER");

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
    msg.setTimeStamp(0.24100537220989116);
    msg.setSource(30772U);
    msg.setSourceEntity(228U);
    msg.setDestination(58068U);
    msg.setDestinationEntity(55U);
    msg.timeout = 42448U;
    msg.lat = 0.7536221801190164;
    msg.lon = 0.8634134048762279;
    msg.z = 0.29249061321290215;
    msg.z_units = 160U;
    msg.speed = 0.2206459305702443;
    msg.speed_units = 246U;
    msg.custom.assign("DNFDKLIWJDLTUIRFVOSVEWNMKCXTERFUYOZHWXKYQUWCRSWIBIFQOLJGMPYZLRMXVLAOFOFEIZGHPLTBXSQBTZBLDVNGZPZPHOXFTISNEKVQNSBVMKUBLITXDZESUNRPPEJKDGAXUYNBKQSNZYVHMJQDXJPQHEUHYJLNCGWHATHCRKSTBWYDOKROVIGCMYFCURROSJZWMXYWAGRNSFCACGDLUWAKAU");

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
    msg.setTimeStamp(0.27433742909080794);
    msg.setSource(60940U);
    msg.setSourceEntity(131U);
    msg.setDestination(32219U);
    msg.setDestinationEntity(9U);
    msg.x = 0.735853487289717;
    msg.y = 0.16478237111060712;
    msg.z = 0.8074470393958303;
    msg.t = 0.7210835883082887;

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
    msg.setTimeStamp(0.03675206629326089);
    msg.setSource(29393U);
    msg.setSourceEntity(87U);
    msg.setDestination(41412U);
    msg.setDestinationEntity(170U);
    msg.x = 0.3440302949906039;
    msg.y = 0.8401220102314305;
    msg.z = 0.6153880441859119;
    msg.t = 0.7601207754871776;

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
    msg.setTimeStamp(0.19274203356085962);
    msg.setSource(52044U);
    msg.setSourceEntity(216U);
    msg.setDestination(42376U);
    msg.setDestinationEntity(137U);
    msg.x = 0.04513440301842753;
    msg.y = 0.15624998393284306;
    msg.z = 0.7914685079580356;
    msg.t = 0.9771612377495106;

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
    msg.setTimeStamp(0.6408430670894565);
    msg.setSource(3038U);
    msg.setSourceEntity(244U);
    msg.setDestination(51373U);
    msg.setDestinationEntity(253U);
    msg.timeout = 21706U;
    msg.name.assign("VCULTWRLPMTKODKGYDALCSWJPPQZNUUFCXXDHIGDXOUVWODVTGMQEYGRKBFKBIQABPCRWKZMJOYSOVVIBJCGMWSQZNMBHQZCWKIFTNOSEFDHENNIGH");
    msg.custom.assign("VKNETOFUCZYNYPQSAWSMOUHRJPXOFRIKYXIWSVV");

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
    msg.setTimeStamp(0.5317746129991009);
    msg.setSource(50900U);
    msg.setSourceEntity(64U);
    msg.setDestination(31914U);
    msg.setDestinationEntity(66U);
    msg.timeout = 38314U;
    msg.name.assign("JSEHUTQCRTRQMOCOLUPNTUXOWOUZXFENDZRIX");
    msg.custom.assign("MDZITHNRMEFTSRAGPVBMRSRPNBAUGTLHKQOYQBEYJL");

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
    msg.setTimeStamp(0.09850911553110309);
    msg.setSource(65393U);
    msg.setSourceEntity(5U);
    msg.setDestination(43548U);
    msg.setDestinationEntity(236U);
    msg.timeout = 16467U;
    msg.name.assign("VGXSUHIXVGPFAGHWAOSIXFEENPCWQJNOCXRNXJPOIAAYCVZVJLRTQRXYWFIALZNFWQTOATLUJKSWKNWAFLDMMHLQEEZVBGEKENMKVMUCAPOCUKPDSHCYCRJTXRNSBESKUSYMGZUYLFKYYCLWABHDDYVOBLSBTQNDAIBPUPHERJMEJKMBV");
    msg.custom.assign("JJXLTLNMXHKSBEWFXTIPVNBMWWNGDIGCATVXLEXFRKKFYWBSIBRIONGCCVOHLDDYSTUZAQOMWEHMPYRVTBGQCCOQILLYPXIZOIZBZEH");

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
    msg.setTimeStamp(0.47199160772935855);
    msg.setSource(32518U);
    msg.setSourceEntity(56U);
    msg.setDestination(36792U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.26808815115694984;
    msg.lon = 0.8493641936997085;
    msg.z = 0.6120473997918813;
    msg.z_units = 114U;
    msg.speed = 0.08930933458228385;
    msg.speed_units = 103U;
    msg.start_time = 0.7404621657587325;
    msg.custom.assign("OVWZVAFEFLRFVDIJYMQOXOPHMKQNSWURYGDYHJNADFYEFSUOQTBSWWZXMIDIPDTKZCWEEUWN");

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
    msg.setTimeStamp(0.5949471770306392);
    msg.setSource(4085U);
    msg.setSourceEntity(15U);
    msg.setDestination(53006U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.3163529886204356;
    msg.lon = 0.0771806504457263;
    msg.z = 0.5640392001374006;
    msg.z_units = 189U;
    msg.speed = 0.4098843945933688;
    msg.speed_units = 57U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.776809040750306;
    tmp_msg_0.y = 0.4735569393757282;
    tmp_msg_0.z = 0.08531141153921906;
    tmp_msg_0.t = 0.11108357349434195;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.8836613666739106;
    msg.custom.assign("FNNAEVZXSRYZACIRCIJOLRKRUOBPJLYRSJDCAMNLLKPEFSJACEEYCHGVCUAPBZQEGIWPAOGFCWXQWFXYMHFXDNZVXMNKDVBTZNGZZTBWMQDYKODKOXPCVCAGIHNSLTZERWJUTGJBKYZSDKVWNJRUSDIQHKHULJEETOGUHRYFOH");

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
    msg.setTimeStamp(0.571653138158407);
    msg.setSource(62001U);
    msg.setSourceEntity(16U);
    msg.setDestination(63186U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.8706590390099691;
    msg.lon = 0.542019142644299;
    msg.z = 0.19173719215092266;
    msg.z_units = 219U;
    msg.speed = 0.5191794951962267;
    msg.speed_units = 100U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4228U;
    tmp_msg_0.off_x = 0.049372144786087424;
    tmp_msg_0.off_y = 0.5654094502060141;
    tmp_msg_0.off_z = 0.05195044094350021;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5879184966421049;
    msg.custom.assign("APURAAQWTDYFLNSZSNPYLIZC");

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
    msg.setTimeStamp(0.8636702598798709);
    msg.setSource(4534U);
    msg.setSourceEntity(253U);
    msg.setDestination(41512U);
    msg.setDestinationEntity(105U);
    msg.vid = 46124U;
    msg.off_x = 0.18457178290230758;
    msg.off_y = 0.9566223017977785;
    msg.off_z = 0.3883506262187647;

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
    msg.setTimeStamp(0.7706833274094929);
    msg.setSource(25387U);
    msg.setSourceEntity(248U);
    msg.setDestination(64590U);
    msg.setDestinationEntity(122U);
    msg.vid = 31288U;
    msg.off_x = 0.40949683210853494;
    msg.off_y = 0.21110501171172746;
    msg.off_z = 0.34922792570683614;

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
    msg.setTimeStamp(0.2316491618843216);
    msg.setSource(47727U);
    msg.setSourceEntity(88U);
    msg.setDestination(4634U);
    msg.setDestinationEntity(45U);
    msg.vid = 48164U;
    msg.off_x = 0.5726372366878435;
    msg.off_y = 0.6435860370420032;
    msg.off_z = 0.6269439110272804;

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
    msg.setTimeStamp(0.7555602703378416);
    msg.setSource(49114U);
    msg.setSourceEntity(21U);
    msg.setDestination(59137U);
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
    msg.setTimeStamp(0.1973975566522237);
    msg.setSource(34036U);
    msg.setSourceEntity(61U);
    msg.setDestination(3996U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.5580095857150461);
    msg.setSource(29439U);
    msg.setSourceEntity(69U);
    msg.setDestination(37781U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.8881580296189068);
    msg.setSource(38222U);
    msg.setSourceEntity(87U);
    msg.setDestination(21274U);
    msg.setDestinationEntity(135U);
    msg.mid = 4961U;

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
    msg.setTimeStamp(0.00802341600229095);
    msg.setSource(21178U);
    msg.setSourceEntity(140U);
    msg.setDestination(38535U);
    msg.setDestinationEntity(224U);
    msg.mid = 34467U;

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
    msg.setTimeStamp(0.09054168843810662);
    msg.setSource(32087U);
    msg.setSourceEntity(13U);
    msg.setDestination(39561U);
    msg.setDestinationEntity(95U);
    msg.mid = 43081U;

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
    msg.setTimeStamp(0.13332363442257933);
    msg.setSource(28930U);
    msg.setSourceEntity(181U);
    msg.setDestination(38641U);
    msg.setDestinationEntity(146U);
    msg.state = 184U;
    msg.eta = 48587U;
    msg.info.assign("NLETQPNRAZSSIFCZGCMBTHGLOGDCQMKORWYKPXEEVQNQLEWVYERCKDSLWCUJVPPVPQNBZLSUVDXOMXIBGXMZFOZJUMTGDNVKJRLMDBZJWDXRYWKRUBWHGUEICCLFYBSTYSDVCKAOYCBIBHXMSMHJLMFRASOUOHKZAOMXEPLNEWUPWXFRTIAAQAAZIAVNR");

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
    msg.setTimeStamp(0.22850048536181622);
    msg.setSource(37059U);
    msg.setSourceEntity(242U);
    msg.setDestination(6346U);
    msg.setDestinationEntity(91U);
    msg.state = 144U;
    msg.eta = 16409U;
    msg.info.assign("WXPIKIBXPOEMKBRPHGAWCAAEVWBWTGVCANUSDUQYWVOOIZJCLLWRFBFQSAWDCFPUVDJTSGGPQPLYIYXJZBQCZDEPUSAZFMDTYLSYQKKECWFJUFIDFTYOOPISNNNIHHXRZDJQLGVXYBBZRGICIDOMNTBNENGRHHFHQEICXZVBMTUMVLUQOPAUTJKOZGJHYRUFWTLTDMLU");

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
    msg.setTimeStamp(0.7988260807934402);
    msg.setSource(3149U);
    msg.setSourceEntity(180U);
    msg.setDestination(61788U);
    msg.setDestinationEntity(33U);
    msg.state = 39U;
    msg.eta = 41616U;
    msg.info.assign("HVSJJKQVDUACLFCMDVXBIWYLQRTCAAZWOPDBLKPLTANLSMYGSUDEDBFQKYZHERCWMRYROEPHDHXBCOXXTJIRKYKEUNMNMTHJJCFLAFOBZEKFZIISEHTGHAYNAUKPNAENOAEJPTJGTCDCHV");

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
    msg.setTimeStamp(0.28403503430786015);
    msg.setSource(32029U);
    msg.setSourceEntity(56U);
    msg.setDestination(63468U);
    msg.setDestinationEntity(8U);
    msg.system = 10622U;
    msg.duration = 48563U;
    msg.speed = 0.726313942894819;
    msg.speed_units = 189U;
    msg.x = 0.5379469440722052;
    msg.y = 0.47068916476582934;
    msg.z = 0.17886957323068775;
    msg.z_units = 252U;

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
    msg.setTimeStamp(0.6003031396649621);
    msg.setSource(8797U);
    msg.setSourceEntity(81U);
    msg.setDestination(53186U);
    msg.setDestinationEntity(111U);
    msg.system = 56430U;
    msg.duration = 17238U;
    msg.speed = 0.1406720066749485;
    msg.speed_units = 223U;
    msg.x = 0.29127526981101415;
    msg.y = 0.1549148308874423;
    msg.z = 0.3554007390467647;
    msg.z_units = 43U;

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
    msg.setTimeStamp(0.8127686692896477);
    msg.setSource(18936U);
    msg.setSourceEntity(37U);
    msg.setDestination(58555U);
    msg.setDestinationEntity(199U);
    msg.system = 26554U;
    msg.duration = 12264U;
    msg.speed = 0.41465630723330427;
    msg.speed_units = 105U;
    msg.x = 0.3227750054479245;
    msg.y = 0.31314026726552047;
    msg.z = 0.4294662510914664;
    msg.z_units = 217U;

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
    msg.setTimeStamp(0.7075396971996405);
    msg.setSource(51966U);
    msg.setSourceEntity(211U);
    msg.setDestination(52657U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.3979463065564275;
    msg.lon = 0.13519219032602092;
    msg.speed = 0.6665476565511116;
    msg.speed_units = 12U;
    msg.duration = 315U;
    msg.sys_a = 4968U;
    msg.sys_b = 18893U;
    msg.move_threshold = 0.9048425712060388;

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
    msg.setTimeStamp(0.706406373931179);
    msg.setSource(30427U);
    msg.setSourceEntity(247U);
    msg.setDestination(26308U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.24963218151075328;
    msg.lon = 0.3605104986732497;
    msg.speed = 0.7439716716554449;
    msg.speed_units = 166U;
    msg.duration = 32835U;
    msg.sys_a = 65111U;
    msg.sys_b = 34374U;
    msg.move_threshold = 0.26885997576398235;

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
    msg.setTimeStamp(0.8074529394219156);
    msg.setSource(55633U);
    msg.setSourceEntity(166U);
    msg.setDestination(32776U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.1355003611180905;
    msg.lon = 0.6850386616574582;
    msg.speed = 0.6510550720962107;
    msg.speed_units = 234U;
    msg.duration = 23406U;
    msg.sys_a = 18959U;
    msg.sys_b = 8398U;
    msg.move_threshold = 0.6624744490364357;

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
    msg.setTimeStamp(0.2699282292691205);
    msg.setSource(55146U);
    msg.setSourceEntity(110U);
    msg.setDestination(18643U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.405343587234019;
    msg.lon = 0.9960345038109055;
    msg.z = 0.5069325419404993;
    msg.z_units = 212U;
    msg.speed = 0.9819059169666152;
    msg.speed_units = 2U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8318674586574275;
    tmp_msg_0.lon = 0.915633104221116;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("NWOKKJSGBYYWRAPYFJSUSCJKHOLXQGXEBQTACLIDTBPHRWTSFKQJDNDJCYUQENDZAMIOKAFMDLOSPSLWRMHZNTIPTJUWIIEHYZJBRBPXVNGMFJFBEFCGLMJVAQCRGQVGZCSEBRFXAAGWYLRHQQHUWTXNDIQKDHEZUGXPIXVOUAWICCMSYXLOGKNKEPPEBSNQLJDVDAEHZFCPTLFVZZHRIMWZIRCBOMDUTSMGNVAVYOUNPKVRLUHWBXVZEKYT");

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
    msg.setTimeStamp(0.2202950899503726);
    msg.setSource(58694U);
    msg.setSourceEntity(77U);
    msg.setDestination(64865U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.7250756251256447;
    msg.lon = 0.19592077420207343;
    msg.z = 0.5308815413769808;
    msg.z_units = 173U;
    msg.speed = 0.7395610507792888;
    msg.speed_units = 2U;
    msg.custom.assign("ILUZAQXWDCVLJKQNMYCBAEXHCXHB");

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
    msg.setTimeStamp(0.7446632885101104);
    msg.setSource(12465U);
    msg.setSourceEntity(246U);
    msg.setDestination(37467U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.4128686353873726;
    msg.lon = 0.1971456652310457;
    msg.z = 0.30543764583527366;
    msg.z_units = 197U;
    msg.speed = 0.5331853348360777;
    msg.speed_units = 233U;
    msg.custom.assign("TPSMZJCZBRNRFFFHAJLQXNKQNLAOVQFCKWSLEJDMYVZLSQTURROOOYNZILQMGKACXSUZQS");

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
    msg.setTimeStamp(0.005815124044245112);
    msg.setSource(61315U);
    msg.setSourceEntity(109U);
    msg.setDestination(10383U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.9753257664819159;
    msg.lon = 0.5068827878423235;

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
    msg.setTimeStamp(0.0033603040527412364);
    msg.setSource(42687U);
    msg.setSourceEntity(126U);
    msg.setDestination(39827U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.47247554170469075;
    msg.lon = 0.8958089045521586;

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
    msg.setTimeStamp(0.8184674685709807);
    msg.setSource(60824U);
    msg.setSourceEntity(157U);
    msg.setDestination(24244U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.06874044764016252;
    msg.lon = 0.08074593059510826;

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
    msg.setTimeStamp(0.24841279437997454);
    msg.setSource(55614U);
    msg.setSourceEntity(34U);
    msg.setDestination(62051U);
    msg.setDestinationEntity(84U);
    msg.timeout = 922U;
    msg.lat = 0.7335601398126141;
    msg.lon = 0.02874380075530103;
    msg.z = 0.06398432367751972;
    msg.z_units = 236U;
    msg.pitch = 0.23129434459282117;
    msg.amplitude = 0.30930864411255576;
    msg.duration = 3579U;
    msg.speed = 0.29944519081282284;
    msg.speed_units = 156U;
    msg.radius = 0.2891417145808184;
    msg.direction = 11U;
    msg.custom.assign("TALFHDEITBSHECZZWACQUXOIIDDWKGPJWHDWQVWRGZWJALVSFZQMBIPGDWVJBLMBRHRESDWZEFSPUASCMFOYCMJPTYTBIDHKCHYTVEZUQCNXNNZS");

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
    msg.setTimeStamp(0.24481668389906008);
    msg.setSource(36584U);
    msg.setSourceEntity(37U);
    msg.setDestination(61153U);
    msg.setDestinationEntity(7U);
    msg.timeout = 51178U;
    msg.lat = 0.4978882983839945;
    msg.lon = 0.9785910562621682;
    msg.z = 0.9316202744215724;
    msg.z_units = 155U;
    msg.pitch = 0.3195526173365342;
    msg.amplitude = 0.21422044236680937;
    msg.duration = 22884U;
    msg.speed = 0.29159578737316183;
    msg.speed_units = 145U;
    msg.radius = 0.8056336392521025;
    msg.direction = 184U;
    msg.custom.assign("HFMHFTTQQFRIIVBQSYPYAAPXXTPDDHYJNOBRZNWGBYWITMEWXUPDSUJHHDEEVZFSTFJNTKQQAECQVAHMAGGVRCZUNBZUSNBHWLLAVSZWGJGKLFUZMLKRUMQLSVMVMMHXLRPZMXYBYFOUDNDXPFRVKJBOAJKCAUIYEPRLKFCIUNGFRGTNJKO");

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
    msg.setTimeStamp(0.20923278128413025);
    msg.setSource(29267U);
    msg.setSourceEntity(243U);
    msg.setDestination(964U);
    msg.setDestinationEntity(233U);
    msg.timeout = 56909U;
    msg.lat = 0.3444299625876224;
    msg.lon = 0.3191089621057669;
    msg.z = 0.4556796981827159;
    msg.z_units = 131U;
    msg.pitch = 0.41016161007072105;
    msg.amplitude = 0.4515815291379355;
    msg.duration = 65383U;
    msg.speed = 0.025648292502096104;
    msg.speed_units = 68U;
    msg.radius = 0.4828230897739434;
    msg.direction = 98U;
    msg.custom.assign("FILEMJKZTWPNMYIHGRRNCTVSDRNBIVFWJOVYUFADMAROGIHRXBFXAGPTWXQSSADCSVZOUPYKLQHQBGYNHOSTODOQLCIFZEMIUWTHCUQCZWGMBYRQDYOBCUGNZHWKUCLATDEWGSSKKRTJCJHLHDLDBINEJBTJKMZBZPTOYCKXVYQVJNNQGDUVZCSJXOPREXEQKAJVYPPHULDUBYVJESXELVZWAMOALENPW");

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
    msg.setTimeStamp(0.6075501930559235);
    msg.setSource(4647U);
    msg.setSourceEntity(28U);
    msg.setDestination(32628U);
    msg.setDestinationEntity(46U);
    msg.formation_name.assign("IPVTOHURDTAYXTTOBYEVUOPZESJGPIYSMBGIEPBLQRBJKQOTMUSLASBQFBZAQILSAVROXPGSYSJDNXFYHENCLJUKTFHGUHPNFOHWPLIXTMXNXRCILGUWKZNWRCGKMEMEFEMUFWNRHQDCMQAOCGVRRIZJIVGZPJDULVPBRFKWKAOGJDVAAMCEFJCSIBHQDHMFBENRZXZCQXIDKPCGYDZKJSYWTYHZNVYYWEULUAQVOWNDSOADKWLCLTMTNXHZK");
    msg.reference_frame = 49U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34322U;
    tmp_msg_0.off_x = 0.9209921181650659;
    tmp_msg_0.off_y = 0.6543648497189166;
    tmp_msg_0.off_z = 0.30495875502164904;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YKJYMOUPAJIYVYBCRFGRAIUCKEEREYJHTMCEXZXMZVRGTMFOOWGVPBVNSMHSSDLUWRRVZNFUIZXUAFGZUBKWQOABKZCMSPBSTODITLKWDBPWVGXTJCQHWITPG");

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
    msg.setTimeStamp(0.02321589937791002);
    msg.setSource(28396U);
    msg.setSourceEntity(67U);
    msg.setDestination(36674U);
    msg.setDestinationEntity(21U);
    msg.formation_name.assign("YNVKUIFCEA");
    msg.reference_frame = 233U;
    msg.custom.assign("COIQQALHFCXMVQRBJRRQKIHOLDRYZTYEFQWFHPJEXAVISEMBBCCXCLAXYYVDGHGBPSVSRSBAGNFUQWAMMONFWFDGJJUMMGJHAWHKZWUUXDLGLTNVUNRPWGONCRADXCJDVWZTYTBCNDDHCFQVLRIYXMFOFLTDTEGVZNULPIJUREISSKENAUXQTPHHZZ");

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
    msg.setTimeStamp(0.5438917489882892);
    msg.setSource(56811U);
    msg.setSourceEntity(57U);
    msg.setDestination(41690U);
    msg.setDestinationEntity(48U);
    msg.formation_name.assign("BBVYMQNIMMRRMZDXIGFEEPZEVCCROVXTGNJLJLBNJDBFIOJBZTTJWWSVHFJTQCMWDAUOGMLEXFOSIWANAUWGSIKSEFULDZZPUUPSBHKVNHPGXNUHSMJDSBZKYITNTFEOKXATCPXVXSZQYLQPDKHCKYOXPYZ");
    msg.reference_frame = 0U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 36183U;
    tmp_msg_0.off_x = 0.933894487950041;
    tmp_msg_0.off_y = 0.30153156295852745;
    tmp_msg_0.off_z = 0.8801556005309237;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("HQFKYJJNNDCKAHSQWPQRIOQIXCADHGGJQRLLPZUJYZOBRBLOKJZFHCBMNDWETXVQFQGPCXLNU");

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
    msg.setTimeStamp(0.7683671130310707);
    msg.setSource(10158U);
    msg.setSourceEntity(77U);
    msg.setDestination(5924U);
    msg.setDestinationEntity(106U);
    msg.group_name.assign("QBLHEKTIXQLEHFYZZGEYIIACYRNRVLDPDOOFGEBOUQAFHXSRJWRWEFZOQDIVXUAXGMMRSZGYJFVPJVDNMAWGIUBJUEAUIGXUYLTAHC");
    msg.formation_name.assign("KYCUFTCZSFYLXWWJEYVITBYXQHJFXDQNQPYFSJIMEZENZRSJBMGAWUTRUOANMTLVDGXETDEMRDNIMOXMELKREVBYDLEHOWLWISKUECQSJGIPFGLNFPGSGDWOWPCGBIHYQHLXVNDKXRTWWCKXPTAZAHOTZXAPSVJHLQTOMVN");
    msg.plan_id.assign("ZTUYVGBZOOSXLJYMLKFZXPSDAWESMYRLOICNVSYLPVKBMPNHKGTIJBSMEJFWRIHHDBTGTJFLPCIWTBCWNOUCDUCDAUBEASDXQICFRCRXLGAWYKQDDPWBUTUYAOCJTGQNCUGJOMZQLVQGEHIZNYJWVHFJRXMYVTKVHDCMNOZPKIWUIRPHUBTQASXSLOLVHZFKSXHTEJFFRGDIUBPQEQJONNRXZXROEZPNMYKWMVBFAMXQSKNHPAYEEZLQ");
    msg.description.assign("HNMTEMAZPYGOVQYARKIGYHVJXEKCYHBYVGGGTFAGCCDJNFTUWBPHVONILAHSJEELOBDZ");
    msg.leader_speed = 0.9577559021035784;
    msg.leader_bank_lim = 0.7903309132940659;
    msg.pos_sim_err_lim = 0.12408568270594078;
    msg.pos_sim_err_wrn = 0.27807398387888804;
    msg.pos_sim_err_timeout = 31832U;
    msg.converg_max = 0.3913205768304603;
    msg.converg_timeout = 33175U;
    msg.comms_timeout = 41479U;
    msg.turb_lim = 0.7142321043223513;
    msg.custom.assign("XTYSYNUNHYJDOEOMACZIHGCKLGJXMRSGLJVEFSQVUFTFZZRWOVCYBVMHRI");

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
    msg.setTimeStamp(0.49203646871516304);
    msg.setSource(50247U);
    msg.setSourceEntity(208U);
    msg.setDestination(54645U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("KEYCMLWTNPDNHKEDLGGYADMHBENCBZFPWQTVYKSOKLZDOAVIJCDILFDAGBZLQKQAOZWCPYHFPUEIFONETOXDUFTNWPXFUXXWJLECTOYKHSHBYRGPGRGHUJGALDAEVICXQRVVMURSAMBAWRTZSQKUHNCHWEZVIUIBJXVYMSRPTJNPIV");
    msg.formation_name.assign("WNZERCCUIJGXKKOYUWJQXWBXWPSSNCMPXETECRZSENQNSHQGPGPFBYIZDOKJFJJBITEBYBLCFOBHHZXEVTEOWKNXRAQGHBYMHKPNWHRLAHLFCXSXFCRDITSUJHJETMTJOTGSQDGUVCCGOHDAYVVPIFDBUZFYDKUMA");
    msg.plan_id.assign("ZEXMQZGHCODVNBYKTKNZSHTDO");
    msg.description.assign("MUZHZPTXJWTSDXOCITAEPSPNDJLDHQGCQKUKUEOJKKKFMEWFXNPZSQMCWRYCAIIIMXLIDVVUNJFDOUAFYBNWSOGIVWYSJWUGXFZLMLVDTOOYXPEVAHMLNRKMXTEEVGULRAFXAEBDBNGQFVRGRQNIZNDUEGRNSPUQQOCWFICPOZYQYKWVJUZHMSLYCEH");
    msg.leader_speed = 0.07944029073828207;
    msg.leader_bank_lim = 0.26223352979427983;
    msg.pos_sim_err_lim = 0.27417296198568486;
    msg.pos_sim_err_wrn = 0.6791701692880157;
    msg.pos_sim_err_timeout = 27620U;
    msg.converg_max = 0.3909253919231618;
    msg.converg_timeout = 36832U;
    msg.comms_timeout = 54797U;
    msg.turb_lim = 0.6249148101329878;
    msg.custom.assign("TJQORLTQRUEAXGNIQCHPXASGSNDYWHFRBTGKXISCAIXBJAFDQPLOGMLENGCMLSJOZUJBNZRMLBXPWNSULVTPUYWIYFHFZQIJXYVDHUKZDXCZSAR");

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
    msg.setTimeStamp(0.0005416438881274965);
    msg.setSource(44537U);
    msg.setSourceEntity(210U);
    msg.setDestination(59900U);
    msg.setDestinationEntity(244U);
    msg.group_name.assign("KSWJQDINHESEZUBJSBGT");
    msg.formation_name.assign("UMJFKOYRKTGZBXCQWBVKMENVZTAJRVBWNUTJTAIWMWIBWOPKVMDMSQVCJXOLEFTAODICOCRZACFNYTDPBIYKLIHQMWXVCSURDB");
    msg.plan_id.assign("AVVKRJHDHYFWZSCNZDOSRPBRHSINGPLUFVKCKKGWLZCJIMLWTJAUPNJOGHHQXQISXTNQSXWCYSTAKGABGJ");
    msg.description.assign("DIOQIZJQTAWXLZGHSQWEODFROELJRYJBQPTFCSBSSFKBVBVBBCHBOUCAZFDTLZLOIPEOAVUUCBJIEWNWAGHEGDESHGCYWLEQLVWHICYPMUFXAWTNERKVIUZSMQDYYBXPJVZCKJNPXXCXNAORDYUUWDADTZQFMZNKRLHLKGXPSNVKFTKOJROZMQRPKZWFNXEHPMMUTSFYGAIWUDSVOGMNHKYENDRVJTFXANXTCRHSIMLBVKYMQLJURMA");
    msg.leader_speed = 0.5294597627841107;
    msg.leader_bank_lim = 0.06321519869910697;
    msg.pos_sim_err_lim = 0.14972563148929996;
    msg.pos_sim_err_wrn = 0.6923129320824744;
    msg.pos_sim_err_timeout = 61078U;
    msg.converg_max = 0.8245780729460763;
    msg.converg_timeout = 41740U;
    msg.comms_timeout = 11463U;
    msg.turb_lim = 0.4742300932952658;
    msg.custom.assign("RCYFXGCVCESZFIZSEBUP");

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
    msg.setTimeStamp(0.35180621317149396);
    msg.setSource(61256U);
    msg.setSourceEntity(7U);
    msg.setDestination(49252U);
    msg.setDestinationEntity(241U);
    msg.control_src = 56644U;
    msg.control_ent = 205U;
    msg.timeout = 0.8616234057697338;
    msg.loiter_radius = 0.5627024078117433;
    msg.altitude_interval = 0.8249825558899204;

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
    msg.setTimeStamp(0.18731724379567571);
    msg.setSource(22759U);
    msg.setSourceEntity(239U);
    msg.setDestination(7370U);
    msg.setDestinationEntity(28U);
    msg.control_src = 26979U;
    msg.control_ent = 133U;
    msg.timeout = 0.545216197501313;
    msg.loiter_radius = 0.24087268666002282;
    msg.altitude_interval = 0.4154076542574219;

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
    msg.setTimeStamp(0.4056044818582608);
    msg.setSource(38452U);
    msg.setSourceEntity(75U);
    msg.setDestination(17640U);
    msg.setDestinationEntity(45U);
    msg.control_src = 14524U;
    msg.control_ent = 242U;
    msg.timeout = 0.004950811122982013;
    msg.loiter_radius = 0.2392423772824861;
    msg.altitude_interval = 0.3411745138222596;

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
    msg.setTimeStamp(0.46088529030435377);
    msg.setSource(7336U);
    msg.setSourceEntity(72U);
    msg.setDestination(9140U);
    msg.setDestinationEntity(192U);
    msg.flags = 174U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5215538718509481;
    tmp_msg_0.speed_units = 156U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6383925529435326;
    tmp_msg_1.z_units = 114U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5415253532643137;
    msg.lon = 0.9556580168827895;
    msg.radius = 0.6916864426554675;

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
    msg.setTimeStamp(0.4580902718680018);
    msg.setSource(22501U);
    msg.setSourceEntity(118U);
    msg.setDestination(8909U);
    msg.setDestinationEntity(59U);
    msg.flags = 57U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4286599861039584;
    tmp_msg_0.speed_units = 40U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4159846836952754;
    tmp_msg_1.z_units = 60U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5494244922717882;
    msg.lon = 0.1485597132106815;
    msg.radius = 0.5540482601704174;

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
    msg.setTimeStamp(0.4001981435358294);
    msg.setSource(26549U);
    msg.setSourceEntity(220U);
    msg.setDestination(40584U);
    msg.setDestinationEntity(234U);
    msg.flags = 217U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6961922623022603;
    tmp_msg_0.speed_units = 189U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.532265978866064;
    tmp_msg_1.z_units = 4U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2711131012282759;
    msg.lon = 0.17338416180799332;
    msg.radius = 0.9450793840241689;

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
    msg.setTimeStamp(0.43963692542322164);
    msg.setSource(45463U);
    msg.setSourceEntity(197U);
    msg.setDestination(22355U);
    msg.setDestinationEntity(43U);
    msg.control_src = 29085U;
    msg.control_ent = 146U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 211U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.49197291106106367;
    tmp_tmp_msg_0_0.speed_units = 129U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9755497845793046;
    tmp_tmp_msg_0_1.z_units = 166U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6165885827206771;
    tmp_msg_0.lon = 0.2438655187537715;
    tmp_msg_0.radius = 0.31143628759478903;
    msg.reference.set(tmp_msg_0);
    msg.state = 5U;
    msg.proximity = 39U;

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
    msg.setTimeStamp(0.9464347963175471);
    msg.setSource(58390U);
    msg.setSourceEntity(50U);
    msg.setDestination(61448U);
    msg.setDestinationEntity(253U);
    msg.control_src = 57660U;
    msg.control_ent = 226U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 11U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9992135939404986;
    tmp_tmp_msg_0_0.speed_units = 191U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7157147009210852;
    tmp_tmp_msg_0_1.z_units = 69U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8752021458022731;
    tmp_msg_0.lon = 0.6910864983584389;
    tmp_msg_0.radius = 0.4434160287936867;
    msg.reference.set(tmp_msg_0);
    msg.state = 205U;
    msg.proximity = 113U;

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
    msg.setTimeStamp(0.46389934922639486);
    msg.setSource(3661U);
    msg.setSourceEntity(167U);
    msg.setDestination(23516U);
    msg.setDestinationEntity(227U);
    msg.control_src = 24914U;
    msg.control_ent = 52U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 105U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4309640864964128;
    tmp_tmp_msg_0_0.speed_units = 25U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5122908396306568;
    tmp_tmp_msg_0_1.z_units = 103U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3461345044530163;
    tmp_msg_0.lon = 0.2836703622614096;
    tmp_msg_0.radius = 0.7194235000011001;
    msg.reference.set(tmp_msg_0);
    msg.state = 246U;
    msg.proximity = 33U;

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
    msg.setTimeStamp(0.26878174015091527);
    msg.setSource(19162U);
    msg.setSourceEntity(71U);
    msg.setDestination(62130U);
    msg.setDestinationEntity(113U);
    msg.ax_cmd = 0.838266440295413;
    msg.ay_cmd = 0.4800419271399341;
    msg.az_cmd = 0.26744803986749477;
    msg.ax_des = 0.10074692877313274;
    msg.ay_des = 0.7291273252832955;
    msg.az_des = 0.2642369670584852;
    msg.virt_err_x = 0.748398503831631;
    msg.virt_err_y = 0.9921982508979896;
    msg.virt_err_z = 0.9702128211064132;
    msg.surf_fdbk_x = 0.2639828420964362;
    msg.surf_fdbk_y = 0.6834158079833504;
    msg.surf_fdbk_z = 0.6481294947833834;
    msg.surf_unkn_x = 0.19895091461573955;
    msg.surf_unkn_y = 0.7249422494777651;
    msg.surf_unkn_z = 0.2582251352107501;
    msg.ss_x = 0.05150699617824395;
    msg.ss_y = 0.8984504744173334;
    msg.ss_z = 0.9096699811031276;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RBUJNAIVXTMINFDGSBPINRSYMHABRHANBXCXVJQEZKVYIMRYGOCIXATPSLRFKNVIEOLTHEUZMDVQDISWLWKTYEHAYJBJPQMRJFJNDCQONCKOMFOTSBPMZGKFBXFSARUUWSTWVZCYGDWBBPQUXZZUPLQDTOCDZOZQOPCGYUZNNNLRLOXKEFJEVPLGMHGFECDXJWATZWYWEVQLXJSGHFJEKTHYKYUPQRSPKMWHCLXL");
    tmp_msg_0.dist = 0.3512144788339955;
    tmp_msg_0.err = 0.34047097648513347;
    tmp_msg_0.ctrl_imp = 0.09780305860333383;
    tmp_msg_0.rel_dir_x = 0.9928641950141622;
    tmp_msg_0.rel_dir_y = 0.7259800178433875;
    tmp_msg_0.rel_dir_z = 0.18063503833473982;
    tmp_msg_0.err_x = 0.9066372522137678;
    tmp_msg_0.err_y = 0.7766356009092418;
    tmp_msg_0.err_z = 0.10239411204613325;
    tmp_msg_0.rf_err_x = 0.5943033768260645;
    tmp_msg_0.rf_err_y = 0.26200781894976966;
    tmp_msg_0.rf_err_z = 0.01162040026261435;
    tmp_msg_0.rf_err_vx = 0.34581964886685346;
    tmp_msg_0.rf_err_vy = 0.8445018064898675;
    tmp_msg_0.rf_err_vz = 0.4633989427232007;
    tmp_msg_0.ss_x = 0.45243657253096736;
    tmp_msg_0.ss_y = 0.26156499276135003;
    tmp_msg_0.ss_z = 0.6518544677198035;
    tmp_msg_0.virt_err_x = 0.35760579127587677;
    tmp_msg_0.virt_err_y = 0.6128045602802438;
    tmp_msg_0.virt_err_z = 0.2240449376861282;
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
    msg.setTimeStamp(0.7903355235639754);
    msg.setSource(53677U);
    msg.setSourceEntity(59U);
    msg.setDestination(22065U);
    msg.setDestinationEntity(198U);
    msg.ax_cmd = 0.7129785056549555;
    msg.ay_cmd = 0.8707594316132119;
    msg.az_cmd = 0.45298719623041905;
    msg.ax_des = 0.8854950455586443;
    msg.ay_des = 0.4634015830520718;
    msg.az_des = 0.6896431046883721;
    msg.virt_err_x = 0.6404686074032888;
    msg.virt_err_y = 0.6190351897007437;
    msg.virt_err_z = 0.9193388216037681;
    msg.surf_fdbk_x = 0.1398746781225365;
    msg.surf_fdbk_y = 0.5312083284366413;
    msg.surf_fdbk_z = 0.5548554626104775;
    msg.surf_unkn_x = 0.4266715804271767;
    msg.surf_unkn_y = 0.6669168450185492;
    msg.surf_unkn_z = 0.35537560772287924;
    msg.ss_x = 0.03607730695820821;
    msg.ss_y = 0.900517340809977;
    msg.ss_z = 0.2126759010004876;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BTVEPMLXFM");
    tmp_msg_0.dist = 0.1889682882282594;
    tmp_msg_0.err = 0.7515109866789859;
    tmp_msg_0.ctrl_imp = 0.32798535686287833;
    tmp_msg_0.rel_dir_x = 0.6313668704364473;
    tmp_msg_0.rel_dir_y = 0.20097132833317732;
    tmp_msg_0.rel_dir_z = 0.8584875202020366;
    tmp_msg_0.err_x = 0.5114573033409465;
    tmp_msg_0.err_y = 0.2565590522579344;
    tmp_msg_0.err_z = 0.10191199216377811;
    tmp_msg_0.rf_err_x = 0.017944056318016544;
    tmp_msg_0.rf_err_y = 0.1805358442314582;
    tmp_msg_0.rf_err_z = 0.9273532930085918;
    tmp_msg_0.rf_err_vx = 0.21318530080844822;
    tmp_msg_0.rf_err_vy = 0.4330358788677211;
    tmp_msg_0.rf_err_vz = 0.2819672865698877;
    tmp_msg_0.ss_x = 0.12703197228046714;
    tmp_msg_0.ss_y = 0.6520529614122692;
    tmp_msg_0.ss_z = 0.6560560185232023;
    tmp_msg_0.virt_err_x = 0.7616899186938433;
    tmp_msg_0.virt_err_y = 0.7059746737849977;
    tmp_msg_0.virt_err_z = 0.7113055493983941;
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
    msg.setTimeStamp(0.443194216100834);
    msg.setSource(34280U);
    msg.setSourceEntity(20U);
    msg.setDestination(41419U);
    msg.setDestinationEntity(135U);
    msg.ax_cmd = 0.027066786480877014;
    msg.ay_cmd = 0.31094315440313525;
    msg.az_cmd = 0.9116927703584194;
    msg.ax_des = 0.6782430741206057;
    msg.ay_des = 0.6086138581304769;
    msg.az_des = 0.3541558572643967;
    msg.virt_err_x = 0.4390444792169026;
    msg.virt_err_y = 0.09712205870530854;
    msg.virt_err_z = 0.4634519074233169;
    msg.surf_fdbk_x = 0.7338221076002684;
    msg.surf_fdbk_y = 0.8575143228942239;
    msg.surf_fdbk_z = 0.3056253700916912;
    msg.surf_unkn_x = 0.7728689866361712;
    msg.surf_unkn_y = 0.19279648688193274;
    msg.surf_unkn_z = 0.46426495484611763;
    msg.ss_x = 0.677554537686181;
    msg.ss_y = 0.12315892451444366;
    msg.ss_z = 0.7966263188298479;

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
    msg.setTimeStamp(0.7254002295170493);
    msg.setSource(52259U);
    msg.setSourceEntity(0U);
    msg.setDestination(11973U);
    msg.setDestinationEntity(176U);
    msg.s_id.assign("ZCJRWDSSVSMJNRXGFUTYICTOYRPQQUVIIKPYYSOFBJRICEHXUHUNDPZHYSHAMBHTDXBZZFAGSGHVEJPWNGAZOGNLIPORHCOEELVRJEKTGDVD");
    msg.dist = 0.18974350341930757;
    msg.err = 0.4887830701955429;
    msg.ctrl_imp = 0.7620427361769788;
    msg.rel_dir_x = 0.10581068092205359;
    msg.rel_dir_y = 0.5319243378611678;
    msg.rel_dir_z = 0.9444802476414413;
    msg.err_x = 0.2682636698017362;
    msg.err_y = 0.44759134229497155;
    msg.err_z = 0.4179647208695344;
    msg.rf_err_x = 0.12142239328576465;
    msg.rf_err_y = 0.7860284763924283;
    msg.rf_err_z = 0.18232611537583643;
    msg.rf_err_vx = 0.8116947671902092;
    msg.rf_err_vy = 0.5199195644570639;
    msg.rf_err_vz = 0.2447774048696374;
    msg.ss_x = 0.712302836198423;
    msg.ss_y = 0.08389061345800963;
    msg.ss_z = 0.5090659220558482;
    msg.virt_err_x = 0.5338684611670643;
    msg.virt_err_y = 0.03825213901558544;
    msg.virt_err_z = 0.34463461770146386;

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
    msg.setTimeStamp(0.713522194082668);
    msg.setSource(21749U);
    msg.setSourceEntity(234U);
    msg.setDestination(10096U);
    msg.setDestinationEntity(205U);
    msg.s_id.assign("JAXTBDHWNEHHPONYKRAMWEYMBGYJXYQGMD");
    msg.dist = 0.6134117593064442;
    msg.err = 0.4231312148950386;
    msg.ctrl_imp = 0.016529946300421372;
    msg.rel_dir_x = 0.25562151908514497;
    msg.rel_dir_y = 0.4396852856772564;
    msg.rel_dir_z = 0.829031725414671;
    msg.err_x = 0.36760227402036594;
    msg.err_y = 0.11718351701567065;
    msg.err_z = 0.10877759470406667;
    msg.rf_err_x = 0.6856622384892442;
    msg.rf_err_y = 0.919889436586606;
    msg.rf_err_z = 0.5402115327653377;
    msg.rf_err_vx = 0.6621046600797432;
    msg.rf_err_vy = 0.4256642936117039;
    msg.rf_err_vz = 0.3828985294817776;
    msg.ss_x = 0.042649850773471276;
    msg.ss_y = 0.5725227548477128;
    msg.ss_z = 0.06832718012908212;
    msg.virt_err_x = 0.5912730459151362;
    msg.virt_err_y = 0.7773427785083981;
    msg.virt_err_z = 0.11891326516341649;

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
    msg.setTimeStamp(0.012717793378559272);
    msg.setSource(60241U);
    msg.setSourceEntity(104U);
    msg.setDestination(41917U);
    msg.setDestinationEntity(210U);
    msg.s_id.assign("JULXBPAKMMBACQZMWNDPRDYOLVPFGFCYTKYNZDUHEVECWXIKWSVHSVZIATEVIQJHALPYBOUHGABPQSUODFJOGKVHIQKKJWAGUUEVQORGDTNNJOCOWWVRXCZRINE");
    msg.dist = 0.4078158589012225;
    msg.err = 0.8728119525983161;
    msg.ctrl_imp = 0.3174775808745841;
    msg.rel_dir_x = 0.6866507922980765;
    msg.rel_dir_y = 0.4159975135914955;
    msg.rel_dir_z = 0.7535070124055878;
    msg.err_x = 0.8157158417943601;
    msg.err_y = 0.10823459770749455;
    msg.err_z = 0.2918764241798749;
    msg.rf_err_x = 0.5205085188096744;
    msg.rf_err_y = 0.6587364005356068;
    msg.rf_err_z = 0.6724158493222605;
    msg.rf_err_vx = 0.28943752997459127;
    msg.rf_err_vy = 0.28266802979449424;
    msg.rf_err_vz = 0.9077129807784788;
    msg.ss_x = 0.057415346956366964;
    msg.ss_y = 0.3427935303853463;
    msg.ss_z = 0.0497215203511413;
    msg.virt_err_x = 0.4254573873504116;
    msg.virt_err_y = 0.5712942220016264;
    msg.virt_err_z = 0.20421439912563555;

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
    msg.setTimeStamp(0.11771588084049145);
    msg.setSource(63320U);
    msg.setSourceEntity(111U);
    msg.setDestination(1861U);
    msg.setDestinationEntity(179U);
    msg.timeout = 39238U;
    msg.rpm = 0.9839304562538354;
    msg.direction = 204U;
    msg.custom.assign("PSTFEUFPNAMXNGKWQORHHIBAEXUXNQJOWJMZMHPRQEDHWCPUAVIJAYMXPWAKGYZUBKJKDSSILECYTKVLEJFLAEUZZYJEOCOWFGVWTLMNINXCNZSWTSVDSPODORFXTIRJUICJYTTPHXVSBBQZWQNENSNDNPWFQYHZGIAGRFBOQGAKPAVR");

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
    msg.setTimeStamp(0.4223572100502586);
    msg.setSource(41551U);
    msg.setSourceEntity(183U);
    msg.setDestination(3008U);
    msg.setDestinationEntity(103U);
    msg.timeout = 6702U;
    msg.rpm = 0.7234391772827118;
    msg.direction = 210U;
    msg.custom.assign("IVQFQBPFULNOXGGVOOMJGBQXFLTHKNUDHWOLJLXWFAEBHIYGFCEKELWIXKQICJXEHPZGQVCLJPFMZIYPFUMJWNJWFKAYOPSGPRMRTQTDRUAOASZAAHTKNAVDPDYZRCJIUMLMBFZOTHBBVBQCBESGTDXRVMHZJGECYUNZPXNU");

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
    msg.setTimeStamp(0.5614757287923549);
    msg.setSource(3083U);
    msg.setSourceEntity(37U);
    msg.setDestination(31124U);
    msg.setDestinationEntity(105U);
    msg.timeout = 31856U;
    msg.rpm = 0.8126797747764825;
    msg.direction = 237U;
    msg.custom.assign("VTWYPTYJFRDYJNOHVXYGVDOQEWJRGBFNYGRZWCALPHQKEGXVGOZQJITIDALGPNATWERSRMZTTVMAQMSPILOJMIWJMKDEHKFNDHQODYNDUVPLYHBABMXUMQFZTBENRSADOEAVASWUOQCZNVIHYHGRPWBZRRXYLKJJEHBLZUEKLZCHEUUXDFFGQQUXWMBRSTCJIFLYPEXCJPMBGGCKBTWZHQKVPCNLSFOKTXFAZIOIOXCWXBCIL");

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
    msg.setTimeStamp(0.1178935155745845);
    msg.setSource(9121U);
    msg.setSourceEntity(246U);
    msg.setDestination(63459U);
    msg.setDestinationEntity(163U);
    msg.formation_name.assign("RZUNEHQFXZOQ");
    msg.type = 28U;
    msg.op = 32U;
    msg.group_name.assign("ZBKQPIKYOTGQEDSNRXVUXOHTALGHAOCLSCAJZKQFRGBKGXYUPPVYJVMTXKFVBPLSFACULWQVEEDGW");
    msg.plan_id.assign("HHMZCACZLSETHCWDSBSBWFZARTNYZLETENTMSHRFVOLBXCGLINAHFGERWGBAXZUCYNXDKSIMYJWCDGMRGIJMNPGWGPRBZDBALHJICPJNWUEPEFBPQADQSTWDQDUUZLNJDOVZJUMOAPEYKFTJVLZAXQIVVROLNIRKVAKWUUHGUYEGIPEFYBRIXOOSJLRO");
    msg.description.assign("ZTPBINRJMTXMVZCKBYNQPOQDCKWSNKCAPHFPULOCSPXONDABQUKVWTBRQYDFURVBI");
    msg.reference_frame = 84U;
    msg.leader_bank_lim = 0.8834454065514711;
    msg.leader_speed_min = 0.8463684101286948;
    msg.leader_speed_max = 0.33497282655077476;
    msg.leader_alt_min = 0.7099027663851257;
    msg.leader_alt_max = 0.9555108603267023;
    msg.pos_sim_err_lim = 0.16392937236242433;
    msg.pos_sim_err_wrn = 0.20056439079439725;
    msg.pos_sim_err_timeout = 50472U;
    msg.converg_max = 0.9656807198409837;
    msg.converg_timeout = 34680U;
    msg.comms_timeout = 48074U;
    msg.turb_lim = 0.23140142210594727;
    msg.custom.assign("HOBNQQGKJZPYCKKNWLFYULHSTSZCFXAVBXDEGFPFBKPEIZTKVLIEMNYFSVTFXAJBJANETXMYGUWSLOHPFPPQZPOGRRDCYNNIIMBPRHJCLGZQCRDUWERKOWUALJDUYKSTJMPPMXYXVEHGFRSQZEMMNAYKWZGLAMIGIVBNWLOSQYBNSCSEQROMDXEOWIVGZIYVHWTAEXQHJCCUOATXBDUCSRKHJD");

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
    msg.setTimeStamp(0.6444551499502156);
    msg.setSource(30467U);
    msg.setSourceEntity(230U);
    msg.setDestination(1938U);
    msg.setDestinationEntity(193U);
    msg.formation_name.assign("IMOFCBVZGGWSXNDUBOFPVWHCLDZSYBOXNTRHQRETLAAIJQWCPRXQIGJHNEKBJYWFUUACZWTNLJKFXOLMPHIEVDKCYAUWAASTYMRWECDQTAXZCROVEZKSMVEJSZOBGQWQGDFKQFGNLAYJZNTLRNIKDKFUBIPBIXFSHIVRWA");
    msg.type = 66U;
    msg.op = 103U;
    msg.group_name.assign("OHOBKACDTREIRSAZQABUFXLW");
    msg.plan_id.assign("TQJCPIGPBOLVLQHEBKQDXAEFIDGYJSHPMPSBRDGEXTNBPVBOZCQHPYCHZLN");
    msg.description.assign("WPRWDVFOUIVJQWQTURVFKZFQOJGSGBRGNJETZPKLOJXNCWLINHDKAIQZZSINRYKDICRFSVLGYNJMTWRMTZLYGJX");
    msg.reference_frame = 119U;
    msg.leader_bank_lim = 0.3590160994907855;
    msg.leader_speed_min = 0.5646959840652721;
    msg.leader_speed_max = 0.18142293294980316;
    msg.leader_alt_min = 0.3768941012287793;
    msg.leader_alt_max = 0.584873349758079;
    msg.pos_sim_err_lim = 0.564976286159388;
    msg.pos_sim_err_wrn = 0.41802756225552873;
    msg.pos_sim_err_timeout = 43120U;
    msg.converg_max = 0.21665800773137267;
    msg.converg_timeout = 57063U;
    msg.comms_timeout = 34736U;
    msg.turb_lim = 0.9308573133825147;
    msg.custom.assign("GUSKFNIACTJBNZQFY");

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
    msg.setTimeStamp(0.34027816384001264);
    msg.setSource(37829U);
    msg.setSourceEntity(118U);
    msg.setDestination(50357U);
    msg.setDestinationEntity(168U);
    msg.formation_name.assign("OUIVSGBDDEVENOSQAJVLJVYXGEEUXECAMGEFUFWYPVEYBRUKKZWNBXEZPTAKZPIPPICRAWQXWZIRODZMWFYTYRAOTPRYHW");
    msg.type = 158U;
    msg.op = 69U;
    msg.group_name.assign("RPWXKXDFIJIAVNVVLAXOUJSIJTVVFYDRTZEZIEOHYIUWKSOUKRCIFSTOMTYPOJHQNIEPAFLGZITEZZPBLMNKAYMKANGSNAMXSBCWOHPPGSRGPMQIZCYHRKJDQCTJCGKEZAUFCMQNKLHYCEAQJHLHFWWJMXCULVEFDLDWFPBKWXZDXEUKFLXCGBBJVYVBSNFSQTQRSPBYHQZQOUVCQDMRB");
    msg.plan_id.assign("JTDVPJXZRNKEWLVIDQYQXKIWPFLIUSRAMAQSQWEZGNHJRNCLALOCIPCJH");
    msg.description.assign("QYEFFDHVTURDKPVNMXXNINOFZUAGCMDGBKPQHCVWBUDHLAEYCLZDZSMPMAVQGQDIUTXLHRKWZXCEOIGJEODYGVTJWZBCMAISSBAGPKJQVRCWBOWQCNHFSBTBHSHXFALBCGOXQEGTUFRWFBFLKMWINEYFPKLMHMYJOPUIZTVIMUSJDCEYATUNMXOAEPBSKVQSISJLNDTZPEWYJXTTKGRRGULJHRZIEQZQZKR");
    msg.reference_frame = 161U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33761U;
    tmp_msg_0.off_x = 0.7534089152280448;
    tmp_msg_0.off_y = 0.47415341056045823;
    tmp_msg_0.off_z = 0.5919716056403738;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.767570177646551;
    msg.leader_speed_min = 0.7610260837202537;
    msg.leader_speed_max = 0.9749595403896496;
    msg.leader_alt_min = 0.7164333763269833;
    msg.leader_alt_max = 0.6185526661514137;
    msg.pos_sim_err_lim = 0.6970992772362584;
    msg.pos_sim_err_wrn = 0.3415460861346705;
    msg.pos_sim_err_timeout = 58749U;
    msg.converg_max = 0.41350200636925527;
    msg.converg_timeout = 44414U;
    msg.comms_timeout = 9655U;
    msg.turb_lim = 0.3318109289589647;
    msg.custom.assign("OETQJEAANYARSDRPPMUDMIPWWIUMQCGIIERJUJZBFVOVZXFPQZLVCTNIFIICHWAAXSFTHOJFSMMCLSBMTJBEHWZSKFXRPFQQCLZOKPZVGNUBHNAXUDHCU");

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
    msg.setTimeStamp(0.30979049027099925);
    msg.setSource(45386U);
    msg.setSourceEntity(50U);
    msg.setDestination(21305U);
    msg.setDestinationEntity(96U);
    msg.timeout = 9797U;
    msg.lat = 0.913586813583127;
    msg.lon = 0.9578120328527628;
    msg.z = 0.2519286358495577;
    msg.z_units = 72U;
    msg.speed = 0.506741786998588;
    msg.speed_units = 62U;
    msg.custom.assign("EHKPIPZLKVWCRXECFOMQHHCDAQUYIVUJVTKTFUNEVWRHTQZAVFKUSPOLYPOGPMJSLAYIBWJVGCJASVBDXSDFAYDTGLYCIPWGBJZVM");

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
    msg.setTimeStamp(0.9249006171114915);
    msg.setSource(29113U);
    msg.setSourceEntity(42U);
    msg.setDestination(27862U);
    msg.setDestinationEntity(79U);
    msg.timeout = 57452U;
    msg.lat = 0.44591520618445535;
    msg.lon = 0.016498090122181175;
    msg.z = 0.26829872962071544;
    msg.z_units = 82U;
    msg.speed = 0.37939788063441415;
    msg.speed_units = 17U;
    msg.custom.assign("QADGLDKBZLCVZVGPSEYSKFHXAIQZMFQTGLMGXZPJCUFHPWIYWXUFOAXJFZVGUAPVJCPEPOZLKGAGHVVNAXEBBOZHHWCUIWAWEBPYYTMRBMYUNHUMRRJERQDOOUNXLXTISDPXYTKJIXAZSLWLCPEVQBSLYSRGDDXTJEROKFRNQUKJNCGJNMRHVTTOLIJIEMBHEURIAPKQWTEFMKSDJCQDWQFKZHNFSFQIDYCUHABMMVTN");

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
    msg.setTimeStamp(0.36158148076585006);
    msg.setSource(20701U);
    msg.setSourceEntity(113U);
    msg.setDestination(56012U);
    msg.setDestinationEntity(45U);
    msg.timeout = 57634U;
    msg.lat = 0.40057070319391896;
    msg.lon = 0.6272178955829565;
    msg.z = 0.5796897461861642;
    msg.z_units = 184U;
    msg.speed = 0.7448768099902278;
    msg.speed_units = 202U;
    msg.custom.assign("FLOXFTCNFFZZHJBDKBYRPQFRXEGQSXPQVZFEQNBTDCHYWZEMKZEEKAHQHVQQDYADYKK");

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
    msg.setTimeStamp(0.8368057779362038);
    msg.setSource(53235U);
    msg.setSourceEntity(63U);
    msg.setDestination(18895U);
    msg.setDestinationEntity(12U);
    msg.timeout = 15838U;
    msg.lat = 0.6860642509752823;
    msg.lon = 0.6204606117266168;
    msg.z = 0.43887094599285525;
    msg.z_units = 175U;
    msg.speed = 0.4167699163635199;
    msg.speed_units = 118U;
    msg.custom.assign("CXABQXRLOEKTEZSQRYVAWSKIRGQCORKNSQDLRABXUPKACLFIIUVVNAAZUFFVHYJN");

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
    msg.setTimeStamp(0.21248235887791755);
    msg.setSource(29990U);
    msg.setSourceEntity(59U);
    msg.setDestination(24001U);
    msg.setDestinationEntity(197U);
    msg.timeout = 30849U;
    msg.lat = 0.7457985498379244;
    msg.lon = 0.6579767006786041;
    msg.z = 0.2599294368339127;
    msg.z_units = 15U;
    msg.speed = 0.19824787944612532;
    msg.speed_units = 16U;
    msg.custom.assign("MVUCUTVKAQGHJINFUSZWOFVZYJLRPNGJZEUKOMLONGMUOPAKPFPBZHLXGDWEPJSXQWNJBUFSTXOBTEBPPAARVIOHEODHRQTDEXBSICCSFAOVKRYMPARVBSMYWBHTEHYDGWTPDQKXQOIMKYAJCRBNXHRZJHLKGIXSIYTIEHDVIMZUMZEWQYYVRAJNGSTQUFLQFDTICKOEJHQURWARZZLGCDPQEJGLIDFFWCSCXABYLMS");

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
    msg.setTimeStamp(0.8678314507007194);
    msg.setSource(34282U);
    msg.setSourceEntity(200U);
    msg.setDestination(53575U);
    msg.setDestinationEntity(203U);
    msg.timeout = 51768U;
    msg.lat = 0.24247113770444706;
    msg.lon = 0.8779213250451462;
    msg.z = 0.7705767538120714;
    msg.z_units = 182U;
    msg.speed = 0.5877434851207238;
    msg.speed_units = 163U;
    msg.custom.assign("NEHAZBCYKPNYOGTDWUSUBICUBPIETUYQOMTCEQHVMFKNPJQDVOLSOSWFVHLTTPYKJECXMIWJGQOZOFAALBWKRQKEALDZEGXTIYNVESZYILWRBCHOUGXNCZXDXUZSHWCWRQZVGASBZTHVEHWIFBTKDBBMQJTPMURRQYPCDERMNNEGRUQDFWTLOVBOGUJXHPSXDAIYMFLMINFHNGFXXYAQGKPJSAXM");

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
    msg.setTimeStamp(0.6479104195557686);
    msg.setSource(55668U);
    msg.setSourceEntity(86U);
    msg.setDestination(44258U);
    msg.setDestinationEntity(242U);
    msg.arrival_time = 0.021407211671985116;
    msg.lat = 0.8745326549451458;
    msg.lon = 0.7979310095734162;
    msg.z = 0.6567330450469229;
    msg.z_units = 172U;
    msg.travel_z = 0.04460596274888862;
    msg.travel_z_units = 66U;
    msg.delayed = 79U;

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
    msg.setTimeStamp(0.053166282822109445);
    msg.setSource(11472U);
    msg.setSourceEntity(217U);
    msg.setDestination(55249U);
    msg.setDestinationEntity(10U);
    msg.arrival_time = 0.7639725819770603;
    msg.lat = 0.0957261045012634;
    msg.lon = 0.5889641731458443;
    msg.z = 0.9905281854346111;
    msg.z_units = 35U;
    msg.travel_z = 0.6724594418985421;
    msg.travel_z_units = 218U;
    msg.delayed = 240U;

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
    msg.setTimeStamp(0.605059722225963);
    msg.setSource(53560U);
    msg.setSourceEntity(252U);
    msg.setDestination(17253U);
    msg.setDestinationEntity(159U);
    msg.arrival_time = 0.4107165542620461;
    msg.lat = 0.5812113488861919;
    msg.lon = 0.8778426498413381;
    msg.z = 0.33664123023756953;
    msg.z_units = 45U;
    msg.travel_z = 0.5938166023889611;
    msg.travel_z_units = 19U;
    msg.delayed = 81U;

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
    msg.setTimeStamp(0.4060930857367563);
    msg.setSource(46409U);
    msg.setSourceEntity(155U);
    msg.setDestination(20187U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.8923605523799217;
    msg.lon = 0.7672550204330436;
    msg.z = 0.9806764097355113;
    msg.z_units = 175U;
    msg.speed = 0.4471389107890569;
    msg.speed_units = 205U;
    msg.bearing = 0.4625952242322313;
    msg.cross_angle = 0.679673892318695;
    msg.width = 0.8528917148518297;
    msg.length = 0.71718633658641;
    msg.coff = 27U;
    msg.angaperture = 0.15658452549334212;
    msg.range = 33474U;
    msg.overlap = 25U;
    msg.flags = 55U;
    msg.custom.assign("QDCMHAJKMNMNPUIWWFSZVUEXRSFLRXBAGVIFTJLYYQSDPXTNELSJVXFYLRQOLQYAJMTTZBDIWWJWGHGPHXMEPRORRWRVBXUPNIQZCBTUCPUUEEJWTWUBLILZBNJIKNKSZEEIFKDYKWBLAGVZMRPKGYTFIWFNQNEIOXVVHCZHYVZGCHAMDLYPNX");

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
    msg.setTimeStamp(0.257642273830332);
    msg.setSource(3646U);
    msg.setSourceEntity(94U);
    msg.setDestination(25333U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.559277317712658;
    msg.lon = 0.8594467446648233;
    msg.z = 0.4701329470737282;
    msg.z_units = 125U;
    msg.speed = 0.8125870965620067;
    msg.speed_units = 76U;
    msg.bearing = 0.7101045553309107;
    msg.cross_angle = 0.6047917549516313;
    msg.width = 0.07823281698688844;
    msg.length = 0.9756688565155254;
    msg.coff = 245U;
    msg.angaperture = 0.4547254382609188;
    msg.range = 30075U;
    msg.overlap = 99U;
    msg.flags = 91U;
    msg.custom.assign("LLAYXZHCBWHLFKNGUOJCPSMDHRUADHNQZXNZPUTVREGCIXMMFSLCGYHUPAWKVRFMEQXFHYCLRYCXPOQVBDVEBMZHRBSVSAWMGULIAMWVCENHE");

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
    msg.setTimeStamp(0.3214737445288437);
    msg.setSource(63594U);
    msg.setSourceEntity(142U);
    msg.setDestination(41554U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.7408427702725574;
    msg.lon = 0.6621109958308693;
    msg.z = 0.030393941609084707;
    msg.z_units = 99U;
    msg.speed = 0.23576058670691635;
    msg.speed_units = 238U;
    msg.bearing = 0.23255024209898367;
    msg.cross_angle = 0.8580884845427078;
    msg.width = 0.30416859659410433;
    msg.length = 0.30917762814131455;
    msg.coff = 9U;
    msg.angaperture = 0.7216111161587075;
    msg.range = 52516U;
    msg.overlap = 57U;
    msg.flags = 67U;
    msg.custom.assign("CQMFKDIVAEYWFVPJPIASNGHKGXDVMYTTEUPMPFPGHLIVXXJIOTLPRTNTULEYMSQZLUGNSFYWZAFZJTDEOUGKWAZVIWSJVZEVXKJMXKVERALAHWBHKPKBNMJOSLCBQURLUHIWINYNHMRUYOOKRESWQGBDXZCA");

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
    msg.setTimeStamp(0.6663975369340935);
    msg.setSource(49874U);
    msg.setSourceEntity(51U);
    msg.setDestination(11041U);
    msg.setDestinationEntity(203U);
    msg.timeout = 63281U;
    msg.lat = 0.3854937542664253;
    msg.lon = 0.5446119116057467;
    msg.z = 0.8763481299893864;
    msg.z_units = 178U;
    msg.speed = 0.10124972775671404;
    msg.speed_units = 141U;
    msg.syringe0 = 191U;
    msg.syringe1 = 149U;
    msg.syringe2 = 203U;
    msg.custom.assign("BZQOKLTBBKOJUVVCJUCYHKWVTNFDJJTKGBTNRZDFKUMUCXPHOOEDUEZTVHWWOAIEMAFLMZUVBSKBHKQYWFJSSPIPEYZQXOCXNJSQFMVWLRXIILQHQYGCG");

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
    msg.setTimeStamp(0.7570849299582477);
    msg.setSource(56379U);
    msg.setSourceEntity(169U);
    msg.setDestination(40645U);
    msg.setDestinationEntity(126U);
    msg.timeout = 5560U;
    msg.lat = 0.9449587346203526;
    msg.lon = 0.08540223612973508;
    msg.z = 0.42368596586433505;
    msg.z_units = 71U;
    msg.speed = 0.9215655517913034;
    msg.speed_units = 0U;
    msg.syringe0 = 210U;
    msg.syringe1 = 150U;
    msg.syringe2 = 244U;
    msg.custom.assign("OJOROWDINQSVYZHMEPBVGKIHYRVNCGCEPVPLPSDKYLZAFYTPEHEZCOMMYGMWLJBTHVSXGFRMWWKFYBDRXZLHUXHTLOVAAXKPBLTOA");

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
    msg.setTimeStamp(0.49193393766896854);
    msg.setSource(60929U);
    msg.setSourceEntity(176U);
    msg.setDestination(35028U);
    msg.setDestinationEntity(46U);
    msg.timeout = 33573U;
    msg.lat = 0.6175386483583291;
    msg.lon = 0.1461622058159625;
    msg.z = 0.008252268636038673;
    msg.z_units = 92U;
    msg.speed = 0.7590758881583357;
    msg.speed_units = 214U;
    msg.syringe0 = 80U;
    msg.syringe1 = 161U;
    msg.syringe2 = 107U;
    msg.custom.assign("NHTPNAEXWXCHOVIAAKGQJFYFXD");

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
    msg.setTimeStamp(0.5358945355399413);
    msg.setSource(46689U);
    msg.setSourceEntity(20U);
    msg.setDestination(39218U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.8597420421121107);
    msg.setSource(48947U);
    msg.setSourceEntity(8U);
    msg.setDestination(15245U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.7002975445123096);
    msg.setSource(45603U);
    msg.setSourceEntity(226U);
    msg.setDestination(44737U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.9060614610499301);
    msg.setSource(977U);
    msg.setSourceEntity(56U);
    msg.setDestination(46709U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.612885816703841;
    msg.lon = 0.17400912657185363;
    msg.z = 0.6563881733798409;
    msg.z_units = 86U;
    msg.speed = 0.2916298857221229;
    msg.speed_units = 10U;
    msg.takeoff_pitch = 0.6040768270620561;
    msg.custom.assign("XJZKWYDFMGWUABFSBGFQQLQTYOGPRMWDIMEYIBNMSASGCTQQMIBGYHODBLQDAJRKQGNKJIFVXXCUBJVXLWIS");

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
    msg.setTimeStamp(0.13847904732768024);
    msg.setSource(640U);
    msg.setSourceEntity(45U);
    msg.setDestination(41079U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.5026120658023855;
    msg.lon = 0.8085147615902444;
    msg.z = 0.04422815398980873;
    msg.z_units = 31U;
    msg.speed = 0.6862272228696545;
    msg.speed_units = 145U;
    msg.takeoff_pitch = 0.32112279003651756;
    msg.custom.assign("JWMFIPXYKYWCXIQAOGLYCOQLNZTVHIABMZIANBZOWKKUJJZDGZFZASLBXETBCHNBKYLJTBPDDQESHQOLHTFRLJNVHQZXCPEWXVZNUQMYBDMKVNCPJRQTMULTGKGBGRIPREOPYJRASVFFONPHOSCTJPCHRFEAOMUGJRNUAIIODXSWYCKALHRSUHZHEWMECMMZPBIYB");

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
    msg.setTimeStamp(0.8642014910515805);
    msg.setSource(38178U);
    msg.setSourceEntity(20U);
    msg.setDestination(22335U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.9393053495240776;
    msg.lon = 0.34612884717708803;
    msg.z = 0.16631510494490975;
    msg.z_units = 115U;
    msg.speed = 0.039475837792151136;
    msg.speed_units = 5U;
    msg.takeoff_pitch = 0.06454808821783897;
    msg.custom.assign("AVTJGHPGOHGXDFQSPTPFPEJJZSDNTRCSJKNXVKGJEYVMOEVDDUIATVDNLXIFUPMAA");

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
    msg.setTimeStamp(0.7817399737903806);
    msg.setSource(26714U);
    msg.setSourceEntity(90U);
    msg.setDestination(9107U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.40207697138613463;
    msg.lon = 0.9034064221655063;
    msg.z = 0.23141704029797106;
    msg.z_units = 44U;
    msg.speed = 0.5402148918855122;
    msg.speed_units = 193U;
    msg.abort_z = 0.8721275556819005;
    msg.bearing = 0.8039364801722829;
    msg.glide_slope = 200U;
    msg.glide_slope_alt = 0.02492497948933281;
    msg.custom.assign("CKTLXMLFDETZMEEHJOZUJUGIMFYYMSJFLOQ");

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
    msg.setTimeStamp(0.9245634121497804);
    msg.setSource(5941U);
    msg.setSourceEntity(207U);
    msg.setDestination(26486U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.07570434457696729;
    msg.lon = 0.2637415088598154;
    msg.z = 0.354355165753647;
    msg.z_units = 26U;
    msg.speed = 0.13872489306788538;
    msg.speed_units = 9U;
    msg.abort_z = 0.8232400633015418;
    msg.bearing = 0.9272286751124765;
    msg.glide_slope = 28U;
    msg.glide_slope_alt = 0.3656707696440127;
    msg.custom.assign("GKMYEUKZHQSTOUV");

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
    msg.setTimeStamp(0.5424242198784489);
    msg.setSource(34001U);
    msg.setSourceEntity(114U);
    msg.setDestination(8502U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.4244433627352421;
    msg.lon = 0.29058427624504723;
    msg.z = 0.6767286889360054;
    msg.z_units = 231U;
    msg.speed = 0.8102917315722054;
    msg.speed_units = 223U;
    msg.abort_z = 0.8499688088133495;
    msg.bearing = 0.2252274213062092;
    msg.glide_slope = 54U;
    msg.glide_slope_alt = 0.21764893495324544;
    msg.custom.assign("OPZZVUHIKNOHDXHEJIUUWYPMOFGTNDXLYBWGNTXDKEPASIAXKVITLNPKTELMUNFSWGFRGLLRCEBPQLBUVAURNMFZSUMTGKRWHKXGQFLHJZAJDOEFWGPJEZDJHTMDCFTETEQYDDHVSOQMPZFIEOXVCYQFGAXQZSBJYYGCXCYKNSCXKBWAUVSUHEJQXVRMWQJISOIRBZNPRSHLJHYCZOAQFJRVWBKTALWDOBNNQIYLBZIVCTM");

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
    msg.setTimeStamp(0.38963067128196904);
    msg.setSource(19503U);
    msg.setSourceEntity(26U);
    msg.setDestination(24342U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.9968619708556522;
    msg.lon = 0.7525561496800592;
    msg.speed = 0.8524061296282321;
    msg.speed_units = 51U;
    msg.limits = 2U;
    msg.max_depth = 0.33829580771012635;
    msg.min_alt = 0.9819071403320478;
    msg.time_limit = 0.579996411575008;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.11275042116151512;
    tmp_msg_0.lon = 0.42348594237003856;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("KGHRMXWZZC");
    msg.custom.assign("LQWYSFMUZYJNOGAOQFUBRMKWWFCJGDCQPPBRDTOHXCRTRSHBWIWHEJBOFAUUSBAXIURXABERSMHVGXGDFVAWVKGQDHVZBZMOPICKQLHUSDUGXMAMPKFKFNXJBWXOOPDTIMAKPXNYVSERIH");

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
    msg.setTimeStamp(0.8354416437605815);
    msg.setSource(46203U);
    msg.setSourceEntity(73U);
    msg.setDestination(31753U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.9415842214616936;
    msg.lon = 0.262103325497575;
    msg.speed = 0.3187331042145778;
    msg.speed_units = 113U;
    msg.limits = 22U;
    msg.max_depth = 0.04578706284232115;
    msg.min_alt = 0.8248655075532488;
    msg.time_limit = 0.2064282082620318;
    msg.controller.assign("ECJDCLOTHFXXAAPKDSWNUBGBNHWIKRKINLFGXPOCFXTSR");
    msg.custom.assign("UCSIBZEMSOAZZNGJFQOFINQXIVBUKIRHPWZLCBRTJARPZOTYFDOKTUBLSNCSWHOFVHMCMSXKLADXLGEWVHXVIINVYFAEZZDEQZBRVFSLDBMTKUYIU");

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
    msg.setTimeStamp(0.36005287926988705);
    msg.setSource(63768U);
    msg.setSourceEntity(151U);
    msg.setDestination(32435U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.39662184371381115;
    msg.lon = 0.9203928872838409;
    msg.speed = 0.8056603320108805;
    msg.speed_units = 65U;
    msg.limits = 130U;
    msg.max_depth = 0.5247613165607004;
    msg.min_alt = 0.18343052438663143;
    msg.time_limit = 0.09612722643634608;
    msg.controller.assign("ACPVVSVBKRVNHUTSYJMZHQFDEIQSTSIQREKONJRRPSGNEXXAOMEDLFVLDC");
    msg.custom.assign("FOVKFTXUOEDQBMAKIXWVSPCHPGWMYNRYNIBJSSACIUSBDIQTAXJELJBLOOOLXHFUAHHWTGCYTRHJ");

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
    msg.setTimeStamp(0.36427536574779684);
    msg.setSource(47589U);
    msg.setSourceEntity(34U);
    msg.setDestination(59422U);
    msg.setDestinationEntity(106U);
    msg.target.assign("TQHKUFIXYNNYVPSUOOYEIOWGJZTECCMAIXVAVAAVYLOWONLUXUSSNREEGQHPXPWDHQMSMZWRJPFJMFYSPIJKZGDPVUQKSPRTCXFYHJIDJDBZGLPCERQOZLTKCNIPSIGBRWCHBVASXBLGDCAHWJRBJEEWCLFAFWKOGVQRXKKVERMEOEDKWDKIPDZTIANVQWYLALHZZNBHVXFIYZOUUGDABMMNGJFBNSMUULCQJYTSCUB");
    msg.max_speed = 0.29953763131302413;
    msg.speed_units = 58U;
    msg.lat = 0.7443494449065998;
    msg.lon = 0.38937462948087886;
    msg.z = 0.7220541291386836;
    msg.z_units = 8U;
    msg.custom.assign("HTNJUSAIHRAMTXTCGXCNTOHSYDTHPG");

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
    msg.setTimeStamp(0.8909292286572081);
    msg.setSource(56391U);
    msg.setSourceEntity(160U);
    msg.setDestination(13845U);
    msg.setDestinationEntity(47U);
    msg.target.assign("EQFOCOADCSUTKCOSJILZQCWWYNJNMNR");
    msg.max_speed = 0.7446370885527692;
    msg.speed_units = 126U;
    msg.lat = 0.730369442377728;
    msg.lon = 0.8765367628878764;
    msg.z = 0.4562575545353832;
    msg.z_units = 193U;
    msg.custom.assign("MQJXZDKABTBWRBJIZTYUVUTYIVHWZIWOQSHPKGDIMNLGVVKILGYVUDFKMCEGTYUOHKACZOGUTWFROJEQUGWLQLYNPJAPBRGKEPZHHWISYQDOMVOXBSJLBQHJWUFKZDFDJRQAPCSKPFCLTEAWNIQAVCHSNAZ");

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
    msg.setTimeStamp(0.6933703255468349);
    msg.setSource(5232U);
    msg.setSourceEntity(7U);
    msg.setDestination(6097U);
    msg.setDestinationEntity(68U);
    msg.target.assign("FLUSADUKXBGTSKZTNUOLIQTFBCRIMZAWJKVLPCFGEDINMNNSHORJWWBZPDNXCNRKWQOPBEFBKYOABOIXJVQDNRHHHEAMHKCXDPZMKYMIKOMNUEVTXZFWBBXLTV");
    msg.max_speed = 0.9129237454293133;
    msg.speed_units = 52U;
    msg.lat = 0.39201173715985604;
    msg.lon = 0.7721223638049892;
    msg.z = 0.36554823788552293;
    msg.z_units = 178U;
    msg.custom.assign("RADSRJCBXPLMNGMAZGSRBACFWFOZNOODRXNATYQHEWPPZCRKKNPERDYGTLVEPXXSEIXXVJ");

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
    msg.setTimeStamp(0.7030849472933078);
    msg.setSource(35400U);
    msg.setSourceEntity(233U);
    msg.setDestination(32036U);
    msg.setDestinationEntity(190U);
    msg.timeout = 21460U;
    msg.lat = 0.29126345097997286;
    msg.lon = 0.04854308810338426;
    msg.speed = 0.2227870488058724;
    msg.speed_units = 170U;
    msg.custom.assign("GQRYKOTETTNJCLDBDUKTSKSIBNXZEMGODENVOFKXVXRM");

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
    msg.setTimeStamp(0.6916765577865295);
    msg.setSource(25766U);
    msg.setSourceEntity(202U);
    msg.setDestination(54570U);
    msg.setDestinationEntity(169U);
    msg.timeout = 45918U;
    msg.lat = 0.7341728823996547;
    msg.lon = 0.7101649651575496;
    msg.speed = 0.8698797784969869;
    msg.speed_units = 177U;
    msg.custom.assign("UGJIPYMFMQSNBQYCPUTBTOFZSNXRFZLDFXGVFYLCPDSALJWKWDTXVFDSJBEIVIGLKURMSWMHRPRBWJNOQBZCLZUUMIMHKOHAPIEQMTDGTCZAKYISSUMYFNFGDTPVJHQLXFSKKRHHFPANVWSGJCSPVJU");

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
    msg.setTimeStamp(0.24112943079417204);
    msg.setSource(18636U);
    msg.setSourceEntity(13U);
    msg.setDestination(20036U);
    msg.setDestinationEntity(140U);
    msg.timeout = 64014U;
    msg.lat = 0.867594755507021;
    msg.lon = 0.563807443572059;
    msg.speed = 0.40881649525390595;
    msg.speed_units = 76U;
    msg.custom.assign("WLGHAIDQNTFVTGMJTBBRBYIXNZSYUKQNPKOAXAUKUZNECXMMNIHHFWKCFOJFZFAHUMRAHNGYXGAVFLWDKTJVPGLQAOGRPPJBPTMUAUHOBASDHWEKJHMZXLRETWXXRCRTBXZGDEOWHJZLJRIPMDVOFOPZWWEIQYFSUYOCINQZQTDPKNYUMDEILJYCQWSWFBUMBKOINGRXZLTBCSLJDSCSGBJEKSTDVEKGDVRUIVRAO");

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
    msg.setTimeStamp(0.7091714340149848);
    msg.setSource(59249U);
    msg.setSourceEntity(2U);
    msg.setDestination(39301U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.9476135348777353;
    msg.lon = 0.8759334819625098;
    msg.z = 0.21775156832784048;
    msg.z_units = 93U;
    msg.radius = 0.8883024973210114;
    msg.duration = 29584U;
    msg.speed = 0.8271634565298494;
    msg.speed_units = 192U;
    msg.popup_period = 33448U;
    msg.popup_duration = 15680U;
    msg.flags = 23U;
    msg.custom.assign("XNOSAGZOEHVRKOXZOMZROFVWYGQYWDIHVVSCBMTTIRMCLOTJYVDYMNJOVQYFUJHLLXJBURZ");

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
    msg.setTimeStamp(0.24995493545403413);
    msg.setSource(43672U);
    msg.setSourceEntity(16U);
    msg.setDestination(20515U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.12148378678623228;
    msg.lon = 0.9550844451810013;
    msg.z = 0.7728620544915623;
    msg.z_units = 164U;
    msg.radius = 0.9817885992783525;
    msg.duration = 54393U;
    msg.speed = 0.7711678395010396;
    msg.speed_units = 4U;
    msg.popup_period = 54433U;
    msg.popup_duration = 58696U;
    msg.flags = 82U;
    msg.custom.assign("RBSKKRRLSJCTOUYXRXCJBPJNJOSBCFQVQGFCBCLXDQNAWLAOMBSHKEFNAXWHZSWUZGEYWNGJQFXYCVZQPPBRHHSEOMBISDTWINHOPKUVPWUTBJVWOPELKFGILVLKWLJNLNFZVGWVYLUDECJEMPOGGCZRMPYVSRZQUHMKKDNAW");

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
    msg.setTimeStamp(0.99634144808538);
    msg.setSource(12750U);
    msg.setSourceEntity(127U);
    msg.setDestination(56284U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.004042353670431931;
    msg.lon = 0.5399805980630065;
    msg.z = 0.8731101320038016;
    msg.z_units = 20U;
    msg.radius = 0.704928356277179;
    msg.duration = 47486U;
    msg.speed = 0.4594304472677201;
    msg.speed_units = 143U;
    msg.popup_period = 6283U;
    msg.popup_duration = 47514U;
    msg.flags = 165U;
    msg.custom.assign("JVQTBZNZWCERVTSBOSJYRAHHBLIEQAIKNAZVBZSCSIQILKZWKEOMFGRXHPYDJDOMPMSFXGUHYXIWDCPHWDNCRGTPJDUYQMVMGVYAACUAPRUYIGNHZLVGJNRXOKOYULLUQVFACRN");

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
    msg.setTimeStamp(0.9306247780318777);
    msg.setSource(51954U);
    msg.setSourceEntity(114U);
    msg.setDestination(9195U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.19976192497366418);
    msg.setSource(31838U);
    msg.setSourceEntity(71U);
    msg.setDestination(34175U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.5225729110588186);
    msg.setSource(42315U);
    msg.setSourceEntity(110U);
    msg.setDestination(45300U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.9095423310351037);
    msg.setSource(53281U);
    msg.setSourceEntity(173U);
    msg.setDestination(54976U);
    msg.setDestinationEntity(187U);
    msg.timeout = 25099U;
    msg.lat = 0.1714067006646537;
    msg.lon = 0.17255873493335483;
    msg.z = 0.16675055488095447;
    msg.z_units = 158U;
    msg.speed = 0.8526807834332694;
    msg.speed_units = 137U;
    msg.bearing = 0.40947498012442995;
    msg.width = 0.4080415977804527;
    msg.direction = 224U;
    msg.custom.assign("ISMBXJAPRDQJXFNJ");

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
    msg.setTimeStamp(0.9543950738241175);
    msg.setSource(1855U);
    msg.setSourceEntity(8U);
    msg.setDestination(65024U);
    msg.setDestinationEntity(142U);
    msg.timeout = 43740U;
    msg.lat = 0.9392435942916654;
    msg.lon = 0.7187101566888937;
    msg.z = 0.09614069100379996;
    msg.z_units = 33U;
    msg.speed = 0.5956050874247043;
    msg.speed_units = 32U;
    msg.bearing = 0.15616105227635046;
    msg.width = 0.03735688941163551;
    msg.direction = 226U;
    msg.custom.assign("MHXZCKTIOYGCWKGHOBAVTOAVTQCMTBPSLADLEHAWJTSQVNJEANEPXYFSLGAKTYZOXZTDCMQUHEVHAVCHWBAQLXKPNNKJUURNXUKGVLWJCEYOCHDKRCHFIQDDOZCKJSPJBFBE");

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
    msg.setTimeStamp(0.6461491115886119);
    msg.setSource(22171U);
    msg.setSourceEntity(73U);
    msg.setDestination(45437U);
    msg.setDestinationEntity(224U);
    msg.timeout = 52495U;
    msg.lat = 0.7672120977262777;
    msg.lon = 0.2774299860185966;
    msg.z = 0.28496481218741554;
    msg.z_units = 166U;
    msg.speed = 0.8803397747190935;
    msg.speed_units = 204U;
    msg.bearing = 0.11451142117657676;
    msg.width = 0.9399167797019305;
    msg.direction = 119U;
    msg.custom.assign("ZASRJLAFDDXEEWJFSJYQBLYIFMGOXZVTJV");

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
    msg.setTimeStamp(0.8941150103906191);
    msg.setSource(46873U);
    msg.setSourceEntity(37U);
    msg.setDestination(59164U);
    msg.setDestinationEntity(101U);
    msg.op_mode = 204U;
    msg.error_count = 236U;
    msg.error_ents.assign("NOHCMXMJSOSZMAEGEMQDZBYTJLQHIRYGHDVCLCFJGGZMVLHVAKITOTCRVTJIZBBEPYKKAHPAIGXQFPUUFZYKEDUZEAHXYKISIHSSBWFUVNRDWQUPPNWLUKPVQJXPRCKLISXZOQRLKCSNDFWFFOBNAWXWJJRDZDAWGEMBBVVXXHLDFRGUDDWWTNNTYIGJPIKVOMNSXTLVLNZYHMYERGEWBOJIMCSCRTNAKGAUASFXPRBTU");
    msg.maneuver_type = 25680U;
    msg.maneuver_stime = 0.7750439979384645;
    msg.maneuver_eta = 2132U;
    msg.control_loops = 1739191455U;
    msg.flags = 104U;
    msg.last_error.assign("DWIKFSVTDEHBJGGDKOOTYZZMYFMWLSIJBDCIOEHPRTXQHHNYSAHPVPZWNMSTMUPQCNRKBJVDXMYOQZXZDFWSQADVJFCUOJFCBSKJLNRLBCRANSTUEQIMRRYVYIXZUJRWSYOIMLOVNPCLKYUGPLZNQEUIECAIGGNWAUFTRVNAQHWDLJVJKGWXPBYOVGUPEUWQBFTIKWCKLCTHXXVPGDBSFHTBGEUADHPGAKQXKHXLXBR");
    msg.last_error_time = 0.8975702946906793;

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
    msg.setTimeStamp(0.561211426694744);
    msg.setSource(49308U);
    msg.setSourceEntity(174U);
    msg.setDestination(32677U);
    msg.setDestinationEntity(204U);
    msg.op_mode = 115U;
    msg.error_count = 171U;
    msg.error_ents.assign("MOTRALUVXSTOKTJOVEHOMSEEJFGHSKAPABDRRMWSKGQNFCVBCHZPZRGGPEJJMWBHRUKEJVCVLGSGQXAZZXVGUUHTVJBNPNCHMHIPKLEDKLQPUODWWOYYISFXRWRQMGIKCEQNMLOCFTBRZRABNJUAXBXIPQCTEMONLKLWUZYBQXNM");
    msg.maneuver_type = 58439U;
    msg.maneuver_stime = 0.08094216441753788;
    msg.maneuver_eta = 24766U;
    msg.control_loops = 508578204U;
    msg.flags = 173U;
    msg.last_error.assign("OKFKAKISNIFCMEPRGSNXREDOEHRFYDZZRKUNTFXPPUSMKCBTIIGNBTWWBFQVLYWJDVTMRILQTELDIWBWEOQYWHXVABBNHOUVLJJCHCUXEKDOUTARNJHLOOVZHVGYTGHLANQDMYNMTEYSYLZSZPCGQHVXPSAPGRJSOPAFIZAJASJVPR");
    msg.last_error_time = 0.6018916168732636;

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
    msg.setTimeStamp(0.24820541357807768);
    msg.setSource(20248U);
    msg.setSourceEntity(43U);
    msg.setDestination(3038U);
    msg.setDestinationEntity(196U);
    msg.op_mode = 36U;
    msg.error_count = 9U;
    msg.error_ents.assign("YDINXDAHWHGSFRMBGHKBULSBNWSRVVXVCVIERHADPHZPSOTBQCIJMGOGY");
    msg.maneuver_type = 14178U;
    msg.maneuver_stime = 0.39992833730362676;
    msg.maneuver_eta = 48810U;
    msg.control_loops = 2548768505U;
    msg.flags = 116U;
    msg.last_error.assign("ECDMUJDVXQKEWFHLPZCEBFYKYHWPGFIWODSGOFYMANCPSNTVGAVCCCBHNUOWBQQIDTTRLRJTVWPMTKKZZJZUXGEMFBJBVSIRHM");
    msg.last_error_time = 0.9186438941930164;

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
    msg.setTimeStamp(0.35986791462247836);
    msg.setSource(37369U);
    msg.setSourceEntity(64U);
    msg.setDestination(28191U);
    msg.setDestinationEntity(132U);
    msg.type = 221U;
    msg.request_id = 31574U;
    msg.command = 207U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.14409590980990228;
    tmp_msg_0.lon = 0.84678637752338;
    tmp_msg_0.z = 0.3110899065444255;
    tmp_msg_0.z_units = 194U;
    tmp_msg_0.radius = 0.8146901996380413;
    tmp_msg_0.duration = 3748U;
    tmp_msg_0.speed = 0.09096883744850115;
    tmp_msg_0.speed_units = 225U;
    tmp_msg_0.popup_period = 63097U;
    tmp_msg_0.popup_duration = 3531U;
    tmp_msg_0.flags = 64U;
    tmp_msg_0.custom.assign("FSWNLMHUBJBZLKZQMGFUUUVDPAVBQQISVHDHVCKCCAYWODTPDRRWGZCJMASIBTJVNQQMTDZKNFNNMXNTJWFVNADEIPMEFXZAPOKIHAET");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53601U;
    msg.info.assign("CTGSLPIZGMBRSRRQJGCHRWCYWMJSBWCWRBQZPHODLSAQEJWLUZTDAOVUVMHLTLVRBPHBMXFQCGNNPDSDPKYMKBQPCQTPHIKNTZAINEIDKVCBZDMXUDUMJFAZTUFEXOWKFFTRGTYSFCAIFRIIPOOWCBWVVXNGEYIXEYAYCNXUPLKDVOYTEMSQXVV");

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
    msg.setTimeStamp(0.6163439958326763);
    msg.setSource(49090U);
    msg.setSourceEntity(174U);
    msg.setDestination(53211U);
    msg.setDestinationEntity(46U);
    msg.type = 140U;
    msg.request_id = 40589U;
    msg.command = 78U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.6377877778987937;
    tmp_msg_0.lon = 0.812161186992742;
    tmp_msg_0.z = 0.3999588079722983;
    tmp_msg_0.z_units = 132U;
    tmp_msg_0.speed = 0.6623270064911821;
    tmp_msg_0.speed_units = 7U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6858452028189258;
    tmp_tmp_msg_0_0.lon = 0.8692009092766028;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("RJJKITPRFZGGSXKPKLOFWBLVQNINQQEEMMNXJRBWOXLSDDTLJASBXJKFOCGHTBAKUCHCEMPJYYIOIVBDZVQBCGBWDTAOQKLWSMCAIIQWMDLYVPSREERAF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 64054U;
    msg.info.assign("USGOXMRJIQSZIMVENRODXBTBNNHXBBUVUYEUERJTRAWTBXPYTDWSNDXCMCZUIPXMQEHCPAQNGENAKVNVCOYOAECDZGJIMSXCAIRDDIRYLMKSIEFQQ");

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
    msg.setTimeStamp(0.8906559063675189);
    msg.setSource(36893U);
    msg.setSourceEntity(104U);
    msg.setDestination(59363U);
    msg.setDestinationEntity(139U);
    msg.type = 3U;
    msg.request_id = 65264U;
    msg.command = 24U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 43507U;
    tmp_msg_0.custom.assign("YNZOEBLMSYSGZZFXWQVUHGUVBVUGDJPIJLKIICWTOEMFYHFDMBSWBOZQAOCPWWTGRLDKPMIFVSNCBDDAZKPYFAIVMJHTDQWAOZJAJPTEXTRKORHLTIQGZICFIBDCLEBFFSRLEHLNXCDNGXGJKNAEZIMADJETHHBXUVQURXDMURQAK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5225U;
    msg.info.assign("PLLLGQZTODMXZCNWSUVEWZOPHCTACIJPFRCMRPTHSHBOFWAJIVHFJEBMOXJVDILIZQGQWLXFKQBNEEAYFQRKPSWSACNDZEJUGKZMGRXENHAQMXFQXWLKDXKUMHTDFSQEVFNJGVYDRBKNCPNONGUXKQEDVUTPNBFOLYJPSOCEWDXZOYYVHFWIUHURBGRAKIGUSAMJASYTSVSTKCWPTBMCYWYKULCQRJEVBBXRIMDNAJOZ");

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
    msg.setTimeStamp(0.5945713909911797);
    msg.setSource(2515U);
    msg.setSourceEntity(131U);
    msg.setDestination(48565U);
    msg.setDestinationEntity(0U);
    msg.command = 167U;
    msg.entities.assign("AIFLTLRWQBGSJNSIMLZXRZEUPGYRNDZUPFVAXXEZEFHZNCGISQJICAXZFRKSBGGEKSWFIQSKVLTUHOFNWJGPYNUOLEBKWMUVOVVTXTWRBHDWSAYQCBAZXMOLOTHYASOTNIGYOLHRNJPQTPBAOSRGYYMNCIBFPPOYQFCDUBPEIACHKTGEUKQJMXNJPENIAZUCZLCQMQAXMHDDJXMLDCKJWKJVBCGVWDH");

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
    msg.setTimeStamp(0.7522261926277551);
    msg.setSource(41774U);
    msg.setSourceEntity(235U);
    msg.setDestination(28396U);
    msg.setDestinationEntity(142U);
    msg.command = 181U;
    msg.entities.assign("WHQHRUPUSHSUGKKGMKLMMBTIJLYEXZGJ");

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
    msg.setTimeStamp(0.4286427294155122);
    msg.setSource(27478U);
    msg.setSourceEntity(14U);
    msg.setDestination(18373U);
    msg.setDestinationEntity(74U);
    msg.command = 186U;
    msg.entities.assign("ZXATROSKHZUDBVFWKMQNINKXLJZZVON");

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
    msg.setTimeStamp(0.6899396112027462);
    msg.setSource(5553U);
    msg.setSourceEntity(224U);
    msg.setDestination(56980U);
    msg.setDestinationEntity(38U);
    msg.mcount = 29U;
    msg.mnames.assign("MLCESLKFMREJFQBVLHARZUTCFLNOGWFOPNYBUPBAMGHZIVWTJCOYVXJGPCTTIDHKOYSSUFANNXYQZJVNBHLJBZIDUYIIQXAUWABKKUQKTMWSTMJWJFXUCJHQPORWVOXMPEPGLFYHDRXAINTXUPVRZZSYLMVRLFEMZHYBWXPIOWIBU");
    msg.ecount = 204U;
    msg.enames.assign("IAOXKSQTMXGLFTSQGZJPFKSBPCJUVBBQURKAWWXBIZCOHMRPZEMGEBIAVWSKUGWVEPDPDRHPJLCQCZDXGOJYYMJOAWCDDNONPGYFLIFEBMSZMFKJOTAPKIWXOGAZDBFCRIGIRZWURKIERAJHUTVHVPFNUNJUIOYKYLBUBDQXEFQRTNLDNYOYNTVZQGMMXALRFHOUGVHRSBQHLQKTHQCAEYCHLIC");
    msg.ccount = 132U;
    msg.cnames.assign("DPIRPFSYFJYIFNLYKMKGJSBONXYBINWOAIVJLHFNQAPCXDMYZVZMLMFTITODTKKZLGMHJBUDZTECWUGYOAGZBHYFINFKQDACQXFLOBJSPAXYGNXESPFRJZZJBEVWQLJTZBJKYRAZNVOUHICNUTDECAVGREEMPBQGWLVFBKEXKVHVOMUYRCGPDLILSWHMQJLORRWHQIPDUANUMSSOQCEGRIEHZ");
    msg.last_error.assign("KRDGLVCARAPXB");
    msg.last_error_time = 0.4602700367871556;

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
    msg.setTimeStamp(0.33005733417479577);
    msg.setSource(38302U);
    msg.setSourceEntity(133U);
    msg.setDestination(28354U);
    msg.setDestinationEntity(110U);
    msg.mcount = 30U;
    msg.mnames.assign("GLGTDELWLIHKAJQ");
    msg.ecount = 31U;
    msg.enames.assign("SQLCIMKQOAWXYJHRXJAQCQSRPLRZVQXSNHLUNAXKQFONURBKASJMCQFTBORPPTFMTQGUJEDJPVYUNYOYDBGKPGGTXCTGLWSBSWPHIYHHFMBONMZGLEUTVLIZMRTRYIEWDRSOEIFAMNLKVFZIDMEHDDYIJRWVCABOHVGBITMUFWKZRUIDJGSULVOJCNZFHXZTMEHEBWEKUBXHPSFG");
    msg.ccount = 98U;
    msg.cnames.assign("GECHHLKOYSULTUOSPTAKNPQDDWFIJCQJLOYPZJKSOHXBTXXAVGOEXYXIARYKWRPDYQDUBVRNZCSMIPCBTAQEHCQEQHZWJGNYFSSFKMUQZWRVVKYWEZUKBMPSBPIEHXJIZZCNDFWDMODJWTLGXRUCGPRZEVZBZKUMJDMRRBXILELIENJEBDLSAUMDHGNWVFHVJIXRFGIMUQNCKSPMVOBFOFLUQNYFAOAYKXTAMFL");
    msg.last_error.assign("MPJEVUGBLSDYS");
    msg.last_error_time = 0.5499426921927794;

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
    msg.setTimeStamp(0.7961789631503448);
    msg.setSource(13804U);
    msg.setSourceEntity(164U);
    msg.setDestination(63646U);
    msg.setDestinationEntity(133U);
    msg.mcount = 51U;
    msg.mnames.assign("SNIVDVBFEPPZSEPHYRAXBUNQXTKSZFUJQCBXDEBFTMODWPLLSLGGFSKATTXWHFZOVHIYGUYRNSTZZNYFDYOWMBDQI");
    msg.ecount = 188U;
    msg.enames.assign("QFQEYKAMWCUHNVPMBXXCWARBYDN");
    msg.ccount = 52U;
    msg.cnames.assign("TZUHZJVMGKGBMLTCSPDFTTIAEUSETLDMBNFNILXJJPJUFEIYIOZ");
    msg.last_error.assign("CPDRWOTCVQKBRPZVQRDOEFEWKEMANFYINEBXGYWZPDOERONJSSUIYLLNLJJMFQPSFOQAYXHNHSSMRINZNPIACDGWUMCWGRPOJJTOWLOEABXLCHUGQOEUYWTATHCCWPSYLRUODEMNTWZYELKARIXRKDUAJVTBYPAJXDKKFFJMBDGYSPGSNMLHHIDJMGHZXTBVVEHCXFBHMQVIU");
    msg.last_error_time = 0.999816125070276;

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
    msg.setTimeStamp(0.8204780398100155);
    msg.setSource(49119U);
    msg.setSourceEntity(131U);
    msg.setDestination(8913U);
    msg.setDestinationEntity(212U);
    msg.mask = 116U;
    msg.max_depth = 0.38911078769404406;
    msg.min_altitude = 0.9723614916836589;
    msg.max_altitude = 0.6345557154414371;
    msg.min_speed = 0.6964187965335055;
    msg.max_speed = 0.2973982878592579;
    msg.max_vrate = 0.05643374508524812;
    msg.lat = 0.31254825981882295;
    msg.lon = 0.056664012552163134;
    msg.orientation = 0.20881184588189683;
    msg.width = 0.24608850440354846;
    msg.length = 0.3872647599691298;

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
    msg.setTimeStamp(0.38726080661229867);
    msg.setSource(7201U);
    msg.setSourceEntity(1U);
    msg.setDestination(42440U);
    msg.setDestinationEntity(169U);
    msg.mask = 54U;
    msg.max_depth = 0.4032541846236042;
    msg.min_altitude = 0.6047318146700833;
    msg.max_altitude = 0.6870784667467233;
    msg.min_speed = 0.8047240105735787;
    msg.max_speed = 0.5903357847820873;
    msg.max_vrate = 0.9450334153866697;
    msg.lat = 0.2154111087430719;
    msg.lon = 0.7732744857029942;
    msg.orientation = 0.9033561636288954;
    msg.width = 0.0156456368379978;
    msg.length = 0.8216149360224682;

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
    msg.setTimeStamp(0.8241147512914303);
    msg.setSource(19037U);
    msg.setSourceEntity(137U);
    msg.setDestination(60958U);
    msg.setDestinationEntity(128U);
    msg.mask = 81U;
    msg.max_depth = 0.7825866097440836;
    msg.min_altitude = 0.9077913428091893;
    msg.max_altitude = 0.1630878865868396;
    msg.min_speed = 0.21452088095848898;
    msg.max_speed = 0.87350803379578;
    msg.max_vrate = 0.20354518828972;
    msg.lat = 0.5030579736349736;
    msg.lon = 0.2147193282223827;
    msg.orientation = 0.20995747325378367;
    msg.width = 0.4887215834917715;
    msg.length = 0.20438395689655187;

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
    msg.setTimeStamp(0.8263148948223933);
    msg.setSource(29561U);
    msg.setSourceEntity(221U);
    msg.setDestination(29066U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.3512975029991059);
    msg.setSource(5103U);
    msg.setSourceEntity(143U);
    msg.setDestination(57649U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.25737705985369463);
    msg.setSource(57105U);
    msg.setSourceEntity(235U);
    msg.setDestination(56446U);
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
    msg.setTimeStamp(0.06988928440954123);
    msg.setSource(35599U);
    msg.setSourceEntity(226U);
    msg.setDestination(39163U);
    msg.setDestinationEntity(100U);
    msg.duration = 51500U;

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
    msg.setTimeStamp(0.723569422449475);
    msg.setSource(934U);
    msg.setSourceEntity(158U);
    msg.setDestination(7897U);
    msg.setDestinationEntity(105U);
    msg.duration = 45067U;

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
    msg.setTimeStamp(0.9030519342488086);
    msg.setSource(59657U);
    msg.setSourceEntity(157U);
    msg.setDestination(25600U);
    msg.setDestinationEntity(54U);
    msg.duration = 63457U;

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
    msg.setTimeStamp(0.5347615879344706);
    msg.setSource(35015U);
    msg.setSourceEntity(133U);
    msg.setDestination(26218U);
    msg.setDestinationEntity(87U);
    msg.enable = 104U;
    msg.mask = 1765370565U;
    msg.scope_ref = 1442841621U;

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
    msg.setTimeStamp(0.2850881583952014);
    msg.setSource(42349U);
    msg.setSourceEntity(210U);
    msg.setDestination(54446U);
    msg.setDestinationEntity(200U);
    msg.enable = 207U;
    msg.mask = 1824051976U;
    msg.scope_ref = 3744779371U;

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
    msg.setTimeStamp(0.9636408809793486);
    msg.setSource(64353U);
    msg.setSourceEntity(202U);
    msg.setDestination(42363U);
    msg.setDestinationEntity(23U);
    msg.enable = 9U;
    msg.mask = 2363898109U;
    msg.scope_ref = 2330953877U;

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
    msg.setTimeStamp(0.3784583790843463);
    msg.setSource(5174U);
    msg.setSourceEntity(93U);
    msg.setDestination(42144U);
    msg.setDestinationEntity(161U);
    msg.medium = 188U;

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
    msg.setTimeStamp(0.6041028228702573);
    msg.setSource(23014U);
    msg.setSourceEntity(126U);
    msg.setDestination(3352U);
    msg.setDestinationEntity(118U);
    msg.medium = 247U;

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
    msg.setTimeStamp(0.3511720636749026);
    msg.setSource(13341U);
    msg.setSourceEntity(82U);
    msg.setDestination(18059U);
    msg.setDestinationEntity(147U);
    msg.medium = 227U;

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
    msg.setTimeStamp(0.8480563148828149);
    msg.setSource(57200U);
    msg.setSourceEntity(39U);
    msg.setDestination(3635U);
    msg.setDestinationEntity(61U);
    msg.value = 0.9060199089625759;
    msg.type = 112U;

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
    msg.setTimeStamp(0.49260507254816377);
    msg.setSource(54767U);
    msg.setSourceEntity(165U);
    msg.setDestination(58836U);
    msg.setDestinationEntity(247U);
    msg.value = 0.890000986563811;
    msg.type = 29U;

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
    msg.setTimeStamp(0.4723904159672918);
    msg.setSource(7707U);
    msg.setSourceEntity(128U);
    msg.setDestination(27252U);
    msg.setDestinationEntity(21U);
    msg.value = 0.7686640081066375;
    msg.type = 162U;

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
    msg.setTimeStamp(0.8342243882931031);
    msg.setSource(56615U);
    msg.setSourceEntity(159U);
    msg.setDestination(65064U);
    msg.setDestinationEntity(59U);
    msg.possimerr = 0.726404586642401;
    msg.converg = 0.33737366650123246;
    msg.turbulence = 0.08505234694473895;
    msg.possimmon = 120U;
    msg.commmon = 94U;
    msg.convergmon = 1U;

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
    msg.setTimeStamp(0.9330005009581771);
    msg.setSource(44465U);
    msg.setSourceEntity(212U);
    msg.setDestination(63967U);
    msg.setDestinationEntity(116U);
    msg.possimerr = 0.18162702117434104;
    msg.converg = 0.5816742572434034;
    msg.turbulence = 0.7698979437157226;
    msg.possimmon = 157U;
    msg.commmon = 172U;
    msg.convergmon = 92U;

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
    msg.setTimeStamp(0.6926533330887829);
    msg.setSource(11395U);
    msg.setSourceEntity(189U);
    msg.setDestination(40061U);
    msg.setDestinationEntity(244U);
    msg.possimerr = 0.8334412220288568;
    msg.converg = 0.9734604066521736;
    msg.turbulence = 0.11391838425963385;
    msg.possimmon = 155U;
    msg.commmon = 253U;
    msg.convergmon = 152U;

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
    msg.setTimeStamp(0.6032403789497943);
    msg.setSource(16880U);
    msg.setSourceEntity(213U);
    msg.setDestination(43879U);
    msg.setDestinationEntity(25U);
    msg.autonomy = 132U;
    msg.mode.assign("RVCYMJOMZWNMGKGXFOUAUVFMPKZWIGSE");

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
    msg.setTimeStamp(0.7808523886360386);
    msg.setSource(35349U);
    msg.setSourceEntity(227U);
    msg.setDestination(23996U);
    msg.setDestinationEntity(125U);
    msg.autonomy = 134U;
    msg.mode.assign("OVAERZHZQLHHSODXASFIDAGQBSIJKSNZORNRQGUBCIUPCOIMUAXMYZLCONJ");

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
    msg.setTimeStamp(0.7566439488429251);
    msg.setSource(1231U);
    msg.setSourceEntity(27U);
    msg.setDestination(55382U);
    msg.setDestinationEntity(59U);
    msg.autonomy = 173U;
    msg.mode.assign("CHGMFVRPFJXZNQOFVHPRAZLXIAOAEQCRJTCPSCPTYGQSNJIABLNMDUWHOJEDLGDVENYXHUSICPAHDWWIKVMREFPHDVWRTYLTKSLKHWQWVNOAKWJGOBUZJSVMBMUWTXMGKTQQYETBUBXCONDLXPDFYNNXZIIMKRDEJQFUQGQNCEYNFUZDOKMCGSOBCIAGMJZHKTPQOLIAGIXWZIREOYYSTFVUESVZBXUXS");

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
    msg.setTimeStamp(0.38664214138613184);
    msg.setSource(48307U);
    msg.setSourceEntity(128U);
    msg.setDestination(9441U);
    msg.setDestinationEntity(254U);
    msg.type = 18U;
    msg.op = 214U;
    msg.possimerr = 0.03254922465588683;
    msg.converg = 0.5275069132262654;
    msg.turbulence = 0.17701506515941767;
    msg.possimmon = 85U;
    msg.commmon = 86U;
    msg.convergmon = 167U;

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
    msg.setTimeStamp(0.040405142499996716);
    msg.setSource(55754U);
    msg.setSourceEntity(184U);
    msg.setDestination(54622U);
    msg.setDestinationEntity(9U);
    msg.type = 155U;
    msg.op = 192U;
    msg.possimerr = 0.8440707912557889;
    msg.converg = 0.824933051351613;
    msg.turbulence = 0.12697769473956833;
    msg.possimmon = 74U;
    msg.commmon = 244U;
    msg.convergmon = 203U;

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
    msg.setTimeStamp(0.7557176400327663);
    msg.setSource(56046U);
    msg.setSourceEntity(53U);
    msg.setDestination(55006U);
    msg.setDestinationEntity(17U);
    msg.type = 25U;
    msg.op = 20U;
    msg.possimerr = 0.17368575661199548;
    msg.converg = 0.021313200525937104;
    msg.turbulence = 0.10056559017531908;
    msg.possimmon = 245U;
    msg.commmon = 47U;
    msg.convergmon = 5U;

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
    msg.setTimeStamp(0.354254580252633);
    msg.setSource(2733U);
    msg.setSourceEntity(19U);
    msg.setDestination(33845U);
    msg.setDestinationEntity(194U);
    msg.op = 98U;
    msg.comm_interface = 9U;
    msg.period = 11649U;
    msg.sys_dst.assign("TCOHIDGDZOGCFYIABNVMLDERAFGEJKGRPZEXKVBRJLVXZNRDUHWUMHTAWJTIYBMYFFEEOUSDGZCYUXFVPDSSEFPPLNWXDUXKZCNOHAWXXSTSYBBDSGNMUTAZQBIVJUZLACRTFNMSQYNWPDVYFHNEDKMRJZQRQHKO");

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
    msg.setTimeStamp(0.22999683796124337);
    msg.setSource(33070U);
    msg.setSourceEntity(126U);
    msg.setDestination(6626U);
    msg.setDestinationEntity(13U);
    msg.op = 169U;
    msg.comm_interface = 196U;
    msg.period = 33422U;
    msg.sys_dst.assign("BQVVTOPFMKPBHAAHOBJFURKNYCAOEFGWUEXEXKZJGIHOOJHUBLSWSTOALZLEMAOXYSVUACUQMSMZRFVFDGJNBPUQRDAINTKLXUSKZGSGFYYHUXHFCLMQDSXBONNVRPHYIJLRGIDHXRMEJCPLHXWNKQRPNQEYAYPVZBWPUIQKNZESC");

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
    msg.setTimeStamp(0.41507667749606647);
    msg.setSource(47789U);
    msg.setSourceEntity(201U);
    msg.setDestination(1288U);
    msg.setDestinationEntity(156U);
    msg.op = 177U;
    msg.comm_interface = 121U;
    msg.period = 57788U;
    msg.sys_dst.assign("GIOSCYRVBMXAAKRSGMJRFNECJVONUBCRIIJIMGWIYCQWLTQYZXIMFLLQIESLJ");

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
    msg.setTimeStamp(0.5360848408192498);
    msg.setSource(26474U);
    msg.setSourceEntity(22U);
    msg.setDestination(50968U);
    msg.setDestinationEntity(67U);
    msg.stime = 1808841730U;
    msg.latitude = 0.3939441096703269;
    msg.longitude = 0.010021361259068495;
    msg.altitude = 63745U;
    msg.depth = 46560U;
    msg.heading = 40713U;
    msg.speed = -31006;
    msg.fuel = -92;
    msg.exec_state = 73;
    msg.plan_checksum = 24818U;

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
    msg.setTimeStamp(0.25131866408436265);
    msg.setSource(56862U);
    msg.setSourceEntity(121U);
    msg.setDestination(14278U);
    msg.setDestinationEntity(61U);
    msg.stime = 3711659476U;
    msg.latitude = 0.5651678985885588;
    msg.longitude = 0.9276319412258452;
    msg.altitude = 57951U;
    msg.depth = 57453U;
    msg.heading = 4103U;
    msg.speed = -13297;
    msg.fuel = 103;
    msg.exec_state = 43;
    msg.plan_checksum = 42219U;

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
    msg.setTimeStamp(0.34545893994846766);
    msg.setSource(89U);
    msg.setSourceEntity(147U);
    msg.setDestination(53502U);
    msg.setDestinationEntity(186U);
    msg.stime = 1235814069U;
    msg.latitude = 0.7083451628893761;
    msg.longitude = 0.5839732324007901;
    msg.altitude = 23196U;
    msg.depth = 61418U;
    msg.heading = 14463U;
    msg.speed = 11760;
    msg.fuel = 31;
    msg.exec_state = -3;
    msg.plan_checksum = 17189U;

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
    msg.setTimeStamp(0.18336379846060447);
    msg.setSource(47535U);
    msg.setSourceEntity(247U);
    msg.setDestination(23610U);
    msg.setDestinationEntity(73U);
    msg.req_id = 50161U;
    msg.comm_mean = 232U;
    msg.destination.assign("MLDVIQHVGTFOHCBESJHOJLABCFWLHZXGCPILTZRRDZXBAOWNTRBNAVWSTSNKLOFZVDUHJBPTVPIYOQYKVIGWFXKKMJFORRHNXFMTEZQUIYFVBYEEGUSCEIZMLRNTQBYJJUVPCDVNXUNSHQMACWLWHGIPPAEILXYEHDOTOOWACBOXABPQKIKUSZYZM");
    msg.deadline = 0.9944313493943251;
    msg.range = 0.22423336078697487;
    msg.data_mode = 123U;
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.8207908488443935;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QEJPTNMJEMJYGNLWVYYOXYAMKREVFPQYHTRXQIGGKODEXHCMBAQFFADNIHUTROHAXVZLMFMWNQCKVSISENMTXYLVNXGWRDPJPFLSQVVEWLFLRRPECAOJOQUVWGUDUGKXGWNLWOKJGITEBIUZBOFNRDACRUIFPDQKVIKCAPPMWHHQBRFDUFILTYXZBSBDKTYJRJ");
    const signed char tmp_msg_1[] = {50, -36, -78, -113, -113, 84, -13, -22, 53, -121, -79, 5, 117, 105, 126, 27, -4, -106, 72, -51, -5, -55, -44, 64, -30, -29, 86, 67, 25, 82, -44, -87};
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
    msg.setTimeStamp(0.6524435760053634);
    msg.setSource(12281U);
    msg.setSourceEntity(111U);
    msg.setDestination(40978U);
    msg.setDestinationEntity(93U);
    msg.req_id = 36402U;
    msg.comm_mean = 122U;
    msg.destination.assign("UDDCXDZVTZNBZFYEWNPSJKPVXMVPDICKNRWKUSGFPXXXMARDSQEDCVTBWFSHNMQKWXJVTHENBDHATTYNIGOPRZCFGBWSLORVFGLMLSXKPYKHTKYRAEBXPTJJOJJAMAVHIBNRBILHMGRUL");
    msg.deadline = 0.13602053783064527;
    msg.range = 0.4921460546563887;
    msg.data_mode = 249U;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 57U;
    tmp_msg_0.list.assign("JUFOOTYNHSRPLFKPXAWSTIGDADVKJVIQQJQHVXXZZVLCEYDTAOXCRWUUCPZZAQWLTCTVILDRPOQTLNOZBORIPUGFNDJHIWCBQKMDDDMNHF");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZEYOBWKIZABJWYXGCKHXXXDNMVFFAYRENZCUQJLKUGYFGEQKUWLQEBYWOO");
    const signed char tmp_msg_1[] = {57, -43, 46, -52, -121, 22, 31, 34, -81, -9, 112, -80, -96, -67, 42, -82, 107, -100, -27, -32, 120, 114, -92, 13, 84, 11, 47, 64, -31, -99, -84, -122, 82, 49, -6, 100, 89, 122, 123, -46, -109, 123, -105, 58, 121, -40, 121, 91, -107, -128, 10, 99, -93, -126, -7, 121, 119, 100, -27, -6, -21, -97, 120, -4, -58, -14, -117, 6, -37, 45, 125, 114};
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
    msg.setTimeStamp(0.9580533172748892);
    msg.setSource(17364U);
    msg.setSourceEntity(128U);
    msg.setDestination(8233U);
    msg.setDestinationEntity(118U);
    msg.req_id = 49078U;
    msg.comm_mean = 214U;
    msg.destination.assign("CRAPBLYVMDBRLXOQJADEKFLQCMEYVNHOIAMUCRIZRKIHFIJBUTLXWNTLTNIAHRODEOTEVKGSLGWWEKYFLMXOJZGBCXZJFOTXZDLVJKVYCGYKKGAMTSHPBMRUIKVCEAPQWDXZIGNTLABMXBXDURDHWHFPPZWFSMQBWGVOUAOSBJESHHRFPWUXHCZOPUNXSYSMEWJTYDYQWIPZIJDTZRGKFTNHZKBDLJAQNFCSGIVQNVUFECPOYVSQUPQCNS");
    msg.deadline = 0.31703131464678713;
    msg.range = 0.34140365218284285;
    msg.data_mode = 91U;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("RMHFQPVZSTXTLYAMWHJAAGCJJRJMNFVUWXYPZZMEITUNJMKUXEIOJGCCFKIREQXSXKNGZDOVHJCZGMX");
    const signed char tmp_tmp_msg_0_0[] = {0, 2, -50, -31, 65, -10, -19, 77, 66, -21, 124, 82, -103, -96, -22, -53, 42, 65, -88, 42, -61, -112, 49, -126, -128, 116, 75, -32, 76, 18, -62, 96, -45, -124, 58, 50, -32, -98, 20, -22, 41, 73, -8, -5, -120, -126, -95, -36, -5, -100, -31, -80, -5, -123, 107, 5, -67, -36, -62, 38, -81, 54, 40, -122, -17, -106, 93, 60, -121, -95, 43, 79, 22, 22, -16, 74, 100, -87, -71, -113, -46, -16, 15, -12, 61, -125, 6, 111, -89, -82, -52, 6, 42, 48, 45, -57, -38, 113, 111, -42, 81, 1, 46, -84, -48, 73, -13, -103, -45, 55, -127, -70, -13, 3, -70, 11, -76, 12, -72, -120, 27, -84, -2, 88, -58, -127, -80, -84, 61, 78, -60, 86, 90, -76, 88, -13, 60, -116, 48, -27, -73, 25, 43, 43, -69, -86, 29, 102, 86, -102, 3, -90, -52, 76, 72, -105, 60, -92, -97, 99, 88, 83, 109, 115, 88, -94, -64, 1, 116, 60, -125, -102, -19, 39, -104};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QGAKSJOISJIPEDOMRKNIUOCLTNXVXQNQBBLORYTNNRWWCMITXPCSHMVBRMUBYUCYCKQCJWHY");
    const signed char tmp_msg_1[] = {37, 80, 49, -44, 61, -3, -86, -30, -89, 121, 100, 110, -30, -59, 92, 85, 101, 122, -31, 84, -42, -122, 9, 72, 64, -18, 54, 49, -101, 12, 15, 79, 68, -53, -93, 78, -45, -68, 4, -85, -118, 83, -53, 10, 56, 53, 6, -123, 107, -16, -77, -86, -65, 93, -11, -12, -79, 114, -12, 76, 57, -41, 45, 29, 55, -79, 87, 42, 96, 108, -21, -96, -9, -7, 38, 77, 14, -43, 55, 79, -112, -120, 19, 78, 86, -49, 120, 68, 25, -91, -73, -81, -76, -16, -40, -121, 17, 78, 0, -7, 29, 71, -102, -90, -82, -50, -89, 71, 23, 32, 11, 36, -99, -32, -78, 70, 33, -125, -104, -4, -122, -54, -128, -57, 41, 44, -82, -50, 7, -40, 35, -115, -48, 40, 17, 121, 122, 28, -99, -13, 98, -35, 37, 48, -1, -90, -113, 114, -122, -65, -17, 118, 16, 88, -69, -33, -128, 76, -103, 57, 44, 114, -34, 87, -89, 0, -75, -9, 1, -28, 33, 64, 124, 126, 6, -17, 13, -95, -110, 40, -89, 34, 112, 79, 69, -35, 66, -70, -84, -126, -113, -117, -110, 26, -42, 40, -104, -125, -120, 51, 70, 56, 13, 96, -49, 53, 25, 28, -50, -81, 36, -6, 121, -4, 126, 125, 98, 43, 8, -15, -117, 52, 36, -106, 10, 86, 110, 90, -86, 6, -53, 83, -106};
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
    msg.setTimeStamp(0.7494303965375058);
    msg.setSource(20594U);
    msg.setSourceEntity(169U);
    msg.setDestination(39075U);
    msg.setDestinationEntity(246U);
    msg.req_id = 31013U;
    msg.status = 199U;
    msg.range = 0.14032199076405016;
    msg.info.assign("STMZFPYKMTENERN");

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
    msg.setTimeStamp(0.6521106266424759);
    msg.setSource(36329U);
    msg.setSourceEntity(43U);
    msg.setDestination(23279U);
    msg.setDestinationEntity(11U);
    msg.req_id = 4690U;
    msg.status = 118U;
    msg.range = 0.6119872987228168;
    msg.info.assign("DIZQQBEHVOKSPSOFGWBYPFZCMIHOKTLEQCXPHEKWJTSJFZZRZJPXYULGTSIDJXNPRAVTFFGQTTFISKEUGMFPUKBSSUIRPOORYHLCHTWWCIDIMWMLNUAHJECYZABNJRFHZMVOANGOBNCYBMMGDLUXIBHVLJWKQKQXYJQAW");

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
    msg.setTimeStamp(0.5548059623755961);
    msg.setSource(34886U);
    msg.setSourceEntity(74U);
    msg.setDestination(41976U);
    msg.setDestinationEntity(42U);
    msg.req_id = 17849U;
    msg.status = 129U;
    msg.range = 0.3572339964993487;
    msg.info.assign("HRNLBHMEYIWGBQFZPZTGVBIXCRSXYJUTNGGMQTPJHKTL");

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
    msg.setTimeStamp(0.10569141686586536);
    msg.setSource(12327U);
    msg.setSourceEntity(35U);
    msg.setDestination(59902U);
    msg.setDestinationEntity(13U);
    msg.req_id = 47500U;
    msg.destination.assign("SVTSGECIUGJFKWYHJRLGHOUZTAAZHUNLNFHNLXCKQADKIUXHUPMEOAARKMTRTJZAQRXQIYYFBIVSTMCBESPUEBXKZBOFJ");
    msg.timeout = 0.1600955882153785;
    msg.sms_text.assign("CQTIVWNPIXMRPEVHYPYZSFHKZAOCJZEMNHTSBGEQYXMPWAKWUSVLDEBNYGNOMKDXTPEIPSAWHLVGZUIAAAWLONUBYDZXHNCLUQLUBDJRLPSAIQWJDVFODJPBFSBEHBGXHCNRIMZEHENOGRYKXTRMXUQQRKWTRMGGYWZHOYLITYCWUZOCZOQCXFGMBSIVTARYDJMVLFKSXRPQV");

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
    msg.setTimeStamp(0.3577844577719065);
    msg.setSource(61793U);
    msg.setSourceEntity(8U);
    msg.setDestination(36107U);
    msg.setDestinationEntity(71U);
    msg.req_id = 58538U;
    msg.destination.assign("AMIBTNYARHEQDVGFOFWSHMJYOIGREEQCTVTCAGZAFJAZNGXKSGVVYZLNNCBQEBWKJWWBDEZXLLDKRFTWUXQNOJPEQZJYRPKGYPDGQHDIAHLXJLSAWTYNCUJEKBPOTMNRIYKCQBSWMGPQHVJMXTSLLZUVFPMQOZHDSOZHFKAVNYXUUXLLSMTDYSRANHJVKOIAZMZPDPMBGDUCTXXOCVRTRUDEPFQKBOWHYXOUJR");
    msg.timeout = 0.9993199759291698;
    msg.sms_text.assign("GRNLGTLNBZTLHSQUNLUAHWKQCRZUEIPXWHWNBBJEXKNKEALVYOGUWUSGIJNEOYOFOWGIMCESCXISMKTZCFLVKIOHLNJIDUPPZONYFDWHJOFMASVVZJXFTMGOKPLRADHDMXVVTMASHVDIHV");

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
    msg.setTimeStamp(0.5705171927914511);
    msg.setSource(51875U);
    msg.setSourceEntity(95U);
    msg.setDestination(9596U);
    msg.setDestinationEntity(28U);
    msg.req_id = 11337U;
    msg.destination.assign("OBDORGFDNUZAYVSWYKLGSYBSOUITEVIRZCZOMFAWIHGMCNEDLAZLMEPVWXACKNMAEUKBUOJABOJWUCNDTFVDSWHRGUPMYSBMCPHLTMPGGHTJOEAZCNSZXDHDIUFBXRDIXCAYRHHLCTMBGPYRQPIYJVJEPWNRQCXOPKRSVVKYVQXKHTONVXZQFJFPSLL");
    msg.timeout = 0.9508821050334765;
    msg.sms_text.assign("NOPTZRFQYYDVRJZZQPIZHTTEBQMJLVBOHIXASDNTQYVCLCFGAMTAURLTVISULBRYHVKLODODGINRHNPOMJUINZSSVDKCILWJRPBJVYQDPVVWATJFHUFIEWFYWSNGXGCQZAEQOWBOWUKBAHFSUKWISKTQUKGOWQGBMRCAZLWKEPDDKCXACEMZITECPJYYYSEHKFH");

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
    msg.setTimeStamp(0.36259556602458987);
    msg.setSource(8724U);
    msg.setSourceEntity(73U);
    msg.setDestination(13048U);
    msg.setDestinationEntity(5U);
    msg.req_id = 18981U;
    msg.status = 176U;
    msg.info.assign("DNCNZZDGDOHSNWDOGKAYIADLMQXGKHEFKXKNKXPBCYGFFMYJCYRUSSVMZLLXAEAAQWHDWLLJORPGIRQXEPEGIBCTUQVBFHNDKITVVUNYFUGCETBPLJYLWDSIRRSSRRQBGYRNOEJTHHZJAAFAKZSHVOITEOCXABHTCZVVVOJ");

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
    msg.setTimeStamp(0.5018149871564799);
    msg.setSource(57288U);
    msg.setSourceEntity(251U);
    msg.setDestination(48927U);
    msg.setDestinationEntity(214U);
    msg.req_id = 57946U;
    msg.status = 253U;
    msg.info.assign("YSRYHSREJZNVPXPCGPZSTPDPCKJYNUYPNLXEUMCEYBKGYFDFYHQLKBORKTQSBWZVVOMICFEAVMTIUGXDTTXRIQOGYBOGFLLUWXXBBTHBEKJQJ");

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
    msg.setTimeStamp(0.707393025659517);
    msg.setSource(23319U);
    msg.setSourceEntity(74U);
    msg.setDestination(17713U);
    msg.setDestinationEntity(153U);
    msg.req_id = 33255U;
    msg.status = 203U;
    msg.info.assign("IUXFTXCBOJULLXARWKUMAFONDZEVKQKZGPVSQTRSSIKXYWEWHIKLIESUMEGJPDCZHVQNFPLJWDHRGDEYCRGPSBUFHNDIVHNQJPOCYVOMUIQMVENLGCJDNRNUJZSUYAMGABESWYHNABYCIKXCBHFEMSWRTEZZIIDJT");

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
    msg.setTimeStamp(0.7374937115095967);
    msg.setSource(49966U);
    msg.setSourceEntity(135U);
    msg.setDestination(33858U);
    msg.setDestinationEntity(2U);
    msg.state = 48U;

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
    msg.setTimeStamp(0.505069887984021);
    msg.setSource(18889U);
    msg.setSourceEntity(182U);
    msg.setDestination(60726U);
    msg.setDestinationEntity(136U);
    msg.state = 21U;

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
    msg.setTimeStamp(0.6427102500007941);
    msg.setSource(22936U);
    msg.setSourceEntity(43U);
    msg.setDestination(28779U);
    msg.setDestinationEntity(116U);
    msg.state = 82U;

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
    msg.setTimeStamp(0.6928451136360753);
    msg.setSource(24225U);
    msg.setSourceEntity(37U);
    msg.setDestination(57699U);
    msg.setDestinationEntity(25U);
    msg.state = 126U;

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
    msg.setTimeStamp(0.08470792051164677);
    msg.setSource(52463U);
    msg.setSourceEntity(151U);
    msg.setDestination(53311U);
    msg.setDestinationEntity(7U);
    msg.state = 171U;

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
    msg.setTimeStamp(0.2647464105501359);
    msg.setSource(6736U);
    msg.setSourceEntity(219U);
    msg.setDestination(51253U);
    msg.setDestinationEntity(19U);
    msg.state = 173U;

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
    msg.setTimeStamp(0.15272539190964318);
    msg.setSource(50951U);
    msg.setSourceEntity(75U);
    msg.setDestination(42430U);
    msg.setDestinationEntity(144U);
    msg.req_id = 64867U;
    msg.destination.assign("OSQVGFCZXLGZWNOTLHSPTERNSEESPBVZDLNFSPAKWLDWLQFJQHVWMNTMJEKCHNGATUYWBHTPOVMKIPNKSZGAFVLENCTCXQFBTRXCCLKQWSGMWYZPHKDSTXUHYYYGFEXKJTBMOCUMOIBPKDEDSBMRCLARJPZAGDAIFZVMKTZPAIYONXOUIIQURLYGBYFQMOGJSDJKOVFAXPRIGEIWRVZNXBUQXUEHLMINDQFYUDJBEWR");
    msg.timeout = 0.9540221846333778;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 246U;
    tmp_msg_0.op = 200U;
    tmp_msg_0.plan_id.assign("OJMQDHRKNBSTCNLRNJKRYTCYJUPTNENAHUOLAAFB");
    tmp_msg_0.params.assign("BSWXBTEHBXQPTSLGNEFDKVMJTYOVGSLILIBIBWPEOFVZUNONUBMZBYYCXDEPWHP");
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
    msg.setTimeStamp(0.0014561570550588598);
    msg.setSource(44049U);
    msg.setSourceEntity(249U);
    msg.setDestination(10620U);
    msg.setDestinationEntity(240U);
    msg.req_id = 46138U;
    msg.destination.assign("EDLTDOAHKTRNCLRDUTLFSLOMLTMDCPCXLKZMQIIWJGSWXXSQBCYJNOBWHJVYZFNLWGQOJOOEDPDHZIMQAYNZTLNTHVUHUFGMUEBAGXSYDUHAKUHEBELWKABRIMVFISAZEFNJJFJQQXRODNLKNWSABQESVJ");
    msg.timeout = 0.37166085591700404;
    IMC::MessagePartControl tmp_msg_0;
    tmp_msg_0.uid = 125U;
    tmp_msg_0.op = 50U;
    tmp_msg_0.frag_ids.assign("OXEXOFBQRIBEMMTZAWXVYYNFVHLLRSYYCFBRYWNUGMJGHKTFLGULSRWOJLQKXANBSUIEDAOS");
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
    msg.setTimeStamp(0.5303866675191835);
    msg.setSource(29978U);
    msg.setSourceEntity(138U);
    msg.setDestination(7261U);
    msg.setDestinationEntity(72U);
    msg.req_id = 27791U;
    msg.destination.assign("JJBFNNAGYPVLCJVLXQRCRCTFKUTFGSFBMUGVHWORZVUEURJXPSKEVNOYDLXLZAGBCUSMQTZWUIPDZGQKNAWEHIDECMLYSWOIXMNQNBLOEWGEIYPMJOWUHQMNUAYQXOLKEYFPPSCOSRHLMIBIODDHOG");
    msg.timeout = 0.4145062071709883;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.060060306805197916;
    tmp_msg_0.y = 0.4646636091037455;
    tmp_msg_0.z = 0.9993492466206816;
    tmp_msg_0.phi = 0.9073958969384587;
    tmp_msg_0.theta = 0.6878427447058216;
    tmp_msg_0.psi = 0.4560112853924295;
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
    msg.setTimeStamp(0.9097389672557813);
    msg.setSource(53608U);
    msg.setSourceEntity(187U);
    msg.setDestination(17193U);
    msg.setDestinationEntity(97U);
    msg.req_id = 44869U;
    msg.status = 188U;
    msg.info.assign("BGMKQZPBXQGLTHGAZGTYXRVFBUMNAIGVOWMIHHJNCOYMURCZBTNREWBXEQNLFZNKPKUCRQNNVFPKRMOJIXEXLPQTPPJCFQYHEXMJIFIUJBOOKRFDCUDPJVGCINEOHDCSXFQKTFYVYSL");

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
    msg.setTimeStamp(0.8669488217580773);
    msg.setSource(57983U);
    msg.setSourceEntity(219U);
    msg.setDestination(60516U);
    msg.setDestinationEntity(23U);
    msg.req_id = 53791U;
    msg.status = 34U;
    msg.info.assign("XOMYJWDALYPYPLTKBPIFPKHHUROBZZJGWGQDQZXRCETQGKGARUETHIWDFNVHPTIZMOSJTCZAZBQJ");

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
    msg.setTimeStamp(0.6416613411173364);
    msg.setSource(5546U);
    msg.setSourceEntity(112U);
    msg.setDestination(7774U);
    msg.setDestinationEntity(190U);
    msg.req_id = 51677U;
    msg.status = 191U;
    msg.info.assign("JBTXQQCSUUQAGFAZNPYCWSTXERMKPEHPTBIHSQMXDOWYPLRGGTWKZSIRZQKGGDFZUQMEFQOYYMLCSEJDZFPYYNADLFVVJSEEUSZLN");

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
    IMC::AssetReport msg;
    msg.setTimeStamp(0.32276285477856637);
    msg.setSource(20187U);
    msg.setSourceEntity(233U);
    msg.setDestination(44901U);
    msg.setDestinationEntity(90U);
    msg.name.assign("IUDPKMLLLZMRZOWVQIFGCHEOVCYXDCPQAIFBPNTYYESUSJTGYUXQFVROWYKTZDNRFONEWXRKUTGKVXTKYONAHIOPGJDPYQFKBMZTLGWBMABZBIFEQHPZDJYTYSUSERLBPANEPQWHZNZBSYPXTKKNQAMWJJORLVUZMHSSDSKQEEPIOUFISHQCIUCIEJEWFMMQXAJJVRVWLJAIADNLUNXLGBVWAGTHCMBULBGOHFHMCDFWJGOSV");
    msg.report_time = 0.3867185989099783;
    msg.medium = 71U;
    msg.lat = 0.9053042699391141;
    msg.lon = 0.7264345727863359;
    msg.depth = 0.3833939931582533;
    msg.alt = 0.9242231533293179;
    msg.sog = 0.7513071399470301;
    msg.cog = 0.05028990122273602;
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 51116U;
    tmp_msg_0.type = 23U;
    tmp_msg_0.status = 59U;
    tmp_msg_0.info.assign("SXDSLGEBWXAONDXUPOBBPYQDWTUJRAQUQGEJSZBNUTYXLKAGHBHKQKT");
    tmp_msg_0.range = 0.44123542387625336;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.3101207950740109);
    msg.setSource(59824U);
    msg.setSourceEntity(54U);
    msg.setDestination(58020U);
    msg.setDestinationEntity(22U);
    msg.name.assign("AVXEYPLFZXPXGXFOGRJPUDULLVRVFODIVTROWWCOQTVSIEGDDGQOHBXNLHBECYXQDAQZNBPGYJCHVVTIBNMYWZZMFSGERZHOUZHRYDAPSNUYINCKKTZQKXGKSMHNJAZWYUXEXPUERDJSPUQCHZNWZLCOBVHWADMLMNUEIFTLCBQLCKHTLMNEKPMRNRJGDYYKKKIIPJEMASGQCOWBFVVJFTSOBHEAMMLSCR");
    msg.report_time = 0.23695102752606412;
    msg.medium = 75U;
    msg.lat = 0.14800697011281538;
    msg.lon = 0.7902706699667708;
    msg.depth = 0.8683302946734492;
    msg.alt = 0.8956961319208847;
    msg.sog = 0.9659579691834789;
    msg.cog = 0.12969914272890049;

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
    msg.setTimeStamp(0.8880312153484737);
    msg.setSource(17572U);
    msg.setSourceEntity(238U);
    msg.setDestination(28887U);
    msg.setDestinationEntity(62U);
    msg.name.assign("ZXLWXJDBYFXFMWTCOUZRUQPKJTYHVPHEJNBTGMCWSNDJZBZAXFQBGFDFMGYTRALLEOILSWICOYWVHBUOBACMVKLTKNVREVTS");
    msg.report_time = 0.9897945816886011;
    msg.medium = 241U;
    msg.lat = 0.7435944162951459;
    msg.lon = 0.8389689236107893;
    msg.depth = 0.9986376908740207;
    msg.alt = 0.41644647742502783;
    msg.sog = 0.23618448049689766;
    msg.cog = 0.47288194116668647;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.44349024370007495;
    tmp_msg_0.base_lon = 0.3925708419955687;
    tmp_msg_0.base_time = 0.5933290643824622;
    const signed char tmp_tmp_msg_0_0[] = {94, -111, -109, -53, -21, 6, 112, 37, 101, 48, 38, -80, -61, -51, -83, -79, -43, 83, 21, -119, 98, 85, -109, 33, 15, 49, 45, 83, 77, -87, 43, 30, -32, -4, -43, 112, 77, 84, 8, 34, -36, -84, 33, 56, 63, 21, -42, -98, 84, 101, 32, 14, 23, -88, 54, -14, -2, -27, 39, 111, -25, 76, 41, -120, 111, 20, -2, -93, 73, -81, 75, -91, 43, -21, -5, 109, 116, -56, -41, -12, 124, -45, -116, -12, -25, 83, -43, 77, -11, 94, 51, 22, 34, 114, -60, 73, 105, -90, -69, 33, -44, -96};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.01931599337506862);
    msg.setSource(31735U);
    msg.setSourceEntity(179U);
    msg.setDestination(5709U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.6261226640531384);
    msg.setSource(59739U);
    msg.setSourceEntity(154U);
    msg.setDestination(27756U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.43942713040723813);
    msg.setSource(57304U);
    msg.setSourceEntity(27U);
    msg.setDestination(15625U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.8373862865188308);
    msg.setSource(37867U);
    msg.setSourceEntity(110U);
    msg.setDestination(19040U);
    msg.setDestinationEntity(66U);
    msg.plan_id.assign("UTFLWMBHUDRUUXJHYRQRHLIFIGYGDINTGJQOXOPUWVXSTSERVNFAZVDRPMBPPEGLQQYDBZWJAYQKEJQOLXSQUJYSOFXGDGWIDAMABNBSCWAMSWLPOVEFRFCIXZAGQWKWIONNRBQVCMMHACMVMXEESGHKVVKTYCJTFHSPO");
    msg.description.assign("QOZCXNEXVLJKHITGQPDNFMRCNRZKDOTBBUXTGIFUEJDOWBNUXFDLXHPICJGLVAHWZPFZUDURELKCGD");
    msg.vnamespace.assign("FFLIIRZCSZTBQWBUIRXANVEYOACZYXVOSMMMLABQWYEDPJEAHCJYYOMFJFJJOXLEWGWSTLOUELAPONHLJDVGBREHHCGVXRULKKXTTINODTPCPNVZKTULDJTPMJCHADDRQTWXFSGO");
    msg.start_man_id.assign("ZIKJBYIHXHTYDEXRBZNKZYRRFYUMJFWUIFEYIZRZKPZWMOSJASSGYESBTCGGDLJNSRDPMQCDT");

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
    msg.setTimeStamp(0.3219026242309738);
    msg.setSource(8728U);
    msg.setSourceEntity(84U);
    msg.setDestination(45553U);
    msg.setDestinationEntity(78U);
    msg.plan_id.assign("MOFJDJPUTVPYZCFGTTDYOGNMSMSKOKUBXQPBWROPHEFSKTUNPBVAUIEZOQXHRVCTQEQOXIIDOLUYJMFDJNQNAFVABCNCNPLRCYISTMYJYEDANQPVLMWZIENXWFZFQOGRVWGHZFWBIUXDCJAXRCKTSCWTYIVRLNKZXPYHTMOSXDWHWHGPCKLQGBASMIZWJKDBSBUNEWFJHYTEBRJYXXCHBRLRQUJDEGSAEKGKPVIMEKLOZURSGHLGLLAHZ");
    msg.description.assign("MQRCHQYFLQJSEYUXPAFBKZANKFPMAWCVNFZXYAFPOZAMINOGOTZPNDWTMIXWCODKVQCRATPBDQUWMRKPTRGUOQLUSDXEYESKZBEKQMGCOZXBJDGVSZHSMLHL");
    msg.vnamespace.assign("YEHGUCXBRKEAZWWCXGEJWAEGUSTHVCPSQOZDPCVVXFGBNTLJYPWXLUMNSYRKMBQKRUTNJBFLEULOVSMGIJSCKLRTOQWFHRFD");
    msg.start_man_id.assign("MYQRGUNQIGFOGPUJVCSKTHARIROKFNFJAHGJCHSMAMGVVYXPWMTTIKXPNHDLNAUBSDHUYDASGTQWBTKPNZQPSOZOZEFGDUZVMYBZVBNTJNRTLXUQBLSFQWQKRHCFWRBGAQJLYKWVFJTLOAHPGYHXUZILNZOMAUEPSBLADFPIMLJCKBYIESKJCXJFCDHASKUEEOVNWLRMCBDXKYOUYWIOHCWLCWPIQDWREBOYTXGZMESIREXPXXTCZI");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FNUIYEGYYHRITWCVXQVFLLWUBIASDDZFHDFALTCB");
    IMC::Dislodge tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 31409U;
    tmp_tmp_msg_0_0.rpm = 0.6201081352388891;
    tmp_tmp_msg_0_0.direction = 198U;
    tmp_tmp_msg_0_0.custom.assign("AXXRBMFEMSWOECSGXINWOJXCNVEBOHWQSWHXATJGKSOUAWRMQUTCGGVOBPPFZRORDZYBKJLLTLJHUSZNEYRRTBAMQOBHKQZOGNFZSKQHIFGYVXNPYAMIYNGHYWQUHPKZTQRICUUJIPOZYASJAIVTKDMJKCDTHDEMCPPGEBRVDYIZDCGKRDVVXPCFUJLDFNDTUCIBLHXLBBAQGJVSLXZLPRETNHKFNEMSSDIKZUXWEFJYOMYTWMFQWPAV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::HistoricCTD tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.conductivity = 0.8982431163676711;
    tmp_tmp_msg_0_1.temperature = 0.739102682925862;
    tmp_tmp_msg_0_1.depth = 0.5778360369594963;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::VehicleMedium tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.medium = 107U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("LCAAWOAOMONBNSUJUEASICHRNZWEWPHXKUXCLNM");
    tmp_msg_1.dest_man.assign("KJDMGBNNCNAQDWVYYGKMPQGOCRKOCHXMMVQVHDKOZRZWGZNTHESYCZAALL");
    tmp_msg_1.conditions.assign("XNYUAEGMXHNDSOUEEQDAINZGJHTKQFYGBJPADOMYZNIACIUKS");
    IMC::AutopilotMode tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.autonomy = 109U;
    tmp_tmp_msg_1_0.mode.assign("EPZSSBFHIBBYXNUMAWEREOWNAKJEVVZJDULQXUZWGODXVLHVDOVQUJIDPQDCFEBOFVPRRRILAYKDHRFHUIMAGFHCTBPGGOLHDYTDE");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::Airflow tmp_msg_2;
    tmp_msg_2.va = 0.6491873724206794;
    tmp_msg_2.aoa = 0.28923307179210944;
    tmp_msg_2.ssa = 0.8699901800658787;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::LeaderState tmp_msg_3;
    tmp_msg_3.group_name.assign("NMFXNYITCXUIAHZYPVKQOFVYDVCADKURVIXXGYOOOYNKLVPUJFIPTQQCMDTAAQFESSVSPYSRHZEGRYWNHWTYJGLOESWALTZQYLWEADMUFPGNSUCZRJHHSDJPGCNOEJITLKUKVZICFPZPTMWZQBLQUBRIKWMXKXXIILVFTIPDCHMBZLKSJBWCQJOQRRGFLRRNUDSDAMPBWCBGECUJGXTHNJTAEDFKLBENHENQVYMASOGBRFMDXAXB");
    tmp_msg_3.op = 44U;
    tmp_msg_3.lat = 0.14414383579187307;
    tmp_msg_3.lon = 0.9848763417954121;
    tmp_msg_3.height = 0.6284538079666933;
    tmp_msg_3.x = 0.8388425284448289;
    tmp_msg_3.y = 0.1457670885148804;
    tmp_msg_3.z = 0.10499587930568266;
    tmp_msg_3.phi = 0.6229893865961335;
    tmp_msg_3.theta = 0.9684917461204569;
    tmp_msg_3.psi = 0.36794343190896606;
    tmp_msg_3.vx = 0.8706794539478931;
    tmp_msg_3.vy = 0.7827894093155578;
    tmp_msg_3.vz = 0.8402248521126866;
    tmp_msg_3.p = 0.224232608332244;
    tmp_msg_3.q = 0.9210604421652079;
    tmp_msg_3.r = 0.03751603650901081;
    tmp_msg_3.svx = 0.08387939107470999;
    tmp_msg_3.svy = 0.328844119524379;
    tmp_msg_3.svz = 0.571176460320174;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.24339391872295146);
    msg.setSource(25439U);
    msg.setSourceEntity(199U);
    msg.setDestination(6606U);
    msg.setDestinationEntity(75U);
    msg.plan_id.assign("HGSOKMFEZIGRDEGQZLTYVDBLNTHFVGVWPI");
    msg.description.assign("YIZDZSFKNEYVFRLQZLJBHDSWZOESGLEQJSSOVAJTKCOWBXQGVMMSOTNNEIRIMTYUOJPKTCEWAKOGPLMLDOXLSFFDJVLXAYQIVECJWWRMSEQHXIOXONUYLGQCDKKRBRIHCNRARWLTGURN");
    msg.vnamespace.assign("MWNRTXQLVBIOZULGTLMDQWWIYZAUAORQGBKUPH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LXERXFOYGNBZUQQQWIMKYKICRGWJDCFCOZNLXOVYAZOCRVRBYYFVZEEPBCETTGHVFNAKUXYBVHJNIFIUJBCEHTBKPNWDPRDEAZLEOUSXGCMFDAOCRUPWSZMHTPSVCMYHBPJCAQGKDWWWAUTVTQXUAORFTKSYXXVIGZPNWUISNMSOQASZJKMGHJLJJRH");
    tmp_msg_0.value.assign("GXDBVYEJAHYFSORFNLKCOASMRVHJYQBFDRIZPNEDCCHRMCIBGINZPA");
    tmp_msg_0.type = 212U;
    tmp_msg_0.access = 160U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GVAQSRHCURMILHZYINNDZTOAWFXKAMOSBRJCBVLYBETIAQTXDESWYFLEZPGFTOUHEBVEMRLFHYAZKKBXEWMFGVGSLMJUPTMSPRQUUNHWYOFCDARVHNENSIKYPMWDVUHKDJUSJGOJJHAGRDQCZDOGNYCIICYXPJXBLNZUKNLBMGTUCGQZKQJTNDOTIAJIPVQZMXLKOKEARFZZRFMQQPTBWYOWEFWSBQCCHHOXPXGPEXUYLFDAISRI");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("AQCVNNZAGEORKUENUMBPUUQKNPAWSSLKDDQCSDMHZBRZJHFJDYCGRMYVTSITQQRNWKWDOGXFIIEYHCOWJIRGTYWEXVOLZSGQTAVEENWROPMDSVJOJBDBMIGGHAXCAXJFIOCNQIFJCKPQAEVOHFELHPSIFYXWRTKPAMWQEBZTUJVUBBBRDKEHRYQFSXGGZFMMCPBNASPLIAUHKVICBPFTTXXUMLNOJDYXFOYYRDLSNGUTKMHZUYKL");
    tmp_msg_1.dest_man.assign("BKVMWFGYUWCLFAFKHGKUWOPRLHNLDQZSJYTQEBIUBPWYNDVWYLTXQFNRTFZXCJDOGRIIQRUMXLMARANFKOQXCHDGOMBCPNSLEQJPVFCTBVIKMYSSCGCUIAYAPIWVEOONRJTTXLHKXCZLQJOBJUVKOAVMMYUSWZRXZIUAZGKWJEEFVJZKQMDBNQSDPOMRFHGAGHPYTVTCEHHAEURMKUIWPEPISIRFYZJEDTHSEABTZBG");
    tmp_msg_1.conditions.assign("HNXSVPLGARGXQSFUDAYKDWIWRNDAWQRSQOZCIEAPVWNAVEBIHBOTISONHWOPFARYZTHMQCTSBHZODTAUCKIWHXCMJILMXTYQRPHEXKWMKZJDEIFDXPDJSBGXKGTYLKULZOJXNYYBUBWATRCBCXMLMUFQEDAJKRINTESJSKFQCEUQGVCF");
    IMC::ENCAwareness tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.depth_at_loc.assign("UQQVJEXXNKPXKHKYVMRHLDEFYFYQEXKEVUJMORGHRTZWALOIGTKZOAJBXZSJOQMGCILPKBDGRV");
    tmp_tmp_msg_1_0.danger.assign("BPFYSVKZOJOWDJUFCVFJHFSGWVLFVXTORGLQEUQIIKVQDXKGZTOBDZDCAMEICGOYPDOSCLTUDLONQXJURJYFSNIMKDHKJXNUWCKSPBYQKBZYFWMXVRQBIHSUWHHJIGNZIGCTPRMPPIANWBWSYMWZELCZZSKGEMIBRTCFZEEBPLSOHANUMEQNSZBOARXILFLRXQRYNWRPRWATBTFVGDNC");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::ButtonEvent tmp_msg_2;
    tmp_msg_2.button = 204U;
    tmp_msg_2.value = 10U;
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
    msg.setTimeStamp(0.13997215770757632);
    msg.setSource(11812U);
    msg.setSourceEntity(189U);
    msg.setDestination(59864U);
    msg.setDestinationEntity(210U);
    msg.maneuver_id.assign("TTZNHGZQDPMFZSOSHKPYUUTXUCTPWADCPTQHFJZURRFX");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("SYLIXMDAWRATELTCXXJLZJMRFNQYWVTTBOZBVLRPTGDTSDRQMKVSFECBEXZULKCGZVCIMNISEMVGMXHGOOFFFAOVAOSDNUZPCWJBEGPCSBJAAQLFEPIGZXLPUHKPNKHZMCGNPQLVDWCFKUXSIHXQOPWJNHZ");
    tmp_msg_0.max_speed = 0.013279634293548837;
    tmp_msg_0.speed_units = 245U;
    tmp_msg_0.lat = 0.5768757727458275;
    tmp_msg_0.lon = 0.24900162883665722;
    tmp_msg_0.z = 0.4558343479579774;
    tmp_msg_0.z_units = 239U;
    tmp_msg_0.custom.assign("XQNXQUPAVFIKIUTXIVHPOBUBSXBACHXWXYSGYBKREWVYHTUKFVBJKAWNXNOIBEWTAPYLATHARSIZAJLQGHBGCBRSTYQCMVSEDDRCRRKHJGCDJDUN");
    msg.data.set(tmp_msg_0);
    IMC::ScheduledGoto tmp_msg_1;
    tmp_msg_1.arrival_time = 0.5944389028686836;
    tmp_msg_1.lat = 0.47080333563650556;
    tmp_msg_1.lon = 0.7601796831024273;
    tmp_msg_1.z = 0.9250700723530014;
    tmp_msg_1.z_units = 37U;
    tmp_msg_1.travel_z = 0.6969008931721384;
    tmp_msg_1.travel_z_units = 110U;
    tmp_msg_1.delayed = 103U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DesiredHeading tmp_msg_2;
    tmp_msg_2.value = 0.406563330034578;
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
    msg.setTimeStamp(0.691030437652019);
    msg.setSource(49220U);
    msg.setSourceEntity(155U);
    msg.setDestination(54682U);
    msg.setDestinationEntity(46U);
    msg.maneuver_id.assign("TPZQCTQJXTNDZNVVWPGNFCEEZMOEPRGSHWTNHEJVUVSDMZYYOYRTCNBBJDDVPFWHX");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.36218799466327434;
    tmp_msg_0.lon = 0.25314651278194533;
    tmp_msg_0.z = 0.46273718479308246;
    tmp_msg_0.z_units = 61U;
    tmp_msg_0.radius = 0.37847768042852625;
    tmp_msg_0.duration = 19405U;
    tmp_msg_0.speed = 0.40661523817348166;
    tmp_msg_0.speed_units = 89U;
    tmp_msg_0.custom.assign("NLNJLVMQJPNTTPHKBGLHERITKCLXHBYQDSCTFOMIORZEITJJHHYEDMDNFEBOTKUMUDKYHGGWXWBPDYZMVJTVNNBOHWCRRSNPNSLVIVQQDJCMSUJMFYYMRECLCYQWOLZWZASPAZLWXMBIYSGXTEXITKRZVFACGXCDRKPSKCVORWLFMBFAOUIQTXGVGKPPSXJIZAOAZAGU");
    msg.data.set(tmp_msg_0);
    IMC::SmsRx tmp_msg_1;
    tmp_msg_1.source.assign("KRJOYDMLSEIYTYZTFGZPADEQGQGJBWSPSHCWPFULCMOATQGHKRVQFBXWBETOPIKFQAHXINVYMODRYRHZKYLONJQFJCSRXORWZOPPENTVXDIKIVANQLNRWMSWBGBFXAEURUNBHTYLBFUFZVWEMCBTABQPBFMHUZDGLUNSHPHDFVXSAEWGJNXPSQDWMDJCLUINEUKHIZOLJKIC");
    const signed char tmp_tmp_msg_1_0[] = {-122, 75, 112, 61, -63, -30, 73, 27, -12, 87, -68, -56, 79, -32, -5, 2, 17, -10, -3, -68, -19, -93, 80, 120, -5, 118, -118, 82, 91, -36, 122, 71, 85, 23, -37, 13, -69, 5, -44, -84, 32, 2, -60, -66, -108, 115, 30, -68, 86, -72, -101, 9, 8, 85, -35, -3, -106, -14, -101, 40, 31, 41, 81, -2, 13, -61, 83, -87, 117, 10, -121, -8, 75, -30, 108, 58, -87, 64, 12, 101, 91, -60, -17, 1, -16, -89, 72, -22, -7, -118, 62, 72, -75, 37, -43, 28, 77, -103, -51, -77, 76, -18, -108, -122, 85, 36, -76, 113, 39, 125, 46};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.24656523102460481);
    msg.setSource(62967U);
    msg.setSourceEntity(212U);
    msg.setDestination(65142U);
    msg.setDestinationEntity(105U);
    msg.maneuver_id.assign("VWSPEVIXGPLFEQKDQBCXLYUNGTXZCIKOTQRMWWOYEAVGZHAOSZJSBRJHPIICJQHLMARHZOCWGLOTEUXPRAOFCOFHCBGELNKSRUECDLNWDPPZTVMPBACMVBZALWBJTZKWYN");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 9951U;
    tmp_msg_0.lat = 0.584476428564164;
    tmp_msg_0.lon = 0.5029149289374207;
    tmp_msg_0.z = 0.5577992189711175;
    tmp_msg_0.z_units = 55U;
    tmp_msg_0.speed = 0.6140904860478561;
    tmp_msg_0.speed_units = 198U;
    tmp_msg_0.bearing = 0.9569470813044723;
    tmp_msg_0.cross_angle = 0.07192233884714605;
    tmp_msg_0.width = 0.7910260920210801;
    tmp_msg_0.length = 0.7316427428854498;
    tmp_msg_0.hstep = 0.14567997027247614;
    tmp_msg_0.coff = 96U;
    tmp_msg_0.alternation = 223U;
    tmp_msg_0.flags = 74U;
    tmp_msg_0.custom.assign("AWRINJMYWSFUTUITGDZPJSMMQINUKRXXHYZYJEDVFZBWIBOEKYCCFEHLZKBQOCXXKDPAICWHOLJVDOPFTKPVBQMAHSHFPEZFCQHBIJBNXSXLHEULOCNMJAGNVWCVHWKOKTEBJYWD");
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
    msg.setTimeStamp(0.8808662452594896);
    msg.setSource(49426U);
    msg.setSourceEntity(173U);
    msg.setDestination(36242U);
    msg.setDestinationEntity(138U);
    msg.source_man.assign("MRHSRJUBTKWFUEEMCELBDKPDPTOPRZFHFSZXGFSII");
    msg.dest_man.assign("PFHBXWDBTAZWJWBRGRWTWEWOIXTTVFDWYZVHQOYJIUMCTUVVQTAYZLSFQQXQLJPKXHAJKGYXCKDGYUBDJDPAZEEOEIUFGNLNTAGYXWWEUOLSQAIMRWVSZLNFUSCCZLRMSFADEFJXHKIZMXZYQFBTCVDNRENARSBVKOMLDPMCUKJIGZCEQPPHOKENMUKYGZOYVDNJLNMIYLRHLBIKBARQBJHNVSPQAXHOPCNTMCUIPCSKXG");
    msg.conditions.assign("DIACOIRMVUVEKMVKHJEUDHXUTGSKPQMHANGHGLZOZATYAIAYNNFWYQSPDMLCEXTNKMFTJJCKDOKSLNDKVCMHNTNBAEOIXFRVQOCTSUZJNPHFLORZGYQWXPHPSVWRTZLGILFCIGPWIJVSRTXUEKZDJTZBFC");

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
    msg.setTimeStamp(0.6632771569767153);
    msg.setSource(21425U);
    msg.setSourceEntity(155U);
    msg.setDestination(27800U);
    msg.setDestinationEntity(89U);
    msg.source_man.assign("XMEGDLSZIWKJBXAKPZTUOSPCLGQQXWNKLRUFUBULONEZPKMGBDAIZCUGCVMJVMTZYYAJFRASHDVBWYYHQQFPITOGNKSBKMNHJNWBRCWFACTIGDRAHMERSFNTIFZJFWQHOIUGATTMCZSSDFRJNWESXOXWUIE");
    msg.dest_man.assign("TFHFBDOOUNJXSCZXBHLPVDQYLRKUDYTWZBUIMDCXJAXRZXDICLOTWQWKYGKOVJKQJIHWBUQQTXWUZFPEUKHLBRNJXWHPIJVDEAYNLYXRNBSKFWVHZSPBGJHXRUCBJRVWZROCFEZKWADSMGAWLVKKNHCIFKFIEMEPAIPOXTAMJUGZIGEQSFQPVZGHSYTDS");
    msg.conditions.assign("KNWFBGHTPSJKNJIUNSBXAMRZFYLONFPQOXPXTRYVSMOWKZAOGETHKPYCMWLTZNELMYOLMKQWRKAICVVNDAPVJGIPBBJUVJTFZITWIKUPFXGIQQEZDXDMRJBVJEA");

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
    msg.setTimeStamp(0.048072288805885766);
    msg.setSource(63168U);
    msg.setSourceEntity(177U);
    msg.setDestination(61358U);
    msg.setDestinationEntity(200U);
    msg.source_man.assign("ZJQKZJQCBAWBHQWYATXEWIQJGEBTJTBJAABFIKSULNBMXCSNVYEODXOTUQZDUSMIOVLOFTTMKXMPNRUKVDKSVUSHXTOBKCKNARYXLMTCPGFYEUDZPHGHEIJSJZYKULPKQDPCGBXNDQARCNLFFIDWPWULHMZOHRXMYYXEOTIMOPVCJBVRIXQYGJSLVIGPWCAGSRDHZMELUGRMFNHHZLCYWNDTIAEOVRRZKNEWFLBRGYISQEOJWFNVQFSC");
    msg.dest_man.assign("QIQMRZIHCGALYMYXLHXMFUFWKXHZRHWBGOOWEZEFPZRYAUINSFBVGJMVAOYWDUFPDUACZBISGXJKONNKBSYJOFQVQTQMHKRNMSELNJSNBXGPVUSUDGCFKVTTBPWKEOYKXTYCTXOJJHTLIAQUGMVEDSGCVYXEWQRXFILFKVEKCTRNAHCPLNUZBDJSMOOSIBRDPHAPEQURGPUJNTYPZAOWBQRCGEEMHQSWXLAZAIIBWLDILCJ");
    msg.conditions.assign("VQCTDYYWVMFCHAYJEXJKUBVLTOMWORPOZRITOPFKEGXBFQAELPOKJVPKFTLCNQHJYGXWZZQWFZSXLANDGSLMCNDPIUIZIALLRTYVDAQGYGCMWRAVMZTNKPNAZOXTHJHBUPMEEAWXCQCTOVEWX");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 177U;
    tmp_msg_0.mode.assign("HZJBBCJIBWNKUTJZXIXCYTBNWZYVLQLNQMSNVDRDCZZXPKKCSFAMTOAGBYLCUGHFENPLGEAPIEDYPQWRJMGWHVKIYHJINPEYKULQTYTGSZGHOGAHZDMPINDPSBCSGKPTDZRFOFBQCXFFKTYAGKBMWEWMBROVLVXLKLADRSNWUOCQDLJEQOTXSSAFEEFAFVVEIOURGDFXVQMO");
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
    msg.setTimeStamp(0.1085054417425737);
    msg.setSource(8641U);
    msg.setSourceEntity(176U);
    msg.setDestination(21551U);
    msg.setDestinationEntity(93U);
    msg.command = 163U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RFEOURVGVLMDFQDRVEFOQYSLFCQKFULTJRGRWHCGUPSEOIVDKBTTYQPHXAQAOKEWBBKVGYZXLNHWUCIXBIOKNAMHYMACHIRGIXJAEGAKMPZYLXRSIRWXVULIWMJCHVRFQOHNDJLOWKIZVEMBXCSFLYLUSWTPKGZFYPKMBGXWNBDECHJSTZSDJHEGMNTNOABVAWMUZWVXJFOITPBZTYUQADLJYEJNPXCCKDNDPTHUEAFN");
    tmp_msg_0.description.assign("TPLFZCPLZBWORQYSUGKMVFDKKRNTQQXDCNMTVFIDCENDDWMKVIPNBQFXSLBMXQUWMWTPVDXOXZXDNTBJMYHYEQQUGSZLGRVITNMMGTGAPGHFRCSUGFAXJZVQFINSRPOUCYTGTKOBJPOBKLSIZEHJAARKLPIJLLESXSGBVFKODBHSCHGWTJEABW");
    tmp_msg_0.vnamespace.assign("XKFFQNPVTBYIGWTTGMWLLOYSJHYTGTUHPJEGSPCWBYFFRFPNLWXVVAOZRIDGUCXQEPGJFNUIJHOPEDMUVTMOUBBMTQPNLFDZDQTOQLBXGKSMKQYYJESMHUCQKEDZFMCPWZCZRCSQWDSNADXQXBJRNGXHVQLVOXLBAIWXJRHUCROISCBBGYKHHOAFJNWKPLAYLWBVIEYCOYRVHUSEIMKDIGZKWZKUPFLNDONSJACEK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WRASQXCKXEPKQOZICGMRZHFLPKDNNAPFYOYVXXXRWKBKHTFWOVNXUJDMKRMRHNBSIGQAAJEJDMFEAJGPCMPWTUVAYLVOCHNMWEVZBITOOJPWTT");
    tmp_tmp_msg_0_0.value.assign("FZCWRDGRTYMROMPARENVTQSOXAJDDNXNCZLZOYSGPQBTENSQZXEUKBVSJQVKXGUNLVLPCTUWVOEDBACPYHIENTFCGAJASIJIXYLAUKBLAZRPVVCWVYKFZTSNWFUDAPEL");
    tmp_tmp_msg_0_0.type = 184U;
    tmp_tmp_msg_0_0.access = 19U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RKAIBOCNMQIEZHLLZTGODEBRXSWXSHWQOPSIWGHUUXUVMPUGHVOAESLCIIOAGSJKTBLFMKIRJZVZCENCYCYWWZHTUAOEBIPUXTJITUSPVZWNLKXTNAZAQFZKQRIKTCYUQJMKFGRGBBTPEPQDLECJANMJVNEYQUDWDWVKTBFBYGDDONLSDPARROHMAWYYNZHPKRLCRCDEGZSVIYXQDFJXEPDAQXNVJLM");
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
    msg.setTimeStamp(0.1639066400384922);
    msg.setSource(11044U);
    msg.setSourceEntity(106U);
    msg.setDestination(25161U);
    msg.setDestinationEntity(104U);
    msg.command = 55U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SRUIDYXYWZQURPWNIABTMWXGLHZDEAZMRHCBYCCZSKQBWEZGEGOOHVPOILTHUHRHQTXYVSUTKTWUOLYICPXJWRLJFOAJEODNFPSSKEMUZIZKUSPPMQXVJTVFOANQFHFFIKUXADQSQYBPPVKVQIJJGFBBWCNJTURNIGMIEXJWGDZCSLXDBSLYMHIGMOTMNJGCKXDM");
    tmp_msg_0.description.assign("UNPEBQTRLSVOICHLMDTPXYEVLVOQZJRJPZWWCGIFKMBQNDXUFPMZAIDRZUBBQLTWGVDREYLEMINEFSPUDEMQZBGOFHNVYYISCHBAPSJUIKLNBXTOBXUJNQCRIDEGALTSCWXCYYSJDGWWGASWAHRJQPKDVXEKMKHXFBRKOOIYHH");
    tmp_msg_0.vnamespace.assign("SMJYQJADENDKUGBOCNI");
    tmp_msg_0.start_man_id.assign("NLTSRIJCQQDYZKWCFCREBQNFKWHETJJSYCDVIMFAXQAXOLDSIPRYYGHEPPXISMSTNCADMIUKZGCQTRFRLEFTUOZJWPIAURBFVTVJBMMZNHEICGXEKLERXOUXWDCLGPYYHTZHEFXZJBZMTVNFKZO");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("DPJLVTPJDYFTGSUKJFSHWFYKMOMCIDYPPHMZLKZKXJOHFHVEGBYOEVTTBXCQMZMSASDGAYOYFKKIPJBUCLSNZYIOSHWXEUAPXDAETXCLWGRRTKYZESCLICCINIRCFNWDNGNJZ");
    tmp_tmp_msg_0_0.dest_man.assign("LPTXCQOJPFMZTIXAQVBXIZQYHNTTUBPBRAZMJEHRRTHDKOZCMVECVXPSQREBUALGLHSXYNLULFVSUBQRHZSWGEKJFBHDDZCLZBGXKECDYAAWFNFTGVNQGEABWNDVNJKQFDEIEORJHRKGXJAIQDVFYIDSYBILOJMPPKYTUUMVLCNZMKWXACDKRYENSISMGNGFWURJGBYLWZHJPQONCSWOPYOVSYHEOTWVUMWUSWAHDMQIRIT");
    tmp_tmp_msg_0_0.conditions.assign("HCXOZKZNWWANMWXNIJKBFGDCMTRPELTTLPPGYJBXESMBTVSNLOWDNSCRHWKJAEVGHEDUZMUPLFIZSEYKD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9421478825291795);
    msg.setSource(58167U);
    msg.setSourceEntity(83U);
    msg.setDestination(11478U);
    msg.setDestinationEntity(241U);
    msg.command = 92U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LMBXXNAYFERGMOZKADBMFXSHACIEGJNOIFASMNAUZKTWDLCEJOGGWIYFNSJZLDFMSRGNCAPZHWYMHHCDEZYMRBQIKSGSBPVYYDIXKVDNCUQRHTTKIZVCNAGSDPGLJBUQFLWFNPVQZDWARYRQEKGIRDZXBSUVJTAVMFKRSOLURXQEXPFKXQRBANUJMPIUQMTGCWFOKDZLKOBJBXHVIWBWEVJLPUJUCYTQTH");
    tmp_msg_0.description.assign("GGCCEBBKDZNEQNTFGVVUTTUYAKMNWBLRZXVYFHNPRXWKSILRDWQAADVVGIQMIRKWPDTSQUSNLRFZVSMZSEEJIJTUVHZLTVHXHFOKOPLOPWBDOJEOXNDRAYXARUUKCPXSBDHNMQMTURXEHLSJHPOECJGUKKOJKIFPAFYUQLAMCYLLZBIYHJCWGIZWSYYHNFFLQTMNVXSDIWTZFQJCOBIEGRMYAJMMBGDJCDZEACZG");
    tmp_msg_0.vnamespace.assign("GGLQLEDVSBWOJYBARRGWXIHXTCKTYVKUILOWYTUGFMCHJFMPREFLEQUEROKNGELDAOAHSNBZSQOY");
    tmp_msg_0.start_man_id.assign("KUTZKZIDGBMXYVYOYSYBFSJXEZCPHBAJPMEKIWLBEOUJWZQRXVYLS");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("KFYZAEFHFPRFYCVESTUUKIWXRVI");
    IMC::Sample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 9898U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7959498914633697;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.7309143867783037;
    tmp_tmp_tmp_msg_0_0_0.z = 0.1318205498088254;
    tmp_tmp_tmp_msg_0_0_0.z_units = 69U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.7562717032113678;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 197U;
    tmp_tmp_tmp_msg_0_0_0.syringe0 = 225U;
    tmp_tmp_tmp_msg_0_0_0.syringe1 = 146U;
    tmp_tmp_tmp_msg_0_0_0.syringe2 = 251U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("YSLZHEAGEXVFKCI");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.08108452533432708);
    msg.setSource(46155U);
    msg.setSourceEntity(217U);
    msg.setDestination(3218U);
    msg.setDestinationEntity(10U);
    msg.state = 231U;
    msg.plan_id.assign("QYMGUHQKLRQHECGNJNKSBKYIAIAUEWCFIQPCZZOGHDBFDJZFQRYUZGFITBSZWTVAUDSJMIBPCDPBXASPAWTMNOYWKTOPEBKTQEWXNVUVNRJHVTMGEVLUZBVCBOWOHUDMVKHXKOBFMQLMHIJROOCXSNCCMIVJXPQLKWSZGLERPZAEXDDWTQJGQAFHFRNHYYYTAULONWELZEFIMYKLODWZGTBMDHTXJY");
    msg.comm_level = 189U;

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
    msg.setTimeStamp(0.6810912899686175);
    msg.setSource(7209U);
    msg.setSourceEntity(241U);
    msg.setDestination(48852U);
    msg.setDestinationEntity(141U);
    msg.state = 179U;
    msg.plan_id.assign("LTLQTVHHUAQYYPUSDLJHBTHPOFWKYTXRXFSGUEPXBAMEVDKWRPCDDQMWXJIYGCVUOYILRGZPGNGLLHUKPLJMSJEOCJSXJWNFAQKDZRQIOFGXQTTCLSLAWPUFIZEMDFFXTDKUKTRBIV");
    msg.comm_level = 6U;

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
    msg.setTimeStamp(0.5688572401082282);
    msg.setSource(32256U);
    msg.setSourceEntity(236U);
    msg.setDestination(1121U);
    msg.setDestinationEntity(59U);
    msg.state = 16U;
    msg.plan_id.assign("TWHOBYKUXL");
    msg.comm_level = 237U;

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
    msg.setTimeStamp(0.7611802361538239);
    msg.setSource(63592U);
    msg.setSourceEntity(80U);
    msg.setDestination(37144U);
    msg.setDestinationEntity(173U);
    msg.type = 170U;
    msg.op = 172U;
    msg.request_id = 14898U;
    msg.plan_id.assign("IOQJGCMDOXREUJBSZQWDNJMWGTSPVXQEABHEULUNQCDHRADVPTGKEOSVWCKAOVPJOPBMYTILVBESKVHBYYQPZIIWONZAIMTXUNKCXXJDCJFGDZSEFWJXHPQYVYFCZYAJYUU");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 11754U;
    tmp_msg_0.lat = 0.7928481889021607;
    tmp_msg_0.lon = 0.05386206781513836;
    tmp_msg_0.z = 0.2947560633858468;
    tmp_msg_0.z_units = 148U;
    tmp_msg_0.speed = 0.6870311140195666;
    tmp_msg_0.speed_units = 52U;
    tmp_msg_0.bearing = 0.2547425625031985;
    tmp_msg_0.cross_angle = 0.7132188675499215;
    tmp_msg_0.width = 0.40057699176380157;
    tmp_msg_0.length = 0.5195451087075833;
    tmp_msg_0.hstep = 0.8871618939654742;
    tmp_msg_0.coff = 103U;
    tmp_msg_0.alternation = 118U;
    tmp_msg_0.flags = 244U;
    tmp_msg_0.custom.assign("NPPPAUFJHQEDPTDIGWSLSVOXMORHKIYIMWOUVFXPLCHKLWGNVOKUTGGKZLHWDTMLDJIRJTYHPCRZYSDVTFUZSCJAYTEGSWRAGOMPQXIUXZYVEUBNDZJWFRKPOUIQCDOMBQMYNXZUKNDAFLNBKWWZBYJEHYAXBJKLOEIKLZTBMCQQSVNWVYLPMTNQRBCCZVTGXBAGOEXEDFRETHEF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QSLPJKHVENVKSPNRNLIUEAYMGORTYHAGCHRXFDZZIVQCFMSKGEVDZNMDXIDQTLQAFIQFWGKXIFOTOHCWGNEYBRHHAFBFNEMSXXVMHUZMY");

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
    msg.setTimeStamp(0.15646064981334307);
    msg.setSource(6044U);
    msg.setSourceEntity(239U);
    msg.setDestination(36813U);
    msg.setDestinationEntity(95U);
    msg.type = 229U;
    msg.op = 78U;
    msg.request_id = 36225U;
    msg.plan_id.assign("KZZLKGVVPTRPYGU");
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 212U;
    tmp_msg_0.name.assign("JHNFNCCLPSMQQRRNEEWOVMJGVRYIFRVMAAUPSJBALRITSTXGDZLOJUQUCPPVEATDUILPISZMKEKXNBTYBACZWHKOBAVBRJID");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZIUQURVOIUEOPDGJPLLBRZKBXRZLVNTOGGFEHKOHSUEPQBXDRNILGHDDBZQDBEJNQRWMMTCFAVSGUDHQZWIQBWMELFXCYNDPZQMBZULHCJKOMWNCZQQOVE");

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
    msg.setTimeStamp(0.2949851704126528);
    msg.setSource(57922U);
    msg.setSourceEntity(142U);
    msg.setDestination(58624U);
    msg.setDestinationEntity(43U);
    msg.type = 165U;
    msg.op = 179U;
    msg.request_id = 49365U;
    msg.plan_id.assign("OIMLZNXKBZVFPSALJSYASGLSXWZQFODUPCIXGSHUHEHUWLGYPOTZOPYMOVUFUPMMPQJBCAJMURSGCURWEEKXMQKGACUVPIYRZGBFZQHXTAJYYKIIZWTCFQICBDPTVQNGFQWNPEBJGYERAIJFFISSLGHWVDUAHBDJDXMCTRJLXHRZASZJTOWCXETEKHVAODLNKJWKNKVEEXNBPGWXTULHRYSBZNMLOHBDTBYAYDTFOVKCL");
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 248U;
    tmp_msg_0.entities.assign("BPEMYFPOHJNNJDOUJSYAODAFHDCEKVBLCQEZJJBHKPJTCJQDSMMXEXRIOXQAHLASZCVWTEVQIUNJEFDTRZWLMOJXZFRIGWLPTEDRCUOHCVPTZRNORVHYCBHVKVLMHUGGWWGHVGQIYUCFGKRVQTZAFQBWBDGBAPEYTPE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EXWXZOMJQLTSWPLWRGAFPHUUBFPUFTMBU");

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
    msg.setTimeStamp(0.6708615880371279);
    msg.setSource(1715U);
    msg.setSourceEntity(58U);
    msg.setDestination(19654U);
    msg.setDestinationEntity(220U);
    msg.plan_count = 52730U;
    msg.plan_size = 3528431082U;
    msg.change_time = 0.9715412802492983;
    msg.change_sid = 18261U;
    msg.change_sname.assign("RUKXKHIDQTJLQYBLBDTMVTXOYDBELDCVBLRJXFLEWFFNKJHFVBLOXWPBQIINFUXLZUPBICUNHIUXHTWASOCSZC");
    const signed char tmp_msg_0[] = {-108, 123, 15, -71, 116, 38, -11, -120, 80, 59, -110, -98, 102, -42, -8, 112, -120, -104, 83, 118, 22, -64, -94, 2, -71, -118, -82, -33, 76, -113, -79, 18, -55, -15, -100, 101, -112, 39, -118, -114, -76, -13, -16, -49, 117, -110, -103, -20, 118, -117, 70, -37, -114, 66, 102, 41, 45, -69, -7, -82, 64, 86, -23, -4, 55, 41, 62, -107, -59, -37, 8, -81, 23, -88, -88, -6, 4, -45, -71, 92, -128, 68, -115, 62, 31, -94, 16, -100, 31, -25, -54, 87, 93, 62, -120, 8, 13, 42, 38, -89, -87, -55, -87, -116, 50, 41, 98, -80, -45, -48, -45, -98, -128, 106, 81, 46, 110, -13, -39, 109, 100, -13, 107, -121, 113, -107, -108, -60, -23, 94, 121};
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
    msg.setTimeStamp(0.3247225212726973);
    msg.setSource(59303U);
    msg.setSourceEntity(68U);
    msg.setDestination(9894U);
    msg.setDestinationEntity(110U);
    msg.plan_count = 59663U;
    msg.plan_size = 338912554U;
    msg.change_time = 0.3033206751339764;
    msg.change_sid = 64049U;
    msg.change_sname.assign("SBHNUHOVRQTPLOHAGOCXEARCZKJSPJTDFSBHOGLYRLCDTKXDWXLKIXLSMFEOJYYMSBCWOQKDAHCQSRPRGMOWGNTATNJWSENAMUKXUHAMBUFWNJKJMDZCFBTOFHYLFBDMRXHINTSEQVEPZQWEVAEPPYTWXMTZMDCPSQNLVQXNEUNNIGIJRIPOBCVHFZGIWVLWFZYJFQDPZEYDVBLKKYXVAGKGUGJV");
    const signed char tmp_msg_0[] = {45, 51, -60, -39, 112, -82, 28, 5, 121, 118, 96, -14, 111, 46, 42, 78, 74, -81, -78, -118, 65, 10, 15, 27, -38, 121, -55, 109, -84, -66, 50, -87, 119, -112, 29, 17, -123, -100, 37, -101, 101, 34, 113, 21, -125, -56, -68, 121, -15, -54, -26, 80, 24, 0, 29, -9, 74, 41, 15, -82, 118, 92, 26, -110, 116, -8, -128, 116, 118, 1, -65, -14, -55, 47, -61, -104, 91, 110, -4, 77, 26, -9, 3, 8, -128, -6, 121, -56, 17, -77, 1, 12, 88, -26, -58, 107, -128, 18, -120, -7, -63, -68, -80, -117, 113, 42, -72, -77, -58, -126, -110, -124, -73, 119, 69, 32, -10, 99, 124, -31, 123, -21, -123, -117, 102, -37, -16, 41, 18, -42, -3, -44, 16, -118, 123, 118, 95, -37, -48, 1, -90, -76, -57, 7, -13, 89, 15, 114, -39, 24, -4, -94, 86, 125, -115, -112, -42, -64, -125, 97, 117, -31, 124, -31, 82, 20, -46, -12};
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
    msg.setTimeStamp(0.16544728230532402);
    msg.setSource(30658U);
    msg.setSourceEntity(154U);
    msg.setDestination(10313U);
    msg.setDestinationEntity(135U);
    msg.plan_count = 3212U;
    msg.plan_size = 1149972274U;
    msg.change_time = 0.6718109914628673;
    msg.change_sid = 24808U;
    msg.change_sname.assign("UJMTKUCBZCVODSFEZORKELWEASUSADPMPATXLUMQHVWGUIVBDJOYQJFZLSNCBUFXSOMMSXNDUKBKFUIQOS");
    const signed char tmp_msg_0[] = {103, -13, 38, 24, 102, 95, -118, 35, 93, -3, 122, -39, 60, 119, 64, 35, 124, -104, 27, 27, -89, 37, 9, -58, -2, 115, -43, -106, 72, -19, 35, -42, 97, -87, -37, -45, 17, 35, 75, 96, -28, 22, 70, -53, -99, 10, 31, -14, 107, 81, 126, -111, -128, 10, -126, 29, -37, -50, 125, 36, -114, -111, -107, -26, -93, 90, 1, 68, -121, 78, 106, 52, 74, -58, 15, -8, -71, -23, 51, -38, -52, -77, -76, 7, -57, -123, -25, 110, -91, 65, -97, -101, -82, -113, 2, 92, -113, 28, 81, -128, 51, -70, -83, 59, 39, 6, 64, 36, -42, 124, -97};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MZJLOXIZYWNTWSCBIEDSOUEPWMGPYMVTWRAKSXQ");
    tmp_msg_1.plan_size = 64275U;
    tmp_msg_1.change_time = 0.3396770824622989;
    tmp_msg_1.change_sid = 23296U;
    tmp_msg_1.change_sname.assign("LRKDEXUOWMJKCNGVHDXOSXVTRAAVGJYHYRKBMUIZGSMCILKAJWUPZEZPIKQCYNTGTBQIMDHYBDSPNGBAZOBIRNFLOIWPCFRRBPRHVETHKDYHFINLEVIBFOHMEWXDJERQIGOXXXMNVHAZWMBFJOSCTITHBXWGAJLGZVPDSZYWOJCVVPABLULUZTWQPSPMDUXJHSERNFADNQWFEULSCNFSKKDLAYCZOQEFUVQEONZJYLRYJQMTQQSATCKT");
    const signed char tmp_tmp_msg_1_0[] = {92, 47, 85, 61, -96, 41, 29, -90, 61, -57, -29, 5, 120, 20, 81, -47, -21, 86, 1, 100, 28, -2, -124, 67, -7, 100, 124, -101, -7, -33, -31, -22, -41, 11, 101, -116, 18, -116, 71, 115, 69, 39, -57, -71, 71, 110, 65, 46, -23, -93, 28, -20, -123, 32, -63, -42, 44, 88, -27, 113, 81, 88, -56, 119, 9, 91, -46, 63, 117, -37, -104, 41, 68, -67, 80, 84, -85, 59, 26, 71, 8, 9, -10, -8, -89, -67, -21, -116, 32, 31, -97, 78, 25, -61, -126, -118, 23, -100, -94, 77, 13, 103, -119, 96, -89, -104, -30, -17, 73, 36, 8, -51, -90, -13, -46, -51, -111, 55, -38, 73, 109, -62, 81, 20, -15, -31, -43, 49, 12, -99, -57, -19, -15, -83, -76, -72, -91, -77, -18, -11, 86, 122, -47, 71, 16, -43, 84, 53, 69, 100, 59, -32, 15, -63, 103, 52, -93, -54, -57, 36, -82, -45, -113, 30, -99, 53, 2, 70, 11, -62, 99, -13, 59, -54, -18, -57, -85, -1, -125, -12};
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
    msg.setTimeStamp(0.05237409957340067);
    msg.setSource(41852U);
    msg.setSourceEntity(141U);
    msg.setDestination(5553U);
    msg.setDestinationEntity(139U);
    msg.plan_id.assign("BRDKPFUFQMZERNIJVNPSHVYCPQIXAQWADDOGRKTKGZRHAFCKRZUZONYEAYFOSZNJCHNVXKURMTMGYCAVDXBDSLMOLLU");
    msg.plan_size = 43506U;
    msg.change_time = 0.5456100166045316;
    msg.change_sid = 6576U;
    msg.change_sname.assign("WWHSLMYABUGJWTFNCHISPAIOFIZUOKHTYDSHJCKNOQATRVWANKRCXGGJEVFALNLPUTSATMCIKNESEUZUEGHRLUQHKARFTLGKYODSDXMYYBUDNPYZXRGUJJWLPSFICQVMQVDICEXVHKTJBKXQBBFNMEPBDDDZ");
    const signed char tmp_msg_0[] = {70, -126, 121, -85, 65, -92, -41, -26, -99, -85, -110, 105, -11, 113, 99, -98, -1, 68, -65, 65, 15, -113, 107, -1, 118, -76, 21, -95, -110, 65, -6, 123, 105, 27, 114, 6, 0, 34, 31, 95, 122, 43, -18, -92, -126, -124, -51, -114, -12, -100, 78, 32, -89, 57, -123, -125, -70, 53, 23, 63, -28, -61, -124, 111, 111, -69, 116, 32, -1, 69, 90, -109, -74, 85, -103, -34, -45, 36, -101, -63, 32, -41, -6, 64, -106, 79, 40, -38, -123, -76, -47, 123, 21, -19, -27, -93, 68, -53, 89, -49, 101, 91, -12, 23, -70, -5, 82, -45, 62, -25, 86, -116, 23, 88, 74, 22, -126, -102, 93, 10, 90, 17, 31, -91, 41, 51, 88, 100, 106, -50, 44, 92, -107, 100, 60, 10, 28, 45, 75, 77, 51, 40, -52, 4, 70, -62, -24, 11, -3, -56, 99, -29, 13, 17, -45, 102, -71, -8, 11, -38, 12, -56, -103, 55, 88, 86, -92, 39, -98, -55, -74, -24, -87, -28, -7, -55, 18, 88, 118, -75, 97, -19, 82, 100, -44, -89, 124, -40, 47, 67, 109, -127, 66, 83, 63, -109, -113, -5, 101, -27, 120, 13, -24, -94, 77, 44, -49, 122, 93, -31, 49, 104, -20, -104, -22, -5, 106, -115, 105, -59, -70, 26, 24, 11, 66, -87, -53, 4, -63, -62, 69, 79, 31, -4, 84, 97, 55, -114, -49, -117, -62, -100, -13, -34, 101, 72, 103, -116, -108, 56, 106};
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
    msg.setTimeStamp(0.6538196874846919);
    msg.setSource(37909U);
    msg.setSourceEntity(43U);
    msg.setDestination(18404U);
    msg.setDestinationEntity(67U);
    msg.plan_id.assign("AZMUHBHYOOQUZDWMJGXKFWYQDSWLISIPYHGUUVWQQQAPTMZIKANIPHBHWRRHCILXTGYVSJKQBWPYSAKNLUGJBCZYOONQNCNCBYRARJLZKZHEERTIXVIEIZDXCOIYPVTYTRMJIUNXZWNXYREHKVPKBOBKUDGVFLFSONDKPAFSEJSHFGJ");
    msg.plan_size = 46848U;
    msg.change_time = 0.02354006289158883;
    msg.change_sid = 3512U;
    msg.change_sname.assign("OVVYGPARSDEQAGITSXKMWMTEGBSEAIOMYQVXJUYQYBTJLOKMZKNAXXTWXMWXWZCLVHPJJAFQKJTNFYADNHRJPPFZAWHRF");
    const signed char tmp_msg_0[] = {-44, -93, 4, 100, 22, 114, -92, -113, -7, -35, 60, 59, -6, -11, -1, 30, -24, 66, 5, 110, 19, -43, 7, -46, 22, -103, -93, -1, -3, 33, -120, -96, -59, 25, 8, -1, -10, 9, -1, -91, 111, -6, -77, 108, -37, 34, 38, 87, -118, 105, -4, -99, -71, -70, 39, 46, -89, -92, -89, 115, 119, 29, -36, -64, -82, 39, -17, 125, 88, -62, -89, 29, 2, 82, -126, -30, -15, 109, -109, -15, -107, 14, -122, 57, 21, -114, 40, 89, 81, -30, -12, 75};
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
    msg.setTimeStamp(0.052752200429507456);
    msg.setSource(35422U);
    msg.setSourceEntity(215U);
    msg.setDestination(23129U);
    msg.setDestinationEntity(143U);
    msg.plan_id.assign("VUERWWGTWYPBIOIFIYNHHQUBCELPHFRTHDCJRFIFWNQPIRCZVSEBRUVYWRCWSOTJUZAWANHZNCAPAMCTXGSKAAGQKYLBQJZILAJBPXDXXUQMNKJZDBZZKLALEQUIOBLKJYFXMZYFFEIGJOTPWGDTTZTMKLMGFDLZHOFKSWQDQNHKGCIVEHGJMRRSHSAOYPGPGROPAJMVDRBDXYCKYU");
    msg.plan_size = 28796U;
    msg.change_time = 0.3906267347733108;
    msg.change_sid = 54491U;
    msg.change_sname.assign("QYEHPYEETKTFRWBPVPLSILZFGYYOIVHCCNPMKFKJZAAMXQLEJGGRCITDRBDMIBWTADBNLJHUAGUEQWCRKHSWOLMVMDJIKRROEYANLIBDLFSHUZQUGXAPNEMYHSUOXMBDRXYSAIOYUSJKWDHUITAZCHPTXGFYTQXPBCSFYF");
    const signed char tmp_msg_0[] = {-104, -12, 0, 30, -53, -22, -80, 101, 20, 70, -5, -97, -69, -11, -116, 33, 40, -119, 52, 32, -5, 67, 102, -3, -121, 122, 67, 11, 74, -29, -2, 104, 103, 66, -39, 32, -96, 16, -63, -52, 14, 50, -102, -58, 58, 62, -61, 122, -124, 2, -88, -4, -54, -74, 63, 70, 107, -62, -118, -8, 2, 126};
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
    msg.setTimeStamp(0.7366624991081684);
    msg.setSource(49336U);
    msg.setSourceEntity(114U);
    msg.setDestination(4834U);
    msg.setDestinationEntity(36U);
    msg.type = 39U;
    msg.op = 147U;
    msg.request_id = 2021U;
    msg.plan_id.assign("ZYGRSFJRHHAWLIYWMAHLYIWYPXBVGNGKLXRJZIJEKMCXUNYOTMXDFQXSMWQDDWKLWHKHEIUJIHBONPRPCUDVKQRQPAAALAZLTEIUNGHLUKEGOMBUJFDQSJQTFSJTTOFDKXUMFQZJVAZYNSDBDOVVWPQJPHFBDLWZXCCANXIYCQKYLGRVMKCXBRBEBFHSUXEPILRTVE");
    msg.flags = 17967U;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.6480991394770567;
    tmp_msg_0.x = 0.061817027481035014;
    tmp_msg_0.y = 0.23678267614822635;
    tmp_msg_0.z = 0.1743339478561452;
    tmp_msg_0.timestep = 0.21538726702775057;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HMRJGWXSSBNUOYRGDMYGMCHZU");

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
    msg.setTimeStamp(0.38437038133669665);
    msg.setSource(17558U);
    msg.setSourceEntity(64U);
    msg.setDestination(45829U);
    msg.setDestinationEntity(184U);
    msg.type = 98U;
    msg.op = 92U;
    msg.request_id = 33550U;
    msg.plan_id.assign("TOIRNMHNXWQYHOEUHPYDPGRUJHZBOXUWTURLBRBEVIMNIJEISQTDGCOGOANWUGFIJNHJDLWZQRUSHAJPYVIFLTLJNUKMVAQXXGPBXRJVZAYYVTGSCWFCPDMKELKCXKCKXTEVUFZZW");
    msg.flags = 63539U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 21544U;
    tmp_msg_0.lat = 0.18050119594162517;
    tmp_msg_0.lon = 0.46381700863310005;
    tmp_msg_0.z = 0.9493740601466478;
    tmp_msg_0.z_units = 45U;
    tmp_msg_0.speed = 0.3619748169832291;
    tmp_msg_0.speed_units = 150U;
    tmp_msg_0.roll = 0.41708332404931936;
    tmp_msg_0.pitch = 0.26506518255863054;
    tmp_msg_0.yaw = 0.422503082464735;
    tmp_msg_0.custom.assign("GDDRWSQMDJUXHJJVKBQOQOVTUGNESJDJHYVTMVVRAHFFDKPFWRCOSGSOAPTYIWPPKOBSDHJBJXUTUNPNYNBIFCMAJAKQBANZPYAMRHWNEZPSQCGZMWIVBCRUUKHFXZCLLCOJGBSHNFHIWYXVEKPTBUEQXNZYSETOXXUXHYGIHJLISFLLCTMKDMTVWRRLL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TXHDGAVZYAKQJZSBEBEBREPJFGVNDRILDSYHAFYMQKXZRDVVFYUULCZJQPBTPSOUEDWDHVPNYFXITNBDTHXLIXMNJZOJLLASUZZKIKOLLALTOWASYKPUURPOEKUTTKDYGAWCJCQFRQHSWNJVKIYFTPNRCCGSXMUCQRWIEVGFBGNGHMWRVWZGHPFFMMFENANMXU");

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
    msg.setTimeStamp(0.34281093175235355);
    msg.setSource(36741U);
    msg.setSourceEntity(247U);
    msg.setDestination(13983U);
    msg.setDestinationEntity(185U);
    msg.type = 129U;
    msg.op = 1U;
    msg.request_id = 20665U;
    msg.plan_id.assign("CJFHGTSUINWYVWNHDCTMKXDGUKYWDFRDJCVFAISOHQYHSKGASEQOLQPFMHAYPZFXKYLXNNKNPJADUZZCQDALZDFRXHMKQXTAQRVEOIBGHWDOBFZJPMUZKREEIWQUNXRMVHGLBNSOYVBPFNEBCTDKGUQRFJPKYBQEIDCCGVEOAWTJPVITKMUYBRXNJPWYOCXRZJ");
    msg.flags = 23270U;
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.08089322021137668;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SGJZISLRWFRQHJIRKLBQGANUGAIVQJPEOSUCNVDMTXFBWMGBDZYDKNRCCAWDLZVYDPSHNZOXUMHTISIQBUFZTHQKIEMELZQEEGGIDZPCTBMYFOQHUAZHMMFAYMLCDSRJPXUCLPMKQYSNJUYJFXLVNKBNRCCIWYLWCDVETBFXZPSVRYVKIBDYRWULNVJTOAKE");

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
    msg.setTimeStamp(0.1645254017030957);
    msg.setSource(16480U);
    msg.setSourceEntity(145U);
    msg.setDestination(43337U);
    msg.setDestinationEntity(232U);
    msg.state = 228U;
    msg.plan_id.assign("RAWIBDRVUDBNRFDYMECJXOWXFOFNYTQUHSCCNGOFHWNBDISIVVPNDBSKKMAEGDKMHTHHYEUQZTLRKIGBFCOEXNJYKTBZOINSQFPEXGCBCJCKZCMRBAZPQUQTXLPDMQJQDIGFYPVVBWAORLOAKLZAYZTSETLHGRSWICZGTNCTA");
    msg.plan_eta = 626842333;
    msg.plan_progress = 0.28879386176826183;
    msg.man_id.assign("FLMUGSBLUQDDUOTBQYITJHVBRLNRAOMLZIOFZPYKBXUSHCWPLIAWSVNCKXOZTRGSZPYOKKVVKHTKRZJGDEDWNPLMFBZBOMSODPBFKQ");
    msg.man_type = 30099U;
    msg.man_eta = -657860193;
    msg.last_outcome = 236U;

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
    msg.setTimeStamp(0.9435123102228424);
    msg.setSource(58838U);
    msg.setSourceEntity(49U);
    msg.setDestination(56838U);
    msg.setDestinationEntity(179U);
    msg.state = 24U;
    msg.plan_id.assign("JJDHNTYZCIIKTCXDCHOULVJGPDOEPYDMMNQWDBHSQCMTNHZWFVOXOEPIXRIGILNUROEXHEQEZKMDJAGPJRSRIUQAXNDYWGSRBREKUODBLSQWKWRGUABMNLLRBAVCOWYFBHUMJZFCOKKQNUIZQHVXXZFSUUMAGWJZAPCTQXZNTFYNLJTPNKPWWBSHGFFDCTA");
    msg.plan_eta = 6237175;
    msg.plan_progress = 0.13115807934706014;
    msg.man_id.assign("WPROIEUWAUAVLSGYPLTLXHSFKDKVFSDZOXAISQQKEAZFJBWRBUUNTXHPMSHVMNZOEBOEDNXAAYVAXKJRREMGICQQGMLCANQZDWJFJTQLNITYTTBJOPLUIZUQPALVIQKLWFQGPMYUEBUGCKJVTWTRUZVRJGMCCFEYKNOPFCFHFDPCYHXAUCIBCNCEDVMXINSZYMKJRSSIEWDNYHVBWOGHBKDZMWGJTBXISVPLXRFBOKJEDZGWRD");
    msg.man_type = 58095U;
    msg.man_eta = 1351665335;
    msg.last_outcome = 81U;

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
    msg.setTimeStamp(0.08762371418322523);
    msg.setSource(57925U);
    msg.setSourceEntity(211U);
    msg.setDestination(17842U);
    msg.setDestinationEntity(29U);
    msg.state = 145U;
    msg.plan_id.assign("OMCWSBRLOLYXHWNBVVIZRJRMPIGGXZTZOECYUURVCLZGQFEXHWDSUPVFAVBQLUZLBJTRUKCBHITXPMHUYQZYFEAUMDKHGDHPRINTCSQRJQJSXGXLJSFVBTMTFAALQNWWFFHZBKUKPEEWGNENATWOUXWGRZEYTLISLCCZYC");
    msg.plan_eta = 1780264407;
    msg.plan_progress = 0.5927278717858512;
    msg.man_id.assign("YEXEVRBCIHIWUUMASXNHWAZAFEVXRZFYRIUASCVUYSEHGKFVVTORNTEMWJJWZXLTWAVMKCISTCZXODJIYKAKDJPHNLKQUZVKQLWLWPEHNPMRCPHSRSHUGLTPKZGOVJONDBVXXQLDWANDUZNCFIYNCYJATUFMZWZANDGZUUBOEJBGGLPRILIQDOMBPHOVXBCXPODSRMTKCMFEJPJXMJYFFGITQDYGHIQ");
    msg.man_type = 25160U;
    msg.man_eta = -1966134599;
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
    msg.setTimeStamp(0.3028817345982616);
    msg.setSource(8660U);
    msg.setSourceEntity(70U);
    msg.setDestination(40923U);
    msg.setDestinationEntity(55U);
    msg.name.assign("DKOMXTYCTTTRLOEWDSENLBYTYOJEPJJFGLDFMZJNPOKFLSTWGAXULZAGIXXLNH");
    msg.value.assign("YWSGCKPZTHBWUAWRRUDRIOOGSUEVUYMPEGJLJNFLKPOIOBYTEIUUOXZKJNWCBNMILFEFDHOPQJNLNCMZBTYTDEVYDKHSFICMLJDXXBFQCFDIPJGGHTVLTQCWOAOYJRVNHZIUMNRUSDZWQMULCZQBTJLSAACAIHPNHHYGAKZKVXCZSMJGZAFXEG");
    msg.type = 202U;
    msg.access = 202U;

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
    msg.setTimeStamp(0.22358885565873654);
    msg.setSource(36824U);
    msg.setSourceEntity(113U);
    msg.setDestination(38927U);
    msg.setDestinationEntity(15U);
    msg.name.assign("JJVEHSGOHPKU");
    msg.value.assign("IIIZTUPHXMUKCEYKGIUOWHVHJFZZGBBZYWAYRWCNTCYVXSKOSUFNXVEQEJTPPWHYDJNXBEGQMMSMCNMSARFBFUIRXLJRBMXUNHTZUFLYGEBKXMELYJTLFAPTCIBYOQALIASFPEFOOJ");
    msg.type = 232U;
    msg.access = 56U;

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
    msg.setTimeStamp(0.29680530031789876);
    msg.setSource(14229U);
    msg.setSourceEntity(42U);
    msg.setDestination(58631U);
    msg.setDestinationEntity(156U);
    msg.name.assign("GVEWIRDOOHBDLQZSFYTQOCNDSCGQXMJBPOYRDNJ");
    msg.value.assign("IXZFMGTAWLUJKOWJOGVDCTWAZEHHBNOATEXRVPBDWQZDCRPHKMLKURHGVMFUUQBIQLRZPOEQBIWJSILJOAVVIMAIYWFG");
    msg.type = 228U;
    msg.access = 240U;

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
    msg.setTimeStamp(0.5554899469092585);
    msg.setSource(44930U);
    msg.setSourceEntity(175U);
    msg.setDestination(23821U);
    msg.setDestinationEntity(165U);
    msg.cmd = 44U;
    msg.op = 242U;
    msg.plan_id.assign("QJPQZVEWVKBKRMGBZTOMIIFTVJZUYQNAHSYXPRMVWQPLKPIKSVXSDLXDXBDFTREUEUGTDOBTDWLMJGHTAUPMGUQAPEFAUZJNNOGXNFYNSVULYOSARKWHALFFCLMCWFJYCKHIVCEASTOWTIJBSCIREXZQNDVYCGROYWJWZ");
    msg.params.assign("IUYATBHSPDQUFLYCGDRVHEKTGQWYBCOMGVRRWLXZLSCADBRCWQQHIKKPTYVBSBLPFDLVSMHSBIJBAHZFNNKNDEMJJOOEQUCXRJIOKMZHFGOILXSWBRJTMVARVZWSRFWNDPZU");

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
    msg.setTimeStamp(0.48238045274065167);
    msg.setSource(57484U);
    msg.setSourceEntity(80U);
    msg.setDestination(9158U);
    msg.setDestinationEntity(71U);
    msg.cmd = 21U;
    msg.op = 127U;
    msg.plan_id.assign("YVFGZPSVPPW");
    msg.params.assign("AWDVHOOOHCRIQXZTYNDINMLZBQZJGK");

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
    msg.setTimeStamp(0.7711521122813051);
    msg.setSource(62082U);
    msg.setSourceEntity(211U);
    msg.setDestination(57415U);
    msg.setDestinationEntity(31U);
    msg.cmd = 252U;
    msg.op = 49U;
    msg.plan_id.assign("BUKMWFKPTSTGRCLKCJVZXNDISLDBLXFLENURYABIIMQLMMYEOLTYEJROUJQOQDAZMAGTMBPPQRDKHVKNOIULCYRVAGSSAAIYCEGVVKOVTNOVBWZBFRDZSSSMPEIQHJICATODMEXUKJSIFHGEWGOFCZZPDNWYWXFKHZXFRJNO");
    msg.params.assign("BBSPFUITHNPHWKKJHVUKQQRSTIXFVNCXABJZSKDIWOTB");

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
    msg.setTimeStamp(0.6001103643282535);
    msg.setSource(22970U);
    msg.setSourceEntity(133U);
    msg.setDestination(1514U);
    msg.setDestinationEntity(247U);
    msg.group_name.assign("WCZQAWJGPXAUVACDYCDWAQYBVOSOYPAPISROKIYHSVMNMTOXITPEBECJXHWDZFJVYRZBAERBPEXKALPBJETCNFGSZJTXRVLFXBYEIHVNFKVMSHXG");
    msg.op = 209U;
    msg.lat = 0.9767160747070547;
    msg.lon = 0.4258197838225861;
    msg.height = 0.8664931077308754;
    msg.x = 0.07635630424911488;
    msg.y = 0.6691230458502011;
    msg.z = 0.5049512714402394;
    msg.phi = 0.2683472688350653;
    msg.theta = 0.8640365621423464;
    msg.psi = 0.3294095630215643;
    msg.vx = 0.13547186537222022;
    msg.vy = 0.45904805679281147;
    msg.vz = 0.20488052522505362;
    msg.p = 0.695229439587613;
    msg.q = 0.6460918035717507;
    msg.r = 0.6180267175878922;
    msg.svx = 0.5118648809325695;
    msg.svy = 0.929342557755606;
    msg.svz = 0.5244897347707466;

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
    msg.setTimeStamp(0.7224793226104449);
    msg.setSource(29338U);
    msg.setSourceEntity(51U);
    msg.setDestination(53096U);
    msg.setDestinationEntity(234U);
    msg.group_name.assign("HNGKNBTPFAYKSGQMABWQPMVHQKYFBGSRRKGLEQZPPXRWJVQPEPZJWMEJUOCCZXHGVLHUMGZDYDEZATNACWSILYYBSLFLJFNECZTIHXRBXEQTDAQTXVCLAIWOLKEDARCMWNJPNDYTJHRCIBYFHGXGWOFJQICZFATVISDWXERUOUCGOMUOUBPQBR");
    msg.op = 109U;
    msg.lat = 0.22416390846224543;
    msg.lon = 0.2786544152079432;
    msg.height = 0.45098433718820086;
    msg.x = 0.6721794992392733;
    msg.y = 0.32608510054108153;
    msg.z = 0.7059587159508227;
    msg.phi = 0.1176334604638517;
    msg.theta = 0.17307324118922318;
    msg.psi = 0.6433689370869254;
    msg.vx = 0.5135596408453238;
    msg.vy = 0.4150802166237334;
    msg.vz = 0.6272520037008193;
    msg.p = 0.7922406067231124;
    msg.q = 0.5328386545326654;
    msg.r = 0.8363228840151563;
    msg.svx = 0.16538709357988512;
    msg.svy = 0.06941375449112286;
    msg.svz = 0.03243973830265234;

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
    msg.setTimeStamp(0.45145467459207234);
    msg.setSource(41405U);
    msg.setSourceEntity(189U);
    msg.setDestination(6456U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("TQCYOWYVPNFLRUVAMQPQPTBMIFJMHFXKSZMSGDUFMLYXTEOZLJWZAYRUUIVCYZOHISOSPNBKPHFVYMQYWWBQWVFPCLAIMXKBDUMOHPHSGJJBBTRDOOBZZRGNDJUIUSSLQSVFQTHEXLWQSENIWXCVKXYKWXGGDTORAGLDTZHUELCEWOXLXKCGTCIJZJACPNEAOGIBCQFJNFAVRMNLNHJTHE");
    msg.op = 132U;
    msg.lat = 0.21757982956219335;
    msg.lon = 0.17970430426377526;
    msg.height = 0.7587621698448472;
    msg.x = 0.6625378347983961;
    msg.y = 0.5480776373948755;
    msg.z = 0.754997411371712;
    msg.phi = 0.8744627457624251;
    msg.theta = 0.6588432755568279;
    msg.psi = 0.640711766019234;
    msg.vx = 0.7033091481612359;
    msg.vy = 0.4595022620081306;
    msg.vz = 0.0817088445005737;
    msg.p = 0.6186124779544632;
    msg.q = 0.9630146003843125;
    msg.r = 0.19979520995902433;
    msg.svx = 0.12017943342437087;
    msg.svy = 0.0724439294128133;
    msg.svz = 0.5946346387441315;

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
    msg.setTimeStamp(0.7097501437309207);
    msg.setSource(47721U);
    msg.setSourceEntity(190U);
    msg.setDestination(53580U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("OUECYDZZGGREVJIPHZGEBDOCNDZPGTWUFJDUVHFNJSDWBXGEQIXOIEPBPTQEXAAXLKARWOHTVWCZBARDQMTWVYGCLCKUIMHLZFXMZWCMQODBYMEQSHXZHLNURSILPJVYVOZNJFNKDCVPLKNIWUUVKHNOKBRFHBYUBYBOQKIGPMRNCWAAFTWSYYJIEJMWKRLLFVYFQJKQIUAKXAJNT");
    msg.type = 61U;
    msg.properties = 143U;
    msg.durations.assign("CSXFJYTLVRCKBDSZMPUETZHBDXAZAVHNEYCJMZXGEMFLKPR");
    msg.distances.assign("NRGTBACCIQDZOJJYGKVQJPPOMLGYGSZDSFHJWRGVQOZUTYMBVOTUGBKOCQLRSRWEHYBDWAYMVBIKRXKN");
    msg.actions.assign("ALQGKKAZLMAGDGXQVZZTBKKVLUJUROZEQYKLZDMSIBJMMIPMVSCDWHTTMOVVIUXXNDVYHGAMXRCEJNJHBTHWXSKGVCCKMYUINYRQVPZULTPPSACAJAHJDYCPKUTWLUEGENWJFJSTAYUNQDLHFIZHGCQOEPOSEHYILOZUCFDPIXZFTMXWXBRBEVBSFOTOQOETJXRNKRIXWPRLCGESUGNYBFBQKFDW");
    msg.fuel.assign("SCHIIMLCMIIFYRNJKNYBZQHNMYNZCDGMRFXZZXTNGKKGHWXFUTPSREEOGXEKOLJDVFLRYKUDJCYTBLINUBPCXWVCJGHJBZGASHVQNKDIPQYZQBOZHFDRHEWJCWYFUAOBJUAOODMPCXLEMCEZFNBWARSTVUWYGMFADESUVITPCHVWMMJMTKKOPRSWOSDFXYGAIKXZKIDTUWBPWEBSXPBFAVTGRGULULOJQLENAOTQQYPZLQRRVVQSEAIHAXQSDT");

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
    msg.setTimeStamp(0.1679671564053583);
    msg.setSource(971U);
    msg.setSourceEntity(110U);
    msg.setDestination(48294U);
    msg.setDestinationEntity(118U);
    msg.plan_id.assign("KDFDXUCYUXCWBVQZJGBWUEPCSKJJROONENJKRBAGOTABPYMOKUKWPSCRUPZATDAEGVHLBQVAKDVMEADSBKLEDHMQXPCNXSWJTNFCAHUOEPKHXOYYYUNJYITCZXKGQHSRQPGZRIIDLKLMHVSAZXESWIIES");
    msg.type = 29U;
    msg.properties = 230U;
    msg.durations.assign("JAOQKBMTVWGEKRVNWJCUDAGWLCUNQRVHBFOJRXSWPOPFZKXPYGQDXTRWVODMRVYHSHUAEQTFRKANUENRYMXDGKLOPEEGXYUWWMLLIEHSJKGYNAXTUIRIFQRUPSDSBPQKANCHEXCBIOMPTKJWHBJAKLFNHNHYMRVUZUBWLIFOAGSYFQZZJODZQZNSTTIYLSCDLFOXMPCSDAZGYMKVSTQBIBJBVJFDIWAHVXTGIBXEHCZQLECMIPTLCCZZPJ");
    msg.distances.assign("UJOOJMRGKWKTLWQDGEHCJOGCSPTANAUZLENUEYXVDLTYHNMHSJTUGWYCAIRTRQIWKNGMSZKYRSNSBZJOCOIIEGKFWJKOBZCFOXGSHTVVFBVSAEAVBHSMLMQQFZURQQTW");
    msg.actions.assign("CDKHCADMLKOZUBHSAFGAVLCNPRNRQONNWPJYIPOTIVFZWZUXPGDQQSVKTUGMQMBPMSYOPWOUXWDMBMCTAFOUXPQALDNVGZSFJJRMQNEZRNRQVBKLTHQWN");
    msg.fuel.assign("JHYKWTAYNDUZHMSDTVXDTVPWEOLTFSR");

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
    msg.setTimeStamp(0.6725728958182003);
    msg.setSource(42709U);
    msg.setSourceEntity(146U);
    msg.setDestination(40692U);
    msg.setDestinationEntity(1U);
    msg.plan_id.assign("HNNPQFRZEDJEWELZZKZYBFOJJNRCOYDCKNKWXLTRIEIDFGCKIUHVCMKDRYLWTUKJNDKXUWVHFRATEXMNEHLGZWQGGRYZEYQRGFGQXIYNJIAOGKCFQJTMBMGJAEUSSXTPWSCVJOVMTYXBPCBAMPOAWLIAVBVYRQPRUNUUGEOPBQZABXOISSWXSZWET");
    msg.type = 13U;
    msg.properties = 193U;
    msg.durations.assign("GNIWJQPEVNPWOSQBXXFTZLERWSSRFTBXBJAFXRMWMKXJTQGVLXESBAPE");
    msg.distances.assign("VXXTLBEWJXRIVDMORATFOWJZDXFVMXTHCLPFBYBESLPQJRKWCYAMDEGDIOGVCYQKHUIPLHSJUTWRZLASDMUGONJEXXIOAKQHNGQHRPINQZADDZUWGSNNWHLCJFYIBJUXAJRKMYUYZCEARSGYITZZWCEZXHBF");
    msg.actions.assign("PWXZCRJIGKAFKVSDISIWYCENAMXRFLPVDPYBEXJJZLZUYPQJYCGHHLGQKLWYSHTYNLITBHQLPFMZBVNDDOUFBTUGEQDLVOCQGNVKGHKGHMGYSOWCVXZPNIFASIWYQMBI");
    msg.fuel.assign("ZJONAUZTQHEKKLNUOUYIGEMGRPUQTKZIOHAXRJQPRALFBMCMYFSBPGNCZODRFJLIOJKFIJQUVFHFHDQWEJYIBGFIEGSMPXTQCXQFDZIHTDHAEVXGDLCLBYSVTPOPLNVNUWCPUXFXKOKEMBSMYDVAQGSTZZGZHYMURWPFSWOMCDVAHZWLVXQWWBENBIDYZCDRTTNSHCWAAWKYQUARX");

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
    msg.setTimeStamp(0.7129079234645672);
    msg.setSource(45410U);
    msg.setSourceEntity(151U);
    msg.setDestination(28989U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.5440434503716517;
    msg.lon = 0.14350416959481926;
    msg.depth = 0.19701172935581635;
    msg.roll = 0.23761031675356215;
    msg.pitch = 0.3557406724393942;
    msg.yaw = 0.22441835598545323;
    msg.rcp_time = 0.35156685164571777;
    msg.sid.assign("GUKOIXZUSLTVJBDRAIKCRWFXURLZQRDFJGSWKPLUQHQTBOGXCNAVJPAFHAJJBKDBOMELPPGWBIVHCMQNZYHAXMHHJGVHLZDKNFODNDVLFJQTESZECYWGETLSPVEBWCNKFMUBXNMAWWXDLQPKFWBQAACINDHWKZXIZMTTEVVZMOMLTETACSIAKOOPSUEUIMURBOBCYOYVIQSGEKWCYDCQPPPRF");
    msg.s_type = 168U;

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
    msg.setTimeStamp(0.4535514215180855);
    msg.setSource(55961U);
    msg.setSourceEntity(42U);
    msg.setDestination(37071U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.7763542096636558;
    msg.lon = 0.22890406609047187;
    msg.depth = 0.8106857136646727;
    msg.roll = 0.14500840541528126;
    msg.pitch = 0.6525327231573953;
    msg.yaw = 0.9008329267310854;
    msg.rcp_time = 0.1517107759322649;
    msg.sid.assign("KRTKFOIFLXMEPAOZPWRKKIYWZKUJITRPZSTPNGFCSMEJNXIBUFQWULBEBHDSAQCJEBHMWUVXJFBYOWLVPETAQRIDCAMNNWTCGAFHDVEABWULUYLYLUGGQURSQGOXBDGBXHEXVDHDNDUGLDZSMOWPHNJAZIGCMOJWAMIKHYRVBSFTROMTY");
    msg.s_type = 0U;

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
    msg.setTimeStamp(0.9847321818937729);
    msg.setSource(20218U);
    msg.setSourceEntity(66U);
    msg.setDestination(33504U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.49333391873105703;
    msg.lon = 0.22598352409272993;
    msg.depth = 0.1815652717055224;
    msg.roll = 0.6148233861276472;
    msg.pitch = 0.8196943987933892;
    msg.yaw = 0.4432977882396648;
    msg.rcp_time = 0.13531211638566543;
    msg.sid.assign("EKAGARMOJUQFYBCOFQKVLWRBIKPBHTNGNDQRDNVIPCJTTMVFIMMXZCJFUWHWLNHWGYDFGCMBQOZSXKPSLOPJTCCTNPAIVAKYFLOXVLTCXZSIBYJAHVZFYIEXMJHPADHBWOMZURDGBFPQUODOGXEPALLRYLRVTMKXLEEQOPWUIQKJNZWGQPHSBISWZUNJDQANBFVR");
    msg.s_type = 250U;

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
    msg.setTimeStamp(0.8117619626836993);
    msg.setSource(14295U);
    msg.setSourceEntity(90U);
    msg.setDestination(62577U);
    msg.setDestinationEntity(236U);
    msg.id.assign("SGYJADZDDONCGQACXIMGCRFKEFSMKLPKAUEWFJONP");
    msg.sensor_class.assign("DQLZRQAZSSLGGPOHHDUPNWKTCNLYJGTQWPERCYSOXQNDOKABNHIJBQMHQAFWHTJTFVEODYCMXFIXGWZZTJWXHIUIUCIVVTBML");
    msg.lat = 0.7387139290228076;
    msg.lon = 0.5364207618070986;
    msg.alt = 0.850165033004118;
    msg.heading = 0.3702856716426245;
    msg.data.assign("ZCDYWJPJRHDMPEVFHKCCGMGXX");

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
    msg.setTimeStamp(0.5853971031569143);
    msg.setSource(53957U);
    msg.setSourceEntity(208U);
    msg.setDestination(63379U);
    msg.setDestinationEntity(5U);
    msg.id.assign("GABZDDKLOGSFBQXUEBRYMFJNAOKDYLKCDKFMWPEUXXYTZLPODJXKIGIUGHNNVUHMLYBRDNYP");
    msg.sensor_class.assign("IRNDXIUMIVMNVGXPSDHUVTHSFNTKQMWCIAELNKGLCPOMRHKTYQEEUBONZFHRUBZQVSHGWBLQCZXROTJOXHNERGMUPQCKPZCJWSWSMHZYPJTMLJDQEGFFTKYXZDLIAGKYEDFCIMCWXHXVRMGFZRDUDBTJM");
    msg.lat = 0.5840780012429571;
    msg.lon = 0.21035020010084682;
    msg.alt = 0.061181493936461995;
    msg.heading = 0.7209486896039974;
    msg.data.assign("NITLZALISEPLDVPFGWEYNTQAXZHKTOPSPUQZXNZVZLJKMIMYWUGOGRUMBJVOIHYKIBHUZSSNJGAROYETJWJXGFHCEDADRZHSFWCYLRKCPYUFVAFWTVQHPLPKGEMBASCESBJYIVCQURPPFBTXCNDOQKVESKQQXXAZXSBNRLWBTHJYAOQIM");

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
    msg.setTimeStamp(0.47719711093240724);
    msg.setSource(9746U);
    msg.setSourceEntity(47U);
    msg.setDestination(11186U);
    msg.setDestinationEntity(66U);
    msg.id.assign("BWZKNMVFADJNJVIWNVWNYDQBIMELOSHRAPZDTTZHRJJKJOVEWFBIGYXVEZRFOVZGERLJKFSIKLFCIUXLCTCARZ");
    msg.sensor_class.assign("CVBVWEWPRJLLOTKXIVMUFVXBTBPSFKYGJNMIQHLGLSQLALBOQOJNMYVIEWHIZMBARHGNCYUSQXUVKSTAGCKNXYRIIKAYLBEJAVTOPNULJGMNCDHZECAOOU");
    msg.lat = 0.7832376471490304;
    msg.lon = 0.17486334881012733;
    msg.alt = 0.5425840860815847;
    msg.heading = 0.22813640587890005;
    msg.data.assign("BYJXGQMCJEJNFQLPWUFEUMPZRHFOSZKMYIMKAFJCBGGKSFKXSQLZPRNTV");

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
    msg.setTimeStamp(0.389449958679721);
    msg.setSource(57908U);
    msg.setSourceEntity(161U);
    msg.setDestination(61865U);
    msg.setDestinationEntity(195U);
    msg.id.assign("WGHIEEFETDJRBJCGYRPDHQDRUTJJZWXFUGLJJACOZLSUZETVSKQUTEUNOHTKXERJUVYFMBKMWYRSHTSJRHNSXONFKDNIYVQPKKKYBPZHWFHAWRZXIUCCGVYIWIGWMDFXUZTABADBAPZQDVNSGZQICMLDIINYXHEOQNPGPZMONQYOCWRQKEXAALZRCPJMOSKHVQXFQBMFDOKL");

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
    msg.setTimeStamp(0.3741269830037287);
    msg.setSource(3331U);
    msg.setSourceEntity(214U);
    msg.setDestination(64718U);
    msg.setDestinationEntity(208U);
    msg.id.assign("HXOWURVCGVMRQASFBLCOAKOUAUETWTNVDLYNHEJEBOONKSJCLKWPGWKLGMTMPWOASPBXXKUIIHVGCJSGCBWMIYQAQWIROQAIONDPJEITGTNBDHLEXXZTCTBPYWELZOHZCQMDWMTMASRINPIRVZJYBDLSWRDNGRCTIVSFESPDDCHTFYUKXUZYMRDJFYGUSYAVYJGZDFVAUFMPFUHKMUGIQZRZZFLXHXQSJKJXJKNPXVQQHQBE");

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
    msg.setTimeStamp(0.9807710360190324);
    msg.setSource(44290U);
    msg.setSourceEntity(176U);
    msg.setDestination(29057U);
    msg.setDestinationEntity(141U);
    msg.id.assign("SPSRKVFTZNNUJWHMXXJCDUMYUHBMRGYDWEEKKPIIBOCAFPHOJULZOHUFBYBITGFECRCTPPLQQLCMGTZIHESXESONRJBDYZZNCLVQVSHBMQVREAOBPQNAYZPKWXLANUYTPTRBAXYVCIMUSDJKWWVSFJOWJAVWQZXVLHZRFOXT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IQNLJAEGLVOOTTEECXZLFGKSFDKRLESPGPUYFBZRQPXBXBHHQFCPXLAVYSUUEQVDZTTUHWNIBFEORMNGMUCIHWDLENNMJIIJCLPZDRFQLDXMPHYVKSMYWRYHZTBPSOAYJKBRMCGCNDBFSUOIVWABWMHZVPCPOHJRUUYITCIRGXHKGUKWOPREXEYSVZQVANKYM");
    tmp_msg_0.feature_type = 243U;
    tmp_msg_0.rgb_red = 126U;
    tmp_msg_0.rgb_green = 116U;
    tmp_msg_0.rgb_blue = 175U;
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
    msg.setTimeStamp(0.2558665056056163);
    msg.setSource(30497U);
    msg.setSourceEntity(239U);
    msg.setDestination(11344U);
    msg.setDestinationEntity(62U);
    msg.id.assign("TBICLBWHVHYUGXWZXJLCWISWSBXEZYRNTLMAXOWJRVTHGIJSJWDOYWMVPYJRLMBFBHMVPCOTPXLRRGSOBZDSOKOBDQLVFUZVCQAFNHLFTMOSRFKVZPQTPAGBMWJHDMGGOBECCQPKCPNDQEDTHAESVELLFMGKRYPLDYTIIXCMUQUUEEQIEGFSKAINNPCJVUUQPTZYZ");
    msg.feature_type = 37U;
    msg.rgb_red = 176U;
    msg.rgb_green = 67U;
    msg.rgb_blue = 178U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.00416366942517532;
    tmp_msg_0.lon = 0.4950374195840619;
    tmp_msg_0.alt = 0.6647825867384993;
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
    msg.setTimeStamp(0.9972010014045725);
    msg.setSource(29223U);
    msg.setSourceEntity(70U);
    msg.setDestination(45536U);
    msg.setDestinationEntity(134U);
    msg.id.assign("EEZSVZVGRQLAOETJMMJNXHLDUJNSPRZWCUTEVPTBRLGRWCTBTWAXMOALMYURCHHXCKFSKFAXEBPVJAOTCEGU");
    msg.feature_type = 113U;
    msg.rgb_red = 144U;
    msg.rgb_green = 223U;
    msg.rgb_blue = 161U;

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
    msg.setTimeStamp(0.7409435918904805);
    msg.setSource(26213U);
    msg.setSourceEntity(167U);
    msg.setDestination(31476U);
    msg.setDestinationEntity(170U);
    msg.id.assign("BUMJTVRCCQKVVQORAZOYATKLJVPSMYAEUPDNWYFFTXEAMERGAKVSNNBGZKWBVOHAZGIRENWIDEXOXBKRHMTLCWVUIJFBLWENPTMBFQDJNNZFMQTPAGIWRJPKDFSCIDVCXRBCWAZDFNOTSXYKFGPGRNYISZWRJZDSWCKRHHCAHIXYXJYJCPPDVJLBMSIJGZZELLUQHOQUWSBZD");
    msg.feature_type = 244U;
    msg.rgb_red = 125U;
    msg.rgb_green = 33U;
    msg.rgb_blue = 70U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.2043266918763913;
    tmp_msg_0.lon = 0.2555624294787371;
    tmp_msg_0.alt = 0.674339761500104;
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
    msg.setTimeStamp(0.20517413259369166);
    msg.setSource(64037U);
    msg.setSourceEntity(55U);
    msg.setDestination(24289U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.10592850568904977;
    msg.lon = 0.3565264483504209;
    msg.alt = 0.37841915658637015;

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
    msg.setTimeStamp(0.7173664399063975);
    msg.setSource(16572U);
    msg.setSourceEntity(93U);
    msg.setDestination(28995U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.6802772323467692;
    msg.lon = 0.3980691669586107;
    msg.alt = 0.017112974048159924;

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
    msg.setTimeStamp(0.3868218562483994);
    msg.setSource(45190U);
    msg.setSourceEntity(242U);
    msg.setDestination(43161U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.744513996157154;
    msg.lon = 0.7345776417429157;
    msg.alt = 0.613375312264562;

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
    msg.setTimeStamp(0.7144591307201181);
    msg.setSource(19873U);
    msg.setSourceEntity(185U);
    msg.setDestination(49488U);
    msg.setDestinationEntity(249U);
    msg.type = 10U;
    msg.id.assign("CVLSETIXBAPXHDIYRZELHOVRZQSBOVHTAVSHQJUAJETZMRLQGDKFOLLNQNYDRFUKKNZUSPQGOBSSHZJELKFVGYKJUMNEKEWLEMEIAHPYCYMHCIINVUVMDBBXLOBPQHMFYITRYAHFUZQTQPNUSEPIWVSABPGIFFWTYFCLAWTCTLWGAVZOXCXQYXJKWYXI");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8461978385139621;
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
    msg.setTimeStamp(0.19975750085031063);
    msg.setSource(41538U);
    msg.setSourceEntity(69U);
    msg.setDestination(51521U);
    msg.setDestinationEntity(117U);
    msg.type = 228U;
    msg.id.assign("YPCXGMNPOPDZSWPDJVAGXEIHMGEDUIGLDQCCOHWTFYDFMGVXIFAKNOQBITKDUVHEYIZVWVETRCKJLKPIREXDMJVQFLIZKGBYRYNMULTTMOZCKZTWXKVPTRWWUBFUIODUZWZHIFVBLLRUKRPBBMKSGXZNJENHRCAPESUAJDGGCYXSDVATHHBQHANOQFKWJZSWJACNYQNSTBOYSROQSFLSERFQAJAAZFOMXLPHXLPRXEHYNOCCJVIUGBULMTQY");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("UNJMEXGUJKYGTWKQRCZRVHUDRRVKADCITSOZDWQNTTOSIAEBHTOLOLUVLOIWECDBAAYPZQFMURZQEJYOAOJBTCHEOQJRJWEADILGCSYWXFMSSLXGMNZDMFWSWYPBHROVXYKZYVVNXXRJPPNSSDYAHBCDPTIJCNMBKFCHSAAVPDGFMBYIDJKUGNFAEKTKIMLBNZICYPTX");
    tmp_msg_0.value = 167U;
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
    msg.setTimeStamp(0.8491052272036301);
    msg.setSource(55485U);
    msg.setSourceEntity(213U);
    msg.setDestination(7533U);
    msg.setDestinationEntity(105U);
    msg.type = 206U;
    msg.id.assign("IQUPZYNYHZBXHPGIRAIPBJACUVWMVRACJWSZOEZKFDXCLANXMESQTSXNMOBPZMGFRIDFPKHYJFHWGRXZSRJCTMBGQXYUDADCXECSALPTHRMBO");
    IMC::SoiState tmp_msg_0;
    tmp_msg_0.state = 250U;
    tmp_msg_0.plan_id = 23190U;
    tmp_msg_0.wpt_id = 213U;
    tmp_msg_0.settings_chk = 40701U;
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
    msg.setTimeStamp(0.8838652592815491);
    msg.setSource(62149U);
    msg.setSourceEntity(46U);
    msg.setDestination(32076U);
    msg.setDestinationEntity(93U);
    msg.localname.assign("SJXIWVCCTPWLLSPOBOLOKYZMGCPEL");

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
    msg.setTimeStamp(0.25137338880139626);
    msg.setSource(59231U);
    msg.setSourceEntity(166U);
    msg.setDestination(22927U);
    msg.setDestinationEntity(154U);
    msg.localname.assign("VVTXQJZIUVWAZVJUMFWCKTONTKKQASJLNYPVJQEUEODP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UVWZARXTMNRDDGXMZZCFSCFEUOMAJEXBCZPSRNFKNZYALWJRTNFXOAHEQOSTPHPIKPPNYZVO");
    tmp_msg_0.sys_type = 119U;
    tmp_msg_0.owner = 60992U;
    tmp_msg_0.lat = 0.32369644122305397;
    tmp_msg_0.lon = 0.39595684028747935;
    tmp_msg_0.height = 0.03381379123291295;
    tmp_msg_0.services.assign("MIKQFMNTPCOHQAKPDINIOYTTZUWNOGLGHKUWXFEUIFSNPZFBFWGYJAKEWURCZHGANJQYJDGKIVZPBJXFSEBMYRGZHIYBMQAUXIJEHAC");
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
    msg.setTimeStamp(0.4431349325950673);
    msg.setSource(50710U);
    msg.setSourceEntity(78U);
    msg.setDestination(48351U);
    msg.setDestinationEntity(221U);
    msg.localname.assign("JSHAASTHQWCFDFLMDQNLTJTOLLGYAXMYOJZDULREDHSUFBAOZTGQYTSUQHVUSTWZIOPJWCEZVOFHNAWPUZBXOCHPDPWGNLHCZABGHUGVIDMWOGVQXEDFYXXWSQBVMKKAQMXNXPLSTBVJKFRRL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JIQBURWXCWNUNLQNJSMWSQIDXEKVMHVEGYMKFFJJFKCSOTDYGKWWJXMDSVYEMGXOTZFKKBORVNMAQJSFMGUHGSTWLLVPIURDZHHALGTLXBXFJNEIYBVNDYKZHERIGDRIENGWTAIIHLBMZPWUXSNDAKYILLCCEBPUZXBDFOZFHPOOZEPSQTCQYQEZFAYZUBPHLNQWY");
    tmp_msg_0.sys_type = 207U;
    tmp_msg_0.owner = 12922U;
    tmp_msg_0.lat = 0.4218214968657459;
    tmp_msg_0.lon = 0.33658893081836627;
    tmp_msg_0.height = 0.1260678856323536;
    tmp_msg_0.services.assign("FIXUPZROEVFRFPYNTFMNKGKKZIJCSJVJVAFBXQOEITGJYRCQUXNJQQLTKETPCUQJSWAVLMGTUUKHSWQALBDZBPUCDBVVDXKLHGBVADSEYDMXMYHJNCIMZILDEWBCZDGDRMADAKACSPQNWXZLQBGUYUNHLPFWR");
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
    msg.setTimeStamp(0.9905064552586874);
    msg.setSource(8129U);
    msg.setSourceEntity(85U);
    msg.setDestination(14058U);
    msg.setDestinationEntity(244U);
    msg.timeline.assign("JBFZOQLMILSPPTUEQGTNIQVSVDWCBFUZUZTUDNJHZNCLGJFGPEYGNOXPODVOEXADEQLOWDSQDKMCTNBBPTIO");
    msg.predicate.assign("PBKQZFJDLKVHKSYAPWDGQFLUHNGRLRGQWNNWVOCORVNTDVVGOEYPIGXAAIBFICMMTZFFRCVMEPVJOOYEXPROOMBJUCMUHKLXAQTBRFMPBZDBTJDHIBOHIRTLU");
    msg.attributes.assign("ADTNMCWAWARELKANJWIMLRQTMYJNXCULPTURKGWMJNQPSDFRFYTQRPGLTRBZQUFXNZ");

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
    msg.setTimeStamp(0.8486785044171118);
    msg.setSource(50075U);
    msg.setSourceEntity(9U);
    msg.setDestination(9785U);
    msg.setDestinationEntity(247U);
    msg.timeline.assign("VUGLOTIHXVUXTBYXTEAHZXYJPTZKBVFASETNDFROHJDEZXPQUNNFDGCCJEWGFWNXXSOUEAVLNQFIKLQRKMRHROYZPDLZK");
    msg.predicate.assign("GPLQJFRUOBUVVFRXPORYSJZUBRYLLZIHATWEBMCZUODLIZXXDHZFBYAJMKFNGUYDTRHWTNCBEEKPFDDYEDLECVMJYIRSNPDJZWAFDFNNJHXAGISAKVIBTOOVHSUEIVCGHQJSXTNHBXPYNIHZCAMWQGGOSHCNPRRSMTZCPIUVUMVMFQNRCCNCDEGLEYGGWPQKMLLZZK");
    msg.attributes.assign("NNORUKGMMMHLLQOUXGLOZXACBRAJIEIETWFHPXVZJRAZ");

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
    msg.setTimeStamp(0.6192339788219622);
    msg.setSource(2329U);
    msg.setSourceEntity(44U);
    msg.setDestination(4864U);
    msg.setDestinationEntity(169U);
    msg.timeline.assign("KAEHYORQDRZMBEUHDVXOBTXPOHBWTGULOLQDDSEETFKJDDVZBQULVQHCKXPYCLFOZOLASMWEDYRWNMYWZCMNIIJHIYVBKPBMQJXITCGRSACVQIKRWPMLGAGDZNIFAGOEHGOSPUCKULUTMQFHGNAPGWYFEUCPFEROYUVPZPXCRDSMYWCEKLAVLGKQVTYVPHXTJZJD");
    msg.predicate.assign("SRBTJKYXFTZMWAGD");
    msg.attributes.assign("BLEKCSDTYZROZWZIRUENULZIBTRFAQVVXFJHNQAEQMRHIYXMKCXBYJNJGPXUMYOSFVITAHHMSEXENJQXRIMWDEVSOSDKSKZMBPGQLDMNPWDDNLTBVFFWGQNUOIRHITKYAUGGIGNSIAQJWQGYACE");

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
    msg.setTimeStamp(0.7598269852548863);
    msg.setSource(8195U);
    msg.setSourceEntity(212U);
    msg.setDestination(6670U);
    msg.setDestinationEntity(98U);
    msg.command = 128U;
    msg.goal_id.assign("NIAZYNUWDBXHDPIIGNFMBIUEKODREMTBIMNFPQYXKUXLZTWJSXCXGDRHVOFOAWDMHXROWAKBLVYSVCKJPEQELHVARSKBSBTVFOHUJURJQWEGJGCQFKZEAASGODBLDNEBYVFUWOEAFYHLGMFMCIFNBZFJNWTKGDIGTPYVTOXUTPTRWZOHIOIIUYRCWRXHNLHZZQKCMSVGJPMKZCJPAUXNEDVQCBRYGJLWQPZZRHQ");
    msg.goal_xml.assign("AUIBEXVCEUMDEDTXLNBWQVNEAOCLMACTZAILWVSNPUPLNFWLZLW");

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
    msg.setTimeStamp(0.30543188292838663);
    msg.setSource(5664U);
    msg.setSourceEntity(13U);
    msg.setDestination(21515U);
    msg.setDestinationEntity(66U);
    msg.command = 2U;
    msg.goal_id.assign("ORGAVDUDAOEQYFFDNATPNLPTIBHBCZISVKLOXMXHZECROJEZIGBNNGEDCSZEOCJEZFSMJCZSFUKFLJYWGTKBGHJETRLOPAXXDPZOVTIMCNXZLWRSANAQDKBHGHXXAFPXRURWNROWTICGVASBMLPMBIHXSGCSLPWLYNBYJWEEKAYVQHKKRFGNOMXPBCJJVKWOQSJYDUKUMVDJYVQDIYQMZQFPYQBZYICWKQWTLIRUTN");
    msg.goal_xml.assign("HQJBXSTCSXGJDCRKRYAZMVKPMYXAUJFDNRYFLYTJJNZXBDVSETQSTRGTVP");

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
    msg.setTimeStamp(0.9290183408561816);
    msg.setSource(61894U);
    msg.setSourceEntity(167U);
    msg.setDestination(22811U);
    msg.setDestinationEntity(250U);
    msg.command = 130U;
    msg.goal_id.assign("VLQSGIOBMZFTADKNCWFDRVNUK");
    msg.goal_xml.assign("IPQVKIEWGCPDPHDHWYTTRQRNJCEQLMTDFSJFFUCGVTWFGKEYJZQTBZLIWOGVRURWUGAXGXZTCCYUKQPVIZNXACBZMMNIPZHHSUMPKXRCDJYEOCDWNWFRBSFASLADRKKJNHPLYYJGKMTDWESYUAXHNJLOTMHAOVJKJZLXVOZDXFLNBENOIYDMHUTRBYWKOQHABRBKMFOLJHIIASBZAYMUNPGARPSLGXB");

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
    msg.setTimeStamp(0.41636284488961095);
    msg.setSource(34090U);
    msg.setSourceEntity(227U);
    msg.setDestination(314U);
    msg.setDestinationEntity(172U);
    msg.op = 84U;
    msg.goal_id.assign("COAUYTAXMLKCTVDOJHDKIVVRYLPCPYZCIFIZHNUNTCYKTDOLFYHELLIAIOGKNQOUAZEHTZMHYQNHRBFAMULGGAGSOBPPBDEYVJZOERDSZHKJCPJLFUQDJOCBGMFQEJXHIGZUTWSYJMVAVMSGDICVNBYNCXBFJWRZWTSQXFNTDDPRTPJMWSHLNZRBFYEOQUXSMEPABUNVAWWXKXKTMEXGRVERXEUZSXLPDKBQKSWLCIIJKFUBSIRQWGOQF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LBCNMCCYDXVILHCZQTKOLAYBQWPFVOUUODHAMTRIGEJVQFIITZIVMTSAKAFNZTGFNDRRHURVXBJDYEEXGRTZLULJVBTPTQTHPWMSSDXZUYPIKLMXCIACASYEXRANSAPGDSWGCEICCUROJKYNPGBAFWYJNQOKDQFONFGSONXWBDTKHEVEDPZEKYBNMFKHSOZREHBMLFKSYX");
    tmp_msg_0.predicate.assign("CZNGDUGRXIIQRLMMPJHCYNZWBUSNYIEKRUKPUYZIIGERBMOWKHFFWCFMYLTEWOKZNCEJYSOZSWTQMHGBGOAPLDAVQXTEDEKODVBMUSZFAPRIFEVICKAZWQPOLENKNHPDWRCMM");
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
    msg.setTimeStamp(0.01816974291682627);
    msg.setSource(17910U);
    msg.setSourceEntity(40U);
    msg.setDestination(57252U);
    msg.setDestinationEntity(210U);
    msg.op = 60U;
    msg.goal_id.assign("ALPYRKTWGUWDZQSLFYBFRGQWJURJFNPHSTOBBSZNZDJMUGLKWBTIUDKGGEHVXXYBDCJTOKLNFBYDHXUZCQRGCWOUMQJMFUGTFCIXEEKBUNINVTZMVHXDQWXSXVSUIOAA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FZQEASMRFTNFGMCITUVCBKGLCYZPUDIBLDLRNIHFJODCVSRAICNWMHQVOXAZQGULSNPXQPVDJOGDOBEEKSJSPZXAJCGBCMHDRUIHAWGLAWTAWRJXMHJKHIDWVGWENZJIETNYYTRHUNHQJDLWBVCTQDKNGOUXPJARIZB");
    tmp_msg_0.predicate.assign("QYUFLIHTDCFJZVFXRDXJQRHXGDJNXYLRACJSAQMDPNBGTBKSKSUPDKRTVKGUIGJGPIQMYUPZSIQOCTVTAKYMSIWVCMPGIDBLCBKLEAWGROAEBPWDTWXDXKQYGRDRMEXWREVLZQCOHCPHFHHSBYWZZONYOOWUEFNMINYWZLVCUFSELSNBAOKJOCAG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QJGUBIBJGOY");
    tmp_tmp_msg_0_0.attr_type = 80U;
    tmp_tmp_msg_0_0.min.assign("EHQAIMSHFGJJPMPEBQDYUOZKDAWYCVRHUAFPGATXEZXAUUZOTAGKFNGYFIBUZFCTESIITPVTFZNELTIRZJRPBMGTUPZXVWNUDCQNKHXNWBNXG");
    tmp_tmp_msg_0_0.max.assign("RMTCJYSVWTIPIJWMOFGFOPLDDMUBWBEVDJQGXGUBAHDZATCQQSOZZEEQLMGUJRSSJKMKVUHUCEYRPNIWHZXPKOLAPRITWJEFHKXNXMIZAWQKZGNPZFVMNHAFCJCCIH");
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
    msg.setTimeStamp(0.3840412382491958);
    msg.setSource(10305U);
    msg.setSourceEntity(66U);
    msg.setDestination(15036U);
    msg.setDestinationEntity(196U);
    msg.op = 238U;
    msg.goal_id.assign("QITUMWVVGFMODEXTPUKWQCKZWWBJRTSTSJLCYLPDAOOUTJDVZLOBNQWCORQGPWKXCCNKHSFPYPPPAYKXSZCYPDQEOREVZXEAMWJKTEGNVECYIDWHYZGAQFAQHJEEITFLURMOEVXBZHWY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KMBAMFZCKJMSAXNINWGPPLENRZCZOVWGQVYJAGDFCENFKHMVJGDBXXIWYAIUBRYUJMFMTVBCFURHTFW");
    tmp_msg_0.predicate.assign("ETNRLSJIJJNSPHYHRGOWNODHPRQRLKVMHCOQLYIRMWAYNCGDGFVTNVSYQAFGWZXFBXJFRTINGKOGZATSAULTRVBFQZTIRPEJPQPCUWYCXQKVPRM");
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
    msg.setTimeStamp(0.4775397448198816);
    msg.setSource(30917U);
    msg.setSourceEntity(244U);
    msg.setDestination(23390U);
    msg.setDestinationEntity(11U);
    msg.name.assign("FRTQUZZKNIKSANTIEMTQZEUNPXLHMAURNGXUPGZYNMTF");
    msg.attr_type = 140U;
    msg.min.assign("FKBAUYLKDDXITTEWXRZQZOJDVWLQWZWFWDGIOWNKPPDHZUZYRXCPSEHGNAEZXCM");
    msg.max.assign("BBHEKLHVZQDMATXFMYIQUOFTFYXSEOANFNFRLAVRHQRHJRPTKWODGPGSOGGMELJDLMQQTXSJTAJNSUBYUQFTZXVJMCKGCIWZTXEAHKIRYGBHUKKVPGPZWUI");

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
    msg.setTimeStamp(0.5978251718329475);
    msg.setSource(17328U);
    msg.setSourceEntity(33U);
    msg.setDestination(42391U);
    msg.setDestinationEntity(56U);
    msg.name.assign("GUGHDKVKNUNQXSRWLRKCCNRJRQPAOPZSZBOGYNSONSSMVYHWBXNJGGCOSIKGJTVBNVAELHDBDJLNWUOZNR");
    msg.attr_type = 221U;
    msg.min.assign("OTYOYWSTNBFPIDVKHYVRQFPNAAUTASMJMXJDAYUBSQQAGBBZKKPIKK");
    msg.max.assign("GPVCJLELRKBUKCIVNVUAVJYCKSCKRIDUGXIMQHOSDISABNXZYDXPXUHEGMZWRLMUNWNLBVEFQREFMLPSDELHFCXVBKZJSVTICDGBWFBICPABURBPAHWYQRWTHNHSUIKAQQZWTQGTYSGFEAMUYYQXPEMFBVTDKDEJBM");

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
    msg.setTimeStamp(0.7796532720101153);
    msg.setSource(3755U);
    msg.setSourceEntity(104U);
    msg.setDestination(12609U);
    msg.setDestinationEntity(156U);
    msg.name.assign("CAQWNCFKLRMVRKHUGPCNMIVPLKGFEUBMYOAKAWGNLENXDZFYFJZPZRJINXNDIPRSYYVBWOXEOCAOMWWTUQAIZBFOZHKXTSEQHRRXNOAHJQADPWAUPLQISQIZTBKXTBGVYBYJPFCDJIRKKMESKEVTQLHFFLVCLGLBRKPSCUUJUTDQTUGHFYGZPRXVRHZIMHWNJVGMIYADTLEWMJMOBHODTCZVDEDSWQBSPXGIDSSJEOEOQCS");
    msg.attr_type = 42U;
    msg.min.assign("PMHQNTMGSGUVCBAKISLXVYAFJETLNLCGXGSAJVINTBBBTXHYMOOORKCDWQUFGFWAW");
    msg.max.assign("WGJFOVQSMTSOLMJFRKZIIMAXENXMYMYACGWBJRUMXVUTGXQXQZPCYXSDPKPSDUDIGQKNKEXZHFHBLDAHNFVGIUCETVTCSCTEWUPDNUURKLHVDCJQBGVUHAKLLACGUBKJVTN");

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
    msg.setTimeStamp(0.5567681094495794);
    msg.setSource(56120U);
    msg.setSourceEntity(234U);
    msg.setDestination(12209U);
    msg.setDestinationEntity(211U);
    msg.timeline.assign("OBANDHMHYETHESTCGSKVIHNVEPXHHEKEMIPBNAGBUUDYFJUJIYXSPJLRDWUCIHDNOIESGEVZQXQEOAKHQKSKCBFPUFSVUZAWBRRTIODZMLZULMNLLOAWSFITCXWQRSBQJKTIMZNRVLADGJQLPVYFLQOMGFNUMJXQIGBJERWY");
    msg.predicate.assign("LJXXSPOUQPGQAMBIQFNECORZQRWKNLWKBKGKRUIHSTFSXLQCKYGZXMYTHCMFEZLOUREAUNGZ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ANIEAKQCDCEOLSYCBZPPDODUGSZXQXVABVFO");
    tmp_msg_0.attr_type = 52U;
    tmp_msg_0.min.assign("XQMYCFTIENEGFUBMZTQGLOIEDSYBTTHZXPSSCTKLXJEJQFERSFGH");
    tmp_msg_0.max.assign("ODHTPGYBMQPLCIKZPEJUJBQWGQLEGKPCNZZECBIKRNCWPNKOZPASGOSBVDOGQURHJEVGDPDDXHFLSJAEOMRXWTWIHSQDOTFCNRHMPOYGIFBATIBKSTXBPUJYGSXJXMMCKQNFUNFYJWSTWBVDRCKZGLLXRHVFULHJWL");
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
    msg.setTimeStamp(0.41690068509146017);
    msg.setSource(53723U);
    msg.setSourceEntity(84U);
    msg.setDestination(49047U);
    msg.setDestinationEntity(33U);
    msg.timeline.assign("ITKQOMHEPCVJJFUCMDOGX");
    msg.predicate.assign("TXBUIHOYRAXWSUTOJVCMFEMUIVWAQRXNAGSBVOQVDARSJWQTQJBATSGKEVQPCVJKATELRUFFKGUTQSWONELKGCYRMKZDDMYLNNMTKLZQCEHLZXRYFDKUBXZUDHRLMCBLBODGPSZIGGRHAJYYXCIZCOPZ");

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
    msg.setTimeStamp(0.6864945554417785);
    msg.setSource(15607U);
    msg.setSourceEntity(101U);
    msg.setDestination(1807U);
    msg.setDestinationEntity(175U);
    msg.timeline.assign("FSQHINJXZFLSMQLGNUZKHBODDMESIOVLNVUICAIMZBCHGLVEFJCRNZXXIDZYRGLTNMPFPRWQFYSUGSUNADQRMIJRCKKWFKYYTUBHEWZTWGVQVWPIBHTUYYGILQGAXZZSEYNHSCHXWNLPRENWUCZQUOWIIBACVXRJQXFPDUKMTPPDGJRBETBTSMEDOEJBHELPATCAFDVJONFVKJJRYVOKKXFJBQGDQALOHUWXPOYBVXORAMCALZT");
    msg.predicate.assign("LIKPLMYKGPJOFWSIQRJRATKQHWMRKKZXTWXIBUNYYUDZCXGEUDEUCGEZCXJVDSTTLVVPDZOOCSALDLBTVMTVFFSPUNRQVITWKQUBMFGSRRJNUFBHMCSVOYBOAOEYQPKSKUBHPZHVQJWILHCJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZSISPWPHCNFJECTLHXVMXLWTOOGYSISSHPYQGONHQXKFJCCTMQNTODKKQNLDSRBUEBIIXRRXRGGJJKDPQXHTCBBRNEBEIBVRRESJTUYZYZMHVZNQVLCEQIOMXYOTKZABWAOMJEFTUKAUDIXVZZZPDWMFYRADUJMNFJGDUGELLYXDVHLVLCAJYUWFVVMKLRYOIKRGXUGPATZNTQYHUMJOCSPGSWAFQBWDPHAFHGKSLBPZEAWFQWNUKCVWAFIN");
    tmp_msg_0.attr_type = 70U;
    tmp_msg_0.min.assign("TSZIWHKPMQFGZUUQFQDORYPWIJFOFHVMCOQJOWAMDRAQPN");
    tmp_msg_0.max.assign("CZYBUWJEWVCUDFVIKCKIMGJJYVVNIHQCEKLQLRXYOSHBKMNCDEQRTGPXIPTINQIQPACKAUGVGMPDVWZWOSJYZNQUNTOXQJQBNIQUTHSTEXARHFLHFSHBADSIFLDMTFOBSFDWRPFGBBWPGFLB");
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
    msg.setTimeStamp(0.6329716237267472);
    msg.setSource(23550U);
    msg.setSourceEntity(48U);
    msg.setDestination(3857U);
    msg.setDestinationEntity(229U);
    msg.reactor.assign("PTMABXAHMWVJIFBCFWGYMUJGTSQXUNUMFBALJELECTMTTYJWCQOXGGWEZAQDDZXIKQIXDBPRICERBULZSBPFKEHBEIEWSTZGSCOSFVRCTWPTNRNNFGAQOOYMEVVMHZIWUVLSPCNSKOOGAUFDJRLKKYRXGSDRGNMSXJGYVDMWBLUVNNVOZWCJPQBKAKRYXKZOROHNDKDHZHRWKZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BBMAHJCMXJMJNRKWBXHFOOWPUVMPDAUQPEKWDSANIIQJJBSCLSHTECKGVVTNUJOVSCTOZOTFXH");
    tmp_msg_0.predicate.assign("RJZHYLYXYKMLJQPJMAZSUHVKBMWDDNIQZOBUSSIJXLHIGDRUSXTYNEVRFHGSIDQFMPZVLBBVGGKQMIPDWURWRKNNXZMQJTGIBFEQMURSKEEVFIHUONPHLMAXGATTYGORSDTEOZZQWY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TUZXNMZVZQFMAEHVKXRVEIUWDKWRMIAMDMEXQAMFKHAZOWAIJWDGQPNOXYXHHUNKYCQBPFYSTHZHGTLPJSVIHLSIOBVUGLBWSJACVEPGDZCPYRCHACWSCTVKLDQLFVQTNNSPLJTJMEELBAEFOISNARYPGNRQZXUCFDYWTACLXXMGGSEGUIRRPDXOCIQBU");
    tmp_tmp_msg_0_0.attr_type = 48U;
    tmp_tmp_msg_0_0.min.assign("UFBBAPERHGJZSLFGETJKAGLFOIMJTXXBWCMBQEGHQHMDNBTM");
    tmp_tmp_msg_0_0.max.assign("JCDOQCHXAZRNHNHPKAFGAPKIBQZDJYDOGHMQNZYGSUEPRMCTRIHUILCBEXFNKXUNVJIXREKWTBQARJPYPORSLVLKVAZTKQLGPIMSUJYLDMWEDSFHQORVCGDUUMRBFPFXREHEOLBJLMIVGDVTWVSGYJGHISBUPIZDASTVSELGQKTOYKKHEWUINYZAVNXKYWHZIXXTSOPEBRPYD");
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
    msg.setTimeStamp(0.9388603548706669);
    msg.setSource(32571U);
    msg.setSourceEntity(100U);
    msg.setDestination(57618U);
    msg.setDestinationEntity(236U);
    msg.reactor.assign("OWEXDQTXFHWYTVMLTWGHSLHIIJKMBLEWVTNSHEFRQNUCWGKJCSJVXUPPUMIRATLFBKLEFVCOENHLEZNAWCYDKVGHHGBDJEPJJZPGSNOAXAJPGROXAUGIYIBMPZO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FPQJXOGVSIBAOQHZYYLKCKPGKYWQWEITDTHGRNUJSKFLTVTPSPMKWEJNQSDUWBNLQKDUSGSPJORHUTO");
    tmp_msg_0.predicate.assign("IBSISYBMUQDGTABEHGRUNCZVLLRDKVBMCXADJICWEFMRYT");
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
    msg.setTimeStamp(0.6578998905094726);
    msg.setSource(53676U);
    msg.setSourceEntity(81U);
    msg.setDestination(12334U);
    msg.setDestinationEntity(176U);
    msg.reactor.assign("QJPQOPHWQLXICGTFNRMFVPUOOQXTZCJOELOKYUVVLDHQDTXUQPCJHWBLRSMYFPKIAJFBOKDFSZMXFLWDCPJKRGSSITIQVDCRGSEYBNUAOXXCZPENNXUKBLHZWFDLLZSSHYAXJRTYWQSMGINHWEMVGCBRCMVPAGGTZIUGADAJYEWEDGBNYZUBMZTIVHFVJKTBVROOCLKTIWSGAEJYRHSAQHLRJHMA");

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
    msg.setTimeStamp(0.9033235773734246);
    msg.setSource(13276U);
    msg.setSourceEntity(99U);
    msg.setDestination(8008U);
    msg.setDestinationEntity(179U);
    msg.topic.assign("FILKBBAXSRECTZYGJCWZYYHOZMEQBKZEDCPBZWTUQLMWEQXRCCPKPKMAQFVDGGBJCIGMYFGCNGUJJXHITK");
    msg.data.assign("BVEMXVFOICWWQLZKERSBVKDILFDBYKYTOWDQJADOVWHXNJUZQFYIGFGJYFXAJSVINUUPNHMFKNPWJYHUVPEEBXMXA");

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
    msg.setTimeStamp(0.6100451557452006);
    msg.setSource(15061U);
    msg.setSourceEntity(181U);
    msg.setDestination(38001U);
    msg.setDestinationEntity(239U);
    msg.topic.assign("ACAVWLZDRRGHNWPBUCPXEXTSMDECSGACKUPEMYOOSAHTXPZXFIWKDFQBYSPNFQUXANJRQGHMHAOIDLXFJWJO");
    msg.data.assign("MTYCOGBIZAGHUXOANSUAORYNENHESAPDOPTQHGRNHFPVMMZEXMEUYQYLTLSAGFYWIVLMLCQPDANBCUJZYWSTTTT");

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
    msg.setTimeStamp(0.5074861489294296);
    msg.setSource(46826U);
    msg.setSourceEntity(106U);
    msg.setDestination(26964U);
    msg.setDestinationEntity(129U);
    msg.topic.assign("KXERFBWZEDHNTPYMJBMRBYNEFPSCZPGTLMKCEZWCOSYAHLZJTSLOVDUYYWYRAYPSBRKJPFHIPJQECVKJBCHGWCNCMWAGRVTESOMQUEGGHNTFUHRBNPIGMBPODOGDBDAISUUMADUXSXFTZWJVDRNAEWNITEQKXWSOYIXGVQKJDOLTZFGCFJVPHKFIMQX");
    msg.data.assign("CVUMPWGWQCDOJXBFPNMLRXQQAVKRWNJTICBBTIYUGHRYJIMQMLJEUFJPCXBILCYOBHTUYSTEWPZKTPIAEZARDJHDQFTFPBQZCSGLGTUSZJDAQRSFXZVYGOOAPJBNNLUFDEVXSKYHDCOLUNYJRZXPNZXIUHQFHXLDRMNRLNKHVCAAVIIKJPILZPDSZXGVWKSQKOBWFMHMSCBHDZRVTLESKBYUOFWEYOIVONHWGKAEATCDEKSEGXWRVUOTG");

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
    msg.setTimeStamp(0.5680736995727563);
    msg.setSource(29246U);
    msg.setSourceEntity(98U);
    msg.setDestination(16296U);
    msg.setDestinationEntity(49U);
    msg.frameid = 242U;
    const signed char tmp_msg_0[] = {37, 58, 74, 87, 40, -92, 41, 19, 79, -90, -53, 95, -61, -37, -80, 107, -46, 16, 64, 19, -42, 104, -40, 14, 79, 70, -73, 0, 67, 91, 110, 47, 123, -118, 100, -1, 17, 62, -86, -113, -100, -109, -33, -46, 9, -99, -29, 106, -70, 76, -128, -94, 32, -79, 18, 115, 77, -12, 105, 83, 84, 22, 116, -27, 101, 42, -21, 100, -15, -74, 105, -86, 73, 84, 44, -52, 98, -33, 53, -75, -5, 46, -37, 6, -11, 91, -17, 6, 121, -128, 104, -44, 99, 0, 80, 80};
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
    msg.setTimeStamp(0.3416762327529659);
    msg.setSource(27785U);
    msg.setSourceEntity(63U);
    msg.setDestination(4302U);
    msg.setDestinationEntity(151U);
    msg.frameid = 162U;
    const signed char tmp_msg_0[] = {-76, 113, 87, -31, 94, 30, -84, -50, 92, -7, 108, -109, 77, 46, -60, 92, -73, -76, -106, -33, -27, -104, 90, 33, -67, 116, 125, 73, 38, 107, 5, 91, -85, -47, -18, -81, 101, -27, -17, 35, 70, -79, -63, 29, -70, -29, 37, -115, -103, 68, -100, -51, 62, 54, 110, 120, -104, 32, -114, -21, 81, -24, -79, 102, 94, 109, 115, -82, -119, 1, 114, 66, -20, 26, 72, 84, 97, -99, -52, -89, -21, 25, 52, -83, 121, 19, -124, -74, 116, 94, -67, -93, 86, 75, -91, -48, 124, -113, -71, 27, -98, -36, 102, 90, -66, 14, -15, -84, -33, 105, -67, -92, 108, 48, -27, -122, -63, -106, -73, 104, -55, 73, 70, -85, -9, 42, 19, -121, 31, -107, 20, -46, 22, 90, 1, -128, 47, -114, -24, 113, 18, -107, 23, -19, 6, 45, 123, -101, -38, 73, 33, 123, 103, -24, 14, 33, -98, -52, -127, -13, -51, 64, 118, 116, -105, 123, -52, -18, -103, -67, 76, -81, -87, -55, 125, 117, -41, 75, -91, -23, 62, 84, 59, 107, 103, -40, 66, -33, 13, 68, -91};
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
    msg.setTimeStamp(0.34102255964301353);
    msg.setSource(26110U);
    msg.setSourceEntity(60U);
    msg.setDestination(17730U);
    msg.setDestinationEntity(80U);
    msg.frameid = 14U;
    const signed char tmp_msg_0[] = {-68, -23, -108, 122, 63, 55, -24, 10, -12, 123, 29, 39, 73, -10, -33, 101, 103, -90, 11, -113, -106, 1, 8, 99, 74, 61, 59, 14, 32, -112, -4, 5, -28, -104, 105, 14, -127, -17, -77, 112, -74, -7, -56, -53, -82, -50, -35, -95, -101, -76, -36, 92, 120, 121, 12, 118, -4, 92, 105, 78, -83, -18, -29, 53, -91, 15, -14, -85, -4, 10, -7, -43, 8, 89, -26, -90, -98, 29, -38, 12, -72, 27, -26, 114, 31, 41, -25, 20, -122, -59, 93, -6, -1, 32, 13, -106, 9, 112, -5, -117, 30, 63, -72, -6, -40, -53, -114, 67, -11, 35, -112, -128, 90, -32, -80, -125, -4, -102, -28, 42, -11, 83, 53, -24, -14, -49, 101, -46, 46, 38, 37, 8, -113, 80, -7, 0, -29, 107, -95, -78, -61, 9, -42, 1, 41, -91, -15, 120, 16, 69, -4, -14, 47, 103, -40, -37, -120, -44, -25, 102, 2, -33, -7, 2, 14, -5, -41, 31, -125, -16, -102, 43, -81, -49, 75, -106, -93, 52, -5, -100, 4, 10, 61, -88, 99, -91, 123, 88, 102, 70, -75, -22, 71, 13, 77, 34, -63, 36, -19, 61, -56, 22, 3, -87, 34, 125, -57, -86, -85, 52, 110, -119, 85, 60, -106, -68, 45, 62, 125, -17, 86, 6, 116, -19, -41, 53, -50, 34, 22, 46, 9, -100, -22, 61, 68, -13, 66, -27, -18};
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
    msg.setTimeStamp(0.08498977089465254);
    msg.setSource(27181U);
    msg.setSourceEntity(167U);
    msg.setDestination(16348U);
    msg.setDestinationEntity(105U);
    msg.fps = 66U;
    msg.quality = 146U;
    msg.reps = 141U;
    msg.tsize = 184U;

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
    msg.setTimeStamp(0.5805396872136241);
    msg.setSource(7674U);
    msg.setSourceEntity(157U);
    msg.setDestination(50302U);
    msg.setDestinationEntity(166U);
    msg.fps = 132U;
    msg.quality = 192U;
    msg.reps = 232U;
    msg.tsize = 181U;

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
    msg.setTimeStamp(0.05863645634563874);
    msg.setSource(13275U);
    msg.setSourceEntity(206U);
    msg.setDestination(15853U);
    msg.setDestinationEntity(228U);
    msg.fps = 240U;
    msg.quality = 80U;
    msg.reps = 43U;
    msg.tsize = 143U;

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
    msg.setTimeStamp(0.14345256869590306);
    msg.setSource(13207U);
    msg.setSourceEntity(141U);
    msg.setDestination(31734U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.14375934246726785;
    msg.lon = 0.5884087257603582;
    msg.depth = 210U;
    msg.speed = 0.12157966411853693;
    msg.psi = 0.38959392924213165;

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
    msg.setTimeStamp(0.3691565741311782);
    msg.setSource(60493U);
    msg.setSourceEntity(36U);
    msg.setDestination(61965U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.7360781723574794;
    msg.lon = 0.4984761442623472;
    msg.depth = 88U;
    msg.speed = 0.6418720784688074;
    msg.psi = 0.7729674428568731;

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
    msg.setTimeStamp(0.3389678293492332);
    msg.setSource(2156U);
    msg.setSourceEntity(111U);
    msg.setDestination(7448U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.7506135281090934;
    msg.lon = 0.6080738723607824;
    msg.depth = 161U;
    msg.speed = 0.4416814761300082;
    msg.psi = 0.028512662053335025;

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
    msg.setTimeStamp(0.08644878010234935);
    msg.setSource(23359U);
    msg.setSourceEntity(109U);
    msg.setDestination(54697U);
    msg.setDestinationEntity(205U);
    msg.label.assign("BMZZCRHMTFBESIARJZHBPAKIGGTXGXNORQQXFKAWRROPLFFSQXRKMITNWQISVGYSLQZZYUVGECLRFKCIVJVUSIUSOYAHEPYDIXKPLHUCYELYFFGXVUAHJKEXVBQJTQPVCWDMPGLEYDIJYXTOMHRNFTDAZVEOQSTJBNMBPWRBLZNUWPDZNABMNEKNPKDNFJUCILDWANQXJYOVCIEHMLDKTDMSFKALCEVTGYXCWOZR");
    msg.lat = 0.8101025606349489;
    msg.lon = 0.04888124708029351;
    msg.z = 0.698341165330351;
    msg.z_units = 14U;
    msg.cog = 0.8358658027874303;
    msg.sog = 0.8687549842260578;

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
    msg.setTimeStamp(0.7236471535577101);
    msg.setSource(19027U);
    msg.setSourceEntity(100U);
    msg.setDestination(47640U);
    msg.setDestinationEntity(89U);
    msg.label.assign("VPFGBMFFREZWNYKVLXHPIQFUAAVPKOFYTZKLZJJEZXAMNEQJYJXUVACMBNIXDHDJMZSBFSYOUVKGGRAWODCBQOYBPUCZRWPXDYTYHLHMMOQSRAUMGWZMUJQQXSCGHSCGCIERVWNJJLZEBPSTUOPKEZHLXLGMDCVLRHSDUGNVFRFIWDWOZQTAUEKHNNDROFTKRSWUXIPXWEFQMICTEQO");
    msg.lat = 0.3845872126347294;
    msg.lon = 0.032799650689837145;
    msg.z = 0.7571944723503943;
    msg.z_units = 54U;
    msg.cog = 0.26505829740613507;
    msg.sog = 0.30608138300376353;

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
    msg.setTimeStamp(0.8915867672412658);
    msg.setSource(40504U);
    msg.setSourceEntity(39U);
    msg.setDestination(14399U);
    msg.setDestinationEntity(19U);
    msg.label.assign("HATWIGGATLUTDSLVOUIYOIZOUUOCCOPQEXEDTTVHCHHROWNDMYHKWCCQKBJPLNFTKBDWARODEWABYAAFSHQAIJAKUNTQWCMKTPVGRFJRWNVGEKEMIHFBYKQWHZXFLXZVXGQLQRRDXZJBBMSPLXIELBGDGBPXJI");
    msg.lat = 0.06322839479887477;
    msg.lon = 0.11792898103395166;
    msg.z = 0.8254594787973761;
    msg.z_units = 3U;
    msg.cog = 0.2859362737283516;
    msg.sog = 0.3607563371300051;

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
    msg.setTimeStamp(0.40725303698858906);
    msg.setSource(15422U);
    msg.setSourceEntity(82U);
    msg.setDestination(30488U);
    msg.setDestinationEntity(147U);
    msg.name.assign("ZSCQMICSFFWQBXJIPFQBBZSWWTTIZPTXKFUEMOYNLNHJOERDNRJNUMUHTUEFHUVRGJEDZYVEJVHTAKNIYAQKIOXZHYTBHLWMWTMVLDIBWMGHVDLGCFUGDHPCYTJALVQAZQOKTDFHKEGEYRLZASIZHSBPGPOMNINKFRAARZCQJGRNIDICMBWNJSWBOVXOLLTECOKSXGUCSUVGEDAOPXAR");
    msg.value.assign("VXLIAOOTGRFNCHSCISMLDBEUUPZQSFLJUMVNSVBRPHAMMUCXFXNQFKEDWTQNAXENCEYLWBMGPRKZRDSXESLACVWQFVIHAIJPEUCKNGTHMUJTSLRVOWTYQUPLSVVVRUTMOVA");

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
    msg.setTimeStamp(0.6626697641952751);
    msg.setSource(4598U);
    msg.setSourceEntity(58U);
    msg.setDestination(5008U);
    msg.setDestinationEntity(139U);
    msg.name.assign("KFKFQUERAPBTSMETGCNWUETOBPNVRFJCVQLPTNVOEDHQMJPKYOIXDWXDWJZAJLLGXWMGYGPIYWTEJBRJQHAQIDMCAOGZSUBVQCZTJINWLXODGEMQEPFHFISMMTBFKCFJZTIBLEPVYVHGVAUVBUZLDAOLQOJNKXHRCRWWIKVCGPXFXMZXB");
    msg.value.assign("AGCCWDWWLXLXNGRXPOVMHQRRW");

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
    msg.setTimeStamp(0.5859163700495439);
    msg.setSource(26096U);
    msg.setSourceEntity(242U);
    msg.setDestination(7851U);
    msg.setDestinationEntity(36U);
    msg.name.assign("TCDENTTXRPZZDFICGPWCOUCAONLOQBWNQGGUZJNXFBMADLGHHRQBPCRHFMALFCTNJTJXHZAUBVANIUCVWFKKBZZJKNYSGCXMQKOZFJPHKQXULLDYVWFVZGEAJESYFBDTBPZWQEAIHYGRLEFIYXEDWVPHEWEKMLUQCLTGSWJSH");
    msg.value.assign("XKPRIWYTCMSOOBTIXDRMBGZPYVGGSROWGGVWPWULFKXEFTZYMUDASAILKCQRJINMAPSMRWMOLHRFOHZVETSOYHPPYRJ");

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
    msg.setTimeStamp(0.7039059239833872);
    msg.setSource(9495U);
    msg.setSourceEntity(52U);
    msg.setDestination(41784U);
    msg.setDestinationEntity(196U);
    msg.name.assign("IYVXBMWFVDEQOCKFETKMPSDKSLYRTFO");

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
    msg.setTimeStamp(0.5058348436996456);
    msg.setSource(9658U);
    msg.setSourceEntity(135U);
    msg.setDestination(54083U);
    msg.setDestinationEntity(133U);
    msg.name.assign("MRNFMWKYRMYOFNLYTDEJVPOWDVQPOBQBIJXEUSNHHTIXAIEIEZLFYWRMEZKBHGSUDZGQWLCRJXUUKJGHZQQCVPRPFLEBVVCLYVLFAULPQJYASDSMDLTVMOTMATSBZIGPAAJKBZPUUNLKDXDGOZKTRFTVIRRWTSHKFWJOZHKFCQACGQJWMNWHIEGOGTDXBAJENFHQUXOWSIXFBXVANENOCXYKYDH");

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
    msg.setTimeStamp(0.20312394449783133);
    msg.setSource(59689U);
    msg.setSourceEntity(83U);
    msg.setDestination(15733U);
    msg.setDestinationEntity(51U);
    msg.name.assign("DOTEEXYFPZCYYFCJEWJDAWHNZFXKRTXZJYUNPWMGACFNGUCISMGYAONSICURRXGDQDJUXVZEQW");

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
    msg.setTimeStamp(0.8733805163131423);
    msg.setSource(62341U);
    msg.setSourceEntity(120U);
    msg.setDestination(11310U);
    msg.setDestinationEntity(136U);
    msg.name.assign("WXIVUJUFJDWCUOLMHHTUWXSTXQTVUZBBTERDMIMSAKNWCYJM");
    msg.visibility.assign("XTENTGEUICSQOPGKCQGJVNWFDKVRGBPYSDLOIFFEMMEVTFTQGRZDZCEXCBAIGUGNDBBDZYPWPROWSXTFJFJJNBPJHMPSTYRUEMFVRKMHRVJOIKYUTHKLWXQVUDAROWURIAQAEZJABZNCLGHSVLMAXQVCPLPYPSNDYDWGJK");
    msg.scope.assign("XYAYSKKZCHAMGVFHQKMVPBWRTLISLPGBZGGPDVBHBXA");

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
    msg.setTimeStamp(0.8879012680018321);
    msg.setSource(52974U);
    msg.setSourceEntity(103U);
    msg.setDestination(44304U);
    msg.setDestinationEntity(239U);
    msg.name.assign("OYVLZALDQYJPCHU");
    msg.visibility.assign("YTOTUUKPPHUQNWLUIAXKNCOKLQOCHRQBFZIDEXIWSOPYYKQMYCQEBJWRGYGJXXTXMOZWNJIIKCHFSBLXAABAPPBWFIEEDDDDCBFTNMQKIBHKKXEJVXVROCGAEUFSQWP");
    msg.scope.assign("CAZVUTZZYVLDDNYQRTIZIJNDRIJFDEEQBPBOTLCKCCRLLGXXEVHCCGHGSTDOBAHQTNPWYVUREBAXMYGQKLUAOGQGDHYWFMQAJEKNNVRISJIOHSBVB");

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
    msg.setTimeStamp(0.9657810880248944);
    msg.setSource(21969U);
    msg.setSourceEntity(91U);
    msg.setDestination(1982U);
    msg.setDestinationEntity(1U);
    msg.name.assign("JTOYFCOPXHWIGVJIQBNZMLFOTMHEVLTYZXHSGHWKTGYKWQVSRVICTSUOJLCMMGNVOWDXXNNIEKYLKDIDXBFAUHHKHEKAPAGPULAXWIVR");
    msg.visibility.assign("ATSANHQIRXQRWZQBSKXUEJCWJGNZGIMUDOMFQSXVKLTSQGYTCUDXRQFJGCKGAVCLOAXGSMSSWAENNVFPZEAWWJETDIOBTKRVBIDGULROHOICELJJMLJUJWDTWLGHFBHVZKGAYFXDHZNHIPIBNVTFFBVMNZE");
    msg.scope.assign("GNUYQBUNUUJLKYKXRFWLEMPTQBIXVICPADBIFLSGDSRSHNXTJUFFMZSWCOLEVVXPPEURCOYLSVBGWIFIPXZMXXJDE");

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
    msg.setTimeStamp(0.7986471439821174);
    msg.setSource(39887U);
    msg.setSourceEntity(175U);
    msg.setDestination(48970U);
    msg.setDestinationEntity(32U);
    msg.name.assign("LICFXDALWDUTVILNGIKBFDPHUNHMXJYYMKRRWTCPGYYLFWOUIFTCGENLGRZFGPQMOQLNERQQEJUMVKWBMSLIJDETSZZSXHZOZQQUKSVZBALMGUVRNTGDENHJDFCWISKMZCIUAPRRNIKCVUOODBHECBKASOSOTSSNWRWZJCHHEXVTUAVPDYWBBQPYYFXRPEMBIJVJAGKUVQJKPXMXFCJEIDXVO");

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
    msg.setTimeStamp(0.6058889802614593);
    msg.setSource(29741U);
    msg.setSourceEntity(42U);
    msg.setDestination(50295U);
    msg.setDestinationEntity(146U);
    msg.name.assign("MJZUUGULUDOGCJTMVENAZWLKKYMUBKNKZBLZFJWXFWBLWGOQPGHXULAVTJKOXLPTCNSCXKFDJYIAIEDTTKDTMACDXQGEUCAIIVYSFQGAIYOBGBACIMRWESSNNNOMCTSYMENBYQTLPNZZXULBNQIYOSXQSYUFWXCEOYWJFIPPRVQRUEDRMHDHIKPQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JCAIHRVDOUWCNVUVPSUXLTFBRJERQDGLXJFTPNIRAQRQWYALUHNFNBYSBOGRTBEHVNGYSKINWLICMGAYMONDAZMTQBSBYLZTOZWACHUIOGCLHTXYSOKHMFVSCPIMTGOCKQBMBYRAMISFDQVVIKFXFUGJYNUZPESPSZOZVLYZJWBHWSHLDKUPGGCCXAEPELPDKDWFTXFNMEQOXOKJZKRJELXKJHVGIKDZCWE");
    tmp_msg_0.value.assign("BJCAQACTGJZFYOYEQHQFNVWWYIJHHMEFOBORSWCAEGHNKDVUEZVNIICVMEOQXQAHNSURTJQDXMPLFTILWBTPAPYCMAR");
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
    msg.setTimeStamp(0.7764141069487075);
    msg.setSource(19720U);
    msg.setSourceEntity(134U);
    msg.setDestination(20027U);
    msg.setDestinationEntity(36U);
    msg.name.assign("KMZESPCPSHJXZHAFBCIEKJEASWUSBRMDYGFQAATJBQZCBTZGLULVIJEGLFXHPNERONVVZKAYLGEOIOTOGCCFSFX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CFVOZBWRDPTXAMFQILBPVSJITMASYRZNBOOMZTYQQABCSKTUVIIVFBDHHGGWNXQUWTLMRRDMJGPRPWSZSDIZLQFAXOELPPWWCEHELAGDNCDSIHSGYNQZCSJBMZHUMMHNQQDUKYRNSCANIXZXJKXFLUELETSPCPRJGTBRMLBNGEYEKWZJDOFTNXPCEUYYCTUCFMIEHFG");
    tmp_msg_0.value.assign("NIHVRHGXUZEOQEYVDCPTRKKJQDLZFUMXUBTBWZIXAFWCPNIFC");
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
    msg.setTimeStamp(0.46426247369351925);
    msg.setSource(18657U);
    msg.setSourceEntity(75U);
    msg.setDestination(53969U);
    msg.setDestinationEntity(84U);
    msg.name.assign("SBRXJZTNVSESOTWSVIPBZMVBALQJCTKAJJBTFHSNVYDOMZOFYXNIBMEXNFEMJSOGGHQPQFMICXDDQQVHONYBAELQGEMNLBKMDBDHOOTIACPGYFIWLQBKZWLGTCRKXLHPJPGARNCTVPZHTALGCIHXWEEXYW");

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
    msg.setTimeStamp(0.6360158022846405);
    msg.setSource(1942U);
    msg.setSourceEntity(156U);
    msg.setDestination(43704U);
    msg.setDestinationEntity(36U);
    msg.name.assign("HSFJXPZGSGOUEIDKCKBFEAMSOVNVCDGCUZPBAEFZHMKYSAUDPNYPIUUFORKDTYTROQVNSYBPSTKBIFQHRKDDVVBBXVGTYYQLTHXLMJQPROWQRTWDCKYMJFMWZHTZXIXKBSGFCNWQXKCOLTJFOWELHNNALWMJZWEIGQQRYCTCAAILOBNRYEMMHGILWGPWHWJSV");

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
    msg.setTimeStamp(0.9284242032310553);
    msg.setSource(42098U);
    msg.setSourceEntity(146U);
    msg.setDestination(54837U);
    msg.setDestinationEntity(168U);
    msg.name.assign("JURULQIFRZUMUHRSKYWSASVHWZNNZQYYDABTIZMDHCQOXKWYHEDFGSDUKDRCZKVJJBAPKZWRPAPUBHXPTMFJLGDBEY");

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
    msg.setTimeStamp(0.058290174526980376);
    msg.setSource(52683U);
    msg.setSourceEntity(143U);
    msg.setDestination(55177U);
    msg.setDestinationEntity(35U);
    msg.timeout = 1036980529U;

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
    msg.setTimeStamp(0.5139901604884352);
    msg.setSource(62486U);
    msg.setSourceEntity(47U);
    msg.setDestination(46077U);
    msg.setDestinationEntity(133U);
    msg.timeout = 879296469U;

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
    msg.setTimeStamp(0.5154850426765123);
    msg.setSource(60858U);
    msg.setSourceEntity(243U);
    msg.setDestination(28327U);
    msg.setDestinationEntity(226U);
    msg.timeout = 4063145801U;

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
    msg.setTimeStamp(0.8525515862442121);
    msg.setSource(26634U);
    msg.setSourceEntity(112U);
    msg.setDestination(52404U);
    msg.setDestinationEntity(121U);
    msg.sessid = 3193393365U;

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
    msg.setTimeStamp(0.7123005066350521);
    msg.setSource(64807U);
    msg.setSourceEntity(138U);
    msg.setDestination(2896U);
    msg.setDestinationEntity(151U);
    msg.sessid = 3050693324U;

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
    msg.setTimeStamp(0.9474272870681699);
    msg.setSource(20859U);
    msg.setSourceEntity(117U);
    msg.setDestination(22004U);
    msg.setDestinationEntity(183U);
    msg.sessid = 988448783U;

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
    msg.setTimeStamp(0.994646811989301);
    msg.setSource(17047U);
    msg.setSourceEntity(231U);
    msg.setDestination(55374U);
    msg.setDestinationEntity(81U);
    msg.sessid = 2474175766U;
    msg.messages.assign("IRPKIROAXSVMRDZMMUHNXFZPGYYHLWRIQIVPYSBQXUREMXJTEDAJWUVJQPNDZEOWJCKMCBKNFALGVGATPJZZDVOLSKZYQSUCLUYMUPVOHHVEDHP");

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
    msg.setTimeStamp(0.8735378881095076);
    msg.setSource(44162U);
    msg.setSourceEntity(181U);
    msg.setDestination(56830U);
    msg.setDestinationEntity(46U);
    msg.sessid = 2579229966U;
    msg.messages.assign("OYMXZWSRMHCOWDQTNHVOSAVDIPZVSXAVGANDWFRIQRCLZRAZIMGGCNCRUTAIIQFKJAYYDTBTOGXAROEFNQJETHSKOPRIZFUWBMFPERATEMCNNWMT");

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
    msg.setTimeStamp(0.2542706797329879);
    msg.setSource(19301U);
    msg.setSourceEntity(108U);
    msg.setDestination(59683U);
    msg.setDestinationEntity(141U);
    msg.sessid = 1764385618U;
    msg.messages.assign("GNEDOAWNKHGOIBIXNUJMVXOIYRPYJLYQGZUIGBDNWRBCXKBVTJSAR");

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
    msg.setTimeStamp(0.8497439130692424);
    msg.setSource(51898U);
    msg.setSourceEntity(220U);
    msg.setDestination(48197U);
    msg.setDestinationEntity(253U);
    msg.sessid = 275852816U;

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
    msg.setTimeStamp(0.8603549249738588);
    msg.setSource(52618U);
    msg.setSourceEntity(129U);
    msg.setDestination(12951U);
    msg.setDestinationEntity(235U);
    msg.sessid = 1835577546U;

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
    msg.setTimeStamp(0.23847842745537107);
    msg.setSource(29877U);
    msg.setSourceEntity(198U);
    msg.setDestination(14423U);
    msg.setDestinationEntity(170U);
    msg.sessid = 577372203U;

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
    msg.setTimeStamp(0.9913242722787485);
    msg.setSource(36846U);
    msg.setSourceEntity(234U);
    msg.setDestination(34039U);
    msg.setDestinationEntity(35U);
    msg.sessid = 3169555066U;
    msg.status = 160U;

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
    msg.setTimeStamp(0.8483144514195008);
    msg.setSource(1569U);
    msg.setSourceEntity(63U);
    msg.setDestination(33691U);
    msg.setDestinationEntity(36U);
    msg.sessid = 1888604264U;
    msg.status = 94U;

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
    msg.setTimeStamp(0.4334986202187746);
    msg.setSource(62225U);
    msg.setSourceEntity(228U);
    msg.setDestination(31430U);
    msg.setDestinationEntity(58U);
    msg.sessid = 1957895767U;
    msg.status = 48U;

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
    msg.setTimeStamp(0.236354265260299);
    msg.setSource(23012U);
    msg.setSourceEntity(147U);
    msg.setDestination(35364U);
    msg.setDestinationEntity(148U);
    msg.name.assign("KKFHYVYWNKBPLQOREBAVWAQKUHBLILLZWGXWULXTLSJMCCIOPDJWDGWPTVTSHXUZIYWZQRFESTXIRHGCTGOAKJZURRQNNEFEMAREFLXNIEYPHBLYUVKTMIYVYBDNAQYAXUOFERMDXQNCFJJCZBQVOIHZSHPPAXJTVYYUIMCNDAZQGIFMMMCHUJQMDTXWOPVSPTOKFGDLADFSBPWSKPEBZGVDUA");

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
    msg.setTimeStamp(0.7584270423425749);
    msg.setSource(43710U);
    msg.setSourceEntity(184U);
    msg.setDestination(57787U);
    msg.setDestinationEntity(166U);
    msg.name.assign("NDUOCZXDKQOUFGVKPVLGUFDCWEMNBJMCWYGOOSFLHMPNTXDVSDPYTJZQSVPBJYQBOTBQOIVURJOCHRKZABSBPTDHLPWZLKUSRSBXHGUZXXJIHWTBLTDJPHMISRFJJEAETJFDAUMGQNTLEEOLKCUCIKF");

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
    msg.setTimeStamp(0.10886698242607173);
    msg.setSource(45658U);
    msg.setSourceEntity(97U);
    msg.setDestination(14335U);
    msg.setDestinationEntity(227U);
    msg.name.assign("XJRCLFVDPYABBCEZLWGTATMRRJWFYQLVZUCNTOGVVIPARQBNQETZEOGJVCKDPIAYWEYQHMDHKREAWZKLEVZTXWOAVCNFMGYBLMOTANQNH");

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
    msg.setTimeStamp(0.9515864015497364);
    msg.setSource(12165U);
    msg.setSourceEntity(133U);
    msg.setDestination(42885U);
    msg.setDestinationEntity(65U);
    msg.name.assign("RWJDPFRHRBSIGDRMULJWLFKNJFOYTZCKOQYBHOTZFLSHPDSBQRUZFKPOXVPVOYFAMUJONABJYOYRLTLXBZEKXBUDQIAABNTPNCVANGAWJQYKJFIXVUTVHQYWESICVSDGXUCVPHXEPIWRUQVMUZXZSTMZAWZEBAEOLMNEHCGCCMJNDTRFKWEUIF");

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
    msg.setTimeStamp(0.3360386710159847);
    msg.setSource(36110U);
    msg.setSourceEntity(164U);
    msg.setDestination(59937U);
    msg.setDestinationEntity(194U);
    msg.name.assign("EPMKIQSEXYODIJQHBTGQCCXZLJKDIJCAFTMYOKXPIVHKGZIWJGJKAJVAANXOLVPJGVRIBILBEIRMZSPHIPDBISWRSNETYEUWVBFUCKQBOYMPFBVPFGDWWQDRWHZMBGEWNNZXARATGNTVLWAPTQUCKOXULT");

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
    msg.setTimeStamp(0.4799576779223711);
    msg.setSource(16972U);
    msg.setSourceEntity(27U);
    msg.setDestination(41729U);
    msg.setDestinationEntity(52U);
    msg.name.assign("MAUJYDWPCVGCTZFWMRZJNVNBJUALBFHFNYNFUMLBGSQYJOHLXGAVSFLIFGISXPHTYDYCPLWZZXHKVQAJSFMJPOUPDORLGYKDHCBSKIPHUEXARJCMEOLIDEQWESSKYOJIUXUGHGZFDPZUYCPLKNTDRUBIWGQRGEVCTKGORZQCDIEXDWHSEHQFOQMA");

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
    msg.setTimeStamp(0.4814132741950582);
    msg.setSource(44255U);
    msg.setSourceEntity(9U);
    msg.setDestination(19905U);
    msg.setDestinationEntity(73U);
    msg.type = 173U;
    msg.error.assign("EOGVGCPKEDAANJDIILNVYOU");

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
    msg.setTimeStamp(0.3322845997287317);
    msg.setSource(63443U);
    msg.setSourceEntity(68U);
    msg.setDestination(50555U);
    msg.setDestinationEntity(2U);
    msg.type = 78U;
    msg.error.assign("SPNWQFDWVINTXACIYAGJMGPZSVYPMRDDJDPVPUHDCCAMOXVFYAKAIYVZNASRFXZGLMNAUKYUWXFSBAYBYCTKTCHGWEROZDITSZJORKWJTLFZJCKUCWBGXZLMEFUOBOWCTWSWHEMGVTBHBRJLLLMHEPPQBIMGCPZBENTLXDQGNQWRUUOTIJQYQKGUDIEUXOANXHFXCGVVBXQBQPDYHEOPNZSNRIKYIJSVHMHROF");

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
    msg.setTimeStamp(0.49775367795155867);
    msg.setSource(30843U);
    msg.setSourceEntity(6U);
    msg.setDestination(52058U);
    msg.setDestinationEntity(149U);
    msg.type = 221U;
    msg.error.assign("AWCUIYSKYAUBWWVLDDBPIFXAETOLEDNMRNNHLEMQOMIAEGPJDULXCGYKPHWXJVIFMYXVHCJWCZQFZLFCEQKXXOQOVKOKRPKTZTROWVFVDPYHYPTVUKSLZFBZRNOUOQKNDJNTJSRFAIBHDFVJNGAEYDMHQIEXJDBPOBSQDQNRALMGWBXBEECJGVWITPCZWBXYIJSGGCYTLZGRSSHMMQCPQKGRANPZFYNSGHZIOJ");

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
    msg.setTimeStamp(0.3952722430846508);
    msg.setSource(2129U);
    msg.setSourceEntity(25U);
    msg.setDestination(29883U);
    msg.setDestinationEntity(146U);
    msg.seq = 35616U;
    msg.sys_dst.assign("GQHCIXKAALSZFUKYGBVTAHNZTMZIBBSJJHPOEOAFWDFBYIRJDWZAQPMUUPRGEMYTXZWFHOBARKUIQELZENTARNKOYTQMLEPCUSJJWRCMXKJCDXWIQGHYTGSDVDMFSEQIUYTOLWXAUQVRANJYJLKQOCNQGAFXVMBPXYEXWMLPVNBJLYSHPPRNLIVVDCFPKLTVEX");
    msg.flags = 165U;
    const signed char tmp_msg_0[] = {87, 125, 57, -62, -97, -73, -82, 10, -79, -3, -72, -94, 102, -65, 44, 28, -39, 12, 66, -113, -10, -82, 15, 126, -66, 79, 86, -93, 78, 111, -106, 21, 96, 78, -23, 20, -125, 87, -25, -10, -33, -47, -95, 29, 108, 103, 124, 100, -36, 76, 96, 108, 18, -68, -37, -51, 0, -120, -102};
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
    msg.setTimeStamp(0.9896898521263046);
    msg.setSource(10543U);
    msg.setSourceEntity(165U);
    msg.setDestination(13437U);
    msg.setDestinationEntity(129U);
    msg.seq = 45886U;
    msg.sys_dst.assign("FRSAGWATTHWCCGDCAPVZWPMJXPTEFSLCZOGWNNHGQQCVYYBLVCXABNEGBTJBOUIBPARPQHSYKFDVSZDOZMDVMXVIQGRXNMHMLLEEPKGYPNPCLRBUFXSTLCVKZTKPQODJEKJDUHSKXKYDVYMPSJGAMIQYWFJDJQSDWZHEOFZHGZKUABHTIIESOAQRXXZMLIYFFTT");
    msg.flags = 193U;
    const signed char tmp_msg_0[] = {-22, -82, -25, -66, -16, 79, 92, 95, -100, -70, 91, 77, 105, 118, 1, -10, -19, -4, -46, 15, 71, 60, 68, 112, -67, -80, -57, 7, 83, 30, 17, -5, -118, -20, 48, 18, 38, 105, -38, -35, -25, 21, 76, -20, 28, -22, -29, 11, 28, -122, 85, 53, -24, 44, -46, 22, 100, -125, -2, -15, 14, -15, -34, 99, 14, 64, -100, -76, 92, -45, 12, 35, -14, -96, 105, 0, 65, -95, -36, 19, -4, -44, -109, 123, 18, -25, 26, -25, 25, 9, -11, 42, 30, 89, 0, -10, -93, 124, -59, 89, 96, -119, -7, 31, -16, 95, -51, -127, 124, -88, 66, -13, -68, 68, 26, 50, 18, -103, 81, 63, -39, -107, -15, -80, -51, 73, -28, 21, 7, 116, 77, -96, 120, -111, -101, -31, -37, 106, 83, 114, -6, -24, -88, 38, 43, 47, 40, 52, -126, 36, -102, 62, -22, 48, 101, -41, -104, 3, 54, 28, -118, 83, 123, 105, -125, -60, -128, 86, -58, 68, -34, 60, 50, -86, 97, -84, 46, -112, 42, 25, 17, -60, -40, -117, -94, -105, -10, 99, 21, -34, -115, 54, 44, 37, -15};
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
    msg.setTimeStamp(0.8366929059066699);
    msg.setSource(58311U);
    msg.setSourceEntity(186U);
    msg.setDestination(30039U);
    msg.setDestinationEntity(9U);
    msg.seq = 35305U;
    msg.sys_dst.assign("GQSPSWEHEXVUWDDRNLQDJVSQHACGHBRRNANHQPJVUOFLO");
    msg.flags = 118U;
    const signed char tmp_msg_0[] = {71, -73, -44, -33, -95, 90, 31, -102, -2, 34, 23, -125, 3, 105, -128, 5, 29, 108, 120, -34, 75, 109, -2, -15, 83, -46, 100, -34, 111, 13, -1, -20, 45, -54, 71, 58, 18, -4, -69, 83, -117, 98, -29, -21, -42, 24, -30, -17, -98, -98, -28, 91, 39, 111, -38, -72, -117, -96, 9, 115, -101, -47, -46, 21, 82, 125, 20, -90, 72, 114, -100, -5, -102, 34, 15, 87, -84, -24};
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
    msg.setTimeStamp(0.2554875540690634);
    msg.setSource(27583U);
    msg.setSourceEntity(24U);
    msg.setDestination(5461U);
    msg.setDestinationEntity(97U);
    msg.sys_src.assign("CAIHZSCMZHJOHQSNNZELULHUIPSMSNUGACFKODGQUWVWVMRZCPJYDRRLPCMDZDTSPTOJKGURGGRCQGGZFBKFOLOFIRXCNPRYFLBNAJUGTHEKKINAWOYUDEEEUPEXNVXFIDGKTAJAVTGMWVRHHJYSAIYYIPBWARWNQUOOPEZQ");
    msg.sys_dst.assign("GGMAQNPPMONXINIBZFRBTFXRYJIJTAKEGFIGPQGZTTFZAYLWNAIXLXXSCEDPFSFSSIRZTNSKJWJXQLGMEXYADFOPPOZEYIGCHWZWLQXMCBVPZCHBYWDHWJUDRFVZZTOKNMUBVVXNUDHHUCCBHUAGBXGUVTTVWZABVHHVEPFWRRADQ");
    msg.flags = 13U;
    const signed char tmp_msg_0[] = {99, -122, -117, -94, -50, 126, 120, -30, -82, -30, 117, 56, -40, -20, 19, -76, 70, 108, 50, -81, 121, 111, 100, 115, 35, -47, 97, -125, -112, -79, -93, -27, -18, -1, 112, -82, 96, 47, 109, -32, -50, 97, -123, 6, -36, -52, -69, 50, 110, 64, 79, -100, 116, -124, -37, -86, -2, 100, -66, 24, 16, -85, -77, -57, 89, 113, 100, 21, -35, 38, 126, 107, -52, -99, 26, -69, -51, -56, -46, -96, 110, 63, -3, 92, -89, -43, -80, -17, -17, 63, -64, 83, 80, -34, 4, -91, -34, 108, -110, -24, -79, -102, -88, -38, 70, -9, 94, 48, 110, 21, 118, -126, 10, -54, -57, 0, -2, -79, 71, -36, -108, -48, 14, -100, 46, -72, -51, 33, 95, -47, 115, -123, -67, -109, 51, 53, 19, 117, -122, 97, -58, -127, -110};
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
    msg.setTimeStamp(0.14662716788113594);
    msg.setSource(21117U);
    msg.setSourceEntity(165U);
    msg.setDestination(5507U);
    msg.setDestinationEntity(152U);
    msg.sys_src.assign("DIQIYZJXNAWEIAZDAEMAITBEYFEFPZQOYJHYDDPUCPAUXDHODCGZUEECBFKMWXMHXXARSMCWOLWGFCANV");
    msg.sys_dst.assign("ATYLYGBCJYITQKBZHUPKHJUUXAQIMYDENFOEQWFUGZCPAQKBIHRTHFNESSLILXYXYVWNLDDQDCPZLRUGBEQBZBJCHRJWVGIXCEKLHSRJJVSPKOTPVAFNLDNDIJTPKDZIKWGXAMQIMLFXDEHRCEONMRPTYFMAZTBOZOUHZJKPJTFOIPBQYGTBVMDVGWXCQNWRSMWUCHCSNLAWFT");
    msg.flags = 252U;
    const signed char tmp_msg_0[] = {-49, 17, 35, -125, -22, 85, -91, -119, -24, -17, -37, 42, -53, 88, -8, -90, 79, 65, 67, -127, -112, 106, 125, -69, -54, 49, -115, 99, -107, 91, 114, -93, -43, 83, -13, -18, 79, 36, 38, 47, -35, -83, 59, 92, -49, 79, -125, -5, 87, -17, -101, -110, 116, -10, 123, 16, 52, 100, 99, -63, -105, 123, 78, -53, -8, 58, -36, -26, -79, -41, -83, -8, -13, 84, 106, -46, 30, 52, -106, 41, 21, 46, 113, 84, 72, 101, -28, 56, 12, 44, 19, 60, -96, -74, 117, -108, -78, 3, 102, 3, -33, -112, -50, -96, -87, -10, -8, 110, 111, -18, 16, -104, -24, -123, 122, 113, -27, -24, -100, 12, -28, -65, -1, -104, -14, -13, -110, 74, 67, 42, 48, 110, 10, 94, 86, -120, 74, -120, 88, -77, 39, 11, 88, 114, -78, -14, -9, 111, -128, 45, 61, 18, -47, 9, 78, 31, 115, -73, 79, 95, 34, -84, 104, 56, -71, -21, -101, 15, 43, -91, 6, 106, 37, -22, -34, 26, 47, 68, 109, 115, 8, 5, 22, 32, 91, 80, -71, 49, 93, -61, 55, 10, -33, -71, -33, 30, 70, 122, -34, -49, -110, -48, 74, 102, 98, 71, -91, 34, -8, -38, 75, -106, 29, -105, 126, 99, 122, -4, 29, -45, 38, 44, 88, -13, -95, 102, 106, 112, 84, 77, 73, -11, -79, 91, 35, -106, 18, -66, -52, -81, 25, -25, -58, -40, 78, 28, -33};
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
    msg.setTimeStamp(0.5355088053664617);
    msg.setSource(39830U);
    msg.setSourceEntity(73U);
    msg.setDestination(5538U);
    msg.setDestinationEntity(100U);
    msg.sys_src.assign("RHQDTBXTWFIDHHCEDKCURFQTJJFKFIJFFZTCQUECYMXKJCUCHJYOBGUCLYLXCYZTKVNKMNSPGIPGZQTYQRGSFWDOWNQONEOPUHNBEZKRIBSYGVRGVQAVITVYXMDIKSJALSPIOOSNBJWMWLDHZVRKIDGOASRBAPEHCJDEEHGKONIPZMMNSLUVPM");
    msg.sys_dst.assign("VDVWTXKESZDJZREFRLCZVPTKWNAIRDBKHYCTCNTJLRJWWXJAGMUTMRNWIEXUUTPSSMOLYRICTQJVSHXDBWISXNMYPPVOSWCBFUAMPZMHREFKQFXHRXDDCOPLYEWVUOINRCETLSUGUFNDPQFLKMEGVGDGUKQBWFZTAGMWISCLBABXJKVKGBAUTOOAGBUZMVQJZQGFBXYSJOHDXNIYYZHPJPZFOALENBYHYQQYNVAFH");
    msg.flags = 149U;
    const signed char tmp_msg_0[] = {114, -54, 85, 46, 94, -72, -63, 74, -21, -87, 75, -98, 84, -61, 75, -53, 91, -94, 93, 28, -17, 4, -109, -112, 41, -127, 63, 37, -102, 90, -100, 102, 96, -76, -100, 100, -70, 104, -123, -49, 52, -107, -94, -40, 120, 123, -76, -55, 28, 31, -71, -118, 21, -14, -9, 44, -127, 23, 14, -74, 25, -15, -63, 44, -117, -84, -40, -92, 27, 79, -71, -38, 16, -39, -104, 105, -42, 45, -59, -21, -99, -52, 49, -50, -122, -88, 30, 50, 71, 31, -48, 105, 33, 68, -65, 94, -115, 36, -99, 77, -44, 74, -31, -104, -76, 46, -89, 120, -4, 85, -109, -33, 50, 99, 31, -37, -109, -85, 97, -120, -83, 16, 52, -82, 65, -4, 5, -7, 64, 61, 8, -53, 53, 109, -70, 56, -123, -46, 90, -55, 40, 34, 123, 91, -3, 39, 42, 59, 59, 12, 94, 99, 87, 6, -24, 100, 82, 65, -16, 12, 46, 98, 84, -85, -79, -21, 60, -24, -104, -43, -3, 119, 111, 76, -69, -2, 96, 81, -23, -55, 28, -54, 77, -112, 96, 46, -35, -29, 123, 90, -77};
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
    msg.setTimeStamp(0.9210295172124324);
    msg.setSource(25507U);
    msg.setSourceEntity(254U);
    msg.setDestination(50406U);
    msg.setDestinationEntity(187U);
    msg.seq = 26194U;
    msg.value = 214U;
    msg.error.assign("GLFIBSTERHRTIYHAVQBRLTHHOFWGXNSKSMEVJGHWQJNRKZAERETQOJPDBFHMDZNWWOJITAILKYUOFATQGSXEIUZAOVLSXKQTGPCCKSPLYGVDYCRVRDOTFMXBZMEWDOXEPJGNLQXTHNC");

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
    msg.setTimeStamp(0.5584333764200666);
    msg.setSource(35251U);
    msg.setSourceEntity(59U);
    msg.setDestination(38306U);
    msg.setDestinationEntity(50U);
    msg.seq = 12480U;
    msg.value = 196U;
    msg.error.assign("UHSJSOHYPXMDNUVGFLOKWVIXITTJHPCJLQV");

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
    msg.setTimeStamp(0.2257219854869248);
    msg.setSource(22327U);
    msg.setSourceEntity(119U);
    msg.setDestination(53206U);
    msg.setDestinationEntity(230U);
    msg.seq = 44997U;
    msg.value = 77U;
    msg.error.assign("FULFORGSJSKDACHFRWISNKPCFHOQROLIDFATGXNTGUAKUZUIGOMGMTBHGXICYYSTHJQEKLLDANFTPOJEGWDTBMWETYBQBSVCDHTMJRCJJEVXJQNBIYMKWIKVDHWAZMWVDMQSMVSPZAXNGVIRCCRACCUROSDZBEXYDBYXYLZIMKFDBBKJVPWQNJYJQLHVMZWEZOSEFPRCAHUNOLAFAXUQOGBZUXYUWRHUIOPZNZEPLXFXNQPKQYIGVWLPENLKR");

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
    msg.setTimeStamp(0.5691576636782633);
    msg.setSource(38755U);
    msg.setSourceEntity(65U);
    msg.setDestination(4652U);
    msg.setDestinationEntity(15U);
    msg.seq = 12787U;
    msg.sys.assign("SQYAEHPGAAIGUOWVBJKPHUKSXHXXRZORFLURCAWORCSMKEVOXKTNRJWFFJIBRSGRWMEBLKNEWYMQ");
    msg.value = 0.4526189345697478;

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
    msg.setTimeStamp(0.6923324508379042);
    msg.setSource(11504U);
    msg.setSourceEntity(166U);
    msg.setDestination(44776U);
    msg.setDestinationEntity(178U);
    msg.seq = 50355U;
    msg.sys.assign("SCLSZGFFESRTGZWKQWWXVGRCVXBUAH");
    msg.value = 0.616059163239111;

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
    msg.setTimeStamp(0.919138151363312);
    msg.setSource(39762U);
    msg.setSourceEntity(76U);
    msg.setDestination(44288U);
    msg.setDestinationEntity(20U);
    msg.seq = 25406U;
    msg.sys.assign("USPERGDPOSXIRXZMGEOCODRATECLTJIHWXGWDKINCOLPQPLGSQDKAVUMUGSHNVZAVMNGMNAOTPFMCHKCMDTBIBCRBCMZERFXQMSGDSLNLTKWGTHERKEFCYSUYJJBTGNLQSTTBAUWVNRWKLRUFMVPWOUQUKBWZZDAQDHSYIJLALNECYOXXUDJFAPJIYGZYJHDBVVBWQHFTUEJRHQHQRYSZZ");
    msg.value = 0.12582070094829;

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
    msg.setTimeStamp(0.8480529500181893);
    msg.setSource(41746U);
    msg.setSourceEntity(242U);
    msg.setDestination(31437U);
    msg.setDestinationEntity(92U);
    msg.seq = 38466U;
    msg.sys_dst.assign("FQLSHSOOGOQJORWBTMHSBCAVPLIYUOROBZHFGPFBULCJKJRZWXTVGNQYDJSNENLIADDKWLDVGVPREKOVOQNEAJKBHMRFNGGTDTZPXOCVPJIAUKUPYLULPWGHDENYQGWENVQHFMEPZECAQJNTXJWXQLSKKKPEYMXNCTMBVIFZXLDUUBAUBKRXSJABMGXIMHVHCRYTSNFJTSZVWMOYIZYDIFSHBCZCZPWFSQXAWCYQDUAXIDITHTIREWZGUCAR");
    msg.timeout = 0.40791157170622516;

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
    msg.setTimeStamp(0.8917551406086004);
    msg.setSource(41708U);
    msg.setSourceEntity(195U);
    msg.setDestination(60345U);
    msg.setDestinationEntity(44U);
    msg.seq = 55632U;
    msg.sys_dst.assign("QMVRZPVLQMOXFCOYEKOGMXHSMZMDYDIRMEMUS");
    msg.timeout = 0.4564740787878542;

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
    msg.setTimeStamp(0.9687368947344125);
    msg.setSource(60072U);
    msg.setSourceEntity(172U);
    msg.setDestination(44127U);
    msg.setDestinationEntity(131U);
    msg.seq = 32530U;
    msg.sys_dst.assign("YVRXTZUZWYCSOSONFZLNSKVROCLBSKJNDVYGSGXESVHWYQRSWJKPLOUBQ");
    msg.timeout = 0.18451430186076245;

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
    msg.setTimeStamp(0.1854297318370598);
    msg.setSource(54193U);
    msg.setSourceEntity(220U);
    msg.setDestination(22377U);
    msg.setDestinationEntity(79U);
    msg.action = 47U;
    msg.longain = 0.37129200280164254;
    msg.latgain = 0.49812835661221955;
    msg.bondthick = 1144271280U;
    msg.leadgain = 0.9354782374177565;
    msg.deconflgain = 0.011884890809081616;

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
    msg.setTimeStamp(0.533456207581812);
    msg.setSource(12597U);
    msg.setSourceEntity(137U);
    msg.setDestination(27227U);
    msg.setDestinationEntity(49U);
    msg.action = 23U;
    msg.longain = 0.13390611524920348;
    msg.latgain = 0.6632673654323689;
    msg.bondthick = 150984582U;
    msg.leadgain = 0.6677592872821939;
    msg.deconflgain = 0.5854246973475582;

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
    msg.setTimeStamp(0.2797322098171502);
    msg.setSource(26155U);
    msg.setSourceEntity(13U);
    msg.setDestination(58780U);
    msg.setDestinationEntity(44U);
    msg.action = 49U;
    msg.longain = 0.9008589992324598;
    msg.latgain = 0.9150337733103941;
    msg.bondthick = 2799190168U;
    msg.leadgain = 0.5550089672132427;
    msg.deconflgain = 0.8747943080823217;

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
    msg.setTimeStamp(0.48952832253329837);
    msg.setSource(4175U);
    msg.setSourceEntity(163U);
    msg.setDestination(4230U);
    msg.setDestinationEntity(11U);
    msg.err_mean = 0.9372522893929158;
    msg.dist_min_abs = 0.47576514674200443;
    msg.dist_min_mean = 0.4356499746592706;

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
    msg.setTimeStamp(0.5607126239575971);
    msg.setSource(48562U);
    msg.setSourceEntity(137U);
    msg.setDestination(38691U);
    msg.setDestinationEntity(111U);
    msg.err_mean = 0.6925509945643306;
    msg.dist_min_abs = 0.5129986291212968;
    msg.dist_min_mean = 0.6212843855258019;

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
    msg.setTimeStamp(0.7396245200273294);
    msg.setSource(35346U);
    msg.setSourceEntity(110U);
    msg.setDestination(6676U);
    msg.setDestinationEntity(227U);
    msg.err_mean = 0.3147473337336143;
    msg.dist_min_abs = 0.9634658484750042;
    msg.dist_min_mean = 0.8237230307942696;

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
    msg.setTimeStamp(0.5962666236712806);
    msg.setSource(39445U);
    msg.setSourceEntity(152U);
    msg.setDestination(47890U);
    msg.setDestinationEntity(39U);
    msg.action = 59U;
    msg.lon_gain = 0.8650386535910974;
    msg.lat_gain = 0.08363724524976168;
    msg.bond_thick = 0.506815328046803;
    msg.lead_gain = 0.2915930077556934;
    msg.deconfl_gain = 0.369392635555153;
    msg.accel_switch_gain = 0.26710945582254264;
    msg.safe_dist = 0.5984507794199584;
    msg.deconflict_offset = 0.7086192063656704;
    msg.accel_safe_margin = 0.556780053539292;
    msg.accel_lim_x = 0.5076793411101688;

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
    msg.setTimeStamp(0.8010575832599673);
    msg.setSource(50119U);
    msg.setSourceEntity(206U);
    msg.setDestination(28489U);
    msg.setDestinationEntity(103U);
    msg.action = 252U;
    msg.lon_gain = 0.8000319985599851;
    msg.lat_gain = 0.38328149295425384;
    msg.bond_thick = 0.599613576258874;
    msg.lead_gain = 0.08585312464395856;
    msg.deconfl_gain = 0.006974949696046617;
    msg.accel_switch_gain = 0.8412408587255067;
    msg.safe_dist = 0.8824999417302258;
    msg.deconflict_offset = 0.5848955825850642;
    msg.accel_safe_margin = 0.11198865965651505;
    msg.accel_lim_x = 0.3822928017329912;

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
    msg.setTimeStamp(0.8933733766758214);
    msg.setSource(8565U);
    msg.setSourceEntity(214U);
    msg.setDestination(58809U);
    msg.setDestinationEntity(121U);
    msg.action = 80U;
    msg.lon_gain = 0.37528780252545135;
    msg.lat_gain = 0.34209376376839196;
    msg.bond_thick = 0.38324745676069905;
    msg.lead_gain = 0.96236848099612;
    msg.deconfl_gain = 0.5891772455123152;
    msg.accel_switch_gain = 0.4214196518159282;
    msg.safe_dist = 0.8481431709981079;
    msg.deconflict_offset = 0.753851567786551;
    msg.accel_safe_margin = 0.6966701510115224;
    msg.accel_lim_x = 0.3815791771068139;

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
    msg.setTimeStamp(0.646903303256873);
    msg.setSource(33155U);
    msg.setSourceEntity(158U);
    msg.setDestination(27297U);
    msg.setDestinationEntity(149U);
    msg.type = 194U;
    msg.op = 30U;
    msg.err_mean = 0.32436223732126757;
    msg.dist_min_abs = 0.4304972101345661;
    msg.dist_min_mean = 0.967653053329542;
    msg.roll_rate_mean = 0.9316426619027951;
    msg.time = 0.013294848109511759;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 159U;
    tmp_msg_0.lon_gain = 0.06122710650280916;
    tmp_msg_0.lat_gain = 0.3860328249763749;
    tmp_msg_0.bond_thick = 0.1695116040849587;
    tmp_msg_0.lead_gain = 0.9793235058543502;
    tmp_msg_0.deconfl_gain = 0.38384445866027217;
    tmp_msg_0.accel_switch_gain = 0.49101028387642365;
    tmp_msg_0.safe_dist = 0.2228789902187186;
    tmp_msg_0.deconflict_offset = 0.6899168330753185;
    tmp_msg_0.accel_safe_margin = 0.996533235082721;
    tmp_msg_0.accel_lim_x = 0.6356744298431893;
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
    msg.setTimeStamp(0.8510810205053178);
    msg.setSource(30305U);
    msg.setSourceEntity(247U);
    msg.setDestination(61942U);
    msg.setDestinationEntity(231U);
    msg.type = 149U;
    msg.op = 28U;
    msg.err_mean = 0.07690903422309747;
    msg.dist_min_abs = 0.101544330954904;
    msg.dist_min_mean = 0.47003592445772246;
    msg.roll_rate_mean = 0.9948235192789782;
    msg.time = 0.7182629589747902;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 212U;
    tmp_msg_0.lon_gain = 0.3062630485402552;
    tmp_msg_0.lat_gain = 0.3436715949675151;
    tmp_msg_0.bond_thick = 0.2451785177528093;
    tmp_msg_0.lead_gain = 0.5609934159981409;
    tmp_msg_0.deconfl_gain = 0.04839658920940626;
    tmp_msg_0.accel_switch_gain = 0.06450689296760126;
    tmp_msg_0.safe_dist = 0.4945652598313124;
    tmp_msg_0.deconflict_offset = 0.15034968653599146;
    tmp_msg_0.accel_safe_margin = 0.34726418824238603;
    tmp_msg_0.accel_lim_x = 0.6252162161774668;
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
    msg.setTimeStamp(0.4323827458624706);
    msg.setSource(30193U);
    msg.setSourceEntity(112U);
    msg.setDestination(47044U);
    msg.setDestinationEntity(130U);
    msg.type = 124U;
    msg.op = 187U;
    msg.err_mean = 0.103764105443923;
    msg.dist_min_abs = 0.7397859269751769;
    msg.dist_min_mean = 0.9355817197246777;
    msg.roll_rate_mean = 0.5743004869913442;
    msg.time = 0.5095960722551025;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 167U;
    tmp_msg_0.lon_gain = 0.18745068238118168;
    tmp_msg_0.lat_gain = 0.2111738560079205;
    tmp_msg_0.bond_thick = 0.5708312004060022;
    tmp_msg_0.lead_gain = 0.5710471498759259;
    tmp_msg_0.deconfl_gain = 0.8982823012573364;
    tmp_msg_0.accel_switch_gain = 0.9499316574998831;
    tmp_msg_0.safe_dist = 0.2567158530897764;
    tmp_msg_0.deconflict_offset = 0.9832092227989082;
    tmp_msg_0.accel_safe_margin = 0.3393311342972152;
    tmp_msg_0.accel_lim_x = 0.22347398413023034;
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
    msg.setTimeStamp(0.3874727435274965);
    msg.setSource(38294U);
    msg.setSourceEntity(44U);
    msg.setDestination(25588U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.5839916796478353;
    msg.lon = 0.23458059468574544;
    msg.eta = 4052293690U;
    msg.duration = 58108U;

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
    msg.setTimeStamp(0.13060043257705123);
    msg.setSource(56176U);
    msg.setSourceEntity(39U);
    msg.setDestination(25U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.09625348653283727;
    msg.lon = 0.35524342630959926;
    msg.eta = 2878544017U;
    msg.duration = 50967U;

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
    msg.setTimeStamp(0.7080676934137535);
    msg.setSource(18775U);
    msg.setSourceEntity(115U);
    msg.setDestination(36716U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.029555114705837937;
    msg.lon = 0.407475646054559;
    msg.eta = 1052408956U;
    msg.duration = 24921U;

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
    msg.setTimeStamp(0.09501232439381935);
    msg.setSource(13943U);
    msg.setSourceEntity(20U);
    msg.setDestination(45007U);
    msg.setDestinationEntity(56U);
    msg.plan_id = 49229U;

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
    msg.setTimeStamp(0.7180785628553343);
    msg.setSource(20331U);
    msg.setSourceEntity(248U);
    msg.setDestination(11744U);
    msg.setDestinationEntity(88U);
    msg.plan_id = 19833U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.7927925217699169;
    tmp_msg_0.lon = 0.7224096908114936;
    tmp_msg_0.eta = 488587411U;
    tmp_msg_0.duration = 222U;
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
    msg.setTimeStamp(2.6477051360274118e-05);
    msg.setSource(53332U);
    msg.setSourceEntity(124U);
    msg.setDestination(16656U);
    msg.setDestinationEntity(45U);
    msg.plan_id = 14704U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.4967175675163388;
    tmp_msg_0.lon = 0.804770411699705;
    tmp_msg_0.eta = 690230718U;
    tmp_msg_0.duration = 55260U;
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
    msg.setTimeStamp(0.04691931138099714);
    msg.setSource(40280U);
    msg.setSourceEntity(4U);
    msg.setDestination(8253U);
    msg.setDestinationEntity(93U);
    msg.type = 174U;
    msg.command = 2U;
    msg.settings.assign("MXLPEKYQJOBLJGWWYSFERBLNDDDOLVFMTQTOBVBIVICHBCDT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 34974U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8425490982134137;
    tmp_tmp_msg_0_0.lon = 0.0788033766402001;
    tmp_tmp_msg_0_0.eta = 1527882025U;
    tmp_tmp_msg_0_0.duration = 48718U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NDAFABHUHVLEDRSFAPGGJXXQKRVTWEZDGSWJHHZHCJVYYCWKWNLILFFPTVGJGMDWNBTMCJOADNHQKEBMOVBGRSGZUXBGNPBLYQCIUTBJUOMEQAWOHEFEVGYTOYIAZRFSCVHHTXJIKDIUHZQIZTMXQDVFOUPQMENTZFPMRRMWOUUSWU");

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
    msg.setTimeStamp(0.2743519037067935);
    msg.setSource(55825U);
    msg.setSourceEntity(154U);
    msg.setDestination(59333U);
    msg.setDestinationEntity(101U);
    msg.type = 47U;
    msg.command = 234U;
    msg.settings.assign("UGBSXQGIWKPMDRRECFTLPQHUOCKZUHCNDDJBCSWLJEJTBBPXVYCVVGVKXNYXAGMHVVJNZZPRESDKXMJBBDCQZOSLHYRTIYBOFLLYAXLKJFGOASDFTJEWMVWQFWOUUZHHWZTPJBFDEKAVGACDMBWIYILTXMRECUQGMTXANIZUWESZQGGHOWHYKQXNMENBYEOCNFFQIUIWLVDPPJDHOFELFQJY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 351U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("HYRMAJTLGUIKAEBHUWYMBXTLWUNJQWSTRLQBFSLKDUZHOHESPGUURRPPTWPCNJCDMKJBQNQVRCNMGHAEVKDJLLXXHMYBPFNDWIYGSEBDLDUVVZRMDGJAQAQNVGZMEPNDYAXZOZHTIOJTIYGTOAOSXKUIGKVXXRTWYHKBXVQZYEEKCVWPRIIUCSCLNQZIHESOBAKPFRYPOBLJFAJHPTSMMBCMWFZ");

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
    msg.setTimeStamp(0.01205798599327812);
    msg.setSource(40359U);
    msg.setSourceEntity(139U);
    msg.setDestination(43236U);
    msg.setDestinationEntity(221U);
    msg.type = 105U;
    msg.command = 211U;
    msg.settings.assign("YBPDOXFLMWQQUEJNSGYHTXDLLKVDBQFKAQHRAKDDLASNLVIJUMKZNQMHBOVUQHUUWVCITLJRZFQWWYNUGAHCDGFEXMVCFKRENOCNBYULWIZXPZGYGPCWWROSJSQUXTXCEAJIKPMJWLODZPTIEJOJGSJNW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 50264U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.21829300134567042;
    tmp_tmp_msg_0_0.lon = 0.09051423146360826;
    tmp_tmp_msg_0_0.eta = 3084468460U;
    tmp_tmp_msg_0_0.duration = 5277U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ULEXPYUCVIUKWZVOAQLFUSITPOUTRQHYVKDQZARAKOLYEJEGQBKMBYDKMMQFGLBMGUZHQZCEOXDEHWIXWJ");

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
    msg.setTimeStamp(0.919025552245852);
    msg.setSource(32378U);
    msg.setSourceEntity(163U);
    msg.setDestination(62249U);
    msg.setDestinationEntity(0U);
    msg.state = 115U;
    msg.plan_id = 47726U;
    msg.wpt_id = 227U;
    msg.settings_chk = 49185U;

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
    msg.setTimeStamp(0.38483114106392247);
    msg.setSource(55674U);
    msg.setSourceEntity(244U);
    msg.setDestination(18634U);
    msg.setDestinationEntity(221U);
    msg.state = 107U;
    msg.plan_id = 24568U;
    msg.wpt_id = 208U;
    msg.settings_chk = 52598U;

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
    msg.setTimeStamp(0.1250694087866);
    msg.setSource(40360U);
    msg.setSourceEntity(104U);
    msg.setDestination(13315U);
    msg.setDestinationEntity(18U);
    msg.state = 150U;
    msg.plan_id = 33262U;
    msg.wpt_id = 159U;
    msg.settings_chk = 24988U;

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
    msg.setTimeStamp(0.052932203392392796);
    msg.setSource(2931U);
    msg.setSourceEntity(95U);
    msg.setDestination(21388U);
    msg.setDestinationEntity(193U);
    msg.uid = 165U;
    msg.frag_number = 179U;
    msg.num_frags = 252U;
    const signed char tmp_msg_0[] = {53, -107, 125, 79, -90, 104, -44, 91, 57, 113, -68, -66, 50, 95, 108, 96, -115, -4, -37, 88, 14, -43, -101, 79, -7, -116, 79, 18, 71, 81, -5, -101, -54, -29, -53, 89, 94, -101, -123, -37, -38, 74, 47, -46, -32, -46, -78, -37, -11, 123, 22, 81, 91, -79, 113, -90, 74, -35, -86, -2, -63, 12, -23, 9, -118, 63, -108, -123, 40, -93, 22, -31, 59, -62, 28, 92, 123, -93, -80, 37, -24, -97, -74, 44, 114, 88, -43, -94, 6, 120, -89, -123, 91, -123, 0, 25, 70, -93, -83, -89, 109, 39, -79, -66, -18, 55, -1, -79, -125, 110, -47, -3, 6, 65, -88, -128, -68, 96, 3, -71, -70, 17, -75, -47, 84, 95, -53, 88, -116, 104, 122, 35, 112, -54, -92, 84, -128, -55, -49, 54, 6, -28, 91, -118, -26, 21, 18};
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
    msg.setTimeStamp(0.37509885465124093);
    msg.setSource(1817U);
    msg.setSourceEntity(144U);
    msg.setDestination(2589U);
    msg.setDestinationEntity(79U);
    msg.uid = 182U;
    msg.frag_number = 22U;
    msg.num_frags = 36U;
    const signed char tmp_msg_0[] = {-96, 27, -50, -8, -76, 91, 120, 32, 8, 19, 56, -5, 69};
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
    msg.setTimeStamp(0.8849052385971516);
    msg.setSource(59400U);
    msg.setSourceEntity(224U);
    msg.setDestination(3247U);
    msg.setDestinationEntity(168U);
    msg.uid = 209U;
    msg.frag_number = 195U;
    msg.num_frags = 207U;
    const signed char tmp_msg_0[] = {-5, 124, -65, -61, 104, -117, 57, 63, 125, 56, 18, 76, 30, 116, -61, -104, -24, 59, 3, -69, 33, -32, -1, 93, -97, -10, 48, 94, 102};
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
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.5445773006040167);
    msg.setSource(18408U);
    msg.setSourceEntity(151U);
    msg.setDestination(5227U);
    msg.setDestinationEntity(53U);
    msg.uid = 102U;
    msg.op = 21U;
    msg.frag_ids.assign("EJAIYCQRMDOIQSRVGRGJUBYCUZAWBFKYSL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.2016649592776648);
    msg.setSource(56605U);
    msg.setSourceEntity(115U);
    msg.setDestination(49868U);
    msg.setDestinationEntity(35U);
    msg.uid = 181U;
    msg.op = 185U;
    msg.frag_ids.assign("SJPJQQOLNGEZWTJKHZLONPHUDIGBSKQNEFVITDXNYAJFWUJXLKKBYLCFEUQCDPHMUKBXSDTXIBFSOGRFMYBGKHLPGPSPRCGTUXOWUAFEZIURQLXCYUABVIEDDNFVRFKONDSJGVWSACRIKCIXWDVRGLJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.16282309535284867);
    msg.setSource(21598U);
    msg.setSourceEntity(106U);
    msg.setDestination(57921U);
    msg.setDestinationEntity(142U);
    msg.uid = 138U;
    msg.op = 153U;
    msg.frag_ids.assign("BWSYQGFUEURXUGBHFSEKHWIUZQNDIATIYBTYKORFMATRMSDQHSREANJGRXMYPAQSGWWEPBYOWAYEHINHMGULVVIACWYSVM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.1550182273552353);
    msg.setSource(60892U);
    msg.setSourceEntity(71U);
    msg.setDestination(51230U);
    msg.setDestinationEntity(124U);
    msg.content_type.assign("ELBKVDBKVTFAERUXKYCYUMOCKQLGZVGLKFAXIWEAGHKPG");
    const signed char tmp_msg_0[] = {-91, -29, -92, 119, -37, 105, -30, 74, 44, 85, -37, 74, -16, 110, -31, 63, -50, 22, 55, 105, -74, -55, 21, -120, -13, 73, -16, 110, 1, 35, -5, 104, -87, 29, -85, 113, 14, -94, -118, 93, 123, 28, 48, -46, 10, 109, -2, 14, -14, 87, 3, -44, -114, 49, -59, 3, -89, -91, 45, -29, 28, -78, -87, -106, -115, -5, -105, 37, 19, -1, -84, 107, -25, -19, -113, -23, 29, 76, -70, 69, -97, -121, -59, -11, -33, 97, -28, 120, 84, 40, 44, 95, -127, 106, 69, -11, 42, 25, 125, -25, -38, 96, 59, 43, 2, -56, 104, 123, 78, 108, 26, -81, 10, -42, -85, -45, 21, -89, 44, 34, -123, 42, 10, -115, 14, -4, 98, 60, -99, 69, 53, 93, 87, -80, 119, 117, 57, -70, -69, 52, 110, -116, 71, -57, 84, 13, 81, -7, -42, 93, -3, -1, 31, -21, -128, 95, 47, -119, -52, -64, 113, -18, -99, 61, -99};
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
    msg.setTimeStamp(0.6085118638131102);
    msg.setSource(47731U);
    msg.setSourceEntity(195U);
    msg.setDestination(29127U);
    msg.setDestinationEntity(117U);
    msg.content_type.assign("NMPTXURXSZCLAODVRKWIJEALVRKJDUWOGCHYZBKYZZQQZIBLENVUBIBSPRGNFIWFXJPVCMWVMBJOIOEXTJQGRLAYTQYFQGMHSQUVXFNWAEUVTTMEJMQHATCHFBNNFRDIEQSZTXPJIWAU");
    const signed char tmp_msg_0[] = {-91, -67, -101, 47, -91, -41, 75, -26, -35, 48, 77, 124, 110, 94, 99, -89, -72, -72, 89, -24, -103, -52, 124, -9, -56, -16, 20, 75, -10, 125, -106, 110, 93, -114, -78, -100, 42, 108, -104, -37, 105, 2, -15, -127, -3, 107, -18, -53, 115, -21, -91, -78, 3, -28, -1, 113, 7, 112, -107, -44, 23, 28, 85, 108, -4, -123, 6, 37, -17, 71, -122, -90, 45, 93, 61, -59, 125, 120, -32, 17, 41, -63, -58, -127, -55, 98, 68, -35, -88, -97, -65, -112, -36, 54, -45, -18, -75, -79, 31, -8, -59, 17, -120, 93, 28, -68, -47, 90, -48, -41, -68, 15, -38, -30, -94, -27, 84, -69, 56, -101, -1, -105, -82, -37, -25, -82, -51, -105, 108, -55, -112, 18, -3, 59, -74, 24, -75, -1, -51, 116, 5, 90, 124, 40, -44, -49, 67, -86, 18, -45, -106, 108, 64, -29, -51, 52, -3, 53, 58, 47, -105, 54, 64, 22, -125, -65, 100, -60, 66, -97, -67, 28, -10, -45, -79, -66, 0, -79, 12, 121, -37, 49, -24, -48, 22, 62, -27, -60, -54, 115, -67, 13, -23, -81, 72, -37, -126, -10, -126, 68, 78, -111, 31, 54, 90, -69, 36, 30, 11, -115, -89, -61, -74, -34, 48, 44, 126, 46, 93, -77, 16, -44, -124, 93, -48};
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
    msg.setTimeStamp(0.2974410279453923);
    msg.setSource(62209U);
    msg.setSourceEntity(44U);
    msg.setDestination(39668U);
    msg.setDestinationEntity(202U);
    msg.content_type.assign("XTGRATANSLPKBDLMKXHMACXXEQJUWBGDATQQFR");
    const signed char tmp_msg_0[] = {-50, -127, 31, 94, 103, 67, -128, 102, -12, 94, 19, -64, 5, -23, -15, -116, 55, -81, 2, 48, 110, -16, 14, 29, -122, -6, -37, -88, 93, 30, -4, 26, -25, 64, 7, 24, -108, 7, 8, -106, -128, 86, -127, 23, -66, -60, 53, -125, 26, -111, -92, 19, -112, 50, 99, -77, -62, 114};
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
    msg.setTimeStamp(0.4299099437736851);
    msg.setSource(30987U);
    msg.setSourceEntity(44U);
    msg.setDestination(5887U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.8541250468023069);
    msg.setSource(45792U);
    msg.setSourceEntity(164U);
    msg.setDestination(44912U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.6925067501210098);
    msg.setSource(39426U);
    msg.setSourceEntity(59U);
    msg.setDestination(11705U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.45296831268054405);
    msg.setSource(1653U);
    msg.setSourceEntity(93U);
    msg.setDestination(49647U);
    msg.setDestinationEntity(77U);
    msg.target = 33341U;
    msg.bearing = 0.34050580188865;
    msg.elevation = 0.42046328240207187;

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
    msg.setTimeStamp(0.7551716614275309);
    msg.setSource(48925U);
    msg.setSourceEntity(245U);
    msg.setDestination(33106U);
    msg.setDestinationEntity(14U);
    msg.target = 29816U;
    msg.bearing = 0.4611808505758359;
    msg.elevation = 0.31172342815631626;

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
    msg.setTimeStamp(0.6875807833836627);
    msg.setSource(34500U);
    msg.setSourceEntity(34U);
    msg.setDestination(7198U);
    msg.setDestinationEntity(236U);
    msg.target = 37325U;
    msg.bearing = 0.0678782973249148;
    msg.elevation = 0.666954597299758;

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
    msg.setTimeStamp(0.5323743921712132);
    msg.setSource(49140U);
    msg.setSourceEntity(157U);
    msg.setDestination(29140U);
    msg.setDestinationEntity(227U);
    msg.target = 30642U;
    msg.x = 0.940363660378335;
    msg.y = 0.8422917378091415;
    msg.z = 0.6141315150902193;

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
    msg.setTimeStamp(0.1929744853506855);
    msg.setSource(9741U);
    msg.setSourceEntity(49U);
    msg.setDestination(42860U);
    msg.setDestinationEntity(52U);
    msg.target = 32674U;
    msg.x = 0.07412245346214175;
    msg.y = 0.527462934008668;
    msg.z = 0.3416435391285769;

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
    msg.setTimeStamp(0.8061084793566476);
    msg.setSource(62955U);
    msg.setSourceEntity(90U);
    msg.setDestination(22360U);
    msg.setDestinationEntity(248U);
    msg.target = 10431U;
    msg.x = 0.15223868846622057;
    msg.y = 0.9228766693314574;
    msg.z = 0.3371007242932982;

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
    msg.setTimeStamp(0.9271461913463309);
    msg.setSource(10391U);
    msg.setSourceEntity(201U);
    msg.setDestination(25384U);
    msg.setDestinationEntity(244U);
    msg.target = 58505U;
    msg.lat = 0.5769087532034665;
    msg.lon = 0.5576855482171611;
    msg.z_units = 182U;
    msg.z = 0.8353982112107146;

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
    msg.setTimeStamp(0.5462225000228942);
    msg.setSource(36858U);
    msg.setSourceEntity(233U);
    msg.setDestination(20810U);
    msg.setDestinationEntity(143U);
    msg.target = 38005U;
    msg.lat = 0.8903344141938356;
    msg.lon = 0.11565634586989115;
    msg.z_units = 173U;
    msg.z = 0.09545657834658583;

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
    msg.setTimeStamp(0.09196036469711932);
    msg.setSource(53539U);
    msg.setSourceEntity(13U);
    msg.setDestination(7005U);
    msg.setDestinationEntity(25U);
    msg.target = 39697U;
    msg.lat = 0.6383198963177701;
    msg.lon = 0.25775237120646166;
    msg.z_units = 152U;
    msg.z = 0.6804369562811982;

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
    msg.setTimeStamp(0.03760594536494288);
    msg.setSource(11399U);
    msg.setSourceEntity(226U);
    msg.setDestination(9142U);
    msg.setDestinationEntity(103U);
    msg.locale.assign("DFSRYPHXUKZJALBDGODIANBHZAFAWDTJRHBCAWRWIEPCNFLGTDVQLUENIYIRZMKYMCEMFTPIXLYVSYPTJLBKIVZDOJWSHFKFSDOEEJNTYYVWSAJUBUNRHKMWIUIEXSDZXHKUGNYSXMZUXYSRDYVVAKVQZAMRTENQJUQWBNHQBSKCQFNHEGJVHCGTMUQPQLMFWOGZRCGACJO");
    const signed char tmp_msg_0[] = {-62, 93, -95, -2, -21, -86, 60, 30, -102, -52, 15, -7, 65, 74, 44, 69, 27, -8, 35, 80, -105, -125, 115, -55, -99, -74, 29, 104, 123, 61, -31, 71, -30, -48, -98, -2, 109, 87, -112, -53, -83, -14, 34, -35, 76, -56, 118, 96, 0, -26, 100, 41, -2, 113, 98, -52, 80, 60, -16, 123, 74, -3, -123, 9, -95, -28, -102, 100, 86, -2, 61, 47, 22, 51, 125, 1, 95, 20, -70, -82, -87, -127, 82, -27, 100, -60, 106, 15, 29, 117, 104, -99, -118, -103, -74, 85, -2, -9, 81, -83, 49, -95, 30, 115, 100, -81, 105, -39, 102, -19, -37, -62, 103, 79, 61, -21, 73, -68, 104, -109, -123, 50, -128, -128, 25, -6, -38, -126, 68, -40, -99, 5, 26, 92, -3, 72, -8, 39, -1, -100, 79, -17, 49, 92, -114, 107, 115, -67, 20, 99, -125, -56, 108, -105, 124, 98, 41, 77, -98, -44, -58, 73, -32, 39, -17, -126, -27, 61, -111, -99, -28, 42, 69, 77, -123, -50, 88, -22, 112, 97, 79, 91, 121, 7, 117, -53, -2, -67, 115, -93, -106, 61, 67, 96, -2, 16, 8, 55, -26, 113, -51, -86, -93, -4, -107, -16, 55, -51, -102, -100, 19, 24, 70, -119, -123, -5, -106, 29, -116, 99, -100, -54, 74, 52, -108, 1, -62, -52, 21, 55, 49, 122, 36, -90};
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
    msg.setTimeStamp(0.7376347405762975);
    msg.setSource(17495U);
    msg.setSourceEntity(158U);
    msg.setDestination(49149U);
    msg.setDestinationEntity(17U);
    msg.locale.assign("XXLYFNQOHMRVJERBIMIWHHIQKTKZEUDMXWBVNORXUBONULYIVZRGDDLUFKQZULYATPQGCAJVJGQPRLTBEFAJUGBSEAFSWGEZAVTVUDJHPAMQWXNQUSRMTSGLHCXOJTOFHKLJO");
    const signed char tmp_msg_0[] = {-128, -36, -18, -32, -77, -2, 103, -61, -36, -97, 35, 64, 101, 29, 49, 41, 26, -94, -64, 9, -24, -99, 86, -128, -4, -88, 83, -17, 96, 106, -91, 45, 124, -89, -63, -60, -56, 75, -123, -47, -32, -45, 22, -59, 66, 83, -69, -21, -31, -46, -86, -58, -28, -83, -64, 104, 74, 19, 35, -6, -83, -70, -42, -8, 77, 64, 44, -77, 19, 36, -79, 28, -24, 47, -78, 3, -51, -99, 101, 39, -80, 43, -86, 27, 79, -94, 41, 33, 5, -1, 53, 89, -60, -20, -91, -128, 102, 75, 10, 85, 14, 73, -81, -51, 37, 24, -113, 22, -115, 39, -4, -102, 35, 18, -78, 60, 79, 81, 80, 126, -92, -126, 125, 103, 99, 74, -60, 99, 31, 55, 115};
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
    msg.setTimeStamp(0.19278797553676763);
    msg.setSource(30984U);
    msg.setSourceEntity(73U);
    msg.setDestination(21085U);
    msg.setDestinationEntity(102U);
    msg.locale.assign("MAYGROTOCPNDJFCSTTVWOFFSHYAHUVUBWJXSSDAMGEJPNMBZGKARLQACTZCYYHWNJHWRSSOJFIOBVOIIMRDOBZGBPDYHUCNTFHTQFEYFKXIXMGLEHPAUNKEMCJLCMUCZMIOBQUDBHSEPQOVQXFDLVPBRKUWIGGXKIRRLTQNNZBCSKQWYEVPFVPQIZXNCKGRKTZEKVOUMZRULG");
    const signed char tmp_msg_0[] = {75, -87, -109, 47, 8, 46, -112, -128, -53, 103, 105, -18, 58, -72, -25, 113, -35, 30, -116, 86, 28, 5, 4, 92, -29, 65, -105, 46, 85, -87, -20, -100, -73, 80, 81, -81, -121, -117, -12, -1, -32, -79, 116, 14, 69, 13, -85, 103, 39, -24, 16, -106, -21, 109, 60, 99, -123, -91, -53, 29, 87, 72, 96, 82, 113, -16, -54, 32, 17, 84, -54, -18, 52, -53, 48, 13, -81, 64, -15, -66, -6, -10, 48, 114, 56, -32, 3, -85, -63, 73, 26, -22, -95, -39, -86, 25, 121, -45, 43, -115, -104, 98, 95, 67, 44, -82, 82, -47, -64, -57, 102, -21, -12, 108, 56, 62, 78, 76, 12, 121, 17, -84, -41, -72, 88, -49, -122, -100, -58, -47, 10, 77, 100, 58, -120, -14, 34, 97, 73, 78, -52, -78, -73, 107, -94, 97, -50, 52, 10, 108, 66, 56, 125, -38, -57, -115, -102, 60, 63, 54, 103, 13, 113, -63, -85, -91, 34, 119, 113, 60, -43, -7, -102, 118, 73, -101, 87, 46, 24, 63, 83, 93, -14, 82, -18, -114, 86, 84, -17, -80};
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
    msg.setTimeStamp(0.9386613939609733);
    msg.setSource(7725U);
    msg.setSourceEntity(94U);
    msg.setDestination(48519U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.5112431778411294);
    msg.setSource(14213U);
    msg.setSourceEntity(236U);
    msg.setDestination(63752U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.07688759949417734);
    msg.setSource(3936U);
    msg.setSourceEntity(22U);
    msg.setDestination(64178U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.20091647276004854);
    msg.setSource(31961U);
    msg.setSourceEntity(85U);
    msg.setDestination(49355U);
    msg.setDestinationEntity(80U);
    msg.camid = 98U;
    msg.x = 50876U;
    msg.y = 6780U;

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
    msg.setTimeStamp(0.05573865589144733);
    msg.setSource(48654U);
    msg.setSourceEntity(210U);
    msg.setDestination(47031U);
    msg.setDestinationEntity(64U);
    msg.camid = 52U;
    msg.x = 11538U;
    msg.y = 34610U;

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
    msg.setTimeStamp(0.41610095909835243);
    msg.setSource(17576U);
    msg.setSourceEntity(152U);
    msg.setDestination(38530U);
    msg.setDestinationEntity(192U);
    msg.camid = 144U;
    msg.x = 14248U;
    msg.y = 56837U;

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
    msg.setTimeStamp(0.6001477907060073);
    msg.setSource(65447U);
    msg.setSourceEntity(174U);
    msg.setDestination(38076U);
    msg.setDestinationEntity(84U);
    msg.camid = 27U;
    msg.x = 49065U;
    msg.y = 29865U;

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
    msg.setTimeStamp(0.7816645400195976);
    msg.setSource(59187U);
    msg.setSourceEntity(242U);
    msg.setDestination(60795U);
    msg.setDestinationEntity(145U);
    msg.camid = 198U;
    msg.x = 29130U;
    msg.y = 18146U;

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
    msg.setTimeStamp(0.8013805709310751);
    msg.setSource(10692U);
    msg.setSourceEntity(45U);
    msg.setDestination(16290U);
    msg.setDestinationEntity(98U);
    msg.camid = 49U;
    msg.x = 64145U;
    msg.y = 46074U;

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
    msg.setTimeStamp(0.4522563461022857);
    msg.setSource(46288U);
    msg.setSourceEntity(231U);
    msg.setDestination(53043U);
    msg.setDestinationEntity(54U);
    msg.tracking = 25U;
    msg.lat = 0.756790534536483;
    msg.lon = 0.617177594727091;
    msg.x = 0.26917117883546515;
    msg.y = 0.2966222288297079;
    msg.z = 0.020810902684149202;

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
    msg.setTimeStamp(0.5781476233215062);
    msg.setSource(50015U);
    msg.setSourceEntity(127U);
    msg.setDestination(49816U);
    msg.setDestinationEntity(227U);
    msg.tracking = 54U;
    msg.lat = 0.78112290573688;
    msg.lon = 0.39492332274914743;
    msg.x = 0.0070853549419290784;
    msg.y = 0.3489318990383755;
    msg.z = 0.6285755806436006;

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
    msg.setTimeStamp(0.35102226377830104);
    msg.setSource(45164U);
    msg.setSourceEntity(87U);
    msg.setDestination(42980U);
    msg.setDestinationEntity(243U);
    msg.tracking = 26U;
    msg.lat = 0.12820004481216674;
    msg.lon = 0.7251851919480352;
    msg.x = 0.28991413295438373;
    msg.y = 0.7693455904108161;
    msg.z = 0.09630595551197119;

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
    msg.setTimeStamp(0.11636893180140673);
    msg.setSource(58934U);
    msg.setSourceEntity(234U);
    msg.setDestination(65191U);
    msg.setDestinationEntity(24U);
    msg.target.assign("IVXVZZPIWRDBGNXCKVUGPM");
    msg.lbearing = 0.5019971169985871;
    msg.lelevation = 0.05419595129824528;
    msg.bearing = 0.33197062755991547;
    msg.elevation = 0.2721257383427359;
    msg.phi = 0.5637389953580013;
    msg.theta = 0.14849495635259213;
    msg.psi = 0.20385830927186244;
    msg.accuracy = 0.3661339132438456;

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
    msg.setTimeStamp(0.2581909520626534);
    msg.setSource(58520U);
    msg.setSourceEntity(157U);
    msg.setDestination(53761U);
    msg.setDestinationEntity(135U);
    msg.target.assign("XHBMFJMOEUBHQYVUMNDKPNCHWTTGWOTCKKCNUMHECOBZCQGKLQKDOXIXYREOZZQXTKSWIDQJSGHIVODDVXOHRYPXZANXUPARISDIRFLPTUMTENIVYXAHKAHGGJVBIJXWFBYNHZPZVSNCIVQCOSLPKFJNRBPTMTJPQGLCUALYSEUDSBSBDAVNTMLFJYZZGGZRJEOCPEEDERHXWJNASWRWFF");
    msg.lbearing = 0.30623623008574086;
    msg.lelevation = 0.455967125754015;
    msg.bearing = 0.2799349660709325;
    msg.elevation = 0.6841243977046051;
    msg.phi = 0.7025053983337164;
    msg.theta = 0.3774843972213525;
    msg.psi = 0.17459253667882668;
    msg.accuracy = 0.09888960027846283;

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
    msg.setTimeStamp(0.9364502480097207);
    msg.setSource(30282U);
    msg.setSourceEntity(130U);
    msg.setDestination(57201U);
    msg.setDestinationEntity(137U);
    msg.target.assign("PYSZTWRPHHFJIUDOPTLTZGXXHOCQPBMJURWKLEORGSCTQJXLVBKCZPISAXRFUDKHAPGTWNIYWEKBXUCSBOIGIQOSACHHDUYXLMWAQZTGVHVEWLJYPWRVJIHJKDMFKTQUTEQIWRSBFRQQXJQTKFDUEZNLLBFDMCXNOCZZFA");
    msg.lbearing = 0.6808123219801878;
    msg.lelevation = 0.5183473427594699;
    msg.bearing = 0.9430178435943348;
    msg.elevation = 0.8616387485129057;
    msg.phi = 0.5890256602551598;
    msg.theta = 0.8039887982128988;
    msg.psi = 0.5874115688284243;
    msg.accuracy = 0.6050463110337709;

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
    msg.setTimeStamp(0.4199249920014444);
    msg.setSource(10645U);
    msg.setSourceEntity(183U);
    msg.setDestination(7470U);
    msg.setDestinationEntity(114U);
    msg.target.assign("GIIOKXQQQHGKSACXFDFWXFHHHJMNMVCBNRXBAWJIFYYDIOTLYRMZDMPEALIVGNEILLFVLZMERVLZZUPYGRQYYQJRGDFDIDMNOVSFTOBMPIPZTWBNOJCCXMSXXJAOPYAKNZOKFCTMYLAHBABAITJBYRGXBEECKSCCHOSUUFPTGQQWUCK");
    msg.x = 0.03199117588706846;
    msg.y = 0.6716034171414865;
    msg.z = 0.14983123717488256;
    msg.n = 0.885941898620852;
    msg.e = 0.9409724651443767;
    msg.d = 0.6006299102682272;
    msg.phi = 0.9185775666373028;
    msg.theta = 0.11204724124926413;
    msg.psi = 0.6740763840890996;
    msg.accuracy = 0.5102498036023352;

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
    msg.setTimeStamp(0.37736804626430953);
    msg.setSource(28853U);
    msg.setSourceEntity(193U);
    msg.setDestination(39595U);
    msg.setDestinationEntity(58U);
    msg.target.assign("DMYERVCACAMUPKISDYPAYBAPJKXDVOPJLTTVZJJXHEGYWMBTGMKQRMABCJTXRFQCKOAOQOSGOWHTEMRVLISAUCRUOIPBRIAFLLQDEUDYZIIJWYUIZLPMWXFOETAN");
    msg.x = 0.28293472309123757;
    msg.y = 0.265738701980621;
    msg.z = 0.3963986591480335;
    msg.n = 0.27673068120650535;
    msg.e = 0.6186436791113299;
    msg.d = 0.5886089974448255;
    msg.phi = 0.2608642546394665;
    msg.theta = 0.5446769269724981;
    msg.psi = 0.7293094433108004;
    msg.accuracy = 0.0958532764304898;

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
    msg.setTimeStamp(0.67619933217201);
    msg.setSource(45266U);
    msg.setSourceEntity(163U);
    msg.setDestination(17837U);
    msg.setDestinationEntity(163U);
    msg.target.assign("CXNZJPWFYZIHIEWHUFAYKYPZEVXTKVSRYUJNOHIKEVWTCYSUDFGDDJSLQKLFXYBATIOAUDERDAVQMIGBDEWEVMLUCUOTAQEVRCOXPOZJMIOBBLHKPDERQSUALOBXZYISZYBPNWDPMDFKEHQTPCXHSICWGZGSCHBFFBMCMIMZRURJJXPGHPYGIHVRFTSWQOLZXAZKLGJWVLDAGUOFRLJNTWCAX");
    msg.x = 0.11541854955102515;
    msg.y = 0.4011780101952068;
    msg.z = 0.6476562810822689;
    msg.n = 0.985841700534378;
    msg.e = 0.09497661723079454;
    msg.d = 0.9275819671689188;
    msg.phi = 0.7417703928503817;
    msg.theta = 0.09725556785233525;
    msg.psi = 0.15132261930394697;
    msg.accuracy = 0.7527794660409758;

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
    msg.setTimeStamp(0.5112136174954601);
    msg.setSource(58030U);
    msg.setSourceEntity(91U);
    msg.setDestination(54585U);
    msg.setDestinationEntity(213U);
    msg.target.assign("EIWKZKXEBSYSAKIXWUZRPHGDJISOWWLJVUQOOXTDNOOCAQTLARXHZDVJXIDIIUKGUJINGYEDORDFLHFGMMMZJLJHWGPWUPIHYFVRSXPJBBLPYATZQQJNIGXKYSVVAYACVEELBNJNVDZQCABGCPNCUTSDCFUMGRHLCFQGNZSMDEXKOPSWPZWFNAWBGZHROFBXESQXHAKREMYHFNDCTVLYLKCFBZOTUQMRPUFEYQMT");
    msg.lat = 0.9837392653711374;
    msg.lon = 0.9155157761193824;
    msg.z_units = 85U;
    msg.z = 0.3741837182306209;
    msg.accuracy = 0.5711213371668087;

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
    msg.setTimeStamp(0.722138561373136);
    msg.setSource(44541U);
    msg.setSourceEntity(177U);
    msg.setDestination(28638U);
    msg.setDestinationEntity(39U);
    msg.target.assign("LBBNZDTSFQCDFCQLDCWNKNXOWQCZYJSZTBYAHVMFRLVGUIFKRDVGXPPOWFIABQQTNHUXWBMWCKNTODBANVRNNDSOZAJAXRLGZFQKKRIXYHBDOLUSPCHWPQHHKXQEOGMZRFTDNEAETJTOEDEOCJLGFNZRMZGTYWJMEIWVEDUKMQSIMAJZZTLA");
    msg.lat = 0.042977733131277174;
    msg.lon = 0.16509057942789485;
    msg.z_units = 204U;
    msg.z = 0.611548319396613;
    msg.accuracy = 0.2352260359329471;

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
    msg.setTimeStamp(0.6986241762409499);
    msg.setSource(45870U);
    msg.setSourceEntity(26U);
    msg.setDestination(45929U);
    msg.setDestinationEntity(172U);
    msg.target.assign("LHEWDNZCHVWRPJPEITLMLMLOMZVHFDTIFGSBTPAWJKMRREDIPUGKYVYOZFQPLPFRCEUKDNJTHJFKTILEXGXSPBHIXHOTGOQVBKUSXRRJYOZAHSRWXKRTAIBYQXDITFOHDVFVYPYQJDYVZNASEVVXLWZLFVTROLSUSGYAXKZOQBENTQCBSECJEXMUNNARUNDFGJLXJMCWUKICKESWDQQYOWSFAUBPCZDWCWHZAQMCUIJHG");
    msg.lat = 0.41686778574033456;
    msg.lon = 0.3347601736591258;
    msg.z_units = 22U;
    msg.z = 0.22686555452895318;
    msg.accuracy = 0.6252918907768633;

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
    msg.setTimeStamp(0.21456351340915947);
    msg.setSource(12555U);
    msg.setSourceEntity(109U);
    msg.setDestination(19900U);
    msg.setDestinationEntity(210U);
    msg.name.assign("YFCUDMUWHTIDOONEQLVHLSURCWHDXPVZYSZDJDFGAPKEIKFAQNWSPWRVDOIDRCWOXVIQLVLEMBBABQWXBQYXXCKTEXNQUCKEGGQIWNIUPUVRIULLZSPXYZAKOPTTPRWTTEJMORKGDENWHPLHRWNUQAGKMLRVCNJYFKIZASO");
    msg.lat = 0.12964300200486745;
    msg.lon = 0.7558464629143565;
    msg.z = 0.8624871573278888;
    msg.z_units = 37U;

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
    msg.setTimeStamp(0.35862256560951966);
    msg.setSource(32328U);
    msg.setSourceEntity(2U);
    msg.setDestination(53815U);
    msg.setDestinationEntity(197U);
    msg.name.assign("JARIUXPEXJSKLYNDANAKPSPOQWTRXZPIHHDEVMPLSVKYUBINTTLKS");
    msg.lat = 0.049111669837430094;
    msg.lon = 0.06369122990411635;
    msg.z = 0.0758003125526463;
    msg.z_units = 193U;

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
    msg.setTimeStamp(0.04749052441588564);
    msg.setSource(36117U);
    msg.setSourceEntity(56U);
    msg.setDestination(10614U);
    msg.setDestinationEntity(154U);
    msg.name.assign("CFZCWUIMSWWYERFWARUWBNKTUNHGSRJUXVULVPXACDHHDTZXMWMGJKPGRMYIQKDFUDIMBLNVYGOZBTHSINWIQXPJCBJQZPJJRLCFFV");
    msg.lat = 0.9567697684288147;
    msg.lon = 0.9578331933011611;
    msg.z = 0.2587626502493545;
    msg.z_units = 78U;

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
    msg.setTimeStamp(0.608638292896263);
    msg.setSource(62255U);
    msg.setSourceEntity(212U);
    msg.setDestination(54801U);
    msg.setDestinationEntity(1U);
    msg.op = 59U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("BKIUMJUTGKLXLDVGWIDMFPOXMQNNSFLWSPQKSTYOUFIQLJREMTTEKGZVNKEEWZSIRGPFDEOGGPKADDOCIHRTGJZAETNWHZUQTIBFYEWWBPYBVHCSCJRJAZJUYJQRUAUMRHBFEXDFQYHAPYLWHUHAPDFFOCTXFCVBGKZNMQNCJYPWPISQNLXXMYXNKLJGLSMESUQXUBWOICZCSPOIRODYMKJLRTHB");
    tmp_msg_0.lat = 0.8607473138473525;
    tmp_msg_0.lon = 0.2853734794882562;
    tmp_msg_0.z = 0.9423559467471179;
    tmp_msg_0.z_units = 103U;
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
    msg.setTimeStamp(0.4960409639245975);
    msg.setSource(18732U);
    msg.setSourceEntity(0U);
    msg.setDestination(52955U);
    msg.setDestinationEntity(167U);
    msg.op = 54U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("FDTWLALVGFTARXOHAICBYNZCCFHZNPAPCRNMKDLVSTHRCGTJJGXNLUCCSRWEOKZXTEDRBRLQXGGCYQFMQEKNPNMHLQMNVRSGKXIQYSYDHBISXHLATYIFPZYSLUGYXJIDSEDDOBNYWOYQJIRGWQMOEZHWEMWPKKFOUAAJQRRJOBBNXEMZTBAJ");
    tmp_msg_0.lat = 0.6530155792638948;
    tmp_msg_0.lon = 0.8188734660120697;
    tmp_msg_0.z = 0.9457038895593197;
    tmp_msg_0.z_units = 38U;
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
    msg.setTimeStamp(0.001553080559160147);
    msg.setSource(43480U);
    msg.setSourceEntity(116U);
    msg.setDestination(23071U);
    msg.setDestinationEntity(24U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.6202741163986364);
    msg.setSource(13793U);
    msg.setSourceEntity(150U);
    msg.setDestination(55192U);
    msg.setDestinationEntity(222U);
    msg.value = 0.4177252273296662;
    msg.type = 175U;

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
    msg.setTimeStamp(0.5745505420485657);
    msg.setSource(17688U);
    msg.setSourceEntity(229U);
    msg.setDestination(17625U);
    msg.setDestinationEntity(18U);
    msg.value = 0.24551557324124595;
    msg.type = 153U;

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
    msg.setTimeStamp(0.7915361176276935);
    msg.setSource(45088U);
    msg.setSourceEntity(138U);
    msg.setDestination(64416U);
    msg.setDestinationEntity(100U);
    msg.value = 0.9435271134269809;
    msg.type = 212U;

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
    msg.setTimeStamp(0.8075273622317755);
    msg.setSource(22991U);
    msg.setSourceEntity(197U);
    msg.setDestination(40857U);
    msg.setDestinationEntity(163U);
    msg.value = 0.38044278053212544;

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
    msg.setTimeStamp(0.08063241646938157);
    msg.setSource(54391U);
    msg.setSourceEntity(214U);
    msg.setDestination(63159U);
    msg.setDestinationEntity(176U);
    msg.value = 0.21074207589162308;

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
    msg.setTimeStamp(0.5530866766198366);
    msg.setSource(49541U);
    msg.setSourceEntity(17U);
    msg.setDestination(45394U);
    msg.setDestinationEntity(188U);
    msg.value = 0.7191262056343365;

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
    msg.setTimeStamp(0.12905516104016967);
    msg.setSource(42015U);
    msg.setSourceEntity(8U);
    msg.setDestination(55100U);
    msg.setDestinationEntity(105U);
    msg.timestamp_last_service = 0.3741955409650286;
    msg.time_next_service = 0.7048152199334452;
    msg.time_motor_next_service = 0.3042685023229639;
    msg.time_idle_ground = 0.20563650549777712;
    msg.time_idle_air = 0.25632784000083375;
    msg.time_idle_water = 0.11265181522805134;
    msg.time_idle_underwater = 0.09650931153480291;
    msg.time_idle_unknown = 0.725978351595278;
    msg.time_motor_ground = 0.5837572813030504;
    msg.time_motor_air = 0.6831385639860013;
    msg.time_motor_water = 0.6229543610456476;
    msg.time_motor_underwater = 0.19702769190035252;
    msg.time_motor_unknown = 0.07584826845164117;
    msg.rpm_min = 6261;
    msg.rpm_max = -26394;
    msg.depth_max = 0.14458217830962883;

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
    msg.setTimeStamp(0.25673070579438473);
    msg.setSource(8768U);
    msg.setSourceEntity(180U);
    msg.setDestination(15310U);
    msg.setDestinationEntity(110U);
    msg.timestamp_last_service = 0.11772155423831387;
    msg.time_next_service = 0.2597824731122951;
    msg.time_motor_next_service = 0.581538356406244;
    msg.time_idle_ground = 0.8345806079194908;
    msg.time_idle_air = 0.8870999797762394;
    msg.time_idle_water = 0.6032467588416527;
    msg.time_idle_underwater = 0.14046853505798895;
    msg.time_idle_unknown = 0.4459692856501426;
    msg.time_motor_ground = 0.11929908147866786;
    msg.time_motor_air = 0.02859589783781613;
    msg.time_motor_water = 0.5321412145485681;
    msg.time_motor_underwater = 0.7966180405195171;
    msg.time_motor_unknown = 0.4366586525414874;
    msg.rpm_min = -30441;
    msg.rpm_max = 28691;
    msg.depth_max = 0.9289388275248962;

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
    msg.setTimeStamp(0.9418925175938098);
    msg.setSource(44985U);
    msg.setSourceEntity(242U);
    msg.setDestination(57429U);
    msg.setDestinationEntity(203U);
    msg.timestamp_last_service = 0.9774859895764295;
    msg.time_next_service = 0.22471072235019118;
    msg.time_motor_next_service = 0.18385259494576134;
    msg.time_idle_ground = 0.3196052723792109;
    msg.time_idle_air = 0.27220863120895444;
    msg.time_idle_water = 0.7554699888911723;
    msg.time_idle_underwater = 0.5768265767210518;
    msg.time_idle_unknown = 0.12208146378043638;
    msg.time_motor_ground = 0.7076119370262223;
    msg.time_motor_air = 0.49100503520055094;
    msg.time_motor_water = 0.965564660989001;
    msg.time_motor_underwater = 0.08950064017377479;
    msg.time_motor_unknown = 0.28370406684537997;
    msg.rpm_min = 20376;
    msg.rpm_max = -31380;
    msg.depth_max = 0.057967663943128134;

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
    msg.setTimeStamp(0.7049737969705179);
    msg.setSource(21142U);
    msg.setSourceEntity(71U);
    msg.setDestination(291U);
    msg.setDestinationEntity(183U);
    msg.severity = 241U;
    msg.text.assign("KEJUANSDVHRAEHFVBLOXAPECGLZJQCBJDOWAWCNLDPTTXFPCPAROOUXQBIKWLNFHWQHGOGBBUEFHRSLGYYXQCAUKZKXCXXGAKKUYTUMRFUTWJTCMBRHPKACNZVBLDOQIVHQLSKDAMFFEGHJFEGNXASZSTTYMQVNEWKQ");

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
    msg.setTimeStamp(0.8239884404298823);
    msg.setSource(49893U);
    msg.setSourceEntity(55U);
    msg.setDestination(12988U);
    msg.setDestinationEntity(175U);
    msg.severity = 99U;
    msg.text.assign("OILBKDFHDJVSMJRZSOAHSEJAWLEPUGDCSDYZBCKBKYDSPICSMTMYZGCDPVXBIVUYIJURGLFMHWYFXXTKMTWLKLCQPXASLSRWFBBQGDHIUGJOXNRAIPQYAWKMMXQNGHMPPCFLBVEVXVGVBZHJIOTKLZVXDOFNPPZRIUZGVATOOQALTSOHNEFBCJWZXRHTZRDHUQIRWTEEUOYJKKXUCBHSNVJATGZRMYEECUYKNOPMQQRUITLNANWYEW");

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
    msg.setTimeStamp(0.5087857976761525);
    msg.setSource(23042U);
    msg.setSourceEntity(224U);
    msg.setDestination(23462U);
    msg.setDestinationEntity(188U);
    msg.severity = 110U;
    msg.text.assign("VYBGOWUDSSKVPFBLGXWRHKFREFONPYEGPTQTPODQDLCQJXQOGCDXKDPEJIYJUSNKMWLGCUMPDREXZNZUPXGABNZUECNTECFQNUJRHBHQRUTYRKAVYQDIUABYATOFJRKMKGTZRZHBYZ");

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
    msg.setTimeStamp(0.5564453904058954);
    msg.setSource(8660U);
    msg.setSourceEntity(13U);
    msg.setDestination(44852U);
    msg.setDestinationEntity(39U);
    msg.channel = -51;
    msg.value = 213951078;
    msg.gain = 175U;

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
    msg.setTimeStamp(0.47402877246886466);
    msg.setSource(18634U);
    msg.setSourceEntity(38U);
    msg.setDestination(59106U);
    msg.setDestinationEntity(138U);
    msg.channel = 109;
    msg.value = 1635751800;
    msg.gain = 178U;

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
    msg.setTimeStamp(0.8050972442685076);
    msg.setSource(21674U);
    msg.setSourceEntity(246U);
    msg.setDestination(34418U);
    msg.setDestinationEntity(39U);
    msg.channel = 68;
    msg.value = -1047748433;
    msg.gain = 196U;

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
    msg.setTimeStamp(0.9873585060863193);
    msg.setSource(42824U);
    msg.setSourceEntity(101U);
    msg.setDestination(10560U);
    msg.setDestinationEntity(51U);
    msg.ch01 = 0.7594767247981639;
    msg.ch02 = 0.5251921869426718;
    msg.ch03 = 0.14175993950071675;
    msg.ch04 = 0.1858554400861807;
    msg.ch05 = 0.21521545925754815;
    msg.ch06 = 0.6752780025274208;
    msg.ch07 = 0.75306453326749;
    msg.ch08 = 0.7439333126183855;
    msg.ch09 = 0.30823746845767885;
    msg.ch10 = 0.5456597969889851;
    msg.ch11 = 0.2983650326732671;
    msg.ch12 = 0.6870479381100706;
    msg.ch13 = 0.10872528993234587;
    msg.ch14 = 0.8436762192499702;
    msg.ch15 = 0.5585548512578828;
    msg.ch16 = 0.35176487762517705;

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
    msg.setTimeStamp(0.8745881319072637);
    msg.setSource(49468U);
    msg.setSourceEntity(163U);
    msg.setDestination(49259U);
    msg.setDestinationEntity(82U);
    msg.ch01 = 0.6505413360754564;
    msg.ch02 = 0.6812287894029421;
    msg.ch03 = 0.5033454344541316;
    msg.ch04 = 0.2550843522933516;
    msg.ch05 = 0.020661769987453393;
    msg.ch06 = 0.9452747882516938;
    msg.ch07 = 0.27768084472328125;
    msg.ch08 = 0.7809320441000913;
    msg.ch09 = 0.428019569300199;
    msg.ch10 = 0.9703980058709452;
    msg.ch11 = 0.4966702226450035;
    msg.ch12 = 0.9933054067810585;
    msg.ch13 = 0.6069477800870714;
    msg.ch14 = 0.5898353861706991;
    msg.ch15 = 0.46944800431630573;
    msg.ch16 = 0.931855795357525;

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
    msg.setTimeStamp(0.012456675183313837);
    msg.setSource(32917U);
    msg.setSourceEntity(153U);
    msg.setDestination(33421U);
    msg.setDestinationEntity(103U);
    msg.ch01 = 0.30660976201780765;
    msg.ch02 = 0.31892573112273603;
    msg.ch03 = 0.913684656795423;
    msg.ch04 = 0.9551422217378814;
    msg.ch05 = 0.058081531332699776;
    msg.ch06 = 0.42908202503159376;
    msg.ch07 = 0.2452279958320902;
    msg.ch08 = 0.05240022361734287;
    msg.ch09 = 0.21561601314660372;
    msg.ch10 = 0.03999947678250093;
    msg.ch11 = 0.4938523238366588;
    msg.ch12 = 0.5993572614649865;
    msg.ch13 = 0.8251361371602504;
    msg.ch14 = 0.9466718062495436;
    msg.ch15 = 0.5729800923546243;
    msg.ch16 = 0.688832604680915;

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
    msg.setTimeStamp(0.3507838224609534);
    msg.setSource(22526U);
    msg.setSourceEntity(56U);
    msg.setDestination(33730U);
    msg.setDestinationEntity(63U);
    msg.op = 21U;
    msg.lat = 0.8179214969122561;
    msg.lon = 0.8312851603918779;
    msg.height = 0.8382643399013017;
    msg.depth = 0.48355239520202276;
    msg.alt = 0.7949939589339013;

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
    msg.setTimeStamp(0.5393006175068543);
    msg.setSource(4308U);
    msg.setSourceEntity(166U);
    msg.setDestination(54030U);
    msg.setDestinationEntity(18U);
    msg.op = 148U;
    msg.lat = 0.16996967333434965;
    msg.lon = 0.6631559847983185;
    msg.height = 0.8912490951683961;
    msg.depth = 0.9102827943099592;
    msg.alt = 0.11676754032699044;

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
    msg.setTimeStamp(0.1955783069656567);
    msg.setSource(12438U);
    msg.setSourceEntity(45U);
    msg.setDestination(31296U);
    msg.setDestinationEntity(2U);
    msg.op = 85U;
    msg.lat = 0.6981723994433752;
    msg.lon = 0.03768187353000563;
    msg.height = 0.8545894627175088;
    msg.depth = 0.6181520616402779;
    msg.alt = 0.5006474154795549;

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
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.1089139848463676);
    msg.setSource(55566U);
    msg.setSourceEntity(180U);
    msg.setDestination(1140U);
    msg.setDestinationEntity(122U);
    msg.direction = 0.9115945518135403;
    msg.speed = 0.1390563987940211;
    msg.turbulence = 0.18026903508426562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.9704196065882106);
    msg.setSource(47300U);
    msg.setSourceEntity(216U);
    msg.setDestination(1268U);
    msg.setDestinationEntity(191U);
    msg.direction = 0.3949095744101291;
    msg.speed = 0.42635771624666186;
    msg.turbulence = 0.24796199628132565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.7569170350798844);
    msg.setSource(19605U);
    msg.setSourceEntity(125U);
    msg.setDestination(57074U);
    msg.setDestinationEntity(59U);
    msg.direction = 0.8567533254617377;
    msg.speed = 0.0893807691484928;
    msg.turbulence = 0.5978714663129889;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.04901013923648356);
    msg.setSource(61985U);
    msg.setSourceEntity(170U);
    msg.setDestination(50949U);
    msg.setDestinationEntity(20U);
    msg.msg_type.assign("IVSVGAYXHDJHAGDMGBASYFTTHNXWYEMNPZSUDFCWUAAJBYFIZXLJWZWUFCFOPRGPYKTKLNNHDPRCQTDLVKUIYNVAIDLEXQGT");
    msg.sensor_class.assign("YPYFMSIFDBLHGMJRNBUVFLDXWGWXPOWOYYPKSBEEBUCZSWQZIMGTZMSBCTTUEEVYRSIKS");
    msg.mmsi.assign("SJVFWHJSKISWKVVNZBSNUFYMUPQJVLUNYPYXIYYPFAQEZBXWQPLCHYBCFZGJHPMJCRTJJLRLAFNDEKPTADWVMUOSNKCRDQSVIOMNBKWGTMZCOUWNEOIRTWDNOXEUFHKFXJQFHGNYUEBAQDSVTNOQGGKPGAAAMXC");
    msg.callsign.assign("ZCSYSUPXKMMXBYLTDWWROCVELTIUDXJ");
    msg.name.assign("UTAHYDGWEKSETMKOVABLQDCDVXTHVOEDIAZRJSOVIKXDJUTGABADXMNZXHEAMLUJCGCMRHXWQBPJOZHFPXQIPLBAGY");
    msg.nav_status = 161U;
    msg.type_and_cargo = 116U;
    msg.lat = 0.8624858447123172;
    msg.lon = 0.587976862262832;
    msg.course = 0.8510788216625496;
    msg.speed = 0.5200755704610066;
    msg.dist = 0.10794054722162838;
    msg.a = 0.09471629395365955;
    msg.b = 0.45108098291803655;
    msg.c = 0.0010701817455098794;
    msg.d = 0.17845908290960832;
    msg.draught = 0.952215661510267;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.721245972582824);
    msg.setSource(9679U);
    msg.setSourceEntity(169U);
    msg.setDestination(11644U);
    msg.setDestinationEntity(154U);
    msg.msg_type.assign("QNNRINWTGZCZNTGTYXVENTFJHMQZNGYLRRYXDTCGWCOHSTSUZLCKUVUAQATJWIPSBZJLYPOHRLAMYIVPRAZQADDWDYFRFOTJUOIWKFBKVGBBKPFAJGM");
    msg.sensor_class.assign("KIXACJHMCYPEIXDVCNMXGBQDYOCEZHCYVDYQRHWLHINPPPMNWRPLOTTEQBBVACZYSXSUNSNTKBSVOGWQEJMSFWRGSTYGUMVDSFRFODDZKZCAXOKCNLBGAZVLNJQDAWJVGIHDYRYRTLHRVBUXPTZKVKWALBAVWHDOIUYXJPFUPZHZGXNQLBMEIZAOSPFRASNQUOAUIGTKQMGBJUMKFSRTJZHEFIBGQOEWMTLMUICNLUQDWFEXKCPTOWJXJJFELK");
    msg.mmsi.assign("PUDUZZYSERZNXHJBKIWDWBECYHJPPTIJVZEKODUVPGNSVNWVRQGBNCBRDUVYBJGLTTSCONCIE");
    msg.callsign.assign("IEYLHZJRDLQYCGPJUKVJXKUPBL");
    msg.name.assign("BOQGSVHSFAYCMRNGPBXAQTPMKQWOMVKLYRMOFGOYACFJTDMZUNRWAYMSFKFNPSFOZVLDIDEJ");
    msg.nav_status = 251U;
    msg.type_and_cargo = 57U;
    msg.lat = 0.8561783407236859;
    msg.lon = 0.9025722189566387;
    msg.course = 0.6455294321303491;
    msg.speed = 0.7627303646823916;
    msg.dist = 0.11216788027850699;
    msg.a = 0.5566696962947596;
    msg.b = 0.5880793259059981;
    msg.c = 0.852875618264037;
    msg.d = 0.8401145773507339;
    msg.draught = 0.4601672549150553;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.14504108959880224);
    msg.setSource(29839U);
    msg.setSourceEntity(145U);
    msg.setDestination(9327U);
    msg.setDestinationEntity(233U);
    msg.msg_type.assign("IVQOFZNRMUUZTWCFHYGBALEMAMZGXCUOGVBWXLLNXPIWEXYYHZWVLRQEYFPTLVTDSOPTOTPLNHPDRFQHUVXNSHLDJJXJDZTSHGMIAVKDBDJKMDKILUPOYXFESXLOQRTWTUMPCQVWWVRWJOW");
    msg.sensor_class.assign("YEXKXSDFUPDJEGAZKHABMRAWVMHJUPOQVVQIFTQNAGZHOABTCBDIDZKFRMUEWSPLDPSNQYNBXQZKYZVWXXVRNJEWHIOJPOPZZGNFBIWUCVRCBIXEPPWOUKOTMKQLDVBTHMGWYLAYYHRKRZFZFRNWXFNSDESNRHUELAHCSKQUEMVDGRIADWJE");
    msg.mmsi.assign("OIYSAXJEEYKUYCLIAUGBDXNVIRFDJZCDTRCNIWWSJXVGIGOKXHGKELEFTPMSTXJHTXYMEZZLIQADNMKYPIHSF");
    msg.callsign.assign("QULZIQRMZAMXBAKFXRDONV");
    msg.name.assign("XRBBVGPBLIZLTIZMYQZEWOFVSYHHSSPGKQLJAXTMZNLGTKWKMHFLJZXEETTLOCUFQZANEVAIMBTFAJYAFQFTHZUNMCVOMSVEJYZCMRYPHYYOVZGGXPKHDZJIORSGRBDWJJXRDRPECPMBKCNNVQLBEURMSUFJDHKWIPWGVAVDOGRPPACXOWOBSDSWVKDCUUXXKLRDYYFJULNCUJNQSWCDIYIWGORTAAXGNQKITFQBQCNXMENLDIASIBEQOF");
    msg.nav_status = 45U;
    msg.type_and_cargo = 158U;
    msg.lat = 0.6317475822472679;
    msg.lon = 0.6747892278654324;
    msg.course = 0.641266346173811;
    msg.speed = 0.7796275882112751;
    msg.dist = 0.14983327164880522;
    msg.a = 0.9036144625855161;
    msg.b = 0.8341623157506796;
    msg.c = 0.5137410523065176;
    msg.d = 0.4646453461105092;
    msg.draught = 0.08588530412760953;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.7237701796441388);
    msg.setSource(41165U);
    msg.setSourceEntity(205U);
    msg.setDestination(46616U);
    msg.setDestinationEntity(140U);
    msg.depth_at_loc.assign("YGIJWAGBHSHLAFEBHMIRWQPVDWUTKMJRRAYCCSAQWREJEQULMQPDLKOXJFOMTOGGQKLFKAWSOODVCPRYYYYBUNNKSGPEFRBTQSUK");
    msg.danger.assign("FVTBKBRREEJWRDAXSEDNKWUIYVGGAGAJGOUBWPJHMLJZWZVPQJPXQYNSEHKHJVDZFBUQBZQZVENPPPVHEKWIQFZQTSHYTGZMHOQJXDRGHPCGRXBOMENMNXKTAACFCRLQNGSCRCTSOWUKSXSAMBLLYSXFFVLVCUIYZCONLIYWAWEVCIAQUMOCRILUSCKQIMJYFKKFXDVJBULZMOGJL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.7697158511662524);
    msg.setSource(9160U);
    msg.setSourceEntity(244U);
    msg.setDestination(16833U);
    msg.setDestinationEntity(186U);
    msg.depth_at_loc.assign("UDEUNENFOJOQOBXWTYYJIGKZ");
    msg.danger.assign("SAYBUWRVEMYMXFKOJHIJSRTINMLNPOGTDDIACCHPWICBMBIEVYFXMEEYTJBJPLNUQEJCTRACAVIHZRZYGGOBVBVIWRHOILAZPHMIDNZVNVOFXQHXDCQEAQRQKFTVRHKNMDUVWMYZWDPLKNDMHDLXVSLK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.9435315625097312);
    msg.setSource(36003U);
    msg.setSourceEntity(22U);
    msg.setDestination(15291U);
    msg.setDestinationEntity(220U);
    msg.depth_at_loc.assign("WOPQVVNFWWTFGIODLJOBGMSFJDGKUZOLMZDGWANFQPZJPABLDWJQZPYTMCPSJHCYDNIHQEWYNCBDM");
    msg.danger.assign("LHSHELWKKIFFYLXLNLDRWAFWQJAOBNGKXVOPKBHGSXRIGYHXUTESDNNYZYDFTFPWYKLYOUWXRBRVCMLQPCLDFVDZMMEOTEXEGCQJPERIVUNMTBDBMTAMNXVCLNWFEUHPAZVIAGVOYZGIOTJSNMZNHCGZRSDCBSCSEQYPRPFSTJWWGBAUTIUNQRUDPZZJHKMEXYODMORAPQMATJUBSXXCJBWFRIOTQIHIVVQCHUAUS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.09434138212892373);
    msg.setSource(52390U);
    msg.setSourceEntity(2U);
    msg.setDestination(33462U);
    msg.setDestinationEntity(68U);
    msg.time = 0.8935446711444425;
    msg.x = 0.30226562557262215;
    msg.y = 0.8612888283567515;
    msg.z = 0.2782268552684072;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.8198292522468295);
    msg.setSource(54306U);
    msg.setSourceEntity(101U);
    msg.setDestination(852U);
    msg.setDestinationEntity(61U);
    msg.time = 0.8751387592438783;
    msg.x = 0.1040526979212939;
    msg.y = 0.4209057433895874;
    msg.z = 0.46388183639570346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.8646969822129948);
    msg.setSource(39264U);
    msg.setSourceEntity(178U);
    msg.setDestination(12493U);
    msg.setDestinationEntity(109U);
    msg.time = 0.4695988287246111;
    msg.x = 0.6200258635480472;
    msg.y = 0.09251669353346892;
    msg.z = 0.7072879576107546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #2", msg == *msg_d);
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
    msg.setTimeStamp(0.20026393466807024);
    msg.setSource(44882U);
    msg.setSourceEntity(161U);
    msg.setDestination(21663U);
    msg.setDestinationEntity(205U);
    msg.nbeams = 26U;
    msg.ncells = 66U;
    msg.coord_sys = 199U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.9345238718842522;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.6592703734624074;
    tmp_tmp_msg_0_0.amp = 0.1084730762538163;
    tmp_tmp_msg_0_0.cor = 29U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.08339350906923337);
    msg.setSource(53363U);
    msg.setSourceEntity(101U);
    msg.setDestination(52800U);
    msg.setDestinationEntity(122U);
    msg.nbeams = 154U;
    msg.ncells = 192U;
    msg.coord_sys = 245U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.32344947915391853;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.3351453170513252;
    tmp_tmp_msg_0_0.amp = 0.6243218899581855;
    tmp_tmp_msg_0_0.cor = 196U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.28999325744906);
    msg.setSource(58447U);
    msg.setSourceEntity(121U);
    msg.setDestination(35565U);
    msg.setDestinationEntity(50U);
    msg.nbeams = 116U;
    msg.ncells = 19U;
    msg.coord_sys = 152U;

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
    msg.setTimeStamp(0.4628632993845324);
    msg.setSource(11146U);
    msg.setSourceEntity(126U);
    msg.setDestination(56217U);
    msg.setDestinationEntity(215U);
    msg.cell_position = 0.5174114300708867;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.9819137859493897;
    tmp_msg_0.amp = 0.5907253497270524;
    tmp_msg_0.cor = 69U;
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
    msg.setTimeStamp(0.7575821560552032);
    msg.setSource(33930U);
    msg.setSourceEntity(234U);
    msg.setDestination(23721U);
    msg.setDestinationEntity(140U);
    msg.cell_position = 0.0068734564778735185;

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
    msg.setTimeStamp(0.21240088496437037);
    msg.setSource(18951U);
    msg.setSourceEntity(37U);
    msg.setDestination(6794U);
    msg.setDestinationEntity(211U);
    msg.cell_position = 0.015956682420511736;

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
    msg.setTimeStamp(0.6037179436837667);
    msg.setSource(30466U);
    msg.setSourceEntity(135U);
    msg.setDestination(64858U);
    msg.setDestinationEntity(251U);
    msg.vel = 0.058652809619100466;
    msg.amp = 0.2222503559192074;
    msg.cor = 91U;

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
    msg.setTimeStamp(0.03626764698768392);
    msg.setSource(19725U);
    msg.setSourceEntity(250U);
    msg.setDestination(58457U);
    msg.setDestinationEntity(172U);
    msg.vel = 0.9766235765597296;
    msg.amp = 0.20622761210964158;
    msg.cor = 8U;

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
    msg.setTimeStamp(0.9432891689803785);
    msg.setSource(31904U);
    msg.setSourceEntity(229U);
    msg.setDestination(50660U);
    msg.setDestinationEntity(196U);
    msg.vel = 0.24751791734193973;
    msg.amp = 0.9054188707976161;
    msg.cor = 44U;

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
    IMC::Frequency msg;
    msg.setTimeStamp(0.06749664931304322);
    msg.setSource(37880U);
    msg.setSourceEntity(70U);
    msg.setDestination(16055U);
    msg.setDestinationEntity(156U);
    msg.value = 0.8329932500027011;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.6006393136094701);
    msg.setSource(51518U);
    msg.setSourceEntity(2U);
    msg.setDestination(12821U);
    msg.setDestinationEntity(167U);
    msg.value = 0.46886457306657214;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.1386280877260142);
    msg.setSource(30939U);
    msg.setSourceEntity(90U);
    msg.setDestination(54395U);
    msg.setDestinationEntity(94U);
    msg.value = 0.5325205266017103;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.30913877575325444);
    msg.setSource(3290U);
    msg.setSourceEntity(250U);
    msg.setDestination(61638U);
    msg.setDestinationEntity(222U);
    msg.sig_wave_height_hm0 = 0.09286271863521178;
    msg.wave_peak_direction = 0.2706031343848866;
    msg.wave_peak_period = 0.7704697006211078;
    msg.wave_height_wind_hm0 = 0.6531834297290706;
    msg.wave_height_swell_hm0 = 0.4873872099397467;
    msg.wave_peak_period_wind = 0.14224834665175679;
    msg.wave_peak_period_swell = 0.13968500931675476;
    msg.wave_peak_direction_wind = 0.6632359153725708;
    msg.wave_peak_direction_swell = 0.5470459114053948;
    msg.wave_mean_direction = 0.4150774523562003;
    msg.wave_mean_period_tm02 = 0.043465415680220776;
    msg.wave_height_hmax = 0.597779419422372;
    msg.wave_height_crest = 0.013795439991346248;
    msg.wave_height_trough = 0.352785333124255;
    msg.wave_period_tmax = 0.5323836091529607;
    msg.wave_period_tz = 0.13858214151004533;
    msg.significant_wave_height_h1_3 = 0.8732354124399935;
    msg.mean_spreading_angle = 0.08069433418540617;
    msg.first_order_spread = 0.6989668077222193;
    msg.long_crestedness_parameters = 0.17497705821245024;
    msg.heading = 0.42490044484773437;
    msg.pitch = 0.9177314832460871;
    msg.roll = 0.0800372793548827;
    msg.external_heading = 0.49075019070152104;
    msg.stdev_heading = 0.6996202433025573;
    msg.stdev_pitch = 0.057737484123924876;
    msg.stdev_roll = 0.369637985197818;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.10979902572691635);
    msg.setSource(25020U);
    msg.setSourceEntity(46U);
    msg.setDestination(26298U);
    msg.setDestinationEntity(209U);
    msg.sig_wave_height_hm0 = 0.4732945799405486;
    msg.wave_peak_direction = 0.7037668344884722;
    msg.wave_peak_period = 0.722193618875393;
    msg.wave_height_wind_hm0 = 0.208046545843392;
    msg.wave_height_swell_hm0 = 0.04200296835306694;
    msg.wave_peak_period_wind = 0.4740429751574651;
    msg.wave_peak_period_swell = 0.8362496464623529;
    msg.wave_peak_direction_wind = 0.918642229488443;
    msg.wave_peak_direction_swell = 0.6703596079132693;
    msg.wave_mean_direction = 0.12097252781669188;
    msg.wave_mean_period_tm02 = 0.8925709123723686;
    msg.wave_height_hmax = 0.4359520193935108;
    msg.wave_height_crest = 0.6223449982608351;
    msg.wave_height_trough = 0.3431334660487486;
    msg.wave_period_tmax = 0.3616259032781506;
    msg.wave_period_tz = 0.7549334198374466;
    msg.significant_wave_height_h1_3 = 0.6811300410030684;
    msg.mean_spreading_angle = 0.477342171502655;
    msg.first_order_spread = 0.33261098543518963;
    msg.long_crestedness_parameters = 0.7786361527374807;
    msg.heading = 0.31541120240555576;
    msg.pitch = 0.005774120929071258;
    msg.roll = 0.5823619282850645;
    msg.external_heading = 0.6543506553498445;
    msg.stdev_heading = 0.055514734150614364;
    msg.stdev_pitch = 0.3189026979630868;
    msg.stdev_roll = 0.19542350405678688;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.5072569175064201);
    msg.setSource(16386U);
    msg.setSourceEntity(176U);
    msg.setDestination(22093U);
    msg.setDestinationEntity(207U);
    msg.sig_wave_height_hm0 = 0.7583109076449696;
    msg.wave_peak_direction = 0.5247843219510976;
    msg.wave_peak_period = 0.5419384913373811;
    msg.wave_height_wind_hm0 = 0.022703770406082735;
    msg.wave_height_swell_hm0 = 0.6364743392793083;
    msg.wave_peak_period_wind = 0.6983283267849494;
    msg.wave_peak_period_swell = 0.027278729476228003;
    msg.wave_peak_direction_wind = 0.38920918182285447;
    msg.wave_peak_direction_swell = 0.5562185913703628;
    msg.wave_mean_direction = 0.32745499791444677;
    msg.wave_mean_period_tm02 = 0.7581668419703159;
    msg.wave_height_hmax = 0.7805970606186478;
    msg.wave_height_crest = 0.7522386689800036;
    msg.wave_height_trough = 0.10519022023795954;
    msg.wave_period_tmax = 0.9617776457568099;
    msg.wave_period_tz = 0.5140215447405694;
    msg.significant_wave_height_h1_3 = 0.7462017690005023;
    msg.mean_spreading_angle = 0.27017996493452834;
    msg.first_order_spread = 0.7806574440796327;
    msg.long_crestedness_parameters = 0.13857534294791274;
    msg.heading = 0.7148277668911878;
    msg.pitch = 0.15247125715515686;
    msg.roll = 0.3968521658257974;
    msg.external_heading = 0.3457347957352064;
    msg.stdev_heading = 0.460102200937361;
    msg.stdev_pitch = 0.9174372150805844;
    msg.stdev_roll = 0.039848753758034205;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #2", msg == *msg_d);
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
    msg.setTimeStamp(0.11978497828613177);
    msg.setSource(28354U);
    msg.setSourceEntity(229U);
    msg.setDestination(18037U);
    msg.setDestinationEntity(156U);
    msg.name.assign("ESQNXNRZXLFBGPOAMOXXRUQJZDDNKTVDPNAROTATZTHWOFUHUAKOEERWNMTBTPPLCWUGWLOWMBBYGUHPUAQHJAMFPPRNKCVAYUGJYAPSYXNGZFLBMCVVZRKQULLGDQLIFGPIIZJBOZECEFYDNDYHIJVQZCHAYEQKWAGSRJKYLEKVQCSHBWIRMKWRIQCFDVZFUZOXTWEOYWTJIF");
    msg.value = 179U;

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
    msg.setTimeStamp(0.45250767049125784);
    msg.setSource(10522U);
    msg.setSourceEntity(224U);
    msg.setDestination(31734U);
    msg.setDestinationEntity(129U);
    msg.name.assign("YJMHNXDPHRCIPCIWFYRUCMOTLDDUQLBKSOPLPREEVAXNZOLNHYTJZSVILSNQWRBOSBDVDDUEJSCHQQVPFVVPEUYAPGVNZQJKRXCKZUZWPVBKOUCRJZMAXGTHBGSXFUMFIKMZRLXWZTUYBRTYAWDEMLYDASSOQLSTGLHFIYWOABJCZGWENNYGNMDZFNTUEXGQQABTEAVKWFHHJIFO");
    msg.value = 98U;

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
    msg.setTimeStamp(0.5456648810756846);
    msg.setSource(10975U);
    msg.setSourceEntity(130U);
    msg.setDestination(54847U);
    msg.setDestinationEntity(180U);
    msg.name.assign("GXUPBJPHWHSZTNAKFOHXUMZOFGXIIAJIZYGAHJSVMAZULLYRIOILLMUZYTAEREVNXXWWLORRWFEDBTTCOTVJGWOGUGRWSQQTZKHVDPDIBCRMJXVKLSDTHCQLPVMWYKRUNNJLVKPYKWEXJPPNRAVXHOJQEVUPXAQKNWZAHDCTFJDWYGMFKCUIFCMBDBQGCSQNFZODFIQSALJUNANMOIKYBXSNZYOE");
    msg.value = 159U;

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
    msg.setTimeStamp(0.7383529922546274);
    msg.setSource(60877U);
    msg.setSourceEntity(238U);
    msg.setDestination(18190U);
    msg.setDestinationEntity(213U);
    msg.name.assign("FFSHGRIXLFSAHAIFNPHESHETOTGAYCBZZQYOINQGEKTXEVKGWJSRHMKLUXCPQACKHRGDAFOOTBPTGYPPYMTJOWXBOXHTXQRDHOOUVSDRGZGEZPYKZBLYEFZCXWQBDQSRREQNZANICYAVVCTEDGBGNUDBKNBRNMQOTNJZFWFVULDVFXPMHBEADWTYZWSFCKHLPPS");

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
    msg.setTimeStamp(0.8971128817645789);
    msg.setSource(28913U);
    msg.setSourceEntity(70U);
    msg.setDestination(41181U);
    msg.setDestinationEntity(178U);
    msg.name.assign("MWQUNRYUTDVVVOJWQMZXERTFGTPYFUZPAYSCRJYWKHSJBGAJNRQBKZQBHSWUSEXGBGXMEIGODXDLGZNQSHHHBWGAPMWZDISKKXVJZBJKNEJJHRYQDOUOAPFFAMWFUKYNAJLVIGCRDNBOZWXCOXHZVVGFCNLCAITTZXKREMSMTQFFICLTOMWMXYHPPICEEOVVHBUCNILPCDANIUYJZOSUEPYYFQUWRDNLSDXIRBCVQPLPFSOKLQHKABRTAKIL");

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
    msg.setTimeStamp(0.7799688784572044);
    msg.setSource(5950U);
    msg.setSourceEntity(139U);
    msg.setDestination(33514U);
    msg.setDestinationEntity(43U);
    msg.name.assign("ESTYWNNUMEYOHMLKKGQBAXXOPCXXUIJQKKGHMJVHOHSMOO");

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
    msg.setTimeStamp(0.3650915582981552);
    msg.setSource(52022U);
    msg.setSourceEntity(246U);
    msg.setDestination(40402U);
    msg.setDestinationEntity(89U);
    msg.name.assign("YCPVJUZGBXPOKHFZZJQQHPXOKLGLXMDDRFNEEHKYPKWFJOWRYMIGREIORQFJQYKRBAEYHITHWENULIXIPVZDOTNMXSU");
    msg.value = 5U;

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
    msg.setTimeStamp(0.47594464322481134);
    msg.setSource(10951U);
    msg.setSourceEntity(136U);
    msg.setDestination(11990U);
    msg.setDestinationEntity(144U);
    msg.name.assign("OGEZGFBVUAHKDSARVXQUSPVPFBNHGOFRHIRBQWHCDVMHCJPOKGDLBAINCPZNIPVBVSJFZSCZQFPRBJZCFJKAMGNOEPEFMXJSMQBXVUWEJDOIUJFKLQRSAQFDKVNCHYVOTIWREJKQLYMWHYCSSLZMMDVWADDCOKEPTLXOXTOYBULILYGDMZQNQPYETXEXNNWWJZBTTRKWYJTRUULGHIIGWYDKXAOQUWRTLMBCUANNAUMGHSLHY");
    msg.value = 154U;

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
    msg.setTimeStamp(0.2300775483868437);
    msg.setSource(27660U);
    msg.setSourceEntity(44U);
    msg.setDestination(24655U);
    msg.setDestinationEntity(42U);
    msg.name.assign("RQYEORRVLUKSGIDKYYPKDDNHBHFHPUPNZXBFTHDEXWCYHKBNOEOJFLUMTUGQXQWDXRGQKHQABHFQUTZIXPIRTUVYEDQWGUSEIXWEAHPFGXOVIBXSNMAAOIJZMWMGLFGG");
    msg.value = 44U;

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
    msg.setTimeStamp(0.8700815033440286);
    msg.setSource(56221U);
    msg.setSourceEntity(145U);
    msg.setDestination(52978U);
    msg.setDestinationEntity(185U);
    msg.value = 0.035193123469189014;

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
    msg.setTimeStamp(0.009825391341591216);
    msg.setSource(42776U);
    msg.setSourceEntity(98U);
    msg.setDestination(27815U);
    msg.setDestinationEntity(187U);
    msg.value = 0.8023351646155908;

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
    msg.setTimeStamp(0.4598045586453259);
    msg.setSource(31327U);
    msg.setSourceEntity(52U);
    msg.setDestination(60572U);
    msg.setDestinationEntity(110U);
    msg.value = 0.7853437121250221;

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
    msg.setTimeStamp(0.23235373462222397);
    msg.setSource(3271U);
    msg.setSourceEntity(187U);
    msg.setDestination(25004U);
    msg.setDestinationEntity(102U);
    msg.value = 0.6925161431367491;

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
    msg.setTimeStamp(0.6690511572119464);
    msg.setSource(21509U);
    msg.setSourceEntity(249U);
    msg.setDestination(52145U);
    msg.setDestinationEntity(12U);
    msg.value = 0.3687666639968248;

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
    msg.setTimeStamp(0.07274407427343521);
    msg.setSource(48550U);
    msg.setSourceEntity(179U);
    msg.setDestination(48810U);
    msg.setDestinationEntity(97U);
    msg.value = 0.10196447552909615;

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
    msg.setTimeStamp(0.9844242400613412);
    msg.setSource(57203U);
    msg.setSourceEntity(154U);
    msg.setDestination(34438U);
    msg.setDestinationEntity(242U);
    msg.value = 0.038996920027263404;

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
    msg.setTimeStamp(0.1356825493353142);
    msg.setSource(31747U);
    msg.setSourceEntity(205U);
    msg.setDestination(8519U);
    msg.setDestinationEntity(143U);
    msg.value = 0.4182767446255836;

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
    msg.setTimeStamp(0.5115345773049855);
    msg.setSource(31236U);
    msg.setSourceEntity(127U);
    msg.setDestination(28866U);
    msg.setDestinationEntity(239U);
    msg.value = 0.9114021761118191;

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
    msg.setTimeStamp(0.9729299349175561);
    msg.setSource(23405U);
    msg.setSourceEntity(192U);
    msg.setDestination(10534U);
    msg.setDestinationEntity(62U);
    msg.restriction = 80U;
    msg.reason.assign("NNUPQJWIIAFZXTGQEJOPYPGYPIOZJFJRLGUMOBXCMSLWFGEMKRTTMQXZJEXMURCGHAWWOYXVAXKAJBWRGLXQQAPMVVFNVCDLEOCSNGHVRJKRIHHLDLUBIDKUZEOTDLCTTKRSNPFIYNDMFCLNCYDOPGMZKFTTVDHQFXPOZOWSXIJ");

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
    msg.setTimeStamp(0.0777249959587063);
    msg.setSource(4526U);
    msg.setSourceEntity(53U);
    msg.setDestination(27456U);
    msg.setDestinationEntity(95U);
    msg.restriction = 127U;
    msg.reason.assign("UNQIJZNCKZNLLOUDVSRASHAYUNLROUIEELJOUDTVCVRINCBTKIMHOKIFAKVVYOPLAWMHIGZEMTFLTSPDKGFVMEHXXEQOXTBXRTRTFKWZLSEPLRNFRAZAQ");

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
    msg.setTimeStamp(0.22467008619300022);
    msg.setSource(25813U);
    msg.setSourceEntity(180U);
    msg.setDestination(18982U);
    msg.setDestinationEntity(53U);
    msg.restriction = 247U;
    msg.reason.assign("UXCYWDFSGUJWITTUJMUMPKVBTEYAXBATXIIROWMTEALYWRJMQCEVZLFOSVWYFAALLKPXZFSBENHTYIZJICAPJLJXKCEBAQEGGBKCONFUPOSFGUESFWPWOZUDWIMXZGZKAJMBUQDBNKDDQLDSRRYMIBTXOHHMCTNNHOFCUHOPKSDYYSKLTVXVOCDXZFNQMZNGQHPIEWBCJNVRGHVLNRGGRBDCKSLGYXOVSDAETQWRHPPHLVPNZQZUQQJEF");

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

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.18145783505959634);
    msg.setSource(24268U);
    msg.setSourceEntity(213U);
    msg.setDestination(55681U);
    msg.setDestinationEntity(186U);
    msg.op = 18U;
    msg.request_id = 1002166779U;
    msg.entity_name.assign("CQTKXVJEIEOLOEWXWAQNPYKUZYPTAWWJHBUAVAMVHEPKQTNMUHRNTDQGZDECFVSAPYGRSPJIFQGDSBYFJJKEDAZERJYHCLIBNGWFSVXXBTBZFROQXLAIZMRUOYDYGMCDXTPWQGNIIRUENZEW");
    IMC::TypedEntityParameterEditor tmp_msg_0;
    tmp_msg_0.value.assign("GVPIIRZYMNCRNFEAZLNMDUKYDCBSEGNBMGKQPEIRNHLCCROXTLHPSIVYTZFDHDQRQMPWJSGPOGCAAUXRMGNSVQYK");
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.14075622645051755);
    msg.setSource(452U);
    msg.setSourceEntity(210U);
    msg.setDestination(26603U);
    msg.setDestinationEntity(126U);
    msg.op = 129U;
    msg.request_id = 3965288258U;
    msg.entity_name.assign("TPQAJHEUXLTGULZNKJYIDKYNSGIYEPCPUOLYOGFCHXXAMDQWMLPBRZQSVOTHCRDTEBBPGGFSVSKHITOYBECWQMDZOFXWRXQJNZYMOVVIXEUZFDAFBSUAWXUFEVICQRJENBFQNBCMANGSBKHEKTVXCRRTHOIJRZJDTAJSAGVHBMQJITMNRTGKNJKYWLVONDWUXHYKVHWZYLU");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KDXUMDSXRBUUGAJGKNSTPOXLRQKPVRHCQCTQPWGOIRTECXOSFNZLNNILCSRHGWSCSETDZEMPFHEVMUJRIVBAYEJULDBNAZIYBWYMWJNKHUCIWGPPH");
    tmp_msg_0.type = 154U;
    tmp_msg_0.default_value.assign("MHQFPCCUSGJZPHDMYWVCZAGYCLNUMPDLGACXXODRJZWNPFTURJMBCEIVUQJKFDAHOMOVNQWZNDDBFRPKZNFLEJQRJTYQBBTIKGIVGBFHONTNWCQQVMGZUHQVHYYSKRCXALXP");
    tmp_msg_0.units.assign("OTALLFUBAKIYNBFEBCEAEFRMYUQXDVSULILPFXWDXRFEIVQTSGPCTIGOAZKW");
    tmp_msg_0.description.assign("EUUPIJURQFWJXXPEXJNSPNGWYGVVLSXZBDZRSGHIARSEOZFJWRBVAQMYPAWVSYFHXHFSEWIQMKOUVLEQXSRANUMTZMEBOIMJWMRQIOKLNOONTEAMPPGNATGIQNPHGFTCYCWAYUNTBSMMLLZLXOSLWUJCOHEDPWRNUZDOPYHBIATVKWREZDYTGKUTCVOXGLKBQXSTICIZDAEGVFLKHPCZLJBB");
    tmp_msg_0.values_list.assign("TLLSSXEGGEJFEIXWVRBFOJNLYPAKAZVHZJBIZHJVMRCEPMBVEMRHAOQFNCXBLEYDLTNHKIZKOYKPGWSMQMXOAWZIYHJCPZDIVJDJLZJIOUWDFIOQARFBHEPTNSWSUSMOGSTATJLBIWBFCZHMAXSPUKYCCBTMWCUQ");
    tmp_msg_0.min_value = 0.631150545211552;
    tmp_msg_0.max_value = 0.6391398415430356;
    tmp_msg_0.list_min_size = 172U;
    tmp_msg_0.list_max_size = 34U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("ZBNUOPZKKZVJLGJOYOLUQTHUFIWJOIWHWHBMUXANNEEPGNLDRDRGPTQIHVHVCWCQBFSMVXSDSQWBMCAEAL");
    tmp_tmp_msg_0_0.value.assign("KRYOVGMJSYMXHDSKVEDRWPKBIHWEFDQWHHRQRYSUXJLBVYULQTJMDJYEFLAIZCESCMFELEFGSVFXSKRHUKWAMUJO");
    tmp_tmp_msg_0_0.values_list.assign("LXLMXZHEQXMMKOCKFZHYTCFNBQZQBFCPTYFXASYOBMFIAYLKCKARDJYRPPLJSTWWNJVBZNXVGOJCVFKKBEHKSQVRWRDXCOATHVEUEAHZUYTABOUURNIMBXRWITVBHQJQJRPFEAIFVCTQIWTTEGD");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 179U;
    tmp_msg_0.scope = 110U;
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.3922259676430174);
    msg.setSource(27519U);
    msg.setSourceEntity(105U);
    msg.setDestination(54206U);
    msg.setDestinationEntity(199U);
    msg.op = 5U;
    msg.request_id = 2624499972U;
    msg.entity_name.assign("HFGELNRFRJQFQELANHHTPUQMKIDMBXNPKJGIHQAPIFZJVPZVBWBXUAIQRDWWYSHJLYQAYQEOBNYSUVCZLKZTIRCGFYMXFIHXNJZCIRRJTMPAKGPBYDVUKHCCIJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.765565300232265);
    msg.setSource(34377U);
    msg.setSourceEntity(51U);
    msg.setDestination(63200U);
    msg.setDestinationEntity(43U);
    msg.name.assign("DXPJXVXFSTCGIMRM");
    msg.type = 173U;
    msg.default_value.assign("CIEJHQHEQBBOVIZMTFIZOOTNADUTHDWARCFMCSSPNXUUIFYJKCLYYPPSEDOQRFVMCXSLLWXZMAEWNLBQJJKAKWGLHYOAECRLJNRBKMKVTMVPXWTZGJNLXNDVFHZBASCKPZMUVUKXVRRKIEGPWJROSSFCCNLVGGINEDFAHAJTWDJG");
    msg.units.assign("EPMTYVKBYLDENXFRHWPGXZKDIMKJYMEJRCBGGWJEXHLDBSSCFCLQKSAFQSLAIUPKBJICKJZRRNOMKVOTPYHMTKDKXZKALANBZXAZGDERMNUUJPUFXMCWTIREGGXCQNVSJLNTFIDFUVSQVFYBOJNDWJSWDTLPCJYQPVVHHOQYQNUZEMHTEGSIUEQIBFGALYOZFWGTDA");
    msg.description.assign("BUALCQBUBNOSXXDXKYENUFEGFIDUIOJBYTOOYERPMTDUCAMNXMAWMJHSKRQHAPCMWYK");
    msg.values_list.assign("FYACWJDFGSWIAWKNTORNJZVHTYPCPSVLIPVYTHKHPFKKJMGXDZPIFQWZKSHRCSMLGDLEOXXUGCUKIEFLBXNURIUUBKBNOFPJVQDOFEQLPJEGVTJCHUGYTGAIPWXYXZSRTXOBUSSMDRHABAIKPMRGEENBL");
    msg.min_value = 0.02855573579234949;
    msg.max_value = 0.6082348556658536;
    msg.list_min_size = 202U;
    msg.list_max_size = 127U;
    msg.visibility = 148U;
    msg.scope = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.7801276054314488);
    msg.setSource(30924U);
    msg.setSourceEntity(24U);
    msg.setDestination(10901U);
    msg.setDestinationEntity(159U);
    msg.name.assign("VHEXFVFWBGPKEFQYSVNLPNEUZIVXIYLQSMFUXCXMCNWHZSXRDTGMQUIODQNPWYY");
    msg.type = 52U;
    msg.default_value.assign("CBBSBLPUIJZEUQYADETLYHOXSFKOOXWRYMZQTYLVJJHVILSPE");
    msg.units.assign("EPFGLNIWTBNZDGYKMIWJQXPYXSVSGUOABEYSZDEJRXWCQNCHRRGWYDJKPVOGNNKFSHHCUTIFLIVBRTAIILISTKADLBCONXGAJMKXRJEWQHKHDYFPVLJCNALMYRDDCDGAAQBEUJZMUKOBUOOTEZWFZQDTLSZMOVPIQCQPGFHUQGBWXZNOVXKCHMDLKEHPRBMUELCBTSFFBQVRMOXVGIWTTOIYMRPTXSQYJUHZALPZYVACSVUUAXWJESNRPNKMJ");
    msg.description.assign("DTOLRVUFXNHICDNJUBQIZEACVMJMOZAIRLNLFZSBFZHUDBLJRXXOBSXTWCEGBQPKOIZRKMGWXXFYHIHAMEVUJLSJRASMVSNGFAJBYREBMURYLPJZXQQFKTPYGOARHKGCNQTYYHAJBCGZOVCSSDPPCWTALGIMQHJDPZHDZLSIIKXTVPKNNXNYHNIBCVMATTWPEKUPFIUQEKVOUWOTMBPEROKWWQWUWQDNEUDETACWSOFYSQREJLXLDGCDVYF");
    msg.values_list.assign("WLWQRLFLIJSVEAJZHATPPKKYZGLUZRWETTZTROEYLBARVKNUICCQBGBUMTSLZHPBNOCYWPZCXSVSJIXBJWJJQHGDNBEJATVAX");
    msg.min_value = 0.4420360204867271;
    msg.max_value = 0.5456913542796772;
    msg.list_min_size = 222U;
    msg.list_max_size = 192U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("WVFFEBXBNUPCDYQOAPUOWNSYXOJCTRRCIDXUSCSKSBDSQCSPERYAGJUIWSABZNLTZAUIEQLCYGGTBDBGHUMKIVLGSGTEZDLKWXZZHNLPPYKABMEURUORQQCLOGKQPXWMEJVWPAYDAUTTFRDKZJKRJFC");
    tmp_msg_0.value.assign("BCFQRDIJOLHOJZTRJYOBLIFOXDKWLUWYCZVEUQXUJAJKXDALSRFBWHKBF");
    tmp_msg_0.values_list.assign("CWYAYFMOKDOKQFIFVIVTQUCVRGURRRXJATDXKUZZPZBJSEIJYPELYRWQOPLXTGWWJSCWEUOGXQRKTBMWUHELSAKMATJFUVZPAYPYFOFZVUIYQHWGKWXJYTMHSHPGOSEDNCMLZJSIBTGCLGDZBEFNNFKLBQGPNHNNIRTHUUERCRGCVRPIVZBNZFAQQBIKCFVNWMBXDBOJBMHGZSHPLMLPJALXXNOOEIYDCID");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 242U;
    msg.scope = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameter msg;
    msg.setTimeStamp(0.2683652320881974);
    msg.setSource(41767U);
    msg.setSourceEntity(30U);
    msg.setDestination(13552U);
    msg.setDestinationEntity(155U);
    msg.name.assign("EQVZULWZOEBPYXXRGDJSSUVJJQOSKHANCDBYMRCQAAUNWZYIVON");
    msg.type = 229U;
    msg.default_value.assign("GMSSMKUDKWRLPEYCZFMNSDDGUIPIYLCVAJYTCLSABPOVZTIAILASEGKROHFMIWFQCEXSLHTYMKORAQQZKNUKFYUGLHPIJVBHZXONHNURRLETTGQTIEMESZCOYXKSTAEBJNKPDUIXRYFCFOHVAQXBVVCQXWBNOXTNUZDNDWPMRSWVHCVMLFQZQGAEGYJXYAUBLVZRIGKCWEENPAXJGHQWOKWUPWTHUJFDMNBRDFXJZBMZCYBFSGIBJ");
    msg.units.assign("VHYQHXIRICJFLMQWFIBHWHHKTSDQFQYXVGMWGEGJJINUKFRICJJPMUZWEWNNGBUXPFVSZUGZNZLITEAFRBPUECKDSZPCKONOSDYSBRQEPQPPSLCVERXSTAIYWHROLLITVEBALLPBDOUMNXOBGGYCSIWOKJVQUVVBTRZAJZKLDFJACZYXMREXKYCRMNTDUAX");
    msg.description.assign("PWPZEQUUCMICHZYWOHTXWEJWPJUFTFQIPSTSEDCPOPKEAKBSJQMXOZZKLCLWBSHFVEFWGPNOUOXDTVRLHBOIPIBURSMOYGDKLYKQKHHLMHLQTYMDCLCCQXEIQSABMNWUHAJGRVZGMABXUREXINRERKKDAZFBXYIVOYNWOCAXRRTDZAWVGQLTTVNMFMVFIRTKGSXPEIJ");
    msg.values_list.assign("DZFHZBPILAKFJPMYGOJATQHFNTXESFKGCISJPJPKIDTQJBTRVROL");
    msg.min_value = 0.20586428674143797;
    msg.max_value = 0.31056913046772716;
    msg.list_min_size = 233U;
    msg.list_max_size = 135U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("EQINGZGBUDHYFZRWHTKKNDTXBIDGSIOLITWKRWVKAQJEODXVHZTLJAELREZIUSPFBQMCTSLZCWMGWPWODZXUSJFROPBXMFOZYUXZNHJCJSKMQJCGNGWAFIEAMGUY");
    tmp_msg_0.value.assign("CFIXTQUMSQMSVGCYICCEQLNVDMDDWPBLODSRCHHMPKEKIRVTVNGZYNSZLAARFQPTGZXZYKPHCACLUQWRJROFJHQSYUOLXBULBNDGFUQM");
    tmp_msg_0.values_list.assign("IHTXNNNHQDBAKTNWRIPSP");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 58U;
    msg.scope = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.9236054823927948);
    msg.setSource(34437U);
    msg.setSourceEntity(38U);
    msg.setDestination(56697U);
    msg.setDestinationEntity(244U);
    msg.param.assign("ZKTDRUNEKWOLPMMXFZMRZWBPATMFKTVFNVSWIZOSDVHPMNZAWQXSJEASGCECQZVHRVCNOHCPYUNWTEOIBIEBPJDGORFJQGWFKFCBGAYRLCYDHHOUJTMAUGDSSGBIOBJBCOXWMKQVFTIL");
    msg.value.assign("SQXQQWUQMYJVNCYQOEIPDMET");
    msg.values_list.assign("TYMXFGJFVZOHMWJUUXKZEHYLUTVPUDJWMQXLRGAFXJAFBNJLXAQQCHYNDEDMJCUYZHZGJELCWFQUIV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.26739679542607964);
    msg.setSource(64883U);
    msg.setSourceEntity(126U);
    msg.setDestination(53851U);
    msg.setDestinationEntity(10U);
    msg.param.assign("YJORMBOTGHRYNJLNQEQDMJRIRFDSIZKYINDSSWSHCSBXCVIJZTJDZCECKRMHJAFCEVETBVNIWOWQMKULPAUGQMG");
    msg.value.assign("ZMRHDBKPMZLESVVVCKBJFGTWZLJGGNIBDZFVYAZDWENFMRFTBWDDNWJEFOVDMHSIEGQFRCWZWJABWNMLSQZIVGTKUHEURXQJUHTNAITKLWARMSEUXTLURJBUYCJNKVYLAHBYAFOOIOCGQGOCCSZIDPPUVPPZCXHFAAXYGSTPPMLSDQRTXESLXERUTIZGHFXFBU");
    msg.values_list.assign("VYNGPUKHRLGFDEPTZCLRUQALUIGVJSPRKVJMDUYDVUDGCGVSDOKYNDGJWZNIJQURSWTSFXWJCYMUZOAUQNURZLYAOTAMBBOSJMLFYXLWPVUWVHPRMFJDXTFIXKIQEHLANZKXVILERHIXQAMDAIWCZCHBNWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.522244820493079);
    msg.setSource(65076U);
    msg.setSourceEntity(221U);
    msg.setDestination(14482U);
    msg.setDestinationEntity(6U);
    msg.param.assign("WHYEDATTVSILRZJBHTZMXCDKRBDYIOARUEUPGAKVISWPSXPEHDIVTLDOPXXFBZVQQFKUOGXWNIJZKKBNURLHJHAJLQKBISGPRRDXLZIEYLNMD");
    msg.value.assign("HKTOMEVGEQUOIMUTMOKYYKZHYUGJSYKAVLBFUNVAAGPXKDRWUDATCUHMTIZFIHZYYDEAADLBBEPEQSIJUOVXIEFUAQYJCUFLASVBWZSRNFTVAZMGGRFWUIONWEOFSBKOBRCRRNLZZDNJWZHK");
    msg.values_list.assign("HSTHJUJTWUBVIOF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.9742689632658534);
    msg.setSource(50439U);
    msg.setSourceEntity(9U);
    msg.setDestination(55893U);
    msg.setDestinationEntity(84U);
    msg.op = 151U;
    msg.version.assign("HZVRYHCSBOGLGCQOVZMYVXOBTDBCYUIHUHNCGMHOQCBKWJDINSXPWQMDGVJLRAJMNTRIEWOZXWIQRJJHRPDSYWIYKGQLOLTYZKFFODWVOVBJMENTUPPQAJFAFRSELGVTYHVNNXLAEZADXVNVAJSOAROFRIMWITHPPF");
    msg.description.assign("TAVNGQRCEMBZVG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.14833175633828266);
    msg.setSource(33002U);
    msg.setSourceEntity(1U);
    msg.setDestination(641U);
    msg.setDestinationEntity(163U);
    msg.op = 69U;
    msg.version.assign("RJDLMUMNHYPKGDAEVIHXGWRRXCZUBSBGUMOMEPROLUOYTGHWDHDCTQEWJDVQXBAAYKNLFARJREYBJICJMIIZWHKOHGHOUI");
    msg.description.assign("CUHGDAUCPCJLLKYOQYTWHZOGMNGJWRKLPJYJBQMAVSUNVTEATIBSZGRRUPAQPVXSJQVZOPRPDCYHQIAAVISZNRGTESQQHAJAHRMEJCNUAZUHODFM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.5903900278583128);
    msg.setSource(206U);
    msg.setSourceEntity(128U);
    msg.setDestination(50432U);
    msg.setDestinationEntity(30U);
    msg.op = 153U;
    msg.version.assign("BAKEZKUYSOFDGTTFMEACTWIHRRIFGLOQZMPDRPMEQIGEHPLBNJDVIVXAPACENJWOBTDZBXTIPOMMUCVCZYSUUEBNYUMGWCTJNSNXGKMOAEVPJVMWJB");
    msg.description.assign("SBEASBSUWQYJTGUPQFMMKVEITFNQMXNUNTKDVMIFMZJPPXPQQENJPMBQFXFWUSXCHSZHARSCHVNRFAPGCXHVKGOONPYONGIYPZXTPRVCLBYAFLBWLHCHERJHVLEVLRKGIUWCAGJWGUQWAUBHTOMBVRFYSHREBMAJCUXDZGSQBYNNDQIDAITZLOIITPJYBJJZDURXCYKOOEZHISWKEODKLDWAQVLMDTJMZVUFEGNDOLYAW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.7151492986661168);
    msg.setSource(23900U);
    msg.setSourceEntity(158U);
    msg.setDestination(49400U);
    msg.setDestinationEntity(17U);
    msg.value = 0.8833341970108348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.9302371053580938);
    msg.setSource(21256U);
    msg.setSourceEntity(44U);
    msg.setDestination(23865U);
    msg.setDestinationEntity(34U);
    msg.value = 0.9336506491179962;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.028906320221261717);
    msg.setSource(14669U);
    msg.setSourceEntity(117U);
    msg.setDestination(60845U);
    msg.setDestinationEntity(107U);
    msg.value = 0.10511490074548535;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.1271140015313944);
    msg.setSource(24935U);
    msg.setSourceEntity(173U);
    msg.setDestination(13808U);
    msg.setDestinationEntity(150U);
    msg.value.assign("UPOHKGSNXJTKVCDABHOOLWCWVFQRWVVGMSTPXXPMLUPOSRCTBGGXHCAGSZLPDFODCNFTXMDMWNCKAYJBEEGKLBJOWHRBQQUEQKOBPOLHHUAEJDDLHYYJZSRAQJSPFWLKMVVQILDATTINQYKYNYWGKXQUACBVLMXTQUXFHFVPNZZTWWIUWFNPMN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.700761850428143);
    msg.setSource(63860U);
    msg.setSourceEntity(233U);
    msg.setDestination(24581U);
    msg.setDestinationEntity(207U);
    msg.value.assign("SOLYNHZFCNMGKBRZPRWXTMZDICMDVQCXOZKHXMVNCYCYGZEKGUUEYTPJIUOAQXDDLYZBFVQUVHQSYALWHGINJTGXSZIEOKWRWAHPVDDJEPLLSVXYFRBBPSMKMWVFPJVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.436269831057299);
    msg.setSource(27092U);
    msg.setSourceEntity(19U);
    msg.setDestination(28748U);
    msg.setDestinationEntity(64U);
    msg.value.assign("TTWKCMNNIPXHBGQYAVEQQFXGHKMKVOMBWYVQRCIUWRFDNJOLXPCDLLXCMJQYWHISJDHBLLJSTQZDZWKJUJKFWJNVSLBKHEFDEVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #2", msg == *msg_d);
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
