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
// IMC XML MD5: 054f482636bfa96a42ed8b9f615992ee                            *
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
    msg.setTimeStamp(0.17421570646370177);
    msg.setSource(7705U);
    msg.setSourceEntity(61U);
    msg.setDestination(13995U);
    msg.setDestinationEntity(113U);
    msg.state = 183U;
    msg.flags = 77U;
    msg.description.assign("ENFBTLACIJQUGEVOMNCERMPBPWGEDJCYDHUPMJXRNVQBIVYYHEDAOOQCXGLFWJUANKIHASEMVRUFSXVTAWAFZUVUCWFHYBJGFMDGYSKVWTAZKCNHJHGXVKOLNHSCSKTCLYWTIDBENSOMTXAZQUKAJYQZICWHHDZSUFXTBLFRSPIIBSRNKYLTRKGWMXQLPYOIXYFLWQPPDZE");

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
    msg.setTimeStamp(0.7519766970743254);
    msg.setSource(15189U);
    msg.setSourceEntity(145U);
    msg.setDestination(16794U);
    msg.setDestinationEntity(108U);
    msg.state = 210U;
    msg.flags = 247U;
    msg.description.assign("TGGIVFYWDOPSXIHXMBCWPXRXEKXTJQBNGWQTNOJVGLQAKJXRANNTRSUVLKBCEOFLOTTYIKDIHYMLNK");

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
    msg.setTimeStamp(0.5143124221251435);
    msg.setSource(24396U);
    msg.setSourceEntity(38U);
    msg.setDestination(57180U);
    msg.setDestinationEntity(24U);
    msg.state = 146U;
    msg.flags = 93U;
    msg.description.assign("MXNKUBAYGESZYFXXBYNQUCEVQLCULPHEKRPVQKCSZIMFGCRSHJZHVXIISPTHURYTAIMBHDLFJILDBJVYXWQDBHTBERQZVOQOSRFUKPYOOGFEYRTMBPMFKVGADKRJZMVCUZUGEWOJDMIHINWXGOSIHEDPDCNUKMASGBTARJJVWTPLTAWOSJGLLOBNXAHW");

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
    msg.setTimeStamp(0.06733539483083661);
    msg.setSource(27497U);
    msg.setSourceEntity(123U);
    msg.setDestination(56040U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.2711567527385198);
    msg.setSource(27074U);
    msg.setSourceEntity(161U);
    msg.setDestination(34398U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.937644888732604);
    msg.setSource(169U);
    msg.setSourceEntity(59U);
    msg.setDestination(33411U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.6447128792323858);
    msg.setSource(44956U);
    msg.setSourceEntity(27U);
    msg.setDestination(38370U);
    msg.setDestinationEntity(172U);
    msg.id = 45U;
    msg.label.assign("JBARVOOQYAHHECMOJRMEFZKSSFYNVUYD");
    msg.component.assign("WBTRBUXXFPLPTPDPKSHKBXIPJBWQEACMHIAQTYPUWOHFAJPUHTZJSJCZAEQHLBLTOGOAMOUGVIHXHSDYCQLSIMAKOEJNHTYBBWKLZMIIKRRZOZFFZXELKREDUIFSDCWWWZAQOSOHWKQUDXRNFMYCTSZXXYSMKGVZENHCR");
    msg.act_time = 36898U;
    msg.deact_time = 10492U;

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
    msg.setTimeStamp(0.4682987599120909);
    msg.setSource(64882U);
    msg.setSourceEntity(119U);
    msg.setDestination(53758U);
    msg.setDestinationEntity(77U);
    msg.id = 198U;
    msg.label.assign("FUPIZFJCSDUNZJJGFVOAKLLEEHDGJXHDFAYNKVMABVEMKDZNOWFELLTNTBPVPWJADHXTNITKMHWRCCGKHNIOMLBRKDHVKTBBRIZYBOXYFBTACDYPSWQPMEWSJVSXCVZRIJJTKULDICUPRMKMDUQRGRC");
    msg.component.assign("NSJDGHBJKAZSAOVUXTLIKYGPNVOHFTACPNMOBYBVJFDXHWDQIVWLYCKLLXMMBWGZKQFJZNFMUZAAHIGQHSEDXPRYPKTDDSRICXGJGHNPODEUJQLXWVDQEFVUDTJPNTNOIPSBCVNXUCCVIZUKSSLVDKZUNBOPCMMQNSRLTMTKSKOQBJXYIGCWQTFQYQLAJLFHWTYZELRYMWHEIBATWFGEAXBUYPHSOERUYGREUPRGEMZ");
    msg.act_time = 6971U;
    msg.deact_time = 22780U;

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
    msg.setTimeStamp(0.7805174763792977);
    msg.setSource(51298U);
    msg.setSourceEntity(147U);
    msg.setDestination(29535U);
    msg.setDestinationEntity(79U);
    msg.id = 245U;
    msg.label.assign("BHKJQVLGSGVZIQJQFWIBPTBNSGXMAEQUBLHVMLHNXODBITXICDNQW");
    msg.component.assign("AUJDFFLKLGWEOEXESGLPBBBTAIVRAKEIPAVSHPXVGXFWBIPYRXGOKNHQILMDVYBQLQOCPCAHWUFEOKQRQWEFRBMWINJFNJCLSOEQWITLQDARCVFZZMRWDDGY");
    msg.act_time = 20114U;
    msg.deact_time = 7320U;

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
    msg.setTimeStamp(0.5509537020753547);
    msg.setSource(57733U);
    msg.setSourceEntity(149U);
    msg.setDestination(62268U);
    msg.setDestinationEntity(66U);
    msg.id = 3U;

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
    msg.setTimeStamp(0.4311112355688581);
    msg.setSource(19299U);
    msg.setSourceEntity(176U);
    msg.setDestination(49396U);
    msg.setDestinationEntity(238U);
    msg.id = 61U;

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
    msg.setTimeStamp(0.9180272464434382);
    msg.setSource(7141U);
    msg.setSourceEntity(131U);
    msg.setDestination(60430U);
    msg.setDestinationEntity(15U);
    msg.id = 247U;

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
    msg.setTimeStamp(0.4095764578695441);
    msg.setSource(52026U);
    msg.setSourceEntity(186U);
    msg.setDestination(64019U);
    msg.setDestinationEntity(253U);
    msg.op = 167U;
    msg.list.assign("JOAJDPGTGUSFBJIJFKYCREOLFTMSBGZHTTVRSWTAYNHVZFHDWOOCKOHJRSUWZJHDFGNIPMMWBEYTCVNJEQMNVKFHWYPCXINK");

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
    msg.setTimeStamp(0.35428380064538856);
    msg.setSource(65151U);
    msg.setSourceEntity(198U);
    msg.setDestination(39171U);
    msg.setDestinationEntity(216U);
    msg.op = 19U;
    msg.list.assign("NUGXFQMOWXSMBDBWNHYGJFM");

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
    msg.setTimeStamp(0.3450005674861746);
    msg.setSource(25265U);
    msg.setSourceEntity(53U);
    msg.setDestination(30713U);
    msg.setDestinationEntity(194U);
    msg.op = 95U;
    msg.list.assign("OOESUGLELWBHBAUNNNKPCTWZWSHUODYFKDVCCTFQBJQONXKAOYBYBZAASQJYBFRPYVQMNQTTLAQECGTOLCFYYUAVGNGOPXVICFEMNJDXXCQPHRAXWKHRPSIRPWNGGLXOHBSJSRWLPBSIKESMGMNFUVCMQADFMKHPZEUWCFAVWCSMRLXZDNJGIEWRTDZILMKZDUGIZEPR");

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
    msg.setTimeStamp(0.5400453733649725);
    msg.setSource(6169U);
    msg.setSourceEntity(155U);
    msg.setDestination(2330U);
    msg.setDestinationEntity(75U);
    msg.value = 158U;

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
    msg.setTimeStamp(0.4355601802545027);
    msg.setSource(35744U);
    msg.setSourceEntity(158U);
    msg.setDestination(10982U);
    msg.setDestinationEntity(207U);
    msg.value = 27U;

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
    msg.setTimeStamp(0.26489968204442904);
    msg.setSource(38423U);
    msg.setSourceEntity(16U);
    msg.setDestination(5057U);
    msg.setDestinationEntity(143U);
    msg.value = 2U;

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
    msg.setTimeStamp(0.28041204857679747);
    msg.setSource(26205U);
    msg.setSourceEntity(184U);
    msg.setDestination(49905U);
    msg.setDestinationEntity(207U);
    msg.consumer.assign("DICVNSJTTNZKHYBZZYFQBWUGOISSQPJIGSUMMFNDECKXJZSIMFIOVTEERIDZKHOHCJGEXLYFNHIGJPUXWIBBNXZ");
    msg.message_id = 61032U;

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
    msg.setTimeStamp(0.18358064349112369);
    msg.setSource(37491U);
    msg.setSourceEntity(78U);
    msg.setDestination(35346U);
    msg.setDestinationEntity(205U);
    msg.consumer.assign("HKCYGOVSZRYYBQPHENKSJYLCHHDQXMYDJIOONSMEVVTHPCZGMUZPBJRIYTIAIHCWTKCIWDSVNCEWIBSGPXKZBMAZKMEJGZPMBIUIFTUCAGQTBHXQQGYTXAORYSKPWSZNWKMPOJSVNEQXLXWBRYFAGOLVJKQDEDZWXDFHFXYNMIUDLRMTXFULRZBEG");
    msg.message_id = 53995U;

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
    msg.setTimeStamp(0.5131579978414318);
    msg.setSource(52359U);
    msg.setSourceEntity(252U);
    msg.setDestination(50506U);
    msg.setDestinationEntity(73U);
    msg.consumer.assign("QLYZBFSLFZQYP");
    msg.message_id = 8083U;

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
    msg.setTimeStamp(0.7790607325397935);
    msg.setSource(63814U);
    msg.setSourceEntity(110U);
    msg.setDestination(60733U);
    msg.setDestinationEntity(0U);
    msg.type = 35U;

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
    msg.setTimeStamp(0.48772480026282505);
    msg.setSource(4297U);
    msg.setSourceEntity(15U);
    msg.setDestination(47671U);
    msg.setDestinationEntity(135U);
    msg.type = 71U;

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
    msg.setTimeStamp(0.859802049945801);
    msg.setSource(22971U);
    msg.setSourceEntity(220U);
    msg.setDestination(51375U);
    msg.setDestinationEntity(74U);
    msg.type = 85U;

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
    msg.setTimeStamp(0.8899107126573875);
    msg.setSource(60480U);
    msg.setSourceEntity(64U);
    msg.setDestination(27855U);
    msg.setDestinationEntity(88U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.9039511131077456);
    msg.setSource(28986U);
    msg.setSourceEntity(175U);
    msg.setDestination(52697U);
    msg.setDestinationEntity(114U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.587170235740577);
    msg.setSource(50384U);
    msg.setSourceEntity(95U);
    msg.setDestination(53094U);
    msg.setDestinationEntity(16U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.8524705425688394);
    msg.setSource(34445U);
    msg.setSourceEntity(187U);
    msg.setDestination(35088U);
    msg.setDestinationEntity(104U);
    msg.total_steps = 251U;
    msg.step_number = 254U;
    msg.step.assign("UUDVIEORNJFFTNPBVLKJKAVMILDIYOAROZPQERMLAFRYWDAETANZGSLDBZZBLZOKRUVHWYZCLNPIMGTXBSCTOKJPPHQGTCLZAJUDJUZYSJKUXMWN");
    msg.flags = 148U;

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
    msg.setTimeStamp(0.9893077805190831);
    msg.setSource(13954U);
    msg.setSourceEntity(197U);
    msg.setDestination(52833U);
    msg.setDestinationEntity(169U);
    msg.total_steps = 19U;
    msg.step_number = 146U;
    msg.step.assign("SSEOZPPOAYKQFVMTEEBZHBFZXLYXFICRBLNKKRXWTZWSUYAINXNVXYOEMDZNRDOZOMHKYHAFKBYHHMWCQDQESSERDLVPZAAAXGGPRGQUBCWGQZUBMSFVSMZPEODFWQIHCNPCJDWMNQDQOCNKURYXFKIGLDJRTMKXKCGIICUVVLJ");
    msg.flags = 101U;

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
    msg.setTimeStamp(0.07705082233216987);
    msg.setSource(10243U);
    msg.setSourceEntity(90U);
    msg.setDestination(13829U);
    msg.setDestinationEntity(223U);
    msg.total_steps = 183U;
    msg.step_number = 16U;
    msg.step.assign("FPDNKYVSLXPKNFRBJWOVLAZIHIHCZSLPYXCUCLJUPNLKOIXUDWEAOUWJRTTMMDHQNAHEELIYPMRWWVGTEITROWVAJOZGMJQDPGTIQKOFMDNHAGPROBLIYXUSZMNMCPWLHCDOGQRDGQNWTSZUYKXGFFUBSZPIO");
    msg.flags = 14U;

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
    msg.setTimeStamp(0.5070276747441155);
    msg.setSource(11688U);
    msg.setSourceEntity(145U);
    msg.setDestination(55081U);
    msg.setDestinationEntity(111U);
    msg.state = 187U;
    msg.error.assign("ODRDCLJGSPCVZATJUGMMJCTKKPZAVCTISDJBGZCSBBBPHYOQRTDWAYHLAFPSIJAHTXDQUPRKYUZYSIDXJPM");

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
    msg.setTimeStamp(0.04847851433690964);
    msg.setSource(63695U);
    msg.setSourceEntity(242U);
    msg.setDestination(65306U);
    msg.setDestinationEntity(122U);
    msg.state = 45U;
    msg.error.assign("GJZAREKITFUANPBCJQLAMZKLILYHDOEFMVBJHXEQLBPSNDKEHKOVMRUDUYJCTGXBPTGMLQNM");

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
    msg.setTimeStamp(0.20173001906380994);
    msg.setSource(22524U);
    msg.setSourceEntity(64U);
    msg.setDestination(21818U);
    msg.setDestinationEntity(195U);
    msg.state = 45U;
    msg.error.assign("DCDHMOODBIOKAANQZCPRUWZTYBXVPEGOUJFKLYFSVLIDYSIAWIRBGBJZCKKRGHWUQHSNVMXLDEGQV");

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
    msg.setTimeStamp(0.8685791087809436);
    msg.setSource(29934U);
    msg.setSourceEntity(196U);
    msg.setDestination(33654U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.7133702485477639);
    msg.setSource(59951U);
    msg.setSourceEntity(224U);
    msg.setDestination(52711U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.4495941766604099);
    msg.setSource(39961U);
    msg.setSourceEntity(202U);
    msg.setDestination(48082U);
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
    msg.setTimeStamp(0.47227505147125237);
    msg.setSource(58626U);
    msg.setSourceEntity(226U);
    msg.setDestination(7710U);
    msg.setDestinationEntity(116U);
    msg.op = 146U;
    msg.speed_min = 0.39782974336217214;
    msg.speed_max = 0.2650581681128281;
    msg.long_accel = 0.7983158064015309;
    msg.alt_max_msl = 0.44691086162784344;
    msg.dive_fraction_max = 0.9141429475022584;
    msg.climb_fraction_max = 0.41634920087232286;
    msg.bank_max = 0.29535971019317186;
    msg.p_max = 0.4215486678751811;
    msg.pitch_min = 0.07002671750662748;
    msg.pitch_max = 0.7270105579027318;
    msg.q_max = 0.5960028153964212;
    msg.g_min = 0.7484816103992247;
    msg.g_max = 0.22688759464732977;
    msg.g_lat_max = 0.5596752701935169;
    msg.rpm_min = 0.39408698456804103;
    msg.rpm_max = 0.9857277895656619;
    msg.rpm_rate_max = 0.967815971755132;

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
    msg.setTimeStamp(0.4256661228082137);
    msg.setSource(1491U);
    msg.setSourceEntity(36U);
    msg.setDestination(18362U);
    msg.setDestinationEntity(158U);
    msg.op = 64U;
    msg.speed_min = 0.3260465439447864;
    msg.speed_max = 0.5050452163631595;
    msg.long_accel = 0.6504190436967009;
    msg.alt_max_msl = 0.3926585447882115;
    msg.dive_fraction_max = 0.19608278834111337;
    msg.climb_fraction_max = 0.23044709272179897;
    msg.bank_max = 0.9051580996088908;
    msg.p_max = 0.025451638309692992;
    msg.pitch_min = 0.12135459226768452;
    msg.pitch_max = 0.9166032003052554;
    msg.q_max = 0.044149235374909446;
    msg.g_min = 0.5831235182475241;
    msg.g_max = 0.22886249120115798;
    msg.g_lat_max = 0.5425449962958362;
    msg.rpm_min = 0.5356324855697585;
    msg.rpm_max = 0.7051006808589393;
    msg.rpm_rate_max = 0.020611134813877885;

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
    msg.setTimeStamp(0.11923495836626019);
    msg.setSource(50256U);
    msg.setSourceEntity(148U);
    msg.setDestination(8103U);
    msg.setDestinationEntity(136U);
    msg.op = 156U;
    msg.speed_min = 0.8207808574206545;
    msg.speed_max = 0.9058233310756202;
    msg.long_accel = 0.4872118078107519;
    msg.alt_max_msl = 0.44090772169717807;
    msg.dive_fraction_max = 0.8623134762187709;
    msg.climb_fraction_max = 0.16063155427332254;
    msg.bank_max = 0.23825306307270677;
    msg.p_max = 0.7649360903055911;
    msg.pitch_min = 0.6782051765110877;
    msg.pitch_max = 0.21888710255055466;
    msg.q_max = 0.8815795963667193;
    msg.g_min = 0.4481280420307;
    msg.g_max = 0.18384877787809872;
    msg.g_lat_max = 0.35101339651070185;
    msg.rpm_min = 0.11682973691821419;
    msg.rpm_max = 0.5649962452141679;
    msg.rpm_rate_max = 0.9374046322301441;

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
    msg.setTimeStamp(0.038339403939979255);
    msg.setSource(7397U);
    msg.setSourceEntity(63U);
    msg.setDestination(47098U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.971936444624392);
    msg.setSource(32789U);
    msg.setSourceEntity(141U);
    msg.setDestination(18555U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.29889770352901013);
    msg.setSource(12109U);
    msg.setSourceEntity(250U);
    msg.setDestination(44223U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.07075058750950847);
    msg.setSource(16024U);
    msg.setSourceEntity(133U);
    msg.setDestination(25481U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.16632556106510843;
    msg.lon = 0.23115603164415455;
    msg.height = 0.08503136699879665;
    msg.x = 0.20003074703742507;
    msg.y = 0.16069019800564688;
    msg.z = 0.5029533177174653;
    msg.phi = 0.5842479935233222;
    msg.theta = 0.27034140282924324;
    msg.psi = 0.0023487619442166263;
    msg.u = 0.532316725325703;
    msg.v = 0.7759869048018091;
    msg.w = 0.24742171212751785;
    msg.p = 0.2848269819601743;
    msg.q = 0.6788984339858113;
    msg.r = 0.38033933890684923;
    msg.svx = 0.380990714190375;
    msg.svy = 0.892952082173737;
    msg.svz = 0.811873643050748;

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
    msg.setTimeStamp(0.4370805409471046);
    msg.setSource(16787U);
    msg.setSourceEntity(212U);
    msg.setDestination(58710U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.8900996940450556;
    msg.lon = 0.35959882691023715;
    msg.height = 0.36741926569983774;
    msg.x = 0.03899278762765024;
    msg.y = 0.4446075073161657;
    msg.z = 0.3539917666998449;
    msg.phi = 0.07903510543465608;
    msg.theta = 0.9342893618765716;
    msg.psi = 0.724781718691668;
    msg.u = 0.4922419929194257;
    msg.v = 0.7301009778787095;
    msg.w = 0.3859876423123436;
    msg.p = 0.37548081261712063;
    msg.q = 0.052096716489722916;
    msg.r = 0.8950986363107927;
    msg.svx = 0.9617068640554189;
    msg.svy = 0.2913298289952012;
    msg.svz = 0.12154622566255346;

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
    msg.setTimeStamp(0.650131757298383);
    msg.setSource(35734U);
    msg.setSourceEntity(65U);
    msg.setDestination(14906U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.6346347214440016;
    msg.lon = 0.5887381316181061;
    msg.height = 0.7593879498422801;
    msg.x = 0.2052292759085339;
    msg.y = 0.9001963931324001;
    msg.z = 0.867731120348603;
    msg.phi = 0.8012314555365208;
    msg.theta = 0.8453611925813109;
    msg.psi = 0.9979396798948211;
    msg.u = 0.45092968559000657;
    msg.v = 0.7149971306973741;
    msg.w = 0.09317631507846136;
    msg.p = 0.7079674740356378;
    msg.q = 0.9806736504525232;
    msg.r = 0.4124612121031951;
    msg.svx = 0.23394780705402618;
    msg.svy = 0.9624657910747415;
    msg.svz = 0.03997195296493916;

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
    msg.setTimeStamp(0.23224612640433695);
    msg.setSource(48108U);
    msg.setSourceEntity(94U);
    msg.setDestination(32349U);
    msg.setDestinationEntity(231U);
    msg.op = 67U;
    msg.entities.assign("ECQCYJCHDGUTYWKUUSPPUQMPHMSFIA");

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
    msg.setTimeStamp(0.06328444692434843);
    msg.setSource(24529U);
    msg.setSourceEntity(138U);
    msg.setDestination(17241U);
    msg.setDestinationEntity(194U);
    msg.op = 60U;
    msg.entities.assign("LLBIFQQJRRZOWSMDXRJKTRBYFXPCAACXQOEBFCTDUGHMVEAIOSURNDVKDWBYYOWBQCLZYNBYGPQTMBUZPZWHVFQEWACTJBCUSHLEPLHEXKHNDRFUHMAXIWSYGNNLPTXMGGZWSEZKFQO");

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
    msg.setTimeStamp(0.24236708392149353);
    msg.setSource(53958U);
    msg.setSourceEntity(146U);
    msg.setDestination(36505U);
    msg.setDestinationEntity(236U);
    msg.op = 59U;
    msg.entities.assign("JPLIEPDBHLBZUQMHHKEUVEYIPTXKGFZRWKUAAOXDWDSAMKZAKDWTNLFYYNYNRKMCLHJOLQDFUQIMFOSDQHAHPMOTPZJNRXQATHXSWOXTZPUKPSJWROWISBZNSQSSUWUENQOCSQVFXGWCCEERMHGDMACTGUEBPZQLXKSIIHDBYFFIKYLVAIVNJTARMEGWCGFCYLBYUJZTMKCWJFYFTRLVU");

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
    msg.setTimeStamp(0.6729441563142802);
    msg.setSource(55646U);
    msg.setSourceEntity(40U);
    msg.setDestination(51524U);
    msg.setDestinationEntity(156U);
    msg.type = 222U;
    msg.speed = 3072U;
    const signed char tmp_msg_0[] = {-42, 100, -115, 50, 107, -66, -76, -33, -82, -56, -13, -14, 38, -84, -49, -12, 55, -65, 24, -103, -122, 14, -8, 70, 103, 37, -22, -10, -30, -35, -7, -65, -9, -113, -75, 16, 120, 24, -122, -77, 122, -90, -126, -82, -85, -95, 73, -89, -88, 4, -127, 93, 31, -51, -75, -123, -100, 49, -80, 66, 53, 25, 80, -60, -123, 93, -73, 57, 34, -67, 106, 109, 58, 124, -93, 79, 47, 29, 114, 13, 43, 20, 7, 39, -39, -113, 117, -15, 91, -125, 106, 10, -34, 12, -35, -127, 100, 18, 52, 26, 43, 30, -127, -67, 100, -80, -40, -28, 101, -70, -43, -12, -67, 123, 14, 8, 55, -14, 53, 96, 43, -50, -88, 54, 78, 18, 6, -27, 104, 15, -113, 124, 85, 69, 8, -98, -78, 101, 41};
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
    msg.setTimeStamp(0.42961649599422347);
    msg.setSource(20451U);
    msg.setSourceEntity(144U);
    msg.setDestination(39707U);
    msg.setDestinationEntity(7U);
    msg.type = 120U;
    msg.speed = 35533U;
    const signed char tmp_msg_0[] = {95, -73, 19, -65, -66, 113, 60, -81, 36, 76, 126, 15, 55, -63, -53, -86, -93, 76, 96, -99, -115, -100, -2, 3, -90, -117, -79, 32, -117, -94, -126, -42, 47, 124, 115, -90, -106, -96, 83};
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
    msg.setTimeStamp(0.8636954489175831);
    msg.setSource(19155U);
    msg.setSourceEntity(66U);
    msg.setDestination(18325U);
    msg.setDestinationEntity(100U);
    msg.type = 193U;
    msg.speed = 5511U;
    const signed char tmp_msg_0[] = {77, 121, -72, -60, 19, 82, 9, 48, -73, 111};
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
    msg.setTimeStamp(0.12729628608509413);
    msg.setSource(48183U);
    msg.setSourceEntity(32U);
    msg.setDestination(29754U);
    msg.setDestinationEntity(43U);
    msg.op = 68U;
    msg.tas2acc_pgain = 0.45679131271168516;
    msg.bank2p_pgain = 0.02850314575979751;

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
    msg.setTimeStamp(0.6236583904501446);
    msg.setSource(33419U);
    msg.setSourceEntity(39U);
    msg.setDestination(19039U);
    msg.setDestinationEntity(228U);
    msg.op = 88U;
    msg.tas2acc_pgain = 0.10087024204984874;
    msg.bank2p_pgain = 0.6573762448874378;

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
    msg.setTimeStamp(0.8214877743347033);
    msg.setSource(57552U);
    msg.setSourceEntity(151U);
    msg.setDestination(26920U);
    msg.setDestinationEntity(7U);
    msg.op = 185U;
    msg.tas2acc_pgain = 0.27553118513949604;
    msg.bank2p_pgain = 0.880828098765539;

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
    msg.setTimeStamp(0.6621257500855957);
    msg.setSource(25184U);
    msg.setSourceEntity(120U);
    msg.setDestination(39538U);
    msg.setDestinationEntity(101U);
    msg.available = 1267668824U;
    msg.value = 100U;

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
    msg.setTimeStamp(0.8517967239958281);
    msg.setSource(59813U);
    msg.setSourceEntity(210U);
    msg.setDestination(42774U);
    msg.setDestinationEntity(16U);
    msg.available = 236054996U;
    msg.value = 199U;

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
    msg.setTimeStamp(0.4364227976487326);
    msg.setSource(8833U);
    msg.setSourceEntity(245U);
    msg.setDestination(17234U);
    msg.setDestinationEntity(214U);
    msg.available = 4058344592U;
    msg.value = 145U;

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
    msg.setTimeStamp(0.8413656590401933);
    msg.setSource(58350U);
    msg.setSourceEntity(160U);
    msg.setDestination(43457U);
    msg.setDestinationEntity(82U);
    msg.op = 20U;
    msg.snapshot.assign("RYFHYIDYGACNTFOZLKVVTXHVBCTPYSGHRJXLQUXTDDINPWUGETJGZSPHMXPHRAIYAMBGLZOIRXANQGOWLZQEQEGX");
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 6682U;
    tmp_msg_0.sys.assign("OTSXSXRMURKLNCGTMKXLLYIJHHRAZOPFPMVLTVQLLDAUNJRNZEBEEUMPVZZHOKJGEBPAXHRCBFZYOEFNQTQCEIPHWZJKRFYFP");
    tmp_msg_0.value = 0.6186312403738601;
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
    msg.setTimeStamp(0.09473099465654411);
    msg.setSource(6434U);
    msg.setSourceEntity(28U);
    msg.setDestination(6568U);
    msg.setDestinationEntity(114U);
    msg.op = 38U;
    msg.snapshot.assign("YOMIGPBTAJVASLJVDSQBKVXMCFOFIOYWGYLNHEFIHTUXHBPDSLLZYDPXJVLOJBLCFYZAYRIQPQGXZFVKHDAEXKIRCRIQHKWMWWONIQNIVHTXFRGTAGPUBLPNBWMBYVGHRZECKSGMHNHDHGFDTWFYEIRRUFKZCNZUAJNNYOTWZCDSPTPXJEDQSVXBQVQTWW");
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 136U;
    tmp_msg_0.mnames.assign("UZTRITNLKS");
    tmp_msg_0.ecount = 30U;
    tmp_msg_0.enames.assign("WJAFLYQYRHSAPELVCTTKSYZUPEKIORPZOZOISHRJBDGTABCZUVVBDOJ");
    tmp_msg_0.ccount = 2U;
    tmp_msg_0.cnames.assign("SBYLRNHBZPOQYPDBKXIUQJGLNYTDTPIBFLQZEIUJACJWDFAWWVCCRQBXVBUMLJMNESKOBJCKRGAKXIHILKWCSGUZRKSRPYNNXJEIGLTQBMDXNAXKYXPHDZLEWIDPMEVHWRAFFFSHDTSEIQYYOFSONAMY");
    tmp_msg_0.last_error.assign("MFHLPCYNVKXQVUZOUGBUXHRJMNINTRLKDMTVTTCGGLJUZMPESTEZOTGBBDSKAPZWUYUDBHVYSZHIPXRAHSQIQYQYFOXNZFMVWOKIUXLPVYLEPNFSQJMJLWVQSMUZXBNFPGZAGHAZVTHQUOPTAILEYRNAKCREWROVPFEROJQYCINKAMJBYMRWDFJGBOQNKIEAWLDDCODSFJGYCPSGWREDCMGDHKONIRASXFCIBFEAVWHJK");
    tmp_msg_0.last_error_time = 0.2904263408472364;
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
    msg.setTimeStamp(0.8451367365945951);
    msg.setSource(65399U);
    msg.setSourceEntity(238U);
    msg.setDestination(4025U);
    msg.setDestinationEntity(159U);
    msg.op = 97U;
    msg.snapshot.assign("OVQLHLYJQVSFQMPUXNGIINDSYVSMQQGDJPNMRCWZCLACTOGIDWHPKHVZJMTDXEN");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 113U;
    tmp_msg_0.htime = 0.5588676524963896;
    tmp_msg_0.context.assign("QFFKMMYHVTWNPXCBKGZOBECPAXLHSDGCYSQMQWTIVZCXNPFSWAUWKBANYWIOKTBNJWVSMDIJCTYTKIIDZVFNMIPEEQAMLOQHZHROVGFLJYMDLSSCJHCFGAOBMQGXKO");
    tmp_msg_0.text.assign("IAVTNAVGEWVSRLVEXNHJLEJDLQURUYIDSGPYTBINLGCMHIQVUEGBCGBLYXWAAAJNMMPVNTMOFZDVZUQWXRMSDUQIZLXDGNFMOEKSIOVMQOKTPPGXFJWTKWRQPVICRFJVZJCBYZCXSRSZRZLTRMTDWQPJGFBXFAKSFJPYTISBCUAYFZNUOWNOMWOBYCCGAKPZQRBAHDZERAEINCXQUFCODTHWPO");
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
    msg.setTimeStamp(0.5953928687711388);
    msg.setSource(3611U);
    msg.setSourceEntity(14U);
    msg.setDestination(11505U);
    msg.setDestinationEntity(77U);
    msg.op = 84U;
    msg.name.assign("KKBGRHDBGETXUAPHHSNXAZYEVRHVQOKUZNTQPXRHNILOSETKHEPJQAIWWGUGJAJGHDYOQKXODNBYRTRVUNPEMPMZYQJICNANLSWMYVDZVIFEKTKDRXTLVVLVESCFYSVGCJCUQSDRIXOTEDJUSPHCXFHGLFFWMQGUBJAKCJGJLFABWCQWYYTOUPQPZAYYRIBSOFFDXWLHIAZKTMILXBNLNVR");

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
    msg.setTimeStamp(0.5694692362784384);
    msg.setSource(30207U);
    msg.setSourceEntity(232U);
    msg.setDestination(58684U);
    msg.setDestinationEntity(47U);
    msg.op = 75U;
    msg.name.assign("DKOQLHJYNJKBXYNIJVZETCGEXVPBXMVUYMSPWUOXQWKAKHFEZWUJNYVVBESFFWAYAIUAGASWRUQZDU");

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
    msg.setTimeStamp(0.32119371702574206);
    msg.setSource(10074U);
    msg.setSourceEntity(137U);
    msg.setDestination(20004U);
    msg.setDestinationEntity(136U);
    msg.op = 64U;
    msg.name.assign("TIRZXCIUGRPAWEJDYJDCNQTRSHDUAZMPQMVKGATMQNMTFHDOWNFBSOXVUUKWVTOXUWWDBVPMMCCKZVRIVZHIJDXGDPOFOHRKCBBATFFAVEGTKVWUMHYRSPYJXQDZHWEAGULXAYCEJFPZFIUJWVGLKOLWSEOBACMLE");

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
    msg.setTimeStamp(0.7946471553185335);
    msg.setSource(27840U);
    msg.setSourceEntity(21U);
    msg.setDestination(45647U);
    msg.setDestinationEntity(220U);
    msg.type = 49U;
    msg.htime = 0.7410461467743575;
    msg.context.assign("GWLMOSNNZGVFCCBKIVAACAYOFDUGJPIXPFHLJZIHZHKKOUDCHVVAHFWNPTJTYZNRIPFRDNEHPHIXHOSMAUBFQBEDVCPTIVBHZEOWIQWFFOSYKWTBOZLPERDMLSITKXGIMJKQVCWMWZLGDBDJQRPYYKXUMTUNCWTZROBGJQVGIVOXEJNLQKQWRTASNAEVSLUDYXFYZX");
    msg.text.assign("FQKYXTNBFGJAXMOIVSVMROSJMUCWHSLIMNQDGEJWXUKUVGPIFWLLPOUAPFYECZKXVVDRYVIIDDRCJETTZPQLCXIBCDARNPBYQVWETCHSZMWCFHFZRTJPBPQVLZGDQUTHABIMLSSNSHRGOCSFFIKYKHKWHQOJATNAEZUWYTEYAVOLULNYSGYNXDUNWKPRJCXPDRUJZAQBERDUHJMQF");

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
    msg.setTimeStamp(0.5848982383321609);
    msg.setSource(44390U);
    msg.setSourceEntity(78U);
    msg.setDestination(36131U);
    msg.setDestinationEntity(189U);
    msg.type = 159U;
    msg.htime = 0.11746710694426155;
    msg.context.assign("XZGASELPDNKEEMKH");
    msg.text.assign("ZFQZIXKHUPDEFRTBAVSQYNSWLBVMCGRRSLSYYDDUWHTXDURKOPCZCEVBWPDYGLJFCXSZTKNWRQTTMUVTOZPWFRNAGCIUKMGBQHYMPJTKQEYKXQLOIQMHZWGSLJSDBJQVDIUTPTGGLLXBNRQKNIEWZJGACJFWHLYVSZRIFACUOOSIYKVDFMHSXAUIXEHVHMMEEPOVE");

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
    msg.setTimeStamp(0.7844383090478824);
    msg.setSource(7999U);
    msg.setSourceEntity(22U);
    msg.setDestination(9670U);
    msg.setDestinationEntity(58U);
    msg.type = 6U;
    msg.htime = 0.2289687897859941;
    msg.context.assign("IDQMHGMAFTQEXYKDTDNSMWGKNP");
    msg.text.assign("WAHSWMZQFDRPBBEBPSLGWCHQLCCFGOYEZDNIUTDSXLIRTMEXDKWOVRUYRYMTDKXICEPBIOHNYLRLQMPECAPRKZIPSWNTVPWNJFAJWSZNJAJVWBUDXJBEGUHCMJFXLICYBQVLPNWQFDRLDUVOAXVIKKY");

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
    msg.setTimeStamp(0.7208781312678206);
    msg.setSource(4871U);
    msg.setSourceEntity(194U);
    msg.setDestination(35923U);
    msg.setDestinationEntity(89U);
    msg.command = 229U;
    msg.htime = 0.3029605423536361;

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
    msg.setTimeStamp(0.9944845093052971);
    msg.setSource(28276U);
    msg.setSourceEntity(74U);
    msg.setDestination(6861U);
    msg.setDestinationEntity(165U);
    msg.command = 217U;
    msg.htime = 0.056646668581059934;

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
    msg.setTimeStamp(0.16426875419633247);
    msg.setSource(47101U);
    msg.setSourceEntity(210U);
    msg.setDestination(4056U);
    msg.setDestinationEntity(159U);
    msg.command = 248U;
    msg.htime = 0.032597731482070236;

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
    msg.setTimeStamp(0.8663123520033167);
    msg.setSource(42933U);
    msg.setSourceEntity(36U);
    msg.setDestination(41585U);
    msg.setDestinationEntity(225U);
    msg.op = 111U;
    msg.file.assign("QNFQNDYZVHMSUBFSTKCDKTACQGMGKTHNOXOGRDVDREHDYMIJXBCXYCB");

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
    msg.setTimeStamp(0.43826053407438037);
    msg.setSource(28991U);
    msg.setSourceEntity(109U);
    msg.setDestination(45851U);
    msg.setDestinationEntity(186U);
    msg.op = 19U;
    msg.file.assign("MQUNZMEDNJXELHVVFPDZZXFURBMLOFCDJCWKTFAZJULYXOGFWSBBHWEFLJUYINIPTSXGQNJSGGJAPRGQKTVSSRICROEDMYMLWVZKZDVCBUXHFSTBLMYMDILKCKKGCIESVDRDZACGVTKPZVTMUGRLOXEBTMQLTPRFYQDYPAWCQQYP");

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
    msg.setTimeStamp(0.3899728992088304);
    msg.setSource(8734U);
    msg.setSourceEntity(241U);
    msg.setDestination(41659U);
    msg.setDestinationEntity(173U);
    msg.op = 132U;
    msg.file.assign("BGMXODLYEUZNISDVNTFWKNOGVDVGBCJNPZKETHYPTFQKZLBTFXJUHOOFIYFHIKWZLMGUJPNJUEJZGRVWXIVPDMNOZCULHJRWWHMBCOHQRYRLSXHESFRXFTFCQKKDNGJBUPAAQWSEBDWXYMAHJPQMBQNLSQZKXTPHSEIUPIGFICBQFYMLAOVVDZBXROEAYOIDJNXRSBMHKULCCDKAGINVSDUKWYAA");

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
    msg.setTimeStamp(0.30548454707233663);
    msg.setSource(4472U);
    msg.setSourceEntity(144U);
    msg.setDestination(44999U);
    msg.setDestinationEntity(183U);
    msg.op = 146U;
    msg.clock = 0.24435735646216128;
    msg.tz = -117;

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
    msg.setTimeStamp(0.625082951041235);
    msg.setSource(23142U);
    msg.setSourceEntity(53U);
    msg.setDestination(17182U);
    msg.setDestinationEntity(32U);
    msg.op = 16U;
    msg.clock = 0.1315846598662055;
    msg.tz = 17;

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
    msg.setTimeStamp(0.833490448425143);
    msg.setSource(64031U);
    msg.setSourceEntity(247U);
    msg.setDestination(2821U);
    msg.setDestinationEntity(105U);
    msg.op = 202U;
    msg.clock = 0.0037647799923792302;
    msg.tz = -35;

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
    msg.setTimeStamp(0.8996413569300673);
    msg.setSource(17471U);
    msg.setSourceEntity(197U);
    msg.setDestination(51144U);
    msg.setDestinationEntity(222U);
    msg.conductivity = 0.8008196116519418;
    msg.temperature = 0.8564189919303982;
    msg.depth = 0.6878127726185804;

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
    msg.setTimeStamp(0.9375804708522518);
    msg.setSource(62093U);
    msg.setSourceEntity(199U);
    msg.setDestination(47430U);
    msg.setDestinationEntity(64U);
    msg.conductivity = 0.9817908178719091;
    msg.temperature = 0.2948996671108792;
    msg.depth = 0.45982561832549285;

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
    msg.setTimeStamp(0.23387366919538777);
    msg.setSource(64804U);
    msg.setSourceEntity(100U);
    msg.setDestination(18087U);
    msg.setDestinationEntity(130U);
    msg.conductivity = 0.7114278201740382;
    msg.temperature = 0.46949012417589997;
    msg.depth = 0.27407343166597076;

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
    msg.setTimeStamp(0.9603800262024051);
    msg.setSource(14135U);
    msg.setSourceEntity(20U);
    msg.setDestination(4130U);
    msg.setDestinationEntity(31U);
    msg.altitude = 0.7850186037596325;
    msg.roll = 51863U;
    msg.pitch = 436U;
    msg.yaw = 49611U;
    msg.speed = -13423;

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
    msg.setTimeStamp(0.38270653864344173);
    msg.setSource(42835U);
    msg.setSourceEntity(25U);
    msg.setDestination(59889U);
    msg.setDestinationEntity(108U);
    msg.altitude = 0.4382826108910791;
    msg.roll = 41877U;
    msg.pitch = 42079U;
    msg.yaw = 13462U;
    msg.speed = -29187;

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
    msg.setTimeStamp(0.8645869498986748);
    msg.setSource(39755U);
    msg.setSourceEntity(176U);
    msg.setDestination(12577U);
    msg.setDestinationEntity(129U);
    msg.altitude = 0.3046698530201186;
    msg.roll = 33396U;
    msg.pitch = 28017U;
    msg.yaw = 52080U;
    msg.speed = -282;

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
    msg.setTimeStamp(0.8522987967364556);
    msg.setSource(43303U);
    msg.setSourceEntity(233U);
    msg.setDestination(36627U);
    msg.setDestinationEntity(211U);
    msg.altitude = 0.3384390818345314;
    msg.width = 0.43475247525046057;
    msg.length = 0.36273632902559694;
    msg.bearing = 0.6352860979486771;
    msg.pxl = 10749;
    msg.encoding = 113U;
    const signed char tmp_msg_0[] = {-33, 3, 63, -91, 30, -113, -16, 102, -58, 85, -1, 66, 93, 36, 43, 41, -84, -1, -24, -72, -13, 10, -81, -35, -104, -63, 19, -108, 22, 79, -103, 104, 43, -20, 113, -81, -70, -38, 75, -63, 115, 83, 114, -11, 43, 73, 59, -43, -15, -90, -119, -45, -46, -20, 5, -76, 16, -56, -31, -117, -63, 72};
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
    msg.setTimeStamp(0.2276306700615196);
    msg.setSource(29428U);
    msg.setSourceEntity(160U);
    msg.setDestination(21108U);
    msg.setDestinationEntity(59U);
    msg.altitude = 0.3488068788935704;
    msg.width = 0.039750544174927294;
    msg.length = 0.8019648884466345;
    msg.bearing = 0.7216193325574229;
    msg.pxl = -1022;
    msg.encoding = 153U;
    const signed char tmp_msg_0[] = {109, -101, -59, 22, 15, -70, -73, 69, 26, -98, 101, -47, 0, 61, -19, -26, -1, -99, 25, -42, -75, -73, 26, 46, 41, -124, 86, 112, -32, -100, -3, 9, -112, -93, 25, 5, -18, -79, -48, 115, -74, 34, 122, 61, -102, 60, -103, -20, -43, 78, -56, -82, 96, 68, 111, 97, -50, 12, -9, -74, -107, 59, 0, -33, 113, -20, 123, -118, 46, -106, 36, -55, 3, -102, -97, -119, 29, 113, 66, -72, -28, 29, 116, -58, 55, 50, 117, -11, -30, -117, -9, 36, 35, 2, -112, 119, 105, -119, -113, 38, 73, 89, 8, 115, -92, 17, -60, 56, -117, 125, 98, -35, -60, -122, 5, -40, -14, -92, -117, -122, 116, -113, 7, 17, 26, -108, -67, 106, -33, 120, -113, 76, -1, 72, 62, 90, 112, -114, -94, 70, -59, 13, 103, -21};
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
    msg.setTimeStamp(0.9325921103909949);
    msg.setSource(48271U);
    msg.setSourceEntity(244U);
    msg.setDestination(52861U);
    msg.setDestinationEntity(113U);
    msg.altitude = 0.7244543627810796;
    msg.width = 0.42810971956801913;
    msg.length = 0.9490655509754093;
    msg.bearing = 0.7495964255101947;
    msg.pxl = 7427;
    msg.encoding = 11U;
    const signed char tmp_msg_0[] = {5, 69, -9, -37, 5, 108, -93, 33, 112, -104, -66, -10, 124, 119, -51, -45, -58, -125, -103, 51, -21, 5, -106, 89, 25, -48, -69, -10, 66, 29, -41, -19, 126, -52, -26, -44, 48, 104, 19, 91, 92, 0, -78, -104, 85, -83, -79, -77, 103, -108, -104, 38, 60, -110, 125, -33, -100, -12, 3, -73, -26, 118, -47, 59, 28, -111, -90, 96, -10, 116, -48, 17, -69, -71, -5, 99, -114, 75, -116, 70, -110, 69, 51, 14, 101, 64, 67, 120, -94, -48, -20, -35, -128, 55, -22, 19, 61, -30, 122, 69, -50, 74, -100, -79, -72, -88, -32, 68, 79, 65, 99, -79, -43, 14, -120, 65, -20, -89, 57, -50, 103, -37, 20, -68, -43, -56, -30, 0, 56, -35, 7, 110, -32, -16, -82, 90, -28, -56, 33, 121, 72, -51, 83, 86, 18, -40, -115, 10, 59, 74, 13, -45};
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
    msg.setTimeStamp(0.6644472673298396);
    msg.setSource(53491U);
    msg.setSourceEntity(113U);
    msg.setDestination(10983U);
    msg.setDestinationEntity(35U);
    msg.text.assign("SOJSJQQSQMTIFFXQHVXXZHYQUEFREFUZVJAKKAPJWMTGNGKUPHDIRJBVKFCBCXEUDOGNSRUEDAPUYNLFXCYVAJBBXWIMAMD");
    msg.type = 18U;

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
    msg.setTimeStamp(0.9801533946108228);
    msg.setSource(59637U);
    msg.setSourceEntity(32U);
    msg.setDestination(11370U);
    msg.setDestinationEntity(208U);
    msg.text.assign("LRFCJKSQYEZJOGAHLPHGZLUUONWHMEOWDNINQRMPHGMEDRUMHOJKBVRFCHHCQXTDEGLWYNSOXBJGPOUQYQRYNDWIMCDFIKJWEMN");
    msg.type = 154U;

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
    msg.setTimeStamp(0.351830506234151);
    msg.setSource(3123U);
    msg.setSourceEntity(26U);
    msg.setDestination(48722U);
    msg.setDestinationEntity(152U);
    msg.text.assign("VHVIOGBVTRHUMKOJEYNDLGDEVZPBWAPGXULOZKEDBAPHNQRJEHMIXWPPRRBSHQMNEPIIMLKZRECTYTLHQENOVAWXXVWLNWACMNQKYYWUQDLXTQCBOWZDNSKWEBCQJSSVCTNJFBFYCINJDQORTWRJLHQKPUCTPSZUCCGVGUTJRHSVUFZSGISSXAKFOQYLKFOYYAFENIJAMUXECMKPYJOHDRZXGZDFZ");
    msg.type = 160U;

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
    msg.setTimeStamp(0.9423699070500712);
    msg.setSource(14507U);
    msg.setSourceEntity(172U);
    msg.setDestination(44961U);
    msg.setDestinationEntity(161U);
    msg.parameter = 203U;
    msg.numsamples = 128U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 50728U;
    tmp_msg_0.avg = 0.944759105523752;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.21786175145832942;
    msg.lon = 0.5379032802450163;

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
    msg.setTimeStamp(0.8330239840657195);
    msg.setSource(57689U);
    msg.setSourceEntity(97U);
    msg.setDestination(9454U);
    msg.setDestinationEntity(3U);
    msg.parameter = 67U;
    msg.numsamples = 105U;
    msg.lat = 0.11592617116507742;
    msg.lon = 0.5578701329027617;

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
    msg.setTimeStamp(0.8741989005106896);
    msg.setSource(35655U);
    msg.setSourceEntity(115U);
    msg.setDestination(29978U);
    msg.setDestinationEntity(59U);
    msg.parameter = 157U;
    msg.numsamples = 123U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 42917U;
    tmp_msg_0.avg = 0.4207027784405615;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.35160645598727946;
    msg.lon = 0.36442178520105395;

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
    msg.setTimeStamp(0.1891444344689065);
    msg.setSource(29755U);
    msg.setSourceEntity(211U);
    msg.setDestination(44875U);
    msg.setDestinationEntity(212U);
    msg.depth = 60566U;
    msg.avg = 0.28354812514331507;

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
    msg.setTimeStamp(0.47872942839658983);
    msg.setSource(29333U);
    msg.setSourceEntity(90U);
    msg.setDestination(33148U);
    msg.setDestinationEntity(46U);
    msg.depth = 32722U;
    msg.avg = 0.15784750671964698;

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
    msg.setTimeStamp(0.9356005480326816);
    msg.setSource(49681U);
    msg.setSourceEntity(119U);
    msg.setDestination(38804U);
    msg.setDestinationEntity(178U);
    msg.depth = 13143U;
    msg.avg = 0.6542478596816975;

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
    msg.setTimeStamp(0.970384785264042);
    msg.setSource(40714U);
    msg.setSourceEntity(23U);
    msg.setDestination(14856U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.8414382527721376);
    msg.setSource(32614U);
    msg.setSourceEntity(176U);
    msg.setDestination(6521U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.07995322651472425);
    msg.setSource(53373U);
    msg.setSourceEntity(241U);
    msg.setDestination(41735U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.1376850116606383);
    msg.setSource(6535U);
    msg.setSourceEntity(57U);
    msg.setDestination(15726U);
    msg.setDestinationEntity(127U);
    msg.sys_name.assign("ZROAQVMJZWCWNQKUIPDWBUCQUAPEOXMQXKGNADBZGHVANIPWFKLHTFHKXYZYXLENAKJQULZISOVI");
    msg.sys_type = 135U;
    msg.owner = 2696U;
    msg.lat = 0.7405779522654902;
    msg.lon = 0.8017240480161397;
    msg.height = 0.5171524984673899;
    msg.services.assign("FNKEUOPHOMCKWLZXGFSGAHQOQCUXIYJOUZGCZKGDMBNSMDWVGWDHROTZWIBPZFPFJQVXWRGACBSXSAILPMYSYVNWFSDYZ");

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
    msg.setTimeStamp(0.1600554696872899);
    msg.setSource(56312U);
    msg.setSourceEntity(90U);
    msg.setDestination(25885U);
    msg.setDestinationEntity(11U);
    msg.sys_name.assign("PGGRHTUNIZNPJYCYHHQNSWWIIRBJPZ");
    msg.sys_type = 207U;
    msg.owner = 33063U;
    msg.lat = 0.7005828119882146;
    msg.lon = 0.5725173434125885;
    msg.height = 0.5665240884901689;
    msg.services.assign("PREJGUQTMDGDGCQMSNTPCFORSRILZNBVRRMKVJBNXQFNARISFHBSFGXUUZNPQBURTQLWNBPFHUDIOXBGYQZWESTUKAHASOEMPHGHIMOILCAUMDKDIXSYOQTLVGDZTWJXXCHKIPGNHDJYREWTKXALKFZMMVBUOQKEYXWOHHRGHTLVMFEZYVCDZJKCAEBPATINYOIEJZMGIEB");

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
    msg.setTimeStamp(0.38415378414305135);
    msg.setSource(8680U);
    msg.setSourceEntity(107U);
    msg.setDestination(50397U);
    msg.setDestinationEntity(186U);
    msg.sys_name.assign("ABMICVJMRYXPHDQENULBMUSEJIPKZMXLGWTQVZVZAOREJSMWKJZTTHBGTCRLEQQGXYZDCFGJTOKDJMXGH");
    msg.sys_type = 221U;
    msg.owner = 1606U;
    msg.lat = 0.5196347692849177;
    msg.lon = 0.5733199182978804;
    msg.height = 0.6919191699521445;
    msg.services.assign("HJCWIBGCZIWENPPGCDSVWYXRWRCTDVEEBKFTJTQOMUEPCOJQMYLDWNAIASWGGVFBLTDGFYZUAESNTVNNORQMEYFUBGPQWSDLSPEKVWRTTXLJPMOMIJIRU");

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
    msg.setTimeStamp(0.5434253561237183);
    msg.setSource(37647U);
    msg.setSourceEntity(37U);
    msg.setDestination(42143U);
    msg.setDestinationEntity(105U);
    msg.service.assign("UUPYIPQQKHFNCYAPNYEEOWHBSWUIAZEMNKETUIYTSYNILHTTKRISNZHHUGPNLXEUDUECVTPSPDVSWEQCFVVCMCRWVLPSXBZBGBGBWAUKPINCRHLMXKQDXDBUOMWLRAOAXZFWFGWDQCMFJJYSRZZJPBHIBVDTIMTWJKQVGQMSAXFGORGOLVIK");
    msg.service_type = 186U;

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
    msg.setTimeStamp(0.28272801106672385);
    msg.setSource(44870U);
    msg.setSourceEntity(58U);
    msg.setDestination(6894U);
    msg.setDestinationEntity(236U);
    msg.service.assign("DNSRTVWPYEVPZZTSHENYIISGKLMXPRSCUYBZQRXRYXOQBMIQTQJJZKHVIORQGSRRKSGTOCTKRXPXOBLFAPACFFULGNCZGOPHDEFSHAHJIXCOMMLBOYVUJYDJWDAUENK");
    msg.service_type = 204U;

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
    msg.setTimeStamp(0.567524906900992);
    msg.setSource(43360U);
    msg.setSourceEntity(207U);
    msg.setDestination(46524U);
    msg.setDestinationEntity(159U);
    msg.service.assign("LMTRHNDOEFSYVYYSJLCAVAOZIHGEGBSWNXBWAEPEGGKNZSIBBQYMXGGCXRIHWGTKTEAWBEHJ");
    msg.service_type = 74U;

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
    msg.setTimeStamp(0.9426460081439517);
    msg.setSource(24490U);
    msg.setSourceEntity(107U);
    msg.setDestination(32150U);
    msg.setDestinationEntity(88U);
    msg.value = 0.6400255540306484;

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
    msg.setTimeStamp(0.45775504383817);
    msg.setSource(20877U);
    msg.setSourceEntity(233U);
    msg.setDestination(27011U);
    msg.setDestinationEntity(93U);
    msg.value = 0.773080271305606;

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
    msg.setTimeStamp(0.788896544998811);
    msg.setSource(5412U);
    msg.setSourceEntity(210U);
    msg.setDestination(39697U);
    msg.setDestinationEntity(18U);
    msg.value = 0.465744310256073;

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
    msg.setTimeStamp(0.8651364513123042);
    msg.setSource(39875U);
    msg.setSourceEntity(154U);
    msg.setDestination(393U);
    msg.setDestinationEntity(78U);
    msg.value = 0.5404447299400462;

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
    msg.setTimeStamp(0.7380071339354691);
    msg.setSource(21504U);
    msg.setSourceEntity(57U);
    msg.setDestination(47930U);
    msg.setDestinationEntity(224U);
    msg.value = 0.18273020685112917;

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
    msg.setTimeStamp(0.7039338909314122);
    msg.setSource(55096U);
    msg.setSourceEntity(13U);
    msg.setDestination(62051U);
    msg.setDestinationEntity(172U);
    msg.value = 0.9457777193402933;

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
    msg.setTimeStamp(0.33984226060458);
    msg.setSource(1728U);
    msg.setSourceEntity(247U);
    msg.setDestination(53996U);
    msg.setDestinationEntity(172U);
    msg.value = 0.11074403113261433;

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
    msg.setTimeStamp(0.42565858941377666);
    msg.setSource(30382U);
    msg.setSourceEntity(182U);
    msg.setDestination(730U);
    msg.setDestinationEntity(225U);
    msg.value = 0.7195187100166877;

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
    msg.setTimeStamp(0.5723818251192134);
    msg.setSource(57257U);
    msg.setSourceEntity(183U);
    msg.setDestination(13777U);
    msg.setDestinationEntity(87U);
    msg.value = 0.884311894118973;

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
    msg.setTimeStamp(0.5975659011023202);
    msg.setSource(53257U);
    msg.setSourceEntity(172U);
    msg.setDestination(20012U);
    msg.setDestinationEntity(87U);
    msg.number.assign("GTZKMCHMOWPVERZESFAUKREUURYNNZXRQWBRZCDTDYTELYHHYRIUGKGWGMJCFWAWQEIZOJCRGCLTIKUUBIXJMOUGEFZWQONKBLZFYLTBYPHNNCLEHHSPVQPOCAATLWOGFWQU");
    msg.timeout = 2227U;
    msg.contents.assign("EVATSOKZBKPQMEQVCZCZUEIBCYXKSJDATGUPKVFALTGOFNCZRIXTNMOOEEYBMASVXFKMIOQ");

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
    msg.setTimeStamp(0.15788917172734473);
    msg.setSource(47520U);
    msg.setSourceEntity(127U);
    msg.setDestination(19402U);
    msg.setDestinationEntity(31U);
    msg.number.assign("GSWJVDDWTVXAKETGHBPM");
    msg.timeout = 62046U;
    msg.contents.assign("FUEZELPYQWZXBTIARHALINHQVCDBZGQWOOKNDNKKMKSMLYJYSVQGWEBVEFJAMVVWOLDACFNQCSAJJMKMIGRGZLXAKWKBPVTTLJRBRTHNGQQMGPDUNPOGOFYYHILTBKOWMCIVZTJDYPSSZSFZPEGADRSRSSRSIZVFXKXGPNUXJVCQUPYONPJACIHENKCTLWCAU");

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
    msg.setTimeStamp(0.14797748877383976);
    msg.setSource(42920U);
    msg.setSourceEntity(73U);
    msg.setDestination(8743U);
    msg.setDestinationEntity(230U);
    msg.number.assign("QQGOBSCMTZMDITSCFHBUZKLBWRWGVQDOTJZBZAULPVVUKWEFMNQGJMLENNUNGGFYDMTUCAKWLSJTSKONESZJPXSFWFNHLAQVLEHVYWXZBVBCIPYJUJCXCZOYIQSFWIAGSWGXAWDXRXJUFDECAYYJFFROEODIKIBPGC");
    msg.timeout = 1901U;
    msg.contents.assign("SXLMQSCRNWJLGFIVBGZL");

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
    msg.setTimeStamp(0.8377076300803642);
    msg.setSource(42935U);
    msg.setSourceEntity(23U);
    msg.setDestination(53262U);
    msg.setDestinationEntity(8U);
    msg.seq = 325236321U;
    msg.destination.assign("PTVVUKEXGXVLARUMGEJPJYQKCDOJTBIQPJHRUACDQKHPDGOQSOAUPLCPSJRUFAWSERQTFCKZIKOEVVCOZCSARXRHFQNDXNWLGMGWKSGFFMNIACFOYBZZAXLSRLEGDJREZDEOLKYBIWYMTPIJHKQYGNIWEZVMMWBTIWURYYATGSYVTRDLIVFMQWHBICVONBJUISD");
    msg.timeout = 9161U;
    const signed char tmp_msg_0[] = {-94, -127, -45, 36, 64, 18, -65, -97, 50, -38, 99, -20, -9, -21, -91, -74, 94, 105, -97, -102, -81, -105, 1, 91, 95, 99, 75, -2, 106, 126, -95, -64, 33, 92, -83, 78, -62, -113, 92, 35, 103, -17, 76, -115, 18, -121, 84, -125, -50, 56, -46, 62, -85, -91, 15, 125, -34, -46, 60, 92, -28, 98, 9};
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
    msg.setTimeStamp(0.6308548221560988);
    msg.setSource(11777U);
    msg.setSourceEntity(102U);
    msg.setDestination(50538U);
    msg.setDestinationEntity(196U);
    msg.seq = 934967998U;
    msg.destination.assign("UTLUQTGYUOFCAGAYPFAUXVGLLXIUSTOUNNWHUWRRYZFQJPHNZLMQDEBWRADOWKMPDTLCJBJNFCTLWLEKHAFGYUXMIVKEWZVSIANTBQMYSBIDXSVOVQZJCMNFAHDSJRHBNGVSDTVBXKKJEJPEIPYADXXNYQWJHO");
    msg.timeout = 9529U;
    const signed char tmp_msg_0[] = {-79, 124, 82, 86, -47, -32, 102, 40, 40, -114, -81, -72, -3, -109, -15, -114, 62, -37, -90, 100, -4, -18, -5, -123, -128, -39, 118, -34, -26, -76, -57, -23, 112, -96, -25, 106, -51, 53, -6, 26, 103, 28, -89, 77, -47, -6, 120, -41, 58, 34, -128, 70, 87, 37, 79, -44, 60, -91, 63, 18, -17, -105, -5, -101, -15, 53, 39, -50, 116, 110, 53, 56, -101, -114, 68, 2, -45, -2, 43, -18, 20, -39, -56, -41, -75, -3, -28, 113, 108, -34, -22, 0, 78, -104, -1, 93, 2, 78, 93, 106, -48, -35, -64, -23, 29, -77, 114, -8, -3, 51, 31, -14, 49, -99, -91, -3, -1, -88, 118, -76, -16, 54, 62, 52, -24, 21, 8, -48, 32, 55, -60, 91, -34, 17, -25, 35, -33, 75, -128, -98, 87, 85, -66, -55, 33, 36, 112, -120, -5, -105, -98, -20, -92, -98, -113, 105, 9, -106, -113, 31, 126, 68, -89, -5, -62, 84, -121, 124, 123, -63, -89, -15, -110, -93, 81, 29, -52, -107, 6, 102, -27, -27, -63, -91, -38, -124, -86, 101, 64, -47, 125, 114, 2, -66, -118, -49, -32, 51, 57, -96, 20, -31, -97, -76, 111, -84, 70, 103, -21, -113};
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
    msg.setTimeStamp(0.9611958331178102);
    msg.setSource(50943U);
    msg.setSourceEntity(187U);
    msg.setDestination(54805U);
    msg.setDestinationEntity(206U);
    msg.seq = 3952776140U;
    msg.destination.assign("NEBNDEGUPJCOTTCDVFCYX");
    msg.timeout = 18971U;
    const signed char tmp_msg_0[] = {21, 58, 34, 57, 81, -57, -84, 81, 105, 55, -31, 35, 118, -34, -63, -4, -55, -1, 16, 65, -2, -108, 36, -33, -5, 66, -99, 8, -108, 92, 70, -1, -55, 45, 49, -107, -123, 67, 26, 41, 8, -93, 36, -31, -85, -8, 35, -80, -27, -81, -121, 13, 66, -98, -30, 52, 123, -109, -13, -63, -47, -41, 44, -111, 117, -96, 19, 88, -68, -120, 20, 111, -47, -45, 124, -124, 44, -32, 38, -5, -103, -7, 80, -90, 1, -44, -55, -13, 62, 21, -53, 78, 37, -2, -54, 28};
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
    msg.setTimeStamp(0.6288063622098932);
    msg.setSource(62964U);
    msg.setSourceEntity(62U);
    msg.setDestination(53732U);
    msg.setDestinationEntity(252U);
    msg.source.assign("FHKPSLRSBDEQNGAZHOTWHKEXLVLMWDVWKGYPDAWVANRMEFHMZPUYNADQNIJERXLMOULGBQFRJTALHYJRONGKFYGHNBQCPFPOACTKSOZHSOFQESWUUXZPJXQISSGNVFEZQDCTACNOWGUUNMQCYPLPCDYJTIKEBCBLIHTCXUBQXVHJZRSJDXTG");
    const signed char tmp_msg_0[] = {76, -56, -69, 44, -79, 124, 60, -56, 105, 122, 106, -58, -103, -83, -70, -53, 1, 18, -39, -49, 28, -41, 13, -6, 64, 51, 60, 18, 85, 28, -43, 78, -86, 19, -115, 0, -128, -61, 52, -100, -30, -5, -64, 85, -110, -110, -34, 35, -63, -104, 120, -79, -127, -38, 113, -74, -103, 15, -4, 5, -78, 72, -73, 94, 124, 31, -31, -50, -114, 66, 38, -55, 114, -67, -7, -4, -26, 21, 25, -90, -124, -60, -38, 91, 124, 95, 0, -28, 53, 92, -116, 117, -9, -106, -15, -66, -98, -115, 41, -81, 96, 108, 95, 100, 113, 113, 72, -62, 93, -107, -77, 13, 8, -106, -89, -44, -37, -55, -2, -79, 20, -101, 54, 118, 122, -31, -19, 73, 19, 96, -9, -105, 32, 18, -38, 119, 77, -49, -106, 51, -91, -92, 116, -10, -7, 10, 80, -108, 120, 122, -21, -117};
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
    msg.setTimeStamp(0.784572818036776);
    msg.setSource(58475U);
    msg.setSourceEntity(157U);
    msg.setDestination(48777U);
    msg.setDestinationEntity(21U);
    msg.source.assign("CORZCTXLRFYRLKOLIOEVATDIZNQHWLOOHSGNFKORZQSEPEXWXRGUKTCYAXZDDKWGNDGXBPIACMEOPVMTBWKUWAMEXKNSMHAKMERIXZQSZSCNZYCBJPJNNIGUDJHVFASJDMRJFRSJVZYMDJTEHTUQQTY");
    const signed char tmp_msg_0[] = {20, -64, 27, 123, -14, 63, -68, 39, 72, 110, 23, -101, 43, 117, -121, 39, -115, 31, 33, -6, -7, 32, 39, -118, -30, 84, 62, 37, 85, -2, -92, -6, -93, -1, 75, -105, 116, -80, -106, 77, 62, 2, -22, 31, 64, 49, -40, -51, 84, 53, -64, -30, 6, -96, -120, 121, -104, 103, 72, -15, -107, -91, -109, -82, -24, 52, -62, -113, -35, -84, -30, -105, 98, 40, 104, 2, 119, 125, -28, -11, -61, -113, -89, 35, 26, -41, -63, -4, 124, -46, -58, -110, -56, 53, -2, -105, -51, -98, -23, -8, -116, -11, -77, -45, 99, 110, -70, -85, 53, -114, 4, -5, -84, 79, -104, -26, -18, 90, 0, 0, 85, 114, -49, -15, 126, -48, 121, -22, -3, 60, 125, 71, -121, 0, -93, 29, 8, 47, 41, -116, 118, -83, -52, -82, 96, 107, 68, -9, 119, -14, -38, 6, 54, -101, 102, 104, -63, -29, 19, -18, -89, 102, -118, -14, -17, 77, -94, -33, 37, -49, -91, 33, -34, 64, -52, 50, -71, 11, 37, 104, -5, -3, 6, 63, 47, -87, 87, -98, -38, -66, -65, -125, 12, -15, 8, 110, -74, 101, -101, -110, -84, -54, -92, 109, -3, 82, 94, 54, -11, 26, 106, -65, -52, -85, -53, 101, 114, 26, 113, -48, -71, -15, -72, -78, 93, 79, -35, 86, 21, -6, 34, 19, -5, 77, -113, -30, -124, 118};
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
    msg.setTimeStamp(0.7361009200420244);
    msg.setSource(20589U);
    msg.setSourceEntity(25U);
    msg.setDestination(9616U);
    msg.setDestinationEntity(192U);
    msg.source.assign("EQGKIKTWKOEVNOUBTJXYZYIBXRGBJTOCPBASDRSJSSTZKGKVQZDDPQPUOQYYVLBUAOJSKRDOACHMAGRFECIELGIKXDZTYUFPDUCMBEBYQWATUFSXCRSAEMEIQCQPZQNAWWUROINIRGBZQXRWVLMLMTNMBWDQXXNALZPWNLGHJFVZUPJZHZNJTJYCGLLVXUHHTLYHREOJPLEVAOHNWSHKWPIMMSFNHMV");
    const signed char tmp_msg_0[] = {-73, 16, 14, 18, -31, 49, -66, -89, 87, 119, 77, 6, 34, -45, 92, -126, 11, -37, 17, 45, -83, -108, 88, -62, -80, -23, -95, -16, -87, 67, 118, 23, 113, -100, -64, -14, -24, -105, -111, 107, -5, -81, 37, -21, -128, 53, 86, 37, 9, -91, -109, -91, 36, 117, 14, -41, -30, -18, 19, -66, 116, 91, 32, 11, 65, 15, -121, 121, -48, -123, -113, 35, -11, 106, -69, -8, -35, -122, -46, -11, -105, -34, 50, 110, -24, 119, 87, -24, 32, 87, 15, -2, 76, 48, 114, -12, 26, -13, -19, -31, 12, 109, -19, 40, 71, 122, -80, 23, -122, -88, 82, -114, 26, -120, -1, -53, 44, -52, 68, -119, 29, 40, -111, -51, 120, -67, -44, -101, -27, -5, 86, -118, -33, 90, -8, -48, -43, -43, 41, -51, -59, -33, 6, 4, -108, -100, -112, -103, 16, -119, 58, 16, 2, 17, 90, -101, -108, -23, 71, -23, 20, 10, -109, 32, -76, 32, -46, 60, -128, -6, -88, -63, -91, 19, 93, -64, 119, 93, 112, -39, -82, -117, -38, 114, -29, -90, -123, 105, -111, 7, 49, -41, 42, -63, -81, -43, 63, -14, -26, -102, -85, 51, 42, 3, 90, 50, -51, 111, -49, 61, 57, -13, 121, 7, 81, 23, 17, 74, 57, -48, 103, -38, -55};
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
    msg.setTimeStamp(0.3292997029074902);
    msg.setSource(38179U);
    msg.setSourceEntity(211U);
    msg.setDestination(13653U);
    msg.setDestinationEntity(113U);
    msg.seq = 1109091073U;
    msg.state = 201U;
    msg.error.assign("KTRCMCYJSHTAZJLFLTPBVUPQAHXUPYIFKTEFTCKZALEGKQNJJCEIXSBZUJEHMGOPDPJRNDVYFUNKNMELCBMEWHPOGSVWHRVMXKTCASGITCDZXQWJGIOAYXMERQIIUTWSTKCVWFRJUZRLVJW");

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
    msg.setTimeStamp(0.6489873553051135);
    msg.setSource(24290U);
    msg.setSourceEntity(202U);
    msg.setDestination(50735U);
    msg.setDestinationEntity(125U);
    msg.seq = 665881482U;
    msg.state = 183U;
    msg.error.assign("QEIEMNDTXRSSXPXGPPAFHWOCWKVXYZLRNLVXYWBGOCZVIAFKWAZDPWTAFCMEPSGBSFOHQJSQKOBIMHCULRRBHKGZUARXDSTAKIXDFCLRMAWIQBPVGVCM");

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
    msg.setTimeStamp(0.9122369862765749);
    msg.setSource(22623U);
    msg.setSourceEntity(102U);
    msg.setDestination(46094U);
    msg.setDestinationEntity(62U);
    msg.seq = 1426076193U;
    msg.state = 121U;
    msg.error.assign("MKBTPNWTXOUYBRLJZODXSONXTKRQIGFSRBZNRAGYLMPCUUYWDDMPZKUQQKWCQXSMKBLTNRYCYGOHZMXJGVEQQISEPOWDKWEZIPIUDDWAAVANZMWIVGIAY");

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
    msg.setTimeStamp(0.6833996512256274);
    msg.setSource(41910U);
    msg.setSourceEntity(141U);
    msg.setDestination(30817U);
    msg.setDestinationEntity(52U);
    msg.origin.assign("VOFVHDFWOCZRBIJCQROEAHUPAWPFWRFPJIRUVJGRSHQPNTJGQLCLIOWPVXKXCGWHMBCZHTSLHJJJGDANSYTGYFYNBSUDTAZWQMGSTBEGNLMILUCIHXXMDCUKDLVMQTRENYACBZAHRNDOSXEVUIDKHOPYKTXYDKJWNEUBVFOSNQKMLPYZEMBXZTAOVYAZGONQTIZACYPKYJXHNFPKXTQOKGDL");
    msg.text.assign("ECDSAIINXTZDSTBIVYOWFYQGNZMWGGHFO");

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
    msg.setTimeStamp(0.6204964328959843);
    msg.setSource(28335U);
    msg.setSourceEntity(40U);
    msg.setDestination(32143U);
    msg.setDestinationEntity(213U);
    msg.origin.assign("MTFHCRSDKLYXHBUHUDSMWMWPLJPFYMDAHFNPIIVLPIYONREBPABOLRFDBUDYEGGDQAMCJWRXTVCMDNHFPGCNTEFVCYMUGXQL");
    msg.text.assign("OCNWQCZXJKKHCLEWACGULULLBVEUZERPQWJLXEITSAVYWIEKYJOBJFKRVTDQZUAMAWAUDPGRTTFC");

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
    msg.setTimeStamp(0.10621012588650436);
    msg.setSource(29743U);
    msg.setSourceEntity(80U);
    msg.setDestination(29491U);
    msg.setDestinationEntity(38U);
    msg.origin.assign("JEVLCEBZDBYIEHMUYQSSODPHKWTAGNKZFEWPJVIECMMCRCEYCWVQSYJLTMDMQUAYVKPXQOHOYDCFSZGBIMSFZBPLJXETSSLXFFNDPRSTRCIZZXYIMXOJFJ");
    msg.text.assign("ROSBIXPHSVKOLDRJGMSTKLBRANRNIWCWAKURAKODTFCHCIIHTNXNQLXLMEYLMQMZPUEZTSFMOWECJCLVZZAXSZJBWBPBWKMFDRJREZKZBURXGCQGQOQOBIQFCUMPQGILLFDOHVSQTAKHFVGXEIWFPGCNNYENIAMYDXHDDKYUXDTWEPYMHNWWJBASDHUEHUKVVSAWUOYTBUPZHQTILYFJQUJPVTSEPZXJSM");

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
    msg.setTimeStamp(0.902291735741302);
    msg.setSource(4001U);
    msg.setSourceEntity(145U);
    msg.setDestination(32178U);
    msg.setDestinationEntity(113U);
    msg.origin.assign("CGFYUCUESCOTFAALURNQVQLJTJNYVXSYPCLFSWDMOITVESVKPLRRCQLHNGZHNYPXKYMKGLIPBXOEHYUZUWLEXNATPXBVLFIKJQHWMVFFHVRZMMANPEGTTQCMKZHDXCOARQDPEHTVFBNSYQWDOKZOMJPHGUAJROUJLSUDBNOGMGGBWZBPFWBDZ");
    msg.htime = 0.33278324213141086;
    msg.lat = 0.46243227506923834;
    msg.lon = 0.5533846911719985;
    const signed char tmp_msg_0[] = {90, -58, 28, -66, -105, 61, -54, 104, 13, -111, -62, 40, -128, -4, -77, 3, 108, -35, 91, -113, -9, 93, -110, 23, 49, -101, -75, -108, 91, 124, -17, -52, -46, 73, 85, -51, -88, -88, -102, -39, -22, 29, -12, -117, -111, 34, 23, 34, 125, -25, -62};
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
    msg.setTimeStamp(0.32191234793420487);
    msg.setSource(49027U);
    msg.setSourceEntity(196U);
    msg.setDestination(23307U);
    msg.setDestinationEntity(103U);
    msg.origin.assign("QENWJYYRYLLNRWZSOERNMMUGVNCYDKLLPTCQOBPVVCG");
    msg.htime = 0.002313843765977208;
    msg.lat = 0.7462310392454052;
    msg.lon = 0.5557982015580349;
    const signed char tmp_msg_0[] = {-51, 1, 66, -80, 9, 94, 58, -52, -9, 120, 54, 59, -117, -122, 52, 7, 119, -23, 58, -113, 41, -101, -1, 57, -33, 64, -7, 45, -64, 111, -109, 48, -99, -79, 43, 43, 61, 55, -104, -20, 40, 125, 3, 116, 117, 80, 95, -91, -51, -62, 29, 72, 13, -82, 91, 85, -16, 96, -11, -85, -108, -23, -100, -112, 87, 34, -46, 109, 47, -83, 0, -73, -123, 78, 17, 59, -77, -85, -22, 121, 62, 69, -23, 32, 14, 95, -126, -2, -93, 56, 0, 94, -43, -89, 4, 19, -36, 2, -102, 24, -27, 62, 19, 48, 29, -46, -95, 39, 119, 100, 31, 103, -56, -80, -9, -26, 106, 22, 9, -78, -38, -126, 83, -54, -13, 83, -74, 2, 84, -121, 31, 10, -55, -38, 70, -14, 101, -85, 13, -66, 121, 126, -79, 81, -27, 56, 55, -9, 114, -107, 108, -72, 21};
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
    msg.setTimeStamp(0.5669634334898997);
    msg.setSource(8869U);
    msg.setSourceEntity(127U);
    msg.setDestination(21149U);
    msg.setDestinationEntity(8U);
    msg.origin.assign("VPKRZBPYUHNMXGLASYWBDBOYNPIJACIGEKBXMAOTCWUYQRDQLGTXFOQCOWGQZHJXJHIZCAREELYPQIEAULBWGXHSDLKZMORNDDTWHUHNVGAITLEWI");
    msg.htime = 0.16822881474764906;
    msg.lat = 0.641594725914483;
    msg.lon = 0.3701267872942897;
    const signed char tmp_msg_0[] = {24, -50, 106, 19, 108, 120, -70, 23, -1, 125, 3, -116, -69, 20, -115, -11, 44, -115, -15, -108, -77, 39, -114};
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
    msg.setTimeStamp(0.6359469305923771);
    msg.setSource(25412U);
    msg.setSourceEntity(143U);
    msg.setDestination(45332U);
    msg.setDestinationEntity(139U);
    msg.req_id = 12178U;
    msg.ttl = 37510U;
    msg.destination.assign("JRWBVGRDRGRUWYPWZHKHINXSXPKDCYBLOOLGYZYIQZSCSRPOLWANBCHEZFMXNJDDXQWHVQDJMAFRILENSCAWNJBVZKJTGCUZPPLRCAPVLAUEMNTKXFOUABFWMGFGWG");
    const signed char tmp_msg_0[] = {-128, 67, -37, 26, 28, 53, 40, 40, 110, -63, -87, 62, 120, 39, -41, -83, 51, 103, 56, -84, 117, -43, 22, -5, -71, -8, -5, -63, 51, 10, -100, 100, -33, -117, 99, -69, 63, -28, -6, 11, -92, 86, -57, -87, -117, -88};
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
    msg.setTimeStamp(0.781851852358384);
    msg.setSource(47403U);
    msg.setSourceEntity(128U);
    msg.setDestination(17847U);
    msg.setDestinationEntity(177U);
    msg.req_id = 42299U;
    msg.ttl = 3835U;
    msg.destination.assign("DJLNRWJOWDJMMIKSRWTMSHQTKICKFPLYUNRDUWVZUKJXNHJRKPLBEWLFKHVSNXDOTUVYADTCSFPGDNSLVBWBEYUCTPLYXZGFOGPESHHXOZTXKOQIOOFFMIZGGMXUKQFLAQGOCZSGIMHEBQIDXDQC");
    const signed char tmp_msg_0[] = {69, 22, -74, -94, 99, 66, -43, 107, 56, 23, 1, 4, -60, 102, -27, 39, -71, -98, -27, -82, 70, -105, 92, -51, -117, 83, -55, -30, 109, 115, -6, 60, -122, 23, -89, 64, -113, -70, 76, 21, 60, 45, -66, -5, -84, 110, -13, 47, -11, -53, 103, 68, -22, -49, 98, 17, -104, -28, 56, -12, 58, 100, -123, -4, 42, -123, 108, 94, 116, -74, 73, 11, -98, 58, -23, -50, -107, 39, -52, 11, 86, 91, -80, -26, -116, -121, -48, 9, -102, -72, -106, 112, 55, 54, -84, -29, 28, 3, 100, -18, -6, 68, -7, 50, -23, 52, 2, -41, 121, 43, -65, -1, 57, -73, 69, 42, 63, -108, -4, -80, 80, 92, -21, 46, -70, 41, 21, -56, -73, -50, -121, 51, 78, -20, -107, -16, -121, 5, 77, -124, 64, -79, 116, 31, -114, -41, -123, 112, 93, 87, -72, 21, -13, 89, -125, 58, 75, -124, 108, 75, -13, 33, 103, 30, -76, -108, -25, -13, 83, -11, 47, -18, -117, -9, 43, 65, -27, 116, -24, -98, -8, 51, -103, -46, -50, 24, 78, 7, -57, 116, 84, 78, -92, 71, 4, -83, 68, 0, -44, 40, -37, -89, 81, 30, 63, 26, -89, -17, -115, -21, -60, -31, 89, 91, 55, 19, -91, -51, -27, -105, 0, -108, 120, 70, -75, -92, -88};
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
    msg.setTimeStamp(0.3821305362524936);
    msg.setSource(9668U);
    msg.setSourceEntity(14U);
    msg.setDestination(11821U);
    msg.setDestinationEntity(226U);
    msg.req_id = 51523U;
    msg.ttl = 29175U;
    msg.destination.assign("YWIUOGFLPSSWOAECBHWNHQUYNKWQRDTZPFXIDHTWPLBJ");
    const signed char tmp_msg_0[] = {114, -24, -28, -12, 119, -60, 117, 126, -44, -21, -103, 37, -125, -103, -106, -113, 41, 21, 34, 104, -98, -4, 3, -72, 73, -107, -17, 0, -43, 58, 76, 54, 12, 82, -86, 81, 22, -67, 25, -73, 112, 46};
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
    msg.setTimeStamp(0.7278195284404384);
    msg.setSource(5199U);
    msg.setSourceEntity(43U);
    msg.setDestination(30791U);
    msg.setDestinationEntity(15U);
    msg.req_id = 16729U;
    msg.status = 67U;
    msg.text.assign("YGCIAUDRRHMGQOQWKLVQGWVNKKHJPIEJXCBGMEOZUAIFJTSFYLPKEXTBSZOPITYCF");

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
    msg.setTimeStamp(0.6201840321521546);
    msg.setSource(51002U);
    msg.setSourceEntity(179U);
    msg.setDestination(9459U);
    msg.setDestinationEntity(76U);
    msg.req_id = 23624U;
    msg.status = 246U;
    msg.text.assign("NNEXQKLBSSEOJHTTYRESICPULP");

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
    msg.setTimeStamp(0.43285874210074404);
    msg.setSource(35116U);
    msg.setSourceEntity(125U);
    msg.setDestination(31822U);
    msg.setDestinationEntity(194U);
    msg.req_id = 40570U;
    msg.status = 21U;
    msg.text.assign("ETKOCDMAFVYGPURUSQOHTNQDJAUZWBRIUYGTSDOLUGCPGVKFYFOHATHKKMTSLTCUOZXZCEBJITWWMYMQQPMVACMKXBDRRZAFAIEGDYZYWETKHHNJVRBXWJBSVALAXHLJFYWKEXFDCOEH");

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
    msg.setTimeStamp(0.9511719018531116);
    msg.setSource(19599U);
    msg.setSourceEntity(115U);
    msg.setDestination(28808U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("QDDWVJOXQBBPSBDCNMJNFKUIMDRVTJEENASBYSWVHAJRMZATROXKNVTEIJPURGGQRSBJPULLMRSHEQWTLCPFLHXKEXVKETLUFANEIUVNYOAISMBR");
    msg.links = 2092964218U;

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
    msg.setTimeStamp(0.4990704429184263);
    msg.setSource(38539U);
    msg.setSourceEntity(178U);
    msg.setDestination(15771U);
    msg.setDestinationEntity(102U);
    msg.group_name.assign("MBJBDTCSKKBARGQUSRJFPPHGOKZUIWDZZVUZLDGSSBOOCXAXIZPARCLFUALHIJHYMNPBNTDJZXWTAKCJOLVQDVTSNQHKESCXWMFAKXDKGZEQDFAQYWHVXBCHIOUSVJGNLDJYRVPEOKIYAXMRGNIFSMGJNPXEWIXYIEZLEQESTOKLBCRBPCUWPLFTWUVVXJEE");
    msg.links = 4254883909U;

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
    msg.setTimeStamp(0.20495903517224734);
    msg.setSource(8498U);
    msg.setSourceEntity(243U);
    msg.setDestination(42566U);
    msg.setDestinationEntity(203U);
    msg.group_name.assign("FUWQCPNAEWQBBEDVKVRAVCWLLDCSNLLYPTGNNGXWRFCMUTQYJZXTRVDVGKDYDTUDLAATLPGGSFQYSAISCTZVZEEJQXAJIIEVCBBHXRUWMZ");
    msg.links = 3419594598U;

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
    msg.setTimeStamp(0.9581704256796189);
    msg.setSource(24125U);
    msg.setSourceEntity(72U);
    msg.setDestination(24406U);
    msg.setDestinationEntity(111U);
    msg.groupname.assign("MVEBOSZRMAOQSYVGUXQKKLKAJYPEWXKCVGZQHWPYPWRGTABPUDISFKDONWLMPEXCYSSEBNNPTZIZMBRJFJXCLMTLHITQLIVYSDZNCBIO");
    msg.action = 202U;
    msg.grouplist.assign("QHOALZPXCRHJINLIRWXGBAPRPISKBBHTBTUCFEBLKEBVJJWQSMEVZVACRFFLIYWJXJZWVDKNDZCPDYCXBLEBRIHZUGRGOASJGMVELGSTFRJXUSNKNJKSINXCD");

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
    msg.setTimeStamp(0.10575537968770055);
    msg.setSource(52951U);
    msg.setSourceEntity(189U);
    msg.setDestination(4321U);
    msg.setDestinationEntity(148U);
    msg.groupname.assign("GALMLKBAWMDAYHIIGTUITMGKFZAJHPZIWJJNHGNPVCEKRSYLYWJCUVAUFEBJFQRPNZRWONVEKWRTHXQLCOFEKZZWKNYRTY");
    msg.action = 142U;
    msg.grouplist.assign("TPKBIMOUOVXSUDDMPF");

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
    msg.setTimeStamp(0.21237253588377536);
    msg.setSource(10968U);
    msg.setSourceEntity(150U);
    msg.setDestination(44901U);
    msg.setDestinationEntity(107U);
    msg.groupname.assign("HWUTCCYGUUXNHMCPQPNDDTPHTYFWBDKVEYJNWYTVRZEZAYNVGHVDMMTZZIMYKCDMIEUEUEJAWLQPFAJQYNETGIFSOCXJFBUZDIXJEGUJBIGQKALMLILTKJSVMQQFHSLALBQBXNOGZCAWEAIORLSHRNTWDURGGPZZEWOBVXGBKFABDMXUDOFPSYQCVAOPSXRSDQRIJBNHN");
    msg.action = 78U;
    msg.grouplist.assign("EPMNKSYWPSYEZABUOHZWAYNVIRBHMGFKUUWQZEBNDSUQCHQAZSLDWKJPHVZBJJPRUEQQAMJFOGPYUPNVXHCQOODTFIVZDNCVLPCBYLGTDKXEBIDRQ");

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
    msg.setTimeStamp(0.8362079545533188);
    msg.setSource(24395U);
    msg.setSourceEntity(151U);
    msg.setDestination(53108U);
    msg.setDestinationEntity(177U);
    msg.value = 0.834581650155089;
    msg.sys_src = 1796U;

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
    msg.setTimeStamp(0.35624335010714436);
    msg.setSource(62728U);
    msg.setSourceEntity(123U);
    msg.setDestination(4659U);
    msg.setDestinationEntity(239U);
    msg.value = 0.7289744720091019;
    msg.sys_src = 3581U;

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
    msg.setTimeStamp(0.3093303694814249);
    msg.setSource(41363U);
    msg.setSourceEntity(212U);
    msg.setDestination(1065U);
    msg.setDestinationEntity(90U);
    msg.value = 0.9530129312896075;
    msg.sys_src = 58486U;

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
    msg.setTimeStamp(0.23484029626050185);
    msg.setSource(40076U);
    msg.setSourceEntity(208U);
    msg.setDestination(7226U);
    msg.setDestinationEntity(161U);
    msg.value = 0.2434870929281463;
    msg.units = 126U;

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
    msg.setTimeStamp(0.31591612578942163);
    msg.setSource(49158U);
    msg.setSourceEntity(28U);
    msg.setDestination(26155U);
    msg.setDestinationEntity(134U);
    msg.value = 0.865422177995232;
    msg.units = 31U;

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
    msg.setTimeStamp(0.6376857298137497);
    msg.setSource(11109U);
    msg.setSourceEntity(176U);
    msg.setDestination(64504U);
    msg.setDestinationEntity(250U);
    msg.value = 0.46345492886162065;
    msg.units = 53U;

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
    msg.setTimeStamp(0.5431488033870463);
    msg.setSource(54804U);
    msg.setSourceEntity(67U);
    msg.setDestination(14357U);
    msg.setDestinationEntity(120U);
    msg.base_lat = 0.12884128233766035;
    msg.base_lon = 0.40671253691290865;
    msg.base_time = 0.7807987832030915;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 48853U;
    tmp_msg_0.destination = 27650U;
    tmp_msg_0.timeout = 0.28771345438648577;
    IMC::IridiumMsgRx tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.origin.assign("CHDTRPSXXQQNTGLQTLNOFTBQCPDOGAJSVMIGHDREXABSKJNRVBDMUYHFAPDIKREYWWNSZRNROUOVJDOJITICAGKVCQWYADQKPFVVKUJTAZSPMHLJWNEKRIJBTMXYWBXNLMHFSZCBMIJKZEEW");
    tmp_tmp_msg_0_0.htime = 0.2078163803566898;
    tmp_tmp_msg_0_0.lat = 0.2473369674850866;
    tmp_tmp_msg_0_0.lon = 0.3760120114012576;
    const signed char tmp_tmp_tmp_msg_0_0_0[] = {-110, -34, -26, -20, 28, 28, 84, 98, -12, -23, 87, -15, -26, -33, 116, -25, -22, -50, 35, -75, 92, 6, -63, 8, 20, -10, -84, 34, -106, 10, 91, -115, -97, 68, -9, 26, 121, -100, 23, 74, -9, 53, -118, -78, -116, -19, 27, 51, 71, -94, -11, 81, 3, 88, 26, -66, 95, -8, -23, -68, 46, 98, 26, 48, 108, 42, 93, 64, -89, 31, 37, -72, 58, 74, 66, 93, 32, 85, -46, -42, 104, -27, -89, 75, -87, 74, -55, -19, -48, 20, -30, 0, -73, 11, -19, 24, 27, 62, -80, -47, 89, -116, -70, 102, -101, -22, -78, -19, -113, 116, -68, 116, 86, 91, -45, -122, -80, 80, -64, 28, -43, -115, -45, -70, -86, 90, 114, 83, -35, -55, -83, -15, 37, 62, 63, 125, -84, 1, -30, -91, -117, 103, 96, -124, -12, 119, -93, 59, -89, 10, -74, 86, -74, 24, 44, -14, 7, -69, 83, -18, -108, 62, 27, -13, 105, 53, -91, -40, -124, 10, 9, 4, 52, -42, 81, 21, 37, 105, -25, 105, -41, 100, -95, -12, -77, 14, -104, 108, -99, -49, -28, 116, -23, 126};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8789059208123682);
    msg.setSource(16318U);
    msg.setSourceEntity(140U);
    msg.setDestination(56492U);
    msg.setDestinationEntity(222U);
    msg.base_lat = 0.18779672764387556;
    msg.base_lon = 0.36793291485001833;
    msg.base_time = 0.6182250082652265;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 34879U;
    tmp_msg_0.priority = -49;
    tmp_msg_0.x = -1659;
    tmp_msg_0.y = -26766;
    tmp_msg_0.z = -22228;
    tmp_msg_0.t = -27107;
    IMC::Land tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5275839045227857;
    tmp_tmp_msg_0_0.lon = 0.5009270625420758;
    tmp_tmp_msg_0_0.z = 0.2704987565640603;
    tmp_tmp_msg_0_0.z_units = 28U;
    tmp_tmp_msg_0_0.speed = 0.43692380754351334;
    tmp_tmp_msg_0_0.speed_units = 106U;
    tmp_tmp_msg_0_0.abort_z = 0.8636955931507149;
    tmp_tmp_msg_0_0.bearing = 0.7442653824221547;
    tmp_tmp_msg_0_0.glide_slope = 85U;
    tmp_tmp_msg_0_0.glide_slope_alt = 0.5945520145371846;
    tmp_tmp_msg_0_0.custom.assign("KREMIYVTZLLTXXDNIPWXQMPUUJTAOFIJKWMNUZAUAJXCERBGHGPWDWRZNGWYJRHRZQPZRJWVQZAZDUBZCMCDKJJHBDRPGSLYFCCGEGELQT");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8309342079844122);
    msg.setSource(45501U);
    msg.setSourceEntity(234U);
    msg.setDestination(21750U);
    msg.setDestinationEntity(171U);
    msg.base_lat = 0.9975386189028926;
    msg.base_lon = 0.7071505396482427;
    msg.base_time = 0.4131739295548108;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 18229U;
    tmp_msg_0.destination = 30356U;
    tmp_msg_0.timeout = 0.3768448186244153;
    IMC::SystemGroup tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.groupname.assign("OOEAFQVTRMYETRNIPABMZJAMCKBUNKZLLYFNEOYQSTXGCPIWZCZHBXIHJARNLVTPLDXCEUXGBWHWEUCNIPOLMOLMDUJEYNWRJUYTUSASFVCKNAWPJKXUHFPBXHSEDGBJSHJZTMZRQOSHWAQAIBSWIPKMCUSZSJVQDXQCRGISENIPVKFUQGYKUEGFVZZTLDWRAGWD");
    tmp_tmp_msg_0_0.action = 64U;
    tmp_tmp_msg_0_0.grouplist.assign("MVOQCYHQQDNCKYCLSBFULOANKG");
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
    msg.setTimeStamp(0.08602226524281531);
    msg.setSource(24470U);
    msg.setSourceEntity(6U);
    msg.setDestination(17524U);
    msg.setDestinationEntity(254U);
    msg.base_lat = 0.6389476250164802;
    msg.base_lon = 0.22640030028290592;
    msg.base_time = 0.8906929839886552;
    const signed char tmp_msg_0[] = {28, -116, 79, -55, 46, -37, -104, -61, 98, -99, 125, 67, -94, -10, 41, -103, 47, 58, -29, 123, -35, -34, 67, 65, 78, -12, -39, -50, 44, 121, 8, 124, 42, -46, 73, 26, -18, 12, 103, -77, 123, 32, 17, 9, -85, 84, 51, -73, 13, 117, 28, -46, -4, 68, -17, 49, -123, -92, -4, -78, -14, 85, -71, -75, 70, 88, -61, -72, -123, 15, -2, 121, -3, -33, -119, -59, 32, 45, -84, 22, -98, 86, 36, -89, -25, -53, -67, 63, -69, -78, 76, 125, -128, 21, 87, 120, -117, -29, -38, 106, 5, 9, 55, 108, -28, 89, -33, 37, -53, 111, -56, -97, 100, -33, -30, -75, -72, 5, -89, -5, -11, -113, -81, 17, 40, -8, -56, -110, -48, -55, 16, -13, 108, -82, -57, -34, 103, 53, 104, -105, 14, -124, 72, 61, -45, 30, 112, 12, 50, 7, 28, 88, -93, -11, -63, 64, 116, -82, -113, -17, -42, 1, -9, -6, 122, -76, 61, 74, -122, -123, -34, -110, 121, 2, 67, 51, 104, -27, 48, 112, 77, -27, 118, 62, 78, -105, 19, -70, 76, 29, -9, 104, -62, 105, -97, 29, 60, -46, -14, 12, -62, -79, 28, 120, -59, -63, 54, -80, 121, -82, -56, 41, -11, -17, 16, 72, 75, 49, 108, -101, 56, 92, 37};
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
    msg.setTimeStamp(0.13796948098278294);
    msg.setSource(9392U);
    msg.setSourceEntity(36U);
    msg.setDestination(2466U);
    msg.setDestinationEntity(13U);
    msg.base_lat = 0.8612346789291102;
    msg.base_lon = 0.7230223923726795;
    msg.base_time = 0.9277552865799478;
    const signed char tmp_msg_0[] = {15, 46, 21, -28, 25, 126, 118, -78, -14, -125, -110, -28, 16, -125, 78, -3, 122, 119, 71, 65, -71, -64, 12, 5, 116, 71, -40, -8, 10, 98, -109, 12, 126, 31, -90, 13, -11, 28, -58, -32, -70, 36, -113, -88, -89, 54, -118, -43, 38, -87, -101, -72, -32, -96, 41, -53, 103, 58, 115, -110, 0, 77, 49, -108, -67, 0, -13, 45, -91, 119, -113, 32, -99, 91, 0, -104, -118, 14, 34, -117, 126, 106, 103, 62, 43, -82, -47, -117, 89, 84, 21, -105, 95};
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
    msg.setTimeStamp(0.49912898479060297);
    msg.setSource(37387U);
    msg.setSourceEntity(220U);
    msg.setDestination(45713U);
    msg.setDestinationEntity(248U);
    msg.base_lat = 0.6448011166680959;
    msg.base_lon = 0.4663986050840593;
    msg.base_time = 0.86679604973155;
    const signed char tmp_msg_0[] = {-46, 30, 50, 116, 21, -120, 69, -23, 3, 57, -119, -58, 103, 52, 62, 61, -77, -77, 109, 123, 75, -39, -30, -13, -99, 122, -56, -121, 46, -105, 56, -125, -53, -9, -26, -110, -119, 54, -31, 95, -104, -92, 36, 103, 50, 94, -29, -16, -119, -87, -61, 73, -23, -48, -76, -69, 102, -18, 70, -3, 49, -29, -121, 111, -71, -39, 115, 85, 24, 109, 75, -13, 50, -11, -2, -70, 69, 118, 76, -42, -19, 121, 88, -61, 25, -113, -22, 57, 16, -120, 92, 75, 89, 59, 118, -116, 29, 14, -33, -86, -97, 0, -88, 109, 43, 72, -84, 110, 9, 71, -67, -2, -106, -74, 75, -116, 48, 99, 28, 29, 107, -9, -73, 47, 20, -57, 32, 43, 8, -50, 114, -12, 1, -53, -33, -83, -43, -83, 9, 22, 60, 61, 109, -78, -47, 109, -13, -87, -47, -3, -43, 100, 111, -28, 121, -71, -30, 91, -52, -97, -27, 19, -24, 106, -98, 42, -69, 99, 63, -53, 37, -48, -6, 83, 115, -68, 54, -39, 33, -56, 41, -96, -1, 125, 5, -24, -119, 98, -95, -30, -73, 20, 82, 11, 74, 72, 96, 119, -66, -31, 82, -74, 51, 3, 115, -79, -1, 15, 104, 47, 48, 62, -90, 112, -21, -42, 109, -82, -83, 63, 125, -30, 39, 116, -36, -49, -42, 28, -12, -101, -4, -22, 60, -23, 84, 61, -124, 32, -15, 23, -97, -84, -99, -58, -63, 102, 74, -113, -14};
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
    msg.setTimeStamp(0.19664206957782626);
    msg.setSource(44224U);
    msg.setSourceEntity(30U);
    msg.setDestination(25990U);
    msg.setDestinationEntity(38U);
    msg.sys_id = 26689U;
    msg.priority = 44;
    msg.x = -32522;
    msg.y = -786;
    msg.z = 29440;
    msg.t = -29965;
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.3763209500917354;
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
    msg.setTimeStamp(0.09752185931103585);
    msg.setSource(11432U);
    msg.setSourceEntity(236U);
    msg.setDestination(60875U);
    msg.setDestinationEntity(187U);
    msg.sys_id = 28759U;
    msg.priority = 70;
    msg.x = -378;
    msg.y = 261;
    msg.z = -31530;
    msg.t = -10697;
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 106U;
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
    msg.setTimeStamp(0.543753684349761);
    msg.setSource(18891U);
    msg.setSourceEntity(6U);
    msg.setDestination(44583U);
    msg.setDestinationEntity(229U);
    msg.sys_id = 48109U;
    msg.priority = -95;
    msg.x = 12839;
    msg.y = 10517;
    msg.z = -4740;
    msg.t = -3244;
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 243U;
    tmp_msg_0.text.assign("AHCVTJSSLLHVDBXTRJPITEUTZPMCHFNTNNNOBODHPQKXMVDXGLOVUKAKUHXNRYEJSEXBWUDSXTEFVEFFGYYYIFHMVKQMBFWKILONYPGDDICZKNRGWMOTVZQTHWWOXPJRUGQJLLULRBUACMDOUYAOE");
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
    msg.setTimeStamp(0.6497484257877342);
    msg.setSource(21216U);
    msg.setSourceEntity(204U);
    msg.setDestination(15055U);
    msg.setDestinationEntity(171U);
    msg.req_id = 12374U;
    msg.type = 226U;
    msg.max_size = 20947U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8916924716164383;
    tmp_msg_0.base_lon = 0.8468189799421205;
    tmp_msg_0.base_time = 0.8928538127206644;
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
    msg.setTimeStamp(0.1339784415494787);
    msg.setSource(33371U);
    msg.setSourceEntity(240U);
    msg.setDestination(16588U);
    msg.setDestinationEntity(18U);
    msg.req_id = 2311U;
    msg.type = 239U;
    msg.max_size = 9230U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.31004679942709645;
    tmp_msg_0.base_lon = 0.5263639302458605;
    tmp_msg_0.base_time = 0.8503321952462073;
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
    msg.setTimeStamp(0.4471203376231795);
    msg.setSource(46852U);
    msg.setSourceEntity(125U);
    msg.setDestination(45384U);
    msg.setDestinationEntity(205U);
    msg.req_id = 47046U;
    msg.type = 25U;
    msg.max_size = 28620U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5025383281391465;
    tmp_msg_0.base_lon = 0.1096487261907656;
    tmp_msg_0.base_time = 0.6113824845368454;
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
    msg.setTimeStamp(0.036001650025134);
    msg.setSource(30240U);
    msg.setSourceEntity(0U);
    msg.setDestination(170U);
    msg.setDestinationEntity(46U);
    msg.original_source = 37199U;
    msg.destination = 13581U;
    msg.timeout = 0.6022730547841809;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 164U;
    tmp_msg_0.op = 235U;
    tmp_msg_0.request_id = 21730U;
    tmp_msg_0.plan_id.assign("UXLSQCASFIUCUJBQSLUNEWPCZMDACARLHXSVGLQDDAJE");
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.23723891415640563;
    tmp_tmp_msg_0_0.amp = 0.7197525264205338;
    tmp_tmp_msg_0_0.cor = 234U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("ZIZZAKFAHQLHEJWZBPJVJOSYAYIWKFUZKBEVRPEQLRRQXTOSMVDUFRXPASINYOIALWXMTTMCQARTYHDACPHOHATLOSNT");
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
    msg.setTimeStamp(0.803645032042915);
    msg.setSource(19163U);
    msg.setSourceEntity(8U);
    msg.setDestination(16672U);
    msg.setDestinationEntity(78U);
    msg.original_source = 3306U;
    msg.destination = 1233U;
    msg.timeout = 0.671540120450195;
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.15746354175469945;
    tmp_msg_0.phi = 0.7498347481203794;
    tmp_msg_0.theta = 0.39802784994164386;
    tmp_msg_0.psi = 0.03003659886394683;
    tmp_msg_0.psi_magnetic = 0.2804248620423405;
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
    msg.setTimeStamp(0.660573834085962);
    msg.setSource(18117U);
    msg.setSourceEntity(92U);
    msg.setDestination(17359U);
    msg.setDestinationEntity(79U);
    msg.original_source = 40714U;
    msg.destination = 16183U;
    msg.timeout = 0.8192734231243989;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("BPFOLXBLEZCAMMMNFVQCNIUDNIKUTSDEDNUYSSYPPKAGKCGONQXPXWBDUTBRAUJHRZDSJTLQKXNGHQUWKXHXNOJLGRUCRWFXARETAGXWYSHJVIGEORTKNHVK");
    tmp_msg_0.value = 98U;
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
    msg.setTimeStamp(0.8291709278563886);
    msg.setSource(6479U);
    msg.setSourceEntity(32U);
    msg.setDestination(51406U);
    msg.setDestinationEntity(24U);
    msg.type = 24U;
    msg.comm_interface = 38264U;
    msg.model = 55882U;
    msg.list.assign("QWJGIUCQTWUJKHXNRPTJX");

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
    msg.setTimeStamp(0.028921075928247664);
    msg.setSource(9030U);
    msg.setSourceEntity(247U);
    msg.setDestination(6438U);
    msg.setDestinationEntity(7U);
    msg.type = 94U;
    msg.comm_interface = 41389U;
    msg.model = 30522U;
    msg.list.assign("KITHQOLNFOUQDJPIYJXSOPTWDLQUBCKSEEGPHYJGAOHQRTSEJFYWYZYFZDVYND");

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
    msg.setTimeStamp(0.9809175798684476);
    msg.setSource(39529U);
    msg.setSourceEntity(78U);
    msg.setDestination(28798U);
    msg.setDestinationEntity(198U);
    msg.type = 106U;
    msg.comm_interface = 13599U;
    msg.model = 12408U;
    msg.list.assign("LIPGAYXHELUBUPXZKSCDBGQOCTCNWRCYJKXCVHWVZSEERGAKBPWFIXZQEMELCMKBGSLJIKGYZUORHWKQUTJEDXVFXCSARZMBDBAFGHILIFDXTVUAAGDYZFAPHJTGNNTIRMNFHUEUVYQNMWDULTSZMNOMVONOSZMDV");

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
    msg.setTimeStamp(0.1279929596140279);
    msg.setSource(53504U);
    msg.setSourceEntity(153U);
    msg.setDestination(28194U);
    msg.setDestinationEntity(164U);
    msg.type = 241U;
    msg.req_id = 2194061681U;
    msg.ttl = 51069U;
    msg.code = 166U;
    msg.destination.assign("USVMCCOEQRFKDTDTVLCRWEBANKFMSQVJRYIJABNEUXIJNDCAQHZAYIOEGZKSXDHRSIWU");
    msg.source.assign("RWEVSNLAWXNXMLFRFCVHOAOQLZHAHLPRVZEFTUGFKEJEGKHKATBYLSJTVAUCPXSQJFKEIUDCNHXYMPJBFBCMNUHINJZWQPQCGOWVDDUPYUHUJDOGEMONTIYQBNLWMDYELQRCSAHIYDJTRWACLKMIPBRWYXMMMZIZWXNVQRQLHNSFUBFDWZYGEEZUVGOOMXTCBROCASBIJKJPICPY");
    msg.acknowledge = 17U;
    msg.status = 11U;
    const signed char tmp_msg_0[] = {125, -57, 41, -4, -70, 98, -81, 25, -79, 66, 120, 126, 24, -7, 72, 84, -32, -38, -39, -21, -81, 53, 110, -118, 36, 107, 95};
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
    msg.setTimeStamp(0.4083039383759266);
    msg.setSource(61431U);
    msg.setSourceEntity(60U);
    msg.setDestination(46164U);
    msg.setDestinationEntity(60U);
    msg.type = 168U;
    msg.req_id = 3290726543U;
    msg.ttl = 28409U;
    msg.code = 188U;
    msg.destination.assign("RXPIREEYWUWSZMRRRZMDZISLGWFSKCVUPVZKBTWOXIEPZOTMPWOAJBZVCYNPBMCDHHOQLAKKFEJQTVYPQUJBMREKQHLMHNNUXJXKPNLZPIDCTFNGUJNQ");
    msg.source.assign("AOWZNEZQIPFVETKCWAUEAHUIWLKEMPMSILCVFOWUXZRBWVFFUPQJFZPZDCXIGIW");
    msg.acknowledge = 35U;
    msg.status = 119U;
    const signed char tmp_msg_0[] = {16, 88, 68, 119, 17, -91, -110, -19, -47, 55, -58, -69, -8, -105, -121, 84, 59, -38, 94, -6, 6, -99, -86, -74, 60, -114, 64, 53, -21, 102, -114, -3, -14, 104, -90, -3, -34, -113, -77, 77, -5, -102, 32, 123, 73, -72, -8, -106, 58, -111, -78, -82, -30, -77, -119, -70, -115, -10, 110, 117, 66, -83, 54, -87, 105, 122, 74, -74, 28, -41, 17, 3, 35, -67, -3, -17, 19, 17, -127, -107, -87, 120, 112, -123, 68, -61, -70, -122, -82, -85, 99, 96, -82, -39, -31, 106, 93, 78, 1, 38, -28, -38, -60, -88, 44, 85, 11, 62, -98, -77, -3};
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
    msg.setTimeStamp(0.8651312161537517);
    msg.setSource(19196U);
    msg.setSourceEntity(50U);
    msg.setDestination(46370U);
    msg.setDestinationEntity(206U);
    msg.type = 236U;
    msg.req_id = 134631966U;
    msg.ttl = 64117U;
    msg.code = 227U;
    msg.destination.assign("OYIFLNWEVDPCBJARVXFBQPSXQIGXFAUZYSBTRHUFGLTCTKBJQDEAGLLKYMNPSZDDHCDGXCNLKZVDMOPXKNCSMPOWVVZMVIYPXWOOEQNMXUTSAAQXHYNLJFSJUQPGYEHKTFMRMWZCOSTAMFRVKEBRUJLOOIIJQTGVIYUSLEQZCYQTNAR");
    msg.source.assign("JHHOVVSZLLYJJMKBIXFGEBQUCATPKHCIGEQWHXYUGVVRELIJBLZCLGEVEBMQJXYISIENLMWMPFZOWQT");
    msg.acknowledge = 121U;
    msg.status = 58U;
    const signed char tmp_msg_0[] = {-125, 59, -98, 58, 104, -18, 14, -67, -58, 6, -111, 102, -57, 113, 20, -127, -42, 40, 109, 26, 73, 4, -16, -15, 104, -15, -65, 20, 11, -22, 55, 88, -41, -48};
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
    msg.setTimeStamp(0.4438626567904784);
    msg.setSource(47523U);
    msg.setSourceEntity(82U);
    msg.setDestination(26983U);
    msg.setDestinationEntity(54U);
    msg.id = 32U;
    msg.range = 0.3193192927755587;

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
    msg.setTimeStamp(0.6183636962657709);
    msg.setSource(48990U);
    msg.setSourceEntity(223U);
    msg.setDestination(16994U);
    msg.setDestinationEntity(215U);
    msg.id = 128U;
    msg.range = 0.2080035039539252;

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
    msg.setTimeStamp(0.16663879334043052);
    msg.setSource(41285U);
    msg.setSourceEntity(65U);
    msg.setDestination(1342U);
    msg.setDestinationEntity(59U);
    msg.id = 27U;
    msg.range = 0.8647611829505152;

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
    msg.setTimeStamp(0.5206290902320471);
    msg.setSource(31601U);
    msg.setSourceEntity(95U);
    msg.setDestination(23496U);
    msg.setDestinationEntity(184U);
    msg.beacon.assign("IWWIUJRLMSVTGJZVBUENEFINUHXSCAEWZNEWREXFSBSDEBFDPJQMLPQRYLCOHURPXCJKLPZDJBBKYIHATDDRGSYHALIOCZJTXKOZWHCXGQVPRSCKAGEADQFPBLJIINEVHFYPUGRPKDFMOTUZGBFABVAUOSJGALWAKNFXZWBDDYNNMBJPM");
    msg.lat = 0.9875269210018197;
    msg.lon = 0.5288774862138638;
    msg.depth = 0.9816806875221756;
    msg.query_channel = 47U;
    msg.reply_channel = 153U;
    msg.transponder_delay = 39U;

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
    msg.setTimeStamp(0.2704036069688418);
    msg.setSource(17996U);
    msg.setSourceEntity(164U);
    msg.setDestination(49978U);
    msg.setDestinationEntity(142U);
    msg.beacon.assign("UXCXQSVPAHZACTJEFODLNEVEINLEUOMVVQCEOWJLMAPUUWFFEWRQGOXKBFXZBKMMDTHCJGHLALSDDFUCOCBQPVMEYYWSONZMJSZJGFURJJBHMQJFLTKAAHXWGIZQNBXRHGTDYVRAQETIOPWOINPIGPIWALSXXRAWITOZVLVTMGRBRSYCSHZWYSNRHKHVZINZVPBMOUCYSEPTKQQMXULZPBIDY");
    msg.lat = 0.8799280058271681;
    msg.lon = 0.09542061917880373;
    msg.depth = 0.9676860850470335;
    msg.query_channel = 192U;
    msg.reply_channel = 175U;
    msg.transponder_delay = 134U;

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
    msg.setTimeStamp(0.32980417905629267);
    msg.setSource(29504U);
    msg.setSourceEntity(220U);
    msg.setDestination(17590U);
    msg.setDestinationEntity(224U);
    msg.beacon.assign("LSRKQZKVSCFHXMJNILHHJBWEZWVTPOOTRMXOWUHIYFNUUGQTGLOFINEMYCQFFSJGBBBEKPAAMVPGRPWJVSHBXIRDJNALDREAKVCTYVDUQLBMKOTMCBLNYFDCTNXPIWRVKNXNADEMLQPJDSKMSIFSIBOWDZTAMCKCBZOQPUIDZOYQJGENEJVIWCGHYFXRXPAEYUJULVGQUDKWYPLEOXZADJASTKGHMQI");
    msg.lat = 0.6752452089143322;
    msg.lon = 0.19916723172727213;
    msg.depth = 0.12208807623160711;
    msg.query_channel = 183U;
    msg.reply_channel = 242U;
    msg.transponder_delay = 129U;

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
    msg.setTimeStamp(0.8438317923554979);
    msg.setSource(27857U);
    msg.setSourceEntity(161U);
    msg.setDestination(23666U);
    msg.setDestinationEntity(60U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.939680733240772);
    msg.setSource(13083U);
    msg.setSourceEntity(104U);
    msg.setDestination(59943U);
    msg.setDestinationEntity(106U);
    msg.op = 68U;

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
    msg.setTimeStamp(0.8138808385431407);
    msg.setSource(48323U);
    msg.setSourceEntity(108U);
    msg.setDestination(36795U);
    msg.setDestinationEntity(162U);
    msg.op = 52U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WMQCCMONYMBQIDPOYNSYWOGBIZNZHYSFTAVHFWGZEKIUTVHHPJHBRVUEHJKKVSGSZDVLTDQQFPOKBXCEWXAJJLWXTIEOFNLVGNSLBSWI");
    tmp_msg_0.lat = 0.7168231121829238;
    tmp_msg_0.lon = 0.7677893923924082;
    tmp_msg_0.depth = 0.8527591956720094;
    tmp_msg_0.query_channel = 129U;
    tmp_msg_0.reply_channel = 165U;
    tmp_msg_0.transponder_delay = 235U;
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
    msg.setTimeStamp(0.48644517303172163);
    msg.setSource(58681U);
    msg.setSourceEntity(202U);
    msg.setDestination(7738U);
    msg.setDestinationEntity(8U);
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.622865054135234;
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
    msg.setTimeStamp(0.013762138732138163);
    msg.setSource(25806U);
    msg.setSourceEntity(135U);
    msg.setDestination(44630U);
    msg.setDestinationEntity(96U);
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 223U;
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
    msg.setTimeStamp(0.5644153913010753);
    msg.setSource(2184U);
    msg.setSourceEntity(236U);
    msg.setDestination(44795U);
    msg.setDestinationEntity(45U);
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.3802060147963796;
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
    msg.setTimeStamp(0.24460258462803097);
    msg.setSource(54396U);
    msg.setSourceEntity(216U);
    msg.setDestination(44411U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.9272357372862516;
    msg.lon = 0.38308101954060647;
    msg.depth = 0.048587417157343604;
    msg.sentence.assign("TRJAVEUOIVESXLKTHUJAFPRVPOMTMMUOZYRUDPWAUGOYSCRXFOHBCYLWBDMPSZCGCPYWLBVYZZXUPKXZTWQZXDKEOGIHFWTNNQCSLEZ");
    msg.txtime = 0.4252987229820345;
    msg.modem_type.assign("TOEWZRWLICYCSVKQRBNFSDABAFWKKYDRZYTFEDGVGHKXVQXHTBZXWWMQXUWARMHQBGLRLSIZTSIMNPNFLPFOFPMYPIGITBUBAWAPLHVHPGO");
    msg.sys_src.assign("YJAZRTVULGBIOAVRYXMZOCHILFZGVDUPZNPKNQST");
    msg.seq = 28581U;
    msg.sys_dst.assign("UUWWYSMEFOLSGKDXSEOUTTWTOWUDZCMXMVYDGKKRXKTAJZXGHCBNAAQMFHPBNMMECZHXRMJVCIHBAKDJFDWIOTXGZRUTOTGSSPIJJPSYETJAQWYDXYWIHPLVFJFYSNKBPAEAMMPFNBZGWHSGVLZGPYQAVRZLXVHDZRMQFHQIBUEIJBNKLUUKFFVYDABCPNCTQRLIOOWSEXUVNOYJWDTQERXLNLHRJG");
    msg.flags = 242U;
    const signed char tmp_msg_0[] = {-122, -104, -34, -3, 107, -110, -28, 125, -73, -26, -53, 72, -25, 30, 50, -19, -86, -74, 54, -9, 99, 126, 67, -115, -111, -78, -58, 77, 29, 113, -85, -124, 120, 13, -45, -39, -64, 10, 98, -69, -43, 19, 114, -8, 17, -1, -79, -110, 35, -100, -90, -37, 108, -72, -66, -11, -100, 60, -79, 42, -24, -47, 57, -36, 11, 35, -85, -125, 106, -33, 59, 57, 77, 48, -39, 27, 23, -72, -61, -78, -75, 8, -50, -52, 17, 50, -95, -73, 95, -96, 13, -85, 123, 82, -20};
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
    msg.setTimeStamp(0.6265914478955947);
    msg.setSource(52361U);
    msg.setSourceEntity(152U);
    msg.setDestination(32349U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.1385941142281708;
    msg.lon = 0.6450292654234447;
    msg.depth = 0.026935264000197634;
    msg.sentence.assign("ORROPDTWAJBYCWAGTCJYCWLMOMPTUBGSACMMMDIUQGWUFFDLYPNYADSWZVKRMRHXBKZPSRKFLRRJLEBVWZB");
    msg.txtime = 0.9896483628774435;
    msg.modem_type.assign("YHPVOODZUPTVGNBFHKJVFHBGJGNKSILAZBUTHIQPXTRYMFDRDICOGOUARERMFIMYFPVUOEWYVGKWOREQKYEPCGWUBXSPOKAISJHEZDSSVALGAJTHAJ");
    msg.sys_src.assign("QVTLLIMDAQFFODPKZMKFWYHVISGCOKXAPZJTHINIOWWTPFBEBWMBQVAHJNRBEJHRVMXTGNZQUJSRBQXUPXBPXUKEZYFRCMKYIJKEDFCGLAPXTOEHPTHPTLLICMGRWANEWYSAWOXEIWAO");
    msg.seq = 50957U;
    msg.sys_dst.assign("OKMQDKBSZHAOYIHEBQGNNLIMIOKQJLWPCCWMTEBHUPJZSZGHZVSCSPSUANFEDVPGRFGIYFHIHQUJCDNBVOIUGNDNFIUVHDPESJVTMV");
    msg.flags = 19U;
    const signed char tmp_msg_0[] = {20, -84, 59, 80, -93, 40, 21, -76, 4, 72, -3, 95, 31, -10, -47, -11, 56, 73, 29, 120, 46, 116, 61, 38, 97, 97, -70, -125, 70, -107, 78, -23, -2, 111, 72, -122, -101, 72, -94, 122, -116, 79, -53, -97, 86, -127, 30, 38, 96, -85, 67, -18, 73, -97, 13, 61, -31, -97, 82, 37, -95, 63, -64, 43, -20, 22, 33, -89, 116, 118, -61, -13, 93, 6, -7, -32, -33, 82, 88, -4, 106, -98, 26, -23, -66, 29, -39, -83, -40, 109, -102, -74, -117, -123, 74, 51, 46, 108, 76, 72, -95, 32, -22, 62, 1, -1, -120, -95, -45, -13, -39, -58, -25, 51, 58, -56, -6, 76, 21, 76, 7, 77, -17, -99, -25, 45, -65, 27, -92, 121, 24, 46, 119, -110, -1, 82, -29, 67, 59, 18, -1, -60, 108, 55, -84, -120, 104, -84, 122, -53, -119, 0, -73};
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
    msg.setTimeStamp(0.6189308498901205);
    msg.setSource(63025U);
    msg.setSourceEntity(134U);
    msg.setDestination(4995U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.1777153278850887;
    msg.lon = 0.5676477739362061;
    msg.depth = 0.7496530025554974;
    msg.sentence.assign("HFPVHYPAQRMCNZGVINYVIMZGUFVIYTYTZBSWXPJGDLAAIJXBGDSYCZQMNFSHAHRIKWECJFPIVXDJJCHQSUSTKSWVTERCLOQRXDNWAPBBDKBBUBLAZPOHWMFUDKOFUAMYNWOTKHPJRUIQYNZFDEGLPTCHZUKCNWRSE");
    msg.txtime = 0.8266016665803094;
    msg.modem_type.assign("NJMPTWLCSWIEXHBCHMCTGEW");
    msg.sys_src.assign("KFOCFGWQEKJXWICOSCAHJDKAMQHNIKJOSFBHOKRVGRZFDUXTTBXAGTRVYAGQEDZGNQAK");
    msg.seq = 12178U;
    msg.sys_dst.assign("VMCUVBACEYGQOMFOMRZWSDPEKFHALUOJIXYZKZERBWJRNYVEQQSLQQSOJHOJOFMDTWJBBCFCLWVNWIQSIHLZUKSTRUYOCQVPIDWQIEYXUKUWQLMGKPXVBKMVFP");
    msg.flags = 166U;
    const signed char tmp_msg_0[] = {77, -102, -48, -55, 53, -20, -95, -23, 64, -4, 39, 50, 8, 17, -43, -46, -99, 53, 74, 25, 109, 75, -118, 110, 62, 38, 5, -54, 34, 3, -110, -100, 110, -15, 10, 3, -115, -72, 92, 15, -17, -37, -113, 2, -48, 18, -101, 94, -99, 60, -26, -77, -94, 13, -29, 20, -91, 99, 36, 51, -127, -10, 115, -85, 114, -118, 8, -87, -34, 66, -42, -97, -121, -112, -31, -122, 49, 35, -120, 115, 28, 4, -123, 29, 30, 55, -64, -84, 113, 99, 10, -124, 118, -23, 18, 88, -63, -79, -36, -1, 16, 49, -9};
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
    msg.setTimeStamp(0.9024709756210479);
    msg.setSource(56291U);
    msg.setSourceEntity(37U);
    msg.setDestination(1253U);
    msg.setDestinationEntity(246U);
    msg.op = 75U;
    msg.system.assign("RCJIEBNKXZPVLSPAMYIERORBSUPGIWCLAKZNQBZJCGWVUXRFLDBFYVFNMMN");
    msg.range = 0.21400332514721143;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 6U;
    tmp_msg_0.op = 175U;
    tmp_msg_0.plan_id.assign("ANMULKYAWIMZGQIFGTXGBTBCJOCQTEIAVZVLZTEIFFOOLHVNNGJNLXXEXHHYVODYBRCFRPV");
    tmp_msg_0.params.assign("EVTLGRYWMWJKYQUVQIEJBRHMOAGMOQBJBSXYVHKFSBGLPJFNRPIUJTHFBEDIIOTQLJPBRCKNLKFCEBPXKCMSIVRIKNRFCO");
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
    msg.setTimeStamp(0.4646182410999542);
    msg.setSource(19858U);
    msg.setSourceEntity(90U);
    msg.setDestination(49312U);
    msg.setDestinationEntity(157U);
    msg.op = 135U;
    msg.system.assign("EBASUNGKYKVWXJVLOOLOROGBKHYCETMHQAMWNXBVACTJTDONCKYNJBHWQIXGVIJRLQHTCBFKVAZADSXVNVLMDIDPAWXFFOZRSHHPYOJKFBXGFCDTDLECQBGAMFSOQUSPOEUKPUWMYLFRIFZHYNVDGJS");
    msg.range = 0.4350219511528305;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("NXVUGSZAKTSLPBPTWBNQIZVZZSWNBLBSLWBGECETLKXDRU");
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
    msg.setTimeStamp(0.18781917207438625);
    msg.setSource(51212U);
    msg.setSourceEntity(56U);
    msg.setDestination(18765U);
    msg.setDestinationEntity(186U);
    msg.op = 202U;
    msg.system.assign("QBVDPDSRLCXFIKUBHLCBIUFTXRTFFQJTESIDODUYRUOPQAMAUPYQBEHCSLFCHGWWGKOLWVXHVSRIMJXSHVGOCEJOSCABKFKEUKMXEZZPIMXTAYFQVMCZOAZWDISRKFOJANZSYTLPDYMJGUREGJQFMJPHOLQKKGFIVRIAGDIEZGXNGRWMHYZZZUORANLJKLWQCMWXBHINNPPHHKMJBULDNBWUQXTSYYVC");
    msg.range = 0.05318272756517073;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.05854240187620885;
    tmp_msg_0.lon = 0.9256630215789943;
    tmp_msg_0.z = 0.3186122581357286;
    tmp_msg_0.z_units = 175U;
    tmp_msg_0.speed = 0.9856792596276176;
    tmp_msg_0.speed_units = 73U;
    tmp_msg_0.takeoff_pitch = 0.9834140337270648;
    tmp_msg_0.custom.assign("UCYWJJZFTJBBHQIDCMENCIKTTDOTCSUOUXCGJQZBCTFAZWLQEYOZZZKDXPXSRVQNJLEXNRYHPJPIRAD");
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
    msg.setTimeStamp(0.8865588417245892);
    msg.setSource(615U);
    msg.setSourceEntity(13U);
    msg.setDestination(44708U);
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
    msg.setTimeStamp(0.8150381442018197);
    msg.setSource(37421U);
    msg.setSourceEntity(79U);
    msg.setDestination(49186U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.6198052525071123);
    msg.setSource(14332U);
    msg.setSourceEntity(222U);
    msg.setDestination(18983U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.9187482379075861);
    msg.setSource(2343U);
    msg.setSourceEntity(68U);
    msg.setDestination(22974U);
    msg.setDestinationEntity(41U);
    msg.list.assign("UCFWSSMYCOHYUNVHWHEIDMEAAVQEKTSSB");

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
    msg.setTimeStamp(0.5888262501274512);
    msg.setSource(21681U);
    msg.setSourceEntity(62U);
    msg.setDestination(8219U);
    msg.setDestinationEntity(82U);
    msg.list.assign("OQOJLKFZVMPLLKKSLANDBUDZZANESARIQCCZHXFLXOJSYVGGFDPHXYNCCVBKNSFOFXVAOOGHUKATMDZFIBSEAMWAYYNPFGIXNUTOPKKW");

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
    msg.setTimeStamp(0.9776266132215667);
    msg.setSource(21233U);
    msg.setSourceEntity(174U);
    msg.setDestination(49453U);
    msg.setDestinationEntity(10U);
    msg.list.assign("BGSDVJHZJOVBGSQZRZMSUHTLFGTJD");

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
    msg.setTimeStamp(0.3129354832017033);
    msg.setSource(42718U);
    msg.setSourceEntity(252U);
    msg.setDestination(30559U);
    msg.setDestinationEntity(136U);
    msg.peer.assign("JSTXKNDGHSNGYFMPKKSDTEHSSMPJVGBZNWAPIJMQXOPZRTXTQVRVXZKGMMRBBHJUIHAULUVHCFHBWITZILEPZCDRVYBRPSLHYIBXBGEWLIVRGDOIEYFVWWALEGZO");
    msg.rssi = 0.3751727553795058;
    msg.integrity = 57151U;

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
    msg.setTimeStamp(0.5672979852067533);
    msg.setSource(16220U);
    msg.setSourceEntity(193U);
    msg.setDestination(49061U);
    msg.setDestinationEntity(8U);
    msg.peer.assign("CGPEMRGIYUAFNAHPMTKQXIJSCLXMFKQHMEWLLTQSOEKRRAKBWDVOLVEZCPDZVBKGCWXAYMOFWKDTVUKQPBURVZOEPASIDNOXRZYRXWEUEAINVFFTJBLGIEYNSGRQEVRLTHDSFOIOHYZNPNOMADNQICIJBWSGLJYFGDBDJSDXFXJP");
    msg.rssi = 0.09506267665573176;
    msg.integrity = 14579U;

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
    msg.setTimeStamp(0.24639034572628615);
    msg.setSource(36983U);
    msg.setSourceEntity(101U);
    msg.setDestination(20165U);
    msg.setDestinationEntity(2U);
    msg.peer.assign("TMJZRPGCGAJXWEKFJIPTMMQHLPPPCQJUTPNUUSKIMOIORUABFVAXPDDZTHNBDYRXUGTDNIDKQGYEOLMBAEUWVDYOBJERZQFGOHZIQAIVDCXNENFPHBOKDCFNLZSYWHHSCVLTJXACPOWSOWFJYEADWUZNCISCFTPLZVGBEVMLTMSSRX");
    msg.rssi = 0.7886887863987229;
    msg.integrity = 63777U;

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
    msg.setTimeStamp(0.2549635525172823);
    msg.setSource(20638U);
    msg.setSourceEntity(93U);
    msg.setDestination(26137U);
    msg.setDestinationEntity(110U);
    msg.req_id = 5463U;
    msg.destination.assign("VTOHMWKTQNHRPQJANUPYIYOMEVDZSBTNFVVCFDTWIAMCHPEOMAKTKGRPXUOCUYXFZUKNFZLG");
    msg.timeout = 0.5852464520647819;
    msg.range = 0.025571307440955815;
    msg.type = 245U;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("WCYUNVGWDLGAIXTOCLTXTBXVMVPIDBCBKJROHUJULAHNCQYYOVMFAWWFYSOUYKRBBSYEYILGPXGOJEJPKHTSXTKMWBSPDZQSAEZRTEAFDLEUMKHBDEVOTQOEGNPIJZPFSVNGZCNLQMBRGRWCQIWLTDDCPFSMIEP");
    tmp_msg_0.predicate.assign("JLIZBMSBKWDIKTXRFCPO");
    tmp_msg_0.attributes.assign("HZAJXRJKZQXZAIITLOKLJOQAVQUPZYCBDEBGWSQJIIYPWFPMPPMMELGYCUXNT");
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
    msg.setTimeStamp(0.9462305147870137);
    msg.setSource(1315U);
    msg.setSourceEntity(28U);
    msg.setDestination(54808U);
    msg.setDestinationEntity(46U);
    msg.req_id = 8986U;
    msg.destination.assign("TJNMFXUDAQUCIQAJKSZVFARBPGEPNCJVJVRWOZNTRBEUHUUQMVOJCFLOEPESHWKOFAECECIVCBVZKMAPZTHRCCCKPADDXDFHKGYTWGOUIOIKJWXLXYHDMFRPNYSVYJRTGQHFILMUZLAWUAIFDHHRTZEQEXNYKFYNHIWVTOHGZEBPGABQSMXOZULGSNQLDSRBMJTIAZDRONBIMBNQJQUTOFDSBTSPYKVQGPYXJBMLZEDLXKLKGVSXYWGCXSWL");
    msg.timeout = 0.9964705748626906;
    msg.range = 0.293412735536289;
    msg.type = 27U;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 150U;
    tmp_msg_0.max_depth = 0.5648913414129166;
    tmp_msg_0.min_altitude = 0.5649690946979922;
    tmp_msg_0.max_altitude = 0.21457495948300198;
    tmp_msg_0.min_speed = 0.6117894315139955;
    tmp_msg_0.max_speed = 0.6704652271566282;
    tmp_msg_0.max_vrate = 0.6982791266834342;
    tmp_msg_0.lat = 0.7528463549347699;
    tmp_msg_0.lon = 0.7627291998208808;
    tmp_msg_0.orientation = 0.13045579503008753;
    tmp_msg_0.width = 0.4361874015980223;
    tmp_msg_0.length = 0.7234308992046681;
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
    msg.setTimeStamp(0.021842670255895258);
    msg.setSource(22174U);
    msg.setSourceEntity(122U);
    msg.setDestination(38063U);
    msg.setDestinationEntity(166U);
    msg.req_id = 53260U;
    msg.destination.assign("OBKPODCORDPUQSLHBBQIFBAEHEUKJRLAMNRLWJTFDXFLHNAGT");
    msg.timeout = 0.7967976821556132;
    msg.range = 0.13992927840366853;
    msg.type = 154U;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 88U;
    tmp_msg_0.speed_min = 0.1564544843873148;
    tmp_msg_0.speed_max = 0.4050909635957044;
    tmp_msg_0.long_accel = 0.9754817400221105;
    tmp_msg_0.alt_max_msl = 0.6073890882202637;
    tmp_msg_0.dive_fraction_max = 0.6174167143175423;
    tmp_msg_0.climb_fraction_max = 0.5543119670863632;
    tmp_msg_0.bank_max = 0.11348795252573496;
    tmp_msg_0.p_max = 0.7504472516732168;
    tmp_msg_0.pitch_min = 0.5538045943428218;
    tmp_msg_0.pitch_max = 0.499134925383642;
    tmp_msg_0.q_max = 0.6960345107974605;
    tmp_msg_0.g_min = 0.9567931150895311;
    tmp_msg_0.g_max = 0.08221779667772766;
    tmp_msg_0.g_lat_max = 0.23558244638923176;
    tmp_msg_0.rpm_min = 0.9971847487382158;
    tmp_msg_0.rpm_max = 0.40696714010254265;
    tmp_msg_0.rpm_rate_max = 0.1898116263644728;
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
    msg.setTimeStamp(0.4810918359910853);
    msg.setSource(12983U);
    msg.setSourceEntity(189U);
    msg.setDestination(54993U);
    msg.setDestinationEntity(17U);
    msg.req_id = 9143U;
    msg.type = 42U;
    msg.status = 248U;
    msg.info.assign("JQKJGISSGNVKSIHYTZLBXFEHAGVUAGMLDDFUXGBQBRXTQXYIJFJPKBYEFAQMOMZARITRRDZKONLTUHWWSXGWNKLTIUXGPFWHYIYOMXDURLZOTSQ");
    msg.range = 0.006188606782179362;

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
    msg.setTimeStamp(0.7371077565206073);
    msg.setSource(30729U);
    msg.setSourceEntity(6U);
    msg.setDestination(45838U);
    msg.setDestinationEntity(214U);
    msg.req_id = 26363U;
    msg.type = 237U;
    msg.status = 228U;
    msg.info.assign("NXSWKWVFMFDWMUYI");
    msg.range = 0.9901523652206635;

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
    msg.setTimeStamp(0.26350503296875827);
    msg.setSource(63777U);
    msg.setSourceEntity(22U);
    msg.setDestination(17941U);
    msg.setDestinationEntity(128U);
    msg.req_id = 25836U;
    msg.type = 179U;
    msg.status = 57U;
    msg.info.assign("LCSUAZUEZDUFDRQMRJIZMQFFCKIVMXCZMPSWLQNMYKLSRYQGULRBWVYUKRNPVZKZAITYTLJPQTHCRPHONYQEKOGJYKBJWXMIQEWHCPIRLPBCJYIWAEIYOWNFSGTUQSOWGYADXWAZ");
    msg.range = 0.2101176760692629;

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
    msg.setTimeStamp(0.20412621600801706);
    msg.setSource(50965U);
    msg.setSourceEntity(54U);
    msg.setDestination(64124U);
    msg.setDestinationEntity(116U);
    msg.system.assign("FWOPZBKHUXEDYLHTHCDJWFVXLITCOZMSNZXVEZSEREIZLIPXJDEYMLHPUUAISJTAMWBPJAQ");
    msg.op = 188U;

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
    msg.setTimeStamp(0.8802254114683365);
    msg.setSource(33997U);
    msg.setSourceEntity(15U);
    msg.setDestination(22625U);
    msg.setDestinationEntity(188U);
    msg.system.assign("EYVVWLBELHWAKABLZQIVIKUAHAQVQRBTAZWPNRMMRLSQOYZNSLXQOYUCPCPEMTJFKOXBZSTPXWQXPHCHMKPDJVSNUHCLDJTWESTHUITZJTRUXGUJCOGDKIDFIEMJGEUIXAWFKRRDCQBINMLVOKAGUYBMEFKLYEXFXNPAHTPCRBYZJSFNGBTNOQDEMRLBGIZXOSYOEPJYGUROYFWHZKVIFOFABQWSJDVMT");
    msg.op = 108U;

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
    msg.setTimeStamp(0.37174853895803295);
    msg.setSource(55876U);
    msg.setSourceEntity(86U);
    msg.setDestination(20642U);
    msg.setDestinationEntity(241U);
    msg.system.assign("LWJCGOLQHCQLBDTUDRHWEBVQRVEOIPRFVQJUBUVINECADFXMXVICZNWPQMDIIWNNHCWOGCSUGMJLUTPJFABHFWYEWNBVBOOYOROIFSLCSGAKJAEZZYTDIPAREKRSNJYZKXKDRYTYXLKGRUUCBPXTZQZFUZMDPLJ");
    msg.op = 21U;

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
    msg.setTimeStamp(0.8637712063645842);
    msg.setSource(45588U);
    msg.setSourceEntity(71U);
    msg.setDestination(54189U);
    msg.setDestinationEntity(152U);
    msg.value = -11535;

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
    msg.setTimeStamp(0.841588055916338);
    msg.setSource(48371U);
    msg.setSourceEntity(229U);
    msg.setDestination(20153U);
    msg.setDestinationEntity(31U);
    msg.value = 6441;

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
    msg.setTimeStamp(0.8535207669355883);
    msg.setSource(7329U);
    msg.setSourceEntity(213U);
    msg.setDestination(34531U);
    msg.setDestinationEntity(225U);
    msg.value = 16516;

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
    msg.setTimeStamp(0.6135402590589948);
    msg.setSource(57812U);
    msg.setSourceEntity(14U);
    msg.setDestination(48985U);
    msg.setDestinationEntity(175U);
    msg.value = 0.5108416516303299;

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
    msg.setTimeStamp(0.19533985894658468);
    msg.setSource(30955U);
    msg.setSourceEntity(167U);
    msg.setDestination(26771U);
    msg.setDestinationEntity(213U);
    msg.value = 0.9399748381498516;

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
    msg.setTimeStamp(0.6717748378359043);
    msg.setSource(44715U);
    msg.setSourceEntity(176U);
    msg.setDestination(4517U);
    msg.setDestinationEntity(48U);
    msg.value = 0.2608885255678005;

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
    msg.setTimeStamp(0.12943506233392632);
    msg.setSource(16615U);
    msg.setSourceEntity(4U);
    msg.setDestination(37603U);
    msg.setDestinationEntity(6U);
    msg.value = 0.8241604703327756;

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
    msg.setTimeStamp(0.13638408353206566);
    msg.setSource(35781U);
    msg.setSourceEntity(233U);
    msg.setDestination(50698U);
    msg.setDestinationEntity(10U);
    msg.value = 0.678666287542258;

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
    msg.setTimeStamp(0.75787798370868);
    msg.setSource(2849U);
    msg.setSourceEntity(53U);
    msg.setDestination(30346U);
    msg.setDestinationEntity(159U);
    msg.value = 0.5155482157164778;

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
    msg.setTimeStamp(0.7624240125954865);
    msg.setSource(31721U);
    msg.setSourceEntity(205U);
    msg.setDestination(40571U);
    msg.setDestinationEntity(117U);
    msg.validity = 27901U;
    msg.type = 81U;
    msg.utc_year = 25907U;
    msg.utc_month = 48U;
    msg.utc_day = 215U;
    msg.utc_time = 0.4517364031966159;
    msg.lat = 0.23602100611711185;
    msg.lon = 0.38267673487871323;
    msg.height = 0.2971385893365365;
    msg.satellites = 250U;
    msg.cog = 0.12883906577385718;
    msg.sog = 0.6429577835472499;
    msg.hdop = 0.2818598792179835;
    msg.vdop = 0.7266777143689075;
    msg.hacc = 0.2031884955024963;
    msg.vacc = 0.6961003332027561;

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
    msg.setTimeStamp(0.4844940361005855);
    msg.setSource(36825U);
    msg.setSourceEntity(46U);
    msg.setDestination(51194U);
    msg.setDestinationEntity(98U);
    msg.validity = 27812U;
    msg.type = 106U;
    msg.utc_year = 13050U;
    msg.utc_month = 171U;
    msg.utc_day = 214U;
    msg.utc_time = 0.010179066660826908;
    msg.lat = 0.6954167973524801;
    msg.lon = 0.28915391213305086;
    msg.height = 0.016762262892682567;
    msg.satellites = 126U;
    msg.cog = 0.5501505436021624;
    msg.sog = 0.9114645508661416;
    msg.hdop = 0.8192365961242224;
    msg.vdop = 0.7046273760334145;
    msg.hacc = 0.6349628823655123;
    msg.vacc = 0.7987819752439133;

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
    msg.setTimeStamp(0.5118429371392781);
    msg.setSource(42210U);
    msg.setSourceEntity(95U);
    msg.setDestination(43369U);
    msg.setDestinationEntity(30U);
    msg.validity = 37110U;
    msg.type = 166U;
    msg.utc_year = 36963U;
    msg.utc_month = 66U;
    msg.utc_day = 21U;
    msg.utc_time = 0.24081085385944856;
    msg.lat = 0.33831919600279636;
    msg.lon = 0.6170484009658088;
    msg.height = 0.12520467050590323;
    msg.satellites = 232U;
    msg.cog = 0.47893632554409793;
    msg.sog = 0.9607487273561718;
    msg.hdop = 0.017403738628711363;
    msg.vdop = 0.9587804493709499;
    msg.hacc = 0.44480426473242685;
    msg.vacc = 0.8648143428063652;

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
    msg.setTimeStamp(0.14492261043549692);
    msg.setSource(42629U);
    msg.setSourceEntity(167U);
    msg.setDestination(64511U);
    msg.setDestinationEntity(72U);
    msg.time = 0.15558477957301664;
    msg.phi = 0.16132220480718862;
    msg.theta = 0.7566075906771454;
    msg.psi = 0.603539133114359;
    msg.psi_magnetic = 0.30591960996099954;

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
    msg.setTimeStamp(0.49507069260342296);
    msg.setSource(35226U);
    msg.setSourceEntity(252U);
    msg.setDestination(19897U);
    msg.setDestinationEntity(128U);
    msg.time = 0.5411615606579278;
    msg.phi = 0.1155922405532146;
    msg.theta = 0.5665607795847966;
    msg.psi = 0.5585769131045913;
    msg.psi_magnetic = 0.97399721168297;

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
    msg.setTimeStamp(0.9178378904010468);
    msg.setSource(30883U);
    msg.setSourceEntity(0U);
    msg.setDestination(25527U);
    msg.setDestinationEntity(182U);
    msg.time = 0.36437727018020916;
    msg.phi = 0.8643191279681699;
    msg.theta = 0.34811048395094213;
    msg.psi = 0.5804498017997743;
    msg.psi_magnetic = 0.43729599085806503;

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
    msg.setTimeStamp(0.3433199506983473);
    msg.setSource(13372U);
    msg.setSourceEntity(229U);
    msg.setDestination(54295U);
    msg.setDestinationEntity(9U);
    msg.time = 0.8014785946292304;
    msg.x = 0.7982634913124694;
    msg.y = 0.4642606664558343;
    msg.z = 0.8649906348888542;
    msg.timestep = 0.9392892211526318;

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
    msg.setTimeStamp(0.20118803903658178);
    msg.setSource(294U);
    msg.setSourceEntity(140U);
    msg.setDestination(47697U);
    msg.setDestinationEntity(88U);
    msg.time = 0.7836672283297719;
    msg.x = 0.0990783148381994;
    msg.y = 0.19127481640723776;
    msg.z = 0.07949515506976834;
    msg.timestep = 0.025708463396534764;

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
    msg.setTimeStamp(0.07947884099163516);
    msg.setSource(19960U);
    msg.setSourceEntity(10U);
    msg.setDestination(2653U);
    msg.setDestinationEntity(230U);
    msg.time = 0.8582914818935058;
    msg.x = 0.8823982136116973;
    msg.y = 0.816809220686279;
    msg.z = 0.8566579047838757;
    msg.timestep = 0.6865495611084684;

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
    msg.setTimeStamp(0.02588848671122279);
    msg.setSource(22770U);
    msg.setSourceEntity(194U);
    msg.setDestination(27352U);
    msg.setDestinationEntity(192U);
    msg.time = 0.8131445349884948;
    msg.x = 0.39903488985130187;
    msg.y = 0.5005967733047211;
    msg.z = 0.23073832167493258;

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
    msg.setTimeStamp(0.06757069422101925);
    msg.setSource(9175U);
    msg.setSourceEntity(80U);
    msg.setDestination(25803U);
    msg.setDestinationEntity(79U);
    msg.time = 0.538283897792423;
    msg.x = 0.23984329240247393;
    msg.y = 0.47575464917640065;
    msg.z = 0.5690370323956689;

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
    msg.setTimeStamp(0.060775241448823736);
    msg.setSource(60748U);
    msg.setSourceEntity(6U);
    msg.setDestination(56210U);
    msg.setDestinationEntity(75U);
    msg.time = 0.6890686660450217;
    msg.x = 0.4000528203611833;
    msg.y = 0.5345120745369543;
    msg.z = 0.33351956988986853;

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
    msg.setTimeStamp(0.8553005693384981);
    msg.setSource(57533U);
    msg.setSourceEntity(24U);
    msg.setDestination(10759U);
    msg.setDestinationEntity(204U);
    msg.time = 0.08961233684619696;
    msg.x = 0.45196704356605333;
    msg.y = 0.7195580365352293;
    msg.z = 0.4087377499597393;

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
    msg.setTimeStamp(0.4532977010294551);
    msg.setSource(42605U);
    msg.setSourceEntity(111U);
    msg.setDestination(23197U);
    msg.setDestinationEntity(247U);
    msg.time = 0.004540782326484805;
    msg.x = 0.8172285761213846;
    msg.y = 0.47332988110677376;
    msg.z = 0.7360376043473967;

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
    msg.setTimeStamp(0.291560030590858);
    msg.setSource(12733U);
    msg.setSourceEntity(123U);
    msg.setDestination(42007U);
    msg.setDestinationEntity(110U);
    msg.time = 0.23133077853940998;
    msg.x = 0.14578212395604484;
    msg.y = 0.4083846033038607;
    msg.z = 0.9253468462780114;

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
    msg.setTimeStamp(0.15869181878323024);
    msg.setSource(1990U);
    msg.setSourceEntity(242U);
    msg.setDestination(48813U);
    msg.setDestinationEntity(144U);
    msg.time = 0.3752068141699554;
    msg.x = 0.6580970115571871;
    msg.y = 0.19950703245663537;
    msg.z = 0.8210185757897891;

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
    msg.setTimeStamp(0.3351129487054634);
    msg.setSource(51016U);
    msg.setSourceEntity(247U);
    msg.setDestination(4382U);
    msg.setDestinationEntity(69U);
    msg.time = 0.8080697404232733;
    msg.x = 0.20123715874802572;
    msg.y = 0.12777278267174885;
    msg.z = 0.24980936937214937;

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
    msg.setTimeStamp(0.5275521664126207);
    msg.setSource(2841U);
    msg.setSourceEntity(243U);
    msg.setDestination(555U);
    msg.setDestinationEntity(20U);
    msg.time = 0.6180651669837759;
    msg.x = 0.8188327091936162;
    msg.y = 0.3680834212441503;
    msg.z = 0.4771195981309444;

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
    msg.setTimeStamp(0.005234648240335038);
    msg.setSource(22942U);
    msg.setSourceEntity(128U);
    msg.setDestination(47336U);
    msg.setDestinationEntity(76U);
    msg.validity = 67U;
    msg.x = 0.3378665071539442;
    msg.y = 0.81154820576458;
    msg.z = 0.7788615476296867;

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
    msg.setTimeStamp(0.6058100302504769);
    msg.setSource(6846U);
    msg.setSourceEntity(133U);
    msg.setDestination(5079U);
    msg.setDestinationEntity(1U);
    msg.validity = 239U;
    msg.x = 0.3308039581137694;
    msg.y = 0.10445484294004614;
    msg.z = 0.38123464780702854;

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
    msg.setTimeStamp(0.889380509260321);
    msg.setSource(2200U);
    msg.setSourceEntity(16U);
    msg.setDestination(31523U);
    msg.setDestinationEntity(181U);
    msg.validity = 175U;
    msg.x = 0.7518380773464205;
    msg.y = 0.8964750463381044;
    msg.z = 0.19681733291610515;

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
    msg.setTimeStamp(0.16398018125350422);
    msg.setSource(50552U);
    msg.setSourceEntity(234U);
    msg.setDestination(226U);
    msg.setDestinationEntity(140U);
    msg.validity = 240U;
    msg.x = 0.38173010430585996;
    msg.y = 0.6050282312417535;
    msg.z = 0.4280647629522417;

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
    msg.setTimeStamp(0.4813088487188295);
    msg.setSource(27710U);
    msg.setSourceEntity(194U);
    msg.setDestination(60687U);
    msg.setDestinationEntity(232U);
    msg.validity = 231U;
    msg.x = 0.39704791232658543;
    msg.y = 0.3053851376985536;
    msg.z = 0.9857559926729518;

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
    msg.setTimeStamp(0.04508145667881969);
    msg.setSource(4364U);
    msg.setSourceEntity(46U);
    msg.setDestination(38753U);
    msg.setDestinationEntity(216U);
    msg.validity = 233U;
    msg.x = 0.6870518290301992;
    msg.y = 0.2235957292128412;
    msg.z = 0.776248477875758;

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
    msg.setTimeStamp(0.6281684387470555);
    msg.setSource(6442U);
    msg.setSourceEntity(98U);
    msg.setDestination(44328U);
    msg.setDestinationEntity(231U);
    msg.time = 0.42173763012228804;
    msg.x = 0.9325151582224861;
    msg.y = 0.09244476723430473;
    msg.z = 0.7321555721934732;

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
    msg.setTimeStamp(0.8617546487377877);
    msg.setSource(50130U);
    msg.setSourceEntity(232U);
    msg.setDestination(15138U);
    msg.setDestinationEntity(35U);
    msg.time = 0.9849609531730283;
    msg.x = 0.004157563233589512;
    msg.y = 0.30939394837027323;
    msg.z = 0.4369884301360216;

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
    msg.setTimeStamp(0.04803831644930279);
    msg.setSource(29044U);
    msg.setSourceEntity(72U);
    msg.setDestination(25083U);
    msg.setDestinationEntity(241U);
    msg.time = 0.28942337487571734;
    msg.x = 0.7610532666760047;
    msg.y = 0.12337746414725592;
    msg.z = 0.6930648498549188;

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
    msg.setTimeStamp(0.8493069112403663);
    msg.setSource(54704U);
    msg.setSourceEntity(63U);
    msg.setDestination(33878U);
    msg.setDestinationEntity(150U);
    msg.validity = 94U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.3077263735432052;
    tmp_msg_0.y = 0.43046726749394504;
    tmp_msg_0.z = 0.8469381592195111;
    tmp_msg_0.phi = 0.025183361934794424;
    tmp_msg_0.theta = 0.632882804772752;
    tmp_msg_0.psi = 0.24350781080576867;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.1598128074056251;
    tmp_msg_1.beam_height = 0.4346640177743548;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.003367601786151586;

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
    msg.setTimeStamp(0.23122484125170784);
    msg.setSource(25525U);
    msg.setSourceEntity(160U);
    msg.setDestination(35952U);
    msg.setDestinationEntity(203U);
    msg.validity = 242U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5523209058864988;
    tmp_msg_0.y = 0.8544143902537743;
    tmp_msg_0.z = 0.14048958026644287;
    tmp_msg_0.phi = 0.463645084486606;
    tmp_msg_0.theta = 0.6825380436694526;
    tmp_msg_0.psi = 0.9395315857314996;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.12529352493558032;
    tmp_msg_1.beam_height = 0.8297656875810929;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.16939974451959927;

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
    msg.setTimeStamp(0.2963145133448064);
    msg.setSource(41393U);
    msg.setSourceEntity(136U);
    msg.setDestination(9335U);
    msg.setDestinationEntity(147U);
    msg.validity = 49U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7969957854125446;
    tmp_msg_0.y = 0.36705082203555195;
    tmp_msg_0.z = 0.1689101068667287;
    tmp_msg_0.phi = 0.973656101462707;
    tmp_msg_0.theta = 0.4695250983812316;
    tmp_msg_0.psi = 0.5079759774827679;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.8485669071462463;
    tmp_msg_1.beam_height = 0.7534595004103388;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.049686386662215365;

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
    msg.setTimeStamp(0.029858446959208806);
    msg.setSource(460U);
    msg.setSourceEntity(151U);
    msg.setDestination(10978U);
    msg.setDestinationEntity(225U);
    msg.value = 0.11840873625132231;

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
    msg.setTimeStamp(0.8656732355842307);
    msg.setSource(55802U);
    msg.setSourceEntity(116U);
    msg.setDestination(25041U);
    msg.setDestinationEntity(74U);
    msg.value = 0.5426577779125641;

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
    msg.setTimeStamp(0.48275555683062765);
    msg.setSource(18887U);
    msg.setSourceEntity(146U);
    msg.setDestination(25089U);
    msg.setDestinationEntity(16U);
    msg.value = 0.9141275422748042;

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
    msg.setTimeStamp(0.8906111516306005);
    msg.setSource(10169U);
    msg.setSourceEntity(53U);
    msg.setDestination(21850U);
    msg.setDestinationEntity(91U);
    msg.value = 0.8018703847503206;

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
    msg.setTimeStamp(0.8279153995139619);
    msg.setSource(16154U);
    msg.setSourceEntity(188U);
    msg.setDestination(59445U);
    msg.setDestinationEntity(9U);
    msg.value = 0.7876916939658308;

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
    msg.setTimeStamp(0.5263089997305764);
    msg.setSource(14243U);
    msg.setSourceEntity(130U);
    msg.setDestination(38723U);
    msg.setDestinationEntity(13U);
    msg.value = 0.734360998428606;

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
    msg.setTimeStamp(0.4719524135523555);
    msg.setSource(22876U);
    msg.setSourceEntity(88U);
    msg.setDestination(37083U);
    msg.setDestinationEntity(77U);
    msg.value = 0.9056609534083605;

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
    msg.setTimeStamp(0.14990510267093704);
    msg.setSource(10721U);
    msg.setSourceEntity(148U);
    msg.setDestination(37246U);
    msg.setDestinationEntity(183U);
    msg.value = 0.8828568037225779;

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
    msg.setTimeStamp(0.47949484468695225);
    msg.setSource(37705U);
    msg.setSourceEntity(138U);
    msg.setDestination(60413U);
    msg.setDestinationEntity(187U);
    msg.value = 0.9421562257872982;

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
    msg.setTimeStamp(0.5532179782199201);
    msg.setSource(26973U);
    msg.setSourceEntity(194U);
    msg.setDestination(58680U);
    msg.setDestinationEntity(233U);
    msg.value = 0.20113348518686447;

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
    msg.setTimeStamp(0.3787947678635255);
    msg.setSource(24241U);
    msg.setSourceEntity(221U);
    msg.setDestination(59334U);
    msg.setDestinationEntity(27U);
    msg.value = 0.3105497796916771;

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
    msg.setTimeStamp(0.3234739342810464);
    msg.setSource(64346U);
    msg.setSourceEntity(76U);
    msg.setDestination(48044U);
    msg.setDestinationEntity(235U);
    msg.value = 0.08997598695763975;

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
    msg.setTimeStamp(0.03584804199651104);
    msg.setSource(22329U);
    msg.setSourceEntity(171U);
    msg.setDestination(36219U);
    msg.setDestinationEntity(190U);
    msg.value = 0.6291126572614059;

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
    msg.setTimeStamp(0.43535429630519573);
    msg.setSource(3340U);
    msg.setSourceEntity(96U);
    msg.setDestination(60723U);
    msg.setDestinationEntity(205U);
    msg.value = 0.7282098636657346;

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
    msg.setTimeStamp(0.853690269427365);
    msg.setSource(49264U);
    msg.setSourceEntity(240U);
    msg.setDestination(59157U);
    msg.setDestinationEntity(96U);
    msg.value = 0.032134024827394914;

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
    msg.setTimeStamp(0.37868250365670764);
    msg.setSource(26113U);
    msg.setSourceEntity(140U);
    msg.setDestination(22536U);
    msg.setDestinationEntity(155U);
    msg.value = 0.28557157268063604;

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
    msg.setTimeStamp(0.25321519589604446);
    msg.setSource(31504U);
    msg.setSourceEntity(174U);
    msg.setDestination(57150U);
    msg.setDestinationEntity(182U);
    msg.value = 0.6820379675005233;

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
    msg.setTimeStamp(0.5443976020978807);
    msg.setSource(46643U);
    msg.setSourceEntity(157U);
    msg.setDestination(14806U);
    msg.setDestinationEntity(110U);
    msg.value = 0.5861492446552007;

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
    msg.setTimeStamp(0.6039744324526771);
    msg.setSource(21142U);
    msg.setSourceEntity(11U);
    msg.setDestination(6140U);
    msg.setDestinationEntity(49U);
    msg.value = 0.75164501148542;

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
    msg.setTimeStamp(0.6097386961977752);
    msg.setSource(44472U);
    msg.setSourceEntity(232U);
    msg.setDestination(52984U);
    msg.setDestinationEntity(86U);
    msg.value = 0.583763672840341;

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
    msg.setTimeStamp(0.6711386359515822);
    msg.setSource(57053U);
    msg.setSourceEntity(109U);
    msg.setDestination(29024U);
    msg.setDestinationEntity(160U);
    msg.value = 0.7724685194868732;

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
    msg.setTimeStamp(0.5200108220705287);
    msg.setSource(61292U);
    msg.setSourceEntity(196U);
    msg.setDestination(53313U);
    msg.setDestinationEntity(35U);
    msg.value = 0.9550038940384533;

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
    msg.setTimeStamp(0.13428070885732357);
    msg.setSource(36895U);
    msg.setSourceEntity(251U);
    msg.setDestination(29649U);
    msg.setDestinationEntity(185U);
    msg.value = 0.6424113607821239;

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
    msg.setTimeStamp(0.3528382023780139);
    msg.setSource(46218U);
    msg.setSourceEntity(200U);
    msg.setDestination(27189U);
    msg.setDestinationEntity(153U);
    msg.value = 0.932246435493897;

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
    msg.setTimeStamp(0.1325606311095866);
    msg.setSource(23499U);
    msg.setSourceEntity(49U);
    msg.setDestination(64862U);
    msg.setDestinationEntity(151U);
    msg.direction = 0.7817237447047826;
    msg.speed = 0.4602468768347001;
    msg.turbulence = 0.9445792954635492;

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
    msg.setTimeStamp(0.17847327635884247);
    msg.setSource(36201U);
    msg.setSourceEntity(217U);
    msg.setDestination(34148U);
    msg.setDestinationEntity(220U);
    msg.direction = 0.6520835682196745;
    msg.speed = 0.8669731224686962;
    msg.turbulence = 0.43768903994976416;

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
    msg.setTimeStamp(0.8960710869939118);
    msg.setSource(31898U);
    msg.setSourceEntity(109U);
    msg.setDestination(22095U);
    msg.setDestinationEntity(214U);
    msg.direction = 0.1697006343736922;
    msg.speed = 0.8692555990598977;
    msg.turbulence = 0.6520329098805976;

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
    msg.setTimeStamp(0.36213536514187405);
    msg.setSource(30606U);
    msg.setSourceEntity(253U);
    msg.setDestination(26635U);
    msg.setDestinationEntity(95U);
    msg.value = 0.014433284494547505;

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
    msg.setTimeStamp(0.5285434758525451);
    msg.setSource(8402U);
    msg.setSourceEntity(249U);
    msg.setDestination(31310U);
    msg.setDestinationEntity(5U);
    msg.value = 0.3612175767628524;

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
    msg.setTimeStamp(0.6236236286838046);
    msg.setSource(5258U);
    msg.setSourceEntity(85U);
    msg.setDestination(13722U);
    msg.setDestinationEntity(44U);
    msg.value = 0.3130546220702667;

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
    msg.setTimeStamp(0.8865200619186118);
    msg.setSource(56879U);
    msg.setSourceEntity(26U);
    msg.setDestination(28625U);
    msg.setDestinationEntity(176U);
    msg.value.assign("RLWGZQANAZBCMQXDLCKHMLMKQDSHFVMTICMCOUUXLTRUSWGXIIFNDYSYHTOKRMGNOHAKDBNIOJAIPNXMBIEBPAKOAGUPWINPUQJHJUWGQVYHBYFWFVRTFQBVSGBRCWYSOZUVGFQDTDEIVYLSKRSJPVFGCVJRJPCGEAKWYHOYEEEUGFZJAIQFOXTXWHDYPKKDWNZZOMXHZMSFE");

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
    msg.setTimeStamp(0.22086217585959977);
    msg.setSource(23702U);
    msg.setSourceEntity(79U);
    msg.setDestination(50037U);
    msg.setDestinationEntity(75U);
    msg.value.assign("AJTQDAPKSYWXOTNTCEMHTKTJWDVXVTCXCLNVZMZKCHNMZEULMTRIGQSDZBBISBSANUKJUACEOAWKGBCGHALYXLYQSRWQRLZQO");

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
    msg.setTimeStamp(0.9746439807744183);
    msg.setSource(33770U);
    msg.setSourceEntity(176U);
    msg.setDestination(58324U);
    msg.setDestinationEntity(51U);
    msg.value.assign("DZUTBAITXCNJKFTAVSLOEXOTQUNANEGMIQHUZXXMZJMQWDBWIRDDVNSZRGBGUMYVRHXPQPNSWGFKJGDOEVTVLHSPXKCMBBQPXWHTGQMPZOYDTMRWICGUYTOBQCAJLNXHSXZAALEIUOVQCZRYJMKGYINUCPFDAHEBKBTERZCASGAYSRINEQEJGVLLNYKUYWUNCEQSVFFRLFPSHJ");

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
    msg.setTimeStamp(0.8517083568648559);
    msg.setSource(41183U);
    msg.setSourceEntity(176U);
    msg.setDestination(45788U);
    msg.setDestinationEntity(148U);
    const signed char tmp_msg_0[] = {68, 62, 25, -78, 122, -19, 81, -2, -118, -51, 106, 14, -125, -52, 101, -124, -100, -71, -50, -69, 120, 99, -89, -111, -26, -45, -2, -69, 96, -24, 20, -77, -102, 88, -123, 90, -33, -59, -112, 72, -15, -36, 110, 31, 80, -66, -16, -110, -21, 7, -96, -2, -119, 31, -94, 118, -57, -127, -6, -98, -100, -28, -16, 113, -8, -104, 19, 14, 19, 78, -107, 113, -107, 116, 79, 74, 117, 126, 99, -27, -6, -45, 98, -4, -19, -107, -3, -80, 115, 120, -85, 56, -81, -50};
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
    msg.setTimeStamp(0.8795407338204247);
    msg.setSource(21139U);
    msg.setSourceEntity(183U);
    msg.setDestination(19209U);
    msg.setDestinationEntity(234U);
    const signed char tmp_msg_0[] = {-11, 20, -122, 44, 71, -76, 110, 2, 58, -62, -16, -81, -119, -90, -76, 92, -20, -24, -6, 85, -101, 79, -84, 99, 97, -112, -123, 90, -14, 44, -91, 40, 104, 31, 6, 25, 5, -62, -91, 33, 34, 99, -59, 56, 17, 60, -119, 52, 99, 109, 77, 91, -7, 77, 106, -22, -10, 73, -99, 57, 9, 40, -62, -3, 118, 20, -59, 91, -117, 126, 97, -10, -114, 118, 84, 92, -34, -107, -5, 99, 10, -109, 48, -116, -17, -83, 61, 44, -20, 60, -91, -48, 13, 122, 38, -16, 88, -103, -48, 5, 106, -37, -75, -42, -95, -108, 2, -104, -77, -107, -108, -122, 58, 55, -114, 53, 31, 16, -74, 33, 60, 91, 25, 62, 101, 53, -84, -76, 25, -37, -29, -11, -90, 99, 107, -85, -127, 97, -126, 107, -89, -104, 60, -120, 26, 45, 34, -84, -106, -55, 90, -56, -54, -39, 59, -92, -14, -18, -118, 96, 116, -22, -57, -9, -43, -91, 125, 96, -111, 67, 6, 118, -121, -81, -10, 52, 98, -92, -68, 44, 79, -1, 57, -121, -12, 115, 87, 36, -91, 33, 119, 26, -91, -68, -70, -29, 70, -44, -68, -78, -2, 83, -36, 53, -99, 87, -54, 25, 82, -96, 87, -63, 42, 16, -81, 67, 101, -101, 80, -24, 122};
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
    msg.setTimeStamp(0.11839277934386416);
    msg.setSource(6733U);
    msg.setSourceEntity(248U);
    msg.setDestination(34673U);
    msg.setDestinationEntity(97U);
    const signed char tmp_msg_0[] = {-37, 1, 17, -47, 100, 113, 24, 79, 64, -99};
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
    msg.setTimeStamp(0.5560814249857985);
    msg.setSource(20726U);
    msg.setSourceEntity(7U);
    msg.setDestination(13332U);
    msg.setDestinationEntity(65U);
    msg.value = 0.5022068254355385;

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
    msg.setTimeStamp(0.14286749732010962);
    msg.setSource(32904U);
    msg.setSourceEntity(29U);
    msg.setDestination(31377U);
    msg.setDestinationEntity(17U);
    msg.value = 0.6076403121846625;

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
    msg.setTimeStamp(0.5830033613982003);
    msg.setSource(20585U);
    msg.setSourceEntity(123U);
    msg.setDestination(50681U);
    msg.setDestinationEntity(56U);
    msg.value = 0.38663855790338986;

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
    msg.setTimeStamp(0.04739430414463097);
    msg.setSource(55531U);
    msg.setSourceEntity(207U);
    msg.setDestination(45748U);
    msg.setDestinationEntity(109U);
    msg.type = 117U;
    msg.frequency = 728613494U;
    msg.min_range = 51181U;
    msg.max_range = 48186U;
    msg.bits_per_point = 140U;
    msg.scale_factor = 0.9047709506478969;
    const signed char tmp_msg_0[] = {-78, -65, 67, 66, -123, 61, -122, -122, 72, 31, -66, -56, -115, -69, -66, 18, 87, 122, 33, 4, 24, -13, -61, 116, 74, 60, 4, -65, -1, 65, -101, -106, 7, 126, -93, -62, 35, -106, -79, -122, 23, 76, 69, 116, 107, -120, 34, 118, -86, 74, 60, 59, 11, 67, 123, 13, 18, 110, 40, -102, 54, 67, 9, -61, 95, -99, 47, -126, -111, 110, -33, 86, 16, 41, 18, 78, 53, 117, 56, 100, -120, -115, 17, 117, 3, 46, -69, 74, -74, 122, -115, -80, -68, 73, 83, -126, 47, -45, -17, 13, -7, -124, 119, -95, 106, -25, 110, 112, -117, -17, 105, -126, -60, 108, -12, -84, 1, 109, -121, -52, 98, -65, -63, -121, 43, 47, -45, -5, -89, 46, 76, -43, 50, 56, 120, -2, 9, -77, -99, 0, 16, 13, 75, -42, 42, 68, -86, 58, -65, -84, 17, 50, 3, 61, 8, 30, 86, 98, -60, -39, -97, 44, 73, -22, 52, -123, 75, -81, 91, 91, -100, -110, 107, 119, -92, -3, 80, -11, -23, 14, -53, 100, 55, 80, -63, 83, -6, 53, 105, 111, 124, 119, 16, 116, -44, -6, -15, 123, -93, 1, 42, -111, -85, -121, -40, -87, 112, 21, 109, -12, 51, -51, 93, -81, -7, 70, -103, -120, 93, 123, -62, -49, 5, -18, 112, -47, 34, 108, 16, 35, 75, -23, 0, 36, -119, -49, 49, -71, -31, -55, -24, -112};
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
    msg.setTimeStamp(0.7097953597685913);
    msg.setSource(8424U);
    msg.setSourceEntity(76U);
    msg.setDestination(30183U);
    msg.setDestinationEntity(125U);
    msg.type = 134U;
    msg.frequency = 1839667627U;
    msg.min_range = 12609U;
    msg.max_range = 24768U;
    msg.bits_per_point = 82U;
    msg.scale_factor = 0.401111027376845;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8124552094798716;
    tmp_msg_0.beam_height = 0.44882574380943907;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-44, 113, 99, -112, 30, 46, -56, -124, -95, -99, -87, 41, 102, -95, 115, -117, 49, -100, -8, -68, -52, 56, 99, 40, 27, -20, 55, 88, 59, 27, -66, -11, -91, 59, -122, 115, -127, -50, -105, -94, -7, -55, -27, 78, -90, 72, 25, 41, 29, 34, 7, -48, -1, -33, 29, 62, -23, -5, -28, 114, -95, -40, 33, 116, 46, 57, 44, -119, -98, 64, -83, -63, 101, 81, 54, -95, -83, -95, -111, -72, 52, 97, 61, -85, 84, 89, 60, 48, 61, -109, 121, 22, 43, 94, 26, -25, 77, 51, -93, 11, 38, 58, -87, -6, 15, -121, 117, -35, 29, 36, -9, -56, 119, -54, -110, -77, 21, -25, -127, 86, -64, 55, 65, 55, 8, 79, 62, -45, -28, -43, -10, 67, 66, -4, 109, 17, -48, -14, -107, -109, -89, -4, -4, 21, 107, 84, 49, -126, -7, -123, 52, 32, 81, -109, 126, -18, 103, -84, 39, 27, 90, -63, -103, 64, -113, 33, 17, -75, -123, -109, -124, 49, -58, 72, -86, 124, -114, 25, 67, 70, 56, 47, 66, 94, -88, -29, 56, 62, 109, -97, 80, 40, -79, -12, 101, 20, 15, 90, -87, -62, 59, -123, 58, -22, -11, 100, 70, -32, 28, 30, 80, -65, -112, -111, -85, 97, -11, -87, -48, -75, -69, -112, -75, -101, 37, -99};
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
    msg.setTimeStamp(0.5278382146685836);
    msg.setSource(37791U);
    msg.setSourceEntity(162U);
    msg.setDestination(44042U);
    msg.setDestinationEntity(207U);
    msg.type = 87U;
    msg.frequency = 2348380272U;
    msg.min_range = 38412U;
    msg.max_range = 26806U;
    msg.bits_per_point = 97U;
    msg.scale_factor = 0.09586009541322993;
    const signed char tmp_msg_0[] = {9, -94, -10, -101, -120, -30, -105, -1, 116, 114, 32, -35, 113, 83, -5, -75, 23, -10, 27, -18, 24, 77, 61, -79, -49, 106, -96, 114, 62, 61, 50, -111, -14, -7, -46, 53, -126, -13, -122, 81, -7, 15, 2, 53, 117, 107, -74, -101, 78, 60, -80, -76, 16, -120, 7, 15, -58, -110, 50, 95, 32, 104, 41, -106, -81, -75, 23, 34, 46, -5, 8, -92, -4, -16, -122, -112, -89, -17, -12, -16, -44, -102, -25, 23, 102, 44, -77, 41, 108, -50, 113, -97, -35, -82, -65, -121, 22, 89, -43, 70, -16, -127, 8, 26, -73, 20, -86, 96, 115, -50, -22, -101, 99, -88, -93, 17, 67, -52, -52, -40, -85, -45, -35, 106, -78, 101, 77, 64, -102, 37, 70, 51, 59, 33, -3, -20, 105, 27, -97, -31, -80, -21, 85, -18, -28, 90, -52, 123, 18, 114, 98, 82, -19, 86, -95, 48, -30, 66, 93, 40, 6};
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
    msg.setTimeStamp(0.741884805234948);
    msg.setSource(31440U);
    msg.setSourceEntity(246U);
    msg.setDestination(5583U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.44439083580140337);
    msg.setSource(19085U);
    msg.setSourceEntity(160U);
    msg.setDestination(50009U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.026755976267989534);
    msg.setSource(29259U);
    msg.setSourceEntity(191U);
    msg.setDestination(31199U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.7226758076516918);
    msg.setSource(27044U);
    msg.setSourceEntity(179U);
    msg.setDestination(49583U);
    msg.setDestinationEntity(144U);
    msg.op = 208U;

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
    msg.setTimeStamp(0.5351407836309816);
    msg.setSource(49469U);
    msg.setSourceEntity(69U);
    msg.setDestination(49529U);
    msg.setDestinationEntity(148U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.05648852103616209);
    msg.setSource(35854U);
    msg.setSourceEntity(228U);
    msg.setDestination(55718U);
    msg.setDestinationEntity(196U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.6539159851985925);
    msg.setSource(23398U);
    msg.setSourceEntity(96U);
    msg.setDestination(33430U);
    msg.setDestinationEntity(171U);
    msg.value = 0.9613472921870322;
    msg.confidence = 0.30351696299373776;
    msg.opmodes.assign("DOLYWXOJGLASFRUXELBMKUCCGADLOYFHOHWBSHLAXZHELKRDVWTDZQCGISSZZUJGBWYWBLDRSXJTMNXIAVTAPFJZLHKRRMCFERPPQHTCFGESTHAQFQYEKUCRTVXOJWMOUWBHVLRANPOTSNHQCGXADTICIUGTPJYBJMGKVZBSFDMZVJEQGWPPJCGDUQXXEBUVUSV");

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
    msg.setTimeStamp(0.7155691489987385);
    msg.setSource(14622U);
    msg.setSourceEntity(134U);
    msg.setDestination(33395U);
    msg.setDestinationEntity(167U);
    msg.value = 0.6252117925125116;
    msg.confidence = 0.9802266757484771;
    msg.opmodes.assign("ZAFWCZZSNLKYAZZDTVMIBUSUNHWAFPSVOFMPJKQNOBELBQLCDLNUNEOXHEQCRLBJWUCLZTGOIQTEQGVPMPQFFJVKGAIVXQTDGINRJXVJAZPYWHBQHSDROPATSDTCRTIOLBKXSBHBVEUIZEYLWXFUEAJWXKBYFWDJHDPNGHLRMLOQWIPJYXMACXCVRRTYORCICZWDVOGXMFJKNGYVONSKGNUUHRYXHIGHZRAEEASUKMWQCTPMUYSKMFPY");

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
    msg.setTimeStamp(0.08088984137428157);
    msg.setSource(57853U);
    msg.setSourceEntity(137U);
    msg.setDestination(7343U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5079413994905466;
    msg.confidence = 0.3678060243895086;
    msg.opmodes.assign("KRWWMXJAJLDMMOPJROJPCOHCGMPURYTAGCECRISYGVEHWHKHCNFFBOQEWREMAKXYLUVSEFTZVUINUAATHDNDPKGZRLAINYFPZHWVJOJFSHCXOWDLRWXTFJDPULEGXLSVVTNBPPICQOYDVKDFEQDVCQDWXNYANBKYUTJMJUZSTQRFOYATEBZEHPHIICCUSNUZVWMGDQXBASSIOXGIBQEYJZLXYM");

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
    msg.setTimeStamp(0.4813985017342617);
    msg.setSource(43490U);
    msg.setSourceEntity(120U);
    msg.setDestination(40640U);
    msg.setDestinationEntity(179U);
    msg.itow = 4004990961U;
    msg.lat = 0.20663309458742807;
    msg.lon = 0.8883900303086206;
    msg.height_ell = 0.3354655863204494;
    msg.height_sea = 0.673401780781371;
    msg.hacc = 0.7496437519890048;
    msg.vacc = 0.816840153685116;
    msg.vel_n = 0.15015484260204381;
    msg.vel_e = 0.8723635654066767;
    msg.vel_d = 0.5932065376629014;
    msg.speed = 0.6486002209853066;
    msg.gspeed = 0.6296241301586414;
    msg.heading = 0.822233672209176;
    msg.sacc = 0.7656059631805083;
    msg.cacc = 0.2586011746737308;

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
    msg.setTimeStamp(0.3532352670399207);
    msg.setSource(23364U);
    msg.setSourceEntity(115U);
    msg.setDestination(42956U);
    msg.setDestinationEntity(44U);
    msg.itow = 2725979848U;
    msg.lat = 0.7877180377354109;
    msg.lon = 0.9864894906704476;
    msg.height_ell = 0.90132995037677;
    msg.height_sea = 0.8177221437919717;
    msg.hacc = 0.1486084139406595;
    msg.vacc = 0.26359921497558914;
    msg.vel_n = 0.11814965759728613;
    msg.vel_e = 0.16738480888371532;
    msg.vel_d = 0.7950450930127444;
    msg.speed = 0.028423368154111617;
    msg.gspeed = 0.14293632333530926;
    msg.heading = 0.7465203938833328;
    msg.sacc = 0.17973464391309335;
    msg.cacc = 0.7293010280627774;

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
    msg.setTimeStamp(0.4888023219508786);
    msg.setSource(49536U);
    msg.setSourceEntity(86U);
    msg.setDestination(18876U);
    msg.setDestinationEntity(208U);
    msg.itow = 1431370997U;
    msg.lat = 0.7159482770804714;
    msg.lon = 0.1165599491322572;
    msg.height_ell = 0.700053622266167;
    msg.height_sea = 0.7328732046383706;
    msg.hacc = 0.33429746462346066;
    msg.vacc = 0.6195349914902527;
    msg.vel_n = 0.9481204406429674;
    msg.vel_e = 0.9552764150504601;
    msg.vel_d = 0.6448130671230193;
    msg.speed = 0.4725625670350463;
    msg.gspeed = 0.5679125500772845;
    msg.heading = 0.9909142317346591;
    msg.sacc = 0.729732724874442;
    msg.cacc = 0.5287581089722465;

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
    msg.setTimeStamp(0.5930405114770914);
    msg.setSource(59011U);
    msg.setSourceEntity(73U);
    msg.setDestination(1400U);
    msg.setDestinationEntity(76U);
    msg.id = 79U;
    msg.value = 0.03247679599798958;

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
    msg.setTimeStamp(0.5428519054793027);
    msg.setSource(28486U);
    msg.setSourceEntity(82U);
    msg.setDestination(62233U);
    msg.setDestinationEntity(74U);
    msg.id = 180U;
    msg.value = 0.9780799984717559;

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
    msg.setTimeStamp(0.02753091051980594);
    msg.setSource(26267U);
    msg.setSourceEntity(128U);
    msg.setDestination(28850U);
    msg.setDestinationEntity(99U);
    msg.id = 66U;
    msg.value = 0.24576622249597768;

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
    msg.setTimeStamp(0.8023379609463059);
    msg.setSource(34870U);
    msg.setSourceEntity(52U);
    msg.setDestination(34081U);
    msg.setDestinationEntity(5U);
    msg.x = 0.9679544136388171;
    msg.y = 0.452742172247545;
    msg.z = 0.3990360269040981;
    msg.phi = 0.3189649684158612;
    msg.theta = 0.24975016268197525;
    msg.psi = 0.45582710088205647;

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
    msg.setTimeStamp(0.9109469976958923);
    msg.setSource(33175U);
    msg.setSourceEntity(221U);
    msg.setDestination(20361U);
    msg.setDestinationEntity(20U);
    msg.x = 0.33371168424360054;
    msg.y = 0.09754122291134981;
    msg.z = 0.629870732181206;
    msg.phi = 0.7332677759450487;
    msg.theta = 0.8094914873474247;
    msg.psi = 0.34244454715542527;

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
    msg.setTimeStamp(0.2094270329922291);
    msg.setSource(24829U);
    msg.setSourceEntity(83U);
    msg.setDestination(22923U);
    msg.setDestinationEntity(214U);
    msg.x = 0.49572863472038065;
    msg.y = 0.47620281691431654;
    msg.z = 0.751662452999681;
    msg.phi = 0.7556460159327848;
    msg.theta = 0.7625179720951646;
    msg.psi = 0.7153861504549215;

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
    msg.setTimeStamp(0.563780816856439);
    msg.setSource(22635U);
    msg.setSourceEntity(154U);
    msg.setDestination(33894U);
    msg.setDestinationEntity(194U);
    msg.beam_width = 0.595769475905118;
    msg.beam_height = 0.8128594728711304;

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
    msg.setTimeStamp(0.8274082360843311);
    msg.setSource(50909U);
    msg.setSourceEntity(254U);
    msg.setDestination(17386U);
    msg.setDestinationEntity(207U);
    msg.beam_width = 0.678606179347565;
    msg.beam_height = 0.23527069614031182;

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
    msg.setTimeStamp(0.2640633257722531);
    msg.setSource(43655U);
    msg.setSourceEntity(57U);
    msg.setDestination(46457U);
    msg.setDestinationEntity(34U);
    msg.beam_width = 0.4851890599958044;
    msg.beam_height = 0.15523990903407703;

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
    msg.setTimeStamp(0.1237812179856802);
    msg.setSource(33978U);
    msg.setSourceEntity(135U);
    msg.setDestination(26303U);
    msg.setDestinationEntity(161U);
    msg.sane = 119U;

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
    msg.setTimeStamp(0.6573840503914469);
    msg.setSource(346U);
    msg.setSourceEntity(56U);
    msg.setDestination(15449U);
    msg.setDestinationEntity(110U);
    msg.sane = 204U;

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
    msg.setTimeStamp(0.7546374748779087);
    msg.setSource(60589U);
    msg.setSourceEntity(51U);
    msg.setDestination(58355U);
    msg.setDestinationEntity(249U);
    msg.sane = 137U;

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
    msg.setTimeStamp(0.4223521063797748);
    msg.setSource(3701U);
    msg.setSourceEntity(150U);
    msg.setDestination(50803U);
    msg.setDestinationEntity(74U);
    msg.value = 0.8815022063461326;

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
    msg.setTimeStamp(0.24838877960330252);
    msg.setSource(36756U);
    msg.setSourceEntity(37U);
    msg.setDestination(11923U);
    msg.setDestinationEntity(105U);
    msg.value = 0.2367036923671726;

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
    msg.setTimeStamp(0.12774753628176005);
    msg.setSource(54237U);
    msg.setSourceEntity(25U);
    msg.setDestination(25757U);
    msg.setDestinationEntity(3U);
    msg.value = 0.5527238230836408;

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
    msg.setTimeStamp(0.22778583037955158);
    msg.setSource(56021U);
    msg.setSourceEntity(242U);
    msg.setDestination(60610U);
    msg.setDestinationEntity(222U);
    msg.value = 0.13016293382251576;

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
    msg.setTimeStamp(0.8035839700312594);
    msg.setSource(40213U);
    msg.setSourceEntity(1U);
    msg.setDestination(27287U);
    msg.setDestinationEntity(135U);
    msg.value = 0.4041666226063454;

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
    msg.setTimeStamp(0.20857558739228688);
    msg.setSource(12514U);
    msg.setSourceEntity(236U);
    msg.setDestination(35822U);
    msg.setDestinationEntity(174U);
    msg.value = 0.8694591639363876;

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
    msg.setTimeStamp(0.1813843697730806);
    msg.setSource(47942U);
    msg.setSourceEntity(30U);
    msg.setDestination(45128U);
    msg.setDestinationEntity(192U);
    msg.value = 0.8946598223144089;

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
    msg.setTimeStamp(0.8088445830972728);
    msg.setSource(13266U);
    msg.setSourceEntity(242U);
    msg.setDestination(6460U);
    msg.setDestinationEntity(101U);
    msg.value = 0.05562857105972441;

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
    msg.setTimeStamp(0.6958937709777994);
    msg.setSource(32966U);
    msg.setSourceEntity(199U);
    msg.setDestination(30362U);
    msg.setDestinationEntity(154U);
    msg.value = 0.5921415989225528;

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
    msg.setTimeStamp(0.6273191431110614);
    msg.setSource(8089U);
    msg.setSourceEntity(55U);
    msg.setDestination(54727U);
    msg.setDestinationEntity(248U);
    msg.value = 0.6488670139880715;

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
    msg.setTimeStamp(0.051559351997816805);
    msg.setSource(856U);
    msg.setSourceEntity(63U);
    msg.setDestination(46465U);
    msg.setDestinationEntity(154U);
    msg.value = 0.4812024451083087;

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
    msg.setTimeStamp(0.14782700233200163);
    msg.setSource(20622U);
    msg.setSourceEntity(58U);
    msg.setDestination(37966U);
    msg.setDestinationEntity(11U);
    msg.value = 0.8606040157674927;

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
    msg.setTimeStamp(0.3912518915232993);
    msg.setSource(46676U);
    msg.setSourceEntity(253U);
    msg.setDestination(3802U);
    msg.setDestinationEntity(83U);
    msg.value = 0.6969430169946343;

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
    msg.setTimeStamp(0.18704656218408655);
    msg.setSource(44519U);
    msg.setSourceEntity(76U);
    msg.setDestination(3250U);
    msg.setDestinationEntity(20U);
    msg.value = 0.22052229267329537;

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
    msg.setTimeStamp(0.1604623119947538);
    msg.setSource(60133U);
    msg.setSourceEntity(247U);
    msg.setDestination(13480U);
    msg.setDestinationEntity(191U);
    msg.value = 0.7265934094549114;

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
    msg.setTimeStamp(0.40731923125204206);
    msg.setSource(12975U);
    msg.setSourceEntity(181U);
    msg.setDestination(10890U);
    msg.setDestinationEntity(226U);
    msg.value = 0.7939489424677214;

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
    msg.setTimeStamp(0.3805780862908372);
    msg.setSource(10437U);
    msg.setSourceEntity(72U);
    msg.setDestination(27131U);
    msg.setDestinationEntity(97U);
    msg.value = 0.2361977965483132;

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
    msg.setTimeStamp(0.7629040025388085);
    msg.setSource(36071U);
    msg.setSourceEntity(15U);
    msg.setDestination(62688U);
    msg.setDestinationEntity(1U);
    msg.value = 0.7392260487407032;

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
    msg.setTimeStamp(0.9998455209576711);
    msg.setSource(54201U);
    msg.setSourceEntity(142U);
    msg.setDestination(21787U);
    msg.setDestinationEntity(172U);
    msg.value = 0.3942351984862785;

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
    msg.setTimeStamp(0.022679392374896246);
    msg.setSource(6175U);
    msg.setSourceEntity(1U);
    msg.setDestination(63204U);
    msg.setDestinationEntity(63U);
    msg.value = 0.4148460000270012;

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
    msg.setTimeStamp(0.9159910585965112);
    msg.setSource(65159U);
    msg.setSourceEntity(75U);
    msg.setDestination(42890U);
    msg.setDestinationEntity(136U);
    msg.value = 0.3573887871512218;

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
    msg.setTimeStamp(0.010018786871633822);
    msg.setSource(36033U);
    msg.setSourceEntity(46U);
    msg.setDestination(9176U);
    msg.setDestinationEntity(107U);
    msg.value = 0.2625238097016068;

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
    msg.setTimeStamp(0.5969677585692801);
    msg.setSource(30008U);
    msg.setSourceEntity(1U);
    msg.setDestination(13790U);
    msg.setDestinationEntity(105U);
    msg.value = 0.6671591479907355;

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
    msg.setTimeStamp(0.6403424500974778);
    msg.setSource(12004U);
    msg.setSourceEntity(4U);
    msg.setDestination(61996U);
    msg.setDestinationEntity(93U);
    msg.value = 0.5107764927981819;

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
    msg.setTimeStamp(0.9644948371314594);
    msg.setSource(44019U);
    msg.setSourceEntity(167U);
    msg.setDestination(12288U);
    msg.setDestinationEntity(18U);
    msg.validity = 49247U;
    msg.type = 90U;
    msg.tow = 3776403153U;
    msg.base_lat = 0.024375851164415208;
    msg.base_lon = 0.43828198464301493;
    msg.base_height = 0.6634173883644359;
    msg.n = 0.27615652881474106;
    msg.e = 0.4335662900701017;
    msg.d = 0.6353170548649231;
    msg.v_n = 0.9412981544873424;
    msg.v_e = 0.34497377692020015;
    msg.v_d = 0.09256461076134714;
    msg.satellites = 58U;
    msg.iar_hyp = 9719U;
    msg.iar_ratio = 0.4947614211148066;

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
    msg.setTimeStamp(0.10742728141842972);
    msg.setSource(21692U);
    msg.setSourceEntity(152U);
    msg.setDestination(56088U);
    msg.setDestinationEntity(229U);
    msg.validity = 18162U;
    msg.type = 147U;
    msg.tow = 2056595878U;
    msg.base_lat = 0.8856339392519049;
    msg.base_lon = 0.11490480830829009;
    msg.base_height = 0.4972532808804494;
    msg.n = 0.6495225041951097;
    msg.e = 0.5358748499190469;
    msg.d = 0.009418003918228335;
    msg.v_n = 0.9178185604680571;
    msg.v_e = 0.7625798099850467;
    msg.v_d = 0.574582104962434;
    msg.satellites = 124U;
    msg.iar_hyp = 12145U;
    msg.iar_ratio = 0.6208989285193655;

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
    msg.setTimeStamp(0.637441400841596);
    msg.setSource(10876U);
    msg.setSourceEntity(91U);
    msg.setDestination(701U);
    msg.setDestinationEntity(102U);
    msg.validity = 18240U;
    msg.type = 73U;
    msg.tow = 617054141U;
    msg.base_lat = 0.7251849987818277;
    msg.base_lon = 0.6366196779654512;
    msg.base_height = 0.8131099060924677;
    msg.n = 0.022315721561761315;
    msg.e = 0.08337435148565753;
    msg.d = 0.830774106339611;
    msg.v_n = 0.399388484330812;
    msg.v_e = 0.6714545230630158;
    msg.v_d = 0.04232340854864902;
    msg.satellites = 58U;
    msg.iar_hyp = 56998U;
    msg.iar_ratio = 0.774565380881624;

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
    msg.setTimeStamp(0.043392358742750825);
    msg.setSource(34946U);
    msg.setSourceEntity(136U);
    msg.setDestination(46798U);
    msg.setDestinationEntity(0U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9333161035092787;
    tmp_msg_0.lon = 0.8815071984722652;
    tmp_msg_0.height = 0.24263135531993074;
    tmp_msg_0.x = 0.36267216191124974;
    tmp_msg_0.y = 0.2111095267854428;
    tmp_msg_0.z = 0.04650786788514372;
    tmp_msg_0.phi = 0.5878901842375881;
    tmp_msg_0.theta = 0.867264186427233;
    tmp_msg_0.psi = 0.28421283442718914;
    tmp_msg_0.u = 0.4000043958670656;
    tmp_msg_0.v = 0.6325123515290324;
    tmp_msg_0.w = 0.5850940386515037;
    tmp_msg_0.vx = 0.03640656437718359;
    tmp_msg_0.vy = 0.02384184532261646;
    tmp_msg_0.vz = 0.5656146555783927;
    tmp_msg_0.p = 0.6852620455160772;
    tmp_msg_0.q = 0.8835067992139801;
    tmp_msg_0.r = 0.0393176313447996;
    tmp_msg_0.depth = 0.6610682663957709;
    tmp_msg_0.alt = 0.35666666540455005;
    msg.state.set(tmp_msg_0);
    msg.type = 4U;

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
    msg.setTimeStamp(0.09309021543886187);
    msg.setSource(42404U);
    msg.setSourceEntity(34U);
    msg.setDestination(27194U);
    msg.setDestinationEntity(164U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.06246548607642333;
    tmp_msg_0.lon = 0.1685314434786015;
    tmp_msg_0.height = 0.10133527152719979;
    tmp_msg_0.x = 0.5626524537250548;
    tmp_msg_0.y = 0.7755576973706165;
    tmp_msg_0.z = 0.2929916569533748;
    tmp_msg_0.phi = 0.47678335889292256;
    tmp_msg_0.theta = 0.6023642816835495;
    tmp_msg_0.psi = 0.48725542937100774;
    tmp_msg_0.u = 0.19593170281089145;
    tmp_msg_0.v = 0.37232077385839024;
    tmp_msg_0.w = 0.48260047012173346;
    tmp_msg_0.vx = 0.3981628983051355;
    tmp_msg_0.vy = 0.43139142338064773;
    tmp_msg_0.vz = 0.09342177376769545;
    tmp_msg_0.p = 0.8390310937338283;
    tmp_msg_0.q = 0.13605482706364114;
    tmp_msg_0.r = 0.45255866896191543;
    tmp_msg_0.depth = 0.2557823579879983;
    tmp_msg_0.alt = 0.7652652801271765;
    msg.state.set(tmp_msg_0);
    msg.type = 193U;

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
    msg.setTimeStamp(0.7878790021127532);
    msg.setSource(32558U);
    msg.setSourceEntity(84U);
    msg.setDestination(34420U);
    msg.setDestinationEntity(67U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9009368926217189;
    tmp_msg_0.lon = 0.20512914701482798;
    tmp_msg_0.height = 0.9129354031097018;
    tmp_msg_0.x = 0.9179732814955861;
    tmp_msg_0.y = 0.860269623612368;
    tmp_msg_0.z = 0.7454726908969751;
    tmp_msg_0.phi = 0.21157253006714993;
    tmp_msg_0.theta = 0.15148069196549308;
    tmp_msg_0.psi = 0.26717036902229274;
    tmp_msg_0.u = 0.7702652843696405;
    tmp_msg_0.v = 0.4578007278475078;
    tmp_msg_0.w = 0.8518618268577639;
    tmp_msg_0.vx = 0.950310333509191;
    tmp_msg_0.vy = 0.23093937275718546;
    tmp_msg_0.vz = 0.7010170234167283;
    tmp_msg_0.p = 0.7520818834629006;
    tmp_msg_0.q = 0.9137844037166921;
    tmp_msg_0.r = 0.1539059053251911;
    tmp_msg_0.depth = 0.7518842298175442;
    tmp_msg_0.alt = 0.21744753912544945;
    msg.state.set(tmp_msg_0);
    msg.type = 86U;

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
    msg.setTimeStamp(0.8263288092646979);
    msg.setSource(58192U);
    msg.setSourceEntity(225U);
    msg.setDestination(49245U);
    msg.setDestinationEntity(108U);
    msg.value = 0.11577458278769781;

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
    msg.setTimeStamp(0.6898320763540934);
    msg.setSource(22717U);
    msg.setSourceEntity(227U);
    msg.setDestination(55697U);
    msg.setDestinationEntity(129U);
    msg.value = 0.9263968057913743;

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
    msg.setTimeStamp(0.8344916120121203);
    msg.setSource(57426U);
    msg.setSourceEntity(235U);
    msg.setDestination(8570U);
    msg.setDestinationEntity(221U);
    msg.value = 0.6311742513603987;

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
    msg.setTimeStamp(0.27420052177120313);
    msg.setSource(6912U);
    msg.setSourceEntity(254U);
    msg.setDestination(4425U);
    msg.setDestinationEntity(20U);
    msg.value = 0.5949644720458916;

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
    msg.setTimeStamp(0.326160914853872);
    msg.setSource(9727U);
    msg.setSourceEntity(118U);
    msg.setDestination(57685U);
    msg.setDestinationEntity(215U);
    msg.value = 0.43763173115283427;

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
    msg.setTimeStamp(0.543047582109953);
    msg.setSource(58009U);
    msg.setSourceEntity(241U);
    msg.setDestination(36888U);
    msg.setDestinationEntity(148U);
    msg.value = 0.7938925509472792;

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
    msg.setTimeStamp(0.9620217837008599);
    msg.setSource(62328U);
    msg.setSourceEntity(245U);
    msg.setDestination(22721U);
    msg.setDestinationEntity(82U);
    msg.value = 0.9450445259169259;

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
    msg.setTimeStamp(0.2914856324984302);
    msg.setSource(27846U);
    msg.setSourceEntity(41U);
    msg.setDestination(7489U);
    msg.setDestinationEntity(36U);
    msg.value = 0.34920651663856883;

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
    msg.setTimeStamp(0.8763208940786131);
    msg.setSource(33208U);
    msg.setSourceEntity(65U);
    msg.setDestination(51240U);
    msg.setDestinationEntity(156U);
    msg.value = 0.27581623874022143;

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
    msg.setTimeStamp(0.46218437340703455);
    msg.setSource(15751U);
    msg.setSourceEntity(18U);
    msg.setDestination(51033U);
    msg.setDestinationEntity(174U);
    msg.value = 0.8285932088449665;

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
    msg.setTimeStamp(0.8210111774065018);
    msg.setSource(21366U);
    msg.setSourceEntity(152U);
    msg.setDestination(55363U);
    msg.setDestinationEntity(116U);
    msg.value = 0.4281279109648246;

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
    msg.setTimeStamp(0.3639054532133582);
    msg.setSource(42517U);
    msg.setSourceEntity(79U);
    msg.setDestination(12979U);
    msg.setDestinationEntity(182U);
    msg.value = 0.49751370098859227;

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
    msg.setTimeStamp(0.683192594033898);
    msg.setSource(27975U);
    msg.setSourceEntity(150U);
    msg.setDestination(31994U);
    msg.setDestinationEntity(138U);
    msg.value = 0.5869873474459966;

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
    msg.setTimeStamp(0.8497812873928143);
    msg.setSource(30394U);
    msg.setSourceEntity(228U);
    msg.setDestination(45503U);
    msg.setDestinationEntity(60U);
    msg.value = 0.5083185683335399;

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
    msg.setTimeStamp(0.9794319358000689);
    msg.setSource(33552U);
    msg.setSourceEntity(72U);
    msg.setDestination(16009U);
    msg.setDestinationEntity(125U);
    msg.value = 0.6242890687834289;

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
    msg.setTimeStamp(0.603368770914978);
    msg.setSource(23627U);
    msg.setSourceEntity(134U);
    msg.setDestination(31606U);
    msg.setDestinationEntity(108U);
    msg.id = 5U;
    msg.zoom = 39U;
    msg.action = 212U;

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
    msg.setTimeStamp(0.9196687224748338);
    msg.setSource(7377U);
    msg.setSourceEntity(137U);
    msg.setDestination(41349U);
    msg.setDestinationEntity(177U);
    msg.id = 181U;
    msg.zoom = 225U;
    msg.action = 5U;

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
    msg.setTimeStamp(0.5971243809115189);
    msg.setSource(45843U);
    msg.setSourceEntity(75U);
    msg.setDestination(5989U);
    msg.setDestinationEntity(104U);
    msg.id = 179U;
    msg.zoom = 18U;
    msg.action = 243U;

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
    msg.setTimeStamp(0.6777941872659906);
    msg.setSource(51585U);
    msg.setSourceEntity(140U);
    msg.setDestination(5818U);
    msg.setDestinationEntity(22U);
    msg.id = 121U;
    msg.value = 0.13071801179097142;

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
    msg.setTimeStamp(0.845692309663791);
    msg.setSource(24995U);
    msg.setSourceEntity(25U);
    msg.setDestination(18700U);
    msg.setDestinationEntity(93U);
    msg.id = 222U;
    msg.value = 0.17518786339416637;

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
    msg.setTimeStamp(0.657331273118268);
    msg.setSource(27369U);
    msg.setSourceEntity(172U);
    msg.setDestination(28942U);
    msg.setDestinationEntity(4U);
    msg.id = 115U;
    msg.value = 0.7188871730970671;

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
    msg.setTimeStamp(0.2947470900319169);
    msg.setSource(6280U);
    msg.setSourceEntity(205U);
    msg.setDestination(2324U);
    msg.setDestinationEntity(163U);
    msg.id = 166U;
    msg.value = 0.7147215313104129;

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
    msg.setTimeStamp(0.3630703377977845);
    msg.setSource(2156U);
    msg.setSourceEntity(37U);
    msg.setDestination(26225U);
    msg.setDestinationEntity(184U);
    msg.id = 85U;
    msg.value = 0.2437788394840985;

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
    msg.setTimeStamp(0.567133992195529);
    msg.setSource(26480U);
    msg.setSourceEntity(108U);
    msg.setDestination(62316U);
    msg.setDestinationEntity(129U);
    msg.id = 78U;
    msg.value = 0.8095454636339966;

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
    msg.setTimeStamp(0.47396212255269576);
    msg.setSource(63260U);
    msg.setSourceEntity(228U);
    msg.setDestination(17718U);
    msg.setDestinationEntity(7U);
    msg.id = 249U;
    msg.angle = 0.9728987925210257;

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
    msg.setTimeStamp(0.4661054757141585);
    msg.setSource(14033U);
    msg.setSourceEntity(54U);
    msg.setDestination(44083U);
    msg.setDestinationEntity(53U);
    msg.id = 193U;
    msg.angle = 0.2730200065478945;

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
    msg.setTimeStamp(0.38196246537747636);
    msg.setSource(57489U);
    msg.setSourceEntity(160U);
    msg.setDestination(10434U);
    msg.setDestinationEntity(190U);
    msg.id = 120U;
    msg.angle = 0.30993547305386704;

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
    msg.setTimeStamp(0.22319816674688697);
    msg.setSource(59095U);
    msg.setSourceEntity(61U);
    msg.setDestination(43314U);
    msg.setDestinationEntity(116U);
    msg.op = 111U;
    msg.actions.assign("ISJXMTHEXNSNCPRNAMLUKCLJMIHGODAHIROJGWEKNDMQURFSDCPCFMQSSROTRXBVBTKFYVRZAPIYXCXIULDQVCDIOJSUMGIEONZLFQYCFRNSTZHWYMJJTZABTFEXTYBUYWNSPPLDGVRAHKZOAZTJQJAMOVERPHYVHHZQKYLUKCQFMGWHVWPNXHLTONBVFIQGGNAQIG");

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
    msg.setTimeStamp(0.33559301797635355);
    msg.setSource(6185U);
    msg.setSourceEntity(64U);
    msg.setDestination(47200U);
    msg.setDestinationEntity(208U);
    msg.op = 192U;
    msg.actions.assign("KCEDBVHDWFUCBPFEAKYBMYVQMLPKDKNDVHSWARPCZMYQMGCSMEULUIJXUNDKOBMZOYYFGUZSSRZXOBQIJHPOTETAAYWCQWZQWDXMZFIQJVYFARADONRIHTSRBUTTKLVKJUIGSNHNNMXTGGQFALTYJVYTWENCPDBLLNQENKBQJLVUXWXTEIQIZGSGOXPUPDF");

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
    msg.setTimeStamp(0.19093392351631422);
    msg.setSource(4654U);
    msg.setSourceEntity(181U);
    msg.setDestination(16833U);
    msg.setDestinationEntity(190U);
    msg.op = 96U;
    msg.actions.assign("FBQMXWIMCAOEGHLEIYRRBTQYVDLTBCYEXXVEFZBXDUPOPWEKGATCUSLZQZMDBLCEHDVDJAGFSTUJHVQADVCVKCKTYSAZSPWLZSZNDOZGHPGINDHPUQDRXLQHPYAYKKMRNRTFSOOJGWE");

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
    msg.setTimeStamp(0.8560223461609584);
    msg.setSource(50731U);
    msg.setSourceEntity(64U);
    msg.setDestination(17723U);
    msg.setDestinationEntity(70U);
    msg.actions.assign("ZWERXWYXFDJXRUSCDQNYJMWCZICTEHPAQBZFOCHGURHFTVCWHNZWKODYLYIOKKAMNHIBWJMCEZXWTRHJARIVRSGOZTXYCNAKLHLJAGALGQKFVSSMBHYRJXTNPMECJWQUZPT");

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
    msg.setTimeStamp(0.9147302482109155);
    msg.setSource(51360U);
    msg.setSourceEntity(3U);
    msg.setDestination(30796U);
    msg.setDestinationEntity(194U);
    msg.actions.assign("PXYRDZXHGPDMEWBTUCBPTRYMFYZXZTHSLBRIPVMZBQFBXC");

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
    msg.setTimeStamp(0.7613241707331686);
    msg.setSource(7437U);
    msg.setSourceEntity(230U);
    msg.setDestination(25802U);
    msg.setDestinationEntity(212U);
    msg.actions.assign("XKAZIGRLWPUIDEQIRBRHZSOXBCCUIDHEYQDQRXCTLDBRXQIWKWGQJGSOLOBXNOEBTEVNNBYFUJHHNCSRFRJJKPNBNLVUAFAQLKGNZOYCVVGMUORZCMAMHMDTRWAMKFSYIQEZUSKDZTVSEWZHERPIOLVPVSGFCBPQYNTIAHDCNYOWOTVDKHJMYCEZXDXP");

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
    msg.setTimeStamp(0.4915831705656021);
    msg.setSource(51825U);
    msg.setSourceEntity(175U);
    msg.setDestination(27895U);
    msg.setDestinationEntity(39U);
    msg.button = 174U;
    msg.value = 167U;

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
    msg.setTimeStamp(0.28658764912608203);
    msg.setSource(37421U);
    msg.setSourceEntity(170U);
    msg.setDestination(19902U);
    msg.setDestinationEntity(189U);
    msg.button = 252U;
    msg.value = 34U;

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
    msg.setTimeStamp(0.4263143298658537);
    msg.setSource(57578U);
    msg.setSourceEntity(82U);
    msg.setDestination(2261U);
    msg.setDestinationEntity(40U);
    msg.button = 196U;
    msg.value = 188U;

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
    msg.setTimeStamp(0.5453767790008612);
    msg.setSource(52283U);
    msg.setSourceEntity(0U);
    msg.setDestination(3140U);
    msg.setDestinationEntity(214U);
    msg.op = 137U;
    msg.text.assign("QZJTOYFTMHDNWNXAIGKSBUHQSUCVYFSBJQWRHTCLLQTFKBARXDRLYHSLLFKODRAGYWQXMPMWMIWANGWISAQWZEPKTXEOBUJDXBXQLSDBOFGHUMRVPCIVUVKEZNKEXNGPCMRJUHPOERJVKJUNDNMCDECIBRZN");

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
    msg.setTimeStamp(0.7663946896161435);
    msg.setSource(15403U);
    msg.setSourceEntity(144U);
    msg.setDestination(41869U);
    msg.setDestinationEntity(216U);
    msg.op = 106U;
    msg.text.assign("NOKQURZJCDHMNVELYCPZYAZUUAHIWZBJDRBAAIMGGSYNNXCDTIFKRUAYLVZLILKGSYAKOVSJQCXMWJJSRDBRABIVFHHPHICPOTQRXIPGFKTMERWRBPVU");

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
    msg.setTimeStamp(0.8995250085102385);
    msg.setSource(37402U);
    msg.setSourceEntity(35U);
    msg.setDestination(12807U);
    msg.setDestinationEntity(220U);
    msg.op = 96U;
    msg.text.assign("PHRXOUQJRDHCFTWJRSKHZMUEDAGAVFZVVEUOSNMDFTESTASSXNLQIKMJZLDFPKBMMVIKLNJVNYAIONQGGFWTSUDVAWZJFRBFPDZOBDEXOCKNLTPQ");

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
    msg.setTimeStamp(0.6956867810082188);
    msg.setSource(29253U);
    msg.setSourceEntity(129U);
    msg.setDestination(8557U);
    msg.setDestinationEntity(71U);
    msg.op = 28U;
    msg.time_remain = 0.30737232414742865;
    msg.sched_time = 0.044366607277031456;

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
    msg.setTimeStamp(0.9326742559133588);
    msg.setSource(10534U);
    msg.setSourceEntity(195U);
    msg.setDestination(47654U);
    msg.setDestinationEntity(137U);
    msg.op = 111U;
    msg.time_remain = 0.7279457258204395;
    msg.sched_time = 0.9398525083878653;

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
    msg.setTimeStamp(0.37841511206360234);
    msg.setSource(38740U);
    msg.setSourceEntity(104U);
    msg.setDestination(13594U);
    msg.setDestinationEntity(215U);
    msg.op = 30U;
    msg.time_remain = 0.44254981975825813;
    msg.sched_time = 0.7483913618893615;

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
    msg.setTimeStamp(0.6224543454159612);
    msg.setSource(6378U);
    msg.setSourceEntity(242U);
    msg.setDestination(17131U);
    msg.setDestinationEntity(211U);
    msg.name.assign("DEJCBOKRSYPOCQUWATJSJNHZDIMSAXRXBWMIFXLHRJSDCTMOUCTJA");
    msg.op = 14U;
    msg.sched_time = 0.3559698909991377;

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
    msg.setTimeStamp(0.590632249646796);
    msg.setSource(26716U);
    msg.setSourceEntity(120U);
    msg.setDestination(57109U);
    msg.setDestinationEntity(212U);
    msg.name.assign("XCKNWCRIGJAZVVWMAFDJHYAKRZEOGRLIGIANCLSLFUCEURSMFSBIVURGBDVEMTQZUJAQEJXAWWEWCFSPZNUUXAGDADOKIMPPHSLPTXJJDYPTYLVHBDYMZGPGHYMXUTBPKCSXKEZIMONLINIGQKAWC");
    msg.op = 175U;
    msg.sched_time = 0.7471562461133857;

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
    msg.setTimeStamp(0.8623025823507906);
    msg.setSource(14877U);
    msg.setSourceEntity(21U);
    msg.setDestination(9825U);
    msg.setDestinationEntity(10U);
    msg.name.assign("DGVSLPJGXFCWXKITVHSYRTHIDNRJYCSWYLBUMMBDCVNIUOPHKGJFXDAAFKVFZPPRURWSWYPXKCFYWOJNL");
    msg.op = 247U;
    msg.sched_time = 0.3684275918604589;

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
    msg.setTimeStamp(0.6481315297326764);
    msg.setSource(23589U);
    msg.setSourceEntity(60U);
    msg.setDestination(52739U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.29383243762422395);
    msg.setSource(45601U);
    msg.setSourceEntity(119U);
    msg.setDestination(7575U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.18947014685539598);
    msg.setSource(40650U);
    msg.setSourceEntity(39U);
    msg.setDestination(27687U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.37480957740160203);
    msg.setSource(35608U);
    msg.setSourceEntity(36U);
    msg.setDestination(44579U);
    msg.setDestinationEntity(91U);
    msg.name.assign("PZNEFVHCWKDWNSEYTMMWBJQBQZMUDBULQEYANXHUGDPZYBLLXVKVJVYAMDHFRAMLTDRZEDAILNSGSNOHKGSXAGOJNDZXVICOYIUSMIKLKTCBXSREQJVUPMNRDDBODOTXTHYFVVQPKGBOWZXPPLKKRHLTOCFJWNGHUJWIXUYOFWOGXWRKFBNRSENIGBEREFRZTCAJYIZMGMHGUCPAOSTPZQAQQCPCYWVQSXJUEMBTFIUZJCLALFQKJHFIHTI");
    msg.state = 16U;

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
    msg.setTimeStamp(0.5686138480806914);
    msg.setSource(52080U);
    msg.setSourceEntity(40U);
    msg.setDestination(32175U);
    msg.setDestinationEntity(6U);
    msg.name.assign("CDSNDCQJAMUBAKGVBUHJSOOYBKQUKZDPNNZODACLIVNCOSJRNMWNQJYCUOTBSLTHMVQLWQPCHKLFUOGYXYBFDRZITXBTAEMGUDUJGQMOXDBWZJRFFGXPRTPAOEBLMMKUKEQOJALFZHAICYRSPXNUWYJJKEEWSMXGINLWMEYLTHCIQLVMTLSXFIHPCGTVSZXDVKHRPPVIAUJEEVKHQWXEYIDCW");
    msg.state = 242U;

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
    msg.setTimeStamp(0.26105353185221214);
    msg.setSource(1360U);
    msg.setSourceEntity(124U);
    msg.setDestination(52157U);
    msg.setDestinationEntity(180U);
    msg.name.assign("ZQBXZJPUVAAGSWSNNYWFCKCQKBDWHJOYSTKZVABCVMGSTWWUMVPDZBXTTLJELNTHLOSFXHWJXGFGBKYIFOKSLXLPQYOFNAIFJRYWMBDDDYFTSVGBBJRQQLNMNODQRCJCPFHMEZ");
    msg.state = 251U;

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
    msg.setTimeStamp(0.6842273328465467);
    msg.setSource(18939U);
    msg.setSourceEntity(242U);
    msg.setDestination(30105U);
    msg.setDestinationEntity(204U);
    msg.name.assign("IYXURWAXGLCKENTJJJQIBJCWMTSJFNKYMVZECA");
    msg.value = 239U;

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
    msg.setTimeStamp(0.9539303984021088);
    msg.setSource(30340U);
    msg.setSourceEntity(210U);
    msg.setDestination(26900U);
    msg.setDestinationEntity(36U);
    msg.name.assign("RQYRQRLOKQCAUZJNBPHFGKRTTAEBKUDCLEGBAMGZMTXIRVTBADUSHCSXAFHCJH");
    msg.value = 212U;

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
    msg.setTimeStamp(0.4122976997199985);
    msg.setSource(5650U);
    msg.setSourceEntity(185U);
    msg.setDestination(45533U);
    msg.setDestinationEntity(251U);
    msg.name.assign("WNPFZNCNCBVVJVXIXSAMYIXWRXEWARBXPNIHHBRPAWTPCCOWYLUTVIFDGUXQRCIQCLKFKIKEEOOLFSBBUJPITUVYDZYBURQELLKJBKKSDSCPHLOXLIPJRJVWSBOK");
    msg.value = 176U;

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
    msg.setTimeStamp(0.333103038640554);
    msg.setSource(21876U);
    msg.setSourceEntity(109U);
    msg.setDestination(5941U);
    msg.setDestinationEntity(100U);
    msg.name.assign("HLKVJNVSAUYLKYXFRNWXTSQLODCPZNOUUEGGAXPEOBYPHZEBROCYIZCNUSDMZPNQMDFBRRWMPQCPCFXDLOSHFOPEBTYVFIOIJVHGZHCXMDZRIMUJWAULPIFLDITLBBTZWROKKMFQGNEDKSGPRQBOGSSVLRWFTXARVJAHAVUMSTKJMHJMEETZGTXHMKWHAWICXAZSNGYECKUQYS");

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
    msg.setTimeStamp(0.01912940237899985);
    msg.setSource(61730U);
    msg.setSourceEntity(99U);
    msg.setDestination(56764U);
    msg.setDestinationEntity(188U);
    msg.name.assign("KIKXUIZUBDGJLFBOIRNRPNJJHMCLPWOFDHZRDDXECWEZICLISGQCONASZBVUVMHIOJHBWJBZSPEZLSXPYUXXGSMFKHALWEMZFEQMLJOQXKZYTUUXAFIZJVUAGGVCQKSNIDHXPPETBLVVVNOWQGBUIYKHQSQTQTVJHRVFDYOTCRGGAEXRTSBLPXTOMKMRTFJFPYKMYOWKNMLMYLCNAFDYI");

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
    msg.setTimeStamp(0.9485216074895335);
    msg.setSource(27714U);
    msg.setSourceEntity(172U);
    msg.setDestination(14603U);
    msg.setDestinationEntity(111U);
    msg.name.assign("CEEKBEACRXNBISPWJQMDJPXW");

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
    msg.setTimeStamp(0.6287984950377095);
    msg.setSource(50240U);
    msg.setSourceEntity(153U);
    msg.setDestination(48386U);
    msg.setDestinationEntity(238U);
    msg.name.assign("SCXGYSFGNFRUGDWJECOZIRZIFPVRMZKFXCRANGHHWXEWGCDWOFVEAXQWUJNFAPRHXNACNYAFMYWWVQAJYYLLCBJLEBEYPSZIKOSVMGLEUKKBZOZQNVNLHLDOQPRPVTHTZDNMXQKTHKGCPSTXKMDMGJIJXGNIULPQQLPYREEWTLEUIUMIYBDNJRSARUJBTVXDWUWOOGSSBZPOYHDAHOL");
    msg.value = 57U;

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
    msg.setTimeStamp(0.3736802789767615);
    msg.setSource(48858U);
    msg.setSourceEntity(121U);
    msg.setDestination(52764U);
    msg.setDestinationEntity(169U);
    msg.name.assign("MLUCBMQVRYWPEVFVNHBBLFHGDXVSSZQ");
    msg.value = 156U;

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
    msg.setTimeStamp(0.6394330532174725);
    msg.setSource(14794U);
    msg.setSourceEntity(198U);
    msg.setDestination(13867U);
    msg.setDestinationEntity(115U);
    msg.name.assign("VIFGXZGUZVCPASDIOFSALHLNSJVJZJEBKIOYPLXRVWJYEKPQRUGUFHSMUVLNEMLTRYRKHFUZUQVXMZKGAKXSEKZYDPDJRXZT");
    msg.value = 225U;

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
    msg.setTimeStamp(0.894819817498297);
    msg.setSource(27302U);
    msg.setSourceEntity(32U);
    msg.setDestination(52389U);
    msg.setDestinationEntity(0U);
    msg.id = 35U;
    msg.period = 2539308354U;
    msg.duty_cycle = 3267913887U;

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
    msg.setTimeStamp(0.16604662334148557);
    msg.setSource(42499U);
    msg.setSourceEntity(62U);
    msg.setDestination(28741U);
    msg.setDestinationEntity(193U);
    msg.id = 53U;
    msg.period = 554311792U;
    msg.duty_cycle = 1348696391U;

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
    msg.setTimeStamp(0.3340732041057456);
    msg.setSource(29384U);
    msg.setSourceEntity(241U);
    msg.setDestination(6451U);
    msg.setDestinationEntity(142U);
    msg.id = 108U;
    msg.period = 431910546U;
    msg.duty_cycle = 406705686U;

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
    msg.setTimeStamp(0.5174308071940567);
    msg.setSource(23669U);
    msg.setSourceEntity(90U);
    msg.setDestination(39854U);
    msg.setDestinationEntity(35U);
    msg.id = 85U;
    msg.period = 2709355746U;
    msg.duty_cycle = 3470771719U;

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
    msg.setTimeStamp(0.49601134589133733);
    msg.setSource(39252U);
    msg.setSourceEntity(101U);
    msg.setDestination(18399U);
    msg.setDestinationEntity(136U);
    msg.id = 86U;
    msg.period = 2487341010U;
    msg.duty_cycle = 2082614984U;

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
    msg.setTimeStamp(0.3187240373983389);
    msg.setSource(46857U);
    msg.setSourceEntity(144U);
    msg.setDestination(57787U);
    msg.setDestinationEntity(111U);
    msg.id = 251U;
    msg.period = 693416311U;
    msg.duty_cycle = 2375386182U;

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
    msg.setTimeStamp(0.12403853518814978);
    msg.setSource(19432U);
    msg.setSourceEntity(42U);
    msg.setDestination(60146U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.21427962982219761;
    msg.lon = 0.8395791975714431;
    msg.height = 0.920406045869494;
    msg.x = 0.07108518188567126;
    msg.y = 0.3718884342628713;
    msg.z = 0.5431450904061615;
    msg.phi = 0.5150295973412411;
    msg.theta = 0.2477631292593433;
    msg.psi = 0.5689830528452653;
    msg.u = 0.9169172025424175;
    msg.v = 0.26431168744838196;
    msg.w = 0.4165307818450813;
    msg.vx = 0.16312024207139764;
    msg.vy = 0.03925636005702349;
    msg.vz = 0.5906800739209609;
    msg.p = 0.674892975479831;
    msg.q = 0.7831237630598358;
    msg.r = 0.4193843745825717;
    msg.depth = 0.13185823339099478;
    msg.alt = 0.5962143794448446;

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
    msg.setTimeStamp(0.5593431306995664);
    msg.setSource(52933U);
    msg.setSourceEntity(51U);
    msg.setDestination(37856U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.24378669203724856;
    msg.lon = 0.3497319154916262;
    msg.height = 0.4960821474724185;
    msg.x = 0.3880516058421011;
    msg.y = 0.380355103031894;
    msg.z = 0.15830087990729347;
    msg.phi = 0.8805789730815923;
    msg.theta = 0.9743703475502252;
    msg.psi = 0.09237451235061922;
    msg.u = 0.5566939813374995;
    msg.v = 0.6144505577111067;
    msg.w = 0.35417183341816194;
    msg.vx = 0.7962231504567454;
    msg.vy = 0.9771408744958705;
    msg.vz = 0.6512122813700133;
    msg.p = 0.46327712321666026;
    msg.q = 0.9237585552453784;
    msg.r = 0.6507810581231418;
    msg.depth = 0.02081301531063784;
    msg.alt = 0.3569513381870629;

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
    msg.setTimeStamp(0.2568032373198553);
    msg.setSource(35885U);
    msg.setSourceEntity(82U);
    msg.setDestination(936U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.18240851263919233;
    msg.lon = 0.9059812425945603;
    msg.height = 0.13818379583068097;
    msg.x = 0.17597674737843205;
    msg.y = 0.9200699775468216;
    msg.z = 0.9469743183574674;
    msg.phi = 0.2719762535823471;
    msg.theta = 0.5467778523101718;
    msg.psi = 0.2535686786136989;
    msg.u = 0.5789621668983872;
    msg.v = 0.4928638118693808;
    msg.w = 0.8559186823907;
    msg.vx = 0.5149818674086446;
    msg.vy = 0.8134380149992488;
    msg.vz = 0.9934361772193779;
    msg.p = 0.15931036751096617;
    msg.q = 0.029251717521483367;
    msg.r = 0.6913013634029781;
    msg.depth = 0.4826621447307793;
    msg.alt = 0.09101687550987714;

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
    msg.setTimeStamp(0.9304642887829903);
    msg.setSource(13719U);
    msg.setSourceEntity(11U);
    msg.setDestination(26008U);
    msg.setDestinationEntity(213U);
    msg.x = 0.28772217239819986;
    msg.y = 0.7259849386006106;
    msg.z = 0.1562569393759884;

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
    msg.setTimeStamp(0.2115995763111307);
    msg.setSource(65400U);
    msg.setSourceEntity(180U);
    msg.setDestination(25127U);
    msg.setDestinationEntity(218U);
    msg.x = 0.1093109273060272;
    msg.y = 0.3502881490359112;
    msg.z = 0.8899885798701977;

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
    msg.setTimeStamp(0.49874287740236123);
    msg.setSource(35753U);
    msg.setSourceEntity(177U);
    msg.setDestination(16684U);
    msg.setDestinationEntity(142U);
    msg.x = 0.9091453611852658;
    msg.y = 0.8528196700107323;
    msg.z = 0.8438404015143642;

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
    msg.setTimeStamp(0.5747509401275935);
    msg.setSource(29705U);
    msg.setSourceEntity(84U);
    msg.setDestination(59958U);
    msg.setDestinationEntity(45U);
    msg.value = 0.7382229011639809;

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
    msg.setTimeStamp(0.2537728636099489);
    msg.setSource(235U);
    msg.setSourceEntity(32U);
    msg.setDestination(4643U);
    msg.setDestinationEntity(82U);
    msg.value = 0.5401208852780383;

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
    msg.setTimeStamp(0.1397923649987559);
    msg.setSource(19756U);
    msg.setSourceEntity(199U);
    msg.setDestination(22815U);
    msg.setDestinationEntity(14U);
    msg.value = 0.8578920039746935;

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
    msg.setTimeStamp(0.972667052347872);
    msg.setSource(48443U);
    msg.setSourceEntity(145U);
    msg.setDestination(54368U);
    msg.setDestinationEntity(100U);
    msg.value = 0.9892802723953074;

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
    msg.setTimeStamp(0.6137557903304183);
    msg.setSource(25018U);
    msg.setSourceEntity(5U);
    msg.setDestination(44965U);
    msg.setDestinationEntity(96U);
    msg.value = 0.3468081966594735;

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
    msg.setTimeStamp(0.3772431822822082);
    msg.setSource(42147U);
    msg.setSourceEntity(40U);
    msg.setDestination(29946U);
    msg.setDestinationEntity(159U);
    msg.value = 0.4074775739797909;

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
    msg.setTimeStamp(0.018582727066678073);
    msg.setSource(31965U);
    msg.setSourceEntity(60U);
    msg.setDestination(2658U);
    msg.setDestinationEntity(252U);
    msg.x = 0.7467047131204771;
    msg.y = 0.614176504677332;
    msg.z = 0.06550178980540233;
    msg.phi = 0.39481795155876376;
    msg.theta = 0.062403714689114875;
    msg.psi = 0.8547314909217513;
    msg.p = 0.6255834862152924;
    msg.q = 0.048790948526101774;
    msg.r = 0.633259029952884;
    msg.u = 0.7166797646791204;
    msg.v = 0.4220589528505162;
    msg.w = 0.7260782984903148;
    msg.bias_psi = 0.32881944683691966;
    msg.bias_r = 0.4804688957212764;

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
    msg.setTimeStamp(0.5550499306770592);
    msg.setSource(9703U);
    msg.setSourceEntity(107U);
    msg.setDestination(391U);
    msg.setDestinationEntity(71U);
    msg.x = 0.18981506099140322;
    msg.y = 0.8866524898227799;
    msg.z = 0.29251746836799597;
    msg.phi = 0.006129326536885804;
    msg.theta = 0.44995710196079863;
    msg.psi = 0.8774225986489721;
    msg.p = 0.5427465364268667;
    msg.q = 0.1282002884249247;
    msg.r = 0.5180275649743874;
    msg.u = 0.7011225310784608;
    msg.v = 0.3603409944843924;
    msg.w = 0.2987900613490494;
    msg.bias_psi = 0.06232322945620017;
    msg.bias_r = 0.4824537362954865;

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
    msg.setTimeStamp(0.9121393208881811);
    msg.setSource(35181U);
    msg.setSourceEntity(123U);
    msg.setDestination(53829U);
    msg.setDestinationEntity(96U);
    msg.x = 5.7460325374347754e-05;
    msg.y = 0.4664097364563077;
    msg.z = 0.9505524695476556;
    msg.phi = 0.2870143903180954;
    msg.theta = 0.2810025940745928;
    msg.psi = 0.18490585526291536;
    msg.p = 0.274694236210661;
    msg.q = 0.022460200578869327;
    msg.r = 0.0842809522581015;
    msg.u = 0.09661319449053829;
    msg.v = 0.48935973556168044;
    msg.w = 0.17694774809650426;
    msg.bias_psi = 0.7657927792659194;
    msg.bias_r = 0.15747610105486776;

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
    msg.setTimeStamp(0.01633770099191978);
    msg.setSource(13158U);
    msg.setSourceEntity(85U);
    msg.setDestination(42388U);
    msg.setDestinationEntity(85U);
    msg.bias_psi = 0.6461213141578944;
    msg.bias_r = 0.18125844476580488;
    msg.cog = 0.8721999216538017;
    msg.cyaw = 0.6152484391277347;
    msg.lbl_rej_level = 0.05629442706206056;
    msg.gps_rej_level = 0.3031982106518072;
    msg.custom_x = 0.8184470183710325;
    msg.custom_y = 0.6869184203535365;
    msg.custom_z = 0.0377773182417559;

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
    msg.setTimeStamp(0.010797736949870518);
    msg.setSource(15590U);
    msg.setSourceEntity(212U);
    msg.setDestination(16915U);
    msg.setDestinationEntity(48U);
    msg.bias_psi = 0.5833839896081502;
    msg.bias_r = 0.9946767037815428;
    msg.cog = 0.045581574564099836;
    msg.cyaw = 0.8186882490718983;
    msg.lbl_rej_level = 0.8154308006454878;
    msg.gps_rej_level = 0.4185327453708949;
    msg.custom_x = 0.40009404661149706;
    msg.custom_y = 0.4925916576563506;
    msg.custom_z = 0.052301979787559905;

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
    msg.setTimeStamp(0.6164283539985406);
    msg.setSource(10184U);
    msg.setSourceEntity(228U);
    msg.setDestination(8311U);
    msg.setDestinationEntity(30U);
    msg.bias_psi = 0.10210253230102517;
    msg.bias_r = 0.020429478544282897;
    msg.cog = 0.4586387631828869;
    msg.cyaw = 0.4063776665754353;
    msg.lbl_rej_level = 0.40075000984975573;
    msg.gps_rej_level = 0.626733911406492;
    msg.custom_x = 0.34744287985598454;
    msg.custom_y = 0.47026449963754036;
    msg.custom_z = 0.9869403805803282;

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
    msg.setTimeStamp(0.5590057482207056);
    msg.setSource(51475U);
    msg.setSourceEntity(118U);
    msg.setDestination(21241U);
    msg.setDestinationEntity(235U);
    msg.utc_time = 0.15698276878732853;
    msg.reason = 69U;

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
    msg.setTimeStamp(0.7953622523374084);
    msg.setSource(34566U);
    msg.setSourceEntity(53U);
    msg.setDestination(59430U);
    msg.setDestinationEntity(12U);
    msg.utc_time = 0.20875728091113643;
    msg.reason = 187U;

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
    msg.setTimeStamp(0.6816257895630266);
    msg.setSource(13346U);
    msg.setSourceEntity(229U);
    msg.setDestination(45687U);
    msg.setDestinationEntity(166U);
    msg.utc_time = 0.43683104178861054;
    msg.reason = 156U;

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
    msg.setTimeStamp(0.3104728417392796);
    msg.setSource(45162U);
    msg.setSourceEntity(124U);
    msg.setDestination(22656U);
    msg.setDestinationEntity(71U);
    msg.id = 161U;
    msg.range = 0.3228947773139115;
    msg.acceptance = 90U;

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
    msg.setTimeStamp(0.5662955037763852);
    msg.setSource(43929U);
    msg.setSourceEntity(54U);
    msg.setDestination(32234U);
    msg.setDestinationEntity(213U);
    msg.id = 181U;
    msg.range = 0.17150874969905805;
    msg.acceptance = 189U;

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
    msg.setTimeStamp(0.023017718573515533);
    msg.setSource(34813U);
    msg.setSourceEntity(128U);
    msg.setDestination(58842U);
    msg.setDestinationEntity(183U);
    msg.id = 157U;
    msg.range = 0.962689122988799;
    msg.acceptance = 104U;

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
    msg.setTimeStamp(0.5747265834683781);
    msg.setSource(51905U);
    msg.setSourceEntity(204U);
    msg.setDestination(53488U);
    msg.setDestinationEntity(54U);
    msg.type = 228U;
    msg.reason = 50U;
    msg.value = 0.05867355709404665;
    msg.timestep = 0.8704235602407527;

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
    msg.setTimeStamp(0.8657040601320131);
    msg.setSource(19809U);
    msg.setSourceEntity(190U);
    msg.setDestination(38611U);
    msg.setDestinationEntity(200U);
    msg.type = 185U;
    msg.reason = 33U;
    msg.value = 0.15406694683131272;
    msg.timestep = 0.9020838705895363;

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
    msg.setTimeStamp(0.10756595152369774);
    msg.setSource(48239U);
    msg.setSourceEntity(252U);
    msg.setDestination(47321U);
    msg.setDestinationEntity(118U);
    msg.type = 24U;
    msg.reason = 113U;
    msg.value = 0.2670403121830335;
    msg.timestep = 0.8000968867869214;

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
    msg.setTimeStamp(0.19228409820044923);
    msg.setSource(60228U);
    msg.setSourceEntity(244U);
    msg.setDestination(22820U);
    msg.setDestinationEntity(160U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZUKHGJDIYQCIPIYUECMTTKGSQXEMMRGPQZZEOFBJQMCPCFNHTNATGOWD");
    tmp_msg_0.lat = 0.6781249573050085;
    tmp_msg_0.lon = 0.4725554397737479;
    tmp_msg_0.depth = 0.19526570680523836;
    tmp_msg_0.query_channel = 244U;
    tmp_msg_0.reply_channel = 10U;
    tmp_msg_0.transponder_delay = 71U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6173002440315928;
    msg.y = 0.1706555775915779;
    msg.var_x = 0.8385520048650801;
    msg.var_y = 0.32200103677471803;
    msg.distance = 0.5470862750442818;

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
    msg.setTimeStamp(0.4665370001021071);
    msg.setSource(20493U);
    msg.setSourceEntity(201U);
    msg.setDestination(25180U);
    msg.setDestinationEntity(89U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HJDTEOKEAGRJLIGSQMNASTEYYTWUUMEFNBYGNZJNYPEPSNZDKTVPFYIQXDSVBCQZVULPYLNOFYHOCZVWHWNFXSR");
    tmp_msg_0.lat = 0.023959887773076782;
    tmp_msg_0.lon = 0.5583613419419589;
    tmp_msg_0.depth = 0.5734670083718953;
    tmp_msg_0.query_channel = 67U;
    tmp_msg_0.reply_channel = 167U;
    tmp_msg_0.transponder_delay = 76U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4572606475172084;
    msg.y = 0.6394971749765685;
    msg.var_x = 0.3377563444414857;
    msg.var_y = 0.010605421780290891;
    msg.distance = 0.9695350014783993;

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
    msg.setTimeStamp(0.6573549748688146);
    msg.setSource(19603U);
    msg.setSourceEntity(141U);
    msg.setDestination(19635U);
    msg.setDestinationEntity(177U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LWEYHVZJZEKZBPWAYCQHYIXKIXREJLOQUXDJFYOONEJFRIUPXWGNNCZYSZYCDLCUAJLZOTAEUPIRUAFBLMXSIFDTWWHYRGSBZYEPTNNPSTVOFOQWRWHZLHTJNGPDECCMUWPX");
    tmp_msg_0.lat = 0.9406728723625357;
    tmp_msg_0.lon = 0.22348548430064885;
    tmp_msg_0.depth = 0.7361978411219244;
    tmp_msg_0.query_channel = 20U;
    tmp_msg_0.reply_channel = 53U;
    tmp_msg_0.transponder_delay = 191U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8077877929679047;
    msg.y = 0.08605938622789078;
    msg.var_x = 0.8940179499098341;
    msg.var_y = 0.16167745535568634;
    msg.distance = 0.9649241098232607;

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
    msg.setTimeStamp(0.23317540566042938);
    msg.setSource(56461U);
    msg.setSourceEntity(83U);
    msg.setDestination(53186U);
    msg.setDestinationEntity(90U);
    msg.state = 86U;

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
    msg.setTimeStamp(0.3526745243667666);
    msg.setSource(15373U);
    msg.setSourceEntity(204U);
    msg.setDestination(5703U);
    msg.setDestinationEntity(26U);
    msg.state = 188U;

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
    msg.setTimeStamp(0.6436690530811282);
    msg.setSource(61460U);
    msg.setSourceEntity(193U);
    msg.setDestination(31682U);
    msg.setDestinationEntity(14U);
    msg.state = 12U;

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
    msg.setTimeStamp(0.836157550078177);
    msg.setSource(12672U);
    msg.setSourceEntity(140U);
    msg.setDestination(30162U);
    msg.setDestinationEntity(47U);
    msg.x = 0.5366072194446447;
    msg.y = 0.5851533007625407;
    msg.z = 0.1317315199571375;

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
    msg.setTimeStamp(0.8526895048050448);
    msg.setSource(44353U);
    msg.setSourceEntity(24U);
    msg.setDestination(17361U);
    msg.setDestinationEntity(92U);
    msg.x = 0.544525360574798;
    msg.y = 0.01353358849284969;
    msg.z = 0.42178007942995366;

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
    msg.setTimeStamp(0.9802839948395348);
    msg.setSource(50382U);
    msg.setSourceEntity(36U);
    msg.setDestination(26756U);
    msg.setDestinationEntity(224U);
    msg.x = 0.16274502510797162;
    msg.y = 0.12277842865768795;
    msg.z = 0.09183470616435874;

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
    msg.setTimeStamp(0.7336499618395186);
    msg.setSource(3182U);
    msg.setSourceEntity(116U);
    msg.setDestination(14724U);
    msg.setDestinationEntity(205U);
    msg.va = 0.32578689290284923;
    msg.aoa = 0.6911651281444297;
    msg.ssa = 0.7945930921118817;

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
    msg.setTimeStamp(0.31461295080592877);
    msg.setSource(23109U);
    msg.setSourceEntity(54U);
    msg.setDestination(24626U);
    msg.setDestinationEntity(61U);
    msg.va = 0.4328039882247259;
    msg.aoa = 0.5209351536448658;
    msg.ssa = 0.9480911791039295;

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
    msg.setTimeStamp(0.9266015468803349);
    msg.setSource(3891U);
    msg.setSourceEntity(110U);
    msg.setDestination(28299U);
    msg.setDestinationEntity(234U);
    msg.va = 0.7870893968968318;
    msg.aoa = 0.162690065634864;
    msg.ssa = 0.7117296226070894;

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
    msg.setTimeStamp(0.48460773004561297);
    msg.setSource(8903U);
    msg.setSourceEntity(154U);
    msg.setDestination(3217U);
    msg.setDestinationEntity(222U);
    msg.value = 0.4083687554980372;

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
    msg.setTimeStamp(0.5184955506406991);
    msg.setSource(34343U);
    msg.setSourceEntity(77U);
    msg.setDestination(50629U);
    msg.setDestinationEntity(83U);
    msg.value = 0.08280393077537263;

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
    msg.setTimeStamp(0.3341794403044054);
    msg.setSource(58712U);
    msg.setSourceEntity(217U);
    msg.setDestination(20239U);
    msg.setDestinationEntity(46U);
    msg.value = 0.6168492564240013;

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
    msg.setTimeStamp(0.04965845219580234);
    msg.setSource(17959U);
    msg.setSourceEntity(115U);
    msg.setDestination(12348U);
    msg.setDestinationEntity(149U);
    msg.value = 0.37326209835622737;
    msg.z_units = 121U;

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
    msg.setTimeStamp(0.0649706576328718);
    msg.setSource(23938U);
    msg.setSourceEntity(94U);
    msg.setDestination(46122U);
    msg.setDestinationEntity(57U);
    msg.value = 0.3980217168178023;
    msg.z_units = 13U;

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
    msg.setTimeStamp(0.16387965892363987);
    msg.setSource(56730U);
    msg.setSourceEntity(152U);
    msg.setDestination(45138U);
    msg.setDestinationEntity(76U);
    msg.value = 0.20873428500411173;
    msg.z_units = 145U;

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
    msg.setTimeStamp(0.637960350515865);
    msg.setSource(58435U);
    msg.setSourceEntity(212U);
    msg.setDestination(6513U);
    msg.setDestinationEntity(155U);
    msg.value = 0.5556427418349209;
    msg.speed_units = 121U;

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
    msg.setTimeStamp(0.5444077987448899);
    msg.setSource(38925U);
    msg.setSourceEntity(196U);
    msg.setDestination(29157U);
    msg.setDestinationEntity(74U);
    msg.value = 0.6583012217014473;
    msg.speed_units = 201U;

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
    msg.setTimeStamp(0.5417731806819903);
    msg.setSource(16996U);
    msg.setSourceEntity(28U);
    msg.setDestination(19629U);
    msg.setDestinationEntity(124U);
    msg.value = 0.7800724762825789;
    msg.speed_units = 63U;

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
    msg.setTimeStamp(0.4769559660054137);
    msg.setSource(27728U);
    msg.setSourceEntity(66U);
    msg.setDestination(1317U);
    msg.setDestinationEntity(134U);
    msg.value = 0.914748989714634;

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
    msg.setTimeStamp(0.709788773270061);
    msg.setSource(27539U);
    msg.setSourceEntity(156U);
    msg.setDestination(58012U);
    msg.setDestinationEntity(178U);
    msg.value = 0.881098120924202;

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
    msg.setTimeStamp(0.25947672135124444);
    msg.setSource(14675U);
    msg.setSourceEntity(175U);
    msg.setDestination(27891U);
    msg.setDestinationEntity(112U);
    msg.value = 0.8375884631326184;

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
    msg.setTimeStamp(0.4077950758478358);
    msg.setSource(38078U);
    msg.setSourceEntity(193U);
    msg.setDestination(31966U);
    msg.setDestinationEntity(246U);
    msg.value = 0.4848210725912384;

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
    msg.setTimeStamp(0.9677502899674929);
    msg.setSource(33127U);
    msg.setSourceEntity(21U);
    msg.setDestination(25417U);
    msg.setDestinationEntity(247U);
    msg.value = 0.0642275381099211;

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
    msg.setTimeStamp(0.7115060588036286);
    msg.setSource(51376U);
    msg.setSourceEntity(197U);
    msg.setDestination(56129U);
    msg.setDestinationEntity(80U);
    msg.value = 0.3409034491860162;

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
    msg.setTimeStamp(0.6020589161331075);
    msg.setSource(39090U);
    msg.setSourceEntity(247U);
    msg.setDestination(62352U);
    msg.setDestinationEntity(14U);
    msg.value = 0.6118027687984172;

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
    msg.setTimeStamp(0.3366792208386672);
    msg.setSource(36111U);
    msg.setSourceEntity(123U);
    msg.setDestination(18966U);
    msg.setDestinationEntity(223U);
    msg.value = 0.5200567265914351;

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
    msg.setTimeStamp(0.07328283552576009);
    msg.setSource(58004U);
    msg.setSourceEntity(149U);
    msg.setDestination(65227U);
    msg.setDestinationEntity(105U);
    msg.value = 0.9761835903155979;

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
    msg.setTimeStamp(0.9597618337214385);
    msg.setSource(9664U);
    msg.setSourceEntity(197U);
    msg.setDestination(25539U);
    msg.setDestinationEntity(48U);
    msg.path_ref = 2426661302U;
    msg.start_lat = 0.3077020902419285;
    msg.start_lon = 0.7791919667217487;
    msg.start_z = 0.7131333175872486;
    msg.start_z_units = 51U;
    msg.end_lat = 0.11657500862681025;
    msg.end_lon = 0.4736825908258182;
    msg.end_z = 0.8992025192192042;
    msg.end_z_units = 38U;
    msg.speed = 0.7761796548710801;
    msg.speed_units = 249U;
    msg.lradius = 0.40172040350961236;
    msg.flags = 211U;

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
    msg.setTimeStamp(0.7024600009163143);
    msg.setSource(63493U);
    msg.setSourceEntity(109U);
    msg.setDestination(33496U);
    msg.setDestinationEntity(55U);
    msg.path_ref = 2261348898U;
    msg.start_lat = 0.7045285376901289;
    msg.start_lon = 0.7269207277134221;
    msg.start_z = 0.9018523136960407;
    msg.start_z_units = 115U;
    msg.end_lat = 0.3562615312484272;
    msg.end_lon = 0.5919813964944023;
    msg.end_z = 0.050990859956181134;
    msg.end_z_units = 9U;
    msg.speed = 0.2846015546159296;
    msg.speed_units = 88U;
    msg.lradius = 0.43494835966773815;
    msg.flags = 114U;

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
    msg.setTimeStamp(0.7990592076887486);
    msg.setSource(19113U);
    msg.setSourceEntity(170U);
    msg.setDestination(42868U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 3619590722U;
    msg.start_lat = 0.036315109125124145;
    msg.start_lon = 0.80588098019676;
    msg.start_z = 0.5240211383655249;
    msg.start_z_units = 162U;
    msg.end_lat = 0.9498252557814746;
    msg.end_lon = 0.8028843403084092;
    msg.end_z = 0.6331437911564891;
    msg.end_z_units = 119U;
    msg.speed = 0.9071486652790637;
    msg.speed_units = 184U;
    msg.lradius = 0.7843026908511392;
    msg.flags = 193U;

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
    msg.setTimeStamp(0.8697596754457156);
    msg.setSource(51432U);
    msg.setSourceEntity(28U);
    msg.setDestination(50824U);
    msg.setDestinationEntity(249U);
    msg.x = 0.5834370715470025;
    msg.y = 0.5670202586538009;
    msg.z = 0.456772187666304;
    msg.k = 0.7699985889638145;
    msg.m = 0.17276667581816585;
    msg.n = 0.14848128454408482;
    msg.flags = 231U;

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
    msg.setTimeStamp(0.21389899149992753);
    msg.setSource(14393U);
    msg.setSourceEntity(190U);
    msg.setDestination(20632U);
    msg.setDestinationEntity(204U);
    msg.x = 0.009310969304965111;
    msg.y = 0.5817972040003393;
    msg.z = 0.8557720648494673;
    msg.k = 0.7139665374601928;
    msg.m = 0.29776518311669153;
    msg.n = 0.5050421516037752;
    msg.flags = 238U;

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
    msg.setTimeStamp(0.42751243083870083);
    msg.setSource(22320U);
    msg.setSourceEntity(99U);
    msg.setDestination(27221U);
    msg.setDestinationEntity(21U);
    msg.x = 0.10763750901902625;
    msg.y = 0.7226718181451792;
    msg.z = 0.8836847267201815;
    msg.k = 0.7608027573656124;
    msg.m = 0.14979955499535325;
    msg.n = 0.9079158092071858;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.07019979921006525);
    msg.setSource(55465U);
    msg.setSourceEntity(215U);
    msg.setDestination(39451U);
    msg.setDestinationEntity(84U);
    msg.value = 0.8070716151950893;

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
    msg.setTimeStamp(0.26291308800350666);
    msg.setSource(32845U);
    msg.setSourceEntity(153U);
    msg.setDestination(59828U);
    msg.setDestinationEntity(111U);
    msg.value = 0.5341206560669028;

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
    msg.setTimeStamp(0.7597030841992195);
    msg.setSource(25816U);
    msg.setSourceEntity(151U);
    msg.setDestination(3715U);
    msg.setDestinationEntity(63U);
    msg.value = 0.7706544918006204;

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
    msg.setTimeStamp(0.3283490517228205);
    msg.setSource(46953U);
    msg.setSourceEntity(188U);
    msg.setDestination(39857U);
    msg.setDestinationEntity(184U);
    msg.u = 0.8747097662692145;
    msg.v = 0.6889797112716347;
    msg.w = 0.2948100086226022;
    msg.p = 0.9890226581107128;
    msg.q = 0.011700729567830082;
    msg.r = 0.33327592207317425;
    msg.flags = 197U;

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
    msg.setTimeStamp(0.6852179953957735);
    msg.setSource(65391U);
    msg.setSourceEntity(6U);
    msg.setDestination(43707U);
    msg.setDestinationEntity(201U);
    msg.u = 0.8094557177684856;
    msg.v = 0.20314992944533306;
    msg.w = 0.9057093496879668;
    msg.p = 0.7602222705049527;
    msg.q = 0.28077106182353273;
    msg.r = 0.6577090617380015;
    msg.flags = 172U;

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
    msg.setTimeStamp(0.6617471958293281);
    msg.setSource(7764U);
    msg.setSourceEntity(10U);
    msg.setDestination(9044U);
    msg.setDestinationEntity(102U);
    msg.u = 0.08360387486673404;
    msg.v = 0.5950016757151924;
    msg.w = 0.9358258270902454;
    msg.p = 0.8880263875964025;
    msg.q = 0.6134569773066859;
    msg.r = 0.9199298292892846;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.4267132826482455);
    msg.setSource(12066U);
    msg.setSourceEntity(2U);
    msg.setDestination(56598U);
    msg.setDestinationEntity(181U);
    msg.path_ref = 2318060439U;
    msg.start_lat = 0.08308951286417476;
    msg.start_lon = 0.06281821610174876;
    msg.start_z = 0.6296650055261337;
    msg.start_z_units = 45U;
    msg.end_lat = 0.10678068866189983;
    msg.end_lon = 0.9445131495816161;
    msg.end_z = 0.41646598747123786;
    msg.end_z_units = 78U;
    msg.lradius = 0.6716436400321262;
    msg.flags = 3U;
    msg.x = 0.7449950438687233;
    msg.y = 0.16913505728450884;
    msg.z = 0.9556441331170096;
    msg.vx = 0.9141359271410433;
    msg.vy = 0.7648180173560865;
    msg.vz = 0.264833086198234;
    msg.course_error = 0.4262844774120367;
    msg.eta = 34162U;

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
    msg.setTimeStamp(0.7158446125809094);
    msg.setSource(55134U);
    msg.setSourceEntity(129U);
    msg.setDestination(1855U);
    msg.setDestinationEntity(13U);
    msg.path_ref = 171931594U;
    msg.start_lat = 0.36239652011552437;
    msg.start_lon = 0.5938024442913113;
    msg.start_z = 0.015060729393211125;
    msg.start_z_units = 103U;
    msg.end_lat = 0.47049781567172366;
    msg.end_lon = 0.41181663301389204;
    msg.end_z = 0.7616572059461515;
    msg.end_z_units = 187U;
    msg.lradius = 0.15122159537428004;
    msg.flags = 23U;
    msg.x = 0.3288174390607488;
    msg.y = 0.09281305018947061;
    msg.z = 0.7486458700813303;
    msg.vx = 0.9391759580072994;
    msg.vy = 0.32521012136176575;
    msg.vz = 0.38081346863379206;
    msg.course_error = 0.16807011746685518;
    msg.eta = 5045U;

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
    msg.setTimeStamp(0.8445804872988465);
    msg.setSource(62918U);
    msg.setSourceEntity(114U);
    msg.setDestination(60016U);
    msg.setDestinationEntity(5U);
    msg.path_ref = 360789986U;
    msg.start_lat = 0.3929733340033672;
    msg.start_lon = 0.8025603929371836;
    msg.start_z = 0.3241808819183515;
    msg.start_z_units = 143U;
    msg.end_lat = 0.22388519143512575;
    msg.end_lon = 0.2835195363941013;
    msg.end_z = 0.6784486842451277;
    msg.end_z_units = 95U;
    msg.lradius = 0.9570778048332728;
    msg.flags = 219U;
    msg.x = 0.18314844600822344;
    msg.y = 0.2335711709028736;
    msg.z = 0.5521713645935143;
    msg.vx = 0.9770614561200872;
    msg.vy = 0.502919967362688;
    msg.vz = 0.39033672639948025;
    msg.course_error = 0.5083468614230445;
    msg.eta = 27089U;

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
    msg.setTimeStamp(0.32517319277214707);
    msg.setSource(2469U);
    msg.setSourceEntity(81U);
    msg.setDestination(12611U);
    msg.setDestinationEntity(196U);
    msg.k = 0.9213505258567963;
    msg.m = 0.6459200966202366;
    msg.n = 0.04799875473805437;

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
    msg.setTimeStamp(0.9405897246412451);
    msg.setSource(2588U);
    msg.setSourceEntity(150U);
    msg.setDestination(18655U);
    msg.setDestinationEntity(133U);
    msg.k = 0.6684215115391634;
    msg.m = 0.996718857115373;
    msg.n = 0.9013804846922698;

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
    msg.setTimeStamp(0.01886560457615427);
    msg.setSource(55135U);
    msg.setSourceEntity(217U);
    msg.setDestination(44619U);
    msg.setDestinationEntity(171U);
    msg.k = 0.33525214774346956;
    msg.m = 0.4334881732269541;
    msg.n = 0.3987104852036225;

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
    msg.setTimeStamp(0.9765349197599016);
    msg.setSource(2045U);
    msg.setSourceEntity(251U);
    msg.setDestination(20546U);
    msg.setDestinationEntity(121U);
    msg.p = 0.7110948753945538;
    msg.i = 0.21723265173945394;
    msg.d = 0.0590674735290555;
    msg.a = 0.992105360963497;

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
    msg.setTimeStamp(0.8946541298362083);
    msg.setSource(20766U);
    msg.setSourceEntity(95U);
    msg.setDestination(65173U);
    msg.setDestinationEntity(163U);
    msg.p = 0.44036332546710943;
    msg.i = 0.6326569118056348;
    msg.d = 0.5329314438997377;
    msg.a = 0.08792042122615507;

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
    msg.setTimeStamp(0.29594115128457854);
    msg.setSource(50416U);
    msg.setSourceEntity(71U);
    msg.setDestination(38140U);
    msg.setDestinationEntity(237U);
    msg.p = 0.11401630050096945;
    msg.i = 0.41072203721202105;
    msg.d = 0.42380281229770833;
    msg.a = 0.44892367343509676;

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
    msg.setTimeStamp(0.9966277348200103);
    msg.setSource(44952U);
    msg.setSourceEntity(129U);
    msg.setDestination(6032U);
    msg.setDestinationEntity(214U);
    msg.op = 179U;

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
    msg.setTimeStamp(0.7298798192742617);
    msg.setSource(65262U);
    msg.setSourceEntity(29U);
    msg.setDestination(54387U);
    msg.setDestinationEntity(42U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.07733273689055464);
    msg.setSource(3634U);
    msg.setSourceEntity(194U);
    msg.setDestination(15248U);
    msg.setDestinationEntity(168U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.09990836035017392);
    msg.setSource(38002U);
    msg.setSourceEntity(241U);
    msg.setDestination(13640U);
    msg.setDestinationEntity(212U);
    msg.x = 0.6647871330474305;
    msg.y = 0.028142198392156703;
    msg.z = 0.5831408406988078;
    msg.vx = 0.7159910534328868;
    msg.vy = 0.1210876932899867;
    msg.vz = 0.04700098490155835;
    msg.ax = 0.05602862915607887;
    msg.ay = 0.19291603478875086;
    msg.az = 0.6401918845819027;
    msg.flags = 64198U;

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
    msg.setTimeStamp(0.11429800767839782);
    msg.setSource(40660U);
    msg.setSourceEntity(204U);
    msg.setDestination(6804U);
    msg.setDestinationEntity(187U);
    msg.x = 0.609488705430472;
    msg.y = 0.2324718391412658;
    msg.z = 0.1055719972544028;
    msg.vx = 0.6085667332966824;
    msg.vy = 0.725134840958912;
    msg.vz = 0.020537818457095458;
    msg.ax = 0.5474666979620709;
    msg.ay = 0.052666676888079356;
    msg.az = 0.3729512935755953;
    msg.flags = 33355U;

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
    msg.setTimeStamp(0.8415479382905177);
    msg.setSource(44973U);
    msg.setSourceEntity(125U);
    msg.setDestination(33783U);
    msg.setDestinationEntity(201U);
    msg.x = 0.07658585358665371;
    msg.y = 0.6315671977485745;
    msg.z = 0.2744111830825464;
    msg.vx = 0.20958552838439137;
    msg.vy = 0.5510673069362692;
    msg.vz = 0.36410236111237404;
    msg.ax = 0.8081607324659427;
    msg.ay = 0.9021101487781368;
    msg.az = 0.5050317325051826;
    msg.flags = 17537U;

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
    msg.setTimeStamp(0.09898096150373947);
    msg.setSource(27244U);
    msg.setSourceEntity(43U);
    msg.setDestination(2069U);
    msg.setDestinationEntity(74U);
    msg.value = 0.5265312349209653;

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
    msg.setTimeStamp(0.9516344462827167);
    msg.setSource(7140U);
    msg.setSourceEntity(200U);
    msg.setDestination(26103U);
    msg.setDestinationEntity(186U);
    msg.value = 0.4661443507801595;

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
    msg.setTimeStamp(0.4854324747488009);
    msg.setSource(58429U);
    msg.setSourceEntity(132U);
    msg.setDestination(8512U);
    msg.setDestinationEntity(17U);
    msg.value = 0.3128415381117807;

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
    msg.setTimeStamp(0.5009741706726977);
    msg.setSource(26464U);
    msg.setSourceEntity(165U);
    msg.setDestination(38503U);
    msg.setDestinationEntity(132U);
    msg.timeout = 33774U;
    msg.lat = 0.5386993025624138;
    msg.lon = 0.3347841284130858;
    msg.z = 0.2549887181319255;
    msg.z_units = 141U;
    msg.speed = 0.6364710357367601;
    msg.speed_units = 130U;
    msg.roll = 0.8049617194771809;
    msg.pitch = 0.7824668468241713;
    msg.yaw = 0.2872210755760104;
    msg.custom.assign("LCFYFFNJFWAVVIFUSGLRBEGDFZWUBLAPNKIYOSXHPNETZEIZVCHPQSSWQIUEUYGNKSFBOKGQIMJTDNYYQBIDFJJJONUPBMLUQRMWZIRFRJQTUMYHKKNGOKRQPMCGEBSACMJPBXZLICZXKDIAVAKSXTMORHOEHYGPIZPADXVKQAMURTOZJLBDCWQZXCMYTDJKOXWAXHCSF");

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
    msg.setTimeStamp(0.3715007881894652);
    msg.setSource(43420U);
    msg.setSourceEntity(120U);
    msg.setDestination(21427U);
    msg.setDestinationEntity(209U);
    msg.timeout = 54900U;
    msg.lat = 0.14912423949251485;
    msg.lon = 0.4012788171249122;
    msg.z = 0.6300841669043578;
    msg.z_units = 56U;
    msg.speed = 0.4743145588675146;
    msg.speed_units = 220U;
    msg.roll = 0.37657444074940694;
    msg.pitch = 0.274951701920386;
    msg.yaw = 0.7214317717797724;
    msg.custom.assign("MYWBSOQHXZCELVPFJEXFQBYVRNWQBGDYVYPXBCQLUPLAFGSSWJISFEDZIORGHAQYNACJEDNIKMVOBWEXTOOBRKWDURCWCPIIWSHPXCLPMDJQFFKASRZZKJWNIVMKFHUMQPYDNNWHJFMRXVUZDMYUTGELTVNHDIUIIZRZESEAPTTUOZ");

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
    msg.setTimeStamp(0.9278437564356062);
    msg.setSource(5325U);
    msg.setSourceEntity(4U);
    msg.setDestination(12958U);
    msg.setDestinationEntity(129U);
    msg.timeout = 26148U;
    msg.lat = 0.93796469684033;
    msg.lon = 0.9160483229001759;
    msg.z = 0.9131336472022473;
    msg.z_units = 80U;
    msg.speed = 0.7701187555144985;
    msg.speed_units = 37U;
    msg.roll = 0.1558781459765216;
    msg.pitch = 0.6778187143875499;
    msg.yaw = 0.2008022012957963;
    msg.custom.assign("ONCLMWMXPRCRYUVLEGLCIZXAZKHYBOFRGQXDMSOPKKAWDFJWMQVXQWGEZCJJTFRUWPHHGFIVOFKSDLODPNYJSDTASJYBCIMWLZOURYRLIUZCQNNGWCZXDMZXKPMPNPUHDAQDHBVEMJEOVBONYLWJKTHQOFXHBTGIGLNNDBA");

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
    msg.setTimeStamp(0.29872510797275664);
    msg.setSource(7643U);
    msg.setSourceEntity(143U);
    msg.setDestination(3174U);
    msg.setDestinationEntity(178U);
    msg.timeout = 52843U;
    msg.lat = 0.8618143963166852;
    msg.lon = 0.6296278279734968;
    msg.z = 0.35727230351243633;
    msg.z_units = 69U;
    msg.speed = 0.7994812435771432;
    msg.speed_units = 137U;
    msg.duration = 34192U;
    msg.radius = 0.9610038075872737;
    msg.flags = 126U;
    msg.custom.assign("QTPAAFERSQOVFXLDJBWGGCRDZYVLHBHMXXEZQLWMVGOZCDUOERETIUEWBRHILEKEASPIMJWLOXWGSXTQJNXBGIHXTVKWFYCIUMAFBWMFPRPPGYUQXGUYWSTJJSHUNNIZDDNEHOBFPDBVGTFEQCOHKUABIAJPAONXCOWIMGPSNYJSDZYJLJHLROSYGKLQADMHSZ");

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
    msg.setTimeStamp(0.20476026898222977);
    msg.setSource(3058U);
    msg.setSourceEntity(183U);
    msg.setDestination(41274U);
    msg.setDestinationEntity(50U);
    msg.timeout = 648U;
    msg.lat = 0.6656440800229576;
    msg.lon = 0.28576747195282304;
    msg.z = 0.8015726633214292;
    msg.z_units = 5U;
    msg.speed = 0.4369045722192606;
    msg.speed_units = 139U;
    msg.duration = 57184U;
    msg.radius = 0.7605715443650974;
    msg.flags = 223U;
    msg.custom.assign("ZPBZWXIKBQPPBDAWFJXONPWGTYVTORNXEKUYXQZLSWUSAQVOHXRVKIDUOJADJEIJESFSFCRCMITZNPQZRGKHQDIBSNBKBDLDZRBKFUQDTOLUQYWCUYLBRTOIHFBVCNIYDOVLCFLISLRJLJOGIPTJCTZVFPWDEHVGVGHIWYNSMLTQAXMNYWGHXM");

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
    msg.setTimeStamp(0.15588301346248845);
    msg.setSource(32816U);
    msg.setSourceEntity(118U);
    msg.setDestination(60700U);
    msg.setDestinationEntity(16U);
    msg.timeout = 8939U;
    msg.lat = 0.23132998687882722;
    msg.lon = 0.7263715676059411;
    msg.z = 0.7971849812464177;
    msg.z_units = 39U;
    msg.speed = 0.9519262254550573;
    msg.speed_units = 74U;
    msg.duration = 32916U;
    msg.radius = 0.838938154947777;
    msg.flags = 132U;
    msg.custom.assign("FESIBKKSZIJAWLQBVTDAMKAEMKUPFNQFFXBRQUBZDIKAQFNHECJYSMWWRAGEK");

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
    msg.setTimeStamp(0.39408850615632085);
    msg.setSource(65381U);
    msg.setSourceEntity(75U);
    msg.setDestination(57851U);
    msg.setDestinationEntity(218U);
    msg.custom.assign("MQUYXENRITGOMYHJFBAPJIZASKWVDZGNOLSXMD");

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
    msg.setTimeStamp(0.3502430306837878);
    msg.setSource(41501U);
    msg.setSourceEntity(84U);
    msg.setDestination(28580U);
    msg.setDestinationEntity(67U);
    msg.custom.assign("OKQUPPKJZUBGROCTWCWRVYHNIIADPLEXEQAFRXVJBULDXXEFQUKYKMMAVUFHDWPQQGDGVSLCAIOHXQFTCSABICGWUTFRSQDICTJHUAERGMYLFWPRKLXCKGDJXVVOZLQSNUWEKPZJMGVERZPZYKPNOCQVYEHIGXFDYKMUSWWYHNGOZOLMOJWOESMOBRERBBV");

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
    msg.setTimeStamp(0.48612963435099177);
    msg.setSource(50596U);
    msg.setSourceEntity(248U);
    msg.setDestination(15227U);
    msg.setDestinationEntity(57U);
    msg.custom.assign("IVWIWVXPFQWRXYJVNAMJVENEVCWDQHMVXDAJXFESFJFYZPUPTHUWWJMTDOHFJQWAXNBGDFGIAEGGBANPQDBIDSFHWVQCKRPDYLKNZKLQBPZPFTCRFTGDLRQOUHDGYNQCLHPVZUKGCCTCZNQLBTTGEELYSIXZBYASKOBWOSSYPAUGESLGJZSHCCNMBZOXIXEJJIRJAOIMYANLNMVEHKHUHTILCZPFUVQTKKOORZKUL");

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
    msg.setTimeStamp(0.7162796253744212);
    msg.setSource(48602U);
    msg.setSourceEntity(201U);
    msg.setDestination(52561U);
    msg.setDestinationEntity(4U);
    msg.timeout = 35689U;
    msg.lat = 0.621906170301278;
    msg.lon = 0.04445310112721712;
    msg.z = 0.7069756647702528;
    msg.z_units = 13U;
    msg.duration = 52750U;
    msg.speed = 0.04097342265051784;
    msg.speed_units = 205U;
    msg.type = 158U;
    msg.radius = 0.2960122490373215;
    msg.length = 0.5028501708796845;
    msg.bearing = 0.28033611053244767;
    msg.direction = 131U;
    msg.custom.assign("IUGZPCSDJYARIMDOBQPGVC");

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
    msg.setTimeStamp(0.7704464655952259);
    msg.setSource(43311U);
    msg.setSourceEntity(47U);
    msg.setDestination(5740U);
    msg.setDestinationEntity(160U);
    msg.timeout = 32889U;
    msg.lat = 0.07702841755961276;
    msg.lon = 0.9840404062107044;
    msg.z = 0.32339052293027515;
    msg.z_units = 56U;
    msg.duration = 51249U;
    msg.speed = 0.5397667956851232;
    msg.speed_units = 32U;
    msg.type = 134U;
    msg.radius = 0.5243864585349195;
    msg.length = 0.5983389125631837;
    msg.bearing = 0.28118906600228366;
    msg.direction = 54U;
    msg.custom.assign("SHEETLMIHOTCTEPWWLGXUIZDFWZOQUQSAWJKRRENCBYVBQAOWCCPVMTMHMYOUDHPXOYRDAPYGPTFGEICOQMCGOKTUJJBRHIFNGUSJKEXGXXISABLRELSEHRGVBGVPFNTZKBUTNNCDOPDMZXJKDQTUFZKRZXJFMBDYWHNXBZCMODWQQNLTNJNWDJMYWYJLHVAFSQKDV");

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
    msg.setTimeStamp(0.5698005280873903);
    msg.setSource(56410U);
    msg.setSourceEntity(8U);
    msg.setDestination(37395U);
    msg.setDestinationEntity(178U);
    msg.timeout = 57987U;
    msg.lat = 0.9756487433385085;
    msg.lon = 0.09876952962621066;
    msg.z = 0.2959823269051729;
    msg.z_units = 31U;
    msg.duration = 46974U;
    msg.speed = 0.1419026371825025;
    msg.speed_units = 33U;
    msg.type = 97U;
    msg.radius = 0.36385174033754974;
    msg.length = 0.5194982935294556;
    msg.bearing = 0.8841538114783732;
    msg.direction = 36U;
    msg.custom.assign("MQYWVLTQYEZSHAKRAJISLDEIELWAVJPYJQJRQZTZEEUSWQNNXFJUVADPWMILKWRKX");

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
    msg.setTimeStamp(0.4151812780725741);
    msg.setSource(43575U);
    msg.setSourceEntity(230U);
    msg.setDestination(502U);
    msg.setDestinationEntity(113U);
    msg.duration = 34196U;
    msg.custom.assign("DTHXOTMTLVOTKAXQGHJELIYLCLXXTRKLDILVYBAHRVCDYZMBRGSWAJEDSZJPOOJEWENXSPOMBFITMPRSFSFQAEELTSHLCOFZQVQPTFJUOWAQNCKGVXYHUDIJ");

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
    msg.setTimeStamp(0.0720461984294084);
    msg.setSource(61128U);
    msg.setSourceEntity(35U);
    msg.setDestination(36416U);
    msg.setDestinationEntity(132U);
    msg.duration = 57413U;
    msg.custom.assign("CSCTPHSOQGNJABICEULTGWAFQWSAHWRJKRVCVJYYTJVKFBYPBRJCLRLLIEYDUOTN");

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
    msg.setTimeStamp(0.6990189957867171);
    msg.setSource(30015U);
    msg.setSourceEntity(46U);
    msg.setDestination(29746U);
    msg.setDestinationEntity(53U);
    msg.duration = 23029U;
    msg.custom.assign("EBFENDIQNIVFUEEMWCFTMWHEPZJNHTBTMMWCVYVVKRKEZFRAKCTQBGRPIVZSBMRNOJISNQZAXWLGNIKLCTAPGQUDPHXJCKLUGFBHURHVVAAJIMHTDGMHUTOJSFQXNXHBKAORLSYCLQNCLIVVXMEUFXQZLPDTFBOBCMWOAAHGPJRQILLWMKSEYEQZYYGGWBDDITPBSUPJKDNHZPAWAIOJOXWGFGCYUSWNDFE");

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
    msg.setTimeStamp(0.37320368102241386);
    msg.setSource(60343U);
    msg.setSourceEntity(141U);
    msg.setDestination(47963U);
    msg.setDestinationEntity(213U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.17639000880069255;
    tmp_msg_0.z_units = 38U;
    msg.control.set(tmp_msg_0);
    msg.duration = 19813U;
    msg.custom.assign("YXLHZTVRVEHSTOCIBBTDEWRHAYOOAPMQSFELFEFUCAOJZPVRUHMCEMLYMINVJJVAKWYVZLHJGOTIANNWBJGFEKPVEDCIFAVGIXKHQJJIRGDIYPPKDPBJUENJUYIXRNGDQKUPGFXSSLSOAYLQHVCURHZAXBIRXKWNPWSYWZEFQLZWYXNWAZTRRWGDXMQFDJOBCIZUMLMOLENHLBMCMKSQRTBXPUDWTKQACSSTQMKNXGQDZGSVNBOUZPKDUG");

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
    msg.setTimeStamp(0.6707450764401673);
    msg.setSource(18609U);
    msg.setSourceEntity(163U);
    msg.setDestination(41270U);
    msg.setDestinationEntity(69U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.10660101138101663;
    tmp_msg_0.z_units = 62U;
    msg.control.set(tmp_msg_0);
    msg.duration = 45654U;
    msg.custom.assign("OELTMRVNALVJASFXIJGLSOYDZEGSYMV");

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
    msg.setTimeStamp(0.11364232195463353);
    msg.setSource(20456U);
    msg.setSourceEntity(175U);
    msg.setDestination(38912U);
    msg.setDestinationEntity(183U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.2246497749784354;
    msg.control.set(tmp_msg_0);
    msg.duration = 35921U;
    msg.custom.assign("PBDBYEEWDMZNKZKCVDAMZNFNELQEWOZYSCJLEYLIIPMJQSQNMOPAUNHG");

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
    msg.setTimeStamp(0.6897877846926007);
    msg.setSource(44644U);
    msg.setSourceEntity(62U);
    msg.setDestination(12461U);
    msg.setDestinationEntity(138U);
    msg.timeout = 22737U;
    msg.lat = 0.5011055772700462;
    msg.lon = 0.14128329974267106;
    msg.z = 0.5544624444006117;
    msg.z_units = 175U;
    msg.speed = 0.30593549432305245;
    msg.speed_units = 196U;
    msg.bearing = 0.7707054237632107;
    msg.cross_angle = 0.7007942114168553;
    msg.width = 0.15155829587028946;
    msg.length = 0.25603812618041244;
    msg.hstep = 0.8514144443064197;
    msg.coff = 219U;
    msg.alternation = 116U;
    msg.flags = 51U;
    msg.custom.assign("VVXQBMQCOTJJUCOOQHLFRNNHWAKXBFKYHUBEODPTWWYIGTFGNKAYZVEIBFUOCOSVXXIANUZCVLBTFAKWNZEIWCOLRTCMTSBAPXGCKJJRVAGRALAQXXJVUUZSJBIHRZERGJBGYTEPMDOEIDLIELJOUUERJWJMABIUZRHDHNPSVYDYTXLCEVPYGFWYTSKKPDTQ");

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
    msg.setTimeStamp(0.6795409476164462);
    msg.setSource(54911U);
    msg.setSourceEntity(3U);
    msg.setDestination(56811U);
    msg.setDestinationEntity(26U);
    msg.timeout = 26127U;
    msg.lat = 0.8041365200698516;
    msg.lon = 0.19569947098308105;
    msg.z = 0.24221821993051662;
    msg.z_units = 137U;
    msg.speed = 0.6953731270450133;
    msg.speed_units = 248U;
    msg.bearing = 0.7475941690899577;
    msg.cross_angle = 0.24588613511769186;
    msg.width = 0.7872801615354363;
    msg.length = 0.5178160199983672;
    msg.hstep = 0.364785189045399;
    msg.coff = 119U;
    msg.alternation = 87U;
    msg.flags = 232U;
    msg.custom.assign("ZZCZDJDEBDHVGPPMQTNAKVNIVCIRTOVSVVSTUWPFDBVXMIZNFTJPZTQNKUARONGTSLQCWLFXNGVZPEOMECARZUJWKBWYYCWUQIIQZOUKGOLARNFIKEMORWDETGEPKBHFFSSJRPODAFQGKEQMWEDCXPYZUUJLYUHMIXOBGOTMCSKRAJBYMQLFTGIJDVMLPXQSDFSHXQJYRUA");

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
    msg.setTimeStamp(0.16278083750472216);
    msg.setSource(23644U);
    msg.setSourceEntity(226U);
    msg.setDestination(42158U);
    msg.setDestinationEntity(61U);
    msg.timeout = 54120U;
    msg.lat = 0.293908005760001;
    msg.lon = 0.8886261149155791;
    msg.z = 0.3723917624516839;
    msg.z_units = 183U;
    msg.speed = 0.14987475440907172;
    msg.speed_units = 181U;
    msg.bearing = 0.7909242123083505;
    msg.cross_angle = 0.007372002792204846;
    msg.width = 0.2967290420900385;
    msg.length = 0.4168297490957381;
    msg.hstep = 0.802251993393679;
    msg.coff = 200U;
    msg.alternation = 83U;
    msg.flags = 151U;
    msg.custom.assign("WYJBJSDLJMGURAV");

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
    msg.setTimeStamp(0.29776503691175793);
    msg.setSource(18011U);
    msg.setSourceEntity(173U);
    msg.setDestination(64369U);
    msg.setDestinationEntity(57U);
    msg.timeout = 10232U;
    msg.lat = 0.9490928986821396;
    msg.lon = 0.44321153966895166;
    msg.z = 0.09786550873720623;
    msg.z_units = 26U;
    msg.speed = 0.30699125788514736;
    msg.speed_units = 172U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9102636969151844;
    tmp_msg_0.y = 0.1256728510488314;
    tmp_msg_0.z = 0.9096951460158734;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CFQZNBYHBEWVZIXRESDOEAJKIVTWYYNZJAUEPIOKFRKHDFCLLIOBTETDAXWPQASCJYHEUGMSTGHDLLDNMYMUQGZCUJEVQBKIBNFKUXNTAPZOLBMPUXFEVKROVWQIZHEWXAPXJI");

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
    msg.setTimeStamp(0.6776546128137495);
    msg.setSource(15108U);
    msg.setSourceEntity(63U);
    msg.setDestination(9879U);
    msg.setDestinationEntity(142U);
    msg.timeout = 30655U;
    msg.lat = 0.6002351694289164;
    msg.lon = 0.04424753308293117;
    msg.z = 0.20012054497968057;
    msg.z_units = 52U;
    msg.speed = 0.9078484739481806;
    msg.speed_units = 102U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9064071063212586;
    tmp_msg_0.y = 0.6935312464298664;
    tmp_msg_0.z = 0.6789234376393913;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("REMGFQVYHGUCXHTEKBXYUEQZEJDSWBVBSQYHHMNMTAKFRJVCTOCWBDXNCSOGOQGPIKKAEVHYDMYSDZJNYULMFFCQVHJREWAWNYWUXOMRWWMBPPPVTQLWTFIINSLRJREZQAIPFQSNLOBAGGTUINDPXAHZOYXVCRSEBFKILHTJRIGSPWAKTNXFKZ");

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
    msg.setTimeStamp(0.4867890533482506);
    msg.setSource(34700U);
    msg.setSourceEntity(131U);
    msg.setDestination(248U);
    msg.setDestinationEntity(200U);
    msg.timeout = 44760U;
    msg.lat = 0.6398410948470465;
    msg.lon = 0.6728406168164948;
    msg.z = 0.6137538770971545;
    msg.z_units = 151U;
    msg.speed = 0.279736967200929;
    msg.speed_units = 244U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.39388359010480756;
    tmp_msg_0.y = 0.3732955563713507;
    tmp_msg_0.z = 0.07765765106295097;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IWRAMUTPAWJTYBSDMELWFNTNGSLHQXRPYQNKDXASJTNODMCIREOPANOPBRHVUSGXZKEDIZCDHOHMROJOQLGFBIQYJAMKJRRRVDKTLGOHAONYZILZJXGPPVULOLDUVMJKRFASZWPEBANWGUYCQZCIBEVHMNSZXTNIZGYQUGAQTJRZEKHKXYYGJCDEUMFCYAXTEPSQECVLTUWFXXWC");

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
    msg.setTimeStamp(0.28586349433194314);
    msg.setSource(28814U);
    msg.setSourceEntity(137U);
    msg.setDestination(29086U);
    msg.setDestinationEntity(163U);
    msg.x = 0.733334721413124;
    msg.y = 0.14292033524824677;
    msg.z = 0.5222238063825544;

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
    msg.setTimeStamp(0.28419424382679925);
    msg.setSource(39128U);
    msg.setSourceEntity(127U);
    msg.setDestination(30910U);
    msg.setDestinationEntity(193U);
    msg.x = 0.3497163050067901;
    msg.y = 0.3052747670242858;
    msg.z = 0.35142249948894444;

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
    msg.setTimeStamp(0.062313278561163754);
    msg.setSource(21785U);
    msg.setSourceEntity(101U);
    msg.setDestination(2057U);
    msg.setDestinationEntity(217U);
    msg.x = 0.6628404620958792;
    msg.y = 0.46413817121620704;
    msg.z = 0.9693731170366042;

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
    msg.setTimeStamp(0.14948186888285253);
    msg.setSource(34262U);
    msg.setSourceEntity(154U);
    msg.setDestination(34797U);
    msg.setDestinationEntity(145U);
    msg.timeout = 18609U;
    msg.lat = 0.5258554826921652;
    msg.lon = 0.6200326734375881;
    msg.z = 0.2231668788884954;
    msg.z_units = 245U;
    msg.amplitude = 0.2420938963961924;
    msg.pitch = 0.9274084221027968;
    msg.speed = 0.4167148880691359;
    msg.speed_units = 17U;
    msg.custom.assign("LCCQSSMRXHJIALIQOFFOXYUIGRZLCONHFZJFJWEWOEYBRTMYKDZVDWAZPUHMUDUMQFNTCCVVGXDGAGPYEIWFKIBSEXWDOZHOPNXJRDERQKPSAAGPRYNBYNDYNHXTEQDOTIHXKKSTMPRZHICMJVRAJKNVHCMHAEQNZKKXOLLOJILIZY");

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
    msg.setTimeStamp(0.8577861721013847);
    msg.setSource(58886U);
    msg.setSourceEntity(182U);
    msg.setDestination(56371U);
    msg.setDestinationEntity(8U);
    msg.timeout = 51596U;
    msg.lat = 0.5992564351816584;
    msg.lon = 0.4119699207336901;
    msg.z = 0.3858468837795981;
    msg.z_units = 106U;
    msg.amplitude = 0.5060393532890156;
    msg.pitch = 0.0003140135142694067;
    msg.speed = 0.9977454620769765;
    msg.speed_units = 253U;
    msg.custom.assign("EUOKGGTEJBXFSBTAXCKFOADOEANRMKSY");

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
    msg.setTimeStamp(0.9365520145613044);
    msg.setSource(26405U);
    msg.setSourceEntity(235U);
    msg.setDestination(58137U);
    msg.setDestinationEntity(238U);
    msg.timeout = 45228U;
    msg.lat = 0.8439996744071316;
    msg.lon = 0.21119194094163574;
    msg.z = 0.3073154862321016;
    msg.z_units = 136U;
    msg.amplitude = 0.9697080884723059;
    msg.pitch = 0.0001409420572107134;
    msg.speed = 0.12693011801369436;
    msg.speed_units = 55U;
    msg.custom.assign("FPUWJDECSIWGSSRCWGQYCHNCUMWTMK");

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
    msg.setTimeStamp(0.9309807466326142);
    msg.setSource(14973U);
    msg.setSourceEntity(9U);
    msg.setDestination(8629U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.09382596884471572);
    msg.setSource(55883U);
    msg.setSourceEntity(146U);
    msg.setDestination(14521U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.1471470513010693);
    msg.setSource(10636U);
    msg.setSourceEntity(159U);
    msg.setDestination(7281U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.8355426146149736);
    msg.setSource(5449U);
    msg.setSourceEntity(164U);
    msg.setDestination(64151U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.5755780602877844;
    msg.lon = 0.6602452902766421;
    msg.z = 0.580459547591994;
    msg.z_units = 60U;
    msg.radius = 0.39092873798863836;
    msg.duration = 23010U;
    msg.speed = 0.5723966644497741;
    msg.speed_units = 124U;
    msg.custom.assign("JZDUMYZIWOXJBHCOXXXXKFFHCVHUTPQIEYFHOMKNDDKDMSJCBRYAXWGLKLAWKCLVBYRUXGUNZTLCUDLVVNKYPREOHEWDFGMRJQBORQHMQTOBEWTBGVLJYNRKQVWAGKFBTCTSDWOEPNURGPBJEEKSQAAQYNDOSRCSBEILVJPLIFIHJNTUG");

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
    msg.setTimeStamp(0.9314839854764999);
    msg.setSource(45598U);
    msg.setSourceEntity(61U);
    msg.setDestination(17641U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.04156084849739239;
    msg.lon = 0.5267279612899505;
    msg.z = 0.4313537980560339;
    msg.z_units = 214U;
    msg.radius = 0.5746943613753513;
    msg.duration = 2121U;
    msg.speed = 0.6558664868636147;
    msg.speed_units = 157U;
    msg.custom.assign("JWMTYHGPONNZPTIXUHEVMLGZCVFNOQWPAQWCUISXXEWXAIBRVGPWATSQBWLBUDCDTPCNZJAGQZVYGJWODLFMNXEKYNHTSJEEYFVNHTCGQEEZLZHVAILERYRJGBHYWBASJSSRGFFBKBPIWVIOQOEFTPBKUFVKOJRYLRQRRBEASUSIQFZPXDTYJTFQNOIMHXLCHMBYZKOKJLLXCNMYGDPRZKDGCUROLFMDWOMMXVVDXHJC");

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
    msg.setTimeStamp(0.9545105000545644);
    msg.setSource(29528U);
    msg.setSourceEntity(244U);
    msg.setDestination(61682U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.4581447526963158;
    msg.lon = 0.4799376258874761;
    msg.z = 0.9620958786171598;
    msg.z_units = 180U;
    msg.radius = 0.8166433019336662;
    msg.duration = 62626U;
    msg.speed = 0.08979952721580908;
    msg.speed_units = 160U;
    msg.custom.assign("AOBZLCISDOKWGSHQWEYCLHMURPNNUHLKSMUSWGKMPOXIQQQXXYAYJLAPSCORVLPLNUJICZGOROETJVVYUMFNGLUTNFXVEHAPDOYTWNEDXOIBOZJIHMNYGVWSJTWEQJKZXIGKZUYCRFMFZEIRPFRKKLYDKXANOBTDVWKFEQVFBAQYTRJUDHQBWPVFTCJSRFAAFCLDMQRBBVZGABESMZZ");

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
    msg.setTimeStamp(0.4395826238195887);
    msg.setSource(26958U);
    msg.setSourceEntity(169U);
    msg.setDestination(3955U);
    msg.setDestinationEntity(29U);
    msg.timeout = 42038U;
    msg.flags = 246U;
    msg.lat = 0.6945289459252053;
    msg.lon = 0.1877471897437737;
    msg.start_z = 0.39490626736064793;
    msg.start_z_units = 231U;
    msg.end_z = 0.4045308905878483;
    msg.end_z_units = 132U;
    msg.radius = 0.9298113280747994;
    msg.speed = 0.5593611871895167;
    msg.speed_units = 13U;
    msg.custom.assign("UOPJRXNVZTQCVHANPPYJBWXJFDEDGJIRFCWFNOLYYTKBPYKHGKMEUTGBOERM");

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
    msg.setTimeStamp(0.897825777356443);
    msg.setSource(1673U);
    msg.setSourceEntity(167U);
    msg.setDestination(2013U);
    msg.setDestinationEntity(232U);
    msg.timeout = 16757U;
    msg.flags = 204U;
    msg.lat = 0.12236421149528531;
    msg.lon = 0.0016293609669782994;
    msg.start_z = 0.1932373619812089;
    msg.start_z_units = 246U;
    msg.end_z = 0.7804780451851432;
    msg.end_z_units = 131U;
    msg.radius = 0.05884273283971242;
    msg.speed = 0.5186637266656332;
    msg.speed_units = 10U;
    msg.custom.assign("ISMLERRZTXBDCKFAYUTSGRNPISQZURZUUHNWTDNCSBPOFLMDBKDWUMMWYJIFQARKPZMZVGJLRPCKTJTZBYVACCLRZIOUODSKHNAPMXGVCMFWFNXHKWVAAELBOIKBBYVXPQPFZWJYEXGSQEXEYNWSOJOHDFOXSDDODUVYCYMKFJAEGCNFHLAQEIQXNTLQYPKLACVQTHHEWBIGZPFUXDXMRSJIHZQAQGRHOJTIIGNSGYLUMVGWNEP");

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
    msg.setTimeStamp(0.14354535261142876);
    msg.setSource(53565U);
    msg.setSourceEntity(130U);
    msg.setDestination(51615U);
    msg.setDestinationEntity(99U);
    msg.timeout = 51975U;
    msg.flags = 145U;
    msg.lat = 0.699507258533414;
    msg.lon = 0.4765626849892818;
    msg.start_z = 0.7293609852267533;
    msg.start_z_units = 130U;
    msg.end_z = 0.5477463266519229;
    msg.end_z_units = 180U;
    msg.radius = 0.8526537060111975;
    msg.speed = 0.4892505217349271;
    msg.speed_units = 49U;
    msg.custom.assign("GVUVSAFEAKCIMJAZZOQRIWLCWGTFASIMYLBQWUXEFHDSGAESGJYLUCIPXGNXDSMSNV");

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
    msg.setTimeStamp(0.4339173548950246);
    msg.setSource(62124U);
    msg.setSourceEntity(90U);
    msg.setDestination(53010U);
    msg.setDestinationEntity(137U);
    msg.timeout = 21084U;
    msg.lat = 0.9123900731542388;
    msg.lon = 0.6934429733113258;
    msg.z = 0.19678557448584966;
    msg.z_units = 34U;
    msg.speed = 0.892596532264415;
    msg.speed_units = 23U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.1520083878824715;
    tmp_msg_0.y = 0.4835650802859255;
    tmp_msg_0.z = 0.4079657444201872;
    tmp_msg_0.t = 0.8496230363252131;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TDPHMNXNKVGYXWRROHBZBWUIPHZLKLXHUHLFBNTYYTCCRDDWBMVOQPSOPGEZWGEFFBPSILXKMEZBFLEADGEKVKVEJBMDTVVJVXWCARJUHICJOSZCDSROWWPHHSYVDRRWLTAICRQMOAUAJCCYAGNTXXBPAJGRFYOEFUQTW");

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
    msg.setTimeStamp(0.1794209067975937);
    msg.setSource(9088U);
    msg.setSourceEntity(124U);
    msg.setDestination(32852U);
    msg.setDestinationEntity(134U);
    msg.timeout = 57398U;
    msg.lat = 0.996059552149802;
    msg.lon = 0.4109929753332632;
    msg.z = 0.055358757228621935;
    msg.z_units = 215U;
    msg.speed = 0.18827114801088574;
    msg.speed_units = 203U;
    msg.custom.assign("JNSVXOVEVHLRQKKJAXGJLZZFBARBDKBDNGPCZNLLQIQCOPKNIXQZBEMEBPCCSHCYVJYNIHSJOKBJYVQJYCUGKTOAPXUKAFSXWIDZIHFEAVHGXGTIYFWPMMRZDOIUXTTAMA");

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
    msg.setTimeStamp(0.832603849799115);
    msg.setSource(20489U);
    msg.setSourceEntity(166U);
    msg.setDestination(6513U);
    msg.setDestinationEntity(250U);
    msg.timeout = 51686U;
    msg.lat = 0.207657172456977;
    msg.lon = 0.4326469540671951;
    msg.z = 0.5121356375950725;
    msg.z_units = 105U;
    msg.speed = 0.822758484517333;
    msg.speed_units = 58U;
    msg.custom.assign("IPNPQZMNXPDJUJCLKYTMKOBTRXXUMLUXTMRVCVHWGLZLIFYOBECLSNISGNZYNEYJZXWYARRSHGQSQKNYODZTF");

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
    msg.setTimeStamp(0.06555246222570577);
    msg.setSource(26718U);
    msg.setSourceEntity(153U);
    msg.setDestination(4905U);
    msg.setDestinationEntity(27U);
    msg.x = 0.8926397041035647;
    msg.y = 0.48851856184705567;
    msg.z = 0.797898712247766;
    msg.t = 0.6115732811904487;

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
    msg.setTimeStamp(0.26287431595009536);
    msg.setSource(64311U);
    msg.setSourceEntity(116U);
    msg.setDestination(40100U);
    msg.setDestinationEntity(186U);
    msg.x = 0.2774844932378544;
    msg.y = 0.7308516033867235;
    msg.z = 0.8410619370228929;
    msg.t = 0.150253821282198;

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
    msg.setTimeStamp(0.19605423838311775);
    msg.setSource(52570U);
    msg.setSourceEntity(163U);
    msg.setDestination(34191U);
    msg.setDestinationEntity(67U);
    msg.x = 0.6420718810015673;
    msg.y = 0.49573667950066247;
    msg.z = 0.9556453925980499;
    msg.t = 0.43673085455121186;

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
    msg.setTimeStamp(0.27018027227777497);
    msg.setSource(32038U);
    msg.setSourceEntity(0U);
    msg.setDestination(25773U);
    msg.setDestinationEntity(122U);
    msg.timeout = 27560U;
    msg.name.assign("JSQPRRZBTHNJFVHYPJLRSGEAYGQUMXOONQUZLZSFBDCEODWYAMEFHHODPZIWJMYAKMLLKOZHMTTVDVMECAIDBDHOZGNLLUXIGICUGPRRSRIBKVSBBRPKCMSOVIOVQFKYYKXWXPQEWLJHNRBHILDNCJUBWFYFUFXABXXGRQYZPCUMCVJJAVQTWNZK");
    msg.custom.assign("PUXSXEUUROGKWYLIDWOITVKIGHMZCJCGXSRXYXBIVNAMXNOSTCWSXNFSARSDICHMITNQBEZMZCCNNEDPWOFYINQWQ");

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
    msg.setTimeStamp(0.14039480312543573);
    msg.setSource(23008U);
    msg.setSourceEntity(87U);
    msg.setDestination(25036U);
    msg.setDestinationEntity(23U);
    msg.timeout = 6426U;
    msg.name.assign("WXHNRSYGJBXDYQJCIAWKZEZXUPINMNLKLVKBSZUTTRVYJNOKMUSUIMHIFBRHLXTBUOQGRDHWOKLYOQQGGANLWBEVDAEICCYTLMIRMFEOZJXYWDLWISGKUODACRAQXAHXDBJDHIKEFZYPFVCTRKSHXPANSPVPXASWTJGTBEGSTOYVPUFHGKGVQOPFFOFEBNCQGCTLWZORCQSMNAUVVUMZK");
    msg.custom.assign("MZILXFUIYQQLMXJGDGEOVMSLVBLRJHUAWOPCKHMRNLF");

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
    msg.setTimeStamp(0.7511332665203584);
    msg.setSource(23968U);
    msg.setSourceEntity(79U);
    msg.setDestination(4953U);
    msg.setDestinationEntity(95U);
    msg.timeout = 21044U;
    msg.name.assign("KBMRNMFEOHAEZGADCNBTLDGBIGWTRGYFDHKIPIPOQLEQTUSDMMLPCHVHESUCWIEOWDEJFKZJSJCJTLMQGJXSKWSRGROHCLHDGVNXOSWMVAOYTZHUILONPVRMAKLXXZNGWBSBVYMLNGJ");
    msg.custom.assign("WBBRKSNFNIESSIVOFRUAJCAMXPSBDALRKARRPYQUDQHPFMOVGMHLPNMWHESCXVINWMULUWINYWQSIJJKZHZZDVRDXDBAPYUNZTTXCALGEWBYNQJQICUJXGARZAOFKHKYHUCDFOKRLYWREJNDKYITGDFVGUZEXTTBCXMXQE");

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
    msg.setTimeStamp(0.054701738697525704);
    msg.setSource(55483U);
    msg.setSourceEntity(201U);
    msg.setDestination(52066U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.08167798779188096;
    msg.lon = 0.8517106404558142;
    msg.z = 0.2796769418402215;
    msg.z_units = 22U;
    msg.speed = 0.5822193030596334;
    msg.speed_units = 176U;
    msg.start_time = 0.14330884744942807;
    msg.custom.assign("XKYFOWASVYVAPXNMJKPEENXTBBYUNQOIAJTJONY");

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
    msg.setTimeStamp(0.9604337116419672);
    msg.setSource(62131U);
    msg.setSourceEntity(136U);
    msg.setDestination(18915U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.23899619643987313;
    msg.lon = 0.01222099733892601;
    msg.z = 0.761330186614562;
    msg.z_units = 84U;
    msg.speed = 0.7601755300880964;
    msg.speed_units = 113U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5556214750831444;
    tmp_msg_0.y = 0.46527419386330493;
    tmp_msg_0.z = 0.6061431961297571;
    tmp_msg_0.t = 0.9835561570668215;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.7480260091450857;
    msg.custom.assign("IXCXJBJRLSISDANZVPVUZNFKOPQZFSAMMAHDQFZMQSIRFYXPYEKHLYRMPKNZUWSCRUFGLPUFXSVFMLIJJWOEASDUKHBTJDYGTJTHZTORSBGTHKDELVPTMOQJVOUATNLZPAZGQABIGXDEWKYLFZCLBCZWXQJOMOMIJWKEUCQVNNKBCSREBHTYWYRKWEGETIVOWNHEXCQCPAFWGVQBUQVIOGGHNNJYSNAPDARYDRBCXDOBIMLXHHP");

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
    msg.setTimeStamp(0.0907271478883247);
    msg.setSource(51833U);
    msg.setSourceEntity(222U);
    msg.setDestination(62725U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.06874273078653081;
    msg.lon = 0.8728391905427582;
    msg.z = 0.04181847995150412;
    msg.z_units = 209U;
    msg.speed = 0.494869850131056;
    msg.speed_units = 26U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 36851U;
    tmp_msg_0.off_x = 0.9883083656389711;
    tmp_msg_0.off_y = 0.6846677249615185;
    tmp_msg_0.off_z = 0.1945995581552329;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.7393691503077726;
    msg.custom.assign("AEIUHIFVZEZQHSZJWGLNEGPPXWJJQQZLOHBYFNVGSYJUQOY");

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
    msg.setTimeStamp(0.5113751140655911);
    msg.setSource(50205U);
    msg.setSourceEntity(38U);
    msg.setDestination(28999U);
    msg.setDestinationEntity(96U);
    msg.vid = 41457U;
    msg.off_x = 0.08061174004089955;
    msg.off_y = 0.6317152747565882;
    msg.off_z = 0.8688002851673338;

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
    msg.setTimeStamp(0.8017065999392361);
    msg.setSource(41596U);
    msg.setSourceEntity(123U);
    msg.setDestination(7251U);
    msg.setDestinationEntity(179U);
    msg.vid = 16008U;
    msg.off_x = 0.542632970934498;
    msg.off_y = 0.8394918223097448;
    msg.off_z = 0.5895735811627002;

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
    msg.setTimeStamp(0.20373466789391925);
    msg.setSource(63444U);
    msg.setSourceEntity(132U);
    msg.setDestination(7945U);
    msg.setDestinationEntity(192U);
    msg.vid = 59463U;
    msg.off_x = 0.7292019547768376;
    msg.off_y = 0.9691643936983062;
    msg.off_z = 0.1325011603157903;

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
    msg.setTimeStamp(0.9053999411134905);
    msg.setSource(39415U);
    msg.setSourceEntity(236U);
    msg.setDestination(45991U);
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
    msg.setTimeStamp(0.3876397941500779);
    msg.setSource(32004U);
    msg.setSourceEntity(213U);
    msg.setDestination(17335U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.5881719844100971);
    msg.setSource(32446U);
    msg.setSourceEntity(155U);
    msg.setDestination(2671U);
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
    msg.setTimeStamp(0.4687961118418319);
    msg.setSource(58391U);
    msg.setSourceEntity(130U);
    msg.setDestination(49060U);
    msg.setDestinationEntity(200U);
    msg.mid = 56732U;

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
    msg.setTimeStamp(0.9622769024822668);
    msg.setSource(12203U);
    msg.setSourceEntity(92U);
    msg.setDestination(41445U);
    msg.setDestinationEntity(112U);
    msg.mid = 46440U;

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
    msg.setTimeStamp(0.48403700805000205);
    msg.setSource(26906U);
    msg.setSourceEntity(169U);
    msg.setDestination(63784U);
    msg.setDestinationEntity(52U);
    msg.mid = 38246U;

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
    msg.setTimeStamp(0.6920984089254485);
    msg.setSource(57018U);
    msg.setSourceEntity(167U);
    msg.setDestination(8346U);
    msg.setDestinationEntity(216U);
    msg.state = 107U;
    msg.eta = 63766U;
    msg.info.assign("GZKACWJHULSXEVIKMOCMMDOPNHBPDKXKKYSWIQPAPVEWPVJUMXQFZUKRBPXTMDILDHQDFZNRVIHUXONOYJSRNWAPDYOWNEBJJROHWMTHVUXSSXCGOCYWJVOYCCKGAAQHMMAGKWRFQLYSCVYBANRRTGAXUNWSUJSFQLZYAZEHUTIVPBGYDGZYHBTLPTOBMQFODDJJRLUTNEIXEQQEHJCNXPKCZQBLV");

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
    msg.setTimeStamp(0.5729546636339351);
    msg.setSource(20736U);
    msg.setSourceEntity(157U);
    msg.setDestination(34890U);
    msg.setDestinationEntity(102U);
    msg.state = 9U;
    msg.eta = 54926U;
    msg.info.assign("BQOTRHFMNFBJFHFIJIVNKNUTDBRHQXAJVMFYGQBNCXJCLRPRYUNDMPNPWYZIDBTOZD");

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
    msg.setTimeStamp(0.40208564943349145);
    msg.setSource(4788U);
    msg.setSourceEntity(12U);
    msg.setDestination(37227U);
    msg.setDestinationEntity(109U);
    msg.state = 22U;
    msg.eta = 47169U;
    msg.info.assign("JCFJPJSHUUCSPORCFJPBURYRWUHKEQXWRCEMIODBAFZTRSVXPAZZREXJUJWKVQENEGOCYKYPXSWAKMMGOHGHZWLACAOTE");

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
    msg.setTimeStamp(0.572714119584035);
    msg.setSource(9706U);
    msg.setSourceEntity(191U);
    msg.setDestination(45128U);
    msg.setDestinationEntity(214U);
    msg.system = 2179U;
    msg.duration = 18029U;
    msg.speed = 0.9941820373096066;
    msg.speed_units = 178U;
    msg.x = 0.6811348601266515;
    msg.y = 0.08845998008837386;
    msg.z = 0.7386002403870172;
    msg.z_units = 91U;

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
    msg.setTimeStamp(0.12199017876313734);
    msg.setSource(35550U);
    msg.setSourceEntity(203U);
    msg.setDestination(20247U);
    msg.setDestinationEntity(99U);
    msg.system = 44552U;
    msg.duration = 3779U;
    msg.speed = 0.9267854861306487;
    msg.speed_units = 82U;
    msg.x = 0.2833920216548098;
    msg.y = 0.6621786541845782;
    msg.z = 0.4909899625088283;
    msg.z_units = 59U;

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
    msg.setTimeStamp(0.9635740106426441);
    msg.setSource(18207U);
    msg.setSourceEntity(146U);
    msg.setDestination(26856U);
    msg.setDestinationEntity(252U);
    msg.system = 33028U;
    msg.duration = 58472U;
    msg.speed = 0.933547261805331;
    msg.speed_units = 198U;
    msg.x = 0.44133163952645915;
    msg.y = 0.5774965300277801;
    msg.z = 0.23287497602693452;
    msg.z_units = 195U;

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
    msg.setTimeStamp(0.6092815209242927);
    msg.setSource(35276U);
    msg.setSourceEntity(191U);
    msg.setDestination(33326U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.18792718384823115;
    msg.lon = 0.04091214171118096;
    msg.speed = 0.8968425649440144;
    msg.speed_units = 146U;
    msg.duration = 9396U;
    msg.sys_a = 13067U;
    msg.sys_b = 31889U;
    msg.move_threshold = 0.8291023402118525;

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
    msg.setTimeStamp(0.488709215197903);
    msg.setSource(30703U);
    msg.setSourceEntity(160U);
    msg.setDestination(6695U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.32186730168343125;
    msg.lon = 0.14879796644705878;
    msg.speed = 0.0017007226981626822;
    msg.speed_units = 116U;
    msg.duration = 8U;
    msg.sys_a = 44835U;
    msg.sys_b = 4525U;
    msg.move_threshold = 0.4176014775434531;

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
    msg.setTimeStamp(0.026107781706859345);
    msg.setSource(5198U);
    msg.setSourceEntity(202U);
    msg.setDestination(29212U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.8131742887193678;
    msg.lon = 0.7733300976124292;
    msg.speed = 0.5832065386060556;
    msg.speed_units = 136U;
    msg.duration = 12887U;
    msg.sys_a = 44763U;
    msg.sys_b = 7675U;
    msg.move_threshold = 0.01268153859433696;

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
    msg.setTimeStamp(0.94236786998148);
    msg.setSource(43426U);
    msg.setSourceEntity(41U);
    msg.setDestination(62890U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.6846388257420414;
    msg.lon = 0.07364697847889201;
    msg.z = 0.7259513847422813;
    msg.z_units = 53U;
    msg.speed = 0.672385481334568;
    msg.speed_units = 209U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2794935811118432;
    tmp_msg_0.lon = 0.6008142322492187;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VUWRHIUMHQHEWAGQLUARVXGLIXDWYWNDRGTLDZRNOPEPCPQMKNSCKTOUEUCZKOSCPATXWGTMFXSCGFHZZPSTWFJSWKNKXLGDQJVJOLHEYFPDLKGFCRQOWJIQUCMLWLTOKBAVYVPGDCGLEBHBQYOABMYOJNBIODZLHAUQXNEXUNJJRYXFVJVPFCWNHJRIZPGISDZRTDRESISVBOJYZFFEISYNMZYXEKIMBKXMBVQITHAPDZVUTANYAHSFBMQ");

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
    msg.setTimeStamp(0.10674172849922747);
    msg.setSource(33903U);
    msg.setSourceEntity(246U);
    msg.setDestination(63718U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.35886657543491085;
    msg.lon = 0.4625612129172396;
    msg.z = 0.46556172856493727;
    msg.z_units = 204U;
    msg.speed = 0.33721952874255734;
    msg.speed_units = 44U;
    msg.custom.assign("JQIVJLGKPTBPBPZSTGQUIWKJCVDZVKAIHNDGJLHUAADLNHLNCHOPJTLDYFPENKHXWLGMUIKCQPRTKAFMGCQMLNWZUWGVQBGAHEYPVRWLAXUQOOFZKOCTYJIEOXRYFRRDEOMBXEPWHVGVYBJSMVJOYCDWMTFMRFUOTEXNSUZBJSNUCXAQRTGITZXQFLJCWZCHUDWMNBOYZCMBXBFXIQGLTHYAWDPEEEXSFQIKNZUKVAZASVKRSRYB");

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
    msg.setTimeStamp(0.8270395722291808);
    msg.setSource(1625U);
    msg.setSourceEntity(72U);
    msg.setDestination(40706U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.5297540434009217;
    msg.lon = 0.5551485718634085;
    msg.z = 0.7352681569719967;
    msg.z_units = 40U;
    msg.speed = 0.42150371942221676;
    msg.speed_units = 126U;
    msg.custom.assign("MYNIDPWWZUZHHZLYCSGGIYWNEKPVXXNUPHTCQDOCZEKGODNHROAWLFRBWJDYNMTBRRWHGHLGABBDYEZUFXAJSANJMTVZMISNX");

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
    msg.setTimeStamp(0.12891106694502008);
    msg.setSource(6960U);
    msg.setSourceEntity(137U);
    msg.setDestination(48583U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.30114263902528415;
    msg.lon = 0.25430435540747387;

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
    msg.setTimeStamp(0.6564131184363222);
    msg.setSource(46750U);
    msg.setSourceEntity(126U);
    msg.setDestination(57632U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.8832248537768316;
    msg.lon = 0.08290294198319936;

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
    msg.setTimeStamp(0.3781672047657171);
    msg.setSource(32681U);
    msg.setSourceEntity(166U);
    msg.setDestination(35657U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.31774223960620995;
    msg.lon = 0.6309773596827004;

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
    msg.setTimeStamp(0.1262899771910665);
    msg.setSource(60315U);
    msg.setSourceEntity(241U);
    msg.setDestination(34292U);
    msg.setDestinationEntity(35U);
    msg.timeout = 44027U;
    msg.lat = 0.2610236266957603;
    msg.lon = 0.9869829134910582;
    msg.z = 0.8006701410533885;
    msg.z_units = 106U;
    msg.pitch = 0.01696493988505976;
    msg.amplitude = 0.5718564416553651;
    msg.duration = 903U;
    msg.speed = 0.4356996750130244;
    msg.speed_units = 29U;
    msg.radius = 0.20025801942009158;
    msg.direction = 51U;
    msg.custom.assign("JPPOWUYYKJVKJMZSKQJFIPMOACFJNVKPJDIYQVQWONDIRJEWYNDKCSIGBCIFXHHDLLBXTNZGTGXQMGBIQBTASKQZUBCDGYEXCHTMOQDUVAZFEUGATZVEMNDMAARAOGKTOEBIYCBUFVGCNLHIXSTDROEGVHOCRLWFEZOPWXWIQSWLLRKRFFSJH");

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
    msg.setTimeStamp(0.9735900830349209);
    msg.setSource(35199U);
    msg.setSourceEntity(46U);
    msg.setDestination(52563U);
    msg.setDestinationEntity(207U);
    msg.timeout = 51633U;
    msg.lat = 0.9094792196604694;
    msg.lon = 0.31832401981960623;
    msg.z = 0.9969858113381412;
    msg.z_units = 21U;
    msg.pitch = 0.11523799654451405;
    msg.amplitude = 0.29155282081600375;
    msg.duration = 45033U;
    msg.speed = 0.0999981637127022;
    msg.speed_units = 216U;
    msg.radius = 0.15388327068716023;
    msg.direction = 3U;
    msg.custom.assign("CCDVQTBDPFSVWVYDGEOSFYJPLLMZZSSFQDGLNDKXTXABDUOYDWGARHDBRNTBSHOWMYEDVNSWLTICJXSMDZOAYETUREGIHQNLYMFOGCTQZEBSAMNKVERRPPMKIWVVTNUBZKEJQBLAQBHCBRPPSFBUNHMPKVWQHUTLAUJMGOPNLUGIFJGEFZKYJZWZFOQIRKXVSAKYYGRJCLHRZXIHCIQRHIWAWUXJZMLGOQVAHMXNYXUE");

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
    msg.setTimeStamp(0.19519447852713068);
    msg.setSource(40283U);
    msg.setSourceEntity(25U);
    msg.setDestination(31733U);
    msg.setDestinationEntity(150U);
    msg.timeout = 48893U;
    msg.lat = 0.5824755934561032;
    msg.lon = 0.5836755803062351;
    msg.z = 0.37899412465269844;
    msg.z_units = 27U;
    msg.pitch = 0.46957670066383805;
    msg.amplitude = 0.33900612629809734;
    msg.duration = 20106U;
    msg.speed = 0.7850354729134658;
    msg.speed_units = 82U;
    msg.radius = 0.5050698838535288;
    msg.direction = 176U;
    msg.custom.assign("RZOIENZAOMFUPUDKBNYOFPRHCEKQWSEFLJJDPCQNFHEMLVJJRCYSKOMQZMFOWWTRZXBBOXETCMVPEI");

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
    msg.setTimeStamp(0.002428136443441753);
    msg.setSource(54285U);
    msg.setSourceEntity(211U);
    msg.setDestination(52443U);
    msg.setDestinationEntity(210U);
    msg.formation_name.assign("SCDPQIRYZGEOLEWGJNMJNOMXHTBXAFJQXSUWSZEELPCYURZQHVQOHXHGZKPJRYNEKUCKADTZTWIJGRPGBTHKZKLCSHINCPLWBIOUYZFBTNVVMWDUBLDJVMDRDNNPSFSKOYWWCBRVLWTIAJOYRNSEOVAIZUFUHQKOBJZLTLFXGOEBIMLCREXKFQNUQLDSPIGIRSRFATFNPXMGHACDQDKJQEVBHAAUYXTDCAGTXSVMMC");
    msg.reference_frame = 75U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48547U;
    tmp_msg_0.off_x = 0.06959426896661725;
    tmp_msg_0.off_y = 0.2754929757562453;
    tmp_msg_0.off_z = 0.9812474323613539;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WVDOUTDDPTPXCNKZDZUSBTEXJUFSAYLAFFYJHXMSPPYRUVDNNYKQODSZNHGDLICREMFBZHNHN");

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
    msg.setTimeStamp(0.2796151227059612);
    msg.setSource(40248U);
    msg.setSourceEntity(172U);
    msg.setDestination(63269U);
    msg.setDestinationEntity(50U);
    msg.formation_name.assign("YGLGZMCHWKUUDVNNYZHMIVKQULZCBXEFQKSKPHEBIGWOQXSDQIDZLFIYAVHCWYYRTPTMJQDPXRUMKWAZBBFMOFDTYFSAWVATJTNSXBCHHMSFGJHOGDNSQDVZEPRTRKVZHVNPUXIKEREXXGLCTBALQNW");
    msg.reference_frame = 38U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35628U;
    tmp_msg_0.off_x = 0.5210272433615977;
    tmp_msg_0.off_y = 0.191059016304172;
    tmp_msg_0.off_z = 0.08670489779532908;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("HNAGHCAODGIJJARRMEOEXJKOFUQWNCLZQJBWUXAZZLLVQYNKFUTLGSNEQIKASSUXQGCRWLMWXBHEIHUXCUFFADVYYYAIRPZJPRMIXXJEYZQBBYISCQVGTOVYZFBPKGUHJPNMXXFVOEHDGABTYIIGDMAPWKOLSMKBPVPPNGZTNCFZJSNLSRCWDKYCHUNKSITDFDOKTETCEBLDHRAVBZYNHGTPQMPVTMWFMIDSCWVLFDUEQJZBRLXHV");

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
    msg.setTimeStamp(0.45054296340278965);
    msg.setSource(3367U);
    msg.setSourceEntity(55U);
    msg.setDestination(49749U);
    msg.setDestinationEntity(191U);
    msg.formation_name.assign("EDKUWXHLTREORSBGSUBQCZAVKMDPNBXJLFRQEMHALDNEUGJSNFETAMLQQNWTDPKYYWXPHYNLGNZCKXOIYJOXHUPTVFWVJYSAXOGTEOOZVRTUDIIHMFJQCIEAJXOQCI");
    msg.reference_frame = 238U;
    msg.custom.assign("RFFLBHUCYGUZVCNXEKDIQBOPBSXPXPKCEDYMG");

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
    msg.setTimeStamp(0.5070785750232659);
    msg.setSource(61260U);
    msg.setSourceEntity(55U);
    msg.setDestination(3739U);
    msg.setDestinationEntity(228U);
    msg.group_name.assign("CLUEYYSWNFVHWLLUZPZXEQSNLZYMSDKQWPREXQVTFIQZOKTJCRUSIBRCW");
    msg.formation_name.assign("KTKJHVKHTJMUSMFBEWJRGKQAVNSBLUOQLUVSRHSYLRZMZCUCCBZFTNAPXEOCGRKAPBGAYEUXHIFQVJJIIOTKRGLPDHEIQSYIWLMBALWBWWFCEFZXVWHLEDJQDGYTUYSGOWDSNEXPPXKMQXNNKHADCLIOHIGSPNTPUQWMVBYYMRRPUNXQNRIAJMLWZWALERVZQJXHVBRDIZXVFTNS");
    msg.plan_id.assign("ZLKHPWKJHSZRMVRNWOTBLRRQICQCPKLKNYTSVCAXSGQFCCBTQLHOFVTUNOGKRGHODQUMCXXGRPFUODWLSVEDTLIRJXXMMDRDMVSXUMPKITAEVAIFEKFYTDJCXNTEFYXJRZQGWJIYJAWOREPYYALJQYBF");
    msg.description.assign("BWLHVCTVHSFPEKLRETSOFLSTSYPLOQBYTPTRIKMONJHVVZFMOITRXJGQLABEMMKIMPRICNWKERGQHFYBOMZHDJPLDINUUDCDLDGFJICWGQMXZAODJCMJVAEYEZNWUUUXLUHW");
    msg.leader_speed = 0.35304344454907455;
    msg.leader_bank_lim = 0.36809560762298577;
    msg.pos_sim_err_lim = 0.9887839314477309;
    msg.pos_sim_err_wrn = 0.9970919971149387;
    msg.pos_sim_err_timeout = 9381U;
    msg.converg_max = 0.5325143524457233;
    msg.converg_timeout = 775U;
    msg.comms_timeout = 27397U;
    msg.turb_lim = 0.020895629126424953;
    msg.custom.assign("BBNGPXRCLYJABPGDAFCHLVZOTXAPLDMDDACMRUKSSLMXITRVPAIFIVOBSQWPKMPGYUFMSQSGUULLZVHJWGDXODVRLIPXFYNKEENKC");

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
    msg.setTimeStamp(0.45268453953899257);
    msg.setSource(46247U);
    msg.setSourceEntity(12U);
    msg.setDestination(54439U);
    msg.setDestinationEntity(215U);
    msg.group_name.assign("NKKRCERECIQVAHFKJQMFALOPFPTNHALFMRKJGIWDYPLDRQWVUWEMZKVJSQXAUJDUHBGGFCSHLYHEAZWSZEOPTLRQSWAVHUYVRNTHTLOZUSFVVEDXMRTPDBXDGPNHGJUFJXYCLKIBFZWOVQOKKTUBSZMXJUOIBWXKCATETJEDKCXOYPYPXO");
    msg.formation_name.assign("FHKHORHWCOKXXVTLDALCKSWVEPYCHZRMTIRLPTJNNSEBWYTIENIYYYF");
    msg.plan_id.assign("LTQGNLFCCRGTNHQKWGGVORKGFNFWVZQJTTNUALMSJWNTMMNQYXIKVHNTHZDWZCPFCZFAAOJSYUBXRPDUCUGCJELNILBAEYJUDHRLUEOHVEELKZQTLYVXKMSKYD");
    msg.description.assign("VBXYFYZKEYAAZDLMVLXTEFJJOHAWAKSVIXVRGKYVHDGLPJZKWAKIGUWJCFSOOYUATQWCNWSJDUFMBCXKNIZTPHCMDFCDFTQFZBKUNVEFYXCSSJRINUPLXGFYPFCUHWMMWDBNKEBYPQCYAHNHPNRRLHTJBSZAHOAURGNGMQIQBGIDOKXRYMSENQZRIEPRQTQVORICPLDTEVKLBZBDTSJIJO");
    msg.leader_speed = 0.21368216083726033;
    msg.leader_bank_lim = 0.7777197281293553;
    msg.pos_sim_err_lim = 0.35477602633221095;
    msg.pos_sim_err_wrn = 0.49843279846439015;
    msg.pos_sim_err_timeout = 6064U;
    msg.converg_max = 0.3212940893273021;
    msg.converg_timeout = 57486U;
    msg.comms_timeout = 55156U;
    msg.turb_lim = 0.17147818902472323;
    msg.custom.assign("VNCITZSOXMNETSQFTAGXFWYCXNIQATRNSJUBVOQMRUDBPSJTESLHQZCJOKPWBNCALGPPHAZUQJNMLVVCIHZHUDRGMYYOMDKUHMXXXWHBGQSYK");

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
    msg.setTimeStamp(0.6177923293125579);
    msg.setSource(47083U);
    msg.setSourceEntity(81U);
    msg.setDestination(36544U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("JOMXUFLCKLGJYZSBZUXURYGCLVYTFNDIQMLTXQFOIIARQAPNSOSDYOBADAMLPZVWJWKPHENCQIPRRBRUEPUSGDCHGGJZHMJVQNGKQXTXJRTTAZNRDAICHFZAPKVZOVABNYDECROWDMBDPLPXIBZJTFIYXGBCHVMUSHSVOJNBSFXLHIGJHRHZWKMXRQZQKU");
    msg.formation_name.assign("ZRMVVXEHRBDQJLVGIUFAJQUBLQNEYFTEFFGPAPMXVAKEYXJOUWRCCBEWJCRRSZGRNAKIQESSAEKSFTNZFLRNWOCOVQXJTEXXEHAZHGMBAQTUCGHXYTJLMLHSYMNIAPOHPBBTNZLGNP");
    msg.plan_id.assign("QMMXDSSRJSQWYARQPGSC");
    msg.description.assign("NTQEXZCZUQLVQENGRELXFPMCPIHFRYHFORBTLYKNEXSQMNQBZAMHPUZSMXAVIVZYDLBPFVSSNKIZLBHJKDMNDSTGVLKPKZDOCCGKTMJNGTJOTUSBURWGUOKLUFCIYZ");
    msg.leader_speed = 0.9264232590074409;
    msg.leader_bank_lim = 0.4413704385832419;
    msg.pos_sim_err_lim = 0.46789968978262897;
    msg.pos_sim_err_wrn = 0.8701291183366645;
    msg.pos_sim_err_timeout = 18650U;
    msg.converg_max = 0.7850527637411482;
    msg.converg_timeout = 62933U;
    msg.comms_timeout = 17478U;
    msg.turb_lim = 0.07337290133361418;
    msg.custom.assign("NFJAEGANJYKJVSYBUISHUDACMA");

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
    msg.setTimeStamp(0.5111672025335993);
    msg.setSource(33003U);
    msg.setSourceEntity(99U);
    msg.setDestination(4923U);
    msg.setDestinationEntity(182U);
    msg.control_src = 39986U;
    msg.control_ent = 51U;
    msg.timeout = 0.30610724681496715;
    msg.loiter_radius = 0.6454844398736367;
    msg.altitude_interval = 0.20282916762086922;

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
    msg.setTimeStamp(0.4437062064327396);
    msg.setSource(36132U);
    msg.setSourceEntity(124U);
    msg.setDestination(15267U);
    msg.setDestinationEntity(191U);
    msg.control_src = 26035U;
    msg.control_ent = 9U;
    msg.timeout = 0.6101290736965403;
    msg.loiter_radius = 0.3216052787178738;
    msg.altitude_interval = 0.2466314578841572;

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
    msg.setTimeStamp(0.554022892107178);
    msg.setSource(6321U);
    msg.setSourceEntity(113U);
    msg.setDestination(25844U);
    msg.setDestinationEntity(89U);
    msg.control_src = 62800U;
    msg.control_ent = 190U;
    msg.timeout = 0.8634440195725988;
    msg.loiter_radius = 0.3058460603714144;
    msg.altitude_interval = 0.1881817026143523;

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
    msg.setTimeStamp(0.8278968452812726);
    msg.setSource(48027U);
    msg.setSourceEntity(112U);
    msg.setDestination(12045U);
    msg.setDestinationEntity(73U);
    msg.flags = 47U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9347742610389592;
    tmp_msg_0.speed_units = 103U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5141230887986712;
    tmp_msg_1.z_units = 119U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7206830789184053;
    msg.lon = 0.0006367330551041439;
    msg.radius = 0.4179693077948332;

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
    msg.setTimeStamp(0.4972064027311702);
    msg.setSource(40418U);
    msg.setSourceEntity(112U);
    msg.setDestination(40393U);
    msg.setDestinationEntity(203U);
    msg.flags = 92U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4357991298231776;
    tmp_msg_0.speed_units = 143U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6246820739909641;
    tmp_msg_1.z_units = 46U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3731446310178529;
    msg.lon = 0.9433559566092653;
    msg.radius = 0.9210265523940535;

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
    msg.setTimeStamp(0.896202215042508);
    msg.setSource(54355U);
    msg.setSourceEntity(24U);
    msg.setDestination(27471U);
    msg.setDestinationEntity(165U);
    msg.flags = 48U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4481974409244701;
    tmp_msg_0.speed_units = 102U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8222943274499287;
    tmp_msg_1.z_units = 119U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8797758118694521;
    msg.lon = 0.3684900089016937;
    msg.radius = 0.7380050310934028;

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
    msg.setTimeStamp(0.663071031201817);
    msg.setSource(52210U);
    msg.setSourceEntity(167U);
    msg.setDestination(15811U);
    msg.setDestinationEntity(35U);
    msg.control_src = 25350U;
    msg.control_ent = 30U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 183U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.710901056054945;
    tmp_tmp_msg_0_0.speed_units = 225U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5518045438530603;
    tmp_tmp_msg_0_1.z_units = 30U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.12382896518056086;
    tmp_msg_0.lon = 0.15485552183989193;
    tmp_msg_0.radius = 0.6089264788075699;
    msg.reference.set(tmp_msg_0);
    msg.state = 70U;
    msg.proximity = 38U;

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
    msg.setTimeStamp(0.7304919543375052);
    msg.setSource(50942U);
    msg.setSourceEntity(31U);
    msg.setDestination(47594U);
    msg.setDestinationEntity(79U);
    msg.control_src = 12739U;
    msg.control_ent = 69U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 159U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1353245949299453;
    tmp_tmp_msg_0_0.speed_units = 65U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.617122956891748;
    tmp_tmp_msg_0_1.z_units = 21U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.022588396393070087;
    tmp_msg_0.lon = 0.4562287103174837;
    tmp_msg_0.radius = 0.923718285092216;
    msg.reference.set(tmp_msg_0);
    msg.state = 76U;
    msg.proximity = 84U;

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
    msg.setTimeStamp(0.14815448936270226);
    msg.setSource(56807U);
    msg.setSourceEntity(241U);
    msg.setDestination(24961U);
    msg.setDestinationEntity(50U);
    msg.control_src = 28774U;
    msg.control_ent = 132U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 208U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.10703436021894064;
    tmp_tmp_msg_0_0.speed_units = 172U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.71098843518802;
    tmp_tmp_msg_0_1.z_units = 141U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.09535517680851835;
    tmp_msg_0.lon = 0.8174019473215824;
    tmp_msg_0.radius = 0.9690946079741811;
    msg.reference.set(tmp_msg_0);
    msg.state = 220U;
    msg.proximity = 81U;

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
    msg.setTimeStamp(0.5739753238248282);
    msg.setSource(41801U);
    msg.setSourceEntity(134U);
    msg.setDestination(10371U);
    msg.setDestinationEntity(230U);
    msg.ax_cmd = 0.8286797099589563;
    msg.ay_cmd = 0.48327442385645425;
    msg.az_cmd = 0.02258272883571555;
    msg.ax_des = 0.8044227855262404;
    msg.ay_des = 0.1026492834992565;
    msg.az_des = 0.4850869584346955;
    msg.virt_err_x = 0.4723566447185933;
    msg.virt_err_y = 0.23825046304301145;
    msg.virt_err_z = 0.7075150019736707;
    msg.surf_fdbk_x = 0.5876425797138075;
    msg.surf_fdbk_y = 0.8069204538284117;
    msg.surf_fdbk_z = 0.19067805413478656;
    msg.surf_unkn_x = 0.966175271547664;
    msg.surf_unkn_y = 0.13961917093980192;
    msg.surf_unkn_z = 0.14591732847201733;
    msg.ss_x = 0.031370413701967914;
    msg.ss_y = 0.6817709537163813;
    msg.ss_z = 0.7866440824913901;

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
    msg.setTimeStamp(0.5182125210225269);
    msg.setSource(47549U);
    msg.setSourceEntity(232U);
    msg.setDestination(9339U);
    msg.setDestinationEntity(152U);
    msg.ax_cmd = 0.27381330991855857;
    msg.ay_cmd = 0.4036930252824792;
    msg.az_cmd = 0.2300379907798904;
    msg.ax_des = 0.7210777895028614;
    msg.ay_des = 0.36113058318444613;
    msg.az_des = 0.11712131093675715;
    msg.virt_err_x = 0.6112200063391409;
    msg.virt_err_y = 0.7921665775235858;
    msg.virt_err_z = 0.8509082710735721;
    msg.surf_fdbk_x = 0.8885740671060309;
    msg.surf_fdbk_y = 0.8720201056359914;
    msg.surf_fdbk_z = 0.3375047760695631;
    msg.surf_unkn_x = 0.37808818013352286;
    msg.surf_unkn_y = 0.7633824836500739;
    msg.surf_unkn_z = 0.4586947449406532;
    msg.ss_x = 0.15789248618059137;
    msg.ss_y = 0.6699411401416011;
    msg.ss_z = 0.11050896385123099;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ATDNXFUKXYEFJCIRYIUIHAKNTLUSNSEPHHJWZJQHXOABREVPWKQJWMAZVRVZZUFY");
    tmp_msg_0.dist = 0.5363248887670785;
    tmp_msg_0.err = 0.4801107973343174;
    tmp_msg_0.ctrl_imp = 0.022701006498949905;
    tmp_msg_0.rel_dir_x = 0.365436729937327;
    tmp_msg_0.rel_dir_y = 0.5869317650216919;
    tmp_msg_0.rel_dir_z = 0.7281892543384533;
    tmp_msg_0.err_x = 0.4427393522803067;
    tmp_msg_0.err_y = 0.7930151858771772;
    tmp_msg_0.err_z = 0.6537426603319928;
    tmp_msg_0.rf_err_x = 0.7156561531812815;
    tmp_msg_0.rf_err_y = 0.6271012451588031;
    tmp_msg_0.rf_err_z = 0.5855798755395044;
    tmp_msg_0.rf_err_vx = 0.650330435462635;
    tmp_msg_0.rf_err_vy = 0.19089590873931606;
    tmp_msg_0.rf_err_vz = 0.7578924657066094;
    tmp_msg_0.ss_x = 0.8743679992224219;
    tmp_msg_0.ss_y = 0.9370510408440824;
    tmp_msg_0.ss_z = 0.9552438518968844;
    tmp_msg_0.virt_err_x = 0.32255153978377804;
    tmp_msg_0.virt_err_y = 0.24276025874875817;
    tmp_msg_0.virt_err_z = 0.4369385557052732;
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
    msg.setTimeStamp(0.8590990668914873);
    msg.setSource(11431U);
    msg.setSourceEntity(151U);
    msg.setDestination(36828U);
    msg.setDestinationEntity(160U);
    msg.ax_cmd = 0.35204477611248397;
    msg.ay_cmd = 0.3098960300270316;
    msg.az_cmd = 0.23951954434152078;
    msg.ax_des = 0.39817205964783875;
    msg.ay_des = 0.0013910720534906496;
    msg.az_des = 0.7763675582624104;
    msg.virt_err_x = 0.4282754786512384;
    msg.virt_err_y = 0.6132573046450451;
    msg.virt_err_z = 0.31961899168426344;
    msg.surf_fdbk_x = 0.6468634515665599;
    msg.surf_fdbk_y = 0.041604509805290846;
    msg.surf_fdbk_z = 0.6924229852626006;
    msg.surf_unkn_x = 0.7592101457001771;
    msg.surf_unkn_y = 0.6706473435635321;
    msg.surf_unkn_z = 0.5602206513744732;
    msg.ss_x = 0.04144037191263639;
    msg.ss_y = 0.30969666393057127;
    msg.ss_z = 0.4988314116086815;

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
    msg.setTimeStamp(0.4415887775045877);
    msg.setSource(59594U);
    msg.setSourceEntity(161U);
    msg.setDestination(8315U);
    msg.setDestinationEntity(18U);
    msg.s_id.assign("AYCASWGBNPNDDYMOIFMKZAINOJCQXUPECMDBIJONUAVUVHTNQJLRUZDBFM");
    msg.dist = 0.5361301800732876;
    msg.err = 0.19601595397476523;
    msg.ctrl_imp = 0.31820090372196885;
    msg.rel_dir_x = 0.4164759068056362;
    msg.rel_dir_y = 0.8781126010974022;
    msg.rel_dir_z = 0.9783071525545348;
    msg.err_x = 0.47538744628294993;
    msg.err_y = 0.17282807685612822;
    msg.err_z = 0.7141049098653925;
    msg.rf_err_x = 0.7123862400936921;
    msg.rf_err_y = 0.1458470335897457;
    msg.rf_err_z = 0.49174241964863086;
    msg.rf_err_vx = 0.7455993896036035;
    msg.rf_err_vy = 0.10695360175737056;
    msg.rf_err_vz = 0.33219966077325813;
    msg.ss_x = 0.334571046578206;
    msg.ss_y = 0.5286173403382934;
    msg.ss_z = 0.4523606845095671;
    msg.virt_err_x = 0.9789336291036891;
    msg.virt_err_y = 0.39696467034587846;
    msg.virt_err_z = 0.3541115197262681;

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
    msg.setTimeStamp(0.7388428092504803);
    msg.setSource(18103U);
    msg.setSourceEntity(77U);
    msg.setDestination(46353U);
    msg.setDestinationEntity(232U);
    msg.s_id.assign("GREQHSQNDOMAMJVKZLLNZYRWYHUBKKQVEWFMWUDNMSVRIBPTWNJJQYFGSCUZXVPYWQHTZHLVXFERBRSGNGBLHVBQXHOGYHDZJXGCYWKPVZDSH");
    msg.dist = 0.2971855913829087;
    msg.err = 0.8672335468805807;
    msg.ctrl_imp = 0.7708935197113697;
    msg.rel_dir_x = 0.3889200036934528;
    msg.rel_dir_y = 0.6120778131618889;
    msg.rel_dir_z = 0.2934475456112703;
    msg.err_x = 0.3250661351067995;
    msg.err_y = 0.6713273736238625;
    msg.err_z = 0.30107602814435486;
    msg.rf_err_x = 0.8219362490333714;
    msg.rf_err_y = 0.655664228433766;
    msg.rf_err_z = 0.7977328750118122;
    msg.rf_err_vx = 0.6721945532961849;
    msg.rf_err_vy = 0.6751107885454071;
    msg.rf_err_vz = 0.9168658968609449;
    msg.ss_x = 0.816803978418925;
    msg.ss_y = 0.706217303202489;
    msg.ss_z = 0.5866162304741765;
    msg.virt_err_x = 0.7534982616486696;
    msg.virt_err_y = 0.8047178455838452;
    msg.virt_err_z = 0.6846627050142012;

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
    msg.setTimeStamp(0.908842626516078);
    msg.setSource(39637U);
    msg.setSourceEntity(159U);
    msg.setDestination(2049U);
    msg.setDestinationEntity(244U);
    msg.s_id.assign("ZXJEQOFDECIZSWVKMYSEEMHXOBNKHJNNDFANTGFRLNFRPUFRCXQZXUPMTLBETFCSLUBDPNPTGNDLDRZBSDFLOHBQIRBWCCACIWNYKZVQUSCPHYOGIKTRMJXAVCHYVVUDWHAXJMBTIFLEAKFGVVJL");
    msg.dist = 0.045291215362496584;
    msg.err = 0.38583091449458407;
    msg.ctrl_imp = 0.44252966318042963;
    msg.rel_dir_x = 0.5433265737465641;
    msg.rel_dir_y = 0.06068201292270081;
    msg.rel_dir_z = 0.6524060869608833;
    msg.err_x = 0.19137801617079309;
    msg.err_y = 0.03709234523683613;
    msg.err_z = 0.4204445425436105;
    msg.rf_err_x = 0.20340378159419814;
    msg.rf_err_y = 0.8883256726256324;
    msg.rf_err_z = 0.40817449314586896;
    msg.rf_err_vx = 0.8452056566753615;
    msg.rf_err_vy = 0.1414998272540514;
    msg.rf_err_vz = 0.9960649573216326;
    msg.ss_x = 0.9979521634621212;
    msg.ss_y = 0.471673172066285;
    msg.ss_z = 0.4278109169386787;
    msg.virt_err_x = 0.2973038678257305;
    msg.virt_err_y = 0.5895115498745507;
    msg.virt_err_z = 0.7569852781201244;

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
    msg.setTimeStamp(0.4082065397204715);
    msg.setSource(61715U);
    msg.setSourceEntity(158U);
    msg.setDestination(60597U);
    msg.setDestinationEntity(111U);
    msg.timeout = 25025U;
    msg.rpm = 0.8817537640371976;
    msg.direction = 194U;
    msg.custom.assign("JBCSDMSCRJNBZUYMBJXFPGDMXWCMCJBTANRGDVEQHDNEMXEFGHMSDEZIBWZMDLYRNCYUFFBQBGATCXIRKZNKHQUPIIREZUOLZSPIMGSOIXXWFHDQMHALQCRLJPSDBKXOPPAKAOOHWMPJFTSVXWHKVGUQOIJOHHHETYOVUUFYVJYLZZWJRYYTTXVRNKKUWGVTPQWNFZNTQTAKFIXYEKQRUWQ");

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
    msg.setTimeStamp(0.5266399236024946);
    msg.setSource(36190U);
    msg.setSourceEntity(19U);
    msg.setDestination(21576U);
    msg.setDestinationEntity(122U);
    msg.timeout = 64261U;
    msg.rpm = 0.32290508023998266;
    msg.direction = 238U;
    msg.custom.assign("JNVVXJFKCPPJEYBOUMJEUSJCEVHBNUWODGYBQCBTDRNRPAAG");

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
    msg.setTimeStamp(0.44487329466285985);
    msg.setSource(31157U);
    msg.setSourceEntity(141U);
    msg.setDestination(18687U);
    msg.setDestinationEntity(102U);
    msg.timeout = 30227U;
    msg.rpm = 0.11637052986326113;
    msg.direction = 65U;
    msg.custom.assign("MHWUYFCKHYEUSMAIUGSMKLZWYAJJHEBADLFXPIKAQOEKFDUNYTQZXLHBCSRRQRCKAVYZDFOHBVQUGODVXLIXNCETCJFHAITBWQCTCMCNWGBFPCEUAWESMJLZJVVUVDZBGOIMPLETRFLTXVHDGIGNDRZTMRYKLTUFOMHSPUTNXIVLDNHOVIJPGYJRKSOJNMJGIFXENFGBWM");

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
    msg.setTimeStamp(0.7923683690764063);
    msg.setSource(37192U);
    msg.setSourceEntity(149U);
    msg.setDestination(9692U);
    msg.setDestinationEntity(35U);
    msg.formation_name.assign("NRPTXLRIIVWKHDZYEOFDEUCOAUTLZXQJWVXEZTSMLMGIKEQYPBWLRNUWMZKFPSLDEGRJIQILVDYNBUXFGYAHDVIZJA");
    msg.type = 248U;
    msg.op = 89U;
    msg.group_name.assign("PPOURBBHDOTC");
    msg.plan_id.assign("ZZFCXZUDEKCPTHNIZDSWAOIWGGAEDFFYJSPQHJKCKXUCIHMTXOLCKTFAEAQKNTJLSSQONWPOOLIQQURXFDFVEBMBNTJGAEVBITHWFEXAVDNXBORUPZFMXHLYMRJKLRLGTUTZJOMRZMXIWLPLHNBYWMAQGQKPHS");
    msg.description.assign("EUQTLVUOLARUHAFEWXNVAWDKWFMZOCEPFOOCBLWOAKDTJYHJZBPGXQWNQ");
    msg.reference_frame = 98U;
    msg.leader_bank_lim = 0.4891124856291996;
    msg.leader_speed_min = 0.3736242183411641;
    msg.leader_speed_max = 0.9882772388586363;
    msg.leader_alt_min = 0.6660401307892808;
    msg.leader_alt_max = 0.08685445048378582;
    msg.pos_sim_err_lim = 0.285235492005536;
    msg.pos_sim_err_wrn = 0.7108797311109283;
    msg.pos_sim_err_timeout = 50754U;
    msg.converg_max = 0.45421334557945614;
    msg.converg_timeout = 23579U;
    msg.comms_timeout = 36435U;
    msg.turb_lim = 0.9974471965673957;
    msg.custom.assign("WIYEVDLOLZOQVJOJKQALKSPLZVOSWYJQJUHXNPWRCAIICKFSDMANZZNPVBECNMLIYXPROSBQRLRWJRZOKBAGHXHVXGHGMGSZ");

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
    msg.setTimeStamp(0.5793721163044513);
    msg.setSource(31099U);
    msg.setSourceEntity(18U);
    msg.setDestination(23428U);
    msg.setDestinationEntity(0U);
    msg.formation_name.assign("PCSIOLHXORKAQCQVPHXKBIHMCTXMOATGUSDUHJDZWLCTHKZMAZBCIGKLGYHPNVRPDWZWYLUKFBXXLOOAJPZFUXWAUUBXEJJGQVQVFJEQSMUYDHFACQWDTHMXFNCVDVGRWEBOZIFMKYRLLVGUQPNSWZNEISYTEOMNXLBSYYSPYXNFQR");
    msg.type = 190U;
    msg.op = 205U;
    msg.group_name.assign("BVYAQLPGCRWZJUPPZEZUUEUZFHRZAWMCRGOCHJVUXFJPQLMLRMCFLMNVWNGXBBBODRHNTCZRYYJLBSGIJXFLMQTAFAFGXTXWIWSADIRJLATKRYOZLTHBXEPOWNAMQNQNCHVWBCWGSIZZXYKZKWFXDGESJDMUIPKTAJOBKXBFSKJNCQOVNCMIKAONFFEHKTLHY");
    msg.plan_id.assign("HWOJRDQZDBRTJSFXLGZZBCURPPTMNRXPNXKCKQTGNJHETBMKPJLDMYXMWYEYFIUGRZPMUOGLCEREAUOWXXEIJRQSEFSQWHPUVZFBVLWAATFSIYWAGLZZGVIYDHPNQJNCKSHKOZLOKRXIOHRKSQWZVXIJCAISMQXVTKQBDOFCMNKSVLBXMCSDPHTEQYBFSPFNEDYIGTLBACDVLGWMCIOYQUUTPNZHCOFAEDVID");
    msg.description.assign("LIACMDVOWZVNIEQTYLURNECHHCDGTJEOIATVRQIFEOWPDRJGBQZJFPXUAUMFXMXR");
    msg.reference_frame = 131U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11311U;
    tmp_msg_0.off_x = 0.3267712901056845;
    tmp_msg_0.off_y = 0.9274507421289552;
    tmp_msg_0.off_z = 0.7174867836922915;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.28059116943606477;
    msg.leader_speed_min = 0.9008163363842657;
    msg.leader_speed_max = 0.8692801109850621;
    msg.leader_alt_min = 0.6306767314887428;
    msg.leader_alt_max = 0.06933320326892523;
    msg.pos_sim_err_lim = 0.20834424664607343;
    msg.pos_sim_err_wrn = 0.4291926712166507;
    msg.pos_sim_err_timeout = 44753U;
    msg.converg_max = 0.34699606316966036;
    msg.converg_timeout = 24415U;
    msg.comms_timeout = 63950U;
    msg.turb_lim = 0.3886741478659911;
    msg.custom.assign("ABAIOTCMQJLIWUCQABFOWVVNHNPRMHDAORCKZHBSCAQYZYZTWXWWIFFTVRRMMAEJQGRLXZCAF");

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
    msg.setTimeStamp(0.047251458651892064);
    msg.setSource(48159U);
    msg.setSourceEntity(5U);
    msg.setDestination(53840U);
    msg.setDestinationEntity(164U);
    msg.formation_name.assign("NWIDKKFXGVLNKJKBBMLQWEAQHXICTQREXQTOXUBINGFRSOSRZANVHXWPB");
    msg.type = 230U;
    msg.op = 105U;
    msg.group_name.assign("XQNZNWQWPCJUADCUUM");
    msg.plan_id.assign("HDOCYSCLQAUYHEYRNSWFQUOWSCUCZDUUAEWHUUYJPGIMBNTTDDRYKGVHKTIVPJMSORAWMJMKSPCYKEBQCGLXMPVWNLEXITAPJYWIQDZLSROKICFJFFPMGXLWXGXTZALTNDUPBZRHJWZRBLHFGEZGSFEBPOTKCRJFNXDKBBHEZDXTJGVADLEQMYNQHIOUAAAMNXLRBZHSRVMGIVIVKKSOQFQDCBFCVJEXQISXTNFV");
    msg.description.assign("YPHFBNOXWJAPVEMZFVQQKTESCNMBWIUBTKTSNFGJIBSBGKBBBVHJRNDWGJDMAVCGEHFFTLKLYEJAOYUZNLKKQXPBFUUANRWXGNWSEOYIDQOXMJQMUDSSKURHFVQRGCVSGARTOMVUWYZTHVOLPZGCXMPKJYGCYDEMXWFPLAROODMLADALKHXPIWQCRMHICTZXLVVXZLNLNQHFRONYEDCUSTXHTJIBZYAIIHUZUZRWSQJQYRSDEWTIOPKEIZ");
    msg.reference_frame = 196U;
    msg.leader_bank_lim = 0.10475675051666722;
    msg.leader_speed_min = 0.5978905359457137;
    msg.leader_speed_max = 0.40087391141459594;
    msg.leader_alt_min = 0.409628863314201;
    msg.leader_alt_max = 0.18029138927072086;
    msg.pos_sim_err_lim = 0.4951053078856694;
    msg.pos_sim_err_wrn = 0.30270874258973235;
    msg.pos_sim_err_timeout = 45767U;
    msg.converg_max = 0.9913310749173195;
    msg.converg_timeout = 61996U;
    msg.comms_timeout = 10704U;
    msg.turb_lim = 0.6068235353759621;
    msg.custom.assign("YJCNSSZCHXLYDHPKWENQIJLEFVWZGTTPQEKTRBHLZIMOTMWVPNFMUPFJRIBDEANVPJNXLMIHGBKVCNUAGLEVQOWVBQA");

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
    msg.setTimeStamp(0.094457647978335);
    msg.setSource(55259U);
    msg.setSourceEntity(235U);
    msg.setDestination(2926U);
    msg.setDestinationEntity(48U);
    msg.timeout = 3708U;
    msg.lat = 0.7525289015370676;
    msg.lon = 0.6538793759706357;
    msg.z = 0.5414274289370261;
    msg.z_units = 110U;
    msg.speed = 0.50654583703338;
    msg.speed_units = 8U;
    msg.custom.assign("OTKADSYZJZMEYGFHTCOXGVHEYXRRJDLGOAWLQJTUBPLPOQMSMSDBANJJWPYTMDWAFIMOZFILYDMGFRMPRSVNZSCKUFFQRLRBVVKTPJDIJLEUWHILSMARBVBXTRXQBURSXIGBLBQFV");

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
    msg.setTimeStamp(0.5632577272468334);
    msg.setSource(14180U);
    msg.setSourceEntity(229U);
    msg.setDestination(54256U);
    msg.setDestinationEntity(19U);
    msg.timeout = 35650U;
    msg.lat = 0.6284102559598196;
    msg.lon = 0.09854609465993636;
    msg.z = 0.15267759523233826;
    msg.z_units = 181U;
    msg.speed = 0.8596911985160902;
    msg.speed_units = 190U;
    msg.custom.assign("TAXENXJNFLAISGCYGKLIMLMJZLEODYQUAFKNOSBPFPNQHWMLAHYFHIHSAFOSWDMOBWWLMYOIBQCLZKXEWEZNSSKPENUSSGULCXZNRRALXKCQTPWGFDVGGBJJUYRCXKDGEMVUEJYXFBQLJTCRQDYFQZR");

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
    msg.setTimeStamp(0.7670859189592919);
    msg.setSource(55403U);
    msg.setSourceEntity(183U);
    msg.setDestination(55379U);
    msg.setDestinationEntity(210U);
    msg.timeout = 61003U;
    msg.lat = 0.6218127157165052;
    msg.lon = 0.6778192265705328;
    msg.z = 0.28850230378739883;
    msg.z_units = 187U;
    msg.speed = 0.15382723218986305;
    msg.speed_units = 179U;
    msg.custom.assign("GYKGNXHDIVTZCRPPXCSOSAJCAPQKVSHOCMCIPFKISLPITYRILSNUVKBJFBEXWXBUJJGZMUILTOHZNQCFLWDMXTQDGIDHJJFSROZMFNBBMVMQWFXGAEDCDOATOUBPEPQXJKTZWYYDKLYFVXONWVLTLCWBZONUAVGLJDXHSWCEQOHIIZDQFKAHEMMJRJTWNHSLUYBSPMNIPEBFVYRRTKGHWAQTREOARBZEHYSYQWUXRNPDUGARMULUZFQVCYGGA");

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
    msg.setTimeStamp(0.8711974698354561);
    msg.setSource(31804U);
    msg.setSourceEntity(165U);
    msg.setDestination(9727U);
    msg.setDestinationEntity(17U);
    msg.timeout = 60767U;
    msg.lat = 0.9964778396115694;
    msg.lon = 0.5086338136433729;
    msg.z = 0.12322910650854291;
    msg.z_units = 121U;
    msg.speed = 0.16084460331047767;
    msg.speed_units = 254U;
    msg.custom.assign("MWXIWAZDXALQFOTYDWAATFKRHRORJJYLNBOICUBAGYBRHKSLXQWBUHAPMVYIHOTHRZJCYWSJPQJGHQNAKNDNTSISCMWZKBSDPEEEFUTWXWZJHNOVRQSCDWENGLEUKSLQVEMDLZBP");

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
    msg.setTimeStamp(0.6383053280235856);
    msg.setSource(60844U);
    msg.setSourceEntity(95U);
    msg.setDestination(3539U);
    msg.setDestinationEntity(163U);
    msg.timeout = 14405U;
    msg.lat = 0.3277772219312538;
    msg.lon = 0.8878197432735666;
    msg.z = 0.8544943611968758;
    msg.z_units = 84U;
    msg.speed = 0.6096151941938437;
    msg.speed_units = 200U;
    msg.custom.assign("VPVPBKCHHTDVJZIGEZYHRRZEQFCPNDTGHZXTHRRHZLHYNLBJZOJVHASVIFLOXMCNSLPIMTGGSOBEYBQSBCSIAZUFXVSUPAVKSNTRYEOKBNUQDNOAGYCYMCXKTKDHDQJNWJUFVKSSIYFJEPLCQCWXKIDAGOWAYO");

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
    msg.setTimeStamp(0.8976283808907023);
    msg.setSource(44739U);
    msg.setSourceEntity(160U);
    msg.setDestination(45648U);
    msg.setDestinationEntity(190U);
    msg.timeout = 47545U;
    msg.lat = 0.151929842747916;
    msg.lon = 0.40873939266723625;
    msg.z = 0.6962453206662513;
    msg.z_units = 180U;
    msg.speed = 0.9452903600446949;
    msg.speed_units = 67U;
    msg.custom.assign("OPNMAKPPPITDOTJJVXLIRMVDBMWNLJSDOSOKZURYGLCUUFDDWYLNNBJFRFSXQLYCFEVZVUYEMIWOKSEFBVRMQIVZNKUFMCWAJNZMYIHINCBYDRGEMCGYKJTSHBSWHHKSJEQRKBJSDXLLQUQNGTXDRSVW");

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
    msg.setTimeStamp(0.29155156703017016);
    msg.setSource(63777U);
    msg.setSourceEntity(160U);
    msg.setDestination(49720U);
    msg.setDestinationEntity(77U);
    msg.arrival_time = 0.37191317172452654;
    msg.lat = 0.8570879743573812;
    msg.lon = 0.8502645825404371;
    msg.z = 0.36987098049989664;
    msg.z_units = 68U;
    msg.travel_z = 0.33108956810231926;
    msg.travel_z_units = 100U;
    msg.delayed = 56U;

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
    msg.setTimeStamp(0.30832226819951347);
    msg.setSource(31798U);
    msg.setSourceEntity(51U);
    msg.setDestination(47366U);
    msg.setDestinationEntity(30U);
    msg.arrival_time = 0.5587990774532154;
    msg.lat = 0.19431373350373393;
    msg.lon = 0.7126061823753659;
    msg.z = 0.31316745165526505;
    msg.z_units = 253U;
    msg.travel_z = 0.3674518082324606;
    msg.travel_z_units = 100U;
    msg.delayed = 236U;

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
    msg.setTimeStamp(0.03931085668662848);
    msg.setSource(24667U);
    msg.setSourceEntity(72U);
    msg.setDestination(11227U);
    msg.setDestinationEntity(53U);
    msg.arrival_time = 0.058211604662733785;
    msg.lat = 0.8861302754508656;
    msg.lon = 0.8750294306403841;
    msg.z = 0.23495601137849342;
    msg.z_units = 176U;
    msg.travel_z = 0.9016637254188752;
    msg.travel_z_units = 230U;
    msg.delayed = 194U;

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
    msg.setTimeStamp(0.9227414634031655);
    msg.setSource(15992U);
    msg.setSourceEntity(161U);
    msg.setDestination(20679U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.12438199527774729;
    msg.lon = 0.023250103535199518;
    msg.z = 0.3285413212115026;
    msg.z_units = 114U;
    msg.speed = 0.8561360752831156;
    msg.speed_units = 237U;
    msg.bearing = 0.2241374399174736;
    msg.cross_angle = 0.5088961150898368;
    msg.width = 0.40796918951740957;
    msg.length = 0.19873102804551845;
    msg.coff = 158U;
    msg.angaperture = 0.617677982023228;
    msg.range = 16526U;
    msg.overlap = 213U;
    msg.flags = 250U;
    msg.custom.assign("ZKEAXOSCQFRZJRNOCQPRONEKJVDKMVVLDWKSBCTYHLLNQDGFJDMYPEQETROPNWTIAIATGGIJVHVAEZSVRHXTLLOKRVGKCXZDNDFYUEGNBZUIEASAEXFCTBAZVIYCWDGHJGJYUGNOMFRQNFJZPXWJOLISBSOYMWHT");

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
    msg.setTimeStamp(0.3349895761281555);
    msg.setSource(52272U);
    msg.setSourceEntity(108U);
    msg.setDestination(26004U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.7799850312632908;
    msg.lon = 0.8303897641809104;
    msg.z = 0.849795587189367;
    msg.z_units = 232U;
    msg.speed = 0.46218580831190637;
    msg.speed_units = 118U;
    msg.bearing = 0.5281831986165785;
    msg.cross_angle = 0.4231948605859237;
    msg.width = 0.14127495272068902;
    msg.length = 0.6950178126704097;
    msg.coff = 7U;
    msg.angaperture = 0.967292336194565;
    msg.range = 6314U;
    msg.overlap = 26U;
    msg.flags = 118U;
    msg.custom.assign("EAKGGEYSKYUZULGIZWTXROIVPQJMHENZTLWUJMVIBEKBETQMAEVDIDGOUXSFTHBYHKFYFKEXDLYICAKHJAMCHNYMUVCLOCWQBGJXOIHMOZ");

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
    msg.setTimeStamp(0.5330744278777063);
    msg.setSource(59157U);
    msg.setSourceEntity(143U);
    msg.setDestination(14847U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.41841825150688283;
    msg.lon = 0.007698356617903079;
    msg.z = 0.10363709961906897;
    msg.z_units = 152U;
    msg.speed = 0.19414875913333418;
    msg.speed_units = 181U;
    msg.bearing = 0.8932337834312958;
    msg.cross_angle = 0.9208515895384529;
    msg.width = 0.7037991458848463;
    msg.length = 0.0971325781999598;
    msg.coff = 44U;
    msg.angaperture = 0.44929030828541927;
    msg.range = 4394U;
    msg.overlap = 158U;
    msg.flags = 213U;
    msg.custom.assign("CPNHKJSPZXMEPFXYJAJXWKHUMYSCAUTUHPIKLZB");

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
    msg.setTimeStamp(0.21819374143148407);
    msg.setSource(32364U);
    msg.setSourceEntity(109U);
    msg.setDestination(12099U);
    msg.setDestinationEntity(48U);
    msg.timeout = 55229U;
    msg.lat = 0.22390553100122135;
    msg.lon = 0.3473220907441241;
    msg.z = 0.8934994819209718;
    msg.z_units = 33U;
    msg.speed = 0.6646233700928976;
    msg.speed_units = 2U;
    msg.syringe0 = 7U;
    msg.syringe1 = 246U;
    msg.syringe2 = 127U;
    msg.custom.assign("LQDRRFKTXIHGOCFVMWTHZHNAWNHXXHPVHBCYLJO");

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
    msg.setTimeStamp(0.5622160968208075);
    msg.setSource(45069U);
    msg.setSourceEntity(113U);
    msg.setDestination(32430U);
    msg.setDestinationEntity(179U);
    msg.timeout = 23657U;
    msg.lat = 0.8285698659197491;
    msg.lon = 0.4817946304699998;
    msg.z = 0.5492825427266783;
    msg.z_units = 201U;
    msg.speed = 0.7591313288489479;
    msg.speed_units = 124U;
    msg.syringe0 = 149U;
    msg.syringe1 = 108U;
    msg.syringe2 = 149U;
    msg.custom.assign("YAHLZFNKTBGOWVDCUQISAOLJXHMTPLCRLQDAMWGHXIIZMDODSDDOUZXFEYRHFCXUBKUQRVMUTNJAGRQWSGBMKWJBXSVTGWFJPFHBPN");

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
    msg.setTimeStamp(0.33668988132237276);
    msg.setSource(65501U);
    msg.setSourceEntity(18U);
    msg.setDestination(17870U);
    msg.setDestinationEntity(147U);
    msg.timeout = 30018U;
    msg.lat = 0.35779691083261733;
    msg.lon = 0.6049746036896337;
    msg.z = 0.06361974121835812;
    msg.z_units = 161U;
    msg.speed = 0.1430865640655421;
    msg.speed_units = 19U;
    msg.syringe0 = 241U;
    msg.syringe1 = 157U;
    msg.syringe2 = 65U;
    msg.custom.assign("TPCUNQWYXAGUBQHAFOAKYSHLOJKHRLLYUSXB");

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
    msg.setTimeStamp(0.45833653391740914);
    msg.setSource(61396U);
    msg.setSourceEntity(108U);
    msg.setDestination(31665U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.966887307224135);
    msg.setSource(58019U);
    msg.setSourceEntity(245U);
    msg.setDestination(22348U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.2108032904392304);
    msg.setSource(13904U);
    msg.setSourceEntity(162U);
    msg.setDestination(45565U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.9142530515688316);
    msg.setSource(29590U);
    msg.setSourceEntity(207U);
    msg.setDestination(15486U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.7341642496277548;
    msg.lon = 0.37753657886780634;
    msg.z = 0.47484414036075917;
    msg.z_units = 29U;
    msg.speed = 0.035600163710025945;
    msg.speed_units = 2U;
    msg.takeoff_pitch = 0.9989163974278285;
    msg.custom.assign("PNUQSYNLVUBLSYXLYQWAEBXPZQIHXARCZPPOLCCQVZIONDUPHTWQGTYNETROCBWPZHJGBC");

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
    msg.setTimeStamp(0.685059943231724);
    msg.setSource(13463U);
    msg.setSourceEntity(155U);
    msg.setDestination(41610U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.4959077253563202;
    msg.lon = 0.6444749095984768;
    msg.z = 0.43033277288151994;
    msg.z_units = 240U;
    msg.speed = 0.1859920343276521;
    msg.speed_units = 60U;
    msg.takeoff_pitch = 0.714348231968379;
    msg.custom.assign("AOXFVIRMRSQQLNAIZBYFDDWNFPBUIHWRZJKOJZFQTKVSHNYMCTFDIKOGEZSQEVWLICCFVVMUILNEPUZFUBLGAFGTTDKDBBBHNMQQAREPXHGWNKWMRUDTDTNQACPSZVRTOHXHFWXAL");

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
    msg.setTimeStamp(0.5558156738182847);
    msg.setSource(31946U);
    msg.setSourceEntity(228U);
    msg.setDestination(53133U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.5025261201715305;
    msg.lon = 0.01816728858091443;
    msg.z = 0.3876139805987533;
    msg.z_units = 121U;
    msg.speed = 0.6397710382812701;
    msg.speed_units = 112U;
    msg.takeoff_pitch = 0.16241059734734387;
    msg.custom.assign("OLMTLGTNPIKLSCBQHFANQLFIGNYABXDKNCDUYJQWGTZMCNZNACRHUTIIIFWHNPLVXKTXQXNLFVLUIFEOKRPVDXKSYZMRKVMRGVZRLYVEOPEYSOQHATHYSORCJXIPXSTOCFJGCVFBKCVLJBNRUTUYGDWHWJSUEZIITQA");

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
    msg.setTimeStamp(0.09970944632263035);
    msg.setSource(4975U);
    msg.setSourceEntity(200U);
    msg.setDestination(24727U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.2588038116273176;
    msg.lon = 0.8261277921619048;
    msg.z = 0.3859186551443524;
    msg.z_units = 225U;
    msg.speed = 0.11970537804212456;
    msg.speed_units = 239U;
    msg.abort_z = 0.18628540550438533;
    msg.bearing = 0.47837417719950215;
    msg.glide_slope = 32U;
    msg.glide_slope_alt = 0.827674098613371;
    msg.custom.assign("FIHIWCPYPJPIGVJDZTXYYKGYEXTZKNBUKNSDWMJCBITTEFFYKL");

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
    msg.setTimeStamp(0.5839520829973438);
    msg.setSource(34660U);
    msg.setSourceEntity(122U);
    msg.setDestination(59686U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.4364175868938407;
    msg.lon = 0.5436474333200558;
    msg.z = 0.15516211873544716;
    msg.z_units = 15U;
    msg.speed = 0.07235407589463161;
    msg.speed_units = 159U;
    msg.abort_z = 0.2165315579049032;
    msg.bearing = 0.9689242402201463;
    msg.glide_slope = 194U;
    msg.glide_slope_alt = 0.0025537872121166316;
    msg.custom.assign("KGWPYXMZMXFHBRGVMVSIULBTGTHRFQWFSSTDJSAKQFJRUZICNCCPDGJMDCYLWGGOAWKWLEWUFQXONRCONVKZOPCSLUMKYFGUTNZJPHGHMHYPSQQCWBSKXTEBWHKYPREZVUQLDJCTUJEOBNEZOIFYHZZRVYUJBROWBOKDZEACLSYMBEAQNSQXFIVDEHHMBIAC");

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
    msg.setTimeStamp(0.39842555603589835);
    msg.setSource(16555U);
    msg.setSourceEntity(237U);
    msg.setDestination(53356U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.08949218687525307;
    msg.lon = 0.13337812944540894;
    msg.z = 0.804404087805695;
    msg.z_units = 251U;
    msg.speed = 0.6535429965780898;
    msg.speed_units = 250U;
    msg.abort_z = 0.48563833427544234;
    msg.bearing = 0.37647541214071234;
    msg.glide_slope = 222U;
    msg.glide_slope_alt = 0.10631396346637378;
    msg.custom.assign("ANEMTGEWFXUQSRVEOWGVJISGWYHHMCJBMYFSEYIBQZAZJXMZTKYENJP");

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
    msg.setTimeStamp(0.9374005884483292);
    msg.setSource(42199U);
    msg.setSourceEntity(83U);
    msg.setDestination(20812U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.9946289500470433;
    msg.lon = 0.6705890254063687;
    msg.speed = 0.7129579832061997;
    msg.speed_units = 158U;
    msg.limits = 32U;
    msg.max_depth = 0.08282416672068527;
    msg.min_alt = 0.9954739722762529;
    msg.time_limit = 0.1565644495680376;
    msg.controller.assign("UJWNYSZETNMDKXHTTVVFMCDVEXQJLLROFIBXHZNCKOESAWXCGGTFFSPVXHFGCBHJTVZMNBXUHTMMBXXRZPGVEQFNOZGUUDHDCGBOYQEYKIWJRVFPN");
    msg.custom.assign("AODEIVMPWWIIPMMVFFWXYTLDEHMNANQGAKGDTWVDNKZJUJPEJNMXHOCLXUOFRETUFRHZOHMZJALIORHCZUTEPLSYCTWIIBQYXYISGROBUBSLNIZDFNVMXNTQBMHXUJLRCSFOAYCICVJSBGFJJUDYYGGXNCVPBNRCETXWAWDSLXQMZQMEPLCEKKTVHQQEKEBUQQPRTJQZKGJRPYKPSGTO");

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
    msg.setTimeStamp(0.45613527986950586);
    msg.setSource(13435U);
    msg.setSourceEntity(135U);
    msg.setDestination(32905U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.25623179164971566;
    msg.lon = 0.5852426846048565;
    msg.speed = 0.9376369947156822;
    msg.speed_units = 221U;
    msg.limits = 106U;
    msg.max_depth = 0.6681055490778642;
    msg.min_alt = 0.17064960969623855;
    msg.time_limit = 0.35123837421778725;
    msg.controller.assign("JWUNICAFLERYFJRJFMXMDIDULWINMTEQVOLGDSORQIUCXCKFOTGOANFBMAJQBHXRIRBBLVPAZVZKTKHGHDSDOIAZEODUQGEGPVOSPDMBPTCTJKWPAOUTWWSCFKJNYOHEGLBLPBQSXPSWEDFHQUWOERXNUZIBVTYQUVNGJDQURLYIS");
    msg.custom.assign("TSBOVLGSUWXRNHXHHCWJKUPKVCFYSBNIVMNFLEACIWHHZDTLQWMQMCGYABKDQNFUUWGAGPUHYHOTPXMDFLKXQPAEFMKRRILPHXXGVBMGTSVTCRSGRLZUXJKUKEVUMJHOWOZDZSXDNMQCIPIUNYWFNJNZESXJJNWVTBARPJATAWAWQFLOIQZGZPUBEBTKORLFEYSRLCVBEYBZJGDEQTXGOSANOYLOMECIPCQOD");

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
    msg.setTimeStamp(0.14430257994722606);
    msg.setSource(8839U);
    msg.setSourceEntity(223U);
    msg.setDestination(14551U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.9634980917534094;
    msg.lon = 0.9876594814098107;
    msg.speed = 0.7736813606002946;
    msg.speed_units = 114U;
    msg.limits = 234U;
    msg.max_depth = 0.4800607611294835;
    msg.min_alt = 0.4100679171325946;
    msg.time_limit = 0.3027168039656265;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2556284437014683;
    tmp_msg_0.lon = 0.19163755140030947;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ILMGKIHNAIZPJZUZZQPASDDNIZSEHMIROVLFQNNKPGAHSPQOYWQEBMFKUXOYFESXIACBFPUUGHYZWLXBTHMKEFSJFLHOTRCEHBYETVKCYJDWABNDOWGNTKKNGXAOUYUQGZRMVLZMDRILEFRJUCTKOJWVCQREJOMFMNMEPZDCYPQIWIFBQGRYDWAXMJJDYHTOFAISGGQUJVJPV");
    msg.custom.assign("UKQAMDHIBMQYQLZUNAZJBWNUUOCSUYHBPLWOCZWJLRMHKGWOZVVXAQFFRYCEREYZBINQEHXXGIISDRATHWCXNDGWEVDDPQCTXOIJYIKBEUSBRQFCNMXFKGSEAVWGUEAMLDPJCSEFLZSIXRNVBJDFQTHIRKTGOURICRWPYDPVLHSPLTSEJYTWNCSUTYPBDDLJOZHWNMANSOJZMPJGMAPOBGMXUEOMOQFVHIZVRBQVTTTKYHKXFVNL");

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
    msg.setTimeStamp(0.5793138812571909);
    msg.setSource(55567U);
    msg.setSourceEntity(50U);
    msg.setDestination(19622U);
    msg.setDestinationEntity(59U);
    msg.target.assign("GEBMWOOONQFXEGHCRILHUQVGPVWDUYSZLRXZJBMVUUZCDNODKZGHE");
    msg.max_speed = 0.9058936553931088;
    msg.speed_units = 134U;
    msg.lat = 0.13386067023512915;
    msg.lon = 0.6397110872186349;
    msg.z = 0.9774422765110902;
    msg.z_units = 122U;
    msg.custom.assign("JBXDOZPNGUPMFNBJHFRSTXCOGBEHZMLJWJKXROVMKSMEFGYPHIHJQMUUQKYVYWTFGMCDHJLFFFFLTKDKURBVOMSCBJZYYUJVLGUNILIPIBEJAKRDUZHVWZZXIKAEETLQYVTMYYZYITWJSNPDNGTGXBXNBIPAABPOSHVRGASVXVKESCOSUCXWPSNCRMM");

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
    msg.setTimeStamp(0.30569537297566984);
    msg.setSource(43830U);
    msg.setSourceEntity(167U);
    msg.setDestination(3773U);
    msg.setDestinationEntity(93U);
    msg.target.assign("BLOMHSRZEVXJLAWKQUQXQFFMRBIXDSTQZCVEAAYPTKFRXUMRZYVTYPEPNGBVRYEZSDHDQZNIFATRPGROXCSFLYNBLOPRFKWOAGBDZIHYHTYSCPLGHJOGDIKC");
    msg.max_speed = 0.2798655216919447;
    msg.speed_units = 43U;
    msg.lat = 0.07265792262547077;
    msg.lon = 0.9378655232617071;
    msg.z = 0.7049586368166866;
    msg.z_units = 199U;
    msg.custom.assign("POBXNNEPTXWVHYJBDTUCGORLMNMX");

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
    msg.setTimeStamp(0.740160762149441);
    msg.setSource(4734U);
    msg.setSourceEntity(109U);
    msg.setDestination(18081U);
    msg.setDestinationEntity(76U);
    msg.target.assign("WTNVNRPIEBIJTPXUYISIKLKQENOGMWOWUGPGFUNPWZYDIKJUNLSXEFJOVPRPCQDIAUFTIBHKTSLNTJECZVHLVHQUMVCVNYZIXTQBLMKMAWPNCPWRKGBELCDZJEMMFFDDTORXSEJZBGUJJDDSXZVZBKYRAGVMXPVT");
    msg.max_speed = 0.7111870810438033;
    msg.speed_units = 116U;
    msg.lat = 0.7769473658263785;
    msg.lon = 0.625289536770043;
    msg.z = 0.291417116505996;
    msg.z_units = 159U;
    msg.custom.assign("QKHUHTYWEVPEURMWIHTWASSOWREMYWQPSJWEIYMNCTPHSACBLVHQSDVZDZIRTUJHXRQUXPCBBPNPDYKUVOBUBTPHQSOQNYMBCJOGGIHTNZEXWLSTZVKQCDIZOWLMXQMQJDGARNJKCVVVZLNGXVZAHF");

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
    msg.setTimeStamp(0.13036389419163574);
    msg.setSource(3921U);
    msg.setSourceEntity(41U);
    msg.setDestination(7944U);
    msg.setDestinationEntity(201U);
    msg.timeout = 15853U;
    msg.lat = 0.8366901733391219;
    msg.lon = 0.49384487397590726;
    msg.speed = 0.21899747035478712;
    msg.speed_units = 212U;
    msg.custom.assign("MUJSVBABETPMYOAIBVBNXWHGDKGESIPGNZDDKQMNSKUFCMOEVFLDP");

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
    msg.setTimeStamp(0.8255557817820397);
    msg.setSource(7230U);
    msg.setSourceEntity(238U);
    msg.setDestination(60002U);
    msg.setDestinationEntity(166U);
    msg.timeout = 7123U;
    msg.lat = 0.4585737034037467;
    msg.lon = 0.49390241764385623;
    msg.speed = 0.4768072184012183;
    msg.speed_units = 29U;
    msg.custom.assign("XUVUSDQPNPSVIABDMJIZNOERZYKMASAGIKBRX");

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
    msg.setTimeStamp(0.4723897548423097);
    msg.setSource(37630U);
    msg.setSourceEntity(12U);
    msg.setDestination(45930U);
    msg.setDestinationEntity(198U);
    msg.timeout = 35219U;
    msg.lat = 0.9170747405625557;
    msg.lon = 0.7549164579811487;
    msg.speed = 0.7030983228183293;
    msg.speed_units = 41U;
    msg.custom.assign("QROXFKMHIYFLBHRXISDJFYUEDCZQCMU");

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
    msg.setTimeStamp(0.36879793266768357);
    msg.setSource(48163U);
    msg.setSourceEntity(90U);
    msg.setDestination(48793U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.546150517607119;
    msg.lon = 0.15038453766856075;
    msg.z = 0.3348967333660272;
    msg.z_units = 82U;
    msg.radius = 0.8961747634732888;
    msg.duration = 57822U;
    msg.speed = 0.2850904846474608;
    msg.speed_units = 55U;
    msg.popup_period = 5380U;
    msg.popup_duration = 11582U;
    msg.flags = 211U;
    msg.custom.assign("BJAZSGUZONTWWGSFMPKKLTQLTHIJAHGNQIGEXUALKCKMUMLQYJMMNNAMJHANUXDECVPOAJQRRNCYWYBPKDADXDOAAIRFOOFQEIZDWLZGNESQRZZYUBTNBDFKEHGUSOXQLYTDMVPDCCOBPB");

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
    msg.setTimeStamp(0.39356397743201543);
    msg.setSource(9781U);
    msg.setSourceEntity(32U);
    msg.setDestination(32909U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.3274382941374451;
    msg.lon = 0.5280302960130553;
    msg.z = 0.008577653033911004;
    msg.z_units = 150U;
    msg.radius = 0.6028225667380264;
    msg.duration = 61068U;
    msg.speed = 0.8385794925178064;
    msg.speed_units = 114U;
    msg.popup_period = 38507U;
    msg.popup_duration = 15953U;
    msg.flags = 171U;
    msg.custom.assign("TTJZRQHJFNHUPGYHFRIMSOMWUKNZKSKJRTPUSAHXUNLAKDCGIGFDWINR");

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
    msg.setTimeStamp(0.8948597411999482);
    msg.setSource(6574U);
    msg.setSourceEntity(178U);
    msg.setDestination(55484U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.7893945383345405;
    msg.lon = 0.45920197233067317;
    msg.z = 0.2151565320322082;
    msg.z_units = 233U;
    msg.radius = 0.5935011895903453;
    msg.duration = 33327U;
    msg.speed = 0.1213111341939741;
    msg.speed_units = 175U;
    msg.popup_period = 61219U;
    msg.popup_duration = 36827U;
    msg.flags = 254U;
    msg.custom.assign("KZUOGFPKCWHENURSDZMLGXERIUFGDAFTEENLWEHWSLOIBVKNTVNXHWYGZHOOBGXYDYVFZKLK");

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
    msg.setTimeStamp(0.49743846125940305);
    msg.setSource(45895U);
    msg.setSourceEntity(43U);
    msg.setDestination(55334U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.7923965169008069);
    msg.setSource(53655U);
    msg.setSourceEntity(38U);
    msg.setDestination(17431U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.7814589764037181);
    msg.setSource(36958U);
    msg.setSourceEntity(92U);
    msg.setDestination(23656U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.48015647105177195);
    msg.setSource(5093U);
    msg.setSourceEntity(79U);
    msg.setDestination(2852U);
    msg.setDestinationEntity(186U);
    msg.timeout = 9732U;
    msg.lat = 0.1668177158769264;
    msg.lon = 0.9290835464504578;
    msg.z = 0.9770549651862057;
    msg.z_units = 94U;
    msg.speed = 0.5257573520315401;
    msg.speed_units = 74U;
    msg.bearing = 0.8484536793927173;
    msg.width = 0.482346801282832;
    msg.direction = 59U;
    msg.custom.assign("AJYWIPYGGLNSTDLNPCWCJBOITCYYNNRXJGXEHKDBKVMZZCDAZBTGGIN");

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
    msg.setTimeStamp(0.8908827390823468);
    msg.setSource(1408U);
    msg.setSourceEntity(10U);
    msg.setDestination(28920U);
    msg.setDestinationEntity(128U);
    msg.timeout = 10311U;
    msg.lat = 0.5133771188171203;
    msg.lon = 0.6906882130055335;
    msg.z = 0.8120061026915353;
    msg.z_units = 105U;
    msg.speed = 0.610290318521617;
    msg.speed_units = 231U;
    msg.bearing = 0.7669680250538239;
    msg.width = 0.43009561786250905;
    msg.direction = 16U;
    msg.custom.assign("INQJDQFKJFHEJMLBAMEDXWITZEEXWROFTSLNZMCPJTNFGFUMCOCNAWCLUBKTYOVBZNIMQEXPGTGFSUWGOAKGPICBAWXPYCALZNQRRFTKPQKYRLZUOMVZAXAEXHDSHIUUPRPVMVMBRPIMQHWJXUCIGCFBTIOSOAOFEUFUHHUNPDSXYHSEGLJVQNBTYWZZYPQDLHIWWKRDLYNMDKYVZEQNIDVCVTCQSXOOJVGGRZVKTEBHASDLKKGWSBHY");

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
    msg.setTimeStamp(0.4516282866401373);
    msg.setSource(3507U);
    msg.setSourceEntity(115U);
    msg.setDestination(30945U);
    msg.setDestinationEntity(6U);
    msg.timeout = 10289U;
    msg.lat = 0.03645063786389169;
    msg.lon = 0.6682057619481574;
    msg.z = 0.7693186498237051;
    msg.z_units = 50U;
    msg.speed = 0.4276494276974466;
    msg.speed_units = 118U;
    msg.bearing = 0.5677578502561834;
    msg.width = 0.31433370729848886;
    msg.direction = 83U;
    msg.custom.assign("OUCKBEJSRHGPWUSQWXHMIRMFDLBUIUYQFNXRCADVDWVKKCCXTDLULEMENAHLNOQICSOGGROZMYVEBSQMYJSKHRHSBZSOGCRBAIKCEFPLLKZAUMKXZXAYVQWTWICZVTARJLDTMERQGAHIYIGZXFGQPWPENDWYOFDPTFJBRFFLDLVWZMSGBHOYQZWXWOKUZNACDBUV");

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
    msg.setTimeStamp(0.5267781121860554);
    msg.setSource(13521U);
    msg.setSourceEntity(34U);
    msg.setDestination(59834U);
    msg.setDestinationEntity(140U);
    msg.op_mode = 145U;
    msg.error_count = 24U;
    msg.error_ents.assign("IKXPJVTXLZHARDPKXCEMPNDBRFZSPWXRMLEWORFSNRIEIKLBILKCDCLYJKIYMQURU");
    msg.maneuver_type = 15670U;
    msg.maneuver_stime = 0.45335223042718864;
    msg.maneuver_eta = 56708U;
    msg.control_loops = 1243873085U;
    msg.flags = 48U;
    msg.last_error.assign("AVQNWEBMYZKDDIJWBLSKXULRATDGHQBLGPMJLIPUCPBCQRHPCDUOJYFIZOWCHIPCFEETOXMKKWVOHUVAGVTFYSRHIYAATDYHUBKPDMZASVHETCLFBMUNRZZPESSFSVBZRLKZSXJPQORUOMCQVZYMMRWXQETGNHGKRXQWCNADNDVFBZRVEGGWCRMALOLKHSIJQTMGEXNTYUPJFEXLF");
    msg.last_error_time = 0.8954602633244242;

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
    msg.setTimeStamp(0.7127278542143571);
    msg.setSource(47804U);
    msg.setSourceEntity(156U);
    msg.setDestination(15026U);
    msg.setDestinationEntity(12U);
    msg.op_mode = 141U;
    msg.error_count = 209U;
    msg.error_ents.assign("HSCWQOIESNVPAPFRVNMGPWBDMZVEBUJAREZBFGKUOUXPMDSTGCPTYDKPEQYUWFJQYACPFTASIBIBVCJOXBLZIWYKPCVJEURWXXDDJZKLALZDNLYOIAYSWNOJIUTHMFMFCIBBNQNBJXKXDMRHHDYQSZGYOLCSEHIDEZWFGTSLJGFWZRKTPQSNHJMMUVXREOWK");
    msg.maneuver_type = 58384U;
    msg.maneuver_stime = 0.6306713418371306;
    msg.maneuver_eta = 1152U;
    msg.control_loops = 2991685986U;
    msg.flags = 15U;
    msg.last_error.assign("MVFRILTIFJEDCVWEKQTEHELEVPJNGHZMIHPWNZPBGHWBKBOQXTSYISZHMNKYTWRKQOFGMPGCARBGPRRSANRYKOEOFSZCNUPNQOEDWGBLASHJOPHKIBTSHSWEZMLLMLHFGOKVISXUDWATUMUCQJJLDADSD");
    msg.last_error_time = 0.5696583446466897;

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
    msg.setTimeStamp(0.33107551764670984);
    msg.setSource(27953U);
    msg.setSourceEntity(70U);
    msg.setDestination(51889U);
    msg.setDestinationEntity(2U);
    msg.op_mode = 219U;
    msg.error_count = 170U;
    msg.error_ents.assign("DITEMPKUNJJUVEFTFQRPWLCXGALGXEGDMNZXXK");
    msg.maneuver_type = 55365U;
    msg.maneuver_stime = 0.06398111345222668;
    msg.maneuver_eta = 29005U;
    msg.control_loops = 2188871627U;
    msg.flags = 96U;
    msg.last_error.assign("ITBMOUZIJXKQPAFPIDXPEFVHCVVHOHKTGBIJTDLGSROEXKUSMCUMRFLRKJDSZXTDULBRSTHEPWJIPLWQWYDHHOKZNYUCWJJBJZBCHUMALAOROENCUERVGVEQQGMLJAFGYIN");
    msg.last_error_time = 0.9050119968344876;

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
    msg.setTimeStamp(0.5619069193025302);
    msg.setSource(23399U);
    msg.setSourceEntity(208U);
    msg.setDestination(2423U);
    msg.setDestinationEntity(134U);
    msg.type = 99U;
    msg.request_id = 29435U;
    msg.command = 47U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 3475U;
    tmp_msg_0.lat = 0.7246818957104647;
    tmp_msg_0.lon = 0.14382255820269918;
    tmp_msg_0.z = 0.6986063394617552;
    tmp_msg_0.z_units = 158U;
    tmp_msg_0.speed = 0.3679098296604745;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.bearing = 0.4663706348407112;
    tmp_msg_0.width = 0.4448668394738866;
    tmp_msg_0.direction = 43U;
    tmp_msg_0.custom.assign("FPWNWCYOTNZSZJVCGGIGGJNKUKCQASWEBKJWZDVILFSWQYAFSTBALLSXKXQLGBREMHQLDGIXZD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 13215U;
    msg.info.assign("NTXZEPUUAVRIYZQHBMXONUOHFJKHACXYLNEACHSJCXDZXMJRNSTPKWDVVDOWFGAGIMJNDVYTRPDLWTYKRBPCMEGASQJOTRIDEQMHIULMSUKSBWGAPMPTWPBBRLIRKFWMEXVDXOECAHEKMSLFVBWZFKNKBGTTFYQDJCUJCLEJPICQNYQBVZVSIJLVPWZCXA");

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
    msg.setTimeStamp(0.2762041149460309);
    msg.setSource(1395U);
    msg.setSourceEntity(80U);
    msg.setDestination(8350U);
    msg.setDestinationEntity(206U);
    msg.type = 151U;
    msg.request_id = 24082U;
    msg.command = 5U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 49159U;
    tmp_msg_0.lat = 0.08895327830653388;
    tmp_msg_0.lon = 0.9750365124843976;
    tmp_msg_0.z = 0.47184972693198435;
    tmp_msg_0.z_units = 159U;
    tmp_msg_0.speed = 0.07827647318185038;
    tmp_msg_0.speed_units = 52U;
    tmp_msg_0.custom.assign("MZFFWDKCVSXQVLUUKWPNGJTPNWRYBQDKVJGQLMZYYATEHUHXBVUHVVUYLDKOZESGWCTSQWRMIARDWUKMEOFBLSRLEZFCJONDBGJBCRHROLXQWODPOMABJEISTKRTSPDCGEXJTNMXTCVPIITWPZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5039U;
    msg.info.assign("TTPFYROWTCMEJLAWKKJUMJMYBHTUDOKDKXGNAEXGGQITULTMPJIBPVSBSLNAOPADQJQIIPYPEKGZAVJIZJCULUESHWEFJVVUCXGOMMCIVSSKLWYCLRURGXQCVFSZYE");

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
    msg.setTimeStamp(0.20340859814111067);
    msg.setSource(15497U);
    msg.setSourceEntity(140U);
    msg.setDestination(51901U);
    msg.setDestinationEntity(204U);
    msg.type = 142U;
    msg.request_id = 8010U;
    msg.command = 65U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.129371421212367;
    tmp_tmp_msg_0_0.z_units = 67U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 16242U;
    tmp_msg_0.custom.assign("WSPCNIPROSTTTBEDFBCVYVDXIZDJIUILHPEEBBKUY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 64538U;
    msg.info.assign("QYWLXDGRWPZNAMWDHGHGCHKIVQECRQZLYAPGKEBSSNQFKAWATFJQCQYGSCJWABULBIMOYKHGAZMIFNTRGHEDCGUZYXNAUVSZQZXEP");

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
    msg.setTimeStamp(0.8153749822226329);
    msg.setSource(58511U);
    msg.setSourceEntity(203U);
    msg.setDestination(9119U);
    msg.setDestinationEntity(14U);
    msg.command = 122U;
    msg.entities.assign("UNDGFZMFHLMSYXHILBONXCITKDPUHWNTJGMVMKBWMJEQKAIHZLJWSZLFMTURYQHEYVSZNUNQGKCWPUPORWJKYTRHC");

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
    msg.setTimeStamp(0.3134571051158731);
    msg.setSource(10907U);
    msg.setSourceEntity(2U);
    msg.setDestination(14904U);
    msg.setDestinationEntity(193U);
    msg.command = 198U;
    msg.entities.assign("JLGBBZTEEMLKHPKXAKFTJNFNRXUWDVRRECPSQQKAHCNFCZDLSFNTXRLMPIUMVJTVJYPTYBBNXXBYIHZMEOUPRZXBPMIUQOCOJMPLCRQYWCGYPGZAFHRJNPRAPVIVNCHJSNGVAOOKDEMWTAIOISUZBELQZYKAYQDYHIEQWTSXOYMXJSBHOWNEGGDRBWWTMGWZTTOSEIUHDKEDLCZVQDQVIWFVARXLGLSXAZKBQJNVFFYDKHJUACMSFDFUGWO");

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
    msg.setTimeStamp(0.33042376180515975);
    msg.setSource(3360U);
    msg.setSourceEntity(81U);
    msg.setDestination(704U);
    msg.setDestinationEntity(144U);
    msg.command = 70U;
    msg.entities.assign("DILJWNQYYSVHUTWYVJBLDTZUSVRCPPKZSBEOEVIBICBUMFMXIEYUQUXDGLRHIZDOLNGHDPQITIQFRKGJWEVNRAYBNHMCIPPTJISRJFERZLKVVAZYWMPKNSCBRXGTGKPQAHAUMUAQNZYSUTOEJSHGQOQBJKZKTEUJKZETGPBFFQCRXXXFSDUWKAS");

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
    msg.setTimeStamp(0.21391765342914626);
    msg.setSource(17546U);
    msg.setSourceEntity(99U);
    msg.setDestination(43317U);
    msg.setDestinationEntity(151U);
    msg.mcount = 190U;
    msg.mnames.assign("PBPUXWGQEKAPAQGHMRKFWMDBLGUYUESYVISRTHJMKRKCWLAVFJGTKEGQTPTFEZYEGIHANXZVHNHXRDOJUYLQEJTAVPMOXWESWSCBIDCJTQQOZNIOMTUXONJLIVVVDQGZJFY");
    msg.ecount = 44U;
    msg.enames.assign("JEVYZIFVDXWQMKOWRENLBFEXQXVFLTPQFOAQTZRIGVOKMURTWDPUYEFQCGYBMTSQJCIMLSQCVBAVZGKWGAGINGPMUEWVJS");
    msg.ccount = 100U;
    msg.cnames.assign("PCGSTKVDATWNKRWVZZXMKMFQIAOWFRTFLRIODETHQCRSBYBUXUHKODUERWGGBUPIMMMRHZYDUXQFIOJYOTSTVKAMNFNZGVYGWPLAZYKXUQVXDACNSJZNJCHJOTXSTNOJPEUBIIVKHFEEVABQIRJLDGFVEHUAFBCRPNCQJIMXAWVYIOWDYCZHWFOBDLPHGGPMARFDDSEKYSBLKCGUYZNWJXQQLYLQEXLPJEMNPQJNZZMAL");
    msg.last_error.assign("AYSMSBBLAIHTKMQJNDRNXGKWPTIATYTNQSJEQQGHNCPILKQZBAGNXNUORNQQERIIDKHPXZOIEQMUHKYSVOWOYPLUMLTJV");
    msg.last_error_time = 0.5560921519827299;

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
    msg.setTimeStamp(0.8004971727896887);
    msg.setSource(38595U);
    msg.setSourceEntity(97U);
    msg.setDestination(9177U);
    msg.setDestinationEntity(148U);
    msg.mcount = 69U;
    msg.mnames.assign("ZXVRWMIXDYCDPBOVBCBOOHFQJBFPLVMWHEZIFHXTDQANZEGKIZLDUTJTPXACESINWFPDLZNHUMIXYSMSXUFGKOOGEPYBWHNMVKPRQSWMFQVTGOZAQGOIBEMBCSWIRNXGZJKUES");
    msg.ecount = 136U;
    msg.enames.assign("LHTXFMTHVYBKJUNVEQUMFLTDYYUOJXBJLSJUHARWVVPFKXBTNHKEMPAJCKRIPIQBNZXKHRIZZPXNDQFQOODCZTSGZYWASPCCCFWOYNVWJTLDRRVMEYHDM");
    msg.ccount = 96U;
    msg.cnames.assign("DUVBWBPTUD");
    msg.last_error.assign("RLYVOISQJPMPKYQYSYWEYBCQFUNLLUHXWTDZEWQITQHLTZFYSOJWKCSPEVPJTXPAAPEMTLAPRVMNEKMBHIPGVJYJGMWBMMSHAGADQIYEICDJLRCVDUWVGEDZAFPLCKHHVDLBMZEGOFGKCXKWZOKSOKIRCFYTXBFBNHIGAPBGFNXKQEDDUNCRRRYODMVZZJBHJWDNTQLNXXEXIXTUCSFFU");
    msg.last_error_time = 0.10018579685956042;

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
    msg.setTimeStamp(0.10218802127606585);
    msg.setSource(3178U);
    msg.setSourceEntity(241U);
    msg.setDestination(20622U);
    msg.setDestinationEntity(35U);
    msg.mcount = 94U;
    msg.mnames.assign("IFPINRIBDBQTUXZAOBXPGWJKYLEOMPVOSWIBIDDYFEMSIKTVGFTPNFZDFNWBQOCHMVTHUYWQIKECRWAMOTWVXKLLENRETVSZMGTDFJAHQUGHYNKTHSEHCHWOJGWZHADVPNNSBJRDBQVCLRPYDRGAFIQNJSANZLOYEXBSUVYBUCRXHRLSKJQMYKGPW");
    msg.ecount = 103U;
    msg.enames.assign("LREPVJLTFJZPXGGRQAXKMHURODJVBPNGTIRFWDLYEVWKARMEZCQFWSUQMNOXLXYBKDSKTUIOXBSLQNEKEJOCZMBSMWRRFQDNLPBDPZAJHHHNNTHBTUOXRKMJCMQNOPWFCYAVJRWTGIYSOXWCBDUAVMVIOYGEXKCYHSITQAOULCGNHLAVYVSQLWPGNTFITPMVOEGZFZXKEGDAKFDASWYJCUHQIHZDPBRYLHDZFSGUQFJZZE");
    msg.ccount = 42U;
    msg.cnames.assign("JKEFGEYZGHQICJAHRTMIXUREPTHMDRELYEZEACHUJOHZCHJPVUKRYVQWVPFRNFMJLWAUFXVDVSSOTUZXNRKJQOSSKAYLPSGMADIHRZQCTJWVCWKUQDFBHTLTCMASXZSGQVIBBCXMSDNLZEOYQYTAPFMJXGIBNLPXRJ");
    msg.last_error.assign("PNAHYZOBPRGVTQGWASHXIWTFFHYJUYORXTNAJDPQCIQPAWTFNRDRUHKOOGYIXOTZLVYXOTPYXQUIWBZHFPPOKRXHZMCUSTWMEBMFYSUQIXLSLZJBUNWCTJCBOJSSHDAVOEK");
    msg.last_error_time = 0.6726062225423053;

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
    msg.setTimeStamp(0.6481743178351116);
    msg.setSource(52572U);
    msg.setSourceEntity(189U);
    msg.setDestination(46503U);
    msg.setDestinationEntity(37U);
    msg.mask = 251U;
    msg.max_depth = 0.706768600832244;
    msg.min_altitude = 0.5820601749251529;
    msg.max_altitude = 0.015824408817905256;
    msg.min_speed = 0.7021813219439859;
    msg.max_speed = 0.5762122096789415;
    msg.max_vrate = 0.8685778999721715;
    msg.lat = 0.8645831468146844;
    msg.lon = 0.6967368631078877;
    msg.orientation = 0.956099969172841;
    msg.width = 0.5038838254638037;
    msg.length = 0.12970018890135648;

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
    msg.setTimeStamp(0.7414841617713749);
    msg.setSource(22457U);
    msg.setSourceEntity(234U);
    msg.setDestination(1514U);
    msg.setDestinationEntity(214U);
    msg.mask = 5U;
    msg.max_depth = 0.44940966473906463;
    msg.min_altitude = 0.17912961500421598;
    msg.max_altitude = 0.20554200875274375;
    msg.min_speed = 0.16896930575644586;
    msg.max_speed = 0.2874273037511452;
    msg.max_vrate = 0.0883427161108159;
    msg.lat = 0.5993907215099903;
    msg.lon = 0.8277217104674386;
    msg.orientation = 0.4623942077363732;
    msg.width = 0.3194143296202936;
    msg.length = 0.6710806785101169;

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
    msg.setTimeStamp(0.02822887509826344);
    msg.setSource(22595U);
    msg.setSourceEntity(205U);
    msg.setDestination(8728U);
    msg.setDestinationEntity(140U);
    msg.mask = 46U;
    msg.max_depth = 0.900374536190315;
    msg.min_altitude = 0.13303561577960177;
    msg.max_altitude = 0.05372815679722509;
    msg.min_speed = 0.3637796088691171;
    msg.max_speed = 0.40244918969653953;
    msg.max_vrate = 0.39341177717495124;
    msg.lat = 0.9508510139106787;
    msg.lon = 0.35220679410130107;
    msg.orientation = 0.8640862599317015;
    msg.width = 0.9889738231267008;
    msg.length = 0.7561152019225552;

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
    msg.setTimeStamp(0.16746512296177674);
    msg.setSource(54188U);
    msg.setSourceEntity(237U);
    msg.setDestination(10315U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.7700958569099385);
    msg.setSource(50582U);
    msg.setSourceEntity(236U);
    msg.setDestination(16065U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.5594713613238071);
    msg.setSource(32378U);
    msg.setSourceEntity(12U);
    msg.setDestination(39625U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.2740195739134338);
    msg.setSource(42385U);
    msg.setSourceEntity(164U);
    msg.setDestination(12452U);
    msg.setDestinationEntity(132U);
    msg.duration = 52991U;

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
    msg.setTimeStamp(0.3564618196908613);
    msg.setSource(24670U);
    msg.setSourceEntity(129U);
    msg.setDestination(23166U);
    msg.setDestinationEntity(136U);
    msg.duration = 53878U;

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
    msg.setTimeStamp(0.7783792035908603);
    msg.setSource(6849U);
    msg.setSourceEntity(163U);
    msg.setDestination(38722U);
    msg.setDestinationEntity(30U);
    msg.duration = 37078U;

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
    msg.setTimeStamp(0.5680504137926726);
    msg.setSource(6320U);
    msg.setSourceEntity(65U);
    msg.setDestination(39384U);
    msg.setDestinationEntity(236U);
    msg.enable = 137U;
    msg.mask = 3269810592U;
    msg.scope_ref = 2293471471U;

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
    msg.setTimeStamp(0.6596978789471586);
    msg.setSource(60596U);
    msg.setSourceEntity(29U);
    msg.setDestination(5011U);
    msg.setDestinationEntity(184U);
    msg.enable = 125U;
    msg.mask = 3044294805U;
    msg.scope_ref = 1297043035U;

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
    msg.setTimeStamp(0.16821570056491442);
    msg.setSource(10881U);
    msg.setSourceEntity(177U);
    msg.setDestination(64007U);
    msg.setDestinationEntity(133U);
    msg.enable = 79U;
    msg.mask = 3458066737U;
    msg.scope_ref = 2157281286U;

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
    msg.setTimeStamp(0.3261141506788362);
    msg.setSource(14488U);
    msg.setSourceEntity(10U);
    msg.setDestination(25322U);
    msg.setDestinationEntity(9U);
    msg.medium = 50U;

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
    msg.setTimeStamp(0.20071238270431235);
    msg.setSource(9162U);
    msg.setSourceEntity(20U);
    msg.setDestination(19897U);
    msg.setDestinationEntity(252U);
    msg.medium = 50U;

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
    msg.setTimeStamp(0.5080362166034224);
    msg.setSource(50804U);
    msg.setSourceEntity(50U);
    msg.setDestination(11828U);
    msg.setDestinationEntity(172U);
    msg.medium = 55U;

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
    msg.setTimeStamp(0.6002966351145943);
    msg.setSource(21680U);
    msg.setSourceEntity(248U);
    msg.setDestination(3489U);
    msg.setDestinationEntity(145U);
    msg.value = 0.43615036961836573;
    msg.type = 152U;

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
    msg.setTimeStamp(0.47489030660589515);
    msg.setSource(44625U);
    msg.setSourceEntity(200U);
    msg.setDestination(16537U);
    msg.setDestinationEntity(71U);
    msg.value = 0.9401230582046599;
    msg.type = 53U;

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
    msg.setTimeStamp(0.3730027606585766);
    msg.setSource(29393U);
    msg.setSourceEntity(109U);
    msg.setDestination(11925U);
    msg.setDestinationEntity(250U);
    msg.value = 0.08488044711640075;
    msg.type = 119U;

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
    msg.setTimeStamp(0.04677394395138301);
    msg.setSource(52726U);
    msg.setSourceEntity(61U);
    msg.setDestination(41116U);
    msg.setDestinationEntity(241U);
    msg.possimerr = 0.41775935166787936;
    msg.converg = 0.0632263508254497;
    msg.turbulence = 0.48807682665782626;
    msg.possimmon = 198U;
    msg.commmon = 231U;
    msg.convergmon = 78U;

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
    msg.setTimeStamp(0.39455421787459255);
    msg.setSource(17113U);
    msg.setSourceEntity(14U);
    msg.setDestination(52113U);
    msg.setDestinationEntity(188U);
    msg.possimerr = 0.911194795701414;
    msg.converg = 0.19005688616762006;
    msg.turbulence = 0.7146941073838895;
    msg.possimmon = 130U;
    msg.commmon = 43U;
    msg.convergmon = 243U;

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
    msg.setTimeStamp(0.3368833041026894);
    msg.setSource(13815U);
    msg.setSourceEntity(130U);
    msg.setDestination(16359U);
    msg.setDestinationEntity(147U);
    msg.possimerr = 0.09730653672405554;
    msg.converg = 0.9823067626223009;
    msg.turbulence = 0.12471733216942626;
    msg.possimmon = 111U;
    msg.commmon = 217U;
    msg.convergmon = 163U;

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
    msg.setTimeStamp(0.7920571077786001);
    msg.setSource(43958U);
    msg.setSourceEntity(84U);
    msg.setDestination(55450U);
    msg.setDestinationEntity(56U);
    msg.autonomy = 122U;
    msg.mode.assign("ZSNYLOSZFDRVZPVEKEDIYJTENGIBJPOLXYOJIWIVPLMKHSBAHJPGQJPRMLMQSYLNSCH");

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
    msg.setTimeStamp(0.6061947781010377);
    msg.setSource(56516U);
    msg.setSourceEntity(45U);
    msg.setDestination(29331U);
    msg.setDestinationEntity(171U);
    msg.autonomy = 76U;
    msg.mode.assign("HWZNDFDDFJKABVTQAPARGUMQFRSITJFXVJRLRZDSZKOHHIDEWBKATJDGELYOZMBCYDHVSNUCSSZIBXGRVXWUAQJCFPKYRQAXRMPEYVQHCAYXEVOVOKKISFTNYIPZYNSGQDVPGJMWZUUEXXYJKLIPMBLKLMIECEFODTXIGWWFMJOHAZRHBLWGNQWTFPLNOOMCKMNXCTYNPCQVJHURVCLWTCNOPQHEGYFUDSGGHERLLOBTEAJWBXABZKPU");

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
    msg.setTimeStamp(0.969158506067836);
    msg.setSource(59636U);
    msg.setSourceEntity(54U);
    msg.setDestination(18932U);
    msg.setDestinationEntity(160U);
    msg.autonomy = 194U;
    msg.mode.assign("LIZXGEULYXRTSCECXVCOMOWYDGQTYPUIOZDVNKPDYCQLNZTYEQWHJSGMGHMNMFCJOHEWWZSBJALZIKSSPPCVHOQTSKAOARXFQAUREJDVIRVSUMWCRYEKALBNZXEBSWXGXIFDZAFKJT");

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
    msg.setTimeStamp(0.2541453651980957);
    msg.setSource(13656U);
    msg.setSourceEntity(44U);
    msg.setDestination(24578U);
    msg.setDestinationEntity(35U);
    msg.type = 74U;
    msg.op = 131U;
    msg.possimerr = 0.779288616507582;
    msg.converg = 0.32860400836465486;
    msg.turbulence = 0.4010824923236427;
    msg.possimmon = 167U;
    msg.commmon = 107U;
    msg.convergmon = 171U;

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
    msg.setTimeStamp(0.501587909199726);
    msg.setSource(722U);
    msg.setSourceEntity(170U);
    msg.setDestination(17087U);
    msg.setDestinationEntity(97U);
    msg.type = 169U;
    msg.op = 229U;
    msg.possimerr = 0.8584087405469034;
    msg.converg = 0.23656306704658914;
    msg.turbulence = 0.43021383569853167;
    msg.possimmon = 95U;
    msg.commmon = 154U;
    msg.convergmon = 47U;

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
    msg.setTimeStamp(0.772493017084166);
    msg.setSource(12041U);
    msg.setSourceEntity(100U);
    msg.setDestination(53388U);
    msg.setDestinationEntity(141U);
    msg.type = 229U;
    msg.op = 178U;
    msg.possimerr = 0.8746946193173185;
    msg.converg = 0.8901762121147475;
    msg.turbulence = 0.3284386297288646;
    msg.possimmon = 180U;
    msg.commmon = 13U;
    msg.convergmon = 21U;

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
    msg.setTimeStamp(0.24997454557389376);
    msg.setSource(21281U);
    msg.setSourceEntity(113U);
    msg.setDestination(31469U);
    msg.setDestinationEntity(163U);
    msg.op = 216U;
    msg.comm_interface = 66U;
    msg.period = 5329U;
    msg.sys_dst.assign("BQKWBOQUBZMKCIUCQUFBVLEOSNPPMTQQZXQMCBOODAXHHZVPNOTMYIKYHHXIGUYXOSYSJTZREBDHQLSUJMGTDNCGKMAYEZEUMNHPVLABTNIDQGCAKROVTBRZASSAIEDJHRDWLGUWOLXKCJELZULGVNRAMXYTWREZIWTCXJYAVVGSRFKPHIRHFFYTJTWJSW");

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
    msg.setTimeStamp(0.35886224736437156);
    msg.setSource(29610U);
    msg.setSourceEntity(137U);
    msg.setDestination(51444U);
    msg.setDestinationEntity(177U);
    msg.op = 226U;
    msg.comm_interface = 2U;
    msg.period = 18078U;
    msg.sys_dst.assign("UKYFOSQTWVHZMODNNUSKNXYOTUPEUJYGNKWOZEYARNXXEGCKRBRQIFRWAYGBTGMVTCDVZIGZQYRXWUPFBIPXSSKBECRUDNQSZNHLDAWOHGTPOJRPNJLUQHBMPSVEAQKXQPCFRKWIJEVMIVTGMVOWDAJDOFKQYNCJHFD");

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
    msg.setTimeStamp(0.2551932377340289);
    msg.setSource(25562U);
    msg.setSourceEntity(125U);
    msg.setDestination(45492U);
    msg.setDestinationEntity(214U);
    msg.op = 19U;
    msg.comm_interface = 226U;
    msg.period = 4927U;
    msg.sys_dst.assign("WQOYKBXGBTFFPOBVJHAHWOFNUKQOKQX");

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
    msg.setTimeStamp(0.4024026546205268);
    msg.setSource(11828U);
    msg.setSourceEntity(168U);
    msg.setDestination(40910U);
    msg.setDestinationEntity(100U);
    msg.stime = 3002200697U;
    msg.latitude = 0.41377198340362276;
    msg.longitude = 0.1016246082979747;
    msg.altitude = 1147U;
    msg.depth = 48700U;
    msg.heading = 42948U;
    msg.speed = 12215;
    msg.fuel = -106;
    msg.exec_state = -121;
    msg.plan_checksum = 14208U;

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
    msg.setTimeStamp(0.513404869221289);
    msg.setSource(19193U);
    msg.setSourceEntity(136U);
    msg.setDestination(7675U);
    msg.setDestinationEntity(44U);
    msg.stime = 2171466689U;
    msg.latitude = 0.578330231152884;
    msg.longitude = 0.7564195800971453;
    msg.altitude = 64073U;
    msg.depth = 23283U;
    msg.heading = 33029U;
    msg.speed = 1369;
    msg.fuel = -104;
    msg.exec_state = 26;
    msg.plan_checksum = 63159U;

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
    msg.setTimeStamp(0.8165353980743225);
    msg.setSource(48126U);
    msg.setSourceEntity(43U);
    msg.setDestination(2923U);
    msg.setDestinationEntity(180U);
    msg.stime = 2177372668U;
    msg.latitude = 0.9741635998455159;
    msg.longitude = 0.144735662842584;
    msg.altitude = 50792U;
    msg.depth = 1209U;
    msg.heading = 26850U;
    msg.speed = -18699;
    msg.fuel = 99;
    msg.exec_state = 47;
    msg.plan_checksum = 51645U;

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
    msg.setTimeStamp(0.31859756329953826);
    msg.setSource(61360U);
    msg.setSourceEntity(161U);
    msg.setDestination(32123U);
    msg.setDestinationEntity(197U);
    msg.req_id = 12319U;
    msg.comm_mean = 199U;
    msg.destination.assign("ZLRRUKXYFYUNSEAXQFRWCQOFULQUVFDWCNAMKECBAELUPQJCQJHWOZVPKMDVHNISJJWWZDGICBDXKSTIMGXRWNOCREWLEESVMUHBHKBTRHKQPCAMGILFGRFGRQJE");
    msg.deadline = 0.7172600010506176;
    msg.range = 0.9004578804738413;
    msg.data_mode = 199U;
    IMC::Aborted tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZEOWCTQFTFWHOYFNRROIPCTPALHGCKHZEVDBXULKVCMODPKRYPWRHZQYMWAGTPLGUMEPFVBAMGOBXHZYTCQJTYWFRZOLYDIRQSIAUDZFOONICELXKPHLBGGJUPZEFRIHRHIVFJSFJARSILKTBXLVDDQBEVEAQZRYMXKVXQBISBWBCZXCNKUTPMQCGJADSWVUJUNOYNLWWMJJJUEXBMAJHTCAVHWFVSTQISXPLSUMSNNDYGNQDKGMNYENSX");
    const signed char tmp_msg_1[] = {-99, 64, 118, -112, -54, -82, 35, -18, -52, -127, 4, -5, 45, -98, 56, 24, -84, 109, -22, 70, -62, 38, 48, -92, 51, 55};
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
    msg.setTimeStamp(0.9657887891149993);
    msg.setSource(22310U);
    msg.setSourceEntity(8U);
    msg.setDestination(21184U);
    msg.setDestinationEntity(49U);
    msg.req_id = 60990U;
    msg.comm_mean = 172U;
    msg.destination.assign("SXDFOMSRCFEZEKELNSPPKLWHWLCXJANZPUTABXWBUTAXUVBEQDUSIHHEMOFGJCHXNTGNJONJBOQFYRGCIQGYIISYULRDJUVRMPEKNGVFDROAFYTAVCFRIGEBLDITVJCWBSVHAPGKAY");
    msg.deadline = 0.2766122963749701;
    msg.range = 0.5717114036911253;
    msg.data_mode = 67U;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 51U;
    tmp_msg_0.value = 250U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HAHIKMBWGTJIOHQJSNFIWOBGUQLTCPHLWFZOFYFYTUTQFSEQHNKOGEUBHEREDAEPJUXWJXZSSTNJDHBZCFRZVQQYGCHVOYICSNMVNCRLGHMKSKKMFIROXXJEXZAQRVQWVVAZPDAUPLPUYNLWIJDREIMITBUDBAMRSFCWCZKAXVAPYLUUDQBWBVDXOPXCBNNLXHEQJOUNFIWGMAZKYCSXMCYDBGKLDKNJZRYYPP");
    const signed char tmp_msg_1[] = {79, 34, 85, 81, -4, -75, -76, -109, 79, 68, -76, -7, 122, 95, 113, 99, 27, 93, -40, 60, 54, 89, 116, 76, 109, 32, -25, 48, -115, 64, 103, 21, -22, 61, 63, -30, -3, 115, 77, -100, -84, 107, 65, -30, -111, -112, 9, -19, 83, 72, -116, 35, 101, 118, 63, -98, -127, 62, -89, -61, -15, -121, -27, -8, 56, -23, 96, -75, -104, -62, 54, 61, 50, -5, 83, 29, -118, 126, -58, 88, -66, -56, -120, 73, 4, 38, 42, -49, -83, -40, 33, -52, 44, -31, -109, 34, 9, -118, 73, -72, -102, -93, -62, 58, 105, 16, 95, 29, 63, -120, -7, 114, 31, -71, 68, 125, -88, 97, 45, -96, -127, 122, 74, -81, 106, 47, 85, 52, 65, -14, 55, 38, 26, 106, 107};
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
    msg.setTimeStamp(0.5740115750306064);
    msg.setSource(54407U);
    msg.setSourceEntity(74U);
    msg.setDestination(54473U);
    msg.setDestinationEntity(50U);
    msg.req_id = 52125U;
    msg.comm_mean = 95U;
    msg.destination.assign("HCJPGAUVLORUPOJDJKFDZLMVVGPBHDIPSZIOMVTFWHBLHQHAACNQNMXTZYNFPTHCMTCCXPKKPXVQONFMZOQGYRWTYXCWISLMSGXRNERQRUQCMBSTSHQJBNRHJLWUGTPSDNFUYMKWGLVWBYZLTJOUATHKKRVNKZSADLJVJERWSZESHOFQMAEEIOCOYEEPISXZXZDVINAZDG");
    msg.deadline = 0.9816824610123481;
    msg.range = 0.33337351677897553;
    msg.data_mode = 168U;
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.5236644774539547;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TGEGLXSJZEFCLDYPTASSVKPOERACSMMFJRCKQZIJHKSKZRRAXBMEGDVXHSFDQTVDIUOUGZHLTJXUHNQKUDFBQGOONXQEUCWDYXLYAMFQHLRXUZNBJZSVQPWPZRKYEOPHJWGI");
    const signed char tmp_msg_1[] = {-10, -73, 69, 90, 82, -26, 71, -65, -59, -65, 19, -45, 88, 120, 121, 24, 58, -23, 35, 117, -53, -101, 46, 85, 120, -76, 42, -12, -12, -69, 24, -89, 20, 20, -73, 90, 66, -60, 2, -114, 19, 107, -99, 35, -14, -4, -45, 27, -52, -53, -32, -113, 108, 101, -109, -18, 65, -33, 111, 111, -8, 70, -8, 44, 99, -77, 20, 70, 52, 117, 42, 111, 98, 124, 124, 11, 115, -92, 124, -34, 120, 0, -103, -55, -63, 1, -6, 32, -114, -124, 116, 24, 85, -85, 94, -54, -121, -60, 125, -95, 40, -33, -23, 18, 102, 10, 91, -118, 41, 35, -122, -48, -95, 20, -38, 27, -36, -64, 114, -80, 60, 60, 39, 11, -69, -29, -14, 5, 4, 116, 89, 23, 38, -71, 71, -94, -70, -58, -64, -75, 74, -47, 78, -67, -83, 18, 23, 110, -82, 37, -122, -52, -69, 69, -79, -81, 30, -123, 100, -69, -95, -31, -113, 89, 6};
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
    msg.setTimeStamp(0.8244405210330625);
    msg.setSource(26803U);
    msg.setSourceEntity(37U);
    msg.setDestination(23330U);
    msg.setDestinationEntity(25U);
    msg.req_id = 18952U;
    msg.status = 105U;
    msg.range = 0.2968508531217937;
    msg.info.assign("LNYDTBRWPEALMPFACSKVVUFCJERAETGYEFWIWYEURXCILWGMFAWVICSKQYDQFZQBUCGMNVXHPVQFTXUMGHWGHEBQLLUSXBPYNNJNICNJZSRFYGPJBNKFTANZHUGAHXVRPDWZEBPKKJL");

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
    msg.setTimeStamp(0.07962836108206761);
    msg.setSource(26261U);
    msg.setSourceEntity(219U);
    msg.setDestination(38495U);
    msg.setDestinationEntity(8U);
    msg.req_id = 64972U;
    msg.status = 89U;
    msg.range = 0.8630320398165798;
    msg.info.assign("VKQGPHAYXRQJHRMOAPHDOYYIZTIBSRJNCZLZDDSENBLHLUXWRKTAAVMUAEOWGINSSNOMPVHWVXGPPKPERTFFZNAUFFCZSSILGZTDLOJWOEFTOTMZSKGOFZMWQJNYACFMYTBUVDBGPALVFWBUWGRGDOXCUBIJKJDYEDYRHXQTYXINQTHSRGIECAPWZCQERQCVKML");

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
    msg.setTimeStamp(0.054723144420650294);
    msg.setSource(17013U);
    msg.setSourceEntity(127U);
    msg.setDestination(50434U);
    msg.setDestinationEntity(176U);
    msg.req_id = 53096U;
    msg.status = 243U;
    msg.range = 0.3688827668351087;
    msg.info.assign("NUHWYVPLCAIHCRXWVOPJWYMIMGCUSZRBDZQGXHH");

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
    msg.setTimeStamp(0.469423081595701);
    msg.setSource(58690U);
    msg.setSourceEntity(178U);
    msg.setDestination(43765U);
    msg.setDestinationEntity(40U);
    msg.req_id = 4298U;
    msg.destination.assign("VJNGAMRMQVYHBQBTROO");
    msg.timeout = 0.5727585486120522;
    msg.sms_text.assign("YEQOBXREWJEHWDBBCIJGNOWLKRAWUIKHXCEIWCNLYURGQFLUQSEXEFRMPNBKJUZFYMSTWKAGFONLJHRQYIECZPPDGXTTXLOYTDHYAAAWMUDTDNXTSKELYPRVBPAVRGPROOVFMLHDKZLGUIAZLQZXVUVIWMXGJJIPCJKOVKDMBBLWNRHDSFQZFCBJTKYQMSGSA");

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
    msg.setTimeStamp(0.5215022755361144);
    msg.setSource(59389U);
    msg.setSourceEntity(99U);
    msg.setDestination(12762U);
    msg.setDestinationEntity(83U);
    msg.req_id = 40193U;
    msg.destination.assign("KAVSJRZKXEVSCONMODQZRWXAPATIPKRIZOSFDEEODMKMFPHFIUAVZBOWLZNTHHRFPYWCHCP");
    msg.timeout = 0.7550053592519136;
    msg.sms_text.assign("ELWJVAFGTIZIDNSWNUIDKPZMLKSXIVYTLPJEPOTWPYKPZQBQMYNRDUHMGUNOQBOTXUDGJKZTVOTKXMYGYGGQ");

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
    msg.setTimeStamp(0.41026577528947605);
    msg.setSource(9847U);
    msg.setSourceEntity(145U);
    msg.setDestination(39321U);
    msg.setDestinationEntity(131U);
    msg.req_id = 27213U;
    msg.destination.assign("YHZKUDVMOVLHZEOXUDIQMGGVIHDDOACPKFYJGOYRBOPBYOOSTSKFOBDABAAWRUOGNRNELOBJJXLJWNPTKIBYFIEICQLYPWAIHQKAXPZKUCSZMTNBMJWDLLCVNVEZSVLEJEZMKSWFGWVCJQYXYXTGVHA");
    msg.timeout = 0.534313056384909;
    msg.sms_text.assign("OYQUPJYZGWEUZPGCBSTTJPLCEJMRJDSRHZNFYDTKXMAATUSVGLOHCDNORIFXESBJDSPXZFHFTJPSAUNQRIAADNQZTOODAEXTFMXVBPEAKMQCYMXZCUWGWKHHLABRDMWBUWVDFCSOJTNQUMVYYEBELRIUUEBOZZBGNHHIPKKRKQ");

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
    msg.setTimeStamp(0.24766207318602285);
    msg.setSource(21132U);
    msg.setSourceEntity(244U);
    msg.setDestination(50474U);
    msg.setDestinationEntity(40U);
    msg.req_id = 63776U;
    msg.status = 64U;
    msg.info.assign("LKWEUUZKAMAXPVTSIRLYTPZHUBHOROMTYJBTGBNDWBETWLHMKN");

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
    msg.setTimeStamp(0.2369543778541261);
    msg.setSource(39709U);
    msg.setSourceEntity(55U);
    msg.setDestination(7346U);
    msg.setDestinationEntity(71U);
    msg.req_id = 54407U;
    msg.status = 45U;
    msg.info.assign("QVBSZXKWCAFUXNGKHEQUDWYHMMUKGJOQJUOOHKDEBNGFBPVTRFQGLEISIEQLXZTKHKILDZKUJYJDGZHWCRDGUNZOOSRMLSBSTAGRSNXYNMOCHVCIEFLTHPBLHDBEOVPGZJSXYYCNYFEAKMVAZWWQBTJPVQXVRYIYXNKCQXGDCOERTSJDIFLVJURAFMPAFRMFAVDJBLIIWTLZKWMVIEUOQLMZPTJRXEFAMNPUNTACYUXSSHZIAPYRC");

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
    msg.setTimeStamp(0.3196138992669223);
    msg.setSource(59636U);
    msg.setSourceEntity(117U);
    msg.setDestination(30591U);
    msg.setDestinationEntity(213U);
    msg.req_id = 64869U;
    msg.status = 64U;
    msg.info.assign("UEEMKQHYIRYOQNHZQTUNFOVBULNIPPVOBYTVDDKXPNFLIVFLPYVSOEDWFIWEPZMJOKQWHCLRKHHVCAOECZMWOXXTEYWUASKMGFCMWPJZGFRXLX");

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
    msg.setTimeStamp(0.7741311346323176);
    msg.setSource(64073U);
    msg.setSourceEntity(209U);
    msg.setDestination(35118U);
    msg.setDestinationEntity(210U);
    msg.state = 164U;

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
    msg.setTimeStamp(0.9286116156838731);
    msg.setSource(25498U);
    msg.setSourceEntity(113U);
    msg.setDestination(17760U);
    msg.setDestinationEntity(177U);
    msg.state = 150U;

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
    msg.setTimeStamp(0.4952288737399245);
    msg.setSource(60689U);
    msg.setSourceEntity(93U);
    msg.setDestination(61925U);
    msg.setDestinationEntity(209U);
    msg.state = 17U;

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
    msg.setTimeStamp(0.45341495234269147);
    msg.setSource(16723U);
    msg.setSourceEntity(200U);
    msg.setDestination(57210U);
    msg.setDestinationEntity(53U);
    msg.state = 114U;

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
    msg.setTimeStamp(0.7149594728120494);
    msg.setSource(37690U);
    msg.setSourceEntity(118U);
    msg.setDestination(13773U);
    msg.setDestinationEntity(136U);
    msg.state = 131U;

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
    msg.setTimeStamp(0.5506606989929085);
    msg.setSource(9189U);
    msg.setSourceEntity(96U);
    msg.setDestination(9885U);
    msg.setDestinationEntity(106U);
    msg.state = 153U;

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
    msg.setTimeStamp(0.8753415161339408);
    msg.setSource(6822U);
    msg.setSourceEntity(93U);
    msg.setDestination(3486U);
    msg.setDestinationEntity(168U);
    msg.req_id = 39807U;
    msg.destination.assign("CMCHWPZJLLGAMC");
    msg.timeout = 0.5169677501016736;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.4397053912453075;
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
    msg.setTimeStamp(0.5148298566703913);
    msg.setSource(12733U);
    msg.setSourceEntity(50U);
    msg.setDestination(39121U);
    msg.setDestinationEntity(249U);
    msg.req_id = 51805U;
    msg.destination.assign("IAGRRLZBQWTPC");
    msg.timeout = 0.6253381300642714;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("NQWNZYHYOOUBYZHIVDAQBJOMBAWDGAOHABIPUXONOZVRKHZRJKFSMZUWUFLHWWMANQNYXKEKMCYIMOTRTHHUQJTSIYRWXVXECYMDLPGNVIPVXLYSXKLHCFJJFVLXVEDZXBIGFKOJLQWWZEGCBPUTCKJEFDIGJVSMGKQVPMSUFJUDPOTTLNE");
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
    msg.setTimeStamp(0.27889476325717233);
    msg.setSource(53300U);
    msg.setSourceEntity(118U);
    msg.setDestination(33245U);
    msg.setDestinationEntity(144U);
    msg.req_id = 37317U;
    msg.destination.assign("BTNGYWUKZCCXJJDWRSZHQMRUFRHFJVSPGRGLXEEAAILOTABYTXFX");
    msg.timeout = 0.7083901879247805;
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.2972797974019685);
    msg.setSource(46794U);
    msg.setSourceEntity(87U);
    msg.setDestination(37459U);
    msg.setDestinationEntity(1U);
    msg.req_id = 38786U;
    msg.status = 248U;
    msg.info.assign("PJDCKWMUGMDRMXBXUAVYPOTUZVRNEGQVRDWSNYOGILZZWXYOQYDFNZWUAHHNAFATEFEBCHZMSYECBMRFQGHOYYPCQTJWPVVKZEICXRSXHRSJJOOWGFJFMXQFBCHBTXSBHPPXDJCVIANKOFJILPBAIYEZLDBDEQVDTUGKBSKJNRPSMVHSGKEBKLSQKLGETIZIIHCWKANSLFCUZYUUWNXOAANLRXJUOTUDFIATNTOYVQTLHLEPRDWGMCGKMI");

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
    msg.setTimeStamp(0.39933517031790144);
    msg.setSource(9245U);
    msg.setSourceEntity(28U);
    msg.setDestination(24519U);
    msg.setDestinationEntity(179U);
    msg.req_id = 47199U;
    msg.status = 136U;
    msg.info.assign("BIXYZDEJVZEMVMLXAK");

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
    msg.setTimeStamp(0.54489567259783);
    msg.setSource(46487U);
    msg.setSourceEntity(231U);
    msg.setDestination(6561U);
    msg.setDestinationEntity(134U);
    msg.req_id = 65036U;
    msg.status = 176U;
    msg.info.assign("PCIAAZCTRXMTPYPXVHHKJKVMHOKURUXAQJITWDOGUHSZBAKFJDTZQCDJPAIOZGIRLFWZWKTQPUNUBMRSVVASNSKISXGIOYMZPWFHJYFOTDCWFNPBCNCLEMMFYWFVDOQNZQUVCNIKPHEHXEHGSQIVCLBJSOWJDLMYWDGGGURXNEKNTAQNACYULZJNEBRVXYJLRVCQTEIOYU");

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
    msg.setTimeStamp(0.6161535272815724);
    msg.setSource(46555U);
    msg.setSourceEntity(136U);
    msg.setDestination(7064U);
    msg.setDestinationEntity(183U);
    msg.name.assign("GALGJCOJVVLPAYHUTPIWIDJKEG");
    msg.report_time = 0.13521538680413747;
    msg.medium = 67U;
    msg.lat = 0.06537521828442139;
    msg.lon = 0.2839651752197747;
    msg.depth = 0.031471115221826995;
    msg.alt = 0.7774408584240013;
    msg.sog = 0.2816647668833202;
    msg.cog = 0.03964706419157005;

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
    msg.setTimeStamp(0.08336284329663401);
    msg.setSource(62521U);
    msg.setSourceEntity(85U);
    msg.setDestination(491U);
    msg.setDestinationEntity(150U);
    msg.name.assign("BMMSFNGIQPMWJQDXIVJAGVZTFLMPZECOKLADNYGFZNZKHKUSKPMUGGGNELRWCYSYOIYRXLGKPFIUTAHVTYJZLFXZHRJTWYBAHIDULDXGNHJXCAIAIYFRISERVUKBPZVOIQCCTLMXCKHZDECPJROMQEWWOUVCYJTBSQESQDOOPWHSYSWENQVJFWFTRLCAORKPHKRBYXBGBTMUODFVAZELLPNEJUSTQVUQNAPXKCHBZM");
    msg.report_time = 0.774899630081249;
    msg.medium = 111U;
    msg.lat = 0.3995989628643163;
    msg.lon = 0.39036014254376383;
    msg.depth = 0.8058760217319602;
    msg.alt = 0.5555677127558757;
    msg.sog = 0.7080229906814773;
    msg.cog = 0.004240805807644077;

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
    msg.setTimeStamp(0.42609026005455497);
    msg.setSource(2500U);
    msg.setSourceEntity(83U);
    msg.setDestination(13711U);
    msg.setDestinationEntity(177U);
    msg.name.assign("QOFPYACCTAYFGKHWSQYSBGBHAKDSNBBXFQTDMKNHFIMCZELNOKFVCTNIGRVSWILMOCWUCYLJIDISEDOSQEVPOKXSMZKIGHZTCZRWJLXWZUPVNXEYUIQYOTLJVKIQTHHVCMFVJLBXUTTKCULMUASRURPBAVWOSKHNYJDMFJMMHRTPBREUEDEJBFLXBLEOLRWHRJHJWOAYKBRZATXDIRNGZOGWNVFFZWP");
    msg.report_time = 0.9509620677270616;
    msg.medium = 197U;
    msg.lat = 0.60944540654193;
    msg.lon = 0.1270998369119689;
    msg.depth = 0.305616446272742;
    msg.alt = 0.5991432156951506;
    msg.sog = 0.17636647613748635;
    msg.cog = 0.716714253688625;
    IMC::Redox tmp_msg_0;
    tmp_msg_0.value = 0.8443112244763163;
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
    msg.setTimeStamp(0.39359833854622384);
    msg.setSource(56644U);
    msg.setSourceEntity(194U);
    msg.setDestination(5389U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.6507568998464301);
    msg.setSource(63476U);
    msg.setSourceEntity(252U);
    msg.setDestination(53048U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.5416342732227715);
    msg.setSource(4408U);
    msg.setSourceEntity(162U);
    msg.setDestination(49600U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.4098392003191872);
    msg.setSource(51568U);
    msg.setSourceEntity(195U);
    msg.setDestination(17125U);
    msg.setDestinationEntity(218U);
    msg.plan_id.assign("OHQVLOLBQEYOHSMBOCNJRINWDXZCXDNQZTLCOKMESVXBAJDPTALIAATTWLLRUPOIUFBUMEGGYXYMZCEUIVNPQKLQRPCJJIRAVJVMFTIUEMVOUDIHZCAVDQHSKCXGBGDZHJGXCUJHQAUAISRYTNMSPE");
    msg.description.assign("PARWTXIAXCTHEBYKHYOESGFRYML");
    msg.vnamespace.assign("QQWRGFCWXYXXBEVTXBKDMMVKFZGPMBAEQJASVECEIHANFBKAUJPICPKCDBNGZXEWRYDTSFSYUSMYTAWMOELFIUZQEPWCDLSSIWIBWNHPGDGXOKSQPRGC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YWUPNZXTGVGPASUZGCUJUEMVXGDHPCAZITZHKEROWFADQGYDUXARTKSYXFYHLXSJFVBDSKCSWOLOUTCJVQDPJBRJNMCPQOQDPGHMOEGLVLCBTPJDOBTXHNGALLMVQIKBRSJBPHZNKWFPNTRGURACJBYJVMAOTVDRIHHBNILY");
    tmp_msg_0.value.assign("WDDJDHPZQXIHYTWZUIGFVTPZZUSJVZOAFHYAQPNLFPFQNOUERBHYHNSAYCRVASOOHSHZNMCWCORRVLKJRPTGBQMYZOYAAXTSLQLNHUSUVFKPKZESVKKMIEDQLYRDSQCITURWJGAYDUYESPEDXTLXBFNCBWJBUPBHEJAWMVFBIRGM");
    tmp_msg_0.type = 217U;
    tmp_msg_0.access = 148U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MNWIXYGOWQXTKTXPTIRDEUXJQXBESOALRFIUKHXBWFCZOCXVFVQDJHHUEYRSEZHGASZYQHMJECWTKFLHPWXFXVGITNBNJTQGRDZVOAZKYVNFPYAKMDZVBPBAMOLLSBBSAOKYFCJOPEPNLKJRZWSQVZMUZOWKGRVYDRDTPGBTGUIRJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("RSOKFDUQIXWQHLIJHYFBQSNMOKZWHPVZCUANIRRIRRVKPKJLEGOYUYCBUPOSMCNZQNGEFMBWYCXIJAXFOGUQYYUZWKKMPSJKCTHZAMKPWNCVOKLFBRIXMUZHUMGEJYJLWWDGGVJBNSTHXVZNOBEGJHPQBQESCILATESASLDAWDZWTDS");
    IMC::RowsCoverage tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.012211256589698793;
    tmp_tmp_msg_1_0.lon = 0.053953939456161226;
    tmp_tmp_msg_1_0.z = 0.8865804448332626;
    tmp_tmp_msg_1_0.z_units = 198U;
    tmp_tmp_msg_1_0.speed = 0.5856534882576482;
    tmp_tmp_msg_1_0.speed_units = 79U;
    tmp_tmp_msg_1_0.bearing = 0.8971815341998696;
    tmp_tmp_msg_1_0.cross_angle = 0.1661269299680348;
    tmp_tmp_msg_1_0.width = 0.2854276269821132;
    tmp_tmp_msg_1_0.length = 0.44034457459299703;
    tmp_tmp_msg_1_0.coff = 106U;
    tmp_tmp_msg_1_0.angaperture = 0.24397887600902834;
    tmp_tmp_msg_1_0.range = 20285U;
    tmp_tmp_msg_1_0.overlap = 150U;
    tmp_tmp_msg_1_0.flags = 44U;
    tmp_tmp_msg_1_0.custom.assign("UJOLTNRMBCPEDLHYXMZPNNZJBVPTRCKFKQOJBJWRNQMBSCRIQDAPSTNJGIPZCFFDMXGOFLAGKUYOTWUAWYSYQHIMODQXBKENZLVKTESOKRJSRFRSENCGFELSKQUTZNLXGEJCLUURJJTYZSUOQGQGWSIPIAACHBWAKVEPQFWIIVCHWXMYYTXZPZBLXVMFLMAVTYHAEUHRYHDAKWSVIVDIUIVCOBHWXDMEBJBGGDZXONROWPHNQCLDZEUYVDHGXM");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Rows tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.timeout = 61772U;
    tmp_tmp_msg_1_1.lat = 0.7400144436674219;
    tmp_tmp_msg_1_1.lon = 0.8779295884557903;
    tmp_tmp_msg_1_1.z = 0.9627189506787928;
    tmp_tmp_msg_1_1.z_units = 176U;
    tmp_tmp_msg_1_1.speed = 0.305921106976084;
    tmp_tmp_msg_1_1.speed_units = 45U;
    tmp_tmp_msg_1_1.bearing = 0.46661742742164225;
    tmp_tmp_msg_1_1.cross_angle = 0.6129201414426502;
    tmp_tmp_msg_1_1.width = 0.7448343421221607;
    tmp_tmp_msg_1_1.length = 0.6676128231058389;
    tmp_tmp_msg_1_1.hstep = 0.15245700210301527;
    tmp_tmp_msg_1_1.coff = 141U;
    tmp_tmp_msg_1_1.alternation = 37U;
    tmp_tmp_msg_1_1.flags = 231U;
    tmp_tmp_msg_1_1.custom.assign("GEGNDMXGAVGKKRSNXBESFQLIHRXSHGYSSUSCHBYFIJPTUMCCFZYLEEEXQGQWVJVVWONJCSFQEGLPIXZMODOMUUPVIRMJENRREYEKKSJHYPQRPHWZOABXIKDXBWLBOZLZBWWFRYNBDYFBPPHQMJFAUWWNAQDOAATLOTUNVYLHUHUM");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("IDVHTKXKREAPIOXXZTHQQIKEVPBBAIGJTCCSAZHDDIFNDLEGUVYWMPMHVBFFKUNLRGDJQRBYPCULWPGDXQWYSWLEENSGEDXBJYHYZVKLNVXTWVXUJEOKONZJOAZUOLHIXPHHFAKVPKASFRMLQLRXUBCWTAPHRMSUB");
    tmp_msg_2.dest_man.assign("VEYNSWADCXZIUYEYEMIULARNZLTOOKOTNBXDPXWMTHTHQXIRCPJEJIYLJWHAIUMEVQAHQBXVEBLDQRORDXUGKNMCTFOQMXHFXELRCVGLJVIZPNLPGWJARIHWVBWCXAZRBFDGBKEJTDRAMBLVSUSZDWFPPQFFGNYTAXRLZVKMJDKJHWBUVSKBEOTMBUSGYZQHUKMNPNLQCQOQFZ");
    tmp_msg_2.conditions.assign("ZXZUWVNGLYYQHYTEFXBHPHIWGRFAQGTEZOPUFBYPUNJROPDPIIZPDIWSPZKCBSYOBDCZLRTCJWTSYUMLMQIGSQXESKOUVCPAFQXLOJCVLBNRJSANLBCHKAWINCALKBQBIRXDKQJGXSFJMYAVEOPSFCYMQNYKWMULXFWTUZMTAKEFOUEBXGLZTTJPSSMJAHDRDKVUNMOUNHOXWW");
    msg.transitions.push_back(tmp_msg_2);
    IMC::PowerChannelControl tmp_msg_3;
    tmp_msg_3.name.assign("IRYXGVQSTRYVBGGMLNHCZCNEQRTMJLJEVCOZKLIOXAXNUADZUQUNBYZIIKYM");
    tmp_msg_3.op = 204U;
    tmp_msg_3.sched_time = 0.14251558487780613;
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
    msg.setTimeStamp(0.6330115431388057);
    msg.setSource(44004U);
    msg.setSourceEntity(143U);
    msg.setDestination(45548U);
    msg.setDestinationEntity(200U);
    msg.plan_id.assign("IZNHSPSFCZAJRTRUBMHXLYWULTWCTQYUBFNPFZLDYJZDQAJMAHUEKUXJARNQBCDCWBZFFECQYOCPWFOEILINGAXMSDMOFGTUHPJVEGHBIQSRQOLTRGRIZSKLKWDCLJIFAVGMMXOOWYTVXCDZMNBKXZMGOIZQOBEIRDHRVAPDUBDSJHPBYKPACWBWPXUNFJGVATOKIVMSLVUQ");
    msg.description.assign("TDPREECFZEGPULQLPMRXVGSNITMAXAVKKHJFYNDIWCXQHXOIKBICSCPNMKXFTAMENLOJCVAQWPSXDTAXZDMZCBDZJQAIMAIULWIMORDJNLZSKFFURWGGGZAYKJJRRAQRNHZPPWBKWVBHBKNYTZLSMFYTGSVWVOEYCDLBVUFFTHCTHQQCV");
    msg.vnamespace.assign("AYIJAKBMVFQDUFRZWVXILZXKTVEEOLBPZMJAZUBNWEJVZXICSQKOJBSY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UILGIAJINZJVAJNYFCWQTGMWETQDNCOVVGPJZFAAQCDTAPFKNKQFGDXFWTSIXOOEMRKCMRIVN");
    tmp_msg_0.value.assign("JAYIKDMQMKUUPMRWHYTPQLCOKEPMJKRIGCDTYOBQZDIHIFGSIAPQSTZAWRQHFPRNWVKBMVRTSVSAIDEZZHVNRAQXLAETEREWLWIODOQFLQPENLSETVYJMANNUCDBEBMXSZUACCOJSGGBOVDXCCLXQLPZFFRNUHNUGAHJPJAGBHYWDSRFJJIPMLYKNTPYVGWBZUUMLVNDHXYFTHWIXBBKYUKFTOVEOBNDCKXOSIHVFM");
    tmp_msg_0.type = 254U;
    tmp_msg_0.access = 216U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NYZFMRNIQQXRMDJGDKDBYJPQYNJNBSPEPUSCEJSYSRVGNHJWGKVAUZTIHORIJPWMOLQSVGOYKOWAPWLLBXPEYBFKIRJUEWAPRKXBMUJKMWLVCSZGVLCUHGXGTOZSISZUTKMMBIQIFHOQVHNEUXBFQPESTFMHRUINLLMCZGDTTHKAFUVVXNZAOCPETBETDUDQCZMCWCYABJDEDWFAWSKZNLAOTZ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("EYQKECZAMMBQCGAGHLZWSZSEXRIISAUJOURVQAWFDFPDGLPNJVXNFAMYJBKMSACJBFFHCOFOERPLZDUNKZEPOESSZWJULUBUYTPCZYCOCCVXASVKWKLBOBPXUSMHOVTNGJKHBAIPIMLNVDQQTRSDXGTHRDHMHNSORPTJIKYEDWWVNUNNETZEDGXYAWMCLIHNYGJEVGQITIVYYXYXQOPTDUQTZFHRIWWTRUWLGJHBOBJRQLQKK");
    tmp_msg_1.dest_man.assign("FLGPKIQIJNZQYOOFYKHJLCOFENVOCZKUKWUSJWPIBZHJCSGADMNTUJOZWWUBWITARWJSABDGVADSETOCEHXWKRNVHADAL");
    tmp_msg_1.conditions.assign("ISSLLCPRQNZNIATQKBBQXCUJBFODCTJPOVYNAVSWLXKEOSZFAMWPUNPESEDHMVKNJCFWCMZMIWWBRTGWEOJRIAUYHNZROJIAGAAKQUNADBUOVXGFVIAEQTNHVHZGXZWWRZRTSBVFKOFLDCMPEKLWOXPMMUITBXUCMTDPZTSHQYSTPWRINITMXYQCAUCLHKYVGRMEYGZHOHXQBRBNFQYGDJUFYYIDCHLFPLPZSBOYRG");
    IMC::ImageTracking tmp_tmp_msg_1_0;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::PopEntityParameters tmp_msg_2;
    tmp_msg_2.name.assign("WOMSESKAMAAPXDUPNNHWCAQSDVWOPIESOZYGMIUETSQCBDGKGXISFKZXLRQXTCEHLDNMDVBGEGTQGOMGJHRRYPYTYQEWOYTRIKWZJTEW");
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
    msg.setTimeStamp(0.7680503220031647);
    msg.setSource(20777U);
    msg.setSourceEntity(252U);
    msg.setDestination(3409U);
    msg.setDestinationEntity(167U);
    msg.plan_id.assign("RAUPWVPHTWTUAOPPWVYFIYXAWCTDYNGGGYUVQRQZYFDTBYBIZUNESEBLKJJXQDUNNBQRG");
    msg.description.assign("QPMSDDOYNLZRBWJIGGHHCAOKLELTQDZEHZLLWHSHYAPJTRVEXEJYOWGXSERCYFKZONEZSJJKDXGCKLUZSAVFIUPZFRFDNCWAWUHNYRBWBTAGYUJBIXZXXQRIHNWKQBWMMKTQYESAFVGPYVOSJIEYUBCAEOKVLPOTDBHJVRKUJCXVQQJGVPAPXQKHMGAIPUUDNVCMSBOLCRNOLMFFNMMLFBIVDDCPHKYSATXXMTTBGQWFUEPDIOZSCQIFZ");
    msg.vnamespace.assign("XEKXXYNBHBPANIBLPPJVVFMVZWUORDGVZQJAXQCASIIMXRRBSQCLOECGRBFMZNTTSLUJCTNWUWBEZFFMYOZHLLLP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NSMNBACFBYOTWRAFNSURWLMMPTUIGFYTIRKWEIPNMQXCWKOWYVEKGOVJLBUKAMXOMA");
    tmp_msg_0.value.assign("ZIMLRFVYIQKNAZTZTUMHMGDOMFORJFOSBSIOCNEILIBNZCXALSWFVZKHSWGBCWTWPHONEMKLMWHCXPIBYSPJVHAXTDYUMDBGUSRSCFRUADOUXAEWDGYYPCQOMJTKGBFNDWXBLRYQLREPYVNNXKZRRD");
    tmp_msg_0.type = 71U;
    tmp_msg_0.access = 67U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JAIMZHEYWSIDESBXJVYBNBYTHSPTFXNQWICKEUWJGNDWDQDYQBTRCCTAZYBQJTGECVSRMVZBSUNIELRXEVCOIGKGTDWMWQCLPSFRMGLZVUPVNNMIN");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("XGEZIUGATWEFWDKHRWSNIWOV");
    IMC::Launch tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 23548U;
    tmp_tmp_msg_1_0.lat = 0.692398233270856;
    tmp_tmp_msg_1_0.lon = 0.4890629465714459;
    tmp_tmp_msg_1_0.z = 0.23648956264296173;
    tmp_tmp_msg_1_0.z_units = 144U;
    tmp_tmp_msg_1_0.speed = 0.8178052146171101;
    tmp_tmp_msg_1_0.speed_units = 185U;
    tmp_tmp_msg_1_0.custom.assign("TLJIXUUKHSZLUJGHBYLVNAALFQQKWLWTMXUSZQKGFNVYRZYHNMTVVSIWRZPNQGCAXVXOWQEGVHWRGFYJSNLKUGPRSWAMDSTDHQXJUNKGBUJCGYKBIFFRCYQXDKKRTPWMENOIEEYUCPOOXIRAGIDPOIPQBSOEHWEDDOJVAEHQRIZCECCZHDB");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::RestartSystem tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.type = 70U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::TextMessage tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.origin.assign("FBPODUMNNNFZQEYCRMBAIGGOONZOJBUJHGYRXGXXWYZUXAKKJBFFUWTMQLNLESRQWIGQWQACHONHFZJLCVWKLAGRSEAVEBQSHKFIHEDVIZMZFNRDUYLTPUGDXOYVBPLKZKGHSFWDJYJIORIGVCTY");
    tmp_tmp_msg_1_2.text.assign("SHNYYKDJVELUWYIRQNWDIWTGBUXGFAQXQSGVPTQDBCZYNSGXJBPMKCVIYUDGJJGNIFVRLTLTHPLBVJMQTODMNYNQYIGWIPVRTAIOCTKWZEKDUDBAPFDOMJPEFSZZHXMXLZCEJWNEZLXOVNVGPSKPDZJAHOOABUKVDEOUTHAFUWKGWBTHRCMBKEFFEHRICCRSUKQJOH");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::CurrentProfileCell tmp_msg_2;
    tmp_msg_2.cell_position = 0.9199212063298726;
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
    msg.setTimeStamp(0.5718048292379743);
    msg.setSource(44680U);
    msg.setSourceEntity(174U);
    msg.setDestination(13929U);
    msg.setDestinationEntity(9U);
    msg.maneuver_id.assign("LQSVICZDNJZXQQCVDYXKFRMBJUMXSVSQKOPETRHIFZIWJGDJRVCMICLBTWQPAYEOSUIUCJZIANZSMHGWNGSCDMMOKXIVZSEAVIWUGYJHEAZMAIYGQURAPTBOBAPHNYWPFDTBFEGDIWVBWXUNGBW");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 1742U;
    tmp_msg_0.lat = 0.5028302751121716;
    tmp_msg_0.lon = 0.27548491349434756;
    tmp_msg_0.z = 0.5160648447732631;
    tmp_msg_0.z_units = 237U;
    tmp_msg_0.pitch = 0.041038606039624836;
    tmp_msg_0.amplitude = 0.9777277239869709;
    tmp_msg_0.duration = 24871U;
    tmp_msg_0.speed = 0.9887122887993061;
    tmp_msg_0.speed_units = 187U;
    tmp_msg_0.radius = 0.7182825750304913;
    tmp_msg_0.direction = 225U;
    tmp_msg_0.custom.assign("SRAXHUIPHTAUDTUFDTBZJWIKIKLMBWAPLKWYDITWFGGXQXCDSLXVODRZAFLYRKVXOWTNXCACGWBNVHJQBRWPLDHMTLDZIMAMNPPYWEOYVPVQGVMRLPOCLEEMMNQXNHZGRDUEUOZSSGSSYGIMUJZHJYXCZKXEEBKEJOAOAVGTRBYHBRQHZFIWFJEZGEKODFCUYFMNUQCYPILQSNQJVDQNICJBLPSTTTNHOFKEBPAJSXUFKMZIQVNC");
    msg.data.set(tmp_msg_0);
    IMC::CommRestriction tmp_msg_1;
    tmp_msg_1.restriction = 227U;
    tmp_msg_1.reason.assign("DICYCRMJZVAZFVVDNDQOLFDCJWQTSEKSVROPKYRJBKFYPECOXJUZYDRUOIQBTUJDZKGKEZPXGBNQKCXTWUHHLGRLVWXXBJBIFXNKAITMCSBMRNENHANZGLYMZIMZXJOLHNPSLTSQKFHGDOWXIIVTVS");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("RDZEGFYMKPABXCMYJCFVM");
    tmp_msg_2.dest_man.assign("OBPDFZJDRMPTVEXKWLLPYDXKDWZABCSFUCGQAYNMQFCNCBESFZGLDXHAHDEONBAIEGCSDGXMAWTIMOKIQAAPJOZUJSPSPECZUVUQHTBOQSWDSEPVOOMUWJPVNOTNJQFCVENGVERIIYYJWBMQVKGYLBVNAQILS");
    tmp_msg_2.conditions.assign("HNWAZWTITVYFHUDXIHAJYLOVWHEHOEYRVPEJDTRQTFQKRUMBTSAERQGKYUOWKCJIYEBPULLDOGDYNSICSEISKEUNTVRMGZLSUPQSKMDKCCIFRPYGRCNHCYQJBLMZQZXILSNVVFDMZTUJQRFPNFISKTBMFIJZVMNMNSKOPZECAVJNZPLUPQHDAEFFUTWGQBGKPOFXJAOLHOAGGDXBZXWBHTN");
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
    msg.setTimeStamp(0.37556289114528785);
    msg.setSource(42369U);
    msg.setSourceEntity(221U);
    msg.setDestination(50089U);
    msg.setDestinationEntity(32U);
    msg.maneuver_id.assign("XYKCAVJZLVDZLJHWGQGWARYBTWIMOPDFWQITNGZYULRJSELUQWVOXTBYVWRXDKNJTBXHMQZMDOCHUHLNMCMTOBYOCMWUIKRGHHDFCATHHDGBSRPBAVXM");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.715064394319508;
    tmp_msg_0.lat = 0.41011451307254365;
    tmp_msg_0.lon = 0.4297581055903551;
    tmp_msg_0.z = 0.4135484546897661;
    tmp_msg_0.z_units = 158U;
    tmp_msg_0.travel_z = 0.3842961433198976;
    tmp_msg_0.travel_z_units = 231U;
    tmp_msg_0.delayed = 143U;
    msg.data.set(tmp_msg_0);
    IMC::DesiredPath tmp_msg_1;
    tmp_msg_1.path_ref = 205759558U;
    tmp_msg_1.start_lat = 0.10464205828424933;
    tmp_msg_1.start_lon = 0.5561631510841164;
    tmp_msg_1.start_z = 0.0808138063339966;
    tmp_msg_1.start_z_units = 10U;
    tmp_msg_1.end_lat = 0.3744088702128361;
    tmp_msg_1.end_lon = 0.7536924229097002;
    tmp_msg_1.end_z = 0.3348277850750797;
    tmp_msg_1.end_z_units = 34U;
    tmp_msg_1.speed = 0.5308888970910185;
    tmp_msg_1.speed_units = 94U;
    tmp_msg_1.lradius = 0.041266219029870266;
    tmp_msg_1.flags = 252U;
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
    msg.setTimeStamp(0.2426223992496156);
    msg.setSource(64094U);
    msg.setSourceEntity(142U);
    msg.setDestination(63212U);
    msg.setDestinationEntity(235U);
    msg.maneuver_id.assign("TLYRNAJUVBWMTFNKMOFTHVUBNVDGVLEMAZQWJRTOZUUIGULRKYRZQLAIJODPOEGSMXUIPRYEJSYDMKEJQH");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 2731U;
    tmp_msg_0.rpm = 0.08799927376595507;
    tmp_msg_0.direction = 120U;
    tmp_msg_0.custom.assign("PWTCZBVXBVRPMYMQZYBUHXTPXGGRVRYSGUGWBBUFWSZKCPBFKAMCVSQMKYGRJZNFILAOLHVEANOYFALRKKEIWABPTTFIJKWNSGPZLQHIDBXQMBVOECKNJHVEPUPSHOMXOOLEWIRCCDJZQFXWDKQFUPRZEUNSXGMAETFZNHKLZJPNWDLDLJCVRXDQAJJNOFNKXTQIOJAEWAISBMUYRVYLNEVZGXGRYCUOYHMIEFDTYJSDTMHW");
    msg.data.set(tmp_msg_0);
    IMC::CcuEvent tmp_msg_1;
    tmp_msg_1.type = 48U;
    tmp_msg_1.id.assign("PAOIZRPPUQXCSWWBYSVLHEJOZVWQOYYTWMRVIPKGWDRIATGKIFWPYIGBTNVSLLOFBVQKDOXMXZUCALBEHCYMEVQKRNJNSBLK");
    IMC::Announce tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.sys_name.assign("LXSLYQCKFJTOJNSQLWGQKVDGWQVNQTIOYSBIRVJBAOTYBUNBMZAMGBNPDEWEMJFXINPOQYWAAHIUGWVTNKLCRCTSZKBMFMWRVIRQDMNWEKUBWCKFRHKURVUCPPLHFPJOSUEFPRYXTPQGIBAIWISSMDTEUYOOHDTZJPAGGDWEVVXDSBKMCVZZKIXCOJYHAKMHUALEPXDGBUYSJHXHLREZXQFNASULCAXRIQOHXEFGPGZLZNJZDM");
    tmp_tmp_msg_1_0.sys_type = 15U;
    tmp_tmp_msg_1_0.owner = 3113U;
    tmp_tmp_msg_1_0.lat = 0.7577523872049758;
    tmp_tmp_msg_1_0.lon = 0.43805872071669105;
    tmp_tmp_msg_1_0.height = 0.20445634986757755;
    tmp_tmp_msg_1_0.services.assign("ECTVMVPDNAGMXRFGXFDZYEPMFPBZNAIIORKWJBTAUMOKQDVMYXIGWANJSYLJFYGWEQLPDSWPPRRUPDSWHYSAQKVEIMPAREKOTQTTLTXJLQHVEIOMAGKDOJQOKHLOQZWZPUSBEHFSQZJCTXDWKBJBYKSURAEHNXBFRDOZMOVRGHZVYYSZIJXVVDXXIVSTGQNWUWNEQPCULGYHSKCUNTIBCFIBYNCXKNJUFATZF");
    tmp_msg_1.arg.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.6529633223997706);
    msg.setSource(32869U);
    msg.setSourceEntity(7U);
    msg.setDestination(33738U);
    msg.setDestinationEntity(105U);
    msg.source_man.assign("AWMTVEYZQAOZIHOXVHLSQWOJDNZNQNUCMNYYNFTJZEKKGRXYBNGVGUSUZPHNDGPDXCALGCBBDCPPHFNLTULVOSAJAGLRJSILOMUWEVYKRCSKNGNBYIMUFDEOTFPHBEETCFHDW");
    msg.dest_man.assign("ZITETYCRQDNKVHXBPEEXJQRLMOXQJDRKOGVAIGZECNLYSUKOCXIMARYAFDAFWEBOJTFDXSVNCSCNQVPFIYGWITYQAVAWZXUHKKXQNEBCTUUIFCFILFWMZSBJQWHZERKZZPBLVTDAPGPHHDMGMGWEVMLBVNJUSLEVZTOMMUNWKGSLMSDXJUPJYSHZYREFDUAQYGSUPKBSWFRQRDYHG");
    msg.conditions.assign("HPDJFYZCVUPOHWJVIQCLGAIBOEUKMAUPMYOGPMRFRUNHBWAEJOTIPI");
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 159U;
    tmp_msg_0.text.assign("GCFAXLDXOMTWQKWNOYVBZVBESLPAZFPUJRLRQPHTFBIUJEYWWHWOASCPJZWQ");
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
    msg.setTimeStamp(0.8838819006828557);
    msg.setSource(30752U);
    msg.setSourceEntity(42U);
    msg.setDestination(46849U);
    msg.setDestinationEntity(95U);
    msg.source_man.assign("ACBGCCYWBIUIUCCLGDDMMXSBMQWRHVEAKIRRSEYAKOPUKTFJKQZIGZPRRFRJOISTLRFZSFHNOPBDYZCULKWEGDRICSAPNQBNQQSEXYSUKKHJIXXJVHNLFNBDETQLNOPOVGZVVWXSXFMIHOHCUHTKZPYUMWPBQQJYBGEMWAGDBXDJUIUGJDWOPZSAAAENFZYLFNPOEELSZXVQWE");
    msg.dest_man.assign("ZCUKXIDPVHLDGHGFFUPQJCLSTYSAMODYVBWTJJFCNWRMYGRQHRDNWPCMJEQIGVSEPLXXAWGIYUJBEU");
    msg.conditions.assign("WBCLHZQEAIDEMPNBKPWJHDXSVDQHMAQPIIBHCOCKQMSAECBDOMLOHWPBNFFPKYZUWZXVAITXRLJGGEUJXKGETRTNDEQUHPHNSMYCYBYIGKOCQDONHKXXMNXFVVLZTMFDVMOCFRAQAFLEBJZSAIGWLVCMRTZGGJCKSKRUREGUSIUOFYVLYLYSFG");

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
    msg.setTimeStamp(0.28348305304723675);
    msg.setSource(43206U);
    msg.setSourceEntity(102U);
    msg.setDestination(7836U);
    msg.setDestinationEntity(232U);
    msg.source_man.assign("BTJQXUORHPCMBHMAWMDHMXLBJOZHUHQSTTIUASILJTNNNDKFZQGWDURDXNVSSVPDYYCPLLNPCWSQMCDJIGYIZXLBEVROHMPEFHARUOKLMDWHZZVMKERZ");
    msg.dest_man.assign("PYLSABRSVUSNMKJPWBIDNBUGQMQFFSORCWWQKFTPYYYCWREBILMOVTHHAUGIHIYKHARNOOQREOUVYPOJJXGQLDCKTIOMNEHFD");
    msg.conditions.assign("XPTHBZBBZYJJTXOZKEGQPDFIOVRWTAFVNBRXVLOXWUPPXIXHQVQPYYDRLJOFVAOLRLNMHQQVHAAKZCFYO");
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.12730526907939776;
    tmp_msg_0.sys_src = 33301U;
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
    msg.setTimeStamp(0.9044870821812017);
    msg.setSource(18821U);
    msg.setSourceEntity(20U);
    msg.setDestination(45161U);
    msg.setDestinationEntity(70U);
    msg.command = 44U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SDNPQNYGWCVSXYIOGUDRUCWXTDOHEJZOIZZABUXTWFSVOHBRSHWBCFKXFEPWVBBOCACTRJEBVQTFGLZONUFJPTZWXVITPWNMDLYEGTFGKCGHTYEMISFPVZFAHDMWUPNVLGJAKBCSJLKDXIEUWZAQQHRMFUJYQKPLVGAJTHQFKJIGAKLOMNUVZNXSOJRGKYKHMMDBAEQIRJYDAYQCPMRWEZCHHQVX");
    tmp_msg_0.description.assign("MBOORKTFCGMECPLEPUESNJROAGKHYHSVUCHWDXRCTABHSJLBPQPDLUXCDNRNFRYKYMUQQFZJGBRJOUTLESIEWZHOEBWMTEPETZIGAONPTQMXI");
    tmp_msg_0.vnamespace.assign("ZYFLMHEDQZNRDAPUARQATANSWGENYJIJPFVDHWUOFOIDCVELMBWHXUTDIFLOKQITCYJGDHWBPJKYJRLYPBMFRQCUADNNHOIPBITBCHFC");
    tmp_msg_0.start_man_id.assign("QYUUVSPAULPLHAOVEFTFRQOMOXTSVSBPRBHJNTXHKBDIWCKWTSGBZKIFSWGXADAMILHRCZBOGJSNDOACVDIWFYVKHDFLPKIEUTQPBYQNPVZDBERETFQZLPHPNMCWKKSNUNJXEFJRNEUPXMMZCRGURERQXKJEHXTMYGMWDZFYALCFGNQYFKZJYXAWJMICHWSSJKEYVCBGHVIOAPVAEALJZIRYQOQBTOJXLDMUVTC");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("IJLABTHCGKQMPUNZFPNGZKEWRFZHQZKGBQXBVPZSUDXZWGKKTVHDCAJYWBQCNOMKU");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 52413U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("BBVVERZFTJFKSCZFHDICQNPNOIDTSNOURMYMQNHIRIWHVMAAMKIYVJZSYUCO");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("CGAXZXLHFUMXVHGOZUBZFFYIQPEBVNTXHLSELUDDTLQEJCSROCCXMXWXPHHJATHQPCPQFVZWPSYRETLQVYYYRIASIJNDOEBIWRUESEGFZNKTVWEDBDCGOHVPQKMYPGCJMBTYORCOGJRDLKXCG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("HXYNZZSXTMCZFLTFLIQHCPUJTRHTYFUVPNYFSRZLYEGESYDCEFCUOPVWBIKCQREFQKNTBPSVWOJBSATWTVHUCROOIGGBLMAXXSDXAGXZGIEQUVQVFYVCMBYLCGWFTZJERKKQPNSHLMMBA");
    tmp_tmp_msg_0_1.dest_man.assign("WHJVHKCYOSHALAAMVNYZFZNKKTXPEGNOFXOVVUWCBJURMNCUXWKZIBZPPLGQICAUSK");
    tmp_tmp_msg_0_1.conditions.assign("FXYJYXGLPJZVOXGUTQRSDQCPDVLUWPKWJTMOYEZPBIOHKBBBKJVJHLSDWOPIZZSKXVRAJKAXZDQFFCEGUFSFQGRDXHPAXAOYGCZTQZXHSHVFHSWCEANDCTRNOFBKUOMYRLMUCGUPQICSRGBNDEIMAYUQWMOESA");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LogBookControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.command = 195U;
    tmp_tmp_msg_0_2.htime = 0.7542806220483719;
    IMC::LogBookEntry tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.type = 135U;
    tmp_tmp_tmp_msg_0_2_0.htime = 0.734405617694357;
    tmp_tmp_tmp_msg_0_2_0.context.assign("FEGROPUNDLWSFPYPNQJSSZOKDOPDOKAVZEYXFKWMIV");
    tmp_tmp_tmp_msg_0_2_0.text.assign("EMTMHCNWBMANAHJPGCOFUMWHNA");
    tmp_tmp_msg_0_2.msg.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::CameraZoom tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.id = 140U;
    tmp_tmp_msg_0_3.zoom = 42U;
    tmp_tmp_msg_0_3.action = 89U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.3895044249875965);
    msg.setSource(11054U);
    msg.setSourceEntity(177U);
    msg.setDestination(37814U);
    msg.setDestinationEntity(90U);
    msg.command = 112U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TNXNCXZNFTOEPQMMWZCJEBYLLDISUBAEBMTIQPYCYUJXSKYBYLOOJMJSLUFTAQKRSJXIVPMRNIZVWGTUHOTPRCRFCZVBGCPGNUWANADCLHSHLOSWBQKDPJNUWGOFFWYZOMLSYRLDHFRJJHADQTLKFXKBNYDIRUINKHMVIGXVEEKABJKZPKDNDEIXRTVHYMGEPQUCGFICWGGDXSMKBPHWVRZZQAUGEQFZ");
    tmp_msg_0.description.assign("LPAFFVCWOFOZPXEBSVGIFAPEDTCKCHWZGIFYIUYKSIJMRHTITUSXULIORUVMXNAGGENJUPXNFKQDFXYSDXEGSBCCDRRURGPVRXILSWTVHEJKJDUPKTGVJWMCTHCNJIMRQXWMMYBQCOKONPZPNQFHICQODLREPKNUULAJOOHTEKRBWDNQQHSIGTGDLTNGLFJZMBBZHABLBAYHAYDYLSNQMBOJMYVWWJQKXESYWQODHEUVXKFPZYMRZAWTAZBLE");
    tmp_msg_0.vnamespace.assign("LOIPBUNJTVNIUWEKRYOYJDNDPQJPVLWCSXEGBZYKDIMSSABAAUBGRPFAVUNBGCGHWXVROJZSQHSNRJUFQKQJAEFM");
    tmp_msg_0.start_man_id.assign("TFKQXFEZXSVSQZOMARKLKVQJBIRDQZUGMBWYYOBGGGBARGWSSOEJOPXWIKZGTPIQOWCHZKXTAOJKB");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("CHKAISZMFQKETRHQBVECTBWGURLEYGNOPCEAPFNQIPZWWOGGKOLYCJVKSIWTCYMPDPQTJWUBXKCUJSYKLPJKFXBAJGHSANAXNZRVKLUUVJDCIMARSMDQADXUVGOZILIYSZVJOMYRULFLFHPRIANQZQTSCGSOBMORXNDYQIMEXRJQMMWBXJD");
    tmp_tmp_msg_0_0.dest_man.assign("JCXDUAOSTDPLPQSBHFDTUZFHZVKYTEYKHTDVJBFOGVYISHUEGXDNQPORERMTQIPTTABFXHQRZDNBMROZFHYIUGMCHUOOYDZNAQKAVXGZPNDFXIUMVWWKFRQIGKTNISECZKAHSVXBIJZWKYUNVAQOWISXJWECGLENFJJLBJNFGOMYLQDFAVLAGTYIHWCMYWPNRBW");
    tmp_tmp_msg_0_0.conditions.assign("WZZFYJJROJDFGEQMUBBXPRTKMSFFLHQQUCYNAVBKLVOMEMYZTIPTWRAQJUEWTCAUETZHRTAONSCSEDHZBQCSZPEIILQXRSSLGMKIMWEGYVANLYDQJOHPZIGUPWSYFDBCLBNUUGVZTFTVDJOFWKPDJYHBKXAGGCAYFXPMWWPNKLVYELGXUVIAQJDZQASBCOKZLJIRTHYRCHHOOIMI");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::FormCtrlParam tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.action = 52U;
    tmp_tmp_msg_0_1.longain = 0.3350214159552587;
    tmp_tmp_msg_0_1.latgain = 0.35328326822575107;
    tmp_tmp_msg_0_1.bondthick = 2025555468U;
    tmp_tmp_msg_0_1.leadgain = 0.7802590623752264;
    tmp_tmp_msg_0_1.deconflgain = 0.2649235660913909;
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
    msg.setTimeStamp(0.2134005493387714);
    msg.setSource(32022U);
    msg.setSourceEntity(137U);
    msg.setDestination(53944U);
    msg.setDestinationEntity(158U);
    msg.command = 13U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AVDTXHYETJLSQVGWQNZCPTXNBPBYGGZZPYJVPZRXBFMCNFWWXDOECQYLZXXPAFFU");
    tmp_msg_0.description.assign("ZSZRKNXPMQNQMEBQVOATRDHRYI");
    tmp_msg_0.vnamespace.assign("CAVGINHMKDSLJXHFSUGAPGCZSCQHQZDQFGBNLMDHSGVJYMTVLURFJRJJKPSSNIUYTEQKIQEJCHPBLPZTXYZOOHSTOJQQSWXPULDFEALLBDZMXMNKCXROETYDORKPMOXGITWAPKURZWGNNBYAUAPOGSVBGMRCNDDNRCWTAIMRZKNLIIXKZYQAVYVKIYBCT");
    tmp_msg_0.start_man_id.assign("RVMLJJPTSTFWYZWZQAMUOKUARYPUZKETYJVDDHFKLHCCUXWBHHLCIPECIIFEJIDPYSWMOIPFGISAFPGULCSNXKBXSNLOGVBUUUKAPZNXRGQQCRBNCJXNGKLOMREUFHBOQEPGNQFFHXDRVRRBXKVSTVIETJJBKSGURDLRPHSTXZHAOGNQOCTJMVELDWZYVGFMNEXLTWNDYDANMZJDKOZQJVHIQEYQPMWMTWZQOSWYTFOWBZX");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("OAITZHOQLIXJGABVXQQBOJYWDWMVIXJIDYNZLUCDYZQHFIIKYOKOPWGGQPEFQBGAZSXTNNZBURUHMHPCUKKFLMNFHPYDKVLDZPCYHLTFJOHRAFXTZKGWCYDZPCU");
    tmp_tmp_msg_0_0.dest_man.assign("LSIPMOUWWGRFWAZCQNKBSCJTPJBERJFCOKRDKLNNBGAYLMKGTZGOBEUGXHIUFEFXZSVYABZLHWDYAQWIQAWEVYQRFEXQIIPFVUDRWVUACUYSHTKQLEKHXVYRCCOIMYNTJTXKPXNDWEUSBJDZZMFFLEVBMBVHTOMRTIJGCIZJROGNHINWHGIGOAPEQLUDZOUPPJYHDSSHPONDTASQBPSDYQJXKJWSXFAZTNLNTOCRXPDFMVQCBZMLRVMGC");
    tmp_tmp_msg_0_0.conditions.assign("PGGFIGGBOLSCMQOVISCHLZFVJUSOENZZHCLVTSIOHKTYOPIBCSRQPPDDAAIXAZWFYXEVNHDMKJOSFZNRCEQFWKZDVSOW");
    IMC::Acceleration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.time = 0.46167653279580056;
    tmp_tmp_tmp_msg_0_0_0.x = 0.9655304174998504;
    tmp_tmp_tmp_msg_0_0_0.y = 0.37769187094930123;
    tmp_tmp_tmp_msg_0_0_0.z = 0.6594085581992015;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::Drop tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 61228U;
    tmp_tmp_msg_0_1.lat = 0.9951072606323336;
    tmp_tmp_msg_0_1.lon = 0.11656611469532718;
    tmp_tmp_msg_0_1.z = 0.9051820976888016;
    tmp_tmp_msg_0_1.z_units = 115U;
    tmp_tmp_msg_0_1.speed = 0.6951277644854916;
    tmp_tmp_msg_0_1.speed_units = 116U;
    tmp_tmp_msg_0_1.custom.assign("JTXNNJCATUBVXPHOFNEPHXNQTEZHSHYBRTROIXXVXYBLSWGBZZOSTTPIPDY");
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
    msg.setTimeStamp(0.9501712044563481);
    msg.setSource(225U);
    msg.setSourceEntity(215U);
    msg.setDestination(28842U);
    msg.setDestinationEntity(38U);
    msg.state = 140U;
    msg.plan_id.assign("PHRVECNLXFGZUSQAVRVWNMHCIRMBNXHQNCIBEGMQVSIGOFUXVGPLJMZFTKTKDDEMI");
    msg.comm_level = 37U;

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
    msg.setTimeStamp(0.08492154812492747);
    msg.setSource(34923U);
    msg.setSourceEntity(186U);
    msg.setDestination(56956U);
    msg.setDestinationEntity(147U);
    msg.state = 69U;
    msg.plan_id.assign("OGDRDLYSCPJWHOPXBYFCHVNBXJNMHRSTXOZHCTPKTQMEFPBPLUQVKRZLVUIWZKHUXEAXASRZXAUVDIPMSPBOXRISJYSEQJIKTVOKFAZCGCXOG");
    msg.comm_level = 229U;

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
    msg.setTimeStamp(0.3080933703335875);
    msg.setSource(64377U);
    msg.setSourceEntity(198U);
    msg.setDestination(26821U);
    msg.setDestinationEntity(96U);
    msg.state = 18U;
    msg.plan_id.assign("NKGEKMTSXBOCVHOBMPJHHGBCFYQOAVEXOISZOYSNJZRGPTPRLYBEZDXNIBYS");
    msg.comm_level = 193U;

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
    msg.setTimeStamp(0.21684912468198891);
    msg.setSource(16361U);
    msg.setSourceEntity(185U);
    msg.setDestination(42914U);
    msg.setDestinationEntity(132U);
    msg.type = 197U;
    msg.op = 192U;
    msg.request_id = 30008U;
    msg.plan_id.assign("LXYPUFEWKRCLDVEDQEKMUHMISMZQQJACGGRIYDDYIBUNOSETGJJBPZVGIW");
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 37510U;
    tmp_msg_0.sys_dst.assign("JHAZZFWDGGLERQOXINPZTYVSUSWKUL");
    tmp_msg_0.flags = 69U;
    const signed char tmp_tmp_msg_0_0[] = {109, 119, 3, -91, 106, -128, 111, -74, 101, -9, -53, 95, -27, -116, -25, -126, 102, -57, -38, 53, -8, -66, 49, -57, -37, -73, 6, 50, 125, -108, 49, 10, -58, -11, -115, 100, 27, -87, 95, -17, 69, 107, -127, 126, -110, -83, -114, -88, -8, 31, -21, -18, -23, -125, -99, -33, -110, -128, -122, 52, 24, -37, 122, -58, 107, -57, -105, 35, -12, -94, 58, -68, -44, 32, -22, 68, 97, -46, -41, 12, -63, -125, -94, 67, 67, 43, -88, -53, 70, 119, -97, -125, -104, -40, 54, 19, -26, -42, -23, -89, -56, 107, 76, 60, 28, -2, 58, 71, 115, 122, 89, -32, -72, 64, 83, 42, -76, 48, 76, 2, 32};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MWIVYNSCNEPLUKWTXTOZBYINDRCYOHXDGLRXMFYEEYZIQDDABQQLT");

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
    msg.setTimeStamp(0.5303050362389659);
    msg.setSource(63594U);
    msg.setSourceEntity(133U);
    msg.setDestination(47519U);
    msg.setDestinationEntity(113U);
    msg.type = 100U;
    msg.op = 149U;
    msg.request_id = 10825U;
    msg.plan_id.assign("PAWWVTCVFKHFGOLORHAOSBXVBBEXJJJJLTOBJIFHIMSODIBDXCCBVPAHQWVRGAEHPMAYQOFGXHBEYQINENQURGCEWAOCBUCHXPZERKUQGQZNGPLGLCDIOYUVDPKWYRNQUMYSSWETTKLZKJRNNQDLYLGFTBUYUJJEXRIKJPPCOAAETPFKUSGZIRZYMDVTV");
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.18085418772172912;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MZFRRNKSCLFMVASNPIRKKJHZICYXCJEFXRTLEKSSUIGONCPRGHODDPPATYRBQHKOXBTUCSNDCKOWFWLEYLJGIYDXMBDGMEMUPAXFBVYCVHVPQSLJWJOZMAQEDQJSCEVAAWQYBVFRTDRHBNUIZXWKPFXNGOPIJO");

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
    msg.setTimeStamp(0.9298827908582437);
    msg.setSource(180U);
    msg.setSourceEntity(154U);
    msg.setDestination(48618U);
    msg.setDestinationEntity(168U);
    msg.type = 167U;
    msg.op = 94U;
    msg.request_id = 20708U;
    msg.plan_id.assign("QUKMSGSHVTULYCUIWKNCFNLBJDPLEPTUSPMUIFRHGHQPJRSVHFJCQNCRSWUYADDWDDESRWFYRGFTLDDUJPGXBYPMBEUGYPMSKAYOYBTMIVYHAHBEOZLAMGDYWJNWSOHSZQORBZXEKEKWAZKXAVOMXGINKVR");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XXZUHYGFADVBYPMOPOEGFUDBSNWQEAVXOXDCJXZKWJPAXAJTYHBVJAQLIIIWFMFE");
    tmp_msg_0.feature_type = 175U;
    tmp_msg_0.rgb_red = 186U;
    tmp_msg_0.rgb_green = 88U;
    tmp_msg_0.rgb_blue = 145U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IZOPCFQMNQBKEDYUIXLTUSFVLSGIMRMJAU");

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
    msg.setTimeStamp(0.09360122781865299);
    msg.setSource(51388U);
    msg.setSourceEntity(96U);
    msg.setDestination(48167U);
    msg.setDestinationEntity(198U);
    msg.plan_count = 19799U;
    msg.plan_size = 4189512152U;
    msg.change_time = 0.7849877403834045;
    msg.change_sid = 29697U;
    msg.change_sname.assign("EDEIDMHGSVPEFNBWVMMSJBJEGKDPSMVAQTDWRDXTLMBZYOXAQJNHO");
    const signed char tmp_msg_0[] = {-49, -37, -116, -103, 117, 105, -103, 35, -87, -32, -92, -95, -47, 63, -42, 55, -86, -39, 17, 54, -74, 16, 65, -9, 50, 113, -28, 21, 85, -51, -31, -91, 82, 99, -5, -39, 91, 50, -109, 48, 24, 33, -69, -58};
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
    msg.setTimeStamp(0.7766229841196015);
    msg.setSource(11401U);
    msg.setSourceEntity(147U);
    msg.setDestination(58095U);
    msg.setDestinationEntity(141U);
    msg.plan_count = 47968U;
    msg.plan_size = 3505794369U;
    msg.change_time = 0.3892119025712367;
    msg.change_sid = 3202U;
    msg.change_sname.assign("JNWNJEKLTONCBCLUAHIYKEUXGMUYXVRNXJWWCPDWYEBRNXDTTBEONVMSFFSWEPDAIMJ");
    const signed char tmp_msg_0[] = {96, -82, 104, -26, -4, -64, 21, 110, -96, 125, 7, -72, -115, -52, 58, -11, 87, -17, 1, 117, 55, -30, -119, -36, 78, 17, -114, -102, -62, 19, 90, -120, 80, -104, 83, 16, -5, -71, -89, -114, 25, -121, -42, 119, 61, 114, -21, 4, 58, -6, -38, 110, -124, -112, -113, 53, 69, -91, -112, 98, 97, -28, 101, -112, 6, -78, 77, 23, 123, 12, -46, -39, -95, 90, -56, -4, -103, -103, -68, -42, -53, -94, -124, 83, 45, -95, -56, -14, -100, 125, -64, 84, 15, -34, -37, -68, 42, -74, 81, -88, 104, -127, -104, 100, -85, 44, -47, -44, -37, -114, -101, -18, 99, -109, 51, 125, -92, 122, 30, 51, -78, 80, 109, 3, -51, 32, -48, -22, 6, -43, -84, -40, -52, 28, 121, -76, 119, -20, 125, 42, -102, -104, -124, -113, -49, 26, -59, 11, 54, 100, -33, -106, 110, -51, 99, -95, -58, -112, 40, 82, 83, 14, 24, 107, -24, -109, -118, -67, 93, 106, 94, 16, -36, -114, -35, 69, 85, -12, -77, -103, 15, -48, 11, -40, 52, 120, -91, 106, 10, -83, 67, 44, 87, -82, -2, -80, 40, -125, -23, 54, -107, -11, -44, 126, -126, -106, -109, -87, 87, 96, -97, 43, -32, -22, 64, -79, -8, -92, -79, -21, -20, -51, -41, -14, -76, 48, 0};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IDANZFEICWHUKIBVZSTRVFELWRDMPUVSZJIJCVQR");
    tmp_msg_1.plan_size = 33051U;
    tmp_msg_1.change_time = 0.329164281469977;
    tmp_msg_1.change_sid = 63622U;
    tmp_msg_1.change_sname.assign("OCCIMCYLOAVVYKGVNCKSSFWSPEHKHSXDAHQRUNBOGNJHUIARSQRLEFMCDIYBMZYAPYPVEBFGOWLXPPIDZQHJBDTSDXUAUDTZTFJUMHYRTBJSQBRZZYWYEJPUJXQRTNWEQRWEBGXPUTFAWJONDHVLRNXAXTBLCKRCDXXDNVLUIZTSMPIJAONKZSPQHPOQ");
    const signed char tmp_tmp_msg_1_0[] = {-120, -65, 85, 109, 22, -41, 69, -36, -101, 125, -52, 97, 72, 84, -128, 36, -54, 117, 82, -19, -95, -17, 52, -111, 36, -119, 20, 31, -112, 23, -8, 111, 57, 31, 79, -126, 66, 19, 32, 119, 118, -29, -126, -41, 104, -21, 51, 84, 62, 12, 47, 20, -55, -11, 75, -112, 66, 51, 61, 20, 16, -24, 72, -64, -98, 53, -9, 15, -95, 72, 99, -66, 54};
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
    msg.setTimeStamp(0.3259092094192334);
    msg.setSource(57793U);
    msg.setSourceEntity(229U);
    msg.setDestination(55440U);
    msg.setDestinationEntity(112U);
    msg.plan_count = 61805U;
    msg.plan_size = 3574288317U;
    msg.change_time = 0.538383089010528;
    msg.change_sid = 58008U;
    msg.change_sname.assign("YWQDYOJYTILEQZRYHSBKGRDRZDVEOGNAMTYZYXL");
    const signed char tmp_msg_0[] = {124, -63, 107, 116, -61, 5, -71, -46, 70, -85, -76, 87, 101, 54, -70, -35, 108, -15, -16, -49, 35, 105, -23, 48, -78, -33, 59, 60, 14, -36, 95, 72, 94, 111, 58, -114, -120, 61, -86, -79, -85, 62, 3, 67, 119, 23, 15, 56, -69, -80, -127, -18, -51, 36, 18, 4, 86, 63, 38, -68, -23, -48, -71, 73, -9, 53, -91, -62, -45, -123, 52, -123, 37, 120, 15, -55, -42, 44, 96, -34, 75, 119, -37, 34, -46, 11, -58, 68, -55, -10, -19, 5, 34, 98, 20, 56, -7, 81, 126, -72, -116, 100, 7, 63, -11, -59, -10, 126, -119, 109, -125, -121, -55, 75, -56, 57, 67, -34, -84, 111, 64, 69, 94, -56, 16, 12, -94, -95, -58, -78, 31, 5, 15, 7, 24, 40, -126, -72, 25, 110, -122, 102, -20, -19, -94, -4, -72, -26, 7, 21, 66, 111, 81, 46, 69, 50, -25, 119, -76, 14, 35, -21, -17, -103, -70, 89, -110, 71, 7, 8, 60, 46, -119, 92, 98, 19, 77, -77, -76, 91, 125, 14, -39, -17, -71, -76, 95, -92, 50, -97, 61, 5, -100, -127, 93, -69, 17, -31, -20, -56, 4, 107, -30, 88, 14, 19, -77, -3, -98, 124, 112, -108, -15, -91, 98, 124, 114, 96, -72, -7, -47, -20, 124, -83, 118, 126};
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
    msg.setTimeStamp(0.9561651530068638);
    msg.setSource(18882U);
    msg.setSourceEntity(82U);
    msg.setDestination(50324U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("FFQZIJDPBHVDWVVJWQEKSIUXJSSGXBGYGTQVSGBVIZMELTQJADNJPOSFNDBBNCXNKZZMZNSQPMJRBHARFTBDUCMTHYBVZMOWSCXGUHVAPQYO");
    msg.plan_size = 63020U;
    msg.change_time = 0.48328764236598865;
    msg.change_sid = 47907U;
    msg.change_sname.assign("REXNTQOMBPYNRNZHOSZWUMIQAJHCTMYKEKSOZCYTEGHXUILPGTCVXMT");
    const signed char tmp_msg_0[] = {-102, -126, 69, -18, 67, -116, -32, 103, 67, 98, 17, 11, -1, -43, -70, 33, -31, 114, -1, -88, -113, 37, 37, 104, -25, -123, 101, -36, 31, -64, -67, -69, 125, -27, -120, 23, -80, 68, -17, 125, 86, -45, 68, 126, -1, 21, 43, -12, -83, -110, 86, -9, 37, -57, -29, -72, -70, 98, 56, 26, -105, 123, 119, 7, 78, 75, 51, 0, -101, -88, 54, -125, -12, 25, -17, 5, -35, 43, 14, -105, 67, -60, -13, 50, -102, 24, -59, 105, 60, 110, 43, -10, 65, -12, -113, 25, 33, 104, 10, -87, 62, 65, -41, -100, -110, -82, -23, -39, -67, 33, -118, -102, -114, 66, -110, 41, 24, 12, 13, -56, 28, -114, 56, 15, -13, 124, -95, 113, 13, -37, 79, -50, 63, -126, -35, -115, -32, 121, 94, 29, -98, -99, 113, -30, -31, -62, -122, -20, 104, -7, 85, -79, 87, -80, 60, -15, -42, -42, 35, -34, -84, 75, 11, -1, -37, -70, -10, 41, 102, 67, -86, -20, -63, 19, 45, 125, 12, -34, -46, 113, 54, -126, 105, 79, 90, -17, 39, 25, -85, -122, -77, 25, -117, -14, 86, 30, 90, -15, -13, 98, 0, -85, 48, -46, 38};
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
    msg.setTimeStamp(0.5189244567170392);
    msg.setSource(11092U);
    msg.setSourceEntity(109U);
    msg.setDestination(63716U);
    msg.setDestinationEntity(93U);
    msg.plan_id.assign("ZEGPIBYKUCNDTFSGXMZPKBVUJZLDLWURYQDOMFEMUMKQOOERQDXRVIENBYIIQWJFUFOAHHEIWUFTCCLTXVDMNGTRTYXXZJNLOWDNNXEMMCTZSEKXUPWMKPKVATMGANPHVIMSLVHANZWQVVYFKPWGJKCARCGTYHXUHAYLWROHVLOYJDPHWBIPEBZJEAJZAYVXOSLGLRHIBSSABNCNGBRQFQDRQFUCZSOYUETFSSCIKBJJTOIPQJKZPDGBQFH");
    msg.plan_size = 4552U;
    msg.change_time = 0.9367858656962718;
    msg.change_sid = 8863U;
    msg.change_sname.assign("IDMXWRCPQXPTSVOLUCEBRBRIFJUNVVRYTWTWRAJOFUGULWYVCTCGGPRNYVQSKKAXOOZOABBJHBJEHMEMTPSUXRNIYNGFBBZWZUQDPIGGPMUNFVNWBMPXKSDZQQGDULLPOXDNLUYOMPQJVMKDSXHAFVVDRYFRATWDPWJSZZKKIIYEZBCFOQFQTFHJJCXMJEOASBH");
    const signed char tmp_msg_0[] = {-22, 74, 41, -42, -113, -123, -59, 126, 117, 100, -16, 81, -106, 91, 103, -20, -6, -71, -93, -36, -107, 30, 18, 91, -12, 51, -76, 67, 121, -124, -19, -52, 85, -63, -98, 73, -41, -67, -115, -21, -55, 85, -99, -25, -106, 41, 26, 21, -29, 83, -127, -23, -70, -12, 77, -36, 23, 45, 29, -46, 18, -113, -24, -125, 105, 107, 43, 58, -48, 57, 63, -73, 30, 106, 13, 110, 57, 69, -37, -22, -33, 75, -95, -25, -46, 85, 52, 124, -94, -79, 70, -83, -70, 115, -10, 46, -125, -1, 32, 60, 122, 97, -26, -89, -78, -85, 36, -26, -106, -65, -127, 76, 67, 63, 7, -4, 120, -64, 112, 7, -19, 62, 98, 98, 36, 17, -21, 72, 54, 24, 105, -42, -91, -97, 37, 110, -123, -61, -113, 39, -89, 70, 39, 107, -97, 61, 17, 120, 2, -6, -39, -59, 65, -32, 66, -5, 1, -61, -116, -79, -26, -68, -124, 124, 94, 40, 38, 100, -73, 1, -28, -66, -116, -21, 110, 3, -56, -94, -104, 34, -2, -16, -54, -9, -38, 121, -30, 65, 24, 60, -91, -82, -15, -11, 57, -80, -125, 31, 36, 10, 36};
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
    msg.setTimeStamp(0.1941217083538589);
    msg.setSource(44656U);
    msg.setSourceEntity(52U);
    msg.setDestination(51219U);
    msg.setDestinationEntity(114U);
    msg.plan_id.assign("TUQKMDJSVL");
    msg.plan_size = 49110U;
    msg.change_time = 0.32849647767293977;
    msg.change_sid = 11470U;
    msg.change_sname.assign("XALYGXFWJHRZEBPNOJLBAGVYLOEPACNASCSNUIZUVNEHZWTNZWDMCOXKGJMPXRMYMOKADNIHKRJSQGAKGAGQQLYPZWZHJEQBNSPIYBBYYPUBHQLBVLHEDXZCUUPIEMNVWURDFVIHVFCTNOJKLZFKLQDOLAGTTCDOIMMJSDEVOHRLQMYWXFDJS");
    const signed char tmp_msg_0[] = {29, 126, -79, -69, -64, -56, -111, -116, 108, 8, -98, -48, 69, -58, -47, -68, 74, -21, 107, -35, 81, -94, -115, -119, 80, 83, -45, 21, 32, -62, 108, 112, -75, -73, -110, -78, 3, 8, -78, 86, -111, -5};
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
    msg.setTimeStamp(0.9748114536693006);
    msg.setSource(53898U);
    msg.setSourceEntity(118U);
    msg.setDestination(60998U);
    msg.setDestinationEntity(108U);
    msg.type = 24U;
    msg.op = 232U;
    msg.request_id = 4971U;
    msg.plan_id.assign("HPGOFLWGNTAHVTOQOSAYNRVAOIXDBLHRGZICVBSIOCHQHKMMJSKKFVRCWMWKRKHUIYUSLRLXQVC");
    msg.flags = 48548U;
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("ZDUROZSUKGWVQARHLDBAFJPGLVYONSOSTWLXZHLYGTLQVEOJUAWEXYYXCIDTTXPMVMHJYDITXENJMRALWUZMCYFXVFVCWJQJYCIRIYQKKQFISOOOXZQKPMIGAATMNEEGJCHQPYXCDFHNSPAMPYVHFGKLTVCCDEJRWHICBKFTDZUHASWVLAQATZMFDNKPUBRXKDDBVEQEBPNLQTLPNSSUZPUGBMGGRFOMNB");
    tmp_msg_0.lat = 0.06470458522513656;
    tmp_msg_0.lon = 0.448273852305894;
    tmp_msg_0.z_units = 147U;
    tmp_msg_0.z = 0.5422113657706524;
    tmp_msg_0.accuracy = 0.37194112405382984;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OBKJNVLIUFVEOQNAXRDJXIIMSSJDEZCHKHYICCDPVICLAZUPEPOVRPMGYMCYJFJOXIZBVMYQFMWABVBDTMRLKESHHSIWFKPEKDUXZQNXROOHFAYWAPTYHBSLRPGBUSNWPUZPAGAMFAUGBCKQKSRJFYHVJEFYMORLEDVBOYUWZGSJP");

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
    msg.setTimeStamp(0.0026067978562771543);
    msg.setSource(9859U);
    msg.setSourceEntity(128U);
    msg.setDestination(33476U);
    msg.setDestinationEntity(194U);
    msg.type = 184U;
    msg.op = 184U;
    msg.request_id = 7482U;
    msg.plan_id.assign("CNGBOYBRTTZHOOIZHJFHZOAMUSWQLJWIYZST");
    msg.flags = 18848U;
    IMC::AssetReport tmp_msg_0;
    tmp_msg_0.name.assign("JTCTVEBXHNSONAPIQDINETWPWSPZYSKWANLAFKKIUQKEGJJULDJTTCETFJLZVPGQBSLBQAOQASZMFXOKI");
    tmp_msg_0.report_time = 0.7175266125789664;
    tmp_msg_0.medium = 194U;
    tmp_msg_0.lat = 0.13151360683064794;
    tmp_msg_0.lon = 0.34648392573254094;
    tmp_msg_0.depth = 0.03696580503976843;
    tmp_msg_0.alt = 0.6351808439681212;
    tmp_msg_0.sog = 0.9219179184258464;
    tmp_msg_0.cog = 0.08410735451097562;
    IMC::SetThrusterActuation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 1U;
    tmp_tmp_msg_0_0.value = 0.5831454071538922;
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VSPCAUAGXPPXNLFWQMXDRNOOYCYDDTVTAIUGFEIBQLXQVKHAROTHCCKLEOSITXDZKGDSUPQJNULLTNHZBEPBSTXREIDDNRFBZMAMCZNKDFEGZDWWVALMJUWOBLAXMHTYYHUPHSAKLWEBBHFMTVIQGYSB");

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
    msg.setTimeStamp(0.33314721381606716);
    msg.setSource(37138U);
    msg.setSourceEntity(1U);
    msg.setDestination(39400U);
    msg.setDestinationEntity(155U);
    msg.type = 182U;
    msg.op = 203U;
    msg.request_id = 56484U;
    msg.plan_id.assign("PUGWYFUITUTSHTJKSEKOIQIDJ");
    msg.flags = 28317U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 15101U;
    tmp_msg_0.lat = 0.5953020431016384;
    tmp_msg_0.lon = 0.09637581489777314;
    tmp_msg_0.z = 0.6807178707948364;
    tmp_msg_0.z_units = 71U;
    tmp_msg_0.speed = 0.6237545325907721;
    tmp_msg_0.speed_units = 84U;
    tmp_msg_0.custom.assign("TDUYQSUCNARHQZBNCOWNTDSJUGDCCAXHOPRHAOFAGIWRLPGJMTKSRKZKCPJHEIKGQYNCUJXJUNMBTQPITQGAZHSPYVHRPGVDBLKNLLXIQLGBQMZJGTBPTTNIWENWBVOXVPZBCBLIAYGRHNKEUDZIMKROLWXZEMZTLSVPADFXIWMYMYWMOVCWYISFSFEPORXYRFMVKFQZDQQVZKOHSLUVRSAFYSUBJFJEGJCOECXDE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KEHEXABQMORIANDTUYGPYSPMGUUWSYJNJDOHVRZYPVXCVHWSMOLVCWVEOQKJAHQTEBBNYMPYTQOPIIMFTEEWLPA");

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
    msg.setTimeStamp(0.6973664531236194);
    msg.setSource(50649U);
    msg.setSourceEntity(161U);
    msg.setDestination(51462U);
    msg.setDestinationEntity(130U);
    msg.state = 166U;
    msg.plan_id.assign("WRAIZEWEZFVYDJHELDXFBRMVTTQKFIQKCWOHBNCFVBVIYOOKPAJMJUXNQBWEGHAQOVMKXWGNZWHFUMQMOGRBVICDTUQTJYKUSWGBMDNENHXXLLPLXEGSTKQUCDHZONPCRMWJDFMHRAVRVPLLWALIGUQYUVBEYJPUYNHAYESADPAIIPJBJZOTCGGGOCQTSNXBIRALRPMNLUXDZCIIWSRZVUZSFROSQXNSYEDSHGMEBSATFFTTCCKLXOFPDYJ");
    msg.plan_eta = 1672340646;
    msg.plan_progress = 0.013214836317443024;
    msg.man_id.assign("HIOSRILSIERFYVEKYYTKUVEZGECXBKDEQ");
    msg.man_type = 27786U;
    msg.man_eta = 1502555131;
    msg.last_outcome = 92U;

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
    msg.setTimeStamp(0.5144597502053687);
    msg.setSource(54509U);
    msg.setSourceEntity(60U);
    msg.setDestination(51668U);
    msg.setDestinationEntity(254U);
    msg.state = 200U;
    msg.plan_id.assign("BNQJOAZPTNWROIXILUCCNPJDCTXIVXLNOFQVGTKHDGLYJOHUQHZAEUOLGVAXMHBKURMYTYTNJMKSOYPXYVBTQIVCSFGZKZCYGUSMWEQCRNHJDRLWQSSJLGBIRFPPRBCOVUNWKWAPHQKEIJYFACXLWZTSGAXDMKPYVYGPNKRCBJFDHLEHBATBOGOH");
    msg.plan_eta = -963765659;
    msg.plan_progress = 0.265548163304981;
    msg.man_id.assign("GHOAMXLQNCOROMOHIJTQBYKNEJSVYUBIPMEKZAEVSYVRERFVYDEJCSZABMBRZIVHRLHQW");
    msg.man_type = 23930U;
    msg.man_eta = 1308271145;
    msg.last_outcome = 101U;

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
    msg.setTimeStamp(0.8214574662147148);
    msg.setSource(2180U);
    msg.setSourceEntity(189U);
    msg.setDestination(30367U);
    msg.setDestinationEntity(89U);
    msg.state = 153U;
    msg.plan_id.assign("ANEYVZKIRKWRQJTTVCODBRLUXVVDSXZFGRDYAUKZLOOHJMXRTPOSJPIIFCUGTVGJYGDCWT");
    msg.plan_eta = -796505185;
    msg.plan_progress = 0.9395302345098594;
    msg.man_id.assign("DOJFVYMLEDZJWZUZMWIUJVIWZAJQSYGKPGBNLQZRBGOBVHECHJACTVGRANHCEDADXZYUB");
    msg.man_type = 35559U;
    msg.man_eta = 277223318;
    msg.last_outcome = 98U;

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
    msg.setTimeStamp(0.2704401625354209);
    msg.setSource(42683U);
    msg.setSourceEntity(179U);
    msg.setDestination(43662U);
    msg.setDestinationEntity(203U);
    msg.name.assign("GUBYMWYNTUVPKISQRSYTHVNQFFLYFJHFMCKDDHGUWWZJBMXMQIQNMVBPXSGTMUKOZDWJAEHOPKSOGQWVDNBLWOCJVGILCKVAFKTZBQIIFZTPJPUKIIHZ");
    msg.value.assign("XFLTIFGZHVNMSDYVORALCFKEQNIAAOQHROXKKHIPHLPISLAYSYVJXDRZFEPCVLJQNCWBKDHXKZNTSMZOGENTGXDWDGVLBYRMDAFENICSKIAQZEUPQVRXAHKSWAQFEHOBMBTYEORWFBZHPZXABTJTFUVVHJYHTZWVZKGCEAQNIRCBCWUFPUTXSIWOCNGIRYUPDYDSNGTXURPMJOJRSQVBWGYOXILBJOBLQSYCJMPDJMKLGPLEF");
    msg.type = 124U;
    msg.access = 253U;

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
    msg.setTimeStamp(0.6815467681172949);
    msg.setSource(24496U);
    msg.setSourceEntity(155U);
    msg.setDestination(2184U);
    msg.setDestinationEntity(77U);
    msg.name.assign("OKVYHHKDNXJAEMOQNRDFRRHRFVUITYDSRUWTHNCMVFELYDULZOKHZEMNABTNNIWAQCHKRSEABYXVJEPOXCNXZWZCUMQGGIIUWQEAXJTFMVYZPDILSSIMPHEG");
    msg.value.assign("WSVFLLEHDGOPLACFLZSMFPATCHNXDYBFAXUKKOGYZJYULCWCDOQKGUBQKUPTIBEFJESKNJGNCDGEFNWUYLXSFWMKTXMRMORXXHXI");
    msg.type = 62U;
    msg.access = 189U;

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
    msg.setTimeStamp(0.8283012660707024);
    msg.setSource(35626U);
    msg.setSourceEntity(112U);
    msg.setDestination(46666U);
    msg.setDestinationEntity(52U);
    msg.name.assign("ATWLTCFZJWDIPNRXQVSEMHOEPFYTTQOUWPHUJMYBXCLMIHELBEPESIGBMYBUQYPWAINGADVRSHHNNTCQYXXKBXDEDUMGRCFVPASVAKNOXCANCUSGZHWMTOYGGHQLIWDOOUXSFWUIMXCEAIQDRJLFEIYHOIPNCZLKAZZSHHKJRSQLDRGRVDQFKWDKCURABBQ");
    msg.value.assign("WAVJZHXOUJXCBNJFTROXYUJPAKLQQEIEYHKPCFDRWSEOJHGSAGQZEQVKJCYXFRFGFCKDMKKAOOFVSVTWYVMQTUKLCDOGMTIANZMHUZUPOEXDMLFEFRPUEFTLSPBHUHRNPEPNLOMSMESBBIVPYASXBYRCQIOQZBGRVWNBXUSLAZMDURFJVHYPELZHAWPCSMNRNQSTRXODZACGGXWNK");
    msg.type = 212U;
    msg.access = 193U;

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
    msg.setTimeStamp(0.5872301140848989);
    msg.setSource(62523U);
    msg.setSourceEntity(58U);
    msg.setDestination(4133U);
    msg.setDestinationEntity(117U);
    msg.cmd = 230U;
    msg.op = 185U;
    msg.plan_id.assign("HKUAPVABIYYLGIKNRNTMPCPYPTTZFWXEZHYRPSZRTXHHZMCAUZNEOKNGOELHEBMSWODQAYSNFQRWCUDQCZGLMBCJUVGRSKKKFFMLXJSKYE");
    msg.params.assign("LGFGSFSJZWJNOJHJKEBIHLIDKMLCERZJRYBCWEXDDIODVUNFEOLWLGZEXTCVRAYBBPQVOPSAFCDIXZPKKBMAAZUOFACFMJBBLRHYSVUGFVPKZNRHQOWIIDNSGGMYBNWEDIQUSPSZUNDGVIEHTVTUFRQXFQKDNXHZRVYAMAOQXHMPUGHPYROWZAWKQFJCQNMAYDXMKAUSTXEMOVTUWQJQUZLHEGMGJL");

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
    msg.setTimeStamp(0.4212985853961484);
    msg.setSource(42064U);
    msg.setSourceEntity(92U);
    msg.setDestination(64763U);
    msg.setDestinationEntity(31U);
    msg.cmd = 9U;
    msg.op = 231U;
    msg.plan_id.assign("TSEDSSWZVHJDVNOLRMHURESQYKRTCIYAOTMSVXDQJLOWYWUBMRDXLUZDAVGJBPYWJUJHNKRCNYDXCXHHGFSCAUTJNOBKVXPYEJOEBZDQGIMDFIPMPFKYIPLLQLGPGVUTWMLOWVLZTCZVPHNEHRCLTKXZRQMUJAGOCOKNYANFOKCFZHAIWWFQAENBGTLCDGIFFMQSRCMBTBU");
    msg.params.assign("JGNRWRTXLVIJHJTQAOKSQNXRTAWVCYDINSJIVWSKILMSYENZZXRQYDRYEZPEQTHXCUHIBNWPYPIBPHHAWGPBGHQAQCVBLDPYOAKOSWOVRBSGFNIVWUGOGSHKRZAUMPIYNXFARZXJXZFUDVECNDJSOUZDMFJEFTJYOEKKQYMFELPGLFFMXRCWLIUAMKXITQDCGVNHUMCJKTBUDRJCYMCTMENBGHXUEUALLQDWVBQHAVLDOMZGKOSBCTBL");

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
    msg.setTimeStamp(0.6124423809589411);
    msg.setSource(54989U);
    msg.setSourceEntity(104U);
    msg.setDestination(51592U);
    msg.setDestinationEntity(118U);
    msg.cmd = 225U;
    msg.op = 118U;
    msg.plan_id.assign("CZQOTXGQQQFVEOIBROJUDWJAESTRHFSHEPRGPJYOYEGFXBKLQWIPCMSZRGKBPZSQMCWIWTLOLXBXNNCHRYSKNUHEJBZLHLGSLUVGHSPYZMIKKCUYDQNKULSAVPEUUYMTASZJQMXAXEKIPIIYCMHFGLWTVDADKTNTKUGMYFMNGDERDVJINVFIOVPCMCVYWXWFBDDZDPNOXSQHJLQMKIWUCZTJXRFBBCNOOREYPABJAAFVHWTTZREFAZHXGB");
    msg.params.assign("CYJVZNKDUXRIIWCXSUCDCKOREZLZYQZMISMDTVHSHTXQQABPUDKGCOWIQMICNKJBWOKCVBYQZGFYTRDYFEDGQHQBGFVSRKYLWAMSTCPVMLBZEFPFPJUCAGRASPALPHHMIHRYNSXXFIMWZJBEKJATPWBCKVYLMRELAEZXWVARNHUVOWFSSXLAXSZENLWNGWJROQVOBKFDUJNNDVPYBHXHUIGEMRPTETGDFLBUO");

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
    msg.setTimeStamp(0.8846510478922398);
    msg.setSource(61656U);
    msg.setSourceEntity(64U);
    msg.setDestination(31988U);
    msg.setDestinationEntity(66U);
    msg.group_name.assign("TFTKFJJKSZZCKKWAHFEQBMAOKGYWVHJABCDFVWTYJAIJEHVGVLQCVPZODMIURYSHEIUFQELIVZXEARXXEUODGNKPDLUADXSVSCCIPFIYGQOYUYSBMHZCVTGRKLQTBMXUYKGAMEBUZAOOHGPRITFPENKVLLJOTNMXUAPSDMNKF");
    msg.op = 188U;
    msg.lat = 0.8781480600656245;
    msg.lon = 0.0640404930587446;
    msg.height = 0.4320078846714861;
    msg.x = 0.4218257630194455;
    msg.y = 0.1824674748172851;
    msg.z = 0.027935445326896957;
    msg.phi = 0.6138531590230535;
    msg.theta = 0.34716385107277836;
    msg.psi = 0.8711853299286567;
    msg.vx = 0.7981244650438182;
    msg.vy = 0.5860670044960642;
    msg.vz = 0.16375963783248515;
    msg.p = 0.05242962953852259;
    msg.q = 0.42609232876766834;
    msg.r = 0.990051953911732;
    msg.svx = 0.5804964565235603;
    msg.svy = 0.295617407641134;
    msg.svz = 0.11262736989944622;

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
    msg.setTimeStamp(0.028800214170409788);
    msg.setSource(27856U);
    msg.setSourceEntity(93U);
    msg.setDestination(21417U);
    msg.setDestinationEntity(230U);
    msg.group_name.assign("FMAWSJTIBVPWBYDPIJRJURLKDTYIURQLLWWTDEHBAXIMJEIJQPHPGQLGGKGLOKSNAZNYYUNRZRAPYAYTMPOFQNPUQPAOKAXBDCIQSDCJBAZ");
    msg.op = 136U;
    msg.lat = 0.4010260318791843;
    msg.lon = 0.7851216944689521;
    msg.height = 0.10992850241760521;
    msg.x = 0.8590626837875139;
    msg.y = 0.01926504561233;
    msg.z = 0.7474188923811776;
    msg.phi = 0.43945452956477915;
    msg.theta = 0.07439727562695542;
    msg.psi = 0.7777433152356246;
    msg.vx = 0.5083530176183474;
    msg.vy = 0.8903854861229816;
    msg.vz = 0.950137876680241;
    msg.p = 0.15396423168080964;
    msg.q = 0.6467141754759744;
    msg.r = 0.13338838767569539;
    msg.svx = 0.6992750275548584;
    msg.svy = 0.21279114042231184;
    msg.svz = 0.17190436314214197;

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
    msg.setTimeStamp(0.11057541598842746);
    msg.setSource(46776U);
    msg.setSourceEntity(57U);
    msg.setDestination(3716U);
    msg.setDestinationEntity(156U);
    msg.group_name.assign("NXIRAABHCOGXKSADHDKVZFBYZALMTNBLOHBJRPXBPSXRWOEJQKNBNZEWSYRVMFVKQWTOVYSTEBWFVQEFMCUJUXXIMJAABIXZPLQUWIWOCGJNHUPOENDQRKMHFUETTFYLRNUZCCCSALWIHRTHVJJSU");
    msg.op = 141U;
    msg.lat = 0.45434265995375045;
    msg.lon = 0.5493828942344524;
    msg.height = 0.1195815667312985;
    msg.x = 0.8338138232880223;
    msg.y = 0.2042645087826479;
    msg.z = 0.5486041708359791;
    msg.phi = 0.10342607992643149;
    msg.theta = 0.003164261272116331;
    msg.psi = 0.5896935290977414;
    msg.vx = 0.11594718255610603;
    msg.vy = 0.16857062676276557;
    msg.vz = 0.6749846089449411;
    msg.p = 0.3899505597394276;
    msg.q = 0.5574821843975105;
    msg.r = 0.23309760249869582;
    msg.svx = 0.9082436550723906;
    msg.svy = 0.16212024934397062;
    msg.svz = 0.6287961973635482;

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
    msg.setTimeStamp(0.24638587361186493);
    msg.setSource(63074U);
    msg.setSourceEntity(234U);
    msg.setDestination(8236U);
    msg.setDestinationEntity(232U);
    msg.plan_id.assign("OEUGRGXFPHMUNKCMJHMTOBPYWDIGUKKSQJTGBCZHDCOMORKUCHEPQPANYLLJMPCCCBTRQLDQFWKDFBJBAZWCMKNIJRRMGYCALIZEQSVZEOLYITVZEJZBLYTWNXKFZOXQLNREWNLKUBDXBUPAYYBQUNWSDIWHOASNIVEXUXARVDHFTFFB");
    msg.type = 73U;
    msg.properties = 233U;
    msg.durations.assign("FOFHDFLDNEEBVJGMDUQCXBIJCRLVH");
    msg.distances.assign("RGZXQUPPJYJGZKVWLHMAVSJTYBTOTVSGHUXLBHLICHKPWBJSYWIRAVIFXRYMKEJKBZMFGQQDOPPILVAIAYNYIGJIPQXBWKGKTOHHMSCCLGMNDLZJMWNNXAFYEPOJTZQECICUYCMYLFFXAVEEXDERADOLNRHPDUKUCJLOD");
    msg.actions.assign("DELELNSSAIHDQDKDAPVFJCCPERNLMHXYVUJRMOSTCYTVSMXXPATIUCMXKXIKCSWGUCSZMYJQCWCNHBLSFONKLNIZKMPZAQGUKEBRHGYWHDYZIUIZOODVLFFZNZQGIRYTNQVGBBFLEDQNYJTDQFJXESIUWVTYCLPVQFWQJATTWKXRGGHZPIPWHTGBRDWJHVOBXPAABHKAEJE");
    msg.fuel.assign("FLNVVPEGLGRBBWQXBDZZUCSQEOGJQXRWFTUDYFFGNXDZMKIHIKLRMALOAMQLYZCVTUPCYBEVX");

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
    msg.setTimeStamp(0.9536685237399728);
    msg.setSource(20943U);
    msg.setSourceEntity(61U);
    msg.setDestination(32651U);
    msg.setDestinationEntity(127U);
    msg.plan_id.assign("LZVUPOKAAJMUARUJEWQYLICOWQWZHRELTHFTEKAJTAHPWFJXPPKWDHLNXCFEMNMPLGXTXSVABL");
    msg.type = 154U;
    msg.properties = 3U;
    msg.durations.assign("BZJMONRMFVXHGNIEDUTUOIOZQHEIS");
    msg.distances.assign("AGAXZJNDTOPOEKJTJSTGVGINSKQXVROBPFDNOEMBTXLFIFVWTDGXXURHCQRYNGPMAXZNGKVVZQDDKEFTODWBDKLZIGSWUMYMXULABYMBVCCCLFQUUBLSAPWZWWFFYRTRCFKBHOARUXSITQPWBFYRRTMSQENLYNYKZZPPMGICOJWPQSFIYYZJNWICUJCLUJVEUMIPHKIGHEAMCJLIOXBSMHRYHASEHEHCJNKLSODHNPGRLBQHVQZDOAVWJE");
    msg.actions.assign("ERWUTEIGQFRTGNZDKVJCUUTLKUNEGMORMYMTPZ");
    msg.fuel.assign("CPKZFZNWUHHYVQXSMKCFWNHERNBIIODGBPMQELXHFBKYIATDAXHFKLGKEDYBDVSJVFZOSMGVWQPAEQDMWXAPNCEKJTCWHSVMROZIJYVYUESVCJIUQBG");

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
    msg.setTimeStamp(0.12415904164661562);
    msg.setSource(976U);
    msg.setSourceEntity(240U);
    msg.setDestination(35268U);
    msg.setDestinationEntity(182U);
    msg.plan_id.assign("SZEPKDOJPSNQEWRXNHDLEBYERHMSOPABGJWEHMTKZDUVBTKRHPJTSLVYJDBOJACLOULSQIZIMIQSYKBGRCKBTTNHCCZAIAWXSQMRUUVVEYNWQAXWECFGJDKTTPFUFIBXPIZBLGVTNZOUNYFMIMYXTAIZUDJEOGWKOFOJOMJVQZZWNXUICJUPFRCFIYFQSYNEVAKEHKXMGNPRXDRALDVMPPFHAAYVCQGOTUHXGSLWLGWFBXQHCKLBDLVRNRDH");
    msg.type = 141U;
    msg.properties = 212U;
    msg.durations.assign("DPYAMQWHNPJSABKHVQLECQDEFUONBIIMKAHBSUDUTDOLHKCLTLMXQTKYILGYSUZNRVZEKZQJJGNXUFCOOMHPOVELXVLOWZNJDIGNANENPYZUXRYECGTYCQTLQUDRXMVWKZXPUZBBGMECIRSEMXVUCSWOLRSTWPAZBJVFTFBQOSJHTTSIAWRJTNMGHKREPQEVCCIOWWPRFFBJIGHJKGXBH");
    msg.distances.assign("UHSYQREPBJCWQNKDOFVIDVAKNSXMQGZSQMEHWBEGNXGDIQIDMNCHHJMFGEQVFBSBYXEZDQROTYZIKXAJSDLQCZTACRERWSAJRUEYGFZLKPKWUHNZJMTUMJRFRTTGNTMAUVMVAOVMXCOKPWZMUXBGWRONYCIPVVFXKASXHSYUIFUPYLEHVABRRHLPAJFQTWOUBSPJLGTIOZBIQVLYZIYZDNYEFLTODWPILAWCOHDGGCWJLKJTFNDPLCEPKKSUXB");
    msg.actions.assign("RVOOMWBWBSCLSNQTBXOESFTEVCXDVKPIBUPBOBELLJVYLYNFZUPMTZMHNWMFVPHYESTWXBAJWNGQIVSZCMCLDPAXWKCYQEAJDQDYQZIRCGWOUCDVNDIHJQUGATZJPGULBNJNZFKAVMIZJRRHCQFPGIAGBWDGJFYNSIZSOZMFFAXPEMHHPALESBIJNIEUAHXECVRTARNDHDFKMD");
    msg.fuel.assign("VDBHVPACGRAREDJSSJHPLWVNPQMNEHYXCCZGAOUULNFQRWZDFKKYXDSRHRDXOKCTGAZWAREYESMILTDPXXYSBQGYYFSVOUWBOSZJQNZOJJCIALIBGHTYBTAEWPQDNEMCIYLTRSSEPXZGMIMLROTWTPJIUKMVLESHVOKZCTQEMRUZLGULQGAWIQKAVVAKBIFFYLWUTZJUJIMBNJVNMQCFUNBHCKERXQODGITXWHNBMFYXZDWFODNOCK");

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
    msg.setTimeStamp(0.1787500579045328);
    msg.setSource(52691U);
    msg.setSourceEntity(216U);
    msg.setDestination(39666U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.7751783504376559;
    msg.lon = 0.6001870256112238;
    msg.depth = 0.8037522591604139;
    msg.roll = 0.4173704404885886;
    msg.pitch = 0.6639409637448634;
    msg.yaw = 0.3151117802012139;
    msg.rcp_time = 0.9436008086451495;
    msg.sid.assign("IADZIJBPXEWORXWXIZVZOCXEGYTOGVLECRHSBHTFAITYEONQDKPWNJSRMGASGHCYFKIKXPCAVSFDRWYPSNZHMCHLOYXYVMQIGTSVFQXIKCHNMEUDAWVZJJELOOIMBOOCQQVAFBVUBRGHNBHTXJNBDRPMITJRNJGLAHFVUDZFMXLDJ");
    msg.s_type = 178U;

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
    msg.setTimeStamp(0.024411043252654974);
    msg.setSource(1775U);
    msg.setSourceEntity(20U);
    msg.setDestination(59848U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.6372405978898169;
    msg.lon = 0.9715101114389971;
    msg.depth = 0.49539114009862484;
    msg.roll = 0.6862801253321233;
    msg.pitch = 0.5856674456355571;
    msg.yaw = 0.7542405113987278;
    msg.rcp_time = 0.7677636127558239;
    msg.sid.assign("EJMYVQORLEATRHICALVUMIHYYYYQHYQJKUTKPODZLFDJWZPKABWAUTBVVXGZXHRZYIKBLJVGJSWECUGKYGFJTXVLZOEXYAEPCKFTIQIGEYPUAJNHRZLUZTDBSFDEERKBQAAWZPAUHOSMGXDOCIVRGGBBBSRNKFCTMHAXLMFISTXP");
    msg.s_type = 91U;

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
    msg.setTimeStamp(0.509768651081371);
    msg.setSource(44650U);
    msg.setSourceEntity(36U);
    msg.setDestination(46016U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.7681825983416712;
    msg.lon = 0.4291685129975076;
    msg.depth = 0.048589399289128754;
    msg.roll = 0.06753234376179507;
    msg.pitch = 0.0034175219554294367;
    msg.yaw = 0.08870627154101807;
    msg.rcp_time = 0.6197685978492907;
    msg.sid.assign("KSENNFYUSIUERMYYGMVCKDQUCODHKZXLSGFVIUQNLHBJMZNZTIVKPUAQFTQMFQWNZYJCTWWBIIWPJRXMPAULMGOULUDVAIGHDXHUCKCWHLFBHRRHRXJMMDMYFGEELXZTTHSJXPYQDZDSEMPWAKGZDEXDGK");
    msg.s_type = 146U;

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
    msg.setTimeStamp(0.1714375858129864);
    msg.setSource(51144U);
    msg.setSourceEntity(95U);
    msg.setDestination(48695U);
    msg.setDestinationEntity(127U);
    msg.id.assign("QDHIKXHEYFJVKCRDVDUXEPEZYJODSUSJJFXVARWTTLSKNBCKPHUZ");
    msg.sensor_class.assign("ZXRRJMYBIOWFVPSFDHAJLAXHNHPWBXZGMHCISETVUZPAIXPKLOCOMXMGXZDRQEMALUIJXZYTULKMIEAKHTCFIWSQHKSTQGJCKVGSYUFDFXPNTRRYOQHVYNNQMUCZDUQQFPOSHSPMLCBCNLTDFUWZWJBFYAPNAPZUEVO");
    msg.lat = 0.5362964392725139;
    msg.lon = 0.3027618758046118;
    msg.alt = 0.6917698436454793;
    msg.heading = 0.8436183629884665;
    msg.data.assign("CNMZIKLMVKWEEFHLTXFEDPICBYNNCQZBKAMOSGCRWIFTFMCVEJORBDRSYFYQMLWAWQFBFKIUATFAHVIOIAGSDNQCBNPUNJBI");

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
    msg.setTimeStamp(0.5063418966881662);
    msg.setSource(13532U);
    msg.setSourceEntity(39U);
    msg.setDestination(64500U);
    msg.setDestinationEntity(238U);
    msg.id.assign("PJRCQVXWHSDRMRTXHBNTFFIDMGISDOJHDMPMZXSLKQAMBHFJFFJERWBQGZDJLOSIJZLDWIFUZCPXWIZHCNGVKVONQYFNNSPXMTTPEWCSTDHRSPLUTJBPUXERQQNPKVCKVTYNLLWFIYIBYYPJEEOBBWMGLHZUU");
    msg.sensor_class.assign("OEPFKYDJEKBOKVRHVEWUGQOLZZKIYJWXNQJEJIIIACKVGHBVOIJHWKNCFPCSLDAJIRTYDJ");
    msg.lat = 0.25139877283521816;
    msg.lon = 0.19555938991351163;
    msg.alt = 0.3372883919574584;
    msg.heading = 0.2069333089875074;
    msg.data.assign("YSOGSLLHYCKSFYSMIQXSTBNUYBISZQTDDOANTGOPQHQRNXKKIGRF");

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
    msg.setTimeStamp(0.7068590766978046);
    msg.setSource(57889U);
    msg.setSourceEntity(201U);
    msg.setDestination(33606U);
    msg.setDestinationEntity(235U);
    msg.id.assign("EZRJWSWKAPPTQEMZIGTRHJAOJXMXMGHLKCODNUSUWFRKUBZWCAPCMZOWLHTSOYVUBYAERCPTXDNCYTXLMYGLTNVYJFFMXFEDONRXICVWEIXSNQSVHELTDNCZSDVYNISOGBHUIXUPEKJJVQBNKZQUGDPEBEJPRJGVJGMQPKHZDZYADQRGLRZTFDWOEFPAMRSVBVSD");
    msg.sensor_class.assign("DUQOZJJYIRRDLFRPDBZXFLHSNFHZKSPVVGAEEPRNUCQNGIOSUNRIVSFVUAHLVSQKBWWLTIZYHKDXP");
    msg.lat = 0.13801025623952157;
    msg.lon = 0.7747592951854779;
    msg.alt = 0.5189721415454215;
    msg.heading = 0.3228923583309973;
    msg.data.assign("TXNSKHFMCPICFKTNYWGPGLHRKLOKJSMBAQKKZKIQVZVYAYJACDDSUIGPVXLZHUJAXBUOETBSEIUUUMWZVARLOEFMYGTMBTRDYSQPSCJEVNWMMDTMTHEAZXZYFDRBIIXIVJGQJAHGTNOXLWDOFRQLBIXQ");

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
    msg.setTimeStamp(0.36218951271343003);
    msg.setSource(47688U);
    msg.setSourceEntity(129U);
    msg.setDestination(42733U);
    msg.setDestinationEntity(48U);
    msg.id.assign("ASRMOCNKQRLYHPFMGWUTPI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OBHBLNMIFQUSUBMOSEVUJKPNMPZEEOFPPPRWJFTDHTVDOSUAMGKMWNZIQXQZGYWXKSIGQDBLRYVWAKAKTJCBTXUWQDCJCVHZEXXPLRKSUNVOWVVJWYFGYHYJZFNMJFPQUUUHDEIJDLYHROBGAACMSPIFGRRPCLRZYJYELKWHZMPHQIIGLAEHNTOFLWCSXBGKYKDCNTWZQEGXTCOAOTF");
    tmp_msg_0.feature_type = 131U;
    tmp_msg_0.rgb_red = 90U;
    tmp_msg_0.rgb_green = 197U;
    tmp_msg_0.rgb_blue = 61U;
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
    msg.setTimeStamp(0.01834284515469542);
    msg.setSource(13538U);
    msg.setSourceEntity(244U);
    msg.setDestination(8678U);
    msg.setDestinationEntity(93U);
    msg.id.assign("ZPJYUUCAHWEDNRMSJULIVRPZVBPNHQMMMTHQVSUXINHQQTEDKPAXSLZZTPBUKJBETHOUSGDYEWHZAHWQREDTRLLNBDITMWNMNICIXDBEEGBNOVKBTIODVUKFDUGCYJRJQBCLWBZKFSUVMCSCPPWZOAIFGOHMXVARKIJQVXSOFMHXKXTYXTCPWNKFWDDJMRJFALFXCGEVTOPWUNGGRLYRGSKJWBZFLLYYNGZXYFQHIEYCKGCS");

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
    msg.setTimeStamp(0.31900595609640203);
    msg.setSource(11234U);
    msg.setSourceEntity(147U);
    msg.setDestination(36512U);
    msg.setDestinationEntity(59U);
    msg.id.assign("LQHNWGGGLCFNHQOYFCPFYDJRSCPARGYVFBUXZLVFUUFLZWJMWKKTFBDSOMXHGCZBCRPIYDNDWTHNITSRFGEXJNYSPUDXXRHDEASLBMTIEOZIAXTL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LCELAJDDPDXLPRNEVMXSOXSSOUVKJZVBGCIPAWTKYTJWYJTVQHOZUKIBQLNIOHFVS");
    tmp_msg_0.feature_type = 135U;
    tmp_msg_0.rgb_red = 106U;
    tmp_msg_0.rgb_green = 5U;
    tmp_msg_0.rgb_blue = 224U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4120457126561886;
    tmp_tmp_msg_0_0.lon = 0.0018179570714874638;
    tmp_tmp_msg_0_0.alt = 0.33278350814950186;
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
    msg.setTimeStamp(0.7567064301799173);
    msg.setSource(6644U);
    msg.setSourceEntity(210U);
    msg.setDestination(11841U);
    msg.setDestinationEntity(38U);
    msg.id.assign("TJKBAKPWBRUGIJABUSCGEBRHROLXBYVQFFFXAWWEI");
    msg.feature_type = 105U;
    msg.rgb_red = 49U;
    msg.rgb_green = 92U;
    msg.rgb_blue = 122U;

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
    msg.setTimeStamp(0.9295466621835622);
    msg.setSource(53028U);
    msg.setSourceEntity(175U);
    msg.setDestination(26079U);
    msg.setDestinationEntity(247U);
    msg.id.assign("OCDWCHZBWBHXJRNUAZTIBOHYCQENRCIRJLTEDQMDBVDVCJWXGWHVSBVTJMIAEUPIYVHKQGULYKREMYJJXWDGPAETDKNKAQAPCSFMGXFUBKCOWHGLYFMRCNQTFHBQPWWHEPODNPLQGUMFMLWDXQMZRYFOOYKNUGVFZIXZTOOVMGNLTJFNJBSREAXELSLGPIBTCSRYPHQEOSSNX");
    msg.feature_type = 167U;
    msg.rgb_red = 33U;
    msg.rgb_green = 74U;
    msg.rgb_blue = 166U;

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
    msg.setTimeStamp(0.31291207355751305);
    msg.setSource(44324U);
    msg.setSourceEntity(124U);
    msg.setDestination(52487U);
    msg.setDestinationEntity(118U);
    msg.id.assign("TOAPBLJHRHEGDPUAMOMDGTTKAVJMSXQTKJINBECWPPRNNXMBQVDNKULKLYXYYZCXAWQTEVJFQNSMDHWVRITPCNDIYIZJUXXM");
    msg.feature_type = 92U;
    msg.rgb_red = 16U;
    msg.rgb_green = 39U;
    msg.rgb_blue = 227U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8855614279303154;
    tmp_msg_0.lon = 0.3288264742300674;
    tmp_msg_0.alt = 0.02457307348678195;
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
    msg.setTimeStamp(0.8403734494663633);
    msg.setSource(9916U);
    msg.setSourceEntity(63U);
    msg.setDestination(62932U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.028562696337776527;
    msg.lon = 0.000759981171770785;
    msg.alt = 0.3840287656073672;

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
    msg.setTimeStamp(0.2714116756331949);
    msg.setSource(55598U);
    msg.setSourceEntity(162U);
    msg.setDestination(28586U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.6878386518786569;
    msg.lon = 0.0741537930230497;
    msg.alt = 0.7714475179882073;

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
    msg.setTimeStamp(0.011939960912366043);
    msg.setSource(44878U);
    msg.setSourceEntity(236U);
    msg.setDestination(43361U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.18100350545986466;
    msg.lon = 0.2341700744315094;
    msg.alt = 0.48489445294662126;

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
    msg.setTimeStamp(0.3101591079802005);
    msg.setSource(34796U);
    msg.setSourceEntity(102U);
    msg.setDestination(27883U);
    msg.setDestinationEntity(216U);
    msg.type = 77U;
    msg.id.assign("MXENMCJSVDXFKJYEMBFWNURSRGVWPDTZZCALBOJFPYJTVLJRZDUPNZVFQNYABTLRROHUGTWHWFROBVQQNWDYPQJSTHVOUTMEQEOPGQOYVIDEJHWEQPDKIXMFBEYPYXSEOXLIBCICOGCJXXVSALKIQZMRAZXUUGFFSQFUQAIZMUCAVJDOKSXRBSNAYBMNJGAKCPCHMKSIWOHSBDLXLHPBHTNWTKHDTDRKFLCGIAHRNEEUILIAKZ");
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 191U;
    tmp_msg_0.max_depth = 0.8162771056491185;
    tmp_msg_0.min_altitude = 0.6737010660227181;
    tmp_msg_0.max_altitude = 0.39973054965620747;
    tmp_msg_0.min_speed = 0.9565643093020311;
    tmp_msg_0.max_speed = 0.06568760415189479;
    tmp_msg_0.max_vrate = 0.5123396865061814;
    tmp_msg_0.lat = 0.13997748298613844;
    tmp_msg_0.lon = 0.2534576111303142;
    tmp_msg_0.orientation = 0.12088685206653216;
    tmp_msg_0.width = 0.12226941359820764;
    tmp_msg_0.length = 0.7948086420155223;
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
    msg.setTimeStamp(0.9390704173913363);
    msg.setSource(59472U);
    msg.setSourceEntity(26U);
    msg.setDestination(20949U);
    msg.setDestinationEntity(157U);
    msg.type = 119U;
    msg.id.assign("PLCCMKCXHIKRTWGVQXRVNXJOXEDWEDNOPYZZXFJHKBQVCJUNMIJTLNOMRTBNCYFPSUNFKKRHGXZUBCGGBFSQLOEXTWWIFJYEAPLMHKRVUHITZMGUHOEBA");
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 109U;
    tmp_msg_0.op = 220U;
    tmp_msg_0.request_id = 11587U;
    tmp_msg_0.plan_id.assign("RSEUSUNCVLMQCHOWDBWNXHGVOHTICUBFAVYQEWHQRRXMSMJGAHTPOPLOUZVRZTSINEBQODKDFXMFRVJEJLGBGASNHKCDKOCSJYINWGKELUOPUAERUTTYIGIP");
    tmp_msg_0.flags = 25887U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5383204269138663;
    tmp_tmp_msg_0_0.speed_units = 29U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("OYTPLTXFRCHANKVDGZRYAPTUGQFYPXBQGCYPOLUVRQUTDFLMNICFFJWZSEVONDTRXJBLBNMMCHBSYSWKJVXXEJAVPHUKYXWWSXRUQCLEEIXNDPFANEAHSDVMIVLKWMJDOIWILKACLTCGEBJMRVYURZOBBPPGZKWS");
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
    msg.setTimeStamp(0.14155566853192647);
    msg.setSource(24900U);
    msg.setSourceEntity(214U);
    msg.setDestination(19310U);
    msg.setDestinationEntity(20U);
    msg.type = 247U;
    msg.id.assign("IQJJKDYTGQUCZMDYQGZFHBHZ");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 39334U;
    tmp_msg_0.name.assign("PTMRBGBFMJTKUEDEGDZWDVSUDXLMQGIRLCSJUQXXYLZJIPJZZFPMLHNLRPZCIXRVFFZUZDCMVNITDPFABNWKIFKDPRKBOVBFXWVQYMTOSCBSGPQGCGZ");
    tmp_msg_0.custom.assign("WYEBBCUWFATQOXSAJIVDFBPATIJQWFYENWZCNMGZJAVLSGVINJLEDKGHMRAMEYLSVDXSGNWCOEBMMQHUVGGCUXLTZTUPZKFCOOTDDRVENSJWDBWRKJLSSLEADHOOIIXIRJKSUCQWAX");
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
    msg.setTimeStamp(0.2146126554667821);
    msg.setSource(13040U);
    msg.setSourceEntity(138U);
    msg.setDestination(30930U);
    msg.setDestinationEntity(12U);
    msg.localname.assign("UHLPVDWCPGDRBJVYALGRLJNUGJOVSQDYBIHOIFDVSTFZSPWTFXIZFJAGMPFCUNWRZDASEXXLXGTDKNNFJHORYOOYOKETVYORQTJRYLWBNKDRATJIHMSWUBVDLFFXCZAQJCATAXGPOGBQBVLYQTMVM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SANNYVLPOHIUJDUIPOFOWJURDMSOVGUDYQLEWWVMHXRMWCESCZOYRKZXIRZYIWEZGMNLOCGGMOOEEVXTTNKCWHLDKKRUCUNXJWSHUXGVBAQUTFYRNVQVFSHUDAAASLIEBFKAMCNPMJYFJGZRZKBFHTTPCWXFBPAIXSSEQCMRBOQZBICDQWMIVTGCFZXKBQTDTJRGYDIKOPQNGQEIST");
    tmp_msg_0.sys_type = 131U;
    tmp_msg_0.owner = 45960U;
    tmp_msg_0.lat = 0.8758858983841518;
    tmp_msg_0.lon = 0.616922443826587;
    tmp_msg_0.height = 0.05425973555421404;
    tmp_msg_0.services.assign("EOVZBEXWYJVJLZASGCQRLJMHOVWUOKCOTFLNXKADGUBWCSZLSTDAEBIYTWWDMXCFUVIUQWBGVRVHEKBABATMDFHYCXFFEJWYVJSKJOXFPIQMIIMHFSPVRUXOLHMVHLPMFSENANGSCJYRWQRQITHAREQSDMKRXDZKDAGYUDZEQCEGENAGQUGTFCTPBJKIDPRBOHU");
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
    msg.setTimeStamp(0.7741473771458178);
    msg.setSource(14894U);
    msg.setSourceEntity(94U);
    msg.setDestination(22697U);
    msg.setDestinationEntity(179U);
    msg.localname.assign("CXEGVIHPNOJMBOTISBHJOSIRJSRAEVKVPPLZVJVAHJGLZNXEZRACUQTWOFYBYKLFBRBUYZQPWKHMTTCHHYPZHNGDONVPLTAVGSAKSBDPIKXQYXQGWCLQFMGFGRALZSCBYBZBXRNLUQPX");

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
    msg.setTimeStamp(0.7729159367996259);
    msg.setSource(42320U);
    msg.setSourceEntity(49U);
    msg.setDestination(5642U);
    msg.setDestinationEntity(97U);
    msg.localname.assign("TWHCLMDHJMOLMAOVVQEWJTSCKUXPCQTLZTJCJNHHVOYPXXJCMFQEBKBKARJHYPTHACTDAISJLLNBVPISGEMXVLFOIOGQ");

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
    msg.setTimeStamp(0.0878753271660605);
    msg.setSource(8497U);
    msg.setSourceEntity(177U);
    msg.setDestination(56697U);
    msg.setDestinationEntity(119U);
    msg.timeline.assign("BEIDGWQRBUUPUOGOYKORSQGKWAXRQNPVJZCFUYFVUFZBFZFFTSHTG");
    msg.predicate.assign("FFJIQOWCFIQUTGYTQDROEV");
    msg.attributes.assign("IWQORGDFWKIXNECKYWUABEQNNIYPURLYOOFCJNRQMLNDDLLGYSRBTJSXFUPDANUEJGDZMFXZKIMPSBCJDKFQYCUIXRXHMOGCJWALGSZESSMJBMKIPGCFTVHWTRWSSZIECPQTDHJV");

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
    msg.setTimeStamp(0.989221108120619);
    msg.setSource(40527U);
    msg.setSourceEntity(14U);
    msg.setDestination(43922U);
    msg.setDestinationEntity(235U);
    msg.timeline.assign("KRNDFIXNUORYEVGTXCYYDCVOYTCZALAMVJMIXFPFABYVTGUEPHZICFPDRMSYHZSMGFXVGWQQCOIQUMARJGUIPIFEWLKJXASOWKKLOZKBMKSNEDWLWZNXLYOVFKUOFBFGSZJKDCXDYTILQNAUCVIBJXVWMSBRQOJKTTRRGSUHHKAPDAETPHHRGWTVICHYZQHRHCLRLJVBUZTSPNBOMSQTQMBFQWWMUAUODNJXEPXHAZEJNQEWGYDPDE");
    msg.predicate.assign("INQMLEQVUBBOKKAWKJGEZJJSAGNEQZQPOBWIEPDDECCIKTWPDRZFNWUNNFQLCXVZSXYYYXHCPFKSZHGLPSWMKMIZVAOUXXOYJORPAHBWYKODMXDCTLOULZVILGRNIHATXRTBDCAZTTPAPHDCGLVMJMWJSYKNGKLPPGTQIQOQWFYTISERRDMBHEJYSCZDFAUVUYLEOFCAVICOSSQGGSRWNBVEHEVTUWQZKYUMMXJ");
    msg.attributes.assign("UCVGPCBHFCMHNLAGXYJYIWQSTNYIJBRYRDNIMIRHFRJCCIMXSWUSENNFABZQTAOVCPZXBFMDQYKTQROFOYTZFPVUWTFLJDQJWMHJKNQTJHCFEESHAASHGRZVMWCKKWGUPLPGBXZMJTKDOAUERGOKDFQSPXNNDQEZMYJUHABPKANVIRLCVKVYBZYEDXPTSZOKCXWLBKDQFMTOEJULTQDGXWZWDPIV");

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
    msg.setTimeStamp(0.9738866622037728);
    msg.setSource(2332U);
    msg.setSourceEntity(110U);
    msg.setDestination(32006U);
    msg.setDestinationEntity(241U);
    msg.timeline.assign("KQLNEBLSBCVJRVIVULXQHSHIFIWBIHJFBZENYDDY");
    msg.predicate.assign("IUKAEMHATQQSLOQKHTYDSDIDQCSYPLXHHRDPJRBCPVFNHGLAAQNRFEELHVTXNPOLGZYKOGJJTZKWIAUJSOMSBWEUJJQXMLWDWFTCUPKISBUIGNZYMMTXYBZBFAGWKSPNYHXJVVDFLZIJUYBZQQRBVWOGHZAWQCBZAVRXRKEWDCUODLJDPXIXYOUGCWZUHKMBM");
    msg.attributes.assign("XEUKGJXBWASLDYFLETPZTQXELAADHWOYBSOUKZXJQBMSHHQDMJLUNYEDEKUQNTONTQUZZGHMIXEVVOSLTYFHMKICCWGDFHBCHGFNCOAWNNFVTRYOTPSDRBQXZMUKEGOAICPGPADFRJWNBPTITXKZGLVQRKBIXYJEVAUQLSIRWPGZCXWJBWLGLMAJDYQVYIRYFNINMSHVHJJVSWLRCBKCXV");

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
    msg.setTimeStamp(0.2572018401953102);
    msg.setSource(59382U);
    msg.setSourceEntity(231U);
    msg.setDestination(11536U);
    msg.setDestinationEntity(36U);
    msg.command = 210U;
    msg.goal_id.assign("VMICMXNPVCTJBFQOWFHOXTZWUUHOHIIGLKEWAMERGNXFFNTZNCWZEGBPZWHSQJBMSNKQPOCXZYLKKKIAUAEQDAIYAQPLADBPGBWRXLNUTLCFXBGCVOIDIYZURSOHPOZUYLRWVDJEDCBOYLSQITCRESERVGMEYZD");
    msg.goal_xml.assign("WGIIPFSJQEKBNHAXBUZDHRJUCSITGMIBWAVYDBEGHJXKDYCEVHSHPQIJRVOPJWJKZKIGTZESBYXMGMLUJNXFOBZJOEFUZXDYNJWKOALDWXXJLNNDRBNCXM");

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
    msg.setTimeStamp(0.26696137149374266);
    msg.setSource(25804U);
    msg.setSourceEntity(73U);
    msg.setDestination(38799U);
    msg.setDestinationEntity(31U);
    msg.command = 48U;
    msg.goal_id.assign("NSFXFCHKTOBHVJGURRHRTVUQWLUYAPVBEZTT");
    msg.goal_xml.assign("TSGJDDMUPVWNFXCUDQKFMJUFPZOZBPHQBJLBAXIXLILAYBDQQASKZH");

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
    msg.setTimeStamp(0.2285753023272702);
    msg.setSource(49480U);
    msg.setSourceEntity(109U);
    msg.setDestination(50347U);
    msg.setDestinationEntity(223U);
    msg.command = 21U;
    msg.goal_id.assign("NZYCLAZSVYLWJYRKDDVAJRMKHUPRAIHETPNZVOMSUMLCOIRHCIUWKDVUSKOWOVFVBNLELXKJDKCEJCPMSSFTEPTAPNEYQWGYWTKAKJCVAECQ");
    msg.goal_xml.assign("VMHXHVBMHWSRPJPHOLLRXMLLXGNFKTCZBALKFTNKZZJQJCDVEINYXJJFPCFDIIRRFNAVXFVWBYPCZHKXWK");

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
    msg.setTimeStamp(0.34994929973459343);
    msg.setSource(7384U);
    msg.setSourceEntity(205U);
    msg.setDestination(57882U);
    msg.setDestinationEntity(124U);
    msg.op = 210U;
    msg.goal_id.assign("GDXHOHTCTRUHQTFMJMLRVERXBAKIRIKKJMYYCNWLPCGAEVNKLHCFURZUNFOGNTSPSEMEURFBVGUSUSKYAEOGULTLNHOELZUXKQWIVWRXZXWAMXZVKAJJZZRMWSZUIHPUVXEBOWZP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FMFAXKDRXBSHBCYPRTKTVSOGFMGKYNWQNPNDF");
    tmp_msg_0.predicate.assign("ZQSRGXCDBREIQLTILQMNSBIQICRBQFWHTGDNJFSBZEXFOLREONLUBVWXDLAEYGZABMJCPONJXFCTTDCQMPMHJYSNSYPGOXFLWKSHJKEMDAVHGUVYABHHMWKVBAEAEVGQPPZNJEKBAVXCHUZVJPVCAOJUUOIWWL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WBPVEUWXJBXUAXOOKDMIOCLJHNKZZGPN");
    tmp_tmp_msg_0_0.attr_type = 117U;
    tmp_tmp_msg_0_0.min.assign("YDVLRHMSLBUOZLSAHVOUMRLLAZDJYNPMEZPJECVMMQWYUSIOWXFEHBDKYV");
    tmp_tmp_msg_0_0.max.assign("FXBZFPTFNMGJAFCONBWJZFHBHTLMTYFNVQPMVBYJJSSUIYFOEUSUKJVAWZZIEDVIUDDROJTAWVWYMAFOMNCHYESNEKCOHJGCPAQZHQAXKGZGHPLBUE");
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
    msg.setTimeStamp(0.6979639250050389);
    msg.setSource(1759U);
    msg.setSourceEntity(131U);
    msg.setDestination(57170U);
    msg.setDestinationEntity(231U);
    msg.op = 107U;
    msg.goal_id.assign("WWLMAFJEEHLRVDSLXQCQOLUUOCUNPCDRSHCVVIXBKMBYWUIVPHWUIYMGFFEXAMEDXCYGIKLIRRVSIKJKHKNVFHKFPCHSWNOYDYZGSSHDANNPUQIBYGZVRELCBZZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OYOVCYSFXQGVAVACUNAZPEPWRXHPGVDHHQWFAWNSKFZVBOLONIMQETCUNHNDQIBHSXOZLDJUGBYAITZABYFFMIIYTCHTDEKIKJAGBYKMZBDQLIZTGOLJALKBNXNWJHUPRJMZEDIXJARQERFJQILLQORBMROEWKZUPYVOXESTUSCWNQTSWERUSAPLHBRZDKJUEDMVXHN");
    tmp_msg_0.predicate.assign("BUHZCUMECRGVWXBCMLTTZKVYEJXEZCLAFFGOALXKMLOVZIWMUDTFIOTVHPCJIJGFSESBXFUVXEHIOPWYEIHLPBXXIHKANAIWQVMGXPTKHLORDNFWSUEZADKCPGRDZFRGQDVYWFZIERDTQZW");
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
    msg.setTimeStamp(0.5980479049221392);
    msg.setSource(16928U);
    msg.setSourceEntity(61U);
    msg.setDestination(43494U);
    msg.setDestinationEntity(242U);
    msg.op = 196U;
    msg.goal_id.assign("GZLLJOJTXBNRCIKXSEFIJQHTDXTYSMUSUQSWRFHYPEWRHZPWDOCPEIZQUFOQNIZPTKTHHBAFTWKAVKOOQOFHIKEKQYZGMWJBAVCSDDXBYGCWBWMYYHVYQRZNSEYXCNGVNTPWJLZCOTIZDDMBGJUMKTZWEAGMBENGXJVMUSXAYVKFUNUYICPTAVLOVOCLKBLDIR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SHRLPKKRQRJGXZJCQTRMCOEPUQOBXIVJAKFYBDCEJXSPEKPJQNBJWNSVUYFNTFNBHHPMDVOZEIKDRUZWLBFKTAG");
    tmp_msg_0.predicate.assign("UDSYJRSMVZURNQVAXJWDLFQEXKOPJIWGXNMKWKVHTXCCXENYFURCMPSQSNTFVQBLCZVKBZYBOBCMGALOTXZEYQILHBDSGGQEIRILTAOKZUZPVTKPNZZTVRROKMISMDKCARVFONMRYGAWXGLUJUCBHYJEQUPCNDAYDOFPINFSSMDXEYWPTFGBIKOLAIUHHOGIDFTXXUMDTRBBEWP");
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
    msg.setTimeStamp(0.7227348695933716);
    msg.setSource(32982U);
    msg.setSourceEntity(71U);
    msg.setDestination(24485U);
    msg.setDestinationEntity(227U);
    msg.name.assign("VOTWMKAKNBYZIJPMXLNMFEPZSLCFHJHBUCSHPKAGZODZZUXWUFJEWUSTPQIYIBZWWMCMHAEQNBZDYTARHXCXEOIQRDNKGEUGKVNYLSTTGMYQRKADGEDCRQXJOMSHXKMUELBJJXHPIDCCQOVBGAMLNRYLFTQTXLEYSVMAASHGKXCOPBZVKPORLVIAYWRWUVVIJCASHJTWGFDQRORWKXBSUD");
    msg.attr_type = 253U;
    msg.min.assign("VGQTFGWRYKFSOPLEUITVKPGIGTWRJRITBLOQSMVKFGUQZKTMJLBARNMWVKMIXZDXPYJAVXYRJIXLDOAHCBAQEEZVYWUHHNRBUBTMOEYNISUNYVEVYMCVEDYCWK");
    msg.max.assign("NTVUXEEIINGWDDTQXRNWPNUTXZOKLWCBZPPWMGPGUYCLLTRWCZZVDDUYJHYIFBRDFHWVRGLIBPLJNAXDOVHTLGFSCRKEZTJSXSEOMSOJQGBRXUCWMYLH");

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
    msg.setTimeStamp(0.2854533437226674);
    msg.setSource(18226U);
    msg.setSourceEntity(97U);
    msg.setDestination(61256U);
    msg.setDestinationEntity(52U);
    msg.name.assign("GFDNFSWAARSWSWBLQUXTJJXHGHEYTSUHBAPPSUCBI");
    msg.attr_type = 242U;
    msg.min.assign("YTENHRHPUSAGWBGLPQHRKDRISZYIUYISEKPQYJDULYZZSBJBTXJVMKWXJFMSDIYODMHADFIMNXKTQ");
    msg.max.assign("VITQHRXCHPGXRXZAEHWYJALTNVLRDLKWSYOGNIADCEWOCAJTBMPHBYSJYPFNSGKBXOIEYTVKRLTLAPQUKWBKNGUOPLURANIVNSHQNZHPPFXCQDZVIAEEIRBUMBHLHPUKSJGIOBDXTLFPQNKSTSVVRAEJCRFMQVKQFDU");

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
    msg.setTimeStamp(0.07631650495210862);
    msg.setSource(14762U);
    msg.setSourceEntity(57U);
    msg.setDestination(50245U);
    msg.setDestinationEntity(131U);
    msg.name.assign("XGIQRDBQZUJYVHWWZGHEKIMNLFYRQJXDQGZEDGOSETUQJXDBVRKFOIATZFNLWOMXGTLNVAHMNTUUEFDEZKMPJGCZKMLRBAYVVZGJYFFCKCJISHQRCIWLELBCNBETRHMUMBIJFKJLEVTTAYADSJGEBTONXTNSOCOGFCUP");
    msg.attr_type = 152U;
    msg.min.assign("RYWAWLGIHCWUFOKIGNZUIQANHZHFHDMVGNFKMVPPOJANZTCHEEAAKZPGCPYLBSETXDDZMNFDLCDEHQLPQJPIPZBYBNQYXBVKCIMEJYRTSUARSDXFAMVPYPHAVOWFJLOYLSWLNAVQIOCJPCVZFTRJILEREDMWQCKHDGKRRXJUZI");
    msg.max.assign("GHEOZWVMNITZIS");

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
    msg.setTimeStamp(0.8018154578262905);
    msg.setSource(29656U);
    msg.setSourceEntity(228U);
    msg.setDestination(28475U);
    msg.setDestinationEntity(111U);
    msg.timeline.assign("KTLOQLOEJQZUJUWNFSYHZNAUBIROVMLCCNVLBFXVPVQMNFAGCXIJCDEJHHBGQEGVMPPMIJFZVRDJHHAWYONZWINFYUWDPYKMPNVTMWFRLMVXACBKKSBJLCLULGJORXXHPVHRUDDEDFSPKTTKAPLURZXSWUFNBHMBYNSOSQSLNKWAQGQMTZRAKUIIAUKRIKWTICVYOGOQCETWJSAPRFXAWOCCOGEDDMDHBFYYX");
    msg.predicate.assign("PKFFBQKELUYXIPBWEGNTEEIZUNTARKJAJOPWEBUMDIUCFYYGNYTZQONIHCZZRIJBXHMIK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XSHQEKDAIGGGNAOPQKSHDRAFFYYWCAXWLOUPSTZEIHSILVMJTCUOIDNWZDQGFKCUMOZPXTTZXIATJJPQNKYQWFHNWHVQOQJALEPJJRNIWMBFLPOSNDVEPVHHUWJNBWVHRJYNDFCGYMKPDVFUUCMUVFDZSBPKIYEFEARLKDOIZHGJZRICUSTLCLZBPICMBASO");
    tmp_msg_0.attr_type = 39U;
    tmp_msg_0.min.assign("CBRZCUZAGCSXJWKVMNKTBNXWNEEMHCOQLLASNGUIQYAFOWAVDHZMVIBZBKQQPBKBEIZMDJQOIHXCPFLHHYZNPFSVVXCYTJTJNWALRBOETLJORSTQWPONICGHWIYKWXMFMHUUSWKHGFBLTSVVDCCNMUAQXFORDRRAYPERK");
    tmp_msg_0.max.assign("UQTGSULELPDLZBBLFBEHSYYRBQWKJXUGXSGQHVTCFRDSRBBKOWOZDFDANNUTZLGZWAYIQPMEECWVKSRTOOGEJSRL");
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
    msg.setTimeStamp(0.7282146024934911);
    msg.setSource(32172U);
    msg.setSourceEntity(5U);
    msg.setDestination(40048U);
    msg.setDestinationEntity(234U);
    msg.timeline.assign("TXBRWJJFVZRNQTZSXEQDQFJJGXJLRKBDHJFIFEKCLWDSOIKPGMMLKCBXZSZMFWSEKWPYWBZBNZIUSQQUCUPEXPONHMGSAYYQYSJGYDHRTFLSFDCCOUPZCATOYLDNLDWGHTTBWCXHLKMVZAFZMJFVBQGQGIYDWCVPRHEOQNNUYXJMXRVATFDMRWZEUNGAUMQXIBURJIUIHONEHONYKVLOVARICYKKRPGIIMWVSGPNAALAOXAPBSCV");
    msg.predicate.assign("WSLLWMBRYJXIITPVDVMJVLWZFEWQUGMVCYLQAZGEDCUJUUKUWKVRCSVTUKLHAJBOGNVIEAMWRUXJHYEHNHXPFQIMAYYXWRFQRFWEPHPTDZXJFDBFXAGSJJMYDHCORNTKSCKUYA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MHENCUBJKGSGHASIIAZNYTUKHNGKXEFFAXMKXZSIMURHVDJVBWDOZPUWOVYKTBIEYMPHQWLUELJVIOJBSCTXRLSOLQRTSLJRNPUHKJEPWIEFMWQXYVTZJJCROPZPEDNRGFDVLPDFGIHZGMPQJDNCEMURADGDDVBQNKLVMXOCCOBSPTFWCDMXGYUNY");
    tmp_msg_0.attr_type = 96U;
    tmp_msg_0.min.assign("MTZOBMLQMODETYDDXASEUWWLXIGKIRVYNDUPMKUYUZOAVHIBZRJEVTRMYSBLHAUJGTFMEHQOGSKKCTZLRJMFICVFXEXNXHXBTWNJMDKGOVVBFMNEKPWYUOYZLKWFOEQJWODLQTKYIGYOWPBHHPPSJAJFRSRHSQZVBIKKXARZQOSA");
    tmp_msg_0.max.assign("LCVRKABRFZCLZSDFTBAYRITWVJOYLMVDHUFOZYYOZWMLEKHSIRBNQJIGESWZTSAWOYCZSAUMFBGNYANSUKJMJMKENNHGUKDPSHOUQVPLRWTTDWHOWITPINZLJGBKEYMGHKBWYBGRXKSHUNXVBQAUQQRZNJFLFXXJVQGTIOHFUFXCPDERGODZPXHIPLSTPGEYLAQECVAJMIJOLVDQFNUZQDMEWXEMQXXXORVCNEASTYCPVARMCPHKJ");
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
    msg.setTimeStamp(0.3540227712043795);
    msg.setSource(4060U);
    msg.setSourceEntity(150U);
    msg.setDestination(48107U);
    msg.setDestinationEntity(8U);
    msg.timeline.assign("YROXIHLBAJEFODIRKDISPQTTAHUZUZYSMLBWPIJHDHZDLCULNKICNWAWUNFGXVFHKMVECIEHKJEFCGCXOTHCUOJSHXLAXNARWNMPGOHYNMJVVUNBXFCQBTZIPEWYVPRFPVEKDBLWSQO");
    msg.predicate.assign("BXSOLIEXIYRLBKCUKNRVYDRZFVKPIBKUFJPYBXJBWQTMCRIJDNZOYNCDZLWZSQNHFLXUANTJAIJRWMCYXBSIATNGNSVWMAPCUHDEGCQOLNYGGASDYHEUVTWWSOQYTSZVOLTSAPAOZAKIXBJIHDKMMGQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GAECIBNTORKDUYTOZKTSNJXQMMKQWNXGHRTKAFBCTWYWSLGSCVFGHRQDFPZ");
    tmp_msg_0.attr_type = 236U;
    tmp_msg_0.min.assign("VLFMTSBIURROPBRHKMIISALIAKBSBSKFAQMQUQOPSZGYZHTJQQPHVTZYHAMSCVEXZULDDFLNPILTYGMILFFKFWLEBSSLTXOAPFNOLYVQUGYMGMYVUNUEQCHMHXDVHQCGXXSKJZCURJCOWDBKBORMNDNAIUAOATBEIPZJCNVJWZFETJEWKKVYIUAQZSXRRDDHNYGHYGZCCXRWMRLQCTGGHDNJKXPYCTWPBJOXEWJFJONWRNVEEADUT");
    tmp_msg_0.max.assign("KQWYQLZTTAVJHORBCPRQTHRJCJYDDEQDCADBFXNZMVOVWOWPJIJ");
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
    msg.setTimeStamp(0.16577623136116393);
    msg.setSource(17834U);
    msg.setSourceEntity(199U);
    msg.setDestination(20783U);
    msg.setDestinationEntity(141U);
    msg.reactor.assign("YFSHKIIRUBMRZVGEAYANYZMXFLFZDXPLPGHLEDVMMQVMHJTAEFSNBLMJRRQLAUOMFXHCOTWDWSWQSGNSXBIKATDVZAYUTIVVMWSOXYZBSYDHAZBKPOLGZJQKUVPKMWSNCCWVTOXOHFDAGTDKUHRQGLOUEYGLREDQHPHOGXPYTQNIJHKUGKRBBVPNRFQECXWP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HKZNTLGCREMRBFHJKHIYCVHKGQJBYKUCJJGEQOSMKXIINUMRMRXIWQQAALFJHWSRWWSNPDCBZVEXTYKDAGTGXOSLMADEAHBFCILG");
    tmp_msg_0.predicate.assign("OBKMQAVPBPYXPOSFDGEEMNIUAQANPTKNNQEZWTDJUFYISYRDJZGLTCRGCTAJOTXQITJXCNFIALUVOEOLQBKFNMEQWELAMVOZKYSGAWVFJPTAISIKMHARMCHBANCDVHPHJEIUDGWUPSXYWHTHCDKBIGRSVDPPLOWJH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ALDRQPGPTSHMYFGLGLVYHASKFAKFSVCTONKHCTORCDAUXAXEIMKPJSARZVOIKBPGBHICQGTMKXSIJMQZCNLYRJGWSWFSFJBABYNKLFEWVWAXYTNYEXJEOBJKRNZWOKDGXZYDMLRABWDCQTLUEJUXPUBJBTSQULRCQQOCCKUEWXOTLQFNEUILSFIEOPB");
    tmp_tmp_msg_0_0.attr_type = 95U;
    tmp_tmp_msg_0_0.min.assign("HOVWHGENUJQKGTBREXHHLSTKZJEOMGSPHCZUKPRFLVUJSIUUKQDMQDFVYTCRXMVDCNANGUBBMGOCLZVEZRJJJINTYIUFNYTFGKZGYBKPVOIMJPWMLOAPBUXKWAYBBMLSJASTOUCZFZNEFRAXYNBSMLXLLDWZKECKDOQIREZTDXVAUTIYYEVFYGAFRCMKMEQHIXSWAXDPARLDXZPC");
    tmp_tmp_msg_0_0.max.assign("EHRVFIWMXB");
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
    msg.setTimeStamp(0.6838465261396716);
    msg.setSource(2638U);
    msg.setSourceEntity(18U);
    msg.setDestination(47817U);
    msg.setDestinationEntity(6U);
    msg.reactor.assign("NAFUWPAKKEYPTQDGDKSSXBWMMFABKDRVCHBFIELPXXM");

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
    msg.setTimeStamp(0.7897060806853593);
    msg.setSource(36658U);
    msg.setSourceEntity(77U);
    msg.setDestination(24432U);
    msg.setDestinationEntity(187U);
    msg.reactor.assign("UUIEPUDGHXSWOOEUWGOKIIOXALEXZPQJWIQXAAEGZAGMZERSOZEYSSKYOYSDNEFTLFNXKCQDXRFTGHZNDOSIQCVAAKYJERQTGORQCGMUHMKCWPSBEAOHLEMBFWWADDWJDZNMFSNVFTIPALMBRVZCFQTVGCYUNWBKRYPZJQUNHYDWFJKPMSVYGRDWLQIHIORVAXBTNXBMDGVIRL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DGSMMWUYEIFIYSUWDAVJJKJHIOONWDQPVAOOZRLEEMQLRFNCXJDTYCBQEIMNLNZHGRKCMHCANMMT");
    tmp_msg_0.predicate.assign("JZRRKELJGPVZQUTGRXQJLPBLCNUMGZYFUYMTR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XCMNVSNCKPTXMMIPYESAQAPFHVQUVRMFSSOBCDOMWIDQMUPMJGSKIXTQLTLYDOBTPCEILZDUZWWLWUCIKBNVKKMPVRFXSNWSXYVQYWDZUCJTRCOQEIZXWWDUEPEJHFAYGJHZRQKVLNFRBYGLWUGKTSMMHEGSORGGHSZTAJLJIQGABQZPXYXV");
    tmp_tmp_msg_0_0.attr_type = 78U;
    tmp_tmp_msg_0_0.min.assign("YGHSJNEMAXUGZSGBDBVNISONWPPDWGXIWDMORBTDWCKHLDOSJFKTLDSHPCEYTQWHKRZQ");
    tmp_tmp_msg_0_0.max.assign("HNXWKBGXTBNIIPPWVS");
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
    msg.setTimeStamp(0.06870957852725468);
    msg.setSource(62060U);
    msg.setSourceEntity(49U);
    msg.setDestination(788U);
    msg.setDestinationEntity(239U);
    msg.topic.assign("KJHLUQBZPJUISXRPAVQUICFFYVUXKDFTRRNHQBXYSDYTUMRLCZYPWPCCBLAOTDMGGLHTZAGQSMUNEOMYOFGRLCNQAXKKLBCJNTMPZOCTKRPJIHMJJNBQYWVVZDCLXPBVEBUNCRTEVYISUOMMIGGVSPSZBKYAQZFNOFHOTEELZIFOBEVSKHXWFAPNZNSDDHKJBODQHXFJEYNAWRKXLQXVCHZWUJDHWATXAGKEORQTUEIIWFLMWDSYAIWGS");
    msg.data.assign("RLNXOFOTRSRPYAQPJDWVDCKXSHYUMGVQYEZYD");

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
    msg.setTimeStamp(0.4520865152195027);
    msg.setSource(58096U);
    msg.setSourceEntity(144U);
    msg.setDestination(2447U);
    msg.setDestinationEntity(121U);
    msg.topic.assign("LARXHRMWFDBJTYIKKPQSUIDNTAQWTTMSCIKCZAXQERGLOPJGSLFTRJPWPAOOFTXZTSRULFILZYVCBHTWPDRDVXFZIELXBNENVEGFZYJBQUZYVAFPMRKMHVJZCZAICSOUSUFLQMKONDGCXOFYYDBNPABBN");
    msg.data.assign("UGBWSXREADTXZRJBWOPCDUNEJGSUHNJJYMBSNZLMHXNCASPLJTNGAISYYQKJALVGWS");

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
    msg.setTimeStamp(0.08833028820652089);
    msg.setSource(36245U);
    msg.setSourceEntity(160U);
    msg.setDestination(30708U);
    msg.setDestinationEntity(63U);
    msg.topic.assign("LJIXNVBRWLMZFDWJPOWCNNIWJHEQWPPCRAHYYTMFHIFMRXGSALYFZHCIVSMAMQAQAZTAYXPDOMVHQI");
    msg.data.assign("FBZNOKWLMLGQJVVWBCMJXRJRLFPMSDBJPKVYDVVQEOWCBSEZCMLUTACUAMJWZGXQOLWPWIPBKBMUACGEYCSRLCISDTTEKOYYXPAQMXPHYNRGHRHSKJSGPZIJSAVZA");

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
    msg.setTimeStamp(0.9375235837993892);
    msg.setSource(3412U);
    msg.setSourceEntity(1U);
    msg.setDestination(37590U);
    msg.setDestinationEntity(227U);
    msg.frameid = 189U;
    const signed char tmp_msg_0[] = {73, 30, 96, 21, -10, -126, -98, 96, 98, -91, -69, -16, 82, 111, 23, -36, -115, -56, 65, 17, 108, 103, -35, -14, 110, 42, 117, -46, 109, 1, -9, -22, -66, -37, -72, 4, -21, -104, 40, 69, 115, 117, 30, -75, -49, -20, 1, 91, -53, 69, -51, 97, -48, -109, 30, 14, 33, 56, 114, 41, -10, -100, 57, 40, 106, 87, -44, -95, -35, -5, 66, 109, -63, 24, -92, 9, 30, -81, -13, 91, 10, -5, -38, 26, -104, -65, -45, 124, 102, 108, 64, -62, -96, -88, -39, 5, 84, -124, -97, 41, 92, -59, -128, -46, -39, -61, 98, 102, 116, -67, 60, 94, -36, 115, -94, -31, -10, -114, -6, 84, 62, 37, -57, 35, -16, -32, 90, -60, -105, -6, 112, 58, -117, 33, -111, 88, 92, 116, -60, 51, -111, -110, -3, -37, -12, -36, 79, -121, 20, -24, -76, -111, -29, -52, 59, -8, -39, 88, 56, -45, 18, 124, 16};
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
    msg.setTimeStamp(0.8109343026369188);
    msg.setSource(6430U);
    msg.setSourceEntity(55U);
    msg.setDestination(7302U);
    msg.setDestinationEntity(177U);
    msg.frameid = 151U;
    const signed char tmp_msg_0[] = {34, -72, 11, 122, 91, 52, -25, 73, -7, -19, 115, 38, -116, 112, -87, -54, 104, 82, -80, -30, -80, -126, 40, -73, -113, 116, 28, 4, -83, 67, 11, 53, -62, -125, -22};
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
    msg.setTimeStamp(0.4759897412440539);
    msg.setSource(16491U);
    msg.setSourceEntity(169U);
    msg.setDestination(6545U);
    msg.setDestinationEntity(140U);
    msg.frameid = 225U;
    const signed char tmp_msg_0[] = {-41, 80, 42, -102, -117, -41, 124, 15, -24, -77, -40, 79, 87, -28, -3, -45, 124, -114, 60, 33, -89, 42, 12, -41, -52, -87, -11, -81, -5, -27, 23, -25, 54, 75, -107, -125, 100, 87, 38, -48, 72, 47, 116, -19, 19, 67, 64, 95, -8, -23, -75, -11, -107, -86, -34, 12, -91, -93, -2, -43, -86, 9, -77, 47, 109, -36, -118, 36, -72, -18, -71, 100, -94, 52, 70, -11, -113, 73, -46, 58, -91, -59, -104, -2, 76, 19, 11, 111, 20, -14, 94, -86, -121, -113, 101, -83, -57, -110, 46, 16, -65, -102, 88, 3, 15, -75, 38, 124, 118, 22, -88, 86, -23, -43, -53, 82, -8, 53, -128, -1, -12, 1, 0, 53, 60, 77, -121, -127, -69, -125, -43, -36, -65, -55, 59, 32, -111, -96, 72, 121, 97, -71, 92, -44, 75, -46, -114, -24, -76, -87, 84, 86, -85, -59, 119, 72, 124, 107, -92, -61, 25, 74, -25, -82, 2, -122, 87, -68, -98, 19, 11, 101, -83, -91, 69, 27, 32, -1, -113, -74, 73, -64, 11, -107, -26, 113, 65, -14, 14, 40, -22, -113, -35, 60, -21, -29, 86, 38, -98, -116, 30, -64, 14, 32, 1, -40, -17, -44, -29, 70, -29, -108, -111, 16, -42, 121, 64, 67, -11, -8, 26, -113, -77, 83, -72, -85, -1, -101, 35, -108};
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
    msg.setTimeStamp(0.6757293958380839);
    msg.setSource(1286U);
    msg.setSourceEntity(114U);
    msg.setDestination(54640U);
    msg.setDestinationEntity(36U);
    msg.fps = 2U;
    msg.quality = 149U;
    msg.reps = 11U;
    msg.tsize = 133U;

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
    msg.setTimeStamp(0.7049277977149331);
    msg.setSource(32304U);
    msg.setSourceEntity(41U);
    msg.setDestination(22849U);
    msg.setDestinationEntity(52U);
    msg.fps = 81U;
    msg.quality = 247U;
    msg.reps = 60U;
    msg.tsize = 187U;

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
    msg.setTimeStamp(0.6495770076116383);
    msg.setSource(38797U);
    msg.setSourceEntity(58U);
    msg.setDestination(59316U);
    msg.setDestinationEntity(206U);
    msg.fps = 117U;
    msg.quality = 170U;
    msg.reps = 19U;
    msg.tsize = 235U;

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
    msg.setTimeStamp(0.2521572765452592);
    msg.setSource(6923U);
    msg.setSourceEntity(127U);
    msg.setDestination(44099U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.03465050747553511;
    msg.lon = 0.10936363140269934;
    msg.depth = 228U;
    msg.speed = 0.023858100434257068;
    msg.psi = 0.9783295910843375;

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
    msg.setTimeStamp(0.7916612216959958);
    msg.setSource(3344U);
    msg.setSourceEntity(84U);
    msg.setDestination(49807U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.7843779135841258;
    msg.lon = 0.8809186113847636;
    msg.depth = 134U;
    msg.speed = 0.7148478534675555;
    msg.psi = 0.40581444768471064;

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
    msg.setTimeStamp(0.432609579169807);
    msg.setSource(47842U);
    msg.setSourceEntity(198U);
    msg.setDestination(44426U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.011698593907172095;
    msg.lon = 0.5495797990750145;
    msg.depth = 111U;
    msg.speed = 0.8937073716394565;
    msg.psi = 0.4333525947987189;

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
    msg.setTimeStamp(0.024143265420292326);
    msg.setSource(13649U);
    msg.setSourceEntity(29U);
    msg.setDestination(30852U);
    msg.setDestinationEntity(26U);
    msg.label.assign("CJDRLZIPWHZXWLQIROEJCPJFCLXCET");
    msg.lat = 0.25792184434435794;
    msg.lon = 0.13493533045868655;
    msg.z = 0.042089965410266106;
    msg.z_units = 222U;
    msg.cog = 0.7814832378985064;
    msg.sog = 0.7735313137187322;

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
    msg.setTimeStamp(0.5098896297074875);
    msg.setSource(23732U);
    msg.setSourceEntity(60U);
    msg.setDestination(24143U);
    msg.setDestinationEntity(182U);
    msg.label.assign("OHIFGWBZFIKVPDPITNEVEQAKFPVVSVLMPJWDRHYXZXTPKWUWCTYKIFBDAEKUIRKMENSVXSC");
    msg.lat = 0.7623818901990921;
    msg.lon = 0.907108700135725;
    msg.z = 0.3999057118937187;
    msg.z_units = 90U;
    msg.cog = 0.3902930796708909;
    msg.sog = 0.8133777137296212;

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
    msg.setTimeStamp(0.7931786235633355);
    msg.setSource(58194U);
    msg.setSourceEntity(162U);
    msg.setDestination(42565U);
    msg.setDestinationEntity(163U);
    msg.label.assign("KYAGOBXCSJFJKFPMGKDHFPSXFVENHIAPSVNSQHZMXDJQMHVWWWXGRDUMQOURBXPBXYITGWFCFRPRNMVCANYUKHBYMUGELKIQFRWJLMTNZLGSPTOJCVLBKZUDUSDHAERFIVAOXEHPASUTCUOEYYOZENKQAOEZERXVNVEHZJGIMIHZNVUCGAAIMWZDGRRMBPZKUSABHZCP");
    msg.lat = 0.6181313663963165;
    msg.lon = 0.6397429074192559;
    msg.z = 0.9937797323418327;
    msg.z_units = 145U;
    msg.cog = 0.6849162859648488;
    msg.sog = 0.17265308103306842;

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
    msg.setTimeStamp(0.4917923652345355);
    msg.setSource(1301U);
    msg.setSourceEntity(112U);
    msg.setDestination(54229U);
    msg.setDestinationEntity(210U);
    msg.name.assign("JXSZANVKHRUAFSWJDTFBBQYMPEROWPMDFCNBZPLFEUOZMLTTSTVROGMIEJJEIYNLLQKIEWYDAWXJOHINBGWSMZAQVWTBKXOSJGTEVSOCUQHXDKGNKRUSFUBOXAQYICCCS");
    msg.value.assign("GQYBVHNQLINGRXJYWQMOCEJAQUHHBHRMKLJ");

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
    msg.setTimeStamp(0.11799057307197902);
    msg.setSource(16456U);
    msg.setSourceEntity(217U);
    msg.setDestination(6826U);
    msg.setDestinationEntity(50U);
    msg.name.assign("RCGVLFLZWDCMGPCAFIMNFJJLQYXJXMGKQQIGOJBKYCMZOSULDWKAVKKNBRYRIBIUOZLEBNUWDTXYNNEEMWTHEFSXCTWCTANYJOMUHGHZQNEDZIBVQQRRAHSJBYZAPVSVFBX");
    msg.value.assign("DPKTAYFLNYPXQFCLPJGCBZKFBDZKSJFNEEEXCUBMIKBOCVNGBOJSTWSAITGWOZPATIRDICXJHDTFBYDNWSEQEVUOLSLIKVU");

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
    msg.setTimeStamp(0.6774341486485181);
    msg.setSource(13249U);
    msg.setSourceEntity(170U);
    msg.setDestination(64755U);
    msg.setDestinationEntity(203U);
    msg.name.assign("VFSNSQRUQVUNRCBPIHNOHUHIACDRAFBXKXVTZSVAURDBCEXJBDGAPCXOLIWYJGUQBLGONXTHYCIPLTDSEGRRCZAPZOGIZBZDBBXEMAHGPFICOTAMSTOEKYFKILAPYHTTHYFKNAWVWDMVYMIEQJWTZWMWMQLOYJZBJNPQSRLQJGVRPKUHOTLWYKXJLWYXKSEUHFDFKJFAWPEUQXCMSDEIKDFZVVLGRUXNCEKWCTEJM");
    msg.value.assign("DNJGDNZMROZNLSJJTWBCDKCRVMDYFPNMDMBAEHXZANMOBDEELOZEUIMUVLXOCITPWGOKLFTXQFVZSKANMXPHEZTFULGFGRLUUIISHKQRYRNCRAXKFXGDHSMBLAGVROQPPKETHNCDHLVIQYOINBKUZKQVVPRAJYNSCGHOXOSEKKBFCUVCQPWPHUIHMEVWYWHYPTJIFJ");

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
    msg.setTimeStamp(0.2067428098706905);
    msg.setSource(9823U);
    msg.setSourceEntity(71U);
    msg.setDestination(8086U);
    msg.setDestinationEntity(110U);
    msg.name.assign("AXNKWIJABQVBDRLGNRXQUWDQHOFUNLVOQPOWPTUUWMFCRWBIKRVIDMKJOZXVNCEFXZVAWGQOEAJKPTBUJSCOEGHNCBPZROUTWYSJZXYIHHEODDGHZSMSHPFMCAFDXSXPSOETZFVTABIBINCZFYLPHGTFYSAEZVSLBHKQEUFGMRZPQYICLOAL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EXXSGZORJMVZANCSQWIOKQYEFVLUNEIDIJXYBAFPWFVQKGIUGLXUREFMPSZRNWHNJZBAIOJFKXLAYYHIWBDFKVXRXHIQGCHSOZEQDLEMASACMJZIK");
    tmp_msg_0.value.assign("NUCDIGGPTCTFUJJCEXBPOLWMYHAMRUKWLKBWSRCLIRHKXZSARSZCHXKLOZZQIAQQOASQWEUZHFTEPTBRSBWTMPFAZPFIYHAYLMIPSSGUQEMANXHXHPOVLSWNYBNNQRZVZYVHDXKYVVITOKMRWMEMOAXRJGBFWDZEBCTFJVINGZ");
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
    msg.setTimeStamp(0.7774446629341648);
    msg.setSource(48434U);
    msg.setSourceEntity(153U);
    msg.setDestination(5216U);
    msg.setDestinationEntity(169U);
    msg.name.assign("TMKHBNVRDZENXVZHMSFS");

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
    msg.setTimeStamp(0.6244783417508537);
    msg.setSource(22032U);
    msg.setSourceEntity(73U);
    msg.setDestination(24754U);
    msg.setDestinationEntity(205U);
    msg.name.assign("TGXAPAOMLMTZNTEFEFLNRJZWAUZDTZJNSKKPZMDCNFDRQEUWXVYXGEQGZIESAPKVGUWLFMHMBDQJRRSKUZXPXCPTNVCCVJZHNJROYQYENHXJVKOSDAMLSOEQRJNWUBHENFPDHIZJOYSQAGKIGHVLPKYQDFQNOTCFWBIMPDKYRBIXLQVYKTEBIFCYIRSW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WJWMECEGYTESGQTTUUNWNZIJYPUYAOSDSDGNXKYZFKMFOFMUYCRPKHNSBIROAPVBYSLBXQIZNQPRQQVSCXIUTE");
    tmp_msg_0.value.assign("UTQBQSCVFHCWCAYSFNLYNDXFKPHAEFELXCAABFFSKVMKCWQQOWVERJCAKQZQ");
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
    msg.setTimeStamp(0.926502561407816);
    msg.setSource(23063U);
    msg.setSourceEntity(155U);
    msg.setDestination(8324U);
    msg.setDestinationEntity(175U);
    msg.name.assign("LFQOPALMYCDXEGLDAKISKVDJUSNBXZIMNTBOYAQVQIIVA");
    msg.visibility.assign("TXNOGJWQMPBILFAFKCRLAQROAZTPEFYTOEPNHJUZKCVXENVJMMDLLVDBJMHEHIWDCIHGOLCMAPSDXNEQDTGNRFZJLJOQNLHSUCUTDAYHXDPCUMUMVLGURRJNYNRWTNBQQGZXEGISZVWFGNFQYMOERFUZSSQKTPEIHGOWPVVIYAUMKEZCIKFXWOSPTRUF");
    msg.scope.assign("VJUHMJHPDPNWOGAJVZXUSIRWISBYZSAFXKEUADJMBSJJPZ");

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
    msg.setTimeStamp(0.21671095770248072);
    msg.setSource(58336U);
    msg.setSourceEntity(159U);
    msg.setDestination(16808U);
    msg.setDestinationEntity(244U);
    msg.name.assign("ATTAQQNUZBPRMELPKYYUBAASGEXMKMNZNPXFHLQSYBFWJWYBPSDLNAQWCFWOVV");
    msg.visibility.assign("GTOSIBOBMAOAIZLYXPJATDTELKFMUGHTQXDCXGQUQCROFUINS");
    msg.scope.assign("PYFKGARJYRLFVOFNOVIZDUZRNTQEXUEHKHUDCZVBASLOTWARPZXPIEHLZCUPGCKEIEEMYFPQOQHTAHPHDSGHWBRSKAHJYPLKTOURVMQDLGHRGJSRDSQTMNVFLJFTUCVXWUYOMVYEABWUZJKNTVBSQFSNXUNJTFADVFCSJZBMWBQWHEUKCCNCXDAIMQPZJGYKIIITNJ");

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
    msg.setTimeStamp(0.597345729390445);
    msg.setSource(41058U);
    msg.setSourceEntity(235U);
    msg.setDestination(55319U);
    msg.setDestinationEntity(103U);
    msg.name.assign("JAJEBCKKACYNWQVYLYSFNKACGMUEWXSTXAUMGHCKVWHHLNRTTQXXFJOLMQRZVXIYLERDFTTSMFXVQXQITVYKMQJODQPKSVOGPHSRAAMGJCMRDFUFALLNEYJNDZOVWZUHSJMFHLBCPSVACBHOUWOPDDWREZNIG");
    msg.visibility.assign("BNTJRKWSQWOTDRTYXNLCBWQHAOMYRHXFGNMDJ");
    msg.scope.assign("OPYVJNVGVMNWKXBJBXGWTCRQCHUXDKITURSHQRLPAOUVNCOYSLOSZGQFJRAKAPPNUQREWRPLFLTWMGXYDNTZHYCZGLDQFCIYAAWURKQKSHMNLOHDFZIEPKEMKDEJZCNVXBBSPFOTUWZDPRBUXQMCGJETHWJNBBJILRRQYZNMNFAUKHGXZOGYPVTKXITFVYSLIDDBEVODEUJXMEQMAVAJOWHYAYSDIPSLBHXMWTAHZMVT");

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
    msg.setTimeStamp(0.2794811430196451);
    msg.setSource(42775U);
    msg.setSourceEntity(195U);
    msg.setDestination(30777U);
    msg.setDestinationEntity(127U);
    msg.name.assign("LUJWBOHUIKHEREQOMGEYFMIAPDVGWIANKPRBAUZGWXXZXKC");

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
    msg.setTimeStamp(0.4322972486968377);
    msg.setSource(41526U);
    msg.setSourceEntity(158U);
    msg.setDestination(35381U);
    msg.setDestinationEntity(63U);
    msg.name.assign("ZEODYSCKNIFJVBZEPWQRGMLAMHYUVRLHHICKULYNVISFFAAMTYHQPQZYAIYWYNDCTKFMSRPQDBUXCSMQQTNKPOMDJDBAURVLGNZJIGPXGFSTBHKWHRAHWIOFNAWVWNZMFWICEJLKHPCZEPPHCFRFMLKZBVPGJBNOZXZNSBETJUTSXUUGJVXJEGRJKBXCLOLMSXNJHAOVLMIQWACDEYVBDPDGABIRZQQUXETOORETYTQELWWRDXSKVXY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LSDROJIHLNDXFNHAPVQCVGKIRZDUGJNJIIKAQJUBVQVWMFQYRBLVENJUQUSWZCHDBSWXEHTONUKPEKJHAGJTXHGRLHIGSOQTMOFFZLTXEQWKSZKEYOGECUZRYXLWVCJCDBQUPFDKODCYIBTOIFLHA");
    tmp_msg_0.value.assign("GJBPKRPGLSLALYKXQNECBZIJSWFXEOMVLMNVOOUTOWPHCKBVBDKCU");
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
    msg.setTimeStamp(0.7000249937829104);
    msg.setSource(31085U);
    msg.setSourceEntity(79U);
    msg.setDestination(19843U);
    msg.setDestinationEntity(129U);
    msg.name.assign("PGAUIVJXNXQKVZGXBPJAIKUQFLZMTLSYZPTOBUPJJOIYDNDTEPEIYMMMBFNTREHMRNBEGIURRPYJKYVLIFMTJVWYXOQFGJSGSPRRAKPCWDFIQLKDHXCCKPSNOVQZLFGSWWUZBZDCCOZBEUSMCUBFHFKSTDXMULAEJXKZJZRSBWQZBGOWXQNFHECVWVRYEAEDPHJLLYTHCWWGECVMUNOYLRAM");

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
    msg.setTimeStamp(0.21663735420910402);
    msg.setSource(268U);
    msg.setSourceEntity(253U);
    msg.setDestination(20091U);
    msg.setDestinationEntity(78U);
    msg.name.assign("MBWIDCKJBLIAXWERPDURHMXZSQEAUGRQRBLSGJJFBRBGSXYVTLUTSKMTTKAWXAXGSRMNCTNPRXPXOCJNVSFLAUD");

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
    msg.setTimeStamp(0.806534932736552);
    msg.setSource(40942U);
    msg.setSourceEntity(86U);
    msg.setDestination(3959U);
    msg.setDestinationEntity(115U);
    msg.name.assign("SUFZNIHJWNFMEZOXHGAOUKDXBMKGJOJCQMNUVDWRNXQVDFEOVSAWNGUYVDDQIDPXYLKQQIUOKGTTVJJTAJLXMIKHNNMZQJPAGPBCGSVKZXBKJHWSQRLYHBKRIIFWWRBMYORILHHSLUMZWZXNAWCHTGRBSFTPCOCMYUGXWYLGJVASRVAEEQLDFPPPBRAYOYUFXCRZUQDGBAYMZOITCXTCRZI");

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
    msg.setTimeStamp(0.1769366200235708);
    msg.setSource(62703U);
    msg.setSourceEntity(119U);
    msg.setDestination(55497U);
    msg.setDestinationEntity(42U);
    msg.name.assign("QUQLPVGMSZENQHFUFLJCPIHTVIZKZNPITWYBHMVURRZZOONDVTAMAGSYMBVYMWGHCYAKLXTQAORCKEEPWGDABIXPPUXTTPXIGIWHXZYCSODKLADZCHUPQJBETTDOIXFBIZVSIURLMAUFRFZFSEJFOWL");

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
    msg.setTimeStamp(0.09396914339183826);
    msg.setSource(4583U);
    msg.setSourceEntity(159U);
    msg.setDestination(6757U);
    msg.setDestinationEntity(153U);
    msg.timeout = 3581402286U;

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
    msg.setTimeStamp(0.7214143505844246);
    msg.setSource(14597U);
    msg.setSourceEntity(111U);
    msg.setDestination(17599U);
    msg.setDestinationEntity(234U);
    msg.timeout = 823805163U;

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
    msg.setTimeStamp(0.9571410176923533);
    msg.setSource(15733U);
    msg.setSourceEntity(135U);
    msg.setDestination(5362U);
    msg.setDestinationEntity(225U);
    msg.timeout = 3058135297U;

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
    msg.setTimeStamp(0.643840168126684);
    msg.setSource(60650U);
    msg.setSourceEntity(234U);
    msg.setDestination(38746U);
    msg.setDestinationEntity(249U);
    msg.sessid = 3002305703U;

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
    msg.setTimeStamp(0.3646344020064459);
    msg.setSource(49889U);
    msg.setSourceEntity(97U);
    msg.setDestination(56420U);
    msg.setDestinationEntity(77U);
    msg.sessid = 1383666814U;

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
    msg.setTimeStamp(0.7795468090355193);
    msg.setSource(26848U);
    msg.setSourceEntity(66U);
    msg.setDestination(30764U);
    msg.setDestinationEntity(165U);
    msg.sessid = 2107248795U;

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
    msg.setTimeStamp(0.4085423400094461);
    msg.setSource(23975U);
    msg.setSourceEntity(247U);
    msg.setDestination(40146U);
    msg.setDestinationEntity(105U);
    msg.sessid = 775701117U;
    msg.messages.assign("DGCTXUIWINPIAYQLTKSUTRDTJJLPWCQIRULBCJSLLIDDQOYWSBYIZLPHREZWFAPLFMNCKAYSMHTWNKGGSBROOKOOUKHFARQZZZJZXERXOEXFYIBLFEHMKABSRBEMSUZTLCRUMYEHQYEYGJIODCDHSKHGCEIABYSNAIVGHCNTKMXBVMPUWUNONHAJZQNHJLMVEKOTWCGW");

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
    msg.setTimeStamp(0.5602070625864087);
    msg.setSource(34732U);
    msg.setSourceEntity(184U);
    msg.setDestination(22491U);
    msg.setDestinationEntity(230U);
    msg.sessid = 2732092125U;
    msg.messages.assign("LWCKZGSIYDKTBQAJZJEJTUCOPIRGSHZXMMFKUNPWFSMWDOLAHZLXCRNDSZMGKCJFCBLOGIWNWXLDAJNTELOPKOKWYZLQNULNROVINYVBVUVSMQHEUOKGCOMSAPSFKNRZHAFAIYTPSGZLEZJVFMQRGDYQVXYDDYCRJHCTYGTUEPEUQWCFMWQABANBMUVWDMGUIBEVZHIEJ");

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
    msg.setTimeStamp(0.4114498243768485);
    msg.setSource(50452U);
    msg.setSourceEntity(173U);
    msg.setDestination(1594U);
    msg.setDestinationEntity(64U);
    msg.sessid = 1284751265U;
    msg.messages.assign("LQHSHDVKLTREBLPNRIIMEGMVHUJDJFXMLWTYYOPPWSRAUQEOHJNJOCWZWCYCXGNCFVPRFWZCEGZDNXJWRGLMSYAQUATCJUKMKFSKPBKFIJAYWBOMKHBRHMLLHEZVAWSQXEPHJPOGNXXDLTHURUKVYSDIVZDFXSPOCIYJPLBQSFIXETYLSBNMGIFRZRCKCZDUTSQBITGKEKANXUOGNGQOFTMABQ");

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
    msg.setTimeStamp(0.683843431315904);
    msg.setSource(30464U);
    msg.setSourceEntity(196U);
    msg.setDestination(52099U);
    msg.setDestinationEntity(181U);
    msg.sessid = 4290221357U;

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
    msg.setTimeStamp(0.42728495158339197);
    msg.setSource(40961U);
    msg.setSourceEntity(18U);
    msg.setDestination(26411U);
    msg.setDestinationEntity(169U);
    msg.sessid = 4194902069U;

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
    msg.setTimeStamp(0.21325472186810324);
    msg.setSource(53732U);
    msg.setSourceEntity(64U);
    msg.setDestination(51302U);
    msg.setDestinationEntity(164U);
    msg.sessid = 3217524983U;

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
    msg.setTimeStamp(0.1179190579798477);
    msg.setSource(27583U);
    msg.setSourceEntity(53U);
    msg.setDestination(9849U);
    msg.setDestinationEntity(61U);
    msg.sessid = 1349755717U;
    msg.status = 85U;

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
    msg.setTimeStamp(0.38104259397189943);
    msg.setSource(11147U);
    msg.setSourceEntity(43U);
    msg.setDestination(62784U);
    msg.setDestinationEntity(189U);
    msg.sessid = 592109402U;
    msg.status = 4U;

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
    msg.setTimeStamp(0.7849871019774675);
    msg.setSource(41071U);
    msg.setSourceEntity(72U);
    msg.setDestination(46994U);
    msg.setDestinationEntity(88U);
    msg.sessid = 1187058722U;
    msg.status = 90U;

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
    msg.setTimeStamp(0.3343856407838379);
    msg.setSource(7873U);
    msg.setSourceEntity(118U);
    msg.setDestination(46570U);
    msg.setDestinationEntity(53U);
    msg.name.assign("RMLARYJMOADEHDMWKXLWPODBUFLGSFR");

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
    msg.setTimeStamp(0.7200780915857926);
    msg.setSource(61581U);
    msg.setSourceEntity(114U);
    msg.setDestination(52109U);
    msg.setDestinationEntity(76U);
    msg.name.assign("PGNZLZKOBIVUZAWREZEFKREMDYASOVXPQOGASW");

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
    msg.setTimeStamp(0.10115631281882065);
    msg.setSource(54383U);
    msg.setSourceEntity(166U);
    msg.setDestination(19632U);
    msg.setDestinationEntity(199U);
    msg.name.assign("PKOBSWQNPYTJLZGOBLFXEIBQNIHJJMNXPENOTSGIVXGWNFTPDTARZAXQQWWMRMPTNGZULNHCEAIKMVSMEFODMUIGNLPZSKHHI");

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
    msg.setTimeStamp(0.9540201076539419);
    msg.setSource(44183U);
    msg.setSourceEntity(185U);
    msg.setDestination(62129U);
    msg.setDestinationEntity(28U);
    msg.name.assign("TUWWXFICLIVJDSXCRNYCRYYFHPTRQSQMOGDSBQDJOGVHWYCEGMFPPQRTSHFIUQZELYXHXWHLVUCLSYZLVYFWAOJEVTVCIWGMCUYVUNHSDIUNSSVHBPISZ");

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
    msg.setTimeStamp(0.5403095925133147);
    msg.setSource(12655U);
    msg.setSourceEntity(219U);
    msg.setDestination(18047U);
    msg.setDestinationEntity(179U);
    msg.name.assign("WOELRDCEPPFQKZOYEYJMETSTQGWURQTSFGWLNCQXDJAQMNYLIKWZIVDIFYLCDAWMCOAHSPVOVACSUGNRLVNSPDOFRLYUGBQRYKZHZGXMXRDLJCAUYDVTVQACGSSBTAYBKTGOVXSHFOLSRPUKKANEDZGJ");

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
    msg.setTimeStamp(0.6479022849752866);
    msg.setSource(42411U);
    msg.setSourceEntity(197U);
    msg.setDestination(14477U);
    msg.setDestinationEntity(222U);
    msg.name.assign("SHNHIDIOPGQGGEWOWBTIXQEBZHPCUPECLNNISVSUAEUVFXZEZNBKHPQFYANYMIEHPYGKKMSSRSMOAIGMTTXBJDMJUTASTWLLC");

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
    msg.setTimeStamp(0.7277464475054624);
    msg.setSource(15316U);
    msg.setSourceEntity(136U);
    msg.setDestination(6530U);
    msg.setDestinationEntity(252U);
    msg.type = 218U;
    msg.error.assign("IWMADATHZVTKVILECYWZUNUHEBHPKZHKPKOXFZHYOQOYLRCOPWLXFBOHMSQMLICQUPJXRXXJJUMQEXSYZFORJSSRO");

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
    msg.setTimeStamp(0.6611686085624893);
    msg.setSource(16199U);
    msg.setSourceEntity(177U);
    msg.setDestination(31062U);
    msg.setDestinationEntity(96U);
    msg.type = 120U;
    msg.error.assign("GBRYKWHSXFTIVCGPRJFCYSSMWHBXCKSUTWFMQAPNBVHGUJHZPRBZWNRPGJEMVGLMQQZZECJSOYXTLFZAVMLWRVRJSGFKVFQNYDHUBVAXXBEFUSPUINNXCFHQEVPDRIDTLBTOTOOZSSBNYJWTQOLULDZJDUOKNYQ");

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
    msg.setTimeStamp(0.8005868902632587);
    msg.setSource(63251U);
    msg.setSourceEntity(220U);
    msg.setDestination(37591U);
    msg.setDestinationEntity(145U);
    msg.type = 138U;
    msg.error.assign("JVZIDJHIOGFEHJXQBWLSHFWIAGFIMVYPPUTEUKOPVZKWUKVZBJKTGQCFBCLAXKUDHRMRUEQIBRXDLDULHDQCGLLBEQMIKBVJNBWQYOXPROAGNMKZNQWVGZTTSSDKSKIAYIXANHEMCTAFORPJYYANNNSUDL");

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
    msg.setTimeStamp(0.5340020880496511);
    msg.setSource(21699U);
    msg.setSourceEntity(191U);
    msg.setDestination(42718U);
    msg.setDestinationEntity(229U);
    msg.seq = 14103U;
    msg.sys_dst.assign("VDGZXBYSFYRTFHPHKQQNAAYMDMEXXSFTOYCSEPMYZIAJAVHQYZDFVQRXCHVHODPCKAQGVOWILALLXKUSEMRLXJIPVSCGVPYMCRWZBQBTODNRWKYPRIEUACENCLUGNDWFOKFBHVBGINKIJTWBMEKCNPGZALEFLCLSQNJOSXJGMIHFEROGPBWWUZZRYQUINXJEIZPXFTWXBRBYTMBVJRW");
    msg.flags = 63U;
    const signed char tmp_msg_0[] = {108, -56, 29, 109, -41, -64, 87, 13, -23, -116, -41, -72, 115, 126, 108, 80, -97, 103, 89, 92, -22, -37, 126, 112, 93, -64, 88, -78, -67, -46, -84, -61, -105, -115, -108, -115, -123, -39, -121, -127, 93, -28, 24, -82, 101, -45, -44, -51, 120, 70, 14, -7, -36, -91, 73, 62, -117, 55, 36, -38, -28, -53, -36, -20, 99, -71, 59, 73, -76, 61, 4, -125, 115, 0, 35, -85, -114, 23, 64, 1, 126, 118, 113, 105, 27, -45, -23, -92, 23, 69, 23, -70, -73, -42, 112, 26, -59, 34, 93, 7, -24, 82, -45, -37, 124, 36, -99, -18, 13, -106, -61, -17, 54, 58, -61, -102, 108, 42, -83, 52, 33, -16, 111, 45, -70, 57, -66, 102, 55, 10, 69, -115, -42, -35, -41, -25, 80, 102, 42, 97, 37, -28, -103, -48, -105, -67, -100, -26, 13, 126, -88, -33, 116, -60, 81, 102, -78, 62, 79, 95, -90, 88, 62, 110, -6, 73, 1, -107, 40, -38, -118, 119, -120, -95, -104, 73, -12, 2, -100, -48, 27, 74, -50, -80, -14, -31, -108, -44, -15, 109, -26, -30, -3, 81, 79, -24, 43, -15, 52, 42, -8, -102, -36, 65, 32, 19, -17, 35, 72, 29, -104, 97, 74, -60, 63, -2};
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
    msg.setTimeStamp(0.7236918624082072);
    msg.setSource(6927U);
    msg.setSourceEntity(81U);
    msg.setDestination(30387U);
    msg.setDestinationEntity(51U);
    msg.seq = 32094U;
    msg.sys_dst.assign("GRZTEROORNXFHINSZYKEIVYLSWUXUPKWTCGCBJNZDQLVGTHNPRXCYHJVRDYQHDSXCFGXYXKEUNPYTNOBHBOIFQQFAFMMBQIEKVHRZQLZLEWAJVLFNMZDBMFTLGBTISGLWIUIZKEUC");
    msg.flags = 114U;
    const signed char tmp_msg_0[] = {-8, 125, -99, -126, 13, -76, 118, 73, 81, 25, -98, -124, -3, 89, 87, 110, -96, 33, 116, -74, -10, -9, -91, 55, 9, -40, 34, -127, 44, 110, 6, 45, 61, 6, -36, -50, 15, 13, 123, -1, -37, 76, -50, -52, -102, 108, 28, 103, -25, 42, -121, -32, -110, -55, 94, -31, -54, -1, -113, 4, 113, 82, -98, -100, 8, -123, -70, -95, -90, -78, -67, 19, 5, -14, 124, 112, 16, -64, 61, -110, -77, 38, 4, 16, 111, -18, -44, -32, 88, -109, -9, 23, 25, 13, -80, 4, 98, 91, 68, 96, 35, -22, -110, 76, -82, -5, 66, -94, -52, 121, 50, 47, 3, 44, 8, -105, -126, 37, -53, -107, 112, 30, -111, 22, -116, 28, -55, 109, -70, 26, -116, -107, 3, -40, 38, -112, 55, 82, -1, -96, 7, -74, 91, -67, -39, -86, -7, 90, -119, -67, -115, 100, 77, 28, -56, 5, -59, -16, -62, 45, -94, 20, -91, -43, -35, 6, 87, 112, -97, 85, 106, -115, 21, -73, 57, -51, -98, 121, 38, 95, -106, -32, 22, 80, 27, -85, 101, -12, 18, -10};
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
    msg.setTimeStamp(0.6340139700836459);
    msg.setSource(62472U);
    msg.setSourceEntity(22U);
    msg.setDestination(61159U);
    msg.setDestinationEntity(252U);
    msg.seq = 11464U;
    msg.sys_dst.assign("SYTYKFOWTYNCXNVQLIHCKPJNRUIXYNIWQPZAYXCSZKGKKMYGXIVIECDOGYIZWERLGSABDKGWPHSNPPNFWUBURRQBWXXXDCBLPJLTZSKAVMJGRFOZLHJQBZDLKETHOZTEBRVQDDCRNIUCFVTDGVPSOEDXUADUVGEMFMYVAFFQLMGHNPWTCANVMIQPLRWRFEYAQLKJJOVU");
    msg.flags = 222U;
    const signed char tmp_msg_0[] = {-41, 126, 34, 102, -125, 38, 39, -110, 52, 118, 95, 73, 107, -54, -92, -111, 40, 83, 34, -66, 5, -17, -5, -9, 30, -48, 23, 24, -69, 78, 112, 114, -58, -17, 73, -75, 62, -22, -46, -57, -27, -87, -101, 121, -64, 8, 51, -127, -37, -84, -109, -79, -82, 58, -115, 87, 10, -70, -112, -128, -105, 3, 77, -44, -51, -72, 24, 82, -98, -14, -39, -58, -60, 91, -90, 34, -34, -83, 61, 49, -89, 28, -95, 19, -50, -13, -48, 19, 28, 35, 63, -47, -13, -125, -116, 45, 121, -62, -114, -94, 95, -12, -22, 123, 27, -81, -44, 19, 89, 122, -105, -51, 23, -124, -5, -66, 66, 4, 81, 67, 11, 15, 58, 44, 13, 86, 7, 86, -108, 19, -97, -87, 38, 84, -42, 76, 122, -111, 69, 126, 61, 31, 24, -114, 121, -106, 51, -66, 39, 104, 29, 60, 52, -112, 45, 19, -112, 6, -36, -108, 38, -108, -17, -48, -63, -46, 100, 50, -16, -111, 39, 46, 117, 43, -106, 41, 48, -40, 106, 104, -63, -75, -82, 126, 45, -97, 65, -35, -109};
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
    msg.setTimeStamp(0.06531925054184384);
    msg.setSource(37852U);
    msg.setSourceEntity(248U);
    msg.setDestination(47173U);
    msg.setDestinationEntity(170U);
    msg.sys_src.assign("NOXNTQTYMODWAAVJHVWQCPESYMFOCK");
    msg.sys_dst.assign("BFHEMVRAVHLPPQNQSWUNKMRWVLQBKGRYMQBHJFSOVETRSKTFPJDUSDLIKVPSERAZVDTUTOMJOBQKTNNUOKVZIAYHUGGOCIZLPIHXPBCKWXARXNMUXINCEZUHTLPBXBPRYJGJDSAFVWCOFXOMWSYLNWMBDQGIGZLECLGYEUDDYJIAKVWEXDRZNWAUEKFPITJTGJGUOHWSJWRAJNMSBLCQFGNFSPHQAFHIZZETADLZMOQRDHFCYX");
    msg.flags = 89U;
    const signed char tmp_msg_0[] = {120, 55, -104, 42, 16, -30, -126, -55, -82, 87, 73, 38, 54, 70, -55, -81, -76, 50, -9, 100, 61, 81, -46, -22, -72, -80, 123, -104, -73, -16, 10, 87, -69, 105, -14, 90, -41, 30, 89, -90, -8, -123, -17, 118, -101, -59, 41, 108, -125, 96, -34, -62, 97, -28, 71, 48, -72, -110, -71, 89, 2, 111, 110, -105, -69, -111, -40, 125, -46, -2, 90, -91, -119, -67, 31, -84, 57, 31, 104, 59, 78, 1, 95, -24, -26, 65, 63, 103, 72, 21, 69, -44, -117, -111, 85, -106, -92, -45, 32, -61, 0, 58, -128, -6, -112, 63, 112, 68, 38, -52, -82, -75, 104, 109, -82, 99, 69, 16, 26, 44, -42, -29, -2, -68, 30, 79, -79, 116, 85, -6, -68, -84, 63, 26, -45, 116};
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
    msg.setTimeStamp(0.2846997098221635);
    msg.setSource(52609U);
    msg.setSourceEntity(217U);
    msg.setDestination(44405U);
    msg.setDestinationEntity(95U);
    msg.sys_src.assign("SZIYLIZFOWHMMKXMGCZMLALLNLJEZXBJBAUMPGBJSAGJVFGSQUQVJJZUANHPNUVCTNRVCDPKHHYFYHTADCZXTEUNAZTITBULDMCOGVFHPSEZFGCYQVRBALOQJQKCRLCDPRYDYNFNSTXVWRPBTQEGIAWFJVEKKPXSHOQKQUFFQJOWHBPVRQYDXRWHJNBIEXAKUNASRSDNI");
    msg.sys_dst.assign("HWJSNIKFMIYUNWIQLUBKMDRMYHAAKGGWMWWWULEUPJBFIBXNVMCWAUEGERPYZZRJPBSRGSOIQTVVNSRVJCR");
    msg.flags = 186U;
    const signed char tmp_msg_0[] = {48, -77, -97, 75, -108, 14, 88, 100, -73, -25, 71, 85, 46, -38, -48, -40, 20, 55, 102, -4, -64, 25, 2, 35, 100, -72, 41, -47, 37, 11, -9, 88, -14, -71, -60, -80, -106, 51, -54, 53, 98, -82, 73, 58, 123, 86, 78, -33, -94, -76, -41, 108, -74, -44, -76, 3, 73, 69, -16, -50, -104, 7, -82, -8, 38, 6, -17, -29, -94, -86, -69, 89, 56, 21, 37, 37, 117, 17, 36, -49, -49, 0, -121, 15, 100, -66, 41, -44, 55, -14, 18, 47, -22, -69, 110, 74, 108, -29, 24, -103};
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
    msg.setTimeStamp(0.5256790221140815);
    msg.setSource(11237U);
    msg.setSourceEntity(116U);
    msg.setDestination(13115U);
    msg.setDestinationEntity(199U);
    msg.sys_src.assign("GBEHCCQTMRJEABWJVTPDYCZTGZDCIYJWBOKDRKJMJRHWYIXDPCRVWVQCANIAQNDUOTWXAOIHSDFQFZGSNRHLVGYPNAWFTRQQZCBKRSAFGJKUPJCNHUGXQBYSHMEFTEPXDOLLLGKHSRIGMNMXYQFFOCLZBGVGSXAUOIDSSTMBZIPPDVAIQUAXQMWUOLERCTFKAEKENIFNUOBYLVMYKJBLMWLHLSEYFNU");
    msg.sys_dst.assign("PRRFYXTCNNBZCWUAQUKQXQLYXMMDCNVMHNBXCMRJZTALNESRZ");
    msg.flags = 249U;
    const signed char tmp_msg_0[] = {-2, 63, -24, 86, -87, 12, -3, -92, -94, -124, 20, -51, 32, -18, -1, -35, 37, 4, -36, 12, -109, 120, -78, 94, 37, 6, -10, 6, 31, -80, -58, 99, -49, 109, -52, -127, 15, 28, -113, 79, -25, -19, 9, 48, -81, -48, 111, 99, -48, -100, -6, 59, -10, -83, -20, 56, -48, 67, 2, 90, 27, 58, -106, -39, 35, 117, 64, 17, -96, -76, -114, -79, -17, 77, 33, 58, 21, -35, -27, -7, 101, 4, -70, -124, 100, -70, -20, -101, 2, 59, 20, -96, -36, -32, 25, 103, 20, -78, -113, -115, -10, -17, -39, 60, -101, 91, -87, 108, 110, -59, -39, -17, 126, 25, -33, 11, 101, -97, -68, -112, 45, -6, 82, -123, -40, -5, -36, -102, -80, 70, 20, -59, -97, -42, 49, 85, -22, -100, -64, -59, 15, 63, 12, -46, -36, 74, 34, -83, -32, 94, -6, -22, 104, 93, -120, 80, -55, -92, 32, 77, 20, 117, -69, 77, 85, -84, -65, -73, 117, -31, -64, -94, 54, -64, 62, -43, -82, 47, 86, 4, 63, 20, 90, -117, -6, 12, 0, -99, -92, 101, -123, -29, 9, -115, -114, -48, -114, 115, 74, 61, 56, 23, -60, 54, 108, 55, 62, -61, -97, 56};
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
    msg.setTimeStamp(0.8242439913057489);
    msg.setSource(36386U);
    msg.setSourceEntity(27U);
    msg.setDestination(29518U);
    msg.setDestinationEntity(57U);
    msg.seq = 24401U;
    msg.value = 127U;
    msg.error.assign("WHHNGHDEXGIELRUDMNUMECGDAEFTBJUWFDTENVYXBBMJFSGVFJXM");

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
    msg.setTimeStamp(0.6884331366929642);
    msg.setSource(39470U);
    msg.setSourceEntity(136U);
    msg.setDestination(58933U);
    msg.setDestinationEntity(176U);
    msg.seq = 3246U;
    msg.value = 11U;
    msg.error.assign("ZIZQCESIGWODCGVUTZMDTCKXJVPYW");

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
    msg.setTimeStamp(0.057737371359661394);
    msg.setSource(14068U);
    msg.setSourceEntity(2U);
    msg.setDestination(28532U);
    msg.setDestinationEntity(228U);
    msg.seq = 12424U;
    msg.value = 242U;
    msg.error.assign("FCFGAQNSORBCCWRMTAANVTXFZYY");

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
    msg.setTimeStamp(0.4753464533331193);
    msg.setSource(55088U);
    msg.setSourceEntity(80U);
    msg.setDestination(46583U);
    msg.setDestinationEntity(35U);
    msg.seq = 18493U;
    msg.sys.assign("HYFYXMMSKNETVFSVNOFUWLTTSKSUWWCQPXQJKAUGVJUDSQHANHACIZPNZSRBPEMWQMDBNGALDMCRCUWMDACEBWIFTCVGIETVFMUTMKVKOSWXNLTJGYRIPXFBYPRZUVZJZPHYQOAJAOVZXOHEDPREJKQWEJDJBOVIKJHPGKREAYBASLOGYUPFXSXGLOXQOIIIQDUSDOMLHWZGLZLDYTXDFEVNGBFQHRYZGXRJLATPCHKUCBYMFRC");
    msg.value = 0.42523519050943437;

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
    msg.setTimeStamp(0.041932700531233214);
    msg.setSource(59722U);
    msg.setSourceEntity(223U);
    msg.setDestination(12063U);
    msg.setDestinationEntity(9U);
    msg.seq = 26937U;
    msg.sys.assign("VWFTOVDJJSKSDHXJXZL");
    msg.value = 0.04899420252288755;

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
    msg.setTimeStamp(0.23825098140795964);
    msg.setSource(65327U);
    msg.setSourceEntity(177U);
    msg.setDestination(63434U);
    msg.setDestinationEntity(68U);
    msg.seq = 63614U;
    msg.sys.assign("WOLXRCIMNMMCRAMTZNZOESJREZKDVIHTRRYDDNVGBWCWVAYKDOSDOWCRQYNNREEKYWZRWTLELUZNGMSTFVPCGQNPVTNTREJBMHULKOXMUXU");
    msg.value = 0.447358073060517;

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
    msg.setTimeStamp(0.973610680975762);
    msg.setSource(31799U);
    msg.setSourceEntity(124U);
    msg.setDestination(11722U);
    msg.setDestinationEntity(20U);
    msg.seq = 530U;
    msg.sys_dst.assign("UCKRKXJTWVJGHRTMWUSYDAGCCLGFLYWJPQOCRIHAVUOFXZGAUBIQIMMXVDDNXRTOIGZTSZPLCHZSIJHBOPMZMLUDYOBULDPGESMETYGTYSSXSXZDNWBYKAJFFJYBAAESKKVEHINQQRBOANLJKJWMFVBKHDZEYHNKILPKLFRHIPZHNPARJCBAEOQQGUXAMQQLPTOVEQJLVWXFWEKYNHDTVCGCRIEUXNNDXINMSWUMPPVTZGOWSUFZY");
    msg.timeout = 0.8568837305873207;

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
    msg.setTimeStamp(0.45183875435173604);
    msg.setSource(29755U);
    msg.setSourceEntity(74U);
    msg.setDestination(27153U);
    msg.setDestinationEntity(147U);
    msg.seq = 48659U;
    msg.sys_dst.assign("ZHXTWLQESYGSQTAESIQRFONXFFFVRORKKCKDABWHNJWIALJWVKCTJYPSKSARLSACGFBYPFJITPZMBPBLSEBUNGVJCEOWDZRYCGRFOVRRQIXWHSULOMBPNHICYJVPEDOBOPYHNYICBZMKKADZVXEMPQNFJGYHUMICVMWCYFLQYVEODDZXTZBUAATHLVGMOZNGWMVOKQLDTIULMNJHIJ");
    msg.timeout = 0.9584354712038125;

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
    msg.setTimeStamp(0.2038729644082049);
    msg.setSource(5131U);
    msg.setSourceEntity(126U);
    msg.setDestination(16832U);
    msg.setDestinationEntity(220U);
    msg.seq = 34153U;
    msg.sys_dst.assign("KKFXNZPHBPLWIOMNDVHISRGYDICMGDBMVFAJXVIDSKSFUUWVXUHUOYVBGVCBJJUTTGBKCRBEOAKSDQQBEERXJEEHLYGZHXSDJNYRNYMTKDZZWEOLHYMGIPYAFJGCNMPRQOMAOYCPRVUHNWCOEUUTONKNPRMZQLXTTLACGPFAICWDUSSWIKHSTPHIYGRFX");
    msg.timeout = 0.7445667531697819;

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
    msg.setTimeStamp(0.693844440957675);
    msg.setSource(6486U);
    msg.setSourceEntity(19U);
    msg.setDestination(2295U);
    msg.setDestinationEntity(143U);
    msg.action = 75U;
    msg.longain = 0.3261129802701471;
    msg.latgain = 0.5251480591174097;
    msg.bondthick = 906082741U;
    msg.leadgain = 0.25143835414615834;
    msg.deconflgain = 0.5001401451026348;

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
    msg.setTimeStamp(0.2717421757012297);
    msg.setSource(28782U);
    msg.setSourceEntity(92U);
    msg.setDestination(15154U);
    msg.setDestinationEntity(201U);
    msg.action = 149U;
    msg.longain = 0.18922918659607957;
    msg.latgain = 0.7489947758773612;
    msg.bondthick = 2447669909U;
    msg.leadgain = 0.20870639074569008;
    msg.deconflgain = 0.7101484351247002;

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
    msg.setTimeStamp(0.7102946535568511);
    msg.setSource(48838U);
    msg.setSourceEntity(122U);
    msg.setDestination(31406U);
    msg.setDestinationEntity(250U);
    msg.action = 73U;
    msg.longain = 0.07042412620952454;
    msg.latgain = 0.6001440089551909;
    msg.bondthick = 3140107465U;
    msg.leadgain = 0.37550526240193005;
    msg.deconflgain = 0.3500221976395548;

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
    msg.setTimeStamp(0.25930721348949426);
    msg.setSource(27888U);
    msg.setSourceEntity(97U);
    msg.setDestination(63262U);
    msg.setDestinationEntity(140U);
    msg.err_mean = 0.8414511243275089;
    msg.dist_min_abs = 0.8464047164041373;
    msg.dist_min_mean = 0.105538009104447;

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
    msg.setTimeStamp(0.15871317169895116);
    msg.setSource(43278U);
    msg.setSourceEntity(115U);
    msg.setDestination(52485U);
    msg.setDestinationEntity(169U);
    msg.err_mean = 0.20493506621059765;
    msg.dist_min_abs = 0.20407755857167253;
    msg.dist_min_mean = 0.21873657407522895;

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
    msg.setTimeStamp(0.4970993521413254);
    msg.setSource(4395U);
    msg.setSourceEntity(189U);
    msg.setDestination(30329U);
    msg.setDestinationEntity(248U);
    msg.err_mean = 0.8563466787261298;
    msg.dist_min_abs = 0.683091598870916;
    msg.dist_min_mean = 0.5081366935984302;

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
    msg.setTimeStamp(0.7128430638223809);
    msg.setSource(6758U);
    msg.setSourceEntity(94U);
    msg.setDestination(21203U);
    msg.setDestinationEntity(206U);
    msg.action = 24U;
    msg.lon_gain = 0.05618255881484224;
    msg.lat_gain = 0.2899419602522323;
    msg.bond_thick = 0.2887168644003901;
    msg.lead_gain = 0.3029950741487015;
    msg.deconfl_gain = 0.11754535174956482;
    msg.accel_switch_gain = 0.6730861199901943;
    msg.safe_dist = 0.00716785158855926;
    msg.deconflict_offset = 0.7788664523595579;
    msg.accel_safe_margin = 0.1916135785113987;
    msg.accel_lim_x = 0.6367174952773201;

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
    msg.setTimeStamp(0.3645860624813386);
    msg.setSource(59597U);
    msg.setSourceEntity(58U);
    msg.setDestination(36219U);
    msg.setDestinationEntity(11U);
    msg.action = 198U;
    msg.lon_gain = 0.6496246295465253;
    msg.lat_gain = 0.5142315378798611;
    msg.bond_thick = 0.1859939858929721;
    msg.lead_gain = 0.8865846703538727;
    msg.deconfl_gain = 0.4238598150262043;
    msg.accel_switch_gain = 0.7317527777016344;
    msg.safe_dist = 0.11277228505513759;
    msg.deconflict_offset = 0.31010962812296894;
    msg.accel_safe_margin = 0.38833328825354707;
    msg.accel_lim_x = 0.14230332542165802;

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
    msg.setTimeStamp(0.36032664085912824);
    msg.setSource(46783U);
    msg.setSourceEntity(5U);
    msg.setDestination(50166U);
    msg.setDestinationEntity(151U);
    msg.action = 7U;
    msg.lon_gain = 0.7326243360821907;
    msg.lat_gain = 0.5578687147291677;
    msg.bond_thick = 0.8599904433153032;
    msg.lead_gain = 0.16935698876897265;
    msg.deconfl_gain = 0.2598726512708933;
    msg.accel_switch_gain = 0.731436228434193;
    msg.safe_dist = 0.29825767296957384;
    msg.deconflict_offset = 0.68792757904385;
    msg.accel_safe_margin = 0.6319196174037615;
    msg.accel_lim_x = 0.7312345297336998;

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
    msg.setTimeStamp(0.23113090870459752);
    msg.setSource(63658U);
    msg.setSourceEntity(254U);
    msg.setDestination(3509U);
    msg.setDestinationEntity(43U);
    msg.type = 93U;
    msg.op = 40U;
    msg.err_mean = 0.6983790456308381;
    msg.dist_min_abs = 0.1847909381067726;
    msg.dist_min_mean = 0.36684331721081387;
    msg.roll_rate_mean = 0.5545935281700891;
    msg.time = 0.11465057572370718;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 111U;
    tmp_msg_0.lon_gain = 0.6333311923972621;
    tmp_msg_0.lat_gain = 0.18965395972347487;
    tmp_msg_0.bond_thick = 0.8458930402447089;
    tmp_msg_0.lead_gain = 0.12811259622161542;
    tmp_msg_0.deconfl_gain = 0.8581775577757182;
    tmp_msg_0.accel_switch_gain = 0.7495162642824875;
    tmp_msg_0.safe_dist = 0.2060978805831335;
    tmp_msg_0.deconflict_offset = 0.36280252043175254;
    tmp_msg_0.accel_safe_margin = 0.706608572254086;
    tmp_msg_0.accel_lim_x = 0.9400829657158306;
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
    msg.setTimeStamp(0.31482514237730486);
    msg.setSource(58362U);
    msg.setSourceEntity(159U);
    msg.setDestination(50058U);
    msg.setDestinationEntity(6U);
    msg.type = 3U;
    msg.op = 112U;
    msg.err_mean = 0.6458214872041745;
    msg.dist_min_abs = 0.29014117869991995;
    msg.dist_min_mean = 0.6959706800163467;
    msg.roll_rate_mean = 0.018076435576210415;
    msg.time = 0.9869384465125638;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 62U;
    tmp_msg_0.lon_gain = 0.6178267023739481;
    tmp_msg_0.lat_gain = 0.22435303722696975;
    tmp_msg_0.bond_thick = 0.6282883031996742;
    tmp_msg_0.lead_gain = 0.02871771703564363;
    tmp_msg_0.deconfl_gain = 0.6889716621602727;
    tmp_msg_0.accel_switch_gain = 0.8688810576945147;
    tmp_msg_0.safe_dist = 0.8907453378351649;
    tmp_msg_0.deconflict_offset = 0.153169701042133;
    tmp_msg_0.accel_safe_margin = 0.9585845217687817;
    tmp_msg_0.accel_lim_x = 0.35615459875008515;
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
    msg.setTimeStamp(0.9211878551326877);
    msg.setSource(19960U);
    msg.setSourceEntity(159U);
    msg.setDestination(63054U);
    msg.setDestinationEntity(121U);
    msg.type = 226U;
    msg.op = 139U;
    msg.err_mean = 0.009409160077263778;
    msg.dist_min_abs = 0.9484376514539775;
    msg.dist_min_mean = 0.7517666780003514;
    msg.roll_rate_mean = 0.5223558871376746;
    msg.time = 0.4579289187100992;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 250U;
    tmp_msg_0.lon_gain = 0.9410490342664638;
    tmp_msg_0.lat_gain = 0.5271617642399573;
    tmp_msg_0.bond_thick = 0.2123973783141705;
    tmp_msg_0.lead_gain = 0.7585160472463407;
    tmp_msg_0.deconfl_gain = 0.6327839081507401;
    tmp_msg_0.accel_switch_gain = 0.09358701319296692;
    tmp_msg_0.safe_dist = 0.8935239648182873;
    tmp_msg_0.deconflict_offset = 0.9805516280977253;
    tmp_msg_0.accel_safe_margin = 0.5220947262079724;
    tmp_msg_0.accel_lim_x = 0.6288856834546365;
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
    msg.setTimeStamp(0.1279971595663174);
    msg.setSource(33344U);
    msg.setSourceEntity(21U);
    msg.setDestination(1286U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.9831212743852731;
    msg.lon = 0.17888816134828855;
    msg.eta = 3216760839U;
    msg.duration = 54639U;

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
    msg.setTimeStamp(0.1720067004098076);
    msg.setSource(25983U);
    msg.setSourceEntity(157U);
    msg.setDestination(51183U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.760998257230546;
    msg.lon = 0.9030654628256399;
    msg.eta = 2892976786U;
    msg.duration = 27676U;

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
    msg.setTimeStamp(0.36458947290293553);
    msg.setSource(26242U);
    msg.setSourceEntity(195U);
    msg.setDestination(2405U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.1464606869911218;
    msg.lon = 0.9818895776573053;
    msg.eta = 2887063053U;
    msg.duration = 15924U;

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
    msg.setTimeStamp(0.9719867325350117);
    msg.setSource(25528U);
    msg.setSourceEntity(145U);
    msg.setDestination(50724U);
    msg.setDestinationEntity(98U);
    msg.plan_id = 9755U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.13233253131354394;
    tmp_msg_0.lon = 0.910821191504076;
    tmp_msg_0.eta = 3279868431U;
    tmp_msg_0.duration = 59012U;
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
    msg.setTimeStamp(0.7813498616800597);
    msg.setSource(36535U);
    msg.setSourceEntity(109U);
    msg.setDestination(51067U);
    msg.setDestinationEntity(71U);
    msg.plan_id = 38373U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0874275929648668;
    tmp_msg_0.lon = 0.5085293925798279;
    tmp_msg_0.eta = 2452492276U;
    tmp_msg_0.duration = 23652U;
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
    msg.setTimeStamp(0.5654582159376568);
    msg.setSource(23672U);
    msg.setSourceEntity(61U);
    msg.setDestination(53180U);
    msg.setDestinationEntity(85U);
    msg.plan_id = 36614U;

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
    msg.setTimeStamp(0.5648170307744762);
    msg.setSource(56245U);
    msg.setSourceEntity(234U);
    msg.setDestination(16539U);
    msg.setDestinationEntity(155U);
    msg.type = 33U;
    msg.command = 153U;
    msg.settings.assign("OBEWQESDMUNORGVUAPSOYSMPDGGWZJOIZYJCWEUBYHTDSMK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 39105U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.39662641475637894;
    tmp_tmp_msg_0_0.lon = 0.5243639520730267;
    tmp_tmp_msg_0_0.eta = 1644067213U;
    tmp_tmp_msg_0_0.duration = 29700U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DFOBWVKXPVKZWSJXAZINMDZPNZBTRKTOHWA");

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
    msg.setTimeStamp(0.210924513522752);
    msg.setSource(39064U);
    msg.setSourceEntity(100U);
    msg.setDestination(18785U);
    msg.setDestinationEntity(13U);
    msg.type = 2U;
    msg.command = 213U;
    msg.settings.assign("SGRWUKACSNLYDUSNJNDWNAUNJJQKERBSEZOBTQJFMKIBCXOOCEMHHLIIMQU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 6960U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9958708523679124;
    tmp_tmp_msg_0_0.lon = 0.7562900015312601;
    tmp_tmp_msg_0_0.eta = 2356498381U;
    tmp_tmp_msg_0_0.duration = 16300U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IDOORIDSDWJY");

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
    msg.setTimeStamp(0.8650492352692575);
    msg.setSource(1510U);
    msg.setSourceEntity(235U);
    msg.setDestination(32040U);
    msg.setDestinationEntity(128U);
    msg.type = 12U;
    msg.command = 244U;
    msg.settings.assign("UJKATDVZDBGUUSTMOGMVZHFHHJARGYVPCYCMJKFDIODAEMBVPGPQJZRRHCCNTPLXYWREACBLBNWXVGQCXZFMXSHFBXWXW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 12097U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BNGMASCVQQESEKZNZLDUDNDFIXIQRFLGYKURAHAMUIWCUJXKNPZHRLGTXYHTXZMUDQKSLIVERCJFREKCJFMZPMURHQQJBLBISSDUCJCXSXPRVPWOMWBFKUTAHCPXKOTLGNJBRREAEZANQDVTIDHFLYHWJGIYYAKTNBWHPBNKMGZFQQNGWBCSYEADNWMHGML");

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
    msg.setTimeStamp(0.2024282225027605);
    msg.setSource(64045U);
    msg.setSourceEntity(187U);
    msg.setDestination(62822U);
    msg.setDestinationEntity(161U);
    msg.state = 219U;
    msg.plan_id = 50414U;
    msg.wpt_id = 110U;
    msg.settings_chk = 29913U;

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
    msg.setTimeStamp(0.36919974559147795);
    msg.setSource(2865U);
    msg.setSourceEntity(18U);
    msg.setDestination(22444U);
    msg.setDestinationEntity(190U);
    msg.state = 58U;
    msg.plan_id = 29993U;
    msg.wpt_id = 175U;
    msg.settings_chk = 58633U;

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
    msg.setTimeStamp(0.8016495268638771);
    msg.setSource(21695U);
    msg.setSourceEntity(135U);
    msg.setDestination(33935U);
    msg.setDestinationEntity(56U);
    msg.state = 181U;
    msg.plan_id = 27764U;
    msg.wpt_id = 60U;
    msg.settings_chk = 21729U;

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
    msg.setTimeStamp(0.1931037822935281);
    msg.setSource(10616U);
    msg.setSourceEntity(222U);
    msg.setDestination(44395U);
    msg.setDestinationEntity(135U);
    msg.uid = 32U;
    msg.frag_number = 6U;
    msg.num_frags = 19U;
    const signed char tmp_msg_0[] = {-115, 72, -113, 29, 74, 50, 5, 98, 99, -35, 2, 46, 7, 16, -69, -93, -14, -68, -52, -60, 26, 15, -103, 96, 8, -79, -102, 70, 16, 56, 12, -109, -69, -14, 66, -124, 104, 102, 44, -103, 11, -80, 19, 104, -54, 36, 123, -105, 78, 70, -104, 102, -63, 62, 93, 73, -51, 9, 5, -109, -55, -124, -34, -114, -22, -116, -42, 4, 32, -106, -60, -35, -106, 77, 22, 69, 60, -128, -25, -29, -21, 66, 73, -98, 34, -41, -45, -27, -103, -70, -18, -87, 21, 12, 42, -40, 122, 21, -35, 9, 73, -104, -101, -7, 17, -91, 64, 2, -117, -8, 8};
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
    msg.setTimeStamp(0.06609592605659276);
    msg.setSource(57078U);
    msg.setSourceEntity(221U);
    msg.setDestination(33904U);
    msg.setDestinationEntity(94U);
    msg.uid = 149U;
    msg.frag_number = 201U;
    msg.num_frags = 54U;
    const signed char tmp_msg_0[] = {-104, -50, -128, -75, -33, 62, 30, -88, 41, 84, 97, -1, 41, -35, 1, 10, 49, -98, 70, -87, 84, -104, 104, 64, -80, 108, -13, 67, 14, -118, 90, 15, 113, -46, -1, 67, -78, -63, 94, 87, -93, -56, 123, -110, 42, 121, 93, 106, -48, 20, 115, 46, 31, 81, 17, -48, 4, 65, 0, -45, 51, 98, -69, -42, -46, -72, -11, 117, -59, 75, -5, 3, -75, 89, 125, 30, 77, 30, 112, 96, -93, -62, 112, 119, -72, -109, -57, 35, -40, -43, -82, 88, 114, -82, -30, 85, -40, 16, -120, -63, -84, 91, 19, 124, -20, 81, 51, -37, 78, -128, -16, 15, 28, 74, -18, -113, -78, 48, 85, 110, -81, -92, 38, 38, 80, -123, -88, 89, -48, -91, -14, 88, -27, 101, -83, 16, -100, 106, -102, 108, -116, -95, -116, 85, 68, -110, -6, -12, -14, -87, 88, -104, -112, -83, 99, 116, -55, -7, 35, -24, -102, 43, -100, -15, 24, -27, 121, -42, 15, -62, -3, 1, -98, -113, 61, -10, 88, -97, -57, -27, 119, -47, -41, -19, 102, 9, -19, -122, 57, -120, 15, 86, -12, -77, 97, 22};
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
    msg.setTimeStamp(0.919321908066541);
    msg.setSource(57028U);
    msg.setSourceEntity(233U);
    msg.setDestination(43214U);
    msg.setDestinationEntity(158U);
    msg.uid = 3U;
    msg.frag_number = 198U;
    msg.num_frags = 166U;
    const signed char tmp_msg_0[] = {-82, -68, -102, -120, 86, 15, 64, -109, 108, -51, 50, 38, 57, 120, 92, 63, -70, 20, 76, 1, 8, 115, 4, 114, -25, 68, 87, 106, 109, 94, -109, -92, 96, -62, 52, -102, 33, 15, -12, 76, -82, 98, -87, -45, 88, 100, 79, 30, -122, 27, -57, -21, 89, -1, 86, 98, 84, -51, 83, 115, 104, -59, -65, -118, -45, 6, 82, -56, -7, 121, -106, 33, 52, 54, 109, -111, -107, -57, -30, 67, 126, -22, -20, 108, -96, 71, 116, 126, 115, -107, 58, -45, 59, -10, -119, -34, -117, 81, -49, -23, 66, -102, -75, -17, -61, -7, 6, 20, 36, 38, -54, -116, 88, 123, -82, 88, 75, 71, -111, 33, 15, 123, -2, 16, 52, -20, -64, -111, -79, -111, -39, 116, -40, -103, 113, 64, 38, -33, -100, 10, 75, -95, 101, -102, -17, -45, 51, -16, -72, -61, 98, -15, -97, -101, 81, -18, -79, -39, -31, 121, 115, -67, -96, -97, 48, -44, 94, 88, -55, 98, -48, -112, -11, 70, -88, -57, -7, -119, 18, 122, 7, 42, -116, -68, 17, 104, 47, -121, -119, 122, 34, -28, -47, -27, -118, -52, 26, 15, -53, -61, 59, 83, -108, 85, -120, -99, 64, 26, 97, -125, 13, -113, 31, 125, -11, -110, 72, -124, 55, 50, -58, -23, -90, -64, -27, 38, -18, 17, 49, 103, 72, -69, -55, -120, -118, 21};
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
    msg.setTimeStamp(0.9084382598060119);
    msg.setSource(53745U);
    msg.setSourceEntity(85U);
    msg.setDestination(42467U);
    msg.setDestinationEntity(123U);
    msg.content_type.assign("AOFDXQIQERHBKHEFNXABFYZGKLRCTCZRQSUBEVQECZBTSFGVARJGRSMYVGUANUMVNDWMEPMHFHTPPHDFICMSIPNIJFQDGJJXDHUDJLPUXGWWIHLZEYNSAZECKTLXKAFCRPZZBXSW");
    const signed char tmp_msg_0[] = {74, 68, 21, -58, -104, 114, -120, -39, 50, 64, -59, 45, -88, 93, 80, 92, 23, -78, 6, -94, 91, 2, -51, 17, 50, -108, 64, 47, -125, 1, -8, -97, 33, -72, 77, 32, -30, 26, 58, -82, 31, -128, 2, -119, -81, -121, 109, 88, -117, 75, -73, -55, 20, -60, 34, 67, 14, 74, 125, 7, 105, -109, 47, -20, -89, 83, 30, 96, -89, -102, 96, 34, -81, 99, -110, 21, -51, 70, 36, 61, 108, -6, -77, 1, 118, -89, 110, 41, 73, -84, -29, 53, 113, 39, -72, 1, -62, 113, 24, 81, 45, 18, -64, 42, -39, -104};
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
    msg.setTimeStamp(0.3990827643355078);
    msg.setSource(8814U);
    msg.setSourceEntity(52U);
    msg.setDestination(39014U);
    msg.setDestinationEntity(157U);
    msg.content_type.assign("RSXJFYQDNGFNCXLXTVKWRPPBTGDUHOLAZEEWIPZSNTHCJWUHXVSISDDZALBHYQPXCFRRACMWQUKYBPFVIDKIFPCQAPGUHTNIVAFTKTDITGKLJNMJUJZKBOMUGOAGXXVKKSSSGFDWSZTQQ");
    const signed char tmp_msg_0[] = {61, 3, 28, 106, 99, -2, 5, -95, -59, 49, -100, 98, 78, -77, -5, 111, 77, 45, 9, -4, -98, -16, 35, 52, -62, 104, 93, 98, 15, 10, 59, -93, -23, 90, -3, -26, -23, 27, -28, -82, 43, 71, 7, 1, -32, -63, -107, -66, -38, 21, 95, 18, 7, -63, -94, -1, 5, -100, -86, -99, -89, -95, -83, -111, -115, -90, 83, 64, -71, 83, 63, -88, 71, 53, -4, 89, -73, -96, -49, 30, 0, 83, -110, -125, -92, -60, -118, -45, -3, -67, 65, -53, -120, -89, -48, -39, 34, -71, -37, 53, 24, 40, -119, 23, -45, 54, 23, -77, 96, -74, -109, 59, -32, 82};
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
    msg.setTimeStamp(0.9379289181298246);
    msg.setSource(61511U);
    msg.setSourceEntity(31U);
    msg.setDestination(29377U);
    msg.setDestinationEntity(124U);
    msg.content_type.assign("WWMUJGCADNFOBSKTOSNVCNFKFORWBDTQDMNXTRZIPBILXEDXQQ");
    const signed char tmp_msg_0[] = {62, 34, 90, -98, -85, -17, 37, 45, 73, -34, -110, 63, -36, -108, -13, 111, 5, -77, -27, -58, 56, -103, -125, -93, 19, -64, 117, 123, 42, -67, 113, -49, -116, 70, 59, -75, 5, -31, 6, 16, -63, -102, 79, -7, -105, -50, 91, 26, 77, -107, -79};
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
    msg.setTimeStamp(0.2918844211366638);
    msg.setSource(2037U);
    msg.setSourceEntity(128U);
    msg.setDestination(59970U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.9420436638038618);
    msg.setSource(10219U);
    msg.setSourceEntity(190U);
    msg.setDestination(19354U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.9600377102238834);
    msg.setSource(37443U);
    msg.setSourceEntity(23U);
    msg.setDestination(39398U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.6830859779467919);
    msg.setSource(40813U);
    msg.setSourceEntity(1U);
    msg.setDestination(18957U);
    msg.setDestinationEntity(155U);
    msg.target = 21034U;
    msg.bearing = 0.5906382753270328;
    msg.elevation = 0.49329682292279087;

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
    msg.setTimeStamp(0.2032823759243031);
    msg.setSource(38676U);
    msg.setSourceEntity(203U);
    msg.setDestination(53588U);
    msg.setDestinationEntity(192U);
    msg.target = 14756U;
    msg.bearing = 0.4526772203874724;
    msg.elevation = 0.7272892875943628;

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
    msg.setTimeStamp(0.4106686472117814);
    msg.setSource(49400U);
    msg.setSourceEntity(116U);
    msg.setDestination(48578U);
    msg.setDestinationEntity(211U);
    msg.target = 32901U;
    msg.bearing = 0.11438045206610092;
    msg.elevation = 0.15537209838535715;

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
    msg.setTimeStamp(0.8583877516910376);
    msg.setSource(19290U);
    msg.setSourceEntity(250U);
    msg.setDestination(59353U);
    msg.setDestinationEntity(30U);
    msg.target = 5153U;
    msg.x = 0.7944357031083424;
    msg.y = 0.06166117056943465;
    msg.z = 0.6031609972109974;

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
    msg.setTimeStamp(0.6649542250474836);
    msg.setSource(37089U);
    msg.setSourceEntity(206U);
    msg.setDestination(64527U);
    msg.setDestinationEntity(86U);
    msg.target = 33362U;
    msg.x = 0.13259981253324793;
    msg.y = 0.6668007366917605;
    msg.z = 0.5637843942741948;

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
    msg.setTimeStamp(0.007376897498099444);
    msg.setSource(57025U);
    msg.setSourceEntity(249U);
    msg.setDestination(54635U);
    msg.setDestinationEntity(129U);
    msg.target = 3039U;
    msg.x = 0.7969575899416994;
    msg.y = 0.4678947104748127;
    msg.z = 0.6989573509502099;

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
    msg.setTimeStamp(0.06587963905616367);
    msg.setSource(23858U);
    msg.setSourceEntity(32U);
    msg.setDestination(31673U);
    msg.setDestinationEntity(5U);
    msg.target = 4574U;
    msg.lat = 0.5479299655471601;
    msg.lon = 0.8845622902806491;
    msg.z_units = 173U;
    msg.z = 0.416616464128145;

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
    msg.setTimeStamp(0.8806026918695106);
    msg.setSource(50125U);
    msg.setSourceEntity(231U);
    msg.setDestination(23163U);
    msg.setDestinationEntity(225U);
    msg.target = 61737U;
    msg.lat = 0.16234097703762962;
    msg.lon = 0.44466781120134846;
    msg.z_units = 202U;
    msg.z = 0.027532970831435355;

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
    msg.setTimeStamp(0.9995952947666457);
    msg.setSource(44028U);
    msg.setSourceEntity(139U);
    msg.setDestination(5221U);
    msg.setDestinationEntity(202U);
    msg.target = 49895U;
    msg.lat = 0.7780722382980002;
    msg.lon = 0.05824875323512013;
    msg.z_units = 106U;
    msg.z = 0.8212149243079601;

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
    msg.setTimeStamp(0.6569976713639771);
    msg.setSource(29823U);
    msg.setSourceEntity(183U);
    msg.setDestination(59757U);
    msg.setDestinationEntity(224U);
    msg.locale.assign("YVWDPHZROHNLAZOIQMQMJCSTRIGCABDVLFMG");
    const signed char tmp_msg_0[] = {-73, -66, -116, 60, 25, -1, -59, -29, -117, 87, 103, -93, -116, -70, -82, -100, -39, -92, 88, 62, -34};
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
    msg.setTimeStamp(0.8979546403643014);
    msg.setSource(9890U);
    msg.setSourceEntity(68U);
    msg.setDestination(36507U);
    msg.setDestinationEntity(38U);
    msg.locale.assign("JWWHAPWUROESYO");
    const signed char tmp_msg_0[] = {-110, -100, 113, -125, 114, 13, -4, -80, -85, 90, 46, 88, -88, -58, -68, -71, 100, 36, -37, 57, -100, 123, 110, 38, -112, 25, 44, -96, -9, -23, -117, 30, -120, 42, -21, 70, 74, -60, 52, -66, 82, 56, 58, 113, 50, -126, -61, -65, 57, -95, 50, -53, -17, 74, -62, 47, 64, -84, -97, 59, 49, 94, 74, 3, -78, -22, 123, 95, -128, 107, 84, -105, -11, -81, -74, -6, -76, 56, 4, -42, 79, 85, 124, 74, 111, 87, -1, 55, 38, 105, 25, 83, 29, -56, -33, -125, -103, -83, -29, -18, -114, 36, -53, -89, -6, -64, -8, -70, 24, 91, -79, 116, -55, -96, 66, 36, 97, -33, -49, -27, -67, -104, -100, 97, 39, 96, 27, -128, 44, -109, -57, -103, 32, 8, -6, -64, -114, 113, 72, 101, 32, 58, -93, -56, 23, 17, -45, -116, -44};
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
    msg.setTimeStamp(0.96861518622344);
    msg.setSource(38818U);
    msg.setSourceEntity(22U);
    msg.setDestination(49443U);
    msg.setDestinationEntity(77U);
    msg.locale.assign("LETWMSATFVUEGASXAHDIIZHAJWCPSTOEVPXYZHMLZLNWPQVZNQEBYODYJJBOKDWIWFSMAUSLDMEMOCGJVANMTLZISHGQFXHTGQTVIRGBBODRMYBMKAWPXXIIEMFWZRPWXXNCHLUQFFULNFZZJORYTJIDBVPYQYCYKOVSCEMNVRZDNJLKSHNJQ");
    const signed char tmp_msg_0[] = {-30, -12, -73, -62, 8, -27, -6, 78, 62, 27, 94, -22, -50, -108, -13, 126, -78, 7, -96, 92, 36, -48, -63, -41, -43, -54, -85, -99, -110, 37, -57, -69, -74, -122, -13, 1, 36, -9, -74, 100, 15, 72, -103, -119};
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
    msg.setTimeStamp(0.3440387429269919);
    msg.setSource(40599U);
    msg.setSourceEntity(23U);
    msg.setDestination(63980U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.8630644237298337);
    msg.setSource(8429U);
    msg.setSourceEntity(184U);
    msg.setDestination(64470U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.7997921733884638);
    msg.setSource(32041U);
    msg.setSourceEntity(55U);
    msg.setDestination(64019U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.1381255588669057);
    msg.setSource(55887U);
    msg.setSourceEntity(51U);
    msg.setDestination(10851U);
    msg.setDestinationEntity(90U);
    msg.camid = 238U;
    msg.x = 2738U;
    msg.y = 14675U;

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
    msg.setTimeStamp(0.9959566878614553);
    msg.setSource(610U);
    msg.setSourceEntity(247U);
    msg.setDestination(64870U);
    msg.setDestinationEntity(241U);
    msg.camid = 219U;
    msg.x = 17484U;
    msg.y = 34755U;

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
    msg.setTimeStamp(0.5182344931301478);
    msg.setSource(48737U);
    msg.setSourceEntity(2U);
    msg.setDestination(24456U);
    msg.setDestinationEntity(35U);
    msg.camid = 86U;
    msg.x = 51043U;
    msg.y = 53277U;

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
    msg.setTimeStamp(0.25521227197314433);
    msg.setSource(54875U);
    msg.setSourceEntity(31U);
    msg.setDestination(48322U);
    msg.setDestinationEntity(179U);
    msg.camid = 49U;
    msg.x = 21723U;
    msg.y = 22081U;

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
    msg.setTimeStamp(0.8507862626375887);
    msg.setSource(21150U);
    msg.setSourceEntity(193U);
    msg.setDestination(16564U);
    msg.setDestinationEntity(85U);
    msg.camid = 156U;
    msg.x = 50664U;
    msg.y = 14740U;

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
    msg.setTimeStamp(0.5565960434861813);
    msg.setSource(10515U);
    msg.setSourceEntity(143U);
    msg.setDestination(17166U);
    msg.setDestinationEntity(83U);
    msg.camid = 240U;
    msg.x = 50550U;
    msg.y = 57893U;

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
    msg.setTimeStamp(0.35518756041046307);
    msg.setSource(38567U);
    msg.setSourceEntity(206U);
    msg.setDestination(52855U);
    msg.setDestinationEntity(24U);
    msg.tracking = 4U;
    msg.lat = 0.5197529218757497;
    msg.lon = 0.878608604433703;
    msg.x = 0.2900036368298222;
    msg.y = 0.774373768475572;
    msg.z = 0.3660346449091152;

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
    msg.setTimeStamp(0.9951735215607784);
    msg.setSource(36742U);
    msg.setSourceEntity(176U);
    msg.setDestination(20510U);
    msg.setDestinationEntity(234U);
    msg.tracking = 189U;
    msg.lat = 0.13514754200714463;
    msg.lon = 0.001215469612519171;
    msg.x = 0.363982446415858;
    msg.y = 0.22567190328048004;
    msg.z = 0.9402889862957925;

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
    msg.setTimeStamp(0.4733541167129406);
    msg.setSource(48040U);
    msg.setSourceEntity(189U);
    msg.setDestination(51915U);
    msg.setDestinationEntity(220U);
    msg.tracking = 172U;
    msg.lat = 0.8428009595102357;
    msg.lon = 0.6858440754065003;
    msg.x = 0.38184925265353264;
    msg.y = 0.22240465898927742;
    msg.z = 0.8473515702101453;

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
    msg.setTimeStamp(0.722692511059379);
    msg.setSource(32438U);
    msg.setSourceEntity(36U);
    msg.setDestination(50817U);
    msg.setDestinationEntity(145U);
    msg.target.assign("VIDEWGILZPIEQSMDTUZSWGHDRJRLHYFMJBNZLMQIUWDAIZNYHSVYSLAMVHIJSJQMCENIGTOYRKYENPHYCERZUAMCPFFFXUWBJTQCPOFNWIZADEVKIXAWLATUTL");
    msg.lbearing = 0.7316501603423802;
    msg.lelevation = 0.7059423380226056;
    msg.bearing = 0.9378392284213785;
    msg.elevation = 0.6841026720173525;
    msg.phi = 0.9804760446609531;
    msg.theta = 0.5461569861204593;
    msg.psi = 0.030213105102360305;
    msg.accuracy = 0.741763281820426;

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
    msg.setTimeStamp(0.15990209893245322);
    msg.setSource(5278U);
    msg.setSourceEntity(234U);
    msg.setDestination(56780U);
    msg.setDestinationEntity(103U);
    msg.target.assign("IHNPOLIKGFZDXTNBNFVAYRZOYFIRSUDZZKHLJWKYRVDRELFMUBTLEGIEKGJBQVQSAAZHSNCKJAFTPXEQPZUCFJXKWNHDVANLDYOWCWQGGHPNLMDRLOWCGYOTCTRHZLEJMCMMUXRINPYBFCVYMKKHJQCTSDLVFPHXAGVGYWZNEOXFBXVSLIFUT");
    msg.lbearing = 0.26812900837072706;
    msg.lelevation = 0.1302401173405111;
    msg.bearing = 0.4201559999412289;
    msg.elevation = 0.1469728784164296;
    msg.phi = 0.5920582738029326;
    msg.theta = 0.9866420586897269;
    msg.psi = 0.030905282535943934;
    msg.accuracy = 0.9534006914490297;

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
    msg.setTimeStamp(0.7181504942255323);
    msg.setSource(4664U);
    msg.setSourceEntity(147U);
    msg.setDestination(63937U);
    msg.setDestinationEntity(88U);
    msg.target.assign("PLMRQYXAMSJCLCWSIJIXN");
    msg.lbearing = 0.7203065162152337;
    msg.lelevation = 0.2929557468152464;
    msg.bearing = 0.2688270463127519;
    msg.elevation = 0.585069095792091;
    msg.phi = 0.40733219381041763;
    msg.theta = 0.33285469155127023;
    msg.psi = 0.03188497889488351;
    msg.accuracy = 0.3780583720548749;

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
    msg.setTimeStamp(0.8088238676147138);
    msg.setSource(33491U);
    msg.setSourceEntity(172U);
    msg.setDestination(51876U);
    msg.setDestinationEntity(85U);
    msg.target.assign("KRAFTXBRMJGCXYNNPAJERYQGANTUZFXICRWLQFYGDTTAHTBQTYKNIMXGEMVGWWVAYVKKNSPFLABLHXHBZUQEOOZBSJJHBBRWHEYVXOWCMWEKRSSNDWNPAOVFYQADCEIQNWDMHEPZGDBRZOTXZLJPMJMYBKCFZIGSOMXDZSRISUDFSMUPQGIPKFUTCYCFD");
    msg.x = 0.9917722578788826;
    msg.y = 0.15029912714406646;
    msg.z = 0.3779911820799532;
    msg.n = 0.6826318205232794;
    msg.e = 0.23435064663026473;
    msg.d = 0.8820262280627508;
    msg.phi = 0.17227933001785833;
    msg.theta = 0.6685243333666144;
    msg.psi = 0.2933488570392302;
    msg.accuracy = 0.4157312391070066;

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
    msg.setTimeStamp(0.7607696719651874);
    msg.setSource(50535U);
    msg.setSourceEntity(13U);
    msg.setDestination(19096U);
    msg.setDestinationEntity(153U);
    msg.target.assign("NVJTTUJXZSRLOFAEBZKYKWHQGZLHMQSUPVCBMNFLCSYOBJRVYJAEPTHXJYEEAPBNWFPLKIBSVTVGRQSWPHSUDDUEAGSEMJWLM");
    msg.x = 0.06871202342177096;
    msg.y = 0.03355747593290104;
    msg.z = 0.9280588770708087;
    msg.n = 0.38209516832718515;
    msg.e = 0.7487796305823885;
    msg.d = 0.2407260607020133;
    msg.phi = 0.7183560273218871;
    msg.theta = 0.0773659515391979;
    msg.psi = 0.9686320364649141;
    msg.accuracy = 0.9194068618953082;

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
    msg.setTimeStamp(0.6393613973237178);
    msg.setSource(27421U);
    msg.setSourceEntity(160U);
    msg.setDestination(50417U);
    msg.setDestinationEntity(236U);
    msg.target.assign("HYABZAJXIWJRPFLWJIEKTFSUEXITYOPXIDMKSVOGTAAWKRWYLDCUAGUTEVBHFFPSMPXVFADQIQJBLVQZIHQFOJWNLGEYBQCEOABPWRCDHTTTZLDCRQSUDNYOKAMMIIPYRRLRBEXNMUAPTHZOJGCSXQVJSDGZSBZDKRTNLNN");
    msg.x = 0.594034521784647;
    msg.y = 0.8682265482056863;
    msg.z = 0.9894736807807067;
    msg.n = 0.3906516700621572;
    msg.e = 0.8790845373435843;
    msg.d = 0.7336817203604685;
    msg.phi = 0.06164517146941151;
    msg.theta = 0.2456073511965311;
    msg.psi = 0.39543327513066895;
    msg.accuracy = 0.9491507104961595;

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
    msg.setTimeStamp(0.5411974430372013);
    msg.setSource(43126U);
    msg.setSourceEntity(64U);
    msg.setDestination(6104U);
    msg.setDestinationEntity(209U);
    msg.target.assign("QQVMDZZDNSOPREYPLABOLAKFLMCRWUKNCZXYFNBQJCLQAGFIDHARRQNBAPEZGTNEQTGSDMVNHWIRCGUBODQYKJHRMSDRKFYZBBOPAQNMWEUUASKWVDLEALMBXYJWHFUOWPKSJFIZJYJTXTXMTKJXUGHLHQIXODNXJUBXUFPVVBEWEZHGCPGVOCXKBLNCITMVSOVTEOWVMI");
    msg.lat = 0.36795872387227957;
    msg.lon = 0.222358268244215;
    msg.z_units = 167U;
    msg.z = 0.33442489847807544;
    msg.accuracy = 0.5919050643911477;

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
    msg.setTimeStamp(0.9942161025349642);
    msg.setSource(54614U);
    msg.setSourceEntity(121U);
    msg.setDestination(16805U);
    msg.setDestinationEntity(8U);
    msg.target.assign("AIOVYUBQFDZRJKDZMGHCWTQYZICRLSOAIOQZHLVTVDGSKEMTSUWYTSXOPURKLJSDFCZJJUYVJGWXNCIWWXYJDKRIGVUKAYQUKTEWGXTEMLUEIBZTAYNUKGSBBBLJTROMFC");
    msg.lat = 0.6316302643387608;
    msg.lon = 0.5506090305930418;
    msg.z_units = 110U;
    msg.z = 0.4286596485574885;
    msg.accuracy = 0.6546911197901634;

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
    msg.setTimeStamp(0.26250687182764854);
    msg.setSource(53651U);
    msg.setSourceEntity(12U);
    msg.setDestination(48048U);
    msg.setDestinationEntity(250U);
    msg.target.assign("EUBVJOJCWUBAUXZVHUGNNXDXNKLLMVHYFTRMGO");
    msg.lat = 0.07318474502250394;
    msg.lon = 0.4259134026076715;
    msg.z_units = 168U;
    msg.z = 0.0975091187921393;
    msg.accuracy = 0.23478996145539766;

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
    msg.setTimeStamp(0.9168416984402133);
    msg.setSource(23694U);
    msg.setSourceEntity(9U);
    msg.setDestination(64985U);
    msg.setDestinationEntity(81U);
    msg.name.assign("MDOKNFFTVELBXGYPKKMFYVZOBDJRBHGAHXSEENQXNASLZMORGUCLZCAFVGAFQFQV");
    msg.lat = 0.7649168798090739;
    msg.lon = 0.9423453433011625;
    msg.z = 0.7837502561666363;
    msg.z_units = 112U;

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
    msg.setTimeStamp(0.22589625243714373);
    msg.setSource(63550U);
    msg.setSourceEntity(185U);
    msg.setDestination(63224U);
    msg.setDestinationEntity(111U);
    msg.name.assign("DZGIRSYCQKQYGDXRNGBQBJRNTPKAADCPOZHQKSKISMGIFPWLZLVYAZAWNTNEAXFOHOZPLFMMPMUQCPXQTIDNQKSRNWJXXISRJVHEHK");
    msg.lat = 0.6254637392713449;
    msg.lon = 0.9853222516398558;
    msg.z = 0.7354443564057428;
    msg.z_units = 180U;

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
    msg.setTimeStamp(0.19555911371876644);
    msg.setSource(65369U);
    msg.setSourceEntity(61U);
    msg.setDestination(63993U);
    msg.setDestinationEntity(251U);
    msg.name.assign("KVPMIEYHOSFRAUZOSHHEDRMVVMJBOFVUGLKFKFILVMYPXTZKGXGZLONULSCRTHUIVPUSQVCLYZGNTEZBJJRGWJFASHKBAIJNBQMYDDNRCMAOLMNTXDPYZIKNZCQASEASYJWJYVTRAXYAUHQWOMVUWMBEGFBQKRIEMPBDGBSLGC");
    msg.lat = 0.7037489376624727;
    msg.lon = 0.43228626561435146;
    msg.z = 0.03254220361787452;
    msg.z_units = 101U;

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
    msg.setTimeStamp(0.2381426791631447);
    msg.setSource(51679U);
    msg.setSourceEntity(156U);
    msg.setDestination(2747U);
    msg.setDestinationEntity(1U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.2530460569341644);
    msg.setSource(64237U);
    msg.setSourceEntity(252U);
    msg.setDestination(6248U);
    msg.setDestinationEntity(116U);
    msg.op = 248U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ZXVADTCXLIVALLFZWEPUPEVUNPNTBPOZIXQYXBQZYSKJDGMIWOZYPQWKQYDEDCISRWZYVSAQFRIERTBPVQIGNWDPBXRRTGFVFMFQVFOJLAIXCYBHSQDSDHLHOJAOM");
    tmp_msg_0.lat = 0.08994687999442119;
    tmp_msg_0.lon = 0.21253501223997606;
    tmp_msg_0.z = 0.25517486566821546;
    tmp_msg_0.z_units = 163U;
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
    msg.setTimeStamp(0.21464644639079988);
    msg.setSource(4144U);
    msg.setSourceEntity(38U);
    msg.setDestination(16954U);
    msg.setDestinationEntity(9U);
    msg.op = 55U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("SGKSKHMQPQTIIDBSJELYSZDCNANDNPMQOZAUZTQFYPLDNCEMDQKLDJKQQQFKJVFSEFYBOXGIUKJWXCKANEIFILIUFBGYMCGVGPJTOBMHCRBJOFGIXZZFWNGGMLLBAVASEOORRRBEUTSFBUHUULDERHUDKTYYWDPXOCPOZZEEUZKIWSTTWFHNAXUAYOTWMMNATVVXKYVXTLLXVJRCARHCRPGOHASEBYQIRMPRHIXHWZSJWNCNVLWJWHBY");
    tmp_msg_0.lat = 0.9824592098747025;
    tmp_msg_0.lon = 0.006273682666735336;
    tmp_msg_0.z = 0.7309284933268225;
    tmp_msg_0.z_units = 173U;
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
    msg.setTimeStamp(0.6482868210396904);
    msg.setSource(24876U);
    msg.setSourceEntity(224U);
    msg.setDestination(41658U);
    msg.setDestinationEntity(223U);
    msg.value = 0.9249927955028775;
    msg.type = 74U;

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
    msg.setTimeStamp(0.928187247885953);
    msg.setSource(60557U);
    msg.setSourceEntity(49U);
    msg.setDestination(50381U);
    msg.setDestinationEntity(225U);
    msg.value = 0.3802994054914606;
    msg.type = 60U;

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
    msg.setTimeStamp(0.15376158954679875);
    msg.setSource(5502U);
    msg.setSourceEntity(200U);
    msg.setDestination(43774U);
    msg.setDestinationEntity(171U);
    msg.value = 0.12420188806574839;
    msg.type = 237U;

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
    msg.setTimeStamp(0.14117249584082903);
    msg.setSource(17536U);
    msg.setSourceEntity(243U);
    msg.setDestination(18379U);
    msg.setDestinationEntity(210U);
    msg.value = 0.6365436733251258;

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
    msg.setTimeStamp(0.4725355098656938);
    msg.setSource(51812U);
    msg.setSourceEntity(114U);
    msg.setDestination(41681U);
    msg.setDestinationEntity(249U);
    msg.value = 0.7524337026937846;

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
    msg.setTimeStamp(0.683948345494979);
    msg.setSource(11275U);
    msg.setSourceEntity(73U);
    msg.setDestination(534U);
    msg.setDestinationEntity(212U);
    msg.value = 0.6093592150086786;

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
    msg.setTimeStamp(0.17455034841742956);
    msg.setSource(11286U);
    msg.setSourceEntity(227U);
    msg.setDestination(11533U);
    msg.setDestinationEntity(34U);
    msg.timestamp_last_service = 0.3599105135238738;
    msg.time_next_service = 0.29974730886354806;
    msg.time_motor_next_service = 0.8829115139564756;
    msg.time_idle_ground = 0.49206537831131636;
    msg.time_idle_air = 0.09731390381242266;
    msg.time_idle_water = 0.9835636741565313;
    msg.time_idle_underwater = 0.3178563195925017;
    msg.time_idle_unknown = 0.7619082271338979;
    msg.time_motor_ground = 0.5507856126285849;
    msg.time_motor_air = 0.6973287414428309;
    msg.time_motor_water = 0.6378661255785892;
    msg.time_motor_underwater = 0.2596281901430828;
    msg.time_motor_unknown = 0.17003476062825218;
    msg.rpm_min = -11964;
    msg.rpm_max = -17905;
    msg.depth_max = 0.2272652515295439;

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
    msg.setTimeStamp(0.8377511165675998);
    msg.setSource(17526U);
    msg.setSourceEntity(131U);
    msg.setDestination(21132U);
    msg.setDestinationEntity(44U);
    msg.timestamp_last_service = 0.6407559368689035;
    msg.time_next_service = 0.1243938102301253;
    msg.time_motor_next_service = 0.5370194485490848;
    msg.time_idle_ground = 0.37470165243790776;
    msg.time_idle_air = 0.233454202267535;
    msg.time_idle_water = 0.08197707698995504;
    msg.time_idle_underwater = 0.9447275362490267;
    msg.time_idle_unknown = 0.7121158814854631;
    msg.time_motor_ground = 0.18269705287202997;
    msg.time_motor_air = 0.9126588262975329;
    msg.time_motor_water = 0.17021177538762755;
    msg.time_motor_underwater = 0.4554551600702281;
    msg.time_motor_unknown = 0.619216458089299;
    msg.rpm_min = 29549;
    msg.rpm_max = -25686;
    msg.depth_max = 0.16019701043481016;

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
    msg.setTimeStamp(0.5363225895452529);
    msg.setSource(51046U);
    msg.setSourceEntity(248U);
    msg.setDestination(17585U);
    msg.setDestinationEntity(169U);
    msg.timestamp_last_service = 0.12244785749649667;
    msg.time_next_service = 0.9025467139227419;
    msg.time_motor_next_service = 0.5995965276159628;
    msg.time_idle_ground = 0.6131752270298999;
    msg.time_idle_air = 0.39402842664915005;
    msg.time_idle_water = 0.23180952329719684;
    msg.time_idle_underwater = 0.5891839366888679;
    msg.time_idle_unknown = 0.18009306928232993;
    msg.time_motor_ground = 0.9911232115053092;
    msg.time_motor_air = 0.9378516575071408;
    msg.time_motor_water = 0.6802134205803599;
    msg.time_motor_underwater = 0.8767506779041679;
    msg.time_motor_unknown = 0.10839426017024634;
    msg.rpm_min = 11961;
    msg.rpm_max = 26594;
    msg.depth_max = 0.528890830589299;

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
    msg.setTimeStamp(0.8373270295442403);
    msg.setSource(8671U);
    msg.setSourceEntity(187U);
    msg.setDestination(39102U);
    msg.setDestinationEntity(229U);
    msg.severity = 214U;
    msg.text.assign("MYUVYMCWHIAGPGRDAVHVUJKIBESDQOFRBNQNJPCURHDVOPRROCAJWGMJWEUIOFPOLHVYMPLRXLQWIBGHKFZCYKQUXNJXHOWWIFCLEFGANNENBRO");

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
    msg.setTimeStamp(0.14673418084926526);
    msg.setSource(21875U);
    msg.setSourceEntity(215U);
    msg.setDestination(51294U);
    msg.setDestinationEntity(150U);
    msg.severity = 237U;
    msg.text.assign("ETSAPZILZKIIKAKMTLQPYSCJMVCX");

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
    msg.setTimeStamp(0.07034248667065157);
    msg.setSource(24456U);
    msg.setSourceEntity(172U);
    msg.setDestination(59035U);
    msg.setDestinationEntity(115U);
    msg.severity = 87U;
    msg.text.assign("RKEVRHBABWTFPTSQJNUOASPXXN");

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
    msg.setTimeStamp(0.22886302003225267);
    msg.setSource(35948U);
    msg.setSourceEntity(152U);
    msg.setDestination(33754U);
    msg.setDestinationEntity(120U);
    msg.channel = 58;
    msg.value = -541185981;
    msg.gain = 34U;

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
    msg.setTimeStamp(0.1478059129079895);
    msg.setSource(35682U);
    msg.setSourceEntity(24U);
    msg.setDestination(7509U);
    msg.setDestinationEntity(214U);
    msg.channel = 17;
    msg.value = 568557648;
    msg.gain = 10U;

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
    msg.setTimeStamp(0.6907870074633833);
    msg.setSource(25560U);
    msg.setSourceEntity(162U);
    msg.setDestination(3300U);
    msg.setDestinationEntity(4U);
    msg.channel = -22;
    msg.value = 1665193333;
    msg.gain = 85U;

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
    msg.setTimeStamp(0.49113199381459705);
    msg.setSource(48104U);
    msg.setSourceEntity(36U);
    msg.setDestination(4673U);
    msg.setDestinationEntity(158U);
    msg.ch01 = 0.522004956461202;
    msg.ch02 = 0.7434012290251905;
    msg.ch03 = 0.7346892632846815;
    msg.ch04 = 0.8787667196141813;
    msg.ch05 = 0.5859053970192499;
    msg.ch06 = 0.2231371537384651;
    msg.ch07 = 0.2940766731748412;
    msg.ch08 = 0.8096504247140848;
    msg.ch09 = 0.7666964656431068;
    msg.ch10 = 0.5482856128682775;
    msg.ch11 = 0.9317155642369098;
    msg.ch12 = 0.5842650711200008;
    msg.ch13 = 0.639104156100299;
    msg.ch14 = 0.5666004780369381;
    msg.ch15 = 0.38189669674161864;
    msg.ch16 = 0.7633630957942106;

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
    msg.setTimeStamp(0.42740841729883106);
    msg.setSource(52643U);
    msg.setSourceEntity(60U);
    msg.setDestination(21286U);
    msg.setDestinationEntity(72U);
    msg.ch01 = 0.38980487559656884;
    msg.ch02 = 0.9323887107660135;
    msg.ch03 = 0.6300815909456667;
    msg.ch04 = 0.43788251612695406;
    msg.ch05 = 0.9502825949678896;
    msg.ch06 = 0.9629318640089323;
    msg.ch07 = 0.6575001698036251;
    msg.ch08 = 0.6486332552068258;
    msg.ch09 = 0.39405186369108025;
    msg.ch10 = 0.971342235740075;
    msg.ch11 = 0.22569547433115045;
    msg.ch12 = 0.41229764206795017;
    msg.ch13 = 0.37648962151165777;
    msg.ch14 = 0.14562491142482947;
    msg.ch15 = 0.5672998244829451;
    msg.ch16 = 0.618296859895855;

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
    msg.setTimeStamp(0.3752876664590308);
    msg.setSource(34663U);
    msg.setSourceEntity(167U);
    msg.setDestination(44979U);
    msg.setDestinationEntity(54U);
    msg.ch01 = 0.7125583255176865;
    msg.ch02 = 0.8616639670634089;
    msg.ch03 = 0.17613815731295368;
    msg.ch04 = 0.5755338109903116;
    msg.ch05 = 0.9770582086164692;
    msg.ch06 = 0.21188180550540903;
    msg.ch07 = 0.9446446747390964;
    msg.ch08 = 0.081026800908233;
    msg.ch09 = 0.6894977184078619;
    msg.ch10 = 0.145978885448523;
    msg.ch11 = 0.21260246095162671;
    msg.ch12 = 0.058360300179265856;
    msg.ch13 = 0.7427341015847948;
    msg.ch14 = 0.8462650587740601;
    msg.ch15 = 0.7848949738819101;
    msg.ch16 = 0.9625376139932423;

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
    msg.setTimeStamp(0.32063887496597554);
    msg.setSource(2209U);
    msg.setSourceEntity(117U);
    msg.setDestination(37851U);
    msg.setDestinationEntity(104U);
    msg.op = 101U;
    msg.lat = 0.18003631672469866;
    msg.lon = 0.758323334475999;
    msg.height = 0.2420566585554189;
    msg.depth = 0.09375474288395802;
    msg.alt = 0.05589544662937007;

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
    msg.setTimeStamp(0.7236562162634376);
    msg.setSource(14373U);
    msg.setSourceEntity(217U);
    msg.setDestination(47212U);
    msg.setDestinationEntity(222U);
    msg.op = 108U;
    msg.lat = 0.9766778900550818;
    msg.lon = 0.7434409044264593;
    msg.height = 0.64304404295006;
    msg.depth = 0.6942744125907402;
    msg.alt = 0.21188051743478054;

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
    msg.setTimeStamp(0.24285625139922307);
    msg.setSource(32438U);
    msg.setSourceEntity(73U);
    msg.setDestination(754U);
    msg.setDestinationEntity(55U);
    msg.op = 142U;
    msg.lat = 0.24037304875626087;
    msg.lon = 0.5258064960707332;
    msg.height = 0.25116774177366585;
    msg.depth = 0.6011365913877358;
    msg.alt = 0.9441076315447107;

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
    msg.setTimeStamp(0.6524992969926429);
    msg.setSource(19110U);
    msg.setSourceEntity(15U);
    msg.setDestination(54825U);
    msg.setDestinationEntity(20U);
    msg.nbeams = 187U;
    msg.ncells = 167U;
    msg.coord_sys = 16U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.5471123273480608;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.2070942947915062;
    tmp_tmp_msg_0_0.amp = 0.5185885411505607;
    tmp_tmp_msg_0_0.cor = 120U;
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
    msg.setTimeStamp(0.654377570232822);
    msg.setSource(28829U);
    msg.setSourceEntity(40U);
    msg.setDestination(5988U);
    msg.setDestinationEntity(218U);
    msg.nbeams = 125U;
    msg.ncells = 11U;
    msg.coord_sys = 27U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.6514759368156544;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.27991683372312004;
    tmp_tmp_msg_0_0.amp = 0.9942464995619562;
    tmp_tmp_msg_0_0.cor = 248U;
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
    msg.setTimeStamp(0.14312304877413895);
    msg.setSource(34766U);
    msg.setSourceEntity(46U);
    msg.setDestination(43229U);
    msg.setDestinationEntity(252U);
    msg.nbeams = 105U;
    msg.ncells = 228U;
    msg.coord_sys = 108U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.11935281116117813;
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9144239798640467);
    msg.setSource(16741U);
    msg.setSourceEntity(138U);
    msg.setDestination(35002U);
    msg.setDestinationEntity(189U);
    msg.cell_position = 0.2576899393508525;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.9922842435973538;
    tmp_msg_0.amp = 0.9646702725346351;
    tmp_msg_0.cor = 12U;
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
    msg.setTimeStamp(0.08406236119727706);
    msg.setSource(31928U);
    msg.setSourceEntity(229U);
    msg.setDestination(39603U);
    msg.setDestinationEntity(60U);
    msg.cell_position = 0.5715929466273405;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.0613894449850656;
    tmp_msg_0.amp = 0.213777688094268;
    tmp_msg_0.cor = 85U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.54203397264791);
    msg.setSource(55818U);
    msg.setSourceEntity(207U);
    msg.setDestination(14254U);
    msg.setDestinationEntity(48U);
    msg.cell_position = 0.5480920925919638;

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
    msg.setTimeStamp(0.3151723042003237);
    msg.setSource(22369U);
    msg.setSourceEntity(3U);
    msg.setDestination(36811U);
    msg.setDestinationEntity(60U);
    msg.vel = 0.07155477381907849;
    msg.amp = 0.2990703915061502;
    msg.cor = 163U;

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
    msg.setTimeStamp(0.18206905012639274);
    msg.setSource(57026U);
    msg.setSourceEntity(206U);
    msg.setDestination(46163U);
    msg.setDestinationEntity(236U);
    msg.vel = 0.8680326244424444;
    msg.amp = 0.8327907838716612;
    msg.cor = 214U;

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
    msg.setTimeStamp(0.5590072105937157);
    msg.setSource(19473U);
    msg.setSourceEntity(23U);
    msg.setDestination(48553U);
    msg.setDestinationEntity(224U);
    msg.vel = 0.5043372496907156;
    msg.amp = 0.7475837922408615;
    msg.cor = 192U;

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
    IMC::HTTPRequest msg;
    msg.setTimeStamp(0.4420827398245648);
    msg.setSource(59462U);
    msg.setSourceEntity(207U);
    msg.setDestination(56507U);
    msg.setDestinationEntity(74U);
    msg.rid = 5010U;
    msg.host.assign("VUYUIRDBOTTGTOPRLXYIZCEZCSGBNDLOCTSYPZXROSJKXJFYJOMDBXYJGDBFTMMTRWJUNOMKKKPQPRREVWKEAZIMWVXPNOUPVYDBQITNVASEOQQFPTHWS");
    msg.path.assign("OVUYLAYGQVEJWOLZUZJGBQRXVNOBLTAHIBRUFLILTWRBLXOGVMNTWSQAEIFDQEBOOWJCYKNITCPXQSCJPDXMGUMTWTHXEICMZVZDGEHKLBEQWFWDRQUAONRLSDIZYKTGXSPZFATMLVCHJUKAXRNIGXYNYBBSKDQYGBCS");
    msg.query.assign("LVZOTPNWANRHQAFISXERUEJLYKNJIKDZHRXRUPMJQUEMHRLWMQAAUNMYOTTDVZLVRN");
    const signed char tmp_msg_0[] = {-79, 56, 43, 110, 36, -62, 12, 17, 33, -127, 120, 72, 68, 112, 41, -94, -83, -53, -92, -59, -66, 107, 109, -8, -76, -120, -99, -78, -89, -107, 68, 65, 83, -65, 103, 54, -34, 44, -95, 94, -115, 28, 1, -69, 99, -11, -78, 90, -102, -28, 50, 81, 58, -109, -124, -8, 107, 98, -70, 56, -63, 114, -45};
    msg.body.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.type = 160U;
    msg.file_data.assign("NWMIUULTTZHUOLXVGVXFIKVHMXZFANCLMEMNCAINWVNHPXYCHPECAWSBCVBNORHLNGPZDIFGDWABBTSSYCPTUBSRAQQFQVYRUPPIKTBKSJWHZATQCWJJOVYSEFKEDEMHKVFOZJEHQGJFQGLAZOJRPJXCPTJZUDCYDKAGRMCRWIRFOYOXLDYELXJLZYNKDRUPEXNPKXRIZFQK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPRequest msg;
    msg.setTimeStamp(0.10176214097623992);
    msg.setSource(29998U);
    msg.setSourceEntity(185U);
    msg.setDestination(7701U);
    msg.setDestinationEntity(249U);
    msg.rid = 61290U;
    msg.host.assign("OHHKGKDQROCCZYMWTRMWNOYBHGACFMNQFOQKVMYGWWPSLUXPIIJUJTTOBLJNNIOZDHVWAHYUGAKKLRMIOHNTZFNTXZVGXULBYJDNKFCCPGDJJBXJEZOMKSUEOYQNOBTQZRRWUEWCEGPCIRMYPWCRQJMXJZDKLYDZXEUPLAKUBESBTVAVXHJATXWSMSBFILKSLAWVUMVPCIHRILPHGRTEZVVXCDFTUFHEBNFQEQRDSG");
    msg.path.assign("QLQWIZQJYZWKRMYTYCFVGENUUVONBYDUWVGUTZSPWBZTJIYMGRRPMBUSIASKFXTKASAMAAORKOHCVSHPDZIOXLFHODQUBKADZGRDVYACNKYZBTMPLIFPLNDBOGXCPWQJMHAHIHNDJNSTLLFXQTMXOHDENIKEDEVKAJOJLOKLFOFSEV");
    msg.query.assign("KWUKFTAYQHEJCUURMNFTTKRIYECOGRXLTBCVWVVTXEXZNPLQDJUVGZBXRDBLOZZSIYCDDDJHXAPKIYAEMMPCNPNMSOENYJFCIAMARVJMXLDWGCBOWHCSFBSEIVPCSBRUYZLYLELAZHIRFYHNSJHBOQHVQIOKVFAAHVAZYSILJGYLNWMGKWUGRFURNXTG");
    const signed char tmp_msg_0[] = {11, 121, 122, 58, 121, 28, 88, 123, -43, -106, 107, 98, 86, -64, -86, 42, 59, 58, -48, -83, -124, 110, 71, -118, -108, -93, -123, 46, -25, 122, -72, 110, 36, -45, -73, -20, 115, 30, 73, -109, -113, -128, -94, 9, -43, 13, 69, -14, 94, -33, 50, -99, -37, 109, 49, -112, 114, 11, 97, -62, -72, 105, 17, -128, 53, 74, 19, 8, -37, -82, -19, 81, 4, 54, 71, -42, -19, 64, 106, -124, -124, 37, 5, 13, 17, -30, 27, 50, 54, -67, 56, 26, 4, 111, 94, -41, 96, -18, 62, 124, 16, -45, 106, -38, 121, -28, -74, 65, 60, 83, 31, 35, 87, -3, -32, 49, -19, 9, -97, -94, -13, 60, 10, 38, 39, 56, -59, -124, -115, -85, -65, -9, -102, -44, 86, -99, 69, 21, -101, -14, -99, 51, 40, -31, 102, 64, 65, 24, -75, 100, -18, -115, 69, -58, -27, -111, -121, -54, 64, 122, -86, -86, -38, 77, -12, 65, -28, -53, 6};
    msg.body.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.type = 3U;
    msg.file_data.assign("ZPOBRKPHFZETTYQFNGYBMOQTBOYHJUAZVWUXEBSOHMFKTCRRSQWULIEWAQNIHJBMJBYRQSIGKVJYPOGCNYBZNNUJXSXAEMSBZJFGAFXDISXTKEPOPGGWRMHDJKGMTDMLLDCFDVZATZPONKISQLHWSZTAHNLHJQPJBYVQKTTALDIRDFPCRNOMZPSDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPRequest msg;
    msg.setTimeStamp(0.2215291600816267);
    msg.setSource(21036U);
    msg.setSourceEntity(230U);
    msg.setDestination(24803U);
    msg.setDestinationEntity(144U);
    msg.rid = 36172U;
    msg.host.assign("SSCOKUUODYDPVVNYDNGIDHYCXKXQSAUBOHZKRRMIPGWMBWKTUXLGYDQAHVCPUXLHSMKVLJXRCTVFHNPMWONFVWZVOJPKSBAZTEILEGQJUAHZJCTTDESYTNFWABMFGIIURQKQZVUFRPTDEYOORNGYYBQJEGOPMJFWMFNEBIFLNBHJZEPTCNLHBLJROIDCCPSGGARYYQWTXUQ");
    msg.path.assign("ZAIRTRPPIHMHFWXNEDVDJOZSFQGNSYLWGCHFLXARKFCLYUIXXUZNAUQXRVBTKZPHUDKHKXGEDSWEJQTKBFDNFSECAXYPOTLCQPCBWFIWKJOYNOZQOJAFWSLJCOIIBKTEULGRJRGGVYPZDYXERAGSJUGBAYCKZMARBPMESMYSGQVWBQKIVAKTNPDPHOOAMWGOBCMXXETFZDMUJIHRVJSFTQNHHJTQZMYMWEPUVYTUQCDMRSNLVBOUIWVDCZV");
    msg.query.assign("JBETTMSTNFUSUHECSDPZGQXDPHGZMEKKKDPHBJZOSZCMJBA");
    const signed char tmp_msg_0[] = {103, -29, 16, -105, -69, 81, 40, 17, 50, 3, 95, 61, 22, 122, -127, 8, -67, -19, -32, 8, 122, 121, 119, -93, -28, -18, 23, 9, -97, -28, 16, -77, -96, 64, 43, -86, 40, 85, -110, -10, 46, -65, 43, -119, 83, -45, 116, 86, -56, -59, 80, -51, 119, 39, 72, 10, 67, 41, -77, -124, -84, -88, 119, -93, 93, -38, -48, 110, 126, -6, 38, -16, 54, -120, 85, -109, 121, -18, -118, -34, 45, 111, -8, -5, -34, -40, 96, -21, -58, -58, 51, -52, 115, -5, -71, -49, -56, -56, 103, 112, -82, -27, 103, 1, 25, -36, -37, 80, 67, -7, -49, 34, -122, 40, -40, -16, 10, -7, -99, -45, -22, 106, -92, -52, 83, -20, 115, 106, 80, -117, 108, 106, 110, 125, 24, 117, -124, -49, -106, 73, -103, 104, 113, -13, 102, 11, -63, -80, 96, -65, -11, 49, -65, -43, -107, 0, -55, -93, -49, -50, 123, 79, 62, 55, 85, 56, -21};
    msg.body.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.type = 220U;
    msg.file_data.assign("YIXKMLXVPCBWOUZERSGPCAKEQTXGNLQGSUNOEKUQIETAFKWYJHHNNQXXGLBKKQGOWRQVDFSMNYXXFWJIJMCYNRTWVOAPLJXSDXHNIHWLZVEBIHSPIOKFIQJBUFNSLAKRIJEBRMONCTLDFDRDDPFPWVTHZMRZCXMUPYYPTLCMAJQZQKEEAFPUPZZHLTVFAOBGIARVJUWHFSMGTSHCAHJDGDUZOVDCGCJBZWYVUQDVEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPStatus msg;
    msg.setTimeStamp(0.11683399873933775);
    msg.setSource(34342U);
    msg.setSourceEntity(241U);
    msg.setDestination(52366U);
    msg.setDestinationEntity(29U);
    msg.rid = 48869U;
    msg.response.assign("FPPAORNYOAUGRTLQEGGYHXEWFRLSWBT");
    msg.status = 11420U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPStatus msg;
    msg.setTimeStamp(0.34971472571990503);
    msg.setSource(20181U);
    msg.setSourceEntity(21U);
    msg.setDestination(30809U);
    msg.setDestinationEntity(119U);
    msg.rid = 23706U;
    msg.response.assign("HDNNWAOULVHEIOELOOTDZEPSRGVYMANIIGGWNUHMATXBPXRYWUFYKMYFOGVOEIPFPCBFLKBWOITUTJNRSQ");
    msg.status = 48878U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPStatus msg;
    msg.setTimeStamp(0.3368973800232321);
    msg.setSource(2944U);
    msg.setSourceEntity(95U);
    msg.setDestination(59747U);
    msg.setDestinationEntity(114U);
    msg.rid = 41400U;
    msg.response.assign("OQGPPABRJWLRGVMETMTKGKITNFQVTVZSGYXYRJVXOBBYFCOXMSPDTLOKYDUEGWEGDOUTYKESXATAZRBCFYCINPNXXGMELYWIJLUOYZEUZNSUUBVVXQUFAILJJLTQDIM");
    msg.status = 3326U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileSampleEvent msg;
    msg.setTimeStamp(0.6137725195942824);
    msg.setSource(34888U);
    msg.setSourceEntity(109U);
    msg.setDestination(49842U);
    msg.setDestinationEntity(4U);
    msg.fstype = 211U;
    msg.filename.assign("HPLIDTGALXUTIFKVSOOXNNRMRVQAENGPSXFVLSNCSYHWULBTSEGTC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileSampleEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileSampleEvent msg;
    msg.setTimeStamp(0.13818720455421785);
    msg.setSource(3470U);
    msg.setSourceEntity(101U);
    msg.setDestination(49546U);
    msg.setDestinationEntity(80U);
    msg.fstype = 23U;
    msg.filename.assign("TMIEUUCXAFFXDXSKGKVKUXPYPWSUCBLMZUSLIEQSPVHQZBTZUTVZXCKQCNENBDAJSXIXZYRQDGCWJNCJJRVHOBRMEEXQYDEWVFYWBZXTVHNWKMAKWAOEXMWQNHAOTNBHFGAAHDOIWCNQNDLZQJICBOFLSOLBGAPKLPPGTYJCFRTUBRRVWTPHDNGGZMHKYIPJSMSVEUKYGLRODJWSQZEMHPQNYTPYZDMFJJFFMAIG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileSampleEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileSampleEvent msg;
    msg.setTimeStamp(0.5778253705114801);
    msg.setSource(4552U);
    msg.setSourceEntity(93U);
    msg.setDestination(32063U);
    msg.setDestinationEntity(230U);
    msg.fstype = 213U;
    msg.filename.assign("XFPAXQTDOECCQZPFTTILXOTCTPFOBRLMNPGUFEXGYQFKNNSVHUQUAYGSDLBBGWKHILFUNFRSOQUVZDHMMHRZSMPDIGERULNFBFWHVCCYZQQEBPJYJBZCHJVAPZXJYDFJKSMNVSAWQZEJVHDVVUMMEQNCTSOUDWAERXDRPEKNBWTYCWZGLMLZGIDKOBQLSIAATUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileSampleEvent #2", msg == *msg_d);
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
    msg.setTimeStamp(0.7128802857459791);
    msg.setSource(23228U);
    msg.setSourceEntity(49U);
    msg.setDestination(32200U);
    msg.setDestinationEntity(200U);
    msg.name.assign("JGVYXDFFEYOLWDTKJUSLZIKSWWSQAOMUUZI");
    msg.value = 86U;

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
    msg.setTimeStamp(0.15143507120852728);
    msg.setSource(64950U);
    msg.setSourceEntity(3U);
    msg.setDestination(20564U);
    msg.setDestinationEntity(221U);
    msg.name.assign("YSUDARUJKDBATHMKZJNRTVPINAGYHLNBMWGOGMZFEEZAPXQNBYHWKUMJGSNZXFEQYWNBHWYQIKBCXTLJCIASQZEPELJXRRWJPPVOLYNRZCBQORNKPRFCTACSSEPDHYHXFIZUEVLPDXVHTPIZYRKTQUMOWMFJLGKMBEUKCLMTHBSGELOWWOAOFFYFFIPSUKZQDJUMZBCVQXMGVUSV");
    msg.value = 94U;

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
    msg.setTimeStamp(0.17150840217659435);
    msg.setSource(37447U);
    msg.setSourceEntity(151U);
    msg.setDestination(36577U);
    msg.setDestinationEntity(241U);
    msg.name.assign("GGCFMHOZFTSPSTZXIADUVKXZKMLMZNRWIVVCHIUDNOKXQWFVMWYEOTPXDGKRPUIDARUNTAJOVFRSNIJEQWQBLQBJLRNEPQLXKCAEYQTTGBPPWHBBDMHLSFMPKSDIGZMWKXONYTYGRIMENRHYCJCFNOVVRBYKBQAULUBTXYZGEPFYJEMCKHVNQGHZHJIZZCSTUYIFGODWYAZORSIMLDXAUWSLBJJFPUBATUOOAQGJXSLVCRWHEDAXESKWCDFCHQ");
    msg.value = 186U;

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
    msg.setTimeStamp(0.15492329587040843);
    msg.setSource(28130U);
    msg.setSourceEntity(61U);
    msg.setDestination(38332U);
    msg.setDestinationEntity(227U);
    msg.name.assign("SZROQVUSMSHS");

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
    msg.setTimeStamp(0.8586582701049509);
    msg.setSource(45865U);
    msg.setSourceEntity(63U);
    msg.setDestination(22124U);
    msg.setDestinationEntity(210U);
    msg.name.assign("KALDCBPSWUFULYXOTKMHCMDZJLCHBLJDSBVMSATRBQFXZSGOHAIGSVWVBCEUUFSNVJHWAQMTDYFNFMIROYCEMQGZSKHVZNHKCGIDULQEO");

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
    msg.setTimeStamp(0.2755449273634789);
    msg.setSource(17511U);
    msg.setSourceEntity(48U);
    msg.setDestination(58002U);
    msg.setDestinationEntity(200U);
    msg.name.assign("NWXUATXBACPMZARZBJHKKSZYYBZIKIWLGXKKDRGWHNMQEXGOLIAFIXPOJNHTDPCPMUMZOBLMLWXRXCJBQCCLAUVDLR");

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
    msg.setTimeStamp(0.16758194980965535);
    msg.setSource(45490U);
    msg.setSourceEntity(242U);
    msg.setDestination(32914U);
    msg.setDestinationEntity(128U);
    msg.name.assign("LNAGACQIZUXIRRXQBVDOLCXTUETLJKSEIAFRAWTCRRNTNOCHPAVHMOFOOFZISMQJCIDMQQZFBOKYNEYAAEZNHQZCKAMRWCILKIDYJHZULYJHDEZJNYVSSPXWPSGMXKDSYRESACVUMQJDTBLMSHULVLPOUTUWXIXRBTFPGBHCBMQPETWDKKVSJRPVFWOBFEWNDA");
    msg.value = 217U;

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
    msg.setTimeStamp(0.8454464287834711);
    msg.setSource(26365U);
    msg.setSourceEntity(116U);
    msg.setDestination(39471U);
    msg.setDestinationEntity(241U);
    msg.name.assign("KNHWCBIOIHCOYBXUBTGOXKMYJYVXVSVLTAJIPYVMVQCMLMFZXUPMFAOYAKRTSEERIILMJPOAZPYXIDVMFOHFHDBFRNGCSEDYSDPNGMBWCYSZKFHALXHNZSJIQKPZZDTGIHUEUNWGFOZSUDLWBEARQNENZQDQNEYUODXUVHGXEBNLFAKVFGCEXDTFIOJCQCRTRHWCQWJZSBAZMGBRSAWWJCJEHPVIGQWAQPRQPWRNUL");
    msg.value = 203U;

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
    msg.setTimeStamp(0.609753013494747);
    msg.setSource(28474U);
    msg.setSourceEntity(221U);
    msg.setDestination(39827U);
    msg.setDestinationEntity(29U);
    msg.name.assign("YTSSXFMDCJAIFOCPZLGPATPEYUBHIFUUQZLEHQEDRHRYFCBTZNABLPCEXIICKWGKYWOYJPGVXNMFLRAHJZNCVDRLPTTDNLOSGBZVGDFBIOERSAJEKXTESIZWVBNTNFLOYMFQWGXZJQVZWXFYISRBHWUIWQFQDTOPHOKWYYLKKOVUXMCJHSNTXKUMCAXPQSJVYAADOMASGILCNHQRJRUU");
    msg.value = 101U;

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
    msg.setTimeStamp(0.4904054313746138);
    msg.setSource(42889U);
    msg.setSourceEntity(32U);
    msg.setDestination(22488U);
    msg.setDestinationEntity(203U);
    msg.value = 0.7264829183136353;

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
    msg.setTimeStamp(0.09167469508388859);
    msg.setSource(784U);
    msg.setSourceEntity(64U);
    msg.setDestination(37613U);
    msg.setDestinationEntity(201U);
    msg.value = 0.007186495920413871;

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
    msg.setTimeStamp(0.26628236881782685);
    msg.setSource(56086U);
    msg.setSourceEntity(35U);
    msg.setDestination(19996U);
    msg.setDestinationEntity(121U);
    msg.value = 0.2671399655189056;

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
    msg.setTimeStamp(0.8326145040656692);
    msg.setSource(29735U);
    msg.setSourceEntity(73U);
    msg.setDestination(6781U);
    msg.setDestinationEntity(122U);
    msg.value = 0.5365174104505684;

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
    msg.setTimeStamp(0.9150088395711892);
    msg.setSource(46407U);
    msg.setSourceEntity(151U);
    msg.setDestination(25614U);
    msg.setDestinationEntity(24U);
    msg.value = 0.6082332312724371;

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
    msg.setTimeStamp(0.7530570525564659);
    msg.setSource(46635U);
    msg.setSourceEntity(178U);
    msg.setDestination(31758U);
    msg.setDestinationEntity(147U);
    msg.value = 0.4660746649212948;

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
    msg.setTimeStamp(0.31552641000104753);
    msg.setSource(5740U);
    msg.setSourceEntity(17U);
    msg.setDestination(31058U);
    msg.setDestinationEntity(32U);
    msg.value = 0.47384601747275434;

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
    msg.setTimeStamp(0.8185190753660764);
    msg.setSource(30030U);
    msg.setSourceEntity(220U);
    msg.setDestination(28113U);
    msg.setDestinationEntity(236U);
    msg.value = 0.3372082345540516;

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
    msg.setTimeStamp(0.6346955771326245);
    msg.setSource(8323U);
    msg.setSourceEntity(92U);
    msg.setDestination(57335U);
    msg.setDestinationEntity(53U);
    msg.value = 0.45226051036859494;

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
    msg.setTimeStamp(0.5915831151867307);
    msg.setSource(14144U);
    msg.setSourceEntity(20U);
    msg.setDestination(2464U);
    msg.setDestinationEntity(122U);
    msg.restriction = 19U;
    msg.reason.assign("RSSDWDZHZHMLDUEJQIWXIRMCFIQUQDIOTSWVUEEO");

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
    msg.setTimeStamp(0.4510013788712909);
    msg.setSource(11497U);
    msg.setSourceEntity(164U);
    msg.setDestination(44115U);
    msg.setDestinationEntity(65U);
    msg.restriction = 248U;
    msg.reason.assign("OEBZKDUYYLKGRXBOEZDMWTARWYCIQHGMNMCIWFZIMGNZPMGWMOHINAAUUVRERDLIWPVBKYMYKVBSIQHVTTJEGFZZQSFRYSUTVVNOAPHDRSICOTFOETWHNKAGEQJHOJCFHQUGRDDOKVOACLCXLUQQSDYJWRCDIFPAVTHYBJUBPZKXVSDYXGPKBYRCJMBMQNUNAENCMWBARZAGTWXSJOQXPCSQE");

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
    msg.setTimeStamp(0.8819524362947903);
    msg.setSource(41226U);
    msg.setSourceEntity(2U);
    msg.setDestination(53509U);
    msg.setDestinationEntity(12U);
    msg.restriction = 249U;
    msg.reason.assign("MZXWYGVMOVYEZQVJXLBKFIWROBIXVAQYSJEAPNZGMLFTJTKNDNRLDMYRXKSZGXDFDXVZIOFRBQPDZFFTTAYZJWAURBIWVRYDKFNBEUSXEWHUC");

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
